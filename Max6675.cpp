#ifdef ARDUINO
#include "Arduino.h"
#else
// strlen strncmp memcpy
#include <string.h>
#include <stdint.h>

// cout
//#include "iostream";
#endif

#include "Sensor.h"
#include "Max6675.h"

////////////////////////////////////////////////////////////////////////////////
// Max6675::Max6675
////////////////////////////////////////////////////////////////////////////////
Max6675::Max6675( const uint8_t _arrPins[], const uint8_t _nPinCount, const uint8_t _nInterval ) : Sensor( _arrPins, _nPinCount, _nInterval )
{
  // TODO: pincount, pins, interval
    // Store the data locally
    //this->m_arrQueries  = _arrQueries;

    // Needs 3 pins
    if ( _nPinCount < 3 )
        return;

  this->m_sclk = _arrPins[ 0 ];
  this->m_cs   = _arrPins[ 1 ];
  this->m_miso = _arrPins[ 2 ];

  //define pin modes
  pinMode( this->m_sclk, OUTPUT );
  pinMode( this->m_cs, OUTPUT );
  pinMode( this->m_miso, INPUT );

  digitalWrite( this->m_cs, HIGH );
};

/*
Max6675::~Max6675( )
{
    //delete [] this->m_arrPathMatches;
};
*/

String Max6675::getId( uint8_t _nSensor/* = 0 */)
{
  return "0xDEADBEEF";
};

int16_t Max6675::getValue( uint8_t _nSensor/* = 0 */ )
{
    /*
    Bits
    15 14 13 12 11 10  9  8  7  6  5  4  3  2  1  0
     0  M                                L  I  0  T
    M: Most significant bit
    L: Least significant bit
    I: open connector
    T: three-state
    which makes it 0-1024 celcius
    */
    uint16_t value;

    digitalWrite( this->m_cs, LOW );
    delay( 1 );

    value = this->spiRead( );
    value <<= 8;
    value |= this->spiRead( );

    digitalWrite( this->m_cs, HIGH );

    if ( value & 0x4 )
    {
        // uh oh, no thermocouple attached!
        return -1;
    }

    value = (value >> 5) * 100 + ((value >> 3) & 3) * 25;

    return value;
};

int16_t Max6675::getFactor( uint8_t _nSensor/* = 0 */)
{
    return 100;
};

uint16_t Max6675::getInterval( uint8_t _nSensor/* = 0 */)
{
    return 175;
};

Unit::Enum Max6675::getUnit( uint8_t _nSensor/* = 0 */)
{
    return Unit::Celcius;
};

byte Max6675::spiRead( )
{
    int i;
    byte d = 0;

    for (i=7; i>=0; i--)
    {
        digitalWrite( this->m_sclk, LOW );
        delay( 1 );
        if ( digitalRead( this->m_miso ) )
        {
            //set the bit to 0 no matter what
          d |= (1 << i);
        }

        digitalWrite( this->m_sclk, HIGH );
        delay( 1 );
    }

    return d;
}


#ifdef DEBUG
#endif


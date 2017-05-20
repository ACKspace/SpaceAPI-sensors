#ifdef ARDUINO
#include "Arduino.h"
#else
// Include standard libraries for other platforms here
#endif

#include "Output.h"
#include "PinOut.h"

////////////////////////////////////////////////////////////////////////////////
// PinOut::PinOut output
////////////////////////////////////////////////////////////////////////////////
PinOut::PinOut( const uint8_t _arrPins[], const uint8_t _nPinCount ) : Output( _arrPins, _nPinCount )
{
  // TODO: pincount, pins, interval
    // Store the data locally
    //this->m_arrQueries  = _arrQueries;

    if ( _nPinCount != 1 )
        return;

    this->m_nPin = _arrPins[ 0 ];

    pinMode( this->m_nPin, OUTPUT );

    // Assume percentage 
    this->m_nThreshold = 100;
};

////////////////////////////////////////////////////////////////////////////////
// Output
////////////////////////////////////////////////////////////////////////////////
bool PinOut::setCount( uint8_t _nSensor )
{
    return _nSensor == 1 ? true : false;
};

bool PinOut::setId( String _strId, uint8_t _nSensor/* = 0 */)
{
    return _nSensor == 1 ? true : false;
};

bool PinOut::setValue( int16_t _nValue, uint8_t _nSensor/* = 0 */)
{
    if ( _nSensor > 0 )
    {
        //Serial.println( "sensor out of bounds" );
        return false;
    }
    
    //Serial.println( _nValue >= this->m_nThreshold ? "HIGH" : "LOW" );

    digitalWrite( this->m_nPin, _nValue >= this->m_nThreshold ? HIGH : LOW );
    return true;
};

bool PinOut::setFactor( int16_t _nFactor, uint8_t _nSensor/* = 0 */)
{
    // TODO: take factor into account
    if ( _nSensor > 0 )
        return false;

    return true;
};

bool PinOut::setInterval( uint16_t _nInterval, uint8_t _nSensor/* = 0 */)
{
    return _nSensor == 1 ? true : false;
};

bool PinOut::setUnit( Unit::Enum _eUnit, uint8_t _nSensor/* = 0 */)
{
    if ( _nSensor > 0 )
        return false;
    // TODO: we might need some differentiating of types of unit.
    //       For now: assume persentage
    return true;
};


        // TODO: determine threshold (direction)
        // Certain outputs can have multiple states (thresholds); the main app will set a threshold value per output
uint8_t PinOut::getThresholdCount( uint8_t _nSensor/* = 0 */)
{
    return this->m_nThreshold;
};

bool PinOut::setThreshold( uint8_t _nThreshold, int16_t _nThresholdValue, uint8_t _nSensor/* = 0 */)
{

    if ( _nThreshold > 0 )
        return false;

    if ( _nSensor > 0 )
        return false;

    this->m_nThreshold = _nThresholdValue;
    return true;
};


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

//using namespace std;

////////////////////////////////////////////////////////////////////////////////
// Sensor::Sensor
////////////////////////////////////////////////////////////////////////////////
Sensor::Sensor( const uint8_t _arrPins[], uint8_t _nPinCount, const uint8_t _nInterval )
{
  // TODO: pincount, pins, interval
    // Store the data locally
    //this->m_arrQueries  = _arrQueries;
};

Sensor::~Sensor( )
{
    //delete [] this->m_arrPathMatches;
};


String Sensor::getId( uint8_t _nSensor/* = 0 */)
{
  return "";
};


uint16_t Sensor::getValue( uint8_t _nSensor/* = 0 */ )
{
  return 0;
};



#ifdef DEBUG
#endif


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


uint8_t Sensor::getCount( )
{
    return 1;
};



////////////////////////////////////////////////////////////////////////////////
// Sensor::Sensor
////////////////////////////////////////////////////////////////////////////////
Sensor::Sensor( const uint8_t _arrPins[], const uint8_t _nPinCount, const uint8_t _nInterval )
{
    // TODO: pincount, pins, interval
};

/*Sensor::~Sensor( )
{
    //delete [] this->m_arrPathMatches;
};
*/


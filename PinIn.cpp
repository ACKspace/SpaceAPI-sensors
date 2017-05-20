#ifdef ARDUINO
#include "Arduino.h"
#else
// Include standard libraries for other platforms here
#endif

#include "Sensor.h"
#include "PinIn.h"

////////////////////////////////////////////////////////////////////////////////
// PinIn::PinIn
////////////////////////////////////////////////////////////////////////////////
PinIn::PinIn( const uint8_t _arrPins[], const uint8_t _nPinCount, const uint8_t _nInterval ) : Sensor( _arrPins, _nPinCount, _nInterval )
{
}

String PinIn::getId( uint8_t _nSensor/* = 0 */)
{
  return "PinN";
};

int16_t PinIn::getValue( uint8_t _nSensor/* = 0 */)
{
    // TODO
    return 0;
};

int16_t PinIn::getFactor( uint8_t _nSensor/* = 0 */)
{
    return 100;
};

uint16_t PinIn::getInterval( uint8_t _nSensor/* = 0 */)
{
    return 0;
};

Unit::Enum PinIn::getUnit( uint8_t _nSensor/* = 0 */)
{
    return Unit::Percent;
};


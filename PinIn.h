#ifndef PININ_H
#define PININ_H

#include "Enums.h"
#include "Sensor.h"

// NOTE: The PinIn and PinOut modules are more or less an example of Sensor and Output modules.
//       One can use these as a stub to include new Sensors/Outputs and busses
class PinIn : public Sensor
{
    public:
        PinIn( const uint8_t _arrPins[], const uint8_t _nPinCount, const uint8_t _nInterval );
        //virtual ~Output();

    public:
        virtual String      getId( uint8_t _nSensor = 0 );
        virtual int16_t     getValue( uint8_t _nSensor = 0 );
        virtual int16_t     getFactor( uint8_t _nSensor = 0 );
        virtual uint16_t    getInterval( uint8_t _nSensor = 0 );
        virtual Unit::Enum  getUnit( uint8_t _nSensor = 0 );

    private:
        uint8_t m_nPin;
        int16_t m_nThreshold;
};

        /*
        (spacestate) switch
        joystick
        */

#endif

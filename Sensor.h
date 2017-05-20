#ifndef SENSOR_H
#define SENSOR_H

#include <Enums.h>

class Sensor
{
    public:
        Sensor( const uint8_t _arrPins[], const uint8_t _nPinCount, const uint8_t _nInterval );
        //virtual ~Sensor();

    public:
        virtual uint8_t     getCount( );
        virtual String      getId( uint8_t _nSensor = 0 ) = 0;
        virtual int16_t     getValue( uint8_t _nSensor = 0 ) = 0;
        virtual int16_t     getFactor( uint8_t _nSensor = 0 ) = 0;
        virtual uint16_t    getInterval( uint8_t _nSensor = 0 ) = 0;
        virtual Unit::Enum  getUnit( uint8_t _nSensor = 0 ) = 0;
};

#endif

#ifndef MAX6675_H
#define MAX6675_H

#include "Sensor.h"

class Max6675 : public Sensor
{
    public:
        Max6675( const uint8_t _arrPins[], const uint8_t _nPinCount, const uint8_t _nInterval );
        //virtual ~Max6675();

    public:
        //virtual uint8_t     getCount( );
        virtual String      getId( uint8_t _nSensor = 0 );
        virtual int16_t     getValue( uint8_t _nSensor = 0 );
        virtual int16_t     getFactor( uint8_t _nSensor = 0 );
        virtual uint16_t    getInterval( uint8_t _nSensor = 0 );
        virtual Unit::Enum  getUnit( uint8_t _nSensor = 0 );

    private:
        uint8_t m_sclk;
        uint8_t m_cs;
        uint8_t m_miso;

    private:
        byte    spiRead( );
};

#endif

#ifndef PINOUT_H
#define PINOUT_H

#include "Enums.h"
#include "Output.h"

// NOTE: The PinIn and PinOut modules are more or less an example of Sensor and Output modules.
//       One can use these as a stub to include new Sensors/Outputs and busses
class PinOut : public Output
{
    public:
        PinOut( const uint8_t _arrPins[], const uint8_t _nPinCount );
        //virtual ~Output();

    public:
        // Output
        virtual bool setCount( uint8_t _nSensor );
        virtual bool setId( String _strId, uint8_t _nSensor = 0 );
        virtual bool setValue( int16_t _nValue, uint8_t _nSensor = 0 );
        virtual bool setFactor( int16_t _nFactor, uint8_t _nSensor = 0 );
        virtual bool setInterval( uint16_t _nInterval, uint8_t _nSensor = 0 );
        virtual bool setUnit( Unit::Enum _eUnit, uint8_t _nSensor = 0 );

        // TODO: determine threshold (direction)
        // Certain outputs can have multiple states (thresholds); the main app will set a threshold value per output
        virtual uint8_t getThresholdCount( uint8_t _nSensor = 0 );
        virtual bool setThreshold( uint8_t _nThreshold, int16_t _nThresholdValue, uint8_t _nSensor = 0 );

    private:
        uint8_t m_nPin;
        int16_t m_nThreshold;
};


        /*
        displays
            chart
            label+value

        singleLeds, dualLeds, RgbLeds, ledstrips
            7: idle (yellow), unknown api (cyan), connection failed (blue), parser error/unexpected result (purple), open (green), closed (red), unknown (yellow)
            open (100), closed (0), unknown (50), undefined (-1), parserError (-2), APIerror (-3), connectionError (-4)
        locks
        beepers
        */

#endif

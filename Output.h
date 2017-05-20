#ifndef OUTPUT_H
#define OUTPUT_H

#include <Enums.h>

class Output
{
    // TODO: add options: ledtype, soundtype
    public:
        Output( const uint8_t _arrPins[], const uint8_t _nPinCount );
        //virtual ~Output();

    public:
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

        //getOutputType(); //single, sequential, multiple (combined?)
        //getMaxOutputCount(); // ledcount?
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
};

#endif

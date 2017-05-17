#ifndef SENSOR_H
#define SENSOR_H

//#define DEBUG
//#define INFO
//#define VERBOSE
//#define INSANE

namespace Unit
{
    enum Enum : uint8_t
    {
        Undefined   = 0,
        Celcius     = 1
    };
}

class Sensor
{
    public:
        Sensor( const uint8_t _arrPins[], uint8_t _nPinCount, const uint8_t _nInterval );
        virtual ~Sensor();

    public:
        virtual String    getId( uint8_t _nSensor = 0 );
        virtual uint16_t  getValue( uint8_t _nSensor = 0 ) /* TODO: make abstract  = 0*/;

    private:
        /*const char**        m_arrQueries;*/

    private:
        /*bool                _pushState( ParserState::Enum _eParserState );*/

#ifdef DEBUG
/*
        void                _printDebugData( ParserState::Enum _eParserState );
        void                print( char* _strMessage );
*/
#endif

};

#endif

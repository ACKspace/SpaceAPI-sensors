#ifdef ARDUINO
#include "Arduino.h"
#else
// strlen strncmp memcpy
#include <string.h>
#include <stdint.h>

// cout
//#include "iostream";
#endif

#include "Output.h"


////////////////////////////////////////////////////////////////////////////////
// Output::Output
////////////////////////////////////////////////////////////////////////////////
Output::Output( const uint8_t _arrPins[], const uint8_t _nPinCount )
{
  // TODO: pincount, pins, interval
    // Store the data locally
    //this->m_arrQueries  = _arrQueries;
};

/*
Sensor::~Sensor( )
{
    //delete [] this->m_arrPathMatches;
};
*/

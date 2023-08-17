/*
 * file: WebServer_ruRegisterWebPage.cpp
 *
 * Implementation for WebServer_RegisterWebPage
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */

/* INCLUDES */

#include "ETSRClock.hpp"
#include "Arduino.h"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */
/* END OF TYPE DEFINITIONS */

/* VARIABLES */

uint32_t ETSRClock::reloads = 0;
uint32_t ETSRClock::prevMs = 0;

/* END OF VARIABLES */

/* LOCAL FUNCTION DECLARATIONS */
/* END OF LOCAL FUNCTION DECLARATIONS */

/* LOCAL FUNCTION DEFINITIONS */
/* END OF LOCAL FUNCTION DEFINITIONS */

/* PRIVATE FUNCTION DEFINITIONS */
/* END OF PRIVATE FUNCTION DEFINITIONS */

/* PROTECTED FUNCTION DEFINITIONS */
/* END OF PROTECTED FUNCTION DEFINITIONS */

/* PUBLIC FUNCTION DEFINITIONS */

sdtTime ETSRClock::GetTimeMs()
{
    uint32 currentMs = millis();
    sdtTime value = (sdtTime)(((sdtTime)reloads << 32) | currentMs);
    return value;
}


sdtTime ETSRClock::GetSeconds()
{
    sdtTime currentMs = GetTimeMs();
    return currentMs / 1000;
}

void ETSRClock::Refresh()
{
    uint32 currentMs = millis();
    if (currentMs < prevMs)
    {
        reloads++;
    }
    prevMs = currentMs;
}

bool ETSRClock::TimeElapsed(sdtTime startTime, sdtTime timeoutMs)
{
    sdtTime currentTime = ETSRClock::GetTimeMs();
    if (currentTime > startTime + timeoutMs)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* END OF PUBLIC FUNCTION DEFINITIONS */

/* End of file */

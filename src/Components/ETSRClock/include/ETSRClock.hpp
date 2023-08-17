/*
 * file: ETSRClock.hpp
 *
 * Implementation for header of WebServer
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef ETSR_CLOCK_HPP
#define ETSR_CLOCK_HPP


/* INCLUDES */

#include <stdint.h>
#include "Rte_DataTypes.hpp"

/* END OF INCLUDES */


/* MACROS */
/* END OF MACROS */


/* TYPE DEFINITIONS */

using sdtTime = uint64;

class ETSRClock
{
public:
    /* Constructor */
    static sdtTime GetTimeMs();
    static sdtTime GetSeconds();
    static bool TimeElapsed(sdtTime startTime, sdtTime timeout);
    void Refresh();

protected:
    /* Make other functions here */
private:
    static uint32 reloads;
    static uint32 prevMs;
};

/* END OF TYPE DEFINITIONS */


/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */


/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* ETSR_CLOCK_HPP */

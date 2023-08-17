/*
 * file: Switcher_ruRefresh.cpp
 *
 * Implementation for Switcher_Refresh
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */

/* INCLUDES */

#include "Switcher.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */
/* END OF TYPE DEFINITIONS */

/* VARIABLES */
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

void Switcher::ruRefresh(void)
{
    if (_activated)
    {
        if (ETSRClock::TimeElapsed(_startMilliseconds, Rte.CData_SuperFreezeTimeSeconds() * 1000))
        {
            _activated = false;
        }
    }

    Rte.Active.Write_Activate(_activated);
}

/* END OF PUBLIC FUNCTION DEFINITIONS */

/* End of file */

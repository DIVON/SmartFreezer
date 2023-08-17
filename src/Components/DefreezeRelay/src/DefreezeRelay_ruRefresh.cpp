/*
 * file: DefreezeRelay_ruRefresh.cpp
 *
 * Implementation for DefreezeRelay_Refresh
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */

/* INCLUDES */

#include "DefreezeRelay.hpp"
#include "Arduino.h"

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

void DefreezeRelay::ruRefresh(void)
{
    if (digitalRead(Rte.CData_Pin()) != 0)
    {
        Rte.Status.Write_Status(enDefreezeRelayStatus::DRS_CLOSED);
    }
    else
    {
        Rte.Status.Write_Status(enDefreezeRelayStatus::DRS_OPEN);
    }
}

/* END OF PUBLIC FUNCTION DEFINITIONS */

/* End of file */

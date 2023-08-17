/*
 * file: Relay_ruOpen.cpp
 *
 * Implementation for Relay_Open
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */

/* INCLUDES */

#include "Relay.hpp"

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

Std_ReturnType Relay::ruOpen(void)
{
    digitalWrite(Rte.CData_Pin(), 0);
    return Std_ReturnType::RTE_E_OK;
}

/* END OF PUBLIC FUNCTION DEFINITIONS */

/* End of file */

/*
 * file: DS18B20Driver_ruInit.cpp
 *
 * Implementation for DS18B20Driver_Init
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */

/* INCLUDES */

#include "DS18B20Driver.hpp"

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

void DS18B20Driver::ruInit(void)
{
    oneWire = new OneWire(Rte.CData_Pin());
    sensor = new DallasTemperature(oneWire);
    sensor->begin();
}

/* END OF PUBLIC FUNCTION DEFINITIONS */

/* End of file */

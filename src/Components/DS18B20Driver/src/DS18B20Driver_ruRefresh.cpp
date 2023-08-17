/*
 * file: DS18B20Driver_ruRefresh.cpp
 *
 * Implementation for DS18B20Driver_Refresh
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

void DS18B20Driver::ruRefresh(void)
{
    cdtQualifiedTemperature outputTemperature;

    sensor->requestTemperatures();
    float temperatureC = sensor->getTempCByIndex(0);

    if (temperatureC == -127.00)
    {
        outputTemperature.Qualifier = enQualifier::SEN_NOT_AVAILABLE;
        outputTemperature.Temperature = 0.f;
    }
    else
    {
        outputTemperature.Qualifier = enQualifier::SEN_RELIABLE;
        outputTemperature.Temperature = temperatureC;
    }
    Rte.Temperature.Write_Temperature(outputTemperature);
}

/* END OF PUBLIC FUNCTION DEFINITIONS */

/* End of file */

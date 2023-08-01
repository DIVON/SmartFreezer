/*
 * file: Settings.hpp
 *
 * Implementation for header of Settings
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef SETTINGS_HPP
#define SETTINGS_HPP


/* INCLUDES */

#include "Rte_Settings.hpp"

/* END OF INCLUDES */


/* MACROS */
/* END OF MACROS */


/* TYPE DEFINITIONS */

class Settings final: private Rte_Base_Settings
{
public:
    /* Constructor */
    Settings(const Rte_Settings &Rte);

    /* Component runnables */
    Std_ReturnType ruSaveFreezerSetPoints(void);
    Std_ReturnType ruSaveMqttSettings(void);
    Std_ReturnType ruSaveWiFiSettiings(void);

protected:
    /* Make other functions here */ 
private:

};

/* END OF TYPE DEFINITIONS */


/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */


/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* SETTINGS_HPP */

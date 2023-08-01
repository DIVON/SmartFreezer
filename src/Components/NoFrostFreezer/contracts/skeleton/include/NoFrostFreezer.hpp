/*
 * file: NoFrostFreezer.hpp
 *
 * Implementation for header of NoFrostFreezer
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef NO_FROST_FREEZER_HPP
#define NO_FROST_FREEZER_HPP


/* INCLUDES */

#include "Rte_NoFrostFreezer.hpp"

/* END OF INCLUDES */


/* MACROS */
/* END OF MACROS */


/* TYPE DEFINITIONS */

class NoFrostFreezer final: private Rte_Base_NoFrostFreezer
{
public:
    /* Constructor */
    NoFrostFreezer(const Rte_NoFrostFreezer &Rte);

    /* Component runnables */
    Std_ReturnType ruDefreazerSwitchOn(void);
    Std_ReturnType ruFreezerSwitchOn(void);
    Std_ReturnType ruSwitchOff(void);

protected:
    /* Make other functions here */ 
private:

};

/* END OF TYPE DEFINITIONS */


/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */


/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* NO_FROST_FREEZER_HPP */

/*
 * file: SuperFreeze.hpp
 *
 * Implementation for header of SuperFreeze
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef SUPER_FREEZE_HPP
#define SUPER_FREEZE_HPP


/* INCLUDES */

#include "Rte_SuperFreeze.hpp"

/* END OF INCLUDES */


/* MACROS */
/* END OF MACROS */


/* TYPE DEFINITIONS */

class SuperFreeze final: private Rte_Base_SuperFreeze
{
public:
    /* Constructor */
    SuperFreeze(const Rte_SuperFreeze &Rte);

    /* Component runnables */
    void ruRefresh(void);
    Std_ReturnType ruSwitchOff(void);
    Std_ReturnType ruSwitchOn(void);

protected:
    /* Make other functions here */ 
private:

};

/* END OF TYPE DEFINITIONS */


/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */


/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* SUPER_FREEZE_HPP */

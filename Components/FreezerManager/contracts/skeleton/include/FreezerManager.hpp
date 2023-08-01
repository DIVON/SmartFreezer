/*
 * file: FreezerManager.hpp
 *
 * Implementation for header of FreezerManager
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef FREEZER_MANAGER_HPP
#define FREEZER_MANAGER_HPP


/* INCLUDES */

#include "Rte_FreezerManager.hpp"

/* END OF INCLUDES */


/* MACROS */
/* END OF MACROS */


/* TYPE DEFINITIONS */

class FreezerManager final: private Rte_Base_FreezerManager
{
public:
    /* Constructor */
    FreezerManager(const Rte_FreezerManager &Rte);

    /* Component runnables */
    void ruRefresh(void);

protected:
    /* Make other functions here */ 
private:

};

/* END OF TYPE DEFINITIONS */


/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */


/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* FREEZER_MANAGER_HPP */

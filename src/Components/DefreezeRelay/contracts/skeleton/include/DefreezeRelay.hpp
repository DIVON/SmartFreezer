/*
 * file: DefreezeRelay.hpp
 *
 * Implementation for header of DefreezeRelay
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef DEFREEZE_RELAY_HPP
#define DEFREEZE_RELAY_HPP


/* INCLUDES */

#include "Rte_DefreezeRelay.hpp"

/* END OF INCLUDES */


/* MACROS */
/* END OF MACROS */


/* TYPE DEFINITIONS */

class DefreezeRelay final: private Rte_Base_DefreezeRelay
{
public:
    /* Constructor */
    DefreezeRelay(const Rte_DefreezeRelay &Rte);

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

#endif /* DEFREEZE_RELAY_HPP */

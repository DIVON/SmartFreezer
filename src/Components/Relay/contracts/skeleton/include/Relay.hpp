/*
 * file: Relay.hpp
 *
 * Implementation for header of Relay
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RELAY_HPP
#define RELAY_HPP


/* INCLUDES */

#include "Rte_Relay.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */

class Relay final: private Rte_Base_Relay
{
public:
    /* Constructor */
    Relay(const Rte_Relay &Rte);

    /* Component runnables */
    Std_ReturnType ruClose(void);
    Std_ReturnType ruOpen(void);

protected:
    /* Make other functions here */ 
private:

};

/* END OF TYPE DEFINITIONS */

/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */

/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* RELAY_HPP */

/*
 * file: Switcher.hpp
 *
 * Implementation for header of Switcher
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef SWITCHER_HPP
#define SWITCHER_HPP


/* INCLUDES */

#include "Rte_Switcher.hpp"
#include "ETSRClock.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */

class Switcher final: private Rte_Base_Switcher
{
public:
    /* Constructor */
    Switcher(const Rte_Switcher &Rte);

    /* Component runnables */
    void ruRefresh(void);
    Std_ReturnType ruSwitchOff(void);
    Std_ReturnType ruSwitchOn(void);

protected:
    /* Make other functions here */
private:
    bool _activated = false;
    sdtTime _startMilliseconds = 0;
};

/* END OF TYPE DEFINITIONS */

/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */

/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* SWITCHER_HPP */

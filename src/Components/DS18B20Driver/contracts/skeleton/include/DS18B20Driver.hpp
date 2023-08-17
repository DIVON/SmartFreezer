/*
 * file: DS18B20Driver.hpp
 *
 * Implementation for header of DS18B20Driver
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef DS18B20DRIVER_HPP
#define DS18B20DRIVER_HPP


/* INCLUDES */

#include "Rte_DS18B20Driver.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */

class DS18B20Driver final: private Rte_Base_DS18B20Driver
{
public:
    /* Constructor */
    DS18B20Driver(const Rte_DS18B20Driver &Rte);

    /* Component runnables */
    void ruInit(void);
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

#endif /* DS18B20DRIVER_HPP */

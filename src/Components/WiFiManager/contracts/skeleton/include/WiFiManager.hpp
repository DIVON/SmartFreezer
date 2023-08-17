/*
 * file: WiFiManager.hpp
 *
 * Implementation for header of WiFiManager
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef WI_FI_MANAGER_HPP
#define WI_FI_MANAGER_HPP


/* INCLUDES */

#include "Rte_WiFiManager.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */

class WiFiManager final: private Rte_Base_WiFiManager
{
public:
    /* Constructor */
    WiFiManager(const Rte_WiFiManager &Rte);

    /* Component runnables */
    Std_ReturnType ruNewWiFiSettings(void);
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

#endif /* WI_FI_MANAGER_HPP */

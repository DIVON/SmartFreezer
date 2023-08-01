/*
 * file: Rte_WiFiManager.hpp
 *
 * Implementation for WiFiManager header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_WI_FI_MANAGER_HPP
#define RTE_WI_FI_MANAGER_HPP

#ifndef RTE_CPP
    #ifdef RTE_APP_HEADER_FILE
        #error Multiple application header files included.
    #else
        #define RTE_APP_HEADER_FILE
    #endif
#endif

#include <Rte_DataTypes.hpp>
#include <Rte_PortInterfaces.hpp>

#define RTE_DEFINED

/*************************************************************
 * BEGIN RTE Component Data Structure Definition
 *************************************************************/

struct Rte_WiFiManager {
    /* Per Instance Memory Section */
    /* Port API Section */
    Rte_PDS_isrWiFiSettings_R WiFiSettings;
    /* Calibration Parameter Handles Section */
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_WiFiManager
{
public:
    /* Constructor */
    Rte_Base_WiFiManager(const Rte_WiFiManager &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual Std_ReturnType ruNewWiFiSettings(void) = 0;
    virtual void ruRefresh(void) = 0;
protected:
    const Rte_WiFiManager &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_WI_FI_MANAGER_HPP */

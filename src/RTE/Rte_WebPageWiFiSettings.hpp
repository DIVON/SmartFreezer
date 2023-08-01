/*
 * file: Rte_WebPageWiFiSettings.hpp
 *
 * Implementation for WebPageWiFiSettings header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_WEB_PAGE_WI_FI_SETTINGS_HPP
#define RTE_WEB_PAGE_WI_FI_SETTINGS_HPP

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

struct Rte_WebPageWiFiSettings {
    /* Per Instance Memory Section */
    /* Port API Section */
    Rte_PDS_icsNewWiFiSettings_C NewWiFiSettings;
    Rte_PDS_icsWebPageRegistration_C Register;
    Rte_PDS_isrWiFiSettings_R WiFiSettings;
    /* Calibration Parameter Handles Section */
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_WebPageWiFiSettings
{
public:
    /* Constructor */
    Rte_Base_WebPageWiFiSettings(const Rte_WebPageWiFiSettings &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual void ruInit(void) = 0;
protected:
    const Rte_WebPageWiFiSettings &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_WEB_PAGE_WI_FI_SETTINGS_HPP */

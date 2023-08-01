/*
 * file: Rte_WebPageMqttSettings.hpp
 *
 * Implementation for WebPageMqttSettings header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_WEB_PAGE_MQTT_SETTINGS_HPP
#define RTE_WEB_PAGE_MQTT_SETTINGS_HPP

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

struct Rte_WebPageMqttSettings {
    /* Per Instance Memory Section */
    /* Port API Section */
    Rte_PDS_isrMqttSettings_R MqttSettings;
    Rte_PDS_icsWebPageRegistration_C Register;
    Rte_PDS_icsNewMqttSettings_C Save;
    /* Calibration Parameter Handles Section */
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_WebPageMqttSettings
{
public:
    /* Constructor */
    Rte_Base_WebPageMqttSettings(const Rte_WebPageMqttSettings &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual void ruInit(void) = 0;
protected:
    const Rte_WebPageMqttSettings &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_WEB_PAGE_MQTT_SETTINGS_HPP */

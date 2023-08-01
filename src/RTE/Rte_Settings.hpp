/*
 * file: Rte_Settings.hpp
 *
 * Implementation for Settings header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_SETTINGS_HPP
#define RTE_SETTINGS_HPP

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

struct Rte_Settings {
    /* Per Instance Memory Section */
    /* Port API Section */
    Rte_PDS_isrSetPoints_P FreezerSetPoints;
    Rte_PDS_isrMqttSettings_P MqttSettings;
    Rte_PDS_icsNotification_C WiFiNotificaion;
    Rte_PDS_isrWiFiSettings_P WiFiSettings;
    /* Calibration Parameter Handles Section */
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_Settings
{
public:
    /* Constructor */
    Rte_Base_Settings(const Rte_Settings &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual Std_ReturnType ruSaveFreezerSetPoints(void) = 0;
    virtual Std_ReturnType ruSaveMqttSettings(void) = 0;
    virtual Std_ReturnType ruSaveWiFiSettiings(void) = 0;
protected:
    const Rte_Settings &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_SETTINGS_HPP */

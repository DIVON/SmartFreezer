/*
 * file: Rte_MqttPublisher.hpp
 *
 * Implementation for MqttPublisher header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_MQTT_PUBLISHER_HPP
#define RTE_MQTT_PUBLISHER_HPP

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

struct Rte_MqttPublisher {
    /* Per Instance Memory Section */
    /* Port API Section */
    Rte_PDS_isrQualifiedTemperature_R CoolerTemperature;
    Rte_PDS_isrQualifiedTemperature_R FreezerTemperature;
    Rte_PDS_isrFreezerStatus_R Status;
    /* Calibration Parameter Handles Section */
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_MqttPublisher
{
public:
    /* Constructor */
    Rte_Base_MqttPublisher(const Rte_MqttPublisher &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual void ruRefresh(void) = 0;
protected:
    const Rte_MqttPublisher &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_MQTT_PUBLISHER_HPP */

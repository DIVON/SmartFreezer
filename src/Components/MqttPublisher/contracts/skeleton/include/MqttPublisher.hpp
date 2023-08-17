/*
 * file: MqttPublisher.hpp
 *
 * Implementation for header of MqttPublisher
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef MQTT_PUBLISHER_HPP
#define MQTT_PUBLISHER_HPP


/* INCLUDES */

#include "Rte_MqttPublisher.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */

class MqttPublisher final: private Rte_Base_MqttPublisher
{
public:
    /* Constructor */
    MqttPublisher(const Rte_MqttPublisher &Rte);

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

#endif /* MQTT_PUBLISHER_HPP */

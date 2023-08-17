/*
 * file: WebPageMqttSettings.hpp
 *
 * Implementation for header of WebPageMqttSettings
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef WEB_PAGE_MQTT_SETTINGS_HPP
#define WEB_PAGE_MQTT_SETTINGS_HPP


/* INCLUDES */

#include "Rte_WebPageMqttSettings.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */

class WebPageMqttSettings final: private Rte_Base_WebPageMqttSettings
{
public:
    /* Constructor */
    WebPageMqttSettings(const Rte_WebPageMqttSettings &Rte);

    /* Component runnables */
    void ruInit(void);

protected:
    /* Make other functions here */ 
private:

};

/* END OF TYPE DEFINITIONS */

/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */

/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* WEB_PAGE_MQTT_SETTINGS_HPP */

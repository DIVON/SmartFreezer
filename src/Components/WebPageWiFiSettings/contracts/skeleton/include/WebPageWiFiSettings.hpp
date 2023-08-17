/*
 * file: WebPageWiFiSettings.hpp
 *
 * Implementation for header of WebPageWiFiSettings
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef WEB_PAGE_WI_FI_SETTINGS_HPP
#define WEB_PAGE_WI_FI_SETTINGS_HPP


/* INCLUDES */

#include "Rte_WebPageWiFiSettings.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */

class WebPageWiFiSettings final: private Rte_Base_WebPageWiFiSettings
{
public:
    /* Constructor */
    WebPageWiFiSettings(const Rte_WebPageWiFiSettings &Rte);

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

#endif /* WEB_PAGE_WI_FI_SETTINGS_HPP */

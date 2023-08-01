/*
 * file: WebServer.hpp
 *
 * Implementation for header of WebServer
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef WEB_SERVER_HPP
#define WEB_SERVER_HPP


/* INCLUDES */

#include "Rte_WebServer.hpp"

/* END OF INCLUDES */


/* MACROS */
/* END OF MACROS */


/* TYPE DEFINITIONS */

class WebServer final: private Rte_Base_WebServer
{
public:
    /* Constructor */
    WebServer(const Rte_WebServer &Rte);

    /* Component runnables */
    Std_ReturnType ruRegisterWebPage(uint8 * page, uint8 * handleFunction);

protected:
    /* Make other functions here */ 
private:

};

/* END OF TYPE DEFINITIONS */


/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */


/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* WEB_SERVER_HPP */

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

#ifdef ESP32
#include <WiFi.h>
#include <AsyncTCP.h>
#elif defined(ESP8266)
#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#endif
#include <ESPAsyncWebServer.h>

/* END OF INCLUDES */


/* MACROS */

using WebPageHandleFunction = std::function<void(AsyncWebServerRequest *request)>;

/* END OF MACROS */


/* TYPE DEFINITIONS */


class WebServer final: private Rte_Base_WebServer
{
public:
    /* Constructor */
    WebServer(const Rte_WebServer &Rte);

    /* Component runnables */
    Std_ReturnType ruRegisterWebPage(const uint8 * page, uint8 * handleFunction);

protected:
    /* Make other functions here */
private:
    static constexpr size_t maxWebPageHandlers = 10u;
    size_t handlersCount = 0;

    WebPageHandleFunction *handlers[maxWebPageHandlers];

    AsyncWebServer _server{80};
};

/* END OF TYPE DEFINITIONS */


/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */


/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* WEB_SERVER_HPP */

/*
 * file: Rte_WebServer.hpp
 *
 * Implementation for WebServer header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_WEB_SERVER_HPP
#define RTE_WEB_SERVER_HPP

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

struct Rte_WebServer {
    /* Per Instance Memory Section */
    /* Port API Section */
    /* Calibration Parameter Handles Section */
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_WebServer
{
public:
    /* Constructor */
    Rte_Base_WebServer(const Rte_WebServer &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual Std_ReturnType ruRegisterWebPage(const uint8 * page, uint8 * handleFunction) = 0;
protected:
    const Rte_WebServer &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_WEB_SERVER_HPP */

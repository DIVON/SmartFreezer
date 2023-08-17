/*
 * file: Rte_Relay.hpp
 *
 * Implementation for Relay header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_RELAY_HPP
#define RTE_RELAY_HPP

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

struct Rte_Relay {
    /* Per Instance Memory Section */
    /* Port API Section */
    /* Calibration Parameter Handles Section */
    uint32 (*CData_Pin)(void);
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_Relay
{
public:
    /* Constructor */
    Rte_Base_Relay(const Rte_Relay &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual Std_ReturnType ruClose(void) = 0;
    virtual Std_ReturnType ruOpen(void) = 0;
protected:
    const Rte_Relay &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_RELAY_HPP */

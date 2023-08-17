/*
 * file: Rte_Switcher.hpp
 *
 * Implementation for Switcher header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_SWITCHER_HPP
#define RTE_SWITCHER_HPP

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

struct Rte_Switcher {
    /* Per Instance Memory Section */
    uint32 * Pim_StartTime;
    /* Port API Section */
    Rte_PDS_isrActiveStatus_P Active;
    /* Calibration Parameter Handles Section */
    uint32 (*CData_SuperFreezeTimeSeconds)(void);
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_Switcher
{
public:
    /* Constructor */
    Rte_Base_Switcher(const Rte_Switcher &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual void ruRefresh(void) = 0;
    virtual Std_ReturnType ruSwitchOff(void) = 0;
    virtual Std_ReturnType ruSwitchOn(void) = 0;
protected:
    const Rte_Switcher &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_SWITCHER_HPP */

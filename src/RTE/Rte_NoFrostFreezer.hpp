/*
 * file: Rte_NoFrostFreezer.hpp
 *
 * Implementation for NoFrostFreezer header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_NO_FROST_FREEZER_HPP
#define RTE_NO_FROST_FREEZER_HPP

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

struct Rte_NoFrostFreezer {
    /* Per Instance Memory Section */
    /* Port API Section */
    /* Calibration Parameter Handles Section */
    uint32 (*CData_ActivationPin)(void);
    uint32 (*CData_SwitcherPin)(void);
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_NoFrostFreezer
{
public:
    /* Constructor */
    Rte_Base_NoFrostFreezer(const Rte_NoFrostFreezer &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual Std_ReturnType ruDefreazerSwitchOn(void) = 0;
    virtual Std_ReturnType ruFreezerSwitchOn(void) = 0;
    virtual Std_ReturnType ruSwitchOff(void) = 0;
protected:
    const Rte_NoFrostFreezer &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_NO_FROST_FREEZER_HPP */

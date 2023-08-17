/*
 * file: Rte_FreezerManager.hpp
 *
 * Implementation for FreezerManager header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_FREEZER_MANAGER_HPP
#define RTE_FREEZER_MANAGER_HPP

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

struct Rte_FreezerManager {
    /* Per Instance Memory Section */
    /* Port API Section */
    Rte_PDS_isrQualifiedTemperature_R CoolerTemperature;
    Rte_PDS_isrDefreezeRelayStatus_R DefreezeRelayStatus;
    Rte_PDS_isrActiveStatus_R EconomeMode;
    Rte_PDS_icsRelayControl_C Fan;
    Rte_PDS_icsNoFrostControl_C Freezer;
    Rte_PDS_isrQualifiedTemperature_R FreezerTemperature;
    Rte_PDS_isrSetPoints_R SetPoints;
    Rte_PDS_isrFreezerStatus_P Status;
    Rte_PDS_isrActiveStatus_R SuperFreeze;
    /* Calibration Parameter Handles Section */
    uint32 (*CData_DefreezingTimeSec)(void);
    uint32 (*CData_MaxDefreezingTimeSec)(void);
    uint32 (*CData_MaxFreezingTimeSec)(void);
    uint32 (*CData_WaitingStartupTimeSec)(void);
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_FreezerManager
{
public:
    /* Constructor */
    Rte_Base_FreezerManager(const Rte_FreezerManager &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual void ruRefresh(void) = 0;
protected:
    const Rte_FreezerManager &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_FREEZER_MANAGER_HPP */

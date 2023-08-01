/*
 * file: Rte_DefreezeRelay.hpp
 *
 * Implementation for DefreezeRelay header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_DEFREEZE_RELAY_HPP
#define RTE_DEFREEZE_RELAY_HPP

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

struct Rte_DefreezeRelay {
    /* Per Instance Memory Section */
    /* Port API Section */
    Rte_PDS_isrDefreezeRelayStatus_P Status;
    /* Calibration Parameter Handles Section */
    uint32 (*CData_Pin)(void);
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_DefreezeRelay
{
public:
    /* Constructor */
    Rte_Base_DefreezeRelay(const Rte_DefreezeRelay &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual void ruRefresh(void) = 0;
protected:
    const Rte_DefreezeRelay &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_DEFREEZE_RELAY_HPP */

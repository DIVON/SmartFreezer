/*
 * file: Rte_WebPageStatus.hpp
 *
 * Implementation for WebPageStatus header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_WEB_PAGE_STATUS_HPP
#define RTE_WEB_PAGE_STATUS_HPP

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

struct Rte_WebPageStatus {
    /* Per Instance Memory Section */
    /* Port API Section */
    Rte_PDS_isrQualifiedTemperature_R CoolerTemperature;
    Rte_PDS_isrSetPoints_R FreezerSetPoints;
    Rte_PDS_isrFreezerStatus_R FreezerStatus;
    Rte_PDS_isrQualifiedTemperature_R FreezerTemperature;
    Rte_PDS_icsNewFreezerSettings_C NewFreezerSetPoints;
    Rte_PDS_icsWebPageRegistration_C Register;
    Rte_PDS_icsRelayControl_C SuperFreezeActivation;
    /* Calibration Parameter Handles Section */
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_WebPageStatus
{
public:
    /* Constructor */
    Rte_Base_WebPageStatus(const Rte_WebPageStatus &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual void ruInit(void) = 0;
protected:
    const Rte_WebPageStatus &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_WEB_PAGE_STATUS_HPP */

/*
 * file: Rte_DS18B20Driver.hpp
 *
 * Implementation for DS18B20Driver header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_DS18B20DRIVER_HPP
#define RTE_DS18B20DRIVER_HPP

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

struct Rte_DS18B20Driver {
    /* Per Instance Memory Section */
    /* Port API Section */
    Rte_PDS_isrQualifiedTemperature_P Temperature;
    /* Calibration Parameter Handles Section */
    uint32 (*CData_Pin)(void);
};

/*************************************************************
 * END RTE Component Data Structure Definition
 *************************************************************/


/*************************************************************
 * BEGIN Component Base Class Definition
 *************************************************************/

class Rte_Base_DS18B20Driver
{
public:
    /* Constructor */
    Rte_Base_DS18B20Driver(const Rte_DS18B20Driver &rte) : Rte(rte) {} 

    /* Abstract component's runnables */
    virtual void ruRefresh(const Rte_DS18B20Driver * const instance) = 0;
protected:
    const Rte_DS18B20Driver &Rte;
private:
};

/*************************************************************
 * END Component Base Class Definition
 *************************************************************/

#endif /* RTE_DS18B20DRIVER_HPP */

/*
 * file: RunTimeEnvironment.cpp
 *
 * This component run all tasks with their own period
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RUN_TIME_ENVIRONMENT_CPP
#define RUN_TIME_ENVIRONMENT_CPP


#include "RunTimeEnvironment.hpp"
#include "Rte_Externals.hpp"

/* Scheduler variables  */
STATIC uint32 Rte_TaskCounter_OsTask1ms;

void Rte_Task_Runnable_OsTask1ms(void)
{
    if (Rte_TaskCounter_OsTask1ms % (5000000U / 1000U) == (0U / 1000))
    {
        Rte_CI_CoolerTemperature.ruRefresh();
        Rte_CI_FreezerTemperature.ruRefresh();
    }
    if (Rte_TaskCounter_OsTask1ms % (1000000U / 1000U) == (0U / 1000))
    {
        Rte_CI_SuperFreeze.ruRefresh();
        Rte_CI_FreezerManager.ruRefresh();
        Rte_CI_HeaterChecker.ruRefresh();
        Rte_CI_WiFiManager.ruRefresh();
    }
    if (Rte_TaskCounter_OsTask1ms % (5000000U / 1000U) == (0U / 1000))
    {
        Rte_CI_MqttPublisher.ruRefresh();
    }
    if (Rte_TaskCounter_OsTask1ms % (1000000U / 1000U) == (0U / 1000))
    {
        Rte_CI_EcoMode.ruRefresh();
    }
    Rte_TaskCounter_OsTask1ms = (Rte_TaskCounter_OsTask1ms + 1U) % (5000000 / 1000);
}

void Rte_Task_Runnable_Init(void)
{
    Rte_CI_WebPageMqttSettings.ruInit();
    Rte_CI_WebPageStatus.ruInit();
    Rte_CI_WebPageWiFiSettings.ruInit();
    Rte_CI_CoolerTemperature.ruInit();
    Rte_CI_FreezerTemperature.ruInit();
}


#endif /* RUN_TIME_ENVIRONMENT_CPP */

/* End of file */

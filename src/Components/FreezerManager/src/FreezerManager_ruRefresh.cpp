/*
 * file: FreezerManager_ruRefresh.cpp
 *
 * Implementation for FreezerManager_Refresh
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */

/* INCLUDES */

#include "FreezerManager.hpp"
#include "ETSRClock.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */
/* END OF TYPE DEFINITIONS */

/* VARIABLES */
/* END OF VARIABLES */

/* LOCAL FUNCTION DECLARATIONS */
/* END OF LOCAL FUNCTION DECLARATIONS */

/* LOCAL FUNCTION DEFINITIONS */
/* END OF LOCAL FUNCTION DEFINITIONS */

/* PRIVATE FUNCTION DEFINITIONS */
/* END OF PRIVATE FUNCTION DEFINITIONS */

/* PROTECTED FUNCTION DEFINITIONS */

void FreezerManager::StartupWaiting()
{
    sdtTime seconds = ETSRClock::GetSeconds();
    if (Rte.CData_WaitingStartupTimeSec() < seconds)
    {
        this->_freezingState = FreezingState::Freezing;
    }

    Rte.Fan.Open();
    Rte.Freezer.SwitchOff();

    Rte.Status.Write_Status(enFreezerStatus::FS_STANDBY);
}

void FreezerManager::StateFreezing()
{
    cdtQualifiedTemperature freezerTemperature;
    cdtQualifiedTemperature coolerTemperature;
    Rte.FreezerTemperature.Read_Temperature(freezerTemperature);
    Rte.CoolerTemperature.Read_Temperature(coolerTemperature);

    sdtTemperature desiredFreezerTemperature;
    sdtTemperature desiredCoolerTemperature;
    Rte.SetPoints.Read_FreezerTemperature(desiredFreezerTemperature);
    Rte.SetPoints.Read_RefrigeratorTemperature(desiredCoolerTemperature);

    if ((enQualifier::SEN_RELIABLE == freezerTemperature.Qualifier) && (enQualifier::SEN_RELIABLE == coolerTemperature.Qualifier))
    {
        if ((freezerTemperature.Temperature < desiredFreezerTemperature) && (coolerTemperature.Temperature < desiredCoolerTemperature))
        {
            Rte.Fan.Open();
            Rte.Freezer.SwitchOff();

            _freezingState = FreezingState::StartupWaiting;
        }
        else
        {
            Rte.Fan.Close();
            Rte.Freezer.FreezerSwitchOn();
        }
    }
    else
    {
        /* Один из датчиков не активен, работаем по времени */
    }

    _totalFreezingTimeSec++;

    if (Rte.CData_MaxFreezingTimeSec() < _totalFreezingTimeSec)
    {
        _totalFreezingTimeSec = 0;
        this->_freezingState = FreezingState::Defreezing;
    }

    Rte.Status.Write_Status(enFreezerStatus::FS_FREEZING);
}

void FreezerManager::StateDefreezing()
{
    _totalDefreezingTimeSec++;
    enDefreezeRelayStatus defrezeRelayStatus;

    (void)Rte.DefreezeRelayStatus.Read_Status(defrezeRelayStatus);

    if ((enDefreezeRelayStatus::DRS_OPEN == defrezeRelayStatus) or _defreezeRelayWasOpened)
    {
        _defreezeRelayWasOpened = true;
        /* Реле открыто, значит нагрев испарителя завершён и надо подождать время, пока всё оттает */
        _waitingDefreezeTimeSec++;
        Rte.Freezer.SwitchOff();
    }
    else if (_totalDefreezingTimeSec < Rte.CData_MaxDefreezingTimeSec() / 2)
    {
        /* Реле всё ещё закрыто из-за низкой температуры. Включаем нагрев на время половина цикла оттайки */
        Rte.Freezer.DefreezerSwitchOn();
    }
    else
    {
        /*
         * Общее время разморозки больше половины времени разморозки, но реле оттайки так и не открылось,
         * поэтому отключаем оттайку по времени.
         */
        Rte.Freezer.SwitchOff();
    }

    bool defrezingTimeIsOver = Rte.CData_DefreezingTimeSec() < _waitingDefreezeTimeSec;
    bool totalDefreezingTimeIsOver = Rte.CData_MaxDefreezingTimeSec() < _totalDefreezingTimeSec;

    if (defrezingTimeIsOver or totalDefreezingTimeIsOver)
    {
        _totalDefreezingTimeSec = 0;
        _waitingDefreezeTimeSec = 0;
        _defreezeRelayWasOpened = false;
        _freezingState = FreezingState::Freezing;
    }

    Rte.Status.Write_Status(enFreezerStatus::FS_HEATING);
}

/* END OF PROTECTED FUNCTION DEFINITIONS */

/* PUBLIC FUNCTION DEFINITIONS */

void FreezerManager::ruRefresh(void)
{
    if (FreezingState::StartupWaiting == this->_freezingState)
    {
        StartupWaiting();
    }
    else if (FreezingState::Freezing == this->_freezingState)
    {
        StateFreezing();
    }
    else
    {
        StateDefreezing();
    }
}

/* END OF PUBLIC FUNCTION DEFINITIONS */

/* End of file */

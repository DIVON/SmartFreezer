/*
 * file: Rte_Connections.cpp
 *
 * Implementation for RTE connections source file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#include <string.h>
#include "Rte_DataTypes.hpp"
#include "Rte_Externals.hpp"
#include "SystemErrors.hpp"
#define RTE_CPP
#include <DefreezeRelay.hpp>
#include <DS18B20Driver.hpp>
#include <FreezerManager.hpp>
#include <MqttPublisher.hpp>
#include <NoFrostFreezer.hpp>
#include <Relay.hpp>
#include <Settings.hpp>
#include <SuperFreeze.hpp>
#include <WebPageMqttSettings.hpp>
#include <WebPageStatus.hpp>
#include <WebPageWiFiSettings.hpp>
#include <WebServer.hpp>
#include <WiFiManager.hpp>
#undef RTE_CPP

/*************************************************************
 * BEGIN RTE buffers
 *************************************************************/

uint32 Rte_PimBuffer_SuperFreeze_StartTime;

const uint32 Rte_CDataBuffer_CoolerTemperature_Pin = 5;
const uint32 Rte_CDataBuffer_Fan_Pin = 1;
const uint32 Rte_CDataBuffer_FreezerTemperature_Pin = 6;
const uint32 Rte_CDataBuffer_HeaterChecker_Pin = 4;
const uint32 Rte_CDataBuffer_NoFrostFreezer_ActivationPin = 2;
const uint32 Rte_CDataBuffer_NoFrostFreezer_SwitcherPin = 3;
const uint32 Rte_CDataBuffer_SuperFreeze_SuperFreezeTimeSeconds = 11111;

cdtQualifiedTemperature Rte_DataBuffer_CoolerTemperature_Temperature_Temperature;
enFreezerStatus Rte_DataBuffer_FreezerManager_Status_Status;
cdtQualifiedTemperature Rte_DataBuffer_FreezerTemperature_Temperature_Temperature;
enDefreezeRelayStatus Rte_DataBuffer_HeaterChecker_Status_Status;
sdtTemperature Rte_DataBuffer_Settings_FreezerSetPoints_FreezerTemperature;
sdtTemperature Rte_DataBuffer_Settings_FreezerSetPoints_RefrigeratorTemperature;
uint8 * Rte_DataBuffer_Settings_MqttSettings_Host;
uint8 * Rte_DataBuffer_Settings_MqttSettings_Password;
uint32 Rte_DataBuffer_Settings_MqttSettings_Port;
uint8 * Rte_DataBuffer_Settings_MqttSettings_UserName;
uint8 * Rte_DataBuffer_Settings_WiFiSettings_Password;
uint8 * Rte_DataBuffer_Settings_WiFiSettings_Ssid;
boolean Rte_DataBuffer_SuperFreeze_Active_Activate;

/*************************************************************
 * END RTE buffers
 *************************************************************/

/*************************************************************
 * BEGIN RTE Write operation handlers
 *************************************************************/

Std_ReturnType Rte_InternalWrite_CoolerTemperature_Temperature_Temperature(const cdtQualifiedTemperature &data)
{
    Rte_DataBuffer_CoolerTemperature_Temperature_Temperature = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_FreezerManager_Status_Status(const enFreezerStatus &data)
{
    Rte_DataBuffer_FreezerManager_Status_Status = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_FreezerTemperature_Temperature_Temperature(const cdtQualifiedTemperature &data)
{
    Rte_DataBuffer_FreezerTemperature_Temperature_Temperature = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_HeaterChecker_Status_Status(const enDefreezeRelayStatus &data)
{
    Rte_DataBuffer_HeaterChecker_Status_Status = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_Settings_FreezerSetPoints_FreezerTemperature(const sdtTemperature &data)
{
    Rte_DataBuffer_Settings_FreezerSetPoints_FreezerTemperature = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_Settings_FreezerSetPoints_RefrigeratorTemperature(const sdtTemperature &data)
{
    Rte_DataBuffer_Settings_FreezerSetPoints_RefrigeratorTemperature = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_Settings_MqttSettings_Host(uint8* const &data)
{
    Rte_DataBuffer_Settings_MqttSettings_Host = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_Settings_MqttSettings_Password(uint8* const &data)
{
    Rte_DataBuffer_Settings_MqttSettings_Password = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_Settings_MqttSettings_Port(const uint32 &data)
{
    Rte_DataBuffer_Settings_MqttSettings_Port = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_Settings_MqttSettings_UserName(uint8* const &data)
{
    Rte_DataBuffer_Settings_MqttSettings_UserName = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_Settings_WiFiSettings_Password(uint8* const &data)
{
    Rte_DataBuffer_Settings_WiFiSettings_Password = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_Settings_WiFiSettings_Ssid(uint8* const &data)
{
    Rte_DataBuffer_Settings_WiFiSettings_Ssid = data;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalWrite_SuperFreeze_Active_Activate(const boolean &data)
{
    Rte_DataBuffer_SuperFreeze_Active_Activate = data;
    return Std_ReturnType::RTE_E_OK;
}

/*************************************************************
 * END RTE Write operation handlers
 *************************************************************/

/*************************************************************
 * BEGIN RTE Read operation handlers
 *************************************************************/

Std_ReturnType Rte_InternalRead_FreezerManager_DefreezeRelayStatus_Status(enDefreezeRelayStatus &data)
{
    data = Rte_DataBuffer_HeaterChecker_Status_Status;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_FreezerManager_FreezerTemperature_Temperature(cdtQualifiedTemperature &data)
{
    data = Rte_DataBuffer_FreezerTemperature_Temperature_Temperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_FreezerManager_RefrigeratorTemperature_Temperature(cdtQualifiedTemperature &data)
{
    data = Rte_DataBuffer_CoolerTemperature_Temperature_Temperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_FreezerManager_SetPoints_FreezerTemperature(sdtTemperature &data)
{
    data = Rte_DataBuffer_Settings_FreezerSetPoints_FreezerTemperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_FreezerManager_SetPoints_RefrigeratorTemperature(sdtTemperature &data)
{
    data = Rte_DataBuffer_Settings_FreezerSetPoints_RefrigeratorTemperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_FreezerManager_SuperFreeze_Activate(boolean &data)
{
    data = Rte_DataBuffer_SuperFreeze_Active_Activate;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_MqttPublisher_CoolerTemperature_Temperature(cdtQualifiedTemperature &data)
{
    data = Rte_DataBuffer_CoolerTemperature_Temperature_Temperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_MqttPublisher_FreezerTemperature_Temperature(cdtQualifiedTemperature &data)
{
    data = Rte_DataBuffer_FreezerTemperature_Temperature_Temperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_MqttPublisher_Status_Status(enFreezerStatus &data)
{
    data = Rte_DataBuffer_FreezerManager_Status_Status;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageMqttSettings_MqttSettings_Host(uint8* &data)
{
    data = Rte_DataBuffer_Settings_MqttSettings_Host;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageMqttSettings_MqttSettings_Password(uint8* &data)
{
    data = Rte_DataBuffer_Settings_MqttSettings_Password;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageMqttSettings_MqttSettings_Port(uint32 &data)
{
    data = Rte_DataBuffer_Settings_MqttSettings_Port;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageMqttSettings_MqttSettings_UserName(uint8* &data)
{
    data = Rte_DataBuffer_Settings_MqttSettings_UserName;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageStatus_CoolerTemperature_Temperature(cdtQualifiedTemperature &data)
{
    data = Rte_DataBuffer_CoolerTemperature_Temperature_Temperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageStatus_FreezerSetPoints_FreezerTemperature(sdtTemperature &data)
{
    data = Rte_DataBuffer_Settings_FreezerSetPoints_FreezerTemperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageStatus_FreezerSetPoints_RefrigeratorTemperature(sdtTemperature &data)
{
    data = Rte_DataBuffer_Settings_FreezerSetPoints_RefrigeratorTemperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageStatus_FreezerStatus_Status(enFreezerStatus &data)
{
    data = Rte_DataBuffer_FreezerManager_Status_Status;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageStatus_FreezerTemperature_Temperature(cdtQualifiedTemperature &data)
{
    data = Rte_DataBuffer_FreezerTemperature_Temperature_Temperature;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageWiFiSettings_WiFiSettings_Password(uint8* &data)
{
    data = Rte_DataBuffer_Settings_WiFiSettings_Password;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WebPageWiFiSettings_WiFiSettings_Ssid(uint8* &data)
{
    data = Rte_DataBuffer_Settings_WiFiSettings_Ssid;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WiFiManager_WiFiSettings_Password(uint8* &data)
{
    data = Rte_DataBuffer_Settings_WiFiSettings_Password;
    return Std_ReturnType::RTE_E_OK;
}

Std_ReturnType Rte_InternalRead_WiFiManager_WiFiSettings_Ssid(uint8* &data)
{
    data = Rte_DataBuffer_Settings_WiFiSettings_Ssid;
    return Std_ReturnType::RTE_E_OK;
}

/*************************************************************
 * END RTE Read operation handlers
 *************************************************************/

/*************************************************************
 * BEGIN RTE Sync Call operation handlers
 *************************************************************/

Std_ReturnType Rte_InternalCall_FreezerManager_Fan_SwitchOff(void)
{
    return Rte_CI_Fan.ruSwitchOff();
}

Std_ReturnType Rte_InternalCall_FreezerManager_Fan_SwitchOn(void)
{
    return Rte_CI_Fan.ruSwitchOn();
}

Std_ReturnType Rte_InternalCall_FreezerManager_Freezer_DefreazerSwitchOn(void)
{
    return Rte_CI_NoFrostFreezer.ruDefreazerSwitchOn();
}

Std_ReturnType Rte_InternalCall_FreezerManager_Freezer_FreezerSwitchOn(void)
{
    return Rte_CI_NoFrostFreezer.ruFreezerSwitchOn();
}

Std_ReturnType Rte_InternalCall_FreezerManager_Freezer_SwitchOff(void)
{
    return Rte_CI_NoFrostFreezer.ruSwitchOff();
}

Std_ReturnType Rte_InternalCall_Settings_WiFiNotificaion_Notify(void)
{
    return Rte_CI_WiFiManager.ruNewWiFiSettings();
}

Std_ReturnType Rte_InternalCall_WebPageMqttSettings_Register_Register(uint8 * page, uint8 * handleFunction)
{
    return Rte_CI_WebServer.ruRegisterWebPage(page, handleFunction);
}

Std_ReturnType Rte_InternalCall_WebPageMqttSettings_Save_Save(void)
{
    return Rte_CI_Settings.ruSaveMqttSettings();
}

Std_ReturnType Rte_InternalCall_WebPageStatus_NewFreezerSetPoints_Save(void)
{
    return Rte_CI_Settings.ruSaveFreezerSetPoints();
}

Std_ReturnType Rte_InternalCall_WebPageStatus_Register_Register(uint8 * page, uint8 * handleFunction)
{
    return Rte_CI_WebServer.ruRegisterWebPage(page, handleFunction);
}

Std_ReturnType Rte_InternalCall_WebPageStatus_SuperFreezeActivation_SwitchOff(void)
{
    return Rte_CI_SuperFreeze.ruSwitchOff();
}

Std_ReturnType Rte_InternalCall_WebPageStatus_SuperFreezeActivation_SwitchOn(void)
{
    return Rte_CI_SuperFreeze.ruSwitchOn();
}

Std_ReturnType Rte_InternalCall_WebPageWiFiSettings_NewWiFiSettings_Save(void)
{
    return Rte_CI_Settings.ruSaveWiFiSettiings();
}

Std_ReturnType Rte_InternalCall_WebPageWiFiSettings_Register_Register(uint8 * page, uint8 * handleFunction)
{
    return Rte_CI_WebServer.ruRegisterWebPage(page, handleFunction);
}

/*************************************************************
 * END RTE Sync Call operation handlers
 *************************************************************/

uint32 Rte_InternalCData_CoolerTemperature_Pin(void)
{
    return Rte_CDataBuffer_CoolerTemperature_Pin;
}

uint32 Rte_InternalCData_Fan_Pin(void)
{
    return Rte_CDataBuffer_Fan_Pin;
}

uint32 Rte_InternalCData_FreezerTemperature_Pin(void)
{
    return Rte_CDataBuffer_FreezerTemperature_Pin;
}

uint32 Rte_InternalCData_HeaterChecker_Pin(void)
{
    return Rte_CDataBuffer_HeaterChecker_Pin;
}

uint32 Rte_InternalCData_NoFrostFreezer_ActivationPin(void)
{
    return Rte_CDataBuffer_NoFrostFreezer_ActivationPin;
}

uint32 Rte_InternalCData_NoFrostFreezer_SwitcherPin(void)
{
    return Rte_CDataBuffer_NoFrostFreezer_SwitcherPin;
}

uint32 Rte_InternalCData_SuperFreeze_SuperFreezeTimeSeconds(void)
{
    return Rte_CDataBuffer_SuperFreeze_SuperFreezeTimeSeconds;
}

/*************************************************************
 * BEGIN RTE Communication Objects
 *************************************************************/

const Rte_DS18B20Driver Rte_CO_CoolerTemperature = 
{
    {
        &Rte_InternalWrite_CoolerTemperature_Temperature_Temperature,
    },
    &Rte_InternalCData_CoolerTemperature_Pin,
};

const Rte_Relay Rte_CO_Fan = 
{
    &Rte_InternalCData_Fan_Pin,
};

const Rte_FreezerManager Rte_CO_FreezerManager = 
{
    {
        &Rte_InternalRead_FreezerManager_DefreezeRelayStatus_Status,
    },
    {
        &Rte_InternalCall_FreezerManager_Fan_SwitchOff,
        &Rte_InternalCall_FreezerManager_Fan_SwitchOn,
    },
    {
        &Rte_InternalCall_FreezerManager_Freezer_DefreazerSwitchOn,
        &Rte_InternalCall_FreezerManager_Freezer_FreezerSwitchOn,
        &Rte_InternalCall_FreezerManager_Freezer_SwitchOff,
    },
    {
        &Rte_InternalRead_FreezerManager_FreezerTemperature_Temperature,
    },
    {
        &Rte_InternalRead_FreezerManager_RefrigeratorTemperature_Temperature,
    },
    {
        &Rte_InternalRead_FreezerManager_SetPoints_FreezerTemperature,
        &Rte_InternalRead_FreezerManager_SetPoints_RefrigeratorTemperature,
    },
    {
        &Rte_InternalWrite_FreezerManager_Status_Status,
    },
    {
        &Rte_InternalRead_FreezerManager_SuperFreeze_Activate,
    },
};

const Rte_DS18B20Driver Rte_CO_FreezerTemperature = 
{
    {
        &Rte_InternalWrite_FreezerTemperature_Temperature_Temperature,
    },
    &Rte_InternalCData_FreezerTemperature_Pin,
};

const Rte_DefreezeRelay Rte_CO_HeaterChecker = 
{
    {
        &Rte_InternalWrite_HeaterChecker_Status_Status,
    },
    &Rte_InternalCData_HeaterChecker_Pin,
};

const Rte_MqttPublisher Rte_CO_MqttPublisher = 
{
    {
        &Rte_InternalRead_MqttPublisher_CoolerTemperature_Temperature,
    },
    {
        &Rte_InternalRead_MqttPublisher_FreezerTemperature_Temperature,
    },
    {
        &Rte_InternalRead_MqttPublisher_Status_Status,
    },
};

const Rte_NoFrostFreezer Rte_CO_NoFrostFreezer = 
{
    &Rte_InternalCData_NoFrostFreezer_ActivationPin,
    &Rte_InternalCData_NoFrostFreezer_SwitcherPin,
};

const Rte_Settings Rte_CO_Settings = 
{
    {
        &Rte_InternalWrite_Settings_FreezerSetPoints_FreezerTemperature,
        &Rte_InternalWrite_Settings_FreezerSetPoints_RefrigeratorTemperature,
    },
    {
        &Rte_InternalWrite_Settings_MqttSettings_Host,
        &Rte_InternalWrite_Settings_MqttSettings_Password,
        &Rte_InternalWrite_Settings_MqttSettings_Port,
        &Rte_InternalWrite_Settings_MqttSettings_UserName,
    },
    {
        &Rte_InternalCall_Settings_WiFiNotificaion_Notify,
    },
    {
        &Rte_InternalWrite_Settings_WiFiSettings_Password,
        &Rte_InternalWrite_Settings_WiFiSettings_Ssid,
    },
};

const Rte_SuperFreeze Rte_CO_SuperFreeze = 
{
    &Rte_PimBuffer_SuperFreeze_StartTime,
    {
        &Rte_InternalWrite_SuperFreeze_Active_Activate,
    },
    &Rte_InternalCData_SuperFreeze_SuperFreezeTimeSeconds,
};

const Rte_WebPageMqttSettings Rte_CO_WebPageMqttSettings = 
{
    {
        &Rte_InternalRead_WebPageMqttSettings_MqttSettings_Host,
        &Rte_InternalRead_WebPageMqttSettings_MqttSettings_Password,
        &Rte_InternalRead_WebPageMqttSettings_MqttSettings_Port,
        &Rte_InternalRead_WebPageMqttSettings_MqttSettings_UserName,
    },
    {
        &Rte_InternalCall_WebPageMqttSettings_Register_Register,
    },
    {
        &Rte_InternalCall_WebPageMqttSettings_Save_Save,
    },
};

const Rte_WebPageStatus Rte_CO_WebPageStatus = 
{
    {
        &Rte_InternalRead_WebPageStatus_CoolerTemperature_Temperature,
    },
    {
        &Rte_InternalRead_WebPageStatus_FreezerSetPoints_FreezerTemperature,
        &Rte_InternalRead_WebPageStatus_FreezerSetPoints_RefrigeratorTemperature,
    },
    {
        &Rte_InternalRead_WebPageStatus_FreezerStatus_Status,
    },
    {
        &Rte_InternalRead_WebPageStatus_FreezerTemperature_Temperature,
    },
    {
        &Rte_InternalCall_WebPageStatus_NewFreezerSetPoints_Save,
    },
    {
        &Rte_InternalCall_WebPageStatus_Register_Register,
    },
    {
        &Rte_InternalCall_WebPageStatus_SuperFreezeActivation_SwitchOff,
        &Rte_InternalCall_WebPageStatus_SuperFreezeActivation_SwitchOn,
    },
};

const Rte_WebPageWiFiSettings Rte_CO_WebPageWiFiSettings = 
{
    {
        &Rte_InternalCall_WebPageWiFiSettings_NewWiFiSettings_Save,
    },
    {
        &Rte_InternalCall_WebPageWiFiSettings_Register_Register,
    },
    {
        &Rte_InternalRead_WebPageWiFiSettings_WiFiSettings_Password,
        &Rte_InternalRead_WebPageWiFiSettings_WiFiSettings_Ssid,
    },
};

const Rte_WebServer Rte_CO_WebServer = 
{
};

const Rte_WiFiManager Rte_CO_WiFiManager = 
{
    {
        &Rte_InternalRead_WiFiManager_WiFiSettings_Password,
        &Rte_InternalRead_WiFiManager_WiFiSettings_Ssid,
    },
};

/*************************************************************
 * END RTE Communication Objects
 *************************************************************/

/*************************************************************
 * BEGIN Component Instances
 *************************************************************/

DS18B20Driver Rte_CI_CoolerTemperature(Rte_CO_CoolerTemperature);
Relay Rte_CI_Fan(Rte_CO_Fan);
FreezerManager Rte_CI_FreezerManager(Rte_CO_FreezerManager);
DS18B20Driver Rte_CI_FreezerTemperature(Rte_CO_FreezerTemperature);
DefreezeRelay Rte_CI_HeaterChecker(Rte_CO_HeaterChecker);
MqttPublisher Rte_CI_MqttPublisher(Rte_CO_MqttPublisher);
NoFrostFreezer Rte_CI_NoFrostFreezer(Rte_CO_NoFrostFreezer);
Settings Rte_CI_Settings(Rte_CO_Settings);
SuperFreeze Rte_CI_SuperFreeze(Rte_CO_SuperFreeze);
WebPageMqttSettings Rte_CI_WebPageMqttSettings(Rte_CO_WebPageMqttSettings);
WebPageStatus Rte_CI_WebPageStatus(Rte_CO_WebPageStatus);
WebPageWiFiSettings Rte_CI_WebPageWiFiSettings(Rte_CO_WebPageWiFiSettings);
WebServer Rte_CI_WebServer(Rte_CO_WebServer);
WiFiManager Rte_CI_WiFiManager(Rte_CO_WiFiManager);

/*************************************************************
 * END Component Instances
 *************************************************************/


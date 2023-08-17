/*
 * file: Rte_PortInterfaces.hpp
 *
 * Implementation for RTE connections source file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_PORT_INTERFACES_HPP
#define RTE_PORT_INTERFACES_HPP

#include <string.h>
#include <functional>
#include "Rte_DataTypes.hpp"

/*************************************************************
* BEGIN Port Data Structure Definition: isrActiveStatus
 *************************************************************/

/* Write functions */
using isrActiveStatus_Activate_WriteFunc = Std_ReturnType(*)(const boolean &data) ;

/* Read functions */
using isrActiveStatus_Activate_ReadFunc = Std_ReturnType(*)(boolean &data) ;

/* Writing port */

struct Rte_PDS_isrActiveStatus_P
{
    isrActiveStatus_Activate_WriteFunc Write_Activate;
};

/* Reading port */

struct Rte_PDS_isrActiveStatus_R
{
    isrActiveStatus_Activate_ReadFunc Read_Activate;
};

/*************************************************************
* END Port Data Structure Definition: isrActiveStatus
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: isrDefreezeRelayStatus
 *************************************************************/

/* Write functions */
using isrDefreezeRelayStatus_Status_WriteFunc = Std_ReturnType(*)(const enDefreezeRelayStatus &data) ;

/* Read functions */
using isrDefreezeRelayStatus_Status_ReadFunc = Std_ReturnType(*)(enDefreezeRelayStatus &data) ;

/* Writing port */

struct Rte_PDS_isrDefreezeRelayStatus_P
{
    isrDefreezeRelayStatus_Status_WriteFunc Write_Status;
};

/* Reading port */

struct Rte_PDS_isrDefreezeRelayStatus_R
{
    isrDefreezeRelayStatus_Status_ReadFunc Read_Status;
};

/*************************************************************
* END Port Data Structure Definition: isrDefreezeRelayStatus
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: isrFreezerStatus
 *************************************************************/

/* Write functions */
using isrFreezerStatus_Status_WriteFunc = Std_ReturnType(*)(const enFreezerStatus &data) ;

/* Read functions */
using isrFreezerStatus_Status_ReadFunc = Std_ReturnType(*)(enFreezerStatus &data) ;

/* Writing port */

struct Rte_PDS_isrFreezerStatus_P
{
    isrFreezerStatus_Status_WriteFunc Write_Status;
};

/* Reading port */

struct Rte_PDS_isrFreezerStatus_R
{
    isrFreezerStatus_Status_ReadFunc Read_Status;
};

/*************************************************************
* END Port Data Structure Definition: isrFreezerStatus
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: isrMqttSettings
 *************************************************************/

/* Write functions */
using isrMqttSettings_Host_WriteFunc = Std_ReturnType(*)(uint8* const &data) ;
using isrMqttSettings_Password_WriteFunc = Std_ReturnType(*)(uint8* const &data) ;
using isrMqttSettings_Port_WriteFunc = Std_ReturnType(*)(const uint32 &data) ;
using isrMqttSettings_UserName_WriteFunc = Std_ReturnType(*)(uint8* const &data) ;

/* Read functions */
using isrMqttSettings_Host_ReadFunc = Std_ReturnType(*)(uint8* &data) ;
using isrMqttSettings_Password_ReadFunc = Std_ReturnType(*)(uint8* &data) ;
using isrMqttSettings_Port_ReadFunc = Std_ReturnType(*)(uint32 &data) ;
using isrMqttSettings_UserName_ReadFunc = Std_ReturnType(*)(uint8* &data) ;

/* Writing port */

struct Rte_PDS_isrMqttSettings_P
{
    isrMqttSettings_Host_WriteFunc Write_Host;
    isrMqttSettings_Password_WriteFunc Write_Password;
    isrMqttSettings_Port_WriteFunc Write_Port;
    isrMqttSettings_UserName_WriteFunc Write_UserName;
};

/* Reading port */

struct Rte_PDS_isrMqttSettings_R
{
    isrMqttSettings_Host_ReadFunc Read_Host;
    isrMqttSettings_Password_ReadFunc Read_Password;
    isrMqttSettings_Port_ReadFunc Read_Port;
    isrMqttSettings_UserName_ReadFunc Read_UserName;
};

/*************************************************************
* END Port Data Structure Definition: isrMqttSettings
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: isrQualifiedTemperature
 *************************************************************/

/* Write functions */
using isrQualifiedTemperature_Temperature_WriteFunc = Std_ReturnType(*)(const cdtQualifiedTemperature &data) ;

/* Read functions */
using isrQualifiedTemperature_Temperature_ReadFunc = Std_ReturnType(*)(cdtQualifiedTemperature &data) ;

/* Writing port */

struct Rte_PDS_isrQualifiedTemperature_P
{
    isrQualifiedTemperature_Temperature_WriteFunc Write_Temperature;
};

/* Reading port */

struct Rte_PDS_isrQualifiedTemperature_R
{
    isrQualifiedTemperature_Temperature_ReadFunc Read_Temperature;
};

/*************************************************************
* END Port Data Structure Definition: isrQualifiedTemperature
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: isrSetPoints
 *************************************************************/

/* Write functions */
using isrSetPoints_FreezerTemperature_WriteFunc = Std_ReturnType(*)(const sdtTemperature &data) ;
using isrSetPoints_RefrigeratorTemperature_WriteFunc = Std_ReturnType(*)(const sdtTemperature &data) ;

/* Read functions */
using isrSetPoints_FreezerTemperature_ReadFunc = Std_ReturnType(*)(sdtTemperature &data) ;
using isrSetPoints_RefrigeratorTemperature_ReadFunc = Std_ReturnType(*)(sdtTemperature &data) ;

/* Writing port */

struct Rte_PDS_isrSetPoints_P
{
    isrSetPoints_FreezerTemperature_WriteFunc Write_FreezerTemperature;
    isrSetPoints_RefrigeratorTemperature_WriteFunc Write_RefrigeratorTemperature;
};

/* Reading port */

struct Rte_PDS_isrSetPoints_R
{
    isrSetPoints_FreezerTemperature_ReadFunc Read_FreezerTemperature;
    isrSetPoints_RefrigeratorTemperature_ReadFunc Read_RefrigeratorTemperature;
};

/*************************************************************
* END Port Data Structure Definition: isrSetPoints
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: isrWiFiSettings
 *************************************************************/

/* Write functions */
using isrWiFiSettings_Password_WriteFunc = Std_ReturnType(*)(uint8* const &data) ;
using isrWiFiSettings_Ssid_WriteFunc = Std_ReturnType(*)(uint8* const &data) ;

/* Read functions */
using isrWiFiSettings_Password_ReadFunc = Std_ReturnType(*)(uint8* &data) ;
using isrWiFiSettings_Ssid_ReadFunc = Std_ReturnType(*)(uint8* &data) ;

/* Writing port */

struct Rte_PDS_isrWiFiSettings_P
{
    isrWiFiSettings_Password_WriteFunc Write_Password;
    isrWiFiSettings_Ssid_WriteFunc Write_Ssid;
};

/* Reading port */

struct Rte_PDS_isrWiFiSettings_R
{
    isrWiFiSettings_Password_ReadFunc Read_Password;
    isrWiFiSettings_Ssid_ReadFunc Read_Ssid;
};

/*************************************************************
* END Port Data Structure Definition: isrWiFiSettings
 *************************************************************/

/*************************************************************
* BEGIN Port Data Structure Definition: icsNewFreezerSettings
 *************************************************************/

/* Client-Server operations */
using icsNewFreezerSettings_Save_Func = Std_ReturnType(*)(void);

/* Client port */

struct Rte_PDS_icsNewFreezerSettings_C
{
    icsNewFreezerSettings_Save_Func Save;
};

/*************************************************************
* END Port Data Structure Definition: icsNewFreezerSettings
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: icsNewMqttSettings
 *************************************************************/

/* Client-Server operations */
using icsNewMqttSettings_Save_Func = Std_ReturnType(*)(void);

/* Client port */

struct Rte_PDS_icsNewMqttSettings_C
{
    icsNewMqttSettings_Save_Func Save;
};

/*************************************************************
* END Port Data Structure Definition: icsNewMqttSettings
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: icsNewWiFiSettings
 *************************************************************/

/* Client-Server operations */
using icsNewWiFiSettings_Save_Func = Std_ReturnType(*)(void);

/* Client port */

struct Rte_PDS_icsNewWiFiSettings_C
{
    icsNewWiFiSettings_Save_Func Save;
};

/*************************************************************
* END Port Data Structure Definition: icsNewWiFiSettings
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: icsNoFrostControl
 *************************************************************/

/* Client-Server operations */
using icsNoFrostControl_DefreezerSwitchOn_Func = Std_ReturnType(*)(void);
using icsNoFrostControl_FreezerSwitchOn_Func = Std_ReturnType(*)(void);
using icsNoFrostControl_SwitchOff_Func = Std_ReturnType(*)(void);

/* Client port */

struct Rte_PDS_icsNoFrostControl_C
{
    icsNoFrostControl_DefreezerSwitchOn_Func DefreezerSwitchOn;
    icsNoFrostControl_FreezerSwitchOn_Func FreezerSwitchOn;
    icsNoFrostControl_SwitchOff_Func SwitchOff;
};

/*************************************************************
* END Port Data Structure Definition: icsNoFrostControl
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: icsNotification
 *************************************************************/

/* Client-Server operations */
using icsNotification_Notify_Func = Std_ReturnType(*)(void);

/* Client port */

struct Rte_PDS_icsNotification_C
{
    icsNotification_Notify_Func Notify;
};

/*************************************************************
* END Port Data Structure Definition: icsNotification
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: icsRelayControl
 *************************************************************/

/* Client-Server operations */
using icsRelayControl_Close_Func = Std_ReturnType(*)(void);
using icsRelayControl_Open_Func = Std_ReturnType(*)(void);

/* Client port */

struct Rte_PDS_icsRelayControl_C
{
    icsRelayControl_Close_Func Close;
    icsRelayControl_Open_Func Open;
};

/*************************************************************
* END Port Data Structure Definition: icsRelayControl
 *************************************************************/
/*************************************************************
* BEGIN Port Data Structure Definition: icsWebPageRegistration
 *************************************************************/

/* Client-Server operations */
using icsWebPageRegistration_Register_Func = Std_ReturnType(*)(const uint8 * page, uint8 * handleFunction);

/* Client port */

struct Rte_PDS_icsWebPageRegistration_C
{
    icsWebPageRegistration_Register_Func Register;
};

/*************************************************************
* END Port Data Structure Definition: icsWebPageRegistration
 *************************************************************/
#endif /* RTE_PORT_INTERFACES_HPP */

/*
 * file: Rte_Externals.hpp
 *
 * This file contains all externals required for scheduling
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_EXTERNALS_HPP
#define RTE_EXTERNALS_HPP

#define RTE_CPP
#include <DefreezeRelay.hpp>
#include <DS18B20Driver.hpp>
#include <FreezerManager.hpp>
#include <MqttPublisher.hpp>
#include <NoFrostFreezer.hpp>
#include <Relay.hpp>
#include <Settings.hpp>
#include <Switcher.hpp>
#include <WebPageMqttSettings.hpp>
#include <WebPageStatus.hpp>
#include <WebPageWiFiSettings.hpp>
#include <WebServer.hpp>
#include <WiFiManager.hpp>
#undef RTE_CPP

/* Declaration of all async events  */

/* Declaration of all component instances  */

extern DS18B20Driver Rte_CI_CoolerTemperature;
extern Switcher Rte_CI_EcoMode;
extern Relay Rte_CI_Fan;
extern FreezerManager Rte_CI_FreezerManager;
extern DS18B20Driver Rte_CI_FreezerTemperature;
extern DefreezeRelay Rte_CI_HeaterChecker;
extern MqttPublisher Rte_CI_MqttPublisher;
extern NoFrostFreezer Rte_CI_NoFrostFreezer;
extern Settings Rte_CI_Settings;
extern Switcher Rte_CI_SuperFreeze;
extern WebPageMqttSettings Rte_CI_WebPageMqttSettings;
extern WebPageStatus Rte_CI_WebPageStatus;
extern WebPageWiFiSettings Rte_CI_WebPageWiFiSettings;
extern WebServer Rte_CI_WebServer;
extern WiFiManager Rte_CI_WiFiManager;


#endif /* RTE_EXTERNALS_HPP */

/* End of file */

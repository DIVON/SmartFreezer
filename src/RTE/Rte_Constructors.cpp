/*
 * file: Rte_Constructors.cpp
 *
 * Contains implementation for default component's constructors
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
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

DefreezeRelay::DefreezeRelay(const Rte_DefreezeRelay &Rte):Rte_Base_DefreezeRelay(Rte)
{
}

DS18B20Driver::DS18B20Driver(const Rte_DS18B20Driver &Rte):Rte_Base_DS18B20Driver(Rte)
{
}

FreezerManager::FreezerManager(const Rte_FreezerManager &Rte):Rte_Base_FreezerManager(Rte)
{
}

MqttPublisher::MqttPublisher(const Rte_MqttPublisher &Rte):Rte_Base_MqttPublisher(Rte)
{
}

NoFrostFreezer::NoFrostFreezer(const Rte_NoFrostFreezer &Rte):Rte_Base_NoFrostFreezer(Rte)
{
}

Relay::Relay(const Rte_Relay &Rte):Rte_Base_Relay(Rte)
{
}

Settings::Settings(const Rte_Settings &Rte):Rte_Base_Settings(Rte)
{
}

SuperFreeze::SuperFreeze(const Rte_SuperFreeze &Rte):Rte_Base_SuperFreeze(Rte)
{
}

WebPageMqttSettings::WebPageMqttSettings(const Rte_WebPageMqttSettings &Rte):Rte_Base_WebPageMqttSettings(Rte)
{
}

WebPageStatus::WebPageStatus(const Rte_WebPageStatus &Rte):Rte_Base_WebPageStatus(Rte)
{
}

WebPageWiFiSettings::WebPageWiFiSettings(const Rte_WebPageWiFiSettings &Rte):Rte_Base_WebPageWiFiSettings(Rte)
{
}

WebServer::WebServer(const Rte_WebServer &Rte):Rte_Base_WebServer(Rte)
{
}

WiFiManager::WiFiManager(const Rte_WiFiManager &Rte):Rte_Base_WiFiManager(Rte)
{
}


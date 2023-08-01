/*
 * file: RunTimeEnvironment.hpp
 *
 * RunTimeEnvironment.hpp
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RUN_TIME_ENVIRONMENT_HPP
#define RUN_TIME_ENVIRONMENT_HPP


#define RTE_CPP
#include "Rte_DefreezeRelay.hpp"
#include "Rte_DS18B20Driver.hpp"
#include "Rte_FreezerManager.hpp"
#include "Rte_MqttPublisher.hpp"
#include "Rte_NoFrostFreezer.hpp"
#include "Rte_Relay.hpp"
#include "Rte_Settings.hpp"
#include "Rte_SuperFreeze.hpp"
#include "Rte_WebPageMqttSettings.hpp"
#include "Rte_WebPageStatus.hpp"
#include "Rte_WebPageWiFiSettings.hpp"
#include "Rte_WebServer.hpp"
#include "Rte_WiFiManager.hpp"
#undef RTE_CPP

/* Time periods */
#define SYSTICK_FREQUENCY                                                       (1000)

/*
 * Rte tasks 
 */

#endif /* RUN_TIME_ENVIRONMENT_HPP */

/* End of file */

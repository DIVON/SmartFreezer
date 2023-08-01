/*
 * file: Rte_Periods.h
 *
 * Rte_Periods.h
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_PERIODS_H
#define RTE_PERIODS_H


#ifdef __cplusplus
extern "C" {
#endif

/* Time periods */
#define Rte_Period_DefreezeRelay_ruRefresh                                      1000000UL
#define Rte_Period_DS18B20Driver_ruRefresh                                      5000000UL
#define Rte_Period_FreezerManager_ruRefresh                                     1000000UL
#define Rte_Period_MqttPublisher_ruRefresh                                      5000000UL
#define Rte_Period_SuperFreeze_ruRefresh                                        1000000UL
#define Rte_Period_WiFiManager_ruRefresh                                        1000000UL

#ifdef __cplusplus
}
#endif


#endif /* RTE_PERIODS_H */

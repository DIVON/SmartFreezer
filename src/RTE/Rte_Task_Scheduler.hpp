/*
 * file: Rte_Task_Scheduler.hpp
 *
 * This file contains extern functions defenitions and variables for organizing task scheduling.
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_TASK_SCHEDULER_HPP
#define RTE_TASK_SCHEDULER_HPP

#include "Rte_DataTypes.hpp"

extern volatile bool timeEventOccured;

void DoScheduling(void);

#endif /* RTE_TASK_SCHEDULER_HPP */

/* End of file */

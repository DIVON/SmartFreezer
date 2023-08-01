/*
 * file: Rte_Task_Scheduler.cpp
 *
 * This component run all tasks with their own period
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */

#include "RunTimeEnvironment.hpp"

#define RTE_TASKS_COUNT                                                         0

#define RTE_SCHEDULER_STEPS                                                     0

/* One Rte Task pointer */
typedef void (*Rte_Scheduler_Task)();

/* One step of scheduler */
typedef  Rte_Scheduler_Task Rte_Scheduler_Step[RTE_TASKS_COUNT];

/* All possible steps in scheduler */
typedef  Rte_Scheduler_Step Rte_Scheduler_Sequence[RTE_SCHEDULER_STEPS];

static uint32 schedulingCounter = 0u;


static const Rte_Scheduler_Sequence  taskScheduling =
{
};

void DoScheduling(void)
{
    uint32 index = schedulingCounter % RTE_SCHEDULER_STEPS;
    for (uint32 i = 0; i < RTE_TASKS_COUNT; i++)
    {
        if (((void *)0) != taskScheduling[index][i])
        {
            taskScheduling[index][i]();
        }
        else
        {
            break;
        }
    }
    schedulingCounter++;
}
/* End of file */

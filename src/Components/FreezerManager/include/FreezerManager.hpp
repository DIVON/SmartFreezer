/*
 * file: FreezerManager.hpp
 *
 * Implementation for header of FreezerManager
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef FREEZER_MANAGER_HPP
#define FREEZER_MANAGER_HPP


/* INCLUDES */

#include "Rte_FreezerManager.hpp"
#include "ETSRClock.hpp"

/* END OF INCLUDES */


/* MACROS */
/* END OF MACROS */


/* TYPE DEFINITIONS */

class FreezerManager final: private Rte_Base_FreezerManager
{
public:
    /* Constructor */
    FreezerManager(const Rte_FreezerManager &Rte);

    /* Component runnables */
    void ruRefresh(void);
    void ruStartupTimeCheck(void);
protected:
    void StartupWaiting();
    void StateFreezing();
    void StateDefreezing();
    void StateKeeping();
private:
    enum class FreezingState
    {
        /*
         * Показывает, прошло ли время для запуска охлаждения.
         * Сразу после запуска нельзя запускать охлаждение, т.к. это может привести к клину компрессора
         */
        StartupWaiting,
        Freezing,
        Defreezing,
        Keeping
    };

    FreezingState  _freezingState = FreezingState::StartupWaiting;
    sdtTime _totalFreezingTimeSec = 0;
    sdtTime _totalDefreezingTimeSec = 0;

    /* Время прошедшее с момента как разомкнулось реле разморозки при нагревании */
    sdtTime _waitingDefreezeTimeSec = 0;
    bool _defreezeRelayWasOpened = false;
    bool _wasSwitchedOff = false;
    sdtTime _switchOffTimeout = 0;
};

/* END OF TYPE DEFINITIONS */


/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */


/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* FREEZER_MANAGER_HPP */

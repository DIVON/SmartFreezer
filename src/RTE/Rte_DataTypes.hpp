/*
 * file: Rte_DataTypes.hpp
 *
 * This file contains all datatypes for programm architecture.
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_DATA_TYPES_HPP
#define RTE_DATA_TYPES_HPP


#include "Rte_ReturnCodes.hpp"

#ifdef TEST_RTE
#define STATIC
#define STATIC_CONST const
#define CONST_VOLATILE volatile
#define ALWAYS_INLINE
#else
#define STATIC static
#define STATIC_CONST static const
#define CONST_VOLATILE const volatile
#define ALWAYS_INLINE  inline __attribute__((always_inline))
#endif

/* Base datatypes */
#define TRUE	1
#define FALSE	0

#ifndef NULL
#define NULL 0U
#endif

#ifndef boolean
typedef bool boolean;
#endif

typedef  float  float32;
typedef  signed short  int16;
typedef  signed int  int32;
typedef  signed long long  int64;
typedef  signed char  int8;
typedef  unsigned short  uint16;
typedef  unsigned int  uint32;
typedef  unsigned long long  uint64;
typedef  unsigned char  uint8;
/* Enums data types */

/* Enum Datatype : enDefreezeRelayStatus */
enum class enDefreezeRelayStatus
{
    DRS_CLOSED = 0,
    DRS_OPEN = 1,
};

#define enDefreezeRelayStatus_LOWER_LIMIT                                       0
#define enDefreezeRelayStatus_UPPER_LIMIT                                       1
#define enDefreezeRelayStatus_ELEMENTS_COUNT                                    2

/* Enum Datatype : enFreezerStatus */
enum class enFreezerStatus
{
    FS_STANDBY = 0,
    FS_FREEZING = 1,
    FS_HEATING = 2,
};

#define enFreezerStatus_LOWER_LIMIT                                             0
#define enFreezerStatus_UPPER_LIMIT                                             2
#define enFreezerStatus_ELEMENTS_COUNT                                          3

/* Enum Datatype : enQualifier */
enum class enQualifier
{
    SEN_NOT_AVAILABLE = 0,
    SEN_NOT_RELIABLE = 1,
    SEN_RELIABLE = 2,
};

#define enQualifier_LOWER_LIMIT                                                 0
#define enQualifier_UPPER_LIMIT                                                 2
#define enQualifier_ELEMENTS_COUNT                                              3

/* Simple data types */

/* Datatype : sdtTemperature */
#define sdtTemperature_UPPER_LIMIT                                              350.f
#define sdtTemperature_LOWER_LIMIT                                              -100.f
typedef  float32        sdtTemperature;

/* Complex data types */

/* Complex datatype : cdtQualifiedTemperature */
struct cdtQualifiedTemperature
{
    sdtTemperature Temperature;
    enQualifier Qualifier;
};

#endif /* RTE_DATA_TYPES_HPP */

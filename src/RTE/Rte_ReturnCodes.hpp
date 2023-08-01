/*
 * file: Rte_ReturnCodes.h
 *
 * This file contains return codes of the RTE functions.
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef RTE_RETURN_CODES_HPP
#define RTE_RETURN_CODES_HPP

/* Rte return codes */
 enum class Std_ReturnType
{
    RTE_E_OK,
    RTE_E_INVALID,
    RTE_E_LOST_DATA,
    RTE_E_NO_DATA,
    RTE_E_UNCONNECTED,
    RTE_E_OUT_OF_RANGE,
    RTE_E_LIMIT,
    RTE_E_ERROR
};

#endif /* RTE_RETURN_CODES_HPP */

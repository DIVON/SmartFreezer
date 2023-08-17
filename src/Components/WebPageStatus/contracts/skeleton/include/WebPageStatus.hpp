/*
 * file: WebPageStatus.hpp
 *
 * Implementation for header of WebPageStatus
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 *
 */
#ifndef WEB_PAGE_STATUS_HPP
#define WEB_PAGE_STATUS_HPP


/* INCLUDES */

#include "Rte_WebPageStatus.hpp"

/* END OF INCLUDES */

/* MACROS */
/* END OF MACROS */

/* TYPE DEFINITIONS */

class WebPageStatus final: private Rte_Base_WebPageStatus
{
public:
    /* Constructor */
    WebPageStatus(const Rte_WebPageStatus &Rte);

    /* Component runnables */
    void ruInit(void);

protected:
    /* Make other functions here */ 
private:

};

/* END OF TYPE DEFINITIONS */

/* EXTERNAL VARIABLES */
/* END OF EXTERNAL VARIABLES */

/* GLOBAL FUNCTION DECLARATIONS */
/* END OF GLOBAL FUNCTION DECLARATIONS */

#endif /* WEB_PAGE_STATUS_HPP */

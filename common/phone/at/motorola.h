/* (c) 2007 Michal Cihar */

/**
 * @file motorola.h
 * @author Michal Čihař
 */
/**
 * @ingroup Phone
 * @{
 */
/**
 * @addtogroup ATPhone
 * @{
 */

#ifndef atgen_motorola_h
#define atgen_motorola_h

#include <gammu-config.h>
#include "../../protocol/protocol.h"

#ifdef GSM_ENABLE_ATGEN

/**
 * Switches to correct mode to execute command.
 *
 * \param s State machine data.
 * \param command Command which should be checked.
 *
 * \return Error code.
 */
GSM_Error MOTOROLA_SetMode(GSM_StateMachine *s, const char *command);

/**
 * Catches +MBAN: reply and sets Mode according to it.
 */
GSM_Error MOTOROLA_Banner(GSM_Protocol_Message msg, GSM_StateMachine *s);

#endif
#endif

/*@}*/
/*@}*/

/* How should editor hadle tabs in this file? Add editor commands here.
 * vim: noexpandtab sw=8 ts=8 sts=8:
 */

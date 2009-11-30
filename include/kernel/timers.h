/**
 * \file timers.h
 */

#ifndef _TIMERS_H_
#define _TIMERS_H_

#ifndef __ASSEMBLER__


/**
 * Initialization of timers subsystem
 */
int timers_ctrl_init();

typedef void (*TIMER_FUNC)(uint32_t id);

/**
 * Set 'handle' timer with 'id' identity for executing every 'ticks' ms.
 */
int set_timer(uint32_t id, uint32_t ticks, TIMER_FUNC handle);

/**
 * Shut down timer with 'id' identity
 */
void close_timer(uint32_t id);


/**
 * Save timers context. Now saving only one context.
 */
int timers_context_save();

/**
 * Restore context by it number.
 */
int timers_context_restore(int context_number);

/**
 * Shutdown timers subsystem.
 */
void timers_off();

#endif //__ASSEMBLER
#endif //_TIMERS_H_

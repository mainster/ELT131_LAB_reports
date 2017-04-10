#ifndef _EPWM1_h_
#define _EPWM1_h_

/* -------------------------------  Includes  ------------------------------ */
#include <stdint.h>
#include "DSP28x_Project.h"
#include "md_bsp_explorer.h"
#include "md_globals.h"
/* ----------------------------  Configuration  ---------------------------- */
/* ---------------------------  Private typedefs  -------------------------- */
/* --------------------------  Private functions  -------------------------- */
/* --------------------------  Private variables  -------------------------- */
/* ----------------------------  Private defines  -------------------------- */

/* ----------------------------  Private macros  --------------------------- */
#define F_EPWM_MIN(_eDIV, _F_CPU)     ((uint32_t)(_F_CPU/_eDIV)/((uint32_t)2*0xffff))

/* ---------------------  Private function prototypes  --------------------- */
void MD_EPWM1_Init(const uint32_t f_ePwm1, const uint32_t _F_CPU);
/**
 * @brief      { function_description }
 *
 * @param[in]  f_ePwm1   The f e pwm 1
 * @param[in]  _F_CPU    The f cpu
 */
void MD_EPWM1_freqConfig(const uint32_t f_ePwm1, const uint32_t _F_CPU);
// Some single line comments
void MD_EPWM1_freqConfig(const uint32_t f_ePwm1, const uint32_t _F_CPU);
// Some single line comments

#endif

/*
 * File: Failure_Detection0.h
 *
 * Code generated for Simulink model 'Failure_Detection0'.
 *
 * Model version                  : 9.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Mar  9 03:08:28 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Failure_Detection0_h_
#define RTW_HEADER_Failure_Detection0_h_
#ifndef Failure_Detection0_COMMON_INCLUDES_
#define Failure_Detection0_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* Failure_Detection0_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T S1;                           /* '<Root>/S1' */
  real_T S2;                           /* '<Root>/S2' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T SF1;                       /* '<Root>/SF1' */
  boolean_T SF2;                       /* '<Root>/SF2' */
  boolean_T SFCoherency;               /* '<Root>/SFCoherency' */
} ExtY;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void Failure_Detection0_initialize(void);
extern void Failure_Detection0_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('Failure_Detection/Failure_Detection')    - opens subsystem Failure_Detection/Failure_Detection
 * hilite_system('Failure_Detection/Failure_Detection/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Failure_Detection'
 * '<S1>'   : 'Failure_Detection/Failure_Detection'
 */
#endif                                 /* RTW_HEADER_Failure_Detection0_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

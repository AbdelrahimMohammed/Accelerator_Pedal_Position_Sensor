/*
 * File: Failure_Detection0.c
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

#include "Failure_Detection0.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void Failure_Detection0_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Failure_Detection' */
  /* Outport: '<Root>/SF1' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Inport: '<Root>/S1'
   *  Logic: '<S1>/OR'
   *  RelationalOperator: '<S1>/Relational Operator'
   *  RelationalOperator: '<S1>/Relational Operator1'
   */
  rtY.SF1 = ((rtU.S1 > 4.5) || (rtU.S1 < 0.5));

  /* Outport: '<Root>/SF2' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Inport: '<Root>/S2'
   *  Logic: '<S1>/OR1'
   *  RelationalOperator: '<S1>/Relational Operator2'
   *  RelationalOperator: '<S1>/Relational Operator3'
   */
  rtY.SF2 = ((rtU.S2 > 4.5) || (rtU.S2 < 0.5));

  /* Outport: '<Root>/SFCoherency' incorporates:
   *  Constant: '<S1>/Constant4'
   *  Inport: '<Root>/S1'
   *  Inport: '<Root>/S2'
   *  RelationalOperator: '<S1>/Relational Operator4'
   *  Sum: '<S1>/Add'
   */
  rtY.SFCoherency = (rtU.S2 + rtU.S1 != 5.0);

  /* End of Outputs for SubSystem: '<Root>/Failure_Detection' */
}

/* Model initialize function */
void Failure_Detection0_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

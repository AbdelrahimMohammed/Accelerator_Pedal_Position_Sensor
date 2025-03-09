/*
 * File: Failure_Detection0_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef FAILURE_DETECTION0_CA_H
#define FAILURE_DETECTION0_CA_H

/* preprocessor validation checks */
#include "Failure_Detection0_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_Failure_Detection0_HWRes;
extern CA_PWS_TestResults CA_Failure_Detection0_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_Failure_Detection0_ExpHW;
extern CA_HWImpl CA_Failure_Detection0_ActHW;

/* entry point function to run tests */
void Failure_Detection0_caRunTests(void);

#endif                                 /* FAILURE_DETECTION0_CA_H */

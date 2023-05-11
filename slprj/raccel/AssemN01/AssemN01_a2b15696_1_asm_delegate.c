#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void AssemN01_a2b15696_1_setTargets ( const RuntimeDerivedValuesBundle * rtdv
, CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
AssemN01_a2b15696_1_resetAsmStateVector ( const void * mech , double * state
) { double xx [ 1 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; state [ 0 ] = xx [ 0 ]
; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3 ] = xx [ 0 ] ;
state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ] = xx [ 0 ] ;
state [ 7 ] = xx [ 0 ] ; } void
AssemN01_a2b15696_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData , double * state ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector ; ( void
) motionData ; } void AssemN01_a2b15696_1_computeDiscreteState ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , double * state ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
state ; } void AssemN01_a2b15696_1_adjustPosition ( const void * mech , const
double * dofDeltas , double * state ) { ( void ) mech ; state [ 0 ] = state [
0 ] + dofDeltas [ 0 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 1 ] ; state [
4 ] = state [ 4 ] + dofDeltas [ 2 ] ; state [ 6 ] = state [ 6 ] + dofDeltas [
3 ] ; } static void perturbAsmJointPrimitiveState_0_0 ( double mag , double *
state ) { state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_0_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 1 ] = state [ 1 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_1_0 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_1_0v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_2_0 ( double mag , double * state ) {
state [ 4 ] = state [ 4 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_0v ( double mag , double * state ) { state [
4 ] = state [ 4 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } void
AssemN01_a2b15696_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 0 :
perturbAsmJointPrimitiveState_0_0 ( mag , state ) ; break ; case 1 :
perturbAsmJointPrimitiveState_0_0v ( mag , state ) ; break ; case 12 :
perturbAsmJointPrimitiveState_1_0 ( mag , state ) ; break ; case 13 :
perturbAsmJointPrimitiveState_1_0v ( mag , state ) ; break ; case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; } } void
AssemN01_a2b15696_1_computePosDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { } } void AssemN01_a2b15696_1_computeVelDofBlendMatrix ( const
void * mech , size_t stageIdx , size_t primIdx , const double * state , int
partialType , double * matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void
) primIdx ; ( void ) state ; ( void ) partialType ; ( void ) matrix ; switch
( ( stageIdx * 6 + primIdx ) ) { } } void
AssemN01_a2b15696_1_projectPartiallyTargetedPos ( const void * mech , size_t
stageIdx , size_t primIdx , const double * origState , int partialType ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) origState ; ( void ) partialType ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) ) { } } void AssemN01_a2b15696_1_propagateMotion (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , const double *
state , double * motionData ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 76 ] ; (
void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 0.449858509274086
; xx [ 1 ] = - 0.6499474264445344 ; xx [ 2 ] = 0.09600082742902466 ; xx [ 3 ]
= - 0.6049624001743963 ; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 0 ] ;
xx [ 6 ] = 0.7000139319455152 ; xx [ 7 ] = sin ( xx [ 5 ] ) ; xx [ 8 ] =
0.7009225426941154 ; xx [ 9 ] = 0.1367043679821385 ; xx [ 10 ] = cos ( xx [ 5
] ) ; xx [ 11 ] = - ( xx [ 6 ] * xx [ 7 ] ) ; xx [ 12 ] = xx [ 8 ] * xx [ 7 ]
; xx [ 13 ] = - ( xx [ 9 ] * xx [ 7 ] ) ; pm_math_Quaternion_compose_ra ( xx
+ 0 , xx + 10 , xx + 14 ) ; xx [ 0 ] = - 0.20844067650888 ; xx [ 1 ] =
0.08920550732153665 ; xx [ 2 ] = - 0.05020055872732278 ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 0 , xx + 10 ) ; xx [ 0 ] = 0.21
- xx [ 12 ] ; xx [ 18 ] = - 0.9157704701733157 ; xx [ 19 ] =
0.01321965213322094 ; xx [ 20 ] = - 0.2585508042803786 ; xx [ 21 ] = -
0.307150074657309 ; xx [ 1 ] = xx [ 4 ] * state [ 2 ] ; xx [ 2 ] =
0.01811281315775579 ; xx [ 3 ] = sin ( xx [ 1 ] ) ; xx [ 5 ] =
0.3155658677770614 ; xx [ 7 ] = 0.9487307885241326 ; xx [ 22 ] = cos ( xx [ 1
] ) ; xx [ 23 ] = - ( xx [ 2 ] * xx [ 3 ] ) ; xx [ 24 ] = xx [ 5 ] * xx [ 3 ]
; xx [ 25 ] = xx [ 7 ] * xx [ 3 ] ; pm_math_Quaternion_compose_ra ( xx + 18 ,
xx + 22 , xx + 26 ) ; xx [ 18 ] = - 0.3466079923105882 ; xx [ 19 ] =
0.04880535271512142 ; xx [ 20 ] = 0.1502761766433057 ;
pm_math_Quaternion_xform_ra ( xx + 26 , xx + 18 , xx + 21 ) ; xx [ 1 ] =
0.2051712288926141 - xx [ 21 ] ; xx [ 3 ] = - ( 0.1058809023753007 + xx [ 22
] ) ; xx [ 12 ] = - ( 0.1692498529786663 + xx [ 23 ] ) ; xx [ 18 ] = -
0.9825390912900167 ; xx [ 19 ] = 0.1827185462430177 ; xx [ 20 ] = -
2.084111518791671e-3 ; xx [ 21 ] = - 0.03502175645229622 ; xx [ 13 ] = xx [ 4
] * state [ 4 ] ; xx [ 22 ] = 0.01261873009251368 ; xx [ 23 ] = sin ( xx [ 13
] ) ; xx [ 24 ] = 0.04552811374152367 ; xx [ 25 ] = 0.9988833558078697 ; xx [
30 ] = cos ( xx [ 13 ] ) ; xx [ 31 ] = - ( xx [ 22 ] * xx [ 23 ] ) ; xx [ 32
] = - ( xx [ 24 ] * xx [ 23 ] ) ; xx [ 33 ] = xx [ 25 ] * xx [ 23 ] ;
pm_math_Quaternion_compose_ra ( xx + 18 , xx + 30 , xx + 34 ) ; xx [ 18 ] = -
0.2073802135515281 ; xx [ 19 ] = 0.04281948026385274 ; xx [ 20 ] = -
0.1012315232199329 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 18 , xx +
30 ) ; xx [ 13 ] = 0.5033711196861744 - xx [ 30 ] ; xx [ 18 ] =
0.06424091221761979 - xx [ 31 ] ; xx [ 19 ] = 0.1455589028501758 - xx [ 32 ]
; xx [ 30 ] = - 0.9109984432937877 ; xx [ 31 ] = 0.3241673451577192 ; xx [ 32
] = 0.169436542737278 ; xx [ 33 ] = 0.1904957391516431 ; xx [ 20 ] = xx [ 4 ]
* state [ 6 ] ; xx [ 4 ] = 0.4315575367136364 ; xx [ 21 ] = sin ( xx [ 20 ] )
; xx [ 23 ] = 0.5639117156067105 ; xx [ 38 ] = 0.7041034508558774 ; xx [ 39 ]
= cos ( xx [ 20 ] ) ; xx [ 40 ] = - ( xx [ 4 ] * xx [ 21 ] ) ; xx [ 41 ] = xx
[ 23 ] * xx [ 21 ] ; xx [ 42 ] = - ( xx [ 38 ] * xx [ 21 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 30 , xx + 39 , xx + 43 ) ; xx [ 30 ] = -
0.2065909432784903 ; xx [ 31 ] = - 0.02506716073910767 ; xx [ 32 ] = -
0.08320267192181108 ; pm_math_Quaternion_xform_ra ( xx + 43 , xx + 30 , xx +
39 ) ; xx [ 20 ] = 0.6416682419077211 - xx [ 39 ] ; xx [ 21 ] = - (
1.499240006223278e-4 + xx [ 40 ] ) ; xx [ 30 ] = - ( 0.1099836989159528 + xx
[ 41 ] ) ; pm_math_Quaternion_compose_ra ( xx + 14 , xx + 26 , xx + 39 ) ; xx
[ 31 ] = xx [ 1 ] ; xx [ 32 ] = xx [ 3 ] ; xx [ 33 ] = xx [ 12 ] ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 31 , xx + 47 ) ; xx [ 50 ] = xx
[ 47 ] - xx [ 10 ] ; xx [ 51 ] = xx [ 48 ] - xx [ 11 ] ; xx [ 47 ] = xx [ 49
] + xx [ 0 ] ; pm_math_Quaternion_compose_ra ( xx + 39 , xx + 34 , xx + 52 )
; xx [ 56 ] = xx [ 13 ] ; xx [ 57 ] = xx [ 18 ] ; xx [ 58 ] = xx [ 19 ] ;
pm_math_Quaternion_xform_ra ( xx + 39 , xx + 56 , xx + 59 ) ; xx [ 48 ] = - (
xx [ 6 ] * state [ 1 ] ) ; xx [ 6 ] = xx [ 8 ] * state [ 1 ] ; xx [ 8 ] = - (
xx [ 9 ] * state [ 1 ] ) ; xx [ 9 ] = 0.02299192076890365 * state [ 1 ] ; xx
[ 49 ] = 6.64633955665914e-3 * state [ 1 ] ; xx [ 62 ] = 0.08365567104814245
* state [ 1 ] ; xx [ 63 ] = xx [ 48 ] ; xx [ 64 ] = xx [ 6 ] ; xx [ 65 ] = xx
[ 8 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 26 , xx + 63 , xx + 66 ) ;
xx [ 69 ] = xx [ 66 ] - xx [ 2 ] * state [ 3 ] ; xx [ 2 ] = xx [ 67 ] + xx [
5 ] * state [ 3 ] ; xx [ 5 ] = xx [ 68 ] + xx [ 7 ] * state [ 3 ] ;
pm_math_Vector3_cross_ra ( xx + 63 , xx + 31 , xx + 66 ) ; xx [ 31 ] = xx [
66 ] + xx [ 9 ] ; xx [ 32 ] = xx [ 67 ] + xx [ 49 ] ; xx [ 33 ] = xx [ 68 ] -
xx [ 62 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 26 , xx + 31 , xx + 63
) ; xx [ 7 ] = xx [ 63 ] - 1.118891323048175e-3 * state [ 3 ] ; xx [ 31 ] =
xx [ 64 ] + 0.3261157495439888 * state [ 3 ] ; xx [ 32 ] = xx [ 65 ] -
0.1084936496371284 * state [ 3 ] ; xx [ 63 ] = xx [ 69 ] ; xx [ 64 ] = xx [ 2
] ; xx [ 65 ] = xx [ 5 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 34 , xx
+ 63 , xx + 66 ) ; xx [ 33 ] = xx [ 66 ] - xx [ 22 ] * state [ 5 ] ; xx [ 22
] = xx [ 67 ] - xx [ 24 ] * state [ 5 ] ; xx [ 24 ] = xx [ 68 ] + xx [ 25 ] *
state [ 5 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 56 , xx + 66 ) ; xx [
56 ] = xx [ 66 ] + xx [ 7 ] ; xx [ 57 ] = xx [ 67 ] + xx [ 31 ] ; xx [ 58 ] =
xx [ 68 ] + xx [ 32 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 34 , xx +
56 , xx + 63 ) ; xx [ 25 ] = xx [ 63 ] + 0.03816278583652127 * state [ 5 ] ;
xx [ 56 ] = xx [ 64 ] + 0.2084260569088694 * state [ 5 ] ; xx [ 57 ] = xx [
65 ] + 9.981957414466714e-3 * state [ 5 ] ; xx [ 63 ] = xx [ 33 ] ; xx [ 64 ]
= xx [ 22 ] ; xx [ 65 ] = xx [ 24 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 43 , xx + 63 , xx + 66 ) ; xx [ 70 ] = xx [ 20 ] ; xx [ 71 ] = xx [ 21 ] ;
xx [ 72 ] = xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 70 , xx +
73 ) ; xx [ 63 ] = xx [ 73 ] + xx [ 25 ] ; xx [ 64 ] = xx [ 74 ] + xx [ 56 ]
; xx [ 65 ] = xx [ 75 ] + xx [ 57 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 43 , xx + 63 , xx + 70 ) ; motionData [ 0 ] = xx [ 14 ] ; motionData [ 1 ]
= xx [ 15 ] ; motionData [ 2 ] = xx [ 16 ] ; motionData [ 3 ] = xx [ 17 ] ;
motionData [ 4 ] = - xx [ 10 ] ; motionData [ 5 ] = - xx [ 11 ] ; motionData
[ 6 ] = xx [ 0 ] ; motionData [ 7 ] = xx [ 26 ] ; motionData [ 8 ] = xx [ 27
] ; motionData [ 9 ] = xx [ 28 ] ; motionData [ 10 ] = xx [ 29 ] ; motionData
[ 11 ] = xx [ 1 ] ; motionData [ 12 ] = xx [ 3 ] ; motionData [ 13 ] = xx [
12 ] ; motionData [ 14 ] = xx [ 34 ] ; motionData [ 15 ] = xx [ 35 ] ;
motionData [ 16 ] = xx [ 36 ] ; motionData [ 17 ] = xx [ 37 ] ; motionData [
18 ] = xx [ 13 ] ; motionData [ 19 ] = xx [ 18 ] ; motionData [ 20 ] = xx [
19 ] ; motionData [ 21 ] = xx [ 43 ] ; motionData [ 22 ] = xx [ 44 ] ;
motionData [ 23 ] = xx [ 45 ] ; motionData [ 24 ] = xx [ 46 ] ; motionData [
25 ] = xx [ 20 ] ; motionData [ 26 ] = xx [ 21 ] ; motionData [ 27 ] = xx [
30 ] ; motionData [ 28 ] = xx [ 39 ] ; motionData [ 29 ] = xx [ 40 ] ;
motionData [ 30 ] = xx [ 41 ] ; motionData [ 31 ] = xx [ 42 ] ; motionData [
32 ] = xx [ 50 ] ; motionData [ 33 ] = xx [ 51 ] ; motionData [ 34 ] = xx [
47 ] ; motionData [ 35 ] = xx [ 52 ] ; motionData [ 36 ] = xx [ 53 ] ;
motionData [ 37 ] = xx [ 54 ] ; motionData [ 38 ] = xx [ 55 ] ; motionData [
39 ] = xx [ 59 ] + xx [ 50 ] ; motionData [ 40 ] = xx [ 60 ] + xx [ 51 ] ;
motionData [ 41 ] = xx [ 61 ] + xx [ 47 ] ; motionData [ 42 ] = xx [ 48 ] ;
motionData [ 43 ] = xx [ 6 ] ; motionData [ 44 ] = xx [ 8 ] ; motionData [ 45
] = xx [ 9 ] ; motionData [ 46 ] = xx [ 49 ] ; motionData [ 47 ] = - xx [ 62
] ; motionData [ 48 ] = xx [ 69 ] ; motionData [ 49 ] = xx [ 2 ] ; motionData
[ 50 ] = xx [ 5 ] ; motionData [ 51 ] = xx [ 7 ] ; motionData [ 52 ] = xx [
31 ] ; motionData [ 53 ] = xx [ 32 ] ; motionData [ 54 ] = xx [ 33 ] ;
motionData [ 55 ] = xx [ 22 ] ; motionData [ 56 ] = xx [ 24 ] ; motionData [
57 ] = xx [ 25 ] ; motionData [ 58 ] = xx [ 56 ] ; motionData [ 59 ] = xx [
57 ] ; motionData [ 60 ] = xx [ 66 ] - xx [ 4 ] * state [ 7 ] ; motionData [
61 ] = xx [ 67 ] + xx [ 23 ] * state [ 7 ] ; motionData [ 62 ] = xx [ 68 ] -
xx [ 38 ] * state [ 7 ] ; motionData [ 63 ] = xx [ 70 ] + 0.06456883584605544
* state [ 7 ] ; motionData [ 64 ] = xx [ 71 ] - 0.1095546559353863 * state [
7 ] ; motionData [ 65 ] = xx [ 72 ] - 0.1273169753939562 * state [ 7 ] ; }
size_t AssemN01_a2b15696_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData , double * error ) { ( void ) mech ; (
void ) rtdv ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ;
switch ( constraintIdx ) { } return 0 ; } size_t
AssemN01_a2b15696_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { } return 0 ; }
size_t AssemN01_a2b15696_1_computeFullAssemblyJacobian ( const void * mech ,
const RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void )
modeVector ; ( void ) motionData ; ( void ) J ; return 0 ; } boolean_T
AssemN01_a2b15696_1_isInKinematicSingularity ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData ) { ( void ) mech ; ( void ) rtdv ; (
void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) { } return
0 ; } void AssemN01_a2b15696_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double
* asmState , const int * asmModeVector , const int * simModeVector , double *
simState ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; ( void ) asmMech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ; ( void ) simModeVector
; simState [ 0 ] = asmState [ 0 ] ; simState [ 1 ] = asmState [ 1 ] ;
simState [ 2 ] = asmState [ 2 ] ; simState [ 3 ] = asmState [ 3 ] ; simState
[ 4 ] = asmState [ 4 ] ; simState [ 5 ] = asmState [ 5 ] ; simState [ 6 ] =
asmState [ 6 ] ; simState [ 7 ] = asmState [ 7 ] ; }

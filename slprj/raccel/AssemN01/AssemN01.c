#include "rt_logging_mmi.h"
#include "AssemN01_capi.h"
#include <math.h>
#include "AssemN01.h"
#include "AssemN01_private.h"
#include "AssemN01_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 1 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.5 (R2021a) 14-Nov-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; void MdlStart ( void ) { CXPtMax * _rtXPerturbMax ; CXPtMin *
_rtXPerturbMin ; NeModelParameters modelParameters ; NeModelParameters
modelParameters_p ; NeslSimulationData * simulationData ; NeslSimulator * tmp
; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree *
diagnosticTree_p ; char * msg ; char * msg_e ; char * msg_p ; real_T tmp_m [
12 ] ; real_T time ; real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 4 ] ;
boolean_T tmp_p ; boolean_T val ; { bool externalInputIsInDatasetFormat =
false ; void * pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { FWksInfo * fromwksInfo ;
if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == (
NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName = "input" ; fromwksInfo -> origDataTypeId
= 0 ; fromwksInfo -> origIsComplex = 0 ; fromwksInfo -> origWidth = 3 ;
fromwksInfo -> origElSize = sizeof ( real_T ) ; fromwksInfo -> data = ( void
* ) rtP . FromWorkspace_Data0 ; fromwksInfo -> nDataPoints = 18018 ;
fromwksInfo -> time = ( double * ) rtP . FromWorkspace_Time0 ; rtDW .
ahryi4nzas . TimePtr = fromwksInfo -> time ; rtDW . ahryi4nzas . DataPtr =
fromwksInfo -> data ; rtDW . ahryi4nzas . RSimInfoPtr = fromwksInfo ; } rtDW
. oe4icidrdp . PrevIndex = 0 ; } tmp = nesl_lease_simulator (
"AssemN01/Solver Configuration_1" , 0 , 0 ) ; rtDW . gr3f13201k = ( void * )
tmp ; tmp_p = pointer_is_null ( rtDW . gr3f13201k ) ; if ( tmp_p ) {
AssemN01_a2b15696_1_gateway ( ) ; tmp = nesl_lease_simulator (
"AssemN01/Solver Configuration_1" , 0 , 0 ) ; rtDW . gr3f13201k = ( void * )
tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"AssemN01/Solver Configuration_100" , ( void * * ) ( & rtDW . gr3f13201k ) ,
0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . eqyvaubzu4 = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
gwqeoclxxg = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverTolerance = 0.001 ;
modelParameters . mVariableStepSolver = true ; modelParameters . mIsUsingODEN
= false ; modelParameters . mFixedStepSize = 0.001 ; modelParameters .
mStartTime = 0.0 ; modelParameters . mLoadInitialState = false ;
modelParameters . mUseSimState = false ; modelParameters . mLinTrimCompile =
false ; modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 6.04975784E+8 ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; val = false ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp_p ) { tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; val = ( tmp_p &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters . mLoadInitialState = val ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . gwqeoclxxg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . gr3f13201k
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . eqyvaubzu4 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 2 ;
simulationData -> mData -> mContStates . mX = & rtX . phj1woez25 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . n2f5j5v2br ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pajkuggpal ; tmp_p = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS
) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp_p
; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; tmp_p = ssGetIsOkayToUpdateMode ( rtS ) ;
simulationData -> mData -> mIsOkayToUpdateMode = tmp_p ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . mxi5qk0deo [ 0 ] ; tmp_m [ 1 ] = rtB . mxi5qk0deo [ 1 ] ;
tmp_m [ 2 ] = rtB . mxi5qk0deo [ 2 ] ; tmp_m [ 3 ] = rtB . mxi5qk0deo [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . ntpisvto0j [ 0 ] ; tmp_m [ 5 ] = rtB .
ntpisvto0j [ 1 ] ; tmp_m [ 6 ] = rtB . ntpisvto0j [ 2 ] ; tmp_m [ 7 ] = rtB .
ntpisvto0j [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . k4f15c2d5m [ 0 ] ;
tmp_m [ 9 ] = rtB . k4f15c2d5m [ 1 ] ; tmp_m [ 10 ] = rtB . k4f15c2d5m [ 2 ]
; tmp_m [ 11 ] = rtB . k4f15c2d5m [ 3 ] ; tmp_g [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 2 ; simulationData -> mData ->
mNumjacDxLo . mX = & _rtXPerturbMin -> phj1woez25 [ 0 ] ; simulationData ->
mData -> mNumjacDxHi . mN = 2 ; simulationData -> mData -> mNumjacDxHi . mX =
& _rtXPerturbMax -> phj1woez25 [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . gwqeoclxxg ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gr3f13201k ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
"AssemN01/Solver Configuration_1" , 1 , 0 ) ; rtDW . bmc0zejbqq = ( void * )
tmp ; tmp_p = pointer_is_null ( rtDW . bmc0zejbqq ) ; if ( tmp_p ) {
AssemN01_a2b15696_1_gateway ( ) ; tmp = nesl_lease_simulator (
"AssemN01/Solver Configuration_1" , 1 , 0 ) ; rtDW . bmc0zejbqq = ( void * )
tmp ; } slsaSaveRawMemoryForSimTargetOP ( rtS ,
"AssemN01/Solver Configuration_110" , ( void * * ) ( & rtDW . bmc0zejbqq ) ,
0U * sizeof ( real_T ) , nesl_save_simdata , nesl_restore_simdata ) ;
simulationData = nesl_create_simulation_data ( ) ; rtDW . i0i4cb4p0i = ( void
* ) simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
lyoud0r3dz = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = true ; modelParameters_p .
mIsUsingODEN = false ; modelParameters_p . mFixedStepSize = 0.001 ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_p . mRTWModifiedTimeStamp = 6.04975784E+8 ; tmp_e = 0.001 ;
modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_p
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; val = false ; tmp_p = slIsRapidAcceleratorSimulating (
) ; if ( tmp_p ) { tmp_p = ssGetGlobalInitialStatesAvailable ( rtS ) ; val =
( tmp_p && ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p .
mLoadInitialState = val ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW
. lyoud0r3dz ; diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * )
rtDW . bmc0zejbqq , & modelParameters_p , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p
) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS
, msg_e ) ; } } } void MdlOutputs ( int_T tid ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char *
msg_p ; real_T tmp_m [ 14 ] ; real_T tmp_p [ 12 ] ; real_T time ; real_T
time_p ; int32_T tmp_i ; int_T tmp_g [ 5 ] ; int_T tmp_e [ 4 ] ; boolean_T
tmp ; { real_T * pDataValues = ( real_T * ) rtDW . ahryi4nzas . DataPtr ;
real_T * pTimeValues = ( real_T * ) rtDW . ahryi4nzas . TimePtr ; int_T
currTimeIndex = rtDW . oe4icidrdp . PrevIndex ; real_T t = ssGetTaskTime (
rtS , 0 ) ; if ( t >= pTimeValues [ 18017 ] ) { { int_T elIdx ; for ( elIdx =
0 ; elIdx < 3 ; ++ elIdx ) { ( & rtB . lzwt2usxcl [ 0 ] ) [ elIdx ] =
pDataValues [ 18017 ] ; pDataValues += 18018 ; } } } else { int numPoints ,
lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW . ahryi4nzas .
RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint = numPoints
- 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >=
pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t
< pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ]
) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex +
1 ] ) { currTimeIndex ++ ; } } } rtDW . oe4icidrdp . PrevIndex =
currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 =
pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { { int_T
elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { ( & rtB . lzwt2usxcl [ 0 ]
) [ elIdx ] = pDataValues [ currTimeIndex ] ; pDataValues += numPoints ; } }
} else { { int_T elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { ( & rtB .
lzwt2usxcl [ 0 ] ) [ elIdx ] = pDataValues [ currTimeIndex + 1 ] ;
pDataValues += numPoints ; } } } } else { real_T f1 = ( t2 - t ) / ( t2 - t1
) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; { int_T elIdx ; for ( elIdx = 0 ; elIdx < 3 ; ++ elIdx ) { d1
= pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex + 1 ] ; ( & rtB .
lzwt2usxcl [ 0 ] ) [ elIdx ] = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 )
; pDataValues += numPoints ; } } } } } } rtB . nytfiisyns = rtB . lzwt2usxcl
[ 0 ] - rtP . Constant10_Value ; rtB . b3xrkvydat = rtP . Gain_Gain * rtB .
nytfiisyns ; rtB . mxi5qk0deo [ 0 ] = rtB . b3xrkvydat ; rtB . mxi5qk0deo [ 1
] = rtP . Constant1_Value ; rtB . mxi5qk0deo [ 2 ] = rtP . Constant2_Value ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . mezpr2htyz [ 0 ] = ! ( rtDW .
mezpr2htyz [ 1 ] == rtB . mxi5qk0deo [ 2 ] ) ; rtDW . mezpr2htyz [ 1 ] = rtB
. mxi5qk0deo [ 2 ] ; } rtB . mxi5qk0deo [ 2 ] = rtDW . mezpr2htyz [ 1 ] ; rtB
. mxi5qk0deo [ 3 ] = rtDW . mezpr2htyz [ 0 ] ; rtB . ntpisvto0j [ 0 ] = rtB .
lzwt2usxcl [ 1 ] ; rtB . ntpisvto0j [ 1 ] = rtP . Constant4_Value ; rtB .
ntpisvto0j [ 2 ] = rtP . Constant5_Value ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . kuislnn3oh [ 0 ] = ! ( rtDW . kuislnn3oh [ 1 ] == rtB . ntpisvto0j [ 2
] ) ; rtDW . kuislnn3oh [ 1 ] = rtB . ntpisvto0j [ 2 ] ; } rtB . ntpisvto0j [
2 ] = rtDW . kuislnn3oh [ 1 ] ; rtB . ntpisvto0j [ 3 ] = rtDW . kuislnn3oh [
0 ] ; rtB . k4f15c2d5m [ 0 ] = rtB . lzwt2usxcl [ 2 ] ; rtB . k4f15c2d5m [ 1
] = rtP . Constant7_Value ; rtB . k4f15c2d5m [ 2 ] = rtP . Constant8_Value ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . dd2bsnkxua [ 0 ] = ! ( rtDW .
dd2bsnkxua [ 1 ] == rtB . k4f15c2d5m [ 2 ] ) ; rtDW . dd2bsnkxua [ 1 ] = rtB
. k4f15c2d5m [ 2 ] ; } rtB . k4f15c2d5m [ 2 ] = rtDW . dd2bsnkxua [ 1 ] ; rtB
. k4f15c2d5m [ 3 ] = rtDW . dd2bsnkxua [ 0 ] ; simulationData = (
NeslSimulationData * ) rtDW . eqyvaubzu4 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 2 ;
simulationData -> mData -> mContStates . mX = & rtX . phj1woez25 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . n2f5j5v2br ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pajkuggpal ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp = ssGetIsOkayToUpdateMode ( rtS ) ;
simulationData -> mData -> mIsOkayToUpdateMode = tmp ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . mxi5qk0deo [ 0 ] ; tmp_p [ 1 ] = rtB . mxi5qk0deo [ 1 ] ;
tmp_p [ 2 ] = rtB . mxi5qk0deo [ 2 ] ; tmp_p [ 3 ] = rtB . mxi5qk0deo [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ntpisvto0j [ 0 ] ; tmp_p [ 5 ] = rtB .
ntpisvto0j [ 1 ] ; tmp_p [ 6 ] = rtB . ntpisvto0j [ 2 ] ; tmp_p [ 7 ] = rtB .
ntpisvto0j [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . k4f15c2d5m [ 0 ] ;
tmp_p [ 9 ] = rtB . k4f15c2d5m [ 1 ] ; tmp_p [ 10 ] = rtB . k4f15c2d5m [ 2 ]
; tmp_p [ 11 ] = rtB . k4f15c2d5m [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 2 ; simulationData -> mData ->
mOutputs . mX = & rtB . f42lgkqp05 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . gwqeoclxxg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gr3f13201k ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . i0i4cb4p0i ; time_p = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . dn4t5d10ak ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ljshdpuj2j ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; simulationData ->
mData -> mIsComputingJacobian = false ; simulationData -> mData ->
mIsEvaluatingF0 = false ; tmp = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp =
ssGetIsOkayToUpdateMode ( rtS ) ; simulationData -> mData ->
mIsOkayToUpdateMode = tmp ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = rtB . mxi5qk0deo
[ 0 ] ; tmp_m [ 1 ] = rtB . mxi5qk0deo [ 1 ] ; tmp_m [ 2 ] = rtB . mxi5qk0deo
[ 2 ] ; tmp_m [ 3 ] = rtB . mxi5qk0deo [ 3 ] ; tmp_g [ 1 ] = 4 ; tmp_m [ 4 ]
= rtB . ntpisvto0j [ 0 ] ; tmp_m [ 5 ] = rtB . ntpisvto0j [ 1 ] ; tmp_m [ 6 ]
= rtB . ntpisvto0j [ 2 ] ; tmp_m [ 7 ] = rtB . ntpisvto0j [ 3 ] ; tmp_g [ 2 ]
= 8 ; tmp_m [ 8 ] = rtB . k4f15c2d5m [ 0 ] ; tmp_m [ 9 ] = rtB . k4f15c2d5m [
1 ] ; tmp_m [ 10 ] = rtB . k4f15c2d5m [ 2 ] ; tmp_m [ 11 ] = rtB . k4f15c2d5m
[ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] = rtB . f42lgkqp05 [ 0 ] ; tmp_m [ 13
] = rtB . f42lgkqp05 [ 1 ] ; tmp_g [ 4 ] = 14 ; simulationData -> mData ->
mInputValues . mN = 14 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 3 ; simulationData -> mData ->
mOutputs . mX = & rtB . l1fj4jwp35 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . lyoud0r3dz ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. bmc0zejbqq , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData ->
mData -> mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 12 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 4 ] ; boolean_T
tmp ; simulationData = ( NeslSimulationData * ) rtDW . eqyvaubzu4 ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 2 ; simulationData -> mData -> mContStates . mX = & rtX . phj1woez25 [ 0 ]
; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . n2f5j5v2br ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pajkuggpal ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp = ssGetIsOkayToUpdateMode ( rtS ) ;
simulationData -> mData -> mIsOkayToUpdateMode = tmp ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . mxi5qk0deo [ 0 ] ; tmp_p [ 1 ] = rtB . mxi5qk0deo [ 1 ] ;
tmp_p [ 2 ] = rtB . mxi5qk0deo [ 2 ] ; tmp_p [ 3 ] = rtB . mxi5qk0deo [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ntpisvto0j [ 0 ] ; tmp_p [ 5 ] = rtB .
ntpisvto0j [ 1 ] ; tmp_p [ 6 ] = rtB . ntpisvto0j [ 2 ] ; tmp_p [ 7 ] = rtB .
ntpisvto0j [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . k4f15c2d5m [ 0 ] ;
tmp_p [ 9 ] = rtB . k4f15c2d5m [ 1 ] ; tmp_p [ 10 ] = rtB . k4f15c2d5m [ 2 ]
; tmp_p [ 11 ] = rtB . k4f15c2d5m [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . gwqeoclxxg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gr3f13201k ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 12 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 4 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . eqyvaubzu4 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 2 ;
simulationData -> mData -> mContStates . mX = & rtX . phj1woez25 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . n2f5j5v2br ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
pajkuggpal ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp = ssGetIsOkayToUpdateMode ( rtS ) ;
simulationData -> mData -> mIsOkayToUpdateMode = tmp ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . mxi5qk0deo [ 0 ] ; tmp_p [ 1 ] = rtB . mxi5qk0deo [ 1 ] ;
tmp_p [ 2 ] = rtB . mxi5qk0deo [ 2 ] ; tmp_p [ 3 ] = rtB . mxi5qk0deo [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ntpisvto0j [ 0 ] ; tmp_p [ 5 ] = rtB .
ntpisvto0j [ 1 ] ; tmp_p [ 6 ] = rtB . ntpisvto0j [ 2 ] ; tmp_p [ 7 ] = rtB .
ntpisvto0j [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . k4f15c2d5m [ 0 ] ;
tmp_p [ 9 ] = rtB . k4f15c2d5m [ 1 ] ; tmp_p [ 10 ] = rtB . k4f15c2d5m [ 2 ]
; tmp_p [ 11 ] = rtB . k4f15c2d5m [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 2 ; simulationData -> mData -> mDx . mX
= & _rtXdot -> phj1woez25 [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager
* ) rtDW . gwqeoclxxg ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gr3f13201k ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 12 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 4 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW
. eqyvaubzu4 ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 2 ; simulationData -> mData -> mContStates . mX =
& rtX . phj1woez25 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . n2f5j5v2br ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . pajkuggpal ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp = ssGetIsOkayToUpdateMode ( rtS ) ;
simulationData -> mData -> mIsOkayToUpdateMode = tmp ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . mxi5qk0deo [ 0 ] ; tmp_p [ 1 ] = rtB . mxi5qk0deo [ 1 ] ;
tmp_p [ 2 ] = rtB . mxi5qk0deo [ 2 ] ; tmp_p [ 3 ] = rtB . mxi5qk0deo [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ntpisvto0j [ 0 ] ; tmp_p [ 5 ] = rtB .
ntpisvto0j [ 1 ] ; tmp_p [ 6 ] = rtB . ntpisvto0j [ 2 ] ; tmp_p [ 7 ] = rtB .
ntpisvto0j [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . k4f15c2d5m [ 0 ] ;
tmp_p [ 9 ] = rtB . k4f15c2d5m [ 1 ] ; tmp_p [ 10 ] = rtB . k4f15c2d5m [ 2 ]
; tmp_p [ 11 ] = rtB . k4f15c2d5m [ 3 ] ; tmp_e [ 3 ] = 12 ; simulationData
-> mData -> mInputValues . mN = 12 ; simulationData -> mData -> mInputValues
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 4 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . gwqeoclxxg ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gr3f13201k ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { rt_FREE ( rtDW . ahryi4nzas .
RSimInfoPtr ) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * )
rtDW . gwqeoclxxg ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
rtDW . eqyvaubzu4 ) ; nesl_erase_simulator (
"AssemN01/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . lyoud0r3dz
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . i0i4cb4p0i
) ; nesl_erase_simulator ( "AssemN01/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; } static void mr_AssemN01_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) ; static void mr_AssemN01_cacheDataAsMxArray ( mxArray * destArray
, mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void mr_AssemN01_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_AssemN01_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_AssemN01_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j
, uint_T bitVal ) ; static void mr_AssemN01_cacheBitFieldToMxArray ( mxArray
* destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static
uint_T mr_AssemN01_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_AssemN01_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_AssemN01_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_AssemN01_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_AssemN01_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_AssemN01_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_AssemN01_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_AssemN01_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_AssemN01_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_AssemN01_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_AssemN01_GetDWork ( ) { static const char * ssDWFieldNames [ 3 ]
= { "rtB" , "rtDW" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_AssemN01_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [ 10 ] = {
"rtDW.mezpr2htyz" , "rtDW.kuislnn3oh" , "rtDW.dd2bsnkxua" , "rtDW.n2f5j5v2br"
, "rtDW.dn4t5d10ak" , "rtDW.oe4icidrdp" , "rtDW.pajkuggpal" ,
"rtDW.ljshdpuj2j" , "rtDW.dsxvvob5pl" , "rtDW.fidbpbc1gp" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 10 , rtdwDataFieldNames ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW
. mezpr2htyz ) , sizeof ( rtDW . mezpr2htyz ) ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & ( rtDW
. kuislnn3oh ) , sizeof ( rtDW . kuislnn3oh ) ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & ( rtDW
. dd2bsnkxua ) , sizeof ( rtDW . dd2bsnkxua ) ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW
. n2f5j5v2br ) , sizeof ( rtDW . n2f5j5v2br ) ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( rtDW
. dn4t5d10ak ) , sizeof ( rtDW . dn4t5d10ak ) ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & ( rtDW
. oe4icidrdp ) , sizeof ( rtDW . oe4icidrdp ) ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW
. pajkuggpal ) , sizeof ( rtDW . pajkuggpal ) ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & ( rtDW
. ljshdpuj2j ) , sizeof ( rtDW . ljshdpuj2j ) ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & ( rtDW
. dsxvvob5pl ) , sizeof ( rtDW . dsxvvob5pl ) ) ;
mr_AssemN01_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW
. fidbpbc1gp ) , sizeof ( rtDW . fidbpbc1gp ) ) ; mxSetFieldByNumber ( ssDW ,
0 , 1 , rtdwData ) ; } return ssDW ; } void mr_AssemN01_SetDWork ( const
mxArray * ssDW ) { ( void ) ssDW ; mr_AssemN01_restoreDataFromMxArray ( (
void * ) & ( rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . mezpr2htyz ) ,
rtdwData , 0 , 0 , sizeof ( rtDW . mezpr2htyz ) ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . kuislnn3oh ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . kuislnn3oh ) ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . dd2bsnkxua ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . dd2bsnkxua ) ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . n2f5j5v2br ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . n2f5j5v2br ) ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . dn4t5d10ak ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . dn4t5d10ak ) ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . oe4icidrdp ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . oe4icidrdp ) ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . pajkuggpal ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . pajkuggpal ) ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . ljshdpuj2j ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . ljshdpuj2j ) ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . dsxvvob5pl ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . dsxvvob5pl ) ) ;
mr_AssemN01_restoreDataFromMxArray ( ( void * ) & ( rtDW . fidbpbc1gp ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . fidbpbc1gp ) ) ; } } mxArray *
mr_AssemN01_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 4 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 4 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , } ; static const char * blockPath [ 4 ] = {
"AssemN01/Solver Configuration/EVAL_KEY/STATE_1" ,
"AssemN01/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"AssemN01/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"AssemN01/Solver Configuration/EVAL_KEY/STATE_1" , } ; static const int
reason [ 4 ] = { 0 , 0 , 5 , 5 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 4 ;
++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data
, 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [ subs
[ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 ,
subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ]
] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 2 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 68 ) ;
ssSetNumBlockIO ( rtS , 9 ) ; ssSetNumBlockParams ( rtS , 72080 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 460624209U ) ; ssSetChecksumVal ( rtS , 1 ,
2585989932U ) ; ssSetChecksumVal ( rtS , 2 , 1981427930U ) ; ssSetChecksumVal
( rtS , 3 , 2862949434U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
AssemN01_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "AssemN01" ) ; ssSetPath
( rtS , "AssemN01" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 120.0
) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ;
} { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 2 , 2 , 2 } ; static
int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 1 , 1 , 2 , 2 , 2 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0
, 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = {
"CSTATE" , "CSTATE" , "Discrete" , "Discrete" , "Discrete" } ; static const
char_T * rt_LoggedStateBlockNames [ ] = { "AssemN01/Revolute3" ,
"AssemN01/Revolute3" , "AssemN01/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
, "AssemN01/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"AssemN01/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" } ; static const char_T
* rt_LoggedStateNames [ ] = { "AssemN01.Revolute3.Rz.q" ,
"AssemN01.Revolute3.Rz.w" , "Discrete" , "Discrete" , "Discrete" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 0 , 1 , 2 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 5 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 5 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . phj1woez25 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . phj1woez25 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) rtDW . mezpr2htyz ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) rtDW . kuislnn3oh ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) rtDW . dd2bsnkxua ; } rtliSetLogT
( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS )
, "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 2 ] ; static real_T absTol [ 2 ] = { 1.0E-6 , 1.0E-6 } ;
static uint8_T absTolControl [ 2 ] = { 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 2 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 2 ] ; { int i ; for ( i = 0 ; i < 2 ; ++ i )
{ contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [
i ] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 2.4 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 0 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 460624209U ) ; ssSetChecksumVal ( rtS , 1 ,
2585989932U ) ; ssSetChecksumVal ( rtS , 2 , 1981427930U ) ; ssSetChecksumVal
( rtS , 3 , 2862949434U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 2 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_AssemN01_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP (
rtS , mr_AssemN01_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_AssemN01_SetDWork ) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if (
ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }

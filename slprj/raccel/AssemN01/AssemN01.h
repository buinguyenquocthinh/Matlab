#ifndef RTW_HEADER_AssemN01_h_
#define RTW_HEADER_AssemN01_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef AssemN01_COMMON_INCLUDES_
#define AssemN01_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "AssemN01_a2b15696_1_gateway.h"
#endif
#include "AssemN01_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME AssemN01
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (9) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (2)   
#elif NCSTATES != 2
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T lzwt2usxcl [ 3 ] ; real_T nytfiisyns ; real_T
b3xrkvydat ; real_T mxi5qk0deo [ 4 ] ; real_T ntpisvto0j [ 4 ] ; real_T
k4f15c2d5m [ 4 ] ; real_T f42lgkqp05 [ 2 ] ; real_T l1fj4jwp35 [ 3 ] ; real_T
naslajzxjj [ 2 ] ; } B ; typedef struct { real_T mezpr2htyz [ 2 ] ; real_T
kuislnn3oh [ 2 ] ; real_T dd2bsnkxua [ 2 ] ; real_T n2f5j5v2br ; real_T
dn4t5d10ak ; struct { void * TimePtr ; void * DataPtr ; void * RSimInfoPtr ;
} ahryi4nzas ; void * gr3f13201k ; void * eqyvaubzu4 ; void * gwqeoclxxg ;
void * cexapgnbcr ; void * ewi2pw2m1i ; void * bmc0zejbqq ; void * i0i4cb4p0i
; void * lyoud0r3dz ; void * k4oebca3sa ; void * iegxcw0xma ; struct { int_T
PrevIndex ; } oe4icidrdp ; int_T pajkuggpal ; int_T ljshdpuj2j ; boolean_T
dsxvvob5pl ; boolean_T fidbpbc1gp ; } DW ; typedef struct { real_T phj1woez25
[ 2 ] ; } X ; typedef struct { real_T phj1woez25 [ 2 ] ; } XDot ; typedef
struct { boolean_T phj1woez25 [ 2 ] ; } XDis ; typedef struct { real_T
phj1woez25 [ 2 ] ; } CStateAbsTol ; typedef struct { real_T phj1woez25 [ 2 ]
; } CXPtMin ; typedef struct { real_T phj1woez25 [ 2 ] ; } CXPtMax ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
FromWorkspace_Time0 [ 18018 ] ; real_T FromWorkspace_Data0 [ 54054 ] ; real_T
Gain_Gain ; real_T Constant1_Value ; real_T Constant10_Value ; real_T
Constant2_Value ; real_T Constant4_Value ; real_T Constant5_Value ; real_T
Constant7_Value ; real_T Constant8_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_AssemN01_GetDWork ( ) ; extern void
mr_AssemN01_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_AssemN01_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * AssemN01_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif

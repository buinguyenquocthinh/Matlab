#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "AssemN01_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "AssemN01.h"
#include "AssemN01_capi.h"
#include "AssemN01_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"AssemN01/From Workspace" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , {
1 , 0 , TARGET_STRING ( "AssemN01/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 0 } , { 2 , 0 , TARGET_STRING ( "AssemN01/Add" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"AssemN01/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"AssemN01/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"AssemN01/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING ( "" )
, 0 , 0 , 2 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"AssemN01/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"AssemN01/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0
, 0 , 3 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 8 ,
TARGET_STRING ( "AssemN01/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 1 ,
0 } , { 9 , TARGET_STRING ( "AssemN01/Constant10" ) , TARGET_STRING ( "Value"
) , 0 , 1 , 0 } , { 10 , TARGET_STRING ( "AssemN01/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 11 , TARGET_STRING (
"AssemN01/Constant4" ) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 12 ,
TARGET_STRING ( "AssemN01/Constant5" ) , TARGET_STRING ( "Value" ) , 0 , 1 ,
0 } , { 13 , TARGET_STRING ( "AssemN01/Constant7" ) , TARGET_STRING ( "Value"
) , 0 , 1 , 0 } , { 14 , TARGET_STRING ( "AssemN01/Constant8" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 15 , TARGET_STRING (
"AssemN01/From Workspace" ) , TARGET_STRING ( "Time0" ) , 0 , 4 , 0 } , { 16
, TARGET_STRING ( "AssemN01/From Workspace" ) , TARGET_STRING ( "Data0" ) , 0
, 5 , 0 } , { 17 , TARGET_STRING ( "AssemN01/Gain" ) , TARGET_STRING ( "Gain"
) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals
rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters
rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . lzwt2usxcl [ 0 ] , & rtB .
b3xrkvydat , & rtB . nytfiisyns , & rtB . mxi5qk0deo [ 0 ] , & rtB .
ntpisvto0j [ 0 ] , & rtB . k4f15c2d5m [ 0 ] , & rtB . l1fj4jwp35 [ 0 ] , &
rtB . f42lgkqp05 [ 0 ] , & rtP . Constant1_Value , & rtP . Constant10_Value ,
& rtP . Constant2_Value , & rtP . Constant4_Value , & rtP . Constant5_Value ,
& rtP . Constant7_Value , & rtP . Constant8_Value , & rtP .
FromWorkspace_Time0 [ 0 ] , & rtP . FromWorkspace_Data0 [ 0 ] , & rtP .
Gain_Gain , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 3 , 1 , 1 , 1 , 4 , 1 , 2 , 1 , 18018 ,
1 , 54054 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ;
static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 8 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 10 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 460624209U , 2585989932U , 1981427930U , 2862949434U } , ( NULL ) , 0 , 0
, rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
AssemN01_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void AssemN01_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void AssemN01_host_InitializeDataMapInfo ( AssemN01_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif

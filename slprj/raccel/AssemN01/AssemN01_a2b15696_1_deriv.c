#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "AssemN01_a2b15696_1_geometries.h"
PmfMessageId AssemN01_a2b15696_1_compDerivs ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
deriv , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; int ii [ 1 ] ; double xx [ 88 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void )
discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 0.4315575367136364 ; xx [ 1 ]
= 0.5639117156067105 ; xx [ 2 ] = 0.7041034508558774 ; xx [ 3 ] = - xx [ 0 ]
; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = - xx [ 2 ] ; xx [ 6 ] = -
0.9109984432937877 ; xx [ 7 ] = 0.3241673451577192 ; xx [ 8 ] =
0.169436542737278 ; xx [ 9 ] = 0.1904957391516431 ; xx [ 10 ] = 0.5 ; xx [ 11
] = xx [ 10 ] * state [ 0 ] ; xx [ 12 ] = sin ( xx [ 11 ] ) ; xx [ 13 ] = cos
( xx [ 11 ] ) ; xx [ 14 ] = - ( xx [ 0 ] * xx [ 12 ] ) ; xx [ 15 ] = xx [ 1 ]
* xx [ 12 ] ; xx [ 16 ] = - ( xx [ 2 ] * xx [ 12 ] ) ;
pm_math_Quaternion_compose_ra ( xx + 6 , xx + 13 , xx + 17 ) ; xx [ 6 ] = -
0.9825390912900167 ; xx [ 7 ] = 0.1827185462430177 ; xx [ 8 ] = -
2.084111518791671e-3 ; xx [ 9 ] = - 0.03502175645229622 ; xx [ 11 ] = xx [ 10
] * input [ 2 ] ; xx [ 12 ] = 0.01261873009251368 ; xx [ 13 ] = sin ( xx [ 11
] ) ; xx [ 14 ] = 0.04552811374152367 ; xx [ 15 ] = 0.9988833558078697 ; xx [
21 ] = cos ( xx [ 11 ] ) ; xx [ 22 ] = - ( xx [ 12 ] * xx [ 13 ] ) ; xx [ 23
] = - ( xx [ 14 ] * xx [ 13 ] ) ; xx [ 24 ] = xx [ 15 ] * xx [ 13 ] ;
pm_math_Quaternion_compose_ra ( xx + 6 , xx + 21 , xx + 25 ) ; xx [ 6 ] = -
0.9157704701733157 ; xx [ 7 ] = 0.01321965213322094 ; xx [ 8 ] = -
0.2585508042803786 ; xx [ 9 ] = - 0.307150074657309 ; xx [ 11 ] = xx [ 10 ] *
input [ 1 ] ; xx [ 13 ] = 0.01811281315775579 ; xx [ 16 ] = sin ( xx [ 11 ] )
; xx [ 21 ] = 0.3155658677770614 ; xx [ 22 ] = 0.9487307885241326 ; xx [ 29 ]
= cos ( xx [ 11 ] ) ; xx [ 30 ] = - ( xx [ 13 ] * xx [ 16 ] ) ; xx [ 31 ] =
xx [ 21 ] * xx [ 16 ] ; xx [ 32 ] = xx [ 22 ] * xx [ 16 ] ;
pm_math_Quaternion_compose_ra ( xx + 6 , xx + 29 , xx + 33 ) ; xx [ 6 ] =
0.7000139319455152 ; xx [ 7 ] = 0.7009225426941154 ; xx [ 8 ] =
0.1367043679821385 ; xx [ 29 ] = - ( xx [ 6 ] * inputDot [ 0 ] ) ; xx [ 30 ]
= xx [ 7 ] * inputDot [ 0 ] ; xx [ 31 ] = - ( xx [ 8 ] * inputDot [ 0 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 33 , xx + 29 , xx + 37 ) ; xx [ 9 ]
= xx [ 13 ] * inputDot [ 1 ] ; xx [ 11 ] = xx [ 37 ] - xx [ 9 ] ; xx [ 16 ] =
xx [ 21 ] * inputDot [ 1 ] ; xx [ 23 ] = xx [ 38 ] + xx [ 16 ] ; xx [ 24 ] =
xx [ 22 ] * inputDot [ 1 ] ; xx [ 32 ] = xx [ 39 ] + xx [ 24 ] ; xx [ 40 ] =
xx [ 11 ] ; xx [ 41 ] = xx [ 23 ] ; xx [ 42 ] = xx [ 32 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 40 , xx + 43 ) ; xx [ 46
] = xx [ 12 ] * inputDot [ 2 ] ; xx [ 47 ] = xx [ 43 ] - xx [ 46 ] ; xx [ 48
] = xx [ 14 ] * inputDot [ 2 ] ; xx [ 49 ] = xx [ 44 ] - xx [ 48 ] ; xx [ 50
] = xx [ 15 ] * inputDot [ 2 ] ; xx [ 51 ] = xx [ 45 ] + xx [ 50 ] ; xx [ 52
] = xx [ 47 ] ; xx [ 53 ] = xx [ 49 ] ; xx [ 54 ] = xx [ 51 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 17 , xx + 52 , xx + 55 ) ; xx [ 58
] = xx [ 0 ] * state [ 1 ] ; xx [ 0 ] = xx [ 55 ] - xx [ 58 ] ; xx [ 59 ] =
xx [ 1 ] * state [ 1 ] ; xx [ 1 ] = xx [ 56 ] + xx [ 59 ] ; xx [ 60 ] = xx [
2 ] * state [ 1 ] ; xx [ 2 ] = xx [ 57 ] - xx [ 60 ] ; xx [ 61 ] =
0.06579613732407774 ; xx [ 62 ] = 0.04892961943652573 ; xx [ 63 ] =
0.07953071830403326 ; xx [ 64 ] = xx [ 0 ] * xx [ 61 ] ; xx [ 65 ] = xx [ 1 ]
* xx [ 62 ] ; xx [ 66 ] = xx [ 2 ] * xx [ 63 ] ; pm_math_Vector3_cross_ra (
xx + 0 , xx + 64 , xx + 67 ) ; xx [ 64 ] = - xx [ 58 ] ; xx [ 65 ] = xx [ 59
] ; xx [ 66 ] = - xx [ 60 ] ; pm_math_Vector3_cross_ra ( xx + 55 , xx + 64 ,
xx + 58 ) ; xx [ 64 ] = xx [ 67 ] + xx [ 61 ] * xx [ 58 ] ; xx [ 65 ] = xx [
68 ] + xx [ 62 ] * xx [ 59 ] ; xx [ 66 ] = xx [ 69 ] + xx [ 63 ] * xx [ 60 ]
; xx [ 58 ] = 0.06456883584605544 ; xx [ 59 ] = 0.1095546559353863 ; xx [ 60
] = 0.1273169753939562 ; xx [ 61 ] = xx [ 58 ] ; xx [ 62 ] = - xx [ 59 ] ; xx
[ 63 ] = - xx [ 60 ] ; xx [ 67 ] = xx [ 55 ] + xx [ 0 ] ; xx [ 68 ] = xx [ 56
] + xx [ 1 ] ; xx [ 69 ] = xx [ 57 ] + xx [ 2 ] ; xx [ 0 ] = xx [ 58 ] *
state [ 1 ] ; xx [ 1 ] = - ( xx [ 59 ] * state [ 1 ] ) ; xx [ 2 ] = - ( xx [
60 ] * state [ 1 ] ) ; pm_math_Vector3_cross_ra ( xx + 67 , xx + 0 , xx + 55
) ; xx [ 0 ] = - 0.2065909432784903 ; xx [ 1 ] = - 0.02506716073910767 ; xx [
2 ] = - 0.08320267192181108 ; pm_math_Quaternion_xform_ra ( xx + 17 , xx + 0
, xx + 58 ) ; xx [ 0 ] = 0.6416682419077211 - xx [ 58 ] ; xx [ 1 ] = - (
1.499240006223278e-4 + xx [ 59 ] ) ; xx [ 2 ] = - ( 0.1099836989159528 + xx [
60 ] ) ; pm_math_Vector3_cross_ra ( xx + 52 , xx + 0 , xx + 58 ) ;
pm_math_Vector3_cross_ra ( xx + 52 , xx + 58 , xx + 67 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 17 , xx + 67 , xx + 52 ) ; xx [ 58
] = 5.69738219707832 ; xx [ 67 ] = ( xx [ 55 ] + xx [ 52 ] ) * xx [ 58 ] ; xx
[ 68 ] = ( xx [ 56 ] + xx [ 53 ] ) * xx [ 58 ] ; xx [ 69 ] = ( xx [ 57 ] + xx
[ 54 ] ) * xx [ 58 ] ; xx [ 52 ] = 0.2517284824793127 ; ii [ 0 ] =
factorSymmetricPosDef ( xx + 52 , 1 , xx + 53 ) ; if ( ii [ 0 ] != 0 ? 1 : 0
!= 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
"'AssemN01/Revolute3' has a degenerate mass distribution on its base side." ,
neDiagMgr ) ; } xx [ 53 ] = - ( 0.02839481894885114 / xx [ 52 ] ) ; xx [ 54 ]
= 0.02759198564043467 / xx [ 52 ] ; xx [ 55 ] = - ( 0.05599785320691651 / xx
[ 52 ] ) ; xx [ 56 ] = - ( xx [ 6 ] * inputDdot [ 0 ] ) ; xx [ 57 ] = xx [ 7
] * inputDdot [ 0 ] ; xx [ 58 ] = - ( xx [ 8 ] * inputDdot [ 0 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 33 , xx + 56 , xx + 70 ) ; xx [ 73
] = - xx [ 9 ] ; xx [ 74 ] = xx [ 16 ] ; xx [ 75 ] = xx [ 24 ] ;
pm_math_Vector3_cross_ra ( xx + 37 , xx + 73 , xx + 76 ) ; xx [ 73 ] = xx [
70 ] + xx [ 76 ] - xx [ 13 ] * inputDdot [ 1 ] ; xx [ 74 ] = xx [ 71 ] + xx [
77 ] + xx [ 21 ] * inputDdot [ 1 ] ; xx [ 75 ] = xx [ 72 ] + xx [ 78 ] + xx [
22 ] * inputDdot [ 1 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx +
73 , xx + 70 ) ; xx [ 76 ] = - xx [ 46 ] ; xx [ 77 ] = - xx [ 48 ] ; xx [ 78
] = xx [ 50 ] ; pm_math_Vector3_cross_ra ( xx + 43 , xx + 76 , xx + 79 ) ; xx
[ 76 ] = xx [ 70 ] + xx [ 79 ] - xx [ 12 ] * inputDdot [ 2 ] ; xx [ 77 ] = xx
[ 71 ] + xx [ 80 ] - xx [ 14 ] * inputDdot [ 2 ] ; xx [ 78 ] = xx [ 72 ] + xx
[ 81 ] + xx [ 15 ] * inputDdot [ 2 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 17 , xx + 76 , xx + 12 ) ; xx [ 70 ] = 0.3678733358353887 / xx [ 52 ] ;
xx [ 71 ] = - ( 0.6241747463333104 / xx [ 52 ] ) ; xx [ 72 ] = - (
0.7253734689953845 / xx [ 52 ] ) ; xx [ 79 ] = 0.449858509274086 ; xx [ 80 ]
= - 0.6499474264445344 ; xx [ 81 ] = 0.09600082742902466 ; xx [ 82 ] = -
0.6049624001743963 ; xx [ 9 ] = xx [ 10 ] * input [ 0 ] ; xx [ 10 ] = sin (
xx [ 9 ] ) ; xx [ 83 ] = cos ( xx [ 9 ] ) ; xx [ 84 ] = - ( xx [ 6 ] * xx [
10 ] ) ; xx [ 85 ] = xx [ 7 ] * xx [ 10 ] ; xx [ 86 ] = - ( xx [ 8 ] * xx [
10 ] ) ; pm_math_Quaternion_compose_ra ( xx + 79 , xx + 83 , xx + 6 ) ; xx [
10 ] = 9.806649999999999 ; xx [ 15 ] = xx [ 10 ] * xx [ 9 ] ; xx [ 16 ] = xx
[ 10 ] * xx [ 7 ] ; xx [ 21 ] = 2.0 ; xx [ 22 ] = 0.02299192076890365 ; xx [
24 ] = 6.64633955665914e-3 ; xx [ 46 ] = 0.08365567104814245 ; xx [ 79 ] = xx
[ 22 ] * inputDot [ 0 ] ; xx [ 80 ] = xx [ 24 ] * inputDot [ 0 ] ; xx [ 81 ]
= - ( xx [ 46 ] * inputDot [ 0 ] ) ; pm_math_Vector3_cross_ra ( xx + 29 , xx
+ 79 , xx + 82 ) ; xx [ 79 ] = - 0.3466079923105882 ; xx [ 80 ] =
0.04880535271512142 ; xx [ 81 ] = 0.1502761766433057 ;
pm_math_Quaternion_xform_ra ( xx + 33 , xx + 79 , xx + 85 ) ; xx [ 79 ] =
0.2051712288926141 - xx [ 85 ] ; xx [ 80 ] = - ( 0.1058809023753007 + xx [ 86
] ) ; xx [ 81 ] = - ( 0.1692498529786663 + xx [ 87 ] ) ;
pm_math_Vector3_cross_ra ( xx + 56 , xx + 79 , xx + 85 ) ; xx [ 56 ] = ( xx [
6 ] * xx [ 15 ] + xx [ 8 ] * xx [ 16 ] ) * xx [ 21 ] + xx [ 82 ] + xx [ 22 ]
* inputDdot [ 0 ] + xx [ 85 ] ; xx [ 57 ] = xx [ 83 ] + xx [ 24 ] * inputDdot
[ 0 ] - ( xx [ 9 ] * xx [ 15 ] + xx [ 7 ] * xx [ 16 ] ) * xx [ 21 ] + xx [ 86
] + xx [ 10 ] ; xx [ 58 ] = xx [ 21 ] * ( xx [ 8 ] * xx [ 15 ] - xx [ 6 ] *
xx [ 16 ] ) + xx [ 84 ] - xx [ 46 ] * inputDdot [ 0 ] + xx [ 87 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 33 , xx + 56 , xx + 6 ) ; xx [ 56 ]
= xx [ 37 ] + xx [ 11 ] ; xx [ 57 ] = xx [ 38 ] + xx [ 23 ] ; xx [ 58 ] = xx
[ 39 ] + xx [ 32 ] ; xx [ 9 ] = 1.118891323048175e-3 ; xx [ 10 ] =
0.3261157495439888 ; xx [ 11 ] = 0.1084936496371284 ; xx [ 21 ] = - ( xx [ 9
] * inputDot [ 1 ] ) ; xx [ 22 ] = xx [ 10 ] * inputDot [ 1 ] ; xx [ 23 ] = -
( xx [ 11 ] * inputDot [ 1 ] ) ; pm_math_Vector3_cross_ra ( xx + 56 , xx + 21
, xx + 37 ) ; pm_math_Vector3_cross_ra ( xx + 29 , xx + 79 , xx + 21 ) ;
pm_math_Vector3_cross_ra ( xx + 29 , xx + 21 , xx + 56 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 33 , xx + 56 , xx + 21 ) ; xx [ 29
] = - 0.2073802135515281 ; xx [ 30 ] = 0.04281948026385274 ; xx [ 31 ] = -
0.1012315232199329 ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 29 , xx +
32 ) ; xx [ 29 ] = 0.5033711196861744 - xx [ 32 ] ; xx [ 30 ] =
0.06424091221761979 - xx [ 33 ] ; xx [ 31 ] = 0.1455589028501758 - xx [ 34 ]
; pm_math_Vector3_cross_ra ( xx + 73 , xx + 29 , xx + 32 ) ; xx [ 56 ] = xx [
6 ] + xx [ 37 ] + xx [ 21 ] - xx [ 9 ] * inputDdot [ 1 ] + xx [ 32 ] ; xx [
57 ] = xx [ 7 ] + xx [ 38 ] + xx [ 22 ] + xx [ 10 ] * inputDdot [ 1 ] + xx [
33 ] ; xx [ 58 ] = xx [ 8 ] + xx [ 39 ] + xx [ 23 ] - xx [ 11 ] * inputDdot [
1 ] + xx [ 34 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 56 , xx
+ 6 ) ; xx [ 9 ] = xx [ 43 ] + xx [ 47 ] ; xx [ 10 ] = xx [ 44 ] + xx [ 49 ]
; xx [ 11 ] = xx [ 45 ] + xx [ 51 ] ; xx [ 15 ] = 0.03816278583652127 ; xx [
16 ] = 0.2084260569088694 ; xx [ 21 ] = 9.981957414466714e-3 ; xx [ 22 ] = xx
[ 15 ] * inputDot [ 2 ] ; xx [ 23 ] = xx [ 16 ] * inputDot [ 2 ] ; xx [ 24 ]
= xx [ 21 ] * inputDot [ 2 ] ; pm_math_Vector3_cross_ra ( xx + 9 , xx + 22 ,
xx + 32 ) ; pm_math_Vector3_cross_ra ( xx + 40 , xx + 29 , xx + 9 ) ;
pm_math_Vector3_cross_ra ( xx + 40 , xx + 9 , xx + 22 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 22 , xx + 9 ) ;
pm_math_Vector3_cross_ra ( xx + 76 , xx + 0 , xx + 22 ) ; xx [ 0 ] = xx [ 6 ]
+ xx [ 32 ] + xx [ 9 ] + xx [ 15 ] * inputDdot [ 2 ] + xx [ 22 ] ; xx [ 1 ] =
xx [ 7 ] + xx [ 33 ] + xx [ 10 ] + xx [ 16 ] * inputDdot [ 2 ] + xx [ 23 ] ;
xx [ 2 ] = xx [ 8 ] + xx [ 34 ] + xx [ 11 ] + xx [ 21 ] * inputDdot [ 2 ] +
xx [ 24 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 17 , xx + 0 , xx + 6 )
; deriv [ 0 ] = state [ 1 ] ; deriv [ 1 ] = - ( ( pm_math_Vector3_dot_ra ( xx
+ 3 , xx + 64 ) + pm_math_Vector3_dot_ra ( xx + 61 , xx + 67 ) ) / xx [ 52 ]
+ pm_math_Vector3_dot_ra ( xx + 53 , xx + 12 ) + pm_math_Vector3_dot_ra ( xx
+ 70 , xx + 6 ) ) ; errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
AssemN01_a2b15696_1_numJacPerturbLoBounds ( const RuntimeDerivedValuesBundle
* rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * bounds , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 1 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ;
( void ) state ; ( void ) modeVector ; ( void ) input ; ( void ) inputDot ; (
void ) inputDdot ; ( void ) discreteState ; ( void ) neDiagMgr ; xx [ 0 ] =
1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [ 0 ] ; errorResult [ 0
] = 0.0 ; return NULL ; } PmfMessageId
AssemN01_a2b15696_1_numJacPerturbHiBounds ( const RuntimeDerivedValuesBundle
* rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * bounds , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) state ; (
void ) modeVector ; ( void ) input ; ( void ) inputDot ; ( void ) inputDdot ;
( void ) discreteState ; ( void ) neDiagMgr ; bounds [ 0 ] = 1.0 ; bounds [ 1
] = + pmf_get_inf ( ) ; errorResult [ 0 ] = 0.0 ; return NULL ; }

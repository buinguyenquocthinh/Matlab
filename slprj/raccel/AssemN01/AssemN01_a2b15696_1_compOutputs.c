#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "AssemN01_a2b15696_1_geometries.h"
PmfMessageId AssemN01_a2b15696_1_compOutputs ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * output ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 27 ] ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) state ; ( void ) modeVector ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 0.449858509274086 ; xx [ 1 ] = - 0.6499474264445344 ;
xx [ 2 ] = 0.09600082742902466 ; xx [ 3 ] = - 0.6049624001743963 ; xx [ 4 ] =
0.5 ; xx [ 5 ] = xx [ 4 ] * input [ 0 ] ; xx [ 6 ] = sin ( xx [ 5 ] ) ; xx [
7 ] = cos ( xx [ 5 ] ) ; xx [ 8 ] = - ( 0.7000139319455152 * xx [ 6 ] ) ; xx
[ 9 ] = 0.7009225426941154 * xx [ 6 ] ; xx [ 10 ] = - ( 0.1367043679821385 *
xx [ 6 ] ) ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 7 , xx + 11 ) ; xx
[ 0 ] = - 0.9157704701733157 ; xx [ 1 ] = 0.01321965213322094 ; xx [ 2 ] = -
0.2585508042803786 ; xx [ 3 ] = - 0.307150074657309 ; xx [ 5 ] = xx [ 4 ] *
input [ 1 ] ; xx [ 6 ] = sin ( xx [ 5 ] ) ; xx [ 7 ] = cos ( xx [ 5 ] ) ; xx
[ 8 ] = - ( 0.01811281315775579 * xx [ 6 ] ) ; xx [ 9 ] = 0.3155658677770614
* xx [ 6 ] ; xx [ 10 ] = 0.9487307885241326 * xx [ 6 ] ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 7 , xx + 15 ) ;
pm_math_Quaternion_compose_ra ( xx + 11 , xx + 15 , xx + 0 ) ; xx [ 5 ] = -
0.9825390912900167 ; xx [ 6 ] = 0.1827185462430177 ; xx [ 7 ] = -
2.084111518791671e-3 ; xx [ 8 ] = - 0.03502175645229622 ; xx [ 9 ] = xx [ 4 ]
* input [ 2 ] ; xx [ 4 ] = sin ( xx [ 9 ] ) ; xx [ 19 ] = cos ( xx [ 9 ] ) ;
xx [ 20 ] = - ( 0.01261873009251368 * xx [ 4 ] ) ; xx [ 21 ] = - (
0.04552811374152367 * xx [ 4 ] ) ; xx [ 22 ] = 0.9988833558078697 * xx [ 4 ]
; pm_math_Quaternion_compose_ra ( xx + 5 , xx + 19 , xx + 23 ) ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 23 , xx + 4 ) ; xx [ 8 ] =
0.6402170879470762 ; xx [ 9 ] = - 5.385657080920932e-3 ; xx [ 10 ] =
4.887887001958142e-3 ; pm_math_Quaternion_xform_ra ( xx + 4 , xx + 8 , xx +
19 ) ; xx [ 4 ] = - 0.2073802135515281 ; xx [ 5 ] = 0.04281948026385274 ; xx
[ 6 ] = - 0.1012315232199329 ; pm_math_Quaternion_xform_ra ( xx + 23 , xx + 4
, xx + 7 ) ; xx [ 4 ] = 0.5033711196861744 - xx [ 7 ] ; xx [ 5 ] =
0.06424091221761979 - xx [ 8 ] ; xx [ 6 ] = 0.1455589028501758 - xx [ 9 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] = -
0.3466079923105882 ; xx [ 1 ] = 0.04880535271512142 ; xx [ 2 ] =
0.1502761766433057 ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 0 , xx + 3
) ; xx [ 0 ] = 0.2051712288926141 - xx [ 3 ] ; xx [ 1 ] = - (
0.1058809023753007 + xx [ 4 ] ) ; xx [ 2 ] = - ( 0.1692498529786663 + xx [ 5
] ) ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 0 , xx + 3 ) ; xx [ 0 ] =
- 0.20844067650888 ; xx [ 1 ] = 0.08920550732153665 ; xx [ 2 ] = -
0.05020055872732278 ; pm_math_Quaternion_xform_ra ( xx + 11 , xx + 0 , xx +
15 ) ; output [ 0 ] = xx [ 19 ] + xx [ 7 ] + xx [ 3 ] - xx [ 15 ] ; output [
1 ] = xx [ 20 ] + xx [ 8 ] + xx [ 4 ] - xx [ 16 ] ; output [ 2 ] = xx [ 21 ]
+ xx [ 9 ] + xx [ 5 ] - xx [ 17 ] + 0.21 ; return NULL ; }

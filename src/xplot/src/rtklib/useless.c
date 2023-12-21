/*------------------------------------------------------------------------------
* tle.c: NORAD TLE (two line element) functions
*
*          Copyright (C) 2012-2013 by T.TAKASU, All rights reserved.
*
* references:
*     [1] F.R.Hoots and R.L.Roehrich, Spacetrack report No.3, Models for
*         propagation of NORAD element sets, December 1980
*     [2] D.A.Vallado, P.Crawford, R.Hujsak and T.S.Kelso, Revisiting
*         Spacetrack Report #3, AIAA 2006-6753, 2006
*     [3] CelesTrak (http://www.celestrak.com)
*
* version : $Revision:$ $Date:$
* history : 2012/11/01 1.0  new
*           2013/01/25 1.1  fix bug on binary search
*           2014/08/26 1.2  fix bug on tle_pos() to get tle by satid or desig
*-----------------------------------------------------------------------------*/
#include "rtklib.h"

extern void settspan(gtime_t ts, gtime_t te) {}
extern void settime(gtime_t time) {}
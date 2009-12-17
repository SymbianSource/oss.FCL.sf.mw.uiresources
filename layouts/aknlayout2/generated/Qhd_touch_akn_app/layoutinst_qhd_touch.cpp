/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:
*
*/

// This is the main source file for a customisation DLL.
// It may be modified manually.

#include "elaf_qhd_touch_normal_pack.h"
#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_normal.h"
#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_normal.h"
#include "cdlfontinst_qhd_touch.h"
#include "displaylayoutmetricsinst_qhd_touch.h"
#include "elaf_qhd_touch_small_pack.h"
#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_small.h"
#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "elaf_qhd_touch_large_pack.h"
#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "abrw_qhd_touch_normal_pack.h"
#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "abrw_qhd_touch_small_pack.h"
#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "abrw_qhd_touch_large_pack.h"
#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "apac_qhd_touch_normal_pack.h"
#include "apac_qhd_touch_small_pack.h"
#include "apac_qhd_touch_large_pack.h"
#include "elaf_qhd_touch_land_normal_pack.h"
#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "elaf_qhd_touch_land_small_pack.h"
#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_small.h"
#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "elaf_qhd_touch_land_large_pack.h"
#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_large.h"
#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "abrw_qhd_touch_land_normal_pack.h"
#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_normal.h"
#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "abrw_qhd_touch_land_small_pack.h"
#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_small.h"
#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "abrw_qhd_touch_land_large_pack.h"
#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "apac_qhd_touch_land_normal_pack.h"
#include "apac_qhd_touch_land_small_pack.h"
#include "apac_qhd_touch_land_large_pack.h"

CDL_ARRAY_START(SCdlCustomisation, KCdlData)
	{
		CDL_CUSTOMISATION(Elaf_Qhd_touch_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Normal),
		CDL_CUSTOMISATION(CdlFontInst_qhd_touch),
		CDL_CUSTOMISATION(displaylayoutmetricsinst_Qhd_touch),
		CDL_CUSTOMISATION(Elaf_Qhd_touch_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small),
		CDL_CUSTOMISATION(Elaf_Qhd_touch_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large),
		CDL_CUSTOMISATION(Abrw_Qhd_touch_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal),
		CDL_CUSTOMISATION(Abrw_Qhd_touch_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small),
		CDL_CUSTOMISATION(Abrw_Qhd_touch_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large),
		CDL_CUSTOMISATION(Apac_Qhd_touch_Normal_Pack),
		CDL_CUSTOMISATION(Apac_Qhd_touch_Small_Pack),
		CDL_CUSTOMISATION(Apac_Qhd_touch_Large_Pack),
		CDL_CUSTOMISATION(Elaf_Qhd_touch_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal),
		CDL_CUSTOMISATION(Elaf_Qhd_touch_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small),
		CDL_CUSTOMISATION(Elaf_Qhd_touch_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large),
		CDL_CUSTOMISATION(Abrw_Qhd_touch_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal),
		CDL_CUSTOMISATION(Abrw_Qhd_touch_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small),
		CDL_CUSTOMISATION(Abrw_Qhd_touch_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large),
		CDL_CUSTOMISATION(Apac_Qhd_touch_land_Normal_Pack),
		CDL_CUSTOMISATION(Apac_Qhd_touch_land_Small_Pack),
		CDL_CUSTOMISATION(Apac_Qhd_touch_land_Large_Pack),
	}
CDL_ARRAY_END(SCdlCustomisation, KCdlData);

GLREF_D const SCdlMain KCdlMainExport =
	{
	1,
	0,
	&KCdlData
	};

#include <ecom/ecom.h>
#include <ecom/implementationproxy.h>

static TAny* MainExport()
	{
	return (TAny*)&KCdlMainExport;
	}

const TImplementationProxy ImplementationTable[] =
	{
		{{0x10283389}, ::MainExport}
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
	return ImplementationTable;
	}



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

#include "elaf_nhd4_normal_pack.h"
#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_normal.h"
#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_normal.h"
#include "cdlfontinst_nhd4.h"
#include "displaylayoutmetricsinst_nhd4.h"
#include "elaf_nhd4_small_pack.h"
#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_small.h"
#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "elaf_nhd4_large_pack.h"
#include "aknlayoutscalable_elaf_pnp4_av_nhd4_prt_tch_large.h"
#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "abrw_nhd4_normal_pack.h"
#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "abrw_nhd4_small_pack.h"
#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "abrw_nhd4_large_pack.h"
#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_large.h"
#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "apac_nhd4_normal_pack.h"
#include "apac_nhd4_small_pack.h"
#include "apac_nhd4_large_pack.h"
#include "elaf_nhd4_land_normal_pack.h"
#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "elaf_nhd4_land_small_pack.h"
#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_small.h"
#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "elaf_nhd4_land_large_pack.h"
#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_large.h"
#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "abrw_nhd4_land_normal_pack.h"
#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "abrw_nhd4_land_small_pack.h"
#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "abrw_nhd4_land_large_pack.h"
#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_large.h"
#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "apac_nhd4_land_normal_pack.h"
#include "apac_nhd4_land_small_pack.h"
#include "apac_nhd4_land_large_pack.h"

CDL_ARRAY_START(SCdlCustomisation, KCdlData)
	{
		CDL_CUSTOMISATION(Elaf_Nhd4_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Normal),
		CDL_CUSTOMISATION(CdlFontInst_nhd4),
		CDL_CUSTOMISATION(displaylayoutmetricsinst_Nhd4),
		CDL_CUSTOMISATION(Elaf_Nhd4_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small),
		CDL_CUSTOMISATION(Elaf_Nhd4_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large),
		CDL_CUSTOMISATION(Abrw_Nhd4_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal),
		CDL_CUSTOMISATION(Abrw_Nhd4_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small),
		CDL_CUSTOMISATION(Abrw_Nhd4_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large),
		CDL_CUSTOMISATION(Apac_Nhd4_Normal_Pack),
		CDL_CUSTOMISATION(Apac_Nhd4_Small_Pack),
		CDL_CUSTOMISATION(Apac_Nhd4_Large_Pack),
		CDL_CUSTOMISATION(Elaf_Nhd4_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal),
		CDL_CUSTOMISATION(Elaf_Nhd4_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small),
		CDL_CUSTOMISATION(Elaf_Nhd4_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large),
		CDL_CUSTOMISATION(Abrw_Nhd4_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal),
		CDL_CUSTOMISATION(Abrw_Nhd4_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small),
		CDL_CUSTOMISATION(Abrw_Nhd4_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large),
		CDL_CUSTOMISATION(Apac_Nhd4_land_Normal_Pack),
		CDL_CUSTOMISATION(Apac_Nhd4_land_Small_Pack),
		CDL_CUSTOMISATION(Apac_Nhd4_land_Large_Pack),
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
		{{0x2001cb93}, ::MainExport}
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
	return ImplementationTable;
	}



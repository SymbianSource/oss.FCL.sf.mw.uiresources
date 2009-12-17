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

#include "elaf_qvga_normal_pack.h"
#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_normal.h"
#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_normal.h"
#include "CdlFontInst_QVGA.h"
#include "displaylayoutmetricsinst_qvga.h"
#include "elaf_qvga_small_pack.h"
#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_small.h"
#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_small.h"
#include "elaf_qvga_large_pack.h"
#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_large.h"
#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_large.h"
#include "abrw_qvga_normal_pack.h"
#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_normal.h"
#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_normal.h"
#include "abrw_qvga_small_pack.h"
#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_small.h"
#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_small.h"
#include "abrw_qvga_large_pack.h"
#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_large.h"
#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_large.h"
#include "apac_qvga_normal_pack.h"
#include "apac_qvga_small_pack.h"
#include "apac_qvga_large_pack.h"
#include "elaf_qvga_land_normal_pack.h"
#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_normal.h"
#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_normal.h"
#include "elaf_qvga_land_small_pack.h"
#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_small.h"
#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_small.h"
#include "elaf_qvga_land_large_pack.h"
#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_large.h"
#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_large.h"
#include "abrw_qvga_land_normal_pack.h"
#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_normal.h"
#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_normal.h"
#include "abrw_qvga_land_small_pack.h"
#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_small.h"
#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_small.h"
#include "abrw_qvga_land_large_pack.h"
#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_large.h"
#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_large.h"
#include "apac_qvga_land_normal_pack.h"
#include "apac_qvga_land_small_pack.h"
#include "apac_qvga_land_large_pack.h"

CDL_ARRAY_START(SCdlCustomisation, KCdlData)
	{
		CDL_CUSTOMISATION(Elaf_Qvga_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pqp_av_qvga_prt_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Normal),
		CDL_CUSTOMISATION(CdlFontInst_QVGA),
		CDL_CUSTOMISATION(displaylayoutmetricsinst_Qvga),
		CDL_CUSTOMISATION(Elaf_Qvga_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small),
		CDL_CUSTOMISATION(Elaf_Qvga_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pqp_av_qvga_prt_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large),
		CDL_CUSTOMISATION(Abrw_Qvga_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal),
		CDL_CUSTOMISATION(Abrw_Qvga_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pqp_av_qvga_prt_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small),
		CDL_CUSTOMISATION(Abrw_Qvga_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large),
		CDL_CUSTOMISATION(Apac_Qvga_Normal_Pack),
		CDL_CUSTOMISATION(Apac_Qvga_Small_Pack),
		CDL_CUSTOMISATION(Apac_Qvga_Large_Pack),
		CDL_CUSTOMISATION(Elaf_Qvga_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pql_av_qvga_lsc_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Normal),
		CDL_CUSTOMISATION(Elaf_Qvga_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small),
		CDL_CUSTOMISATION(Elaf_Qvga_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large),
		CDL_CUSTOMISATION(Abrw_Qvga_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Normal),
		CDL_CUSTOMISATION(Abrw_Qvga_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Small),
		CDL_CUSTOMISATION(Abrw_Qvga_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large),
		CDL_CUSTOMISATION(Apac_Qvga_land_Normal_Pack),
		CDL_CUSTOMISATION(Apac_Qvga_land_Small_Pack),
		CDL_CUSTOMISATION(Apac_Qvga_land_Large_Pack),
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
		{{0x10281fc6}, ::MainExport}
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
	return ImplementationTable;
	}



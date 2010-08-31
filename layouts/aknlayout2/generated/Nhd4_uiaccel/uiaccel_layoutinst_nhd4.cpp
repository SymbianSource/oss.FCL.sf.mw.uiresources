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

#include "uiaccel_elaf_nhd4_normal_pack.h"
#include "aknlayoutscalable_elaf_hnp4_c_nhd4_prt_tch_normal.h"
#include "uiaccel_elaf_nhd4_small_pack.h"
#include "aknlayoutscalable_elaf_hnp4_c_nhd4_prt_tch_small.h"
#include "uiaccel_elaf_nhd4_large_pack.h"
#include "aknlayoutscalable_elaf_hnp4_c_nhd4_prt_tch_large.h"
#include "uiaccel_abrw_nhd4_normal_pack.h"
#include "aknlayoutscalable_abrw_hnp4_c_nhd4_prt_tch_normal.h"
#include "uiaccel_abrw_nhd4_small_pack.h"
#include "aknlayoutscalable_abrw_hnp4_c_nhd4_prt_tch_small.h"
#include "uiaccel_abrw_nhd4_large_pack.h"
#include "aknlayoutscalable_abrw_hnp4_c_nhd4_prt_tch_large.h"
#include "uiaccel_apac_nhd4_normal_pack.h"
#include "uiaccel_apac_nhd4_small_pack.h"
#include "uiaccel_apac_nhd4_large_pack.h"
#include "uiaccel_elaf_nhd4_land_normal_pack.h"
#include "aknlayoutscalable_elaf_hnl4_c_nhd4_lsc_tch_normal.h"
#include "uiaccel_elaf_nhd4_land_small_pack.h"
#include "aknlayoutscalable_elaf_hnl4_c_nhd4_lsc_tch_small.h"
#include "uiaccel_elaf_nhd4_land_large_pack.h"
#include "aknlayoutscalable_elaf_hnl4_c_nhd4_lsc_tch_large.h"
#include "uiaccel_abrw_nhd4_land_normal_pack.h"
#include "aknlayoutscalable_abrw_hnl4_c_nhd4_lsc_tch_normal.h"
#include "uiaccel_abrw_nhd4_land_small_pack.h"
#include "aknlayoutscalable_abrw_hnl4_c_nhd4_lsc_tch_small.h"
#include "uiaccel_abrw_nhd4_land_large_pack.h"
#include "aknlayoutscalable_abrw_hnl4_c_nhd4_lsc_tch_large.h"
#include "uiaccel_apac_nhd4_land_normal_pack.h"
#include "uiaccel_apac_nhd4_land_small_pack.h"
#include "uiaccel_apac_nhd4_land_large_pack.h"

CDL_ARRAY_START(SCdlCustomisation, KCdlData)
	{
		CDL_CUSTOMISATION(UiAccel_Elaf_Nhd4_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hnp4_c_nhd4_prt_tch_Normal),
		CDL_CUSTOMISATION(UiAccel_Elaf_Nhd4_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hnp4_c_nhd4_prt_tch_Small),
		CDL_CUSTOMISATION(UiAccel_Elaf_Nhd4_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hnp4_c_nhd4_prt_tch_Large),
		CDL_CUSTOMISATION(UiAccel_Abrw_Nhd4_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hnp4_c_nhd4_prt_tch_Normal),
		CDL_CUSTOMISATION(UiAccel_Abrw_Nhd4_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hnp4_c_nhd4_prt_tch_Small),
		CDL_CUSTOMISATION(UiAccel_Abrw_Nhd4_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hnp4_c_nhd4_prt_tch_Large),
		CDL_CUSTOMISATION(UiAccel_Apac_Nhd4_Normal_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Nhd4_Small_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Nhd4_Large_Pack),
		CDL_CUSTOMISATION(UiAccel_Elaf_Nhd4_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hnl4_c_nhd4_lsc_tch_Normal),
		CDL_CUSTOMISATION(UiAccel_Elaf_Nhd4_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hnl4_c_nhd4_lsc_tch_Small),
		CDL_CUSTOMISATION(UiAccel_Elaf_Nhd4_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hnl4_c_nhd4_lsc_tch_Large),
		CDL_CUSTOMISATION(UiAccel_Abrw_Nhd4_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hnl4_c_nhd4_lsc_tch_Normal),
		CDL_CUSTOMISATION(UiAccel_Abrw_Nhd4_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hnl4_c_nhd4_lsc_tch_Small),
		CDL_CUSTOMISATION(UiAccel_Abrw_Nhd4_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hnl4_c_nhd4_lsc_tch_Large),
		CDL_CUSTOMISATION(UiAccel_Apac_Nhd4_land_Normal_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Nhd4_land_Small_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Nhd4_land_Large_Pack),
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
		{{0x000007d1}, ::MainExport}
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
	return ImplementationTable;
	}



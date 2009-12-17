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

#include "uiaccel_elaf_vga4_touch_normal_pack.h"
#include "aknlayoutscalable_elaf_hvp4_c_vga4_prt_tch_normal.h"
#include "uiaccel_elaf_vga4_touch_small_pack.h"
#include "aknlayoutscalable_elaf_hvp4_c_vga4_prt_tch_small.h"
#include "uiaccel_elaf_vga4_touch_large_pack.h"
#include "aknlayoutscalable_elaf_hvp4_c_vga4_prt_tch_large.h"
#include "uiaccel_abrw_vga4_touch_normal_pack.h"
#include "aknlayoutscalable_abrw_hvp4_c_vga4_prt_tch_normal.h"
#include "uiaccel_abrw_vga4_touch_small_pack.h"
#include "aknlayoutscalable_abrw_hvp4_c_vga4_prt_tch_small.h"
#include "uiaccel_abrw_vga4_touch_large_pack.h"
#include "aknlayoutscalable_abrw_hvp4_c_vga4_prt_tch_large.h"
#include "uiaccel_apac_vga4_touch_normal_pack.h"
#include "uiaccel_apac_vga4_touch_small_pack.h"
#include "uiaccel_apac_vga4_touch_large_pack.h"
#include "uiaccel_elaf_vga4_touch_land_normal_pack.h"
#include "aknlayoutscalable_elaf_hvl4_c_vga4_lsc_tch_normal.h"
#include "uiaccel_elaf_vga4_touch_land_small_pack.h"
#include "aknlayoutscalable_elaf_hvl4_c_vga4_lsc_tch_small.h"
#include "uiaccel_elaf_vga4_touch_land_large_pack.h"
#include "aknlayoutscalable_elaf_hvl4_c_vga4_lsc_tch_large.h"
#include "uiaccel_abrw_vga4_touch_land_normal_pack.h"
#include "aknlayoutscalable_abrw_hvl4_c_vga4_lsc_tch_normal.h"
#include "uiaccel_abrw_vga4_touch_land_small_pack.h"
#include "aknlayoutscalable_abrw_hvl4_c_vga4_lsc_tch_small.h"
#include "uiaccel_abrw_vga4_touch_land_large_pack.h"
#include "aknlayoutscalable_abrw_hvl4_c_vga4_lsc_tch_large.h"
#include "uiaccel_apac_vga4_touch_land_normal_pack.h"
#include "uiaccel_apac_vga4_touch_land_small_pack.h"
#include "uiaccel_apac_vga4_touch_land_large_pack.h"

CDL_ARRAY_START(SCdlCustomisation, KCdlData)
	{
		CDL_CUSTOMISATION(UiAccel_Elaf_Vga4_touch_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hvp4_c_vga4_prt_tch_Normal),
		CDL_CUSTOMISATION(UiAccel_Elaf_Vga4_touch_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hvp4_c_vga4_prt_tch_Small),
		CDL_CUSTOMISATION(UiAccel_Elaf_Vga4_touch_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hvp4_c_vga4_prt_tch_Large),
		CDL_CUSTOMISATION(UiAccel_Abrw_Vga4_touch_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hvp4_c_vga4_prt_tch_Normal),
		CDL_CUSTOMISATION(UiAccel_Abrw_Vga4_touch_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hvp4_c_vga4_prt_tch_Small),
		CDL_CUSTOMISATION(UiAccel_Abrw_Vga4_touch_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hvp4_c_vga4_prt_tch_Large),
		CDL_CUSTOMISATION(UiAccel_Apac_Vga4_touch_Normal_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Vga4_touch_Small_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Vga4_touch_Large_Pack),
		CDL_CUSTOMISATION(UiAccel_Elaf_Vga4_touch_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hvl4_c_vga4_lsc_tch_Normal),
		CDL_CUSTOMISATION(UiAccel_Elaf_Vga4_touch_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hvl4_c_vga4_lsc_tch_Small),
		CDL_CUSTOMISATION(UiAccel_Elaf_Vga4_touch_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Elaf_hvl4_c_vga4_lsc_tch_Large),
		CDL_CUSTOMISATION(UiAccel_Abrw_Vga4_touch_land_Normal_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hvl4_c_vga4_lsc_tch_Normal),
		CDL_CUSTOMISATION(UiAccel_Abrw_Vga4_touch_land_Small_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hvl4_c_vga4_lsc_tch_Small),
		CDL_CUSTOMISATION(UiAccel_Abrw_Vga4_touch_land_Large_Pack),
		CDL_CUSTOMISATION(AknLayoutScalable_Abrw_hvl4_c_vga4_lsc_tch_Large),
		CDL_CUSTOMISATION(UiAccel_Apac_Vga4_touch_land_Normal_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Vga4_touch_land_Small_Pack),
		CDL_CUSTOMISATION(UiAccel_Apac_Vga4_touch_land_Large_Pack),
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
		{{0x2001cb91}, ::MainExport}
	};

EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
	{
	aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
	return ImplementationTable;
	}



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

// This customisation implements the interface defined in LayoutPack.cdl

#include "elaf_vga4_touch_land_small_pack.h"

namespace Elaf_Vga4_touch_land_Small_Pack
{

_LIT(name,"Elaf_Vga4_touch_land_Small_Pack");

SCdlSize const size = { 640, 480 };

TAknLayoutId const id = EAknLayoutIdELAF;

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "cdlfontinst_vga4_touch.h"
#include "displaylayoutmetricsinst_vga4_touch.h"
#include "../dllinstances.hrh"
#include "../adaptation_layer_aknlayout_elaf.h"
#include "../dllinstances.hrh"
#include "../adaptation_layer_applayout_elaf.h"
#include "../dllinstances.hrh"
#include "../adaptation_layer_skinlayout.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_defaults.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_scrollbar.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_land.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_pensupport.h"
_LIT(_content_DLL__101fe2aa_dll, "101fe2aa.dll");

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small),
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small),
	LOCAL_CDL_REF(CdlFontInst_vga4_touch),
	LOCAL_CDL_REF(displaylayoutmetricsinst_Vga4_touch),
	{Adaptation_Layer_AknLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AknLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_AppLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AppLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_SkinLayout::KCdlInstanceId, Adaptation_Layer_SkinLayout::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_defaults::KCdlInstanceId, LayoutMetaData_defaults::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_scrollbar::KCdlInstanceId, LayoutMetaData_scrollbar::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_land::KCdlInstanceId, LayoutMetaData_land::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_pensupport::KCdlInstanceId, LayoutMetaData_pensupport::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomSmall;

TInt const styleHash = 0x4e6ab68f;	// screen style VGA4TOUCH

TInt const priority = 0;

TInt const appUid = 0x00000000;


const LayoutPack::SCdlImpl KCdlImpl = 
	{
	LIT_AS_DESC_PTR(name),
	(const TSize*)&size,
	&id,
	&contents,
	&zoom,
	&styleHash,
	&priority,
	&appUid,
	};

} // end of namespace Elaf_Vga4_touch_land_Small_Pack

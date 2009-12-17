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

// Elaf_Vga_touch_Small_Pack generated by
// AknLayoutCompiler -p..\generated\Vga_touch_akn_app LayPkg -z..\generated\LayoutZoomFactorConfig.txt -d -p -a Elaf_Vga_touch_$ZOOM_Pack 480 640 -sVGATOUCH EAknLayoutIdELAF AknLayoutScalable_Elaf_pvp_av_vga_prt_tch_$ZOOM AknLayoutScalable_Elaf_pvp_apps_vga_prt_tch_$ZOOM CdlFontInst_vga_touch displaylayoutmetricsinst_Vga_touch -x .. 101fe2aa.dll Adaptation_Layer_AknLayout_Elaf -x .. 101fe2aa.dll Adaptation_Layer_AppLayout_Elaf -x .. 101fe2aa.dll Adaptation_Layer_SkinLayout -x .. 101fe2aa.dll LayoutMetaData_defaults -x .. 101fe2aa.dll LayoutMetaData_scrollbar -x .. 101fe2aa.dll LayoutMetaData_pensupport -x .. 101fe2aa.dll LayoutMetaData_MSK -x .. 101fe2aa.dll LayoutMetaData_touchpane
// This customisation implements the interface defined in LayoutPack.cdl

#include "elaf_vga_touch_small_pack.h"

namespace Elaf_Vga_touch_Small_Pack
{

_LIT(name,"Elaf_Vga_touch_Small_Pack");

SCdlSize const size = { 480, 640 };

TAknLayoutId const id = EAknLayoutIdELAF;

#include "aknlayoutscalable_elaf_pvp_av_vga_prt_tch_small.h"
#include "aknlayoutscalable_elaf_pvp_apps_vga_prt_tch_small.h"
#include "cdlfontinst_vga_touch.h"
#include "displaylayoutmetricsinst_vga_touch.h"
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
#include "../layoutmetadata_pensupport.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_msk.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_touchpane.h"
_LIT(_content_DLL__101fe2aa_dll, "101fe2aa.dll");

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pvp_av_vga_prt_tch_Small),
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_pvp_apps_vga_prt_tch_Small),
	LOCAL_CDL_REF(CdlFontInst_vga_touch),
	LOCAL_CDL_REF(displaylayoutmetricsinst_Vga_touch),
	{Adaptation_Layer_AknLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AknLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_AppLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AppLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_SkinLayout::KCdlInstanceId, Adaptation_Layer_SkinLayout::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_defaults::KCdlInstanceId, LayoutMetaData_defaults::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_scrollbar::KCdlInstanceId, LayoutMetaData_scrollbar::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_pensupport::KCdlInstanceId, LayoutMetaData_pensupport::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_MSK::KCdlInstanceId, LayoutMetaData_MSK::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_touchpane::KCdlInstanceId, LayoutMetaData_touchpane::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomSmall;

TInt const styleHash = 0xe37b0f0b;	// screen style VGATOUCH

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

} // end of namespace Elaf_Vga_touch_Small_Pack

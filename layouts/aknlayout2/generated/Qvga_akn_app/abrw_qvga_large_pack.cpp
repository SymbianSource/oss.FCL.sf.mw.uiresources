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

#include "abrw_qvga_large_pack.h"

namespace Abrw_Qvga_Large_Pack
{

_LIT(name,"Abrw_Qvga_Large_Pack");

SCdlSize const size = { 240, 320 };

TAknLayoutId const id = EAknLayoutIdABRW;

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_large.h"
#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_large.h"
#include "cdlfontinst_qvga.h"
#include "displaylayoutmetricsinst_qvga.h"
#include "../dllinstances.hrh"
#include "../adaptation_layer_aknlayout_elaf.h"
#include "../dllinstances.hrh"
#include "../adaptation_layer_applayout_elaf.h"
#include "../dllinstances.hrh"
#include "../adaptation_layer_skinlayout.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_defaults.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_abrw.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_scrollbar.h"
#include "../dllinstances.hrh"
#include "../layoutmetadata_msk.h"
_LIT(_content_DLL__101fe2aa_dll, "101fe2aa.dll");

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Abrw_pqp_av_qvga_prt_Large),
	LOCAL_CDL_REF(AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large),
	LOCAL_CDL_REF(CdlFontInst_QVGA),
	LOCAL_CDL_REF(displaylayoutmetricsinst_Qvga),
	{Adaptation_Layer_AknLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AknLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_AppLayout_Elaf::KCdlInstanceId, Adaptation_Layer_AppLayout_Elaf::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{Adaptation_Layer_SkinLayout::KCdlInstanceId, Adaptation_Layer_SkinLayout::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_defaults::KCdlInstanceId, LayoutMetaData_defaults::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_abrw::KCdlInstanceId, LayoutMetaData_abrw::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_scrollbar::KCdlInstanceId, LayoutMetaData_scrollbar::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	{LayoutMetaData_MSK::KCdlInstanceId, LayoutMetaData_MSK::KCdlInterfaceUidValue, LIT_AS_DESC_PTR(_content_DLL__101fe2aa_dll)},
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomLarge;

TInt const styleHash = 0x996f7aa6;	// screen style QVGA1

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

} // end of namespace Abrw_Qvga_Large_Pack

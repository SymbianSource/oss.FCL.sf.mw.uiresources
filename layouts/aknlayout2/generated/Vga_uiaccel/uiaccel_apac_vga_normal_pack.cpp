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

// UiAccel_Apac_Vga_Normal_Pack generated by
// AknLayoutCompiler -p..\generated\Vga_uiaccel LayPkg -z..\generated\LayoutZoomFactorConfig.txt -d -p -a UiAccel_Apac_Vga_$ZOOM_Pack 480 640 -sVGA EAknLayoutIdAPAC AknLayoutScalable_Elaf_hvp_c_vga_prt_$ZOOM
// This customisation implements the interface defined in LayoutPack.cdl

#include "uiaccel_apac_vga_normal_pack.h"

namespace UiAccel_Apac_Vga_Normal_Pack
{

_LIT(name,"UiAccel_Apac_Vga_Normal_Pack");

SCdlSize const size = { 480, 640 };

TAknLayoutId const id = EAknLayoutIdAPAC;

#include "aknlayoutscalable_elaf_hvp_c_vga_prt_normal.h"

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_hvp_c_vga_prt_Normal),
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomNormal;

TInt const styleHash = 0x0016a99c;	// screen style VGA

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

} // end of namespace UiAccel_Apac_Vga_Normal_Pack

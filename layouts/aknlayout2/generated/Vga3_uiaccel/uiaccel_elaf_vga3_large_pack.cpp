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

// UiAccel_Elaf_Vga3_Large_Pack generated by
// AknLayoutCompiler -p..\generated\Vga3_uiaccel LayPkg -z..\generated\LayoutZoomFactorConfig.txt -d -p -a UiAccel_Elaf_Vga3_$ZOOM_Pack 480 640 -sVGA3 EAknLayoutIdELAF AknLayoutScalable_Elaf_hvp3_c_vga3_prt_$ZOOM
// This customisation implements the interface defined in LayoutPack.cdl

#include "uiaccel_elaf_vga3_large_pack.h"

namespace UiAccel_Elaf_Vga3_Large_Pack
{

_LIT(name,"UiAccel_Elaf_Vga3_Large_Pack");

SCdlSize const size = { 480, 640 };

TAknLayoutId const id = EAknLayoutIdELAF;

#include "aknlayoutscalable_elaf_hvp3_c_vga3_prt_large.h"

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_hvp3_c_vga3_prt_Large),
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomLarge;

TInt const styleHash = 0x0b98cb07;	// screen style VGA3

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

} // end of namespace UiAccel_Elaf_Vga3_Large_Pack

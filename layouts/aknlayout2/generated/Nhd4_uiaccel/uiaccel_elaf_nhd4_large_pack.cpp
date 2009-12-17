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

#include "uiaccel_elaf_nhd4_large_pack.h"

namespace UiAccel_Elaf_Nhd4_Large_Pack
{

_LIT(name,"UiAccel_Elaf_Nhd4_Large_Pack");

SCdlSize const size = { 360, 640 };

TAknLayoutId const id = EAknLayoutIdELAF;

#include "aknlayoutscalable_elaf_hnp4_c_nhd4_prt_tch_large.h"

CDL_ARRAY_START(TCdlRef, contents)
	{
	LOCAL_CDL_REF(AknLayoutScalable_Elaf_hnp4_c_nhd4_prt_tch_Large),
	}
CDL_ARRAY_END(TCdlRef, contents);


TAknUiZoom const zoom = EAknUiZoomLarge;

TInt const styleHash = 0x0a86a2c2;	// screen style NHD4

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

} // end of namespace UiAccel_Elaf_Nhd4_Large_Pack

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

// It contains the customisation API.
// It should not be modified manually.

#ifndef LAYOUTPACK_CDL_CUSTOM_H
#define LAYOUTPACK_CDL_CUSTOM_H

#include <CdlEngDef.h>
#include "layoutpack.cdl.common.h"

namespace LayoutPack
{

// This structure defines the interface to a customisation instance.
// A customisation instance must supply an instance of this structure, with the pointer
// members either being NULL, or pointing at functions or data of the correct type.

#ifdef __WINS__
struct SCdlImpl0
#else
struct SCdlImpl
#endif
	{
	TDesC const* name;
	TSize const* size;
	TAknLayoutId const* id;
	TCdlArray<TCdlRef> const* contents;
	TAknUiZoom const* zoom;
	TInt const* styleHash;
	TInt const* priority;
	TInt const* appUid;
	};
#ifdef __WINS__
struct SCdlImpl
	{
	SCdlImpl0 i0;
	};
#endif

} // end of namespace LayoutPack
#endif // LAYOUTPACK_CDL_CUSTOM_H

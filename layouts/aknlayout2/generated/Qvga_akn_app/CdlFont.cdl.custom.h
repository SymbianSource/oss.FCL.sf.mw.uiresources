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
// This file was generated from CdlFont.cdl.
// It contains the customisation API.
// It should not be modified manually.

#ifndef CDLFONT_CDL_CUSTOM_H
#define CDLFONT_CDL_CUSTOM_H

#include <CdlEngDef.h>
#include "CdlFont.cdl.common.h"

namespace CDL_Font
{

// This structure defines the interface to a customisation instance.
// A customisation instance must supply an instance of this structure, with the pointer
// members either being NULL, or pointing at functions or data of the correct type.
struct SCdlImpl
	{
	TCdlArray<SIdMetricsPair> const* metricsArray;
	TCdlArray<SLogicalIdMetricsIdPair> const* logicalIdMapArray;
	};

} // end of namespace CDL_Font
#endif // CDLFONT_CDL_CUSTOM_H

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
// This file was generated from displaylayoutmetrics.cdl.
// It contains the customisation API.
// It should not be modified manually.

#ifndef DISPLAYLAYOUTMETRICS_CDL_CUSTOM_H
#define DISPLAYLAYOUTMETRICS_CDL_CUSTOM_H

#include <CdlEngDef.h>
#include "displaylayoutmetrics.cdl.common.h"

namespace Display_Layout_Metrics
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
	TUnitValue_sig* UnitValue;
	};
#ifdef __WINS__
struct SCdlImpl
	{
	SCdlImpl0 i0;
	};
#endif

} // end of namespace Display_Layout_Metrics
#endif // DISPLAYLAYOUTMETRICS_CDL_CUSTOM_H

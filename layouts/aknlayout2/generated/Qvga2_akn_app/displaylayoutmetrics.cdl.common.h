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
// This file was automatically generated from ..\cdl\displaylayoutmetrics.cdl.
// It contains common definitions for the client and customisation API.
// It should not be modified manually.

#ifndef DISPLAYLAYOUTMETRICS_CDL_COMMON_H
#define DISPLAYLAYOUTMETRICS_CDL_COMMON_H




namespace Display_Layout_Metrics
{
#include "displaylayoutmetrics.cdl.common.hrh"

// These constants are defined by the CDL interface: Display Layout Metrics
_LIT(KCdlName, "Display Layout Metrics");
const TInt KCdlInterfaceUidValue = _CDL_Display_Layout_Metrics_KCdlInterfaceUidValue;
const TUid KCdlInterfaceUid = { KCdlInterfaceUidValue };
const TInt KCdlInterfaceMajorVersion = 1;
const TInt KCdlInterfaceMinorVersion = 0;
const TUint KCdlInterfaceFlags = KCdlFlagRomOnly;

// These are the API ids used in this interface.
enum TApiId
	{
	EApiId_UnitValue,
	E_TApiId_TableSize
	};

// This is the CDL interface definition for this interface
const SCdlInterface KCdlInterface =
	{
	KCdlCompilerMajorVersion,
	KCdlCompilerMinorVersion,
	LIT_AS_DESC_PTR(KCdlName),
	{ KCdlInterfaceUidValue },
	KCdlInterfaceMajorVersion,
	KCdlInterfaceMinorVersion,
	KCdlInterfaceFlags,
	E_TApiId_TableSize
	};

// These typedefs define the types for function APIs
typedef TReal32 (TUnitValue_sig)();

} // end of namespace Display_Layout_Metrics

#endif // DISPLAYLAYOUTMETRICS_CDL_COMMON_H

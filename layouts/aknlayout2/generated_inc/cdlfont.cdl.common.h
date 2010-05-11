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

// It contains common definitions for the client and customisation API.
// It should not be modified manually.

#ifndef CDLFONT_CDL_COMMON_H
#define CDLFONT_CDL_COMMON_H


#include <CdlFont.h>


namespace CDL_Font
{
#include "cdlfont.cdl.common.hrh"

// These constants are defined by the CDL interface: CDL Font
_LIT(KCdlName, "CDL Font");
const TInt KCdlInterfaceUidValue = _CDL_CDL_Font_KCdlInterfaceUidValue;
const TUid KCdlInterfaceUid = { KCdlInterfaceUidValue };
const TInt KCdlInterfaceMajorVersion = 1;
const TInt KCdlInterfaceMinorVersion = 0;
const TUint KCdlInterfaceFlags = KCdlFlagRomOnly;

// These are the API ids used in this interface.
enum TApiId
	{
	EApiId_metricsArray,
	EApiId_logicalIdMapArray,
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
// TCdlArray<SIdMetricsPair> metricsArray 	does not need a typedef
// TCdlArray<SLogicalIdMetricsIdPair> logicalIdMapArray 	does not need a typedef

} // end of namespace CDL_Font

#endif // CDLFONT_CDL_COMMON_H

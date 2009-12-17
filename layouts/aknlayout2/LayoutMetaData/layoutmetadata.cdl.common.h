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
// This file was automatically generated from ..\cdl\layoutmetadata.cdl.
// It contains common definitions for the client and customisation API.
// It should not be modified manually.

#ifndef LAYOUTMETADATA_CDL_COMMON_H
#define LAYOUTMETADATA_CDL_COMMON_H




namespace Layout_Meta_Data
{
#include "layoutmetadata.cdl.common.hrh"

// These constants are defined by the CDL interface: Layout Meta Data
_LIT(KCdlName, "Layout Meta Data");
const TInt KCdlInterfaceUidValue = _CDL_Layout_Meta_Data_KCdlInterfaceUidValue;
const TUid KCdlInterfaceUid = { KCdlInterfaceUidValue };
const TInt KCdlInterfaceMajorVersion = 1;
const TInt KCdlInterfaceMinorVersion = 0;
const TUint KCdlInterfaceFlags = KCdlFlagRomOnly;

// These are the API ids used in this interface.
enum TApiId
	{
	EApiId_IsLandscapeOrientation,
	EApiId_IsMirrored,
	EApiId_IsScrollbarEnabled,
	EApiId_IsAPAC,
	EApiId_IsPenEnabled,
	EApiId_IsListStretchingEnabled,
	EApiId_IsMSKEnabled,
	EApiId_IsTouchPaneEnabled,
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
typedef TBool (TIsLandscapeOrientation_sig)();
typedef TBool (TIsMirrored_sig)();
typedef TBool (TIsScrollbarEnabled_sig)();
typedef TBool (TIsAPAC_sig)();
typedef TBool (TIsPenEnabled_sig)();
typedef TBool (TIsListStretchingEnabled_sig)();
typedef TBool (TIsMSKEnabled_sig)();
typedef TBool (TIsTouchPaneEnabled_sig)();

} // end of namespace Layout_Meta_Data

#endif // LAYOUTMETADATA_CDL_COMMON_H

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


#include <kernel/ls_std.h>
#include <collate.h>

const TUint KUidColsloCollationMethod = 0x100059DD;

static const TUint32 TheColsloKey[] = 
	{
	0x6d00109,0x6d00121,0x6f80109,0x6f80121,0x7740109,0x7740121,0x7740121,0x8060109,
	0x8060121,0x8360109,0x8360121,0x85e0109,0x85e0121,0x8ca0109,0x8ca0121,0x8cb0109,
	0x8cb0121,0x7080109,0x7080121,
	};

static const TUint32 TheColsloIndex[] = 
	{
	0x1100012,0x1110011,
	};

static const TUint16 TheColsloStringElement[] = 
	{
	0x2,0x61,0x308,0x2,0x41,0x308,0x2,0x63,
	0x30c,0x2,0x43,0x30c,0x2,0x63,0x68,0x2,
	0x43,0x68,0x2,0x43,0x48,0x2,0x6f,0x302,
	0x2,0x4f,0x302,0x2,0x72,0x30c,0x2,0x52,
	0x30c,0x2,0x73,0x30c,0x2,0x53,0x30c,0x2,
	0x7a,0x30c,0x2,0x5a,0x30c,0x2,0x7a,0x307,
	0x2,0x5a,0x307,
	};

static const TUint32 TheColsloStringIndex[] = 
	{
	0x30001,0x120006,0xf0005,0x90003,0x180008,0x1e000a,0x24000c,0x300010,
	0x2a000e,0x0,0xc0004,0x60002,0x150007,0x1b0009,0x21000b,0x2d000f,
	0x27000d,
	};

static const TCollationKeyTable TheColsloTable = 
	{ TheColsloKey, TheColsloIndex, 2, TheColsloStringElement, TheColsloStringIndex, 17 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColsloCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColsloTable, // the locale values override the standard values
		0 // the flags are standard
		},
		{
		KUidBasicCollationMethod, // the standard unlocalised method
		NULL, // null means use the standard table
		NULL, // there's no override table
		0 // the flags are standard
		}
	};

static const TCollationDataSet TheCollationDataSet =
	{
	TheCollationMethod,
	2
	};

// The one and only locale character set object.
const LCharSet TheCharSet =
	{
	NULL,
	&TheCollationDataSet
	};

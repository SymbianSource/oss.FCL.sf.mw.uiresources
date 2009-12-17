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

const TUint KUidColczeCollationMethod = 0x100059DD;

static const TUint32 TheColczeKey[] = 
	{
	0x6f80109,0x6f80121,0x7740109,0x7740109,0x7740121,0x7740121,0x8360109,0x8360121,
	0x85e0109,0x85e0121,0x8ca0109,0x8ca0121,
	};

static const TUint16 TheColczeStringElement[] = 
	{
	0x2,0x63,0x30c,0x2,0x43,0x30c,0x2,0x63,
	0x68,0x2,0x63,0x48,0x2,0x43,0x68,0x2,
	0x43,0x48,0x2,0x72,0x30c,0x2,0x52,0x30c,
	0x2,0x73,0x30c,0x2,0x53,0x30c,0x2,0x7a,
	0x30c,0x2,0x5a,0x30c,
	};

static const TUint32 TheColczeStringIndex[] = 
	{
	0xf0005,0xc0004,0x30001,0x150007,0x1b0009,0x21000b,0x90003,0x60002,
	0x0,0x120006,0x180008,0x1e000a,
	};

static const TCollationKeyTable TheColczeTable = 
	{ TheColczeKey, 0, 0, TheColczeStringElement, TheColczeStringIndex, 12 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColczeCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColczeTable, // the locale values override the standard values
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

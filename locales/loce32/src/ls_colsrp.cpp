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

const TUint KUidColsrpCollationMethod = 0x100059DD;

static const TUint32 TheColsrpKey[] = 
	{
	0x6f82209,0x6f82221,0x6f91309,0x6f91321,0x7040109,0x7040121,0x7040121,0x7be0109,
	0x7be0121,0x7be0121,0x7ee0109,0x7ee0121,0x7ee0121,0x85e2209,0x85e2221,0x8ca2209,
	0x8ca2221,
	};

static const TUint16 TheColsrpStringElement[] = 
	{
	0x2,0x63,0x30c,0x2,0x43,0x30c,0x2,0x63,
	0x301,0x2,0x43,0x301,0x2,0x64,0x17e,0x2,
	0x44,0x17e,0x2,0x44,0x17d,0x2,0x6c,0x6a,
	0x2,0x4c,0x6a,0x2,0x4c,0x4a,0x2,0x6e,
	0x6a,0x2,0x4e,0x6a,0x2,0x4e,0x4a,0x2,
	0x73,0x30c,0x2,0x53,0x30c,0x2,0x7a,0x30c,
	0x2,0x5a,0x30c,
	};

static const TUint32 TheColsrpStringIndex[] = 
	{
	0x90003,0x30001,0x120006,0xf0005,0x1b0009,0x180008,0x24000c,0x21000b,
	0x2a000e,0x300010,0x60002,0x0,0xc0004,0x150007,0x1e000a,0x27000d,
	0x2d000f,
	};

static const TCollationKeyTable TheColsrpTable = 
	{ TheColsrpKey, 0, 0, TheColsrpStringElement, TheColsrpStringIndex, 17 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColsrpCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColsrpTable, // the locale values override the standard values
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

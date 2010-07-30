/*
* Copyright (c) 2000 Nokia Corporation and/or its subsidiary(-ies).
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



/*
The LCharSet object used by the Colest locale.
Generated by COLTAB.
*/

#include <kernel/ls_std.h>
#include <collate.h>

const TUint KUidColestCollationMethod = 0x100059DD;

static const TUint32 TheColestKey[] = 
	{
	0x8622221,0x8622209,0x8b23021,0x8b23009,0x8b32821,0x8b32809,0x8b42821,0x8b42809,
	0x8b52821,0x8620121,0x8620109,0x8b80109,
	};

static const TUint32 TheColestIndex[] = 
	{
	0x5a0009,0x7a000a,0x28d000b,
	};

static const TUint16 TheColestStringElement[] = 
	{
	0x2,0x5a,0x30c,0x2,0x7a,0x30c,0x2,0x4f,
	0x303,0x2,0x6f,0x303,0x2,0x41,0x308,0x2,
	0x61,0x308,0x2,0x4f,0x308,0x2,0x6f,0x308,
	0x2,0x55,0x308,
	};

static const TUint32 TheColestStringIndex[] = 
	{
	0xc0004,0x60002,0x120006,0x180008,0x0,0xf0005,0x90003,0x150007,
	0x30001,
	};

static const TCollationKeyTable TheColestTable = 
	{ TheColestKey, TheColestIndex, 3, TheColestStringElement, TheColestStringIndex, 9 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColestCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColestTable, // the locale values override the standard values
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
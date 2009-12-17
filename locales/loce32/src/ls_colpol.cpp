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

const TUint KUidColpolCollationMethod = 0x100059DD;

static const TUint32 TheColpolKey[] = 
	{
	0x6d03909,0x6d03921,0x6f81309,0x6f81321,0x7203909,0x7203921,0x7ee1309,0x7ee1321,
	0x8061309,0x8061321,0x85e1309,0x85e1321,0x8ca1309,0x8ca1321,0x8cb3309,0x8cb3321,
	};

static const TUint16 TheColpolStringElement[] = 
	{
	0x2,0x61,0x328,0x2,0x41,0x328,0x2,0x63,
	0x301,0x2,0x43,0x301,0x2,0x65,0x328,0x2,
	0x45,0x328,0x2,0x6e,0x301,0x2,0x4e,0x301,
	0x2,0x6f,0x301,0x2,0x4f,0x301,0x2,0x73,
	0x301,0x2,0x53,0x301,0x2,0x7a,0x301,0x2,
	0x5a,0x301,0x2,0x7a,0x307,0x2,0x5a,0x307,
	};

static const TUint32 TheColpolStringIndex[] = 
	{
	0x30001,0x90003,0xf0005,0x150007,0x1b0009,0x21000b,0x27000d,0x2d000f,
	0x0,0x60002,0xc0004,0x120006,0x180008,0x1e000a,0x24000c,0x2a000e,
	};

static const TCollationKeyTable TheColpolTable = 
	{ TheColpolKey, 0, 0, TheColpolStringElement, TheColpolStringIndex, 16 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColpolCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColpolTable, // the locale values override the standard values
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

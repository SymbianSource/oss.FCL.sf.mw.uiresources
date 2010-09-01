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

const TUint KUidColslvCollationMethod = 0x100059DD;

static const TUint32 TheColslvKey[] = 
	{
	0x6f82209,0x6f82221,0x6f91309,0x6f91321,0x85e2209,0x85e2221,0x8ca2209,0x8ca2221,
	};

static const TUint16 TheColslvStringElement[] = 
	{
	0x2,0x63,0x30c,0x2,0x43,0x30c,0x2,0x63,
	0x301,0x2,0x43,0x301,0x2,0x73,0x30c,0x2,
	0x53,0x30c,0x2,0x7a,0x30c,0x2,0x5a,0x30c,
	};

static const TUint32 TheColslvStringIndex[] = 
	{
	0x90003,0x30001,0xf0005,0x150007,0x60002,0x0,0xc0004,0x120006,
	};

static const TCollationKeyTable TheColslvTable = 
	{ TheColslvKey, 0, 0, TheColslvStringElement, TheColslvStringIndex, 8 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColslvCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColslvTable, // the locale values override the standard values
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

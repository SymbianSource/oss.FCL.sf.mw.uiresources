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

const TUint KUidCollitCollationMethod = 0x100059DD;

static const TUint32 TheCollitKey[] = 
	{
	0x6f82209,0x6f82221,0x85e2209,0x85e2221,0x8ca2209,0x8ca2221,0x8be0109,0x8be0121,
	};

static const TUint32 TheCollitIndex[] = 
	{
	0x590007,0x790006,
	};

static const TUint16 TheCollitStringElement[] = 
	{
	0x2,0x63,0x30c,0x2,0x43,0x30c,0x2,0x73,
	0x30c,0x2,0x53,0x30c,0x2,0x7a,0x30c,0x2,
	0x5a,0x30c,
	};

static const TUint32 TheCollitStringIndex[] = 
	{
	0x30001,0x90003,0xf0005,0x0,0x60002,0xc0004,
	};

static const TCollationKeyTable TheCollitTable = 
	{ TheCollitKey, TheCollitIndex, 2, TheCollitStringElement, TheCollitStringIndex, 6 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidCollitCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheCollitTable, // the locale values override the standard values
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

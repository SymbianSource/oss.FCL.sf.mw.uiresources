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

const TUint KUidColturCollationMethod = 0x100059DD;

static const TUint32 TheColturKey[] = 
	{
	0x7540109,0x7540121,0x78d0121,0x8060109,0x8060121,0x85e0109,0x85e0121,0x88e0109,
	0x88e0121,0x78d0109,
	};

static const TUint32 TheColturIndex[] = 
	{
	0x490002,0x690009,0x1310009,
	};

static const TUint16 TheColturStringElement[] = 
	{
	0x2,0x67,0x306,0x2,0x47,0x306,0x2,0x49,
	0x307,0x2,0x6f,0x308,0x2,0x4f,0x308,0x2,
	0x73,0x327,0x2,0x53,0x327,0x2,0x75,0x308,
	0x2,0x55,0x308,
	};

static const TUint32 TheColturStringIndex[] = 
	{
	0x30001,0x60002,0xc0004,0x120006,0x180008,0x0,0x90003,0xf0005,
	0x150007,
	};

static const TCollationKeyTable TheColturTable = 
	{ TheColturKey, TheColturIndex, 3, TheColturStringElement, TheColturStringIndex, 9 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColturCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColturTable, // the locale values override the standard values
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

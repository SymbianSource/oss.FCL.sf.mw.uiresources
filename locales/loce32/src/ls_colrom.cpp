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

const TUint KUidColromCollationMethod = 0x100059DD;

static const TUint32 TheColromKey[] = 
	{
	0x6d01809,0x6d01821,0x6d11d09,0x6d11d21,0x78e1d09,0x78e1d21,0x85e3609,0x85e3621,
	0x85f0115,0x85f0115,0x8763609,0x8763621,0x8770115,0x8770115,0x8ca3309,0x8ca3321,
	0x7040109,0x7040121,
	};

static const TUint32 TheColromIndex[] = 
	{
	0x1100011,0x1110010,
	};

static const TUint16 TheColromStringElement[] = 
	{
	0x2,0x61,0x306,0x2,0x41,0x306,0x2,0x61,
	0x302,0x2,0x41,0x302,0x2,0x69,0x302,0x2,
	0x49,0x302,0x2,0x73,0x327,0x2,0x53,0x327,
	0x2,0x73,0x329,0x2,0x53,0x329,0x2,0x74,
	0x327,0x2,0x54,0x327,0x2,0x74,0x329,0x2,
	0x54,0x329,0x2,0x7a,0x307,0x2,0x5a,0x307,
	};

static const TUint32 TheColromStringIndex[] = 
	{
	0x90003,0x30001,0xf0005,0x150007,0x1b0009,0x21000b,0x27000d,0x2d000f,
	0x60002,0x0,0xc0004,0x120006,0x180008,0x1e000a,0x24000c,0x2a000e,
	};

static const TCollationKeyTable TheColromTable = 
	{ TheColromKey, TheColromIndex, 2, TheColromStringElement, TheColromStringIndex, 16 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColromCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColromTable, // the locale values override the standard values
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

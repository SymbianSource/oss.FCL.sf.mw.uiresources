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

const TUint KUidColukrCollationMethod = 0x100059DD;

static const TUint32 TheColukrKey[] = 
	{
	0x9ab2809,0x9ab2821,0x9ac1809,0x9ac1821,0xa9b0109,0xa9b0121,0xa9be109,0xa9be121,
	0xa9c0109,0xa9c0121,0xa9d0109,0xa9d0121,0xa9e0109,0xa9e0121,0xa9f0109,0xa9f0121,
	0xaa00109,0xaa00121,0xaa10109,0xaa10121,0xaa20109,0xaa20121,0xaa30109,0xaa30121,
	0xaa40109,0xaa40121,0xaa50109,0xaa50121,0xaa60109,0xaa60121,0xaa70109,0xaa70121,
	0xaa80109,0xaa80121,0xaa90109,0xaa90121,0xaaa0109,0xaaa0121,0xaab0109,0xaab0121,
	0xaac0109,0xaac0121,0xaad0109,0xaad0121,0xaae0109,0xaaf0109,0xaaf0121,0xab00109,
	0xab00121,0xab10109,0xab10121,0xab20109,0xab20121,0xab30109,0xab30121,0xab40109,
	0xab40121,0xab50109,0xab50121,
	};

static const TUint32 TheColukrIndex[] = 
	{
	0x410005,0x420009,0x43000b,0x44000d,0x45000f,0x460011,0x470013,0x480015,
	0x490017,0x4a0019,0x4b001b,0x4c001d,0x4d001f,0x4e0021,0x4f0023,0x500025,
	0x510027,0x520029,0x53002b,0x54002e,0x550030,0x560032,0x570034,0x580036,
	0x590038,0x5a003a,0x610004,0x620008,0x63000a,0x64000c,0x65000e,0x660010,
	0x670012,0x680014,0x690016,0x6a0018,0x6b001a,0x6c001c,0x6d001e,0x6e0020,
	0x6f0022,0x700024,0x710026,0x720028,0x73002a,0x74002d,0x75002f,0x760031,
	0x770033,0x780035,0x790037,0x7a0039,0xc60007,0xdf002c,0xe60006,
	};

static const TUint16 TheColukrStringElement[] = 
	{
	0x2,0x456,0x308,0x2,0x406,0x308,0x2,0x438,
	0x306,0x2,0x418,0x306,
	};

static const TUint32 TheColukrStringIndex[] = 
	{
	0x30001,0x90003,0x60002,0x0,
	};

static const TCollationKeyTable TheColukrTable = 
	{ TheColukrKey, TheColukrIndex, 55, TheColukrStringElement, TheColukrStringIndex, 4 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColukrCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColukrTable, // the locale values override the standard values
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

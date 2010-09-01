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
#include <unicode.h>

const TUint KUidColturCollationMethod = 0x100059DD;

static const TUint32 TheColturKey[] = 
	{
	0x7540109,0x7540121,0x78e0121,0x8060109,0x8060121,0x85e0109,0x85e0121,0x88e0109,
	0x88e0121,0x78d0109,0x78d0121,0x78e0109,
	};

static const TUint32 TheColturIndex[] = 
	{
	0x49000a,0x690009,0x69000b,0x1310009,
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
	{ TheColturKey, TheColturIndex, 4, TheColturStringElement, TheColturStringIndex, 9 };

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

static const TUnicodeData TheUnicodeTurkishData[] =	// property table
	{
	{ 0, 0, 0, 0, 232, 1 }	// character properties. See the definition of TUnicodeData in /include/unicode.h.
	};
static const TUnicodeDataRange TheUnicodeTurkishDataRange[] =	// character range table
	{
// This table defines only one character 0x49.
	{ 0x0, -1 },	// characters 0x0-0x48 has index=-1 into above property table (-1 means not defined)
	{ 0x49, 0 },	// characters 0x49-0x49 has index=0 into above property table, that is, 0x49 has property {0,0,0,0,232,1}
	{ 0x4A, -1 }	// characters 0x4A-0x10FFFF has index=-1 into above property table (-1 means not defined)
	};
const TUnicodeDataSet TheUnicodeTurkishDataSet =	
	{
	TheUnicodeTurkishData, 						// address of above property table
	TheUnicodeTurkishDataRange, 					// character range table
	sizeof(TheUnicodeTurkishDataRange)/sizeof(TUnicodeDataRange) 	// character range table size (should be 3 in this case)
	};

// The one and only locale character set object.
const LCharSet TheCharSet =
	{
	&TheUnicodeTurkishDataSet,
	&TheCollationDataSet
	};

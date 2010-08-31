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

// Added by SortAndMatch 22.10.2009
#include "collation_sort_hu.cpp"

const TUint KUidMatch_hun_huCollationMethod = 0x100059DD;

static const TUint32 TheMatch_hun_huKey[] = 
	{
	0x6d00109,0x6d00121,0x7200121,0x7200121,0x78e0121,0x78e0121,0x8060109,0x8060121,
	0x8072809,0x8072821,0x8082f09,0x8082f21,0x88e0109,0x88e0121,0x88f2809,0x88f2821,
	0x8902f09,0x8902f21,
	};

static const TUint16 TheMatch_hun_huStringElement[] = 
	{
	0x2,0x61,0x301,0x2,0x41,0x301,0x2,0x65,
	0x301,0x2,0x45,0x301,0x2,0x69,0x301,0x2,
	0x49,0x301,0x2,0x6f,0x301,0x2,0x4f,0x301,
	0x2,0x6f,0x308,0x2,0x4f,0x308,0x2,0x6f,
	0x30b,0x2,0x4f,0x30b,0x2,0x75,0x301,0x2,
	0x55,0x301,0x2,0x75,0x308,0x2,0x55,0x308,
	0x2,0x75,0x30b,0x2,0x55,0x30b,
	};

static const TUint32 TheMatch_hun_huStringIndex[] = 
	{
	0x30001,0x90003,0xf0005,0x150007,0x1b0009,0x21000b,0x27000d,0x2d000f,
	0x330011,0x0,0x60002,0xc0004,0x120006,0x180008,0x1e000a,0x24000c,
	0x2a000e,0x300010,
	};

static const TCollationKeyTable TheMatch_hun_huTable = 
	{ TheMatch_hun_huKey, 0, 0, TheMatch_hun_huStringElement, TheMatch_hun_huStringIndex, 18 };

static const TCollationMethod TheCollationMethod[] = 
	{
//      Added by SortAndMatch 22.10.2009
		{
		KUidSort_hun_huCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheSort_hun_huTable, // the locale values override the standard values
		0 // the flags are standard
		},
//      End of addition 22.10.2009
		{
		KUidMatch_hun_huCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheMatch_hun_huTable, // the locale values override the standard values
        TCollationMethod:: EMatchingTable// Switched to the Match flag by SortAndMatch 22.10.2009
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
    3 // Changed to 3 from 2 by SortAndMatch 22.10.2009
	};

// The one and only locale character set object.
const LCharSet TheCharSet =
	{
	NULL,
	&TheCollationDataSet
	};

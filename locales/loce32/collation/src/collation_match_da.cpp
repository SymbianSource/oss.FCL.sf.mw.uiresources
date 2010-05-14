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

// Added by SortAndMatch 24.05.2007
#include "collation_sort_da.cpp"

const TUint KUidMatch_da_dkCollationMethod = 0x100059DD;

static const TUint32 TheMatch_da_dkKey[] = 
	{
	0x8d72809,0x8d72821,0x8d86f09,0x8d86f21,0x8d86f09,0x8d86f21,0x8d92809,0x8d92821,
	0x8da2409,0x8da2421,0x6f09,0x8dc0109,0x8dc0121,0x8dc2209,0x8dc2221,0x8d60109,
	0x8d60121,0x8d61309,0x8d61321,0x8d63b09,0x8d63b21,0x8d80109,0x8d80121,
	};

static const TUint32 TheMatch_da_dkIndex[] = 
	{
	0xc60010,0xd80016,0xe6000f,0xf80015,0x1b7000c,0x1e20014,0x1e30013,0x1ee000e,
	0x1ef000d,0x1fc0012,0x1fd0011,0x292000b,0x338000a,
	};

static const TUint16 TheMatch_da_dkStringElement[] = 
	{
	0x2,0x61,0x308,0x2,0x41,0x308,0x2,0x6f,
	0x335,0x2,0x4f,0x335,0x2,0x6f,0x338,0x2,
	0x4f,0x338,0x2,0x6f,0x308,0x2,0x4f,0x308,
	0x2,0x61,0x30a,0x2,0x41,0x30a,
	};

static const TUint32 TheMatch_da_dkStringIndex[] = 
	{
	0x30001,0x1b0009,0x150007,0x90003,0xf0005,0x0,0x180008,0x120006,
	0x60002,0xc0004,
	};

static const TCollationKeyTable TheMatch_da_dkTable = 
	{ TheMatch_da_dkKey, TheMatch_da_dkIndex, 13, TheMatch_da_dkStringElement, TheMatch_da_dkStringIndex, 10 };

static const TCollationMethod TheCollationMethod[] = 
	{
//      Added by SortAndMatch 24.05.2007
		{
		KUidSort_da_dkCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheSort_da_dkTable, // the locale values override the standard values
		0 // the flags are standard
		},
//      End of addition 24.05.2007
		{
		KUidMatch_da_dkCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheMatch_da_dkTable, // the locale values override the standard values
        TCollationMethod:: EMatchingTable// Switched to the Match flag by SortAndMatch 24.05.2007
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
    3 // Changed to 3 from 2 by SortAndMatch 24.05.2007
	};

// The one and only locale character set object.
const LCharSet TheCharSet =
	{
	NULL,
	&TheCollationDataSet
	};

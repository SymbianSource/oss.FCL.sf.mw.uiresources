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

// Added by SortAndMatch 26.03.2007
#include "collation_sort_ee.cpp"

const TUint KUidMatch_et_eeCollationMethod = 0x100059DD;

static const TUint32 TheMatch_et_eeKey[] = 
	{
	0x8642221,0x8642221,0x8632221,0x8632221,0x8622221,0x8622221,0x8b23021,0x8b23009,
	0x8b32821,0x8b32809,0x8b42821,0x8b42809,0x8b52821,0x8b52809,
	};

static const TUint16 TheMatch_et_eeStringElement[] = 
	{
	0x2,0x43,0x30c,0x2,0x63,0x30c,0x2,0x53,
	0x30c,0x2,0x73,0x30c,0x2,0x5a,0x30c,0x2,
	0x7a,0x30c,0x2,0x4f,0x303,0x2,0x6f,0x303,
	0x2,0x41,0x308,0x2,0x61,0x308,0x2,0x4f,
	0x308,0x2,0x6f,0x308,0x2,0x55,0x308,0x2,
	0x75,0x308,
	};

static const TUint32 TheMatch_et_eeStringIndex[] = 
	{
	0x180008,0x0,0x120006,0x1e000a,0x60002,0x24000c,0xc0004,0x1b0009,
	0x30001,0x150007,0x21000b,0x90003,0x27000d,0xf0005,
	};

static const TCollationKeyTable TheMatch_et_eeTable = 
	{ TheMatch_et_eeKey, 0, 0, TheMatch_et_eeStringElement, TheMatch_et_eeStringIndex, 14 };

static const TCollationMethod TheCollationMethod[] = 
	{
//      Added by SortAndMatch 26.03.2007
		{
		KUidSort_et_eeCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheSort_et_eeTable, // the locale values override the standard values
		0 // the flags are standard
		},
//      End of addition 26.03.2007
		{
		KUidMatch_et_eeCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheMatch_et_eeTable, // the locale values override the standard values
        TCollationMethod:: EMatchingTable// Switched to the Match flag by SortAndMatch 26.03.2007
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
    3 // Changed to 3 from 2 by SortAndMatch 26.03.2007
	};

// The one and only locale character set object.
const LCharSet TheCharSet =
	{
	NULL,
	&TheCollationDataSet
	};

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

// Added by SortAndMatch 31.8.2010
#include "lx_sort_hun_HU.cpp"

const TUint KUidMatch_hun_huCollationMethod = 0x100059DD;

static const TUint32 TheMatch_hun_huKey[] = 
	{	 // 8 keys
	0x8072809,0x8072821,0x8082f09,0x8082f21,0x88f2809,0x88f2821,0x8902f09,0x8902f21,
	};

static const TUint16 TheMatch_hun_huStringElement[] = 
	{
	0x2,0x6f,0x308,0x2,0x4f,0x308,0x2,0x6f,
	0x30b,0x2,0x4f,0x30b,0x2,0x75,0x308,0x2,
	0x55,0x308,0x2,0x75,0x30b,0x2,0x55,0x30b,
	};

static const TUint32 TheMatch_hun_huStringIndex[] = 
	{
	0x30001,0x90003,0xf0005,0x150007,0x0,0x60002,0xc0004,0x120006,
	};

static const TCollationKeyTable TheMatch_hun_huTable = 
	{ TheMatch_hun_huKey, 0, 0, TheMatch_hun_huStringElement, TheMatch_hun_huStringIndex, 8 };

static const TCollationMethod TheCollationMethod[] = 
	{
//      Added by SortAndMatch 31.8.2010
		{
		KUidSort_hun_huCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheSort_hun_huTable, // the locale values override the standard values
		0 // the flags are standard
		},
//      End of addition 31.8.2010
		{
		KUidMatch_hun_huCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheMatch_hun_huTable, // the locale values override the standard values
        TCollationMethod:: EMatchingTable// Switched to the Match flag by SortAndMatch 31.8.2010
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
    3 // Changed to 3 from 2 by SortAndMatch 31.8.2010
	};

// The one and only locale character set object.
const LCharSet TheCharSet =
	{
	NULL,
	&TheCollationDataSet
	};

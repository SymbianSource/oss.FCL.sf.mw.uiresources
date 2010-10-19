/*
* Copyright (c) 2010 Nokia Corporation and/or its subsidiary(-ies).
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

const TUint KUidColspaCollationMethod = 0x100059DD;

static const TUint32 TheColspaKey[] = 
	{	 // 2 keys
	0x7ef3009,0x7ef3021,
	};

static const TUint16 TheColspaStringElement[] = 
	{
	0x2,0x6e,0x303,0x2,0x4e,0x303,
	};

static const TUint32 TheColspaStringIndex[] = 
	{
	0x30001,0x0,
	};

static const TCollationKeyTable TheColspaTable = 
	{ TheColspaKey, 0, 0, TheColspaStringElement, TheColspaStringIndex, 2 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColspaCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColspaTable, // the locale values override the standard values
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

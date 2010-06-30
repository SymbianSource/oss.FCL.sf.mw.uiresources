/*
* Copyright (c) 2000 Nokia Corporation and/or its subsidiary(-ies).
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



/*
The LCharSet object used by the Colfin locale.
Generated by COLTAB.
*/

#include <kernel/ls_std.h>
#include <collate.h>

const TUint KUidColfinCollationMethod = 0x100059DD;

static const TUint32 TheColfinKey[] = 
	{
	0x8d62409,0x8d62421,0x8d72809,0x8d72821,0x8d82809,0x8d82821,
	};

static const TUint16 TheColfinStringElement[] = 
	{
	0x2,0x61,0x30a,0x2,0x41,0x30a,0x2,0x61,
	0x308,0x2,0x41,0x308,0x2,0x6f,0x308,0x2,
	0x4f,0x308,
	};

static const TUint32 TheColfinStringIndex[] = 
	{
	0x90003,0x30001,0xf0005,0x60002,0x0,0xc0004,
	};

static const TCollationKeyTable TheColfinTable = 
	{ TheColfinKey, 0, 0, TheColfinStringElement, TheColfinStringIndex, 6 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColfinCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColfinTable, // the locale values override the standard values
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
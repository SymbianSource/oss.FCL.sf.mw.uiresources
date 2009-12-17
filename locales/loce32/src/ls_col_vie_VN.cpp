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

const TUint KUidCol_vie_vnCollationMethod = 0x100059DD;

static const TUint32 TheCol_vie_vnKey[] = 
	{
	0x6d01809,0x6d01821,0x6d11d09,0x6d11d21,0x7201d09,0x7201d21,0x8061d09,0x8061d21,
	0x8074d09,0x8074d21,0x88e4d09,0x88e4d21,0x1309,0x1609,0x3009,0x4009,
	0x5909,0x7040109,0x7040121,
	};

static const TUint32 TheCol_vie_vnIndex[] = 
	{
	0x1100012,0x1110011,0x300000c,0x301000f,0x303000e,0x309000d,0x3230010,
	};

static const TUint16 TheCol_vie_vnStringElement[] = 
	{
	0x2,0x61,0x306,0x2,0x41,0x306,0x2,0x61,
	0x302,0x2,0x41,0x302,0x2,0x65,0x302,0x2,
	0x45,0x302,0x2,0x6f,0x302,0x2,0x4f,0x302,
	0x2,0x6f,0x31b,0x2,0x4f,0x31b,0x2,0x75,
	0x31b,0x2,0x55,0x31b,
	};

static const TUint32 TheCol_vie_vnStringIndex[] = 
	{
	0x90003,0x30001,0xf0005,0x150007,0x1b0009,0x21000b,0x60002,0x0,
	0xc0004,0x120006,0x180008,0x1e000a,
	};

static const TCollationKeyTable TheCol_vie_vnTable = 
	{ TheCol_vie_vnKey, TheCol_vie_vnIndex, 7, TheCol_vie_vnStringElement, TheCol_vie_vnStringIndex, 12 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidCol_vie_vnCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheCol_vie_vnTable, // the locale values override the standard values
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

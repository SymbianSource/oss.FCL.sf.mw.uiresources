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

// Added by SortAndMatch 3/26/2007
#include "lx_sort_kan_IN.cpp"

const TUint KUidMatch_kan_inCollationMethod = 0x100059DD;
static const TCollationKeyTable TheMatch_kan_inTable = 
	{ 0, 0, 0, 0, 0, 0 };

static const TCollationMethod TheCollationMethod[] = 
	{
//      Added by SortAndMatch 3/26/2007
		{
		KUidSort_kan_inCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheSort_kan_inTable, // the locale values override the standard values
		0 // the flags are standard
		},
//      End of addition 3/26/2007
		{
		KUidMatch_kan_inCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheMatch_kan_inTable, // the locale values override the standard values
        TCollationMethod:: EMatchingTable// Switched to the Match flag by SortAndMatch 3/26/2007
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
    3 // Changed to 3 from 2 by SortAndMatch 3/26/2007
	};

// The one and only locale character set object.
const LCharSet TheCharSet =
	{
	NULL,
	&TheCollationDataSet
	};

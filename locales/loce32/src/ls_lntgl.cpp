/*
* Copyright (c) 2001,2002 Nokia Corporation and/or its subsidiary(-ies).
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
-----------------------------------------------------------------------------

    DESCRIPTION

    Day & Month names, abbreviations and datesuffix table + am/pm symbols
    for Tagalog language

-----------------------------------------------------------------------------
*/


//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  

//  The suffix table
const TText * const LLanguage::DateSuffixTable[KMaxSuffixes] =
	{
	_S(""),_S(""),_S(""),_S(""),_S(""),
	_S(""),_S(""),_S(""),_S(""),_S(""),
	_S(""),_S(""),_S(""),_S(""),_S(""),
	_S(""),_S(""),_S(""),_S(""),_S(""),
	_S(""),_S(""),_S(""),_S(""),_S(""),
	_S(""),_S(""),_S(""),_S(""),_S(""),
	_S("")
	};
// The day names
const TText * const LLanguage::DayTable[KMaxDays] =
	{
	_S("Lunes"),
	_S("Martes"),
	_S("Miyerkules"),
	_S("Huwebes"),
	_S("Biyernes"),
	_S("Sabado"),
	_S("Linggo")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Ln"),
	_S("Mr"),
	_S("Miy"),
	_S("Hw"),
	_S("Biy"),
	_S("Sb"),
	_S("Lin")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Enero"),
	_S("Pebrero"),
	_S("Marso"),
	_S("Abril"),
	_S("Mayo"),
	_S("Hunyo"),
	_S("Hulyo"),
	_S("Agosto"),
	_S("Setyembre"),
	_S("Oktubre"),
	_S("Nobyembre"),
	_S("Disyembre")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Ene"),
	_S("Peb"),
	_S("Mar"),
	_S("Abr"),
	_S("Mayo"),
	_S("Hun"),
	_S("Hul"),
	_S("Ago"),
	_S("Set"),
	_S("Okt"),
	_S("Nob"),
	_S("Dis")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

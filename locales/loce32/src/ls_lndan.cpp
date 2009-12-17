/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Danish language, ELOCL.07
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  

// The suffix table
const TText * const LLanguage::DateSuffixTable[KMaxSuffixes] =
	{
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S(".")
	};
// The day names
const TText * const LLanguage::DayTable[KMaxDays] =
	{
	_S("Mandag"),
	_S("Tirsdag"),
	_S("Onsdag"),
	_S("Torsdag"),
	_S("Fredag"),
	_S("Lørdag"),
	_S("Søndag")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Man"),
	_S("Tir"),
	_S("Ons"),
	_S("Tor"),
	_S("Fre"),
	_S("Lør"),
	_S("Søn")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Januar"),
	_S("Februar"),
	_S("Marts"),
	_S("April"),
	_S("Maj"),
	_S("Juni"),
	_S("Juli"),
	_S("August"),
	_S("September"),
	_S("Oktober"),
	_S("November"),
	_S("December")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Jan"),
	_S("Feb"),
	_S("Mar"),
	_S("Apr"),
	_S("Maj"),
	_S("Jun"),
	_S("Jul"),
	_S("Aug"),
	_S("Sep"),
	_S("Okt"),
	_S("Nov"),
	_S("Dec")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

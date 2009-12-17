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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Swedish language, ELOCL.06
*
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
	_S("måndag"),
	_S("tisdag"),
	_S("onsdag"),
	_S("torsdag"),
	_S("fredag"),
	_S("lördag"),
	_S("söndag")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Må"),
	_S("Ti"),
	_S("On"),
	_S("To"),
	_S("Fr"),
	_S("Lö"),
	_S("Sö")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("januari"),
	_S("februari"),
	_S("mars"),
	_S("april"),
	_S("maj"),
	_S("juni"),
	_S("juli"),
	_S("augusti"),
	_S("september"),
	_S("oktober"),
	_S("november"),
	_S("december")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("jan"),
	_S("feb"),
	_S("mar"),
	_S("apr"),
	_S("maj"),
	_S("jun"),
	_S("jul"),
	_S("aug"),
	_S("sep"),
	_S("okt"),
	_S("nov"),
	_S("dec")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

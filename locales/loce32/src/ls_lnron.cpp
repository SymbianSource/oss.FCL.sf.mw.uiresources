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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Romanian language, ELOCL.78
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
	_S("Luni"),
	_S("Mar\x0163" L"i"),
	_S("Miercuri"),
	_S("Joi"),
	_S("Vineri"),
	_S("Sâmb\x0103" L"t\x0103"),
	_S("Duminic\x0103")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Lu"),
	_S("Ma"),
	_S("Mi"),
	_S("Jo"),
	_S("Vi"),
	_S("Sâ"),
	_S("Du")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Ianuarie"),
	_S("Februarie"),
	_S("Martie"),
	_S("Aprilie"),
	_S("Mai"),
	_S("Iunie"),
	_S("Iulie"),
	_S("August"),
	_S("Septembrie"),
	_S("Octombrie"),
	_S("Noiembrie"),
	_S("Decembrie")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Ian"),
	_S("Feb"),
	_S("Mar"),
	_S("Apr"),
	_S("Mai"),
	_S("Iun"),
	_S("Iul"),
	_S("Aug"),
	_S("Sep"),
	_S("Oct"),
	_S("Nov"),
	_S("Dec")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

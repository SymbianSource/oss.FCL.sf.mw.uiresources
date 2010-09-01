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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Finnish language, ELOCL.09
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  

// The suffix table
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
	_S("maanantai"),
	_S("tiistai"),
	_S("keskiviikko"),
	_S("torstai"),
	_S("perjantai"),
	_S("lauantai"),
	_S("sunnuntai")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Ma"),
	_S("Ti"),
	_S("Ke"),
	_S("To"),
	_S("Pe"),
	_S("La"),
	_S("Su")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("tammikuu"),
	_S("helmikuu"),
	_S("maaliskuu"),
	_S("huhtikuu"),
	_S("toukokuu"),
	_S("kesäkuu"),
	_S("heinäkuu"),
	_S("elokuu"),
	_S("syyskuu"),
	_S("lokakuu"),
	_S("marraskuu"),
	_S("joulukuu")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("tammi"),
	_S("helmi"),
	_S("maalis"),
	_S("huhti"),
	_S("touko"),
	_S("kesä"),
	_S("heinä"),
	_S("elo"),
	_S("syys"),
	_S("loka"),
	_S("marras"),
	_S("joulu")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

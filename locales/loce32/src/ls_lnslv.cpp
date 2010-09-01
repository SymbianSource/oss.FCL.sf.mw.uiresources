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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Slovenian language, ELOCL.28
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
	_S("ponedeljek"),
	_S("torek"),
	_S("sreda"),
	_S("\x010D" L"etrtek"),
	_S("petek"),
	_S("sobota"),
	_S("nedelja")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("pon"),
	_S("tor"),
	_S("sre"),
	_S("\x010D" L"et"),
	_S("pet"),
	_S("sob"),
	_S("ned")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("januar"),
	_S("februar"),
	_S("marec"),
	_S("april"),
	_S("maj"),
	_S("junij"),
	_S("julij"),
	_S("avgust"),
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
	_S("avg"),
	_S("sep"),
	_S("okt"),
	_S("nov"),
	_S("dec")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Slovakian language, ELOCL.26
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
	_S("pondelok"),
	_S("utorok"),
	_S("streda"),
	_S("\x0161" L"tvrtok"),
	_S("piatok"),
	_S("sobota"),
	_S("nede\x013E"L"a") // need to add "":s because otherwise "a"
                        // would be interpreted as part of the escape sequence
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Po"),
	_S("Ut"),
	_S("St"),
	_S("\x0160" L"t"),
	_S("Pi"),
	_S("So"),
	_S("Ne")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("január"),
	_S("február"),
	_S("marec"),
	_S("apríl"),
	_S("máj"),
	_S("jún"),
	_S("júl"),
	_S("august"),
	_S("september"),
	_S("október"),
	_S("november"),
	_S("december")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("jan."),
	_S("feb."),
	_S("mar."),
	_S("apr."),
	_S("máj"),
	_S("jún"),
	_S("júl"),
	_S("aug."),
	_S("sep."),
	_S("okt."),
	_S("nov."),
	_S("dec.")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

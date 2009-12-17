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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Czech language, ELOCL.25
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
	_S("Pond\x011B" L"lí"),
	_S("Úterý"),
	_S("St\x0159"L"eda"),
	_S("\x010Ctvrtek"),
	_S("Pátek"),
	_S("Sobota"),
	_S("Ned\x011B" L"le")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Po"),
	_S("Út"),
	_S("St"),
	_S("\x010C" L"t"),
	_S("Pá"),
	_S("So"),
	_S("Ne")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("leden"),
	_S("únor"),
	_S("b\x0159"L"ezen"),
	_S("duben"),
	_S("kv\x011B" L"ten"),
	_S("\x010D"L"erven"),
	_S("\x010D"L"ervenec"),
	_S("srpen"),
	_S("zá\x0159" L"í"),
	_S("\x0159" L"íjen"),
	_S("listopad"),
	_S("prosinec")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("led"),
	_S("úno"),
	_S("b\x0159" L"e"),
	_S("dub"),
	_S("kv\x011b"),
	_S("\x010d" L"er"),
	_S("\x010d" L"vc"),
	_S("srp"),
	_S("zá\x0159"),
	_S("\x0159" L"íj"),
	_S("lis"),
	_S("pro")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("dop."),_S("odp.")};

//  End of File

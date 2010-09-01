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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Polish language, ELOCL.27
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
	_S("Poniedzia\x0142"L"ek"),
	_S("Wtorek"),
	_S("\x015A" L"roda"),
	_S("Czwartek"),
	_S("Pi\x0105" L"tek"),
	_S("Sobota"),
	_S("Niedziela")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Pn"),
	_S("Wt"),
	_S("\x015A" L"r"),
	_S("Cz"),
	_S("Pt"),
	_S("So"),
	_S("N")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Stycze\x0144"),
	_S("Luty"),
	_S("Marzec"),
	_S("Kwiecie\x0144"),
	_S("Maj"),
	_S("Czerwiec"),
	_S("Lipiec"),
	_S("Sierpie\x0144"),
	_S("Wrzesie\x0144"),
	_S("Pa\x017A"L"dziernik"),
	_S("Listopad"),
	_S("Grudzie\x0144")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Sty"),
	_S("Lut"),
	_S("Mar"),
	_S("Kwi"),
	_S("Maj"),
	_S("Cze"),
	_S("Lip"),
	_S("Si\x0119"),
	_S("Wrz"),
	_S("Pa\x017A"),
	_S("Lis"),
	_S("Gru")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

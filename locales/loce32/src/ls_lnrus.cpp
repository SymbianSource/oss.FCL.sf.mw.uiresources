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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Russian language, ELOCL.16
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
	_S("\x041F\x043E\x043D\x0435\x0434\x0435\x043B\x044C\x043D\x0438\x043A"),
	_S("\x0412\x0442\x043E\x0440\x043D\x0438\x043A"),
    _S("\x0421\x0440\x0435\x0434\x0430"),
    _S("\x0427\x0435\x0442\x0432\x0435\x0440\x0433"),
	_S("\x041F\x044F\x0442\x043D\x0438\x0446\x0430"),
	_S("\x0421\x0443\x0431\x0431\x043E\x0442\x0430"),
	_S("\x0412\x043E\x0441\x043A\x0440\x0435\x0441\x0435\x043D\x044C\x0435")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\x041F\x043D"),
	_S("\x0412\x0442"),
	_S("\x0421\x0440"),
	_S("\x0427\x0442"),
	_S("\x041F\x0442"),
	_S("\x0421\x0431"),
	_S("\x0412\x0441")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x044F\x043D\x0432\x0430\x0440\x044C"),
	_S("\x0444\x0435\x0432\x0440\x0430\x043B\x044C"),
	_S("\x043C\x0430\x0440\x0442"),
	_S("\x0430\x043F\x0440\x0435\x043B\x044C"),
	_S("\x043C\x0430\x0439"),
	_S("\x0438\x044E\x043D\x044C"),
	_S("\x0438\x044E\x043B\x044C"),
	_S("\x0430\x0432\x0433\x0443\x0441\x0442"),
	_S("\x0441\x0435\x043D\x0442\x044F\x0431\x0440\x044C"),
	_S("\x043E\x043A\x0442\x044F\x0431\x0440\x044C"),
	_S("\x043D\x043E\x044F\x0431\x0440\x044C"),
	_S("\x0434\x0435\x043A\x0430\x0431\x0440\x044C")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x044F\x043D\x0432"),
	_S("\x0444\x0435\x0432"),
	_S("\x043C\x0430\x0440"),
	_S("\x0430\x043F\x0440"),
	_S("\x043C\x0430\x0439"),
	_S("\x0438\x044E\x043D"),
	_S("\x0438\x044E\x043B"),
	_S("\x0430\x0432\x0433"),
	_S("\x0441\x0435\x043D"),
	_S("\x043E\x043A\x0442"),
	_S("\x043D\x043E\x044F"),
	_S("\x0434\x0435\x043A")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

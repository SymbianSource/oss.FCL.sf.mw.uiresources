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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Ukranian language, ELOCL.93
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
	_S("\x041F\x043E\x043D\x0435\x0434\x0456\x043B\x043E\x043A"),
	_S("\x0412\x0456\x0432\x0442\x043E\x0440\x043E\x043A"),
	_S("\x0421\x0435\x0440\x0435\x0434\x0430"),
	_S("\x0427\x0435\x0442\x0432\x0435\x0440"),
	_S("\x041F'\x044F\x0442\x043D\x0438\x0446\x044F"),
	_S("\x0421\x0443\x0431\x043E\x0442\x0430"),
	_S("\x041D\x0435\x0434\x0456\x043B\x044F")
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
	_S("\x041D\x0434")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x0421\x0456\x0447\x0435\x043D\x044C"),
	_S("\x041B\x044E\x0442\x0438\x0439"),
	_S("\x0411\x0435\x0440\x0435\x0437\x0435\x043D\x044C"),
	_S("\x041A\x0432\x0456\x0442\x0435\x043D\x044C"),
	_S("\x0422\x0440\x0430\x0432\x0435\x043D\x044C"),
	_S("\x0427\x0435\x0440\x0432\x0435\x043D\x044C"),
	_S("\x041B\x0438\x043F\x0435\x043D\x044C"),
	_S("\x0421\x0435\x0440\x043F\x0435\x043D\x044C"),
	_S("\x0412\x0435\x0440\x0435\x0441\x0435\x043D\x044C"),
	_S("\x0416\x043E\x0432\x0442\x0435\x043D\x044C"),
	_S("\x041B\x0438\x0441\x0442\x043E\x043F\x0430\x0434"),
	_S("\x0413\x0440\x0443\x0434\x0435\x043D\x044C")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x0421\x0456\x0447"),
	_S("\x041B\x044E\x0442"),
	_S("\x0411\x0435\x0440"),
	_S("\x041A\x0432\x0456\x0442"),
	_S("\x0422\x0440\x0430\x0432"),
	_S("\x0427\x0435\x0440\x0432"),
	_S("\x041B\x0438\x043F"),
	_S("\x0421\x0435\x0440\x043F"),
	_S("\x0412\x0435\x0440"),
	_S("\x0416\x043E\x0432\x0442"),
	_S("\x041B\x0438\x0441\x0442"),
	_S("\x0413\x0440\x0443\x0434")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

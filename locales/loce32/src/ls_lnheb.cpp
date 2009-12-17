/*
* Copyright (c) 2002, 2003 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Hebrew language, ELOCL.57
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
	_S("\x05E9\x05E0\x05D9"),
	_S("\x05E9\x05DC\x05D9\x05E9\x05D9"),
	_S("\x05E8\x05D1\x05D9\x05E2\x05D9"),
	_S("\x05D7\x05DE\x05D9\x05E9\x05D9"),
	_S("\x05E9\x05D9\x05E9\x05D9"),
	_S("\x05E9\x05D1\x05EA"),
	_S("\x05E8\x05D0\x05E9\x05D5\x05DF")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\x05D1\x0027"),
	_S("\x05D2\x0027"),
	_S("\x05D3\x0027"),
	_S("\x05D4\x0027"),
	_S("\x05D5\x0027"),
	_S("\x05E9\x0027"),
	_S("\x05D0\x0027")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x05D9\x05E0\x05D5\x05D0\x05E8"),
	_S("\x05E4\x05D1\x05E8\x05D5\x05D0\x05E8"),
	_S("\x05DE\x05E8\x05E5"),
	_S("\x05D0\x05E4\x05E8\x05D9\x05DC"),
	_S("\x05DE\x05D0\x05D9"),
	_S("\x05D9\x05D5\x05E0\x05D9"),
	_S("\x05D9\x05D5\x05DC\x05D9"),
	_S("\x05D0\x05D5\x05D2\x05D5\x05E1\x05D8"),
	_S("\x05E1\x05E4\x05D8\x05DE\x05D1\x05E8"),
	_S("\x05D0\x05D5\x05E7\x05D8\x05D5\x05D1\x05E8"),
	_S("\x05E0\x05D5\x05D1\x05DE\x05D1\x05E8"),
	_S("\x05D3\x05E6\x05DE\x05D1\x05E8")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x05D9\x05E0\x05D5\x002E"),
	_S("\x05E4\x05D1\x05E8\x002E"),
	_S("\x05DE\x05E8\x05E5"),
	_S("\x05D0\x05E4\x05E8\x002E"),
	_S("\x05DE\x05D0\x05D9"),
	_S("\x05D9\x05D5\x05E0\x002E"),
	_S("\x05D9\x05D5\x05DC\x002E"),
	_S("\x05D0\x05D5\x05D2\x002E"),
	_S("\x05E1\x05E4\x05D8\x002E"),
	_S("\x05D0\x05D5\x05E7\x002E"),
	_S("\x05E0\x05D5\x05D1\x002E"),
	_S("\x05D3\x05E6\x05DE\x002E")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

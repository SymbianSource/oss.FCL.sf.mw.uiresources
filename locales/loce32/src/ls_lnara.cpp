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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Arabic language, ELOCL.37
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
	_S("\x0627\x0644\x0627\x062B\x0646\x064A\x0646"),
	_S("\x0627\x0644\x062B\x0644\x0627\x062B\x0627\x0621"),
	_S("\x0627\x0644\x0623\x0631\x0628\x0639\x0627\x0621"),
	_S("\x0627\x0644\x062E\x0645\x064A\x0633"),
	_S("\x0627\x0644\x062C\x0645\x0639\x0629"),
	_S("\x0627\x0644\x0633\x0628\x062A"),
	_S("\x0627\x0644\x0623\x062D\x062F")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\x0627\x062B"),
	_S("\x062B"),
	_S("\x0623\x0631"),
	_S("\x062E"),
	_S("\x062C"),
	_S("\x0633"),
	_S("\x0623\x062D")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("1"),
	_S("2"),
	_S("3"),
	_S("4"),
	_S("5"),
	_S("6"),
	_S("7"),
	_S("8"),
	_S("9"),
	_S("10"),
	_S("11"),
	_S("12")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("1"),
	_S("2"),
	_S("3"),
	_S("4"),
	_S("5"),
	_S("6"),
	_S("7"),
	_S("8"),
	_S("9"),
	_S("10"),
	_S("11"),
	_S("12")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("\x0635"),_S("\x0645")};

//  End of File

/*
* Copyright (c) 2005 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Day & Month names, abbreviations and datesuffix table
*                + am/pm symbols for Urdu, Epoc code 94
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
	_S("\x067e\x06cc\x0631"),
	_S("\x0645\x0646\x06af\x0644"),
	_S("\x0628\x062f\x06be"),
	_S("\x062c\x0645\x0639\x0631\x0627\x062a"),
	_S("\x062c\x0645\x0639\x06c1"),
	_S("\x06be\x0641\x062a\x06c1"),
	_S("\x0627\x062a\x0648\x0627\x0631")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\x067e\x06cc\x0631"),
	_S("\x0645\x0646"),
	_S("\x0628\x062f"),
	_S("\x062c\x0631"),
	_S("\x062c\x0645"),
	_S("\x06c1\x0641"),
	_S("\x0627\x062a")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x062c\x0646\x0648\x0631\x06cc"),
	_S("\x0641\x0631\x0648\x0631\x06cc"),
	_S("\x0645\x0627\x0631\x0686"),
	_S("\x0627\x067e\x0631\x06cc\x0644"),
	_S("\x0645\x0626\x06cc"),
	_S("\x062c\x0648\x0646"),
	_S("\x062c\x0648\x0644\x0627\x0626\x06cc"),
	_S("\x0627\x06af\x0633\x062a"),
	_S("\x0633\x062a\x0645\x0628\x0631"),
	_S("\x0627\x06a9\x062a\x0648\x0628\x0631"),
	_S("\x0646\x0648\x0645\x0628\x0631"),
	_S("\x062f\x0633\x0645\x0628\x0631")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x062c\x0646\x0648"),
	_S("\x0641\x0631\x0648"),
	_S("\x0645\x0627\x0631\x0686"),
	_S("\x0627\x067e\x0631\x06cc\x0644"),
	_S("\x0645\x0626\x06cc"),
	_S("\x062c\x0648\x0646"),
	_S("\x062c\x0648\x0644\x0627"),
	_S("\x0627\x06af\x0633"),
	_S("\x0633\x062a\x0645"),
	_S("\x0627\x06a9\x062a\x0648"),
	_S("\x0646\x0648\x0645"),
	_S("\x062f\x0633\x0645")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

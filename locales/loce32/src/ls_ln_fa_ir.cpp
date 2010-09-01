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
*                + am/pm symbols for Farsi, Epoc code 50
*
*/



//  EXTERNAL RESOURCES

//  Include Files

#include <kernel/ls_std.h>
#include "PUAcodes.hrh"

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
	_S("\x062f\x0648\x0634\x0646\x0628\x0647"),
	_S("\x0633\x0647 \x0634\x0646\x0628\x0647"),
	_S("\x0686\x0647\x0627\x0631\x0634\x0646\x0628\x0647"),
	_S("\x067e\x0646\x062c\x0634\x0646\x0628\x0647"),
	_S("\x062c\x0645\x0639\x0647"),
	_S("\x0634\x0646\x0628\x0647"),
	_S("\x06cc\x06a9\x0634\x0646\x0628\x0647")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\x06f2\x0634"),
	_S("\x06f3\x0634"),
	_S("\x06f4\x0634"),
	_S("\x06f5\x0634"),
	_S("\x062c"),
	_S("\x0634"),
	_S("\x06f1\x0634")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x0698\x0627\x0646\x0648\x064a\x0647"),
	_S("\x0641\x0648\x0631\x064a\x0647"),
	_S("\x0645\x0627\x0631\x0633"),
	_S("\x0622\x0648\x0631\x064a\x0644"),
	_S("\x0645\x0647"),
	_S("\x0698\x0648\x0626\x0646"),
	_S("\x0698\x0648\x0626\x064a\x0647"),
	_S("\x0622\x06af\x0648\x0633\x062a"),
	_S("\x0633\x067e\x062a\x0627\x0645\x0628\x0631"),
	_S("\x0627\x0643\x062a\x0628\x0631"),
	_S("\x0646\x0648\x0627\x0645\x0628\x0631"),
	_S("\x062f\x0633\x0627\x0645\x0628\x0631")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x0698\x0627\x0646\x0648\x064a\x0647"),
	_S("\x0641\x0648\x0631\x064a\x0647"),
	_S("\x0645\x0627\x0631\x0633"),
	_S("\x0622\x0648\x0631\x064a\x0644"),
	_S("\x0645\x0647"),
	_S("\x0698\x0648\x0626\x0646"),
	_S("\x0698\x0648\x0626\x064a\x0647"),
	_S("\x0622\x06af\x0648\x0633\x062a"),
	_S("\x0633\x067e\x062a\x0627\x0645\x0628\x0631"),
	_S("\x0627\x0643\x062a\x0628\x0631"),
	_S("\x0646\x0648\x0627\x0645\x0628\x0631"),
	_S("\x062f\x0633\x0627\x0645\x0628\x0631")
	};
// The am/pm strings (In case of Farsi, these are symbols in PUA area).
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("\x200F\xF816\x200F"),_S("\x200F\xF817\x200F")};

//  End of File

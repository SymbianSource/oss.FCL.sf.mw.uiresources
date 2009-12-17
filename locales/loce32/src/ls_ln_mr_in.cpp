/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
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
*                + am/pm symbols for Marathi, Epoc code 72
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
	_S("\x0938\x094b\x092e\x0935\x093e\x0930"),
	_S("\x092e\x0902\x0917\x0933\x0935\x093e\x0930"),
	_S("\x092c\x0941\x0927\x0935\x093e\x0930"),
	_S("\x0917\x0941\x0930\x0941\x0935\x093e\x0930"),
	_S("\x0936\x0941\x0915\x094d\x0930\x0935\x093e\x0930"),
	_S("\x0936\x0928\x093f\x0935\x093e\x0930"),
	_S("\x0930\x0935\x093f\x0935\x093e\x0930")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\x0938\x094b\x092e"),
	_S("\x092e\x0902\x0917\x0933"),
	_S("\x092c\x0941\x0927"),
	_S("\x0917\x0941\x0930\x0941"),
	_S("\x0936\x0941\x0915\x094d\x0930"),
	_S("\x0936\x0928\x093f"),
	_S("\x0930\x0935\x093f")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x091c\x093e\x0928\x0947\x0935\x093e\x0930\x0940"),
	_S("\x092b\x0947\x092c\x094d\x0930\x0941\x0935\x093e\x0930\x0940"),
	_S("\x092e\x093e\x0930\x094d\x091a"),
	_S("\x090f\x092a\x094d\x0930\x093f\x0932"),
	_S("\x092e\x0947"),
	_S("\x091c\x0942\x0928"),
	_S("\x091c\x0941\x0932\x0948"),
	_S("\x0911\x0917\x0938\x094d\x091f"),
	_S("\x0938\x092a\x094d\x091f\x0947\x0902\x092c\x0930"),
	_S("\x0911\x0915\x094d\x091f\x094b\x092c\x0930"),
	_S("\x0928\x094b\x0935\x094d\x0939\x0947\x0902\x092c\x0930"),
	_S("\x0921\x093f\x0938\x0947\x0902\x092c\x0930")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x091c\x093e\x0928\x0947"),
	_S("\x092b\x0947\x092c\x094d\x0930\x0941"),
	_S("\x092e\x093e\x0930\x094d\x091a"),
	_S("\x090f\x092a\x094d\x0930\x093f\x0932"),
	_S("\x092e\x0947"),
	_S("\x091c\x0942\x0928"),
	_S("\x091c\x0941\x0932\x0948"),
	_S("\x0911\x0917"),
	_S("\x0938\x092a\x094d\x091f\x0947\x0902"),
	_S("\x0911\x0915\x094d\x091f\x094b"),
	_S("\x0928\x094b\x0935\x094d\x0939\x0947\x0902"),
	_S("\x0921\x093f\x0938\x0947\x0902")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

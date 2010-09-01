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
*                + am/pm symbols for Hindi, Epoc code 58
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
	_S("\x092e\x0902\x0917\x0932\x0935\x093e\x0930"),
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
	_S("\x092e\x0902\x0917\x0932"),
	_S("\x092c\x0941\x0927"),
	_S("\x0917\x0941\x0930\x0941"),
	_S("\x0936\x0941\x0915\x094d\x0930"),
	_S("\x0936\x0928\x093f"),
	_S("\x0930\x0935\x093f")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x091c\x0928\x0935\x0930\x0940"),
	_S("\x092b\x0930\x0935\x0930\x0940"),
	_S("\x092e\x093e\x0930\x094d\x091a"),
	_S("\x0905\x092a\x094d\x0930\x0948\x0932"),
	_S("\x092e\x0908"),
	_S("\x091c\x0942\x0928"),
	_S("\x091c\x0941\x0932\x093e\x0908"),
	_S("\x0905\x0917\x0938\x094d\x0924"),
	_S("\x0938\x093f\x0924\x092e\x094d\x092c\x0930"),
	_S("\x0905\x0915\x094d\x0924\x0942\x092c\x0930"),
	_S("\x0928\x0935\x092e\x094d\x092c\x0930"),
	_S("\x0926\x093f\x0938\x092e\x094d\x092c\x0930")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x091c\x0928"),
	_S("\x092b\x0930"),
	_S("\x092e\x093e\x0930\x094d\x091a"),
	_S("\x0905\x092a\x094d\x0930\x0948"),
	_S("\x092e\x0908"),
	_S("\x091c\x0942\x0928"),
	_S("\x091c\x0941\x0932\x093e"),
	_S("\x0905\x0917"),
	_S("\x0938\x093f\x0924"),
	_S("\x0905\x0915\x094d\x0924\x0942"),
	_S("\x0928\x0935"),
	_S("\x0926\x093f\x0938")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

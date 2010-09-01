/*
* Copyright (c) 2000 Nokia Corporation and/or its subsidiary(-ies).
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
* Description: 
*
*/




#include <kernel/ls_std.h>

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
	_S("\x661f\x671f\x4e00"),
	_S("\x661f\x671f\x4e8c"),
	_S("\x661f\x671f\x4e09"),
	_S("\x661f\x671f\x56db"),
	_S("\x661f\x671f\x4e94"),
	_S("\x661f\x671f\x516d"),
	_S("\x661f\x671f\x65e5")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\x4e00"),
	_S("\x4e8c"),
	_S("\x4e09"),
	_S("\x56db"),
	_S("\x4e94"),
	_S("\x516d"),
	_S("\x65e5")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x0031\x6708"),
	_S("\x0032\x6708"),
	_S("\x0033\x6708"),
	_S("\x0034\x6708"),
	_S("\x0035\x6708"),
	_S("\x0036\x6708"),
	_S("\x0037\x6708"),
	_S("\x0038\x6708"),
	_S("\x0039\x6708"),
	_S("\x0031\x0030\x6708"),
	_S("\x0031\x0031\x6708"),
	_S("\x0031\x0032\x6708")
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
/*
const TText * const LLanguage::AmPmTable[KMaxAmPms] =
	{
	_S("\x4e0a\x5348"),
	_S("\x4e0b\x5348")
	};
*/
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("am"),_S("pm")};

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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Korean language
*
*/




//  EXTERNAL RESOURCES


//  Include Files

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS

// The suffix table
const TText * const LLanguage::DateSuffixTable[KMaxSuffixes] =
	{
	_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),
	_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),
	_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),
	_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),
	_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),
	_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),_S("\xC77C"),
	_S("\xC77C")
	};
// The day names
const TText * const LLanguage::DayTable[KMaxDays] =
	{
	_S("\xC6D4\xC694\xC77C"),
	_S("\xD654\xC694\xC77C"),
	_S("\xC218\xC694\xC77C"),
	_S("\xBAA9\xC694\xC77C"),
	_S("\xAE08\xC694\xC77C"),
	_S("\xD1A0\xC694\xC77C"),
	_S("\xC77C\xC694\xC77C")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\xC6D4"),
	_S("\xD654"),
	_S("\xC218"),
	_S("\xBAA9"),
	_S("\xAE08"),
	_S("\xD1A0"),
	_S("\xC77C")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x0031\xC6D4"),
	_S("\x0032\xC6D4"),
	_S("\x0033\xC6D4"),
	_S("\x0034\xC6D4"),
	_S("\x0035\xC6D4"),
	_S("\x0036\xC6D4"),
	_S("\x0037\xC6D4"),
	_S("\x0038\xC6D4"),
	_S("\x0039\xC6D4"),
	_S("\x0031\x0030\xC6D4"),
	_S("\x0031\x0031\xC6D4"),
	_S("\x0031\x0032\xC6D4")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x0031\xC6D4"),
	_S("\x0032\xC6D4"),
	_S("\x0033\xC6D4"),
	_S("\x0034\xC6D4"),
	_S("\x0035\xC6D4"),
	_S("\x0036\xC6D4"),
	_S("\x0037\xC6D4"),
	_S("\x0038\xC6D4"),
	_S("\x0039\xC6D4"),
	_S("\x0031\x0030\xC6D4"),
	_S("\x0031\x0031\xC6D4"),
	_S("\x0031\x0032\xC6D4")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

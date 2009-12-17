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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Greek language, ELOCL.54
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
	_S("\x0394\x03B5\x03C5\x03C4\x03AD\x03C1\x03B1"),
	_S("\x03A4\x03C1\x03AF\x03C4\x03B7"),
	_S("\x03A4\x03B5\x03C4\x03AC\x03C1\x03C4\x03B7"),
	_S("\x03A0\x03AD\x03BC\x03C0\x03C4\x03B7"),
	_S("\x03A0\x03B1\x03C1\x03B1\x03C3\x03BA\x03B5\x03C5\x03AE"),
	_S("\x03A3\x03AC\x03B2\x03B2\x03B1\x03C4\x03BF"),
	_S("\x039A\x03C5\x03C1\x03B9\x03B1\x03BA\x03AE")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\x0394\x03B5\x03C5\x03C4\x002E"),
	_S("\x03A4\x03C1\x002E"),
	_S("\x03A4\x03B5\x03C4\x002E"),
	_S("\x03A0\x03AD\x03BC\x002E"),
	_S("\x03A0\x03B1\x03C1\x002E"),
	_S("\x03A3\x03AC\x03B2\x002E"),
	_S("\x039A\x03C5\x03C1\x002E")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x0399\x03B1\x03BD\x03BF\x03C5\x03AC\x03C1\x03B9\x03BF\x03C2"),
	_S("\x03A6\x03B5\x03B2\x03C1\x03BF\x03C5\x03AC\x03C1\x03B9\x03BF\x03C2"),
	_S("\x039C\x03AC\x03C1\x03C4\x03B9\x03BF\x03C2"),
	_S("\x0391\x03C0\x03C1\x03AF\x03BB\x03B9\x03BF\x03C2"),
	_S("\x039C\x03AC\x03B9\x03BF\x03C2"),
	_S("\x0399\x03BF\x03CD\x03BD\x03B9\x03BF\x03C2"),
	_S("\x0399\x03BF\x03CD\x03BB\x03B9\x03BF\x03C2"),
	_S("\x0391\x03CD\x03B3\x03BF\x03C5\x03C3\x03C4\x03BF\x03C2"),
	_S("\x03A3\x03B5\x03C0\x03C4\x03AD\x03BC\x03B2\x03C1\x03B9\x03BF\x03C2"),
	_S("\x039F\x03BA\x03C4\x03CE\x03B2\x03C1\x03B9\x03BF\x03C2"),
	_S("\x039D\x03BF\x03AD\x03BC\x03B2\x03C1\x03B9\x03BF\x03C2"),
	_S("\x0394\x03B5\x03BA\x03AD\x03BC\x03B2\x03C1\x03B9\x03BF\x03C2")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x0399\x03B1\x03BD"),
	_S("\x03A6\x03B5\x03B2"),
	_S("\x039C\x03B1\x03C1"),
	_S("\x0391\x03C0\x03C1"),
	_S("\x039C\x03AC\x03B9"),
	_S("\x0399\x03BF\x03C5\x03BD"),
	_S("\x0399\x03BF\x03C5\x03BB"),
	_S("\x0391\x03C5\x03B3"),
	_S("\x03A3\x03B5\x03C0"),
	_S("\x039F\x03BA\x03C4"),
	_S("\x039D\x03BF\x03B5"),
	_S("\x0394\x03B5\x03BA")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("\x03C0\x03BC"),_S("\x03BC\x03BC")};

//  End of File

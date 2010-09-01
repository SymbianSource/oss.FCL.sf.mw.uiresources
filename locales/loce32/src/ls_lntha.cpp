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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm 
*  symbols for Thai language, ELOCL.33
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
	_S("\x0E08\x0E31\x0E19\x0E17\x0E23\x0E4C"),
	_S("\x0E2D\x0E31\x0E07\x0E04\x0E32\x0E23"),
	_S("\x0E1E\x0E38\x0E18"),
	_S("\x0E1E\x0E24\x0E2B\x0E31\x0E2A\x0E1A\x0E14\x0E35"),
	_S("\x0E28\x0E38\x0E01\x0E23\x0E4C"),
	_S("\x0E40\x0E2A\x0E32\x0E23\x0E4C"),
	_S("\x0E2D\x0E32\x0E17\x0E34\x0E15\x0E22\x0E4C")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("\x0E08\x002E"),
	_S("\x0E2D\x002E"),
	_S("\x0E1E\x002E"),
	_S("\x0E1E\x0E24\x002E"),
	_S("\x0E28\x002E"),
	_S("\x0E2A\x002E"),
	_S("\x0E2D\x0E32\x002E")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("\x0E21\x0E01\x0E23\x0E32\x0E04\x0E21"),
	_S("\x0E01\x0E38\x0E21\x0E20\x0E32\x0E1E\x0E31\x0E19\x0E18\x0E4C"),
	_S("\x0E21\x0E35\x0E19\x0E32\x0E04\x0E21"),
	_S("\x0E40\x0E21\x0E29\x0E32\x0E22\x0E19"),
	_S("\x0E1E\x0E24\x0E29\x0E20\x0E32\x0E04\x0E21"),
	_S("\x0E21\x0E34\x0E16\x0E38\x0E19\x0E32\x0E22\x0E19"),
	_S("\x0E01\x0E23\x0E01\x0E0E\x0E32\x0E04\x0E21"),
	_S("\x0E2A\x0E34\x0E07\x0E2B\x0E32\x0E04\x0E21"),
	_S("\x0E01\x0E31\x0E19\x0E22\x0E32\x0E22\x0E19"),
	_S("\x0E15\x0E38\x0E25\x0E32\x0E04\x0E21"),
	_S("\x0E1E\x0E24\x0E28\x0E08\x0E34\x0E01\x0E32\x0E22\x0E19"),
	_S("\x0E18\x0E31\x0E19\x0E27\x0E32\x0E04\x0E21")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("\x0E21\x002E\x0E04\x002E"),
	_S("\x0E01\x002E\x0E1E\x002E"),
	_S("\x0E21\x0E35\x002E\x0E04\x002E"),
	_S("\x0E40\x0E21\x002E\x0E22\x002E"),
	_S("\x0E1E\x002E\x0E04\x002E"),
	_S("\x0E21\x0E34\x002E\x0E22\x002E"),
	_S("\x0E01\x002E\x0E04\x002E"),
	_S("\x0E2A\x002E\x0E04\x002E"),
	_S("\x0E01\x002E\x0E22\x002E"),
	_S("\x0E15\x002E\x0E04\x002E"),
	_S("\x0E1E\x002E\x0E22\x002E"),
	_S("\x0E18\x002E\x0E04\x002E")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("am"),_S("pm")}; // Not correct yet!

//  End of File

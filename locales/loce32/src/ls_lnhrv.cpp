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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Croatian language, ELOCL.45
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
	_S("ponedjeljak"),
	_S("utorak"),
	_S("srijeda"),
	_S("\x010D"L"etvrtak"),
	_S("petak"),
	_S("subota"),
	_S("nedjelja")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("pon"),
	_S("uto"),
	_S("sri"),
	_S("\x010D"L"et"),
	_S("pet"),
	_S("sub"),
	_S("ned")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("sije\x010D"L"anj"),
	_S("velja\x010D"L"a"),
	_S("ožujak"),
	_S("travanj"),
	_S("svibanj"),
	_S("lipanj"),
	_S("srpanj"),
	_S("kolovoz"),
	_S("rujan"),
	_S("listopad"),
	_S("studeni"),
	_S("prosinac")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("sij"),
	_S("velj"),
	_S("ožu"),
	_S("tra"),
	_S("svi"),
	_S("lip"),
	_S("srp"),
	_S("kol"),
	_S("ruj"),
	_S("lis"),
	_S("stu"),
	_S("pro")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

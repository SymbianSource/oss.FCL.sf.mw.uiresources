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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Serbian language, ELOCL.79
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  

//  The suffix table
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
	_S("ponedeljak"),
	_S("utorak"),
	_S("sreda"),
	_S("\x010D"L"etvrtak"),
	_S("petak"),
	_S("subota"),
	_S("nedelja")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("pon"),
	_S("uto"),
	_S("sre"),
	_S("\x010D"L"et"),
	_S("pet"),
	_S("sub"),
	_S("ned")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("januar"),
	_S("februar"),
	_S("mart"),
	_S("april"),
	_S("maj"),
	_S("jun"),
	_S("jul"),
	_S("avgust"),
	_S("septembar"),
	_S("oktobar"),
	_S("novembar"),
	_S("decembar")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("jan"),
	_S("feb"),
	_S("mar"),
	_S("apr"),
	_S("maj"),
	_S("jun"),
	_S("jul"),
	_S("avg"),
	_S("sep"),
	_S("okt"),
	_S("nov"),
	_S("dec")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

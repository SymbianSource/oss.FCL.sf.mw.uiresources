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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Turkish language, ELOCL.14
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
	_S("Pazartesi"),
	_S("Sal\x0131"),
	_S("Çar\x015F"L"amba"),
	_S("Per\x015F"L"embe"),
	_S("Cuma"),
	_S("Cumartesi"),
	_S("Pazar")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Pt"),
	_S("Sa"),
	_S("Ça"),
	_S("Pe"),
	_S("Cu"),
	_S("Ct"),
	_S("Pz")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Ocak"),
	_S("\x015E" L"ubat"),
	_S("Mart"),
	_S("Nisan"),
	_S("May\x0131" L"s"),
	_S("Haziran"),
	_S("Temmuz"),
	_S("A\x011F" L"ustos"),
	_S("Eylül"),
	_S("Ekim"),
	_S("Kas\x0131" L"m"),
	_S("Aral\x0131" L"k")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Oca"),
	_S("\x015E" L"ub"),
	_S("Mar"),
	_S("Nis"),
	_S("May"),
	_S("Haz"),
	_S("Tem"),
	_S("A\x011F" L"u"),
	_S("Eyl"),
	_S("Eki"),
	_S("Kas"),
	_S("Ara")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("ÖÖ"),_S("ÖS")};

//  End of File

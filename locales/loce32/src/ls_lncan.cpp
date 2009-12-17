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
* Description:   Day & Month names, abbreviations and datesuffixtable + am/pm symbols for Canadian French language
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
	_S("lundi"),
	_S("mardi"),
	_S("mercredi"),
	_S("jeudi"),
	_S("vendredi"),
	_S("samedi"),
	_S("dimanche")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("lun"),
	_S("mar"),
	_S("mer"),
	_S("jeu"),
	_S("ven"),
	_S("sam"),
	_S("dim")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("janvier"),
	_S("février"),
	_S("mars"),
	_S("avril"),
	_S("mai"),
	_S("juin"),
	_S("juillet"),
	_S("août"),
	_S("septembre"),
	_S("octobre"),
	_S("novembre"),
	_S("décembre")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("jan."),
	_S("fév."),
	_S("mar."),
	_S("avr."),
	_S("mai"),
	_S("juin"),
	_S("juil."),
	_S("août"),
	_S("sep."),
	_S("oct."),
	_S("nov."),
	_S("déc.")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

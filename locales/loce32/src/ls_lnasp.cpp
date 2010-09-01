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
* Description:   Day & Month names, abbreviations and datesuffixtable + am/pm symbols for American Spanish language
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
	_S("Lunes"),
	_S("Martes"),
	_S("Miércoles"),
	_S("Jueves"),
	_S("Viernes"),
	_S("Sábado"),
	_S("Domingo")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Lun."),
	_S("Mar."),
	_S("Mié."),
	_S("Jue."),
	_S("Vie."),
	_S("Sáb."),
	_S("Dom.")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("enero"),
	_S("febrero"),
	_S("marzo"),
	_S("abril"),
	_S("mayo"),
	_S("junio"),
	_S("julio"),
	_S("agosto"),
	_S("septiembre"),
	_S("octubre"),
	_S("noviembre"),
	_S("diciembre")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("ene"),
	_S("feb"),
	_S("mar"),
	_S("abr"),
	_S("may"),
	_S("jun"),
	_S("jul"),
	_S("ago"),
	_S("sep"),
	_S("oct"),
	_S("nov"),
	_S("dic")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Italian language, ELOCL.05
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
	_S("lunedì"),
	_S("martedì"),
	_S("mercoledì"),
	_S("giovedì"),
	_S("venerdì"),
	_S("sabato"),
	_S("domenica")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Lun"),
	_S("Mar"),
	_S("Mer"),
	_S("Gio"),
	_S("Ven"),
	_S("Sab"),
	_S("Dom")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("gennaio"),
	_S("febbraio"),
	_S("marzo"),
	_S("aprile"),
	_S("maggio"),
	_S("giugno"),
	_S("luglio"),
	_S("agosto"),
	_S("settembre"),
	_S("ottobre"),
	_S("novembre"),
	_S("dicembre")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("gen"),
	_S("feb"),
	_S("mar"),
	_S("apr"),
	_S("mag"),
	_S("giu"),
	_S("lug"),
	_S("ago"),
	_S("set"),
	_S("ott"),
	_S("nov"),
	_S("dic")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Estonian language, ELOCL.49
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
	_S("Esmaspäev"),
	_S("Teisipäev"),
	_S("Kolmapäev"),
	_S("Neljapäev"),
	_S("Reede"),
	_S("Laupäev"),
	_S("Pühapäev")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("E"),
	_S("T"),
	_S("K"),
	_S("N"),
	_S("R"),
	_S("L"),
	_S("P")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("jaanuar"),
	_S("veebruar"),
	_S("märts"),
	_S("aprill"),
	_S("mai"),
	_S("juuni"),
	_S("juuli"),
	_S("august"),
	_S("september"),
	_S("oktoober"),
	_S("november"),
	_S("detsember")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("jaan"),
	_S("veebr"),
	_S("märts"),
	_S("apr"),
	_S("mai"),
	_S("juuni"),
	_S("juuli"),
	_S("aug"),
	_S("sept"),
	_S("okt"),
	_S("nov"),
	_S("dets")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

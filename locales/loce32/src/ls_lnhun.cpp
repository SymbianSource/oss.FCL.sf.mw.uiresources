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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Hungarian language, ELOCL.17
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
	_S("hétf\x0151"),
	_S("kedd"),
	_S("szerda"),
	_S("csütörtök"),
	_S("péntek"),
	_S("szombat"),
	_S("vasárnap")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("h"),
	_S("k"),
	_S("sze"),
	_S("cs"),
	_S("p"),
	_S("szo"),
	_S("v")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("január"),
	_S("február"),
	_S("március"),
	_S("április"),
	_S("május"),
	_S("június"),
	_S("július"),
	_S("augusztus"),
	_S("szeptember"),
	_S("október"),
	_S("november"),
	_S("december")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("jan."),
	_S("febr."),
	_S("márc."),
	_S("ápr."),
	_S("máj."),
	_S("jún."),
	_S("júl."),
	_S("aug."),
	_S("szept."),
	_S("okt."),
	_S("nov."),
	_S("dec.")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("de."),_S("du.")};

//  End of File

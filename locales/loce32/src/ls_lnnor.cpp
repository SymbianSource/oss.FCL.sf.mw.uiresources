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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Norwegian language, ELOCL.08
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
	_S("mandag"),
	_S("tirsdag"),
	_S("onsdag"),
	_S("torsdag"),
	_S("fredag"),
	_S("lørdag"),
	_S("søndag")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Man"),
	_S("Tir"),
	_S("Ons"),
	_S("Tor"),
	_S("Fre"),
	_S("Lør"),
	_S("Søn")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("januar"),
	_S("februar"),
	_S("mars"),
	_S("april"),
	_S("mai"),
	_S("juni"),
	_S("juli"),
	_S("august"),
	_S("september"),
	_S("oktober"),
	_S("november"),
	_S("desember")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("jan"),
	_S("feb"),
	_S("mar"),
	_S("apr"),
	_S("mai"),
	_S("jun"),
	_S("jul"),
	_S("aug"),
	_S("sep"),
	_S("okt"),
	_S("nov"),
	_S("des")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("fm."),_S("em.")};

//  End of File

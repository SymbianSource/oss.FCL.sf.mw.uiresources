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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Latvian language, ELOCL.67
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  

//  The suffix table
const TText * const LLanguage::DateSuffixTable[KMaxSuffixes] =
	{
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S("."),_S("."),_S("."),_S("."),_S("."),
	_S(".")
	};
// The day names
const TText * const LLanguage::DayTable[KMaxDays] =
	{
	_S("pirmdiena"),
	_S("otrdiena"),
	_S("trešdiena"),
	_S("ceturtdiena"),
	_S("piektdiena"),
	_S("sestdiena"),
	_S("sv\x0113" L"tdiena")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Pr"),
	_S("Ot"),
	_S("Tr"),
	_S("Ce"),
	_S("Pk"),
	_S("Se"),
	_S("Sv")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("janv\x0101" L"ris"),
	_S("febru\x0101" L"ris"),
	_S("marts"),
	_S("apr\x012B" L"lis"),
	_S("maijs"),
	_S("j\x016B" L"nijs"),
	_S("j\x016B" L"lijs"),
	_S("augusts"),
	_S("septembris"),
	_S("oktobris"),
	_S("novembris"),
	_S("decembris")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Jan"),
	_S("Feb"),
	_S("Mar"),
	_S("Apr"),
	_S("Mai"),
	_S("J\x016B" L"n"),
	_S("J\x016B" L"l"),
	_S("Aug"),
	_S("Sep"),
	_S("Okt"),
	_S("Nov"),
	_S("Dec")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

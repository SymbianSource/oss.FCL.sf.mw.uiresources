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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Malay language, ELOCL.70
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
	_S("Isnin"),
	_S("Selasa"),
	_S("Rabu"),
	_S("Khamis"),
	_S("Jumaat"),
	_S("Sabtu"),
	_S("Ahad")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Isn"),
	_S("Sel"),
	_S("Rab"),
	_S("Kha"),
	_S("Jum"),
	_S("Sab"),
	_S("Ahd")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Januari"),
	_S("Februari"),
	_S("Mac"),
	_S("April"),
	_S("Mei"),
	_S("Jun"),
	_S("Julai"),
	_S("Ogos"),
	_S("September"),
	_S("Oktober"),
	_S("November"),
	_S("Disember")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Jan"),
	_S("Feb"),
	_S("Mac"),
	_S("Apr"),
	_S("Mei"),
	_S("Jun"),
	_S("Jul"),
	_S("Ogos"),
	_S("Sept"),
	_S("Okt"),
	_S("Nov"),
	_S("Dis")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

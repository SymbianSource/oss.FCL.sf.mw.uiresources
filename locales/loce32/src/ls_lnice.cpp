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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Icelandic language, ELOCL.15
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  
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
	_S("Mánudagur"),
	_S("Þriðjudagur"),
	_S("Miðvikudagur"),
	_S("Fimmtudagur"),
	_S("Föstudagur"),
	_S("Laugardagur"),
	_S("Sunnudagur")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Mán."),
	_S("Þri."),
	_S("Mið."),
	_S("Fim."),
	_S("Fös."),
	_S("Lau"),
	_S("Sun.")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Janúar"),
	_S("Febrúar"),
	_S("Mars"),
	_S("Apríl"),
	_S("Maí"),
	_S("Júní"),
	_S("Júlí"),
	_S("Ágúst"),
	_S("September"),
	_S("Október"),
	_S("Nóvember"),
	_S("Desember")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Jan."),
	_S("Feb."),
	_S("Mar."),
	_S("Apr."),
	_S("Maí."),
	_S("Jún."),
	_S("Júl."),
	_S("Ágú."),
	_S("Sep."),
	_S("Okt."),
	_S("Nóv."),
	_S("Des.")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("fh"),_S("eh")};

//  End of File

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
* Description:   Day & Month names, abbreviations and datesuffix table + am/pm symbols for Spanish language, ELOCL.04
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
	_S("Lun"),
	_S("Mar"),
	_S("Mié"),
	_S("Jue"),
	_S("Vie"),
	_S("Sáb"),
	_S("Dom")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Enero"),
	_S("Febrero"),
	_S("Marzo"),
	_S("Abril"),
	_S("Mayo"),
	_S("Junio"),
	_S("Julio"),
	_S("Agosto"),
	_S("Septiembre"),
	_S("Octubre"),
	_S("Noviembre"),
	_S("Diciembre")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Ene"),
	_S("Feb"),
	_S("Mar"),
	_S("Abr"),
	_S("May"),
	_S("Jun"),
	_S("Jul"),
	_S("Ago"),
	_S("Sep"),
	_S("Oct"),
	_S("Nov"),
	_S("Dic")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

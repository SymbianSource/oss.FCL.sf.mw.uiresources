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
* Description:   Day & Month names, abbreviations and datesuffixtable + am/pm symbols for Brazilian Portuguese language
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
	_S("Segunda-feira"),
	_S("Terça-feira"),
	_S("Quarta-feira"),
	_S("Quinta-feira"),
	_S("Sexta-feira"),
	_S("Sábado"),
	_S("Domingo")
	};
// The abbreviated day names
const TText * const LLanguage::DayAbbTable[KMaxDays] =
	{
	_S("Seg"),
	_S("Ter"),
	_S("Qua"),
	_S("Qui"),
	_S("Sex"),
	_S("Sáb"),
	_S("Dom")
	};
// The month names
const TText * const LLanguage::MonthTable[KMaxMonths] =
	{
	_S("Janeiro"),
	_S("Fevereiro"),
	_S("Março"),
	_S("Abril"),
	_S("Maio"),
	_S("Junho"),
	_S("Julho"),
	_S("Agosto"),
	_S("Setembro"),
	_S("Outubro"),
	_S("Novembro"),
	_S("Dezembro")
	};
// The abbreviated month names
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
	{
	_S("Jan"),
	_S("Fev"),
	_S("Mar"),
	_S("Abr"),
	_S("Mai"),
	_S("Jun"),
	_S("Jul"),
	_S("Ago"),
	_S("Set"),
	_S("Out"),
	_S("Nov"),
	_S("Dez")
	};
// The am/pm strings
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

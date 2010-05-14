/*
* Copyright (c) 1994-2009 Nokia Corporation and/or its subsidiary(-ies).
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
* Description: 
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>
#include "locl_language.h"

const TLanguage LanguageAspect::Language = ELangBrazilianPortuguese;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Tentar de novo"),								// Button 1
    _S("Parar"),								// Button 2
    _S("Volte a colocar o disco"),						// Put the card back - line1
    _S("ou haverá perda de dados"),						// Put the card back - line2
    _S("Bateria muito fraca"),						// Low power - line1
    _S("Incapaz de concluir a escrita em disco"),					// Low power - line2
    _S("Erro no disco - incapaz de concluir a escrita"),				// Disk error - line1
    _S("Tentar de novo ou haverá perda de dados"),		                        // Disk error - line2
// SoundDriver
    _S("Carrilhões"),								// Chimes
    _S("Toques"),								// Rings
    _S("Sinal"),								// Signal
// MediaDriver diskname (max 16 chars)
    _S("Internal"),								// Internal
    _S("External(01)"),							// External(01)
    _S("External(02)"),							// External(02)
    _S("External(03)"),							// External(03)
    _S("External(04)"),							// External(04)
    _S("External(05)"),							// External(05)
    _S("External(06)"),							// External(06)
    _S("External(07)"),							// External(07)
    _S("External(08)"),							// External(08)
// MediaDriver socketname (max 16 chars)
    _S("Socket(01)"),							// Socket(01)
    _S("Socket(02)"),							// Socket(02)
    _S("Socket(03)"),							// Socket(03)
    _S("Socket(04)")							// Socket(04)
    };

    
//  The suffix table
const TText * const LanguageAspect::DateSuffixTable[KMaxSuffixes] =
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
const TText * const LanguageAspect::DayTable[KMaxDays] =
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
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
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
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
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
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
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
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

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

const TLanguage LanguageAspect::Language = ELangLatinAmericanSpanish;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Reintentar"),								// Button 1
    _S("Detener"),								// Button 2
    _S("Vuelva a introducir el disco"),						// Put the card back - line1
    _S("o se perderán los datos"),						// Put the card back - line2
    _S("Carga de la batería demasiado baja"),						// Low power - line1
    _S("Imposible terminar escritura en el disco"),					// Low power - line2
    _S("Error de disco - imposible terminar escritura"),				// Disk error - line1
    _S("Reinténtelo o se perderán los datos"),		                        // Disk error - line2
// SoundDriver
    _S("Carillón"),								// Chimes
    _S("Rings"),								// Rings
    _S("Señal"),								// Signal
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
    _S("Lunes"),
    _S("Martes"),
    _S("Miércoles"),
    _S("Jueves"),
    _S("Viernes"),
    _S("Sábado"),
    _S("Domingo")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Lun."),
    _S("Mar."),
    _S("Mié."),
    _S("Jue."),
    _S("Vie."),
    _S("Sáb."),
    _S("Dom.")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("enero"),
    _S("febrero"),
    _S("marzo"),
    _S("abril"),
    _S("mayo"),
    _S("junio"),
    _S("julio"),
    _S("agosto"),
    _S("septiembre"),
    _S("octubre"),
    _S("noviembre"),
    _S("diciembre")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("ene"),
    _S("feb"),
    _S("mar"),
    _S("abr"),
    _S("may"),
    _S("jun"),
    _S("jul"),
    _S("ago"),
    _S("sep"),
    _S("oct"),
    _S("nov"),
    _S("dic")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

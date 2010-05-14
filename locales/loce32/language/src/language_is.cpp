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

const TLanguage LanguageAspect::Language = ELangIcelandic;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
     {
// Fileserver
    _S("Reyna aftur"),								// Button 1
    _S("Hætta"),								// Button 2
    _S("Láta diskinn aftur á sinn stað,"),						// Put the card back - line1
    _S("annars er hætta á að tapa gögnum"),						// Put the card back - line2
    _S("Of lítil orka í rafhlöðunni"),						// Low power - line1
    _S("Ekki hægt að skrifa á diskinn"),					// Low power - line2
    _S("Diskvilla - ekki hægt að klára vistun"),				// Disk error - line1
    _S("Reyna aftur eða gögn munu tapast"),		                        // Disk error - line2
// SoundDriver
    _S("Bjölluhljóð"),								// Chimes
    _S("Hringingar"),								// Rings
    _S("Hljóðmerki"),								// Signal
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

// The suffix table
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
    _S("Mánudagur"),
    _S("Þriðjudagur"),
    _S("Miðvikudagur"),
    _S("Fimmtudagur"),
    _S("Föstudagur"),
    _S("Laugardagur"),
    _S("Sunnudagur")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
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
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
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
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
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
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("SA"),_S("CH")};

//  End of File

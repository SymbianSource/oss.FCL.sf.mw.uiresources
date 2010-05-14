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

const TLanguage LanguageAspect::Language = ELangFinnish;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Yritä uudelleen."),								// Button 1
    _S("Lopeta"),								// Button 2
    _S("Aseta levyke takaisin asemaan"),						// Put the card back - line1
    _S("tai tiedot saattavat hävitä"),						// Put the card back - line2
    _S("Akun virta ei riitä"),						// Low power - line1
    _S("Levylle kirjoittamista ei voi suorittaa loppuun"),					// Low power - line2
    _S("Levyvirhe - kirjoittamista ei voi suorittaa loppuun"),				// Disk error - line1
    _S("Yritä uudelleen tai tiedot häviävät"),		                        // Disk error - line2
// SoundDriver
    _S("Ääni 1"),								// Chimes
    _S("Ääni 2"),								// Rings
    _S("Signaali"),								// Signal
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
    _S("maanantai"),
    _S("tiistai"),
    _S("keskiviikko"),
    _S("torstai"),
    _S("perjantai"),
    _S("lauantai"),
    _S("sunnuntai")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Ma"),
    _S("Ti"),
    _S("Ke"),
    _S("To"),
    _S("Pe"),
    _S("La"),
    _S("Su")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("tammikuu"),
    _S("helmikuu"),
    _S("maaliskuu"),
    _S("huhtikuu"),
    _S("toukokuu"),
    _S("kesäkuu"),
    _S("heinäkuu"),
    _S("elokuu"),
    _S("syyskuu"),
    _S("lokakuu"),
    _S("marraskuu"),
    _S("joulukuu")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("tammi"),
    _S("helmi"),
    _S("maalis"),
    _S("huhti"),
    _S("touko"),
    _S("kesä"),
    _S("heinä"),
    _S("elo"),
    _S("syys"),
    _S("loka"),
    _S("marras"),
    _S("joulu")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

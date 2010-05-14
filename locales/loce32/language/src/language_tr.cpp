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

const TLanguage LanguageAspect::Language = ELangTurkish;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Tekrar dene"),								// Button 1
    _S("Durdur"),								// Button 2
    _S("Diski yeniden tak\x0131" L"n"),						// Put the card back - line1
    _S("yoksa veriler kaybolacakt\x0131r."),						// Put the card back - line2
    _S("Batarya çok zay\x0131"L"f"),						// Low power - line1
    _S("Diske yazma tamamlanam\x0131yor"),					// Low power - line2
    _S("Disk hatas\x0131 - yazma tamamlanam\x0131" L"yor"),				// Disk error - line1
    _S("Tekrar deneyin, yoksa veriler kaybolacakt\x0131" L"r"),		                        // Disk error - line2
// SoundDriver
    _S("Ç\x0131" L"ng\x0131" L"rak"),								// Chimes
    _S("Zil"),								// Rings
    _S("Sinyal"),								// Signal
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
    _S("Pazartesi"),
    _S("Sal\x0131"),
    _S("Çar\x015F"L"amba"),
    _S("Per\x015F"L"embe"),
    _S("Cuma"),
    _S("Cumartesi"),
    _S("Pazar")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Pt"),
    _S("Sa"),
    _S("Ça"),
    _S("Pe"),
    _S("Cu"),
    _S("Ct"),
    _S("Pz")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("Ocak"),
    _S("\x015E" L"ubat"),
    _S("Mart"),
    _S("Nisan"),
    _S("May\x0131" L"s"),
    _S("Haziran"),
    _S("Temmuz"),
    _S("A\x011F" L"ustos"),
    _S("Eylül"),
    _S("Ekim"),
    _S("Kas\x0131" L"m"),
    _S("Aral\x0131" L"k")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("Oca"),
    _S("\x015E" L"ub"),
    _S("Mar"),
    _S("Nis"),
    _S("May"),
    _S("Haz"),
    _S("Tem"),
    _S("A\x011F" L"u"),
    _S("Eyl"),
    _S("Eki"),
    _S("Kas"),
    _S("Ara")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("ÖÖ"),_S("ÖS")};



//  End of File

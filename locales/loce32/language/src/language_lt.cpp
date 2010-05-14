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

const TLanguage LanguageAspect::Language = ELangLithuanian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Pabandykite dar kart\x0105"),								// Button 1
    _S("Sustabdykite"),								// Button 2
    _S("V\x0117l" L" \x012Fd\x0117" L"kite disk\x0105"),						// Put the card back - line1
    _S("arba duomenys bus prarasti"),						// Put the card back - line2
    _S("Baterija baigia išsikrauti"),						// Low power - line1
    _S("Ne\x012F" L"manoma \x012F" L"rašyti vis\x0173" L" duomen\x0173" L" \x012F" L" disk\x0105"),					// Low power - line2
    _S("Disko klaida - ne\x012F" L"manoma \x012F" L"rašyti vis\x0173" L" duomen\x0173"),				// Disk error - line1
    _S("Pabandykite dar kart\x0105" L", arba duomenys bus prarasti"),		                        // Disk error - line2
// SoundDriver
    _S("Varpai"),								// Chimes
    _S("Skambu\x010D" L"iai"),								// Rings
    _S("Signalas"),								// Signal
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
    _S("pirmadienis"),
    _S("antradienis"),
    _S("tre\x010D" L"iadienis"),
    _S("ketvirtadienis"),
    _S("penktadienis"),
    _S("šeštadienis"),
    _S("sekmadienis")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Pr"),
    _S("An"),
    _S("Tr"),
    _S("Kt"),
    _S("Pn"),
    _S("Št"),
    _S("Sk")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("sausis"),
    _S("vasaris"),
    _S("kovas"),
    _S("balandis"),
    _S("geguž\x0117"),
    _S("birželis"),
    _S("liepa"),
    _S("rugpj\x016Bt" L"is"),
    _S("rugs\x0117" L"jis"),
    _S("spalis"),
    _S("lapkritis"),
    _S("gruodis")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("Sau"),
    _S("Vas"),
    _S("Kov"),
    _S("Bal"),
    _S("Geg"),
    _S("Bir"),
    _S("Lie"),
    _S("Rgp"),
    _S("Rgs"),
    _S("Spl"),
    _S("Lap"),
    _S("Grd")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

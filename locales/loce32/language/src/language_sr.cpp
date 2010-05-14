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

const TLanguage LanguageAspect::Language = ELangSerbian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Ponovi"),								// Button 1
    _S("Stop"),								// Button 2
    _S("Stavi disk nazad"),						// Put the card back - line1
    _S("ili \x0107"L"e podaci biti izgubljeni"),						// Put the card back - line2
    _S("Baterija je suviše prazna"),						// Low power - line1
    _S("Ne mogu završiti upis na disk"),					// Low power - line2
    _S("Greška na disku - ne mogu završiti upis"),				// Disk error - line1
    _S("Ponovi ili \x0107"L"e podaci biti izgubljeni"),		                        // Disk error - line2
// SoundDriver
    _S("Muzika"),								// Chimes
    _S("Zvona"),								// Rings
    _S("Signali"),								// Signal
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
    _S("ponedeljak"),
    _S("utorak"),
    _S("sreda"),
    _S("\x010D"L"etvrtak"),
    _S("petak"),
    _S("subota"),
    _S("nedelja")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("pon"),
    _S("uto"),
    _S("sre"),
    _S("\x010D"L"et"),
    _S("pet"),
    _S("sub"),
    _S("ned")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("januar"),
    _S("februar"),
    _S("mart"),
    _S("april"),
    _S("maj"),
    _S("jun"),
    _S("jul"),
    _S("avgust"),
    _S("septembar"),
    _S("oktobar"),
    _S("novembar"),
    _S("decembar")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("jan"),
    _S("feb"),
    _S("mar"),
    _S("apr"),
    _S("maj"),
    _S("jun"),
    _S("jul"),
    _S("avg"),
    _S("sep"),
    _S("okt"),
    _S("nov"),
    _S("dec")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

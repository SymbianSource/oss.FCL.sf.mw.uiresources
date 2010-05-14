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

const TLanguage LanguageAspect::Language = ELangUrdu;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeEasternArabicIndic;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
        {
// Fileserver
        _S("\x067e\x06be\x0631 \x0633\x06d2"),   // Button 1
        _S("\x0631\x0648\x06a9\x0626\x06d2"),    // Button 2
        _S("Put the disk back"),                 // Put the card back - line1
        _S("or data will be lost"),              // Put the card back - line2
        _S("Battery too low"),                   // Low power - line1
        _S("Cannot complete write to disk"),     // Low power - line2
        _S("Disk error - cannot complete write"),// Disk error - line1
        _S("Retry or data will be lost"),        // Disk error - line2
// SoundDriver
        _S("Chimes"),                            // Chimes
        _S("Rings"),                             // Rings
        _S("Signal"),                            // Signal
// MediaDriver diskname (max 16 chars)
        _S("Internal"),                          // Internal
        _S("External(01)"),                      // External(01)
        _S("External(02)"),                      // External(02)
        _S("External(03)"),                      // External(03)
        _S("External(04)"),                      // External(04)
        _S("External(05)"),                      // External(05)
        _S("External(06)"),                      // External(06)
        _S("External(07)"),                      // External(07)
        _S("External(08)"),                      // External(08)
// MediaDriver socketname (max 16 chars)
        _S("Socket(01)"),                        // Socket(01)
        _S("Socket(02)"),                        // Socket(02)
        _S("Socket(03)"),                        // Socket(03)
        _S("Socket(04)")                         // Socket(04)
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
    _S("\x067e\x06cc\x0631"),
    _S("\x0645\x0646\x06af\x0644"),
    _S("\x0628\x062f\x06be"),
    _S("\x062c\x0645\x0639\x0631\x0627\x062a"),
    _S("\x062c\x0645\x0639\x06c1"),
    _S("\x06be\x0641\x062a\x06c1"),
    _S("\x0627\x062a\x0648\x0627\x0631")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x067e\x06cc\x0631"),
    _S("\x0645\x0646"),
    _S("\x0628\x062f"),
    _S("\x062c\x0631"),
    _S("\x062c\x0645"),
    _S("\x06c1\x0641"),
    _S("\x0627\x062a")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\x062c\x0646\x0648\x0631\x06cc"),
    _S("\x0641\x0631\x0648\x0631\x06cc"),
    _S("\x0645\x0627\x0631\x0686"),
    _S("\x0627\x067e\x0631\x06cc\x0644"),
    _S("\x0645\x0626\x06cc"),
    _S("\x062c\x0648\x0646"),
    _S("\x062c\x0648\x0644\x0627\x0626\x06cc"),
    _S("\x0627\x06af\x0633\x062a"),
    _S("\x0633\x062a\x0645\x0628\x0631"),
    _S("\x0627\x06a9\x062a\x0648\x0628\x0631"),
    _S("\x0646\x0648\x0645\x0628\x0631"),
    _S("\x062f\x0633\x0645\x0628\x0631")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("\x062c\x0646\x0648"),
    _S("\x0641\x0631\x0648"),
    _S("\x0645\x0627\x0631\x0686"),
    _S("\x0627\x067e\x0631\x06cc\x0644"),
    _S("\x0645\x0626\x06cc"),
    _S("\x062c\x0648\x0646"),
    _S("\x062c\x0648\x0644\x0627"),
    _S("\x0627\x06af\x0633"),
    _S("\x0633\x062a\x0645"),
    _S("\x0627\x06a9\x062a\x0648"),
    _S("\x0646\x0648\x0645"),
    _S("\x062f\x0633\x0645")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};
//  End of File

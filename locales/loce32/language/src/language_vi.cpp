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

const TLanguage LanguageAspect::Language = ELangVietnamese;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
        {
// Fileserver
        _S("Th1eed" L" l1ea1" L"i"),                                    // Button 1
        _S("D1eeb" L"ng"),                                              // Button 2
        _S("Put the disk back"),                        // Put the card back - line1
        _S("or data will be lost"),                             // Put the card back - line2
        _S("Battery too low"),                          // Low power - line1
        _S("Cannot complete write to disk"),            // Low power - line2
        _S("Disk error - cannot complete write"),               // Disk error - line1
        _S("Retry or data will be lost"),               // Disk error - line2
// SoundDriver
        _S("Chimes"),                                                   // Chimes
        _S("Rings"),                                                    // Rings
        _S("Signal"),                                                   // Signal
// MediaDriver diskname (max 16 chars)
        _S("Internal"),                                                 // Internal
        _S("External(01)"),                                     // External(01)
        _S("External(02)"),                                     // External(02)
        _S("External(03)"),                                     // External(03)
        _S("External(04)"),                                     // External(04)
        _S("External(05)"),                                     // External(05)
        _S("External(06)"),                                     // External(06)
        _S("External(07)"),                                     // External(07)
        _S("External(08)"),                                     // External(08)
// MediaDriver socketname (max 16 chars)
        _S("Socket(01)"),                                       // Socket(01)
        _S("Socket(02)"),                                       // Socket(02)
        _S("Socket(03)"),                                       // Socket(03)
        _S("Socket(04)")                                        // Socket(04)
        };
    
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
        _S("Th\x1ee9" L" hai"),
        _S("Th\x1ee9" L" ba"),
        _S("Th\x1ee9" L" t\x01b0" L""),
        _S("Th\x1ee9" L" n\x0103" L"m"),
        _S("Th\x1ee9" L" s\x00e1" L"u"),
        _S("Th\x1ee9" L" b\x1ea3" L"y"),
        _S("Ch\x1ee7" L" nh\x1ead" L"t")
        };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
        {
        _S("T2"),
        _S("T3"),
        _S("T4"),
        _S("T5"),
        _S("T6"),
        _S("T7"),
        _S("CN")
        };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
        {
        _S("Th\x00e1" L"ng 1"),
        _S("Th\x00e1" L"ng 2"),
        _S("Th\x00e1" L"ng 3"),
        _S("Th\x00e1" L"ng 4"),
        _S("Th\x00e1" L"ng 5"),
        _S("Th\x00e1" L"ng 6"),
        _S("Th\x00e1" L"ng 7"),
        _S("Th\x00e1" L"ng 8"),
        _S("Th\x00e1" L"ng 9"),
        _S("Th\x00e1" L"ng 10"),
        _S("Th\x00e1" L"ng 11"),
        _S("Th\x00e1" L"ng 12")
        };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
        {
        _S("Th1"),
        _S("Th2"),
        _S("Th3"),
        _S("Th4"),
        _S("Th5"),
        _S("Th6"),
        _S("Th7"),
        _S("Th8"),
        _S("Th9"),
        _S("Th10"),
        _S("Th11"),
        _S("Th12")
        };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("SA"),_S("CH")};

//  End of File

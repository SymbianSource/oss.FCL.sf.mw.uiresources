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

const TLanguage LanguageAspect::Language = ELangBulgarian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("\x041E\x043F\x0438\x0442\x0430\x0439\x0442\x0435 \x043F\x0430\x043A"),								// Button 1
    _S("\x0421\x0442\x043E\x043F"),								// Button 2
    _S("\x041F\x043E\x0441\x0442\x0430\x0432\x0435\x0442\x0435 \x0434\x0438\x0441\x043A\x0430 \x043E\x0431\x0440\x0430\x0442\x043D\x043E"),						// Put the card back - line1
    _S("\x0438\x043B\x0438 \x0449\x0435 \x0437\x0430\x0433\x0443\x0431\x0438\x0442\x0435 \x0434\x0430\x043D\x043D\x0438"),						// Put the card back - line2
    _S("\x0411\x0430\x0442\x0435\x0440\x0438\x044F\x0442\x0430 \x0435 \x043C\x043D\x043E\x0433\x043E \x0438\x0437\x0442\x043E\x0449\x0435\x043D\x0430"),						// Low power - line1
    _S("\x041D\x0435 \x043C\x043E\x0433\x0430 \x0434\x0430 \x0437\x0430\x0432\x044A\x0440\x0448\x0430 \x0437\x0430\x043F\x0438\x0441\x0432\x0430\x043D\x0435\x0442\x043E \x0432\x044A\x0440\x0445\x0443 \x0434\x0438\x0441\x043A\x0430"),					// Low power - line2
    _S("\x0413\x0440\x0435\x0448\x043A\x0430 \x0432 \x0434\x0438\x0441\x043A\x0430 - \x043D\x0435 \x043C\x043E\x0433\x0430 \x0434\x0430 \x0437\x0430\x0432\x044A\x0440\x0448\x0430 \x0437\x0430\x043F\x0438\x0441\x0432\x0430\x043D\x0435\x0442\x043E"),				// Disk error - line1
    _S("\x041E\x043F\x0438\x0442\x0430\x0439\x0442\x0435 \x043F\x0430\x043A \x0438\x043B\x0438 \x0449\x0435 \x0437\x0430\x0433\x0443\x0431\x0438\x0442\x0435 \x0434\x0430\x043D\x043D\x0438"),		                        // Disk error - line2
// SoundDriver
    _S("\x041A\x0430\x043C\x0431\x0430\x043D\x043A\x0438"),								// Chimes
    _S("\x0417\x0432\x044A\x043D\x0435\x043D\x0435"),								// Rings
    _S("\x0421\x0438\x0433\x043D\x0430\x043B"),								// Signal
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
    _S("\x043F\x043E\x043D\x0435\x0434\x0435\x043B\x043D\x0438\x043A"),
    _S("\x0432\x0442\x043E\x0440\x043D\x0438\x043A"),
    _S("\x0441\x0440\x044F\x0434\x0430"),
    _S("\x0447\x0435\x0442\x0432\x044A\x0440\x0442\x044A\x043A"),
    _S("\x043F\x0435\x0442\x044A\x043A"),
    _S("\x0441\x044A\x0431\x043E\x0442\x0430"),
    _S("\x043D\x0435\x0434\x0435\x043B\x044F")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("\x043F\x043D"),
    _S("\x0432\x0442"),
    _S("\x0441\x0440"),
    _S("\x0447\x0442"),
    _S("\x043F\x0442"),
    _S("\x0441\x0431"),
    _S("\x043D\x0434")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("\x044F\x043D\x0443\x0430\x0440\x0438"),
    _S("\x0444\x0435\x0432\x0440\x0443\x0430\x0440\x0438"),
    _S("\x043C\x0430\x0440\x0442"),
    _S("\x0430\x043F\x0440\x0438\x043B"),
    _S("\x043C\x0430\x0439"),
    _S("\x044E\x043D\x0438"),
    _S("\x044E\x043B\x0438"),
    _S("\x0430\x0432\x0433\x0443\x0441\x0442"),
    _S("\x0441\x0435\x043F\x0442\x0435\x043C\x0432\x0440\x0438"),
    _S("\x043E\x043A\x0442\x043E\x043C\x0432\x0440\x0438"),
    _S("\x043D\x043E\x0435\x043C\x0432\x0440\x0438"),
    _S("\x0434\x0435\x043A\x0435\x043C\x0432\x0440\x0438")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("\x044F\x043D"),
    _S("\x0444\x0435\x0432"),
    _S("\x043C\x0430\x0440"),
    _S("\x0430\x043F\x0440"),
    _S("\x043C\x0430\x0439"),
    _S("\x044E\x043D\x0438"),
    _S("\x044E\x043B\x0438"),
    _S("\x0430\x0432\x0433"),
    _S("\x0441\x0435\x043F\x0442"),
    _S("\x043E\x043A\x0442"),
    _S("\x043D\x043E\x0435\x043C"),
    _S("\x0434\x0435\x043A")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

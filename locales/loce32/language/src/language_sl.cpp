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

const TLanguage LanguageAspect::Language = ELangSlovenian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Poskusi znova"),								// Button 1
    _S("Ustavi"),								// Button 2
    _S("Nazaj vstavite disk,"),						// Put the card back - line1
    _S("druga\x010D" L"e bodo podatki izgubljeni"),						// Put the card back - line2
    _S("Baterija je prazna"),						// Low power - line1
    _S("Zapisovanja na disk ne morem doko\x010D" L"ati"),					// Low power - line2
    _S("Napaka na disku - zapisovanja ne morem dokon\x010D" L"ati"),				// Disk error - line1
    _S("Poskusite znova, druga\x010D" L"e bodo podatki izgubljeni"),		                        // Disk error - line2
// SoundDriver
    _S("Zvon\x010D" L"ki"),								// Chimes
    _S("Zvonjenje"),								// Rings
    _S("Signal"),								// Signal
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
    _S("ponedeljek"),
    _S("torek"),
    _S("sreda"),
    _S("\x010D" L"etrtek"),
    _S("petek"),
    _S("sobota"),
    _S("nedelja")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("pon"),
    _S("tor"),
    _S("sre"),
    _S("\x010D" L"et"),
    _S("pet"),
    _S("sob"),
    _S("ned")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("januar"),
    _S("februar"),
    _S("marec"),
    _S("april"),
    _S("maj"),
    _S("junij"),
    _S("julij"),
    _S("avgust"),
    _S("september"),
    _S("oktober"),
    _S("november"),
    _S("december")
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

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

const TLanguage LanguageAspect::Language = ELangTagalog;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Subukan Uli"),								// Button 1
    _S("Itigil"),								// Button 2
    _S("Ibalik muli ang disk"),						// Put the card back - line1
    _S("o mawawala ang data"),						// Put the card back - line2
    _S("Baterya ay mahina na"),						// Low power - line1
    _S("Di makumpleto pagsulat sa disk"),					// Low power - line2
    _S("Disk error - di makumpleto pagsulat dito"),				// Disk error - line1
    _S("Subukan uli o mawawala ang data"),		                        // Disk error - line2
// SoundDriver
    _S("Chimes"),								// Chimes
    _S("Mga ring"),								// Rings
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
    _S("Miyerkules"),
    _S("Huwebes"),
    _S("Biyernes"),
    _S("Sabado"),
    _S("Linggo")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Ln"),
    _S("Mr"),
    _S("Miy"),
    _S("Hw"),
    _S("Biy"),
    _S("Sb"),
    _S("Lin")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("Enero"),
    _S("Pebrero"),
    _S("Marso"),
    _S("Abril"),
    _S("Mayo"),
    _S("Hunyo"),
    _S("Hulyo"),
    _S("Agosto"),
    _S("Setyembre"),
    _S("Oktubre"),
    _S("Nobyembre"),
    _S("Disyembre")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("Ene"),
    _S("Peb"),
    _S("Mar"),
    _S("Abr"),
    _S("Mayo"),
    _S("Hun"),
    _S("Hul"),
    _S("Ago"),
    _S("Set"),
    _S("Okt"),
    _S("Nob"),
    _S("Dis")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

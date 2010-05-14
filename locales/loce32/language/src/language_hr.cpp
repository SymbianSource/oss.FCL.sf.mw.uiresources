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

const TLanguage LanguageAspect::Language = ELangCroatian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Pokušajte ponovo"),							    	// Button 1
    _S("Stani"),								            // Button 2
    _S("Stavite natrag disk"),						        // Put the card back - line1
    _S("ili \x0107"L"e se podaci izgubiti"),			    // Put the card back - line2
    _S("Akumulator preslab"),						        // Low power - line1
    _S("Ne mogu završiti upis na disk"),					// Low power - line2
    _S("Greška diska - ne mogu završiti upis"),				// Disk error - line1
    _S("Pokušajte ponovo ili \x0107"L"e se podaci izgubiti"),  // Disk error - line2
// SoundDriver
    _S("Zvono sata"),								// Chimes
    _S("Telefonsko zvono"),								// Rings
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
    _S("ponedjeljak"),
    _S("utorak"),
    _S("srijeda"),
    _S("\x010D"L"etvrtak"),
    _S("petak"),
    _S("subota"),
    _S("nedjelja")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("pon"),
    _S("uto"),
    _S("sri"),
    _S("\x010D"L"et"),
    _S("pet"),
    _S("sub"),
    _S("ned")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("sije\x010D"L"anj"),
    _S("velja\x010D"L"a"),
    _S("ožujak"),
    _S("travanj"),
    _S("svibanj"),
    _S("lipanj"),
    _S("srpanj"),
    _S("kolovoz"),
    _S("rujan"),
    _S("listopad"),
    _S("studeni"),
    _S("prosinac")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("sij"),
    _S("velj"),
    _S("ožu"),
    _S("tra"),
    _S("svi"),
    _S("lip"),
    _S("srp"),
    _S("kol"),
    _S("ruj"),
    _S("lis"),
    _S("stu"),
    _S("pro")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};


//  End of File

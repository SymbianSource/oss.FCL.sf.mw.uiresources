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

const TLanguage LanguageAspect::Language = ELangEstonian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Proovi uuesti"),						    // Button 1
    _S("Stopp"),								    // Button 2
    _S("Pane ketas tagasi,"),						// Put the card back - line1
    _S("muidu andmed kaovad"),						// Put the card back - line2
    _S("Aku liiga tühi"),						    // Low power - line1
    _S("Ei suuda kettale kirjutamist lõpuni viia"),			     // Low power - line2
    _S("Kettatõrge - ei suuda kirjutamist lõpuni viia"),	     // Disk error - line1
    _S("Proovi uuesti, muidu andmed kaovad"),		             // Disk error - line2
// SoundDriver
    _S("Kellahelin"),								// Chimes
    _S("Helinad"),								// Rings
    _S("Signaal"),								// Signal
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
    _S("Esmaspäev"),
    _S("Teisipäev"),
    _S("Kolmapäev"),
    _S("Neljapäev"),
    _S("Reede"),
    _S("Laupäev"),
    _S("Pühapäev")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("E"),
    _S("T"),
    _S("K"),
    _S("N"),
    _S("R"),
    _S("L"),
    _S("P")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("jaanuar"),
    _S("veebruar"),
    _S("märts"),
    _S("aprill"),
    _S("mai"),
    _S("juuni"),
    _S("juuli"),
    _S("august"),
    _S("september"),
    _S("oktoober"),
    _S("november"),
    _S("detsember")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("jaan"),
    _S("veebr"),
    _S("märts"),
    _S("apr"),
    _S("mai"),
    _S("juuni"),
    _S("juuli"),
    _S("aug"),
    _S("sept"),
    _S("okt"),
    _S("nov"),
    _S("dets")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

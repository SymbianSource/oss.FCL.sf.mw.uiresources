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

const TLanguage LanguageAspect::Language = ELangItalian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Riprova"),								// Button 1
    _S("Interrompi"),								// Button 2
    _S("Reinserire il disco"),						// Put the card back - line1
    _S("o verranno persi i dati"),						// Put the card back - line2
    _S("Batteria quasi scarica"),						// Low power - line1
    _S("Impossibile completare la scrittura su disco"),					// Low power - line2
    _S("Errore del disco: impossibile completare la scrittura"),				// Disk error - line1
    _S("Riprovare o i dati verranno persi"),		                        // Disk error - line2
// SoundDriver
    _S("Carillon"),								// Chimes
    _S("Squilli"),								// Rings
    _S("Segnale"),								// Signal
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
    _S("lunedì"),
    _S("martedì"),
    _S("mercoledì"),
    _S("giovedì"),
    _S("venerdì"),
    _S("sabato"),
    _S("domenica")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Lun"),
    _S("Mar"),
    _S("Mer"),
    _S("Gio"),
    _S("Ven"),
    _S("Sab"),
    _S("Dom")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("gennaio"),
    _S("febbraio"),
    _S("marzo"),
    _S("aprile"),
    _S("maggio"),
    _S("giugno"),
    _S("luglio"),
    _S("agosto"),
    _S("settembre"),
    _S("ottobre"),
    _S("novembre"),
    _S("dicembre")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("gen"),
    _S("feb"),
    _S("mar"),
    _S("apr"),
    _S("mag"),
    _S("giu"),
    _S("lug"),
    _S("ago"),
    _S("set"),
    _S("ott"),
    _S("nov"),
    _S("dic")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

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

const TLanguage LanguageAspect::Language = ELangHungarian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
     {
    // Fileserver
    _S("Ismét"),								// Button 1
    _S("Leállít"),								// Button 2
    _S("Tegye vissza a lemezt"),						// Put the card back - line1
    _S("vagy elvesznek az adatok"),						// Put the card back - line2
    _S("Akkumulátor töltése túl alacsony"),						// Low power - line1
    _S("Lemezre írás nem lehetséges"),					// Low power - line2
    _S("Lemezhiba. Írás nem lehetséges"),				// Disk error - line1
    _S("Ismét, vagy elvesznek az adatok"),		            // Disk error - line2
// SoundDriver
    _S("Harangszó"),								// Chimes
    _S("Csengetés"),								// Rings
    _S("Jelzés"),								// Signal
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

//  End of File
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
    _S("hétf\x0151"),
    _S("kedd"),
    _S("szerda"),
    _S("csütörtök"),
    _S("péntek"),
    _S("szombat"),
    _S("vasárnap")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("h"),
    _S("k"),
    _S("sze"),
    _S("cs"),
    _S("p"),
    _S("szo"),
    _S("v")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("január"),
    _S("február"),
    _S("március"),
    _S("április"),
    _S("május"),
    _S("június"),
    _S("július"),
    _S("augusztus"),
    _S("szeptember"),
    _S("október"),
    _S("november"),
    _S("december")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("jan."),
    _S("febr."),
    _S("márc."),
    _S("ápr."),
    _S("máj."),
    _S("jún."),
    _S("júl."),
    _S("aug."),
    _S("szept."),
    _S("okt."),
    _S("nov."),
    _S("dec.")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("de."),_S("du.")};

//  End of File

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
    _S("Ism�t"),								// Button 1
    _S("Le�ll�t"),								// Button 2
    _S("Tegye vissza a lemezt"),						// Put the card back - line1
    _S("vagy elvesznek az adatok"),						// Put the card back - line2
    _S("Akkumul�tor t�lt�se t�l alacsony"),						// Low power - line1
    _S("Lemezre �r�s nem lehets�ges"),					// Low power - line2
    _S("Lemezhiba. �r�s nem lehets�ges"),				// Disk error - line1
    _S("Ism�t, vagy elvesznek az adatok"),		            // Disk error - line2
// SoundDriver
    _S("Harangsz�"),								// Chimes
    _S("Csenget�s"),								// Rings
    _S("Jelz�s"),								// Signal
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
    _S("h�tf\x0151"),
    _S("kedd"),
    _S("szerda"),
    _S("cs�t�rt�k"),
    _S("p�ntek"),
    _S("szombat"),
    _S("vas�rnap")
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
    _S("janu�r"),
    _S("febru�r"),
    _S("m�rcius"),
    _S("�prilis"),
    _S("m�jus"),
    _S("j�nius"),
    _S("j�lius"),
    _S("augusztus"),
    _S("szeptember"),
    _S("okt�ber"),
    _S("november"),
    _S("december")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("jan."),
    _S("febr."),
    _S("m�rc."),
    _S("�pr."),
    _S("m�j."),
    _S("j�n."),
    _S("j�l."),
    _S("aug."),
    _S("szept."),
    _S("okt."),
    _S("nov."),
    _S("dec.")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("de."),_S("du.")};

//  End of File

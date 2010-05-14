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

const TLanguage LanguageAspect::Language = ELangFrench;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Ressayer"),					                       // Button 1
    _S("Arr�ter"),					        	       // Button 2
    _S("R�ins�rer le disque"),			                       // Put the card back - line1
    _S("ou des donn�es vont �tre perdues"),			                       // Put the card back - line2
    _S("Batterie trop faible"),			                       // Low power - line1
    _S("Impossible de terminer l'�criture sur disque"),		                       // Low power - line2
    _S("Erreur de disque - impossible de terminer l'�criture"),	                       // Disk error - line1
    _S("\x0052\x00E9\x0065\x0073\x0073\x0061\x0079\x0065\x007A\x0020\x006F\x0075\x0020\x0064\x0065\x0073\x0020\x0064\x006F\x006E\x006E\x00E9\x0065\x0073\x0020\x0073\x0065\x0072\x006F\x006E\x0074\x0020\x0070\x0065\x0072\x0064\x0075\x0065\x0073"),		                       // Disk error - line2
// SoundDriver
    _S("Carillon"),								// Chimes
    _S("Sonneries"),								// Rings
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
    _S("lundi"),
    _S("mardi"),
    _S("mercredi"),
    _S("jeudi"),
    _S("vendredi"),
    _S("samedi"),
    _S("dimanche")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("lun"),
    _S("mar"),
    _S("mer"),
    _S("jeu"),
    _S("ven"),
    _S("sam"),
    _S("dim")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("janvier"),
    _S("f�vrier"),
    _S("mars"),
    _S("avril"),
    _S("mai"),
    _S("juin"),
    _S("juillet"),
    _S("ao�t"),
    _S("septembre"),
    _S("octobre"),
    _S("novembre"),
    _S("d�cembre")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("jan"),
    _S("f�v"),
    _S("mar"),
    _S("avr"),
    _S("mai"),
    _S("juin"),
    _S("juil"),
    _S("ao�"),
    _S("sep"),
    _S("oct"),
    _S("nov"),
    _S("d�c")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

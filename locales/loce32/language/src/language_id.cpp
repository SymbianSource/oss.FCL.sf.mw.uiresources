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

const TLanguage LanguageAspect::Language = ELangIndonesian;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS  
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
    {
// Fileserver
    _S("Coba lagi"),								// Button 1
    _S("Berhenti"),								// Button 2
    _S("Kembalikan disk"),						// Put the card back - line1
    _S("atau data akan hilang"),						// Put the card back - line2
    _S("Baterai lemah"),						// Low power - line1
    _S("Tidak dapat menyelesaikan disk"),					// Low power - line2
    _S("Disk salah - tidak dapat menyelesaikan"),				// Disk error - line1
    _S("Coba lagi atau data akan hilang"),		                        // Disk error - line2
// SoundDriver
    _S("Chimes"),								// Chimes
    _S("Dering"),								// Rings
    _S("Sinyal"),								// Signal
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
    _S("Senin"),
    _S("Selasa"),
    _S("Rabu"),
    _S("Kamis"),
    _S("Jumat"),
    _S("Sabtu"),
    _S("Minggu")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("Sen"),
    _S("Sel"),
    _S("Rab"),
    _S("Kam"),
    _S("Jum"),
    _S("Sab"),
    _S("Mg")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("Januari"),
    _S("Februari"),
    _S("Maret"),
    _S("April"),
    _S("Mei"),
    _S("Juni"),
    _S("Juli"),
    _S("Agustus"),
    _S("September"),
    _S("Oktober"),
    _S("November"),
    _S("Desember")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("Jan"),
    _S("Feb"),
    _S("Mar"),
    _S("Apr"),
    _S("Mei"),
    _S("Jun"),
    _S("Jul"),
    _S("Agust"),
    _S("Sep"),
    _S("Okt"),
    _S("Nov"),
    _S("Des")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};



//  End of File

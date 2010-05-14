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

const TLanguage LanguageAspect::Language = ELangIcelandic;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
     {
// Fileserver
    _S("Reyna aftur"),								// Button 1
    _S("H�tta"),								// Button 2
    _S("L�ta diskinn aftur � sinn sta�,"),						// Put the card back - line1
    _S("annars er h�tta � a� tapa g�gnum"),						// Put the card back - line2
    _S("Of l�til orka � rafhl��unni"),						// Low power - line1
    _S("Ekki h�gt a� skrifa � diskinn"),					// Low power - line2
    _S("Diskvilla - ekki h�gt a� kl�ra vistun"),				// Disk error - line1
    _S("Reyna aftur e�a g�gn munu tapast"),		                        // Disk error - line2
// SoundDriver
    _S("Bj�lluhlj��"),								// Chimes
    _S("Hringingar"),								// Rings
    _S("Hlj��merki"),								// Signal
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
    _S("M�nudagur"),
    _S("�ri�judagur"),
    _S("Mi�vikudagur"),
    _S("Fimmtudagur"),
    _S("F�studagur"),
    _S("Laugardagur"),
    _S("Sunnudagur")
    };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
    {
    _S("M�n."),
    _S("�ri."),
    _S("Mi�."),
    _S("Fim."),
    _S("F�s."),
    _S("Lau"),
    _S("Sun.")
    };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
    {
    _S("Jan�ar"),
    _S("Febr�ar"),
    _S("Mars"),
    _S("Apr�l"),
    _S("Ma�"),
    _S("J�n�"),
    _S("J�l�"),
    _S("�g�st"),
    _S("September"),
    _S("Okt�ber"),
    _S("N�vember"),
    _S("Desember")
    };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
    {
    _S("Jan."),
    _S("Feb."),
    _S("Mar."),
    _S("Apr."),
    _S("Ma�."),
    _S("J�n."),
    _S("J�l."),
    _S("�g�."),
    _S("Sep."),
    _S("Okt."),
    _S("N�v."),
    _S("Des.")
    };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("SA"),_S("CH")};

//  End of File

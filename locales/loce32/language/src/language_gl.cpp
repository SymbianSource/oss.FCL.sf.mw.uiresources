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

const TLanguage LanguageAspect::Language = ELangGalician;
const TLanguage LanguageAspect::LanguageDowngrade[3] = {ELangNone, ELangNone, ELangNone};
const TDigitType LanguageAspect::DigitType = EDigitTypeWestern;
const TFatUtilityFunctions* const LanguageAspect::FatUtilityFunctions = NULL;
    


//  LOCAL CONSTANTS AND MACROS
const TText * const LanguageAspect::MsgTable[ELocaleMessages_LastMsg] =
     {
    // Fileserver
     _S("Reintentar"),                                     // Button 1
     _S("Detener"),                                        // Button 2
     _S("Vuelva a introducir el disco"),                   // Put the card back - line1
     _S("o se perder\x00e1n los datos"),                   // Put the card back - line2
     _S("Carga de la bater\x00ed"L"a demasiado baja"),     // Low power - line1
     _S("Imposible terminar escritura en el disco"),       // Low power - line2
     _S("Error de disco - imposible terminar escritura"),  // Disk error - line1
     _S("Reint\x00e9ntelo o se perder\x00e1n los datos"),  // Disk error - line2
    // SoundDriver
     _S("Carill\x00f3n"),                                  // Chimes
     _S("Rings"),                                          // Rings
     _S("Se\x00f1"L"al"),                                  // Signal
    // MediaDriver diskname (max 16 chars)
     _S("Internal"),                                       // Internal
     _S("External(01)"),                                   // External(01)
     _S("External(02)"),                                   // External(02)
     _S("External(03)"),                                   // External(03)
     _S("External(04)"),                                   // External(04)
     _S("External(05)"),                                   // External(05)
     _S("External(06)"),                                   // External(06)
     _S("External(07)"),                                   // External(07)
     _S("External(08)"),                                   // External(08)
    // MediaDriver socketname (max 16 chars)
     _S("Socket(01)"),                                     // Socket(01)
     _S("Socket(02)"),                                     // Socket(02)
     _S("Socket(03)"),                                     // Socket(03)
     _S("Socket(04)")                                      // Socket(04)
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
         _S("Luns"),
         _S("Martes"),
         _S("M\x00e9rcores"),
         _S("Xoves"),
         _S("Venres"),
         _S("S\x00e1"L"bado"),
         _S("Domingo")
         };
// The abbreviated day names
const TText * const LanguageAspect::DayAbbTable[KMaxDays] =
         {
         _S("Lu."),
         _S("Ma."),
         _S("M\x00e9."),
         _S("Xo."),
         _S("Ve."),
         _S("S\x00e1."),
         _S("Do.")
         };
// The month names
const TText * const LanguageAspect::MonthTable[KMaxMonths] =
         {
         _S("Xaneiro"),
         _S("Febreiro"),
         _S("Marzo"),
         _S("Abril"),
         _S("Maio"),
         _S("Xu\x00f1o"),
         _S("Xullo"),
         _S("Agosto"),
         _S("Setembro"),
         _S("Outubro"),
         _S("Novembro"),
         _S("Decembro")
         };
// The abbreviated month names
const TText * const LanguageAspect::MonthAbbTable[KMaxMonths] =
         {
         _S("Xan."),
         _S("Feb."),
         _S("Mar."),
         _S("Abr."),
         _S("Maio"),
         _S("Xu\x00f1."),
         _S("Xul."),
         _S("Ago."),
         _S("Set."),
         _S("Out."),
         _S("Nov."),
         _S("Dec.")
         };
// The am/pm strings
const TText * const LanguageAspect::AmPmTable[KMaxAmPms] = {_S("SA"),_S("CH")};

//  End of File

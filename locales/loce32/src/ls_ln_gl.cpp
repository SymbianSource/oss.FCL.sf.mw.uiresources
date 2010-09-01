/*
* Copyright (c) 2005 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Day & Month names, abbreviations and datesuffix table
*                + am/pm symbols for Galician, Epoc code 402
*
*/



//  EXTERNAL RESOURCES

//  Include Files

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS

// The suffix table
const TText * const LLanguage::DateSuffixTable[KMaxSuffixes] =
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
const TText * const LLanguage::DayTable[KMaxDays] =
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
const TText * const LLanguage::DayAbbTable[KMaxDays] =
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
const TText * const LLanguage::MonthTable[KMaxMonths] =
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
const TText * const LLanguage::MonthAbbTable[KMaxMonths] =
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
const TText * const LLanguage::AmPmTable[KMaxAmPms] = {_S("AM"),_S("PM")};

//  End of File

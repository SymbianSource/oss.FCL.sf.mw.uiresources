/*
* Copyright (c) 2002, 2003, 2004 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   ELOCL.DLL for Thai, ELOCL.161
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>
#include <complocl.h>
#include <languages.hrh>

//  LOCAL CONSTANTS AND MACROS  

// The configuration data
const TLanguage LLocaleData::Language = (const enum TLanguage)KLangThaiEnglish;
const TInt LLocaleData::CountryCode = 66;   
const TInt LLocaleData::UniversalTimeOffset = 7;    
const TDateFormat LLocaleData::DateFormat = EDateEuropean;
const TTimeFormat LLocaleData::TimeFormat = ETime12;
const TLocalePos LLocaleData::CurrencySymbolPosition = ELocaleBefore;
const TBool LLocaleData::CurrencySpaceBetween = EFalse; 
const TInt LLocaleData::CurrencyDecimalPlaces = 2; 
const TLocale::TNegativeCurrencyFormat LLocaleData::NegativeCurrencyFormat=TLocale::TNegativeCurrencyFormat(TLocale::ELeadingMinusSign); // replacing CurrencyNegativeInBrackets
const TBool LLocaleData::CurrencyTriadsAllowed = ETrue;
const TText * const LLocaleData::ThousandsSeparator = _S(",");
const TText * const LLocaleData::DecimalSeparator = _S(".");
const TText * const LLocaleData::DateSeparator[KMaxDateSeparators] = {_S(""),_S("/"),_S("/"),_S("")};
const TText * const LLocaleData::TimeSeparator[KMaxTimeSeparators] = {_S(""),_S(":"),_S(":"),_S("")};
const TLocalePos LLocaleData::AmPmSymbolPosition = ELocaleAfter;
const TBool LLocaleData::AmPmSpaceBetween = ETrue;
const TDaylightSavingZone LLocaleData::HomeDaylightSavingZone = EDstNone;   
const TUint LLocaleData::WorkDays = 0x1f; // monday - friday
const TText * const LLocaleData::CurrencySymbol = _S("\x0E3F");
const TText* const LLocaleData::ShortDateFormatSpec = _S("%F%/0%D%/1%M%/2%Y%/3"); // no leading zeros
const TText* const LLocaleData::LongDateFormatSpec = _S("%F%D%X %N %Y"); // leading zeros in day
const TText* const LLocaleData::TimeFormatSpec = _S("%F%:0%*I%:1%*T%:2%*S%:3 %B"); // am/pm -symbol included
const TFatUtilityFunctions* const LLocaleData::FatUtilityFunctions = NULL;
const TDay LLocaleData::StartOfWeek = EMonday;
const TClockFormat LLocaleData::ClockFormat = EClockAnalog;
const TUnitsFormat LLocaleData::UnitsGeneral = EUnitsImperial;
const TUnitsFormat LLocaleData::UnitsDistanceShort = EUnitsImperial;
const TUnitsFormat LLocaleData::UnitsDistanceLong = EUnitsImperial;
const TUint LLocaleData::ExtraNegativeCurrencyFormatFlags = 0;

//  End of File

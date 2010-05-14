/*
* Copyright (c) 2010 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   elocl_reg.682 for Saudi Arabia region
*
*/

//  Include Files  

#include <kernel/ls_std.h>
#include "locl_region.h"

//  REGION CONSTANTS AND MACROS  

// The configuration data
const TInt RegionAspect::CountryCode = 966;
const TInt RegionAspect::UniversalTimeOffset = 0;
const TDateFormat RegionAspect::DateFormat = EDateEuropean;
const TTimeFormat RegionAspect::TimeFormat = ETime12;
const TLocalePos RegionAspect::CurrencySymbolPosition = ELocaleAfter;
const TBool RegionAspect::CurrencySpaceBetween = ETrue;
const TInt RegionAspect::CurrencyDecimalPlaces = 1;
const TLocale::TNegativeCurrencyFormat RegionAspect::NegativeCurrencyFormat=TLocale::TNegativeCurrencyFormat(TLocale::ELeadingMinusSign);
const TBool RegionAspect::CurrencyTriadsAllowed = ETrue;
const TText * const RegionAspect::ThousandsSeparator = _S("");
const TText * const RegionAspect::DecimalSeparator = _S(",");
const TText * const RegionAspect::DateSeparator[KMaxDateSeparators] = {_S(""),_S("/"),_S("/"),_S("")};
const TText * const RegionAspect::TimeSeparator[KMaxTimeSeparators] = {_S(""),_S(":"),_S(":"),_S("")};
const TLocalePos RegionAspect::AmPmSymbolPosition = ELocaleAfter;
const TBool RegionAspect::AmPmSpaceBetween = ETrue;
const TDaylightSavingZone RegionAspect::HomeDaylightSavingZone = EDstNone;
const TUint RegionAspect::WorkDays = 0x67; // saturday - wednesday
const TText * const RegionAspect::CurrencySymbol = _S("\x0631\x064A\x0627\x0644");
const TText* const RegionAspect::ShortDateFormatSpec = _S("%F%/0%Y%/1%M%/2%D%/3"); // no leading zeros 4-digit year yyyy/mm/dd
const TText* const RegionAspect::LongDateFormatSpec = _S("%F%D %Y %N"); // 3 2003 xxxxx
const TText* const RegionAspect::TimeFormatSpec = _S("%F%:0%*I%:1%*T%:2%*S%:3 %B"); //2:01:01
const TDay RegionAspect::StartOfWeek = ESaturday;
const TClockFormat RegionAspect::ClockFormat = EClockAnalog;
const TUnitsFormat RegionAspect::UnitsGeneral = EUnitsMetric;
const TUnitsFormat RegionAspect::UnitsDistanceShort = EUnitsMetric;
const TUnitsFormat RegionAspect::UnitsDistanceLong = EUnitsMetric;
const TUint16 RegionAspect::RegionCode = 682;
const TUint RegionAspect::ExtraNegativeCurrencyFormatFlags = 0;

//  End of File

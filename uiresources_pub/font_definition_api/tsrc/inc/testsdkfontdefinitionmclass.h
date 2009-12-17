/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   font_definition_api
*
*/


#ifndef C_TESTSDKFONTDEFINITIONMCLASS_H
#define C_TESTSDKFONTDEFINITIONMCLASS_H
//  INCLUDES
#include <aknfontspecification.h>
#include <gdi.h>
/**
*  CTestSDKFontDefinition test class for STIF Test Framework TestScripter.
*  @since S60 5.0
*/
class TestMGraphicsDeviceMap : public CBase,public MGraphicsDeviceMap
    {
public:
    /**
    * HorizontalTwipsToPixels
    */
    TInt HorizontalTwipsToPixels(TInt aTwips) const;
    /**
    * VerticalTwipsToPixels
    */
    TInt VerticalTwipsToPixels(TInt aTwips) const;
    /**
    * HorizontalPixelsToTwips
    */
    TInt HorizontalPixelsToTwips(TInt aPixels) const;
    /**
    * VerticalPixelsToTwips
    */
    TInt VerticalPixelsToTwips(TInt aPixels) const;
    /**
    * GetNearestFontInTwips
    */
    TInt GetNearestFontInTwips(CFont*& aFont,const TFontSpec& aFontSpec);
    /**
    * GetNearestFontInTwips
    */
    void ReleaseFont(CFont* aFont);
    };
#endif /*C_TESTSDKFONTDEFINITIONMCLASS_H*/

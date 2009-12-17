/*
* Copyright (c) 2006-2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Image decoding and scaling utility class.
*
*/


#ifndef AKNSSRVWALLPAPERSCALING_H
#define AKNSSRVWALLPAPERSCALING_H

#include <imageconversion.h>
#include <bitmaptransforms.h>
#include <SVGRequestObserver.h>

class CSvgEngineInterfaceImpl;
class MSvgError;

/*
* SVG Image decoder.
*/
NONSHARABLE_CLASS(CAknsSrvSVGImageDecoder) : public CBase, public MSvgRequestObserver
    {
    public:
        static CAknsSrvSVGImageDecoder* NewL();
        ~CAknsSrvSVGImageDecoder();
        void DecodeImageL( const TDesC& aFilename,
            const TSize& aTargetSize,
            CFbsBitmap*& aBitmap,
            CFbsBitmap*& aMask );
        void LeaveIfErrorL( MSvgError* aError );
    protected:
        CAknsSrvSVGImageDecoder();
        void ConstructL();
    private:
        void UpdateScreen();
        TBool ScriptCall( const TDesC& aScript,CSvgElementImpl* aCallerElement );
        TInt FetchImage( const TDesC& aUri, RFs& aSession, RFile& aFileHandle );
        void GetSmilFitValue( TDes& aSmilValue );
        void UpdatePresentation( const TInt32&  aNoOfAnimation );
        TInt FetchFont( const TDesC& aUri, RFs& aSession, RFile& aFileHandle );
    private:
        CFbsBitmap* iBitmap;
        CFbsBitmap* iMask;
        CFbsBitmap* iDummyBitmap;
        CSvgEngineInterfaceImpl* iSvgEngine;
    };

/*
* Non-SVG Image decoder.
*/
NONSHARABLE_CLASS(CAknsSrvImageConverter) : public CActive
    {
    public:
        static CAknsSrvImageConverter* NewL();
        ~CAknsSrvImageConverter();

        static void DecodeImageL(
            RFs& aRFs,
            const TDesC& aFilename,
            const TSize& aTargetSize,
            CFbsBitmap*& aBitmap,
            CFbsBitmap*& aMask,
            const TSize& aMaxSize );

        void ScaleAndCropImageL(
            CFbsBitmap*& aBitmap,
            const TSize& aTargetSize );
        void DoCancel();
        void RunL();

    protected:
        CAknsSrvImageConverter();
        void ConstructL();
    private:
        void BeginWait();
        void EndWait();

    private:
        CBitmapScaler* iBitmapScaler;
        TInt iConversionError;
        CActiveSchedulerWait iWait;
        TBool iWaitActive;
    };

#endif


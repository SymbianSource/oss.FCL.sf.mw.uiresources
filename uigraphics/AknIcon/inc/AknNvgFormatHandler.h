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
* Description:  
*
*
*/



#ifndef AKN_NVG_FORMAT_HANDLER_H
#define AKN_NVG_FORMAT_HANDLER_H

// INCLUDES
#include <e32std.h>
#include <nvg.h>
#include "AknIconFormatHandler.h"
#include <flogger.h>

_LIT( KNVGFileLoggingDir, "nvg" );
_LIT( KNVGFileLog, "nvg-log.txt" );

static const TUid  KUidNvgProprietaryFormat = { 968435518 };
// FORWARD DECLARATIONS

class CFbsBitmap;
class MAknIconChangeObserver;
// CLASS DECLARATION

/**
* CAknNvgFormatHandler
*/
NONSHARABLE_CLASS(CAknNvgFormatHandler) :
    public CBase,
    public MAknIconFormatHandler
    {
    public:  // Constructors and destructor

        static CAknNvgFormatHandler* NewL();
        ~CAknNvgFormatHandler();

    public: // From MAknIconFormatHandler

        void SetScaleMode( TScaleMode aMode );

        void SetRotation( TInt aAngle );

        void GetContentDimensionsL( TAknContentDimensions& aContentDimensions );

        void SetObserver( MAknIconChangeObserver *aObserver );

        void SupportedDisplayMode(
            TDisplayMode& aMode, TDisplayMode aPreferredMode );

        void PrepareIconL( const TDesC8& aIconData, TInt& aHandle );

        void UsePreparedIconL( TInt aHandle );

        void RenderPreparedIconL(
            CFbsBitmap* aBitmap,
            CFbsBitmap* aMask, TSize Bitmapsize=TSize(0,0),
            TDisplayMode Bitmapdepth = ENone, TDisplayMode Maskdepth = ENone,
            TRgb aColor = TRgb(0,0,0), TBool aMarginFlag = EFalse );

        void UnprepareIcon( TInt aHandle );

        void SetAnimated( TBool aAnimated );

        TInt IconFormatType();
        
/*    private: // From MSvgRequestObserver
    
		void UpdateScreen();
		TBool ScriptCall( const TDesC& aScript,CSvgElementImpl* aCallerElement );
	    TInt FetchImage( const TDesC& aUri, RFs& aSession, RFile& aFileHandle );
	    void UpdatePresentation(const TInt32&  aNoOfAnimation);
	    TInt FetchFont( const TDesC& aUri, RFs& aSession, RFile& aFileHandle );
*/
    private: // New functions

        void InitializeEngineL();
    void CheckHandleActivatedL( CFbsBitmap* aBitmap, CFbsBitmap* aMask );
    static void CleanupNullMaskPointer( TAny* aParam );
        
        void SetEngineScaleMode();

    void FormCommonHeader(const CFbsBitmap *aBitmap, TBool isMask = EFalse,TRgb aColor=TRgb(0,0,0), TBool aIsAppIcon=EFalse);
    private: // Private constructors
        CAknNvgFormatHandler();
        void ConstructL();

    private: // Data

		 CNvgEngine* iNvgEngine;
        MAknIconChangeObserver* iObserver;
        CFbsBitmap* iDummyBitmap; // TODO: remove when can
        CFbsBitmap* iMask; // not owned
        TInt iMode;
        TInt iAngle;
        TBool iAnimated;

        TInt iHandle;

        enum
            {
            ENotActivated = 0,
            EActivated = 1,
            EActivatedWithFrameBuffer = 2
            };

        TInt iHandleActivationStatus;
        public:
        RArray<TPtrC8> iIconData;
        HBufC8 *iData;
    };

#endif      // AKN_NVG_FORMAT_HANDLER_H
            
// End of File

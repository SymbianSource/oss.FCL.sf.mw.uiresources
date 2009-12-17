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
* Description:  Format Handler for NGA(will create an extended bitmap)
*
*
*/



#ifndef AKN_NGA_FORMAT_HANDLER_H
#define AKN_NGA_FORMAT_HANDLER_H

// INCLUDES
#include <e32std.h>
#include <SVGEngineInterfaceImpl.h>
#include <SVGRequestObserver.h>

#include "AknIconFormatHandler.h"

// FORWARD DECLARATIONS

class CFbsBitmap;
class MAknIconChangeObserver;
// CLASS DECLARATION

/**
 * CAknNGAFormatHandler
 * Format Handler for NGA(will create an extended bitmap)
 */
NONSHARABLE_CLASS(CAknNGAFormatHandler) :
    public CBase,
    public MAknIconFormatHandler,
    public MSvgRequestObserver
	{
public:

    static CAknNGAFormatHandler* NewL(TInt aType,TSize aBitmapSize,TDisplayMode aBitmapDspMode,TDisplayMode aMaskDspMode);
    ~CAknNGAFormatHandler();

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
        CFbsBitmap* aMask,TSize Bitmapsize=TSize(0,0),TDisplayMode Bitmapdepth=ENone,TDisplayMode Maskdepth=ENone, TRgb aColor = TRgb(0,0,0),  TBool aIsAppIcon = EFalse);

    void UnprepareIcon( TInt aHandle );

    void SetAnimated( TBool aAnimated );
    
    TInt IconFormatType();
private: // From MSvgRequestObserver

    void UpdateScreen();
    TBool ScriptCall( const TDesC& aScript,CSvgElementImpl* aCallerElement );
    TInt FetchImage( const TDesC& aUri, RFs& aSession, RFile& aFileHandle );
    void UpdatePresentation(const TInt32&  aNoOfAnimation);
    TInt FetchFont( const TDesC& aUri, RFs& aSession, RFile& aFileHandle );

private:

    void InitializeEngineL();
    void CheckHandleActivatedL( CFbsBitmap* aBitmap, CFbsBitmap* aMask );

    static void LeaveIfErrorL( MSvgError* aError );
    static TInt SvgErrorToSymbianError( const TSvgErrorCode aError );
    
    static void CleanupNullMaskPointer( TAny* aParam );
    
    void SetEngineScaleMode();

    private: // Private constructors
        CAknNGAFormatHandler(TSize aBitmapSize,TDisplayMode aBitmapDspMode,TDisplayMode aMaskDspMode);
        void ConstructL(TInt aType);
        void FormCommonHeader(const CFbsBitmap *aBitmap, TBool isMask = EFalse,TRgb aColor=TRgb(0,0,0), TBool aMarginFlag=EFalse);

private:
    CSvgEngineInterfaceImpl* iSvgEngine;
    MAknIconChangeObserver* iObserver;
    CFbsBitmap* iDummyBitmap; // TODO: remove when can
    CFbsBitmap* iMask; // not owned
    TInt iMode;
    TInt iAngle;
    TBool iAnimated;
    TSize iBitmapSize;
    TDisplayMode iBitmapDspMode;
    TDisplayMode iMaskDspMode;
    TInt iHandle;

    enum
        {
        ENotActivated = 0,
        EActivated = 1,
        EActivatedWithFrameBuffer = 2
        };

    TInt iHandleActivationStatus;
    HBufC8 *            iData;
    };

#endif      // AKN_NGA_FORMAT_HANDLER_H
            
// End of File

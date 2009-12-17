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
* Description:  CAknIconManager class.
*
*
*/



#ifndef AKN_ICON_MANAGER_H
#define AKN_ICON_MANAGER_H

// INCLUDES
#include <e32std.h>
#include <fbs.h>
#include "AknIconObserver.h"
#include "AknIconUtils.h"
#include "AknIconSrvDef.h"
// CONSTANTS

const TInt KExtensionLength = 4;
_LIT( KMbmExtension, ".mbm" );
_LIT( KMifExtension, ".mif" );


// FORWARD DECLARATIONS
class MAknIconFormatHandler;
class CAknBitmap;
class CAknIconLoader;
struct TAknIconParams;
// CLASS DECLARATION

/**
* class CAknIconManager.
* @internal
*/
NONSHARABLE_CLASS(CAknIconManager) : public CBase, public MAknIconChangeObserver
	{
    public:  // Constructors and destructor
        
        static CAknIconManager* NewL(
            const TDesC& aFileName,
            const TInt16 aBitmapId,
            const TInt16 aMaskId );
        
        /**
        * Destructor.
        */
        ~CAknIconManager();

    public: // New functions

        /**
        * Loads MBM icons.
        * Sets MIF icon handles to valid empty CFbsBitmap handles.
        */
        void PreinitializeIconL();

        TInt InitializeIcon( const TSize& aSize, TScaleMode aMode );

        TInt InitializeIcon( 
            const TSize& aSize,
            TScaleMode aMode,
            TInt aAngle );

        TInt GetContentDimensions( TAknContentDimensions& aContentDimensions );

        void PreserveIconData();
        void DestroyIconData();

        void SetIconColor( const TRgb aColor );
        TRgb GetIconColor() const;
        void GetFileName( TDes& aFileName ) const;
        void GetFullFileName( TDes& aFileName ) const;
        void GetFullMifFileName( TDes& aFileName ) const;        
        inline TInt BitmapId() const;
        inline TInt MaskId() const;

        inline void GetInitializedParams( TAknIconParams& aInfo ) const;
        inline void SetInitializedParams( const TAknIconParams& aInfo );

        void Ref();
        void Unref(const CAknBitmap& aBitmap);

        void SetBitmap( CAknBitmap* aBitmap );
        void SetMask( CAknBitmap* aMask );

        void SetObserver( MAknIconObserver* aObserver );
        TBool IsMbmIcon() const;
        TInt IconIdToIndex( TInt aId ) const;
        inline TBool IsDefaultIconDirUsed() const;
        inline void SetDefaultIconDirUsed();
        inline TBool IsExcludedFromCache() const;
        inline void ExcludeFromCache();
        inline TBool IsCompressionDisabled() const;
        inline void DisableCompression();
        


		
		TInt ScaleMode() const;
		TInt Check(const TSize& aSize,TScaleMode aMode,TInt aAngle=0);

    protected:

        /**
        * This is called, when the file handle is no longer required,
        * and should be closed.
        */
        virtual void ReleaseFileHandle();
        
        /*
        * Initalizes iFileName member.
        * Note: This function must be called in ConstructL!
        */           
        void InitIconFileNameL( const TDesC& aFileName );
        
        inline TBool IsIconDataPreserved() const;
        inline void SetIconDataPreserved();        
        inline void ClearIconDataPreserved();        
        inline TBool IsAnimated() const;
        inline void SetAnimated(); 
        inline TBool IsFileExtRemoved() const;
        inline void SetFileExtRemoved();        
        inline TBool IsCompressionDisabledCleanUp() const;
        inline void SetDisableCompressionCleanUp();
        inline void ClearDisableCompressionCleanUp();
        inline TBool IsAppIcon() const;
        inline void SetAppIcon(TBool aAppIcon);
        inline TBool GetAppIcon() const;    
    private: // from MAknIconChangeObserver
        void BitmapChanged();

    private: // New functions

        /**
        * Loads icon from MBM file if it is a bitmap icon.
        */ 
        void LoadIfBitmapIconL();

        /**
        * Checks if the icon is already initialized with the given parameters,
        * and if not, initializes it.
        */
        void InitializeIconL(
            const TSize& aSize,
            TScaleMode aMode,
            TInt aAngle );

        /**
        * Initializes the icon with the given parameters.
        */
        virtual void DoInitializeIconL(
            const TSize& aSize,
            TScaleMode aMode,
            TInt aAngle );

        /**
        * Returns opened file handle to the icon file,
        * if such is supplied by the client.
        */
        virtual RFile* FileHandleL( MAknIconFileProvider::TIconFileType aType );

        /**
        * Loads a bitmap icon.
        */
        virtual void LoadBitmapIconL();

    
        inline TBool HasValidFileExtension( const TDesC& aFileName ) const;
        void ChangeFileExtension( TDes& aFileName ) const;
        void AppendFileExtension( TDes& aFileName ) const;
        void InitializeAnimatedIconL( const TAknIconParams& aInfo );

        /**
        * Cleanup function that calls ReleaseFileHandle.
        */
        static void CleanupReleaseFileHandle( TAny* aParam );

        CAknIconLoader* PrepareAnimatedIconLC();
        
        void PrepareAnimatedIconL(TBool bAnimationReady = EFalse);
        
        void GetContentDimensionsL( TAknContentDimensions& aContentDimensions );

        void HandleError( TInt aError );
        
        void RetrieveIconLocationInfoL();

        void LoadIconLocationInfoL( const TDesC& aFileName );

        RFile* FileHandleL();
        
        inline void DeleteIconFormatHandler();

    protected: // Protected constructors
        /**
        * C++ default constructor.
        */
        CAknIconManager();

    private:
        /**
        * 2nd phase constructor.
        */
        void ConstructL(
            const TDesC& aFileName,
            const TInt16 aBitmapId,
            const TInt16 aMaskId );

    protected:    // Data
    
        enum TFlags
            {
            // bit flags
            EFlagUsesDefaultIconDir             = 0x0001,
            EFlagIconDataPreserved              = 0x0002,
            EFlagAnimated                       = 0x0004,
            EFlagFileExtRemoved                 = 0x0008,
            EFlagExcludeFromCache               = 0x0010,
            EFlagDisableCompression             = 0x0020,
            EFlagDisableCompressionCleanUp      = 0x0040
            };

        HBufC* iFileName; // not owned
        TInt16 iBitmapId;
        TInt16 iMaskId;
        TInt16 iOriginalMaskId;
        TInt iFlags;
        CAknBitmap* iBitmap; // not owned
        CAknBitmap* iMask; // not owned
        MAknIconFormatHandler* iHandler;
        TInt iRefCount;
        MAknIconObserver* iObserver;
        TSize iLoadedSize;

        TSize iInitializedSize;
        TInt iInitializedMode;
        TInt iInitializedAngle;
        TRgb iInitializedColor;

        // Icon color. Effective only with 1-bit icons.
        TRgb iColor;

        // Content dimensions are stored here.
        TAknContentDimensions iContentDimensions;
        TBool iAppIcon;
        friend class RAknIconSrvClient;
    };

#include "AknIconManager.inl"

#endif      // AKN_ICON_MANAGER_H
            
// End of File

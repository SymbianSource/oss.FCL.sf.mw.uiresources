/*
* Copyright (c) 2003 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines constant values for Avkon Skins.
*
*/


#ifndef AKNSSRVSKININFORMATIONPKG_H
#define AKNSSRVSKININFORMATIONPKG_H

//INCLUDE FILES

#include <e32base.h>

#include <AknsPkgID.h>

// CONSTANTS

/**
* Enumeration for the skin package locations.
*
* @since 2.0
*
*/
enum TAknSkinSrvSkinPackageLocation
    {
    /**
    * Location enum value for phone (drives C:\ and Z:\)
    */
    EAknsSrvPhone = 0,
    
    /**
    * Location enum value for MMC (E:\)
    */
    EAknsSrvMMC = 2,
    
    /**
    * Location enum value for all drives available.(d:\ ie. RAM disk excluded)
    */
    EAknsSrvAll = 4
    };

/**
* Enumeration for the skin protection type.
*
* @since 2.6
*
*/
enum TAknsSkinSrvSkinProtectionType
    {
    /**
    * The skin is not DRM protected
    */
    EAknsSrvNoProtection,

    /**
    * The skin is DRM protected
    */
    EAknsSrvProtected,

    /**
    * The rights object for has no rights for the skin
    */
    EAknsSrvNoRights,

    /**
    * The rights object for the skin is count based,
    * and should not be allowed to activated or 
    * edited. 
    * §qtn_drm_prev_rights_set§ should be displayed.
    */
    EAknsSrvCountBased,

    /**
    * The rights object is valid in the future,
    * should not be allowed to be actived or
    * edited.
    * §qtn_drm_prev_rights_set§ should be displayed.
    */
    EAknsSrvFutureRights,

    /**
    * The rights object has bee expired
    * §qtn_drm_mgr_det_exp§ from drmcommon should be displayed
    */
    EAknsSrvExpiredRights
    };

// CLASS DECLARATIONS

struct TAknsSrvSkinInfoPkg
{
    public:
        TAknsPkgID iPID; // Package ID of the skin
        TAknsPkgID iColorSchemePID; // Package ID of the color scheme in the skin
        TFileName iSkinDirectoryBuf; // The directory of the skin package
        TFileName iSkinIniFileDirectoryBuf; // The directory containing the skin ini file
        TFileName iSkinNameBuf; // The name of the skin package.
        TFileName iIdleStateWallPaperImageName; // The name of the idle state wallpaper mbm file.
        TFileName iFullName; // The fully qualified skn-file name
        TBool iIsCopyable; // Boolean value specifying if the skin package copyable
        TBool iIsDeletable; // Boolean value specifying if the skin package is deletable
        TInt iIdleBgImageIndex; // The index of the idle state background image
        TAknsSkinSrvSkinProtectionType iProtectionType; // Specifies the DRM protection type in this skin
        TBool iCorrupted; // Specifies if the skin is somehow corrupted
        TBool iSupportAnimBg; // Specifies if the skin support animated background
};

/**
* A storage class containing skin information.
*
* @since 2.0
*
**/
NONSHARABLE_CLASS(CAknsSrvSkinInformationPkg) : public CBase
    {
    public: // Construction and destruction

        static CAknsSrvSkinInformationPkg* NewL(
            const TAknsPkgID aPID, const TAknsPkgID aColorSchemePID,
            const TDesC& aDirectory, const TDesC& aInifileDir,
            const TDesC& aSkinName, 
            const TDesC& aIdleStateMbmFilename, 
            const TDesC& aPinboardWallPaperMbmFilename,
            const TDesC& aFullName,
            const TInt aIdleBgImageIndex,
            const TInt aPinboardBgImageIndex,
            const TBool aDeletable,
            const TBool aCopyable,
            const TBool aHasIconset,
            const TAknsSkinSrvSkinProtectionType aProtectionType,
            const TBool aCorrupted,
            const TBool aSupportAnimBg);

        virtual ~CAknsSrvSkinInformationPkg();

    public: // New methods

        /** 
        * Gets the package ID of the skin
        * 
        * @since 2.0
        *
        * @return The package ID of the skin
        */
        IMPORT_C TAknsPkgID PID() const;
        
        /**
        * Gets the skin package directory
        * 
        * @since 2.0
        *
        * @return The skin package directory
        */
        IMPORT_C TDesC& Directory() const;
        
        /**
        * Gets the skin package ini file directory
        * 
        * @since 2.0
        *
        * @return The skin package ini file directory
        */
        IMPORT_C TDesC& IniFileDirectory() const;
        
        /**
        * Gets the skin name. May or may not be empty.
        * 
        * @since 2.0
        *
        * @return The skin name, may also be empty
        */
        IMPORT_C TDesC& Name() const;
        
        /**
        * Gets the skin idle state wallpaper mbm file name. May or may not be empty.
        * The filename is fully qualified (incl. full file path)
        * 
        * @since 2.0
        *
        * @return The mbm filename of the skin wallpaper, may also be empty
        */
        IMPORT_C TDesC& IdleStateWallPaperImageFileName() const;
        
        /**
        * Gets the skin pinboard wallpaper mbm file name. May or may not be empty.
        * The filename is fully qualified (incl. full file path)
        * 
        * @since 2.0
        *
        * @return The mbm filename of the pinboard wallpaper, may also be empty
        */
        IMPORT_C TDesC& PinboarWallPaperImageFileName() const;
        
        /**
        * Gets the idle state background image index.
        * 
        * @since 2.0
        *
        * @return The idle state background image index.
        */
        IMPORT_C TInt IdleStateWallPaperImageIndex() const;

        /**
        * Gets the pinboard background image index.
        * 
        * @since 2.0
        *
        * @return The pinboard background image index.
        */
        IMPORT_C TInt PinboardWallPaperImageIndex() const;
        
        /**
        * Indicates if the skin package is deletable.
        * 
        * @since 2.0
        *
        * @return ETrue if the skin is deletable, EFalse otherwise.
        */
        IMPORT_C TBool IsDeletable() const;
        
        /**
        * Indicates if the skin package is copyable.
        * 
        * @since 2.0
        *
        * @return ETrue if the skin is deletable, EFalse otherwise.
        */
        IMPORT_C TBool IsCopyable() const;

        /**
        * Returns the color scheme package ID for this skin.
        *
        * @since 2.0
        *
        * @return Package ID value of the color scheme associated with this 
        *   skin, or @c KAknsNullPkgID if this skin has no preference over 
        *   color schemes.
        *
        */
        IMPORT_C TAknsPkgID ColorSchemePID() const;

        /**
        * Indicates whether the skin has an iconset.
        *
        * @since 2.0
        *
        * @return ETrue if the skin has an iconset, EFalse otherwise.
        */
        IMPORT_C TBool HasIconset() const;

        /**
        * Gets the protection type for this skin
        *
        * @since 2.6
        *
        * @return The protection type for this skin.
        */
        IMPORT_C TAknsSkinSrvSkinProtectionType ProtectionType() const;
        
        /**
        * Indicates whether the skin is corrupted.
        *
        * @since 2.6
        *
        * @return ETrue if the skin is corrupted, EFalse otherwise.
        */
        IMPORT_C TBool IsCorrupted() const;

        /**
        * Get the fully qualified skin skn-filename (incl. full path).
        *
        * @since 2.6
        *
        * @return The fully qualified skn-file name.
        */
        IMPORT_C TDesC& FullName() const;
        
		/**
        * Indicates whether the skin support animation background.
        *
        * @since 5.2
        *
        * @return The fully qualified skn-file name.
        */
        IMPORT_C TBool IsSupportAnimBg() const;
    
    protected:
        CAknsSrvSkinInformationPkg( 
            const TAknsPkgID aPID, const TAknsPkgID aColorSchemePID,
            const TBool aDeletable, const TBool aCopyable,
            const TInt aIdleBgImageIndex,
            const TInt aPinboardBgImageIndex, const TBool aHasIconset,
            const TAknsSkinSrvSkinProtectionType aProtectionType,
            const TBool aCorrupted,
            const TBool aSupportAnimBg);

        void ConstructL( 
            const TDesC& aDirectory, const TDesC& aInifileDir,
            const TDesC& aSkinName, const TDesC& aIdleStateMbmFilename, 
            const TDesC& aPinboardWallPaperMbmFilename,
            const TDesC& aFullName);
    
    private:
        TAknsPkgID iPID; // Package ID of the skin
        TAknsPkgID iColorSchemePID; // Package ID of the color scheme in the skin
        HBufC* iSkinDirectoryBuf; // The directory of the skin package
        HBufC* iSkinIniFileDirectoryBuf; // The directory containing the skin ini file
        HBufC* iSkinNameBuf; // The name of the skin package.
        HBufC* iIdleStateWallPaperImageName; // The name of the idle state wallpaper mbm file.
        HBufC* iPinboardWallPaperImageName; // The name of the pinboard wallpaper mbm file 
        HBufC* iFullName; // The fully qualified skn-file name
        TBool iIsCopyable; // Boolean value specifying if the skin package copyable
        TBool iIsDeletable; // Boolean value specifying if the skin package is deletable
        TInt iIdleBgImageIndex; // The index of the idle state background image
        TInt iPinboardBgImageIndex; // The index of the pinboard backgound image
        TBool iHasIconset; // Boolean value indicating whether this skin has an iconset
        TAknsSkinSrvSkinProtectionType iProtectionType; // Specifies the DRM protection type in this skin
        TBool iCorrupted; // Specifies if the skin is somehow corrupted
        TBool iSupportAnimBg; // Specifies if the skin support Animated background
    };

#endif AKNSSRVSKININFORMATIONPKG_H // AknsSrvSkinInformationPkg.h

// End of file

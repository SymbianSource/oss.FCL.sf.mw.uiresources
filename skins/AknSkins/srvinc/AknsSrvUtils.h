/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Utility methods for skin server.
*
*/


#ifndef AKNSSRVUTILS_H
#define AKNSSRVUTILS_H

// INCLUDE FILES

#include <e32std.h>
#include <f32file.h>
#include <badesca.h>

#include <AknsPkgID.h>
#include <AknsSrvSkinInformationPkg.h>
#include "AknsSrvFileBuffer.h"
#include "AknsDriveMaster.h"

// FORWARD DECLARATIONS

struct TAknsSrvDef;

class CDRMHelper;
class CDRMRights;

// CLASS DECLARATION

/**
* Internal utility classfor skin server containing various utility functions.
*
* @since 2.0
*/
class AknsSrvUtils
    {

    public: // New methods
        /**
        * Checks if supplied skin file is a A&H override variant.
        *
        * @since 2.0
        *
        * @param aFile File buffer to read.
        *
        * @return ETrue if the skin is A&H override variant, EFalse otherwise
        *
        * @par Exceptions:
        *   If check failed, function leaves with an error code.
        */
        static TBool CheckAHOverrideFlagL( CAknsSrvFileBuffer& aFile );

        /**
        * Looks for .skn files from specified directory.
        *
        * @since 2.0
        *
        * @param aBasePath The base path of the skin directory
        *
        * @param aDirName The directory name of the skin directory.
        *
        * @param aSkinFiles Array containing the actual skin filenames
        *   after a succesfull call.
        *
        * @par Exceptions:
        *     If function fails, leaves with an error code.
        */
        static void SearchSkinsL(
            RFs& aRfs, const TDesC& aBasePath, const TDesC& aDirName,
            CDesCArray* aSkinFiles );

        /**
        * Looks after skin directories under specified path
        *
        * @since 2.0
        *
        * @param aSkinfiles An array containing skin file directory names
        *   after a succesfull call.
        *
        * @par Exceptions:
        *   If the function fails, leaves with an error code.
        */
        static void SearchDirectoriesL( RFs& aRfs, const TDesC& aPath,
            CDesCArray* aSkinFiles );

        /**
        * Build skin information array containing skin information.
        *
        * @since 2.0
        *
        * @param aSkinInfo The array where skin information is stored.
        *
        * @param aSkinArray Array containing skin file names.
        *
        * @par Exceptions:
        *    if function fails, leaves with an error code.
        */
        static void BuildSkinInfoPackagesL(
            CArrayPtr<TAknsSrvSkinInfoPkg>* aSkinInfo,
            CDesCArray* aSkinArray, RFs& aFileSession,
            CDRMHelper& aDrmHelper );

        /**
        * Builds a single skin information package.
        */
        static TAknsSrvSkinInfoPkg* BuildSkinInfoPackageL(
            const TDesC& aFilename, CDRMHelper& aDrmHelper, RFs& aFileSession );

        /**
        * Gets the package ID of the skin.
        *
        * @since 2.0
        *
        * @param aFile Opened skin file.
        *
        * @return The package ID of the skin.
        *
        * @par Exceptions:
        *   If function failed, function leaves with an error code.
        */
        static TAknsPkgID GetSkinPIDL( CAknsSrvFileBuffer& aFile );

        /**
        * Gets the filename of the skin file, or A&H variant skin file
        *
        * @since 2.0
        *
        * @param aPath Skin file directory.
        *
        * @param aPID Packge ID of the skin
        *
        * @param aAHFlag ETrue if A&H skin filename is wanted, EFalse otherwise.
        *
        * @return The skin file name or NULL of no skin file was found
        *   in the specified directory
        *
        * @par Exceptions:
        *   If skin filename could not be fetched, leaves with an error code.
        */
        static HBufC* GetSkinFileNameL( const TDesC& aPath,
            const TAknsPkgID aPID, RFs& aFileSession );

        /**
        * Reads skin data to a buffer
        *
        * @since 2.0
        *
        * @param aFile File buffer to read.
        *
        * @param aOffset The file offset to read from.
        *
        * @param aCount The number of bytes to read.
        *
        * @return A buffer containing skin data which was read.
        *
        * @par Exceptions:
        *    If reading fails, leaves with an error code.
        */
        static TUint8* ReadSkinDescL(CAknsSrvFileBuffer& aFile,
            const TUint aOffset, const TUint aCount );

        /**
        * Gets a 32-bit integer value from a skin file.
        *
        * @since 2.0
        *
        * @param aFile File buffer to read.
        *
        * @param aOffset The offset to read from.
        *
        * @return An integer value which was read from the file
        *
        * @par Exceptions:
        *    If value couldn't be read, leaves with an error code.
        */
        static TInt32 GetInt32L(CAknsSrvFileBuffer& aFile, const TUint aOffset);

        /**
        * Gets a 16-bit unsigned integer value from a skin file.
        *
        * @since 2.0
        *
        * @param aFile File buffer to read.
        *
        * @param aOffset The offset to read from.
        *
        * @return An integer value which was read from the file.
        *
        * @par Exceptions:
        *    If value couldn't be read, leaves with an error code
        */
        static TUint16 GetUInt16L(CAknsSrvFileBuffer& aFile, const TUint aOffset);

        /**
        * Gets a 16-bit integer value from a skin file.
        *
        * @since 2.0
        *
        * @param aFile File buffer to read.
        *
        * @param aOffset The offset to read from.
        *
        * @return An integer value which was read from the file.
        *
        * @par Exceptions:
        *    If value couldn't be read, leaves with an error code
        */
        static TInt16 GetInt16L(CAknsSrvFileBuffer& aFile, const TUint aOffset);

        /**
        * Gets a 8-bit unsigned integer value from a skin file.
        *
        * @since 2.0
        *
        * @param aFile File buffer to read.
        *
        * @param aOffset The offset to read from.
        *
        * @return An integer value which was read from the file.
        *
        * @par Exceptions:
        *    If value couldn't be read, leaves with an error code
        */
        static TUint8 GetUInt8L(CAknsSrvFileBuffer& aFile, const TUint aOffset);

        /**
        * Get the skin name.
        *
        * @since 2.0
        *
        * @param aFile File buffer to read from.
        *
        * @return The name of the skin.
        *
        * @par Exceptions:
        *    If name couldn't be read leaves with an error code.
        */
        static HBufC* GetSkinNameL(CAknsSrvFileBuffer& aFile);


        /**
        * Checks whether the given file exists. Same as above, but
        * takes RFs as a parameter.
        *
        * @since 3.1
        *
        * @param aFileSession RFs reference.
        * @param aFilename Filename with full path.
        *
        * @return ETrue if the file exists, EFalse otherwise.
        */
        static TBool IsFile( RFs& aFileSession, const TDesC& aFilename );

        /**
        * Checks whether the given file is Drm-protected or not
        *
        * @since 2.6
        *
        * @param aFilename Filename with full path.
        *
        * @return ETrue if the file is protected, EFalse otherwise.
        */
        static TBool IsDrmProtectedL(const TDesC& aFilename);
        static TBool IsDrmProtectedL(RFile& aFileHandle);

        /**
        * Like above (@see SearchSkinsL), but searches for given extension.
        *
        * @since 3.1
        *
        * @param aBasePath The base path of the skin directory
        *
        * @param aDirName The directory name of the skin directory.
        *
        * @param sExtension The extension to look for.
        *
        * @param aSkinFiles Array containing the actual skin filenames
        *   after a succesfull call.
        *
        * @par Exceptions:
        *     If function fails, leaves with an error code.
        */
        static void SearchSkinsL(
            RFs& aRfs, const TDesC& aBasePath, const TDesC& aDirName,
            const TDesC& aExtension, CDesCArray* aSkinFiles );

        /**
        * Looks after skin directories under specified path
        *
        * @since 2.0
        *
        * @param aSkinfiles An array containing skin file directory names
        *   after a succesfull call.
        *
        * @param aExtension extension to look for.
        * @par Exceptions:
        *   If the function fails, leaves with an error code.
        */
        static void SearchDirectoriesL( RFs& aRfs, const TDesC& aPath,
            const TDesC& aExtension, CDesCArray* aSkinFiles );

        /**
        * Returns skin file name from a given drive.
        *
        * @since 5.0
        *
        * @param aDriveMaster reference to drive master.
        * @param aPID PID of a skin to look for.
        * @param aFileSession file server session.
        * @param aDriveType what type of drives to look from.
        *
        * @return filename of requested skin.
        */
        static HBufC* GetSkinFileNameL(
            CAknsSrvDriveMaster& aDriveMaster,
            const TAknsPkgID aPID,
            RFs& aFileSession,
            CAknsSrvDriveMaster::TAknsSrvSkinDriveList aDriveType );

        /**
        * Gets content URI from a given file.
        *
        * @since S60 v3.2
        *
        * @param aFilename Filename with full path.
        *
        * @return file's content URI.
        */
        static HBufC8* GetContentUriFromFileL( const TDesC& aFilename );

        /**
        * Gets protection type of the URI.
        *
        * @since S60 v3.2
        *
        * @param aManager DRM Rights manager.
        * @param aProtectionType protection type of the URI.
        */
        static void GetProtectionTypeL(
            const TDesC& aFilename,
            TAknsSkinSrvSkinProtectionType& aProtectionType );

        /**
        * Checks if a skin has mif file.
        *
        * @since S60 3.2
        *
        * @param aHasMifFile ETrue if mif file exists, otherwise EFalse.
        * @param aFileSession file server session.
        * @param aFilename Filename with full path.
        */
        static void SkinHasMifFileL( TBool& aHasMifFile,
            RFs& aFileSession, const TDesC& aFilename );
        
        /**
        * Get the skin anim background support.
        *
        * @since 9.2
        *
        * @param aFile File buffer to read from.
        *
        * @return ETrue:Support  EFalse: Not support.
        *
        * @par Exceptions:
        *    If name couldn't be read leaves with an error code.
        */        
        static TBool AnimBackgroundSupportL(CAknsSrvFileBuffer& aFile);
    };

#endif

// End of File

/*
* Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines a class encapsulating various information on single
*                skin in the system.
*
*/


// INCLUDE FILES
#include <AknsSrvSkinInformationPkg.h>

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::NewL
// -----------------------------------------------------------------------------
//
CAknsSrvSkinInformationPkg* CAknsSrvSkinInformationPkg::NewL(
    const TAknsPkgID aPID,
    const TAknsPkgID aColorSchemePID,
    const TDesC& aDirectory,
    const TDesC& aInifileDir,
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
    const TBool aSupportAnimBg)
    {
    CAknsSrvSkinInformationPkg* self = new (ELeave) CAknsSrvSkinInformationPkg(
        aPID, aColorSchemePID, aDeletable, aCopyable, aIdleBgImageIndex,
        aPinboardBgImageIndex, aHasIconset, aProtectionType, aCorrupted, aSupportAnimBg );
    CleanupStack::PushL(self);
    self->ConstructL(aDirectory, aInifileDir, aSkinName, aIdleStateMbmFilename, aPinboardWallPaperMbmFilename, aFullName );
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::CAknsSrvSkinInformationPkg
// -----------------------------------------------------------------------------
//
CAknsSrvSkinInformationPkg::CAknsSrvSkinInformationPkg(
    const TAknsPkgID aPID,
    const TAknsPkgID aColorSchemePID,
    const TBool aDeletable,
    const TBool aCopyable,
    const TInt aIdleBgImageIndex,
    const TInt aPinboardBgImageIndex,
    const TBool aHasIconset,
    const TAknsSkinSrvSkinProtectionType aProtectionType,
    const TBool aCorrupted,
    const TBool aSupportAnimBg)
    {
    iPID.Set( aPID );
    iColorSchemePID.Set( aColorSchemePID );
    iIsDeletable = aDeletable;
    iIsCopyable = aCopyable;
    iIdleBgImageIndex = aIdleBgImageIndex;
    iPinboardBgImageIndex = aPinboardBgImageIndex;
    iHasIconset = aHasIconset;
    iProtectionType = aProtectionType;
    iCorrupted = aCorrupted;
    iSupportAnimBg = aSupportAnimBg;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::~CAknsSrvSkinInformationPkg
// -----------------------------------------------------------------------------
//
CAknsSrvSkinInformationPkg::~CAknsSrvSkinInformationPkg()
    {
    delete iSkinDirectoryBuf;
    delete iSkinIniFileDirectoryBuf;
    delete iSkinNameBuf;
    delete iIdleStateWallPaperImageName;
    delete iPinboardWallPaperImageName;
    delete iFullName;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::ConstructL
// -----------------------------------------------------------------------------
//
void CAknsSrvSkinInformationPkg::ConstructL(
    const TDesC& aDirectory, const TDesC& aInifileDir, const TDesC& aSkinName,
    const TDesC& aIdleStateMbmFilename,
    const TDesC& aPinboardWallPaperMbmFilename,
    const TDesC& aFullName)
    {
    iSkinDirectoryBuf = aDirectory.AllocL();
    iSkinIniFileDirectoryBuf = aInifileDir.AllocL();
    iSkinNameBuf = aSkinName.AllocL();
    iIdleStateWallPaperImageName = aIdleStateMbmFilename.AllocL();
    iPinboardWallPaperImageName = aPinboardWallPaperMbmFilename.AllocL();
    iFullName = aFullName.AllocL();
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::PID
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsPkgID CAknsSrvSkinInformationPkg::PID() const
    {
    return iPID;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::Directory
// -----------------------------------------------------------------------------
//
EXPORT_C TDesC& CAknsSrvSkinInformationPkg::Directory() const
    {
    return *iSkinDirectoryBuf;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::IniFileDirectory
// -----------------------------------------------------------------------------
//
EXPORT_C TDesC& CAknsSrvSkinInformationPkg::IniFileDirectory() const
    {
    return *iSkinIniFileDirectoryBuf;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::Name
// -----------------------------------------------------------------------------
//
EXPORT_C TDesC& CAknsSrvSkinInformationPkg::Name() const
    {
    return *iSkinNameBuf;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::IdleStateWallPaperImageFileName
// -----------------------------------------------------------------------------
//
EXPORT_C TDesC& CAknsSrvSkinInformationPkg::IdleStateWallPaperImageFileName() const
    {
    return *iIdleStateWallPaperImageName;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::PinboardWallPaperImageFileName
// -----------------------------------------------------------------------------
//
EXPORT_C TDesC& CAknsSrvSkinInformationPkg::PinboarWallPaperImageFileName() const
    {
    return *iPinboardWallPaperImageName;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::IdleStateWallPaperImageIndex
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsSrvSkinInformationPkg::IdleStateWallPaperImageIndex() const
    {
    return iIdleBgImageIndex;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::PinboardWallPaperImageIndex
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsSrvSkinInformationPkg::PinboardWallPaperImageIndex() const
    {
    return iPinboardBgImageIndex;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::IsCopyable
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsSrvSkinInformationPkg::IsCopyable() const
    {
    return iIsCopyable;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::IsDeletable
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsSrvSkinInformationPkg::IsDeletable() const
    {
    return iIsDeletable;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::ColorSchemePID
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsPkgID CAknsSrvSkinInformationPkg::ColorSchemePID() const
    {
    return iColorSchemePID;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::HasIconset
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsSrvSkinInformationPkg::HasIconset() const
    {
    return iHasIconset;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::ProtectionType
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsSkinSrvSkinProtectionType CAknsSrvSkinInformationPkg::ProtectionType() const
    {
    return iProtectionType;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::IsCorrupted
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsSrvSkinInformationPkg::IsCorrupted() const
    {
    return iCorrupted;
    }
	
// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::IsSupportAnimBg
// -----------------------------------------------------------------------------
//
EXPORT_C TBool CAknsSrvSkinInformationPkg::IsSupportAnimBg() const
    {
    return iSupportAnimBg;
    }

// -----------------------------------------------------------------------------
// CAknsSrvSkinInformationPkg::FullName
// -----------------------------------------------------------------------------
//
EXPORT_C TDesC& CAknsSrvSkinInformationPkg::FullName() const
    {
    return *iFullName;
    }

// End of File

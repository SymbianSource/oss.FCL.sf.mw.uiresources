/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines a internal static utility class AknsJavaUtils.
*
*/


// INCLUDE FILES

#include <AknIconUtils.h>
#include <apgcli.h>
#include "AknsJavaUtils.h"

_LIT(KJavaIconPath,"\\private\\10003a3f\\import\\apps\\NonNative\\Resource");
const TInt KJavaIconPathLength = 48;

// ============================ MEMBER FUNCTIONS ===============================
// -----------------------------------------------------------------------------
// AknsJavaUtils::CreateIconLC
// -----------------------------------------------------------------------------
//
void AknsJavaUtils::CreateIconLC(
            RApaLsSession& aApaSession,
            TUid aAppUid,
            CFbsBitmap*& aBitmap, CFbsBitmap*& aMask,
            TInt aFileBitmapId, TInt aFileMaskId )
    {
    CJavaIconFileProvider* javaIconFileProvider =
            CJavaIconFileProvider::NewL( aApaSession, aAppUid);
    AknIconUtils::CreateIconLC(aBitmap,aMask,
                    *javaIconFileProvider,aFileBitmapId,aFileMaskId );
    }

// -----------------------------------------------------------------------------
// AknsJavaUtils::IsJavaIcon
// -----------------------------------------------------------------------------
//
TBool AknsJavaUtils::IsJavaIcon(const TDesC& aIconFilename)
    {
    TBool javaIcon = EFalse;
    TPtrC fileName = aIconFilename;

    if (fileName.Length() >= KMaxDriveName + KJavaIconPathLength)
        {
        // Remove drive letter and colon from the beginning of
        // fileName
        fileName.Set(fileName.Mid( KMaxDriveName ));

        // Check if fileName contains string KJavaIconPath as prefix
        if ( fileName.Left( KJavaIconPathLength ).CompareF( KJavaIconPath ) == 0 )
            {
            javaIcon = ETrue;
            }
        }
    return javaIcon;
    }

// -----------------------------------------------------------------------------
// AknsJavaUtils::JavaIconFileProvider::NewL
// -----------------------------------------------------------------------------
//
AknsJavaUtils::CJavaIconFileProvider* AknsJavaUtils::CJavaIconFileProvider::
    NewL( RApaLsSession& aApaSession, TUid aAppUid)
    {
    return new (ELeave) CJavaIconFileProvider(aApaSession,aAppUid);
    }

// -----------------------------------------------------------------------------
// AknsJavaUtils::JavaIconFileProvider::RetrieveIconFileHandleL
// -----------------------------------------------------------------------------
//
void AknsJavaUtils::CJavaIconFileProvider::
    RetrieveIconFileHandleL(RFile& aFile, const TIconFileType aType )
    {
    if (aType == MAknIconFileProvider::EMbmFile)
        {
        User::Leave( KErrNotFound );
        }

    User::LeaveIfError(iApaSession.GetAppIcon(iAppUid, aFile));
    }

// -----------------------------------------------------------------------------
// AknsJavaUtils::JavaIconFileProvider::Finished
// -----------------------------------------------------------------------------
//
void AknsJavaUtils::CJavaIconFileProvider::Finished()
    {
    // commit suicide because AknIcon framework
    // requested
    delete this;
    }

//  End of File

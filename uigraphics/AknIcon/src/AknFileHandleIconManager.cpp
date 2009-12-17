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
* Description:   Implementation of class CAknFileHandleIconManager.
*
*/




// INCLUDE FILES
#include "AknFileHandleIconManager.h"
#include "AknBitmap.h"
#include <MifconvDefs.h>

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknFileHandleIconManager::CAknFileHandleIconManager
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknFileHandleIconManager::CAknFileHandleIconManager()
	{
	}

// -----------------------------------------------------------------------------
// CAknFileHandleIconManager::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknFileHandleIconManager::ConstructL(
    RFile& aFile, const TInt16 aBitmapId, const TInt16 aMaskId )
    {
    iBitmapId = aBitmapId;
    iMaskId = aMaskId;

    TFileName name;
    User::LeaveIfError( aFile.FullName( name ) ); // This is an expensive call.

    // Test that the given file has the correct extension.
    if ( name.Length() <= KExtensionLength )
        {
        User::Leave( KErrArgument );
        }
    
    if ( aBitmapId < KMifIdFirst )
        {
        if ( name.Right( KExtensionLength ).CompareF( KMbmExtension ) )
            {
            User::Leave( KErrArgument );
            }
        }
    else
        {
        if ( name.Right( KExtensionLength ).CompareF( KMifExtension ) )
            {
            User::Leave( KErrArgument );
            }
        }

    // Check for the default icon dir. It is indicated with a flag, to save RAM.
    if ( name.Length() >= KAknIconDefaultDirLength &&
         name.Left( KAknIconDefaultDirLength ).CompareF( 
            KAknIconDefaultDir ) == 0 )
        {
        iFlags |= KFlagUsesDefaultIconDir;

        iFileName = name.Mid( KAknIconDefaultDirLength ).AllocL();
        }
    else
        {
        iFileName = name.AllocL();
        }
        
    iFile = aFile;
    }

CAknFileHandleIconManager* CAknFileHandleIconManager::NewL(
    RFile& aFile, const TInt16 aBitmapId, const TInt16 aMaskId )
    {
    CAknFileHandleIconManager* self = new( ELeave ) CAknFileHandleIconManager();
    CleanupStack::PushL( self );
    self->ConstructL( aFile, aBitmapId, aMaskId );
    CleanupStack::Pop();
    return self;
    }

// Destructor
CAknFileHandleIconManager::~CAknFileHandleIconManager()
    {
    iFile.Close();
    }

// -----------------------------------------------------------------------------
// CAknFileHandleIconManager::LoadBitmapIconL
// -----------------------------------------------------------------------------
//
void CAknFileHandleIconManager::LoadBitmapIconL()
    {
    User::LeaveIfError( iBitmap->Load( iFile, iBitmapId ) );
    
    if ( iMask )
        {
        User::LeaveIfError( iMask->Load( iFile, iMaskId ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknFileHandleIconManager::FileHandleL
// -----------------------------------------------------------------------------
//
RFile* CAknFileHandleIconManager::FileHandleL(
    MAknIconFileProvider::TIconFileType /*aType*/ )
    {
    return &iFile;
    }

// -----------------------------------------------------------------------------
// CAknFileHandleIconManager::ReleaseFileHandle
// -----------------------------------------------------------------------------
//
void CAknFileHandleIconManager::ReleaseFileHandle()
    {
    // Cannot close the file here, because it is required again
    // when SetSize is called... This class is to be removed, anyway,
    // and replaced by CAknFileProviderIconManager.
    }

//  End of File

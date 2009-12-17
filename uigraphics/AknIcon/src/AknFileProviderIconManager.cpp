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
* Description:   Implementation of class CAknFileProviderIconManager.
*
*/




// INCLUDE FILES
#include <mifconvdefs.h>
#include "AknFileProviderIconManager.h"
#include "AknIconUtils.h"
#include "AknBitmap.h"
#include "AknIconPanic.h"
#include "AknIconTraces.h"


// ============================ GLOBAL FUNCTIONS ===============================

GLREF_C void CleanupFileProvider( TAny* aParam )
    {
    static_cast<MAknIconFileProvider*>( aParam )->Finished();
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknFileProviderIconManager::CAknFileProviderIconManager
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknFileProviderIconManager::CAknFileProviderIconManager(
    MAknIconFileProvider& aFileProvider,
    const TInt16 aBitmapId,
    const TInt16 aMaskId ) :
        iFileProvider( aFileProvider ), iFileType( -1 )
	{
    iBitmapId = aBitmapId;
    iMaskId = aMaskId;
	}

CAknFileProviderIconManager* CAknFileProviderIconManager::NewL(
    MAknIconFileProvider& aFileProvider,
    const TInt16 aBitmapId,
    const TInt16 aMaskId )
    {
    // Make sure that MAknIconFileProvider::Finished is called if manager creation fails.
    CleanupStack::PushL( TCleanupItem( CleanupFileProvider, &aFileProvider ) );

    CAknFileProviderIconManager* self = new( ELeave )
        CAknFileProviderIconManager( aFileProvider, aBitmapId, aMaskId );

    // From now on, MAknIconFileProvider::Finished is called by
    // CAknFileProviderIconManager destructor.

    CleanupStack::Pop(); // CleanupFileProvider

    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknFileProviderIconManager::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknFileProviderIconManager::ConstructL()
    {
    FileHandleL( MAknIconFileProvider::EMifFile );
    
    // Verify the file name and store information of it.
    TFileName name;
    User::LeaveIfError( iFile.FullName( name ) ); // This causes a server call.

#ifdef __AKNICON_TRACES
    RDebug::Print( _L("AknIcon: %x CAknFileProviderIconManager::ConstructL - iFile: %S"), this, &name);
#endif   
    // Test that the given file has the correct extension.
    if ( name.Length() <= KExtensionLength )
        {
        User::Leave( KErrArgument );
        }

    if ( name.Right( KExtensionLength ).CompareF( KMifExtension ) )
        {
        User::Leave( KErrArgument );
        }

    InitIconFileNameL(name);    
    }

// Destructor
CAknFileProviderIconManager::~CAknFileProviderIconManager()
    {
    iFile.Close();

    // Informs the file provider object that it is not needed any more.
    // It is the responsibility of its implementation to take care of
    // deleting self.
    iFileProvider.Finished();
    }

// -----------------------------------------------------------------------------
// CAknFileProviderIconManager::LoadBitmapIconL
// -----------------------------------------------------------------------------
//
void CAknFileProviderIconManager::LoadBitmapIconL()
    {
    RFile* file = FileHandleL( MAknIconFileProvider::EMbmFile );

    User::LeaveIfError( iBitmap->Load( *file, iBitmapId ) );
    
    if ( iMask )
        {
        User::LeaveIfError( iMask->Load( *file, iMaskId ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknFileProviderIconManager::FileHandleL
// -----------------------------------------------------------------------------
//
RFile* CAknFileProviderIconManager::FileHandleL(
    MAknIconFileProvider::TIconFileType aType )
    {
    if ( !iFile.SubSessionHandle() || iFileType != aType )
        {
        iFile.Close();
        iFileType = -1;
        iFileProvider.RetrieveIconFileHandleL( iFile, aType );
        iFileType = aType;
#ifdef _DEBUG        
        // Verify that the file name has not changed after calling ConstructL
        if (iFileName)
            {                  
            TFileName origname, currname;
            GetFullFileName( origname );
            User::LeaveIfError( iFile.FullName( currname ) ); 
            if (origname.Length() < KExtensionLength ||
                currname.Length() < KExtensionLength ||
                (origname.SetLength( origname.Length() - KExtensionLength ),
                 currname.SetLength( currname.Length() - KExtensionLength ),
                 origname.CompareF(currname)))
                {
                User::Panic( KAknIconPanicCategory, EFileProviderCorrupt );
                }
            }            
#endif        
        }

    return &iFile;
    }

// -----------------------------------------------------------------------------
// CAknFileProviderIconManager::ReleaseFileHandle
// -----------------------------------------------------------------------------
//
void CAknFileProviderIconManager::ReleaseFileHandle()
    {
    CAknIconManager::ReleaseFileHandle();
    iFile.Close();
    }

//  End of File

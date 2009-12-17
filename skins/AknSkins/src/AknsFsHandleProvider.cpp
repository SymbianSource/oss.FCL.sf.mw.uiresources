/*
* Copyright (c) 2007-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Skin server's file handle provider.
*
*/


#include "AknsFsHandleProvider.h"
#include <AknsSrvClient.h>

// MIF file extension.
_LIT( KAknsSkinSrvMifFileExt, ".mif" );

// MBM file extension.
_LIT( KAknsSkinSrvMbmFileExt, ".mbm" );

// Extension length
const TInt KAknsExtensionLength = 4;

// -----------------------------------------------------------------------------
// CAknsFsHandleProvider::NewL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsFsHandleProvider* CAknsFsHandleProvider::NewL(
    RAknsSrvSession* aSkinSrvSession, const TDesC& aFilename)
    {
    CAknsFsHandleProvider* self =
        new (ELeave) CAknsFsHandleProvider(aSkinSrvSession);
    CleanupStack::PushL(self);
    self->ConstructL(aFilename);
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsFsHandleProvider::~CAknsFsHandleProvider
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsFsHandleProvider::~CAknsFsHandleProvider()
    {
    delete iFilename;
    iFilename = NULL;
    iSkinSrvSession = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsFsHandleProvider::CAknsFsHandleProvider
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsFsHandleProvider::CAknsFsHandleProvider(RAknsSrvSession* aSkinSrvSession) :
    iSkinSrvSession(aSkinSrvSession)
    {
    }

// -----------------------------------------------------------------------------
// CAknsFsHandleProvider::ConstructL
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsFsHandleProvider::ConstructL(const TDesC& aFilename)
    {
    iFilename = aFilename.AllocL();
    }

// -----------------------------------------------------------------------------
// CAknsFsHandleProvider::RetrieveIconFileHandleL
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsFsHandleProvider::RetrieveIconFileHandleL(
    RFile& aFile, const TIconFileType aType )
    {
    TInt filehandle = 0;
    TFileName fn;
    if ( iFilename )
        {
        fn = iFilename->Left( iFilename->Length() - KAknsExtensionLength );
        }

    if (aType) // mif
        {
        fn.Append( KAknsSkinSrvMifFileExt );
        }
    else       // mbm
        {
        fn.Append( KAknsSkinSrvMbmFileExt );
        }

    TInt fshandle = iSkinSrvSession->OpenBitmapFile( fn, filehandle);
    if (fshandle <=0 || filehandle == 0)
        {
        User::Leave(fshandle);
        }

    User::LeaveIfError(aFile.AdoptFromServer(fshandle, filehandle));
    }

// -----------------------------------------------------------------------------
// CAknsFsHandleProvider::Finished
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CAknsFsHandleProvider::Finished()
    {
    delete this;
    }

// End of file


/*
* Copyright (c) 2002 - 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  scalable_icons_api
*
*/

#include <aknssrvclient.h>

#include "testpubscalableiconsmifprovider.h"

// MIF file extension.
_LIT( KAknsSkinSrvMifFileExt, ".mif" );

// MBM file extension.
_LIT( KAknsSkinSrvMbmFileExt, ".mbm" );

// Extension length
const TInt KAknsExtensionLength = 4;

// -----------------------------------------------------------------------------
// CTestPubScalableIconsMifProvider::NewL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CTestPubScalableIconsMifProvider* CTestPubScalableIconsMifProvider::NewL(
    RAknsSrvSession* aSkinSrvSession, const TDesC& aFilename)
    {
    CTestPubScalableIconsMifProvider* self =
        new (ELeave) CTestPubScalableIconsMifProvider( aSkinSrvSession );
    CleanupStack::PushL(self);
    self->ConstructL(aFilename);
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// CTestPubScalableIconsMifProvider::~CTestPubScalableIconsMifProvider
// (documented in the header).
// -----------------------------------------------------------------------------
//
CTestPubScalableIconsMifProvider::~CTestPubScalableIconsMifProvider()
    {
    delete iFilename;
    iFilename = NULL;
    iSkinSrvSession = NULL;
    }

// -----------------------------------------------------------------------------
// CTestPubScalableIconsMifProvider::CTestPubScalableIconsMifProvider
// (documented in the header).
// -----------------------------------------------------------------------------
//
CTestPubScalableIconsMifProvider::CTestPubScalableIconsMifProvider( RAknsSrvSession* aSkinSrvSession ) :
    iSkinSrvSession(aSkinSrvSession)
    {
    }

// -----------------------------------------------------------------------------
// CTestPubScalableIconsMifProvider::ConstructL
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CTestPubScalableIconsMifProvider::ConstructL(const TDesC& aFilename)
    {
    iFilename = aFilename.AllocL();
    }

// -----------------------------------------------------------------------------
// CTestPubScalableIconsMifProvider::RetrieveIconFileHandleL
// (documented in the header).
// -----------------------------------------------------------------------------
//
void CTestPubScalableIconsMifProvider::RetrieveIconFileHandleL(
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
void CTestPubScalableIconsMifProvider::Finished()
    {
    delete this;
    }

// -----------------------------------------------------------------------------
// CAknIconObserver::CAknIconObserver
// -----------------------------------------------------------------------------
//
CAknIconObserver::CAknIconObserver()
    {
    
    }

// -----------------------------------------------------------------------------
// CAknIconObserver::BitmapChanged
// -----------------------------------------------------------------------------
//
void CAknIconObserver::BitmapChanged(CFbsBitmap */*aBitmap*/)
    {
    
    }
// End of file

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
* Description:   TLS data.
*
*/



// INCLUDE FILES
#include "AknIconSrvTlsData.h"
#include "AknIconLoader.h"
#include "AknIconLocationInfo.h"
#include "AknIconFileNameCache.h"

// CONSTANTS

// ================= MEMBER FUNCTIONS ==========================================

CAknIconSrvTlsData::CAknIconSrvTlsData()
    {
    }

CAknIconSrvTlsData::~CAknIconSrvTlsData()
    {
    iIconSession.Close();
    delete iLoader;
    iFsSession.Close();
    iPointers.Close();
    delete iFileName;
    iIconLocations.ResetAndDestroy();
    delete iFileNameCache;
    Dll::FreeTls();
    }

void CAknIconSrvTlsData::CreateSingletonL()
    {
    CAknIconSrvTlsData* data = new( ELeave ) CAknIconSrvTlsData;
    CleanupStack::PushL( data );
    data->ConstructL();
    CleanupStack::Pop();
    }

void CAknIconSrvTlsData::ConstructL()
    {
    User::LeaveIfError( iIconSession.ConnectToServer() );
    iIconSession.GetInitData( iInitData );
    iFileNameCache = CAknIconFileNameCache::NewL();
    User::LeaveIfError( Dll::SetTls( this ) );
    }

// -----------------------------------------------------------------------------
// CAknIconSrvTlsData::InitIconLoaderL
// -----------------------------------------------------------------------------
//
void CAknIconSrvTlsData::InitIconLoaderL( const TDesC& aFileName, RFile* aFile )
    {
    // If the icon file name is different than the one used by the existing icon loader,
    // create a new icon loader. It also opens the file.
    if ( !iFileName || iFileName->CompareF( aFileName ) != 0 )
        {
        delete iFileName;
        iFileName = NULL;

        delete iLoader;
        iLoader = NULL;
        
        if ( aFile )
            {
            iLoader = CAknIconLoader::NewL( *aFile );
            }
        else
            {
            iLoader = CAknIconLoader::NewL( FsSessionL(), aFileName );
            }
        
        iFileName = aFileName.AllocL();
        }
    // Icon loader exists for the requested icon file. Re-open the file.
    else
        {
        if ( aFile )
            {
            iLoader->OpenFileL( *aFile );
            }
        else
            {
            iLoader->OpenFileL( FsSessionL(), aFileName );
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknIconSrvTlsData::GetIconLocationInfo
// -----------------------------------------------------------------------------
//
TInt CAknIconSrvTlsData::GetIconLocationInfo(
    const TDesC& aFileName, TInt16& aBitmapId, TInt16& aMaskId )
    {
    // Compare item. Can be instantiated in stack with this constructor.
    CAknIconLocationInfo info( aFileName );

    TInt index = iIconLocations.FindInOrder( 
        &info, CAknIconLocationInfo::LinearOrder );

    if ( index >= 0 )
        {
        return iIconLocations[index]->GetIconLocation( aBitmapId, aMaskId );
        }
    else
        {
        return KErrNotFound;
        }
    }

// -----------------------------------------------------------------------------
// CAknIconSrvTlsData::StoreIconLocationInfoL
// -----------------------------------------------------------------------------
//
void CAknIconSrvTlsData::StoreIconLocationInfoL( CAknIconLocationInfo* aInfo )
    {
    User::LeaveIfError( iIconLocations.InsertInOrder(
        aInfo, CAknIconLocationInfo::LinearOrder ) );
    }
    
// -----------------------------------------------------------------------------
// CAknIconSrvTlsData::FsSessionL
// -----------------------------------------------------------------------------
//  
RFs& CAknIconSrvTlsData::FsSessionL()
    {
    if ( !iFsSession.Handle() )
        {
        User::LeaveIfError( iFsSession.Connect() );
        }
        
    return iFsSession;
    }

//  End of File  

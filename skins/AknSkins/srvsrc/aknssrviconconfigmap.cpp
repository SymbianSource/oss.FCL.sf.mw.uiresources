/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Contains icon configuration information.
*
*/

#include <centralrepository.h>

#include "aknssrviconconfigmap.h"

// @todo - we should get this from somewhere.
const TUid KUidIconCaptionRepository = { 0x1028583d };

// Highest 8 bit tell the application number which has been configured.
// This is basically a running series, starting from zero.
const TUint32 KAknsSrvAppBits =      0xFF000000;

// Lowest 16 bits tell the language variant strings and icons.
const TUint32 KAknsSrvLanguageBits = 0x0000FFFF;

// Partial key to find the configured apps.
const TUint32 KAknsSrvUidKey  =      0x00FFFFFF;

// How many icons have been configured for this application.
const TUint8 KAknsSrvIconCount = 0x02;

// ======== MEMBER FUNCTIONS ========
// ---------------------------------------------------------------------------
// Symbian 1st phase constructor.
// ---------------------------------------------------------------------------
//
CAknsSrvIconConfigMap* CAknsSrvIconConfigMap::NewL()
    {
    CAknsSrvIconConfigMap* self = new( ELeave ) CAknsSrvIconConfigMap;
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// ---------------------------------------------------------------------------
// Destructor
// ---------------------------------------------------------------------------
//
CAknsSrvIconConfigMap::~CAknsSrvIconConfigMap()
    {
    DeleteCurrentIconMap();
    }

// ---------------------------------------------------------------------------
// Checks if the given application UID is found from array.
// ---------------------------------------------------------------------------
//
void CAknsSrvIconConfigMap::IsIconConfiguredL(
    TUid aApplicationUid, TBool& aIsConfigured )
    {
    if ( iCurrentLanguage != User::Language() )
        {
        CreateAndParseRepositoryL();
        }

    TInt found = iAppUidArray.Find( aApplicationUid.iUid );
    if ( found == KErrNotFound )
        {
        aIsConfigured = EFalse;
        }
    else
        {
        aIsConfigured = ETrue;
        }
    }

// ---------------------------------------------------------------------------
// Destroys the application array.
// ---------------------------------------------------------------------------
//    
void CAknsSrvIconConfigMap::DeleteCurrentIconMap()
    {
    iAppUidArray.Reset();
    iAppUidArray.Close();
    }

// ---------------------------------------------------------------------------
// Reads and parses cenrep configuration file.
// ---------------------------------------------------------------------------
//    
void CAknsSrvIconConfigMap::ReadAndParseConfigFileL( CRepository* aRepository )
    {
    DeleteCurrentIconMap();
    
	RArray<TUint32> appUidKeys;
	CleanupClosePushL( appUidKeys );
	
	// Find all appUID keys that have been configured.
	// error ignored, array is empty in error cases
	aRepository->FindL( KAknsSrvUidKey, ~KAknsSrvAppBits, appUidKeys );
	TInt appCount = appUidKeys.Count();

	for (TInt appIndex = 0; appIndex < appCount; appIndex++)
		{
		TUint32 key = appUidKeys[appIndex];
		TInt appUidVal = 0;
        User::LeaveIfError( aRepository->Get( key, appUidVal ) );
        
        RArray<TUint32> applicationKeys;
        // error ignored, array is empty in error cases
        // Find all configuration keys for this appUid.
        aRepository->FindL( key, KAknsSrvAppBits, applicationKeys );
        TInt appKeyCount = applicationKeys.Count();

	    for (TInt appKeyIndex = 0; appKeyIndex < appKeyCount; appKeyIndex++)
		    {		    
		    // Each application might have the following configured for each language
		    //  - [0..1] short caption (bits 32..25)
		    //  - [0..1] long caption (bits 24..17)
		    //  - [0..1] number of icons (bits 16..9)
		    //  - [0..n] path of icon filename (bits 8..1)
		    TUint32 applicationConfigKey = applicationKeys[appKeyIndex];
		    TUint8 iconNumberblock = applicationConfigKey >> 16;
		    
		    if ( iconNumberblock == KAknsSrvIconCount )
		        {
		        TLanguage language = 
		            static_cast<TLanguage>(applicationConfigKey & KAknsSrvLanguageBits);
		        TInt noOfIcons = 0;
		        User::LeaveIfError( aRepository->Get( applicationConfigKey, noOfIcons ) );
		        if ( (noOfIcons > 0 ) && language == iCurrentLanguage )
		            {
		            iAppUidArray.Append( appUidVal );
		            break; // once appUid has been added, we can skip to next app.
		            }
		        }		   
		    }
		}
    iAppUidArray.Sort();
	CleanupStack::PopAndDestroy(&appUidKeys);
    }

// ---------------------------------------------------------------------------
// Creates, reads and parses central repository.
// ---------------------------------------------------------------------------
//
void CAknsSrvIconConfigMap::CreateAndParseRepositoryL()
    {
    CRepository* iconRepository = CRepository::NewLC( KUidIconCaptionRepository );
    ReadAndParseConfigFileL( iconRepository );
    CleanupStack::PopAndDestroy( iconRepository );
    }

// ---------------------------------------------------------------------------
// C++ constructor.
// ---------------------------------------------------------------------------
//
CAknsSrvIconConfigMap::CAknsSrvIconConfigMap()
    {
    iCurrentLanguage = User::Language();
    }

// ---------------------------------------------------------------------------
// Symbian second phase constructor.
// ---------------------------------------------------------------------------
//
void CAknsSrvIconConfigMap::ConstructL()
    {
    TRAP_IGNORE( CreateAndParseRepositoryL() );
    }

// End of file

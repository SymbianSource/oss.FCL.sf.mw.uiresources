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
* Description:   Implementation of class CAknSourceBitmapIconManager.
*
*/




// INCLUDE FILES
#include "AknSourceBitmapIconManager.h"
#include "AknBitmap.h"
#include "AknIconSrvUtils.h"
#include "AknIconSrvTlsData.h"
#include "akniconconfig.h"
// ============================ MEMBER FUNCTIONS ===============================

// Constructor
CAknSourceBitmapIconManager::CAknSourceBitmapIconManager( CAknIcon* aSourceIcon ) :
    iSourceBitmap( aSourceIcon->Bitmap() ),
    iSourceMask( aSourceIcon->Mask() )
    {
    aSourceIcon->SetBitmap( NULL );
    aSourceIcon->SetMask( NULL );
    delete aSourceIcon;
    }

// Destructor
CAknSourceBitmapIconManager::~CAknSourceBitmapIconManager()
    {
    delete iSourceBitmap;
    delete iSourceMask;
    }

// -----------------------------------------------------------------------------
// CAknSourceBitmapIconManager::LoadBitmapIconL
// -----------------------------------------------------------------------------
//
void CAknSourceBitmapIconManager::LoadBitmapIconL()
    {
    User::LeaveIfError( iBitmap->Duplicate( iSourceBitmap->Handle() ) );
    if ( iMask )
        {
        User::LeaveIfError( iMask->Duplicate( iSourceMask->Handle() ) );
        }
    }

// -----------------------------------------------------------------------------
// CAknSourceBitmapIconManager::DoInitializeIconL
// -----------------------------------------------------------------------------
//
void CAknSourceBitmapIconManager::DoInitializeIconL(
    const TSize& aSize,
    TScaleMode aMode,
    TInt aAngle )
    {
    if ( iInitializedMode == aMode && iInitializedSize == aSize && 
    	 iInitializedAngle == aAngle )
    	{
    	return;
    	}
       
    iBitmap->Reset();
    if ( iMask )
        {
        iMask->Reset();
        }
    
    AknIconSrvUtils::ScaleBitmapIconL(
        aSize,
        aMode,
        aAngle,
        iColor,
        iSourceBitmap,
        iSourceMask,
        iBitmap,
        iMask );
    if ( IsAppIcon() )
    	{
    	AknIconSrvUtils::EnsureValidSizeL(iBitmap, iMask);	
   	 	}
    
    if (!IsCompressionDisabled())
        {
        AknIconConfig::CompressIfPreferred(iBitmap, iMask);    
        }    
    iInitializedMode = aMode;
    iInitializedSize = aSize;
    iInitializedAngle = aAngle;
       
        
    }

//  End of File

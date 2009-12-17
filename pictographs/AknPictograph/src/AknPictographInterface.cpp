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
* Description:  Pictograph interface instance
*
*/



// INCLUDE FILES
#include <featmgr.h>

#include "AknPictographInterface.h"
#include "AknPictographDrawerInterface.h"

// CONSTANTS

typedef MAknPictographDrawer* (*TPictographDrawerFactoryFunctionL)(
    MAknPictographAnimatorCallBack& );

_LIT( KImplementationDllPath, "z:\\sys\\bin" );
_LIT( KImplementationDll, "AknPictographImpl.dll" );

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknPictographInterface::CAknPictographInterface
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknPictographInterface::CAknPictographInterface()
	{
	}

// -----------------------------------------------------------------------------
// CAknPictographInterface::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknPictographInterface::ConstructL( 
    MAknPictographAnimatorCallBack& aCallBack )
    {
    // load polymorphic implementation DLL
    User::LeaveIfError( iLib.Load( KImplementationDll, KImplementationDllPath ) );

    iInterface = ( *(TPictographDrawerFactoryFunctionL)iLib.Lookup( 1 ) )(
        aCallBack );
    }

// -----------------------------------------------------------------------------
// CAknPictographInterface::NewL
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknPictographInterface* CAknPictographInterface::NewL(
    CCoeControl& /*aParent*/,
    MAknPictographAnimatorCallBack& aCallBack )
	{
    FeatureManager::InitializeLibL();

    TBool pictographsSupported = 
        FeatureManager::FeatureSupported( KFeatureIdJapanesePicto );

    FeatureManager::UnInitializeLib();    

    CAknPictographInterface* self = NULL;

    if ( pictographsSupported )
        {
        self = new( ELeave ) CAknPictographInterface();
        CleanupStack::PushL( self );
        self->ConstructL( aCallBack );
        CleanupStack::Pop();
        }

    return self;
	}

// Destructor
CAknPictographInterface::~CAknPictographInterface()
    {
    delete iInterface;
    iLib.Close();
    }

//  End of File  

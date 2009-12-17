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
* Description:  Combined container & iterator for storing RL parameters.
*
*/


// INCLUDE FILES
#include "AknsAlEffectParamContainer.h"

// ============================ INTERNAL CLASSES ===============================
NONSHARABLE_CLASS( CAknsAlParamData ): public CBase
    {
    private:

        CAknsAlParamData()
            {
            // Derived from CBase -> members zeroed automatically
            }

        void ConstructL( const TAknsRlParameterData& aData )
            {
            iName = aData.iName->AllocL();
            iType = aData.iType;

            switch( aData.iType )
                {
                case EAknsRlParameterTypeNumber:
                    iNumber = aData.iNumber;
                    break;
                case EAknsRlParameterTypeString:
                    iBuffer = aData.iString->AllocL();
                    break;
                case EAknsRlParameterTypeGraphics:
                    iBuffer         = aData.iGfx->iFilename->AllocL();
                    iGfx.iFilename  = iBuffer;
                    iGfx.iIndex     = aData.iGfx->iIndex;
                    iGfx.iMaskIndex = aData.iGfx->iMaskIndex;
                    break;
                }
            }

    public:

        static CAknsAlParamData* NewL( const TAknsRlParameterData& aData )
            {
            CAknsAlParamData* self = new(ELeave) CAknsAlParamData();
            CleanupStack::PushL( self );
            self->ConstructL( aData );
            CleanupStack::Pop( self );
            return self;
            }

        virtual ~CAknsAlParamData()
            {
            delete iName;
            delete iBuffer;
            }

        void FillData( TAknsRlParameterData& aData ) const
            {
            aData.iName = iName;
            aData.iType = iType;

            switch( iType )
                {
                case EAknsRlParameterTypeNumber:
                    aData.iNumber = iNumber;
                    break;
                case EAknsRlParameterTypeString:
                    aData.iString = iBuffer;
                    break;
                case EAknsRlParameterTypeGraphics:
                    aData.iGfx = &iGfx;
                    break;
                }
            }

    private:
        HBufC* iName;
        TAknsRlParameterType iType;
        HBufC* iBuffer;
        TInt iNumber;
        TAknsRlGraphicsParam iGfx;
    };

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsAlEffectParamContainer::CAknsAlEffectParamContainer
// -----------------------------------------------------------------------------
//
CAknsAlEffectParamContainer::CAknsAlEffectParamContainer()
    {
    // Derived from CBase -> members zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectParamContainer::CAknsAlEffectParamContainer
// -----------------------------------------------------------------------------
//
CAknsAlEffectParamContainer* CAknsAlEffectParamContainer::NewL()
    {
    CAknsAlEffectParamContainer* self = new(ELeave) CAknsAlEffectParamContainer();
    return self;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectParamContainer::~CAknsAlEffectParamContainer
// -----------------------------------------------------------------------------
//
CAknsAlEffectParamContainer::~CAknsAlEffectParamContainer()
    {
    // Deletes the referenced parameters
    iParams.ResetAndDestroy(); //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectParamContainer::HasNext
// -----------------------------------------------------------------------------
//
TBool CAknsAlEffectParamContainer::HasNext()
    {
    if( iIteratorIndex < iParams.Count() )
        return ETrue;

    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectParamContainer::NextL
// -----------------------------------------------------------------------------
//
const TAknsRlParameterData* CAknsAlEffectParamContainer::NextL()
    {
    if( iParams.Count() <= iIteratorIndex )
        User::Leave( KErrOverflow );

    CAknsAlParamData* param = iParams[iIteratorIndex];
    param->FillData( iIteratorData );

    iIteratorIndex++;

    return &iIteratorData;
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectParamContainer::AddParamL
// -----------------------------------------------------------------------------
//
void CAknsAlEffectParamContainer::AddParamL( const TAknsRlParameterData& aParam )
    {
    CAknsAlParamData* data = CAknsAlParamData::NewL( aParam );
    CleanupStack::PushL( data );
    iParams.AppendL( data );
    CleanupStack::Pop( data );
    }

// -----------------------------------------------------------------------------
// CAknsAlEffectParamContainer::Begin
// -----------------------------------------------------------------------------
//
void CAknsAlEffectParamContainer::Begin()
    {
    iIteratorIndex = 0;
    }

// End of file

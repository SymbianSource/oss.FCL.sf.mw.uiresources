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
* Description:  Defines public item data classes (extension).
*
*/


// INCLUDE FILES

#include <AknsItemData.h>

#include "AknsRlCommand.h"
#include "AknsAlDataAccess.h"

#include "AknsDebug.h"

// CONSTANTS
static const TInt KDefaultAnimationMinimumInterval = 10; // Milliseconds

// INTERNAL CLASSES

NONSHARABLE_CLASS(CAknsEffectParameter) : public CBase
    {
    public: // Construction and destruction
        CAknsEffectParameter()
            {
            }

        virtual ~CAknsEffectParameter()
            {
            delete iName;
            delete iBuffer;
            }

    public: // Setters and getters
        void SetDataL( const TAknsRlParameterData& aData )
            {
            HBufC* temp = aData.iName->AllocL();
            delete iName;
            iName = temp;
            temp = NULL;

            delete iBuffer;
            iBuffer = NULL;

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
                    iBuffer = aData.iGfx->iFilename->AllocL();
                    iGfx.iFilename = iBuffer;
                    iGfx.iIndex = aData.iGfx->iIndex;
                    iGfx.iMaskIndex = aData.iGfx->iMaskIndex;
                    break;
                }
            }

        void GetData( TAknsRlParameterData& aData )
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

    private: // Data
        HBufC* iName;
        TAknsRlParameterType iType;
        HBufC* iBuffer;
        TInt iNumber;
        TAknsRlGraphicsParam iGfx;
    };

NONSHARABLE_CLASS(CAknsParameterIterator) : public CBase,
    public MAknsRlParameterIterator
    {
    public: // Construction and destruction
        CAknsParameterIterator( RPointerArray<CAknsEffectParameter>* aArray )
            : iNextIndex(0), iArray( aArray )
            {
            }
        virtual ~CAknsParameterIterator()
            {
            }
    public: // Methods
        TBool HasNext()
            {
            if( !iArray ) return EFalse;
            if( iNextIndex>=iArray->Count() ) return EFalse;
            return ETrue;
            }
        const TAknsRlParameterData* NextL()
            {
            if( !HasNext() ) User::Leave( KErrArgument );
            (*iArray)[iNextIndex++]->GetData( iCurData );
            return &iCurData;
            }
    private: // Data
        TAknsRlParameterData iCurData;
        TInt iNextIndex;
        RPointerArray<CAknsEffectParameter>* iArray;
    };

NONSHARABLE_CLASS(CAknsCommandIterator) : public CBase,
    public MAknsRlCommandIterator
    {
    public: // Construction and destruction
        CAknsCommandIterator( const RPointerArray<CAknsEffectCommand>* aArray )
            : iNextIndex(0), iArray( aArray )
            {
            iCurData.iParamIterator = NULL;
            }
        virtual ~CAknsCommandIterator()
            {
            delete iCurData.iParamIterator;
            }
    public: // Methods
        TBool HasNext()
            {
            if( !iArray ) return EFalse;
            if( iNextIndex>=iArray->Count() ) return EFalse;
            return ETrue;
            }
        const TAknsRlCommandData* NextL()
            {
            if( !HasNext() ) User::Leave( KErrArgument );

            delete iCurData.iParamIterator;
            iCurData.iParamIterator = NULL;

            iCurData.iEffectUid = (*iArray)[iNextIndex]->EffectUid();
            iCurData.iLayerConf = (*iArray)[iNextIndex]->LayerConf();
            iCurData.iParamIterator =
                (*iArray)[iNextIndex++]->CreateParameterIteratorL();

            return &iCurData;
            }
    private: // Data
        TAknsRlCommandData iCurData;
        TInt iNextIndex;
        const RPointerArray<CAknsEffectCommand>* iArray;
    };

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsEffectCommand::CAknsEffectCommand()
    // CBase initializes: iUid(0)
    {
    }

// -----------------------------------------------------------------------------
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsEffectCommand* CAknsEffectCommand::NewL()
    {
    return new (ELeave) CAknsEffectCommand();
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsEffectCommand::~CAknsEffectCommand()
    {
    iParameters.ResetAndDestroy();
    }

// -----------------------------------------------------------------------------
// CAknsEffectCommand::SetEffectUid
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectCommand::SetEffectUid( const TUid aValue )
    {
    iUid = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsEffectCommand::EffectUid
// -----------------------------------------------------------------------------
//
EXPORT_C TUid CAknsEffectCommand::EffectUid() const
    {
    return iUid;
    }

// -----------------------------------------------------------------------------
// CAknsEffectCommand::SetLayerConf
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectCommand::SetLayerConf(
    const TAknsRlRenderOpParam aValue )
    {
    iLayerConf = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsEffectCommand::LayerConf
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsRlRenderOpParam CAknsEffectCommand::LayerConf() const
    {
    return iLayerConf;
    }

// -----------------------------------------------------------------------------
// CAknsEffectCommand::AppendParameterL
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectCommand::AppendParameterL(
    const TAknsRlParameterData& aParameter )
    {
    CAknsEffectParameter* newParam = new (ELeave) CAknsEffectParameter();
    CleanupStack::PushL( newParam );
    newParam->SetDataL( aParameter );
    User::LeaveIfError( iParameters.Append( newParam ) );
    CleanupStack::Pop( newParam );
    }

// -----------------------------------------------------------------------------
// CAknsEffectCommand::CreateParameterIteratorL
// -----------------------------------------------------------------------------
//
EXPORT_C MAknsRlParameterIterator* CAknsEffectCommand::CreateParameterIteratorL()
    {
    return new (ELeave) CAknsParameterIterator( &iParameters );
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// C++ constructor can NOT contain any code, that might leave.
// -----------------------------------------------------------------------------
//
CAknsEffectQueueItemData::CAknsEffectQueueItemData( const TAknsItemType aType )
    : CAknsItemData( aType ), iInputLayer(-1), iOutputLayer(-1)
    {
    }

// -----------------------------------------------------------------------------
// Two-phased constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsEffectQueueItemData* CAknsEffectQueueItemData::NewL()
    {
    return new (ELeave) CAknsEffectQueueItemData( EAknsITEffectQueue );
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsEffectQueueItemData::~CAknsEffectQueueItemData()
    {
    iCommands.ResetAndDestroy();
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::SetRefItem
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectQueueItemData::SetRefItem( const TAknsItemID aValue )
    {
    iRefId = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::RefItem
// -----------------------------------------------------------------------------
//
EXPORT_C TAknsItemID CAknsEffectQueueItemData::RefItem() const
    {
    return iRefId;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::SetInputLayer
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectQueueItemData::SetInputLayer( const TInt aValue )
    {
    iInputLayer = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::InputLayer
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectQueueItemData::InputLayer() const
    {
    return iInputLayer;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::SetInputLayerMode
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectQueueItemData::SetInputLayerMode( const TInt aValue )
    {
    iInputLayerMode = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::InputLayerMode
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectQueueItemData::InputLayerMode() const
    {
    return iInputLayerMode;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::SetOutputLayer
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectQueueItemData::SetOutputLayer( const TInt aValue )
    {
    iOutputLayer = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::OutputLayer
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectQueueItemData::OutputLayer() const
    {
    return iOutputLayer;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::SetOutputLayerMode
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectQueueItemData::SetOutputLayerMode( const TInt aValue )
    {
    iOutputLayerMode = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::OutputLayerMode
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsEffectQueueItemData::OutputLayerMode() const
    {
    return iOutputLayerMode;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::AppendCommandL
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsEffectQueueItemData::AppendCommandL(
    const CAknsEffectCommand* aCommand )
    {
    User::LeaveIfError( iCommands.Append( aCommand ) );
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::CreateCommandIteratorL
// -----------------------------------------------------------------------------
//
EXPORT_C MAknsRlCommandIterator* CAknsEffectQueueItemData::CreateCommandIteratorL()
    {
    return new (ELeave) CAknsCommandIterator( &iCommands );
    }

// ============================ MEMBER FUNCTIONS ===============================

template < class TOut, class TIn >
class CAknsAlIterator: public CBase, public MAknsAlIterator
    {
    public: // Construction and destruction

        CAknsAlIterator( const RPointerArray<TIn>* aArray )
            : iNextIndex(0), iArray( aArray )
            {
            TIn::InitializeOut( iCurData );
            }

        virtual ~CAknsAlIterator()
            {
            TIn::ReleaseOut( iCurData );
            }

    public: // Methods

        TBool HasNext()
            {
            if( !iArray ) return EFalse;
            if( iNextIndex>=iArray->Count() ) return EFalse;
            return ETrue;
            }

        const TAny* NextL()
            {
            if( !HasNext() ) User::Leave( KErrArgument );

            (*iArray)[iNextIndex++]->AssignOutL( iCurData );

            return &iCurData;
            }

    private: // Data
        TOut iCurData;
        TInt iNextIndex;
        const RPointerArray<TIn>* iArray;
    };

// Some convenient type definitions
typedef CAknsAlIterator< TAknsAlAnimationCommandData, CAknsAnimationCommand > CAknsCommandIter;
typedef CAknsAlIterator< TAknsAlTimingModelData, CAknsTimingModel > CAknsTimingModelIter;
typedef CAknsAlIterator< TAknsAlAnimationValueData, CAknsAnimationValue > CAknsValueIter;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Symbian two-phase constructor.
// -----------------------------------------------------------------------------
//
CAknsTimingModel* CAknsTimingModel::NewL()
    {
    return new (ELeave) CAknsTimingModel();
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsTimingModel::~CAknsTimingModel()
    {
    iParameters.ResetAndDestroy(); // Deletes the referenced parameters
    }

// -----------------------------------------------------------------------------
// C++ default constructor.
// -----------------------------------------------------------------------------
//
CAknsTimingModel::CAknsTimingModel()
    {
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::SetTimingModelUid
// -----------------------------------------------------------------------------
//
void CAknsTimingModel::SetTimingModelUid( const TUid aValue )
    {
    iTimingModelUid = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::TimingModelUid
// -----------------------------------------------------------------------------
//
TUid CAknsTimingModel::TimingModelUid() const
    {
    return iTimingModelUid;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::AppendParameterL
// -----------------------------------------------------------------------------
//
void CAknsTimingModel::AppendParameterL( const TAknsRlParameterData& aParameter )
    {
    CAknsEffectParameter* newParam = new (ELeave) CAknsEffectParameter();
    CleanupStack::PushL( newParam );
    newParam->SetDataL( aParameter );
    User::LeaveIfError( iParameters.Append( newParam ) );
    CleanupStack::Pop( newParam );
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::CreateParameterIteratorL
// -----------------------------------------------------------------------------
//
MAknsRlParameterIterator* CAknsTimingModel::CreateParameterIteratorL()
    {
    return new (ELeave) CAknsParameterIterator( &iParameters );
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::AssignOutL
// -----------------------------------------------------------------------------
//
void CAknsTimingModel::AssignOutL( TAknsAlTimingModelData& aData )
    {
    delete aData.iParamIterator;
    aData.iParamIterator = NULL;

    aData.iTimingModelUid = iTimingModelUid;
    aData.iParamIterator  = CreateParameterIteratorL();
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::InitializeOut
// -----------------------------------------------------------------------------
//
void CAknsTimingModel::InitializeOut( TAknsAlTimingModelData& aData )
    {
    aData.iParamIterator = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsEffectQueueItemData::ReleaseOut
// -----------------------------------------------------------------------------
//
void CAknsTimingModel::ReleaseOut( TAknsAlTimingModelData& aData )
    {
    delete aData.iParamIterator;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Symbian two-phase constructor.
// -----------------------------------------------------------------------------
//
CAknsAnimationValue* CAknsAnimationValue::NewL()
    {
    return new (ELeave) CAknsAnimationValue();
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsAnimationValue::~CAknsAnimationValue()
    {
    iParameters.ResetAndDestroy(); // Deletes the referenced parameters
    }

// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknsAnimationValue::CAknsAnimationValue()
    {
    }

// -----------------------------------------------------------------------------
// CAknsAnimationValue::SetAnimationValueUid
// -----------------------------------------------------------------------------
//
void CAknsAnimationValue::SetAnimationValueUid( const TUid aValue )
    {
    iAnimationValueUid = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationValue::AnimationValueUid
// -----------------------------------------------------------------------------
//
TUid CAknsAnimationValue::AnimationValueUid() const
    {
    return iAnimationValueUid;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationValue::SetTimingModelId
// -----------------------------------------------------------------------------
//
void CAknsAnimationValue::SetTimingModelId( const TInt aValue )
    {
    iTimingModelId = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationValue::TimingModelId
// -----------------------------------------------------------------------------
//
TInt CAknsAnimationValue::TimingModelId() const
    {
    return iTimingModelId;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationValue::AppendParameterL
// -----------------------------------------------------------------------------
//
void CAknsAnimationValue::AppendParameterL( const TAknsRlParameterData& aParameter )
    {
    CAknsEffectParameter* newParam = new (ELeave) CAknsEffectParameter();
    CleanupStack::PushL( newParam );
    newParam->SetDataL( aParameter );
    User::LeaveIfError( iParameters.Append( newParam ) );
    CleanupStack::Pop( newParam );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationValue::CreateParameterIteratorL
// -----------------------------------------------------------------------------
//
MAknsRlParameterIterator* CAknsAnimationValue::CreateParameterIteratorL()
    {
    return new (ELeave) CAknsParameterIterator( &iParameters );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationValue::AssignOutL
// -----------------------------------------------------------------------------
//
void CAknsAnimationValue::AssignOutL( TAknsAlAnimationValueData& aData )
    {
    delete aData.iParamIterator;
    aData.iParamIterator = NULL;

    aData.iTimingModelId     = iTimingModelId;
    aData.iAnimationValueUid = iAnimationValueUid;
    aData.iParamIterator     = CreateParameterIteratorL();
    }

// -----------------------------------------------------------------------------
// CAknsAnimationValue::InitializeOut
// -----------------------------------------------------------------------------
//
void CAknsAnimationValue::InitializeOut( TAknsAlAnimationValueData& aData )
    {
    aData.iParamIterator = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationValue::ReleaseOut
// -----------------------------------------------------------------------------
//
void CAknsAnimationValue::ReleaseOut( TAknsAlAnimationValueData& aData )
    {
    delete aData.iParamIterator;
    }

// ============================ MEMBER FUNCTIONS ===============================

NONSHARABLE_CLASS(CAknsNamedReference) : public CBase
    {
    public: // Construction and destruction
        CAknsNamedReference()
            {
            // Derived from CBase -> members zeroed
            }

        virtual ~CAknsNamedReference()
            {
            delete iName;
            }

    public: // Setters and getters
        void SetDataL( const TAknsAlNamedReferenceData& aData )
            {
            HBufC* temp = aData.iName->AllocL();
            delete iName;
            iName = temp;
            temp = NULL;

            iAnimationValueId = aData.iAnimationValueId;
            }

        void AssignOutL( TAknsAlNamedReferenceData& aData )
            {
            aData.iName = iName;
            aData.iAnimationValueId = iAnimationValueId;
            }

        static void InitializeOut( TAknsAlNamedReferenceData& )
            {
            }

        static void ReleaseOut( TAknsAlNamedReferenceData& )
            {
            }

    private: // Data
        HBufC* iName;
        TInt iAnimationValueId;
    };

typedef CAknsAlIterator< TAknsAlNamedReferenceData, CAknsNamedReference > CAknsNamedReferenceIter;

// ============================ MEMBER FUNCTIONS ===============================

NONSHARABLE_CLASS(CAknsSizeBoundParameter) : public CBase
    {
    public: // Construction and destruction
        CAknsSizeBoundParameter()
            {
            // Derived from CBase -> members zeroed
            }

        virtual ~CAknsSizeBoundParameter()
            {
            delete iName;
            }

    public: // Setters and getters
        void SetDataL( const TAknsAlSizeBoundParameterData& aData )
            {
            HBufC* temp = aData.iName->AllocL();
            delete iName;
            iName = temp;
            temp = NULL;

            iAnimationValueId = aData.iAnimationValueId;
            iParamFlags = aData.iParamFlags;
            }

        void AssignOutL( TAknsAlSizeBoundParameterData& aData )
            {
            aData.iName = iName;
            aData.iAnimationValueId = iAnimationValueId;
            aData.iParamFlags = iParamFlags;
            }

        static void InitializeOut( TAknsAlSizeBoundParameterData& )
            {
            }

        static void ReleaseOut( TAknsAlSizeBoundParameterData& )
            {
            }

    private: // Data
        HBufC* iName;
        TInt iAnimationValueId;
        TInt iParamFlags;
    };

typedef CAknsAlIterator< TAknsAlSizeBoundParameterData, CAknsSizeBoundParameter > CAknsSizeBoundParameterIter;

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Two-phase constructor.
// -----------------------------------------------------------------------------
//
CAknsAnimationCommand* CAknsAnimationCommand::NewL()
    {
    return new (ELeave) CAknsAnimationCommand();
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsAnimationCommand::~CAknsAnimationCommand()
    {
    iNamedReferences.ResetAndDestroy();
    }

// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknsAnimationCommand::CAknsAnimationCommand()
    {
    }

// -----------------------------------------------------------------------------
// CAknsAnimationCommand::AppendNamedReferenceL
// -----------------------------------------------------------------------------
//
void CAknsAnimationCommand::AppendNamedReferenceL(
    const TAknsAlNamedReferenceData& aData )
    {
    CAknsNamedReference* ref = new (ELeave) CAknsNamedReference();
    CleanupStack::PushL( ref );
    ref->SetDataL( aData );
    User::LeaveIfError( iNamedReferences.Append( ref ) );
    CleanupStack::Pop( ref );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationCommand::CreateNamedReferenceIteratorL
// -----------------------------------------------------------------------------
//
MAknsAlIterator* CAknsAnimationCommand::CreateNamedReferenceIteratorL()
    {
    return new (ELeave) CAknsNamedReferenceIter( &iNamedReferences );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationCommand::AssignOutL
// -----------------------------------------------------------------------------
//
void CAknsAnimationCommand::AssignOutL( TAknsAlAnimationCommandData& aData )
    {
    delete aData.iParamIterator;
    aData.iParamIterator = NULL;

    delete aData.iNamedReferenceIterator;
    aData.iNamedReferenceIterator = NULL;

    aData.iLayerConf              = iLayerConf;
    aData.iEffectUid              = iUid;
    aData.iParamIterator          = CreateParameterIteratorL();
    aData.iNamedReferenceIterator = CreateNamedReferenceIteratorL();
    }

// -----------------------------------------------------------------------------
// CAknsAnimationCommand::InitializeOut
// -----------------------------------------------------------------------------
//
void CAknsAnimationCommand::InitializeOut( TAknsAlAnimationCommandData& aData )
    {
    aData.iParamIterator          = NULL;
    aData.iNamedReferenceIterator = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationCommand::ReleaseOut
// -----------------------------------------------------------------------------
//
void CAknsAnimationCommand::ReleaseOut( TAknsAlAnimationCommandData& aData )
    {
    delete aData.iParamIterator;
    delete aData.iNamedReferenceIterator;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// Symbian two-phase constructor.
// -----------------------------------------------------------------------------
//
CAknsAnimationItemData* CAknsAnimationItemData::NewL()
    {
    return new (ELeave) CAknsAnimationItemData();
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsAnimationItemData::~CAknsAnimationItemData()
    {
    iPreprocessCommands.ResetAndDestroy();
    iAnimationCommands.ResetAndDestroy();
    iAnimationValues.ResetAndDestroy();
    iTimingModels.ResetAndDestroy();
    iSizeBoundParams.ResetAndDestroy();
    }

// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknsAnimationItemData::CAknsAnimationItemData():
    CAknsItemData( EAknsITAnimation ),
    iMinInterval( KDefaultAnimationMinimumInterval )
    {
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::SetMinInterval
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::SetMinInterval( TInt aMin )
    {
    iMinInterval = aMin;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::MinInterval
// -----------------------------------------------------------------------------
//
TInt CAknsAnimationItemData::MinInterval() const
    {
    return iMinInterval;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::SetMorphing
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::SetMorphing( TBool aMorphing )
    {
    iMorphing = aMorphing;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::Morphing
// -----------------------------------------------------------------------------
//
TBool CAknsAnimationItemData::Morphing() const
    {
    return iMorphing;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::SetInputLayer
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::SetInputLayer( const TInt aValue )
    {
    iInputLayer = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::InputLayer
// -----------------------------------------------------------------------------
//
TInt CAknsAnimationItemData::InputLayer() const
    {
    return iInputLayer;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::SetInputLayerMode
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::SetInputLayerMode( const TInt aValue )
    {
    iInputLayerMode = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::InputLayerMode
// -----------------------------------------------------------------------------
//
TInt CAknsAnimationItemData::InputLayerMode() const
    {
    return iInputLayerMode;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::SetOutputLayer
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::SetOutputLayer( const TInt aValue )
    {
    iOutputLayer = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::OutputLayer
// -----------------------------------------------------------------------------
//
TInt CAknsAnimationItemData::OutputLayer() const
    {
    return iOutputLayer;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::SetOutputLayerMode
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::SetOutputLayerMode( const TInt aValue )
    {
    iOutputLayerMode = aValue;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::OutputLayerMode
// -----------------------------------------------------------------------------
//
TInt CAknsAnimationItemData::OutputLayerMode() const
    {
    return iOutputLayerMode;
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::AppendPreprocessCommandL
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::AppendPreprocessCommandL(
    CAknsEffectCommand* aCommand )
    {
    User::LeaveIfError( iPreprocessCommands.Append( aCommand ) );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::PreprocessCommandIteratorL
// -----------------------------------------------------------------------------
//
MAknsRlCommandIterator* CAknsAnimationItemData::PreprocessCommandIteratorL() const
    {
    return new (ELeave) CAknsCommandIterator( &iPreprocessCommands );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::AppendCommandL
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::AppendCommandL( CAknsAnimationCommand* aCommand )
    {
    User::LeaveIfError( iAnimationCommands.Append( aCommand ) );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::CommandIteratorL
// -----------------------------------------------------------------------------
//
MAknsAlIterator* CAknsAnimationItemData::CommandIteratorL() const
    {
    return new (ELeave) CAknsCommandIter( &iAnimationCommands );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::AppendAnimationValueL
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::AppendAnimationValueL( CAknsAnimationValue* aData )
    {
    User::LeaveIfError( iAnimationValues.Append( aData ) );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::AnimationValueIteratorL
// -----------------------------------------------------------------------------
//
MAknsAlIterator* CAknsAnimationItemData::AnimationValueIteratorL() const
    {
    return new (ELeave) CAknsValueIter( &iAnimationValues );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::AppendTimingModelL
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::AppendTimingModelL( CAknsTimingModel* aData )
    {
    User::LeaveIfError( iTimingModels.Append( aData ) );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::TimingModelIteratorL
// -----------------------------------------------------------------------------
//
MAknsAlIterator* CAknsAnimationItemData::TimingModelIteratorL() const
    {
    return new (ELeave) CAknsTimingModelIter( &iTimingModels );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::AppendSizeBoundParamL
// -----------------------------------------------------------------------------
//
void CAknsAnimationItemData::AppendSizeBoundParamL(
    const TAknsAlSizeBoundParameterData& aData )
    {
    CAknsSizeBoundParameter* parameter = new (ELeave) CAknsSizeBoundParameter();
    CleanupStack::PushL( parameter );
    parameter->SetDataL( aData );
    User::LeaveIfError( iSizeBoundParams.Append( parameter ) );
    CleanupStack::Pop( parameter );
    }

// -----------------------------------------------------------------------------
// CAknsAnimationItemData::SizeBoundParamIteratorL
// -----------------------------------------------------------------------------
//
MAknsAlIterator* CAknsAnimationItemData::SizeBoundParamIteratorL() const
    {
    return new(ELeave) CAknsSizeBoundParameterIter( &iSizeBoundParams );
    }

//  End of File

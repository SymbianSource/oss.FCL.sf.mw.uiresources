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
* Description:  A toolkit class for creating RL effect queues from AnimationLibrary
*                animations.
*
*/


// INCLUDE FILES
#include "AknsRlCommand.h"

#include "AknsAlConversionUtil.h"

#include "AknsAlShared.h"
#include "AknsAlTimingModel.h"
#include "AknsAlAnimationFactory.h"
#include "AknsAlDataAccess.h"

#include <AknsItemData.h>
#include <AknsConstants.h>

// ============================ MEMBER FUNCTIONS ===============================
NONSHARABLE_CLASS( CAknsAlAnimConverter ): public CBase
    {
    protected: // Protected construction
        CAknsAlAnimConverter();

    public:
        ~CAknsAlAnimConverter();
        static CAknsAlAnimConverter* NewL();

        CAknsEffectQueueItemData* CreateEffectQueueL( const CAknsAnimationItemData& aAnim,
                                                      const TTime& aTimeStamp );
    private:

        MAknsAlTimingModel* FindTimingModelById( TInt aId ) const;
        CAknsAlAnimationValueContainer* FindContainerById( TInt aId ) const;

        void CreateTimingModelsL( const CAknsAnimationItemData& aAnim );
        void CreateAnimationValueContainersL( const CAknsAnimationItemData& aAnim );

        void Tick( const TTime& aTimeStamp );

    private:
        RPointerArray<MAknsAlTimingModel> iTimingModels;
        RPointerArray<CAknsAlAnimationValueContainer> iValueContainers;
    };

// -----------------------------------------------------------------------------
// CAknsAlAnimConverter::CAknsAlAnimConverter
// -----------------------------------------------------------------------------
//
CAknsAlAnimConverter::CAknsAlAnimConverter()
    {
    // Derived from CBase -> members zeroed
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimConverter::~CAknsAlAnimConverter
// -----------------------------------------------------------------------------
//
CAknsAlAnimConverter::~CAknsAlAnimConverter()
    {
    iTimingModels.ResetAndDestroy(); //lint !e1551 No exception thrown
    iValueContainers.ResetAndDestroy(); //lint !e1551 No exception thrown
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimConverter::NewL
// -----------------------------------------------------------------------------
//
CAknsAlAnimConverter* CAknsAlAnimConverter::NewL()
    {
    return new(ELeave) CAknsAlAnimConverter();
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimConverter::FindTimingModelById
// -----------------------------------------------------------------------------
//
MAknsAlTimingModel* CAknsAlAnimConverter::FindTimingModelById( TInt aId ) const
    {
    if( 0 <= aId && aId < iTimingModels.Count() )
        return iTimingModels[ aId ];

    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimConverter::FindContainerById
// -----------------------------------------------------------------------------
//
CAknsAlAnimationValueContainer* CAknsAlAnimConverter::FindContainerById( TInt aId ) const
    {
    if( 0 <= aId && aId < iValueContainers.Count() )
        return iValueContainers[ aId ];

    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimConverter::CreateTimingModelsL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimConverter::CreateTimingModelsL(
    const CAknsAnimationItemData& aAnim )
    {
    MAknsAlIterator* timingModels = aAnim.TimingModelIteratorL();
    CleanupStack::PushL( TCleanupItem( MAknsAlIterator::CleanupOp, timingModels ) );

    while( timingModels->HasNext() )
        {
        const TAknsAlTimingModelData* item =
            static_cast<const TAknsAlTimingModelData*>( timingModels->NextL() );
        MAknsAlTimingModel* model =
            AknsAlAnimationFactory::CreateTimingModelL( item->iTimingModelUid );
        CleanupStack::PushL( TCleanupItem( MAknsAlTimingModel::CleanupOp, model ) );

        if( item->iParamIterator )
            model->SetParametersL( *item->iParamIterator );

        User::LeaveIfError( iTimingModels.Append( model ) );

        CleanupStack::Pop(); // model
        }

    CleanupStack::PopAndDestroy(); // timingModels
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimConverter::CreateAnimationValueContainersL
// -----------------------------------------------------------------------------
//
void CAknsAlAnimConverter::CreateAnimationValueContainersL(
    const CAknsAnimationItemData& aAnim )
    {
    MAknsAlIterator* iter = aAnim.AnimationValueIteratorL();
    CleanupStack::PushL( TCleanupItem( MAknsAlIterator::CleanupOp, iter ) );

    while( iter->HasNext() )
        {
        const TAknsAlAnimationValueData* data =
            static_cast<const TAknsAlAnimationValueData*>( iter->NextL() );

        // Create animation value
        MAknsAlAnimationValue* value =
            AknsAlAnimationFactory::CreateAnimationValueL( data->iAnimationValueUid );

        CleanupStack::PushL( TCleanupItem( MAknsAlAnimationValue::CleanupOp, value ) );

        if( data->iParamIterator )
            value->SetParametersL( *data->iParamIterator );

        // Fetch timing model
        MAknsAlTimingModel* timing = FindTimingModelById( data->iTimingModelId );
        if( !timing )
            User::Leave( KErrNotFound );

        // Create the container
        CAknsAlAnimationValueContainer* container =
            CAknsAlAnimationValueContainer::NewL( value, timing );

        CleanupStack::Pop(); // value, now owned by container

        CleanupStack::PushL( container );
        User::LeaveIfError( iValueContainers.Append( container ) );
        CleanupStack::Pop( container );
        }

    CleanupStack::PopAndDestroy(); // iter
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimConverter::Tick
// -----------------------------------------------------------------------------
//
void CAknsAlAnimConverter::Tick( const TTime& aTimeStamp )
    {
    TInt i, count;

    // Update timing models
    count = iTimingModels.Count();
    for( i=0; i < count; i++ )
        {
        iTimingModels[i]->Begin();
        iTimingModels[i]->Tick( aTimeStamp );
        }

    // Update animation values
    count = iValueContainers.Count();
    for( i=0; i < count; i++ )
        {
        iValueContainers[i]->Begin();
        // Zero delta time is being used because timing models are (or at least
        // should be) relative -> no real-time timing models from where to
        // fetch delta time.
        iValueContainers[i]->Tick( 0 );
        }
    }

// -----------------------------------------------------------------------------
// CAknsAlAnimConverter::CreateEffectQueueL
// -----------------------------------------------------------------------------
//
CAknsEffectQueueItemData* CAknsAlAnimConverter::CreateEffectQueueL(
    const CAknsAnimationItemData& aAnim,
    const TTime& aTimeStamp )
    {
    // Create timing models and animation values
    CreateTimingModelsL( aAnim );
    CreateAnimationValueContainersL( aAnim );

    // Tick the animation to time stamp
    Tick( aTimeStamp );

    // Start the actual conversion
    CAknsEffectQueueItemData* queue = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( queue );

    // Set up layers
    queue->SetInputLayer( aAnim.InputLayer() );
    queue->SetInputLayerMode( aAnim.InputLayerMode() );
    queue->SetOutputLayer( aAnim.OutputLayer() );
    queue->SetOutputLayerMode( aAnim.OutputLayerMode() );

    // This is a concrete effect queue
    queue->SetRefItem( KAknsIIDDefault );

    //---------------------------------
    // Add preprocessing commands
    MAknsRlCommandIterator* cmdIter = aAnim.PreprocessCommandIteratorL();
    CleanupStack::PushL( TCleanupItem( MAknsRlCommandIterator::CleanupOperation, cmdIter ) );

    while( cmdIter->HasNext() )
        {
        const TAknsRlCommandData* data = cmdIter->NextL();
        CAknsEffectCommand* cmd = CAknsEffectCommand::NewL();
        CleanupStack::PushL( cmd );

        cmd->SetEffectUid( data->iEffectUid );
        cmd->SetLayerConf( data->iLayerConf );

        // Add initial parameters
        if( data->iParamIterator )
            {
            MAknsRlParameterIterator* paramIter = data->iParamIterator;
            while( paramIter->HasNext() )
                {
                const TAknsRlParameterData* param = paramIter->NextL();
                cmd->AppendParameterL( *param );
                }
            }

        // Preprocess commands don't have named references

        queue->AppendCommandL( cmd );
        CleanupStack::Pop( cmd );
        }

    CleanupStack::PopAndDestroy(); // cmdIter

    //---------------------------------
    // Create effect commands
    MAknsAlIterator* animCmdIter = aAnim.CommandIteratorL();
    CleanupStack::PushL( TCleanupItem( MAknsAlIterator::CleanupOp, animCmdIter ) );

    while( animCmdIter->HasNext() )
        {
        const TAknsAlAnimationCommandData* data =
            static_cast<const TAknsAlAnimationCommandData*>( animCmdIter->NextL() );

        CAknsEffectCommand* cmd = CAknsEffectCommand::NewL();
        CleanupStack::PushL( cmd );

        cmd->SetEffectUid( data->iEffectUid );
        cmd->SetLayerConf( data->iLayerConf );

        // Add initial parameters
        if( data->iParamIterator )
            {
            MAknsRlParameterIterator* paramIter = data->iParamIterator;
            while( paramIter->HasNext() )
                {
                const TAknsRlParameterData* param = paramIter->NextL();
                cmd->AppendParameterL( *param );
                }
            }

        // Add named reference values (parameters bound to animation values)
        if( data->iNamedReferenceIterator )
            {
            TAknsRlParameterData paramData;
            MAknsAlIterator* refIter = data->iNamedReferenceIterator;
            while( refIter->HasNext() )
                {
                const TAknsAlNamedReferenceData* ref =
                    static_cast<const TAknsAlNamedReferenceData*>( refIter->NextL() );

                CAknsAlAnimationValueContainer* container = FindContainerById( ref->iAnimationValueId );
                if( !container )
                    User::Leave( KErrNotFound );

                container->AnimationValue()->FillData( paramData );
                paramData.iName = ref->iName;

                cmd->AppendParameterL( paramData );
                }
            }

        queue->AppendCommandL( cmd );
        CleanupStack::Pop( cmd );
        }

    CleanupStack::PopAndDestroy(); // animCmdIter

    CleanupStack::Pop( queue );
    return queue;
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsAlConversionUtil::AnimationToEffectQueueL
// -----------------------------------------------------------------------------
//
CAknsEffectQueueItemData* AknsAlConversionUtil::AnimationToEffectQueueL(
    const CAknsAnimationItemData& aAnim,
    const TTime& aTimeStamp )
    {
    CAknsAlAnimConverter* converter = CAknsAlAnimConverter::NewL();
    CleanupStack::PushL( converter );

    CAknsEffectQueueItemData* queue =
        converter->CreateEffectQueueL( aAnim, aTimeStamp );

    CleanupStack::PopAndDestroy( converter );

    return queue;
    }

// End of file

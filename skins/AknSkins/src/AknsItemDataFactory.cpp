/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Defines an internal static factory class AknsItemDataFactory.
*
*/


// INCLUDE FILES
#include "AknsCppPreface.h"

#include <eikenv.h>
#include <AknIconUtils.h>
#include <AknsSrvClient.h>

#include "AknsItemDataFactory.h"
#include "AknsAlDataAccess.h"
#include <AknsConstants.h>
#include <AknsImageAttributeData.h>
#include "AknsDebug.h"
#include <AknsUtils.h>
#include "AknsAppSkinInstance.h"
#include "AknsFsHandleProvider.h"

AKNS_UNDEFINED_METHOD(AknsItemDataFactory::AknsItemDataFactory)

// Path to private directory.
_LIT(KAknsSrvPrivateLocation, "private\\10207114\\");

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// AknsItemDataFactory::CreateL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsItemData* AknsItemDataFactory::CreateL( const CAknsItemDef* aDef )
    {
    AKNS_TRACE_INFO2("AknsItemDataFactory::CreateL (%i,%i)",
        aDef->ID().iMajor, aDef->ID().iMinor );
    CAknsItemData *resData = NULL;

    switch( aDef->Type() )
        {
        case EAknsITBitmap:
            {
            AKNS_TRACE_INFO("AknsItemDataFactory::CreateL BITMAP");
            const CAknsBitmapItemDef* bmpDef =
                static_cast<const CAknsBitmapItemDef*>(aDef);
            resData = CreateBitmapL( bmpDef->Filename(), bmpDef->Index(),
                bmpDef->Attributes() );
            break;
            }
        case EAknsITMaskedBitmap:
            {
            AKNS_TRACE_INFO("AknsItemDataFactory::CreateL MASKEDBITMAP");
            const CAknsMaskedBitmapItemDef* bmpDef =
                static_cast<const CAknsMaskedBitmapItemDef*>(aDef);
            resData = CreateMaskedBitmapL( bmpDef->Filename(), bmpDef->Index(),
                bmpDef->MaskIndex(), bmpDef->Attributes() );
            break;
            }
        case EAknsITColorTable:
            {
            AKNS_TRACE_INFO("AknsItemDataFactory::CreateL COLORTABLE");
            const CAknsColorTableItemDef* colorDef =
                static_cast<const CAknsColorTableItemDef*>(aDef);
            resData = CreateColorTableL( colorDef->NumberOfColors(),
                colorDef->Colors(), colorDef->Attributes() );
            break;
            }
        case EAknsITImageTable:
            {
            AKNS_TRACE_INFO("AknsItemDataFactory::CreateL IMAGETABLE");
            const CAknsImageTableItemDef* imageDef =
                static_cast<const CAknsImageTableItemDef*>(aDef);
            resData = CreateImageTableL( imageDef->NumberOfImages(),
                imageDef->Images(), imageDef->Attributes() );
            break;
            }
        case EAknsITBmpAnim:
            {
            AKNS_TRACE_INFO("AknsItemDataFactory::CreateL BMPANIM");
            const CAknsBmpAnimItemDef* animDef =
                static_cast<const CAknsBmpAnimItemDef*>(aDef);
            resData = CreateBmpAnimL( animDef->NumberOfImages(),
                animDef->Images(), animDef->FrameInfos(),
                animDef->LastFrameBackground(), animDef->FrameInterval(),
                animDef->PlayMode(), animDef->Flash(),
                animDef->Attributes() );
            break;
            }
        case EAknsITString:
            {
            AKNS_TRACE_INFO("AknsItemDataFactory::CreateL STRING");
            const CAknsStringItemDef* stringDef =
                static_cast<const CAknsStringItemDef*>(aDef);
            resData = CreateStringL( stringDef->String() );
            break;
            }
        case EAknsITEffectQueue:
            {
            AKNS_TRACE_INFO("AknsItemDataFactory::CreateL EFFECT QUEUE");
            const CAknsEffectQueueItemDef* eqDef =
                static_cast<const CAknsEffectQueueItemDef*>(aDef);
            resData = CreateEffectQueueL( eqDef );
            break;
            }
        case EAknsITAnimation:
            {
            AKNS_TRACE_INFO("AknsItemDataFactory::CreateL AL ANIMATION");
            const CAknsAnimationItemDef* animDef =
                static_cast<const CAknsAnimationItemDef*>(aDef);
            resData = CreateAnimationL( animDef );
            break;
            }
        case EAknsITUnknown:
        case EAknsITImage:
        default:
            AKNS_TRACE_ERROR("AknsItemDataFactory::CreateL UNSUPPORTED TYPE");
            User::Leave( KErrNotSupported );
        }

    if( !resData )
        {
        AKNS_TRACE_ERROR("AknsItemDataFactory::CreateL NOT FOUND");
        User::Leave( KErrNotFound );
        }

    return resData;
    }

// -----------------------------------------------------------------------------
// AknsItemDataFactory::CreateBitmapL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsBitmapItemData* AknsItemDataFactory::CreateBitmapL(
    const TDesC& aFilename, const TInt aIndex,
    const TAknsImageAttributeData* aAttributes )
    {
    AKNS_TRACE_INFO("AknsItemDataFactory::CreateBitmapL Started");

    CFbsBitmap* bitmap = NULL;

    if( aFilename.Compare(KAknsSrvRAMBitmapName) == 0 )
        {
        AKNS_TRACE_INFO("AknsItemDataFactory::CreateBitmapL RAMBitmap/Duplicate");
        bitmap = new (ELeave) CFbsBitmap;
        CleanupStack::PushL( bitmap );
        User::LeaveIfError( bitmap->Duplicate(aIndex) );
        }
    else
        {
        AKNS_TRACE_INFO("AknsItemDataFactory::CreateBitmapL CreateIcon");
        AKNS_TRACE_INFO2("AknsItemDataFactory::CreateBitmapL Calling icon utils %S %i", &aFilename, aIndex );

        CAknsAppSkinInstance* skininstance = (CAknsAppSkinInstance*)(AknsUtils::SkinInstance());

        TInt res = aFilename.FindF(KAknsSrvPrivateLocation);
#if defined(_DEBUG)
        TInt createErr(KErrNone);
        if (res >= 0)
            {
            CAknsFsHandleProvider* provider = CAknsFsHandleProvider::NewL(&(skininstance->iSession), aFilename);
            // AknIconUtils will call CAknsFsHandleProvider::Finished when it is ready => deletes the object.
            TRAP( createErr, (bitmap = AknIconUtils::CreateIconL(
                *provider, aIndex)) );
            }
        else
            {
            TRAP( createErr, (bitmap = AknIconUtils::CreateIconL(
                aFilename, aIndex)) );
            }

        if( createErr != KErrNone )
            {
            AKNS_TRACE_ERROR1("AknsItemDataFactory::CreateBitmapL AknIconUtils failed %i", createErr );
            User::Leave( createErr );
            }
#else
        if (res >= 0)
            {
            CAknsFsHandleProvider* provider = CAknsFsHandleProvider::NewL(&(skininstance->iSession), aFilename);
            // AknIconUtils will call CAknsFsHandleProvider::Finished when it is ready => deletes the object
            bitmap = AknIconUtils::CreateIconL( *provider, aIndex );
            }
        else
            {
            bitmap = AknIconUtils::CreateIconL( aFilename, aIndex );
            }
#endif // _DEBUG
        CleanupStack::PushL( bitmap );
        }

    CAknsBitmapItemData* resData = CAknsBitmapItemData::NewL();
    resData->SetBitmap( bitmap );
    CleanupStack::Pop( bitmap ); // bitmap (now owned by resData)

    CleanupStack::PushL( resData );
    SetAttributesL( resData, aAttributes );
    CleanupStack::Pop( resData );

    AKNS_TRACE_INFO("AknsItemDataFactory::CreateBitmapL Success");

    return resData;
    }

// -----------------------------------------------------------------------------
// AknsItemDataFactory::CreateMaskedBitmapL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsMaskedBitmapItemData* AknsItemDataFactory::CreateMaskedBitmapL(
    const TDesC& aFilename, const TInt aIndex, const TInt aMaskIndex,
    const TAknsImageAttributeData* aAttributes )
    {
    AKNS_TRACE_INFO("AknsItemDataFactory::CreateMaskedBitmapL Started");

    CFbsBitmap* bitmap = NULL;
    CFbsBitmap* mask = NULL;

    if( aFilename.Compare(KAknsSrvRAMBitmapName) == 0 )
        {
        AKNS_TRACE_INFO("AknsItemDataFactory::CreateMaskedBitmapL RAMBitmap/Duplicate");
        bitmap = new (ELeave) CFbsBitmap;
        CleanupStack::PushL( bitmap );
        mask = new (ELeave) CFbsBitmap;
        CleanupStack::PushL( mask );
        User::LeaveIfError( bitmap->Duplicate(aIndex) );
        User::LeaveIfError( mask->Duplicate(aMaskIndex) );
        }
    else
        {
        // Make the forthcoming pushes safe (up to level 2)
        CleanupStack::PushL( static_cast<TAny*>(NULL) );
        CleanupStack::PushL( static_cast<TAny*>(NULL) );
        CleanupStack::Pop( 2 );

        AKNS_TRACE_INFO("AknsItemDataFactory::CreateMaskedBitmapL CreateIcon");
        AKNS_TRACE_INFO3("AknsItemDataFactory::CreateMaskedBitmapBitmapL Calling icon utils %S %i %i", &aFilename, aIndex, aMaskIndex );

          CAknsAppSkinInstance* skininstance = (CAknsAppSkinInstance*)(AknsUtils::SkinInstance());

        TInt res = aFilename.FindF(KAknsSrvPrivateLocation);
        CAknsFsHandleProvider* provider = NULL;

#if defined(_DEBUG)
        TInt createErr(KErrNone);
        if (res >= 0)
            {
            // AknIconUtils will call CAknsFsHandleProvider::Finished when it is ready => deletes the object
            provider = CAknsFsHandleProvider::NewL(&(skininstance->iSession), aFilename);
            TRAP( createErr, (AknIconUtils::CreateIconL( bitmap, mask,
                *provider, aIndex, aMaskIndex)) );
            }
        else
            {
            TRAP( createErr, (AknIconUtils::CreateIconL( bitmap, mask,
                aFilename, aIndex, aMaskIndex)) );
            }

        if( createErr != KErrNone )
            {
            AKNS_TRACE_ERROR1("AknsItemDataFactory::CreateMaskedBitmapL AknIconUtils failed %i", createErr );
            User::Leave( createErr );
            }
#else
        if (res >= 0)
            {
            provider = CAknsFsHandleProvider::NewL(&(skininstance->iSession), aFilename);
            // AknIconUtils will call CAknsFsHandleProvider::Finished when it is ready => deletes the object
            AknIconUtils::CreateIconL( bitmap, mask, *provider, aIndex, aMaskIndex );
            }
        else
            {
            AknIconUtils::CreateIconL( bitmap, mask, aFilename, aIndex, aMaskIndex );
            }
#endif // _DEBUG

        // These pushes are safe
        CleanupStack::PushL( bitmap );
        CleanupStack::PushL( mask );
        }

    CAknsMaskedBitmapItemData* resData = CAknsMaskedBitmapItemData::NewL();
    resData->SetBitmap( bitmap );
    resData->SetMask( mask );
    CleanupStack::Pop(2); // bitmap, mask (now owned by resData)

    CleanupStack::PushL( resData );
    SetAttributesL( resData, aAttributes );
    CleanupStack::Pop( resData );

    AKNS_TRACE_INFO("AknsItemDataFactory::CreateMaskedBitmapL Success");

    return resData;
    }

// -----------------------------------------------------------------------------
// AknsItemDataFactory::CreateColorTableL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsColorTableItemData* AknsItemDataFactory::CreateColorTableL(
    const TInt aNumberOfColors, const TAknsColorTableEntry* aColors,
    const TAknsImageAttributeData* aAttributes )
    {
    CAknsColorTableItemData* resData = CAknsColorTableItemData::NewL();
    CleanupStack::PushL( resData );
    resData->SetColorsL( aNumberOfColors, aColors );
    SetAttributesL( resData, aAttributes );
    CleanupStack::Pop( resData );
    return resData;
    }

// -----------------------------------------------------------------------------
// AknsItemDataFactory::CreateImageTableL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsImageTableItemData* AknsItemDataFactory::CreateImageTableL(
    const TInt aNumberOfImages, const TAknsItemID* aImages,
    const TAknsImageAttributeData* aAttributes )
    {
    CAknsImageTableItemData* resData = CAknsImageTableItemData::NewL();
    CleanupStack::PushL( resData );
    resData->SetImagesL( aNumberOfImages, aImages );
    SetAttributesL( resData, aAttributes );
    CleanupStack::Pop( resData );
    return resData;
    }

// -----------------------------------------------------------------------------
// AknsItemDataFactory::CreateBmpAnimL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsBmpAnimItemData* AknsItemDataFactory::CreateBmpAnimL(
    const TInt aNumberOfImages, const TAknsItemID* aImages,
    const TAknsBmpAnimFrameInfo* aFrameInfos,
    const TBool aLastFrameBg, const TInt16 aFrameInterval,
    const TInt16 aPlayMode, const TBool aFlash,
    const TAknsImageAttributeData* aAttributes )
    {
    CAknsBmpAnimItemData* resData = CAknsBmpAnimItemData::NewL();
    CleanupStack::PushL( resData );
    resData->SetImagesL( aNumberOfImages, aImages );
    resData->SetFrameInfosL( aFrameInfos );
    resData->SetLastFrameBackground( aLastFrameBg );
    resData->SetFrameInterval( aFrameInterval );
    resData->SetPlayMode( aPlayMode );
    resData->SetFlash( aFlash );
    SetAttributesL( resData, aAttributes );
    CleanupStack::Pop( resData );
    return resData;
    }

// -----------------------------------------------------------------------------
// AknsItemDataFactory::CreateStringL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsStringItemData* AknsItemDataFactory::CreateStringL( const TDesC& aString )
    {
    CAknsStringItemData* resData = CAknsStringItemData::NewL();
    CleanupStack::PushL( resData );
    resData->SetStringL( aString );
    CleanupStack::Pop( resData );
    return resData;
    }

// -----------------------------------------------------------------------------
// AknsItemDataFactory::CreateEffectQueueL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsEffectQueueItemData* AknsItemDataFactory::CreateEffectQueueL(
    const CAknsEffectQueueItemDef* aDef )
    {
    CAknsEffectQueueItemData* resData = CAknsEffectQueueItemData::NewL();
    CleanupStack::PushL( resData );

    if( aDef->iInputLayerMode == static_cast<TUint32>( KAknsRlLayerNone ) )
        {
        resData->SetInputLayer( -1 );
        }
    else
        {
        resData->SetInputLayer( aDef->iInputLayerIndex );
        }
    resData->SetInputLayerMode( aDef->iInputLayerMode );

    if( aDef->iOutputLayerMode == static_cast<TUint32>( KAknsRlLayerNone ) )
        {
        resData->SetOutputLayer( -1 );
        }
    else
        {
        resData->SetOutputLayer( aDef->iOutputLayerIndex );
        }
    resData->SetOutputLayerMode( aDef->iOutputLayerMode );

    resData->SetRefItem( aDef->iReference );

    for( TUint32 i=0; i<aDef->EffectCount(); i++ )
        {
        CAknsEffectCommand* command = CAknsEffectCommand::NewL();
        CleanupStack::PushL( command );
        CAknsEffectItemDef* cmdDef = aDef->GetEffect( i ); // Not owned

        command->SetEffectUid( cmdDef->EffectUid() );

        TAknsRlRenderOpParam layerConf;
        layerConf.iInputLayerAStatus = cmdDef->iInputLayerAMode;
        layerConf.iInputLayerAIndex = cmdDef->iInputLayerAIndex;
        layerConf.iInputLayerBStatus = cmdDef->iInputLayerBMode;
        layerConf.iInputLayerBIndex = cmdDef->iInputLayerBIndex;
        layerConf.iOutputLayerStatus = cmdDef->iOutputLayerMode;
        layerConf.iOutputLayerIndex = cmdDef->iOutputLayerIndex;
        command->SetLayerConf( layerConf );

        for( TInt a=0; a<cmdDef->ParameterCount(); a++ )
            {
            TAknsRlParameterData prm;
            TAknsRlGraphicsParam gfxPrm;

            CAknsEffectParamDef* prmDef = cmdDef->GetParameter( a );

            prm.iName = prmDef->GetName();
            prm.iType = static_cast<TAknsRlParameterType>(
                prmDef->GetType() );

            switch( prm.iType )
                {
                case EAknsRlParameterTypeNumber:
                    prm.iNumber = prmDef->GetNumber();
                    break;
                case EAknsRlParameterTypeString:
                    prm.iString = prmDef->GetString();
                    break;
                case EAknsRlParameterTypeGraphics:
                    gfxPrm.iFilename = prmDef->GetFilename();
                    gfxPrm.iIndex = prmDef->GetBitmapIndex();
                    gfxPrm.iMaskIndex = prmDef->GetMaskIndex();
                    prm.iGfx = &gfxPrm;
                    break;
                }

            command->AppendParameterL( prm );
            }

        resData->AppendCommandL( command );
        CleanupStack::Pop( command );
        }

    CleanupStack::Pop( resData );
    return resData;
    }

// -----------------------------------------------------------------------------
// AknsItemDataFactory::CreateAnimationL
// (documented in the header).
// -----------------------------------------------------------------------------
//
CAknsAnimationItemData* AknsItemDataFactory::CreateAnimationL(
    const CAknsAnimationItemDef* aDef )
    {
    CAknsAnimationItemData* item = CAknsAnimationItemData::NewL();
    CleanupStack::PushL( item );

    item->SetMinInterval( aDef->MinInterval() );
    item->SetMorphing( aDef->Morphing() );

    // Determine animation layer configuration
    if( aDef->iInputLayerMode == TUint32( KAknsRlLayerNone ) )
        {
        item->SetInputLayer( -1 );
        }
    else
        {
        item->SetInputLayer( aDef->iInputLayerIndex );
        }
    item->SetInputLayerMode( aDef->iInputLayerMode );

    if( aDef->iOutputLayerMode == TUint32( KAknsRlLayerNone ) )
        {
        item->SetOutputLayer( -1 );
        }
    else
        {
        item->SetOutputLayer( aDef->iOutputLayerIndex );
        }
    item->SetOutputLayerMode( aDef->iOutputLayerMode );

    TInt i, j, count;
    TAknsRlParameterData paramData;
    TAknsRlGraphicsParam gfx;

    struct Local
        {
        static void Fill( TAknsRlParameterData& aData,
                          CAknsEffectParamDef& aEffectDef,
                          TAknsRlGraphicsParam* aGfx )
            {
            aData.iName = aEffectDef.GetName();
            aData.iType =
                static_cast<TAknsRlParameterType>( aEffectDef.GetType() );

            switch( aData.iType )
                {
                case EAknsRlParameterTypeNumber:
                    aData.iNumber = aEffectDef.GetNumber();
                    break;
                case EAknsRlParameterTypeString:
                    aData.iString = aEffectDef.GetString();
                    break;
                case EAknsRlParameterTypeGraphics:
                    if( aGfx )
                        {
                        aGfx->iFilename  = aEffectDef.GetFilename();
                        aGfx->iIndex     = aEffectDef.GetBitmapIndex();
                        aGfx->iMaskIndex = aEffectDef.GetMaskIndex();
                        aData.iGfx = aGfx;
                        }
                    break;
                }
            }
        };

    // Create timing models
    count = aDef->TimingModelCount();
    for( i=0; i < count; i++ )
        {
        CAknsTimingModelDef* timingDef = aDef->TimingModel( i );
        CAknsTimingModel* model = CAknsTimingModel::NewL();
        CleanupStack::PushL( model );

        model->SetTimingModelUid( timingDef->TimingModelUid() );

        for( j=0; j < timingDef->ParameterCount(); j++ )
            {
            CAknsEffectParamDef* paramDef = timingDef->Parameter( j );
            Local::Fill( paramData, *paramDef, &gfx );
            model->AppendParameterL( paramData );
            }

        item->AppendTimingModelL( model ); // Ownership transferred
        CleanupStack::Pop( model );
        }

    // Create animation values
    count = aDef->AnimationValueCount();
    for( i=0; i < count; i++ )
        {
        CAknsAnimationValueDef* valueDef = aDef->AnimationValue( i );
        CAknsAnimationValue* value = CAknsAnimationValue::NewL();
        CleanupStack::PushL( value );

        value->SetAnimationValueUid( valueDef->AnimationValueUid() );
        value->SetTimingModelId( valueDef->TimingModelId() );

        for( j=0; j < valueDef->ParameterCount(); j++ )
            {
            CAknsEffectParamDef* paramDef = valueDef->Parameter( j );
            Local::Fill( paramData, *paramDef, &gfx );
            value->AppendParameterL( paramData );
            }

        item->AppendAnimationValueL( value ); // Ownership transferred
        CleanupStack::Pop( value );
        }

    // Create animation commands
    TAknsRlRenderOpParam layerConf;
    TAknsAlNamedReferenceData refData;
    count = aDef->AnimationCommandItemCount();
    for( i=0; i < count; i++ )
        {
        CAknsAnimationCommandItemDef* cmdDef = aDef->AnimationCommandItem( i );
        CAknsAnimationCommand* cmd = CAknsAnimationCommand::NewL();
        CleanupStack::PushL( cmd );

        cmd->SetEffectUid( cmdDef->EffectUid() );

        if( cmdDef->iInputLayerAMode == TUint32( KAknsRlLayerNone ) )
            {
            layerConf.iInputLayerAIndex = -1;
            }
        else
            {
            layerConf.iInputLayerAIndex =  cmdDef->iInputLayerAIndex;
            }
        layerConf.iInputLayerAStatus = cmdDef->iInputLayerAMode;

        if( cmdDef->iInputLayerBMode == TUint32( KAknsRlLayerNone ) )
            {
            layerConf.iInputLayerBIndex = -1;
            }
        else
            {
            layerConf.iInputLayerBIndex = cmdDef->iInputLayerBIndex;
            }
        layerConf.iInputLayerBStatus = cmdDef->iInputLayerBMode;

        if( cmdDef->iOutputLayerMode == TUint32( KAknsRlLayerNone ) )
            {
            layerConf.iOutputLayerIndex = -1;
            }
        else
            {
            layerConf.iOutputLayerIndex = cmdDef->iOutputLayerIndex;
            }
        layerConf.iOutputLayerStatus = cmdDef->iOutputLayerMode;

        cmd->SetLayerConf( layerConf );

        for( j=0; j < cmdDef->ParameterCount(); j++ )
            {
            CAknsEffectParamDef* paramDef = cmdDef->GetParameter( j );
            Local::Fill( paramData, *paramDef, &gfx );
            cmd->AppendParameterL( paramData );
            }

        for( j=0; j < cmdDef->NamedReferenceCount(); j++ )
            {
            CAknsNamedReferenceDef* refDef = cmdDef->NamedReference( j );

            refData.iName = refDef->Name();
            refData.iAnimationValueId = refDef->AnimationValueId();

            cmd->AppendNamedReferenceL( refData );
            }

        item->AppendCommandL( cmd ); // Ownership transferred
        CleanupStack::Pop( cmd );
        }

    // Create size bound parameters
    TAknsAlSizeBoundParameterData sizeBoundData;
    count = aDef->SizeBoundParamCount();
    for( i=0; i < count; i++ )
        {
        CAknsSizeBoundParamDef* sizeBoundDef = aDef->SizeBoundParam( i );

        sizeBoundData.iName = sizeBoundDef->Name();
        sizeBoundData.iAnimationValueId = sizeBoundDef->AnimationValueId();
        sizeBoundData.iParamFlags = sizeBoundDef->ParamFlags();

        item->AppendSizeBoundParamL( sizeBoundData );
        }

    // Create preprocess commands
    count = aDef->PreprocessCommandCount();
    for( i=0; i < count; i++ )
        {
        CAknsEffectCommand* command = CAknsEffectCommand::NewL();
        CleanupStack::PushL( command );
        CAknsEffectItemDef* cmdDef = aDef->PreprocessCommand( i ); // Not owned

        command->SetEffectUid( cmdDef->EffectUid() );

        if( cmdDef->iInputLayerAMode == TUint32( KAknsRlLayerNone ) )
            {
            layerConf.iInputLayerAIndex = -1;
            }
        else
            {
            layerConf.iInputLayerAIndex =  cmdDef->iInputLayerAIndex;
            }
        layerConf.iInputLayerAStatus = cmdDef->iInputLayerAMode;

        if( cmdDef->iInputLayerBMode == TUint32( KAknsRlLayerNone ) )
            {
            layerConf.iInputLayerBIndex = -1;
            }
        else
            {
            layerConf.iInputLayerBIndex = cmdDef->iInputLayerBIndex;
            }
        layerConf.iInputLayerBStatus = cmdDef->iInputLayerBMode;

        if( cmdDef->iOutputLayerMode == TUint32( KAknsRlLayerNone ) )
            {
            layerConf.iOutputLayerIndex = -1;
            }
        else
            {
            layerConf.iOutputLayerIndex = cmdDef->iOutputLayerIndex;
            }
        layerConf.iOutputLayerStatus = cmdDef->iOutputLayerMode;

        command->SetLayerConf( layerConf );

        for( TInt a=0; a<cmdDef->ParameterCount(); a++ )
            {
            TAknsRlParameterData prm;
            TAknsRlGraphicsParam gfxPrm;

            CAknsEffectParamDef* prmDef = cmdDef->GetParameter( a );

            prm.iName = prmDef->GetName();
            prm.iType = static_cast<TAknsRlParameterType>(
                prmDef->GetType() );

            switch( prm.iType )
                {
                case EAknsRlParameterTypeNumber:
                    prm.iNumber = prmDef->GetNumber();
                    break;
                case EAknsRlParameterTypeString:
                    prm.iString = prmDef->GetString();
                    break;
                case EAknsRlParameterTypeGraphics:
                    gfxPrm.iFilename = prmDef->GetFilename();
                    gfxPrm.iIndex = prmDef->GetBitmapIndex();
                    gfxPrm.iMaskIndex = prmDef->GetMaskIndex();
                    prm.iGfx = &gfxPrm;
                    break;
                }

            command->AppendParameterL( prm );
            }

        item->AppendPreprocessCommandL( command );
        CleanupStack::Pop( command );
        }

    CleanupStack::Pop( item );
    return item;
    }

// -----------------------------------------------------------------------------
// AknsItemDataFactory::SetAttributesL
// (documented in the header).
// -----------------------------------------------------------------------------
//
void AknsItemDataFactory::SetAttributesL( CAknsImageItemData* aItemData,
    const TAknsImageAttributeData* aAttributes )
    {
    if( aAttributes )
        {
        aItemData->SetAttributesL( *aAttributes );
        }
    else
        {
        TAknsImageAttributeData defAttr;
        aItemData->SetAttributesL( defAttr );
        }
    }

//  End of File

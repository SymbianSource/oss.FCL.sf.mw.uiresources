/*
* Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Memory chunk lookup.
*
*/


// INCLUDE FILES

#include <AknsSrvChunkLookup.h>

#include "AknsSrvChunkMaintainer.h"
#include "AknsSrvItemDef.h"
#include <AknsImageAttributeData.h>
#include "AknsSrvChunkMaintainer.h"
#include "AknsSrvDescriptorFileLayout.h"
#include <AknsConstants.h>

#include <fbs.h>

#include "AknsDebug.h"

// -----------------------------------------------------------------------------
// C++ default constructor.
// -----------------------------------------------------------------------------
//
CAknsSrvChunkLookup::CAknsSrvChunkLookup()
    {
    }

// -----------------------------------------------------------------------------
// Destructor.
// -----------------------------------------------------------------------------
//
CAknsSrvChunkLookup::~CAknsSrvChunkLookup()
    {
    iSharedChunk.Close();
    iWaitSema.Close();
    iRenderMutex.Close();
    }

// -----------------------------------------------------------------------------
// Symbian 1st phase constructor.
// -----------------------------------------------------------------------------
//
CAknsSrvChunkLookup* CAknsSrvChunkLookup::NewL()
    {
    CAknsSrvChunkLookup* self = new (ELeave) CAknsSrvChunkLookup();
    CleanupStack::PushL(self);
    self->ConstructL();
    CleanupStack::Pop( self );
    return self;
    }

// -----------------------------------------------------------------------------
// Symbian 2nd phase constructor.
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkLookup::ConstructL()
    {
    // Open the chunk in read only mode.
    User::LeaveIfError(
        iSharedChunk.OpenGlobal(KAKNSSRVSHAREDMEMORYCHUNKNAME, ETrue) );
    User::LeaveIfError(
        iWaitSema.OpenGlobal(KAKNSSRVWAITSEMAPHORENAME) );
    User::LeaveIfError(
        iRenderMutex.OpenGlobal(KAKNSSRVRENDERMUTEXNAME) );
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::LookupAndCreateDefL
// -----------------------------------------------------------------------------
//
EXPORT_C CAknsItemDef* CAknsSrvChunkLookup::LookupAndCreateDefL(
    const TAknsItemID& aID )
    {
    CAknsItemDef* itemdef = NULL;
    TAknsSrvMPPtr<TAknsSrvDef*>* defptr = NULL;
    TAknsItemType itemtype = EAknsITUnknown;
    //TAknsItemID* itemid = NULL;
    TInt* baseptr;

    // special case trying to search non-existent item, just return in that case
    if (aID == KAknsIIDNone)
        {
        return NULL;
        }

    // Block write access to the shared memory chunk.
    BeginRead();

    TUint32* chunkAddr = reinterpret_cast<TUint32*>(iSharedChunk.Base());
    TBool found = EFalse;
    
    //TInt defcount = chunkAddr[EAknsSrvItemDefAreaCurrentSizeOffset] / sizeof(TAknsSrvDef);
       
    TUint hashindex = (TUint)(aID.iMajor + aID.iMinor) % 128;
    
    TAknsSrvHashTable* h = reinterpret_cast<TAknsSrvHashTable*>(chunkAddr +
                (chunkAddr[EAknsSrvItemDefHashBaseOffset])/4 +
                hashindex* sizeof(TAknsSrvHashTable)/4);
    TAknsSrvDef* item = NULL;
    if ( h->iHead >= 0 )
        {
        TInt def = h->iHead;
        while ( def >= 0)
            {
            item = reinterpret_cast<TAknsSrvDef*>(chunkAddr +
                            (chunkAddr[EAknsSrvItemDefAreaBaseOffset])/4 +
                            def* sizeof(TAknsSrvDef)/4);
            if (TAknsItemID::LinearOrder( aID, item->iID) == 0 )
                {
                found = ETrue;
                chunkAddr = chunkAddr+
                    ((chunkAddr[EAknsSrvItemDefAreaBaseOffset])/4)+
                    def* sizeof(TAknsSrvDef)/4;
                break;
                }
            def = item->iHashNext;
            }
         }
    
    
    if (!found)
        {
        // Reached the end of the lookup table and found no match
        EndRead();
        return NULL;
        }

    itemtype = static_cast<TAknsItemType>(*(chunkAddr+2));
    defptr = reinterpret_cast<TAknsSrvMPPtr<TAknsSrvDef*>*>(chunkAddr+3);
    TInt creationError = KErrNone;
    if (defptr->iPtrType == EAknsSrvMPPtrAbsoluteROM)
        {
        baseptr = NULL;
        TRAP( creationError,
            (itemdef=CreateUnprotectedL( aID, defptr->Address(baseptr), itemtype,
            baseptr )) );
        }
    else
        {
        baseptr = (TInt*)iSharedChunk.Base();
        TRAP( creationError,
            (itemdef=CreateUnprotectedL( aID, defptr->Address(baseptr+(baseptr[3]/4)), itemtype,
            baseptr )) );
        }

    // Reading done, allow writes to the shared memory again.
    EndRead();

    if( creationError != KErrNone )
        {
        User::Leave( creationError );
        }

    return itemdef;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::LookupAndCreateScalableItemL
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsSrvChunkLookup::LookupAndCreateScalableItemL(
    const TAknsItemID& aID, const TInt aLayout, const TSize& aLayoutSize, CFbsBitmap*& aBitmap,
    CFbsBitmap*& aMask, TInt& aMorphing)
    {
    BeginRead();

    TRAPD( err, LookupAndCreateScalableItemUnprotectedL(
        aID, aLayout, aLayoutSize,  aBitmap, aMask,aMorphing ) );

    EndRead();

    if( err )
        {
        User::Leave( err );
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::BeginRead
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkLookup::BeginRead()
    {
    // Wait if there is a write in progress.
    iWaitSema.Wait();
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::EndRead
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkLookup::EndRead()
    {
    iWaitSema.Signal();
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::BeginRender
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsSrvChunkLookup::BeginRender()
    {
    // Wait if there is a rendering operation in progress...
    iRenderMutex.Wait();
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::EndRender
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknsSrvChunkLookup::EndRender()
    {
    iRenderMutex.Signal();
    }

// -----------------------------------------------------------------------------
// RAknsSrvSession::Reserved
// -----------------------------------------------------------------------------
//
EXPORT_C TInt CAknsSrvChunkLookup::Reserved()
    {
    return 0;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::CreateUnprotectedL
// -----------------------------------------------------------------------------
//
CAknsItemDef* CAknsSrvChunkLookup::CreateUnprotectedL( const TAknsItemID& aID,
    const TAny* aDef, const TAknsItemType aType, const TAny* aBasePtr )
    {
    CAknsItemDef* itemdef = NULL;
    TInt* baseptr = (TInt*)aBasePtr;

    switch( aType )
        {

        case EAknsITBitmap:
            {
            if (baseptr)
                {
                baseptr = baseptr+(baseptr[EAknsSrvFilenameAreaBaseOffset]/4);
                }
            const TAknsSrvBitmapDef* def =
                reinterpret_cast<const TAknsSrvBitmapDef*>(aDef);
            itemdef = CAknsBitmapItemDef::NewL( aID,
                TPtrC(def->iFilename.Address(baseptr)),
                def->iIndex);
            CleanupStack::PushL( itemdef );

            TAknsImageAttributeData attr;
            attr.iAttributes =
                static_cast<TAknsImageAttribute>(def->iImageAttributes);
            attr.iAlignment =
                static_cast<TAknsImageAlignment>(def->iImageAlignment);
            attr.iCoords = TPoint( def->iImageCoordX, def->iImageCoordY );
            attr.iSize = TSize( def->iImageSizeW, def->iImageSizeH );
            static_cast<CAknsImageItemDef*>(itemdef)->SetAttributesL( attr );

            CleanupStack::Pop( itemdef );
            break;
            }

        case EAknsITMaskedBitmap:
            {
            if (baseptr)
                {
                baseptr = baseptr+(baseptr[EAknsSrvFilenameAreaBaseOffset]/4);
                }
            const TAknsSrvMaskedBitmapDef* def =
                reinterpret_cast<const TAknsSrvMaskedBitmapDef*>(aDef);
            itemdef = CAknsMaskedBitmapItemDef::NewL(aID,
                TPtrC(def->iFilename.Address(baseptr)),  def->iIndex,
                def->iMaskIndex);
            CleanupStack::PushL( itemdef );

            TAknsImageAttributeData attr;
            attr.iAttributes =
                static_cast<TAknsImageAttribute>(def->iImageAttributes);
            attr.iAlignment =
                static_cast<TAknsImageAlignment>(def->iImageAlignment);
            attr.iCoords = TPoint( def->iImageCoordX, def->iImageCoordY );
            attr.iSize = TSize( def->iImageSizeW, def->iImageSizeH );
            static_cast<CAknsImageItemDef*>(itemdef)->SetAttributesL( attr );

            CleanupStack::Pop( itemdef );
            break;
            }

        case EAknsITColorTable:
            {
            if (baseptr)
                {
                baseptr = baseptr+(baseptr[EAknsSrvDataAreaBaseOffset]/4);
                }
            const TAknsSrvColorTableDef* def =
                reinterpret_cast<const TAknsSrvColorTableDef*>(aDef);
            itemdef = CAknsColorTableItemDef::NewL( aID,
                def->iNumberOfColors, def->iColors.Address(baseptr) );
            CleanupStack::PushL( itemdef );

            TAknsImageAttributeData attr;
            attr.iAttributes =
                static_cast<TAknsImageAttribute>(def->iImageAttributes);
            attr.iAlignment =
                static_cast<TAknsImageAlignment>(def->iImageAlignment);
            attr.iCoords = TPoint( def->iImageCoordX, def->iImageCoordY );
            attr.iSize = TSize( def->iImageSizeW, def->iImageSizeH );
            static_cast<CAknsImageItemDef*>(itemdef)->SetAttributesL( attr );

            CleanupStack::Pop( itemdef );
            break;
            }

        case EAknsITImageTable:
            {
            if (baseptr)
                {
                baseptr = baseptr+(baseptr[EAknsSrvDataAreaBaseOffset]/4);
                }
            const TAknsSrvImageTableDef* def =
                reinterpret_cast<const TAknsSrvImageTableDef*>(aDef);
            itemdef = CAknsImageTableItemDef::NewL(aID,
                def->iNumberOfImages,
                def->iImages.Address(baseptr));
            CleanupStack::PushL( itemdef );

            TAknsImageAttributeData attr;
            attr.iAttributes =
                static_cast<TAknsImageAttribute>(def->iImageAttributes);
            attr.iAlignment =
                static_cast<TAknsImageAlignment>(def->iImageAlignment);
            attr.iCoords = TPoint( def->iImageCoordX, def->iImageCoordY );
            attr.iSize = TSize( def->iImageSizeW, def->iImageSizeH );
            static_cast<CAknsImageItemDef*>(itemdef)->SetAttributesL( attr );

            CleanupStack::Pop( itemdef );
            break;
            }

        case EAknsITBmpAnim:
            {
            if (baseptr)
                {
                baseptr = baseptr+(baseptr[EAknsSrvDataAreaBaseOffset]/4);
                }
            const TAknsSrvBmpAnimDef* def =
                reinterpret_cast<const TAknsSrvBmpAnimDef*>(aDef);
            itemdef = CAknsBmpAnimItemDef::NewL( aID,
                def->iNumberOfImages,
                def->iImages.Address(baseptr),
                def->iFrameInfos.Address(baseptr) );
            CleanupStack::PushL( itemdef );

            TAknsImageAttributeData attr;
            attr.iAttributes =
                static_cast<TAknsImageAttribute>(def->iImageAttributes);
            attr.iAlignment =
                static_cast<TAknsImageAlignment>(def->iImageAlignment);
            attr.iCoords = TPoint( def->iImageCoordX, def->iImageCoordY );
            attr.iSize = TSize( def->iImageSizeW, def->iImageSizeH );
            static_cast<CAknsImageItemDef*>(itemdef)->SetAttributesL( attr );

            static_cast<CAknsBmpAnimItemDef*>(itemdef)->SetLastFrameBackground(
                def->iLastFrameBackground );
            static_cast<CAknsBmpAnimItemDef*>(itemdef)->SetFrameInterval(
                def->iFrameInterval );
            static_cast<CAknsBmpAnimItemDef*>(itemdef)->SetPlayMode(
                def->iPlayMode );
            static_cast<CAknsBmpAnimItemDef*>(itemdef)->SetFlash(
                def->iFlash );

            CleanupStack::Pop( itemdef );
            break;
            }

        case EAknsITString:
            {
            if (baseptr)
                {
                baseptr = baseptr+(baseptr[EAknsSrvDataAreaBaseOffset]/4);
                }
            const TAknsSrvStringDef* def =
                reinterpret_cast<const TAknsSrvStringDef*>(aDef);
            itemdef = CAknsStringItemDef::NewL( aID );
            CleanupStack::PushL( itemdef );

            TPtrC string( def->iString.Address(baseptr) );
            static_cast<CAknsStringItemDef*>(itemdef)->SetStringL(
                 string );

            CleanupStack::Pop( itemdef );
            break;
            }

        case EAknsITEffectQueue:
            {
            // Create def from raw data
            itemdef = CreateEffectQueueL( aID, aDef, aBasePtr );
            break;
            }

        case EAknsITAnimation:
            {
            // Create def from raw data
            itemdef = CreateAnimationL( aID, aDef, aBasePtr );
            break;
            }

        case EAknsITUnknown:
        case EAknsITImage:
        default:
            {
            User::Leave(KErrUnknown);
            break;
            }

        }

    return itemdef;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::LookupAndCreateScalableItemUnprotectedL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkLookup::LookupAndCreateScalableItemUnprotectedL(
    const TAknsItemID& aID, const TInt aLayout, const TSize& aLayoutSize, CFbsBitmap*& aBitmap,
    CFbsBitmap*& aMask, TInt& aMorphing)
    {
    TTime currenttime;
    currenttime.HomeTime();

    TUint32* chunkAddr = reinterpret_cast<TUint32*>(iSharedChunk.Base());
    TInt defcount = chunkAddr[EAknsSrvScalableGfxAreaCurrentSizeOffset] /
        sizeof(TAknsSrvScalableItemDef);
    chunkAddr = chunkAddr+((chunkAddr[EAknsSrvScalableGfxAreaBaseOffset])/4);

    TAknsSrvScalableItemDef* table = (TAknsSrvScalableItemDef*)(chunkAddr);

    TInt bitmapHandle = 0;
    TInt maskHandle = 0;

    for (TInt index = 0; index < defcount; index++)
        {
        if ((table[index].iID == aID) &&
            (table[index].iLayoutType == aLayout) &&
            (table[index].iLayoutSize == aLayoutSize))
            {
            bitmapHandle = table[index].iBitmapHandle;
            if (table[index].iMaskHandle)
                {
                maskHandle = table[index].iMaskHandle;
                }
            // Update timestamp
            table[index].iTimeStamp = currenttime;
            aMorphing = table[index].isMorphing;
            break; // Break the loop, a match was found.
            }
        }

    // Avoid unnecessary duplicating
    if( bitmapHandle && aBitmap && (aBitmap->Handle()==bitmapHandle) )
        {
        if( (!maskHandle) && (!aMask) )
            {
            // No mask, everything OK.
            return;
            }

        if( maskHandle && aMask && (aMask->Handle()==maskHandle) )
            {
            // Mask is the same as well
            return;
            }
        }

    // Initialize to NULL and destroy any previous bitmaps
    delete aBitmap;
    aBitmap = NULL;
    delete aMask;
    aMask = NULL;

    CFbsBitmap* bitmap = new (ELeave) CFbsBitmap;
    CleanupStack::PushL( bitmap ); // (1)
    CFbsBitmap* mask = new (ELeave) CFbsBitmap;
    CleanupStack::PushL( mask ); // (2)

    if( bitmapHandle )
        {
        User::LeaveIfError( bitmap->Duplicate( bitmapHandle ) );

        if( maskHandle )
            {
            User::LeaveIfError( mask->Duplicate( maskHandle ) );
            }
        else
            {
            CleanupStack::PopAndDestroy(1); // mask (1)
            mask = NULL;
            CleanupStack::PushL( mask ); // (2)
            }

        CleanupStack::Pop(2); // mask, bitmap (0)
        aBitmap = bitmap;
        aMask = mask;
        }
    else
        {
        // No match
        CleanupStack::PopAndDestroy(2); // mask, bitmap (0)
        }
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::CreateEffectQueueL
// -----------------------------------------------------------------------------
//
CAknsEffectQueueItemDef* CAknsSrvChunkLookup::CreateEffectQueueL(
    const TAknsItemID& aID, const TAny* aDefPtr, const TAny* aBasePtr )
    {
    const TAknsSrvEffectQueueDef* def =
        reinterpret_cast<const TAknsSrvEffectQueueDef*>(aDefPtr);
    CAknsEffectQueueItemDef* itemdef = CAknsEffectQueueItemDef::NewL(aID);
    CleanupStack::PushL(itemdef);

    if (def->iRefMajor && def->iRefMinor)
        {
        TAknsItemID id;
        id.iMajor = def->iRefMajor;
        id.iMinor = def->iRefMinor;

        static_cast<CAknsEffectQueueItemDef*>(itemdef)->SetReference(id);
        CleanupStack::Pop( itemdef );
        return itemdef;
        }

    static_cast<CAknsEffectQueueItemDef*>(itemdef)->SetLayerIndexesAndModes(
        def->iInputLayerIndex, def->iInputLayerMode,
        def->iOutputLayerIndex, def->iOutputLayerMode);

    TUint32 effectcount = def->iEffectCount;
    TUint32 baseoffset = sizeof(TAknsSrvEffectQueueDef);
    for (TUint32 ecount = 0; ecount < effectcount; ecount++)
        {
        CAknsEffectItemDef* effectitemdef = NULL;
        TUint32 effectlen = CreateEffectL( effectitemdef, baseoffset, aDefPtr, aBasePtr, EFalse );

        CleanupStack::PushL(effectitemdef);
        static_cast<CAknsEffectQueueItemDef*>(itemdef)->AddEffectL(effectitemdef);
        CleanupStack::Pop( effectitemdef );

        baseoffset += effectlen;
        }
    CleanupStack::Pop( itemdef );
    return itemdef;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::CreateAnimationL
// -----------------------------------------------------------------------------
//
CAknsAnimationItemDef* CAknsSrvChunkLookup::CreateAnimationL(
    const TAknsItemID& aID, const TAny* aDefPtr, const TAny* aBasePtr )
    {
    const TAknsSrvEffectAnimDef* def =
        reinterpret_cast<const TAknsSrvEffectAnimDef*>(aDefPtr);

    CAknsAnimationItemDef* itemDef = CAknsAnimationItemDef::NewL( aID );
    CleanupStack::PushL( itemDef );

    // TODO Add referencing support

    // SetLayerIndices would be more posh function name
    itemDef->SetLayerIndexesAndModes( def->iInputLayerIndex,
                                      def->iInputLayerMode,
                                      def->iOutputLayerIndex,
                                      def->iOutputLayerMode );
    itemDef->SetMinInterval( def->iMinInterval );

    if( def->iAnimType == 1 )
        {
        itemDef->SetMorphing( ETrue );
        }
    else
        {
        itemDef->SetMorphing( EFalse );
        }

    TUint32 baseoffset = sizeof(TAknsSrvEffectAnimDef);
    TUint32 i = 0;
    TUint32 length = 0;

    // Fetch preprocess commands
    TUint32 count = def->iPreprocessCount;
    for( i = 0; i < count; i++)
        {
        CAknsEffectItemDef* effect = NULL;
        length = CreateEffectL( effect, baseoffset, aDefPtr, aBasePtr, EFalse );

        CleanupStack::PushL(effect);
        itemDef->AddPreprocessCommandL(effect);
        CleanupStack::Pop(effect);

        baseoffset += length;
        }

    // Fetch animation commands
    count = def->iAnimCommandCount;
    for( i = 0; i < count; i++ )
        {
        CAknsEffectItemDef* effect = NULL;
        length = CreateEffectL( effect, baseoffset, aDefPtr, aBasePtr, ETrue );

        CleanupStack::PushL(effect);
        CAknsAnimationCommandItemDef* command =
            static_cast<CAknsAnimationCommandItemDef*>( effect );
        itemDef->AddAnimationCommandItemL(command);
        CleanupStack::Pop(effect);

        baseoffset += length;
        }

    // Fetch animation values
    count = def->iAnimValueCount;
    for( i = 0; i < count; i++ )
        {
        const TAknsSrvParamGroupDef* groupDef =
            reinterpret_cast<const TAknsSrvParamGroupDef*>(((TUint8*)aDefPtr) + baseoffset);

        CAknsAnimationValueDef* value = CAknsAnimationValueDef::NewL();
        CleanupStack::PushL( value );

        value->SetAnimationValueUid( TUid::Uid( groupDef->iValueA ) );
        value->SetTimingModelId( groupDef->iValueB );

        baseoffset += sizeof(TAknsSrvParamGroupDef);

        TUint32 paramlen = 0;
        for (TUint32 pcount = 0; pcount < groupDef->iParameterCount; pcount++)
            {
            CAknsEffectParamDef* pdef = NULL;

            paramlen = CreateParameterL( pdef, baseoffset, aDefPtr, aBasePtr );
            CleanupStack::PushL( pdef );
            value->AddParameterL( pdef );
            CleanupStack::Pop( pdef );

            baseoffset += paramlen;
            }

        itemDef->AddAnimationValueL( value );
        CleanupStack::Pop( value );
        }

    // Fetch timing models
    count = def->iTimingModelCount;
    for( i = 0; i < count; i++ )
        {
        const TAknsSrvParamGroupDef* groupDef =
            reinterpret_cast<const TAknsSrvParamGroupDef*>(((TUint8*)aDefPtr) + baseoffset);

        CAknsTimingModelDef* model = CAknsTimingModelDef::NewL();
        CleanupStack::PushL( model );

        model->SetTimingModelUid( TUid::Uid( groupDef->iValueA) );

        baseoffset += sizeof(TAknsSrvParamGroupDef);

        TUint32 paramlen = 0;
        for (TUint32 pcount = 0; pcount < groupDef->iParameterCount; pcount++)
            {
            CAknsEffectParamDef* pdef = NULL;

            paramlen = CreateParameterL( pdef, baseoffset, aDefPtr, aBasePtr );
            CleanupStack::PushL( pdef );
            model->AddParameterL( pdef );
            CleanupStack::Pop( pdef );

            baseoffset += paramlen;
            }

        itemDef->AddTimingModelL( model );
        CleanupStack::Pop( model );
        }

    // Fetch size bound params
    count = def->iSizeBoundCount;
    for( i = 0; i < count; i++ )
        {
        const TAknsSrvParamGroupDef* groupDef =
            reinterpret_cast<const TAknsSrvParamGroupDef*>(((TUint8*)aDefPtr) + baseoffset);

        CAknsSizeBoundParamDef* sizeBound = CAknsSizeBoundParamDef::NewL();
        CleanupStack::PushL( sizeBound );

        // SizeBoundValue has one parameter which contains the sizebound
        // parameter's name. Extra parameters mean corrupted data.
        if( groupDef->iParameterCount != 1 )
            {
            User::Leave( KErrCorrupt );
            }

        baseoffset += sizeof(TAknsSrvParamGroupDef);

        CAknsEffectParamDef* pdef = NULL;
        baseoffset += CreateParameterL( pdef, baseoffset, aDefPtr, aBasePtr );
        CleanupStack::PushL( pdef );

        if( !pdef->GetName() )
            {
            User::Leave( KErrCorrupt );
            }

        sizeBound->SetDataL( *pdef->GetName(),
                             groupDef->iValueA,
                             groupDef->iValueB );

        itemDef->AddSizeBoundParamL( sizeBound );

        CleanupStack::PopAndDestroy( pdef );
        CleanupStack::Pop( sizeBound );
        }

    CleanupStack::Pop( itemDef );
    return itemDef;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::CreateParameterL
// -----------------------------------------------------------------------------
//
TUint32 CAknsSrvChunkLookup::CreateParameterL( CAknsEffectParamDef*& aDef,
    const TUint32 aOffset, const TAny* aDefPtr, const TAny* aBasePtr )
    {
    const TAknsSrvEffectParameterDef* paramdef =
        reinterpret_cast<const TAknsSrvEffectParameterDef*>
        (((TUint8*)aDefPtr)+aOffset);

    CAknsEffectParamDef* pdef = CAknsEffectParamDef::NewL();
    CleanupStack::PushL(pdef);

    pdef->SetType(paramdef->iParameterType);
    const TUint8* content = reinterpret_cast<TUint8*>(
        ((TUint8*)aDefPtr)+aOffset+sizeof(TAknsSrvEffectParameterDef));

    if (paramdef->iParameterType == 0 ||
        paramdef->iParameterType == 3 ) // Number of named reference
        {
        TUint16 paramnamelen = *((TUint16*)content);
        if (paramnamelen)
            {
            HBufC* name = HBufC::NewL(paramnamelen);
            CleanupStack::PushL(name);
            TPtr nam(name->Des());
            nam.Copy((TUint16*)(content+2),paramnamelen);
            pdef->SetNameL(*name);
            CleanupStack::PopAndDestroy( name );
            }

        TUint32 value = 0;
        Mem::Copy(&value,(content+2+paramnamelen*2),sizeof(TUint32));
        pdef->SetValue(value);
        }
    else if (paramdef->iParameterType == 1) // string
        {
        TUint16 paramnamelen = *((TUint16*)content);
        if (paramnamelen)
            {
            HBufC* name = HBufC::NewL(paramnamelen);
            CleanupStack::PushL(name);
            TPtr nam(name->Des());
            nam.Copy((TUint16*)(content+2),paramnamelen);
            pdef->SetNameL(*name);
            CleanupStack::PopAndDestroy( name );
            }

        TUint16 strlen = *((TUint16*)(content+2+paramnamelen*2));
        if (strlen)
            {
            HBufC* str = HBufC::NewL(strlen);
            CleanupStack::PushL(str);
            TPtr strptr(str->Des());
            strptr.Copy((TUint16*)(content+2+paramnamelen*2+2),strlen);
            pdef->SetValueL(*str);
            CleanupStack::PopAndDestroy( str );
            }
        }
    else if (paramdef->iParameterType == 2) // graphics
        {
        TUint16 paramnamelen = *((TUint16*)content);
        if (paramnamelen)
            {
            HBufC* name = HBufC::NewL(paramnamelen);
            CleanupStack::PushL(name);
            TPtr nam(name->Des());
            nam.Copy((TUint16*)(content+2),paramnamelen);
            pdef->SetNameL(*name);
            CleanupStack::PopAndDestroy( name );
            }

        TUint32 bmpindex = 0;
        TUint32 maskindex = 0;
        TUint32 filenameoffset = 0;
        Mem::Copy(&bmpindex, (content+2+paramnamelen*2), sizeof(TUint32));
        Mem::Copy(&maskindex, (content+6+paramnamelen*2), sizeof(TUint32));
        Mem::Copy(&filenameoffset, (content+10+paramnamelen*2), sizeof(TUint32));
        TInt* baseptr = (TInt*)(aBasePtr);
        if ( baseptr )
            {
            baseptr = baseptr+(baseptr[EAknsSrvFilenameAreaBaseOffset]/4);
            }

        TAknsSrvMPPtr<const TText*> iFilename;
        iFilename.iPtrType = EAknsSrvMPPtrBaseRelativeRAM;
        iFilename.iAddressOrOffset = reinterpret_cast<const TUint16*>( filenameoffset );


        HBufC* fname = HBufC::NewL(512);
        CleanupStack::PushL(fname);
        TPtr fnptr(fname->Des());
        fnptr.Copy((TUint16*)(iFilename.Address( baseptr )));
        pdef->SetValueL(*fname, bmpindex, maskindex);
        CleanupStack::PopAndDestroy( fname );
        }

    CleanupStack::Pop( pdef );

    aDef = pdef;
    return paramdef->iParameterLength;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkLookup::CreateEffectL
// -----------------------------------------------------------------------------
//
TUint32 CAknsSrvChunkLookup::CreateEffectL( CAknsEffectItemDef*& aDef,
    const TUint32 aOffset, const TAny* aDefPtr, const TAny* aBasePtr,
    const TBool aIsAnimationCommand )
    {
    const TAknsSrvEffectDef* effectdef =
        reinterpret_cast<const TAknsSrvEffectDef*>(
        ((TUint8*)aDefPtr)+aOffset);

    CAknsEffectItemDef* effect = NULL;
    CAknsAnimationCommandItemDef* animCmd = NULL;
    if( aIsAnimationCommand )
        {
        animCmd = CAknsAnimationCommandItemDef::NewL();
        effect = animCmd;
        CleanupStack::PushL( animCmd );
        }
    else
        {
        effect = CAknsEffectItemDef::NewL();
        CleanupStack::PushL( effect );
        }

    effect->SetEffectUid(TUid(effectdef->iEffectUid));
    effect->SetLayerIndexesAndModes(
        effectdef->iInputLayerAIndex,
        effectdef->iInputLayerAMode,
        effectdef->iInputLayerBIndex,
        effectdef->iInputLayerBMode,
        effectdef->iOutputLayerIndex,
        effectdef->iOutputLayerMode );
    TUint32 paramcount = effectdef->iEffectParameterCount;
    TUint32 baseoffset = sizeof(TAknsSrvEffectDef);

    TUint32 paramlen = 0;

    for (TUint32 pcount = 0; pcount < paramcount; pcount++)
        {
        CAknsEffectParamDef* pdef = NULL;

        paramlen = CreateParameterL( pdef, baseoffset, (TAny*)effectdef, aBasePtr );

        if( pdef->GetType() == 3 ) // Hijack named refs
            {
            if( animCmd )
                {
                CleanupStack::PushL( pdef );

                CAknsNamedReferenceDef* namedRef = CAknsNamedReferenceDef::NewL();
                CleanupStack::PushL( namedRef );
                namedRef->SetDataL( *pdef->GetName(), pdef->GetNumber() );
                animCmd->AddNamedReferenceL( namedRef );
                CleanupStack::Pop( namedRef );

                CleanupStack::PopAndDestroy( pdef );
                }
            else // Theoretical case, named ref defined for non-animation
                {
                delete pdef;
                pdef = NULL;
                }
            }
        else
            {
            CleanupStack::PushL( pdef );
            effect->AddParameterL( pdef );
            CleanupStack::Pop( pdef );
            }

        baseoffset += paramlen;
        }

    CleanupStack::Pop(); // effect xor animCmd

    aDef = effect;
    return baseoffset;
    }

// End of file.

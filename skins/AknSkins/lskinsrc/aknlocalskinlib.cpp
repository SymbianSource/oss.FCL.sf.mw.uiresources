/*
* Copyright (c) 2007-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Implementation file for CAknLocalSkinInstance
*
*/


#include "aknlocalskinlib.h"
#include <AknsSrvDescriptorFileLayout.h>
#include <AknsConstants.h>
#include <AknsUtils.h>
#include <AknsImageAttributeData.h>
#include <AknsSrvVariant.hrh>

#include <caf/content.h>
#include <DRMHelper.h>
#include <caf/rightsmanager.h>

#include <centralrepository.h>
#include <AknLayoutDef.h>
// CenRep keys.
#include <AvkonInternalCRKeys.h>                // KAknLayoutId
#include <AknSkinsInternalCRKeys.h>             // KPslnActiveSkinUid, ...

#include <versioninfo.h>
using namespace ContentAccess;




// Max of 32 effects per queue and 64 params per effect should be enough
static const TInt KAknsSrvMaxEffectCount      = 0x20;
static const TInt KAknsSrvMaxEffectParamCount = 0x40;

// There are nine images in one frame.
const TInt KAknsSrvFrameIconCount = 9;

_LIT(KAknsSrvScalableRomBmpLocation,":\\resource\\skins\\");
_LIT(KAknsSrvScalableRomBmpOldLocation, ":\\private\\10207114\\import\\");
_LIT(KAknsSrvPathEndSeparator, "\\");

_LIT(KDefaultSkinFilename, "Z:\\private\\10207114\\import\\101f84b9\\series60skin.skn");


class CSkinFilename : public CBase
    {
    HBufC* iFilename;
    TInt iId;
    };


TInt Int32(TUint8* dataPtr,TUint32 aOffset)
    {
    return *((TInt*)(dataPtr+aOffset));
    }

TUint Uint32(TUint8* dataPtr,TUint32 aOffset)
    {
    return *((TUint32*)(dataPtr+aOffset));
    }


TInt16 Int16(TUint8* dataPtr, TUint32 aOffset)
    {
    return *((TInt16*)(dataPtr+aOffset));
    }

TUint16 Uint16(TUint8* dataPtr, TUint32 aOffset)
    {
    return *((TUint16*)(dataPtr+aOffset));
    }


TInt8 Int8(TUint8* dataPtr, TUint32 aOffset)
    {
    return *((TInt8*)(dataPtr+aOffset));
    }

TUint8 Uint8(TUint8* dataPtr, TUint32 aOffset)
    {
    return *((TUint8*)(dataPtr+aOffset));
    }


// -----------------------------------------------------------------------------
// Constructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknLocalSkinInstance* CAknLocalSkinInstance::NewL(
    const RFs& aFileSystem, const RAknsSrvSession& aSkinSrv)
    {
    CAknLocalSkinInstance* self =
        new (ELeave) CAknLocalSkinInstance(aFileSystem, aSkinSrv);
   
    VersionInfo::TPlatformVersion platformVersion;
    TRAPD( err,VersionInfo::GetVersion( platformVersion ) );
    if ( !err )
        {
        self->iPlatformMajor = platformVersion.iMajorVersion;
        self->iPlatformMinor = platformVersion.iMinorVersion;
        }
    else 
        {
        self->iPlatformMajor = 0;
        self->iPlatformMinor = 0;
        } 
    return self;
    }

// -----------------------------------------------------------------------------
// Apply the local skin.
// -----------------------------------------------------------------------------
//
EXPORT_C void CAknLocalSkinInstance::ApplyL(
    const TDesC& aFilename, RArray<TAknsItemID>& aItemsToOverride)
    {
    iOverriddenItems.Reset();
    iNoColors = EFalse;
    iColorsFound = EFalse;

    iItemsToOVerride = aItemsToOverride;
    iInitialCount = iItemsToOVerride.Count();
    

    TRAPD(err,DoApplyL(aFilename));
    
    User::LeaveIfError(err);
    }


 // -----------------------------------------------------------------------------
// Start Apply procedure.
//
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::DoApplyL(const TDesC& aFilename)
    {
    
    
    ProcessSkinFileL( KDefaultSkinFilename , ETrue );
    //--------------------------

    MAknsSkinInstance* si = AknsUtils::SkinInstance();
    si->SetChangeEventsEnabled( EFalse );
    si->RemoveLocalItemDefs();
    TInt count = 0;   

    // force scalable elements to NULL if they are not found from the skin
    CAknsEffectQueueItemDef* override = NULL;
    if (iInitialCount != iItemsToOVerride.Count())
        {
        for  (count = 0; count < iItemsToOVerride.Count(); count++)
            {
            TAknsItemID id = iItemsToOVerride[count];
            if ( IsScalableItem( id ) && !AlreadyOverrideElement(id) )
                {
                override = CAknsEffectQueueItemDef::NewL(id);
                override->SetReference(KAknsIIDNone);
                si->SetLocalItemDefL( override ); // ownership is transferred
                count--;
                }
            }    
        }

    // and read the rest of the remaining elements from the default skin

    ProcessSkinFileL( aFilename , EFalse );
    
    //--------------------------
    for (count = 0; count < iOverriddenItems.Count(); count++)
        {
        si->SetLocalItemDefL( (CAknsItemDef*)iOverriddenItems.operator[](count));
        }

   TAknsItemID id;
   for  (count = 0; count < iItemsToOVerride.Count(); count++)
        {
        id = iItemsToOVerride[count];
        if( !AlreadyOverrideElement(id) )
            {
            override = CAknsEffectQueueItemDef::NewL(id);
            override->SetReference(KAknsIIDNone);
            si->SetLocalItemDefL( override ); // ownership is transferred
            }
        }

    // and finally disable all highlight animations....
    override = CAknsEffectQueueItemDef::NewL(KAknsIIDQsnAnimGrid);
    override->SetReference(KAknsIIDNone);
    si->SetLocalItemDefL( override );

    override = CAknsEffectQueueItemDef::NewL(KAknsIIDQsnAnimList);
    override->SetReference(KAknsIIDNone);
    si->SetLocalItemDefL( override );

    override = CAknsEffectQueueItemDef::NewL(KAknsIIDQsnAnimSetOptFoc);
    override->SetReference(KAknsIIDNone);
    si->SetLocalItemDefL( override );

    si->SetChangeEventsEnabled( ETrue );
    }

 // -----------------------------------------------------------------------------
//  Destructor.
// -----------------------------------------------------------------------------
//
EXPORT_C CAknLocalSkinInstance::~CAknLocalSkinInstance()
    {
    delete iSknBuffer;
    delete iDefaultSknBuffer;
    delete iBitmapPath;
    delete iBitmapFilename;
    iOverriddenItems.Close();
    }

// -----------------------------------------------------------------------------
// C++ constructor.
// -----------------------------------------------------------------------------
//
CAknLocalSkinInstance::CAknLocalSkinInstance(
    const RFs& aFileSystem, const RAknsSrvSession& aSkinSrv)
    : iFs(aFileSystem), iSkinSrv(aSkinSrv)
    {
    RetrieveAHMirroringState();
    }

// -----------------------------------------------------------------------------
// Start processing the skin chunks.
//
// -----------------------------------------------------------------------------
//
TInt CAknLocalSkinInstance::ProcessChunksL( TUint32 aOffset, TUint32 aChunkCount )
    {

    TInt offset = aOffset;
    TUint16 chunktype = 65535;
    for (TUint32 count = 0; count < aChunkCount; count++)
        {
        TInt32 chunksize = Int32(
            iDataPtr, offset+EAknsSrvDFOCommonLength );
        chunktype = Uint16(
            iDataPtr, offset+EAknsSrvDFOCommonType );

        // filename chunk
        if (chunktype == EAknsSkinDescFilename)
            {
            offset+=HandleFilenameChunkL(offset);
            }
        // class chunk
        else if (chunktype == EAknsSkinDescSkinDescClass)
            {
            offset+=HandleClassChunkL(offset);
            }
        // release restriction chunk (2.6)
        else if( chunktype == EAknsSkinDescRelease26 )
            {
            offset+=Handle26RelRestrictionChunkL(offset);
            }
        // release restriction chunk (generic)
        else if( chunktype == EAknsSkinDescReleaseGeneric )
            {
            offset+=HandleGenericRelRestrictionChunkL(offset);
            }
        else if (chunktype == EAknsSkinDescLanguage) // language restriction chunk
            {
            offset+=HandleLangRestrictionChunkL(offset);
            }
        else
            {
            // chunk not supported/not used, proceed....
            offset+=chunksize;
            }
        if( Uint8(iDataPtr,offset-1) != 0xf5 )
            {
            User::Leave(KErrCorrupt);
            }
        }
    return offset;
    }

// -----------------------------------------------------------------------------
// Handle filename chunk.
//
// -----------------------------------------------------------------------------
//
TInt CAknLocalSkinInstance::HandleFilenameChunkL(TUint32 aOffset)
    {
    // todo: figure out a way to get the filename by other means than hardcoding.....

    TUint32 size = Int32(iDataPtr, EAknsSrvDFOCommonLength+aOffset);
    TUint8* filenamechunk = (iDataPtr+aOffset);
    if (iBitmapFilename)
        {
        return size;
        }

    TUint16 filenamelen = *((TUint16*)(filenamechunk+EAknsSrvDFOFilenameLen));
    iBitmapFilename = HBufC16::NewL(filenamelen+100);
    iBitmapFilename->Des().Append(*iBitmapPath);
    TUint8* fn = new TUint8[filenamelen * 2];
    memcpy ( fn,( filenamechunk+EAknsSrvDFOFilenameFilename ),filenamelen * 2 );
    TPtr16 filenamePtr( (TUint16*)(fn),filenamelen,filenamelen );

    iBitmapFilename->Des().Append(KAknsSrvPathEndSeparator);
    iBitmapFilename->Des().Append(filenamePtr);
    iBitmapFilename->Des().Replace(iBitmapFilename->Length()-3, 3 ,_L("mif"));

    TUint att = 0;
    if (iFs.Att(*iBitmapFilename,att))
        {
        iBitmapFilename->Des().Zero();
        iBitmapFilename->Des().Append((*iBitmapPath)[0]);
        iBitmapFilename->Des().Append(KAknsSrvScalableRomBmpOldLocation);
        iBitmapFilename->Des().AppendNumFixedWidthUC( iPkg.iNumber, EHex, 8 );

        if( !iPkg.IsUid() )
            {
            iBitmapFilename->Des().AppendNumFixedWidthUC( iPkg.iTimestamp, EHex, 8 );
            }
        iBitmapFilename->Des().Append(KAknsSrvPathEndSeparator);
        iBitmapFilename->Des().Append(filenamePtr);
        }
    delete[] fn;
    return size;
    }

// -----------------------------------------------------------------------------
// Handle class chunk.
//
// -----------------------------------------------------------------------------
//
TInt CAknLocalSkinInstance::HandleClassChunkL(TUint32 aOffset)
    {
    TUint32 size = Int32(
        iDataPtr, aOffset+EAknsSrvDFOCommonLength);

    TInt fileoffset = aOffset;
    TInt32 chunklen = Int32( iDataPtr,
        fileoffset+EAknsSrvDFOCommonLength );
    TInt16 chunktype = Uint16( iDataPtr,
        fileoffset+EAknsSrvDFOCommonType );
    TInt32 chunkcount = Int32( iDataPtr,
        fileoffset+EAknsSrvDFOClassChunksN );
    fileoffset += EAknsSrvDFOClassContent;

    for (TInt count = 0;count < chunkcount;count++)
        {
        chunklen = Int32( iDataPtr,
            fileoffset+EAknsSrvDFOCommonLength );
        chunktype = Uint16( iDataPtr,
            fileoffset+EAknsSrvDFOCommonType );

        switch(chunktype)
            {

            case EAknsSkinDescSkinDescBmpItemDef:
                DoOverrideBitmapDefinitionL( fileoffset );
                break;

            case EAknsSkinDescSkinDescColorTblItemDef:
                DoOverrideColorTableDefinitionL( fileoffset );
                break;

            case EAknsSkinDescSkinDescImgTblItemDef:
                DoOverrideImageTableDefinitionL( fileoffset);
                break;

            case EAknsSkinDescSkinDescImgBmpAnim:
                break;

            case EAknsSkinDescSkinDescStringItemDef:
                break;

            case EAknsSkinDescEffectQueue:
                DoOverrideEffectQueueL(fileoffset);
                break;

            case EAknsSkinDescAnimation:
                break;

            default:
                break;

            }

        fileoffset+=chunklen;
        if( Uint8( iDataPtr, fileoffset-1 ) != 0xf5 )
            {
            User::Leave( KErrCorrupt );
            }
        }

    return size;
    }

// -----------------------------------------------------------------------------
// Override effect queue.
//
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::DoOverrideEffectQueueL(TUint32 aOffset)
    {
    TInt32 major = Int32( iDataPtr, aOffset+EAknsSrvDFOEffectQueueMajor );
    TInt32 minor = Int32( iDataPtr, aOffset+EAknsSrvDFOEffectQueueMinor );
    TAknsItemID id;
    id.Set(major,minor);
    if (!OverrideElement(id))
        {
        return;
        }

    TInt32 refmajor = Int32( iDataPtr, aOffset+EAknsSrvDFOEffectQueueRefMajor );
    TInt32 refminor = Int32( iDataPtr, aOffset+EAknsSrvDFOEffectQueueRefMinor );
    TUint8 inputlayerindex = Uint8( iDataPtr, aOffset + EAknsSrvDFOEffectQueueInputLayerIndex);
    TUint8 inputlayermode = Uint8( iDataPtr, aOffset + EAknsSrvDFOEffectQueueInputLayerMode);
    TUint8 outputlayerindex = Uint8( iDataPtr, aOffset + EAknsSrvDFOEffectQueueOutputLayerIndex);
    TUint8 outputlayermode = Uint8( iDataPtr, aOffset + EAknsSrvDFOEffectQueueOutputLayerMode);

    TUint16 effectcount = Uint16( iDataPtr, aOffset + EAknsSrvDFOEffectQueueEffectCount);

    if( inputlayermode > 0x08 ||
        outputlayermode > 0x08 ||
        effectcount > KAknsSrvMaxEffectCount )
        {
        User::Leave(KErrCorrupt);
        }

    CAknsEffectQueueItemDef* queue = CAknsEffectQueueItemDef::NewL(id);
    CleanupStack::PushL(queue);
    UpdateOverriddenItem(queue);
    CleanupStack::Pop(queue);

    if (refmajor && refminor)
        {
        TAknsItemID ref;
        ref.Set(refmajor, refminor);
        return;
        }

    // process all effect chunks inside
    TUint32 eqBase = EAknsSrvDFOEffectQueueEffects;
    // process all effect chunks inside
    DoOverrideEffectCommandsL( aOffset, eqBase, queue, effectcount );
    }

// -----------------------------------------------------------------------------
// Override effect commands.
//
// -----------------------------------------------------------------------------
//
TUint32 CAknLocalSkinInstance::DoOverrideEffectCommandsL(
    const TUint aOffset, TUint32& aBase,
    CAknsEffectQueueItemDef* aEffectQueue, const TUint16 aEffectCount )
    {
    TUint32 totalSize = 0;
    for( TInt i = 0; i < aEffectCount; i++)
        {
        TInt32 effectuid = Int32( iDataPtr, aOffset+aBase + 8  );
        TUint8 inAindex = Uint8( iDataPtr, aOffset+ aBase+ 12);
        TUint8 inAmode = Uint8( iDataPtr, aOffset+ aBase+ 13);
        TUint8 inBindex = Uint8( iDataPtr, aOffset+ aBase+ 14);
        TUint8 inBmode = Uint8( iDataPtr, aOffset+ aBase+ 15);
        TUint8 outIndex = Uint8( iDataPtr, aOffset+ aBase+ 16);
        TUint8 outMode = Uint8( iDataPtr, aOffset+ aBase+ 17);

        // Check that at least some values are meaningful
        if (inAmode > 0x08 || inBmode > 0x08 || outMode > 0x08 )
            {
            User::Leave(KErrCorrupt);
            }

        TUint16 paramcount = Uint16( iDataPtr, aOffset+ aBase+ 18);
        if (paramcount > KAknsSrvMaxEffectParamCount)
            {
            User::Leave(KErrCorrupt);
            }
        aBase+=20;

        // process all parameters inside single effect
        TUid uid;
        uid.iUid = effectuid;
        CAknsEffectItemDef* effect = CAknsEffectItemDef::NewL();
        CleanupStack::PushL(effect);
        effect->SetEffectUid(uid);
        effect->SetLayerIndexesAndModes(
            inAindex, inAmode,
            inBindex, inBmode,
            outIndex, outMode );
        aEffectQueue->AddEffectL(effect);
        CleanupStack::Pop( effect );

        TUint32 totalparamsize =
            DoOverrideParamsL( aOffset, aBase, effect, paramcount );
        aBase+=1;
        }

    return totalSize;
    }

// -----------------------------------------------------------------------------
// Override effect parameters.
//
// -----------------------------------------------------------------------------
//
TUint32 CAknLocalSkinInstance::DoOverrideParamsL(const TUint aOffset, TUint32& aEqBase,
    CAknsEffectItemDef* aEffect, const TUint16 aParamCount )
    {
    TUint32 totalparamsize = 0; // total size of all parameters
    for( TInt i = 0; i < aParamCount; i++ )
        {
        TUint16 totalparamlen = Uint16( iDataPtr, aOffset + aEqBase);
        TUint32 datasize = totalparamlen-4; //ParamLength(TUint16)-Reserved(TUint8)-ParamType(TUint8)

        // lets assume that one effect cannot be larger than 32kb (should be more than enough)
        if (datasize >= 0x8000)
            {
            User::Leave(KErrCorrupt);
            }
        TUint8 ptype = Uint8(iDataPtr,aOffset+aEqBase+3);

        CAknsEffectParamDef* paramdef = CAknsEffectParamDef::NewL();
        CleanupStack::PushL(paramdef);
        paramdef->SetType(ptype);

        TUint16 paramnamelen = *((TUint16*)(iDataPtr+aOffset+aEqBase+4));
        if (paramnamelen)
            {
            HBufC* name = HBufC::NewL(paramnamelen);
            CleanupStack::PushL(name);
            TPtr nam(name->Des());
            nam.SetLength(paramnamelen);
            TUint8* ptr = (unsigned char*)nam.Ptr();
            Mem::Copy(ptr,iDataPtr+aOffset+aEqBase+4+2, paramnamelen*2);
            paramdef->SetNameL(*name);
            CleanupStack::PopAndDestroy( name );
            }

        if (ptype == 2) // graphics param
            {
            TUint32 bmpindex = Uint32(iDataPtr,aOffset+aEqBase+4+2+paramnamelen*2);
            TUint32 maskindex = Uint32(iDataPtr, aOffset+aEqBase+4+6+paramnamelen*2);
            paramdef->SetValueL(*iBitmapFilename,
                bmpindex, maskindex);

            }
        else // string or int param or namedref (similar to int, used in animations)
            {
            TUint32 value = Uint32(iDataPtr,aOffset+aEqBase+4+2+paramnamelen*2);
            paramdef->SetValue(value);
            }
        aEffect->AddParameterL(paramdef);
        CleanupStack::Pop( paramdef );

        aEqBase += totalparamlen;
        totalparamsize+=totalparamlen;
        }

    return totalparamsize;
    }


// -----------------------------------------------------------------------------
// Override color table definitions.
//
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::DoOverrideColorTableDefinitionL( TUint32 aOffset )
    {
    if (iNoColors)
        {
        return;
        }
    TInt32 major = Int32( iDataPtr,
        aOffset+EAknsSrvDFOColorTableMajor );
    TInt32 minor = Int32( iDataPtr,
        aOffset+EAknsSrvDFOColorTableMinor );
    TInt colorCount = (Uint16( iDataPtr,
        aOffset+EAknsSrvDFOColorTableColorsN))&0xff;


    TAknsImageAttributeData attributedata;
    TInt attributes = 0;
    TInt alignment = 0;
    TInt coordX = 0;
    TInt coordY = 0;
    TInt sizeW = 0;
    TInt sizeH = 0;

    // Image attributes
    TInt attributeBaseOffset =
        aOffset+EAknsSrvDFOColorTableColorIndex0+
        colorCount*EAknsSrvDFOColorTableColorSize;
    ReadAttributeChunkL( attributeBaseOffset,
        attributes, alignment,
        coordX, coordY,
        sizeW, sizeH );

    // Set only attributes - others are not relevant for color tables.
    attributedata.iAttributes = (TAknsImageAttribute)attributes;

    TAknsItemID id;
    id.Set( major, minor );
    CAknsColorTableItemDef* colorDef = CAknsColorTableItemDef::NewL(id);
    CleanupStack::PushL(colorDef);

    TAknsColorTableEntry* colors = new TAknsColorTableEntry[colorCount];
    CleanupArrayDeletePushL(colors);

    for( TInt i=0; i<colorCount; i++ )
        {
        TInt16 index = Uint16( iDataPtr,
            aOffset+EAknsSrvDFOColorTableColorIndex0 +
            (i*EAknsSrvDFOColorTableColorSize) );
        TInt32 rgb = Int32( iDataPtr,
            aOffset+EAknsSrvDFOColorTableColorRgb0 +
            (i*EAknsSrvDFOColorTableColorSize) );

        colors[i].iIndex = index;
        colors[i].iRgb = rgb;
        }
    // colors are owned by the itemdef
    colorDef->SetColorsL(colorCount, colors);
    colorDef->SetAttributesL(attributedata);
    CleanupStack::PopAndDestroy( colors );

    UpdateOverriddenItem(colorDef);
    CleanupStack::Pop( colorDef );
    iColorsFound = ETrue;
    }

// -----------------------------------------------------------------------------
// Override elements.
//
// -----------------------------------------------------------------------------
//
TBool CAknLocalSkinInstance::OverrideElement(const TAknsItemID& aId)
    {
    TInt index = iItemsToOVerride.FindInOrder(aId, TAknsItemID::LinearOrder );
    if (index == KErrNotFound)
        {
        return EFalse;
        }
    else
        {
        return ETrue;
        }
    }

// -----------------------------------------------------------------------------
//
//
// -----------------------------------------------------------------------------
//
TBool CAknLocalSkinInstance::AlreadyOverrideElement(const TAknsItemID& aId)
    {
    TInt count = iOverriddenItems.Count();
    for( int i=0 ; i < count ; i++ )
        {
        CAknsItemDef *item = static_cast< CAknsItemDef* >( iOverriddenItems[i] );
        if( item && item->ID() == aId )
            {
            return ETrue;
            }
        }
        
    return EFalse;
    }
    
    
    
    
// -----------------------------------------------------------------------------
// Override bitmap definitions.
//
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::DoOverrideBitmapDefinitionL(TUint32 aOffset)
    {
    TInt32 major = Int32( iDataPtr,
        aOffset+EAknsSrvDFOBitmapMajor );
    TInt32 minor = Int32( iDataPtr,
        aOffset+EAknsSrvDFOBitmapMinor );
    TInt32 bmpIndex = Int32( iDataPtr,
        aOffset+EAknsSrvDFOBitmapBitmapIndex );
    TInt32 maskBmpIndex = Int32( iDataPtr,
        aOffset+EAknsSrvDFOBitmapMaskIndex );
        
    TAknsItemID id;
    id.Set(major, minor);
    
    if( maskBmpIndex == KErrNotFound )
        {
        CAknsBitmapItemDef* bmpdef = CAknsBitmapItemDef::NewL(id);
        bmpdef->SetFilenameL(*iBitmapFilename);
        bmpdef->SetIndex(bmpIndex);
        UpdateOverriddenItem(bmpdef);
        }
    else
        {
        CAknsMaskedBitmapItemDef* maskeddef = CAknsMaskedBitmapItemDef::NewL(id);
        maskeddef->SetFilenameL(*iBitmapFilename);
        maskeddef->SetIndex(bmpIndex);
        maskeddef->SetMaskIndex(maskBmpIndex);
        UpdateOverriddenItem(maskeddef);
        }
    
    }

// -----------------------------------------------------------------------------
// Read attribute chunks.
//
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::ReadAttributeChunkL( const TUint aOffset,
    TInt& aAttributes, TInt& aAlignment,
    TInt& aCoordX, TInt& aCoordY, TInt& aSizeW, TInt& aSizeH )
    {
    TUint16 version = Uint16( iDataPtr,
        aOffset + EAknsSrvDFOCommonVersion );

    TUint16 alignAttr = Uint16( iDataPtr,
        aOffset + EAknsSrvDFOAttributesAttributeFlags );
    TInt16 imageCoordX = Uint16( iDataPtr,
        aOffset + EAknsSrvDFOAttributesCoordX );
    TInt16 imageCoordY = Uint16( iDataPtr,
        aOffset + EAknsSrvDFOAttributesCoordY );
    TInt16 imageSizeW = Uint16( iDataPtr,
        aOffset + EAknsSrvDFOAttributesSizeW );
    TInt16 imageSizeH = Uint16( iDataPtr,
        aOffset + EAknsSrvDFOAttributesSizeH );

    aAttributes = alignAttr&0xff;
    aAlignment = (alignAttr&0xff00)>>8;
    aCoordX = imageCoordX;
    aCoordY = imageCoordY;
    aSizeW = imageSizeW;
    aSizeH = imageSizeH;

    if( version >= 2 )
        {
        TInt extAttr = Uint16( iDataPtr,
            aOffset + EAknsSrvDFOAttributesExtAttributeFlags );
        extAttr = extAttr << 8;
        aAttributes |= extAttr;
        }
    }

// -----------------------------------------------------------------------------
// Override image table definitions.
//
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::DoOverrideImageTableDefinitionL( TUint32 aOffset)
    {
    TInt32 major = Int32( iDataPtr,
        aOffset+EAknsSrvDFOImageTableMajor );
    TInt32 minor = Int32( iDataPtr,
        aOffset+EAknsSrvDFOImageTableMinor );
    TInt imageCount = (Uint16( iDataPtr,
        aOffset+EAknsSrvDFOImageTableImagesN))&0xff;

    TAknsItemID id;
    id.Set(major, minor);
    if (!OverrideElement(id))
        {
       return;
        }

    TAknsImageAttributeData attributedata;
    TInt attributes = 0;
    TInt alignment = 0;
    TInt coordX = 0;
    TInt coordY = 0;
    TInt sizeW = 0;
    TInt sizeH = 0;

    // Image attributes
    TInt attributeBaseOffset =
        aOffset+EAknsSrvDFOImageTableImageMajor0+
        imageCount*EAknsSrvDFOImageTableImageSize;
    ReadAttributeChunkL( attributeBaseOffset,
        attributes, alignment,
        coordX, coordY,
        sizeW, sizeH );

    attributedata.iCoords = TPoint(coordX, coordY);

    attributedata.iSize = TSize(sizeW, sizeH);

    attributedata.iAlignment = (TAknsImageAlignment)alignment;

    if( imageCount == KAknsSrvFrameIconCount )
        {
        attributes^= EAknsImageAttributeTile;
        attributes|= EAknsImageAttributeStretch;
        attributes|= EAknsImageAttributeNBC;
        }

    attributedata.iAttributes = (TAknsImageAttribute)attributes;

    CAknsImageTableItemDef* tabledef = CAknsImageTableItemDef::NewL(id);
    CleanupStack::PushL(tabledef);
    tabledef->SetAttributesL(attributedata);
    TAknsItemID* items = new (ELeave)TAknsItemID[imageCount];
    CleanupArrayDeletePushL(items);

    for( TInt i=0; i<imageCount; i++ )
        {
        TInt32 imgMajor = Int32( iDataPtr,
            aOffset+EAknsSrvDFOImageTableImageMajor0 +
            (i*EAknsSrvDFOImageTableImageSize) );
        TInt32 imgMinor = Int32( iDataPtr,
            aOffset+EAknsSrvDFOImageTableImageMinor0 +
            (i*EAknsSrvDFOImageTableImageSize) );

        items[i].iMajor = imgMajor;
        items[i].iMinor = imgMinor;
        }
    tabledef->SetImagesL(imageCount, items);
    CleanupStack::PopAndDestroy( items );
    UpdateOverriddenItem(tabledef);
    CleanupStack::Pop( tabledef );
    }

// -----------------------------------------------------------------------------
// Handle generic release restriction chunk.
//
// -----------------------------------------------------------------------------
//
TInt  CAknLocalSkinInstance::HandleGenericRelRestrictionChunkL(
    TUint32 aFileOffset)
    {
    TUint32 size = Int32( iDataPtr,
        aFileOffset+EAknsSrvDFOReleaseGenericLength);
    TInt32 numberofchunks = Int32( iDataPtr,
        aFileOffset+EAknsSrvDFOReleaseGenericChunksN );
    TInt platformMajor = Uint8( iDataPtr,
        aFileOffset+EAknsSrvDFOReleaseGenericPlatformMajor );
    TInt platformMinor = Uint8( iDataPtr,
        aFileOffset+EAknsSrvDFOReleaseGenericPlatformMinor );

    // Process the chunk only if restriction is met
    if( (platformMajor<iPlatformMajor) ||
        ((platformMajor==iPlatformMajor)&&
        (platformMinor<=iPlatformMinor)) )
        {
        ProcessChunksL( aFileOffset+EAknsSrvDFOReleaseGenericContent,
            numberofchunks );
        }

    return size;
    }

// -----------------------------------------------------------------------------
// Handle release 2.6 restriction chunk.
//
// -----------------------------------------------------------------------------
//
TInt CAknLocalSkinInstance::Handle26RelRestrictionChunkL(
    TUint32 aFileOffset )
    {
    TUint32 size = Int32( iDataPtr,
        aFileOffset+EAknsSrvDFORelease26Length);
    TInt32 numberofchunks = Int32( iDataPtr,
        aFileOffset+EAknsSrvDFORelease26ChunksN );

    // Process always (we are guaranteed to be at lease 2.8>2.6)
    ProcessChunksL( aFileOffset+EAknsSrvDFORelease26Content,
        numberofchunks );
    return size;
    }




// -----------------------------------------------------------------------------
// Check if skin item is scalable item.
//
// -----------------------------------------------------------------------------
//
TBool CAknLocalSkinInstance::IsScalableItem(const TAknsItemID& aId)
    {
    if ( aId.iMajor == EAknsMajorSkin &&
         aId.iMinor >= EAknsMinorQsnBgScreen &&
         aId.iMinor <= EAknsMinorQsnBgAreaMainSmall )
        {
        return ETrue;
        }
    else if ( aId.iMajor == EAknsMajorAvkon &&
              aId.iMinor >= EAknsMinorQsnBgNavipaneSolid && 
              aId.iMinor <= EAknsMinorQsnBgNavipaneWipeIdle )
        {
        return ETrue;
        }
    return EFalse;
    }

// -----------------------------------------------------------------------------
// CAknLocalSkinInstance::IsDrmProtectedL
// -----------------------------------------------------------------------------
//
TBool CAknLocalSkinInstance::IsDrmProtectedL(RFile &aFile)
    {
    TBool isProtected(EFalse);
    TInt value = KErrNone;

    CContent* content = CContent::NewLC( aFile );
    User::LeaveIfError( content->GetAttribute( EIsProtected, value ) );
    if ( value )
        {
        isProtected = ETrue;
        }
    CleanupStack::PopAndDestroy( content );
    return isProtected;
    }

// -----------------------------------------------------------------------------
// CAknLocalSkinInstance::ReadFromProtectedFileL
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::ReadFromProtectedFileL(TDes8 &aDes, RFile &aFile)
    {
    CContent* content = CContent::NewLC( aFile );
    CData* data = content->OpenContentL(
        ContentAccess::EView, ContentAccess::EContentShareReadOnly);
    CleanupStack::PushL( data );

    TInt size = 0;
    TInt position = 0;
    data->DataSizeL(size);
    User::LeaveIfError( data->Seek(ESeekStart, position) );
    User::LeaveIfError( data->Read(aDes, size) );

    CleanupStack::PopAndDestroy( 2 ); // content,
    }

// -----------------------------------------------------------------------------
// CAknLocalSkinInstance::GetRightsDetailsL
// -----------------------------------------------------------------------------
//
TInt CAknLocalSkinInstance::GetRightsDetailsL(RFile &aFile)
    {
    // If protection is indicated, by default set it on.
    TInt protectionType = EAknsSrvProtected;

    TBool expired = EFalse;
    TBool sendAllowed = EFalse; //not needed
    CDRMHelperRightsConstraints* playDrmHlpCons = NULL;
    CDRMHelperRightsConstraints* dispDrmHlpCons = NULL;
    CDRMHelperRightsConstraints* execDrmHlpCons = NULL;
    CDRMHelperRightsConstraints* printDrmHlpCons = NULL;

    TRAPD( drmErr, iDrmHelper->GetRightsDetailsL(
        aFile, ContentAccess::EView, expired, sendAllowed,
        playDrmHlpCons, dispDrmHlpCons, execDrmHlpCons, printDrmHlpCons ) );
    // DrmHelper leaves if the content is protected, but there are rights.
    if ( drmErr == KErrCANoRights )
        {
        protectionType = EAknsSrvNoRights; // not allowed to preview
        }
    else if ( drmErr == KErrArgument )
        {
        protectionType = EAknsSrvNoProtection; // not DRM protected
        }
    // Delete not needed constraints.
    delete printDrmHlpCons;
    delete execDrmHlpCons;
    delete playDrmHlpCons;
    CleanupStack::PushL( dispDrmHlpCons );
    // Check expiration. If expired and no rights => expired.
    if ( expired && !dispDrmHlpCons )
        {
        protectionType = EAknsSrvExpiredRights; // not allowed to preview
        }
    // If expired, but there are rights => future rights.
    if ( expired && dispDrmHlpCons )
        {
        protectionType = EAknsSrvFutureRights; // not allowed to preview
        }
    if ( dispDrmHlpCons )
        {
        TUint32 counter = 0;
        TUint32 origCounter = 0;
        TRAP( drmErr, dispDrmHlpCons->GetCountersL( counter, origCounter ) );
        // No counters
        if ( drmErr == KErrNotFound )
            {
            protectionType = EAknsSrvProtected; // allowed to preview
            }
        else
            {
            protectionType = EAknsSrvCountBased; // not allowed to preview
            }
        }
    CleanupStack::PopAndDestroy( dispDrmHlpCons );

    return protectionType;
    }

// -----------------------------------------------------------------------------
// Read arabic/hebrew mirroring state.
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::RetrieveAHMirroringState()
    {
    CRepository *avkonRepository = NULL;
    TRAPD( cenrepErr,avkonRepository = CRepository::NewL(KCRUidAvkon) );
    if( cenrepErr != KErrNone )
        {
        iAHMirroringActive = EFalse;
        return;
        }
        
    CleanupStack::PushL( avkonRepository );
    
    TInt value = 0;
    TInt errorCode = avkonRepository->Get( KAknLayoutId , value );
    if( errorCode != KErrNone )
        {
        value = 0;
        }
    if( value == EAknLayoutIdABRW )
        {
        iAHMirroringActive = ETrue;
        }
    else
        {
        iAHMirroringActive = EFalse;
        }
        
    CleanupStack::PopAndDestroy( avkonRepository );
    }
    
    
// -----------------------------------------------------------------------------
// Load skin item from skin file.
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::ProcessSkinFileL( const TDesC& aFilename, TBool aIsDefaultSkin )
    {
    TInt filehandle = 0;

    if( !aIsDefaultSkin || !iDefaultSknBuffer )
        { 
        TInt fshandle = iSkinSrv.OpenBitmapFile( aFilename, filehandle);
        if (fshandle <=0 || filehandle == 0)
            {
            User::Leave(fshandle);
            }

        RFile file;
        TInt fileSize = 0;

        CleanupClosePushL(file);
        User::LeaveIfError(file.AdoptFromServer(fshandle, filehandle));
        User::LeaveIfError(file.Size(fileSize));
        
        TPtr8 *pptr = 0;
        if(aIsDefaultSkin)
            {
            iDefaultSknBuffer = HBufC8::NewL(fileSize);
            pptr = new TPtr8( iDefaultSknBuffer->Des() );
            CleanupStack::PushL(pptr);
            }
        else
            {
            iSknBuffer = HBufC8::NewL(fileSize);
            pptr = new TPtr8( iSknBuffer->Des() );
            CleanupStack::PushL(pptr);
            }

            
        TBool drmProtected = IsDrmProtectedL(file);
        if ( drmProtected )
            {
            if (!iDrmHelper)
                {
                iDrmHelper = CDRMHelper::NewL();
                }

            TInt protectionType = GetRightsDetailsL(file);

            if (protectionType == EAknsSrvProtected)
                {
                // local skinning is permitted but drm rights
                // must be consumed first
                // consume start
                iDrmHelper->ConsumeFile2( file, EInstall, CDRMHelper::EStart );

                // reading content from drm protected file!!!!
                // DoApplyL probably needs to be changed
                TRAPD(err,ReadFromProtectedFileL(*pptr,file));

                iDrmHelper->ConsumeFile2( file, EInstall, CDRMHelper::EFinish );

                User::LeaveIfError(err);
                }
            else if(protectionType == EAknsSrvNoProtection)
                {
                drmProtected = EFalse;
                }
            else // local skinning is not permitted
                {
                User::Leave(EAknsSrvProtected);
                }
            }
        else
            {
            User::LeaveIfError(file.Read(*pptr,fileSize));
            }
        CleanupStack::Pop(pptr);
        delete pptr;
        CleanupStack::PopAndDestroy(); // file
        }
    
    
    if(aIsDefaultSkin)
        {
        iDataPtr = (TUint8*)iDefaultSknBuffer->Ptr();
        }
    else
        {
        iDataPtr = (TUint8*)iSknBuffer->Ptr();
        }

    TUint masterChunkSize = Int32(
        iDataPtr, EAknsSrvDFOCommonLength );
    TUint masterChunkType = Uint16(
        iDataPtr, EAknsSrvDFOCommonType );
    TInt32 numberofchunks = Int32(
        iDataPtr, EAknsSrvDFOSkinChunksN );

    if( masterChunkType != EAknsSkinDescSkinDesc )
        {
        User::Leave( KErrCorrupt );
        }
    TInt32 pid1 = Int32(iDataPtr,EAknsSrvDFOSkinSkinPID1);
    TInt32 pid2 = Int32(iDataPtr,EAknsSrvDFOSkinSkinPID2);

    iPkg.Set(pid2, pid1);

    //2 for the driveletter and end separator
    TInt pathsize = KAknsSrvScalableRomBmpLocation().Length()+8+2;
    if (!iPkg.IsUid())
        {
        pathsize+=8;
        }


    iBitmapPath = HBufC16::NewL(pathsize);
    iBitmapPath->Des().Append(aFilename[0]);
    iBitmapPath->Des().Append(KAknsSrvScalableRomBmpLocation);
    iBitmapPath->Des().AppendNumFixedWidthUC( iPkg.iNumber, EHex, 8 );

    if( !iPkg.IsUid() )
        {
        iBitmapPath->Des().AppendNumFixedWidthUC( iPkg.iTimestamp, EHex, 8 );
        }

    ProcessChunksL(EAknsSrvDFOSkinContent , numberofchunks );
    if( Uint8(iDataPtr,masterChunkSize-1) != 0xf5 )
        {
        User::Leave( KErrCorrupt );
        }
        
        
    delete iSknBuffer;
    iSknBuffer = NULL;
    delete iBitmapPath;
    iBitmapPath = NULL;
    delete iBitmapFilename;
    iBitmapFilename = NULL;
    }


// -----------------------------------------------------------------------------
// Override local skin item.
// -----------------------------------------------------------------------------
//
void CAknLocalSkinInstance::UpdateOverriddenItem(const CAknsItemDef* aItemDef)
    {
    if( !aItemDef )
        {
        return;
        }

    TInt count = iOverriddenItems.Count();
    for( int i=0 ; i < count ; i++ )
        {
        CAknsItemDef *item = static_cast< CAknsItemDef* >( iOverriddenItems[i] );
        if( item && item->ID() == aItemDef->ID() )
            {
            iOverriddenItems.Remove( i );
            delete item;
            break;
            }
        }
        
    iOverriddenItems.Append(aItemDef);
    }


// -----------------------------------------------------------------------------
// Handles language restriction chunk..
// -----------------------------------------------------------------------------
//
TInt CAknLocalSkinInstance::HandleLangRestrictionChunkL(TUint32 aFileOffset)
    {
    TUint32 size = Int32( iDataPtr,
        aFileOffset+EAknsSrvDFOCommonLength);
        
    TUint16 generalRestr = Uint16( iDataPtr,
        aFileOffset+EAknsSrvDFOLanguageGenRestr);
        
    TUint16 langRestr = Uint16( iDataPtr,
        aFileOffset+EAknsSrvDFOLanguageLangRestr);
        
    TInt32 numberofchunks = Int32( iDataPtr,
        aFileOffset+EAknsSrvDFOLanguageLanguageN );
        
    if( (generalRestr == 0) ||
        (generalRestr == 1 && !iAHMirroringActive) ||
        (generalRestr == 2 && iAHMirroringActive) )
        {
        if ((langRestr == 0) ||
           (langRestr && langRestr == User::Language()))
            {
            // Set the restriction parameters before processing
            // the chunks inside it
                ProcessChunksL( aFileOffset+EAknsSrvDFOLanguageContent,
        numberofchunks );
            }
        }
    return size;
    }
// End of file

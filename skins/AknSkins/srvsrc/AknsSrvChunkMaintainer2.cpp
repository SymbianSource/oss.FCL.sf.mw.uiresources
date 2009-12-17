/*
* Copyright (c) 2005-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Extension to chunk maintainer.
*
*/


#include "AknsSrvChunkMaintainer.h"

#include "AknsSrvUtils.h"
#include "AknsSrvDescriptorFileLayout.h"

#include "AknsDebug.h"

// CONSTANTS

// Max of 32 effects per queue and 64 params per effect should be enough
static const TInt KAknsSrvMaxEffectCount      = 0x20;
static const TInt KAknsSrvMaxParamGroupCount  = 0x20;
static const TInt KAknsSrvMaxEffectParamCount = 0x40;

/**
* A wrapper class for RPointerArray cleanup.
*/
NONSHARABLE_CLASS( CAknsSrvArrayStore ): public CBase
    {
    public:
        CAknsSrvArrayStore()
            {}

        ~CAknsSrvArrayStore()
            {
            while( iArray.Count() )
                {
                delete [] iArray[0];
                iArray.Remove(0);
                }
            iArray.Reset();
            }

    public:
        RPointerArray<TUint8> iArray;
    };

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeEffectQueueL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::DoMergeEffectQueueL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset,
    const TAknsItemDefClass /*aClass*/,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool /*aAhOverride*/ )
    {
    TAknsSrvDef itemDef;
    TInt32 major = AknsSrvUtils::GetInt32L( aFile, aOffset+EAknsSrvDFOEffectQueueMajor );
    TInt32 minor = AknsSrvUtils::GetInt32L( aFile, aOffset+EAknsSrvDFOEffectQueueMinor );
    TInt32 refmajor = AknsSrvUtils::GetInt32L( aFile, aOffset+EAknsSrvDFOEffectQueueRefMajor );
    TInt32 refminor = AknsSrvUtils::GetInt32L( aFile, aOffset+EAknsSrvDFOEffectQueueRefMinor );
    TUint8 inputlayerindex = AknsSrvUtils::GetUInt8L( aFile, aOffset + EAknsSrvDFOEffectQueueInputLayerIndex);
    TUint8 inputlayermode = AknsSrvUtils::GetUInt8L( aFile, aOffset + EAknsSrvDFOEffectQueueInputLayerMode);
    TUint8 outputlayerindex = AknsSrvUtils::GetUInt8L( aFile, aOffset + EAknsSrvDFOEffectQueueOutputLayerIndex);
    TUint8 outputlayermode = AknsSrvUtils::GetUInt8L( aFile, aOffset + EAknsSrvDFOEffectQueueOutputLayerMode);

    TUint16 effectcount = AknsSrvUtils::GetUInt16L( aFile, aOffset + EAknsSrvDFOEffectQueueEffectCount);

    if( inputlayermode > 0x08 ||
        outputlayermode > 0x08 ||
        effectcount > KAknsSrvMaxEffectCount )
        {
        User::Leave(KErrCorrupt);
        }

    TUint32 size = 0;
    itemDef.iID.Set(major,minor);

    if( aExclQuery.IsExcluded( itemDef.iID ) )
        {
        return;
        }

    CheckAndModifyIID( itemDef.iID, aExclQuery );

    itemDef.iType = EAknsITEffectQueue;

    if (refmajor && refminor)
        {
        TAknsSrvEffectQueueDef eq;
        eq.iEffectQueueSize = sizeof(TAknsSrvEffectQueueDef);
        eq.iEffectCount = 0;
        eq.iRefMajor = refmajor;
        eq.iRefMinor = refminor;
        UpdateDef(&itemDef,&eq,sizeof(TAknsSrvEffectQueueDef),-1);
        return;
        }

    CAknsSrvArrayStore* effectArray = new(ELeave) CAknsSrvArrayStore();
    CleanupStack::PushL( effectArray );

    TUint32 eqBase = EAknsSrvDFOEffectQueueEffects;
    TUint32 totalEffectSize = 0;

    // process all effect chunks inside
    totalEffectSize = DoMergeEffectCommandsL( aFile, aOffset, eqBase, effectArray->iArray, effectcount );

    // All effects collected, add them to the queue
    TUint8* eqBlock = new (ELeave) TUint8[sizeof(TAknsSrvEffectQueueDef)+totalEffectSize];
    // No leaves after this

    TAknsSrvEffectQueueDef* eqDef = (TAknsSrvEffectQueueDef*)eqBlock;
    eqDef->iEffectCount = effectcount;
    eqDef->iRefMinor = 0;
    eqDef->iRefMajor = 0;
    eqDef->iInputLayerIndex = inputlayerindex;
    eqDef->iInputLayerMode = inputlayermode;
    eqDef->iOutputLayerIndex = outputlayerindex;
    eqDef->iOutputLayerMode = outputlayermode;
    TUint32 base = sizeof(TAknsSrvEffectQueueDef);

    for (TInt ecount = 0; ecount < effectcount; ecount++)
        {
        TAknsSrvEffectDef* effectDef = (TAknsSrvEffectDef*)(effectArray->iArray[ecount]);
        size = effectDef->iEffectSize;
        Mem::Copy(eqBlock+base, effectDef, size);
        base+=size;
        }
    eqDef->iEffectQueueSize = sizeof(TAknsSrvEffectQueueDef)+totalEffectSize;

    CleanupStack::PopAndDestroy( effectArray ); // effectArray

    UpdateDef( &itemDef, eqDef, sizeof(TAknsSrvEffectQueueDef)+totalEffectSize, -1 );
    delete [] eqBlock;

    // Leaves ok as eqBlock has been deleted
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeParamL
// -----------------------------------------------------------------------------
//
TUint32 CAknsSrvChunkMaintainer::DoMergeParamsL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset, TUint32& aEqBase,
    RPointerArray<TUint8>& aParamArray, const TUint16 aParamCount )
    {
    TUint32 totalparamsize = 0; // total size of all parameters
    for( TInt i = 0; i < aParamCount; i++ )
        {
        TUint16 totalparamlen = AknsSrvUtils::GetUInt16L( aFile, aOffset + aEqBase);
        TUint32 datasize = totalparamlen-4; //ParamLength(TUint16)-Reserved(TUint8)-ParamType(TUint8)

        // lets assume that one effect cannot be larger than 32kb (should be more than enough)
        if (datasize >= 0x8000)
            {
            User::Leave(KErrCorrupt);
            }
        TUint8 ptype = AknsSrvUtils::GetUInt8L(aFile,aOffset+aEqBase+3);

        TUint8* paramBlock = NULL;
        TAknsSrvEffectParameterDef* paramDef = NULL;

        TUint8* data = AknsSrvUtils::ReadSkinDescL(aFile, aOffset+aEqBase+4, datasize);
        CleanupStack::PushL(data);
        if (ptype == 2) // graphics param
            {
            TUint32 filenameid = *((TUint32*)(data+datasize-4)) + iCurrentFilenameID;
            TInt filenameoffset = GetFilenameOffsetByID(filenameid);

            paramBlock = new (ELeave) TUint8[sizeof(TAknsSrvEffectParameterDef)+datasize-4+KAknsSrvMaxFileNameLen-4];
            CleanupStack::PushL( paramBlock );
            paramDef = (TAknsSrvEffectParameterDef*)paramBlock;
            Mem::Copy(paramBlock+sizeof(TAknsSrvEffectParameterDef), data, datasize-4);
            // Convert filenameid to offset and replace the id with offset
            Mem::Copy(paramBlock+sizeof(TAknsSrvEffectParameterDef)+datasize-4,&filenameoffset, sizeof(TInt));
            paramDef->iParameterType = ptype;
            paramDef->iParameterLength = AlignToFour(sizeof(TAknsSrvEffectParameterDef)+datasize);
            }
        else // string or int param or namedref (similar to int, used in animations)
            {
            paramBlock = new (ELeave) TUint8[sizeof(TAknsSrvEffectParameterDef)+datasize];
            CleanupStack::PushL( paramBlock );
            paramDef = (TAknsSrvEffectParameterDef*)paramBlock;
            paramDef->iParameterType = ptype;
            paramDef->iParameterLength = AlignToFour(sizeof(TAknsSrvEffectParameterDef)+datasize);
            Mem::Copy(paramBlock+sizeof(TAknsSrvEffectParameterDef), data, datasize);
            }

        totalparamsize += paramDef->iParameterLength;
        User::LeaveIfError( aParamArray.Append(paramBlock) );
        CleanupStack::Pop( paramBlock ); // paramBlock

        CleanupStack::PopAndDestroy( data ); // data

        aEqBase += totalparamlen;
        }

    return totalparamsize;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeParamGroupL
// -----------------------------------------------------------------------------
//
TUint32 CAknsSrvChunkMaintainer::DoMergeParamGroupsL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset, TUint32& aBase,
    RPointerArray<TUint8>& aGroupArray, const TUint16 aGroupCount )
    {
    TUint32 totalGroupsSize = 0;
    for( TInt i = 0; i < aGroupCount; i++ )
        {
        // Fetch param group header
        TUint32 valueA = AknsSrvUtils::GetInt32L( aFile, aOffset + aBase + EAknsSrvDFOAnimationParamGroupValueA );
        TUint32 valueB = AknsSrvUtils::GetInt32L( aFile, aOffset + aBase + EAknsSrvDFOAnimationParamGroupValueB );
        TUint16 pcount = AknsSrvUtils::GetUInt16L( aFile, aOffset + aBase + EAknsSrvDFOAnimationParamGroupParameterCount );

        if( pcount > KAknsSrvMaxEffectParamCount )
            {
            User::Leave(KErrCorrupt);
            }

        // Fetch parameters
        aBase = aBase + EAknsSrvDFOAnimationParamGroupParameters;

        CAknsSrvArrayStore* paramArray = new(ELeave) CAknsSrvArrayStore();
        CleanupStack::PushL( paramArray );
        TUint32 totalParamSize = DoMergeParamsL( aFile, aOffset, aBase, paramArray->iArray, pcount );

        // Construct group array block
        TUint8* block = new(ELeave) TUint8[sizeof(TAknsSrvParamGroupDef) + totalParamSize];
        CleanupStack::PushL( block );
        TAknsSrvParamGroupDef* def = (TAknsSrvParamGroupDef*)block;
        def->iValueA = valueA;
        def->iValueB = valueB;

        // Copy all parameters to the param group
        TUint32 base = sizeof(TAknsSrvParamGroupDef);
        for (TInt j = 0; j < pcount; j++)
            {
            TAknsSrvEffectParameterDef* paramDef = (TAknsSrvEffectParameterDef*)(paramArray->iArray[j]);
            TUint32 size = paramDef->iParameterLength;
            Mem::Copy(block + base, paramDef, size);
            base+=size;
            }

        def->iGroupSize      = base;
        def->iParameterCount = pcount;
        User::LeaveIfError( aGroupArray.Append(block) );
        CleanupStack::Pop( block );

        CleanupStack::PopAndDestroy( paramArray );

        totalGroupsSize+=base;
        aBase+=1; // GODDAMN END
        }

    return totalGroupsSize;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeEffectCommandL
// -----------------------------------------------------------------------------
//
TUint32 CAknsSrvChunkMaintainer::DoMergeEffectCommandsL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset, TUint32& aBase,
    RPointerArray<TUint8>& aEffectArray, const TUint16 aEffectCount )
    {
    TUint32 totalSize = 0;
    for( TInt i = 0; i < aEffectCount; i++)
        {
        TInt32 effectuid = AknsSrvUtils::GetInt32L( aFile, aOffset+aBase + 8  );
        TUint8 inAindex = AknsSrvUtils::GetUInt8L( aFile, aOffset+ aBase+ 12);
        TUint8 inAmode = AknsSrvUtils::GetUInt8L( aFile, aOffset+ aBase+ 13);
        TUint8 inBindex = AknsSrvUtils::GetUInt8L( aFile, aOffset+ aBase+ 14);
        TUint8 inBmode = AknsSrvUtils::GetUInt8L( aFile, aOffset+ aBase+ 15);
        TUint8 outIndex = AknsSrvUtils::GetUInt8L( aFile, aOffset+ aBase+ 16);
        TUint8 outMode = AknsSrvUtils::GetUInt8L( aFile, aOffset+ aBase+ 17);

        // Check that at least some values are meaningful
        if (inAmode > 0x08 || inBmode > 0x08 || outMode > 0x08 )
            {
            User::Leave(KErrCorrupt);
            }

        TUint16 paramcount = AknsSrvUtils::GetUInt16L( aFile, aOffset+ aBase+ 18);
        if (paramcount > KAknsSrvMaxEffectParamCount)
            {
            User::Leave(KErrCorrupt);
            }
        aBase+=20;

        // process all parameters inside single effect
        CAknsSrvArrayStore* paramArray = new(ELeave) CAknsSrvArrayStore();
        CleanupStack::PushL( paramArray );
        TUint32 totalparamsize = DoMergeParamsL( aFile, aOffset, aBase, paramArray->iArray, paramcount );

        // All data collected
        TUint8* effectBlock= new (ELeave) TUint8[sizeof(TAknsSrvEffectDef)+totalparamsize];
        CleanupStack::PushL( effectBlock );

        TAknsSrvEffectDef* effectdef = (TAknsSrvEffectDef*)effectBlock;
        effectdef->iEffectUid.iUid       = effectuid;
        effectdef->iEffectParameterCount = paramcount;
        effectdef->iInputLayerAIndex     = inAindex;
        effectdef->iInputLayerAMode      = inAmode;
        effectdef->iInputLayerBIndex     = inBindex;
        effectdef->iInputLayerBMode      = inBmode;
        effectdef->iOutputLayerIndex     = outIndex;
        effectdef->iOutputLayerMode      = outMode;

        TUint32 base = sizeof(TAknsSrvEffectDef);
        TInt pcount;
        // copy all parameters to the effect
        for (pcount = 0; pcount < paramArray->iArray.Count(); pcount++)
            {
            TAknsSrvEffectParameterDef* paramDef = (TAknsSrvEffectParameterDef*)(paramArray->iArray[pcount]);
            TUint32 size = paramDef->iParameterLength;
            Mem::Copy(effectBlock+base, paramDef, size);
            base+=size;
            }

        effectdef->iEffectSize = base;
        User::LeaveIfError( aEffectArray.Append(effectBlock) );
        CleanupStack::Pop( effectBlock );

        CleanupStack::PopAndDestroy( paramArray );

        totalSize+=base;
        aBase+=1;// End of commands.
        }

    return totalSize;
    }

// -----------------------------------------------------------------------------
// CAknsSrvChunkMaintainer::DoMergeAnimationL
// -----------------------------------------------------------------------------
//
void CAknsSrvChunkMaintainer::DoMergeAnimationL(
    CAknsSrvFileBuffer& aFile, const TUint aOffset,
    const TAknsItemDefClass /*aClass*/,
    const TAknsSrvExclusionQuery& aExclQuery, const TBool /*aAhOverride*/ )
    {
    TAknsSrvDef itemDef;
    TUint32 size = 0;
    TUint32 totalSize = 0;

    //---------------------------------
    // Step 1: Process animation header information

    // Fetch animation header
    TInt32 major = AknsSrvUtils::GetInt32L(aFile, aOffset+EAknsSrvDFOAnimationMajor);
    TInt32 minor = AknsSrvUtils::GetInt32L(aFile, aOffset+EAknsSrvDFOAnimationMinor);
    TUint8 type  = AknsSrvUtils::GetUInt8L(aFile, aOffset+EAknsSrvDFOAnimationType);
    // Reserved0 and Reserved1 skipped
    TUint8 inIndex = AknsSrvUtils::GetUInt8L(aFile, aOffset + EAknsSrvDFOAnimationInputLayerIndex);
    TUint8 inMode = AknsSrvUtils::GetUInt8L(aFile, aOffset + EAknsSrvDFOAnimationInputLayerMode);
    TUint8 outIndex = AknsSrvUtils::GetUInt8L(aFile, aOffset + EAknsSrvDFOAnimationOutputLayerIndex);
    TUint8 outMode = AknsSrvUtils::GetUInt8L(aFile, aOffset + EAknsSrvDFOAnimationOutputLayerMode);
    TInt32 minInterval = AknsSrvUtils::GetInt32L(aFile, aOffset+EAknsSrvDFOAnimationMinInterval);

    if( inMode > 0x08 || outMode > 0x08 )
        {
        User::Leave(KErrCorrupt);
        }

    itemDef.iID.Set(major,minor);
    if( aExclQuery.IsExcluded( itemDef.iID ) )
        {
        return;
        }
    CheckAndModifyIID( itemDef.iID, aExclQuery );
    itemDef.iType = EAknsITAnimation;

    // Morphing interval is MIN(all intervals)
    TBool isMorphing(EFalse);
    isMorphing = (TBool)type;
    if (isMorphing)
        {
        if (iMorphingMinInterval < 0)
            {
            if (minInterval > 0)
                {
                iMorphingMinInterval = minInterval;
                }
            }
        else if (iMorphingMinInterval > minInterval)
            {
            iMorphingMinInterval = minInterval;
            }
        }
    else // The definition is for highlight animation
        {
        // If product variant has disabled highlight animation we simply skip
        // non-morphing animation definitions.
        if( !aExclQuery.IsHighlightAnimEnabled() )
            {
            return;
            }
        }

    //---------------------------------
    // Step 2: Process animation content

    // Because named reference is stored as parameter, effect commands and
    // animation commands can be processed with the same function. When parsing
    // animation data and creating animation definition ChunkLookup will
    // convert named reference parameters to named reference structures ->
    // named references as parameters are not visible to animation framework.
    CAknsSrvArrayStore* preprocessArray = new(ELeave) CAknsSrvArrayStore();
    CleanupStack::PushL( preprocessArray );
    CAknsSrvArrayStore* commandArray  = new(ELeave) CAknsSrvArrayStore();
    CleanupStack::PushL( commandArray );
    CAknsSrvArrayStore* valueArray = new(ELeave) CAknsSrvArrayStore();
    CleanupStack::PushL( valueArray );
    CAknsSrvArrayStore* timingArray = new(ELeave) CAknsSrvArrayStore();
    CleanupStack::PushL( timingArray );
    CAknsSrvArrayStore* sizeBoundArray = new(ELeave) CAknsSrvArrayStore();
    CleanupStack::PushL( sizeBoundArray );

    TUint16 preprocessCount = 0;
    TUint16 commandCount    = 0;
    TUint16 valueCount      = 0;
    TUint16 timingCount     = 0;
    TUint16 sizeBoundCount  = 0;

    // Process preprocess chunks
    preprocessCount = AknsSrvUtils::GetUInt16L( aFile, aOffset + EAknsSrvDFOAnimationPreprocessCount );
    if( preprocessCount > KAknsSrvMaxEffectCount )
        {
        User::Leave(KErrCorrupt);
        }

    TUint32 animBase = EAknsSrvDFOAnimationContentBegin; // Skip header data
    totalSize += DoMergeEffectCommandsL( aFile, aOffset, animBase, preprocessArray->iArray, preprocessCount );

    // Process animation command chunks
    commandCount = AknsSrvUtils::GetUInt16L( aFile, aOffset + animBase );
    if( commandCount > KAknsSrvMaxEffectCount )
        {
        User::Leave(KErrCorrupt);
        }
    animBase += sizeof(TUint16); // Skip commandCount
    totalSize += DoMergeEffectCommandsL( aFile, aOffset, animBase, commandArray->iArray, commandCount );

    // Animation values, timing models and size bound parameters are stored in
    // similar data structure -> process with the same function.

    // Process animation value chunks
    valueCount = AknsSrvUtils::GetUInt16L( aFile, aOffset + animBase );
    if( valueCount > KAknsSrvMaxParamGroupCount )
        {
        User::Leave(KErrCorrupt);
        }
    animBase += sizeof(TUint16); // Skip valueCount
    totalSize += DoMergeParamGroupsL( aFile, aOffset, animBase, valueArray->iArray, valueCount );

    // Process timing model chunks
    timingCount = AknsSrvUtils::GetUInt16L( aFile, aOffset + animBase );
    if( timingCount > KAknsSrvMaxParamGroupCount )
        {
        User::Leave(KErrCorrupt);
        }
    animBase += sizeof(TUint16); // Skip timingCount
    totalSize += DoMergeParamGroupsL( aFile, aOffset, animBase, timingArray->iArray, timingCount );

    // Process size bound parameter chunks
    sizeBoundCount = AknsSrvUtils::GetUInt16L( aFile, aOffset + animBase );
    if( sizeBoundCount > KAknsSrvMaxParamGroupCount )
        {
        User::Leave(KErrCorrupt);
        }
    animBase += sizeof(TUint16); // Skip sizeBoundCount
    totalSize += DoMergeParamGroupsL( aFile, aOffset, animBase, sizeBoundArray->iArray, sizeBoundCount );

    //---------------------------------
    // Step 3: All items collected, add them to the animation
    TUint8* block = new(ELeave) TUint8[sizeof(TAknsSrvEffectAnimDef)+totalSize];
    // No leaves after this

    TAknsSrvEffectAnimDef* eqDef = (TAknsSrvEffectAnimDef*)block;
    eqDef->iPreprocessCount  = preprocessCount;
    eqDef->iAnimCommandCount = commandCount;
    eqDef->iAnimValueCount   = valueCount;
    eqDef->iTimingModelCount = timingCount;
    eqDef->iSizeBoundCount   = sizeBoundCount;
    eqDef->iInputLayerIndex  = inIndex;
    eqDef->iInputLayerMode   = inMode;
    eqDef->iOutputLayerIndex = outIndex;
    eqDef->iOutputLayerMode  = outMode;
    eqDef->iMinInterval      = minInterval;
    eqDef->iAnimType         = isMorphing;

    TUint32 base = sizeof(TAknsSrvEffectAnimDef);

    // Add preprocess commands
    TInt i;
    for (i = 0; i < preprocessCount; i++)
        {
        TAknsSrvEffectDef* def = (TAknsSrvEffectDef*)(preprocessArray->iArray[i]);
        size = def->iEffectSize;
        Mem::Copy( block + base, def, size);
        base += size;
        }

    // Add animation commands
    for (i = 0; i < commandCount; i++)
        {
        TAknsSrvEffectDef* def = (TAknsSrvEffectDef*)(commandArray->iArray[i]);
        size = def->iEffectSize;
        Mem::Copy( block + base, def, size);
        base += size;
        }

    // Add animation values
    for (i = 0; i < valueCount; i++)
        {
        TAknsSrvParamGroupDef* def = (TAknsSrvParamGroupDef*)(valueArray->iArray[i]);
        size = def->iGroupSize;
        Mem::Copy( block + base, def, size);
        base += size;
        }

    // Add timing models
    for (i = 0; i < timingCount; i++)
        {
        TAknsSrvParamGroupDef* def = (TAknsSrvParamGroupDef*)(timingArray->iArray[i]);
        size = def->iGroupSize;
        Mem::Copy( block + base, def, size);
        base += size;
        }

    // Add size bound parameters
    for (i = 0; i < sizeBoundCount; i++)
        {
        TAknsSrvParamGroupDef* def = (TAknsSrvParamGroupDef*)(sizeBoundArray->iArray[i]);
        size = def->iGroupSize;
        Mem::Copy( block + base, def, size);
        base += size;
        }

    eqDef->iEffectAnimSize = sizeof(TAknsSrvEffectAnimDef)+totalSize;

    CleanupStack::PopAndDestroy( 5 ); // All arrays

    UpdateDef( &itemDef, eqDef, sizeof(TAknsSrvEffectAnimDef)+totalSize, -1 );
    delete [] block;
    // Leaves ok after this, block deleted
    }

// End of file.


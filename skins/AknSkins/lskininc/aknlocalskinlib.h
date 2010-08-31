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
* Description:  Header file for CAknLocalSkinInstance
*
*/


#ifndef C_CAKNLOCALSKININSTANCE_H
#define C_CAKNLOCALSKININSTANCE_H

#include <e32base.h>
#include <f32file.h>
#include <AknsItemID.h>
#include <AknsSrvClient.h>
#include <AknsItemDef.h>
#include <AknsPkgID.h>
#include <AknsItemID.h>


class CDRMHelper;

/**
 *  This class provides support for local skinning.
 *
 *  For example an application can change its skin locally without affecting
 *  the look of the rest of the system.
 *
 *
 *  @since S60 v5.0
 */
NONSHARABLE_CLASS(CAknLocalSkinInstance) : public CBase
{
public:
    /**
     * Two-phased constructor.
     */
    IMPORT_C static CAknLocalSkinInstance* NewL(const RFs& aFilesystem, const RAknsSrvSession& aSkinSrv);

    /**
     * Applies the given skin to a list of skin items.
     *
     * @param aFilename the name of the skin file.
     * @param aItemsToOverride list of skin items for which the skin to be applied.
     * @leave EAknsSrvProtected if the skin (aFilename) is DRM-protected and can't be applied
     *        locally.
     */
    IMPORT_C void ApplyL(const TDesC& aFilename, RArray<TAknsItemID>& aItemsToOverride);

    /**
     * Destructor.
     */
    IMPORT_C virtual ~CAknLocalSkinInstance();
protected:
    CAknLocalSkinInstance(const RFs& aFileSystem, const RAknsSrvSession& aSkinSrv);
private:
    TInt ProcessChunksL( TUint32 aOffset, TUint32 aChunkCount );
    TInt HandleFilenameChunkL(TUint32 offset);
    TInt HandleClassChunkL(TUint32 aOffset);
    TInt HandleGenericRelRestrictionChunkL(TUint32 aFileOffset);
    TInt Handle26RelRestrictionChunkL(TUint32 aFileOffset );

    void DoOverrideImageTableDefinitionL( TUint32 fileoffset);
    void DoOverrideBitmapDefinitionL(TUint32 aOffset);
    void DoOverrideColorTableDefinitionL( TUint32 aOffset );
    void DoOverrideEffectQueueL(TUint32 aOffset);
    TUint32 DoOverrideEffectCommandsL(const TUint aOffset, TUint32& aBase,
            CAknsEffectQueueItemDef* aEffectQueue, const TUint16 aEffectCount );

    TUint32 DoOverrideParamsL(const TUint aOffset, TUint32& aEqBase,
        CAknsEffectItemDef* aEffect, const TUint16 aParamCount );

    void ReadAttributeChunkL( const TUint aOffset, TInt& aAttributes, TInt& aAlignment,
        TInt& aCoordX, TInt& aCoordY, TInt& aSizeW, TInt& aSizeH );

    TBool OverrideElement(const TAknsItemID& aId);
    TBool IsScalableItem(const TAknsItemID& aId);
    TBool IsDrmProtectedL(RFile &aFile);
    TInt GetRightsDetailsL(RFile &aFile);
    void DoApplyL(const TDesC& aFilename);
    void ReadFromProtectedFileL(TDes8 &aDes, RFile &aFile);
    
   /**
    * Read arabic/hebrew mirroring state.
    */
    void RetrieveAHMirroringState();
    
    /**
    * Check skin item override state.
    * @param aItemDef skin item ID.
    * @return ETrue, if skin item already override.
    */
    TBool AlreadyOverrideElement(const TAknsItemID& aId);
    
    /**
    * Load skin item from skin file.
    * @param aFilename skin package file name.
    * @param aIsDefaultSkin skin package is default skin.
    */
    void ProcessSkinFileL( const TDesC& aFilename, TBool aIsDefaultSkin );
    
    /**
    * Override local skin item.
    * @param aItemDef skin item to be overridden.
    */
    void UpdateOverriddenItem(const CAknsItemDef* aItemDef);
    
    
    /**
    * Handles language restriction chunk..
    * @return chunk size.
    */
    TInt HandleLangRestrictionChunkL(TUint32 aFileOffset);
private:
    // File server session.
    RFs iFs;

    // Skin server session.
    RAknsSrvSession iSkinSrv;

    // File buffer for active theme.
    // Own.
    HBufC8* iSknBuffer;

    // File buffer for default theme.
    // This is kept open always when this class is available. Previewed theme defaults to default theme.
    // Own.
    HBufC8* iDefaultSknBuffer;

    // Data pointer to skin content.
    // Own.
    TUint8* iDataPtr;

    // Filename in previewed theme.
    // Own.
    HBufC* iBitmapFilename;
    // Path to previewed theme.
    // Own.
    HBufC* iBitmapPath;

    // Array of skin items overridden already.
    RPointerArray<CAknsItemDef> iOverriddenItems;

    // Array of skin items to override from previewed theme.
    // not owned
    RArray<TAknsItemID> iItemsToOVerride;

    TAknsPkgID iPkg;

    // ETrue, if previewed theme contains color definitions.
    TBool iNoColors;

    CDRMHelper* iDrmHelper;

    // Number of skin items to override initially.
    TInt iInitialCount;

    // Are there color definitions in previewed theme.
    TBool iColorsFound;
    
    /*
    * Arabic/Hebrew Mirroring State.
    */
    TBool iAHMirroringActive;

    /*
    * Platform Major Number
    */
    TUint iPlatformMajor;
    
    /*
    * Platform Minor Number
    */
    TUint iPlatformMinor;
};

#endif // C_CAKNLOCALSKININSTANCE_H

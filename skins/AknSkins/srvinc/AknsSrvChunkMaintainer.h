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
* Description:  Chunk maintainer.
*
*/


#ifndef AKNSSRVCHUNKMAINTAINER_H
#define AKNSSRVCHUNKMAINTAINER_H

// INCLUDES

#include <e32std.h>
#include <e32base.h>

#include <AknsSrvClient.h>
#include "AknsSrvItemDef.h"
#include "AknsSrvExclusion.h"

// CONSTANTS

// The shared memory chunk name
_LIT(KAKNSSRVSHAREDMEMORYCHUNKNAME, "AknsSrvSharedMemoryChunk");
// The shared memory chunk protection semaphore
_LIT(KAKNSSRVWAITSEMAPHORENAME, "AknsSrvWaitSemaphore");
// Rendering mutex
_LIT(KAKNSSRVRENDERMUTEXNAME, "AknsSrvRenderSemaphore");

static const TInt KAknsSrvMaxFileNameLen = 512;

// DATA TYPES

/**
* Header area offsets.
* Valid only for enhanced skins implementation.
*/
enum TAknsSrvHeaderAreaOffsets
    {
    EAknsSrvItemDefAreaBaseOffset               = 0,
    EAknsSrvItemDefAreaAllocatedSizeOffset      = 1,
    EAknsSrvItemDefAreaCurrentSizeOffset        = 2,
    EAknsSrvDataAreaBaseOffset                  = 3,
    EAknsSrvDataAreaAllocatedSizeOffset         = 4,
    EAknsSrvDataAreaCurrentSizeOffset           = 5,
    EAknsSrvFilenameAreaBaseOffset              = 6,
    EAknsSrvFilenameAreaAllocatedSizeOffset     = 7,
    EAknsSrvFilenameAreaCurrentSizeOffset       = 8,
    EAknsSrvScalableGfxAreaBaseOffset           = 9,
    EAknsSrvScalableGfxAreaAllocatedSizeOffset  = 10,
    EAknsSrvScalableGfxAreaCurrentSizeOffset    = 11,
    EAknsSrvItemDefHashBaseOffset               = 12,
    EAknsSrvItemDefHashAllocatedSizeOffset      = 13,
    EAknsSrvItemDefHashCurrentSizeOffset        = 14
    };

/**
* Base area names.
* Valid only for enhanced skins implementation.
*/
enum TAknsSrvBaseAreaName
    {
    EAknsSrvItemDefArea     = 0,
    EAknsSrvDataArea        = 1,
    EAknsSrvFilenameArea    = 2,
    EAknsSrvScalableGfxArea = 4,
    EAknsSrvItemDefHash     = 5
    };

/**
* Post operation types.
* Valid only for enhanced skins implementation.
*
* @internal
*/
enum TAknsSrvCMPostOpType
    {
    EAknsSrvCMPOTTileX          = 0,
    EAknsSrvCMPOTTileY          = 1,
    EAknsSrvCMPOTTileToStretch  = 2
    };

/**
* Hash Table data structure.
*/
struct TAknsSrvHashTable
    {
    TInt iHead;
    };


/**
* Post operation data structure.
* Valid only for enhanced skins implementation.
*/
struct TAknsSrvCMPostOp
    {
    public: // Data
        TAknsSrvCMPostOpType iType;
        TAknsItemID iIID;

    public:
        static TInt LinearOrder(
            const TAknsSrvCMPostOp& aFirst,
            const TAknsSrvCMPostOp& aSecond );
    };

class MAknsSrvMorphingListener
{
    public:
        virtual void MorhphingEventTimeout() = 0;
};

class CAknsSrvMorphingTimer : public CActive
    {
    public:
        static CAknsSrvMorphingTimer* NewL(MAknsSrvMorphingListener* aListener, TInt aInterval);
        void RunL();
        void DoCancel();
        void IssueRequest();
        ~CAknsSrvMorphingTimer();

    protected:
        void ConstructL();
        CAknsSrvMorphingTimer(MAknsSrvMorphingListener* aListener, TInt aInterval);
    private:
        MAknsSrvMorphingListener* iListener;
        TInt iInterval;
        RTimer iTimer;
    };

// FORWARD DECLARATIONS

class CAknsSrvFileBuffer;
class CAknsSrvBitmapStore;

// CLASS DECLARATIONS

/**
* Internal class for maintaining the shared memory chunk in the skin server.
*
* @since 2.0
*/
NONSHARABLE_CLASS(CAknsSrvChunkMaintainer) : public CBase
    {

    public: // Construction and destruction
        /**
        * Default C++ constructor
        */
        CAknsSrvChunkMaintainer(CAknsSrvBitmapStore* aBitmapStore);

        /**
        * Destructor.
        */
        ~CAknsSrvChunkMaintainer();

    public: // New methods

        /**
        * Reads normal skin (non ROM) definitions to the shared memory chunk.
        *
        * @since 2.0
        *
        * @param aUid Uid of the skin file to read
        *
        * @param aClass Which class should be merged.
        *
        * @param aClearChunk A boolean value to specify
        *        if to discard existing content in the shared
        *        chunk
        *
        * @param aExclQuery Exclusion query object.
        */
        void MergeSkinDefinitionsL( const TPtrC& aFilename,
            const TAknsItemDefClass aClass, const TBool aClearChunk,
            const TAknsSrvExclusionQuery& aExclQuery,
            const TBool aAhOverride,
            const TAknsPkgID& aPID );

        /**
        * Set the idle state wallpaper.
        *
        * @since 2.0
        *
        * @param aIID the item id of the idle wallpaper.
        * @param aFilename the filename of the wallpaper mbm-file(incl. path)
        * @param aIndex of the bitmap in the mbm file
        */
        void SetWallpaper( const TAknsItemID& aIID,
            const TDesC& aFilename, TInt aIndex );

        /**
        * Blocks read acces to the shared memory chunk
        * maintained by this class.
        *
        * @since 2.0
        */
        void BeginWrite();

        /**
        * Allows write acces to the shared memory chunk
        * maintained by this class.
        *
        * @since 2.0
        */
        void EndWrite();

        /**
        *
        */
        void ResetLevel();

        /**
        *
        */
        void NextLevel();

        /**
        * Checks whether the given IID should be altered (i.e. is it in
        * the skin package internal number space or in exclusion list),
        * and modifies it accordingly.
        *
        * @since 2.0
        *
        * @param aIID Item ID to be checked and modified, if necessary.
        *
        * @param aExclQuery Exclusion query object.
        */
        void CheckAndModifyIID( TAknsItemID& aIID,
            const TAknsSrvExclusionQuery& aExclQuery );

    private: // New methods

        /**
        * The actual merge function for normal (non ROM) skins.
        *
        * @since 2.0
        *
        * @param aFilename the skin file name
        * @param aClearChunk A boolean value to specify
        *        if to discard existing content in the shared
        *        chunk
        * @param aExclQuery Exclusion query object.
        * @param aAhOverride specifies if the data to be merged is
        *   A&H override.
        *
        * @par Exceptions:
        *    If merge operation fails, leaves with an error code.
        */
        void MergeSkinDefinitionsUnprotectedL( const TDesC& aFilename,
            const TBool aClearChunk, const TAknsSrvExclusionQuery& aExclQuery,
            const TBool aAhOverride,
            const TAknsPkgID& aPID );

        /**
        * The merge function for (non ROM) skins.
        * Calls @c MergeSkinDefinitionsUnprotectedL to do the actual merge
        * to avoid fatal errors.
        *
        * @since 2.0
        *
        * @param aFile File buffer of the skin file to read from.
        * @param aOffset The file offset to read from .
        * @param aClass Which class should be merged.
        * @param aExclQuery Exclusion query object.
        * @param aAhOverride Specified if the skin file to be merged is an
        *   A&H variant.
        *
        * @par Exceptions:
        *    If merge fails, leaves with an error code.
        */
        void DoMergeSkinDefinitionsL( CAknsSrvFileBuffer& file,
            const TUint aOffset, const TAknsItemDefClass aClass,
            const TAknsSrvExclusionQuery& aExclQuery,
            const TBool aAhOverride );

    private: // New methods - Type-specific merging

        /**
        * Merge a single bitmap definition.
        */
        void DoMergeBitmapDefinitionL( CAknsSrvFileBuffer& aFile,
            const TUint aOffset, const TAknsItemDefClass aClass,
            const TAknsSrvExclusionQuery& aExclQuery,
            const TBool aAhOverride );

        /**
        * Merge a single color table definition.
        */
        void DoMergeColorTableDefinitionL( CAknsSrvFileBuffer& aFile,
            const TUint aOffset, const TAknsItemDefClass aClass,
            const TAknsSrvExclusionQuery& aExclQuery,
            const TBool aAhOverride );

        /**
        * Merge a single image table definition.
        */
        void DoMergeImageTableDefinitionL( CAknsSrvFileBuffer& aFile,
            const TUint aOffset, const TAknsItemDefClass aClass,
            const TAknsSrvExclusionQuery& aExclQuery,
            const TBool aAhOverride );

        /**
        * Merge a single bitmap animation definition.
        */
        void DoMergeBmpAnimDefinitionL( CAknsSrvFileBuffer& aFile,
            const TUint aOffset, const TAknsItemDefClass aClass,
            const TAknsSrvExclusionQuery& aExclQuery,
            const TBool aAhOverride );

        /**
        * Merge a single string definition.
        */
        void DoMergeStringDefinitionL( CAknsSrvFileBuffer& aFile,
            const TUint aOffset, const TAknsItemDefClass aClass,
            const TAknsSrvExclusionQuery& aExclQuery,
            const TBool aAhOverride );

    private: // New methods - Chunk content utilities

        /**
        * Retrieves the index of an item definition in the table.
        *
        * @since 2.0
        *
        * @param aIID Item ID to be searched for.
        *
        * @return The index of the item definition, or -1 if not found.
        */
        TInt FindDefIndex( const TAknsItemID& aIID );

        /**
        * Replaces or appends an item definition into the table located
        *   in the shared chunk. Also updates the data area.
        *
        * @since 2.0
        *
        * @param aDef Pointer to the item definition to be updated.
        *   No ownership is claimed.
        *
        * @param aData Definition data.
        *
        * @param aDataSize The size of the definition data.
        */
        void UpdateDef( const TAknsSrvDef* aDef, const TAny* aData,
            const TInt aDataSize, const TInt aOldDataSize );

        /**
        * Replaces or appends data to the data area of the shared chunk.
        *
        * @since 2.0
        *
        * @param aData Pointer to the new content. No ownership is claimed.
        *   If @c NULL is given, only space is allocated.
        *
        * @param aDataSize Size of the new content.
        *
        * @param aOldData Pointer to the old content, or @c NULL.
        *
        * @param aOldDataSize Size of the old content.
        *
        * @return Offset of the new data location in the shared chunk.
        */
        TInt UpdateData( const TAny* aData, const TInt aDataSize,
            TAny* aOldData = 0, const TInt aOldDataSize = 0 );

        void UpdateDefHash ( TAknsSrvDef* aDef );
        
        /**
        * Initializes the shared chunk header and clears the allocated memory
        *
        * @since 2.8
        *
        */
        void InitializeChunk();

        /**
        * Aligns the given value by 4
        *
        * @since 2.8
        *
        * @param aValue the value to align
        *
        * @return the aligned value
        */
        TInt AlignToFour(const TInt aValue);

    public: // New methods - Scalable version

        /**
        *
        * @since 2.8
        */
        void StoreScalableGraphicsL( const TAknsItemID& aIID,
            const TInt aType, const TSize& aLayoutSize,
            TInt aBmpHandle, TInt aMskHandle, TBool aIsMorphing = EFalse);

        /**
        *
        * @since 2.8
        */
        void ClearScalableGraphics(TAknsSrcScreenMode aMode);

        /**
        *
        * @since 3.0
        */
        void ClearMorphedGraphics();
        void RemoveSingleScalableItem(const TAknsItemID& aIID );
        /**
        *
        * @since 3.0
        */
        void CreateMorphingTimerL(MAknsSrvMorphingListener* aListener);
        void UpdateMorphingTime();
    private: // New methods - Scalable version

        /**
        *
        * @since 2.8
        */
        void DoMergeEffectQueueL( CAknsSrvFileBuffer& aFile,
            const TUint aOffset, const TAknsItemDefClass aClass,
            const TAknsSrvExclusionQuery& aExclQuery,
            const TBool aAhOverride);

        /**
        * @return The total size of parameters, in bytes.
        *
        * @since 3.0
        */
        TUint32 DoMergeParamsL( CAknsSrvFileBuffer& aFile,
                                const TUint aOffset,
                                TUint32& aEqBase,
                                RPointerArray<TUint8>& aParamArray,
                                const TUint16 aParamCount );
        /**
        * @return The total size of param groups, in bytes.
        *
        * @since 3.0
        */
        TUint32 DoMergeParamGroupsL( CAknsSrvFileBuffer& aFile,
                                     const TUint aOffset,
                                     TUint32& aBase,
                                     RPointerArray<TUint8>& aGroupArray,
                                     const TUint16 aGroupCount );
        /**
        * @return The total size of effect commands, in bytes.
        *
        * @since 3.0
        */
        TUint32 DoMergeEffectCommandsL( CAknsSrvFileBuffer& aFile,
                                        const TUint aOffset,
                                        TUint32& aEqBase,
                                        RPointerArray<TUint8>& aEffectArray,
                                        const TUint16 aEffectCount );
        /**
        * @since 3.0
        */
        void DoMergeAnimationL( CAknsSrvFileBuffer& aFile,
                                const TUint aOffset,
                                const TAknsItemDefClass aClass,
                                const TAknsSrvExclusionQuery& aExclQuery,
                                const TBool aAhOverride );

        /**
        *
        * @since 2.8
        */
        void UpdateFilename(TInt32 aFilenameID, TUint8* aFilenamePtr,
            TUint16 aFilenameLen,  const TDesC& aBaseFilename );

        /**
        *
        * @since 2.8
        */
        TInt8* GetAreaBasePtr( TAknsSrvBaseAreaName aAreaname);

        /**
        *
        * @since 2.8
        */
        TInt GetAreaAllocatedSize( TAknsSrvBaseAreaName aAreaname );

        /**
        *
        * @since 2.8
        */
        TInt GetAreaCurrentSize( TAknsSrvBaseAreaName aAreaname );

        /**
        *
        * @since 2.8
        */
        void AdjustAreaAllocatedSize(
            TAknsSrvBaseAreaName aAreaname, TInt aNewSize );

        /**
        *
        * @since 2.8
        */
        void SetAreaCurrentSize(
            TAknsSrvBaseAreaName aAreaname, TInt aNewSize );

        /**
        *
        * @since 2.8
        */
        TInt GetFilenameOffsetByID( TInt32 aID );

        /**
        *
        * @since 2.8
        */
        TInt ProcessChunksL(CAknsSrvFileBuffer& aFile, TUint32 aFileOffset,
            TUint32 aChunkCount, const TDesC& aFilename,
            const TAknsSrvExclusionQuery& aExclQuery, const TBool aMirrored);

        /**
        *
        * @since 2.8
        */
        TInt HandleFilenameChunkL(CAknsSrvFileBuffer& aFile,
            TUint32 aFileOffset, const TDesC& aFilename);

        /**
        *
        * @since 2.8
        */
        TInt HandleClassChunkL(CAknsSrvFileBuffer& aFile, TUint32 aFileOffset,
            const TAknsSrvExclusionQuery& aExclQuery);

        /**
        *
        * @since 2.8
        */
        TInt HandleLangOverrideChunkL(CAknsSrvFileBuffer& aFile,
            TUint32 aFileOffset);

        /**
        *
        * @since 2.8
        */
        TInt HandleWallpaperChunkL(CAknsSrvFileBuffer& aFile,
            TUint32 aFileOffset);

        /**
        * Handles 2.6 release restriction chunk.
        *
        * @since 2.8
        */
        TInt Handle26RelRestrictionChunkL(CAknsSrvFileBuffer& aFile,
            TUint32 aFileOffset, const TDesC& aFilename,
            const TAknsSrvExclusionQuery& aExclQuery, const TBool aMirrored);

        /**
        * Handles generic release restriction chunk.
        *
        * @since 2.8
        */
        TInt HandleGenericRelRestrictionChunkL(CAknsSrvFileBuffer& aFile,
            TUint32 aFileOffset, const TDesC& aFilename,
            const TAknsSrvExclusionQuery& aExclQuery, const TBool aMirrored);

        /**
        *
        * @since 2.8
        */
        TInt HandleLangRestrictionChunkL(CAknsSrvFileBuffer& aFile,
            TUint32 aFileOffset, const TDesC& aFilename,
            const TAknsSrvExclusionQuery& aExclQuery, const TBool aMirrored);

        /**
        *
        * @since 3.1
        */
        TInt HandleInformationChunkL(CAknsSrvFileBuffer& aFile,
            TUint32 aFileOffset, const TDesC& aFilename);


        /**
        *
        * @since 2.8
        */
        void EnqueuePostOperationL( const TAknsSrvCMPostOpType aType,
            const TAknsItemID aIID );

        /**
        * Executes post operations.
        *
        * @since 2.8
        */
        void ExecutePostOperations();

        /**
        * Utility function for post operation execution.
        * Changes tiling attribute from generic to X/Y specific.
        *
        * @since 2.8
        */
        void PostOpTile( TAknsSrvCMPostOp& op, TAknsSrvDef* itemDef );

        /**
        * Reads an attribute chunk.
        *
        * @since 2.8
        */
        void ReadAttributeChunkL( CAknsSrvFileBuffer& aFile,
            const TUint aOffset, TInt& aAttributes, TInt& aAlignment,
            TInt& aCoordX, TInt& aCoordY, TInt& aSizeW, TInt& aSizeH );

    private: // Data

        RChunk iSharedChunk;
        RSemaphore iWaitSema;
        TInt iInternalSemaCount;
        TInt iMergingLevel;

    private: // Data - Scalable version
        RMutex iRenderMutex;
        TInt iCurrentFilenameID;
        TInt iFilenameCount;
        TInt iMorphingMinInterval;
        CAknsSrvMorphingTimer* iMorphingTimer;
        CAknsSrvBitmapStore* iBitmapStore;
        RArray<TAknsSrvCMPostOp> iPostOpArray;
        HBufC16* iBitmapPath;
        TUint iPlatformMajor;
        TUint iPlatformMinor;
        TBool iMergeS60Skin;
    };

#endif // AKNSSRVCHUNKMAINTAINER_H

// End of file.

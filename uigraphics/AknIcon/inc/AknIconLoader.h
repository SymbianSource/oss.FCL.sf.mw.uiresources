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
* Description:  Icon loading from MIF files.
*
*
*/



#ifndef AKN_ICON_LOADER_H
#define AKN_ICON_LOADER_H

// INCLUDES
#include <e32std.h>
#include <f32file.h>
#include <fbs.h>
#include <mifheader.cdl.h>

// CONSTANTS

static const TInt32 KUidAvkonMultiIconFile( 0x034232342 );
static const TInt32 KUidAvkonMultiIcon( 0x034232343 );
static const TInt32 KMifFirstSupportedVersion( 1 );
static const TInt32 KMifLastSupportedVersion( 3 );
static const TInt32 KMifIconFirstSupportedVersion( 1 );
static const TInt32 KMifIconLastSupportedVersion( 1 );

struct TMifFileHeaderV1
    {
    TInt32 iUid;
    TInt32 iVersion; // this determines how many fields of header are valid
    TInt32 iArrayOffset;
    TInt32 iArrayLength; // array length in items of TMifBitmapOffsetElement
    };
    
struct TMifFileHeaderV3
    {
    TInt32 iIndexDllUid;
    };
    
struct TMifFileHeader
    {
    TMifFileHeaderV1 iV1;
    // since version 3
    TMifFileHeaderV3 iV3;
    // since version 4
    // This is extensible by upgrading iVersion!
    };

struct TMifIconHeader
    {
    TInt32 iUid;
    TInt32 iVersion;
    // since version 1
    TInt32 iDataOffset; // offset to icon data (from beginning of icon)
    TInt32 iDataLength; // length of icon data in bytes
    TInt32 iType; // type, e.g. svg
    TInt32 iDepth; // depth of bitmap the content will be rendered to
    TInt32 iAnimated; // whether icon is animated
    TInt32 iMaskDepth; // depth of mask
    // since version 2
    // this is extensible by upgrading iVersion
    };

// FORWARD DECLARATIONS

struct TMifBitmapOffsetElement;
class CAknIconLocationInfo;

// FUNCTION PROTOTYPES

GLREF_C void CleanupFreeIcon( TAny* aObj );

// CLASS DECLARATION

/**
* CAknIconLoader.
*/
NONSHARABLE_CLASS(CAknIconLoader) : public CBase
    {
    public: // Constructors and destructor

        static CAknIconLoader* NewL( RFs& aFs, const TDesC& aFileName );
        static CAknIconLoader* NewL( RFile& aFile ); // Opened file handle.
        ~CAknIconLoader();

    public: // New methods

        void OpenFileL( RFs& aFs, const TDesC& aFileName );
        void OpenFileL( RFile& aFile ); // Opened file handle.
        void CloseFile();

        TPtrC8 IconL( TInt aId );
        TInt32 IconTypeL( TInt aId );
        TInt32 IconDepthL( TInt aId );
        TInt32 MaskDepthL( TInt aId );
        TInt32 IconAnimatedL( TInt aId );
        void FreeIcon();
        
        /**
        * Retrieves the icon location table from the MIF file assigned to this icon loader.
        * The table is linked with the given icon file name, which of course should match
        * the file used by this icon loader.
        *
        * @param aFileName MIF file name, full path.
        */
        CAknIconLocationInfo* LoadIconLocationInfoL( const TDesC& aFileName );
        
#ifdef _NGATESTING        
        TInt32 GetDerivedIconTypeL(TInt32 aType);
        void SetIconTypeConfig(TInt32 aConfigIconType, const TDesC & aNGATestDirectory);
#endif
        
    private: // New methods

        void LoadFileHeaderStructL();
        void CheckFileL();
        const TMifBitmapOffsetElement* BitmapOffsetsL();
        const TMifBitmapOffsetElement* BitmapOffsetsArrayL();
        TPtrC8 IconWithHeaderL( TInt aId );
        void CheckIconL( TInt aId );
        TMifIconHeader* IconHeaderL( TInt aId );
        void LoadSharedOffsetsL();
        void LoadOffsetsFromMifL();

    private: // Private constructors

        CAknIconLoader();
        void ConstructL( RFs& aFs, const TDesC& aFileName );
        void ConstructL( RFile& aFile );

    private: // Data

        RFile iFile;
        TMifFileHeader iHeader;
        HBufC8* iOffsets;
        MifHeader::CInstance* iSharedOffsets;
        TInt iIconId;
        HBufC8* iIcon;
        CCdlEngineRef* iCdlEngine;
        
#ifdef _NGATESTING        
        TInt32      iConfigIconType;
        TFileName   iNGADirectory;
#endif
    };

#endif      // AKN_ICON_LOADER_H
            
// End of File

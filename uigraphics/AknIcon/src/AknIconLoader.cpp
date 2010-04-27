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
*/



// INCLUDE FILES
#include <gdi.h>
#include "AknIconLoader.h"
#include "AknIconLocationInfo.h"
#include <mifconvdefs.h>

// CONSTANTS

// ============================ GLOBAL FUNCTIONS ===============================

GLDEF_C void CleanupFreeIcon( TAny* aObj )
    {
    static_cast<CAknIconLoader*>( aObj )->FreeIcon();
    }

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknIconLoader::CAknIconLoader
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknIconLoader::CAknIconLoader() : iIconId( -1 )
    {
#ifdef _NGATESTING
    iConfigIconType = -1;
#endif
    }

CAknIconLoader* CAknIconLoader::NewL( RFs& aFs, const TDesC& aFileName )
    {
    CAknIconLoader* self = new( ELeave ) CAknIconLoader;
    CleanupStack::PushL( self );
    self->ConstructL( aFs, aFileName );
    CleanupStack::Pop();
    return self;
    }

// Opened file handle as parameter.
CAknIconLoader* CAknIconLoader::NewL( RFile& aFile )
    {
    CAknIconLoader* self = new( ELeave ) CAknIconLoader;
    CleanupStack::PushL( self );
    self->ConstructL( aFile );
    CleanupStack::Pop();
    return self;    
    }

void CAknIconLoader::ConstructL( RFs& aFs, const TDesC& aFileName )
    {
    OpenFileL( aFs, aFileName );
    }

void CAknIconLoader::ConstructL( RFile& aFile )
    {
    OpenFileL( aFile );
    }

// Destructor
CAknIconLoader::~CAknIconLoader()
    {
    iFile.Close();
    delete iOffsets;
    delete iSharedOffsets;
    delete iIcon;
    delete iCdlEngine;
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::OpenFileL
// -----------------------------------------------------------------------------
//  
void CAknIconLoader::OpenFileL( RFs& aFs, const TDesC& aFileName )
    {
    iFile.Close();
    User::LeaveIfError( iFile.Open( aFs, aFileName, EFileRead|EFileShareReadersOnly ) );
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::OpenFileL
// -----------------------------------------------------------------------------
//
void CAknIconLoader::OpenFileL( RFile& aFile )
    {
    iFile.Close();
    User::LeaveIfError( iFile.Duplicate( aFile ) );
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::CloseFile
// -----------------------------------------------------------------------------
//
void CAknIconLoader::CloseFile()
    {
    iFile.Close();
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::FileHeaderStructL
// -----------------------------------------------------------------------------
//  
void CAknIconLoader::LoadFileHeaderStructL()
    {
    if ( !iHeader.iV1.iUid )
        {
        TPckg<TMifFileHeaderV1> v1(iHeader.iV1);
        User::LeaveIfError( iFile.Read( 0, v1, sizeof( TMifFileHeaderV1 ) ) );
        
        if (iHeader.iV1.iVersion >= 3)
            {
            TPckg<TMifFileHeaderV3> v3(iHeader.iV3);
            User::LeaveIfError( iFile.Read( v3, sizeof( TMifFileHeaderV3 ) ) );        
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::CheckFileL
// -----------------------------------------------------------------------------
//  
void CAknIconLoader::CheckFileL()
    {
    LoadFileHeaderStructL();

    if ( iHeader.iV1.iUid != KUidAvkonMultiIconFile ||
         iHeader.iV1.iVersion < KMifFirstSupportedVersion || 
         iHeader.iV1.iVersion > KMifLastSupportedVersion )
        {
        #ifdef _DEBUG
        RDebug::Print(_L("AknIconLoader: Icon file corrupt; file format error!"));
        #endif

        User::Leave( KErrCorrupt );
        }
    }


// -----------------------------------------------------------------------------
// CAknIconLoader::LoadSharedOffsetsL
// -----------------------------------------------------------------------------
//  
void CAknIconLoader::LoadSharedOffsetsL()
    {
    if (!CdlEngine::IsCdlEngineCreated())
        iCdlEngine = CdlEngine::CreateCdlEngineL();

    TBuf<12> dllName;
    _LIT(KDllNameFormat,"%08x.DLL");
    dllName.Format(KDllNameFormat, iHeader.iV3.iIndexDllUid);
    iSharedOffsets = MifHeader::CInstance::NewL(dllName, 0);    // MifHeader DLLs only ever have one instance, and that has id 0
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::LoadOffsetsFromMifL
// -----------------------------------------------------------------------------
//  
void CAknIconLoader::LoadOffsetsFromMifL()
    {
    TInt pos = iHeader.iV1.iArrayOffset;
    TInt length = iHeader.iV1.iArrayLength;
    HBufC8* offsets = HBufC8::NewL( sizeof( TMifBitmapOffsetElement ) * length );
    CleanupStack::PushL( offsets );
    TPtr8 ptr = offsets->Des();
    
    User::LeaveIfError( iFile.Read( 
        pos, ptr, sizeof( TMifBitmapOffsetElement ) * length ) );

    if ( TUint( ptr.Length() ) != sizeof( TMifBitmapOffsetElement ) * length )
        {
        #ifdef _DEBUG
        RDebug::Print(_L("AknIconLoader: Icon file corrupt; EOF at offsets!"));
        #endif

        User::Leave( KErrCorrupt );
        }

    CleanupStack::Pop(); // offsets
    iOffsets = offsets;
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::BitmapOffsetsL
// -----------------------------------------------------------------------------
//  
const TMifBitmapOffsetElement* CAknIconLoader::BitmapOffsetsL()
    {
    if ( !iOffsets && !iSharedOffsets )
        {
        CheckFileL();

        LoadFileHeaderStructL();
        if (iHeader.iV1.iVersion == 3)
            LoadSharedOffsetsL();
        else
            LoadOffsetsFromMifL();
        }

    if (iOffsets)
        return (TMifBitmapOffsetElement*)iOffsets->Ptr();
    else
        return &iSharedOffsets->indicies()[0];
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::BitmapOffsetsArrayL
// -----------------------------------------------------------------------------
//  
const TMifBitmapOffsetElement* CAknIconLoader::BitmapOffsetsArrayL()
    {
    return BitmapOffsetsL();
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::IconWithHeaderL
// -----------------------------------------------------------------------------
//  
TPtrC8 CAknIconLoader::IconWithHeaderL( TInt aId )
    {
    if ( iIconId == aId )
        {
        return iIcon->Des();
        }

    LoadFileHeaderStructL();

    TInt usedId = iHeader.iV1.iVersion == 1 ? aId / 2 : aId;

    if ( usedId < 0 || usedId >= iHeader.iV1.iArrayLength )
        {
        #ifdef _DEBUG
        RDebug::Print(_L("AknIconLoader: Icon ID not found!"));
        #endif

        // Consistent error code with MBM loading.
        User::Leave( KErrEof );
        }

    const TMifBitmapOffsetElement* ptr = BitmapOffsetsArrayL();
    TUint32 offset = ptr[usedId].iOffset;
    if (((TInt32)offset) < 0)
        {
        #ifdef _DEBUG
        RDebug::Print(_L("AknIconLoader: Icon file corrupt; Negative offset!"));
        #endif
        User::Leave( KErrCorrupt );
        }
    
    TUint32 length = ptr[usedId].iLength;

    delete iIcon;
    iIcon = NULL;
    iIcon = HBufC8::NewL( length );

    TPtr8 ptr2 = iIcon->Des();
    User::LeaveIfError( iFile.Read( offset, ptr2, length ) );

    if ( TUint( ptr2.Length() ) != length )
        {
        #ifdef _DEBUG
        RDebug::Print(_L("AknIconLoader: Icon file corrupt; EOF at icon!"));
        #endif

        User::Leave( KErrCorrupt );
        }

    iIconId = aId;
    return iIcon->Des();
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::CheckIconL
// -----------------------------------------------------------------------------
//  
void CAknIconLoader::CheckIconL( TInt aId )
    {
    TMifIconHeader* header = (TMifIconHeader*)IconWithHeaderL( aId ).Ptr();

    if ( header->iUid != KUidAvkonMultiIcon ||
         header->iVersion < KMifIconFirstSupportedVersion ||
         header->iVersion > KMifIconLastSupportedVersion )
        {
        #ifdef _DEBUG
        RDebug::Print(_L("AknIconLoader: Icon file corrupt; icon format error!"));
        #endif
        
        User::Leave( KErrCorrupt );
        }
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::IconHeaderL
// -----------------------------------------------------------------------------
//  
TMifIconHeader* CAknIconLoader::IconHeaderL( TInt aId )
    {
    CheckIconL( aId );

    TPtrC8 icon = IconWithHeaderL( aId );
    return (TMifIconHeader*)icon.Ptr();
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::IconL
// -----------------------------------------------------------------------------
//  
TPtrC8 CAknIconLoader::IconL( TInt aId )
    {
    CheckIconL( aId );

    TPtrC8 icon = IconWithHeaderL( aId );
    TMifIconHeader* header = IconHeaderL( aId );
    icon.Set( icon.Mid( header->iDataOffset, header->iDataLength ) ); 
    return icon;
    }
#ifdef _NGATESTING
void CAknIconLoader::SetIconTypeConfig(TInt32 aConfigIconType, const TDesC & aNGATestDirectory)
    {
    iConfigIconType = aConfigIconType;
    iNGADirectory.Copy(aNGATestDirectory);
    }

TInt32 CAknIconLoader::GetDerivedIconTypeL(TInt32 aType)
    {
    if (aType != EIconFormatBMP &&
        aType != EIconFormatNVG)
        {
                aType = EIconFormatNGA;
        }
    
    return aType;
    }
#endif

// -----------------------------------------------------------------------------
// CAknIconLoader::IconTypeL
// -----------------------------------------------------------------------------
//  
TInt32 CAknIconLoader::IconTypeL( TInt aId )
    {
    TMifIconHeader* header = IconHeaderL( aId );
    return header->iType;
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::IconDepthL
// -----------------------------------------------------------------------------
//  
TInt32 CAknIconLoader::IconDepthL( TInt aId )
    {
    TMifIconHeader* header = IconHeaderL( aId );
    return header->iDepth; 
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::MaskDepthL
// -----------------------------------------------------------------------------
//  
TInt32 CAknIconLoader::MaskDepthL( TInt aId )
    {
    TMifIconHeader* header = IconHeaderL( aId );
    return header->iMaskDepth; 
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::IconAnimatedL
// -----------------------------------------------------------------------------
//  
TInt32 CAknIconLoader::IconAnimatedL( TInt aId )
    {
    TMifIconHeader* header = IconHeaderL( aId );
    return header->iAnimated;
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::FreeIcon
// -----------------------------------------------------------------------------
//  
void CAknIconLoader::FreeIcon()
    {
    iIconId = -1;
    delete iIcon;
    iIcon = NULL;
    }

// -----------------------------------------------------------------------------
// CAknIconLoader::LoadIconLocationInfoL
// -----------------------------------------------------------------------------
//  
CAknIconLocationInfo* CAknIconLoader::LoadIconLocationInfoL(
    const TDesC& aFileName )
    {
    CheckFileL();
    
    // First check whether this is v1 or v2 MIF file.
    LoadFileHeaderStructL();

    if ( iHeader.iV1.iVersion == 1 )
        {
        // V1, no location info array as parameter.        
        return CAknIconLocationInfo::NewL( aFileName );
        }

    // V2+ MIF file, load the location info array.
    BitmapOffsetsL();
    if (iOffsets)
        return CAknIconLocationInfo::NewL( aFileName, *iOffsets );
    else
        return CAknIconLocationInfo::NewL( aFileName, *iSharedOffsets );
    }

//  End of File

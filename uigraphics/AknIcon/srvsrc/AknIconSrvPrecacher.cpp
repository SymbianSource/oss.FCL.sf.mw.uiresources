/*
* Copyright (c) 2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  CAknIconSrvPrecacher class.
*
*
*/

#ifdef PRECACHE2
#include <e32std.h>
#include <fbs.h>
#include <barsread.h>
#include <barsc.h>
#include "AknIconSrvPrecacher.h"
#include "AknIconSrv.h"
#include <akniconsrv.rsg>
#include "AknIconTraces.h"

#include "AknIconSrv.h"
#include "AknIconLoader.h"
#include "AknIconSrvCache.h"
#include "AknIconSrvDef.h"
#include "AknIconManager.h"
#include "AknIconSrvIconItem.h"
#include "AknIconSrvUtils.h"
#include "AknIconUtils.h"
#include "mifconvdefs.h"
#include "AknSvgFormatHandler.h"
#include "akniconconfig.h"
#include "AknIconFormatHandlerFactory.h"

_LIT( KAknIconResourceFile, "z:\\resource\\akniconsrv.rsc" );

// -----------------------------------------------------------------------------
// 2 Phase Construction
// -----------------------------------------------------------------------------
CAknIconSrvPrecacher::CAknIconSrvPrecacher( CAknIconServer& aServer ) :
    iServer(aServer)
    {
    }

// -----------------------------------------------------------------------------
// 2 Phase Construction
// -----------------------------------------------------------------------------
CAknIconSrvPrecacher* CAknIconSrvPrecacher::NewL( CAknIconServer& aServer )
    {
    CAknIconSrvPrecacher* self = new( ELeave ) CAknIconSrvPrecacher( aServer );
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop();
    return self;
    }

// -----------------------------------------------------------------------------
// 2 Phase Construction
// -----------------------------------------------------------------------------
void CAknIconSrvPrecacher::ConstructL()
    {
    User::LeaveIfError( iFs.Connect() );
    iSvgFormatHandler = CAknSvgFormatHandler::NewL();
    User::LeaveIfError( RFbsSession::Connect() );
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
CAknIconSrvPrecacher::~CAknIconSrvPrecacher()
    {
    delete iLoader;
    delete iSvgFormatHandler;
    RFbsSession::Disconnect();
    iFs.Close();
    }
    
// -----------------------------------------------------------------------------
// Start reading from precache list
// -----------------------------------------------------------------------------
void CAknIconSrvPrecacher::Start()
    {
    HBufC8* res = NULL ;
    TRAPD(err, res = SetupL());
    if (err == KErrNone)
        {
        TResourceReader reader;
        reader.SetBuffer( res );

        TRAPD(merror, ReadPrecacheItemsL( reader));

        if(merror != KErrNone)
            {
#ifdef __AKNICON_TRACES
            RDebug::Printf("Error Processing Precacher List");
#endif
            }

        iServer.iPrecacheComplete = ETrue;
        RThread thread;
        thread.Suspend();
        
        while (iServer.iFreePrecacheBitmapHandles.Count())
            {
            CFbsBitmap* bitmap = iServer.iFreePrecacheBitmapHandles[0];
            delete bitmap;
            iServer.iFreePrecacheBitmapHandles.Remove(0);
            }
        iServer.iFreePrecacheBitmapHandles.Close();
        }
        if(res)
            {
            delete res;
            }
    }
    
// -----------------------------------------------------------------------------
// read each item from the list
// -----------------------------------------------------------------------------
TInt CAknIconSrvPrecacher::ReadPrecacheItemsL(TResourceReader& aReader)
    {
    TInt count = aReader.ReadInt16();
    if (count > 0)
        {
        User::LeaveIfError( iSkinSession.Connect( ) );
        
        CAknsSrvChunkLookup* lookup = iSkinSession.CreateChunkLookupL();
        CleanupStack::PushL( lookup );
        
        
        iCurrentFileName.Zero();
        
        
        for ( TInt i = 0 ; i < count ; i++ )
            {
#ifdef __AKNICON_TRACES
            RDebug::Printf("precache loop,%d,%d",i,count);
#endif
            
            TRAPD(error,ProcessEntryL(lookup, aReader));

            if(error != KErrNone)
                {
#ifdef __AKNICON_TRACES
                RDebug::Printf("Error Processing Precacher List");
#endif
                }

            }
            
        CleanupStack::PopAndDestroy( 1 ); // lookup
        iSkinSession.Close();
    
        }
    return count;
    }

// -----------------------------------------------------------------------------
// read each entry into iNewprecached items
// -----------------------------------------------------------------------------
void CAknIconSrvPrecacher::ProcessEntryL(CAknsSrvChunkLookup* lookup, TResourceReader& aReader)
    {
    TAknIconParams info;
    info.iRotationAngle = 0;
    info.iColor = KColorNotDefined;
    
    TFileName file;
        
    TInt skinIdMajor = aReader.ReadInt32();
    TInt skinIdMinor = aReader.ReadInt32();
    
    HBufC* temp;
    temp = aReader.ReadHBufC16L();
    
        
    if (temp)
        {
        file.Copy(temp->Des());
        delete temp;
        }
    else
        {
        file.Zero();
        }
    
    info.iBitmapId = aReader.ReadInt32();
    info.iMaskId = aReader.ReadInt32();
    TInt width = aReader.ReadInt32();
    TInt height = aReader.ReadInt32();
    info.iSize = TSize(width,height);
    info.iMode = (TScaleMode)aReader.ReadInt32();
    info.iAppIcon = EFalse;
    // Convert icon ID to MIF ID
    if ( info.iBitmapId >= KMifIdFirst )
        {
        info.iBitmapId -= KMifIdFirst;
        }
    if ( info.iMaskId >= KMifIdFirst )
        {
        info.iMaskId -= KMifIdFirst;
        }
        
    if (skinIdMajor != -1 || skinIdMinor != -1)
        {
        TAknsItemID id = { skinIdMajor, skinIdMinor };
        CAknsItemDef* def = lookup->LookupAndCreateDefL( id );
        if ( def )
            {
            CleanupStack::PushL( def );

            TAknsItemType type = def->Type();

            switch ( type )
                {
                case EAknsITBitmap:
                    {
                    info.iBitmapId=(*static_cast<CAknsBitmapItemDef*>( def )).Index();
                    if ( info.iBitmapId >= KMifIdFirst )
                        {
                        info.iBitmapId -= KMifIdFirst;
                        }
                    info.iMaskId = -1;
                    file = (*static_cast<CAknsBitmapItemDef*>( def )).Filename();
                    break;
                    }
                case EAknsITMaskedBitmap:
                    {
                    info.iBitmapId=(*static_cast<CAknsBitmapItemDef*>( def )).Index();
                    if ( info.iBitmapId >= KMifIdFirst )
                        {
                        info.iBitmapId -= KMifIdFirst;
                        }
                    info.iMaskId = info.iBitmapId + 1;

                    file = (*static_cast<CAknsBitmapItemDef*>( def )).Filename();
                    break;
                    }
                default:
                    {
                    break;
                    }
                }
            CleanupStack::PopAndDestroy(); // def
            }
        }
    if (file.Length() == 0)
        {
        #ifdef __AKNICON_TRACES
        RDebug::Printf("Precacher resource: File name invalid");
        #endif
        
        return;
        }

    if ( iCurrentFileName != file || iLoader == NULL )
        {
        delete iLoader;
        iLoader = NULL;
        iLoader = CAknIconLoader::NewL( iFs, file );
#ifdef _NGATESTING
        iLoader->SetIconTypeConfig(iServer.iConfigIconType, iServer.iNGADirectory);
#endif
        
        iCurrentFileName = file;
        }
    if( iLoader == NULL )
        {
        #ifdef __AKNICON_TRACES
        RDebug::Printf("Precacher resource: Unable to create iLoader");
        #endif
        
        return;
        }
    TPtrC8 iconData ;
    iconData.Set(iLoader->IconL( info.iBitmapId ));
    
    TDisplayMode bitmapDepth;
    bitmapDepth = (TDisplayMode)iLoader->IconDepthL( info.iBitmapId );
    
  /*  TDisplayMode maskDepth;
    maskDepth =  */(TDisplayMode)iLoader->MaskDepthL( info.iBitmapId );
    
    iSvgFormatHandler->SupportedDisplayMode(bitmapDepth, iServer.iIconMode );
 

    TInt iconHandle;
    
    iSvgFormatHandler->PrepareIconL( iconData, iconHandle );
    

    iLoader->FreeIcon();
    
    iSvgFormatHandler->UsePreparedIconL( iconHandle );
    
    
 
    CFbsBitmap* bitmap = new( ELeave ) CFbsBitmap;
    CleanupStack::PushL( bitmap );
    
    CFbsBitmap* mask = NULL;
    if ( info.iMaskId >= 0 )
        {
        mask = new( ELeave ) CFbsBitmap;
        CleanupStack::PushL( mask );
        }
        
    TAknContentDimensions dimensions;
     
    dimensions = AknIconSrvUtils::RenderPreparedIconL(
        *iSvgFormatHandler,
        bitmap,
        mask,
        bitmapDepth,
        iServer.IconDepth(),
        info.iSize,
        (TScaleMode)info.iMode,
        0 //RotationAngle 
        );
    
    
    
    iSvgFormatHandler->UnprepareIcon( iconHandle );
    
    //
    if (file.Left( KAknIconDefaultDirLength ) == KAknIconDefaultDir )
        {
        info.iFileName = file.Mid( KAknIconDefaultDirLength );
        info.SetDefaultIconDirUsed();
        }
    else
        {
        info.iFileName = file;
        }
    //
    CAknIconSrvIconItem* item;
    
    item = CAknIconSrvIconItem::NewL( info, bitmap, mask, dimensions, *(iServer.iFileNameCache ));
    CleanupStack::PushL(item);//item
    
    item->iUserCount--;
    
   if ( mask )
        {
        item->iUserCount--;
        }
   item->iPrecacheItem = ETrue;
   iServer.iNewPrecachedItems.AppendL(item);
   CleanupStack::Pop(); // item
   
   if ( mask )
        {
        CleanupStack::Pop(); // mask
        }
   CleanupStack::Pop(); //bitmap             
        
   }
   
HBufC8* CAknIconSrvPrecacher::SetupL()
    {
    RResourceFile file;
    file.OpenL( iFs, KAknIconResourceFile ) ;
    CleanupClosePushL( file );
    HBufC8* res =file.AllocReadLC( R_PRECACHE_LIST2 );
    CleanupStack::Pop(1); // res
    CleanupStack::PopAndDestroy(1);//file
    
    return res;
    
    }
    #endif
// ------------------------------EndOfFile-------------------------------------------
    

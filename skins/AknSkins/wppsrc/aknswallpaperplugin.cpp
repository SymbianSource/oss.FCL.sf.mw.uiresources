/*
* Copyright (c) 2005-2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Project definition file for project aknswallpaperplugin
*
*/

#include <eikmenup.h>
#include <f32file.h>
#include <AknsWallpaperUtils.h>
#include <AiwMenu.h>
#include <AiwCommon.h>
#include <AiwCommon.hrh>
#include <barsread.h>
#include <eikenv.h>
#include <ecom/implementationproxy.h>
#include <StringLoader.h>
#include <aknnotewrappers.h>
#include <data_caging_path_literals.hrh>
#include <aknswallpaperplugin.rsg>
#include "aknswallpaperplugin.h"
#include "aknswallpaperplugin.rh"

_LIT(KResourceFileName, "AknsWallpaperPlugin.rsc");
_LIT(KDriveZ, "z:");

_LIT(KAknsWallpaperPluginMimeTypeImage, "IMAGE");
_LIT(KAknsWallpaperPluginMimeTypeOTABitmap, "IMAGE/X-OTA-BITMAP");
_LIT(KAknsWallpaperPluginSeparator, "/");

// ======== MEMBER FUNCTIONS ========

CAknsWallpaperPlugin* CAknsWallpaperPlugin::NewL()
    {
    CAknsWallpaperPlugin* self = new( ELeave ) CAknsWallpaperPlugin;
    CleanupStack::PushL( self );
    self->ConstructL();
    CleanupStack::Pop(self);
    return self;
    }

CAknsWallpaperPlugin::CAknsWallpaperPlugin():
    iConeResLoader(*CCoeEnv::Static())
    {
    }

// -----------------------------------------------------------------------------
// CAknsWallpaperPlugin::ConstructL
// Symbian 2nd phase constructor can leave.
// -----------------------------------------------------------------------------
//
void CAknsWallpaperPlugin::ConstructL()
    {
    TParse parse;
    parse.Set(KResourceFileName, &KDC_RESOURCE_FILES_DIR, &KDriveZ);
    TFileName resourceFileName;
    resourceFileName.Append(parse.FullName());
    iConeResLoader.OpenL(resourceFileName);
    }

CAknsWallpaperPlugin::~CAknsWallpaperPlugin()
    {
    iConeResLoader.Close();
    }

// ---------------------------------------------------------------------------
// From class CAiwServiceIfMenu.
// ---------------------------------------------------------------------------
//
void CAknsWallpaperPlugin::InitialiseL(MAiwNotifyCallback& /*aFrameworkCallback*/,
    const RCriteriaArray& /*aInterest*/)
    {
    // Not needed.
    }

// ---------------------------------------------------------------------------
// From class CAiwServiceIfMenu.
//
// Implements setting the main wallpaper for the device using
// AknsWallpaperUtils.
// ---------------------------------------------------------------------------
//
void CAknsWallpaperPlugin::HandleServiceCmdL(const TInt& aCmdId,
    const CAiwGenericParamList& aInParamList,
    CAiwGenericParamList& /*aOutParamList*/,
    TUint /*aCmdOptions*/,
    const MAiwNotifyCallback* aCallback)
    {
     // Handle only assign command.
    if ( aCmdId == KAiwCmdAssign )
        {
        // Retrieve filename and file MIME type from AIW param list
        TPtrC fileName = GetAiwParamAsDescriptor(aInParamList, EGenericParamFile);

        TPtrC mimeTypeString = GetAiwParamAsDescriptor(aInParamList, EGenericParamMIMEType);

        // Leave, if there were not given all the required parameters
        if ((fileName == KNullDesC) ||
            (mimeTypeString == KNullDesC) || !IsMimeTypeSupportedL(mimeTypeString) )
            {
            User::Leave(KErrArgument);
            }
        TInt err = AknsWallpaperUtils::SetIdleWallpaper(
                                        fileName,
                                        CCoeEnv::Static(),
                                        R_AKNS_WALLPAPER_TEXT_LOADING_IMAGE,
                                        R_AKNS_WALLPAPER_GENERAL_WAIT_NOTE );

        if (err == KAknsWpuErrorPreviewOnly)
            {
            DisplayInfoNoteL(R_AKNS_WALLPAPER_TEXT_DRM_PREVIEW);
            }
        else if ( err == KErrNoMemory || err == KErrDiskFull || err == KErrTooBig )
            {
            DisplayInfoNoteL( R_AKNS_WALLPAPER_TEXT_IMAGE_TOO_LARGE );
            }
        else if (err == KErrCancel || err == KErrCouldNotConnect )
            {
            // Skip, this is not a real error or the error is not propagated
            // to upper level.
            }
        else if ( err == KLeaveExit )
            {
            // Exit leaves should always allowed to leave.
            User::Leave( KLeaveExit );
            }
        else if ( err != KErrNone )
            {
            DisplayInfoNoteL( R_AKNS_WALLPAPER_TEXT_IMAGE_CORRUPTED );
            }

        // If aCallback defined inform consumers that we have done with
        // the operation.
        if (aCallback)
            {
            // Cope with the design problems of AIW framework
            MAiwNotifyCallback* nonConstCallback =
            const_cast<MAiwNotifyCallback*> (aCallback);
            CAiwGenericParamList* eventParamList = CAiwGenericParamList::NewL();
            CleanupStack::PushL(eventParamList);
            nonConstCallback->HandleNotifyL(
                KAiwCmdAssign,
                KAiwEventCompleted,
                *eventParamList,
                aInParamList);
            CleanupStack::PopAndDestroy(eventParamList);
            }
        }
    }

// ---------------------------------------------------------------------------
// From class CAiwServiceIfMenu.
//
// Inserts plugin's menu items to aMenuPane.
// ---------------------------------------------------------------------------
//
void CAknsWallpaperPlugin::InitializeMenuPaneL(CAiwMenuPane& aMenuPane,
    TInt aIndex,
    TInt /*aCascadeId*/,
    const CAiwGenericParamList& aInParamList)
    {
    TPtrC mimeTypeString = GetAiwParamAsDescriptor(aInParamList, EGenericParamMIMEType);

    // Insert menu only if supported MIME type is given
    if ((mimeTypeString != KNullDesC) && IsMimeTypeSupportedL(mimeTypeString) )
        {
        TResourceReader reader;
        CCoeEnv::Static()->CreateResourceReaderLC(reader, R_AKNS_WALLPAPER_PLUGIN_MENU);
        aMenuPane.AddMenuItemsL(reader, KAiwCmdAssign, aIndex);
        CleanupStack::PopAndDestroy(); // reader
        }
    }

// ---------------------------------------------------------------------------
// From class CAiwServiceIfMenu.
//
// Implements menu command handling for EAknsWallpaperPluginCmdSetWallPaper.
// ---------------------------------------------------------------------------
//
void CAknsWallpaperPlugin::HandleMenuCmdL(
    TInt aMenuCmdId,
    const CAiwGenericParamList& aInParamList,
    CAiwGenericParamList& aOutParamList,
    TUint aCmdOptions,
    const MAiwNotifyCallback* aCallback)
    {
    if (aMenuCmdId == EAknsWallpaperPluginCmdSetWallPaper)
        {
        // Menu commands are handled as service commands.
        HandleServiceCmdL(
            KAiwCmdAssign,
            aInParamList,
            aOutParamList,
            aCmdOptions,
            aCallback );
        }
    }

// -----------------------------------------------------------------------------
// Implements showing information note
// -----------------------------------------------------------------------------
//
void CAknsWallpaperPlugin::DisplayInfoNoteL(TInt aTextResourceId)
    {
    HBufC* text = StringLoader::LoadLC(aTextResourceId);
    CAknInformationNote* dlg = new (ELeave) CAknInformationNote(EFalse);
    dlg->ExecuteLD(*text);
    CleanupStack::PopAndDestroy(text);
    }

// -----------------------------------------------------------------------------
// Implements checking if a given MIME type is supported or not
// -----------------------------------------------------------------------------
//
TBool CAknsWallpaperPlugin::IsMimeTypeSupportedL(const TDesC& aMimeTypeString)
    {
    // Check for a type separator in the string
    TInt pos = aMimeTypeString.Find(KAknsWallpaperPluginSeparator);

    // Leave if no separator was found.. the MIME
    // standard requires it
    if (pos == KErrNotFound)
        {
        User::Leave(KErrArgument);
        }

    // Copy the full Mime type string (needed for uppercase)
    HBufC* fullBuf = aMimeTypeString.AllocLC();
    TPtr fullString = fullBuf->Des();
    fullString.UpperCase();

    // Construct the compare string
    TPtrC compareString(aMimeTypeString.Left(pos));

    // Perform the comparison
    TBool ret = EFalse;

    // Mime type case:  IMAGE/* except IMAGE/X-OTA-BITMAP
    if (compareString.CompareF(KAknsWallpaperPluginMimeTypeImage) == 0 &&
        !(fullString.CompareF(KAknsWallpaperPluginMimeTypeOTABitmap) == 0))
        {
        ret = ETrue;
        }
    CleanupStack::PopAndDestroy(fullBuf);

    return ret;
    }

// -----------------------------------------------------------------------------
// Implements getting a AIW parameter as descriptor
// -----------------------------------------------------------------------------
//
TPtrC CAknsWallpaperPlugin::GetAiwParamAsDescriptor(
        const CAiwGenericParamList& aParamList,
        TGenericParamId aParamType)
    {
    TInt index = 0;
    const TAiwGenericParam* genericParam = NULL;
    genericParam = aParamList.FindFirst(
        index,
        aParamType,
        EVariantTypeDesC);

    if (index >= 0 && genericParam)
        {
        // Get the data
        return genericParam->Value().AsDes();
        }
    else
        {
        return KNullDesC();
        }
    }

// ======== ECOM INITIALIZATION ========

// Map the interface UIDs to implementation factory functions
const TImplementationProxy ImplementationTable[] =
    {
    IMPLEMENTATION_PROXY_ENTRY(KAknsWallpaperPluginImplementationUid, CAknsWallpaperPlugin::NewL)
    };

// ---------------------------------------------------------
// Exported proxy for instantiation method resolution
// ---------------------------------------------------------
//
EXPORT_C const TImplementationProxy* ImplementationGroupProxy(TInt& aTableCount)
    {
    aTableCount = sizeof(ImplementationTable) / sizeof(TImplementationProxy);
    return ImplementationTable;
    }

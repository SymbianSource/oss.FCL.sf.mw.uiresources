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
* Description:  Wallpaper setting utility class.
*
*/


// INCLUDES
#include <AknsWallpaperUtils.h>
#include <AknsSrvClient.h>
#include <AknSkinsInternalCRKeys.h>
#include <centralrepository.h>
#include <DRMHelper.h>
#include <DRMRights.h>
#include <caf/manager.h>
#include <coemain.h>
#include <StringLoader.h>
#include <AknWaitDialog.h>
#include <AknWaitNoteWrapper.h>
#include <babitflags.h>

// CONSTANTS
#if defined(RD_SLIDESHOW_WALLPAPER)
// No wallpaper defined.
const TInt KAknsWpNone = 0;
// Image type wallpaper defined.
const TInt KAknsWpImage = 1;
#endif //RD_SLIDESHOW_WALLPAPER


_LIT( KAknsSkinSrvSvgFileExt, ".svg" );


// Background process class.
class CAknsWPUTask : public CBase, public MAknBackgroundProcess
    {
    public: // Construction
        CAknsWPUTask(RAknsSrvSession* aSkinSrvSession,
                     CRepository* aSkinsRepository,
                     const TDesC& aFilename)
            : iSkinSrvSession(aSkinSrvSession),
            iSkinsRepository(aSkinsRepository),
            iWPUErr( KErrNone )
            {
            iInternalState.ClearAll();
            iFilename = aFilename;
            }

    public: // From MAknBackgroundProcess
        TBool IsProcessDone() const
            {
            if ( iInternalState.IsSet( EAknsWpuSetWallpaper ) &&
                 iInternalState.IsSet( EAknsWpuTestDecode ) )
                {
                return ETrue;
                }
            return EFalse;
            }

        void StepL()
            {
            if( IsProcessDone() )
                {
                iInternalState.ClearAll();
                return;
                }
            if ( iInternalState.IsClear( EAknsWpuTestDecode ) )
                {
                DecodeWallpaperImageL( iFilename, *iSkinSrvSession );
                iInternalState.Set( EAknsWpuTestDecode );
                }
            else if ( iInternalState.IsClear( EAknsWpuSetWallpaper ) )
                {
                iWPUErr = iSkinSrvSession->SetIdleWallpaper(iFilename);
                if (!iWPUErr)
                    {
                    iWPUErr = iSkinsRepository->Set(KPslnIdleBackgroundImagePath, iFilename);
#if defined(RD_SLIDESHOW_WALLPAPER)
                    if (iFilename.Length() > 0)
                        {
                        iWPUErr = iSkinsRepository->Set(KPslnWallpaperType, KAknsWpImage );
                        }
                    else
                        {
                        iWPUErr = iSkinsRepository->Set(KPslnWallpaperType, KAknsWpNone );
                        }
#endif //RD_SLIDESHOW_WALLPAPER
                    }
                iInternalState.Set( EAknsWpuSetWallpaper );
                }
            }
        void DialogDismissedL(TInt aButtonId )
            {
            if ( aButtonId == KErrNotFound )
                {
                // operation was cancelled
                }
            aButtonId++;
            }
    private:
            // -----------------------------------------------------------------------------
            // Decodes selected image.
            // -----------------------------------------------------------------------------
            //
            void DecodeWallpaperImageL( const TDesC& aFilename, RAknsSrvSession& aSkinSrvSession )
                {
                if (aFilename.Length() > 0)
                    {
                    // check if the image is corrupted
                    CFbsBitmap* bmp = NULL;
                    CFbsBitmap* mask = NULL;
                    // no way currently of checking corrupted svg:s
                    if ((aFilename.Right(4)).CompareF( KAknsSkinSrvSvgFileExt ))
                        {
                        aSkinSrvSession.DecodeWallpaperImageL(aFilename, TSize(-1,-1), bmp, mask);
                        }
                    }
                }


    private: // Data
        /*
        * Internal state of the class.
        */
        enum TPslnModelState
            {
            // initial state
            EAknsWpuModelStateInitial = 0x00000000,
            // do test decode for the image
            EAknsWpuTestDecode = 0x00000001,
            // set wallpaper
            EAknsWpuSetWallpaper = 0x00000002 };
        TBitFlags iInternalState;

        // Filename for wallpaper.
        TFileName iFilename;

        // Skin server session.
        RAknsSrvSession* iSkinSrvSession;

        // Repository where to store wallpaper settings.
        CRepository* iSkinsRepository;

    public: // Public data

        // Error code, if any.
        TInt iWPUErr;
    };


// -----------------------------------------------------------------------------
// Checks if given file is DRM protected.
// -----------------------------------------------------------------------------
//
TBool IsDRMProtectedL(const TDesC& aFilename)
    {
    TBool isProtected(EFalse);
    TInt value = KErrNone;

    ContentAccess::CContent* content = ContentAccess::CContent::NewLC( aFilename );
    User::LeaveIfError( content->GetAttribute( ContentAccess::EIsProtected, value ) );
    if ( value )
        {
        isProtected = ETrue;
        }
    CleanupStack::PopAndDestroy( content );
    return isProtected;
    }

// -----------------------------------------------------------------------------
// Checks if given file can be set DRM automated content.
// -----------------------------------------------------------------------------
//
TBool QueryAndSetAutomatedL(const TDesC& aFileName, CCoeEnv* aCoeEnv)
    {
    TBool set(ETrue);

    CDRMHelper* helper = NULL;
    if (!aCoeEnv)
        {
        helper = CDRMHelper::NewLC();
        }
    else
        {
        helper = CDRMHelper::NewLC(*aCoeEnv);
        }
    TBool cansetautomated(EFalse);

    TInt result = helper->CanSetAutomated(aFileName, cansetautomated);
    if (!cansetautomated && result == KErrCANoRights)
        {
        if (aCoeEnv)
            {
            User::LeaveIfError(helper->HandleErrorL( result,
            aFileName ) );
            }

        User::Leave(result);
        }
    if (!cansetautomated)
        {
        User::Leave(KAknsWpuErrorPreviewOnly);
        }

    CDRMHelperRightsConstraints* playconst = NULL;
    CDRMHelperRightsConstraints* dispconst = NULL;
    CDRMHelperRightsConstraints* execconst = NULL;
    CDRMHelperRightsConstraints* printconst = NULL;
    TBool expired(EFalse);
    TBool sendingallowed(EFalse);
    helper->GetRightsDetailsL( aFileName,
        CDRMRights::EDisplay, expired, sendingallowed,
        playconst, dispconst, execconst, printconst);
    delete playconst;
    delete execconst;
    delete printconst;
    CleanupStack::PushL(dispconst);

    if (dispconst->FullRights())
        {
        set = ETrue;
        // Set the Fullrights content as automated also
        // and ignore the result...
        helper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
        if (!aCoeEnv)
            {
            helper->SetAutomatedSilent(aFileName, ETrue);
            }
        else
            {
            helper->SetAutomated( aFileName );
            }
        }
    else
        {
        TInt res = KErrNone;
        helper->SetAutomatedType(CDRMHelper::EAutomatedTypeWallpaper);
        if (!aCoeEnv)
            {
            res = helper->SetAutomatedSilent( aFileName, ETrue );
            }
        else
            {
            res = helper->SetAutomated( aFileName );
            }

        if (res == KErrCancel)
            {
            set = EFalse;
            }
        else
            {
            User::LeaveIfError( res );
            User::LeaveIfError( helper->ConsumeFile2(aFileName, CDRMRights::EDisplay, CDRMHelper::EStart) );
            User::LeaveIfError( helper->ConsumeFile2(aFileName, CDRMRights::EDisplay, CDRMHelper::EFinish) );

            set = ETrue;
            }
        }

    CleanupStack::PopAndDestroy(2); //helper, dispconst
    return set;
    }

// -----------------------------------------------------------------------------
// Sets image file as still image wallpaper.
// -----------------------------------------------------------------------------
//
void DoSetIdleWallpaperL(const TDesC& aFilename, CCoeEnv* aCoeEnv, TInt aWaitNoteTextResourceID, TInt aWaitNoteResourceID)
    {
    if (aFilename.Length() > 0)
        {
        RFs fs;
        TEntry fileentry;
        User::LeaveIfError(fs.Connect());
        CleanupClosePushL(fs);
        User::LeaveIfError(fs.Entry(aFilename, fileentry));
        if (fileentry.iSize == 0)
            {
            User::Leave(KErrCorrupt);
            }
        CleanupStack::PopAndDestroy(); // fs
        }

        
    RAknsSrvSession skinsrv;
    User::LeaveIfError(skinsrv.Connect());
    CleanupClosePushL(skinsrv);
    CRepository* skinsrep = CRepository::NewL(KCRUidPersonalisation);
    CleanupStack::PushL(skinsrep);
    if (aFilename.Length()>0 && IsDRMProtectedL(aFilename))
        {
        if (!QueryAndSetAutomatedL(aFilename, aCoeEnv))
            {
            CleanupStack::PopAndDestroy(2);
            User::Leave(KErrCancel);
            }
        }
    if (aCoeEnv && (aWaitNoteTextResourceID && aWaitNoteResourceID))
        {
        HBufC* noteText = StringLoader::LoadLC( aWaitNoteTextResourceID);
        CAknsWPUTask* wputask = new (ELeave) CAknsWPUTask(&skinsrv, skinsrep, aFilename);
        CleanupStack::PushL(wputask);
        CAknWaitNoteWrapper* wrapper = CAknWaitNoteWrapper::NewL();
        CleanupDeletePushL(wrapper);

        TRAPD( executeErr,
        wrapper->ExecuteL(
            aWaitNoteResourceID, *wputask, *noteText, ETrue ) );

        User::LeaveIfError(wputask->iWPUErr);

        CleanupStack::PopAndDestroy(3); // wrapper, wputask, noteText
        User::LeaveIfError( executeErr );
        }
    else
        {
        // no "opening" note as no coeenv is given
        User::LeaveIfError(skinsrv.SetIdleWallpaper(aFilename));
        User::LeaveIfError(skinsrep->Set(KPslnIdleBackgroundImagePath, aFilename));
#if defined(RD_SLIDESHOW_WALLPAPER)
        if (aFilename.Length() > 0)
            {
            User::LeaveIfError(skinsrep->Set(KPslnWallpaperType, KAknsWpImage));
            }
        else
            {
            User::LeaveIfError(skinsrep->Set(KPslnWallpaperType, KAknsWpNone));
            }
#endif // RD_SLIDESHOW_WALLPAPER
        }

    CleanupStack::PopAndDestroy(2); // skinsrv, skinsrep
    }

// -----------------------------------------------------------------------------
// Public API for setting image as wallpaper.
// -----------------------------------------------------------------------------
//
EXPORT_C TInt AknsWallpaperUtils::SetIdleWallpaper(const TDesC& aFilename, CCoeEnv* aCoeEnv, TInt aWaitNoteTextResourceID, TInt aWaitNoteResourceID)
    {
    TInt err(KErrNone);
    TRAP(err, DoSetIdleWallpaperL(aFilename, aCoeEnv, aWaitNoteTextResourceID, aWaitNoteResourceID));
    return err;
    }

#if defined(RD_SLIDESHOW_WALLPAPER)
void ValidateEntriesL( CDesCArray& /*aSelectedFiles*/ , CCoeEnv* /*aCoeEnv*/ )
    {
    }

// -----------------------------------------------------------------------------
// Sets set of images as slideset wallpaper.
// If there is only one image, it is set as normal wallpaper.
// If there are no images in the slideset, then set as None.
// -----------------------------------------------------------------------------
//
void DoSetSlidesetWallpaperL(CDesCArray& aSelectedFiles, CCoeEnv* aCoeEnv, TInt aWaitNoteTextResourceID, TInt aWaitNoteResourceID)
    {
    TInt count = aSelectedFiles.MdcaCount();
    if (!count)
        {
        DoSetIdleWallpaperL(KNullDesC, aCoeEnv, aWaitNoteTextResourceID, aWaitNoteResourceID);
        return;
        }
    // only one file, set it as normal wp.
    if (count == 1)
        {
        DoSetIdleWallpaperL(aSelectedFiles.MdcaPoint(0), aCoeEnv, aWaitNoteTextResourceID, aWaitNoteResourceID);
        }
    ValidateEntriesL( aSelectedFiles , aCoeEnv );

    RAknsSrvSession skinsrv;
    User::LeaveIfError(skinsrv.Connect());
    CleanupClosePushL(skinsrv);
    CRepository* skinsrep = CRepository::NewL(KCRUidPersonalisation);
    CleanupStack::PushL(skinsrep);
    User::LeaveIfError(skinsrv.SetSlideSetWallpaper(aSelectedFiles));
    if (count != 1)
        {
        User::LeaveIfError(skinsrep->Set(KPslnWallpaperType, 2));
        }
    CleanupStack::PopAndDestroy(2); // skinsrep, skinsrv

    }
#endif //RD_SLIDESHOW_WALLPAPER

// -----------------------------------------------------------------------------
// Public API for setting slide set wallpaper.
// -----------------------------------------------------------------------------
//
EXPORT_C TInt AknsWallpaperUtils::SetSlidesetWallpaper(CDesCArray& aSelectedFiles, CCoeEnv* aCoeEnv, TInt aWaitNoteTextResourceID, TInt aWaitNoteResourceID)
    {
#if !defined(RD_SLIDESHOW_WALLPAPER)
    return KErrNotSupported;
#else
    TInt err(KErrNone);
    TRAP(err, DoSetSlidesetWallpaperL(aSelectedFiles, aCoeEnv, aWaitNoteTextResourceID, aWaitNoteResourceID));
    return err;
#endif //RD_SLIDESHOW_WALLPAPER
    }
    
// End of file


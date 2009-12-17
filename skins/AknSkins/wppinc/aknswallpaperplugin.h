/*
* Copyright (c) 2005 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  AIW provider for set as wallpaper functionality.
*
*/

#ifndef C_CAKNSWALLPAPERPLUGIN_H
#define C_CAKNSWALLPAPERPLUGIN_H

#include <AiwServiceIfMenu.h>
#include <ConeResLoader.h>

/**
 *  CAknsWallpaperPlugin plugin implementation.
 *
 *  This plugin implements an AIW provider for setting main wallpaper for the device.
 *
 *  @since S60 v3.1
 */
class CAknsWallpaperPlugin : public CAiwServiceIfMenu 
    {
    public: 
        static CAknsWallpaperPlugin* NewL();
        virtual ~CAknsWallpaperPlugin();

    private: 
    // from base class CAiwServiceIfMenu
    
        void InitialiseL(
            MAiwNotifyCallback& aFrameworkCallback,
            const RCriteriaArray& aInterest);

        void HandleServiceCmdL(
            const TInt& aCmdId,
            const CAiwGenericParamList& aInParamList,
            CAiwGenericParamList& aOutParamList,
            TUint aCmdOptions = 0,
            const MAiwNotifyCallback* aCallback = NULL);
            
        void InitializeMenuPaneL(
            CAiwMenuPane& aMenuPane,
            TInt aIndex,
            TInt aCascadeId,
            const CAiwGenericParamList& aInParamList);

        void HandleMenuCmdL(
            TInt aMenuCmdId,
            const CAiwGenericParamList& aInParamList,
            CAiwGenericParamList& aOutParamList,
            TUint aCmdOptions = 0,
            const MAiwNotifyCallback* aCallback = NULL);

    private:
        CAknsWallpaperPlugin();
        void ConstructL();

    private: // New
        void DisplayInfoNoteL(TInt aTextResourceId);
        TBool IsMimeTypeSupportedL(const TDesC& aMimeTypeString);
        TPtrC GetAiwParamAsDescriptor(
                const CAiwGenericParamList& aParamList,
                TGenericParamId aParamType);


    private:
        RConeResourceLoader iConeResLoader;        
    };
    
#endif // C_CAKNSWALLPAPERPLUGIN_H

// End of file.

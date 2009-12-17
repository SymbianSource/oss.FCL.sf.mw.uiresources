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
* Description:  Pictograph animator. Owns the timer that is used to animate
*                pictographs.
*
*
*/



#ifndef AKN_PICTOGRAPH_ANIMATOR_H
#define AKN_PICTOGRAPH_ANIMATOR_H

// INCLUDES
#include <e32base.h>
#include <coemain.h>

// CONSTANTS

// CCoeStatic UID
const TUid KUidAknPictographAnimator = {0x101F8616};

// FORWARD DECLARATIONS
class CAknPictographDrawer;
class CUserActivityManager;
class CFbsBitmap;
class CFbsBitGc;

// CLASS DECLARATION

/**
* Pictograph animator
*/
NONSHARABLE_CLASS(CAknPictographAnimator) :
    public CCoeStatic,
    public MCoeForegroundObserver
	{
    public:  // Constructors and destructor
        
        /**
        * Creates singleton.
        */
        static CAknPictographAnimator* CreateSingletonL();
        
        /**
        * Destructor.
        */
        virtual ~CAknPictographAnimator();

    public: // New functions

        void AddClientL( CAknPictographDrawer& aDrawer );
        TInt RemoveClient( CAknPictographDrawer& aDrawer );

        // From the client's point of view
        inline void Start();
        inline void Stop();
        inline TUint Counter();
        inline RPointerArray<CFbsBitmap>* Bitmaps();
        inline RPointerArray<CFbsBitmap>* Masks();
        inline CFbsBitmap* WhiteBitmap();
        inline CFbsBitmap* WhiteBitmapMask();
        inline CFbsBitGc*  WhiteBitmapMaskGc();
        static TInt TimerCallBack( TAny* aParameter );
        void AnimationTick();

    private: // New functions

        static TInt ActiveCallBack( TAny* aParameter );
        static TInt InactiveCallBack( TAny* aParameter );

        void HandleActiveCallBack();
        void HandleInactiveCallBack();

    private: // Functions from MCoeForegroundObserver

	    /**
	    * Handles the application coming to the foreground.
	    */
	    void HandleGainingForeground();

	    /**
	    * Handles the application going into the background.
	    */
	    void HandleLosingForeground();

    private:

        /**
        * C++ default constructor.
        */
        CAknPictographAnimator();

        /**
        * 2nd phase constructor.
        */
        void ConstructL();

    private:    // Data


        /**
        * Pictograph collection bitmaps for all supported heights, owned.
        */
        RPointerArray<CFbsBitmap>* iBitmaps;

        /**
        * Pictograph collection masks for all supported heights, owned.
        */
        RPointerArray<CFbsBitmap>* iMasks;

        /**
        * White bitmap, owned.
        */
        CFbsBitmap* iWhiteBitmap;

        /**
        * White bitmap mask, owned.
        */
        CFbsBitmap* iWhiteBitmapMask;

        /**
        * White bitmap mask bitmap device, owned.
        */
        CFbsBitmapDevice* iWhiteBitmapMaskDevice;

        /**
        * White bitmap mask graphics context, owned.
        */
        CFbsBitGc* iWhiteBitmapMaskGc;

        /**
        * Owned user activity manager.
        * Used to start and stop animations based on user activity.
        */
        CUserActivityManager* iUserActivityManager;

        /*
        * Owned animation timer
        */
        CPeriodic* iTimer;

        /*
        * Timer increases this counter
        */
        TUint iCounter;

        /*
        * Array of pictograph drawer clients
        */
        RPointerArray<CAknPictographDrawer> iClients;

        /*
        * Number of currently animating clients. Updated in Start and Stop calls.
        */
        TInt iAnimatedClients;
    };

#include "AknPictographAnimator.inl"

#endif      // AKN_PICTOGRAPH_ANIMATOR_H
            
// End of File

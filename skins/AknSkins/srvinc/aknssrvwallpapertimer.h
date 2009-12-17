/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Slide set wallpaper timer.
*
*/


#ifndef C_AKNSWALLPAPERTIMER_H
#define C_AKNSWALLPAPERTIMER_H

#include <e32base.h>

/**
 *  Observer interface for wallpaper slide set timer.
 *
 *  This interface is called when timer fires according
 *  to interval period defined when creating an instance.
 *
 *  @lib aknssrv.lib
 *  @since S60 v3.2
 */
class MAknsSrvWallpaperListener
    {
    public:
        virtual void WallpaperTimerTimeoutL( TBool aForceChange = EFalse ) = 0;
    };

/**
 *  Slideset wallpaper timer.
 *
 *  This class defines a timer for changing the image
 *  in a slide set. When timer fires according to interval
 *  given when creating the class, observer interface
 *  MAknsSrvWallpaperListener::WallpaperTimerTimeoutL is
 *  called.
 *
 *  @lib aknssrv.lib
 *  @since S60 v3.2
 */
NONSHARABLE_CLASS(CAknsSrvWallpaperTimer) : public CActive
    {
    public:

        /**
        * Creates a new instance of wallpaper slide set timer.
        * @param aListener observer for this timer's events.
        *
        * @return new instance of wallpaper slide set timer.
        */
        static CAknsSrvWallpaperTimer* NewL(
            MAknsSrvWallpaperListener* aListener );

        /**
        * Start the timer.
        * @param aInterval firing interval in seconds.
        *        The timer is fired after each interval period,
        *        until stopped.
        */
        void Start( TInt aInterval );

        /**
        * Stop the timer.
        */
        void Stop();

        /**
        * Returns the interval period of the timer.
        * @return interval period of the timer.
        */
        TInt Interval();

        /**
        * Destructor. Cancels and closes the timer.
        */
        ~CAknsSrvWallpaperTimer();

    protected:

        /**
        * Handles an active object's request completion event.
        * @from CActive.
        */
        void RunL();

        /**
        * Implements cancellation of an outstanding request.
        * @from CActive.
        */
        void DoCancel();

    private:

        // Second phase constructor.
        void ConstructL();

        // C++ constructor.
        CAknsSrvWallpaperTimer( MAknsSrvWallpaperListener* aListener );

        /**
        * Issues a new request. If active object is already running,
        * nothing happens.
        * @param aTempInterval a new interval to use.
        */
        void IssueRequest( TInt aTempInterval = 0 );

    private:
        /**
        * Pointer to timer firing event listener.
        * Not own.
        */
        MAknsSrvWallpaperListener* iListener;

        /**
        * Interval when timer should fire.
        */
        TInt iInterval;

        /**
        * Has the request been cancelled.
        */
        TBool iCanceled;

        /**
        * Timer object.
        */
        RTimer iTimer;

        /**
        * Previous time when timer was fired.
        */
        TTime iPreviousTime;
    };


#endif // C_AKNSWALLPAPERTIMER_H

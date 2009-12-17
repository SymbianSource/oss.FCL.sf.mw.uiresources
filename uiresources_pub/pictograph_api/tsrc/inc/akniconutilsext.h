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
* Description:  test aknpictographinterface.h
                      akniconsrvclient.h
                      akniconutils.h
                      akninternaliconutils.h
*
*/



#ifndef C_AKNICONUTILSEXT_H
#define C_AKNICONUTILSEXT_H


#include <akniconutils.h>
#include <eikenv.h>
#include <akniconobserver.h>

class CTestIconProvider : public CBase,
                          public MAknIconFileProvider
    {
public:

    /**
    * Returns an open file handle to the icon file.
    * This method should leave if an icon file with specified type does
    * not exist. That may be the case e.g. with MBM file,
    * if there are no bitmap icons.
    *
    * Note! RFs::ShareProtected must be called to the RFs instance used
    * for opening the file.
    *
    * @param aFile Icon file should be opened in this file handle, which
    * is an empty file handle, when the AknIcon framework calls this method.
    * The AknIcon framework takes care of closing the file handle after
    * having used it.
    * @param aType Icon file type.
    */
    virtual void RetrieveIconFileHandleL( RFile& aFile,
            const TIconFileType aType );

    /**
    * With this method, AknIcon framework informs that it does not use
    * this MAknIconFileProvider instance any more. After this call,
    * it is ok to delete the object. This can be implemented simply
    * e.g. by deleting self in this callback.
    * Normally, this callback is invoked when the icon in question
    * is deleted.
    * Note, however, that if the same MAknIconFileProvider instance is
    * supplied in multiple CreateIcon calls, then it must be accessible
    * by AknIcon framework until it has signalled a matching amount
    * of these callbacks.
    */
    virtual void Finished();

private: // data

    /**
     * Not Own
     */
    CEikonEnv* iEnv;

    };

class CTestIconObserver : public CBase,
                          public MAknIconObserver
    {
    public:

        /**
        * This is an abstract class for specifying an interface for 
        * receiving notifications when an icon's frame buffer has been updated.
        * An object of derived class implementing this interface should be registered
        * for a given icon to the AknIcon framework using 
        * function AknIconUtils::SetObserver().
        * 
        * AknIcon framework calls this function whenever the frame buffer of the observed icon
        * changes. This observer mechanism is mainly useful in animated icons cases.
        * The observer e.g. can redraw the icon on the screen when the frame of the animated 
        * icon has changed.
        *
        * @since 2.8
        * @param aBitmap bitmap or mask of the icon
        */
        virtual void BitmapChanged( CFbsBitmap* aBitmap );

    };

#endif // C_AKNICONUTILSEXT_H

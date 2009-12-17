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



#ifndef C_AKNPICTOGRAPHINTERFACEEXT_H
#define C_AKNPICTOGRAPHINTERFACEEXT_H

// INCLUDES
#include <aknpictographdrawerinterface.h>


// CLASS DECLARATION

class CAknPictographAnimatorCallBackExt : public CBase,
                                          public MAknPictographAnimatorCallBack
    {
public:
    /**
    * This function is called when a redraw is needed for drawing
    * new frames of animated pictographs. It should
    *
    * 1) Draw or clear the background of pictographs
    * 2) If the pictographs are amongst text, draw the text
    * 3) Draw the pictographs using MAknPictographDrawer interface
    *
    * In many cases, it is sufficient to implement this simply by
    * calling CCoeControl::DrawNow for the appropriate control.
    */
    virtual void DrawPictographArea();

    };


#endif // C_AKNPICTOGRAPHINTERFACEEXT_H

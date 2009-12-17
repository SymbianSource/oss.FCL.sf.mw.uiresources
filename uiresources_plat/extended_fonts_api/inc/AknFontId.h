/*
* Copyright (c) 2002-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description: 
*
*/



#ifndef AKNFONTID_H
#define AKNFONTID_H

#include <e32def.h>
#include <gdi.h>
#include "AknFontCategory.hrh"

/**
* Encapsulation of a Series 60 font id
* In Series 60 2.8, this only has static methods
*
* @since Series 60 2.8
*/

class TAknFontId
    {
    public:
    // Static methods
    /**
    * Returns whether the font id contains metrics encoded within it
    */
    IMPORT_C static TBool IsEncodedFont(TInt aFontId);
    static TAknFontCategory ExtractCategoryFromFontId(TInt aFontId);
    static TFontStrokeWeight ExtractWeightFromFontId(TInt aFontId);
    static TFontPosture ExtractPostureFromFontId(TInt aFontId);
    static TBool ExtractOutlineFromFontId(TInt aFontId);
    static TInt ExtractHeightFromFontId(TInt aFontId);
    /**
    * Returns an encoded font id that can be used to requests a font at very early points during startup, when there is no layout data available.
    * The CAknLayoutFont that is constructed should be updated after layout is present in order to release this dummy font
    * It is not to be used for font that will actually be rendered
    *
    * @return   Encoded Avkon font id
    */
    IMPORT_C static TInt TAknFontId::FontIdForStartupNormalFont();
    };

#endif // AKNFONTID_H
// End of File

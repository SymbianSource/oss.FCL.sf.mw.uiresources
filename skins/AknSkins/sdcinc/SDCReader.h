/*
* Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Reader class.
*
*/


#if !defined(AFX_SDCREADER_H__46D5B679_A59D_4E3A_8538_12CA298892CB__INCLUDED_)
#define AFX_SDCREADER_H__46D5B679_A59D_4E3A_8538_12CA298892CB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <string.h>

#include "SDCData.h"

class CSDCReader
    {
    public:
        CSDCReader( CSDCData* aData );
        virtual ~CSDCReader();

    public:
        void Parse();

    protected:
        void ParseSkintype();
        void ParseUID();
        void ParsePID();
        void GeneratePID();
        void ParseName();
        void ParseLanguageOverride();
        void ParseParentUID();
        void ParseProtect();
        void ParseAuthor();
        void ParseCopyright();
        void ParseTargetDevice();
        void ParseTool();
        void ParseBitmap();
        void ParseColorTable();
        void ParseFrame();
        void ParseBmpAnim();
        void ParseAppIcon();
        void ParsePalette();
        void ParseString();
        void ParseScalableItem();
        void ParseAnimation();
        void ParseBitmapPath();
        void ParseRestriction();
        TSDCIID ParseBitmapSource( const bool aAppIcon, const int aRestriction, const bool aSvgAnim = false );
        void ProcessAttribute( TSDCImageAttributes& aAttributes, wchar_t* aSource );
        void ParseEffectCommand( TSDCEffectCommand& aCommand );
        void ParseEffectParameter( TSDCEffectParameter& aParameter );

    protected:
        void UnexpectedTokenError( wchar_t* aWrongToken, wchar_t* aRightToken );
        void UnknownIIDError( wchar_t* aWrongIID );
        void StripIIDPrefix( wchar_t* aIID, int& aRestriction );

    public:
        CSDCData* iData;

    };

#endif // !defined(AFX_SDCREADER_H__46D5B679_A59D_4E3A_8538_12CA298892CB__INCLUDED_)

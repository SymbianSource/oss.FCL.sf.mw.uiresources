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
* Description:  Binary output.
*
*/


#if !defined(AFX_SDCBINOUTPUT_H__CF4540A9_3929_4002_B5BA_FDB4B873FAAC__INCLUDED_)
#define AFX_SDCBINOUTPUT_H__CF4540A9_3929_4002_B5BA_FDB4B873FAAC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <stdio.h>
#include <vector>

#include "SDCData.h"

using namespace std;

class CSDCBinOutput
    {
    public:
        CSDCBinOutput();
        virtual ~CSDCBinOutput();

    public:
        void Output( CSDCData* aData, const char* aBaseName, const char* aBinFilename, const bool aStubOnly );

    protected:
        void PrepareSkinDescriptor( const bool aStubOnly );
        void PrepareTargetDevice( const wchar_t* aDeviceName );
        void PrepareName( const short int aLanguage, const wchar_t* aName );
        void PrepareInformation();
        void PrepareLanguageOverride( const unsigned char aOverrideType, const TSDCPID aOverridePid );
        void PrepareWallpaper( const unsigned char aWpType, const TSDCBitmapDef* aBitmapDef );
        void PrepareFilename( const int aId, const char* aFilename );
        void PrepareEncapsulatedNormalClass( const int aRestriction );
        void PrepareNormalClass( const int aRestriction );
        void PrepareAppIconClass();
        void PrepareBitmap( const TSDCBitmapDef* aBitmapDef );
        void PrepareColorTable( const TSDCColorTableDef* aColorTableDef );
        void PrepareBmpAnim( const TSDCBmpAnimDef* aBmpAnimDef, const TSDCImageAttributes& aAttributes );
        void PrepareString( const TSDCStringDef* aStringDef );
        void PrepareScalableItem( const TSDCScalableItemDef* aItemDef );
        void PrepareAnimation( const TSDCAnimationDef* aItemDef );
        void PrepareImageTable( const TSDCIID& aIID, const vector<TSDCIID> aImages, const TSDCImageAttributes& aAttributes );
        void PrepareAttributes( const TSDCImageAttributes& aAttributes );
        void PrepareParamVector( const vector<TSDCEffectParameter>& aParameters );
        void PrepareEffectCommand( const TSDCEffectCommand& aCommand );
        void PrepareAnimParamGroup( const TSDCAnimParamGroup& aParamGroup );

    protected:
        void AppendBytes( const int aNumberOfBytes );
        void WriteByte( const unsigned char aByte );
        void WriteInt( const int aInt );
        void WriteUint( const unsigned int aUint );
        void WriteInt16( const short int aInt );
        void WriteUint16( const short unsigned int aUint );

    public:
        CSDCData* iData;
        char iBaseName[512];

        vector<unsigned char> iOutputVector;
        int iOutputPos;

    };

#endif // !defined(AFX_SDCBINOUTPUT_H__CF4540A9_3929_4002_B5BA_FDB4B873FAAC__INCLUDED_)

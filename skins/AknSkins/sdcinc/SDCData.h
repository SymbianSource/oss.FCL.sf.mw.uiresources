/*
* Copyright (c) 2003 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Data classs and structures.
*
*/


#if !defined(AFX_SDCDATA_H__67B83F2E_D9A5_4F97_B3DE_6C5F6F81C67D__INCLUDED_)
#define AFX_SDCDATA_H__67B83F2E_D9A5_4F97_B3DE_6C5F6F81C67D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <vector>

using namespace std;

enum TSDCColorDepth
    {
    ESDCColorDepthNone,
    ESDCColorDepth1,
    ESDCColorDepth2,
    ESDCColorDepth4,
    ESDCColorDepth8,
    ESDCColorDepthC4,
    ESDCColorDepthC8,
    ESDCColorDepthC12,
    ESDCColorDepthC16,
    ESDCColorDepthC24,
    ESDCColorDepthC32
    };

struct TSDCMBMEntry
    {
    int iIndex;
    wchar_t iSourcePath[512];

    TSDCColorDepth iColorDepth;
    wchar_t iSourceFilename[512];

    TSDCColorDepth iMaskColorDepth;
    wchar_t iMaskSourceFilename[512];

    bool iSvgAnim;
    };

struct TSDCIID
    {
    int iMajor;
    int iMinor;
    };

struct TSDCPID
    {
    int iPID1;
    int iPID2;
    };

enum TSDCImageAttribute
    {
    ESDCImageAttributeNone      =0x00,
    ESDCImageAttributeCoords    =0x01,
    ESDCImageAttributeSize      =0x02,
    ESDCImageAttributeStretch   =0x04,
    ESDCImageAttributeTile      =0x08,
    ESDCImageAttributeAlign     =0x10,
    ESDCImageAttributeScale     =0x20,
    ESDCImageAttributeTileX     =0x40,
    ESDCImageAttributeTileY     =0x80,
    ESDCImageAttributeNBC       =0x100
    };

enum TSDCImageAlignment
    {
    ESDCImageAlignNone          =0x00,
    ESDCImageAlignVTop          =0x01,
    ESDCImageAlignVBottom       =0x02,
    ESDCImageAlignVCenter       =0x04,
    ESDCImageAlignHLeft         =0x08,
    ESDCImageAlignHRight        =0x10,
    ESDCImageAlignHCenter       =0x20,
    ESDCImageAlignTL            =ESDCImageAlignVTop|ESDCImageAlignHLeft,
    ESDCImageAlignTR            =ESDCImageAlignVTop|ESDCImageAlignHRight,
    ESDCImageAlignTC            =ESDCImageAlignVTop|ESDCImageAlignHCenter,
    ESDCImageAlignBL            =ESDCImageAlignVBottom|ESDCImageAlignHLeft,
    ESDCImageAlignBR            =ESDCImageAlignVBottom|ESDCImageAlignHRight,
    ESDCImageAlignBC            =ESDCImageAlignVBottom|ESDCImageAlignHCenter,
    ESDCImageAlignCL            =ESDCImageAlignVCenter|ESDCImageAlignHLeft,
    ESDCImageAlignCR            =ESDCImageAlignVCenter|ESDCImageAlignHRight,
    ESDCImageAlignCC            =ESDCImageAlignVCenter|ESDCImageAlignHCenter,
    ESDCImageAlignVMask         =ESDCImageAlignVTop|ESDCImageAlignVBottom|
                                    ESDCImageAlignVCenter,
    ESDCImageAlignHMask         =ESDCImageAlignHLeft|ESDCImageAlignHRight|
                                    ESDCImageAlignHCenter
    };

struct TSDCImageAttributes
    {
    int iAttributeFlags;
    int iCoordX;
    int iCoordY;
    int iSizeW;
    int iSizeH;
    TSDCImageAlignment iAlignmentFlags;
    };

struct TSDCBitmapDef
    {
    TSDCIID iIID;
    int iMBMIndex;
    int iMaskMBMIndex;
    TSDCImageAttributes iAttributes;
    bool iAppIconBitmap;
    int iRestriction;
    };

struct TSDCColorTableEntry
    {
    int iIndex;
    int iRgb;
    };

struct TSDCColorTableDef
    {
    TSDCIID iIID;
    vector<TSDCColorTableEntry> iColors;
    int iRestriction;
    };

struct TSDCFrameDef
    {
    TSDCIID iIID;
    vector<TSDCIID> iElements;
    int iRestriction;
    };

struct TSDCNameEntry
    {
    int iLanguageID;
    wchar_t iName[512];
    };

struct TSDCAppIconDef
    {
    TSDCIID iIID;
    vector<TSDCIID> iIcons;
    int iRestriction;
    };

struct TSDCBmpAnimFrame
    {
    TSDCIID iIID;
    int iTime;
    int iPosX;
    int iPosY;
    };

struct TSDCBmpAnimDef
    {
    TSDCIID iIID;
    int iInterval;
    int iPlayMode;
    int iFlash;
    vector<TSDCBmpAnimFrame> iFrames;
    int iRestriction;
    };

struct TSDCTargetDeviceEntry
    {
    wchar_t iDeviceName[128];
    };

struct TSDCStringDef
    {
    TSDCIID iIID;
    wchar_t iString[512];
    int iRestriction;
    };

struct TSDCEffectParameter
    {
    wchar_t iName[512];
    int iType;
    int iNumber;
    int iRawDataCount; // Raw data itself is stored in iString
    wchar_t iString[512];
    TSDCColorDepth iColorDepth;
    int iBmpIndex;
    int iMaskIndex;
    };

struct TSDCEffectCommand
    {
    int iUid;
    int iInputA;
    int iInputB;
    int iOutput;
    vector<TSDCEffectParameter> iParameters;
    };

struct TSDCScalableItemDef
    {
    TSDCIID iIID;
    TSDCIID iRefIID;
    int iInput;
    int iOutput;
    vector<TSDCEffectCommand> iCommands;
    int iRestriction;
    };

struct TSDCAnimParamGroup
    {
    int iValueA;
    int iValueB;
    vector<TSDCEffectParameter> iParameters;
    };

struct TSDCAnimationDef
    {
    TSDCIID iIID;
    int iInput;
    int iOutput;
    int iMinInterval;
    bool iMorphing;
    vector<TSDCEffectCommand> iPreprocessCommands;
    vector<TSDCEffectCommand> iAnimCommands;
    vector<TSDCAnimParamGroup> iValues;
    vector<TSDCAnimParamGroup> iTimingModels;
    vector<TSDCAnimParamGroup> iSizeBoundParams;
    int iRestriction;
    };

class CSDCData
    {
    public:
        CSDCData();
        virtual ~CSDCData();

    public:
        bool IsScalable();

    public:
        bool IsDefined( const TSDCIID aIID );
        bool IsDefined( const TSDCIID aIID, const int aRestriction );

    public:
        void AppendNameEntry( const int aLanguageID, const wchar_t* aName );
        void AppendTargetDeviceEntry( const wchar_t* aDeviceName );

    public:
        bool HasMbmEntry( const TSDCColorDepth aColorDepth, const wchar_t* aFilename );
        TSDCMBMEntry* FindMbmEntry( const TSDCColorDepth aColorDepth, const wchar_t* aFilename );
        TSDCMBMEntry* AppendMbmEntry( const bool aSvg,
            const TSDCColorDepth aColorDepth, const wchar_t* aFilename, const bool aSvgAnim = false );
        void SetBmpPath( const wchar_t* aPath );

    public:
        void CreateBitmapDef( const TSDCIID aIID, const int aIndex, const int aMaskIndex, const TSDCImageAttributes aAttributes, const bool aAppIcon, const int aRestriction );
        TSDCBitmapDef* GetBitmapDef( const TSDCIID aIID );

    public:
        void CreateColorTableDef( const TSDCIID aIID, const vector<TSDCColorTableEntry> aColors, const int aRestriction );

    public:
        void CreateFrameDef( const TSDCIID aIID, const vector<TSDCIID> aElements, const int aRestriction );

    public:
        void CreateAppIconDef( const TSDCIID aIID, const vector<TSDCIID> aIcons, const int aRestriction );

    public:
        void CreateBmpAnimDef( const TSDCIID aIID, const int aInterval, const int aPlayMode, const int aFlash, const vector<TSDCBmpAnimFrame> aFrames, const int aRestriction );

    public:
        void CreateStringDef( const TSDCIID aIID, const wchar_t* aString, const int aRestriction );

    public:
        void CreateScalableItemDef( const TSDCIID aIID, const int aInput, const int aOutput, const vector<TSDCEffectCommand> aCommands, const int aRestriction );
        void CreateScalableItemRefDef( const TSDCIID aIID, const TSDCIID aRefIID, const int aRestriction );

    public:
        void CreateAnimationDef( const TSDCIID aIID, const int aInput, const int aOutput, const int aMinInterval,
            const vector<TSDCEffectCommand> aPreprocessCommands, const vector<TSDCEffectCommand> aAnimCommands,
            const vector<TSDCAnimParamGroup> aValues, const vector<TSDCAnimParamGroup> aTimingModels,
            const vector<TSDCAnimParamGroup> aSizeBoundParams, const bool aMorphing, const int aRestriction );
            
    private:
    		bool CheckFile( const wchar_t* aPath , const wchar_t* aFileName );

    public:
        TSDCPID iPid;
        int iSkinType;
        TSDCPID iAHOverridePid;
        TSDCPID iParentPid;
        TSDCPID iPalettePid;
        int iNextOwnMinor;
        int iProtection;
        wchar_t iAuthor[512];
        wchar_t iCopyright[512];
        wchar_t iTool[512];
        int iCurrentRestriction;

        vector<TSDCNameEntry*> iNameVector;
        vector<TSDCMBMEntry*> iMbmVector;
        vector<TSDCBitmapDef*> iBitmapDefVector;
        vector<TSDCColorTableDef*> iColorTableDefVector;
        vector<TSDCFrameDef*> iFrameDefVector;
        vector<TSDCAppIconDef*> iAppIconDefVector;
        vector<TSDCBmpAnimDef*> iBmpAnimDefVector;
        vector<TSDCTargetDeviceEntry*> iTargetDeviceVector;
        vector<TSDCStringDef*> iStringDefVector;
        vector<TSDCScalableItemDef*> iScalableItemDefVector;
        vector<TSDCAnimationDef*> iAnimationDefVector;
        vector<int> iLanguageVector;

        wchar_t iBmpPath[512];

        int iNextIconIndex;
    };

#endif // !defined(AFX_SDCDATA_H__67B83F2E_D9A5_4F97_B3DE_6C5F6F81C67D__INCLUDED_)

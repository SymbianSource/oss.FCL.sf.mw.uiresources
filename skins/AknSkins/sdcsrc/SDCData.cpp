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
* Description:  Data classs and structures.
*
*/


#include <string.h>
#include <sys/stat.h>
#include <wchar.h>

#include "SDCGlobals.h"
#include "SDCData.h"
#include "SDCException.h"
#include "SDCInput.h"
#include "SDCCompat.h"

// Make std namespace available for compatibility
namespace std {}
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSDCData::CSDCData()
    {
    iNextOwnMinor = 0x1000;
    iAHOverridePid.iPID1 = 0;
    iAHOverridePid.iPID2 = 0;
    iParentPid.iPID1 = 0;
    iParentPid.iPID2 = 0;
    iPalettePid.iPID1 = 0;
    iPalettePid.iPID2 = 0;
    iProtection = 0;
    iAuthor[0] = 0;
    iCopyright[0] = 0;
    iTool[0] = 0;
    iBmpPath[0] = 0;
    iCurrentRestriction = 0;

    iNextIconIndex = 16384;
    }

CSDCData::~CSDCData()
    {
    while( iNameVector.size()>0 )
        {
        delete iNameVector.back();
        iNameVector.pop_back();
        }
    while( iMbmVector.size()>0 )
        {
        delete iMbmVector.back();
        iMbmVector.pop_back();
        }
    while( iBitmapDefVector.size()>0 )
        {
        delete iBitmapDefVector.back();
        iBitmapDefVector.pop_back();
        }
    while( iColorTableDefVector.size()>0 )
        {
        delete iColorTableDefVector.back();
        iColorTableDefVector.pop_back();
        }
    while( iFrameDefVector.size()>0 )
        {
        delete iFrameDefVector.back();
        iFrameDefVector.pop_back();
        }
    while( iAppIconDefVector.size()>0 )
        {
        delete iAppIconDefVector.back();
        iAppIconDefVector.pop_back();
        }
    while( iBmpAnimDefVector.size()>0 )
        {
        delete iBmpAnimDefVector.back();
        iBmpAnimDefVector.pop_back();
        }
    while( iTargetDeviceVector.size()>0 )
        {
        delete iTargetDeviceVector.back();
        iTargetDeviceVector.pop_back();
        }
    while( iStringDefVector.size()>0 )
        {
        delete iStringDefVector.back();
        iStringDefVector.pop_back();
        }
    while( iScalableItemDefVector.size()>0 )
        {
        delete iScalableItemDefVector.back();
        iScalableItemDefVector.pop_back();
        }
    while( iAnimationDefVector.size()>0 )
        {
        delete iAnimationDefVector.back();
        iAnimationDefVector.pop_back();
        }
    while( iLanguageVector.size()>0 )
        {
        iLanguageVector.pop_back();
        }
    }

//////////////////////////////////////////////////////////////////////
// Other methods
//////////////////////////////////////////////////////////////////////

bool CSDCData::IsScalable()
    {
    if( iSkinType == 0x80 ) return true;
    return false;
    }

bool CSDCData::IsDefined( const TSDCIID aIID )
    {
    unsigned int i;
    for( i=0; i<iBitmapDefVector.size(); i++ )
        {
        TSDCBitmapDef* entry = iBitmapDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) ) return true;
        }
    for( i=0; i<iColorTableDefVector.size(); i++ )
        {
        TSDCColorTableDef* entry = iColorTableDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) ) return true;
        }
    for( i=0; i<iFrameDefVector.size(); i++ )
        {
        TSDCFrameDef* entry = iFrameDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) ) return true;
        }
    for( i=0; i<iAppIconDefVector.size(); i++ )
        {
        TSDCAppIconDef* entry = iAppIconDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) ) return true;
        }
    for( i=0; i<iBmpAnimDefVector.size(); i++ )
        {
        TSDCBmpAnimDef* entry = iBmpAnimDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) ) return true;
        }
    for( i=0; i<iStringDefVector.size(); i++ )
        {
        TSDCStringDef* entry = iStringDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) ) return true;
        }
    for( i=0; i<iScalableItemDefVector.size(); i++ )
        {
        TSDCScalableItemDef* entry = iScalableItemDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) ) return true;
        }
    for( i=0; i<iAnimationDefVector.size(); i++ )
        {
        TSDCAnimationDef* entry = iAnimationDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) ) return true;
        }
    return false;
    }

bool CSDCData::IsDefined( const TSDCIID aIID, const int aRestriction )
    {
    unsigned int i;
    for( i=0; i<iBitmapDefVector.size(); i++ )
        {
        TSDCBitmapDef* entry = iBitmapDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) && (entry->iRestriction==aRestriction) ) return true;
        }
    for( i=0; i<iColorTableDefVector.size(); i++ )
        {
        TSDCColorTableDef* entry = iColorTableDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) && (entry->iRestriction==aRestriction) ) return true;
        }
    for( i=0; i<iFrameDefVector.size(); i++ )
        {
        TSDCFrameDef* entry = iFrameDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) && (entry->iRestriction==aRestriction) ) return true;
        }
    for( i=0; i<iAppIconDefVector.size(); i++ )
        {
        TSDCAppIconDef* entry = iAppIconDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) && (entry->iRestriction==aRestriction) ) return true;
        }
    for( i=0; i<iBmpAnimDefVector.size(); i++ )
        {
        TSDCBmpAnimDef* entry = iBmpAnimDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) && (entry->iRestriction==aRestriction) ) return true;
        }
    for( i=0; i<iStringDefVector.size(); i++ )
        {
        TSDCStringDef* entry = iStringDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) && (entry->iRestriction==aRestriction) ) return true;
        }
    for( i=0; i<iScalableItemDefVector.size(); i++ )
        {
        TSDCScalableItemDef* entry = iScalableItemDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) && (entry->iRestriction==aRestriction) ) return true;
        }
    for( i=0; i<iAnimationDefVector.size(); i++ )
        {
        TSDCAnimationDef* entry = iAnimationDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) && (entry->iRestriction==aRestriction) ) return true;
        }
    return false;
    }

void CSDCData::AppendNameEntry( const int aLanguageID, const wchar_t* aName )
    {
    for( unsigned int i=0; i<iNameVector.size(); i++ )
        {
        TSDCNameEntry* entry = iNameVector[i];
        if( entry->iLanguageID == aLanguageID ) throw CSDCException( ESDCContentError, "Name for the language ID has already been specified" );
        }

    TSDCNameEntry* entry = new TSDCNameEntry();
    entry->iLanguageID = aLanguageID;
    wcscpy( entry->iName, aName );
    iNameVector.push_back( entry );
    }

void CSDCData::AppendTargetDeviceEntry( const wchar_t* aDeviceName )
    {
    TSDCTargetDeviceEntry* entry = new TSDCTargetDeviceEntry();
    wcscpy( entry->iDeviceName, aDeviceName );
    iTargetDeviceVector.push_back( entry );
    }

bool CSDCData::HasMbmEntry( const TSDCColorDepth aColorDepth, const wchar_t* aFilename )
    {
    return FindMbmEntry(aColorDepth,aFilename)?true:false;
    }

TSDCMBMEntry* CSDCData::FindMbmEntry( const TSDCColorDepth aColorDepth, const wchar_t* aFilename )
    {
    for( unsigned int i=0; i<iMbmVector.size(); i++ )
        {
        TSDCMBMEntry* entry = iMbmVector[i];
        if( (sd_wcscasecmp(entry->iSourcePath,iBmpPath)==0) &&
            (entry->iColorDepth==aColorDepth) &&
            (sd_wcscasecmp(entry->iSourceFilename,aFilename)==0) ) return entry;
        }
    return NULL;
    }

TSDCMBMEntry* CSDCData::AppendMbmEntry( const bool aSvg,
    const TSDCColorDepth aColorDepth, const wchar_t* aFilename,
    const bool aSvgAnim )
    {
    TSDCMBMEntry* entry = FindMbmEntry( aColorDepth, aFilename );
    if( entry ) return entry;

    entry = new TSDCMBMEntry();
    
    //check file
   	if( !CheckFile( iBmpPath , aFilename ) )
        {
        char filename[512];
        CSDCInput::ConvertToAscii( filename, aFilename );
        printf("NOTE: item %s not add beacuse file not exist!!\n",filename);
        return entry;
        }

    entry->iIndex = iNextIconIndex;
    iNextIconIndex += 2;

    wcscpy( entry->iSourceFilename, aFilename );

    entry->iColorDepth = aColorDepth;
    wcscpy( entry->iSourcePath, iBmpPath );

    entry->iMaskColorDepth = ESDCColorDepthNone;
    wcscpy( entry->iMaskSourceFilename, L"" );

    entry->iSvgAnim = aSvgAnim;

    iMbmVector.push_back( entry );
    return entry;
    }

void CSDCData::SetBmpPath( const wchar_t* aPath )
    {
    if( !aPath )
        {
        wcscpy( iBmpPath, L"" );
        }
    else
        {
        wcscpy( iBmpPath, aPath );
        if( wcslen( iBmpPath ) &&
            wcscmp( iBmpPath+wcslen(iBmpPath)-1, L"/" ) )
            {
            wcscat( iBmpPath, L"/" );
            printf("NOTE: Trailing backslash appended to bitmap path\n");
            }
        }
    }

void CSDCData::CreateBitmapDef( const TSDCIID aIID, const int aIndex, const int aMaskIndex, const TSDCImageAttributes aAttributes, const bool aAppIcon, const int aRestriction )
   {
    if( IsDefined( aIID, aRestriction ) ) throw CSDCException( ESDCContentError, "Item already defined" );

    TSDCBitmapDef* entry = new TSDCBitmapDef();
    entry->iIID = aIID;
    entry->iMBMIndex = aIndex;
    entry->iMaskMBMIndex = aMaskIndex;
    entry->iAttributes = aAttributes;
    entry->iAppIconBitmap = aAppIcon;
    entry->iRestriction = aRestriction;
    iBitmapDefVector.push_back( entry );
    }

TSDCBitmapDef* CSDCData::GetBitmapDef( const TSDCIID aIID )
    {
    for( unsigned int i=0; i<iBitmapDefVector.size(); i++ )
        {
        TSDCBitmapDef* entry = iBitmapDefVector[i];
        if( (entry->iIID.iMajor==aIID.iMajor) && (entry->iIID.iMinor==aIID.iMinor) ) return entry;
        }
    return NULL;
    }

void CSDCData::CreateColorTableDef( const TSDCIID aIID, const vector<TSDCColorTableEntry> aColors, const int aRestriction )
    {
    if( IsDefined( aIID, aRestriction ) ) throw CSDCException( ESDCContentError, "Item already defined" );

    TSDCColorTableDef* entry = new TSDCColorTableDef();
    entry->iIID = aIID;
    entry->iColors = aColors;
    entry->iRestriction = aRestriction;
    iColorTableDefVector.push_back( entry );
    }

void CSDCData::CreateFrameDef( const TSDCIID aIID, const vector<TSDCIID> aElements, const int aRestriction )
    {
    if( IsDefined( aIID, aRestriction ) ) throw CSDCException( ESDCContentError, "Item already defined" );
    if( aElements.size() != 9 ) throw CSDCException( ESDCContentError, "Frame must have 9 elements" );

    TSDCFrameDef* entry = new TSDCFrameDef();
    entry->iIID = aIID;
    entry->iElements = aElements;
    entry->iRestriction = aRestriction;
    iFrameDefVector.push_back( entry );
    }

void CSDCData::CreateAppIconDef( const TSDCIID aIID, const vector<TSDCIID> aIcons, const int aRestriction )
    {
    if( IsDefined( aIID, aRestriction ) ) throw CSDCException( ESDCContentError, "Item already defined" );

    TSDCAppIconDef* entry = new TSDCAppIconDef();
    entry->iIID = aIID;
    entry->iIcons = aIcons;
    entry->iRestriction = aRestriction;
    iAppIconDefVector.push_back( entry );
    }

void CSDCData::CreateBmpAnimDef( const TSDCIID aIID, const int aInterval, const int aPlayMode, const int aFlash, const vector<TSDCBmpAnimFrame> aFrames, const int aRestriction )
    {
    if( IsDefined( aIID, aRestriction ) ) throw CSDCException( ESDCContentError, "Item already defined" );

    TSDCBmpAnimDef* entry = new TSDCBmpAnimDef();
    entry->iIID = aIID;
    entry->iInterval = aInterval;
    entry->iPlayMode = aPlayMode;
    entry->iFlash = aFlash;
    entry->iFrames = aFrames;
    entry->iRestriction = aRestriction;
    iBmpAnimDefVector.push_back( entry );
    }

void CSDCData::CreateStringDef( const TSDCIID aIID, const wchar_t* aString, const int aRestriction )
    {
    if( IsDefined( aIID, aRestriction ) ) throw CSDCException( ESDCContentError, "Item already defined" );

    TSDCStringDef* entry = new TSDCStringDef();
    entry->iIID = aIID;
    entry->iRestriction = aRestriction;
    wcscpy( entry->iString, aString );
    iStringDefVector.push_back( entry );
    }

void CSDCData::CreateScalableItemDef( const TSDCIID aIID, const int aInput, const int aOutput, const vector<TSDCEffectCommand> aCommands, const int aRestriction )
    {
    if( IsDefined( aIID, aRestriction ) ) throw CSDCException( ESDCContentError, "Item already defined" );

    TSDCScalableItemDef* entry = new TSDCScalableItemDef();
    entry->iIID = aIID;
    entry->iRefIID.iMajor = 0;
    entry->iRefIID.iMinor = 0;
    entry->iInput = aInput;
    entry->iOutput = aOutput;
    entry->iCommands = aCommands;
    entry->iRestriction = aRestriction;
    iScalableItemDefVector.push_back( entry );
    }

void CSDCData::CreateScalableItemRefDef( const TSDCIID aIID, const TSDCIID aRefIID, const int aRestriction )
    {
    if( IsDefined( aIID, aRestriction ) ) throw CSDCException( ESDCContentError, "Item already defined" );

    TSDCScalableItemDef* entry = new TSDCScalableItemDef();
    entry->iIID = aIID;
    entry->iRefIID = aRefIID;
    entry->iInput = 0;
    entry->iOutput = 0;
    entry->iRestriction = aRestriction;
    iScalableItemDefVector.push_back( entry );
    }

void CSDCData::CreateAnimationDef( const TSDCIID aIID, const int aInput, const int aOutput, const int aMinInterval,
    const vector<TSDCEffectCommand> aPreprocessCommands, const vector<TSDCEffectCommand> aAnimCommands,
    const vector<TSDCAnimParamGroup> aValues, const vector<TSDCAnimParamGroup> aTimingModels,
    const vector<TSDCAnimParamGroup> aSizeBoundParams, const bool aMorphing, const int aRestriction )
    {
    if( IsDefined( aIID, aRestriction ) ) throw CSDCException( ESDCContentError, "Item already defined" );

    TSDCAnimationDef* entry = new TSDCAnimationDef();
    entry->iIID = aIID;
    entry->iInput = aInput;
    entry->iOutput = aOutput;
    entry->iMinInterval = aMinInterval;
    entry->iMorphing = aMorphing;
    entry->iPreprocessCommands = aPreprocessCommands;
    entry->iAnimCommands = aAnimCommands;
    entry->iValues = aValues;
    entry->iTimingModels = aTimingModels;
    entry->iSizeBoundParams = aSizeBoundParams;
    entry->iRestriction = aRestriction;
    iAnimationDefVector.push_back( entry );
    }
    
    
bool CSDCData::CheckFile( const wchar_t* aPath , const wchar_t* aFileName )
    {
    char asciiPatch[512];
    CSDCInput::ConvertToAscii( asciiPatch, aPath );
    char asciiFileName[512];
    CSDCInput::ConvertToAscii( asciiFileName, aFileName );
		
    strcat(asciiPatch,asciiFileName);

    struct stat buf;
    int result = stat( asciiPatch, &buf );
    if(result == -1)
        {
        return false;
        }
    return true;
    
    }

// End of file

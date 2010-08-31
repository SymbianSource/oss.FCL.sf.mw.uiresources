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

#include "SDCGlobals.h"
#include "SDCReader.h"
#include "SDCIIDConstants.h"
#include "SDCException.h"
#include "SDCCompat.h"

// Make std namespace available for compatibility
namespace std {}
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSDCReader::CSDCReader( CSDCData* aData )
    {
    iData = aData;
    }

CSDCReader::~CSDCReader()
    {
    }

//////////////////////////////////////////////////////////////////////
// Other methods
//////////////////////////////////////////////////////////////////////

void CSDCReader::Parse()
    {
    gInput.NextTokenAllowLF();
    if( sd_wcscasecmp( gInput.iToken, L"SKINTYPE" ) != 0 ) UnexpectedTokenError( gInput.iToken, L"SKINTYPE" );
    ParseSkintype();

    gInput.NextTokenAllowLF();
    if( sd_wcscasecmp( gInput.iToken, L"UID" ) == 0 )
        {
        ParseUID();
        gInput.NextTokenAllowLF();
        }
    else if( sd_wcscasecmp( gInput.iToken, L"PID" ) == 0 )
        {
        ParsePID();
        gInput.NextTokenAllowLF();
        }
    else
        {
        GeneratePID();
        }

    if( sd_wcscasecmp( gInput.iToken, L"NAME" ) != 0 ) UnexpectedTokenError( gInput.iToken, L"NAME" );
    ParseName();

    while( gInput.NextTokenAllowLF() )
        {
        if( sd_wcscasecmp( gInput.iToken, L"NAME" ) == 0 )
            {
            ParseName();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"LANGUAGEOVERRIDE" ) == 0 )
            {
            ParseLanguageOverride();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"LANGUAGEPARENT" ) == 0 )
            {
            ParseParentUID();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"PROTECT" ) == 0 )
            {
            ParseProtect();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"AUTHOR" ) == 0 )
            {
            ParseAuthor();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"COPYRIGHT" ) == 0 )
            {
            ParseCopyright();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"TARGETDEVICE" ) == 0 )
            {
            ParseTargetDevice();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"TOOL" ) == 0 )
            {
            ParseTool();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"BITMAP" ) == 0 )
            {
            ParseBitmap();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"COLORTABLE" ) == 0 )
            {
            ParseColorTable();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"FRAME" ) == 0 )
            {
            ParseFrame();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"BMPANIM" ) == 0 )
            {
            ParseBmpAnim();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"APPICON" ) == 0 )
            {
            ParseAppIcon();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"PALETTE" ) == 0 )
            {
            ParsePalette();
            }
        else if( (sd_wcscasecmp( gInput.iToken, L"SOUND" ) == 0)
            || (sd_wcscasecmp( gInput.iToken, L"STRING" ) == 0) )
            {
            ParseString();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"SCALABLEITEM" ) == 0 )
            {
            if( !iData->IsScalable() ) throw CSDCException( ESDCContentError, "SCALABLEITEM can only be included in scalable skins" );
            ParseScalableItem();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"ANIMATION" ) == 0 )
            {
            if( !iData->IsScalable() ) throw CSDCException( ESDCContentError, "ANIMATION can only be included in scalable skins" );
            ParseAnimation();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"BITMAPPATH" ) == 0 )
            {
            ParseBitmapPath();
            }
        else if( sd_wcscasecmp( gInput.iToken, L"RESTRICTION" ) == 0 )
            {
            ParseRestriction();
            }
        else
            {
            wprintf(L"DEBUG: Unknown token: \"%s\"\n", gInput.iToken );
            throw CSDCException( ESDCParseError, "Unknown token encountered or syntax error" );
            }
        }
    }

void CSDCReader::ParseSkintype()
    {
    gInput.NextToken();

    if( sd_wcscasecmp( gInput.iToken, L"normal" ) == 0 )
        {
        iData->iSkinType = 0x0;
        }
    else if( sd_wcscasecmp( gInput.iToken, L"system" ) == 0 )
        {
        iData->iSkinType = 0x1;
        }
    else if( sd_wcscasecmp( gInput.iToken, L"scalable" ) == 0 )
        {
#if !defined( RD_ENHANCED_SKINNING )
        throw CSDCException( ESDCNotSupportedError, "Scalable skins not supported" );
#endif
        iData->iSkinType = 0x80;
        return; // No other types are supported, if scalable
        }
    else
        {
        throw CSDCException( ESDCParseError, "Unknown or missing parameter for SKINTYPE" );
        }

    if( gInput.NextToken() )
        {
        if( sd_wcscasecmp( gInput.iToken, L"language=AH" ) == 0 )
            {
            iData->iSkinType |= 0x102;
            }
        else
            {
            throw CSDCException( ESDCParseError, "Unknown or missing additional parameter for SKINTYPE" );
            }
        }
    }

void CSDCReader::ParseUID()
    {
    gInput.NextToken();
    iData->iPid.iPID2 = 0; // Timestamp
    iData->iPid.iPID1 = gInput.ConvertToNumber( gInput.iToken ); // UID
    }

void CSDCReader::ParsePID()
    {
    gInput.NextToken();
    iData->iPid.iPID2 = gInput.ConvertToNumber( gInput.iToken ); // Timestamp

    if( iData->iPid.iPID2 == 0 )
        {
        throw CSDCException( ESDCParseError, "PID can not start with zero" );
        }

    gInput.NextToken();
    iData->iPid.iPID1 = gInput.ConvertToNumber( gInput.iToken ); // Random number
    }

void CSDCReader::GeneratePID()
    {
    iData->iPid.iPID2 = 0;
    iData->iPid.iPID1 = 0;
    }

void CSDCReader::ParseName()
    {
    gInput.NextToken();
    int languageID = gInput.ConvertToNumber( gInput.iToken );

    gInput.NextStringToken();
    iData->AppendNameEntry( languageID, gInput.iToken );
    }

void CSDCReader::ParseLanguageOverride()
    {
    if( iData->IsScalable() )
        throw CSDCException( ESDCParseError, "Language override can not be used with scalable skins" );

    gInput.NextToken();
    if( sd_wcscasecmp( gInput.iToken, L"AH" ) != 0 )
        {
        throw CSDCException( ESDCParseError, "Unknown or missing parameter for LANGUAGEOVERRIDE" );
        }

    gInput.NextToken();
    int value = gInput.ConvertToNumber( gInput.iToken );
    if( gInput.NextToken() )
        {
        iData->iAHOverridePid.iPID1 = gInput.ConvertToNumber( gInput.iToken );
        iData->iAHOverridePid.iPID2 = value;
        }
    else
        {
        iData->iAHOverridePid.iPID2 = 0;
        iData->iAHOverridePid.iPID1 = value;
        }
    }

void CSDCReader::ParseParentUID()
    {
    if( iData->IsScalable() )
        throw CSDCException( ESDCParseError, "Parent UID can not be used with scalable skins" );

    gInput.NextToken();
    int value = gInput.ConvertToNumber( gInput.iToken );
    if( gInput.NextToken() )
        {
        iData->iParentPid.iPID1 = gInput.ConvertToNumber( gInput.iToken );
        iData->iParentPid.iPID2 = value;
        }
    else
        {
        iData->iParentPid.iPID2 = 0;
        iData->iParentPid.iPID1 = value;
        }
    }

void CSDCReader::ParseProtect()
    {
    gInput.NextToken();
    if( sd_wcscasecmp( gInput.iToken, L"disablecopy" ) != 0 )
        {
        throw CSDCException( ESDCParseError, "Unknown or missing parameter for PROTECT" );
        }

    iData->iProtection = 1;
    }

void CSDCReader::ParseAuthor()
    {
    gInput.NextStringToken();
    wcscpy( iData->iAuthor, gInput.iToken );
    }

void CSDCReader::ParseCopyright()
    {
    gInput.NextStringToken();
    wcscpy( iData->iCopyright, gInput.iToken );
    }

void CSDCReader::ParseTargetDevice()
    {
    gInput.NextStringToken();
    iData->AppendTargetDeviceEntry( gInput.iToken );
    }

void CSDCReader::ParseTool()
    {
    gInput.NextStringToken();
    wcscpy( iData->iTool, gInput.iToken );
    }

void CSDCReader::ParseBitmap()
    {
    gInput.NextToken();

    bool appIcon = false;
    if( sd_wcscasecmp( gInput.iToken, L"CLASS=appicon" ) == 0 )
        {
        appIcon = true;
        gInput.NextToken();
        }

    int restriction( iData->iCurrentRestriction );
    const TSDCIIDEntry* iid = NULL;
    if( sd_wcsncasecmp( gInput.iToken, L"IID=", 4 ) == 0 )
        {
        wchar_t iidBuf[512];
        wcscpy( iidBuf, gInput.iToken+4 );
        StripIIDPrefix( iidBuf, restriction );
        iid = SDCIIDConstants::FindPlain( iidBuf );
        if( !iid ) UnknownIIDError( gInput.iToken+4 );

        gInput.NextToken();
        }

    TSDCColorDepth colorDepth = gInput.ConvertToColorDepth( gInput.iToken );

    gInput.NextToken();
    if( !iid )
        {
        iid = SDCIIDConstants::FindBmpName( gInput.iToken );
        if( !iid ) UnknownIIDError( gInput.iToken );
        }

    bool svg = CSDCInput::IsSvgFile( gInput.iToken );
    TSDCMBMEntry* mbmEntry = iData->AppendMbmEntry( svg, colorDepth, gInput.iToken );
    int mbmIndex = mbmEntry->iIndex;

    TSDCImageAttributes attributes;
    attributes.iAttributeFlags = ESDCImageAttributeNone;
    attributes.iCoordX = 0;
    attributes.iCoordY = 0;
    attributes.iSizeW = 0;
    attributes.iSizeH = 0;
    attributes.iAlignmentFlags = ESDCImageAlignNone;

    if( iData->IsScalable() ) {
        attributes.iAttributeFlags |= ESDCImageAttributeNBC;
        }

    int maskIndex = -1;

    while( gInput.NextToken() )
        {
        if( sd_wcsncasecmp( gInput.iToken, L"MASK=", 5 ) == 0 )
            {
            if( svg ) throw CSDCException( ESDCParseError, "SVG icon can not have a named mask" );
            if( mbmEntry->iMaskColorDepth!=ESDCColorDepthNone )
                {
                printf("NOTE: Mask already defined, second definition ignored (line %i)\n", gInput.iLineNumber );
                }
            else
                {
                const wchar_t* maskFile = gInput.iToken+5;
                mbmEntry->iMaskColorDepth = ESDCColorDepth1;
                wcscpy( mbmEntry->iMaskSourceFilename, maskFile );
                }
            maskIndex = mbmIndex+1;
            }
        else if( sd_wcsncasecmp( gInput.iToken, L"SOFTMASK=", 9 ) == 0 )
            {
            if( svg ) throw CSDCException( ESDCParseError, "SVG icon can not have a named mask" );
            if( mbmEntry->iMaskColorDepth!=ESDCColorDepthNone )
                {
                printf("NOTE: Mask already defined, second definition ignored (line %i)\n", gInput.iLineNumber );
                }
            else
                {
                const wchar_t* maskFile = gInput.iToken+9;
                mbmEntry->iMaskColorDepth = ESDCColorDepth8;
                wcscpy( mbmEntry->iMaskSourceFilename, maskFile );
                }
            maskIndex = mbmIndex+1;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"MASK" ) == 0 )
            {
            if( !svg ) throw CSDCException( ESDCParseError, "Non-SVG icon can not have an unnamed mask" );
            mbmEntry->iMaskColorDepth = ESDCColorDepth1;
            maskIndex = mbmIndex+1;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"SOFTMASK" ) == 0 )
            {
            if( !svg ) throw CSDCException( ESDCParseError, "Non-SVG icon can not have an unnamed mask" );
            mbmEntry->iMaskColorDepth = ESDCColorDepth8;
            maskIndex = mbmIndex+1;
            }
        else
            {
            ProcessAttribute( attributes, gInput.iToken );
            }
        }

    TSDCIID realIid;
    realIid.iMajor = iid->iMajor;
    realIid.iMinor = iid->iMinor;
    iData->CreateBitmapDef( realIid, mbmIndex, maskIndex, attributes, appIcon, restriction );
    }

void CSDCReader::ParseColorTable()
    {
    gInput.NextToken();

    TSDCIID realIid;
    int restriction( iData->iCurrentRestriction );
    if( sd_wcsncasecmp( gInput.iToken, L"IID=", 4 ) == 0 )
        {
        wchar_t iidBuf[512];
        wcscpy( iidBuf, gInput.iToken+4 );
        StripIIDPrefix( iidBuf, restriction );
        const TSDCIIDEntry* iid = SDCIIDConstants::FindPlain( iidBuf );
        if( !iid ) UnknownIIDError( gInput.iToken+4 );
        realIid.iMajor = iid->iMajor;
        realIid.iMinor = iid->iMinor;
        }
    else
        {
        throw CSDCException( ESDCParseError, "IID parameter expected for COLORTABLE" );
        }

    vector<TSDCColorTableEntry> colors;

    while( gInput.NextTokenAllowLF() )
        {
        if( sd_wcscasecmp( gInput.iToken, L"END" ) == 0 )
            {
            iData->CreateColorTableDef( realIid, colors, restriction );
            return;
            }
        else if( sd_wcsncasecmp( gInput.iToken, L"IDX=", 4 ) == 0 )
            {
            TSDCColorTableEntry entry;
            entry.iIndex = gInput.ConvertToNumber( gInput.iToken+4 );
            entry.iRgb = 0;
            colors.push_back( entry );
            }
        else if( sd_wcsncasecmp( gInput.iToken, L"RGB=", 4 ) == 0 )
            {
            TSDCColorTableEntry entry;
            entry.iIndex = -1;
            int rgb = gInput.ConvertToNumber( gInput.iToken+4 );
            // SymbianOS actually uses BGR order
            entry.iRgb =
                ((rgb&0xff)<<16) | (rgb&0xff00) | ((rgb&0xff0000)>>16);
            colors.push_back( entry );
            }
        else throw CSDCException( ESDCParseError, "Unknown token inside COLORTABLE" );
        }

    throw CSDCException( ESDCParseError, "No END token for COLORTABLE" );
    }

void CSDCReader::ParseFrame()
    {
    gInput.NextToken();

    TSDCIID realIid;
    int restriction( iData->iCurrentRestriction );
    if( sd_wcsncasecmp( gInput.iToken, L"IID=", 4 ) == 0 )
        {
        wchar_t iidBuf[512];
        wcscpy( iidBuf, gInput.iToken+4 );
        StripIIDPrefix( iidBuf, restriction );
        const TSDCIIDEntry* iid = SDCIIDConstants::FindPlain( iidBuf );
        if( !iid ) UnknownIIDError( gInput.iToken+4 );
        realIid.iMajor = iid->iMajor;
        realIid.iMinor = iid->iMinor;
        }
    else
        {
        throw CSDCException( ESDCParseError, "IID parameter expected for FRAME" );
        }

    vector<TSDCIID> elements;

    while( gInput.NextTokenAllowLF() )
        {
        if( sd_wcscasecmp( gInput.iToken, L"END" ) == 0)
            {
            iData->CreateFrameDef( realIid, elements, restriction );
            return;
            }
        else
            {
            elements.push_back( ParseBitmapSource( false, restriction ) );
            }
        }

    throw CSDCException( ESDCParseError, "No END token for FRAME" );
    }

void CSDCReader::ParseBmpAnim()
    {
    gInput.NextToken();

    TSDCIID realIid;
    int restriction( iData->iCurrentRestriction );
    if( sd_wcsncasecmp( gInput.iToken, L"IID=", 4 ) == 0 )
        {
        wchar_t iidBuf[512];
        wcscpy( iidBuf, gInput.iToken+4 );
        StripIIDPrefix( iidBuf, restriction );
        const TSDCIIDEntry* iid = SDCIIDConstants::FindPlain( iidBuf );
        if( !iid ) UnknownIIDError( gInput.iToken+4 );
        realIid.iMajor = iid->iMajor;
        realIid.iMinor = iid->iMinor;
        }
    else
        {
        throw CSDCException( ESDCParseError, "IID parameter expected for BMPANIM" );
        }

    int interval = -1;
    int playMode = 0;
    int flash = 0;
    bool svganim = false;

    while( gInput.NextToken() )
        {
        if( sd_wcsncasecmp( gInput.iToken, L"INTERVAL=", 9 ) == 0 )
            {
            interval = gInput.ConvertToNumber( gInput.iToken+9 );
            }
        else if( sd_wcscasecmp( gInput.iToken, L"MODE=play" ) == 0 )
            {
            playMode = 0;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"MODE=cycle" ) == 0 )
            {
            playMode = 1;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"MODE=bounce" ) == 0 )
            {
            playMode = 2;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"MODE=svganim" ) == 0 )
            {
            playMode = 255;
            svganim = true;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"FLASH" ) == 0 )
            {
            flash = 1;
            }
        else
            {
            UnexpectedTokenError( gInput.iToken, L"<BMPANIM parameter>" );
            }
        }

    vector<TSDCBmpAnimFrame> frames;

    int time = -1;
    int posx = 0;
    int posy = 0;
    while( gInput.NextTokenAllowLF() )
        {
        if( sd_wcsncasecmp( gInput.iToken, L"TIME=", 5 ) == 0 )
            {
            time = gInput.ConvertToNumber( gInput.iToken+5 );
            }
        else if( sd_wcsncasecmp( gInput.iToken, L"POS=", 4 ) == 0 )
            {
            wchar_t buf[512];
            wcscpy( buf, gInput.iToken+4 );
            wchar_t* p = wcsstr( buf, L"," );
            if( !p ) throw CSDCException( ESDCParseError, "No comma found in POS parameter of BMPANIM" );
            *p = 0;
            posx = gInput.ConvertToNumber( buf );
            posy = gInput.ConvertToNumber( p+1 );
            }
        else if( sd_wcscasecmp( gInput.iToken, L"END" ) == 0 )
            {
            iData->CreateBmpAnimDef( realIid, interval, playMode, flash, frames, restriction );
            return;
            }
        else
            {
            TSDCIID frameIid = ParseBitmapSource( false, restriction, svganim );

            TSDCBmpAnimFrame entry;
            entry.iIID = frameIid;
            entry.iTime = time;
            entry.iPosX = posx;
            entry.iPosY = posy;
            frames.push_back( entry );
            time = -1;
            posx = 0;
            posy = 0;
            }
        }

    throw CSDCException( ESDCParseError, "No END token for BMPANIM" );
    }

void CSDCReader::ParseAppIcon()
    {
    gInput.NextToken();
    int uid;
    if( sd_wcsncasecmp( gInput.iToken, L"UID=", 4 ) == 0 )
        {
        uid = gInput.ConvertToNumber( gInput.iToken+4 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "UID parameter expected for APPICON" );
        }

    int restriction( iData->iCurrentRestriction );

    vector<TSDCIID> iconBitmaps;
    while( gInput.NextTokenAllowLF() )
        {
        if( sd_wcscasecmp( gInput.iToken, L"END" ) == 0)
            {
            TSDCIID realIid;
            realIid.iMajor = EAknsMajorAppIcon;
            realIid.iMinor = uid;
            iData->CreateAppIconDef( realIid, iconBitmaps, restriction );
            return;
            }
        else
            {
            TSDCIID iconIid = ParseBitmapSource( true, restriction );
            iconBitmaps.push_back( iconIid );
            TSDCBitmapDef* bmpDef = iData->GetBitmapDef( iconIid );
            if( !bmpDef )
                {
                printf( "WARNING: Application icon possibly uses a bitmap outside its class (line %i)\n", gInput.iLineNumber );
                }
            else if( bmpDef->iAppIconBitmap == false )
                {
                printf( "WARNING: Application icon uses a bitmap outside its class (line %i)\n", gInput.iLineNumber );
                }
            }
        }

    throw CSDCException( ESDCParseError, "No END token for APPICON" );
    }

void CSDCReader::ParsePalette()
    {
    gInput.NextToken();
    if( sd_wcsncasecmp( gInput.iToken, L"SCHEME=", 7 ) == 0 )
        {
        iData->iPalettePid.iPID2 = 0;
        iData->iPalettePid.iPID1 = gInput.ConvertToNumber( gInput.iToken+7 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "SCHEME parameter expected for PALETTE" );
        }
    }

void CSDCReader::ParseString()
    {
    gInput.NextToken();
    TSDCIID realIid;
    int restriction( iData->iCurrentRestriction );
    if( sd_wcsncasecmp( gInput.iToken, L"IID=", 4 ) == 0 )
        {
        wchar_t iidBuf[512];
        wcscpy( iidBuf, gInput.iToken+4 );
        StripIIDPrefix( iidBuf, restriction );
        const TSDCIIDEntry* iid = SDCIIDConstants::FindPlain( iidBuf );
        if( !iid ) UnknownIIDError( gInput.iToken+4 );
        realIid.iMajor = iid->iMajor;
        realIid.iMinor = iid->iMinor;
        }
    else
        {
        throw CSDCException( ESDCParseError, "IID parameter expected for SOUND/STRING" );
        }

    gInput.NextStringToken();
    iData->CreateStringDef( realIid, gInput.iToken, restriction );
    }

void CSDCReader::ParseScalableItem()
    {
    gInput.NextToken();
    TSDCIID realIid;
    int restriction( iData->iCurrentRestriction );
    if( sd_wcsncasecmp( gInput.iToken, L"IID=", 4 ) == 0 )
        {
        wchar_t iidBuf[512];
        wcscpy( iidBuf, gInput.iToken+4 );
        StripIIDPrefix( iidBuf, restriction );
        const TSDCIIDEntry* iid = SDCIIDConstants::FindPlain( iidBuf );
        if( !iid ) UnknownIIDError( gInput.iToken+4 );
        realIid.iMajor = iid->iMajor;
        realIid.iMinor = iid->iMinor;
        }
    else
        {
        throw CSDCException( ESDCParseError, "IID parameter expected for SCALABLEITEM" );
        }

    gInput.NextToken();
    int input = 0;
    if( sd_wcsncasecmp( gInput.iToken, L"INPUT=", 6 ) == 0 )
        {
        input = CSDCInput::ConvertToLayer( gInput.iToken+6 );
        }
    else if( sd_wcsncasecmp( gInput.iToken, L"REFIID=", 7 ) == 0 )
        {
        // Reference only
        TSDCIID refIid;
        int ignored;
        wchar_t iidBuf[512];
        wcscpy( iidBuf, gInput.iToken+7 );
        StripIIDPrefix( iidBuf, ignored );
        const TSDCIIDEntry* iid = SDCIIDConstants::FindPlain( iidBuf );
        if( !iid ) UnknownIIDError( gInput.iToken+7 );
        refIid.iMajor = iid->iMajor;
        refIid.iMinor = iid->iMinor;
        char buf[512];
        CSDCInput::ConvertToAscii( buf, gInput.iToken );
        if( !iData->IsDefined( refIid ) )
            {
            printf( "INFO: IID reference (%s) currently points to non-existent element (line %i)\n", buf, gInput.iLineNumber );
            }
        iData->CreateScalableItemRefDef( realIid, refIid, restriction );
        return;
        }
    else
        {
        throw CSDCException( ESDCParseError, "INPUT parameter expected for SCALABLEITEM" );
        }

    gInput.NextToken();
    int output = 0;
    if( sd_wcsncasecmp( gInput.iToken, L"OUTPUT=", 7 ) == 0 )
        {
        output = CSDCInput::ConvertToLayer( gInput.iToken+7 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "OUTPUT parameter expected for SCALABLEITEM" );
        }

    vector<TSDCEffectCommand> commands;
    while( gInput.NextTokenAllowLF() )
        {
        if( sd_wcscasecmp( gInput.iToken, L"END" ) == 0)
            {
            iData->CreateScalableItemDef( realIid, input, output, commands, restriction );
            return;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"EFFECT" ) == 0)
            {
            TSDCEffectCommand command;
            ParseEffectCommand( command );
            commands.push_back( command );
            }
        else
            {
            UnexpectedTokenError( gInput.iToken, L"EFFECT or END" );
            }
        }

    throw CSDCException( ESDCParseError, "No END token for SCALABLEITEM" );
    }

void CSDCReader::ParseAnimation()
    {
    gInput.NextToken();
    TSDCIID realIid;
    int restriction( iData->iCurrentRestriction );
    if( sd_wcsncasecmp( gInput.iToken, L"IID=", 4 ) == 0 )
        {
        wchar_t iidBuf[512];
        wcscpy( iidBuf, gInput.iToken+4 );
        StripIIDPrefix( iidBuf, restriction );
        const TSDCIIDEntry* iid = SDCIIDConstants::FindPlain( iidBuf );
        if( !iid ) UnknownIIDError( gInput.iToken+4 );
        realIid.iMajor = iid->iMajor;
        realIid.iMinor = iid->iMinor;
        }
    else
        {
        throw CSDCException( ESDCParseError, "IID parameter expected for ANIMATION" );
        }

    gInput.NextToken();
    int input = 0;
    if( sd_wcsncasecmp( gInput.iToken, L"INPUT=", 6 ) == 0 )
        {
        input = CSDCInput::ConvertToLayer( gInput.iToken+6 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "INPUT parameter expected for ANIMATION" );
        }

    gInput.NextToken();
    int output = 0;
    if( sd_wcsncasecmp( gInput.iToken, L"OUTPUT=", 7 ) == 0 )
        {
        output = CSDCInput::ConvertToLayer( gInput.iToken+7 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "OUTPUT parameter expected for ANIMATION" );
        }

    gInput.NextToken();
    int mininterval = 0;
    if( sd_wcsncasecmp( gInput.iToken, L"MININTERVAL=", 12 ) == 0 )
        {
        mininterval = CSDCInput::ConvertToNumber( gInput.iToken+12 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "MININTERVAL parameter expected for ANIMATION" );
        }

    gInput.NextTokenAllowLF();

    bool morphing = false;
    if( sd_wcscasecmp( gInput.iToken, L"MORPHING" ) == 0 )
        {
        morphing = true;

        gInput.NextTokenAllowLF();
        }

    vector<TSDCEffectCommand> preprocessCommands;
    if( sd_wcscasecmp( gInput.iToken, L"PREPROCESS" ) == 0 )
        {
        bool terminated( false );
        while( gInput.NextTokenAllowLF() )
            {
            if( sd_wcscasecmp( gInput.iToken, L"END" ) == 0)
                {
                terminated = true;
                break;
                }
            else if( sd_wcscasecmp( gInput.iToken, L"EFFECT" ) == 0)
                {
                TSDCEffectCommand command;
                ParseEffectCommand( command );
                preprocessCommands.push_back( command );
                }
            else
                {
                UnexpectedTokenError( gInput.iToken, L"EFFECT or END" );
                }
            }
        if( !terminated ) throw CSDCException( ESDCParseError, "No END token for ANIMATION/PREPROCESS" );

        gInput.NextTokenAllowLF();
        }

    vector<TSDCEffectCommand> animCommands;
    vector<TSDCAnimParamGroup> values;
    vector<TSDCAnimParamGroup> timingModels;
    vector<TSDCAnimParamGroup> sizeBoundParams;

    bool terminated( false );
    do
        {
        if( sd_wcscasecmp( gInput.iToken, L"END" ) == 0)
            {
            terminated = true;
            break;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"COMMAND" ) == 0)
            {
            TSDCEffectCommand command;
            ParseEffectCommand( command );
            animCommands.push_back( command );
            }
        else if( sd_wcscasecmp( gInput.iToken, L"VALUE" ) == 0)
            {
            gInput.NextToken();
            if( sd_wcsncasecmp( gInput.iToken, L"UID=", 4 ) )
                throw new CSDCException( ESDCParseError, "UID parameter expected for VALUE" );
            int uid = CSDCInput::ConvertToNumber( gInput.iToken+4 );

            gInput.NextToken();
            if( sd_wcsncasecmp( gInput.iToken, L"TIMINGID=", 9 ) )
                throw new CSDCException( ESDCParseError, "TIMINGID parameter expected for VALUE" );
            int timingId = CSDCInput::ConvertToNumber( gInput.iToken+9 );

            TSDCAnimParamGroup paramGroup;

            while( gInput.NextTokenAllowLF() && sd_wcscasecmp( gInput.iToken, L"END" ) )
                {
                TSDCEffectParameter parameter;
                ParseEffectParameter( parameter );
                paramGroup.iParameters.push_back( parameter );
                }

            paramGroup.iValueA = uid;
            paramGroup.iValueB = timingId;
            values.push_back( paramGroup );
            }
        else if( sd_wcscasecmp( gInput.iToken, L"TIMINGMODEL" ) == 0)
            {
            gInput.NextToken();
            if( sd_wcsncasecmp( gInput.iToken, L"UID=", 4 ) )
                throw new CSDCException( ESDCParseError, "UID parameter expected for TIMINGMODEL" );
            int uid = CSDCInput::ConvertToNumber( gInput.iToken+4 );

            TSDCAnimParamGroup paramGroup;

            while( gInput.NextTokenAllowLF() && sd_wcscasecmp( gInput.iToken, L"END" ) )
                {
                TSDCEffectParameter parameter;
                ParseEffectParameter( parameter );
                paramGroup.iParameters.push_back( parameter );
                }

            paramGroup.iValueA = uid;
            paramGroup.iValueB = 0;
            timingModels.push_back( paramGroup );
            }
        else if( sd_wcscasecmp( gInput.iToken, L"SIZEBOUNDPARAM" ) == 0)
            {
            gInput.NextToken();
            TSDCEffectParameter parameter;
            parameter.iType = 0;
            wcscpy( parameter.iName, gInput.iToken );
            parameter.iNumber = 0;

            gInput.NextToken();
            if( sd_wcsncasecmp( gInput.iToken, L"VALUEID=", 8 ) )
                throw new CSDCException( ESDCParseError, "VALUEID parameter expected for SIZEBOUNDPARAM" );
            int valueId = CSDCInput::ConvertToNumber( gInput.iToken+8 );

            gInput.NextToken();
            int flags = 0;
            if( sd_wcscasecmp( gInput.iToken, L"FLAGS=W" ) == 0 )
                {
                flags = 1;
                }
            else if( sd_wcscasecmp( gInput.iToken, L"FLAGS=H" ) == 0 )
                {
                flags = 2;
                }
            else if( sd_wcscasecmp( gInput.iToken, L"FLAGS=W_AND_H" ) == 0 )
                {
                flags = 3;
                }
            else throw new CSDCException( ESDCParseError, "FLAGS=W|H|W_AND_H parameter expected for SIZEBOUNDPARAM" );

            TSDCAnimParamGroup paramGroup;
            paramGroup.iValueA = valueId;
            paramGroup.iValueB = flags;
            paramGroup.iParameters.push_back( parameter );
            sizeBoundParams.push_back( paramGroup );
            }
        else
            {
            UnexpectedTokenError( gInput.iToken, L"COMMAND, VALUE, TIMINGMODEL, SIZEBOUNDPARAM, or END" );
            }
        }
    while( gInput.NextTokenAllowLF() );
    if( !terminated ) throw CSDCException( ESDCParseError, "No END token for ANIMATION" );

    iData->CreateAnimationDef( realIid, input, output, mininterval, preprocessCommands, animCommands,
        values, timingModels, sizeBoundParams, morphing, restriction );
    }

void CSDCReader::ParseBitmapPath()
    {
    if( gInput.NextToken() )
        {
        bool changed( true );
        if( sd_wcscasecmp( gInput.iToken, iData->iBmpPath ) == 0 ) changed = false;
        char buf[512];
        CSDCInput::ConvertToAscii( buf, gInput.iToken );

        /* prepend EPOCROOT on linux */
        if(buf[0] == '/')
            {
#if (defined(__MSVCRT__) || defined(_MSC_VER))
            /* FIXME: We have to use \\ for referencing root path on Windows? */
            buf[0] = '\\';
            
            CSDCInput::ConvertToWchar(gInput.iToken, buf);
#else
            char b[512];

            sprintf(b, "%s%s", getenv("EPOCROOT"), buf);

            strcpy(buf, b);

            CSDCInput::ConvertToWchar(gInput.iToken, b);
#endif
            }

        iData->SetBmpPath( gInput.iToken );
        
        if( changed )
            printf("NOTE: Bitmap source path set to %s\n", buf );
        }
    else
        {
        iData->SetBmpPath( NULL );
        printf("NOTE: Bitmap source path set to automatic.\n" );
        }
    }

void CSDCReader::ParseRestriction()
    {
    if( !iData->IsScalable() )
        printf( "WARNING: RESTRICTION elements is only allowed in scalable skins, layout types will not work with this skin (line %i)\n", gInput.iLineNumber );

    gInput.NextToken();
    if( sd_wcscasecmp( gInput.iToken, L"S60_2_6" ) == 0 )
        {
        iData->iCurrentRestriction = 0x0206;
        printf("NOTE: Current restriction set to 2.6\n");
        }
    else if( sd_wcscasecmp( gInput.iToken, L"S60_2_7" ) == 0 )
        {
        iData->iCurrentRestriction = 0x0207;
        printf("NOTE: Current restriction set to 2.7\n");
        }
    else if( sd_wcscasecmp( gInput.iToken, L"S60_2_8" ) == 0 )
        {
        iData->iCurrentRestriction = 0x0208;
        printf("NOTE: Current restriction set to 2.8\n");
        }
    else if( sd_wcscasecmp( gInput.iToken, L"S60_3_0" ) == 0 )
        {
        iData->iCurrentRestriction = 0x0300;
        printf("NOTE: Current restriction set to 3.0\n");
        }
    else if( sd_wcscasecmp( gInput.iToken, L"S60_3_1" ) == 0 )
        {
        iData->iCurrentRestriction = 0x0301;
        printf("NOTE: Current restriction set to 3.1\n");
        }
    else if( sd_wcscasecmp( gInput.iToken, L"S60_3_2" ) == 0 )
        {
        iData->iCurrentRestriction = 0x0302;
        printf("NOTE: Current restriction set to 3.2\n");
        }
    else if( sd_wcscasecmp( gInput.iToken, L"S60_5_0" ) == 0 )
        {
        iData->iCurrentRestriction = 0x0500;
        printf("NOTE: Current restriction set to 5.0\n");
        }
    else if( sd_wcscasecmp( gInput.iToken, L"LAY_W" ) == 0 )
        {
        iData->iCurrentRestriction = 0x00010000;
        printf("NOTE: Current restriction set to Layout/Non-Mirrored\n");
        }
    else if( sd_wcscasecmp( gInput.iToken, L"LAY_AH" ) == 0 )
        {
        iData->iCurrentRestriction = 0x00020000;
        printf("NOTE: Current restriction set to Layout/Mirrored\n");
        }
    else if( sd_wcsncasecmp( gInput.iToken, L"LANG=", 5 ) == 0 )
        {
        int language = (CSDCInput::ConvertToNumber( gInput.iToken+5 ))&0xffff;
        printf("NOTE: Current restriction set to Language/langcode:%d\n", language);
        iData->iCurrentRestriction = language|0x00030000;
        iData->iLanguageVector.push_back(language|0x00030000);
        }
    else if( sd_wcscasecmp( gInput.iToken, L"NONE" ) == 0 )
        {
        iData->iCurrentRestriction = 0;
        printf("NOTE: Current restriction cleared\n");
        }
    else
        {
        throw CSDCException( ESDCParseError, "Unknown specifier for RESTRICTION element" );
        }
    }

TSDCIID CSDCReader::ParseBitmapSource( const bool aAppIcon, const int aRestriction, const bool aSvgAnim )
    {
    int restriction( iData->iCurrentRestriction );
    if( sd_wcsncasecmp( gInput.iToken, L"IID=", 4 ) == 0 )
        {
        wchar_t iidBuf[512];
        wcscpy( iidBuf, gInput.iToken+4 );
        StripIIDPrefix( iidBuf, restriction );
        char buf[512];
        gInput.ConvertToAscii( buf, gInput.iToken );
        if( restriction && (restriction == aRestriction) )
            {
            printf( "NOTE: IID reference (%s) is restricted, but shares the restrictions of the compound. Relative validity can not be checked (line %i)\n", buf, gInput.iLineNumber );
            }
        else if( restriction )
            {
            printf( "WARNING: IID reference (%s) is restricted. Relative validity can not be checked and may be broken (line %i)\n", buf, gInput.iLineNumber );
            }
        else if( aRestriction )
            {
            printf( "NOTE: Non-restricted IID reference (%s) inside restricted compound (line %i)\n", buf, gInput.iLineNumber );
            }
        const TSDCIIDEntry* iid = SDCIIDConstants::FindPlain( iidBuf );
        if( !iid ) UnknownIIDError( gInput.iToken+4 );
        TSDCIID realIid;
        realIid.iMajor = iid->iMajor;
        realIid.iMinor = iid->iMinor;
        return realIid;
        }
    restriction = aRestriction;

    TSDCColorDepth colorDepth = CSDCInput::ConvertToColorDepth( gInput.iToken );

    gInput.NextToken();
    TSDCIID realIid;
    const TSDCIIDEntry* iid = SDCIIDConstants::FindBmpName( gInput.iToken );
    if( iid )
        {
        realIid.iMajor = iid->iMajor;
        realIid.iMinor = iid->iMinor;
        if( restriction )
            {
            printf( "NOTE: Known IID (0x%x,0x%x) referenced inside restricted compound. Relative validity can not be checked (line %i)\n", realIid.iMajor, realIid.iMinor, gInput.iLineNumber );
            }
        }
    else
        {
        if( (iData->iPid.iPID2==0) && (iData->iPid.iPID1!=0) )
            {
            realIid.iMajor = iData->iPid.iPID1;
            }
        else
            {
            realIid.iMajor = -4;
            }
        realIid.iMinor = iData->iNextOwnMinor++;
        char buf[512];
        gInput.ConvertToAscii( buf, gInput.iToken );
        printf( "NOTE: Generated IID (0x%x,0x%x) for %s (line %i)\n", realIid.iMajor, realIid.iMinor, buf, gInput.iLineNumber );
        if( restriction )
            {
            printf( "NOTE: Restriction inherited to generated IID (0x%x,0x%x) for %s (line %i)\n", realIid.iMajor, realIid.iMinor, buf, gInput.iLineNumber );
            }
        }

    bool svg = CSDCInput::IsSvgFile( gInput.iToken );
    TSDCMBMEntry* mbmEntry = iData->AppendMbmEntry( svg, colorDepth, gInput.iToken, aSvgAnim );
    int mbmIndex = mbmEntry->iIndex;

    TSDCImageAttributes attributes;
    attributes.iAttributeFlags = ESDCImageAttributeNone;
    attributes.iCoordX = 0;
    attributes.iCoordY = 0;
    attributes.iSizeW = 0;
    attributes.iSizeH = 0;
    attributes.iAlignmentFlags = ESDCImageAlignNone;

    if( iData->IsScalable() ) {
        attributes.iAttributeFlags |= ESDCImageAttributeNBC;
        }

    int maskIndex = -1;

    while( gInput.NextToken() )
        {
        if( sd_wcsncasecmp( gInput.iToken, L"MASK=", 5 ) == 0 )
            {
            if( svg ) throw CSDCException( ESDCParseError, "SVG icon can not have a named mask" );
            if( mbmEntry->iMaskColorDepth!=ESDCColorDepthNone )
                {
                printf("NOTE: Mask already defined, second definition ignored (line %i)\n", gInput.iLineNumber );
                }
            else
                {
                const wchar_t* maskFile = gInput.iToken+5;
                mbmEntry->iMaskColorDepth = ESDCColorDepth1;
                wcscpy( mbmEntry->iMaskSourceFilename, maskFile );
                }
            maskIndex = mbmIndex+1;
            }
        else if( sd_wcsncasecmp( gInput.iToken, L"SOFTMASK=", 9 ) == 0 )
            {
            if( svg ) throw CSDCException( ESDCParseError, "SVG icon can not have a named mask" );
            if( mbmEntry->iMaskColorDepth!=ESDCColorDepthNone )
                {
                printf("NOTE: Mask already defined, second definition ignored (line %i)\n", gInput.iLineNumber );
                }
            else
                {
                const wchar_t* maskFile = gInput.iToken+9;
                mbmEntry->iMaskColorDepth = ESDCColorDepth8;
                wcscpy( mbmEntry->iMaskSourceFilename, maskFile );
                }
            maskIndex = mbmIndex+1;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"MASK" ) == 0 )
            {
            if( !svg ) throw CSDCException( ESDCParseError, "Non-SVG icon can not have an unnamed mask" );
            mbmEntry->iMaskColorDepth = ESDCColorDepth1;
            maskIndex = mbmIndex+1;
            }
        else if( sd_wcscasecmp( gInput.iToken, L"SOFTMASK" ) == 0 )
            {
            if( !svg ) throw CSDCException( ESDCParseError, "Non-SVG icon can not have an unnamed mask" );
            mbmEntry->iMaskColorDepth = ESDCColorDepth8;
            maskIndex = mbmIndex+1;
            }
        else
            {
            ProcessAttribute( attributes, gInput.iToken );
            }
        }

    if( (maskIndex!=-1) && (attributes.iAttributeFlags&ESDCImageAttributeTile) )
        {
        printf( "WARNING: TILE attribute used with masked bitmap (line %i)\n", gInput.iLineNumber );
        }

    iData->CreateBitmapDef( realIid, mbmIndex, maskIndex, attributes, aAppIcon, restriction );
    return realIid;
    }

void CSDCReader::ProcessAttribute( TSDCImageAttributes& aAttributes, wchar_t* aSource )
    {
    wchar_t buf[512];
    wcscpy( buf, aSource );

    if( sd_wcsncasecmp( buf, L"COORDS=", 7 ) == 0 )
        {
        wchar_t* p = wcsstr( buf, L"," );
        if( !p ) throw CSDCException( ESDCParseError, "No comma in image attribute COORDS" );
        *p = 0;
        aAttributes.iAttributeFlags |= ESDCImageAttributeCoords;
        aAttributes.iCoordX = gInput.ConvertToNumber( buf+7 );
        aAttributes.iCoordY = gInput.ConvertToNumber( p+1 );
        }
    else if( sd_wcsncasecmp( buf, L"SIZE=", 5 ) == 0 )
        {
        wchar_t* p = wcsstr( buf, L"," );
        if( !p ) throw CSDCException( ESDCParseError, "No comma in image attribute SIZE" );
        *p = 0;
        aAttributes.iAttributeFlags |= ESDCImageAttributeSize;
        aAttributes.iSizeW = gInput.ConvertToNumber( buf+5 );
        aAttributes.iSizeH  = gInput.ConvertToNumber( p+1 );
        }
    else if( sd_wcscasecmp( buf, L"STRETCH" ) == 0 )
        {
        aAttributes.iAttributeFlags |= ESDCImageAttributeStretch;
        }
    else if( sd_wcscasecmp( buf, L"TILE" ) == 0 )
        {
        aAttributes.iAttributeFlags |= ESDCImageAttributeTile;
        }
    else if( sd_wcscasecmp( buf, L"TILEX" ) == 0 )
        {
        aAttributes.iAttributeFlags |= ESDCImageAttributeTileX;
        }
    else if( sd_wcscasecmp( buf, L"TILEY" ) == 0 )
        {
        aAttributes.iAttributeFlags |= ESDCImageAttributeTileY;
        }
    else if( sd_wcsncasecmp( buf, L"ALIGN=", 6 ) == 0 )
        {
        if( sd_wcscasecmp( buf+6, L"TL" ) == 0 ) aAttributes.iAlignmentFlags = ESDCImageAlignTL;
        else if( sd_wcscasecmp( buf+6, L"TC" ) == 0 ) aAttributes.iAlignmentFlags = ESDCImageAlignTC;
        else if( sd_wcscasecmp( buf+6, L"TR" ) == 0 ) aAttributes.iAlignmentFlags = ESDCImageAlignTR;
        else if( sd_wcscasecmp( buf+6, L"CL" ) == 0 ) aAttributes.iAlignmentFlags = ESDCImageAlignCL;
        else if( sd_wcscasecmp( buf+6, L"CC" ) == 0 ) aAttributes.iAlignmentFlags = ESDCImageAlignCC;
        else if( sd_wcscasecmp( buf+6, L"CR" ) == 0 ) aAttributes.iAlignmentFlags = ESDCImageAlignCR;
        else if( sd_wcscasecmp( buf+6, L"BL" ) == 0 ) aAttributes.iAlignmentFlags = ESDCImageAlignBL;
        else if( sd_wcscasecmp( buf+6, L"BC" ) == 0 ) aAttributes.iAlignmentFlags = ESDCImageAlignBC;
        else if( sd_wcscasecmp( buf+6, L"BR" ) == 0 ) aAttributes.iAlignmentFlags = ESDCImageAlignBR;
        else throw CSDCException( ESDCParseError, "Unknown parameter for image attribute ALIGN" );

        aAttributes.iAttributeFlags |= ESDCImageAttributeAlign;
        }
    else throw CSDCException( ESDCParseError, "Unknown attribute parameter" );
    }

void CSDCReader::ParseEffectCommand( TSDCEffectCommand& aCommand )
    {
    gInput.NextToken();
    if( sd_wcsncasecmp( gInput.iToken, L"UID=", 4 ) == 0 )
        {
        aCommand.iUid = CSDCInput::ConvertToNumber( gInput.iToken+4 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "UID parameter expected for EFFECT" );
        }

    gInput.NextToken();
    if( sd_wcsncasecmp( gInput.iToken, L"INPUTA=", 7 ) == 0 )
        {
        aCommand.iInputA = CSDCInput::ConvertToLayer( gInput.iToken+7 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "INPUTA parameter expected for EFFECT" );
        }

    gInput.NextToken();
    if( sd_wcsncasecmp( gInput.iToken, L"INPUTB=", 7 ) == 0 )
        {
        aCommand.iInputB = CSDCInput::ConvertToLayer( gInput.iToken+7 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "INPUTB parameter expected for EFFECT" );
        }

    gInput.NextToken();
    if( sd_wcsncasecmp( gInput.iToken, L"OUTPUT=", 7 ) == 0 )
        {
        aCommand.iOutput = CSDCInput::ConvertToLayer( gInput.iToken+7 );
        }
    else
        {
        throw CSDCException( ESDCParseError, "OUTPUT parameter expected for EFFECT" );
        }

    while( gInput.NextTokenAllowLF() )
        {
        if( sd_wcscasecmp( gInput.iToken, L"END" ) == 0)
            {
            // Just return, everything should be in the struct by now
            return;
            }
        else
            {
            TSDCEffectParameter parameter;
            ParseEffectParameter( parameter );
            aCommand.iParameters.push_back( parameter );
            }
        }

    throw CSDCException( ESDCParseError, "No END token for EFFECT" );
    }

void CSDCReader::ParseEffectParameter( TSDCEffectParameter& aParameter )
    {
    if( sd_wcscasecmp( gInput.iToken, L"INT" ) == 0)
        {
        aParameter.iType = 0;
        }
    else if( sd_wcscasecmp( gInput.iToken, L"STR" ) == 0)
        {
        aParameter.iType = 1;
        }
    else if( sd_wcscasecmp( gInput.iToken, L"BMP" ) == 0)
        {
        aParameter.iType = 2;
        }
    else if( sd_wcscasecmp( gInput.iToken, L"NAMEDREF" ) == 0)
        {
        aParameter.iType = 3;
        }
    else if( sd_wcscasecmp( gInput.iToken, L"RAW" ) == 0)
        {
        aParameter.iType = 4;
        }
    else
        {
        UnexpectedTokenError( gInput.iToken, L"STR, INT, BMP, RAW or NAMEDREF");
        }

    gInput.NextToken();
    wcscpy( aParameter.iName, gInput.iToken );

    if( aParameter.iType == 0 )
        {
        gInput.NextToken();
        aParameter.iNumber =  CSDCInput::ConvertToNumber( gInput.iToken );
        }
    else if( aParameter.iType == 1 )
        {
        gInput.NextStringToken();
        wcscpy( aParameter.iString, gInput.iToken );
        }
    else if( aParameter.iType == 2 )
        {
        // Color depth
        gInput.NextToken();
        aParameter.iColorDepth = CSDCInput::ConvertToColorDepth( gInput.iToken );

        // Filename
        gInput.NextToken();
        bool svg = CSDCInput::IsSvgFile( gInput.iToken );
        TSDCMBMEntry* mbmEntry = iData->AppendMbmEntry( svg, aParameter.iColorDepth, gInput.iToken );
        aParameter.iBmpIndex = mbmEntry->iIndex;

        // Mask
        aParameter.iMaskIndex = -1;
        if( gInput.NextToken() )
            {
            if( sd_wcsncasecmp( gInput.iToken, L"MASK=", 5 ) == 0 )
                {
                if( svg ) throw CSDCException( ESDCParseError, "SVG icon can not have a named mask" );
                if( mbmEntry->iMaskColorDepth!=ESDCColorDepthNone )
                    {
                    printf("NOTE: Mask already defined, second definition ignored (line %i)\n", gInput.iLineNumber );
                    }
                else
                    {
                    const wchar_t* maskFile = gInput.iToken+5;
                    mbmEntry->iMaskColorDepth = ESDCColorDepth1;
                    wcscpy( mbmEntry->iMaskSourceFilename, maskFile );
                    }
                aParameter.iMaskIndex = aParameter.iBmpIndex+1;
                }
            else if( sd_wcsncasecmp( gInput.iToken, L"SOFTMASK=", 9 ) == 0 )
                {
                if( svg ) throw CSDCException( ESDCParseError, "SVG icon can not have a named mask" );
                if( mbmEntry->iMaskColorDepth!=ESDCColorDepthNone )
                    {
                    printf("NOTE: Mask already defined, second definition ignored (line %i)\n", gInput.iLineNumber );
                    }
                else
                    {
                    const wchar_t* maskFile = gInput.iToken+9;
                    mbmEntry->iMaskColorDepth = ESDCColorDepth8;
                    wcscpy( mbmEntry->iMaskSourceFilename, maskFile );
                    }
                aParameter.iMaskIndex = aParameter.iBmpIndex+1;
                }
            else if( sd_wcscasecmp( gInput.iToken, L"MASK" ) == 0 )
                {
                if( !svg ) throw CSDCException( ESDCParseError, "Non-SVG icon can not have an unnamed mask" );
                mbmEntry->iMaskColorDepth = ESDCColorDepth1;
                aParameter.iMaskIndex = aParameter.iBmpIndex+1;
                }
            else if( sd_wcscasecmp( gInput.iToken, L"SOFTMASK" ) == 0 )
                {
                if( !svg ) throw CSDCException( ESDCParseError, "Non-SVG icon can not have an unnamed mask" );
                mbmEntry->iMaskColorDepth = ESDCColorDepth8;
                aParameter.iMaskIndex = aParameter.iBmpIndex+1;
                }
            else
                {
                UnexpectedTokenError( gInput.iToken, L"MASK or SOFTMASK" );
                }
            }
        }
    else if( aParameter.iType == 3 )
        {
        gInput.NextToken();
        if( sd_wcsncasecmp( gInput.iToken, L"VALUEID=", 8 ) == 0 )
            {
            aParameter.iNumber = CSDCInput::ConvertToNumber( gInput.iToken+8 );
            }
        else
            {
            throw CSDCException( ESDCParseError, "VALUEID parameter expected for NAMEDREF" );
            }
        }
    else if( aParameter.iType == 4 )
        {
        int tokens = gInput.NextRawToken();
        aParameter.iRawDataCount = tokens;
        memcpy( aParameter.iString, gInput.iToken, tokens * sizeof(wchar_t) );
        }
    }

void CSDCReader::UnexpectedTokenError( wchar_t* aWrongToken, wchar_t* aRightToken )
    {
    char wrongBuf[512];
    gInput.ConvertToAscii( wrongBuf, aWrongToken );
    char rightBuf[512];
    gInput.ConvertToAscii( rightBuf, aRightToken );

    char buf[512];
    strcpy( buf, "Expected \"" );
    strcat( buf, rightBuf );
    strcat( buf, "\", but \"" );
    strcat( buf, wrongBuf );
    strcat( buf, "\" found instead" );
    throw CSDCException( ESDCParseError, buf );
    }

void CSDCReader::UnknownIIDError( wchar_t* aWrongIID )
    {
    char wrongBuf[512];
    gInput.ConvertToAscii( wrongBuf, aWrongIID );

    char buf[512];
    strcpy( buf, "No match found for item ID \"" );
    strcat( buf, wrongBuf );
    strcat( buf, "\"" );
    throw CSDCException( ESDCParseError, buf );
    }

void CSDCReader::StripIIDPrefix( wchar_t* aIID, int& aRestriction )
    {
    wchar_t* delimiter = wcschr( aIID, '%' );
    if( !delimiter )
        {
        return;
        }

    if( iData->iCurrentRestriction )
        throw CSDCException( ESDCParseError, "No item-based restriction can be used where RESTRICTION element already applies" );

    wchar_t buf[512];
    wcscpy( buf, delimiter+1 );

    *delimiter = 0;
    if( sd_wcscasecmp( aIID, L"S60_2_6" ) == 0 )
        {
        aRestriction = 0x0206;
        }
    else if( sd_wcscasecmp( aIID, L"S60_2_7" ) == 0 )
        {
        aRestriction = 0x0207;
        }
    else if( sd_wcscasecmp( aIID, L"S60_2_8" ) == 0 )
        {
        aRestriction = 0x0208;
        }
    else if( sd_wcscasecmp( aIID, L"S60_3_0" ) == 0 )
        {
        aRestriction = 0x0300;
        }
    else if( sd_wcscasecmp( aIID, L"S60_3_1" ) == 0 )
        {
        aRestriction = 0x0301;
        }
    else if( sd_wcscasecmp( aIID, L"S60_3_2" ) == 0 )
        {
        aRestriction = 0x0302;
        }
    else if( sd_wcscasecmp( aIID, L"S60_5_0" ) == 0 )
        {
        aRestriction = 0x0500;
        }
    else if( sd_wcscasecmp( aIID, L"LAY_W" ) == 0 )
        {
        aRestriction = 0x00010000;
        }
    else if( sd_wcscasecmp( aIID, L"LAY_AH" ) == 0 )
        {
        aRestriction = 0x00020000;
        }
    else
        {
        throw CSDCException( ESDCParseError, "Unknown release restriction prefix in IID" );
        }

    wcscpy( aIID, buf );
    }

// End of file

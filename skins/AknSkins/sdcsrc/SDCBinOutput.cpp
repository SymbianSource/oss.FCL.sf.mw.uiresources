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

#include <wchar.h>
#include <sys/time.h>
#include <unistd.h>
#include <cstdlib>
#include <string>

#include "SDCGlobals.h"
#include "SDCBinOutput.h"
#include "aknsconstants.hrh"
#include "SDCException.h"
#include "SDCCompat.h"

// Make std namespace available for compatibility
namespace std {}
using namespace std;

// CLASS DECLARATION

class TPos
    {
    public:
        TPos( CSDCBinOutput* aBinOutput )
            {
            iPosition = aBinOutput->iOutputPos;
            }

        void Go( CSDCBinOutput* aBinOutput )
            {
            iOriginalPosition = aBinOutput->iOutputPos;
            aBinOutput->iOutputPos = iPosition;
            }

        void Back( CSDCBinOutput* aBinOutput )
            {
            aBinOutput->iOutputPos = iOriginalPosition;
            }

        int BackwardsDelta()
             {
             return iOriginalPosition-iPosition;
             }

    public:
        int iPosition;
        int iOriginalPosition;
    };

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSDCBinOutput::CSDCBinOutput()
    {
    iOutputPos = 0;
    }

CSDCBinOutput::~CSDCBinOutput()
    {
    }

//////////////////////////////////////////////////////////////////////
// Other methods
//////////////////////////////////////////////////////////////////////

void CSDCBinOutput::Output( CSDCData* aData, const char* aBaseName, const char* aBinFilename, const bool aStubOnly )
    {
    iData = aData;
    strcpy( iBaseName, aBaseName );

    PrepareSkinDescriptor( aStubOnly );

    if( iOutputPos != static_cast<int>( iOutputVector.size() ) ) throw CSDCException( ESDCUnknownError, "Internal binary output size does not match" );

    FILE* file = fopen( aBinFilename, "wb" );
    if( !file ) throw CSDCException( ESDCFileOpenError, "Can not open target binary file for writing" );
    unsigned int i;
    for( i=0; i<iOutputVector.size(); i++ )
        {
        fputc( iOutputVector[i], file );
        }
    fclose( file );
    }

void CSDCBinOutput::PrepareSkinDescriptor( const bool aStubOnly )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 0 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 3*4 + 1*2 + 2*4 );
    WriteInt( iData->iPid.iPID1 );      // SkinPID1
    WriteInt( iData->iPid.iPID2 );      // SkinPID2
    WriteInt( 0 );                      // SkinCF
    WriteUint16( (unsigned short int)iData->iSkinType ); // SkinType
    WriteInt( iData->iPalettePid.iPID1 ); // ColorSchemePID1
    WriteInt( iData->iPalettePid.iPID2 ); // ColorSchemePID2

    AppendBytes( 1*1 );                 // Protection
    if( iData->iProtection == 1 )
        {
        WriteByte( 0x01 );
        }
    else
        {
        WriteByte( 0x00 );
        }

    AppendBytes( 1*1 );                 // ContentFlags
    if( (iData->iAppIconDefVector.size()>0) && (!iData->IsScalable()) )
        {
        WriteByte( 1 );
        }
    else
        {
        WriteByte( 0 );
        }
    AppendBytes( 1*2 + 1*4 );
    WriteUint16( 0 );                   // Reserved2
    WriteInt( 0 );                      // Reserved3

    int chunksN = 0;
    AppendBytes( 1*4 );
    TPos chunksNPos( this );
    WriteInt( 0 );              // ChunksN

    PrepareInformation();
    chunksN++;

    unsigned int i;

    for( i=0; i<iData->iTargetDeviceVector.size(); i++ )
        {
        TSDCTargetDeviceEntry* entry = iData->iTargetDeviceVector[i];
        PrepareTargetDevice( entry->iDeviceName );
        chunksN++;
        }

    for( i=0; i<iData->iNameVector.size(); i++ )
        {
        TSDCNameEntry* entry = iData->iNameVector[i];
        PrepareName( entry->iLanguageID, entry->iName );
        chunksN++;
        }

    if( (iData->iAHOverridePid.iPID1!=0) && (iData->iAHOverridePid.iPID2!=0) )
        {
        PrepareLanguageOverride( 0x01, iData->iAHOverridePid );
        chunksN++;
        }

    if( !iData->IsScalable() )
        {
        for( i=0; i<iData->iBitmapDefVector.size(); i++ )
            {
            TSDCBitmapDef* entry = iData->iBitmapDefVector[i];
            if( (entry->iIID.iMajor == EAknsMajorSkin) &&
                (entry->iIID.iMinor == EAknsMinorWallpaper) )
                {
                PrepareWallpaper( 0x00, entry );
                chunksN++;
                PrepareWallpaper( 0x01, entry );
                chunksN++;
                }
            if( (entry->iIID.iMajor == EAknsMajorPinboard) &&
                (entry->iIID.iMinor == EAknsMinorQsnFrPinbCenterWp) )
                {
                PrepareWallpaper( 0x02, entry );
                chunksN++;
                }
            }
        }

    if( !aStubOnly )
        {
        char buf[512];
        strcpy( buf, iBaseName );
        strcat( buf, ".mbm" );
        PrepareFilename( 0, buf );
        chunksN++;

        if( iData->IsScalable() )
            {
            strcpy( buf, iBaseName );
            strcat( buf, ".mif" );
            PrepareFilename( 1, buf );
            chunksN++;
            }

        PrepareNormalClass( 0 );
        chunksN++;

        if( !iData->IsScalable() )
            {
            PrepareAppIconClass();
            chunksN++;
            }

        // Release 2.6 specifics
        PrepareEncapsulatedNormalClass( 0x0206 );
        chunksN++;

        // Release 2.7 specifics
        PrepareEncapsulatedNormalClass( 0x0207 );
        chunksN++;

        // Release 2.8 specifics
        PrepareEncapsulatedNormalClass( 0x0208 );
        chunksN++;

        // Release 3.0 specifics
        PrepareEncapsulatedNormalClass( 0x0300 );
        chunksN++;

        // Non-mirrored
        PrepareEncapsulatedNormalClass( 0x00010000 );
        chunksN++;

        // Mirrored
        PrepareEncapsulatedNormalClass( 0x00020000 );
        chunksN++;

        for (unsigned int count = 0;count < iData->iLanguageVector.size(); count++)
            {
            // Language
            PrepareEncapsulatedNormalClass( iData->iLanguageVector[count] );
            chunksN++;
            }
        }

    chunksNPos.Go( this );
    WriteInt( chunksN );
    chunksNPos.Back( this );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareTargetDevice( const wchar_t* aDeviceName )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 14 );          // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 1*2 );
    WriteUint16( wcslen( aDeviceName ) );

    for( unsigned int i=0; i<wcslen( aDeviceName ); i++ )
        {
        AppendBytes( 2 );
        WriteUint16( aDeviceName[i] );
        }

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareName( const short int aLanguage, const wchar_t* aName )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 1 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 2*2 );
    WriteInt16( aLanguage );
    WriteUint16( wcslen( aName ) );

    for( unsigned int i=0; i<wcslen( aName ); i++ )
        {
        AppendBytes( 2 );
        WriteUint16( aName[i] );
        }

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareInformation()
    {
    TPos startPos( this );
    unsigned int i;

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 11 );          // Type
    WriteUint16( 2 );           // Version

    AppendBytes( 2*4 );

	struct timeval sysTime;
	gettimeofday( &sysTime, NULL);
	// 100-nanosecond
	unsigned long long currentTime;
	// get the 100-nanosecond number at time of UTC
	currentTime = ( sysTime.tv_usec + mktime(gmtime(&sysTime.tv_sec)) * SEC_TO_USEC ) * USEC_TO_100NANOSEC;

	unsigned int highPart = static_cast<unsigned int>((currentTime >> 32) );
	unsigned int lowPart = static_cast<unsigned int>( currentTime );

    WriteInt( highPart );
    WriteInt( lowPart );

    AppendBytes( 2*4 );
    WriteInt( (gVersionMajor<<16) | gVersionMinor );
    WriteInt( 0 );

    AppendBytes( 1*2 );
    WriteUint16( wcslen( iData->iAuthor ) );
    for( i=0; i<wcslen( iData->iAuthor ); i++ )
        {
        AppendBytes( 2 );
        WriteUint16( iData->iAuthor[i] );
        }

    AppendBytes( 1*2 );
    WriteUint16( wcslen( iData->iCopyright ) );
    for( i=0; i<wcslen( iData->iCopyright ); i++ )
        {
        AppendBytes( 2 );
        WriteUint16( iData->iCopyright[i] );
        }

    AppendBytes( 2*1 );
    WriteByte( gPlatformMajor );
    WriteByte( gPlatformMinor );

    AppendBytes( 1*2 );
    WriteUint16( wcslen( iData->iTool ) );
    for( i=0; i<wcslen( iData->iTool ); i++ )
        {
        AppendBytes( 2 );
        WriteUint16( iData->iTool[i] );
        }

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareLanguageOverride( const unsigned char aOverrideType, const TSDCPID aOverridePid )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 9 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 1*1 + 2*4 );
    WriteByte( aOverrideType );
    WriteInt( aOverridePid.iPID1 );
    WriteInt( aOverridePid.iPID2 );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareWallpaper( const unsigned char aWpType, const TSDCBitmapDef* aBitmapDef )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 10 );          // Type
    WriteUint16( 1 );           // Version

    char buf[512];
    strcpy( buf, iBaseName );
    strcat( buf, ".mbm" );

    AppendBytes( 1*1 + 1*2 );
    WriteByte( aWpType );
    WriteUint16( strlen( buf ) );

    for( unsigned int i=0; i<strlen( buf ); i++ )
        {
        AppendBytes( 2 );
        WriteUint16( (short int)buf[i] );
        }

    AppendBytes( 1*4 );
    WriteInt( aBitmapDef->iMBMIndex );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareFilename( const int aId, const char* aFilename )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 2 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 1*4 + 1*2 );
    WriteInt( aId );
    WriteUint16( strlen( aFilename ) );

    for( unsigned int i=0; i<strlen( aFilename ); i++ )
        {
        AppendBytes( 2 );
        WriteUint16( (short int)aFilename[i] );
        }

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareEncapsulatedNormalClass( const int aRestriction )
    {
    TPos restStartPos( this );
    if( aRestriction )
        {
        AppendBytes( 1*4 + 2*2 );
        WriteUint( 0 );             // Length

        if( aRestriction==0x0206 )
            {
            // 2.6 release restriction
            WriteUint16( 13 );          // Type
            WriteUint16( 1 );           // Version

            AppendBytes( 2*1 );
            WriteByte( (aRestriction&0xff00) >> 8 );    // PlatformMajor
            WriteByte( aRestriction&0xff );             // PlatformMinor
            }
        else if( aRestriction<0x0010000 )
            {
            // Only generic release restriction
            WriteUint16( 18 );          // Type
            WriteUint16( 1 );           // Version

            AppendBytes( 2*1 );
            WriteByte( (aRestriction&0xff00) >> 8 );    // PlatformMajor
            WriteByte( aRestriction&0xff );             // PlatformMinor

            AppendBytes( 2*4 );
            WriteInt( 0 );      // Reserved1
            WriteInt( 0 );      // Reserved2
            }
        else if (aRestriction>=0x30000)
            {
            // language restriction
            WriteUint16( 15 );          // Type
            WriteUint16( 1 );           // Version

            AppendBytes( 2*2 );
            WriteUint16( 0 ) ; // GeneralR
            WriteUint16( aRestriction&0xffff );         // LanguageR
            }
        else
            {
            // Layout restriction
            WriteUint16( 15 );          // Type
            WriteUint16( 1 );           // Version

            AppendBytes( 2*2 );
            WriteUint16( (aRestriction&0xffff0000) >> 16 ); // GeneralR
            WriteUint16( 0 );                               // LanguageR
            }

        AppendBytes( 1*4 );
        WriteInt( 1 );              // ChunksN
        }

    PrepareNormalClass( aRestriction );

    if( aRestriction )
        {
        AppendBytes( 1*1 );
        WriteByte( 0xf5 );

        restStartPos.Go( this );
        WriteUint( restStartPos.BackwardsDelta() );
        restStartPos.Back( this );
        }
    }

void CSDCBinOutput::PrepareNormalClass( const int aRestriction )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 3 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 1*1 );
    WriteByte( 0 );             // Class

    int chunksN = 0;
    AppendBytes( 1*4 );
    TPos chunksNPos( this );
    WriteInt( 0 );              // ChunksN

    unsigned int i;
    for( i=0; i<iData->iBitmapDefVector.size(); i++ )
        {
        if( iData->iBitmapDefVector[i]->iRestriction != aRestriction ) continue;

        if( (iData->iBitmapDefVector[i]->iAppIconBitmap==false) || iData->IsScalable() )
            {
            PrepareBitmap( iData->iBitmapDefVector[i] );
            chunksN++;
            }
        }
    if( iData->IsScalable() ) for( i=0; i<iData->iAppIconDefVector.size(); i++ )
        {
        TSDCAppIconDef* entry = iData->iAppIconDefVector[i];

        if( entry->iRestriction != aRestriction ) continue;

        TSDCImageAttributes attributes;
        attributes.iAttributeFlags = ESDCImageAttributeNone;
        attributes.iAlignmentFlags = ESDCImageAlignNone;
        attributes.iCoordX = 0;
        attributes.iCoordY = 0;
        attributes.iSizeW = 0;
        attributes.iSizeH = 0;
        PrepareImageTable( entry->iIID, entry->iIcons, attributes );
        chunksN++;
        }
    for( i=0; i<iData->iFrameDefVector.size(); i++ )
        {
        TSDCFrameDef* entry = iData->iFrameDefVector[i];

        if( entry->iRestriction != aRestriction ) continue;

        TSDCImageAttributes attributes;
        attributes.iAttributeFlags = ESDCImageAttributeNone;
        attributes.iAlignmentFlags = ESDCImageAlignNone;
        attributes.iCoordX = 0;
        attributes.iCoordY = 0;
        attributes.iSizeW = 0;
        attributes.iSizeH = 0;
        PrepareImageTable( entry->iIID, entry->iElements, attributes );
        chunksN++;
        }
    for( i=0; i<iData->iColorTableDefVector.size(); i++ )
        {
        if( iData->iColorTableDefVector[i]->iRestriction != aRestriction ) continue;

        PrepareColorTable( iData->iColorTableDefVector[i] );
        chunksN++;
        }
    for( i=0; i<iData->iBmpAnimDefVector.size(); i++ )
        {
        if( iData->iBmpAnimDefVector[i]->iRestriction != aRestriction ) continue;

        TSDCImageAttributes attributes;
        attributes.iAttributeFlags = ESDCImageAttributeNone;
        attributes.iAlignmentFlags = ESDCImageAlignNone;
        attributes.iCoordX = 0;
        attributes.iCoordY = 0;
        attributes.iSizeW = 0;
        attributes.iSizeH = 0;
        PrepareBmpAnim( iData->iBmpAnimDefVector[i], attributes );
        chunksN++;
        }
    for( i=0; i<iData->iStringDefVector.size(); i++ )
        {
        if( iData->iStringDefVector[i]->iRestriction != aRestriction ) continue;

        PrepareString( iData->iStringDefVector[i] );
        chunksN++;
        }
    if( iData->IsScalable() ) for( i=0; i<iData->iScalableItemDefVector.size(); i++ )
        {
        if( iData->iScalableItemDefVector[i]->iRestriction != aRestriction ) continue;

        PrepareScalableItem( iData->iScalableItemDefVector[i] );
        chunksN++;
        }
    if( iData->IsScalable() ) for( i=0; i<iData->iAnimationDefVector.size(); i++ )
        {
        if( iData->iAnimationDefVector[i]->iRestriction != aRestriction ) continue;

        PrepareAnimation( iData->iAnimationDefVector[i] );
        chunksN++;
        }

    chunksNPos.Go( this );
    WriteInt( chunksN );
    chunksNPos.Back( this );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareAppIconClass()
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 3 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 1*1 );
    WriteByte( 1 );             // Class

    int chunksN = 0;
    AppendBytes( 1*4 );
    TPos chunksNPos( this );
    WriteInt( 0 );              // ChunksN

    unsigned int i;
    for( i=0; i<iData->iBitmapDefVector.size(); i++ )
        {
        if( iData->iBitmapDefVector[i]->iAppIconBitmap == true )
            {
            if( iData->iBitmapDefVector[i]->iRestriction )
                throw CSDCException( ESDCContentError, "Application icon bitmap contains restrictions" );
            PrepareBitmap( iData->iBitmapDefVector[i] );
            chunksN++;
            }
        }
    for( i=0; i<iData->iAppIconDefVector.size(); i++ )
        {
        TSDCAppIconDef* entry = iData->iAppIconDefVector[i];
        if( entry->iRestriction )
            throw CSDCException( ESDCContentError, "Application icon contains restrictions" );
        TSDCImageAttributes attributes;
        attributes.iAttributeFlags = ESDCImageAttributeNone;
        attributes.iAlignmentFlags = ESDCImageAlignNone;
        attributes.iCoordX = 0;
        attributes.iCoordY = 0;
        attributes.iSizeW = 0;
        attributes.iSizeH = 0;
        PrepareImageTable( entry->iIID, entry->iIcons, attributes );
        chunksN++;
        }

    chunksNPos.Go( this );
    WriteInt( chunksN );
    chunksNPos.Back( this );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareBitmap( const TSDCBitmapDef* aBitmapDef )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 4 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 5*4 );
    WriteInt( aBitmapDef->iIID.iMajor );
    WriteInt( aBitmapDef->iIID.iMinor );
    if( aBitmapDef->iMBMIndex>=16384 )
        {
        WriteInt( 1 );              // FilenameID
        }
    else
        {
        WriteInt( 0 );              // FilenameID
        }
    WriteInt( aBitmapDef->iMBMIndex );
    WriteInt( aBitmapDef->iMaskMBMIndex );

    PrepareAttributes( aBitmapDef->iAttributes );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareColorTable( const TSDCColorTableDef* aColorTableDef )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 5 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 2*4 + 1*1 );
    WriteInt( aColorTableDef->iIID.iMajor );
    WriteInt( aColorTableDef->iIID.iMinor );
    WriteByte( aColorTableDef->iColors.size() );

    for( unsigned int i=0; i<aColorTableDef->iColors.size(); i++ )
        {
        AppendBytes( 1*2 + 1*4 );
        WriteInt16( (short int)aColorTableDef->iColors[i].iIndex );
        WriteUint( aColorTableDef->iColors[i].iRgb );
        }

    TSDCImageAttributes attributes;
    attributes.iAttributeFlags = ESDCImageAttributeNone;
    if( iData->IsScalable() ) {
        attributes.iAttributeFlags |= ESDCImageAttributeNBC;
        }
    attributes.iAlignmentFlags = ESDCImageAlignNone;
    attributes.iCoordX = 0;
    attributes.iCoordY = 0;
    attributes.iSizeW = 0;
    attributes.iSizeH = 0;
    PrepareAttributes( attributes );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareBmpAnim( const TSDCBmpAnimDef* aBmpAnimDef, const TSDCImageAttributes& aAttributes )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 8 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 2*4 + 1*2 + 3*1 );
    WriteInt( aBmpAnimDef->iIID.iMajor );
    WriteInt( aBmpAnimDef->iIID.iMinor );
    WriteInt16( (short int)aBmpAnimDef->iInterval );
    WriteByte( (unsigned char)aBmpAnimDef->iPlayMode );
    WriteByte( (unsigned char)aBmpAnimDef->iFlash );
    WriteByte( (unsigned char)aBmpAnimDef->iFrames.size() );

    for( unsigned int i=0; i<aBmpAnimDef->iFrames.size(); i++ )
        {
        AppendBytes( 2*4 + 3*2 );
        WriteInt( aBmpAnimDef->iFrames[i].iIID.iMajor );
        WriteInt( aBmpAnimDef->iFrames[i].iIID.iMinor );
        WriteInt16( (short int)aBmpAnimDef->iFrames[i].iTime );
        WriteInt16( (short int)aBmpAnimDef->iFrames[i].iPosX );
        WriteInt16( (short int)aBmpAnimDef->iFrames[i].iPosY );
        }

    PrepareAttributes( aAttributes );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareString( const TSDCStringDef* aStringDef )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 12 );          // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 2*4 + 1*2 );
    WriteInt( aStringDef->iIID.iMajor );
    WriteInt( aStringDef->iIID.iMinor );
    WriteUint16( wcslen( aStringDef->iString ) );

    for( unsigned int i=0; i<wcslen( aStringDef->iString ); i++ )
        {
        AppendBytes( 2 );
        WriteUint16( aStringDef->iString[i] );
        }

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareScalableItem( const TSDCScalableItemDef* aItemDef )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 16 );          // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 2*4 );
    WriteInt( aItemDef->iIID.iMajor );
    WriteInt( aItemDef->iIID.iMinor );

    AppendBytes( 2*4 );
    WriteInt( aItemDef->iRefIID.iMajor );
    WriteInt( aItemDef->iRefIID.iMinor );

    AppendBytes( 2*1 );
    WriteByte( (aItemDef->iInput&0xff00) >> 8 );
    WriteByte( aItemDef->iInput&0xff );

    AppendBytes( 2*1 );
    WriteByte( (aItemDef->iOutput&0xff00) >> 8 );
    WriteByte( aItemDef->iOutput&0xff );

    AppendBytes( 1*4 );
    WriteUint( 0 );             // Reserved

    AppendBytes( 1*2 );
    WriteUint16( aItemDef->iCommands.size() );

    for( unsigned int i=0; i<aItemDef->iCommands.size(); i++ )
        {
        PrepareEffectCommand( aItemDef->iCommands[i] );
        }

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareAnimation( const TSDCAnimationDef* aItemDef )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 19 );          // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 2*4 );
    WriteInt( aItemDef->iIID.iMajor );
    WriteInt( aItemDef->iIID.iMinor );

    AppendBytes( 2*4 );
    if( aItemDef->iMorphing )
        {
        WriteByte( 1 );
        }
    else
        {
        WriteByte( 0 );
        }
    WriteByte( 0 );             // Reserved
    WriteUint16( 0 );           // Reserved
    WriteInt( 0 );              // Reserved

    AppendBytes( 2*1 );
    WriteByte( (aItemDef->iInput&0xff00) >> 8 );
    WriteByte( aItemDef->iInput&0xff );

    AppendBytes( 2*1 );
    WriteByte( (aItemDef->iOutput&0xff00) >> 8 );
    WriteByte( aItemDef->iOutput&0xff );

    AppendBytes( 1*4 );
    WriteUint( aItemDef->iMinInterval );

    AppendBytes( 1*2 );
    WriteUint16( aItemDef->iPreprocessCommands.size() );
    unsigned int i;
    for( i=0; i<aItemDef->iPreprocessCommands.size(); i++ )
        {
        PrepareEffectCommand( aItemDef->iPreprocessCommands[i] );
        }

    AppendBytes( 1*2 );
    WriteUint16( aItemDef->iAnimCommands.size() );
    for( i=0; i<aItemDef->iAnimCommands.size(); i++ )
        {
        PrepareEffectCommand( aItemDef->iAnimCommands[i] );
        }

    AppendBytes( 1*2 );
    WriteUint16( aItemDef->iValues.size() );
    for( i=0; i<aItemDef->iValues.size(); i++ )
        {
        PrepareAnimParamGroup( aItemDef->iValues[i] );
        }

    AppendBytes( 1*2 );
    WriteUint16( aItemDef->iTimingModels.size() );
    for( i=0; i<aItemDef->iTimingModels.size(); i++ )
        {
        PrepareAnimParamGroup( aItemDef->iTimingModels[i] );
        }

    AppendBytes( 1*2 );
    WriteUint16( aItemDef->iSizeBoundParams.size() );
    for( i=0; i<aItemDef->iSizeBoundParams.size(); i++ )
        {
        PrepareAnimParamGroup( aItemDef->iSizeBoundParams[i] );
        }

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareImageTable( const TSDCIID& aIID, const vector<TSDCIID> aImages, const TSDCImageAttributes& aAttributes )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 6 );           // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 2*4 + 1*1 );
    WriteInt( aIID.iMajor );
    WriteInt( aIID.iMinor );
    WriteByte( (unsigned char)aImages.size() );

    for( unsigned int i=0; i<aImages.size(); i++ )
        {
        AppendBytes( 2*4 );
        WriteInt( aImages[i].iMajor );
        WriteInt( aImages[i].iMinor );
        }

    PrepareAttributes( aAttributes );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareAttributes( const TSDCImageAttributes& aAttributes )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 7 );           // Type
    WriteUint16( 2 );           // Version

    AppendBytes( 2*1 + 4*2 );
    WriteByte( (unsigned char)(aAttributes.iAttributeFlags&0xff) );
    WriteByte( (unsigned char)(aAttributes.iAlignmentFlags&0xff) );
    WriteInt16( (short int)aAttributes.iCoordX );
    WriteInt16( (short int)aAttributes.iCoordY );
    WriteInt16( (short int)aAttributes.iSizeW );
    WriteInt16( (short int)aAttributes.iSizeH );

    AppendBytes( 1*2 + 1*4 );
    WriteUint16( (unsigned short)((aAttributes.iAttributeFlags&0xffff00)>>8) );
    WriteUint( 0 );             // Reserved

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareParamVector( const vector<TSDCEffectParameter>& aParameters )
    {
    for( unsigned int i=0; i<aParameters.size(); i++ )
        {
        int type = aParameters[i].iType;

        TPos paramPos( this );

        AppendBytes( 1*2 + 1*1 );
        WriteUint16( 0 );   // ParamLength
        WriteByte( 0 );     // Reserved

        if( type == 0 || type == 3 )
            {
            AppendBytes( 1*1 );
            WriteByte( type );  // ParamType
            }
        else if( type == 1 || type == 4 ) // String or raw data
            {
            AppendBytes( 1*1 );
            WriteByte( 1 );     // ParamType
            }
        else if( type == 2 )
            {
            AppendBytes( 1*1 );
            WriteByte( 2 );     // ParamType
            }
        else
            {
            throw CSDCException( ESDCContentError, "Unknown parameter type in scalable item effect" );
            }

        AppendBytes( 1*2 );
        WriteUint16( wcslen(aParameters[i].iName) ); // ParamNameLen

        for( unsigned int b=0; b<wcslen(aParameters[i].iName); b++ )
            {
            AppendBytes( 1*2 );
            WriteUint16( aParameters[i].iName[b] );
            }

        if( type == 0 || type == 3 ) // Number or named reference
            {
            AppendBytes( 1*4 );
            WriteInt( aParameters[i].iNumber );
            }
        else if( type == 1 ) // String
            {
            AppendBytes( 1*2 );
            WriteUint16( wcslen(aParameters[i].iString) );

            for( unsigned int a=0; a<wcslen(aParameters[i].iString); a++ )
                {
                AppendBytes( 1*2 );
                WriteUint16( aParameters[i].iString[a] );
                }
            }
        else if( type == 2 ) // Graphics
            {
            AppendBytes( 3*4 );
            WriteInt( aParameters[i].iBmpIndex );
            WriteInt( aParameters[i].iMaskIndex );
            if( aParameters[i].iBmpIndex>=16384 )
                {
                WriteInt( 1 );      // FilenameID
                }
            else
                {
                WriteInt( 0 );      // FilenameID
                }
            }
        else if( type == 4 ) // Raw data
            {
            AppendBytes( 1*2 );
            WriteUint16( aParameters[i].iRawDataCount );

            for( int a=0; a<aParameters[i].iRawDataCount; a++ )
                {
                AppendBytes( 1*2 );
                WriteUint16( aParameters[i].iString[a] );
                }
            }

        paramPos.Go( this );
        WriteUint16( paramPos.BackwardsDelta() );
        paramPos.Back( this );
        }
    }

void CSDCBinOutput::PrepareEffectCommand( const TSDCEffectCommand& aCommand )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 17 );          // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 1*4 );
    WriteInt( aCommand.iUid );

    AppendBytes( 6*1 );
    WriteByte( (aCommand.iInputA&0xff00) >> 8 );
    WriteByte( aCommand.iInputA&0xff );
    WriteByte( (aCommand.iInputB&0xff00) >> 8 );
    WriteByte( aCommand.iInputB&0xff );
    WriteByte( (aCommand.iOutput&0xff00) >> 8 );
    WriteByte( aCommand.iOutput&0xff );

    AppendBytes( 1*2 );
    WriteUint16( aCommand.iParameters.size() );

    PrepareParamVector( aCommand.iParameters );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::PrepareAnimParamGroup( const TSDCAnimParamGroup& aParamGroup )
    {
    TPos startPos( this );

    AppendBytes( 1*4 + 2*2 );
    WriteUint( 0 );             // Length
    WriteUint16( 20 );          // Type
    WriteUint16( 1 );           // Version

    AppendBytes( 1*4 );
    WriteUint( aParamGroup.iValueA );

    AppendBytes( 1*4 );
    WriteUint( aParamGroup.iValueB );

    AppendBytes( 1*2 );
    WriteUint16( aParamGroup.iParameters.size() );

    PrepareParamVector( aParamGroup.iParameters );

    AppendBytes( 1*1 );
    WriteByte( 0xf5 );

    startPos.Go( this );
    WriteUint( startPos.BackwardsDelta() );
    startPos.Back( this );
    }

void CSDCBinOutput::AppendBytes( const int aNumberOfBytes )
    {
    for( int i=0; i<aNumberOfBytes; i++ )
        iOutputVector.push_back(0);
    }

void CSDCBinOutput::WriteByte( const unsigned char aByte )
    {
    iOutputVector.at(iOutputPos++) = aByte;
    }

void CSDCBinOutput::WriteInt( const int aInt )
    {
    WriteUint( (unsigned int)aInt );
    }

void CSDCBinOutput::WriteUint( const unsigned int aUint )
    {
    unsigned char* p = (unsigned char*)(&aUint);
    iOutputVector.at(iOutputPos++) = p[0];
    iOutputVector.at(iOutputPos++) = p[1];
    iOutputVector.at(iOutputPos++) = p[2];
    iOutputVector.at(iOutputPos++) = p[3];
    }

void CSDCBinOutput::WriteInt16( const short int aInt )
    {
    WriteUint16( (unsigned short int)aInt );
    }

void CSDCBinOutput::WriteUint16( const short unsigned int aUint )
    {
    unsigned char* p = (unsigned char*)(&aUint);
    iOutputVector.at(iOutputPos++) = p[0];
    iOutputVector.at(iOutputPos++) = p[1];
    }

// End of file

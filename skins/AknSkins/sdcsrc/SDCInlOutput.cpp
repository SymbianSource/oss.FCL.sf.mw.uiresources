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
* Description:  ?Description
*
*/

#include "SDCGlobals.h"
#include "SDCInlOutput.h"
#include "SDCException.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSDCInlOutput::CSDCInlOutput()
    {

    }

CSDCInlOutput::~CSDCInlOutput()
    {

    }

//////////////////////////////////////////////////////////////////////
// Other methods
//////////////////////////////////////////////////////////////////////

void CSDCInlOutput::Output( CSDCData* aData, const char* aSkinName, const char* aCppFilename, const char* aMmpFilename )
    {
    iData = aData;

    if( iData->iPid.iPID2 != 0 )
        {
        throw CSDCException( ESDCContentError, "System skin must have a UID, no PID is allowed");
        }

    if( iData->iParentPid.iPID2 != 0 )
        {
        throw CSDCException( ESDCContentError, "System override skin must have a parent UID, no PID is allowed");
        }

    if( iData->iAHOverridePid.iPID2 != 0 )
        {
        throw CSDCException( ESDCContentError, "System override skin must have a UID, no PID is allowed");
        }

    int storageUid = iData->iParentPid.iPID1;
    if( storageUid == 0 ) storageUid = iData->iPid.iPID1;

    FILE* file = fopen( aCppFilename, "wt" );
    if( !file ) throw CSDCException( ESDCFileOpenError, "Text output file for CPP generation can not be opened" );

    fprintf( file, "// Generated skin content DLL source file for %s\n", aSkinName );
    fprintf( file, "// Copyright (c) 2003,2004 Nokia. All rights reserved. Confidential.\n");

    fprintf( file, "\n#include <e32std.h>\n" );
    fprintf( file, "#include \"AknsSrvItemDef.h\"\n" );

    fprintf( file, "\n#define AKNS_DTPP(a) {EAknsSrvMPPtrAbsoluteROM,static_cast<const TAny*>(&(a))}\n" );

    fprintf( file, "\n// Skin MBM file\n");
    fprintf( file, "#if defined(AKNS_SDC_NO_CONST_SUPPORT)\n");
    fprintf( file, "#define K%s_Mbm _S(\"z:\\\\system\\\\skins\\\\%08x\\\\%s.mbm\")\n", aSkinName, storageUid, aSkinName );
    fprintf( file, "#else\n");
    fprintf( file, "static const TText* const K%s_Mbm = _S(\"z:\\\\system\\\\skins\\\\%08x\\\\%s.mbm\");\n", aSkinName, storageUid, aSkinName );
    fprintf( file, "#endif\n");

    unsigned int i, a;

    fprintf( file, "\n// Bitmap definitions\n");
    for( i=0; i<iData->iBitmapDefVector.size(); i++ )
        {
        TSDCBitmapDef* entry = iData->iBitmapDefVector[i];

        if( entry->iMaskMBMIndex!=-1 )
            {
            fprintf( file, "static const TAknsSrvMaskedBitmapDef K%s_BitmapDef_%i =\n", aSkinName, i );
            fprintf( file, "    { {EAknsSrvMPPtrAbsoluteROM,K%s_Mbm}, %i, %i, ",
                aSkinName, entry->iMBMIndex, entry->iMaskMBMIndex );
            OutputAttributes( file, entry->iAttributes );
            fprintf( file, " };\n" );
            }
        else
            {
            fprintf( file, "static const TAknsSrvBitmapDef K%s_BitmapDef_%i =\n", aSkinName, i );
            fprintf( file, "    { {EAknsSrvMPPtrAbsoluteROM,K%s_Mbm}, %i, ",
                aSkinName, entry->iMBMIndex );
            OutputAttributes( file, entry->iAttributes );
            fprintf( file, " };\n" );
            }
        }

    fprintf( file, "\n// Color table definitions\n");
    for( i=0; i<iData->iColorTableDefVector.size(); i++ )
        {
        TSDCColorTableDef* entry = iData->iColorTableDefVector[i];

        fprintf( file, "static const TAknsColorTableEntry K%s_ColorTableDef_%i_All[] =\n", aSkinName, i );
        fprintf( file, "    { " );
        for( a=0; a<entry->iColors.size(); a++ )
            {
            if( a!= 0 ) fprintf( file, ", " );
            fprintf( file, "{%i,0x%06x}", entry->iColors[a].iIndex, entry->iColors[a].iRgb );
            }
        fprintf( file, " };\n" );

        fprintf( file, "static const TAknsSrvColorTableDef K%s_ColorTableDef_%i =\n", aSkinName, i );
        fprintf( file, "    { %i, {EAknsSrvMPPtrAbsoluteROM,&K%s_ColorTableDef_%i_All[0]}, ",
            entry->iColors.size(), aSkinName, i );
        TSDCImageAttributes attributes;
        attributes.iAttributeFlags = ESDCImageAttributeNone;
        attributes.iAlignmentFlags = ESDCImageAlignNone;
        attributes.iCoordX = 0;
        attributes.iCoordY = 0;
        attributes.iSizeW = 0;
        attributes.iSizeH = 0;
        OutputAttributes( file, attributes );
        fprintf( file, " };\n" );
        }

    fprintf( file, "\n// Frame definitions\n");
    for( i=0; i<iData->iFrameDefVector.size(); i++ )
        {
        TSDCFrameDef* entry = iData->iFrameDefVector[i];

        fprintf( file, "static const TAknsItemID K%s_FrameDef_%i_All[] = \n", aSkinName, i );
        fprintf( file, "    { " );
        for( a=0; a<entry->iElements.size(); a++ )
            {
            if( a!=0 ) fprintf( file, ", " );
            fprintf( file, "{0x%x,0x%x}", entry->iElements[a].iMajor, entry->iElements[a].iMinor );
            }
        fprintf( file, " };\n" );

        fprintf( file, "static const TAknsSrvImageTableDef K%s_FrameDef_%i = \n", aSkinName, i );
        fprintf( file, "    { %i, {EAknsSrvMPPtrAbsoluteROM,&K%s_FrameDef_%i_All[0]}, ",
            entry->iElements.size(), aSkinName, i );
        TSDCImageAttributes attributes;
        attributes.iAttributeFlags = ESDCImageAttributeNone;
        attributes.iAlignmentFlags = ESDCImageAlignNone;
        attributes.iCoordX = 0;
        attributes.iCoordY = 0;
        attributes.iSizeW = 0;
        attributes.iSizeH = 0;
        OutputAttributes( file, attributes );
        fprintf( file, " };\n" );
        }

    fprintf( file, "\n// Application icon definitions\n");
    for( i=0; i<iData->iAppIconDefVector.size(); i++ )
        {
        TSDCAppIconDef* entry = iData->iAppIconDefVector[i];

        fprintf( file, "static const TAknsItemID K%s_AppIconDef_%i_All[] = \n", aSkinName, i );
        fprintf( file, "    { " );
        for( a=0; a<entry->iIcons.size(); a++ )
            {
            if( a!=0 ) fprintf( file, ", " );
            fprintf( file, "{0x%x,0x%x}", entry->iIcons[a].iMajor, entry->iIcons[a].iMinor );
            }
        fprintf( file, " };\n" );

        fprintf( file, "static const TAknsSrvImageTableDef K%s_AppIconDef_%i = \n", aSkinName, i );
        fprintf( file, "    { %i, {EAknsSrvMPPtrAbsoluteROM,&K%s_AppIconDef_%i_All[0]}, ",
            entry->iIcons.size(), aSkinName, i );
        TSDCImageAttributes attributes;
        attributes.iAttributeFlags = ESDCImageAttributeNone;
        attributes.iAlignmentFlags = ESDCImageAlignNone;
        attributes.iCoordX = 0;
        attributes.iCoordY = 0;
        attributes.iSizeW = 0;
        attributes.iSizeH = 0;
        OutputAttributes( file, attributes );
        fprintf( file, " };\n" );
        }

    fprintf( file, "\n// Bitmap animation definitions\n" );
    for( i=0; i<iData->iBmpAnimDefVector.size(); i++ )
        {
        TSDCBmpAnimDef* entry = iData->iBmpAnimDefVector[i];

        fprintf( file, "static const TAknsItemID K%s_BmpAnimDef_%i_All[] = \n", aSkinName, i );
        fprintf( file, "    { " );
        for( a=0; a<entry->iFrames.size(); a++ )
            {
            if( a!=0 ) fprintf( file, ", " );
            fprintf( file, "{0x%x,0x%x}", entry->iFrames[a].iIID.iMajor, entry->iFrames[a].iIID.iMinor );
            }
        fprintf( file, " };\n" );

        fprintf( file, "static const TAknsBmpAnimFrameInfo K%s_BmpAnimDef_%i_FramesAll[] = \n", aSkinName, i );
        fprintf( file, "    { " );
        for( a=0; a<entry->iFrames.size(); a++ )
            {
            if( a!=0 ) fprintf( file, ", " );
            fprintf( file, "{%i,%i,%i}", entry->iFrames[a].iTime, entry->iFrames[a].iPosX, entry->iFrames[a].iPosY );
            }
        fprintf( file, " };\n" );

        fprintf( file, "static const TAknsSrvBmpAnimDef K%s_BmpAnimDef_%i = \n", aSkinName, i );
        fprintf( file, "    { %i, {EAknsSrvMPPtrAbsoluteROM,&K%s_BmpAnimDef_%i_All[0]}, ",
            entry->iFrames.size(), aSkinName, i );
        fprintf( file, "{EAknsSrvMPPtrAbsoluteROM,&K%s_BmpAnimDef_%i_FramesAll[0]}, ",
            aSkinName, i );
        fprintf( file, "%i, %i, ", entry->iInterval, entry->iPlayMode );
        if( entry->iFlash )
            {
            fprintf( file, "ETrue, " );
            }
        else
            {
            fprintf( file, "EFalse, " );
            }
        fprintf( file, "EFalse, " );
        TSDCImageAttributes attributes;
        attributes.iAttributeFlags = ESDCImageAttributeNone;
        attributes.iAlignmentFlags = ESDCImageAlignNone;
        attributes.iCoordX = 0;
        attributes.iCoordY = 0;
        attributes.iSizeW = 0;
        attributes.iSizeH = 0;
        OutputAttributes( file, attributes );
        fprintf( file, " };\n" );
        }

    fprintf( file, "\n// String definitions\n");
    for( i=0; i<iData->iStringDefVector.size(); i++ )
        {
        TSDCStringDef* entry = iData->iStringDefVector[i];

        char buf[512];
        CSDCInput::ConvertToAsciiWithCPPEscapes( buf, entry->iString );
        fprintf( file, "static const TText* const K%s_String_%i = _S(\"%s\");\n", aSkinName, i, buf );

        fprintf( file, "static const TAknsSrvStringDef K%s_StringDef_%i =\n", aSkinName, i );
        fprintf( file, "    { {EAknsSrvMPPtrAbsoluteROM,K%s_String_%i} ", aSkinName, i );
        fprintf( file, " };\n" );
        }

    OutputClassList( file, false, aSkinName );

    if( iData->iAppIconDefVector.size() > 0 ) OutputClassList( file, true, aSkinName );

    fprintf( file, "\nstatic const TAknsSrvSkinDef K%s_MasterTable =\n", aSkinName );
    fprintf( file, "    { { 0x%x , 0x%x }, &K%s_BitmapClass, ", iData->iPid.iPID1, iData->iPid.iPID2, aSkinName );
    if( iData->iAppIconDefVector.size() > 0 )
        {
        fprintf( file, "&K%s_AppIconClass, ", aSkinName );
        }
    else
        {
        fprintf( file, "0, " );
        }
    fprintf( file, "0, { 0x%x , 0x%x }, { 0x%x , 0x%x } };\n", iData->iPalettePid.iPID1, iData->iPalettePid.iPID2, iData->iAHOverridePid.iPID1, iData->iAHOverridePid.iPID2 );

    fprintf( file, "\nIMPORT_C const TAny* MasterTable();\n" );
    fprintf( file, "EXPORT_C const TAny* MasterTable()\n" );
    fprintf( file, "    { return &K%s_MasterTable; }\n", aSkinName );

    fprintf( file, "\nGLDEF_C TInt E32Dll(TDllReason /*aReason*/)\n" );
    fprintf( file, "    { return KErrNone; }\n" );

    fprintf( file, "\n// End of file\n");

    fclose( file );
    file = NULL;

    file = fopen( aMmpFilename, "wt" );
    if( !file ) throw CSDCException( ESDCFileOpenError, "Text output file for MMP generation can not be opened" );

    fprintf( file, "// Generated skin content DLL project file for %s\n", aSkinName );
    fprintf( file, "// Copyright (c) 2003,2004 Nokia. All rights reserved. Confidential.\n");

    fprintf( file, "\nTARGETPATH system\\skins\\%08x\n", storageUid );
    fprintf( file, "TARGET %08x.dll\n", iData->iPid.iPID1 );
    fprintf( file, "TARGETTYPE DLL\n" );
    fprintf( file, "UID 0x10005A26 0x%x\n", iData->iPid.iPID1 );

    fprintf( file, "\nCAPABILITY CAP_GENERAL_DLL\n" );

    fprintf( file, "\nUSERINCLUDE \\s60\\AknSkins\\srvinc\n" );
    fprintf( file, "#include <platform_paths.hrh>\nMW_LAYER_SYSTEMINCLUDE\n" );
		fprintf( file, "SYSTEMINCLUDE \\epoc32\\include\\oem\n" );
		
    fprintf( file, "\nLIBRARY euser.lib\n" );

    fprintf( file, "\nSOURCE %s_ContentDLL.cpp\n", aSkinName );
    fprintf( file, "\n#if defined(ARMCC)\n" );
    fprintf( file, "MACRO AKNS_SDC_NO_CONST_SUPPORT\n" );
    fprintf( file, "#endif\n" );

    fprintf( file, "\n// End of file\n");

    fclose( file );
    }

void CSDCInlOutput::OutputAttributes( FILE* aFile, const TSDCImageAttributes& aAttributes )
    {
    fprintf( aFile, "%i, %i, %i, %i, %i, %i", aAttributes.iAttributeFlags, aAttributes.iAlignmentFlags,
        aAttributes.iCoordX, aAttributes.iCoordY, aAttributes.iSizeW, aAttributes.iSizeH );
    }

void CSDCInlOutput::OutputClassList( FILE* aFile, const bool aAppIconClass, const char* aSkinName )
    {
    const char* className = "BitmapClass";
    if( aAppIconClass ) className = "AppIconClass";

    fprintf( aFile, "\n// Class content list\n");
    int entries = 0;
    fprintf( aFile, "static const TAknsSrvDef K%s_%s_All[] = {\n", aSkinName, className );

    unsigned int i;
    for( i=0; i<iData->iBitmapDefVector.size(); i++ )
        {
        TSDCBitmapDef* entry = iData->iBitmapDefVector[i];

        if( entry->iAppIconBitmap == aAppIconClass )
            {
            if( entry->iMaskMBMIndex!=-1 )
                {
                fprintf( aFile, "    { {0x%x,0x%x}, EAknsITMaskedBitmap, AKNS_DTPP(K%s_BitmapDef_%i) },\n",
                    entry->iIID.iMajor, entry->iIID.iMinor, aSkinName, i );
                entries++;
                }
            else
                {
                fprintf( aFile, "    { {0x%x,0x%x}, EAknsITBitmap, AKNS_DTPP(K%s_BitmapDef_%i) },\n",
                    entry->iIID.iMajor, entry->iIID.iMinor, aSkinName, i );
                entries++;
                }
            }
        }

    if( aAppIconClass )
        {
        for( i=0; i<iData->iAppIconDefVector.size(); i++ )
            {
            TSDCAppIconDef* entry = iData->iAppIconDefVector[i];

            fprintf( aFile, "    { {0x%x,0x%x}, EAknsITImageTable, AKNS_DTPP(K%s_AppIconDef_%i) },\n",
                entry->iIID.iMajor, entry->iIID.iMinor, aSkinName, i );
            entries++;
            }
        }
    else
        {
        for( i=0; i<iData->iColorTableDefVector.size(); i++ )
            {
            TSDCColorTableDef* entry = iData->iColorTableDefVector[i];

            fprintf( aFile, "    { {0x%x,0x%x}, EAknsITColorTable, AKNS_DTPP(K%s_ColorTableDef_%i) },\n",
                entry->iIID.iMajor, entry->iIID.iMinor, aSkinName, i );
            entries++;
            }

        for( i=0; i<iData->iFrameDefVector.size(); i++ )
            {
            TSDCFrameDef* entry = iData->iFrameDefVector[i];

            fprintf( aFile, "    { {0x%x,0x%x}, EAknsITImageTable, AKNS_DTPP(K%s_FrameDef_%i) },\n",
                entry->iIID.iMajor, entry->iIID.iMinor, aSkinName, i );
            entries++;
            }

        for( i=0; i<iData->iBmpAnimDefVector.size(); i++ )
            {
            TSDCBmpAnimDef* entry = iData->iBmpAnimDefVector[i];

            fprintf( aFile, "    { {0x%x,0x%x}, EAknsITBmpAnim, AKNS_DTPP(K%s_BmpAnimDef_%i) },\n",
                entry->iIID.iMajor, entry->iIID.iMinor, aSkinName, i );
            entries++;
            }

        for( i=0; i<iData->iStringDefVector.size(); i++ )
            {
            TSDCStringDef* entry = iData->iStringDefVector[i];

            fprintf( aFile, "    { {0x%x,0x%x}, EAknsITString, AKNS_DTPP(K%s_StringDef_%i) },\n",
                entry->iIID.iMajor, entry->iIID.iMinor, aSkinName, i );
            entries++;
            }
        }

    fprintf( aFile, "    };\n" );
    fprintf( aFile, "static const TAknsSrvClassDef K%s_%s = { &K%s_%s_All[0], %i };\n", aSkinName, className, aSkinName, className, entries );
    }

// End of file

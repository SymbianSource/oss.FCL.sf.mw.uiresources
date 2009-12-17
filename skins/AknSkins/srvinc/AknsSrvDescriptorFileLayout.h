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
* Description:  Descriptor file layout enumerations.
*
*/


#ifndef AKNSSRVDESCRIPTORFILELAYOUT_H
#define AKNSSRVDESCRIPTORFILELAYOUT_H

// CONSTANTS

enum TAknsSkinDescChunkType
    {
    EAknsSkinDescSkinDesc                   = 0,
    EAknsSkinDescName                       = 1,
    EAknsSkinDescFilename                   = 2,
    EAknsSkinDescSkinDescClass              = 3,
    EAknsSkinDescSkinDescBmpItemDef         = 4,
    EAknsSkinDescSkinDescColorTblItemDef    = 5,
    EAknsSkinDescSkinDescImgTblItemDef      = 6,
    EAknsSkinDescSkinDescImgAttributes      = 7,
    EAknsSkinDescSkinDescImgBmpAnim         = 8,
    EAknsSkinDescSkinDescImgLangOverride    = 9,
    EAknsSkinDescWallpaper                  = 10,
    EAknsSkinDescInformation                = 11,
    EAknsSkinDescSkinDescStringItemDef      = 12,
    EAknsSkinDescRelease26                  = 13,
    EAknsSkinDescTargetDevice               = 14,
    EAknsSkinDescLanguage                   = 15,
    EAknsSkinDescEffectQueue                = 16,
    EAknsSkinDescEffect                     = 17,
    EAknsSkinDescReleaseGeneric             = 18,
    EAknsSkinDescAnimation                  = 19,
    EAknsskinDescAnimationParamGroup        = 20
    };

enum TAknsSrvDescriptorFileOffset
    {
    EAknsSrvDFOCommonLength         = 0,
    EAknsSrvDFOCommonType           = 4,
    EAknsSrvDFOCommonVersion        = 6,

    EAknsSrvDFOSkinSkinPID1         = 8,
    EAknsSrvDFOSkinSkinPID2         = 12,
    EAknsSrvDFOSkinSkinCF           = 16,
    EAknsSrvDFOSkinSkinType         = 20,
    EAknsSrvDFOSkinColorSchemePID1  = 22,
    EAknsSrvDFOSkinColorSchemePID2  = 26,
    EAknsSrvDFOSkinProtection       = 30,
    EAknsSrvDFOSkinContentFlags     = 31,
    EAknsSrvDFOSkinReserved2        = 32,
    EAknsSrvDFOSkinReserved3        = 34,
    EAknsSrvDFOSkinChunksN          = 38,
    EAknsSrvDFOSkinContent          = 42,

    EAknsSrvDFONameLanguage         = 8,
    EAknsSrvDFONameNameLen          = 10,
    EAknsSrvDFONameName             = 12,

    EAknsSrvDFOFilenameFilenameID   = 8,
    EAknsSrvDFOFilenameLen          = 12,
    EAknsSrvDFOFilenameFilename     = 14,

    EAknsSrvDFOClassClass           = 8,
    EAknsSrvDFOClassChunksN         = 9,
    EAknsSrvDFOClassContent         = 13,

    EAknsSrvDFOBitmapMajor          = 8,
    EAknsSrvDFOBitmapMinor          = 12,
    EAknsSrvDFOBitmapFilenameID     = 16,
    EAknsSrvDFOBitmapBitmapIndex    = 20,
    EAknsSrvDFOBitmapMaskIndex      = 24,
    EAknsSrvDFOBitmapAttributes     = 28,

    EAknsSrvDFOColorTableMajor      = 8,
    EAknsSrvDFOColorTableMinor      = 12,
    EAknsSrvDFOColorTableColorsN    = 16,
    EAknsSrvDFOColorTableColorIndex0= 17,
    EAknsSrvDFOColorTableColorRgb0  = 19,
    EAknsSrvDFOColorTableColorSize  = 6,

    EAknsSrvDFOImageTableMajor      = 8,
    EAknsSrvDFOImageTableMinor      = 12,
    EAknsSrvDFOImageTableImagesN    = 16,
    EAknsSrvDFOImageTableImageMajor0= 17,
    EAknsSrvDFOImageTableImageMinor0= 21,
    EAknsSrvDFOImageTableImageSize  = 8,

    EAknsSrvDFOBmpAnimMajor         = 8,
    EAknsSrvDFOBmpAnimMinor         = 12,
    EAknsSrvDFOBmpAnimInterval      = 16,
    EAknsSrvDFOBmpAnimPlayMode      = 18,
    EAknsSrvDFOBmpAnimFlash         = 19,
    EAknsSrvDFOBmpAnimFramesN       = 20,
    EAknsSrvDFOBmpAnimFrameMajor0   = 21,
    EAknsSrvDFOBmpAnimFrameMinor0   = 25,
    EAknsSrvDFOBmpAnimFrameTime0    = 29,
    EAknsSrvDFOBmpAnimFramePosX0    = 31,
    EAknsSrvDFOBmpAnimFramePosY0    = 33,
    EAknsSrvDFOBmpAnimFrameSize     = 14,

    EAknsSrvDFOLangOverrideType             = 8,
    EAknsSrvDFOLangOverridePID1             = 9,
    EAknsSrvDFOLangOverridePID2             = 13,

    EAknsSrvDFOAttributesAttributeFlags     = 8,
    EAknsSrvDFOAttributesAlignment          = 9,
    EAknsSrvDFOAttributesCoordX             = 10,
    EAknsSrvDFOAttributesCoordY             = 12,
    EAknsSrvDFOAttributesSizeW              = 14,
    EAknsSrvDFOAttributesSizeH              = 16,
    EAknsSrvDFOAttributesExtAttributeFlags  = 18,
    EAknsSrvDFOAttributesReserved           = 20,

    EAknsSrvDFOWallpaperWallpaperType       = 8,
    EAknsSrvDFOWallpaperFilenameLen         = 9,
    EAknsSrvDFOWallpaperFilename            = 11,

    EAknsSrvDFOStringMajor                  = 8,
    EAknsSrvDFOStringMinor                  = 12,
    EAknsSrvDFOStringStringLen              = 16,
    EAknsSrvDFOStringString                 = 18,

    EAknsSrvDFOEffectQueueMajor             = 8,
    EAknsSrvDFOEffectQueueMinor             = 12,
    EAknsSrvDFOEffectQueueRefMajor          = 16,
    EAknsSrvDFOEffectQueueRefMinor          = 20,
    EAknsSrvDFOEffectQueueInputLayerIndex   = 24,
    EAknsSrvDFOEffectQueueInputLayerMode    = 25,
    EAknsSrvDFOEffectQueueOutputLayerIndex  = 26,
    EAknsSrvDFOEffectQueueOutputLayerMode   = 27,
    EAknsSrvDFOEffectQueueEffectCount       = 32,
    EAknsSrvDFOEffectQueueEffects           = 34,

    EAknsSrvDFOEffectUID                    = 8,
    EAknsSrvDFOEffectInputLayerAIndex       = 12,
    EAknsSrvDFOEffectInputLayerAMode        = 13,
    EAknsSrvDFOEffectInputLayerBIndex       = 14,
    EAknsSrvDFOEffectInputLayerBMode        = 15,
    EAknsSrvDFOEffectOutputLayerIndex       = 16,
    EAknsSrvDFOEffectOutputLayerMode        = 17,
    EAknsSrvDFOEffectParameterCount         = 18,
    EAknsSrvDFOEffectParameters             = 20,

    EAknsSrvDFOAnimationMajor               = 8,
    EAknsSrvDFOAnimationMinor               = 12,
    EAknsSrvDFOAnimationType                = 16,
    EAknsSrvDFOAnimationReserved0           = 17,
    EAknsSrvDFOAnimationReserved1           = 20,
    EAknsSrvDFOAnimationInputLayerIndex     = 24,
    EAknsSrvDFOAnimationInputLayerMode      = 25,
    EAknsSrvDFOAnimationOutputLayerIndex    = 26,
    EAknsSrvDFOAnimationOutputLayerMode     = 27,
    EAknsSrvDFOAnimationMinInterval         = 28,
    EAknsSrvDFOAnimationPreprocessCount     = 32,
    EAknsSrvDFOAnimationContentBegin        = 34,

    EAknsSrvDFOAnimationParamGroupValueA        = 8,
    EAknsSrvDFOAnimationParamGroupValueB        = 12,
    EAknsSrvDFOAnimationParamGroupParameterCount= 16,
    EAknsSrvDFOAnimationParamGroupParameters    = 18,

    EAknsSrvDFOParameterLength              = 0,
    EAknsSrvDFOParameterReserved            = 2,
    EAknsSrvDFOParameterType                = 3,
    EAknsSrvDFOParameterNameLen             = 4,
    EAknsSrvDFOParameterName                = 6,

    EAknsSrvDFORelease26Length              = 0,
    EAknsSrvDFORelease26PlatformMajor       = 8,
    EAknsSrvDFORelease26PlatformMinor       = 9,
    EAknsSrvDFORelease26ChunksN             = 10,
    EAknsSrvDFORelease26Content             = 14,

    EAknsSrvDFOLanguageGenRestr             = 8,
    EAknsSrvDFOLanguageLangRestr            = 10,
    EAknsSrvDFOLanguageLanguageN            = 12,
    EAknsSrvDFOLanguageContent              = 16,

    EAknsSrvDFOReleaseGenericLength         = 0,
    EAknsSrvDFOReleaseGenericPlatformMajor  = 8,
    EAknsSrvDFOReleaseGenericPlatformMinor  = 9,
    EAknsSrvDFOReleaseGenericReserved1      = 10,
    EAknsSrvDFOReleaseGenericReserved2      = 14,
    EAknsSrvDFOReleaseGenericChunksN        = 18,
    EAknsSrvDFOReleaseGenericContent        = 22,

    EAknsSrvDFOInformationCompilerVer       = 16,
    EAknsSrvDFOInformationAuthorLen         = 24,
    EAknsSrvDFOInformationAuthorStr         = 26,
    };

#endif

// End of File

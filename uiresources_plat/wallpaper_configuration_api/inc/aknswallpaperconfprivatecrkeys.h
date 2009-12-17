/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Private Central Repository keys for wallpaper configuration.
 *
*/

#ifndef AKNSWALLPAPERCONFPRIVATECRKEYS_H
#define AKNSWALLPAPERCONFPRIVATECRKEYS_H

// Wallpaper configuration API

const TUid KCRUidWallpaperConfiguration = {0x10282CB2};

enum TWallpaperScalePriority
    {
    EPrioStretch,
    EPrioCrop,
    EPrioStretchCrop,
    EPrioNHDWallpaper
    };

/**
 * Defines which operation (crop, stretch or both) should be preferred when 
 * trying to scale wallpaper to a portrait screen. 
 *
 * Possible values:
 * 0: stretching is preferred
 * 1: cropping is preferred
 * 2: both are preferred
 */
const TUint32 KWpConfPortraitScalePriority = 0x00000001;

/**
 * Maximum crop factor for portrait wallpaper.
 */
const TReal KWpConfPortraitMaxCropFactor = 0x00000002;

/**
 * Maximum stretch factor for portrait wallpaper.
 */
const TReal KWpConfPortaitMaxStretchFactor = 0x00000003;

/**
 * Defines which operation (crop, stretch or both) should be preferred when 
 * trying to scale wallpaper to a landscape screen. 
 *
 * Possible values:
 * 0: stretching is preferred
 * 1: cropping is preferred
 * 2: both are preferred
 */
const TUint32 KWpConfLandscapeScalePriority = 0x00000004;

/**
 * Maximum crop factor for landscape wallpaper.
 */
const TReal KWpConfLandscapeMaxCropFactor = 0x00000005;

/**
 * Maximum stretch factor for landscape wallpaper.
 */
const TReal KWpConfLandscapeMaxStretchFactor = 0x00000006;

/**
 * Defines a threshold value for small wallpaper zooming. 
 * If (selected wallpaper size / screen size) is greater than or equal 
 * to this value (but less than 1), wallpaper will be zoomed until either 
 * y- or x-axis length becomes equal to screen axis length. 
 *
 * If either axis in image is greater than same screen axis, no zooming will occur.
 */
const TReal KWpConfSmallImageZoomThreshold = 0x00000007;

/**
 * Maximum width of image to be used as wallpaper.
 * Value is in pixels.
 */
const TUint32 KWpConfMaxWallpaperWidth = 0x00000008;

/**
 * Maximum height of image to be used as wallpaper. 
 * Value is in pixels.
 */
const TUint32 KWpConfMaxWallpaperHeight = 0x00000009;

#endif      // AKNSWALLPAPERCONFPRIVATECRKEYS_H

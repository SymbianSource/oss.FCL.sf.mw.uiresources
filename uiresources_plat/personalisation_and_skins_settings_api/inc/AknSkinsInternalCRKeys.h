/*
* Copyright (c) 2004-2006 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Internal Central Repository keys.
 *
 *
*/


#ifndef AKNSKINS_INTERNAL_CR_KEYS_H
#define AKNSKINS_INTERNAL_CR_KEYS_H

const TUid KCRUidPersonalisation = { 0x101F876F };

/**
 * Location of the active skin, integer value.
 *
 * Possible values:
 * 0: Phone (drives C:\ and Z:\)
 * 2: MMC (E:\)
 */
const TUint32 KPslnActiveSkinLocation             = 0x00000001;

/**
 * Uid of the active skin, integer value.
 */
const TUint32 KPslnActiveSkinUid                  = 0x00000002;

/**
 * Active color palette Uid.
 */
const TUint32 KPslnColorPaletteUid                = 0x00000003;

/**
 * Bitmap index of the active dimmed background image in the idle state.
 */
const TUint32 KPslnDimmedIdleBackgroundImageIndex = 0x00000004;

/**
 * Bitmap index of the active background image in the favourites.
 */
const TUint32 KPslnFavouritesBackgroundImageIndex = 0x00000005;

/**
 * Path name of the active background image file in favourites.
 */
const TUint32 KPslnFavouritesBackgroundImagePath  = 0x00000006;

/**
 * Active icon set Uid.
 */
const TUint32 KPslnIconSetUid                     = 0x00000007;

/**
 * Bitmap index of the active background image in the idle state.
 */
const TUint32 KPslnIdleBackgroundImageIndex       = 0x00000008;

/**
 * Path name of the active background image file in the idle state.
 */
const TUint32 KPslnIdleBackgroundImagePath        = 0x00000009;

/**
 * Active screen savers Uid.
 */
const TUint32 KPslnScreenSaverUid                 = 0x0000000A;

/**
 * System default screen saver. Read only.
 */
const TUint32 KPslnSystemDefaultScreenSaver       = 0x0000000B;

/**
 * Active background image in the idle state Uid.
 */
const TUint32 KPslnIdleBackgroundImageUid         = 0x0000000C;

/**
 * Active background image in the favourites Uid.
 */
const TUint32 KPslnFavouritesBackgroundImageUid   = 0x0000000D;

/**
 * Color scheme.
 *
 * Possible values:
 * 0: Nokia "Classic" blue
 * 1: Nokia green
 * 2: Nokia purple
 * 3: red
 * 4: pink
 * 5: orange
 *
 * More may be added later...
 */
const TUint32 KPslnColorPalette                   = 0x0000000E;

/**
 * Available color schemes.
 *
 * Contains a space separated list of the supported color schemes.
 * Values are the same as in above.
 */
const TUint32 KPslnAvailableColorPalettes         = 0x0000000F;

/**
 * Highlight animation enable/disable status.
 *
 * Contains integer which is interpreted as boolean value. If value is 0
 * animations are disabled, otherwise animations are enabled.
 *
 * @since 3.1
 */
const TUint32 KPslnHighlightAnimationEnabled      = 0x00000010;

/**
 * Fullscreen wallpaper enable/disable status.
 *
 * Contains integer which is interpreted as boolean value. If value is 0
 * fullscreen wallpaper is disabled, otherwise enabled.
 *
 * @since 3.2
 */
const TUint32 KPslnFullScreenWallpaperEnabled     = 0x00000011;

/**
 * Wallpaper type
 *
 * Contains integer which specifies the wallpaper type
 * currently in use. Possible value 0/1/2 which are mapped
 * to none, normal and slideset respectively
 *
 * @since 3.2
 */
const TUint32 KPslnWallpaperType                  = 0x00000012;

/**
 * Default skin UID.
 *
 * Defines the default skin of the device.
 * If default value is used, S60 default skin is used.
 *
 * @since 3.1
 */
const TUint32 KPslnDefaultSkinID                  = 0x00000013;

/**
 * Default skin UID.
 *
 * Defines the default skin of the device.
 * If default value is used, S60 default skin is used.
 * Given value should be in HEX.
 *
 * Note that using 16-digit PID value here has a degrading impact on device performance.
 * 8-digit UID is thus preferred.
 *
 * @since 3.2
 */
const TUint32 KPslnDefaultSkinUID                  = 0x00000014;

#endif

// End of file

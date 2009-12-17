/*
* Copyright (c) 2002 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Device specific constants for palette storage.
*
*/


#ifndef __PALETTECONSTANTS_H__
#define __PALETTECONSTANTS_H__

/**
 * Palette switching support is not required in S60 3.x.
 * This switch disables palette switching. The code will be removed later.
 * You may ignore the rest of this header while this macro is defined.
 */
#define DISABLE_256_COLOR_PALETTE_SWITCHING

#ifndef DISABLE_256_COLOR_PALETTE_SWITCHING
/**
 * The palette code supports two modes of operation, configured with the feature flag
 * __PALETTE_INDEX_ADDRESS_FIXED.
 *
 * If the feature is defined (call it "fast" mode),
 * the palette index is stored in video memory and the video memory
 * address is hard coded.
 *
 * If the feature is undefined (call it "slow" mode) the palette index is stored in
 * video memory, but the video memory address is stored in TLS.
 *
 * This palette index is accessed a lot, so fast mode can have a positive
 * effect on performance.
 */

#ifdef __WINS__
// always turn __PALETTE_INDEX_ADDRESS_FIXED on in __WINS__
#undef __PALETTE_INDEX_ADDRESS_FIXED
#define __PALETTE_INDEX_ADDRESS_FIXED
#endif __WINS__


#ifdef __PALETTE_INDEX_ADDRESS_FIXED
#ifndef __WINS__

/**
 * This is the base address of the video memory for the screen.
 * This value is only used if the macro __PALETTE_INDEX_ADDRESS_FIXED is defined and
 * __WINS__ macro is undefined.
 */
#include <lcdbaseaddress.h>
#define DEVICE_VIDEO_ADDR			KLCDBaseAddress


/**
 * This is the maximum width of the screen.
 * This value is only used if the macro __PALETTE_INDEX_ADDRESS_FIXED is defined and
 * __WINS__ macro is undefined. 
 * Otherwise, the width is retrieved from the screen driver.
 */
#define DEVICE_SCREEN_WIDTH			176

/**
 * This is the maximum height of the screen.
 * This value is only used if the macro __PALETTE_INDEX_ADDRESS_FIXED is defined and
 * __WINS__ macro is undefined. 
 * Otherwise, the height is retrieved from the screen driver.
 */
#define DEVICE_SCREEN_HEIGHT		208

#endif
#endif // __PALETTE_INDEX_ADDRESS_FIXED

/**
 * The number of bytes used for each pixel of the screen.
 */
#define DEVICE_BYTES_PER_PIXEL		2

/**
 * The number of bytes of video memory reserved by the screen driver for other purposes.
 */
#define DEVICE_VIDEO_PALETTE_SIZE	32

#endif // DISABLE_256_COLOR_PALETTE_SWITCHING

#endif // __PALETTECONSTANTS_H__

// End of File

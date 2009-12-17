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
* Description:  Provides the palette methods.     
*
*/


#include "Palette.h"
#include "NokiaBlue.h"
#include "PaletteConstants.h"

#ifndef DISABLE_256_COLOR_PALETTE_SWITCHING
#include "NokiaGreen.h"
#include "NokiaPurple.h"
#include "NokiaGrey.h"
#include "SchemeRed.h"
#include "SchemePink.h"
#include "SchemeOrange.h"
#include "Palette1.h"
#include "Palette2.h"
#include "Palette3.h"
#include "Palette4.h"
#include "Palette5.h"
#include "Palette6.h"
#include "Palette7.h"
#include "Palette8.h"
#include "Palette9.h"
#include "Palette10.h"
#include "Palette11.h"
#include "Palette12.h"
#include "Palette13.h"
#endif

class TColorSchemeStore
	{
public:
	static TSeries60ColorScheme Get();
	static void Set(TSeries60ColorScheme aScheme);
	};

enum TPalettePanic
	{
	EBadScheme
	};

_LIT(KPanic, "Palette");
void Panic(TPalettePanic aCode)
	{
	User::Panic(KPanic, aCode);
	}


const TUint32 color16array[16] = {
	0x00000000,	0x00555555,	0x00000080,	0x00008080,
	0x00008000,	0x000000ff,	0x0000ffff,	0x0000ff00,
	0x00ff00ff,	0x00ff0000,	0x00ffff00,	0x00800080,
	0x00800000,	0x00808000,0x00aaaaaa,	0x00ffffff	};

const TUint8 color16inverse[512] = {
	0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05,	0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05,
	0x04, 0x04, 0x01, 0x03, 0x03, 0x03, 0x05, 0x05,	0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x05,
	0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x06,	0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x06, 0x06,
	0x07, 0x07, 0x07, 0x03, 0x03, 0x06, 0x06, 0x06,	0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06,
	0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x05, 0x05,	0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x05, 0x05,
	0x04, 0x01, 0x01, 0x01, 0x03, 0x03, 0x05, 0x05,	0x04, 0x04, 0x01, 0x03, 0x03, 0x03, 0x03, 0x05,
	0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x06,	0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x06, 0x06,
	0x07, 0x07, 0x07, 0x03, 0x03, 0x06, 0x06, 0x06,	0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06,
	0x0c, 0x0c, 0x01, 0x0b, 0x0b, 0x0b, 0x05, 0x05,	0x0c, 0x01, 0x01, 0x01, 0x0b, 0x0b, 0x05, 0x05,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05,	0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05,
	0x0d, 0x0d, 0x01, 0x01, 0x03, 0x0e, 0x0e, 0x06,	0x0d, 0x0d, 0x01, 0x01, 0x0e, 0x0e, 0x0e, 0x06,
	0x07, 0x07, 0x01, 0x01, 0x0e, 0x0e, 0x06, 0x06,	0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06,
	0x0c, 0x0c, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x05,	0x0c, 0x0c, 0x01, 0x0b, 0x0b, 0x0b, 0x0b, 0x05,
	0x0d, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05,	0x0d, 0x0d, 0x01, 0x01, 0x01, 0x0e, 0x0e, 0x0e,
	0x0d, 0x0d, 0x01, 0x01, 0x0e, 0x0e, 0x0e, 0x0e,	0x0d, 0x0d, 0x01, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e,
	0x0d, 0x0d, 0x01, 0x0e, 0x0e, 0x0e, 0x0e, 0x06,	0x07, 0x07, 0x07, 0x0e, 0x0e, 0x0e, 0x06, 0x06,
	0x0c, 0x0c, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x08,	0x0c, 0x0c, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x08,
	0x0d, 0x0d, 0x01, 0x01, 0x0b, 0x0e, 0x0e, 0x08,	0x0d, 0x0d, 0x01, 0x01, 0x0e, 0x0e, 0x0e, 0x0e,
	0x0d, 0x0d, 0x0d, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e,	0x0d, 0x0d, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e,
	0x0d, 0x0d, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0f,	0x0a, 0x0a, 0x0a, 0x0e, 0x0e, 0x0e, 0x0f, 0x0f,
	0x0c, 0x0c, 0x0b, 0x0b, 0x0b, 0x0b, 0x08, 0x08,	0x0c, 0x0c, 0x0b, 0x0b, 0x0b, 0x0b, 0x08, 0x08,
	0x0d, 0x0d, 0x01, 0x01, 0x0e, 0x0e, 0x0e, 0x08,	0x0d, 0x0d, 0x01, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e,
	0x0d, 0x0d, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e,	0x0d, 0x0d, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e,
	0x0a, 0x0a, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0f,	0x0a, 0x0a, 0x0a, 0x0e, 0x0e, 0x0e, 0x0f, 0x0f,
	0x09, 0x09, 0x09, 0x0b, 0x0b, 0x08, 0x08, 0x08,	0x09, 0x09, 0x09, 0x0b, 0x0b, 0x08, 0x08, 0x08,
	0x09, 0x09, 0x01, 0x01, 0x0e, 0x0e, 0x08, 0x08,	0x0d, 0x0d, 0x01, 0x0e, 0x0e, 0x0e, 0x0e, 0x08,
	0x0d, 0x0d, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0f,	0x0a, 0x0a, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0f,
	0x0a, 0x0a, 0x0a, 0x0e, 0x0e, 0x0e, 0x0f, 0x0f,	0x0a, 0x0a, 0x0a, 0x0a, 0x0f, 0x0f, 0x0f, 0x0f,
	0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x08, 0x08,	0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x08, 0x08,
	0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x08, 0x08,	0x09, 0x09, 0x09, 0x0e, 0x0e, 0x0e, 0x08, 0x08,
	0x0a, 0x0a, 0x0a, 0x0e, 0x0e, 0x0e, 0x0f, 0x0f,	0x0a, 0x0a, 0x0a, 0x0e, 0x0e, 0x0e, 0x0f, 0x0f,
	0x0a, 0x0a, 0x0a, 0x0a, 0x0f, 0x0f, 0x0f, 0x0f,	0x0a, 0x0a, 0x0a, 0x0a, 0x0f, 0x0f, 0x0f, 0x0f
	};

#ifndef DISABLE_256_COLOR_PALETTE_SWITCHING

#define VIDEO_MEMORY_SCHEME_OFFSET(paletteSize, width, height, bytesPerPixel) ((paletteSize) + ((width)*((height)+1)*(bytesPerPixel)))

#ifdef __PALETTE_INDEX_ADDRESS_FIXED
#if defined __WINS__

TSeries60ColorScheme theSchemeMem = ESeries60ColorSchemeBlue;
TSeries60ColorScheme* const theScheme = &theSchemeMem;

#else

#define DEVICE_SCHEME_OFFSET		VIDEO_MEMORY_SCHEME_OFFSET(DEVICE_VIDEO_PALETTE_SIZE, DEVICE_SCREEN_WIDTH, DEVICE_SCREEN_HEIGHT, DEVICE_BYTES_PER_PIXEL)
#define DEVICE_SCHEME_ADDR			(DEVICE_VIDEO_ADDR + DEVICE_SCHEME_OFFSET)
TSeries60ColorScheme* const theScheme = (TSeries60ColorScheme*)(DEVICE_SCHEME_ADDR);

#endif
#endif
#endif // DISABLE_256_COLOR_PALETTE_SWITCHING


EXPORT_C const TUint32* DynamicPalette::Color16array()
	{
	return color16array;
	}

EXPORT_C const TUint8* DynamicPalette::Color16inverse()
	{
	return color16inverse;
	}

/**
 *
 * Returns the current system palette. Depending on the
 * implementation this value depends on the current color
 * scheme set using SetColorScheme.
 *
 * @returns   "const TColor256Util*"
 *            Current system palette.
 */
EXPORT_C const TColor256Util* DynamicPalette::DefaultColor256Util()
	{
#ifdef DISABLE_256_COLOR_PALETTE_SWITCHING

	return &KNokiaBlueColor256Util;

#else // DISABLE_256_COLOR_PALETTE_SWITCHING

#ifndef __PALETTE_INDEX_ADDRESS_FIXED
	TSeries60ColorScheme* theScheme = (TSeries60ColorScheme*)Dll::Tls();
	if (!theScheme)
		{
		TPckgBuf<TScreenInfoV01> info;
		UserSvr::ScreenInfo(info);
		TInt offset = VIDEO_MEMORY_SCHEME_OFFSET(DEVICE_VIDEO_PALETTE_SIZE, info().iScreenSize.iWidth, info().iScreenSize.iHeight, DEVICE_BYTES_PER_PIXEL);
		theScheme = (TSeries60ColorScheme*)(((TUint8*)info().iScreenAddress) + offset);
		Dll::SetTls(theScheme);
		}
#endif
	switch (*theScheme)
		{
		case EIndex0:
			return &KNokiaBlueColor256Util;

		case EIndex1:
			return &KNokiaGreenColor256Util;

        case EIndex2:
			return &KNokiaPurpleColor256Util;

        case EIndex3:
			return &KSchemeRedColor256Util;

        case EIndex4:
			return &KSchemePinkColor256Util;

		case EIndex5:
			return &KSchemeOrangeColor256Util;

        case EIndex6:
            return &KNokiaGreyColor256Util;

        case EIndex7:
            return &KPalette1Color256Util;

        case EIndex8:
            return &KPalette2Color256Util;

        case EIndex9:
            return &KPalette3Color256Util;

        case EIndex10:
            return &KPalette4Color256Util;

        case EIndex11:
            return &KPalette5Color256Util;

        case EIndex12:
            return &KPalette6Color256Util;

        case EIndex13:
            return &KPalette7Color256Util;

        case EIndex14:
            return &KPalette8Color256Util;

        case EIndex15:
            return &KPalette9Color256Util;

        case EIndex16:
            return &KPalette10Color256Util;

        case EIndex17:
            return &KPalette11Color256Util;

        case EIndex18:
            return &KPalette12Color256Util;

        case EIndex19:
            return &KPalette13Color256Util;

		default:
			return &KNokiaBlueColor256Util;
		}

#endif // DISABLE_256_COLOR_PALETTE_SWITCHING
	}

/**
 *
 * Sets the current color palette.
 *
 */
#ifdef DISABLE_256_COLOR_PALETTE_SWITCHING

EXPORT_C void DynamicPalette::SetColor256Util(DynamicPalette::TIndex /*aScheme*/)
	{
	}

#else // DISABLE_256_COLOR_PALETTE_SWITCHING
EXPORT_C void DynamicPalette::SetColor256Util(DynamicPalette::TIndex aScheme)
	{
#ifndef __PALETTE_INDEX_ADDRESS_FIXED
	TSeries60ColorScheme* theScheme = (TSeries60ColorScheme*)Dll::Tls();
	if (!theScheme)
		{
		TPckgBuf<TScreenInfoV01> info;
		UserSvr::ScreenInfo(info);
		TInt offset = VIDEO_MEMORY_SCHEME_OFFSET(DEVICE_VIDEO_PALETTE_SIZE, info().iScreenSize.iWidth, info().iScreenSize.iHeight, DEVICE_BYTES_PER_PIXEL);
		theScheme = (TSeries60ColorScheme*)(((TUint8*)info().iScreenAddress) + offset);
		Dll::SetTls(theScheme);
		}
#endif
	*theScheme = (TSeries60ColorScheme)(aScheme);
	}
#endif // DISABLE_256_COLOR_PALETTE_SWITCHING

// End of File

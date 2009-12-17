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

* Description:    Panics.

*

*/



#ifndef FBSRASTERIZERPANICS_H

#define FBSRASTERIZERPANICS_H



enum TFbsRasterizerPanics

	{

	/** CFbsRasterizer::BeginBitmap() was called for an extended

	bitmap already registered but with a different description.

	Extended bitmaps are immutable (debug only panic).

	 */

	EFbsRasterizerBeginBitmapDescChanged = 1,

	

	/** CFbsRasterizer::BeginBitmap() was called with an invalid TBitmapDesc

	parameter.

	 */

	EFbsRasterizerBeginBitmapInvalidBitmapDesc = 2,

		

	/** CFbsRasterizer::ScanLine() was called with an invalid parameter. This can 

	occur when aPixel is outside the size of the bitmap, the length requested is

	greater that the width of the bitmap minus aPixel.iX, or the length requested

	exceeds the size of the extended data.  

	 */

	EFbsRasterizerScanlineInvalidParameter = 3,

	

	/** CFbsRasterizer::EndBitmap() was called with an extended bitmap that was not

	registered with the rasterizer. Check that CFbsBitmap::BeginBitmap() has been called.

	 */

	EFbsRasterizerEndBitmapNotFound = 4

	};



#endif // FBSRASTERIZERPANICS_H


/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:
*
*/
/*
* ============================================================================
*  Name : WOW Testbench
* ============================================================================
*/
#ifndef FX_ASM_VERSIONS_H
#define FX_ASM_VERSIONS_H


#if defined(__MARM_ARMV4__) || defined(__MARM_ARMI__) || defined(__MARM_ARMV5__)
    #define ARM_VERSION
	//#define __NAKED__ __declspec( naked )
#endif

// INCLUDES
#include <e32base.h>
#include <gdi.h>
#include <u32std.h>

#include "AknsRlEffectUtil.h"


// FORWARD DECLARATIONS
class CFbsBitmap;

// FUNCTION DECLARATIONS

// for all convolution filters source bitmap is format
// a1  a1  a2  a3  a4  a4
// a1  a1  a2  a3  a4  a4
// a5  a5  a6  a7  a8  a8
// a9  a9  a10 a11 a12 a12
// a9  a9  a10 a11 a12 a12
//
// if original source (target) is
// a1  a2  a3  a4
// a5  a6  a7  a8
// a9  a10 a11 a12

// this copies bitmap from aBaseS to aBaseT, where aBaseT is 2 pixel wider and 2 pixel higher
// than aBaseS. Note that if target width is only 1 pixel, results are undefined
void AMakeConvoluteSource64K( TUint* aBaseT,
                              TUint* aBaseS,
                              TInt aTargetScanW, // in bytes
                              TInt aSourceScanW, // in bytes
                              TInt aSourceWidth, // source width in pixels
                              TInt aSourceHeight); // source height in pixels

void AMakeConvoluteSource16MU( TUint* aBaseT,
                               TUint* aBaseS,
                               TInt aTargetScanW, // in bytes
                               TInt aSourceScanW, // in bytes
                               TInt aSourceWidth, // source width in pixels
                               TInt aSourceHeight); // source height in pixels

void AMakeConvoluteSource256( TUint* aBaseT,
                              TUint* aBaseS,
                              TInt aTargetScanW, // in bytes
                              TInt aSourceScanW, // in bytes
                              TInt aSourceWidth, // source width in pixels
                              TInt aSourceHeight); // source height in pixels


void AConvolute64KEdge( CFbsBitmap& aTarget,
                        const CFbsBitmap& aSource,
                        const TInt aBlendFactor );

void ADoConvolute64KEdge( TUint* aBaseT,
                          TUint* aBaseS,
                          TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                          TInt aWidth,
                          TInt aHeight,
                          TInt aBlendFactor);



void AConvolute64KBlur( CFbsBitmap& aTarget,
                        const CFbsBitmap& aSource,
                        const TInt aBlendFactor );

void ADoConvolute64KBlur( TUint* aBaseT,
                          TUint* aBaseS,
                          TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                          TInt aWidth,
                          TInt aHeight,
                          TInt aBlendFactor);



void AConvolute64KBlurGauss( CFbsBitmap& aTarget,
                             const CFbsBitmap& aSource,
                             const TInt aBlendFactor );

void ADoConvolute64KBlurGauss( TUint* aBaseT,
                               TUint* aBaseS,
                               TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                               TInt aWidth,
                               TInt aHeight,
                               TInt aBlendFactor);



void AConvolute64KEmbossSoft( CFbsBitmap& aTarget,
                              const CFbsBitmap& aSource,
                              const TInt aBlendFactor );

void ADoConvolute64KEmbossSoft( TUint* aBaseT,
                                TUint* aBaseS,
                                TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                                TInt aWidth,
                                TInt aHeight,
                                TInt aBlendFactor);


void AConvolute64KEmbossHard( CFbsBitmap& aTarget,
                              const CFbsBitmap& aSource,
                              const TInt aBlendFactor );

void ADoConvolute64KEmbossHard( TUint* aBaseT,
                                TUint* aBaseS,
                                TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                                TInt aWidth,
                                TInt aHeight,
                                TInt aBlendFactor);


void AConvolute64KEnhanceDetail( CFbsBitmap& aTarget,
                                 const CFbsBitmap& aSource,
                                 const TInt aBlendFactor );

void ADoConvolute64KEnhanceDetail( TUint* aBaseT,
                                   TUint* aBaseS,
                                   TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                                   TInt aWidth,
                                   TInt aHeight,
                                   TInt aBlendFactor);


void AConvolute64KEnhanceFocus( CFbsBitmap& aTarget,
                                const CFbsBitmap& aSource,
                                const TInt aBlendFactor );

void ADoConvolute64KEnhanceFocus( TUint* aBaseT,
                                  TUint* aBaseS,
                                  TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                                  TInt aWidth,
                                  TInt aHeight,
                                  TInt aBlendFactor);


void AConvolute64KSoften( CFbsBitmap& aTarget,
                          const CFbsBitmap& aSource,
                          const TInt aBlendFactor );

void ADoConvolute64KSoften( TUint* aBaseT,
                            TUint* aBaseS,
                            TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                            TInt aWidth,
                            TInt aHeight,
                            TInt aBlendFactor);


void AConvolute64KSharpen( CFbsBitmap& aTarget,
                           const CFbsBitmap& aSource,
                           const TInt aBlendFactor );

void ADoConvolute64KSharpen( TUint* aBaseT,
                             TUint* aBaseS,
                             TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                             TInt aWidth,
                             TInt aHeight,
                             TInt aBlendFactor);


void AConvolute64KSharpenMore( CFbsBitmap& aTarget,
                               const CFbsBitmap& aSource,
                               const TInt aBlendFactor );

void ADoConvolute64KSharpenMore( TUint* aBaseT,
                                 TUint* aBaseS,
                                 TInt aCombinedScanW, // lower half source scanw and upper half target scanw
                                 TInt aWidth,
                                 TInt aHeight,
                                 TInt aBlendFactor);



//*************** Contrast

void AProcessContrast( const CFbsBitmap& aTarget,
                       const CFbsBitmap& aSource,
                       const TInt aAdjustment,
                       const TDisplayMode aMode );
                       
void ADoContrast64K( TUint* aBaseT,
                     TUint* aBaseS,
                     TInt aPixelCount,
                     TInt aAdjustment);
                                                    
void ADoContrast16MU( TUint* aBaseT,
                      TUint* aBaseS,
                      TInt aPixelCount,
                      TInt aAdjustment);




void ABumpMap64K( CFbsBitmap& aTarget,
                  const CFbsBitmap& aSource,
                  const TReal aAzimuth,
                  const TReal aElevation,
                  const TInt aDepth,
                  TAknsRlChannelBlendMode aBlendMode,
                  const TInt aBlendFactor );

void AMakeBumpMapGrayBuffer( TUint* aGrayBuffer,
                             TUint* aSourceAddr,
                             TInt aScanW,
                             TInt aWidth,
                             TInt aHeight);

void ADoBumpMap64K( TUint* aBaseT, // pointer to target bitmap
                    TUint* aBaseS, // pointer to source bitmap
                    TUint* aGrayBuffer, // pointer to grayscale buffer
                    TInt aScanW, // should be same for source and target!!!
                    TInt aWidth,
                    TInt aHeight,
                    TInt aBlendMode,
                    TInt aBlendFactor,
                    TInt aLx,
                    TInt aLy,
                    TInt aLz,
                    TInt aNzlz,
                    TInt aNz2);


#endif // FX_ASM_VERSIONS_H




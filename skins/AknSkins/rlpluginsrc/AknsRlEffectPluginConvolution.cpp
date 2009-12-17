/*
* Copyright (c) 2004-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Provides convolution operations on images.
*
*/


// INCLUDE FILES
#include "AknsRlEffectPluginConvolution.h"
#include "AknsRlEffectUtil.h"
#include "fx_asm_versions.h"

// CONSTANTS

// Fixed convolution kernels
const TInt KKernelEdgeDetect[9]    = { -1, -1, -1,
                                       -1,  8, -1,
                                       -1, -1, -1 };

const TInt KKernelBlur[9]          = { 1, 2, 1,
                                       2, 2, 2,
                                       1, 2, 1 };

const TInt KKernelBlurGauss[9]     = { 0, 1, 0,
                                       1, 4, 1,
                                       0, 1, 0 };

const TInt KKernelEmbossSoft[9]    = { -1, 0, 0,
                                        0, 0, 0,
                                        0, 0, 1 };

const TInt KKernelEmbossHard[9]    = { -1, -1, 0,
                                       -1,  0, 1,
                                        0,  1, 1 };

const TInt KKernelEnhanceDetail[9] = { 0, -1,  0,
                                      -1,  9, -1,
                                       0, -1,  0 };

const TInt KKernelEnhanceFocus[9]  = { -1, 0, -1,
                                        0, 7,  0,
                                       -1, 0, -1 };

const TInt KKernelSoften[9]        = { 1, 1, 1,
                                       1, 1, 1,
                                       1, 1, 1 };

const TInt KKernelSharpen[9]       = { 0, -1,  0,
                                      -1,  5, -1,
                                       0, -1,  0 };

const TInt KKernelSharpenMore[9]   = {-1, -1, -1,
                                      -1,  9, -1,
                                      -1, -1, -1 };

/*lint -save -e834 */ // Let's get real...not confusing

// ==================== TEMPLATE IMPL. OF CONVOLUTION ==========================
/**
* Template implementation of Convolution. Type defines the used data type for
* iterating over the bitmap data. X, R, G and B define the used pixel color bit
* layout.
*/
template<class Type,TInt X, TInt R, TInt G, TInt B>
class AknsRlEffectConvolution
    {
    public:
    //------------------------------------------------------------------------
    /**
    * Convolutes a bitmap with generic 3x3 convolution kernel.
    */
    static void Kernel( const CFbsBitmap& aTarget,
                        const CFbsBitmap& aSource,
                        const TInt aKernel[9],
                        const TInt aBlendFactor,
                        const TInt aBias )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // ScanLineLength returns bytes, but width must match the Type
    TInt scanWtarget  = (CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode())) / sizeof(Type);
    TInt scanWsource  = (CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode())) / sizeof(Type);

    TInt kernelSum = aKernel[0] + aKernel[1] + aKernel[2] +
                     aKernel[3] + aKernel[4] + aKernel[5] +
                     aKernel[6] + aKernel[7] + aKernel[8];

    if( 0 == kernelSum )
        kernelSum = 1;

    TInt r, g, b;
    TInt x, y; // Loop counters

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
    Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

    dataS = dataS + scanWsource + 1;

    // Do the actual convolution
    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            r = aBias + (AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource - 1)) * aKernel[0] +
                         AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource    )) * aKernel[1] +
                         AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource + 1)) * aKernel[2] +
                         AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - 1              )) * aKernel[3] +
                         AknsRlRgb<Type,X,R,G,B>::R8(*(dataS                  )) * aKernel[4] +
                         AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + 1              )) * aKernel[5] +
                         AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource - 1)) * aKernel[6] +
                         AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource    )) * aKernel[7] +
                         AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource + 1)) * aKernel[8]) / kernelSum;

            g = aBias + (AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource - 1)) * aKernel[0] +
                         AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource    )) * aKernel[1] +
                         AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource + 1)) * aKernel[2] +
                         AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - 1              )) * aKernel[3] +
                         AknsRlRgb<Type,X,R,G,B>::G8(*(dataS                  )) * aKernel[4] +
                         AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + 1              )) * aKernel[5] +
                         AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource - 1)) * aKernel[6] +
                         AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource    )) * aKernel[7] +
                         AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource + 1)) * aKernel[8]) / kernelSum;


            b = aBias + (AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource - 1)) * aKernel[0] +
                         AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource    )) * aKernel[1] +
                         AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource + 1)) * aKernel[2] +
                         AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - 1              )) * aKernel[3] +
                         AknsRlRgb<Type,X,R,G,B>::B8(*(dataS                  )) * aKernel[4] +
                         AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + 1              )) * aKernel[5] +
                         AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource - 1)) * aKernel[6] +
                         AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource    )) * aKernel[7] +
                         AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource + 1)) * aKernel[8]) / kernelSum;


            // Exposure blending. Note: It is assumed that arithmetic shifting
            // is supported -> negative values are shifted correctly
            r = ( r * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::R8(*dataS) ) >> 8;
            g = ( g * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::G8(*dataS) ) >> 8;
            b = ( b * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::B8(*dataS) ) >> 8;

            if( r < 0 ) r = 0;
            else if( r > 255 ) r = 255;

            if( g < 0 ) g = 0;
            else if( g > 255 ) g = 255;

            if( b < 0 ) b = 0;
            else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }
    //------------------------------------------------------------------------
    /**
    * "Convolutes" a bitmap with adjustable gaussian blur kernel.
    * Kernel size from 3*3 to 33*33 (odd sizes).
    */
    static void AdjustableGaussian( const CFbsBitmap& aTarget,
                                    const CFbsBitmap& aSource,
                                    TUint16* aColumnBuffer,
                                    const TInt aKernelsize )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // ScanLineLength returns bytes, but width must match the Type
    TInt scanWtarget  = (CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode())) / sizeof(Type);
    TInt scanWsource  = (CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode())) / sizeof(Type);


    TUint16 r, g, b;
    r=0;
    g=0;
    b=0;
    TInt x, y, i; // Loop counters
    TInt bufIndx, bufIndxTarget;

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
    Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );
    Type* dataR = dataT; // for recursive iterations, both source and target are the same
    dataS = dataS + scanWsource + 1; // state machine takes pixel (1,1) and output goes to pixel (0,0)

    TUint16 tmp1;
    TUint16 tmp2;

    // row buffer variables for red, green and blue components
    TUint16 SR0r;
    TUint16 SR1r;
    TUint16 SR0g;
    TUint16 SR1g;
    TUint16 SR0b;
    TUint16 SR1b;

    TInt col0_rIndex; // index for row 0 columns in aColumnBuffer for red component
    TInt col1_rIndex; // index for row 1 columns in aColumnBuffer for red component
    TInt col0_gIndex; // index for row 0 columns in aColumnBuffer for green component
    TInt col1_gIndex; // index for row 1 columns in aColumnBuffer for green component
    TInt col0_bIndex; // index for row 0 columns in aColumnBuffer for blue component
    TInt col1_bIndex; // index for row 1 columns in aColumnBuffer for blue component

    TBool renderWithBuffers = ETrue;
    if ( aKernelsize < 7 ) // don't try to use temp buffers with small kernel
        renderWithBuffers = EFalse;

    TUint16* redBuffer;
    TUint16* greenBuffer;
    TUint16* blueBuffer;

    // to disable warnings
    redBuffer = NULL;
    greenBuffer = NULL;
    blueBuffer = NULL;

    if( renderWithBuffers )
        {
        // OOM returns NULL
        redBuffer = new TUint16[(width+1)*(height+1)];
        greenBuffer = new TUint16[(width+1)*(height+1)];
        blueBuffer = new TUint16[(width+1)*(height+1)];

        // All buffers are required for rendering
        if( !redBuffer || !greenBuffer || !blueBuffer )
            {
            delete [] redBuffer;
            redBuffer = NULL;
            delete [] greenBuffer;
            greenBuffer = NULL;
            delete [] blueBuffer;
            blueBuffer = NULL;

            renderWithBuffers = EFalse;
            }
        }

    if( renderWithBuffers )
        {
        i = width + 2; // start writing to pixel (1,1)
        for ( y = 0; y < (height - 1) ; y++ )
            {
            for ( x = 0; x < (width - 1) ; x++ )
                {
                redBuffer[i] = (TUint16)AknsRlRgb<Type,X,R,G,B>::R8(*dataS);
                greenBuffer[i] = (TUint16)AknsRlRgb<Type,X,R,G,B>::G8(*dataS);
                blueBuffer[i] = (TUint16)AknsRlRgb<Type,X,R,G,B>::B8(*dataS);
                i++;
                dataS++;
                }
            redBuffer[i] = redBuffer[i-1];
            greenBuffer[i] = greenBuffer[i-1];
            blueBuffer[i] = blueBuffer[i-1];
            i+=2; // start from second pixel
            dataS = dataS + pitchSource + 1; // start from second pixel
            }

        for ( x = 0; x < width ; x++ ) // copy bottom row
            {
            redBuffer[i] = redBuffer[i-(width+1)];
            greenBuffer[i] = greenBuffer[i-(width+1)];
            blueBuffer[i] = blueBuffer[i-(width+1)];
            i++;
            }

        redBuffer[1] = redBuffer[width+2]; // initialize these for row registers
        greenBuffer[1] = greenBuffer[width+2];
        blueBuffer[1] = blueBuffer[width+2];

        for ( i = 0; i < (aKernelsize - 1) >> 1 ; i++ ) // do (N-1) / 2 times
            {
            bufIndx = width+2;
            bufIndxTarget = 0;

            for( y = 0; y < height; y++ )
                {
                SR0r = redBuffer[bufIndxTarget+1]; // initialize row buffer variables
                SR1r = redBuffer[bufIndxTarget+1];
                SR0g = greenBuffer[bufIndxTarget+1];
                SR1g = greenBuffer[bufIndxTarget+1];
                SR0b = blueBuffer[bufIndxTarget+1];
                SR1b = blueBuffer[bufIndxTarget+1];
                col0_rIndex = 0; // initialize indexes for column buffers
                col1_rIndex = width;
                col0_gIndex = col1_rIndex + width;
                col1_gIndex = col0_gIndex + width;
                col0_bIndex = col1_gIndex + width;
                col1_bIndex = col0_bIndex + width;
                for( x = 0; x < width; x++ )
                    {
                    // red
                    tmp1 = redBuffer[bufIndx];
                    tmp2 = (TUint16)(SR0r + tmp1);
                    SR0r = tmp1;
                    tmp1 = (TUint16)(SR1r + tmp2);
                    SR1r = tmp2;

                    tmp2 = (TUint16)(aColumnBuffer[col0_rIndex] + tmp1);
                    aColumnBuffer[col0_rIndex++] = tmp1;
                    redBuffer[bufIndxTarget] = (TUint16)((8 + aColumnBuffer[col1_rIndex] + tmp2) >> 4);
                    aColumnBuffer[col1_rIndex++] = tmp2;

                    // green
                    tmp1 = greenBuffer[bufIndx];
                    tmp2 = (TUint16)(SR0g + tmp1);
                    SR0g = tmp1;
                    tmp1 = (TUint16)(SR1g + tmp2);
                    SR1g = tmp2;

                    tmp2 = (TUint16)(aColumnBuffer[col0_gIndex] + tmp1);
                    aColumnBuffer[col0_gIndex++] = tmp1;
                    greenBuffer[bufIndxTarget] = (TUint16)((8 + aColumnBuffer[col1_gIndex] + tmp2) >> 4);
                    aColumnBuffer[col1_gIndex++] = tmp2;

                    // blue
                    tmp1 = blueBuffer[bufIndx++];
                    tmp2 = (TUint16)(SR0b + tmp1);
                    SR0b = tmp1;
                    tmp1 = (TUint16)(SR1b + tmp2);
                    SR1b = tmp2;

                    tmp2 = (TUint16)(aColumnBuffer[col0_bIndex] + tmp1);
                    aColumnBuffer[col0_bIndex++] = tmp1;
                    b = (TUint16)((8 + aColumnBuffer[col1_bIndex] + tmp2) >> 4);
                    blueBuffer[bufIndxTarget++] = (TUint16)b;
                    aColumnBuffer[col1_bIndex++] = tmp2;
                    }
                bufIndx++;
                bufIndxTarget++;
                }
            }

            // now write target from buffers
            i = 0;
            for ( y = 0; y < height ; y++ )
                {
                for ( x = 0; x < width ; x++ )
                    {
                    AknsRlRgb<Type,X,R,G,B>::SetRgb8LessG( dataT,
                                                      redBuffer[i],
                                                      greenBuffer[i],
                                                      blueBuffer[i++] );
                    dataT++;
                    }
                dataT = dataT + pitchTarget;
                i++;
                }

            aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
            delete [] redBuffer;
            delete [] greenBuffer;
            delete [] blueBuffer;
            return;
        }
    else
        {
        // Do the actual convolution
        for ( i = 0; i < (aKernelsize - 1) >> 1 ; i++ ) // do (N-1) / 2 times
            {

            for( y = 0; y < (height - 1); y++ )
                {
                SR0r = 0; // initialize row buffer variables
                SR1r = 0;
                SR0g = 0;
                SR1g = 0;
                SR0b = 0;
                SR1b = 0;
                col0_rIndex = 0; // initialize indexes for column buffers
                col1_rIndex = width;
                col0_gIndex = col1_rIndex + width;
                col1_gIndex = col0_gIndex + width;
                col0_bIndex = col1_gIndex + width;
                col1_bIndex = col0_bIndex + width;
                for( x = 0; x < (width - 1); x++ )
                    {
                    // red
                    tmp1 = (TUint16)AknsRlRgb<Type,X,R,G,B>::R8(*dataS);
                    tmp2 = (TUint16)(SR0r + tmp1);
                    SR0r = tmp1;
                    tmp1 = (TUint16)(SR1r + tmp2);
                    SR1r = tmp2;

                    tmp2 = (TUint16)(aColumnBuffer[col0_rIndex] + tmp1);
                    aColumnBuffer[col0_rIndex++] = tmp1;
                    r = (TUint16)((8 + aColumnBuffer[col1_rIndex] + tmp2) >> 4);
                    aColumnBuffer[col1_rIndex++] = tmp2;

                    // green
                    tmp1 = (TUint16)AknsRlRgb<Type,X,R,G,B>::G8(*dataS);
                    tmp2 = (TUint16)(SR0g + tmp1);
                    SR0g = tmp1;
                    tmp1 = (TUint16)(SR1g + tmp2);
                    SR1g = tmp2;

                    tmp2 = (TUint16)(aColumnBuffer[col0_gIndex] + tmp1);
                    aColumnBuffer[col0_gIndex++] = tmp1;
                    g = (TUint16)((8 + aColumnBuffer[col1_gIndex] + tmp2) >> 4);
                    aColumnBuffer[col1_gIndex++] = tmp2;

                    // blue
                    tmp1 = (TUint16)AknsRlRgb<Type,X,R,G,B>::B8(*dataS);
                    tmp2 = (TUint16)(SR0b + tmp1);
                    SR0b = tmp1;
                    tmp1 = (TUint16)(SR1b + tmp2);
                    SR1b = tmp2;

                    tmp2 = (TUint16)(aColumnBuffer[col0_bIndex] + tmp1);
                    aColumnBuffer[col0_bIndex++] = tmp1;
                    b = (TUint16)((8 + aColumnBuffer[col1_bIndex] + tmp2) >> 4);
                    aColumnBuffer[col1_bIndex++] = tmp2;


                    if( r > 255 ) r = 255;
                    if( g > 255 ) g = 255;
                    if( b > 255 ) b = 255;

                    AknsRlRgb<Type,X,R,G,B>::SetRgb8LessG( dataT, r, g, b );

                    dataT++;
                    dataS++;
                    }

                dataT = dataT + pitchTarget + 1;
                dataS = dataS + pitchSource + 1;
                }
            dataT = dataR; // for more than 1 iterations, use target bitmap for both
            dataS = dataR+scanWtarget+1; // target and source
            }

        aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
        }
    }

    //------------------------------------------------------------------------
    /**
    * Convolutes a bitmap by calculating the mean value of a 3x3 pixel
    * neighborhood as the resulting pixel value.
    */
    static void Mean( const CFbsBitmap& aTarget,
                      const CFbsBitmap& aSource,
                      TInt aBlendFactor )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // ScanLineLength returns bytes, but width must match the Type
    TInt scanWtarget  = (CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode())) / sizeof(Type);
    TInt scanWsource  = (CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode())) / sizeof(Type);

    TInt r, g, b;
    TInt x, y; // Loop counters

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
    Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

    dataS = dataS + scanWsource + 1;

    // Calculate the mean per pixel
    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            r = (AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource - 1)) +
                 AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource    )) +
                 AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource + 1)) +
                 AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - 1              )) +
                 AknsRlRgb<Type,X,R,G,B>::R8(*(dataS                  )) +
                 AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + 1              )) +
                 AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource - 1)) +
                 AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource    )) +
                 AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource + 1))) / 9;

            g = (AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource - 1)) +
                 AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource    )) +
                 AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource + 1)) +
                 AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - 1              )) +
                 AknsRlRgb<Type,X,R,G,B>::G8(*(dataS                  )) +
                 AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + 1              )) +
                 AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource - 1)) +
                 AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource    )) +
                 AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource + 1))) / 9;


            b = (AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource - 1)) +
                 AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource    )) +
                 AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource + 1)) +
                 AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - 1              )) +
                 AknsRlRgb<Type,X,R,G,B>::B8(*(dataS                  )) +
                 AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + 1              )) +
                 AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource - 1)) +
                 AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource    )) +
                 AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource + 1))) / 9;

            // Exposure blending. Note: It is assumed that arithmetic shifting
            // is supported -> negative values are shifted correctly
            r = ( r * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::R8(*dataS) ) >> 8;
            g = ( g * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::G8(*dataS) ) >> 8;
            b = ( b * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::B8(*dataS) ) >> 8;

            if( r < 0 ) r = 0;
            else if( r > 255 ) r = 255;

            if( g < 0 ) g = 0;
            else if( g > 255 ) g = 255;

            if( b < 0 ) b = 0;
            else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }

    //------------------------------------------------------------------------
    /**
    * Extracts the color channel values (red, green, blue) on a 3x3
    * neighborhood to arrays.
    */
    static void ExtractChannels( TUint8 aReds[9], TUint8 aGreens[9], TUint8 aBlues[9],
                                 const Type* aPtr, TInt aScanW )
        {
        // Top left
        Type val = *(aPtr - aScanW - 1);
        aReds[0]   = AknsRlRgb<Type,X,R,G,B>::R8(val);
        aGreens[0] = AknsRlRgb<Type,X,R,G,B>::G8(val);
        aBlues[0]  = AknsRlRgb<Type,X,R,G,B>::B8(val);

        // Top
        val = *(aPtr - aScanW);
        aReds[1]   = AknsRlRgb<Type,X,R,G,B>::R8(val);
        aGreens[1] = AknsRlRgb<Type,X,R,G,B>::G8(val);
        aBlues[1]  = AknsRlRgb<Type,X,R,G,B>::B8(val);

        // Top right
        val = *(aPtr - aScanW + 1);
        aReds[2]   = AknsRlRgb<Type,X,R,G,B>::R8(val);
        aGreens[2] = AknsRlRgb<Type,X,R,G,B>::G8(val);
        aBlues[2]  = AknsRlRgb<Type,X,R,G,B>::B8(val);

        // Left
        val = *(aPtr - 1);
        aReds[3]   = AknsRlRgb<Type,X,R,G,B>::R8(val);
        aGreens[3] = AknsRlRgb<Type,X,R,G,B>::G8(val);
        aBlues[3]  = AknsRlRgb<Type,X,R,G,B>::B8(val);

        // Center
        val = *(aPtr);
        aReds[4]   = AknsRlRgb<Type,X,R,G,B>::R8(val);
        aGreens[4] = AknsRlRgb<Type,X,R,G,B>::G8(val);
        aBlues[4]  = AknsRlRgb<Type,X,R,G,B>::B8(val);

        // Right
        val = *(aPtr + 1);
        aReds[5]   = AknsRlRgb<Type,X,R,G,B>::R8(val);
        aGreens[5] = AknsRlRgb<Type,X,R,G,B>::G8(val);
        aBlues[5]  = AknsRlRgb<Type,X,R,G,B>::B8(val);

        // Bottom left
        val = *(aPtr + aScanW - 1);
        aReds[6]   = AknsRlRgb<Type,X,R,G,B>::R8(val);
        aGreens[6] = AknsRlRgb<Type,X,R,G,B>::G8(val);
        aBlues[6]  = AknsRlRgb<Type,X,R,G,B>::B8(val);

        // Bottom
        val = *(aPtr + aScanW);
        aReds[7]   = AknsRlRgb<Type,X,R,G,B>::R8(val);
        aGreens[7] = AknsRlRgb<Type,X,R,G,B>::G8(val);
        aBlues[7]  = AknsRlRgb<Type,X,R,G,B>::B8(val);

        // Bottom right
        val = *(aPtr + aScanW + 1);
        aReds[8]   = AknsRlRgb<Type,X,R,G,B>::R8(val);
        aGreens[8] = AknsRlRgb<Type,X,R,G,B>::G8(val);
        aBlues[8]  = AknsRlRgb<Type,X,R,G,B>::B8(val);
        }
    //------------------------------------------------------------------------
    /**
    * Convolutes a bitmap by calculating the median value of a 3x3 pixel
    * neighborhood as the resulting pixel value.
    */
    static void Median( const CFbsBitmap& aTarget,
                        const CFbsBitmap& aSource,
                        TInt aBlendFactor )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // ScanLineLength returns bytes, but width must match the Type
    TInt scanWtarget  = (CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode())) / sizeof(Type);
    TInt scanWsource  = (CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode())) / sizeof(Type);

    TInt r, g, b;
    TInt x, y; // Loop counters
    TUint8 reds[9], greens[9], blues[9];

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
    Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

    // Convolute the inner rect
    dataS = dataS + scanWsource + 1;

    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            // Median calculation is done on per channel basis, extract the
            // neighborhood channels.
            ExtractChannels(reds, greens, blues, dataS, scanWsource);

            // Median + exposure blending. Note: It is assumed that arithmetic
            // shifting is supported -> negative values are shifted correctly
            r = ( AknsRlUtil::Median9(reds)   * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::R8(*dataS) ) >> 8;
            g = ( AknsRlUtil::Median9(greens) * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::G8(*dataS) ) >> 8;
            b = ( AknsRlUtil::Median9(blues)  * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::B8(*dataS) ) >> 8;

            if( r < 0 ) r = 0;
            else if( r > 255 ) r = 255;

            if( g < 0 ) g = 0;
            else if( g > 255 ) g = 255;

            if( b < 0 ) b = 0;
            else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }
    //------------------------------------------------------------------------
    /**
    * Convolutes a bitmap by calculating the maximum value of a 3x3 pixel
    * neighborhood as the resulting pixel value.
    */
    static void Max( const CFbsBitmap& aTarget,
                     const CFbsBitmap& aSource,
                     TInt aBlendFactor )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // ScanLineLength returns bytes, but width must match the Type
    TInt scanWtarget  = (CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode())) / sizeof(Type);
    TInt scanWsource  = (CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode())) / sizeof(Type);

    TInt r, g, b;
    TInt x, y; // Loop counters

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
    Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

    // Convolute the inner rect
    dataS = dataS + scanWsource + 1;

    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            r = AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource - 1 ));
            r = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource    )), r );
            r = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource + 1)), r );
            r = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - 1              )), r );
            r = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS                  )), r );
            r = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + 1              )), r );
            r = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource - 1)), r );
            r = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource    )), r );
            r = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource + 1)), r );

            g = AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource - 1 ));
            g = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource    )), g );
            g = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource + 1)), g );
            g = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - 1              )), g );
            g = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS                  )), g );
            g = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + 1              )), g );
            g = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource - 1)), g );
            g = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource    )), g );
            g = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource + 1)), g );


            b = AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource - 1 ));
            b = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource    )), b );
            b = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource + 1)), b );
            b = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - 1              )), b );
            b = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS                  )), b );
            b = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + 1              )), b );
            b = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource - 1)), b );
            b = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource    )), b );
            b = AknsRlUtil::Max( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource + 1)), b );

            // Exposure blending. Note: It is assumed that arithmetic shifting
            // is supported -> negative values are shifted correctly
            r = ( r * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::R8(*dataS) ) >> 8;
            g = ( g * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::G8(*dataS) ) >> 8;
            b = ( b * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::B8(*dataS) ) >> 8;

            if( r < 0 ) r = 0;
            else if( r > 255 ) r = 255;

            if( g < 0 ) g = 0;
            else if( g > 255 ) g = 255;

            if( b < 0 ) b = 0;
            else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }
    //------------------------------------------------------------------------
    /**
    * Convolutes a bitmap by calculating the minimum value of a 3x3 pixel
    * neighborhood as the resulting pixel value.
    */
    static void Min( const CFbsBitmap& aTarget,
                     const CFbsBitmap& aSource,
                     TInt aBlendFactor )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // ScanLineLength returns bytes, but width must match the Type
    TInt scanWtarget  = (CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode())) / sizeof(Type);
    TInt scanWsource  = (CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode())) / sizeof(Type);

    TInt r, g, b;
    TInt x, y; // Loop counters

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    Type* dataT = reinterpret_cast<Type*>( aTarget.DataAddress() );
    Type* dataS = reinterpret_cast<Type*>( aSource.DataAddress() );

    // Convolute the inner rect
    dataS = dataS + scanWsource + 1;

    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            r = AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource - 1 ));
            r = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource    )), r );
            r = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - scanWsource + 1)), r );
            r = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS - 1              )), r );
            r = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS                  )), r );
            r = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + 1              )), r );
            r = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource - 1)), r );
            r = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource    )), r );
            r = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::R8(*(dataS + scanWsource + 1)), r );

            g = AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource - 1 ));
            g = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource    )), g );
            g = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - scanWsource + 1)), g );
            g = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS - 1              )), g );
            g = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS                  )), g );
            g = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + 1              )), g );
            g = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource - 1)), g );
            g = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource    )), g );
            g = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::G8(*(dataS + scanWsource + 1)), g );


            b = AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource - 1 ));
            b = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource    )), b );
            b = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - scanWsource + 1)), b );
            b = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS - 1              )), b );
            b = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS                  )), b );
            b = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + 1              )), b );
            b = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource - 1)), b );
            b = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource    )), b );
            b = AknsRlUtil::Min( AknsRlRgb<Type,X,R,G,B>::B8(*(dataS + scanWsource + 1)), b );

            // Exposure blending. Note: It is assumed that arithmetic shifting
            // is supported -> negative values are shifted correctly
            r = ( r * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::R8(*dataS) ) >> 8;
            g = ( g * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::G8(*dataS) ) >> 8;
            b = ( b * aBlendFactor + (255 - aBlendFactor) * AknsRlRgb<Type,X,R,G,B>::B8(*dataS) ) >> 8;

            if( r < 0 ) r = 0;
            else if( r > 255 ) r = 255;

            if( g < 0 ) g = 0;
            else if( g > 255 ) g = 255;

            if( b < 0 ) b = 0;
            else if( b > 255 ) b = 255;

            AknsRlRgb<Type,X,R,G,B>::SetRgb8( dataT, TUint8(r), TUint8(g), TUint8(b) );

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }
    }; // End of AknsRlEffectConvolution

// =================== GRAYSCALE IMPL. OF CONVOLUTION ==========================
/**
* Implementation of grayscale convolutions. The code is similar to templated
* RGB versions above, the main difference is that only one channel value (gray)
* is processed per pixel.
*/
class AknsRlEffectConvolutionGray
    {
    public:
    //------------------------------------------------------------------------
    static void Kernel( const CFbsBitmap& aTarget,
                        const CFbsBitmap& aSource,
                        const TInt aKernel[9],
                        const TInt aBlendFactor,
                        const TInt aBias )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // CFbsBitmap::ScanLineLength returns bytes
    TInt scanWtarget  = CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode());
    TInt scanWsource  = CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode());

    TInt kernelSum = aKernel[0] + aKernel[1] + aKernel[2] +
                     aKernel[3] + aKernel[4] + aKernel[5] +
                     aKernel[6] + aKernel[7] + aKernel[8];

    if( 0 == kernelSum )
        kernelSum = 1;

    TInt shade;
    TInt x, y; // Loop counters

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
    TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );

    dataS = dataS + scanWsource + 1;

    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            shade = aBias + (*(dataS - scanWsource - 1) * aKernel[0] +
                             *(dataS - scanWsource    ) * aKernel[1] +
                             *(dataS - scanWsource + 1) * aKernel[2] +
                             *(dataS - 1              ) * aKernel[3] +
                             *(dataS                  ) * aKernel[4] +
                             *(dataS + 1              ) * aKernel[5] +
                             *(dataS + scanWsource - 1) * aKernel[6] +
                             *(dataS + scanWsource    ) * aKernel[7] +
                             *(dataS + scanWsource + 1) * aKernel[8]) / kernelSum;

            // Exposure blending. Note: It is assumed that arithmetic shifting
            // is supported -> negative values are shifted correctly
            shade = ( shade * aBlendFactor + (255 - aBlendFactor) * (*dataS) ) >> 8; //lint !e702 Arithmetic shifting assumed

            if( shade < 0 )
                *dataT = 0;
            else if( shade > 255 )
                *dataT = 255;
            else
                *dataT = TUint8(shade);

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }
    //------------------------------------------------------------------------
    /**
    * "Convolutes" a bitmap with adjustable gaussian blur kernel.
    * Kernel size from 3*3 to 33*33 (odd sizes).
    */
    static void AdjustableGaussian( const CFbsBitmap& aTarget,
                                    const CFbsBitmap& aSource,
                                    TUint16* aColumnBuffer,
                                    const TInt aKernelsize )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // ScanLineLength returns bytes, but width must match the Type
    TInt scanWtarget  = (CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode()));
    TInt scanWsource  = (CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode()));

    TUint16 shade;
    TInt x, y, i; // Loop counters

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
    TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );
    TUint8* dataR = dataT; // for recursive iterations, both source and target are the same
    dataS = dataS + scanWsource + 1; // state machine takes pixel (1,1) and output goes to pixel (0,0)

    TUint16 tmp1;
    TUint16 tmp2;

    // row buffer variables
    TUint16 SR0;
    TUint16 SR1;

    TInt col0_Index; // index for row 0 columns in aColumnBuffer
    TInt col1_Index; // index for row 1 columns in aColumnBuffer

    for ( i = 0; i < (aKernelsize - 1) >> 1 ; i++ ) // do (N-1) / 2 times
        {

        for( y = 0; y < (height - 1); y++ )
            {
            SR0 = (TUint16)*dataS; // initialize row buffer variables
            SR1 = (TUint16)*dataS;
            col0_Index = 0; // initialize indexes for column buffers
            col1_Index = width;

            for( x = 0; x < (width - 1); x++ )
                {
                tmp1 = (TUint16)*dataS;
                tmp2 = (TUint16)(SR0 + tmp1);
                SR0 = tmp1;
                tmp1 = (TUint16)(SR1 + tmp2);
                SR1 = tmp2;

                tmp2 = (TUint16)(aColumnBuffer[col0_Index] + tmp1);
                aColumnBuffer[col0_Index++] = tmp1;
                shade = (TUint16)((8 + aColumnBuffer[col1_Index] + tmp2) >> 4);
                aColumnBuffer[col1_Index++] = tmp2;

                if( shade > 255 ) shade = 255;
                *dataT = (TUint8)shade;

                dataT++;
                dataS++;
                }

            dataT = dataT + pitchTarget + 1;
            dataS = dataS + pitchSource + 1;
            }
        dataT = dataR; // for more than 1 iterations, use target bitmap for both
        dataS = dataR+scanWtarget+1; // target and source
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }

    //------------------------------------------------------------------------
    static void Mean( const CFbsBitmap& aTarget,
                      const CFbsBitmap& aSource,
                      TInt aBlendFactor )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // CFbsBitmap::ScanLineLength returns bytes
    TInt scanWtarget  = CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode());
    TInt scanWsource  = CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode());

    TInt shade;
    TInt x, y; // Loop counters

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
    TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );

    // Convolute the inner rect
    dataS = dataS + scanWsource + 1;

    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            shade = (*(dataS - scanWsource - 1) +
                     *(dataS - scanWsource    ) +
                     *(dataS - scanWsource + 1) +
                     *(dataS - 1              ) +
                     *(dataS                  ) +
                     *(dataS + 1              ) +
                     *(dataS + scanWsource - 1) +
                     *(dataS + scanWsource    ) +
                     *(dataS + scanWsource + 1)) / 9;

            // Exposure blending. Note: It is assumed that arithmetic shifting
            // is supported -> negative values are shifted correctly
            shade = ( shade * aBlendFactor + (255 - aBlendFactor) * (*dataS) ) >> 8;

            if( shade < 0 )
                *dataT = 0;
            else if( shade > 255 )
                *dataT = 255;
            else
                *dataT = TUint8(shade);

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }
    //------------------------------------------------------------------------
    /**
    * Collects the shades on a 3x3 neighborhood to array.
    */
    static void ExtractShades( TUint8 aShades[9], const TUint8* aPtr, TInt aScanW )
        {
        aShades[0] = *(aPtr - aScanW - 1); // Top left
        aShades[1] = *(aPtr - aScanW);     // Top
        aShades[2] = *(aPtr - aScanW + 1); // Top right
        aShades[3] = *(aPtr - 1);          // Left
        aShades[4] = *(aPtr);              // Center
        aShades[5] = *(aPtr + 1);          // Right
        aShades[6] = *(aPtr + aScanW - 1); // Bottom left
        aShades[7] = *(aPtr + aScanW);     // Bottom
        aShades[8] = *(aPtr + aScanW + 1); // Bottom right
        }
    //------------------------------------------------------------------------
    static void Median( const CFbsBitmap& aTarget,
                        const CFbsBitmap& aSource,
                        TInt aBlendFactor )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // CFbsBitmap::ScanLineLength returns bytes
    TInt scanWtarget  = CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode());
    TInt scanWsource  = CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode());

    TInt shade;
    TInt x, y; // Loop counters
    TUint8 shades[9];

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
    TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );

    // Convolute the inner rect
    dataS = dataS + scanWsource + 1;

    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            ExtractShades(shades, dataS, scanWsource);

            // Median + exposure blending. Note: It is assumed that arithmetic
            // shifting is supported -> negative values are shifted correctly
            shade = ( AknsRlUtil::Median9(shades) * aBlendFactor + (255 - aBlendFactor) * (*dataS) ) >> 8;

            if( shade < 0 )
                *dataT = 0;
            else if( shade > 255 )
                *dataT = 255;
            else
                *dataT = TUint8(shade);

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }
    //------------------------------------------------------------------------
    static void Max( const CFbsBitmap& aTarget,
                     const CFbsBitmap& aSource,
                     TInt aBlendFactor )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // CFbsBitmap::ScanLineLength returns bytes
    TInt scanWtarget  = CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode());
    TInt scanWsource  = CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode());

    TInt shade;
    TInt x, y; // Loop counters

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
    TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );

    // Convolute the inner rect
    dataS = dataS + scanWsource + 1;

    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            shade = *(dataS - scanWsource - 1 );
            shade = AknsRlUtil::Max( *(dataS - scanWsource    ), shade );
            shade = AknsRlUtil::Max( *(dataS - scanWsource + 1), shade );
            shade = AknsRlUtil::Max( *(dataS - 1              ), shade );
            shade = AknsRlUtil::Max( *(dataS                  ), shade );
            shade = AknsRlUtil::Max( *(dataS + 1              ), shade );
            shade = AknsRlUtil::Max( *(dataS + scanWsource - 1), shade );
            shade = AknsRlUtil::Max( *(dataS + scanWsource    ), shade );
            shade = AknsRlUtil::Max( *(dataS + scanWsource + 1), shade );

            // Exposure blending. Note: It is assumed that arithmetic shifting
            // is supported -> negative values are shifted correctly
            shade = ( shade * aBlendFactor + (255 - aBlendFactor) * (*dataS) ) >> 8;

            if( shade < 0 )
                *dataT = 0;
            else if( shade > 255 )
                *dataT = 255;
            else
                *dataT = TUint8(shade);

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }
    //------------------------------------------------------------------------
    static void Min( const CFbsBitmap& aTarget,
                     const CFbsBitmap& aSource,
                     TInt aBlendFactor )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;
    // CFbsBitmap::ScanLineLength returns bytes
    TInt scanWtarget  = CFbsBitmap::ScanLineLength(aTarget.SizeInPixels().iWidth, aTarget.DisplayMode());
    TInt scanWsource  = CFbsBitmap::ScanLineLength(aSource.SizeInPixels().iWidth, aSource.DisplayMode());

    TInt shade;
    TInt x, y; // Loop counters

    // Pitch is the number of pixels to skip before next scanline start
    TInt pitchTarget = scanWtarget - width;
    TInt pitchSource = scanWsource - width;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    TUint8* dataT = reinterpret_cast<TUint8*>( aTarget.DataAddress() );
    TUint8* dataS = reinterpret_cast<TUint8*>( aSource.DataAddress() );

    // Convolute the inner rect
    dataS = dataS + scanWsource + 1;

    for( y = 0; y < height; y++ )
        {
        for( x = 0; x < width; x++ )
            {
            shade = *(dataS - scanWsource - 1 );
            shade = AknsRlUtil::Min( *(dataS - scanWsource    ), shade );
            shade = AknsRlUtil::Min( *(dataS - scanWsource + 1), shade );
            shade = AknsRlUtil::Min( *(dataS - 1              ), shade );
            shade = AknsRlUtil::Min( *(dataS                  ), shade );
            shade = AknsRlUtil::Min( *(dataS + 1              ), shade );
            shade = AknsRlUtil::Min( *(dataS + scanWsource - 1), shade );
            shade = AknsRlUtil::Min( *(dataS + scanWsource    ), shade );
            shade = AknsRlUtil::Min( *(dataS + scanWsource + 1), shade );

            // Exposure blending. Note: It is assumed that arithmetic shifting
            // is supported -> negative values are shifted correctly
            shade = ( shade * aBlendFactor + (255 - aBlendFactor) * (*dataS) ) >> 8; //lint !e702 Arithmetic shifting assumed

            if( shade < 0 )
                *dataT = 0;
            else if( shade > 255 )
                *dataT = 255;
            else
                *dataT = TUint8(shade);

            dataT++;
            dataS++;
            }

        dataT = dataT + pitchTarget;
        dataS = dataS + pitchSource;
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }
    }; // End of AknsRlEffectConvolutionGray

// ============================ MEMBER FUNCTIONS ===============================

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::CAknsRlEffectPluginConvolution
// C++ default constructor can NOT contain any code, that
// might leave.
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginConvolution::CAknsRlEffectPluginConvolution()
    {
    }

// -----------------------------------------------------------------------------
// Destructor
// -----------------------------------------------------------------------------
//
CAknsRlEffectPluginConvolution::~CAknsRlEffectPluginConvolution()
    {
    iContext = NULL; // Removes lint nag
    iColumnBuffer = NULL; // Removes lint nag
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::EffectUid
// -----------------------------------------------------------------------------
//
TUid CAknsRlEffectPluginConvolution::EffectUid() const
    {
    return TUid::Uid( KAknsRlEffectPluginConvolutionUID );
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::Effect
// -----------------------------------------------------------------------------
//
MAknsRlEffect* CAknsRlEffectPluginConvolution::Effect( const TInt aInterface )
    {
    if( aInterface == KAknsRlEffectPluginInterfaceEffect )
        return this;
    return NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::InitializeL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginConvolution::InitializeL()
    {
    iContext = NULL;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::Release
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginConvolution::Release()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::ActivateL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginConvolution::ActivateL( MAknsRlEffectContext* aContext )
    {
    if( !aContext ) // We absolutely need the context
        {
        User::Leave( KErrArgument );
        }

    iContext = aContext;

    iMode = EModeEdge;
    iBlendFactor = 255;
    iGaussianBlurSize = 3;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::Deactivate
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginConvolution::Deactivate()
    {
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::SetParametersL
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginConvolution::SetParametersL( MAknsRlParameterIterator& aParameters )
    {
    // Iterate over available parameters
    while( aParameters.HasNext() )
        {
        const TAknsRlParameterData* param = aParameters.NextL();

        // Fetch mode value
        if( param->iName->Compare( KAknsRlEffectConvolutionMode ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            if( param->iNumber < EModeEdge || param->iNumber > EModeAdjustableGaussian )
                User::Leave( KErrArgument );

            iMode = param->iNumber;
            }
        // Fetch blend factor value
        else if( param->iName->Compare( KAknsRlEffectConvolutionBlendFactor ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            iBlendFactor = param->iNumber;
            }
        // Fetch adjustable gaussian blur size
        else if( param->iName->Compare( KAknsRlEffectConvolutionGaussianBlurSize ) == 0 )
            {
            if( param->iType != EAknsRlParameterTypeNumber )
                User::Leave( KErrArgument );

            // only odd sizes allowed
            if ( param->iNumber < 3 ||
                 param->iNumber > 55 ||
                 !(param->iNumber&1) )
                User::Leave( KErrArgument );
            iGaussianBlurSize = param->iNumber;
            }
        }
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::GetCapabilities
// -----------------------------------------------------------------------------
//
void CAknsRlEffectPluginConvolution::GetCapabilities( TAknsRlEffectCaps& aCaps )
    {
    aCaps.iOutputLayerSupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerASupport = KAknsRlLayerRGBOnly;
    aCaps.iInputLayerBSupport = KAknsRlLayerNone;
    }

// -----------------------------------------------------------------------------
// CAknsRlEffectPluginConvolution::Render
// -----------------------------------------------------------------------------
//
TInt CAknsRlEffectPluginConvolution::Render( const TAknsRlRenderOpParam& aParam )
    {
    if( !iContext ) // We absolutely need the context
        {
        return KErrBadHandle;
        }

    // To do anything we need both, the output layer and input layer
    if( ( aParam.iOutputLayerStatus & KAknsRlLayerRGBOnly ) &&
        ( aParam.iInputLayerAStatus & KAknsRlLayerRGBOnly ) )
        {
        // Query the layers, uninitialized because we process the whole image
        TAknsRlLayerData dataTarget;
        TRAPD( err, iContext->GetLayerDataL( dataTarget, aParam.iOutputLayerIndex,
                                             aParam.iOutputLayerStatus, EFalse ) );
        if( KErrNone != err )
            return KErrArgument;

        TAknsRlLayerData dataSource;
        TRAP( err, iContext->GetLayerDataL( dataSource, aParam.iInputLayerAIndex,
                                            aParam.iInputLayerAStatus, EFalse ) );
        if( KErrNone != err )
            return KErrArgument;

        if( !dataTarget.iRGBBitmap ) // We need the target bitmap
            return KErrBadHandle;

        if( !dataSource.iRGBBitmap ) // We need the source bitmap
            return KErrBadHandle;

        CFbsBitmap& t = *(dataTarget.iRGBBitmap);
        CFbsBitmap& s = *(dataSource.iRGBBitmap);

        TDisplayMode modeT = t.DisplayMode();
        TDisplayMode modeS = s.DisplayMode();

        TInt sWidth  = s.SizeInPixels().iWidth;
        TInt sHeight = s.SizeInPixels().iHeight;

        // adjustable gaussian blur is a special case, which doesn't need
        // temporary bitmap, so this must be handled before other convolution
        // filters
        if ( TMode( iMode ) == EModeAdjustableGaussian)
            {
            // first try to allocate space for row and column data buffers

            TInt rgbUsed = 3;
            if( EGray256 == modeT && EGray256 == modeS )
                rgbUsed = 1; // no need for extra buffer for rgb components

            // 2 rows in sWidth columns, 3 times for rgb pictures
            iColumnBuffer = new TUint16[2*sWidth*rgbUsed]; // OOM returns NULL
            if ( !iColumnBuffer )
                return KErrNoMemory;

            for (int i=0; i<2*sWidth*rgbUsed ; i++)
                iColumnBuffer[i] = 0; // empty buffer

            if( EColor64K == modeT && EColor64K == modeS )
                AknsRlEffectConvolution<TUint16,0,5,6,5>::AdjustableGaussian( t, s, iColumnBuffer, iGaussianBlurSize );
            else if( EColor16MU == modeT && EColor16MU == modeS )
                AknsRlEffectConvolution<TUint32,8,8,8,8>::AdjustableGaussian( t, s, iColumnBuffer, iGaussianBlurSize );
            else if( EGray256 == modeT && EGray256 == modeS )
                AknsRlEffectConvolutionGray::AdjustableGaussian( t, s, iColumnBuffer, iGaussianBlurSize );
            else
                return KErrArgument;

            delete [] iColumnBuffer;
            return KErrNone;
            }



        // for convolution we need source bitmap that is 2 pixels wider and
        // higher than target (because we need to convolute border pixels)
        // this also removes the need to backup source pixels if source
        // and target bitmaps are the same
        CFbsBitmap* sNew = NULL;
        sNew = new CFbsBitmap(); // OOM returns NULL
        if( !sNew )
            return KErrNoMemory;
        const CFbsBitmap& sTmp = *sNew;

        TInt bmpError = sNew->Create(TSize(sWidth+2,sHeight+2),modeS);
        if (bmpError != KErrNone) // if there was some error in creating new bitmap
            {
            delete sNew;
            return bmpError;
            }

        // CFbsBitmap::ScanLineLength returns bytes
        TInt originalSourceScanW  = CFbsBitmap::ScanLineLength(
                                    s.SizeInPixels().iWidth,
                                    s.DisplayMode());
        TInt convoSourceScanW  = CFbsBitmap::ScanLineLength(
                                    sTmp.SizeInPixels().iWidth,
                                    sTmp.DisplayMode());

        // Prepare the data addresses
        s.LockHeap( ETrue ); // Lock the global bitmap heap
        TUint* originalSourceAddr = reinterpret_cast<TUint*>( s.DataAddress() );
        TUint* convoSourceAddr = reinterpret_cast<TUint*>( sTmp.DataAddress() );

        switch( modeS )
            {
            case EColor64K:
                {
                AMakeConvoluteSource64K(convoSourceAddr,
                                        originalSourceAddr,
                                        convoSourceScanW,
                                        originalSourceScanW,
                                        sWidth,
                                        sHeight);
                s.UnlockHeap( ETrue ); // Unlock the global bitmap heap
                break;
                }
            case EColor16MU:
                {
                AMakeConvoluteSource16MU(convoSourceAddr,
                                         originalSourceAddr,
                                         convoSourceScanW,
                                         originalSourceScanW,
                                         sWidth,
                                         sHeight);
                s.UnlockHeap( ETrue ); // Unlock the global bitmap heap
                break;
                }
            case EGray256:
                {
                AMakeConvoluteSource256(convoSourceAddr,
                                        originalSourceAddr,
                                        convoSourceScanW,
                                        originalSourceScanW,
                                        sWidth,
                                        sHeight);
                s.UnlockHeap( ETrue ); // Unlock the global bitmap heap
                break;
                }
            default:
                {
                s.UnlockHeap( ETrue ); // Unlock the global bitmap heap
                return KErrArgument;
                }
            }


#if !defined(ARM_VERSION) // separate switch-case for WINS and ARMI versions
        switch( TMode( iMode ) )
            {
            // Convolution kernel modes
            case EModeEdge:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelEdgeDetect, iBlendFactor, 0 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEdgeDetect, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEdgeDetect, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeBlur:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelBlur, iBlendFactor, 0 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelBlur, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelBlur, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeBlurGauss:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelBlurGauss, iBlendFactor, 0 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelBlurGauss, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelBlurGauss, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeEmbossSoft:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelEmbossSoft, iBlendFactor, 127 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEmbossSoft, iBlendFactor, 127 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEmbossSoft, iBlendFactor, 127 );
                else
                    return KErrArgument;
                }
                break;
            case EModeEmbossHard:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelEmbossHard, iBlendFactor, 127 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEmbossHard, iBlendFactor, 127 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEmbossHard, iBlendFactor, 127 );
                else
                    return KErrArgument;
                }
                break;
            case EModeEnhanceDetail:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelEnhanceDetail, iBlendFactor, 0 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEnhanceDetail, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEnhanceDetail, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeEnhanceFocus:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelEnhanceFocus, iBlendFactor, 0 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEnhanceFocus, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEnhanceFocus, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeSoften:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelSoften, iBlendFactor, 0 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelSoften, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelSoften, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeSharpen:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelSharpen, iBlendFactor, 0 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelSharpen, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelSharpen, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeSharpenMore:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Kernel( t, sTmp, KKernelSharpenMore, iBlendFactor, 0 );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelSharpenMore, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelSharpenMore, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;

            // Convolution filter modes
            case EModeMean:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Mean( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Mean( t, sTmp, iBlendFactor );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Mean( t, sTmp, iBlendFactor );
                else
                    return KErrArgument;
                }
                break;
            case EModeMedian:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Median( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Median( t, sTmp, iBlendFactor );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Median( t, sTmp, iBlendFactor );
                else
                    return KErrArgument;
                }
                break;
            case EModeDilate:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Max( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Max( t, sTmp, iBlendFactor );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Max( t, sTmp, iBlendFactor );
                else
                    return KErrArgument;
                }
                break;
            case EModeErode:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Min( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Min( t, sTmp, iBlendFactor );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Min( t, sTmp, iBlendFactor );
                else
                    return KErrArgument;
                }
                break;

            default:
                return KErrArgument;
            }
#else // ASM versions for hardware
        switch( TMode( iMode ) )
            {
            // Convolution kernel modes
            case EModeEdge:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KEdge( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEdgeDetect, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEdgeDetect, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeBlur:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KBlur( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelBlur, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelBlur, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeBlurGauss:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KBlurGauss( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelBlurGauss, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelBlurGauss, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeEmbossSoft:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KEmbossSoft( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEmbossSoft, iBlendFactor, 127 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEmbossSoft, iBlendFactor, 127 );
                else
                    return KErrArgument;
                }
                break;
            case EModeEmbossHard:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KEmbossHard( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEmbossHard, iBlendFactor, 127 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEmbossHard, iBlendFactor, 127 );
                else
                    return KErrArgument;
                }
                break;
            case EModeEnhanceDetail:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KEnhanceDetail( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEnhanceDetail, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEnhanceDetail, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeEnhanceFocus:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KEnhanceFocus( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelEnhanceFocus, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelEnhanceFocus, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeSoften:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KSoften( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelSoften, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelSoften, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeSharpen:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KSharpen( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelSharpen, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelSharpen, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;
            case EModeSharpenMore:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AConvolute64KSharpenMore( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Kernel( t, sTmp, KKernelSharpenMore, iBlendFactor, 0 );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Kernel( t, sTmp, KKernelSharpenMore, iBlendFactor, 0 );
                else
                    return KErrArgument;
                }
                break;

            // Convolution filter modes
            case EModeMean:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Mean( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Mean( t, sTmp, iBlendFactor );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Mean( t, sTmp, iBlendFactor );
                else
                    return KErrArgument;
                }
                break;
            case EModeMedian:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Median( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Median( t, sTmp, iBlendFactor );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Median( t, sTmp, iBlendFactor );
                else
                    return KErrArgument;
                }
                break;
            case EModeDilate:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Max( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Max( t, sTmp, iBlendFactor );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Max( t, sTmp, iBlendFactor );
                else
                    return KErrArgument;
                }
                break;
            case EModeErode:
                {
                if( EColor64K == modeT && EColor64K == modeS )
                    AknsRlEffectConvolution<TUint16,0,5,6,5>::Min( t, sTmp, iBlendFactor );
                else if( EColor16MU == modeT && EColor16MU == modeS )
                    AknsRlEffectConvolution<TUint32,8,8,8,8>::Min( t, sTmp, iBlendFactor );
                else if( EGray256 == modeT && EGray256 == modeS )
                    AknsRlEffectConvolutionGray::Min( t, sTmp, iBlendFactor );
                else
                    return KErrArgument;
                }
                break;

            default:
                return KErrArgument;
            }

#endif // !__MARM_ARMI__

        delete sNew;
        }
    else
        {
        // Required layers were not provided
        return KErrArgument;
        }

    return KErrNone;
    }

/*lint -restore */

// End of File

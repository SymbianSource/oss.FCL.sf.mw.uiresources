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
*  Name : WOW Testbench, assembler version of make convolution bitmaps
* ============================================================================
*/

// INCLUDE FILES
#include <bitstd.h>
#include <bitdev.h>

#include "fx_asm_versions.h"


void AProcessContrast( const CFbsBitmap& aTarget,
                       const CFbsBitmap& aSource,
                       const TInt aAdjustment,
                       const TDisplayMode aMode )
    {
    // ScanLineLength returns bytes, but width must match the displaymode
    TInt width  = CFbsBitmap::ScanLineLength( aSource.SizeInPixels().iWidth,
                                              aSource.DisplayMode() );
    if (aMode == EColor16MU)
        {
        width = width / 4;
        }
    else
        {
        width = width / 2;
        }
    TInt height = aSource.SizeInPixels().iHeight;

    TInt pixelCount = width * height;

    aTarget.LockHeap( ETrue ); // Lock the global bitmap buffer
    TUint* targetAddr = reinterpret_cast<TUint*>( aTarget.DataAddress() );
    TUint* sourceAddr = reinterpret_cast<TUint*>( aSource.DataAddress() );

    if (aMode == EColor16MU)
        {
        ADoContrast16MU(targetAddr, sourceAddr, pixelCount, aAdjustment);
        }
    else
        {
        ADoContrast64K(targetAddr, sourceAddr, pixelCount, aAdjustment);
        }

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }


#pragma warning(disable : 4100)
#ifndef ARM_VERSION
__NAKED__ void ADoContrast64K( TUint*, TUint*, TInt, TInt )
    {
//    return;
#else
__NAKED__ void ADoContrast64K( TUint* aBaseT,
                               TUint* aBaseS,
                               TInt aPixelCount,
                               TInt aAdjustment)
    {
//    Parameters:
//    r0 = target,
//    r1 = source,
//    r2 = pixelcount,
//    r3 = contrast adjustment parameter
//    pixel format rrrrrggggggbbbbb (565)

    PUSH    {r0-r12,lr}
    
    SUB     r12, r3, r3, LSL #7 // r12 = -(127 * aAdjustment)
    ADD     r11, r3, #0xff      // r11 = 255 + aAdjustment
    
    MOV     r3, #0x1f           // used in saturation for red and blue
    MOV     r4, #0x3f           // for green
    
    AND     r10, r2, #0x3       // save last pixels
    PUSH    {r10}               // r10 used in loop
    LSRS    r2, r2, #2          // we process 4 pixel at time, so divide counter by 4
    BEQ     processlastpixels64k   // less than 4 pixels to process
    
processloop64k
    
    LDMIA   r1!, {r5-r6}        // load 4 pixels to r5-r6

    // first process upper 16 bits of r5
    AND     r7, r3, r5, LSR #27 // r7 = red?
    LSL     r7, r7, #3          // convert to 8 bits
    MLA     r7, r11, r7, r12    // r7 = r7 * r11 + r12
    AND     lr, r4, r5, LSR #21 // lr = green?
    LSL     lr, lr, #2          // convert to 8 bits
    MLA     lr, r11, lr, r12    // r8 = r8 * r11 + r12
    AND     r9, r3, r5, LSR #16  // r9 = blue?    
    LSL     r9, r9, #3          // convert to 8 bits
    MLA     r9, r11, r9, r12    // r9 = r9 * r11 + r12
    LSR     r10, r7, #11        // r10 = r7 >> 8+3
    CMP     r10, #0x1f          // if r10 > 0x1f (max red)
    BICGT   r10, r3, r7, ASR #31    // then r10 = 0x1f and not sign bit of r7
    LSR     r7, lr, #10         // r7 = lr >> 8+2
    CMP     r7, #0x3f           // if r7 > 0x3f
    BICGT   r7, r4, lr, ASR #31 // then r7 = 0x3f and not sign bit of r8
    LSR     lr, r9, #11         // lr = r9 >> 8+3
    CMP     lr, #0x1f           // if lr > 0x1f
    BICGT   lr, r3, r9, ASR #31 // then lr = 0x1f and not sign bit of r9
    ORR     lr, lr, r7, LSL #5  // lr now has green and blue
    ORR     lr, lr, r10, LSL #11    // and red    

    // second process lower 16 bits of r5
    AND     r7, r3, r5, LSR #11 // r7 = red?
    LSL     r7, r7, #3          // convert to 8 bits
    MLA     r7, r11, r7, r12    // r7 = r7 * r11 + r12
    AND     r8, r4, r5, LSR #5  // r8 = green?
    LSL     r8, r8, #2          // convert to 8 bits
    MLA     r8, r11, r8, r12    // r8 = r8 * r11 + r12
    AND     r9, r3, r5          // r9 = blue?    
    LSL     r9, r9, #3          // convert to 8 bits
    MLA     r9, r11, r9, r12    // r9 = r9 * r11 + r12
    LSR     r10, r7, #11        // r10 = r7 >> 8+3
    CMP     r10, #0x1f          // if r10 > 0x1f (max red)
    BICGT   r10, r3, r7, ASR #31    // then r10 = 0x1f and not sign bit of r7
    LSR     r7, r8, #10         // r7 = r8 >> 8+2
    CMP     r7, #0x3f           // if r7 > 0x3f
    BICGT   r7, r4, r8, ASR #31 // then r7 = 0x3f and not sign bit of r8
    LSR     r5, r9, #11         // r5 = r9 >> 8+3
    CMP     r5, #0x1f           // if r5 > 0x1f
    BICGT   r5, r3, r9, ASR #31 // then r5 = 0x1f and not sign bit of r9
    ORR     r5, r5, r7, LSL #5  // r5 now has green and blue
    ORR     r5, r5, r10, LSL #11    // and red
    ORR     r5, r5, lr, LSL #16 // combine r5 with lr (upper pixel)   
    
    // third process upper 16 bits of r6
    AND     r7, r3, r6, LSR #27 // r7 = red?
    LSL     r7, r7, #3          // convert to 8 bits
    MLA     r7, r11, r7, r12    // r7 = r7 * r11 + r12
    AND     lr, r4, r6, LSR #21 // lr = green?
    LSL     lr, lr, #2          // convert to 8 bits
    MLA     lr, r11, lr, r12    // r8 = r8 * r11 + r12
    AND     r9, r3, r6, LSR #16  // r9 = blue?    
    LSL     r9, r9, #3          // convert to 8 bits
    MLA     r9, r11, r9, r12    // r9 = r9 * r11 + r12
    LSR     r10, r7, #11        // r10 = r7 >> 8+3
    CMP     r10, #0x1f          // if r10 > 0x1f (max red)
    BICGT   r10, r3, r7, ASR #31    // then r10 = 0x1f and not sign bit of r7
    LSR     r7, lr, #10         // r7 = lr >> 8+2
    CMP     r7, #0x3f           // if r7 > 0x3f
    BICGT   r7, r4, lr, ASR #31 // then r7 = 0x3f and not sign bit of r8
    LSR     lr, r9, #11         // lr = r9 >> 8+3
    CMP     lr, #0x1f           // if lr > 0x1f
    BICGT   lr, r3, r9, ASR #31 // then lr = 0x1f and not sign bit of r9
    ORR     lr, lr, r7, LSL #5  // lr now has green and blue
    ORR     lr, lr, r10, LSL #11    // and red    

    // last process lower 16 bits of r6
    AND     r7, r3, r6, LSR #11 // r7 = red?
    LSL     r7, r7, #3          // convert to 8 bits
    MLA     r7, r11, r7, r12    // r7 = r7 * r11 + r12
    AND     r8, r4, r6, LSR #5  // r8 = green?
    LSL     r8, r8, #2          // convert to 8 bits
    MLA     r8, r11, r8, r12    // r8 = r8 * r11 + r12
    AND     r9, r3, r6          // r9 = blue?    
    LSL     r9, r9, #3          // convert to 8 bits
    MLA     r9, r11, r9, r12    // r9 = r9 * r11 + r12
    LSR     r10, r7, #11        // r10 = r7 >> 8+3
    CMP     r10, #0x1f          // if r10 > 0x1f (max red)
    BICGT   r10, r3, r7, ASR #31    // then r10 = 0x1f and not sign bit of r7
    LSR     r7, r8, #10         // r7 = r8 >> 8+2
    CMP     r7, #0x3f           // if r7 > 0x3f
    BICGT   r7, r4, r8, ASR #31 // then r7 = 0x3f and not sign bit of r8
    LSR     r6, r9, #11         // r6 = r9 >> 8+3
    CMP     r6, #0x1f           // if r6 > 0x1f
    BICGT   r6, r3, r9, ASR #31 // then r6 = 0x1f and not sign bit of r9
    ORR     r6, r6, r7, LSL #5  // r6 now has green and blue
    ORR     r6, r6, r10, LSL #11    // and red
    ORR     r6, r6, lr, LSL #16 // combine r6 with lr (upper pixel)   

    STMIA   r0!, {r5-r6}        // store 4 pixels from r5-r6
    
    SUBS    r2, r2, #1
    BNE     processloop64k
    
processlastpixels64k

    POP     {r10}
    CMP     r10, #0
    BEQ     processend64k      // no more pixels to process
    
processlastloop64k

    LDRH    r5, [r1], #2        // load pixel to r5
    AND     r7, r3, r5, LSR #11 // r7 = red?
    LSL     r7, r7, #3          // convert to 8 bits
    MLA     r7, r11, r7, r12    // r7 = r7 * r11 + r12
    AND     r8, r4, r5, LSR #5  // r8 = green?
    LSL     r8, r8, #2          // convert to 8 bits
    MLA     r8, r11, r8, r12    // r8 = r8 * r11 + r12
    AND     r9, r3, r5          // r9 = blue?    
    LSL     r9, r9, #3          // convert to 8 bits
    MLA     r9, r11, r9, r12    // r9 = r9 * r11 + r12
    LSR     r6, r7, #11         // r6 = r7 >> 8+3
    CMP     r6, #0x1f           // if r6 > 0x1f (max red)
    BICGT   r6, r3, r7, ASR #31 // then r6 = 0x1f and not sign bit of r7
    LSR     r7, r8, #10         // r7 = r8 >> 8+2
    CMP     r7, #0x3f           // if r7 > 0x3f
    BICGT   r7, r4, r8, ASR #31 // then r7 = 0x3f and not sign bit of r8
    LSR     r5, r9, #11         // r5 = r9 >> 8+3
    CMP     r5, #0x1f           // if r5 > 0x1f
    BICGT   r5, r3, r9, ASR #31 // then r5 = 0x1f and not sign bit of r9
    ORR     r5, r5, r7, LSL #5  // r5 now has green and blue
    ORR     r5, r5, r6, LSL #11 // and red
    STRH    r5, [r0], #2        // write pixel to target

    SUBS    r10, r10, #1
    BNE     processlastloop64k
    
processend64k
    
    POP     {r0-r12,pc}
    //BX lr
#endif // ARM_VERSION
    }
    
    
#ifndef ARM_VERSION
__NAKED__ void ADoContrast16MU( TUint*, TUint*, TInt, TInt )
    {
    
//    return;
#else
__NAKED__ void ADoContrast16MU( TUint* aBaseT,
                                TUint* aBaseS,
                                TInt aPixelCount,
                                TInt aAdjustment)
    {
//    Parameters:
//    r0 = target,
//    r1 = source,
//    r2 = pixelcount,
//    r3 = contrast adjustment parameter

    PUSH    {r0-r12,lr}
    
    SUB     r12, r3, r3, LSL #7 // r12 = -(127 * aAdjustment)
    ADD     r11, r3, #0xff      // r11 = 255 + aAdjustment

    MOV     lr, #0xff           // used in saturation
        
    AND     r10, r2, #0x3       // save last pixels
    LSRS    r2, r2, #2          // we process 4 pixel at time, so divide counter by 4
    BEQ     processlastpixels   // less than 4 pixels to process
    
processloop
    
    LDMIA   r1!, {r4-r7}        // load 4 pixels to r4-r7

    AND     r8, lr, r4, LSR #16
    MLA     r8, r11, r8, r12    // r8 = r8 * r11 + r12
    AND     r9, lr, r4, LSR #8
    MLA     r9, r11, r9, r12
    AND     r4, r4, #0xff       // r4 = blue?
    MLA     r4, r11, r4, r12
    MOV     r3, r8, LSR #8      // r3 = r8 >> 8
    CMP     r3, #0xff           // if r8 was negative or shifted r8 > 255
    BICGT   r3, lr, r8, ASR #31 // then r3 is either 0 or 255
    LSR     r8, r9, #8
    CMP     r8, #0xff
    BICGT   r8, lr, r9, ASR #31
    LSR     r9, r4, #8
    CMP     r9, #0xff
    BICGT   r9, lr, r4, ASR #31
    ORR     r4, r9, #0xff000000 // set blue and alpha
    ORR     r4, r4, r3, LSL #16 // combine blue with red
    ORR     r4, r4, r8, LSL #8  // combine blue+red with green
        
    AND     r8, lr, r5, LSR #16
    MLA     r8, r11, r8, r12    // r8 = r8 * r11 + r12
    AND     r9, lr, r5, LSR #8  // r9 = green?
    MLA     r9, r11, r9, r12
    AND     r5, r5, #0xff       // r5 = blue?
    MLA     r5, r11, r5, r12
    MOV     r3, r8, LSR #8      // r3 = r8 >> 8
    CMP     r3, #0xff           // if r8 was negative or shifted r8 > 255
    BICGT   r3, lr, r8, ASR #31 // then r3 is either 0 or 255
    LSR     r8, r9, #8
    CMP     r8, #0xff
    BICGT   r8, lr, r9, ASR #31
    LSR     r9, r5, #8
    CMP     r9, #0xff
    BICGT   r9, lr, r5, ASR #31
    ORR     r5, r9, #0xff000000 // set blue and alpha
    ORR     r5, r5, r3, LSL #16 // combine blue with red
    ORR     r5, r5, r8, LSL #8  // combine blue+red with green

    AND     r8, lr, r6, LSR #16
    MLA     r8, r11, r8, r12    // r8 = r8 * r11 + r12
    AND     r9, lr, r6, LSR #8  // r9 = green?    
    MLA     r9, r11, r9, r12
    AND     r6, r6, #0xff       // r6 = blue?
    MLA     r6, r11, r6, r12
    MOV     r3, r8, LSR #8      // r3 = r8 >> 8
    CMP     r3, #0xff           // if r8 was negative or shifted r8 > 255
    BICGT   r3, lr, r8, ASR #31 // then r3 is either 0 or 255
    LSR     r8, r9, #8
    CMP     r8, #0xff
    BICGT   r8, lr, r9, ASR #31
    LSR     r9, r6, #8
    CMP     r9, #0xff
    BICGT   r9, lr, r6, ASR #31
    ORR     r6, r9, #0xff000000 // set blue and alpha
    ORR     r6, r6, r3, LSL #16 // combine blue with red
    ORR     r6, r6, r8, LSL #8  // combine blue+red with green

    AND     r8, lr, r7, LSR #16
    MLA     r8, r11, r8, r12    // r8 = r8 * r11 + r12
    AND     r9, lr, r7, LSR #8  // r9 = green?    
    MLA     r9, r11, r9, r12
    AND     r7, r7, #0xff       // r7 = blue?
    MLA     r7, r11, r7, r12
    MOV     r3, r8, LSR #8      // r3 = r8 >> 8
    CMP     r3, #0xff           // if r8 was negative or shifted r8 > 255
    BICGT   r3, lr, r8, ASR #31 // then r3 is either 0 or 255
    LSR     r8, r9, #8
    CMP     r8, #0xff
    BICGT   r8, lr, r9, ASR #31
    LSR     r9, r7, #8
    CMP     r9, #0xff
    BICGT   r9, lr, r7, ASR #31
    ORR     r7, r9, #0xff000000 // set blue and alpha
    ORR     r7, r7, r3, LSL #16 // combine blue with red
    ORR     r7, r7, r8, LSL #8  // combine blue+red with green
    
    STMIA   r0!, {r4-r7}        // store 4 pixels from r4-r7
    
    SUBS    r2, r2, #1
    BNE     processloop
    
processlastpixels

    CMP     r10, #0
    BEQ     processend      // no more pixels to process
    
processlastloop

    LDR     r4, [r1], #4
    
    AND     r8, lr, r4, LSR #16
    MLA     r8, r11, r8, r12    // r8 = r8 * r11 + r12
    AND     r9, lr, r4, LSR #8
    MLA     r9, r11, r9, r12
    AND     r4, r4, #0xff       // r4 = blue?
    MLA     r4, r11, r4, r12
    MOV     r3, r8, LSR #8      // r3 = r8 >> 8
    CMP     r3, #0xff           // if r8 was negative or shifted r8 > 255
    BICGT   r3, lr, r8, ASR #31 // then r3 is either 0 or 255
    LSR     r8, r9, #8
    CMP     r8, #0xff
    BICGT   r8, lr, r9, ASR #31
    LSR     r9, r4, #8
    CMP     r9, #0xff
    BICGT   r9, lr, r4, ASR #31
    ORR     r4, r9, #0xff000000 // set blue and alpha
    ORR     r4, r4, r3, LSL #16 // combine blue with red
    ORR     r4, r4, r8, LSL #8  // combine blue+red with green
    
    STR     r4, [r0], #4
    SUBS    r10, r10, #1
    BNE     processlastloop
    
processend
    
    POP     {r0-r12,pc}
    //BX lr
#endif // ARM_VERSION
    }
    
#pragma warning(default : 4100)

// End of File

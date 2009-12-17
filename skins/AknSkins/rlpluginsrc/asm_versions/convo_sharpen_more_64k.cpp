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
*  Name : WOW Testbench, assembler version of convolution edge filter
* ============================================================================
*/

// INCLUDE FILES
#include <bitstd.h>
#include <bitdev.h>

#include "fx_asm_versions.h"

void AConvolute64KSharpenMore( CFbsBitmap& aTarget,
                               const CFbsBitmap& aSource,
                               const TInt aBlendFactor )
    {
    TInt width  = aTarget.SizeInPixels().iWidth;
    TInt height = aTarget.SizeInPixels().iHeight;

    // CFbsBitmap::ScanLineLength returns bytes 
    TInt targetScanW  = CFbsBitmap::ScanLineLength(
                                aTarget.SizeInPixels().iWidth,
                                aTarget.DisplayMode());
    TInt sourceScanW  = CFbsBitmap::ScanLineLength(
                                aSource.SizeInPixels().iWidth,
                                aSource.DisplayMode());

    TInt combinedScanW = (targetScanW << 16) + sourceScanW;

    // Prepare the data addresses
    aTarget.LockHeap( ETrue ); // Lock the global bitmap heap
    TUint* targetAddr = reinterpret_cast<TUint*>( aTarget.DataAddress() );
    TUint* sourceAddr = reinterpret_cast<TUint*>( aSource.DataAddress() );

    ADoConvolute64KSharpenMore(targetAddr, sourceAddr, combinedScanW, width, height, aBlendFactor);

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }


// source bitmap must be 2 pixels wider and higher than target bitmap
#pragma warning(disable : 4100)
#ifndef ARM_VERSION
__NAKED__ void ADoConvolute64KSharpenMore( TUint*, TUint*, TInt, TInt, TInt, TInt )
    {
//    return;
#else
__NAKED__ void ADoConvolute64KSharpenMore( TUint* aBaseT,
                                           TUint* aBaseS,
                                           TInt aCombinedScanW,
                                           TInt aWidth,
                                           TInt aHeight,
                                           TInt aBlendFactor)
    {
//    Parameters:
//    r0 = target,
//    r1 = source,
//    r2 = scanwidth IN bytes - this has source scanw in lower half and target scanw in upper,
//    r3 = width
//    r4 ([sp, #4]) = heigth
//    blendfactor = [sp, #0]

    STMFD	sp!, {r0-r12,lr}   

    LDR	r4, [sp, #56]    // 13 registers pushed to stack


// r8 (a) = first target pixel, r9 (b) = second target pixel
// pixel format rrrrrggggggbbbbb
// pixel format 0000rrrrrrrrrggggggggggbbbbbbbbb after convolution sum
// r5 and r12 are temp registers
//  { -1, -1, -1,                     pixel numbering: 1 2 3
//    -1,  9, -1,                                      4 5 6
//    -1, -1, -1 };                                    7 8 9
// kernelSum = 1 (no division needed)

    MOV r12, r2, LSR #16     // r12 now has target scanwidth
    STMFD   sp!, {r12}       // save target scanwidth to stack
    MOV r2, r2, LSL #16     
    MOV r2, r2, LSR #16      // r2 now has just source scanwidth
    
    STMFD	sp!, {r0-r1}     // save source and target addresses (will change for each row)

    MOV r10, #0x3f  
    MOV r10, r10, LSL #9     // for filtering green

heightloop
	MOV	r6, r3   // width invariant
    STMFD	sp!, {r3-r4}     // save r3 and r4 - needed in inner loop
widthloop
    
    MOV r12, #0x1f           // for filtering blue
    MOV r11, #0x1f  
    MOV r11, r11, LSL #19    // for filtering red (needed in blending also)

    // =================== calculate pixels a1, a2 and b1 ======================
    LDR r7, [r1], r2         // r7 = pixels a2, b1 | a1, r1 points to next row
    AND r8, r7, r12          // r8 = blue-value of a1
    AND r5, r10, r7, LSL #4 
    ORR r8, r8, r5           // r8 = green and blue of a1
    AND r5, r11, r7, LSL #8 
    ORR r8, r8, r5           // r8 = red, green and blue of a1
    AND r9, r12, r7, LSR #16 // r9 = blue-value of a2, b1
    AND r5, r10, r7, LSR #12
    ORR r9, r9, r5           // r9 = green and blue of a2, b1
    AND r5, r11, r7, LSR #8 
    ORR r9, r9, r5           // r9 = red, green and blue of a2, b1
    ADD r8, r8, r9           // r8 = a1 + a2


    // =================== calculate pixels a4, a5 and b4 ======================
    LDR	r7, [r1], r2         // r7 = pixels a5, b4 | a4, r1 points to next row
    AND r4, r7, r12          // r4 = blue-value of a4
    AND r5, r10, r7, LSL #4 
    ORR r4, r4, r5           // r4 = green and blue of a4
    AND r5, r11, r7, LSL #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a4
    ADD r8, r8, r4           // r8 = a1 + a2 + a4
    AND r4, r12, r7, LSR #16 // r4 = blue-value of a5, b4
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of a5, b4
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a5, b4
    ADD r9, r9, r4           // r9 = b1 + b4
    

    // =================== calculate pixels a7, a8 and b7 ======================
    LDR	r7, [r1], #4         // r7 = pixels a8, b7 | a7, r1 points to a9 (and b8, b9)
    AND r4, r7, r12          // r4 = blue-value of a7
    AND r5, r10, r7, LSL #4 
    ORR r4, r4, r5           // r4 = green and blue of a7
    AND r5, r11, r7, LSL #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a7
    ADD r8, r8, r4           // r8 = a1 + a2 + a4 + a7
    AND r4, r12, r7, LSR #16 // r4 = blue-value of a8, b7
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of a8, b7
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a8, b7
    ADD r8, r8, r4           // r8 = a1 + a2 + a4 + a7 + a8
    ADD r9, r9, r4           // r9 = b1 + b4 + b7

    
    // =================== calculate pixels a9, b8 and b9 ======================
    LDR	r7, [r1], -r2        // r7 = pixels b9 | a9, b8, r1 points to a6 (and b5, b6)
    AND r4, r7, r12          // r4 = blue-value of a9, b8
    AND r5, r10, r7, LSL #4 
    ORR r4, r4, r5           // r4 = green and blue of a9, b8
    AND r5, r11, r7, LSL #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a9, b8
    ADD r9, r9, r4           // r9 = b1 + b4 + b7 + b8
    ADD r8, r8, r4           // r8 = a1 + a2 + a4 + a7 + a8 + a9
    AND r4, r12, r7, LSR #16 // r4 = blue-value of b9
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of b9
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of b9
    ADD r9, r9, r4           // r9 = b1 + b4 + b7 + b8 + b9

    // =================== calculate pixels a6, b5 and b6 ======================
    LDR	r7, [r1], -r2        // r7 = pixels b6 | a6, b5, r1 points to a3 (and b2, b3)
    AND r4, r7, r12          // r4 = blue-value of a6, b5
    AND r5, r10, r7, LSL #4 
    ORR r4, r4, r5           // r4 = green and blue of a6, b5
    AND r5, r11, r7, LSL #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a6, b5
    ADD r8, r8, r4           // r8 = a1 + a2 + a4 + a7 + a8 + a9 + a6
    AND r4, r12, r7, LSR #16 // r4 = blue-value of b6
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of b6
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of b6
    ADD r9, r9, r4           // r9 = b1 + b4 + b7 + b8 + b9 + b6    

    // =================== calculate pixels a3, b2 and b3 ======================
    LDR	r7, [r1]             // r7 = pixels b3 | a3, b2
    AND r4, r7, r12          // r4 = blue-value of a3, b2
    AND r5, r10, r7, LSL #4 
    ORR r4, r4, r5           // r4 = green and blue of a3, b2
    AND r5, r11, r7, LSL #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a3, b2
    ADD r9, r9, r4           // r9 = b1 + b4 + b7 + b8 + b9 + b6 + b2
    ADD r8, r8, r4           // r8 = a1 + a2 + a4 + a7 + a8 + a9 + a6 + a3
    AND r4, r12, r7, LSR #16 // r4 = blue-value of b3
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of b3
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of b3
    ADD r9, r9, r4           // r9 = b1 + b4 + b7 + b8 + b9 + b6 + b2 + b3


    // now r8 has pixels a1, a2, a3, a4, a6, a7, a8 and a9
    // convolution sum would be a5 * 8 - (a1 + a2 + a3 + a4 + a6 + a7 + a8 + a9)
    // free registers to use are r3, r4, r5, r7 and r12
    // blend: target = blendfactor * (convoluted - original) + original
    // if convoluted sum is negative, it is set to 0 before blending
    SUB r12, r1, #4         
    ADD r12, r12, r2         // r12 now points to a5 (original source)
    LDR r7, [r12]           
    MOV r7, r7, LSR #16      // r7 has original source pixel (a5)

    LDR	r3, [sp, #80]    // 17 registers pushed to stack & height & target scanwidth

    // blend blue
    MOV r12, r8, LSL #23    
    MOV r12, r12, LSR #23    // r12 = blue of convoluted (not including a5)
    AND r11, r7, #0x1f       // r1 = blue of original
    ADD r5, r11, r11, LSL #3 // r5 = r11 * 9
    SUBS r12, r5, r12       
    MOVMI r12, #0            // if convolution sum was negative, set it to 0
    SUB r12, r12, r11        // r12 = convoluted - original (can be negative)
    MUL r4, r12, r3         
    MOV r4, r4, ASR #8       // fixed point 8.24
    ADDS r4, r4, r11        
    MOVMI r4, #0             // if negative, set r4 = 0
    CMP r4, #0x1f           
    MOVGT r4, #0x1f          // if greater than 0x1f, set r4 to 0x1f

    // blend green
    MOV r12, r8, LSL #13    
    MOV r12, r12, LSR #22    // r12 = green of convoluted (not including a5)
    MOV r11, r7, LSR #5     
    AND r11, r11, #0x3f      // r11 = green of original
    ADD r5, r11, r11, LSL #3 // r5 = r11 * 9
    SUBS r12, r5, r12       
    MOVMI r12, #0            // if convolution sum was negative, set it to 0
    SUB r12, r12, r11        // r12 = convoluted - original (can be negative)
    MUL r12, r3, r12        
    MOV r12, r12, ASR #8     // fixed point 8.24
    ADDS r12, r12, r11      
    MOVMI r12, #0            // if negative, set r12 = 0
    CMP r12, #0x3f          
    MOVGT r12, #0x3f         // if greater than 0x3f, set r12 to 0x3f
    MOV r12, r12, LSL #5    
    ORR r4, r4, r12          // r4 now has both blue and green
    
    // blend red
    MOV r12, r8, LSR #19     // r12 = red of convoluted (not including a5)
    MOV r11, r7, LSR #11     // r11 = red of original
    AND r11, r11, #0x1f     
    ADD r5, r11, r11, LSL #3 // r5 = r11 * 9
    SUBS r12, r5, r12       
    MOVMI r12, #0            // if convolution sum was negative, set it to 0
    SUB r12, r12, r11        // r12 = convoluted - original (can be negative)
    MUL r12, r3, r12        
    MOV r12, r12, ASR #8     // fixed point 8.24
    ADDS r12, r12, r11      
    MOVMI r12, #0            // if negative, set r12 = 0
    CMP r12, #0x1f          
    MOVGT r12, #0x1f         // if greater than 0x3f, set r12 to 0x3f
    MOV r12, r12, LSL #11   
    ORR r4, r4, r12          // r4 now has red, green and blue

    STRH r4, [r0], #2        // write pixel a to target
    SUBS r6, r6, #1         
    BEQ widthend             // if no more pixels left, do not write second pixel


    // now r9 has pixels b1, b2, b3, b4, b6, b7, b8 and b9
    // convolution sum would be b5 * 8 - (b1 + b2 + b3 + b4 + b6 + b7 + b8 + b9)
    // free registers to use are r3, r4, r5, r7 and r12
    // blend: target = blendfactor * (convoluted - original) + original
    // if convoluted sum is negative, it is set to 0 before blending
    ADD r12, r1, r2          // r12 now points to b5 (original source)
    LDR r7, [r12]           

    // blend blue
    MOV r12, r9, LSL #23    
    MOV r12, r12, LSR #23    // r12 = blue of convoluted (not including a5)
    AND r11, r7, #0x1f       // r11 = blue of original
    ADD r5, r11, r11, LSL #3 // r5 = r11 * 9
    SUBS r12, r5, r12       
    MOVMI r12, #0            // if convolution sum was negative, set it to 0
    SUB r12, r12, r11        // r12 = convoluted - original (can be negative)
    MUL r4, r12, r3         
    MOV r4, r4, ASR #8       // fixed point 8.24
    ADDS r4, r4, r11        
    MOVMI r4, #0             // if negative, set r4 = 0
    CMP r4, #0x1f           
    MOVGT r4, #0x1f          // if greater than 0x1f, set r4 to 0x1f

    // blend green
    MOV r12, r9, LSL #13    
    MOV r12, r12, LSR #22    // r12 = green of convoluted (not including a5)
    MOV r11, r7, LSR #5     
    AND r11, r11, #0x3f      // r11 = green of original
    ADD r5, r11, r11, LSL #3 // r5 = r11 * 9
    SUBS r12, r5, r12       
    MOVMI r12, #0            // if convolution sum was negative, set it to 0
    SUB r12, r12, r11        // r12 = convoluted - original (can be negative)
    MUL r12, r3, r12        
    MOV r12, r12, ASR #8     // fixed point 8.24
    ADDS r12, r12, r11      
    MOVMI r12, #0            // if negative, set r12 = 0
    CMP r12, #0x3f          
    MOVGT r12, #0x3f         // if greater than 0x3f, set r12 to 0x3f
    MOV r12, r12, LSL #5    
    ORR r4, r4, r12          // r4 now has both blue and green
    
    // blend red
    MOV r12, r9, LSR #19     // r12 = red of convoluted (not including a5)
    MOV r11, r7, LSR #11     // r11 = red of original
    AND r11, r11, #0x1f     
    ADD r5, r11, r11, LSL #3 // r5 = r11 * 9
    SUBS r12, r5, r12       
    MOVMI r12, #0            // if convolution sum was negative, set it to 0
    SUB r12, r12, r11        // r12 = convoluted - original (can be negative)
    MUL r12, r3, r12        
    MOV r12, r12, ASR #8     // fixed point 8.24
    ADDS r12, r12, r11      
    MOVMI r12, #0            // if negative, set r12 = 0
    CMP r12, #0x1f          
    MOVGT r12, #0x1f         // if greater than 0x3f, set r12 to 0x3f
    MOV r12, r12, LSL #11   
    ORR r4, r4, r12          // r4 now has red, green and blue

    STRH r4, [r0], #2        // write pixel b to target

    SUBS r6, r6, #1         
    BNE	widthloop           
widthend
    LDMFD   sp!, {r3-r4}     // r3 and r4 used in inner loop
    LDMFD	sp!, {r0-r1}     // load source and target addresses
    LDR     r12, [sp]        // get target scanwidth from stack
    ADD r0, r0, r12         
    ADD r1, r1, r2          
    STMFD	sp!, {r0-r1}     // save changed source and target addresses
    SUBS r4, r4, #1         
    BNE	heightloop          
loopend 

    ADD sp, sp, #12           // r0 and r1 and target scanwidth
    LDMFD	sp!, {r0-r12,pc}      
    BX lr
#endif // ARM_VERSION
    }
#pragma warning(default : 4100)

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
*  Name : WOW Testbench, assembler version of convolution blur filter
* ============================================================================
*/

// INCLUDE FILES
#include <bitstd.h>
#include <bitdev.h>

#include "fx_asm_versions.h"

void AConvolute64KSoften( CFbsBitmap& aTarget,
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

    ADoConvolute64KSoften(targetAddr, sourceAddr, combinedScanW, width, height, aBlendFactor);

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }


// source bitmap must be 2 pixels wider and higher than target bitmap
#pragma warning(disable : 4100)
#ifndef ARM_VERSION
__NAKED__ void ADoConvolute64KSoften( TUint*, TUint*, TInt, TInt, TInt, TInt )
    {
//    return;
#else
__NAKED__ void ADoConvolute64KSoften( TUint* aBaseT,
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
//  { 1, 1, 1,                     pixel numbering: 1 2 3
//    1, 1, 1,                                      4 5 6
//    1, 1, 1 };                                    7 8 9
// kernelSum = 14

    MOV r12, r2, LSR #16     // r12 now has target scanwidth
    STMFD   sp!, {r12}       // save target scanwidth to stack
    MOV r2, r2, LSL #16     
    MOV r2, r2, LSR #16      // r2 now has just source scanwidth
    
    STMFD	sp!, {r0-r1}     // save source and target addresses (will change for each row)

    MOV r10, #0x3f  
    MOV r10, r10, LSL #9     // for filtering green
    MOV r11, #0x1f  

heightloop
	MOV	r6, r3   // width invariant
    STMFD	sp!, {r3-r4}     // save r3 and r4 - needed in inner loop
widthloop

    MOV r11, r11, LSL #19    // for filtering red
    MOV r12, #0x1f           // for filtering blue
    
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
    ADD r8, r8, r4           // r8 = r8 + pixel a4
    AND r4, r12, r7, LSR #16 // r4 = blue-value of a5, b4
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of a5, b4
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a5, b4
    ADD r8, r8, r4           // r8 = r8 + pixel a5
    ADD r9, r9, r4           // r9 = r9 + pixel b4


    // =================== calculate pixels a7, a8 and b7 ======================
    LDR	r7, [r1], #4         // r7 = pixels a8, b7 | a7, r1 points to a9 (and b8, b9)
    AND r4, r7, r12          // r4 = blue-value of a7
    AND r5, r10, r7, LSL #4 
    ORR r4, r4, r5           // r4 = green and blue of a7
    AND r5, r11, r7, LSL #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a7
    ADD r8, r8, r4           // r8 = r8 + pixel a7
    AND r4, r12, r7, LSR #16 // r4 = blue-value of a8, b7
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of a8, b7
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a8, b7
    ADD r8, r8, r4           // r8 = r8 + pixel a8
    ADD r9, r9, r4           // r9 = r9 + pixel b7

    
    // =================== calculate pixels a9, b8 and b9 ======================
    LDR	r7, [r1], -r2        // r7 = pixels b9 | a9, b8, r1 points to a6 (and b5, b6)
    AND r4, r7, r12          // r4 = blue-value of a9, b8
    AND r5, r10, r7, LSL #4 
    ORR r4, r4, r5           // r4 = green and blue of a9, b8
    AND r5, r11, r7, LSL #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a9, b8
    ADD r9, r9, r4           // r9 = r9 + pixel b8
    ADD r8, r8, r4           // r8 = r8 + pixel a9
    AND r4, r12, r7, LSR #16 // r4 = blue-value of b9
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of b9
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of b9
    ADD r9, r9, r4           // r9 = r9 + pixel b9

    // =================== calculate pixels a6, b5 and b6 ======================
    LDR	r7, [r1], -r2        // r7 = pixels b6 | a6, b5, r1 points to a3 (and b2, b3)
    AND r4, r7, r12          // r4 = blue-value of a6, b5
    AND r5, r10, r7, LSL #4 
    ORR r4, r4, r5           // r4 = green and blue of a6, b5
    AND r5, r11, r7, LSL #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a6, b5
    ADD r9, r9, r4           // r9 = r9 + pixel b5
    ADD r8, r8, r4           // r8 = r8 + pixel a6
    AND r4, r12, r7, LSR #16 // r4 = blue-value of b6
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of b6
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of b6
    ADD r9, r9, r4           // r9 = r9 + pixel b6    
    
    // =================== calculate pixels a3, b2 and b3 ======================
    LDR	r7, [r1]             // r7 = pixels b3 | a3, b2
    AND r4, r7, r12          // r4 = blue-value of a3, b2
    AND r5, r10, r7, LSL #4 
    ORR r4, r4, r5           // r4 = green and blue of a3, b2
    AND r5, r11, r7, LSL #8 
    ORR r4, r4, r5           // r4 = red, green and blue of a3, b2
    ADD r9, r9, r4           // r9 = r9 + pixel b2
    ADD r8, r8, r4           // r8 = r8 + pixel a3
    AND r4, r12, r7, LSR #16 // r4 = blue-value of b3
    AND r5, r10, r7, LSR #12
    ORR r4, r4, r5           // r4 = green and blue of b3
    AND r5, r11, r7, LSR #8 
    ORR r4, r4, r5           // r4 = red, green and blue of b3
    ADD r9, r9, r4           // r9 = r9 + pixel b3

    MOV r11, r11, LSR #19    // r11 = 0x1f, used in blendloop

    // ============ divide r8 by 9 and blend it using blendfactor =============
    SUB r12, r1, #4         
    ADD r12, r12, r2         // r12 now points to a5 (original source)
    LDR r7, [r12]            // r7 has original source pixel (in upper half)

    // load blendfactor to r3
    LDR	r3, [sp, #80]    // 17 registers pushed to stack & height & target scanwidth

    // div and blend red
    MOV r12, r8, LSR #19         // red component of convoluted pixel to r12
    SUB r12, r12, r12, lsr #3   
    ADD r12, r12, r12, lsr #6   
    MOV r12, r12, lsr #3         // r12 = pixel a red / 9
    AND r5, r11, r7, LSR #27 // r5 = red of original
    SUB r12, r12, r5         // r12 = blurred - original (can be negative)
    MUL r12, r3, r12        
    MOV r12, r12, ASR #8     // fixed point 8.24
    ADDS r12, r12, r5       
    MOVMI r12, #0            // if negative, set r12 = 0
    CMP r12, #0x1f          
    MOVGT r12, #0x1f         // if greater than 0x3f, set r12 to 0x3f
    MOV r4, r12, LSL #11     // r4 now has red


    // div and blend green
    MOV r12, r8, LSL #13    
    MOV r12, r12, LSR #22    // green component of convoluted pixel to r12
    SUB r12, r12, r12, lsr #3   
    ADD r12, r12, r12, lsr #6   
    MOV r12, r12, lsr #3         // r12 = pixel a green / 9
    MOV r5, r7, LSR #21     
    AND r5, r5, #0x3f        // r5 = green of original
    SUB r12, r12, r5         // r12 = blurred - original (can be negative)
    MUL r12, r3, r12        
    MOV r12, r12, ASR #8     // fixed point 8.24
    ADDS r12, r12, r5       
    MOVMI r12, #0            // if negative, set r12 = 0
    CMP r12, #0x3f          
    MOVGT r12, #0x3f         // if greater than 0x3f, set r12 to 0x3f
    ORR r4, r4, r12, LSL #5  // r4 now has both red and green


    // div and blend blue
    MOV r8, r8, LSL #23     
    MOV r8, r8, LSR #23     
    SUB r8, r8, r8, lsr #3  
    ADD r8, r8, r8, lsr #6  
    MOV r8, r8, lsr #3       // r8 = pixel a blue / 9
    AND r5, r11, r7, LSR #16 // r5 = blue of original
    SUB r8, r8, r5           // r8 = blurred - original (can be negative)
    MUL r8, r3, r8          
    MOV r8, r8, ASR #8       // fixed point 8.24
    ADDS r8, r8, r5         
    MOVMI r8, #0             // if negative, set r4 = 0
    CMP r8, #0x1f           
    MOVGT r8, #0x1f          // if greater than 0x1f, set r8 to 0x1f
    
    ORR r8, r8, r4           // add red and green component

    STRH r8, [r0], #2        // write pixel a to target
    SUBS r6, r6, #1         
    BEQ widthend             // if no more pixels left, do not write second pixel


    // ============ divide r9 by 14 and blend it using blendfactor =============
    ADD r12, r1, r2          // r12 now points to b5 (original source)
    LDR r7, [r12]            // r7 has original b5 (in lower half)

    // div and blend red
    MOV r12, r9, LSR #19         // red component of convoluted pixel to r12
    SUB r12, r12, r12, lsr #3   
    ADD r12, r12, r12, lsr #6   
    MOV r12, r12, lsr #3         // r12 = pixel b red / 9
    AND r5, r11, r7, LSR #11 // r5 = red of original
    SUB r12, r12, r5         // r12 = blurred - original (can be negative)
    MUL r12, r3, r12        
    MOV r12, r12, ASR #8     // fixed point 8.24
    ADDS r12, r12, r5       
    MOVMI r12, #0            // if negative, set r12 = 0
    CMP r12, #0x1f          
    MOVGT r12, #0x1f         // if greater than 0x3f, set r12 to 0x3f
    MOV r4, r12, LSL #11     // r4 now has red


    // div and blend green
    MOV r12, r9, LSL #13    
    MOV r12, r12, LSR #22    // green component of convoluted pixel to r12
    SUB r12, r12, r12, lsr #3   
    ADD r12, r12, r12, lsr #6   
    MOV r12, r12, lsr #3         // r12 = pixel b green / 9
    MOV r5, r7, LSR #5      
    AND r5, r5, #0x3f        // r5 = green of original
    SUB r12, r12, r5         // r12 = blurred - original (can be negative)
    MUL r12, r3, r12        
    MOV r12, r12, ASR #8     // fixed point 8.24
    ADDS r12, r12, r5       
    MOVMI r12, #0            // if negative, set r12 = 0
    CMP r12, #0x3f          
    MOVGT r12, #0x3f         // if greater than 0x3f, set r12 to 0x3f
    ORR r4, r4, r12, LSL #5  // r4 now has both red and green


    // div and blend blue
    MOV r9, r9, LSL #23     
    MOV r9, r9, LSR #23     
    SUB r9, r9, r9, lsr #3  
    ADD r9, r9, r9, lsr #6  
    MOV r9, r9, lsr #3       // r9 = pixel b blue / 9
    AND r5, r7, #0x1f        // r5 = blue of original
    SUB r9, r9, r5           // r9 = blurred - original (can be negative)
    MUL r9, r3, r9          
    MOV r9, r9, ASR #8       // fixed point 8.24
    ADDS r9, r9, r5         
    MOVMI r9, #0             // if negative, set r4 = 0
    CMP r9, #0x1f           
    MOVGT r9, #0x1f          // if greater than 0x1f, set r9 to 0x1f
    
    ORR r9, r9, r4           // add red and green component

    STRH r9, [r0], #2        // write pixel b to target

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

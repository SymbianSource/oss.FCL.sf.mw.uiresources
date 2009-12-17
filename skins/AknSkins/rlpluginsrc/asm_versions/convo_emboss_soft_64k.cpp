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

void AConvolute64KEmbossSoft( CFbsBitmap& aTarget,
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

    ADoConvolute64KEmbossSoft(targetAddr, sourceAddr, combinedScanW, width, height, aBlendFactor);

    aTarget.UnlockHeap( ETrue ); // Unlock the global bitmap heap
    }


// source bitmap must be 2 pixels wider and higher than target bitmap
#pragma warning(disable : 4100)
#ifndef ARM_VERSION
__NAKED__ void ADoConvolute64KEmbossSoft( TUint*, TUint*, TInt, TInt, TInt, TInt )
    {
//    return;
#else
__NAKED__ void ADoConvolute64KEmbossSoft( TUint* aBaseT,
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
//    r10 = blendfactor = [sp, #0]

    STMFD	sp!, {r0-r12,lr}

    LDR	r4, [sp, #56]        // 14 registers pushed to stack
    LDR	r10, [sp, #60]      


// pixel format rrrrrggggggbbbbb
//  { -1, 0, 0,                     pixel numbering: 1 2 3
//     0, 0, 0,                                      4 5 6
//     0, 0, 1 };                                    7 8 9
// kernelSum = 0 (no division made)

    MOV r12, r2, LSR #16     // r12 now has target scanwidth
    STMFD   sp!, {r12}       // save target scanwidth to stack
    MOV r2, r2, LSL #16     
    MOV r2, r2, LSR #16      // r2 now has just source scanwidth
    
    STMFD	sp!, {r0-r1}     // save source and target addresses (will change for each row)

heightloop
	MOV	r6, r3   // width invariant
    STMFD	sp!, {r3-r4}     // save r3 and r4 - needed in inner loop
widthloop
    
    // =================== load pixels a1, b1, a9 and b9 =======================
    LDR	r12, [r1], #4        // r12 = pixels a2, b1 | a1, r1 points to next row
    MOV r9, r12, LSR #16     // r9 has pixel b1
    MOV r12, r12, LSL #16   
    MOV r12, r12, LSR #16    // r12 has pixel a1

    ADD r1, r1, r2, LSL #1   // r1 points to b9 | a9, b8 
    LDR r3, [r1], #-4       
    MOV r4, r3, LSR #16      // r4 has b9
    MOV r3, r3, LSL #16     
    MOV r3, r3, LSR #16      // r3 has pixel a9

    SUB r1, r1, r2           // r1 points to a5, b4 | a4
    LDR r11, [r1], #4       
    MOV r11, r11, LSR #16    // r11 has original pixel

    // ====================== first calculate pixel a ==========================
    // r12 = a1
    // r3 = a9
    // r10 = blend factor
    // r11 = original pixel
    // r8 will be target pixel
    // free registers are r5, r7

    // blue
    AND r7, r3, #0x1f        // r7 has blue of a9
    AND r5, r12, #0x1f       // r5 has blue of a1
    SUB r8, r7, r5           // r8 = a9 - a1 (might be negative)
    ADDS r8, r8, #0xf        // bias factor
    MOVMI r8, #0             // set to 0 if result was negative
    AND r7, r11, #0x1f       // r7 has blue of original pixel
    SUB r8, r8, r7           // r8 = convoluted - original (can be negative)
    MUL r8, r10, r8         
    MOV r8, r8, ASR #8       // fixed point 8.24
    ADDS r8, r8, r7         
    MOVMI r8, #0             // if negative, set r8 = 0
    CMP r8, #0x1f           
    MOVGT r8, #0x1f          // if greater than 0x1f, set r8 to 0x1f

    // green
    MOV r7, r3, LSR #5      
    AND r7, r7, #0x3f        // r7 has green of a9
    MOV r5, r12, LSR #5     
    AND r5, r5, #0x3f        // r5 has green of a1
    SUB r7, r7, r5           // r7 = a9 - a1
    ADDS r7, r7, #0x1f       // bias factor
    MOVMI r7, #0             // set to 0 if result was negative
    MOV r5, r11, LSR #5     
    AND r5, r5, #0x3f        // r5 has green of original pixel
    SUB r7, r7, r5           // r7 = convoluted - original (can be negative)
    MUL r7, r10, r7         
    MOV r7, r7, ASR #8       // fixed point 8.24
    ADDS r7, r7, r5         
    MOVMI r7, #0             // if negative, set r8 = 0
    CMP r7, #0x3f           
    MOVGT r7, #0x3f          // if greater than 0x3f, set r7 to 0x3f
    ORR r8, r8, r7, LSL #5   // r8 now has green and blue

    // red
    MOV r7, r3, LSR #11     
    AND r7, r7, #0x1f        // r7 has red of a9
    MOV r5, r12, LSR #11    
    AND r5, r5, #0x1f        // r5 has red of a1
    SUB r7, r7, r5           // r7 = a9 - a1
    ADDS r7, r7, #0xf        // bias factor
    MOVMI r7, #0             // set to 0 if result was negative
    MOV r5, r11, LSR #11    
    AND r5, r5, #0x1f        // r5 has red of original pixel
    SUB r7, r7, r5           // r7 = convoluted - original (can be negative)
    MUL r7, r10, r7         
    MOV r7, r7, ASR #8       // fixed point 8.24
    ADDS r7, r7, r5         
    MOVMI r7, #0             // if negative, set r8 = 0
    CMP r7, #0x1f           
    MOVGT r7, #0x1f          // if greater than 0x3f, set r7 to 0x3f
    ORR r8, r8, r7, LSL #11  // r8 now has red, green and blue of pixel a


    // ====================== calculate pixel b ===============================
    // r9 = b1 and r4 = b9, free registers are r5, r7 (pixel goes to r12)
    LDR r11, [r1], -r2       // lower half of r11 has original b

    // blue
    AND r7, r4, #0x1f        // r7 has blue of b9
    AND r5, r9, #0x1f        // r5 has blue of b1
    SUB r12, r7, r5          // r12 =b9 - b1 (might be negative)
    ADDS r12, r12, #0xf      // bias factor
    MOVMI r12, #0            // set to 0 if result was negative
    AND r7, r11, #0x1f       // r7 has blue of original pixel
    SUB r12, r12, r7         // r12 = convoluted - original (can be negative)
    MUL r12, r10, r12       
    MOV r12, r12, ASR #8     // fixed point 8.24
    ADDS r12, r12, r7       
    MOVMI r12, #0            // if negative, set r8 = 0
    CMP r12, #0x1f          
    MOVGT r12, #0x1f         // if greater than 0x1f, set r8 to 0x1f

    // green
    MOV r7, r4, LSR #5      
    AND r7, r7, #0x3f        // r7 has green of b9
    MOV r5, r9, LSR #5      
    AND r5, r5, #0x3f        // r5 has green of b1
    SUB r7, r7, r5           // r7 = b9 - b1
    ADDS r7, r7, #0x1f       // bias factor
    MOVMI r7, #0             // set to 0 if result was negative
    MOV r5, r11, LSR #5     
    AND r5, r5, #0x3f        // r5 has green of original pixel
    SUB r7, r7, r5           // r7 = convoluted - original (can be negative)
    MUL r7, r10, r7         
    MOV r7, r7, ASR #8       // fixed point 8.24
    ADDS r7, r7, r5         
    MOVMI r7, #0             // if negative, set r8 = 0
    CMP r7, #0x3f           
    MOVGT r7, #0x3f          // if greater than 0x3f, set r7 to 0x3f
    ORR r12, r12, r7, LSL #5 // r12 now has green and blue

    // red
    MOV r7, r4, LSR #11     
    AND r7, r7, #0x1f        // r7 has red of a9
    MOV r5, r9, LSR #11     
    AND r5, r5, #0x1f        // r5 has red of a1
    SUB r7, r7, r5           // r7 = a9 - a1
    ADDS r7, r7, #0xf        // bias factor
    MOVMI r7, #0             // set to 0 if result was negative
    MOV r5, r11, LSR #11    
    AND r5, r5, #0x1f        // r5 has red of original pixel
    SUB r7, r7, r5           // r7 = convoluted - original (can be negative)
    MUL r7, r10, r7         
    MOV r7, r7, ASR #8       // fixed point 8.24
    ADDS r7, r7, r5         
    MOVMI r7, #0             // if negative, set r8 = 0
    CMP r7, #0x1f           
    MOVGT r7, #0x1f          // if greater than 0x3f, set r7 to 0x3f
    ORR r12, r12, r7, LSL #11    // r12 now has red, green and blue of pixel b



    STRH r8, [r0], #2        // write pixel a to target
    SUBS r6, r6, #1         
    BEQ widthend             // if no more pixels left, do not write second pixel

    STRH r12, [r0], #2       // write pixel b to target

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

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

#include "fx_asm_versions.h"



/*
* original bitmap size e.g. 3*3: a1 a2 a3
*                                a4 a5 a6
*                                a7 a8 a9
*
* target bitmap size 5*5 and after copying: a1 a1 a2 a3 a3
*                                           a1 a1 a2 a3 a3
*                                           a4 a4 a5 a6 a6
*                                           a7 a7 a8 a9 a9
*                                           a7 a7 a8 a9 a9
*/
//#if defined(__MARM_ARM4__) || defined(__MARM_ARMI__) || defined(__MARM_ARM5__)
//    #define ARM9TDMI_INLINE
//	#define __NAKED__ __declspec( naked )
//#endif


#pragma warning(disable : 4100)
#ifndef ARM_VERSION
void AMakeConvoluteSource64K( TUint* aBaseT,
                              TUint* aBaseS,
                              TInt aTargetScanW,
                              TInt aSourceScanW,
                              TInt aSourceWidth,
                              TInt aSourceHeight)
    {
    TUint16* target = reinterpret_cast<TUint16*>( aBaseT );
    TUint16* source = reinterpret_cast<TUint16*>( aBaseS );
    
    target[0] = source[0];
    for (int a=0;a<aSourceWidth;a++)
        target[a+1] = source[a];
    target[aSourceWidth+1] = source[aSourceWidth-1];
    target += (aTargetScanW >> 1);

    for (int y=0;y<aSourceHeight;y++)
        {
        target[0] = source[0];
        for (int x=0;x<aSourceWidth;x++)
            target[x+1] = source[x];
        target[aSourceWidth+1] = source[aSourceWidth-1];
        target += (aTargetScanW >> 1);
        source += (aSourceScanW >> 1);
        }

    source -= (aSourceScanW >> 1);

    target[0] = source[0];
    for (int aa=0;aa<aSourceWidth;aa++)
        target[aa+1] =  source[aa];
    target[aSourceWidth+1] = source[aSourceWidth-1];
    }
#else
__NAKED__ void AMakeConvoluteSource64K( TUint* aBaseT,
                                        TUint* aBaseS,
                                        TInt aTargetScanW,
                                        TInt aSourceScanW,
                                        TInt aTargetWidth,
                                        TInt aTargetHeight)
    {
//    Parameters:
//    r0 = target,
//    r1 = source,
//    r2 = target scanwidth IN bytes,
//    r3 = source scanwidth IN bytes
//    r4 ([sp, #0]) = width
//    r5 ([sp, #4]) = heigth


    STMFD	sp!, {r4-r12,lr}

    LDR	r4, [sp, #40]       // 10 registers pushed to stack
    LDR r5, [sp, #44]       

    MOV r10, r0             
    MOV r11, r1             // save target and source addresses

    MOV r6, r4              // r6 = widthloop invariant

        // make first line
    LDR r7, [r1], #4        // load first 2 pixels from source (a2 | a1)
    MOV r8, r7, LSL #16     
    ORR r8, r8, r8, LSR #16 // r8 now has pixels a1 a1
    STR r8, [r0], #4        // write first 2 pixels to target
    MOV r8, r7, LSR #16     // r8 now has pixels ?? a2
    SUB r6, r6, #2          // 2 pixels handled

    // source must be at least 3 pixels wide, otherwise this won't work

firstrowloop             

    LDR r7, [r1], #4        // load next 2 pixels from source (a4 | a3)
    ORR r8, r8, r7, LSL #16 // r8 has a3 a2
    STR r8, [r0], #4        // write next 2 pixels to target
    MOV r8, r7, LSR #16     // r8 now has pixels ?? a4
    SUBS r6, r6, #2         
    BMI firstlineodd        // source has odd number of pixels
    BNE firstrowloop        // jump back to loop if we still have pixels left
    ORR r8, r8, r8, LSL #16 // even number of pixels, last write would be a4 a4
    STR r8, [r0]            
    BAL endfirstrow         // jump over odd pixel writing

firstlineodd          

    MOV r7, r7, LSL #16     
    MOV r7, r7, LSR #16     // r7 now has a3
    STRH r7, [r0]           

endfirstrow          

    MOV r1, r11             // r1 points to start of source pixels

centerloop

    ADD r0, r10, r2         // target (r0) set to next row
    MOV r10, r0             // save next row start
    MOV r6, r4              // r6 = width invariant
        // copy first pixels
    LDR r7, [r1], #4        // load first 2 pixels from source (a2 | a1)
    MOV r8, r7, LSL #16     
    ORR r8, r8, r8, LSR #16 // r8 now has pixels a1 a1
    STR r8, [r0], #4        // write first 2 pixels to target
    MOV r8, r7, LSR #16     // r8 now has pixels ?? a2
    SUB r6, r6, #2          // 2 pixels handled

centerrowloop

    LDR r7, [r1], #4        // load next 2 pixels from source (a4 | a3)
    ORR r8, r8, r7, LSL #16 // r8 has a3 a2
    STR r8, [r0], #4        // write next 2 pixels to target
    MOV r8, r7, LSR #16     // r8 now has pixels ?? a4
    SUBS r6, r6, #2         
    BMI centerlineodd       // source has odd number of pixels
    BNE centerrowloop       // jump back to loop if we still have pixels left
    ORR r8, r8, r8, LSL #16 // even number of pixels, last write would be a4 a4
    STR r8, [r0]            
    BAL endcenterrow        // jump over odd pixel writing

centerlineodd

    MOV r7, r7, LSL #16     
    MOV r7, r7, LSR #16     // r7 now has a3
    STRH r7, [r0]           

endcenterrow

    ADD r1, r11, r3         // r1 points to start of next source line
    MOV r11, r1             // save address
    SUBS r5, r5, #1         
    BNE centerloop          

    SUB r1, r11, r3         // r1 points to last row of source pixels
    ADD r0, r10, r2         // target (r0) set to last row
    MOV r6, r4              // r6 = width invariant
        // copy first pixels
    LDR r7, [r1], #4        // load first 2 pixels from source (a2 | a1)
    MOV r8, r7, LSL #16     
    ORR r8, r8, r8, LSR #16 // r8 now has pixels a1 a1
    STR r8, [r0], #4        // write first 2 pixels to target
    MOV r8, r7, LSR #16     // r8 now has pixels ?? a2
    SUB r6, r6, #2          // 2 pixels handled

lastrowloop

    LDR r7, [r1], #4        // load next 2 pixels from source (a4 | a3)
    ORR r8, r8, r7, LSL #16 // r8 has a3 a2
    STR r8, [r0], #4        // write next 2 pixels to target
    MOV r8, r7, LSR #16     // r8 now has pixels ?? a4
    SUBS r6, r6, #2         
    BMI lastlineodd         // source has odd number of pixels
    BNE lastrowloop         // jump back to loop if we still have pixels left
    ORR r8, r8, r8, LSL #16 // even number of pixels, last write would be a4 a4
    STR r8, [r0]            
    BAL endlastrow          // jump over odd pixel writing

lastlineodd

    MOV r7, r7, LSL #16     
    MOV r7, r7, LSR #16     // r7 now has a3
    STRH r7, [r0]           

endlastrow

    LDMFD	sp!, {r4-r12,pc}      
    BX lr                   
    }
#endif // ARM_VERSION



void AMakeConvoluteSource16MU( TUint* aBaseT,
                               TUint* aBaseS,
                               TInt aTargetScanW,
                               TInt aSourceScanW,
                               TInt aSourceWidth,
                               TInt aSourceHeight)
    {
    aBaseT[0] = aBaseS[0];
    for (int a=0;a<aSourceWidth;a++)
        aBaseT[a+1] = aBaseS[a];
    aBaseT[aSourceWidth+1] = aBaseS[aSourceWidth-1];
    aBaseT += (aTargetScanW >> 2);

    for (int y=0;y<aSourceHeight;y++)
        {
        aBaseT[0] = aBaseS[0];
        for (int x=0;x<aSourceWidth;x++)
            aBaseT[x+1] = aBaseS[x];
        aBaseT[aSourceWidth+1] = aBaseS[aSourceWidth-1];
        aBaseT += (aTargetScanW >> 2);
        aBaseS += (aSourceScanW >> 2);
        }

    aBaseS -= (aSourceScanW >> 2);

    aBaseT[0] = aBaseS[0];
    for (int aa=0;aa<aSourceWidth;aa++)
        aBaseT[aa+1] =  aBaseS[aa];
    aBaseT[aSourceWidth+1] = aBaseS[aSourceWidth-1];
    }


void AMakeConvoluteSource256( TUint* aBaseT,
                              TUint* aBaseS,
                              TInt aTargetScanW,
                              TInt aSourceScanW,
                              TInt aSourceWidth,
                              TInt aSourceHeight)
    {
    TUint8* target = reinterpret_cast<TUint8*>( aBaseT );
    TUint8* source = reinterpret_cast<TUint8*>( aBaseS );
    
    target[0] = source[0];
    for (int a=0;a<aSourceWidth;a++)
        target[a+1] = source[a];
    target[aSourceWidth+1] = source[aSourceWidth-1];
    target += (aTargetScanW);

    for (int y=0;y<aSourceHeight;y++)
        {
        target[0] = source[0];
        for (int x=0;x<aSourceWidth;x++)
            target[x+1] = source[x];
        target[aSourceWidth+1] = source[aSourceWidth-1];
        target += (aTargetScanW);
        source += (aSourceScanW);
        }

    source -= (aSourceScanW);

    target[0] = source[0];
    for (int aa=0;aa<aSourceWidth;aa++)
        target[aa+1] =  source[aa];
    target[aSourceWidth+1] = source[aSourceWidth-1];
    }

#pragma warning(default : 4100)

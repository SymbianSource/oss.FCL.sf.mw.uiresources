/*
* Copyright (c) 2005 Nokia Corporation and/or its subsidiary(-ies).
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



#include <e32svr.h>
#include <e32std.h>
#include <e32def.h>
#include <e32des8.h> 

#include "unicodeconv.h"

//replacement character to be used when unicode cannot be converted
const TUint8 KForeignReplacement = 0x5F;

//This function converts from Unicoded characters, to foreign characters and adds them into a descriptor
void UnicodeConv::ConvertFromUnicodeL(TDes8& aForeign, const TDesC16& aUnicode)
    {	
    const TInt unicodeLength = aUnicode.Length();
    
    //loop going through the character of the unicode descriptor
    for(TInt i=0; i<unicodeLength; i++)
        {
        const TUint16 unicodeChar = aUnicode[i];
        
        if (aForeign.Length() >= aForeign.MaxLength())
            {
            User::Leave(KErrOverflow);
            }
        
        //charcters from 0x0000 to 0x007F, can be mapped directly
        if(unicodeChar<0x0080)
            {
            aForeign.Append(static_cast<TUint8>(unicodeChar));
            }
        else
            {
            TInt trailByte = KErrNotFound;
            TInt returnValue = TConvDataStruct::ConvertSingleUnicode(unicodeChar,trailByte);
            
            if(returnValue!=KErrNotFound)
                {
                if(trailByte!=KErrNotFound)		
                    {
                    if (aForeign.Length() + 2 <= aForeign.MaxLength())
                        {											
                        aForeign.Append(static_cast<TUint8>(returnValue));
                        aForeign.Append(static_cast<TUint8>(trailByte));						
                        }
                    else
                        {
                        User::Leave(KErrOverflow);
                        }	
                    }
                else
                    aForeign.Append(static_cast<TUint8>(returnValue));
                }		
            else
                aForeign.Append(KForeignReplacement);
            } 
        }		
    }
                
                

//This function converts from foreign characters into unicode and adds them into a descriptor
void UnicodeConv::ConvertToUnicodeL(TDes16& aUnicode, const TDesC8& aForeign)
    {
    const TInt foreignLength = aForeign.Length();

    //loop going through the characters of the foreign descriptor
    for(TInt i = 0; i<foreignLength; i++)
        {
        const TUint8 leadForeign = aForeign[i];
        
        if (aUnicode.Length() >= aUnicode.MaxLength())
            {
            User::Leave(KErrOverflow);
            }
        
        TUint8 tailForeign = 0x00;
        //charcters from 0x00 to 0x7F, can be mapped directly
        if(leadForeign < 0x80)
            aUnicode.Append(static_cast<TUint16>(leadForeign));
        else
            {
            if((i+1)<foreignLength)
                tailForeign = aForeign[i+1];

            const TLeadOrSingle* structPtr = TConvDataStruct::KFirstByteConversions + (leadForeign-0x80);
            
            if(structPtr->iUnicodeIfSingle)
                aUnicode.Append(structPtr->iUnicodeIfSingle);
            else
                {
                if(TConvDataStruct::KMinTrailByte<=tailForeign && tailForeign<=TConvDataStruct::KMaxTrailByte)
                    aUnicode.Append(TConvDataStruct::KDoubleByteConversions[structPtr->iDoubleByteIndex+
                        (tailForeign - TConvDataStruct::KMinTrailByte)]);
                else
                    aUnicode.Append(0xFFFD);
                i++;
                }
            }
        }  

    }

TBool UnicodeConv::IsLegalShortNameCharacter (TUint aCharacter)
    {
    if (aCharacter>=0x0080)
        {
        if (aCharacter>0xFFFF)
            return EFalse;
        
        TInt trailByte = KErrNotFound;
        TInt returnValue = TConvDataStruct::ConvertSingleUnicode(aCharacter,trailByte);
        
        if(returnValue!=KErrNotFound)
            return ETrue;
        }
    if(aCharacter>= 'a' && aCharacter<= 'z')
        return(ETrue);
    if(aCharacter>= 'A' && aCharacter<= 'Z')
        return(ETrue);
    if(aCharacter>= '0' && aCharacter<= '9')
        return(ETrue);

    switch (aCharacter)
        {
        case '\'':
        case '`':
        case '-':
        case '_':
        case '^':
        case '$':
        case '~':
        case '!':
        case '#':
        case '%':
        case '&':
        case '{':
        case '}':
        case '@':
        case '(':
        case ')':
            return ETrue;
        default:
            return EFalse;
        }
    }		


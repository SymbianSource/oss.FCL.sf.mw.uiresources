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
* Description:   
*
*/




#ifndef AKN_ICON_SRV_DEF_H
#define AKN_ICON_SRV_DEF_H

// INCLUDES
#include <e32std.h>
#include <gdi.h>
#include <AknIconUtils.h>
#include "AknIconTraces.h"

// FORWARD DECLARATIONS
class CBitwiseBitmap;
class CAknIconSrvIconItem;
class CAknIconDataItem;

// CONSTANTS

const TUint32 KColorNotDefined = 0xFF000000;

_LIT( KAknIconDefaultDir, "z:\\resource\\apps\\" );
const TInt KAknIconDefaultDirLength = 17;
_LIT( KDriveZ, "Z:" );
const TInt KDriveLength = 2;

// DATA STRUCTURES

struct TAknIconSrvReturnData
    {
    // bitmap
    TInt iBitmapHandle;
    // mask
    TInt iMaskHandle;
    // content dimensions
    TAknContentDimensions iContentDimensions;
    };

// Init. data moved from server side to client side when session is connected.
struct TAknIconInitData
    {
    // configuration from resource file
    TInt iCompression;

    TDisplayMode iIconMode;
    TDisplayMode iIconMaskMode;

    TDisplayMode iPhotoMode;

    TDisplayMode iVideoMode;

    TDisplayMode iOffscreenMode;
    TDisplayMode iOffscreenMaskMode;
    };

struct TAknIconParams
    {
    enum TFlags
        {
        EFlagUsesDefaultIconDir  = 0x0001,
        EFlagMbmIcon             = 0x0002,
        EFlagExcludeFromCache    = 0x0004, // do not cache dynamically
        EFlagDisableCompression  = 0x0008  // disable bitmap compression
        };
        
    TAknIconParams::TAknIconParams():iFlags(0)
        {        
        }

    TBool IsDefaultIconDirUsed() const
        {
        return iFlags & EFlagUsesDefaultIconDir;
        }
        
    void SetDefaultIconDirUsed()
        {
        iFlags |= EFlagUsesDefaultIconDir;
        }

    TBool IsMbmIcon() const
        {
        return iFlags & EFlagMbmIcon;
        }
        
    void SetMbmIcon()
        {
        iFlags |= EFlagMbmIcon;
        }
        
   TBool IsExcludedFromCache() const
        {
        return iFlags & EFlagExcludeFromCache;
        } 
               
    void ExcludeFromCache()
        {
        iFlags |= EFlagExcludeFromCache;
        }
        
    TBool IsCompressionDisabled() const
        {
        return iFlags & EFlagDisableCompression;
        }   

    void DisableCompression()
        {
        iFlags |= EFlagDisableCompression;
        }
                        
#ifdef __AKNICON_TRACES
    void PrintInfo()
        {
        RDebug::Print( _L("AknIcon: %x TAknIconParams info begin"), this);  
        RDebug::Print( _L("AknIcon: %x TAknIconParams iFileName=%S"), this,&iFileName);    
        RDebug::Print( _L("AknIcon: %x TAknIconParams iBitmapId=%d, iMaskId=%d"), this, iBitmapId, iMaskId);      
        RDebug::Print( _L("AknIcon: %x TAknIconParams iSize=(%d,%d), iMode=%d, iRotationAngle=%d"), this, iSize.iWidth, iSize.iHeight, iMode, iRotationAngle);              
        RDebug::Print( _L("AknIcon: %x TAknIconParams iColor=%d, iFile=%x, iFlags=%x"), this, iColor, iFlags);              
        RDebug::Print( _L("AknIcon: %x TAknIconParams info end"), this);    
        }    
#endif           
                       
    // Note! Default icon dir must always be excluded from this file name!
    TFileName iFileName;
    TInt iBitmapId;
    TInt iMaskId;
    TSize iSize;
    TInt iMode;
    TInt iRotationAngle;
    TRgb iColor;
    
    // Used when client supplies file handle. This cannot be used directly
    // on the other side of an IPC boundary. Instead, RFile's "transfer"
    // and "adopt" methods must be used.
    RFile iFile;
    TBool iAppIcon;
    private:
    TInt iFlags; // flags
    };

struct TAknIconSrvSessionIconItem
    {
    const CAknIconSrvIconItem* iIcon;
    TInt iUserCount; // both bitmap and mask increase this
    
    static TInt LinearOrder(
            const TAknIconSrvSessionIconItem& aFirst,
            const TAknIconSrvSessionIconItem& aSecond ) 
        {
        return reinterpret_cast<TInt>(aFirst.iIcon)-
               reinterpret_cast<TInt>(aSecond.iIcon);
        }
    };

struct TAknIconSrvSessionPreservedItem
    {
    const CAknIconDataItem* iDataItem;
    TInt iUserCount;
    };

#endif // AKN_ICON_SRV_DEF_H

// End of File

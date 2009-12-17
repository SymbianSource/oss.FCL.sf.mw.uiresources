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
* Description:   CAknBitmap class.
*
*/




#ifndef AKN_BITMAP_H
#define AKN_BITMAP_H

// INCLUDES
#include <e32std.h>
#include <fbs.h>

// CONSTANTS

// FORWARD DECLARATIONS
class CAknIconManager;
struct TAknIconInitData;

// CLASS DECLARATION

/**
* class CAknBitmap.
* @since 2.8
*/
const TUint KExtensionId = 0x1020735A;
NONSHARABLE_CLASS(CAknBitmap) : public CFbsBitmap
	{
    public:  // Constructors and destructor
        
        static CAknBitmap* NewL( CAknIconManager& aManager );
        
        /**
        * Destructor.
        */
        ~CAknBitmap();

    public: // New functions

        void AddToPointerListL();
        void RemoveFromPointerList();
        inline CAknIconManager* Manager() const {return iManager;}
        TBool SharedByIconSrv();
        void SetSharedByIconSrv();
        TBool MaskDestroyed();
        void SetMaskDestroyed();

        // Resets handles and frees all resources allocated to them
        void Reset();
    	void SetAppIcon();
    	TBool IsAppIcon() const;   
    	void SetEnsuredSize(const TSize& aSize);
    	TBool IsEnsuredSize(const TSize& aSize) const;      
    	
    	inline static CAknBitmap* DynamicCast(CFbsBitmap* aBitmap);
    	inline static CAknBitmap* DynamicCast(const CFbsBitmap* aBitmap);
    	         
    private:

        CAknBitmap();
        void ConstructL( CAknIconManager& aManager );
        TInt Extension_(TUint aExtensionId, TAny*& a0, TAny* a1);

    private:    // Data

        TInt iFlags;
        CAknIconManager* iManager;
        TSize iEnsuredSize;

    private:
        friend class RAknIconSrvClient;
        friend class CAknIconManager;
    };

#if 0
#ifdef __CW32__
#if  __option(RTTI)
#define RTTI_ON
#else
#warning RTTI is off
#endif
#else
#ifdef __RTTI 
#define RTTI_ON
#else
#warning RTTI is off
#endif
#endif
#else
#define RTTI_ON
#endif

inline CAknBitmap* CAknBitmap::DynamicCast(CFbsBitmap* aBitmap)
	{
	#ifdef RTTI_ON
	return dynamic_cast<CAknBitmap*>(aBitmap);
	#else
	TAny* p = NULL;
	CAknBitmap* bmp = static_cast<CAknBitmap*>(aBitmap);
	return bmp != NULL && KErrNone == bmp->Extension_(KExtensionId, p, NULL) ?
		bmp : NULL;
	#endif
	}
	

inline CAknBitmap* CAknBitmap::DynamicCast(const CFbsBitmap* aBitmap)
	{
	return CAknBitmap::DynamicCast(const_cast<CFbsBitmap*>(aBitmap));	
	}

#endif      // AKN_BITMAP_H
            
// End of File

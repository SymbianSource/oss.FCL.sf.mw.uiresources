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
* Description:  Builds final pictograph bitmaps.
*
*
*/



#ifndef BITMAP_BUILDER_H
#define BITMAP_BUILDER_H

// INCLUDES
#include <e32std.h>
#include <f32file.h>

// CONSTANTS

// Note: the values of the array should be always in ascending order!
const TUint TAknPictographMaxSetOfSupportedHeights[] = {12, 16, 18, 24, 30};
const TInt  KAknPictographMaxSetOfSupportedHeightsCount = 
                       sizeof(TAknPictographMaxSetOfSupportedHeights)/sizeof(TInt);

// FORWARD DECLARATIONS

// CLASS DECLARATION

class CPictographIniData : public CBase
    {
    public:
        static CPictographIniData* NewLC();
        ~CPictographIniData() {iFilenameArray.ResetAndDestroy();}

    private:
        CPictographIniData() {}
        void ConstructL();

    public:
        TText iCode;
        RPointerArray<HBufC8> iFilenameArray;
    };


class CPictographIniFileData : public CBase
    {
    public:
        static CPictographIniFileData* NewLC();
        ~CPictographIniFileData() {iIniData.ResetAndDestroy();}

    private:
        CPictographIniFileData() {}
        void ConstructL();

    public:
        RPointerArray<CPictographIniData> iIniData;        
        TInt iBmps;
        TInt iHeightIndex;
    };


class CPictographBitmapsData : public CBase
    {
    public:
        static CPictographBitmapsData* NewLC(TInt aBitmapSizesGranularity);
        ~CPictographBitmapsData();

    private:
        CPictographBitmapsData(TInt aBitmapSizesGranularity);
        void ConstructL();

    public:
        RArray<TSize> iBitmapSizes;
        CArrayFixFlat<TInt>* iOffsets;
    };


/**
* Pictograph merger utility.
*/
class CBitmapBuilder : public CBase
	{
    public:  // Constructors and destructor
        
        /**
        * Creates singleton.
        */
        static CBitmapBuilder* NewLC();
        
        /**
        * Destructor.
        */
        virtual ~CBitmapBuilder();

    public: // New functions

        void EnsurePathsL();
        void ParseIniFilesL();
        void GenerateBmconvCommandFilesL();
        void GenerateBuildBitmapsCommandFileL();
        void BuildFinalBitmapsL();
        void GeneratePictographDefinitionsL();
        void GeneratePictographRangeL();

    private: // New functions

        void ParseIniFileL( 
            const TDesC& aFilename,
            CPictographIniFileData*& aIniFileData );

        void GenerateBmconvCommandFileL(
            const TDesC& aCmdFileName,
            const TDesC& aBitmapFileName,
            RPointerArray<CPictographIniData>& aArray );

        void BuildFinalBitmapL(
            const TDesC& aMultiBitmapFile,
            const TDesC& aFinalBitmapFile,
            const TDesC& aFinalMaskFile,
            TInt aBmps,
            CPictographBitmapsData& aBitmapsData);

        void GenerateTAknPictographSupportedHeightsArrayL(TPtr8& aData);
        void GenerateTAknPictographSupportedHeightsNumbersArrayL(TPtr8& aData);
        void GenerateAnimationDefinitionsL(TPtr8& aData);
        void GenerateAnimationFramesDefinitionsL(TPtr8& aData);
        void GenerateAnimatedPictographTableL(TPtr8& aData);
        void GenerateStaticDefinitionsL(TPtr8& aData);
        void GenerateStaticPictographTableL( TPtr8& aData );
        


    private:

        /**
        * C++ default constructor.
        */
        CBitmapBuilder();

        /**
        * 2nd phase constructor.
        */
        void ConstructL();

    private:    // Data
        
        RFs iFs;

        // Stores the parsed bitmap ini data for 
        // the found ini files
        RPointerArray<CPictographIniFileData> iIniFilesData;

        // Stores the bitmaps data for the supported heights
        RPointerArray<CPictographBitmapsData> iBitmapsData;
    };

#endif      // BITMAP_MERGER_H
            
// End of File

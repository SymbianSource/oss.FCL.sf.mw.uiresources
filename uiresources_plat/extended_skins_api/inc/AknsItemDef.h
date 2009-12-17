/*
* Copyright (c) 2002-2004 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  ?Description
*
*/


#ifndef AKNSITEMDEF_H
#define AKNSITEMDEF_H

//  INCLUDES
#include <AknsItemID.h>
#include <gdi.h>

// FORWARD DECLARATIONS
struct TAknsImageAttributeData;

// CLASS DECLARATIONS

/**
* Base class for item definitions.
* Item definition maps item ID specified as TAknsItemID to a specific resource
* (such as bitmap filename and index). Content of the definition varies 
* depending of the type of the resource. 
*
* CAknsItemDef does not itself have any dynamically allocated members.
* Therefore the members of its friend classes can instantiate CAknsItemDef
* into stack (e.g. to perform binary search with LineraOrder without heap 
* allocation) using CAknsItemDef::CAknsItemDef(const TAknsItemID aID) 
* constructor. Derived classes, however, require two-phased construction and 
* proper destruction.
*
* This is a public class with exported functions.
* The class is not intended for derivation outside the library.
*
* @lib AknSkinSrv.lib
*
* @since 2.0
*/
class CAknsItemDef : public CBase
    {    

    public: // Constructors and destructors        

        /**
        * Two-phased constructor.
        * Constructs item definition object with specified ID, item type
        * ::EAknsITUnknown and localization type ::EAknsIDLTDefault.
        *
        * @param aID Item ID of the newly created item definition.
        *
        * @return Newly constructed CAknsItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error code.
        */
        IMPORT_C static CAknsItemDef* NewL( const TAknsItemID& aID );
        
        /**
        * Destructor.
        * Base-class destructor does nothing. It exists only to enable 
        * destruction of derived objects using pointer to base class object.
        */
        IMPORT_C virtual ~CAknsItemDef();

    public: // New functions
        
        /**
        * Returns the item type of this item definition.
        * This method can be used to provide run-time type information.
        * Corresponding classes are listed in definition of ::TAknsItemType.
        *
        * @since 2.0
        *
        * @return Type of the item definition as TAknsItemType.
        */
        IMPORT_C TAknsItemType Type() const;

        /**
        * Returns the item ID of this item definition.
        *
        * @since 2.0
        *
        * @return Item ID of the item definition as TAknsItemID.
        */
        IMPORT_C TAknsItemID ID() const;

        /**
        * Determines the order of two CAknsItemDef objects.
        * Order is determined based on the item ID of the object, as described
        * in TAknsItemID::LinearOrder().
        *
        * @since 2.0
        *
        * @param aFirst First object to be compared.
        *
        * @param aSecond Second object to be compared.
        *
        * @return 0 if the two objects are equal, negative value if the first 
        *   object is less than the second and positive value if the first 
        *   object is greater than the second.
        */
        IMPORT_C static TInt LinearOrder( const CAknsItemDef& aFirst, 
            const CAknsItemDef& aSecond );

    private: // Reserved exports

        /**
        * Reserved for future use.
        *
        * @since 2.0        
        */
        IMPORT_C void Reserved1();

        /**
        * Reserved for future use.
        *
        * @since 2.0        
        */
        IMPORT_C void Reserved2();
            
    protected: // C++ protected constructor for derived classes
                
        /**
        * C++ constructor for derived classes.
        * Constructs item definition object with given item type and ID,
        * and localization type ::EAknsIDLTDefault.
        *
        * @param aType Item type of the new object.
        *
        * @param aID Item ID of the new object.
        *
        * @internal
        */
        CAknsItemDef( const TAknsItemType aType, const TAknsItemID& aID );

    private: // C++ private constructor for friend classes

        /**
        * C++ constructor for internal use.
        * Constructs item definition object with specified ID and item type
        * ::EAknsITUnknown, and localization type ::EAknsIDLTDefault.
        *
        * @param aID Item ID of the new item definition.
        *
        * @internal
        */
        IMPORT_C CAknsItemDef( const TAknsItemID& aID );
    
    protected:  // Data

        TAknsItemType iType;            //!< Item type.
        TAknsItemID iID;                //!< Item ID.
        TInt iSpare1;                   //!< Reserved for future use.
        TInt iSpare2;                   //!< Reserved for future use.

    private:    // Friend classes
        friend class CAknsAppSkinInstance;

    };

/**
* Image item definition.
* Image item definition consists of (in addition to base class data) 
* image attributes and their values. Item type for image item definitions
* is ::EAknsITImage
*
* This is a public class with exported functions.
* The class is not intended for derivation outside the library.
*
* @lib AknSkinSrv.lib
*
* @since 2.0
*/
NONSHARABLE_CLASS(CAknsImageItemDef) : public CAknsItemDef
    {
    public:  // Constructors and destructor        

        /**
        * Two-phased constructor.
        * Constructs a new image item definition object. 
        *
        * @param aID Item ID of the new object.
        *        
        * @return Newly constructed CAknsImageItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsImageItemDef* NewL( const TAknsItemID& aID );
        
        /**
        * Destructor.
        */
        virtual ~CAknsImageItemDef();

    public: // New functions

        /**
        * Sets the image attributes for this image definition.
        *
        * @since 2.0
        */
        IMPORT_C void SetAttributesL( const TAknsImageAttributeData& aAttributes );

        /**
        * Returns the image attributes for this image definition.
        *
        * @since 2.0
        */
        IMPORT_C const TAknsImageAttributeData* Attributes() const;
    
    protected: // C++ protected constructor

        /**
        * C++ constructor for internal use.
        * Constructs an image item definition object with given ID.
        *
        * @since 2.0
        *
        * @param aType Type of the definition object. While this is always
        *   ::EAknsITImage for CAknsImageItemDef objects, derived classes
        *   may specify other values.
        *
        * @param aID Item ID of the new item definition.
        *        
        * @internal
        */
        CAknsImageItemDef( const TAknsItemType aType, const TAknsItemID& aID );
    
    protected:  // Data

        // Image attributes
        TAknsImageAttributeData* iAttributeData;
        
    };

/**
* Bitmap item definition.
* Bitmap item definition consists of (in addition to base class data) bitmap
* filename and index in bitmap file. Item type for bitmap item definitions
* is always ::EAknsITBitmap.
*
* This is a public class with exported functions.
* The class is not intended for derivation outside the library.
*
* @lib AknSkinSrv.lib
*
* @since 2.0
*/
NONSHARABLE_CLASS(CAknsBitmapItemDef) : public CAknsImageItemDef
    {
    public:  // Constructors and destructor        

        /**
        * Two-phased constructor, complete initialization.
        * Constructs a new bitmap item definition object. 
        *
        * @param aID Item ID of the new object.
        *
        * @param aFilename Filename of the bitmap. Internal descriptor is
        *   constructed to point to the same data as the given one.
        *   Ownership of the original descriptor stays with the caller and
        *   it must ensure that the lifetime of the descriptor is appropriate.
        *
        * @param aIndex Index of the bitmap in the bitmap file.
        *
        * @return Newly constructed CAknsBitmapItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsBitmapItemDef* NewL( const TAknsItemID& aID, 
            const TDesC& aFilename, const TInt aIndex );

        /**
        * Two-phased constructor, partial initialization.
        * Constructs a new bitmap item definition object. Bitmap filename
        * and index must be set by SetFilename or SetFilenameL and SetIndex.
        *
        * @param aID Item ID of the new object.        
        *
        * @return Newly constructed CAknsBitmapItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsBitmapItemDef* NewL( const TAknsItemID& aID );
        
        /**
        * Destructor.
        * Deletes the internal buffer reserved for bitmap filename.
        */
        virtual ~CAknsBitmapItemDef();

    public: // New functions

        /**
        * Sets the filename, ownership of the descriptor stays with the caller.
        * If CAknsBitmapItemDef object already owns a filename descriptor, it
        * is deleted.
        *
        * @since 2.0
        *
        * @param aFilename Reference to the descriptor containing new filename.
        *   Caller still owns the descriptor and must ensure that its lifetime
        *   is appropriate.
        */
        IMPORT_C void SetFilename( const TDesC& aFilename );

        /**
        * Sets the filename, content of the descriptor is copied into an
        * internal buffer. If CAknsBitmapItemDef object already owns a filename 
        * descriptor, it is deleted.
        *
        * @since 2.0
        *
        * @param aFilename Reference to the descriptor containing new filename.
        *   Content of the descriptor is copied into an internal buffer owned
        *   by CAknsBitmapItemDef.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error code.
        */
        IMPORT_C void SetFilenameL( const TDesC& aFilename );
        
        /**
        * Returns a reference to filename of this item definition.
        *
        * @since 2.0
        *
        * @return Reference to descriptor containing the filename. Lifetime of
        *   the descriptor may end when SetFilename or SetFilenameL is called 
        *   or CAknsBitmapItemDef object is deleted.
        */
        IMPORT_C const TDesC& Filename() const;

        /**
        * Sets bitmap file index of this item definition.
        *
        * @since 2.0
        *
        * @param aIndex New index.
        */
        IMPORT_C void SetIndex( const TInt aIndex );

        /**
        * Returns bitmap file index of this item definition.
        *
        * @since 2.0
        *
        * @return Index of the bitmap (in the bitmap file) as integer value.
        */
        IMPORT_C TInt Index() const;
    
    protected: // C++ protected constructor

        /**
        * C++ constructor for internal use.
        * Constructs bitmap item definition object with given ID and bitmap
        * index. Filename needs to be set separately.
        *
        * @since 2.0
        *
        * @param aType Type of the definition object. While this is always
        *   ::EAknsITBitmap for CAknsBitmapItemDef objects, derived classes
        *   may specify other values.
        *
        * @param aID Item ID of the new item definition.
        *
        * @param aIndex Index of the bitmap of the new item definition.
        *
        * @internal
        */
        CAknsBitmapItemDef( const TAknsItemType aType, const TAknsItemID& aID, 
            const TInt aIndex );    
    
    protected:  // Data

        TPtrC iFilename;        //!< Bitmap filename.
        HBufC* iFilenameBuf;    //!< Internal filename buffer.
        TInt iIndex;            //!< Index of bitmap in bitmap file.
        
    };

/**
* Masked bitmap item definition.
* Masked bitmap item definition is derived from CAknsBitmapItemDef
* but additionally contains a second index specifying the mask.
* Item type for masked bitmap item definitions is always ::EAknsITMaskedBitmap.
*
* This is a public class with exported functions.
* The class is not intended for derivation outside the library.
*
* @lib AknSkinSrv.lib
*
* @since 2.0
*/
NONSHARABLE_CLASS(CAknsMaskedBitmapItemDef) :public CAknsBitmapItemDef
    {
    public:  // Constructors and destructor        

        /**
        * Two-phased constructor, complete initialization.
        * Constructs a new masked bitmap item definition object. 
        *
        * @param aID Item ID of the new object.
        *
        * @param aFilename Filename of the bitmap. Internal descriptor is
        *   constructed to point to the same data as the given one.
        *   Ownership of the original descriptor stays with the caller and
        *   it must ensure that the lifetime of the descriptor is appropriate.
        *
        * @param aIndex Index of the bitmap in the bitmap file.
        *
        * @param aMaskIndex Index of the mask in the same bitmap file.
        *
        * @return Newly constructed CAknsMaskedBitmapItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsMaskedBitmapItemDef* NewL( const TAknsItemID& aID, 
            const TDesC& aFilename, const TInt aIndex, const TInt aMaskIndex );

        /**
        * Two-phased constructor, partial initialization.
        * Constructs a new masked bitmap item definition object. Bitmap 
        * filename and indices must be set by SetFilename or SetFilenameL,
        * SetIndex and SetMaskIndex.
        *
        * @param aID Item ID of the new object.        
        *
        * @return Newly constructed CAknsMaskedBitmapItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsMaskedBitmapItemDef* NewL( const TAknsItemID& aID );
        
        /**
        * Destructor.
        * Provided for completeness, does not actually do anything.
        */
        virtual ~CAknsMaskedBitmapItemDef();

    public: // New functions

        /**
        * Sets index of mask in the bitmap file for this item definition.
        *
        * @since 2.0
        *
        * @param aMaskIndex New index.
        */
        IMPORT_C void SetMaskIndex( const TInt aMaskIndex );

        /**
        * Returns bitmap file index for bitmap mask.
        *
        * @since 2.0
        *
        * @return Index of the mask (in the bitmap file) as integer value.
        */
        IMPORT_C TInt MaskIndex() const;
    
    protected: // C++ protected constructor

        /**
        * C++ constructor for internal use.
        * Constructs masked bitmap item definition object with given ID and 
        * bitmap indices. Filename needs to be set separately.
        *
        * @param aType Type of the definition object. While this is always
        *   ::EAknsITMaskedBitmap for CAknsMaskedBitmapItemDef objects, 
        *   derived classes may specify other values.
        *
        * @param aID Item ID of the new item definition.
        *
        * @param aIndex Index of the bitmap of the new item definition.
        *
        * @param aMaskIndex Index of the bitmap mask of the new definition.
        *
        * @internal
        */
        CAknsMaskedBitmapItemDef( const TAknsItemType aType, 
            const TAknsItemID& aID, const TInt aIndex, const TInt aMaskIndex );
    
    protected:  // Data
        
        TInt iMaskIndex; //!< Index of mask in bitmap file.
        
    };

/**
* Data structure for color values.
*
* @since 2.0
*
* @internal
*/
struct TAknsColorTableEntry
    {
    /**
    * Indexed color value, or -1 if RGB value is used instead.
    */
    TInt iIndex;

    /**
    * RGB-value, used only if iIndex is -1.
    */
    TUint32 iRgb;
    };

/**
* Color table item definition.
* Color table item definition contains (in addition to base class data) an 
* array of color values. Item type for color table item definitions is always 
* ::EAknsITColorTable.
*
* This is a public class with exported functions.
* The class is not intended for derivation outside the library.
*
* @lib AknSkinSrv.lib
*
* @since 2.0
*/
NONSHARABLE_CLASS(CAknsColorTableItemDef) :public CAknsImageItemDef
    {
    public:  // Constructors and destructor        

        /**
        * Two-phased constructor, complete initialization.
        * Constructs a new color table item definition object. 
        *
        * @param aID Item ID of the new object.
        *
        * @param aNumberOfColors Number of colors available in aColors.
        *
        * @param aColors Pointer to the first color. Internal pointer is set
        *   to point to the same place as the given one. Ownership of the 
        *   color array stays with the caller and it must ensure that its 
        *   lifetime is appropriate.
        *        
        * @return Newly constructed CAknsColorTableItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsColorTableItemDef* NewL( const TAknsItemID& aID, 
            const TInt aNumberOfColors, 
            const TAknsColorTableEntry *const aColors );

        /**
        * Two-phased constructor, partial initialization.
        * Constructs a new color table item definition object. Colors must
        * be set separately by using SetColorsL or SetColors.
        *
        * @param aID Item ID of the new object.
        *
        * @return Newly constructed CAknsColorTableItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsColorTableItemDef* NewL( const TAknsItemID& aID );
        
        /**
        * Destructor.
        * If the object owns a color array, it is destroyed.
        */
        virtual ~CAknsColorTableItemDef();

    public: // New functions

        /**
        * Sets the colors, ownership of the color array stays with the caller.
        * If this object already owns a color array, it is destroyed.
        *
        * @since 2.0
        *
        * @param aNumberOfColors Number of colors in aColors.
        *
        * @param aColors Pointer to the first color. The caller still owns
        *   the color array and must ensure that its lifetime is appropriate.
        */
        IMPORT_C void SetColors( const TInt aNumberOfColors, 
            const TAknsColorTableEntry *const aColors );

        /**
        * Sets the colors, content of the array is copied to an internal
        * array. If this object already owns a color array, it is destroyed.
        *
        * @since 2.0
        *
        * @param aNumberOfColors Number of colors in aColors.
        *
        * @param aColors Pointer to the first color. 
        *
        * @par Exceptions:
        *   If allocation fails, returns with an error code.
        */
        IMPORT_C void SetColorsL( const TInt aNumberOfColors, 
            const TAknsColorTableEntry *const aColors );

        /**
        * Returns pointer to color values.
        *
        * @since 2.0
        *        
        * @return Pointer to color values. The array is still owned by this 
        *   object.
        */
        IMPORT_C const TAknsColorTableEntry* Colors() const;

        /**
        * Returns the number of colors.
        *
        * @since 2.0
        * 
        * @return Number of colors.
        */
        IMPORT_C TInt NumberOfColors() const;
    
    protected: // C++ protected constructor

        /**
        * C++ constructor for internal use.
        * Constructs color item definition object with given ID. Color
        * array must be set separately.
        *
        * @param aType Type of the definition object. While this is always
        *   ::EAknsITColorTable for CAknsColorTableItemDef objects, derived 
        *   classes may specify other values.
        *
        * @param aID Item ID of the new item definition.
        *
        * @internal
        */
        CAknsColorTableItemDef( const TAknsItemType aType, 
            const TAknsItemID& aID );
    
    protected:  // Data

        // Color array
        const TAknsColorTableEntry* iColorArray;
        // Internal (owned) color array
        TAknsColorTableEntry* iInternalColorArray;
        // Number of colors
        TInt iNumberOfColors;
    };

/**
* Image table item definition.
* Image table item definition contains (in addition to base class data) 
* an array containing image IDs. Item type for image table item definitions is
* always ::EAknsITImageTable.
*
* This is a public class with exported functions.
* The class is not intended for derivation outside the library.
*
* @lib AknSkinSrv.lib
*
* @since 2.0
*/
NONSHARABLE_CLASS(CAknsImageTableItemDef) : public CAknsImageItemDef
    {
    public:  // Constructors and destructor        

        /**
        * Two-phased constructor, complete initialization.
        * Constructs an image table item definition object. 
        *
        * @param aID Item ID of the new object.
        *
        * @param aNumberOfImages Number of entries in aImages.
        *
        * @param aImages Pointer to the first item ID.
        *   An internal pointer is set to point to the same place as the 
        *   given one. Ownership of the array stays with the caller and it 
        *   must ensure that its lifetime is appropriate.
        *        
        * @return Newly constructed CAknsImageTableItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsImageTableItemDef* NewL( const TAknsItemID& aID, 
            const TInt aNumberOfImages, const TAknsItemID *const aImages );

        /**
        * Two-phased constructor, partial initialization.
        * Constructs a new image table item definition object. Images must
        * be set separately by using SetImagesL or SetImages.
        *
        * @param aID Item ID of the new object.
        *
        * @return Newly constructed CAknsImageTableItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsImageTableItemDef* NewL( const TAknsItemID& aID );
        
        /**
        * Destructor.
        * If the object owns an array, it is destroyed.
        */
        virtual ~CAknsImageTableItemDef();

    public: // New functions

        /**
        * Sets the images, ownership of the image item ID array stays with 
        * the caller. If this object already owns an array, it is destroyed.
        *
        * @since 2.0
        *
        * @param aNumberOfImages Number of images in aImages.
        *
        * @param aImages Pointer to the first TAknsItemID. The caller 
        *   still owns the array and must ensure that its lifetime is 
        *   appropriate.
        */
        IMPORT_C void SetImages( const TInt aNumberOfImages, 
            const TAknsItemID *const aImages );

        /**
        * Sets the images, content of the array is copied to an internal
        * array. If this object already owns an array, it is destroyed.
        *
        * @since 2.0
        *
        * @param aNumberOfImages Number of images in aImages.
        *
        * @param aImages Pointer to the first image item ID. 
        *
        * @par Exceptions:
        *   If allocation fails, returns with an error code.
        */
        IMPORT_C void SetImagesL( const TInt aNumberOfImages, 
            const TAknsItemID *const aImages );

        /**
        * Returns pointer to the first element of the image array.
        *
        * @since 2.0
        *        
        * @return Pointer to the first entry. The array is still owned 
        *   by this object.
        */
        IMPORT_C const TAknsItemID* Images() const;

        /**
        * Returns the number of images.
        *
        * @since 2.0
        * 
        * @return Number of images.
        */
        IMPORT_C TInt NumberOfImages() const;
    
    protected: // C++ protected constructor

        /**
        * C++ constructor for internal use.
        * Constructs image table item definition object with given ID.
        * The image array must be set separately.
        *
        * @param aType Type of the definition object. While this is always
        *   ::EAknsITImageTable for CAknsImageTableItemDef objects, derived 
        *   classes may specify other values.
        *
        * @param aID Item ID of the new item definition.
        *
        * @internal
        */
        CAknsImageTableItemDef( const TAknsItemType aType, 
            const TAknsItemID& aID );
    
    protected:  // Data

        const TAknsItemID* iImageArray;     //!< Image ID array.
        TAknsItemID* iInternalImageArray;   //!< Internal (owned) image ID array.
        TInt iNumberOfImages;               //!< Number of images in the array.
    };

/**
* Data structure for animation frame properties.
*
* @since 2.0
*
* @internal
*/
struct TAknsBmpAnimFrameInfo
    {
    /**
    * Frame time in milliseconds or -1 if not defined.
    */
    TInt16 iTime;

    /**
    * Frame position X-coordinate.
    */
    TInt16 iPosX;

    /**
    * Frame position Y-coordinate.
    */
    TInt16 iPosY;
    };

/**
* Bitmap animation item definition.
* Bitmap animationitem definition contains (in addition to base class data) 
* animation properties and an array containing frame properties.
* Item type for image table item definitions is
* always ::EAknsITBmpAnim.
*
* This is a public class with exported functions.
* The class is not intended for derivation outside the library.
*
* @lib AknSkinSrv.lib
*
* @since 2.0
*/
NONSHARABLE_CLASS(CAknsBmpAnimItemDef) : public CAknsImageTableItemDef
    {
    public:  // Constructors and destructor        

        /**
        * Two-phased constructor, complete initialization.
        * Constructs a bitmap animation item definition object. 
        *
        * @param aID Item ID of the new object.
        *
        * @param aNumberOfImages Number of entries in aImages.
        *
        * @param aImages Pointer to the first item ID.
        *   An internal pointer is set to point to the same place as the 
        *   given one. Ownership of the array stays with the caller and it 
        *   must ensure that its lifetime is appropriate.
        *
        * @param aFrameInfos Pointer to the first frame info.
        *   Ownership is handled as with aImages.
        *        
        * @return Newly constructed CAknsBmpAnimItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsBmpAnimItemDef* NewL( const TAknsItemID& aID, 
            const TInt aNumberOfImages, const TAknsItemID *const aImages,
            const TAknsBmpAnimFrameInfo *const aFrameInfos );

        /**
        * Two-phased constructor, partial initialization.
        * Constructs a new bitmap animation item definition object. Images must
        * be set separately by using SetImagesL and SetFrameInfosL or SetImages
        * and SetFrameInfos.
        *
        * @param aID Item ID of the new object.
        *
        * @return Newly constructed CAknsBmpAnimItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsBmpAnimItemDef* NewL( const TAknsItemID& aID );
        
        /**
        * Destructor.
        * If the object owns an array, it is destroyed.
        */
        virtual ~CAknsBmpAnimItemDef();

    public: // New functions

        /**
        * Sets frame properties, ownership of the frame info array stays with 
        * the caller. If this object already owns an array, it is destroyed.
        *
        * The number of frame info objects in the array must match the number
        * of images. This implies that SetFrameInfos can not be called before
        * images have been set.
        *
        * @since 2.0
        *        
        * @param aFrameInfos Pointer to the first TAknsBmpAnimFrameInfo. The 
        *   caller still owns the array and must ensure that its lifetime is 
        *   appropriate.
        */
        IMPORT_C void SetFrameInfos( 
            const TAknsBmpAnimFrameInfo *const aFrameInfos );

        /**
        * Sets frame propertis, content of the array is copied to an internal
        * array. If this object already owns an array, it is destroyed.
        *
        * The number of frame info objects in the array must match the number
        * of images. This implies that SetFrameInfosL can not be called before
        * images have been set.
        *
        * @since 2.0
        *
        * @param aFrameInfos Pointer to the first TAknsBmpAnimFrameInfo. 
        *
        * @par Exceptions:
        *   If allocation fails, returns with an error code.
        */
        IMPORT_C void SetFrameInfosL(
            const TAknsBmpAnimFrameInfo *const aFrameInfos );

        /**
        * Returns pointer to the first element of the frame info array.
        *
        * @since 2.0
        *        
        * @return Pointer to the first entry. The array is still owned 
        *   by this object.
        */
        IMPORT_C const TAknsBmpAnimFrameInfo* FrameInfos() const;

        /**
        * Sets the flag indicating whether the last frame should be
        * interpreted as the background (i.e. excluded from the animation
        * itself).
        *
        * @since 2.0
        *
        * @param aLastFrameBg Boolean value.
        */
        IMPORT_C void SetLastFrameBackground( TBool aLastFrameBg );

        /**
        * Retrieves the flag value indicating whether the last frame
        * should be interpreted as the background.
        *
        * @since 2.0
        *
        * @return Boolean value.
        */
        IMPORT_C TBool LastFrameBackground() const;

        /**
        * Sets the frame interval for the entire animation.
        *
        * @since 2.0
        *
        * @param aFrameInterval Frame interval in milliseconds or -1.
        */
        IMPORT_C void SetFrameInterval( const TInt16 aFrameInterval );

        /**
        * Retrieves the frame interval.
        *
        * @since 2.0
        *
        * @return Frame interval in milliseconds or -1.
        */
        IMPORT_C TInt16 FrameInterval() const;

        /**
        * Sets the play mode for the entire animation.
        *
        * @since 2.0
        *
        * @param aPlayMode Play mode.
        */
        IMPORT_C void SetPlayMode( const TInt16 aPlayMode );

        /**
        * Retrieves the play mode.
        *
        * @since 2.0
        *
        * @return Play mode.
        */
        IMPORT_C TInt16 PlayMode() const;

        /**
        * Sets the flash property for the entire animation.
        *
        * @since 2.0
        *
        * @param aFlash Flash flag value.
        */
        IMPORT_C void SetFlash( const TBool aFlash );

        /**
        * Retrieves the flash property.
        *
        * @since 2.0
        *
        * @return Flash flag value.
        */
        IMPORT_C TBool Flash() const;
    
    protected: // C++ protected constructor

        /**
        * C++ constructor for internal use.
        * Constructs bitmap animation item definition object with given ID.
        * The image array and frame properties must be set separately.
        *
        * @param aType Type of the definition object. While this is always
        *   ::EAknsITBmpAnim for CAknsBmpAnimItemDef objects, derived 
        *   classes may specify other values.
        *
        * @param aID Item ID of the new item definition.
        *
        * @internal
        */
        CAknsBmpAnimItemDef( const TAknsItemType aType, 
            const TAknsItemID& aID );
    
    protected: // Data

        const TAknsBmpAnimFrameInfo* iFrameArray;   //!< Frame array.
        TAknsBmpAnimFrameInfo* iInternalFrameArray; //!< Internal (owned) image frame array.

        TBool iLastFrameBackground; //!< Last frame used as background flag.
        TInt16 iFrameInterval;  //!< Frame interval.
        TInt16 iPlayMode;       //!< Play mode.
        TBool iFlash;           //!< Flash flag.
    };

/**
* String item definition.
* String item definition consists of (in addition to base class data) 
* a single string value. Item type for string item definitions is 
* ::EAknsITString
*
* This is a public class with exported functions.
* The class is not intended for derivation outside the library.
*
* @lib AknSkinSrv.lib
*
* @since 2.6
*/
NONSHARABLE_CLASS(CAknsStringItemDef) : public CAknsItemDef
    {
    public:  // Constructors and destructor        

        /**
        * Two-phased constructor.
        * Constructs a new string item definition object. 
        *
        * @since 2.6
        *
        * @param aID Item ID of the new object.
        *        
        * @return Newly constructed CAknsStringItemDef object.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error 
        *   code.
        */
        IMPORT_C static CAknsStringItemDef* NewL( const TAknsItemID& aID );
        
        /**
        * Destructor.
        */
        virtual ~CAknsStringItemDef();

    public: // New functions

        /**
        * Sets the string, content of the descriptor is copied into an
        * internal buffer. If CAknsStringItemDef object already owns a filename
        * descriptor, it is deleted.
        *
        * @since 2.6
        *
        * @param aString Reference to the descriptor containing new value.
        *   Content of the descriptor is copied into an internal buffer owned
        *   by CAknsStringItemDef.
        *
        * @par Exceptions:
        *   If allocation fails, function leaves with a system-wide error code.
        */
        IMPORT_C void SetStringL( const TDesC& aString );
        
        /**
        * Returns a reference to the string value of this item definition.
        *
        * @since 2.6
        *
        * @return Reference to descriptor containing the value. Lifetime of
        *   the descriptor may end when SetStringL is called 
        *   or CAknsStringItemDef object is deleted.
        */
        IMPORT_C const TDesC& String() const;
    
    protected: // C++ protected constructor

        /**
        * C++ constructor for internal use.
        * Constructs an string item definition object with given ID.
        *
        * @since 2.6
        *
        * @param aType Type of the definition object. While this is always
        *   ::EAknsITString for CAknsStringItemDef objects, derived classes
        *   may specify other values.
        *
        * @param aID Item ID of the new item definition.
        *        
        * @internal
        */
        CAknsStringItemDef( const TAknsItemType aType, const TAknsItemID& aID );
    
    protected:  // Data

        HBufC* iString; // String value, owned
        
    };

/**
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsEffectParamDef) : public CBase
    {
    public:
        IMPORT_C static CAknsEffectParamDef* NewL();
        virtual ~CAknsEffectParamDef();

    public:
        IMPORT_C void SetType(TUint32 aType);
        IMPORT_C TUint32 GetType();

        IMPORT_C void SetNameL(const TDesC& aName);
        IMPORT_C const TDesC* GetName();

        IMPORT_C void SetValue(TUint32 aParam);
        IMPORT_C void SetValueL(const TDesC& aParam);
        IMPORT_C void SetValueL(const TDesC& aFilename, 
            TUint32 aBitmapIndex, TUint32 aMaskIndex);
        
        IMPORT_C TUint32 GetNumber();
        IMPORT_C const TDesC* GetString();
        IMPORT_C const TDesC* GetFilename();
        IMPORT_C TUint32 GetBitmapIndex();
        IMPORT_C TUint32 GetMaskIndex();

    protected:
        CAknsEffectParamDef();

    private:
        TUint32 iParamType;
        TUint32 iParam;
        TUint32 iBitmapIndex;
        TUint32 iMaskIndex;
        HBufC* iParamName;
        HBufC* iParamString;       
        HBufC* iFilename;
    };

/**
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsEffectItemDef) : public CBase
    {
    public:  
        IMPORT_C static CAknsEffectItemDef* NewL();
        virtual ~CAknsEffectItemDef();

    public: // New functions

        IMPORT_C void SetEffectUid( const TUid aUid );
        IMPORT_C TUid EffectUid() const;

        IMPORT_C void AddParameterL(CAknsEffectParamDef* aParam);
        IMPORT_C CAknsEffectParamDef* GetParameter(TInt32 aIndex) const ;
        IMPORT_C TInt ParameterCount() const;

        IMPORT_C void SetLayerIndexesAndModes(
            TUint32 aInputLayerAIndex, TUint32 aInputLayerAMode,
            TUint32 aInputLayerBIndex, TUint32 aInputLayerBMode,
            TUint32 aOutputLayerIndex, TUint32 aOutputLayerMode );

    protected:
        CAknsEffectItemDef();

    public:
        TUint32 iInputLayerAIndex;
        TUint32 iInputLayerAMode;
        TUint32 iInputLayerBIndex;
        TUint32 iInputLayerBMode;
        TUint32 iOutputLayerIndex;
        TUint32 iOutputLayerMode;

    private:
        TUid iUid; //!< Effect UID.
        RPointerArray<CAknsEffectParamDef> iParamArray;
    };

/**
*
* @since 2.8
*/
NONSHARABLE_CLASS(CAknsEffectQueueItemDef) : public CAknsItemDef
    {
    public:  // Constructors and destructor
        IMPORT_C static CAknsEffectQueueItemDef* NewL(const TAknsItemID& aID);
        virtual ~CAknsEffectQueueItemDef();
        
    public: 
        IMPORT_C void AddEffectL(CAknsEffectItemDef* aItemDef);
        IMPORT_C CAknsEffectItemDef* GetEffect( TInt32 aIndex ) const;
        IMPORT_C TUint32 EffectCount() const;

        IMPORT_C void SetLayerIndexesAndModes(
            TUint32 aInputLayerIndex, TUint32 aInputLayerMode,
            TUint32 aOutputLayerIndex, TUint32 aOutputLayerMode );
        IMPORT_C void SetReference(const TAknsItemID& aID);
        
    protected:
        CAknsEffectQueueItemDef( const TAknsItemType aType, 
            const TAknsItemID& aID);
        
    public:
        TUint32 iInputLayerIndex;
        TUint32 iInputLayerMode;
        TUint32 iOutputLayerIndex;
        TUint32 iOutputLayerMode;
        TAknsItemID iReference;
        
    private:
        RPointerArray<CAknsEffectItemDef> iEffectArray;
    };

// =============================================================================
// Animation related definitions
// =============================================================================

/**
* @since 3.0
*/
class CAknsSizeBoundParamDef: public CBase
    {
    public: // Constructors and destructor
        IMPORT_C static CAknsSizeBoundParamDef* NewL();
        virtual ~CAknsSizeBoundParamDef();

    public: // New functions
        IMPORT_C void SetDataL( const TDesC& aName,
                                TUint32 aAnimationValueId,
                                TUint32 aParamFlags );

        IMPORT_C const TDesC* Name() const;
        IMPORT_C TUint32 AnimationValueId() const;
        IMPORT_C TUint32 ParamFlags() const;

    protected:
        CAknsSizeBoundParamDef();

    private:
        TDesC* iName;
        TUint32 iAnimationValueId;
        TUint32 iParamFlags;
    };

/**
* @since 3.0
*/
class CAknsNamedReferenceDef: public CBase
    {
    public: // Constructors and destructor
        IMPORT_C static CAknsNamedReferenceDef* NewL();
        virtual ~CAknsNamedReferenceDef();

    public: // New functions
        IMPORT_C void SetDataL( const TDesC& aName,
                                TUint32 aAnimationValueId );

        IMPORT_C const TDesC* Name() const;
        IMPORT_C TUint32 AnimationValueId() const;

    protected:
        CAknsNamedReferenceDef();

    private:
        TDesC* iName;
        TUint32 iAnimationValueId;
    };

/**
* @since 3.0
*/
class CAknsTimingModelDef: public CBase
    {
    public: // Constructors and destructor
        IMPORT_C static CAknsTimingModelDef* NewL();
        virtual ~CAknsTimingModelDef();

    public: // New functions
        IMPORT_C void SetTimingModelUid( const TUid aUid );
        IMPORT_C TUid TimingModelUid() const;

        IMPORT_C void AddParameterL( CAknsEffectParamDef* aParam );
        IMPORT_C CAknsEffectParamDef* Parameter( TInt32 aIndex ) const;
        IMPORT_C TInt ParameterCount() const;

    protected:
        CAknsTimingModelDef();

    private:
        TUid iTimingModelUid;
        RPointerArray<CAknsEffectParamDef> iParamArray;
    };

/**
* @since 3.0
*/
class CAknsAnimationValueDef: public CBase
    {
    public: // Constructors and destructor
        IMPORT_C static CAknsAnimationValueDef* NewL();
        virtual ~CAknsAnimationValueDef();

    public: // New functions
        IMPORT_C void SetAnimationValueUid( const TUid aUid );
        IMPORT_C TUid AnimationValueUid() const;

        IMPORT_C void SetTimingModelId( TUint32 aId );
        IMPORT_C TUint32 TimingModelId() const;

        IMPORT_C void AddParameterL( CAknsEffectParamDef* aParam );
        IMPORT_C CAknsEffectParamDef* Parameter( TInt32 aIndex ) const;
        IMPORT_C TInt ParameterCount() const;

    protected:
        CAknsAnimationValueDef();

    private:
        TUid iAnimationValueUid;
        TUint32 iTimingModelId;
        RPointerArray<CAknsEffectParamDef> iParamArray;
    };

/**
* Note inheritance relationship with CAknsEffectItemDef.
*
* @since 3.0
*/
class CAknsAnimationCommandItemDef: public CAknsEffectItemDef
    {
    public: // Constructors and destructor
        IMPORT_C static CAknsAnimationCommandItemDef* NewL();
        virtual ~CAknsAnimationCommandItemDef();

    public: // New functions
        IMPORT_C void AddNamedReferenceL( CAknsNamedReferenceDef* aRef );
        IMPORT_C CAknsNamedReferenceDef* NamedReference( TInt32 aIndex ) const;
        IMPORT_C TInt NamedReferenceCount() const;

    protected:
        CAknsAnimationCommandItemDef();

    private:
        RPointerArray<CAknsNamedReferenceDef> iNamedReferenceArray;
    };

/**
* @since 3.0
*/
class CAknsAnimationItemDef: public CAknsItemDef
    {
    public: // Constructors and destructor
        IMPORT_C static CAknsAnimationItemDef* NewL( const TAknsItemID& aID );
        virtual ~CAknsAnimationItemDef();

    public: // New functions

        IMPORT_C void SetLayerIndexesAndModes(
            TUint32 aInputLayerIndex, TUint32 aInputLayerMode,
            TUint32 aOutputLayerIndex, TUint32 aOutputLayerMode );

        IMPORT_C void SetMinInterval( TUint32 aMinInterval );
        IMPORT_C TUint32 MinInterval() const;

        IMPORT_C void SetMorphing( TBool aMorphing );
        IMPORT_C TBool Morphing() const;

        IMPORT_C void AddPreprocessCommandL( CAknsEffectItemDef* aItemDef );
        IMPORT_C CAknsEffectItemDef* PreprocessCommand( TInt32 aIndex ) const;
        IMPORT_C TInt PreprocessCommandCount() const;

        IMPORT_C void AddAnimationCommandItemL( CAknsAnimationCommandItemDef* aCommand );
        IMPORT_C CAknsAnimationCommandItemDef* AnimationCommandItem( TInt32 aIndex ) const;
        IMPORT_C TInt AnimationCommandItemCount() const;

        IMPORT_C void AddAnimationValueL( CAknsAnimationValueDef* aValue );
        IMPORT_C CAknsAnimationValueDef* AnimationValue( TInt32 aIndex ) const;
        IMPORT_C TInt AnimationValueCount() const;

        IMPORT_C void AddTimingModelL( CAknsTimingModelDef* aModel );
        IMPORT_C CAknsTimingModelDef* TimingModel( TInt32 aIndex ) const;
        IMPORT_C TInt TimingModelCount() const;

        IMPORT_C void AddSizeBoundParamL( CAknsSizeBoundParamDef* aParam );
        IMPORT_C CAknsSizeBoundParamDef* SizeBoundParam( TInt32 aIndex ) const;
        IMPORT_C TInt SizeBoundParamCount() const;

    protected:
        CAknsAnimationItemDef( const TAknsItemType aType, const TAknsItemID& aID );

    public:
        TUint32 iInputLayerIndex;
        TUint32 iInputLayerMode;
        TUint32 iOutputLayerIndex;
        TUint32 iOutputLayerMode;

    private:
        TUint32 iMinInterval;
        TBool iMorphing;

        RPointerArray<CAknsEffectItemDef> iPreprocessCommandArray;
        RPointerArray<CAknsAnimationCommandItemDef> iCommandArray;
        RPointerArray<CAknsAnimationValueDef> iAnimationValueArray;
        RPointerArray<CAknsTimingModelDef> iTimingModelArray;
        RPointerArray<CAknsSizeBoundParamDef> iSizeBoundParamArray;
    };

#endif // AKNSITEMDEF_H

// End of File

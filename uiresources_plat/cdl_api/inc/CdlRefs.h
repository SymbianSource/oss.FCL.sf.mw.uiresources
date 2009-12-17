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
#ifndef CDLREFS_H
#define CDLREFS_H

#include <e32base.h>
#include <CdlEngine.h>

class CCdlUids;
class CCdlRefs;

/**
* CCdlRefs is a collection of references to CDL interfaces.
* This class contains functions for manipulating such collections.
* It also is the basis for the customisation control system, so it
* has functions for maniplating customisation state.
*/
NONSHARABLE_CLASS(CCdlRefs) : public CCdlRefCollection
	{
private:
	typedef CArrayFixFlat<TCdlRef> CRefs;

public:
	/**
	* This is an iterator type for CCdlRefs.
	* There are three sub-types of iterator.
	* One type iterates all references in the collection. Another iterates
	* only those with a particular UID. A third iterates only those with a
	* particular file name.
	*/
	NONSHARABLE_CLASS(TIterator)
		{
	public:
		/**
		* Copy constructor
		*/
		IMPORT_C TIterator(const TIterator& aOther);

		/**
		* Assignment operator
		*/
		inline TIterator& operator=(const TIterator& aOther);

		/**
		* Equality operator
		*/
		inline TBool operator==(const TIterator& aOther) const;

		/**
		* Inequality operator
		*/
		inline TBool operator!=(const TIterator& aOther) const;

		/**
		* Dereference operator
		*/
		inline const TCdlRef& operator*() const;

		/**
		* Dereference and access operator
		*/
		inline const TCdlRef* operator->() const;

		/**
		* pre-increment operator
		* i.e. ++myIterator
		* this operator is preferred to the post-increment operator.
		*/
		IMPORT_C TIterator& operator++();

		/**
		* post-increment operator
		* i.e. myIterator++
		* the pre-increment operator is preferred to this operator.
		*/
		inline TIterator operator++(TInt);

	protected:
		TIterator(const CRefs& aRefs, TInt aIndex);
		virtual TBool Match(TInt aIndex) const;

	protected:
		friend class CCdlRefs;
		const CRefs& iRefs;
		TInt iIndex;
		};

public:
	/**
    * Two-phased constructor.
	*/
	IMPORT_C static CCdlRefs* NewL();

	/**
    * Two-phased constructor.
	*/
	IMPORT_C static CCdlRefs* NewLC();

    /**
    * Destructor.
    */
	IMPORT_C ~CCdlRefs();

	// Iterators
	/**
	* Create an iterator that will iterate through all references in the collection
	*/
	IMPORT_C TIterator Begin() const;

	/**
	* Create an iterator that will iterate through only those references with
	* a particular UID.
	* @param aUid the UID to match.
	*/
	IMPORT_C TIterator Begin(TUid aUid) const;

	/**
	* Create an iterator that will iterate through only those references with
	* a particular file name.
	* @param aName the name to match.
	*/
	IMPORT_C TIterator Begin(const TDesC& aName) const;

	/**
	* Create an iterator representing the first postition after the end of
	* the collection. This iterator must not be dereferenced, but other
	* iterators can be compared with this one. They will be equal when the
	* other iterator gone past the last valid reference.
	*/
	IMPORT_C TIterator End() const;

	// Modifiers
	/**
	* Append a single reference to this collection
	* @param aRef the reference to append.
	*/
	IMPORT_C void AppendL(const TCdlRef& aRef);

	/**
	* Append a collection of references to this collection
	* @param aRefs the collection of references to append.
	*/
	IMPORT_C void AppendL(const CCdlRefCollection& aRefs);

	/**
	* Append a collection of references to this collection
	* @param aHomeName the DLL name that this collection of refs was found in.
	* @param aRefs the collection of references to append.
	*/
	IMPORT_C void AppendL(const TDesC& aHomeName, const TCdlArray<TCdlRef>& aRefs);

	/**
	* Insert a reference at the specified iterator position.
	* @param aAt an iterator giving the position at which to insert the reference
	* InsertL(End(), aRef) is equivalent to Append(aRef)
	* @param aRef the reference to insert.
	*/
	IMPORT_C void InsertL(const TIterator& aAt, const TCdlRef& aRef);

	/**
	* Delete the reference indicated by the iterator.
	* @param aAt the position to delete, Delete(Begin()) deletes the first
	* element in the collection.
	*/
	IMPORT_C void Delete(TIterator& aAt);

	/**
	* Delete the references from aBegin up to, but not including aEnd.
	* @param aBegin the first position to delete
	* @param aEnd the stop position for the iterator
	*/
	IMPORT_C void Delete(const TIterator& aBegin, const TIterator& aEnd);

	/**
	* Delete a name and all references that use it from the collection.
	* @param aName the name to delete.
	*/
	IMPORT_C void Delete(const TDesC& aName);

	// Accessors & subsets

	/*
	* Return a collection of all the file names used by the references in
	* this collection.
	* @return a reference to a collection of names
	*/
	IMPORT_C const CCdlNames& Names() const;

	/*
	* Create an array of UIDs containing all of the UIDs used in this collection.
	* @return a new array of UIDs
	*/
	IMPORT_C CCdlUids* UidsLC() const;

	/*
	* Create a subset collection that only contains references for a particular UID.
	* @return a new collection
	*/
	IMPORT_C CCdlRefs* SubsetByUidLC(TUid aUid) const;

	/*
	* Create a subset collection that only contains references for a 
	* set of UIDs.
	* @return a new collection
	*/
	IMPORT_C CCdlRefs* SubsetByUidsLC(const CCdlUids& aUids) const;

	/*
	* Create a subset collection that only contains references with a
	* particular file name.
	* @return a new collection
	*/
	IMPORT_C CCdlRefs* SubsetByNameLC(const TDesC& aName) const;

	// Customisation operations
	/**
	* This function replaces references in this collection for any CDL interface UIDs that appear
	* in the new collection with those from the new collection. All other
	* references are appended.
	* The effect of this function is useful for customisation state management.
	* The current customisation state is defined by a CCdlRefs object, where for
	* each CDL interface UID that appears in the collection, the references using that
	* UID identify the layers of customisation instances that customise the interface.
	* The earlier references in the collection for the sub-layers for the later one.
	* @param aRefs the new customisation state which will replace and be merged
	* with the current state.
	*/
	IMPORT_C void MergeAndReplaceL(const CCdlRefs& aRefs);

	/**
	* This function adds references to the collection for use as new layers of customisation.
	* The effect of this function is useful for customisation state management.
	* The current customisation state is defined by a CCdlRefs object, where for
	* each CDL interface UID that appears in the collection, the references using that
	* UID identify the layers of customisation instances that customise the interface.
	* The earlier references in the collection for the sub-layers for the later one.
	* @param aRefs the new layers of customisation state that will modify the
	* current customisation.
	*/
	IMPORT_C void AddLayerL(const CCdlRefs& aRefs);

	// import/export

	/**
	* Create a descriptor containing the contents of this collection.
	* This is useful for externalising customisation state.
	* @return a new descriptor describing this collection.
	*/
	IMPORT_C HBufC8* ExportL() const;

	/**
	* Create a descriptor containing the contents of this collection.
	* This is useful for externalising customisation state.
	* @return a new descriptor describing this collection.
	*/
	IMPORT_C HBufC8* ExportLC() const;

	/**
	* Populate this collection from a descriptor containing a collection
	* that was externalised by one of the ExportL functions.
	* @param a descriptor containing an externalised representation of a
	* CCdlRefs object.
	*/
	IMPORT_C void ImportL(const TDesC8& aData);

	// CCdlRefCollection interface
	/**
	* @return the number of references in this collection
	*/
	IMPORT_C TInt CountRefs() const;

	/**
	* Access a reference at a particular index in this collection.
	* @param aIndex the postion to access.
	* @return the reference at that position.
	*/
	IMPORT_C TCdlRef Ref(TInt aIndex) const;

private:
	CCdlRefs();

private:
	NONSHARABLE_CLASS(TInterfaceIterator) : public TIterator
		{
	public:
		TInterfaceIterator(const CRefs& aRefs, TInt aIndex);
	private:
		virtual TBool Match(TInt aIndex) const;
		};

	NONSHARABLE_CLASS(TNameIterator) : public TIterator
		{
	public:
		TNameIterator(const CRefs& aRefs, TInt aIndex);
	private:
		virtual TBool Match(TInt aIndex) const;
		};

private:
	CRefs iRefs;
	CCdlNames iNames;
	};


#include <CdlRefs.inl>

#endif

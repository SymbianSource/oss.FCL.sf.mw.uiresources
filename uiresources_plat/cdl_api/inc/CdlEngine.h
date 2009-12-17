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
#if !defined(CDLENGINE_H)
#define CDLENGINE_H

#include <e32base.h>
#include <CdlEngDef.h>
#include <badesca.h>

class CCdlEngine;
class CCdlEngineBase;
class CCdlRefs;

typedef void (TCdlEngineFunc)();


/**
* This class is the base for all classes which need to maintain a reference to the
* CDL engine or an object it owns.
* 
* When created, this object adds a reference to the CDL engine.
* When deleted, this object removes any remaining reference to the CDL engine.
* References may added or removed during the object's lifetime, but there must be 0 or 1
* reference when this object is deleted.
*
* This class is not instantiable or derivable outside of the CDL engine.
*/
NONSHARABLE_CLASS(CCdlEngineRef) : public CBase
	{
public:
	CCdlEngineRef(CCdlEngineBase* aEngine);
	IMPORT_C ~CCdlEngineRef();

	void AddRef();
	void ReleaseRef();

	CCdlEngineBase* Engine() const;

private:
	TInt iRefCount;
	CCdlEngineBase* iEngine;			// ownership is shared among all instances
	};


/**
* This is the abstract base class for all collections of TCdlRef objects.
*/
class CCdlRefCollection : public CBase
	{
public:
	virtual TInt CountRefs() const = 0;
	virtual TCdlRef Ref(TInt aIndex) const = 0;
	};


/**
* The abstract base class for all customisation instance objects.
* Only the CDL engine can create objects derived from this class.
*/
NONSHARABLE_CLASS(CCdlInstance) : public CCdlEngineRef
	{
public:	// General public API

	/**
    * Gets the CDL instance reference for this instance
    * @return the CDL reference for this instance
    */
	IMPORT_C const TCdlRef& Ref() const;

	/**
    * Gets the instance that forms the sub-layer for this instance. Any API not implemented
	* by this instance will be implemented in a sub-layer.
    * @return the sub-layer for this instance, may be NULL.
    */
	IMPORT_C const CCdlInstance* SubLayer() const;

	/**
    * The CDL instance reference for the instance that actually implemented the last 
	* accessed API. If this instance implemented the API, then this instance's reference
	* will be returned. Otherwise it will be the reference of one of this instance's
	* sub-layers.
    * @return the CDL reference of the instance that implemented the last accessed API.
    */
	IMPORT_C const TCdlRef& LastAccessedRef() const;

	/**
    * Adjusts a filename to be relative to the file containing the CDL instance that
	* implemented the last accessed API. The filename will be made relative to this instances
	* file, or the file of one of this instances sub-layers.
    * @param aFileName the filename to be adjusted.
    */
	IMPORT_C void FileNameRelativeToLastAccessedInstance(TFileName& aFileName) const;

	/**
    * Test whether this instance is the same as another.
    * @param aOther the instance you want to compare with this one.
    * @return true if they are the same instance.
    */
	IMPORT_C TBool operator==(const CCdlInstance& aOther) const;

	/**
    * Does this instance implement all of it's API? Instances that don't implement their
	* entire API need a sub-layer that does implement the entire API.
    * @return true if the entire API is implemented
    */
	virtual TBool IsComplete() const = 0;

public:	// API used by CDL compiler generated header files
	IMPORT_C static CCdlInstance* NewL(	const TCdlRef& aRef, 
										const SCdlInterface* aInterfaceParams, 
										const CCdlInstance* aSubLayer = NULL, 
										CCdlEngine* aEngine = NULL, 
										TInt* aLastApi = NULL);
	IMPORT_C static CCdlInstance* NewLC(const TCdlRef& aRef, 
										const SCdlInterface* aInterfaceParams, 
										const CCdlInstance* aSubLayer = NULL, 
										CCdlEngine* aEngine = NULL, 
										TInt* aLastApi = NULL);
	IMPORT_C TAny* GetData(TInt aCdlApiId) const;
	IMPORT_C TCdlEngineFunc* GetFunction(TInt aCdlApiId) const;

public: // CDL System API
	const CCdlInstance* Implementor(TInt aCdlApiId) const;
	virtual TAny* Implementation(TInt aCdlApiId) const = 0;
	virtual const SCdlInterface& Interface() const = 0;
	virtual TAny* Extension(TInt aId) const;

protected:
	CCdlInstance(CCdlEngine* aEngine, TInt* aLastApi);

protected:
	friend class CdlEngine;	// for optimised GetFunction()
	TCdlRef iRef;
	const CCdlInstance* iSubLayer;			// not owned
	TInt& iLastApi;
	};


/**
* A collection of UIDs.
* Used within the CDL engine to represent collections of CDL interface UIDs.
*/
class CCdlUids : public CArrayFixFlat<TUid>
	{
public:
    /**
    * Two-phased constructor.
    */
	IMPORT_C static CCdlUids* NewLC();

    /**
    * C++ default constructor.
    */
	IMPORT_C CCdlUids();

    /**
    * Adds a UID to the collection, if it is not already present
    * @param aUid the UID to add
    */
	IMPORT_C void AddL(TUid aUid);

    /**
    * Removes a UID from the collection
    * @param aUid the UID to remove
    */
	IMPORT_C void Remove(TUid aUid);

    /**
    * Adds a collection of UIDs to this collection. UIDs are only added if they are not
	* already present.
    * @param aArray the collection of UIDs to add
    */
	IMPORT_C void AddL(const CCdlUids& aArray);

    /**
    * Removes a collection of UIDs from this collection
    * @param aParam the collection of UIDs to remove
    */
	IMPORT_C void Remove(const CCdlUids& aArray);

    /**
    * Finds the array index of a UID in this collection
    * @param aUid the UID to search for
    * @return The index of the UID if found. KErrNotFound otherwise.
    */
	IMPORT_C TInt FindIndex(TUid aUid) const;

    /**
    * Creates a new collection containing the UIDs which are common to this and the passed
	* in collection.
    * @param aArray the other collection
    * @return a new collection of UID containing the intersection of the two inputs.
    */
	IMPORT_C CCdlUids* IntersectionLC(const CCdlUids& aArray) const;

    /**
    * Populates a UID collection from a descriptor containing an exported UID collection.
    * @param aDes a descriptor containing a UID collection created by the Export() function.
    */
	IMPORT_C void ImportL(const TDesC8& aDes);

    /**
    * Creates a descriptor containing the exported UID collection. Used for externalising
	* UID collections and transmitting them across processes.
    * @return a descriptor containing the exported contents of this collection.
    */
	IMPORT_C TPtrC8 Export() const;
	};


/**
* A collection of names stored as HBufC*.
* This collection contains one instance of each name. CdlEngine::CompareNames() is used
* to check whether two names are the same.
* This collection type is used as a string pool for the CCdlRefs class, where there are
* many TCdlRefs that share the same name.
* This class is used instead of CDesCArray because the descriptors returned by CDesCArray
* are not referenceable.
* The HBufCs in the array are owned by this class.
*/
class CCdlNames : public CArrayPtrFlat<HBufC>
	{
public:

    /**
    * Two-phased constructor.
    */
	IMPORT_C static CCdlNames* NewLC();

    /**
    * C++ default constructor.
    */
	IMPORT_C CCdlNames();

    /**
    * Destructor.
    */
	IMPORT_C ~CCdlNames();

    /**
    * Finds the array index of a name in this collection.
    * @param aName the name to look for.
    * @return the array index of the name, if found. KErrNotFound otherwise.
    */
	IMPORT_C TInt FindIndex(const TDesC& aName) const;

    /**
    * Adds a name to the collection. If the name is already present in the collection is
	* not added again. In any case, the names HBufC* in the collection is returned.
    * @param aName the name to add to the collection.
    * @return The HBufC* in the collection that contains the name.
    */
	IMPORT_C HBufC* AddL(const TDesC& aName);

    /**
    * Populates the collection from a descriptor containing an exported collection of names.
    * @param aDes a descriptor containing a collection of names, which has been exported
	* by ExportL or ExportLC.
    */
	IMPORT_C void ImportL(const TDesC8& aDes);

    /**
    * Creates a descriptor containing the exported collection of names
    * @return a new HBufC
    */
	IMPORT_C HBufC8* ExportL() const;

    /**
    * Creates a descriptor containing the exported collection of names
    * @return a new HBufC on the cleanup stack
    */
	IMPORT_C HBufC8* ExportLC() const;

private:
	static void CleanupImport(TAny* aThis);
	void DoCleanupImport();
	};


/**
* Mixin class for observing changes in the CDL customisation world.
* This class has concrete implementations of all its virtual functions. These are NULL
* implementations, except for the destructor which deregisters the observer.
*/
class MCdlChangeObserver
	{
public:

    /**
    * a virtual destructor that de-registers this observer with the CDL engine
    */
	IMPORT_C virtual ~MCdlChangeObserver();

    /**
    * This event handler function is called when the current customisation of one or more
	* interfaces has changed.
    * @param aUids the collection of interface UIDs which have changed
    */
	IMPORT_C virtual void HandleCustomisationChangeL(const CCdlUids& aUids);

    /**
    * This event handler function is called when the set of available customisations changes
    */
	IMPORT_C virtual void HandleAvailableRefsChangeL();
	};


/**
* CdlEngine is a static fascade interface to the singleton CDL engine object.
* There is at most one CDL engine per thread. This static interface ensures that this
* fact can not be changed.
*/
class CdlEngine
	{
public:
	// General public API
	/**
	* Tests for the existence of the CDL engine.
	* Useful for cases where the client code can work without the CDL engine,
	* and does not want to create and hold a CCdlEngineRef to ensure the existence
	* of the CDL engine.
	* @return ETrue if the CDL engine exists, EFalse otherwise.
	*/
	IMPORT_C static TBool IsCdlEngineCreated();
	
    /**
    * Creates a reference to the CDL engine singleton, and creates the CDL engine if it
	* does not already exist. If your client code is unsure if the CDL exists in this thread,
	* it should use this function to ensure that it does.
    * @return a reference to the CDL engine. The CDL engine is guaranteed to exist as long
	* as this reference does.
    */
	IMPORT_C static CCdlEngineRef* CreateCdlEngineL();

    /**
    * Starts the global customisation of CDL interfaces that are configured for global
	* customisation.
	* CDL interfaces can be customised either locally or globally. Local customisation
	* means that changes to the customisation only affect the local thread. Global customisation
	* means that customisation settings are stored in the CDL server and affect all threads.
	* that subscribe to customisation of that interface.
    */
	IMPORT_C static void StartGlobalCustomisationL();

	// API used by CDL compiler generated header files
	IMPORT_C static TAny* GetData(TUid aCdlUid, TInt aApiId);
	IMPORT_C static TCdlEngineFunc* GetFunction(TUid aCdlUid, TInt aApiId);
	IMPORT_C static const CCdlInstance* Implementor(TUid aCdlUid, TInt aApiId);
	
	/**
	* Is customisation for this CDL interface loaded?
	*
	* This function is normally used through a CDL compiler generated header
	* specific to a particular CDL interface.
    * @param aInterfaceParams the interface in question
	* @return ETrue if the interface is available and a customisation is loaded.
	*/
	IMPORT_C static TBool IsCustomisationStarted(const SCdlInterface* aInterfaceParams);

	/**
	* Set a requirement for customisations of this interface that they have
	* to implement at least the version of the interface that the client specifies.
	* If customisations are already loaded that do not satisfy this interface,
	* this function will leave with KErrNotSupported.
	*
	* This function is normally used through a CDL compiler generated header
	* specific to a particular CDL interface.
    * @param aInterfaceParams the interface in question
	*/
	IMPORT_C static void RequireCustomisationL(const SCdlInterface* aInterfaceParams);

	/**
	* Load a customisation from this reference.
	* If no customisation has already been loaded for this interface, this
	* customisation instance must meet any requirements already specified by
	* the clients of the interface.
	*
	* This function is normally used through a CDL compiler generated header
	* specific to a particular CDL interface.
	* @param aRef a CDL instance reference defining the customisation.
	*/
	IMPORT_C static void LoadCustomisationL(const TCdlRef& aRef);

	/**
	* Get a CDL instance that represents the current customisation.
	* This instance will automatically be updated to reflect changes in
	* customisation.
	*
	* This function is normally used through a CDL compiler generated header
	* specific to a particular CDL interface.
	* @param aCdlUid the UID of the CDL interface that you want customisation for
	* @return a reference to a customisation instance
	*/
	IMPORT_C static const CCdlInstance& CustomisationInstance(TUid aCdlUid);

	/**
	* Sets a customisation change observer object for a particular interface.
	* Using this function, client code can be informed when the current
	* customisation for a particular interface changes.
	* A single observer can observe changes in many interfaces.
	*
	* This function is normally used through a CDL compiler generated header
	* specific to a particular CDL interface.
	* @param aObserver a pointer to an object implementing the MCdlChangeObserver interface.
	* @param aCdlUid the UID of the CDL interface that you want to observe.
	*/
	IMPORT_C static void SetCustomisationChangeObserverL(MCdlChangeObserver* aObserver, TUid aCdlUid);

	/**
	* Get a reference for the last customisation instance which was accessed
	* to implement a particular interface.
	*
	* This function is normally used through a CDL compiler generated header
	* specific to a particular CDL interface.
	* @param aCdlUid the UID of the CDL interface
	* @return a reference for the instance that was last accessed to implement
	* the asked for interface.
	*/
	IMPORT_C static const TCdlRef& LastAccessedRef(TUid aCdlUid);

	/**
	* Modify a filename to be relative to the file containing the customisation
	* instance that was last accessed to implement a particular CDL interface.
	* For instance, if an interface was accessed to get a bitmap file name, a
	* full path for that bitmap file can be generated by using this function
	* immediately afterwards.
	*
	* This function is normally used through a CDL compiler generated header
	* specific to a particular CDL interface.
	* @param aCdlUid the UID of the CDL interface
	* @param aFileName the filename to be modified
	*/
	IMPORT_C static void FileNameRelativeToLastAccessedInstance(TUid aCdlUid, TFileName& aFileName);

	/**
	* Get the latest API id accessed by a CDL client. If used from inside a customisation
	* instance, this will be the API id of the current implementation.
	*
	* @return the latest API id that was accessed by a CDL client.
	*/
	IMPORT_C static TInt LastApiId();

	// API for controlling customisation settings

    /**
    * Create a collection of CDL references that implement a particular interface.
    * @param aCdlUid the UID of the interface in question
    * @return a new collection of the CDL instance references that implement that interface.
    */
	IMPORT_C static CCdlRefs* FindInstancesLC(TUid aCdlUid);

    /**
    * Create a collection of references for the CDL instancesthat are implemented 
	* in a named file.
    * @param aFileName the name of the file that contains CDL instances
    * @return a new collection of CDL instance references.
    */
	IMPORT_C static CCdlRefCollection* FileContentsLC(const TDesC& aFileName);

    /**
    * Create a collection of file names of files that contain CDL customisation instances.
    * @return a new collection of file names.
    */
	IMPORT_C static CCdlNames* FindCustomisationFilesLC();

    /**
    * Create a collection of references to all known CDL customisation instances.
    * @return a collection of references to all known instances.
    */
	IMPORT_C static CCdlRefs* AllAvailableRefsLC();

    /**
    * Set an observer for changes in the set of available customisations.
    * @param aObserver a implementor of the MCdlChangeObserver interface that is interested
	* in knowing about changes to the set of all available references.
    */
	IMPORT_C static void SetAvailableRefsChangeObserverL(MCdlChangeObserver* aObserver);

    /**
    * Sets the current local customisation as described by a collection of CDL instance references.
	* For each reference, the instance referenced will be used to customise it's interface.
	* If more than one instance in the collection customise the same interface, the earlier
	* reference in the collection will be a sub-layer for the later one.
	* This only affects customisation in this thread.
    * @param aState the collection of CDL instance references that will be used for customisation.
    */
	IMPORT_C static void SetLocalStateL(const CCdlRefs& aState);

    /**
    * Sets the global customisation as described by a collection of CDL instance references.
	* For each reference, the instance referenced will be used to customise it's interface.
	* If more than one instance in the collection customise the same interface, the earlier
	* reference in the collection will be a sub-layer for the later one.
	* This sets the global customisation. It will only affect the local customisation state
	* if global customisation of the relevant interfaces is enabled in this thread.
    * @param aState the collection of CDL instance references that will be used for customisation.
    */
	IMPORT_C static void SetGlobalStateL(const CCdlRefs& aState);

    /**
    * Creates a collection of CDL instance references that describe the local customisation
	* of a set of interfaces.
    * @param aCdlUids the set of interface UIDs of interest.
    * @return a collection of references that describe the customisation state.
    */
	IMPORT_C static CCdlRefs* LocalStateLC(const CCdlUids& aCdlUids);

    /**
    * Creates a collection of CDL instance references that describe the global customisation
	* of a set of interfaces.
    * @param aCdlUids the set of interface UIDs of interest.
    * @return a collection of references that describe the customisation state.
    */
	IMPORT_C static CCdlRefs* GlobalStateLC(const CCdlUids& aCdlUids);

    /**
    * Enable or disable global customisation for a collection of interfaces.
    * @param aCdlUids the interface UIDs for which global customisation is to be enabled or disabled
    * @param aEnabled are they to be enabled or disabled?
    */
	IMPORT_C static void EnableGlobalCustomisationL(const CCdlUids& aCdlUids, TBool aEnabled);

    /**
    * Compares two names.
    * @param aLeft a name to compare.
    * @param aRight a name to compare.
    * @return as for TDesC::CompareF: 0 if the names are the same. Non-zero otherwise.
    */
	IMPORT_C static TInt CompareNames(const TDesC& aLeft, const TDesC& aRight);
	};


#endif

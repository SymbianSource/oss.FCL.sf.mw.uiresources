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
#ifndef CDLPACKAGEEXPLORER_H
#define CDLPACKAGEEXPLORER_H

#include <CdlEngine.h>

class CCdlRefs;

/**
* Enumeration used to indicate the result of comparing two customisation instances
*/
enum TCdlInstanceComparison
	{
	ECdlInstancesNotComparable,
	EFirstCdlInstanceBetter,
	ESecondCdlInstanceBetter
	};


/**
* Utilities for the CDL explorer system
*/
class CdlExplorerUtils
	{
public:
	/**
	* Create a CCdlRefs containing a single reference to the instance passed in.
	* @param aSingleInstance an instance whose reference will appear in the collection.
	* @return a CCdlRefs containing a single reference to the instance passed in.
	*/
	IMPORT_C static CCdlRefs* CreateRefsLC(const CCdlInstance& aSingleInstance);
	/**
	* Create a CCdlRefs containing a collection of references which have come from a
	* customisation instance. If any of the references do not give a DLL name, they take
	* their DLL name from the instance provided.
	* @param aHomeInstance a customisation instance which has provided the array of references
	* @param aRefs a collection of references.
	* @return a CCdlRefs containing the references supplied.
	*/
	IMPORT_C static CCdlRefs* CreateRefsLC(const CCdlInstance& aHomeInstance, const TCdlArray<TCdlRef>& aRefs);
	};


/**
* Base class for CDL explorer classes. Has functionality for finding instances.
*/
class CCdlInstanceExplorerBase : public CBase
	{
public:
	/**
	* destructor
	*/
	IMPORT_C ~CCdlInstanceExplorerBase();

protected:
	/**
	* Finds customisation instances that implement a particular interface. The returned set is
	* filtered so that invalid and less good instances are removed.
	* @param aCdlUid the CDL interfaces UID to look for.
	* @return An array of instances that implement the specified interface.
	*/
	IMPORT_C CArrayPtr<CCdlInstance>* FindLC(TUid aCdlUid);

private:
	void TryAddL(const TCdlRef& aRef, const CCdlInstance* aSubLayer, CArrayPtr<CCdlInstance>* aInstances);

private:
	virtual CCdlInstance* CreateInstanceLC(const TCdlRef& aRef, const CCdlInstance* aSubLayer) = 0;
	virtual TCdlInstanceComparison CallCompare(const CCdlInstance& aFirst, const CCdlInstance& aSecond) const = 0;
	virtual TBool CallIsValid(const CCdlInstance& aInstance) const = 0;

private:
	CCdlInstance* iSubLayer;		// owned, used as a sub-layer for all returned instances
	};


/**
* Template class for creating explorers for specific CDL interfaces.
* The template parameter must be the CInstance class from a particular CDL interfaces namespace.
* This class uses inline virtual functions, which could result in a lot of code duplication
* if instantiated in a public header. Therefore, this class should only ever be derived from and
* instantiated inside a .cpp file where it is needed.
*/
template<class T>
class CCdlInstanceExplorer : public CCdlInstanceExplorerBase
	{
public:
	/**
	* Finds customisation instances of the type that this class is instantiated with.
	* The returned set is filtered so that invalid and less good instances are removed.
	* @return An array of instances of the type that this class is instantiated with.
	*/
	inline CArrayPtr<T>* FindLC();

private:
	inline CCdlInstance* CreateInstanceLC(const TCdlRef& aRef, const CCdlInstance* aSubLayer);
	inline TCdlInstanceComparison CallCompare(const CCdlInstance& aFirst, const CCdlInstance& aSecond) const;
	inline TBool CallIsValid(const CCdlInstance& aPackage) const;

protected:	// These functions can be overridden to specialise explorer behavior
	/**
	* Virtual function for comparing two instances.
	* Instances are comparable if they are alternative versions of the same implementation.
	* Eg for different languages.
	* If the instances are not related, they are not comparable.
	* Compare should favor aFirst in case of a tie.
	* @param aFirst The first instance to compare.
	* @param aFirst The second instance to compare.
	* @return The result of the comparison
	*/
	inline virtual TCdlInstanceComparison Compare(const T& aFirst, const T& aSecond) const;
	/**
	* Virtual function for checking the validity of an instance.
	* Instantiations of the instance explorer may want to overide this to check that 
	* instances meet certain requirements.
	* @param aInstance The instance to check validity on
	* @return ETrue if valid
	*/
	inline virtual TBool IsValid(const T& aInstance) const;
	};


/**
*  Explorer class with added functionality for packages.
*/
template<class T>
class CCdlPackageExplorer : public CCdlInstanceExplorer<T>
	{
public:
	/**
	* Extracts the contents of a package into a CCdlRefs collection
	* @param aPackage the package whose contents require extraction
	* @return a CCdlRefs containing the contents of the package.
	*/
	inline CCdlRefs* CreateRefsLC(const T& aPackage);
	};


#include <CdlExplorer.inl>

#endif

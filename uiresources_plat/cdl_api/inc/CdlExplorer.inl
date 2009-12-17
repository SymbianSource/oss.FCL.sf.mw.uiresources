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

#ifndef CDLPACKAGEEXPLORER_INL
#define CDLPACKAGEEXPLORER_INL

template <class T>
inline CArrayPtr<T>* CCdlInstanceExplorer<T>::FindLC()
	{
	return (CArrayPtr<T>*)(CCdlInstanceExplorerBase::FindLC(TUid::Uid(T::ETypeId)));
	}

template <class T>
inline CCdlInstance* CCdlInstanceExplorer<T>::CreateInstanceLC(const TCdlRef& aRef, const CCdlInstance* aSubLayer)
	{
	return T::NewLC(aRef, aSubLayer);
	}

template <class T>
inline TCdlInstanceComparison CCdlInstanceExplorer<T>::CallCompare(const CCdlInstance& aFirst, const CCdlInstance& aSecond) const
	{
	return Compare(static_cast<const T&>(aFirst), static_cast<const T&>(aSecond));
	}

template <class T>
inline TBool CCdlInstanceExplorer<T>::CallIsValid(const CCdlInstance& aPackage) const
	{
	return IsValid(static_cast<const T&>(aPackage));
	}

template <class T>
inline TCdlInstanceComparison CCdlInstanceExplorer<T>::Compare(const T& /*aFirst*/, const T& /*aSecond*/) const
	{
	return ECdlInstancesNotComparable;
	}

template <class T>
inline TBool CCdlInstanceExplorer<T>::IsValid(const T& /*aInstance*/) const
	{
	return ETrue;
	}


template <class T>
inline CCdlRefs* CCdlPackageExplorer<T>::CreateRefsLC(const T& aPackage)
	{
	return CdlExplorerUtils::CreateRefsLC(aPackage, aPackage.contents());
	}



#endif

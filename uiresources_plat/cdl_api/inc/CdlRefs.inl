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

inline const TCdlRef& CCdlRefs::TIterator::operator*() const
	{
	return iRefs[iIndex];
	}

inline const TCdlRef* CCdlRefs::TIterator::operator->() const
	{
	return &iRefs[iIndex];
	}

inline CCdlRefs::TIterator& CCdlRefs::TIterator::operator=(const TIterator& aOther)
	{
	Mem::Copy(this, &aOther, sizeof(*this));
	return *this;
	}

inline TBool CCdlRefs::TIterator::operator==(const TIterator& aOther) const
	{
	return iIndex == aOther.iIndex && &iRefs == &aOther.iRefs;
	}

inline TBool CCdlRefs::TIterator::operator!=(const TIterator& aOther) const
	{
	return iIndex != aOther.iIndex || &iRefs != &aOther.iRefs;
	}

inline CCdlRefs::TIterator CCdlRefs::TIterator::operator++(TInt)
	{
	TIterator old = *this;
	++(*this);
	return old;
	}


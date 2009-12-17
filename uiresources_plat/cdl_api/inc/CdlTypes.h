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
#ifndef CDLTYPES_H
#define CDLTYPES_H

#include <e32base.h>

//
#define CDL_STATIC_CHECK(expr, msg) typedef char assert_##msg[(expr) ? 1 : -1]


// descriptors
#define LIT_AS_DESC_PTR(aLit) (reinterpret_cast<TDesC const*>(&aLit.iTypeLength))


// arrays
template<class T>
class TCdlArray
	{
public:
	inline const T& At(TInt aIndex) const;
	inline const T& operator[](TInt aIndex) const;
	inline TInt Count() const;
public:
	const T* iArray;
	TInt iCount;
	};
#define CDL_ARRAY_START(type, name) type const _##name##_array[] =
#define CDL_ARRAY_END(type, name) ; const TCdlArray<type> name = { _##name##_array, sizeof(_##name##_array)/sizeof(type) }
#define EMPTY_CDL_ARRAY(type, name) const TCdlArray<type> name = { 0, 0 }

// CDL implementation references
class TCdlRef
	{
public:
    inline TBool operator==(const TCdlRef& aOther) const;
    inline TBool operator!=(const TCdlRef& aOther) const;
public:
	TInt iId;
	TUid iUid;
	const TDesC* iName;
	};
#define LOCAL_CDL_REF(namespace_name) { namespace_name::KCdlInstanceId, { namespace_name::KCdlInterfaceUidValue }, NULL }

// TInt64

// it might be better to do something clever with _int64.
struct SCdlInt64
	{
	TUint iLow;
	TUint iHigh;
	};

// TVersion

struct SCdlVersion
	{
	TInt8 iMajor;
	TInt8 iMinor;
	TInt16 iBuild;
	};

// TDateTime

struct SCdlDateTime
	{
	TInt iYear;
	TMonth iMonth;
	TInt iDay;
	TInt iHour;
	TInt iMinute;
	TInt iSecond;
	TInt iMicroSecond;
	};
#define CDL_DATETIME(name, year, month, day, hour, minute, second, microSecond)\
CDL_STATIC_CHECK(EJanuary<=(month) && (month)<EDecember && 0<=(day) && (day)<31 && 0<=(hour) && (hour)<24 && 0<=(minute) && (minute)<60 && 0<=(second) && (second)<60 && 0<=(microSecond) && (microSecond)<1000000, CDL_DATETIME_Illegal_values);\
const SCdlDateTime name = {(year), (month), (day), (hour), (minute), (second), (microSecond)}

// TPoint

struct SCdlPoint
	{
	TInt iX;
	TInt iY;
	};

// TSize

struct SCdlSize
	{
	TInt iWidth;
	TInt iHeight;
	};

// TRect

struct SCdlRect
	{
	SCdlPoint iTl;
	SCdlPoint iBr;
	};

// TRgb

class TRgb;
#define CDL_COLOR(aName, aRed, aGreen, aBlue) const TUint32 aName((aRed)|(aGreen)<<8|(aBlue)<<16)


// inline functions

template <class T>
inline const T& TCdlArray<T>::At(TInt aIndex) const 
	{ ASSERT(0<=aIndex && aIndex<iCount); return iArray[aIndex]; }

template <class T>
inline const T& TCdlArray<T>::operator[](TInt aIndex) const 
	{ return At(aIndex); }

template <class T>
inline TInt TCdlArray<T>::Count() const 
	{ return iCount; }

inline TBool TCdlRef::operator==(const TCdlRef& aOther) const
    { return iId==aOther.iId && iUid==aOther.iUid && iName==aOther.iName; }

inline TBool TCdlRef::operator!=(const TCdlRef& aOther) const
    { return !((*this)==aOther); }

#endif

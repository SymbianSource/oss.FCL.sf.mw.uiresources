/*
* Copyright (c) 2000 Nokia Corporation and/or its subsidiary(-ies).
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



/*
The LCharSet object used by the Colheb locale.
Generated by COLTAB.
*/

#include <kernel/ls_std.h>
#include <collate.h>

const TUint KUidColhebCollationMethod = 0x100059DD;

static const TUint32 TheColhebKey[] = 
	{
	0x6f31309,0x6f31321,0x6f31609,0x6f31621,0x6f31809,0x6f31821,0x6f31909,0x6f31921,
	0x6f31a09,0x6f31a21,0x6f31b09,0x6f31b21,0x6f31c09,0x6f31c21,0x6f31d09,0x6f31d21,
	0x6f31e09,0x6f31e21,0x6f31f09,0x6f31f21,0x6f32009,0x6f32021,0x6f32109,0x6f32121,
	0x6f32209,0x6f32221,0x6f32409,0x6f32421,0x6f32421,0x6f32509,0x6f32521,0x6f32809,
	0x6f32821,0x6f32909,0x6f32921,0x6f33009,0x6f33021,0x6f33409,0x6f33421,0x6f33909,
	0x6f33921,0x6f33b09,0x6f33b21,0x6f34009,0x6f34021,0x6f34309,0x6f34321,0x6f34509,
	0x6f34521,0x6f35909,0x6f35921,0x6f35b09,0x6f35b21,0x6f35c09,0x6f35c21,0x6f36009,
	0x6f36021,0x6f41309,0x6f41321,0x6f43b09,0x6f43b21,0x6f83309,0x6f83321,0x6f85909,
	0x6f85921,0x6f86a09,0x6f86a21,0x6fd1309,0x6fd1321,0x6fd1d09,0x6fd1d21,0x6fd2209,
	0x6fd2221,0x6fd3309,0x6fd3321,0x6fd3609,0x6fd3621,0x6fd3709,0x6fd3721,0x8d62409,
	0x8d62421,0x8d72809,0x8d72821,0x8d82809,0x8d82821,0x6cfe409,0x6d0e509,0x6d1e609,
	0x6d20109,0x6d30109,0x6d4e809,0x6d5e909,0x6d6ea09,0x6d7eb09,0x6d8fc09,0x6d9fd65,
	0x6dafe09,0x6dbff09,0x6dc0165,0x6dd0209,0x6de0365,0x6df0409,0x6e00509,0x6e10609,
	0x6e20765,0x6e30809,0x6e40965,0x6e50a09,0x6e60b09,0x6e70c09,0x6e80d09,0x6e90e09,
	0x6f30109,0x6f3010d,0x6f30119,0x6f30121,0x6f30125,0x6f30131,0x6f30151,0x6f40109,
	0x6f40121,0x6f50109,0x6f60109,0x6f70109,0x6f80109,0x6f8010d,0x6f80119,0x6f80121,
	0x6f80125,0x6f8012d,0x6f80131,0x6f90109,0x6fa0109,0x6fb0109,0x6fb0121,0x6fc0109,
	0x6fc0121,0x6fd0109,0x6fd010d,0x6fd0111,0x6fd0119,0x6fd0121,0x6fd0125,0x6fd0129,
	0x6fd012d,0x6fd0131,0x6fe0109,0x6fe0121,
	};

static const TUint32 TheColhebIndex[] = 
	{
	0x410073,0x42007f,0x43008d,0x610070,0x62007c,0x62007c,0x630089,0xaa0076,
	0xc60078,0xe60077,0x1800084,0x1810086,0x1820088,0x1830087,0x1870093,0x1880092,
	0x2500079,0x251007a,0x252007b,0x2530085,0x2990083,0x5d00055,0x5d10056,0x5d20057,
	0x5d30058,0x5d40059,0x5d5005a,0x5d6005b,0x5d7005c,0x5d8005d,0x5d9005e,0x5da005f,
	0x5db0060,0x5dc0061,0x5dd0062,0x5de0063,0x5df0064,0x5e00065,0x5e10066,0x5e20067,
	0x5e30068,0x5e40069,0x5e5006a,0x5e6006b,0x5e7006c,0x5e8006d,0x5e9006e,0x5ea006f,
	0x21020090,0x212c0081,0x212d0090,0x216d008f,0x217d008b,0x24b60075,0x24b70082,0x24b80091,
	0x24d00072,0x24d1007e,0x24d2008c,0xff210074,0xff220080,0xff23008e,0xff410071,0xff42007d,
	0xff43008a,
	};

static const TUint16 TheColhebStringElement[] = 
	{
	0x2,0x61,0xe1,0x2,0x41,0xc1,0x2,0x61,
	0xe0,0x2,0x41,0xc0,0x2,0x61,0x103,0x2,
	0x41,0x102,0x2,0x61,0x1eaf,0x2,0x41,0x1eae,
	0x2,0x61,0x1eb1,0x2,0x41,0x1eb0,0x2,0x61,
	0x1eb5,0x2,0x41,0x1eb4,0x2,0x61,0x1eb3,0x2,
	0x41,0x1eb2,0x2,0x61,0xe2,0x2,0x41,0xc2,
	0x2,0x61,0x1ea5,0x2,0x41,0x1ea4,0x2,0x61,
	0x1ea7,0x2,0x41,0x1ea6,0x2,0x61,0x1eab,0x2,
	0x41,0x1eaa,0x2,0x61,0x1ea9,0x2,0x41,0x1ea8,
	0x2,0x61,0x1ce,0x2,0x41,0x1cd,0x2,0x61,
	0xe5,0x2,0x41,0xc5,0x2,0x41,0x212b,0x2,
	0x61,0x1fb,0x2,0x41,0x1fa,0x2,0x61,0xe4,
	0x2,0x41,0xc4,0x2,0x61,0x1df,0x2,0x41,
	0x1de,0x2,0x61,0xe3,0x2,0x41,0xc3,0x2,
	0x61,0x1e1,0x2,0x41,0x1e0,0x2,0x61,0x105,
	0x2,0x41,0x104,0x2,0x61,0x101,0x2,0x41,
	0x100,0x2,0x61,0x1ea3,0x2,0x41,0x1ea2,0x2,
	0x61,0x201,0x2,0x41,0x200,0x2,0x61,0x203,
	0x2,0x41,0x202,0x2,0x61,0x1ea1,0x2,0x41,
	0x1ea0,0x2,0x61,0x1eb7,0x2,0x41,0x1eb6,0x2,
	0x61,0x1ead,0x2,0x41,0x1eac,0x2,0x61,0x1e01,
	0x2,0x41,0x1e00,0x2,0xe6,0x1fd,0x2,0xc6,
	0x1fc,0x2,0xe6,0x1e3,0x2,0xc6,0x1e2,0x2,
	0x62,0x1e03,0x2,0x42,0x1e02,0x2,0x62,0x1e05,
	0x2,0x42,0x1e04,0x2,0x62,0x1e07,0x2,0x42,
	0x1e06,0x2,0x63,0x107,0x2,0x43,0x106,0x2,
	0x63,0x109,0x2,0x43,0x108,0x2,0x63,0x10d,
	0x2,0x43,0x10c,0x2,0x63,0x10b,0x2,0x43,
	0x10a,0x2,0x63,0xe7,0x2,0x43,0xc7,0x2,
	0x63,0x1e09,0x2,0x43,0x1e08,0x2,0x61,0x30a,
	0x2,0x41,0x30a,0x2,0x61,0x308,0x2,0x41,
	0x308,0x2,0x6f,0x308,0x2,0x4f,0x308,
	};

static const TUint32 TheColhebStringIndex[] = 
	{
	0x90003,0x30001,0x2d000f,0x6c0024,0x600020,0x51001b,0x7e002a,0xf0005,
	0x780028,0x4b0019,0x660022,0x720026,0x5a001e,0x8a002e,0x900030,0xf60052,
	0xf00050,0xa80038,0x960032,0x84002c,0x330011,0x390013,0x450017,0x3f0015,
	0xa20036,0x150007,0x1b0009,0x27000d,0x21000b,0x9c0034,0x54001c,0xba003e,
	0xc00040,0xc60042,0xe4004c,0xcc0044,0xd20046,0xde004a,0xd80048,0xea004e,
	0xfc0054,0x60002,0x0,0x2a000e,0x690023,0x5d001f,0x4e001a,0x7b0029,
	0xc0004,0x750027,0x480018,0x630021,0x6f0025,0x57001d,0x87002d,0x8d002f,
	0xf30051,0xed004f,0xa50037,0x930031,0x81002b,0x300010,0x360012,0x420016,
	0x3c0014,0x9f0035,0x120006,0x180008,0x24000c,0x1e000a,0x990033,0xb7003d,
	0xbd003f,0xc30041,0xe1004b,0xc90043,0xcf0045,0xdb0049,0xd50047,0xe7004d,
	0xf90053,0xb4003c,0xae003a,0xb1003b,0xab0039,
	};

static const TCollationKeyTable TheColhebTable = 
	{ TheColhebKey, TheColhebIndex, 65, TheColhebStringElement, TheColhebStringIndex, 85 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidColhebCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheColhebTable, // the locale values override the standard values
		0 // the flags are standard
		},
		{
		KUidBasicCollationMethod, // the standard unlocalised method
		NULL, // null means use the standard table
		NULL, // there's no override table
		0 // the flags are standard
		}
	};

static const TCollationDataSet TheCollationDataSet =
	{
	TheCollationMethod,
	2
	};

// The one and only locale character set object.
const LCharSet TheCharSet =
	{
	NULL,
	&TheCollationDataSet
	};
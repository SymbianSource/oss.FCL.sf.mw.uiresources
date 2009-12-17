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


#include <kernel/ls_std.h>
#include <collate.h>

const TUint KUidCol_fa_irCollationMethod = 0x100059DD;

static const TUint32 TheCol_fa_irKey[] = 
	{
	0x3200109,0x3210109,0x3250109,0x3280109,0x32a0109,0x38b0109,0x38d0109,0x6b010b,
	0x27010b,0x17010b,0x18010b,0x16010b,0x1b010b,0x24010b,0x100e409,0x101e409,
	0x102e409,0x103e409,0x104e409,0x105e409,0x106e409,0x107e409,0x108e409,0x109e409,
	0x100e509,0x101e509,0x102e509,0x103e509,0x104e509,0x105e509,0x106e509,0x107e509,
	0x108e509,0x109e509,0x110e609,0x111e609,0x112e609,0x113e609,0x114e609,0x115e609,
	0x116e609,0x117e609,0x118e609,0x119e609,0x31e0109,0x32c0109,0x32d0109,0x3310109,
	0x3320109,0x3330109,0x3390109,0x33e0109,0x33f0109,0x3430109,0x3440109,0x34e0109,
	0x34f0109,0x3590109,0x35a0109,0x35e0109,0x35f0109,0x3620109,0x3630109,0x3650109,
	0x3660109,0x30a0109,0x3680109,0x36f0109,0x3720109,0x37f0109,0x3830109,0x3840109,
	0x3890109,0x38f0109,0x3990109,0x39c0109,0x39d0109,0x3a10109,0x39a0109,0x3240109,
	0x3340109,0x32f0109,0x33c0109,0x3450109,0x3500109,0x3570109,0x3730109,0x3790109,
	0x3850109,0x38a0109,0x38c0109,0x38e0109,0x16cf0109,0x16cf010d,0x16cf0119,0x16cf0121,
	0x16cf0125,0x16cf0131,0x16cf0151,0x16d30109,0x16d30121,0x16d70109,0x16db0109,0x16df0109,
	0x16e30109,0x16e3010d,0x16e30119,0x16e30121,0x16e30125,0x16e3012d,0x16e30131,0x16e70109,
	0x16f70109,0x16f7010d,0x16f70111,0x16f70119,0x16f70121,0x16f70125,0x16f70129,0x16f7012d,
	0x16f70131,0x17030109,0x1703010d,0x17030111,0x17030119,0x17030121,0x17030125,0x17030129,
	0x17030131,0x170b0121,0x17170109,0x17170121,0x171b0109,0x171f0109,0x171f010d,0x171f0115,
	0x171f0119,0x171f0121,0x171f0125,0x171f012d,0x171f0131,0x17230109,0x17230121,0x17270109,
	0x17270121,0x172b0109,0x172b0121,0x172b0129,0x172f0109,0x17370109,0x173f0109,0x17430109,
	0x17470109,0x174b0109,0x174b010d,0x174b0119,0x174b0121,0x174b0125,0x174b012d,0x174b0131,
	0x17530109,0x1753010d,0x17530115,0x17530119,0x17530121,0x17530125,0x17530131,0x17570109,
	0x17670109,0x17670121,0x17670151,0x176b0109,0x176f0109,0x176f0121,0x17730109,0x1773010d,
	0x17730115,0x17730119,0x17730121,0x17730125,0x1773012d,0x17730131,0x17730151,0x17770109,
	0x177b0109,0x177f0115,0x178b0109,0x178c0109,0x178d0109,0x178d010d,0x178d0111,0x178d0119,
	0x178d0121,0x178d0125,0x178d0129,0x178d012d,0x178d0131,0x17910109,0x17950109,0x179d0109,
	0x179d0121,0x17a10109,0x17a1010d,0x17a10119,0x17a10121,0x17a10125,0x17a10131,0x17a10151,
	0x17b10109,0x17b1010d,0x17b10119,0x17b10121,0x17b10125,0x17b10131,0x17b90109,0x17bd0109,
	0x17bd010d,0x17bd0111,0x17bd0115,0x17bd0119,0x17bd0121,0x17bd0125,0x17bd0129,0x17bd012d,
	0x17bd0131,0x17bd0151,0x17c10109,0x17d90109,0x17e10109,0x17e50109,0x17e5010d,0x17e50111,
	0x17e50119,0x17e50121,0x17e50125,0x17e50129,0x17e5012d,0x17e50131,0x17ed0109,0x17ed010d,
	0x17ed0119,0x17ed0121,0x17ed0125,0x17ed012d,0x17ed0131,0x17ed0151,0x17f10109,0x18010109,
	0x18010121,0x18050109,0x1805010d,0x18050115,0x18050119,0x18050121,0x18050125,0x18050131,
	0x18050151,0x18090109,0x18110109,0x18110121,0x18150109,0x18190109,0x181d0109,0x181d010d,
	0x181d0119,0x181d0121,0x181d0125,0x181d012d,0x181d0131,0x18250109,0x18290109,0x1829010d,
	0x18290119,0x18290121,0x18290125,0x1829012d,0x18290131,0x18310109,0x18350109,0x1835010d,
	0x18350119,0x18350121,0x18350125,0x1835012d,0x18350131,0x18350151,0x18390109,0x18390121,
	0x183d0109,0x183d0151,0x18590109,0x18590151,0x185d0109,0x185d010d,0x185d0119,0x185d0121,
	0x185d0125,0x185d0131,0x185d0151,0x185dde11,0x18650109,0x18650121,0x18690109,0x186d0109,
	0x18750109,0x1875010d,0x18750119,0x18750121,0x18750125,0x18750131,0x18890109,0x188d0109,
	0x188d010d,0x188d0119,0x188d0121,0x188d0125,0x188d0131,0x18910109,0x18950109,0x18990109,
	0x18990121,0x18a10109,0x18a10121,0x18a50109,0x18a5010d,0x18a50111,0x18a50119,0x18a50121,
	0x18a50125,0x18a50129,0x18a50131,0x18ad0109,0x18b10109,0x18b1010d,0x18b10119,0x18b10121,
	0x18b10125,0x18b10131,0x18b10151,0x18b50109,0x18b90109,0x18b9010d,0x18b90111,0x18b90119,
	0x18b90121,0x18b90125,0x18b90129,0x18b90131,0x18b90151,0x18bd0109,0x18bd010d,0x18bd0119,
	0x18bd0121,0x18bd0125,0x18bd0131,0x18bd0151,0x18c10109,0x18c90109,0x18c9010d,0x18c90119,
	0x18c90121,0x18c90125,0x18c9012d,0x18c90131,0x18d90109,0x18d90121,0x18dd0109,0x18dd0121,
	0x18e90109,0x18e90121,0x18ed0109,0x18f50109,0x18f50121,0x18f90109,0x18f90121,0x18fd0109,
	0x18fd0121,0x19010109,0x19050109,0x19060109,0x19070109,0x19080109,0x19080151,0x190c0109,
	0x190d0109,0x191a0109,0x191e0109,0x19220109,0x19260109,0x192a0109,0x192e0109,0x19320109,
	0x19360109,0x19360121,0x19370109,0x19370111,0x19370121,0x19380109,0x19380121,0x19390109,
	0x19390121,0x193a0109,0x193a0121,0x193b0109,0x193c0109,0x193d0109,0x193d0121,0x193e0109,
	0x193e0121,0x193f0109,0x193f0111,0x193f0121,0x19400109,0x19400121,0x19410109,0x19420109,
	0x19420111,0x19420121,0x19430109,0x19430121,0x19440109,0x19440111,0x19440121,0x19450109,
	0x19450121,0x19460109,0x19460121,0x19470109,0x19470121,0x19480109,0x19480111,0x19480121,
	0x19490109,0x194a0109,0x194a0111,0x194a0121,0x194b0109,0x194b0111,0x194b0121,0x194c0109,
	0x194c0121,0x194d0109,0x194d0121,0x194e0109,0x194e0111,0x194e0121,0x194f0109,0x194f0121,
	0x19500109,0x19500121,0x19510109,0x19510121,0x19520109,0x19530109,0x19530121,0x19540109,
	0x19540121,0x19550109,0x19550121,0x19560109,0x19560121,0x19570109,0x19570121,0x19580109,
	0x19580121,0x19590109,0x19590121,0x195a0109,0x195a0121,0x195e0109,0x195e0121,0x19620109,
	0x19620121,0x19660109,0x19660121,0x196a0109,0x196a0121,0x196e0109,0x196e0121,0x197e0109,
	0x197e0121,0x19820109,0x19820121,0x198a0109,0x198a0121,0x198e0109,0x198e0121,0x19920109,
	0x19920121,0x199a0109,0x199a0121,0x199e0109,0x199e0121,0x19a20109,0x19a20121,0x19a60109,
	0x19a60121,0x19aa0109,0x19aa0121,0x19ae0109,0x19ae0121,0x19b20109,0x19b20121,0x19be0109,
	0x19be0121,0x19ca0109,0x19ca0121,0x19ce0109,0x19ce0121,0x19d20109,0x19d20121,0x19d60109,
	0x19d60121,0x19e20109,0x19e20121,0x19e60109,0x19e60121,0x19ea0109,0x19ea0121,0x19ee0109,
	0x19ee0121,0x19f20109,0x19f20121,0x19fa0109,0x19fa0121,0x19fe0109,0x19fe0121,0x1a020109,
	0x1a020121,0x1a0a0109,0x1a0a0121,0x1a120109,0x1a120121,0x1a160109,0x1a160121,0x1a1a0109,
	0x1a1a0121,0x1a220109,0x1a220121,0x1a260109,0x1a260121,0x1a2a0109,0x1a2a0121,0x1a320109,
	0x1a320121,0x1a360109,0x1a360121,0x1a3a0109,0x1a3a0121,0x1a420109,0x1a420121,0x1a460109,
	0x1a460121,0x1a4a0109,0x1a4a0121,0x1a4e0109,0x1a4e0121,0x1a560109,0x1a560121,0x1a5e0109,
	0x1a5e0121,0x1a660109,0x1a660121,0x1a6a0109,0x1a6a0121,0x1a6e0109,0x1a6e0121,0x1a720109,
	0x1a720121,0x1a760109,0x1a760121,0x1a7a0109,0x1a7a0121,0x1a7e0109,0x1a7e0121,0x1a820109,
	0x1a820121,0x1a860109,0x1a860121,0x1a8a0109,0x1a8a0121,0x1a8e0109,0x1a8e0121,0x1a920109,
	0x1a920121,0x1a960109,0x1a960121,0x1a9a0109,0x1a9a0121,0x1a9e0109,0x1a9e0121,0x1aa20109,
	0x1aa20121,0x1aa60109,0x1aa60121,0x1aaa0109,0x1aaa0121,0x1aae0109,0x1aae0121,0x1ab20109,
	0x1ab20121,0x1ab60109,0x1aba0109,0x1aba0121,0x1abb0109,0x1abb0121,0x1abc0109,0x1abc0121,
	0x1abd0109,0x1abd0121,0x1abe0109,0x1abe0121,0x1abf0109,0x1abf0121,0x1ac00109,0x1ac00121,
	0x1ac10109,0x1ac10121,0x1ac20109,0x1ac20121,0x1ac30109,0x1ac30121,0x1ac40109,0x1ac40121,
	0x1ac50109,0x1ac50121,0x1ac60109,0x1ac60121,0x1ac70109,0x1ac70121,0x1ac80109,0x1ac80121,
	0x1ac90109,0x1ac90121,0x1aca0109,0x1aca0121,0x1acb0109,0x1acb0121,0x1acc0109,0x1acc0121,
	0x1acd0109,0x1acd0121,0x1ace0109,0x1ace0121,0x1acf0109,0x1acf0121,0x1ad00109,0x1ad00121,
	0x1ad10109,0x1ad10121,0x1ad20109,0x1ad20121,0x1ad30109,0x1ad30121,0x1ad40109,0x1ad40121,
	0x1ad50109,0x1ad50121,0x1ad60109,0x1ad60121,0x1ad70109,0x1ad70121,0x1ad80109,0x1ad80121,
	0x1ad90109,0x1ad90121,0x1ada0109,0x1ada0121,0x1adb0109,0x1adb0121,0x1adc0109,0x1adc0121,
	0x1add0109,0x1add0121,0x1ade0109,0x1ade0121,0x1adf0109,0x1adf0121,0x1ae00109,0x1ae10109,
	0x1ae10121,0x1ae20109,0x1ae20121,0x1ae30109,0x1ae30121,0x1ae40109,0x1ae40121,0x1ae50109,
	0x1ae50121,0x1ae60109,0x1ae60121,0x1ae70109,0x1ae70121,0x1ae80109,0x1ae80121,0x1ae90109,
	0x1ae90121,0x1aea0109,0x1aea0121,0x1aeb0109,0x1aeb0121,0x1aec0109,0x1aec0121,0x1aed0109,
	0x1aed0121,0x1aee0109,0x1aee0121,0x1aef0109,0x1aef0121,0x1af00109,0x1af00121,0x1af10109,
	0x1af10121,0x1af20109,0x1af20121,0x1af30109,0x1af30121,0x1af40109,0x1af40121,0x1af50109,
	0x1af50121,0x1af60109,0x1af60121,0x1af70109,0x1af70121,0x1af80109,0x1af80121,0x1af90109,
	0x1af90121,0x1afa0109,0x1afa0121,0x1afb0109,0x1afb0121,0x1afc0109,0x1afc0121,0x1afd0109,
	0x1afd0121,0x1afe0109,0x1afe0121,0x1aff0109,0x1aff0121,0x1b000109,0x1b000121,0x1b010109,
	0x1b010121,0x1b020109,0x1b020121,0x1b030109,0x1b030121,0x1b040109,0x1b040121,0x1b050109,
	0x1b050121,0x1b060109,0x1b060121,0x1b070109,0x1b080109,0x1b080111,0x1b080115,0x1b090109,
	0x1b090111,0x1b0a0109,0x1b0a0111,0x1b0b0109,0x1b0b0111,0x1b0b0115,0x1b0c0109,0x1b0c0115,
	0x1b0d0109,0x1b0e0109,0x1b0f0109,0x1b100109,0x1b110109,0x1b120109,0x1b120115,0x1b120165,
	0x1b130109,0x1b130115,0x1b140109,0x1b140115,0x1b140165,0x1b150109,0x1b150165,0x1b160109,
	0x1b170109,0x1b170115,0x1b180109,0x1b180165,0x1b190109,0x1b190165,0x1b1a0109,0x1b1b0109,
	0x1b1b0115,0x1b1c0109,0x1b1d0109,0x1b1d0115,
	};

static const TUint32 TheCol_fa_irIndex[] = 
	{
	0x300022,0x310023,0x320024,0x330025,0x340026,0x350027,0x360028,0x370029,
	0x38002a,0x39002b,0x41005f,0x42006b,0x430074,0x44007d,0x450089,0x46009c,
	0x4700a4,0x4800b2,0x4900c0,0x4a00cc,0x4b00d3,0x4c00dc,0x4d00e9,0x4e00f1,
	0x4f00fd,0x500109,0x510111,0x520119,0x530127,0x540133,0x55013a,0x560147,
	0x57014f,0x580158,0x590160,0x5a0168,0x61005c,0x620068,0x630070,0x640079,
	0x650085,0x660099,0x6700a0,0x6800ae,0x6900bc,0x6a00c9,0x6b00d0,0x6c00d7,
	0x6d00e5,0x6e00ee,0x6f00f9,0x700106,0x71010e,0x720116,0x730124,0x740130,
	0x750137,0x760143,0x77014c,0x780154,0x79015d,0x7a0165,0xaa0062,0xb501a5,
	0xba0100,0xc60064,0xd00083,0xde0171,0xe60063,0xf00082,0xfe0170,0x13100c5,
	0x1380115,0x14a00f8,0x14b00f7,0x17f012b,0x1840178,0x1850177,0x1860103,0x1890081,
	0x18d0084,0x18e008e,0x18f0090,0x1900092,0x19400a9,0x19500b8,0x19600c8,0x19c0140,
	0x1a200ad,0x1a300ac,0x1a6011f,0x1a70174,0x1a80173,0x1a9012d,0x1aa012e,0x1b10142,
	0x1b7016d,0x1b8016f,0x1b9016e,0x1bc0176,0x1bd0175,0x1bf0172,0x1c00182,0x1c10183,
	0x1c20184,0x1c30185,0x1dd008d,0x2500065,0x2510066,0x2520067,0x2540102,0x2580094,
	0x259008f,0x25b0091,0x25c0095,0x25e0096,0x26100ab,0x26200a7,0x26300a8,0x2640098,
	0x265013e,0x26900c7,0x26a00c6,0x26e00e3,0x26f013f,0x27400f6,0x2750104,0x2760101,
	0x2770105,0x278010d,0x2790120,0x280011e,0x2810122,0x283012c,0x285012f,0x2870136,
	0x289013d,0x28a0141,0x28c014b,0x28d0153,0x28e00e4,0x28f0164,0x292016c,0x2940179,
	0x295017d,0x2960181,0x2970186,0x2980187,0x299006f,0x29a0097,0x29c00b7,0x29e00d6,
	0x29f00e2,0x2b000b6,0x2b200cf,0x2b3011d,0x2b40121,0x2b60123,0x2b70152,0x2b80163,
	0x2bb00ba,0x2bc017b,0x2bd00bb,0x2be017c,0x2bf017f,0x2c0017a,0x2c10180,0x2e000aa,
	0x2e100e1,0x2e2012a,0x2e3015c,0x2e4017e,0x3910189,0x392018c,0x393018e,0x3940190,
	0x3950192,0x3960196,0x3970198,0x398019b,0x399019d,0x39a01a1,0x39b01a3,0x39c01a6,
	0x39d01a8,0x39e01aa,0x39f01ac,0x3a001af,0x3a101b3,0x3a301b6,0x3a401b8,0x3a501ba,
	0x3a601bd,0x3a701bf,0x3a801c1,0x3a901c3,0x3b10188,0x3b2018a,0x3b3018d,0x3b4018f,
	0x3b50191,0x3b60195,0x3b70197,0x3b80199,0x3b9019c,0x3ba019f,0x3bb01a2,0x3bc01a4,
	0x3bd01a7,0x3be01a9,0x3bf01ab,0x3c001ad,0x3c101b1,0x3c201b4,0x3c301b4,0x3c401b7,
	0x3c501b9,0x3c601bb,0x3c701be,0x3c801c0,0x3c901c2,0x3d0018b,0x3d1019a,0x3d501bc,
	0x3d601ae,0x3da0194,0x3dc0193,0x3de01b0,0x3e001c4,0x3e201c6,0x3e301c5,0x3e401c8,
	0x3e501c7,0x3e601ca,0x3e701c9,0x3e801cc,0x3e901cb,0x3ea01ce,0x3eb01cd,0x3ec01d0,
	0x3ed01cf,0x3ee01d2,0x3ef01d1,0x3f001a0,0x3f101b2,0x3f201b5,0x3f3019e,0x40201e2,
	0x40401e6,0x40501ec,0x40601f2,0x40801f4,0x40901fc,0x40a0204,0x40b0214,0x40f0232,
	0x41001d4,0x41101da,0x41201dc,0x41301de,0x41401e0,0x41501e4,0x41601e8,0x41701ea,
	0x41801f0,0x41a01f6,0x41b01fa,0x41c01fe,0x41d0200,0x41e0206,0x41f020a,0x420020e,
	0x4210210,0x4220212,0x4230216,0x424021c,0x425021e,0x4260228,0x427022c,0x4280234,
	0x4290236,0x42a0238,0x42b023a,0x42c023c,0x42d0240,0x42e0242,0x42f0244,0x43001d3,
	0x43101d9,0x43201db,0x43301dd,0x43401df,0x43501e3,0x43601e7,0x43701e9,0x43801ef,
	0x43a01f5,0x43b01f9,0x43c01fd,0x43d01ff,0x43e0205,0x43f0209,0x440020d,0x441020f,
	0x4420211,0x4430215,0x444021b,0x445021d,0x4460227,0x447022b,0x4480233,0x4490235,
	0x44a0237,0x44b0239,0x44c023b,0x44d023f,0x44e0241,0x44f0243,0x45201e1,0x45401e5,
	0x45501eb,0x45601f1,0x45801f3,0x45901fb,0x45a0203,0x45b0213,0x45f0231,0x4600222,
	0x4610221,0x462023e,0x463023d,0x4640246,0x4650245,0x4660248,0x4670247,0x468024c,
	0x469024b,0x46a024a,0x46b0249,0x46c024e,0x46d024d,0x46e0250,0x46f024f,0x4700252,
	0x4710251,0x4720254,0x4730253,0x4740256,0x4750255,0x478021a,0x4790219,0x47a0226,
	0x47b0225,0x47e0224,0x47f0223,0x480020c,0x481020b,0x4a001f8,0x4a101f7,0x4a40202,
	0x4a50201,0x4a80258,0x4a90257,0x4ae0218,0x4af0217,0x4b4022a,0x4b50229,0x4ba0220,
	0x4bb021f,0x4bc0230,0x4bd022f,0x4c00259,0x4cb022e,0x4cc022d,0x4d401d8,0x4d501d7,
	0x4d801d6,0x4d901d5,0x4e001ee,0x4e101ed,0x4e80208,0x4e90207,0x53102a8,0x53202aa,
	0x53302ac,0x53402ae,0x53502b0,0x53602b2,0x53702b4,0x53802b6,0x53902b8,0x53a02ba,
	0x53b02bc,0x53c02be,0x53d02c0,0x53e02c2,0x53f02c4,0x54002c6,0x54102c8,0x54202ca,
	0x54302cc,0x54402ce,0x54502d0,0x54602d2,0x54702d4,0x54802d6,0x54902d8,0x54a02da,
	0x54b02dc,0x54c02de,0x54d02e0,0x54e02e2,0x54f02e4,0x55002e6,0x55102e8,0x55202ea,
	0x55302ec,0x55402ee,0x55502f0,0x55602f2,0x55902f3,0x56102a7,0x56202a9,0x56302ab,
	0x56402ad,0x56502af,0x56602b1,0x56702b3,0x56802b5,0x56902b7,0x56a02b9,0x56b02bb,
	0x56c02bd,0x56d02bf,0x56e02c1,0x56f02c3,0x57002c5,0x57102c7,0x57202c9,0x57302cb,
	0x57402cd,0x57502cf,0x57602d1,0x57702d3,0x57802d5,0x57902d7,0x57a02d9,0x57b02db,
	0x57c02dd,0x57d02df,0x57e02e1,0x57f02e3,0x58002e5,0x58102e7,0x58202e9,0x58302eb,
	0x58402ed,0x58502ef,0x58602f1,0x5d002f4,0x5d102f7,0x5d202f9,0x5d302fb,0x5d402fe,
	0x5d50300,0x5d60301,0x5d70302,0x5d80303,0x5d90304,0x5da0307,0x5db0305,0x5dc0308,
	0x5dd030c,0x5de030a,0x5df030e,0x5e0030d,0x5e1030f,0x5e20310,0x5e30313,0x5e40312,
	0x5e50315,0x5e60314,0x5e70316,0x5e80317,0x5e90319,0x5ea031a,0x60c000b,0x61b000c,
	0x61f000d,0x621002c,0x627002d,0x628002e,0x629002f,0x62a0030,0x62b0031,0x62c0032,
	0x62d0033,0x62e0034,0x62f0035,0x6300036,0x6310037,0x6320038,0x6330039,0x634003a,
	0x635003b,0x636003c,0x637003d,0x638003e,0x639003f,0x63a0040,0x6400041,0x6410042,
	0x6420043,0x6430044,0x6440045,0x6450046,0x6460047,0x6470048,0x6480049,0x649004a,
	0x64a004e,0x6600018,0x6610019,0x662001a,0x663001b,0x664001c,0x665001d,0x666001e,
	0x667001f,0x6680020,0x6690021,0x66a0007,0x66b0009,0x66c000a,0x671004f,0x6790050,
	0x67e0051,0x6860052,0x6880053,0x6910054,0x6980055,0x6a90056,0x6af0057,0x6ba0058,
	0x6be0059,0x6c1005a,0x6c3005b,0x6cc004b,0x6cd004c,0x6d2004d,0x6d40008,0x6f0000e,
	0x6f1000f,0x6f20010,0x6f30011,0x6f40012,0x6f50013,0x6f60014,0x6f70015,0x6f80016,
	0x6f90017,0x10a0025b,0x10a1025d,0x10a2025f,0x10a30261,0x10a40263,0x10a50265,0x10a60267,
	0x10a7026b,0x10a8026d,0x10a9026f,0x10aa0271,0x10ab0273,0x10ac0275,0x10ad0279,0x10ae027b,
	0x10af027d,0x10b0027f,0x10b10281,0x10b20283,0x10b30287,0x10b40289,0x10b5028b,0x10b6028d,
	0x10b7028f,0x10b80291,0x10b90293,0x10ba0295,0x10bb0297,0x10bc0299,0x10bd029b,0x10be029d,
	0x10bf02a1,0x10c002a3,0x10c10269,0x10c20277,0x10c30285,0x10c4029f,0x10c502a5,0x10d0025a,
	0x10d1025c,0x10d2025e,0x10d30260,0x10d40262,0x10d50264,0x10d60266,0x10d7026a,0x10d8026c,
	0x10d9026e,0x10da0270,0x10db0272,0x10dc0274,0x10dd0278,0x10de027a,0x10df027c,0x10e0027e,
	0x10e10280,0x10e20282,0x10e30286,0x10e40288,0x10e5028a,0x10e6028c,0x10e7028e,0x10e80290,
	0x10e90292,0x10ea0294,0x10eb0296,0x10ec0298,0x10ed029a,0x10ee029c,0x10ef02a0,0x10f002a2,
	0x10f10268,0x10f20276,0x10f30284,0x10f4029e,0x10f502a4,0x10f602a6,0x1fbe019c,0x207f00f5,
	0x21020077,0x21070093,0x210a00a2,0x210b00b4,0x210c00b4,0x210d00b4,0x210e00b0,0x210f00b9,
	0x211000c3,0x211100c3,0x211200df,0x211300da,0x211500f3,0x2119010b,0x211a0113,0x211b011b,
	0x211c011b,0x211d011b,0x2124016a,0x212601c3,0x2128016a,0x212a00d3,0x212c006d,0x212d0077,
	0x212f0087,0x2130008b,0x2131009e,0x213300ec,0x213400fb,0x213502f5,0x213602f8,0x213702fa,
	0x213802fc,0x216000c2,0x21640149,0x2169015a,0x216c00de,0x216d0076,0x216e007f,0x216f00eb,
	0x217000be,0x21740145,0x21790156,0x217c00d9,0x217d0072,0x217e007b,0x217f00e7,0x24b60061,
	0x24b7006e,0x24b80078,0x24b90080,0x24ba008c,0x24bb009f,0x24bc00a6,0x24bd00b5,0x24be00c4,
	0x24bf00ce,0x24c000d5,0x24c100e0,0x24c200ed,0x24c300f4,0x24c400ff,0x24c5010c,0x24c60114,
	0x24c7011c,0x24c80129,0x24c90135,0x24ca013c,0x24cb014a,0x24cc0151,0x24cd015b,0x24ce0162,
	0x24cf016b,0x24d0005e,0x24d1006a,0x24d20073,0x24d3007c,0x24d40088,0x24d5009b,0x24d600a3,
	0x24d700b1,0x24d800bf,0x24d900cb,0x24da00d2,0x24db00db,0x24dc00e8,0x24dd00f0,0x24de00fc,
	0x24df0108,0x24e00110,0x24e10118,0x24e20126,0x24e30132,0x24e40139,0x24e50146,0x24e6014e,
	0x24e70157,0x24e8015f,0x24e90167,0xfb200311,0xfb2102f6,0xfb2202fd,0xfb2302ff,0xfb240306,
	0xfb250309,0xfb26030b,0xfb270318,0xfb28031b,0xff210060,0xff22006c,0xff230075,0xff24007e,
	0xff25008a,0xff26009d,0xff2700a5,0xff2800b3,0xff2900c1,0xff2a00cd,0xff2b00d4,0xff2c00dd,
	0xff2d00ea,0xff2e00f2,0xff2f00fe,0xff30010a,0xff310112,0xff32011a,0xff330128,0xff340134,
	0xff35013b,0xff360148,0xff370150,0xff380159,0xff390161,0xff3a0169,0xff41005d,0xff420069,
	0xff430071,0xff44007a,0xff450086,0xff46009a,0xff4700a1,0xff4800af,0xff4900bd,0xff4a00ca,
	0xff4b00d1,0xff4c00d8,0xff4d00e6,0xff4e00ef,0xff4f00fa,0xff500107,0xff51010f,0xff520117,
	0xff530125,0xff540131,0xff550138,0xff560144,0xff57014d,0xff580155,0xff59015e,0xff5a0166,
	};

static const TUint16 TheCol_fa_irStringElement[] = 
	{
	0x2,0x627,0x653,0x2,0x627,0x654,0x2,0x648,
	0x654,0x2,0x627,0x655,0x2,0x64a,0x654,0x2,
	0x6d5,0x654,0x2,0x6c1,0x654,
	};

static const TUint32 TheCol_fa_irStringIndex[] = 
	{
	0x0,0x30001,0x90003,0x60002,0xc0004,0x120006,0xf0005,
	};

static const TCollationKeyTable TheCol_fa_irTable = 
	{ TheCol_fa_irKey, TheCol_fa_irIndex, 800, TheCol_fa_irStringElement, TheCol_fa_irStringIndex, 7 };

static const TCollationMethod TheCollationMethod[] = 
	{
		{
		KUidCol_fa_irCollationMethod, // the method for the locale
		NULL, // use the standard table as the main table
		&TheCol_fa_irTable, // the locale values override the standard values
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

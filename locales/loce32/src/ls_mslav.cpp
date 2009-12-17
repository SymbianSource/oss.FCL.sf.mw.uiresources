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
* Description:   Default locale messages for Latvian language, ELOCL.67
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  

const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("M\x0113\x0123in\x0101t v\x0113" L"lreiz"),								// Button 1
	_S("Beigt"),								// Button 2
	_S("Ievietojiet atpaka\x013C" L" disku"),						// Put the card back - line1
	_S("vai tiks zaud\x0113" L"ti dati"),						// Put the card back - line2
	_S("P\x0101r\x0101" L"k zems akumulatora l\x012Bmenis"),						// Low power - line1
	_S("Nevar pabeigt rakst\x012B" L"šanu disk\x0101"),					// Low power - line2
  _S("Diska k\x013C\x016B"L"da - nevar pabeigt rakst\x012B\x0161"L"anu"),	// escape sequences cut with "" to prevent next character
                                                                                    // to be interpreted as part of the escape (a,b,c,d,e,f are also hex)
                                                                                    // Compiler gives warning from this therefore pragma used.
	_S("M\x0113\x0123" L"iniet v\x0113" L"lreiz vai tiks zaud\x0113" L"ti dati"),		                        // Disk error - line2
// SoundDriver
	_S("Zvani"),								// Chimes
	_S("Zvans"),								// Rings
	_S("Sign\x0101" L"ls"),								// Signal
// MediaDriver diskname (max 16 chars)
	_S("Internal"),								// Internal
	_S("External(01)"),							// External(01)
	_S("External(02)"),							// External(02)
	_S("External(03)"),							// External(03)
	_S("External(04)"),							// External(04)
	_S("External(05)"),							// External(05)
	_S("External(06)"),							// External(06)
	_S("External(07)"),							// External(07)
	_S("External(08)"),							// External(08)
// MediaDriver socketname (max 16 chars)
	_S("Socket(01)"),							// Socket(01)
	_S("Socket(02)"),							// Socket(02)
	_S("Socket(03)"),							// Socket(03)
	_S("Socket(04)")							// Socket(04)
	};

//  End of File

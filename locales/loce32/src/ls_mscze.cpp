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
* Description:   Default locale messages for Czech language, ELOCL.25
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  

const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("Opakovat"),								// Button 1
	_S("Stop"),								// Button 2
	_S("Vlo\x017e" L"te disk zp\x011B" L"t"),						// Put the card back - line1
	_S("nebo dojde ke ztrát\x011B" L" dat"),						// Put the card back - line2
	_S("Baterie jsou tém\x011B\x0159" L" vybité"),						// Low power - line1
	_S("Nelze dokon\x010D" L"it zápis na disk"),					// Low power - line2
	_S("Chyba disku - nelze dokon\x010D" L"it zápis"),				// Disk error - line1
	_S("Opakujte nebo dojde ke ztrát\x011B" L" dat"),		                        // Disk error - line2
// SoundDriver
	_S("Odbíjení"),								// Chimes
	_S("Vyzván\x011B" L"ní"),								// Rings
	_S("Signál"),								// Signal
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

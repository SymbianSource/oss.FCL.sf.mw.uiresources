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
* Description:   Default locale messages for Turkish language, ELOCL.14
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  
const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("Tekrar dene"),								// Button 1
	_S("Durdur"),								// Button 2
	_S("Diski yeniden tak\x0131" L"n"),						// Put the card back - line1
	_S("yoksa veriler kaybolacakt\x0131r."),						// Put the card back - line2
	_S("Batarya çok zay\x0131"L"f"),						// Low power - line1
	_S("Diske yazma tamamlanam\x0131yor"),					// Low power - line2
	_S("Disk hatas\x0131 - yazma tamamlanam\x0131" L"yor"),				// Disk error - line1
	_S("Tekrar deneyin, yoksa veriler kaybolacakt\x0131" L"r"),		                        // Disk error - line2
// SoundDriver
	_S("Ç\x0131" L"ng\x0131" L"rak"),								// Chimes
	_S("Zil"),								// Rings
	_S("Sinyal"),								// Signal
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

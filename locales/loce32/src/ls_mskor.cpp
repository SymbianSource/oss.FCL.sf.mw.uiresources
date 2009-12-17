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
* Description:   Default locale messages for Korean language, ELOCL.
*
*/




//  EXTERNAL RESOURCES


//  Include Files

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS
const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("\xC7AC\xC2DC\xB3C4"),					// Button 1
	_S("\xC911\xC9C0"),						// Button 2
	_S("\xB514\xC2A4\xD06C\x0020\xC0BD\xC785\x0020\xC694\xCCAD"),	// Put the card back - line1
	_S("\xB370\xC774\xD130\x0020\xC190\xC2E4\x0020\xC6B0\xB824"),	// Put the card back - line2
	_S("\xBC30\xD130\xB9AC\xB7C9\x0020\xC801\xC74C"),		// Low power - line1
	_S("\xB514\xC2A4\xD06C\x0020\xC4F0\xAE30\x0020\xC2E4\xD328"),	// Low power - line2
	_S("\xB514\xC2A4\xD06C\x0020\xC624\xB958\x0020\x002D\x0020\xC4F0\xAE30\x0020\xC2E4\xD328"), // Disk error - line1
	_S("\xC7AC\xC2DC\xB3C4\x0020\xB610\xB294\x0020\xB370\xC774\xD130\x0020\xC190\xC2E4\x0020\xC6B0\xB824"),	// Disk error - line2
// SoundDriver
	_S("\xCC28\xC784\xBCA8\xC18C\xB9AC"),					// Chimes
	_S("\xBCA8\xC18C\xB9AC"),						// Rings
	_S("\xC2E0\xD638"),							// Signal
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

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
* Description:   Default locale messages for Polish language, ELOCL.27
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  
const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("Ponów prób\x0119"),								// Button 1
	_S("Stop"),								// Button 2
	_S("W\x0142ó\x017C" L" dysk z powrotem"),						// Put the card back - line1
	_S("lub dane zostan\x0105" L" utracone"),						// Put the card back - line2
 	_S("Bateria jest zbyt s\x0142" L"aba"),						// Low power - line1
	    _S("Nie mo\x017Cna doko\x0144" L"czy\x0107" L" zapisywania na dysku"),	       // Low power - line2
 	_S("B\x0142\x0105" L"d dysku - nie mo\x017C" L"na doko\x0144" L"czy\x0107" L" zapisywania"),	   // escape sequences cut with "" to prevent next character
                                                                                               // to be interpreted as part of the escape (a,b,c,d,e,f are also hex)
                                                                                               // pragma used to surpress compiler warnings for these
	_S("Ponów prób\x0119" L", inaczej utracisz dane"),		                        // Disk error - line2
// SoundDriver
	_S("Kuranty"),								// Chimes
	_S("Dzwonki"),								// Rings
	_S("Sygna\x0142"),								// Signal
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

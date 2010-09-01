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
* Description:   Default locale messages for Dutch language, ELOCL.18
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  

const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("Probeer het opnieuw"),								        // Button 1
	_S("Stop"),								                        // Button 2
	_S("Plaats de schijf terug"),						            // Put the card back - line1
	_S("anders gaan er gegevens verloren"),						    // Put the card back - line2
	_S("Batterij bijna leeg"),						                // Low power - line1
	_S("Kan schrijven naar schijf niet voltooien"),					// Low power - line2
	_S("Schijffout - kan schrijven niet voltooien"),				// Disk error - line1
	_S("Probeer het opnieuw, anders gaan er gegevens verloren"),    // Disk error - line2
// SoundDriver
	_S("Carillon"),								// Chimes
	_S("Bel"),								// Rings
	_S("Signaal"),								// Signal
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

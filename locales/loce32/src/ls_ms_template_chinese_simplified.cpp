/*
* Copyright (c) 2004, 2005 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:   Default locale messages for Chinese(PRC) language, ELOCL.57
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>
//  LOCAL CONSTANTS AND MACROS  									
const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =									
	{								
// Fileserver									
	_S("\x91CD\x8BD5"),								// Button 1
	_S("\x505C\x6B62"),								// Button 2
	_S("\x653E\x56DE\x5B58\x50A8\x5361"),						// Put the card back - line1		
	_S("\x6216\x6570\x636E\x5C06\x4E22\x5931"),						// Put the card back - line2		
	_S("\x7535\x6C60\x7535\x91CF\x592A\x4F4E"),						// Low power - line1		
	_S("\x65E0\x6CD5\x5B8C\x6210\x5199\x5165\x5B58\x50A8\x5361"),					// Low power - line2			
	_S("\x5B58\x50A8\x5361\x9519\x8BEF\x002C\x65E0\x6CD5\x5B8C\x6210\x5199\x5165"),				// Disk error - line1				
	_S("\x91CD\x8BD5\x6216\x6570\x636E\x5C06\x4E22\x5931"),		                        // Disk error - line2						
// SoundDriver									
	_S("\x4E50\x58F0"),								// Chimes
	_S("\x94C3\x58F0"),								// Rings
	_S("\x4FE1\x53F7"),								// Signal

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

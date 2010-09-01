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
* Description:   Default locale messages for Chinese(HK&TW) language, ELOCL.57
*
*/





//  EXTERNAL RESOURCES  


//  Include Files  
#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  									
const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =									
	{								
// Fileserver									
	_S("\x91CD\x8A66"),								// Button 1
	_S("\x505C\x6B62"),								// Button 2
	_S("\x653E\x56DE\x8A18\x61B6\x5361"),						// Put the card back - line1		
	_S("\x6216\x8CC7\x6599\x6703\x907A\x5931"),						// Put the card back - line2		
	_S("\x96FB\x91CF\x4E0D\x8DB3"),						// Low power - line1		
	_S("\x7121\x6CD5\x5B8C\x6210\x5BEB\x5165\x8A18\x61B6\x5361"),					// Low power - line2			
	_S("\x8A18\x61B6\x5361\x932F\x8AA4\x002C\x7121\x6CD5\x5B8C\x6210\x5BEB\x5165"),				// Disk error - line1				
	_S("\x91CD\x8A66\x6216\x8CC7\x6599\x6703\x907A\x5931"),		                        // Disk error - line2						
// SoundDriver									
	_S("\x6A02\x8072"),								// Chimes
	_S("\x9234\x8072"),								// Rings
	_S("\x4FE1\x865F"),								// Signal

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

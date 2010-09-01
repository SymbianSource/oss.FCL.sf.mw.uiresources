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
* Description:   Default locale messages for French language, ELOCL.02
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  
const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("Ressayer"),					                       // Button 1
	_S("Arrêter"),					        	       // Button 2
	_S("Réinsérer le disque"),			                       // Put the card back - line1
	_S("ou des données vont être perdues"),			                       // Put the card back - line2
	_S("Batterie trop faible"),			                       // Low power - line1
	_S("Impossible de terminer l'écriture sur disque"),		                       // Low power - line2
	_S("Erreur de disque - impossible de terminer l'écriture"),	                       // Disk error - line1
	_S("\x0052\x00E9\x0065\x0073\x0073\x0061\x0079\x0065\x007A\x0020\x006F\x0075\x0020\x0064\x0065\x0073\x0020\x0064\x006F\x006E\x006E\x00E9\x0065\x0073\x0020\x0073\x0065\x0072\x006F\x006E\x0074\x0020\x0070\x0065\x0072\x0064\x0075\x0065\x0073"),		                       // Disk error - line2
// SoundDriver
	_S("Carillon"),								// Chimes
	_S("Sonneries"),								// Rings
	_S("Signal"),								// Signal
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

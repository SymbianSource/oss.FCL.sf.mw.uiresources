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
* Description:   Default locale messages for Spanish language, ELOCL.04
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  
const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("Reintentar"),								// Button 1
	_S("Detener"),								// Button 2
	_S("Vuelva a introducir el disco"),						// Put the card back - line1
	_S("o se perderán los datos"),						// Put the card back - line2
	_S("Carga de la batería demasiado baja"),						// Low power - line1
	_S("Imposible terminar escritura en el disco"),					// Low power - line2
	_S("Error de disco - imposible terminar escritura"),				// Disk error - line1
	_S("Reinténtelo o se perderán los datos"),		                        // Disk error - line2
// SoundDriver
	_S("Carillón"),								// Chimes
	_S("Rings"),								// Rings
	_S("Señal"),								// Signal
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

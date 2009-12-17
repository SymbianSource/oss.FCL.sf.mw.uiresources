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
* Description:   Default locale messages for Portuguese language, ELOCL.13
*
*/




//  EXTERNAL RESOURCES  


//  Include Files  

#include <kernel/ls_std.h>

//  LOCAL CONSTANTS AND MACROS  
const TText * const LMessages::MsgTable[ELocaleMessages_LastMsg] =
	{
// Fileserver
	_S("Tentar de novo"),								// Button 1
	_S("Parar"),								// Button 2
	_S("Voltar a colocar o disco"),						// Put the card back - line1
	_S("ou haverá perda de dados"),						// Put the card back - line2
	_S("Bateria muito fraca"),						// Low power - line1
	_S("Impossível concluir a escrita em disco"),					// Low power - line2
	_S("Erro no disco - impossível concluir a escrita"),				// Disk error - line1
	_S("Tentar de novo ou haverá perda de dados"),		                        // Disk error - line2
// SoundDriver
	_S("Carrilhões"),								// Chimes
	_S("Toques"),								// Rings
	_S("Sinal"),								// Signal
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

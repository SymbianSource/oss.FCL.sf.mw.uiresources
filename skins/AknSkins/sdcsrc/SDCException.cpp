/*
* Copyright (c) 2003-2008 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  Exception class.
*
*/


#include "SDCGlobals.h"
#include "SDCException.h"

#include <string.h>
#include <stdio.h>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CSDCException::CSDCException()
    {
    iType = ESDCUnknownError;
    strcpy( iDescription, "No additional information" );
    }

CSDCException::CSDCException( TSDCExceptionType aType, const char* aDescription )
    {
    iType = aType;
    strcpy( iDescription, aDescription );
    }

CSDCException::~CSDCException()
    {
    }

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

void CSDCException::Print()
    {
    char buf[1024];

    if( gInput.iLineNumber > -1 )
        {
        sprintf(buf, "An exception occured (when parsing line %i):\n  ", gInput.iLineNumber );
        }
    else
        {
        sprintf(buf, "An exception occured:\n  " );
        }

    fprintf(stderr, buf);
    printf(buf);

    switch( iType )
        {
        case ESDCUnknownError:
            sprintf(buf, "Unknown error\n"); break;
        case ESDCFileOpenError:
            sprintf(buf, "Error while opening a file\n"); break;
        case ESDCPrematureEOIError:
            sprintf(buf, "Premature end of input\n"); break;
        case ESDCSeekError:
            sprintf(buf, "Seek operation failed\n"); break;
        case ESDCParseError:
            sprintf(buf, "Parse error\n"); break;
        case ESDCContentError:
            sprintf(buf, "Error in skin content\n"); break;
        default:
            sprintf(buf, "Internal error, missing description\n"); break;
        }

    fprintf(stderr, buf);
    printf(buf);

    sprintf(buf, "  %s\n", iDescription);

    fprintf(stderr, buf);
    printf(buf);
    }

// End of file

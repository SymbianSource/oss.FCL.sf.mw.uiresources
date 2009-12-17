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
* Description:  Pictograph bitmap builder - Main function
*
*/


// INCLUDE FILES
#include <e32std.h>
#include <fbs.h>
#include <bacline.h> 
#include "BitmapBuilder.h"

// CONSTANTS

// FORWARD DECLARATIONS

// -----------------------------------------------------------------------------
// ExecuteL()
// -----------------------------------------------------------------------------
//
void ExecuteL()
    {
    
    // Check arguments, the only allowed argument is '1' or '2'
    CCommandLineArguments* args = CCommandLineArguments::NewLC();
    if ( args->Count() != 2 )
        {
        User::Leave( KErrArgument );
        }

    TPtrC arg = args->Arg( 1 );
    if ( arg.Length() != 1 || ( arg[0] != '1' && arg[0] != '2' ) )
        {
        User::Leave( KErrArgument );
        }        

    CBitmapBuilder* builder = CBitmapBuilder::NewLC();

    if ( arg[0] == '1' )
        {
        // phase 1
        builder->EnsurePathsL();
        builder->ParseIniFilesL();
        builder->GenerateBmconvCommandFilesL();
        builder->GenerateBuildBitmapsCommandFileL();
        }
    else
        {
        // phase 2
        builder->ParseIniFilesL();
        builder->BuildFinalBitmapsL();
        builder->GeneratePictographDefinitionsL();
        builder->GeneratePictographRangeL();
        }

    CleanupStack::PopAndDestroy( 2 ); // args, builder

    }

/**
* Main function.
*/
TInt E32Main()
    {
    CTrapCleanup* trap = CTrapCleanup::New();
    if ( !trap ) return KErrNoMemory;

    TInt ret = KErrNone;

    if (ret == KErrNone) 
        {
        FbsStartup();

        RFbsSession session;    
        session.Connect();

        // trap harness
        TRAP( ret, ExecuteL() );
        session.Disconnect();
        }
    delete trap;
    return ret;
    }

// End of File

/*
* Copyright (c) 2002 - 2007 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  SkinningModule test module.
*
*/



#ifndef SKINNINGMODULE_H
#define SKINNINGMODULE_H

// INCLUDES
#include "stiftestmodule.h"
#include <stiflogger.h>

#include <aknssrvclient.h>
#include <aknseffectanim.h>
#include <fbs.h>

// CONSTANTS
// Logging path
_LIT( KSkinningModuleLogPath, "\\logs\\testframework\\SkinningModule\\" ); 
// Log file
_LIT( KSkinningModuleLogFile, "SkinningModule.txt" ); 

#define GETPTR &
#define ENTRY(str,func) {_S(str), GETPTR func,0,0,0}
#define FUNCENTRY(func) {_S(#func), GETPTR func,0,0,0}
#define OOM_ENTRY(str,func,a,b,c) {_S(str), GETPTR func,a,b,c}
#define OOM_FUNCENTRY(func,a,b,c) {_S(#func), GETPTR func,a,b,c}


// FORWARD DECLARATIONS
class CSkinningModule;
class RFbsSession;
class CAknsEffectItemDef;
class CAknsEffectCommand;
class TAknsItemID;
class TAknsRlRenderOpParam;

// DATA TYPES
typedef TInt (CSkinningModule::* TestFunction)(TTestResult&);

// CLASS DECLARATION

/**
*  An internal structure containing a test case name and
*  the pointer to function doing the test
*
*  @lib ?library
*  @since ?Series60_version
*/
class TCaseInfoInternal
    {
    public:
        const TText*    iCaseName;
        TestFunction    iMethod;
        TBool           iIsOOMTest;
        TInt            iFirstMemoryAllocation;
        TInt            iLastMemoryAllocation;
    };

// CLASS DECLARATION

/**
*  A structure containing a test case name and
*  the pointer to function doing the test
*
*  @lib ?library
*  @since ?Series60_version
*/
class TCaseInfo
    {
    public:
        TPtrC iCaseName;
        TestFunction iMethod;
        TBool           iIsOOMTest;
        TInt            iFirstMemoryAllocation;
        TInt            iLastMemoryAllocation;

    TCaseInfo( const TText* a ) : iCaseName( (TText*) a )
        {
        };

    };


// CLASS DECLARATION

/**
*  This a SkinningModule class.
*
*  @lib ?library
*  @since ?Series60_version
*/
NONSHARABLE_CLASS(CSkinningModule) : public CTestModuleBase, MAknsSkinChangeObserver, MAknsEffectAnimObserver
    {
    public:  // Constructors and destructor


        /**
        * Two-phased constructor.
        */
        static CSkinningModule* NewL();

        /**
        * Destructor.
        */
        virtual ~CSkinningModule();

    public: // Functions from base classes

        /**
        * From CTestModuleBase InitL is used to initialize the 
        *       SkinningModule. It is called once for every instance of 
        *       TestModuleSkinningModule after its creation.
        * @since ?Series60_version
        * @param aIniFile Initialization file for the test module (optional)
        * @param aFirstTime Flag is true when InitL is executed for first 
        *               created instance of SkinningModule.
        * @return Symbian OS error code
        */
        TInt InitL( TFileName& aIniFile, TBool aFirstTime );

        /**
        * From CTestModuleBase GetTestCasesL is used to inquiry test cases 
        *   from SkinningModule. 
        * @since ?Series60_version
        * @param aTestCaseFile Test case file (optional)
        * @param aTestCases  Array of TestCases returned to test framework
        * @return Symbian OS error code
        */
        TInt GetTestCasesL( const TFileName& aTestCaseFile, 
                            RPointerArray<TTestCaseInfo>& aTestCases );

        /**
        * From CTestModuleBase RunTestCaseL is used to run an individual 
        *   test case. 
        * @since ?Series60_version
        * @param aCaseNumber Test case number
        * @param aTestCaseFile Test case file (optional)
        * @param aResult Test case result returned to test framework (PASS/FAIL)
        * @return Symbian OS error code (test case execution error, which is 
        *           not reported in aResult parameter as test case failure).
        */   
        TInt RunTestCaseL( const TInt aCaseNumber, 
                           const TFileName& aTestCaseFile,
                           TTestResult& aResult );

        /**
        * From CTestModuleBase; OOMTestQueryL is used to specify is particular
        * test case going to be executed using OOM conditions
        * @param aTestCaseFile Test case file (optional)
        * @param aCaseNumber Test case number (optional)
        * @param aFailureType OOM failure type (optional)
        * @param aFirstMemFailure The first heap memory allocation failure value (optional)
        * @param aLastMemFailure The last heap memory allocation failure value (optional)
        * @return TBool
        */
        virtual TBool OOMTestQueryL( const TFileName& /* aTestCaseFile */, 
                                     const TInt /* aCaseNumber */, 
                                     TOOMFailureType& aFailureType, 
                                     TInt& /* aFirstMemFailure */, 
                                     TInt& /* aLastMemFailure */ );

        /**
        * From CTestModuleBase; OOMTestInitializeL may be used to initialize OOM
        * test environment
        * @param aTestCaseFile Test case file (optional)
        * @param aCaseNumber Test case number (optional)
        * @return None
        */
        virtual void OOMTestInitializeL( const TFileName& /* aTestCaseFile */, 
                                    const TInt /* aCaseNumber */ ); 

        /**
        * From CTestModuleBase; OOMHandleWarningL
        * @param aTestCaseFile Test case file (optional)
        * @param aCaseNumber Test case number (optional)
        * @param aFailNextValue FailNextValue for OOM test execution (optional)
        * @return None
        *
        * User may add implementation for OOM test warning handling. Usually no
        * implementation is required.           
        */
        virtual void OOMHandleWarningL( const TFileName& /* aTestCaseFile */,
                                        const TInt /* aCaseNumber */, 
                                        TInt& /* aFailNextValue */); 

        /**
        * From CTestModuleBase; OOMTestFinalizeL may be used to finalize OOM
        * test environment
        * @param aTestCaseFile Test case file (optional)
        * @param aCaseNumber Test case number (optional)
        * @return None
        *
        */
        virtual void OOMTestFinalizeL( const TFileName& /* aTestCaseFile */, 
                                       const TInt /* aCaseNumber */ );
                                       
                                       
        // Callbacks
        void SkinContentChanged();
        void SkinConfigurationChanged(
            const TAknsSkinStatusConfigurationChangeReason aReason );
        void SkinPackageChanged(
            const TAknsSkinStatusPackageChangeReason aReason );

        void AnimFrameReady( TInt aError, TInt aAnimId );

    private:

        /**
        * C++ default constructor.
        */
        CSkinningModule();

        /**
        * By default Symbian 2nd phase constructor is private.
        */
        void ConstructL();

        /**
        * Function returning test case name and pointer to test case function.
        * @since ?Series60_version
        * @param aCaseNumber test case number
        * @return TCaseInfo 
        */
        const TCaseInfo Case ( const TInt aCaseNumber ) const;

        /**
        * Actual Hardcoded test case functions are listed below.
        */
        //ADD NEW METHOD DEC HERE"

        TInt TestCaseStartServer( TTestResult& aResult );
        TInt TestCaseMasterLayoutOpsL( TTestResult& aResult );
        TInt TestCaseAnimationFactoryOpsL( TTestResult& aResult );
        TInt TestCaseRenderUtilsOps( TTestResult& aResult );
        TInt TestCaseBasicBackgroundControlContextOpsL( TTestResult& aResult );
        TInt TestCaseListBoxBackgroundControlContextOpsL( TTestResult& aResult );
        TInt TestCaseLayeredBackgroundControlContextOpsL( TTestResult& aResult );
        TInt TestCaseMaskedBackgroundControlContextOpsL( TTestResult& aResult );
        TInt TestCaseCombinedBackgroundControlContextOpsL( TTestResult& aResult );

        // Internal methods.
        void CloseSession();
        void OpenSessionWithNoObserver();
        void OpenSessionWithObserver();
        CAknsEffectCommand* CreateEffectCommandLC( TAknsRlRenderOpParam& aOpParams );


    private:    // Data
        // Pointer to test (function) to be executed
        TestFunction iMethod;

        // Pointer to logger
        CStifLogger * iLog; 

        RAknsSrvSession iClient;
        RFbsSession iFbsSession;
        RAknsSrvSession* iClientPtr;
        TBool iContentChanged;
        RSemaphore iWaitsema;
        TBool iWait;
        TBool iCloseSession;
    };

#endif      // SKINNINGMODULE_H

// End of File

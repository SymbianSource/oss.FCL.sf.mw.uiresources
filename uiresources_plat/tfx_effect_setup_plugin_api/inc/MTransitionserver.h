/*
* Copyright (c) 2006 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:  This is the TransitionServer ECOM API definition of the 
*									TFXSrv Plugin API. The instance of this class must be
								retrieved via the ECOM framework; the ECOM IDs for this API
								are declared in TfxSrvEcomIds.h (KTfxSrvEcomImpl).
*						
*
*/


#ifndef M_TRANSITIONSERVER_H
#define M_TRANSITIONSERVER_H


/**
* Defines interface for Transition Server
*
* More info on how to use methods can be found from 
* complementary/TFXServer transitionServer.h 
* header file.
* @since S60 3.2
* 
* @
*/
class MTransitionServer
	{
	public:
	
		virtual ~MTransitionServer(){};
		virtual TInt Connect() = 0;
		virtual void Disconnect() = 0;
		virtual TInt RegisterFullscreenKml(TUint aActionID, const TUid& aUid, const TDesC& aResourceDir, 
											const TDesC& aFilename) = 0;
		virtual TInt UnregisterFullscreenKml(TUint aActionID, const TUid& aUid) = 0;
	  virtual TInt BlockFullScreenUid(const TUid& aUid, TBool aBlockFrom, TBool aBlockTo) = 0;
		virtual TInt RegisterControlKml(const TUid &aUid, const TDesC& aResourceDir, const TDesC& aFilename) = 0;
		virtual TInt RegisterControlKml(const TUid &aUid, const TDesC& aResourceDir, const TDesC& aFilename, const TInt aWantedTime, const TInt aMinTime) = 0;
	  virtual TInt UnregisterControlKml(const TUid &aUid) = 0;
	  virtual TInt RegisterControlAction(const TUid& aUid, TUint aActionID, const TDesC& aActionString) = 0;
		virtual TInt UnregisterControlAction(const TUid& aUid, TUint aActionID) = 0;
		virtual TInt UnregisterAllKml() = 0;
		virtual TInt SetWantedTime(TInt aTime) = 0;
		virtual TInt SetMinTime(TInt aTime) = 0;
		virtual TInt SetControlFrameTime(TInt aTime) = 0;
		virtual TInt SetControlMinFrameTime(TInt aTime) = 0;
		virtual TInt RegisterFullscreenKml(TUint aActionID, const TUid& aUid, const TDesC& aResourceDir, 
											const TDesC& aFilename, TInt aCachePriority, TInt aWantedTime,
  										TInt aMinTime) = 0;
		virtual TInt RegisterListBoxKml(const TUid& aUid, const /*TListBoxType*/ TInt aListBoxType, 
                                     const TDesC& aResourceDir, 
									 const TDesC& aBackgroundFilename, 
									 const TDesC& aListItemFilename) = 0;


		virtual TInt UnregisterListBoxKml(const TUid& aUid, const /*TListBoxType*/ TInt aListBoxType) = 0;
    virtual TBool IsConnected() = 0;
    

    
	};
	
	
#endif // M_TRANSITIONSERVER_H



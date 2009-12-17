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
* Description:   CAknIconManager class.
*
*/


#include "AknIconFormatHandler.h"
#include "AknBitmap.h"

inline TInt CAknIconManager::BitmapId() const
    {
    return iBitmapId;
    }

inline TInt CAknIconManager::MaskId() const
    {
    return (iBitmap&&iBitmap->MaskDestroyed()?iOriginalMaskId:iMaskId);
    }

inline void CAknIconManager::GetInitializedParams( TAknIconParams& aInfo ) const
    {
    aInfo.iMode = iInitializedMode;
    aInfo.iSize = iInitializedSize;
    aInfo.iRotationAngle = iInitializedAngle;
    aInfo.iColor = iInitializedColor;
    
    if (IsCompressionDisabledCleanUp())
        {
        aInfo.DisableCompression();
        }
    if (IsExcludedFromCache())
        {
        aInfo.ExcludeFromCache();
        }     
    }

inline void CAknIconManager::SetInitializedParams( 
    const TAknIconParams& aInfo )
    {
    iInitializedMode = aInfo.iMode;
    iInitializedSize = aInfo.iSize;
    iInitializedAngle = aInfo.iRotationAngle;
    iInitializedColor = aInfo.iColor;
    
    if (aInfo.IsCompressionDisabled())
        {
        SetDisableCompressionCleanUp();
        }
    else
        {
        ClearDisableCompressionCleanUp();
        }
    }
    
    
inline void CAknIconManager::DeleteIconFormatHandler()
	{
	delete iHandler;
	iHandler = NULL;
	}

inline TBool CAknIconManager::HasValidFileExtension( const TDesC& aFileName ) const
    {
    return ( aFileName.Length() >= KExtensionLength &&
           ( aFileName.Right( KExtensionLength ).CompareF( KMbmExtension ) == 0 ||
             aFileName.Right( KExtensionLength ).CompareF( KMifExtension ) == 0 ) );
    }

inline TBool CAknIconManager::IsDefaultIconDirUsed() const
    {
    return iFlags & EFlagUsesDefaultIconDir;
    }
    
inline void CAknIconManager::SetDefaultIconDirUsed()
    {
    iFlags |= EFlagUsesDefaultIconDir;
    }
    
inline TBool CAknIconManager::IsExcludedFromCache() const
    {
    return iFlags & EFlagExcludeFromCache;
    }   
     
inline void CAknIconManager::ExcludeFromCache()
    {
    iFlags |= EFlagExcludeFromCache;
    }

inline TBool CAknIconManager::IsCompressionDisabled() const
    {
    return iFlags & EFlagDisableCompression;
    }   

inline void CAknIconManager::DisableCompression()
    {
    iFlags |= EFlagDisableCompression;
    }        
    
inline TBool CAknIconManager::IsIconDataPreserved() const
    {
    return iFlags & EFlagIconDataPreserved;        
    }
    
inline void CAknIconManager::SetIconDataPreserved()
    {  
    iFlags |= EFlagIconDataPreserved;      
    }
           
inline void CAknIconManager::ClearIconDataPreserved()
    {  
    iFlags &= ~EFlagIconDataPreserved;            
    }
    
inline TBool CAknIconManager::IsAnimated() const
    { 
    return iFlags & EFlagAnimated;               
    }
    
inline void CAknIconManager::SetAnimated()
    {  
    iFlags |= EFlagAnimated;            
    }
    
inline TBool CAknIconManager::IsFileExtRemoved() const
    {  
    return iFlags & EFlagFileExtRemoved;                     
    }
    
inline void CAknIconManager::SetFileExtRemoved()
    {
    iFlags |= EFlagFileExtRemoved;                    
    }
    
inline TBool CAknIconManager::IsCompressionDisabledCleanUp() const
    {
    return iFlags & EFlagDisableCompressionCleanUp;        
    }
    
inline void CAknIconManager::SetDisableCompressionCleanUp()
    {  
    iFlags |= EFlagDisableCompressionCleanUp;      
    }
           
inline void CAknIconManager::ClearDisableCompressionCleanUp()
    {  
    iFlags &= ~EFlagDisableCompressionCleanUp;            
    }
inline TBool CAknIconManager::IsAppIcon() const
    {
    if ( iBitmap  )
        {
        return iBitmap->IsAppIcon();    
        }
    return EFalse;
    }
inline void CAknIconManager::SetAppIcon(TBool aAppIcon)
    {
    iAppIcon = aAppIcon;
    }
inline TBool CAknIconManager::GetAppIcon() const
    {
    return iAppIcon;
    }
// End of File

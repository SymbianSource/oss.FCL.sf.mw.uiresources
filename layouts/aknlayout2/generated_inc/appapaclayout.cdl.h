/*
* Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
* Description:
*
*/

// It contains the client API.
// It should not be modified manually.

#ifndef APPAPACLAYOUT_CDL
#define APPAPACLAYOUT_CDL

#include <CdlEngine.h>
#include <appapaclayout.cdl.common.h>

namespace AppApacLayout
{

class CInstance;

// Standard interface functions 
inline void LoadCustomisationL(const TCdlRef& aRef)                          { CdlEngine::LoadCustomisationL(aRef); }
inline void LoadCustomisationL(const TDesC& aLibName, TInt aInstId)          { TCdlRef ref = { aInstId, { KCdlInterfaceUidValue }, &aLibName }; LoadCustomisationL(ref); }
inline void RequireCustomisationL()                                          { CdlEngine::RequireCustomisationL(&KCdlInterface); }
inline TBool IsCustomisationStarted()                                        { return CdlEngine::IsCustomisationStarted(&KCdlInterface); }
inline const CInstance& CustomisationInstance()                              { return (const CInstance&)(CdlEngine::CustomisationInstance(KCdlInterfaceUid)); }
inline void SetCustomisationChangeObserverL(MCdlChangeObserver* aObserver)   { CdlEngine::SetCustomisationChangeObserverL(aObserver, KCdlInterfaceUid); }

inline const TCdlRef& LastAccessedRef()                                      { return CdlEngine::LastAccessedRef(KCdlInterfaceUid); }
inline void FileNameRelativeToLastAccessedInstance(TFileName& aFileName)     { CdlEngine::FileNameRelativeToLastAccessedInstance(KCdlInterfaceUid, aFileName); }


// CDL API functions, as defined in appapaclayout.cdl

// LAF Table : Real time view texts
inline TAknTextLineLayout Real_time_view_texts_Line_1(TInt aIndex_B)		{ return (*(TReal_time_view_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_time_view_texts_Line_1)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Real_time_view_texts_Line_1(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Real_time_view_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Real_time_view_texts_Line_1)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Real_time_view_texts_Line_2(TInt aIndex_B)		{ return (*(TReal_time_view_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_time_view_texts_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Real_time_view_texts_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Real_time_view_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Real_time_view_texts_Line_2)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Real_time_view_texts_Line_3(TInt aCommon1)		{ return (*(TReal_time_view_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_time_view_texts_Line_3)))(aCommon1); }

inline TAknTextLineLayout Real_time_view_texts_Line_4(TInt aCommon1)		{ return (*(TReal_time_view_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_time_view_texts_Line_4)))(aCommon1); }

inline TAknTextLineLayout Real_time_view_texts_Line_5()		{ return (*(TReal_time_view_texts_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_time_view_texts_Line_5)))(); }

inline TAknLayoutTableLimits Real_time_view_texts_SUB_TABLE_0_Limits()		{ return (*(TReal_time_view_texts_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_time_view_texts_SUB_TABLE_0_Limits)))(); }

inline TAknTextLineLayout Real_time_view_texts_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_B)		{ return (*(TReal_time_view_texts_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_time_view_texts_SUB_TABLE_0)))(aLineIndex, aIndex_B); }

inline TAknLayoutTableLimits Real_time_view_texts_SUB_TABLE_1_Limits()		{ return (*(TReal_time_view_texts_SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_time_view_texts_SUB_TABLE_1_Limits)))(); }

inline TAknTextLineLayout Real_time_view_texts_SUB_TABLE_1(TInt aLineIndex, TInt aCommon1)		{ return (*(TReal_time_view_texts_SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Real_time_view_texts_SUB_TABLE_1)))(aLineIndex, aCommon1); }

// LAF Table : Alarm clock view texts
inline TAknTextLineLayout Alarm_clock_view_texts_Line_1()		{ return (*(TAlarm_clock_view_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_Line_1)))(); }

inline TAknTextLineLayout Alarm_clock_view_texts_Line_2(TInt aCommon1)		{ return (*(TAlarm_clock_view_texts_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_Line_2)))(aCommon1); }

inline TAknTextLineLayout Alarm_clock_view_texts_Line_3(TInt aCommon1)		{ return (*(TAlarm_clock_view_texts_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_Line_3)))(aCommon1); }

inline TAknTextLineLayout Alarm_clock_view_texts_Line_4()		{ return (*(TAlarm_clock_view_texts_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_Line_4)))(); }

inline TAknTextLineLayout Alarm_clock_view_texts_Line_5()		{ return (*(TAlarm_clock_view_texts_Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_Line_5)))(); }

inline TAknTextLineLayout Alarm_clock_view_texts_Line_6(TInt aIndex_B)		{ return (*(TAlarm_clock_view_texts_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_Line_6)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Alarm_clock_view_texts_Line_6(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Alarm_clock_view_texts_Line_6_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Alarm_clock_view_texts_Line_6)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Alarm_clock_view_texts_Line_7()		{ return (*(TAlarm_clock_view_texts_Line_7_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_Line_7)))(); }

inline TAknTextLineLayout Alarm_clock_view_texts_Line_8()		{ return (*(TAlarm_clock_view_texts_Line_8_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_Line_8)))(); }

inline TAknLayoutTableLimits Alarm_clock_view_texts_SUB_TABLE_0_Limits()		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_SUB_TABLE_0_Limits)))(); }

inline TAknTextLineLayout Alarm_clock_view_texts_SUB_TABLE_0(TInt aLineIndex, TInt aCommon1)		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_SUB_TABLE_0)))(aLineIndex, aCommon1); }

inline TAknLayoutTableLimits Alarm_clock_view_texts_SUB_TABLE_1_Limits()		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_SUB_TABLE_1_Limits)))(); }

inline TAknTextLineLayout Alarm_clock_view_texts_SUB_TABLE_1(TInt aLineIndex)		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_SUB_TABLE_1)))(aLineIndex); }

inline TAknLayoutTableLimits Alarm_clock_view_texts_SUB_TABLE_2_Limits()		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_2_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_SUB_TABLE_2_Limits)))(); }

inline TAknTextLineLayout Alarm_clock_view_texts_SUB_TABLE_2(TInt aLineIndex)		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Alarm_clock_view_texts_SUB_TABLE_2)))(aLineIndex); }

// LAF Table : Help text bolding
inline TAknTextLineLayout Help_text_bolding_Line_1()		{ return (*(THelp_text_bolding_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Help_text_bolding_Line_1)))(); }

inline TAknTextLineLayout Help_text_bolding_Line_2()		{ return (*(THelp_text_bolding_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Help_text_bolding_Line_2)))(); }

inline TAknLayoutTableLimits Help_text_bolding_Limits()		{ return (*(THelp_text_bolding_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Help_text_bolding_Limits)))(); }

inline TAknTextLineLayout Help_text_bolding(TInt aLineIndex)		{ return (*(THelp_text_bolding_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Help_text_bolding)))(aLineIndex); }

// LAF Table : Chinese Dictionary text
inline TAknTextLineLayout Chinese_Dictionary_text_Line_1()		{ return (*(TChinese_Dictionary_text_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_text_Line_1)))(); }

inline TAknTextLineLayout Chinese_Dictionary_text_Line_2()		{ return (*(TChinese_Dictionary_text_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_text_Line_2)))(); }

inline TAknTextLineLayout Chinese_Dictionary_text_Line_3(TInt aIndex_B)		{ return (*(TChinese_Dictionary_text_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_text_Line_3)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Chinese_Dictionary_text_Line_3(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Chinese_Dictionary_text_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Chinese_Dictionary_text_Line_3)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Chinese_Dictionary_text_Line_4(TInt aIndex_B)		{ return (*(TChinese_Dictionary_text_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_text_Line_4)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Chinese_Dictionary_text_Line_4(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Chinese_Dictionary_text_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Chinese_Dictionary_text_Line_4)))(aNumberOfLinesShown); }

inline TAknLayoutTableLimits Chinese_Dictionary_text_SUB_TABLE_0_Limits()		{ return (*(TChinese_Dictionary_text_SUB_TABLE_0_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_text_SUB_TABLE_0_Limits)))(); }

inline TAknTextLineLayout Chinese_Dictionary_text_SUB_TABLE_0(TInt aLineIndex)		{ return (*(TChinese_Dictionary_text_SUB_TABLE_0_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_text_SUB_TABLE_0)))(aLineIndex); }

inline TAknLayoutTableLimits Chinese_Dictionary_text_SUB_TABLE_1_Limits()		{ return (*(TChinese_Dictionary_text_SUB_TABLE_1_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_text_SUB_TABLE_1_Limits)))(); }

inline TAknTextLineLayout Chinese_Dictionary_text_SUB_TABLE_1(TInt aLineIndex, TInt aIndex_B)		{ return (*(TChinese_Dictionary_text_SUB_TABLE_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_text_SUB_TABLE_1)))(aLineIndex, aIndex_B); }

// LAF Table : Chinese Dictionary elements and descendant panes
inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes_Line_1()		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_1)))(); }

inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes_Line_2()		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_2)))(); }

inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes_Line_3()		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_3)))(); }

inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes_Line_4()		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Line_4_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_4)))(); }

inline TAknWindowLineLayout chi_dic_find_pane()		{ return (*(Tchi_dic_find_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_chi_dic_find_pane)))(); }

inline TAknWindowLineLayout chi_dic_list_pane()		{ return (*(Tchi_dic_list_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_chi_dic_list_pane)))(); }

inline TAknLayoutTableLimits Chinese_Dictionary_elements_and_descendant_panes_Limits()		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_elements_and_descendant_panes_Limits)))(); }

inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes(TInt aLineIndex)		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_elements_and_descendant_panes)))(aLineIndex); }

// LAF Table : Incoming video call pop-up window texts
inline TAknTextLineLayout Incoming_video_call_pop_up_window_texts_Line_1(TInt aCommon1, TInt aCommon2)		{ return (*(TIncoming_video_call_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Incoming_video_call_pop_up_window_texts_Line_1)))(aCommon1, aCommon2); }

inline TAknMultiLineTextLayout Multiline_Incoming_video_call_pop_up_window_texts_Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown)		{ return (*(TMultiline_Incoming_video_call_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Incoming_video_call_pop_up_window_texts_Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

// LAF Table : First video call pop-up window texts
inline TAknTextLineLayout First_video_call_pop_up_window_texts_Line_1()		{ return (*(TFirst_video_call_pop_up_window_texts_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_First_video_call_pop_up_window_texts_Line_1)))(); }

// LAF Table : Lunar Calendar information layout
inline TAknTextLineLayout Lunar_Calendar_information_layout_Line_1()		{ return (*(TLunar_Calendar_information_layout_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Lunar_Calendar_information_layout_Line_1)))(); }

inline TAknTextLineLayout Lunar_Calendar_information_layout_Line_2(TInt aIndex_B)		{ return (*(TLunar_Calendar_information_layout_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Lunar_Calendar_information_layout_Line_2)))(aIndex_B); }

inline TAknMultiLineTextLayout Multiline_Lunar_Calendar_information_layout_Line_2(TInt aNumberOfLinesShown)		{ return (*(TMultiline_Lunar_Calendar_information_layout_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Multiline_Lunar_Calendar_information_layout_Line_2)))(aNumberOfLinesShown); }

inline TAknTextLineLayout Lunar_Calendar_information_layout_Line_3()		{ return (*(TLunar_Calendar_information_layout_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Lunar_Calendar_information_layout_Line_3)))(); }

inline TAknWindowLineLayout Lunar_Calendar_Elements_Line_1(TInt aIndex_t)		{ return (*(TLunar_Calendar_Elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Lunar_Calendar_Elements_Line_1)))(aIndex_t); }

// LAF Table : Chinese Dictionary find pane text
inline TAknTextLineLayout Chinese_Dictionary_find_pane_text_Line_1()		{ return (*(TChinese_Dictionary_find_pane_text_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_text_Line_1)))(); }

inline TAknTextLineLayout Chinese_Dictionary_find_pane_text_Line_2()		{ return (*(TChinese_Dictionary_find_pane_text_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_text_Line_2)))(); }

inline TAknTextLineLayout Chinese_Dictionary_find_pane_text_Line_3()		{ return (*(TChinese_Dictionary_find_pane_text_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_text_Line_3)))(); }

inline TAknLayoutTableLimits Chinese_Dictionary_find_pane_text_Limits()		{ return (*(TChinese_Dictionary_find_pane_text_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_text_Limits)))(); }

inline TAknTextLineLayout Chinese_Dictionary_find_pane_text(TInt aLineIndex)		{ return (*(TChinese_Dictionary_find_pane_text_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_text)))(aLineIndex); }

// LAF Table : List pane text
inline TAknTextLineLayout List_pane_text_Line_1()		{ return (*(TList_pane_text_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_text_Line_1)))(); }

inline TAknTextLineLayout List_pane_text_Line_2()		{ return (*(TList_pane_text_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_text_Line_2)))(); }

inline TAknLayoutTableLimits List_pane_text_Limits()		{ return (*(TList_pane_text_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_text_Limits)))(); }

inline TAknTextLineLayout List_pane_text(TInt aLineIndex)		{ return (*(TList_pane_text_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_text)))(aLineIndex); }

// LAF Table : 
inline TAknWindowLineLayout List_pane_highlight__chi_dic__Line_1()		{ return (*(TList_pane_highlight__chi_dic__Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight__chi_dic__Line_1)))(); }

inline TAknWindowLineLayout List_pane_highlight__chi_dic__Line_2()		{ return (*(TList_pane_highlight__chi_dic__Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight__chi_dic__Line_2)))(); }

inline TAknLayoutTableLimits List_pane_highlight__chi_dic__Limits()		{ return (*(TList_pane_highlight__chi_dic__Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight__chi_dic__Limits)))(); }

inline TAknWindowLineLayout List_pane_highlight__chi_dic_(TInt aLineIndex)		{ return (*(TList_pane_highlight__chi_dic__sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_List_pane_highlight__chi_dic_)))(aLineIndex); }

// LAF Table : Chinese Dictionary find pane elements
inline TAknWindowLineLayout Chinese_Dictionary_find_pane_elements_Line_1()		{ return (*(TChinese_Dictionary_find_pane_elements_Line_1_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_elements_Line_1)))(); }

inline TAknWindowLineLayout Chinese_Dictionary_find_pane_elements_Line_2()		{ return (*(TChinese_Dictionary_find_pane_elements_Line_2_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_elements_Line_2)))(); }

inline TAknWindowLineLayout Chinese_Dictionary_find_pane_elements_Line_3()		{ return (*(TChinese_Dictionary_find_pane_elements_Line_3_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_elements_Line_3)))(); }

inline TAknLayoutTableLimits Chinese_Dictionary_find_pane_elements_Limits()		{ return (*(TChinese_Dictionary_find_pane_elements_Limits_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_elements_Limits)))(); }

inline TAknWindowLineLayout Chinese_Dictionary_find_pane_elements(TInt aLineIndex)		{ return (*(TChinese_Dictionary_find_pane_elements_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Chinese_Dictionary_find_pane_elements)))(aLineIndex); }

// LAF Table : List pane placing (chi,dic)
inline TAknWindowLineLayout list_chi_dic_pane(TInt aNumberOfLinesShown)		{ return (*(Tlist_chi_dic_pane_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_list_chi_dic_pane)))(aNumberOfLinesShown); }

// LAF Table : Find pane elements (pinb)
inline TAknWindowLineLayout Find_pane_elements__pinb__Line_5()		{ return (*(TFind_pane_elements__pinb__Line_5_sig*)(CdlEngine::GetFunction(KCdlInterfaceUid, EApiId_Find_pane_elements__pinb__Line_5)))(); }



class CInstance : public CCdlInstance
	{
public:
	enum { ETypeId = KCdlInterfaceUidValue };

	inline static const CInstance& CustomisationInstance()                                                    { return (const CInstance&)(CdlEngine::CustomisationInstance(KCdlInterfaceUid)); }
	inline static CInstance* NewL(const TCdlRef& aRef, const CCdlInstance* aSubLayer = NULL)                  { return (CInstance*) CCdlInstance::NewL(aRef, &KCdlInterface, aSubLayer); }
	inline static CInstance* NewLC(const TCdlRef& aRef, const CCdlInstance* aSubLayer = NULL)                 { return (CInstance*) CCdlInstance::NewLC(aRef, &KCdlInterface, aSubLayer); }
	inline static CInstance* NewL(const TDesC& aLibName, TInt aImplId, const CCdlInstance* aSubLayer = NULL)  { TCdlRef ref = { aImplId, { KCdlInterfaceUidValue }, &aLibName }; return NewL(ref, aSubLayer); }
	inline static CInstance* NewLC(const TDesC& aLibName, TInt aImplId, const CCdlInstance* aSubLayer = NULL) { TCdlRef ref = { aImplId, { KCdlInterfaceUidValue }, &aLibName }; return NewLC(ref, aSubLayer); }

	inline const CInstance* SubLayer()                                                                        { return static_cast<const CInstance*>(CCdlInstance::SubLayer()); }

// CDL API functions, as defined in appapaclayout.cdl

	// LAF Table : Real time view texts
	inline TAknTextLineLayout Real_time_view_texts_Line_1(TInt aIndex_B) const		{ return (*(TReal_time_view_texts_Line_1_sig*)(GetFunction(EApiId_Real_time_view_texts_Line_1)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Real_time_view_texts_Line_1(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Real_time_view_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Real_time_view_texts_Line_1)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Real_time_view_texts_Line_2(TInt aIndex_B) const		{ return (*(TReal_time_view_texts_Line_2_sig*)(GetFunction(EApiId_Real_time_view_texts_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Real_time_view_texts_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Real_time_view_texts_Line_2_sig*)(GetFunction(EApiId_Multiline_Real_time_view_texts_Line_2)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Real_time_view_texts_Line_3(TInt aCommon1) const		{ return (*(TReal_time_view_texts_Line_3_sig*)(GetFunction(EApiId_Real_time_view_texts_Line_3)))(aCommon1); }

	inline TAknTextLineLayout Real_time_view_texts_Line_4(TInt aCommon1) const		{ return (*(TReal_time_view_texts_Line_4_sig*)(GetFunction(EApiId_Real_time_view_texts_Line_4)))(aCommon1); }

	inline TAknTextLineLayout Real_time_view_texts_Line_5() const		{ return (*(TReal_time_view_texts_Line_5_sig*)(GetFunction(EApiId_Real_time_view_texts_Line_5)))(); }

	inline TAknLayoutTableLimits Real_time_view_texts_SUB_TABLE_0_Limits() const		{ return (*(TReal_time_view_texts_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Real_time_view_texts_SUB_TABLE_0_Limits)))(); }

	inline TAknTextLineLayout Real_time_view_texts_SUB_TABLE_0(TInt aLineIndex, TInt aIndex_B) const		{ return (*(TReal_time_view_texts_SUB_TABLE_0_sig*)(GetFunction(EApiId_Real_time_view_texts_SUB_TABLE_0)))(aLineIndex, aIndex_B); }

	inline TAknLayoutTableLimits Real_time_view_texts_SUB_TABLE_1_Limits() const		{ return (*(TReal_time_view_texts_SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Real_time_view_texts_SUB_TABLE_1_Limits)))(); }

	inline TAknTextLineLayout Real_time_view_texts_SUB_TABLE_1(TInt aLineIndex, TInt aCommon1) const		{ return (*(TReal_time_view_texts_SUB_TABLE_1_sig*)(GetFunction(EApiId_Real_time_view_texts_SUB_TABLE_1)))(aLineIndex, aCommon1); }

	// LAF Table : Alarm clock view texts
	inline TAknTextLineLayout Alarm_clock_view_texts_Line_1() const		{ return (*(TAlarm_clock_view_texts_Line_1_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_Line_1)))(); }

	inline TAknTextLineLayout Alarm_clock_view_texts_Line_2(TInt aCommon1) const		{ return (*(TAlarm_clock_view_texts_Line_2_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_Line_2)))(aCommon1); }

	inline TAknTextLineLayout Alarm_clock_view_texts_Line_3(TInt aCommon1) const		{ return (*(TAlarm_clock_view_texts_Line_3_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_Line_3)))(aCommon1); }

	inline TAknTextLineLayout Alarm_clock_view_texts_Line_4() const		{ return (*(TAlarm_clock_view_texts_Line_4_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_Line_4)))(); }

	inline TAknTextLineLayout Alarm_clock_view_texts_Line_5() const		{ return (*(TAlarm_clock_view_texts_Line_5_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_Line_5)))(); }

	inline TAknTextLineLayout Alarm_clock_view_texts_Line_6(TInt aIndex_B) const		{ return (*(TAlarm_clock_view_texts_Line_6_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_Line_6)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Alarm_clock_view_texts_Line_6(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Alarm_clock_view_texts_Line_6_sig*)(GetFunction(EApiId_Multiline_Alarm_clock_view_texts_Line_6)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Alarm_clock_view_texts_Line_7() const		{ return (*(TAlarm_clock_view_texts_Line_7_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_Line_7)))(); }

	inline TAknTextLineLayout Alarm_clock_view_texts_Line_8() const		{ return (*(TAlarm_clock_view_texts_Line_8_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_Line_8)))(); }

	inline TAknLayoutTableLimits Alarm_clock_view_texts_SUB_TABLE_0_Limits() const		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_SUB_TABLE_0_Limits)))(); }

	inline TAknTextLineLayout Alarm_clock_view_texts_SUB_TABLE_0(TInt aLineIndex, TInt aCommon1) const		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_0_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_SUB_TABLE_0)))(aLineIndex, aCommon1); }

	inline TAknLayoutTableLimits Alarm_clock_view_texts_SUB_TABLE_1_Limits() const		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_SUB_TABLE_1_Limits)))(); }

	inline TAknTextLineLayout Alarm_clock_view_texts_SUB_TABLE_1(TInt aLineIndex) const		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_1_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_SUB_TABLE_1)))(aLineIndex); }

	inline TAknLayoutTableLimits Alarm_clock_view_texts_SUB_TABLE_2_Limits() const		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_2_Limits_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_SUB_TABLE_2_Limits)))(); }

	inline TAknTextLineLayout Alarm_clock_view_texts_SUB_TABLE_2(TInt aLineIndex) const		{ return (*(TAlarm_clock_view_texts_SUB_TABLE_2_sig*)(GetFunction(EApiId_Alarm_clock_view_texts_SUB_TABLE_2)))(aLineIndex); }

	// LAF Table : Help text bolding
	inline TAknTextLineLayout Help_text_bolding_Line_1() const		{ return (*(THelp_text_bolding_Line_1_sig*)(GetFunction(EApiId_Help_text_bolding_Line_1)))(); }

	inline TAknTextLineLayout Help_text_bolding_Line_2() const		{ return (*(THelp_text_bolding_Line_2_sig*)(GetFunction(EApiId_Help_text_bolding_Line_2)))(); }

	inline TAknLayoutTableLimits Help_text_bolding_Limits() const		{ return (*(THelp_text_bolding_Limits_sig*)(GetFunction(EApiId_Help_text_bolding_Limits)))(); }

	inline TAknTextLineLayout Help_text_bolding(TInt aLineIndex) const		{ return (*(THelp_text_bolding_sig*)(GetFunction(EApiId_Help_text_bolding)))(aLineIndex); }

	// LAF Table : Chinese Dictionary text
	inline TAknTextLineLayout Chinese_Dictionary_text_Line_1() const		{ return (*(TChinese_Dictionary_text_Line_1_sig*)(GetFunction(EApiId_Chinese_Dictionary_text_Line_1)))(); }

	inline TAknTextLineLayout Chinese_Dictionary_text_Line_2() const		{ return (*(TChinese_Dictionary_text_Line_2_sig*)(GetFunction(EApiId_Chinese_Dictionary_text_Line_2)))(); }

	inline TAknTextLineLayout Chinese_Dictionary_text_Line_3(TInt aIndex_B) const		{ return (*(TChinese_Dictionary_text_Line_3_sig*)(GetFunction(EApiId_Chinese_Dictionary_text_Line_3)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Chinese_Dictionary_text_Line_3(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Chinese_Dictionary_text_Line_3_sig*)(GetFunction(EApiId_Multiline_Chinese_Dictionary_text_Line_3)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Chinese_Dictionary_text_Line_4(TInt aIndex_B) const		{ return (*(TChinese_Dictionary_text_Line_4_sig*)(GetFunction(EApiId_Chinese_Dictionary_text_Line_4)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Chinese_Dictionary_text_Line_4(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Chinese_Dictionary_text_Line_4_sig*)(GetFunction(EApiId_Multiline_Chinese_Dictionary_text_Line_4)))(aNumberOfLinesShown); }

	inline TAknLayoutTableLimits Chinese_Dictionary_text_SUB_TABLE_0_Limits() const		{ return (*(TChinese_Dictionary_text_SUB_TABLE_0_Limits_sig*)(GetFunction(EApiId_Chinese_Dictionary_text_SUB_TABLE_0_Limits)))(); }

	inline TAknTextLineLayout Chinese_Dictionary_text_SUB_TABLE_0(TInt aLineIndex) const		{ return (*(TChinese_Dictionary_text_SUB_TABLE_0_sig*)(GetFunction(EApiId_Chinese_Dictionary_text_SUB_TABLE_0)))(aLineIndex); }

	inline TAknLayoutTableLimits Chinese_Dictionary_text_SUB_TABLE_1_Limits() const		{ return (*(TChinese_Dictionary_text_SUB_TABLE_1_Limits_sig*)(GetFunction(EApiId_Chinese_Dictionary_text_SUB_TABLE_1_Limits)))(); }

	inline TAknTextLineLayout Chinese_Dictionary_text_SUB_TABLE_1(TInt aLineIndex, TInt aIndex_B) const		{ return (*(TChinese_Dictionary_text_SUB_TABLE_1_sig*)(GetFunction(EApiId_Chinese_Dictionary_text_SUB_TABLE_1)))(aLineIndex, aIndex_B); }

	// LAF Table : Chinese Dictionary elements and descendant panes
	inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes_Line_1() const		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Line_1_sig*)(GetFunction(EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_1)))(); }

	inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes_Line_2() const		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Line_2_sig*)(GetFunction(EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_2)))(); }

	inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes_Line_3() const		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Line_3_sig*)(GetFunction(EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_3)))(); }

	inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes_Line_4() const		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Line_4_sig*)(GetFunction(EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_4)))(); }

	inline TAknWindowLineLayout chi_dic_find_pane() const		{ return (*(Tchi_dic_find_pane_sig*)(GetFunction(EApiId_chi_dic_find_pane)))(); }

	inline TAknWindowLineLayout chi_dic_list_pane() const		{ return (*(Tchi_dic_list_pane_sig*)(GetFunction(EApiId_chi_dic_list_pane)))(); }

	inline TAknLayoutTableLimits Chinese_Dictionary_elements_and_descendant_panes_Limits() const		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_Limits_sig*)(GetFunction(EApiId_Chinese_Dictionary_elements_and_descendant_panes_Limits)))(); }

	inline TAknWindowLineLayout Chinese_Dictionary_elements_and_descendant_panes(TInt aLineIndex) const		{ return (*(TChinese_Dictionary_elements_and_descendant_panes_sig*)(GetFunction(EApiId_Chinese_Dictionary_elements_and_descendant_panes)))(aLineIndex); }

	// LAF Table : Incoming video call pop-up window texts
	inline TAknTextLineLayout Incoming_video_call_pop_up_window_texts_Line_1(TInt aCommon1, TInt aCommon2) const		{ return (*(TIncoming_video_call_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Incoming_video_call_pop_up_window_texts_Line_1)))(aCommon1, aCommon2); }

	inline TAknMultiLineTextLayout Multiline_Incoming_video_call_pop_up_window_texts_Line_1(TInt aCommon1, TInt aCommon2, TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Incoming_video_call_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_Multiline_Incoming_video_call_pop_up_window_texts_Line_1)))(aCommon1, aCommon2, aNumberOfLinesShown); }

	// LAF Table : First video call pop-up window texts
	inline TAknTextLineLayout First_video_call_pop_up_window_texts_Line_1() const		{ return (*(TFirst_video_call_pop_up_window_texts_Line_1_sig*)(GetFunction(EApiId_First_video_call_pop_up_window_texts_Line_1)))(); }

	// LAF Table : Lunar Calendar information layout
	inline TAknTextLineLayout Lunar_Calendar_information_layout_Line_1() const		{ return (*(TLunar_Calendar_information_layout_Line_1_sig*)(GetFunction(EApiId_Lunar_Calendar_information_layout_Line_1)))(); }

	inline TAknTextLineLayout Lunar_Calendar_information_layout_Line_2(TInt aIndex_B) const		{ return (*(TLunar_Calendar_information_layout_Line_2_sig*)(GetFunction(EApiId_Lunar_Calendar_information_layout_Line_2)))(aIndex_B); }

	inline TAknMultiLineTextLayout Multiline_Lunar_Calendar_information_layout_Line_2(TInt aNumberOfLinesShown) const		{ return (*(TMultiline_Lunar_Calendar_information_layout_Line_2_sig*)(GetFunction(EApiId_Multiline_Lunar_Calendar_information_layout_Line_2)))(aNumberOfLinesShown); }

	inline TAknTextLineLayout Lunar_Calendar_information_layout_Line_3() const		{ return (*(TLunar_Calendar_information_layout_Line_3_sig*)(GetFunction(EApiId_Lunar_Calendar_information_layout_Line_3)))(); }

	inline TAknWindowLineLayout Lunar_Calendar_Elements_Line_1(TInt aIndex_t) const		{ return (*(TLunar_Calendar_Elements_Line_1_sig*)(GetFunction(EApiId_Lunar_Calendar_Elements_Line_1)))(aIndex_t); }

	// LAF Table : Chinese Dictionary find pane text
	inline TAknTextLineLayout Chinese_Dictionary_find_pane_text_Line_1() const		{ return (*(TChinese_Dictionary_find_pane_text_Line_1_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_text_Line_1)))(); }

	inline TAknTextLineLayout Chinese_Dictionary_find_pane_text_Line_2() const		{ return (*(TChinese_Dictionary_find_pane_text_Line_2_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_text_Line_2)))(); }

	inline TAknTextLineLayout Chinese_Dictionary_find_pane_text_Line_3() const		{ return (*(TChinese_Dictionary_find_pane_text_Line_3_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_text_Line_3)))(); }

	inline TAknLayoutTableLimits Chinese_Dictionary_find_pane_text_Limits() const		{ return (*(TChinese_Dictionary_find_pane_text_Limits_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_text_Limits)))(); }

	inline TAknTextLineLayout Chinese_Dictionary_find_pane_text(TInt aLineIndex) const		{ return (*(TChinese_Dictionary_find_pane_text_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_text)))(aLineIndex); }

	// LAF Table : List pane text
	inline TAknTextLineLayout List_pane_text_Line_1() const		{ return (*(TList_pane_text_Line_1_sig*)(GetFunction(EApiId_List_pane_text_Line_1)))(); }

	inline TAknTextLineLayout List_pane_text_Line_2() const		{ return (*(TList_pane_text_Line_2_sig*)(GetFunction(EApiId_List_pane_text_Line_2)))(); }

	inline TAknLayoutTableLimits List_pane_text_Limits() const		{ return (*(TList_pane_text_Limits_sig*)(GetFunction(EApiId_List_pane_text_Limits)))(); }

	inline TAknTextLineLayout List_pane_text(TInt aLineIndex) const		{ return (*(TList_pane_text_sig*)(GetFunction(EApiId_List_pane_text)))(aLineIndex); }

	// LAF Table : 
	inline TAknWindowLineLayout List_pane_highlight__chi_dic__Line_1() const		{ return (*(TList_pane_highlight__chi_dic__Line_1_sig*)(GetFunction(EApiId_List_pane_highlight__chi_dic__Line_1)))(); }

	inline TAknWindowLineLayout List_pane_highlight__chi_dic__Line_2() const		{ return (*(TList_pane_highlight__chi_dic__Line_2_sig*)(GetFunction(EApiId_List_pane_highlight__chi_dic__Line_2)))(); }

	inline TAknLayoutTableLimits List_pane_highlight__chi_dic__Limits() const		{ return (*(TList_pane_highlight__chi_dic__Limits_sig*)(GetFunction(EApiId_List_pane_highlight__chi_dic__Limits)))(); }

	inline TAknWindowLineLayout List_pane_highlight__chi_dic_(TInt aLineIndex) const		{ return (*(TList_pane_highlight__chi_dic__sig*)(GetFunction(EApiId_List_pane_highlight__chi_dic_)))(aLineIndex); }

	// LAF Table : Chinese Dictionary find pane elements
	inline TAknWindowLineLayout Chinese_Dictionary_find_pane_elements_Line_1() const		{ return (*(TChinese_Dictionary_find_pane_elements_Line_1_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_elements_Line_1)))(); }

	inline TAknWindowLineLayout Chinese_Dictionary_find_pane_elements_Line_2() const		{ return (*(TChinese_Dictionary_find_pane_elements_Line_2_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_elements_Line_2)))(); }

	inline TAknWindowLineLayout Chinese_Dictionary_find_pane_elements_Line_3() const		{ return (*(TChinese_Dictionary_find_pane_elements_Line_3_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_elements_Line_3)))(); }

	inline TAknLayoutTableLimits Chinese_Dictionary_find_pane_elements_Limits() const		{ return (*(TChinese_Dictionary_find_pane_elements_Limits_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_elements_Limits)))(); }

	inline TAknWindowLineLayout Chinese_Dictionary_find_pane_elements(TInt aLineIndex) const		{ return (*(TChinese_Dictionary_find_pane_elements_sig*)(GetFunction(EApiId_Chinese_Dictionary_find_pane_elements)))(aLineIndex); }

	// LAF Table : List pane placing (chi,dic)
	inline TAknWindowLineLayout list_chi_dic_pane(TInt aNumberOfLinesShown) const		{ return (*(Tlist_chi_dic_pane_sig*)(GetFunction(EApiId_list_chi_dic_pane)))(aNumberOfLinesShown); }

	// LAF Table : Find pane elements (pinb)
	inline TAknWindowLineLayout Find_pane_elements__pinb__Line_5() const		{ return (*(TFind_pane_elements__pinb__Line_5_sig*)(GetFunction(EApiId_Find_pane_elements__pinb__Line_5)))(); }

private:
	CInstance();
	};

} // end of namespace AppApacLayout
#endif // APPAPACLAYOUT_CDL

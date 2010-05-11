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

// It contains common definitions for the client and customisation API.
// It should not be modified manually.

#ifndef APPAPACLAYOUT_CDL_COMMON_H
#define APPAPACLAYOUT_CDL_COMMON_H


#include <AknLayout2Def.h>


namespace AppApacLayout
{
#include "appapaclayout.cdl.common.hrh"

// These constants are defined by the CDL interface: AppApacLayout
_LIT(KCdlName, "AppApacLayout");
const TInt KCdlInterfaceUidValue = _CDL_AppApacLayout_KCdlInterfaceUidValue;
const TUid KCdlInterfaceUid = { KCdlInterfaceUidValue };
const TInt KCdlInterfaceMajorVersion = 1;
const TInt KCdlInterfaceMinorVersion = 0;
const TUint KCdlInterfaceFlags = KCdlFlagRomOnly;

// These are the API ids used in this interface.
enum TApiId
	{
	EApiId_Real_time_view_texts_Line_1,
	EApiId_Multiline_Real_time_view_texts_Line_1,
	EApiId_Real_time_view_texts_Line_2,
	EApiId_Multiline_Real_time_view_texts_Line_2,
	EApiId_Real_time_view_texts_Line_3,
	EApiId_Real_time_view_texts_Line_4,
	EApiId_Real_time_view_texts_Line_5,
	EApiId_Real_time_view_texts_SUB_TABLE_0_Limits,
	EApiId_Real_time_view_texts_SUB_TABLE_0,
	EApiId_Real_time_view_texts_SUB_TABLE_1_Limits,
	EApiId_Real_time_view_texts_SUB_TABLE_1,
	EApiId_Alarm_clock_view_texts_Line_1,
	EApiId_Alarm_clock_view_texts_Line_2,
	EApiId_Alarm_clock_view_texts_Line_3,
	EApiId_Alarm_clock_view_texts_Line_4,
	EApiId_Alarm_clock_view_texts_Line_5,
	EApiId_Alarm_clock_view_texts_Line_6,
	EApiId_Multiline_Alarm_clock_view_texts_Line_6,
	EApiId_Alarm_clock_view_texts_Line_7,
	EApiId_Alarm_clock_view_texts_Line_8,
	EApiId_Alarm_clock_view_texts_SUB_TABLE_0_Limits,
	EApiId_Alarm_clock_view_texts_SUB_TABLE_0,
	EApiId_Alarm_clock_view_texts_SUB_TABLE_1_Limits,
	EApiId_Alarm_clock_view_texts_SUB_TABLE_1,
	EApiId_Alarm_clock_view_texts_SUB_TABLE_2_Limits,
	EApiId_Alarm_clock_view_texts_SUB_TABLE_2,
	EApiId_Help_text_bolding_Line_1,
	EApiId_Help_text_bolding_Line_2,
	EApiId_Help_text_bolding_Limits,
	EApiId_Help_text_bolding,
	EApiId_Chinese_Dictionary_text_Line_1,
	EApiId_Chinese_Dictionary_text_Line_2,
	EApiId_Chinese_Dictionary_text_Line_3,
	EApiId_Multiline_Chinese_Dictionary_text_Line_3,
	EApiId_Chinese_Dictionary_text_Line_4,
	EApiId_Multiline_Chinese_Dictionary_text_Line_4,
	EApiId_Chinese_Dictionary_text_SUB_TABLE_0_Limits,
	EApiId_Chinese_Dictionary_text_SUB_TABLE_0,
	EApiId_Chinese_Dictionary_text_SUB_TABLE_1_Limits,
	EApiId_Chinese_Dictionary_text_SUB_TABLE_1,
	EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_1,
	EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_2,
	EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_3,
	EApiId_Chinese_Dictionary_elements_and_descendant_panes_Line_4,
	EApiId_chi_dic_find_pane,
	EApiId_chi_dic_list_pane,
	EApiId_Chinese_Dictionary_elements_and_descendant_panes_Limits,
	EApiId_Chinese_Dictionary_elements_and_descendant_panes,
	EApiId_Incoming_video_call_pop_up_window_texts_Line_1,
	EApiId_Multiline_Incoming_video_call_pop_up_window_texts_Line_1,
	EApiId_First_video_call_pop_up_window_texts_Line_1,
	EApiId_Lunar_Calendar_information_layout_Line_1,
	EApiId_Lunar_Calendar_information_layout_Line_2,
	EApiId_Multiline_Lunar_Calendar_information_layout_Line_2,
	EApiId_Lunar_Calendar_information_layout_Line_3,
	EApiId_Lunar_Calendar_Elements_Line_1,
	EApiId_Chinese_Dictionary_find_pane_text_Line_1,
	EApiId_Chinese_Dictionary_find_pane_text_Line_2,
	EApiId_Chinese_Dictionary_find_pane_text_Line_3,
	EApiId_Chinese_Dictionary_find_pane_text_Limits,
	EApiId_Chinese_Dictionary_find_pane_text,
	EApiId_List_pane_text_Line_1,
	EApiId_List_pane_text_Line_2,
	EApiId_List_pane_text_Limits,
	EApiId_List_pane_text,
	EApiId_List_pane_highlight__chi_dic__Line_1,
	EApiId_List_pane_highlight__chi_dic__Line_2,
	EApiId_List_pane_highlight__chi_dic__Limits,
	EApiId_List_pane_highlight__chi_dic_,
	EApiId_Chinese_Dictionary_find_pane_elements_Line_1,
	EApiId_Chinese_Dictionary_find_pane_elements_Line_2,
	EApiId_Chinese_Dictionary_find_pane_elements_Line_3,
	EApiId_Chinese_Dictionary_find_pane_elements_Limits,
	EApiId_Chinese_Dictionary_find_pane_elements,
	EApiId_list_chi_dic_pane,
	EApiId_Find_pane_elements__pinb__Line_5,
	E_TApiId_TableSize
	};

// This is the CDL interface definition for this interface
const SCdlInterface KCdlInterface =
	{
	KCdlCompilerMajorVersion,
	KCdlCompilerMinorVersion,
	LIT_AS_DESC_PTR(KCdlName),
	{ KCdlInterfaceUidValue },
	KCdlInterfaceMajorVersion,
	KCdlInterfaceMinorVersion,
	KCdlInterfaceFlags,
	E_TApiId_TableSize
	};

// These typedefs define the types for function APIs
typedef TAknTextLineLayout (TReal_time_view_texts_Line_1_sig)(TInt);
typedef TAknMultiLineTextLayout (TMultiline_Real_time_view_texts_Line_1_sig)(TInt);
typedef TAknTextLineLayout (TReal_time_view_texts_Line_2_sig)(TInt);
typedef TAknMultiLineTextLayout (TMultiline_Real_time_view_texts_Line_2_sig)(TInt);
typedef TAknTextLineLayout (TReal_time_view_texts_Line_3_sig)(TInt);
typedef TAknTextLineLayout (TReal_time_view_texts_Line_4_sig)(TInt);
typedef TAknTextLineLayout (TReal_time_view_texts_Line_5_sig)();
typedef TAknLayoutTableLimits (TReal_time_view_texts_SUB_TABLE_0_Limits_sig)();
typedef TAknTextLineLayout (TReal_time_view_texts_SUB_TABLE_0_sig)(TInt, TInt);
typedef TAknLayoutTableLimits (TReal_time_view_texts_SUB_TABLE_1_Limits_sig)();
typedef TAknTextLineLayout (TReal_time_view_texts_SUB_TABLE_1_sig)(TInt, TInt);
typedef TAknTextLineLayout (TAlarm_clock_view_texts_Line_1_sig)();
typedef TAknTextLineLayout (TAlarm_clock_view_texts_Line_2_sig)(TInt);
typedef TAknTextLineLayout (TAlarm_clock_view_texts_Line_3_sig)(TInt);
typedef TAknTextLineLayout (TAlarm_clock_view_texts_Line_4_sig)();
typedef TAknTextLineLayout (TAlarm_clock_view_texts_Line_5_sig)();
typedef TAknTextLineLayout (TAlarm_clock_view_texts_Line_6_sig)(TInt);
typedef TAknMultiLineTextLayout (TMultiline_Alarm_clock_view_texts_Line_6_sig)(TInt);
typedef TAknTextLineLayout (TAlarm_clock_view_texts_Line_7_sig)();
typedef TAknTextLineLayout (TAlarm_clock_view_texts_Line_8_sig)();
typedef TAknLayoutTableLimits (TAlarm_clock_view_texts_SUB_TABLE_0_Limits_sig)();
typedef TAknTextLineLayout (TAlarm_clock_view_texts_SUB_TABLE_0_sig)(TInt, TInt);
typedef TAknLayoutTableLimits (TAlarm_clock_view_texts_SUB_TABLE_1_Limits_sig)();
typedef TAknTextLineLayout (TAlarm_clock_view_texts_SUB_TABLE_1_sig)(TInt);
typedef TAknLayoutTableLimits (TAlarm_clock_view_texts_SUB_TABLE_2_Limits_sig)();
typedef TAknTextLineLayout (TAlarm_clock_view_texts_SUB_TABLE_2_sig)(TInt);
typedef TAknTextLineLayout (THelp_text_bolding_Line_1_sig)();
typedef TAknTextLineLayout (THelp_text_bolding_Line_2_sig)();
typedef TAknLayoutTableLimits (THelp_text_bolding_Limits_sig)();
typedef TAknTextLineLayout (THelp_text_bolding_sig)(TInt);
typedef TAknTextLineLayout (TChinese_Dictionary_text_Line_1_sig)();
typedef TAknTextLineLayout (TChinese_Dictionary_text_Line_2_sig)();
typedef TAknTextLineLayout (TChinese_Dictionary_text_Line_3_sig)(TInt);
typedef TAknMultiLineTextLayout (TMultiline_Chinese_Dictionary_text_Line_3_sig)(TInt);
typedef TAknTextLineLayout (TChinese_Dictionary_text_Line_4_sig)(TInt);
typedef TAknMultiLineTextLayout (TMultiline_Chinese_Dictionary_text_Line_4_sig)(TInt);
typedef TAknLayoutTableLimits (TChinese_Dictionary_text_SUB_TABLE_0_Limits_sig)();
typedef TAknTextLineLayout (TChinese_Dictionary_text_SUB_TABLE_0_sig)(TInt);
typedef TAknLayoutTableLimits (TChinese_Dictionary_text_SUB_TABLE_1_Limits_sig)();
typedef TAknTextLineLayout (TChinese_Dictionary_text_SUB_TABLE_1_sig)(TInt, TInt);
typedef TAknWindowLineLayout (TChinese_Dictionary_elements_and_descendant_panes_Line_1_sig)();
typedef TAknWindowLineLayout (TChinese_Dictionary_elements_and_descendant_panes_Line_2_sig)();
typedef TAknWindowLineLayout (TChinese_Dictionary_elements_and_descendant_panes_Line_3_sig)();
typedef TAknWindowLineLayout (TChinese_Dictionary_elements_and_descendant_panes_Line_4_sig)();
typedef TAknWindowLineLayout (Tchi_dic_find_pane_sig)();
typedef TAknWindowLineLayout (Tchi_dic_list_pane_sig)();
typedef TAknLayoutTableLimits (TChinese_Dictionary_elements_and_descendant_panes_Limits_sig)();
typedef TAknWindowLineLayout (TChinese_Dictionary_elements_and_descendant_panes_sig)(TInt);
typedef TAknTextLineLayout (TIncoming_video_call_pop_up_window_texts_Line_1_sig)(TInt, TInt);
typedef TAknMultiLineTextLayout (TMultiline_Incoming_video_call_pop_up_window_texts_Line_1_sig)(TInt, TInt, TInt);
typedef TAknTextLineLayout (TFirst_video_call_pop_up_window_texts_Line_1_sig)();
typedef TAknTextLineLayout (TLunar_Calendar_information_layout_Line_1_sig)();
typedef TAknTextLineLayout (TLunar_Calendar_information_layout_Line_2_sig)(TInt);
typedef TAknMultiLineTextLayout (TMultiline_Lunar_Calendar_information_layout_Line_2_sig)(TInt);
typedef TAknTextLineLayout (TLunar_Calendar_information_layout_Line_3_sig)();
typedef TAknWindowLineLayout (TLunar_Calendar_Elements_Line_1_sig)(TInt);
typedef TAknTextLineLayout (TChinese_Dictionary_find_pane_text_Line_1_sig)();
typedef TAknTextLineLayout (TChinese_Dictionary_find_pane_text_Line_2_sig)();
typedef TAknTextLineLayout (TChinese_Dictionary_find_pane_text_Line_3_sig)();
typedef TAknLayoutTableLimits (TChinese_Dictionary_find_pane_text_Limits_sig)();
typedef TAknTextLineLayout (TChinese_Dictionary_find_pane_text_sig)(TInt);
typedef TAknTextLineLayout (TList_pane_text_Line_1_sig)();
typedef TAknTextLineLayout (TList_pane_text_Line_2_sig)();
typedef TAknLayoutTableLimits (TList_pane_text_Limits_sig)();
typedef TAknTextLineLayout (TList_pane_text_sig)(TInt);
typedef TAknWindowLineLayout (TList_pane_highlight__chi_dic__Line_1_sig)();
typedef TAknWindowLineLayout (TList_pane_highlight__chi_dic__Line_2_sig)();
typedef TAknLayoutTableLimits (TList_pane_highlight__chi_dic__Limits_sig)();
typedef TAknWindowLineLayout (TList_pane_highlight__chi_dic__sig)(TInt);
typedef TAknWindowLineLayout (TChinese_Dictionary_find_pane_elements_Line_1_sig)();
typedef TAknWindowLineLayout (TChinese_Dictionary_find_pane_elements_Line_2_sig)();
typedef TAknWindowLineLayout (TChinese_Dictionary_find_pane_elements_Line_3_sig)();
typedef TAknLayoutTableLimits (TChinese_Dictionary_find_pane_elements_Limits_sig)();
typedef TAknWindowLineLayout (TChinese_Dictionary_find_pane_elements_sig)(TInt);
typedef TAknWindowLineLayout (Tlist_chi_dic_pane_sig)(TInt);
typedef TAknWindowLineLayout (TFind_pane_elements__pinb__Line_5_sig)();

} // end of namespace AppApacLayout

#endif // APPAPACLAYOUT_CDL_COMMON_H

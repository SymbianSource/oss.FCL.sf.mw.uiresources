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

// This customisation implements the interface defined in AknLayoutScalable_Avkon.cdl

#include "aknlayoutscalable_elaf_phl_av_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x00000000 };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLRVC(TInt aLineIndex, TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextTableLRVC(&KImplData, aLineIndex, aRow, aVariety, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize] =
	{
0xb570,	// (0x0000b570) Screen

0xb57c,	// (0x0000b57c) application_window_ParamLimits

0xb57c,	// (0x0000b57c) application_window

0x002e,	// (0x0000002e) screen_g1

0xb5b4,	// (0x0000b5b4) area_bottom_pane_ParamLimits

0xb5b4,	// (0x0000b5b4) area_bottom_pane

0x0144,	// (0x00000144) area_top_pane_ParamLimits

0x0144,	// (0x00000144) area_top_pane

0x01d8,	// (0x000001d8) main_pane_ParamLimits

0x01d8,	// (0x000001d8) main_pane

0x0293,	// (0x00000293) misc_graphics

0xcccc,	// (0x0000cccc) battery_pane_ParamLimits

0xcccc,	// (0x0000cccc) battery_pane

0x4151,	// (0x00004151) bg_status_flat_pane_g8

0x4159,	// (0x00004159) bg_status_flat_pane_g9

0x32a6,	// (0x000032a6) context_pane_ParamLimits

0x32a6,	// (0x000032a6) context_pane

0xce37,	// (0x0000ce37) navi_pane_ParamLimits

0xce37,	// (0x0000ce37) navi_pane

0xceb5,	// (0x0000ceb5) signal_pane_ParamLimits

0xceb5,	// (0x0000ceb5) signal_pane

0x0008,

0xaedb,	// (0x0000aedb) bg_status_flat_pane_g

0xcf45,	// (0x0000cf45) status_pane_g1_ParamLimits

0xcf45,	// (0x0000cf45) status_pane_g1

0xcf5b,	// (0x0000cf5b) status_pane_g2_ParamLimits

0xcf5b,	// (0x0000cf5b) status_pane_g2

0x34cd,	// (0x000034cd) status_pane_g3_ParamLimits

0x34cd,	// (0x000034cd) status_pane_g3

0x0004,

0xf3a4,	// (0x0000f3a4) status_pane_g_ParamLimits

0xf3a4,	// (0x0000f3a4) status_pane_g

0xcf67,	// (0x0000cf67) title_pane_ParamLimits

0xcf67,	// (0x0000cf67) title_pane

0xcfca,	// (0x0000cfca) uni_indicator_pane_ParamLimits

0xcfca,	// (0x0000cfca) uni_indicator_pane

0x2b3a,	// (0x00002b3a) bg_list_pane_ParamLimits

0x2b3a,	// (0x00002b3a) bg_list_pane

0xc56f,	// (0x0000c56f) find_pane

0xc577,	// (0x0000c577) listscroll_app_pane_ParamLimits

0xc577,	// (0x0000c577) listscroll_app_pane

0x2b73,	// (0x00002b73) listscroll_form_pane

0xc58b,	// (0x0000c58b) listscroll_gen_pane_ParamLimits

0xc58b,	// (0x0000c58b) listscroll_gen_pane

0x2b8f,	// (0x00002b8f) listscroll_set_pane

0x4f26,	// (0x00004f26) main_idle_act_pane

0x2617,	// (0x00002617) main_idle_trad_pane

0x2617,	// (0x00002617) main_list_empty_pane

0x2ba9,	// (0x00002ba9) main_midp_pane

0x2bb5,	// (0x00002bb5) main_pane_g1_ParamLimits

0x2bb5,	// (0x00002bb5) main_pane_g1

0xc59f,	// (0x0000c59f) popup_ai_message_window_ParamLimits

0xc59f,	// (0x0000c59f) popup_ai_message_window

0xc630,	// (0x0000c630) popup_fep_china_uni_window_ParamLimits

0xc630,	// (0x0000c630) popup_fep_china_uni_window

0x2ccd,	// (0x00002ccd) popup_fep_japan_candidate_window_ParamLimits

0x2ccd,	// (0x00002ccd) popup_fep_japan_candidate_window

0x2ced,	// (0x00002ced) popup_fep_japan_predictive_window_ParamLimits

0x2ced,	// (0x00002ced) popup_fep_japan_predictive_window

0xc68c,	// (0x0000c68c) popup_find_window

0xc6a9,	// (0x0000c6a9) popup_grid_graphic_window_ParamLimits

0xc6a9,	// (0x0000c6a9) popup_grid_graphic_window

0x2d54,	// (0x00002d54) popup_large_graphic_colour_window

0xc747,	// (0x0000c747) popup_menu_window_ParamLimits

0xc747,	// (0x0000c747) popup_menu_window

0xc919,	// (0x0000c919) popup_note_image_window

0xc8df,	// (0x0000c8df) popup_note_wait_window_ParamLimits

0xc8df,	// (0x0000c8df) popup_note_wait_window

0xc931,	// (0x0000c931) popup_note_window_ParamLimits

0xc931,	// (0x0000c931) popup_note_window

0xc9d7,	// (0x0000c9d7) popup_query_code_window_ParamLimits

0xc9d7,	// (0x0000c9d7) popup_query_code_window

0x2f9c,	// (0x00002f9c) popup_query_data_code_window_ParamLimits

0x2f9c,	// (0x00002f9c) popup_query_data_code_window

0xca11,	// (0x0000ca11) popup_query_data_window_ParamLimits

0xca11,	// (0x0000ca11) popup_query_data_window

0xca93,	// (0x0000ca93) popup_query_sat_info_window_ParamLimits

0xca93,	// (0x0000ca93) popup_query_sat_info_window

0xcb2a,	// (0x0000cb2a) popup_snote_single_graphic_window_ParamLimits

0xcb2a,	// (0x0000cb2a) popup_snote_single_graphic_window

0xcb2a,	// (0x0000cb2a) popup_snote_single_text_window_ParamLimits

0xcb2a,	// (0x0000cb2a) popup_snote_single_text_window

0x3023,	// (0x00003023) popup_sub_window_general

0x3153,	// (0x00003153) popup_window_general_ParamLimits

0x3153,	// (0x00003153) popup_window_general

0x3168,	// (0x00003168) power_save_pane

0xc3cd,	// (0x0000c3cd) control_pane_g1_ParamLimits

0xc3cd,	// (0x0000c3cd) control_pane_g1

0xc3f6,	// (0x0000c3f6) control_pane_g2_ParamLimits

0xc3f6,	// (0x0000c3f6) control_pane_g2

0x29d5,	// (0x000029d5) control_pane_g3_ParamLimits

0x29d5,	// (0x000029d5) control_pane_g3

0x0007,

0xf38c,	// (0x0000f38c) control_pane_g_ParamLimits

0xf38c,	// (0x0000f38c) control_pane_g

0xc45e,	// (0x0000c45e) control_pane_t1_ParamLimits

0xc45e,	// (0x0000c45e) control_pane_t1

0xc4c4,	// (0x0000c4c4) control_pane_t2_ParamLimits

0xc4c4,	// (0x0000c4c4) control_pane_t2

0x0002,

0xf39d,	// (0x0000f39d) control_pane_t_ParamLimits

0xf39d,	// (0x0000f39d) control_pane_t

0xc326,	// (0x0000c326) navi_navi_volume_pane_cp1

0xc32e,	// (0x0000c32e) status_small_icon_pane

0x28bc,	// (0x000028bc) status_small_pane_g1_ParamLimits

0x28bc,	// (0x000028bc) status_small_pane_g1

0xc336,	// (0x0000c336) status_small_pane_g2_ParamLimits

0xc336,	// (0x0000c336) status_small_pane_g2

0xc342,	// (0x0000c342) status_small_pane_g3_ParamLimits

0xc342,	// (0x0000c342) status_small_pane_g3

0xc34e,	// (0x0000c34e) status_small_pane_g4_ParamLimits

0xc34e,	// (0x0000c34e) status_small_pane_g4

0xc35a,	// (0x0000c35a) status_small_pane_g5_ParamLimits

0xc35a,	// (0x0000c35a) status_small_pane_g5

0xc368,	// (0x0000c368) status_small_pane_g6_ParamLimits

0xc368,	// (0x0000c368) status_small_pane_g6

0x0007,

0xf37b,	// (0x0000f37b) status_small_pane_g_ParamLimits

0xf37b,	// (0x0000f37b) status_small_pane_g

0xc397,	// (0x0000c397) status_small_pane_t1

0xc3b9,	// (0x0000c3b9) status_small_wait_pane_ParamLimits

0xc3b9,	// (0x0000c3b9) status_small_wait_pane

0xc160,	// (0x0000c160) aid_levels_signal_ParamLimits

0xc160,	// (0x0000c160) aid_levels_signal

0xc178,	// (0x0000c178) signal_pane_g1_ParamLimits

0xc178,	// (0x0000c178) signal_pane_g1

0xc193,	// (0x0000c193) signal_pane_g2_ParamLimits

0xc193,	// (0x0000c193) signal_pane_g2

0x0003,

0xf35b,	// (0x0000f35b) signal_pane_g_ParamLimits

0xf35b,	// (0x0000f35b) signal_pane_g

0x1ebe,	// (0x00001ebe) context_pane_g1

0xb792,	// (0x0000b792) title_pane_g1

0xb7c9,	// (0x0000b7c9) title_pane_t1

0x04cf,	// (0x000004cf) title_pane_t2

0x04f5,	// (0x000004f5) title_pane_t3

0x0002,

0xf288,	// (0x0000f288) title_pane_t

0xcff2,	// (0x0000cff2) aid_levels_battery_ParamLimits

0xcff2,	// (0x0000cff2) aid_levels_battery

0xd00e,	// (0x0000d00e) battery_pane_g1_ParamLimits

0xd00e,	// (0x0000d00e) battery_pane_g1

0xd02b,	// (0x0000d02b) battery_pane_g2_ParamLimits

0xd02b,	// (0x0000d02b) battery_pane_g2

0x0001,

0xf3af,	// (0x0000f3af) battery_pane_g_ParamLimits

0xf3af,	// (0x0000f3af) battery_pane_g

0xd274,	// (0x0000d274) uni_indicator_pane_g1

0xd28a,	// (0x0000d28a) uni_indicator_pane_g2

0xd2a0,	// (0x0000d2a0) uni_indicator_pane_g3

0x0005,

0xf3e6,	// (0x0000f3e6) uni_indicator_pane_g

0x2489,	// (0x00002489) navi_icon_pane_ParamLimits

0x2489,	// (0x00002489) navi_icon_pane

0x23c7,	// (0x000023c7) navi_midp_pane

0x24a5,	// (0x000024a5) navi_navi_pane

0x24af,	// (0x000024af) navi_text_pane_ParamLimits

0x24af,	// (0x000024af) navi_text_pane

0x002e,	// (0x0000002e) status_small_wait_pane_g1

0x09cf,	// (0x000009cf) status_small_wait_pane_g2

0x0001,

0xaf7e,	// (0x0000af7e) status_small_wait_pane_g

0x4910,	// (0x00004910) navi_navi_icon_text_pane

0x4918,	// (0x00004918) navi_navi_pane_g1_ParamLimits

0x4918,	// (0x00004918) navi_navi_pane_g1

0x492a,	// (0x0000492a) navi_navi_pane_g2_ParamLimits

0x492a,	// (0x0000492a) navi_navi_pane_g2

0x0001,

0xaf4c,	// (0x0000af4c) navi_navi_pane_g_ParamLimits

0xaf4c,	// (0x0000af4c) navi_navi_pane_g

0x493c,	// (0x0000493c) navi_navi_tabs_pane

0x4945,	// (0x00004945) navi_navi_text_pane

0x4910,	// (0x00004910) navi_navi_volume_pane

0x48ec,	// (0x000048ec) navi_text_pane_t1

0x48e0,	// (0x000048e0) navi_icon_pane_g1

0x4833,	// (0x00004833) navi_navi_text_pane_t1

0x4822,	// (0x00004822) navi_navi_volume_pane_g1

0x482a,	// (0x0000482a) volume_small_pane

0x4788,	// (0x00004788) navi_navi_icon_text_pane_g1

0x4790,	// (0x00004790) navi_navi_icon_text_pane_t1

0x24a5,	// (0x000024a5) navi_tabs_2_long_pane

0x24a5,	// (0x000024a5) navi_tabs_2_pane

0x24a5,	// (0x000024a5) navi_tabs_3_long_pane

0x24a5,	// (0x000024a5) navi_tabs_3_pane

0x24a5,	// (0x000024a5) navi_tabs_4_pane

0x46e7,	// (0x000046e7) tabs_2_active_pane_ParamLimits

0x46e7,	// (0x000046e7) tabs_2_active_pane

0x46f7,	// (0x000046f7) tabs_2_passive_pane_ParamLimits

0x46f7,	// (0x000046f7) tabs_2_passive_pane

0x46b5,	// (0x000046b5) tabs_3_active_pane_ParamLimits

0x46b5,	// (0x000046b5) tabs_3_active_pane

0x46c5,	// (0x000046c5) tabs_3_passive_pane_ParamLimits

0x46c5,	// (0x000046c5) tabs_3_passive_pane

0x46d6,	// (0x000046d6) tabs_3_passive_pane_cp_ParamLimits

0x46d6,	// (0x000046d6) tabs_3_passive_pane_cp

0x4671,	// (0x00004671) tabs_4_active_pane_ParamLimits

0x4671,	// (0x00004671) tabs_4_active_pane

0x4682,	// (0x00004682) tabs_4_passive_pane_ParamLimits

0x4682,	// (0x00004682) tabs_4_passive_pane

0x4693,	// (0x00004693) tabs_4_passive_pane_cp_ParamLimits

0x4693,	// (0x00004693) tabs_4_passive_pane_cp

0x46a4,	// (0x000046a4) tabs_4_passive_pane_cp2_ParamLimits

0x46a4,	// (0x000046a4) tabs_4_passive_pane_cp2

0x464d,	// (0x0000464d) tabs_2_long_active_pane_ParamLimits

0x464d,	// (0x0000464d) tabs_2_long_active_pane

0x465f,	// (0x0000465f) tabs_2_long_passive_pane_ParamLimits

0x465f,	// (0x0000465f) tabs_2_long_passive_pane

0x460e,	// (0x0000460e) tabs_3_long_active_pane_ParamLimits

0x460e,	// (0x0000460e) tabs_3_long_active_pane

0x4621,	// (0x00004621) tabs_3_long_passive_pane_ParamLimits

0x4621,	// (0x00004621) tabs_3_long_passive_pane

0x463a,	// (0x0000463a) tabs_3_long_passive_pane_cp_ParamLimits

0x463a,	// (0x0000463a) tabs_3_long_passive_pane_cp

0x45b4,	// (0x000045b4) volume_small_pane_g1

0x45bd,	// (0x000045bd) volume_small_pane_g2

0x45c6,	// (0x000045c6) volume_small_pane_g3

0x45cf,	// (0x000045cf) volume_small_pane_g4

0x45d8,	// (0x000045d8) volume_small_pane_g5

0x45e1,	// (0x000045e1) volume_small_pane_g6

0x45ea,	// (0x000045ea) volume_small_pane_g7

0x45f3,	// (0x000045f3) volume_small_pane_g8

0x45fc,	// (0x000045fc) volume_small_pane_g9

0x4605,	// (0x00004605) volume_small_pane_g10

0x0009,

0xaf18,	// (0x0000af18) volume_small_pane_g

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_active_pane_g1

0xb855,	// (0x0000b855) tabs_3_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp2

0x0515,	// (0x00000515) tabs_3_passive_pane_g1

0xb855,	// (0x0000b855) tabs_3_passive_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_active_pane_g1

0xb867,	// (0x0000b867) tabs_4_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp3

0x052f,	// (0x0000052f) tabs_4_1_passive_pane_g1

0xb867,	// (0x0000b867) tabs_4_1_passive_pane_t1

0x2ba9,	// (0x00002ba9) list_highlight_pane_cp2

0xd338,	// (0x0000d338) list_set_pane_ParamLimits

0xd338,	// (0x0000d338) list_set_pane

0xd3d2,	// (0x0000d3d2) main_pane_set_t1_ParamLimits

0xd3d2,	// (0x0000d3d2) main_pane_set_t1

0xd3f2,	// (0x0000d3f2) main_pane_set_t2_ParamLimits

0xd3f2,	// (0x0000d3f2) main_pane_set_t2

0xd406,	// (0x0000d406) main_pane_set_t3_ParamLimits

0xd406,	// (0x0000d406) main_pane_set_t3

0xd418,	// (0x0000d418) main_pane_set_t4_ParamLimits

0xd418,	// (0x0000d418) main_pane_set_t4

0x0003,

0xf3f8,	// (0x0000f3f8) main_pane_set_t_ParamLimits

0xf3f8,	// (0x0000f3f8) main_pane_set_t

0xd42a,	// (0x0000d42a) setting_code_pane

0xd434,	// (0x0000d434) setting_slider_graphic_pane

0xd434,	// (0x0000d434) setting_slider_pane

0xd434,	// (0x0000d434) setting_text_pane

0xd434,	// (0x0000d434) setting_volume_pane

0x0549,	// (0x00000549) volume_set_pane

0x0507,	// (0x00000507) bg_set_opt_pane_cp

0x0551,	// (0x00000551) setting_slider_pane_t1

0x056a,	// (0x0000056a) setting_slider_pane_t2

0x0584,	// (0x00000584) setting_slider_pane_t3

0x0002,

0xabcc,	// (0x0000abcc) setting_slider_pane_t

0x059c,	// (0x0000059c) slider_set_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp2

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_g1

0x05bb,	// (0x000005bb) setting_slider_graphic_pane_t1

0x05cb,	// (0x000005cb) setting_slider_graphic_pane_t2

0x0001,

0xabd3,	// (0x0000abd3) setting_slider_graphic_pane_t

0x05db,	// (0x000005db) slider_set_pane_cp

0x0293,	// (0x00000293) input_focus_pane_cp1

0x4f0d,	// (0x00004f0d) list_set_text_pane

0x002e,	// (0x0000002e) setting_text_pane_g1

0x0293,	// (0x00000293) input_focus_pane_cp2

0x002e,	// (0x0000002e) setting_code_pane_g1

0x05e3,	// (0x000005e3) setting_code_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_ParamLimits

0x05f1,	// (0x000005f1) set_text_pane_t1

0x14bf,	// (0x000014bf) set_opt_bg_pane_g1

0x14c7,	// (0x000014c7) set_opt_bg_pane_g2

0x4ee7,	// (0x00004ee7) set_opt_bg_pane_g3

0x14d7,	// (0x000014d7) set_opt_bg_pane_g4

0x14df,	// (0x000014df) set_opt_bg_pane_g5

0x14e7,	// (0x000014e7) set_opt_bg_pane_g6

0x4ef1,	// (0x00004ef1) set_opt_bg_pane_g7

0x4ef9,	// (0x00004ef9) set_opt_bg_pane_g8

0x4f03,	// (0x00004f03) set_opt_bg_pane_g9

0x0008,

0xafd5,	// (0x0000afd5) set_opt_bg_pane_g

0x4e76,	// (0x00004e76) slider_set_pane_g1

0x4e83,	// (0x00004e83) slider_set_pane_g2

0x0006,

0xafc6,	// (0x0000afc6) slider_set_pane_g

0x4cf6,	// (0x00004cf6) volume_set_pane_g1

0x4cfe,	// (0x00004cfe) volume_set_pane_g2

0x4d06,	// (0x00004d06) volume_set_pane_g3

0x4d0e,	// (0x00004d0e) volume_set_pane_g4

0x4d16,	// (0x00004d16) volume_set_pane_g5

0x4d1e,	// (0x00004d1e) volume_set_pane_g6

0x4d26,	// (0x00004d26) volume_set_pane_g7

0x4d2e,	// (0x00004d2e) volume_set_pane_g8

0x4d36,	// (0x00004d36) volume_set_pane_g9

0x4d3e,	// (0x00004d3e) volume_set_pane_g10

0x0009,

0xaf9e,	// (0x0000af9e) volume_set_pane_g

0xb879,	// (0x0000b879) indicator_pane_ParamLimits

0xb879,	// (0x0000b879) indicator_pane

0xb8a1,	// (0x0000b8a1) main_idle_pane_g2_ParamLimits

0xb8a1,	// (0x0000b8a1) main_idle_pane_g2

0xb8d9,	// (0x0000b8d9) main_pane_idle_g1_ParamLimits

0xb8d9,	// (0x0000b8d9) main_pane_idle_g1

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window_ParamLimits

0x064c,	// (0x0000064c) popup_clock_digital_analogue_window

0xb900,	// (0x0000b900) soft_indicator_pane_ParamLimits

0xb900,	// (0x0000b900) soft_indicator_pane

0xb91a,	// (0x0000b91a) wallpaper_pane_ParamLimits

0xb91a,	// (0x0000b91a) wallpaper_pane

0x002e,	// (0x0000002e) wallpaper_pane_g1

0xb92c,	// (0x0000b92c) indicator_pane_g1_ParamLimits

0xb92c,	// (0x0000b92c) indicator_pane_g1

0x5475,	// (0x00005475) navi_navi_icon_text_pane_srt_g1

0x069e,	// (0x0000069e) soft_indicator_pane_t1

0x06b8,	// (0x000006b8) aid_ps_area_pane

0xb942,	// (0x0000b942) aid_ps_clock_pane

0x06d7,	// (0x000006d7) aid_ps_indicator_pane

0x06e3,	// (0x000006e3) indicator_ps_pane_ParamLimits

0x06e3,	// (0x000006e3) indicator_ps_pane

0x06f2,	// (0x000006f2) power_save_pane_g1_ParamLimits

0x06f2,	// (0x000006f2) power_save_pane_g1

0x06fe,	// (0x000006fe) power_save_pane_g2_ParamLimits

0x06fe,	// (0x000006fe) power_save_pane_g2

0x0038,	// (0x00000038) aid_navinavi_width_pane

0x06b8,	// (0x000006b8) aid_ps_area_pane_ParamLimits

0x0001,

0xabd8,	// (0x0000abd8) power_save_pane_g_ParamLimits

0xabd8,	// (0x0000abd8) power_save_pane_g

0x070c,	// (0x0000070c) power_save_pane_t1_ParamLimits

0x070c,	// (0x0000070c) power_save_pane_t1

0xb942,	// (0x0000b942) aid_ps_clock_pane_ParamLimits

0x06d7,	// (0x000006d7) aid_ps_indicator_pane_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4_ParamLimits

0x071e,	// (0x0000071e) power_save_pane_t4

0x0001,

0xabdd,	// (0x0000abdd) power_save_pane_t_ParamLimits

0xabdd,	// (0x0000abdd) power_save_pane_t

0x0748,	// (0x00000748) power_save_t3_ParamLimits

0x0748,	// (0x00000748) power_save_t3

0x0733,	// (0x00000733) power_save_t2_ParamLimits

0x0733,	// (0x00000733) power_save_t2

0x075d,	// (0x0000075d) indicator_ps_pane_g1

0xb950,	// (0x0000b950) ai_gene_pane_ParamLimits

0xb950,	// (0x0000b950) ai_gene_pane

0xb967,	// (0x0000b967) ai_links_pane_ParamLimits

0xb967,	// (0x0000b967) ai_links_pane

0xb97f,	// (0x0000b97f) indicator_pane_cp1_ParamLimits

0xb97f,	// (0x0000b97f) indicator_pane_cp1

0xb98e,	// (0x0000b98e) main_pane_idle_g1_cp_ParamLimits

0xb98e,	// (0x0000b98e) main_pane_idle_g1_cp

0x0796,	// (0x00000796) popup_ai_links_title_window

0xb9a6,	// (0x0000b9a6) soft_indicator_pane_cp1_ParamLimits

0xb9a6,	// (0x0000b9a6) soft_indicator_pane_cp1

0x4bd9,	// (0x00004bd9) ai_links_pane_g1

0x4be2,	// (0x00004be2) grid_ai_links_pane

0xd26b,	// (0x0000d26b) ai_gene_pane_1

0x4bc7,	// (0x00004bc7) ai_gene_pane_2

0x4bd0,	// (0x00004bd0) list_highlight_pane_cp4

0xd247,	// (0x0000d247) cell_ai_link_pane_ParamLimits

0xd247,	// (0x0000d247) cell_ai_link_pane

0x4b98,	// (0x00004b98) cell_ai_link_pane_g1

0x09cf,	// (0x000009cf) cell_ai_link_pane_g2

0x0001,

0xaf79,	// (0x0000af79) cell_ai_link_pane_g

0x0293,	// (0x00000293) grid_highlight_cp2

0x0293,	// (0x00000293) bg_popup_sub_pane_cp1

0x07b9,	// (0x000007b9) popup_ai_links_title_window_t1

0x4ae6,	// (0x00004ae6) ai_gene_pane_1_g1_ParamLimits

0x4ae6,	// (0x00004ae6) ai_gene_pane_1_g1

0x4af2,	// (0x00004af2) ai_gene_pane_1_g2_ParamLimits

0x4af2,	// (0x00004af2) ai_gene_pane_1_g2

0x0001,

0xaf6f,	// (0x0000af6f) ai_gene_pane_1_g_ParamLimits

0xaf6f,	// (0x0000af6f) ai_gene_pane_1_g

0x4aff,	// (0x00004aff) ai_gene_pane_1_t1_ParamLimits

0x4aff,	// (0x00004aff) ai_gene_pane_1_t1

0x4b33,	// (0x00004b33) grid_ai_soft_ind_pane

0x4ad1,	// (0x00004ad1) ai_gene_pane_2_t1_ParamLimits

0x4ad1,	// (0x00004ad1) ai_gene_pane_2_t1

0xb9ba,	// (0x0000b9ba) main_pane_empty_t1_ParamLimits

0xb9ba,	// (0x0000b9ba) main_pane_empty_t1

0xb9d2,	// (0x0000b9d2) main_pane_empty_t2_ParamLimits

0xb9d2,	// (0x0000b9d2) main_pane_empty_t2

0xb9e7,	// (0x0000b9e7) main_pane_empty_t3_ParamLimits

0xb9e7,	// (0x0000b9e7) main_pane_empty_t3

0xb9f9,	// (0x0000b9f9) main_pane_empty_t4_ParamLimits

0xb9f9,	// (0x0000b9f9) main_pane_empty_t4

0xba0b,	// (0x0000ba0b) main_pane_empty_t5_ParamLimits

0xba0b,	// (0x0000ba0b) main_pane_empty_t5

0x0004,

0xf28f,	// (0x0000f28f) main_pane_empty_t_ParamLimits

0xf28f,	// (0x0000f28f) main_pane_empty_t

0x15bc,	// (0x000015bc) bg_popup_window_pane_ParamLimits

0x15bc,	// (0x000015bc) bg_popup_window_pane

0x4841,	// (0x00004841) find_popup_pane_cp2_ParamLimits

0x4841,	// (0x00004841) find_popup_pane_cp2

0x484d,	// (0x0000484d) heading_pane_ParamLimits

0x484d,	// (0x0000484d) heading_pane

0x0293,	// (0x00000293) bg_popup_sub_pane

0xd1c8,	// (0x0000d1c8) bg_popup_window_pane_g1_ParamLimits

0xd1c8,	// (0x0000d1c8) bg_popup_window_pane_g1

0xd1d7,	// (0x0000d1d7) bg_popup_window_pane_g2_ParamLimits

0xd1d7,	// (0x0000d1d7) bg_popup_window_pane_g2

0xd1e3,	// (0x0000d1e3) bg_popup_window_pane_g3_ParamLimits

0xd1e3,	// (0x0000d1e3) bg_popup_window_pane_g3

0xd1ef,	// (0x0000d1ef) bg_popup_window_pane_g4_ParamLimits

0xd1ef,	// (0x0000d1ef) bg_popup_window_pane_g4

0xd1fe,	// (0x0000d1fe) bg_popup_window_pane_g5_ParamLimits

0xd1fe,	// (0x0000d1fe) bg_popup_window_pane_g5

0xd20e,	// (0x0000d20e) bg_popup_window_pane_g6_ParamLimits

0xd20e,	// (0x0000d20e) bg_popup_window_pane_g6

0xd21a,	// (0x0000d21a) bg_popup_window_pane_g7_ParamLimits

0xd21a,	// (0x0000d21a) bg_popup_window_pane_g7

0xd229,	// (0x0000d229) bg_popup_window_pane_g8_ParamLimits

0xd229,	// (0x0000d229) bg_popup_window_pane_g8

0xd238,	// (0x0000d238) bg_popup_window_pane_g9_ParamLimits

0xd238,	// (0x0000d238) bg_popup_window_pane_g9

0x4816,	// (0x00004816) bg_popup_window_pane_g10_ParamLimits

0x4816,	// (0x00004816) bg_popup_window_pane_g10

0x0009,

0xf3d1,	// (0x0000f3d1) bg_popup_window_pane_g_ParamLimits

0xf3d1,	// (0x0000f3d1) bg_popup_window_pane_g

0x473f,	// (0x0000473f) bg_popup_heading_pane_ParamLimits

0x473f,	// (0x0000473f) bg_popup_heading_pane

0x53b8,	// (0x000053b8) tabs_4_passive_pane_cp_srt_ParamLimits

0x53b8,	// (0x000053b8) tabs_4_passive_pane_cp_srt

0x53ca,	// (0x000053ca) tabs_4_passive_pane_srt_ParamLimits

0x4753,	// (0x00004753) heading_pane_g2

0x53ca,	// (0x000053ca) tabs_4_passive_pane_srt

0x38ac,	// (0x000038ac) bg_passive_tab_pane_cp3_srt_ParamLimits

0x38ac,	// (0x000038ac) bg_passive_tab_pane_cp3_srt

0x475b,	// (0x0000475b) heading_pane_t1_ParamLimits

0x475b,	// (0x0000475b) heading_pane_t1

0x4772,	// (0x00004772) heading_pane_t2_ParamLimits

0x4772,	// (0x00004772) heading_pane_t2

0x0001,

0xaf32,	// (0x0000af32) heading_pane_t_ParamLimits

0xaf32,	// (0x0000af32) heading_pane_t

0x4119,	// (0x00004119) bg_popup_heading_pane_g1

0x41c8,	// (0x000041c8) bg_popup_heading_pane_g2

0x41d2,	// (0x000041d2) bg_popup_heading_pane_g3

0x41dc,	// (0x000041dc) bg_popup_heading_pane_g4

0x41e6,	// (0x000041e6) bg_popup_heading_pane_g5

0x41f0,	// (0x000041f0) bg_popup_heading_pane_g6

0x41f8,	// (0x000041f8) bg_popup_heading_pane_g7

0x4200,	// (0x00004200) bg_popup_heading_pane_g8

0x420a,	// (0x0000420a) bg_popup_heading_pane_g9

0x0008,

0xaeee,	// (0x0000aeee) bg_popup_heading_pane_g

0x36fe,	// (0x000036fe) bg_popup_sub_pane_g1

0x3706,	// (0x00003706) bg_popup_sub_pane_g2

0x370e,	// (0x0000370e) bg_popup_sub_pane_g3

0x3716,	// (0x00003716) bg_popup_sub_pane_g4

0x371e,	// (0x0000371e) bg_popup_sub_pane_g5

0x3726,	// (0x00003726) bg_popup_sub_pane_g6

0x372e,	// (0x0000372e) bg_popup_sub_pane_g7

0x3736,	// (0x00003736) bg_popup_sub_pane_g8

0x373e,	// (0x0000373e) bg_popup_sub_pane_g9

0x0008,

0xaec8,	// (0x0000aec8) bg_popup_sub_pane_g

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5_ParamLimits

0x082d,	// (0x0000082d) bg_popup_window_pane_cp5

0x0849,	// (0x00000849) popup_note_window_g1_ParamLimits

0x0849,	// (0x00000849) popup_note_window_g1

0x0855,	// (0x00000855) popup_note_window_t1_ParamLimits

0x0855,	// (0x00000855) popup_note_window_t1

0x086b,	// (0x0000086b) popup_note_window_t2_ParamLimits

0x086b,	// (0x0000086b) popup_note_window_t2

0x0881,	// (0x00000881) popup_note_window_t3_ParamLimits

0x0881,	// (0x00000881) popup_note_window_t3

0x0897,	// (0x00000897) popup_note_window_t4_ParamLimits

0x0897,	// (0x00000897) popup_note_window_t4

0x08bf,	// (0x000008bf) popup_note_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note_window_t5

0x0004,

0xabed,	// (0x0000abed) popup_note_window_t_ParamLimits

0xabed,	// (0x0000abed) popup_note_window_t

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp6

0x4095,	// (0x00004095) popup_note_image_window_g1_ParamLimits

0x4095,	// (0x00004095) popup_note_image_window_g1

0x40a1,	// (0x000040a1) popup_note_image_window_g2_ParamLimits

0x40a1,	// (0x000040a1) popup_note_image_window_g2

0x0001,

0xaebc,	// (0x0000aebc) popup_note_image_window_g_ParamLimits

0xaebc,	// (0x0000aebc) popup_note_image_window_g

0x40ba,	// (0x000040ba) popup_note_image_window_t1_ParamLimits

0x40ba,	// (0x000040ba) popup_note_image_window_t1

0x40d3,	// (0x000040d3) popup_note_image_window_t2_ParamLimits

0x40d3,	// (0x000040d3) popup_note_image_window_t2

0x40ec,	// (0x000040ec) popup_note_image_window_t3_ParamLimits

0x40ec,	// (0x000040ec) popup_note_image_window_t3

0x0002,

0xaec1,	// (0x0000aec1) popup_note_image_window_t_ParamLimits

0xaec1,	// (0x0000aec1) popup_note_image_window_t

0x3f56,	// (0x00003f56) bg_popup_window_pane_cp7_ParamLimits

0x3f56,	// (0x00003f56) bg_popup_window_pane_cp7

0x3f86,	// (0x00003f86) popup_note_wait_window_g1_ParamLimits

0x3f86,	// (0x00003f86) popup_note_wait_window_g1

0x3f92,	// (0x00003f92) popup_note_wait_window_g2_ParamLimits

0x3f92,	// (0x00003f92) popup_note_wait_window_g2

0x0002,

0xaeaa,	// (0x0000aeaa) popup_note_wait_window_g_ParamLimits

0xaeaa,	// (0x0000aeaa) popup_note_wait_window_g

0x3faa,	// (0x00003faa) popup_note_wait_window_t1_ParamLimits

0x3faa,	// (0x00003faa) popup_note_wait_window_t1

0x3fd1,	// (0x00003fd1) popup_note_wait_window_t2_ParamLimits

0x3fd1,	// (0x00003fd1) popup_note_wait_window_t2

0x3fee,	// (0x00003fee) popup_note_wait_window_t3_ParamLimits

0x3fee,	// (0x00003fee) popup_note_wait_window_t3

0x4001,	// (0x00004001) popup_note_wait_window_t4_ParamLimits

0x4001,	// (0x00004001) popup_note_wait_window_t4

0x0004,

0xaeb1,	// (0x0000aeb1) popup_note_wait_window_t_ParamLimits

0xaeb1,	// (0x0000aeb1) popup_note_wait_window_t

0x4026,	// (0x00004026) wait_bar_pane_ParamLimits

0x4026,	// (0x00004026) wait_bar_pane

0x0293,	// (0x00000293) wait_anim_pane

0x0293,	// (0x00000293) wait_border_pane

0x002e,	// (0x0000002e) wait_anim_pane_g1

0x002e,	// (0x0000002e) wait_anim_pane_g2

0x0001,

0xad6c,	// (0x0000ad6c) wait_anim_pane_g

0x3efa,	// (0x00003efa) wait_border_pane_g1

0x3f05,	// (0x00003f05) wait_border_pane_g2

0x3f0e,	// (0x00003f0e) wait_border_pane_g3

0x0002,

0xaea3,	// (0x0000aea3) wait_border_pane_g

0x3d65,	// (0x00003d65) bg_popup_window_pane_cp16_ParamLimits

0x3d65,	// (0x00003d65) bg_popup_window_pane_cp16

0x3e65,	// (0x00003e65) indicator_popup_pane_cp4_ParamLimits

0x3e65,	// (0x00003e65) indicator_popup_pane_cp4

0x3e79,	// (0x00003e79) popup_query_data_window_t1_ParamLimits

0x3e79,	// (0x00003e79) popup_query_data_window_t1

0x3e8b,	// (0x00003e8b) popup_query_data_window_t2_ParamLimits

0x3e8b,	// (0x00003e8b) popup_query_data_window_t2

0x3ea4,	// (0x00003ea4) popup_query_data_window_t3_ParamLimits

0x3ea4,	// (0x00003ea4) popup_query_data_window_t3

0x0002,

0xae9c,	// (0x0000ae9c) popup_query_data_window_t_ParamLimits

0xae9c,	// (0x0000ae9c) popup_query_data_window_t

0x3ebe,	// (0x00003ebe) query_popup_data_pane_ParamLimits

0x3ebe,	// (0x00003ebe) query_popup_data_pane

0x3ed2,	// (0x00003ed2) query_popup_data_pane_cp1_ParamLimits

0x3ed2,	// (0x00003ed2) query_popup_data_pane_cp1

0x3d65,	// (0x00003d65) bg_popup_window_pane_cp10_ParamLimits

0x3d65,	// (0x00003d65) bg_popup_window_pane_cp10

0x3d97,	// (0x00003d97) indicator_popup_pane_ParamLimits

0x3d97,	// (0x00003d97) indicator_popup_pane

0x3db9,	// (0x00003db9) popup_query_code_window_t1_ParamLimits

0x3db9,	// (0x00003db9) popup_query_code_window_t1

0x3dd3,	// (0x00003dd3) popup_query_code_window_t2_ParamLimits

0x3dd3,	// (0x00003dd3) popup_query_code_window_t2

0x3e1c,	// (0x00003e1c) popup_query_code_window_t3_ParamLimits

0x3e1c,	// (0x00003e1c) popup_query_code_window_t3

0x0002,

0xae95,	// (0x0000ae95) popup_query_code_window_t_ParamLimits

0xae95,	// (0x0000ae95) popup_query_code_window_t

0x3e4b,	// (0x00003e4b) query_popup_pane_ParamLimits

0x3e4b,	// (0x00003e4b) query_popup_pane

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp15_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_window_pane_cp15

0x0901,	// (0x00000901) indicator_popup_pane_cp1_ParamLimits

0x0901,	// (0x00000901) indicator_popup_pane_cp1

0x0914,	// (0x00000914) indicator_popup_pane_cp2_ParamLimits

0x0914,	// (0x00000914) indicator_popup_pane_cp2

0x0927,	// (0x00000927) popup_query_data_code_window_g1_ParamLimits

0x0927,	// (0x00000927) popup_query_data_code_window_g1

0x093a,	// (0x0000093a) popup_query_data_code_window_t1_ParamLimits

0x093a,	// (0x0000093a) popup_query_data_code_window_t1

0x094c,	// (0x0000094c) popup_query_data_code_window_t2_ParamLimits

0x094c,	// (0x0000094c) popup_query_data_code_window_t2

0x095e,	// (0x0000095e) popup_query_data_code_window_t3_ParamLimits

0x095e,	// (0x0000095e) popup_query_data_code_window_t3

0x0974,	// (0x00000974) popup_query_data_code_window_t4_ParamLimits

0x0974,	// (0x00000974) popup_query_data_code_window_t4

0x0003,

0xabf8,	// (0x0000abf8) popup_query_data_code_window_t_ParamLimits

0xabf8,	// (0x0000abf8) popup_query_data_code_window_t

0x376b,	// (0x0000376b) list_single_midp_graphic_pane_g3

0x098c,	// (0x0000098c) query_popup_data_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2_ParamLimits

0x099f,	// (0x0000099f) query_popup_pane_cp2

0x0293,	// (0x00000293) bg_popup_window_pane_cp11

0x3d5d,	// (0x00003d5d) heading_pane_cp5

0x0a8a,	// (0x00000a8a) listscroll_popup_info_pane

0x0293,	// (0x00000293) input_focus_pane_cp3

0x09b2,	// (0x000009b2) query_popup_pane_t1

0x09c0,	// (0x000009c0) list_popup_info_pane_ParamLimits

0x09c0,	// (0x000009c0) list_popup_info_pane

0x09cf,	// (0x000009cf) listscroll_popup_info_pane_g1

0x09d7,	// (0x000009d7) scroll_pane_cp7

0x09e1,	// (0x000009e1) popup_info_list_pane_t1_ParamLimits

0x09e1,	// (0x000009e1) popup_info_list_pane_t1

0x09fb,	// (0x000009fb) popup_info_list_pane_t2_ParamLimits

0x09fb,	// (0x000009fb) popup_info_list_pane_t2

0x0001,

0xac01,	// (0x0000ac01) popup_info_list_pane_t_ParamLimits

0xac01,	// (0x0000ac01) popup_info_list_pane_t

0x0293,	// (0x00000293) bg_popup_window_pane_cp12

0x54ac,	// (0x000054ac) find_popup_pane

0x0507,	// (0x00000507) bg_popup_window_pane_cp3

0x0a15,	// (0x00000a15) heading_pane_cp3

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp4

0xba6d,	// (0x0000ba6d) heading_pane_cp4

0x0a8a,	// (0x00000a8a) listscroll_popup_colour_pane

0x0a92,	// (0x00000a92) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x0a92,	// (0x00000a92) cell_large_graphic_colour_none_popup_pane

0xba75,	// (0x0000ba75) grid_large_graphic_colour_popup_pane_ParamLimits

0xba75,	// (0x0000ba75) grid_large_graphic_colour_popup_pane

0x0ad2,	// (0x00000ad2) listscroll_popup_colour_pane_g1_ParamLimits

0x0ad2,	// (0x00000ad2) listscroll_popup_colour_pane_g1

0x0ae9,	// (0x00000ae9) listscroll_popup_colour_pane_g2_ParamLimits

0x0ae9,	// (0x00000ae9) listscroll_popup_colour_pane_g2

0x0b00,	// (0x00000b00) listscroll_popup_colour_pane_g3_ParamLimits

0x0b00,	// (0x00000b00) listscroll_popup_colour_pane_g3

0xba99,	// (0x0000ba99) listscroll_popup_colour_pane_g4_ParamLimits

0xba99,	// (0x0000ba99) listscroll_popup_colour_pane_g4

0x0003,

0xf29a,	// (0x0000f29a) listscroll_popup_colour_pane_g_ParamLimits

0xf29a,	// (0x0000f29a) listscroll_popup_colour_pane_g

0x0b24,	// (0x00000b24) scroll_pane_cp6_ParamLimits

0x0b24,	// (0x00000b24) scroll_pane_cp6

0xbaa9,	// (0x0000baa9) cell_large_graphic_colour_popup_pane_ParamLimits

0xbaa9,	// (0x0000baa9) cell_large_graphic_colour_popup_pane

0x0b55,	// (0x00000b55) cell_large_graphic_colour_none_popup_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp5

0x0b64,	// (0x00000b64) cell_large_graphic_colour_popup_pane_g1

0x0b6c,	// (0x00000b6c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xac0f,	// (0x0000ac0f) cell_large_graphic_colour_popup_pane_g

0x0b74,	// (0x00000b74) cell_large_graphic_colour_popup_pane_g2_copy1

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp4

0x0b85,	// (0x00000b85) bg_popup_window_pane_cp8_ParamLimits

0x0b85,	// (0x00000b85) bg_popup_window_pane_cp8

0x0ba0,	// (0x00000ba0) popup_snote_single_text_window_g1_ParamLimits

0x0ba0,	// (0x00000ba0) popup_snote_single_text_window_g1

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t1_ParamLimits

0x0bb2,	// (0x00000bb2) popup_snote_single_text_window_t1

0x0bc5,	// (0x00000bc5) popup_snote_single_text_window_t2_ParamLimits

0x0bc5,	// (0x00000bc5) popup_snote_single_text_window_t2

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t3_ParamLimits

0x0bd8,	// (0x00000bd8) popup_snote_single_text_window_t3

0x0c11,	// (0x00000c11) popup_snote_single_text_window_t4_ParamLimits

0x0c11,	// (0x00000c11) popup_snote_single_text_window_t4

0x0c45,	// (0x00000c45) popup_snote_single_text_window_t5_ParamLimits

0x0c45,	// (0x00000c45) popup_snote_single_text_window_t5

0x0004,

0xac14,	// (0x0000ac14) popup_snote_single_text_window_t_ParamLimits

0xac14,	// (0x0000ac14) popup_snote_single_text_window_t

0x0c74,	// (0x00000c74) bg_popup_window_pane_cp9_ParamLimits

0x0c74,	// (0x00000c74) bg_popup_window_pane_cp9

0x0ba0,	// (0x00000ba0) popup_snote_single_graphic_window_g1_ParamLimits

0x0ba0,	// (0x00000ba0) popup_snote_single_graphic_window_g1

0x0c82,	// (0x00000c82) popup_snote_single_graphic_window_g2_ParamLimits

0x0c82,	// (0x00000c82) popup_snote_single_graphic_window_g2

0x0001,

0xac1f,	// (0x0000ac1f) popup_snote_single_graphic_window_g_ParamLimits

0xac1f,	// (0x0000ac1f) popup_snote_single_graphic_window_g

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t1_ParamLimits

0x0c8e,	// (0x00000c8e) popup_snote_single_graphic_window_t1

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_t2_ParamLimits

0x0ca1,	// (0x00000ca1) popup_snote_single_graphic_window_t2

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t3_ParamLimits

0x0cb4,	// (0x00000cb4) popup_snote_single_graphic_window_t3

0x0ced,	// (0x00000ced) popup_snote_single_graphic_window_t4_ParamLimits

0x0ced,	// (0x00000ced) popup_snote_single_graphic_window_t4

0x0d21,	// (0x00000d21) popup_snote_single_graphic_window_t5_ParamLimits

0x0d21,	// (0x00000d21) popup_snote_single_graphic_window_t5

0x0004,

0xac24,	// (0x0000ac24) popup_snote_single_graphic_window_t_ParamLimits

0xac24,	// (0x0000ac24) popup_snote_single_graphic_window_t

0x5336,	// (0x00005336) grid_graphic_popup_pane_ParamLimits

0x5336,	// (0x00005336) grid_graphic_popup_pane

0x5360,	// (0x00005360) listscroll_popup_graphic_pane_g1_ParamLimits

0x5360,	// (0x00005360) listscroll_popup_graphic_pane_g1

0xd581,	// (0x0000d581) listscroll_popup_graphic_pane_g2_ParamLimits

0xd581,	// (0x0000d581) listscroll_popup_graphic_pane_g2

0x0001,

0xf41b,	// (0x0000f41b) listscroll_popup_graphic_pane_g_ParamLimits

0xf41b,	// (0x0000f41b) listscroll_popup_graphic_pane_g

0x5388,	// (0x00005388) scroll_pane_cp5

0xd526,	// (0x0000d526) cell_graphic_popup_pane_ParamLimits

0xd526,	// (0x0000d526) cell_graphic_popup_pane

0x52b6,	// (0x000052b6) cell_graphic_popup_pane_g1

0x52be,	// (0x000052be) cell_graphic_popup_pane_g2

0x0b74,	// (0x00000b74) cell_graphic_popup_pane_g3

0x0002,

0xb00b,	// (0x0000b00b) cell_graphic_popup_pane_g

0x52c7,	// (0x000052c7) cell_graphic_popup_pane_t2

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp3

0x0d62,	// (0x00000d62) list_gen_pane_ParamLimits

0x0d62,	// (0x00000d62) list_gen_pane

0x0d94,	// (0x00000d94) scroll_pane

0xd4dd,	// (0x0000d4dd) bg_list_pane_g1_ParamLimits

0xd4dd,	// (0x0000d4dd) bg_list_pane_g1

0x522b,	// (0x0000522b) bg_list_pane_g2_ParamLimits

0x522b,	// (0x0000522b) bg_list_pane_g2

0x5240,	// (0x00005240) bg_list_pane_g3_ParamLimits

0x5240,	// (0x00005240) bg_list_pane_g3

0x5254,	// (0x00005254) bg_list_pane_g4_ParamLimits

0x5254,	// (0x00005254) bg_list_pane_g4

0xd4fa,	// (0x0000d4fa) bg_list_pane_g5_ParamLimits

0xd4fa,	// (0x0000d4fa) bg_list_pane_g5

0x0004,

0xf410,	// (0x0000f410) bg_list_pane_g_ParamLimits

0xf410,	// (0x0000f410) bg_list_pane_g

0xd483,	// (0x0000d483) list_double2_graphic_large_graphic_pane_ParamLimits

0xd483,	// (0x0000d483) list_double2_graphic_large_graphic_pane

0xd483,	// (0x0000d483) list_double2_graphic_pane_ParamLimits

0xd483,	// (0x0000d483) list_double2_graphic_pane

0xd483,	// (0x0000d483) list_double2_large_graphic_pane_ParamLimits

0xd483,	// (0x0000d483) list_double2_large_graphic_pane

0xd483,	// (0x0000d483) list_double2_pane_ParamLimits

0xd483,	// (0x0000d483) list_double2_pane

0xd483,	// (0x0000d483) list_double_graphic_heading_pane_ParamLimits

0xd483,	// (0x0000d483) list_double_graphic_heading_pane

0xd483,	// (0x0000d483) list_double_graphic_pane_ParamLimits

0xd483,	// (0x0000d483) list_double_graphic_pane

0xd483,	// (0x0000d483) list_double_heading_pane_ParamLimits

0xd483,	// (0x0000d483) list_double_heading_pane

0xd483,	// (0x0000d483) list_double_large_graphic_pane_ParamLimits

0xd483,	// (0x0000d483) list_double_large_graphic_pane

0xd483,	// (0x0000d483) list_double_number_pane_ParamLimits

0xd483,	// (0x0000d483) list_double_number_pane

0xd483,	// (0x0000d483) list_double_pane_ParamLimits

0xd483,	// (0x0000d483) list_double_pane

0xd483,	// (0x0000d483) list_double_time_pane_ParamLimits

0xd483,	// (0x0000d483) list_double_time_pane

0xd483,	// (0x0000d483) list_setting_number_pane_ParamLimits

0xd483,	// (0x0000d483) list_setting_number_pane

0xd483,	// (0x0000d483) list_setting_pane_ParamLimits

0xd483,	// (0x0000d483) list_setting_pane

0xd495,	// (0x0000d495) list_single_2graphic_pane_ParamLimits

0xd495,	// (0x0000d495) list_single_2graphic_pane

0xd495,	// (0x0000d495) list_single_graphic_heading_pane_ParamLimits

0xd495,	// (0x0000d495) list_single_graphic_heading_pane

0xd495,	// (0x0000d495) list_single_graphic_pane_ParamLimits

0xd495,	// (0x0000d495) list_single_graphic_pane

0xd495,	// (0x0000d495) list_single_heading_pane_ParamLimits

0xd495,	// (0x0000d495) list_single_heading_pane

0xd495,	// (0x0000d495) list_single_large_graphic_pane_ParamLimits

0xd495,	// (0x0000d495) list_single_large_graphic_pane

0xd495,	// (0x0000d495) list_single_number_heading_pane_ParamLimits

0xd495,	// (0x0000d495) list_single_number_heading_pane

0xd495,	// (0x0000d495) list_single_number_pane_ParamLimits

0xd495,	// (0x0000d495) list_single_number_pane

0xd495,	// (0x0000d495) list_single_pane_ParamLimits

0xd495,	// (0x0000d495) list_single_pane

0x0293,	// (0x00000293) list_highlight_pane_cp1

0x2550,	// (0x00002550) list_single_pane_g1_ParamLimits

0x2550,	// (0x00002550) list_single_pane_g1

0x35a2,	// (0x000035a2) list_single_pane_g2_ParamLimits

0x35a2,	// (0x000035a2) list_single_pane_g2

0x0001,

0xae41,	// (0x0000ae41) list_single_pane_g_ParamLimits

0xae41,	// (0x0000ae41) list_single_pane_g

0x5ada,	// (0x00005ada) list_single_pane_t1_ParamLimits

0x5ada,	// (0x00005ada) list_single_pane_t1

0x2550,	// (0x00002550) list_single_number_pane_g1_ParamLimits

0x2550,	// (0x00002550) list_single_number_pane_g1

0x35a2,	// (0x000035a2) list_single_number_pane_g2_ParamLimits

0x35a2,	// (0x000035a2) list_single_number_pane_g2

0x0001,

0xae41,	// (0x0000ae41) list_single_number_pane_g_ParamLimits

0xae41,	// (0x0000ae41) list_single_number_pane_g

0x368c,	// (0x0000368c) list_single_number_pane_t1_ParamLimits

0x368c,	// (0x0000368c) list_single_number_pane_t1

0xd2d4,	// (0x0000d2d4) list_single_number_pane_t2_ParamLimits

0xd2d4,	// (0x0000d2d4) list_single_number_pane_t2

0x0001,

0xf3f3,	// (0x0000f3f3) list_single_number_pane_t_ParamLimits

0xf3f3,	// (0x0000f3f3) list_single_number_pane_t

0xbad2,	// (0x0000bad2) list_single_graphic_pane_g1_ParamLimits

0xbad2,	// (0x0000bad2) list_single_graphic_pane_g1

0x2550,	// (0x00002550) list_single_graphic_pane_g2_ParamLimits

0x2550,	// (0x00002550) list_single_graphic_pane_g2

0x35a2,	// (0x000035a2) list_single_graphic_pane_g3_ParamLimits

0x35a2,	// (0x000035a2) list_single_graphic_pane_g3

0x0002,

0xf2a3,	// (0x0000f2a3) list_single_graphic_pane_g_ParamLimits

0xf2a3,	// (0x0000f2a3) list_single_graphic_pane_g

0xbade,	// (0x0000bade) list_single_graphic_pane_t1_ParamLimits

0xbade,	// (0x0000bade) list_single_graphic_pane_t1

0x2550,	// (0x00002550) list_single_heading_pane_g1_ParamLimits

0x2550,	// (0x00002550) list_single_heading_pane_g1

0x35a2,	// (0x000035a2) list_single_heading_pane_g2_ParamLimits

0x35a2,	// (0x000035a2) list_single_heading_pane_g2

0x0001,

0xae41,	// (0x0000ae41) list_single_heading_pane_g_ParamLimits

0xae41,	// (0x0000ae41) list_single_heading_pane_g

0xbaf4,	// (0x0000baf4) list_single_heading_pane_t1_ParamLimits

0xbaf4,	// (0x0000baf4) list_single_heading_pane_t1

0xbb0a,	// (0x0000bb0a) list_single_heading_pane_t2_ParamLimits

0xbb0a,	// (0x0000bb0a) list_single_heading_pane_t2

0x0001,

0xf2aa,	// (0x0000f2aa) list_single_heading_pane_t_ParamLimits

0xf2aa,	// (0x0000f2aa) list_single_heading_pane_t

0x2550,	// (0x00002550) list_single_number_heading_pane_g1_ParamLimits

0x2550,	// (0x00002550) list_single_number_heading_pane_g1

0x35a2,	// (0x000035a2) list_single_number_heading_pane_g2_ParamLimits

0x35a2,	// (0x000035a2) list_single_number_heading_pane_g2

0x0001,

0xae41,	// (0x0000ae41) list_single_number_heading_pane_g_ParamLimits

0xae41,	// (0x0000ae41) list_single_number_heading_pane_g

0xbaf4,	// (0x0000baf4) list_single_number_heading_pane_t1_ParamLimits

0xbaf4,	// (0x0000baf4) list_single_number_heading_pane_t1

0x5a8e,	// (0x00005a8e) list_single_number_heading_pane_t2_ParamLimits

0x5a8e,	// (0x00005a8e) list_single_number_heading_pane_t2

0x5aa0,	// (0x00005aa0) list_single_number_heading_pane_t3_ParamLimits

0x5aa0,	// (0x00005aa0) list_single_number_heading_pane_t3

0x0002,

0xf2af,	// (0x0000f2af) list_single_number_heading_pane_t_ParamLimits

0xf2af,	// (0x0000f2af) list_single_number_heading_pane_t

0x3596,	// (0x00003596) list_single_graphic_heading_pane_g1_ParamLimits

0x3596,	// (0x00003596) list_single_graphic_heading_pane_g1

0xbb1c,	// (0x0000bb1c) list_single_graphic_heading_pane_g4_ParamLimits

0xbb1c,	// (0x0000bb1c) list_single_graphic_heading_pane_g4

0x35a2,	// (0x000035a2) list_single_graphic_heading_pane_g5_ParamLimits

0x35a2,	// (0x000035a2) list_single_graphic_heading_pane_g5

0x0002,

0xf2b6,	// (0x0000f2b6) list_single_graphic_heading_pane_g_ParamLimits

0xf2b6,	// (0x0000f2b6) list_single_graphic_heading_pane_g

0xbaf4,	// (0x0000baf4) list_single_graphic_heading_pane_t1_ParamLimits

0xbaf4,	// (0x0000baf4) list_single_graphic_heading_pane_t1

0xbb2d,	// (0x0000bb2d) list_single_graphic_heading_pane_t2_ParamLimits

0xbb2d,	// (0x0000bb2d) list_single_graphic_heading_pane_t2

0x0001,

0xf2bd,	// (0x0000f2bd) list_single_graphic_heading_pane_t_ParamLimits

0xf2bd,	// (0x0000f2bd) list_single_graphic_heading_pane_t

0x5af0,	// (0x00005af0) list_single_large_graphic_pane_g1_ParamLimits

0x5af0,	// (0x00005af0) list_single_large_graphic_pane_g1

0x2550,	// (0x00002550) list_single_large_graphic_pane_g2_ParamLimits

0x2550,	// (0x00002550) list_single_large_graphic_pane_g2

0x35a2,	// (0x000035a2) list_single_large_graphic_pane_g3_ParamLimits

0x35a2,	// (0x000035a2) list_single_large_graphic_pane_g3

0x0002,

0xb09b,	// (0x0000b09b) list_single_large_graphic_pane_g_ParamLimits

0xb09b,	// (0x0000b09b) list_single_large_graphic_pane_g

0x3f05,	// (0x00003f05) wait_border_pane_g2_copy1

0xbb3f,	// (0x0000bb3f) list_single_large_graphic_pane_g4_cp2

0x5afc,	// (0x00005afc) list_single_large_graphic_pane_t1_ParamLimits

0x5afc,	// (0x00005afc) list_single_large_graphic_pane_t1

0x37c3,	// (0x000037c3) list_double_pane_g1_ParamLimits

0x37c3,	// (0x000037c3) list_double_pane_g1

0xbb47,	// (0x0000bb47) list_double_pane_g2_ParamLimits

0xbb47,	// (0x0000bb47) list_double_pane_g2

0x0001,

0xf2c2,	// (0x0000f2c2) list_double_pane_g_ParamLimits

0xf2c2,	// (0x0000f2c2) list_double_pane_g

0x778f,	// (0x0000778f) list_double_pane_t1_ParamLimits

0x778f,	// (0x0000778f) list_double_pane_t1

0xbb53,	// (0x0000bb53) list_double_pane_t2_ParamLimits

0xbb53,	// (0x0000bb53) list_double_pane_t2

0x0001,

0xf2c7,	// (0x0000f2c7) list_double_pane_t_ParamLimits

0xf2c7,	// (0x0000f2c7) list_double_pane_t

0xbb65,	// (0x0000bb65) list_double2_pane_g1_ParamLimits

0xbb65,	// (0x0000bb65) list_double2_pane_g1

0xbb76,	// (0x0000bb76) list_double2_pane_g2_ParamLimits

0xbb76,	// (0x0000bb76) list_double2_pane_g2

0x0001,

0xf2cc,	// (0x0000f2cc) list_double2_pane_g_ParamLimits

0xf2cc,	// (0x0000f2cc) list_double2_pane_g

0xbb82,	// (0x0000bb82) list_double2_pane_t1_ParamLimits

0xbb82,	// (0x0000bb82) list_double2_pane_t1

0xbb98,	// (0x0000bb98) list_double2_pane_t2_ParamLimits

0xbb98,	// (0x0000bb98) list_double2_pane_t2

0x0001,

0xf2d1,	// (0x0000f2d1) list_double2_pane_t_ParamLimits

0xf2d1,	// (0x0000f2d1) list_double2_pane_t

0x37c3,	// (0x000037c3) list_double_number_pane_g1_ParamLimits

0x37c3,	// (0x000037c3) list_double_number_pane_g1

0xbb47,	// (0x0000bb47) list_double_number_pane_g2_ParamLimits

0xbb47,	// (0x0000bb47) list_double_number_pane_g2

0x0001,

0xf2c2,	// (0x0000f2c2) list_double_number_pane_g_ParamLimits

0xf2c2,	// (0x0000f2c2) list_double_number_pane_g

0xbbaa,	// (0x0000bbaa) list_double_number_pane_t1_ParamLimits

0xbbaa,	// (0x0000bbaa) list_double_number_pane_t1

0xbbbc,	// (0x0000bbbc) list_double_number_pane_t2_ParamLimits

0xbbbc,	// (0x0000bbbc) list_double_number_pane_t2

0xbbd2,	// (0x0000bbd2) list_double_number_pane_t3_ParamLimits

0xbbd2,	// (0x0000bbd2) list_double_number_pane_t3

0x0002,

0xf2d6,	// (0x0000f2d6) list_double_number_pane_t_ParamLimits

0xf2d6,	// (0x0000f2d6) list_double_number_pane_t

0xbbe4,	// (0x0000bbe4) list_double_graphic_pane_g1_ParamLimits

0xbbe4,	// (0x0000bbe4) list_double_graphic_pane_g1

0xbbf0,	// (0x0000bbf0) list_double_graphic_pane_g2_ParamLimits

0xbbf0,	// (0x0000bbf0) list_double_graphic_pane_g2

0xbbff,	// (0x0000bbff) list_double_graphic_pane_g3_ParamLimits

0xbbff,	// (0x0000bbff) list_double_graphic_pane_g3

0x0003,

0xf2dd,	// (0x0000f2dd) list_double_graphic_pane_g_ParamLimits

0xf2dd,	// (0x0000f2dd) list_double_graphic_pane_g

0x37cf,	// (0x000037cf) list_double_graphic_pane_t1_ParamLimits

0x37cf,	// (0x000037cf) list_double_graphic_pane_t1

0xbc17,	// (0x0000bc17) list_double_graphic_pane_t2_ParamLimits

0xbc17,	// (0x0000bc17) list_double_graphic_pane_t2

0x0001,

0xf2e6,	// (0x0000f2e6) list_double_graphic_pane_t_ParamLimits

0xf2e6,	// (0x0000f2e6) list_double_graphic_pane_t

0xbc29,	// (0x0000bc29) list_double2_graphic_pane_g1_ParamLimits

0xbc29,	// (0x0000bc29) list_double2_graphic_pane_g1

0x243b,	// (0x0000243b) list_double2_graphic_pane_g2_ParamLimits

0x243b,	// (0x0000243b) list_double2_graphic_pane_g2

0xbb76,	// (0x0000bb76) list_double2_graphic_pane_g3_ParamLimits

0xbb76,	// (0x0000bb76) list_double2_graphic_pane_g3

0x0002,

0xf2eb,	// (0x0000f2eb) list_double2_graphic_pane_g_ParamLimits

0xf2eb,	// (0x0000f2eb) list_double2_graphic_pane_g

0xbc35,	// (0x0000bc35) list_double2_graphic_pane_t1_ParamLimits

0xbc35,	// (0x0000bc35) list_double2_graphic_pane_t1

0xbc4b,	// (0x0000bc4b) list_double2_graphic_pane_t2_ParamLimits

0xbc4b,	// (0x0000bc4b) list_double2_graphic_pane_t2

0x0001,

0xf2f2,	// (0x0000f2f2) list_double2_graphic_pane_t_ParamLimits

0xf2f2,	// (0x0000f2f2) list_double2_graphic_pane_t

0xbc5d,	// (0x0000bc5d) list_double_large_graphic_pane_g1_ParamLimits

0xbc5d,	// (0x0000bc5d) list_double_large_graphic_pane_g1

0xbc7c,	// (0x0000bc7c) list_double_large_graphic_pane_g2_ParamLimits

0xbc7c,	// (0x0000bc7c) list_double_large_graphic_pane_g2

0xbb47,	// (0x0000bb47) list_double_large_graphic_pane_g3_ParamLimits

0xbb47,	// (0x0000bb47) list_double_large_graphic_pane_g3

0xbc8d,	// (0x0000bc8d) list_double_large_graphic_pane_g4_ParamLimits

0xbc8d,	// (0x0000bc8d) list_double_large_graphic_pane_g4

0x0004,

0xf2f7,	// (0x0000f2f7) list_double_large_graphic_pane_g_ParamLimits

0xf2f7,	// (0x0000f2f7) list_double_large_graphic_pane_g

0xbc9f,	// (0x0000bc9f) list_double_large_graphic_pane_t1_ParamLimits

0xbc9f,	// (0x0000bc9f) list_double_large_graphic_pane_t1

0xbcb8,	// (0x0000bcb8) list_double_large_graphic_pane_t2_ParamLimits

0xbcb8,	// (0x0000bcb8) list_double_large_graphic_pane_t2

0x0001,

0xf302,	// (0x0000f302) list_double_large_graphic_pane_t_ParamLimits

0xf302,	// (0x0000f302) list_double_large_graphic_pane_t

0xbcca,	// (0x0000bcca) list_double2_large_graphic_pane_g1_ParamLimits

0xbcca,	// (0x0000bcca) list_double2_large_graphic_pane_g1

0xbb65,	// (0x0000bb65) list_double2_large_graphic_pane_g2_ParamLimits

0xbb65,	// (0x0000bb65) list_double2_large_graphic_pane_g2

0xbb76,	// (0x0000bb76) list_double2_large_graphic_pane_g3_ParamLimits

0xbb76,	// (0x0000bb76) list_double2_large_graphic_pane_g3

0x0002,

0xf307,	// (0x0000f307) list_double2_large_graphic_pane_g_ParamLimits

0xf307,	// (0x0000f307) list_double2_large_graphic_pane_g

0xbcd6,	// (0x0000bcd6) list_double2_large_graphic_pane_t1_ParamLimits

0xbcd6,	// (0x0000bcd6) list_double2_large_graphic_pane_t1

0xbcec,	// (0x0000bcec) list_double2_large_graphic_pane_t2_ParamLimits

0xbcec,	// (0x0000bcec) list_double2_large_graphic_pane_t2

0x0001,

0xf30e,	// (0x0000f30e) list_double2_large_graphic_pane_t_ParamLimits

0xf30e,	// (0x0000f30e) list_double2_large_graphic_pane_t

0xbcfe,	// (0x0000bcfe) list_double_heading_pane_g1_ParamLimits

0xbcfe,	// (0x0000bcfe) list_double_heading_pane_g1

0xbd0f,	// (0x0000bd0f) list_double_heading_pane_g2_ParamLimits

0xbd0f,	// (0x0000bd0f) list_double_heading_pane_g2

0x0001,

0xf313,	// (0x0000f313) list_double_heading_pane_g_ParamLimits

0xf313,	// (0x0000f313) list_double_heading_pane_g

0xbd1b,	// (0x0000bd1b) list_double_heading_pane_t1_ParamLimits

0xbd1b,	// (0x0000bd1b) list_double_heading_pane_t1

0xbd31,	// (0x0000bd31) list_double_heading_pane_t2_ParamLimits

0xbd31,	// (0x0000bd31) list_double_heading_pane_t2

0x0001,

0xf318,	// (0x0000f318) list_double_heading_pane_t_ParamLimits

0xf318,	// (0x0000f318) list_double_heading_pane_t

0x0f7e,	// (0x00000f7e) list_double_graphic_heading_pane_g1_ParamLimits

0x0f7e,	// (0x00000f7e) list_double_graphic_heading_pane_g1

0xbcfe,	// (0x0000bcfe) list_double_graphic_heading_pane_g2_ParamLimits

0xbcfe,	// (0x0000bcfe) list_double_graphic_heading_pane_g2

0xbd0f,	// (0x0000bd0f) list_double_graphic_heading_pane_g3_ParamLimits

0xbd0f,	// (0x0000bd0f) list_double_graphic_heading_pane_g3

0x0002,

0xf31d,	// (0x0000f31d) list_double_graphic_heading_pane_g_ParamLimits

0xf31d,	// (0x0000f31d) list_double_graphic_heading_pane_g

0xbd43,	// (0x0000bd43) list_double_graphic_heading_pane_t1_ParamLimits

0xbd43,	// (0x0000bd43) list_double_graphic_heading_pane_t1

0xbd59,	// (0x0000bd59) list_double_graphic_heading_pane_t2_ParamLimits

0xbd59,	// (0x0000bd59) list_double_graphic_heading_pane_t2

0x0001,

0xf324,	// (0x0000f324) list_double_graphic_heading_pane_t_ParamLimits

0xf324,	// (0x0000f324) list_double_graphic_heading_pane_t

0xbc7c,	// (0x0000bc7c) list_double_time_pane_g1_ParamLimits

0xbc7c,	// (0x0000bc7c) list_double_time_pane_g1

0xbb47,	// (0x0000bb47) list_double_time_pane_g2_ParamLimits

0xbb47,	// (0x0000bb47) list_double_time_pane_g2

0x0001,

0xf329,	// (0x0000f329) list_double_time_pane_g_ParamLimits

0xf329,	// (0x0000f329) list_double_time_pane_g

0xbd6b,	// (0x0000bd6b) list_double_time_pane_t1_ParamLimits

0xbd6b,	// (0x0000bd6b) list_double_time_pane_t1

0xbd81,	// (0x0000bd81) list_double_time_pane_t2_ParamLimits

0xbd81,	// (0x0000bd81) list_double_time_pane_t2

0xbd93,	// (0x0000bd93) list_double_time_pane_t3_ParamLimits

0xbd93,	// (0x0000bd93) list_double_time_pane_t3

0xbda5,	// (0x0000bda5) list_double_time_pane_t4_ParamLimits

0xbda5,	// (0x0000bda5) list_double_time_pane_t4

0x0003,

0xf32e,	// (0x0000f32e) list_double_time_pane_t_ParamLimits

0xf32e,	// (0x0000f32e) list_double_time_pane_t

0x243b,	// (0x0000243b) list_setting_pane_g1_ParamLimits

0x243b,	// (0x0000243b) list_setting_pane_g1

0xbb76,	// (0x0000bb76) list_setting_pane_g2_ParamLimits

0xbb76,	// (0x0000bb76) list_setting_pane_g2

0x0001,

0xf337,	// (0x0000f337) list_setting_pane_g_ParamLimits

0xf337,	// (0x0000f337) list_setting_pane_g

0xbdb7,	// (0x0000bdb7) list_setting_pane_t1_ParamLimits

0xbdb7,	// (0x0000bdb7) list_setting_pane_t1

0xbdce,	// (0x0000bdce) list_setting_pane_t2_ParamLimits

0xbdce,	// (0x0000bdce) list_setting_pane_t2

0x0002,

0xf33c,	// (0x0000f33c) list_setting_pane_t_ParamLimits

0xf33c,	// (0x0000f33c) list_setting_pane_t

0xbe0d,	// (0x0000be0d) set_value_pane_cp_ParamLimits

0xbe0d,	// (0x0000be0d) set_value_pane_cp

0x243b,	// (0x0000243b) list_setting_number_pane_g1_ParamLimits

0x243b,	// (0x0000243b) list_setting_number_pane_g1

0xbb76,	// (0x0000bb76) list_setting_number_pane_g2_ParamLimits

0xbb76,	// (0x0000bb76) list_setting_number_pane_g2

0x0001,

0xf337,	// (0x0000f337) list_setting_number_pane_g_ParamLimits

0xf337,	// (0x0000f337) list_setting_number_pane_g

0xbe19,	// (0x0000be19) list_setting_number_pane_t1_ParamLimits

0xbe19,	// (0x0000be19) list_setting_number_pane_t1

0xbe2d,	// (0x0000be2d) list_setting_number_pane_t2_ParamLimits

0xbe2d,	// (0x0000be2d) list_setting_number_pane_t2

0xbe44,	// (0x0000be44) list_setting_number_pane_t3_ParamLimits

0xbe44,	// (0x0000be44) list_setting_number_pane_t3

0x0003,

0xf343,	// (0x0000f343) list_setting_number_pane_t_ParamLimits

0xf343,	// (0x0000f343) list_setting_number_pane_t

0xbe0d,	// (0x0000be0d) set_value_pane_ParamLimits

0xbe0d,	// (0x0000be0d) set_value_pane

0x1263,	// (0x00001263) bg_set_opt_pane_ParamLimits

0x1263,	// (0x00001263) bg_set_opt_pane

0x1284,	// (0x00001284) set_value_pane_t1

0x1292,	// (0x00001292) slider_set_pane_cp3

0x129b,	// (0x0000129b) volume_small_pane_cp

0x12a4,	// (0x000012a4) list_form_gen_pane

0x12ad,	// (0x000012ad) scroll_pane_cp8

0xbe87,	// (0x0000be87) form_field_data_pane_ParamLimits

0xbe87,	// (0x0000be87) form_field_data_pane

0xbe9e,	// (0x0000be9e) form_field_data_wide_pane_ParamLimits

0xbe9e,	// (0x0000be9e) form_field_data_wide_pane

0xbebe,	// (0x0000bebe) form_field_popup_pane_ParamLimits

0xbebe,	// (0x0000bebe) form_field_popup_pane

0xbed6,	// (0x0000bed6) form_field_popup_wide_pane_ParamLimits

0xbed6,	// (0x0000bed6) form_field_popup_wide_pane

0x1348,	// (0x00001348) form_field_slider_pane_ParamLimits

0x1348,	// (0x00001348) form_field_slider_pane

0x135b,	// (0x0000135b) form_field_slider_wide_pane_ParamLimits

0x135b,	// (0x0000135b) form_field_slider_wide_pane

0x136e,	// (0x0000136e) data_form_pane

0xbef7,	// (0x0000bef7) form_field_data_pane_t1

0x139c,	// (0x0000139c) input_focus_pane

0x13aa,	// (0x000013aa) data_form_wide_pane

0x13d6,	// (0x000013d6) form_field_data_wide_pane_t1

0x0b92,	// (0x00000b92) input_focus_pane_cp6

0xbf11,	// (0x0000bf11) form_field_popup_pane_t1

0x139c,	// (0x0000139c) input_focus_pane_cp7

0x140d,	// (0x0000140d) list_form_pane

0x1421,	// (0x00001421) form_field_popup_wide_pane_t1

0x139c,	// (0x0000139c) input_focus_pane_cp8

0x1433,	// (0x00001433) list_form_wide_pane

0xbf33,	// (0x0000bf33) form_field_slider_pane_t1_ParamLimits

0xbf33,	// (0x0000bf33) form_field_slider_pane_t1

0xbf4b,	// (0x0000bf4b) form_field_slider_pane_t2_ParamLimits

0xbf4b,	// (0x0000bf4b) form_field_slider_pane_t2

0x0001,

0xf34c,	// (0x0000f34c) form_field_slider_pane_t_ParamLimits

0xf34c,	// (0x0000f34c) form_field_slider_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9

0xbf60,	// (0x0000bf60) slider_cont_pane_ParamLimits

0xbf60,	// (0x0000bf60) slider_cont_pane

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t1_ParamLimits

0x147f,	// (0x0000147f) form_field_slider_wide_pane_t1

0x1491,	// (0x00001491) form_field_slider_wide_pane_t2_ParamLimits

0x1491,	// (0x00001491) form_field_slider_wide_pane_t2

0x0001,

0xacf0,	// (0x0000acf0) form_field_slider_wide_pane_t_ParamLimits

0xacf0,	// (0x0000acf0) form_field_slider_wide_pane_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10

0xbf74,	// (0x0000bf74) slider_cont_pane_cp1_ParamLimits

0xbf74,	// (0x0000bf74) slider_cont_pane_cp1

0xbf88,	// (0x0000bf88) slider_form_pane_cp

0x14bf,	// (0x000014bf) input_focus_pane_g1

0x14c7,	// (0x000014c7) input_focus_pane_g2

0x14cf,	// (0x000014cf) input_focus_pane_g3

0x14d7,	// (0x000014d7) input_focus_pane_g4

0x14df,	// (0x000014df) input_focus_pane_g5

0x14e7,	// (0x000014e7) input_focus_pane_g6

0x14ef,	// (0x000014ef) input_focus_pane_g7

0x14f7,	// (0x000014f7) input_focus_pane_g8

0x14ff,	// (0x000014ff) input_focus_pane_g9

0x002e,	// (0x0000002e) input_focus_pane_g10

0x0009,

0xacf5,	// (0x0000acf5) input_focus_pane_g

0x3f0e,	// (0x00003f0e) wait_border_pane_g3_copy1

0xbf90,	// (0x0000bf90) data_form_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g1_copy1

0xd467,	// (0x0000d467) data_form_wide_pane_t1

0xbfaa,	// (0x0000bfaa) list_form_graphic_pane_cp_ParamLimits

0xbfaa,	// (0x0000bfaa) list_form_graphic_pane_cp

0x5082,	// (0x00005082) slider_form_pane_g1

0x508b,	// (0x0000508b) slider_form_pane_g2

0x0006,

0xf401,	// (0x0000f401) slider_form_pane_g

0xbfaa,	// (0x0000bfaa) list_form_graphic_pane_ParamLimits

0xbfaa,	// (0x0000bfaa) list_form_graphic_pane

0x1557,	// (0x00001557) list_form_graphic_pane_g1

0x155f,	// (0x0000155f) list_form_graphic_pane_t1_ParamLimits

0x155f,	// (0x0000155f) list_form_graphic_pane_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5

0xbfbc,	// (0x0000bfbc) find_pane_g1

0x157d,	// (0x0000157d) input_find_pane

0xbfc5,	// (0x0000bfc5) input_find_pane_g1_ParamLimits

0xbfc5,	// (0x0000bfc5) input_find_pane_g1

0xbfd1,	// (0x0000bfd1) input_find_pane_t1_ParamLimits

0xbfd1,	// (0x0000bfd1) input_find_pane_t1

0xbfe6,	// (0x0000bfe6) input_find_pane_t2_ParamLimits

0xbfe6,	// (0x0000bfe6) input_find_pane_t2

0x0001,

0xf351,	// (0x0000f351) input_find_pane_t_ParamLimits

0xf351,	// (0x0000f351) input_find_pane_t

0x15bc,	// (0x000015bc) input_focus_pane_cp5_ParamLimits

0x15bc,	// (0x000015bc) input_focus_pane_cp5

0x15d6,	// (0x000015d6) bg_popup_window_pane_cp2_ParamLimits

0x15d6,	// (0x000015d6) bg_popup_window_pane_cp2

0x15e3,	// (0x000015e3) listscroll_menu_pane_ParamLimits

0x15e3,	// (0x000015e3) listscroll_menu_pane

0xc007,	// (0x0000c007) popup_submenu_window_ParamLimits

0xc007,	// (0x0000c007) popup_submenu_window

0x161b,	// (0x0000161b) find_popup_pane_g1

0x1623,	// (0x00001623) input_popup_find_pane_cp

0x15bc,	// (0x000015bc) input_focus_pane_cp4_ParamLimits

0x15bc,	// (0x000015bc) input_focus_pane_cp4

0x1639,	// (0x00001639) input_popup_find_pane_t1_ParamLimits

0x1639,	// (0x00001639) input_popup_find_pane_t1

0x0293,	// (0x00000293) bg_popup_sub_pane_cp

0x1667,	// (0x00001667) listscroll_popup_sub_pane

0x166f,	// (0x0000166f) list_submenu_pane_ParamLimits

0x166f,	// (0x0000166f) list_submenu_pane

0x1680,	// (0x00001680) scroll_pane_cp4

0x1688,	// (0x00001688) list_single_popup_submenu_pane_ParamLimits

0x1688,	// (0x00001688) list_single_popup_submenu_pane

0x169c,	// (0x0000169c) list_single_popup_submenu_pane_g1

0x16a4,	// (0x000016a4) list_single_popup_submenu_pane_t1_ParamLimits

0x16a4,	// (0x000016a4) list_single_popup_submenu_pane_t1

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1

0x16b9,	// (0x000016b9) tabs_2_active_pane_g1

0xc041,	// (0x0000c041) tabs_2_active_pane_t1

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1_ParamLimits

0x082d,	// (0x0000082d) bg_passive_tab_pane_cp1

0x16b9,	// (0x000016b9) tabs_2_passive_pane_g1

0xc041,	// (0x0000c041) tabs_2_passive_pane_t1

0x0507,	// (0x00000507) bg_active_tab_pane_cp4

0xc053,	// (0x0000c053) tabs_2_long_active_pane_t1

0x2ba9,	// (0x00002ba9) bg_passive_tab_pane_cp4

0x3773,	// (0x00003773) list_single_midp_graphic_pane_g4_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5

0xc066,	// (0x0000c066) tabs_3_long_active_pane_t1

0x2ba9,	// (0x00002ba9) bg_passive_tab_pane_cp5

0x3773,	// (0x00003773) list_single_midp_graphic_pane_g4

0x0507,	// (0x00000507) bg_popup_window_pane_cp13_ParamLimits

0x0507,	// (0x00000507) bg_popup_window_pane_cp13

0x171b,	// (0x0000171b) listscroll_popup_fast_pane_ParamLimits

0x171b,	// (0x0000171b) listscroll_popup_fast_pane

0x172a,	// (0x0000172a) grid_popup_fast_pane_ParamLimits

0x172a,	// (0x0000172a) grid_popup_fast_pane

0x173c,	// (0x0000173c) scroll_pane_cp9_ParamLimits

0x173c,	// (0x0000173c) scroll_pane_cp9

0x73f3,	// (0x000073f3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x73f3,	// (0x000073f3) list_single_graphic_hl_pane_t1_cp2

0x1760,	// (0x00001760) input_focus_pane_cp20_ParamLimits

0x1760,	// (0x00001760) input_focus_pane_cp20

0x176e,	// (0x0000176e) query_popup_data_pane_t1_ParamLimits

0x176e,	// (0x0000176e) query_popup_data_pane_t1

0x1781,	// (0x00001781) query_popup_data_pane_t2_ParamLimits

0x1781,	// (0x00001781) query_popup_data_pane_t2

0x17c7,	// (0x000017c7) query_popup_data_pane_t3_ParamLimits

0x17c7,	// (0x000017c7) query_popup_data_pane_t3

0x1808,	// (0x00001808) query_popup_data_pane_t4_ParamLimits

0x1808,	// (0x00001808) query_popup_data_pane_t4

0x1844,	// (0x00001844) query_popup_data_pane_t5_ParamLimits

0x1844,	// (0x00001844) query_popup_data_pane_t5

0x0004,

0xad0f,	// (0x0000ad0f) query_popup_data_pane_t_ParamLimits

0xad0f,	// (0x0000ad0f) query_popup_data_pane_t

0x14bf,	// (0x000014bf) bg_set_opt_pane_g1

0x14c7,	// (0x000014c7) bg_set_opt_pane_g2

0x14cf,	// (0x000014cf) bg_set_opt_pane_g3

0x14d7,	// (0x000014d7) bg_set_opt_pane_g4

0x14df,	// (0x000014df) bg_set_opt_pane_g5

0x14e7,	// (0x000014e7) bg_set_opt_pane_g6

0x14ef,	// (0x000014ef) bg_set_opt_pane_g7

0x14f7,	// (0x000014f7) bg_set_opt_pane_g8

0x14ff,	// (0x000014ff) bg_set_opt_pane_g9

0x0008,

0xad1a,	// (0x0000ad1a) bg_set_opt_pane_g

0x2164,	// (0x00002164) control_top_pane_stacon_ParamLimits

0x2164,	// (0x00002164) control_top_pane_stacon

0x21b7,	// (0x000021b7) signal_pane_stacon_ParamLimits

0x21b7,	// (0x000021b7) signal_pane_stacon

0x21dc,	// (0x000021dc) stacon_top_pane_g1_ParamLimits

0x21dc,	// (0x000021dc) stacon_top_pane_g1

0x21fe,	// (0x000021fe) title_pane_stacon_ParamLimits

0x21fe,	// (0x000021fe) title_pane_stacon

0x2228,	// (0x00002228) uni_indicator_pane_stacon_ParamLimits

0x2228,	// (0x00002228) uni_indicator_pane_stacon

0x223d,	// (0x0000223d) battery_pane_stacon_ParamLimits

0x223d,	// (0x0000223d) battery_pane_stacon

0x2281,	// (0x00002281) control_bottom_pane_stacon_ParamLimits

0x2281,	// (0x00002281) control_bottom_pane_stacon

0x22a4,	// (0x000022a4) navi_pane_stacon_ParamLimits

0x22a4,	// (0x000022a4) navi_pane_stacon

0x22c7,	// (0x000022c7) stacon_bottom_pane_g1_ParamLimits

0x22c7,	// (0x000022c7) stacon_bottom_pane_g1

0x187b,	// (0x0000187b) aid_levels_signal_lsc_ParamLimits

0x187b,	// (0x0000187b) aid_levels_signal_lsc

0x1891,	// (0x00001891) signal_pane_stacon_g1_ParamLimits

0x1891,	// (0x00001891) signal_pane_stacon_g1

0x18a5,	// (0x000018a5) signal_pane_stacon_g2_ParamLimits

0x18a5,	// (0x000018a5) signal_pane_stacon_g2

0x0001,

0xad2d,	// (0x0000ad2d) signal_pane_stacon_g_ParamLimits

0xad2d,	// (0x0000ad2d) signal_pane_stacon_g

0x18e7,	// (0x000018e7) title_pane_stacon_t1_ParamLimits

0x18e7,	// (0x000018e7) title_pane_stacon_t1

0x190c,	// (0x0000190c) uni_indicator_pane_stacon_g1

0x1916,	// (0x00001916) uni_indicator_pane_stacon_g2

0x1920,	// (0x00001920) uni_indicator_pane_stacon_g3

0x192a,	// (0x0000192a) uni_indicator_pane_stacon_g4

0x0003,

0xad39,	// (0x0000ad39) uni_indicator_pane_stacon_g

0x1934,	// (0x00001934) control_top_pane_stacon_g1

0x193c,	// (0x0000193c) control_top_pane_stacon_t1_ParamLimits

0x193c,	// (0x0000193c) control_top_pane_stacon_t1

0x1973,	// (0x00001973) aid_levels_battery_lsc_ParamLimits

0x1973,	// (0x00001973) aid_levels_battery_lsc

0x198a,	// (0x0000198a) battery_pane_stacon_g1_ParamLimits

0x198a,	// (0x0000198a) battery_pane_stacon_g1

0x199d,	// (0x0000199d) battery_pane_stacon_g2_ParamLimits

0x199d,	// (0x0000199d) battery_pane_stacon_g2

0x0001,

0xad42,	// (0x0000ad42) battery_pane_stacon_g_ParamLimits

0xad42,	// (0x0000ad42) battery_pane_stacon_g

0x19db,	// (0x000019db) navi_icon_pane_stacon

0x19ef,	// (0x000019ef) navi_navi_pane_stacon

0x19db,	// (0x000019db) navi_text_pane_stacon

0x1934,	// (0x00001934) control_bottom_pane_stacon_g1

0x1a03,	// (0x00001a03) control_bottom_pane_stacon_t1_ParamLimits

0x1a03,	// (0x00001a03) control_bottom_pane_stacon_t1

0xc078,	// (0x0000c078) grid_app_pane_ParamLimits

0xc078,	// (0x0000c078) grid_app_pane

0xc0b0,	// (0x0000c0b0) scroll_pane_cp15_ParamLimits

0xc0b0,	// (0x0000c0b0) scroll_pane_cp15

0xc0c5,	// (0x0000c0c5) cell_app_pane_ParamLimits

0xc0c5,	// (0x0000c0c5) cell_app_pane

0xc10a,	// (0x0000c10a) cell_app_pane_g1_ParamLimits

0xc10a,	// (0x0000c10a) cell_app_pane_g1

0x1ad7,	// (0x00001ad7) cell_app_pane_g2_ParamLimits

0x1ad7,	// (0x00001ad7) cell_app_pane_g2

0x0001,

0xf356,	// (0x0000f356) cell_app_pane_g_ParamLimits

0xf356,	// (0x0000f356) cell_app_pane_g

0xc12e,	// (0x0000c12e) cell_app_pane_t1_ParamLimits

0xc12e,	// (0x0000c12e) cell_app_pane_t1

0x1afa,	// (0x00001afa) grid_highlight_pane_ParamLimits

0x1afa,	// (0x00001afa) grid_highlight_pane

0x14bf,	// (0x000014bf) cell_highlight_pane_g1

0x14c7,	// (0x000014c7) cell_highlight_pane_g2

0x14cf,	// (0x000014cf) cell_highlight_pane_g3

0x14d7,	// (0x000014d7) cell_highlight_pane_g4

0x14df,	// (0x000014df) cell_highlight_pane_g5

0x14e7,	// (0x000014e7) cell_highlight_pane_g6

0x14ef,	// (0x000014ef) cell_highlight_pane_g7

0x14f7,	// (0x000014f7) cell_highlight_pane_g8

0x14ff,	// (0x000014ff) cell_highlight_pane_g9

0x002e,	// (0x0000002e) cell_highlight_pane_g10

0x0009,

0xacf5,	// (0x0000acf5) cell_highlight_pane_g

0x1b1e,	// (0x00001b1e) bg_scroll_pane

0x1b3d,	// (0x00001b3d) scroll_handle_pane

0x1b8e,	// (0x00001b8e) scroll_bg_pane_g1

0x1ba3,	// (0x00001ba3) scroll_bg_pane_g2

0x1bbb,	// (0x00001bbb) scroll_bg_pane_g3

0x0002,

0xad4c,	// (0x0000ad4c) scroll_bg_pane_g

0x1bd0,	// (0x00001bd0) scroll_handle_focus_pane_ParamLimits

0x1bd0,	// (0x00001bd0) scroll_handle_focus_pane

0x1b8e,	// (0x00001b8e) scroll_handle_pane_g1

0x1bdd,	// (0x00001bdd) scroll_handle_pane_g2

0x1bbb,	// (0x00001bbb) scroll_handle_pane_g3

0x0002,

0xad53,	// (0x0000ad53) scroll_handle_pane_g

0x15bc,	// (0x000015bc) bg_popup_sub_pane_cp21_ParamLimits

0x15bc,	// (0x000015bc) bg_popup_sub_pane_cp21

0x1bf1,	// (0x00001bf1) popup_fep_japan_predictive_window_t1_ParamLimits

0x1bf1,	// (0x00001bf1) popup_fep_japan_predictive_window_t1

0x1c0b,	// (0x00001c0b) popup_fep_japan_predictive_window_t2_ParamLimits

0x1c0b,	// (0x00001c0b) popup_fep_japan_predictive_window_t2

0x1c3e,	// (0x00001c3e) popup_fep_japan_predictive_window_t3_ParamLimits

0x1c3e,	// (0x00001c3e) popup_fep_japan_predictive_window_t3

0x0002,

0xad5a,	// (0x0000ad5a) popup_fep_japan_predictive_window_t_ParamLimits

0xad5a,	// (0x0000ad5a) popup_fep_japan_predictive_window_t

0x0293,	// (0x00000293) bg_popup_sub_pane_cp23

0x1c75,	// (0x00001c75) listscroll_japin_cand_pane

0x1c7d,	// (0x00001c7d) popup_fep_japan_candidate_window_t1

0x1c8b,	// (0x00001c8b) candidate_pane_ParamLimits

0x1c8b,	// (0x00001c8b) candidate_pane

0x1c9d,	// (0x00001c9d) scroll_pane_cp30

0x1ca5,	// (0x00001ca5) list_single_popup_jap_candidate_pane_ParamLimits

0x1ca5,	// (0x00001ca5) list_single_popup_jap_candidate_pane

0x0293,	// (0x00000293) list_highlight_pane_cp30

0x1cba,	// (0x00001cba) list_single_popup_jap_candidate_pane_t1

0x1cc9,	// (0x00001cc9) level_1_signal

0x1cdb,	// (0x00001cdb) level_2_signal

0x1cee,	// (0x00001cee) level_3_signal

0x1d01,	// (0x00001d01) level_4_signal

0x1d14,	// (0x00001d14) level_5_signal

0x1d27,	// (0x00001d27) level_6_signal

0x1d3a,	// (0x00001d3a) level_7_signal

0x1cc9,	// (0x00001cc9) level_1_battery

0x1cdb,	// (0x00001cdb) level_2_battery

0x1cee,	// (0x00001cee) level_3_battery

0x1d01,	// (0x00001d01) level_4_battery

0x1d14,	// (0x00001d14) level_5_battery

0x1d27,	// (0x00001d27) level_6_battery

0x1d3a,	// (0x00001d3a) level_7_battery

0x1d84,	// (0x00001d84) list_menu_pane_ParamLimits

0x1d84,	// (0x00001d84) list_menu_pane

0x1d9a,	// (0x00001d9a) scroll_pane_cp25_ParamLimits

0x1d9a,	// (0x00001d9a) scroll_pane_cp25

0x1db3,	// (0x00001db3) list_double2_graphic_pane_cp2_ParamLimits

0x1db3,	// (0x00001db3) list_double2_graphic_pane_cp2

0x1db3,	// (0x00001db3) list_double2_large_graphic_pane_cp2_ParamLimits

0x1db3,	// (0x00001db3) list_double2_large_graphic_pane_cp2

0x1db3,	// (0x00001db3) list_double2_pane_cp2_ParamLimits

0x1db3,	// (0x00001db3) list_double2_pane_cp2

0x1db3,	// (0x00001db3) list_double_graphic_pane_cp2_ParamLimits

0x1db3,	// (0x00001db3) list_double_graphic_pane_cp2

0x1db3,	// (0x00001db3) list_double_large_graphic_pane_cp2_ParamLimits

0x1db3,	// (0x00001db3) list_double_large_graphic_pane_cp2

0x1db3,	// (0x00001db3) list_double_number_pane_cp2_ParamLimits

0x1db3,	// (0x00001db3) list_double_number_pane_cp2

0x1db3,	// (0x00001db3) list_double_pane_cp2_ParamLimits

0x1db3,	// (0x00001db3) list_double_pane_cp2

0xc14e,	// (0x0000c14e) list_single_2graphic_pane_cp2_ParamLimits

0xc14e,	// (0x0000c14e) list_single_2graphic_pane_cp2

0xc14e,	// (0x0000c14e) list_single_graphic_heading_pane_cp2_ParamLimits

0xc14e,	// (0x0000c14e) list_single_graphic_heading_pane_cp2

0xc14e,	// (0x0000c14e) list_single_graphic_pane_cp2_ParamLimits

0xc14e,	// (0x0000c14e) list_single_graphic_pane_cp2

0xc14e,	// (0x0000c14e) list_single_heading_pane_cp2_ParamLimits

0xc14e,	// (0x0000c14e) list_single_heading_pane_cp2

0x1df0,	// (0x00001df0) list_single_large_graphic_pane_cp2_ParamLimits

0x1df0,	// (0x00001df0) list_single_large_graphic_pane_cp2

0xc14e,	// (0x0000c14e) list_single_number_heading_pane_cp2_ParamLimits

0xc14e,	// (0x0000c14e) list_single_number_heading_pane_cp2

0xc14e,	// (0x0000c14e) list_single_number_pane_cp2_ParamLimits

0xc14e,	// (0x0000c14e) list_single_number_pane_cp2

0xc14e,	// (0x0000c14e) list_single_pane_cp2_ParamLimits

0xc14e,	// (0x0000c14e) list_single_pane_cp2

0x1ec7,	// (0x00001ec7) bg_popup_sub_pane_cp22

0x1eec,	// (0x00001eec) popup_side_volume_key_window_g1

0x1f16,	// (0x00001f16) popup_side_volume_key_window_t1

0x1f32,	// (0x00001f32) volume_small_pane_cp1

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24_ParamLimits

0x082d,	// (0x0000082d) bg_popup_sub_pane_cp24

0x1f3a,	// (0x00001f3a) fep_china_uni_candidate_pane_ParamLimits

0x1f3a,	// (0x00001f3a) fep_china_uni_candidate_pane

0x1f4e,	// (0x00001f4e) fep_china_uni_entry_pane

0x1f5e,	// (0x00001f5e) popup_fep_china_uni_window_g1

0x1f7a,	// (0x00001f7a) fep_china_uni_entry_pane_g1

0x1f82,	// (0x00001f82) fep_china_uni_entry_pane_g2

0x0001,

0xad8b,	// (0x0000ad8b) fep_china_uni_entry_pane_g

0x1f8a,	// (0x00001f8a) fep_entry_item_pane

0x1f94,	// (0x00001f94) fep_candidate_item_pane

0x1f9c,	// (0x00001f9c) fep_china_uni_candidate_pane_g1

0x1fa4,	// (0x00001fa4) fep_china_uni_candidate_pane_g2

0x1fac,	// (0x00001fac) fep_china_uni_candidate_pane_g3

0x1fb4,	// (0x00001fb4) fep_china_uni_candidate_pane_g4

0x0003,

0xad90,	// (0x0000ad90) fep_china_uni_candidate_pane_g

0x002e,	// (0x0000002e) fep_entry_item_pane_g1

0x1fbc,	// (0x00001fbc) fep_entry_item_pane_t1_ParamLimits

0x1fbc,	// (0x00001fbc) fep_entry_item_pane_t1

0x1fd2,	// (0x00001fd2) fep_candidate_item_pane_t1_ParamLimits

0x1fd2,	// (0x00001fd2) fep_candidate_item_pane_t1

0x1fe7,	// (0x00001fe7) fep_candidate_item_pane_t2_ParamLimits

0x1fe7,	// (0x00001fe7) fep_candidate_item_pane_t2

0x0001,

0xad99,	// (0x0000ad99) fep_candidate_item_pane_t_ParamLimits

0xad99,	// (0x0000ad99) fep_candidate_item_pane_t

0x0507,	// (0x00000507) list_highlight_pane_cp31_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp31

0x1ff9,	// (0x00001ff9) level_1_signal_lsc

0x2002,	// (0x00002002) level_2_signal_lsc

0x200b,	// (0x0000200b) level_3_signal_lsc

0x2014,	// (0x00002014) level_4_signal_lsc

0x201d,	// (0x0000201d) level_5_signal_lsc

0x2026,	// (0x00002026) level_6_signal_lsc

0x202f,	// (0x0000202f) level_7_signal_lsc

0x202f,	// (0x0000202f) level_1_battery_lsc

0x2038,	// (0x00002038) level_2_battery_lsc

0x2041,	// (0x00002041) level_3_battery_lsc

0x204a,	// (0x0000204a) level_4_battery_lsc

0x2053,	// (0x00002053) level_5_battery_lsc

0x205c,	// (0x0000205c) level_6_battery_lsc

0x1ff9,	// (0x00001ff9) level_7_battery_lsc

0x2065,	// (0x00002065) scroll_handle_focus_pane_g1

0x206e,	// (0x0000206e) scroll_handle_focus_pane_g2

0x2077,	// (0x00002077) scroll_handle_focus_pane_g3

0x0002,

0xad9e,	// (0x0000ad9e) scroll_handle_focus_pane_g

0xc1db,	// (0x0000c1db) list_single_2graphic_pane_g1_ParamLimits

0xc1db,	// (0x0000c1db) list_single_2graphic_pane_g1

0xbb1c,	// (0x0000bb1c) list_single_2graphic_pane_g2_ParamLimits

0xbb1c,	// (0x0000bb1c) list_single_2graphic_pane_g2

0x35a2,	// (0x000035a2) list_single_2graphic_pane_g3_ParamLimits

0x35a2,	// (0x000035a2) list_single_2graphic_pane_g3

0xc1e7,	// (0x0000c1e7) list_single_2graphic_pane_g4_ParamLimits

0xc1e7,	// (0x0000c1e7) list_single_2graphic_pane_g4

0x0003,

0xf364,	// (0x0000f364) list_single_2graphic_pane_g_ParamLimits

0xf364,	// (0x0000f364) list_single_2graphic_pane_g

0xc1f8,	// (0x0000c1f8) list_single_2graphic_pane_t1_ParamLimits

0xc1f8,	// (0x0000c1f8) list_single_2graphic_pane_t1

0xc226,	// (0x0000c226) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc226,	// (0x0000c226) list_double2_graphic_large_graphic_pane_g1

0xbb65,	// (0x0000bb65) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbb65,	// (0x0000bb65) list_double2_graphic_large_graphic_pane_g2

0xbb76,	// (0x0000bb76) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbb76,	// (0x0000bb76) list_double2_graphic_large_graphic_pane_g3

0xc238,	// (0x0000c238) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc238,	// (0x0000c238) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf36d,	// (0x0000f36d) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf36d,	// (0x0000f36d) list_double2_graphic_large_graphic_pane_g

0xc244,	// (0x0000c244) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc244,	// (0x0000c244) list_double2_graphic_large_graphic_pane_t1

0xc25a,	// (0x0000c25a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc25a,	// (0x0000c25a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf376,	// (0x0000f376) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf376,	// (0x0000f376) list_double2_graphic_large_graphic_pane_t

0x238f,	// (0x0000238f) popup_fast_swap_window_ParamLimits

0x238f,	// (0x0000238f) popup_fast_swap_window

0x23ab,	// (0x000023ab) popup_side_volume_key_window

0x23c7,	// (0x000023c7) stacon_top_pane

0x23d1,	// (0x000023d1) status_pane_ParamLimits

0x23d1,	// (0x000023d1) status_pane

0xc26c,	// (0x0000c26c) status_small_pane

0x0293,	// (0x00000293) control_pane

0x0293,	// (0x00000293) stacon_bottom_pane

0x12ad,	// (0x000012ad) scroll_pane_cp121

0x12a4,	// (0x000012a4) set_content_pane

0x210f,	// (0x0000210f) bg_active_tab_pane_g1_cp1

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp1

0x2121,	// (0x00002121) bg_active_tab_pane_g3_cp1

0x210f,	// (0x0000210f) bg_passive_tab_pane_g1_cp1

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp1

0x2121,	// (0x00002121) bg_passive_tab_pane_g3_cp1

0x212a,	// (0x0000212a) bg_active_tab_pane_g1_cp2

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp2

0x2133,	// (0x00002133) bg_active_tab_pane_g3_cp2

0x212a,	// (0x0000212a) bg_passive_tab_pane_g1_cp2

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp2

0x2133,	// (0x00002133) bg_passive_tab_pane_g3_cp2

0x213c,	// (0x0000213c) bg_active_tab_pane_g1_cp3

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp3

0x2145,	// (0x00002145) bg_active_tab_pane_g3_cp3

0x213c,	// (0x0000213c) bg_passive_tab_pane_g1_cp3

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp3

0x2145,	// (0x00002145) bg_passive_tab_pane_g3_cp3

0x214e,	// (0x0000214e) bg_active_tab_pane_g1_cp4

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp4

0x2159,	// (0x00002159) bg_active_tab_pane_g3_cp4

0x214e,	// (0x0000214e) bg_passive_tab_pane_g1_cp4

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp4

0x2159,	// (0x00002159) bg_passive_tab_pane_g3_cp4

0x22e3,	// (0x000022e3) bg_active_tab_pane_g1_cp5

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp5

0x22ec,	// (0x000022ec) bg_active_tab_pane_g3_cp5

0x22e3,	// (0x000022e3) bg_passive_tab_pane_g1_cp5

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp5

0x22ec,	// (0x000022ec) bg_passive_tab_pane_g3_cp5

0x5863,	// (0x00005863) list_set_graphic_pane_ParamLimits

0x5863,	// (0x00005863) list_set_graphic_pane

0x0293,	// (0x00000293) bg_set_opt_pane_cp4

0x2312,	// (0x00002312) list_set_graphic_pane_g1_ParamLimits

0x2312,	// (0x00002312) list_set_graphic_pane_g1

0x231e,	// (0x0000231e) list_set_graphic_pane_g2_ParamLimits

0x231e,	// (0x0000231e) list_set_graphic_pane_g2

0x0001,

0xadbc,	// (0x0000adbc) list_set_graphic_pane_g_ParamLimits

0xadbc,	// (0x0000adbc) list_set_graphic_pane_g

0x0009,

0xb136,	// (0x0000b136) volume_small_pane_cp_g

0x2342,	// (0x00002342) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2342,	// (0x00002342) list_double2_large_graphic_pane_g1_cp2

0x234e,	// (0x0000234e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x234e,	// (0x0000234e) list_double2_large_graphic_pane_g2_cp2

0x235f,	// (0x0000235f) list_double2_large_graphic_pane_g3_cp2

0x2367,	// (0x00002367) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2367,	// (0x00002367) list_double2_large_graphic_pane_t1_cp2

0x237d,	// (0x0000237d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x237d,	// (0x0000237d) list_double2_large_graphic_pane_t2_cp2

0x4b45,	// (0x00004b45) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4b45,	// (0x00004b45) list_double_large_graphic_pane_g1_cp2

0x4b56,	// (0x00004b56) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4b56,	// (0x00004b56) list_double_large_graphic_pane_g2_cp2

0x24f8,	// (0x000024f8) list_double_large_graphic_pane_g3_cp2

0x4b67,	// (0x00004b67) list_double_large_graphic_pane_g4_cp

0x4b6f,	// (0x00004b6f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4b6f,	// (0x00004b6f) list_double_large_graphic_pane_t1_cp2

0x4b86,	// (0x00004b86) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4b86,	// (0x00004b86) list_double_large_graphic_pane_t2_cp2

0x23ea,	// (0x000023ea) list_double2_graphic_pane_g1_cp2_ParamLimits

0x23ea,	// (0x000023ea) list_double2_graphic_pane_g1_cp2

0x23f8,	// (0x000023f8) list_double2_graphic_pane_g2_cp2_ParamLimits

0x23f8,	// (0x000023f8) list_double2_graphic_pane_g2_cp2

0x2409,	// (0x00002409) list_double2_graphic_pane_g3_cp2

0x2413,	// (0x00002413) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2413,	// (0x00002413) list_double2_graphic_pane_t1_cp2

0x2429,	// (0x00002429) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2429,	// (0x00002429) list_double2_graphic_pane_t2_cp2

0x243b,	// (0x0000243b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x243b,	// (0x0000243b) list_single_number_heading_pane_g1_cp2

0x2447,	// (0x00002447) list_single_number_heading_pane_g2_cp2

0x244f,	// (0x0000244f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x244f,	// (0x0000244f) list_single_number_heading_pane_t1_cp2

0x2465,	// (0x00002465) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2465,	// (0x00002465) list_single_number_heading_pane_t2_cp2

0x2477,	// (0x00002477) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2477,	// (0x00002477) list_single_number_heading_pane_t3_cp2

0x243b,	// (0x0000243b) list_single_heading_pane_g1_cp2_ParamLimits

0x243b,	// (0x0000243b) list_single_heading_pane_g1_cp2

0x2447,	// (0x00002447) list_single_heading_pane_g2_cp2

0x244f,	// (0x0000244f) list_single_heading_pane_t1_cp2_ParamLimits

0x244f,	// (0x0000244f) list_single_heading_pane_t1_cp2

0x494d,	// (0x0000494d) list_single_heading_pane_t2_cp2_ParamLimits

0x494d,	// (0x0000494d) list_single_heading_pane_t2_cp2

0x4895,	// (0x00004895) list_double_graphic_pane_g1_cp2_ParamLimits

0x4895,	// (0x00004895) list_double_graphic_pane_g1_cp2

0x48a1,	// (0x000048a1) list_double_graphic_pane_g2_cp2_ParamLimits

0x48a1,	// (0x000048a1) list_double_graphic_pane_g2_cp2

0x48b0,	// (0x000048b0) list_double_graphic_pane_g3_cp2

0x48b8,	// (0x000048b8) list_double_graphic_pane_t1_cp2_ParamLimits

0x48b8,	// (0x000048b8) list_double_graphic_pane_t1_cp2

0x48ce,	// (0x000048ce) list_double_graphic_pane_t2_cp2_ParamLimits

0x48ce,	// (0x000048ce) list_double_graphic_pane_t2_cp2

0x24ec,	// (0x000024ec) list_double_number_pane_g1_cp2_ParamLimits

0x24ec,	// (0x000024ec) list_double_number_pane_g1_cp2

0x24f8,	// (0x000024f8) list_double_number_pane_g2_cp2

0x4859,	// (0x00004859) list_double_number_pane_t1_cp2_ParamLimits

0x4859,	// (0x00004859) list_double_number_pane_t1_cp2

0x486d,	// (0x0000486d) list_double_number_pane_t2_cp2_ParamLimits

0x486d,	// (0x0000486d) list_double_number_pane_t2_cp2

0x4883,	// (0x00004883) list_double_number_pane_t3_cp2_ParamLimits

0x4883,	// (0x00004883) list_double_number_pane_t3_cp2

0x4731,	// (0x00004731) list_single_graphic_pane_g1_cp2_ParamLimits

0x4731,	// (0x00004731) list_single_graphic_pane_g1_cp2

0x2550,	// (0x00002550) list_single_graphic_pane_g2_cp2_ParamLimits

0x2550,	// (0x00002550) list_single_graphic_pane_g2_cp2

0x255c,	// (0x0000255c) list_single_graphic_pane_g3_cp2

0x4707,	// (0x00004707) list_single_graphic_pane_t1_cp2_ParamLimits

0x4707,	// (0x00004707) list_single_graphic_pane_t1_cp2

0x2550,	// (0x00002550) list_single_number_pane_g1_cp2_ParamLimits

0x2550,	// (0x00002550) list_single_number_pane_g1_cp2

0x255c,	// (0x0000255c) list_single_number_pane_g2_cp2

0x4707,	// (0x00004707) list_single_number_pane_t1_cp2_ParamLimits

0x4707,	// (0x00004707) list_single_number_pane_t1_cp2

0x471d,	// (0x0000471d) list_single_number_pane_t2_cp2_ParamLimits

0x471d,	// (0x0000471d) list_single_number_pane_t2_cp2

0x234e,	// (0x0000234e) list_double2_pane_g1_cp2_ParamLimits

0x234e,	// (0x0000234e) list_double2_pane_g1_cp2

0x235f,	// (0x0000235f) list_double2_pane_g2_cp2

0x24c4,	// (0x000024c4) list_double2_pane_t1_cp2_ParamLimits

0x24c4,	// (0x000024c4) list_double2_pane_t1_cp2

0x24da,	// (0x000024da) list_double2_pane_t2_cp2_ParamLimits

0x24da,	// (0x000024da) list_double2_pane_t2_cp2

0x24ec,	// (0x000024ec) list_double_pane_g1_cp2_ParamLimits

0x24ec,	// (0x000024ec) list_double_pane_g1_cp2

0x24f8,	// (0x000024f8) list_double_pane_g2_cp2

0x2500,	// (0x00002500) list_double_pane_t1_cp2_ParamLimits

0x2500,	// (0x00002500) list_double_pane_t1_cp2

0x2516,	// (0x00002516) list_double_pane_t2_cp2_ParamLimits

0x2516,	// (0x00002516) list_double_pane_t2_cp2

0x2540,	// (0x00002540) list_single_pane_cp2_g3

0x2550,	// (0x00002550) list_single_pane_g1_cp2_ParamLimits

0x2550,	// (0x00002550) list_single_pane_g1_cp2

0x255c,	// (0x0000255c) list_single_pane_g2_cp2

0x2564,	// (0x00002564) list_single_pane_t1_cp2_ParamLimits

0x2564,	// (0x00002564) list_single_pane_t1_cp2

0x257c,	// (0x0000257c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x257c,	// (0x0000257c) list_single_large_graphic_pane_g1_cp2

0x2588,	// (0x00002588) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2588,	// (0x00002588) list_single_large_graphic_pane_g2_cp2

0x2594,	// (0x00002594) list_single_large_graphic_pane_g3_cp2

0x259c,	// (0x0000259c) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x259c,	// (0x0000259c) list_single_large_graphic_pane_g4_cp1

0x25b6,	// (0x000025b6) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x25b6,	// (0x000025b6) list_single_large_graphic_pane_t1_cp2

0x4580,	// (0x00004580) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4580,	// (0x00004580) list_single_graphic_heading_pane_g1_cp2

0x454d,	// (0x0000454d) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x454d,	// (0x0000454d) list_single_graphic_heading_pane_g4_cp2

0x255c,	// (0x0000255c) list_single_graphic_heading_pane_g5_cp2

0x458c,	// (0x0000458c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x458c,	// (0x0000458c) list_single_graphic_heading_pane_t1_cp2

0x45a2,	// (0x000045a2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x45a2,	// (0x000045a2) list_single_graphic_heading_pane_t2_cp2

0x4541,	// (0x00004541) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4541,	// (0x00004541) list_single_2graphic_pane_g1_cp2

0x454d,	// (0x0000454d) list_single_2graphic_pane_g2_cp2_ParamLimits

0x454d,	// (0x0000454d) list_single_2graphic_pane_g2_cp2

0x255c,	// (0x0000255c) list_single_2graphic_pane_g3_cp2

0x455e,	// (0x0000455e) list_single_2graphic_pane_g4_cp2_ParamLimits

0x455e,	// (0x0000455e) list_single_2graphic_pane_g4_cp2

0x456a,	// (0x0000456a) list_single_2graphic_pane_t1_cp2_ParamLimits

0x456a,	// (0x0000456a) list_single_2graphic_pane_t1_cp2

0x002e,	// (0x0000002e) list_highlight_pane_g10_cp1

0x4119,	// (0x00004119) list_highlight_pane_g1_cp1

0x4121,	// (0x00004121) list_highlight_pane_g2_cp1

0x4129,	// (0x00004129) list_highlight_pane_g3_cp1

0x4131,	// (0x00004131) list_highlight_pane_g4_cp1

0x4139,	// (0x00004139) list_highlight_pane_g5_cp1

0x4141,	// (0x00004141) list_highlight_pane_g6_cp1

0x4149,	// (0x00004149) list_highlight_pane_g7_cp1

0x4151,	// (0x00004151) list_highlight_pane_g8_cp1

0x4159,	// (0x00004159) list_highlight_pane_g9_cp1

0xd17f,	// (0x0000d17f) form_field_slider_pane_t3

0xd18d,	// (0x0000d18d) form_field_slider_pane_t4

0x4055,	// (0x00004055) slider_form_pane_ParamLimits

0x4055,	// (0x00004055) slider_form_pane

0x0293,	// (0x00000293) control_abbreviations

0x0293,	// (0x00000293) control_conventions

0x0293,	// (0x00000293) control_definitions

0x0293,	// (0x00000293) format_table_attribute

0x4997,	// (0x00004997) bg_popup_preview_window_pane_g9

0x0293,	// (0x00000293) format_table_data2

0x0293,	// (0x00000293) format_table_data3

0x0293,	// (0x00000293) format_table_data_example

0x0008,

0x0293,	// (0x00000293) intro_purpose

0xaf51,	// (0x0000af51) bg_popup_preview_window_pane_g

0x0293,	// (0x00000293) texts_category

0x0293,	// (0x00000293) texts_graphics

0x25cc,	// (0x000025cc) text_digital

0x25db,	// (0x000025db) text_primary

0x25ea,	// (0x000025ea) text_primary_small

0x25f9,	// (0x000025f9) text_secondary

0x2608,	// (0x00002608) text_title

0x528a,	// (0x0000528a) bg_passive_tab_pane_g1_cp3_srt

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp3_srt

0x5293,	// (0x00005293) bg_passive_tab_pane_g3_cp3_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp3_srt

0x529c,	// (0x0000529c) tabs_4_active_pane_srt_g1

0xd510,	// (0x0000d510) tabs_4_active_pane_srt_t1_ParamLimits

0xd510,	// (0x0000d510) tabs_4_active_pane_srt_t1

0x528a,	// (0x0000528a) bg_active_tab_pane_g1_cp3_copy1

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp3_copy1

0x5293,	// (0x00005293) bg_active_tab_pane_g3_cp3_copy1

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_active_pane_srt

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt_ParamLimits

0x0507,	// (0x00000507) tabs_2_long_passive_pane_srt

0x2ba9,	// (0x00002ba9) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2ba9,	// (0x00002ba9) bg_passive_tab_pane_cp4_srt

0x4e3d,	// (0x00004e3d) bg_passive_tab_pane_g1_cp4_srt

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp4_srt

0x4e46,	// (0x00004e46) bg_passive_tab_pane_g3_cp4_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_srt

0xd2fc,	// (0x0000d2fc) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd2fc,	// (0x0000d2fc) tabs_2_long_active_pane_srt_t1

0x4e3d,	// (0x00004e3d) bg_active_tab_pane_g1_cp4_srt

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp4_srt

0x4e46,	// (0x00004e46) bg_active_tab_pane_g3_cp4_srt

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_active_pane_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_cp_srt

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt_ParamLimits

0x082d,	// (0x0000082d) tabs_3_long_passive_pane_srt

0x2ba9,	// (0x00002ba9) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2ba9,	// (0x00002ba9) bg_passive_tab_pane_cp5_srt

0x22e3,	// (0x000022e3) bg_passive_tab_pane_g1_cp5_srt

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp5_srt

0x22ec,	// (0x000022ec) bg_passive_tab_pane_g3_cp5_srt

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_srt

0xd2e6,	// (0x0000d2e6) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd2e6,	// (0x0000d2e6) tabs_3_long_active_pane_srt_t1

0x22e3,	// (0x000022e3) bg_active_tab_pane_g1_cp5_srt

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp5_srt

0x22ec,	// (0x000022ec) bg_active_tab_pane_g3_cp5_srt

0x4e1d,	// (0x00004e1d) navi_text_pane_srt_t1

0x4e15,	// (0x00004e15) navi_icon_pane_srt_g1

0x2886,	// (0x00002886) midp_editing_number_pane_srt

0x2617,	// (0x00002617) midp_ticker_pane_srt

0x288e,	// (0x0000288e) midp_ticker_pane_srt_g1

0x2896,	// (0x00002896) midp_ticker_pane_srt_g2

0x0001,

0xaddb,	// (0x0000addb) midp_ticker_pane_srt_g

0x289e,	// (0x0000289e) midp_ticker_pane_srt_t1

0x4e06,	// (0x00004e06) midp_editing_number_pane_t1_copy1

0xc277,	// (0x0000c277) listscroll_midp_pane

0xc277,	// (0x0000c277) midp_form_pane

0x268f,	// (0x0000268f) midp_info_popup_window_ParamLimits

0x268f,	// (0x0000268f) midp_info_popup_window

0x15bc,	// (0x000015bc) bg_popup_sub_pane_cp50_ParamLimits

0x15bc,	// (0x000015bc) bg_popup_sub_pane_cp50

0x3d51,	// (0x00003d51) listscroll_midp_info_pane_ParamLimits

0x3d51,	// (0x00003d51) listscroll_midp_info_pane

0x3d31,	// (0x00003d31) listscroll_form_midp_pane_ParamLimits

0x3d31,	// (0x00003d31) listscroll_form_midp_pane

0x3d3d,	// (0x00003d3d) scroll_bar_cp050

0x3d31,	// (0x00003d31) list_midp_pane

0x60ed,	// (0x000060ed) signal_pane_g2_cp

0x3c4b,	// (0x00003c4b) listscroll_midp_info_pane_t1_ParamLimits

0x3c4b,	// (0x00003c4b) listscroll_midp_info_pane_t1

0x3c63,	// (0x00003c63) listscroll_midp_info_pane_t2_ParamLimits

0x3c63,	// (0x00003c63) listscroll_midp_info_pane_t2

0x3ca1,	// (0x00003ca1) listscroll_midp_info_pane_t3_ParamLimits

0x3ca1,	// (0x00003ca1) listscroll_midp_info_pane_t3

0x3cdb,	// (0x00003cdb) listscroll_midp_info_pane_t4_ParamLimits

0x3cdb,	// (0x00003cdb) listscroll_midp_info_pane_t4

0x0003,

0xae8c,	// (0x0000ae8c) listscroll_midp_info_pane_t_ParamLimits

0xae8c,	// (0x0000ae8c) listscroll_midp_info_pane_t

0x1680,	// (0x00001680) scroll_pane_cp21

0x3be9,	// (0x00003be9) form_midp_field_choice_group_pane

0x3bf2,	// (0x00003bf2) form_midp_field_text_pane

0x3c31,	// (0x00003c31) form_midp_field_time_pane

0x3c39,	// (0x00003c39) form_midp_gauge_slider_pane

0x3c42,	// (0x00003c42) form_midp_gauge_wait_pane

0x0293,	// (0x00000293) form_midp_image_pane

0xd169,	// (0x0000d169) list_single_midp_pane_ParamLimits

0xd169,	// (0x0000d169) list_single_midp_pane

0xd148,	// (0x0000d148) form_midp_field_text_pane_t1

0x38ac,	// (0x000038ac) input_focus_pane_cp050

0x3baa,	// (0x00003baa) list_midp_form_text_pane

0x3b42,	// (0x00003b42) form_midp_field_choice_group_pane_t1

0x3b50,	// (0x00003b50) input_focus_pane_cp051

0x3b64,	// (0x00003b64) list_midp_choice_pane

0x0293,	// (0x00000293) status_idle_pane

0x3b26,	// (0x00003b26) form_midp_field_time_pane_t1

0x002e,	// (0x0000002e) wait_anim_pane_g2_copy1

0x3b34,	// (0x00003b34) form_midp_field_time_pane_t2

0x0001,

0x273d,	// (0x0000273d) aid_navinavi_width_2_pane

0xae87,	// (0x0000ae87) form_midp_field_time_pane_t

0x0293,	// (0x00000293) input_focus_pane_cp052

0x0293,	// (0x00000293) bg_input_focus_pane_cp040

0x3ae6,	// (0x00003ae6) form_midp_gauge_slider_pane_t1

0x3af4,	// (0x00003af4) form_midp_gauge_slider_pane_t2

0xd12c,	// (0x0000d12c) form_midp_gauge_slider_pane_t3

0xd13a,	// (0x0000d13a) form_midp_gauge_slider_pane_t4

0x0003,

0xf3c8,	// (0x0000f3c8) form_midp_gauge_slider_pane_t

0x3b1e,	// (0x00003b1e) form_midp_slider_pane

0x0507,	// (0x00000507) bg_input_focus_pane_cp041_ParamLimits

0x0507,	// (0x00000507) bg_input_focus_pane_cp041

0x3ab3,	// (0x00003ab3) form_midp_gauge_wait_pane_t1_ParamLimits

0x3ab3,	// (0x00003ab3) form_midp_gauge_wait_pane_t1

0x3ac5,	// (0x00003ac5) form_midp_gauge_wait_pane_t2_ParamLimits

0x3ac5,	// (0x00003ac5) form_midp_gauge_wait_pane_t2

0x0001,

0xae79,	// (0x0000ae79) form_midp_gauge_wait_pane_t_ParamLimits

0xae79,	// (0x0000ae79) form_midp_gauge_wait_pane_t

0x3ad7,	// (0x00003ad7) form_midp_wait_pane_ParamLimits

0x3ad7,	// (0x00003ad7) form_midp_wait_pane

0x3a7d,	// (0x00003a7d) form_midp_image_pane_g1

0x3a86,	// (0x00003a86) form_midp_image_pane_t1

0x3a95,	// (0x00003a95) form_midp_image_pane_t2

0x3aa4,	// (0x00003aa4) form_midp_image_pane_t3

0x0002,

0xae72,	// (0x0000ae72) form_midp_image_pane_t

0x3a65,	// (0x00003a65) list_single_midp_pane_g1

0x3a6e,	// (0x00003a6e) list_single_midp_pane_t1

0xd118,	// (0x0000d118) list_midp_form_item_pane_ParamLimits

0xd118,	// (0x0000d118) list_midp_form_item_pane

0x26e5,	// (0x000026e5) list_midp_form_item_pane_t1

0x26f4,	// (0x000026f4) midp_ticker_pane_g1

0x2700,	// (0x00002700) midp_ticker_pane_g2

0x0001,

0xadc1,	// (0x0000adc1) midp_ticker_pane_g

0x270c,	// (0x0000270c) midp_ticker_pane_t1

0x5102,	// (0x00005102) midp_editing_number_pane_t1

0x50e0,	// (0x000050e0) midp_editing_number_pane

0x50ef,	// (0x000050ef) midp_ticker_pane

0x4dce,	// (0x00004dce) ai_message_heading_pane

0x0293,	// (0x00000293) bg_popup_window_pane_cp14

0x4dd6,	// (0x00004dd6) listscroll_ai_message_pane

0x4d58,	// (0x00004d58) ai_message_heading_pane_g1_ParamLimits

0x4d58,	// (0x00004d58) ai_message_heading_pane_g1

0x4d64,	// (0x00004d64) ai_message_heading_pane_g2_ParamLimits

0x4d64,	// (0x00004d64) ai_message_heading_pane_g2

0x4d70,	// (0x00004d70) ai_message_heading_pane_g3_ParamLimits

0x4d70,	// (0x00004d70) ai_message_heading_pane_g3

0x4d7c,	// (0x00004d7c) ai_message_heading_pane_g4_ParamLimits

0x4d7c,	// (0x00004d7c) ai_message_heading_pane_g4

0x0003,

0xafb3,	// (0x0000afb3) ai_message_heading_pane_g_ParamLimits

0xafb3,	// (0x0000afb3) ai_message_heading_pane_g

0x4d88,	// (0x00004d88) ai_message_heading_pane_t1_ParamLimits

0x4d88,	// (0x00004d88) ai_message_heading_pane_t1

0x4da2,	// (0x00004da2) ai_message_heading_pane_t2_ParamLimits

0x4da2,	// (0x00004da2) ai_message_heading_pane_t2

0x0001,

0xafbc,	// (0x0000afbc) ai_message_heading_pane_t_ParamLimits

0xafbc,	// (0x0000afbc) ai_message_heading_pane_t

0x4db4,	// (0x00004db4) bg_popup_heading_pane_cp1_ParamLimits

0x4db4,	// (0x00004db4) bg_popup_heading_pane_cp1

0x4d46,	// (0x00004d46) list_ai_message_pane_ParamLimits

0x4d46,	// (0x00004d46) list_ai_message_pane

0x1680,	// (0x00001680) scroll_pane_cp10

0x4c92,	// (0x00004c92) list_ai_message_pane_g1

0x4c9a,	// (0x00004c9a) list_ai_message_pane_g2

0x0001,

0xaf90,	// (0x0000af90) list_ai_message_pane_g

0x4ca2,	// (0x00004ca2) list_ai_message_pane_t1_ParamLimits

0x4ca2,	// (0x00004ca2) list_ai_message_pane_t1

0x4cb7,	// (0x00004cb7) list_ai_message_pane_t2_ParamLimits

0x4cb7,	// (0x00004cb7) list_ai_message_pane_t2

0x4ccc,	// (0x00004ccc) list_ai_message_pane_t3_ParamLimits

0x4ccc,	// (0x00004ccc) list_ai_message_pane_t3

0x4ce1,	// (0x00004ce1) list_ai_message_pane_t4_ParamLimits

0x4ce1,	// (0x00004ce1) list_ai_message_pane_t4

0x0003,

0xaf95,	// (0x0000af95) list_ai_message_pane_t_ParamLimits

0xaf95,	// (0x0000af95) list_ai_message_pane_t

0xd2b3,	// (0x0000d2b3) cell_ai_soft_ind_pane_ParamLimits

0xd2b3,	// (0x0000d2b3) cell_ai_soft_ind_pane

0x271e,	// (0x0000271e) cell_ai_soft_ind_pane_g1_ParamLimits

0x271e,	// (0x0000271e) cell_ai_soft_ind_pane_g1

0x0293,	// (0x00000293) grid_highlight_cp1

0x272b,	// (0x0000272b) text_secondary_cp56_ParamLimits

0x272b,	// (0x0000272b) text_secondary_cp56

0x4c52,	// (0x00004c52) example_general_pane_ParamLimits

0x4c52,	// (0x00004c52) example_general_pane

0x4c5e,	// (0x00004c5e) example_parent_pane_g1_ParamLimits

0x4c5e,	// (0x00004c5e) example_parent_pane_g1

0x4c6a,	// (0x00004c6a) example_parent_pane_t1_ParamLimits

0x4c6a,	// (0x00004c6a) example_parent_pane_t1

0xc963,	// (0x0000c963) popup_preview_text_window_ParamLimits

0xc963,	// (0x0000c963) popup_preview_text_window

0x2548,	// (0x00002548) list_single_pane_cp2_g4

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane_ParamLimits

0x08e3,	// (0x000008e3) bg_popup_preview_window_pane

0x499f,	// (0x0000499f) popup_preview_text_window_t1_ParamLimits

0x499f,	// (0x0000499f) popup_preview_text_window_t1

0x49bd,	// (0x000049bd) popup_preview_text_window_t2_ParamLimits

0x49bd,	// (0x000049bd) popup_preview_text_window_t2

0x4a06,	// (0x00004a06) popup_preview_text_window_t3_ParamLimits

0x4a06,	// (0x00004a06) popup_preview_text_window_t3

0x4a4b,	// (0x00004a4b) popup_preview_text_window_t4_ParamLimits

0x4a4b,	// (0x00004a4b) popup_preview_text_window_t4

0x0004,

0xaf64,	// (0x0000af64) popup_preview_text_window_t_ParamLimits

0xaf64,	// (0x0000af64) popup_preview_text_window_t

0x4ac9,	// (0x00004ac9) scroll_pane_cp11

0x36fe,	// (0x000036fe) bg_popup_preview_window_pane_g1

0x495f,	// (0x0000495f) bg_popup_preview_window_pane_g2

0x4967,	// (0x00004967) bg_popup_preview_window_pane_g3

0x496f,	// (0x0000496f) bg_popup_preview_window_pane_g4

0x4977,	// (0x00004977) bg_popup_preview_window_pane_g5

0x497f,	// (0x0000497f) bg_popup_preview_window_pane_g6

0x4987,	// (0x00004987) bg_popup_preview_window_pane_g7

0x498f,	// (0x0000498f) bg_popup_preview_window_pane_g8

0x0044,	// (0x00000044) aid_popup_width_pane

0xc8df,	// (0x0000c8df) popup_midp_note_alarm_window_ParamLimits

0xc8df,	// (0x0000c8df) popup_midp_note_alarm_window

0x136e,	// (0x0000136e) data_form_pane_ParamLimits

0xbeed,	// (0x0000beed) form_field_data_pane_g1

0xbef7,	// (0x0000bef7) form_field_data_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_ParamLimits

0x13aa,	// (0x000013aa) data_form_wide_pane_ParamLimits

0x13b6,	// (0x000013b6) form_field_data_wide_pane_g1

0x13d6,	// (0x000013d6) form_field_data_wide_pane_t1_ParamLimits

0x0b92,	// (0x00000b92) input_focus_pane_cp6_ParamLimits

0xc033,	// (0x0000c033) input_popup_find_pane_g1_ParamLimits

0xc033,	// (0x0000c033) input_popup_find_pane_g1

0x19ae,	// (0x000019ae) aid_navi_side_left_pane

0x19c3,	// (0x000019c3) aid_navi_side_right_pane

0x4214,	// (0x00004214) bg_popup_window_pane_cp30_ParamLimits

0x4214,	// (0x00004214) bg_popup_window_pane_cp30

0x428e,	// (0x0000428e) popup_midp_note_alarm_window_g1_ParamLimits

0x428e,	// (0x0000428e) popup_midp_note_alarm_window_g1

0x42be,	// (0x000042be) popup_midp_note_alarm_window_t1_ParamLimits

0x42be,	// (0x000042be) popup_midp_note_alarm_window_t1

0x435f,	// (0x0000435f) popup_midp_note_alarm_window_t2_ParamLimits

0x435f,	// (0x0000435f) popup_midp_note_alarm_window_t2

0x440d,	// (0x0000440d) popup_midp_note_alarm_window_t3_ParamLimits

0x440d,	// (0x0000440d) popup_midp_note_alarm_window_t3

0x443f,	// (0x0000443f) popup_midp_note_alarm_window_t4_ParamLimits

0x443f,	// (0x0000443f) popup_midp_note_alarm_window_t4

0x4465,	// (0x00004465) popup_midp_note_alarm_window_t5_ParamLimits

0x4465,	// (0x00004465) popup_midp_note_alarm_window_t5

0x000a,

0xaf01,	// (0x0000af01) popup_midp_note_alarm_window_t_ParamLimits

0xaf01,	// (0x0000af01) popup_midp_note_alarm_window_t

0x4511,	// (0x00004511) wait_bar_pane_cp1_ParamLimits

0x4511,	// (0x00004511) wait_bar_pane_cp1

0x0293,	// (0x00000293) wait_anim_pane_copy1

0x0293,	// (0x00000293) wait_border_pane_copy1

0x3efa,	// (0x00003efa) wait_border_pane_g1_copy1

0x13ed,	// (0x000013ed) form_field_popup_pane_g1

0xbf11,	// (0x0000bf11) form_field_popup_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp7_ParamLimits

0x140d,	// (0x0000140d) list_form_pane_ParamLimits

0x1419,	// (0x00001419) form_field_popup_wide_pane_g1

0x1421,	// (0x00001421) form_field_popup_wide_pane_t1_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp8_ParamLimits

0x1433,	// (0x00001433) list_form_wide_pane_ParamLimits

0xd569,	// (0x0000d569) aid_size_cell_graphic_pane

0xbf90,	// (0x0000bf90) data_form_pane_t1_ParamLimits

0xd467,	// (0x0000d467) data_form_wide_pane_t1_ParamLimits

0xcd2b,	// (0x0000cd2b) bg_status_flat_pane

0xb7c9,	// (0x0000b7c9) title_pane_t1_ParamLimits

0x04cf,	// (0x000004cf) title_pane_t2_ParamLimits

0x04f5,	// (0x000004f5) title_pane_t3_ParamLimits

0xf288,	// (0x0000f288) title_pane_t_ParamLimits

0x1cc9,	// (0x00001cc9) level_1_signal_ParamLimits

0x1cdb,	// (0x00001cdb) level_2_signal_ParamLimits

0x1cee,	// (0x00001cee) level_3_signal_ParamLimits

0x1d01,	// (0x00001d01) level_4_signal_ParamLimits

0x1d14,	// (0x00001d14) level_5_signal_ParamLimits

0x1d27,	// (0x00001d27) level_6_signal_ParamLimits

0x1d3a,	// (0x00001d3a) level_7_signal_ParamLimits

0x1cc9,	// (0x00001cc9) level_1_battery_ParamLimits

0x1cdb,	// (0x00001cdb) level_2_battery_ParamLimits

0x1cee,	// (0x00001cee) level_3_battery_ParamLimits

0x1d01,	// (0x00001d01) level_4_battery_ParamLimits

0x1d14,	// (0x00001d14) level_5_battery_ParamLimits

0x1d27,	// (0x00001d27) level_6_battery_ParamLimits

0x1d3a,	// (0x00001d3a) level_7_battery_ParamLimits

0x4119,	// (0x00004119) bg_status_flat_pane_g1

0x4121,	// (0x00004121) bg_status_flat_pane_g2

0x4129,	// (0x00004129) bg_status_flat_pane_g3

0x4131,	// (0x00004131) bg_status_flat_pane_g4

0x4139,	// (0x00004139) bg_status_flat_pane_g5

0x4141,	// (0x00004141) bg_status_flat_pane_g6

0x4149,	// (0x00004149) bg_status_flat_pane_g7

0xb855,	// (0x0000b855) tabs_3_active_pane_t1_ParamLimits

0xb855,	// (0x0000b855) tabs_3_passive_pane_t1_ParamLimits

0xb867,	// (0x0000b867) tabs_4_active_pane_t1_ParamLimits

0xb867,	// (0x0000b867) tabs_4_1_passive_pane_t1_ParamLimits

0xc041,	// (0x0000c041) tabs_2_active_pane_t1_ParamLimits

0xc041,	// (0x0000c041) tabs_2_passive_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp4_ParamLimits

0xc053,	// (0x0000c053) tabs_2_long_active_pane_t1_ParamLimits

0x2ba9,	// (0x00002ba9) bg_passive_tab_pane_cp4_ParamLimits

0x37cf,	// (0x000037cf) list_single_midp_graphic_pane_t1_ParamLimits

0x0507,	// (0x00000507) bg_active_tab_pane_cp5_ParamLimits

0xc066,	// (0x0000c066) tabs_3_long_active_pane_t1_ParamLimits

0x2ba9,	// (0x00002ba9) bg_passive_tab_pane_cp5_ParamLimits

0x37cf,	// (0x000037cf) list_single_midp_graphic_pane_t1

0xcd2b,	// (0x0000cd2b) bg_status_flat_pane_ParamLimits

0x32e8,	// (0x000032e8) indicator_pane_cp2_ParamLimits

0x32e8,	// (0x000032e8) indicator_pane_cp2

0xcea9,	// (0x0000cea9) navi_pane_srt_ParamLimits

0xcea9,	// (0x0000cea9) navi_pane_srt

0x3437,	// (0x00003437) popup_clock_digital_analogue_window_cp1

0x068f,	// (0x0000068f) indicator_pane_t1

0x2617,	// (0x00002617) copy_highlight_pane

0x2617,	// (0x00002617) cursor_graphics_pane

0x2617,	// (0x00002617) graphic_within_text_pane

0x2617,	// (0x00002617) link_highlight_pane

0x4a8c,	// (0x00004a8c) popup_preview_text_window_t5_ParamLimits

0x4a8c,	// (0x00004a8c) popup_preview_text_window_t5

0x2745,	// (0x00002745) cursor_digital_pane

0x2745,	// (0x00002745) cursor_primary_pane

0x2756,	// (0x00002756) cursor_primary_small_pane

0x275e,	// (0x0000275e) cursor_secondary_pane

0x2766,	// (0x00002766) cursor_title_pane

0x2745,	// (0x00002745) link_highlight_digital_pane

0x274d,	// (0x0000274d) link_highlight_primary_pane

0x2756,	// (0x00002756) link_highlight_primary_small_pane

0x275e,	// (0x0000275e) link_highlight_secondary_pane

0x2766,	// (0x00002766) link_highlight_title_pane

0x2745,	// (0x00002745) copy_highlight_digital_pane

0x2745,	// (0x00002745) copy_highlight_primary_pane

0x2756,	// (0x00002756) copy_highlight_primary_small_pane

0x275e,	// (0x0000275e) copy_highlight_secondary_pane

0x2766,	// (0x00002766) copy_highlight_title_pane

0x275e,	// (0x0000275e) graphic_text_digital_pane

0x41b7,	// (0x000041b7) graphic_text_primary_pane

0x41c0,	// (0x000041c0) graphic_text_primary_small_pane

0x2756,	// (0x00002756) graphic_text_secondary_pane

0x2745,	// (0x00002745) graphic_text_title_pane

0xc31c,	// (0x0000c31c) cursor_primary_pane_g1

0x41a9,	// (0x000041a9) cursor_text_primary_t1

0xd1af,	// (0x0000d1af) cursor_primary_small_pane_g1

0x419b,	// (0x0000419b) cursor_text_primary_small_t1

0xd1a5,	// (0x0000d1a5) cursor_primary_small_pane_g1_copy1

0x4183,	// (0x00004183) cursor_text_primary_small_t1_copy1

0x4161,	// (0x00004161) cursor_text_title_t1

0xd19b,	// (0x0000d19b) cursor_title_pane_g1

0xc31c,	// (0x0000c31c) cursor_digital_pane_g1

0x2778,	// (0x00002778) cursor_text_digital_t1

0x279d,	// (0x0000279d) link_highlight_primary_pane_g1

0x410a,	// (0x0000410a) link_highlight_primary_pane_t1

0x2786,	// (0x00002786) link_highlight_primary_small_pane_g1

0x278e,	// (0x0000278e) link_highlight_primary_small_pane_t1

0x279d,	// (0x0000279d) link_highlight_secondary_pane_g1

0x27a5,	// (0x000027a5) link_highlight_secondary_pane_t1

0x407e,	// (0x0000407e) link_highlight_title_pane_g1

0x4086,	// (0x00004086) link_highlight_title_pane_t1

0x4067,	// (0x00004067) link_highlight_digital_pane_g1

0x406f,	// (0x0000406f) link_highlight_digital_pane_t1

0x3f3f,	// (0x00003f3f) copy_highlight_primary_pane_g1

0x3f47,	// (0x00003f47) copy_highlight_primary_pane_t1

0x3f19,	// (0x00003f19) copy_highlight_primary_small_pane_g1

0x3f30,	// (0x00003f30) copy_highlight_primary_small_pane_t1

0x27b4,	// (0x000027b4) copy_highlight_secondary_pane_g1

0x27bc,	// (0x000027bc) copy_highlight_secondary_pane_t1

0x3f19,	// (0x00003f19) copy_highlight_title_pane_g1

0x3f21,	// (0x00003f21) copy_highlight_title_pane_t1

0x3f3f,	// (0x00003f3f) copy_highlight_digital_pane_g1

0x55a4,	// (0x000055a4) copy_highlight_digital_pane_t1

0x54f8,	// (0x000054f8) graphic_text_primary_pane_g1

0x5588,	// (0x00005588) graphic_text_primary_pane_t1

0x5596,	// (0x00005596) graphic_text_primary_pane_t2

0x0001,

0xb030,	// (0x0000b030) graphic_text_primary_pane_t

0x5564,	// (0x00005564) graphic_text_primary_small_pane_g1

0x556c,	// (0x0000556c) graphic_text_primary_small_pane_t1

0x557a,	// (0x0000557a) graphic_text_primary_small_pane_t2

0x0001,

0xb02b,	// (0x0000b02b) graphic_text_primary_small_pane_t

0x5540,	// (0x00005540) graphic_text_secondary_pane_g1

0x5548,	// (0x00005548) graphic_text_secondary_pane_t1

0x5556,	// (0x00005556) graphic_text_secondary_pane_t2

0x0001,

0xb026,	// (0x0000b026) graphic_text_secondary_pane_t

0x551c,	// (0x0000551c) graphic_text_title_pane_g1

0x5524,	// (0x00005524) graphic_text_title_pane_t1

0x5532,	// (0x00005532) graphic_text_title_pane_t2

0x0001,

0xb021,	// (0x0000b021) graphic_text_title_pane_t

0x54f8,	// (0x000054f8) graphic_text_digital_pane_g1

0x5500,	// (0x00005500) graphic_text_digital_pane_t1

0x550e,	// (0x0000550e) graphic_text_digital_pane_t2

0x0001,

0xb01c,	// (0x0000b01c) graphic_text_digital_pane_t

0x0507,	// (0x00000507) navi_icon_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_icon_pane_srt

0x0293,	// (0x00000293) navi_midp_pane_srt

0x0293,	// (0x00000293) navi_navi_pane_srt

0x0507,	// (0x00000507) navi_text_pane_srt_ParamLimits

0x0507,	// (0x00000507) navi_text_pane_srt

0x54c3,	// (0x000054c3) navi_navi_icon_text_pane_srt

0x54cb,	// (0x000054cb) navi_navi_pane_srt_g1_ParamLimits

0x54cb,	// (0x000054cb) navi_navi_pane_srt_g1

0x54dd,	// (0x000054dd) navi_navi_pane_srt_g2_ParamLimits

0x54dd,	// (0x000054dd) navi_navi_pane_srt_g2

0x0001,

0xb017,	// (0x0000b017) navi_navi_pane_srt_g_ParamLimits

0xb017,	// (0x0000b017) navi_navi_pane_srt_g

0x54ef,	// (0x000054ef) navi_navi_tabs_pane_srt

0x54c3,	// (0x000054c3) navi_navi_text_pane_srt

0x54c3,	// (0x000054c3) navi_navi_volume_pane_srt

0x54b4,	// (0x000054b4) navi_navi_text_pane_srt_t1

0x548f,	// (0x0000548f) navi_navi_volume_pane_srt_g1

0x5497,	// (0x00005497) volume_small_pane_srt_ParamLimits

0x5497,	// (0x00005497) volume_small_pane_srt

0x27cb,	// (0x000027cb) volume_small_pane_srt_g1_ParamLimits

0x27cb,	// (0x000027cb) volume_small_pane_srt_g1

0x27db,	// (0x000027db) volume_small_pane_srt_g2_ParamLimits

0x27db,	// (0x000027db) volume_small_pane_srt_g2

0x27ec,	// (0x000027ec) volume_small_pane_srt_g3_ParamLimits

0x27ec,	// (0x000027ec) volume_small_pane_srt_g3

0x27fd,	// (0x000027fd) volume_small_pane_srt_g4_ParamLimits

0x27fd,	// (0x000027fd) volume_small_pane_srt_g4

0x280e,	// (0x0000280e) volume_small_pane_srt_g5_ParamLimits

0x280e,	// (0x0000280e) volume_small_pane_srt_g5

0x281f,	// (0x0000281f) volume_small_pane_srt_g6_ParamLimits

0x281f,	// (0x0000281f) volume_small_pane_srt_g6

0x2830,	// (0x00002830) volume_small_pane_srt_g7_ParamLimits

0x2830,	// (0x00002830) volume_small_pane_srt_g7

0x2841,	// (0x00002841) volume_small_pane_srt_g8_ParamLimits

0x2841,	// (0x00002841) volume_small_pane_srt_g8

0x2852,	// (0x00002852) volume_small_pane_srt_g9_ParamLimits

0x2852,	// (0x00002852) volume_small_pane_srt_g9

0x2863,	// (0x00002863) volume_small_pane_srt_g10_ParamLimits

0x2863,	// (0x00002863) volume_small_pane_srt_g10

0x0009,

0xadc6,	// (0x0000adc6) volume_small_pane_srt_g_ParamLimits

0xadc6,	// (0x0000adc6) volume_small_pane_srt_g

0x098c,	// (0x0000098c) query_popup_data_pane_cp2

0x547d,	// (0x0000547d) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x547d,	// (0x0000547d) navi_navi_icon_text_pane_srt_t1

0x41b7,	// (0x000041b7) navi_tabs_2_long_pane_srt

0x41b7,	// (0x000041b7) navi_tabs_2_pane_srt

0x41b7,	// (0x000041b7) navi_tabs_3_long_pane_srt

0x41b7,	// (0x000041b7) navi_tabs_3_pane_srt

0x41b7,	// (0x000041b7) navi_tabs_4_pane_srt

0x5455,	// (0x00005455) tabs_2_active_pane_srt_ParamLimits

0x5455,	// (0x00005455) tabs_2_active_pane_srt

0x5465,	// (0x00005465) tabs_2_passive_pane_srt_ParamLimits

0x5465,	// (0x00005465) tabs_2_passive_pane_srt

0x38ac,	// (0x000038ac) bg_passive_tab_pane_cp1_srt_ParamLimits

0x38ac,	// (0x000038ac) bg_passive_tab_pane_cp1_srt

0x5429,	// (0x00005429) bg_passive_tab_pane_g1_cp1_srt

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp1_srt

0x5432,	// (0x00005432) bg_passive_tab_pane_g3_cp1_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp1_srt

0x543b,	// (0x0000543b) tabs_2_active_pane_srt_g1

0xd5ab,	// (0x0000d5ab) tabs_2_active_pane_srt_t1_ParamLimits

0xd5ab,	// (0x0000d5ab) tabs_2_active_pane_srt_t1

0x5429,	// (0x00005429) bg_active_tab_pane_g1_cp1_srt

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp1_srt

0x5432,	// (0x00005432) bg_active_tab_pane_g3_cp1_srt

0x53f6,	// (0x000053f6) tabs_3_active_pane_srt_ParamLimits

0x53f6,	// (0x000053f6) tabs_3_active_pane_srt

0x5407,	// (0x00005407) tabs_3_passive_pane_cp_srt_ParamLimits

0x5407,	// (0x00005407) tabs_3_passive_pane_cp_srt

0x5418,	// (0x00005418) tabs_3_passive_pane_srt_ParamLimits

0x5418,	// (0x00005418) tabs_3_passive_pane_srt

0x38ac,	// (0x000038ac) bg_passive_tab_pane_cp2_srt_ParamLimits

0x38ac,	// (0x000038ac) bg_passive_tab_pane_cp2_srt

0x2874,	// (0x00002874) bg_passive_tab_pane_g1_cp2_srt

0x2118,	// (0x00002118) bg_passive_tab_pane_g2_cp2_srt

0x287d,	// (0x0000287d) bg_passive_tab_pane_g3_cp2_srt

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt_ParamLimits

0x082d,	// (0x0000082d) bg_active_tab_pane_cp2_srt

0x53dc,	// (0x000053dc) tabs_3_active_pane_srt_g1

0xd595,	// (0x0000d595) tabs_3_active_pane_srt_t1_ParamLimits

0xd595,	// (0x0000d595) tabs_3_active_pane_srt_t1

0x2874,	// (0x00002874) bg_active_tab_pane_g1_cp2_srt

0x2118,	// (0x00002118) bg_active_tab_pane_g2_cp2_srt

0x287d,	// (0x0000287d) bg_active_tab_pane_g3_cp2_srt

0x5394,	// (0x00005394) tabs_4_active_pane_srt_ParamLimits

0x5394,	// (0x00005394) tabs_4_active_pane_srt

0x53a6,	// (0x000053a6) tabs_4_passive_pane_cp2_srt_ParamLimits

0x53a6,	// (0x000053a6) tabs_4_passive_pane_cp2_srt

0x2b22,	// (0x00002b22) aid_size_cell_toolbar

0x4f26,	// (0x00004f26) main_idle_act_pane_ParamLimits

0x2d54,	// (0x00002d54) popup_large_graphic_colour_window_ParamLimits

0xcbef,	// (0x0000cbef) popup_toolbar_window_ParamLimits

0xcbef,	// (0x0000cbef) popup_toolbar_window

0x512c,	// (0x0000512c) list_single_graphic_2heading_pane_ParamLimits

0x512c,	// (0x0000512c) list_single_graphic_2heading_pane

0x1a3a,	// (0x00001a3a) aid_size_cell_apps_grid_lsc_pane

0x1a4c,	// (0x00001a4c) aid_size_cell_apps_grid_prt_pane

0x2ba9,	// (0x00002ba9) bg_wml_button_pane_cp1_ParamLimits

0x2ba9,	// (0x00002ba9) bg_wml_button_pane_cp1

0xd148,	// (0x0000d148) form_midp_field_text_pane_t1_ParamLimits

0x38ac,	// (0x000038ac) input_focus_pane_cp050_ParamLimits

0x3baa,	// (0x00003baa) list_midp_form_text_pane_ParamLimits

0x3b50,	// (0x00003b50) input_focus_pane_cp051_ParamLimits

0x3b64,	// (0x00003b64) list_midp_choice_pane_ParamLimits

0xd0e6,	// (0x0000d0e6) list_single_2graphic_pane_cp3_ParamLimits

0xd0e6,	// (0x0000d0e6) list_single_2graphic_pane_cp3

0xd0f9,	// (0x0000d0f9) list_single_midp_graphic_pane_ParamLimits

0xd0f9,	// (0x0000d0f9) list_single_midp_graphic_pane

0x3596,	// (0x00003596) list_single_graphic_2heading_pane_g1_ParamLimits

0x3596,	// (0x00003596) list_single_graphic_2heading_pane_g1

0x2550,	// (0x00002550) list_single_graphic_2heading_pane_g4_ParamLimits

0x2550,	// (0x00002550) list_single_graphic_2heading_pane_g4

0x35a2,	// (0x000035a2) list_single_graphic_2heading_pane_g5_ParamLimits

0x35a2,	// (0x000035a2) list_single_graphic_2heading_pane_g5

0x0002,

0xae19,	// (0x0000ae19) list_single_graphic_2heading_pane_g_ParamLimits

0xae19,	// (0x0000ae19) list_single_graphic_2heading_pane_g

0x35ae,	// (0x000035ae) list_single_graphic_2heading_pane_t1_ParamLimits

0x35ae,	// (0x000035ae) list_single_graphic_2heading_pane_t1

0x35c2,	// (0x000035c2) list_single_graphic_2heading_pane_t2_ParamLimits

0x35c2,	// (0x000035c2) list_single_graphic_2heading_pane_t2

0x35de,	// (0x000035de) list_single_graphic_2heading_pane_t3_ParamLimits

0x35de,	// (0x000035de) list_single_graphic_2heading_pane_t3

0x0002,

0xae20,	// (0x0000ae20) list_single_graphic_2heading_pane_t_ParamLimits

0xae20,	// (0x0000ae20) list_single_graphic_2heading_pane_t

0x35f6,	// (0x000035f6) bg_popup_sub_pane_cp2

0x3620,	// (0x00003620) grid_toobar_pane

0x365c,	// (0x0000365c) cell_toolbar_pane_ParamLimits

0x365c,	// (0x0000365c) cell_toolbar_pane

0x36a2,	// (0x000036a2) cell_toolbar_pane_g1_ParamLimits

0x36a2,	// (0x000036a2) cell_toolbar_pane_g1

0x36b6,	// (0x000036b6) cell_toolbar_pane_g2_ParamLimits

0x36b6,	// (0x000036b6) cell_toolbar_pane_g2

0x0001,

0xae27,	// (0x0000ae27) cell_toolbar_pane_g_ParamLimits

0xae27,	// (0x0000ae27) cell_toolbar_pane_g

0x36d8,	// (0x000036d8) grid_highlight_pane_cp2_ParamLimits

0x36d8,	// (0x000036d8) grid_highlight_pane_cp2

0x36f2,	// (0x000036f2) toolbar_button_pane

0x36fe,	// (0x000036fe) toolbar_button_pane_g1

0x3706,	// (0x00003706) toolbar_button_pane_g2

0x370e,	// (0x0000370e) toolbar_button_pane_g3

0x3716,	// (0x00003716) toolbar_button_pane_g4

0x371e,	// (0x0000371e) toolbar_button_pane_g5

0x3726,	// (0x00003726) toolbar_button_pane_g6

0x372e,	// (0x0000372e) toolbar_button_pane_g7

0x3736,	// (0x00003736) toolbar_button_pane_g8

0x373e,	// (0x0000373e) toolbar_button_pane_g9

0x0009,

0xae2c,	// (0x0000ae2c) toolbar_button_pane_g

0x374e,	// (0x0000374e) list_single_2graphic_pane_g1_cp3_ParamLimits

0x374e,	// (0x0000374e) list_single_2graphic_pane_g1_cp3

0xd048,	// (0x0000d048) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd048,	// (0x0000d048) list_single_2graphic_pane_g2_cp3

0x376b,	// (0x0000376b) list_single_2graphic_pane_g3_cp3

0x3773,	// (0x00003773) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3773,	// (0x00003773) list_single_2graphic_pane_g4_cp3

0x377f,	// (0x0000377f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x377f,	// (0x0000377f) list_single_2graphic_pane_t1_cp3

0x37c3,	// (0x000037c3) list_single_midp_graphic_pane_g2_ParamLimits

0x37c3,	// (0x000037c3) list_single_midp_graphic_pane_g2

0x2b2a,	// (0x00002b2a) aid_zoom_text_primary

0x2b32,	// (0x00002b32) aid_zoom_text_secondary

0xc374,	// (0x0000c374) status_small_pane_g7_ParamLimits

0xc374,	// (0x0000c374) status_small_pane_g7

0xc397,	// (0x0000c397) status_small_pane_t1_ParamLimits

0xb7a5,	// (0x0000b7a5) title_pane_g2

0x0003,

0xf27f,	// (0x0000f27f) title_pane_g

0xba1d,	// (0x0000ba1d) aid_size_cell_colour_1_pane_ParamLimits

0xba1d,	// (0x0000ba1d) aid_size_cell_colour_1_pane

0xba31,	// (0x0000ba31) aid_size_cell_colour_2_pane_ParamLimits

0xba31,	// (0x0000ba31) aid_size_cell_colour_2_pane

0xba45,	// (0x0000ba45) aid_size_cell_colour_3_pane_ParamLimits

0xba45,	// (0x0000ba45) aid_size_cell_colour_3_pane

0xba59,	// (0x0000ba59) aid_size_cell_colour_4_pane_ParamLimits

0xba59,	// (0x0000ba59) aid_size_cell_colour_4_pane

0x18b6,	// (0x000018b6) title_pane_stacon_g1_ParamLimits

0x18b6,	// (0x000018b6) title_pane_stacon_g1

0x3f9e,	// (0x00003f9e) popup_note_wait_window_g3_ParamLimits

0x3f9e,	// (0x00003f9e) popup_note_wait_window_g3

0x4014,	// (0x00004014) popup_note_wait_window_t5_ParamLimits

0x4014,	// (0x00004014) popup_note_wait_window_t5

0x0293,	// (0x00000293) main_feb_china_hwr_fs_writing_pane

0xc5f7,	// (0x0000c5f7) popup_feb_china_hwr_fs_window_ParamLimits

0xc5f7,	// (0x0000c5f7) popup_feb_china_hwr_fs_window

0xd059,	// (0x0000d059) aid_size_cell_hwr_fs_ParamLimits

0xd059,	// (0x0000d059) aid_size_cell_hwr_fs

0x38ac,	// (0x000038ac) bg_popup_sub_pane_cp3_ParamLimits

0x38ac,	// (0x000038ac) bg_popup_sub_pane_cp3

0xd06e,	// (0x0000d06e) grid_hwr_fs_pane_ParamLimits

0xd06e,	// (0x0000d06e) grid_hwr_fs_pane

0x38d0,	// (0x000038d0) linegrid_hwr_fs_pane_ParamLimits

0x38d0,	// (0x000038d0) linegrid_hwr_fs_pane

0xd086,	// (0x0000d086) cell_hwr_fs_pane_ParamLimits

0xd086,	// (0x0000d086) cell_hwr_fs_pane

0x3902,	// (0x00003902) linegrid_hwr_fs_pane_g1_ParamLimits

0x3902,	// (0x00003902) linegrid_hwr_fs_pane_g1

0xd0ac,	// (0x0000d0ac) linegrid_hwr_fs_pane_g2_ParamLimits

0xd0ac,	// (0x0000d0ac) linegrid_hwr_fs_pane_g2

0x3920,	// (0x00003920) linegrid_hwr_fs_pane_g3_ParamLimits

0x3920,	// (0x00003920) linegrid_hwr_fs_pane_g3

0x392c,	// (0x0000392c) linegrid_hwr_fs_pane_g4_ParamLimits

0x392c,	// (0x0000392c) linegrid_hwr_fs_pane_g4

0x3946,	// (0x00003946) linegrid_hwr_fs_pane_g5_ParamLimits

0x3946,	// (0x00003946) linegrid_hwr_fs_pane_g5

0x0004,

0xf3b4,	// (0x0000f3b4) linegrid_hwr_fs_pane_g_ParamLimits

0xf3b4,	// (0x0000f3b4) linegrid_hwr_fs_pane_g

0x395c,	// (0x0000395c) cell_hwr_fs_pane_g1_ParamLimits

0x395c,	// (0x0000395c) cell_hwr_fs_pane_g1

0x34cd,	// (0x000034cd) cell_hwr_fs_pane_g2_ParamLimits

0x34cd,	// (0x000034cd) cell_hwr_fs_pane_g2

0xd0be,	// (0x0000d0be) cell_hwr_fs_pane_g3_ParamLimits

0xd0be,	// (0x0000d0be) cell_hwr_fs_pane_g3

0xd0cb,	// (0x0000d0cb) cell_hwr_fs_pane_g4_ParamLimits

0xd0cb,	// (0x0000d0cb) cell_hwr_fs_pane_g4

0x0003,

0xf3bf,	// (0x0000f3bf) cell_hwr_fs_pane_g_ParamLimits

0xf3bf,	// (0x0000f3bf) cell_hwr_fs_pane_g

0xd0d8,	// (0x0000d0d8) cell_hwr_fs_pane_t1

0x0293,	// (0x00000293) grid_highlight_pane_cp6

0x0293,	// (0x00000293) main_idle_act2_pane

0x1667,	// (0x00001667) aid_inside_area_popup_secondary

0xd1b9,	// (0x0000d1b9) aid_inside_area_window_primary_ParamLimits

0xd1b9,	// (0x0000d1b9) aid_inside_area_window_primary

0x55b3,	// (0x000055b3) ai2_news_ticker_pane

0x55bb,	// (0x000055bb) aid_size_cell_ai1_link_ParamLimits

0x55bb,	// (0x000055bb) aid_size_cell_ai1_link

0xd5c1,	// (0x0000d5c1) popup_ai2_data_window_ParamLimits

0xd5c1,	// (0x0000d5c1) popup_ai2_data_window

0x55eb,	// (0x000055eb) popup_ai2_link_window_ParamLimits

0x55eb,	// (0x000055eb) popup_ai2_link_window

0x38ac,	// (0x000038ac) bg_popup_sub_pane_cp4_ParamLimits

0x38ac,	// (0x000038ac) bg_popup_sub_pane_cp4

0x55ff,	// (0x000055ff) grid_ai2_link_pane_ParamLimits

0x55ff,	// (0x000055ff) grid_ai2_link_pane

0x5616,	// (0x00005616) popup_ai2_link_window_g1_ParamLimits

0x5616,	// (0x00005616) popup_ai2_link_window_g1

0x5622,	// (0x00005622) popup_ai2_link_window_g2_ParamLimits

0x5622,	// (0x00005622) popup_ai2_link_window_g2

0x0001,

0xb035,	// (0x0000b035) popup_ai2_link_window_g_ParamLimits

0xb035,	// (0x0000b035) popup_ai2_link_window_g

0x5631,	// (0x00005631) ai2_mp_button_pane

0x5639,	// (0x00005639) ai2_mp_volume_pane

0x3b50,	// (0x00003b50) bg_popup_sub_pane_cp5_ParamLimits

0x3b50,	// (0x00003b50) bg_popup_sub_pane_cp5

0x5641,	// (0x00005641) heading_ai2_gene_pane_ParamLimits

0x5641,	// (0x00005641) heading_ai2_gene_pane

0x564d,	// (0x0000564d) list_ai2_gene_pane_ParamLimits

0x564d,	// (0x0000564d) list_ai2_gene_pane

0x5695,	// (0x00005695) cell_ai2_link_pane_ParamLimits

0x5695,	// (0x00005695) cell_ai2_link_pane

0x56ab,	// (0x000056ab) cell_ai2_link_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp7

0x577b,	// (0x0000577b) ai2_mp_volume_pane_g1

0x5783,	// (0x00005783) ai2_mp_volume_pane_g2

0xd5eb,	// (0x0000d5eb) list_ai2_gene_pane_t1

0x578b,	// (0x0000578b) ai2_mp_volume_pane_g3

0x0002,

0xb04e,	// (0x0000b04e) ai2_mp_volume_pane_g

0x5793,	// (0x00005793) volume_small_pane_cp3

0x579c,	// (0x0000579c) aid_size_cell_ai2_button

0x57a4,	// (0x000057a4) grid_ai2_button_pane

0x57ad,	// (0x000057ad) cell_ai2_button_pane_ParamLimits

0x57ad,	// (0x000057ad) cell_ai2_button_pane

0x002e,	// (0x0000002e) cell_ai2_button_pane_g1

0x0293,	// (0x00000293) grid_highlight_pane_cp8

0x573b,	// (0x0000573b) ai2_gene_pane_t1_ParamLimits

0x573b,	// (0x0000573b) ai2_gene_pane_t1

0xc565,	// (0x0000c565) aid_height_parent_landscape

0xd313,	// (0x0000d313) aid_height_set_list

0x4f26,	// (0x00004f26) aid_size_parent

0xd569,	// (0x0000d569) aid_size_cell_graphic_pane_ParamLimits

0x565d,	// (0x0000565d) popup_ai2_data_window_g1_ParamLimits

0x565d,	// (0x0000565d) popup_ai2_data_window_g1

0x5669,	// (0x00005669) ai2_news_ticker_pane_g1

0x5671,	// (0x00005671) ai2_news_ticker_pane_g2

0x0001,

0xb03a,	// (0x0000b03a) ai2_news_ticker_pane_g

0x5679,	// (0x00005679) ai2_news_ticker_pane_t1

0x5687,	// (0x00005687) ai2_news_ticker_pane_t2

0x0001,

0xb03f,	// (0x0000b03f) ai2_news_ticker_pane_t

0x56b4,	// (0x000056b4) heading_ai2_gene_pane_g1

0x56bc,	// (0x000056bc) heading_ai2_gene_pane_t1_ParamLimits

0x56bc,	// (0x000056bc) heading_ai2_gene_pane_t1

0x56d1,	// (0x000056d1) list_highlight_pane_cp6

0xd5d5,	// (0x0000d5d5) ai2_gene_pane_ParamLimits

0xd5d5,	// (0x0000d5d5) ai2_gene_pane

0xd5f9,	// (0x0000d5f9) list_ai2_gene_pane_t2

0x0001,

0xf420,	// (0x0000f420) list_ai2_gene_pane_t

0x570c,	// (0x0000570c) list_highlight_pane_cp8_ParamLimits

0x570c,	// (0x0000570c) list_highlight_pane_cp8

0x571d,	// (0x0000571d) ai2_gene_pane_g1_ParamLimits

0x571d,	// (0x0000571d) ai2_gene_pane_g1

0x572f,	// (0x0000572f) ai2_gene_pane_g2_ParamLimits

0x572f,	// (0x0000572f) ai2_gene_pane_g2

0x0001,

0xb049,	// (0x0000b049) ai2_gene_pane_g_ParamLimits

0xb049,	// (0x0000b049) ai2_gene_pane_g

0x0db7,	// (0x00000db7) scroll_pane_cp12

0xc522,	// (0x0000c522) control_pane_t3_ParamLimits

0xc522,	// (0x0000c522) control_pane_t3

0xc388,	// (0x0000c388) status_small_pane_g8_ParamLimits

0xc388,	// (0x0000c388) status_small_pane_g8

0xc68c,	// (0x0000c68c) popup_find_window_ParamLimits

0xc919,	// (0x0000c919) popup_note_image_window_ParamLimits

0x3596,	// (0x00003596) list_double2_graphic_pane_vc_g1_ParamLimits

0x3596,	// (0x00003596) list_double2_graphic_pane_vc_g1

0x2550,	// (0x00002550) list_double2_graphic_pane_vc_g2_ParamLimits

0x2550,	// (0x00002550) list_double2_graphic_pane_vc_g2

0x35a2,	// (0x000035a2) list_double2_graphic_pane_vc_g3_ParamLimits

0x35a2,	// (0x000035a2) list_double2_graphic_pane_vc_g3

0x0002,

0xae19,	// (0x0000ae19) list_double2_graphic_pane_vc_g_ParamLimits

0xae19,	// (0x0000ae19) list_double2_graphic_pane_vc_g

0x368c,	// (0x0000368c) list_double2_graphic_pane_vc_t1_ParamLimits

0x368c,	// (0x0000368c) list_double2_graphic_pane_vc_t1

0x2550,	// (0x00002550) list_single_heading_pane_vc_g1_ParamLimits

0x2550,	// (0x00002550) list_single_heading_pane_vc_g1

0x35a2,	// (0x000035a2) list_single_heading_pane_vc_g2_ParamLimits

0x35a2,	// (0x000035a2) list_single_heading_pane_vc_g2

0x0001,

0xae41,	// (0x0000ae41) list_single_heading_pane_vc_g_ParamLimits

0xae41,	// (0x0000ae41) list_single_heading_pane_vc_g

0x379b,	// (0x0000379b) list_single_heading_pane_vc_t1_ParamLimits

0x379b,	// (0x0000379b) list_single_heading_pane_vc_t1

0x37b1,	// (0x000037b1) list_single_heading_pane_vc_t2_ParamLimits

0x37b1,	// (0x000037b1) list_single_heading_pane_vc_t2

0x0001,

0xae46,	// (0x0000ae46) list_single_heading_pane_vc_t_ParamLimits

0xae46,	// (0x0000ae46) list_single_heading_pane_vc_t

0x37e5,	// (0x000037e5) list_setting_number_pane_vc_g1_ParamLimits

0x37e5,	// (0x000037e5) list_setting_number_pane_vc_g1

0x37f1,	// (0x000037f1) list_setting_number_pane_vc_g2_ParamLimits

0x37f1,	// (0x000037f1) list_setting_number_pane_vc_g2

0x0001,

0xae4b,	// (0x0000ae4b) list_setting_number_pane_vc_g_ParamLimits

0xae4b,	// (0x0000ae4b) list_setting_number_pane_vc_g

0x37fd,	// (0x000037fd) list_setting_number_pane_vc_t1_ParamLimits

0x37fd,	// (0x000037fd) list_setting_number_pane_vc_t1

0x3811,	// (0x00003811) list_setting_number_pane_vc_t2_ParamLimits

0x3811,	// (0x00003811) list_setting_number_pane_vc_t2

0x382d,	// (0x0000382d) list_setting_number_pane_vc_t3_ParamLimits

0x382d,	// (0x0000382d) list_setting_number_pane_vc_t3

0x0002,

0xae50,	// (0x0000ae50) list_setting_number_pane_vc_t_ParamLimits

0xae50,	// (0x0000ae50) list_setting_number_pane_vc_t

0x385b,	// (0x0000385b) set_value_pane_vc_ParamLimits

0x385b,	// (0x0000385b) set_value_pane_vc

0x512c,	// (0x0000512c) list_double2_graphic_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_double2_graphic_pane_vc

0x512c,	// (0x0000512c) list_double2_large_graphic_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_double2_large_graphic_pane_vc

0x512c,	// (0x0000512c) list_double2_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_double2_pane_vc

0x512c,	// (0x0000512c) list_double_graphic_heading_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_double_graphic_heading_pane_vc

0x512c,	// (0x0000512c) list_double_graphic_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_double_graphic_pane_vc

0x512c,	// (0x0000512c) list_double_heading_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_double_heading_pane_vc

0x513e,	// (0x0000513e) list_double_large_graphic_pane_vc_ParamLimits

0x513e,	// (0x0000513e) list_double_large_graphic_pane_vc

0x512c,	// (0x0000512c) list_double_number_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_double_number_pane_vc

0x512c,	// (0x0000512c) list_double_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_double_pane_vc

0x512c,	// (0x0000512c) list_double_time_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_double_time_pane_vc

0x512c,	// (0x0000512c) list_setting_number_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_setting_number_pane_vc

0x512c,	// (0x0000512c) list_setting_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_setting_pane_vc

0x512c,	// (0x0000512c) list_single_graphic_heading_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_single_graphic_heading_pane_vc

0x512c,	// (0x0000512c) list_single_heading_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_single_heading_pane_vc

0x512c,	// (0x0000512c) list_single_number_heading_pane_vc_ParamLimits

0x512c,	// (0x0000512c) list_single_number_heading_pane_vc

0x3596,	// (0x00003596) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3596,	// (0x00003596) list_double_graphic_heading_pane_vc_g1

0x57e1,	// (0x000057e1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x57e1,	// (0x000057e1) list_double_graphic_heading_pane_vc_g2

0x57ed,	// (0x000057ed) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x57ed,	// (0x000057ed) list_double_graphic_heading_pane_vc_g3

0x0002,

0xb055,	// (0x0000b055) list_double_graphic_heading_pane_vc_g_ParamLimits

0xb055,	// (0x0000b055) list_double_graphic_heading_pane_vc_g

0x57f9,	// (0x000057f9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x57f9,	// (0x000057f9) list_double_graphic_heading_pane_vc_t1

0x5815,	// (0x00005815) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5815,	// (0x00005815) list_double_graphic_heading_pane_vc_t2

0x0001,

0xb05c,	// (0x0000b05c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xb05c,	// (0x0000b05c) list_double_graphic_heading_pane_vc_t

0x37e5,	// (0x000037e5) list_setting_pane_vc_g1_ParamLimits

0x37e5,	// (0x000037e5) list_setting_pane_vc_g1

0x37f1,	// (0x000037f1) list_setting_pane_vc_g2_ParamLimits

0x37f1,	// (0x000037f1) list_setting_pane_vc_g2

0x0001,

0xae4b,	// (0x0000ae4b) list_setting_pane_vc_g_ParamLimits

0xae4b,	// (0x0000ae4b) list_setting_pane_vc_g

0x5a40,	// (0x00005a40) list_setting_pane_vc_t1_ParamLimits

0x5a40,	// (0x00005a40) list_setting_pane_vc_t1

0x5a5c,	// (0x00005a5c) list_setting_pane_vc_t2_ParamLimits

0x5a5c,	// (0x00005a5c) list_setting_pane_vc_t2

0x0001,

0xb08a,	// (0x0000b08a) list_setting_pane_vc_t_ParamLimits

0xb08a,	// (0x0000b08a) list_setting_pane_vc_t

0x385b,	// (0x0000385b) set_value_pane_cp_vc_ParamLimits

0x385b,	// (0x0000385b) set_value_pane_cp_vc

0x2550,	// (0x00002550) list_single_number_heading_pane_vc_g1_ParamLimits

0x2550,	// (0x00002550) list_single_number_heading_pane_vc_g1

0x35a2,	// (0x000035a2) list_single_number_heading_pane_vc_g2_ParamLimits

0x35a2,	// (0x000035a2) list_single_number_heading_pane_vc_g2

0x0001,

0xae41,	// (0x0000ae41) list_single_number_heading_pane_vc_g_ParamLimits

0xae41,	// (0x0000ae41) list_single_number_heading_pane_vc_g

0x5a78,	// (0x00005a78) list_single_number_heading_pane_vc_t1_ParamLimits

0x5a78,	// (0x00005a78) list_single_number_heading_pane_vc_t1

0x5a8e,	// (0x00005a8e) list_single_number_heading_pane_vc_t2_ParamLimits

0x5a8e,	// (0x00005a8e) list_single_number_heading_pane_vc_t2

0x5aa0,	// (0x00005aa0) list_single_number_heading_pane_vc_t3_ParamLimits

0x5aa0,	// (0x00005aa0) list_single_number_heading_pane_vc_t3

0x0002,

0xb08f,	// (0x0000b08f) list_single_number_heading_pane_vc_t_ParamLimits

0xb08f,	// (0x0000b08f) list_single_number_heading_pane_vc_t

0x3596,	// (0x00003596) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3596,	// (0x00003596) list_single_graphic_heading_pane_vc_g1

0x2550,	// (0x00002550) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2550,	// (0x00002550) list_single_graphic_heading_pane_vc_g4

0x35a2,	// (0x000035a2) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x35a2,	// (0x000035a2) list_single_graphic_heading_pane_vc_g5

0x0002,

0xae19,	// (0x0000ae19) list_single_graphic_heading_pane_vc_g_ParamLimits

0xae19,	// (0x0000ae19) list_single_graphic_heading_pane_vc_g

0x5ab2,	// (0x00005ab2) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5ab2,	// (0x00005ab2) list_single_graphic_heading_pane_vc_t1

0x5ac8,	// (0x00005ac8) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5ac8,	// (0x00005ac8) list_single_graphic_heading_pane_vc_t2

0x0001,

0xb096,	// (0x0000b096) list_single_graphic_heading_pane_vc_t_ParamLimits

0xb096,	// (0x0000b096) list_single_graphic_heading_pane_vc_t

0x2550,	// (0x00002550) list_double2_pane_vc_g1_ParamLimits

0x2550,	// (0x00002550) list_double2_pane_vc_g1

0x35a2,	// (0x000035a2) list_double2_pane_vc_g2_ParamLimits

0x35a2,	// (0x000035a2) list_double2_pane_vc_g2

0x0001,

0xae41,	// (0x0000ae41) list_double2_pane_vc_g_ParamLimits

0xae41,	// (0x0000ae41) list_double2_pane_vc_g

0x5ada,	// (0x00005ada) list_double2_pane_vc_t1_ParamLimits

0x5ada,	// (0x00005ada) list_double2_pane_vc_t1

0x5af0,	// (0x00005af0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5af0,	// (0x00005af0) list_double2_large_graphic_pane_vc_g1

0x2550,	// (0x00002550) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2550,	// (0x00002550) list_double2_large_graphic_pane_vc_g2

0x35a2,	// (0x000035a2) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x35a2,	// (0x000035a2) list_double2_large_graphic_pane_vc_g3

0x0002,

0xb09b,	// (0x0000b09b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xb09b,	// (0x0000b09b) list_double2_large_graphic_pane_vc_g

0x5afc,	// (0x00005afc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5afc,	// (0x00005afc) list_double2_large_graphic_pane_vc_t1

0x5b12,	// (0x00005b12) list_double_time_pane_vc_g1_ParamLimits

0x5b12,	// (0x00005b12) list_double_time_pane_vc_g1

0x5b1e,	// (0x00005b1e) list_double_time_pane_vc_g2_ParamLimits

0x5b1e,	// (0x00005b1e) list_double_time_pane_vc_g2

0x0001,

0xb0a2,	// (0x0000b0a2) list_double_time_pane_vc_g_ParamLimits

0xb0a2,	// (0x0000b0a2) list_double_time_pane_vc_g

0x5b2a,	// (0x00005b2a) list_double_time_pane_vc_t1_ParamLimits

0x5b2a,	// (0x00005b2a) list_double_time_pane_vc_t1

0x5b4e,	// (0x00005b4e) list_double_time_pane_vc_t2_ParamLimits

0x5b4e,	// (0x00005b4e) list_double_time_pane_vc_t2

0x5b7d,	// (0x00005b7d) list_double_time_pane_vc_t3_ParamLimits

0x5b7d,	// (0x00005b7d) list_double_time_pane_vc_t3

0x5b8f,	// (0x00005b8f) list_double_time_pane_vc_t4_ParamLimits

0x5b8f,	// (0x00005b8f) list_double_time_pane_vc_t4

0x0003,

0xb0a7,	// (0x0000b0a7) list_double_time_pane_vc_t_ParamLimits

0xb0a7,	// (0x0000b0a7) list_double_time_pane_vc_t

0x2550,	// (0x00002550) list_double_pane_vc_g1_ParamLimits

0x2550,	// (0x00002550) list_double_pane_vc_g1

0x35a2,	// (0x000035a2) list_double_pane_vc_g2_ParamLimits

0x35a2,	// (0x000035a2) list_double_pane_vc_g2

0x0001,

0xae41,	// (0x0000ae41) list_double_pane_vc_g_ParamLimits

0xae41,	// (0x0000ae41) list_double_pane_vc_g

0x5ba3,	// (0x00005ba3) list_double_pane_vc_t1_ParamLimits

0x5ba3,	// (0x00005ba3) list_double_pane_vc_t1

0x5bb7,	// (0x00005bb7) list_double_pane_vc_t2_ParamLimits

0x5bb7,	// (0x00005bb7) list_double_pane_vc_t2

0x0001,

0xb0b0,	// (0x0000b0b0) list_double_pane_vc_t_ParamLimits

0xb0b0,	// (0x0000b0b0) list_double_pane_vc_t

0x2550,	// (0x00002550) list_double_number_pane_vc_g1_ParamLimits

0x2550,	// (0x00002550) list_double_number_pane_vc_g1

0x35a2,	// (0x000035a2) list_double_number_pane_vc_g2_ParamLimits

0x35a2,	// (0x000035a2) list_double_number_pane_vc_g2

0x0001,

0xae41,	// (0x0000ae41) list_double_number_pane_vc_g_ParamLimits

0xae41,	// (0x0000ae41) list_double_number_pane_vc_g

0x5bcf,	// (0x00005bcf) list_double_number_pane_vc_t1_ParamLimits

0x5bcf,	// (0x00005bcf) list_double_number_pane_vc_t1

0x5be1,	// (0x00005be1) list_double_number_pane_vc_t2_ParamLimits

0x5be1,	// (0x00005be1) list_double_number_pane_vc_t2

0x5bf5,	// (0x00005bf5) list_double_number_pane_vc_t3_ParamLimits

0x5bf5,	// (0x00005bf5) list_double_number_pane_vc_t3

0x0002,

0xb0b5,	// (0x0000b0b5) list_double_number_pane_vc_t_ParamLimits

0xb0b5,	// (0x0000b0b5) list_double_number_pane_vc_t

0x5c0d,	// (0x00005c0d) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5c0d,	// (0x00005c0d) list_double_large_graphic_pane_vc_g1

0x5c2f,	// (0x00005c2f) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5c2f,	// (0x00005c2f) list_double_large_graphic_pane_vc_g2

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5c43,	// (0x00005c43) list_double_large_graphic_pane_vc_g3

0x5c52,	// (0x00005c52) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5c52,	// (0x00005c52) list_double_large_graphic_pane_vc_g4

0x0003,

0xb0bc,	// (0x0000b0bc) list_double_large_graphic_pane_vc_g_ParamLimits

0xb0bc,	// (0x0000b0bc) list_double_large_graphic_pane_vc_g

0x5c5e,	// (0x00005c5e) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5c5e,	// (0x00005c5e) list_double_large_graphic_pane_vc_t1

0x5c7a,	// (0x00005c7a) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5c7a,	// (0x00005c7a) list_double_large_graphic_pane_vc_t2

0x0001,

0xb0c5,	// (0x0000b0c5) list_double_large_graphic_pane_vc_t_ParamLimits

0xb0c5,	// (0x0000b0c5) list_double_large_graphic_pane_vc_t

0x57e1,	// (0x000057e1) list_double_heading_pane_vc_g1_ParamLimits

0x57e1,	// (0x000057e1) list_double_heading_pane_vc_g1

0x57ed,	// (0x000057ed) list_double_heading_pane_vc_g2_ParamLimits

0x57ed,	// (0x000057ed) list_double_heading_pane_vc_g2

0x0001,

0xb0ca,	// (0x0000b0ca) list_double_heading_pane_vc_g_ParamLimits

0xb0ca,	// (0x0000b0ca) list_double_heading_pane_vc_g

0x5c9c,	// (0x00005c9c) list_double_heading_pane_vc_t1_ParamLimits

0x5c9c,	// (0x00005c9c) list_double_heading_pane_vc_t1

0x5cb0,	// (0x00005cb0) list_double_heading_pane_vc_t2_ParamLimits

0x5cb0,	// (0x00005cb0) list_double_heading_pane_vc_t2

0x0001,

0xb0cf,	// (0x0000b0cf) list_double_heading_pane_vc_t_ParamLimits

0xb0cf,	// (0x0000b0cf) list_double_heading_pane_vc_t

0x5cc8,	// (0x00005cc8) list_double_graphic_pane_vc_g1_ParamLimits

0x5cc8,	// (0x00005cc8) list_double_graphic_pane_vc_g1

0x5cd4,	// (0x00005cd4) list_double_graphic_pane_vc_g2_ParamLimits

0x5cd4,	// (0x00005cd4) list_double_graphic_pane_vc_g2

0x2550,	// (0x00002550) list_double_graphic_pane_vc_g3_ParamLimits

0x2550,	// (0x00002550) list_double_graphic_pane_vc_g3

0x0003,

0xb0d4,	// (0x0000b0d4) list_double_graphic_pane_vc_g_ParamLimits

0xb0d4,	// (0x0000b0d4) list_double_graphic_pane_vc_g

0x5cf1,	// (0x00005cf1) list_double_graphic_pane_vc_t1_ParamLimits

0x5cf1,	// (0x00005cf1) list_double_graphic_pane_vc_t1

0x5d1b,	// (0x00005d1b) list_double_graphic_pane_vc_t2_ParamLimits

0x5d1b,	// (0x00005d1b) list_double_graphic_pane_vc_t2

0x0001,

0xb0dd,	// (0x0000b0dd) list_double_graphic_pane_vc_t_ParamLimits

0xb0dd,	// (0x0000b0dd) list_double_graphic_pane_vc_t

0x0050,	// (0x00000050) aid_size_cell_fastswap

0xb58c,	// (0x0000b58c) aid_size_cell_touch_ParamLimits

0xb58c,	// (0x0000b58c) aid_size_cell_touch

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window_ParamLimits

0x02bd,	// (0x000002bd) popup_fast_swap_wide_window

0xb73c,	// (0x0000b73c) touch_pane_ParamLimits

0xb73c,	// (0x0000b73c) touch_pane

0x12b6,	// (0x000012b6) button_value_adjust_pane_cp2

0x12be,	// (0x000012be) button_value_adjust_pane_cp4

0x12e0,	// (0x000012e0) form_field_data_pane_cp2

0xbeb4,	// (0x0000beb4) form_field_data_wide_pane_cp2

0x1b1e,	// (0x00001b1e) bg_scroll_pane_ParamLimits

0x1b3d,	// (0x00001b3d) scroll_handle_pane_ParamLimits

0x1b51,	// (0x00001b51) scroll_sc2_down_pane_ParamLimits

0x1b51,	// (0x00001b51) scroll_sc2_down_pane

0x1b78,	// (0x00001b78) scroll_sc2_up_pane_ParamLimits

0x1b78,	// (0x00001b78) scroll_sc2_up_pane

0xd719,	// (0x0000d719) grid_wheel_folder_pane_g1_ParamLimits

0xd719,	// (0x0000d719) grid_wheel_folder_pane_g1

0x225f,	// (0x0000225f) clock_nsta_pane_cp2_ParamLimits

0x225f,	// (0x0000225f) clock_nsta_pane_cp2

0xc277,	// (0x0000c277) listscroll_midp_pane_ParamLimits

0xc283,	// (0x0000c283) midp_canvas_pane

0x2b10,	// (0x00002b10) nsta_clock_indic_pane

0x2b73,	// (0x00002b73) listscroll_form_pane_vc

0x2b97,	// (0x00002b97) listscroll_set_pane_vc_ParamLimits

0x2b97,	// (0x00002b97) listscroll_set_pane_vc

0xcd53,	// (0x0000cd53) clock_nsta_pane

0xcd7d,	// (0x0000cd7d) indicator_nsta_pane

0x35f6,	// (0x000035f6) bg_popup_sub_pane_cp2_ParamLimits

0x360a,	// (0x0000360a) find_pane_cp2_ParamLimits

0x360a,	// (0x0000360a) find_pane_cp2

0x3620,	// (0x00003620) grid_toobar_pane_ParamLimits

0x386b,	// (0x0000386b) list_form_gen_pane_vc_ParamLimits

0x386b,	// (0x0000386b) list_form_gen_pane_vc

0x3881,	// (0x00003881) scroll_pane_cp8_vc_ParamLimits

0x3881,	// (0x00003881) scroll_pane_cp8_vc

0x399a,	// (0x0000399a) data_form_wide_pane_vc_ParamLimits

0x399a,	// (0x0000399a) data_form_wide_pane_vc

0x39a6,	// (0x000039a6) form_field_data_wide_pane_vc_g1

0x39ae,	// (0x000039ae) form_field_data_wide_pane_vc_t1_ParamLimits

0x39ae,	// (0x000039ae) form_field_data_wide_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp6_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp6_vc

0x3d31,	// (0x00003d31) list_midp_pane_ParamLimits

0x5388,	// (0x00005388) scroll_pane_cp16_ParamLimits

0x5388,	// (0x00005388) scroll_pane_cp16

0x3d73,	// (0x00003d73) button_value_adjust_pane_ParamLimits

0x3d73,	// (0x00003d73) button_value_adjust_pane

0xd324,	// (0x0000d324) button_value_adjust_pane_cp6_ParamLimits

0xd324,	// (0x0000d324) button_value_adjust_pane_cp6

0xd43e,	// (0x0000d43e) settings_code_pane_cp_ParamLimits

0xd43e,	// (0x0000d43e) settings_code_pane_cp

0x002e,	// (0x0000002e) cell_touch_pane_g1

0x002e,	// (0x0000002e) cell_touch_pane_g2

0x0001,

0xad6c,	// (0x0000ad6c) cell_touch_pane_g

0xd607,	// (0x0000d607) cell_touch_pane_cp_ParamLimits

0xd607,	// (0x0000d607) cell_touch_pane_cp

0xd623,	// (0x0000d623) cell_touch_pane_ParamLimits

0xd623,	// (0x0000d623) cell_touch_pane

0x002e,	// (0x0000002e) scroll_sc2_down_pane_g1

0x002e,	// (0x0000002e) scroll_sc2_up_pane_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_vc

0x5833,	// (0x00005833) list_set_graphic_pane_vc_g1_ParamLimits

0x5833,	// (0x00005833) list_set_graphic_pane_vc_g1

0x583f,	// (0x0000583f) list_set_graphic_pane_vc_g2_ParamLimits

0x583f,	// (0x0000583f) list_set_graphic_pane_vc_g2

0x0001,

0xb061,	// (0x0000b061) list_set_graphic_pane_vc_g_ParamLimits

0xb061,	// (0x0000b061) list_set_graphic_pane_vc_g

0x584b,	// (0x0000584b) text_primary_small_cp13_vc_ParamLimits

0x584b,	// (0x0000584b) text_primary_small_cp13_vc

0x5863,	// (0x00005863) list_set_graphic_pane_vc_ParamLimits

0x5863,	// (0x00005863) list_set_graphic_pane_vc

0x0293,	// (0x00000293) input_focus_pane_cp2_vc

0x002e,	// (0x0000002e) setting_code_pane_vc_g1

0x05e3,	// (0x000005e3) setting_code_pane_vc_t1

0x5875,	// (0x00005875) set_text_pane_vc_t1_ParamLimits

0x5875,	// (0x00005875) set_text_pane_vc_t1

0x0293,	// (0x00000293) input_focus_pane_cp1_vc

0x5891,	// (0x00005891) list_set_text_pane_vc

0x002e,	// (0x0000002e) setting_text_pane_vc_g1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_vc

0x05b2,	// (0x000005b2) setting_slider_graphic_pane_vc_g1

0x589b,	// (0x0000589b) setting_slider_graphic_pane_vc_t1

0x58ab,	// (0x000058ab) setting_slider_graphic_pane_vc_t2

0x0001,

0xb066,	// (0x0000b066) setting_slider_graphic_pane_vc_t

0x58bb,	// (0x000058bb) slider_set_pane_cp_vc

0x58c3,	// (0x000058c3) slider_set_pane_vc_g1

0x58cc,	// (0x000058cc) slider_set_pane_vc_g2

0x0006,

0xb06b,	// (0x0000b06b) slider_set_pane_vc_g

0x14bf,	// (0x000014bf) set_opt_bg_pane_g1_copy1

0x14c7,	// (0x000014c7) set_opt_bg_pane_g2_copy1

0x58f8,	// (0x000058f8) set_opt_bg_pane_g3_copy1

0x14d7,	// (0x000014d7) set_opt_bg_pane_g4_copy1

0x14df,	// (0x000014df) set_opt_bg_pane_g5_copy1

0x14e7,	// (0x000014e7) set_opt_bg_pane_g6_copy1

0x5902,	// (0x00005902) set_opt_bg_pane_g7_copy1

0x590a,	// (0x0000590a) set_opt_bg_pane_g8_copy1

0x5914,	// (0x00005914) set_opt_bg_pane_g9_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp_vc

0x591e,	// (0x0000591e) setting_slider_pane_vc_t1

0x592d,	// (0x0000592d) setting_slider_pane_vc_t2

0x593d,	// (0x0000593d) setting_slider_pane_vc_t3

0x0002,

0xb07a,	// (0x0000b07a) setting_slider_pane_vc_t

0x594d,	// (0x0000594d) slider_set_pane_vc

0x45b4,	// (0x000045b4) volume_set_pane_vc_g1

0x45bd,	// (0x000045bd) volume_set_pane_vc_g2

0x45c6,	// (0x000045c6) volume_set_pane_vc_g3

0x45cf,	// (0x000045cf) volume_set_pane_vc_g4

0x45d8,	// (0x000045d8) volume_set_pane_vc_g5

0x45e1,	// (0x000045e1) volume_set_pane_vc_g6

0x45ea,	// (0x000045ea) volume_set_pane_vc_g7

0x45f3,	// (0x000045f3) volume_set_pane_vc_g8

0x45fc,	// (0x000045fc) volume_set_pane_vc_g9

0x4605,	// (0x00004605) volume_set_pane_vc_g10

0x0009,

0xaf18,	// (0x0000af18) volume_set_pane_vc_g

0x5955,	// (0x00005955) volume_set_pane_vc

0x595d,	// (0x0000595d) button_value_adjust_pane_cp1_vc

0x5967,	// (0x00005967) list_highlight_pane_cp2_vc

0x5970,	// (0x00005970) list_set_pane_vc_ParamLimits

0x5970,	// (0x00005970) list_set_pane_vc

0x59ce,	// (0x000059ce) main_pane_set_vc_t1_ParamLimits

0x59ce,	// (0x000059ce) main_pane_set_vc_t1

0x59e3,	// (0x000059e3) main_pane_set_vc_t2_ParamLimits

0x59e3,	// (0x000059e3) main_pane_set_vc_t2

0x59f5,	// (0x000059f5) main_pane_set_vc_t3_ParamLimits

0x59f5,	// (0x000059f5) main_pane_set_vc_t3

0x5a09,	// (0x00005a09) main_pane_set_vc_t4_ParamLimits

0x5a09,	// (0x00005a09) main_pane_set_vc_t4

0x0003,

0xb081,	// (0x0000b081) main_pane_set_vc_t_ParamLimits

0xb081,	// (0x0000b081) main_pane_set_vc_t

0x5a1d,	// (0x00005a1d) setting_code_pane_vc_ParamLimits

0x5a1d,	// (0x00005a1d) setting_code_pane_vc

0x5a2e,	// (0x00005a2e) setting_slider_graphic_pane_vc

0x5a2e,	// (0x00005a2e) setting_slider_pane_vc

0x5a2e,	// (0x00005a2e) setting_text_pane_vc

0x5a2e,	// (0x00005a2e) setting_volume_pane_vc

0x5a38,	// (0x00005a38) scroll_pane_cp121_vc

0x12a4,	// (0x000012a4) set_content_pane_vc

0x5d45,	// (0x00005d45) button_value_adjust_pane_g1

0x5d4e,	// (0x00005d4e) button_value_adjust_pane_g2

0x0001,

0xb0e2,	// (0x0000b0e2) button_value_adjust_pane_g

0x5d57,	// (0x00005d57) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5d57,	// (0x00005d57) form_field_slider_wide_pane_vc_t1

0x5d6b,	// (0x00005d6b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5d6b,	// (0x00005d6b) form_field_slider_wide_pane_vc_t2

0x0002,

0xb0e7,	// (0x0000b0e7) form_field_slider_wide_pane_vc_t_ParamLimits

0xb0e7,	// (0x0000b0e7) form_field_slider_wide_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp10_vc

0x5d99,	// (0x00005d99) slider_cont_pane_cp1_vc_ParamLimits

0x5d99,	// (0x00005d99) slider_cont_pane_cp1_vc

0x5dab,	// (0x00005dab) slider_form_pane_g1_cp2

0x58cc,	// (0x000058cc) slider_form_pane_g2_cp2

0x5dd8,	// (0x00005dd8) form_field_slider_pane_vc_t3

0x5de6,	// (0x00005de6) form_field_slider_pane_vc_t4

0x5df4,	// (0x00005df4) slider_form_pane_vc_ParamLimits

0x5df4,	// (0x00005df4) slider_form_pane_vc

0x5e01,	// (0x00005e01) form_field_slider_pane_vc_t1_ParamLimits

0x5e01,	// (0x00005e01) form_field_slider_pane_vc_t1

0x5d6b,	// (0x00005d6b) form_field_slider_pane_vc_t2_ParamLimits

0x5d6b,	// (0x00005d6b) form_field_slider_pane_vc_t2

0x0001,

0xb0f9,	// (0x0000b0f9) form_field_slider_pane_vc_t_ParamLimits

0xb0f9,	// (0x0000b0f9) form_field_slider_pane_vc_t

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc_ParamLimits

0x082d,	// (0x0000082d) input_focus_pane_cp9_vc

0x5e1d,	// (0x00005e1d) slider_cont_pane_vc_ParamLimits

0x5e1d,	// (0x00005e1d) slider_cont_pane_vc

0x5e31,	// (0x00005e31) list_form_graphic_pane_cp_vc_ParamLimits

0x5e31,	// (0x00005e31) list_form_graphic_pane_cp_vc

0x39a6,	// (0x000039a6) form_field_popup_wide_pane_vc_g1

0x5e46,	// (0x00005e46) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5e46,	// (0x00005e46) form_field_popup_wide_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp8_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp8_vc

0x5e8b,	// (0x00005e8b) list_form_wide_pane_vc_ParamLimits

0x5e8b,	// (0x00005e8b) list_form_wide_pane_vc

0x5e97,	// (0x00005e97) list_form_graphic_pane_vc_g1

0x5e9f,	// (0x00005e9f) list_form_graphic_pane_vc_t1_ParamLimits

0x5e9f,	// (0x00005e9f) list_form_graphic_pane_vc_t1

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc_ParamLimits

0x0507,	// (0x00000507) list_highlight_pane_cp5_vc

0x5ebb,	// (0x00005ebb) list_form_graphic_pane_vc_ParamLimits

0x5ebb,	// (0x00005ebb) list_form_graphic_pane_vc

0x39a6,	// (0x000039a6) form_field_popup_pane_vc_g1

0x5ed1,	// (0x00005ed1) form_field_popup_pane_vc_t1_ParamLimits

0x5ed1,	// (0x00005ed1) form_field_popup_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_cp7_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_cp7_vc

0x5ee8,	// (0x00005ee8) list_form_pane_vc_ParamLimits

0x5ee8,	// (0x00005ee8) list_form_pane_vc

0x5ef4,	// (0x00005ef4) data_form_pane_vc_t1_ParamLimits

0x5ef4,	// (0x00005ef4) data_form_pane_vc_t1

0x14bf,	// (0x000014bf) input_focus_pane_vc_g1

0x14c7,	// (0x000014c7) input_focus_pane_vc_g2

0x14cf,	// (0x000014cf) input_focus_pane_vc_g3

0x14d7,	// (0x000014d7) input_focus_pane_vc_g4

0x14df,	// (0x000014df) input_focus_pane_vc_g5

0x14e7,	// (0x000014e7) input_focus_pane_vc_g6

0x14ef,	// (0x000014ef) input_focus_pane_vc_g7

0x14f7,	// (0x000014f7) input_focus_pane_vc_g8

0x14ff,	// (0x000014ff) input_focus_pane_vc_g9

0x002e,	// (0x0000002e) input_focus_pane_vc_g10

0x0009,

0xacf5,	// (0x0000acf5) input_focus_pane_vc_g

0x399a,	// (0x0000399a) data_form_pane_vc_ParamLimits

0x399a,	// (0x0000399a) data_form_pane_vc

0x39a6,	// (0x000039a6) form_field_data_pane_vc_g1

0x5f0f,	// (0x00005f0f) form_field_data_pane_vc_t1_ParamLimits

0x5f0f,	// (0x00005f0f) form_field_data_pane_vc_t1

0x139c,	// (0x0000139c) input_focus_pane_vc_ParamLimits

0x139c,	// (0x0000139c) input_focus_pane_vc

0x5f29,	// (0x00005f29) button_value_adjust_pane_cp3_vc

0x5f31,	// (0x00005f31) button_value_adjust_pane_cp5_vc

0x5f39,	// (0x00005f39) form_field_data_pane_vc_ParamLimits

0x5f39,	// (0x00005f39) form_field_data_pane_vc

0x5f50,	// (0x00005f50) form_field_data_pane_vc_cp2

0x5f58,	// (0x00005f58) form_field_data_wide_pane_vc_ParamLimits

0x5f58,	// (0x00005f58) form_field_data_wide_pane_vc

0x5f6e,	// (0x00005f6e) form_field_data_wide_pane_vc_cp2

0x5f76,	// (0x00005f76) form_field_popup_pane_vc_ParamLimits

0x5f76,	// (0x00005f76) form_field_popup_pane_vc

0x5f8d,	// (0x00005f8d) form_field_popup_wide_pane_vc_ParamLimits

0x5f8d,	// (0x00005f8d) form_field_popup_wide_pane_vc

0x5fa3,	// (0x00005fa3) form_field_slider_pane_vc_ParamLimits

0x5fa3,	// (0x00005fa3) form_field_slider_pane_vc

0x5fb6,	// (0x00005fb6) form_field_slider_wide_pane_vc_ParamLimits

0x5fb6,	// (0x00005fb6) form_field_slider_wide_pane_vc

0xd641,	// (0x0000d641) grid_touch_1_pane_ParamLimits

0xd641,	// (0x0000d641) grid_touch_1_pane

0xd655,	// (0x0000d655) grid_touch_2_pane_ParamLimits

0xd655,	// (0x0000d655) grid_touch_2_pane

0x6084,	// (0x00006084) touch_pane_g1_ParamLimits

0x6084,	// (0x00006084) touch_pane_g1

0x5fed,	// (0x00005fed) cell_app_pane_cp_wide_ParamLimits

0x5fed,	// (0x00005fed) cell_app_pane_cp_wide

0x5ffe,	// (0x00005ffe) grid_popup_fast_wide_pane_ParamLimits

0x5ffe,	// (0x00005ffe) grid_popup_fast_wide_pane

0x6012,	// (0x00006012) scroll_pane_cp19_ParamLimits

0x6012,	// (0x00006012) scroll_pane_cp19

0x0293,	// (0x00000293) bg_popup_window_pane_cp20

0x6026,	// (0x00006026) listscroll_popup_fast_wide_pane

0x16d3,	// (0x000016d3) grid_indicator_nsta_pane

0x602e,	// (0x0000602e) clock_nsta_pane_g1

0x6037,	// (0x00006037) clock_nsta_pane_t1

0xd67f,	// (0x0000d67f) cell_indicator_nsta_pane_ParamLimits

0xd67f,	// (0x0000d67f) cell_indicator_nsta_pane

0x6084,	// (0x00006084) cell_indicator_nsta_pane_g1

0xd696,	// (0x0000d696) cell_indicator_nsta_pane_g2

0x0001,

0xf425,	// (0x0000f425) cell_indicator_nsta_pane_g

0x609f,	// (0x0000609f) clock_nsta_pane_cp

0x60a7,	// (0x000060a7) indicator_nsta_pane_cp

0x60af,	// (0x000060af) nsta_clock_indic_pane_g1

0x067b,	// (0x0000067b) grid_indicator_pane

0x1c6d,	// (0x00001c6d) scroll_pane_cp29

0x218c,	// (0x0000218c) indicator_nsta_pane_cp2_ParamLimits

0x218c,	// (0x0000218c) indicator_nsta_pane_cp2

0x0507,	// (0x00000507) main_apps_wheel_pane

0x3bf2,	// (0x00003bf2) form_midp_field_text_pane_ParamLimits

0x3d3d,	// (0x00003d3d) scroll_bar_cp050_ParamLimits

0x60ff,	// (0x000060ff) cell_indicator_pane_ParamLimits

0x60ff,	// (0x000060ff) cell_indicator_pane

0x6116,	// (0x00006116) cell_indicator_pane_g1

0xd6a3,	// (0x0000d6a3) grid_wheel_folder_pane_ParamLimits

0xd6a3,	// (0x0000d6a3) grid_wheel_folder_pane

0xd6b1,	// (0x0000d6b1) list_wheel_apps_pane_ParamLimits

0xd6b1,	// (0x0000d6b1) list_wheel_apps_pane

0xd6bf,	// (0x0000d6bf) main_apps_wheel_pane_g1_ParamLimits

0xd6bf,	// (0x0000d6bf) main_apps_wheel_pane_g1

0xd6cb,	// (0x0000d6cb) main_apps_wheel_pane_g2_ParamLimits

0xd6cb,	// (0x0000d6cb) main_apps_wheel_pane_g2

0x0001,

0xf42a,	// (0x0000f42a) main_apps_wheel_pane_g_ParamLimits

0xf42a,	// (0x0000f42a) main_apps_wheel_pane_g

0xd6d9,	// (0x0000d6d9) main_apps_wheel_pane_t1_ParamLimits

0xd6d9,	// (0x0000d6d9) main_apps_wheel_pane_t1

0xd6ed,	// (0x0000d6ed) list_wheel_apps_pane_g1

0xd6f5,	// (0x0000d6f5) list_wheel_apps_pane_g2

0xd6fd,	// (0x0000d6fd) list_wheel_apps_pane_g3

0xd705,	// (0x0000d705) list_wheel_apps_pane_g4

0xd70f,	// (0x0000d70f) list_wheel_apps_pane_g5

0x0004,

0xf42f,	// (0x0000f42f) list_wheel_apps_pane_g

0x2497,	// (0x00002497) navi_icon_text_pane

0xcc47,	// (0x0000cc47) aid_fill_nsta

0x61db,	// (0x000061db) navi_icon_text_pane_g1

0x61e7,	// (0x000061e7) navi_icon_text_pane_t1

0x232a,	// (0x0000232a) list_set_graphic_pane_t1_ParamLimits

0x232a,	// (0x0000232a) list_set_graphic_pane_t1

0x4494,	// (0x00004494) popup_midp_note_alarm_window_t6_ParamLimits

0x4494,	// (0x00004494) popup_midp_note_alarm_window_t6

0x44a6,	// (0x000044a6) popup_midp_note_alarm_window_t7_ParamLimits

0x44a6,	// (0x000044a6) popup_midp_note_alarm_window_t7

0x44b8,	// (0x000044b8) popup_midp_note_alarm_window_t8_ParamLimits

0x44b8,	// (0x000044b8) popup_midp_note_alarm_window_t8

0x44ca,	// (0x000044ca) popup_midp_note_alarm_window_t9_ParamLimits

0x44ca,	// (0x000044ca) popup_midp_note_alarm_window_t9

0x44dc,	// (0x000044dc) popup_midp_note_alarm_window_t10_ParamLimits

0x44dc,	// (0x000044dc) popup_midp_note_alarm_window_t10

0x44ee,	// (0x000044ee) popup_midp_note_alarm_window_t11_ParamLimits

0x44ee,	// (0x000044ee) popup_midp_note_alarm_window_t11

0x4500,	// (0x00004500) scroll_pane_cp17_ParamLimits

0x4500,	// (0x00004500) scroll_pane_cp17

0x45b4,	// (0x000045b4) volume_small_pane_cp_g1

0x61f9,	// (0x000061f9) volume_small_pane_cp_g2

0x6202,	// (0x00006202) volume_small_pane_cp_g3

0x620b,	// (0x0000620b) volume_small_pane_cp_g4

0x6214,	// (0x00006214) volume_small_pane_cp_g5

0x621d,	// (0x0000621d) volume_small_pane_cp_g6

0x6226,	// (0x00006226) volume_small_pane_cp_g7

0x622f,	// (0x0000622f) volume_small_pane_cp_g8

0x6238,	// (0x00006238) volume_small_pane_cp_g9

0x6241,	// (0x00006241) volume_small_pane_cp_g10

0x26f4,	// (0x000026f4) midp_ticker_pane_g1_ParamLimits

0x2700,	// (0x00002700) midp_ticker_pane_g2_ParamLimits

0xadc1,	// (0x0000adc1) midp_ticker_pane_g_ParamLimits

0x270c,	// (0x0000270c) midp_ticker_pane_t1_ParamLimits

0xcc6b,	// (0x0000cc6b) aid_fill_nsta_2

0x3d29,	// (0x00003d29) list_form2_midp_pane

0x50e0,	// (0x000050e0) midp_editing_number_pane_ParamLimits

0x50ef,	// (0x000050ef) midp_ticker_pane_ParamLimits

0x624a,	// (0x0000624a) form2_midp_field_pane

0x626e,	// (0x0000626e) scroll_pane_cp51

0x628e,	// (0x0000628e) form2_midp_button_pane_ParamLimits

0x628e,	// (0x0000628e) form2_midp_button_pane

0x62a0,	// (0x000062a0) form2_midp_content_pane_ParamLimits

0x62a0,	// (0x000062a0) form2_midp_content_pane

0x62ba,	// (0x000062ba) form2_midp_field_choice_group_pane

0x62c2,	// (0x000062c2) form2_midp_field_pane_g1

0x62ca,	// (0x000062ca) form2_midp_field_pane_g2

0x62d2,	// (0x000062d2) form2_midp_field_pane_g3

0x62da,	// (0x000062da) form2_midp_field_pane_g4

0x0003,

0xb150,	// (0x0000b150) form2_midp_field_pane_g

0x62e2,	// (0x000062e2) form2_midp_gauge_slider_pane

0x62ea,	// (0x000062ea) form2_midp_gauge_wait_pane

0x62f2,	// (0x000062f2) form2_midp_image_pane_ParamLimits

0x62f2,	// (0x000062f2) form2_midp_image_pane

0x630d,	// (0x0000630d) form2_midp_label_pane_ParamLimits

0x630d,	// (0x0000630d) form2_midp_label_pane

0xd742,	// (0x0000d742) form2_midp_label_pane_cp_ParamLimits

0xd742,	// (0x0000d742) form2_midp_label_pane_cp

0x6347,	// (0x00006347) form2_midp_string_pane_ParamLimits

0x6347,	// (0x00006347) form2_midp_string_pane

0xd761,	// (0x0000d761) form2_midp_text_pane_ParamLimits

0xd761,	// (0x0000d761) form2_midp_text_pane

0x6376,	// (0x00006376) form2_midp_time_pane

0x6386,	// (0x00006386) input_focus_pane_cp51_ParamLimits

0x6386,	// (0x00006386) input_focus_pane_cp51

0x639e,	// (0x0000639e) form2_midp_label_pane_t1_ParamLimits

0x639e,	// (0x0000639e) form2_midp_label_pane_t1

0xd77a,	// (0x0000d77a) form2_mdip_text_pane_t1_ParamLimits

0xd77a,	// (0x0000d77a) form2_mdip_text_pane_t1

0x63fe,	// (0x000063fe) form2_midp_time_pane_t1

0x6419,	// (0x00006419) form2_midp_gauge_slider_pane_t1

0xd795,	// (0x0000d795) form2_midp_gauge_slider_pane_t2

0xd7a7,	// (0x0000d7a7) form2_midp_gauge_slider_pane_t3

0x0002,

0xf43f,	// (0x0000f43f) form2_midp_gauge_slider_pane_t

0x644f,	// (0x0000644f) form2_midp_slider_pane

0x645b,	// (0x0000645b) form2_midp_gauge_wait_pane_t1

0x6469,	// (0x00006469) form2_midp_wait_pane_ParamLimits

0x6469,	// (0x00006469) form2_midp_wait_pane

0xd7b9,	// (0x0000d7b9) list_single_2graphic_pane_cp4_ParamLimits

0xd7b9,	// (0x0000d7b9) list_single_2graphic_pane_cp4

0xd0f9,	// (0x0000d0f9) list_single_midp_graphic_pane_cp_ParamLimits

0xd0f9,	// (0x0000d0f9) list_single_midp_graphic_pane_cp

0x0293,	// (0x00000293) list_highlight_pane_cp20

0x64b8,	// (0x000064b8) list_single_2graphic_pane_g1_cp4

0x64c0,	// (0x000064c0) list_single_2graphic_pane_g2_cp4

0x64c8,	// (0x000064c8) list_single_2graphic_pane_t1_cp4

0x0507,	// (0x00000507) list_highlight_pane_cp21

0x64d7,	// (0x000064d7) list_single_midp_graphic_pane_g4_cp

0x64e6,	// (0x000064e6) list_single_midp_graphic_pane_t1_cp

0xd7cd,	// (0x0000d7cd) form2_mdip_string_pane_t1_ParamLimits

0xd7cd,	// (0x0000d7cd) form2_mdip_string_pane_t1

0x0293,	// (0x00000293) bg_wml_button_pane_cp2

0x002e,	// (0x0000002e) form2_midp_image_pane_g1

0x105a,	// (0x0000105a) list_double_large_graphic_pane_g5_ParamLimits

0x105a,	// (0x0000105a) list_double_large_graphic_pane_g5

0xc277,	// (0x0000c277) midp_form_pane_ParamLimits

0x0507,	// (0x00000507) main_apps_wheel_pane_ParamLimits

0xc997,	// (0x0000c997) popup_preview_window_ParamLimits

0xc997,	// (0x0000c997) popup_preview_window

0x3113,	// (0x00003113) popup_touch_info_window_ParamLimits

0x3113,	// (0x00003113) popup_touch_info_window

0x3131,	// (0x00003131) popup_touch_menu_window_ParamLimits

0x3131,	// (0x00003131) popup_touch_menu_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp6

0x65f4,	// (0x000065f4) list_touch_menu_pane

0x65fc,	// (0x000065fc) list_single_touch_menu_pane_ParamLimits

0x65fc,	// (0x000065fc) list_single_touch_menu_pane

0x6612,	// (0x00006612) list_single_touch_menu_pane_t1

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7_ParamLimits

0x0507,	// (0x00000507) bg_popup_sub_pane_cp7

0x6620,	// (0x00006620) heading_sub_pane

0x6628,	// (0x00006628) list_touch_info_pane_ParamLimits

0x6628,	// (0x00006628) list_touch_info_pane

0x6637,	// (0x00006637) list_single_touch_info_pane_ParamLimits

0x6637,	// (0x00006637) list_single_touch_info_pane

0x6649,	// (0x00006649) list_single_touch_info_pane_t1

0x6657,	// (0x00006657) list_single_touch_info_pane_t2

0x0001,

0xb167,	// (0x0000b167) list_single_touch_info_pane_t

0x2617,	// (0x00002617) bg_popup_heading_pane_cp

0x6665,	// (0x00006665) heading_sub_pane_t1

0x38ac,	// (0x000038ac) bg_popup_preview_window_pane_cp_ParamLimits

0x38ac,	// (0x000038ac) bg_popup_preview_window_pane_cp

0x6620,	// (0x00006620) heading_preview_pane

0x6628,	// (0x00006628) list_preview_pane_ParamLimits

0x6628,	// (0x00006628) list_preview_pane

0x6673,	// (0x00006673) popup_preview_window_g1

0x6637,	// (0x00006637) list_single_preview_pane_ParamLimits

0x6637,	// (0x00006637) list_single_preview_pane

0x667b,	// (0x0000667b) list_single_preview_pane_g1

0x6683,	// (0x00006683) list_single_preview_pane_t1

0x6649,	// (0x00006649) list_single_preview_pane_t2

0x0001,

0xb16c,	// (0x0000b16c) list_single_preview_pane_t

0x6691,	// (0x00006691) bg_popup_heading_pane_cp2_ParamLimits

0x6691,	// (0x00006691) bg_popup_heading_pane_cp2

0x66a7,	// (0x000066a7) heading_preview_pane_g1

0x66af,	// (0x000066af) heading_preview_pane_t1_ParamLimits

0x66af,	// (0x000066af) heading_preview_pane_t1

0x069e,	// (0x0000069e) soft_indicator_pane_t1_ParamLimits

0x0d94,	// (0x00000d94) scroll_pane_ParamLimits

0x1b66,	// (0x00001b66) scroll_sc2_left_pane

0x1b6f,	// (0x00001b6f) scroll_sc2_right_pane

0x1b8e,	// (0x00001b8e) scroll_bg_pane_g1_ParamLimits

0x1ba3,	// (0x00001ba3) scroll_bg_pane_g2_ParamLimits

0x1bbb,	// (0x00001bbb) scroll_bg_pane_g3_ParamLimits

0xad4c,	// (0x0000ad4c) scroll_bg_pane_g_ParamLimits

0x1b8e,	// (0x00001b8e) scroll_handle_pane_g1_ParamLimits

0x1bdd,	// (0x00001bdd) scroll_handle_pane_g2_ParamLimits

0x1bbb,	// (0x00001bbb) scroll_handle_pane_g3_ParamLimits

0xad53,	// (0x0000ad53) scroll_handle_pane_g_ParamLimits

0x2bd9,	// (0x00002bd9) popup_choice_list_window_ParamLimits

0x2bd9,	// (0x00002bd9) popup_choice_list_window

0x3602,	// (0x00003602) choice_list_pane

0x36ca,	// (0x000036ca) cell_toolbar_pane_t1

0x36f2,	// (0x000036f2) toolbar_button_pane_ParamLimits

0x4b1e,	// (0x00004b1e) ai_gene_pane_1_t2_ParamLimits

0x4b1e,	// (0x00004b1e) ai_gene_pane_1_t2

0x0001,

0xaf74,	// (0x0000af74) ai_gene_pane_1_t_ParamLimits

0xaf74,	// (0x0000af74) ai_gene_pane_1_t

0x66cc,	// (0x000066cc) scroll_sc2_left_pane_g1

0x66cc,	// (0x000066cc) scroll_sc2_right_pane_g1

0x2ba9,	// (0x00002ba9) bg_popup_sub_pane_cp10

0x66d6,	// (0x000066d6) list_choice_list_pane

0x66ef,	// (0x000066ef) list_single_choice_list_pane_ParamLimits

0x66ef,	// (0x000066ef) list_single_choice_list_pane

0x6702,	// (0x00006702) list_single_choice_list_pane_g1

0x16a4,	// (0x000016a4) list_single_choice_list_pane_t1_ParamLimits

0x16a4,	// (0x000016a4) list_single_choice_list_pane_t1

0x670a,	// (0x0000670a) choice_list_pane_g1

0x6712,	// (0x00006712) choice_list_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp11

0x18ca,	// (0x000018ca) title_pane_stacon_g2_ParamLimits

0x18ca,	// (0x000018ca) title_pane_stacon_g2

0x0002,

0xad32,	// (0x0000ad32) title_pane_stacon_g_ParamLimits

0xad32,	// (0x0000ad32) title_pane_stacon_g

0x2617,	// (0x00002617) cursor_press_pane

0xc644,	// (0x0000c644) popup_fep_hwr_window_ParamLimits

0xc644,	// (0x0000c644) popup_fep_hwr_window

0x2cff,	// (0x00002cff) popup_fep_vkb_window_ParamLimits

0x2cff,	// (0x00002cff) popup_fep_vkb_window

0x6720,	// (0x00006720) cursor_press_pane_g1

0x0002,

0xf453,	// (0x0000f453) fep_vkb_side_pane_g_ParamLimits

0x6761,	// (0x00006761) fep_hwr_candidate_pane_ParamLimits

0x6761,	// (0x00006761) fep_hwr_candidate_pane

0x678b,	// (0x0000678b) fep_hwr_side_pane_ParamLimits

0x678b,	// (0x0000678b) fep_hwr_side_pane

0x67ab,	// (0x000067ab) fep_hwr_top_pane_ParamLimits

0x67ab,	// (0x000067ab) fep_hwr_top_pane

0x67c3,	// (0x000067c3) fep_hwr_write_pane_ParamLimits

0x67c3,	// (0x000067c3) fep_hwr_write_pane

0xf453,	// (0x0000f453) fep_vkb_side_pane_g

0x67fd,	// (0x000067fd) fep_hwr_top_pane_g1

0x680f,	// (0x0000680f) fep_hwr_top_pane_g2

0x6821,	// (0x00006821) fep_hwr_top_pane_g3

0x0002,

0xb171,	// (0x0000b171) fep_hwr_top_pane_g

0x6836,	// (0x00006836) fep_hwr_top_text_pane

0x1d5d,	// (0x00001d5d) fep_hwr_top_text_pane_g1

0x690e,	// (0x0000690e) fep_hwr_top_text_pane_t1

0x695e,	// (0x0000695e) fep_hwr_candidate_pane_g1

0x6bd7,	// (0x00006bd7) fep_vkb_keypad_pane_g3_ParamLimits

0x6bd7,	// (0x00006bd7) fep_vkb_keypad_pane_g3

0x6bff,	// (0x00006bff) fep_vkb_keypad_pane_g4_ParamLimits

0x6bff,	// (0x00006bff) fep_vkb_keypad_pane_g4

0x6c6e,	// (0x00006c6e) fep_vkb_bottom_pane_g2_ParamLimits

0x6c6e,	// (0x00006c6e) fep_vkb_bottom_pane_g2

0x0001,

0xb19c,	// (0x0000b19c) fep_vkb_bottom_pane_g_ParamLimits

0xb19c,	// (0x0000b19c) fep_vkb_bottom_pane_g

0x66cc,	// (0x000066cc) cell_vkb_side_pane_g2

0x0001,

0xb1a6,	// (0x0000b1a6) cell_vkb_side_pane_g

0x6cf9,	// (0x00006cf9) cell_vkb_side_pane_t1

0x6d07,	// (0x00006d07) cell_vkb_side_pane_t1_copy1

0x66cc,	// (0x000066cc) bg_fep_vkb_candidate_pane_g2

0x6e33,	// (0x00006e33) cell_vkb_candidate_pane_ParamLimits

0x6992,	// (0x00006992) aid_size_cell_vkb_ParamLimits

0x6992,	// (0x00006992) aid_size_cell_vkb

0x6e33,	// (0x00006e33) cell_vkb_candidate_pane

0x6e67,	// (0x00006e67) bg_popup_fep_shadow_pane_g1

0xd89c,	// (0x0000d89c) fep_vkb_bottom_pane_ParamLimits

0xd89c,	// (0x0000d89c) fep_vkb_bottom_pane

0x6a56,	// (0x00006a56) fep_vkb_candidate_pane_ParamLimits

0x6a56,	// (0x00006a56) fep_vkb_candidate_pane

0xd8c1,	// (0x0000d8c1) fep_vkb_keypad_pane_ParamLimits

0xd8c1,	// (0x0000d8c1) fep_vkb_keypad_pane

0xd8fd,	// (0x0000d8fd) fep_vkb_side_pane_ParamLimits

0xd8fd,	// (0x0000d8fd) fep_vkb_side_pane

0xd939,	// (0x0000d939) fep_vkb_top_pane_ParamLimits

0xd939,	// (0x0000d939) fep_vkb_top_pane

0x6b30,	// (0x00006b30) fep_vkb_top_pane_g1_ParamLimits

0x6b30,	// (0x00006b30) fep_vkb_top_pane_g1

0x6b3f,	// (0x00006b3f) fep_vkb_top_pane_g2_ParamLimits

0x6b3f,	// (0x00006b3f) fep_vkb_top_pane_g2

0x6b4e,	// (0x00006b4e) fep_vkb_top_pane_g3_ParamLimits

0x6b4e,	// (0x00006b4e) fep_vkb_top_pane_g3

0x0003,

0xb18c,	// (0x0000b18c) fep_vkb_top_pane_g_ParamLimits

0xb18c,	// (0x0000b18c) fep_vkb_top_pane_g

0x6b6c,	// (0x00006b6c) fep_vkb_top_text_pane_ParamLimits

0x6b6c,	// (0x00006b6c) fep_vkb_top_text_pane

0xd975,	// (0x0000d975) fep_vkb_side_pane_g1_ParamLimits

0xd975,	// (0x0000d975) fep_vkb_side_pane_g1

0x6bc6,	// (0x00006bc6) grid_vkb_side_pane_ParamLimits

0x6bc6,	// (0x00006bc6) grid_vkb_side_pane

0x6e6f,	// (0x00006e6f) bg_popup_fep_shadow_pane_g2

0x6e78,	// (0x00006e78) bg_popup_fep_shadow_pane_g3

0x6e80,	// (0x00006e80) bg_popup_fep_shadow_pane_g4

0x6e89,	// (0x00006e89) bg_popup_fep_shadow_pane_g5

0x6e93,	// (0x00006e93) bg_popup_fep_shadow_pane_g6

0x6e9b,	// (0x00006e9b) bg_popup_fep_shadow_pane_g7

0x14df,	// (0x000014df) bg_popup_fep_shadow_pane_g8

0x6c1d,	// (0x00006c1d) grid_vkb_keypad_number_pane_ParamLimits

0x6c1d,	// (0x00006c1d) grid_vkb_keypad_number_pane

0x6c2d,	// (0x00006c2d) grid_vkb_keypad_pane_ParamLimits

0x6c2d,	// (0x00006c2d) grid_vkb_keypad_pane

0x6c53,	// (0x00006c53) fep_vkb_bottom_pane_g1_ParamLimits

0x6c53,	// (0x00006c53) fep_vkb_bottom_pane_g1

0x6c7c,	// (0x00006c7c) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6c7c,	// (0x00006c7c) grid_vkb_keypad_bottom_left_pane

0x6c91,	// (0x00006c91) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6c91,	// (0x00006c91) grid_vkb_keypad_bottom_right_pane

0x6ca6,	// (0x00006ca6) fep_vkb_top_text_pane_g1

0xd9bc,	// (0x0000d9bc) fep_vkb_top_text_pane_t1

0xd9ce,	// (0x0000d9ce) cell_vkb_side_pane_ParamLimits

0xd9ce,	// (0x0000d9ce) cell_vkb_side_pane

0x66cc,	// (0x000066cc) cell_vkb_side_pane_g1

0x6d15,	// (0x00006d15) cell_vkb_keypad_pane_ParamLimits

0x6d15,	// (0x00006d15) cell_vkb_keypad_pane

0x6d8a,	// (0x00006d8a) cell_vkb_keypad_pane_g1

0x0008,

0xb1b9,	// (0x0000b1b9) bg_popup_fep_shadow_pane_g

0x66cc,	// (0x000066cc) cell_hwr_side_pane_g1

0x66cc,	// (0x000066cc) cell_hwr_side_pane_g2

0x6d94,	// (0x00006d94) cell_vkb_keypad_pane_t1

0xd9e4,	// (0x0000d9e4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd9e4,	// (0x0000d9e4) cell_vkb_keypad_bottom_left_pane

0xd9f9,	// (0x0000d9f9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd9f9,	// (0x0000d9f9) cell_vkb_keypad_bottom_right_pane

0x66cc,	// (0x000066cc) cell_vkb_keypad_bottom_left_pane_g1

0x66cc,	// (0x000066cc) cell_vkb_keypad_bottom_right_pane_g1

0x6df8,	// (0x00006df8) cell_vkb_keypad_number_pane_ParamLimits

0x6df8,	// (0x00006df8) cell_vkb_keypad_number_pane

0x6e17,	// (0x00006e17) cell_vkb_keypad_number_pane_g1

0x6e21,	// (0x00006e21) cell_vkb_keypad_number_pane_g2

0x6e2a,	// (0x00006e2a) cell_vkb_keypad_number_pane_g3

0x0002,

0xb1ab,	// (0x0000b1ab) cell_vkb_keypad_number_pane_g

0x6d94,	// (0x00006d94) cell_vkb_keypad_number_pane_t1

0x6e4e,	// (0x00006e4e) fep_vkb_candidate_pane_g1

0x0001,

0xb1a6,	// (0x0000b1a6) cell_hwr_side_pane_g

0x6ead,	// (0x00006ead) cell_hwr_side_pane_t1

0x6ebb,	// (0x00006ebb) cell_hwr_side_pane_t1_copy1

0x6b5e,	// (0x00006b5e) cell_hwr_candidate_pane_g1

0x6f0b,	// (0x00006f0b) cell_hwr_candidate_pane_t1

0x66cc,	// (0x000066cc) cell_vkb_candidate_pane_g2

0x6f5f,	// (0x00006f5f) cell_vkb_candidate_pane_t1

0x6728,	// (0x00006728) bg_popup_fep_shadow_pane_ParamLimits

0x6728,	// (0x00006728) bg_popup_fep_shadow_pane

0x67dd,	// (0x000067dd) bg_fep_hwr_top_pane_g4

0x684b,	// (0x0000684b) bg_hwr_side_pane_g1_ParamLimits

0x684b,	// (0x0000684b) bg_hwr_side_pane_g1

0xd855,	// (0x0000d855) cell_hwr_side_pane_ParamLimits

0xd855,	// (0x0000d855) cell_hwr_side_pane

0x68b9,	// (0x000068b9) fep_hwr_write_pane_g1_ParamLimits

0x68b9,	// (0x000068b9) fep_hwr_write_pane_g1

0x68c6,	// (0x000068c6) fep_hwr_write_pane_g2_ParamLimits

0x68c6,	// (0x000068c6) fep_hwr_write_pane_g2

0x68d3,	// (0x000068d3) fep_hwr_write_pane_g3_ParamLimits

0x68d3,	// (0x000068d3) fep_hwr_write_pane_g3

0xd875,	// (0x0000d875) fep_hwr_write_pane_g4_ParamLimits

0xd875,	// (0x0000d875) fep_hwr_write_pane_g4

0x0005,

0xf446,	// (0x0000f446) fep_hwr_write_pane_g_ParamLimits

0xf446,	// (0x0000f446) fep_hwr_write_pane_g

0x67dd,	// (0x000067dd) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x67dd,	// (0x000067dd) bg_fep_hwr_candidate_pane_g2

0x691c,	// (0x0000691c) cell_hwr_candidate_pane_ParamLimits

0x691c,	// (0x0000691c) cell_hwr_candidate_pane

0x695e,	// (0x0000695e) fep_hwr_candidate_pane_g1_ParamLimits

0x69c0,	// (0x000069c0) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x69c0,	// (0x000069c0) bg_popup_fep_shadow_pane_cp2

0x6b5e,	// (0x00006b5e) fep_vkb_top_pane_g4_ParamLimits

0x6b5e,	// (0x00006b5e) fep_vkb_top_pane_g4

0x6ba4,	// (0x00006ba4) fep_vkb_side_pane_g2_ParamLimits

0x6ba4,	// (0x00006ba4) fep_vkb_side_pane_g2

0xbde2,	// (0x0000bde2) list_setting_pane_t4_ParamLimits

0xbde2,	// (0x0000bde2) list_setting_pane_t4

0xbe5c,	// (0x0000be5c) list_setting_number_pane_t5_ParamLimits

0xbe5c,	// (0x0000be5c) list_setting_number_pane_t5

0x1db3,	// (0x00001db3) list_double_heading_pane_cp2_ParamLimits

0x1db3,	// (0x00001db3) list_double_heading_pane_cp2

0x0fe5,	// (0x00000fe5) list_double_heading_pane_g1_cp2_ParamLimits

0x0fe5,	// (0x00000fe5) list_double_heading_pane_g1_cp2

0x13c2,	// (0x000013c2) list_double_heading_pane_g2_cp2_ParamLimits

0x13c2,	// (0x000013c2) list_double_heading_pane_g2_cp2

0x6f6d,	// (0x00006f6d) list_double_heading_pane_t1_cp2_ParamLimits

0x6f6d,	// (0x00006f6d) list_double_heading_pane_t1_cp2

0x6f83,	// (0x00006f83) list_double_heading_pane_t2_cp2_ParamLimits

0x6f83,	// (0x00006f83) list_double_heading_pane_t2_cp2

0x000c,	// (0x0000000c) aid_value_unit2

0x0317,	// (0x00000317) popup_preview_fixed_window

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02

0x6f95,	// (0x00006f95) list_preview_fixed_pane

0x6fdb,	// (0x00006fdb) list_empty_pane_fp_ParamLimits

0x6fdb,	// (0x00006fdb) list_empty_pane_fp

0x6fdb,	// (0x00006fdb) list_single_cale_day_pane_fp_ParamLimits

0x6fdb,	// (0x00006fdb) list_single_cale_day_pane_fp

0x6fdb,	// (0x00006fdb) list_single_graphic_heading_pane_fp_ParamLimits

0x6fdb,	// (0x00006fdb) list_single_graphic_heading_pane_fp

0x6fdb,	// (0x00006fdb) list_single_graphic_pane_fp_ParamLimits

0x6fdb,	// (0x00006fdb) list_single_graphic_pane_fp

0x6fdb,	// (0x00006fdb) list_single_heading_pane_fp_ParamLimits

0x6fdb,	// (0x00006fdb) list_single_heading_pane_fp

0x6fdb,	// (0x00006fdb) list_single_pane_fp_ParamLimits

0x6fdb,	// (0x00006fdb) list_single_pane_fp

0x6ff0,	// (0x00006ff0) list_single_pane_fp_g1_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_pane_fp_g1

0x0fe5,	// (0x00000fe5) list_single_pane_fp_g2_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_pane_fp_g2

0x13c2,	// (0x000013c2) list_single_pane_fp_g3_ParamLimits

0x13c2,	// (0x000013c2) list_single_pane_fp_g3

0x6ffc,	// (0x00006ffc) list_single_pane_fp_g4_ParamLimits

0x6ffc,	// (0x00006ffc) list_single_pane_fp_g4

0x0003,

0xb1da,	// (0x0000b1da) list_single_pane_fp_g_ParamLimits

0xb1da,	// (0x0000b1da) list_single_pane_fp_g

0x7008,	// (0x00007008) list_single_pane_fp_t1_ParamLimits

0x7008,	// (0x00007008) list_single_pane_fp_t1

0x701f,	// (0x0000701f) list_single_graphic_pane_fp_g1_ParamLimits

0x701f,	// (0x0000701f) list_single_graphic_pane_fp_g1

0x6ff0,	// (0x00006ff0) list_single_graphic_pane_fp_g2_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_graphic_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_pane_fp_g4

0x6ffc,	// (0x00006ffc) list_single_graphic_pane_fp_g5_ParamLimits

0x6ffc,	// (0x00006ffc) list_single_graphic_pane_fp_g5

0x0004,

0xb1e3,	// (0x0000b1e3) list_single_graphic_pane_fp_g_ParamLimits

0xb1e3,	// (0x0000b1e3) list_single_graphic_pane_fp_g

0x702b,	// (0x0000702b) list_single_graphic_pane_fp_t1_ParamLimits

0x702b,	// (0x0000702b) list_single_graphic_pane_fp_t1

0x701f,	// (0x0000701f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x701f,	// (0x0000701f) list_single_graphic_heading_pane_fp_g1

0x6ff0,	// (0x00006ff0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_graphic_heading_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_heading_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_heading_pane_fp_g4

0x6ffc,	// (0x00006ffc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6ffc,	// (0x00006ffc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xb1e3,	// (0x0000b1e3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xb1e3,	// (0x0000b1e3) list_single_graphic_heading_pane_fp_g

0x7041,	// (0x00007041) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7041,	// (0x00007041) list_single_graphic_heading_pane_fp_t1

0x7057,	// (0x00007057) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7057,	// (0x00007057) list_single_graphic_heading_pane_fp_t2

0x0001,

0xb1ee,	// (0x0000b1ee) list_single_graphic_heading_pane_fp_t_ParamLimits

0xb1ee,	// (0x0000b1ee) list_single_graphic_heading_pane_fp_t

0x7069,	// (0x00007069) list_single_cale_day_pane_fp_g1_ParamLimits

0x7069,	// (0x00007069) list_single_cale_day_pane_fp_g1

0x70a1,	// (0x000070a1) list_single_cale_day_pane_fp_g2_ParamLimits

0x70a1,	// (0x000070a1) list_single_cale_day_pane_fp_g2

0x70ad,	// (0x000070ad) list_single_cale_day_pane_fp_g3_ParamLimits

0x70ad,	// (0x000070ad) list_single_cale_day_pane_fp_g3

0x70d5,	// (0x000070d5) list_single_cale_day_pane_fp_g4_ParamLimits

0x70d5,	// (0x000070d5) list_single_cale_day_pane_fp_g4

0x70f9,	// (0x000070f9) list_single_cale_day_pane_fp_g5_ParamLimits

0x70f9,	// (0x000070f9) list_single_cale_day_pane_fp_g5

0x0004,

0xb1f3,	// (0x0000b1f3) list_single_cale_day_pane_fp_g_ParamLimits

0xb1f3,	// (0x0000b1f3) list_single_cale_day_pane_fp_g

0x711d,	// (0x0000711d) list_single_cale_day_pane_fp_t1_ParamLimits

0x711d,	// (0x0000711d) list_single_cale_day_pane_fp_t1

0x7143,	// (0x00007143) list_single_cale_day_pane_fp_t2_ParamLimits

0x7143,	// (0x00007143) list_single_cale_day_pane_fp_t2

0x715c,	// (0x0000715c) list_single_cale_day_pane_fp_t3_ParamLimits

0x715c,	// (0x0000715c) list_single_cale_day_pane_fp_t3

0x0002,

0xb1fe,	// (0x0000b1fe) list_single_cale_day_pane_fp_t_ParamLimits

0xb1fe,	// (0x0000b1fe) list_single_cale_day_pane_fp_t

0x6ff0,	// (0x00006ff0) list_empty_pane_fp_g1_ParamLimits

0x6ff0,	// (0x00006ff0) list_empty_pane_fp_g1

0x7175,	// (0x00007175) list_empty_pane_fp_t1

0x7183,	// (0x00007183) list_empty_pane_fp_t2

0x0001,

0xb205,	// (0x0000b205) list_empty_pane_fp_t

0x6ff0,	// (0x00006ff0) list_single_heading_pane_fp_g1_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_heading_pane_fp_g1

0x0fe5,	// (0x00000fe5) list_single_heading_pane_fp_g2_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_heading_pane_fp_g2

0x13c2,	// (0x000013c2) list_single_heading_pane_fp_g3_ParamLimits

0x13c2,	// (0x000013c2) list_single_heading_pane_fp_g3

0x0002,

0xb20a,	// (0x0000b20a) list_single_heading_pane_fp_g_ParamLimits

0xb20a,	// (0x0000b20a) list_single_heading_pane_fp_g

0x7191,	// (0x00007191) list_single_heading_pane_fp_t1_ParamLimits

0x7191,	// (0x00007191) list_single_heading_pane_fp_t1

0x71a3,	// (0x000071a3) list_single_heading_pane_fp_t2_ParamLimits

0x71a3,	// (0x000071a3) list_single_heading_pane_fp_t2

0x0001,

0xb211,	// (0x0000b211) list_single_heading_pane_fp_t_ParamLimits

0xb211,	// (0x0000b211) list_single_heading_pane_fp_t

0x1712,	// (0x00001712) aid_size_cell_fast

0x07ab,	// (0x000007ab) soft_indicator_pane_cp1_t1

0x174f,	// (0x0000174f) cell_app_pane_cp2_ParamLimits

0x174f,	// (0x0000174f) cell_app_pane_cp2

0x674a,	// (0x0000674a) fep_hwr_candidate_drop_down_list_pane

0x6978,	// (0x00006978) fep_hwr_candidate_pane_g3_ParamLimits

0x6978,	// (0x00006978) fep_hwr_candidate_pane_g3

0x6985,	// (0x00006985) fep_hwr_candidate_pane_g4_ParamLimits

0x6985,	// (0x00006985) fep_hwr_candidate_pane_g4

0x0002,

0xb185,	// (0x0000b185) fep_hwr_candidate_pane_g_ParamLimits

0xb185,	// (0x0000b185) fep_hwr_candidate_pane_g

0x6a45,	// (0x00006a45) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6a45,	// (0x00006a45) fep_vkb_candidate_drop_down_list_pane

0x6e56,	// (0x00006e56) fep_vkb_candidate_pane_g3

0x6e5e,	// (0x00006e5e) fep_vkb_candidate_pane_g4

0x0002,

0xb1b2,	// (0x0000b1b2) fep_vkb_candidate_pane_g

0x6b5e,	// (0x00006b5e) cell_hwr_candidate_pane_g1_ParamLimits

0x6ec9,	// (0x00006ec9) cell_hwr_candidate_pane_g3_ParamLimits

0x6ec9,	// (0x00006ec9) cell_hwr_candidate_pane_g3

0x6eea,	// (0x00006eea) cell_hwr_candidate_pane_g4_ParamLimits

0x6eea,	// (0x00006eea) cell_hwr_candidate_pane_g4

0x0002,

0xb1cc,	// (0x0000b1cc) cell_hwr_candidate_pane_g_ParamLimits

0xb1cc,	// (0x0000b1cc) cell_hwr_candidate_pane_g

0x6f29,	// (0x00006f29) cell_vkb_candidate_pane_g3_ParamLimits

0x6f29,	// (0x00006f29) cell_vkb_candidate_pane_g3

0x6f44,	// (0x00006f44) cell_vkb_candidate_pane_g4_ParamLimits

0x6f44,	// (0x00006f44) cell_vkb_candidate_pane_g4

0x71b9,	// (0x000071b9) cell_app_pane_cp2_g1_ParamLimits

0x71b9,	// (0x000071b9) cell_app_pane_cp2_g1

0x71d7,	// (0x000071d7) cell_app_pane_cp2_g2_ParamLimits

0x71d7,	// (0x000071d7) cell_app_pane_cp2_g2

0x0001,

0xb216,	// (0x0000b216) cell_app_pane_cp2_g_ParamLimits

0xb216,	// (0x0000b216) cell_app_pane_cp2_g

0x71e3,	// (0x000071e3) cell_app_pane_cp2_t1_ParamLimits

0x71e3,	// (0x000071e3) cell_app_pane_cp2_t1

0x139c,	// (0x0000139c) grid_highlight_pane_cp1_ParamLimits

0x139c,	// (0x0000139c) grid_highlight_pane_cp1

0x71f5,	// (0x000071f5) cell_hwr_candidate_pane_cp1_ParamLimits

0x71f5,	// (0x000071f5) cell_hwr_candidate_pane_cp1

0x6b5e,	// (0x00006b5e) fep_hwr_candidate_drop_down_list_pane_g1

0x7214,	// (0x00007214) fep_hwr_candidate_drop_down_list_pane_g2

0x7221,	// (0x00007221) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xb21b,	// (0x0000b21b) fep_hwr_candidate_drop_down_list_pane_g

0x722e,	// (0x0000722e) fep_hwr_candidate_drop_down_list_scroll_pane

0x7237,	// (0x00007237) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7237,	// (0x00007237) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7244,	// (0x00007244) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7244,	// (0x00007244) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7251,	// (0x00007251) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7251,	// (0x00007251) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6f29,	// (0x00006f29) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6f29,	// (0x00006f29) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6f44,	// (0x00006f44) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6f44,	// (0x00006f44) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x725e,	// (0x0000725e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x725e,	// (0x0000725e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7279,	// (0x00007279) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7279,	// (0x00007279) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7294,	// (0x00007294) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7294,	// (0x00007294) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb222,	// (0x0000b222) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb222,	// (0x0000b222) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x72af,	// (0x000072af) cell_vkb_candidate_pane_cp1_ParamLimits

0x72af,	// (0x000072af) cell_vkb_candidate_pane_cp1

0x6b5e,	// (0x00006b5e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6b5e,	// (0x00006b5e) fep_vkb_candidate_drop_down_list_pane_g1

0x7214,	// (0x00007214) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7214,	// (0x00007214) fep_vkb_candidate_drop_down_list_pane_g2

0x7221,	// (0x00007221) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7221,	// (0x00007221) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xb21b,	// (0x0000b21b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xb21b,	// (0x0000b21b) fep_vkb_candidate_drop_down_list_pane_g

0x72cf,	// (0x000072cf) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x72cf,	// (0x000072cf) fep_vkb_candidate_drop_down_list_scroll_pane

0x72dc,	// (0x000072dc) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x72dc,	// (0x000072dc) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x72e9,	// (0x000072e9) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x72e9,	// (0x000072e9) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x72f5,	// (0x000072f5) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x72f5,	// (0x000072f5) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6ec9,	// (0x00006ec9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6ec9,	// (0x00006ec9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6eea,	// (0x00006eea) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6eea,	// (0x00006eea) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7301,	// (0x00007301) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7301,	// (0x00007301) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7322,	// (0x00007322) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7322,	// (0x00007322) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7343,	// (0x00007343) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7343,	// (0x00007343) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xb233,	// (0x0000b233) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xb233,	// (0x0000b233) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb792,	// (0x0000b792) title_pane_g1_ParamLimits

0xb7a5,	// (0x0000b7a5) title_pane_g2_ParamLimits

0xf27f,	// (0x0000f27f) title_pane_g_ParamLimits

0x1d4d,	// (0x00001d4d) aid_call2_pane

0x1d55,	// (0x00001d55) aid_call_pane

0x1d5d,	// (0x00001d5d) popup_clock_analogue_window_g1

0x1d5d,	// (0x00001d5d) popup_clock_analogue_window_g2

0x1d65,	// (0x00001d65) popup_clock_analogue_window_g3

0x1d6e,	// (0x00001d6e) popup_clock_analogue_window_g4

0x002e,	// (0x0000002e) popup_clock_analogue_window_g5

0x0004,

0xad61,	// (0x0000ad61) popup_clock_analogue_window_g

0x1d76,	// (0x00001d76) popup_clock_analogue_window_t1

0x1e01,	// (0x00001e01) clock_digital_number_pane_ParamLimits

0x1e01,	// (0x00001e01) clock_digital_number_pane

0x1e0d,	// (0x00001e0d) clock_digital_number_pane_cp02_ParamLimits

0x1e0d,	// (0x00001e0d) clock_digital_number_pane_cp02

0x1e19,	// (0x00001e19) clock_digital_number_pane_cp03_ParamLimits

0x1e19,	// (0x00001e19) clock_digital_number_pane_cp03

0x1e25,	// (0x00001e25) clock_digital_number_pane_cp04_ParamLimits

0x1e25,	// (0x00001e25) clock_digital_number_pane_cp04

0x1e31,	// (0x00001e31) clock_digital_separator_pane_ParamLimits

0x1e31,	// (0x00001e31) clock_digital_separator_pane

0x1e3d,	// (0x00001e3d) popup_clock_digital_window_t1_ParamLimits

0x1e3d,	// (0x00001e3d) popup_clock_digital_window_t1

0x002e,	// (0x0000002e) clock_digital_number_pane_g1

0x002e,	// (0x0000002e) clock_digital_number_pane_g2

0x0001,

0xad6c,	// (0x0000ad6c) clock_digital_number_pane_g

0x002e,	// (0x0000002e) clock_digital_separator_pane_g1

0x002e,	// (0x0000002e) clock_digital_separator_pane_g2

0x0001,

0xad6c,	// (0x0000ad6c) clock_digital_separator_pane_g

0xcc47,	// (0x0000cc47) aid_fill_nsta_ParamLimits

0xcd7d,	// (0x0000cd7d) indicator_nsta_pane_ParamLimits

0x342f,	// (0x0000342f) popup_clock_analogue_window

0x342f,	// (0x0000342f) popup_clock_digital_window

0x16d3,	// (0x000016d3) grid_indicator_nsta_pane_ParamLimits

0x6045,	// (0x00006045) clock_nsta_pane_t2

0x0001,

0xb105,	// (0x0000b105) clock_nsta_pane_t

0x1b0b,	// (0x00001b0b) aid_size_max_handle

0xc145,	// (0x0000c145) aid_size_min_handle

0x2617,	// (0x00002617) editor_scroll_pane

0x735e,	// (0x0000735e) ex_editor_pane

0x1680,	// (0x00001680) scroll_pane_cp13

0x0dc0,	// (0x00000dc0) scroll_pane_cp14

0x1dab,	// (0x00001dab) scroll_pane_cp36

0xc14e,	// (0x0000c14e) list_single_graphic_hl_pane_cp2_ParamLimits

0xc14e,	// (0x0000c14e) list_single_graphic_hl_pane_cp2

0xd4bb,	// (0x0000d4bb) list_single_graphic_hl_pane_ParamLimits

0xd4bb,	// (0x0000d4bb) list_single_graphic_hl_pane

0x7366,	// (0x00007366) aid_size_min_hl_cp1

0x736f,	// (0x0000736f) list_highlight_pane_cp34_ParamLimits

0x736f,	// (0x0000736f) list_highlight_pane_cp34

0x7380,	// (0x00007380) list_single_graphic_hl_pane_g1_ParamLimits

0x7380,	// (0x00007380) list_single_graphic_hl_pane_g1

0xda14,	// (0x0000da14) list_single_graphic_hl_pane_g2_ParamLimits

0xda14,	// (0x0000da14) list_single_graphic_hl_pane_g2

0xda14,	// (0x0000da14) list_single_graphic_hl_pane_g3_ParamLimits

0xda14,	// (0x0000da14) list_single_graphic_hl_pane_g3

0x2588,	// (0x00002588) list_single_graphic_hl_pane_g4_ParamLimits

0x2588,	// (0x00002588) list_single_graphic_hl_pane_g4

0xda20,	// (0x0000da20) list_single_graphic_hl_pane_g5_ParamLimits

0xda20,	// (0x0000da20) list_single_graphic_hl_pane_g5

0x0004,

0xf45f,	// (0x0000f45f) list_single_graphic_hl_pane_g_ParamLimits

0xf45f,	// (0x0000f45f) list_single_graphic_hl_pane_g

0xda34,	// (0x0000da34) list_single_graphic_hl_pane_t1_ParamLimits

0xda34,	// (0x0000da34) list_single_graphic_hl_pane_t1

0x73c3,	// (0x000073c3) aid_size_min_hl_cp2

0x73cc,	// (0x000073cc) list_highlight_pane_cp34_cp2_ParamLimits

0x73cc,	// (0x000073cc) list_highlight_pane_cp34_cp2

0x7380,	// (0x00007380) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7380,	// (0x00007380) list_single_graphic_hl_pane_g1_cp2

0x73d9,	// (0x000073d9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x73d9,	// (0x000073d9) list_single_graphic_hl_pane_g2_cp2

0x73e5,	// (0x000073e5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x73e5,	// (0x000073e5) list_single_graphic_hl_pane_g3_cp2

0x57e1,	// (0x000057e1) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x57e1,	// (0x000057e1) list_single_graphic_hl_pane_g4_cp2

0x7399,	// (0x00007399) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7399,	// (0x00007399) list_single_graphic_hl_pane_g5_cp2

0xc41f,	// (0x0000c41f) control_pane_g4_ParamLimits

0xc41f,	// (0x0000c41f) control_pane_g4

0x2ba9,	// (0x00002ba9) bg_popup_sub_pane_cp10_ParamLimits

0x66d6,	// (0x000066d6) list_choice_list_pane_ParamLimits

0x66e5,	// (0x000066e5) scroll_pane_cp23

0x083b,	// (0x0000083b) bg_popup_preview_window_pane_cp02_ParamLimits

0x6f95,	// (0x00006f95) list_preview_fixed_pane_ParamLimits

0x6fab,	// (0x00006fab) list_preview_fixed_pane_cp_ParamLimits

0x6fab,	// (0x00006fab) list_preview_fixed_pane_cp

0x6fb7,	// (0x00006fb7) popup_preview_fixed_window_g1_ParamLimits

0x6fb7,	// (0x00006fb7) popup_preview_fixed_window_g1

0x6fc3,	// (0x00006fc3) popup_preview_fixed_window_g2_ParamLimits

0x6fc3,	// (0x00006fc3) popup_preview_fixed_window_g2

0x0002,

0xb1d3,	// (0x0000b1d3) popup_preview_fixed_window_g_ParamLimits

0xb1d3,	// (0x0000b1d3) popup_preview_fixed_window_g

0x19ae,	// (0x000019ae) aid_navi_side_left_pane_ParamLimits

0x19c3,	// (0x000019c3) aid_navi_side_right_pane_ParamLimits

0x19db,	// (0x000019db) navi_icon_pane_stacon_ParamLimits

0x19ef,	// (0x000019ef) navi_navi_pane_stacon_ParamLimits

0x19db,	// (0x000019db) navi_text_pane_stacon_ParamLimits

0x0024,	// (0x00000024) main_text_info_pane

0x7409,	// (0x00007409) listscroll_text_info_pane

0x7411,	// (0x00007411) list_text_info_pane_ParamLimits

0x7411,	// (0x00007411) list_text_info_pane

0x7420,	// (0x00007420) scroll_pane_cp24_ParamLimits

0x7420,	// (0x00007420) scroll_pane_cp24

0xda4a,	// (0x0000da4a) list_text_info_pane_t1_ParamLimits

0xda4a,	// (0x0000da4a) list_text_info_pane_t1

0xc5b7,	// (0x0000c5b7) popup_fast_swap2_window_ParamLimits

0xc5b7,	// (0x0000c5b7) popup_fast_swap2_window

0x746f,	// (0x0000746f) aid_size_cell_fast2

0x0024,	// (0x00000024) bg_popup_window_pane_cp17

0x3d5d,	// (0x00003d5d) heading_pane_cp2

0x0a8a,	// (0x00000a8a) listscroll_fast2_pane

0x7479,	// (0x00007479) grid_fast2_pane

0x7483,	// (0x00007483) listscroll_fast2_pane_g1

0x748b,	// (0x0000748b) listscroll_fast2_pane_g2

0x0001,

0xb24f,	// (0x0000b24f) listscroll_fast2_pane_g

0x1680,	// (0x00001680) scroll_pane_cp26

0x7495,	// (0x00007495) cell_fast2_pane_ParamLimits

0x7495,	// (0x00007495) cell_fast2_pane

0x74aa,	// (0x000074aa) cell_fast2_pane_g1

0x74b3,	// (0x000074b3) cell_fast2_pane_g2

0x74bc,	// (0x000074bc) cell_fast2_pane_g3

0x0002,

0xb254,	// (0x0000b254) cell_fast2_pane_g

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp9

0x0b92,	// (0x00000b92) main_eswt_pane_ParamLimits

0x0b92,	// (0x00000b92) main_eswt_pane

0x7435,	// (0x00007435) list_single_text_info_pane

0x74c4,	// (0x000074c4) eswt_ctrl_button_pane

0x74c4,	// (0x000074c4) eswt_ctrl_canvas_pane

0x74cc,	// (0x000074cc) eswt_ctrl_combo_pane

0x74c4,	// (0x000074c4) eswt_ctrl_default_pane

0x74c4,	// (0x000074c4) eswt_ctrl_label_pane

0x74d4,	// (0x000074d4) eswt_ctrl_wait_pane

0x74dc,	// (0x000074dc) eswt_shell_pane

0x0024,	// (0x00000024) listscroll_eswt_app_pane

0x74fc,	// (0x000074fc) popup_eswt_tasktip_window_ParamLimits

0x74fc,	// (0x000074fc) popup_eswt_tasktip_window

0x38ac,	// (0x000038ac) bg_popup_window_pane_cp18

0x750d,	// (0x0000750d) eswt_control_pane_g1_ParamLimits

0x750d,	// (0x0000750d) eswt_control_pane_g1

0x751a,	// (0x0000751a) eswt_control_pane_g2_ParamLimits

0x751a,	// (0x0000751a) eswt_control_pane_g2

0x7527,	// (0x00007527) eswt_control_pane_g3_ParamLimits

0x7527,	// (0x00007527) eswt_control_pane_g3

0x7534,	// (0x00007534) eswt_control_pane_g4_ParamLimits

0x7534,	// (0x00007534) eswt_control_pane_g4

0x0003,

0xb25b,	// (0x0000b25b) eswt_control_pane_g_ParamLimits

0xb25b,	// (0x0000b25b) eswt_control_pane_g

0x139c,	// (0x0000139c) bg_button_pane_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane

0x0b92,	// (0x00000b92) common_borders_pane_copy2_ParamLimits

0x0b92,	// (0x00000b92) common_borders_pane_copy2

0x7541,	// (0x00007541) control_button_pane_g1_ParamLimits

0x7541,	// (0x00007541) control_button_pane_g1

0x754d,	// (0x0000754d) control_button_pane_g2_ParamLimits

0x754d,	// (0x0000754d) control_button_pane_g2

0x7559,	// (0x00007559) control_button_pane_g3_ParamLimits

0x7559,	// (0x00007559) control_button_pane_g3

0x0002,

0xb264,	// (0x0000b264) control_button_pane_g_ParamLimits

0xb264,	// (0x0000b264) control_button_pane_g

0x756d,	// (0x0000756d) control_button_pane_t1

0x757b,	// (0x0000757b) control_button_pane_t2

0x0001,

0xb26b,	// (0x0000b26b) control_button_pane_t

0x36fe,	// (0x000036fe) bg_button_pane_g1

0x3706,	// (0x00003706) bg_button_pane_g2

0x370e,	// (0x0000370e) bg_button_pane_g3

0x3716,	// (0x00003716) bg_button_pane_g4

0x371e,	// (0x0000371e) bg_button_pane_g5

0x3726,	// (0x00003726) bg_button_pane_g6

0x372e,	// (0x0000372e) bg_button_pane_g7

0x3736,	// (0x00003736) bg_button_pane_g8

0x373e,	// (0x0000373e) bg_button_pane_g9

0x0008,

0xaec8,	// (0x0000aec8) bg_button_pane_g

0x6691,	// (0x00006691) common_borders_pane_ParamLimits

0x6691,	// (0x00006691) common_borders_pane

0x750d,	// (0x0000750d) eswt_control_pane_g1_copy1_ParamLimits

0x750d,	// (0x0000750d) eswt_control_pane_g1_copy1

0x751a,	// (0x0000751a) eswt_control_pane_g2_copy1_ParamLimits

0x751a,	// (0x0000751a) eswt_control_pane_g2_copy1

0x7527,	// (0x00007527) eswt_control_pane_g3_copy1_ParamLimits

0x7527,	// (0x00007527) eswt_control_pane_g3_copy1

0x7534,	// (0x00007534) eswt_control_pane_g4_copy1_ParamLimits

0x7534,	// (0x00007534) eswt_control_pane_g4_copy1

0x66cc,	// (0x000066cc) bg_eswt_ctrl_canvas_pane_g1

0x6691,	// (0x00006691) common_borders_pane_cp2_ParamLimits

0x6691,	// (0x00006691) common_borders_pane_cp2

0x6691,	// (0x00006691) common_borders_pane_cp3_ParamLimits

0x6691,	// (0x00006691) common_borders_pane_cp3

0x7589,	// (0x00007589) separator_horizontal_pane

0x7591,	// (0x00007591) separator_vertical_pane

0x750d,	// (0x0000750d) eswt_control_pane_g1_copy2_ParamLimits

0x750d,	// (0x0000750d) eswt_control_pane_g1_copy2

0x751a,	// (0x0000751a) eswt_control_pane_g2_copy2_ParamLimits

0x751a,	// (0x0000751a) eswt_control_pane_g2_copy2

0x7527,	// (0x00007527) eswt_control_pane_g3_copy2_ParamLimits

0x7527,	// (0x00007527) eswt_control_pane_g3_copy2

0x7534,	// (0x00007534) eswt_control_pane_g4_copy2_ParamLimits

0x7534,	// (0x00007534) eswt_control_pane_g4_copy2

0x0024,	// (0x00000024) common_borders_pane_cp4

0x759a,	// (0x0000759a) separator_horizontal_pane_g1

0x75a3,	// (0x000075a3) separator_horizontal_pane_g2

0x75ac,	// (0x000075ac) separator_horizontal_pane_g3

0x0002,

0xb270,	// (0x0000b270) separator_horizontal_pane_g

0x750d,	// (0x0000750d) eswt_control_pane_g1_copy3_ParamLimits

0x750d,	// (0x0000750d) eswt_control_pane_g1_copy3

0x751a,	// (0x0000751a) eswt_control_pane_g2_copy3_ParamLimits

0x751a,	// (0x0000751a) eswt_control_pane_g2_copy3

0x7527,	// (0x00007527) eswt_control_pane_g3_copy3_ParamLimits

0x7527,	// (0x00007527) eswt_control_pane_g3_copy3

0x7534,	// (0x00007534) eswt_control_pane_g4_copy3_ParamLimits

0x7534,	// (0x00007534) eswt_control_pane_g4_copy3

0x0024,	// (0x00000024) common_borders_pane_cp5

0x75b5,	// (0x000075b5) separator_vertical_pane_g1

0x75be,	// (0x000075be) separator_vertical_pane_g2

0x75c7,	// (0x000075c7) separator_vertical_pane_g3

0x0002,

0xb277,	// (0x0000b277) separator_vertical_pane_g

0x750d,	// (0x0000750d) eswt_control_pane_g1_copy4_ParamLimits

0x750d,	// (0x0000750d) eswt_control_pane_g1_copy4

0x751a,	// (0x0000751a) eswt_control_pane_g2_copy4_ParamLimits

0x751a,	// (0x0000751a) eswt_control_pane_g2_copy4

0x7527,	// (0x00007527) eswt_control_pane_g3_copy4_ParamLimits

0x7527,	// (0x00007527) eswt_control_pane_g3_copy4

0x7534,	// (0x00007534) eswt_control_pane_g4_copy4_ParamLimits

0x7534,	// (0x00007534) eswt_control_pane_g4_copy4

0xda65,	// (0x0000da65) eswt_ctrl_combo_button_pane

0xda6d,	// (0x0000da6d) eswt_ctrl_input_pane

0xda75,	// (0x0000da75) popup_choice_list_window_cp70

0xda7d,	// (0x0000da7d) eswt_ctrl_input_pane_t1

0x0024,	// (0x00000024) input_focus_pane_cp70

0x6691,	// (0x00006691) bg_button_pane_cp70_ParamLimits

0x6691,	// (0x00006691) bg_button_pane_cp70

0xda8b,	// (0x0000da8b) eswt_ctrl_combo_button_pane_g1

0x75fe,	// (0x000075fe) wait_bar_pane_cp70

0x38ac,	// (0x000038ac) bg_popup_window_pane_cp70_ParamLimits

0x38ac,	// (0x000038ac) bg_popup_window_pane_cp70

0x7606,	// (0x00007606) popup_eswt_tasktip_window_t1

0x761c,	// (0x0000761c) wait_bar_pane_cp71_ParamLimits

0x761c,	// (0x0000761c) wait_bar_pane_cp71

0x7628,	// (0x00007628) grid_eswt_app_pane

0x1b6f,	// (0x00001b6f) scroll_pane_cp70

0xda93,	// (0x0000da93) cell_eswt_app_pane_ParamLimits

0xda93,	// (0x0000da93) cell_eswt_app_pane

0xdabd,	// (0x0000dabd) cell_eswt_app_pane_g1_ParamLimits

0xdabd,	// (0x0000dabd) cell_eswt_app_pane_g1

0xdaec,	// (0x0000daec) cell_eswt_app_pane_g2_ParamLimits

0xdaec,	// (0x0000daec) cell_eswt_app_pane_g2

0x0001,

0xf46a,	// (0x0000f46a) cell_eswt_app_pane_g_ParamLimits

0xf46a,	// (0x0000f46a) cell_eswt_app_pane_g

0xdb15,	// (0x0000db15) cell_eswt_app_pane_t1_ParamLimits

0xdb15,	// (0x0000db15) cell_eswt_app_pane_t1

0x76eb,	// (0x000076eb) grid_highlight_pane_cp70_ParamLimits

0x76eb,	// (0x000076eb) grid_highlight_pane_cp70

0x24ec,	// (0x000024ec) set_content_pane_g1

0xc3b1,	// (0x0000c3b1) status_small_volume_pane

0x76f7,	// (0x000076f7) status_small_volume_pane_g1

0x76ff,	// (0x000076ff) volume_small2_pane

0x7708,	// (0x00007708) volume_small2_pane_g1

0x7711,	// (0x00007711) volume_small2_pane_g2

0x771a,	// (0x0000771a) volume_small2_pane_g3

0x7723,	// (0x00007723) volume_small2_pane_g4

0x772c,	// (0x0000772c) volume_small2_pane_g5

0x7735,	// (0x00007735) volume_small2_pane_g6

0x773e,	// (0x0000773e) volume_small2_pane_g7

0x7747,	// (0x00007747) volume_small2_pane_g8

0x7750,	// (0x00007750) volume_small2_pane_g9

0x7759,	// (0x00007759) volume_small2_pane_g10

0x0009,

0xb283,	// (0x0000b283) volume_small2_pane_g

0x6ca6,	// (0x00006ca6) fep_vkb_top_text_pane_g1_ParamLimits

0xd9bc,	// (0x0000d9bc) fep_vkb_top_text_pane_t1_ParamLimits

0x6fcf,	// (0x00006fcf) popup_preview_fixed_window_g3_ParamLimits

0x6fcf,	// (0x00006fcf) popup_preview_fixed_window_g3

0xcbda,	// (0x0000cbda) popup_toolbar_trans_pane

0xd313,	// (0x0000d313) aid_height_set_list_ParamLimits

0x4f26,	// (0x00004f26) aid_size_parent_ParamLimits

0x2ba9,	// (0x00002ba9) list_highlight_pane_cp2_ParamLimits

0x24ec,	// (0x000024ec) set_content_pane_g1_ParamLimits

0xd4cc,	// (0x0000d4cc) list_single_image_pane_ParamLimits

0xd4cc,	// (0x0000d4cc) list_single_image_pane

0xdb47,	// (0x0000db47) aid_size_cell_image_ParamLimits

0xdb47,	// (0x0000db47) aid_size_cell_image

0xdb54,	// (0x0000db54) grid_single_image_pane_ParamLimits

0xdb54,	// (0x0000db54) grid_single_image_pane

0x37c3,	// (0x000037c3) list_single_image_pane_g1_ParamLimits

0x37c3,	// (0x000037c3) list_single_image_pane_g1

0x777b,	// (0x0000777b) list_single_image_pane_g2_ParamLimits

0x777b,	// (0x0000777b) list_single_image_pane_g2

0x0001,

0xb298,	// (0x0000b298) list_single_image_pane_g_ParamLimits

0xb298,	// (0x0000b298) list_single_image_pane_g

0x778f,	// (0x0000778f) list_single_image_pane_t1_ParamLimits

0x778f,	// (0x0000778f) list_single_image_pane_t1

0xdb62,	// (0x0000db62) cell_image_list_pane_ParamLimits

0xdb62,	// (0x0000db62) cell_image_list_pane

0xdb78,	// (0x0000db78) cell_image_list_pane_g1

0xdb81,	// (0x0000db81) cell_image_list_pane_g2

0x0001,

0xf46f,	// (0x0000f46f) cell_image_list_pane_g

0x77cb,	// (0x000077cb) aid_size_cell_tb_trans_pane

0x139c,	// (0x0000139c) bg_tb_trans_pane

0x77dd,	// (0x000077dd) grid_tb_trans_pane

0x36fe,	// (0x000036fe) bg_tb_trans_pane_g1

0x3706,	// (0x00003706) bg_tb_trans_pane_g2

0x370e,	// (0x0000370e) bg_tb_trans_pane_g3

0x3716,	// (0x00003716) bg_tb_trans_pane_g4

0x371e,	// (0x0000371e) bg_tb_trans_pane_g5

0x3736,	// (0x00003736) bg_tb_trans_pane_g6

0x373e,	// (0x0000373e) bg_tb_trans_pane_g7

0x3726,	// (0x00003726) bg_tb_trans_pane_g8

0x372e,	// (0x0000372e) bg_tb_trans_pane_g9

0x0008,

0xb2a2,	// (0x0000b2a2) bg_tb_trans_pane_g

0x77f1,	// (0x000077f1) cell_toolbar_trans_pane_ParamLimits

0x77f1,	// (0x000077f1) cell_toolbar_trans_pane

0x66cc,	// (0x000066cc) cell_toolbar_trans_pane_g1

0xd726,	// (0x0000d726) list_form2_midp_pane_t1

0xd734,	// (0x0000d734) list_form2_midp_pane_t2

0x0001,

0xf43a,	// (0x0000f43a) list_form2_midp_pane_t

0x626e,	// (0x0000626e) scroll_pane_cp51_ParamLimits

0x6479,	// (0x00006479) form2_midp_wait_pane_g1

0x6482,	// (0x00006482) form2_midp_wait_pane_g2

0x648b,	// (0x0000648b) form2_midp_wait_pane_g3

0x0002,

0xb160,	// (0x0000b160) form2_midp_wait_pane_g

0x0507,	// (0x00000507) list_highlight_pane_cp21_ParamLimits

0x64d7,	// (0x000064d7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x64e6,	// (0x000064e6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x512c,	// (0x0000512c) list_single_2graphic_im_pane_ParamLimits

0x512c,	// (0x0000512c) list_single_2graphic_im_pane

0xdb8a,	// (0x0000db8a) list_single_2graphic_im_pane_g1_ParamLimits

0xdb8a,	// (0x0000db8a) list_single_2graphic_im_pane_g1

0xdb9b,	// (0x0000db9b) list_single_2graphic_im_pane_g2_ParamLimits

0xdb9b,	// (0x0000db9b) list_single_2graphic_im_pane_g2

0xdba7,	// (0x0000dba7) list_single_2graphic_im_pane_g3_ParamLimits

0xdba7,	// (0x0000dba7) list_single_2graphic_im_pane_g3

0x0003,

0xf474,	// (0x0000f474) list_single_2graphic_im_pane_g_ParamLimits

0xf474,	// (0x0000f474) list_single_2graphic_im_pane_g

0xdbbb,	// (0x0000dbbb) list_single_2graphic_im_pane_t1_ParamLimits

0xdbbb,	// (0x0000dbbb) list_single_2graphic_im_pane_t1

0x6fdb,	// (0x00006fdb) list_single_graphic_2heading_pane_fp_ParamLimits

0x6fdb,	// (0x00006fdb) list_single_graphic_2heading_pane_fp

0x701f,	// (0x0000701f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x701f,	// (0x0000701f) list_single_graphic_2heading_pane_fp_g1

0x6ff0,	// (0x00006ff0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6ff0,	// (0x00006ff0) list_single_graphic_2heading_pane_fp_g2

0x0fe5,	// (0x00000fe5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0fe5,	// (0x00000fe5) list_single_graphic_2heading_pane_fp_g3

0x13c2,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x13c2,	// (0x000013c2) list_single_graphic_2heading_pane_fp_g4

0x6ffc,	// (0x00006ffc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6ffc,	// (0x00006ffc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xb1e3,	// (0x0000b1e3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xb1e3,	// (0x0000b1e3) list_single_graphic_2heading_pane_fp_g

0x7885,	// (0x00007885) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7885,	// (0x00007885) list_single_graphic_2heading_pane_fp_t1

0x7057,	// (0x00007057) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7057,	// (0x00007057) list_single_graphic_2heading_pane_fp_t2

0x789b,	// (0x0000789b) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x789b,	// (0x0000789b) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xb2be,	// (0x0000b2be) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xb2be,	// (0x0000b2be) list_single_graphic_2heading_pane_fp_t

0x68f6,	// (0x000068f6) fep_hwr_write_pane_g5_ParamLimits

0x68f6,	// (0x000068f6) fep_hwr_write_pane_g5

0x6902,	// (0x00006902) fep_hwr_write_pane_g6_ParamLimits

0x6902,	// (0x00006902) fep_hwr_write_pane_g6

0x74dc,	// (0x000074dc) eswt_shell_pane_ParamLimits

0x38ac,	// (0x000038ac) bg_popup_window_pane_cp18_ParamLimits

0x4dce,	// (0x00004dce) heading_pane_cp70

0x7606,	// (0x00007606) popup_eswt_tasktip_window_t1_ParamLimits

0xcca2,	// (0x0000cca2) aid_touch_tab_arrow_left

0xccb8,	// (0x0000ccb8) aid_touch_tab_arrow_right

0xb7bd,	// (0x0000b7bd) title_pane_g3_ParamLimits

0xb7bd,	// (0x0000b7bd) title_pane_g3

0x127b,	// (0x0000127b) set_value_pane_g1

0xcbda,	// (0x0000cbda) popup_toolbar_trans_pane_ParamLimits

0x77cb,	// (0x000077cb) aid_size_cell_tb_trans_pane_ParamLimits

0x139c,	// (0x0000139c) bg_tb_trans_pane_ParamLimits

0x77dd,	// (0x000077dd) grid_tb_trans_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane_ParamLimits

0x083b,	// (0x0000083b) cont_note_pane

0x0b92,	// (0x00000b92) cont_snote2_single_text_pane_ParamLimits

0x0b92,	// (0x00000b92) cont_snote2_single_text_pane

0x0b92,	// (0x00000b92) cont_snote2_single_graphic_pane_ParamLimits

0x0b92,	// (0x00000b92) cont_snote2_single_graphic_pane

0x3f78,	// (0x00003f78) cont_note_wait_pane_ParamLimits

0x3f78,	// (0x00003f78) cont_note_wait_pane

0x3f78,	// (0x00003f78) cont_note_image_pane_ParamLimits

0x3f78,	// (0x00003f78) cont_note_image_pane

0x78b1,	// (0x000078b1) popup_note2_window_g1_ParamLimits

0x78b1,	// (0x000078b1) popup_note2_window_g1

0x78e2,	// (0x000078e2) popup_note2_window_t1_ParamLimits

0x78e2,	// (0x000078e2) popup_note2_window_t1

0x7927,	// (0x00007927) popup_note2_window_t2_ParamLimits

0x7927,	// (0x00007927) popup_note2_window_t2

0x796c,	// (0x0000796c) popup_note2_window_t3_ParamLimits

0x796c,	// (0x0000796c) popup_note2_window_t3

0x79b1,	// (0x000079b1) popup_note2_window_t4_ParamLimits

0x79b1,	// (0x000079b1) popup_note2_window_t4

0x08bf,	// (0x000008bf) popup_note2_window_t5_ParamLimits

0x08bf,	// (0x000008bf) popup_note2_window_t5

0x0004,

0xb2ca,	// (0x0000b2ca) popup_note2_window_t_ParamLimits

0xb2ca,	// (0x0000b2ca) popup_note2_window_t

0x79e0,	// (0x000079e0) popup_note2_image_window_g1_ParamLimits

0x79e0,	// (0x000079e0) popup_note2_image_window_g1

0x79ec,	// (0x000079ec) popup_note2_image_window_g2_ParamLimits

0x79ec,	// (0x000079ec) popup_note2_image_window_g2

0x0001,

0xb2d5,	// (0x0000b2d5) popup_note2_image_window_g_ParamLimits

0xb2d5,	// (0x0000b2d5) popup_note2_image_window_g

0x79fe,	// (0x000079fe) popup_note2_image_window_t1_ParamLimits

0x79fe,	// (0x000079fe) popup_note2_image_window_t1

0x7a16,	// (0x00007a16) popup_note2_image_window_t2_ParamLimits

0x7a16,	// (0x00007a16) popup_note2_image_window_t2

0x7a2e,	// (0x00007a2e) popup_note2_image_window_t3_ParamLimits

0x7a2e,	// (0x00007a2e) popup_note2_image_window_t3

0x0002,

0xb2da,	// (0x0000b2da) popup_note2_image_window_t_ParamLimits

0xb2da,	// (0x0000b2da) popup_note2_image_window_t

0x3f86,	// (0x00003f86) popup_note2_wait_window_g1_ParamLimits

0x3f86,	// (0x00003f86) popup_note2_wait_window_g1

0x7a4a,	// (0x00007a4a) popup_note2_wait_window_g2_ParamLimits

0x7a4a,	// (0x00007a4a) popup_note2_wait_window_g2

0x3f9e,	// (0x00003f9e) popup_note2_wait_window_g3_ParamLimits

0x3f9e,	// (0x00003f9e) popup_note2_wait_window_g3

0x0002,

0xb2e1,	// (0x0000b2e1) popup_note2_wait_window_g_ParamLimits

0xb2e1,	// (0x0000b2e1) popup_note2_wait_window_g

0x7a56,	// (0x00007a56) popup_note2_wait_window_t1_ParamLimits

0x7a56,	// (0x00007a56) popup_note2_wait_window_t1

0x7a74,	// (0x00007a74) popup_note2_wait_window_t2_ParamLimits

0x7a74,	// (0x00007a74) popup_note2_wait_window_t2

0x7a92,	// (0x00007a92) popup_note2_wait_window_t3_ParamLimits

0x7a92,	// (0x00007a92) popup_note2_wait_window_t3

0x7aa4,	// (0x00007aa4) popup_note2_wait_window_t4_ParamLimits

0x7aa4,	// (0x00007aa4) popup_note2_wait_window_t4

0x0003,

0xb2e8,	// (0x0000b2e8) popup_note2_wait_window_t_ParamLimits

0xb2e8,	// (0x0000b2e8) popup_note2_wait_window_t

0x7ab6,	// (0x00007ab6) wait_bar2_pane_ParamLimits

0x7ab6,	// (0x00007ab6) wait_bar2_pane

0x7ace,	// (0x00007ace) popup_snote2_single_text_window_g1_ParamLimits

0x7ace,	// (0x00007ace) popup_snote2_single_text_window_g1

0x7af6,	// (0x00007af6) popup_snote2_single_text_window_t1_ParamLimits

0x7af6,	// (0x00007af6) popup_snote2_single_text_window_t1

0x7b42,	// (0x00007b42) popup_snote2_single_text_window_t2_ParamLimits

0x7b42,	// (0x00007b42) popup_snote2_single_text_window_t2

0x7b8e,	// (0x00007b8e) popup_snote2_single_text_window_t3_ParamLimits

0x7b8e,	// (0x00007b8e) popup_snote2_single_text_window_t3

0x7bcf,	// (0x00007bcf) popup_snote2_single_text_window_t4_ParamLimits

0x7bcf,	// (0x00007bcf) popup_snote2_single_text_window_t4

0x7c05,	// (0x00007c05) popup_snote2_single_text_window_t5_ParamLimits

0x7c05,	// (0x00007c05) popup_snote2_single_text_window_t5

0x0004,

0xb2f1,	// (0x0000b2f1) popup_snote2_single_text_window_t_ParamLimits

0xb2f1,	// (0x0000b2f1) popup_snote2_single_text_window_t

0x7c30,	// (0x00007c30) popup_snote2_single_graphic_window_g1_ParamLimits

0x7c30,	// (0x00007c30) popup_snote2_single_graphic_window_g1

0x7c58,	// (0x00007c58) popup_snote2_single_graphic_window_g2_ParamLimits

0x7c58,	// (0x00007c58) popup_snote2_single_graphic_window_g2

0x0001,

0xb2fc,	// (0x0000b2fc) popup_snote2_single_graphic_window_g_ParamLimits

0xb2fc,	// (0x0000b2fc) popup_snote2_single_graphic_window_g

0x7c80,	// (0x00007c80) popup_snote2_single_graphic_window_t1_ParamLimits

0x7c80,	// (0x00007c80) popup_snote2_single_graphic_window_t1

0x7ccc,	// (0x00007ccc) popup_snote2_single_graphic_window_t2_ParamLimits

0x7ccc,	// (0x00007ccc) popup_snote2_single_graphic_window_t2

0x7b8e,	// (0x00007b8e) popup_snote2_single_graphic_window_t3_ParamLimits

0x7b8e,	// (0x00007b8e) popup_snote2_single_graphic_window_t3

0x7bcf,	// (0x00007bcf) popup_snote2_single_graphic_window_t4_ParamLimits

0x7bcf,	// (0x00007bcf) popup_snote2_single_graphic_window_t4

0x7c05,	// (0x00007c05) popup_snote2_single_graphic_window_t5_ParamLimits

0x7c05,	// (0x00007c05) popup_snote2_single_graphic_window_t5

0x0004,

0xb301,	// (0x0000b301) popup_snote2_single_graphic_window_t_ParamLimits

0xb301,	// (0x0000b301) popup_snote2_single_graphic_window_t

0x60de,	// (0x000060de) clock_nsta_pane_cp2_t1

0x60de,	// (0x000060de) clock_nsta_pane_cp2_t2

0x0001,

0xb121,	// (0x0000b121) clock_nsta_pane_cp2_t

0x13b6,	// (0x000013b6) form_field_data_wide_pane_g1_ParamLimits

0x0fe5,	// (0x00000fe5) form_field_data_wide_pane_g2_ParamLimits

0x0fe5,	// (0x00000fe5) form_field_data_wide_pane_g2

0x13c2,	// (0x000013c2) form_field_data_wide_pane_g3_ParamLimits

0x13c2,	// (0x000013c2) form_field_data_wide_pane_g3

0x0002,

0xace4,	// (0x0000ace4) form_field_data_wide_pane_g_ParamLimits

0xace4,	// (0x0000ace4) form_field_data_wide_pane_g

0xd669,	// (0x0000d669) grid_touch_3_pane_ParamLimits

0xd669,	// (0x0000d669) grid_touch_3_pane

0xdbec,	// (0x0000dbec) cell_touch_3_pane_ParamLimits

0xdbec,	// (0x0000dbec) cell_touch_3_pane

0x66cc,	// (0x000066cc) cell_touch_3_pane_g1

0x66cc,	// (0x000066cc) cell_touch_3_pane_g2

0x0001,

0xb1a6,	// (0x0000b1a6) cell_touch_3_pane_g

0x08f1,	// (0x000008f1) cont_query_data_pane

0x08f9,	// (0x000008f9) cont_query_data_pane_cp1

0x7d46,	// (0x00007d46) button_value_adjust_pane_cp7

0x7d4e,	// (0x00007d4e) query_popup_pane_cp3

0x1ec7,	// (0x00001ec7) bg_popup_sub_pane_cp22_ParamLimits

0x1edd,	// (0x00001edd) navi_navi_volume_pane_cp2

0x1ef8,	// (0x00001ef8) popup_side_volume_key_window_g2

0x1f07,	// (0x00001f07) popup_side_volume_key_window_g3

0x0002,

0xad7a,	// (0x0000ad7a) popup_side_volume_key_window_g

0x1f24,	// (0x00001f24) popup_side_volume_key_window_t2

0x0001,

0xad81,	// (0x0000ad81) popup_side_volume_key_window_t

0x23ab,	// (0x000023ab) popup_side_volume_key_window_ParamLimits

0xbc0b,	// (0x0000bc0b) list_double_graphic_pane_g4_ParamLimits

0xbc0b,	// (0x0000bc0b) list_double_graphic_pane_g4

0xd4a8,	// (0x0000d4a8) list_single_2heading_msg_pane_ParamLimits

0xd4a8,	// (0x0000d4a8) list_single_2heading_msg_pane

0xdc34,	// (0x0000dc34) list_single_2heading_msg_pane_g1_ParamLimits

0xdc34,	// (0x0000dc34) list_single_2heading_msg_pane_g1

0xdc40,	// (0x0000dc40) list_single_2heading_msg_pane_g2_ParamLimits

0xdc40,	// (0x0000dc40) list_single_2heading_msg_pane_g2

0xdc53,	// (0x0000dc53) list_single_2heading_msg_pane_g3_ParamLimits

0xdc53,	// (0x0000dc53) list_single_2heading_msg_pane_g3

0xdc5f,	// (0x0000dc5f) list_single_2heading_msg_pane_g4_ParamLimits

0xdc5f,	// (0x0000dc5f) list_single_2heading_msg_pane_g4

0x0003,

0xf47d,	// (0x0000f47d) list_single_2heading_msg_pane_g_ParamLimits

0xf47d,	// (0x0000f47d) list_single_2heading_msg_pane_g

0xdc77,	// (0x0000dc77) list_single_2heading_msg_pane_t1_ParamLimits

0xdc77,	// (0x0000dc77) list_single_2heading_msg_pane_t1

0xdc9f,	// (0x0000dc9f) list_single_2heading_msg_pane_t2_ParamLimits

0xdc9f,	// (0x0000dc9f) list_single_2heading_msg_pane_t2

0xdd0a,	// (0x0000dd0a) list_single_2heading_msg_pane_t3_ParamLimits

0xdd0a,	// (0x0000dd0a) list_single_2heading_msg_pane_t3

0x7e31,	// (0x00007e31) list_single_2heading_msg_pane_t4_ParamLimits

0x7e31,	// (0x00007e31) list_single_2heading_msg_pane_t4

0x0003,

0xf486,	// (0x0000f486) list_single_2heading_msg_pane_t_ParamLimits

0xf486,	// (0x0000f486) list_single_2heading_msg_pane_t

0x045b,	// (0x0000045b) title_pane_g4_ParamLimits

0x045b,	// (0x0000045b) title_pane_g4

0x18d7,	// (0x000018d7) title_pane_stacon_g3_ParamLimits

0x18d7,	// (0x000018d7) title_pane_stacon_g3

0x7848,	// (0x00007848) list_single_2graphic_im_pane_g4_ParamLimits

0x7848,	// (0x00007848) list_single_2graphic_im_pane_g4

0x4b3b,	// (0x00004b3b) popup_side_volume_key_window_cp

0x55c7,	// (0x000055c7) main_idle_act2_pane_t1

0x3746,	// (0x00003746) toolbar_button_pane_g10

0xbac8,	// (0x0000bac8) popup_toolbar_window_cp1

0x60cf,	// (0x000060cf) clock_nsta_pane_cp_t1

0x60cf,	// (0x000060cf) clock_nsta_pane_cp_t2

0x0001,

0xb11c,	// (0x0000b11c) clock_nsta_pane_cp_t

0x1edd,	// (0x00001edd) navi_navi_volume_pane_cp2_ParamLimits

0x1eec,	// (0x00001eec) popup_side_volume_key_window_g1_ParamLimits

0x1ef8,	// (0x00001ef8) popup_side_volume_key_window_g2_ParamLimits

0x1f07,	// (0x00001f07) popup_side_volume_key_window_g3_ParamLimits

0xad7a,	// (0x0000ad7a) popup_side_volume_key_window_g_ParamLimits

0x6736,	// (0x00006736) fep_hwr_aid_pane

0x67dd,	// (0x000067dd) bg_fep_hwr_top_pane_g4_ParamLimits

0x67fd,	// (0x000067fd) fep_hwr_top_pane_g1_ParamLimits

0x680f,	// (0x0000680f) fep_hwr_top_pane_g2_ParamLimits

0x6821,	// (0x00006821) fep_hwr_top_pane_g3_ParamLimits

0xb171,	// (0x0000b171) fep_hwr_top_pane_g_ParamLimits

0x6836,	// (0x00006836) fep_hwr_top_text_pane_ParamLimits

0x48fe,	// (0x000048fe) aid_touch_tab_arrow_arrow_2

0x4907,	// (0x00004907) aid_touch_tab_arrow_left_2

0x674a,	// (0x0000674a) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6781,	// (0x00006781) fep_hwr_prediction_pane

0x6aae,	// (0x00006aae) fep_vkb_prediction_pane

0xd99c,	// (0x0000d99c) fep_vkb_side_pane_g3_ParamLimits

0xd99c,	// (0x0000d99c) fep_vkb_side_pane_g3

0x6b5e,	// (0x00006b5e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7214,	// (0x00007214) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7221,	// (0x00007221) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xb21b,	// (0x0000b21b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e56,	// (0x00007e56) fep_hwr_prediction_pane_g1

0x7e60,	// (0x00007e60) fep_hwr_prediction_pane_g2

0x7e68,	// (0x00007e68) fep_hwr_prediction_pane_g3

0x7e70,	// (0x00007e70) fep_hwr_prediction_pane_g4

0x0003,

0xb31e,	// (0x0000b31e) fep_hwr_prediction_pane_g

0x7e56,	// (0x00007e56) fep_vkb_prediction_pane_g1

0x7e78,	// (0x00007e78) fep_vkb_prediction_pane_g2

0x7e80,	// (0x00007e80) fep_vkb_prediction_pane_g3

0x7e88,	// (0x00007e88) fep_vkb_prediction_pane_g4

0x0003,

0xb327,	// (0x0000b327) fep_vkb_prediction_pane_g

0x4e8f,	// (0x00004e8f) slider_set_pane_g3

0x4ea3,	// (0x00004ea3) slider_set_pane_g4

0x4ebb,	// (0x00004ebb) slider_set_pane_g5

0x4e8f,	// (0x00004e8f) slider_set_pane_g6

0x4ed1,	// (0x00004ed1) slider_set_pane_g7

0x508b,	// (0x0000508b) slider_form_pane_g3

0x5094,	// (0x00005094) slider_form_pane_g4

0x509c,	// (0x0000509c) slider_form_pane_g5

0x508b,	// (0x0000508b) slider_form_pane_g6

0xd45e,	// (0x0000d45e) slider_form_pane_g7

0x58d4,	// (0x000058d4) slider_set_pane_vc_g3

0x58dd,	// (0x000058dd) slider_set_pane_vc_g4

0x58e6,	// (0x000058e6) slider_set_pane_vc_g5

0x58d4,	// (0x000058d4) slider_set_pane_vc_g6

0x58ef,	// (0x000058ef) slider_set_pane_vc_g7

0x5db4,	// (0x00005db4) slider_form_pane_vc_g1

0x5dbd,	// (0x00005dbd) slider_form_pane_vc_g2

0x5dc6,	// (0x00005dc6) slider_form_pane_vc_g3

0x5db4,	// (0x00005db4) slider_form_pane_vc_g4

0x5dcf,	// (0x00005dcf) slider_form_pane_vc_g5

0x0004,

0xb0ee,	// (0x0000b0ee) slider_form_pane_vc_g

0x0024,	// (0x00000024) main_idle_act3_pane

0x7e90,	// (0x00007e90) ai3_links_pane

0xdd78,	// (0x0000dd78) popup_ai3_data_window_ParamLimits

0xdd78,	// (0x0000dd78) popup_ai3_data_window

0x0024,	// (0x00000024) grid_ai3_links_pane

0xdd92,	// (0x0000dd92) cell_ai3_links_pane_ParamLimits

0xdd92,	// (0x0000dd92) cell_ai3_links_pane

0x7ecb,	// (0x00007ecb) bg_popup_sub_pane_cp11

0x7ed8,	// (0x00007ed8) cell_ai3_links_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp12

0x7efd,	// (0x00007efd) heading_ai3_data_pane

0x7f05,	// (0x00007f05) list_ai3_gene_pane

0x7f11,	// (0x00007f11) popup_ai3_data_window_g1

0x7f19,	// (0x00007f19) heading_ai3_data_pane_g1

0x7f21,	// (0x00007f21) heading_ai3_data_pane_t1

0x7f2f,	// (0x00007f2f) list_double_ai3_gene_pane_ParamLimits

0x7f2f,	// (0x00007f2f) list_double_ai3_gene_pane

0x7f3c,	// (0x00007f3c) list_single_ai3_gene_pane_ParamLimits

0x7f3c,	// (0x00007f3c) list_single_ai3_gene_pane

0x6691,	// (0x00006691) list_highlight_pane_cp7_ParamLimits

0x6691,	// (0x00006691) list_highlight_pane_cp7

0x7f49,	// (0x00007f49) list_single_a13_gene_pane_t1_ParamLimits

0x7f49,	// (0x00007f49) list_single_a13_gene_pane_t1

0x7f60,	// (0x00007f60) list_single_ai3_gene_pane_g1

0x7f69,	// (0x00007f69) list_single_ai3_gene_pane_g2

0x0001,

0xb330,	// (0x0000b330) list_single_ai3_gene_pane_g

0x7f71,	// (0x00007f71) list_double_ai3_gene_pane_g1_ParamLimits

0x7f71,	// (0x00007f71) list_double_ai3_gene_pane_g1

0x7f7d,	// (0x00007f7d) list_double_ai3_gene_pane_t1_ParamLimits

0x7f7d,	// (0x00007f7d) list_double_ai3_gene_pane_t1

0x7f99,	// (0x00007f99) list_double_ai3_gene_pane_t2_ParamLimits

0x7f99,	// (0x00007f99) list_double_ai3_gene_pane_t2

0x7faf,	// (0x00007faf) list_double_ai3_gene_pane_t3_ParamLimits

0x7faf,	// (0x00007faf) list_double_ai3_gene_pane_t3

0x0002,

0xb335,	// (0x0000b335) list_double_ai3_gene_pane_t_ParamLimits

0xb335,	// (0x0000b335) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7d5f,	// (0x00007d5f) aid_size_min_col_2

0xdc1e,	// (0x0000dc1e) aid_size_min_msg_ParamLimits

0xdc1e,	// (0x0000dc1e) aid_size_min_msg

0xd9b0,	// (0x0000d9b0) fep_vkb_top_text_pane_g2_ParamLimits

0xd9b0,	// (0x0000d9b0) fep_vkb_top_text_pane_g2

0x0001,

0xf45a,	// (0x0000f45a) fep_vkb_top_text_pane_g_ParamLimits

0xf45a,	// (0x0000f45a) fep_vkb_top_text_pane_g

0x0024,	// (0x00000024) main_hc_apps_shell_pane

0x7fcc,	// (0x00007fcc) grid_hc_apps_pane_ParamLimits

0x7fcc,	// (0x00007fcc) grid_hc_apps_pane

0x7fdb,	// (0x00007fdb) list_hc_apps_pane

0x7fe3,	// (0x00007fe3) scroll_pane_cp37_ParamLimits

0x7fe3,	// (0x00007fe3) scroll_pane_cp37

0xddac,	// (0x0000ddac) cell_hc_apps_pane_ParamLimits

0xddac,	// (0x0000ddac) cell_hc_apps_pane

0xde6a,	// (0x0000de6a) cell_hc_apps_pane_g1_ParamLimits

0xde6a,	// (0x0000de6a) cell_hc_apps_pane_g1

0x80ce,	// (0x000080ce) cell_hc_apps_pane_g2_ParamLimits

0x80ce,	// (0x000080ce) cell_hc_apps_pane_g2

0x80ea,	// (0x000080ea) cell_hc_apps_pane_g3_ParamLimits

0x80ea,	// (0x000080ea) cell_hc_apps_pane_g3

0x0002,

0xf48f,	// (0x0000f48f) cell_hc_apps_pane_g_ParamLimits

0xf48f,	// (0x0000f48f) cell_hc_apps_pane_g

0xde97,	// (0x0000de97) cell_hc_apps_pane_t1_ParamLimits

0xde97,	// (0x0000de97) cell_hc_apps_pane_t1

0x083b,	// (0x0000083b) grid_highlight_pane_cp10_ParamLimits

0x083b,	// (0x0000083b) grid_highlight_pane_cp10

0xded5,	// (0x0000ded5) list_single_hc_apps_pane_ParamLimits

0xded5,	// (0x0000ded5) list_single_hc_apps_pane

0xdf02,	// (0x0000df02) list_single_hc_apps_pane_g1

0xdf1b,	// (0x0000df1b) list_single_hc_apps_pane_g2

0x0001,

0xf496,	// (0x0000f496) list_single_hc_apps_pane_g

0xdf34,	// (0x0000df34) list_single_hc_apps_pane_g2_copy1

0x81f6,	// (0x000081f6) list_single_hc_apps_pane_t1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_ParamLimits

0x0551,	// (0x00000551) setting_slider_pane_t1_ParamLimits

0x056a,	// (0x0000056a) setting_slider_pane_t2_ParamLimits

0x0584,	// (0x00000584) setting_slider_pane_t3_ParamLimits

0xabcc,	// (0x0000abcc) setting_slider_pane_t_ParamLimits

0x059c,	// (0x0000059c) slider_set_pane_ParamLimits

0x29f7,	// (0x000029f7) control_pane_g5_ParamLimits

0x29f7,	// (0x000029f7) control_pane_g5

0x4e76,	// (0x00004e76) slider_set_pane_g1_ParamLimits

0x4e83,	// (0x00004e83) slider_set_pane_g2_ParamLimits

0x4e8f,	// (0x00004e8f) slider_set_pane_g3_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g4_ParamLimits

0x4ebb,	// (0x00004ebb) slider_set_pane_g5_ParamLimits

0x4e8f,	// (0x00004e8f) slider_set_pane_g6_ParamLimits

0x4ed1,	// (0x00004ed1) slider_set_pane_g7_ParamLimits

0xafc6,	// (0x0000afc6) slider_set_pane_g_ParamLimits

0x2497,	// (0x00002497) navi_icon_text_pane_ParamLimits

0xcc6b,	// (0x0000cc6b) aid_fill_nsta_2_ParamLimits

0xcca2,	// (0x0000cca2) aid_touch_tab_arrow_left_ParamLimits

0xccb8,	// (0x0000ccb8) aid_touch_tab_arrow_right_ParamLimits

0xcd53,	// (0x0000cd53) clock_nsta_pane_ParamLimits

0x48e0,	// (0x000048e0) navi_icon_pane_g1_ParamLimits

0x48ec,	// (0x000048ec) navi_text_pane_t1_ParamLimits

0x61db,	// (0x000061db) navi_icon_text_pane_g1_ParamLimits

0x61e7,	// (0x000061e7) navi_icon_text_pane_t1_ParamLimits

0xdf02,	// (0x0000df02) list_single_hc_apps_pane_g1_ParamLimits

0xdf1b,	// (0x0000df1b) list_single_hc_apps_pane_g2_ParamLimits

0xf496,	// (0x0000f496) list_single_hc_apps_pane_g_ParamLimits

0xdf34,	// (0x0000df34) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x81f6,	// (0x000081f6) list_single_hc_apps_pane_t1_ParamLimits

0xb6c2,	// (0x0000b6c2) popup_toolbar2_fixed_window_ParamLimits

0xb6c2,	// (0x0000b6c2) popup_toolbar2_fixed_window

0xcbd0,	// (0x0000cbd0) popup_toolbar2_float_window

0x0024,	// (0x00000024) bg_popup_sub_pane_cp27

0x8224,	// (0x00008224) grid_toolbar2_float_pane

0x0024,	// (0x00000024) bg_popup_sub_pane_cp26

0x8224,	// (0x00008224) grid_toolbar2_fixed_pane

0xdf50,	// (0x0000df50) cell_toolbar2_fixed_pane_ParamLimits

0xdf50,	// (0x0000df50) cell_toolbar2_fixed_pane

0xdf6a,	// (0x0000df6a) cell_toolbar2_fixed_pane_g1

0x8245,	// (0x00008245) toolbar2_fixed_button_pane

0x36fe,	// (0x000036fe) toolbar2_fixed_button_pane_g1

0x3706,	// (0x00003706) toolbar2_fixed_button_pane_g2

0x370e,	// (0x0000370e) toolbar2_fixed_button_pane_g3

0x3716,	// (0x00003716) toolbar2_fixed_button_pane_g4

0x371e,	// (0x0000371e) toolbar2_fixed_button_pane_g5

0x3726,	// (0x00003726) toolbar2_fixed_button_pane_g6

0x372e,	// (0x0000372e) toolbar2_fixed_button_pane_g7

0x3736,	// (0x00003736) toolbar2_fixed_button_pane_g8

0x373e,	// (0x0000373e) toolbar2_fixed_button_pane_g9

0x0008,

0xaec8,	// (0x0000aec8) toolbar2_fixed_button_pane_g

0x824d,	// (0x0000824d) cell_toolbar2_float_pane_ParamLimits

0x824d,	// (0x0000824d) cell_toolbar2_float_pane

0x825e,	// (0x0000825e) cell_toolbar2_float_pane_g1

0x8245,	// (0x00008245) toolbar2_fixed_button_pane_cp

0xd88a,	// (0x0000d88a) fep_vkb_accented_list_pane_ParamLimits

0xd88a,	// (0x0000d88a) fep_vkb_accented_list_pane

0x6ea5,	// (0x00006ea5) bg_popup_fep_shadow_pane_g9

0x2617,	// (0x00002617) bg_popup_fep_shadow_pane_cp3

0x1667,	// (0x00001667) list_accented_list_pane

0x8267,	// (0x00008267) list_single_accented_list_pane_ParamLimits

0x8267,	// (0x00008267) list_single_accented_list_pane

0x2617,	// (0x00002617) list_highlight_pane_cp10

0x8278,	// (0x00008278) list_single_accented_list_pane_t1

0xcafa,	// (0x0000cafa) popup_slider_window_ParamLimits

0xcafa,	// (0x0000cafa) popup_slider_window

0x7d56,	// (0x00007d56) aid_indentation_list_msg

0xe063,	// (0x0000e063) bg_popup_window_pane_cp19

0x839c,	// (0x0000839c) popup_slider_window_g1

0x83b8,	// (0x000083b8) popup_slider_window_g2

0x83d4,	// (0x000083d4) popup_slider_window_g3

0x0005,

0xf49b,	// (0x0000f49b) popup_slider_window_g

0x8430,	// (0x00008430) popup_slider_window_t1

0x84a4,	// (0x000084a4) small_volume_slider_vertical_pane

0x66cc,	// (0x000066cc) small_volume_slider_vertical_pane_g1

0x66cc,	// (0x000066cc) small_volume_slider_vertical_pane_g2

0x84c0,	// (0x000084c0) small_volume_slider_vertical_pane_g3

0x0002,

0xb35a,	// (0x0000b35a) small_volume_slider_vertical_pane_g

0xb630,	// (0x0000b630) area_side_right_pane_ParamLimits

0xb630,	// (0x0000b630) area_side_right_pane

0xe11b,	// (0x0000e11b) aid_size_side_button_ParamLimits

0xe11b,	// (0x0000e11b) aid_size_side_button

0xe134,	// (0x0000e134) grid_sctrl_middle_pane_ParamLimits

0xe134,	// (0x0000e134) grid_sctrl_middle_pane

0x84fc,	// (0x000084fc) sctrl_sk_bottom_pane

0x850d,	// (0x0000850d) sctrl_sk_top_pane

0x851f,	// (0x0000851f) aid_touch_sctrl_top

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane

0x852c,	// (0x0000852c) sctrl_sk_top_pane_g1

0x8539,	// (0x00008539) sctrl_sk_top_pane_t1

0x851f,	// (0x0000851f) aid_touch_sctrl_bottom

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp_ParamLimits

0x083b,	// (0x0000083b) bg_sctrl_sk_pane_cp

0x8554,	// (0x00008554) sctrl_sk_bottom_pane_g1

0x8539,	// (0x00008539) sctrl_sk_bottom_pane_t1

0xe14e,	// (0x0000e14e) cell_sctrl_middle_pane_ParamLimits

0xe14e,	// (0x0000e14e) cell_sctrl_middle_pane

0xe15f,	// (0x0000e15f) aid_touch_sctrl_middle_ParamLimits

0xe15f,	// (0x0000e15f) aid_touch_sctrl_middle

0xe16c,	// (0x0000e16c) bg_sctrl_middle_pane_ParamLimits

0xe16c,	// (0x0000e16c) bg_sctrl_middle_pane

0x8619,	// (0x00008619) cell_sctrl_middle_pane_g1_ParamLimits

0x8619,	// (0x00008619) cell_sctrl_middle_pane_g1

0xe17a,	// (0x0000e17a) cell_sctrl_middle_pane_g2_ParamLimits

0xe17a,	// (0x0000e17a) cell_sctrl_middle_pane_g2

0x0001,

0xf4a8,	// (0x0000f4a8) cell_sctrl_middle_pane_g_ParamLimits

0xf4a8,	// (0x0000f4a8) cell_sctrl_middle_pane_g

0x36fe,	// (0x000036fe) bg_sctrl_middle_pane_g1

0x3706,	// (0x00003706) bg_sctrl_middle_pane_g2

0x370e,	// (0x0000370e) bg_sctrl_middle_pane_g3

0x3716,	// (0x00003716) bg_sctrl_middle_pane_g4

0x371e,	// (0x0000371e) bg_sctrl_middle_pane_g5

0x3726,	// (0x00003726) bg_sctrl_middle_pane_g6

0x372e,	// (0x0000372e) bg_sctrl_middle_pane_g7

0x3736,	// (0x00003736) bg_sctrl_middle_pane_g8

0x0007,

0xb36b,	// (0x0000b36b) bg_sctrl_middle_pane_g

0x373e,	// (0x0000373e) bg_sctrl_middle_pane_g8_copy1

0x36fe,	// (0x000036fe) bg_sctrl_sk_pane_g1

0x3706,	// (0x00003706) bg_sctrl_sk_pane_g2

0x370e,	// (0x0000370e) bg_sctrl_sk_pane_g3

0x0008,

0xaec8,	// (0x0000aec8) bg_sctrl_sk_pane_g

0x0d50,	// (0x00000d50) aid_size_touch_scroll_bar

0x3716,	// (0x00003716) bg_sctrl_sk_pane_g4

0x371e,	// (0x0000371e) bg_sctrl_sk_pane_g5

0x3726,	// (0x00003726) bg_sctrl_sk_pane_g6

0x372e,	// (0x0000372e) bg_sctrl_sk_pane_g7

0x3736,	// (0x00003736) bg_sctrl_sk_pane_g8

0x373e,	// (0x0000373e) bg_sctrl_sk_pane_g9

0x2c55,	// (0x00002c55) popup_fep_china_hwr2_fs_candidate_window

0xc614,	// (0x0000c614) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc614,	// (0x0000c614) popup_fep_china_hwr2_fs_control_window

0x6b5e,	// (0x00006b5e) sctrl_sk_top_pane_g2

0x0001,

0xb361,	// (0x0000b361) sctrl_sk_top_pane_g

0xe186,	// (0x0000e186) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe186,	// (0x0000e186) aid_fep_china_hwr2_fs_cell

0xe19a,	// (0x0000e19a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe19a,	// (0x0000e19a) bg_popup_fep_shadow_pane_cp4

0xe1b1,	// (0x0000e1b1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe1b1,	// (0x0000e1b1) bg_popup_fep_shadow_pane_cp5

0xe1c3,	// (0x0000e1c3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe1c3,	// (0x0000e1c3) popup_fep_china_hwr2_fs_control_bar_grid

0xe1d7,	// (0x0000e1d7) popup_fep_china_hwr2_fs_control_funtion_grid

0x85ed,	// (0x000085ed) aid_fep_china_hwr2_fs_candi_cell

0x0024,	// (0x00000024) bg_popup_fep_shadow_pane_cp6

0x85f7,	// (0x000085f7) popup_fep_china_hwr2_fs_candidate_grid

0xe1df,	// (0x0000e1df) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe1df,	// (0x0000e1df) cell_fep_china_hwr2_fs_funtion_grid

0x66cc,	// (0x000066cc) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8619,	// (0x00008619) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8619,	// (0x00008619) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8627,	// (0x00008627) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8627,	// (0x00008627) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xb37c,	// (0x0000b37c) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xb37c,	// (0x0000b37c) cell_fep_china_hwr2_fs_funtion_grid_g

0xe1f7,	// (0x0000e1f7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe1f7,	// (0x0000e1f7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe20c,	// (0x0000e20c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe20c,	// (0x0000e20c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xf4ad,	// (0x0000f4ad) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xf4ad,	// (0x0000f4ad) cell_fep_china_hwr2_fs_funtion_grid_t

0x866e,	// (0x0000866e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8676,	// (0x00008676) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x867e,	// (0x0000867e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xb386,	// (0x0000b386) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8686,	// (0x00008686) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8686,	// (0x00008686) cell_fep_china_hwr2_fs_candidate_grid

0x869f,	// (0x0000869f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x86a7,	// (0x000086a7) popup_fep_china_hwr2_fs_candidate_grid_g21

0x66cc,	// (0x000066cc) cell_fep_china_hwr2_fs_candidate_grid_g1

0x66cc,	// (0x000066cc) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xb1a6,	// (0x0000b1a6) cell_fep_china_hwr2_fs_candidate_grid_g

0x86af,	// (0x000086af) cell_fep_china_hwr2_fs_candidate_grid_t1

0x324e,	// (0x0000324e) clock_nsta_pane_cp_24_ParamLimits

0x324e,	// (0x0000324e) clock_nsta_pane_cp_24

0x32cc,	// (0x000032cc) indicator_nsta_pane_cp_24_ParamLimits

0x32cc,	// (0x000032cc) indicator_nsta_pane_cp_24

0x474b,	// (0x0000474b) heading_pane_g1

0x0001,

0xaf2d,	// (0x0000af2d) heading_pane_g

0x5358,	// (0x00005358) grid_sct_catagory_button_pane

0x5388,	// (0x00005388) scroll_pane_cp5_ParamLimits

0x627a,	// (0x0000627a) button_value_adjust_pane_cp5_ParamLimits

0x627a,	// (0x0000627a) button_value_adjust_pane_cp5

0x6376,	// (0x00006376) form2_midp_time_pane_ParamLimits

0x86bd,	// (0x000086bd) cell_sct_catagory_button_pane_ParamLimits

0x86bd,	// (0x000086bd) cell_sct_catagory_button_pane

0x6691,	// (0x00006691) bg_button_pane_cp01_ParamLimits

0x6691,	// (0x00006691) bg_button_pane_cp01

0x66cc,	// (0x000066cc) cell_sct_catagory_button_pane_g1

0xcb73,	// (0x0000cb73) popup_tb_extension_window

0xe228,	// (0x0000e228) aid_size_cell_ext_ParamLimits

0xe228,	// (0x0000e228) aid_size_cell_ext

0x0b92,	// (0x00000b92) bg_tb_trans_pane_cp1_ParamLimits

0x0b92,	// (0x00000b92) bg_tb_trans_pane_cp1

0xe24e,	// (0x0000e24e) grid_tb_ext_pane_ParamLimits

0xe24e,	// (0x0000e24e) grid_tb_ext_pane

0xe289,	// (0x0000e289) cell_tb_ext_pane_ParamLimits

0xe289,	// (0x0000e289) cell_tb_ext_pane

0xe2b1,	// (0x0000e2b1) cell_tb_ext_pane_g1_ParamLimits

0xe2b1,	// (0x0000e2b1) cell_tb_ext_pane_g1

0x8751,	// (0x00008751) cell_tb_ext_pane_t1

0x083b,	// (0x0000083b) list_highlight_pane_cp11_ParamLimits

0x083b,	// (0x0000083b) list_highlight_pane_cp11

0xb6d7,	// (0x0000b6d7) popup_uni_indicator_window_ParamLimits

0xb6d7,	// (0x0000b6d7) popup_uni_indicator_window

0x139c,	// (0x0000139c) bg_popup_sub_pane_cp14

0x876c,	// (0x0000876c) list_uniindi_pane

0x8778,	// (0x00008778) uniindi_top_pane

0x083b,	// (0x0000083b) bg_uniindi_top_pane

0x8797,	// (0x00008797) uniindi_top_pane_g1

0x87ad,	// (0x000087ad) uniindi_top_pane_g2

0x0003,

0xb38d,	// (0x0000b38d) uniindi_top_pane_g

0x87d7,	// (0x000087d7) uniindi_top_pane_t1

0x8801,	// (0x00008801) list_single_uniindi_pane_ParamLimits

0x8801,	// (0x00008801) list_single_uniindi_pane

0x66cc,	// (0x000066cc) bg_uniindi_top_pane_g1

0x8814,	// (0x00008814) list_single_uniindi_pane_g1

0x8827,	// (0x00008827) list_single_uniindi_pane_t1

0x0024,	// (0x00000024) control_bg_pane

0x884c,	// (0x0000884c) bg_sctrl_sk_pane_cp1

0x8855,	// (0x00008855) bg_sctrl_sk_pane_cp2

0x885e,	// (0x0000885e) control_bg_pane_g1

0x8867,	// (0x00008867) control_bg_pane_g2

0x0001,

0xb396,	// (0x0000b396) control_bg_pane_g

0x6084,	// (0x00006084) cell_indicator_nsta_pane_g1_ParamLimits

0xd696,	// (0x0000d696) cell_indicator_nsta_pane_g2_ParamLimits

0xf425,	// (0x0000f425) cell_indicator_nsta_pane_g_ParamLimits

0x63fe,	// (0x000063fe) form2_midp_time_pane_t1_ParamLimits

0x6728,	// (0x00006728) main_idle_act4_pane_ParamLimits

0x6728,	// (0x00006728) main_idle_act4_pane

0xcb73,	// (0x0000cb73) popup_tb_extension_window_ParamLimits

0xe270,	// (0x0000e270) tb_ext_find_pane_ParamLimits

0xe270,	// (0x0000e270) tb_ext_find_pane

0x8870,	// (0x00008870) ai_gene_pane_1_cp1

0x275e,	// (0x0000275e) ai_gene_pane_2_cp1

0x8878,	// (0x00008878) list_single_idle_plugin_calendar_pane

0x8881,	// (0x00008881) list_single_idle_plugin_notification_pane

0x888a,	// (0x0000888a) list_single_idle_plugin_player_pane

0xe2ce,	// (0x0000e2ce) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe2ce,	// (0x0000e2ce) list_single_idle_plugin_shortcut_pane

0xe2f6,	// (0x0000e2f6) main_idle_act4_pane_t1

0xe30c,	// (0x0000e30c) main_idle_act4_pane_t2

0x0001,

0xf4b2,	// (0x0000f4b2) main_idle_act4_pane_t

0xe322,	// (0x0000e322) middle_sk_idle_act4_pane_ParamLimits

0xe322,	// (0x0000e322) middle_sk_idle_act4_pane

0xe33e,	// (0x0000e33e) popup_clock_digital_analogue_window_cp2

0xe366,	// (0x0000e366) shortcut_wheel_idle_act4_pane_ParamLimits

0xe366,	// (0x0000e366) shortcut_wheel_idle_act4_pane

0x66cc,	// (0x000066cc) shortcut_wheel_idle_act4_pane_g1

0x66cc,	// (0x000066cc) shortcut_wheel_idle_act4_pane_g2

0x66cc,	// (0x000066cc) shortcut_wheel_idle_act4_pane_g3

0x66cc,	// (0x000066cc) shortcut_wheel_idle_act4_pane_g4

0x66cc,	// (0x000066cc) shortcut_wheel_idle_act4_pane_g5

0x891d,	// (0x0000891d) shortcut_wheel_idle_act4_pane_g6

0x8925,	// (0x00008925) shortcut_wheel_idle_act4_pane_g7

0x892d,	// (0x0000892d) shortcut_wheel_idle_act4_pane_g8

0x8935,	// (0x00008935) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xb3a0,	// (0x0000b3a0) shortcut_wheel_idle_act4_pane_g

0x67dd,	// (0x000067dd) middle_sk_idle_act4_pane_g1_ParamLimits

0x67dd,	// (0x000067dd) middle_sk_idle_act4_pane_g1

0xe3e3,	// (0x0000e3e3) middle_sk_idle_act4_pane_g2_ParamLimits

0xe3e3,	// (0x0000e3e3) middle_sk_idle_act4_pane_g2

0x0001,

0xf4c7,	// (0x0000f4c7) middle_sk_idle_act4_pane_g_ParamLimits

0xf4c7,	// (0x0000f4c7) middle_sk_idle_act4_pane_g

0xe3fb,	// (0x0000e3fb) middle_sk_idle_act4_pane_t1_ParamLimits

0xe3fb,	// (0x0000e3fb) middle_sk_idle_act4_pane_t1

0xe42a,	// (0x0000e42a) grid_ai_shortcut_pane_ParamLimits

0xe42a,	// (0x0000e42a) grid_ai_shortcut_pane

0xe447,	// (0x0000e447) list_highlight_pane_cp16_ParamLimits

0xe447,	// (0x0000e447) list_highlight_pane_cp16

0xe454,	// (0x0000e454) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe454,	// (0x0000e454) list_single_idle_plugin_shortcut_pane_g1

0xe460,	// (0x0000e460) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe460,	// (0x0000e460) list_single_idle_plugin_shortcut_pane_g2

0xe47c,	// (0x0000e47c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe47c,	// (0x0000e47c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xf4cc,	// (0x0000f4cc) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xf4cc,	// (0x0000f4cc) list_single_idle_plugin_shortcut_pane_g

0xe491,	// (0x0000e491) cell_ai_shortcut_pane_ParamLimits

0xe491,	// (0x0000e491) cell_ai_shortcut_pane

0xe4a7,	// (0x0000e4a7) cell_ai_shortcut_pane_g1_ParamLimits

0xe4a7,	// (0x0000e4a7) cell_ai_shortcut_pane_g1

0x8870,	// (0x00008870) ai_gene_pane_1_cp2

0x8a65,	// (0x00008a65) ai_gene_pane_2_cp2

0x8a6d,	// (0x00008a6d) list_highlight_pane_cp15

0x8a76,	// (0x00008a76) list_single_idle_plugin_calendar_pane_g1

0x8a6d,	// (0x00008a6d) list_highlight_pane_cp17

0x8a7e,	// (0x00008a7e) list_single_idle_plugin_calendar_pane_g1_copy1

0x8a86,	// (0x00008a86) list_single_idle_plugin_player_pane_g1

0x5669,	// (0x00005669) list_single_idle_plugin_player_pane_g2

0x0001,

0xb3cf,	// (0x0000b3cf) list_single_idle_plugin_player_pane_g

0x8a8e,	// (0x00008a8e) list_single_idle_plugin_player_pane_t1

0x8a9c,	// (0x00008a9c) list_single_idle_plugin_player_pane_t2

0x8aaa,	// (0x00008aaa) list_single_idle_plugin_player_pane_t3

0x8ab8,	// (0x00008ab8) list_single_idle_plugin_player_pane_t4

0x0003,

0xb3d4,	// (0x0000b3d4) list_single_idle_plugin_player_pane_t

0x8ac6,	// (0x00008ac6) wait_bar_pane_cp15

0x8ace,	// (0x00008ace) grid_ai_notification_pane

0x5669,	// (0x00005669) list_single_idle_plugin_notification_pane_g1

0xe4c9,	// (0x0000e4c9) cell_ai_notification_pane_ParamLimits

0xe4c9,	// (0x0000e4c9) cell_ai_notification_pane

0x8ae4,	// (0x00008ae4) cell_ai_notification_pane_g1

0x8aec,	// (0x00008aec) cell_ai_notification_pane_t1

0xe4d6,	// (0x0000e4d6) tb_ext_find_button_pane

0xe4de,	// (0x0000e4de) tb_ext_find_pane_g1

0xe4e6,	// (0x0000e4e6) tb_ext_find_pane_t1

0x1d5d,	// (0x00001d5d) tb_ext_find_button_pane_g1

0x8b18,	// (0x00008b18) tb_ext_find_button_pane_g2

0x0001,

0xb3dd,	// (0x0000b3dd) tb_ext_find_button_pane_g

0xe2f6,	// (0x0000e2f6) main_idle_act4_pane_t1_ParamLimits

0xe30c,	// (0x0000e30c) main_idle_act4_pane_t2_ParamLimits

0xf4b2,	// (0x0000f4b2) main_idle_act4_pane_t_ParamLimits

0xe33e,	// (0x0000e33e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe356,	// (0x0000e356) sat_plugin_idle_act4_pane_ParamLimits

0xe356,	// (0x0000e356) sat_plugin_idle_act4_pane

0xe4f4,	// (0x0000e4f4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe4f4,	// (0x0000e4f4) sat_plugin_idle_act4_pane_t1

0xe50c,	// (0x0000e50c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe50c,	// (0x0000e50c) sat_plugin_idle_act4_pane_t2

0xe524,	// (0x0000e524) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe524,	// (0x0000e524) sat_plugin_idle_act4_pane_t3

0xe53c,	// (0x0000e53c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe53c,	// (0x0000e53c) sat_plugin_idle_act4_pane_t4

0x0003,

0xf4d3,	// (0x0000f4d3) sat_plugin_idle_act4_pane_t_ParamLimits

0xf4d3,	// (0x0000f4d3) sat_plugin_idle_act4_pane_t

0x029d,	// (0x0000029d) popup_battery_window_ParamLimits

0x029d,	// (0x0000029d) popup_battery_window

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25_ParamLimits

0x083b,	// (0x0000083b) bg_popup_sub_pane_cp25

0x8b6d,	// (0x00008b6d) popup_battery_window_g1_ParamLimits

0x8b6d,	// (0x00008b6d) popup_battery_window_g1

0x8b79,	// (0x00008b79) popup_battery_window_t1_ParamLimits

0x8b79,	// (0x00008b79) popup_battery_window_t1

0x8b8b,	// (0x00008b8b) popup_battery_window_t2_ParamLimits

0x8b8b,	// (0x00008b8b) popup_battery_window_t2

0x0001,

0xb3eb,	// (0x0000b3eb) popup_battery_window_t_ParamLimits

0xb3eb,	// (0x0000b3eb) popup_battery_window_t

0xc283,	// (0x0000c283) midp_canvas_pane_ParamLimits

0xc2e0,	// (0x0000c2e0) midp_keypad_pane_ParamLimits

0xc2e0,	// (0x0000c2e0) midp_keypad_pane

0x2ba9,	// (0x00002ba9) main_midp_pane_ParamLimits

0x60ed,	// (0x000060ed) signal_pane_g2_cp_ParamLimits

0xe554,	// (0x0000e554) aid_size_cell_midp_keypad_ParamLimits

0xe554,	// (0x0000e554) aid_size_cell_midp_keypad

0xe572,	// (0x0000e572) midp_keyp_game_grid_pane_ParamLimits

0xe572,	// (0x0000e572) midp_keyp_game_grid_pane

0xe599,	// (0x0000e599) midp_keyp_rocker_pane_ParamLimits

0xe599,	// (0x0000e599) midp_keyp_rocker_pane

0xe5ea,	// (0x0000e5ea) midp_keyp_sk_left_pane_ParamLimits

0xe5ea,	// (0x0000e5ea) midp_keyp_sk_left_pane

0xe63e,	// (0x0000e63e) midp_keyp_sk_right_pane_ParamLimits

0xe63e,	// (0x0000e63e) midp_keyp_sk_right_pane

0x0024,	// (0x00000024) bg_button_pane_cp03

0xe692,	// (0x0000e692) midp_keyp_sk_left_pane_g1

0x0024,	// (0x00000024) bg_button_pane_cp04

0xe692,	// (0x0000e692) midp_keyp_sk_right_pane_g1

0x66cc,	// (0x000066cc) midp_keyp_rocker_pane_g1

0xe69b,	// (0x0000e69b) keyp_game_cell_pane_ParamLimits

0xe69b,	// (0x0000e69b) keyp_game_cell_pane

0x0024,	// (0x00000024) bg_button_pane_cp02

0xe6bf,	// (0x0000e6bf) keyp_game_cell_pane_g1

0xb672,	// (0x0000b672) popup_fep_vkb2_window_ParamLimits

0xb672,	// (0x0000b672) popup_fep_vkb2_window

0xe6c8,	// (0x0000e6c8) aid_size_cell_vkb2_ParamLimits

0xe6c8,	// (0x0000e6c8) aid_size_cell_vkb2

0xe6fe,	// (0x0000e6fe) popup_fep_vkb2_window_g1_ParamLimits

0xe6fe,	// (0x0000e6fe) popup_fep_vkb2_window_g1

0xe74e,	// (0x0000e74e) vkb2_area_bottom_pane_ParamLimits

0xe74e,	// (0x0000e74e) vkb2_area_bottom_pane

0xe7a2,	// (0x0000e7a2) vkb2_area_keypad_pane_ParamLimits

0xe7a2,	// (0x0000e7a2) vkb2_area_keypad_pane

0xe7ea,	// (0x0000e7ea) vkb2_area_top_pane_ParamLimits

0xe7ea,	// (0x0000e7ea) vkb2_area_top_pane

0xe870,	// (0x0000e870) vkb2_top_entry_pane_ParamLimits

0xe870,	// (0x0000e870) vkb2_top_entry_pane

0xe89d,	// (0x0000e89d) vkb2_top_grid_left_pane_ParamLimits

0xe89d,	// (0x0000e89d) vkb2_top_grid_left_pane

0xe8bd,	// (0x0000e8bd) vkb2_top_grid_right_pane_ParamLimits

0xe8bd,	// (0x0000e8bd) vkb2_top_grid_right_pane

0x8f0c,	// (0x00008f0c) vkb2_cell_keypad_pane_ParamLimits

0x8f0c,	// (0x00008f0c) vkb2_cell_keypad_pane

0xe903,	// (0x0000e903) vkb2_area_bottom_grid_pane_ParamLimits

0xe903,	// (0x0000e903) vkb2_area_bottom_grid_pane

0xe92d,	// (0x0000e92d) vkb2_area_bottom_pane_g1_ParamLimits

0xe92d,	// (0x0000e92d) vkb2_area_bottom_pane_g1

0xe953,	// (0x0000e953) vkb2_area_bottom_pane_g2_ParamLimits

0xe953,	// (0x0000e953) vkb2_area_bottom_pane_g2

0xe984,	// (0x0000e984) vkb2_area_bottom_pane_g3_ParamLimits

0xe984,	// (0x0000e984) vkb2_area_bottom_pane_g3

0x0002,

0xf4dc,	// (0x0000f4dc) vkb2_area_bottom_pane_g_ParamLimits

0xf4dc,	// (0x0000f4dc) vkb2_area_bottom_pane_g

0x90b6,	// (0x000090b6) vkb2_top_cell_left_pane_ParamLimits

0x90b6,	// (0x000090b6) vkb2_top_cell_left_pane

0xe9ee,	// (0x0000e9ee) vkb2_top_entry_pane_g1_ParamLimits

0xe9ee,	// (0x0000e9ee) vkb2_top_entry_pane_g1

0xe9fc,	// (0x0000e9fc) vkb2_top_entry_pane_t1_ParamLimits

0xe9fc,	// (0x0000e9fc) vkb2_top_entry_pane_t1

0x911e,	// (0x0000911e) vkb2_top_entry_pane_t2_ParamLimits

0x911e,	// (0x0000911e) vkb2_top_entry_pane_t2

0x9150,	// (0x00009150) vkb2_top_entry_pane_t3_ParamLimits

0x9150,	// (0x00009150) vkb2_top_entry_pane_t3

0x0002,

0xf4e3,	// (0x0000f4e3) vkb2_top_entry_pane_t_ParamLimits

0xf4e3,	// (0x0000f4e3) vkb2_top_entry_pane_t

0xea35,	// (0x0000ea35) vkb2_top_grid_right_pane_g1_ParamLimits

0xea35,	// (0x0000ea35) vkb2_top_grid_right_pane_g1

0x91b7,	// (0x000091b7) vkb2_top_grid_right_pane_g2_ParamLimits

0x91b7,	// (0x000091b7) vkb2_top_grid_right_pane_g2

0x91cf,	// (0x000091cf) vkb2_top_grid_right_pane_g3_ParamLimits

0x91cf,	// (0x000091cf) vkb2_top_grid_right_pane_g3

0xea4b,	// (0x0000ea4b) vkb2_top_grid_right_pane_g4_ParamLimits

0xea4b,	// (0x0000ea4b) vkb2_top_grid_right_pane_g4

0x0003,

0xf4ea,	// (0x0000f4ea) vkb2_top_grid_right_pane_g_ParamLimits

0xf4ea,	// (0x0000f4ea) vkb2_top_grid_right_pane_g

0x91fd,	// (0x000091fd) vkb2_top_cell_left_pane_g1

0x9214,	// (0x00009214) vkb2_cell_keypad_pane_g1_ParamLimits

0x9214,	// (0x00009214) vkb2_cell_keypad_pane_g1

0x9222,	// (0x00009222) vkb2_cell_keypad_pane_t1_ParamLimits

0x9222,	// (0x00009222) vkb2_cell_keypad_pane_t1

0x9239,	// (0x00009239) vkb2_cell_bottom_grid_pane_ParamLimits

0x9239,	// (0x00009239) vkb2_cell_bottom_grid_pane

0x9272,	// (0x00009272) vkb2_cell_bottom_grid_pane_g1

0xe387,	// (0x0000e387) aid_call2_pane_cp02

0xe38f,	// (0x0000e38f) aid_call_pane_cp02

0xe397,	// (0x0000e397) clock_digital_number_pane_cp10

0xe39f,	// (0x0000e39f) clock_digital_number_pane_cp11

0xe3a7,	// (0x0000e3a7) clock_digital_number_pane_cp12

0xe3af,	// (0x0000e3af) clock_digital_number_pane_cp13

0xe3b7,	// (0x0000e3b7) clock_digital_separator_pane_cp10

0x1d5d,	// (0x00001d5d) popup_clock_digital_analogue_window_cp2_g1

0x1d5d,	// (0x00001d5d) popup_clock_digital_analogue_window_cp2_g2

0xe3bf,	// (0x0000e3bf) popup_clock_digital_analogue_window_cp2_g3

0x1d5d,	// (0x00001d5d) popup_clock_digital_analogue_window_cp2_g4

0xe3bf,	// (0x0000e3bf) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xf4b7,	// (0x0000f4b7) popup_clock_digital_analogue_window_cp2_g

0xe3c7,	// (0x0000e3c7) popup_clock_digital_analogue_window_cp2_t1

0xe3d5,	// (0x0000e3d5) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xf4c2,	// (0x0000f4c2) popup_clock_digital_analogue_window_cp2_t

0x66cc,	// (0x000066cc) clock_digital_number_pane_cp10_g1

0x66cc,	// (0x000066cc) clock_digital_number_pane_cp10_g2

0x0001,

0xb1a6,	// (0x0000b1a6) clock_digital_number_pane_cp10_g

0x66cc,	// (0x000066cc) clock_digital_separator_pane_cp10_g1

0x66cc,	// (0x000066cc) clock_digital_separator_pane_cp10_g2

0x0001,

0xb1a6,	// (0x0000b1a6) clock_digital_separator_pane_cp10_g

0x87b9,	// (0x000087b9) uniindi_top_pane_g3

0x87ca,	// (0x000087ca) uniindi_top_pane_g4

0x8f97,	// (0x00008f97) vkb2_row_keypad_pane_ParamLimits

0x8f97,	// (0x00008f97) vkb2_row_keypad_pane

0x928e,	// (0x0000928e) vkb2_cell_t_keypad_pane_ParamLimits

0x928e,	// (0x0000928e) vkb2_cell_t_keypad_pane

0x929e,	// (0x0000929e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x929e,	// (0x0000929e) vkb2_cell_t_keypad_pane_cp08

0x92b1,	// (0x000092b1) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x92b1,	// (0x000092b1) vkb2_cell_t_keypad_pane_cp09

0x92c5,	// (0x000092c5) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x92c5,	// (0x000092c5) vkb2_cell_t_keypad_pane_cp01

0x92d6,	// (0x000092d6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x92d6,	// (0x000092d6) vkb2_cell_t_keypad_pane_cp02

0x92e7,	// (0x000092e7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x92e7,	// (0x000092e7) vkb2_cell_t_keypad_pane_cp03

0x92f8,	// (0x000092f8) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x92f8,	// (0x000092f8) vkb2_cell_t_keypad_pane_cp04

0x9309,	// (0x00009309) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x9309,	// (0x00009309) vkb2_cell_t_keypad_pane_cp05

0x931a,	// (0x0000931a) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x931a,	// (0x0000931a) vkb2_cell_t_keypad_pane_cp06

0x932b,	// (0x0000932b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x932b,	// (0x0000932b) vkb2_cell_t_keypad_pane_cp07

0x933c,	// (0x0000933c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x933c,	// (0x0000933c) vkb2_cell_t_keypad_pane_cp10

0x6b5e,	// (0x00006b5e) vkb2_cell_t_keypad_pane_g1

0x9351,	// (0x00009351) vkb2_cell_t_keypad_pane_t1

0x0024,	// (0x00000024) popup_grid_graphic2_window

0xea61,	// (0x0000ea61) aid_size_cell_graphic2_ParamLimits

0xea61,	// (0x0000ea61) aid_size_cell_graphic2

0xea9f,	// (0x0000ea9f) bg_popup_window_pane_cp21_ParamLimits

0xea9f,	// (0x0000ea9f) bg_popup_window_pane_cp21

0xeaad,	// (0x0000eaad) graphic2_pages_pane_ParamLimits

0xeaad,	// (0x0000eaad) graphic2_pages_pane

0xeb03,	// (0x0000eb03) grid_graphic2_control_pane_ParamLimits

0xeb03,	// (0x0000eb03) grid_graphic2_control_pane

0xeb4b,	// (0x0000eb4b) grid_graphic2_pane_ParamLimits

0xeb4b,	// (0x0000eb4b) grid_graphic2_pane

0xebd2,	// (0x0000ebd2) cell_graphic2_pane

0x0024,	// (0x00000024) main_comp_mode_pane

0x7f05,	// (0x00007f05) list_ai3_gene_pane_ParamLimits

0xe063,	// (0x0000e063) bg_popup_window_pane_cp19_ParamLimits

0x833e,	// (0x0000833e) bg_touch_area_indi_pane_ParamLimits

0x833e,	// (0x0000833e) bg_touch_area_indi_pane

0x8354,	// (0x00008354) bg_touch_area_indi_pane_cp01_ParamLimits

0x8354,	// (0x00008354) bg_touch_area_indi_pane_cp01

0x836a,	// (0x0000836a) bg_touch_area_indi_pane_cp02_ParamLimits

0x836a,	// (0x0000836a) bg_touch_area_indi_pane_cp02

0x8382,	// (0x00008382) bg_touch_area_indi_pane_cp03_ParamLimits

0x8382,	// (0x00008382) bg_touch_area_indi_pane_cp03

0x839c,	// (0x0000839c) popup_slider_window_g1_ParamLimits

0x83b8,	// (0x000083b8) popup_slider_window_g2_ParamLimits

0x83d4,	// (0x000083d4) popup_slider_window_g3_ParamLimits

0xf49b,	// (0x0000f49b) popup_slider_window_g_ParamLimits

0x8430,	// (0x00008430) popup_slider_window_t1_ParamLimits

0x84a4,	// (0x000084a4) small_volume_slider_vertical_pane_ParamLimits

0xebd2,	// (0x0000ebd2) cell_graphic2_pane_ParamLimits

0xec2d,	// (0x0000ec2d) bg_button_pane_cp10_ParamLimits

0xec2d,	// (0x0000ec2d) bg_button_pane_cp10

0xec40,	// (0x0000ec40) bg_button_pane_cp11_ParamLimits

0xec40,	// (0x0000ec40) bg_button_pane_cp11

0xec53,	// (0x0000ec53) graphic2_pages_pane_g1_ParamLimits

0xec53,	// (0x0000ec53) graphic2_pages_pane_g1

0xec6e,	// (0x0000ec6e) graphic2_pages_pane_g2_ParamLimits

0xec6e,	// (0x0000ec6e) graphic2_pages_pane_g2

0x0001,

0xf4f8,	// (0x0000f4f8) graphic2_pages_pane_g_ParamLimits

0xf4f8,	// (0x0000f4f8) graphic2_pages_pane_g

0xec86,	// (0x0000ec86) graphic2_pages_pane_t1_ParamLimits

0xec86,	// (0x0000ec86) graphic2_pages_pane_t1

0xec9e,	// (0x0000ec9e) cell_graphic2_control_pane_ParamLimits

0xec9e,	// (0x0000ec9e) cell_graphic2_control_pane

0xecd0,	// (0x0000ecd0) cell_graphic2_pane_g1_ParamLimits

0xecd0,	// (0x0000ecd0) cell_graphic2_pane_g1

0x6978,	// (0x00006978) cell_graphic2_pane_g2_ParamLimits

0x6978,	// (0x00006978) cell_graphic2_pane_g2

0xecdd,	// (0x0000ecdd) cell_graphic2_pane_g3_ParamLimits

0xecdd,	// (0x0000ecdd) cell_graphic2_pane_g3

0x6985,	// (0x00006985) cell_graphic2_pane_g4_ParamLimits

0x6985,	// (0x00006985) cell_graphic2_pane_g4

0xecea,	// (0x0000ecea) cell_graphic2_pane_g5_ParamLimits

0xecea,	// (0x0000ecea) cell_graphic2_pane_g5

0x0004,

0xf4fd,	// (0x0000f4fd) cell_graphic2_pane_g_ParamLimits

0xf4fd,	// (0x0000f4fd) cell_graphic2_pane_g

0xed0a,	// (0x0000ed0a) cell_graphic2_pane_t1_ParamLimits

0xed0a,	// (0x0000ed0a) cell_graphic2_pane_t1

0x473f,	// (0x0000473f) grid_highlight_pane_cp11_ParamLimits

0x473f,	// (0x0000473f) grid_highlight_pane_cp11

0x083b,	// (0x0000083b) bg_button_pane_cp05

0xed53,	// (0x0000ed53) cell_graphic2_control_pane_g1

0x66cc,	// (0x000066cc) bg_touch_area_indi_pane_g1

0x962d,	// (0x0000962d) aid_cmod_rocker_key_size

0x9637,	// (0x00009637) aid_cmode_itu_key_size

0x9641,	// (0x00009641) main_cmode_video_pane

0x964b,	// (0x0000964b) main_comp_mode_itu_pane

0x9657,	// (0x00009657) main_comp_mode_rocker_pane

0x9663,	// (0x00009663) cell_cmode_rocker_pane_ParamLimits

0x9663,	// (0x00009663) cell_cmode_rocker_pane

0x9675,	// (0x00009675) cell_cmode_itu_pane_ParamLimits

0x9675,	// (0x00009675) cell_cmode_itu_pane

0x139c,	// (0x0000139c) bg_button_pane_cp06_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane_cp06

0x6b5e,	// (0x00006b5e) cell_cmode_rocker_pane_g1_ParamLimits

0x6b5e,	// (0x00006b5e) cell_cmode_rocker_pane_g1

0x8619,	// (0x00008619) cell_cmode_rocker_pane_g2_ParamLimits

0x8619,	// (0x00008619) cell_cmode_rocker_pane_g2

0x0001,

0xb421,	// (0x0000b421) cell_cmode_rocker_pane_g_ParamLimits

0xb421,	// (0x0000b421) cell_cmode_rocker_pane_g

0x0024,	// (0x00000024) bg_button_pane_cp07

0x968a,	// (0x0000968a) cell_cmode_itu_pane_g1

0x9693,	// (0x00009693) cell_cmode_itu_pane_t1

0x96a1,	// (0x000096a1) cell_cmode_itu_pane_t2

0x0001,

0xb426,	// (0x0000b426) cell_cmode_itu_pane_t

0x883c,	// (0x0000883c) aid_touch_ctrl_left

0x8844,	// (0x00008844) aid_touch_ctrl_right

0x0024,	// (0x00000024) compa_mode_pane

0xed77,	// (0x0000ed77) aid_cmod_rocker_key_size_cp

0xed81,	// (0x0000ed81) aid_cmode_itu_key_size_cp

0x96c3,	// (0x000096c3) compa_mode_pane_g1

0x96cb,	// (0x000096cb) compa_mode_pane_g2

0x96d3,	// (0x000096d3) compa_mode_pane_g3

0x0002,

0xb42b,	// (0x0000b42b) compa_mode_pane_g

0xed8b,	// (0x0000ed8b) main_comp_mode_itu_pane_cp

0xed93,	// (0x0000ed93) main_comp_mode_rocker_pane_cp

0xed9b,	// (0x0000ed9b) cell_cmode_itu_pane_cp_ParamLimits

0xed9b,	// (0x0000ed9b) cell_cmode_itu_pane_cp

0xedb0,	// (0x0000edb0) cell_cmode_rocker_pane_cp_ParamLimits

0xedb0,	// (0x0000edb0) cell_cmode_rocker_pane_cp

0x139c,	// (0x0000139c) bg_button_pane_cp06_cp_ParamLimits

0x139c,	// (0x0000139c) bg_button_pane_cp06_cp

0x6b5e,	// (0x00006b5e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6b5e,	// (0x00006b5e) cell_cmode_rocker_pane_g1_cp

0x66cc,	// (0x000066cc) cell_cmode_rocker_pane_g2_cp

0x0024,	// (0x00000024) bg_button_pane_cp07_cp

0xedc2,	// (0x0000edc2) cell_cmode_itu_pane_g1_cp

0xedcb,	// (0x0000edcb) cell_cmode_itu_pane_t1_cp

0xedcb,	// (0x0000edcb) cell_cmode_itu_pane_t2_cp

0xd454,	// (0x0000d454) settings_code_pane_cp2

0x0507,	// (0x00000507) bg_popup_window_pane_cp3_ParamLimits

0x0a15,	// (0x00000a15) heading_pane_cp3_ParamLimits

0x0a21,	// (0x00000a21) listscroll_popup_graphic_pane_ParamLimits

0x6736,	// (0x00006736) fep_hwr_aid_pane_ParamLimits

0x851f,	// (0x0000851f) aid_touch_sctrl_top_ParamLimits

0x852c,	// (0x0000852c) sctrl_sk_top_pane_g1_ParamLimits

0x6b5e,	// (0x00006b5e) sctrl_sk_top_pane_g2_ParamLimits

0xb361,	// (0x0000b361) sctrl_sk_top_pane_g_ParamLimits

0x8539,	// (0x00008539) sctrl_sk_top_pane_t1_ParamLimits

0x851f,	// (0x0000851f) aid_touch_sctrl_bottom_ParamLimits

0x8539,	// (0x00008539) sctrl_sk_bottom_pane_t1_ParamLimits

0x8785,	// (0x00008785) aid_area_touch_clock

0xe832,	// (0x0000e832) aid_vkb2_area_top_pane_cell_ParamLimits

0xe832,	// (0x0000e832) aid_vkb2_area_top_pane_cell

0xe8dd,	// (0x0000e8dd) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe8dd,	// (0x0000e8dd) aid_vkb2_area_bottom_pane_cell

0x90d6,	// (0x000090d6) popup_char_count_window

0x9720,	// (0x00009720) popup_char_count_window_g1

0x9729,	// (0x00009729) popup_char_count_window_g2

0x9732,	// (0x00009732) popup_char_count_window_g3

0x0002,

0xb432,	// (0x0000b432) popup_char_count_window_g

0x973b,	// (0x0000973b) popup_char_count_window_t1

0x8d34,	// (0x00008d34) popup_fep_char_preview_window_ParamLimits

0x8d34,	// (0x00008d34) popup_fep_char_preview_window

0xe852,	// (0x0000e852) vkb2_top_candi_pane_ParamLimits

0xe852,	// (0x0000e852) vkb2_top_candi_pane

0xedd9,	// (0x0000edd9) cell_vkb2_top_candi_pane_ParamLimits

0xedd9,	// (0x0000edd9) cell_vkb2_top_candi_pane

0x3f78,	// (0x00003f78) bg_popup_fep_char_preview_window_ParamLimits

0x3f78,	// (0x00003f78) bg_popup_fep_char_preview_window

0x9796,	// (0x00009796) popup_fep_char_preview_window_t1_ParamLimits

0x9796,	// (0x00009796) popup_fep_char_preview_window_t1

0x97d0,	// (0x000097d0) bg_popup_fep_char_preview_window_g1

0x97d8,	// (0x000097d8) bg_popup_fep_char_preview_window_g2

0x97e0,	// (0x000097e0) bg_popup_fep_char_preview_window_g3

0x97e8,	// (0x000097e8) bg_popup_fep_char_preview_window_g4

0x97f0,	// (0x000097f0) bg_popup_fep_char_preview_window_g5

0x97f8,	// (0x000097f8) bg_popup_fep_char_preview_window_g6

0x9800,	// (0x00009800) bg_popup_fep_char_preview_window_g7

0x9808,	// (0x00009808) bg_popup_fep_char_preview_window_g8

0x9810,	// (0x00009810) bg_popup_fep_char_preview_window_g9

0x0008,

0xb439,	// (0x0000b439) bg_popup_fep_char_preview_window_g

0x6b5e,	// (0x00006b5e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6b5e,	// (0x00006b5e) cell_vkb2_top_candi_pane_g1

0x6ec9,	// (0x00006ec9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6ec9,	// (0x00006ec9) cell_vkb2_top_candi_pane_g2

0x6eea,	// (0x00006eea) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6eea,	// (0x00006eea) cell_vkb2_top_candi_pane_g3

0x9818,	// (0x00009818) cell_vkb2_top_candi_pane_g4_ParamLimits

0x9818,	// (0x00009818) cell_vkb2_top_candi_pane_g4

0x9839,	// (0x00009839) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9839,	// (0x00009839) cell_vkb2_top_candi_pane_g5

0x8619,	// (0x00008619) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8619,	// (0x00008619) cell_vkb2_top_candi_pane_g6

0x0005,

0xb44c,	// (0x0000b44c) cell_vkb2_top_candi_pane_g_ParamLimits

0xb44c,	// (0x0000b44c) cell_vkb2_top_candi_pane_g

0x985a,	// (0x0000985a) cell_vkb2_top_candi_pane_t1

0x4e62,	// (0x00004e62) aid_size_touch_slider_mark_ParamLimits

0x4e62,	// (0x00004e62) aid_size_touch_slider_mark

0xeae9,	// (0x0000eae9) grid_graphic2_catg_pane_ParamLimits

0xeae9,	// (0x0000eae9) grid_graphic2_catg_pane

0xeba5,	// (0x0000eba5) popup_grid_graphic2_window_t1_ParamLimits

0xeba5,	// (0x0000eba5) popup_grid_graphic2_window_t1

0xebbb,	// (0x0000ebbb) popup_grid_graphic2_window_t2_ParamLimits

0xebbb,	// (0x0000ebbb) popup_grid_graphic2_window_t2

0x0001,

0xf4f3,	// (0x0000f4f3) popup_grid_graphic2_window_t_ParamLimits

0xf4f3,	// (0x0000f4f3) popup_grid_graphic2_window_t

0x083b,	// (0x0000083b) bg_button_pane_cp05_ParamLimits

0xed53,	// (0x0000ed53) cell_graphic2_control_pane_g1_ParamLimits

0xee3f,	// (0x0000ee3f) cell_graphic2_catg_pane_ParamLimits

0xee3f,	// (0x0000ee3f) cell_graphic2_catg_pane

0x0024,	// (0x00000024) bg_button_pane_cp12

0xee51,	// (0x0000ee51) cell_graphic2_catg_pane_g1

0x8751,	// (0x00008751) cell_tb_ext_pane_t1_ParamLimits

0x9174,	// (0x00009174) vkb2_top_cell_right_narrow_pane_ParamLimits

0x9174,	// (0x00009174) vkb2_top_cell_right_narrow_pane

0x918c,	// (0x0000918c) vkb2_top_cell_right_wide_pane_ParamLimits

0x918c,	// (0x0000918c) vkb2_top_cell_right_wide_pane

0x6728,	// (0x00006728) bg_vkb2_func_pane_ParamLimits

0x6728,	// (0x00006728) bg_vkb2_func_pane

0x91fd,	// (0x000091fd) vkb2_top_cell_left_pane_g1_ParamLimits

0x6728,	// (0x00006728) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6728,	// (0x00006728) bg_vkb2_fuc_pane_cp03

0x9272,	// (0x00009272) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3706,	// (0x00003706) bg_vkb2_func_pane_g1

0x370e,	// (0x0000370e) bg_vkb2_func_pane_g2

0x371e,	// (0x0000371e) bg_vkb2_func_pane_g3

0x3716,	// (0x00003716) bg_vkb2_func_pane_g4

0x3726,	// (0x00003726) bg_vkb2_func_pane_g5

0x372e,	// (0x0000372e) bg_vkb2_func_pane_g6

0x3736,	// (0x00003736) bg_vkb2_func_pane_g7

0x373e,	// (0x0000373e) bg_vkb2_func_pane_g8

0x36fe,	// (0x000036fe) bg_vkb2_func_pane_g9

0x0008,

0xb459,	// (0x0000b459) bg_vkb2_func_pane_g

0x6728,	// (0x00006728) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6728,	// (0x00006728) bg_vkb2_fuc_pane_cp01

0x91fd,	// (0x000091fd) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x91fd,	// (0x000091fd) vkb2_top_cell_right_wide_pane_g1

0x6728,	// (0x00006728) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6728,	// (0x00006728) bg_vkb2_fuc_pane_cp02

0x9272,	// (0x00009272) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x9272,	// (0x00009272) vkb2_top_cell_right_narrow_pane_g1

0xdfa3,	// (0x0000dfa3) aid_touch_area_decrease_ParamLimits

0xdfa3,	// (0x0000dfa3) aid_touch_area_decrease

0xdfd7,	// (0x0000dfd7) aid_touch_area_increase_ParamLimits

0xdfd7,	// (0x0000dfd7) aid_touch_area_increase

0xdfff,	// (0x0000dfff) aid_touch_area_mute_ParamLimits

0xdfff,	// (0x0000dfff) aid_touch_area_mute

0xe02f,	// (0x0000e02f) aid_touch_area_slider_ParamLimits

0xe02f,	// (0x0000e02f) aid_touch_area_slider

0xe06f,	// (0x0000e06f) popup_slider_window_g4_ParamLimits

0xe06f,	// (0x0000e06f) popup_slider_window_g4

0xe097,	// (0x0000e097) popup_slider_window_g5_ParamLimits

0xe097,	// (0x0000e097) popup_slider_window_g5

0xe0cb,	// (0x0000e0cb) popup_slider_window_g6_ParamLimits

0xe0cb,	// (0x0000e0cb) popup_slider_window_g6

0x845e,	// (0x0000845e) popup_slider_window_t2_ParamLimits

0x845e,	// (0x0000845e) popup_slider_window_t2

0x0001,

0xb355,	// (0x0000b355) popup_slider_window_t_ParamLimits

0xb355,	// (0x0000b355) popup_slider_window_t

0xe0e7,	// (0x0000e0e7) slider_pane_ParamLimits

0xe0e7,	// (0x0000e0e7) slider_pane

0x9894,	// (0x00009894) slider_pane_g1_ParamLimits

0x9894,	// (0x00009894) slider_pane_g1

0x98a8,	// (0x000098a8) slider_pane_g2_ParamLimits

0x98a8,	// (0x000098a8) slider_pane_g2

0x98be,	// (0x000098be) slider_pane_g3_ParamLimits

0x98be,	// (0x000098be) slider_pane_g3

0x0003,

0xb46c,	// (0x0000b46c) slider_pane_g_ParamLimits

0xb46c,	// (0x0000b46c) slider_pane_g

0xcbbb,	// (0x0000cbbb) popup_tb_float_extension_window_ParamLimits

0xcbbb,	// (0x0000cbbb) popup_tb_float_extension_window

0x98ea,	// (0x000098ea) aid_size_cell_tb_float_ext

0x0024,	// (0x00000024) bg_popup_sub_window_cp28

0x98f6,	// (0x000098f6) grid_tb_float_ext_pane

0x9900,	// (0x00009900) cell_tb_float_ext_pane_ParamLimits

0x9900,	// (0x00009900) cell_tb_float_ext_pane

0x991a,	// (0x0000991a) cell_tb_float_ext_pane_g1

0x9923,	// (0x00009923) grid_highlight_pane_cp12

0xd868,	// (0x0000d868) cell_last_hwr_side_pane_ParamLimits

0xd868,	// (0x0000d868) cell_last_hwr_side_pane

0x66cc,	// (0x000066cc) cell_last_hwr_side_pane_g1

0x992c,	// (0x0000992c) cell_last_hwr_side_pane_g2

0x0001,

0xb475,	// (0x0000b475) cell_last_hwr_side_pane_g

0xe9b9,	// (0x0000e9b9) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe9b9,	// (0x0000e9b9) vkb2_area_bottom_space_btn_pane

0x6b5e,	// (0x00006b5e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9351,	// (0x00009351) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x985a,	// (0x0000985a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x9935,	// (0x00009935) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x9935,	// (0x00009935) vkb2_area_bottom_space_btn_pane_g1

0x996f,	// (0x0000996f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x996f,	// (0x0000996f) vkb2_area_bottom_space_btn_pane_g2

0x99a5,	// (0x000099a5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x99a5,	// (0x000099a5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xb47a,	// (0x0000b47a) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xb47a,	// (0x0000b47a) vkb2_area_bottom_space_btn_pane_g

0x67eb,	// (0x000067eb) cel_fep_hwr_func_pane_ParamLimits

0x67eb,	// (0x000067eb) cel_fep_hwr_func_pane

0xd83d,	// (0x0000d83d) cell_hwr_side_button_pane_ParamLimits

0xd83d,	// (0x0000d83d) cell_hwr_side_button_pane

0x8785,	// (0x00008785) aid_area_touch_clock_ParamLimits

0x083b,	// (0x0000083b) bg_uniindi_top_pane_ParamLimits

0x8797,	// (0x00008797) uniindi_top_pane_g1_ParamLimits

0x87ad,	// (0x000087ad) uniindi_top_pane_g2_ParamLimits

0x87b9,	// (0x000087b9) uniindi_top_pane_g3_ParamLimits

0x87ca,	// (0x000087ca) uniindi_top_pane_g4_ParamLimits

0xb38d,	// (0x0000b38d) uniindi_top_pane_g_ParamLimits

0x87d7,	// (0x000087d7) uniindi_top_pane_t1_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp01

0x99ef,	// (0x000099ef) cel_fep_hwr_func_pane_g1_ParamLimits

0x99ef,	// (0x000099ef) cel_fep_hwr_func_pane_g1

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02_ParamLimits

0x083b,	// (0x0000083b) bg_vkb2_func_pane_cp02

0x99ef,	// (0x000099ef) cell_hwr_side_button_pane_g1_ParamLimits

0x99ef,	// (0x000099ef) cell_hwr_side_button_pane_g1

0x34d9,	// (0x000034d9) status_pane_g4_ParamLimits

0x34d9,	// (0x000034d9) status_pane_g4

0x34f3,	// (0x000034f3) status_pane_t1

0x6411,	// (0x00006411) form2_midp_gauge_slider_cont_pane

0x6419,	// (0x00006419) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd795,	// (0x0000d795) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd7a7,	// (0x0000d7a7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xf43f,	// (0x0000f43f) form2_midp_gauge_slider_pane_t_ParamLimits

0x644f,	// (0x0000644f) form2_midp_slider_pane_ParamLimits

0x8cf4,	// (0x00008cf4) aid_size_cell_func_vkb2_ParamLimits

0x8cf4,	// (0x00008cf4) aid_size_cell_func_vkb2

0x98d6,	// (0x000098d6) slider_pane_g4_ParamLimits

0x98d6,	// (0x000098d6) slider_pane_g4

0xee5a,	// (0x0000ee5a) form2_midp_gauge_slider_pane_t2_cp01

0xee68,	// (0x0000ee68) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xee68,	// (0x0000ee68) form2_midp_gauge_slider_pane_t3_cp01

0x9a28,	// (0x00009a28) form2_midp_slider_pane_cp01

0x0024,	// (0x00000024) navi_smil_pane

0x9a5c,	// (0x00009a5c) navi_smil_pane_g1

0x9a64,	// (0x00009a64) navi_smil_pane_t1

0x9a31,	// (0x00009a31) form2_midp_slider_pane_g1

0x9a3a,	// (0x00009a3a) form2_midp_slider_pane_g2

0x9a42,	// (0x00009a42) form2_midp_slider_pane_g3

0x9a31,	// (0x00009a31) form2_midp_slider_pane_g4

0xee85,	// (0x0000ee85) form2_midp_slider_pane_g5

0x0004,

0xf50d,	// (0x0000f50d) form2_midp_slider_pane_g

0x99df,	// (0x000099df) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x99df,	// (0x000099df) vkb2_area_bottom_space_btn_pane_g4

0xcd9e,	// (0x0000cd9e) lc0_navi_pane_ParamLimits

0xcd9e,	// (0x0000cd9e) lc0_navi_pane

0xce08,	// (0x0000ce08) lc0_stat_indi_pane_ParamLimits

0xce08,	// (0x0000ce08) lc0_stat_indi_pane

0xce1d,	// (0x0000ce1d) ls0_title_pane_ParamLimits

0xce1d,	// (0x0000ce1d) ls0_title_pane

0x139c,	// (0x0000139c) bg_popup_sub_pane_cp14_ParamLimits

0x876c,	// (0x0000876c) list_uniindi_pane_ParamLimits

0x8778,	// (0x00008778) uniindi_top_pane_ParamLimits

0x8814,	// (0x00008814) list_single_uniindi_pane_g1_ParamLimits

0x8827,	// (0x00008827) list_single_uniindi_pane_t1_ParamLimits

0xee90,	// (0x0000ee90) lc0_stat_clock_pane_ParamLimits

0xee90,	// (0x0000ee90) lc0_stat_clock_pane

0xee9d,	// (0x0000ee9d) lc0_stat_indi_pane_g1_ParamLimits

0xee9d,	// (0x0000ee9d) lc0_stat_indi_pane_g1

0xeeaa,	// (0x0000eeaa) lc0_stat_indi_pane_g2_ParamLimits

0xeeaa,	// (0x0000eeaa) lc0_stat_indi_pane_g2

0x0001,

0xf518,	// (0x0000f518) lc0_stat_indi_pane_g_ParamLimits

0xf518,	// (0x0000f518) lc0_stat_indi_pane_g

0xeeb7,	// (0x0000eeb7) lc0_uni_indicator_pane_ParamLimits

0xeeb7,	// (0x0000eeb7) lc0_uni_indicator_pane

0xeec4,	// (0x0000eec4) ls0_title_pane_g1_ParamLimits

0xeec4,	// (0x0000eec4) ls0_title_pane_g1

0xeed8,	// (0x0000eed8) ls0_title_pane_t1_ParamLimits

0xeed8,	// (0x0000eed8) ls0_title_pane_t1

0xef06,	// (0x0000ef06) lc0_uni_indicator_pane_g1_ParamLimits

0xef06,	// (0x0000ef06) lc0_uni_indicator_pane_g1

0x9b04,	// (0x00009b04) lc0_stat_clock_pane_t1

0x0024,	// (0x00000024) main_ai5_pane

0x9b12,	// (0x00009b12) ai5_sk_pane_ParamLimits

0x9b12,	// (0x00009b12) ai5_sk_pane

0xef2d,	// (0x0000ef2d) cell_ai5_widget_pane_ParamLimits

0xef2d,	// (0x0000ef2d) cell_ai5_widget_pane

0x9bd1,	// (0x00009bd1) aid_size_cell_widget_grid

0x9be7,	// (0x00009be7) bg_ai5_widget_pane_ParamLimits

0x9be7,	// (0x00009be7) bg_ai5_widget_pane

0x9c5b,	// (0x00009c5b) cell_ai5_widget_pane_g2

0x9c6b,	// (0x00009c6b) cell_ai5_widget_pane_g3

0x9c82,	// (0x00009c82) cell_ai5_widget_pane_g4

0x9c8e,	// (0x00009c8e) cell_ai5_widget_pane_g5

0x9c9a,	// (0x00009c9a) cell_ai5_widget_pane_g6

0x9ca6,	// (0x00009ca6) cell_ai5_widget_pane_g7

0x9cee,	// (0x00009cee) cell_ai5_widget_pane_t1_ParamLimits

0x9cee,	// (0x00009cee) cell_ai5_widget_pane_t1

0x9d0b,	// (0x00009d0b) cell_ai5_widget_pane_t2_ParamLimits

0x9d0b,	// (0x00009d0b) cell_ai5_widget_pane_t2

0x9d23,	// (0x00009d23) cell_ai5_widget_pane_t3_ParamLimits

0x9d23,	// (0x00009d23) cell_ai5_widget_pane_t3

0x9d3b,	// (0x00009d3b) cell_ai5_widget_pane_t4_ParamLimits

0x9d3b,	// (0x00009d3b) cell_ai5_widget_pane_t4

0x9d58,	// (0x00009d58) cell_ai5_widget_pane_t5_ParamLimits

0x9d58,	// (0x00009d58) cell_ai5_widget_pane_t5

0x9d77,	// (0x00009d77) cell_ai5_widget_pane_t6_ParamLimits

0x9d77,	// (0x00009d77) cell_ai5_widget_pane_t6

0x9d89,	// (0x00009d89) cell_ai5_widget_pane_t7_ParamLimits

0x9d89,	// (0x00009d89) cell_ai5_widget_pane_t7

0x9da2,	// (0x00009da2) cell_ai5_widget_pane_t8_ParamLimits

0x9da2,	// (0x00009da2) cell_ai5_widget_pane_t8

0x0009,

0xb4a8,	// (0x0000b4a8) cell_ai5_widget_pane_t_ParamLimits

0xb4a8,	// (0x0000b4a8) cell_ai5_widget_pane_t

0x9df6,	// (0x00009df6) grid_ai5_widget_pane

0x139c,	// (0x0000139c) highlight_cell_ai5_widget_pane_ParamLimits

0x139c,	// (0x0000139c) highlight_cell_ai5_widget_pane

0xef93,	// (0x0000ef93) ai5_sk_left_pane

0xef9d,	// (0x0000ef9d) ai5_sk_middle_pane

0xefa7,	// (0x0000efa7) ai5_sk_right_pane

0x9e2b,	// (0x00009e2b) bg_ai5_widget_pane_g1_ParamLimits

0x9e2b,	// (0x00009e2b) bg_ai5_widget_pane_g1

0x9e37,	// (0x00009e37) bg_ai5_widget_pane_g2_ParamLimits

0x9e37,	// (0x00009e37) bg_ai5_widget_pane_g2

0x9e43,	// (0x00009e43) bg_ai5_widget_pane_g3_ParamLimits

0x9e43,	// (0x00009e43) bg_ai5_widget_pane_g3

0x9e4f,	// (0x00009e4f) bg_ai5_widget_pane_g4_ParamLimits

0x9e4f,	// (0x00009e4f) bg_ai5_widget_pane_g4

0x9e5b,	// (0x00009e5b) bg_ai5_widget_pane_g5_ParamLimits

0x9e5b,	// (0x00009e5b) bg_ai5_widget_pane_g5

0x9e67,	// (0x00009e67) bg_ai5_widget_pane_g6_ParamLimits

0x9e67,	// (0x00009e67) bg_ai5_widget_pane_g6

0x9e73,	// (0x00009e73) bg_ai5_widget_pane_g7_ParamLimits

0x9e73,	// (0x00009e73) bg_ai5_widget_pane_g7

0x9e7f,	// (0x00009e7f) bg_ai5_widget_pane_g8_ParamLimits

0x9e7f,	// (0x00009e7f) bg_ai5_widget_pane_g8

0x9e8b,	// (0x00009e8b) bg_ai5_widget_pane_g9_ParamLimits

0x9e8b,	// (0x00009e8b) bg_ai5_widget_pane_g9

0x0008,

0xb4bd,	// (0x0000b4bd) bg_ai5_widget_pane_g_ParamLimits

0xb4bd,	// (0x0000b4bd) bg_ai5_widget_pane_g

0x9ebd,	// (0x00009ebd) cell_shortcut_ai5_widget_pane_ParamLimits

0x9ebd,	// (0x00009ebd) cell_shortcut_ai5_widget_pane

0x2617,	// (0x00002617) bg_cell_shortcut_ai5_widget_pane

0x9ece,	// (0x00009ece) cell_grid_ai5_widget_pane_g1

0x2617,	// (0x00002617) highlight_cell_shortcut_ai5_widget_pane

0x370e,	// (0x0000370e) ai5_sk_left_pane_g1

0x9ed7,	// (0x00009ed7) ai5_sk_left_pane_g2

0x9edf,	// (0x00009edf) ai5_sk_left_pane_g3

0x9ee7,	// (0x00009ee7) ai5_sk_left_pane_g4

0x0003,

0xb4d0,	// (0x0000b4d0) ai5_sk_left_pane_g

0x9eef,	// (0x00009eef) ai5_sk_left_pane_t1

0x3706,	// (0x00003706) ai5_sk_right_pane_g1

0x9efd,	// (0x00009efd) ai5_sk_right_pane_g2

0x9f05,	// (0x00009f05) ai5_sk_right_pane_g3

0x9f0d,	// (0x00009f0d) ai5_sk_right_pane_g4

0x0003,

0xb4d9,	// (0x0000b4d9) ai5_sk_right_pane_g

0x9f15,	// (0x00009f15) ai5_sk_right_pane_t1

0x3706,	// (0x00003706) ai5_sk_middle_pane_g1

0x370e,	// (0x0000370e) ai5_sk_middle_pane_g2

0x3726,	// (0x00003726) ai5_sk_middle_pane_g3

0x9f05,	// (0x00009f05) ai5_sk_middle_pane_g4

0x9edf,	// (0x00009edf) ai5_sk_middle_pane_g5

0x9f23,	// (0x00009f23) ai5_sk_middle_pane_g6

0xefb1,	// (0x0000efb1) ai5_sk_middle_pane_g7

0x0006,

0xf51d,	// (0x0000f51d) ai5_sk_middle_pane_g

0xcc8a,	// (0x0000cc8a) aid_touch_area_size_lc0_ParamLimits

0xcc8a,	// (0x0000cc8a) aid_touch_area_size_lc0

0x6f0b,	// (0x00006f0b) cell_hwr_candidate_pane_t1_ParamLimits

0x31b0,	// (0x000031b0) aid_touch_navi_pane

0xcf16,	// (0x0000cf16) status_dt_navi_pane_ParamLimits

0xcf16,	// (0x0000cf16) status_dt_navi_pane

0xcf2e,	// (0x0000cf2e) status_dt_sta_pane_ParamLimits

0xcf2e,	// (0x0000cf2e) status_dt_sta_pane

0xefb9,	// (0x0000efb9) dt_sta_controll_pane

0xefc6,	// (0x0000efc6) dt_sta_indi_pane

0xefd3,	// (0x0000efd3) dt_sta_title_pane

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane_ParamLimits

0x083b,	// (0x0000083b) bg_dt_sta_indi_pane

0xefe5,	// (0x0000efe5) dt_sta_battery_pane

0xefed,	// (0x0000efed) dt_sta_indi_pane_g1

0x9f75,	// (0x00009f75) dt_sta_indi_pane_g2

0x9f7e,	// (0x00009f7e) dt_sta_indi_pane_g3

0x0002,

0xf52c,	// (0x0000f52c) dt_sta_indi_pane_g

0x9f87,	// (0x00009f87) dt_sta_signal_pane

0x139c,	// (0x0000139c) bg_dt_sta_title_pane_ParamLimits

0x139c,	// (0x0000139c) bg_dt_sta_title_pane

0x9f90,	// (0x00009f90) dt_sta_title_pane_g1

0x9f98,	// (0x00009f98) dt_sta_title_pane_t1_ParamLimits

0x9f98,	// (0x00009f98) dt_sta_title_pane_t1

0x0024,	// (0x00000024) bg_dt_sta_control_pane

0xeff6,	// (0x0000eff6) dt_sta_controll_pane_g1

0x9fb6,	// (0x00009fb6) bg_dt_sta_title_pane_g1

0x9fbf,	// (0x00009fbf) bg_dt_sta_title_pane_g2

0x9fc8,	// (0x00009fc8) bg_dt_sta_title_pane_g3

0x0002,

0xb4f8,	// (0x0000b4f8) bg_dt_sta_title_pane_g

0x66cc,	// (0x000066cc) bg_dt_sta_indi_pane_g1

0x9fd1,	// (0x00009fd1) dt_sta_signal_pane_g1

0x9fd9,	// (0x00009fd9) dt_sta_signal_pane_g2

0x0001,

0xb4ff,	// (0x0000b4ff) dt_sta_signal_pane_g

0x9fe1,	// (0x00009fe1) dt_sta_battery_pane_g1

0x9fea,	// (0x00009fea) dt_sta_battery_pane_t1

0x66cc,	// (0x000066cc) bg_dt_sta_control_pane_g1

0x1f46,	// (0x00001f46) fep_china_uni_eep_pane

0x1f4e,	// (0x00001f4e) fep_china_uni_entry_pane_ParamLimits

0x1f5e,	// (0x00001f5e) popup_fep_china_uni_window_g1_ParamLimits

0x1f6e,	// (0x00001f6e) popup_fep_china_uni_window_g2_ParamLimits

0x1f6e,	// (0x00001f6e) popup_fep_china_uni_window_g2

0x0001,

0xad86,	// (0x0000ad86) popup_fep_china_uni_window_g_ParamLimits

0xad86,	// (0x0000ad86) popup_fep_china_uni_window_g

0x9ff9,	// (0x00009ff9) fep_china_uni_eep_pane_g1

0xa001,	// (0x0000a001) fep_china_uni_eep_pane_t1

0x9a53,	// (0x00009a53) aid_touch_area_size_smil_player

0x3300,	// (0x00003300) lc0_clock_pane

0x34e7,	// (0x000034e7) status_pane_g5_ParamLimits

0x34e7,	// (0x000034e7) status_pane_g5

0xc73d,	// (0x0000c73d) popup_keymap_window

0x34a5,	// (0x000034a5) status_icon_pane

0x9c6b,	// (0x00009c6b) cell_ai5_widget_pane_g3_ParamLimits

0x9c82,	// (0x00009c82) cell_ai5_widget_pane_g4_ParamLimits

0x9c8e,	// (0x00009c8e) cell_ai5_widget_pane_g5_ParamLimits

0x9cb2,	// (0x00009cb2) cell_ai5_widget_pane_g8_ParamLimits

0x9cb2,	// (0x00009cb2) cell_ai5_widget_pane_g8

0x9cc6,	// (0x00009cc6) cell_ai5_widget_pane_g9_ParamLimits

0x9cc6,	// (0x00009cc6) cell_ai5_widget_pane_g9

0x9cda,	// (0x00009cda) cell_ai5_widget_pane_g10_ParamLimits

0x9cda,	// (0x00009cda) cell_ai5_widget_pane_g10

0xa010,	// (0x0000a010) status_icon_pane_g1

0x0024,	// (0x00000024) bg_popup_sub_pane_cp13

0xa018,	// (0x0000a018) popup_keymap_window_t1

0xc437,	// (0x0000c437) control_pane_g6_ParamLimits

0xc437,	// (0x0000c437) control_pane_g6

0xc444,	// (0x0000c444) control_pane_g7_ParamLimits

0xc444,	// (0x0000c444) control_pane_g7

0xc451,	// (0x0000c451) control_pane_g8_ParamLimits

0xc451,	// (0x0000c451) control_pane_g8

0xefb9,	// (0x0000efb9) dt_sta_controll_pane_ParamLimits

0xefc6,	// (0x0000efc6) dt_sta_indi_pane_ParamLimits

0xefd3,	// (0x0000efd3) dt_sta_title_pane_ParamLimits

0x0d59,	// (0x00000d59) aid_size_touch_scroll_bar_cale

0x02b1,	// (0x000002b1) popup_discreet_window_ParamLimits

0x02b1,	// (0x000002b1) popup_discreet_window

0xb6b8,	// (0x0000b6b8) popup_sk_window

0x3f78,	// (0x00003f78) bg_popup_sub_pane_cp28_ParamLimits

0x3f78,	// (0x00003f78) bg_popup_sub_pane_cp28

0xa026,	// (0x0000a026) popup_discreet_window_g1_ParamLimits

0xa026,	// (0x0000a026) popup_discreet_window_g1

0xa046,	// (0x0000a046) popup_discreet_window_t1_ParamLimits

0xa046,	// (0x0000a046) popup_discreet_window_t1

0xa064,	// (0x0000a064) popup_discreet_window_t2_ParamLimits

0xa064,	// (0x0000a064) popup_discreet_window_t2

0x0002,

0xb504,	// (0x0000b504) popup_discreet_window_t_ParamLimits

0xb504,	// (0x0000b504) popup_discreet_window_t

0xa0b6,	// (0x0000a0b6) popup_sk_window_g1

0xa0c0,	// (0x0000a0c0) popup_sk_window_g2

0x0001,

0xb50b,	// (0x0000b50b) popup_sk_window_g

0xa0c8,	// (0x0000a0c8) popup_sk_window_t1

0xa0d6,	// (0x0000a0d6) popup_sk_window_t1_copy1

0x9c5b,	// (0x00009c5b) cell_ai5_widget_pane_g2_ParamLimits

0x9db4,	// (0x00009db4) cell_ai5_widget_pane_t9_ParamLimits

0x9db4,	// (0x00009db4) cell_ai5_widget_pane_t9

0x0024,	// (0x00000024) main_fep_fshwr2_pane

0xefff,	// (0x0000efff) aid_fshwr2_btn_pane

0xf010,	// (0x0000f010) aid_fshwr2_syb_pane

0xf021,	// (0x0000f021) aid_fshwr2_txt_pane

0xf02d,	// (0x0000f02d) fshwr2_func_candi_pane

0xf04c,	// (0x0000f04c) fshwr2_hwr_syb_pane

0xf067,	// (0x0000f067) fshwr2_icf_pane

0x0024,	// (0x00000024) fshwr2_icf_bg_pane

0xa156,	// (0x0000a156) fshwr2_icf_pane_t1_ParamLimits

0xa156,	// (0x0000a156) fshwr2_icf_pane_t1

0x1d5d,	// (0x00001d5d) fshwr2_func_candi_pane_g1

0xf093,	// (0x0000f093) fshwr2_func_candi_row_pane_ParamLimits

0xf093,	// (0x0000f093) fshwr2_func_candi_row_pane

0xf0b6,	// (0x0000f0b6) cell_fshwr2_syb_pane_ParamLimits

0xf0b6,	// (0x0000f0b6) cell_fshwr2_syb_pane

0x6b5e,	// (0x00006b5e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6b5e,	// (0x00006b5e) fshwr2_hwr_syb_pane_g1

0x0024,	// (0x00000024) bg_popup_call_pane_cp01

0xf0cc,	// (0x0000f0cc) fshwr2_func_candi_cell_pane_ParamLimits

0xf0cc,	// (0x0000f0cc) fshwr2_func_candi_cell_pane

0xf117,	// (0x0000f117) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xf117,	// (0x0000f117) fshwr2_func_candi_cell_bg_pane

0xf123,	// (0x0000f123) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf123,	// (0x0000f123) fshwr2_func_candi_cell_pane_g1

0xf15a,	// (0x0000f15a) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf15a,	// (0x0000f15a) fshwr2_func_candi_cell_pane_t1

0x0024,	// (0x00000024) bg_button_pane_cp08

0xa226,	// (0x0000a226) cell_fshwr2_syb_bg_pane

0xf175,	// (0x0000f175) cell_fshwr2_syb_bg_pane_g1

0xf17d,	// (0x0000f17d) cell_fshwr2_syb_bg_pane_t1

0x139c,	// (0x0000139c) main_tmo_pane

0xd274,	// (0x0000d274) uni_indicator_pane_g1_ParamLimits

0xd28a,	// (0x0000d28a) uni_indicator_pane_g2_ParamLimits

0xd2a0,	// (0x0000d2a0) uni_indicator_pane_g3_ParamLimits

0x4c2a,	// (0x00004c2a) uni_indicator_pane_g4_ParamLimits

0x4c2a,	// (0x00004c2a) uni_indicator_pane_g4

0x4c3e,	// (0x00004c3e) uni_indicator_pane_g5_ParamLimits

0x4c3e,	// (0x00004c3e) uni_indicator_pane_g5

0x4c3e,	// (0x00004c3e) uni_indicator_pane_g6_ParamLimits

0x4c3e,	// (0x00004c3e) uni_indicator_pane_g6

0xf3e6,	// (0x0000f3e6) uni_indicator_pane_g_ParamLimits

0xdf7f,	// (0x0000df7f) popup_tmo_note_window_ParamLimits

0xdf7f,	// (0x0000df7f) popup_tmo_note_window

0x139c,	// (0x0000139c) fshwr2_bg_pane

0xf14b,	// (0x0000f14b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf14b,	// (0x0000f14b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xf533,	// (0x0000f533) fshwr2_func_candi_cell_pane_g_ParamLimits

0xf533,	// (0x0000f533) fshwr2_func_candi_cell_pane_g

0x66cc,	// (0x000066cc) bg_popup_window_pane_cp01

0xa245,	// (0x0000a245) bg_popup_window_pane_g1_cp01

0xa24e,	// (0x0000a24e) bg_popup_window_pane_cp22_ParamLimits

0xa24e,	// (0x0000a24e) bg_popup_window_pane_cp22

0xa25c,	// (0x0000a25c) listscroll_tmo_link_pane_ParamLimits

0xa25c,	// (0x0000a25c) listscroll_tmo_link_pane

0xa29c,	// (0x0000a29c) popup_tmo_note_window_g1_ParamLimits

0xa29c,	// (0x0000a29c) popup_tmo_note_window_g1

0xa2a9,	// (0x0000a2a9) tmo_note_info_pane_ParamLimits

0xa2a9,	// (0x0000a2a9) tmo_note_info_pane

0xf18c,	// (0x0000f18c) list_tmo_note_info_pane_g1_ParamLimits

0xf18c,	// (0x0000f18c) list_tmo_note_info_pane_g1

0xa2da,	// (0x0000a2da) list_tmo_note_info_pane_g2_ParamLimits

0xa2da,	// (0x0000a2da) list_tmo_note_info_pane_g2

0x0001,

0xf538,	// (0x0000f538) list_tmo_note_info_pane_g_ParamLimits

0xf538,	// (0x0000f538) list_tmo_note_info_pane_g

0xa2f6,	// (0x0000a2f6) list_tmo_note_info_text_pane_ParamLimits

0xa2f6,	// (0x0000a2f6) list_tmo_note_info_text_pane

0xa377,	// (0x0000a377) list_tmo_link_pane

0xa384,	// (0x0000a384) scroll_pane_cp20

0xa391,	// (0x0000a391) list_single_tmo_link_pane_ParamLimits

0xa391,	// (0x0000a391) list_single_tmo_link_pane

0xa3a1,	// (0x0000a3a1) list_single_tmo_link_pane_t1

0xa3af,	// (0x0000a3af) list_tmo_note_info_text_pane_t1_ParamLimits

0xa3af,	// (0x0000a3af) list_tmo_note_info_text_pane_t1

0xbffb,	// (0x0000bffb) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbffb,	// (0x0000bffb) aid_size_touch_scroll_bar_cp01

0xbf2b,	// (0x0000bf2b) aid_size_touch_slider_marker

0xb6a8,	// (0x0000b6a8) popup_settings_window_ParamLimits

0xb6a8,	// (0x0000b6a8) popup_settings_window

0x2bd1,	// (0x00002bd1) popup_candi_list_indi_window

0x31b0,	// (0x000031b0) aid_touch_navi_pane_ParamLimits

0x84f3,	// (0x000084f3) rs_clock_indi_pane

0x84fc,	// (0x000084fc) sctrl_sk_bottom_pane_ParamLimits

0x850d,	// (0x0000850d) sctrl_sk_top_pane_ParamLimits

0x8d4e,	// (0x00008d4e) popup_fep_tooltip_window

0x9bd1,	// (0x00009bd1) aid_size_cell_widget_grid_ParamLimits

0x9c46,	// (0x00009c46) cell_ai5_widget_pane_g1_ParamLimits

0x9c46,	// (0x00009c46) cell_ai5_widget_pane_g1

0x9c9a,	// (0x00009c9a) cell_ai5_widget_pane_g6_ParamLimits

0x9ca6,	// (0x00009ca6) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xb493,	// (0x0000b493) cell_ai5_widget_pane_g_ParamLimits

0xb493,	// (0x0000b493) cell_ai5_widget_pane_g

0x9dd8,	// (0x00009dd8) cell_ai5_widget_pane_t10_ParamLimits

0x9dd8,	// (0x00009dd8) cell_ai5_widget_pane_t10

0x9df6,	// (0x00009df6) grid_ai5_widget_pane_ParamLimits

0x9e97,	// (0x00009e97) cell_contacts_ai5_widget_pane_ParamLimits

0x9e97,	// (0x00009e97) cell_contacts_ai5_widget_pane

0xa079,	// (0x0000a079) popup_discreet_window_t3_ParamLimits

0xa079,	// (0x0000a079) popup_discreet_window_t3

0xf07f,	// (0x0000f07f) popup_fshwr2_char_preview_window_ParamLimits

0xf07f,	// (0x0000f07f) popup_fshwr2_char_preview_window

0xf1a3,	// (0x0000f1a3) tmo_note_info_pane_t1

0xf1b8,	// (0x0000f1b8) tmo_note_info_pane_t2

0xf1cf,	// (0x0000f1cf) tmo_note_info_pane_t3

0xa353,	// (0x0000a353) tmo_note_info_pane_t4

0xa365,	// (0x0000a365) tmo_note_info_pane_t5

0x0004,

0xf53d,	// (0x0000f53d) tmo_note_info_pane_t

0xa377,	// (0x0000a377) list_tmo_link_pane_ParamLimits

0xa384,	// (0x0000a384) scroll_pane_cp20_ParamLimits

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp01

0xa3c8,	// (0x0000a3c8) popup_fshwr2_char_preview_window_t1

0xa3d6,	// (0x0000a3d6) popup_candi_list_indi_window_g1

0xa3df,	// (0x0000a3df) bg_cell_contacts_ai5_widget_pane

0xa3eb,	// (0x0000a3eb) cell_contacts_ai5_widget_pane_g1

0x71d7,	// (0x000071d7) cell_contacts_ai5_widget_pane_g2

0xa400,	// (0x0000a400) cell_contacts_ai5_widget_pane_g3

0x0002,

0xb525,	// (0x0000b525) cell_contacts_ai5_widget_pane_g

0xa40c,	// (0x0000a40c) cell_contacts_ai5_widget_pane_t1

0x139c,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa483,	// (0x0000a483) settings_container_pane

0x2617,	// (0x00002617) listscroll_set_pane_copy1

0x5a38,	// (0x00005a38) scroll_pane_cp121_copy1

0x3d29,	// (0x00003d29) set_content_pane_copy1

0xa48f,	// (0x0000a48f) aid_height_set_list_copy1_ParamLimits

0xa48f,	// (0x0000a48f) aid_height_set_list_copy1

0x4f26,	// (0x00004f26) aid_size_parent_copy1_ParamLimits

0x4f26,	// (0x00004f26) aid_size_parent_copy1

0xa49b,	// (0x0000a49b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa49b,	// (0x0000a49b) button_value_adjust_pane_cp6_copy1

0x2ba9,	// (0x00002ba9) list_highlight_pane_cp2_copy1_ParamLimits

0x2ba9,	// (0x00002ba9) list_highlight_pane_cp2_copy1

0xa4af,	// (0x0000a4af) list_set_pane_copy1_ParamLimits

0xa4af,	// (0x0000a4af) list_set_pane_copy1

0xa41e,	// (0x0000a41e) main_pane_set_t1_copy1_ParamLimits

0xa41e,	// (0x0000a41e) main_pane_set_t1_copy1

0xa458,	// (0x0000a458) main_pane_set_t2_copy1_ParamLimits

0xa458,	// (0x0000a458) main_pane_set_t2_copy1

0xa55c,	// (0x0000a55c) main_pane_set_t3_copy1

0xa56a,	// (0x0000a56a) main_pane_set_t4_copy1

0xa477,	// (0x0000a477) set_content_pane_g1_copy1_ParamLimits

0xa477,	// (0x0000a477) set_content_pane_g1_copy1

0xa578,	// (0x0000a578) setting_code_pane_copy1

0xa580,	// (0x0000a580) setting_slider_graphic_pane_copy1

0xa580,	// (0x0000a580) setting_slider_pane_copy1

0xa580,	// (0x0000a580) setting_text_pane_copy1

0xa580,	// (0x0000a580) setting_volume_pane_copy1

0xa578,	// (0x0000a578) settings_code_pane_cp2_copy1

0xa588,	// (0x0000a588) settings_code_pane_cp_copy1_ParamLimits

0xa588,	// (0x0000a588) settings_code_pane_cp_copy1

0xa59c,	// (0x0000a59c) volume_set_pane_copy1

0xa5a4,	// (0x0000a5a4) volume_set_pane_g10_copy1

0xa5ac,	// (0x0000a5ac) volume_set_pane_g1_copy1

0xa5b4,	// (0x0000a5b4) volume_set_pane_g2_copy1

0xa5bc,	// (0x0000a5bc) volume_set_pane_g3_copy1

0xa5c4,	// (0x0000a5c4) volume_set_pane_g4_copy1

0xa5cc,	// (0x0000a5cc) volume_set_pane_g5_copy1

0xa5d4,	// (0x0000a5d4) volume_set_pane_g6_copy1

0xa5dc,	// (0x0000a5dc) volume_set_pane_g7_copy1

0xa5e4,	// (0x0000a5e4) volume_set_pane_g8_copy1

0xa5ec,	// (0x0000a5ec) volume_set_pane_g9_copy1

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1_ParamLimits

0x0507,	// (0x00000507) bg_set_opt_pane_cp_copy1

0xa5f4,	// (0x0000a5f4) setting_slider_pane_t1_copy1_ParamLimits

0xa5f4,	// (0x0000a5f4) setting_slider_pane_t1_copy1

0xa612,	// (0x0000a612) setting_slider_pane_t2_copy1_ParamLimits

0xa612,	// (0x0000a612) setting_slider_pane_t2_copy1

0xa62c,	// (0x0000a62c) setting_slider_pane_t3_copy1_ParamLimits

0xa62c,	// (0x0000a62c) setting_slider_pane_t3_copy1

0xa644,	// (0x0000a644) slider_set_pane_copy1_ParamLimits

0xa644,	// (0x0000a644) slider_set_pane_copy1

0x14bf,	// (0x000014bf) set_opt_bg_pane_g1_copy2

0x14c7,	// (0x000014c7) set_opt_bg_pane_g2_copy2

0xa65a,	// (0x0000a65a) set_opt_bg_pane_g3_copy2

0x14d7,	// (0x000014d7) set_opt_bg_pane_g4_copy2

0x14df,	// (0x000014df) set_opt_bg_pane_g5_copy2

0x14e7,	// (0x000014e7) set_opt_bg_pane_g6_copy2

0xa664,	// (0x0000a664) set_opt_bg_pane_g7_copy2

0xa66c,	// (0x0000a66c) set_opt_bg_pane_g8_copy2

0xa676,	// (0x0000a676) set_opt_bg_pane_g9_copy2

0xa680,	// (0x0000a680) aid_size_touch_slider_mark_copy1_ParamLimits

0xa680,	// (0x0000a680) aid_size_touch_slider_mark_copy1

0xa694,	// (0x0000a694) slider_set_pane_g1_copy1

0xa69d,	// (0x0000a69d) slider_set_pane_g2_copy1

0x4e8f,	// (0x00004e8f) slider_set_pane_g3_copy1_ParamLimits

0x4e8f,	// (0x00004e8f) slider_set_pane_g3_copy1

0x4ea3,	// (0x00004ea3) slider_set_pane_g4_copy1_ParamLimits

0x4ea3,	// (0x00004ea3) slider_set_pane_g4_copy1

0x4ebb,	// (0x00004ebb) slider_set_pane_g5_copy1_ParamLimits

0x4ebb,	// (0x00004ebb) slider_set_pane_g5_copy1

0x4e8f,	// (0x00004e8f) slider_set_pane_g6_copy1_ParamLimits

0x4e8f,	// (0x00004e8f) slider_set_pane_g6_copy1

0xa6a5,	// (0x0000a6a5) slider_set_pane_g7_copy1_ParamLimits

0xa6a5,	// (0x0000a6a5) slider_set_pane_g7_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp2_copy1

0xa6bb,	// (0x0000a6bb) setting_slider_graphic_pane_g1_copy1

0xa6c4,	// (0x0000a6c4) setting_slider_graphic_pane_t1_copy1

0xa6d4,	// (0x0000a6d4) setting_slider_graphic_pane_t2_copy1

0xa6e4,	// (0x0000a6e4) slider_set_pane_cp_copy1

0xa6f4,	// (0x0000a6f4) input_focus_pane_cp1_copy1

0xa6fd,	// (0x0000a6fd) list_set_text_pane_copy1

0xa705,	// (0x0000a705) setting_text_pane_g1_copy1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1

0xa6f4,	// (0x0000a6f4) input_focus_pane_cp2_copy1

0xa705,	// (0x0000a705) setting_code_pane_g1_copy1

0xa70e,	// (0x0000a70e) setting_code_pane_t1_copy1

0xa71c,	// (0x0000a71c) list_set_graphic_pane_copy1

0x0293,	// (0x00000293) bg_set_opt_pane_cp4_copy1

0x2312,	// (0x00002312) list_set_graphic_pane_g1_copy1_ParamLimits

0x2312,	// (0x00002312) list_set_graphic_pane_g1_copy1

0xa72f,	// (0x0000a72f) list_set_graphic_pane_g2_copy1

0x232a,	// (0x0000232a) list_set_graphic_pane_t1_copy1_ParamLimits

0x232a,	// (0x0000232a) list_set_graphic_pane_t1_copy1

0x66cc,	// (0x000066cc) rs_clock_indi_pane_g1

0xa737,	// (0x0000a737) rs_clock_indi_pane_t1

0xa745,	// (0x0000a745) rs_indi_pane

0xa74d,	// (0x0000a74d) rs_indi_pane_g1

0xa756,	// (0x0000a756) rs_indi_pane_g2

0xa75f,	// (0x0000a75f) rs_indi_pane_g3

0x0002,

0xb52c,	// (0x0000b52c) rs_indi_pane_g

0x2617,	// (0x00002617) bg_popup_preview_window_pane_cp03

0xa768,	// (0x0000a768) popup_fep_tooltip_window_t1

0x78d5,	// (0x000078d5) popup_note2_window_g2_ParamLimits

0x78d5,	// (0x000078d5) popup_note2_window_g2

0x0001,

0xb2c5,	// (0x0000b2c5) popup_note2_window_g_ParamLimits

0xb2c5,	// (0x0000b2c5) popup_note2_window_g

0x7ecb,	// (0x00007ecb) bg_popup_sub_pane_cp11_ParamLimits

0x7ed8,	// (0x00007ed8) cell_ai3_links_pane_g1_ParamLimits

0x7eef,	// (0x00007eef) cell_ai3_links_pane_t1

0x05f1,	// (0x000005f1) set_text_pane_t1_copy1_ParamLimits

0x2528,	// (0x00002528) cell_graphic_popup_pane_cp2_ParamLimits

0x2528,	// (0x00002528) cell_graphic_popup_pane_cp2

0xa776,	// (0x0000a776) cell_graphic_popup_pane_g1_cp2

0x0b6c,	// (0x00000b6c) cell_graphic_popup_pane_g2_cp2

0xa77e,	// (0x0000a77e) cell_graphic_popup_pane_g3_cp2

0xa786,	// (0x0000a786) cell_graphic_popup_pane_t2_cp2

0x0b7d,	// (0x00000b7d) grid_highlight_pane_cp3_cp2

0x1a3a,	// (0x00001a3a) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x139c,	// (0x0000139c) main_tmo_pane_ParamLimits

0xdf73,	// (0x0000df73) popup_tmo_big_image_note_window

0x9c35,	// (0x00009c35) cell_ai5_widget_list_pane

0x9c3d,	// (0x00009c3d) cell_ai5_widget_lrg_icon_pane

0xf1a3,	// (0x0000f1a3) tmo_note_info_pane_t1_ParamLimits

0xf1b8,	// (0x0000f1b8) tmo_note_info_pane_t2_ParamLimits

0xf1cf,	// (0x0000f1cf) tmo_note_info_pane_t3_ParamLimits

0xa353,	// (0x0000a353) tmo_note_info_pane_t4_ParamLimits

0xa365,	// (0x0000a365) tmo_note_info_pane_t5_ParamLimits

0xf53d,	// (0x0000f53d) tmo_note_info_pane_t_ParamLimits

0xa483,	// (0x0000a483) settings_container_pane_ParamLimits

0xa6ec,	// (0x0000a6ec) indicator_popup_pane_cp5

0xa6ec,	// (0x0000a6ec) indicator_popup_pane_cp6

0xa71c,	// (0x0000a71c) list_set_graphic_pane_copy1_ParamLimits

0x0024,	// (0x00000024) bg_popup_window_pane_cp23

0xa794,	// (0x0000a794) popup_tmo_big_image_note_window_g1

0xa79e,	// (0x0000a79e) popup_tmo_big_image_note_window_t1

0xa7ae,	// (0x0000a7ae) popup_tmo_big_image_note_window_t2

0xa7be,	// (0x0000a7be) popup_tmo_big_image_note_window_t3

0x0002,

0xb533,	// (0x0000b533) popup_tmo_big_image_note_window_t

0x66cc,	// (0x000066cc) cell_ai5_widget_lrg_icon_pane_g1

0xa7ce,	// (0x0000a7ce) cell_ai5_widget_lrg_icon_pane_t1

0xa7dc,	// (0x0000a7dc) cell_ai5_widget_list_row_pane_ParamLimits

0xa7dc,	// (0x0000a7dc) cell_ai5_widget_list_row_pane

0xa7f3,	// (0x0000a7f3) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa7f3,	// (0x0000a7f3) cell_ai5_widget_list_row_pane_g1

0xa800,	// (0x0000a800) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa800,	// (0x0000a800) cell_ai5_widget_list_row_pane_t1

0xa831,	// (0x0000a831) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa831,	// (0x0000a831) cell_ai5_widget_list_row_pane_t2

0x0002,

0xb53a,	// (0x0000b53a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xb53a,	// (0x0000b53a) cell_ai5_widget_list_row_pane_t

0x0024,	// (0x00000024) main_fep_vtchi_ss_pane

0xa875,	// (0x0000a875) popup_fep_char_pre_window

0xa87d,	// (0x0000a87d) popup_fep_ituss_window

0xf1e4,	// (0x0000f1e4) popup_fep_vkbss_window

0xf1f1,	// (0x0000f1f1) grid_vkbss_keypad_pane_ParamLimits

0xf1f1,	// (0x0000f1f1) grid_vkbss_keypad_pane

0xa8d8,	// (0x0000a8d8) ituss_keypad_pane

0xa8f3,	// (0x0000a8f3) aid_vkbss_key_offset_ParamLimits

0xa8f3,	// (0x0000a8f3) aid_vkbss_key_offset

0xf201,	// (0x0000f201) cell_vkbss_key_pane_ParamLimits

0xf201,	// (0x0000f201) cell_vkbss_key_pane

0xa915,	// (0x0000a915) bg_cell_vkbss_key_g1_ParamLimits

0xa915,	// (0x0000a915) bg_cell_vkbss_key_g1

0xf217,	// (0x0000f217) cell_vkbss_key_3p_pane_ParamLimits

0xf217,	// (0x0000f217) cell_vkbss_key_3p_pane

0xf231,	// (0x0000f231) cell_vkbss_key_g1_ParamLimits

0xf231,	// (0x0000f231) cell_vkbss_key_g1

0xf24b,	// (0x0000f24b) cell_vkbss_key_t1_ParamLimits

0xf24b,	// (0x0000f24b) cell_vkbss_key_t1

0xa974,	// (0x0000a974) cell_ituss_key_pane_ParamLimits

0xa974,	// (0x0000a974) cell_ituss_key_pane

0xa985,	// (0x0000a985) bg_cell_ituss_key_g1_ParamLimits

0xa985,	// (0x0000a985) bg_cell_ituss_key_g1

0xa991,	// (0x0000a991) cell_ituss_key_pane_g1_ParamLimits

0xa991,	// (0x0000a991) cell_ituss_key_pane_g1

0xa9ab,	// (0x0000a9ab) cell_ituss_key_pane_g2_ParamLimits

0xa9ab,	// (0x0000a9ab) cell_ituss_key_pane_g2

0x0002,

0xb541,	// (0x0000b541) cell_ituss_key_pane_g_ParamLimits

0xb541,	// (0x0000b541) cell_ituss_key_pane_g

0xa9e9,	// (0x0000a9e9) cell_ituss_key_t1_ParamLimits

0xa9e9,	// (0x0000a9e9) cell_ituss_key_t1

0xaa23,	// (0x0000aa23) cell_ituss_key_t2_ParamLimits

0xaa23,	// (0x0000aa23) cell_ituss_key_t2

0xaa54,	// (0x0000aa54) cell_ituss_key_t3_ParamLimits

0xaa54,	// (0x0000aa54) cell_ituss_key_t3

0xaa23,	// (0x0000aa23) cell_ituss_key_t4_ParamLimits

0xaa23,	// (0x0000aa23) cell_ituss_key_t4

0x0004,

0xb548,	// (0x0000b548) cell_ituss_key_t_ParamLimits

0xb548,	// (0x0000b548) cell_ituss_key_t

0xaa97,	// (0x0000aa97) cell_vkbss_key_3p_pane_g1

0xaa9f,	// (0x0000aa9f) cell_vkbss_key_3p_pane_g2

0xaaa7,	// (0x0000aaa7) cell_vkbss_key_3p_pane_g3

0x0002,

0xb553,	// (0x0000b553) cell_vkbss_key_3p_pane_g

0x0024,	// (0x00000024) bg_popup_fep_char_preview_window_cp02

0xaaaf,	// (0x0000aaaf) popup_fep_char_pre_window_t1

0xef89,	// (0x0000ef89) main_ai5_sk_pane

0xa3df,	// (0x0000a3df) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa3eb,	// (0x0000a3eb) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x71d7,	// (0x000071d7) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa400,	// (0x0000a400) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xb525,	// (0x0000b525) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa40c,	// (0x0000a40c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x139c,	// (0x0000139c) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf276,	// (0x0000f276) main_ai5_sk_pane_g1

0x3db1,	// (0x00003db1) popup_query_code_window_g1

0xa893,	// (0x0000a893) popup_fep_vkb_icf_pane

0xa8b2,	// (0x0000a8b2) popup_fep_vtchi_icf_pane

0xaac7,	// (0x0000aac7) bg_icf_pane

0xaad3,	// (0x0000aad3) list_vkb_icf_pane

0xaae2,	// (0x0000aae2) bg_icf_pane_cp01

0xaaf5,	// (0x0000aaf5) vtchi_icf_list_pane

0xab05,	// (0x0000ab05) list_vkb_icf_pane_t1_ParamLimits

0xab05,	// (0x0000ab05) list_vkb_icf_pane_t1

0xab1b,	// (0x0000ab1b) vtchi_icf_list_pane_t1_ParamLimits

0xab1b,	// (0x0000ab1b) vtchi_icf_list_pane_t1

0xa87d,	// (0x0000a87d) popup_fep_ituss_window_ParamLimits

0xa8b2,	// (0x0000a8b2) popup_fep_vtchi_icf_pane_ParamLimits

0xa8d8,	// (0x0000a8d8) ituss_keypad_pane_ParamLimits

0xa8e7,	// (0x0000a8e7) ituss_sks_pane

0xaac7,	// (0x0000aac7) bg_icf_pane_ParamLimits

0xa859,	// (0x0000a859) icf_edit_indi_pane_ParamLimits

0xa859,	// (0x0000a859) icf_edit_indi_pane

0xaad3,	// (0x0000aad3) list_vkb_icf_pane_ParamLimits

0xaae2,	// (0x0000aae2) bg_icf_pane_cp01_ParamLimits

0xa868,	// (0x0000a868) icf_edit_indi_pane_cp01_ParamLimits

0xa868,	// (0x0000a868) icf_edit_indi_pane_cp01

0xaafd,	// (0x0000aafd) vtchi_query_pane

0x6b5e,	// (0x00006b5e) icf_edit_indi_pane_g1_ParamLimits

0x6b5e,	// (0x00006b5e) icf_edit_indi_pane_g1

0xab9f,	// (0x0000ab9f) icf_edit_indi_pane_g2_ParamLimits

0xab9f,	// (0x0000ab9f) icf_edit_indi_pane_g2

0x0001,

0xb56b,	// (0x0000b56b) icf_edit_indi_pane_g_ParamLimits

0xb56b,	// (0x0000b56b) icf_edit_indi_pane_g

0xabae,	// (0x0000abae) icf_edit_indi_pane_t1

0xab35,	// (0x0000ab35) bg_input_focus_pane_cp042

0x0d50,	// (0x00000d50) vtchi_button_pane

0xab3e,	// (0x0000ab3e) vtchi_query_pane_t1

0xab4c,	// (0x0000ab4c) vtchi_query_pane_t2

0xab5a,	// (0x0000ab5a) vtchi_query_pane_t3

0x0002,

0xb55a,	// (0x0000b55a) vtchi_query_pane_t

0x0024,	// (0x00000024) bg_button_pane_cp13

0xab68,	// (0x0000ab68) vtchi_button_pane_g1

0xab70,	// (0x0000ab70) ituss_sks_pane_g1

0xab7b,	// (0x0000ab7b) ituss_sks_pane_g2

0x0001,

0xb561,	// (0x0000b561) ituss_sks_pane_g

0xab83,	// (0x0000ab83) ituss_sks_pane_t1

0xab91,	// (0x0000ab91) ituss_sks_pane_t2

0x0001,

0xb566,	// (0x0000b566) ituss_sks_pane_t

0x60b7,	// (0x000060b7) indicator_nsta_pane_cp_g1

0x60bf,	// (0x000060bf) indicator_nsta_pane_cp_g2

0x60c7,	// (0x000060c7) indicator_nsta_pane_cp_g3

0x60b7,	// (0x000060b7) indicator_nsta_pane_cp_g4

0x60bf,	// (0x000060bf) indicator_nsta_pane_cp_g5

0x60c7,	// (0x000060c7) indicator_nsta_pane_cp_g6

0x0005,

0xb10f,	// (0x0000b10f) indicator_nsta_pane_cp_g

0xed35,	// (0x0000ed35) cell_graphic2_pane_t2_ParamLimits

0xed35,	// (0x0000ed35) cell_graphic2_pane_t2

0x0001,

0xf508,	// (0x0000f508) cell_graphic2_pane_t_ParamLimits

0xf508,	// (0x0000f508) cell_graphic2_pane_t

0xed69,	// (0x0000ed69) cell_graphic2_control_pane_t1

0xc1af,	// (0x0000c1af) signal_pane_g3_ParamLimits

0xc1af,	// (0x0000c1af) signal_pane_g3

0xc1c3,	// (0x0000c1c3) signal_pane_g4_ParamLimits

0xc1c3,	// (0x0000c1c3) signal_pane_g4

0xa843,	// (0x0000a843) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa843,	// (0x0000a843) cell_ai5_widget_list_row_pane_t3

0xa9d7,	// (0x0000a9d7) cell_ituss_key_pane_t1_ParamLimits

0xa9d7,	// (0x0000a9d7) cell_ituss_key_pane_t1

0x39c5,	// (0x000039c5) form_field_data_wide_pane_vc_t2_ParamLimits

0x39c5,	// (0x000039c5) form_field_data_wide_pane_vc_t2

0x39d9,	// (0x000039d9) form_field_data_wide_pane_vc_t3_ParamLimits

0x39d9,	// (0x000039d9) form_field_data_wide_pane_vc_t3

0x0002,

0xae6b,	// (0x0000ae6b) form_field_data_wide_pane_vc_t_ParamLimits

0xae6b,	// (0x0000ae6b) form_field_data_wide_pane_vc_t

0x5d7f,	// (0x00005d7f) form_field_slider_wide_pane_vc_t3_ParamLimits

0x5d7f,	// (0x00005d7f) form_field_slider_wide_pane_vc_t3

0x5e5d,	// (0x00005e5d) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5e5d,	// (0x00005e5d) form_field_popup_wide_pane_vc_t2

0x5e74,	// (0x00005e74) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5e74,	// (0x00005e74) form_field_popup_wide_pane_vc_t3

0x0002,

0xb0fe,	// (0x0000b0fe) form_field_popup_wide_pane_vc_t_ParamLimits

0xb0fe,	// (0x0000b0fe) form_field_popup_wide_pane_vc_t

0xefff,	// (0x0000efff) aid_fshwr2_btn_pane_ParamLimits

0xf010,	// (0x0000f010) aid_fshwr2_syb_pane_ParamLimits

0xf021,	// (0x0000f021) aid_fshwr2_txt_pane_ParamLimits

0x139c,	// (0x0000139c) fshwr2_bg_pane_ParamLimits

0xf02d,	// (0x0000f02d) fshwr2_func_candi_pane_ParamLimits

0xf04c,	// (0x0000f04c) fshwr2_hwr_syb_pane_ParamLimits

0xf067,	// (0x0000f067) fshwr2_icf_pane_ParamLimits

0x5ce5,	// (0x00005ce5) list_double_graphic_pane_vc_g4_ParamLimits

0x5ce5,	// (0x00005ce5) list_double_graphic_pane_vc_g4

0xa9cb,	// (0x0000a9cb) cell_ituss_key_pane_g3_ParamLimits

0xa9cb,	// (0x0000a9cb) cell_ituss_key_pane_g3

0xaa85,	// (0x0000aa85) cell_ituss_key_t5_ParamLimits

0xaa85,	// (0x0000aa85) cell_ituss_key_t5

0xf1e4,	// (0x0000f1e4) popup_fep_vkbss_window_ParamLimits
};


const AknLayoutScalable_Avkon::SCdlImpl KCdlImpl = 
	{
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineRVC,
	&WindowLineVCR,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineCVR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_av_qhd_lsc_tch_Normal

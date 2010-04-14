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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00014999 };

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
0x92ab,	// (0x0001dc44) Screen

0x92b7,	// (0x0001dc50) application_window_ParamLimits

0x92b7,	// (0x0001dc50) application_window

0xb887,	// (0x00020220) screen_g1

0x875d,	// (0x0001d0f6) area_bottom_pane_ParamLimits

0x875d,	// (0x0001d0f6) area_bottom_pane

0xd627,	// (0x00021fc0) area_top_pane_ParamLimits

0xd627,	// (0x00021fc0) area_top_pane

0xd6c5,	// (0x0002205e) main_pane_ParamLimits

0xd6c5,	// (0x0002205e) main_pane

0xb891,	// (0x0002022a) misc_graphics

0xa947,	// (0x0001f2e0) battery_pane_ParamLimits

0xa947,	// (0x0001f2e0) battery_pane

0x202d,	// (0x000169c6) bg_status_flat_pane_g8

0x2035,	// (0x000169ce) bg_status_flat_pane_g9

0x1328,	// (0x00015cc1) context_pane_ParamLimits

0x1328,	// (0x00015cc1) context_pane

0xaabe,	// (0x0001f457) navi_pane_ParamLimits

0xaabe,	// (0x0001f457) navi_pane

0xab48,	// (0x0001f4e1) signal_pane_ParamLimits

0xab48,	// (0x0001f4e1) signal_pane

0x0008,

0xf86f,	// (0x00024208) bg_status_flat_pane_g

0xabd8,	// (0x0001f571) status_pane_g1_ParamLimits

0xabd8,	// (0x0001f571) status_pane_g1

0xabee,	// (0x0001f587) status_pane_g2_ParamLimits

0xabee,	// (0x0001f587) status_pane_g2

0x1569,	// (0x00015f02) status_pane_g3_ParamLimits

0x1569,	// (0x00015f02) status_pane_g3

0x0004,

0xf79b,	// (0x00024134) status_pane_g_ParamLimits

0xf79b,	// (0x00024134) status_pane_g

0xabfa,	// (0x0001f593) title_pane_ParamLimits

0xabfa,	// (0x0001f593) title_pane

0xac5d,	// (0x0001f5f6) uni_indicator_pane_ParamLimits

0xac5d,	// (0x0001f5f6) uni_indicator_pane

0x0b41,	// (0x000154da) bg_list_pane_ParamLimits

0x0b41,	// (0x000154da) bg_list_pane

0xa167,	// (0x0001eb00) find_pane

0xa16f,	// (0x0001eb08) listscroll_app_pane_ParamLimits

0xa16f,	// (0x0001eb08) listscroll_app_pane

0x0b75,	// (0x0001550e) listscroll_form_pane

0xa17f,	// (0x0001eb18) listscroll_gen_pane_ParamLimits

0xa17f,	// (0x0001eb18) listscroll_gen_pane

0x0b91,	// (0x0001552a) listscroll_set_pane

0x2bf4,	// (0x0001758d) main_idle_act_pane

0x0825,	// (0x000151be) main_idle_trad_pane

0x0825,	// (0x000151be) main_list_empty_pane

0x0bab,	// (0x00015544) main_midp_pane

0x0bb7,	// (0x00015550) main_pane_g1_ParamLimits

0x0bb7,	// (0x00015550) main_pane_g1

0xa1a1,	// (0x0001eb3a) popup_ai_message_window_ParamLimits

0xa1a1,	// (0x0001eb3a) popup_ai_message_window

0xa241,	// (0x0001ebda) popup_fep_china_uni_window_ParamLimits

0xa241,	// (0x0001ebda) popup_fep_china_uni_window

0x0ce1,	// (0x0001567a) popup_fep_japan_candidate_window_ParamLimits

0x0ce1,	// (0x0001567a) popup_fep_japan_candidate_window

0x0d0b,	// (0x000156a4) popup_fep_japan_predictive_window_ParamLimits

0x0d0b,	// (0x000156a4) popup_fep_japan_predictive_window

0xa2a1,	// (0x0001ec3a) popup_find_window

0xa2be,	// (0x0001ec57) popup_grid_graphic_window_ParamLimits

0xa2be,	// (0x0001ec57) popup_grid_graphic_window

0x0d7c,	// (0x00015715) popup_large_graphic_colour_window

0xa362,	// (0x0001ecfb) popup_menu_window_ParamLimits

0xa362,	// (0x0001ecfb) popup_menu_window

0xa552,	// (0x0001eeeb) popup_note_image_window

0xa512,	// (0x0001eeab) popup_note_wait_window_ParamLimits

0xa512,	// (0x0001eeab) popup_note_wait_window

0xa56a,	// (0x0001ef03) popup_note_window_ParamLimits

0xa56a,	// (0x0001ef03) popup_note_window

0xa618,	// (0x0001efb1) popup_query_code_window_ParamLimits

0xa618,	// (0x0001efb1) popup_query_code_window

0x0fe8,	// (0x00015981) popup_query_data_code_window_ParamLimits

0x0fe8,	// (0x00015981) popup_query_data_code_window

0xa658,	// (0x0001eff1) popup_query_data_window_ParamLimits

0xa658,	// (0x0001eff1) popup_query_data_window

0xa6ec,	// (0x0001f085) popup_query_sat_info_window_ParamLimits

0xa6ec,	// (0x0001f085) popup_query_sat_info_window

0xa797,	// (0x0001f130) popup_snote_single_graphic_window_ParamLimits

0xa797,	// (0x0001f130) popup_snote_single_graphic_window

0xa797,	// (0x0001f130) popup_snote_single_text_window_ParamLimits

0xa797,	// (0x0001f130) popup_snote_single_text_window

0x1083,	// (0x00015a1c) popup_sub_window_general

0x11c9,	// (0x00015b62) popup_window_general_ParamLimits

0x11c9,	// (0x00015b62) popup_window_general

0x11e2,	// (0x00015b7b) power_save_pane

0x8952,	// (0x0001d2eb) control_pane_g1_ParamLimits

0x8952,	// (0x0001d2eb) control_pane_g1

0x897b,	// (0x0001d314) control_pane_g2_ParamLimits

0x897b,	// (0x0001d314) control_pane_g2

0x0ae2,	// (0x0001547b) control_pane_g3_ParamLimits

0x0ae2,	// (0x0001547b) control_pane_g3

0x0007,

0xf783,	// (0x0002411c) control_pane_g_ParamLimits

0xf783,	// (0x0002411c) control_pane_g

0x89b6,	// (0x0001d34f) control_pane_t1_ParamLimits

0x89b6,	// (0x0001d34f) control_pane_t1

0x8a14,	// (0x0001d3ad) control_pane_t2_ParamLimits

0x8a14,	// (0x0001d3ad) control_pane_t2

0x0002,

0xf794,	// (0x0002412d) control_pane_t_ParamLimits

0xf794,	// (0x0002412d) control_pane_t

0xa08f,	// (0x0001ea28) navi_navi_volume_pane_cp1

0xa097,	// (0x0001ea30) status_small_icon_pane

0x0a17,	// (0x000153b0) status_small_pane_g1_ParamLimits

0x0a17,	// (0x000153b0) status_small_pane_g1

0xa09f,	// (0x0001ea38) status_small_pane_g2_ParamLimits

0xa09f,	// (0x0001ea38) status_small_pane_g2

0xa0ab,	// (0x0001ea44) status_small_pane_g3_ParamLimits

0xa0ab,	// (0x0001ea44) status_small_pane_g3

0xa0b7,	// (0x0001ea50) status_small_pane_g4_ParamLimits

0xa0b7,	// (0x0001ea50) status_small_pane_g4

0xa0c3,	// (0x0001ea5c) status_small_pane_g5_ParamLimits

0xa0c3,	// (0x0001ea5c) status_small_pane_g5

0xa0d1,	// (0x0001ea6a) status_small_pane_g6_ParamLimits

0xa0d1,	// (0x0001ea6a) status_small_pane_g6

0x0007,

0xf772,	// (0x0002410b) status_small_pane_g_ParamLimits

0xf772,	// (0x0002410b) status_small_pane_g

0xa100,	// (0x0001ea99) status_small_pane_t1

0xa122,	// (0x0001eabb) status_small_wait_pane_ParamLimits

0xa122,	// (0x0001eabb) status_small_wait_pane

0x9dc9,	// (0x0001e762) aid_levels_signal_ParamLimits

0x9dc9,	// (0x0001e762) aid_levels_signal

0x9de1,	// (0x0001e77a) signal_pane_g1_ParamLimits

0x9de1,	// (0x0001e77a) signal_pane_g1

0x9dfc,	// (0x0001e795) signal_pane_g2_ParamLimits

0x9dfc,	// (0x0001e795) signal_pane_g2

0x0003,

0xf703,	// (0x0002409c) signal_pane_g_ParamLimits

0xf703,	// (0x0002409c) signal_pane_g

0xe05d,	// (0x000229f6) context_pane_g1

0x92c7,	// (0x0001dc60) title_pane_g1

0x92f2,	// (0x0001dc8b) title_pane_t1

0xb8b3,	// (0x0002024c) title_pane_t2

0xb8d9,	// (0x00020272) title_pane_t3

0x0002,

0xf557,	// (0x00023ef0) title_pane_t

0xac85,	// (0x0001f61e) aid_levels_battery_ParamLimits

0xac85,	// (0x0001f61e) aid_levels_battery

0xaca1,	// (0x0001f63a) battery_pane_g1_ParamLimits

0xaca1,	// (0x0001f63a) battery_pane_g1

0xacbe,	// (0x0001f657) battery_pane_g2_ParamLimits

0xacbe,	// (0x0001f657) battery_pane_g2

0x0001,

0xf7a6,	// (0x0002413f) battery_pane_g_ParamLimits

0xf7a6,	// (0x0002413f) battery_pane_g

0xaf91,	// (0x0001f92a) uni_indicator_pane_g1

0xafa7,	// (0x0001f940) uni_indicator_pane_g2

0xafbd,	// (0x0001f956) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x000242b0) uni_indicator_pane_g

0xe30b,	// (0x00022ca4) navi_icon_pane_ParamLimits

0xe30b,	// (0x00022ca4) navi_icon_pane

0xe28f,	// (0x00022c28) navi_midp_pane

0xe327,	// (0x00022cc0) navi_navi_pane

0xe331,	// (0x00022cca) navi_text_pane_ParamLimits

0xe331,	// (0x00022cca) navi_text_pane

0xb887,	// (0x00020220) status_small_wait_pane_g1

0xbbee,	// (0x00020587) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x000242ab) status_small_wait_pane_g

0xaef8,	// (0x0001f891) navi_navi_icon_text_pane

0xaf00,	// (0x0001f899) navi_navi_pane_g1_ParamLimits

0xaf00,	// (0x0001f899) navi_navi_pane_g1

0xaf12,	// (0x0001f8ab) navi_navi_pane_g2_ParamLimits

0xaf12,	// (0x0001f8ab) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x00024279) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x00024279) navi_navi_pane_g

0x26b6,	// (0x0001704f) navi_navi_tabs_pane

0xaf24,	// (0x0001f8bd) navi_navi_text_pane

0xaef8,	// (0x0001f891) navi_navi_volume_pane

0xaee6,	// (0x0001f87f) navi_text_pane_t1

0xaeda,	// (0x0001f873) navi_icon_pane_g1

0x25ad,	// (0x00016f46) navi_navi_text_pane_t1

0x8c7b,	// (0x0001d614) navi_navi_volume_pane_g1

0x8c83,	// (0x0001d61c) volume_small_pane

0xae22,	// (0x0001f7bb) navi_navi_icon_text_pane_g1

0xae2a,	// (0x0001f7c3) navi_navi_icon_text_pane_t1

0xe327,	// (0x00022cc0) navi_tabs_2_long_pane

0xe327,	// (0x00022cc0) navi_tabs_2_pane

0xe327,	// (0x00022cc0) navi_tabs_3_long_pane

0xe327,	// (0x00022cc0) navi_tabs_3_pane

0xe327,	// (0x00022cc0) navi_tabs_4_pane

0x8c5b,	// (0x0001d5f4) tabs_2_active_pane_ParamLimits

0x8c5b,	// (0x0001d5f4) tabs_2_active_pane

0x8c6b,	// (0x0001d604) tabs_2_passive_pane_ParamLimits

0x8c6b,	// (0x0001d604) tabs_2_passive_pane

0x8c29,	// (0x0001d5c2) tabs_3_active_pane_ParamLimits

0x8c29,	// (0x0001d5c2) tabs_3_active_pane

0x8c39,	// (0x0001d5d2) tabs_3_passive_pane_ParamLimits

0x8c39,	// (0x0001d5d2) tabs_3_passive_pane

0x8c4a,	// (0x0001d5e3) tabs_3_passive_pane_cp_ParamLimits

0x8c4a,	// (0x0001d5e3) tabs_3_passive_pane_cp

0x8be5,	// (0x0001d57e) tabs_4_active_pane_ParamLimits

0x8be5,	// (0x0001d57e) tabs_4_active_pane

0x8bf6,	// (0x0001d58f) tabs_4_passive_pane_ParamLimits

0x8bf6,	// (0x0001d58f) tabs_4_passive_pane

0x8c07,	// (0x0001d5a0) tabs_4_passive_pane_cp_ParamLimits

0x8c07,	// (0x0001d5a0) tabs_4_passive_pane_cp

0x8c18,	// (0x0001d5b1) tabs_4_passive_pane_cp2_ParamLimits

0x8c18,	// (0x0001d5b1) tabs_4_passive_pane_cp2

0x8bc1,	// (0x0001d55a) tabs_2_long_active_pane_ParamLimits

0x8bc1,	// (0x0001d55a) tabs_2_long_active_pane

0x8bd3,	// (0x0001d56c) tabs_2_long_passive_pane_ParamLimits

0x8bd3,	// (0x0001d56c) tabs_2_long_passive_pane

0x8b76,	// (0x0001d50f) tabs_3_long_active_pane_ParamLimits

0x8b76,	// (0x0001d50f) tabs_3_long_active_pane

0x8b8f,	// (0x0001d528) tabs_3_long_passive_pane_ParamLimits

0x8b8f,	// (0x0001d528) tabs_3_long_passive_pane

0x8ba8,	// (0x0001d541) tabs_3_long_passive_pane_cp_ParamLimits

0x8ba8,	// (0x0001d541) tabs_3_long_passive_pane_cp

0xe85e,	// (0x000231f7) volume_small_pane_g1

0x8b25,	// (0x0001d4be) volume_small_pane_g2

0x8b2e,	// (0x0001d4c7) volume_small_pane_g3

0x8b37,	// (0x0001d4d0) volume_small_pane_g4

0x8b40,	// (0x0001d4d9) volume_small_pane_g5

0x8b49,	// (0x0001d4e2) volume_small_pane_g6

0x8b52,	// (0x0001d4eb) volume_small_pane_g7

0x8b5b,	// (0x0001d4f4) volume_small_pane_g8

0x8b64,	// (0x0001d4fd) volume_small_pane_g9

0x8b6d,	// (0x0001d506) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x00024245) volume_small_pane_g

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp2_ParamLimits

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp2

0x937e,	// (0x0001dd17) tabs_3_active_pane_g1

0x9386,	// (0x0001dd1f) tabs_3_active_pane_t1

0xb8eb,	// (0x00020284) bg_passive_tab_pane_cp2_ParamLimits

0xb8eb,	// (0x00020284) bg_passive_tab_pane_cp2

0x937e,	// (0x0001dd17) tabs_3_passive_pane_g1

0x9386,	// (0x0001dd1f) tabs_3_passive_pane_t1

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp3_ParamLimits

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp3

0x9398,	// (0x0001dd31) tabs_4_active_pane_g1

0x93a0,	// (0x0001dd39) tabs_4_active_pane_t1

0xb8eb,	// (0x00020284) bg_passive_tab_pane_cp3_ParamLimits

0xb8eb,	// (0x00020284) bg_passive_tab_pane_cp3

0x9398,	// (0x0001dd31) tabs_4_1_passive_pane_g1

0x93a0,	// (0x0001dd39) tabs_4_1_passive_pane_t1

0x0bab,	// (0x00015544) list_highlight_pane_cp2

0xb064,	// (0x0001f9fd) list_set_pane_ParamLimits

0xb064,	// (0x0001f9fd) list_set_pane

0xb12c,	// (0x0001fac5) main_pane_set_t1_ParamLimits

0xb12c,	// (0x0001fac5) main_pane_set_t1

0xb14c,	// (0x0001fae5) main_pane_set_t2_ParamLimits

0xb14c,	// (0x0001fae5) main_pane_set_t2

0xb160,	// (0x0001faf9) main_pane_set_t3_ParamLimits

0xb160,	// (0x0001faf9) main_pane_set_t3

0xb174,	// (0x0001fb0d) main_pane_set_t4_ParamLimits

0xb174,	// (0x0001fb0d) main_pane_set_t4

0x0003,

0xf97c,	// (0x00024315) main_pane_set_t_ParamLimits

0xf97c,	// (0x00024315) main_pane_set_t

0xb188,	// (0x0001fb21) setting_code_pane

0x2d48,	// (0x000176e1) setting_slider_graphic_pane

0x2d48,	// (0x000176e1) setting_slider_pane

0x2d48,	// (0x000176e1) setting_text_pane

0x2d48,	// (0x000176e1) setting_volume_pane

0xd7d4,	// (0x0002216d) volume_set_pane

0xb8f9,	// (0x00020292) bg_set_opt_pane_cp

0xd7de,	// (0x00022177) setting_slider_pane_t1

0xd7f7,	// (0x00022190) setting_slider_pane_t2

0xd811,	// (0x000221aa) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00023ef7) setting_slider_pane_t

0xd829,	// (0x000221c2) slider_set_pane

0xb891,	// (0x0002022a) bg_set_opt_pane_cp2

0xb907,	// (0x000202a0) setting_slider_graphic_pane_g1

0xd83f,	// (0x000221d8) setting_slider_graphic_pane_t1

0xd84f,	// (0x000221e8) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00023efe) setting_slider_graphic_pane_t

0xd85f,	// (0x000221f8) slider_set_pane_cp

0xb891,	// (0x0002022a) input_focus_pane_cp1

0x2bdb,	// (0x00017574) list_set_text_pane

0xb887,	// (0x00020220) setting_text_pane_g1

0xb891,	// (0x0002022a) input_focus_pane_cp2

0xb887,	// (0x00020220) setting_code_pane_g1

0xb910,	// (0x000202a9) setting_code_pane_t1

0xb91e,	// (0x000202b7) set_text_pane_t1_ParamLimits

0xb91e,	// (0x000202b7) set_text_pane_t1

0xda0f,	// (0x000223a8) set_opt_bg_pane_g1

0xda17,	// (0x000223b0) set_opt_bg_pane_g2

0x2bb3,	// (0x0001754c) set_opt_bg_pane_g3

0xda27,	// (0x000223c0) set_opt_bg_pane_g4

0xda2f,	// (0x000223c8) set_opt_bg_pane_g5

0xda37,	// (0x000223d0) set_opt_bg_pane_g6

0x2bbd,	// (0x00017556) set_opt_bg_pane_g7

0x2bc7,	// (0x00017560) set_opt_bg_pane_g8

0x2bd1,	// (0x0001756a) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x00024302) set_opt_bg_pane_g

0x2ba6,	// (0x0001753f) slider_set_pane_g1

0xe8df,	// (0x00023278) slider_set_pane_g2

0x0006,

0xf95a,	// (0x000242f3) slider_set_pane_g

0xe867,	// (0x00023200) volume_set_pane_g1

0xe871,	// (0x0002320a) volume_set_pane_g2

0xe87b,	// (0x00023214) volume_set_pane_g3

0xe885,	// (0x0002321e) volume_set_pane_g4

0xe88f,	// (0x00023228) volume_set_pane_g5

0xe899,	// (0x00023232) volume_set_pane_g6

0xe8a3,	// (0x0002323c) volume_set_pane_g7

0xe8ad,	// (0x00023246) volume_set_pane_g8

0xe8b7,	// (0x00023250) volume_set_pane_g9

0xe8c1,	// (0x0002325a) volume_set_pane_g10

0x0009,

0xf932,	// (0x000242cb) volume_set_pane_g

0x93b2,	// (0x0001dd4b) indicator_pane_ParamLimits

0x93b2,	// (0x0001dd4b) indicator_pane

0x93de,	// (0x0001dd77) main_idle_pane_g2_ParamLimits

0x93de,	// (0x0001dd77) main_idle_pane_g2

0x9416,	// (0x0001ddaf) main_pane_idle_g1_ParamLimits

0x9416,	// (0x0001ddaf) main_pane_idle_g1

0xb938,	// (0x000202d1) popup_clock_digital_analogue_window_ParamLimits

0xb938,	// (0x000202d1) popup_clock_digital_analogue_window

0x9444,	// (0x0001dddd) soft_indicator_pane_ParamLimits

0x9444,	// (0x0001dddd) soft_indicator_pane

0x9460,	// (0x0001ddf9) wallpaper_pane_ParamLimits

0x9460,	// (0x0001ddf9) wallpaper_pane

0xb887,	// (0x00020220) wallpaper_pane_g1

0x9472,	// (0x0001de0b) indicator_pane_g1_ParamLimits

0x9472,	// (0x0001de0b) indicator_pane_g1

0x3099,	// (0x00017a32) navi_navi_icon_text_pane_srt_g1

0xb966,	// (0x000202ff) soft_indicator_pane_t1

0xb980,	// (0x00020319) aid_ps_area_pane

0x948b,	// (0x0001de24) aid_ps_clock_pane

0xb991,	// (0x0002032a) aid_ps_indicator_pane

0xb99d,	// (0x00020336) indicator_ps_pane_ParamLimits

0xb99d,	// (0x00020336) indicator_ps_pane

0xb9ac,	// (0x00020345) power_save_pane_g1_ParamLimits

0xb9ac,	// (0x00020345) power_save_pane_g1

0xb9b8,	// (0x00020351) power_save_pane_g2_ParamLimits

0xb9b8,	// (0x00020351) power_save_pane_g2

0xd607,	// (0x00021fa0) aid_navinavi_width_pane

0xb980,	// (0x00020319) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00023f03) power_save_pane_g_ParamLimits

0xf56a,	// (0x00023f03) power_save_pane_g

0xb9c6,	// (0x0002035f) power_save_pane_t1_ParamLimits

0xb9c6,	// (0x0002035f) power_save_pane_t1

0x948b,	// (0x0001de24) aid_ps_clock_pane_ParamLimits

0xb991,	// (0x0002032a) aid_ps_indicator_pane_ParamLimits

0xb9d8,	// (0x00020371) power_save_pane_t4_ParamLimits

0xb9d8,	// (0x00020371) power_save_pane_t4

0x0001,

0xf56f,	// (0x00023f08) power_save_pane_t_ParamLimits

0xf56f,	// (0x00023f08) power_save_pane_t

0xba02,	// (0x0002039b) power_save_t3_ParamLimits

0xba02,	// (0x0002039b) power_save_t3

0xb9ed,	// (0x00020386) power_save_t2_ParamLimits

0xb9ed,	// (0x00020386) power_save_t2

0xba17,	// (0x000203b0) indicator_ps_pane_g1

0x9499,	// (0x0001de32) ai_gene_pane_ParamLimits

0x9499,	// (0x0001de32) ai_gene_pane

0x94b0,	// (0x0001de49) ai_links_pane_ParamLimits

0x94b0,	// (0x0001de49) ai_links_pane

0x94c8,	// (0x0001de61) indicator_pane_cp1_ParamLimits

0x94c8,	// (0x0001de61) indicator_pane_cp1

0x94d7,	// (0x0001de70) main_pane_idle_g1_cp_ParamLimits

0x94d7,	// (0x0001de70) main_pane_idle_g1_cp

0xba20,	// (0x000203b9) popup_ai_links_title_window

0x94ef,	// (0x0001de88) soft_indicator_pane_cp1_ParamLimits

0x94ef,	// (0x0001de88) soft_indicator_pane_cp1

0x2965,	// (0x000172fe) ai_links_pane_g1

0x296e,	// (0x00017307) grid_ai_links_pane

0xaf88,	// (0x0001f921) ai_gene_pane_1

0x2953,	// (0x000172ec) ai_gene_pane_2

0x295c,	// (0x000172f5) list_highlight_pane_cp4

0xaf64,	// (0x0001f8fd) cell_ai_link_pane_ParamLimits

0xaf64,	// (0x0001f8fd) cell_ai_link_pane

0x2922,	// (0x000172bb) cell_ai_link_pane_g1

0xbbee,	// (0x00020587) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x000242a6) cell_ai_link_pane_g

0xb891,	// (0x0002022a) grid_highlight_cp2

0xb891,	// (0x0002022a) bg_popup_sub_pane_cp1

0xba37,	// (0x000203d0) popup_ai_links_title_window_t1

0x286e,	// (0x00017207) ai_gene_pane_1_g1_ParamLimits

0x286e,	// (0x00017207) ai_gene_pane_1_g1

0x287a,	// (0x00017213) ai_gene_pane_1_g2_ParamLimits

0x287a,	// (0x00017213) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0002429c) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0002429c) ai_gene_pane_1_g

0x2887,	// (0x00017220) ai_gene_pane_1_t1_ParamLimits

0x2887,	// (0x00017220) ai_gene_pane_1_t1

0x28bb,	// (0x00017254) grid_ai_soft_ind_pane

0x2859,	// (0x000171f2) ai_gene_pane_2_t1_ParamLimits

0x2859,	// (0x000171f2) ai_gene_pane_2_t1

0x9503,	// (0x0001de9c) main_pane_empty_t1_ParamLimits

0x9503,	// (0x0001de9c) main_pane_empty_t1

0x951b,	// (0x0001deb4) main_pane_empty_t2_ParamLimits

0x951b,	// (0x0001deb4) main_pane_empty_t2

0x9530,	// (0x0001dec9) main_pane_empty_t3_ParamLimits

0x9530,	// (0x0001dec9) main_pane_empty_t3

0x9542,	// (0x0001dedb) main_pane_empty_t4_ParamLimits

0x9542,	// (0x0001dedb) main_pane_empty_t4

0x9554,	// (0x0001deed) main_pane_empty_t5_ParamLimits

0x9554,	// (0x0001deed) main_pane_empty_t5

0x0004,

0xf574,	// (0x00023f0d) main_pane_empty_t_ParamLimits

0xf574,	// (0x00023f0d) main_pane_empty_t

0xda8f,	// (0x00022428) bg_popup_window_pane_ParamLimits

0xda8f,	// (0x00022428) bg_popup_window_pane

0x25bb,	// (0x00016f54) find_popup_pane_cp2_ParamLimits

0x25bb,	// (0x00016f54) find_popup_pane_cp2

0x25c7,	// (0x00016f60) heading_pane_ParamLimits

0x25c7,	// (0x00016f60) heading_pane

0xb891,	// (0x0002022a) bg_popup_sub_pane

0xae47,	// (0x0001f7e0) bg_popup_window_pane_g1_ParamLimits

0xae47,	// (0x0001f7e0) bg_popup_window_pane_g1

0xae56,	// (0x0001f7ef) bg_popup_window_pane_g2_ParamLimits

0xae56,	// (0x0001f7ef) bg_popup_window_pane_g2

0xae62,	// (0x0001f7fb) bg_popup_window_pane_g3_ParamLimits

0xae62,	// (0x0001f7fb) bg_popup_window_pane_g3

0xae6e,	// (0x0001f807) bg_popup_window_pane_g4_ParamLimits

0xae6e,	// (0x0001f807) bg_popup_window_pane_g4

0xae7d,	// (0x0001f816) bg_popup_window_pane_g5_ParamLimits

0xae7d,	// (0x0001f816) bg_popup_window_pane_g5

0xae8d,	// (0x0001f826) bg_popup_window_pane_g6_ParamLimits

0xae8d,	// (0x0001f826) bg_popup_window_pane_g6

0xae99,	// (0x0001f832) bg_popup_window_pane_g7_ParamLimits

0xae99,	// (0x0001f832) bg_popup_window_pane_g7

0xaea8,	// (0x0001f841) bg_popup_window_pane_g8_ParamLimits

0xaea8,	// (0x0001f841) bg_popup_window_pane_g8

0xaeb7,	// (0x0001f850) bg_popup_window_pane_g9_ParamLimits

0xaeb7,	// (0x0001f850) bg_popup_window_pane_g9

0x25a1,	// (0x00016f3a) bg_popup_window_pane_g10_ParamLimits

0x25a1,	// (0x00016f3a) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x00024264) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x00024264) bg_popup_window_pane_g

0x24ca,	// (0x00016e63) bg_popup_heading_pane_ParamLimits

0x24ca,	// (0x00016e63) bg_popup_heading_pane

0xe967,	// (0x00023300) tabs_4_passive_pane_cp_srt_ParamLimits

0xe967,	// (0x00023300) tabs_4_passive_pane_cp_srt

0xe979,	// (0x00023312) tabs_4_passive_pane_srt_ParamLimits

0x24de,	// (0x00016e77) heading_pane_g2

0xe979,	// (0x00023312) tabs_4_passive_pane_srt

0x1848,	// (0x000161e1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1848,	// (0x000161e1) bg_passive_tab_pane_cp3_srt

0x24e6,	// (0x00016e7f) heading_pane_t1_ParamLimits

0x24e6,	// (0x00016e7f) heading_pane_t1

0x24fd,	// (0x00016e96) heading_pane_t2_ParamLimits

0x24fd,	// (0x00016e96) heading_pane_t2

0x0001,

0xf8c6,	// (0x0002425f) heading_pane_t_ParamLimits

0xf8c6,	// (0x0002425f) heading_pane_t

0x1ff5,	// (0x0001698e) bg_popup_heading_pane_g1

0x20a4,	// (0x00016a3d) bg_popup_heading_pane_g2

0x20ae,	// (0x00016a47) bg_popup_heading_pane_g3

0x20b8,	// (0x00016a51) bg_popup_heading_pane_g4

0x20c2,	// (0x00016a5b) bg_popup_heading_pane_g5

0x20cc,	// (0x00016a65) bg_popup_heading_pane_g6

0x20d4,	// (0x00016a6d) bg_popup_heading_pane_g7

0x20dc,	// (0x00016a75) bg_popup_heading_pane_g8

0x20e6,	// (0x00016a7f) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0002421b) bg_popup_heading_pane_g

0x1722,	// (0x000160bb) bg_popup_sub_pane_g1

0x1732,	// (0x000160cb) bg_popup_sub_pane_g2

0x172a,	// (0x000160c3) bg_popup_sub_pane_g3

0x1742,	// (0x000160db) bg_popup_sub_pane_g4

0x173a,	// (0x000160d3) bg_popup_sub_pane_g5

0x174a,	// (0x000160e3) bg_popup_sub_pane_g6

0x1752,	// (0x000160eb) bg_popup_sub_pane_g7

0x1762,	// (0x000160fb) bg_popup_sub_pane_g8

0x175a,	// (0x000160f3) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x000241f5) bg_popup_sub_pane_g

0xb8eb,	// (0x00020284) bg_popup_window_pane_cp5_ParamLimits

0xb8eb,	// (0x00020284) bg_popup_window_pane_cp5

0xba54,	// (0x000203ed) popup_note_window_g1_ParamLimits

0xba54,	// (0x000203ed) popup_note_window_g1

0xba60,	// (0x000203f9) popup_note_window_t1_ParamLimits

0xba60,	// (0x000203f9) popup_note_window_t1

0xba76,	// (0x0002040f) popup_note_window_t2_ParamLimits

0xba76,	// (0x0002040f) popup_note_window_t2

0xba8c,	// (0x00020425) popup_note_window_t3_ParamLimits

0xba8c,	// (0x00020425) popup_note_window_t3

0xbaa2,	// (0x0002043b) popup_note_window_t4_ParamLimits

0xbaa2,	// (0x0002043b) popup_note_window_t4

0xbaca,	// (0x00020463) popup_note_window_t5_ParamLimits

0xbaca,	// (0x00020463) popup_note_window_t5

0x0004,

0xf57f,	// (0x00023f18) popup_note_window_t_ParamLimits

0xf57f,	// (0x00023f18) popup_note_window_t

0xbaee,	// (0x00020487) bg_popup_window_pane_cp6_ParamLimits

0xbaee,	// (0x00020487) bg_popup_window_pane_cp6

0x1f71,	// (0x0001690a) popup_note_image_window_g1_ParamLimits

0x1f71,	// (0x0001690a) popup_note_image_window_g1

0x1f7d,	// (0x00016916) popup_note_image_window_g2_ParamLimits

0x1f7d,	// (0x00016916) popup_note_image_window_g2

0x0001,

0xf850,	// (0x000241e9) popup_note_image_window_g_ParamLimits

0xf850,	// (0x000241e9) popup_note_image_window_g

0x1f96,	// (0x0001692f) popup_note_image_window_t1_ParamLimits

0x1f96,	// (0x0001692f) popup_note_image_window_t1

0x1faf,	// (0x00016948) popup_note_image_window_t2_ParamLimits

0x1faf,	// (0x00016948) popup_note_image_window_t2

0x1fc8,	// (0x00016961) popup_note_image_window_t3_ParamLimits

0x1fc8,	// (0x00016961) popup_note_image_window_t3

0x0002,

0xf855,	// (0x000241ee) popup_note_image_window_t_ParamLimits

0xf855,	// (0x000241ee) popup_note_image_window_t

0x1e31,	// (0x000167ca) bg_popup_window_pane_cp7_ParamLimits

0x1e31,	// (0x000167ca) bg_popup_window_pane_cp7

0x1e61,	// (0x000167fa) popup_note_wait_window_g1_ParamLimits

0x1e61,	// (0x000167fa) popup_note_wait_window_g1

0x1e6d,	// (0x00016806) popup_note_wait_window_g2_ParamLimits

0x1e6d,	// (0x00016806) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x000241d7) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x000241d7) popup_note_wait_window_g

0x1e85,	// (0x0001681e) popup_note_wait_window_t1_ParamLimits

0x1e85,	// (0x0001681e) popup_note_wait_window_t1

0x1eac,	// (0x00016845) popup_note_wait_window_t2_ParamLimits

0x1eac,	// (0x00016845) popup_note_wait_window_t2

0x1eca,	// (0x00016863) popup_note_wait_window_t3_ParamLimits

0x1eca,	// (0x00016863) popup_note_wait_window_t3

0x1edd,	// (0x00016876) popup_note_wait_window_t4_ParamLimits

0x1edd,	// (0x00016876) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x000241de) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x000241de) popup_note_wait_window_t

0x1f02,	// (0x0001689b) wait_bar_pane_ParamLimits

0x1f02,	// (0x0001689b) wait_bar_pane

0xb891,	// (0x0002022a) wait_anim_pane

0xb891,	// (0x0002022a) wait_border_pane

0xb887,	// (0x00020220) wait_anim_pane_g1

0xb887,	// (0x00020220) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00024097) wait_anim_pane_g

0x1dd5,	// (0x0001676e) wait_border_pane_g1

0x1de0,	// (0x00016779) wait_border_pane_g2

0x1de9,	// (0x00016782) wait_border_pane_g3

0x0002,

0xf837,	// (0x000241d0) wait_border_pane_g

0x1c3f,	// (0x000165d8) bg_popup_window_pane_cp16_ParamLimits

0x1c3f,	// (0x000165d8) bg_popup_window_pane_cp16

0x1d3f,	// (0x000166d8) indicator_popup_pane_cp4_ParamLimits

0x1d3f,	// (0x000166d8) indicator_popup_pane_cp4

0x1d53,	// (0x000166ec) popup_query_data_window_t1_ParamLimits

0x1d53,	// (0x000166ec) popup_query_data_window_t1

0x1d65,	// (0x000166fe) popup_query_data_window_t2_ParamLimits

0x1d65,	// (0x000166fe) popup_query_data_window_t2

0x1d7e,	// (0x00016717) popup_query_data_window_t3_ParamLimits

0x1d7e,	// (0x00016717) popup_query_data_window_t3

0x0002,

0xf830,	// (0x000241c9) popup_query_data_window_t_ParamLimits

0xf830,	// (0x000241c9) popup_query_data_window_t

0x1d98,	// (0x00016731) query_popup_data_pane_ParamLimits

0x1d98,	// (0x00016731) query_popup_data_pane

0x1dac,	// (0x00016745) query_popup_data_pane_cp1_ParamLimits

0x1dac,	// (0x00016745) query_popup_data_pane_cp1

0x1c3f,	// (0x000165d8) bg_popup_window_pane_cp10_ParamLimits

0x1c3f,	// (0x000165d8) bg_popup_window_pane_cp10

0x1c71,	// (0x0001660a) indicator_popup_pane_ParamLimits

0x1c71,	// (0x0001660a) indicator_popup_pane

0x1c93,	// (0x0001662c) popup_query_code_window_t1_ParamLimits

0x1c93,	// (0x0001662c) popup_query_code_window_t1

0x1cad,	// (0x00016646) popup_query_code_window_t2_ParamLimits

0x1cad,	// (0x00016646) popup_query_code_window_t2

0x1cf6,	// (0x0001668f) popup_query_code_window_t3_ParamLimits

0x1cf6,	// (0x0001668f) popup_query_code_window_t3

0x0002,

0xf829,	// (0x000241c2) popup_query_code_window_t_ParamLimits

0xf829,	// (0x000241c2) popup_query_code_window_t

0x1d25,	// (0x000166be) query_popup_pane_ParamLimits

0x1d25,	// (0x000166be) query_popup_pane

0xbaee,	// (0x00020487) bg_popup_window_pane_cp15_ParamLimits

0xbaee,	// (0x00020487) bg_popup_window_pane_cp15

0xbb0e,	// (0x000204a7) indicator_popup_pane_cp1_ParamLimits

0xbb0e,	// (0x000204a7) indicator_popup_pane_cp1

0xbb21,	// (0x000204ba) indicator_popup_pane_cp2_ParamLimits

0xbb21,	// (0x000204ba) indicator_popup_pane_cp2

0xbb3c,	// (0x000204d5) popup_query_data_code_window_g1_ParamLimits

0xbb3c,	// (0x000204d5) popup_query_data_code_window_g1

0xbb4f,	// (0x000204e8) popup_query_data_code_window_t1_ParamLimits

0xbb4f,	// (0x000204e8) popup_query_data_code_window_t1

0xbb61,	// (0x000204fa) popup_query_data_code_window_t2_ParamLimits

0xbb61,	// (0x000204fa) popup_query_data_code_window_t2

0xbb73,	// (0x0002050c) popup_query_data_code_window_t3_ParamLimits

0xbb73,	// (0x0002050c) popup_query_data_code_window_t3

0xbb89,	// (0x00020522) popup_query_data_code_window_t4_ParamLimits

0xbb89,	// (0x00020522) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00023f23) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00023f23) popup_query_data_code_window_t

0xe7c9,	// (0x00023162) list_single_midp_graphic_pane_g3

0xbba3,	// (0x0002053c) query_popup_data_pane_cp2_ParamLimits

0xbbb6,	// (0x0002054f) query_popup_pane_cp2_ParamLimits

0xbbb6,	// (0x0002054f) query_popup_pane_cp2

0xb891,	// (0x0002022a) bg_popup_window_pane_cp11

0x1c37,	// (0x000165d0) heading_pane_cp5

0xbc4c,	// (0x000205e5) listscroll_popup_info_pane

0xb891,	// (0x0002022a) input_focus_pane_cp3

0xbbd1,	// (0x0002056a) query_popup_pane_t1

0xbbdf,	// (0x00020578) list_popup_info_pane_ParamLimits

0xbbdf,	// (0x00020578) list_popup_info_pane

0xbbee,	// (0x00020587) listscroll_popup_info_pane_g1

0xbbf6,	// (0x0002058f) scroll_pane_cp7

0xbc00,	// (0x00020599) popup_info_list_pane_t1_ParamLimits

0xbc00,	// (0x00020599) popup_info_list_pane_t1

0xbc1a,	// (0x000205b3) popup_info_list_pane_t2_ParamLimits

0xbc1a,	// (0x000205b3) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00023f2c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00023f2c) popup_info_list_pane_t

0xb891,	// (0x0002022a) bg_popup_window_pane_cp12

0x30b3,	// (0x00017a4c) find_popup_pane

0xb8f9,	// (0x00020292) bg_popup_window_pane_cp3

0xbc34,	// (0x000205cd) heading_pane_cp3

0xbc40,	// (0x000205d9) listscroll_popup_graphic_pane

0xb891,	// (0x0002022a) bg_popup_window_pane_cp4

0x95b6,	// (0x0001df4f) heading_pane_cp4

0xbc4c,	// (0x000205e5) listscroll_popup_colour_pane

0x95c0,	// (0x0001df59) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x95c0,	// (0x0001df59) cell_large_graphic_colour_none_popup_pane

0x95d4,	// (0x0001df6d) grid_large_graphic_colour_popup_pane_ParamLimits

0x95d4,	// (0x0001df6d) grid_large_graphic_colour_popup_pane

0x95f8,	// (0x0001df91) listscroll_popup_colour_pane_g1_ParamLimits

0x95f8,	// (0x0001df91) listscroll_popup_colour_pane_g1

0x960f,	// (0x0001dfa8) listscroll_popup_colour_pane_g2_ParamLimits

0x960f,	// (0x0001dfa8) listscroll_popup_colour_pane_g2

0x9626,	// (0x0001dfbf) listscroll_popup_colour_pane_g3_ParamLimits

0x9626,	// (0x0001dfbf) listscroll_popup_colour_pane_g3

0x9636,	// (0x0001dfcf) listscroll_popup_colour_pane_g4_ParamLimits

0x9636,	// (0x0001dfcf) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00023f31) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00023f31) listscroll_popup_colour_pane_g

0xbc54,	// (0x000205ed) scroll_pane_cp6_ParamLimits

0xbc54,	// (0x000205ed) scroll_pane_cp6

0x9646,	// (0x0001dfdf) cell_large_graphic_colour_popup_pane_ParamLimits

0x9646,	// (0x0001dfdf) cell_large_graphic_colour_popup_pane

0xbc66,	// (0x000205ff) cell_large_graphic_colour_none_popup_pane_t1

0xb891,	// (0x0002022a) grid_highlight_pane_cp5

0xbc75,	// (0x0002060e) cell_large_graphic_colour_popup_pane_g1

0xbc7d,	// (0x00020616) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00023f3a) cell_large_graphic_colour_popup_pane_g

0xbc85,	// (0x0002061e) cell_large_graphic_colour_popup_pane_g2_copy1

0xbc8e,	// (0x00020627) grid_highlight_pane_cp4

0xbc96,	// (0x0002062f) bg_popup_window_pane_cp8_ParamLimits

0xbc96,	// (0x0002062f) bg_popup_window_pane_cp8

0xbcb1,	// (0x0002064a) popup_snote_single_text_window_g1_ParamLimits

0xbcb1,	// (0x0002064a) popup_snote_single_text_window_g1

0xbcc3,	// (0x0002065c) popup_snote_single_text_window_t1_ParamLimits

0xbcc3,	// (0x0002065c) popup_snote_single_text_window_t1

0xbcd6,	// (0x0002066f) popup_snote_single_text_window_t2_ParamLimits

0xbcd6,	// (0x0002066f) popup_snote_single_text_window_t2

0xbce9,	// (0x00020682) popup_snote_single_text_window_t3_ParamLimits

0xbce9,	// (0x00020682) popup_snote_single_text_window_t3

0xbd22,	// (0x000206bb) popup_snote_single_text_window_t4_ParamLimits

0xbd22,	// (0x000206bb) popup_snote_single_text_window_t4

0xbd56,	// (0x000206ef) popup_snote_single_text_window_t5_ParamLimits

0xbd56,	// (0x000206ef) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00023f3f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00023f3f) popup_snote_single_text_window_t

0xbd85,	// (0x0002071e) bg_popup_window_pane_cp9_ParamLimits

0xbd85,	// (0x0002071e) bg_popup_window_pane_cp9

0xbcb1,	// (0x0002064a) popup_snote_single_graphic_window_g1_ParamLimits

0xbcb1,	// (0x0002064a) popup_snote_single_graphic_window_g1

0xbd93,	// (0x0002072c) popup_snote_single_graphic_window_g2_ParamLimits

0xbd93,	// (0x0002072c) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00023f4a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00023f4a) popup_snote_single_graphic_window_g

0xbd9f,	// (0x00020738) popup_snote_single_graphic_window_t1_ParamLimits

0xbd9f,	// (0x00020738) popup_snote_single_graphic_window_t1

0xbdb2,	// (0x0002074b) popup_snote_single_graphic_window_t2_ParamLimits

0xbdb2,	// (0x0002074b) popup_snote_single_graphic_window_t2

0xbdc5,	// (0x0002075e) popup_snote_single_graphic_window_t3_ParamLimits

0xbdc5,	// (0x0002075e) popup_snote_single_graphic_window_t3

0xbdfe,	// (0x00020797) popup_snote_single_graphic_window_t4_ParamLimits

0xbdfe,	// (0x00020797) popup_snote_single_graphic_window_t4

0xbe32,	// (0x000207cb) popup_snote_single_graphic_window_t5_ParamLimits

0xbe32,	// (0x000207cb) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00023f4f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00023f4f) popup_snote_single_graphic_window_t

0x2ff1,	// (0x0001798a) grid_graphic_popup_pane_ParamLimits

0x2ff1,	// (0x0001798a) grid_graphic_popup_pane

0x301f,	// (0x000179b8) listscroll_popup_graphic_pane_g1_ParamLimits

0x301f,	// (0x000179b8) listscroll_popup_graphic_pane_g1

0xb2d2,	// (0x0001fc6b) listscroll_popup_graphic_pane_g2_ParamLimits

0xb2d2,	// (0x0001fc6b) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0002433f) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0002433f) listscroll_popup_graphic_pane_g

0x3047,	// (0x000179e0) scroll_pane_cp5

0xb291,	// (0x0001fc2a) cell_graphic_popup_pane_ParamLimits

0xb291,	// (0x0001fc2a) cell_graphic_popup_pane

0x2f7a,	// (0x00017913) cell_graphic_popup_pane_g1

0x2f82,	// (0x0001791b) cell_graphic_popup_pane_g2

0xbc85,	// (0x0002061e) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x00024338) cell_graphic_popup_pane_g

0x2f8b,	// (0x00017924) cell_graphic_popup_pane_t2

0xbc8e,	// (0x00020627) grid_highlight_pane_cp3

0xbe73,	// (0x0002080c) list_gen_pane_ParamLimits

0xbe73,	// (0x0002080c) list_gen_pane

0xbe9b,	// (0x00020834) scroll_pane

0xb248,	// (0x0001fbe1) bg_list_pane_g1_ParamLimits

0xb248,	// (0x0001fbe1) bg_list_pane_g1

0x2eef,	// (0x00017888) bg_list_pane_g2_ParamLimits

0x2eef,	// (0x00017888) bg_list_pane_g2

0x2f04,	// (0x0001789d) bg_list_pane_g3_ParamLimits

0x2f04,	// (0x0001789d) bg_list_pane_g3

0x2f18,	// (0x000178b1) bg_list_pane_g4_ParamLimits

0x2f18,	// (0x000178b1) bg_list_pane_g4

0xb265,	// (0x0001fbfe) bg_list_pane_g5_ParamLimits

0xb265,	// (0x0001fbfe) bg_list_pane_g5

0x0004,

0xf994,	// (0x0002432d) bg_list_pane_g_ParamLimits

0xf994,	// (0x0002432d) bg_list_pane_g

0xb1e2,	// (0x0001fb7b) list_double2_graphic_large_graphic_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double2_graphic_large_graphic_pane

0xb1e2,	// (0x0001fb7b) list_double2_graphic_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double2_graphic_pane

0xb1e2,	// (0x0001fb7b) list_double2_large_graphic_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double2_large_graphic_pane

0xb1e2,	// (0x0001fb7b) list_double2_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double2_pane

0xb1e2,	// (0x0001fb7b) list_double_graphic_heading_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double_graphic_heading_pane

0xb1e2,	// (0x0001fb7b) list_double_graphic_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double_graphic_pane

0xb1e2,	// (0x0001fb7b) list_double_heading_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double_heading_pane

0xb1e2,	// (0x0001fb7b) list_double_large_graphic_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double_large_graphic_pane

0xb1e2,	// (0x0001fb7b) list_double_number_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double_number_pane

0xb1e2,	// (0x0001fb7b) list_double_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double_pane

0xb1e2,	// (0x0001fb7b) list_double_time_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_double_time_pane

0xb1e2,	// (0x0001fb7b) list_setting_number_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_setting_number_pane

0xb1e2,	// (0x0001fb7b) list_setting_pane_ParamLimits

0xb1e2,	// (0x0001fb7b) list_setting_pane

0xb1f6,	// (0x0001fb8f) list_single_2graphic_pane_ParamLimits

0xb1f6,	// (0x0001fb8f) list_single_2graphic_pane

0xb1f6,	// (0x0001fb8f) list_single_graphic_heading_pane_ParamLimits

0xb1f6,	// (0x0001fb8f) list_single_graphic_heading_pane

0xb1f6,	// (0x0001fb8f) list_single_graphic_pane_ParamLimits

0xb1f6,	// (0x0001fb8f) list_single_graphic_pane

0xb1f6,	// (0x0001fb8f) list_single_heading_pane_ParamLimits

0xb1f6,	// (0x0001fb8f) list_single_heading_pane

0xb1f6,	// (0x0001fb8f) list_single_large_graphic_pane_ParamLimits

0xb1f6,	// (0x0001fb8f) list_single_large_graphic_pane

0xb1f6,	// (0x0001fb8f) list_single_number_heading_pane_ParamLimits

0xb1f6,	// (0x0001fb8f) list_single_number_heading_pane

0xb1f6,	// (0x0001fb8f) list_single_number_pane_ParamLimits

0xb1f6,	// (0x0001fb8f) list_single_number_pane

0xb1f6,	// (0x0001fb8f) list_single_pane_ParamLimits

0xb1f6,	// (0x0001fb8f) list_single_pane

0xb891,	// (0x0002022a) list_highlight_pane_cp1

0x0796,	// (0x0001512f) list_single_pane_g1_ParamLimits

0x0796,	// (0x0001512f) list_single_pane_g1

0x16a4,	// (0x0001603d) list_single_pane_g2_ParamLimits

0x16a4,	// (0x0001603d) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00023f61) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00023f61) list_single_pane_g

0x36c7,	// (0x00018060) list_single_pane_t1_ParamLimits

0x36c7,	// (0x00018060) list_single_pane_t1

0x0796,	// (0x0001512f) list_single_number_pane_g1_ParamLimits

0x0796,	// (0x0001512f) list_single_number_pane_g1

0x16a4,	// (0x0001603d) list_single_number_pane_g2_ParamLimits

0x16a4,	// (0x0001603d) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00023f61) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00023f61) list_single_number_pane_g

0x16b0,	// (0x00016049) list_single_number_pane_t1_ParamLimits

0x16b0,	// (0x00016049) list_single_number_pane_t1

0xb000,	// (0x0001f999) list_single_number_pane_t2_ParamLimits

0xb000,	// (0x0001f999) list_single_number_pane_t2

0x0001,

0xf955,	// (0x000242ee) list_single_number_pane_t_ParamLimits

0xf955,	// (0x000242ee) list_single_number_pane_t

0x4c48,	// (0x000195e1) list_single_graphic_pane_g1_ParamLimits

0x4c48,	// (0x000195e1) list_single_graphic_pane_g1

0x0796,	// (0x0001512f) list_single_graphic_pane_g2_ParamLimits

0x0796,	// (0x0001512f) list_single_graphic_pane_g2

0x16a4,	// (0x0001603d) list_single_graphic_pane_g3_ParamLimits

0x16a4,	// (0x0001603d) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00023f5a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00023f5a) list_single_graphic_pane_g

0x9671,	// (0x0001e00a) list_single_graphic_pane_t1_ParamLimits

0x9671,	// (0x0001e00a) list_single_graphic_pane_t1

0x0796,	// (0x0001512f) list_single_heading_pane_g1_ParamLimits

0x0796,	// (0x0001512f) list_single_heading_pane_g1

0x16a4,	// (0x0001603d) list_single_heading_pane_g2_ParamLimits

0x16a4,	// (0x0001603d) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023f61) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023f61) list_single_heading_pane_g

0x36e9,	// (0x00018082) list_single_heading_pane_t1_ParamLimits

0x36e9,	// (0x00018082) list_single_heading_pane_t1

0x9687,	// (0x0001e020) list_single_heading_pane_t2_ParamLimits

0x9687,	// (0x0001e020) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00023f66) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00023f66) list_single_heading_pane_t

0x0796,	// (0x0001512f) list_single_number_heading_pane_g1_ParamLimits

0x0796,	// (0x0001512f) list_single_number_heading_pane_g1

0x16a4,	// (0x0001603d) list_single_number_heading_pane_g2_ParamLimits

0x16a4,	// (0x0001603d) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00023f61) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00023f61) list_single_number_heading_pane_g

0x36e9,	// (0x00018082) list_single_number_heading_pane_t1_ParamLimits

0x36e9,	// (0x00018082) list_single_number_heading_pane_t1

0x9699,	// (0x0001e032) list_single_number_heading_pane_t2_ParamLimits

0x9699,	// (0x0001e032) list_single_number_heading_pane_t2

0x36a3,	// (0x0001803c) list_single_number_heading_pane_t3_ParamLimits

0x36a3,	// (0x0001803c) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00023f6b) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00023f6b) list_single_number_heading_pane_t

0x1698,	// (0x00016031) list_single_graphic_heading_pane_g1_ParamLimits

0x1698,	// (0x00016031) list_single_graphic_heading_pane_g1

0x96ab,	// (0x0001e044) list_single_graphic_heading_pane_g4_ParamLimits

0x96ab,	// (0x0001e044) list_single_graphic_heading_pane_g4

0x16a4,	// (0x0001603d) list_single_graphic_heading_pane_g5_ParamLimits

0x16a4,	// (0x0001603d) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00023f72) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00023f72) list_single_graphic_heading_pane_g

0x36e9,	// (0x00018082) list_single_graphic_heading_pane_t1_ParamLimits

0x36e9,	// (0x00018082) list_single_graphic_heading_pane_t1

0x96bc,	// (0x0001e055) list_single_graphic_heading_pane_t2_ParamLimits

0x96bc,	// (0x0001e055) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00023f79) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00023f79) list_single_graphic_heading_pane_t

0x36dd,	// (0x00018076) list_single_large_graphic_pane_g1_ParamLimits

0x36dd,	// (0x00018076) list_single_large_graphic_pane_g1

0x0796,	// (0x0001512f) list_single_large_graphic_pane_g2_ParamLimits

0x0796,	// (0x0001512f) list_single_large_graphic_pane_g2

0x16a4,	// (0x0001603d) list_single_large_graphic_pane_g3_ParamLimits

0x16a4,	// (0x0001603d) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00023f7e) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00023f7e) list_single_large_graphic_pane_g

0x1de0,	// (0x00016779) wait_border_pane_g2_copy1

0x96ce,	// (0x0001e067) list_single_large_graphic_pane_g4_cp2

0x36e9,	// (0x00018082) list_single_large_graphic_pane_t1_ParamLimits

0x36e9,	// (0x00018082) list_single_large_graphic_pane_t1

0x96d6,	// (0x0001e06f) list_double_pane_g1_ParamLimits

0x96d6,	// (0x0001e06f) list_double_pane_g1

0x96e2,	// (0x0001e07b) list_double_pane_g2_ParamLimits

0x96e2,	// (0x0001e07b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00023f85) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00023f85) list_double_pane_g

0x96ee,	// (0x0001e087) list_double_pane_t1_ParamLimits

0x96ee,	// (0x0001e087) list_double_pane_t1

0x9704,	// (0x0001e09d) list_double_pane_t2_ParamLimits

0x9704,	// (0x0001e09d) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00023f8a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00023f8a) list_double_pane_t

0x9716,	// (0x0001e0af) list_double2_pane_g1_ParamLimits

0x9716,	// (0x0001e0af) list_double2_pane_g1

0x9727,	// (0x0001e0c0) list_double2_pane_g2_ParamLimits

0x9727,	// (0x0001e0c0) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00023f8f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00023f8f) list_double2_pane_g

0x9733,	// (0x0001e0cc) list_double2_pane_t1_ParamLimits

0x9733,	// (0x0001e0cc) list_double2_pane_t1

0x9749,	// (0x0001e0e2) list_double2_pane_t2_ParamLimits

0x9749,	// (0x0001e0e2) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00023f94) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00023f94) list_double2_pane_t

0x96d6,	// (0x0001e06f) list_double_number_pane_g1_ParamLimits

0x96d6,	// (0x0001e06f) list_double_number_pane_g1

0x96e2,	// (0x0001e07b) list_double_number_pane_g2_ParamLimits

0x96e2,	// (0x0001e07b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00023f85) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00023f85) list_double_number_pane_g

0x975b,	// (0x0001e0f4) list_double_number_pane_t1_ParamLimits

0x975b,	// (0x0001e0f4) list_double_number_pane_t1

0x976d,	// (0x0001e106) list_double_number_pane_t2_ParamLimits

0x976d,	// (0x0001e106) list_double_number_pane_t2

0x9783,	// (0x0001e11c) list_double_number_pane_t3_ParamLimits

0x9783,	// (0x0001e11c) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00023f99) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00023f99) list_double_number_pane_t

0xd867,	// (0x00022200) list_double_graphic_pane_g1_ParamLimits

0xd867,	// (0x00022200) list_double_graphic_pane_g1

0x9795,	// (0x0001e12e) list_double_graphic_pane_g2_ParamLimits

0x9795,	// (0x0001e12e) list_double_graphic_pane_g2

0x97a4,	// (0x0001e13d) list_double_graphic_pane_g3_ParamLimits

0x97a4,	// (0x0001e13d) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00023fa0) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00023fa0) list_double_graphic_pane_g

0x97bc,	// (0x0001e155) list_double_graphic_pane_t1_ParamLimits

0x97bc,	// (0x0001e155) list_double_graphic_pane_t1

0x97d2,	// (0x0001e16b) list_double_graphic_pane_t2_ParamLimits

0x97d2,	// (0x0001e16b) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00023fa9) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00023fa9) list_double_graphic_pane_t

0x97e4,	// (0x0001e17d) list_double2_graphic_pane_g1_ParamLimits

0x97e4,	// (0x0001e17d) list_double2_graphic_pane_g1

0x97f0,	// (0x0001e189) list_double2_graphic_pane_g2_ParamLimits

0x97f0,	// (0x0001e189) list_double2_graphic_pane_g2

0x9727,	// (0x0001e0c0) list_double2_graphic_pane_g3_ParamLimits

0x9727,	// (0x0001e0c0) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00023fae) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00023fae) list_double2_graphic_pane_g

0x97fc,	// (0x0001e195) list_double2_graphic_pane_t1_ParamLimits

0x97fc,	// (0x0001e195) list_double2_graphic_pane_t1

0x9812,	// (0x0001e1ab) list_double2_graphic_pane_t2_ParamLimits

0x9812,	// (0x0001e1ab) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00023fb5) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00023fb5) list_double2_graphic_pane_t

0x9824,	// (0x0001e1bd) list_double_large_graphic_pane_g1_ParamLimits

0x9824,	// (0x0001e1bd) list_double_large_graphic_pane_g1

0x984f,	// (0x0001e1e8) list_double_large_graphic_pane_g2_ParamLimits

0x984f,	// (0x0001e1e8) list_double_large_graphic_pane_g2

0x96e2,	// (0x0001e07b) list_double_large_graphic_pane_g3_ParamLimits

0x96e2,	// (0x0001e07b) list_double_large_graphic_pane_g3

0x9860,	// (0x0001e1f9) list_double_large_graphic_pane_g4_ParamLimits

0x9860,	// (0x0001e1f9) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00023fba) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00023fba) list_double_large_graphic_pane_g

0x9872,	// (0x0001e20b) list_double_large_graphic_pane_t1_ParamLimits

0x9872,	// (0x0001e20b) list_double_large_graphic_pane_t1

0x988b,	// (0x0001e224) list_double_large_graphic_pane_t2_ParamLimits

0x988b,	// (0x0001e224) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00023fc5) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00023fc5) list_double_large_graphic_pane_t

0x989d,	// (0x0001e236) list_double2_large_graphic_pane_g1_ParamLimits

0x989d,	// (0x0001e236) list_double2_large_graphic_pane_g1

0x9716,	// (0x0001e0af) list_double2_large_graphic_pane_g2_ParamLimits

0x9716,	// (0x0001e0af) list_double2_large_graphic_pane_g2

0x9727,	// (0x0001e0c0) list_double2_large_graphic_pane_g3_ParamLimits

0x9727,	// (0x0001e0c0) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00023fca) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00023fca) list_double2_large_graphic_pane_g

0x98a9,	// (0x0001e242) list_double2_large_graphic_pane_t1_ParamLimits

0x98a9,	// (0x0001e242) list_double2_large_graphic_pane_t1

0x98bf,	// (0x0001e258) list_double2_large_graphic_pane_t2_ParamLimits

0x98bf,	// (0x0001e258) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00023fd1) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00023fd1) list_double2_large_graphic_pane_t

0x98d1,	// (0x0001e26a) list_double_heading_pane_g1_ParamLimits

0x98d1,	// (0x0001e26a) list_double_heading_pane_g1

0x98e2,	// (0x0001e27b) list_double_heading_pane_g2_ParamLimits

0x98e2,	// (0x0001e27b) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00023fd6) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00023fd6) list_double_heading_pane_g

0x98ee,	// (0x0001e287) list_double_heading_pane_t1_ParamLimits

0x98ee,	// (0x0001e287) list_double_heading_pane_t1

0x9904,	// (0x0001e29d) list_double_heading_pane_t2_ParamLimits

0x9904,	// (0x0001e29d) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00023fdb) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00023fdb) list_double_heading_pane_t

0x9916,	// (0x0001e2af) list_double_graphic_heading_pane_g1_ParamLimits

0x9916,	// (0x0001e2af) list_double_graphic_heading_pane_g1

0x98d1,	// (0x0001e26a) list_double_graphic_heading_pane_g2_ParamLimits

0x98d1,	// (0x0001e26a) list_double_graphic_heading_pane_g2

0x98e2,	// (0x0001e27b) list_double_graphic_heading_pane_g3_ParamLimits

0x98e2,	// (0x0001e27b) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00023fe0) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00023fe0) list_double_graphic_heading_pane_g

0x9922,	// (0x0001e2bb) list_double_graphic_heading_pane_t1_ParamLimits

0x9922,	// (0x0001e2bb) list_double_graphic_heading_pane_t1

0x9938,	// (0x0001e2d1) list_double_graphic_heading_pane_t2_ParamLimits

0x9938,	// (0x0001e2d1) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00023fe7) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00023fe7) list_double_graphic_heading_pane_t

0x984f,	// (0x0001e1e8) list_double_time_pane_g1_ParamLimits

0x984f,	// (0x0001e1e8) list_double_time_pane_g1

0x96e2,	// (0x0001e07b) list_double_time_pane_g2_ParamLimits

0x96e2,	// (0x0001e07b) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00023fec) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00023fec) list_double_time_pane_g

0x994a,	// (0x0001e2e3) list_double_time_pane_t1_ParamLimits

0x994a,	// (0x0001e2e3) list_double_time_pane_t1

0x9960,	// (0x0001e2f9) list_double_time_pane_t2_ParamLimits

0x9960,	// (0x0001e2f9) list_double_time_pane_t2

0x9972,	// (0x0001e30b) list_double_time_pane_t3_ParamLimits

0x9972,	// (0x0001e30b) list_double_time_pane_t3

0x9984,	// (0x0001e31d) list_double_time_pane_t4_ParamLimits

0x9984,	// (0x0001e31d) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00023ff1) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00023ff1) list_double_time_pane_t

0x97f0,	// (0x0001e189) list_setting_pane_g1_ParamLimits

0x97f0,	// (0x0001e189) list_setting_pane_g1

0x9727,	// (0x0001e0c0) list_setting_pane_g2_ParamLimits

0x9727,	// (0x0001e0c0) list_setting_pane_g2

0x0001,

0xf661,	// (0x00023ffa) list_setting_pane_g_ParamLimits

0xf661,	// (0x00023ffa) list_setting_pane_g

0x9996,	// (0x0001e32f) list_setting_pane_t1_ParamLimits

0x9996,	// (0x0001e32f) list_setting_pane_t1

0x99ad,	// (0x0001e346) list_setting_pane_t2_ParamLimits

0x99ad,	// (0x0001e346) list_setting_pane_t2

0x0002,

0xf666,	// (0x00023fff) list_setting_pane_t_ParamLimits

0xf666,	// (0x00023fff) list_setting_pane_t

0x99ec,	// (0x0001e385) set_value_pane_cp_ParamLimits

0x99ec,	// (0x0001e385) set_value_pane_cp

0x97f0,	// (0x0001e189) list_setting_number_pane_g1_ParamLimits

0x97f0,	// (0x0001e189) list_setting_number_pane_g1

0x9727,	// (0x0001e0c0) list_setting_number_pane_g2_ParamLimits

0x9727,	// (0x0001e0c0) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00023ffa) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00023ffa) list_setting_number_pane_g

0x99fa,	// (0x0001e393) list_setting_number_pane_t1_ParamLimits

0x99fa,	// (0x0001e393) list_setting_number_pane_t1

0x9a0e,	// (0x0001e3a7) list_setting_number_pane_t2_ParamLimits

0x9a0e,	// (0x0001e3a7) list_setting_number_pane_t2

0x9a25,	// (0x0001e3be) list_setting_number_pane_t3_ParamLimits

0x9a25,	// (0x0001e3be) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x00024006) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x00024006) list_setting_number_pane_t

0x99ec,	// (0x0001e385) set_value_pane_ParamLimits

0x99ec,	// (0x0001e385) set_value_pane

0xd888,	// (0x00022221) bg_set_opt_pane_ParamLimits

0xd888,	// (0x00022221) bg_set_opt_pane

0xd8a9,	// (0x00022242) set_value_pane_t1

0xd8b7,	// (0x00022250) slider_set_pane_cp3

0xd8c0,	// (0x00022259) volume_small_pane_cp

0xd8c9,	// (0x00022262) list_form_gen_pane

0xd8d2,	// (0x0002226b) scroll_pane_cp8

0x9a68,	// (0x0001e401) form_field_data_pane_ParamLimits

0x9a68,	// (0x0001e401) form_field_data_pane

0x9a83,	// (0x0001e41c) form_field_data_wide_pane_ParamLimits

0x9a83,	// (0x0001e41c) form_field_data_wide_pane

0x9aa7,	// (0x0001e440) form_field_popup_pane_ParamLimits

0x9aa7,	// (0x0001e440) form_field_popup_pane

0xd8f3,	// (0x0002228c) form_field_popup_wide_pane_ParamLimits

0xd8f3,	// (0x0002228c) form_field_popup_wide_pane

0xd914,	// (0x000222ad) form_field_slider_pane_ParamLimits

0xd914,	// (0x000222ad) form_field_slider_pane

0xd927,	// (0x000222c0) form_field_slider_wide_pane_ParamLimits

0xd927,	// (0x000222c0) form_field_slider_wide_pane

0xd93a,	// (0x000222d3) data_form_pane

0x9ad3,	// (0x0001e46c) form_field_data_pane_t1

0xd946,	// (0x000222df) input_focus_pane

0xd954,	// (0x000222ed) data_form_wide_pane

0xd991,	// (0x0002232a) form_field_data_wide_pane_t1

0xbca3,	// (0x0002063c) input_focus_pane_cp6

0x9aed,	// (0x0001e486) form_field_popup_pane_t1

0xd946,	// (0x000222df) input_focus_pane_cp7

0xd9b3,	// (0x0002234c) list_form_pane

0xd9c7,	// (0x00022360) form_field_popup_wide_pane_t1

0xd946,	// (0x000222df) input_focus_pane_cp8

0xd9dc,	// (0x00022375) list_form_wide_pane

0x9b0f,	// (0x0001e4a8) form_field_slider_pane_t1_ParamLimits

0x9b0f,	// (0x0001e4a8) form_field_slider_pane_t1

0x9b27,	// (0x0001e4c0) form_field_slider_pane_t2_ParamLimits

0x9b27,	// (0x0001e4c0) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x00024016) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x00024016) form_field_slider_pane_t

0xb8eb,	// (0x00020284) input_focus_pane_cp9_ParamLimits

0xb8eb,	// (0x00020284) input_focus_pane_cp9

0x9b3c,	// (0x0001e4d5) slider_cont_pane_ParamLimits

0x9b3c,	// (0x0001e4d5) slider_cont_pane

0xd9eb,	// (0x00022384) form_field_slider_wide_pane_t1_ParamLimits

0xd9eb,	// (0x00022384) form_field_slider_wide_pane_t1

0xd9fd,	// (0x00022396) form_field_slider_wide_pane_t2_ParamLimits

0xd9fd,	// (0x00022396) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0002401b) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0002401b) form_field_slider_wide_pane_t

0xb8eb,	// (0x00020284) input_focus_pane_cp10_ParamLimits

0xb8eb,	// (0x00020284) input_focus_pane_cp10

0x9b50,	// (0x0001e4e9) slider_cont_pane_cp1_ParamLimits

0x9b50,	// (0x0001e4e9) slider_cont_pane_cp1

0x9b64,	// (0x0001e4fd) slider_form_pane_cp

0xda0f,	// (0x000223a8) input_focus_pane_g1

0xda17,	// (0x000223b0) input_focus_pane_g2

0xda1f,	// (0x000223b8) input_focus_pane_g3

0xda27,	// (0x000223c0) input_focus_pane_g4

0xda2f,	// (0x000223c8) input_focus_pane_g5

0xda37,	// (0x000223d0) input_focus_pane_g6

0xda3f,	// (0x000223d8) input_focus_pane_g7

0xda47,	// (0x000223e0) input_focus_pane_g8

0xda4f,	// (0x000223e8) input_focus_pane_g9

0xb887,	// (0x00020220) input_focus_pane_g10

0x0009,

0xf687,	// (0x00024020) input_focus_pane_g

0x1de9,	// (0x00016782) wait_border_pane_g3_copy1

0x9b6c,	// (0x0001e505) data_form_pane_t1

0xb887,	// (0x00020220) wait_anim_pane_g1_copy1

0xb1b7,	// (0x0001fb50) data_form_wide_pane_t1

0xda57,	// (0x000223f0) list_form_graphic_pane_cp_ParamLimits

0xda57,	// (0x000223f0) list_form_graphic_pane_cp

0x2d70,	// (0x00017709) slider_form_pane_g1

0x2d79,	// (0x00017712) slider_form_pane_g2

0x0006,

0xf985,	// (0x0002431e) slider_form_pane_g

0x9b88,	// (0x0001e521) list_form_graphic_pane_ParamLimits

0x9b88,	// (0x0001e521) list_form_graphic_pane

0xda69,	// (0x00022402) list_form_graphic_pane_g1

0xda71,	// (0x0002240a) list_form_graphic_pane_t1_ParamLimits

0xda71,	// (0x0002240a) list_form_graphic_pane_t1

0xb8f9,	// (0x00020292) list_highlight_pane_cp5_ParamLimits

0xb8f9,	// (0x00020292) list_highlight_pane_cp5

0x9b99,	// (0x0001e532) find_pane_g1

0xda86,	// (0x0002241f) input_find_pane

0x9ba2,	// (0x0001e53b) input_find_pane_g1_ParamLimits

0x9ba2,	// (0x0001e53b) input_find_pane_g1

0x9bae,	// (0x0001e547) input_find_pane_t1_ParamLimits

0x9bae,	// (0x0001e547) input_find_pane_t1

0x9bc3,	// (0x0001e55c) input_find_pane_t2_ParamLimits

0x9bc3,	// (0x0001e55c) input_find_pane_t2

0x0001,

0xf69c,	// (0x00024035) input_find_pane_t_ParamLimits

0xf69c,	// (0x00024035) input_find_pane_t

0xda8f,	// (0x00022428) input_focus_pane_cp5_ParamLimits

0xda8f,	// (0x00022428) input_focus_pane_cp5

0xda9d,	// (0x00022436) bg_popup_window_pane_cp2_ParamLimits

0xda9d,	// (0x00022436) bg_popup_window_pane_cp2

0xdaaa,	// (0x00022443) listscroll_menu_pane_ParamLimits

0xdaaa,	// (0x00022443) listscroll_menu_pane

0x9be4,	// (0x0001e57d) popup_submenu_window_ParamLimits

0x9be4,	// (0x0001e57d) popup_submenu_window

0xdab6,	// (0x0002244f) find_popup_pane_g1

0xdabe,	// (0x00022457) input_popup_find_pane_cp

0xda8f,	// (0x00022428) input_focus_pane_cp4_ParamLimits

0xda8f,	// (0x00022428) input_focus_pane_cp4

0xdac8,	// (0x00022461) input_popup_find_pane_t1_ParamLimits

0xdac8,	// (0x00022461) input_popup_find_pane_t1

0xb891,	// (0x0002022a) bg_popup_sub_pane_cp

0xdaf6,	// (0x0002248f) listscroll_popup_sub_pane

0xdafe,	// (0x00022497) list_submenu_pane_ParamLimits

0xdafe,	// (0x00022497) list_submenu_pane

0xdb0f,	// (0x000224a8) scroll_pane_cp4

0xdb17,	// (0x000224b0) list_single_popup_submenu_pane_ParamLimits

0xdb17,	// (0x000224b0) list_single_popup_submenu_pane

0xdb2c,	// (0x000224c5) list_single_popup_submenu_pane_g1

0xdb34,	// (0x000224cd) list_single_popup_submenu_pane_t1_ParamLimits

0xdb34,	// (0x000224cd) list_single_popup_submenu_pane_t1

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp1_ParamLimits

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp1

0x9c22,	// (0x0001e5bb) tabs_2_active_pane_g1

0x9c2a,	// (0x0001e5c3) tabs_2_active_pane_t1

0xb8eb,	// (0x00020284) bg_passive_tab_pane_cp1_ParamLimits

0xb8eb,	// (0x00020284) bg_passive_tab_pane_cp1

0x9c22,	// (0x0001e5bb) tabs_2_passive_pane_g1

0x9c2a,	// (0x0001e5c3) tabs_2_passive_pane_t1

0xb8f9,	// (0x00020292) bg_active_tab_pane_cp4

0x9c3c,	// (0x0001e5d5) tabs_2_long_active_pane_t1

0x0bab,	// (0x00015544) bg_passive_tab_pane_cp4

0xe7d1,	// (0x0002316a) list_single_midp_graphic_pane_g4_ParamLimits

0xb8f9,	// (0x00020292) bg_active_tab_pane_cp5

0x9c4f,	// (0x0001e5e8) tabs_3_long_active_pane_t1

0x0bab,	// (0x00015544) bg_passive_tab_pane_cp5

0xe7d1,	// (0x0002316a) list_single_midp_graphic_pane_g4

0xb8f9,	// (0x00020292) bg_popup_window_pane_cp13_ParamLimits

0xb8f9,	// (0x00020292) bg_popup_window_pane_cp13

0xdb52,	// (0x000224eb) listscroll_popup_fast_pane_ParamLimits

0xdb52,	// (0x000224eb) listscroll_popup_fast_pane

0xdb61,	// (0x000224fa) grid_popup_fast_pane_ParamLimits

0xdb61,	// (0x000224fa) grid_popup_fast_pane

0xdb73,	// (0x0002250c) scroll_pane_cp9_ParamLimits

0xdb73,	// (0x0002250c) scroll_pane_cp9

0x4cc2,	// (0x0001965b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4cc2,	// (0x0001965b) list_single_graphic_hl_pane_t1_cp2

0xdb97,	// (0x00022530) input_focus_pane_cp20_ParamLimits

0xdb97,	// (0x00022530) input_focus_pane_cp20

0xdba5,	// (0x0002253e) query_popup_data_pane_t1_ParamLimits

0xdba5,	// (0x0002253e) query_popup_data_pane_t1

0xdbb8,	// (0x00022551) query_popup_data_pane_t2_ParamLimits

0xdbb8,	// (0x00022551) query_popup_data_pane_t2

0xdbfe,	// (0x00022597) query_popup_data_pane_t3_ParamLimits

0xdbfe,	// (0x00022597) query_popup_data_pane_t3

0xdc3f,	// (0x000225d8) query_popup_data_pane_t4_ParamLimits

0xdc3f,	// (0x000225d8) query_popup_data_pane_t4

0xdc7b,	// (0x00022614) query_popup_data_pane_t5_ParamLimits

0xdc7b,	// (0x00022614) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0002403a) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0002403a) query_popup_data_pane_t

0xda0f,	// (0x000223a8) bg_set_opt_pane_g1

0xda17,	// (0x000223b0) bg_set_opt_pane_g2

0xda1f,	// (0x000223b8) bg_set_opt_pane_g3

0xda27,	// (0x000223c0) bg_set_opt_pane_g4

0xda2f,	// (0x000223c8) bg_set_opt_pane_g5

0xda37,	// (0x000223d0) bg_set_opt_pane_g6

0xda3f,	// (0x000223d8) bg_set_opt_pane_g7

0xda47,	// (0x000223e0) bg_set_opt_pane_g8

0xda4f,	// (0x000223e8) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x00024045) bg_set_opt_pane_g

0xe51d,	// (0x00022eb6) control_top_pane_stacon_ParamLimits

0xe51d,	// (0x00022eb6) control_top_pane_stacon

0xe570,	// (0x00022f09) signal_pane_stacon_ParamLimits

0xe570,	// (0x00022f09) signal_pane_stacon

0xe1d3,	// (0x00022b6c) stacon_top_pane_g1_ParamLimits

0xe1d3,	// (0x00022b6c) stacon_top_pane_g1

0xe595,	// (0x00022f2e) title_pane_stacon_ParamLimits

0xe595,	// (0x00022f2e) title_pane_stacon

0xe5bf,	// (0x00022f58) uni_indicator_pane_stacon_ParamLimits

0xe5bf,	// (0x00022f58) uni_indicator_pane_stacon

0xe5d7,	// (0x00022f70) battery_pane_stacon_ParamLimits

0xe5d7,	// (0x00022f70) battery_pane_stacon

0xe61b,	// (0x00022fb4) control_bottom_pane_stacon_ParamLimits

0xe61b,	// (0x00022fb4) control_bottom_pane_stacon

0xe63e,	// (0x00022fd7) navi_pane_stacon_ParamLimits

0xe63e,	// (0x00022fd7) navi_pane_stacon

0xe1f5,	// (0x00022b8e) stacon_bottom_pane_g1_ParamLimits

0xe1f5,	// (0x00022b8e) stacon_bottom_pane_g1

0xdcb2,	// (0x0002264b) aid_levels_signal_lsc_ParamLimits

0xdcb2,	// (0x0002264b) aid_levels_signal_lsc

0xdcc9,	// (0x00022662) signal_pane_stacon_g1_ParamLimits

0xdcc9,	// (0x00022662) signal_pane_stacon_g1

0xdcdd,	// (0x00022676) signal_pane_stacon_g2_ParamLimits

0xdcdd,	// (0x00022676) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x00024058) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x00024058) signal_pane_stacon_g

0xdd1f,	// (0x000226b8) title_pane_stacon_t1_ParamLimits

0xdd1f,	// (0x000226b8) title_pane_stacon_t1

0xdd44,	// (0x000226dd) uni_indicator_pane_stacon_g1

0xdd4e,	// (0x000226e7) uni_indicator_pane_stacon_g2

0xdd58,	// (0x000226f1) uni_indicator_pane_stacon_g3

0xdd62,	// (0x000226fb) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00024064) uni_indicator_pane_stacon_g

0xdd6c,	// (0x00022705) control_top_pane_stacon_g1

0xdd74,	// (0x0002270d) control_top_pane_stacon_t1_ParamLimits

0xdd74,	// (0x0002270d) control_top_pane_stacon_t1

0xddab,	// (0x00022744) aid_levels_battery_lsc_ParamLimits

0xddab,	// (0x00022744) aid_levels_battery_lsc

0xddc3,	// (0x0002275c) battery_pane_stacon_g1_ParamLimits

0xddc3,	// (0x0002275c) battery_pane_stacon_g1

0xddd6,	// (0x0002276f) battery_pane_stacon_g2_ParamLimits

0xddd6,	// (0x0002276f) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0002406d) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0002406d) battery_pane_stacon_g

0xde14,	// (0x000227ad) navi_icon_pane_stacon

0xe3c4,	// (0x00022d5d) navi_navi_pane_stacon

0xde14,	// (0x000227ad) navi_text_pane_stacon

0xdd6c,	// (0x00022705) control_bottom_pane_stacon_g1

0xe3da,	// (0x00022d73) control_bottom_pane_stacon_t1_ParamLimits

0xe3da,	// (0x00022d73) control_bottom_pane_stacon_t1

0x9c61,	// (0x0001e5fa) grid_app_pane_ParamLimits

0x9c61,	// (0x0001e5fa) grid_app_pane

0x9c99,	// (0x0001e632) scroll_pane_cp15_ParamLimits

0x9c99,	// (0x0001e632) scroll_pane_cp15

0x9cae,	// (0x0001e647) cell_app_pane_ParamLimits

0x9cae,	// (0x0001e647) cell_app_pane

0x9cfb,	// (0x0001e694) cell_app_pane_g1_ParamLimits

0x9cfb,	// (0x0001e694) cell_app_pane_g1

0xde42,	// (0x000227db) cell_app_pane_g2_ParamLimits

0xde42,	// (0x000227db) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x00024072) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x00024072) cell_app_pane_g

0xde4e,	// (0x000227e7) cell_app_pane_t1_ParamLimits

0xde4e,	// (0x000227e7) cell_app_pane_t1

0xde65,	// (0x000227fe) grid_highlight_pane_ParamLimits

0xde65,	// (0x000227fe) grid_highlight_pane

0xda0f,	// (0x000223a8) cell_highlight_pane_g1

0xda17,	// (0x000223b0) cell_highlight_pane_g2

0xda1f,	// (0x000223b8) cell_highlight_pane_g3

0xda27,	// (0x000223c0) cell_highlight_pane_g4

0xda2f,	// (0x000223c8) cell_highlight_pane_g5

0xda37,	// (0x000223d0) cell_highlight_pane_g6

0xda3f,	// (0x000223d8) cell_highlight_pane_g7

0xda47,	// (0x000223e0) cell_highlight_pane_g8

0xda4f,	// (0x000223e8) cell_highlight_pane_g9

0xb887,	// (0x00020220) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00024020) cell_highlight_pane_g

0xde76,	// (0x0002280f) bg_scroll_pane

0xe41b,	// (0x00022db4) scroll_handle_pane

0xdebd,	// (0x00022856) scroll_bg_pane_g1

0xded2,	// (0x0002286b) scroll_bg_pane_g2

0xdeea,	// (0x00022883) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00024077) scroll_bg_pane_g

0xdeff,	// (0x00022898) scroll_handle_focus_pane_ParamLimits

0xdeff,	// (0x00022898) scroll_handle_focus_pane

0xdebd,	// (0x00022856) scroll_handle_pane_g1

0xdf0c,	// (0x000228a5) scroll_handle_pane_g2

0xdeea,	// (0x00022883) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0002407e) scroll_handle_pane_g

0xda8f,	// (0x00022428) bg_popup_sub_pane_cp21_ParamLimits

0xda8f,	// (0x00022428) bg_popup_sub_pane_cp21

0xdf20,	// (0x000228b9) popup_fep_japan_predictive_window_t1_ParamLimits

0xdf20,	// (0x000228b9) popup_fep_japan_predictive_window_t1

0xdf37,	// (0x000228d0) popup_fep_japan_predictive_window_t2_ParamLimits

0xdf37,	// (0x000228d0) popup_fep_japan_predictive_window_t2

0xdf6a,	// (0x00022903) popup_fep_japan_predictive_window_t3_ParamLimits

0xdf6a,	// (0x00022903) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00024085) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00024085) popup_fep_japan_predictive_window_t

0xb891,	// (0x0002022a) bg_popup_sub_pane_cp23

0xdfa1,	// (0x0002293a) listscroll_japin_cand_pane

0xdfa9,	// (0x00022942) popup_fep_japan_candidate_window_t1

0xdfb7,	// (0x00022950) candidate_pane_ParamLimits

0xdfb7,	// (0x00022950) candidate_pane

0xdfc9,	// (0x00022962) scroll_pane_cp30

0xdfd3,	// (0x0002296c) list_single_popup_jap_candidate_pane_ParamLimits

0xdfd3,	// (0x0002296c) list_single_popup_jap_candidate_pane

0xb891,	// (0x0002022a) list_highlight_pane_cp30

0xdfe7,	// (0x00022980) list_single_popup_jap_candidate_pane_t1

0x9d1b,	// (0x0001e6b4) level_1_signal

0x9d2d,	// (0x0001e6c6) level_2_signal

0x9d40,	// (0x0001e6d9) level_3_signal

0x9d53,	// (0x0001e6ec) level_4_signal

0x9d66,	// (0x0001e6ff) level_5_signal

0x9d79,	// (0x0001e712) level_6_signal

0x9d8c,	// (0x0001e725) level_7_signal

0x9d1b,	// (0x0001e6b4) level_1_battery

0x9d2d,	// (0x0001e6c6) level_2_battery

0x9d40,	// (0x0001e6d9) level_3_battery

0x9d53,	// (0x0001e6ec) level_4_battery

0x9d66,	// (0x0001e6ff) level_5_battery

0x9d79,	// (0x0001e712) level_6_battery

0x9d8c,	// (0x0001e725) level_7_battery

0xe00e,	// (0x000229a7) list_menu_pane_ParamLimits

0xe00e,	// (0x000229a7) list_menu_pane

0xe024,	// (0x000229bd) scroll_pane_cp25_ParamLimits

0xe024,	// (0x000229bd) scroll_pane_cp25

0xe03d,	// (0x000229d6) list_double2_graphic_pane_cp2_ParamLimits

0xe03d,	// (0x000229d6) list_double2_graphic_pane_cp2

0xe03d,	// (0x000229d6) list_double2_large_graphic_pane_cp2_ParamLimits

0xe03d,	// (0x000229d6) list_double2_large_graphic_pane_cp2

0xe03d,	// (0x000229d6) list_double2_pane_cp2_ParamLimits

0xe03d,	// (0x000229d6) list_double2_pane_cp2

0xe03d,	// (0x000229d6) list_double_graphic_pane_cp2_ParamLimits

0xe03d,	// (0x000229d6) list_double_graphic_pane_cp2

0xe03d,	// (0x000229d6) list_double_large_graphic_pane_cp2_ParamLimits

0xe03d,	// (0x000229d6) list_double_large_graphic_pane_cp2

0xe03d,	// (0x000229d6) list_double_number_pane_cp2_ParamLimits

0xe03d,	// (0x000229d6) list_double_number_pane_cp2

0xe03d,	// (0x000229d6) list_double_pane_cp2_ParamLimits

0xe03d,	// (0x000229d6) list_double_pane_cp2

0x9db2,	// (0x0001e74b) list_single_2graphic_pane_cp2_ParamLimits

0x9db2,	// (0x0001e74b) list_single_2graphic_pane_cp2

0x9db2,	// (0x0001e74b) list_single_graphic_heading_pane_cp2_ParamLimits

0x9db2,	// (0x0001e74b) list_single_graphic_heading_pane_cp2

0x9db2,	// (0x0001e74b) list_single_graphic_pane_cp2_ParamLimits

0x9db2,	// (0x0001e74b) list_single_graphic_pane_cp2

0x9db2,	// (0x0001e74b) list_single_heading_pane_cp2_ParamLimits

0x9db2,	// (0x0001e74b) list_single_heading_pane_cp2

0xe04d,	// (0x000229e6) list_single_large_graphic_pane_cp2_ParamLimits

0xe04d,	// (0x000229e6) list_single_large_graphic_pane_cp2

0x9db2,	// (0x0001e74b) list_single_number_heading_pane_cp2_ParamLimits

0x9db2,	// (0x0001e74b) list_single_number_heading_pane_cp2

0x9db2,	// (0x0001e74b) list_single_number_pane_cp2_ParamLimits

0x9db2,	// (0x0001e74b) list_single_number_pane_cp2

0x9db2,	// (0x0001e74b) list_single_pane_cp2_ParamLimits

0x9db2,	// (0x0001e74b) list_single_pane_cp2

0xe066,	// (0x000229ff) bg_popup_sub_pane_cp22

0xe4cd,	// (0x00022e66) popup_side_volume_key_window_g1

0xe4f7,	// (0x00022e90) popup_side_volume_key_window_t1

0xe515,	// (0x00022eae) volume_small_pane_cp1

0xb8eb,	// (0x00020284) bg_popup_sub_pane_cp24_ParamLimits

0xb8eb,	// (0x00020284) bg_popup_sub_pane_cp24

0xe07c,	// (0x00022a15) fep_china_uni_candidate_pane_ParamLimits

0xe07c,	// (0x00022a15) fep_china_uni_candidate_pane

0xe090,	// (0x00022a29) fep_china_uni_entry_pane

0xe0a0,	// (0x00022a39) popup_fep_china_uni_window_g1

0xe0bc,	// (0x00022a55) fep_china_uni_entry_pane_g1

0xe0c6,	// (0x00022a5f) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x000240b6) fep_china_uni_entry_pane_g

0xe0d0,	// (0x00022a69) fep_entry_item_pane

0xe0da,	// (0x00022a73) fep_candidate_item_pane

0xe0e2,	// (0x00022a7b) fep_china_uni_candidate_pane_g1

0xe0ec,	// (0x00022a85) fep_china_uni_candidate_pane_g2

0xe0f4,	// (0x00022a8d) fep_china_uni_candidate_pane_g3

0xe0fc,	// (0x00022a95) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x000240bb) fep_china_uni_candidate_pane_g

0xb887,	// (0x00020220) fep_entry_item_pane_g1

0xe106,	// (0x00022a9f) fep_entry_item_pane_t1_ParamLimits

0xe106,	// (0x00022a9f) fep_entry_item_pane_t1

0xe11c,	// (0x00022ab5) fep_candidate_item_pane_t1_ParamLimits

0xe11c,	// (0x00022ab5) fep_candidate_item_pane_t1

0xe131,	// (0x00022aca) fep_candidate_item_pane_t2_ParamLimits

0xe131,	// (0x00022aca) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x000240c4) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x000240c4) fep_candidate_item_pane_t

0xb8f9,	// (0x00020292) list_highlight_pane_cp31_ParamLimits

0xb8f9,	// (0x00020292) list_highlight_pane_cp31

0xe143,	// (0x00022adc) level_1_signal_lsc

0xe14c,	// (0x00022ae5) level_2_signal_lsc

0xe155,	// (0x00022aee) level_3_signal_lsc

0xe15e,	// (0x00022af7) level_4_signal_lsc

0xe167,	// (0x00022b00) level_5_signal_lsc

0xe170,	// (0x00022b09) level_6_signal_lsc

0xe179,	// (0x00022b12) level_7_signal_lsc

0xe179,	// (0x00022b12) level_1_battery_lsc

0xe182,	// (0x00022b1b) level_2_battery_lsc

0xe18b,	// (0x00022b24) level_3_battery_lsc

0xe194,	// (0x00022b2d) level_4_battery_lsc

0xe19d,	// (0x00022b36) level_5_battery_lsc

0xe1a6,	// (0x00022b3f) level_6_battery_lsc

0xe143,	// (0x00022adc) level_7_battery_lsc

0xe1af,	// (0x00022b48) scroll_handle_focus_pane_g1

0xe1b8,	// (0x00022b51) scroll_handle_focus_pane_g2

0xe1c1,	// (0x00022b5a) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x000240c9) scroll_handle_focus_pane_g

0x9e44,	// (0x0001e7dd) list_single_2graphic_pane_g1_ParamLimits

0x9e44,	// (0x0001e7dd) list_single_2graphic_pane_g1

0x96ab,	// (0x0001e044) list_single_2graphic_pane_g2_ParamLimits

0x96ab,	// (0x0001e044) list_single_2graphic_pane_g2

0x16a4,	// (0x0001603d) list_single_2graphic_pane_g3_ParamLimits

0x16a4,	// (0x0001603d) list_single_2graphic_pane_g3

0x9e50,	// (0x0001e7e9) list_single_2graphic_pane_g4_ParamLimits

0x9e50,	// (0x0001e7e9) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x000240d0) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x000240d0) list_single_2graphic_pane_g

0x9e61,	// (0x0001e7fa) list_single_2graphic_pane_t1_ParamLimits

0x9e61,	// (0x0001e7fa) list_single_2graphic_pane_t1

0x9e8f,	// (0x0001e828) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9e8f,	// (0x0001e828) list_double2_graphic_large_graphic_pane_g1

0x9716,	// (0x0001e0af) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9716,	// (0x0001e0af) list_double2_graphic_large_graphic_pane_g2

0x9727,	// (0x0001e0c0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9727,	// (0x0001e0c0) list_double2_graphic_large_graphic_pane_g3

0x9ea1,	// (0x0001e83a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9ea1,	// (0x0001e83a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x000240d9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x000240d9) list_double2_graphic_large_graphic_pane_g

0x9ead,	// (0x0001e846) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9ead,	// (0x0001e846) list_double2_graphic_large_graphic_pane_t1

0x9ec3,	// (0x0001e85c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9ec3,	// (0x0001e85c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x000240e2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x000240e2) list_double2_graphic_large_graphic_pane_t

0xe253,	// (0x00022bec) popup_fast_swap_window_ParamLimits

0xe253,	// (0x00022bec) popup_fast_swap_window

0xe271,	// (0x00022c0a) popup_side_volume_key_window

0xe28f,	// (0x00022c28) stacon_top_pane

0xe299,	// (0x00022c32) status_pane_ParamLimits

0xe299,	// (0x00022c32) status_pane

0x9f6c,	// (0x0001e905) status_small_pane

0xb891,	// (0x0002022a) control_pane

0xb891,	// (0x0002022a) stacon_bottom_pane

0xd8d2,	// (0x0002226b) scroll_pane_cp121

0xd8c9,	// (0x00022262) set_content_pane

0x9ed5,	// (0x0001e86e) bg_active_tab_pane_g1_cp1

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp1

0x9ede,	// (0x0001e877) bg_active_tab_pane_g3_cp1

0x9ed5,	// (0x0001e86e) bg_passive_tab_pane_g1_cp1

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp1

0x9ede,	// (0x0001e877) bg_passive_tab_pane_g3_cp1

0x9ee7,	// (0x0001e880) bg_active_tab_pane_g1_cp2

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp2

0x9ef0,	// (0x0001e889) bg_active_tab_pane_g3_cp2

0x9ee7,	// (0x0001e880) bg_passive_tab_pane_g1_cp2

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp2

0x9ef0,	// (0x0001e889) bg_passive_tab_pane_g3_cp2

0x9ef9,	// (0x0001e892) bg_active_tab_pane_g1_cp3

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp3

0x9f02,	// (0x0001e89b) bg_active_tab_pane_g3_cp3

0x9ef9,	// (0x0001e892) bg_passive_tab_pane_g1_cp3

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp3

0x9f02,	// (0x0001e89b) bg_passive_tab_pane_g3_cp3

0x9f0b,	// (0x0001e8a4) bg_active_tab_pane_g1_cp4

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp4

0x9f14,	// (0x0001e8ad) bg_active_tab_pane_g3_cp4

0x9f0b,	// (0x0001e8a4) bg_passive_tab_pane_g1_cp4

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp4

0x9f14,	// (0x0001e8ad) bg_passive_tab_pane_g3_cp4

0xe211,	// (0x00022baa) bg_active_tab_pane_g1_cp5

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp5

0xe21a,	// (0x00022bb3) bg_active_tab_pane_g3_cp5

0xe211,	// (0x00022baa) bg_passive_tab_pane_g1_cp5

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp5

0xe21a,	// (0x00022bb3) bg_passive_tab_pane_g3_cp5

0x3455,	// (0x00017dee) list_set_graphic_pane_ParamLimits

0x3455,	// (0x00017dee) list_set_graphic_pane

0xb891,	// (0x0002022a) bg_set_opt_pane_cp4

0x9f1d,	// (0x0001e8b6) list_set_graphic_pane_g1_ParamLimits

0x9f1d,	// (0x0001e8b6) list_set_graphic_pane_g1

0x9f29,	// (0x0001e8c2) list_set_graphic_pane_g2_ParamLimits

0x9f29,	// (0x0001e8c2) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x000240e7) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x000240e7) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00024471) volume_small_pane_cp_g

0x9f4d,	// (0x0001e8e6) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9f4d,	// (0x0001e8e6) list_double2_large_graphic_pane_g1_cp2

0x9f5b,	// (0x0001e8f4) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9f5b,	// (0x0001e8f4) list_double2_large_graphic_pane_g2_cp2

0xe223,	// (0x00022bbc) list_double2_large_graphic_pane_g3_cp2

0xe22b,	// (0x00022bc4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe22b,	// (0x00022bc4) list_double2_large_graphic_pane_t1_cp2

0xe241,	// (0x00022bda) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe241,	// (0x00022bda) list_double2_large_graphic_pane_t2_cp2

0xaf40,	// (0x0001f8d9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaf40,	// (0x0001f8d9) list_double_large_graphic_pane_g1_cp2

0xaf53,	// (0x0001f8ec) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaf53,	// (0x0001f8ec) list_double_large_graphic_pane_g2_cp2

0xe37a,	// (0x00022d13) list_double_large_graphic_pane_g3_cp2

0x28f1,	// (0x0001728a) list_double_large_graphic_pane_g4_cp

0x28f9,	// (0x00017292) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x28f9,	// (0x00017292) list_double_large_graphic_pane_t1_cp2

0x2910,	// (0x000172a9) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2910,	// (0x000172a9) list_double_large_graphic_pane_t2_cp2

0x9f77,	// (0x0001e910) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9f77,	// (0x0001e910) list_double2_graphic_pane_g1_cp2

0x9f85,	// (0x0001e91e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9f85,	// (0x0001e91e) list_double2_graphic_pane_g2_cp2

0x9f96,	// (0x0001e92f) list_double2_graphic_pane_g3_cp2

0xe2a7,	// (0x00022c40) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe2a7,	// (0x00022c40) list_double2_graphic_pane_t1_cp2

0xe2bd,	// (0x00022c56) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe2bd,	// (0x00022c56) list_double2_graphic_pane_t2_cp2

0xe2cf,	// (0x00022c68) list_single_number_heading_pane_g1_cp2_ParamLimits

0xe2cf,	// (0x00022c68) list_single_number_heading_pane_g1_cp2

0xe2db,	// (0x00022c74) list_single_number_heading_pane_g2_cp2

0xe2e3,	// (0x00022c7c) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe2e3,	// (0x00022c7c) list_single_number_heading_pane_t1_cp2

0x9fa0,	// (0x0001e939) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9fa0,	// (0x0001e939) list_single_number_heading_pane_t2_cp2

0xe2f9,	// (0x00022c92) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe2f9,	// (0x00022c92) list_single_number_heading_pane_t3_cp2

0xe2cf,	// (0x00022c68) list_single_heading_pane_g1_cp2_ParamLimits

0xe2cf,	// (0x00022c68) list_single_heading_pane_g1_cp2

0xe2db,	// (0x00022c74) list_single_heading_pane_g2_cp2

0xe2e3,	// (0x00022c7c) list_single_heading_pane_t1_cp2_ParamLimits

0xe2e3,	// (0x00022c7c) list_single_heading_pane_t1_cp2

0xaf2c,	// (0x0001f8c5) list_single_heading_pane_t2_cp2_ParamLimits

0xaf2c,	// (0x0001f8c5) list_single_heading_pane_t2_cp2

0x260f,	// (0x00016fa8) list_double_graphic_pane_g1_cp2_ParamLimits

0x260f,	// (0x00016fa8) list_double_graphic_pane_g1_cp2

0x261b,	// (0x00016fb4) list_double_graphic_pane_g2_cp2_ParamLimits

0x261b,	// (0x00016fb4) list_double_graphic_pane_g2_cp2

0x262a,	// (0x00016fc3) list_double_graphic_pane_g3_cp2

0x2632,	// (0x00016fcb) list_double_graphic_pane_t1_cp2_ParamLimits

0x2632,	// (0x00016fcb) list_double_graphic_pane_t1_cp2

0x2648,	// (0x00016fe1) list_double_graphic_pane_t2_cp2_ParamLimits

0x2648,	// (0x00016fe1) list_double_graphic_pane_t2_cp2

0xe36e,	// (0x00022d07) list_double_number_pane_g1_cp2_ParamLimits

0xe36e,	// (0x00022d07) list_double_number_pane_g1_cp2

0xe37a,	// (0x00022d13) list_double_number_pane_g2_cp2

0xaec6,	// (0x0001f85f) list_double_number_pane_t1_cp2_ParamLimits

0xaec6,	// (0x0001f85f) list_double_number_pane_t1_cp2

0x25e7,	// (0x00016f80) list_double_number_pane_t2_cp2_ParamLimits

0x25e7,	// (0x00016f80) list_double_number_pane_t2_cp2

0x25fd,	// (0x00016f96) list_double_number_pane_t3_cp2_ParamLimits

0x25fd,	// (0x00016f96) list_double_number_pane_t3_cp2

0xae14,	// (0x0001f7ad) list_single_graphic_pane_g1_cp2_ParamLimits

0xae14,	// (0x0001f7ad) list_single_graphic_pane_g1_cp2

0x075c,	// (0x000150f5) list_single_graphic_pane_g2_cp2_ParamLimits

0x075c,	// (0x000150f5) list_single_graphic_pane_g2_cp2

0x0768,	// (0x00015101) list_single_graphic_pane_g3_cp2

0x2492,	// (0x00016e2b) list_single_graphic_pane_t1_cp2_ParamLimits

0x2492,	// (0x00016e2b) list_single_graphic_pane_t1_cp2

0x075c,	// (0x000150f5) list_single_number_pane_g1_cp2_ParamLimits

0x075c,	// (0x000150f5) list_single_number_pane_g1_cp2

0x0768,	// (0x00015101) list_single_number_pane_g2_cp2

0x2492,	// (0x00016e2b) list_single_number_pane_t1_cp2_ParamLimits

0x2492,	// (0x00016e2b) list_single_number_pane_t1_cp2

0xae00,	// (0x0001f799) list_single_number_pane_t2_cp2_ParamLimits

0xae00,	// (0x0001f799) list_single_number_pane_t2_cp2

0x9f5b,	// (0x0001e8f4) list_double2_pane_g1_cp2_ParamLimits

0x9f5b,	// (0x0001e8f4) list_double2_pane_g1_cp2

0xe223,	// (0x00022bbc) list_double2_pane_g2_cp2

0xe346,	// (0x00022cdf) list_double2_pane_t1_cp2_ParamLimits

0xe346,	// (0x00022cdf) list_double2_pane_t1_cp2

0xe35c,	// (0x00022cf5) list_double2_pane_t2_cp2_ParamLimits

0xe35c,	// (0x00022cf5) list_double2_pane_t2_cp2

0xe36e,	// (0x00022d07) list_double_pane_g1_cp2_ParamLimits

0xe36e,	// (0x00022d07) list_double_pane_g1_cp2

0xe37a,	// (0x00022d13) list_double_pane_g2_cp2

0xe382,	// (0x00022d1b) list_double_pane_t1_cp2_ParamLimits

0xe382,	// (0x00022d1b) list_double_pane_t1_cp2

0xe398,	// (0x00022d31) list_double_pane_t2_cp2_ParamLimits

0xe398,	// (0x00022d31) list_double_pane_t2_cp2

0x074c,	// (0x000150e5) list_single_pane_cp2_g3

0x075c,	// (0x000150f5) list_single_pane_g1_cp2_ParamLimits

0x075c,	// (0x000150f5) list_single_pane_g1_cp2

0x0768,	// (0x00015101) list_single_pane_g2_cp2

0x0770,	// (0x00015109) list_single_pane_t1_cp2_ParamLimits

0x0770,	// (0x00015109) list_single_pane_t1_cp2

0x9fce,	// (0x0001e967) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9fce,	// (0x0001e967) list_single_large_graphic_pane_g1_cp2

0x0796,	// (0x0001512f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0796,	// (0x0001512f) list_single_large_graphic_pane_g2_cp2

0x07a2,	// (0x0001513b) list_single_large_graphic_pane_g3_cp2

0x07aa,	// (0x00015143) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x07aa,	// (0x00015143) list_single_large_graphic_pane_g4_cp1

0x07c4,	// (0x0001515d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x07c4,	// (0x0001515d) list_single_large_graphic_pane_t1_cp2

0x245c,	// (0x00016df5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x245c,	// (0x00016df5) list_single_graphic_heading_pane_g1_cp2

0xaddb,	// (0x0001f774) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xaddb,	// (0x0001f774) list_single_graphic_heading_pane_g4_cp2

0x0768,	// (0x00015101) list_single_graphic_heading_pane_g5_cp2

0x2468,	// (0x00016e01) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2468,	// (0x00016e01) list_single_graphic_heading_pane_t1_cp2

0xadec,	// (0x0001f785) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xadec,	// (0x0001f785) list_single_graphic_heading_pane_t2_cp2

0x241d,	// (0x00016db6) list_single_2graphic_pane_g1_cp2_ParamLimits

0x241d,	// (0x00016db6) list_single_2graphic_pane_g1_cp2

0xaddb,	// (0x0001f774) list_single_2graphic_pane_g2_cp2_ParamLimits

0xaddb,	// (0x0001f774) list_single_2graphic_pane_g2_cp2

0x0768,	// (0x00015101) list_single_2graphic_pane_g3_cp2

0x243a,	// (0x00016dd3) list_single_2graphic_pane_g4_cp2_ParamLimits

0x243a,	// (0x00016dd3) list_single_2graphic_pane_g4_cp2

0x2446,	// (0x00016ddf) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2446,	// (0x00016ddf) list_single_2graphic_pane_t1_cp2

0xb887,	// (0x00020220) list_highlight_pane_g10_cp1

0x1ff5,	// (0x0001698e) list_highlight_pane_g1_cp1

0x1ffd,	// (0x00016996) list_highlight_pane_g2_cp1

0x2005,	// (0x0001699e) list_highlight_pane_g3_cp1

0x200d,	// (0x000169a6) list_highlight_pane_g4_cp1

0x2015,	// (0x000169ae) list_highlight_pane_g5_cp1

0x201d,	// (0x000169b6) list_highlight_pane_g6_cp1

0x2025,	// (0x000169be) list_highlight_pane_g7_cp1

0x202d,	// (0x000169c6) list_highlight_pane_g8_cp1

0x2035,	// (0x000169ce) list_highlight_pane_g9_cp1

0xada1,	// (0x0001f73a) form_field_slider_pane_t3

0xadaf,	// (0x0001f748) form_field_slider_pane_t4

0x1f31,	// (0x000168ca) slider_form_pane_ParamLimits

0x1f31,	// (0x000168ca) slider_form_pane

0xb891,	// (0x0002022a) control_abbreviations

0xb891,	// (0x0002022a) control_conventions

0xb891,	// (0x0002022a) control_definitions

0xb891,	// (0x0002022a) format_table_attribute

0x271d,	// (0x000170b6) bg_popup_preview_window_pane_g9

0xb891,	// (0x0002022a) format_table_data2

0xb891,	// (0x0002022a) format_table_data3

0xb891,	// (0x0002022a) format_table_data_example

0x0008,

0xb891,	// (0x0002022a) intro_purpose

0xf8e5,	// (0x0002427e) bg_popup_preview_window_pane_g

0xb891,	// (0x0002022a) texts_category

0xb891,	// (0x0002022a) texts_graphics

0x07da,	// (0x00015173) text_digital

0x07e9,	// (0x00015182) text_primary

0x07f8,	// (0x00015191) text_primary_small

0x0807,	// (0x000151a0) text_secondary

0x0816,	// (0x000151af) text_title

0x2f4e,	// (0x000178e7) bg_passive_tab_pane_g1_cp3_srt

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp3_srt

0x2f57,	// (0x000178f0) bg_passive_tab_pane_g3_cp3_srt

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp3_srt_ParamLimits

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp3_srt

0x2f60,	// (0x000178f9) tabs_4_active_pane_srt_g1

0xb27b,	// (0x0001fc14) tabs_4_active_pane_srt_t1_ParamLimits

0xb27b,	// (0x0001fc14) tabs_4_active_pane_srt_t1

0x2f4e,	// (0x000178e7) bg_active_tab_pane_g1_cp3_copy1

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp3_copy1

0x2f57,	// (0x000178f0) bg_active_tab_pane_g3_cp3_copy1

0xb8f9,	// (0x00020292) tabs_2_long_active_pane_srt_ParamLimits

0xb8f9,	// (0x00020292) tabs_2_long_active_pane_srt

0xb8f9,	// (0x00020292) tabs_2_long_passive_pane_srt_ParamLimits

0xb8f9,	// (0x00020292) tabs_2_long_passive_pane_srt

0x0bab,	// (0x00015544) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0bab,	// (0x00015544) bg_passive_tab_pane_cp4_srt

0x2b81,	// (0x0001751a) bg_passive_tab_pane_g1_cp4_srt

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp4_srt

0x2b8a,	// (0x00017523) bg_passive_tab_pane_g3_cp4_srt

0xb8f9,	// (0x00020292) bg_active_tab_pane_cp4_srt_ParamLimits

0xb8f9,	// (0x00020292) bg_active_tab_pane_cp4_srt

0xb028,	// (0x0001f9c1) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb028,	// (0x0001f9c1) tabs_2_long_active_pane_srt_t1

0x2b81,	// (0x0001751a) bg_active_tab_pane_g1_cp4_srt

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp4_srt

0x2b8a,	// (0x00017523) bg_active_tab_pane_g3_cp4_srt

0xb8eb,	// (0x00020284) tabs_3_long_active_pane_srt_ParamLimits

0xb8eb,	// (0x00020284) tabs_3_long_active_pane_srt

0xb8eb,	// (0x00020284) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb8eb,	// (0x00020284) tabs_3_long_passive_pane_cp_srt

0xb8eb,	// (0x00020284) tabs_3_long_passive_pane_srt_ParamLimits

0xb8eb,	// (0x00020284) tabs_3_long_passive_pane_srt

0x0bab,	// (0x00015544) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0bab,	// (0x00015544) bg_passive_tab_pane_cp5_srt

0xe211,	// (0x00022baa) bg_passive_tab_pane_g1_cp5_srt

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp5_srt

0xe21a,	// (0x00022bb3) bg_passive_tab_pane_g3_cp5_srt

0xb8f9,	// (0x00020292) bg_active_tab_pane_cp5_srt_ParamLimits

0xb8f9,	// (0x00020292) bg_active_tab_pane_cp5_srt

0xb012,	// (0x0001f9ab) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb012,	// (0x0001f9ab) tabs_3_long_active_pane_srt_t1

0xe211,	// (0x00022baa) bg_active_tab_pane_g1_cp5_srt

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp5_srt

0xe21a,	// (0x00022bb3) bg_active_tab_pane_g3_cp5_srt

0x2b61,	// (0x000174fa) navi_text_pane_srt_t1

0x2b59,	// (0x000174f2) navi_icon_pane_srt_g1

0x09e1,	// (0x0001537a) midp_editing_number_pane_srt

0x0825,	// (0x000151be) midp_ticker_pane_srt

0x09e9,	// (0x00015382) midp_ticker_pane_srt_g1

0x09f1,	// (0x0001538a) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00024106) midp_ticker_pane_srt_g

0x09f9,	// (0x00015392) midp_ticker_pane_srt_t1

0x2b4a,	// (0x000174e3) midp_editing_number_pane_t1_copy1

0x0bab,	// (0x00015544) listscroll_midp_pane

0x0bab,	// (0x00015544) midp_form_pane

0x088f,	// (0x00015228) midp_info_popup_window_ParamLimits

0x088f,	// (0x00015228) midp_info_popup_window

0xda8f,	// (0x00022428) bg_popup_sub_pane_cp50_ParamLimits

0xda8f,	// (0x00022428) bg_popup_sub_pane_cp50

0x1c2b,	// (0x000165c4) listscroll_midp_info_pane_ParamLimits

0x1c2b,	// (0x000165c4) listscroll_midp_info_pane

0x1c13,	// (0x000165ac) listscroll_form_midp_pane_ParamLimits

0x1c13,	// (0x000165ac) listscroll_form_midp_pane

0x1c1f,	// (0x000165b8) scroll_bar_cp050

0xad95,	// (0x0001f72e) list_midp_pane

0x3d05,	// (0x0001869e) signal_pane_g2_cp

0x1b2d,	// (0x000164c6) listscroll_midp_info_pane_t1_ParamLimits

0x1b2d,	// (0x000164c6) listscroll_midp_info_pane_t1

0x1b45,	// (0x000164de) listscroll_midp_info_pane_t2_ParamLimits

0x1b45,	// (0x000164de) listscroll_midp_info_pane_t2

0x1b83,	// (0x0001651c) listscroll_midp_info_pane_t3_ParamLimits

0x1b83,	// (0x0001651c) listscroll_midp_info_pane_t3

0x1bbd,	// (0x00016556) listscroll_midp_info_pane_t4_ParamLimits

0x1bbd,	// (0x00016556) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x000241b9) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x000241b9) listscroll_midp_info_pane_t

0xdb0f,	// (0x000224a8) scroll_pane_cp21

0x1ac7,	// (0x00016460) form_midp_field_choice_group_pane

0x1ad0,	// (0x00016469) form_midp_field_text_pane

0x1b13,	// (0x000164ac) form_midp_field_time_pane

0x1b1b,	// (0x000164b4) form_midp_gauge_slider_pane

0x1b24,	// (0x000164bd) form_midp_gauge_wait_pane

0xb891,	// (0x0002022a) form_midp_image_pane

0xad78,	// (0x0001f711) list_single_midp_pane_ParamLimits

0xad78,	// (0x0001f711) list_single_midp_pane

0xad50,	// (0x0001f6e9) form_midp_field_text_pane_t1

0x1848,	// (0x000161e1) input_focus_pane_cp050

0x1a96,	// (0x0001642f) list_midp_form_text_pane

0x1a3a,	// (0x000163d3) form_midp_field_choice_group_pane_t1

0x1a48,	// (0x000163e1) input_focus_pane_cp051

0x1a5c,	// (0x000163f5) list_midp_choice_pane

0xb891,	// (0x0002022a) status_idle_pane

0x1a1e,	// (0x000163b7) form_midp_field_time_pane_t1

0xb887,	// (0x00020220) wait_anim_pane_g2_copy1

0x1a2c,	// (0x000163c5) form_midp_field_time_pane_t2

0x0001,

0x093f,	// (0x000152d8) aid_navinavi_width_2_pane

0xf81b,	// (0x000241b4) form_midp_field_time_pane_t

0xb891,	// (0x0002022a) input_focus_pane_cp052

0xb891,	// (0x0002022a) bg_input_focus_pane_cp040

0x19de,	// (0x00016377) form_midp_gauge_slider_pane_t1

0x19ec,	// (0x00016385) form_midp_gauge_slider_pane_t2

0xad34,	// (0x0001f6cd) form_midp_gauge_slider_pane_t3

0xad42,	// (0x0001f6db) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x000241ab) form_midp_gauge_slider_pane_t

0x1a16,	// (0x000163af) form_midp_slider_pane

0xb8f9,	// (0x00020292) bg_input_focus_pane_cp041_ParamLimits

0xb8f9,	// (0x00020292) bg_input_focus_pane_cp041

0x19ab,	// (0x00016344) form_midp_gauge_wait_pane_t1_ParamLimits

0x19ab,	// (0x00016344) form_midp_gauge_wait_pane_t1

0x19bd,	// (0x00016356) form_midp_gauge_wait_pane_t2_ParamLimits

0x19bd,	// (0x00016356) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x000241a6) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x000241a6) form_midp_gauge_wait_pane_t

0x19cf,	// (0x00016368) form_midp_wait_pane_ParamLimits

0x19cf,	// (0x00016368) form_midp_wait_pane

0x1973,	// (0x0001630c) form_midp_image_pane_g1

0x197c,	// (0x00016315) form_midp_image_pane_t1

0x198b,	// (0x00016324) form_midp_image_pane_t2

0x199a,	// (0x00016333) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0002419f) form_midp_image_pane_t

0x195b,	// (0x000162f4) list_single_midp_pane_g1

0x1964,	// (0x000162fd) list_single_midp_pane_t1

0xad1d,	// (0x0001f6b6) list_midp_form_item_pane_ParamLimits

0xad1d,	// (0x0001f6b6) list_midp_form_item_pane

0x08e7,	// (0x00015280) list_midp_form_item_pane_t1

0x08f6,	// (0x0001528f) midp_ticker_pane_g1

0x0902,	// (0x0001529b) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x000240ec) midp_ticker_pane_g

0xa073,	// (0x0001ea0c) midp_ticker_pane_t1

0xb1d3,	// (0x0001fb6c) midp_editing_number_pane_t1

0x2dd0,	// (0x00017769) midp_editing_number_pane

0x2ddf,	// (0x00017778) midp_ticker_pane

0x2b12,	// (0x000174ab) ai_message_heading_pane

0xb891,	// (0x0002022a) bg_popup_window_pane_cp14

0x2b1a,	// (0x000174b3) listscroll_ai_message_pane

0x2a98,	// (0x00017431) ai_message_heading_pane_g1_ParamLimits

0x2a98,	// (0x00017431) ai_message_heading_pane_g1

0x2aa4,	// (0x0001743d) ai_message_heading_pane_g2_ParamLimits

0x2aa4,	// (0x0001743d) ai_message_heading_pane_g2

0x2ab2,	// (0x0001744b) ai_message_heading_pane_g3_ParamLimits

0x2ab2,	// (0x0001744b) ai_message_heading_pane_g3

0x2abe,	// (0x00017457) ai_message_heading_pane_g4_ParamLimits

0x2abe,	// (0x00017457) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x000242e0) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x000242e0) ai_message_heading_pane_g

0x2aca,	// (0x00017463) ai_message_heading_pane_t1_ParamLimits

0x2aca,	// (0x00017463) ai_message_heading_pane_t1

0x2ae4,	// (0x0001747d) ai_message_heading_pane_t2_ParamLimits

0x2ae4,	// (0x0001747d) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x000242e9) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x000242e9) ai_message_heading_pane_t

0x2af8,	// (0x00017491) bg_popup_heading_pane_cp1_ParamLimits

0x2af8,	// (0x00017491) bg_popup_heading_pane_cp1

0x2a86,	// (0x0001741f) list_ai_message_pane_ParamLimits

0x2a86,	// (0x0001741f) list_ai_message_pane

0xdb0f,	// (0x000224a8) scroll_pane_cp10

0x2a22,	// (0x000173bb) list_ai_message_pane_g1

0x2a2a,	// (0x000173c3) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x000242bd) list_ai_message_pane_g

0x2a32,	// (0x000173cb) list_ai_message_pane_t1_ParamLimits

0x2a32,	// (0x000173cb) list_ai_message_pane_t1

0x2a47,	// (0x000173e0) list_ai_message_pane_t2_ParamLimits

0x2a47,	// (0x000173e0) list_ai_message_pane_t2

0x2a5c,	// (0x000173f5) list_ai_message_pane_t3_ParamLimits

0x2a5c,	// (0x000173f5) list_ai_message_pane_t3

0x2a71,	// (0x0001740a) list_ai_message_pane_t4_ParamLimits

0x2a71,	// (0x0001740a) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x000242c2) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x000242c2) list_ai_message_pane_t

0xafe6,	// (0x0001f97f) cell_ai_soft_ind_pane_ParamLimits

0xafe6,	// (0x0001f97f) cell_ai_soft_ind_pane

0x0920,	// (0x000152b9) cell_ai_soft_ind_pane_g1_ParamLimits

0x0920,	// (0x000152b9) cell_ai_soft_ind_pane_g1

0xb891,	// (0x0002022a) grid_highlight_cp1

0x092d,	// (0x000152c6) text_secondary_cp56_ParamLimits

0x092d,	// (0x000152c6) text_secondary_cp56

0x29e0,	// (0x00017379) example_general_pane_ParamLimits

0x29e0,	// (0x00017379) example_general_pane

0x29ec,	// (0x00017385) example_parent_pane_g1_ParamLimits

0x29ec,	// (0x00017385) example_parent_pane_g1

0x29f8,	// (0x00017391) example_parent_pane_t1_ParamLimits

0x29f8,	// (0x00017391) example_parent_pane_t1

0xa5a2,	// (0x0001ef3b) popup_preview_text_window_ParamLimits

0xa5a2,	// (0x0001ef3b) popup_preview_text_window

0x0754,	// (0x000150ed) list_single_pane_cp2_g4

0xbaee,	// (0x00020487) bg_popup_preview_window_pane_ParamLimits

0xbaee,	// (0x00020487) bg_popup_preview_window_pane

0x2727,	// (0x000170c0) popup_preview_text_window_t1_ParamLimits

0x2727,	// (0x000170c0) popup_preview_text_window_t1

0x2745,	// (0x000170de) popup_preview_text_window_t2_ParamLimits

0x2745,	// (0x000170de) popup_preview_text_window_t2

0x278e,	// (0x00017127) popup_preview_text_window_t3_ParamLimits

0x278e,	// (0x00017127) popup_preview_text_window_t3

0x27d3,	// (0x0001716c) popup_preview_text_window_t4_ParamLimits

0x27d3,	// (0x0001716c) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x00024291) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x00024291) popup_preview_text_window_t

0x2851,	// (0x000171ea) scroll_pane_cp11

0x1722,	// (0x000160bb) bg_popup_preview_window_pane_g1

0x26db,	// (0x00017074) bg_popup_preview_window_pane_g2

0x26e5,	// (0x0001707e) bg_popup_preview_window_pane_g3

0x26ef,	// (0x00017088) bg_popup_preview_window_pane_g4

0x26f9,	// (0x00017092) bg_popup_preview_window_pane_g5

0x2703,	// (0x0001709c) bg_popup_preview_window_pane_g6

0x270b,	// (0x000170a4) bg_popup_preview_window_pane_g7

0x2713,	// (0x000170ac) bg_popup_preview_window_pane_g8

0xd613,	// (0x00021fac) aid_popup_width_pane

0xa512,	// (0x0001eeab) popup_midp_note_alarm_window_ParamLimits

0xa512,	// (0x0001eeab) popup_midp_note_alarm_window

0xd93a,	// (0x000222d3) data_form_pane_ParamLimits

0x9ac9,	// (0x0001e462) form_field_data_pane_g1

0x9ad3,	// (0x0001e46c) form_field_data_pane_t1_ParamLimits

0xd946,	// (0x000222df) input_focus_pane_ParamLimits

0xd954,	// (0x000222ed) data_form_wide_pane_ParamLimits

0xd965,	// (0x000222fe) form_field_data_wide_pane_g1

0xd991,	// (0x0002232a) form_field_data_wide_pane_t1_ParamLimits

0xbca3,	// (0x0002063c) input_focus_pane_cp6_ParamLimits

0x9c14,	// (0x0001e5ad) input_popup_find_pane_g1_ParamLimits

0x9c14,	// (0x0001e5ad) input_popup_find_pane_g1

0xdde7,	// (0x00022780) aid_navi_side_left_pane

0xddfc,	// (0x00022795) aid_navi_side_right_pane

0x20f0,	// (0x00016a89) bg_popup_window_pane_cp30_ParamLimits

0x20f0,	// (0x00016a89) bg_popup_window_pane_cp30

0x216a,	// (0x00016b03) popup_midp_note_alarm_window_g1_ParamLimits

0x216a,	// (0x00016b03) popup_midp_note_alarm_window_g1

0x219a,	// (0x00016b33) popup_midp_note_alarm_window_t1_ParamLimits

0x219a,	// (0x00016b33) popup_midp_note_alarm_window_t1

0x223b,	// (0x00016bd4) popup_midp_note_alarm_window_t2_ParamLimits

0x223b,	// (0x00016bd4) popup_midp_note_alarm_window_t2

0x22e9,	// (0x00016c82) popup_midp_note_alarm_window_t3_ParamLimits

0x22e9,	// (0x00016c82) popup_midp_note_alarm_window_t3

0x231b,	// (0x00016cb4) popup_midp_note_alarm_window_t4_ParamLimits

0x231b,	// (0x00016cb4) popup_midp_note_alarm_window_t4

0x2341,	// (0x00016cda) popup_midp_note_alarm_window_t5_ParamLimits

0x2341,	// (0x00016cda) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0002422e) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0002422e) popup_midp_note_alarm_window_t

0x23ed,	// (0x00016d86) wait_bar_pane_cp1_ParamLimits

0x23ed,	// (0x00016d86) wait_bar_pane_cp1

0xb891,	// (0x0002022a) wait_anim_pane_copy1

0xb891,	// (0x0002022a) wait_border_pane_copy1

0x1dd5,	// (0x0001676e) wait_border_pane_g1_copy1

0xd9ab,	// (0x00022344) form_field_popup_pane_g1

0x9aed,	// (0x0001e486) form_field_popup_pane_t1_ParamLimits

0xd946,	// (0x000222df) input_focus_pane_cp7_ParamLimits

0xd9b3,	// (0x0002234c) list_form_pane_ParamLimits

0xd9bf,	// (0x00022358) form_field_popup_wide_pane_g1

0xd9c7,	// (0x00022360) form_field_popup_wide_pane_t1_ParamLimits

0xd946,	// (0x000222df) input_focus_pane_cp8_ParamLimits

0xd9dc,	// (0x00022375) list_form_wide_pane_ParamLimits

0x2fdb,	// (0x00017974) aid_size_cell_graphic_pane

0x9b6c,	// (0x0001e505) data_form_pane_t1_ParamLimits

0xb1b7,	// (0x0001fb50) data_form_wide_pane_t1_ParamLimits

0xa9a6,	// (0x0001f33f) bg_status_flat_pane

0x92f2,	// (0x0001dc8b) title_pane_t1_ParamLimits

0xb8b3,	// (0x0002024c) title_pane_t2_ParamLimits

0xb8d9,	// (0x00020272) title_pane_t3_ParamLimits

0xf557,	// (0x00023ef0) title_pane_t_ParamLimits

0x9d1b,	// (0x0001e6b4) level_1_signal_ParamLimits

0x9d2d,	// (0x0001e6c6) level_2_signal_ParamLimits

0x9d40,	// (0x0001e6d9) level_3_signal_ParamLimits

0x9d53,	// (0x0001e6ec) level_4_signal_ParamLimits

0x9d66,	// (0x0001e6ff) level_5_signal_ParamLimits

0x9d79,	// (0x0001e712) level_6_signal_ParamLimits

0x9d8c,	// (0x0001e725) level_7_signal_ParamLimits

0x9d1b,	// (0x0001e6b4) level_1_battery_ParamLimits

0x9d2d,	// (0x0001e6c6) level_2_battery_ParamLimits

0x9d40,	// (0x0001e6d9) level_3_battery_ParamLimits

0x9d53,	// (0x0001e6ec) level_4_battery_ParamLimits

0x9d66,	// (0x0001e6ff) level_5_battery_ParamLimits

0x9d79,	// (0x0001e712) level_6_battery_ParamLimits

0x9d8c,	// (0x0001e725) level_7_battery_ParamLimits

0x1ff5,	// (0x0001698e) bg_status_flat_pane_g1

0x1ffd,	// (0x00016996) bg_status_flat_pane_g2

0x2005,	// (0x0001699e) bg_status_flat_pane_g3

0x200d,	// (0x000169a6) bg_status_flat_pane_g4

0x2015,	// (0x000169ae) bg_status_flat_pane_g5

0x201d,	// (0x000169b6) bg_status_flat_pane_g6

0x2025,	// (0x000169be) bg_status_flat_pane_g7

0x9386,	// (0x0001dd1f) tabs_3_active_pane_t1_ParamLimits

0x9386,	// (0x0001dd1f) tabs_3_passive_pane_t1_ParamLimits

0x93a0,	// (0x0001dd39) tabs_4_active_pane_t1_ParamLimits

0x93a0,	// (0x0001dd39) tabs_4_1_passive_pane_t1_ParamLimits

0x9c2a,	// (0x0001e5c3) tabs_2_active_pane_t1_ParamLimits

0x9c2a,	// (0x0001e5c3) tabs_2_passive_pane_t1_ParamLimits

0xb8f9,	// (0x00020292) bg_active_tab_pane_cp4_ParamLimits

0x9c3c,	// (0x0001e5d5) tabs_2_long_active_pane_t1_ParamLimits

0x0bab,	// (0x00015544) bg_passive_tab_pane_cp4_ParamLimits

0xe804,	// (0x0002319d) list_single_midp_graphic_pane_t1_ParamLimits

0xb8f9,	// (0x00020292) bg_active_tab_pane_cp5_ParamLimits

0x9c4f,	// (0x0001e5e8) tabs_3_long_active_pane_t1_ParamLimits

0x0bab,	// (0x00015544) bg_passive_tab_pane_cp5_ParamLimits

0xe804,	// (0x0002319d) list_single_midp_graphic_pane_t1

0xa9a6,	// (0x0001f33f) bg_status_flat_pane_ParamLimits

0x136c,	// (0x00015d05) indicator_pane_cp2_ParamLimits

0x136c,	// (0x00015d05) indicator_pane_cp2

0xab3c,	// (0x0001f4d5) navi_pane_srt_ParamLimits

0xab3c,	// (0x0001f4d5) navi_pane_srt

0x14d3,	// (0x00015e6c) popup_clock_digital_analogue_window_cp1

0xb957,	// (0x000202f0) indicator_pane_t1

0x0825,	// (0x000151be) copy_highlight_pane

0x0825,	// (0x000151be) cursor_graphics_pane

0x0825,	// (0x000151be) graphic_within_text_pane

0x0825,	// (0x000151be) link_highlight_pane

0x2814,	// (0x000171ad) popup_preview_text_window_t5_ParamLimits

0x2814,	// (0x000171ad) popup_preview_text_window_t5

0x0949,	// (0x000152e2) cursor_digital_pane

0x0949,	// (0x000152e2) cursor_primary_pane

0x095a,	// (0x000152f3) cursor_primary_small_pane

0x0962,	// (0x000152fb) cursor_secondary_pane

0x096a,	// (0x00015303) cursor_title_pane

0x0949,	// (0x000152e2) link_highlight_digital_pane

0x0951,	// (0x000152ea) link_highlight_primary_pane

0x095a,	// (0x000152f3) link_highlight_primary_small_pane

0x0962,	// (0x000152fb) link_highlight_secondary_pane

0x096a,	// (0x00015303) link_highlight_title_pane

0x0949,	// (0x000152e2) copy_highlight_digital_pane

0x0949,	// (0x000152e2) copy_highlight_primary_pane

0x095a,	// (0x000152f3) copy_highlight_primary_small_pane

0x0962,	// (0x000152fb) copy_highlight_secondary_pane

0x096a,	// (0x00015303) copy_highlight_title_pane

0x0962,	// (0x000152fb) graphic_text_digital_pane

0x2093,	// (0x00016a2c) graphic_text_primary_pane

0x209c,	// (0x00016a35) graphic_text_primary_small_pane

0x095a,	// (0x000152f3) graphic_text_secondary_pane

0x0949,	// (0x000152e2) graphic_text_title_pane

0xa085,	// (0x0001ea1e) cursor_primary_pane_g1

0x2085,	// (0x00016a1e) cursor_text_primary_t1

0xadd1,	// (0x0001f76a) cursor_primary_small_pane_g1

0x2077,	// (0x00016a10) cursor_text_primary_small_t1

0xadc7,	// (0x0001f760) cursor_primary_small_pane_g1_copy1

0x205f,	// (0x000169f8) cursor_text_primary_small_t1_copy1

0x203d,	// (0x000169d6) cursor_text_title_t1

0xadbd,	// (0x0001f756) cursor_title_pane_g1

0xa085,	// (0x0001ea1e) cursor_digital_pane_g1

0x097c,	// (0x00015315) cursor_text_digital_t1

0x098a,	// (0x00015323) link_highlight_primary_pane_g1

0x1fe6,	// (0x0001697f) link_highlight_primary_pane_t1

0x098a,	// (0x00015323) link_highlight_primary_small_pane_g1

0x0992,	// (0x0001532b) link_highlight_primary_small_pane_t1

0x09a1,	// (0x0001533a) link_highlight_secondary_pane_g1

0x09a9,	// (0x00015342) link_highlight_secondary_pane_t1

0x1f5a,	// (0x000168f3) link_highlight_title_pane_g1

0x1f62,	// (0x000168fb) link_highlight_title_pane_t1

0x1f43,	// (0x000168dc) link_highlight_digital_pane_g1

0x1f4b,	// (0x000168e4) link_highlight_digital_pane_t1

0x1e0b,	// (0x000167a4) copy_highlight_primary_pane_g1

0x1e22,	// (0x000167bb) copy_highlight_primary_pane_t1

0x1e0b,	// (0x000167a4) copy_highlight_primary_small_pane_g1

0x1e13,	// (0x000167ac) copy_highlight_primary_small_pane_t1

0x09b8,	// (0x00015351) copy_highlight_secondary_pane_g1

0x09c0,	// (0x00015359) copy_highlight_secondary_pane_t1

0x1df4,	// (0x0001678d) copy_highlight_title_pane_g1

0x1dfc,	// (0x00016795) copy_highlight_title_pane_t1

0x1e0b,	// (0x000167a4) copy_highlight_digital_pane_g1

0x31ab,	// (0x00017b44) copy_highlight_digital_pane_t1

0x30ff,	// (0x00017a98) graphic_text_primary_pane_g1

0x318f,	// (0x00017b28) graphic_text_primary_pane_t1

0x319d,	// (0x00017b36) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0002435d) graphic_text_primary_pane_t

0x316b,	// (0x00017b04) graphic_text_primary_small_pane_g1

0x3173,	// (0x00017b0c) graphic_text_primary_small_pane_t1

0x3181,	// (0x00017b1a) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x00024358) graphic_text_primary_small_pane_t

0x3147,	// (0x00017ae0) graphic_text_secondary_pane_g1

0x314f,	// (0x00017ae8) graphic_text_secondary_pane_t1

0x315d,	// (0x00017af6) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x00024353) graphic_text_secondary_pane_t

0x3123,	// (0x00017abc) graphic_text_title_pane_g1

0x312b,	// (0x00017ac4) graphic_text_title_pane_t1

0x3139,	// (0x00017ad2) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0002434e) graphic_text_title_pane_t

0x30ff,	// (0x00017a98) graphic_text_digital_pane_g1

0x3107,	// (0x00017aa0) graphic_text_digital_pane_t1

0x3115,	// (0x00017aae) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x00024349) graphic_text_digital_pane_t

0xb8f9,	// (0x00020292) navi_icon_pane_srt_ParamLimits

0xb8f9,	// (0x00020292) navi_icon_pane_srt

0xb891,	// (0x0002022a) navi_midp_pane_srt

0xb891,	// (0x0002022a) navi_navi_pane_srt

0xb8f9,	// (0x00020292) navi_text_pane_srt_ParamLimits

0xb8f9,	// (0x00020292) navi_text_pane_srt

0x30ca,	// (0x00017a63) navi_navi_icon_text_pane_srt

0x30d2,	// (0x00017a6b) navi_navi_pane_srt_g1_ParamLimits

0x30d2,	// (0x00017a6b) navi_navi_pane_srt_g1

0x30e4,	// (0x00017a7d) navi_navi_pane_srt_g2_ParamLimits

0x30e4,	// (0x00017a7d) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x00024344) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x00024344) navi_navi_pane_srt_g

0x30f6,	// (0x00017a8f) navi_navi_tabs_pane_srt

0x30ca,	// (0x00017a63) navi_navi_text_pane_srt

0x30ca,	// (0x00017a63) navi_navi_volume_pane_srt

0x30bb,	// (0x00017a54) navi_navi_text_pane_srt_t1

0xe9de,	// (0x00023377) navi_navi_volume_pane_srt_g1

0xe9e6,	// (0x0002337f) volume_small_pane_srt_ParamLimits

0xe9e6,	// (0x0002337f) volume_small_pane_srt

0xe661,	// (0x00022ffa) volume_small_pane_srt_g1_ParamLimits

0xe661,	// (0x00022ffa) volume_small_pane_srt_g1

0xe671,	// (0x0002300a) volume_small_pane_srt_g2_ParamLimits

0xe671,	// (0x0002300a) volume_small_pane_srt_g2

0xe682,	// (0x0002301b) volume_small_pane_srt_g3_ParamLimits

0xe682,	// (0x0002301b) volume_small_pane_srt_g3

0xe693,	// (0x0002302c) volume_small_pane_srt_g4_ParamLimits

0xe693,	// (0x0002302c) volume_small_pane_srt_g4

0xe6a4,	// (0x0002303d) volume_small_pane_srt_g5_ParamLimits

0xe6a4,	// (0x0002303d) volume_small_pane_srt_g5

0xe6b5,	// (0x0002304e) volume_small_pane_srt_g6_ParamLimits

0xe6b5,	// (0x0002304e) volume_small_pane_srt_g6

0xe6c6,	// (0x0002305f) volume_small_pane_srt_g7_ParamLimits

0xe6c6,	// (0x0002305f) volume_small_pane_srt_g7

0xe6d7,	// (0x00023070) volume_small_pane_srt_g8_ParamLimits

0xe6d7,	// (0x00023070) volume_small_pane_srt_g8

0xe6e8,	// (0x00023081) volume_small_pane_srt_g9_ParamLimits

0xe6e8,	// (0x00023081) volume_small_pane_srt_g9

0xe6f9,	// (0x00023092) volume_small_pane_srt_g10_ParamLimits

0xe6f9,	// (0x00023092) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x000240f1) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x000240f1) volume_small_pane_srt_g

0xbba3,	// (0x0002053c) query_popup_data_pane_cp2

0x30a1,	// (0x00017a3a) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x30a1,	// (0x00017a3a) navi_navi_icon_text_pane_srt_t1

0x2093,	// (0x00016a2c) navi_tabs_2_long_pane_srt

0x2093,	// (0x00016a2c) navi_tabs_2_pane_srt

0x2093,	// (0x00016a2c) navi_tabs_3_long_pane_srt

0x2093,	// (0x00016a2c) navi_tabs_3_pane_srt

0x2093,	// (0x00016a2c) navi_tabs_4_pane_srt

0xe9be,	// (0x00023357) tabs_2_active_pane_srt_ParamLimits

0xe9be,	// (0x00023357) tabs_2_active_pane_srt

0xe9ce,	// (0x00023367) tabs_2_passive_pane_srt_ParamLimits

0xe9ce,	// (0x00023367) tabs_2_passive_pane_srt

0x1848,	// (0x000161e1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1848,	// (0x000161e1) bg_passive_tab_pane_cp1_srt

0x306d,	// (0x00017a06) bg_passive_tab_pane_g1_cp1_srt

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp1_srt

0x3076,	// (0x00017a0f) bg_passive_tab_pane_g3_cp1_srt

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp1_srt_ParamLimits

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp1_srt

0x307f,	// (0x00017a18) tabs_2_active_pane_srt_g1

0xb2fc,	// (0x0001fc95) tabs_2_active_pane_srt_t1_ParamLimits

0xb2fc,	// (0x0001fc95) tabs_2_active_pane_srt_t1

0x306d,	// (0x00017a06) bg_active_tab_pane_g1_cp1_srt

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp1_srt

0x3076,	// (0x00017a0f) bg_active_tab_pane_g3_cp1_srt

0xe98b,	// (0x00023324) tabs_3_active_pane_srt_ParamLimits

0xe98b,	// (0x00023324) tabs_3_active_pane_srt

0xe99c,	// (0x00023335) tabs_3_passive_pane_cp_srt_ParamLimits

0xe99c,	// (0x00023335) tabs_3_passive_pane_cp_srt

0xe9ad,	// (0x00023346) tabs_3_passive_pane_srt_ParamLimits

0xe9ad,	// (0x00023346) tabs_3_passive_pane_srt

0x1848,	// (0x000161e1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1848,	// (0x000161e1) bg_passive_tab_pane_cp2_srt

0x09cf,	// (0x00015368) bg_passive_tab_pane_g1_cp2_srt

0xe1ca,	// (0x00022b63) bg_passive_tab_pane_g2_cp2_srt

0x09d8,	// (0x00015371) bg_passive_tab_pane_g3_cp2_srt

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp2_srt_ParamLimits

0xb8eb,	// (0x00020284) bg_active_tab_pane_cp2_srt

0x3053,	// (0x000179ec) tabs_3_active_pane_srt_g1

0xb2e6,	// (0x0001fc7f) tabs_3_active_pane_srt_t1_ParamLimits

0xb2e6,	// (0x0001fc7f) tabs_3_active_pane_srt_t1

0x09cf,	// (0x00015368) bg_active_tab_pane_g1_cp2_srt

0xe1ca,	// (0x00022b63) bg_active_tab_pane_g2_cp2_srt

0x09d8,	// (0x00015371) bg_active_tab_pane_g3_cp2_srt

0xe943,	// (0x000232dc) tabs_4_active_pane_srt_ParamLimits

0xe943,	// (0x000232dc) tabs_4_active_pane_srt

0xe955,	// (0x000232ee) tabs_4_passive_pane_cp2_srt_ParamLimits

0xe955,	// (0x000232ee) tabs_4_passive_pane_cp2_srt

0x0b29,	// (0x000154c2) aid_size_cell_toolbar

0x2bf4,	// (0x0001758d) main_idle_act_pane_ParamLimits

0x0d7c,	// (0x00015715) popup_large_graphic_colour_window_ParamLimits

0xa868,	// (0x0001f201) popup_toolbar_window_ParamLimits

0xa868,	// (0x0001f201) popup_toolbar_window

0x2e15,	// (0x000177ae) list_single_graphic_2heading_pane_ParamLimits

0x2e15,	// (0x000177ae) list_single_graphic_2heading_pane

0xde28,	// (0x000227c1) aid_size_cell_apps_grid_lsc_pane

0xde3a,	// (0x000227d3) aid_size_cell_apps_grid_prt_pane

0x0bab,	// (0x00015544) bg_wml_button_pane_cp1_ParamLimits

0x0bab,	// (0x00015544) bg_wml_button_pane_cp1

0xad50,	// (0x0001f6e9) form_midp_field_text_pane_t1_ParamLimits

0x1848,	// (0x000161e1) input_focus_pane_cp050_ParamLimits

0x1a96,	// (0x0001642f) list_midp_form_text_pane_ParamLimits

0x1a48,	// (0x000163e1) input_focus_pane_cp051_ParamLimits

0x1a5c,	// (0x000163f5) list_midp_choice_pane_ParamLimits

0xad07,	// (0x0001f6a0) list_single_2graphic_pane_cp3_ParamLimits

0xad07,	// (0x0001f6a0) list_single_2graphic_pane_cp3

0x407e,	// (0x00018a17) list_single_midp_graphic_pane_ParamLimits

0x407e,	// (0x00018a17) list_single_midp_graphic_pane

0xe719,	// (0x000230b2) list_single_graphic_2heading_pane_g1_ParamLimits

0xe719,	// (0x000230b2) list_single_graphic_2heading_pane_g1

0xe725,	// (0x000230be) list_single_graphic_2heading_pane_g4_ParamLimits

0xe725,	// (0x000230be) list_single_graphic_2heading_pane_g4

0xe731,	// (0x000230ca) list_single_graphic_2heading_pane_g5_ParamLimits

0xe731,	// (0x000230ca) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00024144) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00024144) list_single_graphic_2heading_pane_g

0xe73d,	// (0x000230d6) list_single_graphic_2heading_pane_t1_ParamLimits

0xe73d,	// (0x000230d6) list_single_graphic_2heading_pane_t1

0xe751,	// (0x000230ea) list_single_graphic_2heading_pane_t2_ParamLimits

0xe751,	// (0x000230ea) list_single_graphic_2heading_pane_t2

0xe76d,	// (0x00023106) list_single_graphic_2heading_pane_t3_ParamLimits

0xe76d,	// (0x00023106) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0002414b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0002414b) list_single_graphic_2heading_pane_t

0x1632,	// (0x00015fcb) bg_popup_sub_pane_cp2

0x165c,	// (0x00015ff5) grid_toobar_pane

0xe785,	// (0x0002311e) cell_toolbar_pane_ParamLimits

0xe785,	// (0x0002311e) cell_toolbar_pane

0x16c6,	// (0x0001605f) cell_toolbar_pane_g1_ParamLimits

0x16c6,	// (0x0001605f) cell_toolbar_pane_g1

0x16da,	// (0x00016073) cell_toolbar_pane_g2_ParamLimits

0x16da,	// (0x00016073) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x00024159) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x00024159) cell_toolbar_pane_g

0x16fc,	// (0x00016095) grid_highlight_pane_cp2_ParamLimits

0x16fc,	// (0x00016095) grid_highlight_pane_cp2

0x1716,	// (0x000160af) toolbar_button_pane

0x1722,	// (0x000160bb) toolbar_button_pane_g1

0x172a,	// (0x000160c3) toolbar_button_pane_g2

0x1732,	// (0x000160cb) toolbar_button_pane_g3

0x173a,	// (0x000160d3) toolbar_button_pane_g4

0x1742,	// (0x000160db) toolbar_button_pane_g5

0x174a,	// (0x000160e3) toolbar_button_pane_g6

0x1752,	// (0x000160eb) toolbar_button_pane_g7

0x175a,	// (0x000160f3) toolbar_button_pane_g8

0x1762,	// (0x000160fb) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0002415e) toolbar_button_pane_g

0xe7bd,	// (0x00023156) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe7bd,	// (0x00023156) list_single_2graphic_pane_g1_cp3

0x8ab3,	// (0x0001d44c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8ab3,	// (0x0001d44c) list_single_2graphic_pane_g2_cp3

0xe7c9,	// (0x00023162) list_single_2graphic_pane_g3_cp3

0xe7d1,	// (0x0002316a) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe7d1,	// (0x0002316a) list_single_2graphic_pane_g4_cp3

0xe7dd,	// (0x00023176) list_single_2graphic_pane_t1_cp3_ParamLimits

0xe7dd,	// (0x00023176) list_single_2graphic_pane_t1_cp3

0xe7f8,	// (0x00023191) list_single_midp_graphic_pane_g2_ParamLimits

0xe7f8,	// (0x00023191) list_single_midp_graphic_pane_g2

0x0b31,	// (0x000154ca) aid_zoom_text_primary

0x0b39,	// (0x000154d2) aid_zoom_text_secondary

0xa0dd,	// (0x0001ea76) status_small_pane_g7_ParamLimits

0xa0dd,	// (0x0001ea76) status_small_pane_g7

0xa100,	// (0x0001ea99) status_small_pane_t1_ParamLimits

0x92da,	// (0x0001dc73) title_pane_g2

0x0003,

0xf54e,	// (0x00023ee7) title_pane_g

0x9566,	// (0x0001deff) aid_size_cell_colour_1_pane_ParamLimits

0x9566,	// (0x0001deff) aid_size_cell_colour_1_pane

0x957a,	// (0x0001df13) aid_size_cell_colour_2_pane_ParamLimits

0x957a,	// (0x0001df13) aid_size_cell_colour_2_pane

0x958e,	// (0x0001df27) aid_size_cell_colour_3_pane_ParamLimits

0x958e,	// (0x0001df27) aid_size_cell_colour_3_pane

0x95a2,	// (0x0001df3b) aid_size_cell_colour_4_pane_ParamLimits

0x95a2,	// (0x0001df3b) aid_size_cell_colour_4_pane

0xdcee,	// (0x00022687) title_pane_stacon_g1_ParamLimits

0xdcee,	// (0x00022687) title_pane_stacon_g1

0x1e79,	// (0x00016812) popup_note_wait_window_g3_ParamLimits

0x1e79,	// (0x00016812) popup_note_wait_window_g3

0x1ef0,	// (0x00016889) popup_note_wait_window_t5_ParamLimits

0x1ef0,	// (0x00016889) popup_note_wait_window_t5

0xb891,	// (0x0002022a) main_feb_china_hwr_fs_writing_pane

0xa1ff,	// (0x0001eb98) popup_feb_china_hwr_fs_window_ParamLimits

0xa1ff,	// (0x0001eb98) popup_feb_china_hwr_fs_window

0x8ac4,	// (0x0001d45d) aid_size_cell_hwr_fs_ParamLimits

0x8ac4,	// (0x0001d45d) aid_size_cell_hwr_fs

0x1848,	// (0x000161e1) bg_popup_sub_pane_cp3_ParamLimits

0x1848,	// (0x000161e1) bg_popup_sub_pane_cp3

0x8ad9,	// (0x0001d472) grid_hwr_fs_pane_ParamLimits

0x8ad9,	// (0x0001d472) grid_hwr_fs_pane

0xe81a,	// (0x000231b3) linegrid_hwr_fs_pane_ParamLimits

0xe81a,	// (0x000231b3) linegrid_hwr_fs_pane

0x8af1,	// (0x0001d48a) cell_hwr_fs_pane_ParamLimits

0x8af1,	// (0x0001d48a) cell_hwr_fs_pane

0x1854,	// (0x000161ed) linegrid_hwr_fs_pane_g1_ParamLimits

0x1854,	// (0x000161ed) linegrid_hwr_fs_pane_g1

0xacdb,	// (0x0001f674) linegrid_hwr_fs_pane_g2_ParamLimits

0xacdb,	// (0x0001f674) linegrid_hwr_fs_pane_g2

0x1872,	// (0x0001620b) linegrid_hwr_fs_pane_g3_ParamLimits

0x1872,	// (0x0001620b) linegrid_hwr_fs_pane_g3

0xe82a,	// (0x000231c3) linegrid_hwr_fs_pane_g4_ParamLimits

0xe82a,	// (0x000231c3) linegrid_hwr_fs_pane_g4

0xe848,	// (0x000231e1) linegrid_hwr_fs_pane_g5_ParamLimits

0xe848,	// (0x000231e1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00024184) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00024184) linegrid_hwr_fs_pane_g

0x187e,	// (0x00016217) cell_hwr_fs_pane_g1_ParamLimits

0x187e,	// (0x00016217) cell_hwr_fs_pane_g1

0x1569,	// (0x00015f02) cell_hwr_fs_pane_g2_ParamLimits

0x1569,	// (0x00015f02) cell_hwr_fs_pane_g2

0xaced,	// (0x0001f686) cell_hwr_fs_pane_g3_ParamLimits

0xaced,	// (0x0001f686) cell_hwr_fs_pane_g3

0xacfa,	// (0x0001f693) cell_hwr_fs_pane_g4_ParamLimits

0xacfa,	// (0x0001f693) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0002418f) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0002418f) cell_hwr_fs_pane_g

0x8b17,	// (0x0001d4b0) cell_hwr_fs_pane_t1

0xb891,	// (0x0002022a) grid_highlight_pane_cp6

0xb891,	// (0x0002022a) main_idle_act2_pane

0xdaf6,	// (0x0002248f) aid_inside_area_popup_secondary

0xae38,	// (0x0001f7d1) aid_inside_area_window_primary_ParamLimits

0xae38,	// (0x0001f7d1) aid_inside_area_window_primary

0x31ba,	// (0x00017b53) ai2_news_ticker_pane

0x31c2,	// (0x00017b5b) aid_size_cell_ai1_link_ParamLimits

0x31c2,	// (0x00017b5b) aid_size_cell_ai1_link

0x31dc,	// (0x00017b75) popup_ai2_data_window_ParamLimits

0x31dc,	// (0x00017b75) popup_ai2_data_window

0x31fa,	// (0x00017b93) popup_ai2_link_window_ParamLimits

0x31fa,	// (0x00017b93) popup_ai2_link_window

0x1848,	// (0x000161e1) bg_popup_sub_pane_cp4_ParamLimits

0x1848,	// (0x000161e1) bg_popup_sub_pane_cp4

0x3210,	// (0x00017ba9) grid_ai2_link_pane_ParamLimits

0x3210,	// (0x00017ba9) grid_ai2_link_pane

0x3227,	// (0x00017bc0) popup_ai2_link_window_g1_ParamLimits

0x3227,	// (0x00017bc0) popup_ai2_link_window_g1

0x3233,	// (0x00017bcc) popup_ai2_link_window_g2_ParamLimits

0x3233,	// (0x00017bcc) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x00024362) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x00024362) popup_ai2_link_window_g

0x3244,	// (0x00017bdd) ai2_mp_button_pane

0x324c,	// (0x00017be5) ai2_mp_volume_pane

0x1a48,	// (0x000163e1) bg_popup_sub_pane_cp5_ParamLimits

0x1a48,	// (0x000163e1) bg_popup_sub_pane_cp5

0x3254,	// (0x00017bed) heading_ai2_gene_pane_ParamLimits

0x3254,	// (0x00017bed) heading_ai2_gene_pane

0x3260,	// (0x00017bf9) list_ai2_gene_pane_ParamLimits

0x3260,	// (0x00017bf9) list_ai2_gene_pane

0x32a8,	// (0x00017c41) cell_ai2_link_pane_ParamLimits

0x32a8,	// (0x00017c41) cell_ai2_link_pane

0x32be,	// (0x00017c57) cell_ai2_link_pane_g1

0xb891,	// (0x0002022a) grid_highlight_pane_cp7

0xe9fb,	// (0x00023394) ai2_mp_volume_pane_g1

0x3391,	// (0x00017d2a) ai2_mp_volume_pane_g2

0x3306,	// (0x00017c9f) list_ai2_gene_pane_t1

0x3399,	// (0x00017d32) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0002437b) ai2_mp_volume_pane_g

0xea03,	// (0x0002339c) volume_small_pane_cp3

0x33a1,	// (0x00017d3a) aid_size_cell_ai2_button

0x33a9,	// (0x00017d42) grid_ai2_button_pane

0x33b2,	// (0x00017d4b) cell_ai2_button_pane_ParamLimits

0x33b2,	// (0x00017d4b) cell_ai2_button_pane

0xb887,	// (0x00020220) cell_ai2_button_pane_g1

0xb891,	// (0x0002022a) grid_highlight_pane_cp8

0x3351,	// (0x00017cea) ai2_gene_pane_t1_ParamLimits

0x3351,	// (0x00017cea) ai2_gene_pane_t1

0xa15d,	// (0x0001eaf6) aid_height_parent_landscape

0xb03f,	// (0x0001f9d8) aid_height_set_list

0x2bf4,	// (0x0001758d) aid_size_parent

0x2fdb,	// (0x00017974) aid_size_cell_graphic_pane_ParamLimits

0x3270,	// (0x00017c09) popup_ai2_data_window_g1_ParamLimits

0x3270,	// (0x00017c09) popup_ai2_data_window_g1

0x327c,	// (0x00017c15) ai2_news_ticker_pane_g1

0x3284,	// (0x00017c1d) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x00024367) ai2_news_ticker_pane_g

0x328c,	// (0x00017c25) ai2_news_ticker_pane_t1

0x329a,	// (0x00017c33) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0002436c) ai2_news_ticker_pane_t

0x32c7,	// (0x00017c60) heading_ai2_gene_pane_g1

0x32cf,	// (0x00017c68) heading_ai2_gene_pane_t1_ParamLimits

0x32cf,	// (0x00017c68) heading_ai2_gene_pane_t1

0x32e4,	// (0x00017c7d) list_highlight_pane_cp6

0x32ec,	// (0x00017c85) ai2_gene_pane_ParamLimits

0x32ec,	// (0x00017c85) ai2_gene_pane

0x3314,	// (0x00017cad) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x00024371) list_ai2_gene_pane_t

0x3322,	// (0x00017cbb) list_highlight_pane_cp8_ParamLimits

0x3322,	// (0x00017cbb) list_highlight_pane_cp8

0x3333,	// (0x00017ccc) ai2_gene_pane_g1_ParamLimits

0x3333,	// (0x00017ccc) ai2_gene_pane_g1

0x3345,	// (0x00017cde) ai2_gene_pane_g2_ParamLimits

0x3345,	// (0x00017cde) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x00024376) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x00024376) ai2_gene_pane_g

0xbebe,	// (0x00020857) scroll_pane_cp12

0x8a72,	// (0x0001d40b) control_pane_t3_ParamLimits

0x8a72,	// (0x0001d40b) control_pane_t3

0xa0f1,	// (0x0001ea8a) status_small_pane_g8_ParamLimits

0xa0f1,	// (0x0001ea8a) status_small_pane_g8

0xa2a1,	// (0x0001ec3a) popup_find_window_ParamLimits

0xa552,	// (0x0001eeeb) popup_note_image_window_ParamLimits

0x1698,	// (0x00016031) list_double2_graphic_pane_vc_g1_ParamLimits

0x1698,	// (0x00016031) list_double2_graphic_pane_vc_g1

0x0796,	// (0x0001512f) list_double2_graphic_pane_vc_g2_ParamLimits

0x0796,	// (0x0001512f) list_double2_graphic_pane_vc_g2

0x16a4,	// (0x0001603d) list_double2_graphic_pane_vc_g3_ParamLimits

0x16a4,	// (0x0001603d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00024152) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00024152) list_double2_graphic_pane_vc_g

0x16b0,	// (0x00016049) list_double2_graphic_pane_vc_t1_ParamLimits

0x16b0,	// (0x00016049) list_double2_graphic_pane_vc_t1

0x0796,	// (0x0001512f) list_single_heading_pane_vc_g1_ParamLimits

0x0796,	// (0x0001512f) list_single_heading_pane_vc_g1

0x16a4,	// (0x0001603d) list_single_heading_pane_vc_g2_ParamLimits

0x16a4,	// (0x0001603d) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023f61) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023f61) list_single_heading_pane_vc_g

0x176a,	// (0x00016103) list_single_heading_pane_vc_t1_ParamLimits

0x176a,	// (0x00016103) list_single_heading_pane_vc_t1

0x1782,	// (0x0001611b) list_single_heading_pane_vc_t2_ParamLimits

0x1782,	// (0x0001611b) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x00024173) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x00024173) list_single_heading_pane_vc_t

0x1794,	// (0x0001612d) list_setting_number_pane_vc_g1_ParamLimits

0x1794,	// (0x0001612d) list_setting_number_pane_vc_g1

0x17a0,	// (0x00016139) list_setting_number_pane_vc_g2_ParamLimits

0x17a0,	// (0x00016139) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00024178) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00024178) list_setting_number_pane_vc_g

0x17ac,	// (0x00016145) list_setting_number_pane_vc_t1_ParamLimits

0x17ac,	// (0x00016145) list_setting_number_pane_vc_t1

0x17c0,	// (0x00016159) list_setting_number_pane_vc_t2_ParamLimits

0x17c0,	// (0x00016159) list_setting_number_pane_vc_t2

0x17dc,	// (0x00016175) list_setting_number_pane_vc_t3_ParamLimits

0x17dc,	// (0x00016175) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0002417d) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0002417d) list_setting_number_pane_vc_t

0x180a,	// (0x000161a3) set_value_pane_vc_ParamLimits

0x180a,	// (0x000161a3) set_value_pane_vc

0x2e15,	// (0x000177ae) list_double2_graphic_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_double2_graphic_pane_vc

0x2e15,	// (0x000177ae) list_double2_large_graphic_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_double2_large_graphic_pane_vc

0x2e15,	// (0x000177ae) list_double2_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_double2_pane_vc

0x2e15,	// (0x000177ae) list_double_graphic_heading_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_double_graphic_heading_pane_vc

0x2e15,	// (0x000177ae) list_double_graphic_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_double_graphic_pane_vc

0x2e15,	// (0x000177ae) list_double_heading_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_double_heading_pane_vc

0x2e29,	// (0x000177c2) list_double_large_graphic_pane_vc_ParamLimits

0x2e29,	// (0x000177c2) list_double_large_graphic_pane_vc

0x2e15,	// (0x000177ae) list_double_number_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_double_number_pane_vc

0x2e15,	// (0x000177ae) list_double_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_double_pane_vc

0x2e15,	// (0x000177ae) list_double_time_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_double_time_pane_vc

0x2e15,	// (0x000177ae) list_setting_number_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_setting_number_pane_vc

0x2e15,	// (0x000177ae) list_setting_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_setting_pane_vc

0x2e15,	// (0x000177ae) list_single_graphic_heading_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_single_graphic_heading_pane_vc

0x2e15,	// (0x000177ae) list_single_heading_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_single_heading_pane_vc

0x2e15,	// (0x000177ae) list_single_number_heading_pane_vc_ParamLimits

0x2e15,	// (0x000177ae) list_single_number_heading_pane_vc

0x1698,	// (0x00016031) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1698,	// (0x00016031) list_double_graphic_heading_pane_vc_g1

0x33e5,	// (0x00017d7e) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x33e5,	// (0x00017d7e) list_double_graphic_heading_pane_vc_g2

0x33f1,	// (0x00017d8a) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x33f1,	// (0x00017d8a) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x00024382) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x00024382) list_double_graphic_heading_pane_vc_g

0x33fd,	// (0x00017d96) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x33fd,	// (0x00017d96) list_double_graphic_heading_pane_vc_t1

0x3413,	// (0x00017dac) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3413,	// (0x00017dac) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x00024389) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x00024389) list_double_graphic_heading_pane_vc_t

0x1794,	// (0x0001612d) list_setting_pane_vc_g1_ParamLimits

0x1794,	// (0x0001612d) list_setting_pane_vc_g1

0x17a0,	// (0x00016139) list_setting_pane_vc_g2_ParamLimits

0x17a0,	// (0x00016139) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x00024178) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x00024178) list_setting_pane_vc_g

0x3659,	// (0x00017ff2) list_setting_pane_vc_t1_ParamLimits

0x3659,	// (0x00017ff2) list_setting_pane_vc_t1

0x3675,	// (0x0001800e) list_setting_pane_vc_t2_ParamLimits

0x3675,	// (0x0001800e) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x000243cc) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x000243cc) list_setting_pane_vc_t

0x180a,	// (0x000161a3) set_value_pane_cp_vc_ParamLimits

0x180a,	// (0x000161a3) set_value_pane_cp_vc

0x0796,	// (0x0001512f) list_single_number_heading_pane_vc_g1_ParamLimits

0x0796,	// (0x0001512f) list_single_number_heading_pane_vc_g1

0x16a4,	// (0x0001603d) list_single_number_heading_pane_vc_g2_ParamLimits

0x16a4,	// (0x0001603d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023f61) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023f61) list_single_number_heading_pane_vc_g

0x176a,	// (0x00016103) list_single_number_heading_pane_vc_t1_ParamLimits

0x176a,	// (0x00016103) list_single_number_heading_pane_vc_t1

0x3691,	// (0x0001802a) list_single_number_heading_pane_vc_t2_ParamLimits

0x3691,	// (0x0001802a) list_single_number_heading_pane_vc_t2

0x36a3,	// (0x0001803c) list_single_number_heading_pane_vc_t3_ParamLimits

0x36a3,	// (0x0001803c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x000243d1) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x000243d1) list_single_number_heading_pane_vc_t

0x1698,	// (0x00016031) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1698,	// (0x00016031) list_single_graphic_heading_pane_vc_g1

0x0796,	// (0x0001512f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0796,	// (0x0001512f) list_single_graphic_heading_pane_vc_g4

0x16a4,	// (0x0001603d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x16a4,	// (0x0001603d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x00024152) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00024152) list_single_graphic_heading_pane_vc_g

0x176a,	// (0x00016103) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x176a,	// (0x00016103) list_single_graphic_heading_pane_vc_t1

0x36b5,	// (0x0001804e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x36b5,	// (0x0001804e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x000243d8) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x000243d8) list_single_graphic_heading_pane_vc_t

0x0796,	// (0x0001512f) list_double2_pane_vc_g1_ParamLimits

0x0796,	// (0x0001512f) list_double2_pane_vc_g1

0x16a4,	// (0x0001603d) list_double2_pane_vc_g2_ParamLimits

0x16a4,	// (0x0001603d) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023f61) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023f61) list_double2_pane_vc_g

0x36c7,	// (0x00018060) list_double2_pane_vc_t1_ParamLimits

0x36c7,	// (0x00018060) list_double2_pane_vc_t1

0x36dd,	// (0x00018076) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x36dd,	// (0x00018076) list_double2_large_graphic_pane_vc_g1

0x0796,	// (0x0001512f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0796,	// (0x0001512f) list_double2_large_graphic_pane_vc_g2

0x16a4,	// (0x0001603d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x16a4,	// (0x0001603d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00023f7e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00023f7e) list_double2_large_graphic_pane_vc_g

0x36e9,	// (0x00018082) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x36e9,	// (0x00018082) list_double2_large_graphic_pane_vc_t1

0x36ff,	// (0x00018098) list_double_time_pane_vc_g1_ParamLimits

0x36ff,	// (0x00018098) list_double_time_pane_vc_g1

0x370b,	// (0x000180a4) list_double_time_pane_vc_g2_ParamLimits

0x370b,	// (0x000180a4) list_double_time_pane_vc_g2

0x0001,

0xfa44,	// (0x000243dd) list_double_time_pane_vc_g_ParamLimits

0xfa44,	// (0x000243dd) list_double_time_pane_vc_g

0x3717,	// (0x000180b0) list_double_time_pane_vc_t1_ParamLimits

0x3717,	// (0x000180b0) list_double_time_pane_vc_t1

0x3747,	// (0x000180e0) list_double_time_pane_vc_t2_ParamLimits

0x3747,	// (0x000180e0) list_double_time_pane_vc_t2

0x3770,	// (0x00018109) list_double_time_pane_vc_t3_ParamLimits

0x3770,	// (0x00018109) list_double_time_pane_vc_t3

0x3782,	// (0x0001811b) list_double_time_pane_vc_t4_ParamLimits

0x3782,	// (0x0001811b) list_double_time_pane_vc_t4

0x0003,

0xfa49,	// (0x000243e2) list_double_time_pane_vc_t_ParamLimits

0xfa49,	// (0x000243e2) list_double_time_pane_vc_t

0x0796,	// (0x0001512f) list_double_pane_vc_g1_ParamLimits

0x0796,	// (0x0001512f) list_double_pane_vc_g1

0x16a4,	// (0x0001603d) list_double_pane_vc_g2_ParamLimits

0x16a4,	// (0x0001603d) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023f61) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023f61) list_double_pane_vc_g

0x37a7,	// (0x00018140) list_double_pane_vc_t1_ParamLimits

0x37a7,	// (0x00018140) list_double_pane_vc_t1

0x37bb,	// (0x00018154) list_double_pane_vc_t2_ParamLimits

0x37bb,	// (0x00018154) list_double_pane_vc_t2

0x0001,

0xfa52,	// (0x000243eb) list_double_pane_vc_t_ParamLimits

0xfa52,	// (0x000243eb) list_double_pane_vc_t

0x0796,	// (0x0001512f) list_double_number_pane_vc_g1_ParamLimits

0x0796,	// (0x0001512f) list_double_number_pane_vc_g1

0x16a4,	// (0x0001603d) list_double_number_pane_vc_g2_ParamLimits

0x16a4,	// (0x0001603d) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00023f61) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00023f61) list_double_number_pane_vc_g

0x37d1,	// (0x0001816a) list_double_number_pane_vc_t1_ParamLimits

0x37d1,	// (0x0001816a) list_double_number_pane_vc_t1

0x37e5,	// (0x0001817e) list_double_number_pane_vc_t2_ParamLimits

0x37e5,	// (0x0001817e) list_double_number_pane_vc_t2

0x37f9,	// (0x00018192) list_double_number_pane_vc_t3_ParamLimits

0x37f9,	// (0x00018192) list_double_number_pane_vc_t3

0x0002,

0xfa57,	// (0x000243f0) list_double_number_pane_vc_t_ParamLimits

0xfa57,	// (0x000243f0) list_double_number_pane_vc_t

0x380f,	// (0x000181a8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x380f,	// (0x000181a8) list_double_large_graphic_pane_vc_g1

0x3837,	// (0x000181d0) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3837,	// (0x000181d0) list_double_large_graphic_pane_vc_g2

0x384b,	// (0x000181e4) list_double_large_graphic_pane_vc_g3_ParamLimits

0x384b,	// (0x000181e4) list_double_large_graphic_pane_vc_g3

0x385a,	// (0x000181f3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x385a,	// (0x000181f3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5e,	// (0x000243f7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5e,	// (0x000243f7) list_double_large_graphic_pane_vc_g

0x386a,	// (0x00018203) list_double_large_graphic_pane_vc_t1_ParamLimits

0x386a,	// (0x00018203) list_double_large_graphic_pane_vc_t1

0x388c,	// (0x00018225) list_double_large_graphic_pane_vc_t2_ParamLimits

0x388c,	// (0x00018225) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa67,	// (0x00024400) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa67,	// (0x00024400) list_double_large_graphic_pane_vc_t

0x33e5,	// (0x00017d7e) list_double_heading_pane_vc_g1_ParamLimits

0x33e5,	// (0x00017d7e) list_double_heading_pane_vc_g1

0x33f1,	// (0x00017d8a) list_double_heading_pane_vc_g2_ParamLimits

0x33f1,	// (0x00017d8a) list_double_heading_pane_vc_g2

0x0001,

0xfa6c,	// (0x00024405) list_double_heading_pane_vc_g_ParamLimits

0xfa6c,	// (0x00024405) list_double_heading_pane_vc_g

0x38ac,	// (0x00018245) list_double_heading_pane_vc_t1_ParamLimits

0x38ac,	// (0x00018245) list_double_heading_pane_vc_t1

0x176a,	// (0x00016103) list_double_heading_pane_vc_t2_ParamLimits

0x176a,	// (0x00016103) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0002440a) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0002440a) list_double_heading_pane_vc_t

0x38be,	// (0x00018257) list_double_graphic_pane_vc_g1_ParamLimits

0x38be,	// (0x00018257) list_double_graphic_pane_vc_g1

0x38ca,	// (0x00018263) list_double_graphic_pane_vc_g2_ParamLimits

0x38ca,	// (0x00018263) list_double_graphic_pane_vc_g2

0x0796,	// (0x0001512f) list_double_graphic_pane_vc_g3_ParamLimits

0x0796,	// (0x0001512f) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x0002440f) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0002440f) list_double_graphic_pane_vc_g

0x38e7,	// (0x00018280) list_double_graphic_pane_vc_t1_ParamLimits

0x38e7,	// (0x00018280) list_double_graphic_pane_vc_t1

0x3911,	// (0x000182aa) list_double_graphic_pane_vc_t2_ParamLimits

0x3911,	// (0x000182aa) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00024418) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00024418) list_double_graphic_pane_vc_t

0xd61f,	// (0x00021fb8) aid_size_cell_fastswap

0x8735,	// (0x0001d0ce) aid_size_cell_touch_ParamLimits

0x8735,	// (0x0001d0ce) aid_size_cell_touch

0xd7a6,	// (0x0002213f) popup_fast_swap_wide_window_ParamLimits

0xd7a6,	// (0x0002213f) popup_fast_swap_wide_window

0x88f3,	// (0x0001d28c) touch_pane_ParamLimits

0x88f3,	// (0x0001d28c) touch_pane

0xd8db,	// (0x00022274) button_value_adjust_pane_cp2

0xd8e3,	// (0x0002227c) button_value_adjust_pane_cp4

0xd8eb,	// (0x00022284) form_field_data_pane_cp2

0x9a9d,	// (0x0001e436) form_field_data_wide_pane_cp2

0xde76,	// (0x0002280f) bg_scroll_pane_ParamLimits

0xe41b,	// (0x00022db4) scroll_handle_pane_ParamLimits

0xe42f,	// (0x00022dc8) scroll_sc2_down_pane_ParamLimits

0xe42f,	// (0x00022dc8) scroll_sc2_down_pane

0xdea7,	// (0x00022840) scroll_sc2_up_pane_ParamLimits

0xdea7,	// (0x00022840) scroll_sc2_up_pane

0xb439,	// (0x0001fdd2) grid_wheel_folder_pane_g1_ParamLimits

0xb439,	// (0x0001fdd2) grid_wheel_folder_pane_g1

0xe5f9,	// (0x00022f92) clock_nsta_pane_cp2_ParamLimits

0xe5f9,	// (0x00022f92) clock_nsta_pane_cp2

0x0bab,	// (0x00015544) listscroll_midp_pane_ParamLimits

0x9fdc,	// (0x0001e975) midp_canvas_pane

0x0b17,	// (0x000154b0) nsta_clock_indic_pane

0x0b75,	// (0x0001550e) listscroll_form_pane_vc

0x0b99,	// (0x00015532) listscroll_set_pane_vc_ParamLimits

0x0b99,	// (0x00015532) listscroll_set_pane_vc

0xa9ce,	// (0x0001f367) clock_nsta_pane

0xa9f8,	// (0x0001f391) indicator_nsta_pane

0x1632,	// (0x00015fcb) bg_popup_sub_pane_cp2_ParamLimits

0x1646,	// (0x00015fdf) find_pane_cp2_ParamLimits

0x1646,	// (0x00015fdf) find_pane_cp2

0x165c,	// (0x00015ff5) grid_toobar_pane_ParamLimits

0x181c,	// (0x000161b5) list_form_gen_pane_vc_ParamLimits

0x181c,	// (0x000161b5) list_form_gen_pane_vc

0x1832,	// (0x000161cb) scroll_pane_cp8_vc_ParamLimits

0x1832,	// (0x000161cb) scroll_pane_cp8_vc

0x18ae,	// (0x00016247) data_form_wide_pane_vc_ParamLimits

0x18ae,	// (0x00016247) data_form_wide_pane_vc

0x18ba,	// (0x00016253) form_field_data_wide_pane_vc_g1

0x18c2,	// (0x0001625b) form_field_data_wide_pane_vc_t1_ParamLimits

0x18c2,	// (0x0001625b) form_field_data_wide_pane_vc_t1

0xd946,	// (0x000222df) input_focus_pane_cp6_vc_ParamLimits

0xd946,	// (0x000222df) input_focus_pane_cp6_vc

0xad95,	// (0x0001f72e) list_midp_pane_ParamLimits

0x3047,	// (0x000179e0) scroll_pane_cp16_ParamLimits

0x3047,	// (0x000179e0) scroll_pane_cp16

0x1c4d,	// (0x000165e6) button_value_adjust_pane_ParamLimits

0x1c4d,	// (0x000165e6) button_value_adjust_pane

0xb050,	// (0x0001f9e9) button_value_adjust_pane_cp6_ParamLimits

0xb050,	// (0x0001f9e9) button_value_adjust_pane_cp6

0xb192,	// (0x0001fb2b) settings_code_pane_cp_ParamLimits

0xb192,	// (0x0001fb2b) settings_code_pane_cp

0xb887,	// (0x00020220) cell_touch_pane_g1

0xb887,	// (0x00020220) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00024097) cell_touch_pane_g

0xb312,	// (0x0001fcab) cell_touch_pane_cp_ParamLimits

0xb312,	// (0x0001fcab) cell_touch_pane_cp

0xb32e,	// (0x0001fcc7) cell_touch_pane_ParamLimits

0xb32e,	// (0x0001fcc7) cell_touch_pane

0xb887,	// (0x00020220) scroll_sc2_down_pane_g1

0xb887,	// (0x00020220) scroll_sc2_up_pane_g1

0xb891,	// (0x0002022a) bg_set_opt_pane_cp4_vc

0x3431,	// (0x00017dca) list_set_graphic_pane_vc_g1_ParamLimits

0x3431,	// (0x00017dca) list_set_graphic_pane_vc_g1

0xe3aa,	// (0x00022d43) list_set_graphic_pane_vc_g2_ParamLimits

0xe3aa,	// (0x00022d43) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0002438e) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0002438e) list_set_graphic_pane_vc_g

0x343d,	// (0x00017dd6) text_primary_small_cp13_vc_ParamLimits

0x343d,	// (0x00017dd6) text_primary_small_cp13_vc

0x3455,	// (0x00017dee) list_set_graphic_pane_vc_ParamLimits

0x3455,	// (0x00017dee) list_set_graphic_pane_vc

0xb891,	// (0x0002022a) input_focus_pane_cp2_vc

0xb887,	// (0x00020220) setting_code_pane_vc_g1

0xb910,	// (0x000202a9) setting_code_pane_vc_t1

0x346a,	// (0x00017e03) set_text_pane_vc_t1_ParamLimits

0x346a,	// (0x00017e03) set_text_pane_vc_t1

0xb891,	// (0x0002022a) input_focus_pane_cp1_vc

0x3488,	// (0x00017e21) list_set_text_pane_vc

0xb887,	// (0x00020220) setting_text_pane_vc_g1

0xb891,	// (0x0002022a) bg_set_opt_pane_cp2_vc

0xb907,	// (0x000202a0) setting_slider_graphic_pane_vc_g1

0x3492,	// (0x00017e2b) setting_slider_graphic_pane_vc_t1

0x34a4,	// (0x00017e3d) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x00024393) setting_slider_graphic_pane_vc_t

0x34b6,	// (0x00017e4f) slider_set_pane_cp_vc

0x34c0,	// (0x00017e59) slider_set_pane_vc_g1

0x34c9,	// (0x00017e62) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x00024398) slider_set_pane_vc_g

0xda0f,	// (0x000223a8) set_opt_bg_pane_g1_copy1

0xda17,	// (0x000223b0) set_opt_bg_pane_g2_copy1

0x34f5,	// (0x00017e8e) set_opt_bg_pane_g3_copy1

0xda27,	// (0x000223c0) set_opt_bg_pane_g4_copy1

0xda2f,	// (0x000223c8) set_opt_bg_pane_g5_copy1

0xda37,	// (0x000223d0) set_opt_bg_pane_g6_copy1

0x34ff,	// (0x00017e98) set_opt_bg_pane_g7_copy1

0x3509,	// (0x00017ea2) set_opt_bg_pane_g8_copy1

0x3513,	// (0x00017eac) set_opt_bg_pane_g9_copy1

0xb891,	// (0x0002022a) bg_set_opt_pane_cp_vc

0x351d,	// (0x00017eb6) setting_slider_pane_vc_t1

0x352c,	// (0x00017ec5) setting_slider_pane_vc_t2

0x353e,	// (0x00017ed7) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x000243a7) setting_slider_pane_vc_t

0x3550,	// (0x00017ee9) slider_set_pane_vc

0xe85e,	// (0x000231f7) volume_set_pane_vc_g1

0xea0c,	// (0x000233a5) volume_set_pane_vc_g2

0xea15,	// (0x000233ae) volume_set_pane_vc_g3

0xea1e,	// (0x000233b7) volume_set_pane_vc_g4

0xea27,	// (0x000233c0) volume_set_pane_vc_g5

0xea30,	// (0x000233c9) volume_set_pane_vc_g6

0xea39,	// (0x000233d2) volume_set_pane_vc_g7

0xea42,	// (0x000233db) volume_set_pane_vc_g8

0xea4b,	// (0x000233e4) volume_set_pane_vc_g9

0xea54,	// (0x000233ed) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x000243ae) volume_set_pane_vc_g

0x355a,	// (0x00017ef3) volume_set_pane_vc

0x3564,	// (0x00017efd) button_value_adjust_pane_cp1_vc

0x356e,	// (0x00017f07) list_highlight_pane_cp2_vc

0x3577,	// (0x00017f10) list_set_pane_vc_ParamLimits

0x3577,	// (0x00017f10) list_set_pane_vc

0x35e7,	// (0x00017f80) main_pane_set_vc_t1_ParamLimits

0x35e7,	// (0x00017f80) main_pane_set_vc_t1

0x35fc,	// (0x00017f95) main_pane_set_vc_t2_ParamLimits

0x35fc,	// (0x00017f95) main_pane_set_vc_t2

0x360e,	// (0x00017fa7) main_pane_set_vc_t3_ParamLimits

0x360e,	// (0x00017fa7) main_pane_set_vc_t3

0x3622,	// (0x00017fbb) main_pane_set_vc_t4_ParamLimits

0x3622,	// (0x00017fbb) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x000243c3) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x000243c3) main_pane_set_vc_t

0x3636,	// (0x00017fcf) setting_code_pane_vc_ParamLimits

0x3636,	// (0x00017fcf) setting_code_pane_vc

0x3647,	// (0x00017fe0) setting_slider_graphic_pane_vc

0x3647,	// (0x00017fe0) setting_slider_pane_vc

0x3647,	// (0x00017fe0) setting_text_pane_vc

0x3647,	// (0x00017fe0) setting_volume_pane_vc

0x3651,	// (0x00017fea) scroll_pane_cp121_vc

0xd8c9,	// (0x00022262) set_content_pane_vc

0x392f,	// (0x000182c8) button_value_adjust_pane_g1

0x3938,	// (0x000182d1) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x0002441d) button_value_adjust_pane_g

0x3941,	// (0x000182da) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3941,	// (0x000182da) form_field_slider_wide_pane_vc_t1

0x3953,	// (0x000182ec) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3953,	// (0x000182ec) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00024422) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00024422) form_field_slider_wide_pane_vc_t

0xb8eb,	// (0x00020284) input_focus_pane_cp10_vc_ParamLimits

0xb8eb,	// (0x00020284) input_focus_pane_cp10_vc

0x397f,	// (0x00018318) slider_cont_pane_cp1_vc_ParamLimits

0x397f,	// (0x00018318) slider_cont_pane_cp1_vc

0x3991,	// (0x0001832a) slider_form_pane_g1_cp2

0x34c9,	// (0x00017e62) slider_form_pane_g2_cp2

0x39be,	// (0x00018357) form_field_slider_pane_vc_t3

0x39cc,	// (0x00018365) form_field_slider_pane_vc_t4

0x39da,	// (0x00018373) slider_form_pane_vc_ParamLimits

0x39da,	// (0x00018373) slider_form_pane_vc

0x39e7,	// (0x00018380) form_field_slider_pane_vc_t1_ParamLimits

0x39e7,	// (0x00018380) form_field_slider_pane_vc_t1

0x3953,	// (0x000182ec) form_field_slider_pane_vc_t2_ParamLimits

0x3953,	// (0x000182ec) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x00024434) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x00024434) form_field_slider_pane_vc_t

0xb8eb,	// (0x00020284) input_focus_pane_cp9_vc_ParamLimits

0xb8eb,	// (0x00020284) input_focus_pane_cp9_vc

0x39fd,	// (0x00018396) slider_cont_pane_vc_ParamLimits

0x39fd,	// (0x00018396) slider_cont_pane_vc

0x3a11,	// (0x000183aa) list_form_graphic_pane_cp_vc_ParamLimits

0x3a11,	// (0x000183aa) list_form_graphic_pane_cp_vc

0x18ba,	// (0x00016253) form_field_popup_wide_pane_vc_g1

0x3a26,	// (0x000183bf) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3a26,	// (0x000183bf) form_field_popup_wide_pane_vc_t1

0xd946,	// (0x000222df) input_focus_pane_cp8_vc_ParamLimits

0xd946,	// (0x000222df) input_focus_pane_cp8_vc

0x3a6b,	// (0x00018404) list_form_wide_pane_vc_ParamLimits

0x3a6b,	// (0x00018404) list_form_wide_pane_vc

0x3a77,	// (0x00018410) list_form_graphic_pane_vc_g1

0x3a7f,	// (0x00018418) list_form_graphic_pane_vc_t1_ParamLimits

0x3a7f,	// (0x00018418) list_form_graphic_pane_vc_t1

0xb8f9,	// (0x00020292) list_highlight_pane_cp5_vc_ParamLimits

0xb8f9,	// (0x00020292) list_highlight_pane_cp5_vc

0x3a9b,	// (0x00018434) list_form_graphic_pane_vc_ParamLimits

0x3a9b,	// (0x00018434) list_form_graphic_pane_vc

0x18ba,	// (0x00016253) form_field_popup_pane_vc_g1

0x3ab1,	// (0x0001844a) form_field_popup_pane_vc_t1_ParamLimits

0x3ab1,	// (0x0001844a) form_field_popup_pane_vc_t1

0xd946,	// (0x000222df) input_focus_pane_cp7_vc_ParamLimits

0xd946,	// (0x000222df) input_focus_pane_cp7_vc

0x3ac8,	// (0x00018461) list_form_pane_vc_ParamLimits

0x3ac8,	// (0x00018461) list_form_pane_vc

0x3ad4,	// (0x0001846d) data_form_pane_vc_t1_ParamLimits

0x3ad4,	// (0x0001846d) data_form_pane_vc_t1

0xda0f,	// (0x000223a8) input_focus_pane_vc_g1

0xda17,	// (0x000223b0) input_focus_pane_vc_g2

0xda1f,	// (0x000223b8) input_focus_pane_vc_g3

0xda27,	// (0x000223c0) input_focus_pane_vc_g4

0xda2f,	// (0x000223c8) input_focus_pane_vc_g5

0xda37,	// (0x000223d0) input_focus_pane_vc_g6

0xda3f,	// (0x000223d8) input_focus_pane_vc_g7

0xda47,	// (0x000223e0) input_focus_pane_vc_g8

0xda4f,	// (0x000223e8) input_focus_pane_vc_g9

0xb887,	// (0x00020220) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00024020) input_focus_pane_vc_g

0x18ae,	// (0x00016247) data_form_pane_vc_ParamLimits

0x18ae,	// (0x00016247) data_form_pane_vc

0x18ba,	// (0x00016253) form_field_data_pane_vc_g1

0x3af1,	// (0x0001848a) form_field_data_pane_vc_t1_ParamLimits

0x3af1,	// (0x0001848a) form_field_data_pane_vc_t1

0xd946,	// (0x000222df) input_focus_pane_vc_ParamLimits

0xd946,	// (0x000222df) input_focus_pane_vc

0x3b0b,	// (0x000184a4) button_value_adjust_pane_cp3_vc

0x3b13,	// (0x000184ac) button_value_adjust_pane_cp5_vc

0x3b1b,	// (0x000184b4) form_field_data_pane_vc_ParamLimits

0x3b1b,	// (0x000184b4) form_field_data_pane_vc

0x3b36,	// (0x000184cf) form_field_data_pane_vc_cp2

0x3b3e,	// (0x000184d7) form_field_data_wide_pane_vc_ParamLimits

0x3b3e,	// (0x000184d7) form_field_data_wide_pane_vc

0x3b58,	// (0x000184f1) form_field_data_wide_pane_vc_cp2

0x3b60,	// (0x000184f9) form_field_popup_pane_vc_ParamLimits

0x3b60,	// (0x000184f9) form_field_popup_pane_vc

0x3b7b,	// (0x00018514) form_field_popup_wide_pane_vc_ParamLimits

0x3b7b,	// (0x00018514) form_field_popup_wide_pane_vc

0x3b95,	// (0x0001852e) form_field_slider_pane_vc_ParamLimits

0x3b95,	// (0x0001852e) form_field_slider_pane_vc

0x3ba8,	// (0x00018541) form_field_slider_wide_pane_vc_ParamLimits

0x3ba8,	// (0x00018541) form_field_slider_wide_pane_vc

0xb34c,	// (0x0001fce5) grid_touch_1_pane_ParamLimits

0xb34c,	// (0x0001fce5) grid_touch_1_pane

0xb360,	// (0x0001fcf9) grid_touch_2_pane_ParamLimits

0xb360,	// (0x0001fcf9) grid_touch_2_pane

0x3c79,	// (0x00018612) touch_pane_g1_ParamLimits

0x3c79,	// (0x00018612) touch_pane_g1

0x3be1,	// (0x0001857a) cell_app_pane_cp_wide_ParamLimits

0x3be1,	// (0x0001857a) cell_app_pane_cp_wide

0x3bf2,	// (0x0001858b) grid_popup_fast_wide_pane_ParamLimits

0x3bf2,	// (0x0001858b) grid_popup_fast_wide_pane

0x3c06,	// (0x0001859f) scroll_pane_cp19_ParamLimits

0x3c06,	// (0x0001859f) scroll_pane_cp19

0xb891,	// (0x0002022a) bg_popup_window_pane_cp20

0x3c1a,	// (0x000185b3) listscroll_popup_fast_wide_pane

0xe3b6,	// (0x00022d4f) grid_indicator_nsta_pane

0x3c22,	// (0x000185bb) clock_nsta_pane_g1

0x3c2b,	// (0x000185c4) clock_nsta_pane_t1

0xb38c,	// (0x0001fd25) cell_indicator_nsta_pane_ParamLimits

0xb38c,	// (0x0001fd25) cell_indicator_nsta_pane

0x3c79,	// (0x00018612) cell_indicator_nsta_pane_g1

0xb3a5,	// (0x0001fd3e) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x00024445) cell_indicator_nsta_pane_g

0x3c9d,	// (0x00018636) clock_nsta_pane_cp

0x3ca5,	// (0x0001863e) indicator_nsta_pane_cp

0x3cae,	// (0x00018647) nsta_clock_indic_pane_g1

0xb94f,	// (0x000202e8) grid_indicator_pane

0xdf99,	// (0x00022932) scroll_pane_cp29

0xe545,	// (0x00022ede) indicator_nsta_pane_cp2_ParamLimits

0xe545,	// (0x00022ede) indicator_nsta_pane_cp2

0xb8f9,	// (0x00020292) main_apps_wheel_pane

0x1ad0,	// (0x00016469) form_midp_field_text_pane_ParamLimits

0x1c1f,	// (0x000165b8) scroll_bar_cp050_ParamLimits

0x3d17,	// (0x000186b0) cell_indicator_pane_ParamLimits

0x3d17,	// (0x000186b0) cell_indicator_pane

0x3d2f,	// (0x000186c8) cell_indicator_pane_g1

0xb3bb,	// (0x0001fd54) grid_wheel_folder_pane_ParamLimits

0xb3bb,	// (0x0001fd54) grid_wheel_folder_pane

0xb3c9,	// (0x0001fd62) list_wheel_apps_pane_ParamLimits

0xb3c9,	// (0x0001fd62) list_wheel_apps_pane

0xb3d7,	// (0x0001fd70) main_apps_wheel_pane_g1_ParamLimits

0xb3d7,	// (0x0001fd70) main_apps_wheel_pane_g1

0xb3e7,	// (0x0001fd80) main_apps_wheel_pane_g2_ParamLimits

0xb3e7,	// (0x0001fd80) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x00024461) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x00024461) main_apps_wheel_pane_g

0xb3f7,	// (0x0001fd90) main_apps_wheel_pane_t1_ParamLimits

0xb3f7,	// (0x0001fd90) main_apps_wheel_pane_t1

0xb40f,	// (0x0001fda8) list_wheel_apps_pane_g1

0xb417,	// (0x0001fdb0) list_wheel_apps_pane_g2

0xb41f,	// (0x0001fdb8) list_wheel_apps_pane_g3

0xb427,	// (0x0001fdc0) list_wheel_apps_pane_g4

0xb42f,	// (0x0001fdc8) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00024466) list_wheel_apps_pane_g

0xe319,	// (0x00022cb2) navi_icon_text_pane

0xa8c0,	// (0x0001f259) aid_fill_nsta

0xb44c,	// (0x0001fde5) navi_icon_text_pane_g1

0xb458,	// (0x0001fdf1) navi_icon_text_pane_t1

0x9f35,	// (0x0001e8ce) list_set_graphic_pane_t1_ParamLimits

0x9f35,	// (0x0001e8ce) list_set_graphic_pane_t1

0x2370,	// (0x00016d09) popup_midp_note_alarm_window_t6_ParamLimits

0x2370,	// (0x00016d09) popup_midp_note_alarm_window_t6

0x2382,	// (0x00016d1b) popup_midp_note_alarm_window_t7_ParamLimits

0x2382,	// (0x00016d1b) popup_midp_note_alarm_window_t7

0x2394,	// (0x00016d2d) popup_midp_note_alarm_window_t8_ParamLimits

0x2394,	// (0x00016d2d) popup_midp_note_alarm_window_t8

0x23a6,	// (0x00016d3f) popup_midp_note_alarm_window_t9_ParamLimits

0x23a6,	// (0x00016d3f) popup_midp_note_alarm_window_t9

0x23b8,	// (0x00016d51) popup_midp_note_alarm_window_t10_ParamLimits

0x23b8,	// (0x00016d51) popup_midp_note_alarm_window_t10

0x23ca,	// (0x00016d63) popup_midp_note_alarm_window_t11_ParamLimits

0x23ca,	// (0x00016d63) popup_midp_note_alarm_window_t11

0x23dc,	// (0x00016d75) scroll_pane_cp17_ParamLimits

0x23dc,	// (0x00016d75) scroll_pane_cp17

0xe85e,	// (0x000231f7) volume_small_pane_cp_g1

0xea5d,	// (0x000233f6) volume_small_pane_cp_g2

0xea66,	// (0x000233ff) volume_small_pane_cp_g3

0xea6f,	// (0x00023408) volume_small_pane_cp_g4

0xea78,	// (0x00023411) volume_small_pane_cp_g5

0xea81,	// (0x0002341a) volume_small_pane_cp_g6

0xea8a,	// (0x00023423) volume_small_pane_cp_g7

0xea93,	// (0x0002342c) volume_small_pane_cp_g8

0xea9c,	// (0x00023435) volume_small_pane_cp_g9

0xeaa5,	// (0x0002343e) volume_small_pane_cp_g10

0x08f6,	// (0x0001528f) midp_ticker_pane_g1_ParamLimits

0x0902,	// (0x0001529b) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x000240ec) midp_ticker_pane_g_ParamLimits

0xa073,	// (0x0001ea0c) midp_ticker_pane_t1_ParamLimits

0xa8e4,	// (0x0001f27d) aid_fill_nsta_2

0x1c0b,	// (0x000165a4) list_form2_midp_pane

0x2dd0,	// (0x00017769) midp_editing_number_pane_ParamLimits

0x2ddf,	// (0x00017778) midp_ticker_pane_ParamLimits

0x3e22,	// (0x000187bb) form2_midp_field_pane

0x3e46,	// (0x000187df) scroll_pane_cp51

0x3e66,	// (0x000187ff) form2_midp_button_pane_ParamLimits

0x3e66,	// (0x000187ff) form2_midp_button_pane

0x3e78,	// (0x00018811) form2_midp_content_pane_ParamLimits

0x3e78,	// (0x00018811) form2_midp_content_pane

0x3e92,	// (0x0001882b) form2_midp_field_choice_group_pane

0x3e9a,	// (0x00018833) form2_midp_field_pane_g1

0x3ea2,	// (0x0001883b) form2_midp_field_pane_g2

0x3eaa,	// (0x00018843) form2_midp_field_pane_g3

0x3eb2,	// (0x0001884b) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x0002448b) form2_midp_field_pane_g

0x3eba,	// (0x00018853) form2_midp_gauge_slider_pane

0x3ec2,	// (0x0001885b) form2_midp_gauge_wait_pane

0x3eca,	// (0x00018863) form2_midp_image_pane_ParamLimits

0x3eca,	// (0x00018863) form2_midp_image_pane

0x3ee5,	// (0x0001887e) form2_midp_label_pane_ParamLimits

0x3ee5,	// (0x0001887e) form2_midp_label_pane

0xb486,	// (0x0001fe1f) form2_midp_label_pane_cp_ParamLimits

0xb486,	// (0x0001fe1f) form2_midp_label_pane_cp

0x3f25,	// (0x000188be) form2_midp_string_pane_ParamLimits

0x3f25,	// (0x000188be) form2_midp_string_pane

0xb4a7,	// (0x0001fe40) form2_midp_text_pane_ParamLimits

0xb4a7,	// (0x0001fe40) form2_midp_text_pane

0x3f58,	// (0x000188f1) form2_midp_time_pane

0x3f68,	// (0x00018901) input_focus_pane_cp51_ParamLimits

0x3f68,	// (0x00018901) input_focus_pane_cp51

0x3f80,	// (0x00018919) form2_midp_label_pane_t1_ParamLimits

0x3f80,	// (0x00018919) form2_midp_label_pane_t1

0xb4c8,	// (0x0001fe61) form2_mdip_text_pane_t1_ParamLimits

0xb4c8,	// (0x0001fe61) form2_mdip_text_pane_t1

0x3fe8,	// (0x00018981) form2_midp_time_pane_t1

0x4003,	// (0x0001899c) form2_midp_gauge_slider_pane_t1

0xb4e7,	// (0x0001fe80) form2_midp_gauge_slider_pane_t2

0xb4f9,	// (0x0001fe92) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00024494) form2_midp_gauge_slider_pane_t

0x4039,	// (0x000189d2) form2_midp_slider_pane

0x4045,	// (0x000189de) form2_midp_gauge_wait_pane_t1

0x4053,	// (0x000189ec) form2_midp_wait_pane_ParamLimits

0x4053,	// (0x000189ec) form2_midp_wait_pane

0x1901,	// (0x0001629a) list_single_2graphic_pane_cp4_ParamLimits

0x1901,	// (0x0001629a) list_single_2graphic_pane_cp4

0x407e,	// (0x00018a17) list_single_midp_graphic_pane_cp_ParamLimits

0x407e,	// (0x00018a17) list_single_midp_graphic_pane_cp

0xb891,	// (0x0002022a) list_highlight_pane_cp20

0x40a2,	// (0x00018a3b) list_single_2graphic_pane_g1_cp4

0x32c7,	// (0x00017c60) list_single_2graphic_pane_g2_cp4

0x40aa,	// (0x00018a43) list_single_2graphic_pane_t1_cp4

0xb8f9,	// (0x00020292) list_highlight_pane_cp21

0x40b9,	// (0x00018a52) list_single_midp_graphic_pane_g4_cp

0x40c8,	// (0x00018a61) list_single_midp_graphic_pane_t1_cp

0xb50b,	// (0x0001fea4) form2_mdip_string_pane_t1_ParamLimits

0xb50b,	// (0x0001fea4) form2_mdip_string_pane_t1

0xb891,	// (0x0002022a) bg_wml_button_pane_cp2

0xb887,	// (0x00020220) form2_midp_image_pane_g1

0xd873,	// (0x0002220c) list_double_large_graphic_pane_g5_ParamLimits

0xd873,	// (0x0002220c) list_double_large_graphic_pane_g5

0x0bab,	// (0x00015544) midp_form_pane_ParamLimits

0xb8f9,	// (0x00020292) main_apps_wheel_pane_ParamLimits

0xa5d8,	// (0x0001ef71) popup_preview_window_ParamLimits

0xa5d8,	// (0x0001ef71) popup_preview_window

0x117b,	// (0x00015b14) popup_touch_info_window_ParamLimits

0x117b,	// (0x00015b14) popup_touch_info_window

0x119d,	// (0x00015b36) popup_touch_menu_window_ParamLimits

0x119d,	// (0x00015b36) popup_touch_menu_window

0xb87d,	// (0x00020216) bg_popup_sub_pane_cp6

0x4182,	// (0x00018b1b) list_touch_menu_pane

0x418a,	// (0x00018b23) list_single_touch_menu_pane_ParamLimits

0x418a,	// (0x00018b23) list_single_touch_menu_pane

0x41a2,	// (0x00018b3b) list_single_touch_menu_pane_t1

0xb8f9,	// (0x00020292) bg_popup_sub_pane_cp7_ParamLimits

0xb8f9,	// (0x00020292) bg_popup_sub_pane_cp7

0x41b0,	// (0x00018b49) heading_sub_pane

0x41b8,	// (0x00018b51) list_touch_info_pane_ParamLimits

0x41b8,	// (0x00018b51) list_touch_info_pane

0x41c7,	// (0x00018b60) list_single_touch_info_pane_ParamLimits

0x41c7,	// (0x00018b60) list_single_touch_info_pane

0x41d9,	// (0x00018b72) list_single_touch_info_pane_t1

0x41e7,	// (0x00018b80) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x000244a2) list_single_touch_info_pane_t

0x0825,	// (0x000151be) bg_popup_heading_pane_cp

0x41f5,	// (0x00018b8e) heading_sub_pane_t1

0x1848,	// (0x000161e1) bg_popup_preview_window_pane_cp_ParamLimits

0x1848,	// (0x000161e1) bg_popup_preview_window_pane_cp

0x41b0,	// (0x00018b49) heading_preview_pane

0x41b8,	// (0x00018b51) list_preview_pane_ParamLimits

0x41b8,	// (0x00018b51) list_preview_pane

0x4203,	// (0x00018b9c) popup_preview_window_g1

0x41c7,	// (0x00018b60) list_single_preview_pane_ParamLimits

0x41c7,	// (0x00018b60) list_single_preview_pane

0x420b,	// (0x00018ba4) list_single_preview_pane_g1

0x4213,	// (0x00018bac) list_single_preview_pane_t1

0x41d9,	// (0x00018b72) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x000244a7) list_single_preview_pane_t

0x4221,	// (0x00018bba) bg_popup_heading_pane_cp2_ParamLimits

0x4221,	// (0x00018bba) bg_popup_heading_pane_cp2

0x4237,	// (0x00018bd0) heading_preview_pane_g1

0x423f,	// (0x00018bd8) heading_preview_pane_t1_ParamLimits

0x423f,	// (0x00018bd8) heading_preview_pane_t1

0xb966,	// (0x000202ff) soft_indicator_pane_t1_ParamLimits

0xbe9b,	// (0x00020834) scroll_pane_ParamLimits

0xde95,	// (0x0002282e) scroll_sc2_left_pane

0xde9e,	// (0x00022837) scroll_sc2_right_pane

0xdebd,	// (0x00022856) scroll_bg_pane_g1_ParamLimits

0xded2,	// (0x0002286b) scroll_bg_pane_g2_ParamLimits

0xdeea,	// (0x00022883) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00024077) scroll_bg_pane_g_ParamLimits

0xdebd,	// (0x00022856) scroll_handle_pane_g1_ParamLimits

0xdf0c,	// (0x000228a5) scroll_handle_pane_g2_ParamLimits

0xdeea,	// (0x00022883) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0002407e) scroll_handle_pane_g_ParamLimits

0x0bdb,	// (0x00015574) popup_choice_list_window_ParamLimits

0x0bdb,	// (0x00015574) popup_choice_list_window

0x163e,	// (0x00015fd7) choice_list_pane

0x16ee,	// (0x00016087) cell_toolbar_pane_t1

0x1716,	// (0x000160af) toolbar_button_pane_ParamLimits

0x28a6,	// (0x0001723f) ai_gene_pane_1_t2_ParamLimits

0x28a6,	// (0x0001723f) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x000242a1) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x000242a1) ai_gene_pane_1_t

0x425c,	// (0x00018bf5) scroll_sc2_left_pane_g1

0x425c,	// (0x00018bf5) scroll_sc2_right_pane_g1

0x0bab,	// (0x00015544) bg_popup_sub_pane_cp10

0x4266,	// (0x00018bff) list_choice_list_pane

0x427f,	// (0x00018c18) list_single_choice_list_pane_ParamLimits

0x427f,	// (0x00018c18) list_single_choice_list_pane

0x4297,	// (0x00018c30) list_single_choice_list_pane_g1

0xdb34,	// (0x000224cd) list_single_choice_list_pane_t1_ParamLimits

0xdb34,	// (0x000224cd) list_single_choice_list_pane_t1

0x429f,	// (0x00018c38) choice_list_pane_g1

0x42a7,	// (0x00018c40) choice_list_pane_t1

0xb87d,	// (0x00020216) input_focus_pane_cp11

0xdd02,	// (0x0002269b) title_pane_stacon_g2_ParamLimits

0xdd02,	// (0x0002269b) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0002405d) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002405d) title_pane_stacon_g

0x0825,	// (0x000151be) cursor_press_pane

0xa255,	// (0x0001ebee) popup_fep_hwr_window_ParamLimits

0xa255,	// (0x0001ebee) popup_fep_hwr_window

0x0d1f,	// (0x000156b8) popup_fep_vkb_window_ParamLimits

0x0d1f,	// (0x000156b8) popup_fep_vkb_window

0x42b5,	// (0x00018c4e) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x000244d0) fep_vkb_side_pane_g_ParamLimits

0xeae7,	// (0x00023480) fep_hwr_candidate_pane_ParamLimits

0xeae7,	// (0x00023480) fep_hwr_candidate_pane

0xeb11,	// (0x000234aa) fep_hwr_side_pane_ParamLimits

0xeb11,	// (0x000234aa) fep_hwr_side_pane

0xeb33,	// (0x000234cc) fep_hwr_top_pane_ParamLimits

0xeb33,	// (0x000234cc) fep_hwr_top_pane

0xeb4b,	// (0x000234e4) fep_hwr_write_pane_ParamLimits

0xeb4b,	// (0x000234e4) fep_hwr_write_pane

0xfb37,	// (0x000244d0) fep_vkb_side_pane_g

0x42bd,	// (0x00018c56) fep_hwr_top_pane_g1

0x42cf,	// (0x00018c68) fep_hwr_top_pane_g2

0xeb85,	// (0x0002351e) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x000244ac) fep_hwr_top_pane_g

0xeb9a,	// (0x00023533) fep_hwr_top_text_pane

0xe006,	// (0x0002299f) fep_hwr_top_text_pane_g1

0x4305,	// (0x00018c9e) fep_hwr_top_text_pane_t1

0xec29,	// (0x000235c2) fep_hwr_candidate_pane_g1

0x4550,	// (0x00018ee9) fep_vkb_keypad_pane_g3_ParamLimits

0x4550,	// (0x00018ee9) fep_vkb_keypad_pane_g3

0x457c,	// (0x00018f15) fep_vkb_keypad_pane_g4_ParamLimits

0x457c,	// (0x00018f15) fep_vkb_keypad_pane_g4

0x45f3,	// (0x00018f8c) fep_vkb_bottom_pane_g2_ParamLimits

0x45f3,	// (0x00018f8c) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x000244d7) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x000244d7) fep_vkb_bottom_pane_g

0x425c,	// (0x00018bf5) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x000244e1) cell_vkb_side_pane_g

0x467e,	// (0x00019017) cell_vkb_side_pane_t1

0x468c,	// (0x00019025) cell_vkb_side_pane_t1_copy1

0x425c,	// (0x00018bf5) bg_fep_vkb_candidate_pane_g2

0x47d0,	// (0x00019169) cell_vkb_candidate_pane_ParamLimits

0x4313,	// (0x00018cac) aid_size_cell_vkb_ParamLimits

0x4313,	// (0x00018cac) aid_size_cell_vkb

0x47d0,	// (0x00019169) cell_vkb_candidate_pane

0xec50,	// (0x000235e9) bg_popup_fep_shadow_pane_g1

0xb5b3,	// (0x0001ff4c) fep_vkb_bottom_pane_ParamLimits

0xb5b3,	// (0x0001ff4c) fep_vkb_bottom_pane

0x43e2,	// (0x00018d7b) fep_vkb_candidate_pane_ParamLimits

0x43e2,	// (0x00018d7b) fep_vkb_candidate_pane

0xb5df,	// (0x0001ff78) fep_vkb_keypad_pane_ParamLimits

0xb5df,	// (0x0001ff78) fep_vkb_keypad_pane

0xb606,	// (0x0001ff9f) fep_vkb_side_pane_ParamLimits

0xb606,	// (0x0001ff9f) fep_vkb_side_pane

0xb642,	// (0x0001ffdb) fep_vkb_top_pane_ParamLimits

0xb642,	// (0x0001ffdb) fep_vkb_top_pane

0x44a9,	// (0x00018e42) fep_vkb_top_pane_g1_ParamLimits

0x44a9,	// (0x00018e42) fep_vkb_top_pane_g1

0x44b8,	// (0x00018e51) fep_vkb_top_pane_g2_ParamLimits

0x44b8,	// (0x00018e51) fep_vkb_top_pane_g2

0x44c7,	// (0x00018e60) fep_vkb_top_pane_g3_ParamLimits

0x44c7,	// (0x00018e60) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x000244c7) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x000244c7) fep_vkb_top_pane_g

0x44e5,	// (0x00018e7e) fep_vkb_top_text_pane_ParamLimits

0x44e5,	// (0x00018e7e) fep_vkb_top_text_pane

0xb67e,	// (0x00020017) fep_vkb_side_pane_g1_ParamLimits

0xb67e,	// (0x00020017) fep_vkb_side_pane_g1

0x453f,	// (0x00018ed8) grid_vkb_side_pane_ParamLimits

0x453f,	// (0x00018ed8) grid_vkb_side_pane

0xec58,	// (0x000235f1) bg_popup_fep_shadow_pane_g2

0xec61,	// (0x000235fa) bg_popup_fep_shadow_pane_g3

0xec69,	// (0x00023602) bg_popup_fep_shadow_pane_g4

0xec72,	// (0x0002360b) bg_popup_fep_shadow_pane_g5

0xec7c,	// (0x00023615) bg_popup_fep_shadow_pane_g6

0xec84,	// (0x0002361d) bg_popup_fep_shadow_pane_g7

0xda27,	// (0x000223c0) bg_popup_fep_shadow_pane_g8

0x459e,	// (0x00018f37) grid_vkb_keypad_number_pane_ParamLimits

0x459e,	// (0x00018f37) grid_vkb_keypad_number_pane

0x45b2,	// (0x00018f4b) grid_vkb_keypad_pane_ParamLimits

0x45b2,	// (0x00018f4b) grid_vkb_keypad_pane

0x45d8,	// (0x00018f71) fep_vkb_bottom_pane_g1_ParamLimits

0x45d8,	// (0x00018f71) fep_vkb_bottom_pane_g1

0x4601,	// (0x00018f9a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4601,	// (0x00018f9a) grid_vkb_keypad_bottom_left_pane

0x4616,	// (0x00018faf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4616,	// (0x00018faf) grid_vkb_keypad_bottom_right_pane

0x462b,	// (0x00018fc4) fep_vkb_top_text_pane_g1

0xb6c5,	// (0x0002005e) fep_vkb_top_text_pane_t1

0xb6d7,	// (0x00020070) cell_vkb_side_pane_ParamLimits

0xb6d7,	// (0x00020070) cell_vkb_side_pane

0x425c,	// (0x00018bf5) cell_vkb_side_pane_g1

0x469a,	// (0x00019033) cell_vkb_keypad_pane_ParamLimits

0x469a,	// (0x00019033) cell_vkb_keypad_pane

0x4727,	// (0x000190c0) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x000244f4) bg_popup_fep_shadow_pane_g

0xec96,	// (0x0002362f) cell_hwr_side_pane_g1

0xec96,	// (0x0002362f) cell_hwr_side_pane_g2

0x4731,	// (0x000190ca) cell_vkb_keypad_pane_t1

0xb6ed,	// (0x00020086) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xb6ed,	// (0x00020086) cell_vkb_keypad_bottom_left_pane

0xb702,	// (0x0002009b) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xb702,	// (0x0002009b) cell_vkb_keypad_bottom_right_pane

0x425c,	// (0x00018bf5) cell_vkb_keypad_bottom_left_pane_g1

0x425c,	// (0x00018bf5) cell_vkb_keypad_bottom_right_pane_g1

0x4795,	// (0x0001912e) cell_vkb_keypad_number_pane_ParamLimits

0x4795,	// (0x0001912e) cell_vkb_keypad_number_pane

0x47b4,	// (0x0001914d) cell_vkb_keypad_number_pane_g1

0x47be,	// (0x00019157) cell_vkb_keypad_number_pane_g2

0x47c7,	// (0x00019160) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x000244e6) cell_vkb_keypad_number_pane_g

0x4731,	// (0x000190ca) cell_vkb_keypad_number_pane_t1

0x47f1,	// (0x0001918a) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x00024507) cell_hwr_side_pane_g

0x480a,	// (0x000191a3) cell_hwr_side_pane_t1

0xeca0,	// (0x00023639) cell_hwr_side_pane_t1_copy1

0xecae,	// (0x00023647) cell_hwr_candidate_pane_g1

0xecdd,	// (0x00023676) cell_hwr_candidate_pane_t1

0x425c,	// (0x00018bf5) cell_vkb_candidate_pane_g2

0x484e,	// (0x000191e7) cell_vkb_candidate_pane_t1

0xeaae,	// (0x00023447) bg_popup_fep_shadow_pane_ParamLimits

0xeaae,	// (0x00023447) bg_popup_fep_shadow_pane

0xeb65,	// (0x000234fe) bg_fep_hwr_top_pane_g4

0x42e1,	// (0x00018c7a) bg_hwr_side_pane_g1_ParamLimits

0x42e1,	// (0x00018c7a) bg_hwr_side_pane_g1

0x8ca4,	// (0x0001d63d) cell_hwr_side_pane_ParamLimits

0x8ca4,	// (0x0001d63d) cell_hwr_side_pane

0xebaf,	// (0x00023548) fep_hwr_write_pane_g1_ParamLimits

0xebaf,	// (0x00023548) fep_hwr_write_pane_g1

0xebbc,	// (0x00023555) fep_hwr_write_pane_g2_ParamLimits

0xebbc,	// (0x00023555) fep_hwr_write_pane_g2

0xebc9,	// (0x00023562) fep_hwr_write_pane_g3_ParamLimits

0xebc9,	// (0x00023562) fep_hwr_write_pane_g3

0x8cc4,	// (0x0001d65d) fep_hwr_write_pane_g4_ParamLimits

0x8cc4,	// (0x0001d65d) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x000244b3) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x000244b3) fep_hwr_write_pane_g

0xeb65,	// (0x000234fe) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xeb65,	// (0x000234fe) bg_fep_hwr_candidate_pane_g2

0xebd7,	// (0x00023570) cell_hwr_candidate_pane_ParamLimits

0xebd7,	// (0x00023570) cell_hwr_candidate_pane

0xec29,	// (0x000235c2) fep_hwr_candidate_pane_g1_ParamLimits

0x4341,	// (0x00018cda) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4341,	// (0x00018cda) bg_popup_fep_shadow_pane_cp2

0x44d7,	// (0x00018e70) fep_vkb_top_pane_g4_ParamLimits

0x44d7,	// (0x00018e70) fep_vkb_top_pane_g4

0x451d,	// (0x00018eb6) fep_vkb_side_pane_g2_ParamLimits

0x451d,	// (0x00018eb6) fep_vkb_side_pane_g2

0x99c1,	// (0x0001e35a) list_setting_pane_t4_ParamLimits

0x99c1,	// (0x0001e35a) list_setting_pane_t4

0x9a3d,	// (0x0001e3d6) list_setting_number_pane_t5_ParamLimits

0x9a3d,	// (0x0001e3d6) list_setting_number_pane_t5

0x9d9f,	// (0x0001e738) list_double_heading_pane_cp2_ParamLimits

0x9d9f,	// (0x0001e738) list_double_heading_pane_cp2

0x485c,	// (0x000191f5) list_double_heading_pane_g1_cp2_ParamLimits

0x485c,	// (0x000191f5) list_double_heading_pane_g1_cp2

0x4868,	// (0x00019201) list_double_heading_pane_g2_cp2_ParamLimits

0x4868,	// (0x00019201) list_double_heading_pane_g2_cp2

0x487c,	// (0x00019215) list_double_heading_pane_t1_cp2_ParamLimits

0x487c,	// (0x00019215) list_double_heading_pane_t1_cp2

0x4892,	// (0x0001922b) list_double_heading_pane_t2_cp2_ParamLimits

0x4892,	// (0x0001922b) list_double_heading_pane_t2_cp2

0xb875,	// (0x0002020e) aid_value_unit2

0xd7ca,	// (0x00022163) popup_preview_fixed_window

0xba46,	// (0x000203df) bg_popup_preview_window_pane_cp02

0x48a4,	// (0x0001923d) list_preview_fixed_pane

0x48ea,	// (0x00019283) list_empty_pane_fp_ParamLimits

0x48ea,	// (0x00019283) list_empty_pane_fp

0x48ea,	// (0x00019283) list_single_cale_day_pane_fp_ParamLimits

0x48ea,	// (0x00019283) list_single_cale_day_pane_fp

0x48ea,	// (0x00019283) list_single_graphic_heading_pane_fp_ParamLimits

0x48ea,	// (0x00019283) list_single_graphic_heading_pane_fp

0x48ea,	// (0x00019283) list_single_graphic_pane_fp_ParamLimits

0x48ea,	// (0x00019283) list_single_graphic_pane_fp

0x48ea,	// (0x00019283) list_single_heading_pane_fp_ParamLimits

0x48ea,	// (0x00019283) list_single_heading_pane_fp

0x48ea,	// (0x00019283) list_single_pane_fp_ParamLimits

0x48ea,	// (0x00019283) list_single_pane_fp

0x4903,	// (0x0001929c) list_single_pane_fp_g1_ParamLimits

0x4903,	// (0x0001929c) list_single_pane_fp_g1

0x485c,	// (0x000191f5) list_single_pane_fp_g2_ParamLimits

0x485c,	// (0x000191f5) list_single_pane_fp_g2

0x4868,	// (0x00019201) list_single_pane_fp_g3_ParamLimits

0x4868,	// (0x00019201) list_single_pane_fp_g3

0x490f,	// (0x000192a8) list_single_pane_fp_g4_ParamLimits

0x490f,	// (0x000192a8) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0002451a) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0002451a) list_single_pane_fp_g

0x491b,	// (0x000192b4) list_single_pane_fp_t1_ParamLimits

0x491b,	// (0x000192b4) list_single_pane_fp_t1

0x4932,	// (0x000192cb) list_single_graphic_pane_fp_g1_ParamLimits

0x4932,	// (0x000192cb) list_single_graphic_pane_fp_g1

0x4903,	// (0x0001929c) list_single_graphic_pane_fp_g2_ParamLimits

0x4903,	// (0x0001929c) list_single_graphic_pane_fp_g2

0x485c,	// (0x000191f5) list_single_graphic_pane_fp_g3_ParamLimits

0x485c,	// (0x000191f5) list_single_graphic_pane_fp_g3

0x4868,	// (0x00019201) list_single_graphic_pane_fp_g4_ParamLimits

0x4868,	// (0x00019201) list_single_graphic_pane_fp_g4

0x490f,	// (0x000192a8) list_single_graphic_pane_fp_g5_ParamLimits

0x490f,	// (0x000192a8) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00024523) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00024523) list_single_graphic_pane_fp_g

0x493e,	// (0x000192d7) list_single_graphic_pane_fp_t1_ParamLimits

0x493e,	// (0x000192d7) list_single_graphic_pane_fp_t1

0x4932,	// (0x000192cb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4932,	// (0x000192cb) list_single_graphic_heading_pane_fp_g1

0x4903,	// (0x0001929c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4903,	// (0x0001929c) list_single_graphic_heading_pane_fp_g2

0x485c,	// (0x000191f5) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x485c,	// (0x000191f5) list_single_graphic_heading_pane_fp_g3

0x4868,	// (0x00019201) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4868,	// (0x00019201) list_single_graphic_heading_pane_fp_g4

0x490f,	// (0x000192a8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x490f,	// (0x000192a8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00024523) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00024523) list_single_graphic_heading_pane_fp_g

0x4954,	// (0x000192ed) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4954,	// (0x000192ed) list_single_graphic_heading_pane_fp_t1

0x496a,	// (0x00019303) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x496a,	// (0x00019303) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0002452e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0002452e) list_single_graphic_heading_pane_fp_t

0x497c,	// (0x00019315) list_single_cale_day_pane_fp_g1_ParamLimits

0x497c,	// (0x00019315) list_single_cale_day_pane_fp_g1

0x49b4,	// (0x0001934d) list_single_cale_day_pane_fp_g2_ParamLimits

0x49b4,	// (0x0001934d) list_single_cale_day_pane_fp_g2

0x49c0,	// (0x00019359) list_single_cale_day_pane_fp_g3_ParamLimits

0x49c0,	// (0x00019359) list_single_cale_day_pane_fp_g3

0x49e8,	// (0x00019381) list_single_cale_day_pane_fp_g4_ParamLimits

0x49e8,	// (0x00019381) list_single_cale_day_pane_fp_g4

0x4a0c,	// (0x000193a5) list_single_cale_day_pane_fp_g5_ParamLimits

0x4a0c,	// (0x000193a5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00024533) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00024533) list_single_cale_day_pane_fp_g

0x4a30,	// (0x000193c9) list_single_cale_day_pane_fp_t1_ParamLimits

0x4a30,	// (0x000193c9) list_single_cale_day_pane_fp_t1

0x4a56,	// (0x000193ef) list_single_cale_day_pane_fp_t2_ParamLimits

0x4a56,	// (0x000193ef) list_single_cale_day_pane_fp_t2

0x4a6f,	// (0x00019408) list_single_cale_day_pane_fp_t3_ParamLimits

0x4a6f,	// (0x00019408) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0002453e) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0002453e) list_single_cale_day_pane_fp_t

0x4903,	// (0x0001929c) list_empty_pane_fp_g1_ParamLimits

0x4903,	// (0x0001929c) list_empty_pane_fp_g1

0x4a88,	// (0x00019421) list_empty_pane_fp_t1

0x4a96,	// (0x0001942f) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00024545) list_empty_pane_fp_t

0x4903,	// (0x0001929c) list_single_heading_pane_fp_g1_ParamLimits

0x4903,	// (0x0001929c) list_single_heading_pane_fp_g1

0x485c,	// (0x000191f5) list_single_heading_pane_fp_g2_ParamLimits

0x485c,	// (0x000191f5) list_single_heading_pane_fp_g2

0x4868,	// (0x00019201) list_single_heading_pane_fp_g3_ParamLimits

0x4868,	// (0x00019201) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0002454a) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0002454a) list_single_heading_pane_fp_g

0x4aa4,	// (0x0001943d) list_single_heading_pane_fp_t1_ParamLimits

0x4aa4,	// (0x0001943d) list_single_heading_pane_fp_t1

0x4ab6,	// (0x0001944f) list_single_heading_pane_fp_t2_ParamLimits

0x4ab6,	// (0x0001944f) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00024551) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00024551) list_single_heading_pane_fp_t

0xdb49,	// (0x000224e2) aid_size_cell_fast

0xba29,	// (0x000203c2) soft_indicator_pane_cp1_t1

0xdb86,	// (0x0002251f) cell_app_pane_cp2_ParamLimits

0xdb86,	// (0x0002251f) cell_app_pane_cp2

0xead0,	// (0x00023469) fep_hwr_candidate_drop_down_list_pane

0xec43,	// (0x000235dc) fep_hwr_candidate_pane_g3_ParamLimits

0xec43,	// (0x000235dc) fep_hwr_candidate_pane_g3

0xbecf,	// (0x00020868) fep_hwr_candidate_pane_g4_ParamLimits

0xbecf,	// (0x00020868) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x000244c0) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x000244c0) fep_hwr_candidate_pane_g

0x43d1,	// (0x00018d6a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x43d1,	// (0x00018d6a) fep_vkb_candidate_drop_down_list_pane

0x47f9,	// (0x00019192) fep_vkb_candidate_pane_g3

0x4801,	// (0x0001919a) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x000244ed) fep_vkb_candidate_pane_g

0xecae,	// (0x00023647) cell_hwr_candidate_pane_g1_ParamLimits

0xecbc,	// (0x00023655) cell_hwr_candidate_pane_g3_ParamLimits

0xecbc,	// (0x00023655) cell_hwr_candidate_pane_g3

0x573e,	// (0x0001a0d7) cell_hwr_candidate_pane_g4_ParamLimits

0x573e,	// (0x0001a0d7) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0002450c) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0002450c) cell_hwr_candidate_pane_g

0x4818,	// (0x000191b1) cell_vkb_candidate_pane_g3_ParamLimits

0x4818,	// (0x000191b1) cell_vkb_candidate_pane_g3

0x4833,	// (0x000191cc) cell_vkb_candidate_pane_g4_ParamLimits

0x4833,	// (0x000191cc) cell_vkb_candidate_pane_g4

0x4acc,	// (0x00019465) cell_app_pane_cp2_g1_ParamLimits

0x4acc,	// (0x00019465) cell_app_pane_cp2_g1

0x4aea,	// (0x00019483) cell_app_pane_cp2_g2_ParamLimits

0x4aea,	// (0x00019483) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00024556) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00024556) cell_app_pane_cp2_g

0x4af6,	// (0x0001948f) cell_app_pane_cp2_t1_ParamLimits

0x4af6,	// (0x0001948f) cell_app_pane_cp2_t1

0xd946,	// (0x000222df) grid_highlight_pane_cp1_ParamLimits

0xd946,	// (0x000222df) grid_highlight_pane_cp1

0xecfb,	// (0x00023694) cell_hwr_candidate_pane_cp1_ParamLimits

0xecfb,	// (0x00023694) cell_hwr_candidate_pane_cp1

0xecae,	// (0x00023647) fep_hwr_candidate_drop_down_list_pane_g1

0xed1f,	// (0x000236b8) fep_hwr_candidate_drop_down_list_pane_g2

0xed2c,	// (0x000236c5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0002455b) fep_hwr_candidate_drop_down_list_pane_g

0xed39,	// (0x000236d2) fep_hwr_candidate_drop_down_list_scroll_pane

0xed42,	// (0x000236db) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xed42,	// (0x000236db) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xed4f,	// (0x000236e8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xed4f,	// (0x000236e8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xed5c,	// (0x000236f5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xed5c,	// (0x000236f5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xed69,	// (0x00023702) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xed69,	// (0x00023702) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xed84,	// (0x0002371d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xed84,	// (0x0002371d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xed9f,	// (0x00023738) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xed9f,	// (0x00023738) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xedba,	// (0x00023753) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xedba,	// (0x00023753) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xedd5,	// (0x0002376e) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xedd5,	// (0x0002376e) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00024562) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00024562) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4b08,	// (0x000194a1) cell_vkb_candidate_pane_cp1_ParamLimits

0x4b08,	// (0x000194a1) cell_vkb_candidate_pane_cp1

0x44d7,	// (0x00018e70) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x44d7,	// (0x00018e70) fep_vkb_candidate_drop_down_list_pane_g1

0x4b2e,	// (0x000194c7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4b2e,	// (0x000194c7) fep_vkb_candidate_drop_down_list_pane_g2

0x4b3b,	// (0x000194d4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4b3b,	// (0x000194d4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x00024573) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x00024573) fep_vkb_candidate_drop_down_list_pane_g

0x4b48,	// (0x000194e1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4b48,	// (0x000194e1) fep_vkb_candidate_drop_down_list_scroll_pane

0x4b55,	// (0x000194ee) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4b55,	// (0x000194ee) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4b62,	// (0x000194fb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4b62,	// (0x000194fb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4b6e,	// (0x00019507) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4b6e,	// (0x00019507) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4b7a,	// (0x00019513) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4b7a,	// (0x00019513) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4b9b,	// (0x00019534) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4b9b,	// (0x00019534) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4bbc,	// (0x00019555) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4bbc,	// (0x00019555) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4bdd,	// (0x00019576) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4bdd,	// (0x00019576) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4bfe,	// (0x00019597) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4bfe,	// (0x00019597) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x0002457a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x0002457a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x92c7,	// (0x0001dc60) title_pane_g1_ParamLimits

0x92da,	// (0x0001dc73) title_pane_g2_ParamLimits

0xf54e,	// (0x00023ee7) title_pane_g_ParamLimits

0xdff6,	// (0x0002298f) aid_call2_pane

0xdffe,	// (0x00022997) aid_call_pane

0xe006,	// (0x0002299f) popup_clock_analogue_window_g1

0xe006,	// (0x0002299f) popup_clock_analogue_window_g2

0xe444,	// (0x00022ddd) popup_clock_analogue_window_g3

0xe44d,	// (0x00022de6) popup_clock_analogue_window_g4

0xb887,	// (0x00020220) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0002408c) popup_clock_analogue_window_g

0xe455,	// (0x00022dee) popup_clock_analogue_window_t1

0xe463,	// (0x00022dfc) clock_digital_number_pane_ParamLimits

0xe463,	// (0x00022dfc) clock_digital_number_pane

0xe46f,	// (0x00022e08) clock_digital_number_pane_cp02_ParamLimits

0xe46f,	// (0x00022e08) clock_digital_number_pane_cp02

0xe47b,	// (0x00022e14) clock_digital_number_pane_cp03_ParamLimits

0xe47b,	// (0x00022e14) clock_digital_number_pane_cp03

0xe487,	// (0x00022e20) clock_digital_number_pane_cp04_ParamLimits

0xe487,	// (0x00022e20) clock_digital_number_pane_cp04

0xe493,	// (0x00022e2c) clock_digital_separator_pane_ParamLimits

0xe493,	// (0x00022e2c) clock_digital_separator_pane

0xe49f,	// (0x00022e38) popup_clock_digital_window_t1_ParamLimits

0xe49f,	// (0x00022e38) popup_clock_digital_window_t1

0xb887,	// (0x00020220) clock_digital_number_pane_g1

0xb887,	// (0x00020220) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00024097) clock_digital_number_pane_g

0xb887,	// (0x00020220) clock_digital_separator_pane_g1

0xb887,	// (0x00020220) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00024097) clock_digital_separator_pane_g

0xa8c0,	// (0x0001f259) aid_fill_nsta_ParamLimits

0xa9f8,	// (0x0001f391) indicator_nsta_pane_ParamLimits

0x14cb,	// (0x00015e64) popup_clock_analogue_window

0x14cb,	// (0x00015e64) popup_clock_digital_window

0xe3b6,	// (0x00022d4f) grid_indicator_nsta_pane_ParamLimits

0x3c39,	// (0x000185d2) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00024440) clock_nsta_pane_t

0xe411,	// (0x00022daa) aid_size_max_handle

0x8949,	// (0x0001d2e2) aid_size_min_handle

0x0825,	// (0x000151be) editor_scroll_pane

0x4c19,	// (0x000195b2) ex_editor_pane

0xdb0f,	// (0x000224a8) scroll_pane_cp13

0xbec7,	// (0x00020860) scroll_pane_cp14

0xe035,	// (0x000229ce) scroll_pane_cp36

0x9db2,	// (0x0001e74b) list_single_graphic_hl_pane_cp2_ParamLimits

0x9db2,	// (0x0001e74b) list_single_graphic_hl_pane_cp2

0xb220,	// (0x0001fbb9) list_single_graphic_hl_pane_ParamLimits

0xb220,	// (0x0001fbb9) list_single_graphic_hl_pane

0x4c21,	// (0x000195ba) aid_size_min_hl_cp1

0x4c2a,	// (0x000195c3) list_highlight_pane_cp34_ParamLimits

0x4c2a,	// (0x000195c3) list_highlight_pane_cp34

0x4c3b,	// (0x000195d4) list_single_graphic_hl_pane_g1_ParamLimits

0x4c3b,	// (0x000195d4) list_single_graphic_hl_pane_g1

0xbedc,	// (0x00020875) list_single_graphic_hl_pane_g2_ParamLimits

0xbedc,	// (0x00020875) list_single_graphic_hl_pane_g2

0xbedc,	// (0x00020875) list_single_graphic_hl_pane_g3_ParamLimits

0xbedc,	// (0x00020875) list_single_graphic_hl_pane_g3

0xbee8,	// (0x00020881) list_single_graphic_hl_pane_g4_ParamLimits

0xbee8,	// (0x00020881) list_single_graphic_hl_pane_g4

0x4cae,	// (0x00019647) list_single_graphic_hl_pane_g5_ParamLimits

0x4cae,	// (0x00019647) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x0002458b) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x0002458b) list_single_graphic_hl_pane_g

0xb71d,	// (0x000200b6) list_single_graphic_hl_pane_t1_ParamLimits

0xb71d,	// (0x000200b6) list_single_graphic_hl_pane_t1

0x4c7e,	// (0x00019617) aid_size_min_hl_cp2

0x4c87,	// (0x00019620) list_highlight_pane_cp34_cp2_ParamLimits

0x4c87,	// (0x00019620) list_highlight_pane_cp34_cp2

0x4c3b,	// (0x000195d4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4c3b,	// (0x000195d4) list_single_graphic_hl_pane_g1_cp2

0x4c94,	// (0x0001962d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4c94,	// (0x0001962d) list_single_graphic_hl_pane_g2_cp2

0xb733,	// (0x000200cc) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xb733,	// (0x000200cc) list_single_graphic_hl_pane_g3_cp2

0xbee8,	// (0x00020881) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbee8,	// (0x00020881) list_single_graphic_hl_pane_g4_cp2

0x4cae,	// (0x00019647) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4cae,	// (0x00019647) list_single_graphic_hl_pane_g5_cp2

0x89a0,	// (0x0001d339) control_pane_g4_ParamLimits

0x89a0,	// (0x0001d339) control_pane_g4

0x0bab,	// (0x00015544) bg_popup_sub_pane_cp10_ParamLimits

0x4266,	// (0x00018bff) list_choice_list_pane_ParamLimits

0x4275,	// (0x00018c0e) scroll_pane_cp23

0xba46,	// (0x000203df) bg_popup_preview_window_pane_cp02_ParamLimits

0x48a4,	// (0x0001923d) list_preview_fixed_pane_ParamLimits

0x48ba,	// (0x00019253) list_preview_fixed_pane_cp_ParamLimits

0x48ba,	// (0x00019253) list_preview_fixed_pane_cp

0x48c6,	// (0x0001925f) popup_preview_fixed_window_g1_ParamLimits

0x48c6,	// (0x0001925f) popup_preview_fixed_window_g1

0x48d2,	// (0x0001926b) popup_preview_fixed_window_g2_ParamLimits

0x48d2,	// (0x0001926b) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00024513) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00024513) popup_preview_fixed_window_g

0xdde7,	// (0x00022780) aid_navi_side_left_pane_ParamLimits

0xddfc,	// (0x00022795) aid_navi_side_right_pane_ParamLimits

0xde14,	// (0x000227ad) navi_icon_pane_stacon_ParamLimits

0xe3c4,	// (0x00022d5d) navi_navi_pane_stacon_ParamLimits

0xde14,	// (0x000227ad) navi_text_pane_stacon_ParamLimits

0xb87d,	// (0x00020216) main_text_info_pane

0x4cd8,	// (0x00019671) listscroll_text_info_pane

0x4ce0,	// (0x00019679) list_text_info_pane_ParamLimits

0x4ce0,	// (0x00019679) list_text_info_pane

0x4cef,	// (0x00019688) scroll_pane_cp24_ParamLimits

0x4cef,	// (0x00019688) scroll_pane_cp24

0xb741,	// (0x000200da) list_text_info_pane_t1_ParamLimits

0xb741,	// (0x000200da) list_text_info_pane_t1

0xa1b9,	// (0x0001eb52) popup_fast_swap2_window_ParamLimits

0xa1b9,	// (0x0001eb52) popup_fast_swap2_window

0x4d32,	// (0x000196cb) aid_size_cell_fast2

0xb87d,	// (0x00020216) bg_popup_window_pane_cp17

0x1c37,	// (0x000165d0) heading_pane_cp2

0xbc4c,	// (0x000205e5) listscroll_fast2_pane

0x4d3c,	// (0x000196d5) grid_fast2_pane

0x4d46,	// (0x000196df) listscroll_fast2_pane_g1

0x4d50,	// (0x000196e9) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00024596) listscroll_fast2_pane_g

0xdb0f,	// (0x000224a8) scroll_pane_cp26

0x4d5a,	// (0x000196f3) cell_fast2_pane_ParamLimits

0x4d5a,	// (0x000196f3) cell_fast2_pane

0x4d71,	// (0x0001970a) cell_fast2_pane_g1

0x4d7a,	// (0x00019713) cell_fast2_pane_g2

0x4d83,	// (0x0001971c) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x0002459b) cell_fast2_pane_g

0xbc8e,	// (0x00020627) grid_highlight_pane_cp9

0xbca3,	// (0x0002063c) main_eswt_pane_ParamLimits

0xbca3,	// (0x0002063c) main_eswt_pane

0x4d04,	// (0x0001969d) list_single_text_info_pane

0x4d8b,	// (0x00019724) eswt_ctrl_button_pane

0x4d8b,	// (0x00019724) eswt_ctrl_canvas_pane

0x4d93,	// (0x0001972c) eswt_ctrl_combo_pane

0x4d8b,	// (0x00019724) eswt_ctrl_default_pane

0x4d8b,	// (0x00019724) eswt_ctrl_label_pane

0x4d9b,	// (0x00019734) eswt_ctrl_wait_pane

0x4da3,	// (0x0001973c) eswt_shell_pane

0xb87d,	// (0x00020216) listscroll_eswt_app_pane

0x4dc3,	// (0x0001975c) popup_eswt_tasktip_window_ParamLimits

0x4dc3,	// (0x0001975c) popup_eswt_tasktip_window

0x1848,	// (0x000161e1) bg_popup_window_pane_cp18

0x4dd4,	// (0x0001976d) eswt_control_pane_g1_ParamLimits

0x4dd4,	// (0x0001976d) eswt_control_pane_g1

0x4de1,	// (0x0001977a) eswt_control_pane_g2_ParamLimits

0x4de1,	// (0x0001977a) eswt_control_pane_g2

0x4dee,	// (0x00019787) eswt_control_pane_g3_ParamLimits

0x4dee,	// (0x00019787) eswt_control_pane_g3

0x4dfb,	// (0x00019794) eswt_control_pane_g4_ParamLimits

0x4dfb,	// (0x00019794) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x000245a2) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x000245a2) eswt_control_pane_g

0xd946,	// (0x000222df) bg_button_pane_ParamLimits

0xd946,	// (0x000222df) bg_button_pane

0xbca3,	// (0x0002063c) common_borders_pane_copy2_ParamLimits

0xbca3,	// (0x0002063c) common_borders_pane_copy2

0x4e08,	// (0x000197a1) control_button_pane_g1_ParamLimits

0x4e08,	// (0x000197a1) control_button_pane_g1

0x4e14,	// (0x000197ad) control_button_pane_g2_ParamLimits

0x4e14,	// (0x000197ad) control_button_pane_g2

0x4e20,	// (0x000197b9) control_button_pane_g3_ParamLimits

0x4e20,	// (0x000197b9) control_button_pane_g3

0x0002,

0xfc12,	// (0x000245ab) control_button_pane_g_ParamLimits

0xfc12,	// (0x000245ab) control_button_pane_g

0x4e34,	// (0x000197cd) control_button_pane_t1

0x4e42,	// (0x000197db) control_button_pane_t2

0x0001,

0xfc19,	// (0x000245b2) control_button_pane_t

0x1722,	// (0x000160bb) bg_button_pane_g1

0x1732,	// (0x000160cb) bg_button_pane_g2

0x172a,	// (0x000160c3) bg_button_pane_g3

0x1742,	// (0x000160db) bg_button_pane_g4

0x173a,	// (0x000160d3) bg_button_pane_g5

0x174a,	// (0x000160e3) bg_button_pane_g6

0x1752,	// (0x000160eb) bg_button_pane_g7

0x1762,	// (0x000160fb) bg_button_pane_g8

0x175a,	// (0x000160f3) bg_button_pane_g9

0x0008,

0xf85c,	// (0x000241f5) bg_button_pane_g

0x4221,	// (0x00018bba) common_borders_pane_ParamLimits

0x4221,	// (0x00018bba) common_borders_pane

0x4dd4,	// (0x0001976d) eswt_control_pane_g1_copy1_ParamLimits

0x4dd4,	// (0x0001976d) eswt_control_pane_g1_copy1

0x4de1,	// (0x0001977a) eswt_control_pane_g2_copy1_ParamLimits

0x4de1,	// (0x0001977a) eswt_control_pane_g2_copy1

0x4dee,	// (0x00019787) eswt_control_pane_g3_copy1_ParamLimits

0x4dee,	// (0x00019787) eswt_control_pane_g3_copy1

0x4dfb,	// (0x00019794) eswt_control_pane_g4_copy1_ParamLimits

0x4dfb,	// (0x00019794) eswt_control_pane_g4_copy1

0x425c,	// (0x00018bf5) bg_eswt_ctrl_canvas_pane_g1

0x4221,	// (0x00018bba) common_borders_pane_cp2_ParamLimits

0x4221,	// (0x00018bba) common_borders_pane_cp2

0x4221,	// (0x00018bba) common_borders_pane_cp3_ParamLimits

0x4221,	// (0x00018bba) common_borders_pane_cp3

0x4e50,	// (0x000197e9) separator_horizontal_pane

0x4e58,	// (0x000197f1) separator_vertical_pane

0x4dd4,	// (0x0001976d) eswt_control_pane_g1_copy2_ParamLimits

0x4dd4,	// (0x0001976d) eswt_control_pane_g1_copy2

0x4de1,	// (0x0001977a) eswt_control_pane_g2_copy2_ParamLimits

0x4de1,	// (0x0001977a) eswt_control_pane_g2_copy2

0x4dee,	// (0x00019787) eswt_control_pane_g3_copy2_ParamLimits

0x4dee,	// (0x00019787) eswt_control_pane_g3_copy2

0x4dfb,	// (0x00019794) eswt_control_pane_g4_copy2_ParamLimits

0x4dfb,	// (0x00019794) eswt_control_pane_g4_copy2

0xb87d,	// (0x00020216) common_borders_pane_cp4

0x4e61,	// (0x000197fa) separator_horizontal_pane_g1

0x4e6a,	// (0x00019803) separator_horizontal_pane_g2

0x4e73,	// (0x0001980c) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x000245b7) separator_horizontal_pane_g

0x4dd4,	// (0x0001976d) eswt_control_pane_g1_copy3_ParamLimits

0x4dd4,	// (0x0001976d) eswt_control_pane_g1_copy3

0x4de1,	// (0x0001977a) eswt_control_pane_g2_copy3_ParamLimits

0x4de1,	// (0x0001977a) eswt_control_pane_g2_copy3

0x4dee,	// (0x00019787) eswt_control_pane_g3_copy3_ParamLimits

0x4dee,	// (0x00019787) eswt_control_pane_g3_copy3

0x4dfb,	// (0x00019794) eswt_control_pane_g4_copy3_ParamLimits

0x4dfb,	// (0x00019794) eswt_control_pane_g4_copy3

0xb87d,	// (0x00020216) common_borders_pane_cp5

0x4e7c,	// (0x00019815) separator_vertical_pane_g1

0x4e85,	// (0x0001981e) separator_vertical_pane_g2

0x4e8e,	// (0x00019827) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x000245be) separator_vertical_pane_g

0x4dd4,	// (0x0001976d) eswt_control_pane_g1_copy4_ParamLimits

0x4dd4,	// (0x0001976d) eswt_control_pane_g1_copy4

0x4de1,	// (0x0001977a) eswt_control_pane_g2_copy4_ParamLimits

0x4de1,	// (0x0001977a) eswt_control_pane_g2_copy4

0x4dee,	// (0x00019787) eswt_control_pane_g3_copy4_ParamLimits

0x4dee,	// (0x00019787) eswt_control_pane_g3_copy4

0x4dfb,	// (0x00019794) eswt_control_pane_g4_copy4_ParamLimits

0x4dfb,	// (0x00019794) eswt_control_pane_g4_copy4

0xb763,	// (0x000200fc) eswt_ctrl_combo_button_pane

0xb76b,	// (0x00020104) eswt_ctrl_input_pane

0xb773,	// (0x0002010c) popup_choice_list_window_cp70

0xb77b,	// (0x00020114) eswt_ctrl_input_pane_t1

0xb87d,	// (0x00020216) input_focus_pane_cp70

0x4221,	// (0x00018bba) bg_button_pane_cp70_ParamLimits

0x4221,	// (0x00018bba) bg_button_pane_cp70

0xb789,	// (0x00020122) eswt_ctrl_combo_button_pane_g1

0x4ec5,	// (0x0001985e) wait_bar_pane_cp70

0x1848,	// (0x000161e1) bg_popup_window_pane_cp70_ParamLimits

0x1848,	// (0x000161e1) bg_popup_window_pane_cp70

0x4ecd,	// (0x00019866) popup_eswt_tasktip_window_t1

0x4ee3,	// (0x0001987c) wait_bar_pane_cp71_ParamLimits

0x4ee3,	// (0x0001987c) wait_bar_pane_cp71

0x4eef,	// (0x00019888) grid_eswt_app_pane

0xde95,	// (0x0002282e) scroll_pane_cp70

0xb791,	// (0x0002012a) cell_eswt_app_pane_ParamLimits

0xb791,	// (0x0002012a) cell_eswt_app_pane

0xb7c3,	// (0x0002015c) cell_eswt_app_pane_g1_ParamLimits

0xb7c3,	// (0x0002015c) cell_eswt_app_pane_g1

0xb7f2,	// (0x0002018b) cell_eswt_app_pane_g2_ParamLimits

0xb7f2,	// (0x0002018b) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x000245c5) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x000245c5) cell_eswt_app_pane_g

0xb81b,	// (0x000201b4) cell_eswt_app_pane_t1_ParamLimits

0xb81b,	// (0x000201b4) cell_eswt_app_pane_t1

0x4fb4,	// (0x0001994d) grid_highlight_pane_cp70_ParamLimits

0x4fb4,	// (0x0001994d) grid_highlight_pane_cp70

0xe36e,	// (0x00022d07) set_content_pane_g1

0xa11a,	// (0x0001eab3) status_small_volume_pane

0xedf0,	// (0x00023789) status_small_volume_pane_g1

0xedf8,	// (0x00023791) volume_small2_pane

0xee01,	// (0x0002379a) volume_small2_pane_g1

0xee0a,	// (0x000237a3) volume_small2_pane_g2

0xee13,	// (0x000237ac) volume_small2_pane_g3

0xee1c,	// (0x000237b5) volume_small2_pane_g4

0xee25,	// (0x000237be) volume_small2_pane_g5

0xee2e,	// (0x000237c7) volume_small2_pane_g6

0xee37,	// (0x000237d0) volume_small2_pane_g7

0xee40,	// (0x000237d9) volume_small2_pane_g8

0xee49,	// (0x000237e2) volume_small2_pane_g9

0xee52,	// (0x000237eb) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x000245ca) volume_small2_pane_g

0x462b,	// (0x00018fc4) fep_vkb_top_text_pane_g1_ParamLimits

0xb6c5,	// (0x0002005e) fep_vkb_top_text_pane_t1_ParamLimits

0x48de,	// (0x00019277) popup_preview_fixed_window_g3_ParamLimits

0x48de,	// (0x00019277) popup_preview_fixed_window_g3

0xa853,	// (0x0001f1ec) popup_toolbar_trans_pane

0xb03f,	// (0x0001f9d8) aid_height_set_list_ParamLimits

0x2bf4,	// (0x0001758d) aid_size_parent_ParamLimits

0x0bab,	// (0x00015544) list_highlight_pane_cp2_ParamLimits

0xe36e,	// (0x00022d07) set_content_pane_g1_ParamLimits

0xb234,	// (0x0001fbcd) list_single_image_pane_ParamLimits

0xb234,	// (0x0001fbcd) list_single_image_pane

0xbef4,	// (0x0002088d) aid_size_cell_image_ParamLimits

0xbef4,	// (0x0002088d) aid_size_cell_image

0xbf01,	// (0x0002089a) grid_single_image_pane_ParamLimits

0xbf01,	// (0x0002089a) grid_single_image_pane

0xd971,	// (0x0002230a) list_single_image_pane_g1_ParamLimits

0xd971,	// (0x0002230a) list_single_image_pane_g1

0xd97d,	// (0x00022316) list_single_image_pane_g2_ParamLimits

0xd97d,	// (0x00022316) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x000245df) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x000245df) list_single_image_pane_g

0x4fdb,	// (0x00019974) list_single_image_pane_t1_ParamLimits

0x4fdb,	// (0x00019974) list_single_image_pane_t1

0xbf0f,	// (0x000208a8) cell_image_list_pane_ParamLimits

0xbf0f,	// (0x000208a8) cell_image_list_pane

0xbf23,	// (0x000208bc) cell_image_list_pane_g1

0xbf2c,	// (0x000208c5) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x000245e4) cell_image_list_pane_g

0x5019,	// (0x000199b2) aid_size_cell_tb_trans_pane

0xd946,	// (0x000222df) bg_tb_trans_pane

0x502b,	// (0x000199c4) grid_tb_trans_pane

0x1722,	// (0x000160bb) bg_tb_trans_pane_g1

0x1732,	// (0x000160cb) bg_tb_trans_pane_g2

0x172a,	// (0x000160c3) bg_tb_trans_pane_g3

0x1742,	// (0x000160db) bg_tb_trans_pane_g4

0x173a,	// (0x000160d3) bg_tb_trans_pane_g5

0x1762,	// (0x000160fb) bg_tb_trans_pane_g6

0x175a,	// (0x000160f3) bg_tb_trans_pane_g7

0x174a,	// (0x000160e3) bg_tb_trans_pane_g8

0x1752,	// (0x000160eb) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x000245e9) bg_tb_trans_pane_g

0x503f,	// (0x000199d8) cell_toolbar_trans_pane_ParamLimits

0x503f,	// (0x000199d8) cell_toolbar_trans_pane

0x425c,	// (0x00018bf5) cell_toolbar_trans_pane_g1

0xb46a,	// (0x0001fe03) list_form2_midp_pane_t1

0xb478,	// (0x0001fe11) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00024486) list_form2_midp_pane_t

0x3e46,	// (0x000187df) scroll_pane_cp51_ParamLimits

0x4063,	// (0x000189fc) form2_midp_wait_pane_g1

0x406c,	// (0x00018a05) form2_midp_wait_pane_g2

0x4075,	// (0x00018a0e) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x0002449b) form2_midp_wait_pane_g

0xb8f9,	// (0x00020292) list_highlight_pane_cp21_ParamLimits

0x40b9,	// (0x00018a52) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x40c8,	// (0x00018a61) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2e15,	// (0x000177ae) list_single_2graphic_im_pane_ParamLimits

0x2e15,	// (0x000177ae) list_single_2graphic_im_pane

0xbf35,	// (0x000208ce) list_single_2graphic_im_pane_g1_ParamLimits

0xbf35,	// (0x000208ce) list_single_2graphic_im_pane_g1

0xbf46,	// (0x000208df) list_single_2graphic_im_pane_g2_ParamLimits

0xbf46,	// (0x000208df) list_single_2graphic_im_pane_g2

0xbf52,	// (0x000208eb) list_single_2graphic_im_pane_g3_ParamLimits

0xbf52,	// (0x000208eb) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x000245fc) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x000245fc) list_single_2graphic_im_pane_g

0xbf66,	// (0x000208ff) list_single_2graphic_im_pane_t1_ParamLimits

0xbf66,	// (0x000208ff) list_single_2graphic_im_pane_t1

0x48ea,	// (0x00019283) list_single_graphic_2heading_pane_fp_ParamLimits

0x48ea,	// (0x00019283) list_single_graphic_2heading_pane_fp

0x4932,	// (0x000192cb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4932,	// (0x000192cb) list_single_graphic_2heading_pane_fp_g1

0x4903,	// (0x0001929c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4903,	// (0x0001929c) list_single_graphic_2heading_pane_fp_g2

0x485c,	// (0x000191f5) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x485c,	// (0x000191f5) list_single_graphic_2heading_pane_fp_g3

0x4868,	// (0x00019201) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4868,	// (0x00019201) list_single_graphic_2heading_pane_fp_g4

0x490f,	// (0x000192a8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x490f,	// (0x000192a8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00024523) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00024523) list_single_graphic_2heading_pane_fp_g

0x50d3,	// (0x00019a6c) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x50d3,	// (0x00019a6c) list_single_graphic_2heading_pane_fp_t1

0x496a,	// (0x00019303) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x496a,	// (0x00019303) list_single_graphic_2heading_pane_fp_t2

0x50e9,	// (0x00019a82) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x50e9,	// (0x00019a82) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x00024605) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x00024605) list_single_graphic_2heading_pane_fp_t

0x42ed,	// (0x00018c86) fep_hwr_write_pane_g5_ParamLimits

0x42ed,	// (0x00018c86) fep_hwr_write_pane_g5

0x42f9,	// (0x00018c92) fep_hwr_write_pane_g6_ParamLimits

0x42f9,	// (0x00018c92) fep_hwr_write_pane_g6

0x4da3,	// (0x0001973c) eswt_shell_pane_ParamLimits

0x1848,	// (0x000161e1) bg_popup_window_pane_cp18_ParamLimits

0x2b12,	// (0x000174ab) heading_pane_cp70

0x4ecd,	// (0x00019866) popup_eswt_tasktip_window_t1_ParamLimits

0xa91d,	// (0x0001f2b6) aid_touch_tab_arrow_left

0xa933,	// (0x0001f2cc) aid_touch_tab_arrow_right

0xb89b,	// (0x00020234) title_pane_g3_ParamLimits

0xb89b,	// (0x00020234) title_pane_g3

0xd8a0,	// (0x00022239) set_value_pane_g1

0xa853,	// (0x0001f1ec) popup_toolbar_trans_pane_ParamLimits

0x5019,	// (0x000199b2) aid_size_cell_tb_trans_pane_ParamLimits

0xd946,	// (0x000222df) bg_tb_trans_pane_ParamLimits

0x502b,	// (0x000199c4) grid_tb_trans_pane_ParamLimits

0xba46,	// (0x000203df) cont_note_pane_ParamLimits

0xba46,	// (0x000203df) cont_note_pane

0xbca3,	// (0x0002063c) cont_snote2_single_text_pane_ParamLimits

0xbca3,	// (0x0002063c) cont_snote2_single_text_pane

0xbca3,	// (0x0002063c) cont_snote2_single_graphic_pane_ParamLimits

0xbca3,	// (0x0002063c) cont_snote2_single_graphic_pane

0x1e53,	// (0x000167ec) cont_note_wait_pane_ParamLimits

0x1e53,	// (0x000167ec) cont_note_wait_pane

0x1e53,	// (0x000167ec) cont_note_image_pane_ParamLimits

0x1e53,	// (0x000167ec) cont_note_image_pane

0x50ff,	// (0x00019a98) popup_note2_window_g1_ParamLimits

0x50ff,	// (0x00019a98) popup_note2_window_g1

0x5130,	// (0x00019ac9) popup_note2_window_t1_ParamLimits

0x5130,	// (0x00019ac9) popup_note2_window_t1

0x5175,	// (0x00019b0e) popup_note2_window_t2_ParamLimits

0x5175,	// (0x00019b0e) popup_note2_window_t2

0x51ba,	// (0x00019b53) popup_note2_window_t3_ParamLimits

0x51ba,	// (0x00019b53) popup_note2_window_t3

0x51ff,	// (0x00019b98) popup_note2_window_t4_ParamLimits

0x51ff,	// (0x00019b98) popup_note2_window_t4

0xbaca,	// (0x00020463) popup_note2_window_t5_ParamLimits

0xbaca,	// (0x00020463) popup_note2_window_t5

0x0004,

0xfc78,	// (0x00024611) popup_note2_window_t_ParamLimits

0xfc78,	// (0x00024611) popup_note2_window_t

0x522e,	// (0x00019bc7) popup_note2_image_window_g1_ParamLimits

0x522e,	// (0x00019bc7) popup_note2_image_window_g1

0x523a,	// (0x00019bd3) popup_note2_image_window_g2_ParamLimits

0x523a,	// (0x00019bd3) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x0002461c) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x0002461c) popup_note2_image_window_g

0x524c,	// (0x00019be5) popup_note2_image_window_t1_ParamLimits

0x524c,	// (0x00019be5) popup_note2_image_window_t1

0x5264,	// (0x00019bfd) popup_note2_image_window_t2_ParamLimits

0x5264,	// (0x00019bfd) popup_note2_image_window_t2

0x527c,	// (0x00019c15) popup_note2_image_window_t3_ParamLimits

0x527c,	// (0x00019c15) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x00024621) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x00024621) popup_note2_image_window_t

0x1e61,	// (0x000167fa) popup_note2_wait_window_g1_ParamLimits

0x1e61,	// (0x000167fa) popup_note2_wait_window_g1

0x5298,	// (0x00019c31) popup_note2_wait_window_g2_ParamLimits

0x5298,	// (0x00019c31) popup_note2_wait_window_g2

0x1e79,	// (0x00016812) popup_note2_wait_window_g3_ParamLimits

0x1e79,	// (0x00016812) popup_note2_wait_window_g3

0x0002,

0xfc8f,	// (0x00024628) popup_note2_wait_window_g_ParamLimits

0xfc8f,	// (0x00024628) popup_note2_wait_window_g

0x52a4,	// (0x00019c3d) popup_note2_wait_window_t1_ParamLimits

0x52a4,	// (0x00019c3d) popup_note2_wait_window_t1

0x52c2,	// (0x00019c5b) popup_note2_wait_window_t2_ParamLimits

0x52c2,	// (0x00019c5b) popup_note2_wait_window_t2

0x52e0,	// (0x00019c79) popup_note2_wait_window_t3_ParamLimits

0x52e0,	// (0x00019c79) popup_note2_wait_window_t3

0x52f2,	// (0x00019c8b) popup_note2_wait_window_t4_ParamLimits

0x52f2,	// (0x00019c8b) popup_note2_wait_window_t4

0x0003,

0xfc96,	// (0x0002462f) popup_note2_wait_window_t_ParamLimits

0xfc96,	// (0x0002462f) popup_note2_wait_window_t

0x5304,	// (0x00019c9d) wait_bar2_pane_ParamLimits

0x5304,	// (0x00019c9d) wait_bar2_pane

0x531c,	// (0x00019cb5) popup_snote2_single_text_window_g1_ParamLimits

0x531c,	// (0x00019cb5) popup_snote2_single_text_window_g1

0x5344,	// (0x00019cdd) popup_snote2_single_text_window_t1_ParamLimits

0x5344,	// (0x00019cdd) popup_snote2_single_text_window_t1

0x5390,	// (0x00019d29) popup_snote2_single_text_window_t2_ParamLimits

0x5390,	// (0x00019d29) popup_snote2_single_text_window_t2

0x53dc,	// (0x00019d75) popup_snote2_single_text_window_t3_ParamLimits

0x53dc,	// (0x00019d75) popup_snote2_single_text_window_t3

0x541d,	// (0x00019db6) popup_snote2_single_text_window_t4_ParamLimits

0x541d,	// (0x00019db6) popup_snote2_single_text_window_t4

0x5453,	// (0x00019dec) popup_snote2_single_text_window_t5_ParamLimits

0x5453,	// (0x00019dec) popup_snote2_single_text_window_t5

0x0004,

0xfc9f,	// (0x00024638) popup_snote2_single_text_window_t_ParamLimits

0xfc9f,	// (0x00024638) popup_snote2_single_text_window_t

0x547e,	// (0x00019e17) popup_snote2_single_graphic_window_g1_ParamLimits

0x547e,	// (0x00019e17) popup_snote2_single_graphic_window_g1

0x54a6,	// (0x00019e3f) popup_snote2_single_graphic_window_g2_ParamLimits

0x54a6,	// (0x00019e3f) popup_snote2_single_graphic_window_g2

0x0001,

0xfcaa,	// (0x00024643) popup_snote2_single_graphic_window_g_ParamLimits

0xfcaa,	// (0x00024643) popup_snote2_single_graphic_window_g

0x54ce,	// (0x00019e67) popup_snote2_single_graphic_window_t1_ParamLimits

0x54ce,	// (0x00019e67) popup_snote2_single_graphic_window_t1

0x551a,	// (0x00019eb3) popup_snote2_single_graphic_window_t2_ParamLimits

0x551a,	// (0x00019eb3) popup_snote2_single_graphic_window_t2

0x53dc,	// (0x00019d75) popup_snote2_single_graphic_window_t3_ParamLimits

0x53dc,	// (0x00019d75) popup_snote2_single_graphic_window_t3

0x541d,	// (0x00019db6) popup_snote2_single_graphic_window_t4_ParamLimits

0x541d,	// (0x00019db6) popup_snote2_single_graphic_window_t4

0x5453,	// (0x00019dec) popup_snote2_single_graphic_window_t5_ParamLimits

0x5453,	// (0x00019dec) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaf,	// (0x00024648) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaf,	// (0x00024648) popup_snote2_single_graphic_window_t

0x3cf6,	// (0x0001868f) clock_nsta_pane_cp2_t1

0x3cf6,	// (0x0001868f) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x0002445c) clock_nsta_pane_cp2_t

0xd965,	// (0x000222fe) form_field_data_wide_pane_g1_ParamLimits

0xd971,	// (0x0002230a) form_field_data_wide_pane_g2_ParamLimits

0xd971,	// (0x0002230a) form_field_data_wide_pane_g2

0xd97d,	// (0x00022316) form_field_data_wide_pane_g3_ParamLimits

0xd97d,	// (0x00022316) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0002400f) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0002400f) form_field_data_wide_pane_g

0xb376,	// (0x0001fd0f) grid_touch_3_pane_ParamLimits

0xb376,	// (0x0001fd0f) grid_touch_3_pane

0xbf97,	// (0x00020930) cell_touch_3_pane_ParamLimits

0xbf97,	// (0x00020930) cell_touch_3_pane

0x425c,	// (0x00018bf5) cell_touch_3_pane_g1

0x425c,	// (0x00018bf5) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x000244e1) cell_touch_3_pane_g

0xbafc,	// (0x00020495) cont_query_data_pane

0xbb04,	// (0x0002049d) cont_query_data_pane_cp1

0x5599,	// (0x00019f32) button_value_adjust_pane_cp7

0x55a1,	// (0x00019f3a) query_popup_pane_cp3

0xe066,	// (0x000229ff) bg_popup_sub_pane_cp22_ParamLimits

0xe4be,	// (0x00022e57) navi_navi_volume_pane_cp2

0xe4d9,	// (0x00022e72) popup_side_volume_key_window_g2

0xe4e8,	// (0x00022e81) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x000240a5) popup_side_volume_key_window_g

0xe505,	// (0x00022e9e) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x000240ac) popup_side_volume_key_window_t

0xe271,	// (0x00022c0a) popup_side_volume_key_window_ParamLimits

0x97b0,	// (0x0001e149) list_double_graphic_pane_g4_ParamLimits

0x97b0,	// (0x0001e149) list_double_graphic_pane_g4

0xb20b,	// (0x0001fba4) list_single_2heading_msg_pane_ParamLimits

0xb20b,	// (0x0001fba4) list_single_2heading_msg_pane

0xbfe1,	// (0x0002097a) list_single_2heading_msg_pane_g1_ParamLimits

0xbfe1,	// (0x0002097a) list_single_2heading_msg_pane_g1

0xbfed,	// (0x00020986) list_single_2heading_msg_pane_g2_ParamLimits

0xbfed,	// (0x00020986) list_single_2heading_msg_pane_g2

0xc000,	// (0x00020999) list_single_2heading_msg_pane_g3_ParamLimits

0xc000,	// (0x00020999) list_single_2heading_msg_pane_g3

0xc00c,	// (0x000209a5) list_single_2heading_msg_pane_g4_ParamLimits

0xc00c,	// (0x000209a5) list_single_2heading_msg_pane_g4

0x0003,

0xfcba,	// (0x00024653) list_single_2heading_msg_pane_g_ParamLimits

0xfcba,	// (0x00024653) list_single_2heading_msg_pane_g

0xc024,	// (0x000209bd) list_single_2heading_msg_pane_t1_ParamLimits

0xc024,	// (0x000209bd) list_single_2heading_msg_pane_t1

0xc04c,	// (0x000209e5) list_single_2heading_msg_pane_t2_ParamLimits

0xc04c,	// (0x000209e5) list_single_2heading_msg_pane_t2

0xc0b7,	// (0x00020a50) list_single_2heading_msg_pane_t3_ParamLimits

0xc0b7,	// (0x00020a50) list_single_2heading_msg_pane_t3

0x5692,	// (0x0001a02b) list_single_2heading_msg_pane_t4_ParamLimits

0x5692,	// (0x0001a02b) list_single_2heading_msg_pane_t4

0x0003,

0xfcc3,	// (0x0002465c) list_single_2heading_msg_pane_t_ParamLimits

0xfcc3,	// (0x0002465c) list_single_2heading_msg_pane_t

0xb8a7,	// (0x00020240) title_pane_g4_ParamLimits

0xb8a7,	// (0x00020240) title_pane_g4

0xdd0f,	// (0x000226a8) title_pane_stacon_g3_ParamLimits

0xdd0f,	// (0x000226a8) title_pane_stacon_g3

0x5096,	// (0x00019a2f) list_single_2graphic_im_pane_g4_ParamLimits

0x5096,	// (0x00019a2f) list_single_2graphic_im_pane_g4

0x28c3,	// (0x0001725c) popup_side_volume_key_window_cp

0x31ce,	// (0x00017b67) main_idle_act2_pane_t1

0xe7b5,	// (0x0002314e) toolbar_button_pane_g10

0x9667,	// (0x0001e000) popup_toolbar_window_cp1

0x3ce7,	// (0x00018680) clock_nsta_pane_cp_t1

0x3ce7,	// (0x00018680) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x00024457) clock_nsta_pane_cp_t

0xe4be,	// (0x00022e57) navi_navi_volume_pane_cp2_ParamLimits

0xe4cd,	// (0x00022e66) popup_side_volume_key_window_g1_ParamLimits

0xe4d9,	// (0x00022e72) popup_side_volume_key_window_g2_ParamLimits

0xe4e8,	// (0x00022e81) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x000240a5) popup_side_volume_key_window_g_ParamLimits

0xeabc,	// (0x00023455) fep_hwr_aid_pane

0xeb65,	// (0x000234fe) bg_fep_hwr_top_pane_g4_ParamLimits

0x42bd,	// (0x00018c56) fep_hwr_top_pane_g1_ParamLimits

0x42cf,	// (0x00018c68) fep_hwr_top_pane_g2_ParamLimits

0xeb85,	// (0x0002351e) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x000244ac) fep_hwr_top_pane_g_ParamLimits

0xeb9a,	// (0x00023533) fep_hwr_top_text_pane_ParamLimits

0x2678,	// (0x00017011) aid_touch_tab_arrow_arrow_2

0x2681,	// (0x0001701a) aid_touch_tab_arrow_left_2

0xead0,	// (0x00023469) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xeb07,	// (0x000234a0) fep_hwr_prediction_pane

0x4425,	// (0x00018dbe) fep_vkb_prediction_pane

0xb6a5,	// (0x0002003e) fep_vkb_side_pane_g3_ParamLimits

0xb6a5,	// (0x0002003e) fep_vkb_side_pane_g3

0xecae,	// (0x00023647) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xed1f,	// (0x000236b8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xed2c,	// (0x000236c5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0002455b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xee5b,	// (0x000237f4) fep_hwr_prediction_pane_g1

0xee65,	// (0x000237fe) fep_hwr_prediction_pane_g2

0xee6d,	// (0x00023806) fep_hwr_prediction_pane_g3

0xee75,	// (0x0002380e) fep_hwr_prediction_pane_g4

0x0003,

0xfccc,	// (0x00024665) fep_hwr_prediction_pane_g

0x56b7,	// (0x0001a050) fep_vkb_prediction_pane_g1

0x56c1,	// (0x0001a05a) fep_vkb_prediction_pane_g2

0x56c9,	// (0x0001a062) fep_vkb_prediction_pane_g3

0x56d1,	// (0x0001a06a) fep_vkb_prediction_pane_g4

0x0003,

0xfcd5,	// (0x0002466e) fep_vkb_prediction_pane_g

0xe8eb,	// (0x00023284) slider_set_pane_g3

0xe8ff,	// (0x00023298) slider_set_pane_g4

0xe917,	// (0x000232b0) slider_set_pane_g5

0xe8eb,	// (0x00023284) slider_set_pane_g6

0xe92d,	// (0x000232c6) slider_set_pane_g7

0x2d79,	// (0x00017712) slider_form_pane_g3

0x2d82,	// (0x0001771b) slider_form_pane_g4

0x2d8a,	// (0x00017723) slider_form_pane_g5

0x2d79,	// (0x00017712) slider_form_pane_g6

0xb1ae,	// (0x0001fb47) slider_form_pane_g7

0x34d1,	// (0x00017e6a) slider_set_pane_vc_g3

0x34da,	// (0x00017e73) slider_set_pane_vc_g4

0x34e3,	// (0x00017e7c) slider_set_pane_vc_g5

0x34d1,	// (0x00017e6a) slider_set_pane_vc_g6

0x34ec,	// (0x00017e85) slider_set_pane_vc_g7

0x399a,	// (0x00018333) slider_form_pane_vc_g1

0x39a3,	// (0x0001833c) slider_form_pane_vc_g2

0x39ac,	// (0x00018345) slider_form_pane_vc_g3

0x399a,	// (0x00018333) slider_form_pane_vc_g4

0x39b5,	// (0x0001834e) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00024429) slider_form_pane_vc_g

0xb87d,	// (0x00020216) main_idle_act3_pane

0x56d9,	// (0x0001a072) ai3_links_pane

0xc125,	// (0x00020abe) popup_ai3_data_window_ParamLimits

0xc125,	// (0x00020abe) popup_ai3_data_window

0xb87d,	// (0x00020216) grid_ai3_links_pane

0xc143,	// (0x00020adc) cell_ai3_links_pane_ParamLimits

0xc143,	// (0x00020adc) cell_ai3_links_pane

0x571a,	// (0x0001a0b3) bg_popup_sub_pane_cp11

0x5727,	// (0x0001a0c0) cell_ai3_links_pane_g1

0xb87d,	// (0x00020216) bg_popup_sub_pane_cp12

0x576d,	// (0x0001a106) heading_ai3_data_pane

0x5775,	// (0x0001a10e) list_ai3_gene_pane

0x5781,	// (0x0001a11a) popup_ai3_data_window_g1

0x5789,	// (0x0001a122) heading_ai3_data_pane_g1

0x5791,	// (0x0001a12a) heading_ai3_data_pane_t1

0x579f,	// (0x0001a138) list_double_ai3_gene_pane_ParamLimits

0x579f,	// (0x0001a138) list_double_ai3_gene_pane

0x57ac,	// (0x0001a145) list_single_ai3_gene_pane_ParamLimits

0x57ac,	// (0x0001a145) list_single_ai3_gene_pane

0x4221,	// (0x00018bba) list_highlight_pane_cp7_ParamLimits

0x4221,	// (0x00018bba) list_highlight_pane_cp7

0x57b9,	// (0x0001a152) list_single_a13_gene_pane_t1_ParamLimits

0x57b9,	// (0x0001a152) list_single_a13_gene_pane_t1

0x57d0,	// (0x0001a169) list_single_ai3_gene_pane_g1

0x57d9,	// (0x0001a172) list_single_ai3_gene_pane_g2

0x0001,

0xfcde,	// (0x00024677) list_single_ai3_gene_pane_g

0x57e1,	// (0x0001a17a) list_double_ai3_gene_pane_g1_ParamLimits

0x57e1,	// (0x0001a17a) list_double_ai3_gene_pane_g1

0x57ed,	// (0x0001a186) list_double_ai3_gene_pane_t1_ParamLimits

0x57ed,	// (0x0001a186) list_double_ai3_gene_pane_t1

0x5809,	// (0x0001a1a2) list_double_ai3_gene_pane_t2_ParamLimits

0x5809,	// (0x0001a1a2) list_double_ai3_gene_pane_t2

0x581e,	// (0x0001a1b7) list_double_ai3_gene_pane_t3_ParamLimits

0x581e,	// (0x0001a1b7) list_double_ai3_gene_pane_t3

0x0002,

0xfce3,	// (0x0002467c) list_double_ai3_gene_pane_t_ParamLimits

0xfce3,	// (0x0002467c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x55b2,	// (0x00019f4b) aid_size_min_col_2

0xbfcb,	// (0x00020964) aid_size_min_msg_ParamLimits

0xbfcb,	// (0x00020964) aid_size_min_msg

0xb6b9,	// (0x00020052) fep_vkb_top_text_pane_g2_ParamLimits

0xb6b9,	// (0x00020052) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x000244dc) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x000244dc) fep_vkb_top_text_pane_g

0xb87d,	// (0x00020216) main_hc_apps_shell_pane

0x583b,	// (0x0001a1d4) grid_hc_apps_pane_ParamLimits

0x583b,	// (0x0001a1d4) grid_hc_apps_pane

0x584a,	// (0x0001a1e3) list_hc_apps_pane

0x5852,	// (0x0001a1eb) scroll_pane_cp37_ParamLimits

0x5852,	// (0x0001a1eb) scroll_pane_cp37

0xc15d,	// (0x00020af6) cell_hc_apps_pane_ParamLimits

0xc15d,	// (0x00020af6) cell_hc_apps_pane

0xc227,	// (0x00020bc0) cell_hc_apps_pane_g1_ParamLimits

0xc227,	// (0x00020bc0) cell_hc_apps_pane_g1

0x5947,	// (0x0001a2e0) cell_hc_apps_pane_g2_ParamLimits

0x5947,	// (0x0001a2e0) cell_hc_apps_pane_g2

0x5963,	// (0x0001a2fc) cell_hc_apps_pane_g3_ParamLimits

0x5963,	// (0x0001a2fc) cell_hc_apps_pane_g3

0x0002,

0xfcea,	// (0x00024683) cell_hc_apps_pane_g_ParamLimits

0xfcea,	// (0x00024683) cell_hc_apps_pane_g

0xc254,	// (0x00020bed) cell_hc_apps_pane_t1_ParamLimits

0xc254,	// (0x00020bed) cell_hc_apps_pane_t1

0xba46,	// (0x000203df) grid_highlight_pane_cp10_ParamLimits

0xba46,	// (0x000203df) grid_highlight_pane_cp10

0xc294,	// (0x00020c2d) list_single_hc_apps_pane_ParamLimits

0xc294,	// (0x00020c2d) list_single_hc_apps_pane

0xc2ce,	// (0x00020c67) list_single_hc_apps_pane_g1

0xc2e7,	// (0x00020c80) list_single_hc_apps_pane_g2

0x0001,

0xfcf1,	// (0x0002468a) list_single_hc_apps_pane_g

0xc300,	// (0x00020c99) list_single_hc_apps_pane_g2_copy1

0xc31c,	// (0x00020cb5) list_single_hc_apps_pane_t1

0xb8f9,	// (0x00020292) bg_set_opt_pane_cp_ParamLimits

0xd7de,	// (0x00022177) setting_slider_pane_t1_ParamLimits

0xd7f7,	// (0x00022190) setting_slider_pane_t2_ParamLimits

0xd811,	// (0x000221aa) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00023ef7) setting_slider_pane_t_ParamLimits

0xd829,	// (0x000221c2) slider_set_pane_ParamLimits

0xe70a,	// (0x000230a3) control_pane_g5_ParamLimits

0xe70a,	// (0x000230a3) control_pane_g5

0x2ba6,	// (0x0001753f) slider_set_pane_g1_ParamLimits

0xe8df,	// (0x00023278) slider_set_pane_g2_ParamLimits

0xe8eb,	// (0x00023284) slider_set_pane_g3_ParamLimits

0xe8ff,	// (0x00023298) slider_set_pane_g4_ParamLimits

0xe917,	// (0x000232b0) slider_set_pane_g5_ParamLimits

0xe8eb,	// (0x00023284) slider_set_pane_g6_ParamLimits

0xe92d,	// (0x000232c6) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x000242f3) slider_set_pane_g_ParamLimits

0xe319,	// (0x00022cb2) navi_icon_text_pane_ParamLimits

0xa8e4,	// (0x0001f27d) aid_fill_nsta_2_ParamLimits

0xa91d,	// (0x0001f2b6) aid_touch_tab_arrow_left_ParamLimits

0xa933,	// (0x0001f2cc) aid_touch_tab_arrow_right_ParamLimits

0xa9ce,	// (0x0001f367) clock_nsta_pane_ParamLimits

0xaeda,	// (0x0001f873) navi_icon_pane_g1_ParamLimits

0xaee6,	// (0x0001f87f) navi_text_pane_t1_ParamLimits

0xb44c,	// (0x0001fde5) navi_icon_text_pane_g1_ParamLimits

0xb458,	// (0x0001fdf1) navi_icon_text_pane_t1_ParamLimits

0xc2ce,	// (0x00020c67) list_single_hc_apps_pane_g1_ParamLimits

0xc2e7,	// (0x00020c80) list_single_hc_apps_pane_g2_ParamLimits

0xfcf1,	// (0x0002468a) list_single_hc_apps_pane_g_ParamLimits

0xc300,	// (0x00020c99) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc31c,	// (0x00020cb5) list_single_hc_apps_pane_t1_ParamLimits

0x886f,	// (0x0001d208) popup_toolbar2_fixed_window_ParamLimits

0x886f,	// (0x0001d208) popup_toolbar2_fixed_window

0xa849,	// (0x0001f1e2) popup_toolbar2_float_window

0xb87d,	// (0x00020216) bg_popup_sub_pane_cp27

0x5a80,	// (0x0001a419) grid_toolbar2_float_pane

0xb87d,	// (0x00020216) bg_popup_sub_pane_cp26

0x5a80,	// (0x0001a419) grid_toolbar2_fixed_pane

0xc34a,	// (0x00020ce3) cell_toolbar2_fixed_pane_ParamLimits

0xc34a,	// (0x00020ce3) cell_toolbar2_fixed_pane

0xc367,	// (0x00020d00) cell_toolbar2_fixed_pane_g1

0x5aa1,	// (0x0001a43a) toolbar2_fixed_button_pane

0x1722,	// (0x000160bb) toolbar2_fixed_button_pane_g1

0x1732,	// (0x000160cb) toolbar2_fixed_button_pane_g2

0x172a,	// (0x000160c3) toolbar2_fixed_button_pane_g3

0x1742,	// (0x000160db) toolbar2_fixed_button_pane_g4

0x173a,	// (0x000160d3) toolbar2_fixed_button_pane_g5

0x174a,	// (0x000160e3) toolbar2_fixed_button_pane_g6

0x1752,	// (0x000160eb) toolbar2_fixed_button_pane_g7

0x1762,	// (0x000160fb) toolbar2_fixed_button_pane_g8

0x175a,	// (0x000160f3) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x000241f5) toolbar2_fixed_button_pane_g

0x5aa9,	// (0x0001a442) cell_toolbar2_float_pane_ParamLimits

0x5aa9,	// (0x0001a442) cell_toolbar2_float_pane

0x5aba,	// (0x0001a453) cell_toolbar2_float_pane_g1

0x5aa1,	// (0x0001a43a) toolbar2_fixed_button_pane_cp

0xb5a1,	// (0x0001ff3a) fep_vkb_accented_list_pane_ParamLimits

0xb5a1,	// (0x0001ff3a) fep_vkb_accented_list_pane

0xec8e,	// (0x00023627) bg_popup_fep_shadow_pane_g9

0x0825,	// (0x000151be) bg_popup_fep_shadow_pane_cp3

0xdaf6,	// (0x0002248f) list_accented_list_pane

0x5ac3,	// (0x0001a45c) list_single_accented_list_pane_ParamLimits

0x5ac3,	// (0x0001a45c) list_single_accented_list_pane

0x0825,	// (0x000151be) list_highlight_pane_cp10

0x5ad4,	// (0x0001a46d) list_single_accented_list_pane_t1

0xa765,	// (0x0001f0fe) popup_slider_window_ParamLimits

0xa765,	// (0x0001f0fe) popup_slider_window

0x55a9,	// (0x00019f42) aid_indentation_list_msg

0xc472,	// (0x00020e0b) bg_popup_window_pane_cp19

0x5c0e,	// (0x0001a5a7) popup_slider_window_g1

0x5c2a,	// (0x0001a5c3) popup_slider_window_g2

0x5c46,	// (0x0001a5df) popup_slider_window_g3

0x0005,

0xfcf6,	// (0x0002468f) popup_slider_window_g

0x5ca2,	// (0x0001a63b) popup_slider_window_t1

0x5d16,	// (0x0001a6af) small_volume_slider_vertical_pane

0x425c,	// (0x00018bf5) small_volume_slider_vertical_pane_g1

0x425c,	// (0x00018bf5) small_volume_slider_vertical_pane_g2

0x5d32,	// (0x0001a6cb) small_volume_slider_vertical_pane_g3

0x0002,

0xfd08,	// (0x000246a1) small_volume_slider_vertical_pane_g

0x87d9,	// (0x0001d172) area_side_right_pane_ParamLimits

0x87d9,	// (0x0001d172) area_side_right_pane

0x8cd9,	// (0x0001d672) aid_size_side_button_ParamLimits

0x8cd9,	// (0x0001d672) aid_size_side_button

0x8cf2,	// (0x0001d68b) grid_sctrl_middle_pane_ParamLimits

0x8cf2,	// (0x0001d68b) grid_sctrl_middle_pane

0xee86,	// (0x0002381f) sctrl_sk_bottom_pane

0xee97,	// (0x00023830) sctrl_sk_top_pane

0xeea9,	// (0x00023842) aid_touch_sctrl_top

0xeeb6,	// (0x0002384f) bg_sctrl_sk_pane_ParamLimits

0xeeb6,	// (0x0002384f) bg_sctrl_sk_pane

0xeec4,	// (0x0002385d) sctrl_sk_top_pane_g1

0xeed1,	// (0x0002386a) sctrl_sk_top_pane_t1

0xeea9,	// (0x00023842) aid_touch_sctrl_bottom

0xeeb6,	// (0x0002384f) bg_sctrl_sk_pane_cp_ParamLimits

0xeeb6,	// (0x0002384f) bg_sctrl_sk_pane_cp

0xeeec,	// (0x00023885) sctrl_sk_bottom_pane_g1

0xeed1,	// (0x0002386a) sctrl_sk_bottom_pane_t1

0x8d0c,	// (0x0001d6a5) cell_sctrl_middle_pane_ParamLimits

0x8d0c,	// (0x0001d6a5) cell_sctrl_middle_pane

0x8d1f,	// (0x0001d6b8) aid_touch_sctrl_middle_ParamLimits

0x8d1f,	// (0x0001d6b8) aid_touch_sctrl_middle

0x8d2c,	// (0x0001d6c5) bg_sctrl_middle_pane_ParamLimits

0x8d2c,	// (0x0001d6c5) bg_sctrl_middle_pane

0xeef5,	// (0x0002388e) cell_sctrl_middle_pane_g1_ParamLimits

0xeef5,	// (0x0002388e) cell_sctrl_middle_pane_g1

0x8d3a,	// (0x0001d6d3) cell_sctrl_middle_pane_g2_ParamLimits

0x8d3a,	// (0x0001d6d3) cell_sctrl_middle_pane_g2

0x0001,

0xfd14,	// (0x000246ad) cell_sctrl_middle_pane_g_ParamLimits

0xfd14,	// (0x000246ad) cell_sctrl_middle_pane_g

0x1722,	// (0x000160bb) bg_sctrl_middle_pane_g1

0x172a,	// (0x000160c3) bg_sctrl_middle_pane_g2

0x1732,	// (0x000160cb) bg_sctrl_middle_pane_g3

0x173a,	// (0x000160d3) bg_sctrl_middle_pane_g4

0x1742,	// (0x000160db) bg_sctrl_middle_pane_g5

0x174a,	// (0x000160e3) bg_sctrl_middle_pane_g6

0x1752,	// (0x000160eb) bg_sctrl_middle_pane_g7

0x175a,	// (0x000160f3) bg_sctrl_middle_pane_g8

0x0007,

0xfd19,	// (0x000246b2) bg_sctrl_middle_pane_g

0x1762,	// (0x000160fb) bg_sctrl_middle_pane_g8_copy1

0x1722,	// (0x000160bb) bg_sctrl_sk_pane_g1

0x1732,	// (0x000160cb) bg_sctrl_sk_pane_g2

0x172a,	// (0x000160c3) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x000241f5) bg_sctrl_sk_pane_g

0xbe61,	// (0x000207fa) aid_size_touch_scroll_bar

0x1742,	// (0x000160db) bg_sctrl_sk_pane_g4

0x173a,	// (0x000160d3) bg_sctrl_sk_pane_g5

0x174a,	// (0x000160e3) bg_sctrl_sk_pane_g6

0x1752,	// (0x000160eb) bg_sctrl_sk_pane_g7

0x1762,	// (0x000160fb) bg_sctrl_sk_pane_g8

0x175a,	// (0x000160f3) bg_sctrl_sk_pane_g9

0x0c61,	// (0x000155fa) popup_fep_china_hwr2_fs_candidate_window

0xa21d,	// (0x0001ebb6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa21d,	// (0x0001ebb6) popup_fep_china_hwr2_fs_control_window

0xecae,	// (0x00023647) sctrl_sk_top_pane_g2

0x0001,

0xfd0f,	// (0x000246a8) sctrl_sk_top_pane_g

0xc52a,	// (0x00020ec3) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc52a,	// (0x00020ec3) aid_fep_china_hwr2_fs_cell

0xc540,	// (0x00020ed9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc540,	// (0x00020ed9) bg_popup_fep_shadow_pane_cp4

0xc557,	// (0x00020ef0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc557,	// (0x00020ef0) bg_popup_fep_shadow_pane_cp5

0xc569,	// (0x00020f02) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc569,	// (0x00020f02) popup_fep_china_hwr2_fs_control_bar_grid

0xc57d,	// (0x00020f16) popup_fep_china_hwr2_fs_control_funtion_grid

0x5d91,	// (0x0001a72a) aid_fep_china_hwr2_fs_candi_cell

0xb87d,	// (0x00020216) bg_popup_fep_shadow_pane_cp6

0x5d9b,	// (0x0001a734) popup_fep_china_hwr2_fs_candidate_grid

0xc585,	// (0x00020f1e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc585,	// (0x00020f1e) cell_fep_china_hwr2_fs_funtion_grid

0x425c,	// (0x00018bf5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5dbd,	// (0x0001a756) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5dbd,	// (0x0001a756) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5dcb,	// (0x0001a764) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5dcb,	// (0x0001a764) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2a,	// (0x000246c3) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2a,	// (0x000246c3) cell_fep_china_hwr2_fs_funtion_grid_g

0xc59d,	// (0x00020f36) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc59d,	// (0x00020f36) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc5b2,	// (0x00020f4b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc5b2,	// (0x00020f4b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2f,	// (0x000246c8) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2f,	// (0x000246c8) cell_fep_china_hwr2_fs_funtion_grid_t

0x5e12,	// (0x0001a7ab) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5e1a,	// (0x0001a7b3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5e22,	// (0x0001a7bb) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd34,	// (0x000246cd) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5e2a,	// (0x0001a7c3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5e2a,	// (0x0001a7c3) cell_fep_china_hwr2_fs_candidate_grid

0x5e49,	// (0x0001a7e2) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5e51,	// (0x0001a7ea) popup_fep_china_hwr2_fs_candidate_grid_g21

0x425c,	// (0x00018bf5) cell_fep_china_hwr2_fs_candidate_grid_g1

0x425c,	// (0x00018bf5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x000244e1) cell_fep_china_hwr2_fs_candidate_grid_g

0x5e59,	// (0x0001a7f2) cell_fep_china_hwr2_fs_candidate_grid_t1

0x12d0,	// (0x00015c69) clock_nsta_pane_cp_24_ParamLimits

0x12d0,	// (0x00015c69) clock_nsta_pane_cp_24

0x1350,	// (0x00015ce9) indicator_nsta_pane_cp_24_ParamLimits

0x1350,	// (0x00015ce9) indicator_nsta_pane_cp_24

0x24d6,	// (0x00016e6f) heading_pane_g1

0x0001,

0xf8c1,	// (0x0002425a) heading_pane_g

0x3015,	// (0x000179ae) grid_sct_catagory_button_pane

0x3047,	// (0x000179e0) scroll_pane_cp5_ParamLimits

0x3e52,	// (0x000187eb) button_value_adjust_pane_cp5_ParamLimits

0x3e52,	// (0x000187eb) button_value_adjust_pane_cp5

0x3f58,	// (0x000188f1) form2_midp_time_pane_ParamLimits

0x5e67,	// (0x0001a800) cell_sct_catagory_button_pane_ParamLimits

0x5e67,	// (0x0001a800) cell_sct_catagory_button_pane

0x4221,	// (0x00018bba) bg_button_pane_cp01_ParamLimits

0x4221,	// (0x00018bba) bg_button_pane_cp01

0x425c,	// (0x00018bf5) cell_sct_catagory_button_pane_g1

0xa7e6,	// (0x0001f17f) popup_tb_extension_window

0xc5ce,	// (0x00020f67) aid_size_cell_ext_ParamLimits

0xc5ce,	// (0x00020f67) aid_size_cell_ext

0xbca3,	// (0x0002063c) bg_tb_trans_pane_cp1_ParamLimits

0xbca3,	// (0x0002063c) bg_tb_trans_pane_cp1

0xc5f4,	// (0x00020f8d) grid_tb_ext_pane_ParamLimits

0xc5f4,	// (0x00020f8d) grid_tb_ext_pane

0xc634,	// (0x00020fcd) cell_tb_ext_pane_ParamLimits

0xc634,	// (0x00020fcd) cell_tb_ext_pane

0xc65c,	// (0x00020ff5) cell_tb_ext_pane_g1_ParamLimits

0xc65c,	// (0x00020ff5) cell_tb_ext_pane_g1

0x5efd,	// (0x0001a896) cell_tb_ext_pane_t1

0xba46,	// (0x000203df) list_highlight_pane_cp11_ParamLimits

0xba46,	// (0x000203df) list_highlight_pane_cp11

0x8884,	// (0x0001d21d) popup_uni_indicator_window_ParamLimits

0x8884,	// (0x0001d21d) popup_uni_indicator_window

0xd946,	// (0x000222df) bg_popup_sub_pane_cp14

0x5f18,	// (0x0001a8b1) list_uniindi_pane

0x5f24,	// (0x0001a8bd) uniindi_top_pane

0xba46,	// (0x000203df) bg_uniindi_top_pane

0x5f45,	// (0x0001a8de) uniindi_top_pane_g1

0x5f5b,	// (0x0001a8f4) uniindi_top_pane_g2

0x0003,

0xfd3b,	// (0x000246d4) uniindi_top_pane_g

0x5f85,	// (0x0001a91e) uniindi_top_pane_t1

0x5fb1,	// (0x0001a94a) list_single_uniindi_pane_ParamLimits

0x5fb1,	// (0x0001a94a) list_single_uniindi_pane

0x425c,	// (0x00018bf5) bg_uniindi_top_pane_g1

0x5fc3,	// (0x0001a95c) list_single_uniindi_pane_g1

0x5fd6,	// (0x0001a96f) list_single_uniindi_pane_t1

0xd6bb,	// (0x00022054) control_bg_pane

0x5ffb,	// (0x0001a994) bg_sctrl_sk_pane_cp1

0x6004,	// (0x0001a99d) bg_sctrl_sk_pane_cp2

0x600d,	// (0x0001a9a6) control_bg_pane_g1

0x6016,	// (0x0001a9af) control_bg_pane_g2

0x0001,

0xfd44,	// (0x000246dd) control_bg_pane_g

0x3c79,	// (0x00018612) cell_indicator_nsta_pane_g1_ParamLimits

0xb3a5,	// (0x0001fd3e) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x00024445) cell_indicator_nsta_pane_g_ParamLimits

0x3fe8,	// (0x00018981) form2_midp_time_pane_t1_ParamLimits

0xa193,	// (0x0001eb2c) main_idle_act4_pane_ParamLimits

0xa193,	// (0x0001eb2c) main_idle_act4_pane

0xa7e6,	// (0x0001f17f) popup_tb_extension_window_ParamLimits

0xc61c,	// (0x00020fb5) tb_ext_find_pane_ParamLimits

0xc61c,	// (0x00020fb5) tb_ext_find_pane

0x601f,	// (0x0001a9b8) ai_gene_pane_1_cp1

0x0962,	// (0x000152fb) ai_gene_pane_2_cp1

0x6027,	// (0x0001a9c0) list_single_idle_plugin_calendar_pane

0x6030,	// (0x0001a9c9) list_single_idle_plugin_notification_pane

0x6039,	// (0x0001a9d2) list_single_idle_plugin_player_pane

0xc679,	// (0x00021012) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc679,	// (0x00021012) list_single_idle_plugin_shortcut_pane

0xc6a1,	// (0x0002103a) main_idle_act4_pane_t1

0xc6b9,	// (0x00021052) main_idle_act4_pane_t2

0x0001,

0xfd49,	// (0x000246e2) main_idle_act4_pane_t

0xc6d1,	// (0x0002106a) middle_sk_idle_act4_pane_ParamLimits

0xc6d1,	// (0x0002106a) middle_sk_idle_act4_pane

0xc6ed,	// (0x00021086) popup_clock_digital_analogue_window_cp2

0xc714,	// (0x000210ad) shortcut_wheel_idle_act4_pane_ParamLimits

0xc714,	// (0x000210ad) shortcut_wheel_idle_act4_pane

0x425c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g1

0x425c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g2

0x425c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g3

0x425c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g4

0x425c,	// (0x00018bf5) shortcut_wheel_idle_act4_pane_g5

0x60cc,	// (0x0001aa65) shortcut_wheel_idle_act4_pane_g6

0x60d4,	// (0x0001aa6d) shortcut_wheel_idle_act4_pane_g7

0x60dc,	// (0x0001aa75) shortcut_wheel_idle_act4_pane_g8

0x60e4,	// (0x0001aa7d) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4e,	// (0x000246e7) shortcut_wheel_idle_act4_pane_g

0xb84d,	// (0x000201e6) middle_sk_idle_act4_pane_g1_ParamLimits

0xb84d,	// (0x000201e6) middle_sk_idle_act4_pane_g1

0xc791,	// (0x0002112a) middle_sk_idle_act4_pane_g2_ParamLimits

0xc791,	// (0x0002112a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd71,	// (0x0002470a) middle_sk_idle_act4_pane_g_ParamLimits

0xfd71,	// (0x0002470a) middle_sk_idle_act4_pane_g

0xc7a9,	// (0x00021142) middle_sk_idle_act4_pane_t1_ParamLimits

0xc7a9,	// (0x00021142) middle_sk_idle_act4_pane_t1

0xc7d8,	// (0x00021171) grid_ai_shortcut_pane_ParamLimits

0xc7d8,	// (0x00021171) grid_ai_shortcut_pane

0xc7f5,	// (0x0002118e) list_highlight_pane_cp16_ParamLimits

0xc7f5,	// (0x0002118e) list_highlight_pane_cp16

0xc802,	// (0x0002119b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc802,	// (0x0002119b) list_single_idle_plugin_shortcut_pane_g1

0xc80e,	// (0x000211a7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc80e,	// (0x000211a7) list_single_idle_plugin_shortcut_pane_g2

0xc82c,	// (0x000211c5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc82c,	// (0x000211c5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd76,	// (0x0002470f) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd76,	// (0x0002470f) list_single_idle_plugin_shortcut_pane_g

0xc841,	// (0x000211da) cell_ai_shortcut_pane_ParamLimits

0xc841,	// (0x000211da) cell_ai_shortcut_pane

0xc857,	// (0x000211f0) cell_ai_shortcut_pane_g1_ParamLimits

0xc857,	// (0x000211f0) cell_ai_shortcut_pane_g1

0x601f,	// (0x0001a9b8) ai_gene_pane_1_cp2

0x6215,	// (0x0001abae) ai_gene_pane_2_cp2

0x621d,	// (0x0001abb6) list_highlight_pane_cp15

0x6226,	// (0x0001abbf) list_single_idle_plugin_calendar_pane_g1

0x621d,	// (0x0001abb6) list_highlight_pane_cp17

0x622e,	// (0x0001abc7) list_single_idle_plugin_calendar_pane_g1_copy1

0x6236,	// (0x0001abcf) list_single_idle_plugin_player_pane_g1

0x327c,	// (0x00017c15) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7d,	// (0x00024716) list_single_idle_plugin_player_pane_g

0x623e,	// (0x0001abd7) list_single_idle_plugin_player_pane_t1

0x624c,	// (0x0001abe5) list_single_idle_plugin_player_pane_t2

0x625a,	// (0x0001abf3) list_single_idle_plugin_player_pane_t3

0x6268,	// (0x0001ac01) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd82,	// (0x0002471b) list_single_idle_plugin_player_pane_t

0x6276,	// (0x0001ac0f) wait_bar_pane_cp15

0x627e,	// (0x0001ac17) grid_ai_notification_pane

0x327c,	// (0x00017c15) list_single_idle_plugin_notification_pane_g1

0xc879,	// (0x00021212) cell_ai_notification_pane_ParamLimits

0xc879,	// (0x00021212) cell_ai_notification_pane

0x6294,	// (0x0001ac2d) cell_ai_notification_pane_g1

0x629c,	// (0x0001ac35) cell_ai_notification_pane_t1

0xc886,	// (0x0002121f) tb_ext_find_button_pane

0xc88e,	// (0x00021227) tb_ext_find_pane_g1

0xc896,	// (0x0002122f) tb_ext_find_pane_t1

0xe006,	// (0x0002299f) tb_ext_find_button_pane_g1

0x62c8,	// (0x0001ac61) tb_ext_find_button_pane_g2

0x0001,

0xfd8b,	// (0x00024724) tb_ext_find_button_pane_g

0xc6a1,	// (0x0002103a) main_idle_act4_pane_t1_ParamLimits

0xc6b9,	// (0x00021052) main_idle_act4_pane_t2_ParamLimits

0xfd49,	// (0x000246e2) main_idle_act4_pane_t_ParamLimits

0xc6ed,	// (0x00021086) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc704,	// (0x0002109d) sat_plugin_idle_act4_pane_ParamLimits

0xc704,	// (0x0002109d) sat_plugin_idle_act4_pane

0xc8a4,	// (0x0002123d) sat_plugin_idle_act4_pane_t1_ParamLimits

0xc8a4,	// (0x0002123d) sat_plugin_idle_act4_pane_t1

0xc8bc,	// (0x00021255) sat_plugin_idle_act4_pane_t2_ParamLimits

0xc8bc,	// (0x00021255) sat_plugin_idle_act4_pane_t2

0xc8d4,	// (0x0002126d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xc8d4,	// (0x0002126d) sat_plugin_idle_act4_pane_t3

0xc8ec,	// (0x00021285) sat_plugin_idle_act4_pane_t4_ParamLimits

0xc8ec,	// (0x00021285) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd90,	// (0x00024729) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd90,	// (0x00024729) sat_plugin_idle_act4_pane_t

0xd780,	// (0x00022119) popup_battery_window_ParamLimits

0xd780,	// (0x00022119) popup_battery_window

0xba46,	// (0x000203df) bg_popup_sub_pane_cp25_ParamLimits

0xba46,	// (0x000203df) bg_popup_sub_pane_cp25

0x631d,	// (0x0001acb6) popup_battery_window_g1_ParamLimits

0x631d,	// (0x0001acb6) popup_battery_window_g1

0x6329,	// (0x0001acc2) popup_battery_window_t1_ParamLimits

0x6329,	// (0x0001acc2) popup_battery_window_t1

0x633b,	// (0x0001acd4) popup_battery_window_t2_ParamLimits

0x633b,	// (0x0001acd4) popup_battery_window_t2

0x0001,

0xfd99,	// (0x00024732) popup_battery_window_t_ParamLimits

0xfd99,	// (0x00024732) popup_battery_window_t

0x9fdc,	// (0x0001e975) midp_canvas_pane_ParamLimits

0xa037,	// (0x0001e9d0) midp_keypad_pane_ParamLimits

0xa037,	// (0x0001e9d0) midp_keypad_pane

0x0bab,	// (0x00015544) main_midp_pane_ParamLimits

0x3d05,	// (0x0001869e) signal_pane_g2_cp_ParamLimits

0xc904,	// (0x0002129d) aid_size_cell_midp_keypad_ParamLimits

0xc904,	// (0x0002129d) aid_size_cell_midp_keypad

0xc922,	// (0x000212bb) midp_keyp_game_grid_pane_ParamLimits

0xc922,	// (0x000212bb) midp_keyp_game_grid_pane

0xc949,	// (0x000212e2) midp_keyp_rocker_pane_ParamLimits

0xc949,	// (0x000212e2) midp_keyp_rocker_pane

0xc988,	// (0x00021321) midp_keyp_sk_left_pane_ParamLimits

0xc988,	// (0x00021321) midp_keyp_sk_left_pane

0xc9dc,	// (0x00021375) midp_keyp_sk_right_pane_ParamLimits

0xc9dc,	// (0x00021375) midp_keyp_sk_right_pane

0xb87d,	// (0x00020216) bg_button_pane_cp03

0xca30,	// (0x000213c9) midp_keyp_sk_left_pane_g1

0xb87d,	// (0x00020216) bg_button_pane_cp04

0xca30,	// (0x000213c9) midp_keyp_sk_right_pane_g1

0x425c,	// (0x00018bf5) midp_keyp_rocker_pane_g1

0xca39,	// (0x000213d2) keyp_game_cell_pane_ParamLimits

0xca39,	// (0x000213d2) keyp_game_cell_pane

0xb87d,	// (0x00020216) bg_button_pane_cp02

0xca5f,	// (0x000213f8) keyp_game_cell_pane_g1

0x881b,	// (0x0001d1b4) popup_fep_vkb2_window_ParamLimits

0x881b,	// (0x0001d1b4) popup_fep_vkb2_window

0x8d46,	// (0x0001d6df) aid_size_cell_vkb2_ParamLimits

0x8d46,	// (0x0001d6df) aid_size_cell_vkb2

0x8d7c,	// (0x0001d715) popup_fep_vkb2_window_g1_ParamLimits

0x8d7c,	// (0x0001d715) popup_fep_vkb2_window_g1

0x8dcc,	// (0x0001d765) vkb2_area_bottom_pane_ParamLimits

0x8dcc,	// (0x0001d765) vkb2_area_bottom_pane

0x8e28,	// (0x0001d7c1) vkb2_area_keypad_pane_ParamLimits

0x8e28,	// (0x0001d7c1) vkb2_area_keypad_pane

0x8e76,	// (0x0001d80f) vkb2_area_top_pane_ParamLimits

0x8e76,	// (0x0001d80f) vkb2_area_top_pane

0x8efc,	// (0x0001d895) vkb2_top_entry_pane_ParamLimits

0x8efc,	// (0x0001d895) vkb2_top_entry_pane

0x8f29,	// (0x0001d8c2) vkb2_top_grid_left_pane_ParamLimits

0x8f29,	// (0x0001d8c2) vkb2_top_grid_left_pane

0x8f49,	// (0x0001d8e2) vkb2_top_grid_right_pane_ParamLimits

0x8f49,	// (0x0001d8e2) vkb2_top_grid_right_pane

0xef33,	// (0x000238cc) vkb2_cell_keypad_pane_ParamLimits

0xef33,	// (0x000238cc) vkb2_cell_keypad_pane

0x8f8f,	// (0x0001d928) vkb2_area_bottom_grid_pane_ParamLimits

0x8f8f,	// (0x0001d928) vkb2_area_bottom_grid_pane

0x8fb9,	// (0x0001d952) vkb2_area_bottom_pane_g1_ParamLimits

0x8fb9,	// (0x0001d952) vkb2_area_bottom_pane_g1

0x8fdf,	// (0x0001d978) vkb2_area_bottom_pane_g2_ParamLimits

0x8fdf,	// (0x0001d978) vkb2_area_bottom_pane_g2

0x9010,	// (0x0001d9a9) vkb2_area_bottom_pane_g3_ParamLimits

0x9010,	// (0x0001d9a9) vkb2_area_bottom_pane_g3

0x0002,

0xfd9e,	// (0x00024737) vkb2_area_bottom_pane_g_ParamLimits

0xfd9e,	// (0x00024737) vkb2_area_bottom_pane_g

0xefe0,	// (0x00023979) vkb2_top_cell_left_pane_ParamLimits

0xefe0,	// (0x00023979) vkb2_top_cell_left_pane

0xca68,	// (0x00021401) vkb2_top_entry_pane_g1_ParamLimits

0xca68,	// (0x00021401) vkb2_top_entry_pane_g1

0xca76,	// (0x0002140f) vkb2_top_entry_pane_t1_ParamLimits

0xca76,	// (0x0002140f) vkb2_top_entry_pane_t1

0x64de,	// (0x0001ae77) vkb2_top_entry_pane_t2_ParamLimits

0x64de,	// (0x0001ae77) vkb2_top_entry_pane_t2

0x6510,	// (0x0001aea9) vkb2_top_entry_pane_t3_ParamLimits

0x6510,	// (0x0001aea9) vkb2_top_entry_pane_t3

0x0002,

0xfda5,	// (0x0002473e) vkb2_top_entry_pane_t_ParamLimits

0xfda5,	// (0x0002473e) vkb2_top_entry_pane_t

0x907a,	// (0x0001da13) vkb2_top_grid_right_pane_g1_ParamLimits

0x907a,	// (0x0001da13) vkb2_top_grid_right_pane_g1

0xf02d,	// (0x000239c6) vkb2_top_grid_right_pane_g2_ParamLimits

0xf02d,	// (0x000239c6) vkb2_top_grid_right_pane_g2

0xf045,	// (0x000239de) vkb2_top_grid_right_pane_g3_ParamLimits

0xf045,	// (0x000239de) vkb2_top_grid_right_pane_g3

0x9090,	// (0x0001da29) vkb2_top_grid_right_pane_g4_ParamLimits

0x9090,	// (0x0001da29) vkb2_top_grid_right_pane_g4

0x0003,

0xfdac,	// (0x00024745) vkb2_top_grid_right_pane_g_ParamLimits

0xfdac,	// (0x00024745) vkb2_top_grid_right_pane_g

0xf05d,	// (0x000239f6) vkb2_top_cell_left_pane_g1

0xf074,	// (0x00023a0d) vkb2_cell_keypad_pane_g1_ParamLimits

0xf074,	// (0x00023a0d) vkb2_cell_keypad_pane_g1

0x6534,	// (0x0001aecd) vkb2_cell_keypad_pane_t1_ParamLimits

0x6534,	// (0x0001aecd) vkb2_cell_keypad_pane_t1

0xf082,	// (0x00023a1b) vkb2_cell_bottom_grid_pane_ParamLimits

0xf082,	// (0x00023a1b) vkb2_cell_bottom_grid_pane

0xf0bb,	// (0x00023a54) vkb2_cell_bottom_grid_pane_g1

0xc735,	// (0x000210ce) aid_call2_pane_cp02

0xc73d,	// (0x000210d6) aid_call_pane_cp02

0xc745,	// (0x000210de) clock_digital_number_pane_cp10

0xc74d,	// (0x000210e6) clock_digital_number_pane_cp11

0xc755,	// (0x000210ee) clock_digital_number_pane_cp12

0xc75d,	// (0x000210f6) clock_digital_number_pane_cp13

0xc765,	// (0x000210fe) clock_digital_separator_pane_cp10

0xe006,	// (0x0002299f) popup_clock_digital_analogue_window_cp2_g1

0xe006,	// (0x0002299f) popup_clock_digital_analogue_window_cp2_g2

0xc76d,	// (0x00021106) popup_clock_digital_analogue_window_cp2_g3

0xe006,	// (0x0002299f) popup_clock_digital_analogue_window_cp2_g4

0xc76d,	// (0x00021106) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd61,	// (0x000246fa) popup_clock_digital_analogue_window_cp2_g

0xc775,	// (0x0002110e) popup_clock_digital_analogue_window_cp2_t1

0xc783,	// (0x0002111c) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6c,	// (0x00024705) popup_clock_digital_analogue_window_cp2_t

0x425c,	// (0x00018bf5) clock_digital_number_pane_cp10_g1

0x425c,	// (0x00018bf5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x000244e1) clock_digital_number_pane_cp10_g

0x425c,	// (0x00018bf5) clock_digital_separator_pane_cp10_g1

0x425c,	// (0x00018bf5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x000244e1) clock_digital_separator_pane_cp10_g

0x5f67,	// (0x0001a900) uniindi_top_pane_g3

0x5f78,	// (0x0001a911) uniindi_top_pane_g4

0xefbe,	// (0x00023957) vkb2_row_keypad_pane_ParamLimits

0xefbe,	// (0x00023957) vkb2_row_keypad_pane

0xf0d7,	// (0x00023a70) vkb2_cell_t_keypad_pane_ParamLimits

0xf0d7,	// (0x00023a70) vkb2_cell_t_keypad_pane

0xf0e7,	// (0x00023a80) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf0e7,	// (0x00023a80) vkb2_cell_t_keypad_pane_cp08

0xf0fc,	// (0x00023a95) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf0fc,	// (0x00023a95) vkb2_cell_t_keypad_pane_cp09

0xf110,	// (0x00023aa9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf110,	// (0x00023aa9) vkb2_cell_t_keypad_pane_cp01

0xf121,	// (0x00023aba) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf121,	// (0x00023aba) vkb2_cell_t_keypad_pane_cp02

0xf132,	// (0x00023acb) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf132,	// (0x00023acb) vkb2_cell_t_keypad_pane_cp03

0xf143,	// (0x00023adc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf143,	// (0x00023adc) vkb2_cell_t_keypad_pane_cp04

0xf154,	// (0x00023aed) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf154,	// (0x00023aed) vkb2_cell_t_keypad_pane_cp05

0xf165,	// (0x00023afe) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf165,	// (0x00023afe) vkb2_cell_t_keypad_pane_cp06

0xf178,	// (0x00023b11) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf178,	// (0x00023b11) vkb2_cell_t_keypad_pane_cp07

0xf18d,	// (0x00023b26) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf18d,	// (0x00023b26) vkb2_cell_t_keypad_pane_cp10

0xecae,	// (0x00023647) vkb2_cell_t_keypad_pane_g1

0x654b,	// (0x0001aee4) vkb2_cell_t_keypad_pane_t1

0xd6bb,	// (0x00022054) popup_grid_graphic2_window

0xcaaf,	// (0x00021448) aid_size_cell_graphic2_ParamLimits

0xcaaf,	// (0x00021448) aid_size_cell_graphic2

0xcaed,	// (0x00021486) bg_popup_window_pane_cp21_ParamLimits

0xcaed,	// (0x00021486) bg_popup_window_pane_cp21

0xcafb,	// (0x00021494) graphic2_pages_pane_ParamLimits

0xcafb,	// (0x00021494) graphic2_pages_pane

0xcb53,	// (0x000214ec) grid_graphic2_control_pane_ParamLimits

0xcb53,	// (0x000214ec) grid_graphic2_control_pane

0xcb9b,	// (0x00021534) grid_graphic2_pane_ParamLimits

0xcb9b,	// (0x00021534) grid_graphic2_pane

0xcc26,	// (0x000215bf) cell_graphic2_pane

0xb87d,	// (0x00020216) main_comp_mode_pane

0x5775,	// (0x0001a10e) list_ai3_gene_pane_ParamLimits

0xc472,	// (0x00020e0b) bg_popup_window_pane_cp19_ParamLimits

0x5bac,	// (0x0001a545) bg_touch_area_indi_pane_ParamLimits

0x5bac,	// (0x0001a545) bg_touch_area_indi_pane

0x5bc2,	// (0x0001a55b) bg_touch_area_indi_pane_cp01_ParamLimits

0x5bc2,	// (0x0001a55b) bg_touch_area_indi_pane_cp01

0x5bda,	// (0x0001a573) bg_touch_area_indi_pane_cp02_ParamLimits

0x5bda,	// (0x0001a573) bg_touch_area_indi_pane_cp02

0x5bf4,	// (0x0001a58d) bg_touch_area_indi_pane_cp03_ParamLimits

0x5bf4,	// (0x0001a58d) bg_touch_area_indi_pane_cp03

0x5c0e,	// (0x0001a5a7) popup_slider_window_g1_ParamLimits

0x5c2a,	// (0x0001a5c3) popup_slider_window_g2_ParamLimits

0x5c46,	// (0x0001a5df) popup_slider_window_g3_ParamLimits

0xfcf6,	// (0x0002468f) popup_slider_window_g_ParamLimits

0x5ca2,	// (0x0001a63b) popup_slider_window_t1_ParamLimits

0x5d16,	// (0x0001a6af) small_volume_slider_vertical_pane_ParamLimits

0xcc26,	// (0x000215bf) cell_graphic2_pane_ParamLimits

0xcc89,	// (0x00021622) bg_button_pane_cp10_ParamLimits

0xcc89,	// (0x00021622) bg_button_pane_cp10

0xcc9c,	// (0x00021635) bg_button_pane_cp11_ParamLimits

0xcc9c,	// (0x00021635) bg_button_pane_cp11

0xccaf,	// (0x00021648) graphic2_pages_pane_g1_ParamLimits

0xccaf,	// (0x00021648) graphic2_pages_pane_g1

0xccca,	// (0x00021663) graphic2_pages_pane_g2_ParamLimits

0xccca,	// (0x00021663) graphic2_pages_pane_g2

0x0001,

0xfdba,	// (0x00024753) graphic2_pages_pane_g_ParamLimits

0xfdba,	// (0x00024753) graphic2_pages_pane_g

0xcce2,	// (0x0002167b) graphic2_pages_pane_t1_ParamLimits

0xcce2,	// (0x0002167b) graphic2_pages_pane_t1

0xccfa,	// (0x00021693) cell_graphic2_control_pane_ParamLimits

0xccfa,	// (0x00021693) cell_graphic2_control_pane

0xcd2e,	// (0x000216c7) cell_graphic2_pane_g1_ParamLimits

0xcd2e,	// (0x000216c7) cell_graphic2_pane_g1

0xb85b,	// (0x000201f4) cell_graphic2_pane_g2_ParamLimits

0xb85b,	// (0x000201f4) cell_graphic2_pane_g2

0xbecf,	// (0x00020868) cell_graphic2_pane_g3_ParamLimits

0xbecf,	// (0x00020868) cell_graphic2_pane_g3

0xb868,	// (0x00020201) cell_graphic2_pane_g4_ParamLimits

0xb868,	// (0x00020201) cell_graphic2_pane_g4

0xcd3b,	// (0x000216d4) cell_graphic2_pane_g5_ParamLimits

0xcd3b,	// (0x000216d4) cell_graphic2_pane_g5

0x0004,

0xfdbf,	// (0x00024758) cell_graphic2_pane_g_ParamLimits

0xfdbf,	// (0x00024758) cell_graphic2_pane_g

0xcd5b,	// (0x000216f4) cell_graphic2_pane_t1_ParamLimits

0xcd5b,	// (0x000216f4) cell_graphic2_pane_t1

0x24ca,	// (0x00016e63) grid_highlight_pane_cp11_ParamLimits

0x24ca,	// (0x00016e63) grid_highlight_pane_cp11

0xba46,	// (0x000203df) bg_button_pane_cp05

0xcd90,	// (0x00021729) cell_graphic2_control_pane_g1

0x425c,	// (0x00018bf5) bg_touch_area_indi_pane_g1

0x6825,	// (0x0001b1be) aid_cmod_rocker_key_size

0x682f,	// (0x0001b1c8) aid_cmode_itu_key_size

0x6839,	// (0x0001b1d2) main_cmode_video_pane

0x6843,	// (0x0001b1dc) main_comp_mode_itu_pane

0x684f,	// (0x0001b1e8) main_comp_mode_rocker_pane

0x685b,	// (0x0001b1f4) cell_cmode_rocker_pane_ParamLimits

0x685b,	// (0x0001b1f4) cell_cmode_rocker_pane

0x686f,	// (0x0001b208) cell_cmode_itu_pane_ParamLimits

0x686f,	// (0x0001b208) cell_cmode_itu_pane

0xd946,	// (0x000222df) bg_button_pane_cp06_ParamLimits

0xd946,	// (0x000222df) bg_button_pane_cp06

0x44d7,	// (0x00018e70) cell_cmode_rocker_pane_g1_ParamLimits

0x44d7,	// (0x00018e70) cell_cmode_rocker_pane_g1

0x5dbd,	// (0x0001a756) cell_cmode_rocker_pane_g2_ParamLimits

0x5dbd,	// (0x0001a756) cell_cmode_rocker_pane_g2

0x0001,

0xfdcf,	// (0x00024768) cell_cmode_rocker_pane_g_ParamLimits

0xfdcf,	// (0x00024768) cell_cmode_rocker_pane_g

0xb87d,	// (0x00020216) bg_button_pane_cp07

0x6886,	// (0x0001b21f) cell_cmode_itu_pane_g1

0x688f,	// (0x0001b228) cell_cmode_itu_pane_t1

0x689d,	// (0x0001b236) cell_cmode_itu_pane_t2

0x0001,

0xfdd4,	// (0x0002476d) cell_cmode_itu_pane_t

0x5feb,	// (0x0001a984) aid_touch_ctrl_left

0x5ff3,	// (0x0001a98c) aid_touch_ctrl_right

0xb87d,	// (0x00020216) compa_mode_pane

0xcdb6,	// (0x0002174f) aid_cmod_rocker_key_size_cp

0xcdc0,	// (0x00021759) aid_cmode_itu_key_size_cp

0x68bf,	// (0x0001b258) compa_mode_pane_g1

0x68c7,	// (0x0001b260) compa_mode_pane_g2

0x68cf,	// (0x0001b268) compa_mode_pane_g3

0x0002,

0xfdd9,	// (0x00024772) compa_mode_pane_g

0xcdca,	// (0x00021763) main_comp_mode_itu_pane_cp

0xcdd2,	// (0x0002176b) main_comp_mode_rocker_pane_cp

0xcdda,	// (0x00021773) cell_cmode_itu_pane_cp_ParamLimits

0xcdda,	// (0x00021773) cell_cmode_itu_pane_cp

0xcdef,	// (0x00021788) cell_cmode_rocker_pane_cp_ParamLimits

0xcdef,	// (0x00021788) cell_cmode_rocker_pane_cp

0xd946,	// (0x000222df) bg_button_pane_cp06_cp_ParamLimits

0xd946,	// (0x000222df) bg_button_pane_cp06_cp

0x44d7,	// (0x00018e70) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x44d7,	// (0x00018e70) cell_cmode_rocker_pane_g1_cp

0x425c,	// (0x00018bf5) cell_cmode_rocker_pane_g2_cp

0xb87d,	// (0x00020216) bg_button_pane_cp07_cp

0xce01,	// (0x0002179a) cell_cmode_itu_pane_g1_cp

0xce0a,	// (0x000217a3) cell_cmode_itu_pane_t1_cp

0xce0a,	// (0x000217a3) cell_cmode_itu_pane_t2_cp

0xb1a6,	// (0x0001fb3f) settings_code_pane_cp2

0xb8f9,	// (0x00020292) bg_popup_window_pane_cp3_ParamLimits

0xbc34,	// (0x000205cd) heading_pane_cp3_ParamLimits

0xbc40,	// (0x000205d9) listscroll_popup_graphic_pane_ParamLimits

0xeabc,	// (0x00023455) fep_hwr_aid_pane_ParamLimits

0xeea9,	// (0x00023842) aid_touch_sctrl_top_ParamLimits

0xeec4,	// (0x0002385d) sctrl_sk_top_pane_g1_ParamLimits

0xecae,	// (0x00023647) sctrl_sk_top_pane_g2_ParamLimits

0xfd0f,	// (0x000246a8) sctrl_sk_top_pane_g_ParamLimits

0xeed1,	// (0x0002386a) sctrl_sk_top_pane_t1_ParamLimits

0xeea9,	// (0x00023842) aid_touch_sctrl_bottom_ParamLimits

0xeed1,	// (0x0002386a) sctrl_sk_bottom_pane_t1_ParamLimits

0x5f31,	// (0x0001a8ca) aid_area_touch_clock

0x8ebe,	// (0x0001d857) aid_vkb2_area_top_pane_cell_ParamLimits

0x8ebe,	// (0x0001d857) aid_vkb2_area_top_pane_cell

0x8f69,	// (0x0001d902) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x8f69,	// (0x0001d902) aid_vkb2_area_bottom_pane_cell

0x6496,	// (0x0001ae2f) popup_char_count_window

0x6925,	// (0x0001b2be) popup_char_count_window_g1

0x692e,	// (0x0001b2c7) popup_char_count_window_g2

0x6937,	// (0x0001b2d0) popup_char_count_window_g3

0x0002,

0xfde0,	// (0x00024779) popup_char_count_window_g

0x6940,	// (0x0001b2d9) popup_char_count_window_t1

0xef11,	// (0x000238aa) popup_fep_char_preview_window_ParamLimits

0xef11,	// (0x000238aa) popup_fep_char_preview_window

0x8ede,	// (0x0001d877) vkb2_top_candi_pane_ParamLimits

0x8ede,	// (0x0001d877) vkb2_top_candi_pane

0xce18,	// (0x000217b1) cell_vkb2_top_candi_pane_ParamLimits

0xce18,	// (0x000217b1) cell_vkb2_top_candi_pane

0xf1a2,	// (0x00023b3b) bg_popup_fep_char_preview_window_ParamLimits

0xf1a2,	// (0x00023b3b) bg_popup_fep_char_preview_window

0xf1b0,	// (0x00023b49) popup_fep_char_preview_window_t1_ParamLimits

0xf1b0,	// (0x00023b49) popup_fep_char_preview_window_t1

0x699f,	// (0x0001b338) bg_popup_fep_char_preview_window_g1

0x69a7,	// (0x0001b340) bg_popup_fep_char_preview_window_g2

0x69af,	// (0x0001b348) bg_popup_fep_char_preview_window_g3

0x69b7,	// (0x0001b350) bg_popup_fep_char_preview_window_g4

0x69bf,	// (0x0001b358) bg_popup_fep_char_preview_window_g5

0xf1ea,	// (0x00023b83) bg_popup_fep_char_preview_window_g6

0x69c7,	// (0x0001b360) bg_popup_fep_char_preview_window_g7

0x69cf,	// (0x0001b368) bg_popup_fep_char_preview_window_g8

0x69d7,	// (0x0001b370) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde7,	// (0x00024780) bg_popup_fep_char_preview_window_g

0xecae,	// (0x00023647) cell_vkb2_top_candi_pane_g1_ParamLimits

0xecae,	// (0x00023647) cell_vkb2_top_candi_pane_g1

0xecbc,	// (0x00023655) cell_vkb2_top_candi_pane_g2_ParamLimits

0xecbc,	// (0x00023655) cell_vkb2_top_candi_pane_g2

0x573e,	// (0x0001a0d7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x573e,	// (0x0001a0d7) cell_vkb2_top_candi_pane_g3

0xf1f2,	// (0x00023b8b) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf1f2,	// (0x00023b8b) cell_vkb2_top_candi_pane_g4

0x4b9b,	// (0x00019534) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4b9b,	// (0x00019534) cell_vkb2_top_candi_pane_g5

0xeef5,	// (0x0002388e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xeef5,	// (0x0002388e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfa,	// (0x00024793) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfa,	// (0x00024793) cell_vkb2_top_candi_pane_g

0xf213,	// (0x00023bac) cell_vkb2_top_candi_pane_t1

0xe8cb,	// (0x00023264) aid_size_touch_slider_mark_ParamLimits

0xe8cb,	// (0x00023264) aid_size_touch_slider_mark

0xcb37,	// (0x000214d0) grid_graphic2_catg_pane_ParamLimits

0xcb37,	// (0x000214d0) grid_graphic2_catg_pane

0xcbf5,	// (0x0002158e) popup_grid_graphic2_window_t1_ParamLimits

0xcbf5,	// (0x0002158e) popup_grid_graphic2_window_t1

0xcc0b,	// (0x000215a4) popup_grid_graphic2_window_t2_ParamLimits

0xcc0b,	// (0x000215a4) popup_grid_graphic2_window_t2

0x0001,

0xfdb5,	// (0x0002474e) popup_grid_graphic2_window_t_ParamLimits

0xfdb5,	// (0x0002474e) popup_grid_graphic2_window_t

0xba46,	// (0x000203df) bg_button_pane_cp05_ParamLimits

0xcd90,	// (0x00021729) cell_graphic2_control_pane_g1_ParamLimits

0xce82,	// (0x0002181b) cell_graphic2_catg_pane_ParamLimits

0xce82,	// (0x0002181b) cell_graphic2_catg_pane

0xb87d,	// (0x00020216) bg_button_pane_cp12

0xce94,	// (0x0002182d) cell_graphic2_catg_pane_g1

0x5efd,	// (0x0001a896) cell_tb_ext_pane_t1_ParamLimits

0xf000,	// (0x00023999) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf000,	// (0x00023999) vkb2_top_cell_right_narrow_pane

0xf018,	// (0x000239b1) vkb2_top_cell_right_wide_pane_ParamLimits

0xf018,	// (0x000239b1) vkb2_top_cell_right_wide_pane

0xeaae,	// (0x00023447) bg_vkb2_func_pane_ParamLimits

0xeaae,	// (0x00023447) bg_vkb2_func_pane

0xf05d,	// (0x000239f6) vkb2_top_cell_left_pane_g1_ParamLimits

0xeaae,	// (0x00023447) bg_vkb2_fuc_pane_cp03_ParamLimits

0xeaae,	// (0x00023447) bg_vkb2_fuc_pane_cp03

0xf0bb,	// (0x00023a54) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x172a,	// (0x000160c3) bg_vkb2_func_pane_g1

0x1732,	// (0x000160cb) bg_vkb2_func_pane_g2

0x1742,	// (0x000160db) bg_vkb2_func_pane_g3

0x173a,	// (0x000160d3) bg_vkb2_func_pane_g4

0x174a,	// (0x000160e3) bg_vkb2_func_pane_g5

0x1752,	// (0x000160eb) bg_vkb2_func_pane_g6

0x175a,	// (0x000160f3) bg_vkb2_func_pane_g7

0x1762,	// (0x000160fb) bg_vkb2_func_pane_g8

0x1722,	// (0x000160bb) bg_vkb2_func_pane_g9

0x0008,

0xfe07,	// (0x000247a0) bg_vkb2_func_pane_g

0xeaae,	// (0x00023447) bg_vkb2_fuc_pane_cp01_ParamLimits

0xeaae,	// (0x00023447) bg_vkb2_fuc_pane_cp01

0xf05d,	// (0x000239f6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf05d,	// (0x000239f6) vkb2_top_cell_right_wide_pane_g1

0xeaae,	// (0x00023447) bg_vkb2_fuc_pane_cp02_ParamLimits

0xeaae,	// (0x00023447) bg_vkb2_fuc_pane_cp02

0xf0bb,	// (0x00023a54) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf0bb,	// (0x00023a54) vkb2_top_cell_right_narrow_pane_g1

0xc3ac,	// (0x00020d45) aid_touch_area_decrease_ParamLimits

0xc3ac,	// (0x00020d45) aid_touch_area_decrease

0xc3e6,	// (0x00020d7f) aid_touch_area_increase_ParamLimits

0xc3e6,	// (0x00020d7f) aid_touch_area_increase

0xc40e,	// (0x00020da7) aid_touch_area_mute_ParamLimits

0xc40e,	// (0x00020da7) aid_touch_area_mute

0xc43e,	// (0x00020dd7) aid_touch_area_slider_ParamLimits

0xc43e,	// (0x00020dd7) aid_touch_area_slider

0xc47e,	// (0x00020e17) popup_slider_window_g4_ParamLimits

0xc47e,	// (0x00020e17) popup_slider_window_g4

0xc4a6,	// (0x00020e3f) popup_slider_window_g5_ParamLimits

0xc4a6,	// (0x00020e3f) popup_slider_window_g5

0xc4da,	// (0x00020e73) popup_slider_window_g6_ParamLimits

0xc4da,	// (0x00020e73) popup_slider_window_g6

0x5cd0,	// (0x0001a669) popup_slider_window_t2_ParamLimits

0x5cd0,	// (0x0001a669) popup_slider_window_t2

0x0001,

0xfd03,	// (0x0002469c) popup_slider_window_t_ParamLimits

0xfd03,	// (0x0002469c) popup_slider_window_t

0xc4f6,	// (0x00020e8f) slider_pane_ParamLimits

0xc4f6,	// (0x00020e8f) slider_pane

0x69fa,	// (0x0001b393) slider_pane_g1_ParamLimits

0x69fa,	// (0x0001b393) slider_pane_g1

0x6a0e,	// (0x0001b3a7) slider_pane_g2_ParamLimits

0x6a0e,	// (0x0001b3a7) slider_pane_g2

0x6a24,	// (0x0001b3bd) slider_pane_g3_ParamLimits

0x6a24,	// (0x0001b3bd) slider_pane_g3

0x0003,

0xfe1a,	// (0x000247b3) slider_pane_g_ParamLimits

0xfe1a,	// (0x000247b3) slider_pane_g

0xa832,	// (0x0001f1cb) popup_tb_float_extension_window_ParamLimits

0xa832,	// (0x0001f1cb) popup_tb_float_extension_window

0x6a50,	// (0x0001b3e9) aid_size_cell_tb_float_ext

0xb87d,	// (0x00020216) bg_popup_sub_window_cp28

0x6a5c,	// (0x0001b3f5) grid_tb_float_ext_pane

0x6a68,	// (0x0001b401) cell_tb_float_ext_pane_ParamLimits

0x6a68,	// (0x0001b401) cell_tb_float_ext_pane

0x6a84,	// (0x0001b41d) cell_tb_float_ext_pane_g1

0x6a8d,	// (0x0001b426) grid_highlight_pane_cp12

0x8cb7,	// (0x0001d650) cell_last_hwr_side_pane_ParamLimits

0x8cb7,	// (0x0001d650) cell_last_hwr_side_pane

0x425c,	// (0x00018bf5) cell_last_hwr_side_pane_g1

0x6a96,	// (0x0001b42f) cell_last_hwr_side_pane_g2

0x0001,

0xfe23,	// (0x000247bc) cell_last_hwr_side_pane_g

0x9045,	// (0x0001d9de) vkb2_area_bottom_space_btn_pane_ParamLimits

0x9045,	// (0x0001d9de) vkb2_area_bottom_space_btn_pane

0xecae,	// (0x00023647) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x654b,	// (0x0001aee4) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf213,	// (0x00023bac) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf231,	// (0x00023bca) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf231,	// (0x00023bca) vkb2_area_bottom_space_btn_pane_g1

0xf26b,	// (0x00023c04) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf26b,	// (0x00023c04) vkb2_area_bottom_space_btn_pane_g2

0xf2a1,	// (0x00023c3a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf2a1,	// (0x00023c3a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe28,	// (0x000247c1) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe28,	// (0x000247c1) vkb2_area_bottom_space_btn_pane_g

0xeb73,	// (0x0002350c) cel_fep_hwr_func_pane_ParamLimits

0xeb73,	// (0x0002350c) cel_fep_hwr_func_pane

0x8c8c,	// (0x0001d625) cell_hwr_side_button_pane_ParamLimits

0x8c8c,	// (0x0001d625) cell_hwr_side_button_pane

0x5f31,	// (0x0001a8ca) aid_area_touch_clock_ParamLimits

0xba46,	// (0x000203df) bg_uniindi_top_pane_ParamLimits

0x5f45,	// (0x0001a8de) uniindi_top_pane_g1_ParamLimits

0x5f5b,	// (0x0001a8f4) uniindi_top_pane_g2_ParamLimits

0x5f67,	// (0x0001a900) uniindi_top_pane_g3_ParamLimits

0x5f78,	// (0x0001a911) uniindi_top_pane_g4_ParamLimits

0xfd3b,	// (0x000246d4) uniindi_top_pane_g_ParamLimits

0x5f85,	// (0x0001a91e) uniindi_top_pane_t1_ParamLimits

0xba46,	// (0x000203df) bg_vkb2_func_pane_cp01_ParamLimits

0xba46,	// (0x000203df) bg_vkb2_func_pane_cp01

0x6a9f,	// (0x0001b438) cel_fep_hwr_func_pane_g1_ParamLimits

0x6a9f,	// (0x0001b438) cel_fep_hwr_func_pane_g1

0xba46,	// (0x000203df) bg_vkb2_func_pane_cp02_ParamLimits

0xba46,	// (0x000203df) bg_vkb2_func_pane_cp02

0x6a9f,	// (0x0001b438) cell_hwr_side_button_pane_g1_ParamLimits

0x6a9f,	// (0x0001b438) cell_hwr_side_button_pane_g1

0x1575,	// (0x00015f0e) status_pane_g4_ParamLimits

0x1575,	// (0x00015f0e) status_pane_g4

0x158f,	// (0x00015f28) status_pane_t1

0x3ffb,	// (0x00018994) form2_midp_gauge_slider_cont_pane

0x4003,	// (0x0001899c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb4e7,	// (0x0001fe80) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb4f9,	// (0x0001fe92) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00024494) form2_midp_gauge_slider_pane_t_ParamLimits

0x4039,	// (0x000189d2) form2_midp_slider_pane_ParamLimits

0xef03,	// (0x0002389c) aid_size_cell_func_vkb2_ParamLimits

0xef03,	// (0x0002389c) aid_size_cell_func_vkb2

0x6a3c,	// (0x0001b3d5) slider_pane_g4_ParamLimits

0x6a3c,	// (0x0001b3d5) slider_pane_g4

0x90a6,	// (0x0001da3f) form2_midp_gauge_slider_pane_t2_cp01

0x90b4,	// (0x0001da4d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x90b4,	// (0x0001da4d) form2_midp_gauge_slider_pane_t3_cp01

0xf2eb,	// (0x00023c84) form2_midp_slider_pane_cp01

0xb87d,	// (0x00020216) navi_smil_pane

0x6ad8,	// (0x0001b471) navi_smil_pane_g1

0x6ae0,	// (0x0001b479) navi_smil_pane_t1

0x6aad,	// (0x0001b446) form2_midp_slider_pane_g1

0x6ab6,	// (0x0001b44f) form2_midp_slider_pane_g2

0x6abe,	// (0x0001b457) form2_midp_slider_pane_g3

0x6aad,	// (0x0001b446) form2_midp_slider_pane_g4

0xce9d,	// (0x00021836) form2_midp_slider_pane_g5

0x0004,

0xfe31,	// (0x000247ca) form2_midp_slider_pane_g

0xf2db,	// (0x00023c74) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf2db,	// (0x00023c74) vkb2_area_bottom_space_btn_pane_g4

0xaa19,	// (0x0001f3b2) lc0_navi_pane_ParamLimits

0xaa19,	// (0x0001f3b2) lc0_navi_pane

0xaa89,	// (0x0001f422) lc0_stat_indi_pane_ParamLimits

0xaa89,	// (0x0001f422) lc0_stat_indi_pane

0xaa9e,	// (0x0001f437) ls0_title_pane_ParamLimits

0xaa9e,	// (0x0001f437) ls0_title_pane

0xd946,	// (0x000222df) bg_popup_sub_pane_cp14_ParamLimits

0x5f18,	// (0x0001a8b1) list_uniindi_pane_ParamLimits

0x5f24,	// (0x0001a8bd) uniindi_top_pane_ParamLimits

0x5fc3,	// (0x0001a95c) list_single_uniindi_pane_g1_ParamLimits

0x5fd6,	// (0x0001a96f) list_single_uniindi_pane_t1_ParamLimits

0x90d1,	// (0x0001da6a) lc0_stat_clock_pane_ParamLimits

0x90d1,	// (0x0001da6a) lc0_stat_clock_pane

0xcea6,	// (0x0002183f) lc0_stat_indi_pane_g1_ParamLimits

0xcea6,	// (0x0002183f) lc0_stat_indi_pane_g1

0xceb3,	// (0x0002184c) lc0_stat_indi_pane_g2_ParamLimits

0xceb3,	// (0x0002184c) lc0_stat_indi_pane_g2

0x0001,

0xfe3c,	// (0x000247d5) lc0_stat_indi_pane_g_ParamLimits

0xfe3c,	// (0x000247d5) lc0_stat_indi_pane_g

0x90de,	// (0x0001da77) lc0_uni_indicator_pane_ParamLimits

0x90de,	// (0x0001da77) lc0_uni_indicator_pane

0xcec0,	// (0x00021859) ls0_title_pane_g1_ParamLimits

0xcec0,	// (0x00021859) ls0_title_pane_g1

0xced4,	// (0x0002186d) ls0_title_pane_t1_ParamLimits

0xced4,	// (0x0002186d) ls0_title_pane_t1

0x90eb,	// (0x0001da84) lc0_uni_indicator_pane_g1_ParamLimits

0x90eb,	// (0x0001da84) lc0_uni_indicator_pane_g1

0x6b52,	// (0x0001b4eb) lc0_stat_clock_pane_t1

0xb87d,	// (0x00020216) main_ai5_pane

0x6b60,	// (0x0001b4f9) ai5_sk_pane_ParamLimits

0x6b60,	// (0x0001b4f9) ai5_sk_pane

0xcf02,	// (0x0002189b) cell_ai5_widget_pane_ParamLimits

0xcf02,	// (0x0002189b) cell_ai5_widget_pane

0x7109,	// (0x0001baa2) aid_size_cell_widget_grid

0x7117,	// (0x0001bab0) bg_ai5_widget_pane_ParamLimits

0x7117,	// (0x0001bab0) bg_ai5_widget_pane

0x718b,	// (0x0001bb24) cell_ai5_widget_pane_g2

0x719b,	// (0x0001bb34) cell_ai5_widget_pane_g3

0x71b2,	// (0x0001bb4b) cell_ai5_widget_pane_g4

0x71be,	// (0x0001bb57) cell_ai5_widget_pane_g5

0xd259,	// (0x00021bf2) cell_ai5_widget_pane_g6

0xd265,	// (0x00021bfe) cell_ai5_widget_pane_g7

0x721e,	// (0x0001bbb7) cell_ai5_widget_pane_t1_ParamLimits

0x721e,	// (0x0001bbb7) cell_ai5_widget_pane_t1

0x723b,	// (0x0001bbd4) cell_ai5_widget_pane_t2_ParamLimits

0x723b,	// (0x0001bbd4) cell_ai5_widget_pane_t2

0x7253,	// (0x0001bbec) cell_ai5_widget_pane_t3_ParamLimits

0x7253,	// (0x0001bbec) cell_ai5_widget_pane_t3

0x726b,	// (0x0001bc04) cell_ai5_widget_pane_t4_ParamLimits

0x726b,	// (0x0001bc04) cell_ai5_widget_pane_t4

0x7288,	// (0x0001bc21) cell_ai5_widget_pane_t5_ParamLimits

0x7288,	// (0x0001bc21) cell_ai5_widget_pane_t5

0x72a7,	// (0x0001bc40) cell_ai5_widget_pane_t6_ParamLimits

0x72a7,	// (0x0001bc40) cell_ai5_widget_pane_t6

0x72b9,	// (0x0001bc52) cell_ai5_widget_pane_t7_ParamLimits

0x72b9,	// (0x0001bc52) cell_ai5_widget_pane_t7

0x72d2,	// (0x0001bc6b) cell_ai5_widget_pane_t8_ParamLimits

0x72d2,	// (0x0001bc6b) cell_ai5_widget_pane_t8

0x0009,

0xfe56,	// (0x000247ef) cell_ai5_widget_pane_t_ParamLimits

0xfe56,	// (0x000247ef) cell_ai5_widget_pane_t

0x7326,	// (0x0001bcbf) grid_ai5_widget_pane

0xd946,	// (0x000222df) highlight_cell_ai5_widget_pane_ParamLimits

0xd946,	// (0x000222df) highlight_cell_ai5_widget_pane

0xd271,	// (0x00021c0a) ai5_sk_left_pane

0xd27b,	// (0x00021c14) ai5_sk_middle_pane

0xd285,	// (0x00021c1e) ai5_sk_right_pane

0x7358,	// (0x0001bcf1) bg_ai5_widget_pane_g1_ParamLimits

0x7358,	// (0x0001bcf1) bg_ai5_widget_pane_g1

0x7364,	// (0x0001bcfd) bg_ai5_widget_pane_g2_ParamLimits

0x7364,	// (0x0001bcfd) bg_ai5_widget_pane_g2

0x7370,	// (0x0001bd09) bg_ai5_widget_pane_g3_ParamLimits

0x7370,	// (0x0001bd09) bg_ai5_widget_pane_g3

0x737c,	// (0x0001bd15) bg_ai5_widget_pane_g4_ParamLimits

0x737c,	// (0x0001bd15) bg_ai5_widget_pane_g4

0x7388,	// (0x0001bd21) bg_ai5_widget_pane_g5_ParamLimits

0x7388,	// (0x0001bd21) bg_ai5_widget_pane_g5

0x7394,	// (0x0001bd2d) bg_ai5_widget_pane_g6_ParamLimits

0x7394,	// (0x0001bd2d) bg_ai5_widget_pane_g6

0x73a0,	// (0x0001bd39) bg_ai5_widget_pane_g7_ParamLimits

0x73a0,	// (0x0001bd39) bg_ai5_widget_pane_g7

0x73ac,	// (0x0001bd45) bg_ai5_widget_pane_g8_ParamLimits

0x73ac,	// (0x0001bd45) bg_ai5_widget_pane_g8

0x73b8,	// (0x0001bd51) bg_ai5_widget_pane_g9_ParamLimits

0x73b8,	// (0x0001bd51) bg_ai5_widget_pane_g9

0x0008,

0xfe6b,	// (0x00024804) bg_ai5_widget_pane_g_ParamLimits

0xfe6b,	// (0x00024804) bg_ai5_widget_pane_g

0x73ee,	// (0x0001bd87) cell_shortcut_ai5_widget_pane_ParamLimits

0x73ee,	// (0x0001bd87) cell_shortcut_ai5_widget_pane

0x0825,	// (0x000151be) bg_cell_shortcut_ai5_widget_pane

0x7401,	// (0x0001bd9a) cell_grid_ai5_widget_pane_g1

0x0825,	// (0x000151be) highlight_cell_shortcut_ai5_widget_pane

0x172a,	// (0x000160c3) ai5_sk_left_pane_g1

0x740a,	// (0x0001bda3) ai5_sk_left_pane_g2

0x7412,	// (0x0001bdab) ai5_sk_left_pane_g3

0x741a,	// (0x0001bdb3) ai5_sk_left_pane_g4

0x0003,

0xfe7e,	// (0x00024817) ai5_sk_left_pane_g

0x7422,	// (0x0001bdbb) ai5_sk_left_pane_t1

0x1732,	// (0x000160cb) ai5_sk_right_pane_g1

0x7430,	// (0x0001bdc9) ai5_sk_right_pane_g2

0x7438,	// (0x0001bdd1) ai5_sk_right_pane_g3

0x7440,	// (0x0001bdd9) ai5_sk_right_pane_g4

0x0003,

0xfe87,	// (0x00024820) ai5_sk_right_pane_g

0x7448,	// (0x0001bde1) ai5_sk_right_pane_t1

0x1732,	// (0x000160cb) ai5_sk_middle_pane_g1

0x172a,	// (0x000160c3) ai5_sk_middle_pane_g2

0x174a,	// (0x000160e3) ai5_sk_middle_pane_g3

0x7438,	// (0x0001bdd1) ai5_sk_middle_pane_g4

0x7412,	// (0x0001bdab) ai5_sk_middle_pane_g5

0x7456,	// (0x0001bdef) ai5_sk_middle_pane_g6

0xd28f,	// (0x00021c28) ai5_sk_middle_pane_g7

0x0006,

0xfe90,	// (0x00024829) ai5_sk_middle_pane_g

0xa903,	// (0x0001f29c) aid_touch_area_size_lc0_ParamLimits

0xa903,	// (0x0001f29c) aid_touch_area_size_lc0

0xecdd,	// (0x00023676) cell_hwr_candidate_pane_t1_ParamLimits

0x122c,	// (0x00015bc5) aid_touch_navi_pane

0xaba9,	// (0x0001f542) status_dt_navi_pane_ParamLimits

0xaba9,	// (0x0001f542) status_dt_navi_pane

0xabc1,	// (0x0001f55a) status_dt_sta_pane_ParamLimits

0xabc1,	// (0x0001f55a) status_dt_sta_pane

0xd297,	// (0x00021c30) dt_sta_controll_pane

0xd2a4,	// (0x00021c3d) dt_sta_indi_pane

0xd2b1,	// (0x00021c4a) dt_sta_title_pane

0xba46,	// (0x000203df) bg_dt_sta_indi_pane_ParamLimits

0xba46,	// (0x000203df) bg_dt_sta_indi_pane

0xd2c3,	// (0x00021c5c) dt_sta_battery_pane

0xd2cb,	// (0x00021c64) dt_sta_indi_pane_g1

0xd2d4,	// (0x00021c6d) dt_sta_indi_pane_g2

0xd2dd,	// (0x00021c76) dt_sta_indi_pane_g3

0x0002,

0xfe9f,	// (0x00024838) dt_sta_indi_pane_g

0xd2e6,	// (0x00021c7f) dt_sta_signal_pane

0xd946,	// (0x000222df) bg_dt_sta_title_pane_ParamLimits

0xd946,	// (0x000222df) bg_dt_sta_title_pane

0xd2ef,	// (0x00021c88) dt_sta_title_pane_g1

0xd2f7,	// (0x00021c90) dt_sta_title_pane_t1_ParamLimits

0xd2f7,	// (0x00021c90) dt_sta_title_pane_t1

0xb87d,	// (0x00020216) bg_dt_sta_control_pane

0xd30c,	// (0x00021ca5) dt_sta_controll_pane_g1

0xd315,	// (0x00021cae) bg_dt_sta_title_pane_g1

0xd31e,	// (0x00021cb7) bg_dt_sta_title_pane_g2

0xd327,	// (0x00021cc0) bg_dt_sta_title_pane_g3

0x0002,

0xfea6,	// (0x0002483f) bg_dt_sta_title_pane_g

0x425c,	// (0x00018bf5) bg_dt_sta_indi_pane_g1

0x7504,	// (0x0001be9d) dt_sta_signal_pane_g1

0x750c,	// (0x0001bea5) dt_sta_signal_pane_g2

0x0001,

0xfead,	// (0x00024846) dt_sta_signal_pane_g

0x7514,	// (0x0001bead) dt_sta_battery_pane_g1

0x751d,	// (0x0001beb6) dt_sta_battery_pane_t1

0x425c,	// (0x00018bf5) bg_dt_sta_control_pane_g1

0xe088,	// (0x00022a21) fep_china_uni_eep_pane

0xe090,	// (0x00022a29) fep_china_uni_entry_pane_ParamLimits

0xe0a0,	// (0x00022a39) popup_fep_china_uni_window_g1_ParamLimits

0xe0b0,	// (0x00022a49) popup_fep_china_uni_window_g2_ParamLimits

0xe0b0,	// (0x00022a49) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x000240b1) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x000240b1) popup_fep_china_uni_window_g

0x752c,	// (0x0001bec5) fep_china_uni_eep_pane_g1

0x7534,	// (0x0001becd) fep_china_uni_eep_pane_t1

0x6acf,	// (0x0001b468) aid_touch_area_size_smil_player

0x1384,	// (0x00015d1d) lc0_clock_pane

0x1583,	// (0x00015f1c) status_pane_g5_ParamLimits

0x1583,	// (0x00015f1c) status_pane_g5

0xa358,	// (0x0001ecf1) popup_keymap_window

0x1541,	// (0x00015eda) status_icon_pane

0x719b,	// (0x0001bb34) cell_ai5_widget_pane_g3_ParamLimits

0x71b2,	// (0x0001bb4b) cell_ai5_widget_pane_g4_ParamLimits

0x71be,	// (0x0001bb57) cell_ai5_widget_pane_g5_ParamLimits

0x71e2,	// (0x0001bb7b) cell_ai5_widget_pane_g8_ParamLimits

0x71e2,	// (0x0001bb7b) cell_ai5_widget_pane_g8

0x71f6,	// (0x0001bb8f) cell_ai5_widget_pane_g9_ParamLimits

0x71f6,	// (0x0001bb8f) cell_ai5_widget_pane_g9

0x720a,	// (0x0001bba3) cell_ai5_widget_pane_g10_ParamLimits

0x720a,	// (0x0001bba3) cell_ai5_widget_pane_g10

0x7543,	// (0x0001bedc) status_icon_pane_g1

0xb87d,	// (0x00020216) bg_popup_sub_pane_cp13

0x754b,	// (0x0001bee4) popup_keymap_window_t1

0xa136,	// (0x0001eacf) control_pane_g6_ParamLimits

0xa136,	// (0x0001eacf) control_pane_g6

0xa143,	// (0x0001eadc) control_pane_g7_ParamLimits

0xa143,	// (0x0001eadc) control_pane_g7

0xa150,	// (0x0001eae9) control_pane_g8_ParamLimits

0xa150,	// (0x0001eae9) control_pane_g8

0xd297,	// (0x00021c30) dt_sta_controll_pane_ParamLimits

0xd2a4,	// (0x00021c3d) dt_sta_indi_pane_ParamLimits

0xd2b1,	// (0x00021c4a) dt_sta_title_pane_ParamLimits

0xbe6a,	// (0x00020803) aid_size_touch_scroll_bar_cale

0xd798,	// (0x00022131) popup_discreet_window_ParamLimits

0xd798,	// (0x00022131) popup_discreet_window

0x8865,	// (0x0001d1fe) popup_sk_window

0x1e53,	// (0x000167ec) bg_popup_sub_pane_cp28_ParamLimits

0x1e53,	// (0x000167ec) bg_popup_sub_pane_cp28

0x7559,	// (0x0001bef2) popup_discreet_window_g1_ParamLimits

0x7559,	// (0x0001bef2) popup_discreet_window_g1

0x7579,	// (0x0001bf12) popup_discreet_window_t1_ParamLimits

0x7579,	// (0x0001bf12) popup_discreet_window_t1

0x7597,	// (0x0001bf30) popup_discreet_window_t2_ParamLimits

0x7597,	// (0x0001bf30) popup_discreet_window_t2

0x0002,

0xfeb2,	// (0x0002484b) popup_discreet_window_t_ParamLimits

0xfeb2,	// (0x0002484b) popup_discreet_window_t

0xf2f4,	// (0x00023c8d) popup_sk_window_g1

0xf2fe,	// (0x00023c97) popup_sk_window_g2

0x0001,

0xfeb9,	// (0x00024852) popup_sk_window_g

0xf308,	// (0x00023ca1) popup_sk_window_t1

0xf318,	// (0x00023cb1) popup_sk_window_t1_copy1

0x718b,	// (0x0001bb24) cell_ai5_widget_pane_g2_ParamLimits

0x72e4,	// (0x0001bc7d) cell_ai5_widget_pane_t9_ParamLimits

0x72e4,	// (0x0001bc7d) cell_ai5_widget_pane_t9

0xb87d,	// (0x00020216) main_fep_fshwr2_pane

0x910a,	// (0x0001daa3) aid_fshwr2_btn_pane

0x911b,	// (0x0001dab4) aid_fshwr2_syb_pane

0x912c,	// (0x0001dac5) aid_fshwr2_txt_pane

0x9138,	// (0x0001dad1) fshwr2_func_candi_pane

0x9159,	// (0x0001daf2) fshwr2_hwr_syb_pane

0x9176,	// (0x0001db0f) fshwr2_icf_pane

0xd6bb,	// (0x00022054) fshwr2_icf_bg_pane

0xf334,	// (0x00023ccd) fshwr2_icf_pane_t1_ParamLimits

0xf334,	// (0x00023ccd) fshwr2_icf_pane_t1

0xe006,	// (0x0002299f) fshwr2_func_candi_pane_g1

0xd330,	// (0x00021cc9) fshwr2_func_candi_row_pane_ParamLimits

0xd330,	// (0x00021cc9) fshwr2_func_candi_row_pane

0x91a2,	// (0x0001db3b) cell_fshwr2_syb_pane_ParamLimits

0x91a2,	// (0x0001db3b) cell_fshwr2_syb_pane

0xecae,	// (0x00023647) fshwr2_hwr_syb_pane_g1_ParamLimits

0xecae,	// (0x00023647) fshwr2_hwr_syb_pane_g1

0xd6bb,	// (0x00022054) bg_popup_call_pane_cp01

0x91b8,	// (0x0001db51) fshwr2_func_candi_cell_pane_ParamLimits

0x91b8,	// (0x0001db51) fshwr2_func_candi_cell_pane

0xd340,	// (0x00021cd9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd340,	// (0x00021cd9) fshwr2_func_candi_cell_bg_pane

0x91e8,	// (0x0001db81) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x91e8,	// (0x0001db81) fshwr2_func_candi_cell_pane_g1

0x9217,	// (0x0001dbb0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9217,	// (0x0001dbb0) fshwr2_func_candi_cell_pane_t1

0xd6bb,	// (0x00022054) bg_button_pane_cp08

0x7605,	// (0x0001bf9e) cell_fshwr2_syb_bg_pane

0x922a,	// (0x0001dbc3) cell_fshwr2_syb_bg_pane_g1

0x9232,	// (0x0001dbcb) cell_fshwr2_syb_bg_pane_t1

0xd946,	// (0x000222df) main_tmo_pane

0xaf91,	// (0x0001f92a) uni_indicator_pane_g1_ParamLimits

0xafa7,	// (0x0001f940) uni_indicator_pane_g2_ParamLimits

0xafbd,	// (0x0001f956) uni_indicator_pane_g3_ParamLimits

0xafd2,	// (0x0001f96b) uni_indicator_pane_g4_ParamLimits

0xafd2,	// (0x0001f96b) uni_indicator_pane_g4

0x29cc,	// (0x00017365) uni_indicator_pane_g5_ParamLimits

0x29cc,	// (0x00017365) uni_indicator_pane_g5

0x29cc,	// (0x00017365) uni_indicator_pane_g6_ParamLimits

0x29cc,	// (0x00017365) uni_indicator_pane_g6

0xf917,	// (0x000242b0) uni_indicator_pane_g_ParamLimits

0xc37c,	// (0x00020d15) popup_tmo_note_window_ParamLimits

0xc37c,	// (0x00020d15) popup_tmo_note_window

0xf326,	// (0x00023cbf) fshwr2_bg_pane

0x9208,	// (0x0001dba1) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9208,	// (0x0001dba1) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebe,	// (0x00024857) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebe,	// (0x00024857) fshwr2_func_candi_cell_pane_g

0xec96,	// (0x0002362f) bg_popup_window_pane_cp01

0xf34c,	// (0x00023ce5) bg_popup_window_pane_g1_cp01

0x760d,	// (0x0001bfa6) bg_popup_window_pane_cp22_ParamLimits

0x760d,	// (0x0001bfa6) bg_popup_window_pane_cp22

0x761b,	// (0x0001bfb4) listscroll_tmo_link_pane_ParamLimits

0x761b,	// (0x0001bfb4) listscroll_tmo_link_pane

0x765b,	// (0x0001bff4) popup_tmo_note_window_g1_ParamLimits

0x765b,	// (0x0001bff4) popup_tmo_note_window_g1

0x7668,	// (0x0001c001) tmo_note_info_pane_ParamLimits

0x7668,	// (0x0001c001) tmo_note_info_pane

0xd34c,	// (0x00021ce5) list_tmo_note_info_pane_g1_ParamLimits

0xd34c,	// (0x00021ce5) list_tmo_note_info_pane_g1

0x7699,	// (0x0001c032) list_tmo_note_info_pane_g2_ParamLimits

0x7699,	// (0x0001c032) list_tmo_note_info_pane_g2

0x0001,

0xfec3,	// (0x0002485c) list_tmo_note_info_pane_g_ParamLimits

0xfec3,	// (0x0002485c) list_tmo_note_info_pane_g

0x76b5,	// (0x0001c04e) list_tmo_note_info_text_pane_ParamLimits

0x76b5,	// (0x0001c04e) list_tmo_note_info_text_pane

0x773a,	// (0x0001c0d3) list_tmo_link_pane

0x7747,	// (0x0001c0e0) scroll_pane_cp20

0x7754,	// (0x0001c0ed) list_single_tmo_link_pane_ParamLimits

0x7754,	// (0x0001c0ed) list_single_tmo_link_pane

0x7764,	// (0x0001c0fd) list_single_tmo_link_pane_t1

0x7772,	// (0x0001c10b) list_tmo_note_info_text_pane_t1_ParamLimits

0x7772,	// (0x0001c10b) list_tmo_note_info_text_pane_t1

0x9bd8,	// (0x0001e571) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9bd8,	// (0x0001e571) aid_size_touch_scroll_bar_cp01

0x9b07,	// (0x0001e4a0) aid_size_touch_slider_marker

0x8855,	// (0x0001d1ee) popup_settings_window_ParamLimits

0x8855,	// (0x0001d1ee) popup_settings_window

0x0bd3,	// (0x0001556c) popup_candi_list_indi_window

0x122c,	// (0x00015bc5) aid_touch_navi_pane_ParamLimits

0xee7d,	// (0x00023816) rs_clock_indi_pane

0xee86,	// (0x0002381f) sctrl_sk_bottom_pane_ParamLimits

0xee97,	// (0x00023830) sctrl_sk_top_pane_ParamLimits

0xef2b,	// (0x000238c4) popup_fep_tooltip_window

0x7109,	// (0x0001baa2) aid_size_cell_widget_grid_ParamLimits

0x7176,	// (0x0001bb0f) cell_ai5_widget_pane_g1_ParamLimits

0x7176,	// (0x0001bb0f) cell_ai5_widget_pane_g1

0xd259,	// (0x00021bf2) cell_ai5_widget_pane_g6_ParamLimits

0xd265,	// (0x00021bfe) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe41,	// (0x000247da) cell_ai5_widget_pane_g_ParamLimits

0xfe41,	// (0x000247da) cell_ai5_widget_pane_g

0x7308,	// (0x0001bca1) cell_ai5_widget_pane_t10_ParamLimits

0x7308,	// (0x0001bca1) cell_ai5_widget_pane_t10

0x7326,	// (0x0001bcbf) grid_ai5_widget_pane_ParamLimits

0x73c4,	// (0x0001bd5d) cell_contacts_ai5_widget_pane_ParamLimits

0x73c4,	// (0x0001bd5d) cell_contacts_ai5_widget_pane

0x75ac,	// (0x0001bf45) popup_discreet_window_t3_ParamLimits

0x75ac,	// (0x0001bf45) popup_discreet_window_t3

0x918e,	// (0x0001db27) popup_fshwr2_char_preview_window_ParamLimits

0x918e,	// (0x0001db27) popup_fshwr2_char_preview_window

0xd363,	// (0x00021cfc) tmo_note_info_pane_t1

0xd378,	// (0x00021d11) tmo_note_info_pane_t2

0xd391,	// (0x00021d2a) tmo_note_info_pane_t3

0x7716,	// (0x0001c0af) tmo_note_info_pane_t4

0x7728,	// (0x0001c0c1) tmo_note_info_pane_t5

0x0004,

0xfec8,	// (0x00024861) tmo_note_info_pane_t

0x773a,	// (0x0001c0d3) list_tmo_link_pane_ParamLimits

0x7747,	// (0x0001c0e0) scroll_pane_cp20_ParamLimits

0xd6bb,	// (0x00022054) bg_popup_fep_char_preview_window_cp01

0x778b,	// (0x0001c124) popup_fshwr2_char_preview_window_t1

0x7799,	// (0x0001c132) popup_candi_list_indi_window_g1

0x77a2,	// (0x0001c13b) bg_cell_contacts_ai5_widget_pane

0x77ae,	// (0x0001c147) cell_contacts_ai5_widget_pane_g1

0x77c3,	// (0x0001c15c) cell_contacts_ai5_widget_pane_g2

0x77cf,	// (0x0001c168) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed3,	// (0x0002486c) cell_contacts_ai5_widget_pane_g

0x77db,	// (0x0001c174) cell_contacts_ai5_widget_pane_t1

0xd946,	// (0x000222df) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd40b,	// (0x00021da4) settings_container_pane

0x0825,	// (0x000151be) listscroll_set_pane_copy1

0x3651,	// (0x00017fea) scroll_pane_cp121_copy1

0x785e,	// (0x0001c1f7) set_content_pane_copy1

0xd417,	// (0x00021db0) aid_height_set_list_copy1_ParamLimits

0xd417,	// (0x00021db0) aid_height_set_list_copy1

0x2bf4,	// (0x0001758d) aid_size_parent_copy1_ParamLimits

0x2bf4,	// (0x0001758d) aid_size_parent_copy1

0xd423,	// (0x00021dbc) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd423,	// (0x00021dbc) button_value_adjust_pane_cp6_copy1

0x0bab,	// (0x00015544) list_highlight_pane_cp2_copy1_ParamLimits

0x0bab,	// (0x00015544) list_highlight_pane_cp2_copy1

0xd437,	// (0x00021dd0) list_set_pane_copy1_ParamLimits

0xd437,	// (0x00021dd0) list_set_pane_copy1

0xd3a6,	// (0x00021d3f) main_pane_set_t1_copy1_ParamLimits

0xd3a6,	// (0x00021d3f) main_pane_set_t1_copy1

0xd3e0,	// (0x00021d79) main_pane_set_t2_copy1_ParamLimits

0xd3e0,	// (0x00021d79) main_pane_set_t2_copy1

0xd4fe,	// (0x00021e97) main_pane_set_t3_copy1

0xd50c,	// (0x00021ea5) main_pane_set_t4_copy1

0xd3ff,	// (0x00021d98) set_content_pane_g1_copy1_ParamLimits

0xd3ff,	// (0x00021d98) set_content_pane_g1_copy1

0xd51a,	// (0x00021eb3) setting_code_pane_copy1

0x7971,	// (0x0001c30a) setting_slider_graphic_pane_copy1

0x7971,	// (0x0001c30a) setting_slider_pane_copy1

0x7971,	// (0x0001c30a) setting_text_pane_copy1

0x7971,	// (0x0001c30a) setting_volume_pane_copy1

0xd51a,	// (0x00021eb3) settings_code_pane_cp2_copy1

0xd522,	// (0x00021ebb) settings_code_pane_cp_copy1_ParamLimits

0xd522,	// (0x00021ebb) settings_code_pane_cp_copy1

0x9241,	// (0x0001dbda) volume_set_pane_copy1

0xd536,	// (0x00021ecf) volume_set_pane_g10_copy1

0xd542,	// (0x00021edb) volume_set_pane_g1_copy1

0xd54c,	// (0x00021ee5) volume_set_pane_g2_copy1

0xd556,	// (0x00021eef) volume_set_pane_g3_copy1

0xd560,	// (0x00021ef9) volume_set_pane_g4_copy1

0xd56a,	// (0x00021f03) volume_set_pane_g5_copy1

0xd574,	// (0x00021f0d) volume_set_pane_g6_copy1

0xd57e,	// (0x00021f17) volume_set_pane_g7_copy1

0xd588,	// (0x00021f21) volume_set_pane_g8_copy1

0xd592,	// (0x00021f2b) volume_set_pane_g9_copy1

0xb8f9,	// (0x00020292) bg_set_opt_pane_cp_copy1_ParamLimits

0xb8f9,	// (0x00020292) bg_set_opt_pane_cp_copy1

0xf355,	// (0x00023cee) setting_slider_pane_t1_copy1_ParamLimits

0xf355,	// (0x00023cee) setting_slider_pane_t1_copy1

0x924d,	// (0x0001dbe6) setting_slider_pane_t2_copy1_ParamLimits

0x924d,	// (0x0001dbe6) setting_slider_pane_t2_copy1

0x9267,	// (0x0001dc00) setting_slider_pane_t3_copy1_ParamLimits

0x9267,	// (0x0001dc00) setting_slider_pane_t3_copy1

0x927f,	// (0x0001dc18) slider_set_pane_copy1_ParamLimits

0x927f,	// (0x0001dc18) slider_set_pane_copy1

0xda0f,	// (0x000223a8) set_opt_bg_pane_g1_copy2

0xda17,	// (0x000223b0) set_opt_bg_pane_g2_copy2

0x79f3,	// (0x0001c38c) set_opt_bg_pane_g3_copy2

0xda27,	// (0x000223c0) set_opt_bg_pane_g4_copy2

0xda2f,	// (0x000223c8) set_opt_bg_pane_g5_copy2

0xda37,	// (0x000223d0) set_opt_bg_pane_g6_copy2

0xd59c,	// (0x00021f35) set_opt_bg_pane_g7_copy2

0x7a07,	// (0x0001c3a0) set_opt_bg_pane_g8_copy2

0x7a11,	// (0x0001c3aa) set_opt_bg_pane_g9_copy2

0xf373,	// (0x00023d0c) aid_size_touch_slider_mark_copy1_ParamLimits

0xf373,	// (0x00023d0c) aid_size_touch_slider_mark_copy1

0x7a1b,	// (0x0001c3b4) slider_set_pane_g1_copy1

0xf387,	// (0x00023d20) slider_set_pane_g2_copy1

0xe8eb,	// (0x00023284) slider_set_pane_g3_copy1_ParamLimits

0xe8eb,	// (0x00023284) slider_set_pane_g3_copy1

0xe8ff,	// (0x00023298) slider_set_pane_g4_copy1_ParamLimits

0xe8ff,	// (0x00023298) slider_set_pane_g4_copy1

0xe917,	// (0x000232b0) slider_set_pane_g5_copy1_ParamLimits

0xe917,	// (0x000232b0) slider_set_pane_g5_copy1

0xe8eb,	// (0x00023284) slider_set_pane_g6_copy1_ParamLimits

0xe8eb,	// (0x00023284) slider_set_pane_g6_copy1

0x9295,	// (0x0001dc2e) slider_set_pane_g7_copy1_ParamLimits

0x9295,	// (0x0001dc2e) slider_set_pane_g7_copy1

0xb891,	// (0x0002022a) bg_set_opt_pane_cp2_copy1

0x7a24,	// (0x0001c3bd) setting_slider_graphic_pane_g1_copy1

0xd5a6,	// (0x00021f3f) setting_slider_graphic_pane_t1_copy1

0xd5b6,	// (0x00021f4f) setting_slider_graphic_pane_t2_copy1

0xd5c6,	// (0x00021f5f) slider_set_pane_cp_copy1

0x7a5d,	// (0x0001c3f6) input_focus_pane_cp1_copy1

0x7a66,	// (0x0001c3ff) list_set_text_pane_copy1

0x7a6e,	// (0x0001c407) setting_text_pane_g1_copy1

0xb91e,	// (0x000202b7) set_text_pane_t1_copy1

0x7a5d,	// (0x0001c3f6) input_focus_pane_cp2_copy1

0x7a6e,	// (0x0001c407) setting_code_pane_g1_copy1

0xd5ce,	// (0x00021f67) setting_code_pane_t1_copy1

0xd5dc,	// (0x00021f75) list_set_graphic_pane_copy1

0xb891,	// (0x0002022a) bg_set_opt_pane_cp4_copy1

0x9f1d,	// (0x0001e8b6) list_set_graphic_pane_g1_copy1_ParamLimits

0x9f1d,	// (0x0001e8b6) list_set_graphic_pane_g1_copy1

0xd5ee,	// (0x00021f87) list_set_graphic_pane_g2_copy1

0x9f35,	// (0x0001e8ce) list_set_graphic_pane_t1_copy1_ParamLimits

0x9f35,	// (0x0001e8ce) list_set_graphic_pane_t1_copy1

0x425c,	// (0x00018bf5) rs_clock_indi_pane_g1

0x7ab8,	// (0x0001c451) rs_clock_indi_pane_t1

0x7ac6,	// (0x0001c45f) rs_indi_pane

0x7ace,	// (0x0001c467) rs_indi_pane_g1

0x7ad7,	// (0x0001c470) rs_indi_pane_g2

0x7ae0,	// (0x0001c479) rs_indi_pane_g3

0x0002,

0xfeda,	// (0x00024873) rs_indi_pane_g

0x0825,	// (0x000151be) bg_popup_preview_window_pane_cp03

0x7ae9,	// (0x0001c482) popup_fep_tooltip_window_t1

0x5123,	// (0x00019abc) popup_note2_window_g2_ParamLimits

0x5123,	// (0x00019abc) popup_note2_window_g2

0x0001,

0xfc73,	// (0x0002460c) popup_note2_window_g_ParamLimits

0xfc73,	// (0x0002460c) popup_note2_window_g

0x571a,	// (0x0001a0b3) bg_popup_sub_pane_cp11_ParamLimits

0x5727,	// (0x0001a0c0) cell_ai3_links_pane_g1_ParamLimits

0x575f,	// (0x0001a0f8) cell_ai3_links_pane_t1

0xb91e,	// (0x000202b7) set_text_pane_t1_copy1_ParamLimits

0x9fb4,	// (0x0001e94d) cell_graphic_popup_pane_cp2_ParamLimits

0x9fb4,	// (0x0001e94d) cell_graphic_popup_pane_cp2

0xd5f6,	// (0x00021f8f) cell_graphic_popup_pane_g1_cp2

0xbc7d,	// (0x00020616) cell_graphic_popup_pane_g2_cp2

0x7aff,	// (0x0001c498) cell_graphic_popup_pane_g3_cp2

0x7b07,	// (0x0001c4a0) cell_graphic_popup_pane_t2_cp2

0xbc8e,	// (0x00020627) grid_highlight_pane_cp3_cp2

0xde28,	// (0x000227c1) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd946,	// (0x000222df) main_tmo_pane_ParamLimits

0xc370,	// (0x00020d09) popup_tmo_big_image_note_window

0x7165,	// (0x0001bafe) cell_ai5_widget_list_pane

0x716d,	// (0x0001bb06) cell_ai5_widget_lrg_icon_pane

0xd363,	// (0x00021cfc) tmo_note_info_pane_t1_ParamLimits

0xd378,	// (0x00021d11) tmo_note_info_pane_t2_ParamLimits

0xd391,	// (0x00021d2a) tmo_note_info_pane_t3_ParamLimits

0x7716,	// (0x0001c0af) tmo_note_info_pane_t4_ParamLimits

0x7728,	// (0x0001c0c1) tmo_note_info_pane_t5_ParamLimits

0xfec8,	// (0x00024861) tmo_note_info_pane_t_ParamLimits

0xd40b,	// (0x00021da4) settings_container_pane_ParamLimits

0x7a55,	// (0x0001c3ee) indicator_popup_pane_cp5

0x7a55,	// (0x0001c3ee) indicator_popup_pane_cp6

0xd5dc,	// (0x00021f75) list_set_graphic_pane_copy1_ParamLimits

0xb87d,	// (0x00020216) bg_popup_window_pane_cp23

0x7b15,	// (0x0001c4ae) popup_tmo_big_image_note_window_g1

0x7b21,	// (0x0001c4ba) popup_tmo_big_image_note_window_t1

0x7b31,	// (0x0001c4ca) popup_tmo_big_image_note_window_t2

0x7b41,	// (0x0001c4da) popup_tmo_big_image_note_window_t3

0x0002,

0xfee1,	// (0x0002487a) popup_tmo_big_image_note_window_t

0x425c,	// (0x00018bf5) cell_ai5_widget_lrg_icon_pane_g1

0x7b51,	// (0x0001c4ea) cell_ai5_widget_lrg_icon_pane_t1

0x7b5f,	// (0x0001c4f8) cell_ai5_widget_list_row_pane_ParamLimits

0x7b5f,	// (0x0001c4f8) cell_ai5_widget_list_row_pane

0x7b77,	// (0x0001c510) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7b77,	// (0x0001c510) cell_ai5_widget_list_row_pane_g1

0x7b84,	// (0x0001c51d) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7b84,	// (0x0001c51d) cell_ai5_widget_list_row_pane_t1

0x7baf,	// (0x0001c548) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7baf,	// (0x0001c548) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee8,	// (0x00024881) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee8,	// (0x00024881) cell_ai5_widget_list_row_pane_t

0xd6bb,	// (0x00022054) main_fep_vtchi_ss_pane

0xf3ab,	// (0x00023d44) popup_fep_char_pre_window

0xf3b3,	// (0x00023d4c) popup_fep_ituss_window

0xf3d4,	// (0x00023d6d) popup_fep_vkbss_window

0x7bd7,	// (0x0001c570) grid_vkbss_keypad_pane_ParamLimits

0x7bd7,	// (0x0001c570) grid_vkbss_keypad_pane

0x7be7,	// (0x0001c580) ituss_keypad_pane

0xf402,	// (0x00023d9b) aid_vkbss_key_offset_ParamLimits

0xf402,	// (0x00023d9b) aid_vkbss_key_offset

0xf40e,	// (0x00023da7) cell_vkbss_key_pane_ParamLimits

0xf40e,	// (0x00023da7) cell_vkbss_key_pane

0x7bf6,	// (0x0001c58f) bg_cell_vkbss_key_g1_ParamLimits

0x7bf6,	// (0x0001c58f) bg_cell_vkbss_key_g1

0x7c02,	// (0x0001c59b) cell_vkbss_key_3p_pane_ParamLimits

0x7c02,	// (0x0001c59b) cell_vkbss_key_3p_pane

0x7c1c,	// (0x0001c5b5) cell_vkbss_key_g1_ParamLimits

0x7c1c,	// (0x0001c5b5) cell_vkbss_key_g1

0x7c36,	// (0x0001c5cf) cell_vkbss_key_t1_ParamLimits

0x7c36,	// (0x0001c5cf) cell_vkbss_key_t1

0xf424,	// (0x00023dbd) cell_ituss_key_pane_ParamLimits

0xf424,	// (0x00023dbd) cell_ituss_key_pane

0x7c61,	// (0x0001c5fa) bg_cell_ituss_key_g1_ParamLimits

0x7c61,	// (0x0001c5fa) bg_cell_ituss_key_g1

0x7c6d,	// (0x0001c606) cell_ituss_key_pane_g1_ParamLimits

0x7c6d,	// (0x0001c606) cell_ituss_key_pane_g1

0xf435,	// (0x00023dce) cell_ituss_key_pane_g2_ParamLimits

0xf435,	// (0x00023dce) cell_ituss_key_pane_g2

0x0002,

0xfeef,	// (0x00024888) cell_ituss_key_pane_g_ParamLimits

0xfeef,	// (0x00024888) cell_ituss_key_pane_g

0xf461,	// (0x00023dfa) cell_ituss_key_t1_ParamLimits

0xf461,	// (0x00023dfa) cell_ituss_key_t1

0xf49b,	// (0x00023e34) cell_ituss_key_t2_ParamLimits

0xf49b,	// (0x00023e34) cell_ituss_key_t2

0xf4cc,	// (0x00023e65) cell_ituss_key_t3_ParamLimits

0xf4cc,	// (0x00023e65) cell_ituss_key_t3

0xf49b,	// (0x00023e34) cell_ituss_key_t4_ParamLimits

0xf49b,	// (0x00023e34) cell_ituss_key_t4

0x0004,

0xfef6,	// (0x0002488f) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0002488f) cell_ituss_key_t

0x7c93,	// (0x0001c62c) cell_vkbss_key_3p_pane_g1

0x7c9b,	// (0x0001c634) cell_vkbss_key_3p_pane_g2

0x7ca3,	// (0x0001c63c) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x0002489a) cell_vkbss_key_3p_pane_g

0xd6bb,	// (0x00022054) bg_popup_fep_char_preview_window_cp02

0xf50f,	// (0x00023ea8) popup_fep_char_pre_window_t1

0xd24f,	// (0x00021be8) main_ai5_sk_pane

0x77a2,	// (0x0001c13b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x77ae,	// (0x0001c147) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x77c3,	// (0x0001c15c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x77cf,	// (0x0001c168) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed3,	// (0x0002486c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x77db,	// (0x0001c174) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd946,	// (0x000222df) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xd5fe,	// (0x00021f97) main_ai5_sk_pane_g1

0x1c8b,	// (0x00016624) popup_query_code_window_g1

0xf3c9,	// (0x00023d62) popup_fep_vkb_icf_pane

0xf3df,	// (0x00023d78) popup_fep_vtchi_icf_pane

0x7cb4,	// (0x0001c64d) bg_icf_pane

0x7cc0,	// (0x0001c659) list_vkb_icf_pane

0x7ccc,	// (0x0001c665) bg_icf_pane_cp01

0x7cd8,	// (0x0001c671) vtchi_icf_list_pane

0x7ce9,	// (0x0001c682) list_vkb_icf_pane_t1_ParamLimits

0x7ce9,	// (0x0001c682) list_vkb_icf_pane_t1

0x7cff,	// (0x0001c698) vtchi_icf_list_pane_t1_ParamLimits

0x7cff,	// (0x0001c698) vtchi_icf_list_pane_t1

0xf3b3,	// (0x00023d4c) popup_fep_ituss_window_ParamLimits

0xf3df,	// (0x00023d78) popup_fep_vtchi_icf_pane_ParamLimits

0x7be7,	// (0x0001c580) ituss_keypad_pane_ParamLimits

0xf3f6,	// (0x00023d8f) ituss_sks_pane

0x7cb4,	// (0x0001c64d) bg_icf_pane_ParamLimits

0xf38f,	// (0x00023d28) icf_edit_indi_pane_ParamLimits

0xf38f,	// (0x00023d28) icf_edit_indi_pane

0x7cc0,	// (0x0001c659) list_vkb_icf_pane_ParamLimits

0x7ccc,	// (0x0001c665) bg_icf_pane_cp01_ParamLimits

0xf39e,	// (0x00023d37) icf_edit_indi_pane_cp01_ParamLimits

0xf39e,	// (0x00023d37) icf_edit_indi_pane_cp01

0x7ce0,	// (0x0001c679) vtchi_query_pane

0xecae,	// (0x00023647) icf_edit_indi_pane_g1_ParamLimits

0xecae,	// (0x00023647) icf_edit_indi_pane_g1

0xf531,	// (0x00023eca) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x00023eca) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x000248b2) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x000248b2) icf_edit_indi_pane_g

0xf540,	// (0x00023ed9) icf_edit_indi_pane_t1

0x7d17,	// (0x0001c6b0) bg_input_focus_pane_cp042

0xbe61,	// (0x000207fa) vtchi_button_pane

0x7d20,	// (0x0001c6b9) vtchi_query_pane_t1

0x7d2e,	// (0x0001c6c7) vtchi_query_pane_t2

0x7d3c,	// (0x0001c6d5) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x000248a1) vtchi_query_pane_t

0xd6bb,	// (0x00022054) bg_button_pane_cp13

0x7d4a,	// (0x0001c6e3) vtchi_button_pane_g1

0xf51e,	// (0x00023eb7) ituss_sks_pane_g1

0xf529,	// (0x00023ec2) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x000248a8) ituss_sks_pane_g

0x7d52,	// (0x0001c6eb) ituss_sks_pane_t1

0x7d60,	// (0x0001c6f9) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x000248ad) ituss_sks_pane_t

0x3cb6,	// (0x0001864f) indicator_nsta_pane_cp_g1

0x3cbf,	// (0x00018658) indicator_nsta_pane_cp_g2

0x3cc7,	// (0x00018660) indicator_nsta_pane_cp_g3

0x3ccf,	// (0x00018668) indicator_nsta_pane_cp_g4

0x3cd7,	// (0x00018670) indicator_nsta_pane_cp_g5

0x3cdf,	// (0x00018678) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x0002444a) indicator_nsta_pane_cp_g

0xcd72,	// (0x0002170b) cell_graphic2_pane_t2_ParamLimits

0xcd72,	// (0x0002170b) cell_graphic2_pane_t2

0x0001,

0xfdca,	// (0x00024763) cell_graphic2_pane_t_ParamLimits

0xfdca,	// (0x00024763) cell_graphic2_pane_t

0xcda8,	// (0x00021741) cell_graphic2_control_pane_t1

0x9e18,	// (0x0001e7b1) signal_pane_g3_ParamLimits

0x9e18,	// (0x0001e7b1) signal_pane_g3

0x9e2c,	// (0x0001e7c5) signal_pane_g4_ParamLimits

0x9e2c,	// (0x0001e7c5) signal_pane_g4

0x7bc1,	// (0x0001c55a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7bc1,	// (0x0001c55a) cell_ai5_widget_list_row_pane_t3

0x7c81,	// (0x0001c61a) cell_ituss_key_pane_t1_ParamLimits

0x7c81,	// (0x0001c61a) cell_ituss_key_pane_t1

0x18d9,	// (0x00016272) form_field_data_wide_pane_vc_t2_ParamLimits

0x18d9,	// (0x00016272) form_field_data_wide_pane_vc_t2

0x18ed,	// (0x00016286) form_field_data_wide_pane_vc_t3_ParamLimits

0x18ed,	// (0x00016286) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x00024198) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x00024198) form_field_data_wide_pane_vc_t

0x3967,	// (0x00018300) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3967,	// (0x00018300) form_field_slider_wide_pane_vc_t3

0x3a3d,	// (0x000183d6) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3a3d,	// (0x000183d6) form_field_popup_wide_pane_vc_t2

0x3a54,	// (0x000183ed) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3a54,	// (0x000183ed) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00024439) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00024439) form_field_popup_wide_pane_vc_t

0x910a,	// (0x0001daa3) aid_fshwr2_btn_pane_ParamLimits

0x911b,	// (0x0001dab4) aid_fshwr2_syb_pane_ParamLimits

0x912c,	// (0x0001dac5) aid_fshwr2_txt_pane_ParamLimits

0xf326,	// (0x00023cbf) fshwr2_bg_pane_ParamLimits

0x9138,	// (0x0001dad1) fshwr2_func_candi_pane_ParamLimits

0x9159,	// (0x0001daf2) fshwr2_hwr_syb_pane_ParamLimits

0x9176,	// (0x0001db0f) fshwr2_icf_pane_ParamLimits

0x38db,	// (0x00018274) list_double_graphic_pane_vc_g4_ParamLimits

0x38db,	// (0x00018274) list_double_graphic_pane_vc_g4

0xf455,	// (0x00023dee) cell_ituss_key_pane_g3_ParamLimits

0xf455,	// (0x00023dee) cell_ituss_key_pane_g3

0xf4fd,	// (0x00023e96) cell_ituss_key_t5_ParamLimits

0xf4fd,	// (0x00023e96) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal

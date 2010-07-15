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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0003a3cb };

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
0x79e8,	// (0x00041db3) Screen

0x79f2,	// (0x00041dbd) application_window_ParamLimits

0x79f2,	// (0x00041dbd) application_window

0xacd1,	// (0x0004509c) screen_g1

0x7a20,	// (0x00041deb) area_bottom_pane_ParamLimits

0x7a20,	// (0x00041deb) area_bottom_pane

0xacdb,	// (0x000450a6) area_top_pane_ParamLimits

0xacdb,	// (0x000450a6) area_top_pane

0x4716,	// (0x0003eae1) main_pane_ParamLimits

0x4716,	// (0x0003eae1) main_pane

0xad53,	// (0x0004511e) misc_graphics

0x8c30,	// (0x00042ffb) battery_pane_ParamLimits

0x8c30,	// (0x00042ffb) battery_pane

0xcd58,	// (0x00047123) bg_status_flat_pane_g8

0xcd60,	// (0x0004712b) bg_status_flat_pane_g9

0xc4a7,	// (0x00046872) context_pane_ParamLimits

0xc4a7,	// (0x00046872) context_pane

0x8d8a,	// (0x00043155) navi_pane_ParamLimits

0x8d8a,	// (0x00043155) navi_pane

0x8dff,	// (0x000431ca) signal_pane_ParamLimits

0x8dff,	// (0x000431ca) signal_pane

0x0008,

0xf872,	// (0x00049c3d) bg_status_flat_pane_g

0x8e8b,	// (0x00043256) status_pane_g1_ParamLimits

0x8e8b,	// (0x00043256) status_pane_g1

0x8e97,	// (0x00043262) status_pane_g2_ParamLimits

0x8e97,	// (0x00043262) status_pane_g2

0xc50d,	// (0x000468d8) status_pane_g3_ParamLimits

0xc50d,	// (0x000468d8) status_pane_g3

0x0004,

0xf7a5,	// (0x00049b70) status_pane_g_ParamLimits

0xf7a5,	// (0x00049b70) status_pane_g

0x8ea3,	// (0x0004326e) title_pane_ParamLimits

0x8ea3,	// (0x0004326e) title_pane

0x8efe,	// (0x000432c9) uni_indicator_pane_ParamLimits

0x8efe,	// (0x000432c9) uni_indicator_pane

0xc3fe,	// (0x000467c9) bg_list_pane_ParamLimits

0xc3fe,	// (0x000467c9) bg_list_pane

0x1ed9,	// (0x0003c2a4) find_pane

0x8609,	// (0x000429d4) listscroll_app_pane_ParamLimits

0x8609,	// (0x000429d4) listscroll_app_pane

0xc41e,	// (0x000467e9) listscroll_form_pane

0x1ef1,	// (0x0003c2bc) listscroll_gen_pane_ParamLimits

0x1ef1,	// (0x0003c2bc) listscroll_gen_pane

0x4f0d,	// (0x0003f2d8) listscroll_set_pane

0x8619,	// (0x000429e4) main_idle_act_pane

0xc269,	// (0x00046634) main_idle_trad_pane

0xc269,	// (0x00046634) main_list_empty_pane

0xb55a,	// (0x00045925) main_midp_pane

0xc438,	// (0x00046803) main_pane_g1_ParamLimits

0xc438,	// (0x00046803) main_pane_g1

0x862c,	// (0x000429f7) popup_ai_message_window_ParamLimits

0x862c,	// (0x000429f7) popup_ai_message_window

0x86b8,	// (0x00042a83) popup_fep_china_uni_window_ParamLimits

0x86b8,	// (0x00042a83) popup_fep_china_uni_window

0x4ff7,	// (0x0003f3c2) popup_fep_japan_candidate_window_ParamLimits

0x4ff7,	// (0x0003f3c2) popup_fep_japan_candidate_window

0x5015,	// (0x0003f3e0) popup_fep_japan_predictive_window_ParamLimits

0x5015,	// (0x0003f3e0) popup_fep_japan_predictive_window

0x86f6,	// (0x00042ac1) popup_find_window

0x870f,	// (0x00042ada) popup_grid_graphic_window_ParamLimits

0x870f,	// (0x00042ada) popup_grid_graphic_window

0x506c,	// (0x0003f437) popup_large_graphic_colour_window

0x878b,	// (0x00042b56) popup_menu_window_ParamLimits

0x878b,	// (0x00042b56) popup_menu_window

0x88e9,	// (0x00042cb4) popup_note_image_window

0x88b1,	// (0x00042c7c) popup_note_wait_window_ParamLimits

0x88b1,	// (0x00042c7c) popup_note_wait_window

0x88ff,	// (0x00042cca) popup_note_window_ParamLimits

0x88ff,	// (0x00042cca) popup_note_window

0x8993,	// (0x00042d5e) popup_query_code_window_ParamLimits

0x8993,	// (0x00042d5e) popup_query_code_window

0x5229,	// (0x0003f5f4) popup_query_data_code_window_ParamLimits

0x5229,	// (0x0003f5f4) popup_query_data_code_window

0x89cb,	// (0x00042d96) popup_query_data_window_ParamLimits

0x89cb,	// (0x00042d96) popup_query_data_window

0x8a3f,	// (0x00042e0a) popup_query_sat_info_window_ParamLimits

0x8a3f,	// (0x00042e0a) popup_query_sat_info_window

0x8acc,	// (0x00042e97) popup_snote_single_graphic_window_ParamLimits

0x8acc,	// (0x00042e97) popup_snote_single_graphic_window

0x8acc,	// (0x00042e97) popup_snote_single_text_window_ParamLimits

0x8acc,	// (0x00042e97) popup_snote_single_text_window

0x5298,	// (0x0003f663) popup_sub_window_general

0x539c,	// (0x0003f767) popup_window_general_ParamLimits

0x539c,	// (0x0003f767) popup_window_general

0xc446,	// (0x00046811) power_save_pane

0x84b3,	// (0x0004287e) control_pane_g1_ParamLimits

0x84b3,	// (0x0004287e) control_pane_g1

0x4dca,	// (0x0003f195) control_pane_g2_ParamLimits

0x4dca,	// (0x0003f195) control_pane_g2

0xc3f0,	// (0x000467bb) control_pane_g3_ParamLimits

0xc3f0,	// (0x000467bb) control_pane_g3

0x0007,

0xf78d,	// (0x00049b58) control_pane_g_ParamLimits

0xf78d,	// (0x00049b58) control_pane_g

0x850f,	// (0x000428da) control_pane_t1_ParamLimits

0x850f,	// (0x000428da) control_pane_t1

0x856b,	// (0x00042936) control_pane_t2_ParamLimits

0x856b,	// (0x00042936) control_pane_t2

0x0002,

0xf79e,	// (0x00049b69) control_pane_t_ParamLimits

0xf79e,	// (0x00049b69) control_pane_t

0xc398,	// (0x00046763) navi_navi_volume_pane_cp1

0xc3a0,	// (0x0004676b) status_small_icon_pane

0xc3a8,	// (0x00046773) status_small_pane_g1_ParamLimits

0xc3a8,	// (0x00046773) status_small_pane_g1

0x8432,	// (0x000427fd) status_small_pane_g2_ParamLimits

0x8432,	// (0x000427fd) status_small_pane_g2

0x843e,	// (0x00042809) status_small_pane_g3_ParamLimits

0x843e,	// (0x00042809) status_small_pane_g3

0x844a,	// (0x00042815) status_small_pane_g4_ParamLimits

0x844a,	// (0x00042815) status_small_pane_g4

0x8456,	// (0x00042821) status_small_pane_g5_ParamLimits

0x8456,	// (0x00042821) status_small_pane_g5

0xc3dc,	// (0x000467a7) status_small_pane_g6_ParamLimits

0xc3dc,	// (0x000467a7) status_small_pane_g6

0x0007,

0xf77c,	// (0x00049b47) status_small_pane_g_ParamLimits

0xf77c,	// (0x00049b47) status_small_pane_g

0x8485,	// (0x00042850) status_small_pane_t1

0x849f,	// (0x0004286a) status_small_wait_pane_ParamLimits

0x849f,	// (0x0004286a) status_small_wait_pane

0x82c4,	// (0x0004268f) aid_levels_signal_ParamLimits

0x82c4,	// (0x0004268f) aid_levels_signal

0x82d8,	// (0x000426a3) signal_pane_g1_ParamLimits

0x82d8,	// (0x000426a3) signal_pane_g1

0x82f2,	// (0x000426bd) signal_pane_g2_ParamLimits

0x82f2,	// (0x000426bd) signal_pane_g2

0x0003,

0xf70d,	// (0x00049ad8) signal_pane_g_ParamLimits

0xf70d,	// (0x00049ad8) signal_pane_g

0xb91d,	// (0x00045ce8) context_pane_g1

0x7bb7,	// (0x00041f82) title_pane_g1

0x7bf9,	// (0x00041fc4) title_pane_t1

0xad69,	// (0x00045134) title_pane_t2

0xad8f,	// (0x0004515a) title_pane_t3

0x0002,

0xf557,	// (0x00049922) title_pane_t

0x8f24,	// (0x000432ef) aid_levels_battery_ParamLimits

0x8f24,	// (0x000432ef) aid_levels_battery

0x8f3c,	// (0x00043307) battery_pane_g1_ParamLimits

0x8f3c,	// (0x00043307) battery_pane_g1

0x8f57,	// (0x00043322) battery_pane_g2_ParamLimits

0x8f57,	// (0x00043322) battery_pane_g2

0x0001,

0xf7b0,	// (0x00049b7b) battery_pane_g_ParamLimits

0xf7b0,	// (0x00049b7b) battery_pane_g

0x92f8,	// (0x000436c3) uni_indicator_pane_g1

0x930e,	// (0x000436d9) uni_indicator_pane_g2

0x9324,	// (0x000436ef) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x00049ce5) uni_indicator_pane_g

0xb480,	// (0x0004584b) navi_icon_pane_ParamLimits

0xb480,	// (0x0004584b) navi_icon_pane

0xad53,	// (0x0004511e) navi_midp_pane

0xad53,	// (0x0004511e) navi_navi_pane

0xb480,	// (0x0004584b) navi_text_pane_ParamLimits

0xb480,	// (0x0004584b) navi_text_pane

0xacd1,	// (0x0004509c) status_small_wait_pane_g1

0xb0a4,	// (0x0004546f) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x00049ce0) status_small_wait_pane_g

0x929e,	// (0x00043669) navi_navi_icon_text_pane

0x92a6,	// (0x00043671) navi_navi_pane_g1_ParamLimits

0x92a6,	// (0x00043671) navi_navi_pane_g1

0x92b8,	// (0x00043683) navi_navi_pane_g2_ParamLimits

0x92b8,	// (0x00043683) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x00049cae) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x00049cae) navi_navi_pane_g

0x92ca,	// (0x00043695) navi_navi_tabs_pane

0x929e,	// (0x00043669) navi_navi_text_pane

0x929e,	// (0x00043669) navi_navi_volume_pane

0xd2f2,	// (0x000476bd) navi_text_pane_t1

0xd2e6,	// (0x000476b1) navi_icon_pane_g1

0xd1f2,	// (0x000475bd) navi_navi_text_pane_t1

0x5623,	// (0x0003f9ee) navi_navi_volume_pane_g1

0x9295,	// (0x00043660) volume_small_pane

0x91f1,	// (0x000435bc) navi_navi_icon_text_pane_g1

0x91f9,	// (0x000435c4) navi_navi_icon_text_pane_t1

0xcda0,	// (0x0004716b) navi_tabs_2_long_pane

0xcda0,	// (0x0004716b) navi_tabs_2_pane

0xcda0,	// (0x0004716b) navi_tabs_3_long_pane

0xcda0,	// (0x0004716b) navi_tabs_3_pane

0xcda0,	// (0x0004716b) navi_tabs_4_pane

0x91d1,	// (0x0004359c) tabs_2_active_pane_ParamLimits

0x91d1,	// (0x0004359c) tabs_2_active_pane

0x91e1,	// (0x000435ac) tabs_2_passive_pane_ParamLimits

0x91e1,	// (0x000435ac) tabs_2_passive_pane

0x919f,	// (0x0004356a) tabs_3_active_pane_ParamLimits

0x919f,	// (0x0004356a) tabs_3_active_pane

0x91af,	// (0x0004357a) tabs_3_passive_pane_ParamLimits

0x91af,	// (0x0004357a) tabs_3_passive_pane

0x91c0,	// (0x0004358b) tabs_3_passive_pane_cp_ParamLimits

0x91c0,	// (0x0004358b) tabs_3_passive_pane_cp

0x915b,	// (0x00043526) tabs_4_active_pane_ParamLimits

0x915b,	// (0x00043526) tabs_4_active_pane

0x916c,	// (0x00043537) tabs_4_passive_pane_ParamLimits

0x916c,	// (0x00043537) tabs_4_passive_pane

0x917d,	// (0x00043548) tabs_4_passive_pane_cp_ParamLimits

0x917d,	// (0x00043548) tabs_4_passive_pane_cp

0x918e,	// (0x00043559) tabs_4_passive_pane_cp2_ParamLimits

0x918e,	// (0x00043559) tabs_4_passive_pane_cp2

0x913b,	// (0x00043506) tabs_2_long_active_pane_ParamLimits

0x913b,	// (0x00043506) tabs_2_long_active_pane

0x914b,	// (0x00043516) tabs_2_long_passive_pane_ParamLimits

0x914b,	// (0x00043516) tabs_2_long_passive_pane

0x9104,	// (0x000434cf) tabs_3_long_active_pane_ParamLimits

0x9104,	// (0x000434cf) tabs_3_long_active_pane

0x9117,	// (0x000434e2) tabs_3_long_passive_pane_ParamLimits

0x9117,	// (0x000434e2) tabs_3_long_passive_pane

0x9128,	// (0x000434f3) tabs_3_long_passive_pane_cp_ParamLimits

0x9128,	// (0x000434f3) tabs_3_long_passive_pane_cp

0x54de,	// (0x0003f8a9) volume_small_pane_g1

0x54e7,	// (0x0003f8b2) volume_small_pane_g2

0x54f0,	// (0x0003f8bb) volume_small_pane_g3

0x54f9,	// (0x0003f8c4) volume_small_pane_g4

0x5502,	// (0x0003f8cd) volume_small_pane_g5

0x550b,	// (0x0003f8d6) volume_small_pane_g6

0x5514,	// (0x0003f8df) volume_small_pane_g7

0x551d,	// (0x0003f8e8) volume_small_pane_g8

0x5526,	// (0x0003f8f1) volume_small_pane_g9

0x552f,	// (0x0003f8fa) volume_small_pane_g10

0x0009,

0xf8af,	// (0x00049c7a) volume_small_pane_g

0xada1,	// (0x0004516c) bg_active_tab_pane_cp2_ParamLimits

0xada1,	// (0x0004516c) bg_active_tab_pane_cp2

0xadaf,	// (0x0004517a) tabs_3_active_pane_g1

0x7c86,	// (0x00042051) tabs_3_active_pane_t1

0xada1,	// (0x0004516c) bg_passive_tab_pane_cp2_ParamLimits

0xada1,	// (0x0004516c) bg_passive_tab_pane_cp2

0xadaf,	// (0x0004517a) tabs_3_passive_pane_g1

0x7c86,	// (0x00042051) tabs_3_passive_pane_t1

0xada1,	// (0x0004516c) bg_active_tab_pane_cp3_ParamLimits

0xada1,	// (0x0004516c) bg_active_tab_pane_cp3

0xd2b8,	// (0x00047683) tabs_4_active_pane_g1

0x7c9c,	// (0x00042067) tabs_4_active_pane_t1

0xada1,	// (0x0004516c) bg_passive_tab_pane_cp3_ParamLimits

0xada1,	// (0x0004516c) bg_passive_tab_pane_cp3

0xd2b8,	// (0x00047683) tabs_4_1_passive_pane_g1

0x7c9c,	// (0x00042067) tabs_4_1_passive_pane_t1

0xb55a,	// (0x00045925) list_highlight_pane_cp2

0x93df,	// (0x000437aa) list_set_pane_ParamLimits

0x93df,	// (0x000437aa) list_set_pane

0x946d,	// (0x00043838) main_pane_set_t1_ParamLimits

0x946d,	// (0x00043838) main_pane_set_t1

0x948d,	// (0x00043858) main_pane_set_t2_ParamLimits

0x948d,	// (0x00043858) main_pane_set_t2

0x94a1,	// (0x0004386c) main_pane_set_t3_ParamLimits

0x94a1,	// (0x0004386c) main_pane_set_t3

0x94b3,	// (0x0004387e) main_pane_set_t4_ParamLimits

0x94b3,	// (0x0004387e) main_pane_set_t4

0x0003,

0xf97f,	// (0x00049d4a) main_pane_set_t_ParamLimits

0xf97f,	// (0x00049d4a) main_pane_set_t

0x94c5,	// (0x00043890) setting_code_pane

0x94cd,	// (0x00043898) setting_slider_graphic_pane

0x94cd,	// (0x00043898) setting_slider_pane

0x94cd,	// (0x00043898) setting_text_pane

0x94cd,	// (0x00043898) setting_volume_pane

0x7cb2,	// (0x0004207d) volume_set_pane

0xadb7,	// (0x00045182) bg_set_opt_pane_cp

0x491d,	// (0x0003ece8) setting_slider_pane_t1

0x7cba,	// (0x00042085) setting_slider_pane_t2

0x7cd3,	// (0x0004209e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00049929) setting_slider_pane_t

0x4963,	// (0x0003ed2e) slider_set_pane

0xad53,	// (0x0004511e) bg_set_opt_pane_cp2

0xadc5,	// (0x00045190) setting_slider_graphic_pane_g1

0x7cea,	// (0x000420b5) setting_slider_graphic_pane_t1

0x7cf9,	// (0x000420c4) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00049930) setting_slider_graphic_pane_t

0x7d08,	// (0x000420d3) slider_set_pane_cp

0xad53,	// (0x0004511e) input_focus_pane_cp1

0xd72e,	// (0x00047af9) list_set_text_pane

0xacd1,	// (0x0004509c) setting_text_pane_g1

0xad53,	// (0x0004511e) input_focus_pane_cp2

0xacd1,	// (0x0004509c) setting_code_pane_g1

0xadce,	// (0x00045199) setting_code_pane_t1

0x13dc,	// (0x0003b7a7) set_text_pane_t1_ParamLimits

0x13dc,	// (0x0003b7a7) set_text_pane_t1

0xb42f,	// (0x000457fa) set_opt_bg_pane_g1

0xb437,	// (0x00045802) set_opt_bg_pane_g2

0x939f,	// (0x0004376a) set_opt_bg_pane_g3

0xb447,	// (0x00045812) set_opt_bg_pane_g4

0xb44f,	// (0x0004581a) set_opt_bg_pane_g5

0xb457,	// (0x00045822) set_opt_bg_pane_g6

0x93a7,	// (0x00043772) set_opt_bg_pane_g7

0x93af,	// (0x0004377a) set_opt_bg_pane_g8

0x93b7,	// (0x00043782) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x00049d37) set_opt_bg_pane_g

0xd721,	// (0x00047aec) slider_set_pane_g1

0x5698,	// (0x0003fa63) slider_set_pane_g2

0x0006,

0xf95d,	// (0x00049d28) slider_set_pane_g

0x9339,	// (0x00043704) volume_set_pane_g1

0x9341,	// (0x0004370c) volume_set_pane_g2

0x9349,	// (0x00043714) volume_set_pane_g3

0x9351,	// (0x0004371c) volume_set_pane_g4

0x9359,	// (0x00043724) volume_set_pane_g5

0x9361,	// (0x0004372c) volume_set_pane_g6

0x9369,	// (0x00043734) volume_set_pane_g7

0x9371,	// (0x0004373c) volume_set_pane_g8

0x9379,	// (0x00043744) volume_set_pane_g9

0x9381,	// (0x0004374c) volume_set_pane_g10

0x0009,

0xf935,	// (0x00049d00) volume_set_pane_g

0x7d10,	// (0x000420db) indicator_pane_ParamLimits

0x7d10,	// (0x000420db) indicator_pane

0x7d38,	// (0x00042103) main_idle_pane_g2_ParamLimits

0x7d38,	// (0x00042103) main_idle_pane_g2

0x7d68,	// (0x00042133) main_pane_idle_g1_ParamLimits

0x7d68,	// (0x00042133) main_pane_idle_g1

0xaddc,	// (0x000451a7) popup_clock_digital_analogue_window_ParamLimits

0xaddc,	// (0x000451a7) popup_clock_digital_analogue_window

0x7d8d,	// (0x00042158) soft_indicator_pane_ParamLimits

0x7d8d,	// (0x00042158) soft_indicator_pane

0x7da7,	// (0x00042172) wallpaper_pane_ParamLimits

0x7da7,	// (0x00042172) wallpaper_pane

0xacd1,	// (0x0004509c) wallpaper_pane_g1

0x7db9,	// (0x00042184) indicator_pane_g1_ParamLimits

0x7db9,	// (0x00042184) indicator_pane_g1

0xd828,	// (0x00047bf3) navi_navi_icon_text_pane_srt_g1

0xae0a,	// (0x000451d5) soft_indicator_pane_t1

0xae24,	// (0x000451ef) aid_ps_area_pane

0x7dd2,	// (0x0004219d) aid_ps_clock_pane

0xae35,	// (0x00045200) aid_ps_indicator_pane

0xae41,	// (0x0004520c) indicator_ps_pane_ParamLimits

0xae41,	// (0x0004520c) indicator_ps_pane

0xae50,	// (0x0004521b) power_save_pane_g1_ParamLimits

0xae50,	// (0x0004521b) power_save_pane_g1

0xae5c,	// (0x00045227) power_save_pane_g2_ParamLimits

0xae5c,	// (0x00045227) power_save_pane_g2

0x4688,	// (0x0003ea53) aid_navinavi_width_pane

0xae24,	// (0x000451ef) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00049935) power_save_pane_g_ParamLimits

0xf56a,	// (0x00049935) power_save_pane_g

0xae6a,	// (0x00045235) power_save_pane_t1_ParamLimits

0xae6a,	// (0x00045235) power_save_pane_t1

0x7dd2,	// (0x0004219d) aid_ps_clock_pane_ParamLimits

0xae35,	// (0x00045200) aid_ps_indicator_pane_ParamLimits

0xae7c,	// (0x00045247) power_save_pane_t4_ParamLimits

0xae7c,	// (0x00045247) power_save_pane_t4

0x0001,

0xf56f,	// (0x0004993a) power_save_pane_t_ParamLimits

0xf56f,	// (0x0004993a) power_save_pane_t

0xaea6,	// (0x00045271) power_save_t3_ParamLimits

0xaea6,	// (0x00045271) power_save_t3

0xae91,	// (0x0004525c) power_save_t2_ParamLimits

0xae91,	// (0x0004525c) power_save_t2

0xaebb,	// (0x00045286) indicator_ps_pane_g1

0x7dde,	// (0x000421a9) ai_gene_pane_ParamLimits

0x7dde,	// (0x000421a9) ai_gene_pane

0x7df5,	// (0x000421c0) ai_links_pane_ParamLimits

0x7df5,	// (0x000421c0) ai_links_pane

0x7e07,	// (0x000421d2) indicator_pane_cp1_ParamLimits

0x7e07,	// (0x000421d2) indicator_pane_cp1

0x7e16,	// (0x000421e1) main_pane_idle_g1_cp_ParamLimits

0x7e16,	// (0x000421e1) main_pane_idle_g1_cp

0xaec4,	// (0x0004528f) popup_ai_links_title_window

0x7e2e,	// (0x000421f9) soft_indicator_pane_cp1_ParamLimits

0x7e2e,	// (0x000421f9) soft_indicator_pane_cp1

0xd577,	// (0x00047942) ai_links_pane_g1

0xd580,	// (0x0004794b) grid_ai_links_pane

0x92ef,	// (0x000436ba) ai_gene_pane_1

0xd565,	// (0x00047930) ai_gene_pane_2

0xd56e,	// (0x00047939) list_highlight_pane_cp4

0x92d3,	// (0x0004369e) cell_ai_link_pane_ParamLimits

0x92d3,	// (0x0004369e) cell_ai_link_pane

0xd55d,	// (0x00047928) cell_ai_link_pane_g1

0xb0a4,	// (0x0004546f) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x00049cdb) cell_ai_link_pane_g

0xad53,	// (0x0004511e) grid_highlight_cp2

0xad53,	// (0x0004511e) bg_popup_sub_pane_cp1

0xaedb,	// (0x000452a6) popup_ai_links_title_window_t1

0xd4af,	// (0x0004787a) ai_gene_pane_1_g1_ParamLimits

0xd4af,	// (0x0004787a) ai_gene_pane_1_g1

0xd4bb,	// (0x00047886) ai_gene_pane_1_g2_ParamLimits

0xd4bb,	// (0x00047886) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x00049cd1) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x00049cd1) ai_gene_pane_1_g

0xd4c8,	// (0x00047893) ai_gene_pane_1_t1_ParamLimits

0xd4c8,	// (0x00047893) ai_gene_pane_1_t1

0xd4fc,	// (0x000478c7) grid_ai_soft_ind_pane

0xd49a,	// (0x00047865) ai_gene_pane_2_t1_ParamLimits

0xd49a,	// (0x00047865) ai_gene_pane_2_t1

0x7e42,	// (0x0004220d) main_pane_empty_t1_ParamLimits

0x7e42,	// (0x0004220d) main_pane_empty_t1

0x7e5f,	// (0x0004222a) main_pane_empty_t2_ParamLimits

0x7e5f,	// (0x0004222a) main_pane_empty_t2

0x7e77,	// (0x00042242) main_pane_empty_t3_ParamLimits

0x7e77,	// (0x00042242) main_pane_empty_t3

0x7e8a,	// (0x00042255) main_pane_empty_t4_ParamLimits

0x7e8a,	// (0x00042255) main_pane_empty_t4

0x7e9d,	// (0x00042268) main_pane_empty_t5_ParamLimits

0x7e9d,	// (0x00042268) main_pane_empty_t5

0x0004,

0xf574,	// (0x0004993f) main_pane_empty_t_ParamLimits

0xf574,	// (0x0004993f) main_pane_empty_t

0xb480,	// (0x0004584b) bg_popup_window_pane_ParamLimits

0xb480,	// (0x0004584b) bg_popup_window_pane

0xd201,	// (0x000475cc) find_popup_pane_cp2_ParamLimits

0xd201,	// (0x000475cc) find_popup_pane_cp2

0xd20d,	// (0x000475d8) heading_pane_ParamLimits

0xd20d,	// (0x000475d8) heading_pane

0xad53,	// (0x0004511e) bg_popup_sub_pane

0x9216,	// (0x000435e1) bg_popup_window_pane_g1_ParamLimits

0x9216,	// (0x000435e1) bg_popup_window_pane_g1

0x9225,	// (0x000435f0) bg_popup_window_pane_g2_ParamLimits

0x9225,	// (0x000435f0) bg_popup_window_pane_g2

0x9231,	// (0x000435fc) bg_popup_window_pane_g3_ParamLimits

0x9231,	// (0x000435fc) bg_popup_window_pane_g3

0x923d,	// (0x00043608) bg_popup_window_pane_g4_ParamLimits

0x923d,	// (0x00043608) bg_popup_window_pane_g4

0x924c,	// (0x00043617) bg_popup_window_pane_g5_ParamLimits

0x924c,	// (0x00043617) bg_popup_window_pane_g5

0x925c,	// (0x00043627) bg_popup_window_pane_g6_ParamLimits

0x925c,	// (0x00043627) bg_popup_window_pane_g6

0x9268,	// (0x00043633) bg_popup_window_pane_g7_ParamLimits

0x9268,	// (0x00043633) bg_popup_window_pane_g7

0x9277,	// (0x00043642) bg_popup_window_pane_g8_ParamLimits

0x9277,	// (0x00043642) bg_popup_window_pane_g8

0x9286,	// (0x00043651) bg_popup_window_pane_g9_ParamLimits

0x9286,	// (0x00043651) bg_popup_window_pane_g9

0xd1e6,	// (0x000475b1) bg_popup_window_pane_g10_ParamLimits

0xd1e6,	// (0x000475b1) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x00049c99) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x00049c99) bg_popup_window_pane_g

0xd19d,	// (0x00047568) bg_popup_heading_pane_ParamLimits

0xd19d,	// (0x00047568) bg_popup_heading_pane

0x5720,	// (0x0003faeb) tabs_4_passive_pane_cp_srt_ParamLimits

0x5720,	// (0x0003faeb) tabs_4_passive_pane_cp_srt

0x5732,	// (0x0003fafd) tabs_4_passive_pane_srt_ParamLimits

0xd1b1,	// (0x0004757c) heading_pane_g2

0x5732,	// (0x0003fafd) tabs_4_passive_pane_srt

0xc669,	// (0x00046a34) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc669,	// (0x00046a34) bg_passive_tab_pane_cp3_srt

0xd1b9,	// (0x00047584) heading_pane_t1_ParamLimits

0xd1b9,	// (0x00047584) heading_pane_t1

0xd1d0,	// (0x0004759b) heading_pane_t2_ParamLimits

0xd1d0,	// (0x0004759b) heading_pane_t2

0x0001,

0xf8c9,	// (0x00049c94) heading_pane_t_ParamLimits

0xf8c9,	// (0x00049c94) heading_pane_t

0xcd20,	// (0x000470eb) bg_popup_heading_pane_g1

0xcdb1,	// (0x0004717c) bg_popup_heading_pane_g2

0xcdb9,	// (0x00047184) bg_popup_heading_pane_g3

0xcdc1,	// (0x0004718c) bg_popup_heading_pane_g4

0xcdc9,	// (0x00047194) bg_popup_heading_pane_g5

0xcdd1,	// (0x0004719c) bg_popup_heading_pane_g6

0xcdd9,	// (0x000471a4) bg_popup_heading_pane_g7

0xcde1,	// (0x000471ac) bg_popup_heading_pane_g8

0xcde9,	// (0x000471b4) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x00049c50) bg_popup_heading_pane_g

0xc5f5,	// (0x000469c0) bg_popup_sub_pane_g1

0xc605,	// (0x000469d0) bg_popup_sub_pane_g2

0xc5fd,	// (0x000469c8) bg_popup_sub_pane_g3

0xc615,	// (0x000469e0) bg_popup_sub_pane_g4

0xc60d,	// (0x000469d8) bg_popup_sub_pane_g5

0xc61d,	// (0x000469e8) bg_popup_sub_pane_g6

0xc625,	// (0x000469f0) bg_popup_sub_pane_g7

0xc635,	// (0x00046a00) bg_popup_sub_pane_g8

0xc62d,	// (0x000469f8) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x00049c2a) bg_popup_sub_pane_g

0xada1,	// (0x0004516c) bg_popup_window_pane_cp5_ParamLimits

0xada1,	// (0x0004516c) bg_popup_window_pane_cp5

0xaef8,	// (0x000452c3) popup_note_window_g1_ParamLimits

0xaef8,	// (0x000452c3) popup_note_window_g1

0xaf04,	// (0x000452cf) popup_note_window_t1_ParamLimits

0xaf04,	// (0x000452cf) popup_note_window_t1

0xaf1a,	// (0x000452e5) popup_note_window_t2_ParamLimits

0xaf1a,	// (0x000452e5) popup_note_window_t2

0xaf30,	// (0x000452fb) popup_note_window_t3_ParamLimits

0xaf30,	// (0x000452fb) popup_note_window_t3

0xaf46,	// (0x00045311) popup_note_window_t4_ParamLimits

0xaf46,	// (0x00045311) popup_note_window_t4

0xaf6e,	// (0x00045339) popup_note_window_t5_ParamLimits

0xaf6e,	// (0x00045339) popup_note_window_t5

0x0004,

0xf57f,	// (0x0004994a) popup_note_window_t_ParamLimits

0xf57f,	// (0x0004994a) popup_note_window_t

0xafb8,	// (0x00045383) bg_popup_window_pane_cp6_ParamLimits

0xafb8,	// (0x00045383) bg_popup_window_pane_cp6

0xcc9c,	// (0x00047067) popup_note_image_window_g1_ParamLimits

0xcc9c,	// (0x00047067) popup_note_image_window_g1

0xcca8,	// (0x00047073) popup_note_image_window_g2_ParamLimits

0xcca8,	// (0x00047073) popup_note_image_window_g2

0x0001,

0xf853,	// (0x00049c1e) popup_note_image_window_g_ParamLimits

0xf853,	// (0x00049c1e) popup_note_image_window_g

0xccc1,	// (0x0004708c) popup_note_image_window_t1_ParamLimits

0xccc1,	// (0x0004708c) popup_note_image_window_t1

0xccda,	// (0x000470a5) popup_note_image_window_t2_ParamLimits

0xccda,	// (0x000470a5) popup_note_image_window_t2

0xccf3,	// (0x000470be) popup_note_image_window_t3_ParamLimits

0xccf3,	// (0x000470be) popup_note_image_window_t3

0x0002,

0xf858,	// (0x00049c23) popup_note_image_window_t_ParamLimits

0xf858,	// (0x00049c23) popup_note_image_window_t

0xcb87,	// (0x00046f52) bg_popup_window_pane_cp7_ParamLimits

0xcb87,	// (0x00046f52) bg_popup_window_pane_cp7

0xcbb7,	// (0x00046f82) popup_note_wait_window_g1_ParamLimits

0xcbb7,	// (0x00046f82) popup_note_wait_window_g1

0xcbc3,	// (0x00046f8e) popup_note_wait_window_g2_ParamLimits

0xcbc3,	// (0x00046f8e) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x00049c0c) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x00049c0c) popup_note_wait_window_g

0xcbdb,	// (0x00046fa6) popup_note_wait_window_t1_ParamLimits

0xcbdb,	// (0x00046fa6) popup_note_wait_window_t1

0xcc02,	// (0x00046fcd) popup_note_wait_window_t2_ParamLimits

0xcc02,	// (0x00046fcd) popup_note_wait_window_t2

0xcc1f,	// (0x00046fea) popup_note_wait_window_t3_ParamLimits

0xcc1f,	// (0x00046fea) popup_note_wait_window_t3

0xcc32,	// (0x00046ffd) popup_note_wait_window_t4_ParamLimits

0xcc32,	// (0x00046ffd) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x00049c13) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x00049c13) popup_note_wait_window_t

0xcc57,	// (0x00047022) wait_bar_pane_ParamLimits

0xcc57,	// (0x00047022) wait_bar_pane

0xad53,	// (0x0004511e) wait_anim_pane

0xad53,	// (0x0004511e) wait_border_pane

0xacd1,	// (0x0004509c) wait_anim_pane_g1

0xacd1,	// (0x0004509c) wait_anim_pane_g2

0x0001,

0xf708,	// (0x00049ad3) wait_anim_pane_g

0xcb37,	// (0x00046f02) wait_border_pane_g1

0xcb40,	// (0x00046f0b) wait_border_pane_g2

0xcb49,	// (0x00046f14) wait_border_pane_g3

0x0002,

0xf83a,	// (0x00049c05) wait_border_pane_g

0xc9a7,	// (0x00046d72) bg_popup_window_pane_cp16_ParamLimits

0xc9a7,	// (0x00046d72) bg_popup_window_pane_cp16

0xcaa7,	// (0x00046e72) indicator_popup_pane_cp4_ParamLimits

0xcaa7,	// (0x00046e72) indicator_popup_pane_cp4

0xcabb,	// (0x00046e86) popup_query_data_window_t1_ParamLimits

0xcabb,	// (0x00046e86) popup_query_data_window_t1

0xcacd,	// (0x00046e98) popup_query_data_window_t2_ParamLimits

0xcacd,	// (0x00046e98) popup_query_data_window_t2

0xcae6,	// (0x00046eb1) popup_query_data_window_t3_ParamLimits

0xcae6,	// (0x00046eb1) popup_query_data_window_t3

0x0002,

0xf833,	// (0x00049bfe) popup_query_data_window_t_ParamLimits

0xf833,	// (0x00049bfe) popup_query_data_window_t

0xcb00,	// (0x00046ecb) query_popup_data_pane_ParamLimits

0xcb00,	// (0x00046ecb) query_popup_data_pane

0xcb14,	// (0x00046edf) query_popup_data_pane_cp1_ParamLimits

0xcb14,	// (0x00046edf) query_popup_data_pane_cp1

0xc9a7,	// (0x00046d72) bg_popup_window_pane_cp10_ParamLimits

0xc9a7,	// (0x00046d72) bg_popup_window_pane_cp10

0xc9d9,	// (0x00046da4) indicator_popup_pane_ParamLimits

0xc9d9,	// (0x00046da4) indicator_popup_pane

0xc9fb,	// (0x00046dc6) popup_query_code_window_t1_ParamLimits

0xc9fb,	// (0x00046dc6) popup_query_code_window_t1

0xca15,	// (0x00046de0) popup_query_code_window_t2_ParamLimits

0xca15,	// (0x00046de0) popup_query_code_window_t2

0xca5e,	// (0x00046e29) popup_query_code_window_t3_ParamLimits

0xca5e,	// (0x00046e29) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x00049bf7) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x00049bf7) popup_query_code_window_t

0xca8d,	// (0x00046e58) query_popup_pane_ParamLimits

0xca8d,	// (0x00046e58) query_popup_pane

0xafb8,	// (0x00045383) bg_popup_window_pane_cp15_ParamLimits

0xafb8,	// (0x00045383) bg_popup_window_pane_cp15

0xafd6,	// (0x000453a1) indicator_popup_pane_cp1_ParamLimits

0xafd6,	// (0x000453a1) indicator_popup_pane_cp1

0xafe9,	// (0x000453b4) indicator_popup_pane_cp2_ParamLimits

0xafe9,	// (0x000453b4) indicator_popup_pane_cp2

0xaffc,	// (0x000453c7) popup_query_data_code_window_g1_ParamLimits

0xaffc,	// (0x000453c7) popup_query_data_code_window_g1

0xb00f,	// (0x000453da) popup_query_data_code_window_t1_ParamLimits

0xb00f,	// (0x000453da) popup_query_data_code_window_t1

0xb021,	// (0x000453ec) popup_query_data_code_window_t2_ParamLimits

0xb021,	// (0x000453ec) popup_query_data_code_window_t2

0xb033,	// (0x000453fe) popup_query_data_code_window_t3_ParamLimits

0xb033,	// (0x000453fe) popup_query_data_code_window_t3

0xb049,	// (0x00045414) popup_query_data_code_window_t4_ParamLimits

0xb049,	// (0x00045414) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00049955) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00049955) popup_query_data_code_window_t

0x53f9,	// (0x0003f7c4) list_single_midp_graphic_pane_g3

0xb061,	// (0x0004542c) query_popup_data_pane_cp2_ParamLimits

0xb074,	// (0x0004543f) query_popup_pane_cp2_ParamLimits

0xb074,	// (0x0004543f) query_popup_pane_cp2

0xad53,	// (0x0004511e) bg_popup_window_pane_cp11

0xc993,	// (0x00046d5e) heading_pane_cp5

0xb100,	// (0x000454cb) listscroll_popup_info_pane

0xad53,	// (0x0004511e) input_focus_pane_cp3

0xb087,	// (0x00045452) query_popup_pane_t1

0xb095,	// (0x00045460) list_popup_info_pane_ParamLimits

0xb095,	// (0x00045460) list_popup_info_pane

0xb0a4,	// (0x0004546f) listscroll_popup_info_pane_g1

0xb0ac,	// (0x00045477) scroll_pane_cp7

0xb0b4,	// (0x0004547f) popup_info_list_pane_t1_ParamLimits

0xb0b4,	// (0x0004547f) popup_info_list_pane_t1

0xb0ce,	// (0x00045499) popup_info_list_pane_t2_ParamLimits

0xb0ce,	// (0x00045499) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0004995e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0004995e) popup_info_list_pane_t

0xad53,	// (0x0004511e) bg_popup_window_pane_cp12

0xd842,	// (0x00047c0d) find_popup_pane

0xadb7,	// (0x00045182) bg_popup_window_pane_cp3

0xb0e8,	// (0x000454b3) heading_pane_cp3

0xb0f4,	// (0x000454bf) listscroll_popup_graphic_pane

0xad53,	// (0x0004511e) bg_popup_window_pane_cp4

0x7f00,	// (0x000422cb) heading_pane_cp4

0xb100,	// (0x000454cb) listscroll_popup_colour_pane

0xb108,	// (0x000454d3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb108,	// (0x000454d3) cell_large_graphic_colour_none_popup_pane

0x7f08,	// (0x000422d3) grid_large_graphic_colour_popup_pane_ParamLimits

0x7f08,	// (0x000422d3) grid_large_graphic_colour_popup_pane

0x7f24,	// (0x000422ef) listscroll_popup_colour_pane_g1_ParamLimits

0x7f24,	// (0x000422ef) listscroll_popup_colour_pane_g1

0x7f3b,	// (0x00042306) listscroll_popup_colour_pane_g2_ParamLimits

0x7f3b,	// (0x00042306) listscroll_popup_colour_pane_g2

0xb118,	// (0x000454e3) listscroll_popup_colour_pane_g3_ParamLimits

0xb118,	// (0x000454e3) listscroll_popup_colour_pane_g3

0x7f4f,	// (0x0004231a) listscroll_popup_colour_pane_g4_ParamLimits

0x7f4f,	// (0x0004231a) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00049963) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00049963) listscroll_popup_colour_pane_g

0xb128,	// (0x000454f3) scroll_pane_cp6_ParamLimits

0xb128,	// (0x000454f3) scroll_pane_cp6

0x7f5e,	// (0x00042329) cell_large_graphic_colour_popup_pane_ParamLimits

0x7f5e,	// (0x00042329) cell_large_graphic_colour_popup_pane

0xb13a,	// (0x00045505) cell_large_graphic_colour_none_popup_pane_t1

0xad53,	// (0x0004511e) grid_highlight_pane_cp5

0xb149,	// (0x00045514) cell_large_graphic_colour_popup_pane_g1

0xb151,	// (0x0004551c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0004996c) cell_large_graphic_colour_popup_pane_g

0xb159,	// (0x00045524) cell_large_graphic_colour_popup_pane_g2_copy1

0xb162,	// (0x0004552d) grid_highlight_pane_cp4

0xb16a,	// (0x00045535) bg_popup_window_pane_cp8_ParamLimits

0xb16a,	// (0x00045535) bg_popup_window_pane_cp8

0xb185,	// (0x00045550) popup_snote_single_text_window_g1_ParamLimits

0xb185,	// (0x00045550) popup_snote_single_text_window_g1

0xb197,	// (0x00045562) popup_snote_single_text_window_t1_ParamLimits

0xb197,	// (0x00045562) popup_snote_single_text_window_t1

0xb1aa,	// (0x00045575) popup_snote_single_text_window_t2_ParamLimits

0xb1aa,	// (0x00045575) popup_snote_single_text_window_t2

0xb1bd,	// (0x00045588) popup_snote_single_text_window_t3_ParamLimits

0xb1bd,	// (0x00045588) popup_snote_single_text_window_t3

0xb1f6,	// (0x000455c1) popup_snote_single_text_window_t4_ParamLimits

0xb1f6,	// (0x000455c1) popup_snote_single_text_window_t4

0xb22a,	// (0x000455f5) popup_snote_single_text_window_t5_ParamLimits

0xb22a,	// (0x000455f5) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00049971) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00049971) popup_snote_single_text_window_t

0xb259,	// (0x00045624) bg_popup_window_pane_cp9_ParamLimits

0xb259,	// (0x00045624) bg_popup_window_pane_cp9

0xb185,	// (0x00045550) popup_snote_single_graphic_window_g1_ParamLimits

0xb185,	// (0x00045550) popup_snote_single_graphic_window_g1

0xb267,	// (0x00045632) popup_snote_single_graphic_window_g2_ParamLimits

0xb267,	// (0x00045632) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0004997c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0004997c) popup_snote_single_graphic_window_g

0xb273,	// (0x0004563e) popup_snote_single_graphic_window_t1_ParamLimits

0xb273,	// (0x0004563e) popup_snote_single_graphic_window_t1

0xb286,	// (0x00045651) popup_snote_single_graphic_window_t2_ParamLimits

0xb286,	// (0x00045651) popup_snote_single_graphic_window_t2

0xb1bd,	// (0x00045588) popup_snote_single_graphic_window_t3_ParamLimits

0xb1bd,	// (0x00045588) popup_snote_single_graphic_window_t3

0xb1f6,	// (0x000455c1) popup_snote_single_graphic_window_t4_ParamLimits

0xb1f6,	// (0x000455c1) popup_snote_single_graphic_window_t4

0xb22a,	// (0x000455f5) popup_snote_single_graphic_window_t5_ParamLimits

0xb22a,	// (0x000455f5) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00049981) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00049981) popup_snote_single_graphic_window_t

0x95c9,	// (0x00043994) grid_graphic_popup_pane_ParamLimits

0x95c9,	// (0x00043994) grid_graphic_popup_pane

0x95ec,	// (0x000439b7) listscroll_popup_graphic_pane_g1_ParamLimits

0x95ec,	// (0x000439b7) listscroll_popup_graphic_pane_g1

0x9600,	// (0x000439cb) listscroll_popup_graphic_pane_g2_ParamLimits

0x9600,	// (0x000439cb) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x00049d74) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x00049d74) listscroll_popup_graphic_pane_g

0xd2da,	// (0x000476a5) scroll_pane_cp5

0x9584,	// (0x0004394f) cell_graphic_popup_pane_ParamLimits

0x9584,	// (0x0004394f) cell_graphic_popup_pane

0xd7eb,	// (0x00047bb6) cell_graphic_popup_pane_g1

0xd7f3,	// (0x00047bbe) cell_graphic_popup_pane_g2

0xb159,	// (0x00045524) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x00049d6d) cell_graphic_popup_pane_g

0xd7fc,	// (0x00047bc7) cell_graphic_popup_pane_t2

0xb162,	// (0x0004552d) grid_highlight_pane_cp3

0xb2ab,	// (0x00045676) list_gen_pane_ParamLimits

0xb2ab,	// (0x00045676) list_gen_pane

0xb2d4,	// (0x0004569f) scroll_pane

0x9557,	// (0x00043922) bg_list_pane_g1_ParamLimits

0x9557,	// (0x00043922) bg_list_pane_g1

0xd7a2,	// (0x00047b6d) bg_list_pane_g2_ParamLimits

0xd7a2,	// (0x00047b6d) bg_list_pane_g2

0xd7b5,	// (0x00047b80) bg_list_pane_g3_ParamLimits

0xd7b5,	// (0x00047b80) bg_list_pane_g3

0xd7c7,	// (0x00047b92) bg_list_pane_g4_ParamLimits

0xd7c7,	// (0x00047b92) bg_list_pane_g4

0x9572,	// (0x0004393d) bg_list_pane_g5_ParamLimits

0x9572,	// (0x0004393d) bg_list_pane_g5

0x0004,

0xf997,	// (0x00049d62) bg_list_pane_g_ParamLimits

0xf997,	// (0x00049d62) bg_list_pane_g

0x9510,	// (0x000438db) list_double2_graphic_large_graphic_pane_ParamLimits

0x9510,	// (0x000438db) list_double2_graphic_large_graphic_pane

0x9510,	// (0x000438db) list_double2_graphic_pane_ParamLimits

0x9510,	// (0x000438db) list_double2_graphic_pane

0x9510,	// (0x000438db) list_double2_large_graphic_pane_ParamLimits

0x9510,	// (0x000438db) list_double2_large_graphic_pane

0x9510,	// (0x000438db) list_double2_pane_ParamLimits

0x9510,	// (0x000438db) list_double2_pane

0x9510,	// (0x000438db) list_double_graphic_heading_pane_ParamLimits

0x9510,	// (0x000438db) list_double_graphic_heading_pane

0x9510,	// (0x000438db) list_double_graphic_pane_ParamLimits

0x9510,	// (0x000438db) list_double_graphic_pane

0x9510,	// (0x000438db) list_double_heading_pane_ParamLimits

0x9510,	// (0x000438db) list_double_heading_pane

0x9510,	// (0x000438db) list_double_large_graphic_pane_ParamLimits

0x9510,	// (0x000438db) list_double_large_graphic_pane

0x9510,	// (0x000438db) list_double_number_pane_ParamLimits

0x9510,	// (0x000438db) list_double_number_pane

0x9510,	// (0x000438db) list_double_pane_ParamLimits

0x9510,	// (0x000438db) list_double_pane

0x9510,	// (0x000438db) list_double_time_pane_ParamLimits

0x9510,	// (0x000438db) list_double_time_pane

0x9510,	// (0x000438db) list_setting_number_pane_ParamLimits

0x9510,	// (0x000438db) list_setting_number_pane

0x9510,	// (0x000438db) list_setting_pane_ParamLimits

0x9510,	// (0x000438db) list_setting_pane

0x266e,	// (0x0003ca39) list_single_2graphic_pane_ParamLimits

0x266e,	// (0x0003ca39) list_single_2graphic_pane

0x266e,	// (0x0003ca39) list_single_graphic_heading_pane_ParamLimits

0x266e,	// (0x0003ca39) list_single_graphic_heading_pane

0x266e,	// (0x0003ca39) list_single_graphic_pane_ParamLimits

0x266e,	// (0x0003ca39) list_single_graphic_pane

0x266e,	// (0x0003ca39) list_single_heading_pane_ParamLimits

0x266e,	// (0x0003ca39) list_single_heading_pane

0x9545,	// (0x00043910) list_single_large_graphic_pane_ParamLimits

0x9545,	// (0x00043910) list_single_large_graphic_pane

0x266e,	// (0x0003ca39) list_single_number_heading_pane_ParamLimits

0x266e,	// (0x0003ca39) list_single_number_heading_pane

0x266e,	// (0x0003ca39) list_single_number_pane_ParamLimits

0x266e,	// (0x0003ca39) list_single_number_pane

0x266e,	// (0x0003ca39) list_single_pane_ParamLimits

0x266e,	// (0x0003ca39) list_single_pane

0xad53,	// (0x0004511e) list_highlight_pane_cp1

0xb309,	// (0x000456d4) list_single_pane_g1_ParamLimits

0xb309,	// (0x000456d4) list_single_pane_g1

0xb315,	// (0x000456e0) list_single_pane_g2_ParamLimits

0xb315,	// (0x000456e0) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0004999d) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0004999d) list_single_pane_g

0x94fa,	// (0x000438c5) list_single_pane_t1_ParamLimits

0x94fa,	// (0x000438c5) list_single_pane_t1

0xb309,	// (0x000456d4) list_single_number_pane_g1_ParamLimits

0xb309,	// (0x000456d4) list_single_number_pane_g1

0xb315,	// (0x000456e0) list_single_number_pane_g2_ParamLimits

0xb315,	// (0x000456e0) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0004999d) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0004999d) list_single_number_pane_g

0x7f91,	// (0x0004235c) list_single_number_pane_t1_ParamLimits

0x7f91,	// (0x0004235c) list_single_number_pane_t1

0x1996,	// (0x0003bd61) list_single_number_pane_t2_ParamLimits

0x1996,	// (0x0003bd61) list_single_number_pane_t2

0x0001,

0xf958,	// (0x00049d23) list_single_number_pane_t_ParamLimits

0xf958,	// (0x00049d23) list_single_number_pane_t

0x7f85,	// (0x00042350) list_single_graphic_pane_g1_ParamLimits

0x7f85,	// (0x00042350) list_single_graphic_pane_g1

0xb309,	// (0x000456d4) list_single_graphic_pane_g2_ParamLimits

0xb309,	// (0x000456d4) list_single_graphic_pane_g2

0xb315,	// (0x000456e0) list_single_graphic_pane_g3_ParamLimits

0xb315,	// (0x000456e0) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0004998c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0004998c) list_single_graphic_pane_g

0x7f91,	// (0x0004235c) list_single_graphic_pane_t1_ParamLimits

0x7f91,	// (0x0004235c) list_single_graphic_pane_t1

0x13f5,	// (0x0003b7c0) list_single_heading_pane_g1_ParamLimits

0x13f5,	// (0x0003b7c0) list_single_heading_pane_g1

0xb315,	// (0x000456e0) list_single_heading_pane_g2_ParamLimits

0xb315,	// (0x000456e0) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00049993) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00049993) list_single_heading_pane_g

0x1408,	// (0x0003b7d3) list_single_heading_pane_t1_ParamLimits

0x1408,	// (0x0003b7d3) list_single_heading_pane_t1

0x1d23,	// (0x0003c0ee) list_single_heading_pane_t2_ParamLimits

0x1d23,	// (0x0003c0ee) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00049998) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00049998) list_single_heading_pane_t

0xb309,	// (0x000456d4) list_single_number_heading_pane_g1_ParamLimits

0xb309,	// (0x000456d4) list_single_number_heading_pane_g1

0xb315,	// (0x000456e0) list_single_number_heading_pane_g2_ParamLimits

0xb315,	// (0x000456e0) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0004999d) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0004999d) list_single_number_heading_pane_g

0x141e,	// (0x0003b7e9) list_single_number_heading_pane_t1_ParamLimits

0x141e,	// (0x0003b7e9) list_single_number_heading_pane_t1

0x1434,	// (0x0003b7ff) list_single_number_heading_pane_t2_ParamLimits

0x1434,	// (0x0003b7ff) list_single_number_heading_pane_t2

0xb321,	// (0x000456ec) list_single_number_heading_pane_t3_ParamLimits

0xb321,	// (0x000456ec) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x000499a2) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x000499a2) list_single_number_heading_pane_t

0x1446,	// (0x0003b811) list_single_graphic_heading_pane_g1_ParamLimits

0x1446,	// (0x0003b811) list_single_graphic_heading_pane_g1

0x1d35,	// (0x0003c100) list_single_graphic_heading_pane_g4_ParamLimits

0x1d35,	// (0x0003c100) list_single_graphic_heading_pane_g4

0xb315,	// (0x000456e0) list_single_graphic_heading_pane_g5_ParamLimits

0xb315,	// (0x000456e0) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x000499a9) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x000499a9) list_single_graphic_heading_pane_g

0x141e,	// (0x0003b7e9) list_single_graphic_heading_pane_t1_ParamLimits

0x141e,	// (0x0003b7e9) list_single_graphic_heading_pane_t1

0x145c,	// (0x0003b827) list_single_graphic_heading_pane_t2_ParamLimits

0x145c,	// (0x0003b827) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x000499b0) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x000499b0) list_single_graphic_heading_pane_t

0xb333,	// (0x000456fe) list_single_large_graphic_pane_g1_ParamLimits

0xb333,	// (0x000456fe) list_single_large_graphic_pane_g1

0xb33f,	// (0x0004570a) list_single_large_graphic_pane_g2_ParamLimits

0xb33f,	// (0x0004570a) list_single_large_graphic_pane_g2

0xb34b,	// (0x00045716) list_single_large_graphic_pane_g3_ParamLimits

0xb34b,	// (0x00045716) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x000499b5) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x000499b5) list_single_large_graphic_pane_g

0xcb40,	// (0x00046f0b) wait_border_pane_g2_copy1

0xb357,	// (0x00045722) list_single_large_graphic_pane_g4_cp2

0x7fa7,	// (0x00042372) list_single_large_graphic_pane_t1_ParamLimits

0x7fa7,	// (0x00042372) list_single_large_graphic_pane_t1

0x1d46,	// (0x0003c111) list_double_pane_g1_ParamLimits

0x1d46,	// (0x0003c111) list_double_pane_g1

0x1d52,	// (0x0003c11d) list_double_pane_g2_ParamLimits

0x1d52,	// (0x0003c11d) list_double_pane_g2

0x0001,

0xf5f1,	// (0x000499bc) list_double_pane_g_ParamLimits

0xf5f1,	// (0x000499bc) list_double_pane_g

0x1474,	// (0x0003b83f) list_double_pane_t1_ParamLimits

0x1474,	// (0x0003b83f) list_double_pane_t1

0x148a,	// (0x0003b855) list_double_pane_t2_ParamLimits

0x148a,	// (0x0003b855) list_double_pane_t2

0x0001,

0xf5f6,	// (0x000499c1) list_double_pane_t_ParamLimits

0xf5f6,	// (0x000499c1) list_double_pane_t

0x149c,	// (0x0003b867) list_double2_pane_g1_ParamLimits

0x149c,	// (0x0003b867) list_double2_pane_g1

0x14ad,	// (0x0003b878) list_double2_pane_g2_ParamLimits

0x14ad,	// (0x0003b878) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x000499c6) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x000499c6) list_double2_pane_g

0x14b9,	// (0x0003b884) list_double2_pane_t1_ParamLimits

0x14b9,	// (0x0003b884) list_double2_pane_t1

0x14cf,	// (0x0003b89a) list_double2_pane_t2_ParamLimits

0x14cf,	// (0x0003b89a) list_double2_pane_t2

0x0001,

0xf600,	// (0x000499cb) list_double2_pane_t_ParamLimits

0xf600,	// (0x000499cb) list_double2_pane_t

0x1d46,	// (0x0003c111) list_double_number_pane_g1_ParamLimits

0x1d46,	// (0x0003c111) list_double_number_pane_g1

0x1d52,	// (0x0003c11d) list_double_number_pane_g2_ParamLimits

0x1d52,	// (0x0003c11d) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x000499bc) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x000499bc) list_double_number_pane_g

0x14e1,	// (0x0003b8ac) list_double_number_pane_t1_ParamLimits

0x14e1,	// (0x0003b8ac) list_double_number_pane_t1

0x14f3,	// (0x0003b8be) list_double_number_pane_t2_ParamLimits

0x14f3,	// (0x0003b8be) list_double_number_pane_t2

0x1509,	// (0x0003b8d4) list_double_number_pane_t3_ParamLimits

0x1509,	// (0x0003b8d4) list_double_number_pane_t3

0x0002,

0xf605,	// (0x000499d0) list_double_number_pane_t_ParamLimits

0xf605,	// (0x000499d0) list_double_number_pane_t

0x7fbd,	// (0x00042388) list_double_graphic_pane_g1_ParamLimits

0x7fbd,	// (0x00042388) list_double_graphic_pane_g1

0x1d5e,	// (0x0003c129) list_double_graphic_pane_g2_ParamLimits

0x1d5e,	// (0x0003c129) list_double_graphic_pane_g2

0x1d6d,	// (0x0003c138) list_double_graphic_pane_g3_ParamLimits

0x1d6d,	// (0x0003c138) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x000499d7) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x000499d7) list_double_graphic_pane_g

0x1527,	// (0x0003b8f2) list_double_graphic_pane_t1_ParamLimits

0x1527,	// (0x0003b8f2) list_double_graphic_pane_t1

0x153d,	// (0x0003b908) list_double_graphic_pane_t2_ParamLimits

0x153d,	// (0x0003b908) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x000499e0) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x000499e0) list_double_graphic_pane_t

0x7fc9,	// (0x00042394) list_double2_graphic_pane_g1_ParamLimits

0x7fc9,	// (0x00042394) list_double2_graphic_pane_g1

0xb35f,	// (0x0004572a) list_double2_graphic_pane_g2_ParamLimits

0xb35f,	// (0x0004572a) list_double2_graphic_pane_g2

0xb36b,	// (0x00045736) list_double2_graphic_pane_g3_ParamLimits

0xb36b,	// (0x00045736) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x000499e5) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x000499e5) list_double2_graphic_pane_g

0x7fd5,	// (0x000423a0) list_double2_graphic_pane_t1_ParamLimits

0x7fd5,	// (0x000423a0) list_double2_graphic_pane_t1

0x154f,	// (0x0003b91a) list_double2_graphic_pane_t2_ParamLimits

0x154f,	// (0x0003b91a) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x000499ec) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x000499ec) list_double2_graphic_pane_t

0x1561,	// (0x0003b92c) list_double_large_graphic_pane_g1_ParamLimits

0x1561,	// (0x0003b92c) list_double_large_graphic_pane_g1

0x1585,	// (0x0003b950) list_double_large_graphic_pane_g2_ParamLimits

0x1585,	// (0x0003b950) list_double_large_graphic_pane_g2

0x1d52,	// (0x0003c11d) list_double_large_graphic_pane_g3_ParamLimits

0x1d52,	// (0x0003c11d) list_double_large_graphic_pane_g3

0x159b,	// (0x0003b966) list_double_large_graphic_pane_g4_ParamLimits

0x159b,	// (0x0003b966) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x000499f1) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x000499f1) list_double_large_graphic_pane_g

0x15ac,	// (0x0003b977) list_double_large_graphic_pane_t1_ParamLimits

0x15ac,	// (0x0003b977) list_double_large_graphic_pane_t1

0x15c5,	// (0x0003b990) list_double_large_graphic_pane_t2_ParamLimits

0x15c5,	// (0x0003b990) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x000499fc) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x000499fc) list_double_large_graphic_pane_t

0x1d79,	// (0x0003c144) list_double2_large_graphic_pane_g1_ParamLimits

0x1d79,	// (0x0003c144) list_double2_large_graphic_pane_g1

0x15d7,	// (0x0003b9a2) list_double2_large_graphic_pane_g2_ParamLimits

0x15d7,	// (0x0003b9a2) list_double2_large_graphic_pane_g2

0xb36b,	// (0x00045736) list_double2_large_graphic_pane_g3_ParamLimits

0xb36b,	// (0x00045736) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x00049a01) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x00049a01) list_double2_large_graphic_pane_g

0x7feb,	// (0x000423b6) list_double2_large_graphic_pane_t1_ParamLimits

0x7feb,	// (0x000423b6) list_double2_large_graphic_pane_t1

0x15e8,	// (0x0003b9b3) list_double2_large_graphic_pane_t2_ParamLimits

0x15e8,	// (0x0003b9b3) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x00049a08) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x00049a08) list_double2_large_graphic_pane_t

0x15fa,	// (0x0003b9c5) list_double_heading_pane_g1_ParamLimits

0x15fa,	// (0x0003b9c5) list_double_heading_pane_g1

0x1d85,	// (0x0003c150) list_double_heading_pane_g2_ParamLimits

0x1d85,	// (0x0003c150) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x00049a0d) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x00049a0d) list_double_heading_pane_g

0x160b,	// (0x0003b9d6) list_double_heading_pane_t1_ParamLimits

0x160b,	// (0x0003b9d6) list_double_heading_pane_t1

0x14cf,	// (0x0003b89a) list_double_heading_pane_t2_ParamLimits

0x14cf,	// (0x0003b89a) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x00049a12) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x00049a12) list_double_heading_pane_t

0x7fbd,	// (0x00042388) list_double_graphic_heading_pane_g1_ParamLimits

0x7fbd,	// (0x00042388) list_double_graphic_heading_pane_g1

0x15fa,	// (0x0003b9c5) list_double_graphic_heading_pane_g2_ParamLimits

0x15fa,	// (0x0003b9c5) list_double_graphic_heading_pane_g2

0x1d85,	// (0x0003c150) list_double_graphic_heading_pane_g3_ParamLimits

0x1d85,	// (0x0003c150) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x00049a17) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x00049a17) list_double_graphic_heading_pane_g

0x1621,	// (0x0003b9ec) list_double_graphic_heading_pane_t1_ParamLimits

0x1621,	// (0x0003b9ec) list_double_graphic_heading_pane_t1

0x154f,	// (0x0003b91a) list_double_graphic_heading_pane_t2_ParamLimits

0x154f,	// (0x0003b91a) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x00049a1e) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x00049a1e) list_double_graphic_heading_pane_t

0x1637,	// (0x0003ba02) list_double_time_pane_g1_ParamLimits

0x1637,	// (0x0003ba02) list_double_time_pane_g1

0x1648,	// (0x0003ba13) list_double_time_pane_g2_ParamLimits

0x1648,	// (0x0003ba13) list_double_time_pane_g2

0x0001,

0xf658,	// (0x00049a23) list_double_time_pane_g_ParamLimits

0xf658,	// (0x00049a23) list_double_time_pane_g

0x1654,	// (0x0003ba1f) list_double_time_pane_t1_ParamLimits

0x1654,	// (0x0003ba1f) list_double_time_pane_t1

0x166a,	// (0x0003ba35) list_double_time_pane_t2_ParamLimits

0x166a,	// (0x0003ba35) list_double_time_pane_t2

0x167c,	// (0x0003ba47) list_double_time_pane_t3_ParamLimits

0x167c,	// (0x0003ba47) list_double_time_pane_t3

0x168e,	// (0x0003ba59) list_double_time_pane_t4_ParamLimits

0x168e,	// (0x0003ba59) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x00049a28) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x00049a28) list_double_time_pane_t

0x8001,	// (0x000423cc) list_setting_pane_g1_ParamLimits

0x8001,	// (0x000423cc) list_setting_pane_g1

0x800d,	// (0x000423d8) list_setting_pane_g2_ParamLimits

0x800d,	// (0x000423d8) list_setting_pane_g2

0x0001,

0xf666,	// (0x00049a31) list_setting_pane_g_ParamLimits

0xf666,	// (0x00049a31) list_setting_pane_g

0x16a0,	// (0x0003ba6b) list_setting_pane_t1_ParamLimits

0x16a0,	// (0x0003ba6b) list_setting_pane_t1

0x16ba,	// (0x0003ba85) list_setting_pane_t2_ParamLimits

0x16ba,	// (0x0003ba85) list_setting_pane_t2

0x0002,

0xf66b,	// (0x00049a36) list_setting_pane_t_ParamLimits

0xf66b,	// (0x00049a36) list_setting_pane_t

0x16f7,	// (0x0003bac2) set_value_pane_cp_ParamLimits

0x16f7,	// (0x0003bac2) set_value_pane_cp

0x1703,	// (0x0003bace) list_setting_number_pane_g1_ParamLimits

0x1703,	// (0x0003bace) list_setting_number_pane_g1

0x170f,	// (0x0003bada) list_setting_number_pane_g2_ParamLimits

0x170f,	// (0x0003bada) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x00049a3d) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x00049a3d) list_setting_number_pane_g

0x171b,	// (0x0003bae6) list_setting_number_pane_t1_ParamLimits

0x171b,	// (0x0003bae6) list_setting_number_pane_t1

0x1734,	// (0x0003baff) list_setting_number_pane_t2_ParamLimits

0x1734,	// (0x0003baff) list_setting_number_pane_t2

0x174e,	// (0x0003bb19) list_setting_number_pane_t3_ParamLimits

0x174e,	// (0x0003bb19) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x00049a42) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x00049a42) list_setting_number_pane_t

0x16f7,	// (0x0003bac2) set_value_pane_ParamLimits

0x16f7,	// (0x0003bac2) set_value_pane

0xb38c,	// (0x00045757) bg_set_opt_pane_ParamLimits

0xb38c,	// (0x00045757) bg_set_opt_pane

0x8019,	// (0x000423e4) set_value_pane_t1

0xb3ad,	// (0x00045778) slider_set_pane_cp3

0xb3b6,	// (0x00045781) volume_small_pane_cp

0xb3bf,	// (0x0004578a) list_form_gen_pane

0xb2f8,	// (0x000456c3) scroll_pane_cp8

0x1791,	// (0x0003bb5c) form_field_data_pane_ParamLimits

0x1791,	// (0x0003bb5c) form_field_data_pane

0x17a8,	// (0x0003bb73) form_field_data_wide_pane_ParamLimits

0x17a8,	// (0x0003bb73) form_field_data_wide_pane

0x17c8,	// (0x0003bb93) form_field_popup_pane_ParamLimits

0x17c8,	// (0x0003bb93) form_field_popup_pane

0x17e0,	// (0x0003bbab) form_field_popup_wide_pane_ParamLimits

0x17e0,	// (0x0003bbab) form_field_popup_wide_pane

0x803f,	// (0x0004240a) form_field_slider_pane_ParamLimits

0x803f,	// (0x0004240a) form_field_slider_pane

0x8052,	// (0x0004241d) form_field_slider_wide_pane_ParamLimits

0x8052,	// (0x0004241d) form_field_slider_wide_pane

0xb3c8,	// (0x00045793) data_form_pane

0x1801,	// (0x0003bbcc) form_field_data_pane_t1

0xb3d4,	// (0x0004579f) input_focus_pane

0xb3e2,	// (0x000457ad) data_form_wide_pane

0x8071,	// (0x0004243c) form_field_data_wide_pane_t1

0xb177,	// (0x00045542) input_focus_pane_cp6

0x1819,	// (0x0003bbe4) form_field_popup_pane_t1

0xb3d4,	// (0x0004579f) input_focus_pane_cp7

0xb3c8,	// (0x00045793) list_form_pane

0x809b,	// (0x00042466) form_field_popup_wide_pane_t1

0xb3d4,	// (0x0004579f) input_focus_pane_cp8

0xb40e,	// (0x000457d9) list_form_wide_pane

0x1839,	// (0x0003bc04) form_field_slider_pane_t1_ParamLimits

0x1839,	// (0x0003bc04) form_field_slider_pane_t1

0x184f,	// (0x0003bc1a) form_field_slider_pane_t2_ParamLimits

0x184f,	// (0x0003bc1a) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x00049a52) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x00049a52) form_field_slider_pane_t

0xada1,	// (0x0004516c) input_focus_pane_cp9_ParamLimits

0xada1,	// (0x0004516c) input_focus_pane_cp9

0x1864,	// (0x0003bc2f) slider_cont_pane_ParamLimits

0x1864,	// (0x0003bc2f) slider_cont_pane

0xb41d,	// (0x000457e8) form_field_slider_wide_pane_t1_ParamLimits

0xb41d,	// (0x000457e8) form_field_slider_wide_pane_t1

0x80b0,	// (0x0004247b) form_field_slider_wide_pane_t2_ParamLimits

0x80b0,	// (0x0004247b) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x00049a57) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x00049a57) form_field_slider_wide_pane_t

0xada1,	// (0x0004516c) input_focus_pane_cp10_ParamLimits

0xada1,	// (0x0004516c) input_focus_pane_cp10

0x1878,	// (0x0003bc43) slider_cont_pane_cp1_ParamLimits

0x1878,	// (0x0003bc43) slider_cont_pane_cp1

0x188e,	// (0x0003bc59) slider_form_pane_cp

0xb42f,	// (0x000457fa) input_focus_pane_g1

0xb437,	// (0x00045802) input_focus_pane_g2

0xb43f,	// (0x0004580a) input_focus_pane_g3

0xb447,	// (0x00045812) input_focus_pane_g4

0xb44f,	// (0x0004581a) input_focus_pane_g5

0xb457,	// (0x00045822) input_focus_pane_g6

0xb45f,	// (0x0004582a) input_focus_pane_g7

0xb467,	// (0x00045832) input_focus_pane_g8

0xb46f,	// (0x0004583a) input_focus_pane_g9

0xacd1,	// (0x0004509c) input_focus_pane_g10

0x0009,

0xf691,	// (0x00049a5c) input_focus_pane_g

0xcb49,	// (0x00046f14) wait_border_pane_g3_copy1

0x1896,	// (0x0003bc61) data_form_pane_t1

0xacd1,	// (0x0004509c) wait_anim_pane_g1_copy1

0x19a8,	// (0x0003bd73) data_form_wide_pane_t1

0x18ae,	// (0x0003bc79) list_form_graphic_pane_cp_ParamLimits

0x18ae,	// (0x0003bc79) list_form_graphic_pane_cp

0xd748,	// (0x00047b13) slider_form_pane_g1

0xd751,	// (0x00047b1c) slider_form_pane_g2

0x0006,

0xf988,	// (0x00049d53) slider_form_pane_g

0x80c2,	// (0x0004248d) list_form_graphic_pane_ParamLimits

0x80c2,	// (0x0004248d) list_form_graphic_pane

0x80d6,	// (0x000424a1) list_form_graphic_pane_g1

0x80de,	// (0x000424a9) list_form_graphic_pane_t1_ParamLimits

0x80de,	// (0x000424a9) list_form_graphic_pane_t1

0xadb7,	// (0x00045182) list_highlight_pane_cp5_ParamLimits

0xadb7,	// (0x00045182) list_highlight_pane_cp5

0x18c1,	// (0x0003bc8c) find_pane_g1

0xb477,	// (0x00045842) input_find_pane

0x18cc,	// (0x0003bc97) input_find_pane_g1_ParamLimits

0x18cc,	// (0x0003bc97) input_find_pane_g1

0x18d8,	// (0x0003bca3) input_find_pane_t1_ParamLimits

0x18d8,	// (0x0003bca3) input_find_pane_t1

0x18ed,	// (0x0003bcb8) input_find_pane_t2_ParamLimits

0x18ed,	// (0x0003bcb8) input_find_pane_t2

0x0001,

0xf6a6,	// (0x00049a71) input_find_pane_t_ParamLimits

0xf6a6,	// (0x00049a71) input_find_pane_t

0xb480,	// (0x0004584b) input_focus_pane_cp5_ParamLimits

0xb480,	// (0x0004584b) input_focus_pane_cp5

0xada1,	// (0x0004516c) bg_popup_window_pane_cp2_ParamLimits

0xada1,	// (0x0004516c) bg_popup_window_pane_cp2

0xb49a,	// (0x00045865) listscroll_menu_pane_ParamLimits

0xb49a,	// (0x00045865) listscroll_menu_pane

0xb4a6,	// (0x00045871) popup_submenu_window_ParamLimits

0xb4a6,	// (0x00045871) popup_submenu_window

0xb4ca,	// (0x00045895) find_popup_pane_g1

0xb4d2,	// (0x0004589d) input_popup_find_pane_cp

0xb480,	// (0x0004584b) input_focus_pane_cp4_ParamLimits

0xb480,	// (0x0004584b) input_focus_pane_cp4

0xb4dc,	// (0x000458a7) input_popup_find_pane_t1_ParamLimits

0xb4dc,	// (0x000458a7) input_popup_find_pane_t1

0xad53,	// (0x0004511e) bg_popup_sub_pane_cp

0xb50a,	// (0x000458d5) listscroll_popup_sub_pane

0xb512,	// (0x000458dd) list_submenu_pane_ParamLimits

0xb512,	// (0x000458dd) list_submenu_pane

0xb523,	// (0x000458ee) scroll_pane_cp4

0xb52b,	// (0x000458f6) list_single_popup_submenu_pane_ParamLimits

0xb52b,	// (0x000458f6) list_single_popup_submenu_pane

0xb53d,	// (0x00045908) list_single_popup_submenu_pane_g1

0xb545,	// (0x00045910) list_single_popup_submenu_pane_t1_ParamLimits

0xb545,	// (0x00045910) list_single_popup_submenu_pane_t1

0xada1,	// (0x0004516c) bg_active_tab_pane_cp1_ParamLimits

0xada1,	// (0x0004516c) bg_active_tab_pane_cp1

0xd2c0,	// (0x0004768b) tabs_2_active_pane_g1

0x80ff,	// (0x000424ca) tabs_2_active_pane_t1

0xada1,	// (0x0004516c) bg_passive_tab_pane_cp1_ParamLimits

0xada1,	// (0x0004516c) bg_passive_tab_pane_cp1

0xd2c0,	// (0x0004768b) tabs_2_passive_pane_g1

0x80ff,	// (0x000424ca) tabs_2_passive_pane_t1

0xadb7,	// (0x00045182) bg_active_tab_pane_cp4

0x8115,	// (0x000424e0) tabs_2_long_active_pane_t1

0xb55a,	// (0x00045925) bg_passive_tab_pane_cp4

0x5401,	// (0x0003f7cc) list_single_midp_graphic_pane_g4_ParamLimits

0xadb7,	// (0x00045182) bg_active_tab_pane_cp5

0x812c,	// (0x000424f7) tabs_3_long_active_pane_t1

0xb55a,	// (0x00045925) bg_passive_tab_pane_cp5

0x5401,	// (0x0003f7cc) list_single_midp_graphic_pane_g4

0xadb7,	// (0x00045182) bg_popup_window_pane_cp13_ParamLimits

0xadb7,	// (0x00045182) bg_popup_window_pane_cp13

0xb56f,	// (0x0004593a) listscroll_popup_fast_pane_ParamLimits

0xb56f,	// (0x0004593a) listscroll_popup_fast_pane

0xb57e,	// (0x00045949) grid_popup_fast_pane_ParamLimits

0xb57e,	// (0x00045949) grid_popup_fast_pane

0xb590,	// (0x0004595b) scroll_pane_cp9_ParamLimits

0xb590,	// (0x0004595b) scroll_pane_cp9

0xea60,	// (0x00048e2b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xea60,	// (0x00048e2b) list_single_graphic_hl_pane_t1_cp2

0xb5b4,	// (0x0004597f) input_focus_pane_cp20_ParamLimits

0xb5b4,	// (0x0004597f) input_focus_pane_cp20

0xb5c2,	// (0x0004598d) query_popup_data_pane_t1_ParamLimits

0xb5c2,	// (0x0004598d) query_popup_data_pane_t1

0xb5d5,	// (0x000459a0) query_popup_data_pane_t2_ParamLimits

0xb5d5,	// (0x000459a0) query_popup_data_pane_t2

0xb61b,	// (0x000459e6) query_popup_data_pane_t3_ParamLimits

0xb61b,	// (0x000459e6) query_popup_data_pane_t3

0xb65c,	// (0x00045a27) query_popup_data_pane_t4_ParamLimits

0xb65c,	// (0x00045a27) query_popup_data_pane_t4

0xb698,	// (0x00045a63) query_popup_data_pane_t5_ParamLimits

0xb698,	// (0x00045a63) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x00049a76) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x00049a76) query_popup_data_pane_t

0xb42f,	// (0x000457fa) bg_set_opt_pane_g1

0xb437,	// (0x00045802) bg_set_opt_pane_g2

0xb43f,	// (0x0004580a) bg_set_opt_pane_g3

0xb447,	// (0x00045812) bg_set_opt_pane_g4

0xb44f,	// (0x0004581a) bg_set_opt_pane_g5

0xb457,	// (0x00045822) bg_set_opt_pane_g6

0xb45f,	// (0x0004582a) bg_set_opt_pane_g7

0xb467,	// (0x00045832) bg_set_opt_pane_g8

0xb46f,	// (0x0004583a) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x00049a81) bg_set_opt_pane_g

0x4bd3,	// (0x0003ef9e) control_top_pane_stacon_ParamLimits

0x4bd3,	// (0x0003ef9e) control_top_pane_stacon

0x4c26,	// (0x0003eff1) signal_pane_stacon_ParamLimits

0x4c26,	// (0x0003eff1) signal_pane_stacon

0xba8b,	// (0x00045e56) stacon_top_pane_g1_ParamLimits

0xba8b,	// (0x00045e56) stacon_top_pane_g1

0x4c4b,	// (0x0003f016) title_pane_stacon_ParamLimits

0x4c4b,	// (0x0003f016) title_pane_stacon

0x4c6d,	// (0x0003f038) uni_indicator_pane_stacon_ParamLimits

0x4c6d,	// (0x0003f038) uni_indicator_pane_stacon

0x4c82,	// (0x0003f04d) battery_pane_stacon_ParamLimits

0x4c82,	// (0x0003f04d) battery_pane_stacon

0x4cc2,	// (0x0003f08d) control_bottom_pane_stacon_ParamLimits

0x4cc2,	// (0x0003f08d) control_bottom_pane_stacon

0x4ce1,	// (0x0003f0ac) navi_pane_stacon_ParamLimits

0x4ce1,	// (0x0003f0ac) navi_pane_stacon

0xbaad,	// (0x00045e78) stacon_bottom_pane_g1_ParamLimits

0xbaad,	// (0x00045e78) stacon_bottom_pane_g1

0xb6cf,	// (0x00045a9a) aid_levels_signal_lsc_ParamLimits

0xb6cf,	// (0x00045a9a) aid_levels_signal_lsc

0x499f,	// (0x0003ed6a) signal_pane_stacon_g1_ParamLimits

0x499f,	// (0x0003ed6a) signal_pane_stacon_g1

0x49ab,	// (0x0003ed76) signal_pane_stacon_g2_ParamLimits

0x49ab,	// (0x0003ed76) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x00049a94) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00049a94) signal_pane_stacon_g

0x49df,	// (0x0003edaa) title_pane_stacon_t1_ParamLimits

0x49df,	// (0x0003edaa) title_pane_stacon_t1

0xb6e9,	// (0x00045ab4) uni_indicator_pane_stacon_g1

0xb6f3,	// (0x00045abe) uni_indicator_pane_stacon_g2

0xb6fd,	// (0x00045ac8) uni_indicator_pane_stacon_g3

0xb707,	// (0x00045ad2) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x00049aa0) uni_indicator_pane_stacon_g

0x4a04,	// (0x0003edcf) control_top_pane_stacon_g1

0x4a0c,	// (0x0003edd7) control_top_pane_stacon_t1_ParamLimits

0x4a0c,	// (0x0003edd7) control_top_pane_stacon_t1

0xb711,	// (0x00045adc) aid_levels_battery_lsc_ParamLimits

0xb711,	// (0x00045adc) aid_levels_battery_lsc

0x4a3d,	// (0x0003ee08) battery_pane_stacon_g1_ParamLimits

0x4a3d,	// (0x0003ee08) battery_pane_stacon_g1

0x4a49,	// (0x0003ee14) battery_pane_stacon_g2_ParamLimits

0x4a49,	// (0x0003ee14) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x00049aa9) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x00049aa9) battery_pane_stacon_g

0x4a78,	// (0x0003ee43) navi_icon_pane_stacon

0x4a88,	// (0x0003ee53) navi_navi_pane_stacon

0x4a78,	// (0x0003ee43) navi_text_pane_stacon

0x4a04,	// (0x0003edcf) control_bottom_pane_stacon_g1

0x4a98,	// (0x0003ee63) control_bottom_pane_stacon_t1_ParamLimits

0x4a98,	// (0x0003ee63) control_bottom_pane_stacon_t1

0x8142,	// (0x0004250d) grid_app_pane_ParamLimits

0x8142,	// (0x0004250d) grid_app_pane

0x8170,	// (0x0004253b) scroll_pane_cp15_ParamLimits

0x8170,	// (0x0004253b) scroll_pane_cp15

0x8183,	// (0x0004254e) cell_app_pane_ParamLimits

0x8183,	// (0x0004254e) cell_app_pane

0x81c0,	// (0x0004258b) cell_app_pane_g1_ParamLimits

0x81c0,	// (0x0004258b) cell_app_pane_g1

0xb739,	// (0x00045b04) cell_app_pane_g2_ParamLimits

0xb739,	// (0x00045b04) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x00049aae) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x00049aae) cell_app_pane_g

0x81e4,	// (0x000425af) cell_app_pane_t1_ParamLimits

0x81e4,	// (0x000425af) cell_app_pane_t1

0xb745,	// (0x00045b10) grid_highlight_pane_ParamLimits

0xb745,	// (0x00045b10) grid_highlight_pane

0xb42f,	// (0x000457fa) cell_highlight_pane_g1

0xb437,	// (0x00045802) cell_highlight_pane_g2

0xb43f,	// (0x0004580a) cell_highlight_pane_g3

0xb447,	// (0x00045812) cell_highlight_pane_g4

0xb44f,	// (0x0004581a) cell_highlight_pane_g5

0xb457,	// (0x00045822) cell_highlight_pane_g6

0xb45f,	// (0x0004582a) cell_highlight_pane_g7

0xb467,	// (0x00045832) cell_highlight_pane_g8

0xb46f,	// (0x0004583a) cell_highlight_pane_g9

0xacd1,	// (0x0004509c) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x00049a5c) cell_highlight_pane_g

0xb756,	// (0x00045b21) bg_scroll_pane

0x4adc,	// (0x0003eea7) scroll_handle_pane

0xb79d,	// (0x00045b68) scroll_bg_pane_g1

0xb7b2,	// (0x00045b7d) scroll_bg_pane_g2

0xb7ca,	// (0x00045b95) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x00049ab3) scroll_bg_pane_g

0xb7df,	// (0x00045baa) scroll_handle_focus_pane_ParamLimits

0xb7df,	// (0x00045baa) scroll_handle_focus_pane

0xb79d,	// (0x00045b68) scroll_handle_pane_g1

0xb7ec,	// (0x00045bb7) scroll_handle_pane_g2

0xb7ca,	// (0x00045b95) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x00049aba) scroll_handle_pane_g

0xb480,	// (0x0004584b) bg_popup_sub_pane_cp21_ParamLimits

0xb480,	// (0x0004584b) bg_popup_sub_pane_cp21

0xb800,	// (0x00045bcb) popup_fep_japan_predictive_window_t1_ParamLimits

0xb800,	// (0x00045bcb) popup_fep_japan_predictive_window_t1

0xb817,	// (0x00045be2) popup_fep_japan_predictive_window_t2_ParamLimits

0xb817,	// (0x00045be2) popup_fep_japan_predictive_window_t2

0xb84a,	// (0x00045c15) popup_fep_japan_predictive_window_t3_ParamLimits

0xb84a,	// (0x00045c15) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x00049ac1) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x00049ac1) popup_fep_japan_predictive_window_t

0xad53,	// (0x0004511e) bg_popup_sub_pane_cp23

0xb881,	// (0x00045c4c) listscroll_japin_cand_pane

0xb889,	// (0x00045c54) popup_fep_japan_candidate_window_t1

0xb897,	// (0x00045c62) candidate_pane_ParamLimits

0xb897,	// (0x00045c62) candidate_pane

0xb8aa,	// (0x00045c75) scroll_pane_cp30

0xb8b2,	// (0x00045c7d) list_single_popup_jap_candidate_pane_ParamLimits

0xb8b2,	// (0x00045c7d) list_single_popup_jap_candidate_pane

0xad53,	// (0x0004511e) list_highlight_pane_cp30

0xb8c7,	// (0x00045c92) list_single_popup_jap_candidate_pane_t1

0x8204,	// (0x000425cf) level_1_signal

0x8216,	// (0x000425e1) level_2_signal

0x8229,	// (0x000425f4) level_3_signal

0x823c,	// (0x00042607) level_4_signal

0x824f,	// (0x0004261a) level_5_signal

0x8262,	// (0x0004262d) level_6_signal

0x8275,	// (0x00042640) level_7_signal

0x8204,	// (0x000425cf) level_1_battery

0x8216,	// (0x000425e1) level_2_battery

0x8229,	// (0x000425f4) level_3_battery

0x823c,	// (0x00042607) level_4_battery

0x824f,	// (0x0004261a) level_5_battery

0x8262,	// (0x0004262d) level_6_battery

0x8275,	// (0x00042640) level_7_battery

0xb8ee,	// (0x00045cb9) list_menu_pane_ParamLimits

0xb8ee,	// (0x00045cb9) list_menu_pane

0xb904,	// (0x00045ccf) scroll_pane_cp25_ParamLimits

0xb904,	// (0x00045ccf) scroll_pane_cp25

0x8288,	// (0x00042653) list_double2_graphic_pane_cp2_ParamLimits

0x8288,	// (0x00042653) list_double2_graphic_pane_cp2

0x8288,	// (0x00042653) list_double2_large_graphic_pane_cp2_ParamLimits

0x8288,	// (0x00042653) list_double2_large_graphic_pane_cp2

0x8288,	// (0x00042653) list_double2_pane_cp2_ParamLimits

0x8288,	// (0x00042653) list_double2_pane_cp2

0x8288,	// (0x00042653) list_double_graphic_pane_cp2_ParamLimits

0x8288,	// (0x00042653) list_double_graphic_pane_cp2

0x8288,	// (0x00042653) list_double_large_graphic_pane_cp2_ParamLimits

0x8288,	// (0x00042653) list_double_large_graphic_pane_cp2

0x8288,	// (0x00042653) list_double_number_pane_cp2_ParamLimits

0x8288,	// (0x00042653) list_double_number_pane_cp2

0x8288,	// (0x00042653) list_double_pane_cp2_ParamLimits

0x8288,	// (0x00042653) list_double_pane_cp2

0x82a3,	// (0x0004266e) list_single_2graphic_pane_cp2_ParamLimits

0x82a3,	// (0x0004266e) list_single_2graphic_pane_cp2

0x82a3,	// (0x0004266e) list_single_graphic_heading_pane_cp2_ParamLimits

0x82a3,	// (0x0004266e) list_single_graphic_heading_pane_cp2

0x82a3,	// (0x0004266e) list_single_graphic_pane_cp2_ParamLimits

0x82a3,	// (0x0004266e) list_single_graphic_pane_cp2

0x82a3,	// (0x0004266e) list_single_heading_pane_cp2_ParamLimits

0x82a3,	// (0x0004266e) list_single_heading_pane_cp2

0x82b4,	// (0x0004267f) list_single_large_graphic_pane_cp2_ParamLimits

0x82b4,	// (0x0004267f) list_single_large_graphic_pane_cp2

0x82a3,	// (0x0004266e) list_single_number_heading_pane_cp2_ParamLimits

0x82a3,	// (0x0004266e) list_single_number_heading_pane_cp2

0x82a3,	// (0x0004266e) list_single_number_pane_cp2_ParamLimits

0x82a3,	// (0x0004266e) list_single_number_pane_cp2

0x82a3,	// (0x0004266e) list_single_pane_cp2_ParamLimits

0x82a3,	// (0x0004266e) list_single_pane_cp2

0xb926,	// (0x00045cf1) bg_popup_sub_pane_cp22

0x4b8b,	// (0x0003ef56) popup_side_volume_key_window_g1

0x4baf,	// (0x0003ef7a) popup_side_volume_key_window_t1

0x4bcb,	// (0x0003ef96) volume_small_pane_cp1

0xada1,	// (0x0004516c) bg_popup_sub_pane_cp24_ParamLimits

0xada1,	// (0x0004516c) bg_popup_sub_pane_cp24

0xb93c,	// (0x00045d07) fep_china_uni_candidate_pane_ParamLimits

0xb93c,	// (0x00045d07) fep_china_uni_candidate_pane

0xb950,	// (0x00045d1b) fep_china_uni_entry_pane

0xb960,	// (0x00045d2b) popup_fep_china_uni_window_g1

0xb97c,	// (0x00045d47) fep_china_uni_entry_pane_g1

0xb984,	// (0x00045d4f) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x00049af2) fep_china_uni_entry_pane_g

0xb98c,	// (0x00045d57) fep_entry_item_pane

0xb996,	// (0x00045d61) fep_candidate_item_pane

0xb99e,	// (0x00045d69) fep_china_uni_candidate_pane_g1

0xb9a6,	// (0x00045d71) fep_china_uni_candidate_pane_g2

0xb9ae,	// (0x00045d79) fep_china_uni_candidate_pane_g3

0xb9b6,	// (0x00045d81) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x00049af7) fep_china_uni_candidate_pane_g

0xacd1,	// (0x0004509c) fep_entry_item_pane_g1

0xb9be,	// (0x00045d89) fep_entry_item_pane_t1_ParamLimits

0xb9be,	// (0x00045d89) fep_entry_item_pane_t1

0xb9d4,	// (0x00045d9f) fep_candidate_item_pane_t1_ParamLimits

0xb9d4,	// (0x00045d9f) fep_candidate_item_pane_t1

0xb9e9,	// (0x00045db4) fep_candidate_item_pane_t2_ParamLimits

0xb9e9,	// (0x00045db4) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x00049b00) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x00049b00) fep_candidate_item_pane_t

0xadb7,	// (0x00045182) list_highlight_pane_cp31_ParamLimits

0xadb7,	// (0x00045182) list_highlight_pane_cp31

0xb9fb,	// (0x00045dc6) level_1_signal_lsc

0xba04,	// (0x00045dcf) level_2_signal_lsc

0xba0d,	// (0x00045dd8) level_3_signal_lsc

0xba16,	// (0x00045de1) level_4_signal_lsc

0xba1f,	// (0x00045dea) level_5_signal_lsc

0xba28,	// (0x00045df3) level_6_signal_lsc

0xba31,	// (0x00045dfc) level_7_signal_lsc

0xba31,	// (0x00045dfc) level_1_battery_lsc

0xba3a,	// (0x00045e05) level_2_battery_lsc

0xba43,	// (0x00045e0e) level_3_battery_lsc

0xba4c,	// (0x00045e17) level_4_battery_lsc

0xba55,	// (0x00045e20) level_5_battery_lsc

0xba5e,	// (0x00045e29) level_6_battery_lsc

0xb9fb,	// (0x00045dc6) level_7_battery_lsc

0xba67,	// (0x00045e32) scroll_handle_focus_pane_g1

0xba70,	// (0x00045e3b) scroll_handle_focus_pane_g2

0xba79,	// (0x00045e44) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x00049b05) scroll_handle_focus_pane_g

0x1902,	// (0x0003bccd) list_single_2graphic_pane_g1_ParamLimits

0x1902,	// (0x0003bccd) list_single_2graphic_pane_g1

0x1d35,	// (0x0003c100) list_single_2graphic_pane_g2_ParamLimits

0x1d35,	// (0x0003c100) list_single_2graphic_pane_g2

0xb315,	// (0x000456e0) list_single_2graphic_pane_g3_ParamLimits

0xb315,	// (0x000456e0) list_single_2graphic_pane_g3

0x190e,	// (0x0003bcd9) list_single_2graphic_pane_g4_ParamLimits

0x190e,	// (0x0003bcd9) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x00049b0c) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x00049b0c) list_single_2graphic_pane_g

0x191f,	// (0x0003bcea) list_single_2graphic_pane_t1_ParamLimits

0x191f,	// (0x0003bcea) list_single_2graphic_pane_t1

0x1d9a,	// (0x0003c165) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x1d9a,	// (0x0003c165) list_double2_graphic_large_graphic_pane_g1

0x15d7,	// (0x0003b9a2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x15d7,	// (0x0003b9a2) list_double2_graphic_large_graphic_pane_g2

0xb36b,	// (0x00045736) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb36b,	// (0x00045736) list_double2_graphic_large_graphic_pane_g3

0x194d,	// (0x0003bd18) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x194d,	// (0x0003bd18) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x00049b15) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x00049b15) list_double2_graphic_large_graphic_pane_g

0x1959,	// (0x0003bd24) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x1959,	// (0x0003bd24) list_double2_graphic_large_graphic_pane_t1

0x196f,	// (0x0003bd3a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x196f,	// (0x0003bd3a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x00049b1e) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x00049b1e) list_double2_graphic_large_graphic_pane_t

0xbb54,	// (0x00045f1f) popup_fast_swap_window_ParamLimits

0xbb54,	// (0x00045f1f) popup_fast_swap_window

0xbb70,	// (0x00045f3b) popup_side_volume_key_window

0xbb8a,	// (0x00045f55) stacon_top_pane

0xbb94,	// (0x00045f5f) status_pane_ParamLimits

0xbb94,	// (0x00045f5f) status_pane

0x8383,	// (0x0004274e) status_small_pane

0xad53,	// (0x0004511e) control_pane

0xad53,	// (0x0004511e) stacon_bottom_pane

0xb2f8,	// (0x000456c3) scroll_pane_cp121

0xb3bf,	// (0x0004578a) set_content_pane

0xd2c8,	// (0x00047693) bg_active_tab_pane_g1_cp1

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp1

0xd2d1,	// (0x0004769c) bg_active_tab_pane_g3_cp1

0xd2c8,	// (0x00047693) bg_passive_tab_pane_g1_cp1

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp1

0xd2d1,	// (0x0004769c) bg_passive_tab_pane_g3_cp1

0x8339,	// (0x00042704) bg_active_tab_pane_g1_cp2

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp2

0x8342,	// (0x0004270d) bg_active_tab_pane_g3_cp2

0x8339,	// (0x00042704) bg_passive_tab_pane_g1_cp2

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp2

0x8342,	// (0x0004270d) bg_passive_tab_pane_g3_cp2

0x834b,	// (0x00042716) bg_active_tab_pane_g1_cp3

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp3

0x8354,	// (0x0004271f) bg_active_tab_pane_g3_cp3

0x834b,	// (0x00042716) bg_passive_tab_pane_g1_cp3

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp3

0x8354,	// (0x0004271f) bg_passive_tab_pane_g3_cp3

0x835d,	// (0x00042728) bg_active_tab_pane_g1_cp4

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp4

0x8366,	// (0x00042731) bg_active_tab_pane_g3_cp4

0x835d,	// (0x00042728) bg_passive_tab_pane_g1_cp4

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp4

0x8366,	// (0x00042731) bg_passive_tab_pane_g3_cp4

0xbac9,	// (0x00045e94) bg_active_tab_pane_g1_cp5

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp5

0xbad2,	// (0x00045e9d) bg_active_tab_pane_g3_cp5

0xbac9,	// (0x00045e94) bg_passive_tab_pane_g1_cp5

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp5

0xbad2,	// (0x00045e9d) bg_passive_tab_pane_g3_cp5

0x836f,	// (0x0004273a) list_set_graphic_pane_ParamLimits

0x836f,	// (0x0004273a) list_set_graphic_pane

0xad53,	// (0x0004511e) bg_set_opt_pane_cp4

0xbadb,	// (0x00045ea6) list_set_graphic_pane_g1_ParamLimits

0xbadb,	// (0x00045ea6) list_set_graphic_pane_g1

0xbae7,	// (0x00045eb2) list_set_graphic_pane_g2_ParamLimits

0xbae7,	// (0x00045eb2) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x00049b23) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x00049b23) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x00049e9a) volume_small_pane_cp_g

0xbb09,	// (0x00045ed4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xbb09,	// (0x00045ed4) list_double2_large_graphic_pane_g1_cp2

0xbb15,	// (0x00045ee0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xbb15,	// (0x00045ee0) list_double2_large_graphic_pane_g2_cp2

0xbb24,	// (0x00045eef) list_double2_large_graphic_pane_g3_cp2

0xbb2c,	// (0x00045ef7) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xbb2c,	// (0x00045ef7) list_double2_large_graphic_pane_t1_cp2

0xbb42,	// (0x00045f0d) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xbb42,	// (0x00045f0d) list_double2_large_graphic_pane_t2_cp2

0xd50c,	// (0x000478d7) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd50c,	// (0x000478d7) list_double_large_graphic_pane_g1_cp2

0xd51d,	// (0x000478e8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd51d,	// (0x000478e8) list_double_large_graphic_pane_g2_cp2

0xbc6f,	// (0x0004603a) list_double_large_graphic_pane_g3_cp2

0xd52c,	// (0x000478f7) list_double_large_graphic_pane_g4_cp

0xd534,	// (0x000478ff) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xd534,	// (0x000478ff) list_double_large_graphic_pane_t1_cp2

0xd54b,	// (0x00047916) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xd54b,	// (0x00047916) list_double_large_graphic_pane_t2_cp2

0xbba2,	// (0x00045f6d) list_double2_graphic_pane_g1_cp2_ParamLimits

0xbba2,	// (0x00045f6d) list_double2_graphic_pane_g1_cp2

0xbbae,	// (0x00045f79) list_double2_graphic_pane_g2_cp2_ParamLimits

0xbbae,	// (0x00045f79) list_double2_graphic_pane_g2_cp2

0xbbbd,	// (0x00045f88) list_double2_graphic_pane_g3_cp2

0xbbc5,	// (0x00045f90) list_double2_graphic_pane_t1_cp2_ParamLimits

0xbbc5,	// (0x00045f90) list_double2_graphic_pane_t1_cp2

0xbbdb,	// (0x00045fa6) list_double2_graphic_pane_t2_cp2_ParamLimits

0xbbdb,	// (0x00045fa6) list_double2_graphic_pane_t2_cp2

0xbbed,	// (0x00045fb8) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbbed,	// (0x00045fb8) list_single_number_heading_pane_g1_cp2

0xbbf9,	// (0x00045fc4) list_single_number_heading_pane_g2_cp2

0xbc01,	// (0x00045fcc) list_single_number_heading_pane_t1_cp2_ParamLimits

0xbc01,	// (0x00045fcc) list_single_number_heading_pane_t1_cp2

0xbc17,	// (0x00045fe2) list_single_number_heading_pane_t2_cp2_ParamLimits

0xbc17,	// (0x00045fe2) list_single_number_heading_pane_t2_cp2

0xbc29,	// (0x00045ff4) list_single_number_heading_pane_t3_cp2_ParamLimits

0xbc29,	// (0x00045ff4) list_single_number_heading_pane_t3_cp2

0xbbed,	// (0x00045fb8) list_single_heading_pane_g1_cp2_ParamLimits

0xbbed,	// (0x00045fb8) list_single_heading_pane_g1_cp2

0xbbf9,	// (0x00045fc4) list_single_heading_pane_g2_cp2

0xbc01,	// (0x00045fcc) list_single_heading_pane_t1_cp2_ParamLimits

0xbc01,	// (0x00045fcc) list_single_heading_pane_t1_cp2

0xd316,	// (0x000476e1) list_single_heading_pane_t2_cp2_ParamLimits

0xd316,	// (0x000476e1) list_single_heading_pane_t2_cp2

0xd253,	// (0x0004761e) list_double_graphic_pane_g1_cp2_ParamLimits

0xd253,	// (0x0004761e) list_double_graphic_pane_g1_cp2

0xd25f,	// (0x0004762a) list_double_graphic_pane_g2_cp2_ParamLimits

0xd25f,	// (0x0004762a) list_double_graphic_pane_g2_cp2

0xd26e,	// (0x00047639) list_double_graphic_pane_g3_cp2

0xd276,	// (0x00047641) list_double_graphic_pane_t1_cp2_ParamLimits

0xd276,	// (0x00047641) list_double_graphic_pane_t1_cp2

0xd28c,	// (0x00047657) list_double_graphic_pane_t2_cp2_ParamLimits

0xd28c,	// (0x00047657) list_double_graphic_pane_t2_cp2

0xbc63,	// (0x0004602e) list_double_number_pane_g1_cp2_ParamLimits

0xbc63,	// (0x0004602e) list_double_number_pane_g1_cp2

0xbc6f,	// (0x0004603a) list_double_number_pane_g2_cp2

0xd219,	// (0x000475e4) list_double_number_pane_t1_cp2_ParamLimits

0xd219,	// (0x000475e4) list_double_number_pane_t1_cp2

0xd22b,	// (0x000475f6) list_double_number_pane_t2_cp2_ParamLimits

0xd22b,	// (0x000475f6) list_double_number_pane_t2_cp2

0xd241,	// (0x0004760c) list_double_number_pane_t3_cp2_ParamLimits

0xd241,	// (0x0004760c) list_double_number_pane_t3_cp2

0xd191,	// (0x0004755c) list_single_graphic_pane_g1_cp2_ParamLimits

0xd191,	// (0x0004755c) list_single_graphic_pane_g1_cp2

0xbbed,	// (0x00045fb8) list_single_graphic_pane_g2_cp2_ParamLimits

0xbbed,	// (0x00045fb8) list_single_graphic_pane_g2_cp2

0xbbf9,	// (0x00045fc4) list_single_graphic_pane_g3_cp2

0xd169,	// (0x00047534) list_single_graphic_pane_t1_cp2_ParamLimits

0xd169,	// (0x00047534) list_single_graphic_pane_t1_cp2

0xbbed,	// (0x00045fb8) list_single_number_pane_g1_cp2_ParamLimits

0xbbed,	// (0x00045fb8) list_single_number_pane_g1_cp2

0xbbf9,	// (0x00045fc4) list_single_number_pane_g2_cp2

0xd169,	// (0x00047534) list_single_number_pane_t1_cp2_ParamLimits

0xd169,	// (0x00047534) list_single_number_pane_t1_cp2

0xd17f,	// (0x0004754a) list_single_number_pane_t2_cp2_ParamLimits

0xd17f,	// (0x0004754a) list_single_number_pane_t2_cp2

0xbb15,	// (0x00045ee0) list_double2_pane_g1_cp2_ParamLimits

0xbb15,	// (0x00045ee0) list_double2_pane_g1_cp2

0xbb24,	// (0x00045eef) list_double2_pane_g2_cp2

0xbc3b,	// (0x00046006) list_double2_pane_t1_cp2_ParamLimits

0xbc3b,	// (0x00046006) list_double2_pane_t1_cp2

0xbc51,	// (0x0004601c) list_double2_pane_t2_cp2_ParamLimits

0xbc51,	// (0x0004601c) list_double2_pane_t2_cp2

0xbc63,	// (0x0004602e) list_double_pane_g1_cp2_ParamLimits

0xbc63,	// (0x0004602e) list_double_pane_g1_cp2

0xbc6f,	// (0x0004603a) list_double_pane_g2_cp2

0xbc77,	// (0x00046042) list_double_pane_t1_cp2_ParamLimits

0xbc77,	// (0x00046042) list_double_pane_t1_cp2

0xbc8d,	// (0x00046058) list_double_pane_t2_cp2_ParamLimits

0xbc8d,	// (0x00046058) list_double_pane_t2_cp2

0xbcb5,	// (0x00046080) list_single_pane_cp2_g3

0xbbed,	// (0x00045fb8) list_single_pane_g1_cp2_ParamLimits

0xbbed,	// (0x00045fb8) list_single_pane_g1_cp2

0xbbf9,	// (0x00045fc4) list_single_pane_g2_cp2

0xbcc5,	// (0x00046090) list_single_pane_t1_cp2_ParamLimits

0xbcc5,	// (0x00046090) list_single_pane_t1_cp2

0xbcdd,	// (0x000460a8) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xbcdd,	// (0x000460a8) list_single_large_graphic_pane_g1_cp2

0xbce9,	// (0x000460b4) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xbce9,	// (0x000460b4) list_single_large_graphic_pane_g2_cp2

0xbcf5,	// (0x000460c0) list_single_large_graphic_pane_g3_cp2

0xbcfd,	// (0x000460c8) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xbcfd,	// (0x000460c8) list_single_large_graphic_pane_g4_cp1

0xbd17,	// (0x000460e2) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xbd17,	// (0x000460e2) list_single_large_graphic_pane_t1_cp2

0xd14b,	// (0x00047516) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd14b,	// (0x00047516) list_single_graphic_heading_pane_g1_cp2

0xd11a,	// (0x000474e5) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd11a,	// (0x000474e5) list_single_graphic_heading_pane_g4_cp2

0xbbf9,	// (0x00045fc4) list_single_graphic_heading_pane_g5_cp2

0xbc01,	// (0x00045fcc) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xbc01,	// (0x00045fcc) list_single_graphic_heading_pane_t1_cp2

0xd157,	// (0x00047522) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd157,	// (0x00047522) list_single_graphic_heading_pane_t2_cp2

0xd10e,	// (0x000474d9) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd10e,	// (0x000474d9) list_single_2graphic_pane_g1_cp2

0xd11a,	// (0x000474e5) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd11a,	// (0x000474e5) list_single_2graphic_pane_g2_cp2

0xbbf9,	// (0x00045fc4) list_single_2graphic_pane_g3_cp2

0xd129,	// (0x000474f4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd129,	// (0x000474f4) list_single_2graphic_pane_g4_cp2

0xd135,	// (0x00047500) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd135,	// (0x00047500) list_single_2graphic_pane_t1_cp2

0xacd1,	// (0x0004509c) list_highlight_pane_g10_cp1

0xcd20,	// (0x000470eb) list_highlight_pane_g1_cp1

0xcd28,	// (0x000470f3) list_highlight_pane_g2_cp1

0xcd30,	// (0x000470fb) list_highlight_pane_g3_cp1

0xcd38,	// (0x00047103) list_highlight_pane_g4_cp1

0xcd40,	// (0x0004710b) list_highlight_pane_g5_cp1

0xcd48,	// (0x00047113) list_highlight_pane_g6_cp1

0xcd50,	// (0x0004711b) list_highlight_pane_g7_cp1

0xcd58,	// (0x00047123) list_highlight_pane_g8_cp1

0xcd60,	// (0x0004712b) list_highlight_pane_g9_cp1

0x90ca,	// (0x00043495) form_field_slider_pane_t3

0x90d8,	// (0x000434a3) form_field_slider_pane_t4

0xcc6a,	// (0x00047035) slider_form_pane_ParamLimits

0xcc6a,	// (0x00047035) slider_form_pane

0xad53,	// (0x0004511e) control_abbreviations

0xad53,	// (0x0004511e) control_conventions

0xad53,	// (0x0004511e) control_definitions

0xad53,	// (0x0004511e) format_table_attribute

0xd360,	// (0x0004772b) bg_popup_preview_window_pane_g9

0xad53,	// (0x0004511e) format_table_data2

0xad53,	// (0x0004511e) format_table_data3

0xad53,	// (0x0004511e) format_table_data_example

0x0008,

0xad53,	// (0x0004511e) intro_purpose

0xf8e8,	// (0x00049cb3) bg_popup_preview_window_pane_g

0xad53,	// (0x0004511e) texts_category

0xad53,	// (0x0004511e) texts_graphics

0xbd2d,	// (0x000460f8) text_digital

0xc22d,	// (0x000465f8) text_primary

0xc23c,	// (0x00046607) text_primary_small

0xc24b,	// (0x00046616) text_secondary

0xc25a,	// (0x00046625) text_title

0xd7d9,	// (0x00047ba4) bg_passive_tab_pane_g1_cp3_srt

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp3_srt

0xd7e2,	// (0x00047bad) bg_passive_tab_pane_g3_cp3_srt

0xada1,	// (0x0004516c) bg_active_tab_pane_cp3_srt_ParamLimits

0xada1,	// (0x0004516c) bg_active_tab_pane_cp3_srt

0xd2b8,	// (0x00047683) tabs_4_active_pane_srt_g1

0x7c9c,	// (0x00042067) tabs_4_active_pane_srt_t1_ParamLimits

0x7c9c,	// (0x00042067) tabs_4_active_pane_srt_t1

0xd7d9,	// (0x00047ba4) bg_active_tab_pane_g1_cp3_copy1

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp3_copy1

0xd7e2,	// (0x00047bad) bg_active_tab_pane_g3_cp3_copy1

0xadb7,	// (0x00045182) tabs_2_long_active_pane_srt_ParamLimits

0xadb7,	// (0x00045182) tabs_2_long_active_pane_srt

0xadb7,	// (0x00045182) tabs_2_long_passive_pane_srt_ParamLimits

0xadb7,	// (0x00045182) tabs_2_long_passive_pane_srt

0xb55a,	// (0x00045925) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb55a,	// (0x00045925) bg_passive_tab_pane_cp4_srt

0xd70f,	// (0x00047ada) bg_passive_tab_pane_g1_cp4_srt

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp4_srt

0xd718,	// (0x00047ae3) bg_passive_tab_pane_g3_cp4_srt

0xadb7,	// (0x00045182) bg_active_tab_pane_cp4_srt_ParamLimits

0xadb7,	// (0x00045182) bg_active_tab_pane_cp4_srt

0x8115,	// (0x000424e0) tabs_2_long_active_pane_srt_t1_ParamLimits

0x8115,	// (0x000424e0) tabs_2_long_active_pane_srt_t1

0xd70f,	// (0x00047ada) bg_active_tab_pane_g1_cp4_srt

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp4_srt

0xd718,	// (0x00047ae3) bg_active_tab_pane_g3_cp4_srt

0xada1,	// (0x0004516c) tabs_3_long_active_pane_srt_ParamLimits

0xada1,	// (0x0004516c) tabs_3_long_active_pane_srt

0xada1,	// (0x0004516c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xada1,	// (0x0004516c) tabs_3_long_passive_pane_cp_srt

0xada1,	// (0x0004516c) tabs_3_long_passive_pane_srt_ParamLimits

0xada1,	// (0x0004516c) tabs_3_long_passive_pane_srt

0xb55a,	// (0x00045925) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb55a,	// (0x00045925) bg_passive_tab_pane_cp5_srt

0xbac9,	// (0x00045e94) bg_passive_tab_pane_g1_cp5_srt

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp5_srt

0xbad2,	// (0x00045e9d) bg_passive_tab_pane_g3_cp5_srt

0xadb7,	// (0x00045182) bg_active_tab_pane_cp5_srt_ParamLimits

0xadb7,	// (0x00045182) bg_active_tab_pane_cp5_srt

0x812c,	// (0x000424f7) tabs_3_long_active_pane_srt_t1_ParamLimits

0x812c,	// (0x000424f7) tabs_3_long_active_pane_srt_t1

0xbac9,	// (0x00045e94) bg_active_tab_pane_g1_cp5_srt

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp5_srt

0xbad2,	// (0x00045e9d) bg_active_tab_pane_g3_cp5_srt

0xd701,	// (0x00047acc) navi_text_pane_srt_t1

0xd6f9,	// (0x00047ac4) navi_icon_pane_srt_g1

0xc372,	// (0x0004673d) midp_editing_number_pane_srt

0xc269,	// (0x00046634) midp_ticker_pane_srt

0xc37a,	// (0x00046745) midp_ticker_pane_srt_g1

0xc382,	// (0x0004674d) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x00049b42) midp_ticker_pane_srt_g

0xc38a,	// (0x00046755) midp_ticker_pane_srt_t1

0xd6ea,	// (0x00047ab5) midp_editing_number_pane_t1_copy1

0x838c,	// (0x00042757) listscroll_midp_pane

0x838c,	// (0x00042757) midp_form_pane

0xc271,	// (0x0004663c) midp_info_popup_window_ParamLimits

0xc271,	// (0x0004663c) midp_info_popup_window

0xb480,	// (0x0004584b) bg_popup_sub_pane_cp50_ParamLimits

0xb480,	// (0x0004584b) bg_popup_sub_pane_cp50

0xc987,	// (0x00046d52) listscroll_midp_info_pane_ParamLimits

0xc987,	// (0x00046d52) listscroll_midp_info_pane

0xc96f,	// (0x00046d3a) listscroll_form_midp_pane_ParamLimits

0xc96f,	// (0x00046d3a) listscroll_form_midp_pane

0xc97b,	// (0x00046d46) scroll_bar_cp050

0x90be,	// (0x00043489) list_midp_pane

0xe008,	// (0x000483d3) signal_pane_g2_cp

0xc8a1,	// (0x00046c6c) listscroll_midp_info_pane_t1_ParamLimits

0xc8a1,	// (0x00046c6c) listscroll_midp_info_pane_t1

0xc8b9,	// (0x00046c84) listscroll_midp_info_pane_t2_ParamLimits

0xc8b9,	// (0x00046c84) listscroll_midp_info_pane_t2

0xc8f7,	// (0x00046cc2) listscroll_midp_info_pane_t3_ParamLimits

0xc8f7,	// (0x00046cc2) listscroll_midp_info_pane_t3

0xc931,	// (0x00046cfc) listscroll_midp_info_pane_t4_ParamLimits

0xc931,	// (0x00046cfc) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x00049bee) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x00049bee) listscroll_midp_info_pane_t

0xb523,	// (0x000458ee) scroll_pane_cp21

0xc845,	// (0x00046c10) form_midp_field_choice_group_pane

0xc84e,	// (0x00046c19) form_midp_field_text_pane

0xc887,	// (0x00046c52) form_midp_field_time_pane

0xc88f,	// (0x00046c5a) form_midp_gauge_slider_pane

0xc898,	// (0x00046c63) form_midp_gauge_wait_pane

0xad53,	// (0x0004511e) form_midp_image_pane

0x1981,	// (0x0003bd4c) list_single_midp_pane_ParamLimits

0x1981,	// (0x0003bd4c) list_single_midp_pane

0xc813,	// (0x00046bde) form_midp_field_text_pane_t1

0xc669,	// (0x00046a34) input_focus_pane_cp050

0xc834,	// (0x00046bff) list_midp_form_text_pane

0xc7e2,	// (0x00046bad) form_midp_field_choice_group_pane_t1

0xc7f0,	// (0x00046bbb) input_focus_pane_cp051

0xc804,	// (0x00046bcf) list_midp_choice_pane

0xad53,	// (0x0004511e) status_idle_pane

0xc7c6,	// (0x00046b91) form_midp_field_time_pane_t1

0xacd1,	// (0x0004509c) wait_anim_pane_g2_copy1

0xc7d4,	// (0x00046b9f) form_midp_field_time_pane_t2

0x0001,

0xc2dc,	// (0x000466a7) aid_navinavi_width_2_pane

0xf81e,	// (0x00049be9) form_midp_field_time_pane_t

0xad53,	// (0x0004511e) input_focus_pane_cp052

0xad53,	// (0x0004511e) bg_input_focus_pane_cp040

0xc7a2,	// (0x00046b6d) form_midp_gauge_slider_pane_t1

0xc7b0,	// (0x00046b7b) form_midp_gauge_slider_pane_t2

0x90a2,	// (0x0004346d) form_midp_gauge_slider_pane_t3

0x90b0,	// (0x0004347b) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x00049be0) form_midp_gauge_slider_pane_t

0xc7be,	// (0x00046b89) form_midp_slider_pane

0xadb7,	// (0x00045182) bg_input_focus_pane_cp041_ParamLimits

0xadb7,	// (0x00045182) bg_input_focus_pane_cp041

0xc772,	// (0x00046b3d) form_midp_gauge_wait_pane_t1_ParamLimits

0xc772,	// (0x00046b3d) form_midp_gauge_wait_pane_t1

0xc784,	// (0x00046b4f) form_midp_gauge_wait_pane_t2_ParamLimits

0xc784,	// (0x00046b4f) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x00049bdb) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x00049bdb) form_midp_gauge_wait_pane_t

0xc796,	// (0x00046b61) form_midp_wait_pane_ParamLimits

0xc796,	// (0x00046b61) form_midp_wait_pane

0xc73c,	// (0x00046b07) form_midp_image_pane_g1

0xc745,	// (0x00046b10) form_midp_image_pane_t1

0xc754,	// (0x00046b1f) form_midp_image_pane_t2

0xc763,	// (0x00046b2e) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x00049bd4) form_midp_image_pane_t

0xc733,	// (0x00046afe) list_single_midp_pane_g1

0x9093,	// (0x0004345e) list_single_midp_pane_t1

0xc71f,	// (0x00046aea) list_midp_form_item_pane_ParamLimits

0xc71f,	// (0x00046aea) list_midp_form_item_pane

0xc284,	// (0x0004664f) list_midp_form_item_pane_t1

0xc293,	// (0x0004665e) midp_ticker_pane_g1

0xc29f,	// (0x0004666a) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x00049b28) midp_ticker_pane_g

0xc2ab,	// (0x00046676) midp_ticker_pane_t1

0xd6ea,	// (0x00047ab5) midp_editing_number_pane_t1

0xd772,	// (0x00047b3d) midp_editing_number_pane

0xd77e,	// (0x00047b49) midp_ticker_pane

0xd6da,	// (0x00047aa5) ai_message_heading_pane

0xad53,	// (0x0004511e) bg_popup_window_pane_cp14

0xd6e2,	// (0x00047aad) listscroll_ai_message_pane

0xd664,	// (0x00047a2f) ai_message_heading_pane_g1_ParamLimits

0xd664,	// (0x00047a2f) ai_message_heading_pane_g1

0xd670,	// (0x00047a3b) ai_message_heading_pane_g2_ParamLimits

0xd670,	// (0x00047a3b) ai_message_heading_pane_g2

0xd67c,	// (0x00047a47) ai_message_heading_pane_g3_ParamLimits

0xd67c,	// (0x00047a47) ai_message_heading_pane_g3

0xd688,	// (0x00047a53) ai_message_heading_pane_g4_ParamLimits

0xd688,	// (0x00047a53) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x00049d15) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x00049d15) ai_message_heading_pane_g

0xd694,	// (0x00047a5f) ai_message_heading_pane_t1_ParamLimits

0xd694,	// (0x00047a5f) ai_message_heading_pane_t1

0xd6ae,	// (0x00047a79) ai_message_heading_pane_t2_ParamLimits

0xd6ae,	// (0x00047a79) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x00049d1e) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x00049d1e) ai_message_heading_pane_t

0xd6c0,	// (0x00047a8b) bg_popup_heading_pane_cp1_ParamLimits

0xd6c0,	// (0x00047a8b) bg_popup_heading_pane_cp1

0xd652,	// (0x00047a1d) list_ai_message_pane_ParamLimits

0xd652,	// (0x00047a1d) list_ai_message_pane

0xb523,	// (0x000458ee) scroll_pane_cp10

0xd5ee,	// (0x000479b9) list_ai_message_pane_g1

0xd5f6,	// (0x000479c1) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x00049cf2) list_ai_message_pane_g

0xd5fe,	// (0x000479c9) list_ai_message_pane_t1_ParamLimits

0xd5fe,	// (0x000479c9) list_ai_message_pane_t1

0xd613,	// (0x000479de) list_ai_message_pane_t2_ParamLimits

0xd613,	// (0x000479de) list_ai_message_pane_t2

0xd628,	// (0x000479f3) list_ai_message_pane_t3_ParamLimits

0xd628,	// (0x000479f3) list_ai_message_pane_t3

0xd63d,	// (0x00047a08) list_ai_message_pane_t4_ParamLimits

0xd63d,	// (0x00047a08) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x00049cf7) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x00049cf7) list_ai_message_pane_t

0xd5dc,	// (0x000479a7) cell_ai_soft_ind_pane_ParamLimits

0xd5dc,	// (0x000479a7) cell_ai_soft_ind_pane

0xc2bd,	// (0x00046688) cell_ai_soft_ind_pane_g1_ParamLimits

0xc2bd,	// (0x00046688) cell_ai_soft_ind_pane_g1

0xad53,	// (0x0004511e) grid_highlight_cp1

0xc2ca,	// (0x00046695) text_secondary_cp56_ParamLimits

0xc2ca,	// (0x00046695) text_secondary_cp56

0xd5b1,	// (0x0004797c) example_general_pane_ParamLimits

0xd5b1,	// (0x0004797c) example_general_pane

0xd5bd,	// (0x00047988) example_parent_pane_g1_ParamLimits

0xd5bd,	// (0x00047988) example_parent_pane_g1

0xd5c9,	// (0x00047994) example_parent_pane_t1_ParamLimits

0xd5c9,	// (0x00047994) example_parent_pane_t1

0x892f,	// (0x00042cfa) popup_preview_text_window_ParamLimits

0x892f,	// (0x00042cfa) popup_preview_text_window

0xbcbd,	// (0x00046088) list_single_pane_cp2_g4

0xafb8,	// (0x00045383) bg_popup_preview_window_pane_ParamLimits

0xafb8,	// (0x00045383) bg_popup_preview_window_pane

0xd368,	// (0x00047733) popup_preview_text_window_t1_ParamLimits

0xd368,	// (0x00047733) popup_preview_text_window_t1

0xd386,	// (0x00047751) popup_preview_text_window_t2_ParamLimits

0xd386,	// (0x00047751) popup_preview_text_window_t2

0xd3cf,	// (0x0004779a) popup_preview_text_window_t3_ParamLimits

0xd3cf,	// (0x0004779a) popup_preview_text_window_t3

0xd414,	// (0x000477df) popup_preview_text_window_t4_ParamLimits

0xd414,	// (0x000477df) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x00049cc6) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x00049cc6) popup_preview_text_window_t

0xd492,	// (0x0004785d) scroll_pane_cp11

0xc5f5,	// (0x000469c0) bg_popup_preview_window_pane_g1

0xd328,	// (0x000476f3) bg_popup_preview_window_pane_g2

0xd330,	// (0x000476fb) bg_popup_preview_window_pane_g3

0xd338,	// (0x00047703) bg_popup_preview_window_pane_g4

0xd340,	// (0x0004770b) bg_popup_preview_window_pane_g5

0xd348,	// (0x00047713) bg_popup_preview_window_pane_g6

0xd350,	// (0x0004771b) bg_popup_preview_window_pane_g7

0xd358,	// (0x00047723) bg_popup_preview_window_pane_g8

0x4690,	// (0x0003ea5b) aid_popup_width_pane

0x88b1,	// (0x00042c7c) popup_midp_note_alarm_window_ParamLimits

0x88b1,	// (0x00042c7c) popup_midp_note_alarm_window

0xb3c8,	// (0x00045793) data_form_pane_ParamLimits

0x17f7,	// (0x0003bbc2) form_field_data_pane_g1

0x1801,	// (0x0003bbcc) form_field_data_pane_t1_ParamLimits

0xb3d4,	// (0x0004579f) input_focus_pane_ParamLimits

0xb3e2,	// (0x000457ad) data_form_wide_pane_ParamLimits

0x8065,	// (0x00042430) form_field_data_wide_pane_g1

0x8071,	// (0x0004243c) form_field_data_wide_pane_t1_ParamLimits

0xb177,	// (0x00045542) input_focus_pane_cp6_ParamLimits

0x80f3,	// (0x000424be) input_popup_find_pane_g1_ParamLimits

0x80f3,	// (0x000424be) input_popup_find_pane_g1

0x4a59,	// (0x0003ee24) aid_navi_side_left_pane

0x4a69,	// (0x0003ee34) aid_navi_side_right_pane

0xcdf1,	// (0x000471bc) bg_popup_window_pane_cp30_ParamLimits

0xcdf1,	// (0x000471bc) bg_popup_window_pane_cp30

0xce6b,	// (0x00047236) popup_midp_note_alarm_window_g1_ParamLimits

0xce6b,	// (0x00047236) popup_midp_note_alarm_window_g1

0xce9b,	// (0x00047266) popup_midp_note_alarm_window_t1_ParamLimits

0xce9b,	// (0x00047266) popup_midp_note_alarm_window_t1

0xcf3c,	// (0x00047307) popup_midp_note_alarm_window_t2_ParamLimits

0xcf3c,	// (0x00047307) popup_midp_note_alarm_window_t2

0xcfea,	// (0x000473b5) popup_midp_note_alarm_window_t3_ParamLimits

0xcfea,	// (0x000473b5) popup_midp_note_alarm_window_t3

0xd012,	// (0x000473dd) popup_midp_note_alarm_window_t4_ParamLimits

0xd012,	// (0x000473dd) popup_midp_note_alarm_window_t4

0xd032,	// (0x000473fd) popup_midp_note_alarm_window_t5_ParamLimits

0xd032,	// (0x000473fd) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x00049c63) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x00049c63) popup_midp_note_alarm_window_t

0xd0de,	// (0x000474a9) wait_bar_pane_cp1_ParamLimits

0xd0de,	// (0x000474a9) wait_bar_pane_cp1

0xad53,	// (0x0004511e) wait_anim_pane_copy1

0xad53,	// (0x0004511e) wait_border_pane_copy1

0xcb37,	// (0x00046f02) wait_border_pane_g1_copy1

0x808b,	// (0x00042456) form_field_popup_pane_g1

0x1819,	// (0x0003bbe4) form_field_popup_pane_t1_ParamLimits

0xb3d4,	// (0x0004579f) input_focus_pane_cp7_ParamLimits

0xb3c8,	// (0x00045793) list_form_pane_ParamLimits

0x8093,	// (0x0004245e) form_field_popup_wide_pane_g1

0x809b,	// (0x00042466) form_field_popup_wide_pane_t1_ParamLimits

0xb3d4,	// (0x0004579f) input_focus_pane_cp8_ParamLimits

0xb40e,	// (0x000457d9) list_form_wide_pane_ParamLimits

0xd80a,	// (0x00047bd5) aid_size_cell_graphic_pane

0x1896,	// (0x0003bc61) data_form_pane_t1_ParamLimits

0x19a8,	// (0x0003bd73) data_form_wide_pane_t1_ParamLimits

0x8c8d,	// (0x00043058) bg_status_flat_pane

0x7bf9,	// (0x00041fc4) title_pane_t1_ParamLimits

0xad69,	// (0x00045134) title_pane_t2_ParamLimits

0xad8f,	// (0x0004515a) title_pane_t3_ParamLimits

0xf557,	// (0x00049922) title_pane_t_ParamLimits

0x8204,	// (0x000425cf) level_1_signal_ParamLimits

0x8216,	// (0x000425e1) level_2_signal_ParamLimits

0x8229,	// (0x000425f4) level_3_signal_ParamLimits

0x823c,	// (0x00042607) level_4_signal_ParamLimits

0x824f,	// (0x0004261a) level_5_signal_ParamLimits

0x8262,	// (0x0004262d) level_6_signal_ParamLimits

0x8275,	// (0x00042640) level_7_signal_ParamLimits

0x8204,	// (0x000425cf) level_1_battery_ParamLimits

0x8216,	// (0x000425e1) level_2_battery_ParamLimits

0x8229,	// (0x000425f4) level_3_battery_ParamLimits

0x823c,	// (0x00042607) level_4_battery_ParamLimits

0x824f,	// (0x0004261a) level_5_battery_ParamLimits

0x8262,	// (0x0004262d) level_6_battery_ParamLimits

0x8275,	// (0x00042640) level_7_battery_ParamLimits

0xcd20,	// (0x000470eb) bg_status_flat_pane_g1

0xcd28,	// (0x000470f3) bg_status_flat_pane_g2

0xcd30,	// (0x000470fb) bg_status_flat_pane_g3

0xcd38,	// (0x00047103) bg_status_flat_pane_g4

0xcd40,	// (0x0004710b) bg_status_flat_pane_g5

0xcd48,	// (0x00047113) bg_status_flat_pane_g6

0xcd50,	// (0x0004711b) bg_status_flat_pane_g7

0x7c86,	// (0x00042051) tabs_3_active_pane_t1_ParamLimits

0x7c86,	// (0x00042051) tabs_3_passive_pane_t1_ParamLimits

0x7c9c,	// (0x00042067) tabs_4_active_pane_t1_ParamLimits

0x7c9c,	// (0x00042067) tabs_4_1_passive_pane_t1_ParamLimits

0x80ff,	// (0x000424ca) tabs_2_active_pane_t1_ParamLimits

0x80ff,	// (0x000424ca) tabs_2_passive_pane_t1_ParamLimits

0xadb7,	// (0x00045182) bg_active_tab_pane_cp4_ParamLimits

0x8115,	// (0x000424e0) tabs_2_long_active_pane_t1_ParamLimits

0xb55a,	// (0x00045925) bg_passive_tab_pane_cp4_ParamLimits

0x5433,	// (0x0003f7fe) list_single_midp_graphic_pane_t1_ParamLimits

0xadb7,	// (0x00045182) bg_active_tab_pane_cp5_ParamLimits

0x812c,	// (0x000424f7) tabs_3_long_active_pane_t1_ParamLimits

0xb55a,	// (0x00045925) bg_passive_tab_pane_cp5_ParamLimits

0x5433,	// (0x0003f7fe) list_single_midp_graphic_pane_t1

0x8c8d,	// (0x00043058) bg_status_flat_pane_ParamLimits

0xc4d4,	// (0x0004689f) indicator_pane_cp2_ParamLimits

0xc4d4,	// (0x0004689f) indicator_pane_cp2

0x8df3,	// (0x000431be) navi_pane_srt_ParamLimits

0x8df3,	// (0x000431be) navi_pane_srt

0xc4fc,	// (0x000468c7) popup_clock_digital_analogue_window_cp1

0xadfb,	// (0x000451c6) indicator_pane_t1

0xc269,	// (0x00046634) copy_highlight_pane

0xc269,	// (0x00046634) cursor_graphics_pane

0xc269,	// (0x00046634) graphic_within_text_pane

0xc269,	// (0x00046634) link_highlight_pane

0xd455,	// (0x00047820) popup_preview_text_window_t5_ParamLimits

0xd455,	// (0x00047820) popup_preview_text_window_t5

0xc2e4,	// (0x000466af) cursor_digital_pane

0xc2e4,	// (0x000466af) cursor_primary_pane

0xc2f5,	// (0x000466c0) cursor_primary_small_pane

0xc2fd,	// (0x000466c8) cursor_secondary_pane

0xc305,	// (0x000466d0) cursor_title_pane

0xc2e4,	// (0x000466af) link_highlight_digital_pane

0xc2ec,	// (0x000466b7) link_highlight_primary_pane

0xc2f5,	// (0x000466c0) link_highlight_primary_small_pane

0xc2fd,	// (0x000466c8) link_highlight_secondary_pane

0xc305,	// (0x000466d0) link_highlight_title_pane

0xc2e4,	// (0x000466af) copy_highlight_digital_pane

0xc2e4,	// (0x000466af) copy_highlight_primary_pane

0xc2f5,	// (0x000466c0) copy_highlight_primary_small_pane

0xc2fd,	// (0x000466c8) copy_highlight_secondary_pane

0xc305,	// (0x000466d0) copy_highlight_title_pane

0xc2fd,	// (0x000466c8) graphic_text_digital_pane

0xcda0,	// (0x0004716b) graphic_text_primary_pane

0xcda9,	// (0x00047174) graphic_text_primary_small_pane

0xc2f5,	// (0x000466c0) graphic_text_secondary_pane

0xc2e4,	// (0x000466af) graphic_text_title_pane

0x8428,	// (0x000427f3) cursor_primary_pane_g1

0xcd92,	// (0x0004715d) cursor_text_primary_t1

0x90fa,	// (0x000434c5) cursor_primary_small_pane_g1

0xcd84,	// (0x0004714f) cursor_text_primary_small_t1

0x90f0,	// (0x000434bb) cursor_primary_small_pane_g1_copy1

0xcd76,	// (0x00047141) cursor_text_primary_small_t1_copy1

0xcd68,	// (0x00047133) cursor_text_title_t1

0x90e6,	// (0x000434b1) cursor_title_pane_g1

0x8428,	// (0x000427f3) cursor_digital_pane_g1

0xc30d,	// (0x000466d8) cursor_text_digital_t1

0xc31b,	// (0x000466e6) link_highlight_primary_pane_g1

0xcd11,	// (0x000470dc) link_highlight_primary_pane_t1

0xc31b,	// (0x000466e6) link_highlight_primary_small_pane_g1

0xc323,	// (0x000466ee) link_highlight_primary_small_pane_t1

0xc332,	// (0x000466fd) link_highlight_secondary_pane_g1

0xc33a,	// (0x00046705) link_highlight_secondary_pane_t1

0xcc76,	// (0x00047041) link_highlight_title_pane_g1

0xcc8d,	// (0x00047058) link_highlight_title_pane_t1

0xcc76,	// (0x00047041) link_highlight_digital_pane_g1

0xcc7e,	// (0x00047049) link_highlight_digital_pane_t1

0xcb52,	// (0x00046f1d) copy_highlight_primary_pane_g1

0xcb78,	// (0x00046f43) copy_highlight_primary_pane_t1

0xcb52,	// (0x00046f1d) copy_highlight_primary_small_pane_g1

0xcb69,	// (0x00046f34) copy_highlight_primary_small_pane_t1

0xc349,	// (0x00046714) copy_highlight_secondary_pane_g1

0xc351,	// (0x0004671c) copy_highlight_secondary_pane_t1

0xcb52,	// (0x00046f1d) copy_highlight_title_pane_g1

0xcb5a,	// (0x00046f25) copy_highlight_title_pane_t1

0xcb52,	// (0x00046f1d) copy_highlight_digital_pane_g1

0xd93a,	// (0x00047d05) copy_highlight_digital_pane_t1

0xd88e,	// (0x00047c59) graphic_text_primary_pane_g1

0xd91e,	// (0x00047ce9) graphic_text_primary_pane_t1

0xd92c,	// (0x00047cf7) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x00049d92) graphic_text_primary_pane_t

0xd8fa,	// (0x00047cc5) graphic_text_primary_small_pane_g1

0xd902,	// (0x00047ccd) graphic_text_primary_small_pane_t1

0xd910,	// (0x00047cdb) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x00049d8d) graphic_text_primary_small_pane_t

0xd8d6,	// (0x00047ca1) graphic_text_secondary_pane_g1

0xd8de,	// (0x00047ca9) graphic_text_secondary_pane_t1

0xd8ec,	// (0x00047cb7) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x00049d88) graphic_text_secondary_pane_t

0xd8b2,	// (0x00047c7d) graphic_text_title_pane_g1

0xd8ba,	// (0x00047c85) graphic_text_title_pane_t1

0xd8c8,	// (0x00047c93) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x00049d83) graphic_text_title_pane_t

0xd88e,	// (0x00047c59) graphic_text_digital_pane_g1

0xd896,	// (0x00047c61) graphic_text_digital_pane_t1

0xd8a4,	// (0x00047c6f) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x00049d7e) graphic_text_digital_pane_t

0xadb7,	// (0x00045182) navi_icon_pane_srt_ParamLimits

0xadb7,	// (0x00045182) navi_icon_pane_srt

0xad53,	// (0x0004511e) navi_midp_pane_srt

0xad53,	// (0x0004511e) navi_navi_pane_srt

0xadb7,	// (0x00045182) navi_text_pane_srt_ParamLimits

0xadb7,	// (0x00045182) navi_text_pane_srt

0xd859,	// (0x00047c24) navi_navi_icon_text_pane_srt

0xd861,	// (0x00047c2c) navi_navi_pane_srt_g1_ParamLimits

0xd861,	// (0x00047c2c) navi_navi_pane_srt_g1

0xd873,	// (0x00047c3e) navi_navi_pane_srt_g2_ParamLimits

0xd873,	// (0x00047c3e) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x00049d79) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x00049d79) navi_navi_pane_srt_g

0xd885,	// (0x00047c50) navi_navi_tabs_pane_srt

0xd859,	// (0x00047c24) navi_navi_text_pane_srt

0xd859,	// (0x00047c24) navi_navi_volume_pane_srt

0xd84a,	// (0x00047c15) navi_navi_text_pane_srt_t1

0x5797,	// (0x0003fb62) navi_navi_volume_pane_srt_g1

0x579f,	// (0x0003fb6a) volume_small_pane_srt_ParamLimits

0x579f,	// (0x0003fb6a) volume_small_pane_srt

0x4d00,	// (0x0003f0cb) volume_small_pane_srt_g1_ParamLimits

0x4d00,	// (0x0003f0cb) volume_small_pane_srt_g1

0x4d10,	// (0x0003f0db) volume_small_pane_srt_g2_ParamLimits

0x4d10,	// (0x0003f0db) volume_small_pane_srt_g2

0x4d21,	// (0x0003f0ec) volume_small_pane_srt_g3_ParamLimits

0x4d21,	// (0x0003f0ec) volume_small_pane_srt_g3

0x4d32,	// (0x0003f0fd) volume_small_pane_srt_g4_ParamLimits

0x4d32,	// (0x0003f0fd) volume_small_pane_srt_g4

0x4d43,	// (0x0003f10e) volume_small_pane_srt_g5_ParamLimits

0x4d43,	// (0x0003f10e) volume_small_pane_srt_g5

0x4d54,	// (0x0003f11f) volume_small_pane_srt_g6_ParamLimits

0x4d54,	// (0x0003f11f) volume_small_pane_srt_g6

0x4d65,	// (0x0003f130) volume_small_pane_srt_g7_ParamLimits

0x4d65,	// (0x0003f130) volume_small_pane_srt_g7

0x4d76,	// (0x0003f141) volume_small_pane_srt_g8_ParamLimits

0x4d76,	// (0x0003f141) volume_small_pane_srt_g8

0x4d87,	// (0x0003f152) volume_small_pane_srt_g9_ParamLimits

0x4d87,	// (0x0003f152) volume_small_pane_srt_g9

0x4d98,	// (0x0003f163) volume_small_pane_srt_g10_ParamLimits

0x4d98,	// (0x0003f163) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x00049b2d) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x00049b2d) volume_small_pane_srt_g

0xb061,	// (0x0004542c) query_popup_data_pane_cp2

0xd830,	// (0x00047bfb) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xd830,	// (0x00047bfb) navi_navi_icon_text_pane_srt_t1

0xcda0,	// (0x0004716b) navi_tabs_2_long_pane_srt

0xcda0,	// (0x0004716b) navi_tabs_2_pane_srt

0xcda0,	// (0x0004716b) navi_tabs_3_long_pane_srt

0xcda0,	// (0x0004716b) navi_tabs_3_pane_srt

0xcda0,	// (0x0004716b) navi_tabs_4_pane_srt

0x5777,	// (0x0003fb42) tabs_2_active_pane_srt_ParamLimits

0x5777,	// (0x0003fb42) tabs_2_active_pane_srt

0x5787,	// (0x0003fb52) tabs_2_passive_pane_srt_ParamLimits

0x5787,	// (0x0003fb52) tabs_2_passive_pane_srt

0xc669,	// (0x00046a34) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc669,	// (0x00046a34) bg_passive_tab_pane_cp1_srt

0xd2c8,	// (0x00047693) bg_passive_tab_pane_g1_cp1_srt

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp1_srt

0xd2d1,	// (0x0004769c) bg_passive_tab_pane_g3_cp1_srt

0xada1,	// (0x0004516c) bg_active_tab_pane_cp1_srt_ParamLimits

0xada1,	// (0x0004516c) bg_active_tab_pane_cp1_srt

0xd2c0,	// (0x0004768b) tabs_2_active_pane_srt_g1

0x80ff,	// (0x000424ca) tabs_2_active_pane_srt_t1_ParamLimits

0x80ff,	// (0x000424ca) tabs_2_active_pane_srt_t1

0xd2c8,	// (0x00047693) bg_active_tab_pane_g1_cp1_srt

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp1_srt

0xd2d1,	// (0x0004769c) bg_active_tab_pane_g3_cp1_srt

0x5744,	// (0x0003fb0f) tabs_3_active_pane_srt_ParamLimits

0x5744,	// (0x0003fb0f) tabs_3_active_pane_srt

0x5755,	// (0x0003fb20) tabs_3_passive_pane_cp_srt_ParamLimits

0x5755,	// (0x0003fb20) tabs_3_passive_pane_cp_srt

0x5766,	// (0x0003fb31) tabs_3_passive_pane_srt_ParamLimits

0x5766,	// (0x0003fb31) tabs_3_passive_pane_srt

0xc669,	// (0x00046a34) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc669,	// (0x00046a34) bg_passive_tab_pane_cp2_srt

0xc360,	// (0x0004672b) bg_passive_tab_pane_g1_cp2_srt

0xba82,	// (0x00045e4d) bg_passive_tab_pane_g2_cp2_srt

0xc369,	// (0x00046734) bg_passive_tab_pane_g3_cp2_srt

0xada1,	// (0x0004516c) bg_active_tab_pane_cp2_srt_ParamLimits

0xada1,	// (0x0004516c) bg_active_tab_pane_cp2_srt

0xd820,	// (0x00047beb) tabs_3_active_pane_srt_g1

0x7c86,	// (0x00042051) tabs_3_active_pane_srt_t1_ParamLimits

0x7c86,	// (0x00042051) tabs_3_active_pane_srt_t1

0xc360,	// (0x0004672b) bg_active_tab_pane_g1_cp2_srt

0xba82,	// (0x00045e4d) bg_active_tab_pane_g2_cp2_srt

0xc369,	// (0x00046734) bg_active_tab_pane_g3_cp2_srt

0x56fc,	// (0x0003fac7) tabs_4_active_pane_srt_ParamLimits

0x56fc,	// (0x0003fac7) tabs_4_active_pane_srt

0x570e,	// (0x0003fad9) tabs_4_passive_pane_cp2_srt_ParamLimits

0x570e,	// (0x0003fad9) tabs_4_passive_pane_cp2_srt

0x4efd,	// (0x0003f2c8) aid_size_cell_toolbar

0x8619,	// (0x000429e4) main_idle_act_pane_ParamLimits

0x506c,	// (0x0003f437) popup_large_graphic_colour_window_ParamLimits

0x8b7f,	// (0x00042f4a) popup_toolbar_window_ParamLimits

0x8b7f,	// (0x00042f4a) popup_toolbar_window

0xbd54,	// (0x0004611f) list_single_graphic_2heading_pane_ParamLimits

0xbd54,	// (0x0004611f) list_single_graphic_2heading_pane

0xb71f,	// (0x00045aea) aid_size_cell_apps_grid_lsc_pane

0xb731,	// (0x00045afc) aid_size_cell_apps_grid_prt_pane

0xb55a,	// (0x00045925) bg_wml_button_pane_cp1_ParamLimits

0xb55a,	// (0x00045925) bg_wml_button_pane_cp1

0xc813,	// (0x00046bde) form_midp_field_text_pane_t1_ParamLimits

0xc669,	// (0x00046a34) input_focus_pane_cp050_ParamLimits

0xc834,	// (0x00046bff) list_midp_form_text_pane_ParamLimits

0xc7f0,	// (0x00046bbb) input_focus_pane_cp051_ParamLimits

0xc804,	// (0x00046bcf) list_midp_choice_pane_ParamLimits

0xc6ed,	// (0x00046ab8) list_single_2graphic_pane_cp3_ParamLimits

0xc6ed,	// (0x00046ab8) list_single_2graphic_pane_cp3

0xc700,	// (0x00046acb) list_single_midp_graphic_pane_ParamLimits

0xc700,	// (0x00046acb) list_single_midp_graphic_pane

0x461e,	// (0x0003e9e9) list_single_graphic_2heading_pane_g1_ParamLimits

0x461e,	// (0x0003e9e9) list_single_graphic_2heading_pane_g1

0x462a,	// (0x0003e9f5) list_single_graphic_2heading_pane_g4_ParamLimits

0x462a,	// (0x0003e9f5) list_single_graphic_2heading_pane_g4

0x4636,	// (0x0003ea01) list_single_graphic_2heading_pane_g5_ParamLimits

0x4636,	// (0x0003ea01) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x00049b80) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x00049b80) list_single_graphic_2heading_pane_g

0x4642,	// (0x0003ea0d) list_single_graphic_2heading_pane_t1_ParamLimits

0x4642,	// (0x0003ea0d) list_single_graphic_2heading_pane_t1

0x4656,	// (0x0003ea21) list_single_graphic_2heading_pane_t2_ParamLimits

0x4656,	// (0x0003ea21) list_single_graphic_2heading_pane_t2

0x4670,	// (0x0003ea3b) list_single_graphic_2heading_pane_t3_ParamLimits

0x4670,	// (0x0003ea3b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x00049b87) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x00049b87) list_single_graphic_2heading_pane_t

0xc53f,	// (0x0004690a) bg_popup_sub_pane_cp2

0xc565,	// (0x00046930) grid_toobar_pane

0x53af,	// (0x0003f77a) cell_toolbar_pane_ParamLimits

0x53af,	// (0x0003f77a) cell_toolbar_pane

0xc59b,	// (0x00046966) cell_toolbar_pane_g1_ParamLimits

0xc59b,	// (0x00046966) cell_toolbar_pane_g1

0xc5ad,	// (0x00046978) cell_toolbar_pane_g2_ParamLimits

0xc5ad,	// (0x00046978) cell_toolbar_pane_g2

0x0001,

0xf7c3,	// (0x00049b8e) cell_toolbar_pane_g_ParamLimits

0xf7c3,	// (0x00049b8e) cell_toolbar_pane_g

0xc5cf,	// (0x0004699a) grid_highlight_pane_cp2_ParamLimits

0xc5cf,	// (0x0004699a) grid_highlight_pane_cp2

0xc5e9,	// (0x000469b4) toolbar_button_pane

0xc5f5,	// (0x000469c0) toolbar_button_pane_g1

0xc5fd,	// (0x000469c8) toolbar_button_pane_g2

0xc605,	// (0x000469d0) toolbar_button_pane_g3

0xc60d,	// (0x000469d8) toolbar_button_pane_g4

0xc615,	// (0x000469e0) toolbar_button_pane_g5

0xc61d,	// (0x000469e8) toolbar_button_pane_g6

0xc625,	// (0x000469f0) toolbar_button_pane_g7

0xc62d,	// (0x000469f8) toolbar_button_pane_g8

0xc635,	// (0x00046a00) toolbar_button_pane_g9

0x0009,

0xf7c8,	// (0x00049b93) toolbar_button_pane_g

0x53de,	// (0x0003f7a9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x53de,	// (0x0003f7a9) list_single_2graphic_pane_g1_cp3

0x8f71,	// (0x0004333c) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8f71,	// (0x0004333c) list_single_2graphic_pane_g2_cp3

0x53f9,	// (0x0003f7c4) list_single_2graphic_pane_g3_cp3

0x5401,	// (0x0003f7cc) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5401,	// (0x0003f7cc) list_single_2graphic_pane_g4_cp3

0x540d,	// (0x0003f7d8) list_single_2graphic_pane_t1_cp3_ParamLimits

0x540d,	// (0x0003f7d8) list_single_2graphic_pane_t1_cp3

0x5427,	// (0x0003f7f2) list_single_midp_graphic_pane_g2_ParamLimits

0x5427,	// (0x0003f7f2) list_single_midp_graphic_pane_g2

0x4616,	// (0x0003e9e1) aid_zoom_text_primary

0x4f05,	// (0x0003f2d0) aid_zoom_text_secondary

0x8462,	// (0x0004282d) status_small_pane_g7_ParamLimits

0x8462,	// (0x0004282d) status_small_pane_g7

0x8485,	// (0x00042850) status_small_pane_t1_ParamLimits

0x7bce,	// (0x00041f99) title_pane_g2

0x0003,

0xf54e,	// (0x00049919) title_pane_g

0x7eb0,	// (0x0004227b) aid_size_cell_colour_1_pane_ParamLimits

0x7eb0,	// (0x0004227b) aid_size_cell_colour_1_pane

0x7ec4,	// (0x0004228f) aid_size_cell_colour_2_pane_ParamLimits

0x7ec4,	// (0x0004228f) aid_size_cell_colour_2_pane

0x7ed8,	// (0x000422a3) aid_size_cell_colour_3_pane_ParamLimits

0x7ed8,	// (0x000422a3) aid_size_cell_colour_3_pane

0x7eec,	// (0x000422b7) aid_size_cell_colour_4_pane_ParamLimits

0x7eec,	// (0x000422b7) aid_size_cell_colour_4_pane

0x49bb,	// (0x0003ed86) title_pane_stacon_g1_ParamLimits

0x49bb,	// (0x0003ed86) title_pane_stacon_g1

0xcbcf,	// (0x00046f9a) popup_note_wait_window_g3_ParamLimits

0xcbcf,	// (0x00046f9a) popup_note_wait_window_g3

0xcc45,	// (0x00047010) popup_note_wait_window_t5_ParamLimits

0xcc45,	// (0x00047010) popup_note_wait_window_t5

0xad53,	// (0x0004511e) main_feb_china_hwr_fs_writing_pane

0x8682,	// (0x00042a4d) popup_feb_china_hwr_fs_window_ParamLimits

0x8682,	// (0x00042a4d) popup_feb_china_hwr_fs_window

0x900c,	// (0x000433d7) aid_size_cell_hwr_fs_ParamLimits

0x900c,	// (0x000433d7) aid_size_cell_hwr_fs

0xc669,	// (0x00046a34) bg_popup_sub_pane_cp3_ParamLimits

0xc669,	// (0x00046a34) bg_popup_sub_pane_cp3

0x9021,	// (0x000433ec) grid_hwr_fs_pane_ParamLimits

0x9021,	// (0x000433ec) grid_hwr_fs_pane

0x5472,	// (0x0003f83d) linegrid_hwr_fs_pane_ParamLimits

0x5472,	// (0x0003f83d) linegrid_hwr_fs_pane

0x9039,	// (0x00043404) cell_hwr_fs_pane_ParamLimits

0x9039,	// (0x00043404) cell_hwr_fs_pane

0xc675,	// (0x00046a40) linegrid_hwr_fs_pane_g1_ParamLimits

0xc675,	// (0x00046a40) linegrid_hwr_fs_pane_g1

0x9059,	// (0x00043424) linegrid_hwr_fs_pane_g2_ParamLimits

0x9059,	// (0x00043424) linegrid_hwr_fs_pane_g2

0xc681,	// (0x00046a4c) linegrid_hwr_fs_pane_g3_ParamLimits

0xc681,	// (0x00046a4c) linegrid_hwr_fs_pane_g3

0x54a0,	// (0x0003f86b) linegrid_hwr_fs_pane_g4_ParamLimits

0x54a0,	// (0x0003f86b) linegrid_hwr_fs_pane_g4

0x54ba,	// (0x0003f885) linegrid_hwr_fs_pane_g5_ParamLimits

0x54ba,	// (0x0003f885) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x00049bb9) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x00049bb9) linegrid_hwr_fs_pane_g

0xc68d,	// (0x00046a58) cell_hwr_fs_pane_g1_ParamLimits

0xc68d,	// (0x00046a58) cell_hwr_fs_pane_g1

0xc50d,	// (0x000468d8) cell_hwr_fs_pane_g2_ParamLimits

0xc50d,	// (0x000468d8) cell_hwr_fs_pane_g2

0x906b,	// (0x00043436) cell_hwr_fs_pane_g3_ParamLimits

0x906b,	// (0x00043436) cell_hwr_fs_pane_g3

0x9078,	// (0x00043443) cell_hwr_fs_pane_g4_ParamLimits

0x9078,	// (0x00043443) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x00049bc4) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x00049bc4) cell_hwr_fs_pane_g

0x9085,	// (0x00043450) cell_hwr_fs_pane_t1

0xad53,	// (0x0004511e) grid_highlight_pane_cp6

0xad53,	// (0x0004511e) main_idle_act2_pane

0xb50a,	// (0x000458d5) aid_inside_area_popup_secondary

0x9207,	// (0x000435d2) aid_inside_area_window_primary_ParamLimits

0x9207,	// (0x000435d2) aid_inside_area_window_primary

0xd949,	// (0x00047d14) ai2_news_ticker_pane

0xd951,	// (0x00047d1c) aid_size_cell_ai1_link_ParamLimits

0xd951,	// (0x00047d1c) aid_size_cell_ai1_link

0x9614,	// (0x000439df) popup_ai2_data_window_ParamLimits

0x9614,	// (0x000439df) popup_ai2_data_window

0xd96b,	// (0x00047d36) popup_ai2_link_window_ParamLimits

0xd96b,	// (0x00047d36) popup_ai2_link_window

0xc669,	// (0x00046a34) bg_popup_sub_pane_cp4_ParamLimits

0xc669,	// (0x00046a34) bg_popup_sub_pane_cp4

0xd97f,	// (0x00047d4a) grid_ai2_link_pane_ParamLimits

0xd97f,	// (0x00047d4a) grid_ai2_link_pane

0xd996,	// (0x00047d61) popup_ai2_link_window_g1_ParamLimits

0xd996,	// (0x00047d61) popup_ai2_link_window_g1

0xd9a2,	// (0x00047d6d) popup_ai2_link_window_g2_ParamLimits

0xd9a2,	// (0x00047d6d) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x00049d97) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x00049d97) popup_ai2_link_window_g

0xd9b1,	// (0x00047d7c) ai2_mp_button_pane

0xd9b9,	// (0x00047d84) ai2_mp_volume_pane

0xc7f0,	// (0x00046bbb) bg_popup_sub_pane_cp5_ParamLimits

0xc7f0,	// (0x00046bbb) bg_popup_sub_pane_cp5

0xd9c1,	// (0x00047d8c) heading_ai2_gene_pane_ParamLimits

0xd9c1,	// (0x00047d8c) heading_ai2_gene_pane

0xd9cd,	// (0x00047d98) list_ai2_gene_pane_ParamLimits

0xd9cd,	// (0x00047d98) list_ai2_gene_pane

0xda15,	// (0x00047de0) cell_ai2_link_pane_ParamLimits

0xda15,	// (0x00047de0) cell_ai2_link_pane

0xda2b,	// (0x00047df6) cell_ai2_link_pane_g1

0xad53,	// (0x0004511e) grid_highlight_pane_cp7

0x57b4,	// (0x0003fb7f) ai2_mp_volume_pane_g1

0xdac0,	// (0x00047e8b) ai2_mp_volume_pane_g2

0x963e,	// (0x00043a09) list_ai2_gene_pane_t1

0xdac8,	// (0x00047e93) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x00049db0) ai2_mp_volume_pane_g

0x57bc,	// (0x0003fb87) volume_small_pane_cp3

0xdad0,	// (0x00047e9b) aid_size_cell_ai2_button

0xdad8,	// (0x00047ea3) grid_ai2_button_pane

0xdae1,	// (0x00047eac) cell_ai2_button_pane_ParamLimits

0xdae1,	// (0x00047eac) cell_ai2_button_pane

0xacd1,	// (0x0004509c) cell_ai2_button_pane_g1

0xad53,	// (0x0004511e) grid_highlight_pane_cp8

0xda80,	// (0x00047e4b) ai2_gene_pane_t1_ParamLimits

0xda80,	// (0x00047e4b) ai2_gene_pane_t1

0x8601,	// (0x000429cc) aid_height_parent_landscape

0x93bf,	// (0x0004378a) aid_height_set_list

0xd736,	// (0x00047b01) aid_size_parent

0xd80a,	// (0x00047bd5) aid_size_cell_graphic_pane_ParamLimits

0xd9dd,	// (0x00047da8) popup_ai2_data_window_g1_ParamLimits

0xd9dd,	// (0x00047da8) popup_ai2_data_window_g1

0xd9e9,	// (0x00047db4) ai2_news_ticker_pane_g1

0xd9f1,	// (0x00047dbc) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x00049d9c) ai2_news_ticker_pane_g

0xd9f9,	// (0x00047dc4) ai2_news_ticker_pane_t1

0xda07,	// (0x00047dd2) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x00049da1) ai2_news_ticker_pane_t

0xd7eb,	// (0x00047bb6) heading_ai2_gene_pane_g1

0xda34,	// (0x00047dff) heading_ai2_gene_pane_t1_ParamLimits

0xda34,	// (0x00047dff) heading_ai2_gene_pane_t1

0xda49,	// (0x00047e14) list_highlight_pane_cp6

0x9628,	// (0x000439f3) ai2_gene_pane_ParamLimits

0x9628,	// (0x000439f3) ai2_gene_pane

0x964c,	// (0x00043a17) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x00049da6) list_ai2_gene_pane_t

0xda51,	// (0x00047e1c) list_highlight_pane_cp8_ParamLimits

0xda51,	// (0x00047e1c) list_highlight_pane_cp8

0xda62,	// (0x00047e2d) ai2_gene_pane_g1_ParamLimits

0xda62,	// (0x00047e2d) ai2_gene_pane_g1

0xda74,	// (0x00047e3f) ai2_gene_pane_g2_ParamLimits

0xda74,	// (0x00047e3f) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x00049dab) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x00049dab) ai2_gene_pane_g

0xb2f8,	// (0x000456c3) scroll_pane_cp12

0x85c0,	// (0x0004298b) control_pane_t3_ParamLimits

0x85c0,	// (0x0004298b) control_pane_t3

0x8476,	// (0x00042841) status_small_pane_g8_ParamLimits

0x8476,	// (0x00042841) status_small_pane_g8

0x86f6,	// (0x00042ac1) popup_find_window_ParamLimits

0x88e9,	// (0x00042cb4) popup_note_image_window_ParamLimits

0x7f85,	// (0x00042350) list_double2_graphic_pane_vc_g1_ParamLimits

0x7f85,	// (0x00042350) list_double2_graphic_pane_vc_g1

0xb309,	// (0x000456d4) list_double2_graphic_pane_vc_g2_ParamLimits

0xb309,	// (0x000456d4) list_double2_graphic_pane_vc_g2

0xb315,	// (0x000456e0) list_double2_graphic_pane_vc_g3_ParamLimits

0xb315,	// (0x000456e0) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0004998c) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0004998c) list_double2_graphic_pane_vc_g

0x7f91,	// (0x0004235c) list_double2_graphic_pane_vc_t1_ParamLimits

0x7f91,	// (0x0004235c) list_double2_graphic_pane_vc_t1

0xb309,	// (0x000456d4) list_single_heading_pane_vc_g1_ParamLimits

0xb309,	// (0x000456d4) list_single_heading_pane_vc_g1

0xb315,	// (0x000456e0) list_single_heading_pane_vc_g2_ParamLimits

0xb315,	// (0x000456e0) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004999d) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004999d) list_single_heading_pane_vc_g

0x8f82,	// (0x0004334d) list_single_heading_pane_vc_t1_ParamLimits

0x8f82,	// (0x0004334d) list_single_heading_pane_vc_t1

0x8f98,	// (0x00043363) list_single_heading_pane_vc_t2_ParamLimits

0x8f98,	// (0x00043363) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x00049ba8) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x00049ba8) list_single_heading_pane_vc_t

0xbd3c,	// (0x00046107) list_setting_number_pane_vc_g1_ParamLimits

0xbd3c,	// (0x00046107) list_setting_number_pane_vc_g1

0xbd48,	// (0x00046113) list_setting_number_pane_vc_g2_ParamLimits

0xbd48,	// (0x00046113) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x00049bad) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x00049bad) list_setting_number_pane_vc_g

0x8faa,	// (0x00043375) list_setting_number_pane_vc_t1_ParamLimits

0x8faa,	// (0x00043375) list_setting_number_pane_vc_t1

0x8fbe,	// (0x00043389) list_setting_number_pane_vc_t2_ParamLimits

0x8fbe,	// (0x00043389) list_setting_number_pane_vc_t2

0x8fda,	// (0x000433a5) list_setting_number_pane_vc_t3_ParamLimits

0x8fda,	// (0x000433a5) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x00049bb2) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x00049bb2) list_setting_number_pane_vc_t

0x9000,	// (0x000433cb) set_value_pane_vc_ParamLimits

0x9000,	// (0x000433cb) set_value_pane_vc

0xbd54,	// (0x0004611f) list_double2_graphic_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_double2_graphic_pane_vc

0xd791,	// (0x00047b5c) list_double2_large_graphic_pane_vc_ParamLimits

0xd791,	// (0x00047b5c) list_double2_large_graphic_pane_vc

0xbd54,	// (0x0004611f) list_double2_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_double2_pane_vc

0xbd54,	// (0x0004611f) list_double_graphic_heading_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_double_graphic_heading_pane_vc

0xbd54,	// (0x0004611f) list_double_graphic_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_double_graphic_pane_vc

0xbd54,	// (0x0004611f) list_double_heading_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_double_heading_pane_vc

0xbd67,	// (0x00046132) list_double_large_graphic_pane_vc_ParamLimits

0xbd67,	// (0x00046132) list_double_large_graphic_pane_vc

0xbd54,	// (0x0004611f) list_double_number_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_double_number_pane_vc

0xbd54,	// (0x0004611f) list_double_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_double_pane_vc

0xbd54,	// (0x0004611f) list_double_time_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_double_time_pane_vc

0xbd54,	// (0x0004611f) list_setting_number_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_setting_number_pane_vc

0xbd54,	// (0x0004611f) list_setting_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_setting_pane_vc

0xbd54,	// (0x0004611f) list_single_graphic_heading_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_single_graphic_heading_pane_vc

0xbd54,	// (0x0004611f) list_single_heading_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_single_heading_pane_vc

0xbd54,	// (0x0004611f) list_single_number_heading_pane_vc_ParamLimits

0xbd54,	// (0x0004611f) list_single_number_heading_pane_vc

0x7f85,	// (0x00042350) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7f85,	// (0x00042350) list_double_graphic_heading_pane_vc_g1

0xb309,	// (0x000456d4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb309,	// (0x000456d4) list_double_graphic_heading_pane_vc_g2

0xb315,	// (0x000456e0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb315,	// (0x000456e0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5c1,	// (0x0004998c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x0004998c) list_double_graphic_heading_pane_vc_g

0x9694,	// (0x00043a5f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9694,	// (0x00043a5f) list_double_graphic_heading_pane_vc_t1

0x96aa,	// (0x00043a75) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x96aa,	// (0x00043a75) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x00049db7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x00049db7) list_double_graphic_heading_pane_vc_t

0xbd3c,	// (0x00046107) list_setting_pane_vc_g1_ParamLimits

0xbd3c,	// (0x00046107) list_setting_pane_vc_g1

0xbd48,	// (0x00046113) list_setting_pane_vc_g2_ParamLimits

0xbd48,	// (0x00046113) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x00049bad) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x00049bad) list_setting_pane_vc_g

0x96c2,	// (0x00043a8d) list_setting_pane_vc_t1_ParamLimits

0x96c2,	// (0x00043a8d) list_setting_pane_vc_t1

0x96d6,	// (0x00043aa1) list_setting_pane_vc_t2_ParamLimits

0x96d6,	// (0x00043aa1) list_setting_pane_vc_t2

0x0001,

0xfa2f,	// (0x00049dfa) list_setting_pane_vc_t_ParamLimits

0xfa2f,	// (0x00049dfa) list_setting_pane_vc_t

0x9000,	// (0x000433cb) set_value_pane_cp_vc_ParamLimits

0x9000,	// (0x000433cb) set_value_pane_cp_vc

0xb309,	// (0x000456d4) list_single_number_heading_pane_vc_g1_ParamLimits

0xb309,	// (0x000456d4) list_single_number_heading_pane_vc_g1

0xb315,	// (0x000456e0) list_single_number_heading_pane_vc_g2_ParamLimits

0xb315,	// (0x000456e0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004999d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004999d) list_single_number_heading_pane_vc_g

0x8f82,	// (0x0004334d) list_single_number_heading_pane_vc_t1_ParamLimits

0x8f82,	// (0x0004334d) list_single_number_heading_pane_vc_t1

0xbd83,	// (0x0004614e) list_single_number_heading_pane_vc_t2_ParamLimits

0xbd83,	// (0x0004614e) list_single_number_heading_pane_vc_t2

0xb321,	// (0x000456ec) list_single_number_heading_pane_vc_t3_ParamLimits

0xb321,	// (0x000456ec) list_single_number_heading_pane_vc_t3

0x0002,

0xfa34,	// (0x00049dff) list_single_number_heading_pane_vc_t_ParamLimits

0xfa34,	// (0x00049dff) list_single_number_heading_pane_vc_t

0x7f85,	// (0x00042350) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7f85,	// (0x00042350) list_single_graphic_heading_pane_vc_g1

0xb309,	// (0x000456d4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb309,	// (0x000456d4) list_single_graphic_heading_pane_vc_g4

0xb315,	// (0x000456e0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb315,	// (0x000456e0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x0004998c) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x0004998c) list_single_graphic_heading_pane_vc_g

0x8f82,	// (0x0004334d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x8f82,	// (0x0004334d) list_single_graphic_heading_pane_vc_t1

0xbd95,	// (0x00046160) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xbd95,	// (0x00046160) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3b,	// (0x00049e06) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x00049e06) list_single_graphic_heading_pane_vc_t

0xb309,	// (0x000456d4) list_double2_pane_vc_g1_ParamLimits

0xb309,	// (0x000456d4) list_double2_pane_vc_g1

0xb315,	// (0x000456e0) list_double2_pane_vc_g2_ParamLimits

0xb315,	// (0x000456e0) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004999d) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004999d) list_double2_pane_vc_g

0x94fa,	// (0x000438c5) list_double2_pane_vc_t1_ParamLimits

0x94fa,	// (0x000438c5) list_double2_pane_vc_t1

0xb333,	// (0x000456fe) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb333,	// (0x000456fe) list_double2_large_graphic_pane_vc_g1

0xb33f,	// (0x0004570a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb33f,	// (0x0004570a) list_double2_large_graphic_pane_vc_g2

0xb34b,	// (0x00045716) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb34b,	// (0x00045716) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x000499b5) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x000499b5) list_double2_large_graphic_pane_vc_g

0x7fa7,	// (0x00042372) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7fa7,	// (0x00042372) list_double2_large_graphic_pane_vc_t1

0xbda7,	// (0x00046172) list_double_time_pane_vc_g1_ParamLimits

0xbda7,	// (0x00046172) list_double_time_pane_vc_g1

0xbdb3,	// (0x0004617e) list_double_time_pane_vc_g2_ParamLimits

0xbdb3,	// (0x0004617e) list_double_time_pane_vc_g2

0x0001,

0xfa40,	// (0x00049e0b) list_double_time_pane_vc_g_ParamLimits

0xfa40,	// (0x00049e0b) list_double_time_pane_vc_g

0xbdbf,	// (0x0004618a) list_double_time_pane_vc_t1_ParamLimits

0xbdbf,	// (0x0004618a) list_double_time_pane_vc_t1

0xbddd,	// (0x000461a8) list_double_time_pane_vc_t2_ParamLimits

0xbddd,	// (0x000461a8) list_double_time_pane_vc_t2

0xbe21,	// (0x000461ec) list_double_time_pane_vc_t3_ParamLimits

0xbe21,	// (0x000461ec) list_double_time_pane_vc_t3

0xbe33,	// (0x000461fe) list_double_time_pane_vc_t4_ParamLimits

0xbe33,	// (0x000461fe) list_double_time_pane_vc_t4

0x0003,

0xfa45,	// (0x00049e10) list_double_time_pane_vc_t_ParamLimits

0xfa45,	// (0x00049e10) list_double_time_pane_vc_t

0xb309,	// (0x000456d4) list_double_pane_vc_g1_ParamLimits

0xb309,	// (0x000456d4) list_double_pane_vc_g1

0xb315,	// (0x000456e0) list_double_pane_vc_g2_ParamLimits

0xb315,	// (0x000456e0) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004999d) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004999d) list_double_pane_vc_g

0xbe45,	// (0x00046210) list_double_pane_vc_t1_ParamLimits

0xbe45,	// (0x00046210) list_double_pane_vc_t1

0xbe57,	// (0x00046222) list_double_pane_vc_t2_ParamLimits

0xbe57,	// (0x00046222) list_double_pane_vc_t2

0x0001,

0xfa4e,	// (0x00049e19) list_double_pane_vc_t_ParamLimits

0xfa4e,	// (0x00049e19) list_double_pane_vc_t

0xb309,	// (0x000456d4) list_double_number_pane_vc_g1_ParamLimits

0xb309,	// (0x000456d4) list_double_number_pane_vc_g1

0xb315,	// (0x000456e0) list_double_number_pane_vc_g2_ParamLimits

0xb315,	// (0x000456e0) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004999d) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004999d) list_double_number_pane_vc_g

0xbe6d,	// (0x00046238) list_double_number_pane_vc_t1_ParamLimits

0xbe6d,	// (0x00046238) list_double_number_pane_vc_t1

0xbe81,	// (0x0004624c) list_double_number_pane_vc_t2_ParamLimits

0xbe81,	// (0x0004624c) list_double_number_pane_vc_t2

0xbe93,	// (0x0004625e) list_double_number_pane_vc_t3_ParamLimits

0xbe93,	// (0x0004625e) list_double_number_pane_vc_t3

0x0002,

0xfa53,	// (0x00049e1e) list_double_number_pane_vc_t_ParamLimits

0xfa53,	// (0x00049e1e) list_double_number_pane_vc_t

0xbea9,	// (0x00046274) list_double_large_graphic_pane_vc_g1_ParamLimits

0xbea9,	// (0x00046274) list_double_large_graphic_pane_vc_g1

0xbed1,	// (0x0004629c) list_double_large_graphic_pane_vc_g2_ParamLimits

0xbed1,	// (0x0004629c) list_double_large_graphic_pane_vc_g2

0xbee5,	// (0x000462b0) list_double_large_graphic_pane_vc_g3_ParamLimits

0xbee5,	// (0x000462b0) list_double_large_graphic_pane_vc_g3

0xbef4,	// (0x000462bf) list_double_large_graphic_pane_vc_g4_ParamLimits

0xbef4,	// (0x000462bf) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5a,	// (0x00049e25) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x00049e25) list_double_large_graphic_pane_vc_g

0xbf04,	// (0x000462cf) list_double_large_graphic_pane_vc_t1_ParamLimits

0xbf04,	// (0x000462cf) list_double_large_graphic_pane_vc_t1

0xbf1e,	// (0x000462e9) list_double_large_graphic_pane_vc_t2_ParamLimits

0xbf1e,	// (0x000462e9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x00049e2e) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x00049e2e) list_double_large_graphic_pane_vc_t

0xb309,	// (0x000456d4) list_double_heading_pane_vc_g1_ParamLimits

0xb309,	// (0x000456d4) list_double_heading_pane_vc_g1

0xb315,	// (0x000456e0) list_double_heading_pane_vc_g2_ParamLimits

0xb315,	// (0x000456e0) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0004999d) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0004999d) list_double_heading_pane_vc_g

0xbf3e,	// (0x00046309) list_double_heading_pane_vc_t1_ParamLimits

0xbf3e,	// (0x00046309) list_double_heading_pane_vc_t1

0x8f82,	// (0x0004334d) list_double_heading_pane_vc_t2_ParamLimits

0x8f82,	// (0x0004334d) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x00049e33) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x00049e33) list_double_heading_pane_vc_t

0xbf50,	// (0x0004631b) list_double_graphic_pane_vc_g1_ParamLimits

0xbf50,	// (0x0004631b) list_double_graphic_pane_vc_g1

0xbf5c,	// (0x00046327) list_double_graphic_pane_vc_g2_ParamLimits

0xbf5c,	// (0x00046327) list_double_graphic_pane_vc_g2

0xb309,	// (0x000456d4) list_double_graphic_pane_vc_g3_ParamLimits

0xb309,	// (0x000456d4) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x00049e38) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x00049e38) list_double_graphic_pane_vc_g

0xbf79,	// (0x00046344) list_double_graphic_pane_vc_t1_ParamLimits

0xbf79,	// (0x00046344) list_double_graphic_pane_vc_t1

0xbf97,	// (0x00046362) list_double_graphic_pane_vc_t2_ParamLimits

0xbf97,	// (0x00046362) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x00049e41) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x00049e41) list_double_graphic_pane_vc_t

0x4698,	// (0x0003ea63) aid_size_cell_fastswap

0x7a00,	// (0x00041dcb) aid_size_cell_touch_ParamLimits

0x7a00,	// (0x00041dcb) aid_size_cell_touch

0x47ef,	// (0x0003ebba) popup_fast_swap_wide_window_ParamLimits

0x47ef,	// (0x0003ebba) popup_fast_swap_wide_window

0x7b61,	// (0x00041f2c) touch_pane_ParamLimits

0x7b61,	// (0x00041f2c) touch_pane

0x8027,	// (0x000423f2) button_value_adjust_pane_cp2

0x802f,	// (0x000423fa) button_value_adjust_pane_cp4

0x8037,	// (0x00042402) form_field_data_pane_cp2

0x17be,	// (0x0003bb89) form_field_data_wide_pane_cp2

0xb756,	// (0x00045b21) bg_scroll_pane_ParamLimits

0x4adc,	// (0x0003eea7) scroll_handle_pane_ParamLimits

0x4af0,	// (0x0003eebb) scroll_sc2_down_pane_ParamLimits

0x4af0,	// (0x0003eebb) scroll_sc2_down_pane

0xb787,	// (0x00045b52) scroll_sc2_up_pane_ParamLimits

0xb787,	// (0x00045b52) scroll_sc2_up_pane

0x97b8,	// (0x00043b83) grid_wheel_folder_pane_g1_ParamLimits

0x97b8,	// (0x00043b83) grid_wheel_folder_pane_g1

0x4ca4,	// (0x0003f06f) clock_nsta_pane_cp2_ParamLimits

0x4ca4,	// (0x0003f06f) clock_nsta_pane_cp2

0x838c,	// (0x00042757) listscroll_midp_pane_ParamLimits

0x839b,	// (0x00042766) midp_canvas_pane

0x4eeb,	// (0x0003f2b6) nsta_clock_indic_pane

0xc41e,	// (0x000467e9) listscroll_form_pane_vc

0xc426,	// (0x000467f1) listscroll_set_pane_vc_ParamLimits

0xc426,	// (0x000467f1) listscroll_set_pane_vc

0x8cb5,	// (0x00043080) clock_nsta_pane

0x8cd8,	// (0x000430a3) indicator_nsta_pane

0xc53f,	// (0x0004690a) bg_popup_sub_pane_cp2_ParamLimits

0xc553,	// (0x0004691e) find_pane_cp2_ParamLimits

0xc553,	// (0x0004691e) find_pane_cp2

0xc565,	// (0x00046930) grid_toobar_pane_ParamLimits

0xc63d,	// (0x00046a08) list_form_gen_pane_vc_ParamLimits

0xc63d,	// (0x00046a08) list_form_gen_pane_vc

0xc653,	// (0x00046a1e) scroll_pane_cp8_vc_ParamLimits

0xc653,	// (0x00046a1e) scroll_pane_cp8_vc

0xc6a3,	// (0x00046a6e) data_form_wide_pane_vc_ParamLimits

0xc6a3,	// (0x00046a6e) data_form_wide_pane_vc

0xc6af,	// (0x00046a7a) form_field_data_wide_pane_vc_g1

0xc6b7,	// (0x00046a82) form_field_data_wide_pane_vc_t1_ParamLimits

0xc6b7,	// (0x00046a82) form_field_data_wide_pane_vc_t1

0xb3d4,	// (0x0004579f) input_focus_pane_cp6_vc_ParamLimits

0xb3d4,	// (0x0004579f) input_focus_pane_cp6_vc

0x90be,	// (0x00043489) list_midp_pane_ParamLimits

0xd2da,	// (0x000476a5) scroll_pane_cp16_ParamLimits

0xd2da,	// (0x000476a5) scroll_pane_cp16

0xc9b5,	// (0x00046d80) button_value_adjust_pane_ParamLimits

0xc9b5,	// (0x00046d80) button_value_adjust_pane

0x93cb,	// (0x00043796) button_value_adjust_pane_cp6_ParamLimits

0x93cb,	// (0x00043796) button_value_adjust_pane_cp6

0x94d5,	// (0x000438a0) settings_code_pane_cp_ParamLimits

0x94d5,	// (0x000438a0) settings_code_pane_cp

0xacd1,	// (0x0004509c) cell_touch_pane_g1

0xacd1,	// (0x0004509c) cell_touch_pane_g2

0x0001,

0xf708,	// (0x00049ad3) cell_touch_pane_g

0x965a,	// (0x00043a25) cell_touch_pane_cp_ParamLimits

0x965a,	// (0x00043a25) cell_touch_pane_cp

0x9676,	// (0x00043a41) cell_touch_pane_ParamLimits

0x9676,	// (0x00043a41) cell_touch_pane

0xacd1,	// (0x0004509c) scroll_sc2_down_pane_g1

0xacd1,	// (0x0004509c) scroll_sc2_up_pane_g1

0xad53,	// (0x0004511e) bg_set_opt_pane_cp4_vc

0xdaf3,	// (0x00047ebe) list_set_graphic_pane_vc_g1_ParamLimits

0xdaf3,	// (0x00047ebe) list_set_graphic_pane_vc_g1

0xdaff,	// (0x00047eca) list_set_graphic_pane_vc_g2_ParamLimits

0xdaff,	// (0x00047eca) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x00049dbc) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x00049dbc) list_set_graphic_pane_vc_g

0xdb0b,	// (0x00047ed6) text_primary_small_cp13_vc_ParamLimits

0xdb0b,	// (0x00047ed6) text_primary_small_cp13_vc

0xdb23,	// (0x00047eee) list_set_graphic_pane_vc_ParamLimits

0xdb23,	// (0x00047eee) list_set_graphic_pane_vc

0xad53,	// (0x0004511e) input_focus_pane_cp2_vc

0xacd1,	// (0x0004509c) setting_code_pane_vc_g1

0xdb36,	// (0x00047f01) setting_code_pane_vc_t1

0xdb44,	// (0x00047f0f) set_text_pane_vc_t1_ParamLimits

0xdb44,	// (0x00047f0f) set_text_pane_vc_t1

0xad53,	// (0x0004511e) input_focus_pane_cp1_vc

0xdb5f,	// (0x00047f2a) list_set_text_pane_vc

0xacd1,	// (0x0004509c) setting_text_pane_vc_g1

0xad53,	// (0x0004511e) bg_set_opt_pane_cp2_vc

0xdb69,	// (0x00047f34) setting_slider_graphic_pane_vc_g1

0xdb71,	// (0x00047f3c) setting_slider_graphic_pane_vc_t1

0xdb7f,	// (0x00047f4a) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x00049dc1) setting_slider_graphic_pane_vc_t

0xdb8d,	// (0x00047f58) slider_set_pane_cp_vc

0xdb95,	// (0x00047f60) slider_set_pane_vc_g1

0xdb9e,	// (0x00047f69) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x00049dc6) slider_set_pane_vc_g

0xb42f,	// (0x000457fa) set_opt_bg_pane_g1_copy1

0xb437,	// (0x00045802) set_opt_bg_pane_g2_copy1

0xdbca,	// (0x00047f95) set_opt_bg_pane_g3_copy1

0xb447,	// (0x00045812) set_opt_bg_pane_g4_copy1

0xb44f,	// (0x0004581a) set_opt_bg_pane_g5_copy1

0xb457,	// (0x00045822) set_opt_bg_pane_g6_copy1

0xdbd2,	// (0x00047f9d) set_opt_bg_pane_g7_copy1

0xdbda,	// (0x00047fa5) set_opt_bg_pane_g8_copy1

0xdbe2,	// (0x00047fad) set_opt_bg_pane_g9_copy1

0xad53,	// (0x0004511e) bg_set_opt_pane_cp_vc

0xdbea,	// (0x00047fb5) setting_slider_pane_vc_t1

0xdb71,	// (0x00047f3c) setting_slider_pane_vc_t2

0xdb7f,	// (0x00047f4a) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x00049dd5) setting_slider_pane_vc_t

0xdb8d,	// (0x00047f58) slider_set_pane_vc

0x54de,	// (0x0003f8a9) volume_set_pane_vc_g1

0x57c5,	// (0x0003fb90) volume_set_pane_vc_g2

0x57ce,	// (0x0003fb99) volume_set_pane_vc_g3

0x57d7,	// (0x0003fba2) volume_set_pane_vc_g4

0x57e0,	// (0x0003fbab) volume_set_pane_vc_g5

0x57e9,	// (0x0003fbb4) volume_set_pane_vc_g6

0x57f2,	// (0x0003fbbd) volume_set_pane_vc_g7

0x57fb,	// (0x0003fbc6) volume_set_pane_vc_g8

0x5804,	// (0x0003fbcf) volume_set_pane_vc_g9

0x580d,	// (0x0003fbd8) volume_set_pane_vc_g10

0x0009,

0xfa11,	// (0x00049ddc) volume_set_pane_vc_g

0xdbf9,	// (0x00047fc4) volume_set_pane_vc

0xdc01,	// (0x00047fcc) button_value_adjust_pane_cp1_vc

0xdc0b,	// (0x00047fd6) list_highlight_pane_cp2_vc

0xdc14,	// (0x00047fdf) list_set_pane_vc_ParamLimits

0xdc14,	// (0x00047fdf) list_set_pane_vc

0xdc66,	// (0x00048031) main_pane_set_vc_t1_ParamLimits

0xdc66,	// (0x00048031) main_pane_set_vc_t1

0xdc7b,	// (0x00048046) main_pane_set_vc_t2_ParamLimits

0xdc7b,	// (0x00048046) main_pane_set_vc_t2

0xdc8d,	// (0x00048058) main_pane_set_vc_t3_ParamLimits

0xdc8d,	// (0x00048058) main_pane_set_vc_t3

0xdc9f,	// (0x0004806a) main_pane_set_vc_t4_ParamLimits

0xdc9f,	// (0x0004806a) main_pane_set_vc_t4

0x0003,

0xfa26,	// (0x00049df1) main_pane_set_vc_t_ParamLimits

0xfa26,	// (0x00049df1) main_pane_set_vc_t

0xdcb1,	// (0x0004807c) setting_code_pane_vc_ParamLimits

0xdcb1,	// (0x0004807c) setting_code_pane_vc

0xdcc0,	// (0x0004808b) setting_slider_graphic_pane_vc

0xdcc0,	// (0x0004808b) setting_slider_pane_vc

0xdcc0,	// (0x0004808b) setting_text_pane_vc

0xdcc0,	// (0x0004808b) setting_volume_pane_vc

0xdcc8,	// (0x00048093) scroll_pane_cp121_vc

0xb3bf,	// (0x0004578a) set_content_pane_vc

0xdcd0,	// (0x0004809b) button_value_adjust_pane_g1

0xdcd9,	// (0x000480a4) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x00049e46) button_value_adjust_pane_g

0xdce2,	// (0x000480ad) form_field_slider_wide_pane_vc_t1_ParamLimits

0xdce2,	// (0x000480ad) form_field_slider_wide_pane_vc_t1

0xdcf8,	// (0x000480c3) form_field_slider_wide_pane_vc_t2_ParamLimits

0xdcf8,	// (0x000480c3) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x00049e4b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x00049e4b) form_field_slider_wide_pane_vc_t

0xada1,	// (0x0004516c) input_focus_pane_cp10_vc_ParamLimits

0xada1,	// (0x0004516c) input_focus_pane_cp10_vc

0xdd23,	// (0x000480ee) slider_cont_pane_cp1_vc_ParamLimits

0xdd23,	// (0x000480ee) slider_cont_pane_cp1_vc

0xdb95,	// (0x00047f60) slider_form_pane_g1_cp2

0xdb9e,	// (0x00047f69) slider_form_pane_g2_cp2

0xdd3e,	// (0x00048109) form_field_slider_pane_vc_t3

0xdd4c,	// (0x00048117) form_field_slider_pane_vc_t4

0xdd5a,	// (0x00048125) slider_form_pane_vc_ParamLimits

0xdd5a,	// (0x00048125) slider_form_pane_vc

0xdd67,	// (0x00048132) form_field_slider_pane_vc_t1_ParamLimits

0xdd67,	// (0x00048132) form_field_slider_pane_vc_t1

0xdd7d,	// (0x00048148) form_field_slider_pane_vc_t2_ParamLimits

0xdd7d,	// (0x00048148) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x00049e5d) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x00049e5d) form_field_slider_pane_vc_t

0xada1,	// (0x0004516c) input_focus_pane_cp9_vc_ParamLimits

0xada1,	// (0x0004516c) input_focus_pane_cp9_vc

0xdd8f,	// (0x0004815a) slider_cont_pane_vc_ParamLimits

0xdd8f,	// (0x0004815a) slider_cont_pane_vc

0xdda1,	// (0x0004816c) list_form_graphic_pane_cp_vc_ParamLimits

0xdda1,	// (0x0004816c) list_form_graphic_pane_cp_vc

0xc6af,	// (0x00046a7a) form_field_popup_wide_pane_vc_g1

0xddb6,	// (0x00048181) form_field_popup_wide_pane_vc_t1_ParamLimits

0xddb6,	// (0x00048181) form_field_popup_wide_pane_vc_t1

0xb3d4,	// (0x0004579f) input_focus_pane_cp8_vc_ParamLimits

0xb3d4,	// (0x0004579f) input_focus_pane_cp8_vc

0xddf5,	// (0x000481c0) list_form_wide_pane_vc_ParamLimits

0xddf5,	// (0x000481c0) list_form_wide_pane_vc

0xde01,	// (0x000481cc) list_form_graphic_pane_vc_g1

0xde09,	// (0x000481d4) list_form_graphic_pane_vc_t1_ParamLimits

0xde09,	// (0x000481d4) list_form_graphic_pane_vc_t1

0xadb7,	// (0x00045182) list_highlight_pane_cp5_vc_ParamLimits

0xadb7,	// (0x00045182) list_highlight_pane_cp5_vc

0xde25,	// (0x000481f0) list_form_graphic_pane_vc_ParamLimits

0xde25,	// (0x000481f0) list_form_graphic_pane_vc

0xc6af,	// (0x00046a7a) form_field_popup_pane_vc_g1

0xde3b,	// (0x00048206) form_field_popup_pane_vc_t1_ParamLimits

0xde3b,	// (0x00048206) form_field_popup_pane_vc_t1

0xb3d4,	// (0x0004579f) input_focus_pane_cp7_vc_ParamLimits

0xb3d4,	// (0x0004579f) input_focus_pane_cp7_vc

0xde50,	// (0x0004821b) list_form_pane_vc_ParamLimits

0xde50,	// (0x0004821b) list_form_pane_vc

0xde5c,	// (0x00048227) data_form_pane_vc_t1_ParamLimits

0xde5c,	// (0x00048227) data_form_pane_vc_t1

0xb42f,	// (0x000457fa) input_focus_pane_vc_g1

0xb437,	// (0x00045802) input_focus_pane_vc_g2

0xb43f,	// (0x0004580a) input_focus_pane_vc_g3

0xb447,	// (0x00045812) input_focus_pane_vc_g4

0xb44f,	// (0x0004581a) input_focus_pane_vc_g5

0xb457,	// (0x00045822) input_focus_pane_vc_g6

0xb45f,	// (0x0004582a) input_focus_pane_vc_g7

0xb467,	// (0x00045832) input_focus_pane_vc_g8

0xb46f,	// (0x0004583a) input_focus_pane_vc_g9

0xacd1,	// (0x0004509c) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x00049a5c) input_focus_pane_vc_g

0xc6a3,	// (0x00046a6e) data_form_pane_vc_ParamLimits

0xc6a3,	// (0x00046a6e) data_form_pane_vc

0xc6af,	// (0x00046a7a) form_field_data_pane_vc_g1

0xde77,	// (0x00048242) form_field_data_pane_vc_t1_ParamLimits

0xde77,	// (0x00048242) form_field_data_pane_vc_t1

0xb3d4,	// (0x0004579f) input_focus_pane_vc_ParamLimits

0xb3d4,	// (0x0004579f) input_focus_pane_vc

0xde8d,	// (0x00048258) button_value_adjust_pane_cp3_vc

0xde95,	// (0x00048260) button_value_adjust_pane_cp5_vc

0xde9d,	// (0x00048268) form_field_data_pane_vc_ParamLimits

0xde9d,	// (0x00048268) form_field_data_pane_vc

0xdeb4,	// (0x0004827f) form_field_data_pane_vc_cp2

0xdebc,	// (0x00048287) form_field_data_wide_pane_vc_ParamLimits

0xdebc,	// (0x00048287) form_field_data_wide_pane_vc

0xded2,	// (0x0004829d) form_field_data_wide_pane_vc_cp2

0xdeda,	// (0x000482a5) form_field_popup_pane_vc_ParamLimits

0xdeda,	// (0x000482a5) form_field_popup_pane_vc

0xdef1,	// (0x000482bc) form_field_popup_wide_pane_vc_ParamLimits

0xdef1,	// (0x000482bc) form_field_popup_wide_pane_vc

0xdf07,	// (0x000482d2) form_field_slider_pane_vc_ParamLimits

0xdf07,	// (0x000482d2) form_field_slider_pane_vc

0xdf1a,	// (0x000482e5) form_field_slider_wide_pane_vc_ParamLimits

0xdf1a,	// (0x000482e5) form_field_slider_wide_pane_vc

0x96ea,	// (0x00043ab5) grid_touch_1_pane_ParamLimits

0x96ea,	// (0x00043ab5) grid_touch_1_pane

0x96fe,	// (0x00043ac9) grid_touch_2_pane_ParamLimits

0x96fe,	// (0x00043ac9) grid_touch_2_pane

0xdf2d,	// (0x000482f8) touch_pane_g1_ParamLimits

0xdf2d,	// (0x000482f8) touch_pane_g1

0xdf3b,	// (0x00048306) cell_app_pane_cp_wide_ParamLimits

0xdf3b,	// (0x00048306) cell_app_pane_cp_wide

0xdf4b,	// (0x00048316) grid_popup_fast_wide_pane_ParamLimits

0xdf4b,	// (0x00048316) grid_popup_fast_wide_pane

0xdf5f,	// (0x0004832a) scroll_pane_cp19_ParamLimits

0xdf5f,	// (0x0004832a) scroll_pane_cp19

0xad53,	// (0x0004511e) bg_popup_window_pane_cp20

0xdf73,	// (0x0004833e) listscroll_popup_fast_wide_pane

0xd29e,	// (0x00047669) grid_indicator_nsta_pane

0xdf7b,	// (0x00048346) clock_nsta_pane_g1

0xdf84,	// (0x0004834f) clock_nsta_pane_t1

0x9728,	// (0x00043af3) cell_indicator_nsta_pane_ParamLimits

0x9728,	// (0x00043af3) cell_indicator_nsta_pane

0xdf2d,	// (0x000482f8) cell_indicator_nsta_pane_g1

0x973f,	// (0x00043b0a) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x00049e6e) cell_indicator_nsta_pane_g

0xdfa0,	// (0x0004836b) clock_nsta_pane_cp

0xdfa8,	// (0x00048373) indicator_nsta_pane_cp

0xdfb1,	// (0x0004837c) nsta_clock_indic_pane_g1

0xadf3,	// (0x000451be) grid_indicator_pane

0xb879,	// (0x00045c44) scroll_pane_cp29

0x4bfb,	// (0x0003efc6) indicator_nsta_pane_cp2_ParamLimits

0x4bfb,	// (0x0003efc6) indicator_nsta_pane_cp2

0xadb7,	// (0x00045182) main_apps_wheel_pane

0xc84e,	// (0x00046c19) form_midp_field_text_pane_ParamLimits

0xc97b,	// (0x00046d46) scroll_bar_cp050_ParamLimits

0xe01a,	// (0x000483e5) cell_indicator_pane_ParamLimits

0xe01a,	// (0x000483e5) cell_indicator_pane

0xe030,	// (0x000483fb) cell_indicator_pane_g1

0x974c,	// (0x00043b17) grid_wheel_folder_pane_ParamLimits

0x974c,	// (0x00043b17) grid_wheel_folder_pane

0x975a,	// (0x00043b25) list_wheel_apps_pane_ParamLimits

0x975a,	// (0x00043b25) list_wheel_apps_pane

0x9766,	// (0x00043b31) main_apps_wheel_pane_g1_ParamLimits

0x9766,	// (0x00043b31) main_apps_wheel_pane_g1

0x9772,	// (0x00043b3d) main_apps_wheel_pane_g2_ParamLimits

0x9772,	// (0x00043b3d) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x00049e8a) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x00049e8a) main_apps_wheel_pane_g

0x977e,	// (0x00043b49) main_apps_wheel_pane_t1_ParamLimits

0x977e,	// (0x00043b49) main_apps_wheel_pane_t1

0x9790,	// (0x00043b5b) list_wheel_apps_pane_g1

0x9798,	// (0x00043b63) list_wheel_apps_pane_g2

0x97a0,	// (0x00043b6b) list_wheel_apps_pane_g3

0x97a8,	// (0x00043b73) list_wheel_apps_pane_g4

0x97b0,	// (0x00043b7b) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x00049e8f) list_wheel_apps_pane_g

0xadb7,	// (0x00045182) navi_icon_text_pane

0x8bc1,	// (0x00042f8c) aid_fill_nsta

0xe03a,	// (0x00048405) navi_icon_text_pane_g1

0xe046,	// (0x00048411) navi_icon_text_pane_t1

0xbaf3,	// (0x00045ebe) list_set_graphic_pane_t1_ParamLimits

0xbaf3,	// (0x00045ebe) list_set_graphic_pane_t1

0xd061,	// (0x0004742c) popup_midp_note_alarm_window_t6_ParamLimits

0xd061,	// (0x0004742c) popup_midp_note_alarm_window_t6

0xd073,	// (0x0004743e) popup_midp_note_alarm_window_t7_ParamLimits

0xd073,	// (0x0004743e) popup_midp_note_alarm_window_t7

0xd085,	// (0x00047450) popup_midp_note_alarm_window_t8_ParamLimits

0xd085,	// (0x00047450) popup_midp_note_alarm_window_t8

0xd097,	// (0x00047462) popup_midp_note_alarm_window_t9_ParamLimits

0xd097,	// (0x00047462) popup_midp_note_alarm_window_t9

0xd0a9,	// (0x00047474) popup_midp_note_alarm_window_t10_ParamLimits

0xd0a9,	// (0x00047474) popup_midp_note_alarm_window_t10

0xd0bb,	// (0x00047486) popup_midp_note_alarm_window_t11_ParamLimits

0xd0bb,	// (0x00047486) popup_midp_note_alarm_window_t11

0xd0cd,	// (0x00047498) scroll_pane_cp17_ParamLimits

0xd0cd,	// (0x00047498) scroll_pane_cp17

0x54de,	// (0x0003f8a9) volume_small_pane_cp_g1

0x5816,	// (0x0003fbe1) volume_small_pane_cp_g2

0x581f,	// (0x0003fbea) volume_small_pane_cp_g3

0x5828,	// (0x0003fbf3) volume_small_pane_cp_g4

0x550b,	// (0x0003f8d6) volume_small_pane_cp_g5

0x5831,	// (0x0003fbfc) volume_small_pane_cp_g6

0x583a,	// (0x0003fc05) volume_small_pane_cp_g7

0x5843,	// (0x0003fc0e) volume_small_pane_cp_g8

0x584c,	// (0x0003fc17) volume_small_pane_cp_g9

0x5855,	// (0x0003fc20) volume_small_pane_cp_g10

0xc293,	// (0x0004665e) midp_ticker_pane_g1_ParamLimits

0xc29f,	// (0x0004666a) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x00049b28) midp_ticker_pane_g_ParamLimits

0xc2ab,	// (0x00046676) midp_ticker_pane_t1_ParamLimits

0x8bd7,	// (0x00042fa2) aid_fill_nsta_2

0xc967,	// (0x00046d32) list_form2_midp_pane

0xd772,	// (0x00047b3d) midp_editing_number_pane_ParamLimits

0xd77e,	// (0x00047b49) midp_ticker_pane_ParamLimits

0xe058,	// (0x00048423) form2_midp_field_pane

0xe060,	// (0x0004842b) scroll_pane_cp51

0xe080,	// (0x0004844b) form2_midp_button_pane_ParamLimits

0xe080,	// (0x0004844b) form2_midp_button_pane

0xe092,	// (0x0004845d) form2_midp_content_pane_ParamLimits

0xe092,	// (0x0004845d) form2_midp_content_pane

0xe0ac,	// (0x00048477) form2_midp_field_choice_group_pane

0xe0b4,	// (0x0004847f) form2_midp_field_pane_g1

0xe0bc,	// (0x00048487) form2_midp_field_pane_g2

0xe0c4,	// (0x0004848f) form2_midp_field_pane_g3

0xe0cc,	// (0x00048497) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x00049eb4) form2_midp_field_pane_g

0xe0d4,	// (0x0004849f) form2_midp_gauge_slider_pane

0xe0dc,	// (0x000484a7) form2_midp_gauge_wait_pane

0xe0e4,	// (0x000484af) form2_midp_image_pane_ParamLimits

0xe0e4,	// (0x000484af) form2_midp_image_pane

0xe0ff,	// (0x000484ca) form2_midp_label_pane_ParamLimits

0xe0ff,	// (0x000484ca) form2_midp_label_pane

0x97e5,	// (0x00043bb0) form2_midp_label_pane_cp_ParamLimits

0x97e5,	// (0x00043bb0) form2_midp_label_pane_cp

0xe118,	// (0x000484e3) form2_midp_string_pane_ParamLimits

0xe118,	// (0x000484e3) form2_midp_string_pane

0xbfb5,	// (0x00046380) form2_midp_text_pane_ParamLimits

0xbfb5,	// (0x00046380) form2_midp_text_pane

0xe12a,	// (0x000484f5) form2_midp_time_pane

0xe13a,	// (0x00048505) input_focus_pane_cp51_ParamLimits

0xe13a,	// (0x00048505) input_focus_pane_cp51

0xe152,	// (0x0004851d) form2_midp_label_pane_t1_ParamLimits

0xe152,	// (0x0004851d) form2_midp_label_pane_t1

0xbfce,	// (0x00046399) form2_mdip_text_pane_t1_ParamLimits

0xbfce,	// (0x00046399) form2_mdip_text_pane_t1

0xbfe7,	// (0x000463b2) form2_midp_time_pane_t1

0xe19a,	// (0x00048565) form2_midp_gauge_slider_pane_t1

0x9804,	// (0x00043bcf) form2_midp_gauge_slider_pane_t2

0x9816,	// (0x00043be1) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x00049ebd) form2_midp_gauge_slider_pane_t

0xe1ac,	// (0x00048577) form2_midp_slider_pane

0xe1b8,	// (0x00048583) form2_midp_gauge_wait_pane_t1

0xe1c6,	// (0x00048591) form2_midp_wait_pane_ParamLimits

0xe1c6,	// (0x00048591) form2_midp_wait_pane

0xc6ed,	// (0x00046ab8) list_single_2graphic_pane_cp4_ParamLimits

0xc6ed,	// (0x00046ab8) list_single_2graphic_pane_cp4

0xe1f1,	// (0x000485bc) list_single_midp_graphic_pane_cp_ParamLimits

0xe1f1,	// (0x000485bc) list_single_midp_graphic_pane_cp

0xad53,	// (0x0004511e) list_highlight_pane_cp20

0xe20f,	// (0x000485da) list_single_2graphic_pane_g1_cp4

0xd7eb,	// (0x00047bb6) list_single_2graphic_pane_g2_cp4

0xe217,	// (0x000485e2) list_single_2graphic_pane_t1_cp4

0xadb7,	// (0x00045182) list_highlight_pane_cp21

0xe226,	// (0x000485f1) list_single_midp_graphic_pane_g4_cp

0xe235,	// (0x00048600) list_single_midp_graphic_pane_t1_cp

0xe24a,	// (0x00048615) form2_mdip_string_pane_t1_ParamLimits

0xe24a,	// (0x00048615) form2_mdip_string_pane_t1

0xad53,	// (0x0004511e) bg_wml_button_pane_cp2

0xacd1,	// (0x0004509c) form2_midp_image_pane_g1

0xb377,	// (0x00045742) list_double_large_graphic_pane_g5_ParamLimits

0xb377,	// (0x00045742) list_double_large_graphic_pane_g5

0x838c,	// (0x00042757) midp_form_pane_ParamLimits

0xadb7,	// (0x00045182) main_apps_wheel_pane_ParamLimits

0x8963,	// (0x00042d2e) popup_preview_window_ParamLimits

0x8963,	// (0x00042d2e) popup_preview_window

0x5362,	// (0x0003f72d) popup_touch_info_window_ParamLimits

0x5362,	// (0x0003f72d) popup_touch_info_window

0x5380,	// (0x0003f74b) popup_touch_menu_window_ParamLimits

0x5380,	// (0x0003f74b) popup_touch_menu_window

0xacc7,	// (0x00045092) bg_popup_sub_pane_cp6

0xe2b4,	// (0x0004867f) list_touch_menu_pane

0xe2bc,	// (0x00048687) list_single_touch_menu_pane_ParamLimits

0xe2bc,	// (0x00048687) list_single_touch_menu_pane

0xe2d3,	// (0x0004869e) list_single_touch_menu_pane_t1

0xadb7,	// (0x00045182) bg_popup_sub_pane_cp7_ParamLimits

0xadb7,	// (0x00045182) bg_popup_sub_pane_cp7

0xe2e1,	// (0x000486ac) heading_sub_pane

0xe2e9,	// (0x000486b4) list_touch_info_pane_ParamLimits

0xe2e9,	// (0x000486b4) list_touch_info_pane

0xe2f8,	// (0x000486c3) list_single_touch_info_pane_ParamLimits

0xe2f8,	// (0x000486c3) list_single_touch_info_pane

0xe309,	// (0x000486d4) list_single_touch_info_pane_t1

0xe317,	// (0x000486e2) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x00049ecb) list_single_touch_info_pane_t

0xc269,	// (0x00046634) bg_popup_heading_pane_cp

0xe325,	// (0x000486f0) heading_sub_pane_t1

0xc669,	// (0x00046a34) bg_popup_preview_window_pane_cp_ParamLimits

0xc669,	// (0x00046a34) bg_popup_preview_window_pane_cp

0xe2e1,	// (0x000486ac) heading_preview_pane

0xe2e9,	// (0x000486b4) list_preview_pane_ParamLimits

0xe2e9,	// (0x000486b4) list_preview_pane

0xe333,	// (0x000486fe) popup_preview_window_g1

0xe2f8,	// (0x000486c3) list_single_preview_pane_ParamLimits

0xe2f8,	// (0x000486c3) list_single_preview_pane

0xe33b,	// (0x00048706) list_single_preview_pane_g1

0xe343,	// (0x0004870e) list_single_preview_pane_t1

0xe309,	// (0x000486d4) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x00049ed0) list_single_preview_pane_t

0xe351,	// (0x0004871c) bg_popup_heading_pane_cp2_ParamLimits

0xe351,	// (0x0004871c) bg_popup_heading_pane_cp2

0xe367,	// (0x00048732) heading_preview_pane_g1

0xe36f,	// (0x0004873a) heading_preview_pane_t1_ParamLimits

0xe36f,	// (0x0004873a) heading_preview_pane_t1

0xae0a,	// (0x000451d5) soft_indicator_pane_t1_ParamLimits

0xb2d4,	// (0x0004569f) scroll_pane_ParamLimits

0xb775,	// (0x00045b40) scroll_sc2_left_pane

0xb77e,	// (0x00045b49) scroll_sc2_right_pane

0xb79d,	// (0x00045b68) scroll_bg_pane_g1_ParamLimits

0xb7b2,	// (0x00045b7d) scroll_bg_pane_g2_ParamLimits

0xb7ca,	// (0x00045b95) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x00049ab3) scroll_bg_pane_g_ParamLimits

0xb79d,	// (0x00045b68) scroll_handle_pane_g1_ParamLimits

0xb7ec,	// (0x00045bb7) scroll_handle_pane_g2_ParamLimits

0xb7ca,	// (0x00045b95) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x00049aba) scroll_handle_pane_g_ParamLimits

0x4f2f,	// (0x0003f2fa) popup_choice_list_window_ParamLimits

0x4f2f,	// (0x0003f2fa) popup_choice_list_window

0xc54b,	// (0x00046916) choice_list_pane

0xc5c1,	// (0x0004698c) cell_toolbar_pane_t1

0xc5e9,	// (0x000469b4) toolbar_button_pane_ParamLimits

0xd4e7,	// (0x000478b2) ai_gene_pane_1_t2_ParamLimits

0xd4e7,	// (0x000478b2) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x00049cd6) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x00049cd6) ai_gene_pane_1_t

0xe38c,	// (0x00048757) scroll_sc2_left_pane_g1

0xe38c,	// (0x00048757) scroll_sc2_right_pane_g1

0xb55a,	// (0x00045925) bg_popup_sub_pane_cp10

0xe396,	// (0x00048761) list_choice_list_pane

0xe3ad,	// (0x00048778) list_single_choice_list_pane_ParamLimits

0xe3ad,	// (0x00048778) list_single_choice_list_pane

0xe3bf,	// (0x0004878a) list_single_choice_list_pane_g1

0xb545,	// (0x00045910) list_single_choice_list_pane_t1_ParamLimits

0xb545,	// (0x00045910) list_single_choice_list_pane_t1

0xe3c7,	// (0x00048792) choice_list_pane_g1

0xe3cf,	// (0x0004879a) choice_list_pane_t1

0xacc7,	// (0x00045092) input_focus_pane_cp11

0xb6dc,	// (0x00045aa7) title_pane_stacon_g2_ParamLimits

0xb6dc,	// (0x00045aa7) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x00049a99) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x00049a99) title_pane_stacon_g

0xc269,	// (0x00046634) cursor_press_pane

0x86ca,	// (0x00042a95) popup_fep_hwr_window_ParamLimits

0x86ca,	// (0x00042a95) popup_fep_hwr_window

0x5027,	// (0x0003f3f2) popup_fep_vkb_window_ParamLimits

0x5027,	// (0x0003f3f2) popup_fep_vkb_window

0xe3dd,	// (0x000487a8) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x00049ef9) fep_vkb_side_pane_g_ParamLimits

0x5893,	// (0x0003fc5e) fep_hwr_candidate_pane_ParamLimits

0x5893,	// (0x0003fc5e) fep_hwr_candidate_pane

0x58bb,	// (0x0003fc86) fep_hwr_side_pane_ParamLimits

0x58bb,	// (0x0003fc86) fep_hwr_side_pane

0x58db,	// (0x0003fca6) fep_hwr_top_pane_ParamLimits

0x58db,	// (0x0003fca6) fep_hwr_top_pane

0x58f3,	// (0x0003fcbe) fep_hwr_write_pane_ParamLimits

0x58f3,	// (0x0003fcbe) fep_hwr_write_pane

0xfb2e,	// (0x00049ef9) fep_vkb_side_pane_g

0xe3e5,	// (0x000487b0) fep_hwr_top_pane_g1

0xe3f7,	// (0x000487c2) fep_hwr_top_pane_g2

0x592d,	// (0x0003fcf8) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x00049ed5) fep_hwr_top_pane_g

0x5942,	// (0x0003fd0d) fep_hwr_top_text_pane

0xb8e6,	// (0x00045cb1) fep_hwr_top_text_pane_g1

0xe42d,	// (0x000487f8) fep_hwr_top_text_pane_t1

0x5a30,	// (0x0003fdfb) fep_hwr_candidate_pane_g1

0xe5f6,	// (0x000489c1) fep_vkb_keypad_pane_g3_ParamLimits

0xe5f6,	// (0x000489c1) fep_vkb_keypad_pane_g3

0xe618,	// (0x000489e3) fep_vkb_keypad_pane_g4_ParamLimits

0xe618,	// (0x000489e3) fep_vkb_keypad_pane_g4

0xe687,	// (0x00048a52) fep_vkb_bottom_pane_g2_ParamLimits

0xe687,	// (0x00048a52) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x00049f00) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x00049f00) fep_vkb_bottom_pane_g

0xe38c,	// (0x00048757) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x00049f0a) cell_vkb_side_pane_g

0xe6cb,	// (0x00048a96) cell_vkb_side_pane_t1

0xe6d9,	// (0x00048aa4) cell_vkb_side_pane_t1_copy1

0xe38c,	// (0x00048757) bg_fep_vkb_candidate_pane_g2

0xe7a7,	// (0x00048b72) cell_vkb_candidate_pane_ParamLimits

0xe43b,	// (0x00048806) aid_size_cell_vkb_ParamLimits

0xe43b,	// (0x00048806) aid_size_cell_vkb

0xe7a7,	// (0x00048b72) cell_vkb_candidate_pane

0x5a57,	// (0x0003fe22) bg_popup_fep_shadow_pane_g1

0xe4a5,	// (0x00048870) fep_vkb_bottom_pane_ParamLimits

0xe4a5,	// (0x00048870) fep_vkb_bottom_pane

0xe4e2,	// (0x000488ad) fep_vkb_candidate_pane_ParamLimits

0xe4e2,	// (0x000488ad) fep_vkb_candidate_pane

0xe4fe,	// (0x000488c9) fep_vkb_keypad_pane_ParamLimits

0xe4fe,	// (0x000488c9) fep_vkb_keypad_pane

0xe532,	// (0x000488fd) fep_vkb_side_pane_ParamLimits

0xe532,	// (0x000488fd) fep_vkb_side_pane

0xe55e,	// (0x00048929) fep_vkb_top_pane_ParamLimits

0xe55e,	// (0x00048929) fep_vkb_top_pane

0xe58a,	// (0x00048955) fep_vkb_top_pane_g1_ParamLimits

0xe58a,	// (0x00048955) fep_vkb_top_pane_g1

0xe599,	// (0x00048964) fep_vkb_top_pane_g2_ParamLimits

0xe599,	// (0x00048964) fep_vkb_top_pane_g2

0xe5a8,	// (0x00048973) fep_vkb_top_pane_g3_ParamLimits

0xe5a8,	// (0x00048973) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x00049ef0) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x00049ef0) fep_vkb_top_pane_g

0xe5c6,	// (0x00048991) fep_vkb_top_text_pane_ParamLimits

0xe5c6,	// (0x00048991) fep_vkb_top_text_pane

0x9885,	// (0x00043c50) fep_vkb_side_pane_g1_ParamLimits

0x9885,	// (0x00043c50) fep_vkb_side_pane_g1

0xe5e5,	// (0x000489b0) grid_vkb_side_pane_ParamLimits

0xe5e5,	// (0x000489b0) grid_vkb_side_pane

0x5a5f,	// (0x0003fe2a) bg_popup_fep_shadow_pane_g2

0x5a68,	// (0x0003fe33) bg_popup_fep_shadow_pane_g3

0x5a70,	// (0x0003fe3b) bg_popup_fep_shadow_pane_g4

0x5a79,	// (0x0003fe44) bg_popup_fep_shadow_pane_g5

0x5a81,	// (0x0003fe4c) bg_popup_fep_shadow_pane_g6

0x5a89,	// (0x0003fe54) bg_popup_fep_shadow_pane_g7

0xb447,	// (0x00045812) bg_popup_fep_shadow_pane_g8

0xe636,	// (0x00048a01) grid_vkb_keypad_number_pane_ParamLimits

0xe636,	// (0x00048a01) grid_vkb_keypad_number_pane

0xe646,	// (0x00048a11) grid_vkb_keypad_pane_ParamLimits

0xe646,	// (0x00048a11) grid_vkb_keypad_pane

0xe66c,	// (0x00048a37) fep_vkb_bottom_pane_g1_ParamLimits

0xe66c,	// (0x00048a37) fep_vkb_bottom_pane_g1

0xe695,	// (0x00048a60) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xe695,	// (0x00048a60) grid_vkb_keypad_bottom_left_pane

0xe6aa,	// (0x00048a75) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xe6aa,	// (0x00048a75) grid_vkb_keypad_bottom_right_pane

0xe6bf,	// (0x00048a8a) fep_vkb_top_text_pane_g1

0x98cc,	// (0x00043c97) fep_vkb_top_text_pane_t1

0x98de,	// (0x00043ca9) cell_vkb_side_pane_ParamLimits

0x98de,	// (0x00043ca9) cell_vkb_side_pane

0xe38c,	// (0x00048757) cell_vkb_side_pane_g1

0xe6e7,	// (0x00048ab2) cell_vkb_keypad_pane_ParamLimits

0xe6e7,	// (0x00048ab2) cell_vkb_keypad_pane

0xe754,	// (0x00048b1f) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x00049f1d) bg_popup_fep_shadow_pane_g

0x5a99,	// (0x0003fe64) cell_hwr_side_pane_g1

0x5a99,	// (0x0003fe64) cell_hwr_side_pane_g2

0xe75e,	// (0x00048b29) cell_vkb_keypad_pane_t1

0x98f4,	// (0x00043cbf) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x98f4,	// (0x00043cbf) cell_vkb_keypad_bottom_left_pane

0x9909,	// (0x00043cd4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x9909,	// (0x00043cd4) cell_vkb_keypad_bottom_right_pane

0xe38c,	// (0x00048757) cell_vkb_keypad_bottom_left_pane_g1

0xe38c,	// (0x00048757) cell_vkb_keypad_bottom_right_pane_g1

0xe76c,	// (0x00048b37) cell_vkb_keypad_number_pane_ParamLimits

0xe76c,	// (0x00048b37) cell_vkb_keypad_number_pane

0xe78b,	// (0x00048b56) cell_vkb_keypad_number_pane_g1

0xe795,	// (0x00048b60) cell_vkb_keypad_number_pane_g2

0xe79e,	// (0x00048b69) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x00049f0f) cell_vkb_keypad_number_pane_g

0xe75e,	// (0x00048b29) cell_vkb_keypad_number_pane_t1

0xe7c0,	// (0x00048b8b) fep_vkb_candidate_pane_g1

0x0001,

0xfb65,	// (0x00049f30) cell_hwr_side_pane_g

0xe7d9,	// (0x00048ba4) cell_hwr_side_pane_t1

0x5aa3,	// (0x0003fe6e) cell_hwr_side_pane_t1_copy1

0x5ab1,	// (0x0003fe7c) cell_hwr_candidate_pane_g1

0x5ae0,	// (0x0003feab) cell_hwr_candidate_pane_t1

0xe38c,	// (0x00048757) cell_vkb_candidate_pane_g2

0xe81d,	// (0x00048be8) cell_vkb_candidate_pane_t1

0x585e,	// (0x0003fc29) bg_popup_fep_shadow_pane_ParamLimits

0x585e,	// (0x0003fc29) bg_popup_fep_shadow_pane

0x590d,	// (0x0003fcd8) bg_fep_hwr_top_pane_g4

0xe409,	// (0x000487d4) bg_hwr_side_pane_g1_ParamLimits

0xe409,	// (0x000487d4) bg_hwr_side_pane_g1

0x9840,	// (0x00043c0b) cell_hwr_side_pane_ParamLimits

0x9840,	// (0x00043c0b) cell_hwr_side_pane

0x59b9,	// (0x0003fd84) fep_hwr_write_pane_g1_ParamLimits

0x59b9,	// (0x0003fd84) fep_hwr_write_pane_g1

0x59c6,	// (0x0003fd91) fep_hwr_write_pane_g2_ParamLimits

0x59c6,	// (0x0003fd91) fep_hwr_write_pane_g2

0x59d3,	// (0x0003fd9e) fep_hwr_write_pane_g3_ParamLimits

0x59d3,	// (0x0003fd9e) fep_hwr_write_pane_g3

0x9860,	// (0x00043c2b) fep_hwr_write_pane_g4_ParamLimits

0x9860,	// (0x00043c2b) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x00049edc) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x00049edc) fep_hwr_write_pane_g

0x590d,	// (0x0003fcd8) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x590d,	// (0x0003fcd8) bg_fep_hwr_candidate_pane_g2

0x59f6,	// (0x0003fdc1) cell_hwr_candidate_pane_ParamLimits

0x59f6,	// (0x0003fdc1) cell_hwr_candidate_pane

0x5a30,	// (0x0003fdfb) fep_hwr_candidate_pane_g1_ParamLimits

0xe469,	// (0x00048834) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xe469,	// (0x00048834) bg_popup_fep_shadow_pane_cp2

0xe5b8,	// (0x00048983) fep_vkb_top_pane_g4_ParamLimits

0xe5b8,	// (0x00048983) fep_vkb_top_pane_g4

0xe5d7,	// (0x000489a2) fep_vkb_side_pane_g2_ParamLimits

0xe5d7,	// (0x000489a2) fep_vkb_side_pane_g2

0x16cc,	// (0x0003ba97) list_setting_pane_t4_ParamLimits

0x16cc,	// (0x0003ba97) list_setting_pane_t4

0x1766,	// (0x0003bb31) list_setting_number_pane_t5_ParamLimits

0x1766,	// (0x0003bb31) list_setting_number_pane_t5

0x8297,	// (0x00042662) list_double_heading_pane_cp2_ParamLimits

0x8297,	// (0x00042662) list_double_heading_pane_cp2

0xbbed,	// (0x00045fb8) list_double_heading_pane_g1_cp2_ParamLimits

0xbbed,	// (0x00045fb8) list_double_heading_pane_g1_cp2

0xe82b,	// (0x00048bf6) list_double_heading_pane_g2_cp2_ParamLimits

0xe82b,	// (0x00048bf6) list_double_heading_pane_g2_cp2

0xe83f,	// (0x00048c0a) list_double_heading_pane_t1_cp2_ParamLimits

0xe83f,	// (0x00048c0a) list_double_heading_pane_t1_cp2

0xe855,	// (0x00048c20) list_double_heading_pane_t2_cp2_ParamLimits

0xe855,	// (0x00048c20) list_double_heading_pane_t2_cp2

0xacbf,	// (0x0004508a) aid_value_unit2

0x482b,	// (0x0003ebf6) popup_preview_fixed_window

0xaeea,	// (0x000452b5) bg_popup_preview_window_pane_cp02

0xe867,	// (0x00048c32) list_preview_fixed_pane

0xe8ad,	// (0x00048c78) list_empty_pane_fp_ParamLimits

0xe8ad,	// (0x00048c78) list_empty_pane_fp

0xe8ad,	// (0x00048c78) list_single_cale_day_pane_fp_ParamLimits

0xe8ad,	// (0x00048c78) list_single_cale_day_pane_fp

0xe8ad,	// (0x00048c78) list_single_graphic_heading_pane_fp_ParamLimits

0xe8ad,	// (0x00048c78) list_single_graphic_heading_pane_fp

0xe8ad,	// (0x00048c78) list_single_graphic_pane_fp_ParamLimits

0xe8ad,	// (0x00048c78) list_single_graphic_pane_fp

0xe8ad,	// (0x00048c78) list_single_heading_pane_fp_ParamLimits

0xe8ad,	// (0x00048c78) list_single_heading_pane_fp

0xe8ad,	// (0x00048c78) list_single_pane_fp_ParamLimits

0xe8ad,	// (0x00048c78) list_single_pane_fp

0xe8c1,	// (0x00048c8c) list_single_pane_fp_g1_ParamLimits

0xe8c1,	// (0x00048c8c) list_single_pane_fp_g1

0xb309,	// (0x000456d4) list_single_pane_fp_g2_ParamLimits

0xb309,	// (0x000456d4) list_single_pane_fp_g2

0xbffa,	// (0x000463c5) list_single_pane_fp_g3_ParamLimits

0xbffa,	// (0x000463c5) list_single_pane_fp_g3

0xe8cd,	// (0x00048c98) list_single_pane_fp_g4_ParamLimits

0xe8cd,	// (0x00048c98) list_single_pane_fp_g4

0x0003,

0xfb78,	// (0x00049f43) list_single_pane_fp_g_ParamLimits

0xfb78,	// (0x00049f43) list_single_pane_fp_g

0xc00e,	// (0x000463d9) list_single_pane_fp_t1_ParamLimits

0xc00e,	// (0x000463d9) list_single_pane_fp_t1

0xc025,	// (0x000463f0) list_single_graphic_pane_fp_g1_ParamLimits

0xc025,	// (0x000463f0) list_single_graphic_pane_fp_g1

0xe8c1,	// (0x00048c8c) list_single_graphic_pane_fp_g2_ParamLimits

0xe8c1,	// (0x00048c8c) list_single_graphic_pane_fp_g2

0xb309,	// (0x000456d4) list_single_graphic_pane_fp_g3_ParamLimits

0xb309,	// (0x000456d4) list_single_graphic_pane_fp_g3

0xbffa,	// (0x000463c5) list_single_graphic_pane_fp_g4_ParamLimits

0xbffa,	// (0x000463c5) list_single_graphic_pane_fp_g4

0xe8cd,	// (0x00048c98) list_single_graphic_pane_fp_g5_ParamLimits

0xe8cd,	// (0x00048c98) list_single_graphic_pane_fp_g5

0x0004,

0xfb81,	// (0x00049f4c) list_single_graphic_pane_fp_g_ParamLimits

0xfb81,	// (0x00049f4c) list_single_graphic_pane_fp_g

0xc031,	// (0x000463fc) list_single_graphic_pane_fp_t1_ParamLimits

0xc031,	// (0x000463fc) list_single_graphic_pane_fp_t1

0xc025,	// (0x000463f0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc025,	// (0x000463f0) list_single_graphic_heading_pane_fp_g1

0xe8c1,	// (0x00048c8c) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xe8c1,	// (0x00048c8c) list_single_graphic_heading_pane_fp_g2

0xb309,	// (0x000456d4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xb309,	// (0x000456d4) list_single_graphic_heading_pane_fp_g3

0xbffa,	// (0x000463c5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbffa,	// (0x000463c5) list_single_graphic_heading_pane_fp_g4

0xe8cd,	// (0x00048c98) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xe8cd,	// (0x00048c98) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb81,	// (0x00049f4c) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x00049f4c) list_single_graphic_heading_pane_fp_g

0xc047,	// (0x00046412) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc047,	// (0x00046412) list_single_graphic_heading_pane_fp_t1

0xc05d,	// (0x00046428) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc05d,	// (0x00046428) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8c,	// (0x00049f57) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8c,	// (0x00049f57) list_single_graphic_heading_pane_fp_t

0xc06f,	// (0x0004643a) list_single_cale_day_pane_fp_g1_ParamLimits

0xc06f,	// (0x0004643a) list_single_cale_day_pane_fp_g1

0xe8d9,	// (0x00048ca4) list_single_cale_day_pane_fp_g2_ParamLimits

0xe8d9,	// (0x00048ca4) list_single_cale_day_pane_fp_g2

0xc0a7,	// (0x00046472) list_single_cale_day_pane_fp_g3_ParamLimits

0xc0a7,	// (0x00046472) list_single_cale_day_pane_fp_g3

0xc0cf,	// (0x0004649a) list_single_cale_day_pane_fp_g4_ParamLimits

0xc0cf,	// (0x0004649a) list_single_cale_day_pane_fp_g4

0xc0f3,	// (0x000464be) list_single_cale_day_pane_fp_g5_ParamLimits

0xc0f3,	// (0x000464be) list_single_cale_day_pane_fp_g5

0x0004,

0xfb91,	// (0x00049f5c) list_single_cale_day_pane_fp_g_ParamLimits

0xfb91,	// (0x00049f5c) list_single_cale_day_pane_fp_g

0xc117,	// (0x000464e2) list_single_cale_day_pane_fp_t1_ParamLimits

0xc117,	// (0x000464e2) list_single_cale_day_pane_fp_t1

0xc13d,	// (0x00046508) list_single_cale_day_pane_fp_t2_ParamLimits

0xc13d,	// (0x00046508) list_single_cale_day_pane_fp_t2

0xc156,	// (0x00046521) list_single_cale_day_pane_fp_t3_ParamLimits

0xc156,	// (0x00046521) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9c,	// (0x00049f67) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9c,	// (0x00049f67) list_single_cale_day_pane_fp_t

0xe8c1,	// (0x00048c8c) list_empty_pane_fp_g1_ParamLimits

0xe8c1,	// (0x00048c8c) list_empty_pane_fp_g1

0xc16f,	// (0x0004653a) list_empty_pane_fp_t1

0xc17d,	// (0x00046548) list_empty_pane_fp_t2

0x0001,

0xfba3,	// (0x00049f6e) list_empty_pane_fp_t

0xe8c1,	// (0x00048c8c) list_single_heading_pane_fp_g1_ParamLimits

0xe8c1,	// (0x00048c8c) list_single_heading_pane_fp_g1

0xb309,	// (0x000456d4) list_single_heading_pane_fp_g2_ParamLimits

0xb309,	// (0x000456d4) list_single_heading_pane_fp_g2

0xbffa,	// (0x000463c5) list_single_heading_pane_fp_g3_ParamLimits

0xbffa,	// (0x000463c5) list_single_heading_pane_fp_g3

0x0002,

0xfba8,	// (0x00049f73) list_single_heading_pane_fp_g_ParamLimits

0xfba8,	// (0x00049f73) list_single_heading_pane_fp_g

0xc18b,	// (0x00046556) list_single_heading_pane_fp_t1_ParamLimits

0xc18b,	// (0x00046556) list_single_heading_pane_fp_t1

0xc19d,	// (0x00046568) list_single_heading_pane_fp_t2_ParamLimits

0xc19d,	// (0x00046568) list_single_heading_pane_fp_t2

0x0001,

0xfbaf,	// (0x00049f7a) list_single_heading_pane_fp_t_ParamLimits

0xfbaf,	// (0x00049f7a) list_single_heading_pane_fp_t

0xb566,	// (0x00045931) aid_size_cell_fast

0xaecd,	// (0x00045298) soft_indicator_pane_cp1_t1

0xb5a3,	// (0x0004596e) cell_app_pane_cp2_ParamLimits

0xb5a3,	// (0x0004596e) cell_app_pane_cp2

0x5880,	// (0x0003fc4b) fep_hwr_candidate_drop_down_list_pane

0x5a4a,	// (0x0003fe15) fep_hwr_candidate_pane_g3_ParamLimits

0x5a4a,	// (0x0003fe15) fep_hwr_candidate_pane_g3

0x7019,	// (0x000413e4) fep_hwr_candidate_pane_g4_ParamLimits

0x7019,	// (0x000413e4) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x00049ee9) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x00049ee9) fep_hwr_candidate_pane_g

0xe4d1,	// (0x0004889c) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xe4d1,	// (0x0004889c) fep_vkb_candidate_drop_down_list_pane

0xe7c8,	// (0x00048b93) fep_vkb_candidate_pane_g3

0xe7d0,	// (0x00048b9b) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x00049f16) fep_vkb_candidate_pane_g

0x5ab1,	// (0x0003fe7c) cell_hwr_candidate_pane_g1_ParamLimits

0x5abf,	// (0x0003fe8a) cell_hwr_candidate_pane_g3_ParamLimits

0x5abf,	// (0x0003fe8a) cell_hwr_candidate_pane_g3

0x2bf0,	// (0x0003cfbb) cell_hwr_candidate_pane_g4_ParamLimits

0x2bf0,	// (0x0003cfbb) cell_hwr_candidate_pane_g4

0x0002,

0xfb6a,	// (0x00049f35) cell_hwr_candidate_pane_g_ParamLimits

0xfb6a,	// (0x00049f35) cell_hwr_candidate_pane_g

0xe7e7,	// (0x00048bb2) cell_vkb_candidate_pane_g3_ParamLimits

0xe7e7,	// (0x00048bb2) cell_vkb_candidate_pane_g3

0xe802,	// (0x00048bcd) cell_vkb_candidate_pane_g4_ParamLimits

0xe802,	// (0x00048bcd) cell_vkb_candidate_pane_g4

0xe8e5,	// (0x00048cb0) cell_app_pane_cp2_g1_ParamLimits

0xe8e5,	// (0x00048cb0) cell_app_pane_cp2_g1

0xe903,	// (0x00048cce) cell_app_pane_cp2_g2_ParamLimits

0xe903,	// (0x00048cce) cell_app_pane_cp2_g2

0x0001,

0xfbb4,	// (0x00049f7f) cell_app_pane_cp2_g_ParamLimits

0xfbb4,	// (0x00049f7f) cell_app_pane_cp2_g

0xe90f,	// (0x00048cda) cell_app_pane_cp2_t1_ParamLimits

0xe90f,	// (0x00048cda) cell_app_pane_cp2_t1

0xb3d4,	// (0x0004579f) grid_highlight_pane_cp1_ParamLimits

0xb3d4,	// (0x0004579f) grid_highlight_pane_cp1

0x5afd,	// (0x0003fec8) cell_hwr_candidate_pane_cp1_ParamLimits

0x5afd,	// (0x0003fec8) cell_hwr_candidate_pane_cp1

0x5ab1,	// (0x0003fe7c) fep_hwr_candidate_drop_down_list_pane_g1

0x5b1b,	// (0x0003fee6) fep_hwr_candidate_drop_down_list_pane_g2

0x5b28,	// (0x0003fef3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb9,	// (0x00049f84) fep_hwr_candidate_drop_down_list_pane_g

0x5b35,	// (0x0003ff00) fep_hwr_candidate_drop_down_list_scroll_pane

0x5b3e,	// (0x0003ff09) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5b3e,	// (0x0003ff09) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5b4b,	// (0x0003ff16) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5b4b,	// (0x0003ff16) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5b58,	// (0x0003ff23) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5b58,	// (0x0003ff23) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5b65,	// (0x0003ff30) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5b65,	// (0x0003ff30) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5b80,	// (0x0003ff4b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5b80,	// (0x0003ff4b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5b9b,	// (0x0003ff66) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5b9b,	// (0x0003ff66) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5bb6,	// (0x0003ff81) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5bb6,	// (0x0003ff81) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5bd1,	// (0x0003ff9c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5bd1,	// (0x0003ff9c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc0,	// (0x00049f8b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc0,	// (0x00049f8b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x9924,	// (0x00043cef) cell_vkb_candidate_pane_cp1_ParamLimits

0x9924,	// (0x00043cef) cell_vkb_candidate_pane_cp1

0xe5b8,	// (0x00048983) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xe5b8,	// (0x00048983) fep_vkb_candidate_drop_down_list_pane_g1

0xe921,	// (0x00048cec) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xe921,	// (0x00048cec) fep_vkb_candidate_drop_down_list_pane_g2

0xe92e,	// (0x00048cf9) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xe92e,	// (0x00048cf9) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd1,	// (0x00049f9c) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd1,	// (0x00049f9c) fep_vkb_candidate_drop_down_list_pane_g

0xe93b,	// (0x00048d06) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xe93b,	// (0x00048d06) fep_vkb_candidate_drop_down_list_scroll_pane

0xe948,	// (0x00048d13) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe948,	// (0x00048d13) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xe955,	// (0x00048d20) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe955,	// (0x00048d20) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xe961,	// (0x00048d2c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe961,	// (0x00048d2c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xe96d,	// (0x00048d38) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xe96d,	// (0x00048d38) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xe98e,	// (0x00048d59) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xe98e,	// (0x00048d59) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xe9af,	// (0x00048d7a) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe9af,	// (0x00048d7a) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xe9d0,	// (0x00048d9b) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe9d0,	// (0x00048d9b) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xe9f1,	// (0x00048dbc) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe9f1,	// (0x00048dbc) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd8,	// (0x00049fa3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd8,	// (0x00049fa3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7bb7,	// (0x00041f82) title_pane_g1_ParamLimits

0x7bce,	// (0x00041f99) title_pane_g2_ParamLimits

0xf54e,	// (0x00049919) title_pane_g_ParamLimits

0xb8d6,	// (0x00045ca1) aid_call2_pane

0xb8de,	// (0x00045ca9) aid_call_pane

0xb8e6,	// (0x00045cb1) popup_clock_analogue_window_g1

0xb8e6,	// (0x00045cb1) popup_clock_analogue_window_g2

0x4b05,	// (0x0003eed0) popup_clock_analogue_window_g3

0x4b0e,	// (0x0003eed9) popup_clock_analogue_window_g4

0xacd1,	// (0x0004509c) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x00049ac8) popup_clock_analogue_window_g

0x4b16,	// (0x0003eee1) popup_clock_analogue_window_t1

0x4b24,	// (0x0003eeef) clock_digital_number_pane_ParamLimits

0x4b24,	// (0x0003eeef) clock_digital_number_pane

0x4b30,	// (0x0003eefb) clock_digital_number_pane_cp02_ParamLimits

0x4b30,	// (0x0003eefb) clock_digital_number_pane_cp02

0x4b3c,	// (0x0003ef07) clock_digital_number_pane_cp03_ParamLimits

0x4b3c,	// (0x0003ef07) clock_digital_number_pane_cp03

0x4b48,	// (0x0003ef13) clock_digital_number_pane_cp04_ParamLimits

0x4b48,	// (0x0003ef13) clock_digital_number_pane_cp04

0x4b54,	// (0x0003ef1f) clock_digital_separator_pane_ParamLimits

0x4b54,	// (0x0003ef1f) clock_digital_separator_pane

0x4b60,	// (0x0003ef2b) popup_clock_digital_window_t1_ParamLimits

0x4b60,	// (0x0003ef2b) popup_clock_digital_window_t1

0xacd1,	// (0x0004509c) clock_digital_number_pane_g1

0xacd1,	// (0x0004509c) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x00049ad3) clock_digital_number_pane_g

0xacd1,	// (0x0004509c) clock_digital_separator_pane_g1

0xacd1,	// (0x0004509c) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x00049ad3) clock_digital_separator_pane_g

0x8bc1,	// (0x00042f8c) aid_fill_nsta_ParamLimits

0x8cd8,	// (0x000430a3) indicator_nsta_pane_ParamLimits

0xc4f4,	// (0x000468bf) popup_clock_analogue_window

0xc4f4,	// (0x000468bf) popup_clock_digital_window

0xd29e,	// (0x00047669) grid_indicator_nsta_pane_ParamLimits

0xdf92,	// (0x0004835d) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x00049e69) clock_nsta_pane_t

0x4ac9,	// (0x0003ee94) aid_size_max_handle

0x81fb,	// (0x000425c6) aid_size_min_handle

0xc269,	// (0x00046634) editor_scroll_pane

0xea0c,	// (0x00048dd7) ex_editor_pane

0xb523,	// (0x000458ee) scroll_pane_cp13

0xb301,	// (0x000456cc) scroll_pane_cp14

0xb915,	// (0x00045ce0) scroll_pane_cp36

0x82a3,	// (0x0004266e) list_single_graphic_hl_pane_cp2_ParamLimits

0x82a3,	// (0x0004266e) list_single_graphic_hl_pane_cp2

0x9521,	// (0x000438ec) list_single_graphic_hl_pane_ParamLimits

0x9521,	// (0x000438ec) list_single_graphic_hl_pane

0xc1b3,	// (0x0004657e) aid_size_min_hl_cp1

0xea14,	// (0x00048ddf) list_highlight_pane_cp34_ParamLimits

0xea14,	// (0x00048ddf) list_highlight_pane_cp34

0xea25,	// (0x00048df0) list_single_graphic_hl_pane_g1_ParamLimits

0xea25,	// (0x00048df0) list_single_graphic_hl_pane_g1

0x19e3,	// (0x0003bdae) list_single_graphic_hl_pane_g2_ParamLimits

0x19e3,	// (0x0003bdae) list_single_graphic_hl_pane_g2

0x19e3,	// (0x0003bdae) list_single_graphic_hl_pane_g3_ParamLimits

0x19e3,	// (0x0003bdae) list_single_graphic_hl_pane_g3

0xb3ee,	// (0x000457b9) list_single_graphic_hl_pane_g4_ParamLimits

0xb3ee,	// (0x000457b9) list_single_graphic_hl_pane_g4

0xb3fa,	// (0x000457c5) list_single_graphic_hl_pane_g5_ParamLimits

0xb3fa,	// (0x000457c5) list_single_graphic_hl_pane_g5

0x0004,

0xfbe9,	// (0x00049fb4) list_single_graphic_hl_pane_g_ParamLimits

0xfbe9,	// (0x00049fb4) list_single_graphic_hl_pane_g

0x19ef,	// (0x0003bdba) list_single_graphic_hl_pane_t1_ParamLimits

0x19ef,	// (0x0003bdba) list_single_graphic_hl_pane_t1

0xea32,	// (0x00048dfd) aid_size_min_hl_cp2

0xea3b,	// (0x00048e06) list_highlight_pane_cp34_cp2_ParamLimits

0xea3b,	// (0x00048e06) list_highlight_pane_cp34_cp2

0xea25,	// (0x00048df0) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xea25,	// (0x00048df0) list_single_graphic_hl_pane_g1_cp2

0xea48,	// (0x00048e13) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xea48,	// (0x00048e13) list_single_graphic_hl_pane_g2_cp2

0xea54,	// (0x00048e1f) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xea54,	// (0x00048e1f) list_single_graphic_hl_pane_g3_cp2

0xbbed,	// (0x00045fb8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbbed,	// (0x00045fb8) list_single_graphic_hl_pane_g4_cp2

0xe82b,	// (0x00048bf6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xe82b,	// (0x00048bf6) list_single_graphic_hl_pane_g5_cp2

0x84d4,	// (0x0004289f) control_pane_g4_ParamLimits

0x84d4,	// (0x0004289f) control_pane_g4

0xb55a,	// (0x00045925) bg_popup_sub_pane_cp10_ParamLimits

0xe396,	// (0x00048761) list_choice_list_pane_ParamLimits

0xe3a5,	// (0x00048770) scroll_pane_cp23

0xaeea,	// (0x000452b5) bg_popup_preview_window_pane_cp02_ParamLimits

0xe867,	// (0x00048c32) list_preview_fixed_pane_ParamLimits

0xe87d,	// (0x00048c48) list_preview_fixed_pane_cp_ParamLimits

0xe87d,	// (0x00048c48) list_preview_fixed_pane_cp

0xe889,	// (0x00048c54) popup_preview_fixed_window_g1_ParamLimits

0xe889,	// (0x00048c54) popup_preview_fixed_window_g1

0xe895,	// (0x00048c60) popup_preview_fixed_window_g2_ParamLimits

0xe895,	// (0x00048c60) popup_preview_fixed_window_g2

0x0002,

0xfb71,	// (0x00049f3c) popup_preview_fixed_window_g_ParamLimits

0xfb71,	// (0x00049f3c) popup_preview_fixed_window_g

0x4a59,	// (0x0003ee24) aid_navi_side_left_pane_ParamLimits

0x4a69,	// (0x0003ee34) aid_navi_side_right_pane_ParamLimits

0x4a78,	// (0x0003ee43) navi_icon_pane_stacon_ParamLimits

0x4a88,	// (0x0003ee53) navi_navi_pane_stacon_ParamLimits

0x4a78,	// (0x0003ee43) navi_text_pane_stacon_ParamLimits

0x470c,	// (0x0003ead7) main_text_info_pane

0xea76,	// (0x00048e41) listscroll_text_info_pane

0xea7e,	// (0x00048e49) list_text_info_pane_ParamLimits

0xea7e,	// (0x00048e49) list_text_info_pane

0xea8d,	// (0x00048e58) scroll_pane_cp24_ParamLimits

0xea8d,	// (0x00048e58) scroll_pane_cp24

0x9944,	// (0x00043d0f) list_text_info_pane_t1_ParamLimits

0x9944,	// (0x00043d0f) list_text_info_pane_t1

0x864a,	// (0x00042a15) popup_fast_swap2_window_ParamLimits

0x864a,	// (0x00042a15) popup_fast_swap2_window

0xeaab,	// (0x00048e76) aid_size_cell_fast2

0xacc7,	// (0x00045092) bg_popup_window_pane_cp17

0xc993,	// (0x00046d5e) heading_pane_cp2

0xb100,	// (0x000454cb) listscroll_fast2_pane

0xeab5,	// (0x00048e80) grid_fast2_pane

0xeabd,	// (0x00048e88) listscroll_fast2_pane_g1

0xeac5,	// (0x00048e90) listscroll_fast2_pane_g2

0x0001,

0xfbf4,	// (0x00049fbf) listscroll_fast2_pane_g

0xb523,	// (0x000458ee) scroll_pane_cp26

0xeacd,	// (0x00048e98) cell_fast2_pane_ParamLimits

0xeacd,	// (0x00048e98) cell_fast2_pane

0xeae3,	// (0x00048eae) cell_fast2_pane_g1

0xeaec,	// (0x00048eb7) cell_fast2_pane_g2

0xeaf5,	// (0x00048ec0) cell_fast2_pane_g3

0x0002,

0xfbf9,	// (0x00049fc4) cell_fast2_pane_g

0xb162,	// (0x0004552d) grid_highlight_pane_cp9

0x4f15,	// (0x0003f2e0) main_eswt_pane_ParamLimits

0x4f15,	// (0x0003f2e0) main_eswt_pane

0xeaa2,	// (0x00048e6d) list_single_text_info_pane

0xeafd,	// (0x00048ec8) eswt_ctrl_button_pane

0xeafd,	// (0x00048ec8) eswt_ctrl_canvas_pane

0xeb05,	// (0x00048ed0) eswt_ctrl_combo_pane

0xeafd,	// (0x00048ec8) eswt_ctrl_default_pane

0xeafd,	// (0x00048ec8) eswt_ctrl_label_pane

0xeb0d,	// (0x00048ed8) eswt_ctrl_wait_pane

0xeb15,	// (0x00048ee0) eswt_shell_pane

0xacc7,	// (0x00045092) listscroll_eswt_app_pane

0xeb31,	// (0x00048efc) popup_eswt_tasktip_window_ParamLimits

0xeb31,	// (0x00048efc) popup_eswt_tasktip_window

0xc669,	// (0x00046a34) bg_popup_window_pane_cp18

0xeb42,	// (0x00048f0d) eswt_control_pane_g1_ParamLimits

0xeb42,	// (0x00048f0d) eswt_control_pane_g1

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2_ParamLimits

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2

0xeb5c,	// (0x00048f27) eswt_control_pane_g3_ParamLimits

0xeb5c,	// (0x00048f27) eswt_control_pane_g3

0xeb69,	// (0x00048f34) eswt_control_pane_g4_ParamLimits

0xeb69,	// (0x00048f34) eswt_control_pane_g4

0x0003,

0xfc00,	// (0x00049fcb) eswt_control_pane_g_ParamLimits

0xfc00,	// (0x00049fcb) eswt_control_pane_g

0xb3d4,	// (0x0004579f) bg_button_pane_ParamLimits

0xb3d4,	// (0x0004579f) bg_button_pane

0xb177,	// (0x00045542) common_borders_pane_copy2_ParamLimits

0xb177,	// (0x00045542) common_borders_pane_copy2

0xeb76,	// (0x00048f41) control_button_pane_g1_ParamLimits

0xeb76,	// (0x00048f41) control_button_pane_g1

0xeb82,	// (0x00048f4d) control_button_pane_g2_ParamLimits

0xeb82,	// (0x00048f4d) control_button_pane_g2

0xeb8e,	// (0x00048f59) control_button_pane_g3_ParamLimits

0xeb8e,	// (0x00048f59) control_button_pane_g3

0x0002,

0xfc09,	// (0x00049fd4) control_button_pane_g_ParamLimits

0xfc09,	// (0x00049fd4) control_button_pane_g

0xeba2,	// (0x00048f6d) control_button_pane_t1

0xebb0,	// (0x00048f7b) control_button_pane_t2

0x0001,

0xfc10,	// (0x00049fdb) control_button_pane_t

0xc5f5,	// (0x000469c0) bg_button_pane_g1

0xc605,	// (0x000469d0) bg_button_pane_g2

0xc5fd,	// (0x000469c8) bg_button_pane_g3

0xc615,	// (0x000469e0) bg_button_pane_g4

0xc60d,	// (0x000469d8) bg_button_pane_g5

0xc61d,	// (0x000469e8) bg_button_pane_g6

0xc625,	// (0x000469f0) bg_button_pane_g7

0xc635,	// (0x00046a00) bg_button_pane_g8

0xc62d,	// (0x000469f8) bg_button_pane_g9

0x0008,

0xf85f,	// (0x00049c2a) bg_button_pane_g

0xe351,	// (0x0004871c) common_borders_pane_ParamLimits

0xe351,	// (0x0004871c) common_borders_pane

0xeb42,	// (0x00048f0d) eswt_control_pane_g1_copy1_ParamLimits

0xeb42,	// (0x00048f0d) eswt_control_pane_g1_copy1

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2_copy1_ParamLimits

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2_copy1

0xeb5c,	// (0x00048f27) eswt_control_pane_g3_copy1_ParamLimits

0xeb5c,	// (0x00048f27) eswt_control_pane_g3_copy1

0xeb69,	// (0x00048f34) eswt_control_pane_g4_copy1_ParamLimits

0xeb69,	// (0x00048f34) eswt_control_pane_g4_copy1

0xe38c,	// (0x00048757) bg_eswt_ctrl_canvas_pane_g1

0xe351,	// (0x0004871c) common_borders_pane_cp2_ParamLimits

0xe351,	// (0x0004871c) common_borders_pane_cp2

0xe351,	// (0x0004871c) common_borders_pane_cp3_ParamLimits

0xe351,	// (0x0004871c) common_borders_pane_cp3

0xebbe,	// (0x00048f89) separator_horizontal_pane

0xb77e,	// (0x00045b49) separator_vertical_pane

0xeb42,	// (0x00048f0d) eswt_control_pane_g1_copy2_ParamLimits

0xeb42,	// (0x00048f0d) eswt_control_pane_g1_copy2

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2_copy2_ParamLimits

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2_copy2

0xeb5c,	// (0x00048f27) eswt_control_pane_g3_copy2_ParamLimits

0xeb5c,	// (0x00048f27) eswt_control_pane_g3_copy2

0xeb69,	// (0x00048f34) eswt_control_pane_g4_copy2_ParamLimits

0xeb69,	// (0x00048f34) eswt_control_pane_g4_copy2

0xacc7,	// (0x00045092) common_borders_pane_cp4

0xebc6,	// (0x00048f91) separator_horizontal_pane_g1

0xebcf,	// (0x00048f9a) separator_horizontal_pane_g2

0xebd8,	// (0x00048fa3) separator_horizontal_pane_g3

0x0002,

0xfc15,	// (0x00049fe0) separator_horizontal_pane_g

0xeb42,	// (0x00048f0d) eswt_control_pane_g1_copy3_ParamLimits

0xeb42,	// (0x00048f0d) eswt_control_pane_g1_copy3

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2_copy3_ParamLimits

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2_copy3

0xeb5c,	// (0x00048f27) eswt_control_pane_g3_copy3_ParamLimits

0xeb5c,	// (0x00048f27) eswt_control_pane_g3_copy3

0xeb69,	// (0x00048f34) eswt_control_pane_g4_copy3_ParamLimits

0xeb69,	// (0x00048f34) eswt_control_pane_g4_copy3

0xacc7,	// (0x00045092) common_borders_pane_cp5

0xebe1,	// (0x00048fac) separator_vertical_pane_g1

0xebea,	// (0x00048fb5) separator_vertical_pane_g2

0xebf3,	// (0x00048fbe) separator_vertical_pane_g3

0x0002,

0xfc1c,	// (0x00049fe7) separator_vertical_pane_g

0xeb42,	// (0x00048f0d) eswt_control_pane_g1_copy4_ParamLimits

0xeb42,	// (0x00048f0d) eswt_control_pane_g1_copy4

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2_copy4_ParamLimits

0xeb4f,	// (0x00048f1a) eswt_control_pane_g2_copy4

0xeb5c,	// (0x00048f27) eswt_control_pane_g3_copy4_ParamLimits

0xeb5c,	// (0x00048f27) eswt_control_pane_g3_copy4

0xeb69,	// (0x00048f34) eswt_control_pane_g4_copy4_ParamLimits

0xeb69,	// (0x00048f34) eswt_control_pane_g4_copy4

0x995f,	// (0x00043d2a) eswt_ctrl_combo_button_pane

0x9967,	// (0x00043d32) eswt_ctrl_input_pane

0x996f,	// (0x00043d3a) popup_choice_list_window_cp70

0x9977,	// (0x00043d42) eswt_ctrl_input_pane_t1

0xacc7,	// (0x00045092) input_focus_pane_cp70

0xe351,	// (0x0004871c) bg_button_pane_cp70_ParamLimits

0xe351,	// (0x0004871c) bg_button_pane_cp70

0x9985,	// (0x00043d50) eswt_ctrl_combo_button_pane_g1

0xebfc,	// (0x00048fc7) wait_bar_pane_cp70

0xc669,	// (0x00046a34) bg_popup_window_pane_cp70_ParamLimits

0xc669,	// (0x00046a34) bg_popup_window_pane_cp70

0xec04,	// (0x00048fcf) popup_eswt_tasktip_window_t1

0xec1a,	// (0x00048fe5) wait_bar_pane_cp71_ParamLimits

0xec1a,	// (0x00048fe5) wait_bar_pane_cp71

0xec26,	// (0x00048ff1) grid_eswt_app_pane

0xb775,	// (0x00045b40) scroll_pane_cp70

0x998d,	// (0x00043d58) cell_eswt_app_pane_ParamLimits

0x998d,	// (0x00043d58) cell_eswt_app_pane

0x99b5,	// (0x00043d80) cell_eswt_app_pane_g1_ParamLimits

0x99b5,	// (0x00043d80) cell_eswt_app_pane_g1

0x99e4,	// (0x00043daf) cell_eswt_app_pane_g2_ParamLimits

0x99e4,	// (0x00043daf) cell_eswt_app_pane_g2

0x0001,

0xfc23,	// (0x00049fee) cell_eswt_app_pane_g_ParamLimits

0xfc23,	// (0x00049fee) cell_eswt_app_pane_g

0x9a0d,	// (0x00043dd8) cell_eswt_app_pane_t1_ParamLimits

0x9a0d,	// (0x00043dd8) cell_eswt_app_pane_t1

0xec2f,	// (0x00048ffa) grid_highlight_pane_cp70_ParamLimits

0xec2f,	// (0x00048ffa) grid_highlight_pane_cp70

0xb3ee,	// (0x000457b9) set_content_pane_g1

0xc3e8,	// (0x000467b3) status_small_volume_pane

0x5bec,	// (0x0003ffb7) status_small_volume_pane_g1

0x5bf4,	// (0x0003ffbf) volume_small2_pane

0x5bfd,	// (0x0003ffc8) volume_small2_pane_g1

0x5c06,	// (0x0003ffd1) volume_small2_pane_g2

0x5c0f,	// (0x0003ffda) volume_small2_pane_g3

0x5c18,	// (0x0003ffe3) volume_small2_pane_g4

0x5c21,	// (0x0003ffec) volume_small2_pane_g5

0x5c2a,	// (0x0003fff5) volume_small2_pane_g6

0x5c33,	// (0x0003fffe) volume_small2_pane_g7

0x5c3c,	// (0x00040007) volume_small2_pane_g8

0x5c45,	// (0x00040010) volume_small2_pane_g9

0x5c4e,	// (0x00040019) volume_small2_pane_g10

0x0009,

0xfc28,	// (0x00049ff3) volume_small2_pane_g

0xe6bf,	// (0x00048a8a) fep_vkb_top_text_pane_g1_ParamLimits

0x98cc,	// (0x00043c97) fep_vkb_top_text_pane_t1_ParamLimits

0xe8a1,	// (0x00048c6c) popup_preview_fixed_window_g3_ParamLimits

0xe8a1,	// (0x00048c6c) popup_preview_fixed_window_g3

0x8b6a,	// (0x00042f35) popup_toolbar_trans_pane

0x93bf,	// (0x0004378a) aid_height_set_list_ParamLimits

0xd736,	// (0x00047b01) aid_size_parent_ParamLimits

0xb55a,	// (0x00045925) list_highlight_pane_cp2_ParamLimits

0xb3ee,	// (0x000457b9) set_content_pane_g1_ParamLimits

0x9534,	// (0x000438ff) list_single_image_pane_ParamLimits

0x9534,	// (0x000438ff) list_single_image_pane

0x9a3f,	// (0x00043e0a) aid_size_cell_image_ParamLimits

0x9a3f,	// (0x00043e0a) aid_size_cell_image

0x9a4c,	// (0x00043e17) grid_single_image_pane_ParamLimits

0x9a4c,	// (0x00043e17) grid_single_image_pane

0xb3ee,	// (0x000457b9) list_single_image_pane_g1_ParamLimits

0xb3ee,	// (0x000457b9) list_single_image_pane_g1

0xb3fa,	// (0x000457c5) list_single_image_pane_g2_ParamLimits

0xb3fa,	// (0x000457c5) list_single_image_pane_g2

0x0001,

0xfc3d,	// (0x0004a008) list_single_image_pane_g_ParamLimits

0xfc3d,	// (0x0004a008) list_single_image_pane_g

0xec3b,	// (0x00049006) list_single_image_pane_t1_ParamLimits

0xec3b,	// (0x00049006) list_single_image_pane_t1

0x9a58,	// (0x00043e23) cell_image_list_pane_ParamLimits

0x9a58,	// (0x00043e23) cell_image_list_pane

0x9a6c,	// (0x00043e37) cell_image_list_pane_g1

0x9a75,	// (0x00043e40) cell_image_list_pane_g2

0x0001,

0xfc42,	// (0x0004a00d) cell_image_list_pane_g

0xec51,	// (0x0004901c) aid_size_cell_tb_trans_pane

0xb3d4,	// (0x0004579f) bg_tb_trans_pane

0xec63,	// (0x0004902e) grid_tb_trans_pane

0xc5f5,	// (0x000469c0) bg_tb_trans_pane_g1

0xc605,	// (0x000469d0) bg_tb_trans_pane_g2

0xc5fd,	// (0x000469c8) bg_tb_trans_pane_g3

0xc615,	// (0x000469e0) bg_tb_trans_pane_g4

0xc60d,	// (0x000469d8) bg_tb_trans_pane_g5

0xc635,	// (0x00046a00) bg_tb_trans_pane_g6

0xc62d,	// (0x000469f8) bg_tb_trans_pane_g7

0xc61d,	// (0x000469e8) bg_tb_trans_pane_g8

0xc625,	// (0x000469f0) bg_tb_trans_pane_g9

0x0008,

0xfc47,	// (0x0004a012) bg_tb_trans_pane_g

0xec77,	// (0x00049042) cell_toolbar_trans_pane_ParamLimits

0xec77,	// (0x00049042) cell_toolbar_trans_pane

0xe38c,	// (0x00048757) cell_toolbar_trans_pane_g1

0x97c9,	// (0x00043b94) list_form2_midp_pane_t1

0x97d7,	// (0x00043ba2) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x00049eaf) list_form2_midp_pane_t

0xe060,	// (0x0004842b) scroll_pane_cp51_ParamLimits

0xe1d6,	// (0x000485a1) form2_midp_wait_pane_g1

0xe1df,	// (0x000485aa) form2_midp_wait_pane_g2

0xe1e8,	// (0x000485b3) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x00049ec4) form2_midp_wait_pane_g

0xadb7,	// (0x00045182) list_highlight_pane_cp21_ParamLimits

0xe226,	// (0x000485f1) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xe235,	// (0x00048600) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xbd54,	// (0x0004611f) list_single_2graphic_im_pane_ParamLimits

0xbd54,	// (0x0004611f) list_single_2graphic_im_pane

0x9a7e,	// (0x00043e49) list_single_2graphic_im_pane_g1_ParamLimits

0x9a7e,	// (0x00043e49) list_single_2graphic_im_pane_g1

0x9a8f,	// (0x00043e5a) list_single_2graphic_im_pane_g2_ParamLimits

0x9a8f,	// (0x00043e5a) list_single_2graphic_im_pane_g2

0x9a9b,	// (0x00043e66) list_single_2graphic_im_pane_g3_ParamLimits

0x9a9b,	// (0x00043e66) list_single_2graphic_im_pane_g3

0x0003,

0xfc5a,	// (0x0004a025) list_single_2graphic_im_pane_g_ParamLimits

0xfc5a,	// (0x0004a025) list_single_2graphic_im_pane_g

0x9aaf,	// (0x00043e7a) list_single_2graphic_im_pane_t1_ParamLimits

0x9aaf,	// (0x00043e7a) list_single_2graphic_im_pane_t1

0xe8ad,	// (0x00048c78) list_single_graphic_2heading_pane_fp_ParamLimits

0xe8ad,	// (0x00048c78) list_single_graphic_2heading_pane_fp

0xc025,	// (0x000463f0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc025,	// (0x000463f0) list_single_graphic_2heading_pane_fp_g1

0xe8c1,	// (0x00048c8c) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xe8c1,	// (0x00048c8c) list_single_graphic_2heading_pane_fp_g2

0xb309,	// (0x000456d4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xb309,	// (0x000456d4) list_single_graphic_2heading_pane_fp_g3

0xbffa,	// (0x000463c5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbffa,	// (0x000463c5) list_single_graphic_2heading_pane_fp_g4

0xe8cd,	// (0x00048c98) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xe8cd,	// (0x00048c98) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb81,	// (0x00049f4c) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb81,	// (0x00049f4c) list_single_graphic_2heading_pane_fp_g

0xc1bc,	// (0x00046587) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc1bc,	// (0x00046587) list_single_graphic_2heading_pane_fp_t1

0xc05d,	// (0x00046428) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc05d,	// (0x00046428) list_single_graphic_2heading_pane_fp_t2

0xc1d2,	// (0x0004659d) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc1d2,	// (0x0004659d) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc63,	// (0x0004a02e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc63,	// (0x0004a02e) list_single_graphic_2heading_pane_fp_t

0xe415,	// (0x000487e0) fep_hwr_write_pane_g5_ParamLimits

0xe415,	// (0x000487e0) fep_hwr_write_pane_g5

0xe421,	// (0x000487ec) fep_hwr_write_pane_g6_ParamLimits

0xe421,	// (0x000487ec) fep_hwr_write_pane_g6

0xeb15,	// (0x00048ee0) eswt_shell_pane_ParamLimits

0xc669,	// (0x00046a34) bg_popup_window_pane_cp18_ParamLimits

0xd6da,	// (0x00047aa5) heading_pane_cp70

0xec04,	// (0x00048fcf) popup_eswt_tasktip_window_t1_ParamLimits

0x8c05,	// (0x00042fd0) aid_touch_tab_arrow_left

0x8c19,	// (0x00042fe4) aid_touch_tab_arrow_right

0x7bed,	// (0x00041fb8) title_pane_g3_ParamLimits

0x7bed,	// (0x00041fb8) title_pane_g3

0xb3a4,	// (0x0004576f) set_value_pane_g1

0x8b6a,	// (0x00042f35) popup_toolbar_trans_pane_ParamLimits

0xec51,	// (0x0004901c) aid_size_cell_tb_trans_pane_ParamLimits

0xb3d4,	// (0x0004579f) bg_tb_trans_pane_ParamLimits

0xec63,	// (0x0004902e) grid_tb_trans_pane_ParamLimits

0xaeea,	// (0x000452b5) cont_note_pane_ParamLimits

0xaeea,	// (0x000452b5) cont_note_pane

0xb177,	// (0x00045542) cont_snote2_single_text_pane_ParamLimits

0xb177,	// (0x00045542) cont_snote2_single_text_pane

0xb177,	// (0x00045542) cont_snote2_single_graphic_pane_ParamLimits

0xb177,	// (0x00045542) cont_snote2_single_graphic_pane

0xcba9,	// (0x00046f74) cont_note_wait_pane_ParamLimits

0xcba9,	// (0x00046f74) cont_note_wait_pane

0xcba9,	// (0x00046f74) cont_note_image_pane_ParamLimits

0xcba9,	// (0x00046f74) cont_note_image_pane

0xeca9,	// (0x00049074) popup_note2_window_g1_ParamLimits

0xeca9,	// (0x00049074) popup_note2_window_g1

0xecda,	// (0x000490a5) popup_note2_window_t1_ParamLimits

0xecda,	// (0x000490a5) popup_note2_window_t1

0xed1f,	// (0x000490ea) popup_note2_window_t2_ParamLimits

0xed1f,	// (0x000490ea) popup_note2_window_t2

0xed64,	// (0x0004912f) popup_note2_window_t3_ParamLimits

0xed64,	// (0x0004912f) popup_note2_window_t3

0xeda9,	// (0x00049174) popup_note2_window_t4_ParamLimits

0xeda9,	// (0x00049174) popup_note2_window_t4

0xaf6e,	// (0x00045339) popup_note2_window_t5_ParamLimits

0xaf6e,	// (0x00045339) popup_note2_window_t5

0x0004,

0xfc6f,	// (0x0004a03a) popup_note2_window_t_ParamLimits

0xfc6f,	// (0x0004a03a) popup_note2_window_t

0xedd8,	// (0x000491a3) popup_note2_image_window_g1_ParamLimits

0xedd8,	// (0x000491a3) popup_note2_image_window_g1

0xede4,	// (0x000491af) popup_note2_image_window_g2_ParamLimits

0xede4,	// (0x000491af) popup_note2_image_window_g2

0x0001,

0xfc7a,	// (0x0004a045) popup_note2_image_window_g_ParamLimits

0xfc7a,	// (0x0004a045) popup_note2_image_window_g

0xedf6,	// (0x000491c1) popup_note2_image_window_t1_ParamLimits

0xedf6,	// (0x000491c1) popup_note2_image_window_t1

0xee0e,	// (0x000491d9) popup_note2_image_window_t2_ParamLimits

0xee0e,	// (0x000491d9) popup_note2_image_window_t2

0xee26,	// (0x000491f1) popup_note2_image_window_t3_ParamLimits

0xee26,	// (0x000491f1) popup_note2_image_window_t3

0x0002,

0xfc7f,	// (0x0004a04a) popup_note2_image_window_t_ParamLimits

0xfc7f,	// (0x0004a04a) popup_note2_image_window_t

0xcbb7,	// (0x00046f82) popup_note2_wait_window_g1_ParamLimits

0xcbb7,	// (0x00046f82) popup_note2_wait_window_g1

0xcbc3,	// (0x00046f8e) popup_note2_wait_window_g2_ParamLimits

0xcbc3,	// (0x00046f8e) popup_note2_wait_window_g2

0xcbcf,	// (0x00046f9a) popup_note2_wait_window_g3_ParamLimits

0xcbcf,	// (0x00046f9a) popup_note2_wait_window_g3

0x0002,

0xf841,	// (0x00049c0c) popup_note2_wait_window_g_ParamLimits

0xf841,	// (0x00049c0c) popup_note2_wait_window_g

0xee42,	// (0x0004920d) popup_note2_wait_window_t1_ParamLimits

0xee42,	// (0x0004920d) popup_note2_wait_window_t1

0xee60,	// (0x0004922b) popup_note2_wait_window_t2_ParamLimits

0xee60,	// (0x0004922b) popup_note2_wait_window_t2

0xee7e,	// (0x00049249) popup_note2_wait_window_t3_ParamLimits

0xee7e,	// (0x00049249) popup_note2_wait_window_t3

0xee90,	// (0x0004925b) popup_note2_wait_window_t4_ParamLimits

0xee90,	// (0x0004925b) popup_note2_wait_window_t4

0x0003,

0xfc86,	// (0x0004a051) popup_note2_wait_window_t_ParamLimits

0xfc86,	// (0x0004a051) popup_note2_wait_window_t

0xeea2,	// (0x0004926d) wait_bar2_pane_ParamLimits

0xeea2,	// (0x0004926d) wait_bar2_pane

0xeeba,	// (0x00049285) popup_snote2_single_text_window_g1_ParamLimits

0xeeba,	// (0x00049285) popup_snote2_single_text_window_g1

0xeee2,	// (0x000492ad) popup_snote2_single_text_window_t1_ParamLimits

0xeee2,	// (0x000492ad) popup_snote2_single_text_window_t1

0xef2e,	// (0x000492f9) popup_snote2_single_text_window_t2_ParamLimits

0xef2e,	// (0x000492f9) popup_snote2_single_text_window_t2

0xef7a,	// (0x00049345) popup_snote2_single_text_window_t3_ParamLimits

0xef7a,	// (0x00049345) popup_snote2_single_text_window_t3

0xefbb,	// (0x00049386) popup_snote2_single_text_window_t4_ParamLimits

0xefbb,	// (0x00049386) popup_snote2_single_text_window_t4

0xeff1,	// (0x000493bc) popup_snote2_single_text_window_t5_ParamLimits

0xeff1,	// (0x000493bc) popup_snote2_single_text_window_t5

0x0004,

0xfc8f,	// (0x0004a05a) popup_snote2_single_text_window_t_ParamLimits

0xfc8f,	// (0x0004a05a) popup_snote2_single_text_window_t

0xf01c,	// (0x000493e7) popup_snote2_single_graphic_window_g1_ParamLimits

0xf01c,	// (0x000493e7) popup_snote2_single_graphic_window_g1

0xf044,	// (0x0004940f) popup_snote2_single_graphic_window_g2_ParamLimits

0xf044,	// (0x0004940f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9a,	// (0x0004a065) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9a,	// (0x0004a065) popup_snote2_single_graphic_window_g

0xf06c,	// (0x00049437) popup_snote2_single_graphic_window_t1_ParamLimits

0xf06c,	// (0x00049437) popup_snote2_single_graphic_window_t1

0xf0b8,	// (0x00049483) popup_snote2_single_graphic_window_t2_ParamLimits

0xf0b8,	// (0x00049483) popup_snote2_single_graphic_window_t2

0xef7a,	// (0x00049345) popup_snote2_single_graphic_window_t3_ParamLimits

0xef7a,	// (0x00049345) popup_snote2_single_graphic_window_t3

0xefbb,	// (0x00049386) popup_snote2_single_graphic_window_t4_ParamLimits

0xefbb,	// (0x00049386) popup_snote2_single_graphic_window_t4

0xeff1,	// (0x000493bc) popup_snote2_single_graphic_window_t5_ParamLimits

0xeff1,	// (0x000493bc) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9f,	// (0x0004a06a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9f,	// (0x0004a06a) popup_snote2_single_graphic_window_t

0xdff9,	// (0x000483c4) clock_nsta_pane_cp2_t1

0xdff9,	// (0x000483c4) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x00049e85) clock_nsta_pane_cp2_t

0x8065,	// (0x00042430) form_field_data_wide_pane_g1_ParamLimits

0xb3ee,	// (0x000457b9) form_field_data_wide_pane_g2_ParamLimits

0xb3ee,	// (0x000457b9) form_field_data_wide_pane_g2

0xb3fa,	// (0x000457c5) form_field_data_wide_pane_g3_ParamLimits

0xb3fa,	// (0x000457c5) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x00049a4b) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x00049a4b) form_field_data_wide_pane_g

0x9712,	// (0x00043add) grid_touch_3_pane_ParamLimits

0x9712,	// (0x00043add) grid_touch_3_pane

0x9ae0,	// (0x00043eab) cell_touch_3_pane_ParamLimits

0x9ae0,	// (0x00043eab) cell_touch_3_pane

0xe38c,	// (0x00048757) cell_touch_3_pane_g1

0xe38c,	// (0x00048757) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x00049f0a) cell_touch_3_pane_g

0xafc6,	// (0x00045391) cont_query_data_pane

0xafce,	// (0x00045399) cont_query_data_pane_cp1

0xf104,	// (0x000494cf) button_value_adjust_pane_cp7

0xf10c,	// (0x000494d7) query_popup_pane_cp3

0xb926,	// (0x00045cf1) bg_popup_sub_pane_cp22_ParamLimits

0x4b7f,	// (0x0003ef4a) navi_navi_volume_pane_cp2

0x4b97,	// (0x0003ef62) popup_side_volume_key_window_g2

0x4ba3,	// (0x0003ef6e) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x00049ae1) popup_side_volume_key_window_g

0x4bbd,	// (0x0003ef88) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x00049ae8) popup_side_volume_key_window_t

0xbb70,	// (0x00045f3b) popup_side_volume_key_window_ParamLimits

0x151b,	// (0x0003b8e6) list_double_graphic_pane_g4_ParamLimits

0x151b,	// (0x0003b8e6) list_double_graphic_pane_g4

0x19cf,	// (0x0003bd9a) list_single_2heading_msg_pane_ParamLimits

0x19cf,	// (0x0003bd9a) list_single_2heading_msg_pane

0x1a05,	// (0x0003bdd0) list_single_2heading_msg_pane_g1_ParamLimits

0x1a05,	// (0x0003bdd0) list_single_2heading_msg_pane_g1

0x1a11,	// (0x0003bddc) list_single_2heading_msg_pane_g2_ParamLimits

0x1a11,	// (0x0003bddc) list_single_2heading_msg_pane_g2

0x1a24,	// (0x0003bdef) list_single_2heading_msg_pane_g3_ParamLimits

0x1a24,	// (0x0003bdef) list_single_2heading_msg_pane_g3

0x1a30,	// (0x0003bdfb) list_single_2heading_msg_pane_g4_ParamLimits

0x1a30,	// (0x0003bdfb) list_single_2heading_msg_pane_g4

0x0003,

0xfcaa,	// (0x0004a075) list_single_2heading_msg_pane_g_ParamLimits

0xfcaa,	// (0x0004a075) list_single_2heading_msg_pane_g

0x1a48,	// (0x0003be13) list_single_2heading_msg_pane_t1_ParamLimits

0x1a48,	// (0x0003be13) list_single_2heading_msg_pane_t1

0x1a70,	// (0x0003be3b) list_single_2heading_msg_pane_t2_ParamLimits

0x1a70,	// (0x0003be3b) list_single_2heading_msg_pane_t2

0x1adb,	// (0x0003bea6) list_single_2heading_msg_pane_t3_ParamLimits

0x1adb,	// (0x0003bea6) list_single_2heading_msg_pane_t3

0xc1f0,	// (0x000465bb) list_single_2heading_msg_pane_t4_ParamLimits

0xc1f0,	// (0x000465bb) list_single_2heading_msg_pane_t4

0x0003,

0xfcb3,	// (0x0004a07e) list_single_2heading_msg_pane_t_ParamLimits

0xfcb3,	// (0x0004a07e) list_single_2heading_msg_pane_t

0xad5d,	// (0x00045128) title_pane_g4_ParamLimits

0xad5d,	// (0x00045128) title_pane_g4

0x49cf,	// (0x0003ed9a) title_pane_stacon_g3_ParamLimits

0x49cf,	// (0x0003ed9a) title_pane_stacon_g3

0xec9d,	// (0x00049068) list_single_2graphic_im_pane_g4_ParamLimits

0xec9d,	// (0x00049068) list_single_2graphic_im_pane_g4

0xd504,	// (0x000478cf) popup_side_volume_key_window_cp

0xd95d,	// (0x00047d28) main_idle_act2_pane_t1

0x53d6,	// (0x0003f7a1) toolbar_button_pane_g10

0x7f7d,	// (0x00042348) popup_toolbar_window_cp1

0xdfea,	// (0x000483b5) clock_nsta_pane_cp_t1

0xdfea,	// (0x000483b5) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x00049e80) clock_nsta_pane_cp_t

0x4b7f,	// (0x0003ef4a) navi_navi_volume_pane_cp2_ParamLimits

0x4b8b,	// (0x0003ef56) popup_side_volume_key_window_g1_ParamLimits

0x4b97,	// (0x0003ef62) popup_side_volume_key_window_g2_ParamLimits

0x4ba3,	// (0x0003ef6e) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x00049ae1) popup_side_volume_key_window_g_ParamLimits

0x586c,	// (0x0003fc37) fep_hwr_aid_pane

0x590d,	// (0x0003fcd8) bg_fep_hwr_top_pane_g4_ParamLimits

0xe3e5,	// (0x000487b0) fep_hwr_top_pane_g1_ParamLimits

0xe3f7,	// (0x000487c2) fep_hwr_top_pane_g2_ParamLimits

0x592d,	// (0x0003fcf8) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x00049ed5) fep_hwr_top_pane_g_ParamLimits

0x5942,	// (0x0003fd0d) fep_hwr_top_text_pane_ParamLimits

0xd304,	// (0x000476cf) aid_touch_tab_arrow_arrow_2

0xd30d,	// (0x000476d8) aid_touch_tab_arrow_left_2

0x5880,	// (0x0003fc4b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x58b3,	// (0x0003fc7e) fep_hwr_prediction_pane

0xe52a,	// (0x000488f5) fep_vkb_prediction_pane

0x98ac,	// (0x00043c77) fep_vkb_side_pane_g3_ParamLimits

0x98ac,	// (0x00043c77) fep_vkb_side_pane_g3

0x5ab1,	// (0x0003fe7c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5b1b,	// (0x0003fee6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5b28,	// (0x0003fef3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb9,	// (0x00049f84) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5c57,	// (0x00040022) fep_hwr_prediction_pane_g1

0x5c61,	// (0x0004002c) fep_hwr_prediction_pane_g2

0x5c69,	// (0x00040034) fep_hwr_prediction_pane_g3

0x5c71,	// (0x0004003c) fep_hwr_prediction_pane_g4

0x0003,

0xfcbc,	// (0x0004a087) fep_hwr_prediction_pane_g

0xf11d,	// (0x000494e8) fep_vkb_prediction_pane_g1

0xf127,	// (0x000494f2) fep_vkb_prediction_pane_g2

0xf12f,	// (0x000494fa) fep_vkb_prediction_pane_g3

0xf137,	// (0x00049502) fep_vkb_prediction_pane_g4

0x0003,

0xfcc5,	// (0x0004a090) fep_vkb_prediction_pane_g

0x56a4,	// (0x0003fa6f) slider_set_pane_g3

0x56b8,	// (0x0003fa83) slider_set_pane_g4

0x56d0,	// (0x0003fa9b) slider_set_pane_g5

0x56a4,	// (0x0003fa6f) slider_set_pane_g6

0x9389,	// (0x00043754) slider_set_pane_g7

0xd759,	// (0x00047b24) slider_form_pane_g3

0xd762,	// (0x00047b2d) slider_form_pane_g4

0xd76a,	// (0x00047b35) slider_form_pane_g5

0xd759,	// (0x00047b24) slider_form_pane_g6

0x94f1,	// (0x000438bc) slider_form_pane_g7

0xdba6,	// (0x00047f71) slider_set_pane_vc_g3

0xdbaf,	// (0x00047f7a) slider_set_pane_vc_g4

0xdbb8,	// (0x00047f83) slider_set_pane_vc_g5

0xdba6,	// (0x00047f71) slider_set_pane_vc_g6

0xdbc1,	// (0x00047f8c) slider_set_pane_vc_g7

0xdba6,	// (0x00047f71) slider_form_pane_vc_g1

0xdbaf,	// (0x00047f7a) slider_form_pane_vc_g2

0xdbb8,	// (0x00047f83) slider_form_pane_vc_g3

0xdba6,	// (0x00047f71) slider_form_pane_vc_g4

0xdd35,	// (0x00048100) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x00049e52) slider_form_pane_vc_g

0x470c,	// (0x0003ead7) main_idle_act3_pane

0xf13f,	// (0x0004950a) ai3_links_pane

0x9b27,	// (0x00043ef2) popup_ai3_data_window_ParamLimits

0x9b27,	// (0x00043ef2) popup_ai3_data_window

0xacc7,	// (0x00045092) grid_ai3_links_pane

0x9b3f,	// (0x00043f0a) cell_ai3_links_pane_ParamLimits

0x9b3f,	// (0x00043f0a) cell_ai3_links_pane

0xf148,	// (0x00049513) bg_popup_sub_pane_cp11

0xf155,	// (0x00049520) cell_ai3_links_pane_g1

0xacc7,	// (0x00045092) bg_popup_sub_pane_cp12

0xf17a,	// (0x00049545) heading_ai3_data_pane

0xf182,	// (0x0004954d) list_ai3_gene_pane

0xf18e,	// (0x00049559) popup_ai3_data_window_g1

0xf196,	// (0x00049561) heading_ai3_data_pane_g1

0xf19e,	// (0x00049569) heading_ai3_data_pane_t1

0xf1ac,	// (0x00049577) list_double_ai3_gene_pane_ParamLimits

0xf1ac,	// (0x00049577) list_double_ai3_gene_pane

0xf1b9,	// (0x00049584) list_single_ai3_gene_pane_ParamLimits

0xf1b9,	// (0x00049584) list_single_ai3_gene_pane

0xe351,	// (0x0004871c) list_highlight_pane_cp7_ParamLimits

0xe351,	// (0x0004871c) list_highlight_pane_cp7

0xf1c6,	// (0x00049591) list_single_a13_gene_pane_t1_ParamLimits

0xf1c6,	// (0x00049591) list_single_a13_gene_pane_t1

0xf1dd,	// (0x000495a8) list_single_ai3_gene_pane_g1

0xf1e6,	// (0x000495b1) list_single_ai3_gene_pane_g2

0x0001,

0xfcce,	// (0x0004a099) list_single_ai3_gene_pane_g

0xf1ee,	// (0x000495b9) list_double_ai3_gene_pane_g1_ParamLimits

0xf1ee,	// (0x000495b9) list_double_ai3_gene_pane_g1

0xf1fa,	// (0x000495c5) list_double_ai3_gene_pane_t1_ParamLimits

0xf1fa,	// (0x000495c5) list_double_ai3_gene_pane_t1

0xf216,	// (0x000495e1) list_double_ai3_gene_pane_t2_ParamLimits

0xf216,	// (0x000495e1) list_double_ai3_gene_pane_t2

0xf22b,	// (0x000495f6) list_double_ai3_gene_pane_t3_ParamLimits

0xf22b,	// (0x000495f6) list_double_ai3_gene_pane_t3

0x0002,

0xfcd3,	// (0x0004a09e) list_double_ai3_gene_pane_t_ParamLimits

0xfcd3,	// (0x0004a09e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc1e8,	// (0x000465b3) aid_size_min_col_2

0x9b13,	// (0x00043ede) aid_size_min_msg_ParamLimits

0x9b13,	// (0x00043ede) aid_size_min_msg

0x98c0,	// (0x00043c8b) fep_vkb_top_text_pane_g2_ParamLimits

0x98c0,	// (0x00043c8b) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x00049f05) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x00049f05) fep_vkb_top_text_pane_g

0x470c,	// (0x0003ead7) main_hc_apps_shell_pane

0xf248,	// (0x00049613) grid_hc_apps_pane_ParamLimits

0xf248,	// (0x00049613) grid_hc_apps_pane

0xf257,	// (0x00049622) list_hc_apps_pane

0xf25f,	// (0x0004962a) scroll_pane_cp37_ParamLimits

0xf25f,	// (0x0004962a) scroll_pane_cp37

0x9b55,	// (0x00043f20) cell_hc_apps_pane_ParamLimits

0x9b55,	// (0x00043f20) cell_hc_apps_pane

0x9bef,	// (0x00043fba) cell_hc_apps_pane_g1_ParamLimits

0x9bef,	// (0x00043fba) cell_hc_apps_pane_g1

0xf26b,	// (0x00049636) cell_hc_apps_pane_g2_ParamLimits

0xf26b,	// (0x00049636) cell_hc_apps_pane_g2

0xf287,	// (0x00049652) cell_hc_apps_pane_g3_ParamLimits

0xf287,	// (0x00049652) cell_hc_apps_pane_g3

0x0002,

0xfcda,	// (0x0004a0a5) cell_hc_apps_pane_g_ParamLimits

0xfcda,	// (0x0004a0a5) cell_hc_apps_pane_g

0x9c1c,	// (0x00043fe7) cell_hc_apps_pane_t1_ParamLimits

0x9c1c,	// (0x00043fe7) cell_hc_apps_pane_t1

0xaeea,	// (0x000452b5) grid_highlight_pane_cp10_ParamLimits

0xaeea,	// (0x000452b5) grid_highlight_pane_cp10

0x9c5a,	// (0x00044025) list_single_hc_apps_pane_ParamLimits

0x9c5a,	// (0x00044025) list_single_hc_apps_pane

0x9c86,	// (0x00044051) list_single_hc_apps_pane_g1

0x26cf,	// (0x0003ca9a) list_single_hc_apps_pane_g2

0x0001,

0xfce1,	// (0x0004a0ac) list_single_hc_apps_pane_g

0x26e8,	// (0x0003cab3) list_single_hc_apps_pane_g2_copy1

0x1b49,	// (0x0003bf14) list_single_hc_apps_pane_t1

0xadb7,	// (0x00045182) bg_set_opt_pane_cp_ParamLimits

0x491d,	// (0x0003ece8) setting_slider_pane_t1_ParamLimits

0x7cba,	// (0x00042085) setting_slider_pane_t2_ParamLimits

0x7cd3,	// (0x0004209e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00049929) setting_slider_pane_t_ParamLimits

0x4963,	// (0x0003ed2e) slider_set_pane_ParamLimits

0x4dff,	// (0x0003f1ca) control_pane_g5_ParamLimits

0x4dff,	// (0x0003f1ca) control_pane_g5

0xd721,	// (0x00047aec) slider_set_pane_g1_ParamLimits

0x5698,	// (0x0003fa63) slider_set_pane_g2_ParamLimits

0x56a4,	// (0x0003fa6f) slider_set_pane_g3_ParamLimits

0x56b8,	// (0x0003fa83) slider_set_pane_g4_ParamLimits

0x56d0,	// (0x0003fa9b) slider_set_pane_g5_ParamLimits

0x56a4,	// (0x0003fa6f) slider_set_pane_g6_ParamLimits

0x9389,	// (0x00043754) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x00049d28) slider_set_pane_g_ParamLimits

0xadb7,	// (0x00045182) navi_icon_text_pane_ParamLimits

0x8bd7,	// (0x00042fa2) aid_fill_nsta_2_ParamLimits

0x8c05,	// (0x00042fd0) aid_touch_tab_arrow_left_ParamLimits

0x8c19,	// (0x00042fe4) aid_touch_tab_arrow_right_ParamLimits

0x8cb5,	// (0x00043080) clock_nsta_pane_ParamLimits

0xd2e6,	// (0x000476b1) navi_icon_pane_g1_ParamLimits

0xd2f2,	// (0x000476bd) navi_text_pane_t1_ParamLimits

0xe03a,	// (0x00048405) navi_icon_text_pane_g1_ParamLimits

0xe046,	// (0x00048411) navi_icon_text_pane_t1_ParamLimits

0x9c86,	// (0x00044051) list_single_hc_apps_pane_g1_ParamLimits

0x26cf,	// (0x0003ca9a) list_single_hc_apps_pane_g2_ParamLimits

0xfce1,	// (0x0004a0ac) list_single_hc_apps_pane_g_ParamLimits

0x26e8,	// (0x0003cab3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x1b49,	// (0x0003bf14) list_single_hc_apps_pane_t1_ParamLimits

0x7b05,	// (0x00041ed0) popup_toolbar2_fixed_window_ParamLimits

0x7b05,	// (0x00041ed0) popup_toolbar2_fixed_window

0x8b62,	// (0x00042f2d) popup_toolbar2_float_window

0xacc7,	// (0x00045092) bg_popup_sub_pane_cp27

0xf2a9,	// (0x00049674) grid_toolbar2_float_pane

0xacc7,	// (0x00045092) bg_popup_sub_pane_cp26

0xf2a9,	// (0x00049674) grid_toolbar2_fixed_pane

0x9c9f,	// (0x0004406a) cell_toolbar2_fixed_pane_ParamLimits

0x9c9f,	// (0x0004406a) cell_toolbar2_fixed_pane

0x9cba,	// (0x00044085) cell_toolbar2_fixed_pane_g1

0xf2b1,	// (0x0004967c) toolbar2_fixed_button_pane

0xc5f5,	// (0x000469c0) toolbar2_fixed_button_pane_g1

0xc605,	// (0x000469d0) toolbar2_fixed_button_pane_g2

0xc5fd,	// (0x000469c8) toolbar2_fixed_button_pane_g3

0xc615,	// (0x000469e0) toolbar2_fixed_button_pane_g4

0xc60d,	// (0x000469d8) toolbar2_fixed_button_pane_g5

0xc61d,	// (0x000469e8) toolbar2_fixed_button_pane_g6

0xc625,	// (0x000469f0) toolbar2_fixed_button_pane_g7

0xc635,	// (0x00046a00) toolbar2_fixed_button_pane_g8

0xc62d,	// (0x000469f8) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x00049c2a) toolbar2_fixed_button_pane_g

0xf2b9,	// (0x00049684) cell_toolbar2_float_pane_ParamLimits

0xf2b9,	// (0x00049684) cell_toolbar2_float_pane

0xf2ca,	// (0x00049695) cell_toolbar2_float_pane_g1

0xf2b1,	// (0x0004967c) toolbar2_fixed_button_pane_cp

0x9875,	// (0x00043c40) fep_vkb_accented_list_pane_ParamLimits

0x9875,	// (0x00043c40) fep_vkb_accented_list_pane

0x5a91,	// (0x0003fe5c) bg_popup_fep_shadow_pane_g9

0xc269,	// (0x00046634) bg_popup_fep_shadow_pane_cp3

0xb50a,	// (0x000458d5) list_accented_list_pane

0xf2d3,	// (0x0004969e) list_single_accented_list_pane_ParamLimits

0xf2d3,	// (0x0004969e) list_single_accented_list_pane

0xc269,	// (0x00046634) list_highlight_pane_cp10

0xf2e4,	// (0x000496af) list_single_accented_list_pane_t1

0x8aa4,	// (0x00042e6f) popup_slider_window_ParamLimits

0x8aa4,	// (0x00042e6f) popup_slider_window

0xf114,	// (0x000494df) aid_indentation_list_msg

0x9d99,	// (0x00044164) bg_popup_window_pane_cp19

0xf34a,	// (0x00049715) popup_slider_window_g1

0xf366,	// (0x00049731) popup_slider_window_g2

0xf382,	// (0x0004974d) popup_slider_window_g3

0x0005,

0xfce6,	// (0x0004a0b1) popup_slider_window_g

0xf39e,	// (0x00049769) popup_slider_window_t1

0xf3e2,	// (0x000497ad) small_volume_slider_vertical_pane

0xe38c,	// (0x00048757) small_volume_slider_vertical_pane_g1

0xe38c,	// (0x00048757) small_volume_slider_vertical_pane_g2

0xf3fe,	// (0x000497c9) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf8,	// (0x0004a0c3) small_volume_slider_vertical_pane_g

0x7a89,	// (0x00041e54) area_side_right_pane_ParamLimits

0x7a89,	// (0x00041e54) area_side_right_pane

0x9e51,	// (0x0004421c) aid_size_side_button_ParamLimits

0x9e51,	// (0x0004421c) aid_size_side_button

0x9e6a,	// (0x00044235) grid_sctrl_middle_pane_ParamLimits

0x9e6a,	// (0x00044235) grid_sctrl_middle_pane

0x5ca9,	// (0x00040074) sctrl_sk_bottom_pane

0x5cba,	// (0x00040085) sctrl_sk_top_pane

0x5ccc,	// (0x00040097) aid_touch_sctrl_top

0x5cd9,	// (0x000400a4) bg_sctrl_sk_pane_ParamLimits

0x5cd9,	// (0x000400a4) bg_sctrl_sk_pane

0x5ce7,	// (0x000400b2) sctrl_sk_top_pane_g1

0x5cf4,	// (0x000400bf) sctrl_sk_top_pane_t1

0x5ccc,	// (0x00040097) aid_touch_sctrl_bottom

0x5cd9,	// (0x000400a4) bg_sctrl_sk_pane_cp_ParamLimits

0x5cd9,	// (0x000400a4) bg_sctrl_sk_pane_cp

0x5d0f,	// (0x000400da) sctrl_sk_bottom_pane_g1

0x5cf4,	// (0x000400bf) sctrl_sk_bottom_pane_t1

0x9e80,	// (0x0004424b) cell_sctrl_middle_pane_ParamLimits

0x9e80,	// (0x0004424b) cell_sctrl_middle_pane

0x9e91,	// (0x0004425c) aid_touch_sctrl_middle_ParamLimits

0x9e91,	// (0x0004425c) aid_touch_sctrl_middle

0x9e9e,	// (0x00044269) bg_sctrl_middle_pane_ParamLimits

0x9e9e,	// (0x00044269) bg_sctrl_middle_pane

0x6672,	// (0x00040a3d) cell_sctrl_middle_pane_g1_ParamLimits

0x6672,	// (0x00040a3d) cell_sctrl_middle_pane_g1

0x9eac,	// (0x00044277) cell_sctrl_middle_pane_g2_ParamLimits

0x9eac,	// (0x00044277) cell_sctrl_middle_pane_g2

0x0001,

0xfd04,	// (0x0004a0cf) cell_sctrl_middle_pane_g_ParamLimits

0xfd04,	// (0x0004a0cf) cell_sctrl_middle_pane_g

0xc5f5,	// (0x000469c0) bg_sctrl_middle_pane_g1

0xc5fd,	// (0x000469c8) bg_sctrl_middle_pane_g2

0xc605,	// (0x000469d0) bg_sctrl_middle_pane_g3

0xc60d,	// (0x000469d8) bg_sctrl_middle_pane_g4

0xc615,	// (0x000469e0) bg_sctrl_middle_pane_g5

0xc61d,	// (0x000469e8) bg_sctrl_middle_pane_g6

0xc625,	// (0x000469f0) bg_sctrl_middle_pane_g7

0xc62d,	// (0x000469f8) bg_sctrl_middle_pane_g8

0x0007,

0xfd09,	// (0x0004a0d4) bg_sctrl_middle_pane_g

0xc635,	// (0x00046a00) bg_sctrl_middle_pane_g8_copy1

0xc5f5,	// (0x000469c0) bg_sctrl_sk_pane_g1

0xc605,	// (0x000469d0) bg_sctrl_sk_pane_g2

0xc5fd,	// (0x000469c8) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x00049c2a) bg_sctrl_sk_pane_g

0xb299,	// (0x00045664) aid_size_touch_scroll_bar

0xc615,	// (0x000469e0) bg_sctrl_sk_pane_g4

0xc60d,	// (0x000469d8) bg_sctrl_sk_pane_g5

0xc61d,	// (0x000469e8) bg_sctrl_sk_pane_g6

0xc625,	// (0x000469f0) bg_sctrl_sk_pane_g7

0xc635,	// (0x00046a00) bg_sctrl_sk_pane_g8

0xc62d,	// (0x000469f8) bg_sctrl_sk_pane_g9

0x4f9f,	// (0x0003f36a) popup_fep_china_hwr2_fs_candidate_window

0x869f,	// (0x00042a6a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x869f,	// (0x00042a6a) popup_fep_china_hwr2_fs_control_window

0x5ab1,	// (0x0003fe7c) sctrl_sk_top_pane_g2

0x0001,

0xfcff,	// (0x0004a0ca) sctrl_sk_top_pane_g

0x9eb9,	// (0x00044284) aid_fep_china_hwr2_fs_cell_ParamLimits

0x9eb9,	// (0x00044284) aid_fep_china_hwr2_fs_cell

0x9ecd,	// (0x00044298) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x9ecd,	// (0x00044298) bg_popup_fep_shadow_pane_cp4

0x9ee4,	// (0x000442af) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x9ee4,	// (0x000442af) bg_popup_fep_shadow_pane_cp5

0x9ef6,	// (0x000442c1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x9ef6,	// (0x000442c1) popup_fep_china_hwr2_fs_control_bar_grid

0x9f0a,	// (0x000442d5) popup_fep_china_hwr2_fs_control_funtion_grid

0xf407,	// (0x000497d2) aid_fep_china_hwr2_fs_candi_cell

0xacc7,	// (0x00045092) bg_popup_fep_shadow_pane_cp6

0xf411,	// (0x000497dc) popup_fep_china_hwr2_fs_candidate_grid

0x9f12,	// (0x000442dd) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x9f12,	// (0x000442dd) cell_fep_china_hwr2_fs_funtion_grid

0xe38c,	// (0x00048757) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xf419,	// (0x000497e4) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xf419,	// (0x000497e4) cell_fep_china_hwr2_fs_funtion_grid_g1

0xf427,	// (0x000497f2) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xf427,	// (0x000497f2) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1a,	// (0x0004a0e5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1a,	// (0x0004a0e5) cell_fep_china_hwr2_fs_funtion_grid_g

0x9f2a,	// (0x000442f5) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x9f2a,	// (0x000442f5) cell_fep_china_hwr2_fs_funtion_grid_t1

0x9f3f,	// (0x0004430a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x9f3f,	// (0x0004430a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1f,	// (0x0004a0ea) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1f,	// (0x0004a0ea) cell_fep_china_hwr2_fs_funtion_grid_t

0xf43d,	// (0x00049808) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xf445,	// (0x00049810) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xf44d,	// (0x00049818) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd24,	// (0x0004a0ef) popup_fep_china_hwr2_fs_control_bar_grid_g

0xf455,	// (0x00049820) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xf455,	// (0x00049820) cell_fep_china_hwr2_fs_candidate_grid

0xf46e,	// (0x00049839) popup_fep_china_hwr2_fs_candidate_grid_g20

0xf476,	// (0x00049841) popup_fep_china_hwr2_fs_candidate_grid_g21

0xe38c,	// (0x00048757) cell_fep_china_hwr2_fs_candidate_grid_g1

0xe38c,	// (0x00048757) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x00049f0a) cell_fep_china_hwr2_fs_candidate_grid_g

0xf47e,	// (0x00049849) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc45a,	// (0x00046825) clock_nsta_pane_cp_24_ParamLimits

0xc45a,	// (0x00046825) clock_nsta_pane_cp_24

0xc4b7,	// (0x00046882) indicator_nsta_pane_cp_24_ParamLimits

0xc4b7,	// (0x00046882) indicator_nsta_pane_cp_24

0xd1a9,	// (0x00047574) heading_pane_g1

0x0001,

0xf8c4,	// (0x00049c8f) heading_pane_g

0x95e4,	// (0x000439af) grid_sct_catagory_button_pane

0xd2da,	// (0x000476a5) scroll_pane_cp5_ParamLimits

0xe06c,	// (0x00048437) button_value_adjust_pane_cp5_ParamLimits

0xe06c,	// (0x00048437) button_value_adjust_pane_cp5

0xe12a,	// (0x000484f5) form2_midp_time_pane_ParamLimits

0xf48c,	// (0x00049857) cell_sct_catagory_button_pane_ParamLimits

0xf48c,	// (0x00049857) cell_sct_catagory_button_pane

0xe351,	// (0x0004871c) bg_button_pane_cp01_ParamLimits

0xe351,	// (0x0004871c) bg_button_pane_cp01

0xe38c,	// (0x00048757) cell_sct_catagory_button_pane_g1

0x8b13,	// (0x00042ede) popup_tb_extension_window

0x9f5b,	// (0x00044326) aid_size_cell_ext_ParamLimits

0x9f5b,	// (0x00044326) aid_size_cell_ext

0xb177,	// (0x00045542) bg_tb_trans_pane_cp1_ParamLimits

0xb177,	// (0x00045542) bg_tb_trans_pane_cp1

0x9f81,	// (0x0004434c) grid_tb_ext_pane_ParamLimits

0x9f81,	// (0x0004434c) grid_tb_ext_pane

0x9fb7,	// (0x00044382) cell_tb_ext_pane_ParamLimits

0x9fb7,	// (0x00044382) cell_tb_ext_pane

0x9fdb,	// (0x000443a6) cell_tb_ext_pane_g1_ParamLimits

0x9fdb,	// (0x000443a6) cell_tb_ext_pane_g1

0xf49e,	// (0x00049869) cell_tb_ext_pane_t1

0xaeea,	// (0x000452b5) list_highlight_pane_cp11_ParamLimits

0xaeea,	// (0x000452b5) list_highlight_pane_cp11

0x7b1a,	// (0x00041ee5) popup_uni_indicator_window_ParamLimits

0x7b1a,	// (0x00041ee5) popup_uni_indicator_window

0xb3d4,	// (0x0004579f) bg_popup_sub_pane_cp14

0xf4b9,	// (0x00049884) list_uniindi_pane

0xf4c5,	// (0x00049890) uniindi_top_pane

0xaeea,	// (0x000452b5) bg_uniindi_top_pane

0xf4e4,	// (0x000498af) uniindi_top_pane_g1

0xf4fa,	// (0x000498c5) uniindi_top_pane_g2

0x0003,

0xfd2b,	// (0x0004a0f6) uniindi_top_pane_g

0xf524,	// (0x000498ef) uniindi_top_pane_t1

0x019a,	// (0x0003a565) list_single_uniindi_pane_ParamLimits

0x019a,	// (0x0003a565) list_single_uniindi_pane

0xe38c,	// (0x00048757) bg_uniindi_top_pane_g1

0x01ac,	// (0x0003a577) list_single_uniindi_pane_g1

0x01bf,	// (0x0003a58a) list_single_uniindi_pane_t1

0x470c,	// (0x0003ead7) control_bg_pane

0x01e4,	// (0x0003a5af) bg_sctrl_sk_pane_cp1

0x01ed,	// (0x0003a5b8) bg_sctrl_sk_pane_cp2

0x01f6,	// (0x0003a5c1) control_bg_pane_g1

0x01ff,	// (0x0003a5ca) control_bg_pane_g2

0x0001,

0xfd34,	// (0x0004a0ff) control_bg_pane_g

0xdf2d,	// (0x000482f8) cell_indicator_nsta_pane_g1_ParamLimits

0x973f,	// (0x00043b0a) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x00049e6e) cell_indicator_nsta_pane_g_ParamLimits

0xbfe7,	// (0x000463b2) form2_midp_time_pane_t1_ParamLimits

0x585e,	// (0x0003fc29) main_idle_act4_pane_ParamLimits

0x585e,	// (0x0003fc29) main_idle_act4_pane

0x8b13,	// (0x00042ede) popup_tb_extension_window_ParamLimits

0x9fa1,	// (0x0004436c) tb_ext_find_pane_ParamLimits

0x9fa1,	// (0x0004436c) tb_ext_find_pane

0x0208,	// (0x0003a5d3) ai_gene_pane_1_cp1

0xc2fd,	// (0x000466c8) ai_gene_pane_2_cp1

0x0210,	// (0x0003a5db) list_single_idle_plugin_calendar_pane

0x0219,	// (0x0003a5e4) list_single_idle_plugin_notification_pane

0x0222,	// (0x0003a5ed) list_single_idle_plugin_player_pane

0x9ff8,	// (0x000443c3) list_single_idle_plugin_shortcut_pane_ParamLimits

0x9ff8,	// (0x000443c3) list_single_idle_plugin_shortcut_pane

0xa020,	// (0x000443eb) main_idle_act4_pane_t1

0xa036,	// (0x00044401) main_idle_act4_pane_t2

0x0001,

0xfd39,	// (0x0004a104) main_idle_act4_pane_t

0xa04c,	// (0x00044417) middle_sk_idle_act4_pane_ParamLimits

0xa04c,	// (0x00044417) middle_sk_idle_act4_pane

0xa068,	// (0x00044433) popup_clock_digital_analogue_window_cp2

0xa08e,	// (0x00044459) shortcut_wheel_idle_act4_pane_ParamLimits

0xa08e,	// (0x00044459) shortcut_wheel_idle_act4_pane

0xe38c,	// (0x00048757) shortcut_wheel_idle_act4_pane_g1

0xe38c,	// (0x00048757) shortcut_wheel_idle_act4_pane_g2

0xe38c,	// (0x00048757) shortcut_wheel_idle_act4_pane_g3

0xe38c,	// (0x00048757) shortcut_wheel_idle_act4_pane_g4

0xe38c,	// (0x00048757) shortcut_wheel_idle_act4_pane_g5

0x022b,	// (0x0003a5f6) shortcut_wheel_idle_act4_pane_g6

0x0233,	// (0x0003a5fe) shortcut_wheel_idle_act4_pane_g7

0x023b,	// (0x0003a606) shortcut_wheel_idle_act4_pane_g8

0x0243,	// (0x0003a60e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3e,	// (0x0004a109) shortcut_wheel_idle_act4_pane_g

0x3c08,	// (0x0003dfd3) middle_sk_idle_act4_pane_g1_ParamLimits

0x3c08,	// (0x0003dfd3) middle_sk_idle_act4_pane_g1

0xa109,	// (0x000444d4) middle_sk_idle_act4_pane_g2_ParamLimits

0xa109,	// (0x000444d4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd61,	// (0x0004a12c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd61,	// (0x0004a12c) middle_sk_idle_act4_pane_g

0xa121,	// (0x000444ec) middle_sk_idle_act4_pane_t1_ParamLimits

0xa121,	// (0x000444ec) middle_sk_idle_act4_pane_t1

0xa150,	// (0x0004451b) grid_ai_shortcut_pane_ParamLimits

0xa150,	// (0x0004451b) grid_ai_shortcut_pane

0xa16d,	// (0x00044538) list_highlight_pane_cp16_ParamLimits

0xa16d,	// (0x00044538) list_highlight_pane_cp16

0xa17a,	// (0x00044545) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xa17a,	// (0x00044545) list_single_idle_plugin_shortcut_pane_g1

0xa186,	// (0x00044551) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xa186,	// (0x00044551) list_single_idle_plugin_shortcut_pane_g2

0xa1a2,	// (0x0004456d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xa1a2,	// (0x0004456d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd66,	// (0x0004a131) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd66,	// (0x0004a131) list_single_idle_plugin_shortcut_pane_g

0xa1b7,	// (0x00044582) cell_ai_shortcut_pane_ParamLimits

0xa1b7,	// (0x00044582) cell_ai_shortcut_pane

0xa1cd,	// (0x00044598) cell_ai_shortcut_pane_g1_ParamLimits

0xa1cd,	// (0x00044598) cell_ai_shortcut_pane_g1

0x0208,	// (0x0003a5d3) ai_gene_pane_1_cp2

0x07b5,	// (0x0003ab80) ai_gene_pane_2_cp2

0x07bd,	// (0x0003ab88) list_highlight_pane_cp15

0x07c6,	// (0x0003ab91) list_single_idle_plugin_calendar_pane_g1

0x07bd,	// (0x0003ab88) list_highlight_pane_cp17

0x07ce,	// (0x0003ab99) list_single_idle_plugin_calendar_pane_g1_copy1

0x07d6,	// (0x0003aba1) list_single_idle_plugin_player_pane_g1

0xd9e9,	// (0x00047db4) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6d,	// (0x0004a138) list_single_idle_plugin_player_pane_g

0x07de,	// (0x0003aba9) list_single_idle_plugin_player_pane_t1

0x07ec,	// (0x0003abb7) list_single_idle_plugin_player_pane_t2

0x07fa,	// (0x0003abc5) list_single_idle_plugin_player_pane_t3

0x0808,	// (0x0003abd3) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd72,	// (0x0004a13d) list_single_idle_plugin_player_pane_t

0x0816,	// (0x0003abe1) wait_bar_pane_cp15

0x081e,	// (0x0003abe9) grid_ai_notification_pane

0xd9e9,	// (0x00047db4) list_single_idle_plugin_notification_pane_g1

0xa1ef,	// (0x000445ba) cell_ai_notification_pane_ParamLimits

0xa1ef,	// (0x000445ba) cell_ai_notification_pane

0x0834,	// (0x0003abff) cell_ai_notification_pane_g1

0x083c,	// (0x0003ac07) cell_ai_notification_pane_t1

0xa1fc,	// (0x000445c7) tb_ext_find_button_pane

0xa204,	// (0x000445cf) tb_ext_find_pane_g1

0xa20c,	// (0x000445d7) tb_ext_find_pane_t1

0xb8e6,	// (0x00045cb1) tb_ext_find_button_pane_g1

0x0868,	// (0x0003ac33) tb_ext_find_button_pane_g2

0x0001,

0xfd7b,	// (0x0004a146) tb_ext_find_button_pane_g

0xa020,	// (0x000443eb) main_idle_act4_pane_t1_ParamLimits

0xa036,	// (0x00044401) main_idle_act4_pane_t2_ParamLimits

0xfd39,	// (0x0004a104) main_idle_act4_pane_t_ParamLimits

0xa068,	// (0x00044433) popup_clock_digital_analogue_window_cp2_ParamLimits

0xa07e,	// (0x00044449) sat_plugin_idle_act4_pane_ParamLimits

0xa07e,	// (0x00044449) sat_plugin_idle_act4_pane

0xa21a,	// (0x000445e5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xa21a,	// (0x000445e5) sat_plugin_idle_act4_pane_t1

0xa232,	// (0x000445fd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xa232,	// (0x000445fd) sat_plugin_idle_act4_pane_t2

0xa24a,	// (0x00044615) sat_plugin_idle_act4_pane_t3_ParamLimits

0xa24a,	// (0x00044615) sat_plugin_idle_act4_pane_t3

0xa262,	// (0x0004462d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xa262,	// (0x0004462d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd80,	// (0x0004a14b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd80,	// (0x0004a14b) sat_plugin_idle_act4_pane_t

0x47cf,	// (0x0003eb9a) popup_battery_window_ParamLimits

0x47cf,	// (0x0003eb9a) popup_battery_window

0xaeea,	// (0x000452b5) bg_popup_sub_pane_cp25_ParamLimits

0xaeea,	// (0x000452b5) bg_popup_sub_pane_cp25

0x08bd,	// (0x0003ac88) popup_battery_window_g1_ParamLimits

0x08bd,	// (0x0003ac88) popup_battery_window_g1

0x08c9,	// (0x0003ac94) popup_battery_window_t1_ParamLimits

0x08c9,	// (0x0003ac94) popup_battery_window_t1

0x08db,	// (0x0003aca6) popup_battery_window_t2_ParamLimits

0x08db,	// (0x0003aca6) popup_battery_window_t2

0x0001,

0xfd89,	// (0x0004a154) popup_battery_window_t_ParamLimits

0xfd89,	// (0x0004a154) popup_battery_window_t

0x839b,	// (0x00042766) midp_canvas_pane_ParamLimits

0x83f0,	// (0x000427bb) midp_keypad_pane_ParamLimits

0x83f0,	// (0x000427bb) midp_keypad_pane

0xb55a,	// (0x00045925) main_midp_pane_ParamLimits

0xe008,	// (0x000483d3) signal_pane_g2_cp_ParamLimits

0xa27a,	// (0x00044645) aid_size_cell_midp_keypad_ParamLimits

0xa27a,	// (0x00044645) aid_size_cell_midp_keypad

0xa298,	// (0x00044663) midp_keyp_game_grid_pane_ParamLimits

0xa298,	// (0x00044663) midp_keyp_game_grid_pane

0xa2b7,	// (0x00044682) midp_keyp_rocker_pane_ParamLimits

0xa2b7,	// (0x00044682) midp_keyp_rocker_pane

0xa2f8,	// (0x000446c3) midp_keyp_sk_left_pane_ParamLimits

0xa2f8,	// (0x000446c3) midp_keyp_sk_left_pane

0xa34a,	// (0x00044715) midp_keyp_sk_right_pane_ParamLimits

0xa34a,	// (0x00044715) midp_keyp_sk_right_pane

0xacc7,	// (0x00045092) bg_button_pane_cp03

0xa396,	// (0x00044761) midp_keyp_sk_left_pane_g1

0xacc7,	// (0x00045092) bg_button_pane_cp04

0xa396,	// (0x00044761) midp_keyp_sk_right_pane_g1

0xe38c,	// (0x00048757) midp_keyp_rocker_pane_g1

0xa39f,	// (0x0004476a) keyp_game_cell_pane_ParamLimits

0xa39f,	// (0x0004476a) keyp_game_cell_pane

0xacc7,	// (0x00045092) bg_button_pane_cp02

0xa3c1,	// (0x0004478c) keyp_game_cell_pane_g1

0x7acb,	// (0x00041e96) popup_fep_vkb2_window_ParamLimits

0x7acb,	// (0x00041e96) popup_fep_vkb2_window

0xa3ca,	// (0x00044795) aid_size_cell_vkb2_ParamLimits

0xa3ca,	// (0x00044795) aid_size_cell_vkb2

0xa400,	// (0x000447cb) popup_fep_vkb2_window_g1_ParamLimits

0xa400,	// (0x000447cb) popup_fep_vkb2_window_g1

0xa450,	// (0x0004481b) vkb2_area_bottom_pane_ParamLimits

0xa450,	// (0x0004481b) vkb2_area_bottom_pane

0xa48e,	// (0x00044859) vkb2_area_keypad_pane_ParamLimits

0xa48e,	// (0x00044859) vkb2_area_keypad_pane

0xa4cc,	// (0x00044897) vkb2_area_top_pane_ParamLimits

0xa4cc,	// (0x00044897) vkb2_area_top_pane

0xa548,	// (0x00044913) vkb2_top_entry_pane_ParamLimits

0xa548,	// (0x00044913) vkb2_top_entry_pane

0xa575,	// (0x00044940) vkb2_top_grid_left_pane_ParamLimits

0xa575,	// (0x00044940) vkb2_top_grid_left_pane

0xa595,	// (0x00044960) vkb2_top_grid_right_pane_ParamLimits

0xa595,	// (0x00044960) vkb2_top_grid_right_pane

0x5f58,	// (0x00040323) vkb2_cell_keypad_pane_ParamLimits

0x5f58,	// (0x00040323) vkb2_cell_keypad_pane

0xa5db,	// (0x000449a6) vkb2_area_bottom_grid_pane_ParamLimits

0xa5db,	// (0x000449a6) vkb2_area_bottom_grid_pane

0xa601,	// (0x000449cc) vkb2_area_bottom_pane_g1_ParamLimits

0xa601,	// (0x000449cc) vkb2_area_bottom_pane_g1

0xa627,	// (0x000449f2) vkb2_area_bottom_pane_g2_ParamLimits

0xa627,	// (0x000449f2) vkb2_area_bottom_pane_g2

0xa658,	// (0x00044a23) vkb2_area_bottom_pane_g3_ParamLimits

0xa658,	// (0x00044a23) vkb2_area_bottom_pane_g3

0x0002,

0xfd8e,	// (0x0004a159) vkb2_area_bottom_pane_g_ParamLimits

0xfd8e,	// (0x0004a159) vkb2_area_bottom_pane_g

0x60d0,	// (0x0004049b) vkb2_top_cell_left_pane_ParamLimits

0x60d0,	// (0x0004049b) vkb2_top_cell_left_pane

0xa6ae,	// (0x00044a79) vkb2_top_entry_pane_g1_ParamLimits

0xa6ae,	// (0x00044a79) vkb2_top_entry_pane_g1

0xa6bc,	// (0x00044a87) vkb2_top_entry_pane_t1_ParamLimits

0xa6bc,	// (0x00044a87) vkb2_top_entry_pane_t1

0x2a58,	// (0x0003ce23) vkb2_top_entry_pane_t2_ParamLimits

0x2a58,	// (0x0003ce23) vkb2_top_entry_pane_t2

0x2a8a,	// (0x0003ce55) vkb2_top_entry_pane_t3_ParamLimits

0x2a8a,	// (0x0003ce55) vkb2_top_entry_pane_t3

0x0002,

0xfd95,	// (0x0004a160) vkb2_top_entry_pane_t_ParamLimits

0xfd95,	// (0x0004a160) vkb2_top_entry_pane_t

0xa6f5,	// (0x00044ac0) vkb2_top_grid_right_pane_g1_ParamLimits

0xa6f5,	// (0x00044ac0) vkb2_top_grid_right_pane_g1

0x6173,	// (0x0004053e) vkb2_top_grid_right_pane_g2_ParamLimits

0x6173,	// (0x0004053e) vkb2_top_grid_right_pane_g2

0x618b,	// (0x00040556) vkb2_top_grid_right_pane_g3_ParamLimits

0x618b,	// (0x00040556) vkb2_top_grid_right_pane_g3

0xa70b,	// (0x00044ad6) vkb2_top_grid_right_pane_g4_ParamLimits

0xa70b,	// (0x00044ad6) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9c,	// (0x0004a167) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9c,	// (0x0004a167) vkb2_top_grid_right_pane_g

0x61b9,	// (0x00040584) vkb2_top_cell_left_pane_g1

0x61d0,	// (0x0004059b) vkb2_cell_keypad_pane_g1_ParamLimits

0x61d0,	// (0x0004059b) vkb2_cell_keypad_pane_g1

0x2acc,	// (0x0003ce97) vkb2_cell_keypad_pane_t1_ParamLimits

0x2acc,	// (0x0003ce97) vkb2_cell_keypad_pane_t1

0x61de,	// (0x000405a9) vkb2_cell_bottom_grid_pane_ParamLimits

0x61de,	// (0x000405a9) vkb2_cell_bottom_grid_pane

0x6217,	// (0x000405e2) vkb2_cell_bottom_grid_pane_g1

0xa0ad,	// (0x00044478) aid_call2_pane_cp02

0xa0b5,	// (0x00044480) aid_call_pane_cp02

0xa0bd,	// (0x00044488) clock_digital_number_pane_cp10

0xa0c5,	// (0x00044490) clock_digital_number_pane_cp11

0xa0cd,	// (0x00044498) clock_digital_number_pane_cp12

0xa0d5,	// (0x000444a0) clock_digital_number_pane_cp13

0xa0dd,	// (0x000444a8) clock_digital_separator_pane_cp10

0xb8e6,	// (0x00045cb1) popup_clock_digital_analogue_window_cp2_g1

0xb8e6,	// (0x00045cb1) popup_clock_digital_analogue_window_cp2_g2

0xa0e5,	// (0x000444b0) popup_clock_digital_analogue_window_cp2_g3

0xb8e6,	// (0x00045cb1) popup_clock_digital_analogue_window_cp2_g4

0xa0e5,	// (0x000444b0) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd51,	// (0x0004a11c) popup_clock_digital_analogue_window_cp2_g

0xa0ed,	// (0x000444b8) popup_clock_digital_analogue_window_cp2_t1

0xa0fb,	// (0x000444c6) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5c,	// (0x0004a127) popup_clock_digital_analogue_window_cp2_t

0xe38c,	// (0x00048757) clock_digital_number_pane_cp10_g1

0xe38c,	// (0x00048757) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x00049f0a) clock_digital_number_pane_cp10_g

0xe38c,	// (0x00048757) clock_digital_separator_pane_cp10_g1

0xe38c,	// (0x00048757) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x00049f0a) clock_digital_separator_pane_cp10_g

0xf506,	// (0x000498d1) uniindi_top_pane_g3

0xf517,	// (0x000498e2) uniindi_top_pane_g4

0x5fc3,	// (0x0004038e) vkb2_row_keypad_pane_ParamLimits

0x5fc3,	// (0x0004038e) vkb2_row_keypad_pane

0x6233,	// (0x000405fe) vkb2_cell_t_keypad_pane_ParamLimits

0x6233,	// (0x000405fe) vkb2_cell_t_keypad_pane

0x6240,	// (0x0004060b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6240,	// (0x0004060b) vkb2_cell_t_keypad_pane_cp08

0x6250,	// (0x0004061b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6250,	// (0x0004061b) vkb2_cell_t_keypad_pane_cp09

0x6261,	// (0x0004062c) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6261,	// (0x0004062c) vkb2_cell_t_keypad_pane_cp01

0x6271,	// (0x0004063c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6271,	// (0x0004063c) vkb2_cell_t_keypad_pane_cp02

0x6281,	// (0x0004064c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6281,	// (0x0004064c) vkb2_cell_t_keypad_pane_cp03

0x6291,	// (0x0004065c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6291,	// (0x0004065c) vkb2_cell_t_keypad_pane_cp04

0x62a1,	// (0x0004066c) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x62a1,	// (0x0004066c) vkb2_cell_t_keypad_pane_cp05

0x62b1,	// (0x0004067c) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x62b1,	// (0x0004067c) vkb2_cell_t_keypad_pane_cp06

0x62c1,	// (0x0004068c) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x62c1,	// (0x0004068c) vkb2_cell_t_keypad_pane_cp07

0x62d1,	// (0x0004069c) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x62d1,	// (0x0004069c) vkb2_cell_t_keypad_pane_cp10

0x5ab1,	// (0x0003fe7c) vkb2_cell_t_keypad_pane_g1

0x2ae3,	// (0x0003ceae) vkb2_cell_t_keypad_pane_t1

0x470c,	// (0x0003ead7) popup_grid_graphic2_window

0xa721,	// (0x00044aec) aid_size_cell_graphic2_ParamLimits

0xa721,	// (0x00044aec) aid_size_cell_graphic2

0xa75f,	// (0x00044b2a) bg_popup_window_pane_cp21_ParamLimits

0xa75f,	// (0x00044b2a) bg_popup_window_pane_cp21

0xa76d,	// (0x00044b38) graphic2_pages_pane_ParamLimits

0xa76d,	// (0x00044b38) graphic2_pages_pane

0xa7b6,	// (0x00044b81) grid_graphic2_control_pane_ParamLimits

0xa7b6,	// (0x00044b81) grid_graphic2_control_pane

0xa7f4,	// (0x00044bbf) grid_graphic2_pane_ParamLimits

0xa7f4,	// (0x00044bbf) grid_graphic2_pane

0xa863,	// (0x00044c2e) cell_graphic2_pane

0x470c,	// (0x0003ead7) main_comp_mode_pane

0xf182,	// (0x0004954d) list_ai3_gene_pane_ParamLimits

0x9d99,	// (0x00044164) bg_popup_window_pane_cp19_ParamLimits

0xf2f2,	// (0x000496bd) bg_touch_area_indi_pane_ParamLimits

0xf2f2,	// (0x000496bd) bg_touch_area_indi_pane

0xf308,	// (0x000496d3) bg_touch_area_indi_pane_cp01_ParamLimits

0xf308,	// (0x000496d3) bg_touch_area_indi_pane_cp01

0xf31e,	// (0x000496e9) bg_touch_area_indi_pane_cp02_ParamLimits

0xf31e,	// (0x000496e9) bg_touch_area_indi_pane_cp02

0xf334,	// (0x000496ff) bg_touch_area_indi_pane_cp03_ParamLimits

0xf334,	// (0x000496ff) bg_touch_area_indi_pane_cp03

0xf34a,	// (0x00049715) popup_slider_window_g1_ParamLimits

0xf366,	// (0x00049731) popup_slider_window_g2_ParamLimits

0xf382,	// (0x0004974d) popup_slider_window_g3_ParamLimits

0xfce6,	// (0x0004a0b1) popup_slider_window_g_ParamLimits

0xf39e,	// (0x00049769) popup_slider_window_t1_ParamLimits

0xf3e2,	// (0x000497ad) small_volume_slider_vertical_pane_ParamLimits

0xa863,	// (0x00044c2e) cell_graphic2_pane_ParamLimits

0xa8ae,	// (0x00044c79) bg_button_pane_cp10_ParamLimits

0xa8ae,	// (0x00044c79) bg_button_pane_cp10

0xa8bf,	// (0x00044c8a) bg_button_pane_cp11_ParamLimits

0xa8bf,	// (0x00044c8a) bg_button_pane_cp11

0xa8d0,	// (0x00044c9b) graphic2_pages_pane_g1_ParamLimits

0xa8d0,	// (0x00044c9b) graphic2_pages_pane_g1

0xa8eb,	// (0x00044cb6) graphic2_pages_pane_g2_ParamLimits

0xa8eb,	// (0x00044cb6) graphic2_pages_pane_g2

0x0001,

0xfdaa,	// (0x0004a175) graphic2_pages_pane_g_ParamLimits

0xfdaa,	// (0x0004a175) graphic2_pages_pane_g

0xa903,	// (0x00044cce) graphic2_pages_pane_t1_ParamLimits

0xa903,	// (0x00044cce) graphic2_pages_pane_t1

0xa91b,	// (0x00044ce6) cell_graphic2_control_pane_ParamLimits

0xa91b,	// (0x00044ce6) cell_graphic2_control_pane

0xa945,	// (0x00044d10) cell_graphic2_pane_g1_ParamLimits

0xa945,	// (0x00044d10) cell_graphic2_pane_g1

0x3c48,	// (0x0003e013) cell_graphic2_pane_g2_ParamLimits

0x3c48,	// (0x0003e013) cell_graphic2_pane_g2

0x7019,	// (0x000413e4) cell_graphic2_pane_g3_ParamLimits

0x7019,	// (0x000413e4) cell_graphic2_pane_g3

0x3c55,	// (0x0003e020) cell_graphic2_pane_g4_ParamLimits

0x3c55,	// (0x0003e020) cell_graphic2_pane_g4

0xa952,	// (0x00044d1d) cell_graphic2_pane_g5_ParamLimits

0xa952,	// (0x00044d1d) cell_graphic2_pane_g5

0x0004,

0xfdaf,	// (0x0004a17a) cell_graphic2_pane_g_ParamLimits

0xfdaf,	// (0x0004a17a) cell_graphic2_pane_g

0xa972,	// (0x00044d3d) cell_graphic2_pane_t1_ParamLimits

0xa972,	// (0x00044d3d) cell_graphic2_pane_t1

0xd19d,	// (0x00047568) grid_highlight_pane_cp11_ParamLimits

0xd19d,	// (0x00047568) grid_highlight_pane_cp11

0xaeea,	// (0x000452b5) bg_button_pane_cp05

0xa9a7,	// (0x00044d72) cell_graphic2_control_pane_g1

0xe38c,	// (0x00048757) bg_touch_area_indi_pane_g1

0x2af5,	// (0x0003cec0) aid_cmod_rocker_key_size

0x2aff,	// (0x0003ceca) aid_cmode_itu_key_size

0x2b09,	// (0x0003ced4) main_cmode_video_pane

0x2b11,	// (0x0003cedc) main_comp_mode_itu_pane

0x2b1b,	// (0x0003cee6) main_comp_mode_rocker_pane

0x2b23,	// (0x0003ceee) cell_cmode_rocker_pane_ParamLimits

0x2b23,	// (0x0003ceee) cell_cmode_rocker_pane

0x2b35,	// (0x0003cf00) cell_cmode_itu_pane_ParamLimits

0x2b35,	// (0x0003cf00) cell_cmode_itu_pane

0xb3d4,	// (0x0004579f) bg_button_pane_cp06_ParamLimits

0xb3d4,	// (0x0004579f) bg_button_pane_cp06

0xe5b8,	// (0x00048983) cell_cmode_rocker_pane_g1_ParamLimits

0xe5b8,	// (0x00048983) cell_cmode_rocker_pane_g1

0xf419,	// (0x000497e4) cell_cmode_rocker_pane_g2_ParamLimits

0xf419,	// (0x000497e4) cell_cmode_rocker_pane_g2

0x0001,

0xfdbf,	// (0x0004a18a) cell_cmode_rocker_pane_g_ParamLimits

0xfdbf,	// (0x0004a18a) cell_cmode_rocker_pane_g

0xacc7,	// (0x00045092) bg_button_pane_cp07

0x2b4a,	// (0x0003cf15) cell_cmode_itu_pane_g1

0x2b53,	// (0x0003cf1e) cell_cmode_itu_pane_t1

0x2b61,	// (0x0003cf2c) cell_cmode_itu_pane_t2

0x0001,

0xfdc4,	// (0x0004a18f) cell_cmode_itu_pane_t

0x01d4,	// (0x0003a59f) aid_touch_ctrl_left

0x01dc,	// (0x0003a5a7) aid_touch_ctrl_right

0xacc7,	// (0x00045092) compa_mode_pane

0xa9cf,	// (0x00044d9a) aid_cmod_rocker_key_size_cp

0xa9d9,	// (0x00044da4) aid_cmode_itu_key_size_cp

0x2b6f,	// (0x0003cf3a) compa_mode_pane_g1

0x2b77,	// (0x0003cf42) compa_mode_pane_g2

0x2b7f,	// (0x0003cf4a) compa_mode_pane_g3

0x0002,

0xfdc9,	// (0x0004a194) compa_mode_pane_g

0xa9e3,	// (0x00044dae) main_comp_mode_itu_pane_cp

0xa9ed,	// (0x00044db8) main_comp_mode_rocker_pane_cp

0xa9f7,	// (0x00044dc2) cell_cmode_itu_pane_cp_ParamLimits

0xa9f7,	// (0x00044dc2) cell_cmode_itu_pane_cp

0xaa0c,	// (0x00044dd7) cell_cmode_rocker_pane_cp_ParamLimits

0xaa0c,	// (0x00044dd7) cell_cmode_rocker_pane_cp

0xb3d4,	// (0x0004579f) bg_button_pane_cp06_cp_ParamLimits

0xb3d4,	// (0x0004579f) bg_button_pane_cp06_cp

0xe5b8,	// (0x00048983) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xe5b8,	// (0x00048983) cell_cmode_rocker_pane_g1_cp

0xe38c,	// (0x00048757) cell_cmode_rocker_pane_g2_cp

0xacc7,	// (0x00045092) bg_button_pane_cp07_cp

0xaa1e,	// (0x00044de9) cell_cmode_itu_pane_g1_cp

0xaa27,	// (0x00044df2) cell_cmode_itu_pane_t1_cp

0xaa35,	// (0x00044e00) cell_cmode_itu_pane_t2_cp

0x94e9,	// (0x000438b4) settings_code_pane_cp2

0xadb7,	// (0x00045182) bg_popup_window_pane_cp3_ParamLimits

0xb0e8,	// (0x000454b3) heading_pane_cp3_ParamLimits

0xb0f4,	// (0x000454bf) listscroll_popup_graphic_pane_ParamLimits

0x586c,	// (0x0003fc37) fep_hwr_aid_pane_ParamLimits

0x5ccc,	// (0x00040097) aid_touch_sctrl_top_ParamLimits

0x5ce7,	// (0x000400b2) sctrl_sk_top_pane_g1_ParamLimits

0x5ab1,	// (0x0003fe7c) sctrl_sk_top_pane_g2_ParamLimits

0xfcff,	// (0x0004a0ca) sctrl_sk_top_pane_g_ParamLimits

0x5cf4,	// (0x000400bf) sctrl_sk_top_pane_t1_ParamLimits

0x5ccc,	// (0x00040097) aid_touch_sctrl_bottom_ParamLimits

0x5cf4,	// (0x000400bf) sctrl_sk_bottom_pane_t1_ParamLimits

0xf4d2,	// (0x0004989d) aid_area_touch_clock

0xa50a,	// (0x000448d5) aid_vkb2_area_top_pane_cell_ParamLimits

0xa50a,	// (0x000448d5) aid_vkb2_area_top_pane_cell

0xa5b5,	// (0x00044980) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa5b5,	// (0x00044980) aid_vkb2_area_bottom_pane_cell

0x2a50,	// (0x0003ce1b) popup_char_count_window

0x2b87,	// (0x0003cf52) popup_char_count_window_g1

0x2b90,	// (0x0003cf5b) popup_char_count_window_g2

0x2b99,	// (0x0003cf64) popup_char_count_window_g3

0x0002,

0xfdd0,	// (0x0004a19b) popup_char_count_window_g

0x2ba2,	// (0x0003cf6d) popup_char_count_window_t1

0x5da8,	// (0x00040173) popup_fep_char_preview_window_ParamLimits

0x5da8,	// (0x00040173) popup_fep_char_preview_window

0xa52a,	// (0x000448f5) vkb2_top_candi_pane_ParamLimits

0xa52a,	// (0x000448f5) vkb2_top_candi_pane

0xaa43,	// (0x00044e0e) cell_vkb2_top_candi_pane_ParamLimits

0xaa43,	// (0x00044e0e) cell_vkb2_top_candi_pane

0x6601,	// (0x000409cc) bg_popup_fep_char_preview_window_ParamLimits

0x6601,	// (0x000409cc) bg_popup_fep_char_preview_window

0x660f,	// (0x000409da) popup_fep_char_preview_window_t1_ParamLimits

0x660f,	// (0x000409da) popup_fep_char_preview_window_t1

0x2bc0,	// (0x0003cf8b) bg_popup_fep_char_preview_window_g1

0x2bb8,	// (0x0003cf83) bg_popup_fep_char_preview_window_g2

0x2bb0,	// (0x0003cf7b) bg_popup_fep_char_preview_window_g3

0x2be0,	// (0x0003cfab) bg_popup_fep_char_preview_window_g4

0x2bd8,	// (0x0003cfa3) bg_popup_fep_char_preview_window_g5

0x6649,	// (0x00040a14) bg_popup_fep_char_preview_window_g6

0x2bd0,	// (0x0003cf9b) bg_popup_fep_char_preview_window_g7

0x2bc8,	// (0x0003cf93) bg_popup_fep_char_preview_window_g8

0x2be8,	// (0x0003cfb3) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd7,	// (0x0004a1a2) bg_popup_fep_char_preview_window_g

0x5ab1,	// (0x0003fe7c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5ab1,	// (0x0003fe7c) cell_vkb2_top_candi_pane_g1

0x5abf,	// (0x0003fe8a) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5abf,	// (0x0003fe8a) cell_vkb2_top_candi_pane_g2

0x2bf0,	// (0x0003cfbb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x2bf0,	// (0x0003cfbb) cell_vkb2_top_candi_pane_g3

0x6651,	// (0x00040a1c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6651,	// (0x00040a1c) cell_vkb2_top_candi_pane_g4

0xe98e,	// (0x00048d59) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe98e,	// (0x00048d59) cell_vkb2_top_candi_pane_g5

0x6672,	// (0x00040a3d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6672,	// (0x00040a3d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdea,	// (0x0004a1b5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdea,	// (0x0004a1b5) cell_vkb2_top_candi_pane_g

0x6680,	// (0x00040a4b) cell_vkb2_top_candi_pane_t1

0x5684,	// (0x0003fa4f) aid_size_touch_slider_mark_ParamLimits

0x5684,	// (0x0003fa4f) aid_size_touch_slider_mark

0xa7a1,	// (0x00044b6c) grid_graphic2_catg_pane_ParamLimits

0xa7a1,	// (0x00044b6c) grid_graphic2_catg_pane

0xa838,	// (0x00044c03) popup_grid_graphic2_window_t1_ParamLimits

0xa838,	// (0x00044c03) popup_grid_graphic2_window_t1

0xa84d,	// (0x00044c18) popup_grid_graphic2_window_t2_ParamLimits

0xa84d,	// (0x00044c18) popup_grid_graphic2_window_t2

0x0001,

0xfda5,	// (0x0004a170) popup_grid_graphic2_window_t_ParamLimits

0xfda5,	// (0x0004a170) popup_grid_graphic2_window_t

0xaeea,	// (0x000452b5) bg_button_pane_cp05_ParamLimits

0xa9a7,	// (0x00044d72) cell_graphic2_control_pane_g1_ParamLimits

0x019a,	// (0x0003a565) cell_graphic2_catg_pane_ParamLimits

0x019a,	// (0x0003a565) cell_graphic2_catg_pane

0xacc7,	// (0x00045092) bg_button_pane_cp12

0xaa8d,	// (0x00044e58) cell_graphic2_catg_pane_g1

0xf49e,	// (0x00049869) cell_tb_ext_pane_t1_ParamLimits

0x6130,	// (0x000404fb) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6130,	// (0x000404fb) vkb2_top_cell_right_narrow_pane

0x6148,	// (0x00040513) vkb2_top_cell_right_wide_pane_ParamLimits

0x6148,	// (0x00040513) vkb2_top_cell_right_wide_pane

0x585e,	// (0x0003fc29) bg_vkb2_func_pane_ParamLimits

0x585e,	// (0x0003fc29) bg_vkb2_func_pane

0x61b9,	// (0x00040584) vkb2_top_cell_left_pane_g1_ParamLimits

0x585e,	// (0x0003fc29) bg_vkb2_fuc_pane_cp03_ParamLimits

0x585e,	// (0x0003fc29) bg_vkb2_fuc_pane_cp03

0x6217,	// (0x000405e2) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xc5fd,	// (0x000469c8) bg_vkb2_func_pane_g1

0xc605,	// (0x000469d0) bg_vkb2_func_pane_g2

0xc615,	// (0x000469e0) bg_vkb2_func_pane_g3

0xc60d,	// (0x000469d8) bg_vkb2_func_pane_g4

0xc61d,	// (0x000469e8) bg_vkb2_func_pane_g5

0xc625,	// (0x000469f0) bg_vkb2_func_pane_g6

0xc62d,	// (0x000469f8) bg_vkb2_func_pane_g7

0xc635,	// (0x00046a00) bg_vkb2_func_pane_g8

0xc5f5,	// (0x000469c0) bg_vkb2_func_pane_g9

0x0008,

0xfdf7,	// (0x0004a1c2) bg_vkb2_func_pane_g

0x585e,	// (0x0003fc29) bg_vkb2_fuc_pane_cp01_ParamLimits

0x585e,	// (0x0003fc29) bg_vkb2_fuc_pane_cp01

0x61b9,	// (0x00040584) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x61b9,	// (0x00040584) vkb2_top_cell_right_wide_pane_g1

0x585e,	// (0x0003fc29) bg_vkb2_fuc_pane_cp02_ParamLimits

0x585e,	// (0x0003fc29) bg_vkb2_fuc_pane_cp02

0x6217,	// (0x000405e2) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6217,	// (0x000405e2) vkb2_top_cell_right_narrow_pane_g1

0x9ce7,	// (0x000440b2) aid_touch_area_decrease_ParamLimits

0x9ce7,	// (0x000440b2) aid_touch_area_decrease

0x9d15,	// (0x000440e0) aid_touch_area_increase_ParamLimits

0x9d15,	// (0x000440e0) aid_touch_area_increase

0x9d3d,	// (0x00044108) aid_touch_area_mute_ParamLimits

0x9d3d,	// (0x00044108) aid_touch_area_mute

0x9d65,	// (0x00044130) aid_touch_area_slider_ParamLimits

0x9d65,	// (0x00044130) aid_touch_area_slider

0x9da5,	// (0x00044170) popup_slider_window_g4_ParamLimits

0x9da5,	// (0x00044170) popup_slider_window_g4

0x9dcd,	// (0x00044198) popup_slider_window_g5_ParamLimits

0x9dcd,	// (0x00044198) popup_slider_window_g5

0x9e01,	// (0x000441cc) popup_slider_window_g6_ParamLimits

0x9e01,	// (0x000441cc) popup_slider_window_g6

0xf3ca,	// (0x00049795) popup_slider_window_t2_ParamLimits

0xf3ca,	// (0x00049795) popup_slider_window_t2

0x0001,

0xfcf3,	// (0x0004a0be) popup_slider_window_t_ParamLimits

0xfcf3,	// (0x0004a0be) popup_slider_window_t

0x9e1d,	// (0x000441e8) slider_pane_ParamLimits

0x9e1d,	// (0x000441e8) slider_pane

0x2c11,	// (0x0003cfdc) slider_pane_g1_ParamLimits

0x2c11,	// (0x0003cfdc) slider_pane_g1

0x2c25,	// (0x0003cff0) slider_pane_g2_ParamLimits

0x2c25,	// (0x0003cff0) slider_pane_g2

0x2c3b,	// (0x0003d006) slider_pane_g3_ParamLimits

0x2c3b,	// (0x0003d006) slider_pane_g3

0x0003,

0xfe0a,	// (0x0004a1d5) slider_pane_g_ParamLimits

0xfe0a,	// (0x0004a1d5) slider_pane_g

0x8b4f,	// (0x00042f1a) popup_tb_float_extension_window_ParamLimits

0x8b4f,	// (0x00042f1a) popup_tb_float_extension_window

0x2c67,	// (0x0003d032) aid_size_cell_tb_float_ext

0xacc7,	// (0x00045092) bg_popup_sub_window_cp28

0x2c72,	// (0x0003d03d) grid_tb_float_ext_pane

0x2c7a,	// (0x0003d045) cell_tb_float_ext_pane_ParamLimits

0x2c7a,	// (0x0003d045) cell_tb_float_ext_pane

0x2c92,	// (0x0003d05d) cell_tb_float_ext_pane_g1

0x2c9b,	// (0x0003d066) grid_highlight_pane_cp12

0x9853,	// (0x00043c1e) cell_last_hwr_side_pane_ParamLimits

0x9853,	// (0x00043c1e) cell_last_hwr_side_pane

0xe38c,	// (0x00048757) cell_last_hwr_side_pane_g1

0x2ca4,	// (0x0003d06f) cell_last_hwr_side_pane_g2

0x0001,

0xfe13,	// (0x0004a1de) cell_last_hwr_side_pane_g

0xa689,	// (0x00044a54) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa689,	// (0x00044a54) vkb2_area_bottom_space_btn_pane

0x5ab1,	// (0x0003fe7c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2ae3,	// (0x0003ceae) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6680,	// (0x00040a4b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x66b1,	// (0x00040a7c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x66b1,	// (0x00040a7c) vkb2_area_bottom_space_btn_pane_g1

0x66e7,	// (0x00040ab2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x66e7,	// (0x00040ab2) vkb2_area_bottom_space_btn_pane_g2

0x671d,	// (0x00040ae8) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x671d,	// (0x00040ae8) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe18,	// (0x0004a1e3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe18,	// (0x0004a1e3) vkb2_area_bottom_space_btn_pane_g

0x591b,	// (0x0003fce6) cel_fep_hwr_func_pane_ParamLimits

0x591b,	// (0x0003fce6) cel_fep_hwr_func_pane

0x9828,	// (0x00043bf3) cell_hwr_side_button_pane_ParamLimits

0x9828,	// (0x00043bf3) cell_hwr_side_button_pane

0xf4d2,	// (0x0004989d) aid_area_touch_clock_ParamLimits

0xaeea,	// (0x000452b5) bg_uniindi_top_pane_ParamLimits

0xf4e4,	// (0x000498af) uniindi_top_pane_g1_ParamLimits

0xf4fa,	// (0x000498c5) uniindi_top_pane_g2_ParamLimits

0xf506,	// (0x000498d1) uniindi_top_pane_g3_ParamLimits

0xf517,	// (0x000498e2) uniindi_top_pane_g4_ParamLimits

0xfd2b,	// (0x0004a0f6) uniindi_top_pane_g_ParamLimits

0xf524,	// (0x000498ef) uniindi_top_pane_t1_ParamLimits

0xaeea,	// (0x000452b5) bg_vkb2_func_pane_cp01_ParamLimits

0xaeea,	// (0x000452b5) bg_vkb2_func_pane_cp01

0x2cad,	// (0x0003d078) cel_fep_hwr_func_pane_g1_ParamLimits

0x2cad,	// (0x0003d078) cel_fep_hwr_func_pane_g1

0xaeea,	// (0x000452b5) bg_vkb2_func_pane_cp02_ParamLimits

0xaeea,	// (0x000452b5) bg_vkb2_func_pane_cp02

0x2cad,	// (0x0003d078) cell_hwr_side_button_pane_g1_ParamLimits

0x2cad,	// (0x0003d078) cell_hwr_side_button_pane_g1

0xc519,	// (0x000468e4) status_pane_g4_ParamLimits

0xc519,	// (0x000468e4) status_pane_g4

0xc531,	// (0x000468fc) status_pane_t1

0xe192,	// (0x0004855d) form2_midp_gauge_slider_cont_pane

0xe19a,	// (0x00048565) form2_midp_gauge_slider_pane_t1_ParamLimits

0x9804,	// (0x00043bcf) form2_midp_gauge_slider_pane_t2_ParamLimits

0x9816,	// (0x00043be1) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x00049ebd) form2_midp_gauge_slider_pane_t_ParamLimits

0xe1ac,	// (0x00048577) form2_midp_slider_pane_ParamLimits

0x5d68,	// (0x00040133) aid_size_cell_func_vkb2_ParamLimits

0x5d68,	// (0x00040133) aid_size_cell_func_vkb2

0x2c53,	// (0x0003d01e) slider_pane_g4_ParamLimits

0x2c53,	// (0x0003d01e) slider_pane_g4

0xaa96,	// (0x00044e61) form2_midp_gauge_slider_pane_t2_cp01

0xaaa4,	// (0x00044e6f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xaaa4,	// (0x00044e6f) form2_midp_gauge_slider_pane_t3_cp01

0x678e,	// (0x00040b59) form2_midp_slider_pane_cp01

0xacc7,	// (0x00045092) navi_smil_pane

0x2d08,	// (0x0003d0d3) navi_smil_pane_g1

0x2d10,	// (0x0003d0db) navi_smil_pane_t1

0x2ce6,	// (0x0003d0b1) form2_midp_slider_pane_g1

0x2cef,	// (0x0003d0ba) form2_midp_slider_pane_g2

0x2cf7,	// (0x0003d0c2) form2_midp_slider_pane_g3

0x2ce6,	// (0x0003d0b1) form2_midp_slider_pane_g4

0xaac1,	// (0x00044e8c) form2_midp_slider_pane_g5

0x0004,

0xfe21,	// (0x0004a1ec) form2_midp_slider_pane_g

0x6753,	// (0x00040b1e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6753,	// (0x00040b1e) vkb2_area_bottom_space_btn_pane_g4

0x8cf1,	// (0x000430bc) lc0_navi_pane_ParamLimits

0x8cf1,	// (0x000430bc) lc0_navi_pane

0x8d5b,	// (0x00043126) lc0_stat_indi_pane_ParamLimits

0x8d5b,	// (0x00043126) lc0_stat_indi_pane

0x8d70,	// (0x0004313b) ls0_title_pane_ParamLimits

0x8d70,	// (0x0004313b) ls0_title_pane

0xb3d4,	// (0x0004579f) bg_popup_sub_pane_cp14_ParamLimits

0xf4b9,	// (0x00049884) list_uniindi_pane_ParamLimits

0xf4c5,	// (0x00049890) uniindi_top_pane_ParamLimits

0x01ac,	// (0x0003a577) list_single_uniindi_pane_g1_ParamLimits

0x01bf,	// (0x0003a58a) list_single_uniindi_pane_t1_ParamLimits

0xaaca,	// (0x00044e95) lc0_stat_clock_pane_ParamLimits

0xaaca,	// (0x00044e95) lc0_stat_clock_pane

0x2d38,	// (0x0003d103) lc0_stat_indi_pane_g1_ParamLimits

0x2d38,	// (0x0003d103) lc0_stat_indi_pane_g1

0x2d2b,	// (0x0003d0f6) lc0_stat_indi_pane_g2_ParamLimits

0x2d2b,	// (0x0003d0f6) lc0_stat_indi_pane_g2

0x0001,

0xfe2c,	// (0x0004a1f7) lc0_stat_indi_pane_g_ParamLimits

0xfe2c,	// (0x0004a1f7) lc0_stat_indi_pane_g

0xaad7,	// (0x00044ea2) lc0_uni_indicator_pane_ParamLimits

0xaad7,	// (0x00044ea2) lc0_uni_indicator_pane

0x2d52,	// (0x0003d11d) ls0_title_pane_g1_ParamLimits

0x2d52,	// (0x0003d11d) ls0_title_pane_g1

0x2d66,	// (0x0003d131) ls0_title_pane_t1_ParamLimits

0x2d66,	// (0x0003d131) ls0_title_pane_t1

0xaae4,	// (0x00044eaf) lc0_uni_indicator_pane_g1_ParamLimits

0xaae4,	// (0x00044eaf) lc0_uni_indicator_pane_g1

0x2da9,	// (0x0003d174) lc0_stat_clock_pane_t1

0x470c,	// (0x0003ead7) main_ai5_pane

0x2db7,	// (0x0003d182) ai5_sk_pane_ParamLimits

0x2db7,	// (0x0003d182) ai5_sk_pane

0x2dc4,	// (0x0003d18f) cell_ai5_widget_pane_ParamLimits

0x2dc4,	// (0x0003d18f) cell_ai5_widget_pane

0x2e34,	// (0x0003d1ff) aid_size_cell_widget_grid

0x2e41,	// (0x0003d20c) bg_ai5_widget_pane_ParamLimits

0x2e41,	// (0x0003d20c) bg_ai5_widget_pane

0x2e96,	// (0x0003d261) cell_ai5_widget_pane_g2

0x2eaa,	// (0x0003d275) cell_ai5_widget_pane_g3

0x2ec4,	// (0x0003d28f) cell_ai5_widget_pane_g4

0x2ed4,	// (0x0003d29f) cell_ai5_widget_pane_g5

0x2ee4,	// (0x0003d2af) cell_ai5_widget_pane_g6

0x2ef0,	// (0x0003d2bb) cell_ai5_widget_pane_g7

0x2f38,	// (0x0003d303) cell_ai5_widget_pane_t1_ParamLimits

0x2f38,	// (0x0003d303) cell_ai5_widget_pane_t1

0x2f55,	// (0x0003d320) cell_ai5_widget_pane_t2_ParamLimits

0x2f55,	// (0x0003d320) cell_ai5_widget_pane_t2

0x2f6d,	// (0x0003d338) cell_ai5_widget_pane_t3_ParamLimits

0x2f6d,	// (0x0003d338) cell_ai5_widget_pane_t3

0x2f85,	// (0x0003d350) cell_ai5_widget_pane_t4_ParamLimits

0x2f85,	// (0x0003d350) cell_ai5_widget_pane_t4

0x2fab,	// (0x0003d376) cell_ai5_widget_pane_t5_ParamLimits

0x2fab,	// (0x0003d376) cell_ai5_widget_pane_t5

0x2fca,	// (0x0003d395) cell_ai5_widget_pane_t6_ParamLimits

0x2fca,	// (0x0003d395) cell_ai5_widget_pane_t6

0x2fdc,	// (0x0003d3a7) cell_ai5_widget_pane_t7_ParamLimits

0x2fdc,	// (0x0003d3a7) cell_ai5_widget_pane_t7

0x2ff5,	// (0x0003d3c0) cell_ai5_widget_pane_t8_ParamLimits

0x2ff5,	// (0x0003d3c0) cell_ai5_widget_pane_t8

0x0009,

0xfe46,	// (0x0004a211) cell_ai5_widget_pane_t_ParamLimits

0xfe46,	// (0x0004a211) cell_ai5_widget_pane_t

0x3054,	// (0x0003d41f) grid_ai5_widget_pane

0xb3d4,	// (0x0004579f) highlight_cell_ai5_widget_pane_ParamLimits

0xb3d4,	// (0x0004579f) highlight_cell_ai5_widget_pane

0x3060,	// (0x0003d42b) ai5_sk_left_pane

0x306a,	// (0x0003d435) ai5_sk_middle_pane

0x3074,	// (0x0003d43f) ai5_sk_right_pane

0x307e,	// (0x0003d449) bg_ai5_widget_pane_g1_ParamLimits

0x307e,	// (0x0003d449) bg_ai5_widget_pane_g1

0x308a,	// (0x0003d455) bg_ai5_widget_pane_g2_ParamLimits

0x308a,	// (0x0003d455) bg_ai5_widget_pane_g2

0x3096,	// (0x0003d461) bg_ai5_widget_pane_g3_ParamLimits

0x3096,	// (0x0003d461) bg_ai5_widget_pane_g3

0x30a2,	// (0x0003d46d) bg_ai5_widget_pane_g4_ParamLimits

0x30a2,	// (0x0003d46d) bg_ai5_widget_pane_g4

0x30ae,	// (0x0003d479) bg_ai5_widget_pane_g5_ParamLimits

0x30ae,	// (0x0003d479) bg_ai5_widget_pane_g5

0x30ba,	// (0x0003d485) bg_ai5_widget_pane_g6_ParamLimits

0x30ba,	// (0x0003d485) bg_ai5_widget_pane_g6

0x30c6,	// (0x0003d491) bg_ai5_widget_pane_g7_ParamLimits

0x30c6,	// (0x0003d491) bg_ai5_widget_pane_g7

0x30d2,	// (0x0003d49d) bg_ai5_widget_pane_g8_ParamLimits

0x30d2,	// (0x0003d49d) bg_ai5_widget_pane_g8

0x30de,	// (0x0003d4a9) bg_ai5_widget_pane_g9_ParamLimits

0x30de,	// (0x0003d4a9) bg_ai5_widget_pane_g9

0x0008,

0xfe5b,	// (0x0004a226) bg_ai5_widget_pane_g_ParamLimits

0xfe5b,	// (0x0004a226) bg_ai5_widget_pane_g

0x310e,	// (0x0003d4d9) cell_shortcut_ai5_widget_pane_ParamLimits

0x310e,	// (0x0003d4d9) cell_shortcut_ai5_widget_pane

0x311f,	// (0x0003d4ea) bg_cell_shortcut_ai5_widget_pane

0xb0a4,	// (0x0004546f) cell_grid_ai5_widget_pane_g1

0xc269,	// (0x00046634) highlight_cell_shortcut_ai5_widget_pane

0xc5fd,	// (0x000469c8) ai5_sk_left_pane_g1

0x3127,	// (0x0003d4f2) ai5_sk_left_pane_g2

0x312f,	// (0x0003d4fa) ai5_sk_left_pane_g3

0x3137,	// (0x0003d502) ai5_sk_left_pane_g4

0x0003,

0xfe6e,	// (0x0004a239) ai5_sk_left_pane_g

0x313f,	// (0x0003d50a) ai5_sk_left_pane_t1

0xc605,	// (0x000469d0) ai5_sk_right_pane_g1

0x314d,	// (0x0003d518) ai5_sk_right_pane_g2

0x3155,	// (0x0003d520) ai5_sk_right_pane_g3

0x315d,	// (0x0003d528) ai5_sk_right_pane_g4

0x0003,

0xfe77,	// (0x0004a242) ai5_sk_right_pane_g

0x3165,	// (0x0003d530) ai5_sk_right_pane_t1

0xc605,	// (0x000469d0) ai5_sk_middle_pane_g1

0xc5fd,	// (0x000469c8) ai5_sk_middle_pane_g2

0xc61d,	// (0x000469e8) ai5_sk_middle_pane_g3

0x3155,	// (0x0003d520) ai5_sk_middle_pane_g4

0x312f,	// (0x0003d4fa) ai5_sk_middle_pane_g5

0x3173,	// (0x0003d53e) ai5_sk_middle_pane_g6

0x317b,	// (0x0003d546) ai5_sk_middle_pane_g7

0x0006,

0xfe80,	// (0x0004a24b) ai5_sk_middle_pane_g

0x8bef,	// (0x00042fba) aid_touch_area_size_lc0_ParamLimits

0x8bef,	// (0x00042fba) aid_touch_area_size_lc0

0x5ae0,	// (0x0003feab) cell_hwr_candidate_pane_t1_ParamLimits

0xc44e,	// (0x00046819) aid_touch_navi_pane

0x8e5c,	// (0x00043227) status_dt_navi_pane_ParamLimits

0x8e5c,	// (0x00043227) status_dt_navi_pane

0x8e74,	// (0x0004323f) status_dt_sta_pane_ParamLimits

0x8e74,	// (0x0004323f) status_dt_sta_pane

0x3183,	// (0x0003d54e) dt_sta_controll_pane

0x3190,	// (0x0003d55b) dt_sta_indi_pane

0x319d,	// (0x0003d568) dt_sta_title_pane

0xaeea,	// (0x000452b5) bg_dt_sta_indi_pane_ParamLimits

0xaeea,	// (0x000452b5) bg_dt_sta_indi_pane

0x31af,	// (0x0003d57a) dt_sta_battery_pane

0x31b7,	// (0x0003d582) dt_sta_indi_pane_g1

0x31c0,	// (0x0003d58b) dt_sta_indi_pane_g2

0x31c9,	// (0x0003d594) dt_sta_indi_pane_g3

0x0002,

0xfe8f,	// (0x0004a25a) dt_sta_indi_pane_g

0x31d2,	// (0x0003d59d) dt_sta_signal_pane

0xb3d4,	// (0x0004579f) bg_dt_sta_title_pane_ParamLimits

0xb3d4,	// (0x0004579f) bg_dt_sta_title_pane

0x31db,	// (0x0003d5a6) dt_sta_title_pane_g1

0x31e3,	// (0x0003d5ae) dt_sta_title_pane_t1_ParamLimits

0x31e3,	// (0x0003d5ae) dt_sta_title_pane_t1

0xacc7,	// (0x00045092) bg_dt_sta_control_pane

0x31f8,	// (0x0003d5c3) dt_sta_controll_pane_g1

0x3201,	// (0x0003d5cc) bg_dt_sta_title_pane_g1

0x320a,	// (0x0003d5d5) bg_dt_sta_title_pane_g2

0x3213,	// (0x0003d5de) bg_dt_sta_title_pane_g3

0x0002,

0xfe96,	// (0x0004a261) bg_dt_sta_title_pane_g

0xe38c,	// (0x00048757) bg_dt_sta_indi_pane_g1

0x321c,	// (0x0003d5e7) dt_sta_signal_pane_g1

0x3224,	// (0x0003d5ef) dt_sta_signal_pane_g2

0x0001,

0xfe9d,	// (0x0004a268) dt_sta_signal_pane_g

0x322c,	// (0x0003d5f7) dt_sta_battery_pane_g1

0x3235,	// (0x0003d600) dt_sta_battery_pane_t1

0xe38c,	// (0x00048757) bg_dt_sta_control_pane_g1

0xb948,	// (0x00045d13) fep_china_uni_eep_pane

0xb950,	// (0x00045d1b) fep_china_uni_entry_pane_ParamLimits

0xb960,	// (0x00045d2b) popup_fep_china_uni_window_g1_ParamLimits

0xb970,	// (0x00045d3b) popup_fep_china_uni_window_g2_ParamLimits

0xb970,	// (0x00045d3b) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x00049aed) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x00049aed) popup_fep_china_uni_window_g

0x3244,	// (0x0003d60f) fep_china_uni_eep_pane_g1

0x324c,	// (0x0003d617) fep_china_uni_eep_pane_t1

0x2cff,	// (0x0003d0ca) aid_touch_area_size_smil_player

0xc4ec,	// (0x000468b7) lc0_clock_pane

0xc525,	// (0x000468f0) status_pane_g5_ParamLimits

0xc525,	// (0x000468f0) status_pane_g5

0x8783,	// (0x00042b4e) popup_keymap_window

0xc505,	// (0x000468d0) status_icon_pane

0x2eaa,	// (0x0003d275) cell_ai5_widget_pane_g3_ParamLimits

0x2ec4,	// (0x0003d28f) cell_ai5_widget_pane_g4_ParamLimits

0x2ed4,	// (0x0003d29f) cell_ai5_widget_pane_g5_ParamLimits

0x2efc,	// (0x0003d2c7) cell_ai5_widget_pane_g8_ParamLimits

0x2efc,	// (0x0003d2c7) cell_ai5_widget_pane_g8

0x2f10,	// (0x0003d2db) cell_ai5_widget_pane_g9_ParamLimits

0x2f10,	// (0x0003d2db) cell_ai5_widget_pane_g9

0x2f24,	// (0x0003d2ef) cell_ai5_widget_pane_g10_ParamLimits

0x2f24,	// (0x0003d2ef) cell_ai5_widget_pane_g10

0x325b,	// (0x0003d626) status_icon_pane_g1

0xacc7,	// (0x00045092) bg_popup_sub_pane_cp13

0x3263,	// (0x0003d62e) popup_keymap_window_t1

0x84e8,	// (0x000428b3) control_pane_g6_ParamLimits

0x84e8,	// (0x000428b3) control_pane_g6

0x84f5,	// (0x000428c0) control_pane_g7_ParamLimits

0x84f5,	// (0x000428c0) control_pane_g7

0x8502,	// (0x000428cd) control_pane_g8_ParamLimits

0x8502,	// (0x000428cd) control_pane_g8

0x3183,	// (0x0003d54e) dt_sta_controll_pane_ParamLimits

0x3190,	// (0x0003d55b) dt_sta_indi_pane_ParamLimits

0x319d,	// (0x0003d568) dt_sta_title_pane_ParamLimits

0xb2a2,	// (0x0004566d) aid_size_touch_scroll_bar_cale

0x47e3,	// (0x0003ebae) popup_discreet_window_ParamLimits

0x47e3,	// (0x0003ebae) popup_discreet_window

0x7afd,	// (0x00041ec8) popup_sk_window

0xcba9,	// (0x00046f74) bg_popup_sub_pane_cp28_ParamLimits

0xcba9,	// (0x00046f74) bg_popup_sub_pane_cp28

0x3271,	// (0x0003d63c) popup_discreet_window_g1_ParamLimits

0x3271,	// (0x0003d63c) popup_discreet_window_g1

0x3291,	// (0x0003d65c) popup_discreet_window_t1_ParamLimits

0x3291,	// (0x0003d65c) popup_discreet_window_t1

0x32af,	// (0x0003d67a) popup_discreet_window_t2_ParamLimits

0x32af,	// (0x0003d67a) popup_discreet_window_t2

0x0002,

0xfea2,	// (0x0004a26d) popup_discreet_window_t_ParamLimits

0xfea2,	// (0x0004a26d) popup_discreet_window_t

0x6b22,	// (0x00040eed) popup_sk_window_g1

0x6b2b,	// (0x00040ef6) popup_sk_window_g2

0x0001,

0xfea9,	// (0x0004a274) popup_sk_window_g

0x6b34,	// (0x00040eff) popup_sk_window_t1

0x6b42,	// (0x00040f0d) popup_sk_window_t1_copy1

0x2e96,	// (0x0003d261) cell_ai5_widget_pane_g2_ParamLimits

0x3007,	// (0x0003d3d2) cell_ai5_widget_pane_t9_ParamLimits

0x3007,	// (0x0003d3d2) cell_ai5_widget_pane_t9

0xacc7,	// (0x00045092) main_fep_fshwr2_pane

0xaaf9,	// (0x00044ec4) aid_fshwr2_btn_pane

0xab0d,	// (0x00044ed8) aid_fshwr2_syb_pane

0xab21,	// (0x00044eec) aid_fshwr2_txt_pane

0xab31,	// (0x00044efc) fshwr2_func_candi_pane

0xab49,	// (0x00044f14) fshwr2_hwr_syb_pane

0xab61,	// (0x00044f2c) fshwr2_icf_pane

0x470c,	// (0x0003ead7) fshwr2_icf_bg_pane

0xab8b,	// (0x00044f56) fshwr2_icf_pane_t1_ParamLimits

0xab8b,	// (0x00044f56) fshwr2_icf_pane_t1

0xb8e6,	// (0x00045cb1) fshwr2_func_candi_pane_g1

0x33aa,	// (0x0003d775) fshwr2_func_candi_row_pane_ParamLimits

0x33aa,	// (0x0003d775) fshwr2_func_candi_row_pane

0xaba2,	// (0x00044f6d) cell_fshwr2_syb_pane_ParamLimits

0xaba2,	// (0x00044f6d) cell_fshwr2_syb_pane

0x6c22,	// (0x00040fed) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6c22,	// (0x00040fed) fshwr2_hwr_syb_pane_g1

0x470c,	// (0x0003ead7) bg_popup_call_pane_cp01

0xabc4,	// (0x00044f8f) fshwr2_func_candi_cell_pane_ParamLimits

0xabc4,	// (0x00044f8f) fshwr2_func_candi_cell_pane

0xc99b,	// (0x00046d66) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc99b,	// (0x00046d66) fshwr2_func_candi_cell_bg_pane

0xac03,	// (0x00044fce) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xac03,	// (0x00044fce) fshwr2_func_candi_cell_pane_g1

0xac3a,	// (0x00045005) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xac3a,	// (0x00045005) fshwr2_func_candi_cell_pane_t1

0x470c,	// (0x0003ead7) bg_button_pane_cp08

0xb55a,	// (0x00045925) cell_fshwr2_syb_bg_pane

0xac55,	// (0x00045020) cell_fshwr2_syb_bg_pane_g1

0xac65,	// (0x00045030) cell_fshwr2_syb_bg_pane_t1

0xb3d4,	// (0x0004579f) main_tmo_pane

0x92f8,	// (0x000436c3) uni_indicator_pane_g1_ParamLimits

0x930e,	// (0x000436d9) uni_indicator_pane_g2_ParamLimits

0x9324,	// (0x000436ef) uni_indicator_pane_g3_ParamLimits

0xd589,	// (0x00047954) uni_indicator_pane_g4_ParamLimits

0xd589,	// (0x00047954) uni_indicator_pane_g4

0xd59d,	// (0x00047968) uni_indicator_pane_g5_ParamLimits

0xd59d,	// (0x00047968) uni_indicator_pane_g5

0xd59d,	// (0x00047968) uni_indicator_pane_g6_ParamLimits

0xd59d,	// (0x00047968) uni_indicator_pane_g6

0xf91a,	// (0x00049ce5) uni_indicator_pane_g_ParamLimits

0x9ccb,	// (0x00044096) popup_tmo_note_window_ParamLimits

0x9ccb,	// (0x00044096) popup_tmo_note_window

0x5d44,	// (0x0004010f) fshwr2_bg_pane

0xac2b,	// (0x00044ff6) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xac2b,	// (0x00044ff6) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeae,	// (0x0004a279) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeae,	// (0x0004a279) fshwr2_func_candi_cell_pane_g

0x5a99,	// (0x0003fe64) bg_popup_window_pane_cp01

0x6ccc,	// (0x00041097) bg_popup_window_pane_g1_cp01

0x34a6,	// (0x0003d871) bg_popup_window_pane_cp22_ParamLimits

0x34a6,	// (0x0003d871) bg_popup_window_pane_cp22

0x34b4,	// (0x0003d87f) listscroll_tmo_link_pane_ParamLimits

0x34b4,	// (0x0003d87f) listscroll_tmo_link_pane

0x34f4,	// (0x0003d8bf) popup_tmo_note_window_g1_ParamLimits

0x34f4,	// (0x0003d8bf) popup_tmo_note_window_g1

0x3501,	// (0x0003d8cc) tmo_note_info_pane_ParamLimits

0x3501,	// (0x0003d8cc) tmo_note_info_pane

0x351b,	// (0x0003d8e6) list_tmo_note_info_pane_g1_ParamLimits

0x351b,	// (0x0003d8e6) list_tmo_note_info_pane_g1

0x3532,	// (0x0003d8fd) list_tmo_note_info_pane_g2_ParamLimits

0x3532,	// (0x0003d8fd) list_tmo_note_info_pane_g2

0x0001,

0xfeb3,	// (0x0004a27e) list_tmo_note_info_pane_g_ParamLimits

0xfeb3,	// (0x0004a27e) list_tmo_note_info_pane_g

0x354e,	// (0x0003d919) list_tmo_note_info_text_pane_ParamLimits

0x354e,	// (0x0003d919) list_tmo_note_info_text_pane

0x35cf,	// (0x0003d99a) list_tmo_link_pane

0x35dc,	// (0x0003d9a7) scroll_pane_cp20

0x35e9,	// (0x0003d9b4) list_single_tmo_link_pane_ParamLimits

0x35e9,	// (0x0003d9b4) list_single_tmo_link_pane

0x35f9,	// (0x0003d9c4) list_single_tmo_link_pane_t1

0x3607,	// (0x0003d9d2) list_tmo_note_info_text_pane_t1_ParamLimits

0x3607,	// (0x0003d9d2) list_tmo_note_info_text_pane_t1

0xb48e,	// (0x00045859) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb48e,	// (0x00045859) aid_size_touch_scroll_bar_cp01

0x1831,	// (0x0003bbfc) aid_size_touch_slider_marker

0x7af1,	// (0x00041ebc) popup_settings_window_ParamLimits

0x7af1,	// (0x00041ebc) popup_settings_window

0x8642,	// (0x00042a0d) popup_candi_list_indi_window

0xc44e,	// (0x00046819) aid_touch_navi_pane_ParamLimits

0x5ca0,	// (0x0004006b) rs_clock_indi_pane

0x5ca9,	// (0x00040074) sctrl_sk_bottom_pane_ParamLimits

0x5cba,	// (0x00040085) sctrl_sk_top_pane_ParamLimits

0x5dc2,	// (0x0004018d) popup_fep_tooltip_window

0x2e34,	// (0x0003d1ff) aid_size_cell_widget_grid_ParamLimits

0x2e82,	// (0x0003d24d) cell_ai5_widget_pane_g1_ParamLimits

0x2e82,	// (0x0003d24d) cell_ai5_widget_pane_g1

0x2ee4,	// (0x0003d2af) cell_ai5_widget_pane_g6_ParamLimits

0x2ef0,	// (0x0003d2bb) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe31,	// (0x0004a1fc) cell_ai5_widget_pane_g_ParamLimits

0xfe31,	// (0x0004a1fc) cell_ai5_widget_pane_g

0x3036,	// (0x0003d401) cell_ai5_widget_pane_t10_ParamLimits

0x3036,	// (0x0003d401) cell_ai5_widget_pane_t10

0x3054,	// (0x0003d41f) grid_ai5_widget_pane_ParamLimits

0x30ea,	// (0x0003d4b5) cell_contacts_ai5_widget_pane_ParamLimits

0x30ea,	// (0x0003d4b5) cell_contacts_ai5_widget_pane

0x32c4,	// (0x0003d68f) popup_discreet_window_t3_ParamLimits

0x32c4,	// (0x0003d68f) popup_discreet_window_t3

0xab79,	// (0x00044f44) popup_fshwr2_char_preview_window_ParamLimits

0xab79,	// (0x00044f44) popup_fshwr2_char_preview_window

0x356c,	// (0x0003d937) tmo_note_info_pane_t1

0x3581,	// (0x0003d94c) tmo_note_info_pane_t2

0x3596,	// (0x0003d961) tmo_note_info_pane_t3

0x35ab,	// (0x0003d976) tmo_note_info_pane_t4

0x35bd,	// (0x0003d988) tmo_note_info_pane_t5

0x0004,

0xfeb8,	// (0x0004a283) tmo_note_info_pane_t

0x35cf,	// (0x0003d99a) list_tmo_link_pane_ParamLimits

0x35dc,	// (0x0003d9a7) scroll_pane_cp20_ParamLimits

0x470c,	// (0x0003ead7) bg_popup_fep_char_preview_window_cp01

0x3620,	// (0x0003d9eb) popup_fshwr2_char_preview_window_t1

0x362e,	// (0x0003d9f9) popup_candi_list_indi_window_g1

0x3637,	// (0x0003da02) bg_cell_contacts_ai5_widget_pane

0x3643,	// (0x0003da0e) cell_contacts_ai5_widget_pane_g1

0x3658,	// (0x0003da23) cell_contacts_ai5_widget_pane_g2

0x3664,	// (0x0003da2f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec3,	// (0x0004a28e) cell_contacts_ai5_widget_pane_g

0x3670,	// (0x0003da3b) cell_contacts_ai5_widget_pane_t1

0xb3d4,	// (0x0004579f) highlight_cell_shortcut_ai5_widget_pane_cp01

0x36e5,	// (0x0003dab0) settings_container_pane

0xc269,	// (0x00046634) listscroll_set_pane_copy1

0xdcc8,	// (0x00048093) scroll_pane_cp121_copy1

0x36f1,	// (0x0003dabc) set_content_pane_copy1

0x36f9,	// (0x0003dac4) aid_height_set_list_copy1_ParamLimits

0x36f9,	// (0x0003dac4) aid_height_set_list_copy1

0xd736,	// (0x00047b01) aid_size_parent_copy1_ParamLimits

0xd736,	// (0x00047b01) aid_size_parent_copy1

0x3705,	// (0x0003dad0) button_value_adjust_pane_cp6_copy1_ParamLimits

0x3705,	// (0x0003dad0) button_value_adjust_pane_cp6_copy1

0xb55a,	// (0x00045925) list_highlight_pane_cp2_copy1_ParamLimits

0xb55a,	// (0x00045925) list_highlight_pane_cp2_copy1

0x3719,	// (0x0003dae4) list_set_pane_copy1_ParamLimits

0x3719,	// (0x0003dae4) list_set_pane_copy1

0x3682,	// (0x0003da4d) main_pane_set_t1_copy1_ParamLimits

0x3682,	// (0x0003da4d) main_pane_set_t1_copy1

0x36bc,	// (0x0003da87) main_pane_set_t2_copy1_ParamLimits

0x36bc,	// (0x0003da87) main_pane_set_t2_copy1

0x37a7,	// (0x0003db72) main_pane_set_t3_copy1

0x37b5,	// (0x0003db80) main_pane_set_t4_copy1

0x36d9,	// (0x0003daa4) set_content_pane_g1_copy1_ParamLimits

0x36d9,	// (0x0003daa4) set_content_pane_g1_copy1

0x37c3,	// (0x0003db8e) setting_code_pane_copy1

0x37cb,	// (0x0003db96) setting_slider_graphic_pane_copy1

0x37cb,	// (0x0003db96) setting_slider_pane_copy1

0x37cb,	// (0x0003db96) setting_text_pane_copy1

0x37cb,	// (0x0003db96) setting_volume_pane_copy1

0x37d3,	// (0x0003db9e) settings_code_pane_cp2_copy1

0x37db,	// (0x0003dba6) settings_code_pane_cp_copy1_ParamLimits

0x37db,	// (0x0003dba6) settings_code_pane_cp_copy1

0xac7b,	// (0x00045046) volume_set_pane_copy1

0x37f7,	// (0x0003dbc2) volume_set_pane_g10_copy1

0x37ff,	// (0x0003dbca) volume_set_pane_g1_copy1

0x3807,	// (0x0003dbd2) volume_set_pane_g2_copy1

0x380f,	// (0x0003dbda) volume_set_pane_g3_copy1

0x3817,	// (0x0003dbe2) volume_set_pane_g4_copy1

0x381f,	// (0x0003dbea) volume_set_pane_g5_copy1

0x3827,	// (0x0003dbf2) volume_set_pane_g6_copy1

0x382f,	// (0x0003dbfa) volume_set_pane_g7_copy1

0x3837,	// (0x0003dc02) volume_set_pane_g8_copy1

0x383f,	// (0x0003dc0a) volume_set_pane_g9_copy1

0xadb7,	// (0x00045182) bg_set_opt_pane_cp_copy1_ParamLimits

0xadb7,	// (0x00045182) bg_set_opt_pane_cp_copy1

0x491d,	// (0x0003ece8) setting_slider_pane_t1_copy1_ParamLimits

0x491d,	// (0x0003ece8) setting_slider_pane_t1_copy1

0x6e80,	// (0x0004124b) setting_slider_pane_t2_copy1_ParamLimits

0x6e80,	// (0x0004124b) setting_slider_pane_t2_copy1

0x6e99,	// (0x00041264) setting_slider_pane_t3_copy1_ParamLimits

0x6e99,	// (0x00041264) setting_slider_pane_t3_copy1

0x4963,	// (0x0003ed2e) slider_set_pane_copy1_ParamLimits

0x4963,	// (0x0003ed2e) slider_set_pane_copy1

0xb42f,	// (0x000457fa) set_opt_bg_pane_g1_copy2

0xb437,	// (0x00045802) set_opt_bg_pane_g2_copy2

0x3847,	// (0x0003dc12) set_opt_bg_pane_g3_copy2

0xb447,	// (0x00045812) set_opt_bg_pane_g4_copy2

0xb44f,	// (0x0004581a) set_opt_bg_pane_g5_copy2

0xb457,	// (0x00045822) set_opt_bg_pane_g6_copy2

0x384f,	// (0x0003dc1a) set_opt_bg_pane_g7_copy2

0x3857,	// (0x0003dc22) set_opt_bg_pane_g8_copy2

0x385f,	// (0x0003dc2a) set_opt_bg_pane_g9_copy2

0x5684,	// (0x0003fa4f) aid_size_touch_slider_mark_copy1_ParamLimits

0x5684,	// (0x0003fa4f) aid_size_touch_slider_mark_copy1

0xd748,	// (0x00047b13) slider_set_pane_g1_copy1

0xd76a,	// (0x00047b35) slider_set_pane_g2_copy1

0x56a4,	// (0x0003fa6f) slider_set_pane_g3_copy1_ParamLimits

0x56a4,	// (0x0003fa6f) slider_set_pane_g3_copy1

0x56b8,	// (0x0003fa83) slider_set_pane_g4_copy1_ParamLimits

0x56b8,	// (0x0003fa83) slider_set_pane_g4_copy1

0x56d0,	// (0x0003fa9b) slider_set_pane_g5_copy1_ParamLimits

0x56d0,	// (0x0003fa9b) slider_set_pane_g5_copy1

0x56a4,	// (0x0003fa6f) slider_set_pane_g6_copy1_ParamLimits

0x56a4,	// (0x0003fa6f) slider_set_pane_g6_copy1

0xac83,	// (0x0004504e) slider_set_pane_g7_copy1_ParamLimits

0xac83,	// (0x0004504e) slider_set_pane_g7_copy1

0xad53,	// (0x0004511e) bg_set_opt_pane_cp2_copy1

0xadc5,	// (0x00045190) setting_slider_graphic_pane_g1_copy1

0xac99,	// (0x00045064) setting_slider_graphic_pane_t1_copy1

0xaca8,	// (0x00045073) setting_slider_graphic_pane_t2_copy1

0xacb7,	// (0x00045082) slider_set_pane_cp_copy1

0x38ab,	// (0x0003dc76) input_focus_pane_cp1_copy1

0x38b4,	// (0x0003dc7f) list_set_text_pane_copy1

0x38bc,	// (0x0003dc87) setting_text_pane_g1_copy1

0xc215,	// (0x000465e0) set_text_pane_t1_copy1

0x38ab,	// (0x0003dc76) input_focus_pane_cp2_copy1

0x38bc,	// (0x0003dc87) setting_code_pane_g1_copy1

0x38c5,	// (0x0003dc90) setting_code_pane_t1_copy1

0x836f,	// (0x0004273a) list_set_graphic_pane_copy1

0xad53,	// (0x0004511e) bg_set_opt_pane_cp4_copy1

0x38d3,	// (0x0003dc9e) list_set_graphic_pane_g1_copy1_ParamLimits

0x38d3,	// (0x0003dc9e) list_set_graphic_pane_g1_copy1

0x38df,	// (0x0003dcaa) list_set_graphic_pane_g2_copy1

0xbaf3,	// (0x00045ebe) list_set_graphic_pane_t1_copy1_ParamLimits

0xbaf3,	// (0x00045ebe) list_set_graphic_pane_t1_copy1

0xe38c,	// (0x00048757) rs_clock_indi_pane_g1

0x38e7,	// (0x0003dcb2) rs_clock_indi_pane_t1

0x38f5,	// (0x0003dcc0) rs_indi_pane

0x38fd,	// (0x0003dcc8) rs_indi_pane_g1

0x3906,	// (0x0003dcd1) rs_indi_pane_g2

0x362e,	// (0x0003d9f9) rs_indi_pane_g3

0x0002,

0xfeca,	// (0x0004a295) rs_indi_pane_g

0xc269,	// (0x00046634) bg_popup_preview_window_pane_cp03

0x390f,	// (0x0003dcda) popup_fep_tooltip_window_t1

0xeccd,	// (0x00049098) popup_note2_window_g2_ParamLimits

0xeccd,	// (0x00049098) popup_note2_window_g2

0x0001,

0xfc6a,	// (0x0004a035) popup_note2_window_g_ParamLimits

0xfc6a,	// (0x0004a035) popup_note2_window_g

0xf148,	// (0x00049513) bg_popup_sub_pane_cp11_ParamLimits

0xf155,	// (0x00049520) cell_ai3_links_pane_g1_ParamLimits

0xf16c,	// (0x00049537) cell_ai3_links_pane_t1

0xc215,	// (0x000465e0) set_text_pane_t1_copy1_ParamLimits

0xbc9f,	// (0x0004606a) cell_graphic_popup_pane_cp2_ParamLimits

0xbc9f,	// (0x0004606a) cell_graphic_popup_pane_cp2

0x391d,	// (0x0003dce8) cell_graphic_popup_pane_g1_cp2

0xb151,	// (0x0004551c) cell_graphic_popup_pane_g2_cp2

0x3925,	// (0x0003dcf0) cell_graphic_popup_pane_g3_cp2

0x392d,	// (0x0003dcf8) cell_graphic_popup_pane_t2_cp2

0xb162,	// (0x0004552d) grid_highlight_pane_cp3_cp2

0xb71f,	// (0x00045aea) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb3d4,	// (0x0004579f) main_tmo_pane_ParamLimits

0x9cc3,	// (0x0004408e) popup_tmo_big_image_note_window

0x2e71,	// (0x0003d23c) cell_ai5_widget_list_pane

0x2e79,	// (0x0003d244) cell_ai5_widget_lrg_icon_pane

0x356c,	// (0x0003d937) tmo_note_info_pane_t1_ParamLimits

0x3581,	// (0x0003d94c) tmo_note_info_pane_t2_ParamLimits

0x3596,	// (0x0003d961) tmo_note_info_pane_t3_ParamLimits

0x35ab,	// (0x0003d976) tmo_note_info_pane_t4_ParamLimits

0x35bd,	// (0x0003d988) tmo_note_info_pane_t5_ParamLimits

0xfeb8,	// (0x0004a283) tmo_note_info_pane_t_ParamLimits

0x36e5,	// (0x0003dab0) settings_container_pane_ParamLimits

0x38a3,	// (0x0003dc6e) indicator_popup_pane_cp5

0x38a3,	// (0x0003dc6e) indicator_popup_pane_cp6

0x836f,	// (0x0004273a) list_set_graphic_pane_copy1_ParamLimits

0xacc7,	// (0x00045092) bg_popup_window_pane_cp23

0x393b,	// (0x0003dd06) popup_tmo_big_image_note_window_g1

0x3944,	// (0x0003dd0f) popup_tmo_big_image_note_window_t1

0x3952,	// (0x0003dd1d) popup_tmo_big_image_note_window_t2

0x3960,	// (0x0003dd2b) popup_tmo_big_image_note_window_t3

0x0002,

0xfed1,	// (0x0004a29c) popup_tmo_big_image_note_window_t

0xe38c,	// (0x00048757) cell_ai5_widget_lrg_icon_pane_g1

0x396e,	// (0x0003dd39) cell_ai5_widget_lrg_icon_pane_t1

0x397c,	// (0x0003dd47) cell_ai5_widget_list_row_pane_ParamLimits

0x397c,	// (0x0003dd47) cell_ai5_widget_list_row_pane

0x3993,	// (0x0003dd5e) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3993,	// (0x0003dd5e) cell_ai5_widget_list_row_pane_g1

0x39a0,	// (0x0003dd6b) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x39a0,	// (0x0003dd6b) cell_ai5_widget_list_row_pane_t1

0x39d1,	// (0x0003dd9c) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x39d1,	// (0x0003dd9c) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed8,	// (0x0004a2a3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed8,	// (0x0004a2a3) cell_ai5_widget_list_row_pane_t

0x470c,	// (0x0003ead7) main_fep_vtchi_ss_pane

0x3a19,	// (0x0003dde4) popup_fep_char_pre_window

0x3a21,	// (0x0003ddec) popup_fep_ituss_window

0x3a42,	// (0x0003de0d) popup_fep_vkbss_window

0x3a65,	// (0x0003de30) grid_vkbss_keypad_pane_ParamLimits

0x3a65,	// (0x0003de30) grid_vkbss_keypad_pane

0x3a75,	// (0x0003de40) ituss_keypad_pane

0x6efe,	// (0x000412c9) aid_vkbss_key_offset_ParamLimits

0x6efe,	// (0x000412c9) aid_vkbss_key_offset

0x6f0a,	// (0x000412d5) cell_vkbss_key_pane_ParamLimits

0x6f0a,	// (0x000412d5) cell_vkbss_key_pane

0xd2ac,	// (0x00047677) bg_cell_vkbss_key_g1_ParamLimits

0xd2ac,	// (0x00047677) bg_cell_vkbss_key_g1

0x3a84,	// (0x0003de4f) cell_vkbss_key_3p_pane_ParamLimits

0x3a84,	// (0x0003de4f) cell_vkbss_key_3p_pane

0x3a9e,	// (0x0003de69) cell_vkbss_key_g1_ParamLimits

0x3a9e,	// (0x0003de69) cell_vkbss_key_g1

0x3ab8,	// (0x0003de83) cell_vkbss_key_t1_ParamLimits

0x3ab8,	// (0x0003de83) cell_vkbss_key_t1

0x6f20,	// (0x000412eb) cell_ituss_key_pane_ParamLimits

0x6f20,	// (0x000412eb) cell_ituss_key_pane

0x3ae3,	// (0x0003deae) bg_cell_ituss_key_g1_ParamLimits

0x3ae3,	// (0x0003deae) bg_cell_ituss_key_g1

0x3aef,	// (0x0003deba) cell_ituss_key_pane_g1_ParamLimits

0x3aef,	// (0x0003deba) cell_ituss_key_pane_g1

0x6f31,	// (0x000412fc) cell_ituss_key_pane_g2_ParamLimits

0x6f31,	// (0x000412fc) cell_ituss_key_pane_g2

0x0002,

0xfedf,	// (0x0004a2aa) cell_ituss_key_pane_g_ParamLimits

0xfedf,	// (0x0004a2aa) cell_ituss_key_pane_g

0x6f5d,	// (0x00041328) cell_ituss_key_t1_ParamLimits

0x6f5d,	// (0x00041328) cell_ituss_key_t1

0x6f93,	// (0x0004135e) cell_ituss_key_t2_ParamLimits

0x6f93,	// (0x0004135e) cell_ituss_key_t2

0x6fc4,	// (0x0004138f) cell_ituss_key_t3_ParamLimits

0x6fc4,	// (0x0004138f) cell_ituss_key_t3

0x6f93,	// (0x0004135e) cell_ituss_key_t4_ParamLimits

0x6f93,	// (0x0004135e) cell_ituss_key_t4

0x0004,

0xfee6,	// (0x0004a2b1) cell_ituss_key_t_ParamLimits

0xfee6,	// (0x0004a2b1) cell_ituss_key_t

0x3b25,	// (0x0003def0) cell_vkbss_key_3p_pane_g1

0x3b1d,	// (0x0003dee8) cell_vkbss_key_3p_pane_g2

0x3b15,	// (0x0003dee0) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef1,	// (0x0004a2bc) cell_vkbss_key_3p_pane_g

0xc269,	// (0x00046634) bg_popup_fep_char_preview_window_cp02

0x3b2d,	// (0x0003def8) popup_fep_char_pre_window_t1

0x2e21,	// (0x0003d1ec) main_ai5_sk_pane

0x3637,	// (0x0003da02) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x3643,	// (0x0003da0e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x3658,	// (0x0003da23) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x3664,	// (0x0003da2f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec3,	// (0x0004a28e) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3670,	// (0x0003da3b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb3d4,	// (0x0004579f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3b3b,	// (0x0003df06) main_ai5_sk_pane_g1

0xc9f3,	// (0x00046dbe) popup_query_code_window_g1

0x3a33,	// (0x0003ddfe) popup_fep_vkb_icf_pane

0x3a4f,	// (0x0003de1a) popup_fep_vtchi_icf_pane

0x3b44,	// (0x0003df0f) bg_icf_pane

0x3b50,	// (0x0003df1b) list_vkb_icf_pane

0x3b5c,	// (0x0003df27) bg_icf_pane_cp01

0x3b6f,	// (0x0003df3a) vtchi_icf_list_pane

0x3b7f,	// (0x0003df4a) list_vkb_icf_pane_t1_ParamLimits

0x3b7f,	// (0x0003df4a) list_vkb_icf_pane_t1

0x3b95,	// (0x0003df60) vtchi_icf_list_pane_t1_ParamLimits

0x3b95,	// (0x0003df60) vtchi_icf_list_pane_t1

0x3a21,	// (0x0003ddec) popup_fep_ituss_window_ParamLimits

0x3a4f,	// (0x0003de1a) popup_fep_vtchi_icf_pane_ParamLimits

0x3a75,	// (0x0003de40) ituss_keypad_pane_ParamLimits

0x6ef4,	// (0x000412bf) ituss_sks_pane

0x3b44,	// (0x0003df0f) bg_icf_pane_ParamLimits

0x39f9,	// (0x0003ddc4) icf_edit_indi_pane_ParamLimits

0x39f9,	// (0x0003ddc4) icf_edit_indi_pane

0x3b50,	// (0x0003df1b) list_vkb_icf_pane_ParamLimits

0x3b5c,	// (0x0003df27) bg_icf_pane_cp01_ParamLimits

0x3a0c,	// (0x0003ddd7) icf_edit_indi_pane_cp01_ParamLimits

0x3a0c,	// (0x0003ddd7) icf_edit_indi_pane_cp01

0x3b77,	// (0x0003df42) vtchi_query_pane

0x2cad,	// (0x0003d078) icf_edit_indi_pane_g1_ParamLimits

0x2cad,	// (0x0003d078) icf_edit_indi_pane_g1

0x3bda,	// (0x0003dfa5) icf_edit_indi_pane_g2_ParamLimits

0x3bda,	// (0x0003dfa5) icf_edit_indi_pane_g2

0x0001,

0xff09,	// (0x0004a2d4) icf_edit_indi_pane_g_ParamLimits

0xff09,	// (0x0004a2d4) icf_edit_indi_pane_g

0x3bea,	// (0x0003dfb5) icf_edit_indi_pane_t1

0x3bac,	// (0x0003df77) bg_input_focus_pane_cp042

0x3bb5,	// (0x0003df80) vtchi_button_pane

0x3bbe,	// (0x0003df89) vtchi_query_pane_t1

0x3bcc,	// (0x0003df97) vtchi_query_pane_t2

0x3c16,	// (0x0003dfe1) vtchi_query_pane_t3

0x0002,

0xfef8,	// (0x0004a2c3) vtchi_query_pane_t

0x470c,	// (0x0003ead7) bg_button_pane_cp13

0x3c24,	// (0x0003dfef) vtchi_button_pane_g1

0x7007,	// (0x000413d2) ituss_sks_pane_g1

0x7010,	// (0x000413db) ituss_sks_pane_g2

0x0001,

0xfeff,	// (0x0004a2ca) ituss_sks_pane_g

0x3c3a,	// (0x0003e005) ituss_sks_pane_t1

0x3c2c,	// (0x0003dff7) ituss_sks_pane_t2

0x0001,

0xff04,	// (0x0004a2cf) ituss_sks_pane_t

0xdfb9,	// (0x00048384) indicator_nsta_pane_cp_g1

0xdfc2,	// (0x0004838d) indicator_nsta_pane_cp_g2

0xdfca,	// (0x00048395) indicator_nsta_pane_cp_g3

0xdfd2,	// (0x0004839d) indicator_nsta_pane_cp_g4

0xdfda,	// (0x000483a5) indicator_nsta_pane_cp_g5

0xdfe2,	// (0x000483ad) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x00049e73) indicator_nsta_pane_cp_g

0xa989,	// (0x00044d54) cell_graphic2_pane_t2_ParamLimits

0xa989,	// (0x00044d54) cell_graphic2_pane_t2

0x0001,

0xfdba,	// (0x0004a185) cell_graphic2_pane_t_ParamLimits

0xfdba,	// (0x0004a185) cell_graphic2_pane_t

0xa9c1,	// (0x00044d8c) cell_graphic2_control_pane_t1

0x830d,	// (0x000426d8) signal_pane_g3_ParamLimits

0x830d,	// (0x000426d8) signal_pane_g3

0x8321,	// (0x000426ec) signal_pane_g4_ParamLimits

0x8321,	// (0x000426ec) signal_pane_g4

0x39e3,	// (0x0003ddae) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x39e3,	// (0x0003ddae) cell_ai5_widget_list_row_pane_t3

0x3b03,	// (0x0003dece) cell_ituss_key_pane_t1_ParamLimits

0x3b03,	// (0x0003dece) cell_ituss_key_pane_t1

0xc6c9,	// (0x00046a94) form_field_data_wide_pane_vc_t2_ParamLimits

0xc6c9,	// (0x00046a94) form_field_data_wide_pane_vc_t2

0xc6db,	// (0x00046aa6) form_field_data_wide_pane_vc_t3_ParamLimits

0xc6db,	// (0x00046aa6) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x00049bcd) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x00049bcd) form_field_data_wide_pane_vc_t

0xdd0d,	// (0x000480d8) form_field_slider_wide_pane_vc_t3_ParamLimits

0xdd0d,	// (0x000480d8) form_field_slider_wide_pane_vc_t3

0xddcb,	// (0x00048196) form_field_popup_wide_pane_vc_t2_ParamLimits

0xddcb,	// (0x00048196) form_field_popup_wide_pane_vc_t2

0xdde0,	// (0x000481ab) form_field_popup_wide_pane_vc_t3_ParamLimits

0xdde0,	// (0x000481ab) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x00049e62) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x00049e62) form_field_popup_wide_pane_vc_t

0xaaf9,	// (0x00044ec4) aid_fshwr2_btn_pane_ParamLimits

0xab0d,	// (0x00044ed8) aid_fshwr2_syb_pane_ParamLimits

0xab21,	// (0x00044eec) aid_fshwr2_txt_pane_ParamLimits

0x5d44,	// (0x0004010f) fshwr2_bg_pane_ParamLimits

0xab31,	// (0x00044efc) fshwr2_func_candi_pane_ParamLimits

0xab49,	// (0x00044f14) fshwr2_hwr_syb_pane_ParamLimits

0xab61,	// (0x00044f2c) fshwr2_icf_pane_ParamLimits

0xbf6d,	// (0x00046338) list_double_graphic_pane_vc_g4_ParamLimits

0xbf6d,	// (0x00046338) list_double_graphic_pane_vc_g4

0x6f51,	// (0x0004131c) cell_ituss_key_pane_g3_ParamLimits

0x6f51,	// (0x0004131c) cell_ituss_key_pane_g3

0x6ff5,	// (0x000413c0) cell_ituss_key_t5_ParamLimits

0x6ff5,	// (0x000413c0) cell_ituss_key_t5

0x3a42,	// (0x0003de0d) popup_fep_vkbss_window_ParamLimits

0x2e2b,	// (0x0003d1f6) aid_cell_ai5_quarter

0x3bea,	// (0x0003dfb5) icf_edit_indi_pane_t1_ParamLimits

0xaf92,	// (0x0004535d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xaf92,	// (0x0004535d) aid_tch_indicator_popup_pane_cp2

0xafa5,	// (0x00045370) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xafa5,	// (0x00045370) aid_tch_query_popup_data_pane_cp2

0xc99b,	// (0x00046d66) aid_tch_query_popup_pane_ParamLimits

0xc99b,	// (0x00046d66) aid_tch_query_popup_pane

0xc99b,	// (0x00046d66) aid_tch_query_popup_data_pane_cp1_ParamLimits

0xc99b,	// (0x00046d66) aid_tch_query_popup_data_pane_cp1

0xb55a,	// (0x00045925) cell_fshwr2_syb_bg_pane_ParamLimits

0xac55,	// (0x00045020) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xac65,	// (0x00045030) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x3a33,	// (0x0003ddfe) popup_fep_vkb_icf_pane_ParamLimits
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Large

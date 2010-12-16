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

#include "aknlayoutscalable_abrw_pvp4_av_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000c9d3 };

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
0x7256,	// (0x00013c29) Screen

0x7262,	// (0x00013c35) application_window_ParamLimits

0x7262,	// (0x00013c35) application_window

0x35ec,	// (0x0000ffbf) screen_g1

0x4b19,	// (0x000114ec) area_bottom_pane_ParamLimits

0x4b19,	// (0x000114ec) area_bottom_pane

0x4bdf,	// (0x000115b2) area_top_pane_ParamLimits

0x4bdf,	// (0x000115b2) area_top_pane

0x4c7d,	// (0x00011650) main_pane_ParamLimits

0x4c7d,	// (0x00011650) main_pane

0x37b4,	// (0x00010187) misc_graphics

0x8c06,	// (0x000155d9) battery_pane_ParamLimits

0x8c06,	// (0x000155d9) battery_pane

0x99e7,	// (0x000163ba) bg_status_flat_pane_g8

0x99ef,	// (0x000163c2) bg_status_flat_pane_g9

0x8cce,	// (0x000156a1) context_pane_ParamLimits

0x8cce,	// (0x000156a1) context_pane

0x8df2,	// (0x000157c5) navi_pane_ParamLimits

0x8df2,	// (0x000157c5) navi_pane

0x8e80,	// (0x00015853) signal_pane_ParamLimits

0x8e80,	// (0x00015853) signal_pane

0x0008,

0xf84d,	// (0x0001c220) bg_status_flat_pane_g

0x8eed,	// (0x000158c0) status_pane_g1_ParamLimits

0x8eed,	// (0x000158c0) status_pane_g1

0x8ef9,	// (0x000158cc) status_pane_g2_ParamLimits

0x8ef9,	// (0x000158cc) status_pane_g2

0x8f05,	// (0x000158d8) status_pane_g3_ParamLimits

0x8f05,	// (0x000158d8) status_pane_g3

0x0004,

0xf774,	// (0x0001c147) status_pane_g_ParamLimits

0xf774,	// (0x0001c147) status_pane_g

0x8f39,	// (0x0001590c) title_pane_ParamLimits

0x8f39,	// (0x0001590c) title_pane

0x8f76,	// (0x00015949) uni_indicator_pane_ParamLimits

0x8f76,	// (0x00015949) uni_indicator_pane

0x8b2a,	// (0x000154fd) bg_list_pane_ParamLimits

0x8b2a,	// (0x000154fd) bg_list_pane

0x8b4a,	// (0x0001551d) find_pane

0x8b52,	// (0x00015525) listscroll_app_pane_ParamLimits

0x8b52,	// (0x00015525) listscroll_app_pane

0x8b5e,	// (0x00015531) listscroll_form_pane

0x555c,	// (0x00011f2f) listscroll_gen_pane_ParamLimits

0x555c,	// (0x00011f2f) listscroll_gen_pane

0x5570,	// (0x00011f43) listscroll_set_pane

0x7cc5,	// (0x00014698) main_idle_act_pane

0x8823,	// (0x000151f6) main_idle_trad_pane

0x8823,	// (0x000151f6) main_list_empty_pane

0x8b52,	// (0x00015525) main_midp_pane

0x8b78,	// (0x0001554b) main_pane_g1_ParamLimits

0x8b78,	// (0x0001554b) main_pane_g1

0x5586,	// (0x00011f59) popup_ai_message_window_ParamLimits

0x5586,	// (0x00011f59) popup_ai_message_window

0x563a,	// (0x0001200d) popup_fep_china_uni_window_ParamLimits

0x563a,	// (0x0001200d) popup_fep_china_uni_window

0x569a,	// (0x0001206d) popup_fep_japan_candidate_window_ParamLimits

0x569a,	// (0x0001206d) popup_fep_japan_candidate_window

0x56c4,	// (0x00012097) popup_fep_japan_predictive_window_ParamLimits

0x56c4,	// (0x00012097) popup_fep_japan_predictive_window

0x56fa,	// (0x000120cd) popup_find_window

0x5707,	// (0x000120da) popup_grid_graphic_window_ParamLimits

0x5707,	// (0x000120da) popup_grid_graphic_window

0x5737,	// (0x0001210a) popup_large_graphic_colour_window

0x575d,	// (0x00012130) popup_menu_window_ParamLimits

0x575d,	// (0x00012130) popup_menu_window

0x5927,	// (0x000122fa) popup_note_image_window

0x5911,	// (0x000122e4) popup_note_wait_window_ParamLimits

0x5911,	// (0x000122e4) popup_note_wait_window

0x5911,	// (0x000122e4) popup_note_window_ParamLimits

0x5911,	// (0x000122e4) popup_note_window

0x598d,	// (0x00012360) popup_query_code_window_ParamLimits

0x598d,	// (0x00012360) popup_query_code_window

0x59a3,	// (0x00012376) popup_query_data_code_window_ParamLimits

0x59a3,	// (0x00012376) popup_query_data_code_window

0x59c6,	// (0x00012399) popup_query_data_window_ParamLimits

0x59c6,	// (0x00012399) popup_query_data_window

0x59e8,	// (0x000123bb) popup_query_sat_info_window_ParamLimits

0x59e8,	// (0x000123bb) popup_query_sat_info_window

0x5a27,	// (0x000123fa) popup_snote_single_graphic_window_ParamLimits

0x5a27,	// (0x000123fa) popup_snote_single_graphic_window

0x5a27,	// (0x000123fa) popup_snote_single_text_window_ParamLimits

0x5a27,	// (0x000123fa) popup_snote_single_text_window

0x5a3e,	// (0x00012411) popup_sub_window_general

0x5b84,	// (0x00012557) popup_window_general_ParamLimits

0x5b84,	// (0x00012557) popup_window_general

0x8b8e,	// (0x00015561) power_save_pane

0x5403,	// (0x00011dd6) control_pane_g1_ParamLimits

0x5403,	// (0x00011dd6) control_pane_g1

0x5426,	// (0x00011df9) control_pane_g2_ParamLimits

0x5426,	// (0x00011df9) control_pane_g2

0x8aed,	// (0x000154c0) control_pane_g3_ParamLimits

0x8aed,	// (0x000154c0) control_pane_g3

0x0007,

0xf75c,	// (0x0001c12f) control_pane_g_ParamLimits

0xf75c,	// (0x0001c12f) control_pane_g

0x546b,	// (0x00011e3e) control_pane_t1_ParamLimits

0x546b,	// (0x00011e3e) control_pane_t1

0x54b3,	// (0x00011e86) control_pane_t2_ParamLimits

0x54b3,	// (0x00011e86) control_pane_t2

0x0002,

0xf76d,	// (0x0001c140) control_pane_t_ParamLimits

0xf76d,	// (0x0001c140) control_pane_t

0x8a12,	// (0x000153e5) navi_navi_volume_pane_cp1

0x8a1a,	// (0x000153ed) status_small_icon_pane

0x8a22,	// (0x000153f5) status_small_pane_g1_ParamLimits

0x8a22,	// (0x000153f5) status_small_pane_g1

0x8a56,	// (0x00015429) status_small_pane_g2_ParamLimits

0x8a56,	// (0x00015429) status_small_pane_g2

0x8a62,	// (0x00015435) status_small_pane_g3_ParamLimits

0x8a62,	// (0x00015435) status_small_pane_g3

0x8a6e,	// (0x00015441) status_small_pane_g4_ParamLimits

0x8a6e,	// (0x00015441) status_small_pane_g4

0x8a7a,	// (0x0001544d) status_small_pane_g5_ParamLimits

0x8a7a,	// (0x0001544d) status_small_pane_g5

0x8a88,	// (0x0001545b) status_small_pane_g6_ParamLimits

0x8a88,	// (0x0001545b) status_small_pane_g6

0x0007,

0xf74b,	// (0x0001c11e) status_small_pane_g_ParamLimits

0xf74b,	// (0x0001c11e) status_small_pane_g

0x8ab7,	// (0x0001548a) status_small_pane_t1

0x8ad9,	// (0x000154ac) status_small_wait_pane_ParamLimits

0x8ad9,	// (0x000154ac) status_small_wait_pane

0x8200,	// (0x00014bd3) aid_levels_signal_ParamLimits

0x8200,	// (0x00014bd3) aid_levels_signal

0x820f,	// (0x00014be2) signal_pane_g1_ParamLimits

0x820f,	// (0x00014be2) signal_pane_g1

0x8224,	// (0x00014bf7) signal_pane_g2_ParamLimits

0x8224,	// (0x00014bf7) signal_pane_g2

0x0003,

0xf6dc,	// (0x0001c0af) signal_pane_g_ParamLimits

0xf6dc,	// (0x0001c0af) signal_pane_g

0x8255,	// (0x00014c28) context_pane_g1

0x7272,	// (0x00013c45) title_pane_g1

0x72a4,	// (0x00013c77) title_pane_t1

0x381e,	// (0x000101f1) title_pane_t2

0x3844,	// (0x00010217) title_pane_t3

0x0002,

0xf530,	// (0x0001bf03) title_pane_t

0x8f8e,	// (0x00015961) aid_levels_battery_ParamLimits

0x8f8e,	// (0x00015961) aid_levels_battery

0x8f9f,	// (0x00015972) battery_pane_g1_ParamLimits

0x8f9f,	// (0x00015972) battery_pane_g1

0x8fb5,	// (0x00015988) battery_pane_g2_ParamLimits

0x8fb5,	// (0x00015988) battery_pane_g2

0x0001,

0xf77f,	// (0x0001c152) battery_pane_g_ParamLimits

0xf77f,	// (0x0001c152) battery_pane_g

0xa331,	// (0x00016d04) uni_indicator_pane_g1

0xa347,	// (0x00016d1a) uni_indicator_pane_g2

0xa35d,	// (0x00016d30) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x0001c2c8) uni_indicator_pane_g

0x8682,	// (0x00015055) navi_icon_pane_ParamLimits

0x8682,	// (0x00015055) navi_icon_pane

0x85c9,	// (0x00014f9c) navi_midp_pane

0x869e,	// (0x00015071) navi_navi_pane

0x86a8,	// (0x0001507b) navi_text_pane_ParamLimits

0x86a8,	// (0x0001507b) navi_text_pane

0x35ec,	// (0x0000ffbf) status_small_wait_pane_g1

0x3c12,	// (0x000105e5) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x0001c2c3) status_small_wait_pane_g

0xa044,	// (0x00016a17) navi_navi_icon_text_pane

0xa04c,	// (0x00016a1f) navi_navi_pane_g1_ParamLimits

0xa04c,	// (0x00016a1f) navi_navi_pane_g1

0xa05e,	// (0x00016a31) navi_navi_pane_g2_ParamLimits

0xa05e,	// (0x00016a31) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x0001c291) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x0001c291) navi_navi_pane_g

0xa070,	// (0x00016a43) navi_navi_tabs_pane

0xa079,	// (0x00016a4c) navi_navi_text_pane

0xa044,	// (0x00016a17) navi_navi_volume_pane

0xa020,	// (0x000169f3) navi_text_pane_t1

0xa014,	// (0x000169e7) navi_icon_pane_g1

0x9f67,	// (0x0001693a) navi_navi_text_pane_t1

0x5ead,	// (0x00012880) navi_navi_volume_pane_g1

0x5eb5,	// (0x00012888) volume_small_pane

0x9ecd,	// (0x000168a0) navi_navi_icon_text_pane_g1

0x9ed5,	// (0x000168a8) navi_navi_icon_text_pane_t1

0x869e,	// (0x00015071) navi_tabs_2_long_pane

0x869e,	// (0x00015071) navi_tabs_2_pane

0x869e,	// (0x00015071) navi_tabs_3_long_pane

0x869e,	// (0x00015071) navi_tabs_3_pane

0x869e,	// (0x00015071) navi_tabs_4_pane

0x5e8d,	// (0x00012860) tabs_2_active_pane_ParamLimits

0x5e8d,	// (0x00012860) tabs_2_active_pane

0x5e9d,	// (0x00012870) tabs_2_passive_pane_ParamLimits

0x5e9d,	// (0x00012870) tabs_2_passive_pane

0x5e5b,	// (0x0001282e) tabs_3_active_pane_ParamLimits

0x5e5b,	// (0x0001282e) tabs_3_active_pane

0x5e6b,	// (0x0001283e) tabs_3_passive_pane_ParamLimits

0x5e6b,	// (0x0001283e) tabs_3_passive_pane

0x5e7c,	// (0x0001284f) tabs_3_passive_pane_cp_ParamLimits

0x5e7c,	// (0x0001284f) tabs_3_passive_pane_cp

0x5e0f,	// (0x000127e2) tabs_4_active_pane_ParamLimits

0x5e0f,	// (0x000127e2) tabs_4_active_pane

0x5e22,	// (0x000127f5) tabs_4_passive_pane_ParamLimits

0x5e22,	// (0x000127f5) tabs_4_passive_pane

0x5e33,	// (0x00012806) tabs_4_passive_pane_cp_ParamLimits

0x5e33,	// (0x00012806) tabs_4_passive_pane_cp

0x5e44,	// (0x00012817) tabs_4_passive_pane_cp2_ParamLimits

0x5e44,	// (0x00012817) tabs_4_passive_pane_cp2

0x5deb,	// (0x000127be) tabs_2_long_active_pane_ParamLimits

0x5deb,	// (0x000127be) tabs_2_long_active_pane

0x5dfd,	// (0x000127d0) tabs_2_long_passive_pane_ParamLimits

0x5dfd,	// (0x000127d0) tabs_2_long_passive_pane

0x5dac,	// (0x0001277f) tabs_3_long_active_pane_ParamLimits

0x5dac,	// (0x0001277f) tabs_3_long_active_pane

0x5dbf,	// (0x00012792) tabs_3_long_passive_pane_ParamLimits

0x5dbf,	// (0x00012792) tabs_3_long_passive_pane

0x5dd8,	// (0x000127ab) tabs_3_long_passive_pane_cp_ParamLimits

0x5dd8,	// (0x000127ab) tabs_3_long_passive_pane_cp

0x5d52,	// (0x00012725) volume_small_pane_g1

0x5d5b,	// (0x0001272e) volume_small_pane_g2

0x5d64,	// (0x00012737) volume_small_pane_g3

0x5d6d,	// (0x00012740) volume_small_pane_g4

0x5d76,	// (0x00012749) volume_small_pane_g5

0x5d7f,	// (0x00012752) volume_small_pane_g6

0x5d88,	// (0x0001275b) volume_small_pane_g7

0x5d91,	// (0x00012764) volume_small_pane_g8

0x5d9a,	// (0x0001276d) volume_small_pane_g9

0x5da3,	// (0x00012776) volume_small_pane_g10

0x0009,

0xf88a,	// (0x0001c25d) volume_small_pane_g

0x386e,	// (0x00010241) bg_active_tab_pane_cp2_ParamLimits

0x386e,	// (0x00010241) bg_active_tab_pane_cp2

0x730c,	// (0x00013cdf) tabs_3_active_pane_g1

0x7314,	// (0x00013ce7) tabs_3_active_pane_t1

0x386e,	// (0x00010241) bg_passive_tab_pane_cp2_ParamLimits

0x386e,	// (0x00010241) bg_passive_tab_pane_cp2

0x730c,	// (0x00013cdf) tabs_3_passive_pane_g1

0x7314,	// (0x00013ce7) tabs_3_passive_pane_t1

0x386e,	// (0x00010241) bg_active_tab_pane_cp3_ParamLimits

0x386e,	// (0x00010241) bg_active_tab_pane_cp3

0x7326,	// (0x00013cf9) tabs_4_active_pane_g1

0x732e,	// (0x00013d01) tabs_4_active_pane_t1

0x386e,	// (0x00010241) bg_passive_tab_pane_cp3_ParamLimits

0x386e,	// (0x00010241) bg_passive_tab_pane_cp3

0x7326,	// (0x00013cf9) tabs_4_1_passive_pane_g1

0x732e,	// (0x00013d01) tabs_4_1_passive_pane_t1

0x8b52,	// (0x00015525) list_highlight_pane_cp2

0xa5c2,	// (0x00016f95) list_set_pane_ParamLimits

0xa5c2,	// (0x00016f95) list_set_pane

0xa684,	// (0x00017057) main_pane_set_t1_ParamLimits

0xa684,	// (0x00017057) main_pane_set_t1

0xa6a4,	// (0x00017077) main_pane_set_t2_ParamLimits

0xa6a4,	// (0x00017077) main_pane_set_t2

0xa6b8,	// (0x0001708b) main_pane_set_t3_ParamLimits

0xa6b8,	// (0x0001708b) main_pane_set_t3

0xa6cc,	// (0x0001709f) main_pane_set_t4_ParamLimits

0xa6cc,	// (0x0001709f) main_pane_set_t4

0x0003,

0xf95a,	// (0x0001c32d) main_pane_set_t_ParamLimits

0xf95a,	// (0x0001c32d) main_pane_set_t

0xa6e0,	// (0x000170b3) setting_code_pane

0xa6ea,	// (0x000170bd) setting_slider_graphic_pane

0xa6ea,	// (0x000170bd) setting_slider_pane

0xa6ea,	// (0x000170bd) setting_text_pane

0xa6ea,	// (0x000170bd) setting_volume_pane

0x4edc,	// (0x000118af) volume_set_pane

0x386e,	// (0x00010241) bg_set_opt_pane_cp

0x4ee6,	// (0x000118b9) setting_slider_pane_t1

0x4eff,	// (0x000118d2) setting_slider_pane_t2

0x4f19,	// (0x000118ec) setting_slider_pane_t3

0x0002,

0xf537,	// (0x0001bf0a) setting_slider_pane_t

0x4f31,	// (0x00011904) slider_set_pane

0x37b4,	// (0x00010187) bg_set_opt_pane_cp2

0x38dd,	// (0x000102b0) setting_slider_graphic_pane_g1

0x4f47,	// (0x0001191a) setting_slider_graphic_pane_t1

0x4f57,	// (0x0001192a) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x0001bf11) setting_slider_graphic_pane_t

0x4f67,	// (0x0001193a) slider_set_pane_cp

0x37b4,	// (0x00010187) input_focus_pane_cp1

0xa583,	// (0x00016f56) list_set_text_pane

0x35ec,	// (0x0000ffbf) setting_text_pane_g1

0x37b4,	// (0x00010187) input_focus_pane_cp2

0x35ec,	// (0x0000ffbf) setting_code_pane_g1

0x390e,	// (0x000102e1) setting_code_pane_t1

0x391c,	// (0x000102ef) set_text_pane_t1_ParamLimits

0x391c,	// (0x000102ef) set_text_pane_t1

0x40a1,	// (0x00010a74) set_opt_bg_pane_g1

0x40a9,	// (0x00010a7c) set_opt_bg_pane_g2

0xa55b,	// (0x00016f2e) set_opt_bg_pane_g3

0x40b9,	// (0x00010a8c) set_opt_bg_pane_g4

0x40c1,	// (0x00010a94) set_opt_bg_pane_g5

0x40c9,	// (0x00010a9c) set_opt_bg_pane_g6

0xa565,	// (0x00016f38) set_opt_bg_pane_g7

0xa56f,	// (0x00016f42) set_opt_bg_pane_g8

0xa579,	// (0x00016f4c) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x0001c31a) set_opt_bg_pane_g

0xa54e,	// (0x00016f21) slider_set_pane_g1

0x5f36,	// (0x00012909) slider_set_pane_g2

0x0006,

0xf938,	// (0x0001c30b) slider_set_pane_g

0x5ebe,	// (0x00012891) volume_set_pane_g1

0x5ec8,	// (0x0001289b) volume_set_pane_g2

0x5ed2,	// (0x000128a5) volume_set_pane_g3

0x5edc,	// (0x000128af) volume_set_pane_g4

0x5ee6,	// (0x000128b9) volume_set_pane_g5

0x5ef0,	// (0x000128c3) volume_set_pane_g6

0x5efa,	// (0x000128cd) volume_set_pane_g7

0x5f04,	// (0x000128d7) volume_set_pane_g8

0x5f0e,	// (0x000128e1) volume_set_pane_g9

0x5f18,	// (0x000128eb) volume_set_pane_g10

0x0009,

0xf910,	// (0x0001c2e3) volume_set_pane_g

0x7340,	// (0x00013d13) indicator_pane_ParamLimits

0x7340,	// (0x00013d13) indicator_pane

0x734c,	// (0x00013d1f) main_idle_pane_g2_ParamLimits

0x734c,	// (0x00013d1f) main_idle_pane_g2

0x7374,	// (0x00013d47) main_pane_idle_g1_ParamLimits

0x7374,	// (0x00013d47) main_pane_idle_g1

0x3936,	// (0x00010309) popup_clock_digital_analogue_window_ParamLimits

0x3936,	// (0x00010309) popup_clock_digital_analogue_window

0x7382,	// (0x00013d55) soft_indicator_pane_ParamLimits

0x7382,	// (0x00013d55) soft_indicator_pane

0x7390,	// (0x00013d63) wallpaper_pane_ParamLimits

0x7390,	// (0x00013d63) wallpaper_pane

0x35ec,	// (0x0000ffbf) wallpaper_pane_g1

0x739c,	// (0x00013d6f) indicator_pane_g1_ParamLimits

0x739c,	// (0x00013d6f) indicator_pane_g1

0xaa5d,	// (0x00017430) navi_navi_icon_text_pane_srt_g1

0x3964,	// (0x00010337) soft_indicator_pane_t1

0x397e,	// (0x00010351) aid_ps_area_pane

0x73a8,	// (0x00013d7b) aid_ps_clock_pane

0x398f,	// (0x00010362) aid_ps_indicator_pane

0x399b,	// (0x0001036e) indicator_ps_pane_ParamLimits

0x399b,	// (0x0001036e) indicator_ps_pane

0x39aa,	// (0x0001037d) power_save_pane_g1_ParamLimits

0x39aa,	// (0x0001037d) power_save_pane_g1

0x39b6,	// (0x00010389) power_save_pane_g2_ParamLimits

0x39b6,	// (0x00010389) power_save_pane_g2

0x4acd,	// (0x000114a0) aid_navinavi_width_pane

0x397e,	// (0x00010351) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x0001bf16) power_save_pane_g_ParamLimits

0xf543,	// (0x0001bf16) power_save_pane_g

0x39c4,	// (0x00010397) power_save_pane_t1_ParamLimits

0x39c4,	// (0x00010397) power_save_pane_t1

0x73a8,	// (0x00013d7b) aid_ps_clock_pane_ParamLimits

0x398f,	// (0x00010362) aid_ps_indicator_pane_ParamLimits

0x39d6,	// (0x000103a9) power_save_pane_t4_ParamLimits

0x39d6,	// (0x000103a9) power_save_pane_t4

0x0001,

0xf548,	// (0x0001bf1b) power_save_pane_t_ParamLimits

0xf548,	// (0x0001bf1b) power_save_pane_t

0x3a00,	// (0x000103d3) power_save_t3_ParamLimits

0x3a00,	// (0x000103d3) power_save_t3

0x39eb,	// (0x000103be) power_save_t2_ParamLimits

0x39eb,	// (0x000103be) power_save_t2

0x3a15,	// (0x000103e8) indicator_ps_pane_g1

0x73b6,	// (0x00013d89) ai_gene_pane_ParamLimits

0x73b6,	// (0x00013d89) ai_gene_pane

0x73c2,	// (0x00013d95) ai_links_pane_ParamLimits

0x73c2,	// (0x00013d95) ai_links_pane

0x73ce,	// (0x00013da1) indicator_pane_cp1_ParamLimits

0x73ce,	// (0x00013da1) indicator_pane_cp1

0x73da,	// (0x00013dad) main_pane_idle_g1_cp_ParamLimits

0x73da,	// (0x00013dad) main_pane_idle_g1_cp

0x3a1e,	// (0x000103f1) popup_ai_links_title_window

0x73e6,	// (0x00013db9) soft_indicator_pane_cp1_ParamLimits

0x73e6,	// (0x00013db9) soft_indicator_pane_cp1

0xa31f,	// (0x00016cf2) ai_links_pane_g1

0xa328,	// (0x00016cfb) grid_ai_links_pane

0xa304,	// (0x00016cd7) ai_gene_pane_1

0xa30d,	// (0x00016ce0) ai_gene_pane_2

0xa316,	// (0x00016ce9) list_highlight_pane_cp4

0xa2e4,	// (0x00016cb7) cell_ai_link_pane_ParamLimits

0xa2e4,	// (0x00016cb7) cell_ai_link_pane

0xa2dc,	// (0x00016caf) cell_ai_link_pane_g1

0x3c12,	// (0x000105e5) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x0001c2be) cell_ai_link_pane_g

0x37b4,	// (0x00010187) grid_highlight_cp2

0x37b4,	// (0x00010187) bg_popup_sub_pane_cp1

0x3a35,	// (0x00010408) popup_ai_links_title_window_t1

0xa228,	// (0x00016bfb) ai_gene_pane_1_g1_ParamLimits

0xa228,	// (0x00016bfb) ai_gene_pane_1_g1

0xa234,	// (0x00016c07) ai_gene_pane_1_g2_ParamLimits

0xa234,	// (0x00016c07) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x0001c2b4) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x0001c2b4) ai_gene_pane_1_g

0xa241,	// (0x00016c14) ai_gene_pane_1_t1_ParamLimits

0xa241,	// (0x00016c14) ai_gene_pane_1_t1

0xa275,	// (0x00016c48) grid_ai_soft_ind_pane

0xa213,	// (0x00016be6) ai_gene_pane_2_t1_ParamLimits

0xa213,	// (0x00016be6) ai_gene_pane_2_t1

0x73f2,	// (0x00013dc5) main_pane_empty_t1_ParamLimits

0x73f2,	// (0x00013dc5) main_pane_empty_t1

0x740a,	// (0x00013ddd) main_pane_empty_t2_ParamLimits

0x740a,	// (0x00013ddd) main_pane_empty_t2

0x741f,	// (0x00013df2) main_pane_empty_t3_ParamLimits

0x741f,	// (0x00013df2) main_pane_empty_t3

0x7431,	// (0x00013e04) main_pane_empty_t4_ParamLimits

0x7431,	// (0x00013e04) main_pane_empty_t4

0x7443,	// (0x00013e16) main_pane_empty_t5_ParamLimits

0x7443,	// (0x00013e16) main_pane_empty_t5

0x0004,

0xf54d,	// (0x0001bf20) main_pane_empty_t_ParamLimits

0xf54d,	// (0x0001bf20) main_pane_empty_t

0x7bed,	// (0x000145c0) bg_popup_window_pane_ParamLimits

0x7bed,	// (0x000145c0) bg_popup_window_pane

0x9f75,	// (0x00016948) find_popup_pane_cp2_ParamLimits

0x9f75,	// (0x00016948) find_popup_pane_cp2

0x9f81,	// (0x00016954) heading_pane_ParamLimits

0x9f81,	// (0x00016954) heading_pane

0x37b4,	// (0x00010187) bg_popup_sub_pane

0x9eef,	// (0x000168c2) bg_popup_window_pane_g1_ParamLimits

0x9eef,	// (0x000168c2) bg_popup_window_pane_g1

0x9efb,	// (0x000168ce) bg_popup_window_pane_g2_ParamLimits

0x9efb,	// (0x000168ce) bg_popup_window_pane_g2

0x9f07,	// (0x000168da) bg_popup_window_pane_g3_ParamLimits

0x9f07,	// (0x000168da) bg_popup_window_pane_g3

0x9f13,	// (0x000168e6) bg_popup_window_pane_g4_ParamLimits

0x9f13,	// (0x000168e6) bg_popup_window_pane_g4

0x9f1f,	// (0x000168f2) bg_popup_window_pane_g5_ParamLimits

0x9f1f,	// (0x000168f2) bg_popup_window_pane_g5

0x9f2b,	// (0x000168fe) bg_popup_window_pane_g6_ParamLimits

0x9f2b,	// (0x000168fe) bg_popup_window_pane_g6

0x9f37,	// (0x0001690a) bg_popup_window_pane_g7_ParamLimits

0x9f37,	// (0x0001690a) bg_popup_window_pane_g7

0x9f43,	// (0x00016916) bg_popup_window_pane_g8_ParamLimits

0x9f43,	// (0x00016916) bg_popup_window_pane_g8

0x9f4f,	// (0x00016922) bg_popup_window_pane_g9_ParamLimits

0x9f4f,	// (0x00016922) bg_popup_window_pane_g9

0x9f5b,	// (0x0001692e) bg_popup_window_pane_g10_ParamLimits

0x9f5b,	// (0x0001692e) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x0001c27c) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x0001c27c) bg_popup_window_pane_g

0x9e84,	// (0x00016857) bg_popup_heading_pane_ParamLimits

0x9e84,	// (0x00016857) bg_popup_heading_pane

0x5fbe,	// (0x00012991) tabs_4_passive_pane_cp_srt_ParamLimits

0x5fbe,	// (0x00012991) tabs_4_passive_pane_cp_srt

0x5fd0,	// (0x000129a3) tabs_4_passive_pane_srt_ParamLimits

0x9e98,	// (0x0001686b) heading_pane_g2

0x5fd0,	// (0x000129a3) tabs_4_passive_pane_srt

0x8b52,	// (0x00015525) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8b52,	// (0x00015525) bg_passive_tab_pane_cp3_srt

0x9ea0,	// (0x00016873) heading_pane_t1_ParamLimits

0x9ea0,	// (0x00016873) heading_pane_t1

0x9eb7,	// (0x0001688a) heading_pane_t2_ParamLimits

0x9eb7,	// (0x0001688a) heading_pane_t2

0x0001,

0xf8a4,	// (0x0001c277) heading_pane_t_ParamLimits

0xf8a4,	// (0x0001c277) heading_pane_t

0x99af,	// (0x00016382) bg_popup_heading_pane_g1

0x9a5e,	// (0x00016431) bg_popup_heading_pane_g2

0x9a68,	// (0x0001643b) bg_popup_heading_pane_g3

0x9a72,	// (0x00016445) bg_popup_heading_pane_g4

0x9a7c,	// (0x0001644f) bg_popup_heading_pane_g5

0x9a86,	// (0x00016459) bg_popup_heading_pane_g6

0x9a8e,	// (0x00016461) bg_popup_heading_pane_g7

0x9a96,	// (0x00016469) bg_popup_heading_pane_g8

0x9aa0,	// (0x00016473) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x0001c233) bg_popup_heading_pane_g

0x90c4,	// (0x00015a97) bg_popup_sub_pane_g1

0x90d4,	// (0x00015aa7) bg_popup_sub_pane_g2

0x90cc,	// (0x00015a9f) bg_popup_sub_pane_g3

0x90e4,	// (0x00015ab7) bg_popup_sub_pane_g4

0x90dc,	// (0x00015aaf) bg_popup_sub_pane_g5

0x90ec,	// (0x00015abf) bg_popup_sub_pane_g6

0x90f4,	// (0x00015ac7) bg_popup_sub_pane_g7

0x9104,	// (0x00015ad7) bg_popup_sub_pane_g8

0x90fc,	// (0x00015acf) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x0001c20d) bg_popup_sub_pane_g

0x3856,	// (0x00010229) bg_popup_window_pane_cp5_ParamLimits

0x3856,	// (0x00010229) bg_popup_window_pane_cp5

0x3a52,	// (0x00010425) popup_note_window_g1_ParamLimits

0x3a52,	// (0x00010425) popup_note_window_g1

0x3a5e,	// (0x00010431) popup_note_window_t1_ParamLimits

0x3a5e,	// (0x00010431) popup_note_window_t1

0x3a74,	// (0x00010447) popup_note_window_t2_ParamLimits

0x3a74,	// (0x00010447) popup_note_window_t2

0x3a8a,	// (0x0001045d) popup_note_window_t3_ParamLimits

0x3a8a,	// (0x0001045d) popup_note_window_t3

0x3aa0,	// (0x00010473) popup_note_window_t4_ParamLimits

0x3aa0,	// (0x00010473) popup_note_window_t4

0x3ac8,	// (0x0001049b) popup_note_window_t5_ParamLimits

0x3ac8,	// (0x0001049b) popup_note_window_t5

0x0004,

0xf558,	// (0x0001bf2b) popup_note_window_t_ParamLimits

0xf558,	// (0x0001bf2b) popup_note_window_t

0x3b12,	// (0x000104e5) bg_popup_window_pane_cp6_ParamLimits

0x3b12,	// (0x000104e5) bg_popup_window_pane_cp6

0x992b,	// (0x000162fe) popup_note_image_window_g1_ParamLimits

0x992b,	// (0x000162fe) popup_note_image_window_g1

0x9937,	// (0x0001630a) popup_note_image_window_g2_ParamLimits

0x9937,	// (0x0001630a) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x0001c201) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x0001c201) popup_note_image_window_g

0x9950,	// (0x00016323) popup_note_image_window_t1_ParamLimits

0x9950,	// (0x00016323) popup_note_image_window_t1

0x9969,	// (0x0001633c) popup_note_image_window_t2_ParamLimits

0x9969,	// (0x0001633c) popup_note_image_window_t2

0x9982,	// (0x00016355) popup_note_image_window_t3_ParamLimits

0x9982,	// (0x00016355) popup_note_image_window_t3

0x0002,

0xf833,	// (0x0001c206) popup_note_image_window_t_ParamLimits

0xf833,	// (0x0001c206) popup_note_image_window_t

0x97eb,	// (0x000161be) bg_popup_window_pane_cp7_ParamLimits

0x97eb,	// (0x000161be) bg_popup_window_pane_cp7

0x981b,	// (0x000161ee) popup_note_wait_window_g1_ParamLimits

0x981b,	// (0x000161ee) popup_note_wait_window_g1

0x9827,	// (0x000161fa) popup_note_wait_window_g2_ParamLimits

0x9827,	// (0x000161fa) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x0001c1ef) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x0001c1ef) popup_note_wait_window_g

0x983f,	// (0x00016212) popup_note_wait_window_t1_ParamLimits

0x983f,	// (0x00016212) popup_note_wait_window_t1

0x9866,	// (0x00016239) popup_note_wait_window_t2_ParamLimits

0x9866,	// (0x00016239) popup_note_wait_window_t2

0x9884,	// (0x00016257) popup_note_wait_window_t3_ParamLimits

0x9884,	// (0x00016257) popup_note_wait_window_t3

0x9897,	// (0x0001626a) popup_note_wait_window_t4_ParamLimits

0x9897,	// (0x0001626a) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x0001c1f6) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x0001c1f6) popup_note_wait_window_t

0x98bc,	// (0x0001628f) wait_bar_pane_ParamLimits

0x98bc,	// (0x0001628f) wait_bar_pane

0x37b4,	// (0x00010187) wait_anim_pane

0x37b4,	// (0x00010187) wait_border_pane

0x35ec,	// (0x0000ffbf) wait_anim_pane_g1

0x35ec,	// (0x0000ffbf) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x0001c0aa) wait_anim_pane_g

0x978f,	// (0x00016162) wait_border_pane_g1

0x979a,	// (0x0001616d) wait_border_pane_g2

0x97a3,	// (0x00016176) wait_border_pane_g3

0x0002,

0xf815,	// (0x0001c1e8) wait_border_pane_g

0x95f9,	// (0x00015fcc) bg_popup_window_pane_cp16_ParamLimits

0x95f9,	// (0x00015fcc) bg_popup_window_pane_cp16

0x96f9,	// (0x000160cc) indicator_popup_pane_cp4_ParamLimits

0x96f9,	// (0x000160cc) indicator_popup_pane_cp4

0x970d,	// (0x000160e0) popup_query_data_window_t1_ParamLimits

0x970d,	// (0x000160e0) popup_query_data_window_t1

0x971f,	// (0x000160f2) popup_query_data_window_t2_ParamLimits

0x971f,	// (0x000160f2) popup_query_data_window_t2

0x9738,	// (0x0001610b) popup_query_data_window_t3_ParamLimits

0x9738,	// (0x0001610b) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x0001c1e1) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x0001c1e1) popup_query_data_window_t

0x9752,	// (0x00016125) query_popup_data_pane_ParamLimits

0x9752,	// (0x00016125) query_popup_data_pane

0x9766,	// (0x00016139) query_popup_data_pane_cp1_ParamLimits

0x9766,	// (0x00016139) query_popup_data_pane_cp1

0x95f9,	// (0x00015fcc) bg_popup_window_pane_cp10_ParamLimits

0x95f9,	// (0x00015fcc) bg_popup_window_pane_cp10

0x962b,	// (0x00015ffe) indicator_popup_pane_ParamLimits

0x962b,	// (0x00015ffe) indicator_popup_pane

0x964d,	// (0x00016020) popup_query_code_window_t1_ParamLimits

0x964d,	// (0x00016020) popup_query_code_window_t1

0x9667,	// (0x0001603a) popup_query_code_window_t2_ParamLimits

0x9667,	// (0x0001603a) popup_query_code_window_t2

0x96b0,	// (0x00016083) popup_query_code_window_t3_ParamLimits

0x96b0,	// (0x00016083) popup_query_code_window_t3

0x0002,

0xf807,	// (0x0001c1da) popup_query_code_window_t_ParamLimits

0xf807,	// (0x0001c1da) popup_query_code_window_t

0x96df,	// (0x000160b2) query_popup_pane_ParamLimits

0x96df,	// (0x000160b2) query_popup_pane

0x3b12,	// (0x000104e5) bg_popup_window_pane_cp15_ParamLimits

0x3b12,	// (0x000104e5) bg_popup_window_pane_cp15

0x3b32,	// (0x00010505) indicator_popup_pane_cp1_ParamLimits

0x3b32,	// (0x00010505) indicator_popup_pane_cp1

0x3b45,	// (0x00010518) indicator_popup_pane_cp2_ParamLimits

0x3b45,	// (0x00010518) indicator_popup_pane_cp2

0x3b60,	// (0x00010533) popup_query_data_code_window_g1_ParamLimits

0x3b60,	// (0x00010533) popup_query_data_code_window_g1

0x3b73,	// (0x00010546) popup_query_data_code_window_t1_ParamLimits

0x3b73,	// (0x00010546) popup_query_data_code_window_t1

0x3b85,	// (0x00010558) popup_query_data_code_window_t2_ParamLimits

0x3b85,	// (0x00010558) popup_query_data_code_window_t2

0x3b97,	// (0x0001056a) popup_query_data_code_window_t3_ParamLimits

0x3b97,	// (0x0001056a) popup_query_data_code_window_t3

0x3bad,	// (0x00010580) popup_query_data_code_window_t4_ParamLimits

0x3bad,	// (0x00010580) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x0001bf36) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x0001bf36) popup_query_data_code_window_t

0x5c5e,	// (0x00012631) list_single_midp_graphic_pane_g3

0x3bc7,	// (0x0001059a) query_popup_data_pane_cp2_ParamLimits

0x3bda,	// (0x000105ad) query_popup_pane_cp2_ParamLimits

0x3bda,	// (0x000105ad) query_popup_pane_cp2

0x37b4,	// (0x00010187) bg_popup_window_pane_cp11

0x95dd,	// (0x00015fb0) heading_pane_cp5

0x95e5,	// (0x00015fb8) listscroll_popup_info_pane

0x37b4,	// (0x00010187) input_focus_pane_cp3

0x3bf5,	// (0x000105c8) query_popup_pane_t1

0x3c03,	// (0x000105d6) list_popup_info_pane_ParamLimits

0x3c03,	// (0x000105d6) list_popup_info_pane

0x3c12,	// (0x000105e5) listscroll_popup_info_pane_g1

0x3c1a,	// (0x000105ed) scroll_pane_cp7

0x3c24,	// (0x000105f7) popup_info_list_pane_t1_ParamLimits

0x3c24,	// (0x000105f7) popup_info_list_pane_t1

0x3c3e,	// (0x00010611) popup_info_list_pane_t2_ParamLimits

0x3c3e,	// (0x00010611) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x0001bf3f) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x0001bf3f) popup_info_list_pane_t

0x37b4,	// (0x00010187) bg_popup_window_pane_cp12

0xaa77,	// (0x0001744a) find_popup_pane

0x386e,	// (0x00010241) bg_popup_window_pane_cp3

0x3c58,	// (0x0001062b) heading_pane_cp3

0x3c67,	// (0x0001063a) listscroll_popup_graphic_pane

0x37b4,	// (0x00010187) bg_popup_window_pane_cp4

0x74a5,	// (0x00013e78) heading_pane_cp4

0x3c77,	// (0x0001064a) listscroll_popup_colour_pane

0x74af,	// (0x00013e82) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x74af,	// (0x00013e82) cell_large_graphic_colour_none_popup_pane

0x74c3,	// (0x00013e96) grid_large_graphic_colour_popup_pane_ParamLimits

0x74c3,	// (0x00013e96) grid_large_graphic_colour_popup_pane

0x74ef,	// (0x00013ec2) listscroll_popup_colour_pane_g1_ParamLimits

0x74ef,	// (0x00013ec2) listscroll_popup_colour_pane_g1

0x7506,	// (0x00013ed9) listscroll_popup_colour_pane_g2_ParamLimits

0x7506,	// (0x00013ed9) listscroll_popup_colour_pane_g2

0x751d,	// (0x00013ef0) listscroll_popup_colour_pane_g3_ParamLimits

0x751d,	// (0x00013ef0) listscroll_popup_colour_pane_g3

0x752d,	// (0x00013f00) listscroll_popup_colour_pane_g4_ParamLimits

0x752d,	// (0x00013f00) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x0001bf44) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x0001bf44) listscroll_popup_colour_pane_g

0x3c7f,	// (0x00010652) scroll_pane_cp6_ParamLimits

0x3c7f,	// (0x00010652) scroll_pane_cp6

0x7541,	// (0x00013f14) cell_large_graphic_colour_popup_pane_ParamLimits

0x7541,	// (0x00013f14) cell_large_graphic_colour_popup_pane

0x3c91,	// (0x00010664) cell_large_graphic_colour_none_popup_pane_t1

0x37b4,	// (0x00010187) grid_highlight_pane_cp5

0x3ca0,	// (0x00010673) cell_large_graphic_colour_popup_pane_g1

0x3ca8,	// (0x0001067b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x0001bf4d) cell_large_graphic_colour_popup_pane_g

0x3cb0,	// (0x00010683) cell_large_graphic_colour_popup_pane_g2_copy1

0x3cb9,	// (0x0001068c) grid_highlight_pane_cp4

0x3cc1,	// (0x00010694) bg_popup_window_pane_cp8_ParamLimits

0x3cc1,	// (0x00010694) bg_popup_window_pane_cp8

0x3cdc,	// (0x000106af) popup_snote_single_text_window_g1_ParamLimits

0x3cdc,	// (0x000106af) popup_snote_single_text_window_g1

0x3cee,	// (0x000106c1) popup_snote_single_text_window_t1_ParamLimits

0x3cee,	// (0x000106c1) popup_snote_single_text_window_t1

0x3d01,	// (0x000106d4) popup_snote_single_text_window_t2_ParamLimits

0x3d01,	// (0x000106d4) popup_snote_single_text_window_t2

0x3d14,	// (0x000106e7) popup_snote_single_text_window_t3_ParamLimits

0x3d14,	// (0x000106e7) popup_snote_single_text_window_t3

0x3d4d,	// (0x00010720) popup_snote_single_text_window_t4_ParamLimits

0x3d4d,	// (0x00010720) popup_snote_single_text_window_t4

0x3d81,	// (0x00010754) popup_snote_single_text_window_t5_ParamLimits

0x3d81,	// (0x00010754) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x0001bf52) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x0001bf52) popup_snote_single_text_window_t

0x3db0,	// (0x00010783) bg_popup_window_pane_cp9_ParamLimits

0x3db0,	// (0x00010783) bg_popup_window_pane_cp9

0x3cdc,	// (0x000106af) popup_snote_single_graphic_window_g1_ParamLimits

0x3cdc,	// (0x000106af) popup_snote_single_graphic_window_g1

0x3dbe,	// (0x00010791) popup_snote_single_graphic_window_g2_ParamLimits

0x3dbe,	// (0x00010791) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x0001bf5d) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x0001bf5d) popup_snote_single_graphic_window_g

0x3dca,	// (0x0001079d) popup_snote_single_graphic_window_t1_ParamLimits

0x3dca,	// (0x0001079d) popup_snote_single_graphic_window_t1

0x3ddd,	// (0x000107b0) popup_snote_single_graphic_window_t2_ParamLimits

0x3ddd,	// (0x000107b0) popup_snote_single_graphic_window_t2

0x3df0,	// (0x000107c3) popup_snote_single_graphic_window_t3_ParamLimits

0x3df0,	// (0x000107c3) popup_snote_single_graphic_window_t3

0x3e29,	// (0x000107fc) popup_snote_single_graphic_window_t4_ParamLimits

0x3e29,	// (0x000107fc) popup_snote_single_graphic_window_t4

0x3e5d,	// (0x00010830) popup_snote_single_graphic_window_t5_ParamLimits

0x3e5d,	// (0x00010830) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x0001bf62) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x0001bf62) popup_snote_single_graphic_window_t

0xa9b5,	// (0x00017388) grid_graphic_popup_pane_ParamLimits

0xa9b5,	// (0x00017388) grid_graphic_popup_pane

0xa9e3,	// (0x000173b6) listscroll_popup_graphic_pane_g1_ParamLimits

0xa9e3,	// (0x000173b6) listscroll_popup_graphic_pane_g1

0xa9f7,	// (0x000173ca) listscroll_popup_graphic_pane_g2_ParamLimits

0xa9f7,	// (0x000173ca) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x0001c357) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x0001c357) listscroll_popup_graphic_pane_g

0xaa0b,	// (0x000173de) scroll_pane_cp5

0xa944,	// (0x00017317) cell_graphic_popup_pane_ParamLimits

0xa944,	// (0x00017317) cell_graphic_popup_pane

0xa925,	// (0x000172f8) cell_graphic_popup_pane_g1

0xa92d,	// (0x00017300) cell_graphic_popup_pane_g2

0x3cb0,	// (0x00010683) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x0001c350) cell_graphic_popup_pane_g

0xa936,	// (0x00017309) cell_graphic_popup_pane_t2

0x3cb9,	// (0x0001068c) grid_highlight_pane_cp3

0x3e9e,	// (0x00010871) list_gen_pane_ParamLimits

0x3e9e,	// (0x00010871) list_gen_pane

0x3ec6,	// (0x00010899) scroll_pane

0xa87d,	// (0x00017250) bg_list_pane_g1_ParamLimits

0xa87d,	// (0x00017250) bg_list_pane_g1

0xa89a,	// (0x0001726d) bg_list_pane_g2_ParamLimits

0xa89a,	// (0x0001726d) bg_list_pane_g2

0xa8af,	// (0x00017282) bg_list_pane_g3_ParamLimits

0xa8af,	// (0x00017282) bg_list_pane_g3

0xa8c3,	// (0x00017296) bg_list_pane_g4_ParamLimits

0xa8c3,	// (0x00017296) bg_list_pane_g4

0xa8d7,	// (0x000172aa) bg_list_pane_g5_ParamLimits

0xa8d7,	// (0x000172aa) bg_list_pane_g5

0x0004,

0xf972,	// (0x0001c345) bg_list_pane_g_ParamLimits

0xf972,	// (0x0001c345) bg_list_pane_g

0xa7a3,	// (0x00017176) list_double2_graphic_large_graphic_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double2_graphic_large_graphic_pane

0xa7a3,	// (0x00017176) list_double2_graphic_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double2_graphic_pane

0xa7a3,	// (0x00017176) list_double2_large_graphic_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double2_large_graphic_pane

0xa7a3,	// (0x00017176) list_double2_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double2_pane

0xa7a3,	// (0x00017176) list_double_graphic_heading_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double_graphic_heading_pane

0xa7a3,	// (0x00017176) list_double_graphic_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double_graphic_pane

0xa7a3,	// (0x00017176) list_double_heading_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double_heading_pane

0xa7a3,	// (0x00017176) list_double_large_graphic_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double_large_graphic_pane

0xa7a3,	// (0x00017176) list_double_number_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double_number_pane

0xa7a3,	// (0x00017176) list_double_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double_pane

0xa7a3,	// (0x00017176) list_double_time_pane_ParamLimits

0xa7a3,	// (0x00017176) list_double_time_pane

0xa7a3,	// (0x00017176) list_setting_number_pane_ParamLimits

0xa7a3,	// (0x00017176) list_setting_number_pane

0xa7a3,	// (0x00017176) list_setting_pane_ParamLimits

0xa7a3,	// (0x00017176) list_setting_pane

0xa807,	// (0x000171da) list_single_2graphic_pane_ParamLimits

0xa807,	// (0x000171da) list_single_2graphic_pane

0xa807,	// (0x000171da) list_single_graphic_heading_pane_ParamLimits

0xa807,	// (0x000171da) list_single_graphic_heading_pane

0xa807,	// (0x000171da) list_single_graphic_pane_ParamLimits

0xa807,	// (0x000171da) list_single_graphic_pane

0xa807,	// (0x000171da) list_single_heading_pane_ParamLimits

0xa807,	// (0x000171da) list_single_heading_pane

0xa862,	// (0x00017235) list_single_large_graphic_pane_ParamLimits

0xa862,	// (0x00017235) list_single_large_graphic_pane

0xa807,	// (0x000171da) list_single_number_heading_pane_ParamLimits

0xa807,	// (0x000171da) list_single_number_heading_pane

0xa807,	// (0x000171da) list_single_number_pane_ParamLimits

0xa807,	// (0x000171da) list_single_number_pane

0xa807,	// (0x000171da) list_single_pane_ParamLimits

0xa807,	// (0x000171da) list_single_pane

0x37b4,	// (0x00010187) list_highlight_pane_cp1

0x7578,	// (0x00013f4b) list_single_pane_g1_ParamLimits

0x7578,	// (0x00013f4b) list_single_pane_g1

0x7584,	// (0x00013f57) list_single_pane_g2_ParamLimits

0x7584,	// (0x00013f57) list_single_pane_g2

0x0001,

0xf5a1,	// (0x0001bf74) list_single_pane_g_ParamLimits

0xf5a1,	// (0x0001bf74) list_single_pane_g

0xa75c,	// (0x0001712f) list_single_pane_t1_ParamLimits

0xa75c,	// (0x0001712f) list_single_pane_t1

0x7578,	// (0x00013f4b) list_single_number_pane_g1_ParamLimits

0x7578,	// (0x00013f4b) list_single_number_pane_g1

0x7584,	// (0x00013f57) list_single_number_pane_g2_ParamLimits

0x7584,	// (0x00013f57) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x0001bf74) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x0001bf74) list_single_number_pane_g

0xa4ca,	// (0x00016e9d) list_single_number_pane_t1_ParamLimits

0xa4ca,	// (0x00016e9d) list_single_number_pane_t1

0xa4e0,	// (0x00016eb3) list_single_number_pane_t2_ParamLimits

0xa4e0,	// (0x00016eb3) list_single_number_pane_t2

0x0001,

0xf933,	// (0x0001c306) list_single_number_pane_t_ParamLimits

0xf933,	// (0x0001c306) list_single_number_pane_t

0x756c,	// (0x00013f3f) list_single_graphic_pane_g1_ParamLimits

0x756c,	// (0x00013f3f) list_single_graphic_pane_g1

0x7578,	// (0x00013f4b) list_single_graphic_pane_g2_ParamLimits

0x7578,	// (0x00013f4b) list_single_graphic_pane_g2

0x7584,	// (0x00013f57) list_single_graphic_pane_g3_ParamLimits

0x7584,	// (0x00013f57) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x0001bf6d) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x0001bf6d) list_single_graphic_pane_g

0x7590,	// (0x00013f63) list_single_graphic_pane_t1_ParamLimits

0x7590,	// (0x00013f63) list_single_graphic_pane_t1

0x7578,	// (0x00013f4b) list_single_heading_pane_g1_ParamLimits

0x7578,	// (0x00013f4b) list_single_heading_pane_g1

0x7584,	// (0x00013f57) list_single_heading_pane_g2_ParamLimits

0x7584,	// (0x00013f57) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x0001bf74) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x0001bf74) list_single_heading_pane_g

0x75a6,	// (0x00013f79) list_single_heading_pane_t1_ParamLimits

0x75a6,	// (0x00013f79) list_single_heading_pane_t1

0x75bc,	// (0x00013f8f) list_single_heading_pane_t2_ParamLimits

0x75bc,	// (0x00013f8f) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x0001bf79) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x0001bf79) list_single_heading_pane_t

0x7578,	// (0x00013f4b) list_single_number_heading_pane_g1_ParamLimits

0x7578,	// (0x00013f4b) list_single_number_heading_pane_g1

0x7584,	// (0x00013f57) list_single_number_heading_pane_g2_ParamLimits

0x7584,	// (0x00013f57) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x0001bf74) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x0001bf74) list_single_number_heading_pane_g

0x75a6,	// (0x00013f79) list_single_number_heading_pane_t1_ParamLimits

0x75a6,	// (0x00013f79) list_single_number_heading_pane_t1

0x75ce,	// (0x00013fa1) list_single_number_heading_pane_t2_ParamLimits

0x75ce,	// (0x00013fa1) list_single_number_heading_pane_t2

0x75e0,	// (0x00013fb3) list_single_number_heading_pane_t3_ParamLimits

0x75e0,	// (0x00013fb3) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x0001bf7e) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x0001bf7e) list_single_number_heading_pane_t

0x75f2,	// (0x00013fc5) list_single_graphic_heading_pane_g1_ParamLimits

0x75f2,	// (0x00013fc5) list_single_graphic_heading_pane_g1

0x75fe,	// (0x00013fd1) list_single_graphic_heading_pane_g4_ParamLimits

0x75fe,	// (0x00013fd1) list_single_graphic_heading_pane_g4

0x7584,	// (0x00013f57) list_single_graphic_heading_pane_g5_ParamLimits

0x7584,	// (0x00013f57) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x0001bf85) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x0001bf85) list_single_graphic_heading_pane_g

0x75a6,	// (0x00013f79) list_single_graphic_heading_pane_t1_ParamLimits

0x75a6,	// (0x00013f79) list_single_graphic_heading_pane_t1

0x760f,	// (0x00013fe2) list_single_graphic_heading_pane_t2_ParamLimits

0x760f,	// (0x00013fe2) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x0001bf8c) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x0001bf8c) list_single_graphic_heading_pane_t

0x7621,	// (0x00013ff4) list_single_large_graphic_pane_g1_ParamLimits

0x7621,	// (0x00013ff4) list_single_large_graphic_pane_g1

0x7578,	// (0x00013f4b) list_single_large_graphic_pane_g2_ParamLimits

0x7578,	// (0x00013f4b) list_single_large_graphic_pane_g2

0x7584,	// (0x00013f57) list_single_large_graphic_pane_g3_ParamLimits

0x7584,	// (0x00013f57) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x0001bf91) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x0001bf91) list_single_large_graphic_pane_g

0x979a,	// (0x0001616d) wait_border_pane_g2_copy1

0x762d,	// (0x00014000) list_single_large_graphic_pane_g4_cp2

0x7635,	// (0x00014008) list_single_large_graphic_pane_t1_ParamLimits

0x7635,	// (0x00014008) list_single_large_graphic_pane_t1

0x3f0f,	// (0x000108e2) list_double_pane_g1_ParamLimits

0x3f0f,	// (0x000108e2) list_double_pane_g1

0x764b,	// (0x0001401e) list_double_pane_g2_ParamLimits

0x764b,	// (0x0001401e) list_double_pane_g2

0x0001,

0xf5c5,	// (0x0001bf98) list_double_pane_g_ParamLimits

0xf5c5,	// (0x0001bf98) list_double_pane_g

0x7657,	// (0x0001402a) list_double_pane_t1_ParamLimits

0x7657,	// (0x0001402a) list_double_pane_t1

0x766d,	// (0x00014040) list_double_pane_t2_ParamLimits

0x766d,	// (0x00014040) list_double_pane_t2

0x0001,

0xf5ca,	// (0x0001bf9d) list_double_pane_t_ParamLimits

0xf5ca,	// (0x0001bf9d) list_double_pane_t

0x767f,	// (0x00014052) list_double2_pane_g1_ParamLimits

0x767f,	// (0x00014052) list_double2_pane_g1

0x7690,	// (0x00014063) list_double2_pane_g2_ParamLimits

0x7690,	// (0x00014063) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x0001bfa2) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x0001bfa2) list_double2_pane_g

0x769c,	// (0x0001406f) list_double2_pane_t1_ParamLimits

0x769c,	// (0x0001406f) list_double2_pane_t1

0x76b2,	// (0x00014085) list_double2_pane_t2_ParamLimits

0x76b2,	// (0x00014085) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x0001bfa7) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x0001bfa7) list_double2_pane_t

0x3f0f,	// (0x000108e2) list_double_number_pane_g1_ParamLimits

0x3f0f,	// (0x000108e2) list_double_number_pane_g1

0x764b,	// (0x0001401e) list_double_number_pane_g2_ParamLimits

0x764b,	// (0x0001401e) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x0001bf98) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x0001bf98) list_double_number_pane_g

0x76c4,	// (0x00014097) list_double_number_pane_t1_ParamLimits

0x76c4,	// (0x00014097) list_double_number_pane_t1

0x76d6,	// (0x000140a9) list_double_number_pane_t2_ParamLimits

0x76d6,	// (0x000140a9) list_double_number_pane_t2

0x76ec,	// (0x000140bf) list_double_number_pane_t3_ParamLimits

0x76ec,	// (0x000140bf) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x0001bfac) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x0001bfac) list_double_number_pane_t

0x76fe,	// (0x000140d1) list_double_graphic_pane_g1_ParamLimits

0x76fe,	// (0x000140d1) list_double_graphic_pane_g1

0x770a,	// (0x000140dd) list_double_graphic_pane_g2_ParamLimits

0x770a,	// (0x000140dd) list_double_graphic_pane_g2

0x7719,	// (0x000140ec) list_double_graphic_pane_g3_ParamLimits

0x7719,	// (0x000140ec) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x0001bfb3) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x0001bfb3) list_double_graphic_pane_g

0x7731,	// (0x00014104) list_double_graphic_pane_t1_ParamLimits

0x7731,	// (0x00014104) list_double_graphic_pane_t1

0x7747,	// (0x0001411a) list_double_graphic_pane_t2_ParamLimits

0x7747,	// (0x0001411a) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x0001bfbc) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x0001bfbc) list_double_graphic_pane_t

0x7759,	// (0x0001412c) list_double2_graphic_pane_g1_ParamLimits

0x7759,	// (0x0001412c) list_double2_graphic_pane_g1

0x7765,	// (0x00014138) list_double2_graphic_pane_g2_ParamLimits

0x7765,	// (0x00014138) list_double2_graphic_pane_g2

0x7690,	// (0x00014063) list_double2_graphic_pane_g3_ParamLimits

0x7690,	// (0x00014063) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x0001bfc1) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x0001bfc1) list_double2_graphic_pane_g

0x7771,	// (0x00014144) list_double2_graphic_pane_t1_ParamLimits

0x7771,	// (0x00014144) list_double2_graphic_pane_t1

0x7787,	// (0x0001415a) list_double2_graphic_pane_t2_ParamLimits

0x7787,	// (0x0001415a) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x0001bfc8) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x0001bfc8) list_double2_graphic_pane_t

0x7799,	// (0x0001416c) list_double_large_graphic_pane_g1_ParamLimits

0x7799,	// (0x0001416c) list_double_large_graphic_pane_g1

0x77b8,	// (0x0001418b) list_double_large_graphic_pane_g2_ParamLimits

0x77b8,	// (0x0001418b) list_double_large_graphic_pane_g2

0x764b,	// (0x0001401e) list_double_large_graphic_pane_g3_ParamLimits

0x764b,	// (0x0001401e) list_double_large_graphic_pane_g3

0x77c9,	// (0x0001419c) list_double_large_graphic_pane_g4_ParamLimits

0x77c9,	// (0x0001419c) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x0001bfcd) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x0001bfcd) list_double_large_graphic_pane_g

0x77dc,	// (0x000141af) list_double_large_graphic_pane_t1_ParamLimits

0x77dc,	// (0x000141af) list_double_large_graphic_pane_t1

0x77f5,	// (0x000141c8) list_double_large_graphic_pane_t2_ParamLimits

0x77f5,	// (0x000141c8) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x0001bfd8) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x0001bfd8) list_double_large_graphic_pane_t

0x7807,	// (0x000141da) list_double2_large_graphic_pane_g1_ParamLimits

0x7807,	// (0x000141da) list_double2_large_graphic_pane_g1

0x767f,	// (0x00014052) list_double2_large_graphic_pane_g2_ParamLimits

0x767f,	// (0x00014052) list_double2_large_graphic_pane_g2

0x7690,	// (0x00014063) list_double2_large_graphic_pane_g3_ParamLimits

0x7690,	// (0x00014063) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x0001bfdd) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x0001bfdd) list_double2_large_graphic_pane_g

0x7813,	// (0x000141e6) list_double2_large_graphic_pane_t1_ParamLimits

0x7813,	// (0x000141e6) list_double2_large_graphic_pane_t1

0x7829,	// (0x000141fc) list_double2_large_graphic_pane_t2_ParamLimits

0x7829,	// (0x000141fc) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x0001bfe4) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x0001bfe4) list_double2_large_graphic_pane_t

0x783b,	// (0x0001420e) list_double_heading_pane_g1_ParamLimits

0x783b,	// (0x0001420e) list_double_heading_pane_g1

0x784c,	// (0x0001421f) list_double_heading_pane_g2_ParamLimits

0x784c,	// (0x0001421f) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x0001bfe9) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x0001bfe9) list_double_heading_pane_g

0x7858,	// (0x0001422b) list_double_heading_pane_t1_ParamLimits

0x7858,	// (0x0001422b) list_double_heading_pane_t1

0x786e,	// (0x00014241) list_double_heading_pane_t2_ParamLimits

0x786e,	// (0x00014241) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x0001bfee) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x0001bfee) list_double_heading_pane_t

0x3f1b,	// (0x000108ee) list_double_graphic_heading_pane_g1_ParamLimits

0x3f1b,	// (0x000108ee) list_double_graphic_heading_pane_g1

0x783b,	// (0x0001420e) list_double_graphic_heading_pane_g2_ParamLimits

0x783b,	// (0x0001420e) list_double_graphic_heading_pane_g2

0x784c,	// (0x0001421f) list_double_graphic_heading_pane_g3_ParamLimits

0x784c,	// (0x0001421f) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x0001bff3) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x0001bff3) list_double_graphic_heading_pane_g

0x7880,	// (0x00014253) list_double_graphic_heading_pane_t1_ParamLimits

0x7880,	// (0x00014253) list_double_graphic_heading_pane_t1

0x7896,	// (0x00014269) list_double_graphic_heading_pane_t2_ParamLimits

0x7896,	// (0x00014269) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x0001bffa) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x0001bffa) list_double_graphic_heading_pane_t

0x77b8,	// (0x0001418b) list_double_time_pane_g1_ParamLimits

0x77b8,	// (0x0001418b) list_double_time_pane_g1

0x764b,	// (0x0001401e) list_double_time_pane_g2_ParamLimits

0x764b,	// (0x0001401e) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x0001bfff) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x0001bfff) list_double_time_pane_g

0x78a8,	// (0x0001427b) list_double_time_pane_t1_ParamLimits

0x78a8,	// (0x0001427b) list_double_time_pane_t1

0x78be,	// (0x00014291) list_double_time_pane_t2_ParamLimits

0x78be,	// (0x00014291) list_double_time_pane_t2

0x78d0,	// (0x000142a3) list_double_time_pane_t3_ParamLimits

0x78d0,	// (0x000142a3) list_double_time_pane_t3

0x78e2,	// (0x000142b5) list_double_time_pane_t4_ParamLimits

0x78e2,	// (0x000142b5) list_double_time_pane_t4

0x0003,

0xf631,	// (0x0001c004) list_double_time_pane_t_ParamLimits

0xf631,	// (0x0001c004) list_double_time_pane_t

0x7765,	// (0x00014138) list_setting_pane_g1_ParamLimits

0x7765,	// (0x00014138) list_setting_pane_g1

0x7690,	// (0x00014063) list_setting_pane_g2_ParamLimits

0x7690,	// (0x00014063) list_setting_pane_g2

0x0001,

0xf63a,	// (0x0001c00d) list_setting_pane_g_ParamLimits

0xf63a,	// (0x0001c00d) list_setting_pane_g

0x78f4,	// (0x000142c7) list_setting_pane_t1_ParamLimits

0x78f4,	// (0x000142c7) list_setting_pane_t1

0x790b,	// (0x000142de) list_setting_pane_t2_ParamLimits

0x790b,	// (0x000142de) list_setting_pane_t2

0x0002,

0xf63f,	// (0x0001c012) list_setting_pane_t_ParamLimits

0xf63f,	// (0x0001c012) list_setting_pane_t

0x794a,	// (0x0001431d) set_value_pane_cp_ParamLimits

0x794a,	// (0x0001431d) set_value_pane_cp

0x7765,	// (0x00014138) list_setting_number_pane_g1_ParamLimits

0x7765,	// (0x00014138) list_setting_number_pane_g1

0x7690,	// (0x00014063) list_setting_number_pane_g2_ParamLimits

0x7690,	// (0x00014063) list_setting_number_pane_g2

0x0001,

0xf63a,	// (0x0001c00d) list_setting_number_pane_g_ParamLimits

0xf63a,	// (0x0001c00d) list_setting_number_pane_g

0x7958,	// (0x0001432b) list_setting_number_pane_t1_ParamLimits

0x7958,	// (0x0001432b) list_setting_number_pane_t1

0x796c,	// (0x0001433f) list_setting_number_pane_t2_ParamLimits

0x796c,	// (0x0001433f) list_setting_number_pane_t2

0x7983,	// (0x00014356) list_setting_number_pane_t3_ParamLimits

0x7983,	// (0x00014356) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x0001c019) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x0001c019) list_setting_number_pane_t

0x794a,	// (0x0001431d) set_value_pane_ParamLimits

0x794a,	// (0x0001431d) set_value_pane

0x3f27,	// (0x000108fa) bg_set_opt_pane_ParamLimits

0x3f27,	// (0x000108fa) bg_set_opt_pane

0x3f48,	// (0x0001091b) set_value_pane_t1

0x3f56,	// (0x00010929) slider_set_pane_cp3

0x3f5f,	// (0x00010932) volume_small_pane_cp

0x3f68,	// (0x0001093b) list_form_gen_pane

0x3f71,	// (0x00010944) scroll_pane_cp8

0x79c6,	// (0x00014399) form_field_data_pane_ParamLimits

0x79c6,	// (0x00014399) form_field_data_pane

0x79e4,	// (0x000143b7) form_field_data_wide_pane_ParamLimits

0x79e4,	// (0x000143b7) form_field_data_wide_pane

0x3f92,	// (0x00010965) form_field_popup_pane_ParamLimits

0x3f92,	// (0x00010965) form_field_popup_pane

0x7a0b,	// (0x000143de) form_field_popup_wide_pane_ParamLimits

0x7a0b,	// (0x000143de) form_field_popup_wide_pane

0x3fb4,	// (0x00010987) form_field_slider_pane_ParamLimits

0x3fb4,	// (0x00010987) form_field_slider_pane

0x3fc7,	// (0x0001099a) form_field_slider_wide_pane_ParamLimits

0x3fc7,	// (0x0001099a) form_field_slider_wide_pane

0x3fda,	// (0x000109ad) data_form_pane

0x7a36,	// (0x00014409) form_field_data_pane_t1

0x3fe6,	// (0x000109b9) input_focus_pane

0x3ff4,	// (0x000109c7) data_form_wide_pane

0x402c,	// (0x000109ff) form_field_data_wide_pane_t1

0x3cce,	// (0x000106a1) input_focus_pane_cp6

0x7a50,	// (0x00014423) form_field_popup_pane_t1

0x3fe6,	// (0x000109b9) input_focus_pane_cp7

0x404b,	// (0x00010a1e) list_form_pane

0x405f,	// (0x00010a32) form_field_popup_wide_pane_t1

0x3fe6,	// (0x000109b9) input_focus_pane_cp8

0x4071,	// (0x00010a44) list_form_wide_pane

0x7a72,	// (0x00014445) form_field_slider_pane_t1_ParamLimits

0x7a72,	// (0x00014445) form_field_slider_pane_t1

0x7a86,	// (0x00014459) form_field_slider_pane_t2_ParamLimits

0x7a86,	// (0x00014459) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x0001c029) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x0001c029) form_field_slider_pane_t

0x3856,	// (0x00010229) input_focus_pane_cp9_ParamLimits

0x3856,	// (0x00010229) input_focus_pane_cp9

0x7a98,	// (0x0001446b) slider_cont_pane_ParamLimits

0x7a98,	// (0x0001446b) slider_cont_pane

0x407d,	// (0x00010a50) form_field_slider_wide_pane_t1_ParamLimits

0x407d,	// (0x00010a50) form_field_slider_wide_pane_t1

0x408f,	// (0x00010a62) form_field_slider_wide_pane_t2_ParamLimits

0x408f,	// (0x00010a62) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x0001c02e) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x0001c02e) form_field_slider_wide_pane_t

0x3856,	// (0x00010229) input_focus_pane_cp10_ParamLimits

0x3856,	// (0x00010229) input_focus_pane_cp10

0x7aac,	// (0x0001447f) slider_cont_pane_cp1_ParamLimits

0x7aac,	// (0x0001447f) slider_cont_pane_cp1

0x7ac0,	// (0x00014493) slider_form_pane_cp

0x40a1,	// (0x00010a74) input_focus_pane_g1

0x40a9,	// (0x00010a7c) input_focus_pane_g2

0x40b1,	// (0x00010a84) input_focus_pane_g3

0x40b9,	// (0x00010a8c) input_focus_pane_g4

0x40c1,	// (0x00010a94) input_focus_pane_g5

0x40c9,	// (0x00010a9c) input_focus_pane_g6

0x40d1,	// (0x00010aa4) input_focus_pane_g7

0x40d9,	// (0x00010aac) input_focus_pane_g8

0x40e1,	// (0x00010ab4) input_focus_pane_g9

0x35ec,	// (0x0000ffbf) input_focus_pane_g10

0x0009,

0xf660,	// (0x0001c033) input_focus_pane_g

0x97a3,	// (0x00016176) wait_border_pane_g3_copy1

0x7ac8,	// (0x0001449b) data_form_pane_t1

0x35ec,	// (0x0000ffbf) wait_anim_pane_g1_copy1

0xa73d,	// (0x00017110) data_form_wide_pane_t1

0x7ae7,	// (0x000144ba) list_form_graphic_pane_cp_ParamLimits

0x7ae7,	// (0x000144ba) list_form_graphic_pane_cp

0xa712,	// (0x000170e5) slider_form_pane_g1

0xa71b,	// (0x000170ee) slider_form_pane_g2

0x0006,

0xf963,	// (0x0001c336) slider_form_pane_g

0x7afc,	// (0x000144cf) list_form_graphic_pane_ParamLimits

0x7afc,	// (0x000144cf) list_form_graphic_pane

0x7b0e,	// (0x000144e1) list_form_graphic_pane_g1

0x7b16,	// (0x000144e9) list_form_graphic_pane_t1_ParamLimits

0x7b16,	// (0x000144e9) list_form_graphic_pane_t1

0x386e,	// (0x00010241) list_highlight_pane_cp5_ParamLimits

0x386e,	// (0x00010241) list_highlight_pane_cp5

0x7b2b,	// (0x000144fe) find_pane_g1

0x7b34,	// (0x00014507) input_find_pane

0x7b3d,	// (0x00014510) input_find_pane_g1_ParamLimits

0x7b3d,	// (0x00014510) input_find_pane_g1

0x7b49,	// (0x0001451c) input_find_pane_t1_ParamLimits

0x7b49,	// (0x0001451c) input_find_pane_t1

0x7b5e,	// (0x00014531) input_find_pane_t2_ParamLimits

0x7b5e,	// (0x00014531) input_find_pane_t2

0x0001,

0xf675,	// (0x0001c048) input_find_pane_t_ParamLimits

0xf675,	// (0x0001c048) input_find_pane_t

0x7b73,	// (0x00014546) input_focus_pane_cp5_ParamLimits

0x7b73,	// (0x00014546) input_focus_pane_cp5

0x7b92,	// (0x00014565) bg_popup_window_pane_cp2_ParamLimits

0x7b92,	// (0x00014565) bg_popup_window_pane_cp2

0x7b9f,	// (0x00014572) listscroll_menu_pane_ParamLimits

0x7b9f,	// (0x00014572) listscroll_menu_pane

0x7bab,	// (0x0001457e) popup_submenu_window_ParamLimits

0x7bab,	// (0x0001457e) popup_submenu_window

0x7bdb,	// (0x000145ae) find_popup_pane_g1

0x7be3,	// (0x000145b6) input_popup_find_pane_cp

0x7bed,	// (0x000145c0) input_focus_pane_cp4_ParamLimits

0x7bed,	// (0x000145c0) input_focus_pane_cp4

0x7c09,	// (0x000145dc) input_popup_find_pane_t1_ParamLimits

0x7c09,	// (0x000145dc) input_popup_find_pane_t1

0x37b4,	// (0x00010187) bg_popup_sub_pane_cp

0x7c37,	// (0x0001460a) listscroll_popup_sub_pane

0x7c3f,	// (0x00014612) list_submenu_pane_ParamLimits

0x7c3f,	// (0x00014612) list_submenu_pane

0x7c50,	// (0x00014623) scroll_pane_cp4

0x7c58,	// (0x0001462b) list_single_popup_submenu_pane_ParamLimits

0x7c58,	// (0x0001462b) list_single_popup_submenu_pane

0x7c6d,	// (0x00014640) list_single_popup_submenu_pane_g1

0x7c75,	// (0x00014648) list_single_popup_submenu_pane_t1_ParamLimits

0x7c75,	// (0x00014648) list_single_popup_submenu_pane_t1

0x386e,	// (0x00010241) bg_active_tab_pane_cp1_ParamLimits

0x386e,	// (0x00010241) bg_active_tab_pane_cp1

0x7c8a,	// (0x0001465d) tabs_2_active_pane_g1

0x7c92,	// (0x00014665) tabs_2_active_pane_t1

0x386e,	// (0x00010241) bg_passive_tab_pane_cp1_ParamLimits

0x386e,	// (0x00010241) bg_passive_tab_pane_cp1

0x7c8a,	// (0x0001465d) tabs_2_passive_pane_g1

0x7c92,	// (0x00014665) tabs_2_passive_pane_t1

0x7ca4,	// (0x00014677) bg_active_tab_pane_cp4

0x7cb2,	// (0x00014685) tabs_2_long_active_pane_t1

0x7cc5,	// (0x00014698) bg_passive_tab_pane_cp4

0x5c66,	// (0x00012639) list_single_midp_graphic_pane_g4_ParamLimits

0x7ca4,	// (0x00014677) bg_active_tab_pane_cp5

0x7cd1,	// (0x000146a4) tabs_3_long_active_pane_t1

0x7cc5,	// (0x00014698) bg_passive_tab_pane_cp5

0x5c66,	// (0x00012639) list_single_midp_graphic_pane_g4

0x386e,	// (0x00010241) bg_popup_window_pane_cp13_ParamLimits

0x386e,	// (0x00010241) bg_popup_window_pane_cp13

0x7cec,	// (0x000146bf) listscroll_popup_fast_pane_ParamLimits

0x7cec,	// (0x000146bf) listscroll_popup_fast_pane

0x7cfb,	// (0x000146ce) grid_popup_fast_pane_ParamLimits

0x7cfb,	// (0x000146ce) grid_popup_fast_pane

0x7d0d,	// (0x000146e0) scroll_pane_cp9_ParamLimits

0x7d0d,	// (0x000146e0) scroll_pane_cp9

0xc6b4,	// (0x00019087) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc6b4,	// (0x00019087) list_single_graphic_hl_pane_t1_cp2

0x7d31,	// (0x00014704) input_focus_pane_cp20_ParamLimits

0x7d31,	// (0x00014704) input_focus_pane_cp20

0x7d3f,	// (0x00014712) query_popup_data_pane_t1_ParamLimits

0x7d3f,	// (0x00014712) query_popup_data_pane_t1

0x7d52,	// (0x00014725) query_popup_data_pane_t2_ParamLimits

0x7d52,	// (0x00014725) query_popup_data_pane_t2

0x7d98,	// (0x0001476b) query_popup_data_pane_t3_ParamLimits

0x7d98,	// (0x0001476b) query_popup_data_pane_t3

0x7dd9,	// (0x000147ac) query_popup_data_pane_t4_ParamLimits

0x7dd9,	// (0x000147ac) query_popup_data_pane_t4

0x7e15,	// (0x000147e8) query_popup_data_pane_t5_ParamLimits

0x7e15,	// (0x000147e8) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x0001c04d) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x0001c04d) query_popup_data_pane_t

0x40a1,	// (0x00010a74) bg_set_opt_pane_g1

0x40a9,	// (0x00010a7c) bg_set_opt_pane_g2

0x40b1,	// (0x00010a84) bg_set_opt_pane_g3

0x40b9,	// (0x00010a8c) bg_set_opt_pane_g4

0x40c1,	// (0x00010a94) bg_set_opt_pane_g5

0x40c9,	// (0x00010a9c) bg_set_opt_pane_g6

0x40d1,	// (0x00010aa4) bg_set_opt_pane_g7

0x40d9,	// (0x00010aac) bg_set_opt_pane_g8

0x40e1,	// (0x00010ab4) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x0001c058) bg_set_opt_pane_g

0x5219,	// (0x00011bec) control_top_pane_stacon_ParamLimits

0x5219,	// (0x00011bec) control_top_pane_stacon

0x526c,	// (0x00011c3f) signal_pane_stacon_ParamLimits

0x526c,	// (0x00011c3f) signal_pane_stacon

0x84a8,	// (0x00014e7b) stacon_top_pane_g1_ParamLimits

0x84a8,	// (0x00014e7b) stacon_top_pane_g1

0x5291,	// (0x00011c64) title_pane_stacon_ParamLimits

0x5291,	// (0x00011c64) title_pane_stacon

0x52bb,	// (0x00011c8e) uni_indicator_pane_stacon_ParamLimits

0x52bb,	// (0x00011c8e) uni_indicator_pane_stacon

0x52d0,	// (0x00011ca3) battery_pane_stacon_ParamLimits

0x52d0,	// (0x00011ca3) battery_pane_stacon

0x5314,	// (0x00011ce7) control_bottom_pane_stacon_ParamLimits

0x5314,	// (0x00011ce7) control_bottom_pane_stacon

0x5337,	// (0x00011d0a) navi_pane_stacon_ParamLimits

0x5337,	// (0x00011d0a) navi_pane_stacon

0x84ca,	// (0x00014e9d) stacon_bottom_pane_g1_ParamLimits

0x84ca,	// (0x00014e9d) stacon_bottom_pane_g1

0x4f6f,	// (0x00011942) aid_levels_signal_lsc_ParamLimits

0x4f6f,	// (0x00011942) aid_levels_signal_lsc

0x4f86,	// (0x00011959) signal_pane_stacon_g1_ParamLimits

0x4f86,	// (0x00011959) signal_pane_stacon_g1

0x4f9a,	// (0x0001196d) signal_pane_stacon_g2_ParamLimits

0x4f9a,	// (0x0001196d) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x0001c06b) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x0001c06b) signal_pane_stacon_g

0x4fcf,	// (0x000119a2) title_pane_stacon_t1_ParamLimits

0x4fcf,	// (0x000119a2) title_pane_stacon_t1

0x7e59,	// (0x0001482c) uni_indicator_pane_stacon_g1

0x7e63,	// (0x00014836) uni_indicator_pane_stacon_g2

0x7e6d,	// (0x00014840) uni_indicator_pane_stacon_g3

0x7e77,	// (0x0001484a) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x0001c077) uni_indicator_pane_stacon_g

0x4ff4,	// (0x000119c7) control_top_pane_stacon_g1

0x4ffc,	// (0x000119cf) control_top_pane_stacon_t1_ParamLimits

0x4ffc,	// (0x000119cf) control_top_pane_stacon_t1

0x5033,	// (0x00011a06) aid_levels_battery_lsc_ParamLimits

0x5033,	// (0x00011a06) aid_levels_battery_lsc

0x504b,	// (0x00011a1e) battery_pane_stacon_g1_ParamLimits

0x504b,	// (0x00011a1e) battery_pane_stacon_g1

0x505d,	// (0x00011a30) battery_pane_stacon_g2_ParamLimits

0x505d,	// (0x00011a30) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x0001c080) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x0001c080) battery_pane_stacon_g

0x509b,	// (0x00011a6e) navi_icon_pane_stacon

0x50af,	// (0x00011a82) navi_navi_pane_stacon

0x509b,	// (0x00011a6e) navi_text_pane_stacon

0x50c5,	// (0x00011a98) control_bottom_pane_stacon_g1

0x50cd,	// (0x00011aa0) control_bottom_pane_stacon_t1_ParamLimits

0x50cd,	// (0x00011aa0) control_bottom_pane_stacon_t1

0x7e9b,	// (0x0001486e) grid_app_pane_ParamLimits

0x7e9b,	// (0x0001486e) grid_app_pane

0x7ebd,	// (0x00014890) scroll_pane_cp15_ParamLimits

0x7ebd,	// (0x00014890) scroll_pane_cp15

0x7ed0,	// (0x000148a3) cell_app_pane_ParamLimits

0x7ed0,	// (0x000148a3) cell_app_pane

0x7efc,	// (0x000148cf) cell_app_pane_g1_ParamLimits

0x7efc,	// (0x000148cf) cell_app_pane_g1

0x7f20,	// (0x000148f3) cell_app_pane_g2_ParamLimits

0x7f20,	// (0x000148f3) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x0001c085) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x0001c085) cell_app_pane_g

0x7f2c,	// (0x000148ff) cell_app_pane_t1_ParamLimits

0x7f2c,	// (0x000148ff) cell_app_pane_t1

0x7f5d,	// (0x00014930) grid_highlight_pane_ParamLimits

0x7f5d,	// (0x00014930) grid_highlight_pane

0x40a1,	// (0x00010a74) cell_highlight_pane_g1

0x40a9,	// (0x00010a7c) cell_highlight_pane_g2

0x40b1,	// (0x00010a84) cell_highlight_pane_g3

0x40b9,	// (0x00010a8c) cell_highlight_pane_g4

0x40c1,	// (0x00010a94) cell_highlight_pane_g5

0x40c9,	// (0x00010a9c) cell_highlight_pane_g6

0x40d1,	// (0x00010aa4) cell_highlight_pane_g7

0x40d9,	// (0x00010aac) cell_highlight_pane_g8

0x40e1,	// (0x00010ab4) cell_highlight_pane_g9

0x35ec,	// (0x0000ffbf) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x0001c033) cell_highlight_pane_g

0x7f6e,	// (0x00014941) bg_scroll_pane

0x5117,	// (0x00011aea) scroll_handle_pane

0x7fb5,	// (0x00014988) scroll_bg_pane_g1

0x7fca,	// (0x0001499d) scroll_bg_pane_g2

0x7fe2,	// (0x000149b5) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x0001c08a) scroll_bg_pane_g

0x7ff7,	// (0x000149ca) scroll_handle_focus_pane_ParamLimits

0x7ff7,	// (0x000149ca) scroll_handle_focus_pane

0x7fb5,	// (0x00014988) scroll_handle_pane_g1

0x8004,	// (0x000149d7) scroll_handle_pane_g2

0x7fe2,	// (0x000149b5) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x0001c091) scroll_handle_pane_g

0x7bed,	// (0x000145c0) bg_popup_sub_pane_cp21_ParamLimits

0x7bed,	// (0x000145c0) bg_popup_sub_pane_cp21

0x8018,	// (0x000149eb) popup_fep_japan_predictive_window_t1_ParamLimits

0x8018,	// (0x000149eb) popup_fep_japan_predictive_window_t1

0x802f,	// (0x00014a02) popup_fep_japan_predictive_window_t2_ParamLimits

0x802f,	// (0x00014a02) popup_fep_japan_predictive_window_t2

0x8062,	// (0x00014a35) popup_fep_japan_predictive_window_t3_ParamLimits

0x8062,	// (0x00014a35) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x0001c098) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x0001c098) popup_fep_japan_predictive_window_t

0x37b4,	// (0x00010187) bg_popup_sub_pane_cp23

0x8099,	// (0x00014a6c) listscroll_japin_cand_pane

0x80a1,	// (0x00014a74) popup_fep_japan_candidate_window_t1

0x80af,	// (0x00014a82) candidate_pane_ParamLimits

0x80af,	// (0x00014a82) candidate_pane

0x80c1,	// (0x00014a94) scroll_pane_cp30

0x80cb,	// (0x00014a9e) list_single_popup_jap_candidate_pane_ParamLimits

0x80cb,	// (0x00014a9e) list_single_popup_jap_candidate_pane

0x37b4,	// (0x00010187) list_highlight_pane_cp30

0x80df,	// (0x00014ab2) list_single_popup_jap_candidate_pane_t1

0x80ee,	// (0x00014ac1) level_1_signal

0x80fb,	// (0x00014ace) level_2_signal

0x8108,	// (0x00014adb) level_3_signal

0x8115,	// (0x00014ae8) level_4_signal

0x8122,	// (0x00014af5) level_5_signal

0x812f,	// (0x00014b02) level_6_signal

0x813c,	// (0x00014b0f) level_7_signal

0x80ee,	// (0x00014ac1) level_1_battery

0x80fb,	// (0x00014ace) level_2_battery

0x8108,	// (0x00014adb) level_3_battery

0x8115,	// (0x00014ae8) level_4_battery

0x8122,	// (0x00014af5) level_5_battery

0x812f,	// (0x00014b02) level_6_battery

0x813c,	// (0x00014b0f) level_7_battery

0x8161,	// (0x00014b34) list_menu_pane_ParamLimits

0x8161,	// (0x00014b34) list_menu_pane

0x8177,	// (0x00014b4a) scroll_pane_cp25_ParamLimits

0x8177,	// (0x00014b4a) scroll_pane_cp25

0x8190,	// (0x00014b63) list_double2_graphic_pane_cp2_ParamLimits

0x8190,	// (0x00014b63) list_double2_graphic_pane_cp2

0x8190,	// (0x00014b63) list_double2_large_graphic_pane_cp2_ParamLimits

0x8190,	// (0x00014b63) list_double2_large_graphic_pane_cp2

0x8190,	// (0x00014b63) list_double2_pane_cp2_ParamLimits

0x8190,	// (0x00014b63) list_double2_pane_cp2

0x8190,	// (0x00014b63) list_double_graphic_pane_cp2_ParamLimits

0x8190,	// (0x00014b63) list_double_graphic_pane_cp2

0x8190,	// (0x00014b63) list_double_large_graphic_pane_cp2_ParamLimits

0x8190,	// (0x00014b63) list_double_large_graphic_pane_cp2

0x8190,	// (0x00014b63) list_double_number_pane_cp2_ParamLimits

0x8190,	// (0x00014b63) list_double_number_pane_cp2

0x8190,	// (0x00014b63) list_double_pane_cp2_ParamLimits

0x8190,	// (0x00014b63) list_double_pane_cp2

0x81b6,	// (0x00014b89) list_single_2graphic_pane_cp2_ParamLimits

0x81b6,	// (0x00014b89) list_single_2graphic_pane_cp2

0x81b6,	// (0x00014b89) list_single_graphic_heading_pane_cp2_ParamLimits

0x81b6,	// (0x00014b89) list_single_graphic_heading_pane_cp2

0x81b6,	// (0x00014b89) list_single_graphic_pane_cp2_ParamLimits

0x81b6,	// (0x00014b89) list_single_graphic_pane_cp2

0x81b6,	// (0x00014b89) list_single_heading_pane_cp2_ParamLimits

0x81b6,	// (0x00014b89) list_single_heading_pane_cp2

0x81d3,	// (0x00014ba6) list_single_large_graphic_pane_cp2_ParamLimits

0x81d3,	// (0x00014ba6) list_single_large_graphic_pane_cp2

0x81b6,	// (0x00014b89) list_single_number_heading_pane_cp2_ParamLimits

0x81b6,	// (0x00014b89) list_single_number_heading_pane_cp2

0x81b6,	// (0x00014b89) list_single_number_pane_cp2_ParamLimits

0x81b6,	// (0x00014b89) list_single_number_pane_cp2

0x81e3,	// (0x00014bb6) list_single_pane_cp2_ParamLimits

0x81e3,	// (0x00014bb6) list_single_pane_cp2

0x825e,	// (0x00014c31) bg_popup_sub_pane_cp22

0x51c9,	// (0x00011b9c) popup_side_volume_key_window_g1

0x51f3,	// (0x00011bc6) popup_side_volume_key_window_t1

0x5211,	// (0x00011be4) volume_small_pane_cp1

0x3856,	// (0x00010229) bg_popup_sub_pane_cp24_ParamLimits

0x3856,	// (0x00010229) bg_popup_sub_pane_cp24

0x8274,	// (0x00014c47) fep_china_uni_candidate_pane_ParamLimits

0x8274,	// (0x00014c47) fep_china_uni_candidate_pane

0x8288,	// (0x00014c5b) fep_china_uni_entry_pane

0x8298,	// (0x00014c6b) popup_fep_china_uni_window_g1

0x82b4,	// (0x00014c87) fep_china_uni_entry_pane_g1

0x82be,	// (0x00014c91) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x0001c0c9) fep_china_uni_entry_pane_g

0x82c8,	// (0x00014c9b) fep_entry_item_pane

0x82d2,	// (0x00014ca5) fep_candidate_item_pane

0x82da,	// (0x00014cad) fep_china_uni_candidate_pane_g1

0x82e4,	// (0x00014cb7) fep_china_uni_candidate_pane_g2

0x82ec,	// (0x00014cbf) fep_china_uni_candidate_pane_g3

0x82f4,	// (0x00014cc7) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x0001c0ce) fep_china_uni_candidate_pane_g

0x35ec,	// (0x0000ffbf) fep_entry_item_pane_g1

0x82fe,	// (0x00014cd1) fep_entry_item_pane_t1_ParamLimits

0x82fe,	// (0x00014cd1) fep_entry_item_pane_t1

0x8314,	// (0x00014ce7) fep_candidate_item_pane_t1_ParamLimits

0x8314,	// (0x00014ce7) fep_candidate_item_pane_t1

0x8329,	// (0x00014cfc) fep_candidate_item_pane_t2_ParamLimits

0x8329,	// (0x00014cfc) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x0001c0d7) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x0001c0d7) fep_candidate_item_pane_t

0x386e,	// (0x00010241) list_highlight_pane_cp31_ParamLimits

0x386e,	// (0x00010241) list_highlight_pane_cp31

0x833b,	// (0x00014d0e) level_1_signal_lsc

0x8344,	// (0x00014d17) level_2_signal_lsc

0x834d,	// (0x00014d20) level_3_signal_lsc

0x8356,	// (0x00014d29) level_4_signal_lsc

0x835f,	// (0x00014d32) level_5_signal_lsc

0x8368,	// (0x00014d3b) level_6_signal_lsc

0x8371,	// (0x00014d44) level_7_signal_lsc

0x8371,	// (0x00014d44) level_1_battery_lsc

0x837a,	// (0x00014d4d) level_2_battery_lsc

0x8383,	// (0x00014d56) level_3_battery_lsc

0x838c,	// (0x00014d5f) level_4_battery_lsc

0x8395,	// (0x00014d68) level_5_battery_lsc

0x839e,	// (0x00014d71) level_6_battery_lsc

0x833b,	// (0x00014d0e) level_7_battery_lsc

0x83a7,	// (0x00014d7a) scroll_handle_focus_pane_g1

0x83b0,	// (0x00014d83) scroll_handle_focus_pane_g2

0x83b9,	// (0x00014d8c) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x0001c0dc) scroll_handle_focus_pane_g

0x83c2,	// (0x00014d95) list_single_2graphic_pane_g1_ParamLimits

0x83c2,	// (0x00014d95) list_single_2graphic_pane_g1

0x75fe,	// (0x00013fd1) list_single_2graphic_pane_g2_ParamLimits

0x75fe,	// (0x00013fd1) list_single_2graphic_pane_g2

0x7584,	// (0x00013f57) list_single_2graphic_pane_g3_ParamLimits

0x7584,	// (0x00013f57) list_single_2graphic_pane_g3

0x83ce,	// (0x00014da1) list_single_2graphic_pane_g4_ParamLimits

0x83ce,	// (0x00014da1) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x0001c0e3) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x0001c0e3) list_single_2graphic_pane_g

0x83df,	// (0x00014db2) list_single_2graphic_pane_t1_ParamLimits

0x83df,	// (0x00014db2) list_single_2graphic_pane_t1

0x840d,	// (0x00014de0) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x840d,	// (0x00014de0) list_double2_graphic_large_graphic_pane_g1

0x767f,	// (0x00014052) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x767f,	// (0x00014052) list_double2_graphic_large_graphic_pane_g2

0x7690,	// (0x00014063) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7690,	// (0x00014063) list_double2_graphic_large_graphic_pane_g3

0x841f,	// (0x00014df2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x841f,	// (0x00014df2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x0001c0ec) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x0001c0ec) list_double2_graphic_large_graphic_pane_g

0x842b,	// (0x00014dfe) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x842b,	// (0x00014dfe) list_double2_graphic_large_graphic_pane_t1

0x8441,	// (0x00014e14) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8441,	// (0x00014e14) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x0001c0f5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x0001c0f5) list_double2_graphic_large_graphic_pane_t

0x858d,	// (0x00014f60) popup_fast_swap_window_ParamLimits

0x858d,	// (0x00014f60) popup_fast_swap_window

0x85ab,	// (0x00014f7e) popup_side_volume_key_window

0x85c9,	// (0x00014f9c) stacon_top_pane

0x85d3,	// (0x00014fa6) status_pane_ParamLimits

0x85d3,	// (0x00014fa6) status_pane

0x35e2,	// (0x0000ffb5) status_small_pane

0x37b4,	// (0x00010187) control_pane

0x37b4,	// (0x00010187) stacon_bottom_pane

0x3f71,	// (0x00010944) scroll_pane_cp121

0x3f68,	// (0x0001093b) set_content_pane

0x8453,	// (0x00014e26) bg_active_tab_pane_g1_cp1

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp1

0x8465,	// (0x00014e38) bg_active_tab_pane_g3_cp1

0x8453,	// (0x00014e26) bg_passive_tab_pane_g1_cp1

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp1

0x8465,	// (0x00014e38) bg_passive_tab_pane_g3_cp1

0x846e,	// (0x00014e41) bg_active_tab_pane_g1_cp2

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp2

0x8477,	// (0x00014e4a) bg_active_tab_pane_g3_cp2

0x846e,	// (0x00014e41) bg_passive_tab_pane_g1_cp2

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp2

0x8477,	// (0x00014e4a) bg_passive_tab_pane_g3_cp2

0x8480,	// (0x00014e53) bg_active_tab_pane_g1_cp3

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp3

0x8489,	// (0x00014e5c) bg_active_tab_pane_g3_cp3

0x8480,	// (0x00014e53) bg_passive_tab_pane_g1_cp3

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp3

0x8489,	// (0x00014e5c) bg_passive_tab_pane_g3_cp3

0x8492,	// (0x00014e65) bg_active_tab_pane_g1_cp4

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp4

0x849d,	// (0x00014e70) bg_active_tab_pane_g3_cp4

0x8492,	// (0x00014e65) bg_passive_tab_pane_g1_cp4

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp4

0x849d,	// (0x00014e70) bg_passive_tab_pane_g3_cp4

0x84e6,	// (0x00014eb9) bg_active_tab_pane_g1_cp5

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp5

0x84ef,	// (0x00014ec2) bg_active_tab_pane_g3_cp5

0x84e6,	// (0x00014eb9) bg_passive_tab_pane_g1_cp5

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp5

0x84ef,	// (0x00014ec2) bg_passive_tab_pane_g3_cp5

0x84f8,	// (0x00014ecb) list_set_graphic_pane_ParamLimits

0x84f8,	// (0x00014ecb) list_set_graphic_pane

0x37b4,	// (0x00010187) bg_set_opt_pane_cp4

0x850e,	// (0x00014ee1) list_set_graphic_pane_g1_ParamLimits

0x850e,	// (0x00014ee1) list_set_graphic_pane_g1

0x851a,	// (0x00014eed) list_set_graphic_pane_g2_ParamLimits

0x851a,	// (0x00014eed) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x0001c0fa) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x0001c0fa) list_set_graphic_pane_g

0x0009,

0xfaa8,	// (0x0001c47b) volume_small_pane_cp_g

0x853e,	// (0x00014f11) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x853e,	// (0x00014f11) list_double2_large_graphic_pane_g1_cp2

0x854c,	// (0x00014f1f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x854c,	// (0x00014f1f) list_double2_large_graphic_pane_g2_cp2

0x855d,	// (0x00014f30) list_double2_large_graphic_pane_g3_cp2

0x8565,	// (0x00014f38) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8565,	// (0x00014f38) list_double2_large_graphic_pane_t1_cp2

0x857b,	// (0x00014f4e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x857b,	// (0x00014f4e) list_double2_large_graphic_pane_t2_cp2

0xa287,	// (0x00016c5a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa287,	// (0x00016c5a) list_double_large_graphic_pane_g1_cp2

0xa29a,	// (0x00016c6d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa29a,	// (0x00016c6d) list_double_large_graphic_pane_g2_cp2

0x86f1,	// (0x000150c4) list_double_large_graphic_pane_g3_cp2

0xa2ab,	// (0x00016c7e) list_double_large_graphic_pane_g4_cp

0xa2b3,	// (0x00016c86) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa2b3,	// (0x00016c86) list_double_large_graphic_pane_t1_cp2

0xa2ca,	// (0x00016c9d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa2ca,	// (0x00016c9d) list_double_large_graphic_pane_t2_cp2

0x85e1,	// (0x00014fb4) list_double2_graphic_pane_g1_cp2_ParamLimits

0x85e1,	// (0x00014fb4) list_double2_graphic_pane_g1_cp2

0x85ef,	// (0x00014fc2) list_double2_graphic_pane_g2_cp2_ParamLimits

0x85ef,	// (0x00014fc2) list_double2_graphic_pane_g2_cp2

0x8600,	// (0x00014fd3) list_double2_graphic_pane_g3_cp2

0x860a,	// (0x00014fdd) list_double2_graphic_pane_t1_cp2_ParamLimits

0x860a,	// (0x00014fdd) list_double2_graphic_pane_t1_cp2

0x8620,	// (0x00014ff3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8620,	// (0x00014ff3) list_double2_graphic_pane_t2_cp2

0x8632,	// (0x00015005) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8632,	// (0x00015005) list_single_number_heading_pane_g1_cp2

0x863e,	// (0x00015011) list_single_number_heading_pane_g2_cp2

0x8646,	// (0x00015019) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8646,	// (0x00015019) list_single_number_heading_pane_t1_cp2

0x865c,	// (0x0001502f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x865c,	// (0x0001502f) list_single_number_heading_pane_t2_cp2

0x8670,	// (0x00015043) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8670,	// (0x00015043) list_single_number_heading_pane_t3_cp2

0x8632,	// (0x00015005) list_single_heading_pane_g1_cp2_ParamLimits

0x8632,	// (0x00015005) list_single_heading_pane_g1_cp2

0x863e,	// (0x00015011) list_single_heading_pane_g2_cp2

0x8646,	// (0x00015019) list_single_heading_pane_t1_cp2_ParamLimits

0x8646,	// (0x00015019) list_single_heading_pane_t1_cp2

0xa081,	// (0x00016a54) list_single_heading_pane_t2_cp2_ParamLimits

0xa081,	// (0x00016a54) list_single_heading_pane_t2_cp2

0x9fc9,	// (0x0001699c) list_double_graphic_pane_g1_cp2_ParamLimits

0x9fc9,	// (0x0001699c) list_double_graphic_pane_g1_cp2

0x9fd5,	// (0x000169a8) list_double_graphic_pane_g2_cp2_ParamLimits

0x9fd5,	// (0x000169a8) list_double_graphic_pane_g2_cp2

0x9fe4,	// (0x000169b7) list_double_graphic_pane_g3_cp2

0x9fec,	// (0x000169bf) list_double_graphic_pane_t1_cp2_ParamLimits

0x9fec,	// (0x000169bf) list_double_graphic_pane_t1_cp2

0xa002,	// (0x000169d5) list_double_graphic_pane_t2_cp2_ParamLimits

0xa002,	// (0x000169d5) list_double_graphic_pane_t2_cp2

0x86e5,	// (0x000150b8) list_double_number_pane_g1_cp2_ParamLimits

0x86e5,	// (0x000150b8) list_double_number_pane_g1_cp2

0x86f1,	// (0x000150c4) list_double_number_pane_g2_cp2

0x9f8d,	// (0x00016960) list_double_number_pane_t1_cp2_ParamLimits

0x9f8d,	// (0x00016960) list_double_number_pane_t1_cp2

0x9fa1,	// (0x00016974) list_double_number_pane_t2_cp2_ParamLimits

0x9fa1,	// (0x00016974) list_double_number_pane_t2_cp2

0x9fb7,	// (0x0001698a) list_double_number_pane_t3_cp2_ParamLimits

0x9fb7,	// (0x0001698a) list_double_number_pane_t3_cp2

0x9e76,	// (0x00016849) list_single_graphic_pane_g1_cp2_ParamLimits

0x9e76,	// (0x00016849) list_single_graphic_pane_g1_cp2

0x875a,	// (0x0001512d) list_single_graphic_pane_g2_cp2_ParamLimits

0x875a,	// (0x0001512d) list_single_graphic_pane_g2_cp2

0x8766,	// (0x00015139) list_single_graphic_pane_g3_cp2

0x9e4c,	// (0x0001681f) list_single_graphic_pane_t1_cp2_ParamLimits

0x9e4c,	// (0x0001681f) list_single_graphic_pane_t1_cp2

0x875a,	// (0x0001512d) list_single_number_pane_g1_cp2_ParamLimits

0x875a,	// (0x0001512d) list_single_number_pane_g1_cp2

0x8766,	// (0x00015139) list_single_number_pane_g2_cp2

0x9e4c,	// (0x0001681f) list_single_number_pane_t1_cp2_ParamLimits

0x9e4c,	// (0x0001681f) list_single_number_pane_t1_cp2

0x9e62,	// (0x00016835) list_single_number_pane_t2_cp2_ParamLimits

0x9e62,	// (0x00016835) list_single_number_pane_t2_cp2

0x854c,	// (0x00014f1f) list_double2_pane_g1_cp2_ParamLimits

0x854c,	// (0x00014f1f) list_double2_pane_g1_cp2

0x855d,	// (0x00014f30) list_double2_pane_g2_cp2

0x86bd,	// (0x00015090) list_double2_pane_t1_cp2_ParamLimits

0x86bd,	// (0x00015090) list_double2_pane_t1_cp2

0x86d3,	// (0x000150a6) list_double2_pane_t2_cp2_ParamLimits

0x86d3,	// (0x000150a6) list_double2_pane_t2_cp2

0x86e5,	// (0x000150b8) list_double_pane_g1_cp2_ParamLimits

0x86e5,	// (0x000150b8) list_double_pane_g1_cp2

0x86f1,	// (0x000150c4) list_double_pane_g2_cp2

0x86f9,	// (0x000150cc) list_double_pane_t1_cp2_ParamLimits

0x86f9,	// (0x000150cc) list_double_pane_t1_cp2

0x870f,	// (0x000150e2) list_double_pane_t2_cp2_ParamLimits

0x870f,	// (0x000150e2) list_double_pane_t2_cp2

0x874a,	// (0x0001511d) list_single_pane_cp2_g3

0x875a,	// (0x0001512d) list_single_pane_g1_cp2_ParamLimits

0x875a,	// (0x0001512d) list_single_pane_g1_cp2

0x8766,	// (0x00015139) list_single_pane_g2_cp2

0x876e,	// (0x00015141) list_single_pane_t1_cp2_ParamLimits

0x876e,	// (0x00015141) list_single_pane_t1_cp2

0x8786,	// (0x00015159) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8786,	// (0x00015159) list_single_large_graphic_pane_g1_cp2

0x8794,	// (0x00015167) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8794,	// (0x00015167) list_single_large_graphic_pane_g2_cp2

0x87a0,	// (0x00015173) list_single_large_graphic_pane_g3_cp2

0x87a8,	// (0x0001517b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x87a8,	// (0x0001517b) list_single_large_graphic_pane_g4_cp1

0x87c2,	// (0x00015195) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x87c2,	// (0x00015195) list_single_large_graphic_pane_t1_cp2

0x9e16,	// (0x000167e9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9e16,	// (0x000167e9) list_single_graphic_heading_pane_g1_cp2

0x9de3,	// (0x000167b6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x9de3,	// (0x000167b6) list_single_graphic_heading_pane_g4_cp2

0x8766,	// (0x00015139) list_single_graphic_heading_pane_g5_cp2

0x9e22,	// (0x000167f5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9e22,	// (0x000167f5) list_single_graphic_heading_pane_t1_cp2

0x9e38,	// (0x0001680b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x9e38,	// (0x0001680b) list_single_graphic_heading_pane_t2_cp2

0x9dd7,	// (0x000167aa) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9dd7,	// (0x000167aa) list_single_2graphic_pane_g1_cp2

0x9de3,	// (0x000167b6) list_single_2graphic_pane_g2_cp2_ParamLimits

0x9de3,	// (0x000167b6) list_single_2graphic_pane_g2_cp2

0x8766,	// (0x00015139) list_single_2graphic_pane_g3_cp2

0x9df4,	// (0x000167c7) list_single_2graphic_pane_g4_cp2_ParamLimits

0x9df4,	// (0x000167c7) list_single_2graphic_pane_g4_cp2

0x9e00,	// (0x000167d3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9e00,	// (0x000167d3) list_single_2graphic_pane_t1_cp2

0x35ec,	// (0x0000ffbf) list_highlight_pane_g10_cp1

0x99af,	// (0x00016382) list_highlight_pane_g1_cp1

0x99b7,	// (0x0001638a) list_highlight_pane_g2_cp1

0x99bf,	// (0x00016392) list_highlight_pane_g3_cp1

0x99c7,	// (0x0001639a) list_highlight_pane_g4_cp1

0x99cf,	// (0x000163a2) list_highlight_pane_g5_cp1

0x99d7,	// (0x000163aa) list_highlight_pane_g6_cp1

0x99df,	// (0x000163b2) list_highlight_pane_g7_cp1

0x99e7,	// (0x000163ba) list_highlight_pane_g8_cp1

0x99ef,	// (0x000163c2) list_highlight_pane_g9_cp1

0x98cf,	// (0x000162a2) form_field_slider_pane_t3

0x98dd,	// (0x000162b0) form_field_slider_pane_t4

0x98eb,	// (0x000162be) slider_form_pane_ParamLimits

0x98eb,	// (0x000162be) slider_form_pane

0x37b4,	// (0x00010187) control_abbreviations

0x37b4,	// (0x00010187) control_conventions

0x37b4,	// (0x00010187) control_definitions

0x37b4,	// (0x00010187) format_table_attribute

0xa0d7,	// (0x00016aaa) bg_popup_preview_window_pane_g9

0x37b4,	// (0x00010187) format_table_data2

0x37b4,	// (0x00010187) format_table_data3

0x37b4,	// (0x00010187) format_table_data_example

0x0008,

0x37b4,	// (0x00010187) intro_purpose

0xf8c3,	// (0x0001c296) bg_popup_preview_window_pane_g

0x37b4,	// (0x00010187) texts_category

0x37b4,	// (0x00010187) texts_graphics

0x87d8,	// (0x000151ab) text_digital

0x87e7,	// (0x000151ba) text_primary

0x87f6,	// (0x000151c9) text_primary_small

0x8805,	// (0x000151d8) text_secondary

0x8814,	// (0x000151e7) text_title

0xa8f9,	// (0x000172cc) bg_passive_tab_pane_g1_cp3_srt

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp3_srt

0xa902,	// (0x000172d5) bg_passive_tab_pane_g3_cp3_srt

0x386e,	// (0x00010241) bg_active_tab_pane_cp3_srt_ParamLimits

0x386e,	// (0x00010241) bg_active_tab_pane_cp3_srt

0xa90b,	// (0x000172de) tabs_4_active_pane_srt_g1

0xa913,	// (0x000172e6) tabs_4_active_pane_srt_t1_ParamLimits

0xa913,	// (0x000172e6) tabs_4_active_pane_srt_t1

0xa8f9,	// (0x000172cc) bg_active_tab_pane_g1_cp3_copy1

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp3_copy1

0xa902,	// (0x000172d5) bg_active_tab_pane_g3_cp3_copy1

0x386e,	// (0x00010241) tabs_2_long_active_pane_srt_ParamLimits

0x386e,	// (0x00010241) tabs_2_long_active_pane_srt

0x386e,	// (0x00010241) tabs_2_long_passive_pane_srt_ParamLimits

0x386e,	// (0x00010241) tabs_2_long_passive_pane_srt

0x7cc5,	// (0x00014698) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7cc5,	// (0x00014698) bg_passive_tab_pane_cp4_srt

0xa529,	// (0x00016efc) bg_passive_tab_pane_g1_cp4_srt

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp4_srt

0xa532,	// (0x00016f05) bg_passive_tab_pane_g3_cp4_srt

0x7ca4,	// (0x00014677) bg_active_tab_pane_cp4_srt_ParamLimits

0x7ca4,	// (0x00014677) bg_active_tab_pane_cp4_srt

0xa53b,	// (0x00016f0e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa53b,	// (0x00016f0e) tabs_2_long_active_pane_srt_t1

0xa529,	// (0x00016efc) bg_active_tab_pane_g1_cp4_srt

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp4_srt

0xa532,	// (0x00016f05) bg_active_tab_pane_g3_cp4_srt

0x3856,	// (0x00010229) tabs_3_long_active_pane_srt_ParamLimits

0x3856,	// (0x00010229) tabs_3_long_active_pane_srt

0x3856,	// (0x00010229) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3856,	// (0x00010229) tabs_3_long_passive_pane_cp_srt

0x3856,	// (0x00010229) tabs_3_long_passive_pane_srt_ParamLimits

0x3856,	// (0x00010229) tabs_3_long_passive_pane_srt

0x7cc5,	// (0x00014698) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7cc5,	// (0x00014698) bg_passive_tab_pane_cp5_srt

0x84e6,	// (0x00014eb9) bg_passive_tab_pane_g1_cp5_srt

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp5_srt

0x84ef,	// (0x00014ec2) bg_passive_tab_pane_g3_cp5_srt

0x7ca4,	// (0x00014677) bg_active_tab_pane_cp5_srt_ParamLimits

0x7ca4,	// (0x00014677) bg_active_tab_pane_cp5_srt

0xa517,	// (0x00016eea) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa517,	// (0x00016eea) tabs_3_long_active_pane_srt_t1

0x84e6,	// (0x00014eb9) bg_active_tab_pane_g1_cp5_srt

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp5_srt

0x84ef,	// (0x00014ec2) bg_active_tab_pane_g3_cp5_srt

0xa509,	// (0x00016edc) navi_text_pane_srt_t1

0xa501,	// (0x00016ed4) navi_icon_pane_srt_g1

0x89ec,	// (0x000153bf) midp_editing_number_pane_srt

0x8823,	// (0x000151f6) midp_ticker_pane_srt

0x89f4,	// (0x000153c7) midp_ticker_pane_srt_g1

0x89fc,	// (0x000153cf) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x0001c119) midp_ticker_pane_srt_g

0x8a04,	// (0x000153d7) midp_ticker_pane_srt_t1

0xa4f2,	// (0x00016ec5) midp_editing_number_pane_t1_copy1

0x882b,	// (0x000151fe) listscroll_midp_pane

0x882b,	// (0x000151fe) midp_form_pane

0x889a,	// (0x0001526d) midp_info_popup_window_ParamLimits

0x889a,	// (0x0001526d) midp_info_popup_window

0x7bed,	// (0x000145c0) bg_popup_sub_pane_cp50_ParamLimits

0x7bed,	// (0x000145c0) bg_popup_sub_pane_cp50

0x95d1,	// (0x00015fa4) listscroll_midp_info_pane_ParamLimits

0x95d1,	// (0x00015fa4) listscroll_midp_info_pane

0x95b1,	// (0x00015f84) listscroll_form_midp_pane_ParamLimits

0x95b1,	// (0x00015f84) listscroll_form_midp_pane

0x95bd,	// (0x00015f90) scroll_bar_cp050

0x9591,	// (0x00015f64) list_midp_pane

0xb6f5,	// (0x000180c8) signal_pane_g2_cp

0x94cb,	// (0x00015e9e) listscroll_midp_info_pane_t1_ParamLimits

0x94cb,	// (0x00015e9e) listscroll_midp_info_pane_t1

0x94e3,	// (0x00015eb6) listscroll_midp_info_pane_t2_ParamLimits

0x94e3,	// (0x00015eb6) listscroll_midp_info_pane_t2

0x9521,	// (0x00015ef4) listscroll_midp_info_pane_t3_ParamLimits

0x9521,	// (0x00015ef4) listscroll_midp_info_pane_t3

0x955b,	// (0x00015f2e) listscroll_midp_info_pane_t4_ParamLimits

0x955b,	// (0x00015f2e) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x0001c1d1) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x0001c1d1) listscroll_midp_info_pane_t

0x7c50,	// (0x00014623) scroll_pane_cp21

0x9465,	// (0x00015e38) form_midp_field_choice_group_pane

0x946e,	// (0x00015e41) form_midp_field_text_pane

0x94b1,	// (0x00015e84) form_midp_field_time_pane

0x94b9,	// (0x00015e8c) form_midp_gauge_slider_pane

0x94c2,	// (0x00015e95) form_midp_gauge_wait_pane

0x37b4,	// (0x00010187) form_midp_image_pane

0x9445,	// (0x00015e18) list_single_midp_pane_ParamLimits

0x9445,	// (0x00015e18) list_single_midp_pane

0x9409,	// (0x00015ddc) form_midp_field_text_pane_t1

0x91ec,	// (0x00015bbf) input_focus_pane_cp050

0x9434,	// (0x00015e07) list_midp_form_text_pane

0x93d8,	// (0x00015dab) form_midp_field_choice_group_pane_t1

0x93e6,	// (0x00015db9) input_focus_pane_cp051

0x93fa,	// (0x00015dcd) list_midp_choice_pane

0x37b4,	// (0x00010187) status_idle_pane

0x93bc,	// (0x00015d8f) form_midp_field_time_pane_t1

0x35ec,	// (0x0000ffbf) wait_anim_pane_g2_copy1

0x93ca,	// (0x00015d9d) form_midp_field_time_pane_t2

0x0001,

0x894a,	// (0x0001531d) aid_navinavi_width_2_pane

0xf7f9,	// (0x0001c1cc) form_midp_field_time_pane_t

0x37b4,	// (0x00010187) input_focus_pane_cp052

0x37b4,	// (0x00010187) bg_input_focus_pane_cp040

0x937c,	// (0x00015d4f) form_midp_gauge_slider_pane_t1

0x938a,	// (0x00015d5d) form_midp_gauge_slider_pane_t2

0x9398,	// (0x00015d6b) form_midp_gauge_slider_pane_t3

0x93a6,	// (0x00015d79) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x0001c1c3) form_midp_gauge_slider_pane_t

0x93b4,	// (0x00015d87) form_midp_slider_pane

0x386e,	// (0x00010241) bg_input_focus_pane_cp041_ParamLimits

0x386e,	// (0x00010241) bg_input_focus_pane_cp041

0x9349,	// (0x00015d1c) form_midp_gauge_wait_pane_t1_ParamLimits

0x9349,	// (0x00015d1c) form_midp_gauge_wait_pane_t1

0x935b,	// (0x00015d2e) form_midp_gauge_wait_pane_t2_ParamLimits

0x935b,	// (0x00015d2e) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x0001c1be) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x0001c1be) form_midp_gauge_wait_pane_t

0x936d,	// (0x00015d40) form_midp_wait_pane_ParamLimits

0x936d,	// (0x00015d40) form_midp_wait_pane

0x9311,	// (0x00015ce4) form_midp_image_pane_g1

0x931a,	// (0x00015ced) form_midp_image_pane_t1

0x9329,	// (0x00015cfc) form_midp_image_pane_t2

0x9338,	// (0x00015d0b) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x0001c1b7) form_midp_image_pane_t

0x92f9,	// (0x00015ccc) list_single_midp_pane_g1

0x9302,	// (0x00015cd5) list_single_midp_pane_t1

0x92df,	// (0x00015cb2) list_midp_form_item_pane_ParamLimits

0x92df,	// (0x00015cb2) list_midp_form_item_pane

0x88f2,	// (0x000152c5) list_midp_form_item_pane_t1

0x8901,	// (0x000152d4) midp_ticker_pane_g1

0x890d,	// (0x000152e0) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x0001c0ff) midp_ticker_pane_g

0x8919,	// (0x000152ec) midp_ticker_pane_t1

0xa794,	// (0x00017167) midp_editing_number_pane_t1

0xa772,	// (0x00017145) midp_editing_number_pane

0xa781,	// (0x00017154) midp_ticker_pane

0x95dd,	// (0x00015fb0) ai_message_heading_pane

0x37b4,	// (0x00010187) bg_popup_window_pane_cp14

0x95e5,	// (0x00015fb8) listscroll_ai_message_pane

0xa450,	// (0x00016e23) ai_message_heading_pane_g1_ParamLimits

0xa450,	// (0x00016e23) ai_message_heading_pane_g1

0xa45c,	// (0x00016e2f) ai_message_heading_pane_g2_ParamLimits

0xa45c,	// (0x00016e2f) ai_message_heading_pane_g2

0xa46a,	// (0x00016e3d) ai_message_heading_pane_g3_ParamLimits

0xa46a,	// (0x00016e3d) ai_message_heading_pane_g3

0xa476,	// (0x00016e49) ai_message_heading_pane_g4_ParamLimits

0xa476,	// (0x00016e49) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x0001c2f8) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x0001c2f8) ai_message_heading_pane_g

0xa482,	// (0x00016e55) ai_message_heading_pane_t1_ParamLimits

0xa482,	// (0x00016e55) ai_message_heading_pane_t1

0xa49c,	// (0x00016e6f) ai_message_heading_pane_t2_ParamLimits

0xa49c,	// (0x00016e6f) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x0001c301) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x0001c301) ai_message_heading_pane_t

0xa4b0,	// (0x00016e83) bg_popup_heading_pane_cp1_ParamLimits

0xa4b0,	// (0x00016e83) bg_popup_heading_pane_cp1

0xa43e,	// (0x00016e11) list_ai_message_pane_ParamLimits

0xa43e,	// (0x00016e11) list_ai_message_pane

0x7c50,	// (0x00014623) scroll_pane_cp10

0xa3da,	// (0x00016dad) list_ai_message_pane_g1

0xa3e2,	// (0x00016db5) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x0001c2d5) list_ai_message_pane_g

0xa3ea,	// (0x00016dbd) list_ai_message_pane_t1_ParamLimits

0xa3ea,	// (0x00016dbd) list_ai_message_pane_t1

0xa3ff,	// (0x00016dd2) list_ai_message_pane_t2_ParamLimits

0xa3ff,	// (0x00016dd2) list_ai_message_pane_t2

0xa414,	// (0x00016de7) list_ai_message_pane_t3_ParamLimits

0xa414,	// (0x00016de7) list_ai_message_pane_t3

0xa429,	// (0x00016dfc) list_ai_message_pane_t4_ParamLimits

0xa429,	// (0x00016dfc) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x0001c2da) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x0001c2da) list_ai_message_pane_t

0xa3c3,	// (0x00016d96) cell_ai_soft_ind_pane_ParamLimits

0xa3c3,	// (0x00016d96) cell_ai_soft_ind_pane

0x892b,	// (0x000152fe) cell_ai_soft_ind_pane_g1_ParamLimits

0x892b,	// (0x000152fe) cell_ai_soft_ind_pane_g1

0x37b4,	// (0x00010187) grid_highlight_cp1

0x8938,	// (0x0001530b) text_secondary_cp56_ParamLimits

0x8938,	// (0x0001530b) text_secondary_cp56

0xa398,	// (0x00016d6b) example_general_pane_ParamLimits

0xa398,	// (0x00016d6b) example_general_pane

0xa3a4,	// (0x00016d77) example_parent_pane_g1_ParamLimits

0xa3a4,	// (0x00016d77) example_parent_pane_g1

0xa3b0,	// (0x00016d83) example_parent_pane_t1_ParamLimits

0xa3b0,	// (0x00016d83) example_parent_pane_t1

0x5935,	// (0x00012308) popup_preview_text_window_ParamLimits

0x5935,	// (0x00012308) popup_preview_text_window

0x8752,	// (0x00015125) list_single_pane_cp2_g4

0x3b12,	// (0x000104e5) bg_popup_preview_window_pane_ParamLimits

0x3b12,	// (0x000104e5) bg_popup_preview_window_pane

0xa0e1,	// (0x00016ab4) popup_preview_text_window_t1_ParamLimits

0xa0e1,	// (0x00016ab4) popup_preview_text_window_t1

0xa0ff,	// (0x00016ad2) popup_preview_text_window_t2_ParamLimits

0xa0ff,	// (0x00016ad2) popup_preview_text_window_t2

0xa148,	// (0x00016b1b) popup_preview_text_window_t3_ParamLimits

0xa148,	// (0x00016b1b) popup_preview_text_window_t3

0xa18d,	// (0x00016b60) popup_preview_text_window_t4_ParamLimits

0xa18d,	// (0x00016b60) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x0001c2a9) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x0001c2a9) popup_preview_text_window_t

0xa20b,	// (0x00016bde) scroll_pane_cp11

0x90c4,	// (0x00015a97) bg_popup_preview_window_pane_g1

0xa095,	// (0x00016a68) bg_popup_preview_window_pane_g2

0xa09f,	// (0x00016a72) bg_popup_preview_window_pane_g3

0xa0a9,	// (0x00016a7c) bg_popup_preview_window_pane_g4

0xa0b3,	// (0x00016a86) bg_popup_preview_window_pane_g5

0xa0bd,	// (0x00016a90) bg_popup_preview_window_pane_g6

0xa0c5,	// (0x00016a98) bg_popup_preview_window_pane_g7

0xa0cd,	// (0x00016aa0) bg_popup_preview_window_pane_g8

0x4ad9,	// (0x000114ac) aid_popup_width_pane

0x5911,	// (0x000122e4) popup_midp_note_alarm_window_ParamLimits

0x5911,	// (0x000122e4) popup_midp_note_alarm_window

0x3fda,	// (0x000109ad) data_form_pane_ParamLimits

0x7a2c,	// (0x000143ff) form_field_data_pane_g1

0x7a36,	// (0x00014409) form_field_data_pane_t1_ParamLimits

0x3fe6,	// (0x000109b9) input_focus_pane_ParamLimits

0x3ff4,	// (0x000109c7) data_form_wide_pane_ParamLimits

0x4000,	// (0x000109d3) form_field_data_wide_pane_g1

0x402c,	// (0x000109ff) form_field_data_wide_pane_t1_ParamLimits

0x3cce,	// (0x000106a1) input_focus_pane_cp6_ParamLimits

0x7bfb,	// (0x000145ce) input_popup_find_pane_g1_ParamLimits

0x7bfb,	// (0x000145ce) input_popup_find_pane_g1

0x506e,	// (0x00011a41) aid_navi_side_left_pane

0x5083,	// (0x00011a56) aid_navi_side_right_pane

0x9aaa,	// (0x0001647d) bg_popup_window_pane_cp30_ParamLimits

0x9aaa,	// (0x0001647d) bg_popup_window_pane_cp30

0x9b24,	// (0x000164f7) popup_midp_note_alarm_window_g1_ParamLimits

0x9b24,	// (0x000164f7) popup_midp_note_alarm_window_g1

0x9b54,	// (0x00016527) popup_midp_note_alarm_window_t1_ParamLimits

0x9b54,	// (0x00016527) popup_midp_note_alarm_window_t1

0x9bf5,	// (0x000165c8) popup_midp_note_alarm_window_t2_ParamLimits

0x9bf5,	// (0x000165c8) popup_midp_note_alarm_window_t2

0x9ca3,	// (0x00016676) popup_midp_note_alarm_window_t3_ParamLimits

0x9ca3,	// (0x00016676) popup_midp_note_alarm_window_t3

0x9cd5,	// (0x000166a8) popup_midp_note_alarm_window_t4_ParamLimits

0x9cd5,	// (0x000166a8) popup_midp_note_alarm_window_t4

0x9cfb,	// (0x000166ce) popup_midp_note_alarm_window_t5_ParamLimits

0x9cfb,	// (0x000166ce) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x0001c246) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x0001c246) popup_midp_note_alarm_window_t

0x9da7,	// (0x0001677a) wait_bar_pane_cp1_ParamLimits

0x9da7,	// (0x0001677a) wait_bar_pane_cp1

0x37b4,	// (0x00010187) wait_anim_pane_copy1

0x37b4,	// (0x00010187) wait_border_pane_copy1

0x978f,	// (0x00016162) wait_border_pane_g1_copy1

0x4043,	// (0x00010a16) form_field_popup_pane_g1

0x7a50,	// (0x00014423) form_field_popup_pane_t1_ParamLimits

0x3fe6,	// (0x000109b9) input_focus_pane_cp7_ParamLimits

0x404b,	// (0x00010a1e) list_form_pane_ParamLimits

0x4057,	// (0x00010a2a) form_field_popup_wide_pane_g1

0x405f,	// (0x00010a32) form_field_popup_wide_pane_t1_ParamLimits

0x3fe6,	// (0x000109b9) input_focus_pane_cp8_ParamLimits

0x4071,	// (0x00010a44) list_form_wide_pane_ParamLimits

0xa99d,	// (0x00017370) aid_size_cell_graphic_pane

0x7ac8,	// (0x0001449b) data_form_pane_t1_ParamLimits

0xa73d,	// (0x00017110) data_form_wide_pane_t1_ParamLimits

0x8c47,	// (0x0001561a) bg_status_flat_pane

0x72a4,	// (0x00013c77) title_pane_t1_ParamLimits

0x381e,	// (0x000101f1) title_pane_t2_ParamLimits

0x3844,	// (0x00010217) title_pane_t3_ParamLimits

0xf530,	// (0x0001bf03) title_pane_t_ParamLimits

0x80ee,	// (0x00014ac1) level_1_signal_ParamLimits

0x80fb,	// (0x00014ace) level_2_signal_ParamLimits

0x8108,	// (0x00014adb) level_3_signal_ParamLimits

0x8115,	// (0x00014ae8) level_4_signal_ParamLimits

0x8122,	// (0x00014af5) level_5_signal_ParamLimits

0x812f,	// (0x00014b02) level_6_signal_ParamLimits

0x813c,	// (0x00014b0f) level_7_signal_ParamLimits

0x80ee,	// (0x00014ac1) level_1_battery_ParamLimits

0x80fb,	// (0x00014ace) level_2_battery_ParamLimits

0x8108,	// (0x00014adb) level_3_battery_ParamLimits

0x8115,	// (0x00014ae8) level_4_battery_ParamLimits

0x8122,	// (0x00014af5) level_5_battery_ParamLimits

0x812f,	// (0x00014b02) level_6_battery_ParamLimits

0x813c,	// (0x00014b0f) level_7_battery_ParamLimits

0x99af,	// (0x00016382) bg_status_flat_pane_g1

0x99b7,	// (0x0001638a) bg_status_flat_pane_g2

0x99bf,	// (0x00016392) bg_status_flat_pane_g3

0x99c7,	// (0x0001639a) bg_status_flat_pane_g4

0x99cf,	// (0x000163a2) bg_status_flat_pane_g5

0x99d7,	// (0x000163aa) bg_status_flat_pane_g6

0x99df,	// (0x000163b2) bg_status_flat_pane_g7

0x7314,	// (0x00013ce7) tabs_3_active_pane_t1_ParamLimits

0x7314,	// (0x00013ce7) tabs_3_passive_pane_t1_ParamLimits

0x732e,	// (0x00013d01) tabs_4_active_pane_t1_ParamLimits

0x732e,	// (0x00013d01) tabs_4_1_passive_pane_t1_ParamLimits

0x7c92,	// (0x00014665) tabs_2_active_pane_t1_ParamLimits

0x7c92,	// (0x00014665) tabs_2_passive_pane_t1_ParamLimits

0x7ca4,	// (0x00014677) bg_active_tab_pane_cp4_ParamLimits

0x7cb2,	// (0x00014685) tabs_2_long_active_pane_t1_ParamLimits

0x7cc5,	// (0x00014698) bg_passive_tab_pane_cp4_ParamLimits

0x5c99,	// (0x0001266c) list_single_midp_graphic_pane_t1_ParamLimits

0x7ca4,	// (0x00014677) bg_active_tab_pane_cp5_ParamLimits

0x7cd1,	// (0x000146a4) tabs_3_long_active_pane_t1_ParamLimits

0x7cc5,	// (0x00014698) bg_passive_tab_pane_cp5_ParamLimits

0x5c99,	// (0x0001266c) list_single_midp_graphic_pane_t1

0x8c47,	// (0x0001561a) bg_status_flat_pane_ParamLimits

0x8d12,	// (0x000156e5) indicator_pane_cp2_ParamLimits

0x8d12,	// (0x000156e5) indicator_pane_cp2

0x8e53,	// (0x00015826) navi_pane_srt_ParamLimits

0x8e53,	// (0x00015826) navi_pane_srt

0x8e77,	// (0x0001584a) popup_clock_digital_analogue_window_cp1

0x3955,	// (0x00010328) indicator_pane_t1

0x8823,	// (0x000151f6) copy_highlight_pane

0x8823,	// (0x000151f6) cursor_graphics_pane

0x8823,	// (0x000151f6) graphic_within_text_pane

0x8823,	// (0x000151f6) link_highlight_pane

0xa1ce,	// (0x00016ba1) popup_preview_text_window_t5_ParamLimits

0xa1ce,	// (0x00016ba1) popup_preview_text_window_t5

0x8954,	// (0x00015327) cursor_digital_pane

0x8954,	// (0x00015327) cursor_primary_pane

0x8965,	// (0x00015338) cursor_primary_small_pane

0x896d,	// (0x00015340) cursor_secondary_pane

0x8975,	// (0x00015348) cursor_title_pane

0x8954,	// (0x00015327) link_highlight_digital_pane

0x895c,	// (0x0001532f) link_highlight_primary_pane

0x8965,	// (0x00015338) link_highlight_primary_small_pane

0x896d,	// (0x00015340) link_highlight_secondary_pane

0x8975,	// (0x00015348) link_highlight_title_pane

0x8954,	// (0x00015327) copy_highlight_digital_pane

0x8954,	// (0x00015327) copy_highlight_primary_pane

0x8965,	// (0x00015338) copy_highlight_primary_small_pane

0x896d,	// (0x00015340) copy_highlight_secondary_pane

0x8975,	// (0x00015348) copy_highlight_title_pane

0x896d,	// (0x00015340) graphic_text_digital_pane

0x9a4d,	// (0x00016420) graphic_text_primary_pane

0x9a56,	// (0x00016429) graphic_text_primary_small_pane

0x8965,	// (0x00015338) graphic_text_secondary_pane

0x8954,	// (0x00015327) graphic_text_title_pane

0x897d,	// (0x00015350) cursor_primary_pane_g1

0x9a3f,	// (0x00016412) cursor_text_primary_t1

0x9a27,	// (0x000163fa) cursor_primary_small_pane_g1

0x9a31,	// (0x00016404) cursor_text_primary_small_t1

0x9a0f,	// (0x000163e2) cursor_primary_small_pane_g1_copy1

0x9a19,	// (0x000163ec) cursor_text_primary_small_t1_copy1

0x99f7,	// (0x000163ca) cursor_text_title_t1

0x9a05,	// (0x000163d8) cursor_title_pane_g1

0x897d,	// (0x00015350) cursor_digital_pane_g1

0x8987,	// (0x0001535a) cursor_text_digital_t1

0x8995,	// (0x00015368) link_highlight_primary_pane_g1

0x99a0,	// (0x00016373) link_highlight_primary_pane_t1

0x8995,	// (0x00015368) link_highlight_primary_small_pane_g1

0x899d,	// (0x00015370) link_highlight_primary_small_pane_t1

0x89ac,	// (0x0001537f) link_highlight_secondary_pane_g1

0x89b4,	// (0x00015387) link_highlight_secondary_pane_t1

0x9914,	// (0x000162e7) link_highlight_title_pane_g1

0x991c,	// (0x000162ef) link_highlight_title_pane_t1

0x98fd,	// (0x000162d0) link_highlight_digital_pane_g1

0x9905,	// (0x000162d8) link_highlight_digital_pane_t1

0x97c5,	// (0x00016198) copy_highlight_primary_pane_g1

0x97dc,	// (0x000161af) copy_highlight_primary_pane_t1

0x97c5,	// (0x00016198) copy_highlight_primary_small_pane_g1

0x97cd,	// (0x000161a0) copy_highlight_primary_small_pane_t1

0x89c3,	// (0x00015396) copy_highlight_secondary_pane_g1

0x89cb,	// (0x0001539e) copy_highlight_secondary_pane_t1

0x97ae,	// (0x00016181) copy_highlight_title_pane_g1

0x97b6,	// (0x00016189) copy_highlight_title_pane_t1

0x97c5,	// (0x00016198) copy_highlight_digital_pane_g1

0xab6f,	// (0x00017542) copy_highlight_digital_pane_t1

0xaac3,	// (0x00017496) graphic_text_primary_pane_g1

0xab53,	// (0x00017526) graphic_text_primary_pane_t1

0xab61,	// (0x00017534) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x0001c375) graphic_text_primary_pane_t

0xab2f,	// (0x00017502) graphic_text_primary_small_pane_g1

0xab37,	// (0x0001750a) graphic_text_primary_small_pane_t1

0xab45,	// (0x00017518) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x0001c370) graphic_text_primary_small_pane_t

0xab0b,	// (0x000174de) graphic_text_secondary_pane_g1

0xab13,	// (0x000174e6) graphic_text_secondary_pane_t1

0xab21,	// (0x000174f4) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x0001c36b) graphic_text_secondary_pane_t

0xaae7,	// (0x000174ba) graphic_text_title_pane_g1

0xaaef,	// (0x000174c2) graphic_text_title_pane_t1

0xaafd,	// (0x000174d0) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x0001c366) graphic_text_title_pane_t

0xaac3,	// (0x00017496) graphic_text_digital_pane_g1

0xaacb,	// (0x0001749e) graphic_text_digital_pane_t1

0xaad9,	// (0x000174ac) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x0001c361) graphic_text_digital_pane_t

0x386e,	// (0x00010241) navi_icon_pane_srt_ParamLimits

0x386e,	// (0x00010241) navi_icon_pane_srt

0x37b4,	// (0x00010187) navi_midp_pane_srt

0x37b4,	// (0x00010187) navi_navi_pane_srt

0x386e,	// (0x00010241) navi_text_pane_srt_ParamLimits

0x386e,	// (0x00010241) navi_text_pane_srt

0xaa8e,	// (0x00017461) navi_navi_icon_text_pane_srt

0xaa96,	// (0x00017469) navi_navi_pane_srt_g1_ParamLimits

0xaa96,	// (0x00017469) navi_navi_pane_srt_g1

0xaaa8,	// (0x0001747b) navi_navi_pane_srt_g2_ParamLimits

0xaaa8,	// (0x0001747b) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x0001c35c) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x0001c35c) navi_navi_pane_srt_g

0xaaba,	// (0x0001748d) navi_navi_tabs_pane_srt

0xaa8e,	// (0x00017461) navi_navi_text_pane_srt

0xaa8e,	// (0x00017461) navi_navi_volume_pane_srt

0xaa7f,	// (0x00017452) navi_navi_text_pane_srt_t1

0x6035,	// (0x00012a08) navi_navi_volume_pane_srt_g1

0x603d,	// (0x00012a10) volume_small_pane_srt_ParamLimits

0x603d,	// (0x00012a10) volume_small_pane_srt

0x535a,	// (0x00011d2d) volume_small_pane_srt_g1_ParamLimits

0x535a,	// (0x00011d2d) volume_small_pane_srt_g1

0x536a,	// (0x00011d3d) volume_small_pane_srt_g2_ParamLimits

0x536a,	// (0x00011d3d) volume_small_pane_srt_g2

0x537b,	// (0x00011d4e) volume_small_pane_srt_g3_ParamLimits

0x537b,	// (0x00011d4e) volume_small_pane_srt_g3

0x538c,	// (0x00011d5f) volume_small_pane_srt_g4_ParamLimits

0x538c,	// (0x00011d5f) volume_small_pane_srt_g4

0x539d,	// (0x00011d70) volume_small_pane_srt_g5_ParamLimits

0x539d,	// (0x00011d70) volume_small_pane_srt_g5

0x53ae,	// (0x00011d81) volume_small_pane_srt_g6_ParamLimits

0x53ae,	// (0x00011d81) volume_small_pane_srt_g6

0x53bf,	// (0x00011d92) volume_small_pane_srt_g7_ParamLimits

0x53bf,	// (0x00011d92) volume_small_pane_srt_g7

0x53d0,	// (0x00011da3) volume_small_pane_srt_g8_ParamLimits

0x53d0,	// (0x00011da3) volume_small_pane_srt_g8

0x53e1,	// (0x00011db4) volume_small_pane_srt_g9_ParamLimits

0x53e1,	// (0x00011db4) volume_small_pane_srt_g9

0x53f2,	// (0x00011dc5) volume_small_pane_srt_g10_ParamLimits

0x53f2,	// (0x00011dc5) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x0001c104) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x0001c104) volume_small_pane_srt_g

0x3bc7,	// (0x0001059a) query_popup_data_pane_cp2

0xaa65,	// (0x00017438) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xaa65,	// (0x00017438) navi_navi_icon_text_pane_srt_t1

0x9a4d,	// (0x00016420) navi_tabs_2_long_pane_srt

0x9a4d,	// (0x00016420) navi_tabs_2_pane_srt

0x9a4d,	// (0x00016420) navi_tabs_3_long_pane_srt

0x9a4d,	// (0x00016420) navi_tabs_3_pane_srt

0x9a4d,	// (0x00016420) navi_tabs_4_pane_srt

0x6015,	// (0x000129e8) tabs_2_active_pane_srt_ParamLimits

0x6015,	// (0x000129e8) tabs_2_active_pane_srt

0x6025,	// (0x000129f8) tabs_2_passive_pane_srt_ParamLimits

0x6025,	// (0x000129f8) tabs_2_passive_pane_srt

0x8b52,	// (0x00015525) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8b52,	// (0x00015525) bg_passive_tab_pane_cp1_srt

0xaa31,	// (0x00017404) bg_passive_tab_pane_g1_cp1_srt

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp1_srt

0xaa3a,	// (0x0001740d) bg_passive_tab_pane_g3_cp1_srt

0x386e,	// (0x00010241) bg_active_tab_pane_cp1_srt_ParamLimits

0x386e,	// (0x00010241) bg_active_tab_pane_cp1_srt

0xaa43,	// (0x00017416) tabs_2_active_pane_srt_g1

0xaa4b,	// (0x0001741e) tabs_2_active_pane_srt_t1_ParamLimits

0xaa4b,	// (0x0001741e) tabs_2_active_pane_srt_t1

0xaa31,	// (0x00017404) bg_active_tab_pane_g1_cp1_srt

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp1_srt

0xaa3a,	// (0x0001740d) bg_active_tab_pane_g3_cp1_srt

0x5fe2,	// (0x000129b5) tabs_3_active_pane_srt_ParamLimits

0x5fe2,	// (0x000129b5) tabs_3_active_pane_srt

0x5ff3,	// (0x000129c6) tabs_3_passive_pane_cp_srt_ParamLimits

0x5ff3,	// (0x000129c6) tabs_3_passive_pane_cp_srt

0x6004,	// (0x000129d7) tabs_3_passive_pane_srt_ParamLimits

0x6004,	// (0x000129d7) tabs_3_passive_pane_srt

0x8b52,	// (0x00015525) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8b52,	// (0x00015525) bg_passive_tab_pane_cp2_srt

0x89da,	// (0x000153ad) bg_passive_tab_pane_g1_cp2_srt

0x845c,	// (0x00014e2f) bg_passive_tab_pane_g2_cp2_srt

0x89e3,	// (0x000153b6) bg_passive_tab_pane_g3_cp2_srt

0x386e,	// (0x00010241) bg_active_tab_pane_cp2_srt_ParamLimits

0x386e,	// (0x00010241) bg_active_tab_pane_cp2_srt

0xaa17,	// (0x000173ea) tabs_3_active_pane_srt_g1

0xaa1f,	// (0x000173f2) tabs_3_active_pane_srt_t1_ParamLimits

0xaa1f,	// (0x000173f2) tabs_3_active_pane_srt_t1

0x89da,	// (0x000153ad) bg_active_tab_pane_g1_cp2_srt

0x845c,	// (0x00014e2f) bg_active_tab_pane_g2_cp2_srt

0x89e3,	// (0x000153b6) bg_active_tab_pane_g3_cp2_srt

0x5f9a,	// (0x0001296d) tabs_4_active_pane_srt_ParamLimits

0x5f9a,	// (0x0001296d) tabs_4_active_pane_srt

0x5fac,	// (0x0001297f) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5fac,	// (0x0001297f) tabs_4_passive_pane_cp2_srt

0x5544,	// (0x00011f17) aid_size_cell_toolbar

0x7cc5,	// (0x00014698) main_idle_act_pane_ParamLimits

0x5737,	// (0x0001210a) popup_large_graphic_colour_window_ParamLimits

0x5ade,	// (0x000124b1) popup_toolbar_window_ParamLimits

0x5ade,	// (0x000124b1) popup_toolbar_window

0xa7ba,	// (0x0001718d) list_single_graphic_2heading_pane_ParamLimits

0xa7ba,	// (0x0001718d) list_single_graphic_2heading_pane

0x7e81,	// (0x00014854) aid_size_cell_apps_grid_lsc_pane

0x7e93,	// (0x00014866) aid_size_cell_apps_grid_prt_pane

0x8b52,	// (0x00015525) bg_wml_button_pane_cp1_ParamLimits

0x8b52,	// (0x00015525) bg_wml_button_pane_cp1

0x9409,	// (0x00015ddc) form_midp_field_text_pane_t1_ParamLimits

0x91ec,	// (0x00015bbf) input_focus_pane_cp050_ParamLimits

0x9434,	// (0x00015e07) list_midp_form_text_pane_ParamLimits

0x93e6,	// (0x00015db9) input_focus_pane_cp051_ParamLimits

0x93fa,	// (0x00015dcd) list_midp_choice_pane_ParamLimits

0x92a5,	// (0x00015c78) list_single_2graphic_pane_cp3_ParamLimits

0x92a5,	// (0x00015c78) list_single_2graphic_pane_cp3

0x92bb,	// (0x00015c8e) list_single_midp_graphic_pane_ParamLimits

0x92bb,	// (0x00015c8e) list_single_midp_graphic_pane

0x5b9d,	// (0x00012570) list_single_graphic_2heading_pane_g1_ParamLimits

0x5b9d,	// (0x00012570) list_single_graphic_2heading_pane_g1

0x5ba9,	// (0x0001257c) list_single_graphic_2heading_pane_g4_ParamLimits

0x5ba9,	// (0x0001257c) list_single_graphic_2heading_pane_g4

0x5bb5,	// (0x00012588) list_single_graphic_2heading_pane_g5_ParamLimits

0x5bb5,	// (0x00012588) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x0001c157) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x0001c157) list_single_graphic_2heading_pane_g

0x5bc1,	// (0x00012594) list_single_graphic_2heading_pane_t1_ParamLimits

0x5bc1,	// (0x00012594) list_single_graphic_2heading_pane_t1

0x5bd5,	// (0x000125a8) list_single_graphic_2heading_pane_t2_ParamLimits

0x5bd5,	// (0x000125a8) list_single_graphic_2heading_pane_t2

0x5bf1,	// (0x000125c4) list_single_graphic_2heading_pane_t3_ParamLimits

0x5bf1,	// (0x000125c4) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x0001c15e) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x0001c15e) list_single_graphic_2heading_pane_t

0x8fc8,	// (0x0001599b) bg_popup_sub_pane_cp2

0x8ff2,	// (0x000159c5) grid_toobar_pane

0x5c09,	// (0x000125dc) cell_toolbar_pane_ParamLimits

0x5c09,	// (0x000125dc) cell_toolbar_pane

0x9068,	// (0x00015a3b) cell_toolbar_pane_g1_ParamLimits

0x9068,	// (0x00015a3b) cell_toolbar_pane_g1

0x907c,	// (0x00015a4f) cell_toolbar_pane_g2_ParamLimits

0x907c,	// (0x00015a4f) cell_toolbar_pane_g2

0x0001,

0xf799,	// (0x0001c16c) cell_toolbar_pane_g_ParamLimits

0xf799,	// (0x0001c16c) cell_toolbar_pane_g

0x909e,	// (0x00015a71) grid_highlight_pane_cp2_ParamLimits

0x909e,	// (0x00015a71) grid_highlight_pane_cp2

0x90b8,	// (0x00015a8b) toolbar_button_pane

0x90c4,	// (0x00015a97) toolbar_button_pane_g1

0x90cc,	// (0x00015a9f) toolbar_button_pane_g2

0x90d4,	// (0x00015aa7) toolbar_button_pane_g3

0x90dc,	// (0x00015aaf) toolbar_button_pane_g4

0x90e4,	// (0x00015ab7) toolbar_button_pane_g5

0x90ec,	// (0x00015abf) toolbar_button_pane_g6

0x90f4,	// (0x00015ac7) toolbar_button_pane_g7

0x90fc,	// (0x00015acf) toolbar_button_pane_g8

0x9104,	// (0x00015ad7) toolbar_button_pane_g9

0x0009,

0xf79e,	// (0x0001c171) toolbar_button_pane_g

0x5c41,	// (0x00012614) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5c41,	// (0x00012614) list_single_2graphic_pane_g1_cp3

0x5c4d,	// (0x00012620) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5c4d,	// (0x00012620) list_single_2graphic_pane_g2_cp3

0x5c5e,	// (0x00012631) list_single_2graphic_pane_g3_cp3

0x5c66,	// (0x00012639) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5c66,	// (0x00012639) list_single_2graphic_pane_g4_cp3

0x5c72,	// (0x00012645) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5c72,	// (0x00012645) list_single_2graphic_pane_t1_cp3

0x5c8d,	// (0x00012660) list_single_midp_graphic_pane_g2_ParamLimits

0x5c8d,	// (0x00012660) list_single_midp_graphic_pane_g2

0x554c,	// (0x00011f1f) aid_zoom_text_primary

0x5554,	// (0x00011f27) aid_zoom_text_secondary

0x8a94,	// (0x00015467) status_small_pane_g7_ParamLimits

0x8a94,	// (0x00015467) status_small_pane_g7

0x8ab7,	// (0x0001548a) status_small_pane_t1_ParamLimits

0x727f,	// (0x00013c52) title_pane_g2

0x0003,

0xf527,	// (0x0001befa) title_pane_g

0x7455,	// (0x00013e28) aid_size_cell_colour_1_pane_ParamLimits

0x7455,	// (0x00013e28) aid_size_cell_colour_1_pane

0x7469,	// (0x00013e3c) aid_size_cell_colour_2_pane_ParamLimits

0x7469,	// (0x00013e3c) aid_size_cell_colour_2_pane

0x747d,	// (0x00013e50) aid_size_cell_colour_3_pane_ParamLimits

0x747d,	// (0x00013e50) aid_size_cell_colour_3_pane

0x7491,	// (0x00013e64) aid_size_cell_colour_4_pane_ParamLimits

0x7491,	// (0x00013e64) aid_size_cell_colour_4_pane

0x4fab,	// (0x0001197e) title_pane_stacon_g1_ParamLimits

0x4fab,	// (0x0001197e) title_pane_stacon_g1

0x9833,	// (0x00016206) popup_note_wait_window_g3_ParamLimits

0x9833,	// (0x00016206) popup_note_wait_window_g3

0x98aa,	// (0x0001627d) popup_note_wait_window_t5_ParamLimits

0x98aa,	// (0x0001627d) popup_note_wait_window_t5

0x37b4,	// (0x00010187) main_feb_china_hwr_fs_writing_pane

0x55fc,	// (0x00011fcf) popup_feb_china_hwr_fs_window_ParamLimits

0x55fc,	// (0x00011fcf) popup_feb_china_hwr_fs_window

0x5caf,	// (0x00012682) aid_size_cell_hwr_fs_ParamLimits

0x5caf,	// (0x00012682) aid_size_cell_hwr_fs

0x91ec,	// (0x00015bbf) bg_popup_sub_pane_cp3_ParamLimits

0x91ec,	// (0x00015bbf) bg_popup_sub_pane_cp3

0x5cc4,	// (0x00012697) grid_hwr_fs_pane_ParamLimits

0x5cc4,	// (0x00012697) grid_hwr_fs_pane

0x5cdc,	// (0x000126af) linegrid_hwr_fs_pane_ParamLimits

0x5cdc,	// (0x000126af) linegrid_hwr_fs_pane

0x5cec,	// (0x000126bf) cell_hwr_fs_pane_ParamLimits

0x5cec,	// (0x000126bf) cell_hwr_fs_pane

0x91f8,	// (0x00015bcb) linegrid_hwr_fs_pane_g1_ParamLimits

0x91f8,	// (0x00015bcb) linegrid_hwr_fs_pane_g1

0x9204,	// (0x00015bd7) linegrid_hwr_fs_pane_g2_ParamLimits

0x9204,	// (0x00015bd7) linegrid_hwr_fs_pane_g2

0x9216,	// (0x00015be9) linegrid_hwr_fs_pane_g3_ParamLimits

0x9216,	// (0x00015be9) linegrid_hwr_fs_pane_g3

0x5d10,	// (0x000126e3) linegrid_hwr_fs_pane_g4_ParamLimits

0x5d10,	// (0x000126e3) linegrid_hwr_fs_pane_g4

0x5d2e,	// (0x00012701) linegrid_hwr_fs_pane_g5_ParamLimits

0x5d2e,	// (0x00012701) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x0001c19c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x0001c19c) linegrid_hwr_fs_pane_g

0x9222,	// (0x00015bf5) cell_hwr_fs_pane_g1_ParamLimits

0x9222,	// (0x00015bf5) cell_hwr_fs_pane_g1

0x8f05,	// (0x000158d8) cell_hwr_fs_pane_g2_ParamLimits

0x8f05,	// (0x000158d8) cell_hwr_fs_pane_g2

0x9238,	// (0x00015c0b) cell_hwr_fs_pane_g3_ParamLimits

0x9238,	// (0x00015c0b) cell_hwr_fs_pane_g3

0x9245,	// (0x00015c18) cell_hwr_fs_pane_g4_ParamLimits

0x9245,	// (0x00015c18) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x0001c1a7) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x0001c1a7) cell_hwr_fs_pane_g

0x5d44,	// (0x00012717) cell_hwr_fs_pane_t1

0x37b4,	// (0x00010187) grid_highlight_pane_cp6

0x37b4,	// (0x00010187) main_idle_act2_pane

0x7c37,	// (0x0001460a) aid_inside_area_popup_secondary

0x9ee3,	// (0x000168b6) aid_inside_area_window_primary_ParamLimits

0x9ee3,	// (0x000168b6) aid_inside_area_window_primary

0xab7e,	// (0x00017551) ai2_news_ticker_pane

0xab86,	// (0x00017559) aid_size_cell_ai1_link_ParamLimits

0xab86,	// (0x00017559) aid_size_cell_ai1_link

0xaba0,	// (0x00017573) popup_ai2_data_window_ParamLimits

0xaba0,	// (0x00017573) popup_ai2_data_window

0xabbe,	// (0x00017591) popup_ai2_link_window_ParamLimits

0xabbe,	// (0x00017591) popup_ai2_link_window

0x91ec,	// (0x00015bbf) bg_popup_sub_pane_cp4_ParamLimits

0x91ec,	// (0x00015bbf) bg_popup_sub_pane_cp4

0xabd4,	// (0x000175a7) grid_ai2_link_pane_ParamLimits

0xabd4,	// (0x000175a7) grid_ai2_link_pane

0xabeb,	// (0x000175be) popup_ai2_link_window_g1_ParamLimits

0xabeb,	// (0x000175be) popup_ai2_link_window_g1

0xabf7,	// (0x000175ca) popup_ai2_link_window_g2_ParamLimits

0xabf7,	// (0x000175ca) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x0001c37a) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x0001c37a) popup_ai2_link_window_g

0xac08,	// (0x000175db) ai2_mp_button_pane

0xac10,	// (0x000175e3) ai2_mp_volume_pane

0x93e6,	// (0x00015db9) bg_popup_sub_pane_cp5_ParamLimits

0x93e6,	// (0x00015db9) bg_popup_sub_pane_cp5

0xac18,	// (0x000175eb) heading_ai2_gene_pane_ParamLimits

0xac18,	// (0x000175eb) heading_ai2_gene_pane

0xac24,	// (0x000175f7) list_ai2_gene_pane_ParamLimits

0xac24,	// (0x000175f7) list_ai2_gene_pane

0xac6c,	// (0x0001763f) cell_ai2_link_pane_ParamLimits

0xac6c,	// (0x0001763f) cell_ai2_link_pane

0xac82,	// (0x00017655) cell_ai2_link_pane_g1

0x37b4,	// (0x00010187) grid_highlight_pane_cp7

0x6052,	// (0x00012a25) ai2_mp_volume_pane_g1

0xad55,	// (0x00017728) ai2_mp_volume_pane_g2

0xacca,	// (0x0001769d) list_ai2_gene_pane_t1

0xad5d,	// (0x00017730) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x0001c393) ai2_mp_volume_pane_g

0x605a,	// (0x00012a2d) volume_small_pane_cp3

0xad65,	// (0x00017738) aid_size_cell_ai2_button

0xad6d,	// (0x00017740) grid_ai2_button_pane

0xad76,	// (0x00017749) cell_ai2_button_pane_ParamLimits

0xad76,	// (0x00017749) cell_ai2_button_pane

0x35ec,	// (0x0000ffbf) cell_ai2_button_pane_g1

0x37b4,	// (0x00010187) grid_highlight_pane_cp8

0xad15,	// (0x000176e8) ai2_gene_pane_t1_ParamLimits

0xad15,	// (0x000176e8) ai2_gene_pane_t1

0x553a,	// (0x00011f0d) aid_height_parent_landscape

0xa58b,	// (0x00016f5e) aid_height_set_list

0xa59c,	// (0x00016f6f) aid_size_parent

0xa99d,	// (0x00017370) aid_size_cell_graphic_pane_ParamLimits

0xac34,	// (0x00017607) popup_ai2_data_window_g1_ParamLimits

0xac34,	// (0x00017607) popup_ai2_data_window_g1

0xac40,	// (0x00017613) ai2_news_ticker_pane_g1

0xac48,	// (0x0001761b) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x0001c37f) ai2_news_ticker_pane_g

0xac50,	// (0x00017623) ai2_news_ticker_pane_t1

0xac5e,	// (0x00017631) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x0001c384) ai2_news_ticker_pane_t

0xac8b,	// (0x0001765e) heading_ai2_gene_pane_g1

0xac93,	// (0x00017666) heading_ai2_gene_pane_t1_ParamLimits

0xac93,	// (0x00017666) heading_ai2_gene_pane_t1

0xaca8,	// (0x0001767b) list_highlight_pane_cp6

0xacb0,	// (0x00017683) ai2_gene_pane_ParamLimits

0xacb0,	// (0x00017683) ai2_gene_pane

0xacd8,	// (0x000176ab) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x0001c389) list_ai2_gene_pane_t

0xace6,	// (0x000176b9) list_highlight_pane_cp8_ParamLimits

0xace6,	// (0x000176b9) list_highlight_pane_cp8

0xacf7,	// (0x000176ca) ai2_gene_pane_g1_ParamLimits

0xacf7,	// (0x000176ca) ai2_gene_pane_g1

0xad09,	// (0x000176dc) ai2_gene_pane_g2_ParamLimits

0xad09,	// (0x000176dc) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x0001c38e) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x0001c38e) ai2_gene_pane_g

0x3ee9,	// (0x000108bc) scroll_pane_cp12

0x54f9,	// (0x00011ecc) control_pane_t3_ParamLimits

0x54f9,	// (0x00011ecc) control_pane_t3

0x8aa8,	// (0x0001547b) status_small_pane_g8_ParamLimits

0x8aa8,	// (0x0001547b) status_small_pane_g8

0x56fa,	// (0x000120cd) popup_find_window_ParamLimits

0x5927,	// (0x000122fa) popup_note_image_window_ParamLimits

0x902e,	// (0x00015a01) list_double2_graphic_pane_vc_g1_ParamLimits

0x902e,	// (0x00015a01) list_double2_graphic_pane_vc_g1

0x903a,	// (0x00015a0d) list_double2_graphic_pane_vc_g2_ParamLimits

0x903a,	// (0x00015a0d) list_double2_graphic_pane_vc_g2

0x9046,	// (0x00015a19) list_double2_graphic_pane_vc_g3_ParamLimits

0x9046,	// (0x00015a19) list_double2_graphic_pane_vc_g3

0x0002,

0xf792,	// (0x0001c165) list_double2_graphic_pane_vc_g_ParamLimits

0xf792,	// (0x0001c165) list_double2_graphic_pane_vc_g

0x9052,	// (0x00015a25) list_double2_graphic_pane_vc_t1_ParamLimits

0x9052,	// (0x00015a25) list_double2_graphic_pane_vc_t1

0x903a,	// (0x00015a0d) list_single_heading_pane_vc_g1_ParamLimits

0x903a,	// (0x00015a0d) list_single_heading_pane_vc_g1

0x9046,	// (0x00015a19) list_single_heading_pane_vc_g2_ParamLimits

0x9046,	// (0x00015a19) list_single_heading_pane_vc_g2

0x0001,

0xf7b3,	// (0x0001c186) list_single_heading_pane_vc_g_ParamLimits

0xf7b3,	// (0x0001c186) list_single_heading_pane_vc_g

0x910c,	// (0x00015adf) list_single_heading_pane_vc_t1_ParamLimits

0x910c,	// (0x00015adf) list_single_heading_pane_vc_t1

0x9122,	// (0x00015af5) list_single_heading_pane_vc_t2_ParamLimits

0x9122,	// (0x00015af5) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x0001c18b) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x0001c18b) list_single_heading_pane_vc_t

0x9138,	// (0x00015b0b) list_setting_number_pane_vc_g1_ParamLimits

0x9138,	// (0x00015b0b) list_setting_number_pane_vc_g1

0x9144,	// (0x00015b17) list_setting_number_pane_vc_g2_ParamLimits

0x9144,	// (0x00015b17) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x0001c190) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x0001c190) list_setting_number_pane_vc_g

0x9150,	// (0x00015b23) list_setting_number_pane_vc_t1_ParamLimits

0x9150,	// (0x00015b23) list_setting_number_pane_vc_t1

0x9164,	// (0x00015b37) list_setting_number_pane_vc_t2_ParamLimits

0x9164,	// (0x00015b37) list_setting_number_pane_vc_t2

0x9180,	// (0x00015b53) list_setting_number_pane_vc_t3_ParamLimits

0x9180,	// (0x00015b53) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x0001c195) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x0001c195) list_setting_number_pane_vc_t

0x91ae,	// (0x00015b81) set_value_pane_vc_ParamLimits

0x91ae,	// (0x00015b81) set_value_pane_vc

0xa7ba,	// (0x0001718d) list_double2_graphic_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_double2_graphic_pane_vc

0xa7ba,	// (0x0001718d) list_double2_large_graphic_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_double2_large_graphic_pane_vc

0xa7ba,	// (0x0001718d) list_double2_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_double2_pane_vc

0xa7ba,	// (0x0001718d) list_double_graphic_heading_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_double_graphic_heading_pane_vc

0xa7ba,	// (0x0001718d) list_double_graphic_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_double_graphic_pane_vc

0xa7ba,	// (0x0001718d) list_double_heading_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_double_heading_pane_vc

0xa7ce,	// (0x000171a1) list_double_large_graphic_pane_vc_ParamLimits

0xa7ce,	// (0x000171a1) list_double_large_graphic_pane_vc

0xa7ba,	// (0x0001718d) list_double_number_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_double_number_pane_vc

0xa7ba,	// (0x0001718d) list_double_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_double_pane_vc

0xa7ba,	// (0x0001718d) list_double_time_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_double_time_pane_vc

0xa7ba,	// (0x0001718d) list_setting_number_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_setting_number_pane_vc

0xa7ba,	// (0x0001718d) list_setting_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_setting_pane_vc

0xa7ba,	// (0x0001718d) list_single_graphic_heading_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_single_graphic_heading_pane_vc

0xa7ba,	// (0x0001718d) list_single_heading_pane_vc_ParamLimits

0xa7ba,	// (0x0001718d) list_single_heading_pane_vc

0xa7f0,	// (0x000171c3) list_single_number_heading_pane_vc_ParamLimits

0xa7f0,	// (0x000171c3) list_single_number_heading_pane_vc

0xada9,	// (0x0001777c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xada9,	// (0x0001777c) list_double_graphic_heading_pane_vc_g1

0xadb5,	// (0x00017788) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xadb5,	// (0x00017788) list_double_graphic_heading_pane_vc_g2

0xadc1,	// (0x00017794) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xadc1,	// (0x00017794) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c7,	// (0x0001c39a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c7,	// (0x0001c39a) list_double_graphic_heading_pane_vc_g

0xadcd,	// (0x000177a0) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xadcd,	// (0x000177a0) list_double_graphic_heading_pane_vc_t1

0xade3,	// (0x000177b6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xade3,	// (0x000177b6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0001c3a1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0001c3a1) list_double_graphic_heading_pane_vc_t

0x9138,	// (0x00015b0b) list_setting_pane_vc_g1_ParamLimits

0x9138,	// (0x00015b0b) list_setting_pane_vc_g1

0x9144,	// (0x00015b17) list_setting_pane_vc_g2_ParamLimits

0x9144,	// (0x00015b17) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x0001c190) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x0001c190) list_setting_pane_vc_g

0xb034,	// (0x00017a07) list_setting_pane_vc_t1_ParamLimits

0xb034,	// (0x00017a07) list_setting_pane_vc_t1

0xb050,	// (0x00017a23) list_setting_pane_vc_t2_ParamLimits

0xb050,	// (0x00017a23) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x0001c3cf) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x0001c3cf) list_setting_pane_vc_t

0x91ae,	// (0x00015b81) set_value_pane_cp_vc_ParamLimits

0x91ae,	// (0x00015b81) set_value_pane_cp_vc

0x903a,	// (0x00015a0d) list_single_number_heading_pane_vc_g1_ParamLimits

0x903a,	// (0x00015a0d) list_single_number_heading_pane_vc_g1

0x9046,	// (0x00015a19) list_single_number_heading_pane_vc_g2_ParamLimits

0x9046,	// (0x00015a19) list_single_number_heading_pane_vc_g2

0x0001,

0xf7b3,	// (0x0001c186) list_single_number_heading_pane_vc_g_ParamLimits

0xf7b3,	// (0x0001c186) list_single_number_heading_pane_vc_g

0xb06c,	// (0x00017a3f) list_single_number_heading_pane_vc_t1_ParamLimits

0xb06c,	// (0x00017a3f) list_single_number_heading_pane_vc_t1

0xb082,	// (0x00017a55) list_single_number_heading_pane_vc_t2_ParamLimits

0xb082,	// (0x00017a55) list_single_number_heading_pane_vc_t2

0xb098,	// (0x00017a6b) list_single_number_heading_pane_vc_t3_ParamLimits

0xb098,	// (0x00017a6b) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x0001c3d4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0001c3d4) list_single_number_heading_pane_vc_t

0x902e,	// (0x00015a01) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x902e,	// (0x00015a01) list_single_graphic_heading_pane_vc_g1

0x903a,	// (0x00015a0d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x903a,	// (0x00015a0d) list_single_graphic_heading_pane_vc_g4

0x9046,	// (0x00015a19) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x9046,	// (0x00015a19) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf792,	// (0x0001c165) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf792,	// (0x0001c165) list_single_graphic_heading_pane_vc_g

0xb06c,	// (0x00017a3f) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb06c,	// (0x00017a3f) list_single_graphic_heading_pane_vc_t1

0xb0aa,	// (0x00017a7d) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb0aa,	// (0x00017a7d) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x0001c3db) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0001c3db) list_single_graphic_heading_pane_vc_t

0x903a,	// (0x00015a0d) list_double2_pane_vc_g1_ParamLimits

0x903a,	// (0x00015a0d) list_double2_pane_vc_g1

0x9046,	// (0x00015a19) list_double2_pane_vc_g2_ParamLimits

0x9046,	// (0x00015a19) list_double2_pane_vc_g2

0x0001,

0xf7b3,	// (0x0001c186) list_double2_pane_vc_g_ParamLimits

0xf7b3,	// (0x0001c186) list_double2_pane_vc_g

0xb0bc,	// (0x00017a8f) list_double2_pane_vc_t1_ParamLimits

0xb0bc,	// (0x00017a8f) list_double2_pane_vc_t1

0xb0d2,	// (0x00017aa5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb0d2,	// (0x00017aa5) list_double2_large_graphic_pane_vc_g1

0x903a,	// (0x00015a0d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x903a,	// (0x00015a0d) list_double2_large_graphic_pane_vc_g2

0x9046,	// (0x00015a19) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x9046,	// (0x00015a19) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0d,	// (0x0001c3e0) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0d,	// (0x0001c3e0) list_double2_large_graphic_pane_vc_g

0xb0de,	// (0x00017ab1) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb0de,	// (0x00017ab1) list_double2_large_graphic_pane_vc_t1

0xb0f4,	// (0x00017ac7) list_double_time_pane_vc_g1_ParamLimits

0xb0f4,	// (0x00017ac7) list_double_time_pane_vc_g1

0xb100,	// (0x00017ad3) list_double_time_pane_vc_g2_ParamLimits

0xb100,	// (0x00017ad3) list_double_time_pane_vc_g2

0x0001,

0xfa14,	// (0x0001c3e7) list_double_time_pane_vc_g_ParamLimits

0xfa14,	// (0x0001c3e7) list_double_time_pane_vc_g

0xb10c,	// (0x00017adf) list_double_time_pane_vc_t1_ParamLimits

0xb10c,	// (0x00017adf) list_double_time_pane_vc_t1

0xb13c,	// (0x00017b0f) list_double_time_pane_vc_t2_ParamLimits

0xb13c,	// (0x00017b0f) list_double_time_pane_vc_t2

0xb160,	// (0x00017b33) list_double_time_pane_vc_t3_ParamLimits

0xb160,	// (0x00017b33) list_double_time_pane_vc_t3

0xb172,	// (0x00017b45) list_double_time_pane_vc_t4_ParamLimits

0xb172,	// (0x00017b45) list_double_time_pane_vc_t4

0x0003,

0xfa19,	// (0x0001c3ec) list_double_time_pane_vc_t_ParamLimits

0xfa19,	// (0x0001c3ec) list_double_time_pane_vc_t

0x903a,	// (0x00015a0d) list_double_pane_vc_g1_ParamLimits

0x903a,	// (0x00015a0d) list_double_pane_vc_g1

0x9046,	// (0x00015a19) list_double_pane_vc_g2_ParamLimits

0x9046,	// (0x00015a19) list_double_pane_vc_g2

0x0001,

0xf7b3,	// (0x0001c186) list_double_pane_vc_g_ParamLimits

0xf7b3,	// (0x0001c186) list_double_pane_vc_g

0xb186,	// (0x00017b59) list_double_pane_vc_t1_ParamLimits

0xb186,	// (0x00017b59) list_double_pane_vc_t1

0xb19a,	// (0x00017b6d) list_double_pane_vc_t2_ParamLimits

0xb19a,	// (0x00017b6d) list_double_pane_vc_t2

0x0001,

0xfa22,	// (0x0001c3f5) list_double_pane_vc_t_ParamLimits

0xfa22,	// (0x0001c3f5) list_double_pane_vc_t

0x903a,	// (0x00015a0d) list_double_number_pane_vc_g1_ParamLimits

0x903a,	// (0x00015a0d) list_double_number_pane_vc_g1

0x9046,	// (0x00015a19) list_double_number_pane_vc_g2_ParamLimits

0x9046,	// (0x00015a19) list_double_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x0001c186) list_double_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x0001c186) list_double_number_pane_vc_g

0xb1b0,	// (0x00017b83) list_double_number_pane_vc_t1_ParamLimits

0xb1b0,	// (0x00017b83) list_double_number_pane_vc_t1

0xb1c2,	// (0x00017b95) list_double_number_pane_vc_t2_ParamLimits

0xb1c2,	// (0x00017b95) list_double_number_pane_vc_t2

0xb1d6,	// (0x00017ba9) list_double_number_pane_vc_t3_ParamLimits

0xb1d6,	// (0x00017ba9) list_double_number_pane_vc_t3

0x0002,

0xfa27,	// (0x0001c3fa) list_double_number_pane_vc_t_ParamLimits

0xfa27,	// (0x0001c3fa) list_double_number_pane_vc_t

0xb1ee,	// (0x00017bc1) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb1ee,	// (0x00017bc1) list_double_large_graphic_pane_vc_g1

0xb210,	// (0x00017be3) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb210,	// (0x00017be3) list_double_large_graphic_pane_vc_g2

0xb224,	// (0x00017bf7) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb224,	// (0x00017bf7) list_double_large_graphic_pane_vc_g3

0xb233,	// (0x00017c06) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb233,	// (0x00017c06) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2e,	// (0x0001c401) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0001c401) list_double_large_graphic_pane_vc_g

0xb23f,	// (0x00017c12) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb23f,	// (0x00017c12) list_double_large_graphic_pane_vc_t1

0xb25b,	// (0x00017c2e) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb25b,	// (0x00017c2e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa37,	// (0x0001c40a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa37,	// (0x0001c40a) list_double_large_graphic_pane_vc_t

0xadb5,	// (0x00017788) list_double_heading_pane_vc_g1_ParamLimits

0xadb5,	// (0x00017788) list_double_heading_pane_vc_g1

0xadc1,	// (0x00017794) list_double_heading_pane_vc_g2_ParamLimits

0xadc1,	// (0x00017794) list_double_heading_pane_vc_g2

0x0001,

0xfa3c,	// (0x0001c40f) list_double_heading_pane_vc_g_ParamLimits

0xfa3c,	// (0x0001c40f) list_double_heading_pane_vc_g

0xb27b,	// (0x00017c4e) list_double_heading_pane_vc_t1_ParamLimits

0xb27b,	// (0x00017c4e) list_double_heading_pane_vc_t1

0xb28d,	// (0x00017c60) list_double_heading_pane_vc_t2_ParamLimits

0xb28d,	// (0x00017c60) list_double_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0001c414) list_double_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0001c414) list_double_heading_pane_vc_t

0xb2a5,	// (0x00017c78) list_double_graphic_pane_vc_g1_ParamLimits

0xb2a5,	// (0x00017c78) list_double_graphic_pane_vc_g1

0xb2b1,	// (0x00017c84) list_double_graphic_pane_vc_g2_ParamLimits

0xb2b1,	// (0x00017c84) list_double_graphic_pane_vc_g2

0x903a,	// (0x00015a0d) list_double_graphic_pane_vc_g3_ParamLimits

0x903a,	// (0x00015a0d) list_double_graphic_pane_vc_g3

0x0003,

0xfa46,	// (0x0001c419) list_double_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0001c419) list_double_graphic_pane_vc_g

0xb2ce,	// (0x00017ca1) list_double_graphic_pane_vc_t1_ParamLimits

0xb2ce,	// (0x00017ca1) list_double_graphic_pane_vc_t1

0xb2f8,	// (0x00017ccb) list_double_graphic_pane_vc_t2_ParamLimits

0xb2f8,	// (0x00017ccb) list_double_graphic_pane_vc_t2

0x0001,

0xfa4f,	// (0x0001c422) list_double_graphic_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001c422) list_double_graphic_pane_vc_t

0x4ae5,	// (0x000114b8) aid_size_cell_fastswap

0x4aed,	// (0x000114c0) aid_size_cell_touch_ParamLimits

0x4aed,	// (0x000114c0) aid_size_cell_touch

0x4d5e,	// (0x00011731) popup_fast_swap_wide_window_ParamLimits

0x4d5e,	// (0x00011731) popup_fast_swap_wide_window

0x4e7c,	// (0x0001184f) touch_pane_ParamLimits

0x4e7c,	// (0x0001184f) touch_pane

0x3f7a,	// (0x0001094d) button_value_adjust_pane_cp2

0x3f82,	// (0x00010955) button_value_adjust_pane_cp4

0x3f8a,	// (0x0001095d) form_field_data_pane_cp2

0x7a01,	// (0x000143d4) form_field_data_wide_pane_cp2

0x7f6e,	// (0x00014941) bg_scroll_pane_ParamLimits

0x5117,	// (0x00011aea) scroll_handle_pane_ParamLimits

0x512b,	// (0x00011afe) scroll_sc2_down_pane_ParamLimits

0x512b,	// (0x00011afe) scroll_sc2_down_pane

0x7f9f,	// (0x00014972) scroll_sc2_up_pane_ParamLimits

0x7f9f,	// (0x00014972) scroll_sc2_up_pane

0xb7dd,	// (0x000181b0) grid_wheel_folder_pane_g1_ParamLimits

0xb7dd,	// (0x000181b0) grid_wheel_folder_pane_g1

0x52f2,	// (0x00011cc5) clock_nsta_pane_cp2_ParamLimits

0x52f2,	// (0x00011cc5) clock_nsta_pane_cp2

0x882b,	// (0x000151fe) listscroll_midp_pane_ParamLimits

0x8837,	// (0x0001520a) midp_canvas_pane

0x8b22,	// (0x000154f5) nsta_clock_indic_pane

0x8b5e,	// (0x00015531) listscroll_form_pane_vc

0x8b66,	// (0x00015539) listscroll_set_pane_vc_ParamLimits

0x8b66,	// (0x00015539) listscroll_set_pane_vc

0x8c63,	// (0x00015636) clock_nsta_pane

0x8ce0,	// (0x000156b3) indicator_nsta_pane

0x8fc8,	// (0x0001599b) bg_popup_sub_pane_cp2_ParamLimits

0x8fdc,	// (0x000159af) find_pane_cp2_ParamLimits

0x8fdc,	// (0x000159af) find_pane_cp2

0x8ff2,	// (0x000159c5) grid_toobar_pane_ParamLimits

0x91c0,	// (0x00015b93) list_form_gen_pane_vc_ParamLimits

0x91c0,	// (0x00015b93) list_form_gen_pane_vc

0x91d6,	// (0x00015ba9) scroll_pane_cp8_vc_ParamLimits

0x91d6,	// (0x00015ba9) scroll_pane_cp8_vc

0x9252,	// (0x00015c25) data_form_wide_pane_vc_ParamLimits

0x9252,	// (0x00015c25) data_form_wide_pane_vc

0x925e,	// (0x00015c31) form_field_data_wide_pane_vc_g1

0x9266,	// (0x00015c39) form_field_data_wide_pane_vc_t1_ParamLimits

0x9266,	// (0x00015c39) form_field_data_wide_pane_vc_t1

0x3fe6,	// (0x000109b9) input_focus_pane_cp6_vc_ParamLimits

0x3fe6,	// (0x000109b9) input_focus_pane_cp6_vc

0x9591,	// (0x00015f64) list_midp_pane_ParamLimits

0x959d,	// (0x00015f70) scroll_pane_cp16_ParamLimits

0x959d,	// (0x00015f70) scroll_pane_cp16

0x9607,	// (0x00015fda) button_value_adjust_pane_ParamLimits

0x9607,	// (0x00015fda) button_value_adjust_pane

0xa5ae,	// (0x00016f81) button_value_adjust_pane_cp6_ParamLimits

0xa5ae,	// (0x00016f81) button_value_adjust_pane_cp6

0xa6f6,	// (0x000170c9) settings_code_pane_cp_ParamLimits

0xa6f6,	// (0x000170c9) settings_code_pane_cp

0x35ec,	// (0x0000ffbf) cell_touch_pane_g1

0x35ec,	// (0x0000ffbf) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x0001c0aa) cell_touch_pane_g

0xad88,	// (0x0001775b) cell_touch_pane_cp_ParamLimits

0xad88,	// (0x0001775b) cell_touch_pane_cp

0xad98,	// (0x0001776b) cell_touch_pane_ParamLimits

0xad98,	// (0x0001776b) cell_touch_pane

0x35ec,	// (0x0000ffbf) scroll_sc2_down_pane_g1

0x35ec,	// (0x0000ffbf) scroll_sc2_up_pane_g1

0x37b4,	// (0x00010187) bg_set_opt_pane_cp4_vc

0xae01,	// (0x000177d4) list_set_graphic_pane_vc_g1_ParamLimits

0xae01,	// (0x000177d4) list_set_graphic_pane_vc_g1

0xae0d,	// (0x000177e0) list_set_graphic_pane_vc_g2_ParamLimits

0xae0d,	// (0x000177e0) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x0001c3a6) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x0001c3a6) list_set_graphic_pane_vc_g

0xae19,	// (0x000177ec) text_primary_small_cp13_vc_ParamLimits

0xae19,	// (0x000177ec) text_primary_small_cp13_vc

0xae31,	// (0x00017804) list_set_graphic_pane_vc_ParamLimits

0xae31,	// (0x00017804) list_set_graphic_pane_vc

0x37b4,	// (0x00010187) input_focus_pane_cp2_vc

0x35ec,	// (0x0000ffbf) setting_code_pane_vc_g1

0x390e,	// (0x000102e1) setting_code_pane_vc_t1

0xae44,	// (0x00017817) set_text_pane_vc_t1_ParamLimits

0xae44,	// (0x00017817) set_text_pane_vc_t1

0x37b4,	// (0x00010187) input_focus_pane_cp1_vc

0xae65,	// (0x00017838) list_set_text_pane_vc

0x35ec,	// (0x0000ffbf) setting_text_pane_vc_g1

0x37b4,	// (0x00010187) bg_set_opt_pane_cp2_vc

0x38dd,	// (0x000102b0) setting_slider_graphic_pane_vc_g1

0xae6f,	// (0x00017842) setting_slider_graphic_pane_vc_t1

0xae81,	// (0x00017854) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x0001c3ab) setting_slider_graphic_pane_vc_t

0xae93,	// (0x00017866) slider_set_pane_cp_vc

0xae9d,	// (0x00017870) slider_set_pane_vc_g1

0xaea6,	// (0x00017879) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x0001c3b0) slider_set_pane_vc_g

0x40a1,	// (0x00010a74) set_opt_bg_pane_g1_copy1

0x40a9,	// (0x00010a7c) set_opt_bg_pane_g2_copy1

0xaed2,	// (0x000178a5) set_opt_bg_pane_g3_copy1

0x40b9,	// (0x00010a8c) set_opt_bg_pane_g4_copy1

0x40c1,	// (0x00010a94) set_opt_bg_pane_g5_copy1

0x40c9,	// (0x00010a9c) set_opt_bg_pane_g6_copy1

0xaedc,	// (0x000178af) set_opt_bg_pane_g7_copy1

0xaee6,	// (0x000178b9) set_opt_bg_pane_g8_copy1

0xaef0,	// (0x000178c3) set_opt_bg_pane_g9_copy1

0x37b4,	// (0x00010187) bg_set_opt_pane_cp_vc

0xaefa,	// (0x000178cd) setting_slider_pane_vc_t1

0xaf09,	// (0x000178dc) setting_slider_pane_vc_t2

0xaf1b,	// (0x000178ee) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x0001c3bf) setting_slider_pane_vc_t

0xaf2d,	// (0x00017900) slider_set_pane_vc

0x5d52,	// (0x00012725) volume_set_pane_vc_g1

0x5d5b,	// (0x0001272e) volume_set_pane_vc_g2

0x5d64,	// (0x00012737) volume_set_pane_vc_g3

0x5d6d,	// (0x00012740) volume_set_pane_vc_g4

0x5d76,	// (0x00012749) volume_set_pane_vc_g5

0x5d7f,	// (0x00012752) volume_set_pane_vc_g6

0x5d88,	// (0x0001275b) volume_set_pane_vc_g7

0x5d91,	// (0x00012764) volume_set_pane_vc_g8

0x5d9a,	// (0x0001276d) volume_set_pane_vc_g9

0x5da3,	// (0x00012776) volume_set_pane_vc_g10

0x0009,

0xf88a,	// (0x0001c25d) volume_set_pane_vc_g

0xaf37,	// (0x0001790a) volume_set_pane_vc

0xaf41,	// (0x00017914) button_value_adjust_pane_cp1_vc

0xaf4b,	// (0x0001791e) list_highlight_pane_cp2_vc

0xaf54,	// (0x00017927) list_set_pane_vc_ParamLimits

0xaf54,	// (0x00017927) list_set_pane_vc

0xafc2,	// (0x00017995) main_pane_set_vc_t1_ParamLimits

0xafc2,	// (0x00017995) main_pane_set_vc_t1

0xafd7,	// (0x000179aa) main_pane_set_vc_t2_ParamLimits

0xafd7,	// (0x000179aa) main_pane_set_vc_t2

0xafe9,	// (0x000179bc) main_pane_set_vc_t3_ParamLimits

0xafe9,	// (0x000179bc) main_pane_set_vc_t3

0xaffd,	// (0x000179d0) main_pane_set_vc_t4_ParamLimits

0xaffd,	// (0x000179d0) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x0001c3c6) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x0001c3c6) main_pane_set_vc_t

0xb011,	// (0x000179e4) setting_code_pane_vc_ParamLimits

0xb011,	// (0x000179e4) setting_code_pane_vc

0xb022,	// (0x000179f5) setting_slider_graphic_pane_vc

0xb022,	// (0x000179f5) setting_slider_pane_vc

0xb022,	// (0x000179f5) setting_text_pane_vc

0xb022,	// (0x000179f5) setting_volume_pane_vc

0xb02c,	// (0x000179ff) scroll_pane_cp121_vc

0x3f68,	// (0x0001093b) set_content_pane_vc

0xb31b,	// (0x00017cee) button_value_adjust_pane_g1

0xb324,	// (0x00017cf7) button_value_adjust_pane_g2

0x0001,

0xfa54,	// (0x0001c427) button_value_adjust_pane_g

0xb32d,	// (0x00017d00) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb32d,	// (0x00017d00) form_field_slider_wide_pane_vc_t1

0xb33f,	// (0x00017d12) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb33f,	// (0x00017d12) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa59,	// (0x0001c42c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa59,	// (0x0001c42c) form_field_slider_wide_pane_vc_t

0x3856,	// (0x00010229) input_focus_pane_cp10_vc_ParamLimits

0x3856,	// (0x00010229) input_focus_pane_cp10_vc

0xb36b,	// (0x00017d3e) slider_cont_pane_cp1_vc_ParamLimits

0xb36b,	// (0x00017d3e) slider_cont_pane_cp1_vc

0xb37d,	// (0x00017d50) slider_form_pane_g1_cp2

0xaea6,	// (0x00017879) slider_form_pane_g2_cp2

0xb3aa,	// (0x00017d7d) form_field_slider_pane_vc_t3

0xb3b8,	// (0x00017d8b) form_field_slider_pane_vc_t4

0xb3c6,	// (0x00017d99) slider_form_pane_vc_ParamLimits

0xb3c6,	// (0x00017d99) slider_form_pane_vc

0xb3d3,	// (0x00017da6) form_field_slider_pane_vc_t1_ParamLimits

0xb3d3,	// (0x00017da6) form_field_slider_pane_vc_t1

0xb33f,	// (0x00017d12) form_field_slider_pane_vc_t2_ParamLimits

0xb33f,	// (0x00017d12) form_field_slider_pane_vc_t2

0x0001,

0xfa6b,	// (0x0001c43e) form_field_slider_pane_vc_t_ParamLimits

0xfa6b,	// (0x0001c43e) form_field_slider_pane_vc_t

0x3856,	// (0x00010229) input_focus_pane_cp9_vc_ParamLimits

0x3856,	// (0x00010229) input_focus_pane_cp9_vc

0xb3e9,	// (0x00017dbc) slider_cont_pane_vc_ParamLimits

0xb3e9,	// (0x00017dbc) slider_cont_pane_vc

0xb3fd,	// (0x00017dd0) list_form_graphic_pane_cp_vc_ParamLimits

0xb3fd,	// (0x00017dd0) list_form_graphic_pane_cp_vc

0x925e,	// (0x00015c31) form_field_popup_wide_pane_vc_g1

0xb412,	// (0x00017de5) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb412,	// (0x00017de5) form_field_popup_wide_pane_vc_t1

0x3fe6,	// (0x000109b9) input_focus_pane_cp8_vc_ParamLimits

0x3fe6,	// (0x000109b9) input_focus_pane_cp8_vc

0xb457,	// (0x00017e2a) list_form_wide_pane_vc_ParamLimits

0xb457,	// (0x00017e2a) list_form_wide_pane_vc

0xb463,	// (0x00017e36) list_form_graphic_pane_vc_g1

0xb46b,	// (0x00017e3e) list_form_graphic_pane_vc_t1_ParamLimits

0xb46b,	// (0x00017e3e) list_form_graphic_pane_vc_t1

0x386e,	// (0x00010241) list_highlight_pane_cp5_vc_ParamLimits

0x386e,	// (0x00010241) list_highlight_pane_cp5_vc

0xb487,	// (0x00017e5a) list_form_graphic_pane_vc_ParamLimits

0xb487,	// (0x00017e5a) list_form_graphic_pane_vc

0x925e,	// (0x00015c31) form_field_popup_pane_vc_g1

0xb49d,	// (0x00017e70) form_field_popup_pane_vc_t1_ParamLimits

0xb49d,	// (0x00017e70) form_field_popup_pane_vc_t1

0x3fe6,	// (0x000109b9) input_focus_pane_cp7_vc_ParamLimits

0x3fe6,	// (0x000109b9) input_focus_pane_cp7_vc

0xb4b4,	// (0x00017e87) list_form_pane_vc_ParamLimits

0xb4b4,	// (0x00017e87) list_form_pane_vc

0xb4c0,	// (0x00017e93) data_form_pane_vc_t1_ParamLimits

0xb4c0,	// (0x00017e93) data_form_pane_vc_t1

0x40a1,	// (0x00010a74) input_focus_pane_vc_g1

0x40a9,	// (0x00010a7c) input_focus_pane_vc_g2

0x40b1,	// (0x00010a84) input_focus_pane_vc_g3

0x40b9,	// (0x00010a8c) input_focus_pane_vc_g4

0x40c1,	// (0x00010a94) input_focus_pane_vc_g5

0x40c9,	// (0x00010a9c) input_focus_pane_vc_g6

0x40d1,	// (0x00010aa4) input_focus_pane_vc_g7

0x40d9,	// (0x00010aac) input_focus_pane_vc_g8

0x40e1,	// (0x00010ab4) input_focus_pane_vc_g9

0x35ec,	// (0x0000ffbf) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x0001c033) input_focus_pane_vc_g

0x9252,	// (0x00015c25) data_form_pane_vc_ParamLimits

0x9252,	// (0x00015c25) data_form_pane_vc

0x925e,	// (0x00015c31) form_field_data_pane_vc_g1

0xb4dd,	// (0x00017eb0) form_field_data_pane_vc_t1_ParamLimits

0xb4dd,	// (0x00017eb0) form_field_data_pane_vc_t1

0x3fe6,	// (0x000109b9) input_focus_pane_vc_ParamLimits

0x3fe6,	// (0x000109b9) input_focus_pane_vc

0xb4f7,	// (0x00017eca) button_value_adjust_pane_cp3_vc

0xb4ff,	// (0x00017ed2) button_value_adjust_pane_cp5_vc

0xb507,	// (0x00017eda) form_field_data_pane_vc_ParamLimits

0xb507,	// (0x00017eda) form_field_data_pane_vc

0xb522,	// (0x00017ef5) form_field_data_pane_vc_cp2

0xb52a,	// (0x00017efd) form_field_data_wide_pane_vc_ParamLimits

0xb52a,	// (0x00017efd) form_field_data_wide_pane_vc

0xb544,	// (0x00017f17) form_field_data_wide_pane_vc_cp2

0xb54c,	// (0x00017f1f) form_field_popup_pane_vc_ParamLimits

0xb54c,	// (0x00017f1f) form_field_popup_pane_vc

0xb567,	// (0x00017f3a) form_field_popup_wide_pane_vc_ParamLimits

0xb567,	// (0x00017f3a) form_field_popup_wide_pane_vc

0xb581,	// (0x00017f54) form_field_slider_pane_vc_ParamLimits

0xb581,	// (0x00017f54) form_field_slider_pane_vc

0xb594,	// (0x00017f67) form_field_slider_wide_pane_vc_ParamLimits

0xb594,	// (0x00017f67) form_field_slider_wide_pane_vc

0xb5a7,	// (0x00017f7a) grid_touch_1_pane_ParamLimits

0xb5a7,	// (0x00017f7a) grid_touch_1_pane

0xb5b3,	// (0x00017f86) grid_touch_2_pane_ParamLimits

0xb5b3,	// (0x00017f86) grid_touch_2_pane

0x8aed,	// (0x000154c0) touch_pane_g1_ParamLimits

0x8aed,	// (0x000154c0) touch_pane_g1

0xb5cd,	// (0x00017fa0) cell_app_pane_cp_wide_ParamLimits

0xb5cd,	// (0x00017fa0) cell_app_pane_cp_wide

0xb5de,	// (0x00017fb1) grid_popup_fast_wide_pane_ParamLimits

0xb5de,	// (0x00017fb1) grid_popup_fast_wide_pane

0xb5f2,	// (0x00017fc5) scroll_pane_cp19_ParamLimits

0xb5f2,	// (0x00017fc5) scroll_pane_cp19

0x37b4,	// (0x00010187) bg_popup_window_pane_cp20

0xb606,	// (0x00017fd9) listscroll_popup_fast_wide_pane

0xb60e,	// (0x00017fe1) grid_indicator_nsta_pane

0xb620,	// (0x00017ff3) clock_nsta_pane_g1

0xb629,	// (0x00017ffc) clock_nsta_pane_t1

0xb645,	// (0x00018018) cell_indicator_nsta_pane_ParamLimits

0xb645,	// (0x00018018) cell_indicator_nsta_pane

0xb67a,	// (0x0001804d) cell_indicator_nsta_pane_g1

0xb688,	// (0x0001805b) cell_indicator_nsta_pane_g2

0x0001,

0xfa7c,	// (0x0001c44f) cell_indicator_nsta_pane_g

0xb69b,	// (0x0001806e) clock_nsta_pane_cp

0xb6a4,	// (0x00018077) indicator_nsta_pane_cp

0xb6ae,	// (0x00018081) nsta_clock_indic_pane_g1

0x394d,	// (0x00010320) grid_indicator_pane

0x8091,	// (0x00014a64) scroll_pane_cp29

0x5241,	// (0x00011c14) indicator_nsta_pane_cp2_ParamLimits

0x5241,	// (0x00011c14) indicator_nsta_pane_cp2

0x386e,	// (0x00010241) main_apps_wheel_pane

0x946e,	// (0x00015e41) form_midp_field_text_pane_ParamLimits

0x95bd,	// (0x00015f90) scroll_bar_cp050_ParamLimits

0xb707,	// (0x000180da) cell_indicator_pane_ParamLimits

0xb707,	// (0x000180da) cell_indicator_pane

0xb71f,	// (0x000180f2) cell_indicator_pane_g1

0xb729,	// (0x000180fc) grid_wheel_folder_pane_ParamLimits

0xb729,	// (0x000180fc) grid_wheel_folder_pane

0xb73d,	// (0x00018110) list_wheel_apps_pane_ParamLimits

0xb73d,	// (0x00018110) list_wheel_apps_pane

0xb750,	// (0x00018123) main_apps_wheel_pane_g1_ParamLimits

0xb750,	// (0x00018123) main_apps_wheel_pane_g1

0xb76c,	// (0x0001813f) main_apps_wheel_pane_g2_ParamLimits

0xb76c,	// (0x0001813f) main_apps_wheel_pane_g2

0x0001,

0xfa98,	// (0x0001c46b) main_apps_wheel_pane_g_ParamLimits

0xfa98,	// (0x0001c46b) main_apps_wheel_pane_g

0xb788,	// (0x0001815b) main_apps_wheel_pane_t1_ParamLimits

0xb788,	// (0x0001815b) main_apps_wheel_pane_t1

0xb7b1,	// (0x00018184) list_wheel_apps_pane_g1

0xb7b9,	// (0x0001818c) list_wheel_apps_pane_g2

0xb7c1,	// (0x00018194) list_wheel_apps_pane_g3

0xb7c9,	// (0x0001819c) list_wheel_apps_pane_g4

0xb7d3,	// (0x000181a6) list_wheel_apps_pane_g5

0x0004,

0xfa9d,	// (0x0001c470) list_wheel_apps_pane_g

0x8690,	// (0x00015063) navi_icon_text_pane

0x8b96,	// (0x00015569) aid_fill_nsta

0xb7f4,	// (0x000181c7) navi_icon_text_pane_g1

0xb800,	// (0x000181d3) navi_icon_text_pane_t1

0x8526,	// (0x00014ef9) list_set_graphic_pane_t1_ParamLimits

0x8526,	// (0x00014ef9) list_set_graphic_pane_t1

0x9d2a,	// (0x000166fd) popup_midp_note_alarm_window_t6_ParamLimits

0x9d2a,	// (0x000166fd) popup_midp_note_alarm_window_t6

0x9d3c,	// (0x0001670f) popup_midp_note_alarm_window_t7_ParamLimits

0x9d3c,	// (0x0001670f) popup_midp_note_alarm_window_t7

0x9d4e,	// (0x00016721) popup_midp_note_alarm_window_t8_ParamLimits

0x9d4e,	// (0x00016721) popup_midp_note_alarm_window_t8

0x9d60,	// (0x00016733) popup_midp_note_alarm_window_t9_ParamLimits

0x9d60,	// (0x00016733) popup_midp_note_alarm_window_t9

0x9d72,	// (0x00016745) popup_midp_note_alarm_window_t10_ParamLimits

0x9d72,	// (0x00016745) popup_midp_note_alarm_window_t10

0x9d84,	// (0x00016757) popup_midp_note_alarm_window_t11_ParamLimits

0x9d84,	// (0x00016757) popup_midp_note_alarm_window_t11

0x9d96,	// (0x00016769) scroll_pane_cp17_ParamLimits

0x9d96,	// (0x00016769) scroll_pane_cp17

0x5d52,	// (0x00012725) volume_small_pane_cp_g1

0x6063,	// (0x00012a36) volume_small_pane_cp_g2

0x606c,	// (0x00012a3f) volume_small_pane_cp_g3

0x6075,	// (0x00012a48) volume_small_pane_cp_g4

0x607e,	// (0x00012a51) volume_small_pane_cp_g5

0x6087,	// (0x00012a5a) volume_small_pane_cp_g6

0x6090,	// (0x00012a63) volume_small_pane_cp_g7

0x6099,	// (0x00012a6c) volume_small_pane_cp_g8

0x60a2,	// (0x00012a75) volume_small_pane_cp_g9

0x60ab,	// (0x00012a7e) volume_small_pane_cp_g10

0x8901,	// (0x000152d4) midp_ticker_pane_g1_ParamLimits

0x890d,	// (0x000152e0) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x0001c0ff) midp_ticker_pane_g_ParamLimits

0x8919,	// (0x000152ec) midp_ticker_pane_t1_ParamLimits

0x8bac,	// (0x0001557f) aid_fill_nsta_2

0x95a9,	// (0x00015f7c) list_form2_midp_pane

0xa772,	// (0x00017145) midp_editing_number_pane_ParamLimits

0xa781,	// (0x00017154) midp_ticker_pane_ParamLimits

0xb812,	// (0x000181e5) form2_midp_field_pane

0xb836,	// (0x00018209) scroll_pane_cp51

0xb856,	// (0x00018229) form2_midp_button_pane_ParamLimits

0xb856,	// (0x00018229) form2_midp_button_pane

0xb868,	// (0x0001823b) form2_midp_content_pane_ParamLimits

0xb868,	// (0x0001823b) form2_midp_content_pane

0xb882,	// (0x00018255) form2_midp_field_choice_group_pane

0xb88a,	// (0x0001825d) form2_midp_field_pane_g1

0xb892,	// (0x00018265) form2_midp_field_pane_g2

0xb89a,	// (0x0001826d) form2_midp_field_pane_g3

0xb8a2,	// (0x00018275) form2_midp_field_pane_g4

0x0003,

0xfac2,	// (0x0001c495) form2_midp_field_pane_g

0xb8aa,	// (0x0001827d) form2_midp_gauge_slider_pane

0xb8b2,	// (0x00018285) form2_midp_gauge_wait_pane

0xb8ba,	// (0x0001828d) form2_midp_image_pane_ParamLimits

0xb8ba,	// (0x0001828d) form2_midp_image_pane

0xb8d5,	// (0x000182a8) form2_midp_label_pane_ParamLimits

0xb8d5,	// (0x000182a8) form2_midp_label_pane

0xb8f4,	// (0x000182c7) form2_midp_label_pane_cp_ParamLimits

0xb8f4,	// (0x000182c7) form2_midp_label_pane_cp

0xb915,	// (0x000182e8) form2_midp_string_pane_ParamLimits

0xb915,	// (0x000182e8) form2_midp_string_pane

0xb927,	// (0x000182fa) form2_midp_text_pane_ParamLimits

0xb927,	// (0x000182fa) form2_midp_text_pane

0xb948,	// (0x0001831b) form2_midp_time_pane

0xb958,	// (0x0001832b) input_focus_pane_cp51_ParamLimits

0xb958,	// (0x0001832b) input_focus_pane_cp51

0xb970,	// (0x00018343) form2_midp_label_pane_t1_ParamLimits

0xb970,	// (0x00018343) form2_midp_label_pane_t1

0xb9b6,	// (0x00018389) form2_mdip_text_pane_t1_ParamLimits

0xb9b6,	// (0x00018389) form2_mdip_text_pane_t1

0xb9d5,	// (0x000183a8) form2_midp_time_pane_t1

0xb9f0,	// (0x000183c3) form2_midp_gauge_slider_pane_t1

0xba02,	// (0x000183d5) form2_midp_gauge_slider_pane_t2

0xba14,	// (0x000183e7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacb,	// (0x0001c49e) form2_midp_gauge_slider_pane_t

0xba26,	// (0x000183f9) form2_midp_slider_pane

0xba32,	// (0x00018405) form2_midp_gauge_wait_pane_t1

0xba40,	// (0x00018413) form2_midp_wait_pane_ParamLimits

0xba40,	// (0x00018413) form2_midp_wait_pane

0xba6b,	// (0x0001843e) list_single_2graphic_pane_cp4_ParamLimits

0xba6b,	// (0x0001843e) list_single_2graphic_pane_cp4

0x92bb,	// (0x00015c8e) list_single_midp_graphic_pane_cp_ParamLimits

0x92bb,	// (0x00015c8e) list_single_midp_graphic_pane_cp

0x37b4,	// (0x00010187) list_highlight_pane_cp20

0xba84,	// (0x00018457) list_single_2graphic_pane_g1_cp4

0xac8b,	// (0x0001765e) list_single_2graphic_pane_g2_cp4

0xba8c,	// (0x0001845f) list_single_2graphic_pane_t1_cp4

0x386e,	// (0x00010241) list_highlight_pane_cp21

0xba9b,	// (0x0001846e) list_single_midp_graphic_pane_g4_cp

0xbaaa,	// (0x0001847d) list_single_midp_graphic_pane_t1_cp

0xbabf,	// (0x00018492) form2_mdip_string_pane_t1_ParamLimits

0xbabf,	// (0x00018492) form2_mdip_string_pane_t1

0x37b4,	// (0x00010187) bg_wml_button_pane_cp2

0x35ec,	// (0x0000ffbf) form2_midp_image_pane_g1

0x3efa,	// (0x000108cd) list_double_large_graphic_pane_g5_ParamLimits

0x3efa,	// (0x000108cd) list_double_large_graphic_pane_g5

0x882b,	// (0x000151fe) midp_form_pane_ParamLimits

0x386e,	// (0x00010241) main_apps_wheel_pane_ParamLimits

0x594f,	// (0x00012322) popup_preview_window_ParamLimits

0x594f,	// (0x00012322) popup_preview_window

0x5b36,	// (0x00012509) popup_touch_info_window_ParamLimits

0x5b36,	// (0x00012509) popup_touch_info_window

0x5b58,	// (0x0001252b) popup_touch_menu_window_ParamLimits

0x5b58,	// (0x0001252b) popup_touch_menu_window

0x35e2,	// (0x0000ffb5) bg_popup_sub_pane_cp6

0xbb5b,	// (0x0001852e) list_touch_menu_pane

0xbb63,	// (0x00018536) list_single_touch_menu_pane_ParamLimits

0xbb63,	// (0x00018536) list_single_touch_menu_pane

0xbb7b,	// (0x0001854e) list_single_touch_menu_pane_t1

0x386e,	// (0x00010241) bg_popup_sub_pane_cp7_ParamLimits

0x386e,	// (0x00010241) bg_popup_sub_pane_cp7

0x95dd,	// (0x00015fb0) heading_sub_pane

0xbb89,	// (0x0001855c) list_touch_info_pane_ParamLimits

0xbb89,	// (0x0001855c) list_touch_info_pane

0xbb99,	// (0x0001856c) list_single_touch_info_pane_ParamLimits

0xbb99,	// (0x0001856c) list_single_touch_info_pane

0xbbab,	// (0x0001857e) list_single_touch_info_pane_t1

0xbbb9,	// (0x0001858c) list_single_touch_info_pane_t2

0x0001,

0xfad9,	// (0x0001c4ac) list_single_touch_info_pane_t

0x8823,	// (0x000151f6) bg_popup_heading_pane_cp

0xbbc7,	// (0x0001859a) heading_sub_pane_t1

0x91ec,	// (0x00015bbf) bg_popup_preview_window_pane_cp_ParamLimits

0x91ec,	// (0x00015bbf) bg_popup_preview_window_pane_cp

0x95dd,	// (0x00015fb0) heading_preview_pane

0xbb89,	// (0x0001855c) list_preview_pane_ParamLimits

0xbb89,	// (0x0001855c) list_preview_pane

0xbbd5,	// (0x000185a8) popup_preview_window_g1

0xbb99,	// (0x0001856c) list_single_preview_pane_ParamLimits

0xbb99,	// (0x0001856c) list_single_preview_pane

0xbbdd,	// (0x000185b0) list_single_preview_pane_g1

0xbbe5,	// (0x000185b8) list_single_preview_pane_t1

0xbbab,	// (0x0001857e) list_single_preview_pane_t2

0x0001,

0xfade,	// (0x0001c4b1) list_single_preview_pane_t

0xbbf3,	// (0x000185c6) bg_popup_heading_pane_cp2_ParamLimits

0xbbf3,	// (0x000185c6) bg_popup_heading_pane_cp2

0xbc09,	// (0x000185dc) heading_preview_pane_g1

0xbc11,	// (0x000185e4) heading_preview_pane_t1_ParamLimits

0xbc11,	// (0x000185e4) heading_preview_pane_t1

0x3964,	// (0x00010337) soft_indicator_pane_t1_ParamLimits

0x3ec6,	// (0x00010899) scroll_pane_ParamLimits

0x7f8d,	// (0x00014960) scroll_sc2_left_pane

0x7f96,	// (0x00014969) scroll_sc2_right_pane

0x7fb5,	// (0x00014988) scroll_bg_pane_g1_ParamLimits

0x7fca,	// (0x0001499d) scroll_bg_pane_g2_ParamLimits

0x7fe2,	// (0x000149b5) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x0001c08a) scroll_bg_pane_g_ParamLimits

0x7fb5,	// (0x00014988) scroll_handle_pane_g1_ParamLimits

0x8004,	// (0x000149d7) scroll_handle_pane_g2_ParamLimits

0x7fe2,	// (0x000149b5) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x0001c091) scroll_handle_pane_g_ParamLimits

0x5594,	// (0x00011f67) popup_choice_list_window_ParamLimits

0x5594,	// (0x00011f67) popup_choice_list_window

0x8fd4,	// (0x000159a7) choice_list_pane

0x9090,	// (0x00015a63) cell_toolbar_pane_t1

0x90b8,	// (0x00015a8b) toolbar_button_pane_ParamLimits

0xa260,	// (0x00016c33) ai_gene_pane_1_t2_ParamLimits

0xa260,	// (0x00016c33) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x0001c2b9) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x0001c2b9) ai_gene_pane_1_t

0xbc2e,	// (0x00018601) scroll_sc2_left_pane_g1

0xbc2e,	// (0x00018601) scroll_sc2_right_pane_g1

0x8b52,	// (0x00015525) bg_popup_sub_pane_cp10

0xbc38,	// (0x0001860b) list_choice_list_pane

0xbc51,	// (0x00018624) list_single_choice_list_pane_ParamLimits

0xbc51,	// (0x00018624) list_single_choice_list_pane

0xbc69,	// (0x0001863c) list_single_choice_list_pane_g1

0x7c75,	// (0x00014648) list_single_choice_list_pane_t1_ParamLimits

0x7c75,	// (0x00014648) list_single_choice_list_pane_t1

0xbc71,	// (0x00018644) choice_list_pane_g1

0xbc79,	// (0x0001864c) choice_list_pane_t1

0x35e2,	// (0x0000ffb5) input_focus_pane_cp11

0x7e4c,	// (0x0001481f) title_pane_stacon_g2_ParamLimits

0x7e4c,	// (0x0001481f) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x0001c070) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x0001c070) title_pane_stacon_g

0x8823,	// (0x000151f6) cursor_press_pane

0x564e,	// (0x00012021) popup_fep_hwr_window_ParamLimits

0x564e,	// (0x00012021) popup_fep_hwr_window

0x56d8,	// (0x000120ab) popup_fep_vkb_window_ParamLimits

0x56d8,	// (0x000120ab) popup_fep_vkb_window

0xbc87,	// (0x0001865a) cursor_press_pane_g1

0x0002,

0xfb07,	// (0x0001c4da) fep_vkb_side_pane_g_ParamLimits

0x60ed,	// (0x00012ac0) fep_hwr_candidate_pane_ParamLimits

0x60ed,	// (0x00012ac0) fep_hwr_candidate_pane

0x6117,	// (0x00012aea) fep_hwr_side_pane_ParamLimits

0x6117,	// (0x00012aea) fep_hwr_side_pane

0x6139,	// (0x00012b0c) fep_hwr_top_pane_ParamLimits

0x6139,	// (0x00012b0c) fep_hwr_top_pane

0x6151,	// (0x00012b24) fep_hwr_write_pane_ParamLimits

0x6151,	// (0x00012b24) fep_hwr_write_pane

0xfb07,	// (0x0001c4da) fep_vkb_side_pane_g

0xbc8f,	// (0x00018662) fep_hwr_top_pane_g1

0xbca1,	// (0x00018674) fep_hwr_top_pane_g2

0x618b,	// (0x00012b5e) fep_hwr_top_pane_g3

0x0002,

0xfae3,	// (0x0001c4b6) fep_hwr_top_pane_g

0x61a0,	// (0x00012b73) fep_hwr_top_text_pane

0x8159,	// (0x00014b2c) fep_hwr_top_text_pane_g1

0xbcd7,	// (0x000186aa) fep_hwr_top_text_pane_t1

0x62aa,	// (0x00012c7d) fep_hwr_candidate_pane_g1

0xbf22,	// (0x000188f5) fep_vkb_keypad_pane_g3_ParamLimits

0xbf22,	// (0x000188f5) fep_vkb_keypad_pane_g3

0xbf4e,	// (0x00018921) fep_vkb_keypad_pane_g4_ParamLimits

0xbf4e,	// (0x00018921) fep_vkb_keypad_pane_g4

0xbfc5,	// (0x00018998) fep_vkb_bottom_pane_g2_ParamLimits

0xbfc5,	// (0x00018998) fep_vkb_bottom_pane_g2

0x0001,

0xfb0e,	// (0x0001c4e1) fep_vkb_bottom_pane_g_ParamLimits

0xfb0e,	// (0x0001c4e1) fep_vkb_bottom_pane_g

0xbc2e,	// (0x00018601) cell_vkb_side_pane_g2

0x0001,

0xfb18,	// (0x0001c4eb) cell_vkb_side_pane_g

0xc050,	// (0x00018a23) cell_vkb_side_pane_t1

0xc05e,	// (0x00018a31) cell_vkb_side_pane_t1_copy1

0xbc2e,	// (0x00018601) bg_fep_vkb_candidate_pane_g2

0xc1a2,	// (0x00018b75) cell_vkb_candidate_pane_ParamLimits

0xbce5,	// (0x000186b8) aid_size_cell_vkb_ParamLimits

0xbce5,	// (0x000186b8) aid_size_cell_vkb

0xc1a2,	// (0x00018b75) cell_vkb_candidate_pane

0x62d1,	// (0x00012ca4) bg_popup_fep_shadow_pane_g1

0xbd77,	// (0x0001874a) fep_vkb_bottom_pane_ParamLimits

0xbd77,	// (0x0001874a) fep_vkb_bottom_pane

0xbdb4,	// (0x00018787) fep_vkb_candidate_pane_ParamLimits

0xbdb4,	// (0x00018787) fep_vkb_candidate_pane

0xbdd0,	// (0x000187a3) fep_vkb_keypad_pane_ParamLimits

0xbdd0,	// (0x000187a3) fep_vkb_keypad_pane

0xbe03,	// (0x000187d6) fep_vkb_side_pane_ParamLimits

0xbe03,	// (0x000187d6) fep_vkb_side_pane

0xbe3f,	// (0x00018812) fep_vkb_top_pane_ParamLimits

0xbe3f,	// (0x00018812) fep_vkb_top_pane

0xbe7b,	// (0x0001884e) fep_vkb_top_pane_g1_ParamLimits

0xbe7b,	// (0x0001884e) fep_vkb_top_pane_g1

0xbe8a,	// (0x0001885d) fep_vkb_top_pane_g2_ParamLimits

0xbe8a,	// (0x0001885d) fep_vkb_top_pane_g2

0xbe99,	// (0x0001886c) fep_vkb_top_pane_g3_ParamLimits

0xbe99,	// (0x0001886c) fep_vkb_top_pane_g3

0x0003,

0xfafe,	// (0x0001c4d1) fep_vkb_top_pane_g_ParamLimits

0xfafe,	// (0x0001c4d1) fep_vkb_top_pane_g

0xbeb7,	// (0x0001888a) fep_vkb_top_text_pane_ParamLimits

0xbeb7,	// (0x0001888a) fep_vkb_top_text_pane

0xbec8,	// (0x0001889b) fep_vkb_side_pane_g1_ParamLimits

0xbec8,	// (0x0001889b) fep_vkb_side_pane_g1

0xbf11,	// (0x000188e4) grid_vkb_side_pane_ParamLimits

0xbf11,	// (0x000188e4) grid_vkb_side_pane

0x62d9,	// (0x00012cac) bg_popup_fep_shadow_pane_g2

0x62e2,	// (0x00012cb5) bg_popup_fep_shadow_pane_g3

0x62ea,	// (0x00012cbd) bg_popup_fep_shadow_pane_g4

0x62f3,	// (0x00012cc6) bg_popup_fep_shadow_pane_g5

0x62fd,	// (0x00012cd0) bg_popup_fep_shadow_pane_g6

0x6305,	// (0x00012cd8) bg_popup_fep_shadow_pane_g7

0x40b9,	// (0x00010a8c) bg_popup_fep_shadow_pane_g8

0xbf70,	// (0x00018943) grid_vkb_keypad_number_pane_ParamLimits

0xbf70,	// (0x00018943) grid_vkb_keypad_number_pane

0xbf84,	// (0x00018957) grid_vkb_keypad_pane_ParamLimits

0xbf84,	// (0x00018957) grid_vkb_keypad_pane

0xbfaa,	// (0x0001897d) fep_vkb_bottom_pane_g1_ParamLimits

0xbfaa,	// (0x0001897d) fep_vkb_bottom_pane_g1

0xbfd3,	// (0x000189a6) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbfd3,	// (0x000189a6) grid_vkb_keypad_bottom_left_pane

0xbfe8,	// (0x000189bb) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbfe8,	// (0x000189bb) grid_vkb_keypad_bottom_right_pane

0xbffd,	// (0x000189d0) fep_vkb_top_text_pane_g1

0xc018,	// (0x000189eb) fep_vkb_top_text_pane_t1

0xc02d,	// (0x00018a00) cell_vkb_side_pane_ParamLimits

0xc02d,	// (0x00018a00) cell_vkb_side_pane

0xbc2e,	// (0x00018601) cell_vkb_side_pane_g1

0xc06c,	// (0x00018a3f) cell_vkb_keypad_pane_ParamLimits

0xc06c,	// (0x00018a3f) cell_vkb_keypad_pane

0xc0f9,	// (0x00018acc) cell_vkb_keypad_pane_g1

0x0008,

0xfb2b,	// (0x0001c4fe) bg_popup_fep_shadow_pane_g

0x6317,	// (0x00012cea) cell_hwr_side_pane_g1

0x6317,	// (0x00012cea) cell_hwr_side_pane_g2

0xc103,	// (0x00018ad6) cell_vkb_keypad_pane_t1

0xc111,	// (0x00018ae4) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc111,	// (0x00018ae4) cell_vkb_keypad_bottom_left_pane

0xc12e,	// (0x00018b01) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc12e,	// (0x00018b01) cell_vkb_keypad_bottom_right_pane

0xbc2e,	// (0x00018601) cell_vkb_keypad_bottom_left_pane_g1

0xbc2e,	// (0x00018601) cell_vkb_keypad_bottom_right_pane_g1

0xc167,	// (0x00018b3a) cell_vkb_keypad_number_pane_ParamLimits

0xc167,	// (0x00018b3a) cell_vkb_keypad_number_pane

0xc186,	// (0x00018b59) cell_vkb_keypad_number_pane_g1

0xc190,	// (0x00018b63) cell_vkb_keypad_number_pane_g2

0xc199,	// (0x00018b6c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1d,	// (0x0001c4f0) cell_vkb_keypad_number_pane_g

0xc103,	// (0x00018ad6) cell_vkb_keypad_number_pane_t1

0xc1c3,	// (0x00018b96) fep_vkb_candidate_pane_g1

0x0001,

0xfb3e,	// (0x0001c511) cell_hwr_side_pane_g

0xc1dc,	// (0x00018baf) cell_hwr_side_pane_t1

0x6321,	// (0x00012cf4) cell_hwr_side_pane_t1_copy1

0x632f,	// (0x00012d02) cell_hwr_candidate_pane_g1

0x635e,	// (0x00012d31) cell_hwr_candidate_pane_t1

0xbc2e,	// (0x00018601) cell_vkb_candidate_pane_g2

0xc220,	// (0x00018bf3) cell_vkb_candidate_pane_t1

0x60b4,	// (0x00012a87) bg_popup_fep_shadow_pane_ParamLimits

0x60b4,	// (0x00012a87) bg_popup_fep_shadow_pane

0x616b,	// (0x00012b3e) bg_fep_hwr_top_pane_g4

0xbcb3,	// (0x00018686) bg_hwr_side_pane_g1_ParamLimits

0xbcb3,	// (0x00018686) bg_hwr_side_pane_g1

0x61de,	// (0x00012bb1) cell_hwr_side_pane_ParamLimits

0x61de,	// (0x00012bb1) cell_hwr_side_pane

0x621b,	// (0x00012bee) fep_hwr_write_pane_g1_ParamLimits

0x621b,	// (0x00012bee) fep_hwr_write_pane_g1

0x6228,	// (0x00012bfb) fep_hwr_write_pane_g2_ParamLimits

0x6228,	// (0x00012bfb) fep_hwr_write_pane_g2

0x6235,	// (0x00012c08) fep_hwr_write_pane_g3_ParamLimits

0x6235,	// (0x00012c08) fep_hwr_write_pane_g3

0x6243,	// (0x00012c16) fep_hwr_write_pane_g4_ParamLimits

0x6243,	// (0x00012c16) fep_hwr_write_pane_g4

0x0005,

0xfaea,	// (0x0001c4bd) fep_hwr_write_pane_g_ParamLimits

0xfaea,	// (0x0001c4bd) fep_hwr_write_pane_g

0x616b,	// (0x00012b3e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x616b,	// (0x00012b3e) bg_fep_hwr_candidate_pane_g2

0x6258,	// (0x00012c2b) cell_hwr_candidate_pane_ParamLimits

0x6258,	// (0x00012c2b) cell_hwr_candidate_pane

0x62aa,	// (0x00012c7d) fep_hwr_candidate_pane_g1_ParamLimits

0xbd13,	// (0x000186e6) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbd13,	// (0x000186e6) bg_popup_fep_shadow_pane_cp2

0xbea9,	// (0x0001887c) fep_vkb_top_pane_g4_ParamLimits

0xbea9,	// (0x0001887c) fep_vkb_top_pane_g4

0xbeef,	// (0x000188c2) fep_vkb_side_pane_g2_ParamLimits

0xbeef,	// (0x000188c2) fep_vkb_side_pane_g2

0x791f,	// (0x000142f2) list_setting_pane_t4_ParamLimits

0x791f,	// (0x000142f2) list_setting_pane_t4

0x799b,	// (0x0001436e) list_setting_number_pane_t5_ParamLimits

0x799b,	// (0x0001436e) list_setting_number_pane_t5

0x81a0,	// (0x00014b73) list_double_heading_pane_cp2_ParamLimits

0x81a0,	// (0x00014b73) list_double_heading_pane_cp2

0xc22e,	// (0x00018c01) list_double_heading_pane_g1_cp2_ParamLimits

0xc22e,	// (0x00018c01) list_double_heading_pane_g1_cp2

0xc23a,	// (0x00018c0d) list_double_heading_pane_g2_cp2_ParamLimits

0xc23a,	// (0x00018c0d) list_double_heading_pane_g2_cp2

0xc24e,	// (0x00018c21) list_double_heading_pane_t1_cp2_ParamLimits

0xc24e,	// (0x00018c21) list_double_heading_pane_t1_cp2

0xc264,	// (0x00018c37) list_double_heading_pane_t2_cp2_ParamLimits

0xc264,	// (0x00018c37) list_double_heading_pane_t2_cp2

0x35da,	// (0x0000ffad) aid_value_unit2

0x4dbc,	// (0x0001178f) popup_preview_fixed_window

0x3a44,	// (0x00010417) bg_popup_preview_window_pane_cp02

0xc276,	// (0x00018c49) list_preview_fixed_pane

0xc2bc,	// (0x00018c8f) list_empty_pane_fp_ParamLimits

0xc2bc,	// (0x00018c8f) list_empty_pane_fp

0xc2bc,	// (0x00018c8f) list_single_cale_day_pane_fp_ParamLimits

0xc2bc,	// (0x00018c8f) list_single_cale_day_pane_fp

0xc2bc,	// (0x00018c8f) list_single_graphic_heading_pane_fp_ParamLimits

0xc2bc,	// (0x00018c8f) list_single_graphic_heading_pane_fp

0xc2bc,	// (0x00018c8f) list_single_graphic_pane_fp_ParamLimits

0xc2bc,	// (0x00018c8f) list_single_graphic_pane_fp

0xc2bc,	// (0x00018c8f) list_single_heading_pane_fp_ParamLimits

0xc2bc,	// (0x00018c8f) list_single_heading_pane_fp

0xc2bc,	// (0x00018c8f) list_single_pane_fp_ParamLimits

0xc2bc,	// (0x00018c8f) list_single_pane_fp

0xc2d5,	// (0x00018ca8) list_single_pane_fp_g1_ParamLimits

0xc2d5,	// (0x00018ca8) list_single_pane_fp_g1

0x3f0f,	// (0x000108e2) list_single_pane_fp_g2_ParamLimits

0x3f0f,	// (0x000108e2) list_single_pane_fp_g2

0xc2e1,	// (0x00018cb4) list_single_pane_fp_g3_ParamLimits

0xc2e1,	// (0x00018cb4) list_single_pane_fp_g3

0xc2f5,	// (0x00018cc8) list_single_pane_fp_g4_ParamLimits

0xc2f5,	// (0x00018cc8) list_single_pane_fp_g4

0x0003,

0xfb51,	// (0x0001c524) list_single_pane_fp_g_ParamLimits

0xfb51,	// (0x0001c524) list_single_pane_fp_g

0xc301,	// (0x00018cd4) list_single_pane_fp_t1_ParamLimits

0xc301,	// (0x00018cd4) list_single_pane_fp_t1

0xc318,	// (0x00018ceb) list_single_graphic_pane_fp_g1_ParamLimits

0xc318,	// (0x00018ceb) list_single_graphic_pane_fp_g1

0xc2d5,	// (0x00018ca8) list_single_graphic_pane_fp_g2_ParamLimits

0xc2d5,	// (0x00018ca8) list_single_graphic_pane_fp_g2

0x3f0f,	// (0x000108e2) list_single_graphic_pane_fp_g3_ParamLimits

0x3f0f,	// (0x000108e2) list_single_graphic_pane_fp_g3

0xc2e1,	// (0x00018cb4) list_single_graphic_pane_fp_g4_ParamLimits

0xc2e1,	// (0x00018cb4) list_single_graphic_pane_fp_g4

0xc2f5,	// (0x00018cc8) list_single_graphic_pane_fp_g5_ParamLimits

0xc2f5,	// (0x00018cc8) list_single_graphic_pane_fp_g5

0x0004,

0xfb5a,	// (0x0001c52d) list_single_graphic_pane_fp_g_ParamLimits

0xfb5a,	// (0x0001c52d) list_single_graphic_pane_fp_g

0xc324,	// (0x00018cf7) list_single_graphic_pane_fp_t1_ParamLimits

0xc324,	// (0x00018cf7) list_single_graphic_pane_fp_t1

0xc318,	// (0x00018ceb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc318,	// (0x00018ceb) list_single_graphic_heading_pane_fp_g1

0xc2d5,	// (0x00018ca8) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc2d5,	// (0x00018ca8) list_single_graphic_heading_pane_fp_g2

0x3f0f,	// (0x000108e2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3f0f,	// (0x000108e2) list_single_graphic_heading_pane_fp_g3

0xc2e1,	// (0x00018cb4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc2e1,	// (0x00018cb4) list_single_graphic_heading_pane_fp_g4

0xc2f5,	// (0x00018cc8) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc2f5,	// (0x00018cc8) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5a,	// (0x0001c52d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5a,	// (0x0001c52d) list_single_graphic_heading_pane_fp_g

0xc33a,	// (0x00018d0d) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc33a,	// (0x00018d0d) list_single_graphic_heading_pane_fp_t1

0xc350,	// (0x00018d23) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc350,	// (0x00018d23) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb65,	// (0x0001c538) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb65,	// (0x0001c538) list_single_graphic_heading_pane_fp_t

0xc362,	// (0x00018d35) list_single_cale_day_pane_fp_g1_ParamLimits

0xc362,	// (0x00018d35) list_single_cale_day_pane_fp_g1

0xc39a,	// (0x00018d6d) list_single_cale_day_pane_fp_g2_ParamLimits

0xc39a,	// (0x00018d6d) list_single_cale_day_pane_fp_g2

0xc3a6,	// (0x00018d79) list_single_cale_day_pane_fp_g3_ParamLimits

0xc3a6,	// (0x00018d79) list_single_cale_day_pane_fp_g3

0xc3ce,	// (0x00018da1) list_single_cale_day_pane_fp_g4_ParamLimits

0xc3ce,	// (0x00018da1) list_single_cale_day_pane_fp_g4

0xc3f2,	// (0x00018dc5) list_single_cale_day_pane_fp_g5_ParamLimits

0xc3f2,	// (0x00018dc5) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6a,	// (0x0001c53d) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6a,	// (0x0001c53d) list_single_cale_day_pane_fp_g

0xc416,	// (0x00018de9) list_single_cale_day_pane_fp_t1_ParamLimits

0xc416,	// (0x00018de9) list_single_cale_day_pane_fp_t1

0xc43c,	// (0x00018e0f) list_single_cale_day_pane_fp_t2_ParamLimits

0xc43c,	// (0x00018e0f) list_single_cale_day_pane_fp_t2

0xc455,	// (0x00018e28) list_single_cale_day_pane_fp_t3_ParamLimits

0xc455,	// (0x00018e28) list_single_cale_day_pane_fp_t3

0x0002,

0xfb75,	// (0x0001c548) list_single_cale_day_pane_fp_t_ParamLimits

0xfb75,	// (0x0001c548) list_single_cale_day_pane_fp_t

0xc2d5,	// (0x00018ca8) list_empty_pane_fp_g1_ParamLimits

0xc2d5,	// (0x00018ca8) list_empty_pane_fp_g1

0xc46e,	// (0x00018e41) list_empty_pane_fp_t1

0xc4be,	// (0x00018e91) list_empty_pane_fp_t2

0x0001,

0xfb7c,	// (0x0001c54f) list_empty_pane_fp_t

0xc2d5,	// (0x00018ca8) list_single_heading_pane_fp_g1_ParamLimits

0xc2d5,	// (0x00018ca8) list_single_heading_pane_fp_g1

0x3f0f,	// (0x000108e2) list_single_heading_pane_fp_g2_ParamLimits

0x3f0f,	// (0x000108e2) list_single_heading_pane_fp_g2

0xc2e1,	// (0x00018cb4) list_single_heading_pane_fp_g3_ParamLimits

0xc2e1,	// (0x00018cb4) list_single_heading_pane_fp_g3

0x0002,

0xfb81,	// (0x0001c554) list_single_heading_pane_fp_g_ParamLimits

0xfb81,	// (0x0001c554) list_single_heading_pane_fp_g

0xc4cc,	// (0x00018e9f) list_single_heading_pane_fp_t1_ParamLimits

0xc4cc,	// (0x00018e9f) list_single_heading_pane_fp_t1

0xc4de,	// (0x00018eb1) list_single_heading_pane_fp_t2_ParamLimits

0xc4de,	// (0x00018eb1) list_single_heading_pane_fp_t2

0x0001,

0xfb88,	// (0x0001c55b) list_single_heading_pane_fp_t_ParamLimits

0xfb88,	// (0x0001c55b) list_single_heading_pane_fp_t

0x7ce3,	// (0x000146b6) aid_size_cell_fast

0x3a27,	// (0x000103fa) soft_indicator_pane_cp1_t1

0x7d20,	// (0x000146f3) cell_app_pane_cp2_ParamLimits

0x7d20,	// (0x000146f3) cell_app_pane_cp2

0x60d6,	// (0x00012aa9) fep_hwr_candidate_drop_down_list_pane

0x62c4,	// (0x00012c97) fep_hwr_candidate_pane_g3_ParamLimits

0x62c4,	// (0x00012c97) fep_hwr_candidate_pane_g3

0x2bbd,	// (0x0000f590) fep_hwr_candidate_pane_g4_ParamLimits

0x2bbd,	// (0x0000f590) fep_hwr_candidate_pane_g4

0x0002,

0xfaf7,	// (0x0001c4ca) fep_hwr_candidate_pane_g_ParamLimits

0xfaf7,	// (0x0001c4ca) fep_hwr_candidate_pane_g

0xbda3,	// (0x00018776) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbda3,	// (0x00018776) fep_vkb_candidate_drop_down_list_pane

0xc1cb,	// (0x00018b9e) fep_vkb_candidate_pane_g3

0xc1d3,	// (0x00018ba6) fep_vkb_candidate_pane_g4

0x0002,

0xfb24,	// (0x0001c4f7) fep_vkb_candidate_pane_g

0x632f,	// (0x00012d02) cell_hwr_candidate_pane_g1_ParamLimits

0x633d,	// (0x00012d10) cell_hwr_candidate_pane_g3_ParamLimits

0x633d,	// (0x00012d10) cell_hwr_candidate_pane_g3

0xe39a,	// (0x0001ad6d) cell_hwr_candidate_pane_g4_ParamLimits

0xe39a,	// (0x0001ad6d) cell_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0001c516) cell_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0001c516) cell_hwr_candidate_pane_g

0xc1ea,	// (0x00018bbd) cell_vkb_candidate_pane_g3_ParamLimits

0xc1ea,	// (0x00018bbd) cell_vkb_candidate_pane_g3

0xc205,	// (0x00018bd8) cell_vkb_candidate_pane_g4_ParamLimits

0xc205,	// (0x00018bd8) cell_vkb_candidate_pane_g4

0xc4f4,	// (0x00018ec7) cell_app_pane_cp2_g1_ParamLimits

0xc4f4,	// (0x00018ec7) cell_app_pane_cp2_g1

0xc512,	// (0x00018ee5) cell_app_pane_cp2_g2_ParamLimits

0xc512,	// (0x00018ee5) cell_app_pane_cp2_g2

0x0001,

0xfb8d,	// (0x0001c560) cell_app_pane_cp2_g_ParamLimits

0xfb8d,	// (0x0001c560) cell_app_pane_cp2_g

0xc51e,	// (0x00018ef1) cell_app_pane_cp2_t1_ParamLimits

0xc51e,	// (0x00018ef1) cell_app_pane_cp2_t1

0x3fe6,	// (0x000109b9) grid_highlight_pane_cp1_ParamLimits

0x3fe6,	// (0x000109b9) grid_highlight_pane_cp1

0x637c,	// (0x00012d4f) cell_hwr_candidate_pane_cp1_ParamLimits

0x637c,	// (0x00012d4f) cell_hwr_candidate_pane_cp1

0x632f,	// (0x00012d02) fep_hwr_candidate_drop_down_list_pane_g1

0x63a0,	// (0x00012d73) fep_hwr_candidate_drop_down_list_pane_g2

0x63ad,	// (0x00012d80) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb92,	// (0x0001c565) fep_hwr_candidate_drop_down_list_pane_g

0x63ba,	// (0x00012d8d) fep_hwr_candidate_drop_down_list_scroll_pane

0x63c3,	// (0x00012d96) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x63c3,	// (0x00012d96) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x63d0,	// (0x00012da3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x63d0,	// (0x00012da3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x63dd,	// (0x00012db0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x63dd,	// (0x00012db0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x63ea,	// (0x00012dbd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x63ea,	// (0x00012dbd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6405,	// (0x00012dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6405,	// (0x00012dd8) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6420,	// (0x00012df3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6420,	// (0x00012df3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x643b,	// (0x00012e0e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x643b,	// (0x00012e0e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6456,	// (0x00012e29) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6456,	// (0x00012e29) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb99,	// (0x0001c56c) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb99,	// (0x0001c56c) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc530,	// (0x00018f03) cell_vkb_candidate_pane_cp1_ParamLimits

0xc530,	// (0x00018f03) cell_vkb_candidate_pane_cp1

0xbea9,	// (0x0001887c) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbea9,	// (0x0001887c) fep_vkb_candidate_drop_down_list_pane_g1

0xc556,	// (0x00018f29) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc556,	// (0x00018f29) fep_vkb_candidate_drop_down_list_pane_g2

0xc563,	// (0x00018f36) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc563,	// (0x00018f36) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbaa,	// (0x0001c57d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbaa,	// (0x0001c57d) fep_vkb_candidate_drop_down_list_pane_g

0xc570,	// (0x00018f43) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc570,	// (0x00018f43) fep_vkb_candidate_drop_down_list_scroll_pane

0xc57d,	// (0x00018f50) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc57d,	// (0x00018f50) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc58a,	// (0x00018f5d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc58a,	// (0x00018f5d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc596,	// (0x00018f69) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc596,	// (0x00018f69) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc47c,	// (0x00018e4f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc47c,	// (0x00018e4f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc49d,	// (0x00018e70) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc49d,	// (0x00018e70) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc5a2,	// (0x00018f75) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc5a2,	// (0x00018f75) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc5c3,	// (0x00018f96) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc5c3,	// (0x00018f96) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc5e4,	// (0x00018fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc5e4,	// (0x00018fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb1,	// (0x0001c584) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb1,	// (0x0001c584) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7272,	// (0x00013c45) title_pane_g1_ParamLimits

0x727f,	// (0x00013c52) title_pane_g2_ParamLimits

0xf527,	// (0x0001befa) title_pane_g_ParamLimits

0x8149,	// (0x00014b1c) aid_call2_pane

0x8151,	// (0x00014b24) aid_call_pane

0x8159,	// (0x00014b2c) popup_clock_analogue_window_g1

0x8159,	// (0x00014b2c) popup_clock_analogue_window_g2

0x5140,	// (0x00011b13) popup_clock_analogue_window_g3

0x5149,	// (0x00011b1c) popup_clock_analogue_window_g4

0x35ec,	// (0x0000ffbf) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x0001c09f) popup_clock_analogue_window_g

0x5151,	// (0x00011b24) popup_clock_analogue_window_t1

0x515f,	// (0x00011b32) clock_digital_number_pane_ParamLimits

0x515f,	// (0x00011b32) clock_digital_number_pane

0x516b,	// (0x00011b3e) clock_digital_number_pane_cp02_ParamLimits

0x516b,	// (0x00011b3e) clock_digital_number_pane_cp02

0x5177,	// (0x00011b4a) clock_digital_number_pane_cp03_ParamLimits

0x5177,	// (0x00011b4a) clock_digital_number_pane_cp03

0x5183,	// (0x00011b56) clock_digital_number_pane_cp04_ParamLimits

0x5183,	// (0x00011b56) clock_digital_number_pane_cp04

0x518f,	// (0x00011b62) clock_digital_separator_pane_ParamLimits

0x518f,	// (0x00011b62) clock_digital_separator_pane

0x519b,	// (0x00011b6e) popup_clock_digital_window_t1_ParamLimits

0x519b,	// (0x00011b6e) popup_clock_digital_window_t1

0x35ec,	// (0x0000ffbf) clock_digital_number_pane_g1

0x35ec,	// (0x0000ffbf) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x0001c0aa) clock_digital_number_pane_g

0x35ec,	// (0x0000ffbf) clock_digital_separator_pane_g1

0x35ec,	// (0x0000ffbf) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x0001c0aa) clock_digital_separator_pane_g

0x8b96,	// (0x00015569) aid_fill_nsta_ParamLimits

0x8ce0,	// (0x000156b3) indicator_nsta_pane_ParamLimits

0x8e6f,	// (0x00015842) popup_clock_analogue_window

0x8e6f,	// (0x00015842) popup_clock_digital_window

0xb60e,	// (0x00017fe1) grid_indicator_nsta_pane_ParamLimits

0xb637,	// (0x0001800a) clock_nsta_pane_t2

0x0001,

0xfa77,	// (0x0001c44a) clock_nsta_pane_t

0x5104,	// (0x00011ad7) aid_size_max_handle

0x510e,	// (0x00011ae1) aid_size_min_handle

0x8823,	// (0x000151f6) editor_scroll_pane

0xc5ff,	// (0x00018fd2) ex_editor_pane

0x7c50,	// (0x00014623) scroll_pane_cp13

0x3ef2,	// (0x000108c5) scroll_pane_cp14

0x8188,	// (0x00014b5b) scroll_pane_cp36

0x81b6,	// (0x00014b89) list_single_graphic_hl_pane_cp2_ParamLimits

0x81b6,	// (0x00014b89) list_single_graphic_hl_pane_cp2

0xa837,	// (0x0001720a) list_single_graphic_hl_pane_ParamLimits

0xa837,	// (0x0001720a) list_single_graphic_hl_pane

0xc607,	// (0x00018fda) aid_size_min_hl_cp1

0xc610,	// (0x00018fe3) list_highlight_pane_cp34_ParamLimits

0xc610,	// (0x00018fe3) list_highlight_pane_cp34

0xc621,	// (0x00018ff4) list_single_graphic_hl_pane_g1_ParamLimits

0xc621,	// (0x00018ff4) list_single_graphic_hl_pane_g1

0xc62e,	// (0x00019001) list_single_graphic_hl_pane_g2_ParamLimits

0xc62e,	// (0x00019001) list_single_graphic_hl_pane_g2

0xc62e,	// (0x00019001) list_single_graphic_hl_pane_g3_ParamLimits

0xc62e,	// (0x00019001) list_single_graphic_hl_pane_g3

0x86e5,	// (0x000150b8) list_single_graphic_hl_pane_g4_ParamLimits

0x86e5,	// (0x000150b8) list_single_graphic_hl_pane_g4

0xc63a,	// (0x0001900d) list_single_graphic_hl_pane_g5_ParamLimits

0xc63a,	// (0x0001900d) list_single_graphic_hl_pane_g5

0x0004,

0xfbc2,	// (0x0001c595) list_single_graphic_hl_pane_g_ParamLimits

0xfbc2,	// (0x0001c595) list_single_graphic_hl_pane_g

0xc64e,	// (0x00019021) list_single_graphic_hl_pane_t1_ParamLimits

0xc64e,	// (0x00019021) list_single_graphic_hl_pane_t1

0xc664,	// (0x00019037) aid_size_min_hl_cp2

0xc66d,	// (0x00019040) list_highlight_pane_cp34_cp2_ParamLimits

0xc66d,	// (0x00019040) list_highlight_pane_cp34_cp2

0xc621,	// (0x00018ff4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc621,	// (0x00018ff4) list_single_graphic_hl_pane_g1_cp2

0xc67a,	// (0x0001904d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc67a,	// (0x0001904d) list_single_graphic_hl_pane_g2_cp2

0xc686,	// (0x00019059) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc686,	// (0x00019059) list_single_graphic_hl_pane_g3_cp2

0xc694,	// (0x00019067) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc694,	// (0x00019067) list_single_graphic_hl_pane_g4_cp2

0xc6a0,	// (0x00019073) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc6a0,	// (0x00019073) list_single_graphic_hl_pane_g5_cp2

0x5448,	// (0x00011e1b) control_pane_g4_ParamLimits

0x5448,	// (0x00011e1b) control_pane_g4

0x8b52,	// (0x00015525) bg_popup_sub_pane_cp10_ParamLimits

0xbc38,	// (0x0001860b) list_choice_list_pane_ParamLimits

0xbc47,	// (0x0001861a) scroll_pane_cp23

0x3a44,	// (0x00010417) bg_popup_preview_window_pane_cp02_ParamLimits

0xc276,	// (0x00018c49) list_preview_fixed_pane_ParamLimits

0xc28c,	// (0x00018c5f) list_preview_fixed_pane_cp_ParamLimits

0xc28c,	// (0x00018c5f) list_preview_fixed_pane_cp

0xc298,	// (0x00018c6b) popup_preview_fixed_window_g1_ParamLimits

0xc298,	// (0x00018c6b) popup_preview_fixed_window_g1

0xc2a4,	// (0x00018c77) popup_preview_fixed_window_g2_ParamLimits

0xc2a4,	// (0x00018c77) popup_preview_fixed_window_g2

0x0002,

0xfb4a,	// (0x0001c51d) popup_preview_fixed_window_g_ParamLimits

0xfb4a,	// (0x0001c51d) popup_preview_fixed_window_g

0x506e,	// (0x00011a41) aid_navi_side_left_pane_ParamLimits

0x5083,	// (0x00011a56) aid_navi_side_right_pane_ParamLimits

0x509b,	// (0x00011a6e) navi_icon_pane_stacon_ParamLimits

0x50af,	// (0x00011a82) navi_navi_pane_stacon_ParamLimits

0x509b,	// (0x00011a6e) navi_text_pane_stacon_ParamLimits

0x4c73,	// (0x00011646) main_text_info_pane

0xc6ca,	// (0x0001909d) listscroll_text_info_pane

0xc6d2,	// (0x000190a5) list_text_info_pane_ParamLimits

0xc6d2,	// (0x000190a5) list_text_info_pane

0xc6e1,	// (0x000190b4) scroll_pane_cp24_ParamLimits

0xc6e1,	// (0x000190b4) scroll_pane_cp24

0xc6ff,	// (0x000190d2) list_text_info_pane_t1_ParamLimits

0xc6ff,	// (0x000190d2) list_text_info_pane_t1

0x55b6,	// (0x00011f89) popup_fast_swap2_window_ParamLimits

0x55b6,	// (0x00011f89) popup_fast_swap2_window

0xc724,	// (0x000190f7) aid_size_cell_fast2

0x35e2,	// (0x0000ffb5) bg_popup_window_pane_cp17

0x95dd,	// (0x00015fb0) heading_pane_cp2

0xc72e,	// (0x00019101) listscroll_fast2_pane

0xc736,	// (0x00019109) grid_fast2_pane

0xc740,	// (0x00019113) listscroll_fast2_pane_g1

0xc74a,	// (0x0001911d) listscroll_fast2_pane_g2

0x0001,

0xfbcd,	// (0x0001c5a0) listscroll_fast2_pane_g

0x7c50,	// (0x00014623) scroll_pane_cp26

0xc754,	// (0x00019127) cell_fast2_pane_ParamLimits

0xc754,	// (0x00019127) cell_fast2_pane

0xc76b,	// (0x0001913e) cell_fast2_pane_g1

0xc774,	// (0x00019147) cell_fast2_pane_g2

0xc77d,	// (0x00019150) cell_fast2_pane_g3

0x0002,

0xfbd2,	// (0x0001c5a5) cell_fast2_pane_g

0x3cb9,	// (0x0001068c) grid_highlight_pane_cp9

0x5578,	// (0x00011f4b) main_eswt_pane_ParamLimits

0x5578,	// (0x00011f4b) main_eswt_pane

0xc6f6,	// (0x000190c9) list_single_text_info_pane

0xc785,	// (0x00019158) eswt_ctrl_button_pane

0xc785,	// (0x00019158) eswt_ctrl_canvas_pane

0xc78d,	// (0x00019160) eswt_ctrl_combo_pane

0xc785,	// (0x00019158) eswt_ctrl_default_pane

0xc785,	// (0x00019158) eswt_ctrl_label_pane

0xc795,	// (0x00019168) eswt_ctrl_wait_pane

0xc79d,	// (0x00019170) eswt_shell_pane

0x35e2,	// (0x0000ffb5) listscroll_eswt_app_pane

0xc7bd,	// (0x00019190) popup_eswt_tasktip_window_ParamLimits

0xc7bd,	// (0x00019190) popup_eswt_tasktip_window

0x91ec,	// (0x00015bbf) bg_popup_window_pane_cp18

0xc7ce,	// (0x000191a1) eswt_control_pane_g1_ParamLimits

0xc7ce,	// (0x000191a1) eswt_control_pane_g1

0xc7db,	// (0x000191ae) eswt_control_pane_g2_ParamLimits

0xc7db,	// (0x000191ae) eswt_control_pane_g2

0xc7e8,	// (0x000191bb) eswt_control_pane_g3_ParamLimits

0xc7e8,	// (0x000191bb) eswt_control_pane_g3

0xc7f5,	// (0x000191c8) eswt_control_pane_g4_ParamLimits

0xc7f5,	// (0x000191c8) eswt_control_pane_g4

0x0003,

0xfbd9,	// (0x0001c5ac) eswt_control_pane_g_ParamLimits

0xfbd9,	// (0x0001c5ac) eswt_control_pane_g

0x3fe6,	// (0x000109b9) bg_button_pane_ParamLimits

0x3fe6,	// (0x000109b9) bg_button_pane

0x3cce,	// (0x000106a1) common_borders_pane_copy2_ParamLimits

0x3cce,	// (0x000106a1) common_borders_pane_copy2

0xc802,	// (0x000191d5) control_button_pane_g1_ParamLimits

0xc802,	// (0x000191d5) control_button_pane_g1

0xc80e,	// (0x000191e1) control_button_pane_g2_ParamLimits

0xc80e,	// (0x000191e1) control_button_pane_g2

0xc81a,	// (0x000191ed) control_button_pane_g3_ParamLimits

0xc81a,	// (0x000191ed) control_button_pane_g3

0x0002,

0xfbe2,	// (0x0001c5b5) control_button_pane_g_ParamLimits

0xfbe2,	// (0x0001c5b5) control_button_pane_g

0xc82e,	// (0x00019201) control_button_pane_t1

0xc83c,	// (0x0001920f) control_button_pane_t2

0x0001,

0xfbe9,	// (0x0001c5bc) control_button_pane_t

0x90c4,	// (0x00015a97) bg_button_pane_g1

0x90d4,	// (0x00015aa7) bg_button_pane_g2

0x90cc,	// (0x00015a9f) bg_button_pane_g3

0x90e4,	// (0x00015ab7) bg_button_pane_g4

0x90dc,	// (0x00015aaf) bg_button_pane_g5

0x90ec,	// (0x00015abf) bg_button_pane_g6

0x90f4,	// (0x00015ac7) bg_button_pane_g7

0x9104,	// (0x00015ad7) bg_button_pane_g8

0x90fc,	// (0x00015acf) bg_button_pane_g9

0x0008,

0xf83a,	// (0x0001c20d) bg_button_pane_g

0xbbf3,	// (0x000185c6) common_borders_pane_ParamLimits

0xbbf3,	// (0x000185c6) common_borders_pane

0xc7ce,	// (0x000191a1) eswt_control_pane_g1_copy1_ParamLimits

0xc7ce,	// (0x000191a1) eswt_control_pane_g1_copy1

0xc7db,	// (0x000191ae) eswt_control_pane_g2_copy1_ParamLimits

0xc7db,	// (0x000191ae) eswt_control_pane_g2_copy1

0xc7e8,	// (0x000191bb) eswt_control_pane_g3_copy1_ParamLimits

0xc7e8,	// (0x000191bb) eswt_control_pane_g3_copy1

0xc7f5,	// (0x000191c8) eswt_control_pane_g4_copy1_ParamLimits

0xc7f5,	// (0x000191c8) eswt_control_pane_g4_copy1

0xbc2e,	// (0x00018601) bg_eswt_ctrl_canvas_pane_g1

0xbbf3,	// (0x000185c6) common_borders_pane_cp2_ParamLimits

0xbbf3,	// (0x000185c6) common_borders_pane_cp2

0xbbf3,	// (0x000185c6) common_borders_pane_cp3_ParamLimits

0xbbf3,	// (0x000185c6) common_borders_pane_cp3

0xc84a,	// (0x0001921d) separator_horizontal_pane

0xc852,	// (0x00019225) separator_vertical_pane

0xc7ce,	// (0x000191a1) eswt_control_pane_g1_copy2_ParamLimits

0xc7ce,	// (0x000191a1) eswt_control_pane_g1_copy2

0xc7db,	// (0x000191ae) eswt_control_pane_g2_copy2_ParamLimits

0xc7db,	// (0x000191ae) eswt_control_pane_g2_copy2

0xc7e8,	// (0x000191bb) eswt_control_pane_g3_copy2_ParamLimits

0xc7e8,	// (0x000191bb) eswt_control_pane_g3_copy2

0xc7f5,	// (0x000191c8) eswt_control_pane_g4_copy2_ParamLimits

0xc7f5,	// (0x000191c8) eswt_control_pane_g4_copy2

0x35e2,	// (0x0000ffb5) common_borders_pane_cp4

0xc85b,	// (0x0001922e) separator_horizontal_pane_g1

0xc864,	// (0x00019237) separator_horizontal_pane_g2

0xc86d,	// (0x00019240) separator_horizontal_pane_g3

0x0002,

0xfbee,	// (0x0001c5c1) separator_horizontal_pane_g

0xc7ce,	// (0x000191a1) eswt_control_pane_g1_copy3_ParamLimits

0xc7ce,	// (0x000191a1) eswt_control_pane_g1_copy3

0xc7db,	// (0x000191ae) eswt_control_pane_g2_copy3_ParamLimits

0xc7db,	// (0x000191ae) eswt_control_pane_g2_copy3

0xc7e8,	// (0x000191bb) eswt_control_pane_g3_copy3_ParamLimits

0xc7e8,	// (0x000191bb) eswt_control_pane_g3_copy3

0xc7f5,	// (0x000191c8) eswt_control_pane_g4_copy3_ParamLimits

0xc7f5,	// (0x000191c8) eswt_control_pane_g4_copy3

0x35e2,	// (0x0000ffb5) common_borders_pane_cp5

0xc876,	// (0x00019249) separator_vertical_pane_g1

0xc87f,	// (0x00019252) separator_vertical_pane_g2

0xc888,	// (0x0001925b) separator_vertical_pane_g3

0x0002,

0xfbf5,	// (0x0001c5c8) separator_vertical_pane_g

0xc7ce,	// (0x000191a1) eswt_control_pane_g1_copy4_ParamLimits

0xc7ce,	// (0x000191a1) eswt_control_pane_g1_copy4

0xc7db,	// (0x000191ae) eswt_control_pane_g2_copy4_ParamLimits

0xc7db,	// (0x000191ae) eswt_control_pane_g2_copy4

0xc7e8,	// (0x000191bb) eswt_control_pane_g3_copy4_ParamLimits

0xc7e8,	// (0x000191bb) eswt_control_pane_g3_copy4

0xc7f5,	// (0x000191c8) eswt_control_pane_g4_copy4_ParamLimits

0xc7f5,	// (0x000191c8) eswt_control_pane_g4_copy4

0xc891,	// (0x00019264) eswt_ctrl_combo_button_pane

0xc899,	// (0x0001926c) eswt_ctrl_input_pane

0xc8a1,	// (0x00019274) popup_choice_list_window_cp70

0xc8a9,	// (0x0001927c) eswt_ctrl_input_pane_t1

0x35e2,	// (0x0000ffb5) input_focus_pane_cp70

0xbbf3,	// (0x000185c6) bg_button_pane_cp70_ParamLimits

0xbbf3,	// (0x000185c6) bg_button_pane_cp70

0xc8b7,	// (0x0001928a) eswt_ctrl_combo_button_pane_g1

0xc8bf,	// (0x00019292) wait_bar_pane_cp70

0x91ec,	// (0x00015bbf) bg_popup_window_pane_cp70_ParamLimits

0x91ec,	// (0x00015bbf) bg_popup_window_pane_cp70

0xc8c7,	// (0x0001929a) popup_eswt_tasktip_window_t1

0xc8dd,	// (0x000192b0) wait_bar_pane_cp71_ParamLimits

0xc8dd,	// (0x000192b0) wait_bar_pane_cp71

0xc8e9,	// (0x000192bc) grid_eswt_app_pane

0x7f8d,	// (0x00014960) scroll_pane_cp70

0xc8f2,	// (0x000192c5) cell_eswt_app_pane_ParamLimits

0xc8f2,	// (0x000192c5) cell_eswt_app_pane

0xc924,	// (0x000192f7) cell_eswt_app_pane_g1_ParamLimits

0xc924,	// (0x000192f7) cell_eswt_app_pane_g1

0xc953,	// (0x00019326) cell_eswt_app_pane_g2_ParamLimits

0xc953,	// (0x00019326) cell_eswt_app_pane_g2

0x0001,

0xfbfc,	// (0x0001c5cf) cell_eswt_app_pane_g_ParamLimits

0xfbfc,	// (0x0001c5cf) cell_eswt_app_pane_g

0xc97c,	// (0x0001934f) cell_eswt_app_pane_t1_ParamLimits

0xc97c,	// (0x0001934f) cell_eswt_app_pane_t1

0xc9ae,	// (0x00019381) grid_highlight_pane_cp70_ParamLimits

0xc9ae,	// (0x00019381) grid_highlight_pane_cp70

0x86e5,	// (0x000150b8) set_content_pane_g1

0x8ad1,	// (0x000154a4) status_small_volume_pane

0x6471,	// (0x00012e44) status_small_volume_pane_g1

0x6479,	// (0x00012e4c) volume_small2_pane

0x6482,	// (0x00012e55) volume_small2_pane_g1

0x648b,	// (0x00012e5e) volume_small2_pane_g2

0x6494,	// (0x00012e67) volume_small2_pane_g3

0x649d,	// (0x00012e70) volume_small2_pane_g4

0x64a6,	// (0x00012e79) volume_small2_pane_g5

0x64af,	// (0x00012e82) volume_small2_pane_g6

0x64b8,	// (0x00012e8b) volume_small2_pane_g7

0x64c1,	// (0x00012e94) volume_small2_pane_g8

0x64ca,	// (0x00012e9d) volume_small2_pane_g9

0x64d3,	// (0x00012ea6) volume_small2_pane_g10

0x0009,

0xfc01,	// (0x0001c5d4) volume_small2_pane_g

0xbffd,	// (0x000189d0) fep_vkb_top_text_pane_g1_ParamLimits

0xc018,	// (0x000189eb) fep_vkb_top_text_pane_t1_ParamLimits

0xc2b0,	// (0x00018c83) popup_preview_fixed_window_g3_ParamLimits

0xc2b0,	// (0x00018c83) popup_preview_fixed_window_g3

0x5ac9,	// (0x0001249c) popup_toolbar_trans_pane

0xa58b,	// (0x00016f5e) aid_height_set_list_ParamLimits

0xa59c,	// (0x00016f6f) aid_size_parent_ParamLimits

0x8b52,	// (0x00015525) list_highlight_pane_cp2_ParamLimits

0x86e5,	// (0x000150b8) set_content_pane_g1_ParamLimits

0xa84e,	// (0x00017221) list_single_image_pane_ParamLimits

0xa84e,	// (0x00017221) list_single_image_pane

0xc9ba,	// (0x0001938d) aid_size_cell_image_ParamLimits

0xc9ba,	// (0x0001938d) aid_size_cell_image

0xc9c7,	// (0x0001939a) grid_single_image_pane_ParamLimits

0xc9c7,	// (0x0001939a) grid_single_image_pane

0x400c,	// (0x000109df) list_single_image_pane_g1_ParamLimits

0x400c,	// (0x000109df) list_single_image_pane_g1

0x4018,	// (0x000109eb) list_single_image_pane_g2_ParamLimits

0x4018,	// (0x000109eb) list_single_image_pane_g2

0x0001,

0xfc16,	// (0x0001c5e9) list_single_image_pane_g_ParamLimits

0xfc16,	// (0x0001c5e9) list_single_image_pane_g

0xc9d5,	// (0x000193a8) list_single_image_pane_t1_ParamLimits

0xc9d5,	// (0x000193a8) list_single_image_pane_t1

0xc9eb,	// (0x000193be) cell_image_list_pane_ParamLimits

0xc9eb,	// (0x000193be) cell_image_list_pane

0xca03,	// (0x000193d6) cell_image_list_pane_g1

0xca0c,	// (0x000193df) cell_image_list_pane_g2

0x0001,

0xfc1b,	// (0x0001c5ee) cell_image_list_pane_g

0xca15,	// (0x000193e8) aid_size_cell_tb_trans_pane

0x3fe6,	// (0x000109b9) bg_tb_trans_pane

0xca27,	// (0x000193fa) grid_tb_trans_pane

0x90c4,	// (0x00015a97) bg_tb_trans_pane_g1

0x90d4,	// (0x00015aa7) bg_tb_trans_pane_g2

0x90cc,	// (0x00015a9f) bg_tb_trans_pane_g3

0x90e4,	// (0x00015ab7) bg_tb_trans_pane_g4

0x90dc,	// (0x00015aaf) bg_tb_trans_pane_g5

0x9104,	// (0x00015ad7) bg_tb_trans_pane_g6

0x90fc,	// (0x00015acf) bg_tb_trans_pane_g7

0x90ec,	// (0x00015abf) bg_tb_trans_pane_g8

0x90f4,	// (0x00015ac7) bg_tb_trans_pane_g9

0x0008,

0xfc20,	// (0x0001c5f3) bg_tb_trans_pane_g

0xca3b,	// (0x0001940e) cell_toolbar_trans_pane_ParamLimits

0xca3b,	// (0x0001940e) cell_toolbar_trans_pane

0xbc2e,	// (0x00018601) cell_toolbar_trans_pane_g1

0xb81a,	// (0x000181ed) list_form2_midp_pane_t1

0xb828,	// (0x000181fb) list_form2_midp_pane_t2

0x0001,

0xfabd,	// (0x0001c490) list_form2_midp_pane_t

0xb836,	// (0x00018209) scroll_pane_cp51_ParamLimits

0xba50,	// (0x00018423) form2_midp_wait_pane_g1

0xba59,	// (0x0001842c) form2_midp_wait_pane_g2

0xba62,	// (0x00018435) form2_midp_wait_pane_g3

0x0002,

0xfad2,	// (0x0001c4a5) form2_midp_wait_pane_g

0x386e,	// (0x00010241) list_highlight_pane_cp21_ParamLimits

0xba9b,	// (0x0001846e) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbaaa,	// (0x0001847d) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xa7f0,	// (0x000171c3) list_single_2graphic_im_pane_ParamLimits

0xa7f0,	// (0x000171c3) list_single_2graphic_im_pane

0xca61,	// (0x00019434) list_single_2graphic_im_pane_g1_ParamLimits

0xca61,	// (0x00019434) list_single_2graphic_im_pane_g1

0xca72,	// (0x00019445) list_single_2graphic_im_pane_g2_ParamLimits

0xca72,	// (0x00019445) list_single_2graphic_im_pane_g2

0xca7e,	// (0x00019451) list_single_2graphic_im_pane_g3_ParamLimits

0xca7e,	// (0x00019451) list_single_2graphic_im_pane_g3

0x0003,

0xfc33,	// (0x0001c606) list_single_2graphic_im_pane_g_ParamLimits

0xfc33,	// (0x0001c606) list_single_2graphic_im_pane_g

0xca9e,	// (0x00019471) list_single_2graphic_im_pane_t1_ParamLimits

0xca9e,	// (0x00019471) list_single_2graphic_im_pane_t1

0xc2bc,	// (0x00018c8f) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2bc,	// (0x00018c8f) list_single_graphic_2heading_pane_fp

0xc318,	// (0x00018ceb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc318,	// (0x00018ceb) list_single_graphic_2heading_pane_fp_g1

0xc2d5,	// (0x00018ca8) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc2d5,	// (0x00018ca8) list_single_graphic_2heading_pane_fp_g2

0x3f0f,	// (0x000108e2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3f0f,	// (0x000108e2) list_single_graphic_2heading_pane_fp_g3

0xc2e1,	// (0x00018cb4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc2e1,	// (0x00018cb4) list_single_graphic_2heading_pane_fp_g4

0xc2f5,	// (0x00018cc8) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc2f5,	// (0x00018cc8) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5a,	// (0x0001c52d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5a,	// (0x0001c52d) list_single_graphic_2heading_pane_fp_g

0xcacf,	// (0x000194a2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcacf,	// (0x000194a2) list_single_graphic_2heading_pane_fp_t1

0xc350,	// (0x00018d23) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc350,	// (0x00018d23) list_single_graphic_2heading_pane_fp_t2

0xcae5,	// (0x000194b8) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcae5,	// (0x000194b8) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc3c,	// (0x0001c60f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc3c,	// (0x0001c60f) list_single_graphic_2heading_pane_fp_t

0xbcbf,	// (0x00018692) fep_hwr_write_pane_g5_ParamLimits

0xbcbf,	// (0x00018692) fep_hwr_write_pane_g5

0xbccb,	// (0x0001869e) fep_hwr_write_pane_g6_ParamLimits

0xbccb,	// (0x0001869e) fep_hwr_write_pane_g6

0xc79d,	// (0x00019170) eswt_shell_pane_ParamLimits

0x91ec,	// (0x00015bbf) bg_popup_window_pane_cp18_ParamLimits

0x95dd,	// (0x00015fb0) heading_pane_cp70

0xc8c7,	// (0x0001929a) popup_eswt_tasktip_window_t1_ParamLimits

0x8beb,	// (0x000155be) aid_touch_tab_arrow_left

0x8bf7,	// (0x000155ca) aid_touch_tab_arrow_right

0x7298,	// (0x00013c6b) title_pane_g3_ParamLimits

0x7298,	// (0x00013c6b) title_pane_g3

0x3f3f,	// (0x00010912) set_value_pane_g1

0x5ac9,	// (0x0001249c) popup_toolbar_trans_pane_ParamLimits

0xca15,	// (0x000193e8) aid_size_cell_tb_trans_pane_ParamLimits

0x3fe6,	// (0x000109b9) bg_tb_trans_pane_ParamLimits

0xca27,	// (0x000193fa) grid_tb_trans_pane_ParamLimits

0x3a44,	// (0x00010417) cont_note_pane_ParamLimits

0x3a44,	// (0x00010417) cont_note_pane

0x3cce,	// (0x000106a1) cont_snote2_single_text_pane_ParamLimits

0x3cce,	// (0x000106a1) cont_snote2_single_text_pane

0x3cce,	// (0x000106a1) cont_snote2_single_graphic_pane_ParamLimits

0x3cce,	// (0x000106a1) cont_snote2_single_graphic_pane

0x980d,	// (0x000161e0) cont_note_wait_pane_ParamLimits

0x980d,	// (0x000161e0) cont_note_wait_pane

0x980d,	// (0x000161e0) cont_note_image_pane_ParamLimits

0x980d,	// (0x000161e0) cont_note_image_pane

0xcafb,	// (0x000194ce) popup_note2_window_g1_ParamLimits

0xcafb,	// (0x000194ce) popup_note2_window_g1

0xcb2c,	// (0x000194ff) popup_note2_window_t1_ParamLimits

0xcb2c,	// (0x000194ff) popup_note2_window_t1

0xcb71,	// (0x00019544) popup_note2_window_t2_ParamLimits

0xcb71,	// (0x00019544) popup_note2_window_t2

0xcbb6,	// (0x00019589) popup_note2_window_t3_ParamLimits

0xcbb6,	// (0x00019589) popup_note2_window_t3

0xcbfb,	// (0x000195ce) popup_note2_window_t4_ParamLimits

0xcbfb,	// (0x000195ce) popup_note2_window_t4

0x3ac8,	// (0x0001049b) popup_note2_window_t5_ParamLimits

0x3ac8,	// (0x0001049b) popup_note2_window_t5

0x0004,

0xfc48,	// (0x0001c61b) popup_note2_window_t_ParamLimits

0xfc48,	// (0x0001c61b) popup_note2_window_t

0xcc2a,	// (0x000195fd) popup_note2_image_window_g1_ParamLimits

0xcc2a,	// (0x000195fd) popup_note2_image_window_g1

0xcc36,	// (0x00019609) popup_note2_image_window_g2_ParamLimits

0xcc36,	// (0x00019609) popup_note2_image_window_g2

0x0001,

0xfc53,	// (0x0001c626) popup_note2_image_window_g_ParamLimits

0xfc53,	// (0x0001c626) popup_note2_image_window_g

0xcc48,	// (0x0001961b) popup_note2_image_window_t1_ParamLimits

0xcc48,	// (0x0001961b) popup_note2_image_window_t1

0xcc60,	// (0x00019633) popup_note2_image_window_t2_ParamLimits

0xcc60,	// (0x00019633) popup_note2_image_window_t2

0xcc78,	// (0x0001964b) popup_note2_image_window_t3_ParamLimits

0xcc78,	// (0x0001964b) popup_note2_image_window_t3

0x0002,

0xfc58,	// (0x0001c62b) popup_note2_image_window_t_ParamLimits

0xfc58,	// (0x0001c62b) popup_note2_image_window_t

0x981b,	// (0x000161ee) popup_note2_wait_window_g1_ParamLimits

0x981b,	// (0x000161ee) popup_note2_wait_window_g1

0xcc94,	// (0x00019667) popup_note2_wait_window_g2_ParamLimits

0xcc94,	// (0x00019667) popup_note2_wait_window_g2

0x9833,	// (0x00016206) popup_note2_wait_window_g3_ParamLimits

0x9833,	// (0x00016206) popup_note2_wait_window_g3

0x0002,

0xfc5f,	// (0x0001c632) popup_note2_wait_window_g_ParamLimits

0xfc5f,	// (0x0001c632) popup_note2_wait_window_g

0xcca0,	// (0x00019673) popup_note2_wait_window_t1_ParamLimits

0xcca0,	// (0x00019673) popup_note2_wait_window_t1

0xccbe,	// (0x00019691) popup_note2_wait_window_t2_ParamLimits

0xccbe,	// (0x00019691) popup_note2_wait_window_t2

0xccdc,	// (0x000196af) popup_note2_wait_window_t3_ParamLimits

0xccdc,	// (0x000196af) popup_note2_wait_window_t3

0xccee,	// (0x000196c1) popup_note2_wait_window_t4_ParamLimits

0xccee,	// (0x000196c1) popup_note2_wait_window_t4

0x0003,

0xfc66,	// (0x0001c639) popup_note2_wait_window_t_ParamLimits

0xfc66,	// (0x0001c639) popup_note2_wait_window_t

0xcd00,	// (0x000196d3) wait_bar2_pane_ParamLimits

0xcd00,	// (0x000196d3) wait_bar2_pane

0xcd18,	// (0x000196eb) popup_snote2_single_text_window_g1_ParamLimits

0xcd18,	// (0x000196eb) popup_snote2_single_text_window_g1

0xcd40,	// (0x00019713) popup_snote2_single_text_window_t1_ParamLimits

0xcd40,	// (0x00019713) popup_snote2_single_text_window_t1

0xcd8c,	// (0x0001975f) popup_snote2_single_text_window_t2_ParamLimits

0xcd8c,	// (0x0001975f) popup_snote2_single_text_window_t2

0xcdd8,	// (0x000197ab) popup_snote2_single_text_window_t3_ParamLimits

0xcdd8,	// (0x000197ab) popup_snote2_single_text_window_t3

0xce19,	// (0x000197ec) popup_snote2_single_text_window_t4_ParamLimits

0xce19,	// (0x000197ec) popup_snote2_single_text_window_t4

0xce4f,	// (0x00019822) popup_snote2_single_text_window_t5_ParamLimits

0xce4f,	// (0x00019822) popup_snote2_single_text_window_t5

0x0004,

0xfc6f,	// (0x0001c642) popup_snote2_single_text_window_t_ParamLimits

0xfc6f,	// (0x0001c642) popup_snote2_single_text_window_t

0xce7a,	// (0x0001984d) popup_snote2_single_graphic_window_g1_ParamLimits

0xce7a,	// (0x0001984d) popup_snote2_single_graphic_window_g1

0xcea2,	// (0x00019875) popup_snote2_single_graphic_window_g2_ParamLimits

0xcea2,	// (0x00019875) popup_snote2_single_graphic_window_g2

0x0001,

0xfc7a,	// (0x0001c64d) popup_snote2_single_graphic_window_g_ParamLimits

0xfc7a,	// (0x0001c64d) popup_snote2_single_graphic_window_g

0xceca,	// (0x0001989d) popup_snote2_single_graphic_window_t1_ParamLimits

0xceca,	// (0x0001989d) popup_snote2_single_graphic_window_t1

0xcf16,	// (0x000198e9) popup_snote2_single_graphic_window_t2_ParamLimits

0xcf16,	// (0x000198e9) popup_snote2_single_graphic_window_t2

0xcdd8,	// (0x000197ab) popup_snote2_single_graphic_window_t3_ParamLimits

0xcdd8,	// (0x000197ab) popup_snote2_single_graphic_window_t3

0xce19,	// (0x000197ec) popup_snote2_single_graphic_window_t4_ParamLimits

0xce19,	// (0x000197ec) popup_snote2_single_graphic_window_t4

0xce4f,	// (0x00019822) popup_snote2_single_graphic_window_t5_ParamLimits

0xce4f,	// (0x00019822) popup_snote2_single_graphic_window_t5

0x0004,

0xfc7f,	// (0x0001c652) popup_snote2_single_graphic_window_t_ParamLimits

0xfc7f,	// (0x0001c652) popup_snote2_single_graphic_window_t

0xb6e6,	// (0x000180b9) clock_nsta_pane_cp2_t1

0xb6e6,	// (0x000180b9) clock_nsta_pane_cp2_t2

0x0001,

0xfa93,	// (0x0001c466) clock_nsta_pane_cp2_t

0x4000,	// (0x000109d3) form_field_data_wide_pane_g1_ParamLimits

0x400c,	// (0x000109df) form_field_data_wide_pane_g2_ParamLimits

0x400c,	// (0x000109df) form_field_data_wide_pane_g2

0x4018,	// (0x000109eb) form_field_data_wide_pane_g3_ParamLimits

0x4018,	// (0x000109eb) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x0001c022) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x0001c022) form_field_data_wide_pane_g

0xb5c1,	// (0x00017f94) grid_touch_3_pane_ParamLimits

0xb5c1,	// (0x00017f94) grid_touch_3_pane

0xcf62,	// (0x00019935) cell_touch_3_pane_ParamLimits

0xcf62,	// (0x00019935) cell_touch_3_pane

0xbc2e,	// (0x00018601) cell_touch_3_pane_g1

0xbc2e,	// (0x00018601) cell_touch_3_pane_g2

0x0001,

0xfb18,	// (0x0001c4eb) cell_touch_3_pane_g

0x3b20,	// (0x000104f3) cont_query_data_pane

0x3b28,	// (0x000104fb) cont_query_data_pane_cp1

0xcf95,	// (0x00019968) button_value_adjust_pane_cp7

0xcf9d,	// (0x00019970) query_popup_pane_cp3

0x825e,	// (0x00014c31) bg_popup_sub_pane_cp22_ParamLimits

0x51ba,	// (0x00011b8d) navi_navi_volume_pane_cp2

0x51d5,	// (0x00011ba8) popup_side_volume_key_window_g2

0x51e4,	// (0x00011bb7) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x0001c0b8) popup_side_volume_key_window_g

0x5201,	// (0x00011bd4) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x0001c0bf) popup_side_volume_key_window_t

0x85ab,	// (0x00014f7e) popup_side_volume_key_window_ParamLimits

0x7725,	// (0x000140f8) list_double_graphic_pane_g4_ParamLimits

0x7725,	// (0x000140f8) list_double_graphic_pane_g4

0xa81f,	// (0x000171f2) list_single_2heading_msg_pane_ParamLimits

0xa81f,	// (0x000171f2) list_single_2heading_msg_pane

0xcfce,	// (0x000199a1) list_single_2heading_msg_pane_g1_ParamLimits

0xcfce,	// (0x000199a1) list_single_2heading_msg_pane_g1

0xcfda,	// (0x000199ad) list_single_2heading_msg_pane_g2_ParamLimits

0xcfda,	// (0x000199ad) list_single_2heading_msg_pane_g2

0xcfe6,	// (0x000199b9) list_single_2heading_msg_pane_g3_ParamLimits

0xcfe6,	// (0x000199b9) list_single_2heading_msg_pane_g3

0xcff2,	// (0x000199c5) list_single_2heading_msg_pane_g4_ParamLimits

0xcff2,	// (0x000199c5) list_single_2heading_msg_pane_g4

0x0003,

0xfc8a,	// (0x0001c65d) list_single_2heading_msg_pane_g_ParamLimits

0xfc8a,	// (0x0001c65d) list_single_2heading_msg_pane_g

0xd00a,	// (0x000199dd) list_single_2heading_msg_pane_t1_ParamLimits

0xd00a,	// (0x000199dd) list_single_2heading_msg_pane_t1

0xd032,	// (0x00019a05) list_single_2heading_msg_pane_t2_ParamLimits

0xd032,	// (0x00019a05) list_single_2heading_msg_pane_t2

0xd061,	// (0x00019a34) list_single_2heading_msg_pane_t3_ParamLimits

0xd061,	// (0x00019a34) list_single_2heading_msg_pane_t3

0xd09a,	// (0x00019a6d) list_single_2heading_msg_pane_t4_ParamLimits

0xd09a,	// (0x00019a6d) list_single_2heading_msg_pane_t4

0x0003,

0xfc93,	// (0x0001c666) list_single_2heading_msg_pane_t_ParamLimits

0xfc93,	// (0x0001c666) list_single_2heading_msg_pane_t

0x3812,	// (0x000101e5) title_pane_g4_ParamLimits

0x3812,	// (0x000101e5) title_pane_g4

0x4fbf,	// (0x00011992) title_pane_stacon_g3_ParamLimits

0x4fbf,	// (0x00011992) title_pane_stacon_g3

0xca92,	// (0x00019465) list_single_2graphic_im_pane_g4_ParamLimits

0xca92,	// (0x00019465) list_single_2graphic_im_pane_g4

0xa27d,	// (0x00016c50) popup_side_volume_key_window_cp

0xab92,	// (0x00017565) main_idle_act2_pane_t1

0x5c39,	// (0x0001260c) toolbar_button_pane_g10

0x7562,	// (0x00013f35) popup_toolbar_window_cp1

0xb6d7,	// (0x000180aa) clock_nsta_pane_cp_t1

0xb6d7,	// (0x000180aa) clock_nsta_pane_cp_t2

0x0001,

0xfa8e,	// (0x0001c461) clock_nsta_pane_cp_t

0x51ba,	// (0x00011b8d) navi_navi_volume_pane_cp2_ParamLimits

0x51c9,	// (0x00011b9c) popup_side_volume_key_window_g1_ParamLimits

0x51d5,	// (0x00011ba8) popup_side_volume_key_window_g2_ParamLimits

0x51e4,	// (0x00011bb7) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x0001c0b8) popup_side_volume_key_window_g_ParamLimits

0x60c2,	// (0x00012a95) fep_hwr_aid_pane

0x616b,	// (0x00012b3e) bg_fep_hwr_top_pane_g4_ParamLimits

0xbc8f,	// (0x00018662) fep_hwr_top_pane_g1_ParamLimits

0xbca1,	// (0x00018674) fep_hwr_top_pane_g2_ParamLimits

0x618b,	// (0x00012b5e) fep_hwr_top_pane_g3_ParamLimits

0xfae3,	// (0x0001c4b6) fep_hwr_top_pane_g_ParamLimits

0x61a0,	// (0x00012b73) fep_hwr_top_text_pane_ParamLimits

0xa032,	// (0x00016a05) aid_touch_tab_arrow_arrow_2

0xa03b,	// (0x00016a0e) aid_touch_tab_arrow_left_2

0x60d6,	// (0x00012aa9) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x610d,	// (0x00012ae0) fep_hwr_prediction_pane

0xbdf7,	// (0x000187ca) fep_vkb_prediction_pane

0xbefd,	// (0x000188d0) fep_vkb_side_pane_g3_ParamLimits

0xbefd,	// (0x000188d0) fep_vkb_side_pane_g3

0x632f,	// (0x00012d02) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x63a0,	// (0x00012d73) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x63ad,	// (0x00012d80) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb92,	// (0x0001c565) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x64dc,	// (0x00012eaf) fep_hwr_prediction_pane_g1

0x64e6,	// (0x00012eb9) fep_hwr_prediction_pane_g2

0x64ee,	// (0x00012ec1) fep_hwr_prediction_pane_g3

0x64f6,	// (0x00012ec9) fep_hwr_prediction_pane_g4

0x0003,

0xfc9c,	// (0x0001c66f) fep_hwr_prediction_pane_g

0xd0bf,	// (0x00019a92) fep_vkb_prediction_pane_g1

0xd0c9,	// (0x00019a9c) fep_vkb_prediction_pane_g2

0xd0d1,	// (0x00019aa4) fep_vkb_prediction_pane_g3

0xd0d9,	// (0x00019aac) fep_vkb_prediction_pane_g4

0x0003,

0xfca5,	// (0x0001c678) fep_vkb_prediction_pane_g

0x5f42,	// (0x00012915) slider_set_pane_g3

0x5f56,	// (0x00012929) slider_set_pane_g4

0x5f6e,	// (0x00012941) slider_set_pane_g5

0x5f42,	// (0x00012915) slider_set_pane_g6

0x5f84,	// (0x00012957) slider_set_pane_g7

0xa71b,	// (0x000170ee) slider_form_pane_g3

0xa724,	// (0x000170f7) slider_form_pane_g4

0xa72c,	// (0x000170ff) slider_form_pane_g5

0xa71b,	// (0x000170ee) slider_form_pane_g6

0xa734,	// (0x00017107) slider_form_pane_g7

0xaeae,	// (0x00017881) slider_set_pane_vc_g3

0xaeb7,	// (0x0001788a) slider_set_pane_vc_g4

0xaec0,	// (0x00017893) slider_set_pane_vc_g5

0xaeae,	// (0x00017881) slider_set_pane_vc_g6

0xaec9,	// (0x0001789c) slider_set_pane_vc_g7

0xb386,	// (0x00017d59) slider_form_pane_vc_g1

0xb38f,	// (0x00017d62) slider_form_pane_vc_g2

0xb398,	// (0x00017d6b) slider_form_pane_vc_g3

0xb386,	// (0x00017d59) slider_form_pane_vc_g4

0xb3a1,	// (0x00017d74) slider_form_pane_vc_g5

0x0004,

0xfa60,	// (0x0001c433) slider_form_pane_vc_g

0x4c73,	// (0x00011646) main_idle_act3_pane

0xd0e1,	// (0x00019ab4) ai3_links_pane

0xd0ea,	// (0x00019abd) popup_ai3_data_window_ParamLimits

0xd0ea,	// (0x00019abd) popup_ai3_data_window

0x35e2,	// (0x0000ffb5) grid_ai3_links_pane

0xd108,	// (0x00019adb) cell_ai3_links_pane_ParamLimits

0xd108,	// (0x00019adb) cell_ai3_links_pane

0xd122,	// (0x00019af5) bg_popup_sub_pane_cp11

0xd12f,	// (0x00019b02) cell_ai3_links_pane_g1

0x35e2,	// (0x0000ffb5) bg_popup_sub_pane_cp12

0xd154,	// (0x00019b27) heading_ai3_data_pane

0xd15c,	// (0x00019b2f) list_ai3_gene_pane

0xd168,	// (0x00019b3b) popup_ai3_data_window_g1

0xd170,	// (0x00019b43) heading_ai3_data_pane_g1

0xd178,	// (0x00019b4b) heading_ai3_data_pane_t1

0xd186,	// (0x00019b59) list_double_ai3_gene_pane_ParamLimits

0xd186,	// (0x00019b59) list_double_ai3_gene_pane

0xd193,	// (0x00019b66) list_single_ai3_gene_pane_ParamLimits

0xd193,	// (0x00019b66) list_single_ai3_gene_pane

0xbbf3,	// (0x000185c6) list_highlight_pane_cp7_ParamLimits

0xbbf3,	// (0x000185c6) list_highlight_pane_cp7

0xd1a0,	// (0x00019b73) list_single_a13_gene_pane_t1_ParamLimits

0xd1a0,	// (0x00019b73) list_single_a13_gene_pane_t1

0xd1b7,	// (0x00019b8a) list_single_ai3_gene_pane_g1

0xd1c0,	// (0x00019b93) list_single_ai3_gene_pane_g2

0x0001,

0xfcae,	// (0x0001c681) list_single_ai3_gene_pane_g

0xd1c8,	// (0x00019b9b) list_double_ai3_gene_pane_g1_ParamLimits

0xd1c8,	// (0x00019b9b) list_double_ai3_gene_pane_g1

0xd1d4,	// (0x00019ba7) list_double_ai3_gene_pane_t1_ParamLimits

0xd1d4,	// (0x00019ba7) list_double_ai3_gene_pane_t1

0xd1f0,	// (0x00019bc3) list_double_ai3_gene_pane_t2_ParamLimits

0xd1f0,	// (0x00019bc3) list_double_ai3_gene_pane_t2

0xd205,	// (0x00019bd8) list_double_ai3_gene_pane_t3_ParamLimits

0xd205,	// (0x00019bd8) list_double_ai3_gene_pane_t3

0x0002,

0xfcb3,	// (0x0001c686) list_double_ai3_gene_pane_t_ParamLimits

0xfcb3,	// (0x0001c686) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcfae,	// (0x00019981) aid_size_min_col_2

0xcfb8,	// (0x0001998b) aid_size_min_msg_ParamLimits

0xcfb8,	// (0x0001998b) aid_size_min_msg

0xc009,	// (0x000189dc) fep_vkb_top_text_pane_g2_ParamLimits

0xc009,	// (0x000189dc) fep_vkb_top_text_pane_g2

0x0001,

0xfb13,	// (0x0001c4e6) fep_vkb_top_text_pane_g_ParamLimits

0xfb13,	// (0x0001c4e6) fep_vkb_top_text_pane_g

0x4c73,	// (0x00011646) main_hc_apps_shell_pane

0xd222,	// (0x00019bf5) grid_hc_apps_pane_ParamLimits

0xd222,	// (0x00019bf5) grid_hc_apps_pane

0xd234,	// (0x00019c07) list_hc_apps_pane

0xd23c,	// (0x00019c0f) scroll_pane_cp37_ParamLimits

0xd23c,	// (0x00019c0f) scroll_pane_cp37

0xd248,	// (0x00019c1b) cell_hc_apps_pane_ParamLimits

0xd248,	// (0x00019c1b) cell_hc_apps_pane

0xd2fc,	// (0x00019ccf) cell_hc_apps_pane_g1_ParamLimits

0xd2fc,	// (0x00019ccf) cell_hc_apps_pane_g1

0xd328,	// (0x00019cfb) cell_hc_apps_pane_g2_ParamLimits

0xd328,	// (0x00019cfb) cell_hc_apps_pane_g2

0xd344,	// (0x00019d17) cell_hc_apps_pane_g3_ParamLimits

0xd344,	// (0x00019d17) cell_hc_apps_pane_g3

0x0002,

0xfcba,	// (0x0001c68d) cell_hc_apps_pane_g_ParamLimits

0xfcba,	// (0x0001c68d) cell_hc_apps_pane_g

0xd366,	// (0x00019d39) cell_hc_apps_pane_t1_ParamLimits

0xd366,	// (0x00019d39) cell_hc_apps_pane_t1

0x3a44,	// (0x00010417) grid_highlight_pane_cp10_ParamLimits

0x3a44,	// (0x00010417) grid_highlight_pane_cp10

0xd3a6,	// (0x00019d79) list_single_hc_apps_pane_ParamLimits

0xd3a6,	// (0x00019d79) list_single_hc_apps_pane

0xd3e5,	// (0x00019db8) list_single_hc_apps_pane_g1

0xd3fe,	// (0x00019dd1) list_single_hc_apps_pane_g2

0x0001,

0xfcc1,	// (0x0001c694) list_single_hc_apps_pane_g

0xd417,	// (0x00019dea) list_single_hc_apps_pane_g2_copy1

0xd433,	// (0x00019e06) list_single_hc_apps_pane_t1

0x386e,	// (0x00010241) bg_set_opt_pane_cp_ParamLimits

0x4ee6,	// (0x000118b9) setting_slider_pane_t1_ParamLimits

0x4eff,	// (0x000118d2) setting_slider_pane_t2_ParamLimits

0x4f19,	// (0x000118ec) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x0001bf0a) setting_slider_pane_t_ParamLimits

0x4f31,	// (0x00011904) slider_set_pane_ParamLimits

0x545c,	// (0x00011e2f) control_pane_g5_ParamLimits

0x545c,	// (0x00011e2f) control_pane_g5

0xa54e,	// (0x00016f21) slider_set_pane_g1_ParamLimits

0x5f36,	// (0x00012909) slider_set_pane_g2_ParamLimits

0x5f42,	// (0x00012915) slider_set_pane_g3_ParamLimits

0x5f56,	// (0x00012929) slider_set_pane_g4_ParamLimits

0x5f6e,	// (0x00012941) slider_set_pane_g5_ParamLimits

0x5f42,	// (0x00012915) slider_set_pane_g6_ParamLimits

0x5f84,	// (0x00012957) slider_set_pane_g7_ParamLimits

0xf938,	// (0x0001c30b) slider_set_pane_g_ParamLimits

0x8690,	// (0x00015063) navi_icon_text_pane_ParamLimits

0x8bac,	// (0x0001557f) aid_fill_nsta_2_ParamLimits

0x8beb,	// (0x000155be) aid_touch_tab_arrow_left_ParamLimits

0x8bf7,	// (0x000155ca) aid_touch_tab_arrow_right_ParamLimits

0x8c63,	// (0x00015636) clock_nsta_pane_ParamLimits

0xa014,	// (0x000169e7) navi_icon_pane_g1_ParamLimits

0xa020,	// (0x000169f3) navi_text_pane_t1_ParamLimits

0xb7f4,	// (0x000181c7) navi_icon_text_pane_g1_ParamLimits

0xb800,	// (0x000181d3) navi_icon_text_pane_t1_ParamLimits

0xd3e5,	// (0x00019db8) list_single_hc_apps_pane_g1_ParamLimits

0xd3fe,	// (0x00019dd1) list_single_hc_apps_pane_g2_ParamLimits

0xfcc1,	// (0x0001c694) list_single_hc_apps_pane_g_ParamLimits

0xd417,	// (0x00019dea) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd433,	// (0x00019e06) list_single_hc_apps_pane_t1_ParamLimits

0x4de8,	// (0x000117bb) popup_toolbar2_fixed_window_ParamLimits

0x4de8,	// (0x000117bb) popup_toolbar2_fixed_window

0x5abf,	// (0x00012492) popup_toolbar2_float_window

0x35e2,	// (0x0000ffb5) bg_popup_sub_pane_cp27

0xd461,	// (0x00019e34) grid_toolbar2_float_pane

0x35e2,	// (0x0000ffb5) bg_popup_sub_pane_cp26

0xd461,	// (0x00019e34) grid_toolbar2_fixed_pane

0xd469,	// (0x00019e3c) cell_toolbar2_fixed_pane_ParamLimits

0xd469,	// (0x00019e3c) cell_toolbar2_fixed_pane

0xd479,	// (0x00019e4c) cell_toolbar2_fixed_pane_g1

0xd482,	// (0x00019e55) toolbar2_fixed_button_pane

0x90c4,	// (0x00015a97) toolbar2_fixed_button_pane_g1

0x90d4,	// (0x00015aa7) toolbar2_fixed_button_pane_g2

0x90cc,	// (0x00015a9f) toolbar2_fixed_button_pane_g3

0x90e4,	// (0x00015ab7) toolbar2_fixed_button_pane_g4

0x90dc,	// (0x00015aaf) toolbar2_fixed_button_pane_g5

0x90ec,	// (0x00015abf) toolbar2_fixed_button_pane_g6

0x90f4,	// (0x00015ac7) toolbar2_fixed_button_pane_g7

0x9104,	// (0x00015ad7) toolbar2_fixed_button_pane_g8

0x90fc,	// (0x00015acf) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x0001c20d) toolbar2_fixed_button_pane_g

0xd48a,	// (0x00019e5d) cell_toolbar2_float_pane_ParamLimits

0xd48a,	// (0x00019e5d) cell_toolbar2_float_pane

0xd49b,	// (0x00019e6e) cell_toolbar2_float_pane_g1

0xd482,	// (0x00019e55) toolbar2_fixed_button_pane_cp

0xbd65,	// (0x00018738) fep_vkb_accented_list_pane_ParamLimits

0xbd65,	// (0x00018738) fep_vkb_accented_list_pane

0x630f,	// (0x00012ce2) bg_popup_fep_shadow_pane_g9

0x8823,	// (0x000151f6) bg_popup_fep_shadow_pane_cp3

0x7c37,	// (0x0001460a) list_accented_list_pane

0xd4a4,	// (0x00019e77) list_single_accented_list_pane_ParamLimits

0xd4a4,	// (0x00019e77) list_single_accented_list_pane

0x8823,	// (0x000151f6) list_highlight_pane_cp10

0xd4b5,	// (0x00019e88) list_single_accented_list_pane_t1

0x5a05,	// (0x000123d8) popup_slider_window_ParamLimits

0x5a05,	// (0x000123d8) popup_slider_window

0xcfa5,	// (0x00019978) aid_indentation_list_msg

0xd585,	// (0x00019f58) bg_popup_window_pane_cp19

0xd5f1,	// (0x00019fc4) popup_slider_window_g1

0xd60d,	// (0x00019fe0) popup_slider_window_g2

0xd629,	// (0x00019ffc) popup_slider_window_g3

0x0005,

0xfcc6,	// (0x0001c699) popup_slider_window_g

0xd68f,	// (0x0001a062) popup_slider_window_t1

0xd703,	// (0x0001a0d6) small_volume_slider_vertical_pane

0xbc2e,	// (0x00018601) small_volume_slider_vertical_pane_g1

0xbc2e,	// (0x00018601) small_volume_slider_vertical_pane_g2

0xd71f,	// (0x0001a0f2) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd8,	// (0x0001c6ab) small_volume_slider_vertical_pane_g

0x4b90,	// (0x00011563) area_side_right_pane_ParamLimits

0x4b90,	// (0x00011563) area_side_right_pane

0x64fe,	// (0x00012ed1) aid_size_side_button_ParamLimits

0x64fe,	// (0x00012ed1) aid_size_side_button

0x6512,	// (0x00012ee5) grid_sctrl_middle_pane_ParamLimits

0x6512,	// (0x00012ee5) grid_sctrl_middle_pane

0x6531,	// (0x00012f04) sctrl_sk_bottom_pane

0x6542,	// (0x00012f15) sctrl_sk_top_pane

0x6554,	// (0x00012f27) aid_touch_sctrl_top

0x6561,	// (0x00012f34) bg_sctrl_sk_pane_ParamLimits

0x6561,	// (0x00012f34) bg_sctrl_sk_pane

0x656f,	// (0x00012f42) sctrl_sk_top_pane_g1

0x657c,	// (0x00012f4f) sctrl_sk_top_pane_t1

0x6554,	// (0x00012f27) aid_touch_sctrl_bottom

0x6561,	// (0x00012f34) bg_sctrl_sk_pane_cp_ParamLimits

0x6561,	// (0x00012f34) bg_sctrl_sk_pane_cp

0x6597,	// (0x00012f6a) sctrl_sk_bottom_pane_g1

0x657c,	// (0x00012f4f) sctrl_sk_bottom_pane_t1

0x65a0,	// (0x00012f73) cell_sctrl_middle_pane_ParamLimits

0x65a0,	// (0x00012f73) cell_sctrl_middle_pane

0x65bd,	// (0x00012f90) aid_touch_sctrl_middle_ParamLimits

0x65bd,	// (0x00012f90) aid_touch_sctrl_middle

0x65cf,	// (0x00012fa2) bg_sctrl_middle_pane_ParamLimits

0x65cf,	// (0x00012fa2) bg_sctrl_middle_pane

0x632f,	// (0x00012d02) cell_sctrl_middle_pane_g1_ParamLimits

0x632f,	// (0x00012d02) cell_sctrl_middle_pane_g1

0x65dd,	// (0x00012fb0) cell_sctrl_middle_pane_g2_ParamLimits

0x65dd,	// (0x00012fb0) cell_sctrl_middle_pane_g2

0x0001,

0xfce4,	// (0x0001c6b7) cell_sctrl_middle_pane_g_ParamLimits

0xfce4,	// (0x0001c6b7) cell_sctrl_middle_pane_g

0x90c4,	// (0x00015a97) bg_sctrl_middle_pane_g1

0x90cc,	// (0x00015a9f) bg_sctrl_middle_pane_g2

0x90d4,	// (0x00015aa7) bg_sctrl_middle_pane_g3

0x90dc,	// (0x00015aaf) bg_sctrl_middle_pane_g4

0x90e4,	// (0x00015ab7) bg_sctrl_middle_pane_g5

0x90ec,	// (0x00015abf) bg_sctrl_middle_pane_g6

0x90f4,	// (0x00015ac7) bg_sctrl_middle_pane_g7

0x90fc,	// (0x00015acf) bg_sctrl_middle_pane_g8

0x0007,

0xfce9,	// (0x0001c6bc) bg_sctrl_middle_pane_g

0x9104,	// (0x00015ad7) bg_sctrl_middle_pane_g8_copy1

0x90c4,	// (0x00015a97) bg_sctrl_sk_pane_g1

0x90d4,	// (0x00015aa7) bg_sctrl_sk_pane_g2

0x90cc,	// (0x00015a9f) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x0001c20d) bg_sctrl_sk_pane_g

0x3e8c,	// (0x0001085f) aid_size_touch_scroll_bar

0x90e4,	// (0x00015ab7) bg_sctrl_sk_pane_g4

0x90dc,	// (0x00015aaf) bg_sctrl_sk_pane_g5

0x90ec,	// (0x00015abf) bg_sctrl_sk_pane_g6

0x90f4,	// (0x00015ac7) bg_sctrl_sk_pane_g7

0x9104,	// (0x00015ad7) bg_sctrl_sk_pane_g8

0x90fc,	// (0x00015acf) bg_sctrl_sk_pane_g9

0x561a,	// (0x00011fed) popup_fep_china_hwr2_fs_candidate_window

0x5624,	// (0x00011ff7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5624,	// (0x00011ff7) popup_fep_china_hwr2_fs_control_window

0x632f,	// (0x00012d02) sctrl_sk_top_pane_g2

0x0001,

0xfcdf,	// (0x0001c6b2) sctrl_sk_top_pane_g

0xd728,	// (0x0001a0fb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd728,	// (0x0001a0fb) aid_fep_china_hwr2_fs_cell

0xd73b,	// (0x0001a10e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd73b,	// (0x0001a10e) bg_popup_fep_shadow_pane_cp4

0xd754,	// (0x0001a127) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd754,	// (0x0001a127) bg_popup_fep_shadow_pane_cp5

0xd766,	// (0x0001a139) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd766,	// (0x0001a139) popup_fep_china_hwr2_fs_control_bar_grid

0xd776,	// (0x0001a149) popup_fep_china_hwr2_fs_control_funtion_grid

0xd77e,	// (0x0001a151) aid_fep_china_hwr2_fs_candi_cell

0x35e2,	// (0x0000ffb5) bg_popup_fep_shadow_pane_cp6

0xd788,	// (0x0001a15b) popup_fep_china_hwr2_fs_candidate_grid

0xd792,	// (0x0001a165) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd792,	// (0x0001a165) cell_fep_china_hwr2_fs_funtion_grid

0xbc2e,	// (0x00018601) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7aa,	// (0x0001a17d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7aa,	// (0x0001a17d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7b8,	// (0x0001a18b) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7b8,	// (0x0001a18b) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcfa,	// (0x0001c6cd) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcfa,	// (0x0001c6cd) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7ce,	// (0x0001a1a1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7ce,	// (0x0001a1a1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd7e3,	// (0x0001a1b6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd7e3,	// (0x0001a1b6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcff,	// (0x0001c6d2) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcff,	// (0x0001c6d2) cell_fep_china_hwr2_fs_funtion_grid_t

0xd7ff,	// (0x0001a1d2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd807,	// (0x0001a1da) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd80f,	// (0x0001a1e2) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd04,	// (0x0001c6d7) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd817,	// (0x0001a1ea) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd817,	// (0x0001a1ea) cell_fep_china_hwr2_fs_candidate_grid

0xd836,	// (0x0001a209) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd83e,	// (0x0001a211) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbc2e,	// (0x00018601) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbc2e,	// (0x00018601) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb18,	// (0x0001c4eb) cell_fep_china_hwr2_fs_candidate_grid_g

0xd846,	// (0x0001a219) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8c76,	// (0x00015649) clock_nsta_pane_cp_24_ParamLimits

0x8c76,	// (0x00015649) clock_nsta_pane_cp_24

0x8cf6,	// (0x000156c9) indicator_nsta_pane_cp_24_ParamLimits

0x8cf6,	// (0x000156c9) indicator_nsta_pane_cp_24

0x9e90,	// (0x00016863) heading_pane_g1

0x0001,

0xf89f,	// (0x0001c272) heading_pane_g

0xa9d9,	// (0x000173ac) grid_sct_catagory_button_pane

0xaa0b,	// (0x000173de) scroll_pane_cp5_ParamLimits

0xb842,	// (0x00018215) button_value_adjust_pane_cp5_ParamLimits

0xb842,	// (0x00018215) button_value_adjust_pane_cp5

0xb948,	// (0x0001831b) form2_midp_time_pane_ParamLimits

0xd854,	// (0x0001a227) cell_sct_catagory_button_pane_ParamLimits

0xd854,	// (0x0001a227) cell_sct_catagory_button_pane

0xbbf3,	// (0x000185c6) bg_button_pane_cp01_ParamLimits

0xbbf3,	// (0x000185c6) bg_button_pane_cp01

0xbc2e,	// (0x00018601) cell_sct_catagory_button_pane_g1

0x5a46,	// (0x00012419) popup_tb_extension_window

0xd866,	// (0x0001a239) aid_size_cell_ext_ParamLimits

0xd866,	// (0x0001a239) aid_size_cell_ext

0x3a44,	// (0x00010417) bg_tb_trans_pane_cp1_ParamLimits

0x3a44,	// (0x00010417) bg_tb_trans_pane_cp1

0xd886,	// (0x0001a259) grid_tb_ext_pane_ParamLimits

0xd886,	// (0x0001a259) grid_tb_ext_pane

0xd8b4,	// (0x0001a287) cell_tb_ext_pane_ParamLimits

0xd8b4,	// (0x0001a287) cell_tb_ext_pane

0xd8cb,	// (0x0001a29e) cell_tb_ext_pane_g1_ParamLimits

0xd8cb,	// (0x0001a29e) cell_tb_ext_pane_g1

0xd8e8,	// (0x0001a2bb) cell_tb_ext_pane_t1

0x3a44,	// (0x00010417) list_highlight_pane_cp11_ParamLimits

0x3a44,	// (0x00010417) list_highlight_pane_cp11

0x4e07,	// (0x000117da) popup_uni_indicator_window_ParamLimits

0x4e07,	// (0x000117da) popup_uni_indicator_window

0x3fe6,	// (0x000109b9) bg_popup_sub_pane_cp14

0xd905,	// (0x0001a2d8) list_uniindi_pane

0xd911,	// (0x0001a2e4) uniindi_top_pane

0x3a44,	// (0x00010417) bg_uniindi_top_pane

0xd932,	// (0x0001a305) uniindi_top_pane_g1

0xd948,	// (0x0001a31b) uniindi_top_pane_g2

0x0003,

0xfd0b,	// (0x0001c6de) uniindi_top_pane_g

0xd972,	// (0x0001a345) uniindi_top_pane_t1

0xd99e,	// (0x0001a371) list_single_uniindi_pane_ParamLimits

0xd99e,	// (0x0001a371) list_single_uniindi_pane

0xbc2e,	// (0x00018601) bg_uniindi_top_pane_g1

0xd9b1,	// (0x0001a384) list_single_uniindi_pane_g1

0xd9c4,	// (0x0001a397) list_single_uniindi_pane_t1

0x4c73,	// (0x00011646) control_bg_pane

0xd9e9,	// (0x0001a3bc) bg_sctrl_sk_pane_cp1

0xd9f2,	// (0x0001a3c5) bg_sctrl_sk_pane_cp2

0xd9fb,	// (0x0001a3ce) control_bg_pane_g1

0xda04,	// (0x0001a3d7) control_bg_pane_g2

0x0001,

0xfd14,	// (0x0001c6e7) control_bg_pane_g

0xb67a,	// (0x0001804d) cell_indicator_nsta_pane_g1_ParamLimits

0xb688,	// (0x0001805b) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7c,	// (0x0001c44f) cell_indicator_nsta_pane_g_ParamLimits

0xb9d5,	// (0x000183a8) form2_midp_time_pane_t1_ParamLimits

0x5578,	// (0x00011f4b) main_idle_act4_pane_ParamLimits

0x5578,	// (0x00011f4b) main_idle_act4_pane

0x5a46,	// (0x00012419) popup_tb_extension_window_ParamLimits

0xd8a6,	// (0x0001a279) tb_ext_find_pane_ParamLimits

0xd8a6,	// (0x0001a279) tb_ext_find_pane

0xda0d,	// (0x0001a3e0) ai_gene_pane_1_cp1

0x896d,	// (0x00015340) ai_gene_pane_2_cp1

0xda15,	// (0x0001a3e8) list_single_idle_plugin_calendar_pane

0xda1e,	// (0x0001a3f1) list_single_idle_plugin_notification_pane

0xda27,	// (0x0001a3fa) list_single_idle_plugin_player_pane

0xda30,	// (0x0001a403) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda30,	// (0x0001a403) list_single_idle_plugin_shortcut_pane

0xda52,	// (0x0001a425) main_idle_act4_pane_t1

0xda64,	// (0x0001a437) main_idle_act4_pane_t2

0x0001,

0xfd19,	// (0x0001c6ec) main_idle_act4_pane_t

0xda76,	// (0x0001a449) middle_sk_idle_act4_pane_ParamLimits

0xda76,	// (0x0001a449) middle_sk_idle_act4_pane

0xda8c,	// (0x0001a45f) popup_clock_digital_analogue_window_cp2

0xdaa6,	// (0x0001a479) shortcut_wheel_idle_act4_pane_ParamLimits

0xdaa6,	// (0x0001a479) shortcut_wheel_idle_act4_pane

0xbc2e,	// (0x00018601) shortcut_wheel_idle_act4_pane_g1

0xbc2e,	// (0x00018601) shortcut_wheel_idle_act4_pane_g2

0xbc2e,	// (0x00018601) shortcut_wheel_idle_act4_pane_g3

0xbc2e,	// (0x00018601) shortcut_wheel_idle_act4_pane_g4

0xbc2e,	// (0x00018601) shortcut_wheel_idle_act4_pane_g5

0xdaba,	// (0x0001a48d) shortcut_wheel_idle_act4_pane_g6

0xdac2,	// (0x0001a495) shortcut_wheel_idle_act4_pane_g7

0xdaca,	// (0x0001a49d) shortcut_wheel_idle_act4_pane_g8

0xdad2,	// (0x0001a4a5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd1e,	// (0x0001c6f1) shortcut_wheel_idle_act4_pane_g

0xbea9,	// (0x0001887c) middle_sk_idle_act4_pane_g1_ParamLimits

0xbea9,	// (0x0001887c) middle_sk_idle_act4_pane_g1

0xdb36,	// (0x0001a509) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb36,	// (0x0001a509) middle_sk_idle_act4_pane_g2

0x0001,

0xfd41,	// (0x0001c714) middle_sk_idle_act4_pane_g_ParamLimits

0xfd41,	// (0x0001c714) middle_sk_idle_act4_pane_g

0xdb42,	// (0x0001a515) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb42,	// (0x0001a515) middle_sk_idle_act4_pane_t1

0xdb5f,	// (0x0001a532) grid_ai_shortcut_pane_ParamLimits

0xdb5f,	// (0x0001a532) grid_ai_shortcut_pane

0xdb78,	// (0x0001a54b) list_highlight_pane_cp16_ParamLimits

0xdb78,	// (0x0001a54b) list_highlight_pane_cp16

0xdb85,	// (0x0001a558) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdb85,	// (0x0001a558) list_single_idle_plugin_shortcut_pane_g1

0xdb91,	// (0x0001a564) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdb91,	// (0x0001a564) list_single_idle_plugin_shortcut_pane_g2

0xdbab,	// (0x0001a57e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbab,	// (0x0001a57e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd46,	// (0x0001c719) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd46,	// (0x0001c719) list_single_idle_plugin_shortcut_pane_g

0xdbbe,	// (0x0001a591) cell_ai_shortcut_pane_ParamLimits

0xdbbe,	// (0x0001a591) cell_ai_shortcut_pane

0xdbe1,	// (0x0001a5b4) cell_ai_shortcut_pane_g1_ParamLimits

0xdbe1,	// (0x0001a5b4) cell_ai_shortcut_pane_g1

0xda0d,	// (0x0001a3e0) ai_gene_pane_1_cp2

0xdc03,	// (0x0001a5d6) ai_gene_pane_2_cp2

0xdc0b,	// (0x0001a5de) list_highlight_pane_cp15

0xdc14,	// (0x0001a5e7) list_single_idle_plugin_calendar_pane_g1

0xdc0b,	// (0x0001a5de) list_highlight_pane_cp17

0xdc1c,	// (0x0001a5ef) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc24,	// (0x0001a5f7) list_single_idle_plugin_player_pane_g1

0xac40,	// (0x00017613) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd4d,	// (0x0001c720) list_single_idle_plugin_player_pane_g

0xdc2c,	// (0x0001a5ff) list_single_idle_plugin_player_pane_t1

0xdc3a,	// (0x0001a60d) list_single_idle_plugin_player_pane_t2

0xdc48,	// (0x0001a61b) list_single_idle_plugin_player_pane_t3

0xdc56,	// (0x0001a629) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd52,	// (0x0001c725) list_single_idle_plugin_player_pane_t

0xdc64,	// (0x0001a637) wait_bar_pane_cp15

0xdc6c,	// (0x0001a63f) grid_ai_notification_pane

0xac40,	// (0x00017613) list_single_idle_plugin_notification_pane_g1

0xdc75,	// (0x0001a648) cell_ai_notification_pane_ParamLimits

0xdc75,	// (0x0001a648) cell_ai_notification_pane

0xdc82,	// (0x0001a655) cell_ai_notification_pane_g1

0xdc8a,	// (0x0001a65d) cell_ai_notification_pane_t1

0xdc98,	// (0x0001a66b) tb_ext_find_button_pane

0xdca0,	// (0x0001a673) tb_ext_find_pane_g1

0xdca8,	// (0x0001a67b) tb_ext_find_pane_t1

0x8159,	// (0x00014b2c) tb_ext_find_button_pane_g1

0xdcb6,	// (0x0001a689) tb_ext_find_button_pane_g2

0x0001,

0xfd5b,	// (0x0001c72e) tb_ext_find_button_pane_g

0xda52,	// (0x0001a425) main_idle_act4_pane_t1_ParamLimits

0xda64,	// (0x0001a437) main_idle_act4_pane_t2_ParamLimits

0xfd19,	// (0x0001c6ec) main_idle_act4_pane_t_ParamLimits

0xda8c,	// (0x0001a45f) popup_clock_digital_analogue_window_cp2_ParamLimits

0xda9a,	// (0x0001a46d) sat_plugin_idle_act4_pane_ParamLimits

0xda9a,	// (0x0001a46d) sat_plugin_idle_act4_pane

0xdcbf,	// (0x0001a692) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcbf,	// (0x0001a692) sat_plugin_idle_act4_pane_t1

0xdcd2,	// (0x0001a6a5) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcd2,	// (0x0001a6a5) sat_plugin_idle_act4_pane_t2

0xdce5,	// (0x0001a6b8) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdce5,	// (0x0001a6b8) sat_plugin_idle_act4_pane_t3

0xdcf8,	// (0x0001a6cb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdcf8,	// (0x0001a6cb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd60,	// (0x0001c733) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd60,	// (0x0001c733) sat_plugin_idle_act4_pane_t

0x4d38,	// (0x0001170b) popup_battery_window_ParamLimits

0x4d38,	// (0x0001170b) popup_battery_window

0x3a44,	// (0x00010417) bg_popup_sub_pane_cp25_ParamLimits

0x3a44,	// (0x00010417) bg_popup_sub_pane_cp25

0xdd0b,	// (0x0001a6de) popup_battery_window_g1_ParamLimits

0xdd0b,	// (0x0001a6de) popup_battery_window_g1

0xdd17,	// (0x0001a6ea) popup_battery_window_t1_ParamLimits

0xdd17,	// (0x0001a6ea) popup_battery_window_t1

0xdd29,	// (0x0001a6fc) popup_battery_window_t2_ParamLimits

0xdd29,	// (0x0001a6fc) popup_battery_window_t2

0x0001,

0xfd69,	// (0x0001c73c) popup_battery_window_t_ParamLimits

0xfd69,	// (0x0001c73c) popup_battery_window_t

0x8837,	// (0x0001520a) midp_canvas_pane_ParamLimits

0x88af,	// (0x00015282) midp_keypad_pane_ParamLimits

0x88af,	// (0x00015282) midp_keypad_pane

0x8b52,	// (0x00015525) main_midp_pane_ParamLimits

0xb6f5,	// (0x000180c8) signal_pane_g2_cp_ParamLimits

0xdd46,	// (0x0001a719) aid_size_cell_midp_keypad_ParamLimits

0xdd46,	// (0x0001a719) aid_size_cell_midp_keypad

0xdd60,	// (0x0001a733) midp_keyp_game_grid_pane_ParamLimits

0xdd60,	// (0x0001a733) midp_keyp_game_grid_pane

0xdd80,	// (0x0001a753) midp_keyp_rocker_pane_ParamLimits

0xdd80,	// (0x0001a753) midp_keyp_rocker_pane

0xddaf,	// (0x0001a782) midp_keyp_sk_left_pane_ParamLimits

0xddaf,	// (0x0001a782) midp_keyp_sk_left_pane

0xde0b,	// (0x0001a7de) midp_keyp_sk_right_pane_ParamLimits

0xde0b,	// (0x0001a7de) midp_keyp_sk_right_pane

0x35e2,	// (0x0000ffb5) bg_button_pane_cp03

0xde67,	// (0x0001a83a) midp_keyp_sk_left_pane_g1

0x35e2,	// (0x0000ffb5) bg_button_pane_cp04

0xde67,	// (0x0001a83a) midp_keyp_sk_right_pane_g1

0xbc2e,	// (0x00018601) midp_keyp_rocker_pane_g1

0xde6f,	// (0x0001a842) keyp_game_cell_pane_ParamLimits

0xde6f,	// (0x0001a842) keyp_game_cell_pane

0x35e2,	// (0x0000ffb5) bg_button_pane_cp02

0xde82,	// (0x0001a855) keyp_game_cell_pane_g1

0x4d82,	// (0x00011755) popup_fep_vkb2_window_ParamLimits

0x4d82,	// (0x00011755) popup_fep_vkb2_window

0x65fb,	// (0x00012fce) aid_size_cell_vkb2_ParamLimits

0x65fb,	// (0x00012fce) aid_size_cell_vkb2

0x6647,	// (0x0001301a) popup_fep_vkb2_window_g1_ParamLimits

0x6647,	// (0x0001301a) popup_fep_vkb2_window_g1

0x668f,	// (0x00013062) vkb2_area_bottom_pane_ParamLimits

0x668f,	// (0x00013062) vkb2_area_bottom_pane

0x66e3,	// (0x000130b6) vkb2_area_keypad_pane_ParamLimits

0x66e3,	// (0x000130b6) vkb2_area_keypad_pane

0x6729,	// (0x000130fc) vkb2_area_top_pane_ParamLimits

0x6729,	// (0x000130fc) vkb2_area_top_pane

0x67a9,	// (0x0001317c) vkb2_top_entry_pane_ParamLimits

0x67a9,	// (0x0001317c) vkb2_top_entry_pane

0x67d3,	// (0x000131a6) vkb2_top_grid_left_pane_ParamLimits

0x67d3,	// (0x000131a6) vkb2_top_grid_left_pane

0x67f2,	// (0x000131c5) vkb2_top_grid_right_pane_ParamLimits

0x67f2,	// (0x000131c5) vkb2_top_grid_right_pane

0x6811,	// (0x000131e4) vkb2_cell_keypad_pane_ParamLimits

0x6811,	// (0x000131e4) vkb2_cell_keypad_pane

0x68e2,	// (0x000132b5) vkb2_area_bottom_grid_pane_ParamLimits

0x68e2,	// (0x000132b5) vkb2_area_bottom_grid_pane

0x6908,	// (0x000132db) vkb2_area_bottom_pane_g1_ParamLimits

0x6908,	// (0x000132db) vkb2_area_bottom_pane_g1

0x692c,	// (0x000132ff) vkb2_area_bottom_pane_g2_ParamLimits

0x692c,	// (0x000132ff) vkb2_area_bottom_pane_g2

0x695a,	// (0x0001332d) vkb2_area_bottom_pane_g3_ParamLimits

0x695a,	// (0x0001332d) vkb2_area_bottom_pane_g3

0x0002,

0xfd6e,	// (0x0001c741) vkb2_area_bottom_pane_g_ParamLimits

0xfd6e,	// (0x0001c741) vkb2_area_bottom_pane_g

0x69bb,	// (0x0001338e) vkb2_top_cell_left_pane_ParamLimits

0x69bb,	// (0x0001338e) vkb2_top_cell_left_pane

0xde93,	// (0x0001a866) vkb2_top_entry_pane_g1_ParamLimits

0xde93,	// (0x0001a866) vkb2_top_entry_pane_g1

0xdea1,	// (0x0001a874) vkb2_top_entry_pane_t1_ParamLimits

0xdea1,	// (0x0001a874) vkb2_top_entry_pane_t1

0xded3,	// (0x0001a8a6) vkb2_top_entry_pane_t2_ParamLimits

0xded3,	// (0x0001a8a6) vkb2_top_entry_pane_t2

0xdf05,	// (0x0001a8d8) vkb2_top_entry_pane_t3_ParamLimits

0xdf05,	// (0x0001a8d8) vkb2_top_entry_pane_t3

0x0002,

0xfd75,	// (0x0001c748) vkb2_top_entry_pane_t_ParamLimits

0xfd75,	// (0x0001c748) vkb2_top_entry_pane_t

0x6a08,	// (0x000133db) vkb2_top_grid_right_pane_g1_ParamLimits

0x6a08,	// (0x000133db) vkb2_top_grid_right_pane_g1

0x6a1e,	// (0x000133f1) vkb2_top_grid_right_pane_g2_ParamLimits

0x6a1e,	// (0x000133f1) vkb2_top_grid_right_pane_g2

0x6a36,	// (0x00013409) vkb2_top_grid_right_pane_g3_ParamLimits

0x6a36,	// (0x00013409) vkb2_top_grid_right_pane_g3

0x6a4e,	// (0x00013421) vkb2_top_grid_right_pane_g4_ParamLimits

0x6a4e,	// (0x00013421) vkb2_top_grid_right_pane_g4

0x0003,

0xfd7c,	// (0x0001c74f) vkb2_top_grid_right_pane_g_ParamLimits

0xfd7c,	// (0x0001c74f) vkb2_top_grid_right_pane_g

0x6a64,	// (0x00013437) vkb2_top_cell_left_pane_g1

0x6a7b,	// (0x0001344e) vkb2_cell_keypad_pane_g1_ParamLimits

0x6a7b,	// (0x0001344e) vkb2_cell_keypad_pane_g1

0xdf29,	// (0x0001a8fc) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf29,	// (0x0001a8fc) vkb2_cell_keypad_pane_t1

0x6a89,	// (0x0001345c) vkb2_cell_bottom_grid_pane_ParamLimits

0x6a89,	// (0x0001345c) vkb2_cell_bottom_grid_pane

0x6ac2,	// (0x00013495) vkb2_cell_bottom_grid_pane_g1

0xdada,	// (0x0001a4ad) aid_call2_pane_cp02

0xdae2,	// (0x0001a4b5) aid_call_pane_cp02

0xdaea,	// (0x0001a4bd) clock_digital_number_pane_cp10

0xdaf2,	// (0x0001a4c5) clock_digital_number_pane_cp11

0xdafa,	// (0x0001a4cd) clock_digital_number_pane_cp12

0xdb02,	// (0x0001a4d5) clock_digital_number_pane_cp13

0xdb0a,	// (0x0001a4dd) clock_digital_separator_pane_cp10

0x8159,	// (0x00014b2c) popup_clock_digital_analogue_window_cp2_g1

0x8159,	// (0x00014b2c) popup_clock_digital_analogue_window_cp2_g2

0xdb12,	// (0x0001a4e5) popup_clock_digital_analogue_window_cp2_g3

0x8159,	// (0x00014b2c) popup_clock_digital_analogue_window_cp2_g4

0xdb12,	// (0x0001a4e5) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd31,	// (0x0001c704) popup_clock_digital_analogue_window_cp2_g

0xdb1a,	// (0x0001a4ed) popup_clock_digital_analogue_window_cp2_t1

0xdb28,	// (0x0001a4fb) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd3c,	// (0x0001c70f) popup_clock_digital_analogue_window_cp2_t

0xbc2e,	// (0x00018601) clock_digital_number_pane_cp10_g1

0xbc2e,	// (0x00018601) clock_digital_number_pane_cp10_g2

0x0001,

0xfb18,	// (0x0001c4eb) clock_digital_number_pane_cp10_g

0xbc2e,	// (0x00018601) clock_digital_separator_pane_cp10_g1

0xbc2e,	// (0x00018601) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb18,	// (0x0001c4eb) clock_digital_separator_pane_cp10_g

0xd954,	// (0x0001a327) uniindi_top_pane_g3

0xd965,	// (0x0001a338) uniindi_top_pane_g4

0x689c,	// (0x0001326f) vkb2_row_keypad_pane_ParamLimits

0x689c,	// (0x0001326f) vkb2_row_keypad_pane

0x6ade,	// (0x000134b1) vkb2_cell_t_keypad_pane_ParamLimits

0x6ade,	// (0x000134b1) vkb2_cell_t_keypad_pane

0x6aee,	// (0x000134c1) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6aee,	// (0x000134c1) vkb2_cell_t_keypad_pane_cp08

0x6b03,	// (0x000134d6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6b03,	// (0x000134d6) vkb2_cell_t_keypad_pane_cp09

0x6b17,	// (0x000134ea) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6b17,	// (0x000134ea) vkb2_cell_t_keypad_pane_cp01

0x6b28,	// (0x000134fb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6b28,	// (0x000134fb) vkb2_cell_t_keypad_pane_cp02

0x6b39,	// (0x0001350c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6b39,	// (0x0001350c) vkb2_cell_t_keypad_pane_cp03

0x6b4a,	// (0x0001351d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6b4a,	// (0x0001351d) vkb2_cell_t_keypad_pane_cp04

0x6b5b,	// (0x0001352e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6b5b,	// (0x0001352e) vkb2_cell_t_keypad_pane_cp05

0x6b6c,	// (0x0001353f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6b6c,	// (0x0001353f) vkb2_cell_t_keypad_pane_cp06

0x6b7f,	// (0x00013552) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6b7f,	// (0x00013552) vkb2_cell_t_keypad_pane_cp07

0x6b94,	// (0x00013567) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6b94,	// (0x00013567) vkb2_cell_t_keypad_pane_cp10

0x632f,	// (0x00012d02) vkb2_cell_t_keypad_pane_g1

0xdf40,	// (0x0001a913) vkb2_cell_t_keypad_pane_t1

0x4c73,	// (0x00011646) popup_grid_graphic2_window

0xdf52,	// (0x0001a925) aid_size_cell_graphic2_ParamLimits

0xdf52,	// (0x0001a925) aid_size_cell_graphic2

0xdf8a,	// (0x0001a95d) bg_popup_window_pane_cp21_ParamLimits

0xdf8a,	// (0x0001a95d) bg_popup_window_pane_cp21

0xdf98,	// (0x0001a96b) graphic2_pages_pane_ParamLimits

0xdf98,	// (0x0001a96b) graphic2_pages_pane

0xdfde,	// (0x0001a9b1) grid_graphic2_control_pane_ParamLimits

0xdfde,	// (0x0001a9b1) grid_graphic2_control_pane

0xe01c,	// (0x0001a9ef) grid_graphic2_pane_ParamLimits

0xe01c,	// (0x0001a9ef) grid_graphic2_pane

0xe092,	// (0x0001aa65) cell_graphic2_pane

0x4c73,	// (0x00011646) main_comp_mode_pane

0xd15c,	// (0x00019b2f) list_ai3_gene_pane_ParamLimits

0xd585,	// (0x00019f58) bg_popup_window_pane_cp19_ParamLimits

0xd591,	// (0x00019f64) bg_touch_area_indi_pane_ParamLimits

0xd591,	// (0x00019f64) bg_touch_area_indi_pane

0xd5a7,	// (0x00019f7a) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5a7,	// (0x00019f7a) bg_touch_area_indi_pane_cp01

0xd5bd,	// (0x00019f90) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5bd,	// (0x00019f90) bg_touch_area_indi_pane_cp02

0xd5d7,	// (0x00019faa) bg_touch_area_indi_pane_cp03_ParamLimits

0xd5d7,	// (0x00019faa) bg_touch_area_indi_pane_cp03

0xd5f1,	// (0x00019fc4) popup_slider_window_g1_ParamLimits

0xd60d,	// (0x00019fe0) popup_slider_window_g2_ParamLimits

0xd629,	// (0x00019ffc) popup_slider_window_g3_ParamLimits

0xfcc6,	// (0x0001c699) popup_slider_window_g_ParamLimits

0xd68f,	// (0x0001a062) popup_slider_window_t1_ParamLimits

0xd703,	// (0x0001a0d6) small_volume_slider_vertical_pane_ParamLimits

0xe092,	// (0x0001aa65) cell_graphic2_pane_ParamLimits

0xe0e6,	// (0x0001aab9) bg_button_pane_cp10_ParamLimits

0xe0e6,	// (0x0001aab9) bg_button_pane_cp10

0xe0fb,	// (0x0001aace) bg_button_pane_cp11_ParamLimits

0xe0fb,	// (0x0001aace) bg_button_pane_cp11

0xe110,	// (0x0001aae3) graphic2_pages_pane_g1_ParamLimits

0xe110,	// (0x0001aae3) graphic2_pages_pane_g1

0xe12b,	// (0x0001aafe) graphic2_pages_pane_g2_ParamLimits

0xe12b,	// (0x0001aafe) graphic2_pages_pane_g2

0x0001,

0xfd8a,	// (0x0001c75d) graphic2_pages_pane_g_ParamLimits

0xfd8a,	// (0x0001c75d) graphic2_pages_pane_g

0xe143,	// (0x0001ab16) graphic2_pages_pane_t1_ParamLimits

0xe143,	// (0x0001ab16) graphic2_pages_pane_t1

0xe159,	// (0x0001ab2c) cell_graphic2_control_pane_ParamLimits

0xe159,	// (0x0001ab2c) cell_graphic2_control_pane

0xe179,	// (0x0001ab4c) cell_graphic2_pane_g1_ParamLimits

0xe179,	// (0x0001ab4c) cell_graphic2_pane_g1

0xe186,	// (0x0001ab59) cell_graphic2_pane_g2_ParamLimits

0xe186,	// (0x0001ab59) cell_graphic2_pane_g2

0xe193,	// (0x0001ab66) cell_graphic2_pane_g3_ParamLimits

0xe193,	// (0x0001ab66) cell_graphic2_pane_g3

0xe1a0,	// (0x0001ab73) cell_graphic2_pane_g4_ParamLimits

0xe1a0,	// (0x0001ab73) cell_graphic2_pane_g4

0xe1ad,	// (0x0001ab80) cell_graphic2_pane_g5_ParamLimits

0xe1ad,	// (0x0001ab80) cell_graphic2_pane_g5

0x0004,

0xfd8f,	// (0x0001c762) cell_graphic2_pane_g_ParamLimits

0xfd8f,	// (0x0001c762) cell_graphic2_pane_g

0xe1c5,	// (0x0001ab98) cell_graphic2_pane_t1_ParamLimits

0xe1c5,	// (0x0001ab98) cell_graphic2_pane_t1

0x91ec,	// (0x00015bbf) grid_highlight_pane_cp11_ParamLimits

0x91ec,	// (0x00015bbf) grid_highlight_pane_cp11

0x3a44,	// (0x00010417) bg_button_pane_cp05

0xe1fb,	// (0x0001abce) cell_graphic2_control_pane_g1

0xbc2e,	// (0x00018601) bg_touch_area_indi_pane_g1

0xe223,	// (0x0001abf6) aid_cmod_rocker_key_size

0xe22d,	// (0x0001ac00) aid_cmode_itu_key_size

0xe237,	// (0x0001ac0a) main_cmode_video_pane

0xe241,	// (0x0001ac14) main_comp_mode_itu_pane

0xe24d,	// (0x0001ac20) main_comp_mode_rocker_pane

0xe259,	// (0x0001ac2c) cell_cmode_rocker_pane_ParamLimits

0xe259,	// (0x0001ac2c) cell_cmode_rocker_pane

0xe26d,	// (0x0001ac40) cell_cmode_itu_pane_ParamLimits

0xe26d,	// (0x0001ac40) cell_cmode_itu_pane

0x3fe6,	// (0x000109b9) bg_button_pane_cp06_ParamLimits

0x3fe6,	// (0x000109b9) bg_button_pane_cp06

0xbea9,	// (0x0001887c) cell_cmode_rocker_pane_g1_ParamLimits

0xbea9,	// (0x0001887c) cell_cmode_rocker_pane_g1

0xd7aa,	// (0x0001a17d) cell_cmode_rocker_pane_g2_ParamLimits

0xd7aa,	// (0x0001a17d) cell_cmode_rocker_pane_g2

0x0001,

0xfd9f,	// (0x0001c772) cell_cmode_rocker_pane_g_ParamLimits

0xfd9f,	// (0x0001c772) cell_cmode_rocker_pane_g

0x35e2,	// (0x0000ffb5) bg_button_pane_cp07

0xe284,	// (0x0001ac57) cell_cmode_itu_pane_g1

0xe28d,	// (0x0001ac60) cell_cmode_itu_pane_t1

0xe29b,	// (0x0001ac6e) cell_cmode_itu_pane_t2

0x0001,

0xfda4,	// (0x0001c777) cell_cmode_itu_pane_t

0xd9d9,	// (0x0001a3ac) aid_touch_ctrl_left

0xd9e1,	// (0x0001a3b4) aid_touch_ctrl_right

0x35e2,	// (0x0000ffb5) compa_mode_pane

0xe2a9,	// (0x0001ac7c) aid_cmod_rocker_key_size_cp

0xe2b3,	// (0x0001ac86) aid_cmode_itu_key_size_cp

0xe2bd,	// (0x0001ac90) compa_mode_pane_g1

0xe2c5,	// (0x0001ac98) compa_mode_pane_g2

0xe2cd,	// (0x0001aca0) compa_mode_pane_g3

0x0002,

0xfda9,	// (0x0001c77c) compa_mode_pane_g

0xe2d5,	// (0x0001aca8) main_comp_mode_itu_pane_cp

0xe2dd,	// (0x0001acb0) main_comp_mode_rocker_pane_cp

0xe2e5,	// (0x0001acb8) cell_cmode_itu_pane_cp_ParamLimits

0xe2e5,	// (0x0001acb8) cell_cmode_itu_pane_cp

0xe2fa,	// (0x0001accd) cell_cmode_rocker_pane_cp_ParamLimits

0xe2fa,	// (0x0001accd) cell_cmode_rocker_pane_cp

0x3fe6,	// (0x000109b9) bg_button_pane_cp06_cp_ParamLimits

0x3fe6,	// (0x000109b9) bg_button_pane_cp06_cp

0xbea9,	// (0x0001887c) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbea9,	// (0x0001887c) cell_cmode_rocker_pane_g1_cp

0xbc2e,	// (0x00018601) cell_cmode_rocker_pane_g2_cp

0x35e2,	// (0x0000ffb5) bg_button_pane_cp07_cp

0xe30c,	// (0x0001acdf) cell_cmode_itu_pane_g1_cp

0xe315,	// (0x0001ace8) cell_cmode_itu_pane_t1_cp

0xe315,	// (0x0001ace8) cell_cmode_itu_pane_t2_cp

0xa70a,	// (0x000170dd) settings_code_pane_cp2

0x386e,	// (0x00010241) bg_popup_window_pane_cp3_ParamLimits

0x3c58,	// (0x0001062b) heading_pane_cp3_ParamLimits

0x3c67,	// (0x0001063a) listscroll_popup_graphic_pane_ParamLimits

0x60c2,	// (0x00012a95) fep_hwr_aid_pane_ParamLimits

0x6554,	// (0x00012f27) aid_touch_sctrl_top_ParamLimits

0x656f,	// (0x00012f42) sctrl_sk_top_pane_g1_ParamLimits

0x632f,	// (0x00012d02) sctrl_sk_top_pane_g2_ParamLimits

0xfcdf,	// (0x0001c6b2) sctrl_sk_top_pane_g_ParamLimits

0x657c,	// (0x00012f4f) sctrl_sk_top_pane_t1_ParamLimits

0x6554,	// (0x00012f27) aid_touch_sctrl_bottom_ParamLimits

0x657c,	// (0x00012f4f) sctrl_sk_bottom_pane_t1_ParamLimits

0xd91e,	// (0x0001a2f1) aid_area_touch_clock

0x676f,	// (0x00013142) aid_vkb2_area_top_pane_cell_ParamLimits

0x676f,	// (0x00013142) aid_vkb2_area_top_pane_cell

0x68be,	// (0x00013291) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x68be,	// (0x00013291) aid_vkb2_area_bottom_pane_cell

0xde8b,	// (0x0001a85e) popup_char_count_window

0xe323,	// (0x0001acf6) popup_char_count_window_g1

0xe32c,	// (0x0001acff) popup_char_count_window_g2

0xe335,	// (0x0001ad08) popup_char_count_window_g3

0x0002,

0xfdb0,	// (0x0001c783) popup_char_count_window_g

0xe33e,	// (0x0001ad11) popup_char_count_window_t1

0x6625,	// (0x00012ff8) popup_fep_char_preview_window_ParamLimits

0x6625,	// (0x00012ff8) popup_fep_char_preview_window

0x678d,	// (0x00013160) vkb2_top_candi_pane_ParamLimits

0x678d,	// (0x00013160) vkb2_top_candi_pane

0xe34c,	// (0x0001ad1f) cell_vkb2_top_candi_pane_ParamLimits

0xe34c,	// (0x0001ad1f) cell_vkb2_top_candi_pane

0x6ba9,	// (0x0001357c) bg_popup_fep_char_preview_window_ParamLimits

0x6ba9,	// (0x0001357c) bg_popup_fep_char_preview_window

0x6bb7,	// (0x0001358a) popup_fep_char_preview_window_t1_ParamLimits

0x6bb7,	// (0x0001358a) popup_fep_char_preview_window_t1

0xe3bb,	// (0x0001ad8e) bg_popup_fep_char_preview_window_g1

0xe3c3,	// (0x0001ad96) bg_popup_fep_char_preview_window_g2

0xe3cb,	// (0x0001ad9e) bg_popup_fep_char_preview_window_g3

0xe3d3,	// (0x0001ada6) bg_popup_fep_char_preview_window_g4

0xe3db,	// (0x0001adae) bg_popup_fep_char_preview_window_g5

0xe3e3,	// (0x0001adb6) bg_popup_fep_char_preview_window_g6

0xe3eb,	// (0x0001adbe) bg_popup_fep_char_preview_window_g7

0xe3f3,	// (0x0001adc6) bg_popup_fep_char_preview_window_g8

0xe3fb,	// (0x0001adce) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdb7,	// (0x0001c78a) bg_popup_fep_char_preview_window_g

0x632f,	// (0x00012d02) cell_vkb2_top_candi_pane_g1_ParamLimits

0x632f,	// (0x00012d02) cell_vkb2_top_candi_pane_g1

0x633d,	// (0x00012d10) cell_vkb2_top_candi_pane_g2_ParamLimits

0x633d,	// (0x00012d10) cell_vkb2_top_candi_pane_g2

0xe39a,	// (0x0001ad6d) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe39a,	// (0x0001ad6d) cell_vkb2_top_candi_pane_g3

0x6bf9,	// (0x000135cc) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6bf9,	// (0x000135cc) cell_vkb2_top_candi_pane_g4

0xc49d,	// (0x00018e70) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc49d,	// (0x00018e70) cell_vkb2_top_candi_pane_g5

0x6c1a,	// (0x000135ed) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6c1a,	// (0x000135ed) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdcc,	// (0x0001c79f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdcc,	// (0x0001c79f) cell_vkb2_top_candi_pane_g

0x6c28,	// (0x000135fb) cell_vkb2_top_candi_pane_t1

0x5f22,	// (0x000128f5) aid_size_touch_slider_mark_ParamLimits

0x5f22,	// (0x000128f5) aid_size_touch_slider_mark

0xdfce,	// (0x0001a9a1) grid_graphic2_catg_pane_ParamLimits

0xdfce,	// (0x0001a9a1) grid_graphic2_catg_pane

0xe06c,	// (0x0001aa3f) popup_grid_graphic2_window_t1_ParamLimits

0xe06c,	// (0x0001aa3f) popup_grid_graphic2_window_t1

0xe07e,	// (0x0001aa51) popup_grid_graphic2_window_t2_ParamLimits

0xe07e,	// (0x0001aa51) popup_grid_graphic2_window_t2

0x0001,

0xfd85,	// (0x0001c758) popup_grid_graphic2_window_t_ParamLimits

0xfd85,	// (0x0001c758) popup_grid_graphic2_window_t

0x3a44,	// (0x00010417) bg_button_pane_cp05_ParamLimits

0xe1fb,	// (0x0001abce) cell_graphic2_control_pane_g1_ParamLimits

0xe403,	// (0x0001add6) cell_graphic2_catg_pane_ParamLimits

0xe403,	// (0x0001add6) cell_graphic2_catg_pane

0x35e2,	// (0x0000ffb5) bg_button_pane_cp12

0xe415,	// (0x0001ade8) cell_graphic2_catg_pane_g1

0xd8e8,	// (0x0001a2bb) cell_tb_ext_pane_t1_ParamLimits

0x69db,	// (0x000133ae) vkb2_top_cell_right_narrow_pane_ParamLimits

0x69db,	// (0x000133ae) vkb2_top_cell_right_narrow_pane

0x69f3,	// (0x000133c6) vkb2_top_cell_right_wide_pane_ParamLimits

0x69f3,	// (0x000133c6) vkb2_top_cell_right_wide_pane

0x60b4,	// (0x00012a87) bg_vkb2_func_pane_ParamLimits

0x60b4,	// (0x00012a87) bg_vkb2_func_pane

0x6a64,	// (0x00013437) vkb2_top_cell_left_pane_g1_ParamLimits

0x60b4,	// (0x00012a87) bg_vkb2_fuc_pane_cp03_ParamLimits

0x60b4,	// (0x00012a87) bg_vkb2_fuc_pane_cp03

0x6ac2,	// (0x00013495) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x90cc,	// (0x00015a9f) bg_vkb2_func_pane_g1

0x90d4,	// (0x00015aa7) bg_vkb2_func_pane_g2

0x90e4,	// (0x00015ab7) bg_vkb2_func_pane_g3

0x90dc,	// (0x00015aaf) bg_vkb2_func_pane_g4

0x90ec,	// (0x00015abf) bg_vkb2_func_pane_g5

0x90f4,	// (0x00015ac7) bg_vkb2_func_pane_g6

0x90fc,	// (0x00015acf) bg_vkb2_func_pane_g7

0x9104,	// (0x00015ad7) bg_vkb2_func_pane_g8

0x90c4,	// (0x00015a97) bg_vkb2_func_pane_g9

0x0008,

0xfdd9,	// (0x0001c7ac) bg_vkb2_func_pane_g

0x60b4,	// (0x00012a87) bg_vkb2_fuc_pane_cp01_ParamLimits

0x60b4,	// (0x00012a87) bg_vkb2_fuc_pane_cp01

0x6a64,	// (0x00013437) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6a64,	// (0x00013437) vkb2_top_cell_right_wide_pane_g1

0x60b4,	// (0x00012a87) bg_vkb2_fuc_pane_cp02_ParamLimits

0x60b4,	// (0x00012a87) bg_vkb2_fuc_pane_cp02

0x6c46,	// (0x00013619) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c46,	// (0x00013619) vkb2_top_cell_right_narrow_pane_g1

0xd4ff,	// (0x00019ed2) aid_touch_area_decrease_ParamLimits

0xd4ff,	// (0x00019ed2) aid_touch_area_decrease

0xd523,	// (0x00019ef6) aid_touch_area_increase_ParamLimits

0xd523,	// (0x00019ef6) aid_touch_area_increase

0xd53b,	// (0x00019f0e) aid_touch_area_mute_ParamLimits

0xd53b,	// (0x00019f0e) aid_touch_area_mute

0xd557,	// (0x00019f2a) aid_touch_area_slider_ParamLimits

0xd557,	// (0x00019f2a) aid_touch_area_slider

0xd645,	// (0x0001a018) popup_slider_window_g4_ParamLimits

0xd645,	// (0x0001a018) popup_slider_window_g4

0xd65d,	// (0x0001a030) popup_slider_window_g5_ParamLimits

0xd65d,	// (0x0001a030) popup_slider_window_g5

0xd67f,	// (0x0001a052) popup_slider_window_g6_ParamLimits

0xd67f,	// (0x0001a052) popup_slider_window_g6

0xd6bd,	// (0x0001a090) popup_slider_window_t2_ParamLimits

0xd6bd,	// (0x0001a090) popup_slider_window_t2

0x0001,

0xfcd3,	// (0x0001c6a6) popup_slider_window_t_ParamLimits

0xfcd3,	// (0x0001c6a6) popup_slider_window_t

0xd6d5,	// (0x0001a0a8) slider_pane_ParamLimits

0xd6d5,	// (0x0001a0a8) slider_pane

0xe41e,	// (0x0001adf1) slider_pane_g1_ParamLimits

0xe41e,	// (0x0001adf1) slider_pane_g1

0xe432,	// (0x0001ae05) slider_pane_g2_ParamLimits

0xe432,	// (0x0001ae05) slider_pane_g2

0xe448,	// (0x0001ae1b) slider_pane_g3_ParamLimits

0xe448,	// (0x0001ae1b) slider_pane_g3

0x0003,

0xfdec,	// (0x0001c7bf) slider_pane_g_ParamLimits

0xfdec,	// (0x0001c7bf) slider_pane_g

0x5aa8,	// (0x0001247b) popup_tb_float_extension_window_ParamLimits

0x5aa8,	// (0x0001247b) popup_tb_float_extension_window

0xe474,	// (0x0001ae47) aid_size_cell_tb_float_ext

0x35e2,	// (0x0000ffb5) bg_popup_sub_window_cp28

0xe480,	// (0x0001ae53) grid_tb_float_ext_pane

0xe48c,	// (0x0001ae5f) cell_tb_float_ext_pane_ParamLimits

0xe48c,	// (0x0001ae5f) cell_tb_float_ext_pane

0xe4a8,	// (0x0001ae7b) cell_tb_float_ext_pane_g1

0xe4b1,	// (0x0001ae84) grid_highlight_pane_cp12

0x6209,	// (0x00012bdc) cell_last_hwr_side_pane_ParamLimits

0x6209,	// (0x00012bdc) cell_last_hwr_side_pane

0xbc2e,	// (0x00018601) cell_last_hwr_side_pane_g1

0xe4ba,	// (0x0001ae8d) cell_last_hwr_side_pane_g2

0x0001,

0xfdf5,	// (0x0001c7c8) cell_last_hwr_side_pane_g

0x698a,	// (0x0001335d) vkb2_area_bottom_space_btn_pane_ParamLimits

0x698a,	// (0x0001335d) vkb2_area_bottom_space_btn_pane

0x632f,	// (0x00012d02) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf40,	// (0x0001a913) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6c28,	// (0x000135fb) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6c62,	// (0x00013635) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6c62,	// (0x00013635) vkb2_area_bottom_space_btn_pane_g1

0x6c9c,	// (0x0001366f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6c9c,	// (0x0001366f) vkb2_area_bottom_space_btn_pane_g2

0x6cd2,	// (0x000136a5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6cd2,	// (0x000136a5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdfa,	// (0x0001c7cd) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdfa,	// (0x0001c7cd) vkb2_area_bottom_space_btn_pane_g

0x6179,	// (0x00012b4c) cel_fep_hwr_func_pane_ParamLimits

0x6179,	// (0x00012b4c) cel_fep_hwr_func_pane

0x61b5,	// (0x00012b88) cell_hwr_side_button_pane_ParamLimits

0x61b5,	// (0x00012b88) cell_hwr_side_button_pane

0xd91e,	// (0x0001a2f1) aid_area_touch_clock_ParamLimits

0x3a44,	// (0x00010417) bg_uniindi_top_pane_ParamLimits

0xd932,	// (0x0001a305) uniindi_top_pane_g1_ParamLimits

0xd948,	// (0x0001a31b) uniindi_top_pane_g2_ParamLimits

0xd954,	// (0x0001a327) uniindi_top_pane_g3_ParamLimits

0xd965,	// (0x0001a338) uniindi_top_pane_g4_ParamLimits

0xfd0b,	// (0x0001c6de) uniindi_top_pane_g_ParamLimits

0xd972,	// (0x0001a345) uniindi_top_pane_t1_ParamLimits

0x3a44,	// (0x00010417) bg_vkb2_func_pane_cp01_ParamLimits

0x3a44,	// (0x00010417) bg_vkb2_func_pane_cp01

0xe4c3,	// (0x0001ae96) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4c3,	// (0x0001ae96) cel_fep_hwr_func_pane_g1

0x3a44,	// (0x00010417) bg_vkb2_func_pane_cp02_ParamLimits

0x3a44,	// (0x00010417) bg_vkb2_func_pane_cp02

0xe4c3,	// (0x0001ae96) cell_hwr_side_button_pane_g1_ParamLimits

0xe4c3,	// (0x0001ae96) cell_hwr_side_button_pane_g1

0x8f11,	// (0x000158e4) status_pane_g4_ParamLimits

0x8f11,	// (0x000158e4) status_pane_g4

0x8f2b,	// (0x000158fe) status_pane_t1

0xb9e8,	// (0x000183bb) form2_midp_gauge_slider_cont_pane

0xb9f0,	// (0x000183c3) form2_midp_gauge_slider_pane_t1_ParamLimits

0xba02,	// (0x000183d5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xba14,	// (0x000183e7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacb,	// (0x0001c49e) form2_midp_gauge_slider_pane_t_ParamLimits

0xba26,	// (0x000183f9) form2_midp_slider_pane_ParamLimits

0x65ed,	// (0x00012fc0) aid_size_cell_func_vkb2_ParamLimits

0x65ed,	// (0x00012fc0) aid_size_cell_func_vkb2

0xe460,	// (0x0001ae33) slider_pane_g4_ParamLimits

0xe460,	// (0x0001ae33) slider_pane_g4

0x6d1c,	// (0x000136ef) form2_midp_gauge_slider_pane_t2_cp01

0x6d2a,	// (0x000136fd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6d2a,	// (0x000136fd) form2_midp_gauge_slider_pane_t3_cp01

0x6d47,	// (0x0001371a) form2_midp_slider_pane_cp01

0x35e2,	// (0x0000ffb5) navi_smil_pane

0xe4fc,	// (0x0001aecf) navi_smil_pane_g1

0xe504,	// (0x0001aed7) navi_smil_pane_t1

0xe4d1,	// (0x0001aea4) form2_midp_slider_pane_g1

0xe4da,	// (0x0001aead) form2_midp_slider_pane_g2

0xe4e2,	// (0x0001aeb5) form2_midp_slider_pane_g3

0xe4d1,	// (0x0001aea4) form2_midp_slider_pane_g4

0xe4ea,	// (0x0001aebd) form2_midp_slider_pane_g5

0x0004,

0xfe03,	// (0x0001c7d6) form2_midp_slider_pane_g

0x6d0c,	// (0x000136df) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6d0c,	// (0x000136df) vkb2_area_bottom_space_btn_pane_g4

0x8d32,	// (0x00015705) lc0_navi_pane_ParamLimits

0x8d32,	// (0x00015705) lc0_navi_pane

0x8dae,	// (0x00015781) lc0_stat_indi_pane_ParamLimits

0x8dae,	// (0x00015781) lc0_stat_indi_pane

0x8dc5,	// (0x00015798) ls0_title_pane_ParamLimits

0x8dc5,	// (0x00015798) ls0_title_pane

0x3fe6,	// (0x000109b9) bg_popup_sub_pane_cp14_ParamLimits

0xd905,	// (0x0001a2d8) list_uniindi_pane_ParamLimits

0xd911,	// (0x0001a2e4) uniindi_top_pane_ParamLimits

0xd9b1,	// (0x0001a384) list_single_uniindi_pane_g1_ParamLimits

0xd9c4,	// (0x0001a397) list_single_uniindi_pane_t1_ParamLimits

0x6d50,	// (0x00013723) lc0_stat_clock_pane_ParamLimits

0x6d50,	// (0x00013723) lc0_stat_clock_pane

0xe512,	// (0x0001aee5) lc0_stat_indi_pane_g1_ParamLimits

0xe512,	// (0x0001aee5) lc0_stat_indi_pane_g1

0xe51f,	// (0x0001aef2) lc0_stat_indi_pane_g2_ParamLimits

0xe51f,	// (0x0001aef2) lc0_stat_indi_pane_g2

0x0001,

0xfe0e,	// (0x0001c7e1) lc0_stat_indi_pane_g_ParamLimits

0xfe0e,	// (0x0001c7e1) lc0_stat_indi_pane_g

0x6d5d,	// (0x00013730) lc0_uni_indicator_pane_ParamLimits

0x6d5d,	// (0x00013730) lc0_uni_indicator_pane

0xe52c,	// (0x0001aeff) ls0_title_pane_g1_ParamLimits

0xe52c,	// (0x0001aeff) ls0_title_pane_g1

0xe540,	// (0x0001af13) ls0_title_pane_t1_ParamLimits

0xe540,	// (0x0001af13) ls0_title_pane_t1

0x6d6a,	// (0x0001373d) lc0_uni_indicator_pane_g1_ParamLimits

0x6d6a,	// (0x0001373d) lc0_uni_indicator_pane_g1

0xe576,	// (0x0001af49) lc0_stat_clock_pane_t1

0x4c73,	// (0x00011646) main_ai5_pane

0xe58c,	// (0x0001af5f) ai5_sk_pane_ParamLimits

0xe58c,	// (0x0001af5f) ai5_sk_pane

0xe599,	// (0x0001af6c) cell_ai5_widget_pane_ParamLimits

0xe599,	// (0x0001af6c) cell_ai5_widget_pane

0xe638,	// (0x0001b00b) aid_size_cell_widget_grid

0xe646,	// (0x0001b019) bg_ai5_widget_pane_ParamLimits

0xe646,	// (0x0001b019) bg_ai5_widget_pane

0xe6c4,	// (0x0001b097) cell_ai5_widget_pane_g2

0xe6d8,	// (0x0001b0ab) cell_ai5_widget_pane_g3

0xe6f2,	// (0x0001b0c5) cell_ai5_widget_pane_g4

0xe702,	// (0x0001b0d5) cell_ai5_widget_pane_g5

0xe712,	// (0x0001b0e5) cell_ai5_widget_pane_g6

0xe71f,	// (0x0001b0f2) cell_ai5_widget_pane_g7

0xe78b,	// (0x0001b15e) cell_ai5_widget_pane_t1_ParamLimits

0xe78b,	// (0x0001b15e) cell_ai5_widget_pane_t1

0xe7a8,	// (0x0001b17b) cell_ai5_widget_pane_t2_ParamLimits

0xe7a8,	// (0x0001b17b) cell_ai5_widget_pane_t2

0xe7c0,	// (0x0001b193) cell_ai5_widget_pane_t3_ParamLimits

0xe7c0,	// (0x0001b193) cell_ai5_widget_pane_t3

0xe7d8,	// (0x0001b1ab) cell_ai5_widget_pane_t4_ParamLimits

0xe7d8,	// (0x0001b1ab) cell_ai5_widget_pane_t4

0xe7fe,	// (0x0001b1d1) cell_ai5_widget_pane_t5_ParamLimits

0xe7fe,	// (0x0001b1d1) cell_ai5_widget_pane_t5

0xe81e,	// (0x0001b1f1) cell_ai5_widget_pane_t6_ParamLimits

0xe81e,	// (0x0001b1f1) cell_ai5_widget_pane_t6

0xe830,	// (0x0001b203) cell_ai5_widget_pane_t7_ParamLimits

0xe830,	// (0x0001b203) cell_ai5_widget_pane_t7

0xe84f,	// (0x0001b222) cell_ai5_widget_pane_t8_ParamLimits

0xe84f,	// (0x0001b222) cell_ai5_widget_pane_t8

0x000b,

0xfe2e,	// (0x0001c801) cell_ai5_widget_pane_t_ParamLimits

0xfe2e,	// (0x0001c801) cell_ai5_widget_pane_t

0xe8d3,	// (0x0001b2a6) grid_ai5_widget_pane

0x3fe6,	// (0x000109b9) highlight_cell_ai5_widget_pane_ParamLimits

0x3fe6,	// (0x000109b9) highlight_cell_ai5_widget_pane

0xe8e7,	// (0x0001b2ba) ai5_sk_left_pane

0xe8f1,	// (0x0001b2c4) ai5_sk_middle_pane

0xe8fb,	// (0x0001b2ce) ai5_sk_right_pane

0xe905,	// (0x0001b2d8) bg_ai5_widget_pane_g1_ParamLimits

0xe905,	// (0x0001b2d8) bg_ai5_widget_pane_g1

0xe911,	// (0x0001b2e4) bg_ai5_widget_pane_g2_ParamLimits

0xe911,	// (0x0001b2e4) bg_ai5_widget_pane_g2

0xe91d,	// (0x0001b2f0) bg_ai5_widget_pane_g3_ParamLimits

0xe91d,	// (0x0001b2f0) bg_ai5_widget_pane_g3

0xe929,	// (0x0001b2fc) bg_ai5_widget_pane_g4_ParamLimits

0xe929,	// (0x0001b2fc) bg_ai5_widget_pane_g4

0xe935,	// (0x0001b308) bg_ai5_widget_pane_g5_ParamLimits

0xe935,	// (0x0001b308) bg_ai5_widget_pane_g5

0xe941,	// (0x0001b314) bg_ai5_widget_pane_g6_ParamLimits

0xe941,	// (0x0001b314) bg_ai5_widget_pane_g6

0xe94d,	// (0x0001b320) bg_ai5_widget_pane_g7_ParamLimits

0xe94d,	// (0x0001b320) bg_ai5_widget_pane_g7

0xe959,	// (0x0001b32c) bg_ai5_widget_pane_g8_ParamLimits

0xe959,	// (0x0001b32c) bg_ai5_widget_pane_g8

0xe965,	// (0x0001b338) bg_ai5_widget_pane_g9_ParamLimits

0xe965,	// (0x0001b338) bg_ai5_widget_pane_g9

0x0008,

0xfe47,	// (0x0001c81a) bg_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x0001c81a) bg_ai5_widget_pane_g

0xe99d,	// (0x0001b370) cell_shortcut_ai5_widget_pane_ParamLimits

0xe99d,	// (0x0001b370) cell_shortcut_ai5_widget_pane

0x8823,	// (0x000151f6) bg_cell_shortcut_ai5_widget_pane

0xe9b0,	// (0x0001b383) cell_grid_ai5_widget_pane_g1

0x8823,	// (0x000151f6) highlight_cell_shortcut_ai5_widget_pane

0x90cc,	// (0x00015a9f) ai5_sk_left_pane_g1

0xe9b9,	// (0x0001b38c) ai5_sk_left_pane_g2

0xe9c1,	// (0x0001b394) ai5_sk_left_pane_g3

0xe9c9,	// (0x0001b39c) ai5_sk_left_pane_g4

0x0003,

0xfe5a,	// (0x0001c82d) ai5_sk_left_pane_g

0xe9d1,	// (0x0001b3a4) ai5_sk_left_pane_t1

0x90d4,	// (0x00015aa7) ai5_sk_right_pane_g1

0xe9df,	// (0x0001b3b2) ai5_sk_right_pane_g2

0xe9e7,	// (0x0001b3ba) ai5_sk_right_pane_g3

0xe9ef,	// (0x0001b3c2) ai5_sk_right_pane_g4

0x0003,

0xfe63,	// (0x0001c836) ai5_sk_right_pane_g

0xe9f7,	// (0x0001b3ca) ai5_sk_right_pane_t1

0x90d4,	// (0x00015aa7) ai5_sk_middle_pane_g1

0x90cc,	// (0x00015a9f) ai5_sk_middle_pane_g2

0x90ec,	// (0x00015abf) ai5_sk_middle_pane_g3

0xe9e7,	// (0x0001b3ba) ai5_sk_middle_pane_g4

0xe9c1,	// (0x0001b394) ai5_sk_middle_pane_g5

0xea05,	// (0x0001b3d8) ai5_sk_middle_pane_g6

0xea0d,	// (0x0001b3e0) ai5_sk_middle_pane_g7

0x0006,

0xfe6c,	// (0x0001c83f) ai5_sk_middle_pane_g

0x8bba,	// (0x0001558d) aid_touch_area_size_lc0_ParamLimits

0x8bba,	// (0x0001558d) aid_touch_area_size_lc0

0x635e,	// (0x00012d31) cell_hwr_candidate_pane_t1_ParamLimits

0x8bd8,	// (0x000155ab) aid_touch_navi_pane

0x8ec3,	// (0x00015896) status_dt_navi_pane_ParamLimits

0x8ec3,	// (0x00015896) status_dt_navi_pane

0x8ed0,	// (0x000158a3) status_dt_sta_pane_ParamLimits

0x8ed0,	// (0x000158a3) status_dt_sta_pane

0xea15,	// (0x0001b3e8) dt_sta_controll_pane

0xea22,	// (0x0001b3f5) dt_sta_indi_pane

0xea33,	// (0x0001b406) dt_sta_title_pane

0x3a44,	// (0x00010417) bg_dt_sta_indi_pane_ParamLimits

0x3a44,	// (0x00010417) bg_dt_sta_indi_pane

0xea46,	// (0x0001b419) dt_sta_battery_pane

0xea4e,	// (0x0001b421) dt_sta_indi_pane_g1

0xea57,	// (0x0001b42a) dt_sta_indi_pane_g2

0xea60,	// (0x0001b433) dt_sta_indi_pane_g3

0x0002,

0xfe7b,	// (0x0001c84e) dt_sta_indi_pane_g

0xea69,	// (0x0001b43c) dt_sta_signal_pane

0x3fe6,	// (0x000109b9) bg_dt_sta_title_pane_ParamLimits

0x3fe6,	// (0x000109b9) bg_dt_sta_title_pane

0xea72,	// (0x0001b445) dt_sta_title_pane_g1

0xea7a,	// (0x0001b44d) dt_sta_title_pane_t1_ParamLimits

0xea7a,	// (0x0001b44d) dt_sta_title_pane_t1

0x35e2,	// (0x0000ffb5) bg_dt_sta_control_pane

0xea8f,	// (0x0001b462) dt_sta_controll_pane_g1

0xea98,	// (0x0001b46b) bg_dt_sta_title_pane_g1

0xeaa1,	// (0x0001b474) bg_dt_sta_title_pane_g2

0xeaaa,	// (0x0001b47d) bg_dt_sta_title_pane_g3

0x0002,

0xfe82,	// (0x0001c855) bg_dt_sta_title_pane_g

0xbc2e,	// (0x00018601) bg_dt_sta_indi_pane_g1

0xeab3,	// (0x0001b486) dt_sta_signal_pane_g1

0xeabb,	// (0x0001b48e) dt_sta_signal_pane_g2

0x0001,

0xfe89,	// (0x0001c85c) dt_sta_signal_pane_g

0xeac3,	// (0x0001b496) dt_sta_battery_pane_g1

0xeacc,	// (0x0001b49f) dt_sta_battery_pane_t1

0xbc2e,	// (0x00018601) bg_dt_sta_control_pane_g1

0x8280,	// (0x00014c53) fep_china_uni_eep_pane

0x8288,	// (0x00014c5b) fep_china_uni_entry_pane_ParamLimits

0x8298,	// (0x00014c6b) popup_fep_china_uni_window_g1_ParamLimits

0x82a8,	// (0x00014c7b) popup_fep_china_uni_window_g2_ParamLimits

0x82a8,	// (0x00014c7b) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x0001c0c4) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x0001c0c4) popup_fep_china_uni_window_g

0xeadb,	// (0x0001b4ae) fep_china_uni_eep_pane_g1

0xeae3,	// (0x0001b4b6) fep_china_uni_eep_pane_t1

0xe4f3,	// (0x0001aec6) aid_touch_area_size_smil_player

0x8d2a,	// (0x000156fd) lc0_clock_pane

0x8f1f,	// (0x000158f2) status_pane_g5_ParamLimits

0x8f1f,	// (0x000158f2) status_pane_g5

0x572d,	// (0x00012100) popup_keymap_window

0x8ee5,	// (0x000158b8) status_icon_pane

0xe6d8,	// (0x0001b0ab) cell_ai5_widget_pane_g3_ParamLimits

0xe6f2,	// (0x0001b0c5) cell_ai5_widget_pane_g4_ParamLimits

0xe702,	// (0x0001b0d5) cell_ai5_widget_pane_g5_ParamLimits

0xe72b,	// (0x0001b0fe) cell_ai5_widget_pane_g8_ParamLimits

0xe72b,	// (0x0001b0fe) cell_ai5_widget_pane_g8

0xe73f,	// (0x0001b112) cell_ai5_widget_pane_g9_ParamLimits

0xe73f,	// (0x0001b112) cell_ai5_widget_pane_g9

0xe753,	// (0x0001b126) cell_ai5_widget_pane_g10_ParamLimits

0xe753,	// (0x0001b126) cell_ai5_widget_pane_g10

0xeaf2,	// (0x0001b4c5) status_icon_pane_g1

0x35e2,	// (0x0000ffb5) bg_popup_sub_pane_cp13

0xeafa,	// (0x0001b4cd) popup_keymap_window_t1

0x8afb,	// (0x000154ce) control_pane_g6_ParamLimits

0x8afb,	// (0x000154ce) control_pane_g6

0x8b08,	// (0x000154db) control_pane_g7_ParamLimits

0x8b08,	// (0x000154db) control_pane_g7

0x8b15,	// (0x000154e8) control_pane_g8_ParamLimits

0x8b15,	// (0x000154e8) control_pane_g8

0xea15,	// (0x0001b3e8) dt_sta_controll_pane_ParamLimits

0xea22,	// (0x0001b3f5) dt_sta_indi_pane_ParamLimits

0xea33,	// (0x0001b406) dt_sta_title_pane_ParamLimits

0x3e95,	// (0x00010868) aid_size_touch_scroll_bar_cale

0x4d50,	// (0x00011723) popup_discreet_window_ParamLimits

0x4d50,	// (0x00011723) popup_discreet_window

0x4dde,	// (0x000117b1) popup_sk_window

0x980d,	// (0x000161e0) bg_popup_sub_pane_cp28_ParamLimits

0x980d,	// (0x000161e0) bg_popup_sub_pane_cp28

0xeb08,	// (0x0001b4db) popup_discreet_window_g1_ParamLimits

0xeb08,	// (0x0001b4db) popup_discreet_window_g1

0xeb28,	// (0x0001b4fb) popup_discreet_window_t1_ParamLimits

0xeb28,	// (0x0001b4fb) popup_discreet_window_t1

0xeb46,	// (0x0001b519) popup_discreet_window_t2_ParamLimits

0xeb46,	// (0x0001b519) popup_discreet_window_t2

0x0002,

0xfe8e,	// (0x0001c861) popup_discreet_window_t_ParamLimits

0xfe8e,	// (0x0001c861) popup_discreet_window_t

0x6d7d,	// (0x00013750) popup_sk_window_g1

0x6d87,	// (0x0001375a) popup_sk_window_g2

0x0001,

0xfe95,	// (0x0001c868) popup_sk_window_g

0x6d8f,	// (0x00013762) popup_sk_window_t1

0x6d9d,	// (0x00013770) popup_sk_window_t1_copy1

0xe6c4,	// (0x0001b097) cell_ai5_widget_pane_g2_ParamLimits

0xe861,	// (0x0001b234) cell_ai5_widget_pane_t9_ParamLimits

0xe861,	// (0x0001b234) cell_ai5_widget_pane_t9

0x35e2,	// (0x0000ffb5) main_fep_fshwr2_pane

0x6dab,	// (0x0001377e) aid_fshwr2_btn_pane

0x6dbb,	// (0x0001378e) aid_fshwr2_syb_pane

0x6dcf,	// (0x000137a2) aid_fshwr2_txt_pane

0x6ddf,	// (0x000137b2) fshwr2_func_candi_pane

0x6dff,	// (0x000137d2) fshwr2_hwr_syb_pane

0x6e15,	// (0x000137e8) fshwr2_icf_pane

0x4c73,	// (0x00011646) fshwr2_icf_bg_pane

0x6e49,	// (0x0001381c) fshwr2_icf_pane_t1_ParamLimits

0x6e49,	// (0x0001381c) fshwr2_icf_pane_t1

0x8159,	// (0x00014b2c) fshwr2_func_candi_pane_g1

0xeb98,	// (0x0001b56b) fshwr2_func_candi_row_pane_ParamLimits

0xeb98,	// (0x0001b56b) fshwr2_func_candi_row_pane

0x6e61,	// (0x00013834) cell_fshwr2_syb_pane_ParamLimits

0x6e61,	// (0x00013834) cell_fshwr2_syb_pane

0x6e82,	// (0x00013855) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6e82,	// (0x00013855) fshwr2_hwr_syb_pane_g1

0x4c73,	// (0x00011646) bg_popup_call_pane_cp01

0x6e90,	// (0x00013863) fshwr2_func_candi_cell_pane_ParamLimits

0x6e90,	// (0x00013863) fshwr2_func_candi_cell_pane

0x9e84,	// (0x00016857) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9e84,	// (0x00016857) fshwr2_func_candi_cell_bg_pane

0x6ee1,	// (0x000138b4) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6ee1,	// (0x000138b4) fshwr2_func_candi_cell_pane_g1

0x6f0c,	// (0x000138df) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6f0c,	// (0x000138df) fshwr2_func_candi_cell_pane_t1

0x4c73,	// (0x00011646) bg_button_pane_cp08

0x8b52,	// (0x00015525) cell_fshwr2_syb_bg_pane

0x6f1f,	// (0x000138f2) cell_fshwr2_syb_bg_pane_g1

0x6f33,	// (0x00013906) cell_fshwr2_syb_bg_pane_t1

0x3fe6,	// (0x000109b9) main_tmo_pane

0xa331,	// (0x00016d04) uni_indicator_pane_g1_ParamLimits

0xa347,	// (0x00016d1a) uni_indicator_pane_g2_ParamLimits

0xa35d,	// (0x00016d30) uni_indicator_pane_g3_ParamLimits

0xa370,	// (0x00016d43) uni_indicator_pane_g4_ParamLimits

0xa370,	// (0x00016d43) uni_indicator_pane_g4

0xa384,	// (0x00016d57) uni_indicator_pane_g5_ParamLimits

0xa384,	// (0x00016d57) uni_indicator_pane_g5

0xa384,	// (0x00016d57) uni_indicator_pane_g6_ParamLimits

0xa384,	// (0x00016d57) uni_indicator_pane_g6

0xf8f5,	// (0x0001c2c8) uni_indicator_pane_g_ParamLimits

0xd4cf,	// (0x00019ea2) popup_tmo_note_window_ParamLimits

0xd4cf,	// (0x00019ea2) popup_tmo_note_window

0x65cf,	// (0x00012fa2) fshwr2_bg_pane

0x6efd,	// (0x000138d0) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6efd,	// (0x000138d0) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9a,	// (0x0001c86d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9a,	// (0x0001c86d) fshwr2_func_candi_cell_pane_g

0x6317,	// (0x00012cea) bg_popup_window_pane_cp01

0x6f49,	// (0x0001391c) bg_popup_window_pane_g1_cp01

0xebbb,	// (0x0001b58e) bg_popup_window_pane_cp22_ParamLimits

0xebbb,	// (0x0001b58e) bg_popup_window_pane_cp22

0xebc9,	// (0x0001b59c) listscroll_tmo_link_pane_ParamLimits

0xebc9,	// (0x0001b59c) listscroll_tmo_link_pane

0xec09,	// (0x0001b5dc) popup_tmo_note_window_g1_ParamLimits

0xec09,	// (0x0001b5dc) popup_tmo_note_window_g1

0xec16,	// (0x0001b5e9) tmo_note_info_pane_ParamLimits

0xec16,	// (0x0001b5e9) tmo_note_info_pane

0xec30,	// (0x0001b603) list_tmo_note_info_pane_g1_ParamLimits

0xec30,	// (0x0001b603) list_tmo_note_info_pane_g1

0xec47,	// (0x0001b61a) list_tmo_note_info_pane_g2_ParamLimits

0xec47,	// (0x0001b61a) list_tmo_note_info_pane_g2

0x0001,

0xfe9f,	// (0x0001c872) list_tmo_note_info_pane_g_ParamLimits

0xfe9f,	// (0x0001c872) list_tmo_note_info_pane_g

0xec63,	// (0x0001b636) list_tmo_note_info_text_pane_ParamLimits

0xec63,	// (0x0001b636) list_tmo_note_info_text_pane

0xece8,	// (0x0001b6bb) list_tmo_link_pane

0xecf5,	// (0x0001b6c8) scroll_pane_cp20

0xed02,	// (0x0001b6d5) list_single_tmo_link_pane_ParamLimits

0xed02,	// (0x0001b6d5) list_single_tmo_link_pane

0xed12,	// (0x0001b6e5) list_single_tmo_link_pane_t1

0xed20,	// (0x0001b6f3) list_tmo_note_info_text_pane_t1_ParamLimits

0xed20,	// (0x0001b6f3) list_tmo_note_info_text_pane_t1

0x7b86,	// (0x00014559) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7b86,	// (0x00014559) aid_size_touch_scroll_bar_cp01

0x7a6a,	// (0x0001443d) aid_size_touch_slider_marker

0x4dc6,	// (0x00011799) popup_settings_window_ParamLimits

0x4dc6,	// (0x00011799) popup_settings_window

0x8b86,	// (0x00015559) popup_candi_list_indi_window

0x8bd8,	// (0x000155ab) aid_touch_navi_pane_ParamLimits

0x6528,	// (0x00012efb) rs_clock_indi_pane

0x6531,	// (0x00012f04) sctrl_sk_bottom_pane_ParamLimits

0x6542,	// (0x00012f15) sctrl_sk_top_pane_ParamLimits

0x663f,	// (0x00013012) popup_fep_tooltip_window

0xe638,	// (0x0001b00b) aid_size_cell_widget_grid_ParamLimits

0xe6ad,	// (0x0001b080) cell_ai5_widget_pane_g1_ParamLimits

0xe6ad,	// (0x0001b080) cell_ai5_widget_pane_g1

0xe712,	// (0x0001b0e5) cell_ai5_widget_pane_g6_ParamLimits

0xe71f,	// (0x0001b0f2) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe13,	// (0x0001c7e6) cell_ai5_widget_pane_g_ParamLimits

0xfe13,	// (0x0001c7e6) cell_ai5_widget_pane_g

0xe890,	// (0x0001b263) cell_ai5_widget_pane_t10_ParamLimits

0xe890,	// (0x0001b263) cell_ai5_widget_pane_t10

0xe8d3,	// (0x0001b2a6) grid_ai5_widget_pane_ParamLimits

0xe971,	// (0x0001b344) cell_contacts_ai5_widget_pane_ParamLimits

0xe971,	// (0x0001b344) cell_contacts_ai5_widget_pane

0xeb5b,	// (0x0001b52e) popup_discreet_window_t3_ParamLimits

0xeb5b,	// (0x0001b52e) popup_discreet_window_t3

0x6e31,	// (0x00013804) popup_fshwr2_char_preview_window_ParamLimits

0x6e31,	// (0x00013804) popup_fshwr2_char_preview_window

0xec81,	// (0x0001b654) tmo_note_info_pane_t1

0xec96,	// (0x0001b669) tmo_note_info_pane_t2

0xecaf,	// (0x0001b682) tmo_note_info_pane_t3

0xecc4,	// (0x0001b697) tmo_note_info_pane_t4

0xecd6,	// (0x0001b6a9) tmo_note_info_pane_t5

0x0004,

0xfea4,	// (0x0001c877) tmo_note_info_pane_t

0xece8,	// (0x0001b6bb) list_tmo_link_pane_ParamLimits

0xecf5,	// (0x0001b6c8) scroll_pane_cp20_ParamLimits

0x4c73,	// (0x00011646) bg_popup_fep_char_preview_window_cp01

0xed39,	// (0x0001b70c) popup_fshwr2_char_preview_window_t1

0xed47,	// (0x0001b71a) popup_candi_list_indi_window_g1

0xed50,	// (0x0001b723) bg_cell_contacts_ai5_widget_pane

0xed5c,	// (0x0001b72f) cell_contacts_ai5_widget_pane_g1

0xed71,	// (0x0001b744) cell_contacts_ai5_widget_pane_g2

0xed7d,	// (0x0001b750) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaf,	// (0x0001c882) cell_contacts_ai5_widget_pane_g

0xed89,	// (0x0001b75c) cell_contacts_ai5_widget_pane_t1

0x3fe6,	// (0x000109b9) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee00,	// (0x0001b7d3) settings_container_pane

0x8823,	// (0x000151f6) listscroll_set_pane_copy1

0xb02c,	// (0x000179ff) scroll_pane_cp121_copy1

0xee0c,	// (0x0001b7df) set_content_pane_copy1

0xee14,	// (0x0001b7e7) aid_height_set_list_copy1_ParamLimits

0xee14,	// (0x0001b7e7) aid_height_set_list_copy1

0xa59c,	// (0x00016f6f) aid_size_parent_copy1_ParamLimits

0xa59c,	// (0x00016f6f) aid_size_parent_copy1

0xee20,	// (0x0001b7f3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee20,	// (0x0001b7f3) button_value_adjust_pane_cp6_copy1

0x8b52,	// (0x00015525) list_highlight_pane_cp2_copy1_ParamLimits

0x8b52,	// (0x00015525) list_highlight_pane_cp2_copy1

0xee34,	// (0x0001b807) list_set_pane_copy1_ParamLimits

0xee34,	// (0x0001b807) list_set_pane_copy1

0xed9b,	// (0x0001b76e) main_pane_set_t1_copy1_ParamLimits

0xed9b,	// (0x0001b76e) main_pane_set_t1_copy1

0xedd5,	// (0x0001b7a8) main_pane_set_t2_copy1_ParamLimits

0xedd5,	// (0x0001b7a8) main_pane_set_t2_copy1

0xeef5,	// (0x0001b8c8) main_pane_set_t3_copy1

0xef03,	// (0x0001b8d6) main_pane_set_t4_copy1

0xedf4,	// (0x0001b7c7) set_content_pane_g1_copy1_ParamLimits

0xedf4,	// (0x0001b7c7) set_content_pane_g1_copy1

0xef11,	// (0x0001b8e4) setting_code_pane_copy1

0xef19,	// (0x0001b8ec) setting_slider_graphic_pane_copy1

0xef19,	// (0x0001b8ec) setting_slider_pane_copy1

0xef21,	// (0x0001b8f4) setting_text_pane_copy1

0xef21,	// (0x0001b8f4) setting_volume_pane_copy1

0xef11,	// (0x0001b8e4) settings_code_pane_cp2_copy1

0xef29,	// (0x0001b8fc) settings_code_pane_cp_copy1_ParamLimits

0xef29,	// (0x0001b8fc) settings_code_pane_cp_copy1

0x6f52,	// (0x00013925) volume_set_pane_copy1

0xef3d,	// (0x0001b910) volume_set_pane_g10_copy1

0xef49,	// (0x0001b91c) volume_set_pane_g1_copy1

0xef53,	// (0x0001b926) volume_set_pane_g2_copy1

0xef5d,	// (0x0001b930) volume_set_pane_g3_copy1

0xef67,	// (0x0001b93a) volume_set_pane_g4_copy1

0xef71,	// (0x0001b944) volume_set_pane_g5_copy1

0xef7b,	// (0x0001b94e) volume_set_pane_g6_copy1

0xef85,	// (0x0001b958) volume_set_pane_g7_copy1

0xef8f,	// (0x0001b962) volume_set_pane_g8_copy1

0xef99,	// (0x0001b96c) volume_set_pane_g9_copy1

0x386e,	// (0x00010241) bg_set_opt_pane_cp_copy1_ParamLimits

0x386e,	// (0x00010241) bg_set_opt_pane_cp_copy1

0x6f5e,	// (0x00013931) setting_slider_pane_t1_copy1_ParamLimits

0x6f5e,	// (0x00013931) setting_slider_pane_t1_copy1

0x6f7d,	// (0x00013950) setting_slider_pane_t2_copy1_ParamLimits

0x6f7d,	// (0x00013950) setting_slider_pane_t2_copy1

0x6f97,	// (0x0001396a) setting_slider_pane_t3_copy1_ParamLimits

0x6f97,	// (0x0001396a) setting_slider_pane_t3_copy1

0x6faf,	// (0x00013982) slider_set_pane_copy1_ParamLimits

0x6faf,	// (0x00013982) slider_set_pane_copy1

0x40a1,	// (0x00010a74) set_opt_bg_pane_g1_copy2

0x40a9,	// (0x00010a7c) set_opt_bg_pane_g2_copy2

0xefa5,	// (0x0001b978) set_opt_bg_pane_g3_copy2

0x40b9,	// (0x00010a8c) set_opt_bg_pane_g4_copy2

0x40c1,	// (0x00010a94) set_opt_bg_pane_g5_copy2

0x40c9,	// (0x00010a9c) set_opt_bg_pane_g6_copy2

0xefaf,	// (0x0001b982) set_opt_bg_pane_g7_copy2

0xefb9,	// (0x0001b98c) set_opt_bg_pane_g8_copy2

0xefc3,	// (0x0001b996) set_opt_bg_pane_g9_copy2

0x6fc5,	// (0x00013998) aid_size_touch_slider_mark_copy1_ParamLimits

0x6fc5,	// (0x00013998) aid_size_touch_slider_mark_copy1

0xefcd,	// (0x0001b9a0) slider_set_pane_g1_copy1

0x6fd9,	// (0x000139ac) slider_set_pane_g2_copy1

0x5f42,	// (0x00012915) slider_set_pane_g3_copy1_ParamLimits

0x5f42,	// (0x00012915) slider_set_pane_g3_copy1

0x5f56,	// (0x00012929) slider_set_pane_g4_copy1_ParamLimits

0x5f56,	// (0x00012929) slider_set_pane_g4_copy1

0x5f6e,	// (0x00012941) slider_set_pane_g5_copy1_ParamLimits

0x5f6e,	// (0x00012941) slider_set_pane_g5_copy1

0x5f42,	// (0x00012915) slider_set_pane_g6_copy1_ParamLimits

0x5f42,	// (0x00012915) slider_set_pane_g6_copy1

0x6fe1,	// (0x000139b4) slider_set_pane_g7_copy1_ParamLimits

0x6fe1,	// (0x000139b4) slider_set_pane_g7_copy1

0x37b4,	// (0x00010187) bg_set_opt_pane_cp2_copy1

0xefd6,	// (0x0001b9a9) setting_slider_graphic_pane_g1_copy1

0xefdf,	// (0x0001b9b2) setting_slider_graphic_pane_t1_copy1

0xefef,	// (0x0001b9c2) setting_slider_graphic_pane_t2_copy1

0xefff,	// (0x0001b9d2) slider_set_pane_cp_copy1

0xf00f,	// (0x0001b9e2) input_focus_pane_cp1_copy1

0xf018,	// (0x0001b9eb) list_set_text_pane_copy1

0xf020,	// (0x0001b9f3) setting_text_pane_g1_copy1

0x391c,	// (0x000102ef) set_text_pane_t1_copy1

0xf00f,	// (0x0001b9e2) input_focus_pane_cp2_copy1

0xf020,	// (0x0001b9f3) setting_code_pane_g1_copy1

0xf029,	// (0x0001b9fc) setting_code_pane_t1_copy1

0xae31,	// (0x00017804) list_set_graphic_pane_copy1

0x37b4,	// (0x00010187) bg_set_opt_pane_cp4_copy1

0x850e,	// (0x00014ee1) list_set_graphic_pane_g1_copy1_ParamLimits

0x850e,	// (0x00014ee1) list_set_graphic_pane_g1_copy1

0xf037,	// (0x0001ba0a) list_set_graphic_pane_g2_copy1

0x8526,	// (0x00014ef9) list_set_graphic_pane_t1_copy1_ParamLimits

0x8526,	// (0x00014ef9) list_set_graphic_pane_t1_copy1

0xbc2e,	// (0x00018601) rs_clock_indi_pane_g1

0xf03f,	// (0x0001ba12) rs_clock_indi_pane_t1

0xf04d,	// (0x0001ba20) rs_indi_pane

0xf055,	// (0x0001ba28) rs_indi_pane_g1

0xf05e,	// (0x0001ba31) rs_indi_pane_g2

0xed47,	// (0x0001b71a) rs_indi_pane_g3

0x0002,

0xfeb6,	// (0x0001c889) rs_indi_pane_g

0x8823,	// (0x000151f6) bg_popup_preview_window_pane_cp03

0xf067,	// (0x0001ba3a) popup_fep_tooltip_window_t1

0xcb1f,	// (0x000194f2) popup_note2_window_g2_ParamLimits

0xcb1f,	// (0x000194f2) popup_note2_window_g2

0x0001,

0xfc43,	// (0x0001c616) popup_note2_window_g_ParamLimits

0xfc43,	// (0x0001c616) popup_note2_window_g

0xd122,	// (0x00019af5) bg_popup_sub_pane_cp11_ParamLimits

0xd12f,	// (0x00019b02) cell_ai3_links_pane_g1_ParamLimits

0xd146,	// (0x00019b19) cell_ai3_links_pane_t1

0x391c,	// (0x000102ef) set_text_pane_t1_copy1_ParamLimits

0x8721,	// (0x000150f4) cell_graphic_popup_pane_cp2_ParamLimits

0x8721,	// (0x000150f4) cell_graphic_popup_pane_cp2

0xf075,	// (0x0001ba48) cell_graphic_popup_pane_g1_cp2

0x3ca8,	// (0x0001067b) cell_graphic_popup_pane_g2_cp2

0xf07d,	// (0x0001ba50) cell_graphic_popup_pane_g3_cp2

0xf085,	// (0x0001ba58) cell_graphic_popup_pane_t2_cp2

0x3cb9,	// (0x0001068c) grid_highlight_pane_cp3_cp2

0x7e81,	// (0x00014854) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3fe6,	// (0x000109b9) main_tmo_pane_ParamLimits

0xd4c3,	// (0x00019e96) popup_tmo_big_image_note_window

0xe69c,	// (0x0001b06f) cell_ai5_widget_list_pane

0xe6a4,	// (0x0001b077) cell_ai5_widget_lrg_icon_pane

0xec81,	// (0x0001b654) tmo_note_info_pane_t1_ParamLimits

0xec96,	// (0x0001b669) tmo_note_info_pane_t2_ParamLimits

0xecaf,	// (0x0001b682) tmo_note_info_pane_t3_ParamLimits

0xecc4,	// (0x0001b697) tmo_note_info_pane_t4_ParamLimits

0xecd6,	// (0x0001b6a9) tmo_note_info_pane_t5_ParamLimits

0xfea4,	// (0x0001c877) tmo_note_info_pane_t_ParamLimits

0xee00,	// (0x0001b7d3) settings_container_pane_ParamLimits

0xf007,	// (0x0001b9da) indicator_popup_pane_cp5

0xf007,	// (0x0001b9da) indicator_popup_pane_cp6

0xae31,	// (0x00017804) list_set_graphic_pane_copy1_ParamLimits

0x35e2,	// (0x0000ffb5) bg_popup_window_pane_cp23

0xf093,	// (0x0001ba66) popup_tmo_big_image_note_window_g1

0xf09f,	// (0x0001ba72) popup_tmo_big_image_note_window_t1

0xf0af,	// (0x0001ba82) popup_tmo_big_image_note_window_t2

0xf0bf,	// (0x0001ba92) popup_tmo_big_image_note_window_t3

0x0002,

0xfebd,	// (0x0001c890) popup_tmo_big_image_note_window_t

0xbc2e,	// (0x00018601) cell_ai5_widget_lrg_icon_pane_g1

0xf0cf,	// (0x0001baa2) cell_ai5_widget_lrg_icon_pane_t1

0xf0dd,	// (0x0001bab0) cell_ai5_widget_list_row_pane_ParamLimits

0xf0dd,	// (0x0001bab0) cell_ai5_widget_list_row_pane

0xf0f5,	// (0x0001bac8) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0f5,	// (0x0001bac8) cell_ai5_widget_list_row_pane_g1

0xf102,	// (0x0001bad5) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf102,	// (0x0001bad5) cell_ai5_widget_list_row_pane_t1

0xf12d,	// (0x0001bb00) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf12d,	// (0x0001bb00) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec4,	// (0x0001c897) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec4,	// (0x0001c897) cell_ai5_widget_list_row_pane_t

0x4c73,	// (0x00011646) main_fep_vtchi_ss_pane

0xf17d,	// (0x0001bb50) popup_fep_char_pre_window

0xf185,	// (0x0001bb58) popup_fep_ituss_window

0xf1b7,	// (0x0001bb8a) popup_fep_vkbss_window

0x8b52,	// (0x00015525) grid_vkbss_keypad_pane_ParamLimits

0x8b52,	// (0x00015525) grid_vkbss_keypad_pane

0xf1ff,	// (0x0001bbd2) ituss_keypad_pane

0x7022,	// (0x000139f5) aid_vkbss_key_offset_ParamLimits

0x7022,	// (0x000139f5) aid_vkbss_key_offset

0x702e,	// (0x00013a01) cell_vkbss_key_pane_ParamLimits

0x702e,	// (0x00013a01) cell_vkbss_key_pane

0xf20b,	// (0x0001bbde) bg_cell_vkbss_key_g1_ParamLimits

0xf20b,	// (0x0001bbde) bg_cell_vkbss_key_g1

0xf217,	// (0x0001bbea) cell_vkbss_key_3p_pane_ParamLimits

0xf217,	// (0x0001bbea) cell_vkbss_key_3p_pane

0xf24d,	// (0x0001bc20) cell_vkbss_key_g1_ParamLimits

0xf24d,	// (0x0001bc20) cell_vkbss_key_g1

0xf283,	// (0x0001bc56) cell_vkbss_key_t1_ParamLimits

0xf283,	// (0x0001bc56) cell_vkbss_key_t1

0x7090,	// (0x00013a63) cell_ituss_key_pane_ParamLimits

0x7090,	// (0x00013a63) cell_ituss_key_pane

0xf2df,	// (0x0001bcb2) bg_cell_ituss_key_g1_ParamLimits

0xf2df,	// (0x0001bcb2) bg_cell_ituss_key_g1

0xf2eb,	// (0x0001bcbe) cell_ituss_key_pane_g1_ParamLimits

0xf2eb,	// (0x0001bcbe) cell_ituss_key_pane_g1

0x70a1,	// (0x00013a74) cell_ituss_key_pane_g2_ParamLimits

0x70a1,	// (0x00013a74) cell_ituss_key_pane_g2

0x0005,

0xfecb,	// (0x0001c89e) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x0001c89e) cell_ituss_key_pane_g

0x7125,	// (0x00013af8) cell_ituss_key_t1_ParamLimits

0x7125,	// (0x00013af8) cell_ituss_key_t1

0x715f,	// (0x00013b32) cell_ituss_key_t2_ParamLimits

0x715f,	// (0x00013b32) cell_ituss_key_t2

0x7191,	// (0x00013b64) cell_ituss_key_t3_ParamLimits

0x7191,	// (0x00013b64) cell_ituss_key_t3

0x71c2,	// (0x00013b95) cell_ituss_key_t4_ParamLimits

0x71c2,	// (0x00013b95) cell_ituss_key_t4

0x0005,

0xfed8,	// (0x0001c8ab) cell_ituss_key_t_ParamLimits

0xfed8,	// (0x0001c8ab) cell_ituss_key_t

0xf311,	// (0x0001bce4) cell_vkbss_key_3p_pane_g1

0xf319,	// (0x0001bcec) cell_vkbss_key_3p_pane_g2

0xf321,	// (0x0001bcf4) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0001c8b8) cell_vkbss_key_3p_pane_g

0x8823,	// (0x000151f6) bg_popup_fep_char_preview_window_cp02

0xf329,	// (0x0001bcfc) popup_fep_char_pre_window_t1

0xe625,	// (0x0001aff8) main_ai5_sk_pane

0xed50,	// (0x0001b723) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed5c,	// (0x0001b72f) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xed71,	// (0x0001b744) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed7d,	// (0x0001b750) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaf,	// (0x0001c882) cell_contacts_ai5_widget_pane_g_ParamLimits

0xed89,	// (0x0001b75c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3fe6,	// (0x000109b9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf337,	// (0x0001bd0a) main_ai5_sk_pane_g1

0x9645,	// (0x00016018) popup_query_code_window_g1

0xf19e,	// (0x0001bb71) popup_fep_vkb_icf_pane

0xf1d3,	// (0x0001bba6) popup_fep_vtchi_icf_pane

0xf340,	// (0x0001bd13) bg_icf_pane

0xf340,	// (0x0001bd13) list_vkb_icf_pane

0xf34c,	// (0x0001bd1f) bg_icf_pane_cp01

0xf35f,	// (0x0001bd32) vtchi_icf_list_pane

0xf3bf,	// (0x0001bd92) list_vkb_icf_pane_t1_ParamLimits

0xf3bf,	// (0x0001bd92) list_vkb_icf_pane_t1

0xf3d8,	// (0x0001bdab) vtchi_icf_list_pane_t1_ParamLimits

0xf3d8,	// (0x0001bdab) vtchi_icf_list_pane_t1

0xf185,	// (0x0001bb58) popup_fep_ituss_window_ParamLimits

0xf1d3,	// (0x0001bba6) popup_fep_vtchi_icf_pane_ParamLimits

0xf1ff,	// (0x0001bbd2) ituss_keypad_pane_ParamLimits

0x7018,	// (0x000139eb) ituss_sks_pane

0xf340,	// (0x0001bd13) bg_icf_pane_ParamLimits

0xf155,	// (0x0001bb28) icf_edit_indi_pane_ParamLimits

0xf155,	// (0x0001bb28) icf_edit_indi_pane

0xf340,	// (0x0001bd13) list_vkb_icf_pane_ParamLimits

0xf34c,	// (0x0001bd1f) bg_icf_pane_cp01_ParamLimits

0xf170,	// (0x0001bb43) icf_edit_indi_pane_cp01_ParamLimits

0xf170,	// (0x0001bb43) icf_edit_indi_pane_cp01

0xf35f,	// (0x0001bd32) vtchi_query_pane

0xe4c3,	// (0x0001ae96) icf_edit_indi_pane_g1_ParamLimits

0xe4c3,	// (0x0001ae96) icf_edit_indi_pane_g1

0xf448,	// (0x0001be1b) icf_edit_indi_pane_g2_ParamLimits

0xf448,	// (0x0001be1b) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001c8e3) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001c8e3) icf_edit_indi_pane_g

0xf45c,	// (0x0001be2f) icf_edit_indi_pane_t1

0xf3f1,	// (0x0001bdc4) bg_input_focus_pane_cp042

0x3e8c,	// (0x0001085f) vtchi_button_pane

0xf3fa,	// (0x0001bdcd) vtchi_query_pane_t1

0xf408,	// (0x0001bddb) vtchi_query_pane_t2

0xf416,	// (0x0001bde9) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001c8d2) vtchi_query_pane_t

0x4c73,	// (0x00011646) bg_button_pane_cp13

0xf424,	// (0x0001bdf7) vtchi_button_pane_g1

0x7243,	// (0x00013c16) ituss_sks_pane_g1

0x724e,	// (0x00013c21) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001c8d9) ituss_sks_pane_g

0xf42c,	// (0x0001bdff) ituss_sks_pane_t1

0xf43a,	// (0x0001be0d) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001c8de) ituss_sks_pane_t

0xb6b6,	// (0x00018089) indicator_nsta_pane_cp_g1

0xb6bf,	// (0x00018092) indicator_nsta_pane_cp_g2

0xb6c7,	// (0x0001809a) indicator_nsta_pane_cp_g3

0xb6cf,	// (0x000180a2) indicator_nsta_pane_cp_g4

0xb6bf,	// (0x00018092) indicator_nsta_pane_cp_g5

0xb6c7,	// (0x0001809a) indicator_nsta_pane_cp_g6

0x0005,

0xfa81,	// (0x0001c454) indicator_nsta_pane_cp_g

0xe1e9,	// (0x0001abbc) cell_graphic2_pane_t2_ParamLimits

0xe1e9,	// (0x0001abbc) cell_graphic2_pane_t2

0x0001,

0xfd9a,	// (0x0001c76d) cell_graphic2_pane_t_ParamLimits

0xfd9a,	// (0x0001c76d) cell_graphic2_pane_t

0xe215,	// (0x0001abe8) cell_graphic2_control_pane_t1

0x8236,	// (0x00014c09) signal_pane_g3_ParamLimits

0x8236,	// (0x00014c09) signal_pane_g3

0x8245,	// (0x00014c18) signal_pane_g4_ParamLimits

0x8245,	// (0x00014c18) signal_pane_g4

0xf13f,	// (0x0001bb12) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf13f,	// (0x0001bb12) cell_ai5_widget_list_row_pane_t3

0xf2ff,	// (0x0001bcd2) cell_ituss_key_pane_t1_ParamLimits

0xf2ff,	// (0x0001bcd2) cell_ituss_key_pane_t1

0x927d,	// (0x00015c50) form_field_data_wide_pane_vc_t2_ParamLimits

0x927d,	// (0x00015c50) form_field_data_wide_pane_vc_t2

0x9291,	// (0x00015c64) form_field_data_wide_pane_vc_t3_ParamLimits

0x9291,	// (0x00015c64) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x0001c1b0) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x0001c1b0) form_field_data_wide_pane_vc_t

0xb353,	// (0x00017d26) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb353,	// (0x00017d26) form_field_slider_wide_pane_vc_t3

0xb429,	// (0x00017dfc) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb429,	// (0x00017dfc) form_field_popup_wide_pane_vc_t2

0xb440,	// (0x00017e13) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb440,	// (0x00017e13) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa70,	// (0x0001c443) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa70,	// (0x0001c443) form_field_popup_wide_pane_vc_t

0x6dab,	// (0x0001377e) aid_fshwr2_btn_pane_ParamLimits

0x6dbb,	// (0x0001378e) aid_fshwr2_syb_pane_ParamLimits

0x6dcf,	// (0x000137a2) aid_fshwr2_txt_pane_ParamLimits

0x65cf,	// (0x00012fa2) fshwr2_bg_pane_ParamLimits

0x6ddf,	// (0x000137b2) fshwr2_func_candi_pane_ParamLimits

0x6dff,	// (0x000137d2) fshwr2_hwr_syb_pane_ParamLimits

0x6e15,	// (0x000137e8) fshwr2_icf_pane_ParamLimits

0xb2c2,	// (0x00017c95) list_double_graphic_pane_vc_g4_ParamLimits

0xb2c2,	// (0x00017c95) list_double_graphic_pane_vc_g4

0x70c1,	// (0x00013a94) cell_ituss_key_pane_g3_ParamLimits

0x70c1,	// (0x00013a94) cell_ituss_key_pane_g3

0x71f3,	// (0x00013bc6) cell_ituss_key_t5_ParamLimits

0x71f3,	// (0x00013bc6) cell_ituss_key_t5

0xf1b7,	// (0x0001bb8a) popup_fep_vkbss_window_ParamLimits

0xe62f,	// (0x0001b002) aid_cell_ai5_quarter

0xf45c,	// (0x0001be2f) icf_edit_indi_pane_t1_ParamLimits

0x3aec,	// (0x000104bf) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x3aec,	// (0x000104bf) aid_tch_indicator_popup_pane_cp2

0x3aff,	// (0x000104d2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x3aff,	// (0x000104d2) aid_tch_query_popup_data_pane_cp2

0x95ed,	// (0x00015fc0) aid_tch_query_popup_pane_ParamLimits

0x95ed,	// (0x00015fc0) aid_tch_query_popup_pane

0x95ed,	// (0x00015fc0) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x95ed,	// (0x00015fc0) aid_tch_query_popup_data_pane_cp1

0x8b52,	// (0x00015525) cell_fshwr2_syb_bg_pane_ParamLimits

0x6f1f,	// (0x000138f2) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x6f33,	// (0x00013906) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf19e,	// (0x0001bb71) popup_fep_vkb_icf_pane_ParamLimits

0x6bf1,	// (0x000135c4) bg_popup_fep_char_preview_window_g10

0xe767,	// (0x0001b13a) cell_ai5_widget_pane_g11_ParamLimits

0xe767,	// (0x0001b13a) cell_ai5_widget_pane_g11

0xe773,	// (0x0001b146) cell_ai5_widget_pane_g12_ParamLimits

0xe773,	// (0x0001b146) cell_ai5_widget_pane_g12

0xe77f,	// (0x0001b152) cell_ai5_widget_pane_g13_ParamLimits

0xe77f,	// (0x0001b152) cell_ai5_widget_pane_g13

0xe8af,	// (0x0001b282) cell_ai5_widget_pane_t11_ParamLimits

0xe8af,	// (0x0001b282) cell_ai5_widget_pane_t11

0xe8c1,	// (0x0001b294) cell_ai5_widget_pane_t12_ParamLimits

0xe8c1,	// (0x0001b294) cell_ai5_widget_pane_t12

0x70cd,	// (0x00013aa0) cell_ituss_key_pane_g4_ParamLimits

0x70cd,	// (0x00013aa0) cell_ituss_key_pane_g4

0x70e9,	// (0x00013abc) cell_ituss_key_pane_g5_ParamLimits

0x70e9,	// (0x00013abc) cell_ituss_key_pane_g5

0x7105,	// (0x00013ad8) cell_ituss_key_pane_g6_ParamLimits

0x7105,	// (0x00013ad8) cell_ituss_key_pane_g6

0x90c4,	// (0x00015a97) bg_icf_pane_g1

0xf367,	// (0x0001bd3a) bg_icf_pane_g2

0xf373,	// (0x0001bd46) bg_icf_pane_g3

0xf37d,	// (0x0001bd50) bg_icf_pane_g4

0xf389,	// (0x0001bd5c) bg_icf_pane_g5

0xf393,	// (0x0001bd66) bg_icf_pane_g6

0xf39f,	// (0x0001bd72) bg_icf_pane_g7

0xf3a9,	// (0x0001bd7c) bg_icf_pane_g8

0xf3b5,	// (0x0001bd88) bg_icf_pane_g9

0x0008,

0xfeec,	// (0x0001c8bf) bg_icf_pane_g

0xf1ec,	// (0x0001bbbf) popup_hyb_candi_window_ParamLimits

0xf1ec,	// (0x0001bbbf) popup_hyb_candi_window

0x91ec,	// (0x00015bbf) bg_popup_sub_pane_cp01_ParamLimits

0x91ec,	// (0x00015bbf) bg_popup_sub_pane_cp01

0xf475,	// (0x0001be48) entry_hyb_candi_pane_ParamLimits

0xf475,	// (0x0001be48) entry_hyb_candi_pane

0xf484,	// (0x0001be57) grid_hyb_candi_pane_ParamLimits

0xf484,	// (0x0001be57) grid_hyb_candi_pane

0xf499,	// (0x0001be6c) grid_hyb_phrase_pane_ParamLimits

0xf499,	// (0x0001be6c) grid_hyb_phrase_pane

0xf4a8,	// (0x0001be7b) cell_hyb_candi_pane_ParamLimits

0xf4a8,	// (0x0001be7b) cell_hyb_candi_pane

0x3e95,	// (0x00010868) cell_hyb_candi_scroll_pane

0x8159,	// (0x00014b2c) cell_hyb_candi_pane_g1

0xf4c4,	// (0x0001be97) cell_hyb_candi_pane_t1

0xf4d2,	// (0x0001bea5) cell_hyb_phrase_pane

0x8159,	// (0x00014b2c) cell_hyb_phrase_pane_g1

0xf4db,	// (0x0001beae) cell_hyb_phrase_pane_t1

0xf4e9,	// (0x0001bebc) entry_hyb_candi_pane_t1

0x8823,	// (0x000151f6) input_focus_pane_cp06

0xf4f7,	// (0x0001beca) cell_hyb_candi_scroll_pane_g1

0xf4ff,	// (0x0001bed2) cell_hyb_candi_scroll_pane_g1_aid

0xf507,	// (0x0001beda) cell_hyb_candi_scroll_pane_g2

0xf50f,	// (0x0001bee2) cell_hyb_candi_scroll_pane_g2_aid

0xf517,	// (0x0001beea) cell_hyb_candi_scroll_pane_g3

0xf51f,	// (0x0001bef2) cell_hyb_candi_scroll_pane_g4

0xe584,	// (0x0001af57) ai5_page_g1

0x7205,	// (0x00013bd8) cell_ituss_key_t6_ParamLimits

0x7205,	// (0x00013bd8) cell_ituss_key_t6

0x6ff7,	// (0x000139ca) icf_edit_indi_pane_cp02_ParamLimits

0x6ff7,	// (0x000139ca) icf_edit_indi_pane_cp02

0x700b,	// (0x000139de) icf_edit_indi_pane_cp03_ParamLimits

0x700b,	// (0x000139de) icf_edit_indi_pane_cp03
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_av_vga4_prt_tch_Normal

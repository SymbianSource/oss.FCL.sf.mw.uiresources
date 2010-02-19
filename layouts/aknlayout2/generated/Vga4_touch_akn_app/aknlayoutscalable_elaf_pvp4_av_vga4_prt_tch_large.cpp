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

#include "aknlayoutscalable_elaf_pvp4_av_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0003ce82 };

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
0x7604,	// (0x00044486) Screen

0x7610,	// (0x00044492) application_window_ParamLimits

0x7610,	// (0x00044492) application_window

0x2c7f,	// (0x0003fb01) screen_g1

0x58f3,	// (0x00042775) area_bottom_pane_ParamLimits

0x58f3,	// (0x00042775) area_bottom_pane

0x59b3,	// (0x00042835) area_top_pane_ParamLimits

0x59b3,	// (0x00042835) area_top_pane

0x5a47,	// (0x000428c9) main_pane_ParamLimits

0x5a47,	// (0x000428c9) main_pane

0x2c89,	// (0x0003fb0b) misc_graphics

0x962d,	// (0x000464af) battery_pane_ParamLimits

0x962d,	// (0x000464af) battery_pane

0xa315,	// (0x00047197) bg_status_flat_pane_g8

0xa31d,	// (0x0004719f) bg_status_flat_pane_g9

0x96f5,	// (0x00046577) context_pane_ParamLimits

0x96f5,	// (0x00046577) context_pane

0x9819,	// (0x0004669b) navi_pane_ParamLimits

0x9819,	// (0x0004669b) navi_pane

0x98a9,	// (0x0004672b) signal_pane_ParamLimits

0x98a9,	// (0x0004672b) signal_pane

0x0008,

0xf88f,	// (0x0004c711) bg_status_flat_pane_g

0x9916,	// (0x00046798) status_pane_g1_ParamLimits

0x9916,	// (0x00046798) status_pane_g1

0x992a,	// (0x000467ac) status_pane_g2_ParamLimits

0x992a,	// (0x000467ac) status_pane_g2

0x9936,	// (0x000467b8) status_pane_g3_ParamLimits

0x9936,	// (0x000467b8) status_pane_g3

0x0004,

0xf7bd,	// (0x0004c63f) status_pane_g_ParamLimits

0xf7bd,	// (0x0004c63f) status_pane_g

0x996a,	// (0x000467ec) title_pane_ParamLimits

0x996a,	// (0x000467ec) title_pane

0x99a7,	// (0x00046829) uni_indicator_pane_ParamLimits

0x99a7,	// (0x00046829) uni_indicator_pane

0x8f22,	// (0x00045da4) bg_list_pane_ParamLimits

0x8f22,	// (0x00045da4) bg_list_pane

0x8f42,	// (0x00045dc4) find_pane

0x8f4a,	// (0x00045dcc) listscroll_app_pane_ParamLimits

0x8f4a,	// (0x00045dcc) listscroll_app_pane

0x8f56,	// (0x00045dd8) listscroll_form_pane

0x8f5e,	// (0x00045de0) listscroll_gen_pane_ParamLimits

0x8f5e,	// (0x00045de0) listscroll_gen_pane

0x8f56,	// (0x00045dd8) listscroll_set_pane

0x8174,	// (0x00044ff6) main_idle_act_pane

0x8c06,	// (0x00045a88) main_idle_trad_pane

0x8c06,	// (0x00045a88) main_list_empty_pane

0x8f84,	// (0x00045e06) main_midp_pane

0x8f90,	// (0x00045e12) main_pane_g1_ParamLimits

0x8f90,	// (0x00045e12) main_pane_g1

0x8f9e,	// (0x00045e20) popup_ai_message_window_ParamLimits

0x8f9e,	// (0x00045e20) popup_ai_message_window

0x904e,	// (0x00045ed0) popup_fep_china_uni_window_ParamLimits

0x904e,	// (0x00045ed0) popup_fep_china_uni_window

0x90ae,	// (0x00045f30) popup_fep_japan_candidate_window_ParamLimits

0x90ae,	// (0x00045f30) popup_fep_japan_candidate_window

0x90d8,	// (0x00045f5a) popup_fep_japan_predictive_window_ParamLimits

0x90d8,	// (0x00045f5a) popup_fep_japan_predictive_window

0x910e,	// (0x00045f90) popup_find_window

0x911b,	// (0x00045f9d) popup_grid_graphic_window_ParamLimits

0x911b,	// (0x00045f9d) popup_grid_graphic_window

0x9149,	// (0x00045fcb) popup_large_graphic_colour_window

0x916f,	// (0x00045ff1) popup_menu_window_ParamLimits

0x916f,	// (0x00045ff1) popup_menu_window

0x9339,	// (0x000461bb) popup_note_image_window

0x9323,	// (0x000461a5) popup_note_wait_window_ParamLimits

0x9323,	// (0x000461a5) popup_note_wait_window

0x9323,	// (0x000461a5) popup_note_window_ParamLimits

0x9323,	// (0x000461a5) popup_note_window

0x939f,	// (0x00046221) popup_query_code_window_ParamLimits

0x939f,	// (0x00046221) popup_query_code_window

0x93b5,	// (0x00046237) popup_query_data_code_window_ParamLimits

0x93b5,	// (0x00046237) popup_query_data_code_window

0x93d8,	// (0x0004625a) popup_query_data_window_ParamLimits

0x93d8,	// (0x0004625a) popup_query_data_window

0x93fa,	// (0x0004627c) popup_query_sat_info_window_ParamLimits

0x93fa,	// (0x0004627c) popup_query_sat_info_window

0x9439,	// (0x000462bb) popup_snote_single_graphic_window_ParamLimits

0x9439,	// (0x000462bb) popup_snote_single_graphic_window

0x9439,	// (0x000462bb) popup_snote_single_text_window_ParamLimits

0x9439,	// (0x000462bb) popup_snote_single_text_window

0x9450,	// (0x000462d2) popup_sub_window_general

0x9596,	// (0x00046418) popup_window_general_ParamLimits

0x9596,	// (0x00046418) popup_window_general

0x95af,	// (0x00046431) power_save_pane

0x6285,	// (0x00043107) control_pane_g1_ParamLimits

0x6285,	// (0x00043107) control_pane_g1

0x62ae,	// (0x00043130) control_pane_g2_ParamLimits

0x62ae,	// (0x00043130) control_pane_g2

0x8ed3,	// (0x00045d55) control_pane_g3_ParamLimits

0x8ed3,	// (0x00045d55) control_pane_g3

0x0007,

0xf7a5,	// (0x0004c627) control_pane_g_ParamLimits

0xf7a5,	// (0x0004c627) control_pane_g

0x62f6,	// (0x00043178) control_pane_t1_ParamLimits

0x62f6,	// (0x00043178) control_pane_t1

0x6342,	// (0x000431c4) control_pane_t2_ParamLimits

0x6342,	// (0x000431c4) control_pane_t2

0x0002,

0xf7b6,	// (0x0004c638) control_pane_t_ParamLimits

0xf7b6,	// (0x0004c638) control_pane_t

0x8df4,	// (0x00045c76) navi_navi_volume_pane_cp1

0x8dfd,	// (0x00045c7f) status_small_icon_pane

0x8e05,	// (0x00045c87) status_small_pane_g1_ParamLimits

0x8e05,	// (0x00045c87) status_small_pane_g1

0x8e39,	// (0x00045cbb) status_small_pane_g2_ParamLimits

0x8e39,	// (0x00045cbb) status_small_pane_g2

0x8e45,	// (0x00045cc7) status_small_pane_g3_ParamLimits

0x8e45,	// (0x00045cc7) status_small_pane_g3

0x8e51,	// (0x00045cd3) status_small_pane_g4_ParamLimits

0x8e51,	// (0x00045cd3) status_small_pane_g4

0x8e5d,	// (0x00045cdf) status_small_pane_g5_ParamLimits

0x8e5d,	// (0x00045cdf) status_small_pane_g5

0x8e6c,	// (0x00045cee) status_small_pane_g6_ParamLimits

0x8e6c,	// (0x00045cee) status_small_pane_g6

0x0007,

0xf794,	// (0x0004c616) status_small_pane_g_ParamLimits

0xf794,	// (0x0004c616) status_small_pane_g

0x8e9c,	// (0x00045d1e) status_small_pane_t1

0x8ebf,	// (0x00045d41) status_small_wait_pane_ParamLimits

0x8ebf,	// (0x00045d41) status_small_wait_pane

0x8677,	// (0x000454f9) aid_levels_signal_ParamLimits

0x8677,	// (0x000454f9) aid_levels_signal

0x8689,	// (0x0004550b) signal_pane_g1_ParamLimits

0x8689,	// (0x0004550b) signal_pane_g1

0x869e,	// (0x00045520) signal_pane_g2_ParamLimits

0x869e,	// (0x00045520) signal_pane_g2

0x0003,

0xf725,	// (0x0004c5a7) signal_pane_g_ParamLimits

0xf725,	// (0x0004c5a7) signal_pane_g

0x86d9,	// (0x0004555b) context_pane_g1

0x7620,	// (0x000444a2) title_pane_g1

0x764a,	// (0x000444cc) title_pane_t1

0x76b2,	// (0x00044534) title_pane_t2

0x76d8,	// (0x0004455a) title_pane_t3

0x0002,

0xf56f,	// (0x0004c3f1) title_pane_t

0x99bf,	// (0x00046841) aid_levels_battery_ParamLimits

0x99bf,	// (0x00046841) aid_levels_battery

0x99d3,	// (0x00046855) battery_pane_g1_ParamLimits

0x99d3,	// (0x00046855) battery_pane_g1

0x99e9,	// (0x0004686b) battery_pane_g2_ParamLimits

0x99e9,	// (0x0004686b) battery_pane_g2

0x0001,

0xf7c8,	// (0x0004c64a) battery_pane_g_ParamLimits

0xf7c8,	// (0x0004c64a) battery_pane_g

0xac65,	// (0x00047ae7) uni_indicator_pane_g1

0xac7a,	// (0x00047afc) uni_indicator_pane_g2

0xac90,	// (0x00047b12) uni_indicator_pane_g3

0x0005,

0xf937,	// (0x0004c7b9) uni_indicator_pane_g

0x8a74,	// (0x000458f6) navi_icon_pane_ParamLimits

0x8a74,	// (0x000458f6) navi_icon_pane

0x89bb,	// (0x0004583d) navi_midp_pane

0x8a90,	// (0x00045912) navi_navi_pane

0x8a9a,	// (0x0004591c) navi_text_pane_ParamLimits

0x8a9a,	// (0x0004591c) navi_text_pane

0x2c7f,	// (0x0003fb01) status_small_wait_pane_g1

0x7b1c,	// (0x0004499e) status_small_wait_pane_g2

0x0001,

0xf932,	// (0x0004c7b4) status_small_wait_pane_g

0xa978,	// (0x000477fa) navi_navi_icon_text_pane

0xa980,	// (0x00047802) navi_navi_pane_g1_ParamLimits

0xa980,	// (0x00047802) navi_navi_pane_g1

0xa992,	// (0x00047814) navi_navi_pane_g2_ParamLimits

0xa992,	// (0x00047814) navi_navi_pane_g2

0x0001,

0xf900,	// (0x0004c782) navi_navi_pane_g_ParamLimits

0xf900,	// (0x0004c782) navi_navi_pane_g

0xa9a4,	// (0x00047826) navi_navi_tabs_pane

0xa9ad,	// (0x0004782f) navi_navi_text_pane

0xa978,	// (0x000477fa) navi_navi_volume_pane

0xa951,	// (0x000477d3) navi_text_pane_t1

0xa942,	// (0x000477c4) navi_icon_pane_g1

0xa895,	// (0x00047717) navi_navi_text_pane_t1

0x666b,	// (0x000434ed) navi_navi_volume_pane_g1

0x6673,	// (0x000434f5) volume_small_pane

0xa7fb,	// (0x0004767d) navi_navi_icon_text_pane_g1

0xa803,	// (0x00047685) navi_navi_icon_text_pane_t1

0x8a90,	// (0x00045912) navi_tabs_2_long_pane

0x8a90,	// (0x00045912) navi_tabs_2_pane

0x8a90,	// (0x00045912) navi_tabs_3_long_pane

0x8a90,	// (0x00045912) navi_tabs_3_pane

0x8a90,	// (0x00045912) navi_tabs_4_pane

0x664b,	// (0x000434cd) tabs_2_active_pane_ParamLimits

0x664b,	// (0x000434cd) tabs_2_active_pane

0x665b,	// (0x000434dd) tabs_2_passive_pane_ParamLimits

0x665b,	// (0x000434dd) tabs_2_passive_pane

0x6619,	// (0x0004349b) tabs_3_active_pane_ParamLimits

0x6619,	// (0x0004349b) tabs_3_active_pane

0x6629,	// (0x000434ab) tabs_3_passive_pane_ParamLimits

0x6629,	// (0x000434ab) tabs_3_passive_pane

0x663a,	// (0x000434bc) tabs_3_passive_pane_cp_ParamLimits

0x663a,	// (0x000434bc) tabs_3_passive_pane_cp

0x65cd,	// (0x0004344f) tabs_4_active_pane_ParamLimits

0x65cd,	// (0x0004344f) tabs_4_active_pane

0x65e0,	// (0x00043462) tabs_4_passive_pane_ParamLimits

0x65e0,	// (0x00043462) tabs_4_passive_pane

0x65f1,	// (0x00043473) tabs_4_passive_pane_cp_ParamLimits

0x65f1,	// (0x00043473) tabs_4_passive_pane_cp

0x6602,	// (0x00043484) tabs_4_passive_pane_cp2_ParamLimits

0x6602,	// (0x00043484) tabs_4_passive_pane_cp2

0x65a9,	// (0x0004342b) tabs_2_long_active_pane_ParamLimits

0x65a9,	// (0x0004342b) tabs_2_long_active_pane

0x65bb,	// (0x0004343d) tabs_2_long_passive_pane_ParamLimits

0x65bb,	// (0x0004343d) tabs_2_long_passive_pane

0x656a,	// (0x000433ec) tabs_3_long_active_pane_ParamLimits

0x656a,	// (0x000433ec) tabs_3_long_active_pane

0x657d,	// (0x000433ff) tabs_3_long_passive_pane_ParamLimits

0x657d,	// (0x000433ff) tabs_3_long_passive_pane

0x6596,	// (0x00043418) tabs_3_long_passive_pane_cp_ParamLimits

0x6596,	// (0x00043418) tabs_3_long_passive_pane_cp

0x6510,	// (0x00043392) volume_small_pane_g1

0x6519,	// (0x0004339b) volume_small_pane_g2

0x6522,	// (0x000433a4) volume_small_pane_g3

0x652b,	// (0x000433ad) volume_small_pane_g4

0x6534,	// (0x000433b6) volume_small_pane_g5

0x653d,	// (0x000433bf) volume_small_pane_g6

0x6546,	// (0x000433c8) volume_small_pane_g7

0x654f,	// (0x000433d1) volume_small_pane_g8

0x6558,	// (0x000433da) volume_small_pane_g9

0x6561,	// (0x000433e3) volume_small_pane_g10

0x0009,

0xf8cc,	// (0x0004c74e) volume_small_pane_g

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp2_ParamLimits

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp2

0x76f8,	// (0x0004457a) tabs_3_active_pane_g1

0x7700,	// (0x00044582) tabs_3_active_pane_t1

0x76ea,	// (0x0004456c) bg_passive_tab_pane_cp2_ParamLimits

0x76ea,	// (0x0004456c) bg_passive_tab_pane_cp2

0x76f8,	// (0x0004457a) tabs_3_passive_pane_g1

0x7700,	// (0x00044582) tabs_3_passive_pane_t1

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp3_ParamLimits

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp3

0x7712,	// (0x00044594) tabs_4_active_pane_g1

0x771a,	// (0x0004459c) tabs_4_active_pane_t1

0x76ea,	// (0x0004456c) bg_passive_tab_pane_cp3_ParamLimits

0x76ea,	// (0x0004456c) bg_passive_tab_pane_cp3

0x7712,	// (0x00044594) tabs_4_1_passive_pane_g1

0x771a,	// (0x0004459c) tabs_4_1_passive_pane_t1

0x8f84,	// (0x00045e06) list_highlight_pane_cp2

0xaef4,	// (0x00047d76) list_set_pane_ParamLimits

0xaef4,	// (0x00047d76) list_set_pane

0xafbc,	// (0x00047e3e) main_pane_set_t1_ParamLimits

0xafbc,	// (0x00047e3e) main_pane_set_t1

0xafdc,	// (0x00047e5e) main_pane_set_t2_ParamLimits

0xafdc,	// (0x00047e5e) main_pane_set_t2

0xaff0,	// (0x00047e72) main_pane_set_t3_ParamLimits

0xaff0,	// (0x00047e72) main_pane_set_t3

0xb004,	// (0x00047e86) main_pane_set_t4_ParamLimits

0xb004,	// (0x00047e86) main_pane_set_t4

0x0003,

0xf99c,	// (0x0004c81e) main_pane_set_t_ParamLimits

0xf99c,	// (0x0004c81e) main_pane_set_t

0xb024,	// (0x00047ea6) setting_code_pane

0xb02e,	// (0x00047eb0) setting_slider_graphic_pane

0xb02e,	// (0x00047eb0) setting_slider_pane

0xb02e,	// (0x00047eb0) setting_text_pane

0xb02e,	// (0x00047eb0) setting_volume_pane

0x5c9e,	// (0x00042b20) volume_set_pane

0x76ea,	// (0x0004456c) bg_set_opt_pane_cp

0x5ca8,	// (0x00042b2a) setting_slider_pane_t1

0x5cbe,	// (0x00042b40) setting_slider_pane_t2

0x5cd8,	// (0x00042b5a) setting_slider_pane_t3

0x0002,

0xf576,	// (0x0004c3f8) setting_slider_pane_t

0x5cf0,	// (0x00042b72) slider_set_pane

0x2c89,	// (0x0003fb0b) bg_set_opt_pane_cp2

0x772c,	// (0x000445ae) setting_slider_graphic_pane_g1

0x5d06,	// (0x00042b88) setting_slider_graphic_pane_t1

0x5d16,	// (0x00042b98) setting_slider_graphic_pane_t2

0x0001,

0xf57d,	// (0x0004c3ff) setting_slider_graphic_pane_t

0x5d26,	// (0x00042ba8) slider_set_pane_cp

0x2c89,	// (0x0003fb0b) input_focus_pane_cp1

0xaeb5,	// (0x00047d37) list_set_text_pane

0x2c7f,	// (0x0003fb01) setting_text_pane_g1

0x2c89,	// (0x0003fb0b) input_focus_pane_cp2

0x2c7f,	// (0x0003fb01) setting_code_pane_g1

0x7735,	// (0x000445b7) setting_code_pane_t1

0x4b51,	// (0x000419d3) set_text_pane_t1_ParamLimits

0x4b51,	// (0x000419d3) set_text_pane_t1

0x7fe4,	// (0x00044e66) set_opt_bg_pane_g1

0x7fec,	// (0x00044e6e) set_opt_bg_pane_g2

0xae8d,	// (0x00047d0f) set_opt_bg_pane_g3

0x7ffc,	// (0x00044e7e) set_opt_bg_pane_g4

0x8004,	// (0x00044e86) set_opt_bg_pane_g5

0x800c,	// (0x00044e8e) set_opt_bg_pane_g6

0xae97,	// (0x00047d19) set_opt_bg_pane_g7

0xaea1,	// (0x00047d23) set_opt_bg_pane_g8

0xaeab,	// (0x00047d2d) set_opt_bg_pane_g9

0x0008,

0xf989,	// (0x0004c80b) set_opt_bg_pane_g

0xae80,	// (0x00047d02) slider_set_pane_g1

0x66f4,	// (0x00043576) slider_set_pane_g2

0x0006,

0xf97a,	// (0x0004c7fc) slider_set_pane_g

0x667c,	// (0x000434fe) volume_set_pane_g1

0x6686,	// (0x00043508) volume_set_pane_g2

0x6690,	// (0x00043512) volume_set_pane_g3

0x669a,	// (0x0004351c) volume_set_pane_g4

0x66a4,	// (0x00043526) volume_set_pane_g5

0x66ae,	// (0x00043530) volume_set_pane_g6

0x66b8,	// (0x0004353a) volume_set_pane_g7

0x66c2,	// (0x00043544) volume_set_pane_g8

0x66cc,	// (0x0004354e) volume_set_pane_g9

0x66d6,	// (0x00043558) volume_set_pane_g10

0x0009,

0xf952,	// (0x0004c7d4) volume_set_pane_g

0x7743,	// (0x000445c5) indicator_pane_ParamLimits

0x7743,	// (0x000445c5) indicator_pane

0x774f,	// (0x000445d1) main_idle_pane_g2_ParamLimits

0x774f,	// (0x000445d1) main_idle_pane_g2

0x7777,	// (0x000445f9) main_pane_idle_g1_ParamLimits

0x7777,	// (0x000445f9) main_pane_idle_g1

0x7785,	// (0x00044607) popup_clock_digital_analogue_window_ParamLimits

0x7785,	// (0x00044607) popup_clock_digital_analogue_window

0x779c,	// (0x0004461e) soft_indicator_pane_ParamLimits

0x779c,	// (0x0004461e) soft_indicator_pane

0x77aa,	// (0x0004462c) wallpaper_pane_ParamLimits

0x77aa,	// (0x0004462c) wallpaper_pane

0x2c7f,	// (0x0003fb01) wallpaper_pane_g1

0x77be,	// (0x00044640) indicator_pane_g1_ParamLimits

0x77be,	// (0x00044640) indicator_pane_g1

0xb2f2,	// (0x00048174) navi_navi_icon_text_pane_srt_g1

0x77d9,	// (0x0004465b) soft_indicator_pane_t1

0x77f3,	// (0x00044675) aid_ps_area_pane

0x7804,	// (0x00044686) aid_ps_clock_pane

0x7812,	// (0x00044694) aid_ps_indicator_pane

0x781e,	// (0x000446a0) indicator_ps_pane_ParamLimits

0x781e,	// (0x000446a0) indicator_ps_pane

0x782d,	// (0x000446af) power_save_pane_g1_ParamLimits

0x782d,	// (0x000446af) power_save_pane_g1

0x7839,	// (0x000446bb) power_save_pane_g2_ParamLimits

0x7839,	// (0x000446bb) power_save_pane_g2

0x58a7,	// (0x00042729) aid_navinavi_width_pane

0x77f3,	// (0x00044675) aid_ps_area_pane_ParamLimits

0x0001,

0xf582,	// (0x0004c404) power_save_pane_g_ParamLimits

0xf582,	// (0x0004c404) power_save_pane_g

0x7847,	// (0x000446c9) power_save_pane_t1_ParamLimits

0x7847,	// (0x000446c9) power_save_pane_t1

0x7804,	// (0x00044686) aid_ps_clock_pane_ParamLimits

0x7812,	// (0x00044694) aid_ps_indicator_pane_ParamLimits

0x7859,	// (0x000446db) power_save_pane_t4_ParamLimits

0x7859,	// (0x000446db) power_save_pane_t4

0x0001,

0xf587,	// (0x0004c409) power_save_pane_t_ParamLimits

0xf587,	// (0x0004c409) power_save_pane_t

0x7883,	// (0x00044705) power_save_t3_ParamLimits

0x7883,	// (0x00044705) power_save_t3

0x786e,	// (0x000446f0) power_save_t2_ParamLimits

0x786e,	// (0x000446f0) power_save_t2

0x7898,	// (0x0004471a) indicator_ps_pane_g1

0x78a1,	// (0x00044723) ai_gene_pane_ParamLimits

0x78a1,	// (0x00044723) ai_gene_pane

0x78ad,	// (0x0004472f) ai_links_pane_ParamLimits

0x78ad,	// (0x0004472f) ai_links_pane

0x78b9,	// (0x0004473b) indicator_pane_cp1_ParamLimits

0x78b9,	// (0x0004473b) indicator_pane_cp1

0x78c5,	// (0x00044747) main_pane_idle_g1_cp_ParamLimits

0x78c5,	// (0x00044747) main_pane_idle_g1_cp

0x78d1,	// (0x00044753) popup_ai_links_title_window

0x78da,	// (0x0004475c) soft_indicator_pane_cp1_ParamLimits

0x78da,	// (0x0004475c) soft_indicator_pane_cp1

0xac53,	// (0x00047ad5) ai_links_pane_g1

0xac5c,	// (0x00047ade) grid_ai_links_pane

0xac38,	// (0x00047aba) ai_gene_pane_1

0xac41,	// (0x00047ac3) ai_gene_pane_2

0xac4a,	// (0x00047acc) list_highlight_pane_cp4

0xac18,	// (0x00047a9a) cell_ai_link_pane_ParamLimits

0xac18,	// (0x00047a9a) cell_ai_link_pane

0xac10,	// (0x00047a92) cell_ai_link_pane_g1

0x7b1c,	// (0x0004499e) cell_ai_link_pane_g2

0x0001,

0xf92d,	// (0x0004c7af) cell_ai_link_pane_g

0x2c89,	// (0x0003fb0b) grid_highlight_cp2

0x2c89,	// (0x0003fb0b) bg_popup_sub_pane_cp1

0x78f4,	// (0x00044776) popup_ai_links_title_window_t1

0xab5c,	// (0x000479de) ai_gene_pane_1_g1_ParamLimits

0xab5c,	// (0x000479de) ai_gene_pane_1_g1

0xab68,	// (0x000479ea) ai_gene_pane_1_g2_ParamLimits

0xab68,	// (0x000479ea) ai_gene_pane_1_g2

0x0001,

0xf923,	// (0x0004c7a5) ai_gene_pane_1_g_ParamLimits

0xf923,	// (0x0004c7a5) ai_gene_pane_1_g

0xab75,	// (0x000479f7) ai_gene_pane_1_t1_ParamLimits

0xab75,	// (0x000479f7) ai_gene_pane_1_t1

0xaba9,	// (0x00047a2b) grid_ai_soft_ind_pane

0xab47,	// (0x000479c9) ai_gene_pane_2_t1_ParamLimits

0xab47,	// (0x000479c9) ai_gene_pane_2_t1

0x7903,	// (0x00044785) main_pane_empty_t1_ParamLimits

0x7903,	// (0x00044785) main_pane_empty_t1

0x791b,	// (0x0004479d) main_pane_empty_t2_ParamLimits

0x791b,	// (0x0004479d) main_pane_empty_t2

0x7930,	// (0x000447b2) main_pane_empty_t3_ParamLimits

0x7930,	// (0x000447b2) main_pane_empty_t3

0x7942,	// (0x000447c4) main_pane_empty_t4_ParamLimits

0x7942,	// (0x000447c4) main_pane_empty_t4

0x7954,	// (0x000447d6) main_pane_empty_t5_ParamLimits

0x7954,	// (0x000447d6) main_pane_empty_t5

0x0004,

0xf58c,	// (0x0004c40e) main_pane_empty_t_ParamLimits

0xf58c,	// (0x0004c40e) main_pane_empty_t

0x8035,	// (0x00044eb7) bg_popup_window_pane_ParamLimits

0x8035,	// (0x00044eb7) bg_popup_window_pane

0xa8a3,	// (0x00047725) find_popup_pane_cp2_ParamLimits

0xa8a3,	// (0x00047725) find_popup_pane_cp2

0xa8af,	// (0x00047731) heading_pane_ParamLimits

0xa8af,	// (0x00047731) heading_pane

0x2c89,	// (0x0003fb0b) bg_popup_sub_pane

0xa81d,	// (0x0004769f) bg_popup_window_pane_g1_ParamLimits

0xa81d,	// (0x0004769f) bg_popup_window_pane_g1

0xa829,	// (0x000476ab) bg_popup_window_pane_g2_ParamLimits

0xa829,	// (0x000476ab) bg_popup_window_pane_g2

0xa835,	// (0x000476b7) bg_popup_window_pane_g3_ParamLimits

0xa835,	// (0x000476b7) bg_popup_window_pane_g3

0xa841,	// (0x000476c3) bg_popup_window_pane_g4_ParamLimits

0xa841,	// (0x000476c3) bg_popup_window_pane_g4

0xa84d,	// (0x000476cf) bg_popup_window_pane_g5_ParamLimits

0xa84d,	// (0x000476cf) bg_popup_window_pane_g5

0xa859,	// (0x000476db) bg_popup_window_pane_g6_ParamLimits

0xa859,	// (0x000476db) bg_popup_window_pane_g6

0xa865,	// (0x000476e7) bg_popup_window_pane_g7_ParamLimits

0xa865,	// (0x000476e7) bg_popup_window_pane_g7

0xa871,	// (0x000476f3) bg_popup_window_pane_g8_ParamLimits

0xa871,	// (0x000476f3) bg_popup_window_pane_g8

0xa87d,	// (0x000476ff) bg_popup_window_pane_g9_ParamLimits

0xa87d,	// (0x000476ff) bg_popup_window_pane_g9

0xa889,	// (0x0004770b) bg_popup_window_pane_g10_ParamLimits

0xa889,	// (0x0004770b) bg_popup_window_pane_g10

0x0009,

0xf8eb,	// (0x0004c76d) bg_popup_window_pane_g_ParamLimits

0xf8eb,	// (0x0004c76d) bg_popup_window_pane_g

0xa7b2,	// (0x00047634) bg_popup_heading_pane_ParamLimits

0xa7b2,	// (0x00047634) bg_popup_heading_pane

0x67a8,	// (0x0004362a) tabs_4_passive_pane_cp_srt_ParamLimits

0x67a8,	// (0x0004362a) tabs_4_passive_pane_cp_srt

0x67ba,	// (0x0004363c) tabs_4_passive_pane_srt_ParamLimits

0xa7c6,	// (0x00047648) heading_pane_g2

0x67ba,	// (0x0004363c) tabs_4_passive_pane_srt

0x8f84,	// (0x00045e06) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f84,	// (0x00045e06) bg_passive_tab_pane_cp3_srt

0xa7ce,	// (0x00047650) heading_pane_t1_ParamLimits

0xa7ce,	// (0x00047650) heading_pane_t1

0xa7e5,	// (0x00047667) heading_pane_t2_ParamLimits

0xa7e5,	// (0x00047667) heading_pane_t2

0x0001,

0xf8e6,	// (0x0004c768) heading_pane_t_ParamLimits

0xf8e6,	// (0x0004c768) heading_pane_t

0xa2dd,	// (0x0004715f) bg_popup_heading_pane_g1

0xa38c,	// (0x0004720e) bg_popup_heading_pane_g2

0xa396,	// (0x00047218) bg_popup_heading_pane_g3

0xa3a0,	// (0x00047222) bg_popup_heading_pane_g4

0xa3aa,	// (0x0004722c) bg_popup_heading_pane_g5

0xa3b4,	// (0x00047236) bg_popup_heading_pane_g6

0xa3bc,	// (0x0004723e) bg_popup_heading_pane_g7

0xa3c4,	// (0x00047246) bg_popup_heading_pane_g8

0xa3ce,	// (0x00047250) bg_popup_heading_pane_g9

0x0008,

0xf8a2,	// (0x0004c724) bg_popup_heading_pane_g

0x9ac1,	// (0x00046943) bg_popup_sub_pane_g1

0x9ac9,	// (0x0004694b) bg_popup_sub_pane_g2

0x9ad1,	// (0x00046953) bg_popup_sub_pane_g3

0x9ad9,	// (0x0004695b) bg_popup_sub_pane_g4

0x9ae1,	// (0x00046963) bg_popup_sub_pane_g5

0x9ae9,	// (0x0004696b) bg_popup_sub_pane_g6

0x9af1,	// (0x00046973) bg_popup_sub_pane_g7

0x9af9,	// (0x0004697b) bg_popup_sub_pane_g8

0x9b01,	// (0x00046983) bg_popup_sub_pane_g9

0x0008,

0xf87c,	// (0x0004c6fe) bg_popup_sub_pane_g

0x7966,	// (0x000447e8) bg_popup_window_pane_cp5_ParamLimits

0x7966,	// (0x000447e8) bg_popup_window_pane_cp5

0x7982,	// (0x00044804) popup_note_window_g1_ParamLimits

0x7982,	// (0x00044804) popup_note_window_g1

0x798e,	// (0x00044810) popup_note_window_t1_ParamLimits

0x798e,	// (0x00044810) popup_note_window_t1

0x79a4,	// (0x00044826) popup_note_window_t2_ParamLimits

0x79a4,	// (0x00044826) popup_note_window_t2

0x79ba,	// (0x0004483c) popup_note_window_t3_ParamLimits

0x79ba,	// (0x0004483c) popup_note_window_t3

0x79d0,	// (0x00044852) popup_note_window_t4_ParamLimits

0x79d0,	// (0x00044852) popup_note_window_t4

0x79f8,	// (0x0004487a) popup_note_window_t5_ParamLimits

0x79f8,	// (0x0004487a) popup_note_window_t5

0x0004,

0xf597,	// (0x0004c419) popup_note_window_t_ParamLimits

0xf597,	// (0x0004c419) popup_note_window_t

0x7a1c,	// (0x0004489e) bg_popup_window_pane_cp6_ParamLimits

0x7a1c,	// (0x0004489e) bg_popup_window_pane_cp6

0xa259,	// (0x000470db) popup_note_image_window_g1_ParamLimits

0xa259,	// (0x000470db) popup_note_image_window_g1

0xa265,	// (0x000470e7) popup_note_image_window_g2_ParamLimits

0xa265,	// (0x000470e7) popup_note_image_window_g2

0x0001,

0xf870,	// (0x0004c6f2) popup_note_image_window_g_ParamLimits

0xf870,	// (0x0004c6f2) popup_note_image_window_g

0xa27e,	// (0x00047100) popup_note_image_window_t1_ParamLimits

0xa27e,	// (0x00047100) popup_note_image_window_t1

0xa297,	// (0x00047119) popup_note_image_window_t2_ParamLimits

0xa297,	// (0x00047119) popup_note_image_window_t2

0xa2b0,	// (0x00047132) popup_note_image_window_t3_ParamLimits

0xa2b0,	// (0x00047132) popup_note_image_window_t3

0x0002,

0xf875,	// (0x0004c6f7) popup_note_image_window_t_ParamLimits

0xf875,	// (0x0004c6f7) popup_note_image_window_t

0xa119,	// (0x00046f9b) bg_popup_window_pane_cp7_ParamLimits

0xa119,	// (0x00046f9b) bg_popup_window_pane_cp7

0xa149,	// (0x00046fcb) popup_note_wait_window_g1_ParamLimits

0xa149,	// (0x00046fcb) popup_note_wait_window_g1

0xa155,	// (0x00046fd7) popup_note_wait_window_g2_ParamLimits

0xa155,	// (0x00046fd7) popup_note_wait_window_g2

0x0002,

0xf85e,	// (0x0004c6e0) popup_note_wait_window_g_ParamLimits

0xf85e,	// (0x0004c6e0) popup_note_wait_window_g

0xa16d,	// (0x00046fef) popup_note_wait_window_t1_ParamLimits

0xa16d,	// (0x00046fef) popup_note_wait_window_t1

0xa194,	// (0x00047016) popup_note_wait_window_t2_ParamLimits

0xa194,	// (0x00047016) popup_note_wait_window_t2

0xa1b2,	// (0x00047034) popup_note_wait_window_t3_ParamLimits

0xa1b2,	// (0x00047034) popup_note_wait_window_t3

0xa1c5,	// (0x00047047) popup_note_wait_window_t4_ParamLimits

0xa1c5,	// (0x00047047) popup_note_wait_window_t4

0x0004,

0xf865,	// (0x0004c6e7) popup_note_wait_window_t_ParamLimits

0xf865,	// (0x0004c6e7) popup_note_wait_window_t

0xa1ea,	// (0x0004706c) wait_bar_pane_ParamLimits

0xa1ea,	// (0x0004706c) wait_bar_pane

0x2c89,	// (0x0003fb0b) wait_anim_pane

0x2c89,	// (0x0003fb0b) wait_border_pane

0x2c7f,	// (0x0003fb01) wait_anim_pane_g1

0x2c7f,	// (0x0003fb01) wait_anim_pane_g2

0x0001,

0xf720,	// (0x0004c5a2) wait_anim_pane_g

0xa0bd,	// (0x00046f3f) wait_border_pane_g1

0xa0c8,	// (0x00046f4a) wait_border_pane_g2

0xa0d1,	// (0x00046f53) wait_border_pane_g3

0x0002,

0xf857,	// (0x0004c6d9) wait_border_pane_g

0x9f27,	// (0x00046da9) bg_popup_window_pane_cp16_ParamLimits

0x9f27,	// (0x00046da9) bg_popup_window_pane_cp16

0xa027,	// (0x00046ea9) indicator_popup_pane_cp4_ParamLimits

0xa027,	// (0x00046ea9) indicator_popup_pane_cp4

0xa03b,	// (0x00046ebd) popup_query_data_window_t1_ParamLimits

0xa03b,	// (0x00046ebd) popup_query_data_window_t1

0xa04d,	// (0x00046ecf) popup_query_data_window_t2_ParamLimits

0xa04d,	// (0x00046ecf) popup_query_data_window_t2

0xa066,	// (0x00046ee8) popup_query_data_window_t3_ParamLimits

0xa066,	// (0x00046ee8) popup_query_data_window_t3

0x0002,

0xf850,	// (0x0004c6d2) popup_query_data_window_t_ParamLimits

0xf850,	// (0x0004c6d2) popup_query_data_window_t

0xa080,	// (0x00046f02) query_popup_data_pane_ParamLimits

0xa080,	// (0x00046f02) query_popup_data_pane

0xa094,	// (0x00046f16) query_popup_data_pane_cp1_ParamLimits

0xa094,	// (0x00046f16) query_popup_data_pane_cp1

0x9f27,	// (0x00046da9) bg_popup_window_pane_cp10_ParamLimits

0x9f27,	// (0x00046da9) bg_popup_window_pane_cp10

0x9f59,	// (0x00046ddb) indicator_popup_pane_ParamLimits

0x9f59,	// (0x00046ddb) indicator_popup_pane

0x9f7b,	// (0x00046dfd) popup_query_code_window_t1_ParamLimits

0x9f7b,	// (0x00046dfd) popup_query_code_window_t1

0x9f95,	// (0x00046e17) popup_query_code_window_t2_ParamLimits

0x9f95,	// (0x00046e17) popup_query_code_window_t2

0x9fde,	// (0x00046e60) popup_query_code_window_t3_ParamLimits

0x9fde,	// (0x00046e60) popup_query_code_window_t3

0x0002,

0xf849,	// (0x0004c6cb) popup_query_code_window_t_ParamLimits

0xf849,	// (0x0004c6cb) popup_query_code_window_t

0xa00d,	// (0x00046e8f) query_popup_pane_ParamLimits

0xa00d,	// (0x00046e8f) query_popup_pane

0x7a1c,	// (0x0004489e) bg_popup_window_pane_cp15_ParamLimits

0x7a1c,	// (0x0004489e) bg_popup_window_pane_cp15

0x7a3c,	// (0x000448be) indicator_popup_pane_cp1_ParamLimits

0x7a3c,	// (0x000448be) indicator_popup_pane_cp1

0x7a4f,	// (0x000448d1) indicator_popup_pane_cp2_ParamLimits

0x7a4f,	// (0x000448d1) indicator_popup_pane_cp2

0x7a6a,	// (0x000448ec) popup_query_data_code_window_g1_ParamLimits

0x7a6a,	// (0x000448ec) popup_query_data_code_window_g1

0x7a7d,	// (0x000448ff) popup_query_data_code_window_t1_ParamLimits

0x7a7d,	// (0x000448ff) popup_query_data_code_window_t1

0x7a8f,	// (0x00044911) popup_query_data_code_window_t2_ParamLimits

0x7a8f,	// (0x00044911) popup_query_data_code_window_t2

0x7aa1,	// (0x00044923) popup_query_data_code_window_t3_ParamLimits

0x7aa1,	// (0x00044923) popup_query_data_code_window_t3

0x7ab7,	// (0x00044939) popup_query_data_code_window_t4_ParamLimits

0x7ab7,	// (0x00044939) popup_query_data_code_window_t4

0x0003,

0xf5a2,	// (0x0004c424) popup_query_data_code_window_t_ParamLimits

0xf5a2,	// (0x0004c424) popup_query_data_code_window_t

0x8a30,	// (0x000458b2) list_single_midp_graphic_pane_g3

0x7ad1,	// (0x00044953) query_popup_data_pane_cp2_ParamLimits

0x7ae4,	// (0x00044966) query_popup_pane_cp2_ParamLimits

0x7ae4,	// (0x00044966) query_popup_pane_cp2

0x2c89,	// (0x0003fb0b) bg_popup_window_pane_cp11

0x9f1f,	// (0x00046da1) heading_pane_cp5

0x7bd4,	// (0x00044a56) listscroll_popup_info_pane

0x2c89,	// (0x0003fb0b) input_focus_pane_cp3

0x7aff,	// (0x00044981) query_popup_pane_t1

0x7b0d,	// (0x0004498f) list_popup_info_pane_ParamLimits

0x7b0d,	// (0x0004498f) list_popup_info_pane

0x7b1c,	// (0x0004499e) listscroll_popup_info_pane_g1

0x7b24,	// (0x000449a6) scroll_pane_cp7

0x7b2e,	// (0x000449b0) popup_info_list_pane_t1_ParamLimits

0x7b2e,	// (0x000449b0) popup_info_list_pane_t1

0x7b48,	// (0x000449ca) popup_info_list_pane_t2_ParamLimits

0x7b48,	// (0x000449ca) popup_info_list_pane_t2

0x0001,

0xf5ab,	// (0x0004c42d) popup_info_list_pane_t_ParamLimits

0xf5ab,	// (0x0004c42d) popup_info_list_pane_t

0x2c89,	// (0x0003fb0b) bg_popup_window_pane_cp12

0xb30c,	// (0x0004818e) find_popup_pane

0x76ea,	// (0x0004456c) bg_popup_window_pane_cp3

0x7b62,	// (0x000449e4) heading_pane_cp3

0x7b6e,	// (0x000449f0) listscroll_popup_graphic_pane

0x2c89,	// (0x0003fb0b) bg_popup_window_pane_cp4

0x7bca,	// (0x00044a4c) heading_pane_cp4

0x7bd4,	// (0x00044a56) listscroll_popup_colour_pane

0x7bdc,	// (0x00044a5e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7bdc,	// (0x00044a5e) cell_large_graphic_colour_none_popup_pane

0x7bf0,	// (0x00044a72) grid_large_graphic_colour_popup_pane_ParamLimits

0x7bf0,	// (0x00044a72) grid_large_graphic_colour_popup_pane

0x7c1c,	// (0x00044a9e) listscroll_popup_colour_pane_g1_ParamLimits

0x7c1c,	// (0x00044a9e) listscroll_popup_colour_pane_g1

0x7c33,	// (0x00044ab5) listscroll_popup_colour_pane_g2_ParamLimits

0x7c33,	// (0x00044ab5) listscroll_popup_colour_pane_g2

0x7c4a,	// (0x00044acc) listscroll_popup_colour_pane_g3_ParamLimits

0x7c4a,	// (0x00044acc) listscroll_popup_colour_pane_g3

0x7c5a,	// (0x00044adc) listscroll_popup_colour_pane_g4_ParamLimits

0x7c5a,	// (0x00044adc) listscroll_popup_colour_pane_g4

0x0003,

0xf5b0,	// (0x0004c432) listscroll_popup_colour_pane_g_ParamLimits

0xf5b0,	// (0x0004c432) listscroll_popup_colour_pane_g

0x7c6e,	// (0x00044af0) scroll_pane_cp6_ParamLimits

0x7c6e,	// (0x00044af0) scroll_pane_cp6

0x7c80,	// (0x00044b02) cell_large_graphic_colour_popup_pane_ParamLimits

0x7c80,	// (0x00044b02) cell_large_graphic_colour_popup_pane

0x7ca5,	// (0x00044b27) cell_large_graphic_colour_none_popup_pane_t1

0x2c89,	// (0x0003fb0b) grid_highlight_pane_cp5

0x7cb4,	// (0x00044b36) cell_large_graphic_colour_popup_pane_g1

0x7cbc,	// (0x00044b3e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5b9,	// (0x0004c43b) cell_large_graphic_colour_popup_pane_g

0x7cc4,	// (0x00044b46) cell_large_graphic_colour_popup_pane_g2_copy1

0x7ccd,	// (0x00044b4f) grid_highlight_pane_cp4

0x7cd5,	// (0x00044b57) bg_popup_window_pane_cp8_ParamLimits

0x7cd5,	// (0x00044b57) bg_popup_window_pane_cp8

0x7cf0,	// (0x00044b72) popup_snote_single_text_window_g1_ParamLimits

0x7cf0,	// (0x00044b72) popup_snote_single_text_window_g1

0x7d02,	// (0x00044b84) popup_snote_single_text_window_t1_ParamLimits

0x7d02,	// (0x00044b84) popup_snote_single_text_window_t1

0x7d15,	// (0x00044b97) popup_snote_single_text_window_t2_ParamLimits

0x7d15,	// (0x00044b97) popup_snote_single_text_window_t2

0x7d28,	// (0x00044baa) popup_snote_single_text_window_t3_ParamLimits

0x7d28,	// (0x00044baa) popup_snote_single_text_window_t3

0x7d61,	// (0x00044be3) popup_snote_single_text_window_t4_ParamLimits

0x7d61,	// (0x00044be3) popup_snote_single_text_window_t4

0x7d95,	// (0x00044c17) popup_snote_single_text_window_t5_ParamLimits

0x7d95,	// (0x00044c17) popup_snote_single_text_window_t5

0x0004,

0xf5be,	// (0x0004c440) popup_snote_single_text_window_t_ParamLimits

0xf5be,	// (0x0004c440) popup_snote_single_text_window_t

0x7dc4,	// (0x00044c46) bg_popup_window_pane_cp9_ParamLimits

0x7dc4,	// (0x00044c46) bg_popup_window_pane_cp9

0x7cf0,	// (0x00044b72) popup_snote_single_graphic_window_g1_ParamLimits

0x7cf0,	// (0x00044b72) popup_snote_single_graphic_window_g1

0x7dd2,	// (0x00044c54) popup_snote_single_graphic_window_g2_ParamLimits

0x7dd2,	// (0x00044c54) popup_snote_single_graphic_window_g2

0x0001,

0xf5c9,	// (0x0004c44b) popup_snote_single_graphic_window_g_ParamLimits

0xf5c9,	// (0x0004c44b) popup_snote_single_graphic_window_g

0x7dde,	// (0x00044c60) popup_snote_single_graphic_window_t1_ParamLimits

0x7dde,	// (0x00044c60) popup_snote_single_graphic_window_t1

0x7df1,	// (0x00044c73) popup_snote_single_graphic_window_t2_ParamLimits

0x7df1,	// (0x00044c73) popup_snote_single_graphic_window_t2

0x7e04,	// (0x00044c86) popup_snote_single_graphic_window_t3_ParamLimits

0x7e04,	// (0x00044c86) popup_snote_single_graphic_window_t3

0x7e3d,	// (0x00044cbf) popup_snote_single_graphic_window_t4_ParamLimits

0x7e3d,	// (0x00044cbf) popup_snote_single_graphic_window_t4

0x7e71,	// (0x00044cf3) popup_snote_single_graphic_window_t5_ParamLimits

0x7e71,	// (0x00044cf3) popup_snote_single_graphic_window_t5

0x0004,

0xf5ce,	// (0x0004c450) popup_snote_single_graphic_window_t_ParamLimits

0xf5ce,	// (0x0004c450) popup_snote_single_graphic_window_t

0xb24a,	// (0x000480cc) grid_graphic_popup_pane_ParamLimits

0xb24a,	// (0x000480cc) grid_graphic_popup_pane

0xb278,	// (0x000480fa) listscroll_popup_graphic_pane_g1_ParamLimits

0xb278,	// (0x000480fa) listscroll_popup_graphic_pane_g1

0xb28c,	// (0x0004810e) listscroll_popup_graphic_pane_g2_ParamLimits

0xb28c,	// (0x0004810e) listscroll_popup_graphic_pane_g2

0x0001,

0xf9c6,	// (0x0004c848) listscroll_popup_graphic_pane_g_ParamLimits

0xf9c6,	// (0x0004c848) listscroll_popup_graphic_pane_g

0xb2a0,	// (0x00048122) scroll_pane_cp5

0xb1f2,	// (0x00048074) cell_graphic_popup_pane_ParamLimits

0xb1f2,	// (0x00048074) cell_graphic_popup_pane

0xb1d3,	// (0x00048055) cell_graphic_popup_pane_g1

0xb1db,	// (0x0004805d) cell_graphic_popup_pane_g2

0x7cc4,	// (0x00044b46) cell_graphic_popup_pane_g3

0x0002,

0xf9bf,	// (0x0004c841) cell_graphic_popup_pane_g

0xb1e4,	// (0x00048066) cell_graphic_popup_pane_t2

0x7ccd,	// (0x00044b4f) grid_highlight_pane_cp3

0x7eb2,	// (0x00044d34) list_gen_pane_ParamLimits

0x7eb2,	// (0x00044d34) list_gen_pane

0x7ee4,	// (0x00044d66) scroll_pane

0xb135,	// (0x00047fb7) bg_list_pane_g1_ParamLimits

0xb135,	// (0x00047fb7) bg_list_pane_g1

0xb150,	// (0x00047fd2) bg_list_pane_g2_ParamLimits

0xb150,	// (0x00047fd2) bg_list_pane_g2

0xb163,	// (0x00047fe5) bg_list_pane_g3_ParamLimits

0xb163,	// (0x00047fe5) bg_list_pane_g3

0xb175,	// (0x00047ff7) bg_list_pane_g4_ParamLimits

0xb175,	// (0x00047ff7) bg_list_pane_g4

0xb187,	// (0x00048009) bg_list_pane_g5_ParamLimits

0xb187,	// (0x00048009) bg_list_pane_g5

0x0004,

0xf9b4,	// (0x0004c836) bg_list_pane_g_ParamLimits

0xf9b4,	// (0x0004c836) bg_list_pane_g

0xb0b2,	// (0x00047f34) list_double2_graphic_large_graphic_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double2_graphic_large_graphic_pane

0xb0b2,	// (0x00047f34) list_double2_graphic_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double2_graphic_pane

0xb0b2,	// (0x00047f34) list_double2_large_graphic_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double2_large_graphic_pane

0xb0b2,	// (0x00047f34) list_double2_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double2_pane

0xb0b2,	// (0x00047f34) list_double_graphic_heading_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double_graphic_heading_pane

0xb0b2,	// (0x00047f34) list_double_graphic_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double_graphic_pane

0xb0b2,	// (0x00047f34) list_double_heading_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double_heading_pane

0xb0b2,	// (0x00047f34) list_double_large_graphic_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double_large_graphic_pane

0xb0b2,	// (0x00047f34) list_double_number_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double_number_pane

0xb0b2,	// (0x00047f34) list_double_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double_pane

0xb0b2,	// (0x00047f34) list_double_time_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_double_time_pane

0xb0b2,	// (0x00047f34) list_setting_number_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_setting_number_pane

0xb0b2,	// (0x00047f34) list_setting_pane_ParamLimits

0xb0b2,	// (0x00047f34) list_setting_pane

0xb0f1,	// (0x00047f73) list_single_2graphic_pane_ParamLimits

0xb0f1,	// (0x00047f73) list_single_2graphic_pane

0xb0f1,	// (0x00047f73) list_single_graphic_heading_pane_ParamLimits

0xb0f1,	// (0x00047f73) list_single_graphic_heading_pane

0xb0f1,	// (0x00047f73) list_single_graphic_pane_ParamLimits

0xb0f1,	// (0x00047f73) list_single_graphic_pane

0xb0f1,	// (0x00047f73) list_single_heading_pane_ParamLimits

0xb0f1,	// (0x00047f73) list_single_heading_pane

0x676c,	// (0x000435ee) list_single_large_graphic_pane_ParamLimits

0x676c,	// (0x000435ee) list_single_large_graphic_pane

0xb0f1,	// (0x00047f73) list_single_number_heading_pane_ParamLimits

0xb0f1,	// (0x00047f73) list_single_number_heading_pane

0xb0f1,	// (0x00047f73) list_single_number_pane_ParamLimits

0xb0f1,	// (0x00047f73) list_single_number_pane

0xb0f1,	// (0x00047f73) list_single_pane_ParamLimits

0xb0f1,	// (0x00047f73) list_single_pane

0x2c89,	// (0x0003fb0b) list_highlight_pane_cp1

0x7f18,	// (0x00044d9a) list_single_pane_g1_ParamLimits

0x7f18,	// (0x00044d9a) list_single_pane_g1

0x5d2e,	// (0x00042bb0) list_single_pane_g2_ParamLimits

0x5d2e,	// (0x00042bb0) list_single_pane_g2

0x0001,

0xf5ea,	// (0x0004c46c) list_single_pane_g_ParamLimits

0xf5ea,	// (0x0004c46c) list_single_pane_g

0x542d,	// (0x000422af) list_single_pane_t1_ParamLimits

0x542d,	// (0x000422af) list_single_pane_t1

0x7f18,	// (0x00044d9a) list_single_number_pane_g1_ParamLimits

0x7f18,	// (0x00044d9a) list_single_number_pane_g1

0x5d2e,	// (0x00042bb0) list_single_number_pane_g2_ParamLimits

0x5d2e,	// (0x00042bb0) list_single_number_pane_g2

0x0001,

0xf5ea,	// (0x0004c46c) list_single_number_pane_g_ParamLimits

0xf5ea,	// (0x0004c46c) list_single_number_pane_g

0x53cf,	// (0x00042251) list_single_number_pane_t1_ParamLimits

0x53cf,	// (0x00042251) list_single_number_pane_t1

0x53e5,	// (0x00042267) list_single_number_pane_t2_ParamLimits

0x53e5,	// (0x00042267) list_single_number_pane_t2

0x0001,

0xf975,	// (0x0004c7f7) list_single_number_pane_t_ParamLimits

0xf975,	// (0x0004c7f7) list_single_number_pane_t

0x4b6a,	// (0x000419ec) list_single_graphic_pane_g1_ParamLimits

0x4b6a,	// (0x000419ec) list_single_graphic_pane_g1

0x7f18,	// (0x00044d9a) list_single_graphic_pane_g2_ParamLimits

0x7f18,	// (0x00044d9a) list_single_graphic_pane_g2

0x5d2e,	// (0x00042bb0) list_single_graphic_pane_g3_ParamLimits

0x5d2e,	// (0x00042bb0) list_single_graphic_pane_g3

0x0002,

0xf5d9,	// (0x0004c45b) list_single_graphic_pane_g_ParamLimits

0xf5d9,	// (0x0004c45b) list_single_graphic_pane_g

0x4b76,	// (0x000419f8) list_single_graphic_pane_t1_ParamLimits

0x4b76,	// (0x000419f8) list_single_graphic_pane_t1

0x4b8c,	// (0x00041a0e) list_single_heading_pane_g1_ParamLimits

0x4b8c,	// (0x00041a0e) list_single_heading_pane_g1

0x5d2e,	// (0x00042bb0) list_single_heading_pane_g2_ParamLimits

0x5d2e,	// (0x00042bb0) list_single_heading_pane_g2

0x0001,

0xf5e0,	// (0x0004c462) list_single_heading_pane_g_ParamLimits

0xf5e0,	// (0x0004c462) list_single_heading_pane_g

0x4b9f,	// (0x00041a21) list_single_heading_pane_t1_ParamLimits

0x4b9f,	// (0x00041a21) list_single_heading_pane_t1

0x5d3a,	// (0x00042bbc) list_single_heading_pane_t2_ParamLimits

0x5d3a,	// (0x00042bbc) list_single_heading_pane_t2

0x0001,

0xf5e5,	// (0x0004c467) list_single_heading_pane_t_ParamLimits

0xf5e5,	// (0x0004c467) list_single_heading_pane_t

0x7f18,	// (0x00044d9a) list_single_number_heading_pane_g1_ParamLimits

0x7f18,	// (0x00044d9a) list_single_number_heading_pane_g1

0x5d2e,	// (0x00042bb0) list_single_number_heading_pane_g2_ParamLimits

0x5d2e,	// (0x00042bb0) list_single_number_heading_pane_g2

0x0001,

0xf5ea,	// (0x0004c46c) list_single_number_heading_pane_g_ParamLimits

0xf5ea,	// (0x0004c46c) list_single_number_heading_pane_g

0x4bb5,	// (0x00041a37) list_single_number_heading_pane_t1_ParamLimits

0x4bb5,	// (0x00041a37) list_single_number_heading_pane_t1

0x4bcb,	// (0x00041a4d) list_single_number_heading_pane_t2_ParamLimits

0x4bcb,	// (0x00041a4d) list_single_number_heading_pane_t2

0x4bdd,	// (0x00041a5f) list_single_number_heading_pane_t3_ParamLimits

0x4bdd,	// (0x00041a5f) list_single_number_heading_pane_t3

0x0002,

0xf5ef,	// (0x0004c471) list_single_number_heading_pane_t_ParamLimits

0xf5ef,	// (0x0004c471) list_single_number_heading_pane_t

0x4bef,	// (0x00041a71) list_single_graphic_heading_pane_g1_ParamLimits

0x4bef,	// (0x00041a71) list_single_graphic_heading_pane_g1

0x5d4c,	// (0x00042bce) list_single_graphic_heading_pane_g4_ParamLimits

0x5d4c,	// (0x00042bce) list_single_graphic_heading_pane_g4

0x5d2e,	// (0x00042bb0) list_single_graphic_heading_pane_g5_ParamLimits

0x5d2e,	// (0x00042bb0) list_single_graphic_heading_pane_g5

0x0002,

0xf5f6,	// (0x0004c478) list_single_graphic_heading_pane_g_ParamLimits

0xf5f6,	// (0x0004c478) list_single_graphic_heading_pane_g

0x4bb5,	// (0x00041a37) list_single_graphic_heading_pane_t1_ParamLimits

0x4bb5,	// (0x00041a37) list_single_graphic_heading_pane_t1

0x4c07,	// (0x00041a89) list_single_graphic_heading_pane_t2_ParamLimits

0x4c07,	// (0x00041a89) list_single_graphic_heading_pane_t2

0x0001,

0xf5fd,	// (0x0004c47f) list_single_graphic_heading_pane_t_ParamLimits

0xf5fd,	// (0x0004c47f) list_single_graphic_heading_pane_t

0x5d5d,	// (0x00042bdf) list_single_large_graphic_pane_g1_ParamLimits

0x5d5d,	// (0x00042bdf) list_single_large_graphic_pane_g1

0x5d69,	// (0x00042beb) list_single_large_graphic_pane_g2_ParamLimits

0x5d69,	// (0x00042beb) list_single_large_graphic_pane_g2

0x5d75,	// (0x00042bf7) list_single_large_graphic_pane_g3_ParamLimits

0x5d75,	// (0x00042bf7) list_single_large_graphic_pane_g3

0x0002,

0xf602,	// (0x0004c484) list_single_large_graphic_pane_g_ParamLimits

0xf602,	// (0x0004c484) list_single_large_graphic_pane_g

0xa0c8,	// (0x00046f4a) wait_border_pane_g2_copy1

0x5d81,	// (0x00042c03) list_single_large_graphic_pane_g4_cp2

0x4c1f,	// (0x00041aa1) list_single_large_graphic_pane_t1_ParamLimits

0x4c1f,	// (0x00041aa1) list_single_large_graphic_pane_t1

0x5d89,	// (0x00042c0b) list_double_pane_g1_ParamLimits

0x5d89,	// (0x00042c0b) list_double_pane_g1

0x5d95,	// (0x00042c17) list_double_pane_g2_ParamLimits

0x5d95,	// (0x00042c17) list_double_pane_g2

0x0001,

0xf609,	// (0x0004c48b) list_double_pane_g_ParamLimits

0xf609,	// (0x0004c48b) list_double_pane_g

0x4c35,	// (0x00041ab7) list_double_pane_t1_ParamLimits

0x4c35,	// (0x00041ab7) list_double_pane_t1

0x4c4b,	// (0x00041acd) list_double_pane_t2_ParamLimits

0x4c4b,	// (0x00041acd) list_double_pane_t2

0x0001,

0xf60e,	// (0x0004c490) list_double_pane_t_ParamLimits

0xf60e,	// (0x0004c490) list_double_pane_t

0x4c5d,	// (0x00041adf) list_double2_pane_g1_ParamLimits

0x4c5d,	// (0x00041adf) list_double2_pane_g1

0x4c6e,	// (0x00041af0) list_double2_pane_g2_ParamLimits

0x4c6e,	// (0x00041af0) list_double2_pane_g2

0x0001,

0xf613,	// (0x0004c495) list_double2_pane_g_ParamLimits

0xf613,	// (0x0004c495) list_double2_pane_g

0x4c7a,	// (0x00041afc) list_double2_pane_t1_ParamLimits

0x4c7a,	// (0x00041afc) list_double2_pane_t1

0x4c90,	// (0x00041b12) list_double2_pane_t2_ParamLimits

0x4c90,	// (0x00041b12) list_double2_pane_t2

0x0001,

0xf618,	// (0x0004c49a) list_double2_pane_t_ParamLimits

0xf618,	// (0x0004c49a) list_double2_pane_t

0x5d89,	// (0x00042c0b) list_double_number_pane_g1_ParamLimits

0x5d89,	// (0x00042c0b) list_double_number_pane_g1

0x5d95,	// (0x00042c17) list_double_number_pane_g2_ParamLimits

0x5d95,	// (0x00042c17) list_double_number_pane_g2

0x0001,

0xf609,	// (0x0004c48b) list_double_number_pane_g_ParamLimits

0xf609,	// (0x0004c48b) list_double_number_pane_g

0x4ca2,	// (0x00041b24) list_double_number_pane_t1_ParamLimits

0x4ca2,	// (0x00041b24) list_double_number_pane_t1

0x4cb4,	// (0x00041b36) list_double_number_pane_t2_ParamLimits

0x4cb4,	// (0x00041b36) list_double_number_pane_t2

0x4cca,	// (0x00041b4c) list_double_number_pane_t3_ParamLimits

0x4cca,	// (0x00041b4c) list_double_number_pane_t3

0x0002,

0xf61d,	// (0x0004c49f) list_double_number_pane_t_ParamLimits

0xf61d,	// (0x0004c49f) list_double_number_pane_t

0x4cdc,	// (0x00041b5e) list_double_graphic_pane_g1_ParamLimits

0x4cdc,	// (0x00041b5e) list_double_graphic_pane_g1

0x4ce8,	// (0x00041b6a) list_double_graphic_pane_g2_ParamLimits

0x4ce8,	// (0x00041b6a) list_double_graphic_pane_g2

0x4cf7,	// (0x00041b79) list_double_graphic_pane_g3_ParamLimits

0x4cf7,	// (0x00041b79) list_double_graphic_pane_g3

0x0003,

0xf624,	// (0x0004c4a6) list_double_graphic_pane_g_ParamLimits

0xf624,	// (0x0004c4a6) list_double_graphic_pane_g

0x4d0f,	// (0x00041b91) list_double_graphic_pane_t1_ParamLimits

0x4d0f,	// (0x00041b91) list_double_graphic_pane_t1

0x4d25,	// (0x00041ba7) list_double_graphic_pane_t2_ParamLimits

0x4d25,	// (0x00041ba7) list_double_graphic_pane_t2

0x0001,

0xf62d,	// (0x0004c4af) list_double_graphic_pane_t_ParamLimits

0xf62d,	// (0x0004c4af) list_double_graphic_pane_t

0x4d37,	// (0x00041bb9) list_double2_graphic_pane_g1_ParamLimits

0x4d37,	// (0x00041bb9) list_double2_graphic_pane_g1

0x5da1,	// (0x00042c23) list_double2_graphic_pane_g2_ParamLimits

0x5da1,	// (0x00042c23) list_double2_graphic_pane_g2

0x4d43,	// (0x00041bc5) list_double2_graphic_pane_g3_ParamLimits

0x4d43,	// (0x00041bc5) list_double2_graphic_pane_g3

0x0002,

0xf632,	// (0x0004c4b4) list_double2_graphic_pane_g_ParamLimits

0xf632,	// (0x0004c4b4) list_double2_graphic_pane_g

0x4d4f,	// (0x00041bd1) list_double2_graphic_pane_t1_ParamLimits

0x4d4f,	// (0x00041bd1) list_double2_graphic_pane_t1

0x4d65,	// (0x00041be7) list_double2_graphic_pane_t2_ParamLimits

0x4d65,	// (0x00041be7) list_double2_graphic_pane_t2

0x0001,

0xf639,	// (0x0004c4bb) list_double2_graphic_pane_t_ParamLimits

0xf639,	// (0x0004c4bb) list_double2_graphic_pane_t

0x4d77,	// (0x00041bf9) list_double_large_graphic_pane_g1_ParamLimits

0x4d77,	// (0x00041bf9) list_double_large_graphic_pane_g1

0x4da2,	// (0x00041c24) list_double_large_graphic_pane_g2_ParamLimits

0x4da2,	// (0x00041c24) list_double_large_graphic_pane_g2

0x5d95,	// (0x00042c17) list_double_large_graphic_pane_g3_ParamLimits

0x5d95,	// (0x00042c17) list_double_large_graphic_pane_g3

0x4db8,	// (0x00041c3a) list_double_large_graphic_pane_g4_ParamLimits

0x4db8,	// (0x00041c3a) list_double_large_graphic_pane_g4

0x0004,

0xf63e,	// (0x0004c4c0) list_double_large_graphic_pane_g_ParamLimits

0xf63e,	// (0x0004c4c0) list_double_large_graphic_pane_g

0x4dcb,	// (0x00041c4d) list_double_large_graphic_pane_t1_ParamLimits

0x4dcb,	// (0x00041c4d) list_double_large_graphic_pane_t1

0x4de4,	// (0x00041c66) list_double_large_graphic_pane_t2_ParamLimits

0x4de4,	// (0x00041c66) list_double_large_graphic_pane_t2

0x0001,

0xf649,	// (0x0004c4cb) list_double_large_graphic_pane_t_ParamLimits

0xf649,	// (0x0004c4cb) list_double_large_graphic_pane_t

0x5dc2,	// (0x00042c44) list_double2_large_graphic_pane_g1_ParamLimits

0x5dc2,	// (0x00042c44) list_double2_large_graphic_pane_g1

0x4df6,	// (0x00041c78) list_double2_large_graphic_pane_g2_ParamLimits

0x4df6,	// (0x00041c78) list_double2_large_graphic_pane_g2

0x4d43,	// (0x00041bc5) list_double2_large_graphic_pane_g3_ParamLimits

0x4d43,	// (0x00041bc5) list_double2_large_graphic_pane_g3

0x0002,

0xf64e,	// (0x0004c4d0) list_double2_large_graphic_pane_g_ParamLimits

0xf64e,	// (0x0004c4d0) list_double2_large_graphic_pane_g

0x4e07,	// (0x00041c89) list_double2_large_graphic_pane_t1_ParamLimits

0x4e07,	// (0x00041c89) list_double2_large_graphic_pane_t1

0x4e1d,	// (0x00041c9f) list_double2_large_graphic_pane_t2_ParamLimits

0x4e1d,	// (0x00041c9f) list_double2_large_graphic_pane_t2

0x0001,

0xf655,	// (0x0004c4d7) list_double2_large_graphic_pane_t_ParamLimits

0xf655,	// (0x0004c4d7) list_double2_large_graphic_pane_t

0x4e2f,	// (0x00041cb1) list_double_heading_pane_g1_ParamLimits

0x4e2f,	// (0x00041cb1) list_double_heading_pane_g1

0x4e40,	// (0x00041cc2) list_double_heading_pane_g2_ParamLimits

0x4e40,	// (0x00041cc2) list_double_heading_pane_g2

0x0001,

0xf65a,	// (0x0004c4dc) list_double_heading_pane_g_ParamLimits

0xf65a,	// (0x0004c4dc) list_double_heading_pane_g

0x4e4c,	// (0x00041cce) list_double_heading_pane_t1_ParamLimits

0x4e4c,	// (0x00041cce) list_double_heading_pane_t1

0x4e62,	// (0x00041ce4) list_double_heading_pane_t2_ParamLimits

0x4e62,	// (0x00041ce4) list_double_heading_pane_t2

0x0001,

0xf65f,	// (0x0004c4e1) list_double_heading_pane_t_ParamLimits

0xf65f,	// (0x0004c4e1) list_double_heading_pane_t

0x4e74,	// (0x00041cf6) list_double_graphic_heading_pane_g1_ParamLimits

0x4e74,	// (0x00041cf6) list_double_graphic_heading_pane_g1

0x4e2f,	// (0x00041cb1) list_double_graphic_heading_pane_g2_ParamLimits

0x4e2f,	// (0x00041cb1) list_double_graphic_heading_pane_g2

0x4e40,	// (0x00041cc2) list_double_graphic_heading_pane_g3_ParamLimits

0x4e40,	// (0x00041cc2) list_double_graphic_heading_pane_g3

0x0002,

0xf664,	// (0x0004c4e6) list_double_graphic_heading_pane_g_ParamLimits

0xf664,	// (0x0004c4e6) list_double_graphic_heading_pane_g

0x4e80,	// (0x00041d02) list_double_graphic_heading_pane_t1_ParamLimits

0x4e80,	// (0x00041d02) list_double_graphic_heading_pane_t1

0x4e96,	// (0x00041d18) list_double_graphic_heading_pane_t2_ParamLimits

0x4e96,	// (0x00041d18) list_double_graphic_heading_pane_t2

0x0001,

0xf66b,	// (0x0004c4ed) list_double_graphic_heading_pane_t_ParamLimits

0xf66b,	// (0x0004c4ed) list_double_graphic_heading_pane_t

0x4ea8,	// (0x00041d2a) list_double_time_pane_g1_ParamLimits

0x4ea8,	// (0x00041d2a) list_double_time_pane_g1

0x4eb9,	// (0x00041d3b) list_double_time_pane_g2_ParamLimits

0x4eb9,	// (0x00041d3b) list_double_time_pane_g2

0x0001,

0xf670,	// (0x0004c4f2) list_double_time_pane_g_ParamLimits

0xf670,	// (0x0004c4f2) list_double_time_pane_g

0x4ec5,	// (0x00041d47) list_double_time_pane_t1_ParamLimits

0x4ec5,	// (0x00041d47) list_double_time_pane_t1

0x4edb,	// (0x00041d5d) list_double_time_pane_t2_ParamLimits

0x4edb,	// (0x00041d5d) list_double_time_pane_t2

0x4eed,	// (0x00041d6f) list_double_time_pane_t3_ParamLimits

0x4eed,	// (0x00041d6f) list_double_time_pane_t3

0x4eff,	// (0x00041d81) list_double_time_pane_t4_ParamLimits

0x4eff,	// (0x00041d81) list_double_time_pane_t4

0x0003,

0xf675,	// (0x0004c4f7) list_double_time_pane_t_ParamLimits

0xf675,	// (0x0004c4f7) list_double_time_pane_t

0x4f11,	// (0x00041d93) list_setting_pane_g1_ParamLimits

0x4f11,	// (0x00041d93) list_setting_pane_g1

0x4f1d,	// (0x00041d9f) list_setting_pane_g2_ParamLimits

0x4f1d,	// (0x00041d9f) list_setting_pane_g2

0x0001,

0xf67e,	// (0x0004c500) list_setting_pane_g_ParamLimits

0xf67e,	// (0x0004c500) list_setting_pane_g

0x4f29,	// (0x00041dab) list_setting_pane_t1_ParamLimits

0x4f29,	// (0x00041dab) list_setting_pane_t1

0x4f43,	// (0x00041dc5) list_setting_pane_t2_ParamLimits

0x4f43,	// (0x00041dc5) list_setting_pane_t2

0x0002,

0xf683,	// (0x0004c505) list_setting_pane_t_ParamLimits

0xf683,	// (0x0004c505) list_setting_pane_t

0x4f82,	// (0x00041e04) set_value_pane_cp_ParamLimits

0x4f82,	// (0x00041e04) set_value_pane_cp

0x4f90,	// (0x00041e12) list_setting_number_pane_g1_ParamLimits

0x4f90,	// (0x00041e12) list_setting_number_pane_g1

0x4f9c,	// (0x00041e1e) list_setting_number_pane_g2_ParamLimits

0x4f9c,	// (0x00041e1e) list_setting_number_pane_g2

0x0001,

0xf68a,	// (0x0004c50c) list_setting_number_pane_g_ParamLimits

0xf68a,	// (0x0004c50c) list_setting_number_pane_g

0x4fa8,	// (0x00041e2a) list_setting_number_pane_t1_ParamLimits

0x4fa8,	// (0x00041e2a) list_setting_number_pane_t1

0x4fc1,	// (0x00041e43) list_setting_number_pane_t2_ParamLimits

0x4fc1,	// (0x00041e43) list_setting_number_pane_t2

0x4fdb,	// (0x00041e5d) list_setting_number_pane_t3_ParamLimits

0x4fdb,	// (0x00041e5d) list_setting_number_pane_t3

0x0003,

0xf68f,	// (0x0004c511) list_setting_number_pane_t_ParamLimits

0xf68f,	// (0x0004c511) list_setting_number_pane_t

0x4f82,	// (0x00041e04) set_value_pane_ParamLimits

0x4f82,	// (0x00041e04) set_value_pane

0x7f24,	// (0x00044da6) bg_set_opt_pane_ParamLimits

0x7f24,	// (0x00044da6) bg_set_opt_pane

0x501e,	// (0x00041ea0) set_value_pane_t1

0x7f45,	// (0x00044dc7) slider_set_pane_cp3

0x7f4e,	// (0x00044dd0) volume_small_pane_cp

0x7f57,	// (0x00044dd9) list_form_gen_pane

0x7f60,	// (0x00044de2) scroll_pane_cp8

0x5034,	// (0x00041eb6) form_field_data_pane_ParamLimits

0x5034,	// (0x00041eb6) form_field_data_pane

0x505c,	// (0x00041ede) form_field_data_wide_pane_ParamLimits

0x505c,	// (0x00041ede) form_field_data_wide_pane

0x5083,	// (0x00041f05) form_field_popup_pane_ParamLimits

0x5083,	// (0x00041f05) form_field_popup_pane

0x50a5,	// (0x00041f27) form_field_popup_wide_pane_ParamLimits

0x50a5,	// (0x00041f27) form_field_popup_wide_pane

0x50c6,	// (0x00041f48) form_field_slider_pane_ParamLimits

0x50c6,	// (0x00041f48) form_field_slider_pane

0x50d9,	// (0x00041f5b) form_field_slider_wide_pane_ParamLimits

0x50d9,	// (0x00041f5b) form_field_slider_wide_pane

0x7f71,	// (0x00044df3) data_form_pane

0x50f6,	// (0x00041f78) form_field_data_pane_t1

0x7f7d,	// (0x00044dff) input_focus_pane

0x7f8b,	// (0x00044e0d) data_form_wide_pane

0x511c,	// (0x00041f9e) form_field_data_wide_pane_t1

0x7ce2,	// (0x00044b64) input_focus_pane_cp6

0x513e,	// (0x00041fc0) form_field_popup_pane_t1

0x7f7d,	// (0x00044dff) input_focus_pane_cp7

0x7fb7,	// (0x00044e39) list_form_pane

0x5160,	// (0x00041fe2) form_field_popup_wide_pane_t1

0x7f7d,	// (0x00044dff) input_focus_pane_cp8

0x7fc3,	// (0x00044e45) list_form_wide_pane

0x517d,	// (0x00041fff) form_field_slider_pane_t1_ParamLimits

0x517d,	// (0x00041fff) form_field_slider_pane_t1

0x5195,	// (0x00042017) form_field_slider_pane_t2_ParamLimits

0x5195,	// (0x00042017) form_field_slider_pane_t2

0x0001,

0xf69f,	// (0x0004c521) form_field_slider_pane_t_ParamLimits

0xf69f,	// (0x0004c521) form_field_slider_pane_t

0x7966,	// (0x000447e8) input_focus_pane_cp9_ParamLimits

0x7966,	// (0x000447e8) input_focus_pane_cp9

0x51aa,	// (0x0004202c) slider_cont_pane_ParamLimits

0x51aa,	// (0x0004202c) slider_cont_pane

0x7fd2,	// (0x00044e54) form_field_slider_wide_pane_t1_ParamLimits

0x7fd2,	// (0x00044e54) form_field_slider_wide_pane_t1

0x51be,	// (0x00042040) form_field_slider_wide_pane_t2_ParamLimits

0x51be,	// (0x00042040) form_field_slider_wide_pane_t2

0x0001,

0xf6a4,	// (0x0004c526) form_field_slider_wide_pane_t_ParamLimits

0xf6a4,	// (0x0004c526) form_field_slider_wide_pane_t

0x7966,	// (0x000447e8) input_focus_pane_cp10_ParamLimits

0x7966,	// (0x000447e8) input_focus_pane_cp10

0x51d0,	// (0x00042052) slider_cont_pane_cp1_ParamLimits

0x51d0,	// (0x00042052) slider_cont_pane_cp1

0x51e4,	// (0x00042066) slider_form_pane_cp

0x7fe4,	// (0x00044e66) input_focus_pane_g1

0x7fec,	// (0x00044e6e) input_focus_pane_g2

0x7ff4,	// (0x00044e76) input_focus_pane_g3

0x7ffc,	// (0x00044e7e) input_focus_pane_g4

0x8004,	// (0x00044e86) input_focus_pane_g5

0x800c,	// (0x00044e8e) input_focus_pane_g6

0x8014,	// (0x00044e96) input_focus_pane_g7

0x801c,	// (0x00044e9e) input_focus_pane_g8

0x8024,	// (0x00044ea6) input_focus_pane_g9

0x2c7f,	// (0x0003fb01) input_focus_pane_g10

0x0009,

0xf6a9,	// (0x0004c52b) input_focus_pane_g

0xa0d1,	// (0x00046f53) wait_border_pane_g3_copy1

0x51ec,	// (0x0004206e) data_form_pane_t1

0x2c7f,	// (0x0003fb01) wait_anim_pane_g1_copy1

0x53f7,	// (0x00042279) data_form_wide_pane_t1

0x520b,	// (0x0004208d) list_form_graphic_pane_cp_ParamLimits

0x520b,	// (0x0004208d) list_form_graphic_pane_cp

0xb056,	// (0x00047ed8) slider_form_pane_g1

0xb05f,	// (0x00047ee1) slider_form_pane_g2

0x0006,

0xf9a5,	// (0x0004c827) slider_form_pane_g

0x520b,	// (0x0004208d) list_form_graphic_pane_ParamLimits

0x520b,	// (0x0004208d) list_form_graphic_pane

0x521d,	// (0x0004209f) list_form_graphic_pane_g1

0x5225,	// (0x000420a7) list_form_graphic_pane_t1_ParamLimits

0x5225,	// (0x000420a7) list_form_graphic_pane_t1

0x76ea,	// (0x0004456c) list_highlight_pane_cp5_ParamLimits

0x76ea,	// (0x0004456c) list_highlight_pane_cp5

0x5dce,	// (0x00042c50) find_pane_g1

0x802c,	// (0x00044eae) input_find_pane

0x523a,	// (0x000420bc) input_find_pane_g1_ParamLimits

0x523a,	// (0x000420bc) input_find_pane_g1

0x5246,	// (0x000420c8) input_find_pane_t1_ParamLimits

0x5246,	// (0x000420c8) input_find_pane_t1

0x525b,	// (0x000420dd) input_find_pane_t2_ParamLimits

0x525b,	// (0x000420dd) input_find_pane_t2

0x0001,

0xf6be,	// (0x0004c540) input_find_pane_t_ParamLimits

0xf6be,	// (0x0004c540) input_find_pane_t

0x8035,	// (0x00044eb7) input_focus_pane_cp5_ParamLimits

0x8035,	// (0x00044eb7) input_focus_pane_cp5

0x804f,	// (0x00044ed1) bg_popup_window_pane_cp2_ParamLimits

0x804f,	// (0x00044ed1) bg_popup_window_pane_cp2

0x805c,	// (0x00044ede) listscroll_menu_pane_ParamLimits

0x805c,	// (0x00044ede) listscroll_menu_pane

0x8068,	// (0x00044eea) popup_submenu_window_ParamLimits

0x8068,	// (0x00044eea) popup_submenu_window

0x8098,	// (0x00044f1a) find_popup_pane_g1

0x80a0,	// (0x00044f22) input_popup_find_pane_cp

0x8035,	// (0x00044eb7) input_focus_pane_cp4_ParamLimits

0x8035,	// (0x00044eb7) input_focus_pane_cp4

0x80b8,	// (0x00044f3a) input_popup_find_pane_t1_ParamLimits

0x80b8,	// (0x00044f3a) input_popup_find_pane_t1

0x2c89,	// (0x0003fb0b) bg_popup_sub_pane_cp

0x80e6,	// (0x00044f68) listscroll_popup_sub_pane

0x80ee,	// (0x00044f70) list_submenu_pane_ParamLimits

0x80ee,	// (0x00044f70) list_submenu_pane

0x80ff,	// (0x00044f81) scroll_pane_cp4

0x8107,	// (0x00044f89) list_single_popup_submenu_pane_ParamLimits

0x8107,	// (0x00044f89) list_single_popup_submenu_pane

0x811c,	// (0x00044f9e) list_single_popup_submenu_pane_g1

0x8124,	// (0x00044fa6) list_single_popup_submenu_pane_t1_ParamLimits

0x8124,	// (0x00044fa6) list_single_popup_submenu_pane_t1

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp1_ParamLimits

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp1

0x8139,	// (0x00044fbb) tabs_2_active_pane_g1

0x8141,	// (0x00044fc3) tabs_2_active_pane_t1

0x76ea,	// (0x0004456c) bg_passive_tab_pane_cp1_ParamLimits

0x76ea,	// (0x0004456c) bg_passive_tab_pane_cp1

0x8139,	// (0x00044fbb) tabs_2_passive_pane_g1

0x8141,	// (0x00044fc3) tabs_2_passive_pane_t1

0x8153,	// (0x00044fd5) bg_active_tab_pane_cp4

0x8161,	// (0x00044fe3) tabs_2_long_active_pane_t1

0x8174,	// (0x00044ff6) bg_passive_tab_pane_cp4

0x6430,	// (0x000432b2) list_single_midp_graphic_pane_g4_ParamLimits

0x8153,	// (0x00044fd5) bg_active_tab_pane_cp5

0x8180,	// (0x00045002) tabs_3_long_active_pane_t1

0x8174,	// (0x00044ff6) bg_passive_tab_pane_cp5

0x6430,	// (0x000432b2) list_single_midp_graphic_pane_g4

0x76ea,	// (0x0004456c) bg_popup_window_pane_cp13_ParamLimits

0x76ea,	// (0x0004456c) bg_popup_window_pane_cp13

0x819b,	// (0x0004501d) listscroll_popup_fast_pane_ParamLimits

0x819b,	// (0x0004501d) listscroll_popup_fast_pane

0x81aa,	// (0x0004502c) grid_popup_fast_pane_ParamLimits

0x81aa,	// (0x0004502c) grid_popup_fast_pane

0x81bc,	// (0x0004503e) scroll_pane_cp9_ParamLimits

0x81bc,	// (0x0004503e) scroll_pane_cp9

0xc8f5,	// (0x00049777) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc8f5,	// (0x00049777) list_single_graphic_hl_pane_t1_cp2

0x81e0,	// (0x00045062) input_focus_pane_cp20_ParamLimits

0x81e0,	// (0x00045062) input_focus_pane_cp20

0x81ee,	// (0x00045070) query_popup_data_pane_t1_ParamLimits

0x81ee,	// (0x00045070) query_popup_data_pane_t1

0x8201,	// (0x00045083) query_popup_data_pane_t2_ParamLimits

0x8201,	// (0x00045083) query_popup_data_pane_t2

0x8247,	// (0x000450c9) query_popup_data_pane_t3_ParamLimits

0x8247,	// (0x000450c9) query_popup_data_pane_t3

0x8288,	// (0x0004510a) query_popup_data_pane_t4_ParamLimits

0x8288,	// (0x0004510a) query_popup_data_pane_t4

0x82c4,	// (0x00045146) query_popup_data_pane_t5_ParamLimits

0x82c4,	// (0x00045146) query_popup_data_pane_t5

0x0004,

0xf6c3,	// (0x0004c545) query_popup_data_pane_t_ParamLimits

0xf6c3,	// (0x0004c545) query_popup_data_pane_t

0x7fe4,	// (0x00044e66) bg_set_opt_pane_g1

0x7fec,	// (0x00044e6e) bg_set_opt_pane_g2

0x7ff4,	// (0x00044e76) bg_set_opt_pane_g3

0x7ffc,	// (0x00044e7e) bg_set_opt_pane_g4

0x8004,	// (0x00044e86) bg_set_opt_pane_g5

0x800c,	// (0x00044e8e) bg_set_opt_pane_g6

0x8014,	// (0x00044e96) bg_set_opt_pane_g7

0x801c,	// (0x00044e9e) bg_set_opt_pane_g8

0x8024,	// (0x00044ea6) bg_set_opt_pane_g9

0x0008,

0xf6ce,	// (0x0004c550) bg_set_opt_pane_g

0x6098,	// (0x00042f1a) control_top_pane_stacon_ParamLimits

0x6098,	// (0x00042f1a) control_top_pane_stacon

0x60eb,	// (0x00042f6d) signal_pane_stacon_ParamLimits

0x60eb,	// (0x00042f6d) signal_pane_stacon

0x889b,	// (0x0004571d) stacon_top_pane_g1_ParamLimits

0x889b,	// (0x0004571d) stacon_top_pane_g1

0x6110,	// (0x00042f92) title_pane_stacon_ParamLimits

0x6110,	// (0x00042f92) title_pane_stacon

0x613a,	// (0x00042fbc) uni_indicator_pane_stacon_ParamLimits

0x613a,	// (0x00042fbc) uni_indicator_pane_stacon

0x6152,	// (0x00042fd4) battery_pane_stacon_ParamLimits

0x6152,	// (0x00042fd4) battery_pane_stacon

0x6196,	// (0x00043018) control_bottom_pane_stacon_ParamLimits

0x6196,	// (0x00043018) control_bottom_pane_stacon

0x61b9,	// (0x0004303b) navi_pane_stacon_ParamLimits

0x61b9,	// (0x0004303b) navi_pane_stacon

0x88bd,	// (0x0004573f) stacon_bottom_pane_g1_ParamLimits

0x88bd,	// (0x0004573f) stacon_bottom_pane_g1

0x5dd7,	// (0x00042c59) aid_levels_signal_lsc_ParamLimits

0x5dd7,	// (0x00042c59) aid_levels_signal_lsc

0x5dee,	// (0x00042c70) signal_pane_stacon_g1_ParamLimits

0x5dee,	// (0x00042c70) signal_pane_stacon_g1

0x5e02,	// (0x00042c84) signal_pane_stacon_g2_ParamLimits

0x5e02,	// (0x00042c84) signal_pane_stacon_g2

0x0001,

0xf6e1,	// (0x0004c563) signal_pane_stacon_g_ParamLimits

0xf6e1,	// (0x0004c563) signal_pane_stacon_g

0x5e37,	// (0x00042cb9) title_pane_stacon_t1_ParamLimits

0x5e37,	// (0x00042cb9) title_pane_stacon_t1

0x8308,	// (0x0004518a) uni_indicator_pane_stacon_g1

0x8312,	// (0x00045194) uni_indicator_pane_stacon_g2

0x831c,	// (0x0004519e) uni_indicator_pane_stacon_g3

0x8326,	// (0x000451a8) uni_indicator_pane_stacon_g4

0x0003,

0xf6ed,	// (0x0004c56f) uni_indicator_pane_stacon_g

0x5e5c,	// (0x00042cde) control_top_pane_stacon_g1

0x5e64,	// (0x00042ce6) control_top_pane_stacon_t1_ParamLimits

0x5e64,	// (0x00042ce6) control_top_pane_stacon_t1

0x5e9b,	// (0x00042d1d) aid_levels_battery_lsc_ParamLimits

0x5e9b,	// (0x00042d1d) aid_levels_battery_lsc

0x5eb3,	// (0x00042d35) battery_pane_stacon_g1_ParamLimits

0x5eb3,	// (0x00042d35) battery_pane_stacon_g1

0x5ec6,	// (0x00042d48) battery_pane_stacon_g2_ParamLimits

0x5ec6,	// (0x00042d48) battery_pane_stacon_g2

0x0001,

0xf6f6,	// (0x0004c578) battery_pane_stacon_g_ParamLimits

0xf6f6,	// (0x0004c578) battery_pane_stacon_g

0x5f04,	// (0x00042d86) navi_icon_pane_stacon

0x5f18,	// (0x00042d9a) navi_navi_pane_stacon

0x5f04,	// (0x00042d86) navi_text_pane_stacon

0x5e5c,	// (0x00042cde) control_bottom_pane_stacon_g1

0x5f2e,	// (0x00042db0) control_bottom_pane_stacon_t1_ParamLimits

0x5f2e,	// (0x00042db0) control_bottom_pane_stacon_t1

0x834a,	// (0x000451cc) grid_app_pane_ParamLimits

0x834a,	// (0x000451cc) grid_app_pane

0x836e,	// (0x000451f0) scroll_pane_cp15_ParamLimits

0x836e,	// (0x000451f0) scroll_pane_cp15

0x8383,	// (0x00045205) cell_app_pane_ParamLimits

0x8383,	// (0x00045205) cell_app_pane

0x83af,	// (0x00045231) cell_app_pane_g1_ParamLimits

0x83af,	// (0x00045231) cell_app_pane_g1

0x83d3,	// (0x00045255) cell_app_pane_g2_ParamLimits

0x83d3,	// (0x00045255) cell_app_pane_g2

0x0001,

0xf6fb,	// (0x0004c57d) cell_app_pane_g_ParamLimits

0xf6fb,	// (0x0004c57d) cell_app_pane_g

0x83df,	// (0x00045261) cell_app_pane_t1_ParamLimits

0x83df,	// (0x00045261) cell_app_pane_t1

0x83f1,	// (0x00045273) grid_highlight_pane_ParamLimits

0x83f1,	// (0x00045273) grid_highlight_pane

0x7fe4,	// (0x00044e66) cell_highlight_pane_g1

0x7fec,	// (0x00044e6e) cell_highlight_pane_g2

0x7ff4,	// (0x00044e76) cell_highlight_pane_g3

0x7ffc,	// (0x00044e7e) cell_highlight_pane_g4

0x8004,	// (0x00044e86) cell_highlight_pane_g5

0x800c,	// (0x00044e8e) cell_highlight_pane_g6

0x8014,	// (0x00044e96) cell_highlight_pane_g7

0x801c,	// (0x00044e9e) cell_highlight_pane_g8

0x8024,	// (0x00044ea6) cell_highlight_pane_g9

0x2c7f,	// (0x0003fb01) cell_highlight_pane_g10

0x0009,

0xf6a9,	// (0x0004c52b) cell_highlight_pane_g

0x8402,	// (0x00045284) bg_scroll_pane

0x5f78,	// (0x00042dfa) scroll_handle_pane

0x8449,	// (0x000452cb) scroll_bg_pane_g1

0x845e,	// (0x000452e0) scroll_bg_pane_g2

0x8476,	// (0x000452f8) scroll_bg_pane_g3

0x0002,

0xf700,	// (0x0004c582) scroll_bg_pane_g

0x848b,	// (0x0004530d) scroll_handle_focus_pane_ParamLimits

0x848b,	// (0x0004530d) scroll_handle_focus_pane

0x8449,	// (0x000452cb) scroll_handle_pane_g1

0x8498,	// (0x0004531a) scroll_handle_pane_g2

0x8476,	// (0x000452f8) scroll_handle_pane_g3

0x0002,

0xf707,	// (0x0004c589) scroll_handle_pane_g

0x8035,	// (0x00044eb7) bg_popup_sub_pane_cp21_ParamLimits

0x8035,	// (0x00044eb7) bg_popup_sub_pane_cp21

0x84ac,	// (0x0004532e) popup_fep_japan_predictive_window_t1_ParamLimits

0x84ac,	// (0x0004532e) popup_fep_japan_predictive_window_t1

0x84c3,	// (0x00045345) popup_fep_japan_predictive_window_t2_ParamLimits

0x84c3,	// (0x00045345) popup_fep_japan_predictive_window_t2

0x84f6,	// (0x00045378) popup_fep_japan_predictive_window_t3_ParamLimits

0x84f6,	// (0x00045378) popup_fep_japan_predictive_window_t3

0x0002,

0xf70e,	// (0x0004c590) popup_fep_japan_predictive_window_t_ParamLimits

0xf70e,	// (0x0004c590) popup_fep_japan_predictive_window_t

0x2c89,	// (0x0003fb0b) bg_popup_sub_pane_cp23

0x852d,	// (0x000453af) listscroll_japin_cand_pane

0x8535,	// (0x000453b7) popup_fep_japan_candidate_window_t1

0x8543,	// (0x000453c5) candidate_pane_ParamLimits

0x8543,	// (0x000453c5) candidate_pane

0x8555,	// (0x000453d7) scroll_pane_cp30

0x855f,	// (0x000453e1) list_single_popup_jap_candidate_pane_ParamLimits

0x855f,	// (0x000453e1) list_single_popup_jap_candidate_pane

0x2c89,	// (0x0003fb0b) list_highlight_pane_cp30

0x8573,	// (0x000453f5) list_single_popup_jap_candidate_pane_t1

0x8582,	// (0x00045404) level_1_signal

0x858f,	// (0x00045411) level_2_signal

0x859c,	// (0x0004541e) level_3_signal

0x85a9,	// (0x0004542b) level_4_signal

0x85b6,	// (0x00045438) level_5_signal

0x85c3,	// (0x00045445) level_6_signal

0x85d0,	// (0x00045452) level_7_signal

0x8582,	// (0x00045404) level_1_battery

0x858f,	// (0x00045411) level_2_battery

0x859c,	// (0x0004541e) level_3_battery

0x85a9,	// (0x0004542b) level_4_battery

0x85b6,	// (0x00045438) level_5_battery

0x85c3,	// (0x00045445) level_6_battery

0x85d0,	// (0x00045452) level_7_battery

0x85f5,	// (0x00045477) list_menu_pane_ParamLimits

0x85f5,	// (0x00045477) list_menu_pane

0x860b,	// (0x0004548d) scroll_pane_cp25_ParamLimits

0x860b,	// (0x0004548d) scroll_pane_cp25

0x8624,	// (0x000454a6) list_double2_graphic_pane_cp2_ParamLimits

0x8624,	// (0x000454a6) list_double2_graphic_pane_cp2

0x8624,	// (0x000454a6) list_double2_large_graphic_pane_cp2_ParamLimits

0x8624,	// (0x000454a6) list_double2_large_graphic_pane_cp2

0x8624,	// (0x000454a6) list_double2_pane_cp2_ParamLimits

0x8624,	// (0x000454a6) list_double2_pane_cp2

0x8624,	// (0x000454a6) list_double_graphic_pane_cp2_ParamLimits

0x8624,	// (0x000454a6) list_double_graphic_pane_cp2

0x8624,	// (0x000454a6) list_double_large_graphic_pane_cp2_ParamLimits

0x8624,	// (0x000454a6) list_double_large_graphic_pane_cp2

0x8624,	// (0x000454a6) list_double_number_pane_cp2_ParamLimits

0x8624,	// (0x000454a6) list_double_number_pane_cp2

0x8624,	// (0x000454a6) list_double_pane_cp2_ParamLimits

0x8624,	// (0x000454a6) list_double_pane_cp2

0x864a,	// (0x000454cc) list_single_2graphic_pane_cp2_ParamLimits

0x864a,	// (0x000454cc) list_single_2graphic_pane_cp2

0x864a,	// (0x000454cc) list_single_graphic_heading_pane_cp2_ParamLimits

0x864a,	// (0x000454cc) list_single_graphic_heading_pane_cp2

0x864a,	// (0x000454cc) list_single_graphic_pane_cp2_ParamLimits

0x864a,	// (0x000454cc) list_single_graphic_pane_cp2

0x864a,	// (0x000454cc) list_single_heading_pane_cp2_ParamLimits

0x864a,	// (0x000454cc) list_single_heading_pane_cp2

0x8667,	// (0x000454e9) list_single_large_graphic_pane_cp2_ParamLimits

0x8667,	// (0x000454e9) list_single_large_graphic_pane_cp2

0x864a,	// (0x000454cc) list_single_number_heading_pane_cp2_ParamLimits

0x864a,	// (0x000454cc) list_single_number_heading_pane_cp2

0x864a,	// (0x000454cc) list_single_number_pane_cp2_ParamLimits

0x864a,	// (0x000454cc) list_single_number_pane_cp2

0x864a,	// (0x000454cc) list_single_pane_cp2_ParamLimits

0x864a,	// (0x000454cc) list_single_pane_cp2

0x86e2,	// (0x00045564) bg_popup_sub_pane_cp22

0x602a,	// (0x00042eac) popup_side_volume_key_window_g1

0x6054,	// (0x00042ed6) popup_side_volume_key_window_t1

0x6072,	// (0x00042ef4) volume_small_pane_cp1

0x7966,	// (0x000447e8) bg_popup_sub_pane_cp24_ParamLimits

0x7966,	// (0x000447e8) bg_popup_sub_pane_cp24

0x86f8,	// (0x0004557a) fep_china_uni_candidate_pane_ParamLimits

0x86f8,	// (0x0004557a) fep_china_uni_candidate_pane

0x870c,	// (0x0004558e) fep_china_uni_entry_pane

0x871c,	// (0x0004559e) popup_fep_china_uni_window_g1

0x8738,	// (0x000455ba) fep_china_uni_entry_pane_g1

0x8742,	// (0x000455c4) fep_china_uni_entry_pane_g2

0x0001,

0xf73f,	// (0x0004c5c1) fep_china_uni_entry_pane_g

0x874c,	// (0x000455ce) fep_entry_item_pane

0x8756,	// (0x000455d8) fep_candidate_item_pane

0x875e,	// (0x000455e0) fep_china_uni_candidate_pane_g1

0x8768,	// (0x000455ea) fep_china_uni_candidate_pane_g2

0x8770,	// (0x000455f2) fep_china_uni_candidate_pane_g3

0x8778,	// (0x000455fa) fep_china_uni_candidate_pane_g4

0x0003,

0xf744,	// (0x0004c5c6) fep_china_uni_candidate_pane_g

0x2c7f,	// (0x0003fb01) fep_entry_item_pane_g1

0x8782,	// (0x00045604) fep_entry_item_pane_t1_ParamLimits

0x8782,	// (0x00045604) fep_entry_item_pane_t1

0x8798,	// (0x0004561a) fep_candidate_item_pane_t1_ParamLimits

0x8798,	// (0x0004561a) fep_candidate_item_pane_t1

0x87ad,	// (0x0004562f) fep_candidate_item_pane_t2_ParamLimits

0x87ad,	// (0x0004562f) fep_candidate_item_pane_t2

0x0001,

0xf74d,	// (0x0004c5cf) fep_candidate_item_pane_t_ParamLimits

0xf74d,	// (0x0004c5cf) fep_candidate_item_pane_t

0x76ea,	// (0x0004456c) list_highlight_pane_cp31_ParamLimits

0x76ea,	// (0x0004456c) list_highlight_pane_cp31

0x87bf,	// (0x00045641) level_1_signal_lsc

0x87c8,	// (0x0004564a) level_2_signal_lsc

0x87d1,	// (0x00045653) level_3_signal_lsc

0x87da,	// (0x0004565c) level_4_signal_lsc

0x87e3,	// (0x00045665) level_5_signal_lsc

0x87ec,	// (0x0004566e) level_6_signal_lsc

0x87f5,	// (0x00045677) level_7_signal_lsc

0x87f5,	// (0x00045677) level_1_battery_lsc

0x87fe,	// (0x00045680) level_2_battery_lsc

0x8807,	// (0x00045689) level_3_battery_lsc

0x8810,	// (0x00045692) level_4_battery_lsc

0x8819,	// (0x0004569b) level_5_battery_lsc

0x8822,	// (0x000456a4) level_6_battery_lsc

0x87bf,	// (0x00045641) level_7_battery_lsc

0x882b,	// (0x000456ad) scroll_handle_focus_pane_g1

0x8834,	// (0x000456b6) scroll_handle_focus_pane_g2

0x883d,	// (0x000456bf) scroll_handle_focus_pane_g3

0x0002,

0xf752,	// (0x0004c5d4) scroll_handle_focus_pane_g

0x5270,	// (0x000420f2) list_single_2graphic_pane_g1_ParamLimits

0x5270,	// (0x000420f2) list_single_2graphic_pane_g1

0x5d4c,	// (0x00042bce) list_single_2graphic_pane_g2_ParamLimits

0x5d4c,	// (0x00042bce) list_single_2graphic_pane_g2

0x5d2e,	// (0x00042bb0) list_single_2graphic_pane_g3_ParamLimits

0x5d2e,	// (0x00042bb0) list_single_2graphic_pane_g3

0x607a,	// (0x00042efc) list_single_2graphic_pane_g4_ParamLimits

0x607a,	// (0x00042efc) list_single_2graphic_pane_g4

0x0003,

0xf759,	// (0x0004c5db) list_single_2graphic_pane_g_ParamLimits

0xf759,	// (0x0004c5db) list_single_2graphic_pane_g

0x527c,	// (0x000420fe) list_single_2graphic_pane_t1_ParamLimits

0x527c,	// (0x000420fe) list_single_2graphic_pane_t1

0x6086,	// (0x00042f08) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x6086,	// (0x00042f08) list_double2_graphic_large_graphic_pane_g1

0x4df6,	// (0x00041c78) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4df6,	// (0x00041c78) list_double2_graphic_large_graphic_pane_g2

0x4d43,	// (0x00041bc5) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4d43,	// (0x00041bc5) list_double2_graphic_large_graphic_pane_g3

0x52aa,	// (0x0004212c) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x52aa,	// (0x0004212c) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf762,	// (0x0004c5e4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf762,	// (0x0004c5e4) list_double2_graphic_large_graphic_pane_g

0x52b6,	// (0x00042138) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x52b6,	// (0x00042138) list_double2_graphic_large_graphic_pane_t1

0x52cc,	// (0x0004214e) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x52cc,	// (0x0004214e) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf76b,	// (0x0004c5ed) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf76b,	// (0x0004c5ed) list_double2_graphic_large_graphic_pane_t

0x897f,	// (0x00045801) popup_fast_swap_window_ParamLimits

0x897f,	// (0x00045801) popup_fast_swap_window

0x899d,	// (0x0004581f) popup_side_volume_key_window

0x89bb,	// (0x0004583d) stacon_top_pane

0x89c5,	// (0x00045847) status_pane_ParamLimits

0x89c5,	// (0x00045847) status_pane

0x89bb,	// (0x0004583d) status_small_pane

0x2c89,	// (0x0003fb0b) control_pane

0x2c89,	// (0x0003fb0b) stacon_bottom_pane

0x7f60,	// (0x00044de2) scroll_pane_cp121

0x7f57,	// (0x00044dd9) set_content_pane

0x8846,	// (0x000456c8) bg_active_tab_pane_g1_cp1

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp1

0x8858,	// (0x000456da) bg_active_tab_pane_g3_cp1

0x8846,	// (0x000456c8) bg_passive_tab_pane_g1_cp1

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp1

0x8858,	// (0x000456da) bg_passive_tab_pane_g3_cp1

0x8861,	// (0x000456e3) bg_active_tab_pane_g1_cp2

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp2

0x886a,	// (0x000456ec) bg_active_tab_pane_g3_cp2

0x8861,	// (0x000456e3) bg_passive_tab_pane_g1_cp2

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp2

0x886a,	// (0x000456ec) bg_passive_tab_pane_g3_cp2

0x8873,	// (0x000456f5) bg_active_tab_pane_g1_cp3

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp3

0x887c,	// (0x000456fe) bg_active_tab_pane_g3_cp3

0x8873,	// (0x000456f5) bg_passive_tab_pane_g1_cp3

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp3

0x887c,	// (0x000456fe) bg_passive_tab_pane_g3_cp3

0x8885,	// (0x00045707) bg_active_tab_pane_g1_cp4

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp4

0x8890,	// (0x00045712) bg_active_tab_pane_g3_cp4

0x8885,	// (0x00045707) bg_passive_tab_pane_g1_cp4

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp4

0x8890,	// (0x00045712) bg_passive_tab_pane_g3_cp4

0x88d9,	// (0x0004575b) bg_active_tab_pane_g1_cp5

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp5

0x88e2,	// (0x00045764) bg_active_tab_pane_g3_cp5

0x88d9,	// (0x0004575b) bg_passive_tab_pane_g1_cp5

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp5

0x88e2,	// (0x00045764) bg_passive_tab_pane_g3_cp5

0x88eb,	// (0x0004576d) list_set_graphic_pane_ParamLimits

0x88eb,	// (0x0004576d) list_set_graphic_pane

0x2c89,	// (0x0003fb0b) bg_set_opt_pane_cp4

0x8900,	// (0x00045782) list_set_graphic_pane_g1_ParamLimits

0x8900,	// (0x00045782) list_set_graphic_pane_g1

0x890c,	// (0x0004578e) list_set_graphic_pane_g2_ParamLimits

0x890c,	// (0x0004578e) list_set_graphic_pane_g2

0x0001,

0xf770,	// (0x0004c5f2) list_set_graphic_pane_g_ParamLimits

0xf770,	// (0x0004c5f2) list_set_graphic_pane_g

0x0009,

0xfadf,	// (0x0004c961) volume_small_pane_cp_g

0x8930,	// (0x000457b2) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8930,	// (0x000457b2) list_double2_large_graphic_pane_g1_cp2

0x893e,	// (0x000457c0) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x893e,	// (0x000457c0) list_double2_large_graphic_pane_g2_cp2

0x894f,	// (0x000457d1) list_double2_large_graphic_pane_g3_cp2

0x8957,	// (0x000457d9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8957,	// (0x000457d9) list_double2_large_graphic_pane_t1_cp2

0x896d,	// (0x000457ef) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x896d,	// (0x000457ef) list_double2_large_graphic_pane_t2_cp2

0xabbb,	// (0x00047a3d) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xabbb,	// (0x00047a3d) list_double_large_graphic_pane_g1_cp2

0xabce,	// (0x00047a50) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xabce,	// (0x00047a50) list_double_large_graphic_pane_g2_cp2

0x8ae3,	// (0x00045965) list_double_large_graphic_pane_g3_cp2

0xabdf,	// (0x00047a61) list_double_large_graphic_pane_g4_cp

0xabe7,	// (0x00047a69) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xabe7,	// (0x00047a69) list_double_large_graphic_pane_t1_cp2

0xabfe,	// (0x00047a80) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xabfe,	// (0x00047a80) list_double_large_graphic_pane_t2_cp2

0x89d3,	// (0x00045855) list_double2_graphic_pane_g1_cp2_ParamLimits

0x89d3,	// (0x00045855) list_double2_graphic_pane_g1_cp2

0x89e1,	// (0x00045863) list_double2_graphic_pane_g2_cp2_ParamLimits

0x89e1,	// (0x00045863) list_double2_graphic_pane_g2_cp2

0x89f2,	// (0x00045874) list_double2_graphic_pane_g3_cp2

0x89fc,	// (0x0004587e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x89fc,	// (0x0004587e) list_double2_graphic_pane_t1_cp2

0x8a12,	// (0x00045894) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8a12,	// (0x00045894) list_double2_graphic_pane_t2_cp2

0x8a24,	// (0x000458a6) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8a24,	// (0x000458a6) list_single_number_heading_pane_g1_cp2

0x8a30,	// (0x000458b2) list_single_number_heading_pane_g2_cp2

0x8a38,	// (0x000458ba) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8a38,	// (0x000458ba) list_single_number_heading_pane_t1_cp2

0x8a4e,	// (0x000458d0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a4e,	// (0x000458d0) list_single_number_heading_pane_t2_cp2

0x8a62,	// (0x000458e4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a62,	// (0x000458e4) list_single_number_heading_pane_t3_cp2

0x8a24,	// (0x000458a6) list_single_heading_pane_g1_cp2_ParamLimits

0x8a24,	// (0x000458a6) list_single_heading_pane_g1_cp2

0x8a30,	// (0x000458b2) list_single_heading_pane_g2_cp2

0x8a38,	// (0x000458ba) list_single_heading_pane_t1_cp2_ParamLimits

0x8a38,	// (0x000458ba) list_single_heading_pane_t1_cp2

0xa9b5,	// (0x00047837) list_single_heading_pane_t2_cp2_ParamLimits

0xa9b5,	// (0x00047837) list_single_heading_pane_t2_cp2

0xa8f7,	// (0x00047779) list_double_graphic_pane_g1_cp2_ParamLimits

0xa8f7,	// (0x00047779) list_double_graphic_pane_g1_cp2

0xa903,	// (0x00047785) list_double_graphic_pane_g2_cp2_ParamLimits

0xa903,	// (0x00047785) list_double_graphic_pane_g2_cp2

0xa912,	// (0x00047794) list_double_graphic_pane_g3_cp2

0xa91a,	// (0x0004779c) list_double_graphic_pane_t1_cp2_ParamLimits

0xa91a,	// (0x0004779c) list_double_graphic_pane_t1_cp2

0xa930,	// (0x000477b2) list_double_graphic_pane_t2_cp2_ParamLimits

0xa930,	// (0x000477b2) list_double_graphic_pane_t2_cp2

0x8ad7,	// (0x00045959) list_double_number_pane_g1_cp2_ParamLimits

0x8ad7,	// (0x00045959) list_double_number_pane_g1_cp2

0x8ae3,	// (0x00045965) list_double_number_pane_g2_cp2

0xa8bb,	// (0x0004773d) list_double_number_pane_t1_cp2_ParamLimits

0xa8bb,	// (0x0004773d) list_double_number_pane_t1_cp2

0xa8cf,	// (0x00047751) list_double_number_pane_t2_cp2_ParamLimits

0xa8cf,	// (0x00047751) list_double_number_pane_t2_cp2

0xa8e5,	// (0x00047767) list_double_number_pane_t3_cp2_ParamLimits

0xa8e5,	// (0x00047767) list_double_number_pane_t3_cp2

0xa7a4,	// (0x00047626) list_single_graphic_pane_g1_cp2_ParamLimits

0xa7a4,	// (0x00047626) list_single_graphic_pane_g1_cp2

0x8b3d,	// (0x000459bf) list_single_graphic_pane_g2_cp2_ParamLimits

0x8b3d,	// (0x000459bf) list_single_graphic_pane_g2_cp2

0x8b49,	// (0x000459cb) list_single_graphic_pane_g3_cp2

0xa77a,	// (0x000475fc) list_single_graphic_pane_t1_cp2_ParamLimits

0xa77a,	// (0x000475fc) list_single_graphic_pane_t1_cp2

0x8b3d,	// (0x000459bf) list_single_number_pane_g1_cp2_ParamLimits

0x8b3d,	// (0x000459bf) list_single_number_pane_g1_cp2

0x8b49,	// (0x000459cb) list_single_number_pane_g2_cp2

0xa77a,	// (0x000475fc) list_single_number_pane_t1_cp2_ParamLimits

0xa77a,	// (0x000475fc) list_single_number_pane_t1_cp2

0xa790,	// (0x00047612) list_single_number_pane_t2_cp2_ParamLimits

0xa790,	// (0x00047612) list_single_number_pane_t2_cp2

0x893e,	// (0x000457c0) list_double2_pane_g1_cp2_ParamLimits

0x893e,	// (0x000457c0) list_double2_pane_g1_cp2

0x894f,	// (0x000457d1) list_double2_pane_g2_cp2

0x8aaf,	// (0x00045931) list_double2_pane_t1_cp2_ParamLimits

0x8aaf,	// (0x00045931) list_double2_pane_t1_cp2

0x8ac5,	// (0x00045947) list_double2_pane_t2_cp2_ParamLimits

0x8ac5,	// (0x00045947) list_double2_pane_t2_cp2

0x8ad7,	// (0x00045959) list_double_pane_g1_cp2_ParamLimits

0x8ad7,	// (0x00045959) list_double_pane_g1_cp2

0x8ae3,	// (0x00045965) list_double_pane_g2_cp2

0x8aeb,	// (0x0004596d) list_double_pane_t1_cp2_ParamLimits

0x8aeb,	// (0x0004596d) list_double_pane_t1_cp2

0x8b01,	// (0x00045983) list_double_pane_t2_cp2_ParamLimits

0x8b01,	// (0x00045983) list_double_pane_t2_cp2

0x8b2d,	// (0x000459af) list_single_pane_cp2_g3

0x8b3d,	// (0x000459bf) list_single_pane_g1_cp2_ParamLimits

0x8b3d,	// (0x000459bf) list_single_pane_g1_cp2

0x8b49,	// (0x000459cb) list_single_pane_g2_cp2

0x8b51,	// (0x000459d3) list_single_pane_t1_cp2_ParamLimits

0x8b51,	// (0x000459d3) list_single_pane_t1_cp2

0x8b69,	// (0x000459eb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b69,	// (0x000459eb) list_single_large_graphic_pane_g1_cp2

0x8b77,	// (0x000459f9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b77,	// (0x000459f9) list_single_large_graphic_pane_g2_cp2

0x8b83,	// (0x00045a05) list_single_large_graphic_pane_g3_cp2

0x8b8b,	// (0x00045a0d) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8b8b,	// (0x00045a0d) list_single_large_graphic_pane_g4_cp1

0x8ba5,	// (0x00045a27) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8ba5,	// (0x00045a27) list_single_large_graphic_pane_t1_cp2

0xa744,	// (0x000475c6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa744,	// (0x000475c6) list_single_graphic_heading_pane_g1_cp2

0xa711,	// (0x00047593) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa711,	// (0x00047593) list_single_graphic_heading_pane_g4_cp2

0x8b49,	// (0x000459cb) list_single_graphic_heading_pane_g5_cp2

0xa750,	// (0x000475d2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa750,	// (0x000475d2) list_single_graphic_heading_pane_t1_cp2

0xa766,	// (0x000475e8) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa766,	// (0x000475e8) list_single_graphic_heading_pane_t2_cp2

0xa705,	// (0x00047587) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa705,	// (0x00047587) list_single_2graphic_pane_g1_cp2

0xa711,	// (0x00047593) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa711,	// (0x00047593) list_single_2graphic_pane_g2_cp2

0x8b49,	// (0x000459cb) list_single_2graphic_pane_g3_cp2

0xa722,	// (0x000475a4) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa722,	// (0x000475a4) list_single_2graphic_pane_g4_cp2

0xa72e,	// (0x000475b0) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa72e,	// (0x000475b0) list_single_2graphic_pane_t1_cp2

0x2c7f,	// (0x0003fb01) list_highlight_pane_g10_cp1

0xa2dd,	// (0x0004715f) list_highlight_pane_g1_cp1

0xa2e5,	// (0x00047167) list_highlight_pane_g2_cp1

0xa2ed,	// (0x0004716f) list_highlight_pane_g3_cp1

0xa2f5,	// (0x00047177) list_highlight_pane_g4_cp1

0xa2fd,	// (0x0004717f) list_highlight_pane_g5_cp1

0xa305,	// (0x00047187) list_highlight_pane_g6_cp1

0xa30d,	// (0x0004718f) list_highlight_pane_g7_cp1

0xa315,	// (0x00047197) list_highlight_pane_g8_cp1

0xa31d,	// (0x0004719f) list_highlight_pane_g9_cp1

0xa1fd,	// (0x0004707f) form_field_slider_pane_t3

0xa20b,	// (0x0004708d) form_field_slider_pane_t4

0xa219,	// (0x0004709b) slider_form_pane_ParamLimits

0xa219,	// (0x0004709b) slider_form_pane

0x2c89,	// (0x0003fb0b) control_abbreviations

0x2c89,	// (0x0003fb0b) control_conventions

0x2c89,	// (0x0003fb0b) control_definitions

0x2c89,	// (0x0003fb0b) format_table_attribute

0xaa0b,	// (0x0004788d) bg_popup_preview_window_pane_g9

0x2c89,	// (0x0003fb0b) format_table_data2

0x2c89,	// (0x0003fb0b) format_table_data3

0x2c89,	// (0x0003fb0b) format_table_data_example

0x0008,

0x2c89,	// (0x0003fb0b) intro_purpose

0xf905,	// (0x0004c787) bg_popup_preview_window_pane_g

0x2c89,	// (0x0003fb0b) texts_category

0x2c89,	// (0x0003fb0b) texts_graphics

0x8bbb,	// (0x00045a3d) text_digital

0x8bca,	// (0x00045a4c) text_primary

0x8bd9,	// (0x00045a5b) text_primary_small

0x8be8,	// (0x00045a6a) text_secondary

0x8bf7,	// (0x00045a79) text_title

0xb1a7,	// (0x00048029) bg_passive_tab_pane_g1_cp3_srt

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp3_srt

0xb1b0,	// (0x00048032) bg_passive_tab_pane_g3_cp3_srt

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp3_srt_ParamLimits

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp3_srt

0xb1b9,	// (0x0004803b) tabs_4_active_pane_srt_g1

0xb1c1,	// (0x00048043) tabs_4_active_pane_srt_t1_ParamLimits

0xb1c1,	// (0x00048043) tabs_4_active_pane_srt_t1

0xb1a7,	// (0x00048029) bg_active_tab_pane_g1_cp3_copy1

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp3_copy1

0xb1b0,	// (0x00048032) bg_active_tab_pane_g3_cp3_copy1

0x76ea,	// (0x0004456c) tabs_2_long_active_pane_srt_ParamLimits

0x76ea,	// (0x0004456c) tabs_2_long_active_pane_srt

0x76ea,	// (0x0004456c) tabs_2_long_passive_pane_srt_ParamLimits

0x76ea,	// (0x0004456c) tabs_2_long_passive_pane_srt

0x8174,	// (0x00044ff6) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8174,	// (0x00044ff6) bg_passive_tab_pane_cp4_srt

0xae5b,	// (0x00047cdd) bg_passive_tab_pane_g1_cp4_srt

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp4_srt

0xae64,	// (0x00047ce6) bg_passive_tab_pane_g3_cp4_srt

0x8153,	// (0x00044fd5) bg_active_tab_pane_cp4_srt_ParamLimits

0x8153,	// (0x00044fd5) bg_active_tab_pane_cp4_srt

0xae6d,	// (0x00047cef) tabs_2_long_active_pane_srt_t1_ParamLimits

0xae6d,	// (0x00047cef) tabs_2_long_active_pane_srt_t1

0xae5b,	// (0x00047cdd) bg_active_tab_pane_g1_cp4_srt

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp4_srt

0xae64,	// (0x00047ce6) bg_active_tab_pane_g3_cp4_srt

0x7966,	// (0x000447e8) tabs_3_long_active_pane_srt_ParamLimits

0x7966,	// (0x000447e8) tabs_3_long_active_pane_srt

0x7966,	// (0x000447e8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7966,	// (0x000447e8) tabs_3_long_passive_pane_cp_srt

0x7966,	// (0x000447e8) tabs_3_long_passive_pane_srt_ParamLimits

0x7966,	// (0x000447e8) tabs_3_long_passive_pane_srt

0x8174,	// (0x00044ff6) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8174,	// (0x00044ff6) bg_passive_tab_pane_cp5_srt

0x88d9,	// (0x0004575b) bg_passive_tab_pane_g1_cp5_srt

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp5_srt

0x88e2,	// (0x00045764) bg_passive_tab_pane_g3_cp5_srt

0x8153,	// (0x00044fd5) bg_active_tab_pane_cp5_srt_ParamLimits

0x8153,	// (0x00044fd5) bg_active_tab_pane_cp5_srt

0xae49,	// (0x00047ccb) tabs_3_long_active_pane_srt_t1_ParamLimits

0xae49,	// (0x00047ccb) tabs_3_long_active_pane_srt_t1

0x88d9,	// (0x0004575b) bg_active_tab_pane_g1_cp5_srt

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp5_srt

0x88e2,	// (0x00045764) bg_active_tab_pane_g3_cp5_srt

0xae3b,	// (0x00047cbd) navi_text_pane_srt_t1

0xae33,	// (0x00047cb5) navi_icon_pane_srt_g1

0x8dce,	// (0x00045c50) midp_editing_number_pane_srt

0x8c06,	// (0x00045a88) midp_ticker_pane_srt

0x8dd6,	// (0x00045c58) midp_ticker_pane_srt_g1

0x8dde,	// (0x00045c60) midp_ticker_pane_srt_g2

0x0001,

0xf78f,	// (0x0004c611) midp_ticker_pane_srt_g

0x8de6,	// (0x00045c68) midp_ticker_pane_srt_t1

0xae24,	// (0x00047ca6) midp_editing_number_pane_t1_copy1

0x8c0e,	// (0x00045a90) listscroll_midp_pane

0x8c0e,	// (0x00045a90) midp_form_pane

0x8c7c,	// (0x00045afe) midp_info_popup_window_ParamLimits

0x8c7c,	// (0x00045afe) midp_info_popup_window

0x8035,	// (0x00044eb7) bg_popup_sub_pane_cp50_ParamLimits

0x8035,	// (0x00044eb7) bg_popup_sub_pane_cp50

0x9f13,	// (0x00046d95) listscroll_midp_info_pane_ParamLimits

0x9f13,	// (0x00046d95) listscroll_midp_info_pane

0x9efb,	// (0x00046d7d) listscroll_form_midp_pane_ParamLimits

0x9efb,	// (0x00046d7d) listscroll_form_midp_pane

0x9f07,	// (0x00046d89) scroll_bar_cp050

0x9edb,	// (0x00046d5d) list_midp_pane

0xbbf0,	// (0x00048a72) signal_pane_g2_cp

0x9e15,	// (0x00046c97) listscroll_midp_info_pane_t1_ParamLimits

0x9e15,	// (0x00046c97) listscroll_midp_info_pane_t1

0x9e2d,	// (0x00046caf) listscroll_midp_info_pane_t2_ParamLimits

0x9e2d,	// (0x00046caf) listscroll_midp_info_pane_t2

0x9e6b,	// (0x00046ced) listscroll_midp_info_pane_t3_ParamLimits

0x9e6b,	// (0x00046ced) listscroll_midp_info_pane_t3

0x9ea5,	// (0x00046d27) listscroll_midp_info_pane_t4_ParamLimits

0x9ea5,	// (0x00046d27) listscroll_midp_info_pane_t4

0x0003,

0xf840,	// (0x0004c6c2) listscroll_midp_info_pane_t_ParamLimits

0xf840,	// (0x0004c6c2) listscroll_midp_info_pane_t

0x80ff,	// (0x00044f81) scroll_pane_cp21

0x9daf,	// (0x00046c31) form_midp_field_choice_group_pane

0x9db8,	// (0x00046c3a) form_midp_field_text_pane

0x9dfb,	// (0x00046c7d) form_midp_field_time_pane

0x9e03,	// (0x00046c85) form_midp_gauge_slider_pane

0x9e0c,	// (0x00046c8e) form_midp_gauge_wait_pane

0x2c89,	// (0x0003fb0b) form_midp_image_pane

0x53bd,	// (0x0004223f) list_single_midp_pane_ParamLimits

0x53bd,	// (0x0004223f) list_single_midp_pane

0x9d80,	// (0x00046c02) form_midp_field_text_pane_t1

0x9bb3,	// (0x00046a35) input_focus_pane_cp050

0x9d9e,	// (0x00046c20) list_midp_form_text_pane

0x9d4f,	// (0x00046bd1) form_midp_field_choice_group_pane_t1

0x9d5d,	// (0x00046bdf) input_focus_pane_cp051

0x9d71,	// (0x00046bf3) list_midp_choice_pane

0x2c89,	// (0x0003fb0b) status_idle_pane

0x9d33,	// (0x00046bb5) form_midp_field_time_pane_t1

0x2c7f,	// (0x0003fb01) wait_anim_pane_g2_copy1

0x9d41,	// (0x00046bc3) form_midp_field_time_pane_t2

0x0001,

0x8d2c,	// (0x00045bae) aid_navinavi_width_2_pane

0xf83b,	// (0x0004c6bd) form_midp_field_time_pane_t

0x2c89,	// (0x0003fb0b) input_focus_pane_cp052

0x2c89,	// (0x0003fb0b) bg_input_focus_pane_cp040

0x9cf3,	// (0x00046b75) form_midp_gauge_slider_pane_t1

0x9d01,	// (0x00046b83) form_midp_gauge_slider_pane_t2

0x9d0f,	// (0x00046b91) form_midp_gauge_slider_pane_t3

0x9d1d,	// (0x00046b9f) form_midp_gauge_slider_pane_t4

0x0003,

0xf832,	// (0x0004c6b4) form_midp_gauge_slider_pane_t

0x9d2b,	// (0x00046bad) form_midp_slider_pane

0x76ea,	// (0x0004456c) bg_input_focus_pane_cp041_ParamLimits

0x76ea,	// (0x0004456c) bg_input_focus_pane_cp041

0x9cc0,	// (0x00046b42) form_midp_gauge_wait_pane_t1_ParamLimits

0x9cc0,	// (0x00046b42) form_midp_gauge_wait_pane_t1

0x9cd2,	// (0x00046b54) form_midp_gauge_wait_pane_t2_ParamLimits

0x9cd2,	// (0x00046b54) form_midp_gauge_wait_pane_t2

0x0001,

0xf82d,	// (0x0004c6af) form_midp_gauge_wait_pane_t_ParamLimits

0xf82d,	// (0x0004c6af) form_midp_gauge_wait_pane_t

0x9ce4,	// (0x00046b66) form_midp_wait_pane_ParamLimits

0x9ce4,	// (0x00046b66) form_midp_wait_pane

0x9c8a,	// (0x00046b0c) form_midp_image_pane_g1

0x9c93,	// (0x00046b15) form_midp_image_pane_t1

0x9ca2,	// (0x00046b24) form_midp_image_pane_t2

0x9cb1,	// (0x00046b33) form_midp_image_pane_t3

0x0002,

0xf826,	// (0x0004c6a8) form_midp_image_pane_t

0x9c81,	// (0x00046b03) list_single_midp_pane_g1

0x53ae,	// (0x00042230) list_single_midp_pane_t1

0x9c70,	// (0x00046af2) list_midp_form_item_pane_ParamLimits

0x9c70,	// (0x00046af2) list_midp_form_item_pane

0x8cd4,	// (0x00045b56) list_midp_form_item_pane_t1

0x8ce3,	// (0x00045b65) midp_ticker_pane_g1

0x8cef,	// (0x00045b71) midp_ticker_pane_g2

0x0001,

0xf775,	// (0x0004c5f7) midp_ticker_pane_g

0x8cfb,	// (0x00045b7d) midp_ticker_pane_t1

0xb0a3,	// (0x00047f25) midp_editing_number_pane_t1

0xb081,	// (0x00047f03) midp_editing_number_pane

0xb090,	// (0x00047f12) midp_ticker_pane

0xae14,	// (0x00047c96) ai_message_heading_pane

0x2c89,	// (0x0003fb0b) bg_popup_window_pane_cp14

0xae1c,	// (0x00047c9e) listscroll_ai_message_pane

0xad9a,	// (0x00047c1c) ai_message_heading_pane_g1_ParamLimits

0xad9a,	// (0x00047c1c) ai_message_heading_pane_g1

0xada6,	// (0x00047c28) ai_message_heading_pane_g2_ParamLimits

0xada6,	// (0x00047c28) ai_message_heading_pane_g2

0xadb4,	// (0x00047c36) ai_message_heading_pane_g3_ParamLimits

0xadb4,	// (0x00047c36) ai_message_heading_pane_g3

0xadc0,	// (0x00047c42) ai_message_heading_pane_g4_ParamLimits

0xadc0,	// (0x00047c42) ai_message_heading_pane_g4

0x0003,

0xf967,	// (0x0004c7e9) ai_message_heading_pane_g_ParamLimits

0xf967,	// (0x0004c7e9) ai_message_heading_pane_g

0xadcc,	// (0x00047c4e) ai_message_heading_pane_t1_ParamLimits

0xadcc,	// (0x00047c4e) ai_message_heading_pane_t1

0xade6,	// (0x00047c68) ai_message_heading_pane_t2_ParamLimits

0xade6,	// (0x00047c68) ai_message_heading_pane_t2

0x0001,

0xf970,	// (0x0004c7f2) ai_message_heading_pane_t_ParamLimits

0xf970,	// (0x0004c7f2) ai_message_heading_pane_t

0xadfa,	// (0x00047c7c) bg_popup_heading_pane_cp1_ParamLimits

0xadfa,	// (0x00047c7c) bg_popup_heading_pane_cp1

0xad88,	// (0x00047c0a) list_ai_message_pane_ParamLimits

0xad88,	// (0x00047c0a) list_ai_message_pane

0x80ff,	// (0x00044f81) scroll_pane_cp10

0xad24,	// (0x00047ba6) list_ai_message_pane_g1

0xad2c,	// (0x00047bae) list_ai_message_pane_g2

0x0001,

0xf944,	// (0x0004c7c6) list_ai_message_pane_g

0xad34,	// (0x00047bb6) list_ai_message_pane_t1_ParamLimits

0xad34,	// (0x00047bb6) list_ai_message_pane_t1

0xad49,	// (0x00047bcb) list_ai_message_pane_t2_ParamLimits

0xad49,	// (0x00047bcb) list_ai_message_pane_t2

0xad5e,	// (0x00047be0) list_ai_message_pane_t3_ParamLimits

0xad5e,	// (0x00047be0) list_ai_message_pane_t3

0xad73,	// (0x00047bf5) list_ai_message_pane_t4_ParamLimits

0xad73,	// (0x00047bf5) list_ai_message_pane_t4

0x0003,

0xf949,	// (0x0004c7cb) list_ai_message_pane_t_ParamLimits

0xf949,	// (0x0004c7cb) list_ai_message_pane_t

0xad0d,	// (0x00047b8f) cell_ai_soft_ind_pane_ParamLimits

0xad0d,	// (0x00047b8f) cell_ai_soft_ind_pane

0x8d0d,	// (0x00045b8f) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d0d,	// (0x00045b8f) cell_ai_soft_ind_pane_g1

0x2c89,	// (0x0003fb0b) grid_highlight_cp1

0x8d1a,	// (0x00045b9c) text_secondary_cp56_ParamLimits

0x8d1a,	// (0x00045b9c) text_secondary_cp56

0xace2,	// (0x00047b64) example_general_pane_ParamLimits

0xace2,	// (0x00047b64) example_general_pane

0xacee,	// (0x00047b70) example_parent_pane_g1_ParamLimits

0xacee,	// (0x00047b70) example_parent_pane_g1

0xacfa,	// (0x00047b7c) example_parent_pane_t1_ParamLimits

0xacfa,	// (0x00047b7c) example_parent_pane_t1

0x9347,	// (0x000461c9) popup_preview_text_window_ParamLimits

0x9347,	// (0x000461c9) popup_preview_text_window

0x8b35,	// (0x000459b7) list_single_pane_cp2_g4

0x7a1c,	// (0x0004489e) bg_popup_preview_window_pane_ParamLimits

0x7a1c,	// (0x0004489e) bg_popup_preview_window_pane

0xaa15,	// (0x00047897) popup_preview_text_window_t1_ParamLimits

0xaa15,	// (0x00047897) popup_preview_text_window_t1

0xaa33,	// (0x000478b5) popup_preview_text_window_t2_ParamLimits

0xaa33,	// (0x000478b5) popup_preview_text_window_t2

0xaa7c,	// (0x000478fe) popup_preview_text_window_t3_ParamLimits

0xaa7c,	// (0x000478fe) popup_preview_text_window_t3

0xaac1,	// (0x00047943) popup_preview_text_window_t4_ParamLimits

0xaac1,	// (0x00047943) popup_preview_text_window_t4

0x0004,

0xf918,	// (0x0004c79a) popup_preview_text_window_t_ParamLimits

0xf918,	// (0x0004c79a) popup_preview_text_window_t

0xab3f,	// (0x000479c1) scroll_pane_cp11

0x9ac1,	// (0x00046943) bg_popup_preview_window_pane_g1

0xa9c9,	// (0x0004784b) bg_popup_preview_window_pane_g2

0xa9d3,	// (0x00047855) bg_popup_preview_window_pane_g3

0xa9dd,	// (0x0004785f) bg_popup_preview_window_pane_g4

0xa9e7,	// (0x00047869) bg_popup_preview_window_pane_g5

0xa9f1,	// (0x00047873) bg_popup_preview_window_pane_g6

0xa9f9,	// (0x0004787b) bg_popup_preview_window_pane_g7

0xaa01,	// (0x00047883) bg_popup_preview_window_pane_g8

0x58b3,	// (0x00042735) aid_popup_width_pane

0x9323,	// (0x000461a5) popup_midp_note_alarm_window_ParamLimits

0x9323,	// (0x000461a5) popup_midp_note_alarm_window

0x7f71,	// (0x00044df3) data_form_pane_ParamLimits

0x50ec,	// (0x00041f6e) form_field_data_pane_g1

0x50f6,	// (0x00041f78) form_field_data_pane_t1_ParamLimits

0x7f7d,	// (0x00044dff) input_focus_pane_ParamLimits

0x7f8b,	// (0x00044e0d) data_form_wide_pane_ParamLimits

0x5110,	// (0x00041f92) form_field_data_wide_pane_g1

0x511c,	// (0x00041f9e) form_field_data_wide_pane_t1_ParamLimits

0x7ce2,	// (0x00044b64) input_focus_pane_cp6_ParamLimits

0x80aa,	// (0x00044f2c) input_popup_find_pane_g1_ParamLimits

0x80aa,	// (0x00044f2c) input_popup_find_pane_g1

0x5ed7,	// (0x00042d59) aid_navi_side_left_pane

0x5eec,	// (0x00042d6e) aid_navi_side_right_pane

0xa3d8,	// (0x0004725a) bg_popup_window_pane_cp30_ParamLimits

0xa3d8,	// (0x0004725a) bg_popup_window_pane_cp30

0xa452,	// (0x000472d4) popup_midp_note_alarm_window_g1_ParamLimits

0xa452,	// (0x000472d4) popup_midp_note_alarm_window_g1

0xa482,	// (0x00047304) popup_midp_note_alarm_window_t1_ParamLimits

0xa482,	// (0x00047304) popup_midp_note_alarm_window_t1

0xa523,	// (0x000473a5) popup_midp_note_alarm_window_t2_ParamLimits

0xa523,	// (0x000473a5) popup_midp_note_alarm_window_t2

0xa5d1,	// (0x00047453) popup_midp_note_alarm_window_t3_ParamLimits

0xa5d1,	// (0x00047453) popup_midp_note_alarm_window_t3

0xa603,	// (0x00047485) popup_midp_note_alarm_window_t4_ParamLimits

0xa603,	// (0x00047485) popup_midp_note_alarm_window_t4

0xa629,	// (0x000474ab) popup_midp_note_alarm_window_t5_ParamLimits

0xa629,	// (0x000474ab) popup_midp_note_alarm_window_t5

0x000a,

0xf8b5,	// (0x0004c737) popup_midp_note_alarm_window_t_ParamLimits

0xf8b5,	// (0x0004c737) popup_midp_note_alarm_window_t

0xa6d5,	// (0x00047557) wait_bar_pane_cp1_ParamLimits

0xa6d5,	// (0x00047557) wait_bar_pane_cp1

0x2c89,	// (0x0003fb0b) wait_anim_pane_copy1

0x2c89,	// (0x0003fb0b) wait_border_pane_copy1

0xa0bd,	// (0x00046f3f) wait_border_pane_g1_copy1

0x5136,	// (0x00041fb8) form_field_popup_pane_g1

0x513e,	// (0x00041fc0) form_field_popup_pane_t1_ParamLimits

0x7f7d,	// (0x00044dff) input_focus_pane_cp7_ParamLimits

0x7fb7,	// (0x00044e39) list_form_pane_ParamLimits

0x5158,	// (0x00041fda) form_field_popup_wide_pane_g1

0x5160,	// (0x00041fe2) form_field_popup_wide_pane_t1_ParamLimits

0x7f7d,	// (0x00044dff) input_focus_pane_cp8_ParamLimits

0x7fc3,	// (0x00044e45) list_form_wide_pane_ParamLimits

0xb234,	// (0x000480b6) aid_size_cell_graphic_pane

0x51ec,	// (0x0004206e) data_form_pane_t1_ParamLimits

0x53f7,	// (0x00042279) data_form_wide_pane_t1_ParamLimits

0x966e,	// (0x000464f0) bg_status_flat_pane

0x764a,	// (0x000444cc) title_pane_t1_ParamLimits

0x76b2,	// (0x00044534) title_pane_t2_ParamLimits

0x76d8,	// (0x0004455a) title_pane_t3_ParamLimits

0xf56f,	// (0x0004c3f1) title_pane_t_ParamLimits

0x8582,	// (0x00045404) level_1_signal_ParamLimits

0x858f,	// (0x00045411) level_2_signal_ParamLimits

0x859c,	// (0x0004541e) level_3_signal_ParamLimits

0x85a9,	// (0x0004542b) level_4_signal_ParamLimits

0x85b6,	// (0x00045438) level_5_signal_ParamLimits

0x85c3,	// (0x00045445) level_6_signal_ParamLimits

0x85d0,	// (0x00045452) level_7_signal_ParamLimits

0x8582,	// (0x00045404) level_1_battery_ParamLimits

0x858f,	// (0x00045411) level_2_battery_ParamLimits

0x859c,	// (0x0004541e) level_3_battery_ParamLimits

0x85a9,	// (0x0004542b) level_4_battery_ParamLimits

0x85b6,	// (0x00045438) level_5_battery_ParamLimits

0x85c3,	// (0x00045445) level_6_battery_ParamLimits

0x85d0,	// (0x00045452) level_7_battery_ParamLimits

0xa2dd,	// (0x0004715f) bg_status_flat_pane_g1

0xa2e5,	// (0x00047167) bg_status_flat_pane_g2

0xa2ed,	// (0x0004716f) bg_status_flat_pane_g3

0xa2f5,	// (0x00047177) bg_status_flat_pane_g4

0xa2fd,	// (0x0004717f) bg_status_flat_pane_g5

0xa305,	// (0x00047187) bg_status_flat_pane_g6

0xa30d,	// (0x0004718f) bg_status_flat_pane_g7

0x7700,	// (0x00044582) tabs_3_active_pane_t1_ParamLimits

0x7700,	// (0x00044582) tabs_3_passive_pane_t1_ParamLimits

0x771a,	// (0x0004459c) tabs_4_active_pane_t1_ParamLimits

0x771a,	// (0x0004459c) tabs_4_1_passive_pane_t1_ParamLimits

0x8141,	// (0x00044fc3) tabs_2_active_pane_t1_ParamLimits

0x8141,	// (0x00044fc3) tabs_2_passive_pane_t1_ParamLimits

0x8153,	// (0x00044fd5) bg_active_tab_pane_cp4_ParamLimits

0x8161,	// (0x00044fe3) tabs_2_long_active_pane_t1_ParamLimits

0x8174,	// (0x00044ff6) bg_passive_tab_pane_cp4_ParamLimits

0x6457,	// (0x000432d9) list_single_midp_graphic_pane_t1_ParamLimits

0x8153,	// (0x00044fd5) bg_active_tab_pane_cp5_ParamLimits

0x8180,	// (0x00045002) tabs_3_long_active_pane_t1_ParamLimits

0x8174,	// (0x00044ff6) bg_passive_tab_pane_cp5_ParamLimits

0x6457,	// (0x000432d9) list_single_midp_graphic_pane_t1

0x966e,	// (0x000464f0) bg_status_flat_pane_ParamLimits

0x9739,	// (0x000465bb) indicator_pane_cp2_ParamLimits

0x9739,	// (0x000465bb) indicator_pane_cp2

0x987c,	// (0x000466fe) navi_pane_srt_ParamLimits

0x987c,	// (0x000466fe) navi_pane_srt

0x98a0,	// (0x00046722) popup_clock_digital_analogue_window_cp1

0x77ca,	// (0x0004464c) indicator_pane_t1

0x8c06,	// (0x00045a88) copy_highlight_pane

0x8c06,	// (0x00045a88) cursor_graphics_pane

0x8c06,	// (0x00045a88) graphic_within_text_pane

0x8c06,	// (0x00045a88) link_highlight_pane

0xab02,	// (0x00047984) popup_preview_text_window_t5_ParamLimits

0xab02,	// (0x00047984) popup_preview_text_window_t5

0x8d36,	// (0x00045bb8) cursor_digital_pane

0x8d36,	// (0x00045bb8) cursor_primary_pane

0x8d47,	// (0x00045bc9) cursor_primary_small_pane

0x8d4f,	// (0x00045bd1) cursor_secondary_pane

0x8d57,	// (0x00045bd9) cursor_title_pane

0x8d36,	// (0x00045bb8) link_highlight_digital_pane

0x8d3e,	// (0x00045bc0) link_highlight_primary_pane

0x8d47,	// (0x00045bc9) link_highlight_primary_small_pane

0x8d4f,	// (0x00045bd1) link_highlight_secondary_pane

0x8d57,	// (0x00045bd9) link_highlight_title_pane

0x8d36,	// (0x00045bb8) copy_highlight_digital_pane

0x8d36,	// (0x00045bb8) copy_highlight_primary_pane

0x8d47,	// (0x00045bc9) copy_highlight_primary_small_pane

0x8d4f,	// (0x00045bd1) copy_highlight_secondary_pane

0x8d57,	// (0x00045bd9) copy_highlight_title_pane

0x8d4f,	// (0x00045bd1) graphic_text_digital_pane

0xa37b,	// (0x000471fd) graphic_text_primary_pane

0xa384,	// (0x00047206) graphic_text_primary_small_pane

0x8d47,	// (0x00045bc9) graphic_text_secondary_pane

0x8d36,	// (0x00045bb8) graphic_text_title_pane

0x8d5f,	// (0x00045be1) cursor_primary_pane_g1

0xa36d,	// (0x000471ef) cursor_text_primary_t1

0xa355,	// (0x000471d7) cursor_primary_small_pane_g1

0xa35f,	// (0x000471e1) cursor_text_primary_small_t1

0xa33d,	// (0x000471bf) cursor_primary_small_pane_g1_copy1

0xa347,	// (0x000471c9) cursor_text_primary_small_t1_copy1

0xa325,	// (0x000471a7) cursor_text_title_t1

0xa333,	// (0x000471b5) cursor_title_pane_g1

0x8d5f,	// (0x00045be1) cursor_digital_pane_g1

0x8d69,	// (0x00045beb) cursor_text_digital_t1

0x8d77,	// (0x00045bf9) link_highlight_primary_pane_g1

0xa2ce,	// (0x00047150) link_highlight_primary_pane_t1

0x8d77,	// (0x00045bf9) link_highlight_primary_small_pane_g1

0x8d7f,	// (0x00045c01) link_highlight_primary_small_pane_t1

0x8d8e,	// (0x00045c10) link_highlight_secondary_pane_g1

0x8d96,	// (0x00045c18) link_highlight_secondary_pane_t1

0xa242,	// (0x000470c4) link_highlight_title_pane_g1

0xa24a,	// (0x000470cc) link_highlight_title_pane_t1

0xa22b,	// (0x000470ad) link_highlight_digital_pane_g1

0xa233,	// (0x000470b5) link_highlight_digital_pane_t1

0xa0f3,	// (0x00046f75) copy_highlight_primary_pane_g1

0xa10a,	// (0x00046f8c) copy_highlight_primary_pane_t1

0xa0f3,	// (0x00046f75) copy_highlight_primary_small_pane_g1

0xa0fb,	// (0x00046f7d) copy_highlight_primary_small_pane_t1

0x8da5,	// (0x00045c27) copy_highlight_secondary_pane_g1

0x8dad,	// (0x00045c2f) copy_highlight_secondary_pane_t1

0xa0dc,	// (0x00046f5e) copy_highlight_title_pane_g1

0xa0e4,	// (0x00046f66) copy_highlight_title_pane_t1

0xa0f3,	// (0x00046f75) copy_highlight_digital_pane_g1

0xb404,	// (0x00048286) copy_highlight_digital_pane_t1

0xb358,	// (0x000481da) graphic_text_primary_pane_g1

0xb3e8,	// (0x0004826a) graphic_text_primary_pane_t1

0xb3f6,	// (0x00048278) graphic_text_primary_pane_t2

0x0001,

0xf9e4,	// (0x0004c866) graphic_text_primary_pane_t

0xb3c4,	// (0x00048246) graphic_text_primary_small_pane_g1

0xb3cc,	// (0x0004824e) graphic_text_primary_small_pane_t1

0xb3da,	// (0x0004825c) graphic_text_primary_small_pane_t2

0x0001,

0xf9df,	// (0x0004c861) graphic_text_primary_small_pane_t

0xb3a0,	// (0x00048222) graphic_text_secondary_pane_g1

0xb3a8,	// (0x0004822a) graphic_text_secondary_pane_t1

0xb3b6,	// (0x00048238) graphic_text_secondary_pane_t2

0x0001,

0xf9da,	// (0x0004c85c) graphic_text_secondary_pane_t

0xb37c,	// (0x000481fe) graphic_text_title_pane_g1

0xb384,	// (0x00048206) graphic_text_title_pane_t1

0xb392,	// (0x00048214) graphic_text_title_pane_t2

0x0001,

0xf9d5,	// (0x0004c857) graphic_text_title_pane_t

0xb358,	// (0x000481da) graphic_text_digital_pane_g1

0xb360,	// (0x000481e2) graphic_text_digital_pane_t1

0xb36e,	// (0x000481f0) graphic_text_digital_pane_t2

0x0001,

0xf9d0,	// (0x0004c852) graphic_text_digital_pane_t

0x76ea,	// (0x0004456c) navi_icon_pane_srt_ParamLimits

0x76ea,	// (0x0004456c) navi_icon_pane_srt

0x2c89,	// (0x0003fb0b) navi_midp_pane_srt

0x2c89,	// (0x0003fb0b) navi_navi_pane_srt

0x76ea,	// (0x0004456c) navi_text_pane_srt_ParamLimits

0x76ea,	// (0x0004456c) navi_text_pane_srt

0xb323,	// (0x000481a5) navi_navi_icon_text_pane_srt

0xb32b,	// (0x000481ad) navi_navi_pane_srt_g1_ParamLimits

0xb32b,	// (0x000481ad) navi_navi_pane_srt_g1

0xb33d,	// (0x000481bf) navi_navi_pane_srt_g2_ParamLimits

0xb33d,	// (0x000481bf) navi_navi_pane_srt_g2

0x0001,

0xf9cb,	// (0x0004c84d) navi_navi_pane_srt_g_ParamLimits

0xf9cb,	// (0x0004c84d) navi_navi_pane_srt_g

0xb34f,	// (0x000481d1) navi_navi_tabs_pane_srt

0xb323,	// (0x000481a5) navi_navi_text_pane_srt

0xb323,	// (0x000481a5) navi_navi_volume_pane_srt

0xb314,	// (0x00048196) navi_navi_text_pane_srt_t1

0x681f,	// (0x000436a1) navi_navi_volume_pane_srt_g1

0x6827,	// (0x000436a9) volume_small_pane_srt_ParamLimits

0x6827,	// (0x000436a9) volume_small_pane_srt

0x61dc,	// (0x0004305e) volume_small_pane_srt_g1_ParamLimits

0x61dc,	// (0x0004305e) volume_small_pane_srt_g1

0x61ec,	// (0x0004306e) volume_small_pane_srt_g2_ParamLimits

0x61ec,	// (0x0004306e) volume_small_pane_srt_g2

0x61fd,	// (0x0004307f) volume_small_pane_srt_g3_ParamLimits

0x61fd,	// (0x0004307f) volume_small_pane_srt_g3

0x620e,	// (0x00043090) volume_small_pane_srt_g4_ParamLimits

0x620e,	// (0x00043090) volume_small_pane_srt_g4

0x621f,	// (0x000430a1) volume_small_pane_srt_g5_ParamLimits

0x621f,	// (0x000430a1) volume_small_pane_srt_g5

0x6230,	// (0x000430b2) volume_small_pane_srt_g6_ParamLimits

0x6230,	// (0x000430b2) volume_small_pane_srt_g6

0x6241,	// (0x000430c3) volume_small_pane_srt_g7_ParamLimits

0x6241,	// (0x000430c3) volume_small_pane_srt_g7

0x6252,	// (0x000430d4) volume_small_pane_srt_g8_ParamLimits

0x6252,	// (0x000430d4) volume_small_pane_srt_g8

0x6263,	// (0x000430e5) volume_small_pane_srt_g9_ParamLimits

0x6263,	// (0x000430e5) volume_small_pane_srt_g9

0x6274,	// (0x000430f6) volume_small_pane_srt_g10_ParamLimits

0x6274,	// (0x000430f6) volume_small_pane_srt_g10

0x0009,

0xf77a,	// (0x0004c5fc) volume_small_pane_srt_g_ParamLimits

0xf77a,	// (0x0004c5fc) volume_small_pane_srt_g

0x7ad1,	// (0x00044953) query_popup_data_pane_cp2

0xb2fa,	// (0x0004817c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb2fa,	// (0x0004817c) navi_navi_icon_text_pane_srt_t1

0xa37b,	// (0x000471fd) navi_tabs_2_long_pane_srt

0xa37b,	// (0x000471fd) navi_tabs_2_pane_srt

0xa37b,	// (0x000471fd) navi_tabs_3_long_pane_srt

0xa37b,	// (0x000471fd) navi_tabs_3_pane_srt

0xa37b,	// (0x000471fd) navi_tabs_4_pane_srt

0x67ff,	// (0x00043681) tabs_2_active_pane_srt_ParamLimits

0x67ff,	// (0x00043681) tabs_2_active_pane_srt

0x680f,	// (0x00043691) tabs_2_passive_pane_srt_ParamLimits

0x680f,	// (0x00043691) tabs_2_passive_pane_srt

0x8f84,	// (0x00045e06) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f84,	// (0x00045e06) bg_passive_tab_pane_cp1_srt

0xb2c6,	// (0x00048148) bg_passive_tab_pane_g1_cp1_srt

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp1_srt

0xb2cf,	// (0x00048151) bg_passive_tab_pane_g3_cp1_srt

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp1_srt_ParamLimits

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp1_srt

0xb2d8,	// (0x0004815a) tabs_2_active_pane_srt_g1

0xb2e0,	// (0x00048162) tabs_2_active_pane_srt_t1_ParamLimits

0xb2e0,	// (0x00048162) tabs_2_active_pane_srt_t1

0xb2c6,	// (0x00048148) bg_active_tab_pane_g1_cp1_srt

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp1_srt

0xb2cf,	// (0x00048151) bg_active_tab_pane_g3_cp1_srt

0x67cc,	// (0x0004364e) tabs_3_active_pane_srt_ParamLimits

0x67cc,	// (0x0004364e) tabs_3_active_pane_srt

0x67dd,	// (0x0004365f) tabs_3_passive_pane_cp_srt_ParamLimits

0x67dd,	// (0x0004365f) tabs_3_passive_pane_cp_srt

0x67ee,	// (0x00043670) tabs_3_passive_pane_srt_ParamLimits

0x67ee,	// (0x00043670) tabs_3_passive_pane_srt

0x8f84,	// (0x00045e06) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f84,	// (0x00045e06) bg_passive_tab_pane_cp2_srt

0x8dbc,	// (0x00045c3e) bg_passive_tab_pane_g1_cp2_srt

0x884f,	// (0x000456d1) bg_passive_tab_pane_g2_cp2_srt

0x8dc5,	// (0x00045c47) bg_passive_tab_pane_g3_cp2_srt

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp2_srt_ParamLimits

0x76ea,	// (0x0004456c) bg_active_tab_pane_cp2_srt

0xb2ac,	// (0x0004812e) tabs_3_active_pane_srt_g1

0xb2b4,	// (0x00048136) tabs_3_active_pane_srt_t1_ParamLimits

0xb2b4,	// (0x00048136) tabs_3_active_pane_srt_t1

0x8dbc,	// (0x00045c3e) bg_active_tab_pane_g1_cp2_srt

0x884f,	// (0x000456d1) bg_active_tab_pane_g2_cp2_srt

0x8dc5,	// (0x00045c47) bg_active_tab_pane_g3_cp2_srt

0x6784,	// (0x00043606) tabs_4_active_pane_srt_ParamLimits

0x6784,	// (0x00043606) tabs_4_active_pane_srt

0x6796,	// (0x00043618) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6796,	// (0x00043618) tabs_4_passive_pane_cp2_srt

0x8f1a,	// (0x00045d9c) aid_size_cell_toolbar

0x8174,	// (0x00044ff6) main_idle_act_pane_ParamLimits

0x9149,	// (0x00045fcb) popup_large_graphic_colour_window_ParamLimits

0x94f0,	// (0x00046372) popup_toolbar_window_ParamLimits

0x94f0,	// (0x00046372) popup_toolbar_window

0xb0c6,	// (0x00047f48) list_single_graphic_2heading_pane_ParamLimits

0xb0c6,	// (0x00047f48) list_single_graphic_2heading_pane

0x8330,	// (0x000451b2) aid_size_cell_apps_grid_lsc_pane

0x8342,	// (0x000451c4) aid_size_cell_apps_grid_prt_pane

0x8f84,	// (0x00045e06) bg_wml_button_pane_cp1_ParamLimits

0x8f84,	// (0x00045e06) bg_wml_button_pane_cp1

0x9d80,	// (0x00046c02) form_midp_field_text_pane_t1_ParamLimits

0x9bb3,	// (0x00046a35) input_focus_pane_cp050_ParamLimits

0x9d9e,	// (0x00046c20) list_midp_form_text_pane_ParamLimits

0x9d5d,	// (0x00046bdf) input_focus_pane_cp051_ParamLimits

0x9d71,	// (0x00046bf3) list_midp_choice_pane_ParamLimits

0x9c44,	// (0x00046ac6) list_single_2graphic_pane_cp3_ParamLimits

0x9c44,	// (0x00046ac6) list_single_2graphic_pane_cp3

0x9c54,	// (0x00046ad6) list_single_midp_graphic_pane_ParamLimits

0x9c54,	// (0x00046ad6) list_single_midp_graphic_pane

0x52f6,	// (0x00042178) list_single_graphic_2heading_pane_g1_ParamLimits

0x52f6,	// (0x00042178) list_single_graphic_2heading_pane_g1

0x5302,	// (0x00042184) list_single_graphic_2heading_pane_g4_ParamLimits

0x5302,	// (0x00042184) list_single_graphic_2heading_pane_g4

0x530e,	// (0x00042190) list_single_graphic_2heading_pane_g5_ParamLimits

0x530e,	// (0x00042190) list_single_graphic_2heading_pane_g5

0x0002,

0xf7cd,	// (0x0004c64f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7cd,	// (0x0004c64f) list_single_graphic_2heading_pane_g

0x531a,	// (0x0004219c) list_single_graphic_2heading_pane_t1_ParamLimits

0x531a,	// (0x0004219c) list_single_graphic_2heading_pane_t1

0x532e,	// (0x000421b0) list_single_graphic_2heading_pane_t2_ParamLimits

0x532e,	// (0x000421b0) list_single_graphic_2heading_pane_t2

0x534a,	// (0x000421cc) list_single_graphic_2heading_pane_t3_ParamLimits

0x534a,	// (0x000421cc) list_single_graphic_2heading_pane_t3

0x0002,

0xf7d4,	// (0x0004c656) list_single_graphic_2heading_pane_t_ParamLimits

0xf7d4,	// (0x0004c656) list_single_graphic_2heading_pane_t

0x99ff,	// (0x00046881) bg_popup_sub_pane_cp2

0x9a29,	// (0x000468ab) grid_toobar_pane

0x63cf,	// (0x00043251) cell_toolbar_pane_ParamLimits

0x63cf,	// (0x00043251) cell_toolbar_pane

0x9a65,	// (0x000468e7) cell_toolbar_pane_g1_ParamLimits

0x9a65,	// (0x000468e7) cell_toolbar_pane_g1

0x9a79,	// (0x000468fb) cell_toolbar_pane_g2_ParamLimits

0x9a79,	// (0x000468fb) cell_toolbar_pane_g2

0x0001,

0xf7e2,	// (0x0004c664) cell_toolbar_pane_g_ParamLimits

0xf7e2,	// (0x0004c664) cell_toolbar_pane_g

0x9a9b,	// (0x0004691d) grid_highlight_pane_cp2_ParamLimits

0x9a9b,	// (0x0004691d) grid_highlight_pane_cp2

0x9ab5,	// (0x00046937) toolbar_button_pane

0x9ac1,	// (0x00046943) toolbar_button_pane_g1

0x9ac9,	// (0x0004694b) toolbar_button_pane_g2

0x9ad1,	// (0x00046953) toolbar_button_pane_g3

0x9ad9,	// (0x0004695b) toolbar_button_pane_g4

0x9ae1,	// (0x00046963) toolbar_button_pane_g5

0x9ae9,	// (0x0004696b) toolbar_button_pane_g6

0x9af1,	// (0x00046973) toolbar_button_pane_g7

0x9af9,	// (0x0004697b) toolbar_button_pane_g8

0x9b01,	// (0x00046983) toolbar_button_pane_g9

0x0009,

0xf7e7,	// (0x0004c669) toolbar_button_pane_g

0x6413,	// (0x00043295) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6413,	// (0x00043295) list_single_2graphic_pane_g1_cp3

0x641f,	// (0x000432a1) list_single_2graphic_pane_g2_cp3_ParamLimits

0x641f,	// (0x000432a1) list_single_2graphic_pane_g2_cp3

0x8a30,	// (0x000458b2) list_single_2graphic_pane_g3_cp3

0x6430,	// (0x000432b2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6430,	// (0x000432b2) list_single_2graphic_pane_g4_cp3

0x643c,	// (0x000432be) list_single_2graphic_pane_t1_cp3_ParamLimits

0x643c,	// (0x000432be) list_single_2graphic_pane_t1_cp3

0x8a24,	// (0x000458a6) list_single_midp_graphic_pane_g2_ParamLimits

0x8a24,	// (0x000458a6) list_single_midp_graphic_pane_g2

0x52de,	// (0x00042160) aid_zoom_text_primary

0x52e6,	// (0x00042168) aid_zoom_text_secondary

0x8e79,	// (0x00045cfb) status_small_pane_g7_ParamLimits

0x8e79,	// (0x00045cfb) status_small_pane_g7

0x8e9c,	// (0x00045d1e) status_small_pane_t1_ParamLimits

0x762d,	// (0x000444af) title_pane_g2

0x0003,

0xf566,	// (0x0004c3e8) title_pane_g

0x7b7a,	// (0x000449fc) aid_size_cell_colour_1_pane_ParamLimits

0x7b7a,	// (0x000449fc) aid_size_cell_colour_1_pane

0x7b8e,	// (0x00044a10) aid_size_cell_colour_2_pane_ParamLimits

0x7b8e,	// (0x00044a10) aid_size_cell_colour_2_pane

0x7ba2,	// (0x00044a24) aid_size_cell_colour_3_pane_ParamLimits

0x7ba2,	// (0x00044a24) aid_size_cell_colour_3_pane

0x7bb6,	// (0x00044a38) aid_size_cell_colour_4_pane_ParamLimits

0x7bb6,	// (0x00044a38) aid_size_cell_colour_4_pane

0x5e13,	// (0x00042c95) title_pane_stacon_g1_ParamLimits

0x5e13,	// (0x00042c95) title_pane_stacon_g1

0xa161,	// (0x00046fe3) popup_note_wait_window_g3_ParamLimits

0xa161,	// (0x00046fe3) popup_note_wait_window_g3

0xa1d8,	// (0x0004705a) popup_note_wait_window_t5_ParamLimits

0xa1d8,	// (0x0004705a) popup_note_wait_window_t5

0x2c89,	// (0x0003fb0b) main_feb_china_hwr_fs_writing_pane

0x9010,	// (0x00045e92) popup_feb_china_hwr_fs_window_ParamLimits

0x9010,	// (0x00045e92) popup_feb_china_hwr_fs_window

0x646d,	// (0x000432ef) aid_size_cell_hwr_fs_ParamLimits

0x646d,	// (0x000432ef) aid_size_cell_hwr_fs

0x9bb3,	// (0x00046a35) bg_popup_sub_pane_cp3_ParamLimits

0x9bb3,	// (0x00046a35) bg_popup_sub_pane_cp3

0x6482,	// (0x00043304) grid_hwr_fs_pane_ParamLimits

0x6482,	// (0x00043304) grid_hwr_fs_pane

0x649a,	// (0x0004331c) linegrid_hwr_fs_pane_ParamLimits

0x649a,	// (0x0004331c) linegrid_hwr_fs_pane

0x64aa,	// (0x0004332c) cell_hwr_fs_pane_ParamLimits

0x64aa,	// (0x0004332c) cell_hwr_fs_pane

0x9bbf,	// (0x00046a41) linegrid_hwr_fs_pane_g1_ParamLimits

0x9bbf,	// (0x00046a41) linegrid_hwr_fs_pane_g1

0x9bcb,	// (0x00046a4d) linegrid_hwr_fs_pane_g2_ParamLimits

0x9bcb,	// (0x00046a4d) linegrid_hwr_fs_pane_g2

0x9bdd,	// (0x00046a5f) linegrid_hwr_fs_pane_g3_ParamLimits

0x9bdd,	// (0x00046a5f) linegrid_hwr_fs_pane_g3

0x64ce,	// (0x00043350) linegrid_hwr_fs_pane_g4_ParamLimits

0x64ce,	// (0x00043350) linegrid_hwr_fs_pane_g4

0x64ec,	// (0x0004336e) linegrid_hwr_fs_pane_g5_ParamLimits

0x64ec,	// (0x0004336e) linegrid_hwr_fs_pane_g5

0x0004,

0xf812,	// (0x0004c694) linegrid_hwr_fs_pane_g_ParamLimits

0xf812,	// (0x0004c694) linegrid_hwr_fs_pane_g

0x9be9,	// (0x00046a6b) cell_hwr_fs_pane_g1_ParamLimits

0x9be9,	// (0x00046a6b) cell_hwr_fs_pane_g1

0x9936,	// (0x000467b8) cell_hwr_fs_pane_g2_ParamLimits

0x9936,	// (0x000467b8) cell_hwr_fs_pane_g2

0x9bff,	// (0x00046a81) cell_hwr_fs_pane_g3_ParamLimits

0x9bff,	// (0x00046a81) cell_hwr_fs_pane_g3

0x9c0c,	// (0x00046a8e) cell_hwr_fs_pane_g4_ParamLimits

0x9c0c,	// (0x00046a8e) cell_hwr_fs_pane_g4

0x0003,

0xf81d,	// (0x0004c69f) cell_hwr_fs_pane_g_ParamLimits

0xf81d,	// (0x0004c69f) cell_hwr_fs_pane_g

0x6502,	// (0x00043384) cell_hwr_fs_pane_t1

0x2c89,	// (0x0003fb0b) grid_highlight_pane_cp6

0x2c89,	// (0x0003fb0b) main_idle_act2_pane

0x80e6,	// (0x00044f68) aid_inside_area_popup_secondary

0xa811,	// (0x00047693) aid_inside_area_window_primary_ParamLimits

0xa811,	// (0x00047693) aid_inside_area_window_primary

0xb413,	// (0x00048295) ai2_news_ticker_pane

0xb41b,	// (0x0004829d) aid_size_cell_ai1_link_ParamLimits

0xb41b,	// (0x0004829d) aid_size_cell_ai1_link

0xb435,	// (0x000482b7) popup_ai2_data_window_ParamLimits

0xb435,	// (0x000482b7) popup_ai2_data_window

0xb453,	// (0x000482d5) popup_ai2_link_window_ParamLimits

0xb453,	// (0x000482d5) popup_ai2_link_window

0x9bb3,	// (0x00046a35) bg_popup_sub_pane_cp4_ParamLimits

0x9bb3,	// (0x00046a35) bg_popup_sub_pane_cp4

0xb469,	// (0x000482eb) grid_ai2_link_pane_ParamLimits

0xb469,	// (0x000482eb) grid_ai2_link_pane

0xb480,	// (0x00048302) popup_ai2_link_window_g1_ParamLimits

0xb480,	// (0x00048302) popup_ai2_link_window_g1

0xb48c,	// (0x0004830e) popup_ai2_link_window_g2_ParamLimits

0xb48c,	// (0x0004830e) popup_ai2_link_window_g2

0x0001,

0xf9e9,	// (0x0004c86b) popup_ai2_link_window_g_ParamLimits

0xf9e9,	// (0x0004c86b) popup_ai2_link_window_g

0xb49d,	// (0x0004831f) ai2_mp_button_pane

0xb4a5,	// (0x00048327) ai2_mp_volume_pane

0x9d5d,	// (0x00046bdf) bg_popup_sub_pane_cp5_ParamLimits

0x9d5d,	// (0x00046bdf) bg_popup_sub_pane_cp5

0xb4ad,	// (0x0004832f) heading_ai2_gene_pane_ParamLimits

0xb4ad,	// (0x0004832f) heading_ai2_gene_pane

0xb4b9,	// (0x0004833b) list_ai2_gene_pane_ParamLimits

0xb4b9,	// (0x0004833b) list_ai2_gene_pane

0xb501,	// (0x00048383) cell_ai2_link_pane_ParamLimits

0xb501,	// (0x00048383) cell_ai2_link_pane

0xb517,	// (0x00048399) cell_ai2_link_pane_g1

0x2c89,	// (0x0003fb0b) grid_highlight_pane_cp7

0x683c,	// (0x000436be) ai2_mp_volume_pane_g1

0xb5ea,	// (0x0004846c) ai2_mp_volume_pane_g2

0xb55f,	// (0x000483e1) list_ai2_gene_pane_t1

0xb5f2,	// (0x00048474) ai2_mp_volume_pane_g3

0x0002,

0xfa02,	// (0x0004c884) ai2_mp_volume_pane_g

0x6844,	// (0x000436c6) volume_small_pane_cp3

0xb5fa,	// (0x0004847c) aid_size_cell_ai2_button

0xb602,	// (0x00048484) grid_ai2_button_pane

0xb60b,	// (0x0004848d) cell_ai2_button_pane_ParamLimits

0xb60b,	// (0x0004848d) cell_ai2_button_pane

0x2c7f,	// (0x0003fb01) cell_ai2_button_pane_g1

0x2c89,	// (0x0003fb0b) grid_highlight_pane_cp8

0xb5aa,	// (0x0004842c) ai2_gene_pane_t1_ParamLimits

0xb5aa,	// (0x0004842c) ai2_gene_pane_t1

0x8f10,	// (0x00045d92) aid_height_parent_landscape

0xaebd,	// (0x00047d3f) aid_height_set_list

0xaece,	// (0x00047d50) aid_size_parent

0xb234,	// (0x000480b6) aid_size_cell_graphic_pane_ParamLimits

0xb4c9,	// (0x0004834b) popup_ai2_data_window_g1_ParamLimits

0xb4c9,	// (0x0004834b) popup_ai2_data_window_g1

0xb4d5,	// (0x00048357) ai2_news_ticker_pane_g1

0xb4dd,	// (0x0004835f) ai2_news_ticker_pane_g2

0x0001,

0xf9ee,	// (0x0004c870) ai2_news_ticker_pane_g

0xb4e5,	// (0x00048367) ai2_news_ticker_pane_t1

0xb4f3,	// (0x00048375) ai2_news_ticker_pane_t2

0x0001,

0xf9f3,	// (0x0004c875) ai2_news_ticker_pane_t

0xb520,	// (0x000483a2) heading_ai2_gene_pane_g1

0xb528,	// (0x000483aa) heading_ai2_gene_pane_t1_ParamLimits

0xb528,	// (0x000483aa) heading_ai2_gene_pane_t1

0xb53d,	// (0x000483bf) list_highlight_pane_cp6

0xb545,	// (0x000483c7) ai2_gene_pane_ParamLimits

0xb545,	// (0x000483c7) ai2_gene_pane

0xb56d,	// (0x000483ef) list_ai2_gene_pane_t2

0x0001,

0xf9f8,	// (0x0004c87a) list_ai2_gene_pane_t

0xb57b,	// (0x000483fd) list_highlight_pane_cp8_ParamLimits

0xb57b,	// (0x000483fd) list_highlight_pane_cp8

0xb58c,	// (0x0004840e) ai2_gene_pane_g1_ParamLimits

0xb58c,	// (0x0004840e) ai2_gene_pane_g1

0xb59e,	// (0x00048420) ai2_gene_pane_g2_ParamLimits

0xb59e,	// (0x00048420) ai2_gene_pane_g2

0x0001,

0xf9fd,	// (0x0004c87f) ai2_gene_pane_g_ParamLimits

0xf9fd,	// (0x0004c87f) ai2_gene_pane_g

0x7f07,	// (0x00044d89) scroll_pane_cp12

0x638e,	// (0x00043210) control_pane_t3_ParamLimits

0x638e,	// (0x00043210) control_pane_t3

0x8e8d,	// (0x00045d0f) status_small_pane_g8_ParamLimits

0x8e8d,	// (0x00045d0f) status_small_pane_g8

0x910e,	// (0x00045f90) popup_find_window_ParamLimits

0x9339,	// (0x000461bb) popup_note_image_window_ParamLimits

0x5362,	// (0x000421e4) list_double2_graphic_pane_vc_g1_ParamLimits

0x5362,	// (0x000421e4) list_double2_graphic_pane_vc_g1

0x8b77,	// (0x000459f9) list_double2_graphic_pane_vc_g2_ParamLimits

0x8b77,	// (0x000459f9) list_double2_graphic_pane_vc_g2

0x63ff,	// (0x00043281) list_double2_graphic_pane_vc_g3_ParamLimits

0x63ff,	// (0x00043281) list_double2_graphic_pane_vc_g3

0x0002,

0xf7db,	// (0x0004c65d) list_double2_graphic_pane_vc_g_ParamLimits

0xf7db,	// (0x0004c65d) list_double2_graphic_pane_vc_g

0x536e,	// (0x000421f0) list_double2_graphic_pane_vc_t1_ParamLimits

0x536e,	// (0x000421f0) list_double2_graphic_pane_vc_t1

0x8b77,	// (0x000459f9) list_single_heading_pane_vc_g1_ParamLimits

0x8b77,	// (0x000459f9) list_single_heading_pane_vc_g1

0x63ff,	// (0x00043281) list_single_heading_pane_vc_g2_ParamLimits

0x63ff,	// (0x00043281) list_single_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c67e) list_single_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c67e) list_single_heading_pane_vc_g

0x5384,	// (0x00042206) list_single_heading_pane_vc_t1_ParamLimits

0x5384,	// (0x00042206) list_single_heading_pane_vc_t1

0x539c,	// (0x0004221e) list_single_heading_pane_vc_t2_ParamLimits

0x539c,	// (0x0004221e) list_single_heading_pane_vc_t2

0x0001,

0xf801,	// (0x0004c683) list_single_heading_pane_vc_t_ParamLimits

0xf801,	// (0x0004c683) list_single_heading_pane_vc_t

0x9b09,	// (0x0004698b) list_setting_number_pane_vc_g1_ParamLimits

0x9b09,	// (0x0004698b) list_setting_number_pane_vc_g1

0x9b15,	// (0x00046997) list_setting_number_pane_vc_g2_ParamLimits

0x9b15,	// (0x00046997) list_setting_number_pane_vc_g2

0x0001,

0xf806,	// (0x0004c688) list_setting_number_pane_vc_g_ParamLimits

0xf806,	// (0x0004c688) list_setting_number_pane_vc_g

0x9b21,	// (0x000469a3) list_setting_number_pane_vc_t1_ParamLimits

0x9b21,	// (0x000469a3) list_setting_number_pane_vc_t1

0x9b35,	// (0x000469b7) list_setting_number_pane_vc_t2_ParamLimits

0x9b35,	// (0x000469b7) list_setting_number_pane_vc_t2

0x9b51,	// (0x000469d3) list_setting_number_pane_vc_t3_ParamLimits

0x9b51,	// (0x000469d3) list_setting_number_pane_vc_t3

0x0002,

0xf80b,	// (0x0004c68d) list_setting_number_pane_vc_t_ParamLimits

0xf80b,	// (0x0004c68d) list_setting_number_pane_vc_t

0x9b79,	// (0x000469fb) set_value_pane_vc_ParamLimits

0x9b79,	// (0x000469fb) set_value_pane_vc

0xb0c6,	// (0x00047f48) list_double2_graphic_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double2_graphic_pane_vc

0xb0c6,	// (0x00047f48) list_double2_large_graphic_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double2_large_graphic_pane_vc

0xb0c6,	// (0x00047f48) list_double2_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double2_pane_vc

0xb0c6,	// (0x00047f48) list_double_graphic_heading_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double_graphic_heading_pane_vc

0xb0c6,	// (0x00047f48) list_double_graphic_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double_graphic_pane_vc

0xb0c6,	// (0x00047f48) list_double_heading_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double_heading_pane_vc

0xb0c6,	// (0x00047f48) list_double_large_graphic_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double_large_graphic_pane_vc

0xb0c6,	// (0x00047f48) list_double_number_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double_number_pane_vc

0xb0c6,	// (0x00047f48) list_double_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double_pane_vc

0xb0c6,	// (0x00047f48) list_double_time_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_double_time_pane_vc

0xb0c6,	// (0x00047f48) list_setting_number_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_setting_number_pane_vc

0xb0c6,	// (0x00047f48) list_setting_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_setting_pane_vc

0xb0c6,	// (0x00047f48) list_single_graphic_heading_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_single_graphic_heading_pane_vc

0xb0c6,	// (0x00047f48) list_single_heading_pane_vc_ParamLimits

0xb0c6,	// (0x00047f48) list_single_heading_pane_vc

0xb0da,	// (0x00047f5c) list_single_number_heading_pane_vc_ParamLimits

0xb0da,	// (0x00047f5c) list_single_number_heading_pane_vc

0x5362,	// (0x000421e4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x5362,	// (0x000421e4) list_double_graphic_heading_pane_vc_g1

0x684d,	// (0x000436cf) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x684d,	// (0x000436cf) list_double_graphic_heading_pane_vc_g2

0x6859,	// (0x000436db) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6859,	// (0x000436db) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa09,	// (0x0004c88b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa09,	// (0x0004c88b) list_double_graphic_heading_pane_vc_g

0x5443,	// (0x000422c5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5443,	// (0x000422c5) list_double_graphic_heading_pane_vc_t1

0x5384,	// (0x00042206) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5384,	// (0x00042206) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa10,	// (0x0004c892) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa10,	// (0x0004c892) list_double_graphic_heading_pane_vc_t

0x9b09,	// (0x0004698b) list_setting_pane_vc_g1_ParamLimits

0x9b09,	// (0x0004698b) list_setting_pane_vc_g1

0x9b15,	// (0x00046997) list_setting_pane_vc_g2_ParamLimits

0x9b15,	// (0x00046997) list_setting_pane_vc_g2

0x0001,

0xf806,	// (0x0004c688) list_setting_pane_vc_g_ParamLimits

0xf806,	// (0x0004c688) list_setting_pane_vc_g

0xb847,	// (0x000486c9) list_setting_pane_vc_t1_ParamLimits

0xb847,	// (0x000486c9) list_setting_pane_vc_t1

0xb85b,	// (0x000486dd) list_setting_pane_vc_t2_ParamLimits

0xb85b,	// (0x000486dd) list_setting_pane_vc_t2

0x0001,

0xfa3e,	// (0x0004c8c0) list_setting_pane_vc_t_ParamLimits

0xfa3e,	// (0x0004c8c0) list_setting_pane_vc_t

0x9b79,	// (0x000469fb) set_value_pane_cp_vc_ParamLimits

0x9b79,	// (0x000469fb) set_value_pane_cp_vc

0x8b77,	// (0x000459f9) list_single_number_heading_pane_vc_g1_ParamLimits

0x8b77,	// (0x000459f9) list_single_number_heading_pane_vc_g1

0x63ff,	// (0x00043281) list_single_number_heading_pane_vc_g2_ParamLimits

0x63ff,	// (0x00043281) list_single_number_heading_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c67e) list_single_number_heading_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c67e) list_single_number_heading_pane_vc_g

0x5384,	// (0x00042206) list_single_number_heading_pane_vc_t1_ParamLimits

0x5384,	// (0x00042206) list_single_number_heading_pane_vc_t1

0x5455,	// (0x000422d7) list_single_number_heading_pane_vc_t2_ParamLimits

0x5455,	// (0x000422d7) list_single_number_heading_pane_vc_t2

0x5467,	// (0x000422e9) list_single_number_heading_pane_vc_t3_ParamLimits

0x5467,	// (0x000422e9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa43,	// (0x0004c8c5) list_single_number_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x0004c8c5) list_single_number_heading_pane_vc_t

0x5362,	// (0x000421e4) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5362,	// (0x000421e4) list_single_graphic_heading_pane_vc_g1

0x8b77,	// (0x000459f9) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8b77,	// (0x000459f9) list_single_graphic_heading_pane_vc_g4

0x63ff,	// (0x00043281) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x63ff,	// (0x00043281) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7db,	// (0x0004c65d) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7db,	// (0x0004c65d) list_single_graphic_heading_pane_vc_g

0x5384,	// (0x00042206) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5384,	// (0x00042206) list_single_graphic_heading_pane_vc_t1

0x5479,	// (0x000422fb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5479,	// (0x000422fb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4a,	// (0x0004c8cc) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4a,	// (0x0004c8cc) list_single_graphic_heading_pane_vc_t

0x8b77,	// (0x000459f9) list_double2_pane_vc_g1_ParamLimits

0x8b77,	// (0x000459f9) list_double2_pane_vc_g1

0x63ff,	// (0x00043281) list_double2_pane_vc_g2_ParamLimits

0x63ff,	// (0x00043281) list_double2_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c67e) list_double2_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c67e) list_double2_pane_vc_g

0x548b,	// (0x0004230d) list_double2_pane_vc_t1_ParamLimits

0x548b,	// (0x0004230d) list_double2_pane_vc_t1

0x6865,	// (0x000436e7) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6865,	// (0x000436e7) list_double2_large_graphic_pane_vc_g1

0x8b77,	// (0x000459f9) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8b77,	// (0x000459f9) list_double2_large_graphic_pane_vc_g2

0x63ff,	// (0x00043281) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x63ff,	// (0x00043281) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa4f,	// (0x0004c8d1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa4f,	// (0x0004c8d1) list_double2_large_graphic_pane_vc_g

0x54a1,	// (0x00042323) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x54a1,	// (0x00042323) list_double2_large_graphic_pane_vc_t1

0x6871,	// (0x000436f3) list_double_time_pane_vc_g1_ParamLimits

0x6871,	// (0x000436f3) list_double_time_pane_vc_g1

0x687d,	// (0x000436ff) list_double_time_pane_vc_g2_ParamLimits

0x687d,	// (0x000436ff) list_double_time_pane_vc_g2

0x0001,

0xfa56,	// (0x0004c8d8) list_double_time_pane_vc_g_ParamLimits

0xfa56,	// (0x0004c8d8) list_double_time_pane_vc_g

0x54b7,	// (0x00042339) list_double_time_pane_vc_t1_ParamLimits

0x54b7,	// (0x00042339) list_double_time_pane_vc_t1

0x54d2,	// (0x00042354) list_double_time_pane_vc_t2_ParamLimits

0x54d2,	// (0x00042354) list_double_time_pane_vc_t2

0x5510,	// (0x00042392) list_double_time_pane_vc_t3_ParamLimits

0x5510,	// (0x00042392) list_double_time_pane_vc_t3

0x5528,	// (0x000423aa) list_double_time_pane_vc_t4_ParamLimits

0x5528,	// (0x000423aa) list_double_time_pane_vc_t4

0x0003,

0xfa5b,	// (0x0004c8dd) list_double_time_pane_vc_t_ParamLimits

0xfa5b,	// (0x0004c8dd) list_double_time_pane_vc_t

0x8b77,	// (0x000459f9) list_double_pane_vc_g1_ParamLimits

0x8b77,	// (0x000459f9) list_double_pane_vc_g1

0x63ff,	// (0x00043281) list_double_pane_vc_g2_ParamLimits

0x63ff,	// (0x00043281) list_double_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c67e) list_double_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c67e) list_double_pane_vc_g

0x553c,	// (0x000423be) list_double_pane_vc_t1_ParamLimits

0x553c,	// (0x000423be) list_double_pane_vc_t1

0x5550,	// (0x000423d2) list_double_pane_vc_t2_ParamLimits

0x5550,	// (0x000423d2) list_double_pane_vc_t2

0x0001,

0xfa64,	// (0x0004c8e6) list_double_pane_vc_t_ParamLimits

0xfa64,	// (0x0004c8e6) list_double_pane_vc_t

0x8b77,	// (0x000459f9) list_double_number_pane_vc_g1_ParamLimits

0x8b77,	// (0x000459f9) list_double_number_pane_vc_g1

0x63ff,	// (0x00043281) list_double_number_pane_vc_g2_ParamLimits

0x63ff,	// (0x00043281) list_double_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x0004c67e) list_double_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x0004c67e) list_double_number_pane_vc_g

0x5566,	// (0x000423e8) list_double_number_pane_vc_t1_ParamLimits

0x5566,	// (0x000423e8) list_double_number_pane_vc_t1

0x557a,	// (0x000423fc) list_double_number_pane_vc_t2_ParamLimits

0x557a,	// (0x000423fc) list_double_number_pane_vc_t2

0x5550,	// (0x000423d2) list_double_number_pane_vc_t3_ParamLimits

0x5550,	// (0x000423d2) list_double_number_pane_vc_t3

0x0002,

0xfa69,	// (0x0004c8eb) list_double_number_pane_vc_t_ParamLimits

0xfa69,	// (0x0004c8eb) list_double_number_pane_vc_t

0x6889,	// (0x0004370b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6889,	// (0x0004370b) list_double_large_graphic_pane_vc_g1

0x6895,	// (0x00043717) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6895,	// (0x00043717) list_double_large_graphic_pane_vc_g2

0x63ff,	// (0x00043281) list_double_large_graphic_pane_vc_g3_ParamLimits

0x63ff,	// (0x00043281) list_double_large_graphic_pane_vc_g3

0x558e,	// (0x00042410) list_double_large_graphic_pane_vc_g4_ParamLimits

0x558e,	// (0x00042410) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa70,	// (0x0004c8f2) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa70,	// (0x0004c8f2) list_double_large_graphic_pane_vc_g

0x559a,	// (0x0004241c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x559a,	// (0x0004241c) list_double_large_graphic_pane_vc_t1

0x55ae,	// (0x00042430) list_double_large_graphic_pane_vc_t2_ParamLimits

0x55ae,	// (0x00042430) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa79,	// (0x0004c8fb) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa79,	// (0x0004c8fb) list_double_large_graphic_pane_vc_t

0x684d,	// (0x000436cf) list_double_heading_pane_vc_g1_ParamLimits

0x684d,	// (0x000436cf) list_double_heading_pane_vc_g1

0x6859,	// (0x000436db) list_double_heading_pane_vc_g2_ParamLimits

0x6859,	// (0x000436db) list_double_heading_pane_vc_g2

0x0001,

0xfa7e,	// (0x0004c900) list_double_heading_pane_vc_g_ParamLimits

0xfa7e,	// (0x0004c900) list_double_heading_pane_vc_g

0x55c5,	// (0x00042447) list_double_heading_pane_vc_t1_ParamLimits

0x55c5,	// (0x00042447) list_double_heading_pane_vc_t1

0x5384,	// (0x00042206) list_double_heading_pane_vc_t2_ParamLimits

0x5384,	// (0x00042206) list_double_heading_pane_vc_t2

0x0001,

0xfa83,	// (0x0004c905) list_double_heading_pane_vc_t_ParamLimits

0xfa83,	// (0x0004c905) list_double_heading_pane_vc_t

0x5362,	// (0x000421e4) list_double_graphic_pane_vc_g1_ParamLimits

0x5362,	// (0x000421e4) list_double_graphic_pane_vc_g1

0x68a4,	// (0x00043726) list_double_graphic_pane_vc_g2_ParamLimits

0x68a4,	// (0x00043726) list_double_graphic_pane_vc_g2

0x68b3,	// (0x00043735) list_double_graphic_pane_vc_g3_ParamLimits

0x68b3,	// (0x00043735) list_double_graphic_pane_vc_g3

0x0002,

0xfa88,	// (0x0004c90a) list_double_graphic_pane_vc_g_ParamLimits

0xfa88,	// (0x0004c90a) list_double_graphic_pane_vc_g

0x55d7,	// (0x00042459) list_double_graphic_pane_vc_t1_ParamLimits

0x55d7,	// (0x00042459) list_double_graphic_pane_vc_t1

0x5550,	// (0x000423d2) list_double_graphic_pane_vc_t2_ParamLimits

0x5550,	// (0x000423d2) list_double_graphic_pane_vc_t2

0x0001,

0xfa8f,	// (0x0004c911) list_double_graphic_pane_vc_t_ParamLimits

0xfa8f,	// (0x0004c911) list_double_graphic_pane_vc_t

0x58bf,	// (0x00042741) aid_size_cell_fastswap

0x58c7,	// (0x00042749) aid_size_cell_touch_ParamLimits

0x58c7,	// (0x00042749) aid_size_cell_touch

0x5b28,	// (0x000429aa) popup_fast_swap_wide_window_ParamLimits

0x5b28,	// (0x000429aa) popup_fast_swap_wide_window

0x5c3e,	// (0x00042ac0) touch_pane_ParamLimits

0x5c3e,	// (0x00042ac0) touch_pane

0x7f69,	// (0x00044deb) button_value_adjust_pane_cp2

0x502c,	// (0x00041eae) button_value_adjust_pane_cp4

0x5054,	// (0x00041ed6) form_field_data_pane_cp2

0x5079,	// (0x00041efb) form_field_data_wide_pane_cp2

0x8402,	// (0x00045284) bg_scroll_pane_ParamLimits

0x5f78,	// (0x00042dfa) scroll_handle_pane_ParamLimits

0x5f8c,	// (0x00042e0e) scroll_sc2_down_pane_ParamLimits

0x5f8c,	// (0x00042e0e) scroll_sc2_down_pane

0x8433,	// (0x000452b5) scroll_sc2_up_pane_ParamLimits

0x8433,	// (0x000452b5) scroll_sc2_up_pane

0xbcd8,	// (0x00048b5a) grid_wheel_folder_pane_g1_ParamLimits

0xbcd8,	// (0x00048b5a) grid_wheel_folder_pane_g1

0x6174,	// (0x00042ff6) clock_nsta_pane_cp2_ParamLimits

0x6174,	// (0x00042ff6) clock_nsta_pane_cp2

0x8c0e,	// (0x00045a90) listscroll_midp_pane_ParamLimits

0x8c1a,	// (0x00045a9c) midp_canvas_pane

0x8f08,	// (0x00045d8a) nsta_clock_indic_pane

0x8f56,	// (0x00045dd8) listscroll_form_pane_vc

0x8f72,	// (0x00045df4) listscroll_set_pane_vc_ParamLimits

0x8f72,	// (0x00045df4) listscroll_set_pane_vc

0x968a,	// (0x0004650c) clock_nsta_pane

0x9707,	// (0x00046589) indicator_nsta_pane

0x99ff,	// (0x00046881) bg_popup_sub_pane_cp2_ParamLimits

0x9a13,	// (0x00046895) find_pane_cp2_ParamLimits

0x9a13,	// (0x00046895) find_pane_cp2

0x9a29,	// (0x000468ab) grid_toobar_pane_ParamLimits

0x9b87,	// (0x00046a09) list_form_gen_pane_vc_ParamLimits

0x9b87,	// (0x00046a09) list_form_gen_pane_vc

0x9b9d,	// (0x00046a1f) scroll_pane_cp8_vc_ParamLimits

0x9b9d,	// (0x00046a1f) scroll_pane_cp8_vc

0x9c19,	// (0x00046a9b) data_form_wide_pane_vc_ParamLimits

0x9c19,	// (0x00046a9b) data_form_wide_pane_vc

0x9c25,	// (0x00046aa7) form_field_data_wide_pane_vc_g1

0x9c2d,	// (0x00046aaf) form_field_data_wide_pane_vc_t1_ParamLimits

0x9c2d,	// (0x00046aaf) form_field_data_wide_pane_vc_t1

0x7f7d,	// (0x00044dff) input_focus_pane_cp6_vc_ParamLimits

0x7f7d,	// (0x00044dff) input_focus_pane_cp6_vc

0x9edb,	// (0x00046d5d) list_midp_pane_ParamLimits

0x9ee7,	// (0x00046d69) scroll_pane_cp16_ParamLimits

0x9ee7,	// (0x00046d69) scroll_pane_cp16

0x9f35,	// (0x00046db7) button_value_adjust_pane_ParamLimits

0x9f35,	// (0x00046db7) button_value_adjust_pane

0xaee0,	// (0x00047d62) button_value_adjust_pane_cp6_ParamLimits

0xaee0,	// (0x00047d62) button_value_adjust_pane_cp6

0xb03a,	// (0x00047ebc) settings_code_pane_cp_ParamLimits

0xb03a,	// (0x00047ebc) settings_code_pane_cp

0x2c7f,	// (0x0003fb01) cell_touch_pane_g1

0x2c7f,	// (0x0003fb01) cell_touch_pane_g2

0x0001,

0xf720,	// (0x0004c5a2) cell_touch_pane_g

0xb61d,	// (0x0004849f) cell_touch_pane_cp_ParamLimits

0xb61d,	// (0x0004849f) cell_touch_pane_cp

0xb62d,	// (0x000484af) cell_touch_pane_ParamLimits

0xb62d,	// (0x000484af) cell_touch_pane

0x2c7f,	// (0x0003fb01) scroll_sc2_down_pane_g1

0x2c7f,	// (0x0003fb01) scroll_sc2_up_pane_g1

0x2c89,	// (0x0003fb0b) bg_set_opt_pane_cp4_vc

0xb63e,	// (0x000484c0) list_set_graphic_pane_vc_g1_ParamLimits

0xb63e,	// (0x000484c0) list_set_graphic_pane_vc_g1

0xb64a,	// (0x000484cc) list_set_graphic_pane_vc_g2_ParamLimits

0xb64a,	// (0x000484cc) list_set_graphic_pane_vc_g2

0x0001,

0xfa15,	// (0x0004c897) list_set_graphic_pane_vc_g_ParamLimits

0xfa15,	// (0x0004c897) list_set_graphic_pane_vc_g

0xb656,	// (0x000484d8) text_primary_small_cp13_vc_ParamLimits

0xb656,	// (0x000484d8) text_primary_small_cp13_vc

0xb66e,	// (0x000484f0) list_set_graphic_pane_vc_ParamLimits

0xb66e,	// (0x000484f0) list_set_graphic_pane_vc

0x2c89,	// (0x0003fb0b) input_focus_pane_cp2_vc

0x2c7f,	// (0x0003fb01) setting_code_pane_vc_g1

0xb682,	// (0x00048504) setting_code_pane_vc_t1

0xb690,	// (0x00048512) set_text_pane_vc_t1_ParamLimits

0xb690,	// (0x00048512) set_text_pane_vc_t1

0x2c89,	// (0x0003fb0b) input_focus_pane_cp1_vc

0xb6ae,	// (0x00048530) list_set_text_pane_vc

0x2c7f,	// (0x0003fb01) setting_text_pane_vc_g1

0x2c89,	// (0x0003fb0b) bg_set_opt_pane_cp2_vc

0xb6b8,	// (0x0004853a) setting_slider_graphic_pane_vc_g1

0xb6c0,	// (0x00048542) setting_slider_graphic_pane_vc_t1

0xb6ce,	// (0x00048550) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa1a,	// (0x0004c89c) setting_slider_graphic_pane_vc_t

0xb6dc,	// (0x0004855e) slider_set_pane_cp_vc

0xb6e4,	// (0x00048566) slider_set_pane_vc_g1

0xb6ed,	// (0x0004856f) slider_set_pane_vc_g2

0x0006,

0xfa1f,	// (0x0004c8a1) slider_set_pane_vc_g

0x7fe4,	// (0x00044e66) set_opt_bg_pane_g1_copy1

0x7fec,	// (0x00044e6e) set_opt_bg_pane_g2_copy1

0xb719,	// (0x0004859b) set_opt_bg_pane_g3_copy1

0x7ffc,	// (0x00044e7e) set_opt_bg_pane_g4_copy1

0x8004,	// (0x00044e86) set_opt_bg_pane_g5_copy1

0x800c,	// (0x00044e8e) set_opt_bg_pane_g6_copy1

0xb723,	// (0x000485a5) set_opt_bg_pane_g7_copy1

0xb72d,	// (0x000485af) set_opt_bg_pane_g8_copy1

0xb737,	// (0x000485b9) set_opt_bg_pane_g9_copy1

0x2c89,	// (0x0003fb0b) bg_set_opt_pane_cp_vc

0xb741,	// (0x000485c3) setting_slider_pane_vc_t1

0xb6c0,	// (0x00048542) setting_slider_pane_vc_t2

0xb6ce,	// (0x00048550) setting_slider_pane_vc_t3

0x0002,

0xfa2e,	// (0x0004c8b0) setting_slider_pane_vc_t

0xb6dc,	// (0x0004855e) slider_set_pane_vc

0x6510,	// (0x00043392) volume_set_pane_vc_g1

0x6519,	// (0x0004339b) volume_set_pane_vc_g2

0x6522,	// (0x000433a4) volume_set_pane_vc_g3

0x652b,	// (0x000433ad) volume_set_pane_vc_g4

0x6534,	// (0x000433b6) volume_set_pane_vc_g5

0x653d,	// (0x000433bf) volume_set_pane_vc_g6

0x6546,	// (0x000433c8) volume_set_pane_vc_g7

0x654f,	// (0x000433d1) volume_set_pane_vc_g8

0x6558,	// (0x000433da) volume_set_pane_vc_g9

0x6561,	// (0x000433e3) volume_set_pane_vc_g10

0x0009,

0xf8cc,	// (0x0004c74e) volume_set_pane_vc_g

0xb750,	// (0x000485d2) volume_set_pane_vc

0xb758,	// (0x000485da) button_value_adjust_pane_cp1_vc

0xb762,	// (0x000485e4) list_highlight_pane_cp2_vc

0xb76b,	// (0x000485ed) list_set_pane_vc_ParamLimits

0xb76b,	// (0x000485ed) list_set_pane_vc

0xb7d5,	// (0x00048657) main_pane_set_vc_t1_ParamLimits

0xb7d5,	// (0x00048657) main_pane_set_vc_t1

0xb7ea,	// (0x0004866c) main_pane_set_vc_t2_ParamLimits

0xb7ea,	// (0x0004866c) main_pane_set_vc_t2

0xb7fc,	// (0x0004867e) main_pane_set_vc_t3_ParamLimits

0xb7fc,	// (0x0004867e) main_pane_set_vc_t3

0xb810,	// (0x00048692) main_pane_set_vc_t4_ParamLimits

0xb810,	// (0x00048692) main_pane_set_vc_t4

0x0003,

0xfa35,	// (0x0004c8b7) main_pane_set_vc_t_ParamLimits

0xfa35,	// (0x0004c8b7) main_pane_set_vc_t

0xb824,	// (0x000486a6) setting_code_pane_vc_ParamLimits

0xb824,	// (0x000486a6) setting_code_pane_vc

0xb835,	// (0x000486b7) setting_slider_graphic_pane_vc

0xb835,	// (0x000486b7) setting_slider_pane_vc

0xb835,	// (0x000486b7) setting_text_pane_vc

0xb835,	// (0x000486b7) setting_volume_pane_vc

0xb83f,	// (0x000486c1) scroll_pane_cp121_vc

0x7f57,	// (0x00044dd9) set_content_pane_vc

0xb87d,	// (0x000486ff) button_value_adjust_pane_g1

0xb886,	// (0x00048708) button_value_adjust_pane_g2

0x0001,

0xfa94,	// (0x0004c916) button_value_adjust_pane_g

0xb88f,	// (0x00048711) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb88f,	// (0x00048711) form_field_slider_wide_pane_vc_t1

0xb8a3,	// (0x00048725) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb8a3,	// (0x00048725) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa99,	// (0x0004c91b) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0004c91b) form_field_slider_wide_pane_vc_t

0x7966,	// (0x000447e8) input_focus_pane_cp10_vc_ParamLimits

0x7966,	// (0x000447e8) input_focus_pane_cp10_vc

0xb8b5,	// (0x00048737) slider_cont_pane_cp1_vc_ParamLimits

0xb8b5,	// (0x00048737) slider_cont_pane_cp1_vc

0xb6e4,	// (0x00048566) slider_form_pane_g1_cp2

0xb6ed,	// (0x0004856f) slider_form_pane_g2_cp2

0xb8ce,	// (0x00048750) form_field_slider_pane_vc_t3

0xb8dc,	// (0x0004875e) form_field_slider_pane_vc_t4

0xb8ea,	// (0x0004876c) slider_form_pane_vc_ParamLimits

0xb8ea,	// (0x0004876c) slider_form_pane_vc

0xb8f7,	// (0x00048779) form_field_slider_pane_vc_t1_ParamLimits

0xb8f7,	// (0x00048779) form_field_slider_pane_vc_t1

0xb8a3,	// (0x00048725) form_field_slider_pane_vc_t2_ParamLimits

0xb8a3,	// (0x00048725) form_field_slider_pane_vc_t2

0x0001,

0xfaa9,	// (0x0004c92b) form_field_slider_pane_vc_t_ParamLimits

0xfaa9,	// (0x0004c92b) form_field_slider_pane_vc_t

0x7966,	// (0x000447e8) input_focus_pane_cp9_vc_ParamLimits

0x7966,	// (0x000447e8) input_focus_pane_cp9_vc

0xb913,	// (0x00048795) slider_cont_pane_vc_ParamLimits

0xb913,	// (0x00048795) slider_cont_pane_vc

0xb925,	// (0x000487a7) list_form_graphic_pane_cp_vc_ParamLimits

0xb925,	// (0x000487a7) list_form_graphic_pane_cp_vc

0x9c25,	// (0x00046aa7) form_field_popup_wide_pane_vc_g1

0xb93a,	// (0x000487bc) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb93a,	// (0x000487bc) form_field_popup_wide_pane_vc_t1

0x7f7d,	// (0x00044dff) input_focus_pane_cp8_vc_ParamLimits

0x7f7d,	// (0x00044dff) input_focus_pane_cp8_vc

0xb951,	// (0x000487d3) list_form_wide_pane_vc_ParamLimits

0xb951,	// (0x000487d3) list_form_wide_pane_vc

0xb95d,	// (0x000487df) list_form_graphic_pane_vc_g1

0xb965,	// (0x000487e7) list_form_graphic_pane_vc_t1_ParamLimits

0xb965,	// (0x000487e7) list_form_graphic_pane_vc_t1

0x76ea,	// (0x0004456c) list_highlight_pane_cp5_vc_ParamLimits

0x76ea,	// (0x0004456c) list_highlight_pane_cp5_vc

0xb981,	// (0x00048803) list_form_graphic_pane_vc_ParamLimits

0xb981,	// (0x00048803) list_form_graphic_pane_vc

0x9c25,	// (0x00046aa7) form_field_popup_pane_vc_g1

0xb997,	// (0x00048819) form_field_popup_pane_vc_t1_ParamLimits

0xb997,	// (0x00048819) form_field_popup_pane_vc_t1

0x7f7d,	// (0x00044dff) input_focus_pane_cp7_vc_ParamLimits

0x7f7d,	// (0x00044dff) input_focus_pane_cp7_vc

0xb9ae,	// (0x00048830) list_form_pane_vc_ParamLimits

0xb9ae,	// (0x00048830) list_form_pane_vc

0xb9ba,	// (0x0004883c) data_form_pane_vc_t1_ParamLimits

0xb9ba,	// (0x0004883c) data_form_pane_vc_t1

0x7fe4,	// (0x00044e66) input_focus_pane_vc_g1

0x7fec,	// (0x00044e6e) input_focus_pane_vc_g2

0x7ff4,	// (0x00044e76) input_focus_pane_vc_g3

0x7ffc,	// (0x00044e7e) input_focus_pane_vc_g4

0x8004,	// (0x00044e86) input_focus_pane_vc_g5

0x800c,	// (0x00044e8e) input_focus_pane_vc_g6

0x8014,	// (0x00044e96) input_focus_pane_vc_g7

0x801c,	// (0x00044e9e) input_focus_pane_vc_g8

0x8024,	// (0x00044ea6) input_focus_pane_vc_g9

0x2c7f,	// (0x0003fb01) input_focus_pane_vc_g10

0x0009,

0xf6a9,	// (0x0004c52b) input_focus_pane_vc_g

0x9c19,	// (0x00046a9b) data_form_pane_vc_ParamLimits

0x9c19,	// (0x00046a9b) data_form_pane_vc

0x9c25,	// (0x00046aa7) form_field_data_pane_vc_g1

0xb9d7,	// (0x00048859) form_field_data_pane_vc_t1_ParamLimits

0xb9d7,	// (0x00048859) form_field_data_pane_vc_t1

0x7f7d,	// (0x00044dff) input_focus_pane_vc_ParamLimits

0x7f7d,	// (0x00044dff) input_focus_pane_vc

0xb9f1,	// (0x00048873) button_value_adjust_pane_cp3_vc

0xb9f9,	// (0x0004887b) button_value_adjust_pane_cp5_vc

0xba01,	// (0x00048883) form_field_data_pane_vc_ParamLimits

0xba01,	// (0x00048883) form_field_data_pane_vc

0xba1c,	// (0x0004889e) form_field_data_pane_vc_cp2

0xba24,	// (0x000488a6) form_field_data_wide_pane_vc_ParamLimits

0xba24,	// (0x000488a6) form_field_data_wide_pane_vc

0xba3e,	// (0x000488c0) form_field_data_wide_pane_vc_cp2

0xba46,	// (0x000488c8) form_field_popup_pane_vc_ParamLimits

0xba46,	// (0x000488c8) form_field_popup_pane_vc

0xba61,	// (0x000488e3) form_field_popup_wide_pane_vc_ParamLimits

0xba61,	// (0x000488e3) form_field_popup_wide_pane_vc

0xba7b,	// (0x000488fd) form_field_slider_pane_vc_ParamLimits

0xba7b,	// (0x000488fd) form_field_slider_pane_vc

0xba8e,	// (0x00048910) form_field_slider_wide_pane_vc_ParamLimits

0xba8e,	// (0x00048910) form_field_slider_wide_pane_vc

0xbaa1,	// (0x00048923) grid_touch_1_pane_ParamLimits

0xbaa1,	// (0x00048923) grid_touch_1_pane

0xbaad,	// (0x0004892f) grid_touch_2_pane_ParamLimits

0xbaad,	// (0x0004892f) grid_touch_2_pane

0x8ed3,	// (0x00045d55) touch_pane_g1_ParamLimits

0x8ed3,	// (0x00045d55) touch_pane_g1

0xbac7,	// (0x00048949) cell_app_pane_cp_wide_ParamLimits

0xbac7,	// (0x00048949) cell_app_pane_cp_wide

0xbad8,	// (0x0004895a) grid_popup_fast_wide_pane_ParamLimits

0xbad8,	// (0x0004895a) grid_popup_fast_wide_pane

0xbaec,	// (0x0004896e) scroll_pane_cp19_ParamLimits

0xbaec,	// (0x0004896e) scroll_pane_cp19

0x2c89,	// (0x0003fb0b) bg_popup_window_pane_cp20

0xbb00,	// (0x00048982) listscroll_popup_fast_wide_pane

0x76ea,	// (0x0004456c) grid_indicator_nsta_pane

0xbb08,	// (0x0004898a) clock_nsta_pane_g1

0xbb11,	// (0x00048993) clock_nsta_pane_t1

0xbb2d,	// (0x000489af) cell_indicator_nsta_pane_ParamLimits

0xbb2d,	// (0x000489af) cell_indicator_nsta_pane

0xbb65,	// (0x000489e7) cell_indicator_nsta_pane_g1

0xbb73,	// (0x000489f5) cell_indicator_nsta_pane_g2

0x0001,

0xfab3,	// (0x0004c935) cell_indicator_nsta_pane_g

0xbb89,	// (0x00048a0b) clock_nsta_pane_cp

0xbb91,	// (0x00048a13) indicator_nsta_pane_cp

0xbb99,	// (0x00048a1b) nsta_clock_indic_pane_g1

0x77b6,	// (0x00044638) grid_indicator_pane

0x8525,	// (0x000453a7) scroll_pane_cp29

0x60c0,	// (0x00042f42) indicator_nsta_pane_cp2_ParamLimits

0x60c0,	// (0x00042f42) indicator_nsta_pane_cp2

0x76ea,	// (0x0004456c) main_apps_wheel_pane

0x9db8,	// (0x00046c3a) form_midp_field_text_pane_ParamLimits

0x9f07,	// (0x00046d89) scroll_bar_cp050_ParamLimits

0xbc02,	// (0x00048a84) cell_indicator_pane_ParamLimits

0xbc02,	// (0x00048a84) cell_indicator_pane

0xbc1a,	// (0x00048a9c) cell_indicator_pane_g1

0xbc24,	// (0x00048aa6) grid_wheel_folder_pane_ParamLimits

0xbc24,	// (0x00048aa6) grid_wheel_folder_pane

0xbc38,	// (0x00048aba) list_wheel_apps_pane_ParamLimits

0xbc38,	// (0x00048aba) list_wheel_apps_pane

0xbc4b,	// (0x00048acd) main_apps_wheel_pane_g1_ParamLimits

0xbc4b,	// (0x00048acd) main_apps_wheel_pane_g1

0xbc67,	// (0x00048ae9) main_apps_wheel_pane_g2_ParamLimits

0xbc67,	// (0x00048ae9) main_apps_wheel_pane_g2

0x0001,

0xfacf,	// (0x0004c951) main_apps_wheel_pane_g_ParamLimits

0xfacf,	// (0x0004c951) main_apps_wheel_pane_g

0xbc83,	// (0x00048b05) main_apps_wheel_pane_t1_ParamLimits

0xbc83,	// (0x00048b05) main_apps_wheel_pane_t1

0xbcac,	// (0x00048b2e) list_wheel_apps_pane_g1

0xbcb4,	// (0x00048b36) list_wheel_apps_pane_g2

0xbcbc,	// (0x00048b3e) list_wheel_apps_pane_g3

0xbcc4,	// (0x00048b46) list_wheel_apps_pane_g4

0xbcce,	// (0x00048b50) list_wheel_apps_pane_g5

0x0004,

0xfad4,	// (0x0004c956) list_wheel_apps_pane_g

0x8a82,	// (0x00045904) navi_icon_text_pane

0x95b7,	// (0x00046439) aid_fill_nsta

0xbcef,	// (0x00048b71) navi_icon_text_pane_g1

0xbcfe,	// (0x00048b80) navi_icon_text_pane_t1

0x8918,	// (0x0004579a) list_set_graphic_pane_t1_ParamLimits

0x8918,	// (0x0004579a) list_set_graphic_pane_t1

0xa658,	// (0x000474da) popup_midp_note_alarm_window_t6_ParamLimits

0xa658,	// (0x000474da) popup_midp_note_alarm_window_t6

0xa66a,	// (0x000474ec) popup_midp_note_alarm_window_t7_ParamLimits

0xa66a,	// (0x000474ec) popup_midp_note_alarm_window_t7

0xa67c,	// (0x000474fe) popup_midp_note_alarm_window_t8_ParamLimits

0xa67c,	// (0x000474fe) popup_midp_note_alarm_window_t8

0xa68e,	// (0x00047510) popup_midp_note_alarm_window_t9_ParamLimits

0xa68e,	// (0x00047510) popup_midp_note_alarm_window_t9

0xa6a0,	// (0x00047522) popup_midp_note_alarm_window_t10_ParamLimits

0xa6a0,	// (0x00047522) popup_midp_note_alarm_window_t10

0xa6b2,	// (0x00047534) popup_midp_note_alarm_window_t11_ParamLimits

0xa6b2,	// (0x00047534) popup_midp_note_alarm_window_t11

0xa6c4,	// (0x00047546) scroll_pane_cp17_ParamLimits

0xa6c4,	// (0x00047546) scroll_pane_cp17

0x6510,	// (0x00043392) volume_small_pane_cp_g1

0x68bf,	// (0x00043741) volume_small_pane_cp_g2

0x68c8,	// (0x0004374a) volume_small_pane_cp_g3

0x68d1,	// (0x00043753) volume_small_pane_cp_g4

0x68da,	// (0x0004375c) volume_small_pane_cp_g5

0x68e3,	// (0x00043765) volume_small_pane_cp_g6

0x68ec,	// (0x0004376e) volume_small_pane_cp_g7

0x68f5,	// (0x00043777) volume_small_pane_cp_g8

0x68fe,	// (0x00043780) volume_small_pane_cp_g9

0x6907,	// (0x00043789) volume_small_pane_cp_g10

0x8ce3,	// (0x00045b65) midp_ticker_pane_g1_ParamLimits

0x8cef,	// (0x00045b71) midp_ticker_pane_g2_ParamLimits

0xf775,	// (0x0004c5f7) midp_ticker_pane_g_ParamLimits

0x8cfb,	// (0x00045b7d) midp_ticker_pane_t1_ParamLimits

0x95cd,	// (0x0004644f) aid_fill_nsta_2

0x9ef3,	// (0x00046d75) list_form2_midp_pane

0xb081,	// (0x00047f03) midp_editing_number_pane_ParamLimits

0xb090,	// (0x00047f12) midp_ticker_pane_ParamLimits

0xbd13,	// (0x00048b95) form2_midp_field_pane

0xbd37,	// (0x00048bb9) scroll_pane_cp51

0xbd57,	// (0x00048bd9) form2_midp_button_pane_ParamLimits

0xbd57,	// (0x00048bd9) form2_midp_button_pane

0xbd69,	// (0x00048beb) form2_midp_content_pane_ParamLimits

0xbd69,	// (0x00048beb) form2_midp_content_pane

0xbd83,	// (0x00048c05) form2_midp_field_choice_group_pane

0xbd8b,	// (0x00048c0d) form2_midp_field_pane_g1

0xbd93,	// (0x00048c15) form2_midp_field_pane_g2

0xbd9b,	// (0x00048c1d) form2_midp_field_pane_g3

0xbda3,	// (0x00048c25) form2_midp_field_pane_g4

0x0003,

0xfaf9,	// (0x0004c97b) form2_midp_field_pane_g

0xbdab,	// (0x00048c2d) form2_midp_gauge_slider_pane

0xbdb3,	// (0x00048c35) form2_midp_gauge_wait_pane

0xbdbb,	// (0x00048c3d) form2_midp_image_pane_ParamLimits

0xbdbb,	// (0x00048c3d) form2_midp_image_pane

0xbdd6,	// (0x00048c58) form2_midp_label_pane_ParamLimits

0xbdd6,	// (0x00048c58) form2_midp_label_pane

0xbdef,	// (0x00048c71) form2_midp_label_pane_cp_ParamLimits

0xbdef,	// (0x00048c71) form2_midp_label_pane_cp

0xbe0e,	// (0x00048c90) form2_midp_string_pane_ParamLimits

0xbe0e,	// (0x00048c90) form2_midp_string_pane

0x55eb,	// (0x0004246d) form2_midp_text_pane_ParamLimits

0x55eb,	// (0x0004246d) form2_midp_text_pane

0xbe20,	// (0x00048ca2) form2_midp_time_pane

0xbe30,	// (0x00048cb2) input_focus_pane_cp51_ParamLimits

0xbe30,	// (0x00048cb2) input_focus_pane_cp51

0xbe48,	// (0x00048cca) form2_midp_label_pane_t1_ParamLimits

0xbe48,	// (0x00048cca) form2_midp_label_pane_t1

0x5604,	// (0x00042486) form2_mdip_text_pane_t1_ParamLimits

0x5604,	// (0x00042486) form2_mdip_text_pane_t1

0x561b,	// (0x0004249d) form2_midp_time_pane_t1

0xbe86,	// (0x00048d08) form2_midp_gauge_slider_pane_t1

0xbe98,	// (0x00048d1a) form2_midp_gauge_slider_pane_t2

0xbeaa,	// (0x00048d2c) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb02,	// (0x0004c984) form2_midp_gauge_slider_pane_t

0xbebc,	// (0x00048d3e) form2_midp_slider_pane

0xbec8,	// (0x00048d4a) form2_midp_gauge_wait_pane_t1

0xbed6,	// (0x00048d58) form2_midp_wait_pane_ParamLimits

0xbed6,	// (0x00048d58) form2_midp_wait_pane

0xbf01,	// (0x00048d83) list_single_2graphic_pane_cp4_ParamLimits

0xbf01,	// (0x00048d83) list_single_2graphic_pane_cp4

0x9c54,	// (0x00046ad6) list_single_midp_graphic_pane_cp_ParamLimits

0x9c54,	// (0x00046ad6) list_single_midp_graphic_pane_cp

0x2c89,	// (0x0003fb0b) list_highlight_pane_cp20

0xbf12,	// (0x00048d94) list_single_2graphic_pane_g1_cp4

0xb520,	// (0x000483a2) list_single_2graphic_pane_g2_cp4

0xbf1a,	// (0x00048d9c) list_single_2graphic_pane_t1_cp4

0x76ea,	// (0x0004456c) list_highlight_pane_cp21

0xbf29,	// (0x00048dab) list_single_midp_graphic_pane_g4_cp

0xbf38,	// (0x00048dba) list_single_midp_graphic_pane_t1_cp

0xbf4d,	// (0x00048dcf) form2_mdip_string_pane_t1_ParamLimits

0xbf4d,	// (0x00048dcf) form2_mdip_string_pane_t1

0x2c89,	// (0x0003fb0b) bg_wml_button_pane_cp2

0x2c7f,	// (0x0003fb01) form2_midp_image_pane_g1

0x5dad,	// (0x00042c2f) list_double_large_graphic_pane_g5_ParamLimits

0x5dad,	// (0x00042c2f) list_double_large_graphic_pane_g5

0x8c0e,	// (0x00045a90) midp_form_pane_ParamLimits

0x76ea,	// (0x0004456c) main_apps_wheel_pane_ParamLimits

0x9361,	// (0x000461e3) popup_preview_window_ParamLimits

0x9361,	// (0x000461e3) popup_preview_window

0x9548,	// (0x000463ca) popup_touch_info_window_ParamLimits

0x9548,	// (0x000463ca) popup_touch_info_window

0x956a,	// (0x000463ec) popup_touch_menu_window_ParamLimits

0x956a,	// (0x000463ec) popup_touch_menu_window

0x2c75,	// (0x0003faf7) bg_popup_sub_pane_cp6

0xbfa7,	// (0x00048e29) list_touch_menu_pane

0xbfaf,	// (0x00048e31) list_single_touch_menu_pane_ParamLimits

0xbfaf,	// (0x00048e31) list_single_touch_menu_pane

0xbfca,	// (0x00048e4c) list_single_touch_menu_pane_t1

0x76ea,	// (0x0004456c) bg_popup_sub_pane_cp7_ParamLimits

0x76ea,	// (0x0004456c) bg_popup_sub_pane_cp7

0xbfd8,	// (0x00048e5a) heading_sub_pane

0xbfe0,	// (0x00048e62) list_touch_info_pane_ParamLimits

0xbfe0,	// (0x00048e62) list_touch_info_pane

0xbfef,	// (0x00048e71) list_single_touch_info_pane_ParamLimits

0xbfef,	// (0x00048e71) list_single_touch_info_pane

0xc001,	// (0x00048e83) list_single_touch_info_pane_t1

0xc00f,	// (0x00048e91) list_single_touch_info_pane_t2

0x0001,

0xfb10,	// (0x0004c992) list_single_touch_info_pane_t

0x8c06,	// (0x00045a88) bg_popup_heading_pane_cp

0xc01d,	// (0x00048e9f) heading_sub_pane_t1

0x9bb3,	// (0x00046a35) bg_popup_preview_window_pane_cp_ParamLimits

0x9bb3,	// (0x00046a35) bg_popup_preview_window_pane_cp

0xbfd8,	// (0x00048e5a) heading_preview_pane

0xbfe0,	// (0x00048e62) list_preview_pane_ParamLimits

0xbfe0,	// (0x00048e62) list_preview_pane

0xc02b,	// (0x00048ead) popup_preview_window_g1

0xbfef,	// (0x00048e71) list_single_preview_pane_ParamLimits

0xbfef,	// (0x00048e71) list_single_preview_pane

0xc033,	// (0x00048eb5) list_single_preview_pane_g1

0xc03b,	// (0x00048ebd) list_single_preview_pane_t1

0xc001,	// (0x00048e83) list_single_preview_pane_t2

0x0001,

0xfb15,	// (0x0004c997) list_single_preview_pane_t

0xc049,	// (0x00048ecb) bg_popup_heading_pane_cp2_ParamLimits

0xc049,	// (0x00048ecb) bg_popup_heading_pane_cp2

0xc05f,	// (0x00048ee1) heading_preview_pane_g1

0xc067,	// (0x00048ee9) heading_preview_pane_t1_ParamLimits

0xc067,	// (0x00048ee9) heading_preview_pane_t1

0x77d9,	// (0x0004465b) soft_indicator_pane_t1_ParamLimits

0x7ee4,	// (0x00044d66) scroll_pane_ParamLimits

0x8421,	// (0x000452a3) scroll_sc2_left_pane

0x842a,	// (0x000452ac) scroll_sc2_right_pane

0x8449,	// (0x000452cb) scroll_bg_pane_g1_ParamLimits

0x845e,	// (0x000452e0) scroll_bg_pane_g2_ParamLimits

0x8476,	// (0x000452f8) scroll_bg_pane_g3_ParamLimits

0xf700,	// (0x0004c582) scroll_bg_pane_g_ParamLimits

0x8449,	// (0x000452cb) scroll_handle_pane_g1_ParamLimits

0x8498,	// (0x0004531a) scroll_handle_pane_g2_ParamLimits

0x8476,	// (0x000452f8) scroll_handle_pane_g3_ParamLimits

0xf707,	// (0x0004c589) scroll_handle_pane_g_ParamLimits

0x8fac,	// (0x00045e2e) popup_choice_list_window_ParamLimits

0x8fac,	// (0x00045e2e) popup_choice_list_window

0x9a0b,	// (0x0004688d) choice_list_pane

0x9a8d,	// (0x0004690f) cell_toolbar_pane_t1

0x9ab5,	// (0x00046937) toolbar_button_pane_ParamLimits

0xab94,	// (0x00047a16) ai_gene_pane_1_t2_ParamLimits

0xab94,	// (0x00047a16) ai_gene_pane_1_t2

0x0001,

0xf928,	// (0x0004c7aa) ai_gene_pane_1_t_ParamLimits

0xf928,	// (0x0004c7aa) ai_gene_pane_1_t

0xc084,	// (0x00048f06) scroll_sc2_left_pane_g1

0xc084,	// (0x00048f06) scroll_sc2_right_pane_g1

0x8f84,	// (0x00045e06) bg_popup_sub_pane_cp10

0xc08e,	// (0x00048f10) list_choice_list_pane

0xc0a5,	// (0x00048f27) list_single_choice_list_pane_ParamLimits

0xc0a5,	// (0x00048f27) list_single_choice_list_pane

0xc0b9,	// (0x00048f3b) list_single_choice_list_pane_g1

0xc0c1,	// (0x00048f43) list_single_choice_list_pane_t1_ParamLimits

0xc0c1,	// (0x00048f43) list_single_choice_list_pane_t1

0xc0d6,	// (0x00048f58) choice_list_pane_g1

0xc0de,	// (0x00048f60) choice_list_pane_t1

0x2c75,	// (0x0003faf7) input_focus_pane_cp11

0x82fb,	// (0x0004517d) title_pane_stacon_g2_ParamLimits

0x82fb,	// (0x0004517d) title_pane_stacon_g2

0x0002,

0xf6e6,	// (0x0004c568) title_pane_stacon_g_ParamLimits

0xf6e6,	// (0x0004c568) title_pane_stacon_g

0x8c06,	// (0x00045a88) cursor_press_pane

0x9062,	// (0x00045ee4) popup_fep_hwr_window_ParamLimits

0x9062,	// (0x00045ee4) popup_fep_hwr_window

0x90ec,	// (0x00045f6e) popup_fep_vkb_window_ParamLimits

0x90ec,	// (0x00045f6e) popup_fep_vkb_window

0xc0ec,	// (0x00048f6e) cursor_press_pane_g1

0x0002,

0xfb3e,	// (0x0004c9c0) fep_vkb_side_pane_g_ParamLimits

0x693b,	// (0x000437bd) fep_hwr_candidate_pane_ParamLimits

0x693b,	// (0x000437bd) fep_hwr_candidate_pane

0x6965,	// (0x000437e7) fep_hwr_side_pane_ParamLimits

0x6965,	// (0x000437e7) fep_hwr_side_pane

0x6987,	// (0x00043809) fep_hwr_top_pane_ParamLimits

0x6987,	// (0x00043809) fep_hwr_top_pane

0x699f,	// (0x00043821) fep_hwr_write_pane_ParamLimits

0x699f,	// (0x00043821) fep_hwr_write_pane

0xfb3e,	// (0x0004c9c0) fep_vkb_side_pane_g

0xc0f4,	// (0x00048f76) fep_hwr_top_pane_g1

0xc106,	// (0x00048f88) fep_hwr_top_pane_g2

0x69cb,	// (0x0004384d) fep_hwr_top_pane_g3

0x0002,

0xfb1a,	// (0x0004c99c) fep_hwr_top_pane_g

0x69e0,	// (0x00043862) fep_hwr_top_text_pane

0x85ed,	// (0x0004546f) fep_hwr_top_text_pane_g1

0xc13c,	// (0x00048fbe) fep_hwr_top_text_pane_t1

0x6aea,	// (0x0004396c) fep_hwr_candidate_pane_g1

0xc387,	// (0x00049209) fep_vkb_keypad_pane_g3_ParamLimits

0xc387,	// (0x00049209) fep_vkb_keypad_pane_g3

0xc3b3,	// (0x00049235) fep_vkb_keypad_pane_g4_ParamLimits

0xc3b3,	// (0x00049235) fep_vkb_keypad_pane_g4

0xc42a,	// (0x000492ac) fep_vkb_bottom_pane_g2_ParamLimits

0xc42a,	// (0x000492ac) fep_vkb_bottom_pane_g2

0x0001,

0xfb45,	// (0x0004c9c7) fep_vkb_bottom_pane_g_ParamLimits

0xfb45,	// (0x0004c9c7) fep_vkb_bottom_pane_g

0xc084,	// (0x00048f06) cell_vkb_side_pane_g2

0x0001,

0xfb4f,	// (0x0004c9d1) cell_vkb_side_pane_g

0xc4b5,	// (0x00049337) cell_vkb_side_pane_t1

0xc4c3,	// (0x00049345) cell_vkb_side_pane_t1_copy1

0xc084,	// (0x00048f06) bg_fep_vkb_candidate_pane_g2

0xc607,	// (0x00049489) cell_vkb_candidate_pane_ParamLimits

0xc14a,	// (0x00048fcc) aid_size_cell_vkb_ParamLimits

0xc14a,	// (0x00048fcc) aid_size_cell_vkb

0xc607,	// (0x00049489) cell_vkb_candidate_pane

0x6b04,	// (0x00043986) bg_popup_fep_shadow_pane_g1

0xc1dc,	// (0x0004905e) fep_vkb_bottom_pane_ParamLimits

0xc1dc,	// (0x0004905e) fep_vkb_bottom_pane

0xc219,	// (0x0004909b) fep_vkb_candidate_pane_ParamLimits

0xc219,	// (0x0004909b) fep_vkb_candidate_pane

0xc235,	// (0x000490b7) fep_vkb_keypad_pane_ParamLimits

0xc235,	// (0x000490b7) fep_vkb_keypad_pane

0xc268,	// (0x000490ea) fep_vkb_side_pane_ParamLimits

0xc268,	// (0x000490ea) fep_vkb_side_pane

0xc2a4,	// (0x00049126) fep_vkb_top_pane_ParamLimits

0xc2a4,	// (0x00049126) fep_vkb_top_pane

0xc2e0,	// (0x00049162) fep_vkb_top_pane_g1_ParamLimits

0xc2e0,	// (0x00049162) fep_vkb_top_pane_g1

0xc2ef,	// (0x00049171) fep_vkb_top_pane_g2_ParamLimits

0xc2ef,	// (0x00049171) fep_vkb_top_pane_g2

0xc2fe,	// (0x00049180) fep_vkb_top_pane_g3_ParamLimits

0xc2fe,	// (0x00049180) fep_vkb_top_pane_g3

0x0003,

0xfb35,	// (0x0004c9b7) fep_vkb_top_pane_g_ParamLimits

0xfb35,	// (0x0004c9b7) fep_vkb_top_pane_g

0xc31c,	// (0x0004919e) fep_vkb_top_text_pane_ParamLimits

0xc31c,	// (0x0004919e) fep_vkb_top_text_pane

0xc32d,	// (0x000491af) fep_vkb_side_pane_g1_ParamLimits

0xc32d,	// (0x000491af) fep_vkb_side_pane_g1

0xc376,	// (0x000491f8) grid_vkb_side_pane_ParamLimits

0xc376,	// (0x000491f8) grid_vkb_side_pane

0x6b0c,	// (0x0004398e) bg_popup_fep_shadow_pane_g2

0x6b15,	// (0x00043997) bg_popup_fep_shadow_pane_g3

0x6b1d,	// (0x0004399f) bg_popup_fep_shadow_pane_g4

0x6b26,	// (0x000439a8) bg_popup_fep_shadow_pane_g5

0x6b30,	// (0x000439b2) bg_popup_fep_shadow_pane_g6

0x6b38,	// (0x000439ba) bg_popup_fep_shadow_pane_g7

0x8004,	// (0x00044e86) bg_popup_fep_shadow_pane_g8

0xc3d5,	// (0x00049257) grid_vkb_keypad_number_pane_ParamLimits

0xc3d5,	// (0x00049257) grid_vkb_keypad_number_pane

0xc3e9,	// (0x0004926b) grid_vkb_keypad_pane_ParamLimits

0xc3e9,	// (0x0004926b) grid_vkb_keypad_pane

0xc40f,	// (0x00049291) fep_vkb_bottom_pane_g1_ParamLimits

0xc40f,	// (0x00049291) fep_vkb_bottom_pane_g1

0xc438,	// (0x000492ba) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc438,	// (0x000492ba) grid_vkb_keypad_bottom_left_pane

0xc44d,	// (0x000492cf) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc44d,	// (0x000492cf) grid_vkb_keypad_bottom_right_pane

0xc462,	// (0x000492e4) fep_vkb_top_text_pane_g1

0xc47d,	// (0x000492ff) fep_vkb_top_text_pane_t1

0xc492,	// (0x00049314) cell_vkb_side_pane_ParamLimits

0xc492,	// (0x00049314) cell_vkb_side_pane

0xc084,	// (0x00048f06) cell_vkb_side_pane_g1

0xc4d1,	// (0x00049353) cell_vkb_keypad_pane_ParamLimits

0xc4d1,	// (0x00049353) cell_vkb_keypad_pane

0xc55e,	// (0x000493e0) cell_vkb_keypad_pane_g1

0x0008,

0xfb62,	// (0x0004c9e4) bg_popup_fep_shadow_pane_g

0xc084,	// (0x00048f06) cell_hwr_side_pane_g1

0xc084,	// (0x00048f06) cell_hwr_side_pane_g2

0xc568,	// (0x000493ea) cell_vkb_keypad_pane_t1

0xc576,	// (0x000493f8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc576,	// (0x000493f8) cell_vkb_keypad_bottom_left_pane

0xc593,	// (0x00049415) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc593,	// (0x00049415) cell_vkb_keypad_bottom_right_pane

0xc084,	// (0x00048f06) cell_vkb_keypad_bottom_left_pane_g1

0xc084,	// (0x00048f06) cell_vkb_keypad_bottom_right_pane_g1

0xc5cc,	// (0x0004944e) cell_vkb_keypad_number_pane_ParamLimits

0xc5cc,	// (0x0004944e) cell_vkb_keypad_number_pane

0xc5eb,	// (0x0004946d) cell_vkb_keypad_number_pane_g1

0xc5f5,	// (0x00049477) cell_vkb_keypad_number_pane_g2

0xc5fe,	// (0x00049480) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb54,	// (0x0004c9d6) cell_vkb_keypad_number_pane_g

0xc568,	// (0x000493ea) cell_vkb_keypad_number_pane_t1

0xc628,	// (0x000494aa) fep_vkb_candidate_pane_g1

0x0001,

0xfb4f,	// (0x0004c9d1) cell_hwr_side_pane_g

0xc641,	// (0x000494c3) cell_hwr_side_pane_t1

0x6b4a,	// (0x000439cc) cell_hwr_side_pane_t1_copy1

0xc30e,	// (0x00049190) cell_hwr_candidate_pane_g1

0x6b58,	// (0x000439da) cell_hwr_candidate_pane_t1

0xc084,	// (0x00048f06) cell_vkb_candidate_pane_g2

0xc6c7,	// (0x00049549) cell_vkb_candidate_pane_t1

0x12c1,	// (0x0003e143) bg_popup_fep_shadow_pane_ParamLimits

0x12c1,	// (0x0003e143) bg_popup_fep_shadow_pane

0x2c45,	// (0x0003fac7) bg_fep_hwr_top_pane_g4

0xc118,	// (0x00048f9a) bg_hwr_side_pane_g1_ParamLimits

0xc118,	// (0x00048f9a) bg_hwr_side_pane_g1

0x6a1e,	// (0x000438a0) cell_hwr_side_pane_ParamLimits

0x6a1e,	// (0x000438a0) cell_hwr_side_pane

0x6a5b,	// (0x000438dd) fep_hwr_write_pane_g1_ParamLimits

0x6a5b,	// (0x000438dd) fep_hwr_write_pane_g1

0x6a68,	// (0x000438ea) fep_hwr_write_pane_g2_ParamLimits

0x6a68,	// (0x000438ea) fep_hwr_write_pane_g2

0x6a75,	// (0x000438f7) fep_hwr_write_pane_g3_ParamLimits

0x6a75,	// (0x000438f7) fep_hwr_write_pane_g3

0x6a83,	// (0x00043905) fep_hwr_write_pane_g4_ParamLimits

0x6a83,	// (0x00043905) fep_hwr_write_pane_g4

0x0005,

0xfb21,	// (0x0004c9a3) fep_hwr_write_pane_g_ParamLimits

0xfb21,	// (0x0004c9a3) fep_hwr_write_pane_g

0x2c45,	// (0x0003fac7) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2c45,	// (0x0003fac7) bg_fep_hwr_candidate_pane_g2

0x6a98,	// (0x0004391a) cell_hwr_candidate_pane_ParamLimits

0x6a98,	// (0x0004391a) cell_hwr_candidate_pane

0x6aea,	// (0x0004396c) fep_hwr_candidate_pane_g1_ParamLimits

0xc178,	// (0x00048ffa) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc178,	// (0x00048ffa) bg_popup_fep_shadow_pane_cp2

0xc30e,	// (0x00049190) fep_vkb_top_pane_g4_ParamLimits

0xc30e,	// (0x00049190) fep_vkb_top_pane_g4

0xc354,	// (0x000491d6) fep_vkb_side_pane_g2_ParamLimits

0xc354,	// (0x000491d6) fep_vkb_side_pane_g2

0x4f57,	// (0x00041dd9) list_setting_pane_t4_ParamLimits

0x4f57,	// (0x00041dd9) list_setting_pane_t4

0x4ff3,	// (0x00041e75) list_setting_number_pane_t5_ParamLimits

0x4ff3,	// (0x00041e75) list_setting_number_pane_t5

0x8634,	// (0x000454b6) list_double_heading_pane_cp2_ParamLimits

0x8634,	// (0x000454b6) list_double_heading_pane_cp2

0x7f97,	// (0x00044e19) list_double_heading_pane_g1_cp2_ParamLimits

0x7f97,	// (0x00044e19) list_double_heading_pane_g1_cp2

0x7fa3,	// (0x00044e25) list_double_heading_pane_g2_cp2_ParamLimits

0x7fa3,	// (0x00044e25) list_double_heading_pane_g2_cp2

0xc6d5,	// (0x00049557) list_double_heading_pane_t1_cp2_ParamLimits

0xc6d5,	// (0x00049557) list_double_heading_pane_t1_cp2

0xc6eb,	// (0x0004956d) list_double_heading_pane_t2_cp2_ParamLimits

0xc6eb,	// (0x0004956d) list_double_heading_pane_t2_cp2

0x2c6d,	// (0x0003faef) aid_value_unit2

0x5b86,	// (0x00042a08) popup_preview_fixed_window

0x7974,	// (0x000447f6) bg_popup_preview_window_pane_cp02

0xc6fd,	// (0x0004957f) list_preview_fixed_pane

0xc743,	// (0x000495c5) list_empty_pane_fp_ParamLimits

0xc743,	// (0x000495c5) list_empty_pane_fp

0xc743,	// (0x000495c5) list_single_cale_day_pane_fp_ParamLimits

0xc743,	// (0x000495c5) list_single_cale_day_pane_fp

0xc743,	// (0x000495c5) list_single_graphic_heading_pane_fp_ParamLimits

0xc743,	// (0x000495c5) list_single_graphic_heading_pane_fp

0xc743,	// (0x000495c5) list_single_graphic_pane_fp_ParamLimits

0xc743,	// (0x000495c5) list_single_graphic_pane_fp

0xc743,	// (0x000495c5) list_single_heading_pane_fp_ParamLimits

0xc743,	// (0x000495c5) list_single_heading_pane_fp

0xc743,	// (0x000495c5) list_single_pane_fp_ParamLimits

0xc743,	// (0x000495c5) list_single_pane_fp

0xc75c,	// (0x000495de) list_single_pane_fp_g1_ParamLimits

0xc75c,	// (0x000495de) list_single_pane_fp_g1

0x5da1,	// (0x00042c23) list_single_pane_fp_g2_ParamLimits

0x5da1,	// (0x00042c23) list_single_pane_fp_g2

0x6b76,	// (0x000439f8) list_single_pane_fp_g3_ParamLimits

0x6b76,	// (0x000439f8) list_single_pane_fp_g3

0xc768,	// (0x000495ea) list_single_pane_fp_g4_ParamLimits

0xc768,	// (0x000495ea) list_single_pane_fp_g4

0x0003,

0xfb83,	// (0x0004ca05) list_single_pane_fp_g_ParamLimits

0xfb83,	// (0x0004ca05) list_single_pane_fp_g

0x562e,	// (0x000424b0) list_single_pane_fp_t1_ParamLimits

0x562e,	// (0x000424b0) list_single_pane_fp_t1

0x5645,	// (0x000424c7) list_single_graphic_pane_fp_g1_ParamLimits

0x5645,	// (0x000424c7) list_single_graphic_pane_fp_g1

0xc75c,	// (0x000495de) list_single_graphic_pane_fp_g2_ParamLimits

0xc75c,	// (0x000495de) list_single_graphic_pane_fp_g2

0x5da1,	// (0x00042c23) list_single_graphic_pane_fp_g3_ParamLimits

0x5da1,	// (0x00042c23) list_single_graphic_pane_fp_g3

0x6b76,	// (0x000439f8) list_single_graphic_pane_fp_g4_ParamLimits

0x6b76,	// (0x000439f8) list_single_graphic_pane_fp_g4

0xc768,	// (0x000495ea) list_single_graphic_pane_fp_g5_ParamLimits

0xc768,	// (0x000495ea) list_single_graphic_pane_fp_g5

0x0004,

0xfb8c,	// (0x0004ca0e) list_single_graphic_pane_fp_g_ParamLimits

0xfb8c,	// (0x0004ca0e) list_single_graphic_pane_fp_g

0x5651,	// (0x000424d3) list_single_graphic_pane_fp_t1_ParamLimits

0x5651,	// (0x000424d3) list_single_graphic_pane_fp_t1

0x5645,	// (0x000424c7) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5645,	// (0x000424c7) list_single_graphic_heading_pane_fp_g1

0xc75c,	// (0x000495de) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc75c,	// (0x000495de) list_single_graphic_heading_pane_fp_g2

0x5da1,	// (0x00042c23) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5da1,	// (0x00042c23) list_single_graphic_heading_pane_fp_g3

0x6b76,	// (0x000439f8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6b76,	// (0x000439f8) list_single_graphic_heading_pane_fp_g4

0xc768,	// (0x000495ea) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc768,	// (0x000495ea) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0004ca0e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0004ca0e) list_single_graphic_heading_pane_fp_g

0x5667,	// (0x000424e9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5667,	// (0x000424e9) list_single_graphic_heading_pane_fp_t1

0x567d,	// (0x000424ff) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x567d,	// (0x000424ff) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb97,	// (0x0004ca19) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb97,	// (0x0004ca19) list_single_graphic_heading_pane_fp_t

0x568f,	// (0x00042511) list_single_cale_day_pane_fp_g1_ParamLimits

0x568f,	// (0x00042511) list_single_cale_day_pane_fp_g1

0xc774,	// (0x000495f6) list_single_cale_day_pane_fp_g2_ParamLimits

0xc774,	// (0x000495f6) list_single_cale_day_pane_fp_g2

0x6b8a,	// (0x00043a0c) list_single_cale_day_pane_fp_g3_ParamLimits

0x6b8a,	// (0x00043a0c) list_single_cale_day_pane_fp_g3

0x6bb2,	// (0x00043a34) list_single_cale_day_pane_fp_g4_ParamLimits

0x6bb2,	// (0x00043a34) list_single_cale_day_pane_fp_g4

0x6bd6,	// (0x00043a58) list_single_cale_day_pane_fp_g5_ParamLimits

0x6bd6,	// (0x00043a58) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9c,	// (0x0004ca1e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9c,	// (0x0004ca1e) list_single_cale_day_pane_fp_g

0x56c7,	// (0x00042549) list_single_cale_day_pane_fp_t1_ParamLimits

0x56c7,	// (0x00042549) list_single_cale_day_pane_fp_t1

0x56ed,	// (0x0004256f) list_single_cale_day_pane_fp_t2_ParamLimits

0x56ed,	// (0x0004256f) list_single_cale_day_pane_fp_t2

0x5706,	// (0x00042588) list_single_cale_day_pane_fp_t3_ParamLimits

0x5706,	// (0x00042588) list_single_cale_day_pane_fp_t3

0x0002,

0xfba7,	// (0x0004ca29) list_single_cale_day_pane_fp_t_ParamLimits

0xfba7,	// (0x0004ca29) list_single_cale_day_pane_fp_t

0xc75c,	// (0x000495de) list_empty_pane_fp_g1_ParamLimits

0xc75c,	// (0x000495de) list_empty_pane_fp_g1

0x571f,	// (0x000425a1) list_empty_pane_fp_t1

0x572d,	// (0x000425af) list_empty_pane_fp_t2

0x0001,

0xfbae,	// (0x0004ca30) list_empty_pane_fp_t

0xc75c,	// (0x000495de) list_single_heading_pane_fp_g1_ParamLimits

0xc75c,	// (0x000495de) list_single_heading_pane_fp_g1

0x5da1,	// (0x00042c23) list_single_heading_pane_fp_g2_ParamLimits

0x5da1,	// (0x00042c23) list_single_heading_pane_fp_g2

0x6b76,	// (0x000439f8) list_single_heading_pane_fp_g3_ParamLimits

0x6b76,	// (0x000439f8) list_single_heading_pane_fp_g3

0x0002,

0xfbb3,	// (0x0004ca35) list_single_heading_pane_fp_g_ParamLimits

0xfbb3,	// (0x0004ca35) list_single_heading_pane_fp_g

0x573b,	// (0x000425bd) list_single_heading_pane_fp_t1_ParamLimits

0x573b,	// (0x000425bd) list_single_heading_pane_fp_t1

0x574d,	// (0x000425cf) list_single_heading_pane_fp_t2_ParamLimits

0x574d,	// (0x000425cf) list_single_heading_pane_fp_t2

0x0001,

0xfbba,	// (0x0004ca3c) list_single_heading_pane_fp_t_ParamLimits

0xfbba,	// (0x0004ca3c) list_single_heading_pane_fp_t

0x8192,	// (0x00045014) aid_size_cell_fast

0x78e6,	// (0x00044768) soft_indicator_pane_cp1_t1

0x81cf,	// (0x00045051) cell_app_pane_cp2_ParamLimits

0x81cf,	// (0x00045051) cell_app_pane_cp2

0x6924,	// (0x000437a6) fep_hwr_candidate_drop_down_list_pane

0x2c53,	// (0x0003fad5) fep_hwr_candidate_pane_g3_ParamLimits

0x2c53,	// (0x0003fad5) fep_hwr_candidate_pane_g3

0x2c60,	// (0x0003fae2) fep_hwr_candidate_pane_g4_ParamLimits

0x2c60,	// (0x0003fae2) fep_hwr_candidate_pane_g4

0x0002,

0xfb2e,	// (0x0004c9b0) fep_hwr_candidate_pane_g_ParamLimits

0xfb2e,	// (0x0004c9b0) fep_hwr_candidate_pane_g

0xc208,	// (0x0004908a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc208,	// (0x0004908a) fep_vkb_candidate_drop_down_list_pane

0xc630,	// (0x000494b2) fep_vkb_candidate_pane_g3

0xc638,	// (0x000494ba) fep_vkb_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0004c9dd) fep_vkb_candidate_pane_g

0xc30e,	// (0x00049190) cell_hwr_candidate_pane_g1_ParamLimits

0xc64f,	// (0x000494d1) cell_hwr_candidate_pane_g3_ParamLimits

0xc64f,	// (0x000494d1) cell_hwr_candidate_pane_g3

0xc670,	// (0x000494f2) cell_hwr_candidate_pane_g4_ParamLimits

0xc670,	// (0x000494f2) cell_hwr_candidate_pane_g4

0x0002,

0xfb75,	// (0x0004c9f7) cell_hwr_candidate_pane_g_ParamLimits

0xfb75,	// (0x0004c9f7) cell_hwr_candidate_pane_g

0xc691,	// (0x00049513) cell_vkb_candidate_pane_g3_ParamLimits

0xc691,	// (0x00049513) cell_vkb_candidate_pane_g3

0xc6ac,	// (0x0004952e) cell_vkb_candidate_pane_g4_ParamLimits

0xc6ac,	// (0x0004952e) cell_vkb_candidate_pane_g4

0xc780,	// (0x00049602) cell_app_pane_cp2_g1_ParamLimits

0xc780,	// (0x00049602) cell_app_pane_cp2_g1

0xc79e,	// (0x00049620) cell_app_pane_cp2_g2_ParamLimits

0xc79e,	// (0x00049620) cell_app_pane_cp2_g2

0x0001,

0xfbbf,	// (0x0004ca41) cell_app_pane_cp2_g_ParamLimits

0xfbbf,	// (0x0004ca41) cell_app_pane_cp2_g

0xc7aa,	// (0x0004962c) cell_app_pane_cp2_t1_ParamLimits

0xc7aa,	// (0x0004962c) cell_app_pane_cp2_t1

0x7f7d,	// (0x00044dff) grid_highlight_pane_cp1_ParamLimits

0x7f7d,	// (0x00044dff) grid_highlight_pane_cp1

0x6bfa,	// (0x00043a7c) cell_hwr_candidate_pane_cp1_ParamLimits

0x6bfa,	// (0x00043a7c) cell_hwr_candidate_pane_cp1

0xc30e,	// (0x00049190) fep_hwr_candidate_drop_down_list_pane_g1

0xc7bc,	// (0x0004963e) fep_hwr_candidate_drop_down_list_pane_g2

0xc7c9,	// (0x0004964b) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x0004ca46) fep_hwr_candidate_drop_down_list_pane_g

0x6c1e,	// (0x00043aa0) fep_hwr_candidate_drop_down_list_scroll_pane

0x6c27,	// (0x00043aa9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6c27,	// (0x00043aa9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6c34,	// (0x00043ab6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6c34,	// (0x00043ab6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6c41,	// (0x00043ac3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6c41,	// (0x00043ac3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc691,	// (0x00049513) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc691,	// (0x00049513) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc6ac,	// (0x0004952e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc6ac,	// (0x0004952e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6c4e,	// (0x00043ad0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6c4e,	// (0x00043ad0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6c69,	// (0x00043aeb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6c69,	// (0x00043aeb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6c84,	// (0x00043b06) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6c84,	// (0x00043b06) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcb,	// (0x0004ca4d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcb,	// (0x0004ca4d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc7d6,	// (0x00049658) cell_vkb_candidate_pane_cp1_ParamLimits

0xc7d6,	// (0x00049658) cell_vkb_candidate_pane_cp1

0xc30e,	// (0x00049190) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc30e,	// (0x00049190) fep_vkb_candidate_drop_down_list_pane_g1

0xc7bc,	// (0x0004963e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc7bc,	// (0x0004963e) fep_vkb_candidate_drop_down_list_pane_g2

0xc7c9,	// (0x0004964b) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc7c9,	// (0x0004964b) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc4,	// (0x0004ca46) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc4,	// (0x0004ca46) fep_vkb_candidate_drop_down_list_pane_g

0xc7fc,	// (0x0004967e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc7fc,	// (0x0004967e) fep_vkb_candidate_drop_down_list_scroll_pane

0xc809,	// (0x0004968b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc809,	// (0x0004968b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc816,	// (0x00049698) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc816,	// (0x00049698) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc822,	// (0x000496a4) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc822,	// (0x000496a4) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc64f,	// (0x000494d1) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc64f,	// (0x000494d1) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc670,	// (0x000494f2) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc670,	// (0x000494f2) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc82e,	// (0x000496b0) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc82e,	// (0x000496b0) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc84f,	// (0x000496d1) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc84f,	// (0x000496d1) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc870,	// (0x000496f2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc870,	// (0x000496f2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0004ca5e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0004ca5e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7620,	// (0x000444a2) title_pane_g1_ParamLimits

0x762d,	// (0x000444af) title_pane_g2_ParamLimits

0xf566,	// (0x0004c3e8) title_pane_g_ParamLimits

0x85dd,	// (0x0004545f) aid_call2_pane

0x85e5,	// (0x00045467) aid_call_pane

0x85ed,	// (0x0004546f) popup_clock_analogue_window_g1

0x85ed,	// (0x0004546f) popup_clock_analogue_window_g2

0x5fa1,	// (0x00042e23) popup_clock_analogue_window_g3

0x5faa,	// (0x00042e2c) popup_clock_analogue_window_g4

0x2c7f,	// (0x0003fb01) popup_clock_analogue_window_g5

0x0004,

0xf715,	// (0x0004c597) popup_clock_analogue_window_g

0x5fb2,	// (0x00042e34) popup_clock_analogue_window_t1

0x5fc0,	// (0x00042e42) clock_digital_number_pane_ParamLimits

0x5fc0,	// (0x00042e42) clock_digital_number_pane

0x5fcc,	// (0x00042e4e) clock_digital_number_pane_cp02_ParamLimits

0x5fcc,	// (0x00042e4e) clock_digital_number_pane_cp02

0x5fd8,	// (0x00042e5a) clock_digital_number_pane_cp03_ParamLimits

0x5fd8,	// (0x00042e5a) clock_digital_number_pane_cp03

0x5fe4,	// (0x00042e66) clock_digital_number_pane_cp04_ParamLimits

0x5fe4,	// (0x00042e66) clock_digital_number_pane_cp04

0x5ff0,	// (0x00042e72) clock_digital_separator_pane_ParamLimits

0x5ff0,	// (0x00042e72) clock_digital_separator_pane

0x5ffc,	// (0x00042e7e) popup_clock_digital_window_t1_ParamLimits

0x5ffc,	// (0x00042e7e) popup_clock_digital_window_t1

0x2c7f,	// (0x0003fb01) clock_digital_number_pane_g1

0x2c7f,	// (0x0003fb01) clock_digital_number_pane_g2

0x0001,

0xf720,	// (0x0004c5a2) clock_digital_number_pane_g

0x2c7f,	// (0x0003fb01) clock_digital_separator_pane_g1

0x2c7f,	// (0x0003fb01) clock_digital_separator_pane_g2

0x0001,

0xf720,	// (0x0004c5a2) clock_digital_separator_pane_g

0x95b7,	// (0x00046439) aid_fill_nsta_ParamLimits

0x9707,	// (0x00046589) indicator_nsta_pane_ParamLimits

0x9898,	// (0x0004671a) popup_clock_analogue_window

0x9898,	// (0x0004671a) popup_clock_digital_window

0x76ea,	// (0x0004456c) grid_indicator_nsta_pane_ParamLimits

0xbb1f,	// (0x000489a1) clock_nsta_pane_t2

0x0001,

0xfaae,	// (0x0004c930) clock_nsta_pane_t

0x5f65,	// (0x00042de7) aid_size_max_handle

0x5f6f,	// (0x00042df1) aid_size_min_handle

0x8c06,	// (0x00045a88) editor_scroll_pane

0xc88b,	// (0x0004970d) ex_editor_pane

0x80ff,	// (0x00044f81) scroll_pane_cp13

0x7f10,	// (0x00044d92) scroll_pane_cp14

0x861c,	// (0x0004549e) scroll_pane_cp36

0x864a,	// (0x000454cc) list_single_graphic_hl_pane_cp2_ParamLimits

0x864a,	// (0x000454cc) list_single_graphic_hl_pane_cp2

0x6758,	// (0x000435da) list_single_graphic_hl_pane_ParamLimits

0x6758,	// (0x000435da) list_single_graphic_hl_pane

0x5763,	// (0x000425e5) aid_size_min_hl_cp1

0xc893,	// (0x00049715) list_highlight_pane_cp34_ParamLimits

0xc893,	// (0x00049715) list_highlight_pane_cp34

0xc8a4,	// (0x00049726) list_single_graphic_hl_pane_g1_ParamLimits

0xc8a4,	// (0x00049726) list_single_graphic_hl_pane_g1

0x576c,	// (0x000425ee) list_single_graphic_hl_pane_g2_ParamLimits

0x576c,	// (0x000425ee) list_single_graphic_hl_pane_g2

0x576c,	// (0x000425ee) list_single_graphic_hl_pane_g3_ParamLimits

0x576c,	// (0x000425ee) list_single_graphic_hl_pane_g3

0x684d,	// (0x000436cf) list_single_graphic_hl_pane_g4_ParamLimits

0x684d,	// (0x000436cf) list_single_graphic_hl_pane_g4

0x6c9f,	// (0x00043b21) list_single_graphic_hl_pane_g5_ParamLimits

0x6c9f,	// (0x00043b21) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0004ca6f) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0004ca6f) list_single_graphic_hl_pane_g

0x5778,	// (0x000425fa) list_single_graphic_hl_pane_t1_ParamLimits

0x5778,	// (0x000425fa) list_single_graphic_hl_pane_t1

0xc8b1,	// (0x00049733) aid_size_min_hl_cp2

0xc8ba,	// (0x0004973c) list_highlight_pane_cp34_cp2_ParamLimits

0xc8ba,	// (0x0004973c) list_highlight_pane_cp34_cp2

0xc8a4,	// (0x00049726) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc8a4,	// (0x00049726) list_single_graphic_hl_pane_g1_cp2

0xc8c7,	// (0x00049749) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc8c7,	// (0x00049749) list_single_graphic_hl_pane_g2_cp2

0xc8d3,	// (0x00049755) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc8d3,	// (0x00049755) list_single_graphic_hl_pane_g3_cp2

0x7f18,	// (0x00044d9a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7f18,	// (0x00044d9a) list_single_graphic_hl_pane_g4_cp2

0xc8e1,	// (0x00049763) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc8e1,	// (0x00049763) list_single_graphic_hl_pane_g5_cp2

0x62d3,	// (0x00043155) control_pane_g4_ParamLimits

0x62d3,	// (0x00043155) control_pane_g4

0x8f84,	// (0x00045e06) bg_popup_sub_pane_cp10_ParamLimits

0xc08e,	// (0x00048f10) list_choice_list_pane_ParamLimits

0xc09d,	// (0x00048f1f) scroll_pane_cp23

0x7974,	// (0x000447f6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6fd,	// (0x0004957f) list_preview_fixed_pane_ParamLimits

0xc713,	// (0x00049595) list_preview_fixed_pane_cp_ParamLimits

0xc713,	// (0x00049595) list_preview_fixed_pane_cp

0xc71f,	// (0x000495a1) popup_preview_fixed_window_g1_ParamLimits

0xc71f,	// (0x000495a1) popup_preview_fixed_window_g1

0xc72b,	// (0x000495ad) popup_preview_fixed_window_g2_ParamLimits

0xc72b,	// (0x000495ad) popup_preview_fixed_window_g2

0x0002,

0xfb7c,	// (0x0004c9fe) popup_preview_fixed_window_g_ParamLimits

0xfb7c,	// (0x0004c9fe) popup_preview_fixed_window_g

0x5ed7,	// (0x00042d59) aid_navi_side_left_pane_ParamLimits

0x5eec,	// (0x00042d6e) aid_navi_side_right_pane_ParamLimits

0x5f04,	// (0x00042d86) navi_icon_pane_stacon_ParamLimits

0x5f18,	// (0x00042d9a) navi_navi_pane_stacon_ParamLimits

0x5f04,	// (0x00042d86) navi_text_pane_stacon_ParamLimits

0x2c75,	// (0x0003faf7) main_text_info_pane

0xc90b,	// (0x0004978d) listscroll_text_info_pane

0xc913,	// (0x00049795) list_text_info_pane_ParamLimits

0xc913,	// (0x00049795) list_text_info_pane

0xc922,	// (0x000497a4) scroll_pane_cp24_ParamLimits

0xc922,	// (0x000497a4) scroll_pane_cp24

0xc940,	// (0x000497c2) list_text_info_pane_t1_ParamLimits

0xc940,	// (0x000497c2) list_text_info_pane_t1

0x8fca,	// (0x00045e4c) popup_fast_swap2_window_ParamLimits

0x8fca,	// (0x00045e4c) popup_fast_swap2_window

0xc965,	// (0x000497e7) aid_size_cell_fast2

0x2c75,	// (0x0003faf7) bg_popup_window_pane_cp17

0x9f1f,	// (0x00046da1) heading_pane_cp2

0x7bd4,	// (0x00044a56) listscroll_fast2_pane

0xc96f,	// (0x000497f1) grid_fast2_pane

0xc979,	// (0x000497fb) listscroll_fast2_pane_g1

0xc983,	// (0x00049805) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0004ca7a) listscroll_fast2_pane_g

0x80ff,	// (0x00044f81) scroll_pane_cp26

0xc98d,	// (0x0004980f) cell_fast2_pane_ParamLimits

0xc98d,	// (0x0004980f) cell_fast2_pane

0xc9a4,	// (0x00049826) cell_fast2_pane_g1

0xc9ad,	// (0x0004982f) cell_fast2_pane_g2

0xc9b6,	// (0x00049838) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0004ca7f) cell_fast2_pane_g

0x7ccd,	// (0x00044b4f) grid_highlight_pane_cp9

0x7ce2,	// (0x00044b64) main_eswt_pane_ParamLimits

0x7ce2,	// (0x00044b64) main_eswt_pane

0xc937,	// (0x000497b9) list_single_text_info_pane

0xc9be,	// (0x00049840) eswt_ctrl_button_pane

0xc9be,	// (0x00049840) eswt_ctrl_canvas_pane

0xc9c6,	// (0x00049848) eswt_ctrl_combo_pane

0xc9be,	// (0x00049840) eswt_ctrl_default_pane

0xc9be,	// (0x00049840) eswt_ctrl_label_pane

0xc9ce,	// (0x00049850) eswt_ctrl_wait_pane

0xc9d6,	// (0x00049858) eswt_shell_pane

0x2c75,	// (0x0003faf7) listscroll_eswt_app_pane

0xc9f6,	// (0x00049878) popup_eswt_tasktip_window_ParamLimits

0xc9f6,	// (0x00049878) popup_eswt_tasktip_window

0x9bb3,	// (0x00046a35) bg_popup_window_pane_cp18

0xca07,	// (0x00049889) eswt_control_pane_g1_ParamLimits

0xca07,	// (0x00049889) eswt_control_pane_g1

0xca14,	// (0x00049896) eswt_control_pane_g2_ParamLimits

0xca14,	// (0x00049896) eswt_control_pane_g2

0xca21,	// (0x000498a3) eswt_control_pane_g3_ParamLimits

0xca21,	// (0x000498a3) eswt_control_pane_g3

0xca2e,	// (0x000498b0) eswt_control_pane_g4_ParamLimits

0xca2e,	// (0x000498b0) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0004ca86) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0004ca86) eswt_control_pane_g

0x7f7d,	// (0x00044dff) bg_button_pane_ParamLimits

0x7f7d,	// (0x00044dff) bg_button_pane

0x7ce2,	// (0x00044b64) common_borders_pane_copy2_ParamLimits

0x7ce2,	// (0x00044b64) common_borders_pane_copy2

0xca3b,	// (0x000498bd) control_button_pane_g1_ParamLimits

0xca3b,	// (0x000498bd) control_button_pane_g1

0xca47,	// (0x000498c9) control_button_pane_g2_ParamLimits

0xca47,	// (0x000498c9) control_button_pane_g2

0xca53,	// (0x000498d5) control_button_pane_g3_ParamLimits

0xca53,	// (0x000498d5) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0004ca8f) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0004ca8f) control_button_pane_g

0xca67,	// (0x000498e9) control_button_pane_t1

0xca75,	// (0x000498f7) control_button_pane_t2

0x0001,

0xfc14,	// (0x0004ca96) control_button_pane_t

0x9ac1,	// (0x00046943) bg_button_pane_g1

0x9ac9,	// (0x0004694b) bg_button_pane_g2

0x9ad1,	// (0x00046953) bg_button_pane_g3

0x9ad9,	// (0x0004695b) bg_button_pane_g4

0x9ae1,	// (0x00046963) bg_button_pane_g5

0x9ae9,	// (0x0004696b) bg_button_pane_g6

0x9af1,	// (0x00046973) bg_button_pane_g7

0x9af9,	// (0x0004697b) bg_button_pane_g8

0x9b01,	// (0x00046983) bg_button_pane_g9

0x0008,

0xf87c,	// (0x0004c6fe) bg_button_pane_g

0xc049,	// (0x00048ecb) common_borders_pane_ParamLimits

0xc049,	// (0x00048ecb) common_borders_pane

0xca07,	// (0x00049889) eswt_control_pane_g1_copy1_ParamLimits

0xca07,	// (0x00049889) eswt_control_pane_g1_copy1

0xca14,	// (0x00049896) eswt_control_pane_g2_copy1_ParamLimits

0xca14,	// (0x00049896) eswt_control_pane_g2_copy1

0xca21,	// (0x000498a3) eswt_control_pane_g3_copy1_ParamLimits

0xca21,	// (0x000498a3) eswt_control_pane_g3_copy1

0xca2e,	// (0x000498b0) eswt_control_pane_g4_copy1_ParamLimits

0xca2e,	// (0x000498b0) eswt_control_pane_g4_copy1

0xc084,	// (0x00048f06) bg_eswt_ctrl_canvas_pane_g1

0xc049,	// (0x00048ecb) common_borders_pane_cp2_ParamLimits

0xc049,	// (0x00048ecb) common_borders_pane_cp2

0xc049,	// (0x00048ecb) common_borders_pane_cp3_ParamLimits

0xc049,	// (0x00048ecb) common_borders_pane_cp3

0xca83,	// (0x00049905) separator_horizontal_pane

0xca8b,	// (0x0004990d) separator_vertical_pane

0xca07,	// (0x00049889) eswt_control_pane_g1_copy2_ParamLimits

0xca07,	// (0x00049889) eswt_control_pane_g1_copy2

0xca14,	// (0x00049896) eswt_control_pane_g2_copy2_ParamLimits

0xca14,	// (0x00049896) eswt_control_pane_g2_copy2

0xca21,	// (0x000498a3) eswt_control_pane_g3_copy2_ParamLimits

0xca21,	// (0x000498a3) eswt_control_pane_g3_copy2

0xca2e,	// (0x000498b0) eswt_control_pane_g4_copy2_ParamLimits

0xca2e,	// (0x000498b0) eswt_control_pane_g4_copy2

0x2c75,	// (0x0003faf7) common_borders_pane_cp4

0xca94,	// (0x00049916) separator_horizontal_pane_g1

0xca9d,	// (0x0004991f) separator_horizontal_pane_g2

0xcaa6,	// (0x00049928) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0004ca9b) separator_horizontal_pane_g

0xca07,	// (0x00049889) eswt_control_pane_g1_copy3_ParamLimits

0xca07,	// (0x00049889) eswt_control_pane_g1_copy3

0xca14,	// (0x00049896) eswt_control_pane_g2_copy3_ParamLimits

0xca14,	// (0x00049896) eswt_control_pane_g2_copy3

0xca21,	// (0x000498a3) eswt_control_pane_g3_copy3_ParamLimits

0xca21,	// (0x000498a3) eswt_control_pane_g3_copy3

0xca2e,	// (0x000498b0) eswt_control_pane_g4_copy3_ParamLimits

0xca2e,	// (0x000498b0) eswt_control_pane_g4_copy3

0x2c75,	// (0x0003faf7) common_borders_pane_cp5

0xcaaf,	// (0x00049931) separator_vertical_pane_g1

0xcab8,	// (0x0004993a) separator_vertical_pane_g2

0xcac1,	// (0x00049943) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0004caa2) separator_vertical_pane_g

0xca07,	// (0x00049889) eswt_control_pane_g1_copy4_ParamLimits

0xca07,	// (0x00049889) eswt_control_pane_g1_copy4

0xca14,	// (0x00049896) eswt_control_pane_g2_copy4_ParamLimits

0xca14,	// (0x00049896) eswt_control_pane_g2_copy4

0xca21,	// (0x000498a3) eswt_control_pane_g3_copy4_ParamLimits

0xca21,	// (0x000498a3) eswt_control_pane_g3_copy4

0xca2e,	// (0x000498b0) eswt_control_pane_g4_copy4_ParamLimits

0xca2e,	// (0x000498b0) eswt_control_pane_g4_copy4

0xcaca,	// (0x0004994c) eswt_ctrl_combo_button_pane

0xcad2,	// (0x00049954) eswt_ctrl_input_pane

0xcada,	// (0x0004995c) popup_choice_list_window_cp70

0xcae2,	// (0x00049964) eswt_ctrl_input_pane_t1

0x2c75,	// (0x0003faf7) input_focus_pane_cp70

0xc049,	// (0x00048ecb) bg_button_pane_cp70_ParamLimits

0xc049,	// (0x00048ecb) bg_button_pane_cp70

0xcaf0,	// (0x00049972) eswt_ctrl_combo_button_pane_g1

0xcaf8,	// (0x0004997a) wait_bar_pane_cp70

0x9bb3,	// (0x00046a35) bg_popup_window_pane_cp70_ParamLimits

0x9bb3,	// (0x00046a35) bg_popup_window_pane_cp70

0xcb00,	// (0x00049982) popup_eswt_tasktip_window_t1

0xcb16,	// (0x00049998) wait_bar_pane_cp71_ParamLimits

0xcb16,	// (0x00049998) wait_bar_pane_cp71

0xcb22,	// (0x000499a4) grid_eswt_app_pane

0x842a,	// (0x000452ac) scroll_pane_cp70

0xcb2b,	// (0x000499ad) cell_eswt_app_pane_ParamLimits

0xcb2b,	// (0x000499ad) cell_eswt_app_pane

0xcb5d,	// (0x000499df) cell_eswt_app_pane_g1_ParamLimits

0xcb5d,	// (0x000499df) cell_eswt_app_pane_g1

0xcb8c,	// (0x00049a0e) cell_eswt_app_pane_g2_ParamLimits

0xcb8c,	// (0x00049a0e) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0004caa9) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0004caa9) cell_eswt_app_pane_g

0xcbb5,	// (0x00049a37) cell_eswt_app_pane_t1_ParamLimits

0xcbb5,	// (0x00049a37) cell_eswt_app_pane_t1

0xcbe7,	// (0x00049a69) grid_highlight_pane_cp70_ParamLimits

0xcbe7,	// (0x00049a69) grid_highlight_pane_cp70

0xb018,	// (0x00047e9a) set_content_pane_g1

0x8eb6,	// (0x00045d38) status_small_volume_pane

0x6cb3,	// (0x00043b35) status_small_volume_pane_g1

0x6cbb,	// (0x00043b3d) volume_small2_pane

0x6cc4,	// (0x00043b46) volume_small2_pane_g1

0x6ccd,	// (0x00043b4f) volume_small2_pane_g2

0x6cd6,	// (0x00043b58) volume_small2_pane_g3

0x6cdf,	// (0x00043b61) volume_small2_pane_g4

0x6ce8,	// (0x00043b6a) volume_small2_pane_g5

0x6cf1,	// (0x00043b73) volume_small2_pane_g6

0x6cfa,	// (0x00043b7c) volume_small2_pane_g7

0x6d03,	// (0x00043b85) volume_small2_pane_g8

0x6d0c,	// (0x00043b8e) volume_small2_pane_g9

0x6d15,	// (0x00043b97) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0004caae) volume_small2_pane_g

0xc462,	// (0x000492e4) fep_vkb_top_text_pane_g1_ParamLimits

0xc47d,	// (0x000492ff) fep_vkb_top_text_pane_t1_ParamLimits

0xc737,	// (0x000495b9) popup_preview_fixed_window_g3_ParamLimits

0xc737,	// (0x000495b9) popup_preview_fixed_window_g3

0x94db,	// (0x0004635d) popup_toolbar_trans_pane

0xaebd,	// (0x00047d3f) aid_height_set_list_ParamLimits

0xaece,	// (0x00047d50) aid_size_parent_ParamLimits

0x8f84,	// (0x00045e06) list_highlight_pane_cp2_ParamLimits

0xb018,	// (0x00047e9a) set_content_pane_g1_ParamLimits

0xb121,	// (0x00047fa3) list_single_image_pane_ParamLimits

0xb121,	// (0x00047fa3) list_single_image_pane

0xcbf3,	// (0x00049a75) aid_size_cell_image_ParamLimits

0xcbf3,	// (0x00049a75) aid_size_cell_image

0xcc00,	// (0x00049a82) grid_single_image_pane_ParamLimits

0xcc00,	// (0x00049a82) grid_single_image_pane

0x7f97,	// (0x00044e19) list_single_image_pane_g1_ParamLimits

0x7f97,	// (0x00044e19) list_single_image_pane_g1

0x7fa3,	// (0x00044e25) list_single_image_pane_g2_ParamLimits

0x7fa3,	// (0x00044e25) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0004cac3) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0004cac3) list_single_image_pane_g

0xcc0e,	// (0x00049a90) list_single_image_pane_t1_ParamLimits

0xcc0e,	// (0x00049a90) list_single_image_pane_t1

0xcc24,	// (0x00049aa6) cell_image_list_pane_ParamLimits

0xcc24,	// (0x00049aa6) cell_image_list_pane

0xcc3a,	// (0x00049abc) cell_image_list_pane_g1

0xcc43,	// (0x00049ac5) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0004cac8) cell_image_list_pane_g

0xcc4c,	// (0x00049ace) aid_size_cell_tb_trans_pane

0x7f7d,	// (0x00044dff) bg_tb_trans_pane

0xcc5e,	// (0x00049ae0) grid_tb_trans_pane

0x9ac1,	// (0x00046943) bg_tb_trans_pane_g1

0x9ac9,	// (0x0004694b) bg_tb_trans_pane_g2

0x9ad1,	// (0x00046953) bg_tb_trans_pane_g3

0x9ad9,	// (0x0004695b) bg_tb_trans_pane_g4

0x9ae1,	// (0x00046963) bg_tb_trans_pane_g5

0x9af9,	// (0x0004697b) bg_tb_trans_pane_g6

0x9b01,	// (0x00046983) bg_tb_trans_pane_g7

0x9ae9,	// (0x0004696b) bg_tb_trans_pane_g8

0x9af1,	// (0x00046973) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0004cacd) bg_tb_trans_pane_g

0xcc72,	// (0x00049af4) cell_toolbar_trans_pane_ParamLimits

0xcc72,	// (0x00049af4) cell_toolbar_trans_pane

0xc084,	// (0x00048f06) cell_toolbar_trans_pane_g1

0xbd1b,	// (0x00048b9d) list_form2_midp_pane_t1

0xbd29,	// (0x00048bab) list_form2_midp_pane_t2

0x0001,

0xfaf4,	// (0x0004c976) list_form2_midp_pane_t

0xbd37,	// (0x00048bb9) scroll_pane_cp51_ParamLimits

0xbee6,	// (0x00048d68) form2_midp_wait_pane_g1

0xbeef,	// (0x00048d71) form2_midp_wait_pane_g2

0xbef8,	// (0x00048d7a) form2_midp_wait_pane_g3

0x0002,

0xfb09,	// (0x0004c98b) form2_midp_wait_pane_g

0x76ea,	// (0x0004456c) list_highlight_pane_cp21_ParamLimits

0xbf29,	// (0x00048dab) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbf38,	// (0x00048dba) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xb0da,	// (0x00047f5c) list_single_2graphic_im_pane_ParamLimits

0xb0da,	// (0x00047f5c) list_single_2graphic_im_pane

0xcc98,	// (0x00049b1a) list_single_2graphic_im_pane_g1_ParamLimits

0xcc98,	// (0x00049b1a) list_single_2graphic_im_pane_g1

0xcca9,	// (0x00049b2b) list_single_2graphic_im_pane_g2_ParamLimits

0xcca9,	// (0x00049b2b) list_single_2graphic_im_pane_g2

0xccb5,	// (0x00049b37) list_single_2graphic_im_pane_g3_ParamLimits

0xccb5,	// (0x00049b37) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0004cae0) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0004cae0) list_single_2graphic_im_pane_g

0xccd5,	// (0x00049b57) list_single_2graphic_im_pane_t1_ParamLimits

0xccd5,	// (0x00049b57) list_single_2graphic_im_pane_t1

0xc743,	// (0x000495c5) list_single_graphic_2heading_pane_fp_ParamLimits

0xc743,	// (0x000495c5) list_single_graphic_2heading_pane_fp

0x5645,	// (0x000424c7) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5645,	// (0x000424c7) list_single_graphic_2heading_pane_fp_g1

0xc75c,	// (0x000495de) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc75c,	// (0x000495de) list_single_graphic_2heading_pane_fp_g2

0x5da1,	// (0x00042c23) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5da1,	// (0x00042c23) list_single_graphic_2heading_pane_fp_g3

0x6b76,	// (0x000439f8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6b76,	// (0x000439f8) list_single_graphic_2heading_pane_fp_g4

0xc768,	// (0x000495ea) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc768,	// (0x000495ea) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8c,	// (0x0004ca0e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8c,	// (0x0004ca0e) list_single_graphic_2heading_pane_fp_g

0x578e,	// (0x00042610) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x578e,	// (0x00042610) list_single_graphic_2heading_pane_fp_t1

0x567d,	// (0x000424ff) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x567d,	// (0x000424ff) list_single_graphic_2heading_pane_fp_t2

0x57a4,	// (0x00042626) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x57a4,	// (0x00042626) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0004cae9) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0004cae9) list_single_graphic_2heading_pane_fp_t

0xc124,	// (0x00048fa6) fep_hwr_write_pane_g5_ParamLimits

0xc124,	// (0x00048fa6) fep_hwr_write_pane_g5

0xc130,	// (0x00048fb2) fep_hwr_write_pane_g6_ParamLimits

0xc130,	// (0x00048fb2) fep_hwr_write_pane_g6

0xc9d6,	// (0x00049858) eswt_shell_pane_ParamLimits

0x9bb3,	// (0x00046a35) bg_popup_window_pane_cp18_ParamLimits

0xae14,	// (0x00047c96) heading_pane_cp70

0xcb00,	// (0x00049982) popup_eswt_tasktip_window_t1_ParamLimits

0x960e,	// (0x00046490) aid_touch_tab_arrow_left

0x961d,	// (0x0004649f) aid_touch_tab_arrow_right

0x763e,	// (0x000444c0) title_pane_g3_ParamLimits

0x763e,	// (0x000444c0) title_pane_g3

0x7f3c,	// (0x00044dbe) set_value_pane_g1

0x94db,	// (0x0004635d) popup_toolbar_trans_pane_ParamLimits

0xcc4c,	// (0x00049ace) aid_size_cell_tb_trans_pane_ParamLimits

0x7f7d,	// (0x00044dff) bg_tb_trans_pane_ParamLimits

0xcc5e,	// (0x00049ae0) grid_tb_trans_pane_ParamLimits

0x7974,	// (0x000447f6) cont_note_pane_ParamLimits

0x7974,	// (0x000447f6) cont_note_pane

0x7ce2,	// (0x00044b64) cont_snote2_single_text_pane_ParamLimits

0x7ce2,	// (0x00044b64) cont_snote2_single_text_pane

0x7ce2,	// (0x00044b64) cont_snote2_single_graphic_pane_ParamLimits

0x7ce2,	// (0x00044b64) cont_snote2_single_graphic_pane

0xa13b,	// (0x00046fbd) cont_note_wait_pane_ParamLimits

0xa13b,	// (0x00046fbd) cont_note_wait_pane

0xa13b,	// (0x00046fbd) cont_note_image_pane_ParamLimits

0xa13b,	// (0x00046fbd) cont_note_image_pane

0xcd06,	// (0x00049b88) popup_note2_window_g1_ParamLimits

0xcd06,	// (0x00049b88) popup_note2_window_g1

0xcd37,	// (0x00049bb9) popup_note2_window_t1_ParamLimits

0xcd37,	// (0x00049bb9) popup_note2_window_t1

0xcd7c,	// (0x00049bfe) popup_note2_window_t2_ParamLimits

0xcd7c,	// (0x00049bfe) popup_note2_window_t2

0xcdc1,	// (0x00049c43) popup_note2_window_t3_ParamLimits

0xcdc1,	// (0x00049c43) popup_note2_window_t3

0xce06,	// (0x00049c88) popup_note2_window_t4_ParamLimits

0xce06,	// (0x00049c88) popup_note2_window_t4

0x79f8,	// (0x0004487a) popup_note2_window_t5_ParamLimits

0x79f8,	// (0x0004487a) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0004caf5) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0004caf5) popup_note2_window_t

0xce35,	// (0x00049cb7) popup_note2_image_window_g1_ParamLimits

0xce35,	// (0x00049cb7) popup_note2_image_window_g1

0xce41,	// (0x00049cc3) popup_note2_image_window_g2_ParamLimits

0xce41,	// (0x00049cc3) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0004cb00) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0004cb00) popup_note2_image_window_g

0xce53,	// (0x00049cd5) popup_note2_image_window_t1_ParamLimits

0xce53,	// (0x00049cd5) popup_note2_image_window_t1

0xce6b,	// (0x00049ced) popup_note2_image_window_t2_ParamLimits

0xce6b,	// (0x00049ced) popup_note2_image_window_t2

0xce83,	// (0x00049d05) popup_note2_image_window_t3_ParamLimits

0xce83,	// (0x00049d05) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0004cb05) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0004cb05) popup_note2_image_window_t

0xa149,	// (0x00046fcb) popup_note2_wait_window_g1_ParamLimits

0xa149,	// (0x00046fcb) popup_note2_wait_window_g1

0xce9f,	// (0x00049d21) popup_note2_wait_window_g2_ParamLimits

0xce9f,	// (0x00049d21) popup_note2_wait_window_g2

0xa161,	// (0x00046fe3) popup_note2_wait_window_g3_ParamLimits

0xa161,	// (0x00046fe3) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0004cb0c) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0004cb0c) popup_note2_wait_window_g

0xceab,	// (0x00049d2d) popup_note2_wait_window_t1_ParamLimits

0xceab,	// (0x00049d2d) popup_note2_wait_window_t1

0xcec9,	// (0x00049d4b) popup_note2_wait_window_t2_ParamLimits

0xcec9,	// (0x00049d4b) popup_note2_wait_window_t2

0xcee7,	// (0x00049d69) popup_note2_wait_window_t3_ParamLimits

0xcee7,	// (0x00049d69) popup_note2_wait_window_t3

0xcef9,	// (0x00049d7b) popup_note2_wait_window_t4_ParamLimits

0xcef9,	// (0x00049d7b) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0004cb13) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0004cb13) popup_note2_wait_window_t

0xcf0b,	// (0x00049d8d) wait_bar2_pane_ParamLimits

0xcf0b,	// (0x00049d8d) wait_bar2_pane

0xcf23,	// (0x00049da5) popup_snote2_single_text_window_g1_ParamLimits

0xcf23,	// (0x00049da5) popup_snote2_single_text_window_g1

0xcf4b,	// (0x00049dcd) popup_snote2_single_text_window_t1_ParamLimits

0xcf4b,	// (0x00049dcd) popup_snote2_single_text_window_t1

0xcf97,	// (0x00049e19) popup_snote2_single_text_window_t2_ParamLimits

0xcf97,	// (0x00049e19) popup_snote2_single_text_window_t2

0xcfe3,	// (0x00049e65) popup_snote2_single_text_window_t3_ParamLimits

0xcfe3,	// (0x00049e65) popup_snote2_single_text_window_t3

0xd024,	// (0x00049ea6) popup_snote2_single_text_window_t4_ParamLimits

0xd024,	// (0x00049ea6) popup_snote2_single_text_window_t4

0xd05a,	// (0x00049edc) popup_snote2_single_text_window_t5_ParamLimits

0xd05a,	// (0x00049edc) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0004cb1c) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0004cb1c) popup_snote2_single_text_window_t

0xd085,	// (0x00049f07) popup_snote2_single_graphic_window_g1_ParamLimits

0xd085,	// (0x00049f07) popup_snote2_single_graphic_window_g1

0xd0ad,	// (0x00049f2f) popup_snote2_single_graphic_window_g2_ParamLimits

0xd0ad,	// (0x00049f2f) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0004cb27) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0004cb27) popup_snote2_single_graphic_window_g

0xd0d5,	// (0x00049f57) popup_snote2_single_graphic_window_t1_ParamLimits

0xd0d5,	// (0x00049f57) popup_snote2_single_graphic_window_t1

0xd121,	// (0x00049fa3) popup_snote2_single_graphic_window_t2_ParamLimits

0xd121,	// (0x00049fa3) popup_snote2_single_graphic_window_t2

0xcfe3,	// (0x00049e65) popup_snote2_single_graphic_window_t3_ParamLimits

0xcfe3,	// (0x00049e65) popup_snote2_single_graphic_window_t3

0xd024,	// (0x00049ea6) popup_snote2_single_graphic_window_t4_ParamLimits

0xd024,	// (0x00049ea6) popup_snote2_single_graphic_window_t4

0xd05a,	// (0x00049edc) popup_snote2_single_graphic_window_t5_ParamLimits

0xd05a,	// (0x00049edc) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0004cb2c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0004cb2c) popup_snote2_single_graphic_window_t

0xbbe1,	// (0x00048a63) clock_nsta_pane_cp2_t1

0xbbe1,	// (0x00048a63) clock_nsta_pane_cp2_t2

0x0001,

0xfaca,	// (0x0004c94c) clock_nsta_pane_cp2_t

0x5110,	// (0x00041f92) form_field_data_wide_pane_g1_ParamLimits

0x7f97,	// (0x00044e19) form_field_data_wide_pane_g2_ParamLimits

0x7f97,	// (0x00044e19) form_field_data_wide_pane_g2

0x7fa3,	// (0x00044e25) form_field_data_wide_pane_g3_ParamLimits

0x7fa3,	// (0x00044e25) form_field_data_wide_pane_g3

0x0002,

0xf698,	// (0x0004c51a) form_field_data_wide_pane_g_ParamLimits

0xf698,	// (0x0004c51a) form_field_data_wide_pane_g

0xbabb,	// (0x0004893d) grid_touch_3_pane_ParamLimits

0xbabb,	// (0x0004893d) grid_touch_3_pane

0xd16d,	// (0x00049fef) cell_touch_3_pane_ParamLimits

0xd16d,	// (0x00049fef) cell_touch_3_pane

0xc084,	// (0x00048f06) cell_touch_3_pane_g1

0xc084,	// (0x00048f06) cell_touch_3_pane_g2

0x0001,

0xfb4f,	// (0x0004c9d1) cell_touch_3_pane_g

0x7a2a,	// (0x000448ac) cont_query_data_pane

0x7a32,	// (0x000448b4) cont_query_data_pane_cp1

0xd1a0,	// (0x0004a022) button_value_adjust_pane_cp7

0xd1a8,	// (0x0004a02a) query_popup_pane_cp3

0x86e2,	// (0x00045564) bg_popup_sub_pane_cp22_ParamLimits

0x601b,	// (0x00042e9d) navi_navi_volume_pane_cp2

0x6036,	// (0x00042eb8) popup_side_volume_key_window_g2

0x6045,	// (0x00042ec7) popup_side_volume_key_window_g3

0x0002,

0xf72e,	// (0x0004c5b0) popup_side_volume_key_window_g

0x6062,	// (0x00042ee4) popup_side_volume_key_window_t2

0x0001,

0xf735,	// (0x0004c5b7) popup_side_volume_key_window_t

0x899d,	// (0x0004581f) popup_side_volume_key_window_ParamLimits

0x4d03,	// (0x00041b85) list_double_graphic_pane_g4_ParamLimits

0x4d03,	// (0x00041b85) list_double_graphic_pane_g4

0xb109,	// (0x00047f8b) list_single_2heading_msg_pane_ParamLimits

0xb109,	// (0x00047f8b) list_single_2heading_msg_pane

0x6d1e,	// (0x00043ba0) list_single_2heading_msg_pane_g1_ParamLimits

0x6d1e,	// (0x00043ba0) list_single_2heading_msg_pane_g1

0x7f18,	// (0x00044d9a) list_single_2heading_msg_pane_g2_ParamLimits

0x7f18,	// (0x00044d9a) list_single_2heading_msg_pane_g2

0x6d2a,	// (0x00043bac) list_single_2heading_msg_pane_g3_ParamLimits

0x6d2a,	// (0x00043bac) list_single_2heading_msg_pane_g3

0x6d36,	// (0x00043bb8) list_single_2heading_msg_pane_g4_ParamLimits

0x6d36,	// (0x00043bb8) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0004cb37) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0004cb37) list_single_2heading_msg_pane_g

0x57c4,	// (0x00042646) list_single_2heading_msg_pane_t1_ParamLimits

0x57c4,	// (0x00042646) list_single_2heading_msg_pane_t1

0x57ec,	// (0x0004266e) list_single_2heading_msg_pane_t2_ParamLimits

0x57ec,	// (0x0004266e) list_single_2heading_msg_pane_t2

0x581b,	// (0x0004269d) list_single_2heading_msg_pane_t3_ParamLimits

0x581b,	// (0x0004269d) list_single_2heading_msg_pane_t3

0x5854,	// (0x000426d6) list_single_2heading_msg_pane_t4_ParamLimits

0x5854,	// (0x000426d6) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0004cb40) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0004cb40) list_single_2heading_msg_pane_t

0x2c93,	// (0x0003fb15) title_pane_g4_ParamLimits

0x2c93,	// (0x0003fb15) title_pane_g4

0x5e27,	// (0x00042ca9) title_pane_stacon_g3_ParamLimits

0x5e27,	// (0x00042ca9) title_pane_stacon_g3

0xccc9,	// (0x00049b4b) list_single_2graphic_im_pane_g4_ParamLimits

0xccc9,	// (0x00049b4b) list_single_2graphic_im_pane_g4

0xabb1,	// (0x00047a33) popup_side_volume_key_window_cp

0xb427,	// (0x000482a9) main_idle_act2_pane_t1

0x640b,	// (0x0004328d) toolbar_button_pane_g10

0x7eda,	// (0x00044d5c) popup_toolbar_window_cp1

0xbbd2,	// (0x00048a54) clock_nsta_pane_cp_t1

0xbbd2,	// (0x00048a54) clock_nsta_pane_cp_t2

0x0001,

0xfac5,	// (0x0004c947) clock_nsta_pane_cp_t

0x601b,	// (0x00042e9d) navi_navi_volume_pane_cp2_ParamLimits

0x602a,	// (0x00042eac) popup_side_volume_key_window_g1_ParamLimits

0x6036,	// (0x00042eb8) popup_side_volume_key_window_g2_ParamLimits

0x6045,	// (0x00042ec7) popup_side_volume_key_window_g3_ParamLimits

0xf72e,	// (0x0004c5b0) popup_side_volume_key_window_g_ParamLimits

0x6910,	// (0x00043792) fep_hwr_aid_pane

0x2c45,	// (0x0003fac7) bg_fep_hwr_top_pane_g4_ParamLimits

0xc0f4,	// (0x00048f76) fep_hwr_top_pane_g1_ParamLimits

0xc106,	// (0x00048f88) fep_hwr_top_pane_g2_ParamLimits

0x69cb,	// (0x0004384d) fep_hwr_top_pane_g3_ParamLimits

0xfb1a,	// (0x0004c99c) fep_hwr_top_pane_g_ParamLimits

0x69e0,	// (0x00043862) fep_hwr_top_text_pane_ParamLimits

0xa966,	// (0x000477e8) aid_touch_tab_arrow_arrow_2

0xa96f,	// (0x000477f1) aid_touch_tab_arrow_left_2

0x6924,	// (0x000437a6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x695b,	// (0x000437dd) fep_hwr_prediction_pane

0xc25c,	// (0x000490de) fep_vkb_prediction_pane

0xc362,	// (0x000491e4) fep_vkb_side_pane_g3_ParamLimits

0xc362,	// (0x000491e4) fep_vkb_side_pane_g3

0xc30e,	// (0x00049190) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc7bc,	// (0x0004963e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc7c9,	// (0x0004964b) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc4,	// (0x0004ca46) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd1cf,	// (0x0004a051) fep_hwr_prediction_pane_g1

0x6d4e,	// (0x00043bd0) fep_hwr_prediction_pane_g2

0x6d56,	// (0x00043bd8) fep_hwr_prediction_pane_g3

0x6d5e,	// (0x00043be0) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0004cb49) fep_hwr_prediction_pane_g

0xd1cf,	// (0x0004a051) fep_vkb_prediction_pane_g1

0xd1d9,	// (0x0004a05b) fep_vkb_prediction_pane_g2

0xd1e1,	// (0x0004a063) fep_vkb_prediction_pane_g3

0xd1e9,	// (0x0004a06b) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0004cb52) fep_vkb_prediction_pane_g

0x6700,	// (0x00043582) slider_set_pane_g3

0x6714,	// (0x00043596) slider_set_pane_g4

0x672c,	// (0x000435ae) slider_set_pane_g5

0x6700,	// (0x00043582) slider_set_pane_g6

0x6742,	// (0x000435c4) slider_set_pane_g7

0xb05f,	// (0x00047ee1) slider_form_pane_g3

0xb068,	// (0x00047eea) slider_form_pane_g4

0xb070,	// (0x00047ef2) slider_form_pane_g5

0xb05f,	// (0x00047ee1) slider_form_pane_g6

0xb078,	// (0x00047efa) slider_form_pane_g7

0xb6f5,	// (0x00048577) slider_set_pane_vc_g3

0xb6fe,	// (0x00048580) slider_set_pane_vc_g4

0xb707,	// (0x00048589) slider_set_pane_vc_g5

0xb6f5,	// (0x00048577) slider_set_pane_vc_g6

0xb710,	// (0x00048592) slider_set_pane_vc_g7

0xb6f5,	// (0x00048577) slider_form_pane_vc_g1

0xb6fe,	// (0x00048580) slider_form_pane_vc_g2

0xb707,	// (0x00048589) slider_form_pane_vc_g3

0xb6f5,	// (0x00048577) slider_form_pane_vc_g4

0xb8c5,	// (0x00048747) slider_form_pane_vc_g5

0x0004,

0xfa9e,	// (0x0004c920) slider_form_pane_vc_g

0x2c75,	// (0x0003faf7) main_idle_act3_pane

0xd1f1,	// (0x0004a073) ai3_links_pane

0xd1fa,	// (0x0004a07c) popup_ai3_data_window_ParamLimits

0xd1fa,	// (0x0004a07c) popup_ai3_data_window

0x2c75,	// (0x0003faf7) grid_ai3_links_pane

0xd218,	// (0x0004a09a) cell_ai3_links_pane_ParamLimits

0xd218,	// (0x0004a09a) cell_ai3_links_pane

0xd232,	// (0x0004a0b4) bg_popup_sub_pane_cp11

0xd23f,	// (0x0004a0c1) cell_ai3_links_pane_g1

0x2c75,	// (0x0003faf7) bg_popup_sub_pane_cp12

0xd264,	// (0x0004a0e6) heading_ai3_data_pane

0xd26c,	// (0x0004a0ee) list_ai3_gene_pane

0xd278,	// (0x0004a0fa) popup_ai3_data_window_g1

0xd280,	// (0x0004a102) heading_ai3_data_pane_g1

0xd288,	// (0x0004a10a) heading_ai3_data_pane_t1

0xd296,	// (0x0004a118) list_double_ai3_gene_pane_ParamLimits

0xd296,	// (0x0004a118) list_double_ai3_gene_pane

0xd2a3,	// (0x0004a125) list_single_ai3_gene_pane_ParamLimits

0xd2a3,	// (0x0004a125) list_single_ai3_gene_pane

0xc049,	// (0x00048ecb) list_highlight_pane_cp7_ParamLimits

0xc049,	// (0x00048ecb) list_highlight_pane_cp7

0xd2b0,	// (0x0004a132) list_single_a13_gene_pane_t1_ParamLimits

0xd2b0,	// (0x0004a132) list_single_a13_gene_pane_t1

0xd2c7,	// (0x0004a149) list_single_ai3_gene_pane_g1

0xd2d0,	// (0x0004a152) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0004cb5b) list_single_ai3_gene_pane_g

0xd2d8,	// (0x0004a15a) list_double_ai3_gene_pane_g1_ParamLimits

0xd2d8,	// (0x0004a15a) list_double_ai3_gene_pane_g1

0xd2e4,	// (0x0004a166) list_double_ai3_gene_pane_t1_ParamLimits

0xd2e4,	// (0x0004a166) list_double_ai3_gene_pane_t1

0xd300,	// (0x0004a182) list_double_ai3_gene_pane_t2_ParamLimits

0xd300,	// (0x0004a182) list_double_ai3_gene_pane_t2

0xd315,	// (0x0004a197) list_double_ai3_gene_pane_t3_ParamLimits

0xd315,	// (0x0004a197) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0004cb60) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0004cb60) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x57ba,	// (0x0004263c) aid_size_min_col_2

0xd1b9,	// (0x0004a03b) aid_size_min_msg_ParamLimits

0xd1b9,	// (0x0004a03b) aid_size_min_msg

0xc46e,	// (0x000492f0) fep_vkb_top_text_pane_g2_ParamLimits

0xc46e,	// (0x000492f0) fep_vkb_top_text_pane_g2

0x0001,

0xfb4a,	// (0x0004c9cc) fep_vkb_top_text_pane_g_ParamLimits

0xfb4a,	// (0x0004c9cc) fep_vkb_top_text_pane_g

0x2c75,	// (0x0003faf7) main_hc_apps_shell_pane

0xd332,	// (0x0004a1b4) grid_hc_apps_pane_ParamLimits

0xd332,	// (0x0004a1b4) grid_hc_apps_pane

0xd341,	// (0x0004a1c3) list_hc_apps_pane

0xd349,	// (0x0004a1cb) scroll_pane_cp37_ParamLimits

0xd349,	// (0x0004a1cb) scroll_pane_cp37

0xd355,	// (0x0004a1d7) cell_hc_apps_pane_ParamLimits

0xd355,	// (0x0004a1d7) cell_hc_apps_pane

0xd40d,	// (0x0004a28f) cell_hc_apps_pane_g1_ParamLimits

0xd40d,	// (0x0004a28f) cell_hc_apps_pane_g1

0xd43e,	// (0x0004a2c0) cell_hc_apps_pane_g2_ParamLimits

0xd43e,	// (0x0004a2c0) cell_hc_apps_pane_g2

0xd45a,	// (0x0004a2dc) cell_hc_apps_pane_g3_ParamLimits

0xd45a,	// (0x0004a2dc) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0004cb67) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0004cb67) cell_hc_apps_pane_g

0xd47c,	// (0x0004a2fe) cell_hc_apps_pane_t1_ParamLimits

0xd47c,	// (0x0004a2fe) cell_hc_apps_pane_t1

0x7974,	// (0x000447f6) grid_highlight_pane_cp10_ParamLimits

0x7974,	// (0x000447f6) grid_highlight_pane_cp10

0xd4bc,	// (0x0004a33e) list_single_hc_apps_pane_ParamLimits

0xd4bc,	// (0x0004a33e) list_single_hc_apps_pane

0xd4fb,	// (0x0004a37d) list_single_hc_apps_pane_g1

0x6d66,	// (0x00043be8) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0004cb6e) list_single_hc_apps_pane_g

0x6d7f,	// (0x00043c01) list_single_hc_apps_pane_g2_copy1

0x5879,	// (0x000426fb) list_single_hc_apps_pane_t1

0x76ea,	// (0x0004456c) bg_set_opt_pane_cp_ParamLimits

0x5ca8,	// (0x00042b2a) setting_slider_pane_t1_ParamLimits

0x5cbe,	// (0x00042b40) setting_slider_pane_t2_ParamLimits

0x5cd8,	// (0x00042b5a) setting_slider_pane_t3_ParamLimits

0xf576,	// (0x0004c3f8) setting_slider_pane_t_ParamLimits

0x5cf0,	// (0x00042b72) slider_set_pane_ParamLimits

0x62e7,	// (0x00043169) control_pane_g5_ParamLimits

0x62e7,	// (0x00043169) control_pane_g5

0xae80,	// (0x00047d02) slider_set_pane_g1_ParamLimits

0x66f4,	// (0x00043576) slider_set_pane_g2_ParamLimits

0x6700,	// (0x00043582) slider_set_pane_g3_ParamLimits

0x6714,	// (0x00043596) slider_set_pane_g4_ParamLimits

0x672c,	// (0x000435ae) slider_set_pane_g5_ParamLimits

0x6700,	// (0x00043582) slider_set_pane_g6_ParamLimits

0x6742,	// (0x000435c4) slider_set_pane_g7_ParamLimits

0xf97a,	// (0x0004c7fc) slider_set_pane_g_ParamLimits

0x8a82,	// (0x00045904) navi_icon_text_pane_ParamLimits

0x95cd,	// (0x0004644f) aid_fill_nsta_2_ParamLimits

0x960e,	// (0x00046490) aid_touch_tab_arrow_left_ParamLimits

0x961d,	// (0x0004649f) aid_touch_tab_arrow_right_ParamLimits

0x968a,	// (0x0004650c) clock_nsta_pane_ParamLimits

0xa942,	// (0x000477c4) navi_icon_pane_g1_ParamLimits

0xa951,	// (0x000477d3) navi_text_pane_t1_ParamLimits

0xbcef,	// (0x00048b71) navi_icon_text_pane_g1_ParamLimits

0xbcfe,	// (0x00048b80) navi_icon_text_pane_t1_ParamLimits

0xd4fb,	// (0x0004a37d) list_single_hc_apps_pane_g1_ParamLimits

0x6d66,	// (0x00043be8) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0004cb6e) list_single_hc_apps_pane_g_ParamLimits

0x6d7f,	// (0x00043c01) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5879,	// (0x000426fb) list_single_hc_apps_pane_t1_ParamLimits

0x5bb2,	// (0x00042a34) popup_toolbar2_fixed_window_ParamLimits

0x5bb2,	// (0x00042a34) popup_toolbar2_fixed_window

0x94d1,	// (0x00046353) popup_toolbar2_float_window

0x2c75,	// (0x0003faf7) bg_popup_sub_pane_cp27

0xd514,	// (0x0004a396) grid_toolbar2_float_pane

0x2c75,	// (0x0003faf7) bg_popup_sub_pane_cp26

0xd514,	// (0x0004a396) grid_toolbar2_fixed_pane

0xd51c,	// (0x0004a39e) cell_toolbar2_fixed_pane_ParamLimits

0xd51c,	// (0x0004a39e) cell_toolbar2_fixed_pane

0xd52c,	// (0x0004a3ae) cell_toolbar2_fixed_pane_g1

0xd535,	// (0x0004a3b7) toolbar2_fixed_button_pane

0x9ac1,	// (0x00046943) toolbar2_fixed_button_pane_g1

0x9ac9,	// (0x0004694b) toolbar2_fixed_button_pane_g2

0x9ad1,	// (0x00046953) toolbar2_fixed_button_pane_g3

0x9ad9,	// (0x0004695b) toolbar2_fixed_button_pane_g4

0x9ae1,	// (0x00046963) toolbar2_fixed_button_pane_g5

0x9ae9,	// (0x0004696b) toolbar2_fixed_button_pane_g6

0x9af1,	// (0x00046973) toolbar2_fixed_button_pane_g7

0x9af9,	// (0x0004697b) toolbar2_fixed_button_pane_g8

0x9b01,	// (0x00046983) toolbar2_fixed_button_pane_g9

0x0008,

0xf87c,	// (0x0004c6fe) toolbar2_fixed_button_pane_g

0xd53d,	// (0x0004a3bf) cell_toolbar2_float_pane_ParamLimits

0xd53d,	// (0x0004a3bf) cell_toolbar2_float_pane

0xd54e,	// (0x0004a3d0) cell_toolbar2_float_pane_g1

0xd535,	// (0x0004a3b7) toolbar2_fixed_button_pane_cp

0xc1ca,	// (0x0004904c) fep_vkb_accented_list_pane_ParamLimits

0xc1ca,	// (0x0004904c) fep_vkb_accented_list_pane

0x6b42,	// (0x000439c4) bg_popup_fep_shadow_pane_g9

0x8c06,	// (0x00045a88) bg_popup_fep_shadow_pane_cp3

0x80e6,	// (0x00044f68) list_accented_list_pane

0xd557,	// (0x0004a3d9) list_single_accented_list_pane_ParamLimits

0xd557,	// (0x0004a3d9) list_single_accented_list_pane

0x8c06,	// (0x00045a88) list_highlight_pane_cp10

0xd568,	// (0x0004a3ea) list_single_accented_list_pane_t1

0x9417,	// (0x00046299) popup_slider_window_ParamLimits

0x9417,	// (0x00046299) popup_slider_window

0xd1b0,	// (0x0004a032) aid_indentation_list_msg

0xd634,	// (0x0004a4b6) bg_popup_window_pane_cp19

0xd6a2,	// (0x0004a524) popup_slider_window_g1

0xd6be,	// (0x0004a540) popup_slider_window_g2

0xd6da,	// (0x0004a55c) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0004cb73) popup_slider_window_g

0xd736,	// (0x0004a5b8) popup_slider_window_t1

0xd7aa,	// (0x0004a62c) small_volume_slider_vertical_pane

0xc084,	// (0x00048f06) small_volume_slider_vertical_pane_g1

0xc084,	// (0x00048f06) small_volume_slider_vertical_pane_g2

0xd7c6,	// (0x0004a648) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0004cb85) small_volume_slider_vertical_pane_g

0x596a,	// (0x000427ec) area_side_right_pane_ParamLimits

0x596a,	// (0x000427ec) area_side_right_pane

0x6d9b,	// (0x00043c1d) aid_size_side_button_ParamLimits

0x6d9b,	// (0x00043c1d) aid_size_side_button

0x6daf,	// (0x00043c31) grid_sctrl_middle_pane_ParamLimits

0x6daf,	// (0x00043c31) grid_sctrl_middle_pane

0x6dcf,	// (0x00043c51) sctrl_sk_bottom_pane

0x6de0,	// (0x00043c62) sctrl_sk_top_pane

0x6df2,	// (0x00043c74) aid_touch_sctrl_top

0x7974,	// (0x000447f6) bg_sctrl_sk_pane_ParamLimits

0x7974,	// (0x000447f6) bg_sctrl_sk_pane

0x6dff,	// (0x00043c81) sctrl_sk_top_pane_g1

0x6e0c,	// (0x00043c8e) sctrl_sk_top_pane_t1

0x6df2,	// (0x00043c74) aid_touch_sctrl_bottom

0x7974,	// (0x000447f6) bg_sctrl_sk_pane_cp_ParamLimits

0x7974,	// (0x000447f6) bg_sctrl_sk_pane_cp

0x6e27,	// (0x00043ca9) sctrl_sk_bottom_pane_g1

0x6e0c,	// (0x00043c8e) sctrl_sk_bottom_pane_t1

0x6e30,	// (0x00043cb2) cell_sctrl_middle_pane_ParamLimits

0x6e30,	// (0x00043cb2) cell_sctrl_middle_pane

0x6e4d,	// (0x00043ccf) aid_touch_sctrl_middle_ParamLimits

0x6e4d,	// (0x00043ccf) aid_touch_sctrl_middle

0x7f7d,	// (0x00044dff) bg_sctrl_middle_pane_ParamLimits

0x7f7d,	// (0x00044dff) bg_sctrl_middle_pane

0xc30e,	// (0x00049190) cell_sctrl_middle_pane_g1_ParamLimits

0xc30e,	// (0x00049190) cell_sctrl_middle_pane_g1

0x6e5f,	// (0x00043ce1) cell_sctrl_middle_pane_g2_ParamLimits

0x6e5f,	// (0x00043ce1) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0004cb91) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0004cb91) cell_sctrl_middle_pane_g

0x9ac1,	// (0x00046943) bg_sctrl_middle_pane_g1

0x9ac9,	// (0x0004694b) bg_sctrl_middle_pane_g2

0x9ad1,	// (0x00046953) bg_sctrl_middle_pane_g3

0x9ad9,	// (0x0004695b) bg_sctrl_middle_pane_g4

0x9ae1,	// (0x00046963) bg_sctrl_middle_pane_g5

0x9ae9,	// (0x0004696b) bg_sctrl_middle_pane_g6

0x9af1,	// (0x00046973) bg_sctrl_middle_pane_g7

0x9af9,	// (0x0004697b) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0004cb96) bg_sctrl_middle_pane_g

0x9b01,	// (0x00046983) bg_sctrl_middle_pane_g8_copy1

0x9ac1,	// (0x00046943) bg_sctrl_sk_pane_g1

0x9ac9,	// (0x0004694b) bg_sctrl_sk_pane_g2

0x9ad1,	// (0x00046953) bg_sctrl_sk_pane_g3

0x0008,

0xf87c,	// (0x0004c6fe) bg_sctrl_sk_pane_g

0x7ea0,	// (0x00044d22) aid_size_touch_scroll_bar

0x9ad9,	// (0x0004695b) bg_sctrl_sk_pane_g4

0x9ae1,	// (0x00046963) bg_sctrl_sk_pane_g5

0x9ae9,	// (0x0004696b) bg_sctrl_sk_pane_g6

0x9af1,	// (0x00046973) bg_sctrl_sk_pane_g7

0x9af9,	// (0x0004697b) bg_sctrl_sk_pane_g8

0x9b01,	// (0x00046983) bg_sctrl_sk_pane_g9

0x902e,	// (0x00045eb0) popup_fep_china_hwr2_fs_candidate_window

0x9038,	// (0x00045eba) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9038,	// (0x00045eba) popup_fep_china_hwr2_fs_control_window

0xc30e,	// (0x00049190) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0004cb8c) sctrl_sk_top_pane_g

0xd7cf,	// (0x0004a651) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd7cf,	// (0x0004a651) aid_fep_china_hwr2_fs_cell

0xd7e2,	// (0x0004a664) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd7e2,	// (0x0004a664) bg_popup_fep_shadow_pane_cp4

0xd7fb,	// (0x0004a67d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd7fb,	// (0x0004a67d) bg_popup_fep_shadow_pane_cp5

0xd80d,	// (0x0004a68f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd80d,	// (0x0004a68f) popup_fep_china_hwr2_fs_control_bar_grid

0xd81d,	// (0x0004a69f) popup_fep_china_hwr2_fs_control_funtion_grid

0xd825,	// (0x0004a6a7) aid_fep_china_hwr2_fs_candi_cell

0x2c75,	// (0x0003faf7) bg_popup_fep_shadow_pane_cp6

0xd82f,	// (0x0004a6b1) popup_fep_china_hwr2_fs_candidate_grid

0xd839,	// (0x0004a6bb) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd839,	// (0x0004a6bb) cell_fep_china_hwr2_fs_funtion_grid

0xc084,	// (0x00048f06) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd851,	// (0x0004a6d3) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd851,	// (0x0004a6d3) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd85f,	// (0x0004a6e1) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd85f,	// (0x0004a6e1) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0004cba7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0004cba7) cell_fep_china_hwr2_fs_funtion_grid_g

0xd875,	// (0x0004a6f7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd875,	// (0x0004a6f7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd88a,	// (0x0004a70c) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd88a,	// (0x0004a70c) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0004cbac) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0004cbac) cell_fep_china_hwr2_fs_funtion_grid_t

0xd8a6,	// (0x0004a728) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd8ae,	// (0x0004a730) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd8b6,	// (0x0004a738) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0004cbb1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd8be,	// (0x0004a740) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd8be,	// (0x0004a740) cell_fep_china_hwr2_fs_candidate_grid

0xd8dd,	// (0x0004a75f) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd8e5,	// (0x0004a767) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc084,	// (0x00048f06) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc084,	// (0x00048f06) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4f,	// (0x0004c9d1) cell_fep_china_hwr2_fs_candidate_grid_g

0xd8ed,	// (0x0004a76f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x969d,	// (0x0004651f) clock_nsta_pane_cp_24_ParamLimits

0x969d,	// (0x0004651f) clock_nsta_pane_cp_24

0x971d,	// (0x0004659f) indicator_nsta_pane_cp_24_ParamLimits

0x971d,	// (0x0004659f) indicator_nsta_pane_cp_24

0xa7be,	// (0x00047640) heading_pane_g1

0x0001,

0xf8e1,	// (0x0004c763) heading_pane_g

0xb26e,	// (0x000480f0) grid_sct_catagory_button_pane

0xb2a0,	// (0x00048122) scroll_pane_cp5_ParamLimits

0xbd43,	// (0x00048bc5) button_value_adjust_pane_cp5_ParamLimits

0xbd43,	// (0x00048bc5) button_value_adjust_pane_cp5

0xbe20,	// (0x00048ca2) form2_midp_time_pane_ParamLimits

0xd8fb,	// (0x0004a77d) cell_sct_catagory_button_pane_ParamLimits

0xd8fb,	// (0x0004a77d) cell_sct_catagory_button_pane

0xc049,	// (0x00048ecb) bg_button_pane_cp01_ParamLimits

0xc049,	// (0x00048ecb) bg_button_pane_cp01

0xc084,	// (0x00048f06) cell_sct_catagory_button_pane_g1

0x9458,	// (0x000462da) popup_tb_extension_window

0xd90d,	// (0x0004a78f) aid_size_cell_ext_ParamLimits

0xd90d,	// (0x0004a78f) aid_size_cell_ext

0x7974,	// (0x000447f6) bg_tb_trans_pane_cp1_ParamLimits

0x7974,	// (0x000447f6) bg_tb_trans_pane_cp1

0xd92d,	// (0x0004a7af) grid_tb_ext_pane_ParamLimits

0xd92d,	// (0x0004a7af) grid_tb_ext_pane

0xd95d,	// (0x0004a7df) cell_tb_ext_pane_ParamLimits

0xd95d,	// (0x0004a7df) cell_tb_ext_pane

0xd974,	// (0x0004a7f6) cell_tb_ext_pane_g1_ParamLimits

0xd974,	// (0x0004a7f6) cell_tb_ext_pane_g1

0xd991,	// (0x0004a813) cell_tb_ext_pane_t1

0x7974,	// (0x000447f6) list_highlight_pane_cp11_ParamLimits

0x7974,	// (0x000447f6) list_highlight_pane_cp11

0x5bd1,	// (0x00042a53) popup_uni_indicator_window_ParamLimits

0x5bd1,	// (0x00042a53) popup_uni_indicator_window

0x7f7d,	// (0x00044dff) bg_popup_sub_pane_cp14

0xd9ac,	// (0x0004a82e) list_uniindi_pane

0xd9b8,	// (0x0004a83a) uniindi_top_pane

0x7974,	// (0x000447f6) bg_uniindi_top_pane

0xd9d9,	// (0x0004a85b) uniindi_top_pane_g1

0xd9ef,	// (0x0004a871) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0004cbb8) uniindi_top_pane_g

0xda19,	// (0x0004a89b) uniindi_top_pane_t1

0xda45,	// (0x0004a8c7) list_single_uniindi_pane_ParamLimits

0xda45,	// (0x0004a8c7) list_single_uniindi_pane

0xc084,	// (0x00048f06) bg_uniindi_top_pane_g1

0xda57,	// (0x0004a8d9) list_single_uniindi_pane_g1

0xda6a,	// (0x0004a8ec) list_single_uniindi_pane_t1

0x2c75,	// (0x0003faf7) control_bg_pane

0xda8f,	// (0x0004a911) bg_sctrl_sk_pane_cp1

0xda98,	// (0x0004a91a) bg_sctrl_sk_pane_cp2

0xdaa1,	// (0x0004a923) control_bg_pane_g1

0xdaaa,	// (0x0004a92c) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0004cbc1) control_bg_pane_g

0xbb65,	// (0x000489e7) cell_indicator_nsta_pane_g1_ParamLimits

0xbb73,	// (0x000489f5) cell_indicator_nsta_pane_g2_ParamLimits

0xfab3,	// (0x0004c935) cell_indicator_nsta_pane_g_ParamLimits

0x561b,	// (0x0004249d) form2_midp_time_pane_t1_ParamLimits

0x7ce2,	// (0x00044b64) main_idle_act4_pane_ParamLimits

0x7ce2,	// (0x00044b64) main_idle_act4_pane

0x9458,	// (0x000462da) popup_tb_extension_window_ParamLimits

0xd94f,	// (0x0004a7d1) tb_ext_find_pane_ParamLimits

0xd94f,	// (0x0004a7d1) tb_ext_find_pane

0xdab3,	// (0x0004a935) ai_gene_pane_1_cp1

0x8d4f,	// (0x00045bd1) ai_gene_pane_2_cp1

0xdabb,	// (0x0004a93d) list_single_idle_plugin_calendar_pane

0xdac4,	// (0x0004a946) list_single_idle_plugin_notification_pane

0xdacd,	// (0x0004a94f) list_single_idle_plugin_player_pane

0xdad6,	// (0x0004a958) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdad6,	// (0x0004a958) list_single_idle_plugin_shortcut_pane

0xdaf8,	// (0x0004a97a) main_idle_act4_pane_t1

0xdb0a,	// (0x0004a98c) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0004cbc6) main_idle_act4_pane_t

0xdb1c,	// (0x0004a99e) middle_sk_idle_act4_pane_ParamLimits

0xdb1c,	// (0x0004a99e) middle_sk_idle_act4_pane

0xdb32,	// (0x0004a9b4) popup_clock_digital_analogue_window_cp2

0xdb4c,	// (0x0004a9ce) shortcut_wheel_idle_act4_pane_ParamLimits

0xdb4c,	// (0x0004a9ce) shortcut_wheel_idle_act4_pane

0xc084,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g1

0xc084,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g2

0xc084,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g3

0xc084,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g4

0xc084,	// (0x00048f06) shortcut_wheel_idle_act4_pane_g5

0xdb60,	// (0x0004a9e2) shortcut_wheel_idle_act4_pane_g6

0xdb68,	// (0x0004a9ea) shortcut_wheel_idle_act4_pane_g7

0xdb70,	// (0x0004a9f2) shortcut_wheel_idle_act4_pane_g8

0xdb78,	// (0x0004a9fa) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0004cbcb) shortcut_wheel_idle_act4_pane_g

0xc30e,	// (0x00049190) middle_sk_idle_act4_pane_g1_ParamLimits

0xc30e,	// (0x00049190) middle_sk_idle_act4_pane_g1

0xdbdc,	// (0x0004aa5e) middle_sk_idle_act4_pane_g2_ParamLimits

0xdbdc,	// (0x0004aa5e) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0004cbee) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0004cbee) middle_sk_idle_act4_pane_g

0xdbe8,	// (0x0004aa6a) middle_sk_idle_act4_pane_t1_ParamLimits

0xdbe8,	// (0x0004aa6a) middle_sk_idle_act4_pane_t1

0xdc05,	// (0x0004aa87) grid_ai_shortcut_pane_ParamLimits

0xdc05,	// (0x0004aa87) grid_ai_shortcut_pane

0xdc1e,	// (0x0004aaa0) list_highlight_pane_cp16_ParamLimits

0xdc1e,	// (0x0004aaa0) list_highlight_pane_cp16

0xdc2b,	// (0x0004aaad) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc2b,	// (0x0004aaad) list_single_idle_plugin_shortcut_pane_g1

0xdc37,	// (0x0004aab9) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc37,	// (0x0004aab9) list_single_idle_plugin_shortcut_pane_g2

0xdc51,	// (0x0004aad3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdc51,	// (0x0004aad3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0004cbf3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0004cbf3) list_single_idle_plugin_shortcut_pane_g

0xdc64,	// (0x0004aae6) cell_ai_shortcut_pane_ParamLimits

0xdc64,	// (0x0004aae6) cell_ai_shortcut_pane

0xdc87,	// (0x0004ab09) cell_ai_shortcut_pane_g1_ParamLimits

0xdc87,	// (0x0004ab09) cell_ai_shortcut_pane_g1

0xdab3,	// (0x0004a935) ai_gene_pane_1_cp2

0xdca9,	// (0x0004ab2b) ai_gene_pane_2_cp2

0xdcb1,	// (0x0004ab33) list_highlight_pane_cp15

0xdcba,	// (0x0004ab3c) list_single_idle_plugin_calendar_pane_g1

0xdcb1,	// (0x0004ab33) list_highlight_pane_cp17

0xdcc2,	// (0x0004ab44) list_single_idle_plugin_calendar_pane_g1_copy1

0xdcca,	// (0x0004ab4c) list_single_idle_plugin_player_pane_g1

0xb4d5,	// (0x00048357) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0004cbfa) list_single_idle_plugin_player_pane_g

0xdcd2,	// (0x0004ab54) list_single_idle_plugin_player_pane_t1

0xdce0,	// (0x0004ab62) list_single_idle_plugin_player_pane_t2

0xdcee,	// (0x0004ab70) list_single_idle_plugin_player_pane_t3

0xdcfc,	// (0x0004ab7e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0004cbff) list_single_idle_plugin_player_pane_t

0xdd0a,	// (0x0004ab8c) wait_bar_pane_cp15

0xdd12,	// (0x0004ab94) grid_ai_notification_pane

0xb4d5,	// (0x00048357) list_single_idle_plugin_notification_pane_g1

0xdd1b,	// (0x0004ab9d) cell_ai_notification_pane_ParamLimits

0xdd1b,	// (0x0004ab9d) cell_ai_notification_pane

0xdd28,	// (0x0004abaa) cell_ai_notification_pane_g1

0xdd30,	// (0x0004abb2) cell_ai_notification_pane_t1

0xdd3e,	// (0x0004abc0) tb_ext_find_button_pane

0xdd46,	// (0x0004abc8) tb_ext_find_pane_g1

0xdd4e,	// (0x0004abd0) tb_ext_find_pane_t1

0x85ed,	// (0x0004546f) tb_ext_find_button_pane_g1

0xdd5c,	// (0x0004abde) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0004cc08) tb_ext_find_button_pane_g

0xdaf8,	// (0x0004a97a) main_idle_act4_pane_t1_ParamLimits

0xdb0a,	// (0x0004a98c) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0004cbc6) main_idle_act4_pane_t_ParamLimits

0xdb32,	// (0x0004a9b4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdb40,	// (0x0004a9c2) sat_plugin_idle_act4_pane_ParamLimits

0xdb40,	// (0x0004a9c2) sat_plugin_idle_act4_pane

0xdd65,	// (0x0004abe7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdd65,	// (0x0004abe7) sat_plugin_idle_act4_pane_t1

0xdd78,	// (0x0004abfa) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdd78,	// (0x0004abfa) sat_plugin_idle_act4_pane_t2

0xdd8b,	// (0x0004ac0d) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd8b,	// (0x0004ac0d) sat_plugin_idle_act4_pane_t3

0xdd9e,	// (0x0004ac20) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd9e,	// (0x0004ac20) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0004cc0d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0004cc0d) sat_plugin_idle_act4_pane_t

0x5b02,	// (0x00042984) popup_battery_window_ParamLimits

0x5b02,	// (0x00042984) popup_battery_window

0x7974,	// (0x000447f6) bg_popup_sub_pane_cp25_ParamLimits

0x7974,	// (0x000447f6) bg_popup_sub_pane_cp25

0xddb1,	// (0x0004ac33) popup_battery_window_g1_ParamLimits

0xddb1,	// (0x0004ac33) popup_battery_window_g1

0xddbd,	// (0x0004ac3f) popup_battery_window_t1_ParamLimits

0xddbd,	// (0x0004ac3f) popup_battery_window_t1

0xddcf,	// (0x0004ac51) popup_battery_window_t2_ParamLimits

0xddcf,	// (0x0004ac51) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0004cc16) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0004cc16) popup_battery_window_t

0x8c1a,	// (0x00045a9c) midp_canvas_pane_ParamLimits

0x8c91,	// (0x00045b13) midp_keypad_pane_ParamLimits

0x8c91,	// (0x00045b13) midp_keypad_pane

0x8f84,	// (0x00045e06) main_midp_pane_ParamLimits

0xbbf0,	// (0x00048a72) signal_pane_g2_cp_ParamLimits

0xddec,	// (0x0004ac6e) aid_size_cell_midp_keypad_ParamLimits

0xddec,	// (0x0004ac6e) aid_size_cell_midp_keypad

0xde06,	// (0x0004ac88) midp_keyp_game_grid_pane_ParamLimits

0xde06,	// (0x0004ac88) midp_keyp_game_grid_pane

0xde26,	// (0x0004aca8) midp_keyp_rocker_pane_ParamLimits

0xde26,	// (0x0004aca8) midp_keyp_rocker_pane

0xde55,	// (0x0004acd7) midp_keyp_sk_left_pane_ParamLimits

0xde55,	// (0x0004acd7) midp_keyp_sk_left_pane

0xdeaf,	// (0x0004ad31) midp_keyp_sk_right_pane_ParamLimits

0xdeaf,	// (0x0004ad31) midp_keyp_sk_right_pane

0x2c75,	// (0x0003faf7) bg_button_pane_cp03

0xdf09,	// (0x0004ad8b) midp_keyp_sk_left_pane_g1

0x2c75,	// (0x0003faf7) bg_button_pane_cp04

0xdf09,	// (0x0004ad8b) midp_keyp_sk_right_pane_g1

0xc084,	// (0x00048f06) midp_keyp_rocker_pane_g1

0xdf12,	// (0x0004ad94) keyp_game_cell_pane_ParamLimits

0xdf12,	// (0x0004ad94) keyp_game_cell_pane

0x2c75,	// (0x0003faf7) bg_button_pane_cp02

0xdf25,	// (0x0004ada7) keyp_game_cell_pane_g1

0x5b4c,	// (0x000429ce) popup_fep_vkb2_window_ParamLimits

0x5b4c,	// (0x000429ce) popup_fep_vkb2_window

0x6e81,	// (0x00043d03) aid_size_cell_vkb2_ParamLimits

0x6e81,	// (0x00043d03) aid_size_cell_vkb2

0x6ecd,	// (0x00043d4f) popup_fep_vkb2_window_g1_ParamLimits

0x6ecd,	// (0x00043d4f) popup_fep_vkb2_window_g1

0x6f15,	// (0x00043d97) vkb2_area_bottom_pane_ParamLimits

0x6f15,	// (0x00043d97) vkb2_area_bottom_pane

0x6f69,	// (0x00043deb) vkb2_area_keypad_pane_ParamLimits

0x6f69,	// (0x00043deb) vkb2_area_keypad_pane

0x6faf,	// (0x00043e31) vkb2_area_top_pane_ParamLimits

0x6faf,	// (0x00043e31) vkb2_area_top_pane

0x7029,	// (0x00043eab) vkb2_top_entry_pane_ParamLimits

0x7029,	// (0x00043eab) vkb2_top_entry_pane

0x7053,	// (0x00043ed5) vkb2_top_grid_left_pane_ParamLimits

0x7053,	// (0x00043ed5) vkb2_top_grid_left_pane

0x7071,	// (0x00043ef3) vkb2_top_grid_right_pane_ParamLimits

0x7071,	// (0x00043ef3) vkb2_top_grid_right_pane

0x708f,	// (0x00043f11) vkb2_cell_keypad_pane_ParamLimits

0x708f,	// (0x00043f11) vkb2_cell_keypad_pane

0x7145,	// (0x00043fc7) vkb2_area_bottom_grid_pane_ParamLimits

0x7145,	// (0x00043fc7) vkb2_area_bottom_grid_pane

0x716b,	// (0x00043fed) vkb2_area_bottom_pane_g1_ParamLimits

0x716b,	// (0x00043fed) vkb2_area_bottom_pane_g1

0x718f,	// (0x00044011) vkb2_area_bottom_pane_g2_ParamLimits

0x718f,	// (0x00044011) vkb2_area_bottom_pane_g2

0x71bd,	// (0x0004403f) vkb2_area_bottom_pane_g3_ParamLimits

0x71bd,	// (0x0004403f) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0004cc1b) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0004cc1b) vkb2_area_bottom_pane_g

0x721e,	// (0x000440a0) vkb2_top_cell_left_pane_ParamLimits

0x721e,	// (0x000440a0) vkb2_top_cell_left_pane

0xdf36,	// (0x0004adb8) vkb2_top_entry_pane_g1_ParamLimits

0xdf36,	// (0x0004adb8) vkb2_top_entry_pane_g1

0xdf44,	// (0x0004adc6) vkb2_top_entry_pane_t1_ParamLimits

0xdf44,	// (0x0004adc6) vkb2_top_entry_pane_t1

0xdf5c,	// (0x0004adde) vkb2_top_entry_pane_t2_ParamLimits

0xdf5c,	// (0x0004adde) vkb2_top_entry_pane_t2

0xdf74,	// (0x0004adf6) vkb2_top_entry_pane_t3_ParamLimits

0xdf74,	// (0x0004adf6) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0004cc22) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0004cc22) vkb2_top_entry_pane_t

0x726b,	// (0x000440ed) vkb2_top_grid_right_pane_g1_ParamLimits

0x726b,	// (0x000440ed) vkb2_top_grid_right_pane_g1

0x7281,	// (0x00044103) vkb2_top_grid_right_pane_g2_ParamLimits

0x7281,	// (0x00044103) vkb2_top_grid_right_pane_g2

0x7299,	// (0x0004411b) vkb2_top_grid_right_pane_g3_ParamLimits

0x7299,	// (0x0004411b) vkb2_top_grid_right_pane_g3

0x72b1,	// (0x00044133) vkb2_top_grid_right_pane_g4_ParamLimits

0x72b1,	// (0x00044133) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0004cc29) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0004cc29) vkb2_top_grid_right_pane_g

0x72c7,	// (0x00044149) vkb2_top_cell_left_pane_g1

0x72de,	// (0x00044160) vkb2_cell_keypad_pane_g1_ParamLimits

0x72de,	// (0x00044160) vkb2_cell_keypad_pane_g1

0xdf8a,	// (0x0004ae0c) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf8a,	// (0x0004ae0c) vkb2_cell_keypad_pane_t1

0x7302,	// (0x00044184) vkb2_cell_bottom_grid_pane_ParamLimits

0x7302,	// (0x00044184) vkb2_cell_bottom_grid_pane

0x733b,	// (0x000441bd) vkb2_cell_bottom_grid_pane_g1

0xdb80,	// (0x0004aa02) aid_call2_pane_cp02

0xdb88,	// (0x0004aa0a) aid_call_pane_cp02

0xdb90,	// (0x0004aa12) clock_digital_number_pane_cp10

0xdb98,	// (0x0004aa1a) clock_digital_number_pane_cp11

0xdba0,	// (0x0004aa22) clock_digital_number_pane_cp12

0xdba8,	// (0x0004aa2a) clock_digital_number_pane_cp13

0xdbb0,	// (0x0004aa32) clock_digital_separator_pane_cp10

0x85ed,	// (0x0004546f) popup_clock_digital_analogue_window_cp2_g1

0x85ed,	// (0x0004546f) popup_clock_digital_analogue_window_cp2_g2

0xdbb8,	// (0x0004aa3a) popup_clock_digital_analogue_window_cp2_g3

0x85ed,	// (0x0004546f) popup_clock_digital_analogue_window_cp2_g4

0xdbb8,	// (0x0004aa3a) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0004cbde) popup_clock_digital_analogue_window_cp2_g

0xdbc0,	// (0x0004aa42) popup_clock_digital_analogue_window_cp2_t1

0xdbce,	// (0x0004aa50) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0004cbe9) popup_clock_digital_analogue_window_cp2_t

0xc084,	// (0x00048f06) clock_digital_number_pane_cp10_g1

0xc084,	// (0x00048f06) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0004c9d1) clock_digital_number_pane_cp10_g

0xc084,	// (0x00048f06) clock_digital_separator_pane_cp10_g1

0xc084,	// (0x00048f06) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0004c9d1) clock_digital_separator_pane_cp10_g

0xd9fb,	// (0x0004a87d) uniindi_top_pane_g3

0xda0c,	// (0x0004a88e) uniindi_top_pane_g4

0x70ff,	// (0x00043f81) vkb2_row_keypad_pane_ParamLimits

0x70ff,	// (0x00043f81) vkb2_row_keypad_pane

0x7357,	// (0x000441d9) vkb2_cell_t_keypad_pane_ParamLimits

0x7357,	// (0x000441d9) vkb2_cell_t_keypad_pane

0x7367,	// (0x000441e9) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7367,	// (0x000441e9) vkb2_cell_t_keypad_pane_cp08

0x737c,	// (0x000441fe) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x737c,	// (0x000441fe) vkb2_cell_t_keypad_pane_cp09

0x7390,	// (0x00044212) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7390,	// (0x00044212) vkb2_cell_t_keypad_pane_cp01

0x73a1,	// (0x00044223) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x73a1,	// (0x00044223) vkb2_cell_t_keypad_pane_cp02

0x73b2,	// (0x00044234) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x73b2,	// (0x00044234) vkb2_cell_t_keypad_pane_cp03

0x73c3,	// (0x00044245) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x73c3,	// (0x00044245) vkb2_cell_t_keypad_pane_cp04

0x73d4,	// (0x00044256) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x73d4,	// (0x00044256) vkb2_cell_t_keypad_pane_cp05

0x73e5,	// (0x00044267) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x73e5,	// (0x00044267) vkb2_cell_t_keypad_pane_cp06

0x73f8,	// (0x0004427a) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x73f8,	// (0x0004427a) vkb2_cell_t_keypad_pane_cp07

0x740d,	// (0x0004428f) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x740d,	// (0x0004428f) vkb2_cell_t_keypad_pane_cp10

0xc30e,	// (0x00049190) vkb2_cell_t_keypad_pane_g1

0xdfa1,	// (0x0004ae23) vkb2_cell_t_keypad_pane_t1

0x2c75,	// (0x0003faf7) popup_grid_graphic2_window

0xdfb3,	// (0x0004ae35) aid_size_cell_graphic2_ParamLimits

0xdfb3,	// (0x0004ae35) aid_size_cell_graphic2

0xdfeb,	// (0x0004ae6d) bg_popup_window_pane_cp21_ParamLimits

0xdfeb,	// (0x0004ae6d) bg_popup_window_pane_cp21

0xdff9,	// (0x0004ae7b) graphic2_pages_pane_ParamLimits

0xdff9,	// (0x0004ae7b) graphic2_pages_pane

0xe03f,	// (0x0004aec1) grid_graphic2_control_pane_ParamLimits

0xe03f,	// (0x0004aec1) grid_graphic2_control_pane

0xe07d,	// (0x0004aeff) grid_graphic2_pane_ParamLimits

0xe07d,	// (0x0004aeff) grid_graphic2_pane

0xe0f3,	// (0x0004af75) cell_graphic2_pane

0x2c75,	// (0x0003faf7) main_comp_mode_pane

0xd26c,	// (0x0004a0ee) list_ai3_gene_pane_ParamLimits

0xd634,	// (0x0004a4b6) bg_popup_window_pane_cp19_ParamLimits

0xd640,	// (0x0004a4c2) bg_touch_area_indi_pane_ParamLimits

0xd640,	// (0x0004a4c2) bg_touch_area_indi_pane

0xd656,	// (0x0004a4d8) bg_touch_area_indi_pane_cp01_ParamLimits

0xd656,	// (0x0004a4d8) bg_touch_area_indi_pane_cp01

0xd66e,	// (0x0004a4f0) bg_touch_area_indi_pane_cp02_ParamLimits

0xd66e,	// (0x0004a4f0) bg_touch_area_indi_pane_cp02

0xd688,	// (0x0004a50a) bg_touch_area_indi_pane_cp03_ParamLimits

0xd688,	// (0x0004a50a) bg_touch_area_indi_pane_cp03

0xd6a2,	// (0x0004a524) popup_slider_window_g1_ParamLimits

0xd6be,	// (0x0004a540) popup_slider_window_g2_ParamLimits

0xd6da,	// (0x0004a55c) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0004cb73) popup_slider_window_g_ParamLimits

0xd736,	// (0x0004a5b8) popup_slider_window_t1_ParamLimits

0xd7aa,	// (0x0004a62c) small_volume_slider_vertical_pane_ParamLimits

0xe0f3,	// (0x0004af75) cell_graphic2_pane_ParamLimits

0xe145,	// (0x0004afc7) bg_button_pane_cp10_ParamLimits

0xe145,	// (0x0004afc7) bg_button_pane_cp10

0xe15a,	// (0x0004afdc) bg_button_pane_cp11_ParamLimits

0xe15a,	// (0x0004afdc) bg_button_pane_cp11

0xe16f,	// (0x0004aff1) graphic2_pages_pane_g1_ParamLimits

0xe16f,	// (0x0004aff1) graphic2_pages_pane_g1

0xe18a,	// (0x0004b00c) graphic2_pages_pane_g2_ParamLimits

0xe18a,	// (0x0004b00c) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0004cc37) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0004cc37) graphic2_pages_pane_g

0xe1a2,	// (0x0004b024) graphic2_pages_pane_t1_ParamLimits

0xe1a2,	// (0x0004b024) graphic2_pages_pane_t1

0xe1b8,	// (0x0004b03a) cell_graphic2_control_pane_ParamLimits

0xe1b8,	// (0x0004b03a) cell_graphic2_control_pane

0xe1d2,	// (0x0004b054) cell_graphic2_pane_g1_ParamLimits

0xe1d2,	// (0x0004b054) cell_graphic2_pane_g1

0xe1df,	// (0x0004b061) cell_graphic2_pane_g2_ParamLimits

0xe1df,	// (0x0004b061) cell_graphic2_pane_g2

0xe1ec,	// (0x0004b06e) cell_graphic2_pane_g3_ParamLimits

0xe1ec,	// (0x0004b06e) cell_graphic2_pane_g3

0xe1f9,	// (0x0004b07b) cell_graphic2_pane_g4_ParamLimits

0xe1f9,	// (0x0004b07b) cell_graphic2_pane_g4

0xe206,	// (0x0004b088) cell_graphic2_pane_g5_ParamLimits

0xe206,	// (0x0004b088) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0004cc3c) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0004cc3c) cell_graphic2_pane_g

0xe221,	// (0x0004b0a3) cell_graphic2_pane_t1_ParamLimits

0xe221,	// (0x0004b0a3) cell_graphic2_pane_t1

0x9bb3,	// (0x00046a35) grid_highlight_pane_cp11_ParamLimits

0x9bb3,	// (0x00046a35) grid_highlight_pane_cp11

0x7974,	// (0x000447f6) bg_button_pane_cp05

0xe24a,	// (0x0004b0cc) cell_graphic2_control_pane_g1

0xc084,	// (0x00048f06) bg_touch_area_indi_pane_g1

0xe272,	// (0x0004b0f4) aid_cmod_rocker_key_size

0xe27c,	// (0x0004b0fe) aid_cmode_itu_key_size

0xe286,	// (0x0004b108) main_cmode_video_pane

0xe290,	// (0x0004b112) main_comp_mode_itu_pane

0xe29c,	// (0x0004b11e) main_comp_mode_rocker_pane

0xe2a8,	// (0x0004b12a) cell_cmode_rocker_pane_ParamLimits

0xe2a8,	// (0x0004b12a) cell_cmode_rocker_pane

0xe2bc,	// (0x0004b13e) cell_cmode_itu_pane_ParamLimits

0xe2bc,	// (0x0004b13e) cell_cmode_itu_pane

0x7f7d,	// (0x00044dff) bg_button_pane_cp06_ParamLimits

0x7f7d,	// (0x00044dff) bg_button_pane_cp06

0xc30e,	// (0x00049190) cell_cmode_rocker_pane_g1_ParamLimits

0xc30e,	// (0x00049190) cell_cmode_rocker_pane_g1

0xd851,	// (0x0004a6d3) cell_cmode_rocker_pane_g2_ParamLimits

0xd851,	// (0x0004a6d3) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0004cc4c) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0004cc4c) cell_cmode_rocker_pane_g

0x2c75,	// (0x0003faf7) bg_button_pane_cp07

0xe2d3,	// (0x0004b155) cell_cmode_itu_pane_g1

0xe2dc,	// (0x0004b15e) cell_cmode_itu_pane_t1

0xe2ea,	// (0x0004b16c) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0004cc51) cell_cmode_itu_pane_t

0xda7f,	// (0x0004a901) aid_touch_ctrl_left

0xda87,	// (0x0004a909) aid_touch_ctrl_right

0x2c75,	// (0x0003faf7) compa_mode_pane

0xe2f8,	// (0x0004b17a) aid_cmod_rocker_key_size_cp

0xe302,	// (0x0004b184) aid_cmode_itu_key_size_cp

0xe30c,	// (0x0004b18e) compa_mode_pane_g1

0xe314,	// (0x0004b196) compa_mode_pane_g2

0xe31c,	// (0x0004b19e) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0004cc56) compa_mode_pane_g

0xe324,	// (0x0004b1a6) main_comp_mode_itu_pane_cp

0xe32c,	// (0x0004b1ae) main_comp_mode_rocker_pane_cp

0xe334,	// (0x0004b1b6) cell_cmode_itu_pane_cp_ParamLimits

0xe334,	// (0x0004b1b6) cell_cmode_itu_pane_cp

0xe349,	// (0x0004b1cb) cell_cmode_rocker_pane_cp_ParamLimits

0xe349,	// (0x0004b1cb) cell_cmode_rocker_pane_cp

0x7f7d,	// (0x00044dff) bg_button_pane_cp06_cp_ParamLimits

0x7f7d,	// (0x00044dff) bg_button_pane_cp06_cp

0xc30e,	// (0x00049190) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc30e,	// (0x00049190) cell_cmode_rocker_pane_g1_cp

0xc084,	// (0x00048f06) cell_cmode_rocker_pane_g2_cp

0x2c75,	// (0x0003faf7) bg_button_pane_cp07_cp

0xe35b,	// (0x0004b1dd) cell_cmode_itu_pane_g1_cp

0xe364,	// (0x0004b1e6) cell_cmode_itu_pane_t1_cp

0xe364,	// (0x0004b1e6) cell_cmode_itu_pane_t2_cp

0xb04e,	// (0x00047ed0) settings_code_pane_cp2

0x76ea,	// (0x0004456c) bg_popup_window_pane_cp3_ParamLimits

0x7b62,	// (0x000449e4) heading_pane_cp3_ParamLimits

0x7b6e,	// (0x000449f0) listscroll_popup_graphic_pane_ParamLimits

0x6910,	// (0x00043792) fep_hwr_aid_pane_ParamLimits

0x6df2,	// (0x00043c74) aid_touch_sctrl_top_ParamLimits

0x6dff,	// (0x00043c81) sctrl_sk_top_pane_g1_ParamLimits

0xc30e,	// (0x00049190) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0004cb8c) sctrl_sk_top_pane_g_ParamLimits

0x6e0c,	// (0x00043c8e) sctrl_sk_top_pane_t1_ParamLimits

0x6df2,	// (0x00043c74) aid_touch_sctrl_bottom_ParamLimits

0x6e0c,	// (0x00043c8e) sctrl_sk_bottom_pane_t1_ParamLimits

0xd9c5,	// (0x0004a847) aid_area_touch_clock

0x6ff1,	// (0x00043e73) aid_vkb2_area_top_pane_cell_ParamLimits

0x6ff1,	// (0x00043e73) aid_vkb2_area_top_pane_cell

0x7121,	// (0x00043fa3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7121,	// (0x00043fa3) aid_vkb2_area_bottom_pane_cell

0xdf2e,	// (0x0004adb0) popup_char_count_window

0xe372,	// (0x0004b1f4) popup_char_count_window_g1

0xe37b,	// (0x0004b1fd) popup_char_count_window_g2

0xe384,	// (0x0004b206) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0004cc5d) popup_char_count_window_g

0xe38d,	// (0x0004b20f) popup_char_count_window_t1

0x6eab,	// (0x00043d2d) popup_fep_char_preview_window_ParamLimits

0x6eab,	// (0x00043d2d) popup_fep_char_preview_window

0x700f,	// (0x00043e91) vkb2_top_candi_pane_ParamLimits

0x700f,	// (0x00043e91) vkb2_top_candi_pane

0xe39b,	// (0x0004b21d) cell_vkb2_top_candi_pane_ParamLimits

0xe39b,	// (0x0004b21d) cell_vkb2_top_candi_pane

0xa13b,	// (0x00046fbd) bg_popup_fep_char_preview_window_ParamLimits

0xa13b,	// (0x00046fbd) bg_popup_fep_char_preview_window

0x7422,	// (0x000442a4) popup_fep_char_preview_window_t1_ParamLimits

0x7422,	// (0x000442a4) popup_fep_char_preview_window_t1

0xe3ec,	// (0x0004b26e) bg_popup_fep_char_preview_window_g1

0xe3f4,	// (0x0004b276) bg_popup_fep_char_preview_window_g2

0xe3fc,	// (0x0004b27e) bg_popup_fep_char_preview_window_g3

0xe404,	// (0x0004b286) bg_popup_fep_char_preview_window_g4

0xe40c,	// (0x0004b28e) bg_popup_fep_char_preview_window_g5

0x745c,	// (0x000442de) bg_popup_fep_char_preview_window_g6

0xe414,	// (0x0004b296) bg_popup_fep_char_preview_window_g7

0xe41c,	// (0x0004b29e) bg_popup_fep_char_preview_window_g8

0xe424,	// (0x0004b2a6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0004cc64) bg_popup_fep_char_preview_window_g

0xc30e,	// (0x00049190) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc30e,	// (0x00049190) cell_vkb2_top_candi_pane_g1

0xc64f,	// (0x000494d1) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc64f,	// (0x000494d1) cell_vkb2_top_candi_pane_g2

0xc670,	// (0x000494f2) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc670,	// (0x000494f2) cell_vkb2_top_candi_pane_g3

0x7464,	// (0x000442e6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7464,	// (0x000442e6) cell_vkb2_top_candi_pane_g4

0xe42c,	// (0x0004b2ae) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe42c,	// (0x0004b2ae) cell_vkb2_top_candi_pane_g5

0xd851,	// (0x0004a6d3) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd851,	// (0x0004a6d3) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0004cc77) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0004cc77) cell_vkb2_top_candi_pane_g

0x7485,	// (0x00044307) cell_vkb2_top_candi_pane_t1

0x66e0,	// (0x00043562) aid_size_touch_slider_mark_ParamLimits

0x66e0,	// (0x00043562) aid_size_touch_slider_mark

0xe02f,	// (0x0004aeb1) grid_graphic2_catg_pane_ParamLimits

0xe02f,	// (0x0004aeb1) grid_graphic2_catg_pane

0xe0cd,	// (0x0004af4f) popup_grid_graphic2_window_t1_ParamLimits

0xe0cd,	// (0x0004af4f) popup_grid_graphic2_window_t1

0xe0df,	// (0x0004af61) popup_grid_graphic2_window_t2_ParamLimits

0xe0df,	// (0x0004af61) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0004cc32) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0004cc32) popup_grid_graphic2_window_t

0x7974,	// (0x000447f6) bg_button_pane_cp05_ParamLimits

0xe24a,	// (0x0004b0cc) cell_graphic2_control_pane_g1_ParamLimits

0xe44d,	// (0x0004b2cf) cell_graphic2_catg_pane_ParamLimits

0xe44d,	// (0x0004b2cf) cell_graphic2_catg_pane

0x2c75,	// (0x0003faf7) bg_button_pane_cp12

0xe45f,	// (0x0004b2e1) cell_graphic2_catg_pane_g1

0xd991,	// (0x0004a813) cell_tb_ext_pane_t1_ParamLimits

0x723e,	// (0x000440c0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x723e,	// (0x000440c0) vkb2_top_cell_right_narrow_pane

0x7256,	// (0x000440d8) vkb2_top_cell_right_wide_pane_ParamLimits

0x7256,	// (0x000440d8) vkb2_top_cell_right_wide_pane

0x12c1,	// (0x0003e143) bg_vkb2_func_pane_ParamLimits

0x12c1,	// (0x0003e143) bg_vkb2_func_pane

0x72c7,	// (0x00044149) vkb2_top_cell_left_pane_g1_ParamLimits

0x12c1,	// (0x0003e143) bg_vkb2_fuc_pane_cp03_ParamLimits

0x12c1,	// (0x0003e143) bg_vkb2_fuc_pane_cp03

0x733b,	// (0x000441bd) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9ac9,	// (0x0004694b) bg_vkb2_func_pane_g1

0x9ad1,	// (0x00046953) bg_vkb2_func_pane_g2

0x9ae1,	// (0x00046963) bg_vkb2_func_pane_g3

0x9ad9,	// (0x0004695b) bg_vkb2_func_pane_g4

0x9ae9,	// (0x0004696b) bg_vkb2_func_pane_g5

0x9af1,	// (0x00046973) bg_vkb2_func_pane_g6

0x9af9,	// (0x0004697b) bg_vkb2_func_pane_g7

0x9b01,	// (0x00046983) bg_vkb2_func_pane_g8

0x9ac1,	// (0x00046943) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0004cc84) bg_vkb2_func_pane_g

0x12c1,	// (0x0003e143) bg_vkb2_fuc_pane_cp01_ParamLimits

0x12c1,	// (0x0003e143) bg_vkb2_fuc_pane_cp01

0x72c7,	// (0x00044149) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x72c7,	// (0x00044149) vkb2_top_cell_right_wide_pane_g1

0x12c1,	// (0x0003e143) bg_vkb2_fuc_pane_cp02_ParamLimits

0x12c1,	// (0x0003e143) bg_vkb2_fuc_pane_cp02

0x733b,	// (0x000441bd) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x733b,	// (0x000441bd) vkb2_top_cell_right_narrow_pane_g1

0xd5b2,	// (0x0004a434) aid_touch_area_decrease_ParamLimits

0xd5b2,	// (0x0004a434) aid_touch_area_decrease

0xd5d6,	// (0x0004a458) aid_touch_area_increase_ParamLimits

0xd5d6,	// (0x0004a458) aid_touch_area_increase

0xd5e2,	// (0x0004a464) aid_touch_area_mute_ParamLimits

0xd5e2,	// (0x0004a464) aid_touch_area_mute

0xd606,	// (0x0004a488) aid_touch_area_slider_ParamLimits

0xd606,	// (0x0004a488) aid_touch_area_slider

0xd6f6,	// (0x0004a578) popup_slider_window_g4_ParamLimits

0xd6f6,	// (0x0004a578) popup_slider_window_g4

0xd702,	// (0x0004a584) popup_slider_window_g5_ParamLimits

0xd702,	// (0x0004a584) popup_slider_window_g5

0xd724,	// (0x0004a5a6) popup_slider_window_g6_ParamLimits

0xd724,	// (0x0004a5a6) popup_slider_window_g6

0xd764,	// (0x0004a5e6) popup_slider_window_t2_ParamLimits

0xd764,	// (0x0004a5e6) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0004cb80) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0004cb80) popup_slider_window_t

0xd77c,	// (0x0004a5fe) slider_pane_ParamLimits

0xd77c,	// (0x0004a5fe) slider_pane

0xe468,	// (0x0004b2ea) slider_pane_g1_ParamLimits

0xe468,	// (0x0004b2ea) slider_pane_g1

0xe47c,	// (0x0004b2fe) slider_pane_g2_ParamLimits

0xe47c,	// (0x0004b2fe) slider_pane_g2

0xe492,	// (0x0004b314) slider_pane_g3_ParamLimits

0xe492,	// (0x0004b314) slider_pane_g3

0x0003,

0xfe15,	// (0x0004cc97) slider_pane_g_ParamLimits

0xfe15,	// (0x0004cc97) slider_pane_g

0x94ba,	// (0x0004633c) popup_tb_float_extension_window_ParamLimits

0x94ba,	// (0x0004633c) popup_tb_float_extension_window

0xe4be,	// (0x0004b340) aid_size_cell_tb_float_ext

0x2c75,	// (0x0003faf7) bg_popup_sub_window_cp28

0xe4ca,	// (0x0004b34c) grid_tb_float_ext_pane

0xe4d6,	// (0x0004b358) cell_tb_float_ext_pane_ParamLimits

0xe4d6,	// (0x0004b358) cell_tb_float_ext_pane

0xe4f2,	// (0x0004b374) cell_tb_float_ext_pane_g1

0xe4fb,	// (0x0004b37d) grid_highlight_pane_cp12

0x6a49,	// (0x000438cb) cell_last_hwr_side_pane_ParamLimits

0x6a49,	// (0x000438cb) cell_last_hwr_side_pane

0xc084,	// (0x00048f06) cell_last_hwr_side_pane_g1

0xe504,	// (0x0004b386) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0004cca0) cell_last_hwr_side_pane_g

0x71ed,	// (0x0004406f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x71ed,	// (0x0004406f) vkb2_area_bottom_space_btn_pane

0xc30e,	// (0x00049190) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdfa1,	// (0x0004ae23) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7485,	// (0x00044307) cell_vkb2_top_candi_pane_t1_ParamLimits

0x74a3,	// (0x00044325) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x74a3,	// (0x00044325) vkb2_area_bottom_space_btn_pane_g1

0x74dd,	// (0x0004435f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x74dd,	// (0x0004435f) vkb2_area_bottom_space_btn_pane_g2

0x7513,	// (0x00044395) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7513,	// (0x00044395) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0004cca5) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0004cca5) vkb2_area_bottom_space_btn_pane_g

0x69b9,	// (0x0004383b) cel_fep_hwr_func_pane_ParamLimits

0x69b9,	// (0x0004383b) cel_fep_hwr_func_pane

0x69f5,	// (0x00043877) cell_hwr_side_button_pane_ParamLimits

0x69f5,	// (0x00043877) cell_hwr_side_button_pane

0xd9c5,	// (0x0004a847) aid_area_touch_clock_ParamLimits

0x7974,	// (0x000447f6) bg_uniindi_top_pane_ParamLimits

0xd9d9,	// (0x0004a85b) uniindi_top_pane_g1_ParamLimits

0xd9ef,	// (0x0004a871) uniindi_top_pane_g2_ParamLimits

0xd9fb,	// (0x0004a87d) uniindi_top_pane_g3_ParamLimits

0xda0c,	// (0x0004a88e) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0004cbb8) uniindi_top_pane_g_ParamLimits

0xda19,	// (0x0004a89b) uniindi_top_pane_t1_ParamLimits

0x7974,	// (0x000447f6) bg_vkb2_func_pane_cp01_ParamLimits

0x7974,	// (0x000447f6) bg_vkb2_func_pane_cp01

0xe50d,	// (0x0004b38f) cel_fep_hwr_func_pane_g1_ParamLimits

0xe50d,	// (0x0004b38f) cel_fep_hwr_func_pane_g1

0x7974,	// (0x000447f6) bg_vkb2_func_pane_cp02_ParamLimits

0x7974,	// (0x000447f6) bg_vkb2_func_pane_cp02

0xe50d,	// (0x0004b38f) cell_hwr_side_button_pane_g1_ParamLimits

0xe50d,	// (0x0004b38f) cell_hwr_side_button_pane_g1

0x9942,	// (0x000467c4) status_pane_g4_ParamLimits

0x9942,	// (0x000467c4) status_pane_g4

0x995c,	// (0x000467de) status_pane_t1

0xbe7e,	// (0x00048d00) form2_midp_gauge_slider_cont_pane

0xbe86,	// (0x00048d08) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbe98,	// (0x00048d1a) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbeaa,	// (0x00048d2c) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb02,	// (0x0004c984) form2_midp_gauge_slider_pane_t_ParamLimits

0xbebc,	// (0x00048d3e) form2_midp_slider_pane_ParamLimits

0x6e73,	// (0x00043cf5) aid_size_cell_func_vkb2_ParamLimits

0x6e73,	// (0x00043cf5) aid_size_cell_func_vkb2

0xe4aa,	// (0x0004b32c) slider_pane_g4_ParamLimits

0xe4aa,	// (0x0004b32c) slider_pane_g4

0x755d,	// (0x000443df) form2_midp_gauge_slider_pane_t2_cp01

0x756b,	// (0x000443ed) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x756b,	// (0x000443ed) form2_midp_gauge_slider_pane_t3_cp01

0x7588,	// (0x0004440a) form2_midp_slider_pane_cp01

0x2c75,	// (0x0003faf7) navi_smil_pane

0xe546,	// (0x0004b3c8) navi_smil_pane_g1

0xe54e,	// (0x0004b3d0) navi_smil_pane_t1

0xe51b,	// (0x0004b39d) form2_midp_slider_pane_g1

0xe524,	// (0x0004b3a6) form2_midp_slider_pane_g2

0xe52c,	// (0x0004b3ae) form2_midp_slider_pane_g3

0xe51b,	// (0x0004b39d) form2_midp_slider_pane_g4

0xe534,	// (0x0004b3b6) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0004ccae) form2_midp_slider_pane_g

0x754d,	// (0x000443cf) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x754d,	// (0x000443cf) vkb2_area_bottom_space_btn_pane_g4

0x9759,	// (0x000465db) lc0_navi_pane_ParamLimits

0x9759,	// (0x000465db) lc0_navi_pane

0x97d5,	// (0x00046657) lc0_stat_indi_pane_ParamLimits

0x97d5,	// (0x00046657) lc0_stat_indi_pane

0x97ec,	// (0x0004666e) ls0_title_pane_ParamLimits

0x97ec,	// (0x0004666e) ls0_title_pane

0x7f7d,	// (0x00044dff) bg_popup_sub_pane_cp14_ParamLimits

0xd9ac,	// (0x0004a82e) list_uniindi_pane_ParamLimits

0xd9b8,	// (0x0004a83a) uniindi_top_pane_ParamLimits

0xda57,	// (0x0004a8d9) list_single_uniindi_pane_g1_ParamLimits

0xda6a,	// (0x0004a8ec) list_single_uniindi_pane_t1_ParamLimits

0x7591,	// (0x00044413) lc0_stat_clock_pane_ParamLimits

0x7591,	// (0x00044413) lc0_stat_clock_pane

0xe55c,	// (0x0004b3de) lc0_stat_indi_pane_g1_ParamLimits

0xe55c,	// (0x0004b3de) lc0_stat_indi_pane_g1

0xe569,	// (0x0004b3eb) lc0_stat_indi_pane_g2_ParamLimits

0xe569,	// (0x0004b3eb) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0004ccb9) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0004ccb9) lc0_stat_indi_pane_g

0x759e,	// (0x00044420) lc0_uni_indicator_pane_ParamLimits

0x759e,	// (0x00044420) lc0_uni_indicator_pane

0xe576,	// (0x0004b3f8) ls0_title_pane_g1_ParamLimits

0xe576,	// (0x0004b3f8) ls0_title_pane_g1

0xe58a,	// (0x0004b40c) ls0_title_pane_t1_ParamLimits

0xe58a,	// (0x0004b40c) ls0_title_pane_t1

0x75ab,	// (0x0004442d) lc0_uni_indicator_pane_g1_ParamLimits

0x75ab,	// (0x0004442d) lc0_uni_indicator_pane_g1

0xe5c0,	// (0x0004b442) lc0_stat_clock_pane_t1

0x2c75,	// (0x0003faf7) main_ai5_pane

0xe5ce,	// (0x0004b450) ai5_sk_pane_ParamLimits

0xe5ce,	// (0x0004b450) ai5_sk_pane

0xe5db,	// (0x0004b45d) cell_ai5_widget_pane_ParamLimits

0xe5db,	// (0x0004b45d) cell_ai5_widget_pane

0xe651,	// (0x0004b4d3) aid_size_cell_widget_grid

0xe665,	// (0x0004b4e7) bg_ai5_widget_pane_ParamLimits

0xe665,	// (0x0004b4e7) bg_ai5_widget_pane

0xe68d,	// (0x0004b50f) cell_ai5_widget_pane_g2

0xe69d,	// (0x0004b51f) cell_ai5_widget_pane_g3

0xe6bc,	// (0x0004b53e) cell_ai5_widget_pane_g4

0xe6c8,	// (0x0004b54a) cell_ai5_widget_pane_g5

0xe6d4,	// (0x0004b556) cell_ai5_widget_pane_g6

0xe6e2,	// (0x0004b564) cell_ai5_widget_pane_g7

0xe72a,	// (0x0004b5ac) cell_ai5_widget_pane_t1_ParamLimits

0xe72a,	// (0x0004b5ac) cell_ai5_widget_pane_t1

0xe747,	// (0x0004b5c9) cell_ai5_widget_pane_t2_ParamLimits

0xe747,	// (0x0004b5c9) cell_ai5_widget_pane_t2

0xe75f,	// (0x0004b5e1) cell_ai5_widget_pane_t3_ParamLimits

0xe75f,	// (0x0004b5e1) cell_ai5_widget_pane_t3

0xe777,	// (0x0004b5f9) cell_ai5_widget_pane_t4_ParamLimits

0xe777,	// (0x0004b5f9) cell_ai5_widget_pane_t4

0xe791,	// (0x0004b613) cell_ai5_widget_pane_t5_ParamLimits

0xe791,	// (0x0004b613) cell_ai5_widget_pane_t5

0xe7b0,	// (0x0004b632) cell_ai5_widget_pane_t6_ParamLimits

0xe7b0,	// (0x0004b632) cell_ai5_widget_pane_t6

0xe7c2,	// (0x0004b644) cell_ai5_widget_pane_t7_ParamLimits

0xe7c2,	// (0x0004b644) cell_ai5_widget_pane_t7

0xe7db,	// (0x0004b65d) cell_ai5_widget_pane_t8_ParamLimits

0xe7db,	// (0x0004b65d) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0004ccd3) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0004ccd3) cell_ai5_widget_pane_t

0xe827,	// (0x0004b6a9) grid_ai5_widget_pane

0x7f7d,	// (0x00044dff) highlight_cell_ai5_widget_pane_ParamLimits

0x7f7d,	// (0x00044dff) highlight_cell_ai5_widget_pane

0xe83e,	// (0x0004b6c0) ai5_sk_left_pane

0xe848,	// (0x0004b6ca) ai5_sk_middle_pane

0xe852,	// (0x0004b6d4) ai5_sk_right_pane

0xe85c,	// (0x0004b6de) bg_ai5_widget_pane_g1_ParamLimits

0xe85c,	// (0x0004b6de) bg_ai5_widget_pane_g1

0xe868,	// (0x0004b6ea) bg_ai5_widget_pane_g2_ParamLimits

0xe868,	// (0x0004b6ea) bg_ai5_widget_pane_g2

0xe874,	// (0x0004b6f6) bg_ai5_widget_pane_g3_ParamLimits

0xe874,	// (0x0004b6f6) bg_ai5_widget_pane_g3

0xe880,	// (0x0004b702) bg_ai5_widget_pane_g4_ParamLimits

0xe880,	// (0x0004b702) bg_ai5_widget_pane_g4

0xe88c,	// (0x0004b70e) bg_ai5_widget_pane_g5_ParamLimits

0xe88c,	// (0x0004b70e) bg_ai5_widget_pane_g5

0xe898,	// (0x0004b71a) bg_ai5_widget_pane_g6_ParamLimits

0xe898,	// (0x0004b71a) bg_ai5_widget_pane_g6

0xe8a4,	// (0x0004b726) bg_ai5_widget_pane_g7_ParamLimits

0xe8a4,	// (0x0004b726) bg_ai5_widget_pane_g7

0xe8b0,	// (0x0004b732) bg_ai5_widget_pane_g8_ParamLimits

0xe8b0,	// (0x0004b732) bg_ai5_widget_pane_g8

0xe8bc,	// (0x0004b73e) bg_ai5_widget_pane_g9_ParamLimits

0xe8bc,	// (0x0004b73e) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0004cce8) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0004cce8) bg_ai5_widget_pane_g

0xe8e3,	// (0x0004b765) cell_shortcut_ai5_widget_pane_ParamLimits

0xe8e3,	// (0x0004b765) cell_shortcut_ai5_widget_pane

0x77b6,	// (0x00044638) bg_cell_shortcut_ai5_widget_pane

0xe8f5,	// (0x0004b777) cell_grid_ai5_widget_pane_g1

0xe8fe,	// (0x0004b780) highlight_cell_shortcut_ai5_widget_pane

0x9ad1,	// (0x00046953) ai5_sk_left_pane_g1

0xe906,	// (0x0004b788) ai5_sk_left_pane_g2

0xe90e,	// (0x0004b790) ai5_sk_left_pane_g3

0xe916,	// (0x0004b798) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0004ccfb) ai5_sk_left_pane_g

0xe91e,	// (0x0004b7a0) ai5_sk_left_pane_t1

0x9ac9,	// (0x0004694b) ai5_sk_right_pane_g1

0xe92c,	// (0x0004b7ae) ai5_sk_right_pane_g2

0xe934,	// (0x0004b7b6) ai5_sk_right_pane_g3

0xe93c,	// (0x0004b7be) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0004cd04) ai5_sk_right_pane_g

0xe944,	// (0x0004b7c6) ai5_sk_right_pane_t1

0x9ac9,	// (0x0004694b) ai5_sk_middle_pane_g1

0x9ad1,	// (0x00046953) ai5_sk_middle_pane_g2

0x9ae9,	// (0x0004696b) ai5_sk_middle_pane_g3

0xe934,	// (0x0004b7b6) ai5_sk_middle_pane_g4

0xe90e,	// (0x0004b790) ai5_sk_middle_pane_g5

0xe952,	// (0x0004b7d4) ai5_sk_middle_pane_g6

0xe95a,	// (0x0004b7dc) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0004cd0d) ai5_sk_middle_pane_g

0x95db,	// (0x0004645d) aid_touch_area_size_lc0_ParamLimits

0x95db,	// (0x0004645d) aid_touch_area_size_lc0

0x6b58,	// (0x000439da) cell_hwr_candidate_pane_t1_ParamLimits

0x95f9,	// (0x0004647b) aid_touch_navi_pane

0x98ec,	// (0x0004676e) status_dt_navi_pane_ParamLimits

0x98ec,	// (0x0004676e) status_dt_navi_pane

0x98f9,	// (0x0004677b) status_dt_sta_pane_ParamLimits

0x98f9,	// (0x0004677b) status_dt_sta_pane

0xe962,	// (0x0004b7e4) dt_sta_controll_pane

0xe96f,	// (0x0004b7f1) dt_sta_indi_pane

0xe980,	// (0x0004b802) dt_sta_title_pane

0x7974,	// (0x000447f6) bg_dt_sta_indi_pane_ParamLimits

0x7974,	// (0x000447f6) bg_dt_sta_indi_pane

0xe993,	// (0x0004b815) dt_sta_battery_pane

0xe99b,	// (0x0004b81d) dt_sta_indi_pane_g1

0xe9a4,	// (0x0004b826) dt_sta_indi_pane_g2

0xe9ad,	// (0x0004b82f) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0004cd1c) dt_sta_indi_pane_g

0xe9b6,	// (0x0004b838) dt_sta_signal_pane

0x7f7d,	// (0x00044dff) bg_dt_sta_title_pane_ParamLimits

0x7f7d,	// (0x00044dff) bg_dt_sta_title_pane

0xe9bf,	// (0x0004b841) dt_sta_title_pane_g1

0xe9c7,	// (0x0004b849) dt_sta_title_pane_t1_ParamLimits

0xe9c7,	// (0x0004b849) dt_sta_title_pane_t1

0x2c75,	// (0x0003faf7) bg_dt_sta_control_pane

0xe9dc,	// (0x0004b85e) dt_sta_controll_pane_g1

0xe9e5,	// (0x0004b867) bg_dt_sta_title_pane_g1

0xe9ee,	// (0x0004b870) bg_dt_sta_title_pane_g2

0xe9f7,	// (0x0004b879) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0004cd23) bg_dt_sta_title_pane_g

0xc084,	// (0x00048f06) bg_dt_sta_indi_pane_g1

0xea00,	// (0x0004b882) dt_sta_signal_pane_g1

0xea08,	// (0x0004b88a) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0004cd2a) dt_sta_signal_pane_g

0xea10,	// (0x0004b892) dt_sta_battery_pane_g1

0xea19,	// (0x0004b89b) dt_sta_battery_pane_t1

0xc084,	// (0x00048f06) bg_dt_sta_control_pane_g1

0x8704,	// (0x00045586) fep_china_uni_eep_pane

0x870c,	// (0x0004558e) fep_china_uni_entry_pane_ParamLimits

0x871c,	// (0x0004559e) popup_fep_china_uni_window_g1_ParamLimits

0x872c,	// (0x000455ae) popup_fep_china_uni_window_g2_ParamLimits

0x872c,	// (0x000455ae) popup_fep_china_uni_window_g2

0x0001,

0xf73a,	// (0x0004c5bc) popup_fep_china_uni_window_g_ParamLimits

0xf73a,	// (0x0004c5bc) popup_fep_china_uni_window_g

0xea28,	// (0x0004b8aa) fep_china_uni_eep_pane_g1

0xea30,	// (0x0004b8b2) fep_china_uni_eep_pane_t1

0xe53d,	// (0x0004b3bf) aid_touch_area_size_smil_player

0x9751,	// (0x000465d3) lc0_clock_pane

0x9950,	// (0x000467d2) status_pane_g5_ParamLimits

0x9950,	// (0x000467d2) status_pane_g5

0x913f,	// (0x00045fc1) popup_keymap_window

0x990e,	// (0x00046790) status_icon_pane

0xe69d,	// (0x0004b51f) cell_ai5_widget_pane_g3_ParamLimits

0xe6bc,	// (0x0004b53e) cell_ai5_widget_pane_g4_ParamLimits

0xe6c8,	// (0x0004b54a) cell_ai5_widget_pane_g5_ParamLimits

0xe6ee,	// (0x0004b570) cell_ai5_widget_pane_g8_ParamLimits

0xe6ee,	// (0x0004b570) cell_ai5_widget_pane_g8

0xe702,	// (0x0004b584) cell_ai5_widget_pane_g9_ParamLimits

0xe702,	// (0x0004b584) cell_ai5_widget_pane_g9

0xe716,	// (0x0004b598) cell_ai5_widget_pane_g10_ParamLimits

0xe716,	// (0x0004b598) cell_ai5_widget_pane_g10

0xea3f,	// (0x0004b8c1) status_icon_pane_g1

0x2c75,	// (0x0003faf7) bg_popup_sub_pane_cp13

0xea47,	// (0x0004b8c9) popup_keymap_window_t1

0x8ee1,	// (0x00045d63) control_pane_g6_ParamLimits

0x8ee1,	// (0x00045d63) control_pane_g6

0x8eee,	// (0x00045d70) control_pane_g7_ParamLimits

0x8eee,	// (0x00045d70) control_pane_g7

0x8efb,	// (0x00045d7d) control_pane_g8_ParamLimits

0x8efb,	// (0x00045d7d) control_pane_g8

0xe962,	// (0x0004b7e4) dt_sta_controll_pane_ParamLimits

0xe96f,	// (0x0004b7f1) dt_sta_indi_pane_ParamLimits

0xe980,	// (0x0004b802) dt_sta_title_pane_ParamLimits

0x7ea9,	// (0x00044d2b) aid_size_touch_scroll_bar_cale

0x5b1a,	// (0x0004299c) popup_discreet_window_ParamLimits

0x5b1a,	// (0x0004299c) popup_discreet_window

0x5ba8,	// (0x00042a2a) popup_sk_window

0xa13b,	// (0x00046fbd) bg_popup_sub_pane_cp28_ParamLimits

0xa13b,	// (0x00046fbd) bg_popup_sub_pane_cp28

0xea55,	// (0x0004b8d7) popup_discreet_window_g1_ParamLimits

0xea55,	// (0x0004b8d7) popup_discreet_window_g1

0xea75,	// (0x0004b8f7) popup_discreet_window_t1_ParamLimits

0xea75,	// (0x0004b8f7) popup_discreet_window_t1

0xea93,	// (0x0004b915) popup_discreet_window_t2_ParamLimits

0xea93,	// (0x0004b915) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0004cd2f) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0004cd2f) popup_discreet_window_t

0x75be,	// (0x00044440) popup_sk_window_g1

0x75c8,	// (0x0004444a) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0004cd36) popup_sk_window_g

0xeae5,	// (0x0004b967) popup_sk_window_t1

0xeaf3,	// (0x0004b975) popup_sk_window_t1_copy1

0xe68d,	// (0x0004b50f) cell_ai5_widget_pane_g2_ParamLimits

0xe7ed,	// (0x0004b66f) cell_ai5_widget_pane_t9_ParamLimits

0xe7ed,	// (0x0004b66f) cell_ai5_widget_pane_t9

0x2c75,	// (0x0003faf7) main_fep_fshwr2_pane

0xeb01,	// (0x0004b983) aid_fshwr2_btn_pane

0xeb09,	// (0x0004b98b) aid_fshwr2_syb_pane

0xeb11,	// (0x0004b993) aid_fshwr2_txt_pane

0xeb19,	// (0x0004b99b) fshwr2_func_candi_pane

0xeb23,	// (0x0004b9a5) fshwr2_hwr_syb_pane

0xeb2d,	// (0x0004b9af) fshwr2_icf_pane

0x2c75,	// (0x0003faf7) fshwr2_icf_bg_pane

0xeb4f,	// (0x0004b9d1) fshwr2_icf_pane_t1_ParamLimits

0xeb4f,	// (0x0004b9d1) fshwr2_icf_pane_t1

0xc084,	// (0x00048f06) fshwr2_func_candi_pane_g1

0xeb66,	// (0x0004b9e8) fshwr2_func_candi_row_pane_ParamLimits

0xeb66,	// (0x0004b9e8) fshwr2_func_candi_row_pane

0xeb77,	// (0x0004b9f9) cell_fshwr2_syb_pane_ParamLimits

0xeb77,	// (0x0004b9f9) cell_fshwr2_syb_pane

0xc30e,	// (0x00049190) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc30e,	// (0x00049190) fshwr2_hwr_syb_pane_g1

0x2c75,	// (0x0003faf7) bg_popup_call_pane_cp01

0xeb91,	// (0x0004ba13) fshwr2_func_candi_cell_pane_ParamLimits

0xeb91,	// (0x0004ba13) fshwr2_func_candi_cell_pane

0xebc3,	// (0x0004ba45) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xebc3,	// (0x0004ba45) fshwr2_func_candi_cell_bg_pane

0xebdd,	// (0x0004ba5f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebdd,	// (0x0004ba5f) fshwr2_func_candi_cell_pane_g1

0xebfd,	// (0x0004ba7f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xebfd,	// (0x0004ba7f) fshwr2_func_candi_cell_pane_t1

0x2c75,	// (0x0003faf7) bg_button_pane_cp08

0x8c06,	// (0x00045a88) cell_fshwr2_syb_bg_pane

0xec10,	// (0x0004ba92) cell_fshwr2_syb_bg_pane_g1

0xec18,	// (0x0004ba9a) cell_fshwr2_syb_bg_pane_t1

0x7f7d,	// (0x00044dff) main_tmo_pane

0xac65,	// (0x00047ae7) uni_indicator_pane_g1_ParamLimits

0xac7a,	// (0x00047afc) uni_indicator_pane_g2_ParamLimits

0xac90,	// (0x00047b12) uni_indicator_pane_g3_ParamLimits

0xaca6,	// (0x00047b28) uni_indicator_pane_g4_ParamLimits

0xaca6,	// (0x00047b28) uni_indicator_pane_g4

0xacba,	// (0x00047b3c) uni_indicator_pane_g5_ParamLimits

0xacba,	// (0x00047b3c) uni_indicator_pane_g5

0xacce,	// (0x00047b50) uni_indicator_pane_g6_ParamLimits

0xacce,	// (0x00047b50) uni_indicator_pane_g6

0xf937,	// (0x0004c7b9) uni_indicator_pane_g_ParamLimits

0xd582,	// (0x0004a404) popup_tmo_note_window_ParamLimits

0xd582,	// (0x0004a404) popup_tmo_note_window

0x2c75,	// (0x0003faf7) fshwr2_bg_pane

0xebee,	// (0x0004ba70) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xebee,	// (0x0004ba70) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0004cd3b) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0004cd3b) fshwr2_func_candi_cell_pane_g

0xc084,	// (0x00048f06) bg_popup_window_pane_cp01

0xec27,	// (0x0004baa9) bg_popup_window_pane_g1_cp01

0xec30,	// (0x0004bab2) bg_popup_window_pane_cp22_ParamLimits

0xec30,	// (0x0004bab2) bg_popup_window_pane_cp22

0xec3e,	// (0x0004bac0) listscroll_tmo_link_pane_ParamLimits

0xec3e,	// (0x0004bac0) listscroll_tmo_link_pane

0xec7e,	// (0x0004bb00) popup_tmo_note_window_g1_ParamLimits

0xec7e,	// (0x0004bb00) popup_tmo_note_window_g1

0xec8b,	// (0x0004bb0d) tmo_note_info_pane_ParamLimits

0xec8b,	// (0x0004bb0d) tmo_note_info_pane

0xeca5,	// (0x0004bb27) list_tmo_note_info_pane_g1_ParamLimits

0xeca5,	// (0x0004bb27) list_tmo_note_info_pane_g1

0xecbc,	// (0x0004bb3e) list_tmo_note_info_pane_g2_ParamLimits

0xecbc,	// (0x0004bb3e) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0004cd40) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0004cd40) list_tmo_note_info_pane_g

0xecd8,	// (0x0004bb5a) list_tmo_note_info_text_pane_ParamLimits

0xecd8,	// (0x0004bb5a) list_tmo_note_info_text_pane

0xed5d,	// (0x0004bbdf) list_tmo_link_pane

0xed6a,	// (0x0004bbec) scroll_pane_cp20

0xed77,	// (0x0004bbf9) list_single_tmo_link_pane_ParamLimits

0xed77,	// (0x0004bbf9) list_single_tmo_link_pane

0xed87,	// (0x0004bc09) list_single_tmo_link_pane_t1

0xed95,	// (0x0004bc17) list_tmo_note_info_text_pane_t1_ParamLimits

0xed95,	// (0x0004bc17) list_tmo_note_info_text_pane_t1

0x8043,	// (0x00044ec5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8043,	// (0x00044ec5) aid_size_touch_scroll_bar_cp01

0x5175,	// (0x00041ff7) aid_size_touch_slider_marker

0x5b90,	// (0x00042a12) popup_settings_window_ParamLimits

0x5b90,	// (0x00042a12) popup_settings_window

0x52ee,	// (0x00042170) popup_candi_list_indi_window

0x95f9,	// (0x0004647b) aid_touch_navi_pane_ParamLimits

0x6dc6,	// (0x00043c48) rs_clock_indi_pane

0x6dcf,	// (0x00043c51) sctrl_sk_bottom_pane_ParamLimits

0x6de0,	// (0x00043c62) sctrl_sk_top_pane_ParamLimits

0x6ec5,	// (0x00043d47) popup_fep_tooltip_window

0xe651,	// (0x0004b4d3) aid_size_cell_widget_grid_ParamLimits

0xe681,	// (0x0004b503) cell_ai5_widget_pane_g1_ParamLimits

0xe681,	// (0x0004b503) cell_ai5_widget_pane_g1

0xe6d4,	// (0x0004b556) cell_ai5_widget_pane_g6_ParamLimits

0xe6e2,	// (0x0004b564) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0004ccbe) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0004ccbe) cell_ai5_widget_pane_g

0xe811,	// (0x0004b693) cell_ai5_widget_pane_t10_ParamLimits

0xe811,	// (0x0004b693) cell_ai5_widget_pane_t10

0xe827,	// (0x0004b6a9) grid_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x0004b74a) cell_contacts_ai5_widget_pane_ParamLimits

0xe8c8,	// (0x0004b74a) cell_contacts_ai5_widget_pane

0xeaa8,	// (0x0004b92a) popup_discreet_window_t3_ParamLimits

0xeaa8,	// (0x0004b92a) popup_discreet_window_t3

0xeb37,	// (0x0004b9b9) popup_fshwr2_char_preview_window_ParamLimits

0xeb37,	// (0x0004b9b9) popup_fshwr2_char_preview_window

0xecf6,	// (0x0004bb78) tmo_note_info_pane_t1

0xed0b,	// (0x0004bb8d) tmo_note_info_pane_t2

0xed24,	// (0x0004bba6) tmo_note_info_pane_t3

0xed39,	// (0x0004bbbb) tmo_note_info_pane_t4

0xed4b,	// (0x0004bbcd) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0004cd45) tmo_note_info_pane_t

0xed5d,	// (0x0004bbdf) list_tmo_link_pane_ParamLimits

0xed6a,	// (0x0004bbec) scroll_pane_cp20_ParamLimits

0x2c75,	// (0x0003faf7) bg_popup_fep_char_preview_window_cp01

0xedae,	// (0x0004bc30) popup_fshwr2_char_preview_window_t1

0xedbc,	// (0x0004bc3e) popup_candi_list_indi_window_g1

0xedc5,	// (0x0004bc47) bg_cell_contacts_ai5_widget_pane

0xedd1,	// (0x0004bc53) cell_contacts_ai5_widget_pane_g1

0xede5,	// (0x0004bc67) cell_contacts_ai5_widget_pane_g2

0xedf4,	// (0x0004bc76) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0004cd50) cell_contacts_ai5_widget_pane_g

0xee07,	// (0x0004bc89) cell_contacts_ai5_widget_pane_t1

0x7f7d,	// (0x00044dff) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee81,	// (0x0004bd03) settings_container_pane

0x8c06,	// (0x00045a88) listscroll_set_pane_copy1

0xb83f,	// (0x000486c1) scroll_pane_cp121_copy1

0xee8d,	// (0x0004bd0f) set_content_pane_copy1

0xee95,	// (0x0004bd17) aid_height_set_list_copy1_ParamLimits

0xee95,	// (0x0004bd17) aid_height_set_list_copy1

0xaece,	// (0x00047d50) aid_size_parent_copy1_ParamLimits

0xaece,	// (0x00047d50) aid_size_parent_copy1

0xeea1,	// (0x0004bd23) button_value_adjust_pane_cp6_copy1_ParamLimits

0xeea1,	// (0x0004bd23) button_value_adjust_pane_cp6_copy1

0x8f84,	// (0x00045e06) list_highlight_pane_cp2_copy1_ParamLimits

0x8f84,	// (0x00045e06) list_highlight_pane_cp2_copy1

0xeeb5,	// (0x0004bd37) list_set_pane_copy1_ParamLimits

0xeeb5,	// (0x0004bd37) list_set_pane_copy1

0xee1c,	// (0x0004bc9e) main_pane_set_t1_copy1_ParamLimits

0xee1c,	// (0x0004bc9e) main_pane_set_t1_copy1

0xee56,	// (0x0004bcd8) main_pane_set_t2_copy1_ParamLimits

0xee56,	// (0x0004bcd8) main_pane_set_t2_copy1

0xef7c,	// (0x0004bdfe) main_pane_set_t3_copy1

0xef8a,	// (0x0004be0c) main_pane_set_t4_copy1

0xee75,	// (0x0004bcf7) set_content_pane_g1_copy1_ParamLimits

0xee75,	// (0x0004bcf7) set_content_pane_g1_copy1

0xef98,	// (0x0004be1a) setting_code_pane_copy1

0xefa2,	// (0x0004be24) setting_slider_graphic_pane_copy1

0xefa2,	// (0x0004be24) setting_slider_pane_copy1

0xefa2,	// (0x0004be24) setting_text_pane_copy1

0xefac,	// (0x0004be2e) setting_volume_pane_copy1

0xefb5,	// (0x0004be37) settings_code_pane_cp2_copy1

0xefbd,	// (0x0004be3f) settings_code_pane_cp_copy1_ParamLimits

0xefbd,	// (0x0004be3f) settings_code_pane_cp_copy1

0xefd1,	// (0x0004be53) volume_set_pane_copy1

0xefdd,	// (0x0004be5f) volume_set_pane_g10_copy1

0xefe9,	// (0x0004be6b) volume_set_pane_g1_copy1

0xeff3,	// (0x0004be75) volume_set_pane_g2_copy1

0xeffd,	// (0x0004be7f) volume_set_pane_g3_copy1

0xf007,	// (0x0004be89) volume_set_pane_g4_copy1

0xf011,	// (0x0004be93) volume_set_pane_g5_copy1

0xf01b,	// (0x0004be9d) volume_set_pane_g6_copy1

0xf025,	// (0x0004bea7) volume_set_pane_g7_copy1

0xf02f,	// (0x0004beb1) volume_set_pane_g8_copy1

0xf039,	// (0x0004bebb) volume_set_pane_g9_copy1

0x76ea,	// (0x0004456c) bg_set_opt_pane_cp_copy1_ParamLimits

0x76ea,	// (0x0004456c) bg_set_opt_pane_cp_copy1

0xf043,	// (0x0004bec5) setting_slider_pane_t1_copy1_ParamLimits

0xf043,	// (0x0004bec5) setting_slider_pane_t1_copy1

0xf061,	// (0x0004bee3) setting_slider_pane_t2_copy1_ParamLimits

0xf061,	// (0x0004bee3) setting_slider_pane_t2_copy1

0xf07b,	// (0x0004befd) setting_slider_pane_t3_copy1_ParamLimits

0xf07b,	// (0x0004befd) setting_slider_pane_t3_copy1

0xf093,	// (0x0004bf15) slider_set_pane_copy1_ParamLimits

0xf093,	// (0x0004bf15) slider_set_pane_copy1

0x7fe4,	// (0x00044e66) set_opt_bg_pane_g1_copy2

0x7fec,	// (0x00044e6e) set_opt_bg_pane_g2_copy2

0xf0a9,	// (0x0004bf2b) set_opt_bg_pane_g3_copy2

0x7ffc,	// (0x00044e7e) set_opt_bg_pane_g4_copy2

0x8004,	// (0x00044e86) set_opt_bg_pane_g5_copy2

0x800c,	// (0x00044e8e) set_opt_bg_pane_g6_copy2

0xf0b3,	// (0x0004bf35) set_opt_bg_pane_g7_copy2

0xf0bd,	// (0x0004bf3f) set_opt_bg_pane_g8_copy2

0xf0c7,	// (0x0004bf49) set_opt_bg_pane_g9_copy2

0x75d2,	// (0x00044454) aid_size_touch_slider_mark_copy1_ParamLimits

0x75d2,	// (0x00044454) aid_size_touch_slider_mark_copy1

0xf0d1,	// (0x0004bf53) slider_set_pane_g1_copy1

0x75e6,	// (0x00044468) slider_set_pane_g2_copy1

0x6700,	// (0x00043582) slider_set_pane_g3_copy1_ParamLimits

0x6700,	// (0x00043582) slider_set_pane_g3_copy1

0x6714,	// (0x00043596) slider_set_pane_g4_copy1_ParamLimits

0x6714,	// (0x00043596) slider_set_pane_g4_copy1

0x672c,	// (0x000435ae) slider_set_pane_g5_copy1_ParamLimits

0x672c,	// (0x000435ae) slider_set_pane_g5_copy1

0x6700,	// (0x00043582) slider_set_pane_g6_copy1_ParamLimits

0x6700,	// (0x00043582) slider_set_pane_g6_copy1

0x75ee,	// (0x00044470) slider_set_pane_g7_copy1_ParamLimits

0x75ee,	// (0x00044470) slider_set_pane_g7_copy1

0x2c89,	// (0x0003fb0b) bg_set_opt_pane_cp2_copy1

0xf0da,	// (0x0004bf5c) setting_slider_graphic_pane_g1_copy1

0xf0e3,	// (0x0004bf65) setting_slider_graphic_pane_t1_copy1

0xf0f3,	// (0x0004bf75) setting_slider_graphic_pane_t2_copy1

0xf103,	// (0x0004bf85) slider_set_pane_cp_copy1

0xf113,	// (0x0004bf95) input_focus_pane_cp1_copy1

0xf11c,	// (0x0004bf9e) list_set_text_pane_copy1

0xf124,	// (0x0004bfa6) setting_text_pane_g1_copy1

0x4b51,	// (0x000419d3) set_text_pane_t1_copy1

0xf113,	// (0x0004bf95) input_focus_pane_cp2_copy1

0xf124,	// (0x0004bfa6) setting_code_pane_g1_copy1

0xf12d,	// (0x0004bfaf) setting_code_pane_t1_copy1

0xf13b,	// (0x0004bfbd) list_set_graphic_pane_copy1

0x2c89,	// (0x0003fb0b) bg_set_opt_pane_cp4_copy1

0x8900,	// (0x00045782) list_set_graphic_pane_g1_copy1_ParamLimits

0x8900,	// (0x00045782) list_set_graphic_pane_g1_copy1

0xf14d,	// (0x0004bfcf) list_set_graphic_pane_g2_copy1

0x8918,	// (0x0004579a) list_set_graphic_pane_t1_copy1_ParamLimits

0x8918,	// (0x0004579a) list_set_graphic_pane_t1_copy1

0xc084,	// (0x00048f06) rs_clock_indi_pane_g1

0xf155,	// (0x0004bfd7) rs_clock_indi_pane_t1

0xf163,	// (0x0004bfe5) rs_indi_pane

0xf16b,	// (0x0004bfed) rs_indi_pane_g1

0xf174,	// (0x0004bff6) rs_indi_pane_g2

0xf17d,	// (0x0004bfff) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0004cd57) rs_indi_pane_g

0x8c06,	// (0x00045a88) bg_popup_preview_window_pane_cp03

0xf186,	// (0x0004c008) popup_fep_tooltip_window_t1

0xcd2a,	// (0x00049bac) popup_note2_window_g2_ParamLimits

0xcd2a,	// (0x00049bac) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0004caf0) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0004caf0) popup_note2_window_g

0xd232,	// (0x0004a0b4) bg_popup_sub_pane_cp11_ParamLimits

0xd23f,	// (0x0004a0c1) cell_ai3_links_pane_g1_ParamLimits

0xd256,	// (0x0004a0d8) cell_ai3_links_pane_t1

0x4b51,	// (0x000419d3) set_text_pane_t1_copy1_ParamLimits

0x8b13,	// (0x00045995) cell_graphic_popup_pane_cp2_ParamLimits

0x8b13,	// (0x00045995) cell_graphic_popup_pane_cp2

0xf194,	// (0x0004c016) cell_graphic_popup_pane_g1_cp2

0x7cbc,	// (0x00044b3e) cell_graphic_popup_pane_g2_cp2

0xf19c,	// (0x0004c01e) cell_graphic_popup_pane_g3_cp2

0xf1a4,	// (0x0004c026) cell_graphic_popup_pane_t2_cp2

0x7ccd,	// (0x00044b4f) grid_highlight_pane_cp3_cp2

0x8330,	// (0x000451b2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7f7d,	// (0x00044dff) main_tmo_pane_ParamLimits

0xd576,	// (0x0004a3f8) popup_tmo_big_image_note_window

0xe671,	// (0x0004b4f3) cell_ai5_widget_list_pane

0xe679,	// (0x0004b4fb) cell_ai5_widget_lrg_icon_pane

0xecf6,	// (0x0004bb78) tmo_note_info_pane_t1_ParamLimits

0xed0b,	// (0x0004bb8d) tmo_note_info_pane_t2_ParamLimits

0xed24,	// (0x0004bba6) tmo_note_info_pane_t3_ParamLimits

0xed39,	// (0x0004bbbb) tmo_note_info_pane_t4_ParamLimits

0xed4b,	// (0x0004bbcd) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0004cd45) tmo_note_info_pane_t_ParamLimits

0xee81,	// (0x0004bd03) settings_container_pane_ParamLimits

0xf10b,	// (0x0004bf8d) indicator_popup_pane_cp5

0xf10b,	// (0x0004bf8d) indicator_popup_pane_cp6

0xf13b,	// (0x0004bfbd) list_set_graphic_pane_copy1_ParamLimits

0x2c75,	// (0x0003faf7) bg_popup_window_pane_cp23

0xf1b2,	// (0x0004c034) popup_tmo_big_image_note_window_g1

0xf1be,	// (0x0004c040) popup_tmo_big_image_note_window_t1

0xf1ce,	// (0x0004c050) popup_tmo_big_image_note_window_t2

0xf1de,	// (0x0004c060) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0004cd5e) popup_tmo_big_image_note_window_t

0xf1ee,	// (0x0004c070) cell_ai5_widget_lrg_icon_pane_g1

0xf1f6,	// (0x0004c078) cell_ai5_widget_lrg_icon_pane_t1

0xf204,	// (0x0004c086) cell_ai5_widget_list_row_pane_ParamLimits

0xf204,	// (0x0004c086) cell_ai5_widget_list_row_pane

0xf21d,	// (0x0004c09f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf21d,	// (0x0004c09f) cell_ai5_widget_list_row_pane_g1

0xf22a,	// (0x0004c0ac) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf22a,	// (0x0004c0ac) cell_ai5_widget_list_row_pane_t1

0xf242,	// (0x0004c0c4) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf242,	// (0x0004c0c4) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfee3,	// (0x0004cd65) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0004cd65) cell_ai5_widget_list_row_pane_t

0x2c75,	// (0x0003faf7) main_fep_vtchi_ss_pane

0xf254,	// (0x0004c0d6) popup_fep_char_pre_window

0xf25c,	// (0x0004c0de) popup_fep_ituss_window

0xf276,	// (0x0004c0f8) popup_fep_vkbss_window

0xf296,	// (0x0004c118) grid_vkbss_keypad_pane_ParamLimits

0xf296,	// (0x0004c118) grid_vkbss_keypad_pane

0xf2a6,	// (0x0004c128) ituss_keypad_pane

0xf2bc,	// (0x0004c13e) aid_vkbss_key_offset_ParamLimits

0xf2bc,	// (0x0004c13e) aid_vkbss_key_offset

0xf2c8,	// (0x0004c14a) cell_vkbss_key_pane_ParamLimits

0xf2c8,	// (0x0004c14a) cell_vkbss_key_pane

0xf2de,	// (0x0004c160) bg_cell_vkbss_key_g1_ParamLimits

0xf2de,	// (0x0004c160) bg_cell_vkbss_key_g1

0xf2ea,	// (0x0004c16c) cell_vkbss_key_3p_pane_ParamLimits

0xf2ea,	// (0x0004c16c) cell_vkbss_key_3p_pane

0xf304,	// (0x0004c186) cell_vkbss_key_g1_ParamLimits

0xf304,	// (0x0004c186) cell_vkbss_key_g1

0xf31e,	// (0x0004c1a0) cell_vkbss_key_t1_ParamLimits

0xf31e,	// (0x0004c1a0) cell_vkbss_key_t1

0xf349,	// (0x0004c1cb) cell_ituss_key_pane_ParamLimits

0xf349,	// (0x0004c1cb) cell_ituss_key_pane

0xf359,	// (0x0004c1db) bg_cell_ituss_key_g1_ParamLimits

0xf359,	// (0x0004c1db) bg_cell_ituss_key_g1

0xf365,	// (0x0004c1e7) cell_ituss_key_pane_g1_ParamLimits

0xf365,	// (0x0004c1e7) cell_ituss_key_pane_g1

0xf371,	// (0x0004c1f3) cell_ituss_key_pane_g2_ParamLimits

0xf371,	// (0x0004c1f3) cell_ituss_key_pane_g2

0x0001,

0xfee8,	// (0x0004cd6a) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x0004cd6a) cell_ituss_key_pane_g

0xf38a,	// (0x0004c20c) cell_ituss_key_t1_ParamLimits

0xf38a,	// (0x0004c20c) cell_ituss_key_t1

0xf3b8,	// (0x0004c23a) cell_ituss_key_t2_ParamLimits

0xf3b8,	// (0x0004c23a) cell_ituss_key_t2

0xf3e9,	// (0x0004c26b) cell_ituss_key_t3_ParamLimits

0xf3e9,	// (0x0004c26b) cell_ituss_key_t3

0xf41a,	// (0x0004c29c) cell_ituss_key_t4_ParamLimits

0xf41a,	// (0x0004c29c) cell_ituss_key_t4

0x0003,

0xfeed,	// (0x0004cd6f) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0004cd6f) cell_ituss_key_t

0xf44b,	// (0x0004c2cd) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0004c2d5) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0004c2dd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0004cd78) cell_vkbss_key_3p_pane_g

0x2c75,	// (0x0003faf7) bg_popup_fep_char_preview_window_cp02

0xf463,	// (0x0004c2e5) popup_fep_char_pre_window_t1

0xe647,	// (0x0004b4c9) main_ai5_sk_pane

0xedc5,	// (0x0004bc47) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xedd1,	// (0x0004bc53) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xede5,	// (0x0004bc67) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xedf4,	// (0x0004bc76) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0004cd50) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee07,	// (0x0004bc89) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7f7d,	// (0x00044dff) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf472,	// (0x0004c2f4) main_ai5_sk_pane_g1

0x9f73,	// (0x00046df5) popup_query_code_window_g1

0xf26b,	// (0x0004c0ed) popup_fep_vkb_icf_pane

0xf281,	// (0x0004c103) popup_fep_vtchi_icf_pane

0x7f7d,	// (0x00044dff) bg_icf_pane

0xf48a,	// (0x0004c30c) list_vkb_icf_pane

0x7f7d,	// (0x00044dff) bg_icf_pane_cp01

0xf4a2,	// (0x0004c324) vtchi_icf_list_pane

0xf4b2,	// (0x0004c334) list_vkb_icf_pane_t1_ParamLimits

0xf4b2,	// (0x0004c334) list_vkb_icf_pane_t1

0xf4c9,	// (0x0004c34b) vtchi_icf_list_pane_t1_ParamLimits

0xf4c9,	// (0x0004c34b) vtchi_icf_list_pane_t1

0xf25c,	// (0x0004c0de) popup_fep_ituss_window_ParamLimits

0xf281,	// (0x0004c103) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a6,	// (0x0004c128) ituss_keypad_pane_ParamLimits

0xf2b2,	// (0x0004c134) ituss_sks_pane

0x7f7d,	// (0x00044dff) bg_icf_pane_ParamLimits

0xf47b,	// (0x0004c2fd) icf_edit_indi_pane_ParamLimits

0xf47b,	// (0x0004c2fd) icf_edit_indi_pane

0xf48a,	// (0x0004c30c) list_vkb_icf_pane_ParamLimits

0x7f7d,	// (0x00044dff) bg_icf_pane_cp01_ParamLimits

0xf496,	// (0x0004c318) icf_edit_indi_pane_cp01_ParamLimits

0xf496,	// (0x0004c318) icf_edit_indi_pane_cp01

0xf4aa,	// (0x0004c32c) vtchi_query_pane

0xc30e,	// (0x00049190) icf_edit_indi_pane_g1_ParamLimits

0xc30e,	// (0x00049190) icf_edit_indi_pane_g1

0xf4e2,	// (0x0004c364) icf_edit_indi_pane_g2_ParamLimits

0xf4e2,	// (0x0004c364) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0004cd7f) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0004cd7f) icf_edit_indi_pane_g

0xf4ee,	// (0x0004c370) icf_edit_indi_pane_t1

0xf4fc,	// (0x0004c37e) bg_input_focus_pane_cp042

0x7ea0,	// (0x00044d22) vtchi_button_pane

0xf505,	// (0x0004c387) vtchi_query_pane_t1

0xf513,	// (0x0004c395) vtchi_query_pane_t2

0xf521,	// (0x0004c3a3) vtchi_query_pane_t3

0x0002,

0xff02,	// (0x0004cd84) vtchi_query_pane_t

0x2c75,	// (0x0003faf7) bg_button_pane_cp13

0xf52f,	// (0x0004c3b1) vtchi_button_pane_g1

0xf537,	// (0x0004c3b9) ituss_sks_pane_g1

0xf542,	// (0x0004c3c4) ituss_sks_pane_g2

0x0001,

0xff09,	// (0x0004cd8b) ituss_sks_pane_g

0xf54a,	// (0x0004c3cc) ituss_sks_pane_t1

0xf558,	// (0x0004c3da) ituss_sks_pane_t2

0x0001,

0xff0e,	// (0x0004cd90) ituss_sks_pane_t

0xbba1,	// (0x00048a23) indicator_nsta_pane_cp_g1

0xbbaa,	// (0x00048a2c) indicator_nsta_pane_cp_g2

0xbbb2,	// (0x00048a34) indicator_nsta_pane_cp_g3

0xbbba,	// (0x00048a3c) indicator_nsta_pane_cp_g4

0xbbc2,	// (0x00048a44) indicator_nsta_pane_cp_g5

0xbbca,	// (0x00048a4c) indicator_nsta_pane_cp_g6

0x0005,

0xfab8,	// (0x0004c93a) indicator_nsta_pane_cp_g

0xe237,	// (0x0004b0b9) cell_graphic2_pane_t2_ParamLimits

0xe237,	// (0x0004b0b9) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0004cc47) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0004cc47) cell_graphic2_pane_t

0xe264,	// (0x0004b0e6) cell_graphic2_control_pane_t1

0x86b3,	// (0x00045535) signal_pane_g3_ParamLimits

0x86b3,	// (0x00045535) signal_pane_g3

0x86c5,	// (0x00045547) signal_pane_g4_ParamLimits

0x86c5,	// (0x00045547) signal_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch_Large

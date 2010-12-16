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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00024851 };

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
0xa73e,	// (0x0002ef8f) Screen

0xa752,	// (0x0002efa3) application_window_ParamLimits

0xa752,	// (0x0002efa3) application_window

0xa76c,	// (0x0002efbd) screen_g1

0xa79e,	// (0x0002efef) area_bottom_pane_ParamLimits

0xa79e,	// (0x0002efef) area_bottom_pane

0xf345,	// (0x00033b96) area_top_pane_ParamLimits

0xf345,	// (0x00033b96) area_top_pane

0xf3d9,	// (0x00033c2a) main_pane_ParamLimits

0xf3d9,	// (0x00033c2a) main_pane

0xa81a,	// (0x0002f06b) misc_graphics

0xba05,	// (0x00030256) battery_pane_ParamLimits

0xba05,	// (0x00030256) battery_pane

0x4107,	// (0x00028958) bg_status_flat_pane_g8

0x410f,	// (0x00028960) bg_status_flat_pane_g9

0x350b,	// (0x00027d5c) context_pane_ParamLimits

0x350b,	// (0x00027d5c) context_pane

0xbb7c,	// (0x000303cd) navi_pane_ParamLimits

0xbb7c,	// (0x000303cd) navi_pane

0xbc04,	// (0x00030455) signal_pane_ParamLimits

0xbc04,	// (0x00030455) signal_pane

0x0008,

0xf84d,	// (0x0003409e) bg_status_flat_pane_g

0xbc94,	// (0x000304e5) status_pane_g1_ParamLimits

0xbc94,	// (0x000304e5) status_pane_g1

0xbcaa,	// (0x000304fb) status_pane_g2_ParamLimits

0xbcaa,	// (0x000304fb) status_pane_g2

0x3742,	// (0x00027f93) status_pane_g3_ParamLimits

0x3742,	// (0x00027f93) status_pane_g3

0x0004,

0xf779,	// (0x00033fca) status_pane_g_ParamLimits

0xf779,	// (0x00033fca) status_pane_g

0xbcb6,	// (0x00030507) title_pane_ParamLimits

0xbcb6,	// (0x00030507) title_pane

0xbd19,	// (0x0003056a) uni_indicator_pane_ParamLimits

0xbd19,	// (0x0003056a) uni_indicator_pane

0x336f,	// (0x00027bc0) bg_list_pane_ParamLimits

0x336f,	// (0x00027bc0) bg_list_pane

0xb23f,	// (0x0002fa90) find_pane

0x393b,	// (0x0002818c) listscroll_app_pane_ParamLimits

0x393b,	// (0x0002818c) listscroll_app_pane

0x33a3,	// (0x00027bf4) listscroll_form_pane

0xb247,	// (0x0002fa98) listscroll_gen_pane_ParamLimits

0xb247,	// (0x0002fa98) listscroll_gen_pane

0x1173,	// (0x000259c4) listscroll_set_pane

0x4c94,	// (0x000294e5) main_idle_act_pane

0x3068,	// (0x000278b9) main_idle_trad_pane

0x3068,	// (0x000278b9) main_list_empty_pane

0x3397,	// (0x00027be8) main_midp_pane

0x33bd,	// (0x00027c0e) main_pane_g1_ParamLimits

0x33bd,	// (0x00027c0e) main_pane_g1

0xb25b,	// (0x0002faac) popup_ai_message_window_ParamLimits

0xb25b,	// (0x0002faac) popup_ai_message_window

0xb2fb,	// (0x0002fb4c) popup_fep_china_uni_window_ParamLimits

0xb2fb,	// (0x0002fb4c) popup_fep_china_uni_window

0x128f,	// (0x00025ae0) popup_fep_japan_candidate_window_ParamLimits

0x128f,	// (0x00025ae0) popup_fep_japan_candidate_window

0x12b9,	// (0x00025b0a) popup_fep_japan_predictive_window_ParamLimits

0x12b9,	// (0x00025b0a) popup_fep_japan_predictive_window

0xb35b,	// (0x0002fbac) popup_find_window

0xb378,	// (0x0002fbc9) popup_grid_graphic_window_ParamLimits

0xb378,	// (0x0002fbc9) popup_grid_graphic_window

0x132c,	// (0x00025b7d) popup_large_graphic_colour_window

0xb422,	// (0x0002fc73) popup_menu_window_ParamLimits

0xb422,	// (0x0002fc73) popup_menu_window

0xb612,	// (0x0002fe63) popup_note_image_window

0xb5d2,	// (0x0002fe23) popup_note_wait_window_ParamLimits

0xb5d2,	// (0x0002fe23) popup_note_wait_window

0xb62a,	// (0x0002fe7b) popup_note_window_ParamLimits

0xb62a,	// (0x0002fe7b) popup_note_window

0xb6d8,	// (0x0002ff29) popup_query_code_window_ParamLimits

0xb6d8,	// (0x0002ff29) popup_query_code_window

0x1598,	// (0x00025de9) popup_query_data_code_window_ParamLimits

0x1598,	// (0x00025de9) popup_query_data_code_window

0xb718,	// (0x0002ff69) popup_query_data_window_ParamLimits

0xb718,	// (0x0002ff69) popup_query_data_window

0xb7ac,	// (0x0002fffd) popup_query_sat_info_window_ParamLimits

0xb7ac,	// (0x0002fffd) popup_query_sat_info_window

0xb857,	// (0x000300a8) popup_snote_single_graphic_window_ParamLimits

0xb857,	// (0x000300a8) popup_snote_single_graphic_window

0xb857,	// (0x000300a8) popup_snote_single_text_window_ParamLimits

0xb857,	// (0x000300a8) popup_snote_single_text_window

0x1633,	// (0x00025e84) popup_sub_window_general

0x1779,	// (0x00025fca) popup_window_general_ParamLimits

0x1779,	// (0x00025fca) popup_window_general

0x33cb,	// (0x00027c1c) power_save_pane

0x100e,	// (0x0002585f) control_pane_g1_ParamLimits

0x100e,	// (0x0002585f) control_pane_g1

0x1031,	// (0x00025882) control_pane_g2_ParamLimits

0x1031,	// (0x00025882) control_pane_g2

0x3332,	// (0x00027b83) control_pane_g3_ParamLimits

0x3332,	// (0x00027b83) control_pane_g3

0x0007,

0xf761,	// (0x00033fb2) control_pane_g_ParamLimits

0xf761,	// (0x00033fb2) control_pane_g

0xb156,	// (0x0002f9a7) control_pane_t1_ParamLimits

0xb156,	// (0x0002f9a7) control_pane_t1

0xb1a6,	// (0x0002f9f7) control_pane_t2_ParamLimits

0xb1a6,	// (0x0002f9f7) control_pane_t2

0x0002,

0xf772,	// (0x00033fc3) control_pane_t_ParamLimits

0xf772,	// (0x00033fc3) control_pane_t

0x3257,	// (0x00027aa8) navi_navi_volume_pane_cp1

0x325f,	// (0x00027ab0) status_small_icon_pane

0x3267,	// (0x00027ab8) status_small_pane_g1_ParamLimits

0x3267,	// (0x00027ab8) status_small_pane_g1

0x329b,	// (0x00027aec) status_small_pane_g2_ParamLimits

0x329b,	// (0x00027aec) status_small_pane_g2

0x32a7,	// (0x00027af8) status_small_pane_g3_ParamLimits

0x32a7,	// (0x00027af8) status_small_pane_g3

0xb108,	// (0x0002f959) status_small_pane_g4_ParamLimits

0xb108,	// (0x0002f959) status_small_pane_g4

0xb116,	// (0x0002f967) status_small_pane_g5_ParamLimits

0xb116,	// (0x0002f967) status_small_pane_g5

0x32cd,	// (0x00027b1e) status_small_pane_g6_ParamLimits

0x32cd,	// (0x00027b1e) status_small_pane_g6

0x0007,

0xf750,	// (0x00033fa1) status_small_pane_g_ParamLimits

0xf750,	// (0x00033fa1) status_small_pane_g

0x32fc,	// (0x00027b4d) status_small_pane_t1

0xb12c,	// (0x0002f97d) status_small_wait_pane_ParamLimits

0xb12c,	// (0x0002f97d) status_small_wait_pane

0xafcd,	// (0x0002f81e) aid_levels_signal_ParamLimits

0xafcd,	// (0x0002f81e) aid_levels_signal

0xafe5,	// (0x0002f836) signal_pane_g1_ParamLimits

0xafe5,	// (0x0002f836) signal_pane_g1

0xb000,	// (0x0002f851) signal_pane_g2_ParamLimits

0xb000,	// (0x0002f851) signal_pane_g2

0x0003,

0xf6e1,	// (0x00033f32) signal_pane_g_ParamLimits

0xf6e1,	// (0x00033f32) signal_pane_g

0x0c19,	// (0x0002546a) context_pane_g1

0xa952,	// (0x0002f1a3) title_pane_g1

0xa9a1,	// (0x0002f1f2) title_pane_t1

0xaa2d,	// (0x0002f27e) title_pane_t2

0xaa53,	// (0x0002f2a4) title_pane_t3

0x0002,

0xf530,	// (0x00033d81) title_pane_t

0xbd41,	// (0x00030592) aid_levels_battery_ParamLimits

0xbd41,	// (0x00030592) aid_levels_battery

0xbd5d,	// (0x000305ae) battery_pane_g1_ParamLimits

0xbd5d,	// (0x000305ae) battery_pane_g1

0xbd7a,	// (0x000305cb) battery_pane_g2_ParamLimits

0xbd7a,	// (0x000305cb) battery_pane_g2

0x0001,

0xf784,	// (0x00033fd5) battery_pane_g_ParamLimits

0xf784,	// (0x00033fd5) battery_pane_g

0xc080,	// (0x000308d1) uni_indicator_pane_g1

0xc096,	// (0x000308e7) uni_indicator_pane_g2

0xc0ac,	// (0x000308fd) uni_indicator_pane_g3

0x0005,

0xf8f5,	// (0x00034146) uni_indicator_pane_g

0x2ec7,	// (0x00027718) navi_icon_pane_ParamLimits

0x2ec7,	// (0x00027718) navi_icon_pane

0x2e0e,	// (0x0002765f) navi_midp_pane

0x2ee3,	// (0x00027734) navi_navi_pane

0x2eed,	// (0x0002773e) navi_text_pane_ParamLimits

0x2eed,	// (0x0002773e) navi_text_pane

0xa76c,	// (0x0002efbd) status_small_wait_pane_g1

0xd382,	// (0x00031bd3) status_small_wait_pane_g2

0x0001,

0xf8f0,	// (0x00034141) status_small_wait_pane_g

0xc01f,	// (0x00030870) navi_navi_icon_text_pane

0xc027,	// (0x00030878) navi_navi_pane_g1_ParamLimits

0xc027,	// (0x00030878) navi_navi_pane_g1

0xc039,	// (0x0003088a) navi_navi_pane_g2_ParamLimits

0xc039,	// (0x0003088a) navi_navi_pane_g2

0x0001,

0xf8be,	// (0x0003410f) navi_navi_pane_g_ParamLimits

0xf8be,	// (0x0003410f) navi_navi_pane_g

0x4790,	// (0x00028fe1) navi_navi_tabs_pane

0xc04b,	// (0x0003089c) navi_navi_text_pane

0xc01f,	// (0x00030870) navi_navi_volume_pane

0xc00d,	// (0x0003085e) navi_text_pane_t1

0xc001,	// (0x00030852) navi_icon_pane_g1

0x4687,	// (0x00028ed8) navi_navi_text_pane_t1

0xbff0,	// (0x00030841) navi_navi_volume_pane_g1

0xbff8,	// (0x00030849) volume_small_pane

0xbf4c,	// (0x0003079d) navi_navi_icon_text_pane_g1

0xbf54,	// (0x000307a5) navi_navi_icon_text_pane_t1

0x2ee3,	// (0x00027734) navi_tabs_2_long_pane

0x2ee3,	// (0x00027734) navi_tabs_2_pane

0x2ee3,	// (0x00027734) navi_tabs_3_long_pane

0x2ee3,	// (0x00027734) navi_tabs_3_pane

0x2ee3,	// (0x00027734) navi_tabs_4_pane

0x1a02,	// (0x00026253) tabs_2_active_pane_ParamLimits

0x1a02,	// (0x00026253) tabs_2_active_pane

0x1a12,	// (0x00026263) tabs_2_passive_pane_ParamLimits

0x1a12,	// (0x00026263) tabs_2_passive_pane

0x19d0,	// (0x00026221) tabs_3_active_pane_ParamLimits

0x19d0,	// (0x00026221) tabs_3_active_pane

0x19e0,	// (0x00026231) tabs_3_passive_pane_ParamLimits

0x19e0,	// (0x00026231) tabs_3_passive_pane

0x19f1,	// (0x00026242) tabs_3_passive_pane_cp_ParamLimits

0x19f1,	// (0x00026242) tabs_3_passive_pane_cp

0x1984,	// (0x000261d5) tabs_4_active_pane_ParamLimits

0x1984,	// (0x000261d5) tabs_4_active_pane

0x1997,	// (0x000261e8) tabs_4_passive_pane_ParamLimits

0x1997,	// (0x000261e8) tabs_4_passive_pane

0x19a8,	// (0x000261f9) tabs_4_passive_pane_cp_ParamLimits

0x19a8,	// (0x000261f9) tabs_4_passive_pane_cp

0x19b9,	// (0x0002620a) tabs_4_passive_pane_cp2_ParamLimits

0x19b9,	// (0x0002620a) tabs_4_passive_pane_cp2

0x1960,	// (0x000261b1) tabs_2_long_active_pane_ParamLimits

0x1960,	// (0x000261b1) tabs_2_long_active_pane

0x1972,	// (0x000261c3) tabs_2_long_passive_pane_ParamLimits

0x1972,	// (0x000261c3) tabs_2_long_passive_pane

0x1921,	// (0x00026172) tabs_3_long_active_pane_ParamLimits

0x1921,	// (0x00026172) tabs_3_long_active_pane

0x1934,	// (0x00026185) tabs_3_long_passive_pane_ParamLimits

0x1934,	// (0x00026185) tabs_3_long_passive_pane

0x194d,	// (0x0002619e) tabs_3_long_passive_pane_cp_ParamLimits

0x194d,	// (0x0002619e) tabs_3_long_passive_pane_cp

0x18c7,	// (0x00026118) volume_small_pane_g1

0xbefb,	// (0x0003074c) volume_small_pane_g2

0xbf04,	// (0x00030755) volume_small_pane_g3

0xbf0d,	// (0x0003075e) volume_small_pane_g4

0xbf16,	// (0x00030767) volume_small_pane_g5

0xbf1f,	// (0x00030770) volume_small_pane_g6

0xbf28,	// (0x00030779) volume_small_pane_g7

0xbf31,	// (0x00030782) volume_small_pane_g8

0xbf3a,	// (0x0003078b) volume_small_pane_g9

0xbf43,	// (0x00030794) volume_small_pane_g10

0x0009,

0xf88a,	// (0x000340db) volume_small_pane_g

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp2_ParamLimits

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp2

0xaa73,	// (0x0002f2c4) tabs_3_active_pane_g1

0xaa7b,	// (0x0002f2cc) tabs_3_active_pane_t1

0xaa65,	// (0x0002f2b6) bg_passive_tab_pane_cp2_ParamLimits

0xaa65,	// (0x0002f2b6) bg_passive_tab_pane_cp2

0xaa73,	// (0x0002f2c4) tabs_3_passive_pane_g1

0xaa7b,	// (0x0002f2cc) tabs_3_passive_pane_t1

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp3_ParamLimits

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp3

0xaa8d,	// (0x0002f2de) tabs_4_active_pane_g1

0xaa95,	// (0x0002f2e6) tabs_4_active_pane_t1

0xaa65,	// (0x0002f2b6) bg_passive_tab_pane_cp3_ParamLimits

0xaa65,	// (0x0002f2b6) bg_passive_tab_pane_cp3

0xaa8d,	// (0x0002f2de) tabs_4_1_passive_pane_g1

0xaa95,	// (0x0002f2e6) tabs_4_1_passive_pane_t1

0x3397,	// (0x00027be8) list_highlight_pane_cp2

0xc13f,	// (0x00030990) list_set_pane_ParamLimits

0xc13f,	// (0x00030990) list_set_pane

0xc201,	// (0x00030a52) main_pane_set_t1_ParamLimits

0xc201,	// (0x00030a52) main_pane_set_t1

0xc221,	// (0x00030a72) main_pane_set_t2_ParamLimits

0xc221,	// (0x00030a72) main_pane_set_t2

0xc235,	// (0x00030a86) main_pane_set_t3_ParamLimits

0xc235,	// (0x00030a86) main_pane_set_t3

0xc249,	// (0x00030a9a) main_pane_set_t4_ParamLimits

0xc249,	// (0x00030a9a) main_pane_set_t4

0x0003,

0xf95a,	// (0x000341ab) main_pane_set_t_ParamLimits

0xf95a,	// (0x000341ab) main_pane_set_t

0xc25d,	// (0x00030aae) setting_code_pane

0x4de2,	// (0x00029633) setting_slider_graphic_pane

0x4de2,	// (0x00029633) setting_slider_pane

0x4de2,	// (0x00029633) setting_text_pane

0x4de2,	// (0x00029633) setting_volume_pane

0x0024,	// (0x00024875) volume_set_pane

0xaaa7,	// (0x0002f2f8) bg_set_opt_pane_cp

0x002e,	// (0x0002487f) setting_slider_pane_t1

0x0047,	// (0x00024898) setting_slider_pane_t2

0x0061,	// (0x000248b2) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00033d88) setting_slider_pane_t

0x0079,	// (0x000248ca) slider_set_pane

0xa81a,	// (0x0002f06b) bg_set_opt_pane_cp2

0xaab5,	// (0x0002f306) setting_slider_graphic_pane_g1

0x008f,	// (0x000248e0) setting_slider_graphic_pane_t1

0x009f,	// (0x000248f0) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00033d8f) setting_slider_graphic_pane_t

0x00af,	// (0x00024900) slider_set_pane_cp

0xa81a,	// (0x0002f06b) input_focus_pane_cp1

0x4c7b,	// (0x000294cc) list_set_text_pane

0xa76c,	// (0x0002efbd) setting_text_pane_g1

0xa81a,	// (0x0002f06b) input_focus_pane_cp2

0xa76c,	// (0x0002efbd) setting_code_pane_g1

0xaabe,	// (0x0002f30f) setting_code_pane_t1

0xea97,	// (0x000332e8) set_text_pane_t1_ParamLimits

0xea97,	// (0x000332e8) set_text_pane_t1

0xd71b,	// (0x00031f6c) set_opt_bg_pane_g1

0xd723,	// (0x00031f74) set_opt_bg_pane_g2

0x4c53,	// (0x000294a4) set_opt_bg_pane_g3

0xd733,	// (0x00031f84) set_opt_bg_pane_g4

0xd73b,	// (0x00031f8c) set_opt_bg_pane_g5

0xd743,	// (0x00031f94) set_opt_bg_pane_g6

0x4c5d,	// (0x000294ae) set_opt_bg_pane_g7

0x4c67,	// (0x000294b8) set_opt_bg_pane_g8

0x4c71,	// (0x000294c2) set_opt_bg_pane_g9

0x0008,

0xf947,	// (0x00034198) set_opt_bg_pane_g

0x4c46,	// (0x00029497) slider_set_pane_g1

0x1aab,	// (0x000262fc) slider_set_pane_g2

0x0006,

0xf938,	// (0x00034189) slider_set_pane_g

0x1a33,	// (0x00026284) volume_set_pane_g1

0x1a3d,	// (0x0002628e) volume_set_pane_g2

0x1a47,	// (0x00026298) volume_set_pane_g3

0x1a51,	// (0x000262a2) volume_set_pane_g4

0x1a5b,	// (0x000262ac) volume_set_pane_g5

0x1a65,	// (0x000262b6) volume_set_pane_g6

0x1a6f,	// (0x000262c0) volume_set_pane_g7

0x1a79,	// (0x000262ca) volume_set_pane_g8

0x1a83,	// (0x000262d4) volume_set_pane_g9

0x1a8d,	// (0x000262de) volume_set_pane_g10

0x0009,

0xf910,	// (0x00034161) volume_set_pane_g

0xaacc,	// (0x0002f31d) indicator_pane_ParamLimits

0xaacc,	// (0x0002f31d) indicator_pane

0xaaf8,	// (0x0002f349) main_idle_pane_g2_ParamLimits

0xaaf8,	// (0x0002f349) main_idle_pane_g2

0xab30,	// (0x0002f381) main_pane_idle_g1_ParamLimits

0xab30,	// (0x0002f381) main_pane_idle_g1

0xab5a,	// (0x0002f3ab) popup_clock_digital_analogue_window_ParamLimits

0xab5a,	// (0x0002f3ab) popup_clock_digital_analogue_window

0xab71,	// (0x0002f3c2) soft_indicator_pane_ParamLimits

0xab71,	// (0x0002f3c2) soft_indicator_pane

0xab8d,	// (0x0002f3de) wallpaper_pane_ParamLimits

0xab8d,	// (0x0002f3de) wallpaper_pane

0xa76c,	// (0x0002efbd) wallpaper_pane_g1

0xab9f,	// (0x0002f3f0) indicator_pane_g1_ParamLimits

0xab9f,	// (0x0002f3f0) indicator_pane_g1

0x50c5,	// (0x00029916) navi_navi_icon_text_pane_srt_g1

0xd0d4,	// (0x00031925) soft_indicator_pane_t1

0xd0ee,	// (0x0003193f) aid_ps_area_pane

0xabb8,	// (0x0002f409) aid_ps_clock_pane

0xd0ff,	// (0x00031950) aid_ps_indicator_pane

0xd10b,	// (0x0003195c) indicator_ps_pane_ParamLimits

0xd10b,	// (0x0003195c) indicator_ps_pane

0xd11a,	// (0x0003196b) power_save_pane_g1_ParamLimits

0xd11a,	// (0x0003196b) power_save_pane_g1

0xd126,	// (0x00031977) power_save_pane_g2_ParamLimits

0xd126,	// (0x00031977) power_save_pane_g2

0xf2d6,	// (0x00033b27) aid_navinavi_width_pane

0xd0ee,	// (0x0003193f) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00033d94) power_save_pane_g_ParamLimits

0xf543,	// (0x00033d94) power_save_pane_g

0xd134,	// (0x00031985) power_save_pane_t1_ParamLimits

0xd134,	// (0x00031985) power_save_pane_t1

0xabb8,	// (0x0002f409) aid_ps_clock_pane_ParamLimits

0xd0ff,	// (0x00031950) aid_ps_indicator_pane_ParamLimits

0xd146,	// (0x00031997) power_save_pane_t4_ParamLimits

0xd146,	// (0x00031997) power_save_pane_t4

0x0001,

0xf548,	// (0x00033d99) power_save_pane_t_ParamLimits

0xf548,	// (0x00033d99) power_save_pane_t

0xd170,	// (0x000319c1) power_save_t3_ParamLimits

0xd170,	// (0x000319c1) power_save_t3

0xd15b,	// (0x000319ac) power_save_t2_ParamLimits

0xd15b,	// (0x000319ac) power_save_t2

0xd185,	// (0x000319d6) indicator_ps_pane_g1

0xabc6,	// (0x0002f417) ai_gene_pane_ParamLimits

0xabc6,	// (0x0002f417) ai_gene_pane

0xabdd,	// (0x0002f42e) ai_links_pane_ParamLimits

0xabdd,	// (0x0002f42e) ai_links_pane

0xabf5,	// (0x0002f446) indicator_pane_cp1_ParamLimits

0xabf5,	// (0x0002f446) indicator_pane_cp1

0xac04,	// (0x0002f455) main_pane_idle_g1_cp_ParamLimits

0xac04,	// (0x0002f455) main_pane_idle_g1_cp

0xd18e,	// (0x000319df) popup_ai_links_title_window

0xac1c,	// (0x0002f46d) soft_indicator_pane_cp1_ParamLimits

0xac1c,	// (0x0002f46d) soft_indicator_pane_cp1

0x4a3f,	// (0x00029290) ai_links_pane_g1

0x4a48,	// (0x00029299) grid_ai_links_pane

0xc077,	// (0x000308c8) ai_gene_pane_1

0x4a2d,	// (0x0002927e) ai_gene_pane_2

0x4a36,	// (0x00029287) list_highlight_pane_cp4

0xc053,	// (0x000308a4) cell_ai_link_pane_ParamLimits

0xc053,	// (0x000308a4) cell_ai_link_pane

0x49fc,	// (0x0002924d) cell_ai_link_pane_g1

0xd382,	// (0x00031bd3) cell_ai_link_pane_g2

0x0001,

0xf8eb,	// (0x0003413c) cell_ai_link_pane_g

0xa81a,	// (0x0002f06b) grid_highlight_cp2

0xa81a,	// (0x0002f06b) bg_popup_sub_pane_cp1

0xd1a5,	// (0x000319f6) popup_ai_links_title_window_t1

0x4948,	// (0x00029199) ai_gene_pane_1_g1_ParamLimits

0x4948,	// (0x00029199) ai_gene_pane_1_g1

0x4954,	// (0x000291a5) ai_gene_pane_1_g2_ParamLimits

0x4954,	// (0x000291a5) ai_gene_pane_1_g2

0x0001,

0xf8e1,	// (0x00034132) ai_gene_pane_1_g_ParamLimits

0xf8e1,	// (0x00034132) ai_gene_pane_1_g

0x4961,	// (0x000291b2) ai_gene_pane_1_t1_ParamLimits

0x4961,	// (0x000291b2) ai_gene_pane_1_t1

0x4995,	// (0x000291e6) grid_ai_soft_ind_pane

0x4933,	// (0x00029184) ai_gene_pane_2_t1_ParamLimits

0x4933,	// (0x00029184) ai_gene_pane_2_t1

0xac30,	// (0x0002f481) main_pane_empty_t1_ParamLimits

0xac30,	// (0x0002f481) main_pane_empty_t1

0xac48,	// (0x0002f499) main_pane_empty_t2_ParamLimits

0xac48,	// (0x0002f499) main_pane_empty_t2

0xac5d,	// (0x0002f4ae) main_pane_empty_t3_ParamLimits

0xac5d,	// (0x0002f4ae) main_pane_empty_t3

0xac6f,	// (0x0002f4c0) main_pane_empty_t4_ParamLimits

0xac6f,	// (0x0002f4c0) main_pane_empty_t4

0xac81,	// (0x0002f4d2) main_pane_empty_t5_ParamLimits

0xac81,	// (0x0002f4d2) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00033d9e) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00033d9e) main_pane_empty_t

0x0366,	// (0x00024bb7) bg_popup_window_pane_ParamLimits

0x0366,	// (0x00024bb7) bg_popup_window_pane

0x4695,	// (0x00028ee6) find_popup_pane_cp2_ParamLimits

0x4695,	// (0x00028ee6) find_popup_pane_cp2

0x46a1,	// (0x00028ef2) heading_pane_ParamLimits

0x46a1,	// (0x00028ef2) heading_pane

0xa81a,	// (0x0002f06b) bg_popup_sub_pane

0xbf71,	// (0x000307c2) bg_popup_window_pane_g1_ParamLimits

0xbf71,	// (0x000307c2) bg_popup_window_pane_g1

0xbf80,	// (0x000307d1) bg_popup_window_pane_g2_ParamLimits

0xbf80,	// (0x000307d1) bg_popup_window_pane_g2

0xbf8c,	// (0x000307dd) bg_popup_window_pane_g3_ParamLimits

0xbf8c,	// (0x000307dd) bg_popup_window_pane_g3

0xbf98,	// (0x000307e9) bg_popup_window_pane_g4_ParamLimits

0xbf98,	// (0x000307e9) bg_popup_window_pane_g4

0xbfa7,	// (0x000307f8) bg_popup_window_pane_g5_ParamLimits

0xbfa7,	// (0x000307f8) bg_popup_window_pane_g5

0xbfb7,	// (0x00030808) bg_popup_window_pane_g6_ParamLimits

0xbfb7,	// (0x00030808) bg_popup_window_pane_g6

0xbfc3,	// (0x00030814) bg_popup_window_pane_g7_ParamLimits

0xbfc3,	// (0x00030814) bg_popup_window_pane_g7

0xbfd2,	// (0x00030823) bg_popup_window_pane_g8_ParamLimits

0xbfd2,	// (0x00030823) bg_popup_window_pane_g8

0xbfe1,	// (0x00030832) bg_popup_window_pane_g9_ParamLimits

0xbfe1,	// (0x00030832) bg_popup_window_pane_g9

0x467b,	// (0x00028ecc) bg_popup_window_pane_g10_ParamLimits

0x467b,	// (0x00028ecc) bg_popup_window_pane_g10

0x0009,

0xf8a9,	// (0x000340fa) bg_popup_window_pane_g_ParamLimits

0xf8a9,	// (0x000340fa) bg_popup_window_pane_g

0x45a4,	// (0x00028df5) bg_popup_heading_pane_ParamLimits

0x45a4,	// (0x00028df5) bg_popup_heading_pane

0x1b33,	// (0x00026384) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b33,	// (0x00026384) tabs_4_passive_pane_cp_srt

0x1b45,	// (0x00026396) tabs_4_passive_pane_srt_ParamLimits

0x45b8,	// (0x00028e09) heading_pane_g2

0x1b45,	// (0x00026396) tabs_4_passive_pane_srt

0x393b,	// (0x0002818c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x393b,	// (0x0002818c) bg_passive_tab_pane_cp3_srt

0x45c0,	// (0x00028e11) heading_pane_t1_ParamLimits

0x45c0,	// (0x00028e11) heading_pane_t1

0x45d7,	// (0x00028e28) heading_pane_t2_ParamLimits

0x45d7,	// (0x00028e28) heading_pane_t2

0x0001,

0xf8a4,	// (0x000340f5) heading_pane_t_ParamLimits

0xf8a4,	// (0x000340f5) heading_pane_t

0x40cf,	// (0x00028920) bg_popup_heading_pane_g1

0x417e,	// (0x000289cf) bg_popup_heading_pane_g2

0x4188,	// (0x000289d9) bg_popup_heading_pane_g3

0x4192,	// (0x000289e3) bg_popup_heading_pane_g4

0x419c,	// (0x000289ed) bg_popup_heading_pane_g5

0x41a6,	// (0x000289f7) bg_popup_heading_pane_g6

0x41ae,	// (0x000289ff) bg_popup_heading_pane_g7

0x41b6,	// (0x00028a07) bg_popup_heading_pane_g8

0x41c0,	// (0x00028a11) bg_popup_heading_pane_g9

0x0008,

0xf860,	// (0x000340b1) bg_popup_heading_pane_g

0x38c7,	// (0x00028118) bg_popup_sub_pane_g1

0x38cf,	// (0x00028120) bg_popup_sub_pane_g2

0x38d7,	// (0x00028128) bg_popup_sub_pane_g3

0x38df,	// (0x00028130) bg_popup_sub_pane_g4

0x38e7,	// (0x00028138) bg_popup_sub_pane_g5

0x38ef,	// (0x00028140) bg_popup_sub_pane_g6

0x38f7,	// (0x00028148) bg_popup_sub_pane_g7

0x38ff,	// (0x00028150) bg_popup_sub_pane_g8

0x3907,	// (0x00028158) bg_popup_sub_pane_g9

0x0008,

0xf83a,	// (0x0003408b) bg_popup_sub_pane_g

0xaa65,	// (0x0002f2b6) bg_popup_window_pane_cp5_ParamLimits

0xaa65,	// (0x0002f2b6) bg_popup_window_pane_cp5

0xd1c2,	// (0x00031a13) popup_note_window_g1_ParamLimits

0xd1c2,	// (0x00031a13) popup_note_window_g1

0xd1ce,	// (0x00031a1f) popup_note_window_t1_ParamLimits

0xd1ce,	// (0x00031a1f) popup_note_window_t1

0xd1e4,	// (0x00031a35) popup_note_window_t2_ParamLimits

0xd1e4,	// (0x00031a35) popup_note_window_t2

0xd1fa,	// (0x00031a4b) popup_note_window_t3_ParamLimits

0xd1fa,	// (0x00031a4b) popup_note_window_t3

0xd210,	// (0x00031a61) popup_note_window_t4_ParamLimits

0xd210,	// (0x00031a61) popup_note_window_t4

0xd238,	// (0x00031a89) popup_note_window_t5_ParamLimits

0xd238,	// (0x00031a89) popup_note_window_t5

0x0004,

0xf558,	// (0x00033da9) popup_note_window_t_ParamLimits

0xf558,	// (0x00033da9) popup_note_window_t

0xd282,	// (0x00031ad3) bg_popup_window_pane_cp6_ParamLimits

0xd282,	// (0x00031ad3) bg_popup_window_pane_cp6

0x404b,	// (0x0002889c) popup_note_image_window_g1_ParamLimits

0x404b,	// (0x0002889c) popup_note_image_window_g1

0x4057,	// (0x000288a8) popup_note_image_window_g2_ParamLimits

0x4057,	// (0x000288a8) popup_note_image_window_g2

0x0001,

0xf82e,	// (0x0003407f) popup_note_image_window_g_ParamLimits

0xf82e,	// (0x0003407f) popup_note_image_window_g

0x4070,	// (0x000288c1) popup_note_image_window_t1_ParamLimits

0x4070,	// (0x000288c1) popup_note_image_window_t1

0x4089,	// (0x000288da) popup_note_image_window_t2_ParamLimits

0x4089,	// (0x000288da) popup_note_image_window_t2

0x40a2,	// (0x000288f3) popup_note_image_window_t3_ParamLimits

0x40a2,	// (0x000288f3) popup_note_image_window_t3

0x0002,

0xf833,	// (0x00034084) popup_note_image_window_t_ParamLimits

0xf833,	// (0x00034084) popup_note_image_window_t

0x3f0b,	// (0x0002875c) bg_popup_window_pane_cp7_ParamLimits

0x3f0b,	// (0x0002875c) bg_popup_window_pane_cp7

0x3f3b,	// (0x0002878c) popup_note_wait_window_g1_ParamLimits

0x3f3b,	// (0x0002878c) popup_note_wait_window_g1

0x3f47,	// (0x00028798) popup_note_wait_window_g2_ParamLimits

0x3f47,	// (0x00028798) popup_note_wait_window_g2

0x0002,

0xf81c,	// (0x0003406d) popup_note_wait_window_g_ParamLimits

0xf81c,	// (0x0003406d) popup_note_wait_window_g

0x3f5f,	// (0x000287b0) popup_note_wait_window_t1_ParamLimits

0x3f5f,	// (0x000287b0) popup_note_wait_window_t1

0x3f86,	// (0x000287d7) popup_note_wait_window_t2_ParamLimits

0x3f86,	// (0x000287d7) popup_note_wait_window_t2

0x3fa4,	// (0x000287f5) popup_note_wait_window_t3_ParamLimits

0x3fa4,	// (0x000287f5) popup_note_wait_window_t3

0x3fb7,	// (0x00028808) popup_note_wait_window_t4_ParamLimits

0x3fb7,	// (0x00028808) popup_note_wait_window_t4

0x0004,

0xf823,	// (0x00034074) popup_note_wait_window_t_ParamLimits

0xf823,	// (0x00034074) popup_note_wait_window_t

0x3fdc,	// (0x0002882d) wait_bar_pane_ParamLimits

0x3fdc,	// (0x0002882d) wait_bar_pane

0xa81a,	// (0x0002f06b) wait_anim_pane

0xa81a,	// (0x0002f06b) wait_border_pane

0xa76c,	// (0x0002efbd) wait_anim_pane_g1

0xa76c,	// (0x0002efbd) wait_anim_pane_g2

0x0001,

0xf6dc,	// (0x00033f2d) wait_anim_pane_g

0x3eaf,	// (0x00028700) wait_border_pane_g1

0x3eba,	// (0x0002870b) wait_border_pane_g2

0x3ec3,	// (0x00028714) wait_border_pane_g3

0x0002,

0xf815,	// (0x00034066) wait_border_pane_g

0x3d19,	// (0x0002856a) bg_popup_window_pane_cp16_ParamLimits

0x3d19,	// (0x0002856a) bg_popup_window_pane_cp16

0x3e19,	// (0x0002866a) indicator_popup_pane_cp4_ParamLimits

0x3e19,	// (0x0002866a) indicator_popup_pane_cp4

0x3e2d,	// (0x0002867e) popup_query_data_window_t1_ParamLimits

0x3e2d,	// (0x0002867e) popup_query_data_window_t1

0x3e3f,	// (0x00028690) popup_query_data_window_t2_ParamLimits

0x3e3f,	// (0x00028690) popup_query_data_window_t2

0x3e58,	// (0x000286a9) popup_query_data_window_t3_ParamLimits

0x3e58,	// (0x000286a9) popup_query_data_window_t3

0x0002,

0xf80e,	// (0x0003405f) popup_query_data_window_t_ParamLimits

0xf80e,	// (0x0003405f) popup_query_data_window_t

0x3e72,	// (0x000286c3) query_popup_data_pane_ParamLimits

0x3e72,	// (0x000286c3) query_popup_data_pane

0x3e86,	// (0x000286d7) query_popup_data_pane_cp1_ParamLimits

0x3e86,	// (0x000286d7) query_popup_data_pane_cp1

0x3d19,	// (0x0002856a) bg_popup_window_pane_cp10_ParamLimits

0x3d19,	// (0x0002856a) bg_popup_window_pane_cp10

0x3d4b,	// (0x0002859c) indicator_popup_pane_ParamLimits

0x3d4b,	// (0x0002859c) indicator_popup_pane

0x3d6d,	// (0x000285be) popup_query_code_window_t1_ParamLimits

0x3d6d,	// (0x000285be) popup_query_code_window_t1

0x3d87,	// (0x000285d8) popup_query_code_window_t2_ParamLimits

0x3d87,	// (0x000285d8) popup_query_code_window_t2

0x3dd0,	// (0x00028621) popup_query_code_window_t3_ParamLimits

0x3dd0,	// (0x00028621) popup_query_code_window_t3

0x0002,

0xf807,	// (0x00034058) popup_query_code_window_t_ParamLimits

0xf807,	// (0x00034058) popup_query_code_window_t

0x3dff,	// (0x00028650) query_popup_pane_ParamLimits

0x3dff,	// (0x00028650) query_popup_pane

0xd282,	// (0x00031ad3) bg_popup_window_pane_cp15_ParamLimits

0xd282,	// (0x00031ad3) bg_popup_window_pane_cp15

0xd2a2,	// (0x00031af3) indicator_popup_pane_cp1_ParamLimits

0xd2a2,	// (0x00031af3) indicator_popup_pane_cp1

0xd2b5,	// (0x00031b06) indicator_popup_pane_cp2_ParamLimits

0xd2b5,	// (0x00031b06) indicator_popup_pane_cp2

0xd2d0,	// (0x00031b21) popup_query_data_code_window_g1_ParamLimits

0xd2d0,	// (0x00031b21) popup_query_data_code_window_g1

0xd2e3,	// (0x00031b34) popup_query_data_code_window_t1_ParamLimits

0xd2e3,	// (0x00031b34) popup_query_data_code_window_t1

0xd2f5,	// (0x00031b46) popup_query_data_code_window_t2_ParamLimits

0xd2f5,	// (0x00031b46) popup_query_data_code_window_t2

0xd307,	// (0x00031b58) popup_query_data_code_window_t3_ParamLimits

0xd307,	// (0x00031b58) popup_query_data_code_window_t3

0xd31d,	// (0x00031b6e) popup_query_data_code_window_t4_ParamLimits

0xd31d,	// (0x00031b6e) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00033db4) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00033db4) popup_query_data_code_window_t

0x2e83,	// (0x000276d4) list_single_midp_graphic_pane_g3

0xd337,	// (0x00031b88) query_popup_data_pane_cp2_ParamLimits

0xd34a,	// (0x00031b9b) query_popup_pane_cp2_ParamLimits

0xd34a,	// (0x00031b9b) query_popup_pane_cp2

0xa81a,	// (0x0002f06b) bg_popup_window_pane_cp11

0x3cfd,	// (0x0002854e) heading_pane_cp5

0x3d05,	// (0x00028556) listscroll_popup_info_pane

0xa81a,	// (0x0002f06b) input_focus_pane_cp3

0xd365,	// (0x00031bb6) query_popup_pane_t1

0xd373,	// (0x00031bc4) list_popup_info_pane_ParamLimits

0xd373,	// (0x00031bc4) list_popup_info_pane

0xd382,	// (0x00031bd3) listscroll_popup_info_pane_g1

0xd38a,	// (0x00031bdb) scroll_pane_cp7

0xd394,	// (0x00031be5) popup_info_list_pane_t1_ParamLimits

0xd394,	// (0x00031be5) popup_info_list_pane_t1

0xd3ae,	// (0x00031bff) popup_info_list_pane_t2_ParamLimits

0xd3ae,	// (0x00031bff) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00033dbd) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00033dbd) popup_info_list_pane_t

0xa81a,	// (0x0002f06b) bg_popup_window_pane_cp12

0x50df,	// (0x00029930) find_popup_pane

0xaaa7,	// (0x0002f2f8) bg_popup_window_pane_cp3

0xd3c8,	// (0x00031c19) heading_pane_cp3

0xd3d7,	// (0x00031c28) listscroll_popup_graphic_pane

0xa81a,	// (0x0002f06b) bg_popup_window_pane_cp4

0xace3,	// (0x0002f534) heading_pane_cp4

0xd3e7,	// (0x00031c38) listscroll_popup_colour_pane

0xaced,	// (0x0002f53e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xaced,	// (0x0002f53e) cell_large_graphic_colour_none_popup_pane

0xad01,	// (0x0002f552) grid_large_graphic_colour_popup_pane_ParamLimits

0xad01,	// (0x0002f552) grid_large_graphic_colour_popup_pane

0xad29,	// (0x0002f57a) listscroll_popup_colour_pane_g1_ParamLimits

0xad29,	// (0x0002f57a) listscroll_popup_colour_pane_g1

0xad40,	// (0x0002f591) listscroll_popup_colour_pane_g2_ParamLimits

0xad40,	// (0x0002f591) listscroll_popup_colour_pane_g2

0xad57,	// (0x0002f5a8) listscroll_popup_colour_pane_g3_ParamLimits

0xad57,	// (0x0002f5a8) listscroll_popup_colour_pane_g3

0xad67,	// (0x0002f5b8) listscroll_popup_colour_pane_g4_ParamLimits

0xad67,	// (0x0002f5b8) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00033dc2) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00033dc2) listscroll_popup_colour_pane_g

0xd3ef,	// (0x00031c40) scroll_pane_cp6_ParamLimits

0xd3ef,	// (0x00031c40) scroll_pane_cp6

0xad77,	// (0x0002f5c8) cell_large_graphic_colour_popup_pane_ParamLimits

0xad77,	// (0x0002f5c8) cell_large_graphic_colour_popup_pane

0xd401,	// (0x00031c52) cell_large_graphic_colour_none_popup_pane_t1

0xa81a,	// (0x0002f06b) grid_highlight_pane_cp5

0xd410,	// (0x00031c61) cell_large_graphic_colour_popup_pane_g1

0xd418,	// (0x00031c69) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00033dcb) cell_large_graphic_colour_popup_pane_g

0xd420,	// (0x00031c71) cell_large_graphic_colour_popup_pane_g2_copy1

0xd429,	// (0x00031c7a) grid_highlight_pane_cp4

0xd431,	// (0x00031c82) bg_popup_window_pane_cp8_ParamLimits

0xd431,	// (0x00031c82) bg_popup_window_pane_cp8

0xd44c,	// (0x00031c9d) popup_snote_single_text_window_g1_ParamLimits

0xd44c,	// (0x00031c9d) popup_snote_single_text_window_g1

0xd45e,	// (0x00031caf) popup_snote_single_text_window_t1_ParamLimits

0xd45e,	// (0x00031caf) popup_snote_single_text_window_t1

0xd471,	// (0x00031cc2) popup_snote_single_text_window_t2_ParamLimits

0xd471,	// (0x00031cc2) popup_snote_single_text_window_t2

0xd484,	// (0x00031cd5) popup_snote_single_text_window_t3_ParamLimits

0xd484,	// (0x00031cd5) popup_snote_single_text_window_t3

0xd4bd,	// (0x00031d0e) popup_snote_single_text_window_t4_ParamLimits

0xd4bd,	// (0x00031d0e) popup_snote_single_text_window_t4

0xd4f1,	// (0x00031d42) popup_snote_single_text_window_t5_ParamLimits

0xd4f1,	// (0x00031d42) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00033dd0) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00033dd0) popup_snote_single_text_window_t

0xd520,	// (0x00031d71) bg_popup_window_pane_cp9_ParamLimits

0xd520,	// (0x00031d71) bg_popup_window_pane_cp9

0xd44c,	// (0x00031c9d) popup_snote_single_graphic_window_g1_ParamLimits

0xd44c,	// (0x00031c9d) popup_snote_single_graphic_window_g1

0xd52e,	// (0x00031d7f) popup_snote_single_graphic_window_g2_ParamLimits

0xd52e,	// (0x00031d7f) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00033ddb) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00033ddb) popup_snote_single_graphic_window_g

0xd53a,	// (0x00031d8b) popup_snote_single_graphic_window_t1_ParamLimits

0xd53a,	// (0x00031d8b) popup_snote_single_graphic_window_t1

0xd54d,	// (0x00031d9e) popup_snote_single_graphic_window_t2_ParamLimits

0xd54d,	// (0x00031d9e) popup_snote_single_graphic_window_t2

0xd560,	// (0x00031db1) popup_snote_single_graphic_window_t3_ParamLimits

0xd560,	// (0x00031db1) popup_snote_single_graphic_window_t3

0xd599,	// (0x00031dea) popup_snote_single_graphic_window_t4_ParamLimits

0xd599,	// (0x00031dea) popup_snote_single_graphic_window_t4

0xd5cd,	// (0x00031e1e) popup_snote_single_graphic_window_t5_ParamLimits

0xd5cd,	// (0x00031e1e) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00033de0) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00033de0) popup_snote_single_graphic_window_t

0x501d,	// (0x0002986e) grid_graphic_popup_pane_ParamLimits

0x501d,	// (0x0002986e) grid_graphic_popup_pane

0x504b,	// (0x0002989c) listscroll_popup_graphic_pane_g1_ParamLimits

0x504b,	// (0x0002989c) listscroll_popup_graphic_pane_g1

0xc36d,	// (0x00030bbe) listscroll_popup_graphic_pane_g2_ParamLimits

0xc36d,	// (0x00030bbe) listscroll_popup_graphic_pane_g2

0x0001,

0xf984,	// (0x000341d5) listscroll_popup_graphic_pane_g_ParamLimits

0xf984,	// (0x000341d5) listscroll_popup_graphic_pane_g

0x5073,	// (0x000298c4) scroll_pane_cp5

0xc321,	// (0x00030b72) cell_graphic_popup_pane_ParamLimits

0xc321,	// (0x00030b72) cell_graphic_popup_pane

0x4f8d,	// (0x000297de) cell_graphic_popup_pane_g1

0x4f95,	// (0x000297e6) cell_graphic_popup_pane_g2

0xd420,	// (0x00031c71) cell_graphic_popup_pane_g3

0x0002,

0xf97d,	// (0x000341ce) cell_graphic_popup_pane_g

0x4f9e,	// (0x000297ef) cell_graphic_popup_pane_t2

0xd429,	// (0x00031c7a) grid_highlight_pane_cp3

0xd60e,	// (0x00031e5f) list_gen_pane_ParamLimits

0xd60e,	// (0x00031e5f) list_gen_pane

0xd636,	// (0x00031e87) scroll_pane

0xc2d8,	// (0x00030b29) bg_list_pane_g1_ParamLimits

0xc2d8,	// (0x00030b29) bg_list_pane_g1

0x4f02,	// (0x00029753) bg_list_pane_g2_ParamLimits

0x4f02,	// (0x00029753) bg_list_pane_g2

0x4f17,	// (0x00029768) bg_list_pane_g3_ParamLimits

0x4f17,	// (0x00029768) bg_list_pane_g3

0x4f2b,	// (0x0002977c) bg_list_pane_g4_ParamLimits

0x4f2b,	// (0x0002977c) bg_list_pane_g4

0xc2f5,	// (0x00030b46) bg_list_pane_g5_ParamLimits

0xc2f5,	// (0x00030b46) bg_list_pane_g5

0x0004,

0xf972,	// (0x000341c3) bg_list_pane_g_ParamLimits

0xf972,	// (0x000341c3) bg_list_pane_g

0xc29b,	// (0x00030aec) list_double2_graphic_large_graphic_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double2_graphic_large_graphic_pane

0xc29b,	// (0x00030aec) list_double2_graphic_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double2_graphic_pane

0xc29b,	// (0x00030aec) list_double2_large_graphic_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double2_large_graphic_pane

0xc29b,	// (0x00030aec) list_double2_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double2_pane

0xc29b,	// (0x00030aec) list_double_graphic_heading_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double_graphic_heading_pane

0xc29b,	// (0x00030aec) list_double_graphic_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double_graphic_pane

0xc29b,	// (0x00030aec) list_double_heading_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double_heading_pane

0xc29b,	// (0x00030aec) list_double_large_graphic_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double_large_graphic_pane

0xc29b,	// (0x00030aec) list_double_number_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double_number_pane

0xc29b,	// (0x00030aec) list_double_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double_pane

0xc29b,	// (0x00030aec) list_double_time_pane_ParamLimits

0xc29b,	// (0x00030aec) list_double_time_pane

0xc29b,	// (0x00030aec) list_setting_number_pane_ParamLimits

0xc29b,	// (0x00030aec) list_setting_number_pane

0xc29b,	// (0x00030aec) list_setting_pane_ParamLimits

0xc29b,	// (0x00030aec) list_setting_pane

0xa4e3,	// (0x0002ed34) list_single_2graphic_pane_ParamLimits

0xa4e3,	// (0x0002ed34) list_single_2graphic_pane

0xa4e3,	// (0x0002ed34) list_single_graphic_heading_pane_ParamLimits

0xa4e3,	// (0x0002ed34) list_single_graphic_heading_pane

0xa4e3,	// (0x0002ed34) list_single_graphic_pane_ParamLimits

0xa4e3,	// (0x0002ed34) list_single_graphic_pane

0xa4e3,	// (0x0002ed34) list_single_heading_pane_ParamLimits

0xa4e3,	// (0x0002ed34) list_single_heading_pane

0xc29b,	// (0x00030aec) list_single_large_graphic_pane_ParamLimits

0xc29b,	// (0x00030aec) list_single_large_graphic_pane

0xa4e3,	// (0x0002ed34) list_single_number_heading_pane_ParamLimits

0xa4e3,	// (0x0002ed34) list_single_number_heading_pane

0xa4e3,	// (0x0002ed34) list_single_number_pane_ParamLimits

0xa4e3,	// (0x0002ed34) list_single_number_pane

0xa4e3,	// (0x0002ed34) list_single_pane_ParamLimits

0xa4e3,	// (0x0002ed34) list_single_pane

0xa81a,	// (0x0002f06b) list_highlight_pane_cp1

0xeab2,	// (0x00033303) list_single_pane_g1_ParamLimits

0xeab2,	// (0x00033303) list_single_pane_g1

0xeabe,	// (0x0003330f) list_single_pane_g2_ParamLimits

0xeabe,	// (0x0003330f) list_single_pane_g2

0x0001,

0xf5a1,	// (0x00033df2) list_single_pane_g_ParamLimits

0xf5a1,	// (0x00033df2) list_single_pane_g

0xed93,	// (0x000335e4) list_single_pane_t1_ParamLimits

0xed93,	// (0x000335e4) list_single_pane_t1

0xeab2,	// (0x00033303) list_single_number_pane_g1_ParamLimits

0xeab2,	// (0x00033303) list_single_number_pane_g1

0xeabe,	// (0x0003330f) list_single_number_pane_g2_ParamLimits

0xeabe,	// (0x0003330f) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x00033df2) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x00033df2) list_single_number_pane_g

0xecba,	// (0x0003350b) list_single_number_pane_t1_ParamLimits

0xecba,	// (0x0003350b) list_single_number_pane_t1

0xa4a5,	// (0x0002ecf6) list_single_number_pane_t2_ParamLimits

0xa4a5,	// (0x0002ecf6) list_single_number_pane_t2

0x0001,

0xf933,	// (0x00034184) list_single_number_pane_t_ParamLimits

0xf933,	// (0x00034184) list_single_number_pane_t

0x9e69,	// (0x0002e6ba) list_single_graphic_pane_g1_ParamLimits

0x9e69,	// (0x0002e6ba) list_single_graphic_pane_g1

0xeab2,	// (0x00033303) list_single_graphic_pane_g2_ParamLimits

0xeab2,	// (0x00033303) list_single_graphic_pane_g2

0xeabe,	// (0x0003330f) list_single_graphic_pane_g3_ParamLimits

0xeabe,	// (0x0003330f) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00033deb) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00033deb) list_single_graphic_pane_g

0x9e75,	// (0x0002e6c6) list_single_graphic_pane_t1_ParamLimits

0x9e75,	// (0x0002e6c6) list_single_graphic_pane_t1

0xeab2,	// (0x00033303) list_single_heading_pane_g1_ParamLimits

0xeab2,	// (0x00033303) list_single_heading_pane_g1

0xeabe,	// (0x0003330f) list_single_heading_pane_g2_ParamLimits

0xeabe,	// (0x0003330f) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00033df2) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00033df2) list_single_heading_pane_g

0xeaca,	// (0x0003331b) list_single_heading_pane_t1_ParamLimits

0xeaca,	// (0x0003331b) list_single_heading_pane_t1

0x9e8b,	// (0x0002e6dc) list_single_heading_pane_t2_ParamLimits

0x9e8b,	// (0x0002e6dc) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00033df7) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00033df7) list_single_heading_pane_t

0xeab2,	// (0x00033303) list_single_number_heading_pane_g1_ParamLimits

0xeab2,	// (0x00033303) list_single_number_heading_pane_g1

0xeabe,	// (0x0003330f) list_single_number_heading_pane_g2_ParamLimits

0xeabe,	// (0x0003330f) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x00033df2) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x00033df2) list_single_number_heading_pane_g

0xeaca,	// (0x0003331b) list_single_number_heading_pane_t1_ParamLimits

0xeaca,	// (0x0003331b) list_single_number_heading_pane_t1

0x9e9d,	// (0x0002e6ee) list_single_number_heading_pane_t2_ParamLimits

0x9e9d,	// (0x0002e6ee) list_single_number_heading_pane_t2

0x9eaf,	// (0x0002e700) list_single_number_heading_pane_t3_ParamLimits

0x9eaf,	// (0x0002e700) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00033dfc) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00033dfc) list_single_number_heading_pane_t

0xeae0,	// (0x00033331) list_single_graphic_heading_pane_g1_ParamLimits

0xeae0,	// (0x00033331) list_single_graphic_heading_pane_g1

0x9ec1,	// (0x0002e712) list_single_graphic_heading_pane_g4_ParamLimits

0x9ec1,	// (0x0002e712) list_single_graphic_heading_pane_g4

0xeabe,	// (0x0003330f) list_single_graphic_heading_pane_g5_ParamLimits

0xeabe,	// (0x0003330f) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x00033e03) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x00033e03) list_single_graphic_heading_pane_g

0xeaca,	// (0x0003331b) list_single_graphic_heading_pane_t1_ParamLimits

0xeaca,	// (0x0003331b) list_single_graphic_heading_pane_t1

0x9ed2,	// (0x0002e723) list_single_graphic_heading_pane_t2_ParamLimits

0x9ed2,	// (0x0002e723) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00033e0a) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00033e0a) list_single_graphic_heading_pane_t

0xeaec,	// (0x0003333d) list_single_large_graphic_pane_g1_ParamLimits

0xeaec,	// (0x0003333d) list_single_large_graphic_pane_g1

0xeaf8,	// (0x00033349) list_single_large_graphic_pane_g2_ParamLimits

0xeaf8,	// (0x00033349) list_single_large_graphic_pane_g2

0xeb04,	// (0x00033355) list_single_large_graphic_pane_g3_ParamLimits

0xeb04,	// (0x00033355) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x00033e0f) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x00033e0f) list_single_large_graphic_pane_g

0x3eba,	// (0x0002870b) wait_border_pane_g2_copy1

0x9ee4,	// (0x0002e735) list_single_large_graphic_pane_g4_cp2

0xeb10,	// (0x00033361) list_single_large_graphic_pane_t1_ParamLimits

0xeb10,	// (0x00033361) list_single_large_graphic_pane_t1

0x9eec,	// (0x0002e73d) list_double_pane_g1_ParamLimits

0x9eec,	// (0x0002e73d) list_double_pane_g1

0x9ef8,	// (0x0002e749) list_double_pane_g2_ParamLimits

0x9ef8,	// (0x0002e749) list_double_pane_g2

0x0001,

0xf5c5,	// (0x00033e16) list_double_pane_g_ParamLimits

0xf5c5,	// (0x00033e16) list_double_pane_g

0x9f04,	// (0x0002e755) list_double_pane_t1_ParamLimits

0x9f04,	// (0x0002e755) list_double_pane_t1

0x9f1a,	// (0x0002e76b) list_double_pane_t2_ParamLimits

0x9f1a,	// (0x0002e76b) list_double_pane_t2

0x0001,

0xf5ca,	// (0x00033e1b) list_double_pane_t_ParamLimits

0xf5ca,	// (0x00033e1b) list_double_pane_t

0x9f2c,	// (0x0002e77d) list_double2_pane_g1_ParamLimits

0x9f2c,	// (0x0002e77d) list_double2_pane_g1

0x9f3d,	// (0x0002e78e) list_double2_pane_g2_ParamLimits

0x9f3d,	// (0x0002e78e) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x00033e20) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x00033e20) list_double2_pane_g

0x9f49,	// (0x0002e79a) list_double2_pane_t1_ParamLimits

0x9f49,	// (0x0002e79a) list_double2_pane_t1

0x9f5f,	// (0x0002e7b0) list_double2_pane_t2_ParamLimits

0x9f5f,	// (0x0002e7b0) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x00033e25) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x00033e25) list_double2_pane_t

0x9eec,	// (0x0002e73d) list_double_number_pane_g1_ParamLimits

0x9eec,	// (0x0002e73d) list_double_number_pane_g1

0x9ef8,	// (0x0002e749) list_double_number_pane_g2_ParamLimits

0x9ef8,	// (0x0002e749) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x00033e16) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x00033e16) list_double_number_pane_g

0x9f71,	// (0x0002e7c2) list_double_number_pane_t1_ParamLimits

0x9f71,	// (0x0002e7c2) list_double_number_pane_t1

0x9f83,	// (0x0002e7d4) list_double_number_pane_t2_ParamLimits

0x9f83,	// (0x0002e7d4) list_double_number_pane_t2

0x9f99,	// (0x0002e7ea) list_double_number_pane_t3_ParamLimits

0x9f99,	// (0x0002e7ea) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x00033e2a) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x00033e2a) list_double_number_pane_t

0x9fab,	// (0x0002e7fc) list_double_graphic_pane_g1_ParamLimits

0x9fab,	// (0x0002e7fc) list_double_graphic_pane_g1

0x9fb7,	// (0x0002e808) list_double_graphic_pane_g2_ParamLimits

0x9fb7,	// (0x0002e808) list_double_graphic_pane_g2

0x9fc6,	// (0x0002e817) list_double_graphic_pane_g3_ParamLimits

0x9fc6,	// (0x0002e817) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x00033e31) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x00033e31) list_double_graphic_pane_g

0x9fde,	// (0x0002e82f) list_double_graphic_pane_t1_ParamLimits

0x9fde,	// (0x0002e82f) list_double_graphic_pane_t1

0x9ff4,	// (0x0002e845) list_double_graphic_pane_t2_ParamLimits

0x9ff4,	// (0x0002e845) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x00033e3a) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x00033e3a) list_double_graphic_pane_t

0xa006,	// (0x0002e857) list_double2_graphic_pane_g1_ParamLimits

0xa006,	// (0x0002e857) list_double2_graphic_pane_g1

0xa012,	// (0x0002e863) list_double2_graphic_pane_g2_ParamLimits

0xa012,	// (0x0002e863) list_double2_graphic_pane_g2

0xa01e,	// (0x0002e86f) list_double2_graphic_pane_g3_ParamLimits

0xa01e,	// (0x0002e86f) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x00033e3f) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x00033e3f) list_double2_graphic_pane_g

0xa02a,	// (0x0002e87b) list_double2_graphic_pane_t1_ParamLimits

0xa02a,	// (0x0002e87b) list_double2_graphic_pane_t1

0xa040,	// (0x0002e891) list_double2_graphic_pane_t2_ParamLimits

0xa040,	// (0x0002e891) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x00033e46) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x00033e46) list_double2_graphic_pane_t

0xa052,	// (0x0002e8a3) list_double_large_graphic_pane_g1_ParamLimits

0xa052,	// (0x0002e8a3) list_double_large_graphic_pane_g1

0xa071,	// (0x0002e8c2) list_double_large_graphic_pane_g2_ParamLimits

0xa071,	// (0x0002e8c2) list_double_large_graphic_pane_g2

0x9ef8,	// (0x0002e749) list_double_large_graphic_pane_g3_ParamLimits

0x9ef8,	// (0x0002e749) list_double_large_graphic_pane_g3

0xa082,	// (0x0002e8d3) list_double_large_graphic_pane_g4_ParamLimits

0xa082,	// (0x0002e8d3) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x00033e4b) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x00033e4b) list_double_large_graphic_pane_g

0xa095,	// (0x0002e8e6) list_double_large_graphic_pane_t1_ParamLimits

0xa095,	// (0x0002e8e6) list_double_large_graphic_pane_t1

0xa0ae,	// (0x0002e8ff) list_double_large_graphic_pane_t2_ParamLimits

0xa0ae,	// (0x0002e8ff) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x00033e56) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x00033e56) list_double_large_graphic_pane_t

0xa0c0,	// (0x0002e911) list_double2_large_graphic_pane_g1_ParamLimits

0xa0c0,	// (0x0002e911) list_double2_large_graphic_pane_g1

0x9f2c,	// (0x0002e77d) list_double2_large_graphic_pane_g2_ParamLimits

0x9f2c,	// (0x0002e77d) list_double2_large_graphic_pane_g2

0x9f3d,	// (0x0002e78e) list_double2_large_graphic_pane_g3_ParamLimits

0x9f3d,	// (0x0002e78e) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x00033e5b) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x00033e5b) list_double2_large_graphic_pane_g

0xa0cc,	// (0x0002e91d) list_double2_large_graphic_pane_t1_ParamLimits

0xa0cc,	// (0x0002e91d) list_double2_large_graphic_pane_t1

0xa0e2,	// (0x0002e933) list_double2_large_graphic_pane_t2_ParamLimits

0xa0e2,	// (0x0002e933) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x00033e62) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x00033e62) list_double2_large_graphic_pane_t

0xa0f4,	// (0x0002e945) list_double_heading_pane_g1_ParamLimits

0xa0f4,	// (0x0002e945) list_double_heading_pane_g1

0xa105,	// (0x0002e956) list_double_heading_pane_g2_ParamLimits

0xa105,	// (0x0002e956) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x00033e67) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x00033e67) list_double_heading_pane_g

0xa111,	// (0x0002e962) list_double_heading_pane_t1_ParamLimits

0xa111,	// (0x0002e962) list_double_heading_pane_t1

0x9f5f,	// (0x0002e7b0) list_double_heading_pane_t2_ParamLimits

0x9f5f,	// (0x0002e7b0) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x00033e6c) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x00033e6c) list_double_heading_pane_t

0xa127,	// (0x0002e978) list_double_graphic_heading_pane_g1_ParamLimits

0xa127,	// (0x0002e978) list_double_graphic_heading_pane_g1

0xa0f4,	// (0x0002e945) list_double_graphic_heading_pane_g2_ParamLimits

0xa0f4,	// (0x0002e945) list_double_graphic_heading_pane_g2

0xa105,	// (0x0002e956) list_double_graphic_heading_pane_g3_ParamLimits

0xa105,	// (0x0002e956) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x00033e71) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x00033e71) list_double_graphic_heading_pane_g

0xa133,	// (0x0002e984) list_double_graphic_heading_pane_t1_ParamLimits

0xa133,	// (0x0002e984) list_double_graphic_heading_pane_t1

0xa040,	// (0x0002e891) list_double_graphic_heading_pane_t2_ParamLimits

0xa040,	// (0x0002e891) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x00033e78) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x00033e78) list_double_graphic_heading_pane_t

0xa071,	// (0x0002e8c2) list_double_time_pane_g1_ParamLimits

0xa071,	// (0x0002e8c2) list_double_time_pane_g1

0x9ef8,	// (0x0002e749) list_double_time_pane_g2_ParamLimits

0x9ef8,	// (0x0002e749) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x00033e7d) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x00033e7d) list_double_time_pane_g

0xa149,	// (0x0002e99a) list_double_time_pane_t1_ParamLimits

0xa149,	// (0x0002e99a) list_double_time_pane_t1

0xa15f,	// (0x0002e9b0) list_double_time_pane_t2_ParamLimits

0xa15f,	// (0x0002e9b0) list_double_time_pane_t2

0xa171,	// (0x0002e9c2) list_double_time_pane_t3_ParamLimits

0xa171,	// (0x0002e9c2) list_double_time_pane_t3

0xa183,	// (0x0002e9d4) list_double_time_pane_t4_ParamLimits

0xa183,	// (0x0002e9d4) list_double_time_pane_t4

0x0003,

0xf631,	// (0x00033e82) list_double_time_pane_t_ParamLimits

0xf631,	// (0x00033e82) list_double_time_pane_t

0xa195,	// (0x0002e9e6) list_setting_pane_g1_ParamLimits

0xa195,	// (0x0002e9e6) list_setting_pane_g1

0xa1a1,	// (0x0002e9f2) list_setting_pane_g2_ParamLimits

0xa1a1,	// (0x0002e9f2) list_setting_pane_g2

0x0001,

0xf63a,	// (0x00033e8b) list_setting_pane_g_ParamLimits

0xf63a,	// (0x00033e8b) list_setting_pane_g

0xa1ad,	// (0x0002e9fe) list_setting_pane_t1_ParamLimits

0xa1ad,	// (0x0002e9fe) list_setting_pane_t1

0xa1c7,	// (0x0002ea18) list_setting_pane_t2_ParamLimits

0xa1c7,	// (0x0002ea18) list_setting_pane_t2

0x0002,

0xf63f,	// (0x00033e90) list_setting_pane_t_ParamLimits

0xf63f,	// (0x00033e90) list_setting_pane_t

0xa206,	// (0x0002ea57) set_value_pane_cp_ParamLimits

0xa206,	// (0x0002ea57) set_value_pane_cp

0xa214,	// (0x0002ea65) list_setting_number_pane_g1_ParamLimits

0xa214,	// (0x0002ea65) list_setting_number_pane_g1

0xa220,	// (0x0002ea71) list_setting_number_pane_g2_ParamLimits

0xa220,	// (0x0002ea71) list_setting_number_pane_g2

0x0001,

0xf646,	// (0x00033e97) list_setting_number_pane_g_ParamLimits

0xf646,	// (0x00033e97) list_setting_number_pane_g

0xa22c,	// (0x0002ea7d) list_setting_number_pane_t1_ParamLimits

0xa22c,	// (0x0002ea7d) list_setting_number_pane_t1

0xa245,	// (0x0002ea96) list_setting_number_pane_t2_ParamLimits

0xa245,	// (0x0002ea96) list_setting_number_pane_t2

0xa25f,	// (0x0002eab0) list_setting_number_pane_t3_ParamLimits

0xa25f,	// (0x0002eab0) list_setting_number_pane_t3

0x0003,

0xf64b,	// (0x00033e9c) list_setting_number_pane_t_ParamLimits

0xf64b,	// (0x00033e9c) list_setting_number_pane_t

0xa206,	// (0x0002ea57) set_value_pane_ParamLimits

0xa206,	// (0x0002ea57) set_value_pane

0xd66a,	// (0x00031ebb) bg_set_opt_pane_ParamLimits

0xd66a,	// (0x00031ebb) bg_set_opt_pane

0xeb3b,	// (0x0003338c) set_value_pane_t1

0xd68b,	// (0x00031edc) slider_set_pane_cp3

0xd694,	// (0x00031ee5) volume_small_pane_cp

0xd69d,	// (0x00031eee) list_form_gen_pane

0xd6a6,	// (0x00031ef7) scroll_pane_cp8

0xa2a2,	// (0x0002eaf3) form_field_data_pane_ParamLimits

0xa2a2,	// (0x0002eaf3) form_field_data_pane

0xa2bd,	// (0x0002eb0e) form_field_data_wide_pane_ParamLimits

0xa2bd,	// (0x0002eb0e) form_field_data_wide_pane

0xeb59,	// (0x000333aa) form_field_popup_pane_ParamLimits

0xeb59,	// (0x000333aa) form_field_popup_pane

0xa2df,	// (0x0002eb30) form_field_popup_wide_pane_ParamLimits

0xa2df,	// (0x0002eb30) form_field_popup_wide_pane

0xeb7b,	// (0x000333cc) form_field_slider_pane_ParamLimits

0xeb7b,	// (0x000333cc) form_field_slider_pane

0xeb8e,	// (0x000333df) form_field_slider_wide_pane_ParamLimits

0xeb8e,	// (0x000333df) form_field_slider_wide_pane

0xd6b7,	// (0x00031f08) data_form_pane

0xa30a,	// (0x0002eb5b) form_field_data_pane_t1

0xd6c3,	// (0x00031f14) input_focus_pane

0xeba1,	// (0x000333f2) data_form_wide_pane

0xebbe,	// (0x0003340f) form_field_data_wide_pane_t1

0xd43e,	// (0x00031c8f) input_focus_pane_cp6

0xa324,	// (0x0002eb75) form_field_popup_pane_t1

0xd6c3,	// (0x00031f14) input_focus_pane_cp7

0xd6f1,	// (0x00031f42) list_form_pane

0xebe8,	// (0x00033439) form_field_popup_wide_pane_t1

0xd6c3,	// (0x00031f14) input_focus_pane_cp8

0xd6fd,	// (0x00031f4e) list_form_wide_pane

0xa346,	// (0x0002eb97) form_field_slider_pane_t1_ParamLimits

0xa346,	// (0x0002eb97) form_field_slider_pane_t1

0xa35e,	// (0x0002ebaf) form_field_slider_pane_t2_ParamLimits

0xa35e,	// (0x0002ebaf) form_field_slider_pane_t2

0x0001,

0xf65b,	// (0x00033eac) form_field_slider_pane_t_ParamLimits

0xf65b,	// (0x00033eac) form_field_slider_pane_t

0xaa65,	// (0x0002f2b6) input_focus_pane_cp9_ParamLimits

0xaa65,	// (0x0002f2b6) input_focus_pane_cp9

0xa373,	// (0x0002ebc4) slider_cont_pane_ParamLimits

0xa373,	// (0x0002ebc4) slider_cont_pane

0xd709,	// (0x00031f5a) form_field_slider_wide_pane_t1_ParamLimits

0xd709,	// (0x00031f5a) form_field_slider_wide_pane_t1

0xebfd,	// (0x0003344e) form_field_slider_wide_pane_t2_ParamLimits

0xebfd,	// (0x0003344e) form_field_slider_wide_pane_t2

0x0001,

0xf660,	// (0x00033eb1) form_field_slider_wide_pane_t_ParamLimits

0xf660,	// (0x00033eb1) form_field_slider_wide_pane_t

0xaa65,	// (0x0002f2b6) input_focus_pane_cp10_ParamLimits

0xaa65,	// (0x0002f2b6) input_focus_pane_cp10

0xa387,	// (0x0002ebd8) slider_cont_pane_cp1_ParamLimits

0xa387,	// (0x0002ebd8) slider_cont_pane_cp1

0xa39b,	// (0x0002ebec) slider_form_pane_cp

0xd71b,	// (0x00031f6c) input_focus_pane_g1

0xd723,	// (0x00031f74) input_focus_pane_g2

0xd72b,	// (0x00031f7c) input_focus_pane_g3

0xd733,	// (0x00031f84) input_focus_pane_g4

0xd73b,	// (0x00031f8c) input_focus_pane_g5

0xd743,	// (0x00031f94) input_focus_pane_g6

0xd74b,	// (0x00031f9c) input_focus_pane_g7

0xd753,	// (0x00031fa4) input_focus_pane_g8

0xd75b,	// (0x00031fac) input_focus_pane_g9

0xa76c,	// (0x0002efbd) input_focus_pane_g10

0x0009,

0xf665,	// (0x00033eb6) input_focus_pane_g

0x3ec3,	// (0x00028714) wait_border_pane_g3_copy1

0xa3a3,	// (0x0002ebf4) data_form_pane_t1

0xa76c,	// (0x0002efbd) wait_anim_pane_g1_copy1

0xa4b7,	// (0x0002ed08) data_form_wide_pane_t1

0xec0f,	// (0x00033460) list_form_graphic_pane_cp_ParamLimits

0xec0f,	// (0x00033460) list_form_graphic_pane_cp

0x4e0a,	// (0x0002965b) slider_form_pane_g1

0x4e13,	// (0x00029664) slider_form_pane_g2

0x0006,

0xf963,	// (0x000341b4) slider_form_pane_g

0xec0f,	// (0x00033460) list_form_graphic_pane_ParamLimits

0xec0f,	// (0x00033460) list_form_graphic_pane

0xec21,	// (0x00033472) list_form_graphic_pane_g1

0xec29,	// (0x0003347a) list_form_graphic_pane_t1_ParamLimits

0xec29,	// (0x0003347a) list_form_graphic_pane_t1

0xaaa7,	// (0x0002f2f8) list_highlight_pane_cp5_ParamLimits

0xaaa7,	// (0x0002f2f8) list_highlight_pane_cp5

0xa3bd,	// (0x0002ec0e) find_pane_g1

0x02e3,	// (0x00024b34) input_find_pane

0xa3c6,	// (0x0002ec17) input_find_pane_g1_ParamLimits

0xa3c6,	// (0x0002ec17) input_find_pane_g1

0xa3d2,	// (0x0002ec23) input_find_pane_t1_ParamLimits

0xa3d2,	// (0x0002ec23) input_find_pane_t1

0xa3e7,	// (0x0002ec38) input_find_pane_t2_ParamLimits

0xa3e7,	// (0x0002ec38) input_find_pane_t2

0x0001,

0xf67a,	// (0x00033ecb) input_find_pane_t_ParamLimits

0xf67a,	// (0x00033ecb) input_find_pane_t

0x02ec,	// (0x00024b3d) input_focus_pane_cp5_ParamLimits

0x02ec,	// (0x00024b3d) input_focus_pane_cp5

0x030b,	// (0x00024b5c) bg_popup_window_pane_cp2_ParamLimits

0x030b,	// (0x00024b5c) bg_popup_window_pane_cp2

0x0318,	// (0x00024b69) listscroll_menu_pane_ParamLimits

0x0318,	// (0x00024b69) listscroll_menu_pane

0xadae,	// (0x0002f5ff) popup_submenu_window_ParamLimits

0xadae,	// (0x0002f5ff) popup_submenu_window

0x0354,	// (0x00024ba5) find_popup_pane_g1

0x035c,	// (0x00024bad) input_popup_find_pane_cp

0x0366,	// (0x00024bb7) input_focus_pane_cp4_ParamLimits

0x0366,	// (0x00024bb7) input_focus_pane_cp4

0x0382,	// (0x00024bd3) input_popup_find_pane_t1_ParamLimits

0x0382,	// (0x00024bd3) input_popup_find_pane_t1

0xa81a,	// (0x0002f06b) bg_popup_sub_pane_cp

0x03b0,	// (0x00024c01) listscroll_popup_sub_pane

0x03b8,	// (0x00024c09) list_submenu_pane_ParamLimits

0x03b8,	// (0x00024c09) list_submenu_pane

0x03c9,	// (0x00024c1a) scroll_pane_cp4

0x03d1,	// (0x00024c22) list_single_popup_submenu_pane_ParamLimits

0x03d1,	// (0x00024c22) list_single_popup_submenu_pane

0x03e6,	// (0x00024c37) list_single_popup_submenu_pane_g1

0x03ee,	// (0x00024c3f) list_single_popup_submenu_pane_t1_ParamLimits

0x03ee,	// (0x00024c3f) list_single_popup_submenu_pane_t1

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp1_ParamLimits

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp1

0xadec,	// (0x0002f63d) tabs_2_active_pane_g1

0xadf4,	// (0x0002f645) tabs_2_active_pane_t1

0xaa65,	// (0x0002f2b6) bg_passive_tab_pane_cp1_ParamLimits

0xaa65,	// (0x0002f2b6) bg_passive_tab_pane_cp1

0xadec,	// (0x0002f63d) tabs_2_passive_pane_g1

0xadf4,	// (0x0002f645) tabs_2_passive_pane_t1

0xaaa7,	// (0x0002f2f8) bg_active_tab_pane_cp4

0xae06,	// (0x0002f657) tabs_2_long_active_pane_t1

0x3397,	// (0x00027be8) bg_passive_tab_pane_cp4

0x17e7,	// (0x00026038) list_single_midp_graphic_pane_g4_ParamLimits

0xaaa7,	// (0x0002f2f8) bg_active_tab_pane_cp5

0xae19,	// (0x0002f66a) tabs_3_long_active_pane_t1

0x3397,	// (0x00027be8) bg_passive_tab_pane_cp5

0x17e7,	// (0x00026038) list_single_midp_graphic_pane_g4

0xaaa7,	// (0x0002f2f8) bg_popup_window_pane_cp13_ParamLimits

0xaaa7,	// (0x0002f2f8) bg_popup_window_pane_cp13

0x0465,	// (0x00024cb6) listscroll_popup_fast_pane_ParamLimits

0x0465,	// (0x00024cb6) listscroll_popup_fast_pane

0x0474,	// (0x00024cc5) grid_popup_fast_pane_ParamLimits

0x0474,	// (0x00024cc5) grid_popup_fast_pane

0x0486,	// (0x00024cd7) scroll_pane_cp9_ParamLimits

0x0486,	// (0x00024cd7) scroll_pane_cp9

0x6792,	// (0x0002afe3) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6792,	// (0x0002afe3) list_single_graphic_hl_pane_t1_cp2

0x04aa,	// (0x00024cfb) input_focus_pane_cp20_ParamLimits

0x04aa,	// (0x00024cfb) input_focus_pane_cp20

0x04b8,	// (0x00024d09) query_popup_data_pane_t1_ParamLimits

0x04b8,	// (0x00024d09) query_popup_data_pane_t1

0x04cb,	// (0x00024d1c) query_popup_data_pane_t2_ParamLimits

0x04cb,	// (0x00024d1c) query_popup_data_pane_t2

0x0511,	// (0x00024d62) query_popup_data_pane_t3_ParamLimits

0x0511,	// (0x00024d62) query_popup_data_pane_t3

0x0552,	// (0x00024da3) query_popup_data_pane_t4_ParamLimits

0x0552,	// (0x00024da3) query_popup_data_pane_t4

0x058e,	// (0x00024ddf) query_popup_data_pane_t5_ParamLimits

0x058e,	// (0x00024ddf) query_popup_data_pane_t5

0x0004,

0xf67f,	// (0x00033ed0) query_popup_data_pane_t_ParamLimits

0xf67f,	// (0x00033ed0) query_popup_data_pane_t

0xd71b,	// (0x00031f6c) bg_set_opt_pane_g1

0xd723,	// (0x00031f74) bg_set_opt_pane_g2

0xd72b,	// (0x00031f7c) bg_set_opt_pane_g3

0xd733,	// (0x00031f84) bg_set_opt_pane_g4

0xd73b,	// (0x00031f8c) bg_set_opt_pane_g5

0xd743,	// (0x00031f94) bg_set_opt_pane_g6

0xd74b,	// (0x00031f9c) bg_set_opt_pane_g7

0xd753,	// (0x00031fa4) bg_set_opt_pane_g8

0xd75b,	// (0x00031fac) bg_set_opt_pane_g9

0x0008,

0xf68a,	// (0x00033edb) bg_set_opt_pane_g

0x0e24,	// (0x00025675) control_top_pane_stacon_ParamLimits

0x0e24,	// (0x00025675) control_top_pane_stacon

0x0e77,	// (0x000256c8) signal_pane_stacon_ParamLimits

0x0e77,	// (0x000256c8) signal_pane_stacon

0x2ced,	// (0x0002753e) stacon_top_pane_g1_ParamLimits

0x2ced,	// (0x0002753e) stacon_top_pane_g1

0x0e9c,	// (0x000256ed) title_pane_stacon_ParamLimits

0x0e9c,	// (0x000256ed) title_pane_stacon

0x0ec6,	// (0x00025717) uni_indicator_pane_stacon_ParamLimits

0x0ec6,	// (0x00025717) uni_indicator_pane_stacon

0x0edb,	// (0x0002572c) battery_pane_stacon_ParamLimits

0x0edb,	// (0x0002572c) battery_pane_stacon

0x0f1f,	// (0x00025770) control_bottom_pane_stacon_ParamLimits

0x0f1f,	// (0x00025770) control_bottom_pane_stacon

0x0f42,	// (0x00025793) navi_pane_stacon_ParamLimits

0x0f42,	// (0x00025793) navi_pane_stacon

0x2d0f,	// (0x00027560) stacon_bottom_pane_g1_ParamLimits

0x2d0f,	// (0x00027560) stacon_bottom_pane_g1

0x05c5,	// (0x00024e16) aid_levels_signal_lsc_ParamLimits

0x05c5,	// (0x00024e16) aid_levels_signal_lsc

0x05dc,	// (0x00024e2d) signal_pane_stacon_g1_ParamLimits

0x05dc,	// (0x00024e2d) signal_pane_stacon_g1

0x05f0,	// (0x00024e41) signal_pane_stacon_g2_ParamLimits

0x05f0,	// (0x00024e41) signal_pane_stacon_g2

0x0001,

0xf69d,	// (0x00033eee) signal_pane_stacon_g_ParamLimits

0xf69d,	// (0x00033eee) signal_pane_stacon_g

0x0632,	// (0x00024e83) title_pane_stacon_t1_ParamLimits

0x0632,	// (0x00024e83) title_pane_stacon_t1

0x0657,	// (0x00024ea8) uni_indicator_pane_stacon_g1

0x0661,	// (0x00024eb2) uni_indicator_pane_stacon_g2

0x066b,	// (0x00024ebc) uni_indicator_pane_stacon_g3

0x0675,	// (0x00024ec6) uni_indicator_pane_stacon_g4

0x0003,

0xf6a9,	// (0x00033efa) uni_indicator_pane_stacon_g

0x067f,	// (0x00024ed0) control_top_pane_stacon_g1

0x0687,	// (0x00024ed8) control_top_pane_stacon_t1_ParamLimits

0x0687,	// (0x00024ed8) control_top_pane_stacon_t1

0x06be,	// (0x00024f0f) aid_levels_battery_lsc_ParamLimits

0x06be,	// (0x00024f0f) aid_levels_battery_lsc

0x06d6,	// (0x00024f27) battery_pane_stacon_g1_ParamLimits

0x06d6,	// (0x00024f27) battery_pane_stacon_g1

0x06e8,	// (0x00024f39) battery_pane_stacon_g2_ParamLimits

0x06e8,	// (0x00024f39) battery_pane_stacon_g2

0x0001,

0xf6b2,	// (0x00033f03) battery_pane_stacon_g_ParamLimits

0xf6b2,	// (0x00033f03) battery_pane_stacon_g

0x0726,	// (0x00024f77) navi_icon_pane_stacon

0x073a,	// (0x00024f8b) navi_navi_pane_stacon

0x0726,	// (0x00024f77) navi_text_pane_stacon

0x0750,	// (0x00024fa1) control_bottom_pane_stacon_g1

0x0758,	// (0x00024fa9) control_bottom_pane_stacon_t1_ParamLimits

0x0758,	// (0x00024fa9) control_bottom_pane_stacon_t1

0xae2b,	// (0x0002f67c) grid_app_pane_ParamLimits

0xae2b,	// (0x0002f67c) grid_app_pane

0xae63,	// (0x0002f6b4) scroll_pane_cp15_ParamLimits

0xae63,	// (0x0002f6b4) scroll_pane_cp15

0xae78,	// (0x0002f6c9) cell_app_pane_ParamLimits

0xae78,	// (0x0002f6c9) cell_app_pane

0xaec3,	// (0x0002f714) cell_app_pane_g1_ParamLimits

0xaec3,	// (0x0002f714) cell_app_pane_g1

0x082e,	// (0x0002507f) cell_app_pane_g2_ParamLimits

0x082e,	// (0x0002507f) cell_app_pane_g2

0x0001,

0xf6b7,	// (0x00033f08) cell_app_pane_g_ParamLimits

0xf6b7,	// (0x00033f08) cell_app_pane_g

0xaee7,	// (0x0002f738) cell_app_pane_t1_ParamLimits

0xaee7,	// (0x0002f738) cell_app_pane_t1

0x086b,	// (0x000250bc) grid_highlight_pane_ParamLimits

0x086b,	// (0x000250bc) grid_highlight_pane

0xd71b,	// (0x00031f6c) cell_highlight_pane_g1

0xd723,	// (0x00031f74) cell_highlight_pane_g2

0xd72b,	// (0x00031f7c) cell_highlight_pane_g3

0xd733,	// (0x00031f84) cell_highlight_pane_g4

0xd73b,	// (0x00031f8c) cell_highlight_pane_g5

0xd743,	// (0x00031f94) cell_highlight_pane_g6

0xd74b,	// (0x00031f9c) cell_highlight_pane_g7

0xd753,	// (0x00031fa4) cell_highlight_pane_g8

0xd75b,	// (0x00031fac) cell_highlight_pane_g9

0xa76c,	// (0x0002efbd) cell_highlight_pane_g10

0x0009,

0xf665,	// (0x00033eb6) cell_highlight_pane_g

0x088f,	// (0x000250e0) bg_scroll_pane

0x08ae,	// (0x000250ff) scroll_handle_pane

0x08ff,	// (0x00025150) scroll_bg_pane_g1

0x0914,	// (0x00025165) scroll_bg_pane_g2

0x092c,	// (0x0002517d) scroll_bg_pane_g3

0x0002,

0xf6bc,	// (0x00033f0d) scroll_bg_pane_g

0x0941,	// (0x00025192) scroll_handle_focus_pane_ParamLimits

0x0941,	// (0x00025192) scroll_handle_focus_pane

0x08ff,	// (0x00025150) scroll_handle_pane_g1

0x094e,	// (0x0002519f) scroll_handle_pane_g2

0x092c,	// (0x0002517d) scroll_handle_pane_g3

0x0002,

0xf6c3,	// (0x00033f14) scroll_handle_pane_g

0x0366,	// (0x00024bb7) bg_popup_sub_pane_cp21_ParamLimits

0x0366,	// (0x00024bb7) bg_popup_sub_pane_cp21

0x0962,	// (0x000251b3) popup_fep_japan_predictive_window_t1_ParamLimits

0x0962,	// (0x000251b3) popup_fep_japan_predictive_window_t1

0x0979,	// (0x000251ca) popup_fep_japan_predictive_window_t2_ParamLimits

0x0979,	// (0x000251ca) popup_fep_japan_predictive_window_t2

0x09ac,	// (0x000251fd) popup_fep_japan_predictive_window_t3_ParamLimits

0x09ac,	// (0x000251fd) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ca,	// (0x00033f1b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ca,	// (0x00033f1b) popup_fep_japan_predictive_window_t

0xa81a,	// (0x0002f06b) bg_popup_sub_pane_cp23

0x09e3,	// (0x00025234) listscroll_japin_cand_pane

0x09eb,	// (0x0002523c) popup_fep_japan_candidate_window_t1

0x09f9,	// (0x0002524a) candidate_pane_ParamLimits

0x09f9,	// (0x0002524a) candidate_pane

0x0a0b,	// (0x0002525c) scroll_pane_cp30

0x0a15,	// (0x00025266) list_single_popup_jap_candidate_pane_ParamLimits

0x0a15,	// (0x00025266) list_single_popup_jap_candidate_pane

0xa81a,	// (0x0002f06b) list_highlight_pane_cp30

0x0a29,	// (0x0002527a) list_single_popup_jap_candidate_pane_t1

0xaf21,	// (0x0002f772) level_1_signal

0xaf33,	// (0x0002f784) level_2_signal

0xaf46,	// (0x0002f797) level_3_signal

0xaf59,	// (0x0002f7aa) level_4_signal

0xaf6c,	// (0x0002f7bd) level_5_signal

0xaf7f,	// (0x0002f7d0) level_6_signal

0xaf92,	// (0x0002f7e3) level_7_signal

0xaf21,	// (0x0002f772) level_1_battery

0xaf33,	// (0x0002f784) level_2_battery

0xaf46,	// (0x0002f797) level_3_battery

0xaf59,	// (0x0002f7aa) level_4_battery

0xaf6c,	// (0x0002f7bd) level_5_battery

0xaf7f,	// (0x0002f7d0) level_6_battery

0xaf92,	// (0x0002f7e3) level_7_battery

0x0aca,	// (0x0002531b) list_menu_pane_ParamLimits

0x0aca,	// (0x0002531b) list_menu_pane

0x0ae0,	// (0x00025331) scroll_pane_cp25_ParamLimits

0x0ae0,	// (0x00025331) scroll_pane_cp25

0x0af9,	// (0x0002534a) list_double2_graphic_pane_cp2_ParamLimits

0x0af9,	// (0x0002534a) list_double2_graphic_pane_cp2

0x0af9,	// (0x0002534a) list_double2_large_graphic_pane_cp2_ParamLimits

0x0af9,	// (0x0002534a) list_double2_large_graphic_pane_cp2

0x0af9,	// (0x0002534a) list_double2_pane_cp2_ParamLimits

0x0af9,	// (0x0002534a) list_double2_pane_cp2

0x0af9,	// (0x0002534a) list_double_graphic_pane_cp2_ParamLimits

0x0af9,	// (0x0002534a) list_double_graphic_pane_cp2

0x0af9,	// (0x0002534a) list_double_large_graphic_pane_cp2_ParamLimits

0x0af9,	// (0x0002534a) list_double_large_graphic_pane_cp2

0x0af9,	// (0x0002534a) list_double_number_pane_cp2_ParamLimits

0x0af9,	// (0x0002534a) list_double_number_pane_cp2

0x0af9,	// (0x0002534a) list_double_pane_cp2_ParamLimits

0x0af9,	// (0x0002534a) list_double_pane_cp2

0xafa5,	// (0x0002f7f6) list_single_2graphic_pane_cp2_ParamLimits

0xafa5,	// (0x0002f7f6) list_single_2graphic_pane_cp2

0xafa5,	// (0x0002f7f6) list_single_graphic_heading_pane_cp2_ParamLimits

0xafa5,	// (0x0002f7f6) list_single_graphic_heading_pane_cp2

0xafa5,	// (0x0002f7f6) list_single_graphic_pane_cp2_ParamLimits

0xafa5,	// (0x0002f7f6) list_single_graphic_pane_cp2

0xafa5,	// (0x0002f7f6) list_single_heading_pane_cp2_ParamLimits

0xafa5,	// (0x0002f7f6) list_single_heading_pane_cp2

0x0b3c,	// (0x0002538d) list_single_large_graphic_pane_cp2_ParamLimits

0x0b3c,	// (0x0002538d) list_single_large_graphic_pane_cp2

0xafa5,	// (0x0002f7f6) list_single_number_heading_pane_cp2_ParamLimits

0xafa5,	// (0x0002f7f6) list_single_number_heading_pane_cp2

0xafa5,	// (0x0002f7f6) list_single_number_pane_cp2_ParamLimits

0xafa5,	// (0x0002f7f6) list_single_number_pane_cp2

0xafb9,	// (0x0002f80a) list_single_pane_cp2_ParamLimits

0xafb9,	// (0x0002f80a) list_single_pane_cp2

0x0c22,	// (0x00025473) bg_popup_sub_pane_cp22

0x0c47,	// (0x00025498) popup_side_volume_key_window_g1

0x0c71,	// (0x000254c2) popup_side_volume_key_window_t1

0x0c8f,	// (0x000254e0) volume_small_pane_cp1

0xaa65,	// (0x0002f2b6) bg_popup_sub_pane_cp24_ParamLimits

0xaa65,	// (0x0002f2b6) bg_popup_sub_pane_cp24

0x0c97,	// (0x000254e8) fep_china_uni_candidate_pane_ParamLimits

0x0c97,	// (0x000254e8) fep_china_uni_candidate_pane

0x0cab,	// (0x000254fc) fep_china_uni_entry_pane

0x0cbb,	// (0x0002550c) popup_fep_china_uni_window_g1

0x0cd7,	// (0x00025528) fep_china_uni_entry_pane_g1

0x0ce1,	// (0x00025532) fep_china_uni_entry_pane_g2

0x0001,

0xf6fb,	// (0x00033f4c) fep_china_uni_entry_pane_g

0x0ceb,	// (0x0002553c) fep_entry_item_pane

0x0cf5,	// (0x00025546) fep_candidate_item_pane

0x0cfd,	// (0x0002554e) fep_china_uni_candidate_pane_g1

0x0d07,	// (0x00025558) fep_china_uni_candidate_pane_g2

0x0d0f,	// (0x00025560) fep_china_uni_candidate_pane_g3

0x0d17,	// (0x00025568) fep_china_uni_candidate_pane_g4

0x0003,

0xf700,	// (0x00033f51) fep_china_uni_candidate_pane_g

0xa76c,	// (0x0002efbd) fep_entry_item_pane_g1

0x0d21,	// (0x00025572) fep_entry_item_pane_t1_ParamLimits

0x0d21,	// (0x00025572) fep_entry_item_pane_t1

0x0d37,	// (0x00025588) fep_candidate_item_pane_t1_ParamLimits

0x0d37,	// (0x00025588) fep_candidate_item_pane_t1

0x0d4c,	// (0x0002559d) fep_candidate_item_pane_t2_ParamLimits

0x0d4c,	// (0x0002559d) fep_candidate_item_pane_t2

0x0001,

0xf709,	// (0x00033f5a) fep_candidate_item_pane_t_ParamLimits

0xf709,	// (0x00033f5a) fep_candidate_item_pane_t

0xaaa7,	// (0x0002f2f8) list_highlight_pane_cp31_ParamLimits

0xaaa7,	// (0x0002f2f8) list_highlight_pane_cp31

0x0d5e,	// (0x000255af) level_1_signal_lsc

0x0d67,	// (0x000255b8) level_2_signal_lsc

0x0d70,	// (0x000255c1) level_3_signal_lsc

0x0d79,	// (0x000255ca) level_4_signal_lsc

0x0d82,	// (0x000255d3) level_5_signal_lsc

0x0d8b,	// (0x000255dc) level_6_signal_lsc

0x0d94,	// (0x000255e5) level_7_signal_lsc

0x0d94,	// (0x000255e5) level_1_battery_lsc

0x0d9d,	// (0x000255ee) level_2_battery_lsc

0x0da6,	// (0x000255f7) level_3_battery_lsc

0x0daf,	// (0x00025600) level_4_battery_lsc

0x0db8,	// (0x00025609) level_5_battery_lsc

0x0dc1,	// (0x00025612) level_6_battery_lsc

0x0d5e,	// (0x000255af) level_7_battery_lsc

0x0dca,	// (0x0002561b) scroll_handle_focus_pane_g1

0x0dd3,	// (0x00025624) scroll_handle_focus_pane_g2

0x0ddc,	// (0x0002562d) scroll_handle_focus_pane_g3

0x0002,

0xf70e,	// (0x00033f5f) scroll_handle_focus_pane_g

0xa3fc,	// (0x0002ec4d) list_single_2graphic_pane_g1_ParamLimits

0xa3fc,	// (0x0002ec4d) list_single_2graphic_pane_g1

0x9ec1,	// (0x0002e712) list_single_2graphic_pane_g2_ParamLimits

0x9ec1,	// (0x0002e712) list_single_2graphic_pane_g2

0xeabe,	// (0x0003330f) list_single_2graphic_pane_g3_ParamLimits

0xeabe,	// (0x0003330f) list_single_2graphic_pane_g3

0xa408,	// (0x0002ec59) list_single_2graphic_pane_g4_ParamLimits

0xa408,	// (0x0002ec59) list_single_2graphic_pane_g4

0x0003,

0xf715,	// (0x00033f66) list_single_2graphic_pane_g_ParamLimits

0xf715,	// (0x00033f66) list_single_2graphic_pane_g

0xa414,	// (0x0002ec65) list_single_2graphic_pane_t1_ParamLimits

0xa414,	// (0x0002ec65) list_single_2graphic_pane_t1

0xa442,	// (0x0002ec93) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa442,	// (0x0002ec93) list_double2_graphic_large_graphic_pane_g1

0x9f2c,	// (0x0002e77d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9f2c,	// (0x0002e77d) list_double2_graphic_large_graphic_pane_g2

0x9f3d,	// (0x0002e78e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9f3d,	// (0x0002e78e) list_double2_graphic_large_graphic_pane_g3

0xa454,	// (0x0002eca5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa454,	// (0x0002eca5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71e,	// (0x00033f6f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71e,	// (0x00033f6f) list_double2_graphic_large_graphic_pane_g

0xa460,	// (0x0002ecb1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa460,	// (0x0002ecb1) list_double2_graphic_large_graphic_pane_t1

0xa476,	// (0x0002ecc7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa476,	// (0x0002ecc7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf727,	// (0x00033f78) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf727,	// (0x00033f78) list_double2_graphic_large_graphic_pane_t

0x2dd2,	// (0x00027623) popup_fast_swap_window_ParamLimits

0x2dd2,	// (0x00027623) popup_fast_swap_window

0x2df0,	// (0x00027641) popup_side_volume_key_window

0x2e0e,	// (0x0002765f) stacon_top_pane

0x2e18,	// (0x00027669) status_pane_ParamLimits

0x2e18,	// (0x00027669) status_pane

0xa762,	// (0x0002efb3) status_small_pane

0xa81a,	// (0x0002f06b) control_pane

0xa81a,	// (0x0002f06b) stacon_bottom_pane

0xd6a6,	// (0x00031ef7) scroll_pane_cp121

0xd69d,	// (0x00031eee) set_content_pane

0x0de5,	// (0x00025636) bg_active_tab_pane_g1_cp1

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp1

0x0df7,	// (0x00025648) bg_active_tab_pane_g3_cp1

0x0de5,	// (0x00025636) bg_passive_tab_pane_g1_cp1

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp1

0x0df7,	// (0x00025648) bg_passive_tab_pane_g3_cp1

0x0e00,	// (0x00025651) bg_active_tab_pane_g1_cp2

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp2

0x0e09,	// (0x0002565a) bg_active_tab_pane_g3_cp2

0x0e00,	// (0x00025651) bg_passive_tab_pane_g1_cp2

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp2

0x0e09,	// (0x0002565a) bg_passive_tab_pane_g3_cp2

0x0e12,	// (0x00025663) bg_active_tab_pane_g1_cp3

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp3

0x0e1b,	// (0x0002566c) bg_active_tab_pane_g3_cp3

0x0e12,	// (0x00025663) bg_passive_tab_pane_g1_cp3

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp3

0x0e1b,	// (0x0002566c) bg_passive_tab_pane_g3_cp3

0x2cd7,	// (0x00027528) bg_active_tab_pane_g1_cp4

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp4

0x2ce2,	// (0x00027533) bg_active_tab_pane_g3_cp4

0x2cd7,	// (0x00027528) bg_passive_tab_pane_g1_cp4

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp4

0x2ce2,	// (0x00027533) bg_passive_tab_pane_g3_cp4

0x2d2b,	// (0x0002757c) bg_active_tab_pane_g1_cp5

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp5

0x2d34,	// (0x00027585) bg_active_tab_pane_g3_cp5

0x2d2b,	// (0x0002757c) bg_passive_tab_pane_g1_cp5

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp5

0x2d34,	// (0x00027585) bg_passive_tab_pane_g3_cp5

0x5441,	// (0x00029c92) list_set_graphic_pane_ParamLimits

0x5441,	// (0x00029c92) list_set_graphic_pane

0xa81a,	// (0x0002f06b) bg_set_opt_pane_cp4

0x2d53,	// (0x000275a4) list_set_graphic_pane_g1_ParamLimits

0x2d53,	// (0x000275a4) list_set_graphic_pane_g1

0x2d5f,	// (0x000275b0) list_set_graphic_pane_g2_ParamLimits

0x2d5f,	// (0x000275b0) list_set_graphic_pane_g2

0x0001,

0xf72c,	// (0x00033f7d) list_set_graphic_pane_g_ParamLimits

0xf72c,	// (0x00033f7d) list_set_graphic_pane_g

0x0009,

0xfabd,	// (0x0003430e) volume_small_pane_cp_g

0x2d83,	// (0x000275d4) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2d83,	// (0x000275d4) list_double2_large_graphic_pane_g1_cp2

0x2d91,	// (0x000275e2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2d91,	// (0x000275e2) list_double2_large_graphic_pane_g2_cp2

0x2da2,	// (0x000275f3) list_double2_large_graphic_pane_g3_cp2

0x2daa,	// (0x000275fb) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2daa,	// (0x000275fb) list_double2_large_graphic_pane_t1_cp2

0x2dc0,	// (0x00027611) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2dc0,	// (0x00027611) list_double2_large_graphic_pane_t2_cp2

0x49a7,	// (0x000291f8) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x49a7,	// (0x000291f8) list_double_large_graphic_pane_g1_cp2

0x49ba,	// (0x0002920b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x49ba,	// (0x0002920b) list_double_large_graphic_pane_g2_cp2

0x2f36,	// (0x00027787) list_double_large_graphic_pane_g3_cp2

0x49cb,	// (0x0002921c) list_double_large_graphic_pane_g4_cp

0x49d3,	// (0x00029224) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x49d3,	// (0x00029224) list_double_large_graphic_pane_t1_cp2

0x49ea,	// (0x0002923b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x49ea,	// (0x0002923b) list_double_large_graphic_pane_t2_cp2

0x2e26,	// (0x00027677) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2e26,	// (0x00027677) list_double2_graphic_pane_g1_cp2

0x2e34,	// (0x00027685) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2e34,	// (0x00027685) list_double2_graphic_pane_g2_cp2

0x2e45,	// (0x00027696) list_double2_graphic_pane_g3_cp2

0x2e4f,	// (0x000276a0) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2e4f,	// (0x000276a0) list_double2_graphic_pane_t1_cp2

0x2e65,	// (0x000276b6) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2e65,	// (0x000276b6) list_double2_graphic_pane_t2_cp2

0x2e77,	// (0x000276c8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2e77,	// (0x000276c8) list_single_number_heading_pane_g1_cp2

0x2e83,	// (0x000276d4) list_single_number_heading_pane_g2_cp2

0x2e8b,	// (0x000276dc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2e8b,	// (0x000276dc) list_single_number_heading_pane_t1_cp2

0x2ea1,	// (0x000276f2) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2ea1,	// (0x000276f2) list_single_number_heading_pane_t2_cp2

0x2eb5,	// (0x00027706) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2eb5,	// (0x00027706) list_single_number_heading_pane_t3_cp2

0x2e77,	// (0x000276c8) list_single_heading_pane_g1_cp2_ParamLimits

0x2e77,	// (0x000276c8) list_single_heading_pane_g1_cp2

0x2e83,	// (0x000276d4) list_single_heading_pane_g2_cp2

0x2e8b,	// (0x000276dc) list_single_heading_pane_t1_cp2_ParamLimits

0x2e8b,	// (0x000276dc) list_single_heading_pane_t1_cp2

0x47a1,	// (0x00028ff2) list_single_heading_pane_t2_cp2_ParamLimits

0x47a1,	// (0x00028ff2) list_single_heading_pane_t2_cp2

0x46e9,	// (0x00028f3a) list_double_graphic_pane_g1_cp2_ParamLimits

0x46e9,	// (0x00028f3a) list_double_graphic_pane_g1_cp2

0x46f5,	// (0x00028f46) list_double_graphic_pane_g2_cp2_ParamLimits

0x46f5,	// (0x00028f46) list_double_graphic_pane_g2_cp2

0x4704,	// (0x00028f55) list_double_graphic_pane_g3_cp2

0x470c,	// (0x00028f5d) list_double_graphic_pane_t1_cp2_ParamLimits

0x470c,	// (0x00028f5d) list_double_graphic_pane_t1_cp2

0x4722,	// (0x00028f73) list_double_graphic_pane_t2_cp2_ParamLimits

0x4722,	// (0x00028f73) list_double_graphic_pane_t2_cp2

0x2f2a,	// (0x0002777b) list_double_number_pane_g1_cp2_ParamLimits

0x2f2a,	// (0x0002777b) list_double_number_pane_g1_cp2

0x2f36,	// (0x00027787) list_double_number_pane_g2_cp2

0x46ad,	// (0x00028efe) list_double_number_pane_t1_cp2_ParamLimits

0x46ad,	// (0x00028efe) list_double_number_pane_t1_cp2

0x46c1,	// (0x00028f12) list_double_number_pane_t2_cp2_ParamLimits

0x46c1,	// (0x00028f12) list_double_number_pane_t2_cp2

0x46d7,	// (0x00028f28) list_double_number_pane_t3_cp2_ParamLimits

0x46d7,	// (0x00028f28) list_double_number_pane_t3_cp2

0x4596,	// (0x00028de7) list_single_graphic_pane_g1_cp2_ParamLimits

0x4596,	// (0x00028de7) list_single_graphic_pane_g1_cp2

0x2f9f,	// (0x000277f0) list_single_graphic_pane_g2_cp2_ParamLimits

0x2f9f,	// (0x000277f0) list_single_graphic_pane_g2_cp2

0x2fab,	// (0x000277fc) list_single_graphic_pane_g3_cp2

0x456c,	// (0x00028dbd) list_single_graphic_pane_t1_cp2_ParamLimits

0x456c,	// (0x00028dbd) list_single_graphic_pane_t1_cp2

0x2f9f,	// (0x000277f0) list_single_number_pane_g1_cp2_ParamLimits

0x2f9f,	// (0x000277f0) list_single_number_pane_g1_cp2

0x2fab,	// (0x000277fc) list_single_number_pane_g2_cp2

0x456c,	// (0x00028dbd) list_single_number_pane_t1_cp2_ParamLimits

0x456c,	// (0x00028dbd) list_single_number_pane_t1_cp2

0x4582,	// (0x00028dd3) list_single_number_pane_t2_cp2_ParamLimits

0x4582,	// (0x00028dd3) list_single_number_pane_t2_cp2

0x2d91,	// (0x000275e2) list_double2_pane_g1_cp2_ParamLimits

0x2d91,	// (0x000275e2) list_double2_pane_g1_cp2

0x2da2,	// (0x000275f3) list_double2_pane_g2_cp2

0x2f02,	// (0x00027753) list_double2_pane_t1_cp2_ParamLimits

0x2f02,	// (0x00027753) list_double2_pane_t1_cp2

0x2f18,	// (0x00027769) list_double2_pane_t2_cp2_ParamLimits

0x2f18,	// (0x00027769) list_double2_pane_t2_cp2

0x2f2a,	// (0x0002777b) list_double_pane_g1_cp2_ParamLimits

0x2f2a,	// (0x0002777b) list_double_pane_g1_cp2

0x2f36,	// (0x00027787) list_double_pane_g2_cp2

0x2f3e,	// (0x0002778f) list_double_pane_t1_cp2_ParamLimits

0x2f3e,	// (0x0002778f) list_double_pane_t1_cp2

0x2f54,	// (0x000277a5) list_double_pane_t2_cp2_ParamLimits

0x2f54,	// (0x000277a5) list_double_pane_t2_cp2

0x2f8f,	// (0x000277e0) list_single_pane_cp2_g3

0x2f9f,	// (0x000277f0) list_single_pane_g1_cp2_ParamLimits

0x2f9f,	// (0x000277f0) list_single_pane_g1_cp2

0x2fab,	// (0x000277fc) list_single_pane_g2_cp2

0x2fb3,	// (0x00027804) list_single_pane_t1_cp2_ParamLimits

0x2fb3,	// (0x00027804) list_single_pane_t1_cp2

0x2fcb,	// (0x0002781c) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2fcb,	// (0x0002781c) list_single_large_graphic_pane_g1_cp2

0x2fd9,	// (0x0002782a) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2fd9,	// (0x0002782a) list_single_large_graphic_pane_g2_cp2

0x2fe5,	// (0x00027836) list_single_large_graphic_pane_g3_cp2

0x2fed,	// (0x0002783e) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2fed,	// (0x0002783e) list_single_large_graphic_pane_g4_cp1

0x3007,	// (0x00027858) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3007,	// (0x00027858) list_single_large_graphic_pane_t1_cp2

0x4536,	// (0x00028d87) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4536,	// (0x00028d87) list_single_graphic_heading_pane_g1_cp2

0x4503,	// (0x00028d54) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4503,	// (0x00028d54) list_single_graphic_heading_pane_g4_cp2

0x2fab,	// (0x000277fc) list_single_graphic_heading_pane_g5_cp2

0x4542,	// (0x00028d93) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4542,	// (0x00028d93) list_single_graphic_heading_pane_t1_cp2

0x4558,	// (0x00028da9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4558,	// (0x00028da9) list_single_graphic_heading_pane_t2_cp2

0x44f7,	// (0x00028d48) list_single_2graphic_pane_g1_cp2_ParamLimits

0x44f7,	// (0x00028d48) list_single_2graphic_pane_g1_cp2

0x4503,	// (0x00028d54) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4503,	// (0x00028d54) list_single_2graphic_pane_g2_cp2

0x2fab,	// (0x000277fc) list_single_2graphic_pane_g3_cp2

0x4514,	// (0x00028d65) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4514,	// (0x00028d65) list_single_2graphic_pane_g4_cp2

0x4520,	// (0x00028d71) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4520,	// (0x00028d71) list_single_2graphic_pane_t1_cp2

0xa76c,	// (0x0002efbd) list_highlight_pane_g10_cp1

0x40cf,	// (0x00028920) list_highlight_pane_g1_cp1

0x40d7,	// (0x00028928) list_highlight_pane_g2_cp1

0x40df,	// (0x00028930) list_highlight_pane_g3_cp1

0x40e7,	// (0x00028938) list_highlight_pane_g4_cp1

0x40ef,	// (0x00028940) list_highlight_pane_g5_cp1

0x40f7,	// (0x00028948) list_highlight_pane_g6_cp1

0x40ff,	// (0x00028950) list_highlight_pane_g7_cp1

0x4107,	// (0x00028958) list_highlight_pane_g8_cp1

0x410f,	// (0x00028960) list_highlight_pane_g9_cp1

0xbec1,	// (0x00030712) form_field_slider_pane_t3

0xbecf,	// (0x00030720) form_field_slider_pane_t4

0x400b,	// (0x0002885c) slider_form_pane_ParamLimits

0x400b,	// (0x0002885c) slider_form_pane

0xa81a,	// (0x0002f06b) control_abbreviations

0xa81a,	// (0x0002f06b) control_conventions

0xa81a,	// (0x0002f06b) control_definitions

0xa81a,	// (0x0002f06b) format_table_attribute

0x47f7,	// (0x00029048) bg_popup_preview_window_pane_g9

0xa81a,	// (0x0002f06b) format_table_data2

0xa81a,	// (0x0002f06b) format_table_data3

0xa81a,	// (0x0002f06b) format_table_data_example

0x0008,

0xa81a,	// (0x0002f06b) intro_purpose

0xf8c3,	// (0x00034114) bg_popup_preview_window_pane_g

0xa81a,	// (0x0002f06b) texts_category

0xa81a,	// (0x0002f06b) texts_graphics

0x301d,	// (0x0002786e) text_digital

0x302c,	// (0x0002787d) text_primary

0x303b,	// (0x0002788c) text_primary_small

0x304a,	// (0x0002789b) text_secondary

0x3059,	// (0x000278aa) text_title

0x4f61,	// (0x000297b2) bg_passive_tab_pane_g1_cp3_srt

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp3_srt

0x4f6a,	// (0x000297bb) bg_passive_tab_pane_g3_cp3_srt

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp3_srt_ParamLimits

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp3_srt

0x4f73,	// (0x000297c4) tabs_4_active_pane_srt_g1

0xc30b,	// (0x00030b5c) tabs_4_active_pane_srt_t1_ParamLimits

0xc30b,	// (0x00030b5c) tabs_4_active_pane_srt_t1

0x4f61,	// (0x000297b2) bg_active_tab_pane_g1_cp3_copy1

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp3_copy1

0x4f6a,	// (0x000297bb) bg_active_tab_pane_g3_cp3_copy1

0xaaa7,	// (0x0002f2f8) tabs_2_long_active_pane_srt_ParamLimits

0xaaa7,	// (0x0002f2f8) tabs_2_long_active_pane_srt

0xaaa7,	// (0x0002f2f8) tabs_2_long_passive_pane_srt_ParamLimits

0xaaa7,	// (0x0002f2f8) tabs_2_long_passive_pane_srt

0x3397,	// (0x00027be8) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3397,	// (0x00027be8) bg_passive_tab_pane_cp4_srt

0x4c21,	// (0x00029472) bg_passive_tab_pane_g1_cp4_srt

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp4_srt

0x4c2a,	// (0x0002947b) bg_passive_tab_pane_g3_cp4_srt

0xaaa7,	// (0x0002f2f8) bg_active_tab_pane_cp4_srt_ParamLimits

0xaaa7,	// (0x0002f2f8) bg_active_tab_pane_cp4_srt

0xc103,	// (0x00030954) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc103,	// (0x00030954) tabs_2_long_active_pane_srt_t1

0x4c21,	// (0x00029472) bg_active_tab_pane_g1_cp4_srt

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp4_srt

0x4c2a,	// (0x0002947b) bg_active_tab_pane_g3_cp4_srt

0xaa65,	// (0x0002f2b6) tabs_3_long_active_pane_srt_ParamLimits

0xaa65,	// (0x0002f2b6) tabs_3_long_active_pane_srt

0xaa65,	// (0x0002f2b6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xaa65,	// (0x0002f2b6) tabs_3_long_passive_pane_cp_srt

0xaa65,	// (0x0002f2b6) tabs_3_long_passive_pane_srt_ParamLimits

0xaa65,	// (0x0002f2b6) tabs_3_long_passive_pane_srt

0x3397,	// (0x00027be8) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3397,	// (0x00027be8) bg_passive_tab_pane_cp5_srt

0x2d2b,	// (0x0002757c) bg_passive_tab_pane_g1_cp5_srt

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp5_srt

0x2d34,	// (0x00027585) bg_passive_tab_pane_g3_cp5_srt

0xaaa7,	// (0x0002f2f8) bg_active_tab_pane_cp5_srt_ParamLimits

0xaaa7,	// (0x0002f2f8) bg_active_tab_pane_cp5_srt

0xc0ed,	// (0x0003093e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc0ed,	// (0x0003093e) tabs_3_long_active_pane_srt_t1

0x2d2b,	// (0x0002757c) bg_active_tab_pane_g1_cp5_srt

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp5_srt

0x2d34,	// (0x00027585) bg_active_tab_pane_g3_cp5_srt

0x4c01,	// (0x00029452) navi_text_pane_srt_t1

0x4bf9,	// (0x0002944a) navi_icon_pane_srt_g1

0x3231,	// (0x00027a82) midp_editing_number_pane_srt

0x3068,	// (0x000278b9) midp_ticker_pane_srt

0x3239,	// (0x00027a8a) midp_ticker_pane_srt_g1

0x3241,	// (0x00027a92) midp_ticker_pane_srt_g2

0x0001,

0xf74b,	// (0x00033f9c) midp_ticker_pane_srt_g

0x3249,	// (0x00027a9a) midp_ticker_pane_srt_t1

0x4bea,	// (0x0002943b) midp_editing_number_pane_t1_copy1

0xb048,	// (0x0002f899) listscroll_midp_pane

0xb048,	// (0x0002f899) midp_form_pane

0x30df,	// (0x00027930) midp_info_popup_window_ParamLimits

0x30df,	// (0x00027930) midp_info_popup_window

0x0366,	// (0x00024bb7) bg_popup_sub_pane_cp50_ParamLimits

0x0366,	// (0x00024bb7) bg_popup_sub_pane_cp50

0x3cf1,	// (0x00028542) listscroll_midp_info_pane_ParamLimits

0x3cf1,	// (0x00028542) listscroll_midp_info_pane

0x3cd1,	// (0x00028522) listscroll_form_midp_pane_ParamLimits

0x3cd1,	// (0x00028522) listscroll_form_midp_pane

0x3cdd,	// (0x0002852e) scroll_bar_cp050

0x3cd1,	// (0x00028522) list_midp_pane

0x5a1e,	// (0x0002a26f) signal_pane_g2_cp

0x3beb,	// (0x0002843c) listscroll_midp_info_pane_t1_ParamLimits

0x3beb,	// (0x0002843c) listscroll_midp_info_pane_t1

0x3c03,	// (0x00028454) listscroll_midp_info_pane_t2_ParamLimits

0x3c03,	// (0x00028454) listscroll_midp_info_pane_t2

0x3c41,	// (0x00028492) listscroll_midp_info_pane_t3_ParamLimits

0x3c41,	// (0x00028492) listscroll_midp_info_pane_t3

0x3c7b,	// (0x000284cc) listscroll_midp_info_pane_t4_ParamLimits

0x3c7b,	// (0x000284cc) listscroll_midp_info_pane_t4

0x0003,

0xf7fe,	// (0x0003404f) listscroll_midp_info_pane_t_ParamLimits

0xf7fe,	// (0x0003404f) listscroll_midp_info_pane_t

0x03c9,	// (0x00024c1a) scroll_pane_cp21

0x3b85,	// (0x000283d6) form_midp_field_choice_group_pane

0x3b8e,	// (0x000283df) form_midp_field_text_pane

0x3bd1,	// (0x00028422) form_midp_field_time_pane

0x3bd9,	// (0x0002842a) form_midp_gauge_slider_pane

0x3be2,	// (0x00028433) form_midp_gauge_wait_pane

0xa81a,	// (0x0002f06b) form_midp_image_pane

0xa488,	// (0x0002ecd9) list_single_midp_pane_ParamLimits

0xa488,	// (0x0002ecd9) list_single_midp_pane

0xbe9c,	// (0x000306ed) form_midp_field_text_pane_t1

0x393b,	// (0x0002818c) input_focus_pane_cp050

0x3b74,	// (0x000283c5) list_midp_form_text_pane

0x3b18,	// (0x00028369) form_midp_field_choice_group_pane_t1

0x3b26,	// (0x00028377) input_focus_pane_cp051

0x3b3a,	// (0x0002838b) list_midp_choice_pane

0xa81a,	// (0x0002f06b) status_idle_pane

0x3afc,	// (0x0002834d) form_midp_field_time_pane_t1

0xa76c,	// (0x0002efbd) wait_anim_pane_g2_copy1

0x3b0a,	// (0x0002835b) form_midp_field_time_pane_t2

0x0001,

0x318f,	// (0x000279e0) aid_navinavi_width_2_pane

0xf7f9,	// (0x0003404a) form_midp_field_time_pane_t

0xa81a,	// (0x0002f06b) input_focus_pane_cp052

0xa81a,	// (0x0002f06b) bg_input_focus_pane_cp040

0x3abc,	// (0x0002830d) form_midp_gauge_slider_pane_t1

0x3aca,	// (0x0002831b) form_midp_gauge_slider_pane_t2

0xbe80,	// (0x000306d1) form_midp_gauge_slider_pane_t3

0xbe8e,	// (0x000306df) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f0,	// (0x00034041) form_midp_gauge_slider_pane_t

0x3af4,	// (0x00028345) form_midp_slider_pane

0xaaa7,	// (0x0002f2f8) bg_input_focus_pane_cp041_ParamLimits

0xaaa7,	// (0x0002f2f8) bg_input_focus_pane_cp041

0x3a89,	// (0x000282da) form_midp_gauge_wait_pane_t1_ParamLimits

0x3a89,	// (0x000282da) form_midp_gauge_wait_pane_t1

0x3a9b,	// (0x000282ec) form_midp_gauge_wait_pane_t2_ParamLimits

0x3a9b,	// (0x000282ec) form_midp_gauge_wait_pane_t2

0x0001,

0xf7eb,	// (0x0003403c) form_midp_gauge_wait_pane_t_ParamLimits

0xf7eb,	// (0x0003403c) form_midp_gauge_wait_pane_t

0x3aad,	// (0x000282fe) form_midp_wait_pane_ParamLimits

0x3aad,	// (0x000282fe) form_midp_wait_pane

0x3a51,	// (0x000282a2) form_midp_image_pane_g1

0x3a5a,	// (0x000282ab) form_midp_image_pane_t1

0x3a69,	// (0x000282ba) form_midp_image_pane_t2

0x3a78,	// (0x000282c9) form_midp_image_pane_t3

0x0002,

0xf7e4,	// (0x00034035) form_midp_image_pane_t

0x3a48,	// (0x00028299) list_single_midp_pane_g1

0xed84,	// (0x000335d5) list_single_midp_pane_t1

0xbe69,	// (0x000306ba) list_midp_form_item_pane_ParamLimits

0xbe69,	// (0x000306ba) list_midp_form_item_pane

0x3137,	// (0x00027988) list_midp_form_item_pane_t1

0x3146,	// (0x00027997) midp_ticker_pane_g1

0x3152,	// (0x000279a3) midp_ticker_pane_g2

0x0001,

0xf731,	// (0x00033f82) midp_ticker_pane_g

0xb0ec,	// (0x0002f93d) midp_ticker_pane_t1

0xc28c,	// (0x00030add) midp_editing_number_pane_t1

0x4e35,	// (0x00029686) midp_editing_number_pane

0x4e44,	// (0x00029695) midp_ticker_pane

0x3cfd,	// (0x0002854e) ai_message_heading_pane

0xa81a,	// (0x0002f06b) bg_popup_window_pane_cp14

0x3d05,	// (0x00028556) listscroll_ai_message_pane

0x4b70,	// (0x000293c1) ai_message_heading_pane_g1_ParamLimits

0x4b70,	// (0x000293c1) ai_message_heading_pane_g1

0x4b7c,	// (0x000293cd) ai_message_heading_pane_g2_ParamLimits

0x4b7c,	// (0x000293cd) ai_message_heading_pane_g2

0x4b8a,	// (0x000293db) ai_message_heading_pane_g3_ParamLimits

0x4b8a,	// (0x000293db) ai_message_heading_pane_g3

0x4b96,	// (0x000293e7) ai_message_heading_pane_g4_ParamLimits

0x4b96,	// (0x000293e7) ai_message_heading_pane_g4

0x0003,

0xf925,	// (0x00034176) ai_message_heading_pane_g_ParamLimits

0xf925,	// (0x00034176) ai_message_heading_pane_g

0x4ba2,	// (0x000293f3) ai_message_heading_pane_t1_ParamLimits

0x4ba2,	// (0x000293f3) ai_message_heading_pane_t1

0x4bbc,	// (0x0002940d) ai_message_heading_pane_t2_ParamLimits

0x4bbc,	// (0x0002940d) ai_message_heading_pane_t2

0x0001,

0xf92e,	// (0x0003417f) ai_message_heading_pane_t_ParamLimits

0xf92e,	// (0x0003417f) ai_message_heading_pane_t

0x4bd0,	// (0x00029421) bg_popup_heading_pane_cp1_ParamLimits

0x4bd0,	// (0x00029421) bg_popup_heading_pane_cp1

0x4b5e,	// (0x000293af) list_ai_message_pane_ParamLimits

0x4b5e,	// (0x000293af) list_ai_message_pane

0x03c9,	// (0x00024c1a) scroll_pane_cp10

0x4afa,	// (0x0002934b) list_ai_message_pane_g1

0x4b02,	// (0x00029353) list_ai_message_pane_g2

0x0001,

0xf902,	// (0x00034153) list_ai_message_pane_g

0x4b0a,	// (0x0002935b) list_ai_message_pane_t1_ParamLimits

0x4b0a,	// (0x0002935b) list_ai_message_pane_t1

0x4b1f,	// (0x00029370) list_ai_message_pane_t2_ParamLimits

0x4b1f,	// (0x00029370) list_ai_message_pane_t2

0x4b34,	// (0x00029385) list_ai_message_pane_t3_ParamLimits

0x4b34,	// (0x00029385) list_ai_message_pane_t3

0x4b49,	// (0x0002939a) list_ai_message_pane_t4_ParamLimits

0x4b49,	// (0x0002939a) list_ai_message_pane_t4

0x0003,

0xf907,	// (0x00034158) list_ai_message_pane_t_ParamLimits

0xf907,	// (0x00034158) list_ai_message_pane_t

0xc0d3,	// (0x00030924) cell_ai_soft_ind_pane_ParamLimits

0xc0d3,	// (0x00030924) cell_ai_soft_ind_pane

0x3170,	// (0x000279c1) cell_ai_soft_ind_pane_g1_ParamLimits

0x3170,	// (0x000279c1) cell_ai_soft_ind_pane_g1

0xa81a,	// (0x0002f06b) grid_highlight_cp1

0x317d,	// (0x000279ce) text_secondary_cp56_ParamLimits

0x317d,	// (0x000279ce) text_secondary_cp56

0x4ab8,	// (0x00029309) example_general_pane_ParamLimits

0x4ab8,	// (0x00029309) example_general_pane

0x4ac4,	// (0x00029315) example_parent_pane_g1_ParamLimits

0x4ac4,	// (0x00029315) example_parent_pane_g1

0x4ad0,	// (0x00029321) example_parent_pane_t1_ParamLimits

0x4ad0,	// (0x00029321) example_parent_pane_t1

0xb662,	// (0x0002feb3) popup_preview_text_window_ParamLimits

0xb662,	// (0x0002feb3) popup_preview_text_window

0x2f97,	// (0x000277e8) list_single_pane_cp2_g4

0xd282,	// (0x00031ad3) bg_popup_preview_window_pane_ParamLimits

0xd282,	// (0x00031ad3) bg_popup_preview_window_pane

0x4801,	// (0x00029052) popup_preview_text_window_t1_ParamLimits

0x4801,	// (0x00029052) popup_preview_text_window_t1

0x481f,	// (0x00029070) popup_preview_text_window_t2_ParamLimits

0x481f,	// (0x00029070) popup_preview_text_window_t2

0x4868,	// (0x000290b9) popup_preview_text_window_t3_ParamLimits

0x4868,	// (0x000290b9) popup_preview_text_window_t3

0x48ad,	// (0x000290fe) popup_preview_text_window_t4_ParamLimits

0x48ad,	// (0x000290fe) popup_preview_text_window_t4

0x0004,

0xf8d6,	// (0x00034127) popup_preview_text_window_t_ParamLimits

0xf8d6,	// (0x00034127) popup_preview_text_window_t

0x492b,	// (0x0002917c) scroll_pane_cp11

0x38c7,	// (0x00028118) bg_popup_preview_window_pane_g1

0x47b5,	// (0x00029006) bg_popup_preview_window_pane_g2

0x47bf,	// (0x00029010) bg_popup_preview_window_pane_g3

0x47c9,	// (0x0002901a) bg_popup_preview_window_pane_g4

0x47d3,	// (0x00029024) bg_popup_preview_window_pane_g5

0x47dd,	// (0x0002902e) bg_popup_preview_window_pane_g6

0x47e5,	// (0x00029036) bg_popup_preview_window_pane_g7

0x47ed,	// (0x0002903e) bg_popup_preview_window_pane_g8

0xf2e2,	// (0x00033b33) aid_popup_width_pane

0xb5d2,	// (0x0002fe23) popup_midp_note_alarm_window_ParamLimits

0xb5d2,	// (0x0002fe23) popup_midp_note_alarm_window

0xd6b7,	// (0x00031f08) data_form_pane_ParamLimits

0xa300,	// (0x0002eb51) form_field_data_pane_g1

0xa30a,	// (0x0002eb5b) form_field_data_pane_t1_ParamLimits

0xd6c3,	// (0x00031f14) input_focus_pane_ParamLimits

0xeba1,	// (0x000333f2) data_form_wide_pane_ParamLimits

0xebb2,	// (0x00033403) form_field_data_wide_pane_g1

0xebbe,	// (0x0003340f) form_field_data_wide_pane_t1_ParamLimits

0xd43e,	// (0x00031c8f) input_focus_pane_cp6_ParamLimits

0xadde,	// (0x0002f62f) input_popup_find_pane_g1_ParamLimits

0xadde,	// (0x0002f62f) input_popup_find_pane_g1

0x06f9,	// (0x00024f4a) aid_navi_side_left_pane

0x070e,	// (0x00024f5f) aid_navi_side_right_pane

0x41ca,	// (0x00028a1b) bg_popup_window_pane_cp30_ParamLimits

0x41ca,	// (0x00028a1b) bg_popup_window_pane_cp30

0x4244,	// (0x00028a95) popup_midp_note_alarm_window_g1_ParamLimits

0x4244,	// (0x00028a95) popup_midp_note_alarm_window_g1

0x4274,	// (0x00028ac5) popup_midp_note_alarm_window_t1_ParamLimits

0x4274,	// (0x00028ac5) popup_midp_note_alarm_window_t1

0x4315,	// (0x00028b66) popup_midp_note_alarm_window_t2_ParamLimits

0x4315,	// (0x00028b66) popup_midp_note_alarm_window_t2

0x43c3,	// (0x00028c14) popup_midp_note_alarm_window_t3_ParamLimits

0x43c3,	// (0x00028c14) popup_midp_note_alarm_window_t3

0x43f5,	// (0x00028c46) popup_midp_note_alarm_window_t4_ParamLimits

0x43f5,	// (0x00028c46) popup_midp_note_alarm_window_t4

0x441b,	// (0x00028c6c) popup_midp_note_alarm_window_t5_ParamLimits

0x441b,	// (0x00028c6c) popup_midp_note_alarm_window_t5

0x000a,

0xf873,	// (0x000340c4) popup_midp_note_alarm_window_t_ParamLimits

0xf873,	// (0x000340c4) popup_midp_note_alarm_window_t

0x44c7,	// (0x00028d18) wait_bar_pane_cp1_ParamLimits

0x44c7,	// (0x00028d18) wait_bar_pane_cp1

0xa81a,	// (0x0002f06b) wait_anim_pane_copy1

0xa81a,	// (0x0002f06b) wait_border_pane_copy1

0x3eaf,	// (0x00028700) wait_border_pane_g1_copy1

0xebd8,	// (0x00033429) form_field_popup_pane_g1

0xa324,	// (0x0002eb75) form_field_popup_pane_t1_ParamLimits

0xd6c3,	// (0x00031f14) input_focus_pane_cp7_ParamLimits

0xd6f1,	// (0x00031f42) list_form_pane_ParamLimits

0xebe0,	// (0x00033431) form_field_popup_wide_pane_g1

0xebe8,	// (0x00033439) form_field_popup_wide_pane_t1_ParamLimits

0xd6c3,	// (0x00031f14) input_focus_pane_cp8_ParamLimits

0xd6fd,	// (0x00031f4e) list_form_wide_pane_ParamLimits

0x5005,	// (0x00029856) aid_size_cell_graphic_pane

0xa3a3,	// (0x0002ebf4) data_form_pane_t1_ParamLimits

0xa4b7,	// (0x0002ed08) data_form_wide_pane_t1_ParamLimits

0xba64,	// (0x000302b5) bg_status_flat_pane

0xa9a1,	// (0x0002f1f2) title_pane_t1_ParamLimits

0xaa2d,	// (0x0002f27e) title_pane_t2_ParamLimits

0xaa53,	// (0x0002f2a4) title_pane_t3_ParamLimits

0xf530,	// (0x00033d81) title_pane_t_ParamLimits

0xaf21,	// (0x0002f772) level_1_signal_ParamLimits

0xaf33,	// (0x0002f784) level_2_signal_ParamLimits

0xaf46,	// (0x0002f797) level_3_signal_ParamLimits

0xaf59,	// (0x0002f7aa) level_4_signal_ParamLimits

0xaf6c,	// (0x0002f7bd) level_5_signal_ParamLimits

0xaf7f,	// (0x0002f7d0) level_6_signal_ParamLimits

0xaf92,	// (0x0002f7e3) level_7_signal_ParamLimits

0xaf21,	// (0x0002f772) level_1_battery_ParamLimits

0xaf33,	// (0x0002f784) level_2_battery_ParamLimits

0xaf46,	// (0x0002f797) level_3_battery_ParamLimits

0xaf59,	// (0x0002f7aa) level_4_battery_ParamLimits

0xaf6c,	// (0x0002f7bd) level_5_battery_ParamLimits

0xaf7f,	// (0x0002f7d0) level_6_battery_ParamLimits

0xaf92,	// (0x0002f7e3) level_7_battery_ParamLimits

0x40cf,	// (0x00028920) bg_status_flat_pane_g1

0x40d7,	// (0x00028928) bg_status_flat_pane_g2

0x40df,	// (0x00028930) bg_status_flat_pane_g3

0x40e7,	// (0x00028938) bg_status_flat_pane_g4

0x40ef,	// (0x00028940) bg_status_flat_pane_g5

0x40f7,	// (0x00028948) bg_status_flat_pane_g6

0x40ff,	// (0x00028950) bg_status_flat_pane_g7

0xaa7b,	// (0x0002f2cc) tabs_3_active_pane_t1_ParamLimits

0xaa7b,	// (0x0002f2cc) tabs_3_passive_pane_t1_ParamLimits

0xaa95,	// (0x0002f2e6) tabs_4_active_pane_t1_ParamLimits

0xaa95,	// (0x0002f2e6) tabs_4_1_passive_pane_t1_ParamLimits

0xadf4,	// (0x0002f645) tabs_2_active_pane_t1_ParamLimits

0xadf4,	// (0x0002f645) tabs_2_passive_pane_t1_ParamLimits

0xaaa7,	// (0x0002f2f8) bg_active_tab_pane_cp4_ParamLimits

0xae06,	// (0x0002f657) tabs_2_long_active_pane_t1_ParamLimits

0x3397,	// (0x00027be8) bg_passive_tab_pane_cp4_ParamLimits

0x180e,	// (0x0002605f) list_single_midp_graphic_pane_t1_ParamLimits

0xaaa7,	// (0x0002f2f8) bg_active_tab_pane_cp5_ParamLimits

0xae19,	// (0x0002f66a) tabs_3_long_active_pane_t1_ParamLimits

0x3397,	// (0x00027be8) bg_passive_tab_pane_cp5_ParamLimits

0x180e,	// (0x0002605f) list_single_midp_graphic_pane_t1

0xba64,	// (0x000302b5) bg_status_flat_pane_ParamLimits

0x354f,	// (0x00027da0) indicator_pane_cp2_ParamLimits

0x354f,	// (0x00027da0) indicator_pane_cp2

0xbbf8,	// (0x00030449) navi_pane_srt_ParamLimits

0xbbf8,	// (0x00030449) navi_pane_srt

0x36b4,	// (0x00027f05) popup_clock_digital_analogue_window_cp1

0xd0c5,	// (0x00031916) indicator_pane_t1

0x3068,	// (0x000278b9) copy_highlight_pane

0x3068,	// (0x000278b9) cursor_graphics_pane

0x3068,	// (0x000278b9) graphic_within_text_pane

0x3068,	// (0x000278b9) link_highlight_pane

0x48ee,	// (0x0002913f) popup_preview_text_window_t5_ParamLimits

0x48ee,	// (0x0002913f) popup_preview_text_window_t5

0x3199,	// (0x000279ea) cursor_digital_pane

0x3199,	// (0x000279ea) cursor_primary_pane

0x31aa,	// (0x000279fb) cursor_primary_small_pane

0x31b2,	// (0x00027a03) cursor_secondary_pane

0x31ba,	// (0x00027a0b) cursor_title_pane

0x3199,	// (0x000279ea) link_highlight_digital_pane

0x31a1,	// (0x000279f2) link_highlight_primary_pane

0x31aa,	// (0x000279fb) link_highlight_primary_small_pane

0x31b2,	// (0x00027a03) link_highlight_secondary_pane

0x31ba,	// (0x00027a0b) link_highlight_title_pane

0x3199,	// (0x000279ea) copy_highlight_digital_pane

0x3199,	// (0x000279ea) copy_highlight_primary_pane

0x31aa,	// (0x000279fb) copy_highlight_primary_small_pane

0x31b2,	// (0x00027a03) copy_highlight_secondary_pane

0x31ba,	// (0x00027a0b) copy_highlight_title_pane

0x31b2,	// (0x00027a03) graphic_text_digital_pane

0x416d,	// (0x000289be) graphic_text_primary_pane

0x4176,	// (0x000289c7) graphic_text_primary_small_pane

0x31aa,	// (0x000279fb) graphic_text_secondary_pane

0x3199,	// (0x000279ea) graphic_text_title_pane

0xb0fe,	// (0x0002f94f) cursor_primary_pane_g1

0x415f,	// (0x000289b0) cursor_text_primary_t1

0xbef1,	// (0x00030742) cursor_primary_small_pane_g1

0x4151,	// (0x000289a2) cursor_text_primary_small_t1

0xbee7,	// (0x00030738) cursor_primary_small_pane_g1_copy1

0x4139,	// (0x0002898a) cursor_text_primary_small_t1_copy1

0x4117,	// (0x00028968) cursor_text_title_t1

0xbedd,	// (0x0003072e) cursor_title_pane_g1

0xb0fe,	// (0x0002f94f) cursor_digital_pane_g1

0x31cc,	// (0x00027a1d) cursor_text_digital_t1

0x31da,	// (0x00027a2b) link_highlight_primary_pane_g1

0x40c0,	// (0x00028911) link_highlight_primary_pane_t1

0x31da,	// (0x00027a2b) link_highlight_primary_small_pane_g1

0x31e2,	// (0x00027a33) link_highlight_primary_small_pane_t1

0x31f1,	// (0x00027a42) link_highlight_secondary_pane_g1

0x31f9,	// (0x00027a4a) link_highlight_secondary_pane_t1

0x4034,	// (0x00028885) link_highlight_title_pane_g1

0x403c,	// (0x0002888d) link_highlight_title_pane_t1

0x401d,	// (0x0002886e) link_highlight_digital_pane_g1

0x4025,	// (0x00028876) link_highlight_digital_pane_t1

0x3ee5,	// (0x00028736) copy_highlight_primary_pane_g1

0x3efc,	// (0x0002874d) copy_highlight_primary_pane_t1

0x3ee5,	// (0x00028736) copy_highlight_primary_small_pane_g1

0x3eed,	// (0x0002873e) copy_highlight_primary_small_pane_t1

0x3208,	// (0x00027a59) copy_highlight_secondary_pane_g1

0x3210,	// (0x00027a61) copy_highlight_secondary_pane_t1

0x3ece,	// (0x0002871f) copy_highlight_title_pane_g1

0x3ed6,	// (0x00028727) copy_highlight_title_pane_t1

0x3ee5,	// (0x00028736) copy_highlight_digital_pane_g1

0x51d7,	// (0x00029a28) copy_highlight_digital_pane_t1

0x512b,	// (0x0002997c) graphic_text_primary_pane_g1

0x51bb,	// (0x00029a0c) graphic_text_primary_pane_t1

0x51c9,	// (0x00029a1a) graphic_text_primary_pane_t2

0x0001,

0xf9a2,	// (0x000341f3) graphic_text_primary_pane_t

0x5197,	// (0x000299e8) graphic_text_primary_small_pane_g1

0x519f,	// (0x000299f0) graphic_text_primary_small_pane_t1

0x51ad,	// (0x000299fe) graphic_text_primary_small_pane_t2

0x0001,

0xf99d,	// (0x000341ee) graphic_text_primary_small_pane_t

0x5173,	// (0x000299c4) graphic_text_secondary_pane_g1

0x517b,	// (0x000299cc) graphic_text_secondary_pane_t1

0x5189,	// (0x000299da) graphic_text_secondary_pane_t2

0x0001,

0xf998,	// (0x000341e9) graphic_text_secondary_pane_t

0x514f,	// (0x000299a0) graphic_text_title_pane_g1

0x5157,	// (0x000299a8) graphic_text_title_pane_t1

0x5165,	// (0x000299b6) graphic_text_title_pane_t2

0x0001,

0xf993,	// (0x000341e4) graphic_text_title_pane_t

0x512b,	// (0x0002997c) graphic_text_digital_pane_g1

0x5133,	// (0x00029984) graphic_text_digital_pane_t1

0x5141,	// (0x00029992) graphic_text_digital_pane_t2

0x0001,

0xf98e,	// (0x000341df) graphic_text_digital_pane_t

0xaaa7,	// (0x0002f2f8) navi_icon_pane_srt_ParamLimits

0xaaa7,	// (0x0002f2f8) navi_icon_pane_srt

0xa81a,	// (0x0002f06b) navi_midp_pane_srt

0xa81a,	// (0x0002f06b) navi_navi_pane_srt

0xaaa7,	// (0x0002f2f8) navi_text_pane_srt_ParamLimits

0xaaa7,	// (0x0002f2f8) navi_text_pane_srt

0x50f6,	// (0x00029947) navi_navi_icon_text_pane_srt

0x50fe,	// (0x0002994f) navi_navi_pane_srt_g1_ParamLimits

0x50fe,	// (0x0002994f) navi_navi_pane_srt_g1

0x5110,	// (0x00029961) navi_navi_pane_srt_g2_ParamLimits

0x5110,	// (0x00029961) navi_navi_pane_srt_g2

0x0001,

0xf989,	// (0x000341da) navi_navi_pane_srt_g_ParamLimits

0xf989,	// (0x000341da) navi_navi_pane_srt_g

0x5122,	// (0x00029973) navi_navi_tabs_pane_srt

0x50f6,	// (0x00029947) navi_navi_text_pane_srt

0x50f6,	// (0x00029947) navi_navi_volume_pane_srt

0x50e7,	// (0x00029938) navi_navi_text_pane_srt_t1

0x1baa,	// (0x000263fb) navi_navi_volume_pane_srt_g1

0x1bb2,	// (0x00026403) volume_small_pane_srt_ParamLimits

0x1bb2,	// (0x00026403) volume_small_pane_srt

0x0f65,	// (0x000257b6) volume_small_pane_srt_g1_ParamLimits

0x0f65,	// (0x000257b6) volume_small_pane_srt_g1

0x0f75,	// (0x000257c6) volume_small_pane_srt_g2_ParamLimits

0x0f75,	// (0x000257c6) volume_small_pane_srt_g2

0x0f86,	// (0x000257d7) volume_small_pane_srt_g3_ParamLimits

0x0f86,	// (0x000257d7) volume_small_pane_srt_g3

0x0f97,	// (0x000257e8) volume_small_pane_srt_g4_ParamLimits

0x0f97,	// (0x000257e8) volume_small_pane_srt_g4

0x0fa8,	// (0x000257f9) volume_small_pane_srt_g5_ParamLimits

0x0fa8,	// (0x000257f9) volume_small_pane_srt_g5

0x0fb9,	// (0x0002580a) volume_small_pane_srt_g6_ParamLimits

0x0fb9,	// (0x0002580a) volume_small_pane_srt_g6

0x0fca,	// (0x0002581b) volume_small_pane_srt_g7_ParamLimits

0x0fca,	// (0x0002581b) volume_small_pane_srt_g7

0x0fdb,	// (0x0002582c) volume_small_pane_srt_g8_ParamLimits

0x0fdb,	// (0x0002582c) volume_small_pane_srt_g8

0x0fec,	// (0x0002583d) volume_small_pane_srt_g9_ParamLimits

0x0fec,	// (0x0002583d) volume_small_pane_srt_g9

0x0ffd,	// (0x0002584e) volume_small_pane_srt_g10_ParamLimits

0x0ffd,	// (0x0002584e) volume_small_pane_srt_g10

0x0009,

0xf736,	// (0x00033f87) volume_small_pane_srt_g_ParamLimits

0xf736,	// (0x00033f87) volume_small_pane_srt_g

0xd337,	// (0x00031b88) query_popup_data_pane_cp2

0x50cd,	// (0x0002991e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x50cd,	// (0x0002991e) navi_navi_icon_text_pane_srt_t1

0x416d,	// (0x000289be) navi_tabs_2_long_pane_srt

0x416d,	// (0x000289be) navi_tabs_2_pane_srt

0x416d,	// (0x000289be) navi_tabs_3_long_pane_srt

0x416d,	// (0x000289be) navi_tabs_3_pane_srt

0x416d,	// (0x000289be) navi_tabs_4_pane_srt

0x1b8a,	// (0x000263db) tabs_2_active_pane_srt_ParamLimits

0x1b8a,	// (0x000263db) tabs_2_active_pane_srt

0x1b9a,	// (0x000263eb) tabs_2_passive_pane_srt_ParamLimits

0x1b9a,	// (0x000263eb) tabs_2_passive_pane_srt

0x393b,	// (0x0002818c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x393b,	// (0x0002818c) bg_passive_tab_pane_cp1_srt

0x5099,	// (0x000298ea) bg_passive_tab_pane_g1_cp1_srt

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp1_srt

0x50a2,	// (0x000298f3) bg_passive_tab_pane_g3_cp1_srt

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp1_srt_ParamLimits

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp1_srt

0x50ab,	// (0x000298fc) tabs_2_active_pane_srt_g1

0xc397,	// (0x00030be8) tabs_2_active_pane_srt_t1_ParamLimits

0xc397,	// (0x00030be8) tabs_2_active_pane_srt_t1

0x5099,	// (0x000298ea) bg_active_tab_pane_g1_cp1_srt

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp1_srt

0x50a2,	// (0x000298f3) bg_active_tab_pane_g3_cp1_srt

0x1b57,	// (0x000263a8) tabs_3_active_pane_srt_ParamLimits

0x1b57,	// (0x000263a8) tabs_3_active_pane_srt

0x1b68,	// (0x000263b9) tabs_3_passive_pane_cp_srt_ParamLimits

0x1b68,	// (0x000263b9) tabs_3_passive_pane_cp_srt

0x1b79,	// (0x000263ca) tabs_3_passive_pane_srt_ParamLimits

0x1b79,	// (0x000263ca) tabs_3_passive_pane_srt

0x393b,	// (0x0002818c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x393b,	// (0x0002818c) bg_passive_tab_pane_cp2_srt

0x321f,	// (0x00027a70) bg_passive_tab_pane_g1_cp2_srt

0x0dee,	// (0x0002563f) bg_passive_tab_pane_g2_cp2_srt

0x3228,	// (0x00027a79) bg_passive_tab_pane_g3_cp2_srt

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp2_srt_ParamLimits

0xaa65,	// (0x0002f2b6) bg_active_tab_pane_cp2_srt

0x507f,	// (0x000298d0) tabs_3_active_pane_srt_g1

0xc381,	// (0x00030bd2) tabs_3_active_pane_srt_t1_ParamLimits

0xc381,	// (0x00030bd2) tabs_3_active_pane_srt_t1

0x321f,	// (0x00027a70) bg_active_tab_pane_g1_cp2_srt

0x0dee,	// (0x0002563f) bg_active_tab_pane_g2_cp2_srt

0x3228,	// (0x00027a79) bg_active_tab_pane_g3_cp2_srt

0x1b0f,	// (0x00026360) tabs_4_active_pane_srt_ParamLimits

0x1b0f,	// (0x00026360) tabs_4_active_pane_srt

0x1b21,	// (0x00026372) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1b21,	// (0x00026372) tabs_4_passive_pane_cp2_srt

0x114f,	// (0x000259a0) aid_size_cell_toolbar

0x4c94,	// (0x000294e5) main_idle_act_pane_ParamLimits

0x132c,	// (0x00025b7d) popup_large_graphic_colour_window_ParamLimits

0xb928,	// (0x00030179) popup_toolbar_window_ParamLimits

0xb928,	// (0x00030179) popup_toolbar_window

0xeda9,	// (0x000335fa) list_single_graphic_2heading_pane_ParamLimits

0xeda9,	// (0x000335fa) list_single_graphic_2heading_pane

0x078f,	// (0x00024fe0) aid_size_cell_apps_grid_lsc_pane

0x07a1,	// (0x00024ff2) aid_size_cell_apps_grid_prt_pane

0x3397,	// (0x00027be8) bg_wml_button_pane_cp1_ParamLimits

0x3397,	// (0x00027be8) bg_wml_button_pane_cp1

0xbe9c,	// (0x000306ed) form_midp_field_text_pane_t1_ParamLimits

0x393b,	// (0x0002818c) input_focus_pane_cp050_ParamLimits

0x3b74,	// (0x000283c5) list_midp_form_text_pane_ParamLimits

0x3b26,	// (0x00028377) input_focus_pane_cp051_ParamLimits

0x3b3a,	// (0x0002838b) list_midp_choice_pane_ParamLimits

0xbe35,	// (0x00030686) list_single_2graphic_pane_cp3_ParamLimits

0xbe35,	// (0x00030686) list_single_2graphic_pane_cp3

0xbe48,	// (0x00030699) list_single_midp_graphic_pane_ParamLimits

0xbe48,	// (0x00030699) list_single_midp_graphic_pane

0xec4e,	// (0x0003349f) list_single_graphic_2heading_pane_g1_ParamLimits

0xec4e,	// (0x0003349f) list_single_graphic_2heading_pane_g1

0xeab2,	// (0x00033303) list_single_graphic_2heading_pane_g4_ParamLimits

0xeab2,	// (0x00033303) list_single_graphic_2heading_pane_g4

0xeabe,	// (0x0003330f) list_single_graphic_2heading_pane_g5_ParamLimits

0xeabe,	// (0x0003330f) list_single_graphic_2heading_pane_g5

0x0002,

0xf789,	// (0x00033fda) list_single_graphic_2heading_pane_g_ParamLimits

0xf789,	// (0x00033fda) list_single_graphic_2heading_pane_g

0xec5a,	// (0x000334ab) list_single_graphic_2heading_pane_t1_ParamLimits

0xec5a,	// (0x000334ab) list_single_graphic_2heading_pane_t1

0xec6e,	// (0x000334bf) list_single_graphic_2heading_pane_t2_ParamLimits

0xec6e,	// (0x000334bf) list_single_graphic_2heading_pane_t2

0xec8a,	// (0x000334db) list_single_graphic_2heading_pane_t3_ParamLimits

0xec8a,	// (0x000334db) list_single_graphic_2heading_pane_t3

0x0002,

0xf790,	// (0x00033fe1) list_single_graphic_2heading_pane_t_ParamLimits

0xf790,	// (0x00033fe1) list_single_graphic_2heading_pane_t

0x3805,	// (0x00028056) bg_popup_sub_pane_cp2

0x382f,	// (0x00028080) grid_toobar_pane

0x1792,	// (0x00025fe3) cell_toolbar_pane_ParamLimits

0x1792,	// (0x00025fe3) cell_toolbar_pane

0x386b,	// (0x000280bc) cell_toolbar_pane_g1_ParamLimits

0x386b,	// (0x000280bc) cell_toolbar_pane_g1

0x387f,	// (0x000280d0) cell_toolbar_pane_g2_ParamLimits

0x387f,	// (0x000280d0) cell_toolbar_pane_g2

0x0001,

0xf79e,	// (0x00033fef) cell_toolbar_pane_g_ParamLimits

0xf79e,	// (0x00033fef) cell_toolbar_pane_g

0x38a1,	// (0x000280f2) grid_highlight_pane_cp2_ParamLimits

0x38a1,	// (0x000280f2) grid_highlight_pane_cp2

0x38bb,	// (0x0002810c) toolbar_button_pane

0x38c7,	// (0x00028118) toolbar_button_pane_g1

0x38cf,	// (0x00028120) toolbar_button_pane_g2

0x38d7,	// (0x00028128) toolbar_button_pane_g3

0x38df,	// (0x00028130) toolbar_button_pane_g4

0x38e7,	// (0x00028138) toolbar_button_pane_g5

0x38ef,	// (0x00028140) toolbar_button_pane_g6

0x38f7,	// (0x00028148) toolbar_button_pane_g7

0x38ff,	// (0x00028150) toolbar_button_pane_g8

0x3907,	// (0x00028158) toolbar_button_pane_g9

0x0009,

0xf7a3,	// (0x00033ff4) toolbar_button_pane_g

0x17ca,	// (0x0002601b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x17ca,	// (0x0002601b) list_single_2graphic_pane_g1_cp3

0xbd97,	// (0x000305e8) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbd97,	// (0x000305e8) list_single_2graphic_pane_g2_cp3

0x2e83,	// (0x000276d4) list_single_2graphic_pane_g3_cp3

0x17e7,	// (0x00026038) list_single_2graphic_pane_g4_cp3_ParamLimits

0x17e7,	// (0x00026038) list_single_2graphic_pane_g4_cp3

0x17f3,	// (0x00026044) list_single_2graphic_pane_t1_cp3_ParamLimits

0x17f3,	// (0x00026044) list_single_2graphic_pane_t1_cp3

0x2e77,	// (0x000276c8) list_single_midp_graphic_pane_g2_ParamLimits

0x2e77,	// (0x000276c8) list_single_midp_graphic_pane_g2

0x1157,	// (0x000259a8) aid_zoom_text_primary

0xec3e,	// (0x0003348f) aid_zoom_text_secondary

0x32d9,	// (0x00027b2a) status_small_pane_g7_ParamLimits

0x32d9,	// (0x00027b2a) status_small_pane_g7

0x32fc,	// (0x00027b4d) status_small_pane_t1_ParamLimits

0xa965,	// (0x0002f1b6) title_pane_g2

0x0003,

0xf527,	// (0x00033d78) title_pane_g

0xac93,	// (0x0002f4e4) aid_size_cell_colour_1_pane_ParamLimits

0xac93,	// (0x0002f4e4) aid_size_cell_colour_1_pane

0xaca7,	// (0x0002f4f8) aid_size_cell_colour_2_pane_ParamLimits

0xaca7,	// (0x0002f4f8) aid_size_cell_colour_2_pane

0xacbb,	// (0x0002f50c) aid_size_cell_colour_3_pane_ParamLimits

0xacbb,	// (0x0002f50c) aid_size_cell_colour_3_pane

0xaccf,	// (0x0002f520) aid_size_cell_colour_4_pane_ParamLimits

0xaccf,	// (0x0002f520) aid_size_cell_colour_4_pane

0x0601,	// (0x00024e52) title_pane_stacon_g1_ParamLimits

0x0601,	// (0x00024e52) title_pane_stacon_g1

0x3f53,	// (0x000287a4) popup_note_wait_window_g3_ParamLimits

0x3f53,	// (0x000287a4) popup_note_wait_window_g3

0x3fca,	// (0x0002881b) popup_note_wait_window_t5_ParamLimits

0x3fca,	// (0x0002881b) popup_note_wait_window_t5

0xa81a,	// (0x0002f06b) main_feb_china_hwr_fs_writing_pane

0xb2b9,	// (0x0002fb0a) popup_feb_china_hwr_fs_window_ParamLimits

0xb2b9,	// (0x0002fb0a) popup_feb_china_hwr_fs_window

0xbda8,	// (0x000305f9) aid_size_cell_hwr_fs_ParamLimits

0xbda8,	// (0x000305f9) aid_size_cell_hwr_fs

0x393b,	// (0x0002818c) bg_popup_sub_pane_cp3_ParamLimits

0x393b,	// (0x0002818c) bg_popup_sub_pane_cp3

0xbdbd,	// (0x0003060e) grid_hwr_fs_pane_ParamLimits

0xbdbd,	// (0x0003060e) grid_hwr_fs_pane

0x1851,	// (0x000260a2) linegrid_hwr_fs_pane_ParamLimits

0x1851,	// (0x000260a2) linegrid_hwr_fs_pane

0xbdd5,	// (0x00030626) cell_hwr_fs_pane_ParamLimits

0xbdd5,	// (0x00030626) cell_hwr_fs_pane

0x3947,	// (0x00028198) linegrid_hwr_fs_pane_g1_ParamLimits

0x3947,	// (0x00028198) linegrid_hwr_fs_pane_g1

0xbdfb,	// (0x0003064c) linegrid_hwr_fs_pane_g2_ParamLimits

0xbdfb,	// (0x0003064c) linegrid_hwr_fs_pane_g2

0x3965,	// (0x000281b6) linegrid_hwr_fs_pane_g3_ParamLimits

0x3965,	// (0x000281b6) linegrid_hwr_fs_pane_g3

0x1885,	// (0x000260d6) linegrid_hwr_fs_pane_g4_ParamLimits

0x1885,	// (0x000260d6) linegrid_hwr_fs_pane_g4

0x18a3,	// (0x000260f4) linegrid_hwr_fs_pane_g5_ParamLimits

0x18a3,	// (0x000260f4) linegrid_hwr_fs_pane_g5

0x0004,

0xf7c9,	// (0x0003401a) linegrid_hwr_fs_pane_g_ParamLimits

0xf7c9,	// (0x0003401a) linegrid_hwr_fs_pane_g

0x3971,	// (0x000281c2) cell_hwr_fs_pane_g1_ParamLimits

0x3971,	// (0x000281c2) cell_hwr_fs_pane_g1

0x3742,	// (0x00027f93) cell_hwr_fs_pane_g2_ParamLimits

0x3742,	// (0x00027f93) cell_hwr_fs_pane_g2

0xbe0d,	// (0x0003065e) cell_hwr_fs_pane_g3_ParamLimits

0xbe0d,	// (0x0003065e) cell_hwr_fs_pane_g3

0xbe1a,	// (0x0003066b) cell_hwr_fs_pane_g4_ParamLimits

0xbe1a,	// (0x0003066b) cell_hwr_fs_pane_g4

0x0003,

0xf7d4,	// (0x00034025) cell_hwr_fs_pane_g_ParamLimits

0xf7d4,	// (0x00034025) cell_hwr_fs_pane_g

0xbe27,	// (0x00030678) cell_hwr_fs_pane_t1

0xa81a,	// (0x0002f06b) grid_highlight_pane_cp6

0xa81a,	// (0x0002f06b) main_idle_act2_pane

0x03b0,	// (0x00024c01) aid_inside_area_popup_secondary

0xbf62,	// (0x000307b3) aid_inside_area_window_primary_ParamLimits

0xbf62,	// (0x000307b3) aid_inside_area_window_primary

0x51e6,	// (0x00029a37) ai2_news_ticker_pane

0x51ee,	// (0x00029a3f) aid_size_cell_ai1_link_ParamLimits

0x51ee,	// (0x00029a3f) aid_size_cell_ai1_link

0x5208,	// (0x00029a59) popup_ai2_data_window_ParamLimits

0x5208,	// (0x00029a59) popup_ai2_data_window

0x5226,	// (0x00029a77) popup_ai2_link_window_ParamLimits

0x5226,	// (0x00029a77) popup_ai2_link_window

0x393b,	// (0x0002818c) bg_popup_sub_pane_cp4_ParamLimits

0x393b,	// (0x0002818c) bg_popup_sub_pane_cp4

0x523c,	// (0x00029a8d) grid_ai2_link_pane_ParamLimits

0x523c,	// (0x00029a8d) grid_ai2_link_pane

0x5253,	// (0x00029aa4) popup_ai2_link_window_g1_ParamLimits

0x5253,	// (0x00029aa4) popup_ai2_link_window_g1

0x525f,	// (0x00029ab0) popup_ai2_link_window_g2_ParamLimits

0x525f,	// (0x00029ab0) popup_ai2_link_window_g2

0x0001,

0xf9a7,	// (0x000341f8) popup_ai2_link_window_g_ParamLimits

0xf9a7,	// (0x000341f8) popup_ai2_link_window_g

0x5270,	// (0x00029ac1) ai2_mp_button_pane

0x5278,	// (0x00029ac9) ai2_mp_volume_pane

0x3b26,	// (0x00028377) bg_popup_sub_pane_cp5_ParamLimits

0x3b26,	// (0x00028377) bg_popup_sub_pane_cp5

0x5280,	// (0x00029ad1) heading_ai2_gene_pane_ParamLimits

0x5280,	// (0x00029ad1) heading_ai2_gene_pane

0x528c,	// (0x00029add) list_ai2_gene_pane_ParamLimits

0x528c,	// (0x00029add) list_ai2_gene_pane

0x52d4,	// (0x00029b25) cell_ai2_link_pane_ParamLimits

0x52d4,	// (0x00029b25) cell_ai2_link_pane

0x52ea,	// (0x00029b3b) cell_ai2_link_pane_g1

0xa81a,	// (0x0002f06b) grid_highlight_pane_cp7

0x1bc7,	// (0x00026418) ai2_mp_volume_pane_g1

0x53bd,	// (0x00029c0e) ai2_mp_volume_pane_g2

0x5332,	// (0x00029b83) list_ai2_gene_pane_t1

0x53c5,	// (0x00029c16) ai2_mp_volume_pane_g3

0x0002,

0xf9c0,	// (0x00034211) ai2_mp_volume_pane_g

0x1bcf,	// (0x00026420) volume_small_pane_cp3

0x53cd,	// (0x00029c1e) aid_size_cell_ai2_button

0x53d5,	// (0x00029c26) grid_ai2_button_pane

0x53de,	// (0x00029c2f) cell_ai2_button_pane_ParamLimits

0x53de,	// (0x00029c2f) cell_ai2_button_pane

0xa76c,	// (0x0002efbd) cell_ai2_button_pane_g1

0xa81a,	// (0x0002f06b) grid_highlight_pane_cp8

0x537d,	// (0x00029bce) ai2_gene_pane_t1_ParamLimits

0x537d,	// (0x00029bce) ai2_gene_pane_t1

0xb235,	// (0x0002fa86) aid_height_parent_landscape

0xc11a,	// (0x0003096b) aid_height_set_list

0x4c94,	// (0x000294e5) aid_size_parent

0x5005,	// (0x00029856) aid_size_cell_graphic_pane_ParamLimits

0x529c,	// (0x00029aed) popup_ai2_data_window_g1_ParamLimits

0x529c,	// (0x00029aed) popup_ai2_data_window_g1

0x52a8,	// (0x00029af9) ai2_news_ticker_pane_g1

0x52b0,	// (0x00029b01) ai2_news_ticker_pane_g2

0x0001,

0xf9ac,	// (0x000341fd) ai2_news_ticker_pane_g

0x52b8,	// (0x00029b09) ai2_news_ticker_pane_t1

0x52c6,	// (0x00029b17) ai2_news_ticker_pane_t2

0x0001,

0xf9b1,	// (0x00034202) ai2_news_ticker_pane_t

0x52f3,	// (0x00029b44) heading_ai2_gene_pane_g1

0x52fb,	// (0x00029b4c) heading_ai2_gene_pane_t1_ParamLimits

0x52fb,	// (0x00029b4c) heading_ai2_gene_pane_t1

0x5310,	// (0x00029b61) list_highlight_pane_cp6

0x5318,	// (0x00029b69) ai2_gene_pane_ParamLimits

0x5318,	// (0x00029b69) ai2_gene_pane

0x5340,	// (0x00029b91) list_ai2_gene_pane_t2

0x0001,

0xf9b6,	// (0x00034207) list_ai2_gene_pane_t

0x534e,	// (0x00029b9f) list_highlight_pane_cp8_ParamLimits

0x534e,	// (0x00029b9f) list_highlight_pane_cp8

0x535f,	// (0x00029bb0) ai2_gene_pane_g1_ParamLimits

0x535f,	// (0x00029bb0) ai2_gene_pane_g1

0x5371,	// (0x00029bc2) ai2_gene_pane_g2_ParamLimits

0x5371,	// (0x00029bc2) ai2_gene_pane_g2

0x0001,

0xf9bb,	// (0x0003420c) ai2_gene_pane_g_ParamLimits

0xf9bb,	// (0x0003420c) ai2_gene_pane_g

0xd659,	// (0x00031eaa) scroll_pane_cp12

0xb1f4,	// (0x0002fa45) control_pane_t3_ParamLimits

0xb1f4,	// (0x0002fa45) control_pane_t3

0x32ed,	// (0x00027b3e) status_small_pane_g8_ParamLimits

0x32ed,	// (0x00027b3e) status_small_pane_g8

0xb35b,	// (0x0002fbac) popup_find_window_ParamLimits

0xb612,	// (0x0002fe63) popup_note_image_window_ParamLimits

0xeae0,	// (0x00033331) list_double2_graphic_pane_vc_g1_ParamLimits

0xeae0,	// (0x00033331) list_double2_graphic_pane_vc_g1

0xeca2,	// (0x000334f3) list_double2_graphic_pane_vc_g2_ParamLimits

0xeca2,	// (0x000334f3) list_double2_graphic_pane_vc_g2

0xecae,	// (0x000334ff) list_double2_graphic_pane_vc_g3_ParamLimits

0xecae,	// (0x000334ff) list_double2_graphic_pane_vc_g3

0x0002,

0xf797,	// (0x00033fe8) list_double2_graphic_pane_vc_g_ParamLimits

0xf797,	// (0x00033fe8) list_double2_graphic_pane_vc_g

0xecba,	// (0x0003350b) list_double2_graphic_pane_vc_t1_ParamLimits

0xecba,	// (0x0003350b) list_double2_graphic_pane_vc_t1

0xeab2,	// (0x00033303) list_single_heading_pane_vc_g1_ParamLimits

0xeab2,	// (0x00033303) list_single_heading_pane_vc_g1

0xeabe,	// (0x0003330f) list_single_heading_pane_vc_g2_ParamLimits

0xeabe,	// (0x0003330f) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00033df2) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00033df2) list_single_heading_pane_vc_g

0xecd0,	// (0x00033521) list_single_heading_pane_vc_t1_ParamLimits

0xecd0,	// (0x00033521) list_single_heading_pane_vc_t1

0xece6,	// (0x00033537) list_single_heading_pane_vc_t2_ParamLimits

0xece6,	// (0x00033537) list_single_heading_pane_vc_t2

0x0001,

0xf7b8,	// (0x00034009) list_single_heading_pane_vc_t_ParamLimits

0xf7b8,	// (0x00034009) list_single_heading_pane_vc_t

0xecfc,	// (0x0003354d) list_setting_number_pane_vc_g1_ParamLimits

0xecfc,	// (0x0003354d) list_setting_number_pane_vc_g1

0xed08,	// (0x00033559) list_setting_number_pane_vc_g2_ParamLimits

0xed08,	// (0x00033559) list_setting_number_pane_vc_g2

0x0001,

0xf7bd,	// (0x0003400e) list_setting_number_pane_vc_g_ParamLimits

0xf7bd,	// (0x0003400e) list_setting_number_pane_vc_g

0xed14,	// (0x00033565) list_setting_number_pane_vc_t1_ParamLimits

0xed14,	// (0x00033565) list_setting_number_pane_vc_t1

0xed28,	// (0x00033579) list_setting_number_pane_vc_t2_ParamLimits

0xed28,	// (0x00033579) list_setting_number_pane_vc_t2

0xed44,	// (0x00033595) list_setting_number_pane_vc_t3_ParamLimits

0xed44,	// (0x00033595) list_setting_number_pane_vc_t3

0x0002,

0xf7c2,	// (0x00034013) list_setting_number_pane_vc_t_ParamLimits

0xf7c2,	// (0x00034013) list_setting_number_pane_vc_t

0xed72,	// (0x000335c3) set_value_pane_vc_ParamLimits

0xed72,	// (0x000335c3) set_value_pane_vc

0xeda9,	// (0x000335fa) list_double2_graphic_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_double2_graphic_pane_vc

0x4e7d,	// (0x000296ce) list_double2_large_graphic_pane_vc_ParamLimits

0x4e7d,	// (0x000296ce) list_double2_large_graphic_pane_vc

0xeda9,	// (0x000335fa) list_double2_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_double2_pane_vc

0xeda9,	// (0x000335fa) list_double_graphic_heading_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_double_graphic_heading_pane_vc

0xeda9,	// (0x000335fa) list_double_graphic_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_double_graphic_pane_vc

0xeda9,	// (0x000335fa) list_double_heading_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_double_heading_pane_vc

0x4e91,	// (0x000296e2) list_double_large_graphic_pane_vc_ParamLimits

0x4e91,	// (0x000296e2) list_double_large_graphic_pane_vc

0xeda9,	// (0x000335fa) list_double_number_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_double_number_pane_vc

0xeda9,	// (0x000335fa) list_double_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_double_pane_vc

0xeda9,	// (0x000335fa) list_double_time_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_double_time_pane_vc

0xeda9,	// (0x000335fa) list_setting_number_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_setting_number_pane_vc

0xeda9,	// (0x000335fa) list_setting_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_setting_pane_vc

0xeda9,	// (0x000335fa) list_single_graphic_heading_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_single_graphic_heading_pane_vc

0xeda9,	// (0x000335fa) list_single_heading_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_single_heading_pane_vc

0xeda9,	// (0x000335fa) list_single_number_heading_pane_vc_ParamLimits

0xeda9,	// (0x000335fa) list_single_number_heading_pane_vc

0xedc0,	// (0x00033611) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xedc0,	// (0x00033611) list_double_graphic_heading_pane_vc_g1

0xeca2,	// (0x000334f3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xeca2,	// (0x000334f3) list_double_graphic_heading_pane_vc_g2

0xecae,	// (0x000334ff) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xecae,	// (0x000334ff) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9c7,	// (0x00034218) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9c7,	// (0x00034218) list_double_graphic_heading_pane_vc_g

0xedcc,	// (0x0003361d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xedcc,	// (0x0003361d) list_double_graphic_heading_pane_vc_t1

0xede2,	// (0x00033633) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xede2,	// (0x00033633) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0003421f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0003421f) list_double_graphic_heading_pane_vc_t

0xecfc,	// (0x0003354d) list_setting_pane_vc_g1_ParamLimits

0xecfc,	// (0x0003354d) list_setting_pane_vc_g1

0xed08,	// (0x00033559) list_setting_pane_vc_g2_ParamLimits

0xed08,	// (0x00033559) list_setting_pane_vc_g2

0x0001,

0xf7bd,	// (0x0003400e) list_setting_pane_vc_g_ParamLimits

0xf7bd,	// (0x0003400e) list_setting_pane_vc_g

0xee00,	// (0x00033651) list_setting_pane_vc_t1_ParamLimits

0xee00,	// (0x00033651) list_setting_pane_vc_t1

0xee1c,	// (0x0003366d) list_setting_pane_vc_t2_ParamLimits

0xee1c,	// (0x0003366d) list_setting_pane_vc_t2

0x0001,

0xfa11,	// (0x00034262) list_setting_pane_vc_t_ParamLimits

0xfa11,	// (0x00034262) list_setting_pane_vc_t

0xed72,	// (0x000335c3) set_value_pane_cp_vc_ParamLimits

0xed72,	// (0x000335c3) set_value_pane_cp_vc

0xeab2,	// (0x00033303) list_single_number_heading_pane_vc_g1_ParamLimits

0xeab2,	// (0x00033303) list_single_number_heading_pane_vc_g1

0xeabe,	// (0x0003330f) list_single_number_heading_pane_vc_g2_ParamLimits

0xeabe,	// (0x0003330f) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00033df2) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00033df2) list_single_number_heading_pane_vc_g

0xeaca,	// (0x0003331b) list_single_number_heading_pane_vc_t1_ParamLimits

0xeaca,	// (0x0003331b) list_single_number_heading_pane_vc_t1

0xee38,	// (0x00033689) list_single_number_heading_pane_vc_t2_ParamLimits

0xee38,	// (0x00033689) list_single_number_heading_pane_vc_t2

0xee4e,	// (0x0003369f) list_single_number_heading_pane_vc_t3_ParamLimits

0xee4e,	// (0x0003369f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa16,	// (0x00034267) list_single_number_heading_pane_vc_t_ParamLimits

0xfa16,	// (0x00034267) list_single_number_heading_pane_vc_t

0xeae0,	// (0x00033331) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xeae0,	// (0x00033331) list_single_graphic_heading_pane_vc_g1

0xeab2,	// (0x00033303) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xeab2,	// (0x00033303) list_single_graphic_heading_pane_vc_g4

0xeabe,	// (0x0003330f) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeabe,	// (0x0003330f) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa1d,	// (0x0003426e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa1d,	// (0x0003426e) list_single_graphic_heading_pane_vc_g

0xeaca,	// (0x0003331b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xeaca,	// (0x0003331b) list_single_graphic_heading_pane_vc_t1

0xee60,	// (0x000336b1) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xee60,	// (0x000336b1) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa24,	// (0x00034275) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa24,	// (0x00034275) list_single_graphic_heading_pane_vc_t

0xeab2,	// (0x00033303) list_double2_pane_vc_g1_ParamLimits

0xeab2,	// (0x00033303) list_double2_pane_vc_g1

0xeabe,	// (0x0003330f) list_double2_pane_vc_g2_ParamLimits

0xeabe,	// (0x0003330f) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x00033df2) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x00033df2) list_double2_pane_vc_g

0xed93,	// (0x000335e4) list_double2_pane_vc_t1_ParamLimits

0xed93,	// (0x000335e4) list_double2_pane_vc_t1

0xeaec,	// (0x0003333d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xeaec,	// (0x0003333d) list_double2_large_graphic_pane_vc_g1

0xeaf8,	// (0x00033349) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xeaf8,	// (0x00033349) list_double2_large_graphic_pane_vc_g2

0xeb04,	// (0x00033355) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeb04,	// (0x00033355) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x00033e0f) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x00033e0f) list_double2_large_graphic_pane_vc_g

0xeb10,	// (0x00033361) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xeb10,	// (0x00033361) list_double2_large_graphic_pane_vc_t1

0xee72,	// (0x000336c3) list_double_time_pane_vc_g1_ParamLimits

0xee72,	// (0x000336c3) list_double_time_pane_vc_g1

0xee7e,	// (0x000336cf) list_double_time_pane_vc_g2_ParamLimits

0xee7e,	// (0x000336cf) list_double_time_pane_vc_g2

0x0001,

0xfa29,	// (0x0003427a) list_double_time_pane_vc_g_ParamLimits

0xfa29,	// (0x0003427a) list_double_time_pane_vc_g

0xee8a,	// (0x000336db) list_double_time_pane_vc_t1_ParamLimits

0xee8a,	// (0x000336db) list_double_time_pane_vc_t1

0xeeb4,	// (0x00033705) list_double_time_pane_vc_t2_ParamLimits

0xeeb4,	// (0x00033705) list_double_time_pane_vc_t2

0xef09,	// (0x0003375a) list_double_time_pane_vc_t3_ParamLimits

0xef09,	// (0x0003375a) list_double_time_pane_vc_t3

0xef1b,	// (0x0003376c) list_double_time_pane_vc_t4_ParamLimits

0xef1b,	// (0x0003376c) list_double_time_pane_vc_t4

0x0003,

0xfa2e,	// (0x0003427f) list_double_time_pane_vc_t_ParamLimits

0xfa2e,	// (0x0003427f) list_double_time_pane_vc_t

0xeab2,	// (0x00033303) list_double_pane_vc_g1_ParamLimits

0xeab2,	// (0x00033303) list_double_pane_vc_g1

0xeabe,	// (0x0003330f) list_double_pane_vc_g2_ParamLimits

0xeabe,	// (0x0003330f) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x00033df2) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x00033df2) list_double_pane_vc_g

0xef2f,	// (0x00033780) list_double_pane_vc_t1_ParamLimits

0xef2f,	// (0x00033780) list_double_pane_vc_t1

0xef43,	// (0x00033794) list_double_pane_vc_t2_ParamLimits

0xef43,	// (0x00033794) list_double_pane_vc_t2

0x0001,

0xfa37,	// (0x00034288) list_double_pane_vc_t_ParamLimits

0xfa37,	// (0x00034288) list_double_pane_vc_t

0xeab2,	// (0x00033303) list_double_number_pane_vc_g1_ParamLimits

0xeab2,	// (0x00033303) list_double_number_pane_vc_g1

0xeabe,	// (0x0003330f) list_double_number_pane_vc_g2_ParamLimits

0xeabe,	// (0x0003330f) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x00033df2) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x00033df2) list_double_number_pane_vc_g

0xef59,	// (0x000337aa) list_double_number_pane_vc_t1_ParamLimits

0xef59,	// (0x000337aa) list_double_number_pane_vc_t1

0xef6b,	// (0x000337bc) list_double_number_pane_vc_t2_ParamLimits

0xef6b,	// (0x000337bc) list_double_number_pane_vc_t2

0xef7f,	// (0x000337d0) list_double_number_pane_vc_t3_ParamLimits

0xef7f,	// (0x000337d0) list_double_number_pane_vc_t3

0x0002,

0xfa3c,	// (0x0003428d) list_double_number_pane_vc_t_ParamLimits

0xfa3c,	// (0x0003428d) list_double_number_pane_vc_t

0xef97,	// (0x000337e8) list_double_large_graphic_pane_vc_g1_ParamLimits

0xef97,	// (0x000337e8) list_double_large_graphic_pane_vc_g1

0xefb9,	// (0x0003380a) list_double_large_graphic_pane_vc_g2_ParamLimits

0xefb9,	// (0x0003380a) list_double_large_graphic_pane_vc_g2

0xefcd,	// (0x0003381e) list_double_large_graphic_pane_vc_g3_ParamLimits

0xefcd,	// (0x0003381e) list_double_large_graphic_pane_vc_g3

0xefdc,	// (0x0003382d) list_double_large_graphic_pane_vc_g4_ParamLimits

0xefdc,	// (0x0003382d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa43,	// (0x00034294) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa43,	// (0x00034294) list_double_large_graphic_pane_vc_g

0xefe8,	// (0x00033839) list_double_large_graphic_pane_vc_t1_ParamLimits

0xefe8,	// (0x00033839) list_double_large_graphic_pane_vc_t1

0xf004,	// (0x00033855) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf004,	// (0x00033855) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4c,	// (0x0003429d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003429d) list_double_large_graphic_pane_vc_t

0xeca2,	// (0x000334f3) list_double_heading_pane_vc_g1_ParamLimits

0xeca2,	// (0x000334f3) list_double_heading_pane_vc_g1

0xecae,	// (0x000334ff) list_double_heading_pane_vc_g2_ParamLimits

0xecae,	// (0x000334ff) list_double_heading_pane_vc_g2

0x0001,

0xfa51,	// (0x000342a2) list_double_heading_pane_vc_g_ParamLimits

0xfa51,	// (0x000342a2) list_double_heading_pane_vc_g

0xf024,	// (0x00033875) list_double_heading_pane_vc_t1_ParamLimits

0xf024,	// (0x00033875) list_double_heading_pane_vc_t1

0xf036,	// (0x00033887) list_double_heading_pane_vc_t2_ParamLimits

0xf036,	// (0x00033887) list_double_heading_pane_vc_t2

0x0001,

0xfa56,	// (0x000342a7) list_double_heading_pane_vc_t_ParamLimits

0xfa56,	// (0x000342a7) list_double_heading_pane_vc_t

0xf04e,	// (0x0003389f) list_double_graphic_pane_vc_g1_ParamLimits

0xf04e,	// (0x0003389f) list_double_graphic_pane_vc_g1

0xf061,	// (0x000338b2) list_double_graphic_pane_vc_g2_ParamLimits

0xf061,	// (0x000338b2) list_double_graphic_pane_vc_g2

0xeab2,	// (0x00033303) list_double_graphic_pane_vc_g3_ParamLimits

0xeab2,	// (0x00033303) list_double_graphic_pane_vc_g3

0x0003,

0xfa5b,	// (0x000342ac) list_double_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x000342ac) list_double_graphic_pane_vc_g

0xf07e,	// (0x000338cf) list_double_graphic_pane_vc_t1_ParamLimits

0xf07e,	// (0x000338cf) list_double_graphic_pane_vc_t1

0xf0a8,	// (0x000338f9) list_double_graphic_pane_vc_t2_ParamLimits

0xf0a8,	// (0x000338f9) list_double_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x000342b5) list_double_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x000342b5) list_double_graphic_pane_vc_t

0xf2ee,	// (0x00033b3f) aid_size_cell_fastswap

0xa776,	// (0x0002efc7) aid_size_cell_touch_ParamLimits

0xa776,	// (0x0002efc7) aid_size_cell_touch

0xf4f9,	// (0x00033d4a) popup_fast_swap_wide_window_ParamLimits

0xf4f9,	// (0x00033d4a) popup_fast_swap_wide_window

0xa8fc,	// (0x0002f14d) touch_pane_ParamLimits

0xa8fc,	// (0x0002f14d) touch_pane

0xd6af,	// (0x00031f00) button_value_adjust_pane_cp2

0xeb49,	// (0x0003339a) button_value_adjust_pane_cp4

0xeb51,	// (0x000333a2) form_field_data_pane_cp2

0xa2d5,	// (0x0002eb26) form_field_data_wide_pane_cp2

0x088f,	// (0x000250e0) bg_scroll_pane_ParamLimits

0x08ae,	// (0x000250ff) scroll_handle_pane_ParamLimits

0x08c2,	// (0x00025113) scroll_sc2_down_pane_ParamLimits

0x08c2,	// (0x00025113) scroll_sc2_down_pane

0x08e9,	// (0x0002513a) scroll_sc2_up_pane_ParamLimits

0x08e9,	// (0x0002513a) scroll_sc2_up_pane

0xc4d9,	// (0x00030d2a) grid_wheel_folder_pane_g1_ParamLimits

0xc4d9,	// (0x00030d2a) grid_wheel_folder_pane_g1

0x0efd,	// (0x0002574e) clock_nsta_pane_cp2_ParamLimits

0x0efd,	// (0x0002574e) clock_nsta_pane_cp2

0xb048,	// (0x0002f899) listscroll_midp_pane_ParamLimits

0xb054,	// (0x0002f8a5) midp_canvas_pane

0x3367,	// (0x00027bb8) nsta_clock_indic_pane

0x33a3,	// (0x00027bf4) listscroll_form_pane_vc

0x33ab,	// (0x00027bfc) listscroll_set_pane_vc_ParamLimits

0x33ab,	// (0x00027bfc) listscroll_set_pane_vc

0xba8c,	// (0x000302dd) clock_nsta_pane

0xbab6,	// (0x00030307) indicator_nsta_pane

0x3805,	// (0x00028056) bg_popup_sub_pane_cp2_ParamLimits

0x3819,	// (0x0002806a) find_pane_cp2_ParamLimits

0x3819,	// (0x0002806a) find_pane_cp2

0x382f,	// (0x00028080) grid_toobar_pane_ParamLimits

0x390f,	// (0x00028160) list_form_gen_pane_vc_ParamLimits

0x390f,	// (0x00028160) list_form_gen_pane_vc

0x3925,	// (0x00028176) scroll_pane_cp8_vc_ParamLimits

0x3925,	// (0x00028176) scroll_pane_cp8_vc

0x39a1,	// (0x000281f2) data_form_wide_pane_vc_ParamLimits

0x39a1,	// (0x000281f2) data_form_wide_pane_vc

0x39ad,	// (0x000281fe) form_field_data_wide_pane_vc_g1

0x39b5,	// (0x00028206) form_field_data_wide_pane_vc_t1_ParamLimits

0x39b5,	// (0x00028206) form_field_data_wide_pane_vc_t1

0xd6c3,	// (0x00031f14) input_focus_pane_cp6_vc_ParamLimits

0xd6c3,	// (0x00031f14) input_focus_pane_cp6_vc

0x3cd1,	// (0x00028522) list_midp_pane_ParamLimits

0x5073,	// (0x000298c4) scroll_pane_cp16_ParamLimits

0x5073,	// (0x000298c4) scroll_pane_cp16

0x3d27,	// (0x00028578) button_value_adjust_pane_ParamLimits

0x3d27,	// (0x00028578) button_value_adjust_pane

0xc12b,	// (0x0003097c) button_value_adjust_pane_cp6_ParamLimits

0xc12b,	// (0x0003097c) button_value_adjust_pane_cp6

0xc267,	// (0x00030ab8) settings_code_pane_cp_ParamLimits

0xc267,	// (0x00030ab8) settings_code_pane_cp

0xa76c,	// (0x0002efbd) cell_touch_pane_g1

0xa76c,	// (0x0002efbd) cell_touch_pane_g2

0x0001,

0xf6dc,	// (0x00033f2d) cell_touch_pane_g

0xc3ad,	// (0x00030bfe) cell_touch_pane_cp_ParamLimits

0xc3ad,	// (0x00030bfe) cell_touch_pane_cp

0xc3c9,	// (0x00030c1a) cell_touch_pane_ParamLimits

0xc3c9,	// (0x00030c1a) cell_touch_pane

0xa76c,	// (0x0002efbd) scroll_sc2_down_pane_g1

0xa76c,	// (0x0002efbd) scroll_sc2_up_pane_g1

0xa81a,	// (0x0002f06b) bg_set_opt_pane_cp4_vc

0x5411,	// (0x00029c62) list_set_graphic_pane_vc_g1_ParamLimits

0x5411,	// (0x00029c62) list_set_graphic_pane_vc_g1

0x541d,	// (0x00029c6e) list_set_graphic_pane_vc_g2_ParamLimits

0x541d,	// (0x00029c6e) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x00034224) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x00034224) list_set_graphic_pane_vc_g

0x5429,	// (0x00029c7a) text_primary_small_cp13_vc_ParamLimits

0x5429,	// (0x00029c7a) text_primary_small_cp13_vc

0x5441,	// (0x00029c92) list_set_graphic_pane_vc_ParamLimits

0x5441,	// (0x00029c92) list_set_graphic_pane_vc

0xa81a,	// (0x0002f06b) input_focus_pane_cp2_vc

0xa76c,	// (0x0002efbd) setting_code_pane_vc_g1

0xaabe,	// (0x0002f30f) setting_code_pane_vc_t1

0x5454,	// (0x00029ca5) set_text_pane_vc_t1_ParamLimits

0x5454,	// (0x00029ca5) set_text_pane_vc_t1

0xa81a,	// (0x0002f06b) input_focus_pane_cp1_vc

0x5475,	// (0x00029cc6) list_set_text_pane_vc

0xa76c,	// (0x0002efbd) setting_text_pane_vc_g1

0xa81a,	// (0x0002f06b) bg_set_opt_pane_cp2_vc

0xaab5,	// (0x0002f306) setting_slider_graphic_pane_vc_g1

0x547f,	// (0x00029cd0) setting_slider_graphic_pane_vc_t1

0x5491,	// (0x00029ce2) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x00034229) setting_slider_graphic_pane_vc_t

0x54a3,	// (0x00029cf4) slider_set_pane_cp_vc

0x54ad,	// (0x00029cfe) slider_set_pane_vc_g1

0x54b6,	// (0x00029d07) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x0003422e) slider_set_pane_vc_g

0xd71b,	// (0x00031f6c) set_opt_bg_pane_g1_copy1

0xd723,	// (0x00031f74) set_opt_bg_pane_g2_copy1

0x54e2,	// (0x00029d33) set_opt_bg_pane_g3_copy1

0xd733,	// (0x00031f84) set_opt_bg_pane_g4_copy1

0xd73b,	// (0x00031f8c) set_opt_bg_pane_g5_copy1

0xd743,	// (0x00031f94) set_opt_bg_pane_g6_copy1

0x54ec,	// (0x00029d3d) set_opt_bg_pane_g7_copy1

0x54f6,	// (0x00029d47) set_opt_bg_pane_g8_copy1

0x5500,	// (0x00029d51) set_opt_bg_pane_g9_copy1

0xa81a,	// (0x0002f06b) bg_set_opt_pane_cp_vc

0x550a,	// (0x00029d5b) setting_slider_pane_vc_t1

0x5519,	// (0x00029d6a) setting_slider_pane_vc_t2

0x552b,	// (0x00029d7c) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x0003423d) setting_slider_pane_vc_t

0x553d,	// (0x00029d8e) slider_set_pane_vc

0x18c7,	// (0x00026118) volume_set_pane_vc_g1

0x18d0,	// (0x00026121) volume_set_pane_vc_g2

0x18d9,	// (0x0002612a) volume_set_pane_vc_g3

0x18e2,	// (0x00026133) volume_set_pane_vc_g4

0x18eb,	// (0x0002613c) volume_set_pane_vc_g5

0x18f4,	// (0x00026145) volume_set_pane_vc_g6

0x18fd,	// (0x0002614e) volume_set_pane_vc_g7

0x1906,	// (0x00026157) volume_set_pane_vc_g8

0x190f,	// (0x00026160) volume_set_pane_vc_g9

0x1918,	// (0x00026169) volume_set_pane_vc_g10

0x0009,

0xf9f3,	// (0x00034244) volume_set_pane_vc_g

0x5547,	// (0x00029d98) volume_set_pane_vc

0x5551,	// (0x00029da2) button_value_adjust_pane_cp1_vc

0x555b,	// (0x00029dac) list_highlight_pane_cp2_vc

0x5564,	// (0x00029db5) list_set_pane_vc_ParamLimits

0x5564,	// (0x00029db5) list_set_pane_vc

0x55d2,	// (0x00029e23) main_pane_set_vc_t1_ParamLimits

0x55d2,	// (0x00029e23) main_pane_set_vc_t1

0x55e7,	// (0x00029e38) main_pane_set_vc_t2_ParamLimits

0x55e7,	// (0x00029e38) main_pane_set_vc_t2

0x55f9,	// (0x00029e4a) main_pane_set_vc_t3_ParamLimits

0x55f9,	// (0x00029e4a) main_pane_set_vc_t3

0x560d,	// (0x00029e5e) main_pane_set_vc_t4_ParamLimits

0x560d,	// (0x00029e5e) main_pane_set_vc_t4

0x0003,

0xfa08,	// (0x00034259) main_pane_set_vc_t_ParamLimits

0xfa08,	// (0x00034259) main_pane_set_vc_t

0x5621,	// (0x00029e72) setting_code_pane_vc_ParamLimits

0x5621,	// (0x00029e72) setting_code_pane_vc

0x5632,	// (0x00029e83) setting_slider_graphic_pane_vc

0x5632,	// (0x00029e83) setting_slider_pane_vc

0x5632,	// (0x00029e83) setting_text_pane_vc

0x5632,	// (0x00029e83) setting_volume_pane_vc

0x563c,	// (0x00029e8d) scroll_pane_cp121_vc

0xd69d,	// (0x00031eee) set_content_pane_vc

0x5644,	// (0x00029e95) button_value_adjust_pane_g1

0x564d,	// (0x00029e9e) button_value_adjust_pane_g2

0x0001,

0xfa69,	// (0x000342ba) button_value_adjust_pane_g

0x5656,	// (0x00029ea7) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5656,	// (0x00029ea7) form_field_slider_wide_pane_vc_t1

0x5668,	// (0x00029eb9) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5668,	// (0x00029eb9) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6e,	// (0x000342bf) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6e,	// (0x000342bf) form_field_slider_wide_pane_vc_t

0xaa65,	// (0x0002f2b6) input_focus_pane_cp10_vc_ParamLimits

0xaa65,	// (0x0002f2b6) input_focus_pane_cp10_vc

0x5694,	// (0x00029ee5) slider_cont_pane_cp1_vc_ParamLimits

0x5694,	// (0x00029ee5) slider_cont_pane_cp1_vc

0x56a6,	// (0x00029ef7) slider_form_pane_g1_cp2

0x54b6,	// (0x00029d07) slider_form_pane_g2_cp2

0x56d3,	// (0x00029f24) form_field_slider_pane_vc_t3

0x56e1,	// (0x00029f32) form_field_slider_pane_vc_t4

0x56ef,	// (0x00029f40) slider_form_pane_vc_ParamLimits

0x56ef,	// (0x00029f40) slider_form_pane_vc

0x56fc,	// (0x00029f4d) form_field_slider_pane_vc_t1_ParamLimits

0x56fc,	// (0x00029f4d) form_field_slider_pane_vc_t1

0x5668,	// (0x00029eb9) form_field_slider_pane_vc_t2_ParamLimits

0x5668,	// (0x00029eb9) form_field_slider_pane_vc_t2

0x0001,

0xfa80,	// (0x000342d1) form_field_slider_pane_vc_t_ParamLimits

0xfa80,	// (0x000342d1) form_field_slider_pane_vc_t

0xaa65,	// (0x0002f2b6) input_focus_pane_cp9_vc_ParamLimits

0xaa65,	// (0x0002f2b6) input_focus_pane_cp9_vc

0x5712,	// (0x00029f63) slider_cont_pane_vc_ParamLimits

0x5712,	// (0x00029f63) slider_cont_pane_vc

0x5726,	// (0x00029f77) list_form_graphic_pane_cp_vc_ParamLimits

0x5726,	// (0x00029f77) list_form_graphic_pane_cp_vc

0x39ad,	// (0x000281fe) form_field_popup_wide_pane_vc_g1

0x573b,	// (0x00029f8c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x573b,	// (0x00029f8c) form_field_popup_wide_pane_vc_t1

0xd6c3,	// (0x00031f14) input_focus_pane_cp8_vc_ParamLimits

0xd6c3,	// (0x00031f14) input_focus_pane_cp8_vc

0x5780,	// (0x00029fd1) list_form_wide_pane_vc_ParamLimits

0x5780,	// (0x00029fd1) list_form_wide_pane_vc

0x578c,	// (0x00029fdd) list_form_graphic_pane_vc_g1

0x5794,	// (0x00029fe5) list_form_graphic_pane_vc_t1_ParamLimits

0x5794,	// (0x00029fe5) list_form_graphic_pane_vc_t1

0xaaa7,	// (0x0002f2f8) list_highlight_pane_cp5_vc_ParamLimits

0xaaa7,	// (0x0002f2f8) list_highlight_pane_cp5_vc

0x57b0,	// (0x0002a001) list_form_graphic_pane_vc_ParamLimits

0x57b0,	// (0x0002a001) list_form_graphic_pane_vc

0x39ad,	// (0x000281fe) form_field_popup_pane_vc_g1

0x57c6,	// (0x0002a017) form_field_popup_pane_vc_t1_ParamLimits

0x57c6,	// (0x0002a017) form_field_popup_pane_vc_t1

0xd6c3,	// (0x00031f14) input_focus_pane_cp7_vc_ParamLimits

0xd6c3,	// (0x00031f14) input_focus_pane_cp7_vc

0x57dd,	// (0x0002a02e) list_form_pane_vc_ParamLimits

0x57dd,	// (0x0002a02e) list_form_pane_vc

0x57e9,	// (0x0002a03a) data_form_pane_vc_t1_ParamLimits

0x57e9,	// (0x0002a03a) data_form_pane_vc_t1

0xd71b,	// (0x00031f6c) input_focus_pane_vc_g1

0xd723,	// (0x00031f74) input_focus_pane_vc_g2

0xd72b,	// (0x00031f7c) input_focus_pane_vc_g3

0xd733,	// (0x00031f84) input_focus_pane_vc_g4

0xd73b,	// (0x00031f8c) input_focus_pane_vc_g5

0xd743,	// (0x00031f94) input_focus_pane_vc_g6

0xd74b,	// (0x00031f9c) input_focus_pane_vc_g7

0xd753,	// (0x00031fa4) input_focus_pane_vc_g8

0xd75b,	// (0x00031fac) input_focus_pane_vc_g9

0xa76c,	// (0x0002efbd) input_focus_pane_vc_g10

0x0009,

0xf665,	// (0x00033eb6) input_focus_pane_vc_g

0x39a1,	// (0x000281f2) data_form_pane_vc_ParamLimits

0x39a1,	// (0x000281f2) data_form_pane_vc

0x39ad,	// (0x000281fe) form_field_data_pane_vc_g1

0x5806,	// (0x0002a057) form_field_data_pane_vc_t1_ParamLimits

0x5806,	// (0x0002a057) form_field_data_pane_vc_t1

0xd6c3,	// (0x00031f14) input_focus_pane_vc_ParamLimits

0xd6c3,	// (0x00031f14) input_focus_pane_vc

0x5820,	// (0x0002a071) button_value_adjust_pane_cp3_vc

0x5828,	// (0x0002a079) button_value_adjust_pane_cp5_vc

0x5830,	// (0x0002a081) form_field_data_pane_vc_ParamLimits

0x5830,	// (0x0002a081) form_field_data_pane_vc

0x584b,	// (0x0002a09c) form_field_data_pane_vc_cp2

0x5853,	// (0x0002a0a4) form_field_data_wide_pane_vc_ParamLimits

0x5853,	// (0x0002a0a4) form_field_data_wide_pane_vc

0x586d,	// (0x0002a0be) form_field_data_wide_pane_vc_cp2

0x5875,	// (0x0002a0c6) form_field_popup_pane_vc_ParamLimits

0x5875,	// (0x0002a0c6) form_field_popup_pane_vc

0x5890,	// (0x0002a0e1) form_field_popup_wide_pane_vc_ParamLimits

0x5890,	// (0x0002a0e1) form_field_popup_wide_pane_vc

0x58aa,	// (0x0002a0fb) form_field_slider_pane_vc_ParamLimits

0x58aa,	// (0x0002a0fb) form_field_slider_pane_vc

0x58bd,	// (0x0002a10e) form_field_slider_wide_pane_vc_ParamLimits

0x58bd,	// (0x0002a10e) form_field_slider_wide_pane_vc

0xc3e7,	// (0x00030c38) grid_touch_1_pane_ParamLimits

0xc3e7,	// (0x00030c38) grid_touch_1_pane

0xc3fb,	// (0x00030c4c) grid_touch_2_pane_ParamLimits

0xc3fb,	// (0x00030c4c) grid_touch_2_pane

0x59a3,	// (0x0002a1f4) touch_pane_g1_ParamLimits

0x59a3,	// (0x0002a1f4) touch_pane_g1

0x58f6,	// (0x0002a147) cell_app_pane_cp_wide_ParamLimits

0x58f6,	// (0x0002a147) cell_app_pane_cp_wide

0x5907,	// (0x0002a158) grid_popup_fast_wide_pane_ParamLimits

0x5907,	// (0x0002a158) grid_popup_fast_wide_pane

0x591b,	// (0x0002a16c) scroll_pane_cp19_ParamLimits

0x591b,	// (0x0002a16c) scroll_pane_cp19

0xa81a,	// (0x0002f06b) bg_popup_window_pane_cp20

0x592f,	// (0x0002a180) listscroll_popup_fast_wide_pane

0xc427,	// (0x00030c78) grid_indicator_nsta_pane

0x5949,	// (0x0002a19a) clock_nsta_pane_g1

0x5952,	// (0x0002a1a3) clock_nsta_pane_t1

0xc433,	// (0x00030c84) cell_indicator_nsta_pane_ParamLimits

0xc433,	// (0x00030c84) cell_indicator_nsta_pane

0x59a3,	// (0x0002a1f4) cell_indicator_nsta_pane_g1

0xc44e,	// (0x00030c9f) cell_indicator_nsta_pane_g2

0x0001,

0xfa91,	// (0x000342e2) cell_indicator_nsta_pane_g

0x59c4,	// (0x0002a215) clock_nsta_pane_cp

0x59cd,	// (0x0002a21e) indicator_nsta_pane_cp

0x59d7,	// (0x0002a228) nsta_clock_indic_pane_g1

0xd0bd,	// (0x0003190e) grid_indicator_pane

0x09db,	// (0x0002522c) scroll_pane_cp29

0x0e4c,	// (0x0002569d) indicator_nsta_pane_cp2_ParamLimits

0x0e4c,	// (0x0002569d) indicator_nsta_pane_cp2

0xaaa7,	// (0x0002f2f8) main_apps_wheel_pane

0x3b8e,	// (0x000283df) form_midp_field_text_pane_ParamLimits

0x3cdd,	// (0x0002852e) scroll_bar_cp050_ParamLimits

0x5a30,	// (0x0002a281) cell_indicator_pane_ParamLimits

0x5a30,	// (0x0002a281) cell_indicator_pane

0x5a48,	// (0x0002a299) cell_indicator_pane_g1

0xc45b,	// (0x00030cac) grid_wheel_folder_pane_ParamLimits

0xc45b,	// (0x00030cac) grid_wheel_folder_pane

0xc469,	// (0x00030cba) list_wheel_apps_pane_ParamLimits

0xc469,	// (0x00030cba) list_wheel_apps_pane

0xc477,	// (0x00030cc8) main_apps_wheel_pane_g1_ParamLimits

0xc477,	// (0x00030cc8) main_apps_wheel_pane_g1

0xc487,	// (0x00030cd8) main_apps_wheel_pane_g2_ParamLimits

0xc487,	// (0x00030cd8) main_apps_wheel_pane_g2

0x0001,

0xfaad,	// (0x000342fe) main_apps_wheel_pane_g_ParamLimits

0xfaad,	// (0x000342fe) main_apps_wheel_pane_g

0xc497,	// (0x00030ce8) main_apps_wheel_pane_t1_ParamLimits

0xc497,	// (0x00030ce8) main_apps_wheel_pane_t1

0xc4af,	// (0x00030d00) list_wheel_apps_pane_g1

0xc4b7,	// (0x00030d08) list_wheel_apps_pane_g2

0xc4bf,	// (0x00030d10) list_wheel_apps_pane_g3

0xc4c7,	// (0x00030d18) list_wheel_apps_pane_g4

0xc4cf,	// (0x00030d20) list_wheel_apps_pane_g5

0x0004,

0xfab2,	// (0x00034303) list_wheel_apps_pane_g

0x2ed5,	// (0x00027726) navi_icon_text_pane

0xb980,	// (0x000301d1) aid_fill_nsta

0xc4ea,	// (0x00030d3b) navi_icon_text_pane_g1

0xc4f6,	// (0x00030d47) navi_icon_text_pane_t1

0x2d6b,	// (0x000275bc) list_set_graphic_pane_t1_ParamLimits

0x2d6b,	// (0x000275bc) list_set_graphic_pane_t1

0x444a,	// (0x00028c9b) popup_midp_note_alarm_window_t6_ParamLimits

0x444a,	// (0x00028c9b) popup_midp_note_alarm_window_t6

0x445c,	// (0x00028cad) popup_midp_note_alarm_window_t7_ParamLimits

0x445c,	// (0x00028cad) popup_midp_note_alarm_window_t7

0x446e,	// (0x00028cbf) popup_midp_note_alarm_window_t8_ParamLimits

0x446e,	// (0x00028cbf) popup_midp_note_alarm_window_t8

0x4480,	// (0x00028cd1) popup_midp_note_alarm_window_t9_ParamLimits

0x4480,	// (0x00028cd1) popup_midp_note_alarm_window_t9

0x4492,	// (0x00028ce3) popup_midp_note_alarm_window_t10_ParamLimits

0x4492,	// (0x00028ce3) popup_midp_note_alarm_window_t10

0x44a4,	// (0x00028cf5) popup_midp_note_alarm_window_t11_ParamLimits

0x44a4,	// (0x00028cf5) popup_midp_note_alarm_window_t11

0x44b6,	// (0x00028d07) scroll_pane_cp17_ParamLimits

0x44b6,	// (0x00028d07) scroll_pane_cp17

0x18c7,	// (0x00026118) volume_small_pane_cp_g1

0x1bd8,	// (0x00026429) volume_small_pane_cp_g2

0x1be1,	// (0x00026432) volume_small_pane_cp_g3

0x1bea,	// (0x0002643b) volume_small_pane_cp_g4

0x1bf3,	// (0x00026444) volume_small_pane_cp_g5

0x1bfc,	// (0x0002644d) volume_small_pane_cp_g6

0x1c05,	// (0x00026456) volume_small_pane_cp_g7

0x1c0e,	// (0x0002645f) volume_small_pane_cp_g8

0x1c17,	// (0x00026468) volume_small_pane_cp_g9

0x1c20,	// (0x00026471) volume_small_pane_cp_g10

0x3146,	// (0x00027997) midp_ticker_pane_g1_ParamLimits

0x3152,	// (0x000279a3) midp_ticker_pane_g2_ParamLimits

0xf731,	// (0x00033f82) midp_ticker_pane_g_ParamLimits

0xb0ec,	// (0x0002f93d) midp_ticker_pane_t1_ParamLimits

0xb9a4,	// (0x000301f5) aid_fill_nsta_2

0x3cc9,	// (0x0002851a) list_form2_midp_pane

0x4e35,	// (0x00029686) midp_editing_number_pane_ParamLimits

0x4e44,	// (0x00029695) midp_ticker_pane_ParamLimits

0x5b3b,	// (0x0002a38c) form2_midp_field_pane

0x5b5f,	// (0x0002a3b0) scroll_pane_cp51

0x5b7f,	// (0x0002a3d0) form2_midp_button_pane_ParamLimits

0x5b7f,	// (0x0002a3d0) form2_midp_button_pane

0x5b91,	// (0x0002a3e2) form2_midp_content_pane_ParamLimits

0x5b91,	// (0x0002a3e2) form2_midp_content_pane

0x5bab,	// (0x0002a3fc) form2_midp_field_choice_group_pane

0x5bb3,	// (0x0002a404) form2_midp_field_pane_g1

0x5bbb,	// (0x0002a40c) form2_midp_field_pane_g2

0x5bc3,	// (0x0002a414) form2_midp_field_pane_g3

0x5bcb,	// (0x0002a41c) form2_midp_field_pane_g4

0x0003,

0xfad7,	// (0x00034328) form2_midp_field_pane_g

0x5bd3,	// (0x0002a424) form2_midp_gauge_slider_pane

0x5bdb,	// (0x0002a42c) form2_midp_gauge_wait_pane

0x5be3,	// (0x0002a434) form2_midp_image_pane_ParamLimits

0x5be3,	// (0x0002a434) form2_midp_image_pane

0x5bfe,	// (0x0002a44f) form2_midp_label_pane_ParamLimits

0x5bfe,	// (0x0002a44f) form2_midp_label_pane

0xc524,	// (0x00030d75) form2_midp_label_pane_cp_ParamLimits

0xc524,	// (0x00030d75) form2_midp_label_pane_cp

0x5c3e,	// (0x0002a48f) form2_midp_string_pane_ParamLimits

0x5c3e,	// (0x0002a48f) form2_midp_string_pane

0xa513,	// (0x0002ed64) form2_midp_text_pane_ParamLimits

0xa513,	// (0x0002ed64) form2_midp_text_pane

0x5c50,	// (0x0002a4a1) form2_midp_time_pane

0x5c60,	// (0x0002a4b1) input_focus_pane_cp51_ParamLimits

0x5c60,	// (0x0002a4b1) input_focus_pane_cp51

0x5c78,	// (0x0002a4c9) form2_midp_label_pane_t1_ParamLimits

0x5c78,	// (0x0002a4c9) form2_midp_label_pane_t1

0xa534,	// (0x0002ed85) form2_mdip_text_pane_t1_ParamLimits

0xa534,	// (0x0002ed85) form2_mdip_text_pane_t1

0xf0cb,	// (0x0003391c) form2_midp_time_pane_t1

0x5cc6,	// (0x0002a517) form2_midp_gauge_slider_pane_t1

0xc545,	// (0x00030d96) form2_midp_gauge_slider_pane_t2

0xc557,	// (0x00030da8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae0,	// (0x00034331) form2_midp_gauge_slider_pane_t

0x5cfc,	// (0x0002a54d) form2_midp_slider_pane

0x5d08,	// (0x0002a559) form2_midp_gauge_wait_pane_t1

0x5d16,	// (0x0002a567) form2_midp_wait_pane_ParamLimits

0x5d16,	// (0x0002a567) form2_midp_wait_pane

0x39f4,	// (0x00028245) list_single_2graphic_pane_cp4_ParamLimits

0x39f4,	// (0x00028245) list_single_2graphic_pane_cp4

0xbe48,	// (0x00030699) list_single_midp_graphic_pane_cp_ParamLimits

0xbe48,	// (0x00030699) list_single_midp_graphic_pane_cp

0xa81a,	// (0x0002f06b) list_highlight_pane_cp20

0x5d5a,	// (0x0002a5ab) list_single_2graphic_pane_g1_cp4

0x52f3,	// (0x00029b44) list_single_2graphic_pane_g2_cp4

0x5d62,	// (0x0002a5b3) list_single_2graphic_pane_t1_cp4

0xaaa7,	// (0x0002f2f8) list_highlight_pane_cp21

0x5d71,	// (0x0002a5c2) list_single_midp_graphic_pane_g4_cp

0x5d80,	// (0x0002a5d1) list_single_midp_graphic_pane_t1_cp

0xc569,	// (0x00030dba) form2_mdip_string_pane_t1_ParamLimits

0xc569,	// (0x00030dba) form2_mdip_string_pane_t1

0xa81a,	// (0x0002f06b) bg_wml_button_pane_cp2

0xa76c,	// (0x0002efbd) form2_midp_image_pane_g1

0xeb26,	// (0x00033377) list_double_large_graphic_pane_g5_ParamLimits

0xeb26,	// (0x00033377) list_double_large_graphic_pane_g5

0xb048,	// (0x0002f899) midp_form_pane_ParamLimits

0xaaa7,	// (0x0002f2f8) main_apps_wheel_pane_ParamLimits

0xb698,	// (0x0002fee9) popup_preview_window_ParamLimits

0xb698,	// (0x0002fee9) popup_preview_window

0x172b,	// (0x00025f7c) popup_touch_info_window_ParamLimits

0x172b,	// (0x00025f7c) popup_touch_info_window

0x174d,	// (0x00025f9e) popup_touch_menu_window_ParamLimits

0x174d,	// (0x00025f9e) popup_touch_menu_window

0xa762,	// (0x0002efb3) bg_popup_sub_pane_cp6

0x5e31,	// (0x0002a682) list_touch_menu_pane

0x5e39,	// (0x0002a68a) list_single_touch_menu_pane_ParamLimits

0x5e39,	// (0x0002a68a) list_single_touch_menu_pane

0x5e51,	// (0x0002a6a2) list_single_touch_menu_pane_t1

0xaaa7,	// (0x0002f2f8) bg_popup_sub_pane_cp7_ParamLimits

0xaaa7,	// (0x0002f2f8) bg_popup_sub_pane_cp7

0x3cfd,	// (0x0002854e) heading_sub_pane

0x5e5f,	// (0x0002a6b0) list_touch_info_pane_ParamLimits

0x5e5f,	// (0x0002a6b0) list_touch_info_pane

0x5e6f,	// (0x0002a6c0) list_single_touch_info_pane_ParamLimits

0x5e6f,	// (0x0002a6c0) list_single_touch_info_pane

0x5e81,	// (0x0002a6d2) list_single_touch_info_pane_t1

0x5e8f,	// (0x0002a6e0) list_single_touch_info_pane_t2

0x0001,

0xfaee,	// (0x0003433f) list_single_touch_info_pane_t

0x3068,	// (0x000278b9) bg_popup_heading_pane_cp

0x5e9d,	// (0x0002a6ee) heading_sub_pane_t1

0x393b,	// (0x0002818c) bg_popup_preview_window_pane_cp_ParamLimits

0x393b,	// (0x0002818c) bg_popup_preview_window_pane_cp

0x3cfd,	// (0x0002854e) heading_preview_pane

0x5e5f,	// (0x0002a6b0) list_preview_pane_ParamLimits

0x5e5f,	// (0x0002a6b0) list_preview_pane

0x5eab,	// (0x0002a6fc) popup_preview_window_g1

0x5e6f,	// (0x0002a6c0) list_single_preview_pane_ParamLimits

0x5e6f,	// (0x0002a6c0) list_single_preview_pane

0x5eb3,	// (0x0002a704) list_single_preview_pane_g1

0x5ebb,	// (0x0002a70c) list_single_preview_pane_t1

0x5e81,	// (0x0002a6d2) list_single_preview_pane_t2

0x0001,

0xfaf3,	// (0x00034344) list_single_preview_pane_t

0x5ec9,	// (0x0002a71a) bg_popup_heading_pane_cp2_ParamLimits

0x5ec9,	// (0x0002a71a) bg_popup_heading_pane_cp2

0x5edf,	// (0x0002a730) heading_preview_pane_g1

0x5ee7,	// (0x0002a738) heading_preview_pane_t1_ParamLimits

0x5ee7,	// (0x0002a738) heading_preview_pane_t1

0xd0d4,	// (0x00031925) soft_indicator_pane_t1_ParamLimits

0xd636,	// (0x00031e87) scroll_pane_ParamLimits

0x08d7,	// (0x00025128) scroll_sc2_left_pane

0x08e0,	// (0x00025131) scroll_sc2_right_pane

0x08ff,	// (0x00025150) scroll_bg_pane_g1_ParamLimits

0x0914,	// (0x00025165) scroll_bg_pane_g2_ParamLimits

0x092c,	// (0x0002517d) scroll_bg_pane_g3_ParamLimits

0xf6bc,	// (0x00033f0d) scroll_bg_pane_g_ParamLimits

0x08ff,	// (0x00025150) scroll_handle_pane_g1_ParamLimits

0x094e,	// (0x0002519f) scroll_handle_pane_g2_ParamLimits

0x092c,	// (0x0002517d) scroll_handle_pane_g3_ParamLimits

0xf6c3,	// (0x00033f14) scroll_handle_pane_g_ParamLimits

0x1189,	// (0x000259da) popup_choice_list_window_ParamLimits

0x1189,	// (0x000259da) popup_choice_list_window

0x3811,	// (0x00028062) choice_list_pane

0x3893,	// (0x000280e4) cell_toolbar_pane_t1

0x38bb,	// (0x0002810c) toolbar_button_pane_ParamLimits

0x4980,	// (0x000291d1) ai_gene_pane_1_t2_ParamLimits

0x4980,	// (0x000291d1) ai_gene_pane_1_t2

0x0001,

0xf8e6,	// (0x00034137) ai_gene_pane_1_t_ParamLimits

0xf8e6,	// (0x00034137) ai_gene_pane_1_t

0x5f04,	// (0x0002a755) scroll_sc2_left_pane_g1

0x5f04,	// (0x0002a755) scroll_sc2_right_pane_g1

0x3397,	// (0x00027be8) bg_popup_sub_pane_cp10

0x5f0e,	// (0x0002a75f) list_choice_list_pane

0x5f27,	// (0x0002a778) list_single_choice_list_pane_ParamLimits

0x5f27,	// (0x0002a778) list_single_choice_list_pane

0x5f3f,	// (0x0002a790) list_single_choice_list_pane_g1

0x03ee,	// (0x00024c3f) list_single_choice_list_pane_t1_ParamLimits

0x03ee,	// (0x00024c3f) list_single_choice_list_pane_t1

0x5f47,	// (0x0002a798) choice_list_pane_g1

0x5f4f,	// (0x0002a7a0) choice_list_pane_t1

0xa762,	// (0x0002efb3) input_focus_pane_cp11

0x0615,	// (0x00024e66) title_pane_stacon_g2_ParamLimits

0x0615,	// (0x00024e66) title_pane_stacon_g2

0x0002,

0xf6a2,	// (0x00033ef3) title_pane_stacon_g_ParamLimits

0xf6a2,	// (0x00033ef3) title_pane_stacon_g

0x3068,	// (0x000278b9) cursor_press_pane

0xb30f,	// (0x0002fb60) popup_fep_hwr_window_ParamLimits

0xb30f,	// (0x0002fb60) popup_fep_hwr_window

0x12cd,	// (0x00025b1e) popup_fep_vkb_window_ParamLimits

0x12cd,	// (0x00025b1e) popup_fep_vkb_window

0x5f5d,	// (0x0002a7ae) cursor_press_pane_g1

0x0002,

0xfb1c,	// (0x0003436d) fep_vkb_side_pane_g_ParamLimits

0x1c62,	// (0x000264b3) fep_hwr_candidate_pane_ParamLimits

0x1c62,	// (0x000264b3) fep_hwr_candidate_pane

0x1c8c,	// (0x000264dd) fep_hwr_side_pane_ParamLimits

0x1c8c,	// (0x000264dd) fep_hwr_side_pane

0x1cae,	// (0x000264ff) fep_hwr_top_pane_ParamLimits

0x1cae,	// (0x000264ff) fep_hwr_top_pane

0x1cc6,	// (0x00026517) fep_hwr_write_pane_ParamLimits

0x1cc6,	// (0x00026517) fep_hwr_write_pane

0xfb1c,	// (0x0003436d) fep_vkb_side_pane_g

0x5f65,	// (0x0002a7b6) fep_hwr_top_pane_g1

0x5f77,	// (0x0002a7c8) fep_hwr_top_pane_g2

0x1cf2,	// (0x00026543) fep_hwr_top_pane_g3

0x0002,

0xfaf8,	// (0x00034349) fep_hwr_top_pane_g

0x1d07,	// (0x00026558) fep_hwr_top_text_pane

0x0aa3,	// (0x000252f4) fep_hwr_top_text_pane_g1

0x5fad,	// (0x0002a7fe) fep_hwr_top_text_pane_t1

0x1e11,	// (0x00026662) fep_hwr_candidate_pane_g1

0x61f8,	// (0x0002aa49) fep_vkb_keypad_pane_g3_ParamLimits

0x61f8,	// (0x0002aa49) fep_vkb_keypad_pane_g3

0x6224,	// (0x0002aa75) fep_vkb_keypad_pane_g4_ParamLimits

0x6224,	// (0x0002aa75) fep_vkb_keypad_pane_g4

0x629b,	// (0x0002aaec) fep_vkb_bottom_pane_g2_ParamLimits

0x629b,	// (0x0002aaec) fep_vkb_bottom_pane_g2

0x0001,

0xfb23,	// (0x00034374) fep_vkb_bottom_pane_g_ParamLimits

0xfb23,	// (0x00034374) fep_vkb_bottom_pane_g

0x5f04,	// (0x0002a755) cell_vkb_side_pane_g2

0x0001,

0xfb2d,	// (0x0003437e) cell_vkb_side_pane_g

0x6326,	// (0x0002ab77) cell_vkb_side_pane_t1

0x6334,	// (0x0002ab85) cell_vkb_side_pane_t1_copy1

0x5f04,	// (0x0002a755) bg_fep_vkb_candidate_pane_g2

0x6478,	// (0x0002acc9) cell_vkb_candidate_pane_ParamLimits

0x5fbb,	// (0x0002a80c) aid_size_cell_vkb_ParamLimits

0x5fbb,	// (0x0002a80c) aid_size_cell_vkb

0x6478,	// (0x0002acc9) cell_vkb_candidate_pane

0x1e2b,	// (0x0002667c) bg_popup_fep_shadow_pane_g1

0xc674,	// (0x00030ec5) fep_vkb_bottom_pane_ParamLimits

0xc674,	// (0x00030ec5) fep_vkb_bottom_pane

0x608a,	// (0x0002a8db) fep_vkb_candidate_pane_ParamLimits

0x608a,	// (0x0002a8db) fep_vkb_candidate_pane

0xc6a0,	// (0x00030ef1) fep_vkb_keypad_pane_ParamLimits

0xc6a0,	// (0x00030ef1) fep_vkb_keypad_pane

0xc6c7,	// (0x00030f18) fep_vkb_side_pane_ParamLimits

0xc6c7,	// (0x00030f18) fep_vkb_side_pane

0xc703,	// (0x00030f54) fep_vkb_top_pane_ParamLimits

0xc703,	// (0x00030f54) fep_vkb_top_pane

0x6151,	// (0x0002a9a2) fep_vkb_top_pane_g1_ParamLimits

0x6151,	// (0x0002a9a2) fep_vkb_top_pane_g1

0x6160,	// (0x0002a9b1) fep_vkb_top_pane_g2_ParamLimits

0x6160,	// (0x0002a9b1) fep_vkb_top_pane_g2

0x616f,	// (0x0002a9c0) fep_vkb_top_pane_g3_ParamLimits

0x616f,	// (0x0002a9c0) fep_vkb_top_pane_g3

0x0003,

0xfb13,	// (0x00034364) fep_vkb_top_pane_g_ParamLimits

0xfb13,	// (0x00034364) fep_vkb_top_pane_g

0x618d,	// (0x0002a9de) fep_vkb_top_text_pane_ParamLimits

0x618d,	// (0x0002a9de) fep_vkb_top_text_pane

0xc73f,	// (0x00030f90) fep_vkb_side_pane_g1_ParamLimits

0xc73f,	// (0x00030f90) fep_vkb_side_pane_g1

0x61e7,	// (0x0002aa38) grid_vkb_side_pane_ParamLimits

0x61e7,	// (0x0002aa38) grid_vkb_side_pane

0x1e33,	// (0x00026684) bg_popup_fep_shadow_pane_g2

0x1e3c,	// (0x0002668d) bg_popup_fep_shadow_pane_g3

0x1e44,	// (0x00026695) bg_popup_fep_shadow_pane_g4

0x1e4d,	// (0x0002669e) bg_popup_fep_shadow_pane_g5

0x1e57,	// (0x000266a8) bg_popup_fep_shadow_pane_g6

0x1e5f,	// (0x000266b0) bg_popup_fep_shadow_pane_g7

0xd73b,	// (0x00031f8c) bg_popup_fep_shadow_pane_g8

0x6246,	// (0x0002aa97) grid_vkb_keypad_number_pane_ParamLimits

0x6246,	// (0x0002aa97) grid_vkb_keypad_number_pane

0x625a,	// (0x0002aaab) grid_vkb_keypad_pane_ParamLimits

0x625a,	// (0x0002aaab) grid_vkb_keypad_pane

0x6280,	// (0x0002aad1) fep_vkb_bottom_pane_g1_ParamLimits

0x6280,	// (0x0002aad1) fep_vkb_bottom_pane_g1

0x62a9,	// (0x0002aafa) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x62a9,	// (0x0002aafa) grid_vkb_keypad_bottom_left_pane

0x62be,	// (0x0002ab0f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x62be,	// (0x0002ab0f) grid_vkb_keypad_bottom_right_pane

0x62d3,	// (0x0002ab24) fep_vkb_top_text_pane_g1

0xc786,	// (0x00030fd7) fep_vkb_top_text_pane_t1

0xc798,	// (0x00030fe9) cell_vkb_side_pane_ParamLimits

0xc798,	// (0x00030fe9) cell_vkb_side_pane

0x5f04,	// (0x0002a755) cell_vkb_side_pane_g1

0x6342,	// (0x0002ab93) cell_vkb_keypad_pane_ParamLimits

0x6342,	// (0x0002ab93) cell_vkb_keypad_pane

0x63cf,	// (0x0002ac20) cell_vkb_keypad_pane_g1

0x0008,

0xfb40,	// (0x00034391) bg_popup_fep_shadow_pane_g

0x5f04,	// (0x0002a755) cell_hwr_side_pane_g1

0x5f04,	// (0x0002a755) cell_hwr_side_pane_g2

0x63d9,	// (0x0002ac2a) cell_vkb_keypad_pane_t1

0xc7ae,	// (0x00030fff) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7ae,	// (0x00030fff) cell_vkb_keypad_bottom_left_pane

0xc7c3,	// (0x00031014) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7c3,	// (0x00031014) cell_vkb_keypad_bottom_right_pane

0x5f04,	// (0x0002a755) cell_vkb_keypad_bottom_left_pane_g1

0x5f04,	// (0x0002a755) cell_vkb_keypad_bottom_right_pane_g1

0x643d,	// (0x0002ac8e) cell_vkb_keypad_number_pane_ParamLimits

0x643d,	// (0x0002ac8e) cell_vkb_keypad_number_pane

0x645c,	// (0x0002acad) cell_vkb_keypad_number_pane_g1

0x6466,	// (0x0002acb7) cell_vkb_keypad_number_pane_g2

0x646f,	// (0x0002acc0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb32,	// (0x00034383) cell_vkb_keypad_number_pane_g

0x63d9,	// (0x0002ac2a) cell_vkb_keypad_number_pane_t1

0x6499,	// (0x0002acea) fep_vkb_candidate_pane_g1

0x0001,

0xfb2d,	// (0x0003437e) cell_hwr_side_pane_g

0x64b2,	// (0x0002ad03) cell_hwr_side_pane_t1

0x1e71,	// (0x000266c2) cell_hwr_side_pane_t1_copy1

0x617f,	// (0x0002a9d0) cell_hwr_candidate_pane_g1

0x1e7f,	// (0x000266d0) cell_hwr_candidate_pane_t1

0x5f04,	// (0x0002a755) cell_vkb_candidate_pane_g2

0x6538,	// (0x0002ad89) cell_vkb_candidate_pane_t1

0x1c29,	// (0x0002647a) bg_popup_fep_shadow_pane_ParamLimits

0x1c29,	// (0x0002647a) bg_popup_fep_shadow_pane

0xc5ed,	// (0x00030e3e) bg_fep_hwr_top_pane_g4

0x5f89,	// (0x0002a7da) bg_hwr_side_pane_g1_ParamLimits

0x5f89,	// (0x0002a7da) bg_hwr_side_pane_g1

0xc613,	// (0x00030e64) cell_hwr_side_pane_ParamLimits

0xc613,	// (0x00030e64) cell_hwr_side_pane

0x1d82,	// (0x000265d3) fep_hwr_write_pane_g1_ParamLimits

0x1d82,	// (0x000265d3) fep_hwr_write_pane_g1

0x1d8f,	// (0x000265e0) fep_hwr_write_pane_g2_ParamLimits

0x1d8f,	// (0x000265e0) fep_hwr_write_pane_g2

0x1d9c,	// (0x000265ed) fep_hwr_write_pane_g3_ParamLimits

0x1d9c,	// (0x000265ed) fep_hwr_write_pane_g3

0xc633,	// (0x00030e84) fep_hwr_write_pane_g4_ParamLimits

0xc633,	// (0x00030e84) fep_hwr_write_pane_g4

0x0005,

0xfaff,	// (0x00034350) fep_hwr_write_pane_g_ParamLimits

0xfaff,	// (0x00034350) fep_hwr_write_pane_g

0xc5ed,	// (0x00030e3e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xc5ed,	// (0x00030e3e) bg_fep_hwr_candidate_pane_g2

0x1dbf,	// (0x00026610) cell_hwr_candidate_pane_ParamLimits

0x1dbf,	// (0x00026610) cell_hwr_candidate_pane

0x1e11,	// (0x00026662) fep_hwr_candidate_pane_g1_ParamLimits

0x5fe9,	// (0x0002a83a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5fe9,	// (0x0002a83a) bg_popup_fep_shadow_pane_cp2

0x617f,	// (0x0002a9d0) fep_vkb_top_pane_g4_ParamLimits

0x617f,	// (0x0002a9d0) fep_vkb_top_pane_g4

0x61c5,	// (0x0002aa16) fep_vkb_side_pane_g2_ParamLimits

0x61c5,	// (0x0002aa16) fep_vkb_side_pane_g2

0xa1db,	// (0x0002ea2c) list_setting_pane_t4_ParamLimits

0xa1db,	// (0x0002ea2c) list_setting_pane_t4

0xa277,	// (0x0002eac8) list_setting_number_pane_t5_ParamLimits

0xa277,	// (0x0002eac8) list_setting_number_pane_t5

0x0af9,	// (0x0002534a) list_double_heading_pane_cp2_ParamLimits

0x0af9,	// (0x0002534a) list_double_heading_pane_cp2

0x6546,	// (0x0002ad97) list_double_heading_pane_g1_cp2_ParamLimits

0x6546,	// (0x0002ad97) list_double_heading_pane_g1_cp2

0x6552,	// (0x0002ada3) list_double_heading_pane_g2_cp2_ParamLimits

0x6552,	// (0x0002ada3) list_double_heading_pane_g2_cp2

0x6566,	// (0x0002adb7) list_double_heading_pane_t1_cp2_ParamLimits

0x6566,	// (0x0002adb7) list_double_heading_pane_t1_cp2

0x657c,	// (0x0002adcd) list_double_heading_pane_t2_cp2_ParamLimits

0x657c,	// (0x0002adcd) list_double_heading_pane_t2_cp2

0xa74a,	// (0x0002ef9b) aid_value_unit2

0xf51d,	// (0x00033d6e) popup_preview_fixed_window

0xd1b4,	// (0x00031a05) bg_popup_preview_window_pane_cp02

0x658e,	// (0x0002addf) list_preview_fixed_pane

0x65d4,	// (0x0002ae25) list_empty_pane_fp_ParamLimits

0x65d4,	// (0x0002ae25) list_empty_pane_fp

0x65d4,	// (0x0002ae25) list_single_cale_day_pane_fp_ParamLimits

0x65d4,	// (0x0002ae25) list_single_cale_day_pane_fp

0x65d4,	// (0x0002ae25) list_single_graphic_heading_pane_fp_ParamLimits

0x65d4,	// (0x0002ae25) list_single_graphic_heading_pane_fp

0x65d4,	// (0x0002ae25) list_single_graphic_pane_fp_ParamLimits

0x65d4,	// (0x0002ae25) list_single_graphic_pane_fp

0x65d4,	// (0x0002ae25) list_single_heading_pane_fp_ParamLimits

0x65d4,	// (0x0002ae25) list_single_heading_pane_fp

0x65d4,	// (0x0002ae25) list_single_pane_fp_ParamLimits

0x65d4,	// (0x0002ae25) list_single_pane_fp

0x65ed,	// (0x0002ae3e) list_single_pane_fp_g1_ParamLimits

0x65ed,	// (0x0002ae3e) list_single_pane_fp_g1

0xeefd,	// (0x0003374e) list_single_pane_fp_g2_ParamLimits

0xeefd,	// (0x0003374e) list_single_pane_fp_g2

0xf0de,	// (0x0003392f) list_single_pane_fp_g3_ParamLimits

0xf0de,	// (0x0003392f) list_single_pane_fp_g3

0x65f9,	// (0x0002ae4a) list_single_pane_fp_g4_ParamLimits

0x65f9,	// (0x0002ae4a) list_single_pane_fp_g4

0x0003,

0xfb61,	// (0x000343b2) list_single_pane_fp_g_ParamLimits

0xfb61,	// (0x000343b2) list_single_pane_fp_g

0xf0f2,	// (0x00033943) list_single_pane_fp_t1_ParamLimits

0xf0f2,	// (0x00033943) list_single_pane_fp_t1

0xf109,	// (0x0003395a) list_single_graphic_pane_fp_g1_ParamLimits

0xf109,	// (0x0003395a) list_single_graphic_pane_fp_g1

0x65ed,	// (0x0002ae3e) list_single_graphic_pane_fp_g2_ParamLimits

0x65ed,	// (0x0002ae3e) list_single_graphic_pane_fp_g2

0xeefd,	// (0x0003374e) list_single_graphic_pane_fp_g3_ParamLimits

0xeefd,	// (0x0003374e) list_single_graphic_pane_fp_g3

0xf0de,	// (0x0003392f) list_single_graphic_pane_fp_g4_ParamLimits

0xf0de,	// (0x0003392f) list_single_graphic_pane_fp_g4

0x65f9,	// (0x0002ae4a) list_single_graphic_pane_fp_g5_ParamLimits

0x65f9,	// (0x0002ae4a) list_single_graphic_pane_fp_g5

0x0004,

0xfb6a,	// (0x000343bb) list_single_graphic_pane_fp_g_ParamLimits

0xfb6a,	// (0x000343bb) list_single_graphic_pane_fp_g

0xf115,	// (0x00033966) list_single_graphic_pane_fp_t1_ParamLimits

0xf115,	// (0x00033966) list_single_graphic_pane_fp_t1

0xf109,	// (0x0003395a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf109,	// (0x0003395a) list_single_graphic_heading_pane_fp_g1

0x65ed,	// (0x0002ae3e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x65ed,	// (0x0002ae3e) list_single_graphic_heading_pane_fp_g2

0xeefd,	// (0x0003374e) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xeefd,	// (0x0003374e) list_single_graphic_heading_pane_fp_g3

0xf0de,	// (0x0003392f) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf0de,	// (0x0003392f) list_single_graphic_heading_pane_fp_g4

0x65f9,	// (0x0002ae4a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x65f9,	// (0x0002ae4a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x000343bb) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x000343bb) list_single_graphic_heading_pane_fp_g

0xf12b,	// (0x0003397c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf12b,	// (0x0003397c) list_single_graphic_heading_pane_fp_t1

0xf141,	// (0x00033992) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf141,	// (0x00033992) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb75,	// (0x000343c6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb75,	// (0x000343c6) list_single_graphic_heading_pane_fp_t

0xf153,	// (0x000339a4) list_single_cale_day_pane_fp_g1_ParamLimits

0xf153,	// (0x000339a4) list_single_cale_day_pane_fp_g1

0x6605,	// (0x0002ae56) list_single_cale_day_pane_fp_g2_ParamLimits

0x6605,	// (0x0002ae56) list_single_cale_day_pane_fp_g2

0xf18b,	// (0x000339dc) list_single_cale_day_pane_fp_g3_ParamLimits

0xf18b,	// (0x000339dc) list_single_cale_day_pane_fp_g3

0xf1b3,	// (0x00033a04) list_single_cale_day_pane_fp_g4_ParamLimits

0xf1b3,	// (0x00033a04) list_single_cale_day_pane_fp_g4

0xf1d7,	// (0x00033a28) list_single_cale_day_pane_fp_g5_ParamLimits

0xf1d7,	// (0x00033a28) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7a,	// (0x000343cb) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7a,	// (0x000343cb) list_single_cale_day_pane_fp_g

0xf1fb,	// (0x00033a4c) list_single_cale_day_pane_fp_t1_ParamLimits

0xf1fb,	// (0x00033a4c) list_single_cale_day_pane_fp_t1

0xf221,	// (0x00033a72) list_single_cale_day_pane_fp_t2_ParamLimits

0xf221,	// (0x00033a72) list_single_cale_day_pane_fp_t2

0xf23a,	// (0x00033a8b) list_single_cale_day_pane_fp_t3_ParamLimits

0xf23a,	// (0x00033a8b) list_single_cale_day_pane_fp_t3

0x0002,

0xfb85,	// (0x000343d6) list_single_cale_day_pane_fp_t_ParamLimits

0xfb85,	// (0x000343d6) list_single_cale_day_pane_fp_t

0x65ed,	// (0x0002ae3e) list_empty_pane_fp_g1_ParamLimits

0x65ed,	// (0x0002ae3e) list_empty_pane_fp_g1

0xf253,	// (0x00033aa4) list_empty_pane_fp_t1

0xf261,	// (0x00033ab2) list_empty_pane_fp_t2

0x0001,

0xfb8c,	// (0x000343dd) list_empty_pane_fp_t

0x65ed,	// (0x0002ae3e) list_single_heading_pane_fp_g1_ParamLimits

0x65ed,	// (0x0002ae3e) list_single_heading_pane_fp_g1

0xeefd,	// (0x0003374e) list_single_heading_pane_fp_g2_ParamLimits

0xeefd,	// (0x0003374e) list_single_heading_pane_fp_g2

0xf0de,	// (0x0003392f) list_single_heading_pane_fp_g3_ParamLimits

0xf0de,	// (0x0003392f) list_single_heading_pane_fp_g3

0x0002,

0xfb91,	// (0x000343e2) list_single_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x000343e2) list_single_heading_pane_fp_g

0xf26f,	// (0x00033ac0) list_single_heading_pane_fp_t1_ParamLimits

0xf26f,	// (0x00033ac0) list_single_heading_pane_fp_t1

0xf281,	// (0x00033ad2) list_single_heading_pane_fp_t2_ParamLimits

0xf281,	// (0x00033ad2) list_single_heading_pane_fp_t2

0x0001,

0xfb98,	// (0x000343e9) list_single_heading_pane_fp_t_ParamLimits

0xfb98,	// (0x000343e9) list_single_heading_pane_fp_t

0x045c,	// (0x00024cad) aid_size_cell_fast

0xd197,	// (0x000319e8) soft_indicator_pane_cp1_t1

0x0499,	// (0x00024cea) cell_app_pane_cp2_ParamLimits

0x0499,	// (0x00024cea) cell_app_pane_cp2

0x1c4b,	// (0x0002649c) fep_hwr_candidate_drop_down_list_pane

0xc648,	// (0x00030e99) fep_hwr_candidate_pane_g3_ParamLimits

0xc648,	// (0x00030e99) fep_hwr_candidate_pane_g3

0xc655,	// (0x00030ea6) fep_hwr_candidate_pane_g4_ParamLimits

0xc655,	// (0x00030ea6) fep_hwr_candidate_pane_g4

0x0002,

0xfb0c,	// (0x0003435d) fep_hwr_candidate_pane_g_ParamLimits

0xfb0c,	// (0x0003435d) fep_hwr_candidate_pane_g

0x6079,	// (0x0002a8ca) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6079,	// (0x0002a8ca) fep_vkb_candidate_drop_down_list_pane

0x64a1,	// (0x0002acf2) fep_vkb_candidate_pane_g3

0x64a9,	// (0x0002acfa) fep_vkb_candidate_pane_g4

0x0002,

0xfb39,	// (0x0003438a) fep_vkb_candidate_pane_g

0x617f,	// (0x0002a9d0) cell_hwr_candidate_pane_g1_ParamLimits

0x64c0,	// (0x0002ad11) cell_hwr_candidate_pane_g3_ParamLimits

0x64c0,	// (0x0002ad11) cell_hwr_candidate_pane_g3

0x64e1,	// (0x0002ad32) cell_hwr_candidate_pane_g4_ParamLimits

0x64e1,	// (0x0002ad32) cell_hwr_candidate_pane_g4

0x0002,

0xfb53,	// (0x000343a4) cell_hwr_candidate_pane_g_ParamLimits

0xfb53,	// (0x000343a4) cell_hwr_candidate_pane_g

0x6502,	// (0x0002ad53) cell_vkb_candidate_pane_g3_ParamLimits

0x6502,	// (0x0002ad53) cell_vkb_candidate_pane_g3

0x651d,	// (0x0002ad6e) cell_vkb_candidate_pane_g4_ParamLimits

0x651d,	// (0x0002ad6e) cell_vkb_candidate_pane_g4

0x6611,	// (0x0002ae62) cell_app_pane_cp2_g1_ParamLimits

0x6611,	// (0x0002ae62) cell_app_pane_cp2_g1

0x662f,	// (0x0002ae80) cell_app_pane_cp2_g2_ParamLimits

0x662f,	// (0x0002ae80) cell_app_pane_cp2_g2

0x0001,

0xfb9d,	// (0x000343ee) cell_app_pane_cp2_g_ParamLimits

0xfb9d,	// (0x000343ee) cell_app_pane_cp2_g

0x663b,	// (0x0002ae8c) cell_app_pane_cp2_t1_ParamLimits

0x663b,	// (0x0002ae8c) cell_app_pane_cp2_t1

0xd6c3,	// (0x00031f14) grid_highlight_pane_cp1_ParamLimits

0xd6c3,	// (0x00031f14) grid_highlight_pane_cp1

0x1e9d,	// (0x000266ee) cell_hwr_candidate_pane_cp1_ParamLimits

0x1e9d,	// (0x000266ee) cell_hwr_candidate_pane_cp1

0x617f,	// (0x0002a9d0) fep_hwr_candidate_drop_down_list_pane_g1

0x664d,	// (0x0002ae9e) fep_hwr_candidate_drop_down_list_pane_g2

0x665a,	// (0x0002aeab) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x000343f3) fep_hwr_candidate_drop_down_list_pane_g

0x1ec1,	// (0x00026712) fep_hwr_candidate_drop_down_list_scroll_pane

0x1eca,	// (0x0002671b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1eca,	// (0x0002671b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1ed7,	// (0x00026728) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1ed7,	// (0x00026728) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1ee4,	// (0x00026735) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1ee4,	// (0x00026735) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6502,	// (0x0002ad53) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6502,	// (0x0002ad53) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x651d,	// (0x0002ad6e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x651d,	// (0x0002ad6e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1ef1,	// (0x00026742) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1ef1,	// (0x00026742) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1f0c,	// (0x0002675d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1f0c,	// (0x0002675d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1f27,	// (0x00026778) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f27,	// (0x00026778) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x000343fa) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x000343fa) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6667,	// (0x0002aeb8) cell_vkb_candidate_pane_cp1_ParamLimits

0x6667,	// (0x0002aeb8) cell_vkb_candidate_pane_cp1

0x617f,	// (0x0002a9d0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x617f,	// (0x0002a9d0) fep_vkb_candidate_drop_down_list_pane_g1

0x664d,	// (0x0002ae9e) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x664d,	// (0x0002ae9e) fep_vkb_candidate_drop_down_list_pane_g2

0x665a,	// (0x0002aeab) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x665a,	// (0x0002aeab) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfba2,	// (0x000343f3) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfba2,	// (0x000343f3) fep_vkb_candidate_drop_down_list_pane_g

0x668d,	// (0x0002aede) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x668d,	// (0x0002aede) fep_vkb_candidate_drop_down_list_scroll_pane

0x669a,	// (0x0002aeeb) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x669a,	// (0x0002aeeb) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x66a7,	// (0x0002aef8) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x66a7,	// (0x0002aef8) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x66b3,	// (0x0002af04) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x66b3,	// (0x0002af04) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x64c0,	// (0x0002ad11) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x64c0,	// (0x0002ad11) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x64e1,	// (0x0002ad32) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x64e1,	// (0x0002ad32) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x66bf,	// (0x0002af10) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x66bf,	// (0x0002af10) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x66e0,	// (0x0002af31) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x66e0,	// (0x0002af31) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6701,	// (0x0002af52) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6701,	// (0x0002af52) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbba,	// (0x0003440b) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbba,	// (0x0003440b) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa952,	// (0x0002f1a3) title_pane_g1_ParamLimits

0xa965,	// (0x0002f1b6) title_pane_g2_ParamLimits

0xf527,	// (0x00033d78) title_pane_g_ParamLimits

0x0a93,	// (0x000252e4) aid_call2_pane

0x0a9b,	// (0x000252ec) aid_call_pane

0x0aa3,	// (0x000252f4) popup_clock_analogue_window_g1

0x0aa3,	// (0x000252f4) popup_clock_analogue_window_g2

0x0aab,	// (0x000252fc) popup_clock_analogue_window_g3

0x0ab4,	// (0x00025305) popup_clock_analogue_window_g4

0xa76c,	// (0x0002efbd) popup_clock_analogue_window_g5

0x0004,

0xf6d1,	// (0x00033f22) popup_clock_analogue_window_g

0x0abc,	// (0x0002530d) popup_clock_analogue_window_t1

0x0b69,	// (0x000253ba) clock_digital_number_pane_ParamLimits

0x0b69,	// (0x000253ba) clock_digital_number_pane

0x0b75,	// (0x000253c6) clock_digital_number_pane_cp02_ParamLimits

0x0b75,	// (0x000253c6) clock_digital_number_pane_cp02

0x0b81,	// (0x000253d2) clock_digital_number_pane_cp03_ParamLimits

0x0b81,	// (0x000253d2) clock_digital_number_pane_cp03

0x0b8d,	// (0x000253de) clock_digital_number_pane_cp04_ParamLimits

0x0b8d,	// (0x000253de) clock_digital_number_pane_cp04

0x0b99,	// (0x000253ea) clock_digital_separator_pane_ParamLimits

0x0b99,	// (0x000253ea) clock_digital_separator_pane

0x0ba5,	// (0x000253f6) popup_clock_digital_window_t1_ParamLimits

0x0ba5,	// (0x000253f6) popup_clock_digital_window_t1

0xa76c,	// (0x0002efbd) clock_digital_number_pane_g1

0xa76c,	// (0x0002efbd) clock_digital_number_pane_g2

0x0001,

0xf6dc,	// (0x00033f2d) clock_digital_number_pane_g

0xa76c,	// (0x0002efbd) clock_digital_separator_pane_g1

0xa76c,	// (0x0002efbd) clock_digital_separator_pane_g2

0x0001,

0xf6dc,	// (0x00033f2d) clock_digital_separator_pane_g

0xb980,	// (0x000301d1) aid_fill_nsta_ParamLimits

0xbab6,	// (0x00030307) indicator_nsta_pane_ParamLimits

0x36ac,	// (0x00027efd) popup_clock_analogue_window

0x36ac,	// (0x00027efd) popup_clock_digital_window

0xc427,	// (0x00030c78) grid_indicator_nsta_pane_ParamLimits

0x5960,	// (0x0002a1b1) clock_nsta_pane_t2

0x0001,

0xfa8c,	// (0x000342dd) clock_nsta_pane_t

0x087c,	// (0x000250cd) aid_size_max_handle

0xaf18,	// (0x0002f769) aid_size_min_handle

0x3068,	// (0x000278b9) editor_scroll_pane

0x671c,	// (0x0002af6d) ex_editor_pane

0x03c9,	// (0x00024c1a) scroll_pane_cp13

0xd662,	// (0x00031eb3) scroll_pane_cp14

0x0af1,	// (0x00025342) scroll_pane_cp36

0xafa5,	// (0x0002f7f6) list_single_graphic_hl_pane_cp2_ParamLimits

0xafa5,	// (0x0002f7f6) list_single_graphic_hl_pane_cp2

0xc2b0,	// (0x00030b01) list_single_graphic_hl_pane_ParamLimits

0xc2b0,	// (0x00030b01) list_single_graphic_hl_pane

0xf297,	// (0x00033ae8) aid_size_min_hl_cp1

0x6724,	// (0x0002af75) list_highlight_pane_cp34_ParamLimits

0x6724,	// (0x0002af75) list_highlight_pane_cp34

0x6735,	// (0x0002af86) list_single_graphic_hl_pane_g1_ParamLimits

0x6735,	// (0x0002af86) list_single_graphic_hl_pane_g1

0xa555,	// (0x0002eda6) list_single_graphic_hl_pane_g2_ParamLimits

0xa555,	// (0x0002eda6) list_single_graphic_hl_pane_g2

0xa555,	// (0x0002eda6) list_single_graphic_hl_pane_g3_ParamLimits

0xa555,	// (0x0002eda6) list_single_graphic_hl_pane_g3

0xa561,	// (0x0002edb2) list_single_graphic_hl_pane_g4_ParamLimits

0xa561,	// (0x0002edb2) list_single_graphic_hl_pane_g4

0xa56d,	// (0x0002edbe) list_single_graphic_hl_pane_g5_ParamLimits

0xa56d,	// (0x0002edbe) list_single_graphic_hl_pane_g5

0x0004,

0xfbcb,	// (0x0003441c) list_single_graphic_hl_pane_g_ParamLimits

0xfbcb,	// (0x0003441c) list_single_graphic_hl_pane_g

0xa581,	// (0x0002edd2) list_single_graphic_hl_pane_t1_ParamLimits

0xa581,	// (0x0002edd2) list_single_graphic_hl_pane_t1

0x6742,	// (0x0002af93) aid_size_min_hl_cp2

0x674b,	// (0x0002af9c) list_highlight_pane_cp34_cp2_ParamLimits

0x674b,	// (0x0002af9c) list_highlight_pane_cp34_cp2

0x6735,	// (0x0002af86) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6735,	// (0x0002af86) list_single_graphic_hl_pane_g1_cp2

0x6758,	// (0x0002afa9) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6758,	// (0x0002afa9) list_single_graphic_hl_pane_g2_cp2

0x6764,	// (0x0002afb5) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6764,	// (0x0002afb5) list_single_graphic_hl_pane_g3_cp2

0x6772,	// (0x0002afc3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x6772,	// (0x0002afc3) list_single_graphic_hl_pane_g4_cp2

0x677e,	// (0x0002afcf) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x677e,	// (0x0002afcf) list_single_graphic_hl_pane_g5_cp2

0xb140,	// (0x0002f991) control_pane_g4_ParamLimits

0xb140,	// (0x0002f991) control_pane_g4

0x3397,	// (0x00027be8) bg_popup_sub_pane_cp10_ParamLimits

0x5f0e,	// (0x0002a75f) list_choice_list_pane_ParamLimits

0x5f1d,	// (0x0002a76e) scroll_pane_cp23

0xd1b4,	// (0x00031a05) bg_popup_preview_window_pane_cp02_ParamLimits

0x658e,	// (0x0002addf) list_preview_fixed_pane_ParamLimits

0x65a4,	// (0x0002adf5) list_preview_fixed_pane_cp_ParamLimits

0x65a4,	// (0x0002adf5) list_preview_fixed_pane_cp

0x65b0,	// (0x0002ae01) popup_preview_fixed_window_g1_ParamLimits

0x65b0,	// (0x0002ae01) popup_preview_fixed_window_g1

0x65bc,	// (0x0002ae0d) popup_preview_fixed_window_g2_ParamLimits

0x65bc,	// (0x0002ae0d) popup_preview_fixed_window_g2

0x0002,

0xfb5a,	// (0x000343ab) popup_preview_fixed_window_g_ParamLimits

0xfb5a,	// (0x000343ab) popup_preview_fixed_window_g

0x06f9,	// (0x00024f4a) aid_navi_side_left_pane_ParamLimits

0x070e,	// (0x00024f5f) aid_navi_side_right_pane_ParamLimits

0x0726,	// (0x00024f77) navi_icon_pane_stacon_ParamLimits

0x073a,	// (0x00024f8b) navi_navi_pane_stacon_ParamLimits

0x0726,	// (0x00024f77) navi_text_pane_stacon_ParamLimits

0xa762,	// (0x0002efb3) main_text_info_pane

0x67a8,	// (0x0002aff9) listscroll_text_info_pane

0x67b0,	// (0x0002b001) list_text_info_pane_ParamLimits

0x67b0,	// (0x0002b001) list_text_info_pane

0x67bf,	// (0x0002b010) scroll_pane_cp24_ParamLimits

0x67bf,	// (0x0002b010) scroll_pane_cp24

0xc7de,	// (0x0003102f) list_text_info_pane_t1_ParamLimits

0xc7de,	// (0x0003102f) list_text_info_pane_t1

0xb273,	// (0x0002fac4) popup_fast_swap2_window_ParamLimits

0xb273,	// (0x0002fac4) popup_fast_swap2_window

0x6802,	// (0x0002b053) aid_size_cell_fast2

0xa762,	// (0x0002efb3) bg_popup_window_pane_cp17

0x3cfd,	// (0x0002854e) heading_pane_cp2

0x680c,	// (0x0002b05d) listscroll_fast2_pane

0x6814,	// (0x0002b065) grid_fast2_pane

0x681e,	// (0x0002b06f) listscroll_fast2_pane_g1

0x6828,	// (0x0002b079) listscroll_fast2_pane_g2

0x0001,

0xfbd6,	// (0x00034427) listscroll_fast2_pane_g

0x03c9,	// (0x00024c1a) scroll_pane_cp26

0x6832,	// (0x0002b083) cell_fast2_pane_ParamLimits

0x6832,	// (0x0002b083) cell_fast2_pane

0x6849,	// (0x0002b09a) cell_fast2_pane_g1

0x6852,	// (0x0002b0a3) cell_fast2_pane_g2

0x685b,	// (0x0002b0ac) cell_fast2_pane_g3

0x0002,

0xfbdb,	// (0x0003442c) cell_fast2_pane_g

0xd429,	// (0x00031c7a) grid_highlight_pane_cp9

0xd43e,	// (0x00031c8f) main_eswt_pane_ParamLimits

0xd43e,	// (0x00031c8f) main_eswt_pane

0x67d4,	// (0x0002b025) list_single_text_info_pane

0x6863,	// (0x0002b0b4) eswt_ctrl_button_pane

0x6863,	// (0x0002b0b4) eswt_ctrl_canvas_pane

0x686b,	// (0x0002b0bc) eswt_ctrl_combo_pane

0x6863,	// (0x0002b0b4) eswt_ctrl_default_pane

0x6863,	// (0x0002b0b4) eswt_ctrl_label_pane

0x6873,	// (0x0002b0c4) eswt_ctrl_wait_pane

0x687b,	// (0x0002b0cc) eswt_shell_pane

0xa762,	// (0x0002efb3) listscroll_eswt_app_pane

0x689b,	// (0x0002b0ec) popup_eswt_tasktip_window_ParamLimits

0x689b,	// (0x0002b0ec) popup_eswt_tasktip_window

0x393b,	// (0x0002818c) bg_popup_window_pane_cp18

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1_ParamLimits

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1

0x68b9,	// (0x0002b10a) eswt_control_pane_g2_ParamLimits

0x68b9,	// (0x0002b10a) eswt_control_pane_g2

0x68c6,	// (0x0002b117) eswt_control_pane_g3_ParamLimits

0x68c6,	// (0x0002b117) eswt_control_pane_g3

0x68d3,	// (0x0002b124) eswt_control_pane_g4_ParamLimits

0x68d3,	// (0x0002b124) eswt_control_pane_g4

0x0003,

0xfbe2,	// (0x00034433) eswt_control_pane_g_ParamLimits

0xfbe2,	// (0x00034433) eswt_control_pane_g

0xd6c3,	// (0x00031f14) bg_button_pane_ParamLimits

0xd6c3,	// (0x00031f14) bg_button_pane

0xd43e,	// (0x00031c8f) common_borders_pane_copy2_ParamLimits

0xd43e,	// (0x00031c8f) common_borders_pane_copy2

0x68e0,	// (0x0002b131) control_button_pane_g1_ParamLimits

0x68e0,	// (0x0002b131) control_button_pane_g1

0x68ec,	// (0x0002b13d) control_button_pane_g2_ParamLimits

0x68ec,	// (0x0002b13d) control_button_pane_g2

0x68f8,	// (0x0002b149) control_button_pane_g3_ParamLimits

0x68f8,	// (0x0002b149) control_button_pane_g3

0x0002,

0xfbeb,	// (0x0003443c) control_button_pane_g_ParamLimits

0xfbeb,	// (0x0003443c) control_button_pane_g

0x690c,	// (0x0002b15d) control_button_pane_t1

0x691a,	// (0x0002b16b) control_button_pane_t2

0x0001,

0xfbf2,	// (0x00034443) control_button_pane_t

0x38c7,	// (0x00028118) bg_button_pane_g1

0x38cf,	// (0x00028120) bg_button_pane_g2

0x38d7,	// (0x00028128) bg_button_pane_g3

0x38df,	// (0x00028130) bg_button_pane_g4

0x38e7,	// (0x00028138) bg_button_pane_g5

0x38ef,	// (0x00028140) bg_button_pane_g6

0x38f7,	// (0x00028148) bg_button_pane_g7

0x38ff,	// (0x00028150) bg_button_pane_g8

0x3907,	// (0x00028158) bg_button_pane_g9

0x0008,

0xf83a,	// (0x0003408b) bg_button_pane_g

0x5ec9,	// (0x0002a71a) common_borders_pane_ParamLimits

0x5ec9,	// (0x0002a71a) common_borders_pane

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1_copy1_ParamLimits

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1_copy1

0x68b9,	// (0x0002b10a) eswt_control_pane_g2_copy1_ParamLimits

0x68b9,	// (0x0002b10a) eswt_control_pane_g2_copy1

0x68c6,	// (0x0002b117) eswt_control_pane_g3_copy1_ParamLimits

0x68c6,	// (0x0002b117) eswt_control_pane_g3_copy1

0x68d3,	// (0x0002b124) eswt_control_pane_g4_copy1_ParamLimits

0x68d3,	// (0x0002b124) eswt_control_pane_g4_copy1

0x5f04,	// (0x0002a755) bg_eswt_ctrl_canvas_pane_g1

0x5ec9,	// (0x0002a71a) common_borders_pane_cp2_ParamLimits

0x5ec9,	// (0x0002a71a) common_borders_pane_cp2

0x5ec9,	// (0x0002a71a) common_borders_pane_cp3_ParamLimits

0x5ec9,	// (0x0002a71a) common_borders_pane_cp3

0x6928,	// (0x0002b179) separator_horizontal_pane

0x6930,	// (0x0002b181) separator_vertical_pane

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1_copy2_ParamLimits

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1_copy2

0x68b9,	// (0x0002b10a) eswt_control_pane_g2_copy2_ParamLimits

0x68b9,	// (0x0002b10a) eswt_control_pane_g2_copy2

0x68c6,	// (0x0002b117) eswt_control_pane_g3_copy2_ParamLimits

0x68c6,	// (0x0002b117) eswt_control_pane_g3_copy2

0x68d3,	// (0x0002b124) eswt_control_pane_g4_copy2_ParamLimits

0x68d3,	// (0x0002b124) eswt_control_pane_g4_copy2

0xa762,	// (0x0002efb3) common_borders_pane_cp4

0x6939,	// (0x0002b18a) separator_horizontal_pane_g1

0x6942,	// (0x0002b193) separator_horizontal_pane_g2

0x694b,	// (0x0002b19c) separator_horizontal_pane_g3

0x0002,

0xfbf7,	// (0x00034448) separator_horizontal_pane_g

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1_copy3_ParamLimits

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1_copy3

0x68b9,	// (0x0002b10a) eswt_control_pane_g2_copy3_ParamLimits

0x68b9,	// (0x0002b10a) eswt_control_pane_g2_copy3

0x68c6,	// (0x0002b117) eswt_control_pane_g3_copy3_ParamLimits

0x68c6,	// (0x0002b117) eswt_control_pane_g3_copy3

0x68d3,	// (0x0002b124) eswt_control_pane_g4_copy3_ParamLimits

0x68d3,	// (0x0002b124) eswt_control_pane_g4_copy3

0xa762,	// (0x0002efb3) common_borders_pane_cp5

0x6954,	// (0x0002b1a5) separator_vertical_pane_g1

0x695d,	// (0x0002b1ae) separator_vertical_pane_g2

0x6966,	// (0x0002b1b7) separator_vertical_pane_g3

0x0002,

0xfbfe,	// (0x0003444f) separator_vertical_pane_g

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1_copy4_ParamLimits

0x68ac,	// (0x0002b0fd) eswt_control_pane_g1_copy4

0x68b9,	// (0x0002b10a) eswt_control_pane_g2_copy4_ParamLimits

0x68b9,	// (0x0002b10a) eswt_control_pane_g2_copy4

0x68c6,	// (0x0002b117) eswt_control_pane_g3_copy4_ParamLimits

0x68c6,	// (0x0002b117) eswt_control_pane_g3_copy4

0x68d3,	// (0x0002b124) eswt_control_pane_g4_copy4_ParamLimits

0x68d3,	// (0x0002b124) eswt_control_pane_g4_copy4

0xc800,	// (0x00031051) eswt_ctrl_combo_button_pane

0xc808,	// (0x00031059) eswt_ctrl_input_pane

0xc810,	// (0x00031061) popup_choice_list_window_cp70

0xc818,	// (0x00031069) eswt_ctrl_input_pane_t1

0xa762,	// (0x0002efb3) input_focus_pane_cp70

0x5ec9,	// (0x0002a71a) bg_button_pane_cp70_ParamLimits

0x5ec9,	// (0x0002a71a) bg_button_pane_cp70

0xc826,	// (0x00031077) eswt_ctrl_combo_button_pane_g1

0x699d,	// (0x0002b1ee) wait_bar_pane_cp70

0x393b,	// (0x0002818c) bg_popup_window_pane_cp70_ParamLimits

0x393b,	// (0x0002818c) bg_popup_window_pane_cp70

0x69a5,	// (0x0002b1f6) popup_eswt_tasktip_window_t1

0x69bb,	// (0x0002b20c) wait_bar_pane_cp71_ParamLimits

0x69bb,	// (0x0002b20c) wait_bar_pane_cp71

0x69c7,	// (0x0002b218) grid_eswt_app_pane

0x08e0,	// (0x00025131) scroll_pane_cp70

0xc82e,	// (0x0003107f) cell_eswt_app_pane_ParamLimits

0xc82e,	// (0x0003107f) cell_eswt_app_pane

0xc860,	// (0x000310b1) cell_eswt_app_pane_g1_ParamLimits

0xc860,	// (0x000310b1) cell_eswt_app_pane_g1

0xc88f,	// (0x000310e0) cell_eswt_app_pane_g2_ParamLimits

0xc88f,	// (0x000310e0) cell_eswt_app_pane_g2

0x0001,

0xfc05,	// (0x00034456) cell_eswt_app_pane_g_ParamLimits

0xfc05,	// (0x00034456) cell_eswt_app_pane_g

0xc8b8,	// (0x00031109) cell_eswt_app_pane_t1_ParamLimits

0xc8b8,	// (0x00031109) cell_eswt_app_pane_t1

0x6a8c,	// (0x0002b2dd) grid_highlight_pane_cp70_ParamLimits

0x6a8c,	// (0x0002b2dd) grid_highlight_pane_cp70

0x2f2a,	// (0x0002777b) set_content_pane_g1

0xb124,	// (0x0002f975) status_small_volume_pane

0xc8ea,	// (0x0003113b) status_small_volume_pane_g1

0xc8f2,	// (0x00031143) volume_small2_pane

0xc8fb,	// (0x0003114c) volume_small2_pane_g1

0xc904,	// (0x00031155) volume_small2_pane_g2

0xc90d,	// (0x0003115e) volume_small2_pane_g3

0xc916,	// (0x00031167) volume_small2_pane_g4

0xc91f,	// (0x00031170) volume_small2_pane_g5

0xc928,	// (0x00031179) volume_small2_pane_g6

0xc931,	// (0x00031182) volume_small2_pane_g7

0xc93a,	// (0x0003118b) volume_small2_pane_g8

0xc943,	// (0x00031194) volume_small2_pane_g9

0xc94c,	// (0x0003119d) volume_small2_pane_g10

0x0009,

0xfc0a,	// (0x0003445b) volume_small2_pane_g

0x62d3,	// (0x0002ab24) fep_vkb_top_text_pane_g1_ParamLimits

0xc786,	// (0x00030fd7) fep_vkb_top_text_pane_t1_ParamLimits

0x65c8,	// (0x0002ae19) popup_preview_fixed_window_g3_ParamLimits

0x65c8,	// (0x0002ae19) popup_preview_fixed_window_g3

0xb913,	// (0x00030164) popup_toolbar_trans_pane

0xc11a,	// (0x0003096b) aid_height_set_list_ParamLimits

0x4c94,	// (0x000294e5) aid_size_parent_ParamLimits

0x3397,	// (0x00027be8) list_highlight_pane_cp2_ParamLimits

0x2f2a,	// (0x0002777b) set_content_pane_g1_ParamLimits

0xc2c4,	// (0x00030b15) list_single_image_pane_ParamLimits

0xc2c4,	// (0x00030b15) list_single_image_pane

0xc955,	// (0x000311a6) aid_size_cell_image_ParamLimits

0xc955,	// (0x000311a6) aid_size_cell_image

0xc962,	// (0x000311b3) grid_single_image_pane_ParamLimits

0xc962,	// (0x000311b3) grid_single_image_pane

0xd6d1,	// (0x00031f22) list_single_image_pane_g1_ParamLimits

0xd6d1,	// (0x00031f22) list_single_image_pane_g1

0xd6dd,	// (0x00031f2e) list_single_image_pane_g2_ParamLimits

0xd6dd,	// (0x00031f2e) list_single_image_pane_g2

0x0001,

0xfc1f,	// (0x00034470) list_single_image_pane_g_ParamLimits

0xfc1f,	// (0x00034470) list_single_image_pane_g

0x6ab3,	// (0x0002b304) list_single_image_pane_t1_ParamLimits

0x6ab3,	// (0x0002b304) list_single_image_pane_t1

0xc970,	// (0x000311c1) cell_image_list_pane_ParamLimits

0xc970,	// (0x000311c1) cell_image_list_pane

0xc986,	// (0x000311d7) cell_image_list_pane_g1

0xc98f,	// (0x000311e0) cell_image_list_pane_g2

0x0001,

0xfc24,	// (0x00034475) cell_image_list_pane_g

0x6af3,	// (0x0002b344) aid_size_cell_tb_trans_pane

0xd6c3,	// (0x00031f14) bg_tb_trans_pane

0x6b05,	// (0x0002b356) grid_tb_trans_pane

0x38c7,	// (0x00028118) bg_tb_trans_pane_g1

0x38cf,	// (0x00028120) bg_tb_trans_pane_g2

0x38d7,	// (0x00028128) bg_tb_trans_pane_g3

0x38df,	// (0x00028130) bg_tb_trans_pane_g4

0x38e7,	// (0x00028138) bg_tb_trans_pane_g5

0x38ff,	// (0x00028150) bg_tb_trans_pane_g6

0x3907,	// (0x00028158) bg_tb_trans_pane_g7

0x38ef,	// (0x00028140) bg_tb_trans_pane_g8

0x38f7,	// (0x00028148) bg_tb_trans_pane_g9

0x0008,

0xfc29,	// (0x0003447a) bg_tb_trans_pane_g

0x6b19,	// (0x0002b36a) cell_toolbar_trans_pane_ParamLimits

0x6b19,	// (0x0002b36a) cell_toolbar_trans_pane

0x5f04,	// (0x0002a755) cell_toolbar_trans_pane_g1

0xc508,	// (0x00030d59) list_form2_midp_pane_t1

0xc516,	// (0x00030d67) list_form2_midp_pane_t2

0x0001,

0xfad2,	// (0x00034323) list_form2_midp_pane_t

0x5b5f,	// (0x0002a3b0) scroll_pane_cp51_ParamLimits

0x5d26,	// (0x0002a577) form2_midp_wait_pane_g1

0x5d2f,	// (0x0002a580) form2_midp_wait_pane_g2

0x5d38,	// (0x0002a589) form2_midp_wait_pane_g3

0x0002,

0xfae7,	// (0x00034338) form2_midp_wait_pane_g

0xaaa7,	// (0x0002f2f8) list_highlight_pane_cp21_ParamLimits

0x5d71,	// (0x0002a5c2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5d80,	// (0x0002a5d1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xeda9,	// (0x000335fa) list_single_2graphic_im_pane_ParamLimits

0xeda9,	// (0x000335fa) list_single_2graphic_im_pane

0xc998,	// (0x000311e9) list_single_2graphic_im_pane_g1_ParamLimits

0xc998,	// (0x000311e9) list_single_2graphic_im_pane_g1

0xc9a9,	// (0x000311fa) list_single_2graphic_im_pane_g2_ParamLimits

0xc9a9,	// (0x000311fa) list_single_2graphic_im_pane_g2

0xc9b5,	// (0x00031206) list_single_2graphic_im_pane_g3_ParamLimits

0xc9b5,	// (0x00031206) list_single_2graphic_im_pane_g3

0x0003,

0xfc3c,	// (0x0003448d) list_single_2graphic_im_pane_g_ParamLimits

0xfc3c,	// (0x0003448d) list_single_2graphic_im_pane_g

0xc9c9,	// (0x0003121a) list_single_2graphic_im_pane_t1_ParamLimits

0xc9c9,	// (0x0003121a) list_single_2graphic_im_pane_t1

0x65d4,	// (0x0002ae25) list_single_graphic_2heading_pane_fp_ParamLimits

0x65d4,	// (0x0002ae25) list_single_graphic_2heading_pane_fp

0xf109,	// (0x0003395a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf109,	// (0x0003395a) list_single_graphic_2heading_pane_fp_g1

0x65ed,	// (0x0002ae3e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x65ed,	// (0x0002ae3e) list_single_graphic_2heading_pane_fp_g2

0xeefd,	// (0x0003374e) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xeefd,	// (0x0003374e) list_single_graphic_2heading_pane_fp_g3

0xf0de,	// (0x0003392f) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf0de,	// (0x0003392f) list_single_graphic_2heading_pane_fp_g4

0x65f9,	// (0x0002ae4a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x65f9,	// (0x0002ae4a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6a,	// (0x000343bb) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6a,	// (0x000343bb) list_single_graphic_2heading_pane_fp_g

0xf2a0,	// (0x00033af1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf2a0,	// (0x00033af1) list_single_graphic_2heading_pane_fp_t1

0xf141,	// (0x00033992) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf141,	// (0x00033992) list_single_graphic_2heading_pane_fp_t2

0xf2b6,	// (0x00033b07) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf2b6,	// (0x00033b07) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc45,	// (0x00034496) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc45,	// (0x00034496) list_single_graphic_2heading_pane_fp_t

0x5f95,	// (0x0002a7e6) fep_hwr_write_pane_g5_ParamLimits

0x5f95,	// (0x0002a7e6) fep_hwr_write_pane_g5

0x5fa1,	// (0x0002a7f2) fep_hwr_write_pane_g6_ParamLimits

0x5fa1,	// (0x0002a7f2) fep_hwr_write_pane_g6

0x687b,	// (0x0002b0cc) eswt_shell_pane_ParamLimits

0x393b,	// (0x0002818c) bg_popup_window_pane_cp18_ParamLimits

0x3cfd,	// (0x0002854e) heading_pane_cp70

0x69a5,	// (0x0002b1f6) popup_eswt_tasktip_window_t1_ParamLimits

0xb9dd,	// (0x0003022e) aid_touch_tab_arrow_left

0xb9f1,	// (0x00030242) aid_touch_tab_arrow_right

0xa989,	// (0x0002f1da) title_pane_g3_ParamLimits

0xa989,	// (0x0002f1da) title_pane_g3

0xd682,	// (0x00031ed3) set_value_pane_g1

0xb913,	// (0x00030164) popup_toolbar_trans_pane_ParamLimits

0x6af3,	// (0x0002b344) aid_size_cell_tb_trans_pane_ParamLimits

0xd6c3,	// (0x00031f14) bg_tb_trans_pane_ParamLimits

0x6b05,	// (0x0002b356) grid_tb_trans_pane_ParamLimits

0xd1b4,	// (0x00031a05) cont_note_pane_ParamLimits

0xd1b4,	// (0x00031a05) cont_note_pane

0xd43e,	// (0x00031c8f) cont_snote2_single_text_pane_ParamLimits

0xd43e,	// (0x00031c8f) cont_snote2_single_text_pane

0xd43e,	// (0x00031c8f) cont_snote2_single_graphic_pane_ParamLimits

0xd43e,	// (0x00031c8f) cont_snote2_single_graphic_pane

0x3f2d,	// (0x0002877e) cont_note_wait_pane_ParamLimits

0x3f2d,	// (0x0002877e) cont_note_wait_pane

0x3f2d,	// (0x0002877e) cont_note_image_pane_ParamLimits

0x3f2d,	// (0x0002877e) cont_note_image_pane

0x6bad,	// (0x0002b3fe) popup_note2_window_g1_ParamLimits

0x6bad,	// (0x0002b3fe) popup_note2_window_g1

0x6bde,	// (0x0002b42f) popup_note2_window_t1_ParamLimits

0x6bde,	// (0x0002b42f) popup_note2_window_t1

0x6c23,	// (0x0002b474) popup_note2_window_t2_ParamLimits

0x6c23,	// (0x0002b474) popup_note2_window_t2

0x6c68,	// (0x0002b4b9) popup_note2_window_t3_ParamLimits

0x6c68,	// (0x0002b4b9) popup_note2_window_t3

0x6cad,	// (0x0002b4fe) popup_note2_window_t4_ParamLimits

0x6cad,	// (0x0002b4fe) popup_note2_window_t4

0xd238,	// (0x00031a89) popup_note2_window_t5_ParamLimits

0xd238,	// (0x00031a89) popup_note2_window_t5

0x0004,

0xfc51,	// (0x000344a2) popup_note2_window_t_ParamLimits

0xfc51,	// (0x000344a2) popup_note2_window_t

0x6cdc,	// (0x0002b52d) popup_note2_image_window_g1_ParamLimits

0x6cdc,	// (0x0002b52d) popup_note2_image_window_g1

0x6ce8,	// (0x0002b539) popup_note2_image_window_g2_ParamLimits

0x6ce8,	// (0x0002b539) popup_note2_image_window_g2

0x0001,

0xfc5c,	// (0x000344ad) popup_note2_image_window_g_ParamLimits

0xfc5c,	// (0x000344ad) popup_note2_image_window_g

0x6cfa,	// (0x0002b54b) popup_note2_image_window_t1_ParamLimits

0x6cfa,	// (0x0002b54b) popup_note2_image_window_t1

0x6d12,	// (0x0002b563) popup_note2_image_window_t2_ParamLimits

0x6d12,	// (0x0002b563) popup_note2_image_window_t2

0x6d2a,	// (0x0002b57b) popup_note2_image_window_t3_ParamLimits

0x6d2a,	// (0x0002b57b) popup_note2_image_window_t3

0x0002,

0xfc61,	// (0x000344b2) popup_note2_image_window_t_ParamLimits

0xfc61,	// (0x000344b2) popup_note2_image_window_t

0x3f3b,	// (0x0002878c) popup_note2_wait_window_g1_ParamLimits

0x3f3b,	// (0x0002878c) popup_note2_wait_window_g1

0x6d46,	// (0x0002b597) popup_note2_wait_window_g2_ParamLimits

0x6d46,	// (0x0002b597) popup_note2_wait_window_g2

0x3f53,	// (0x000287a4) popup_note2_wait_window_g3_ParamLimits

0x3f53,	// (0x000287a4) popup_note2_wait_window_g3

0x0002,

0xfc68,	// (0x000344b9) popup_note2_wait_window_g_ParamLimits

0xfc68,	// (0x000344b9) popup_note2_wait_window_g

0x6d52,	// (0x0002b5a3) popup_note2_wait_window_t1_ParamLimits

0x6d52,	// (0x0002b5a3) popup_note2_wait_window_t1

0x6d70,	// (0x0002b5c1) popup_note2_wait_window_t2_ParamLimits

0x6d70,	// (0x0002b5c1) popup_note2_wait_window_t2

0x6d8e,	// (0x0002b5df) popup_note2_wait_window_t3_ParamLimits

0x6d8e,	// (0x0002b5df) popup_note2_wait_window_t3

0x6da0,	// (0x0002b5f1) popup_note2_wait_window_t4_ParamLimits

0x6da0,	// (0x0002b5f1) popup_note2_wait_window_t4

0x0003,

0xfc6f,	// (0x000344c0) popup_note2_wait_window_t_ParamLimits

0xfc6f,	// (0x000344c0) popup_note2_wait_window_t

0x6db2,	// (0x0002b603) wait_bar2_pane_ParamLimits

0x6db2,	// (0x0002b603) wait_bar2_pane

0x6dca,	// (0x0002b61b) popup_snote2_single_text_window_g1_ParamLimits

0x6dca,	// (0x0002b61b) popup_snote2_single_text_window_g1

0x6df2,	// (0x0002b643) popup_snote2_single_text_window_t1_ParamLimits

0x6df2,	// (0x0002b643) popup_snote2_single_text_window_t1

0x6e3e,	// (0x0002b68f) popup_snote2_single_text_window_t2_ParamLimits

0x6e3e,	// (0x0002b68f) popup_snote2_single_text_window_t2

0x6e8a,	// (0x0002b6db) popup_snote2_single_text_window_t3_ParamLimits

0x6e8a,	// (0x0002b6db) popup_snote2_single_text_window_t3

0x6ecb,	// (0x0002b71c) popup_snote2_single_text_window_t4_ParamLimits

0x6ecb,	// (0x0002b71c) popup_snote2_single_text_window_t4

0x6f01,	// (0x0002b752) popup_snote2_single_text_window_t5_ParamLimits

0x6f01,	// (0x0002b752) popup_snote2_single_text_window_t5

0x0004,

0xfc78,	// (0x000344c9) popup_snote2_single_text_window_t_ParamLimits

0xfc78,	// (0x000344c9) popup_snote2_single_text_window_t

0x6f2c,	// (0x0002b77d) popup_snote2_single_graphic_window_g1_ParamLimits

0x6f2c,	// (0x0002b77d) popup_snote2_single_graphic_window_g1

0x6f54,	// (0x0002b7a5) popup_snote2_single_graphic_window_g2_ParamLimits

0x6f54,	// (0x0002b7a5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc83,	// (0x000344d4) popup_snote2_single_graphic_window_g_ParamLimits

0xfc83,	// (0x000344d4) popup_snote2_single_graphic_window_g

0x6f7c,	// (0x0002b7cd) popup_snote2_single_graphic_window_t1_ParamLimits

0x6f7c,	// (0x0002b7cd) popup_snote2_single_graphic_window_t1

0x6fc8,	// (0x0002b819) popup_snote2_single_graphic_window_t2_ParamLimits

0x6fc8,	// (0x0002b819) popup_snote2_single_graphic_window_t2

0x6e8a,	// (0x0002b6db) popup_snote2_single_graphic_window_t3_ParamLimits

0x6e8a,	// (0x0002b6db) popup_snote2_single_graphic_window_t3

0x6ecb,	// (0x0002b71c) popup_snote2_single_graphic_window_t4_ParamLimits

0x6ecb,	// (0x0002b71c) popup_snote2_single_graphic_window_t4

0x6f01,	// (0x0002b752) popup_snote2_single_graphic_window_t5_ParamLimits

0x6f01,	// (0x0002b752) popup_snote2_single_graphic_window_t5

0x0004,

0xfc88,	// (0x000344d9) popup_snote2_single_graphic_window_t_ParamLimits

0xfc88,	// (0x000344d9) popup_snote2_single_graphic_window_t

0x5a0f,	// (0x0002a260) clock_nsta_pane_cp2_t1

0x5a0f,	// (0x0002a260) clock_nsta_pane_cp2_t2

0x0001,

0xfaa8,	// (0x000342f9) clock_nsta_pane_cp2_t

0xebb2,	// (0x00033403) form_field_data_wide_pane_g1_ParamLimits

0xd6d1,	// (0x00031f22) form_field_data_wide_pane_g2_ParamLimits

0xd6d1,	// (0x00031f22) form_field_data_wide_pane_g2

0xd6dd,	// (0x00031f2e) form_field_data_wide_pane_g3_ParamLimits

0xd6dd,	// (0x00031f2e) form_field_data_wide_pane_g3

0x0002,

0xf654,	// (0x00033ea5) form_field_data_wide_pane_g_ParamLimits

0xf654,	// (0x00033ea5) form_field_data_wide_pane_g

0xc411,	// (0x00030c62) grid_touch_3_pane_ParamLimits

0xc411,	// (0x00030c62) grid_touch_3_pane

0xc9fa,	// (0x0003124b) cell_touch_3_pane_ParamLimits

0xc9fa,	// (0x0003124b) cell_touch_3_pane

0x5f04,	// (0x0002a755) cell_touch_3_pane_g1

0x5f04,	// (0x0002a755) cell_touch_3_pane_g2

0x0001,

0xfb2d,	// (0x0003437e) cell_touch_3_pane_g

0xd290,	// (0x00031ae1) cont_query_data_pane

0xd298,	// (0x00031ae9) cont_query_data_pane_cp1

0x7047,	// (0x0002b898) button_value_adjust_pane_cp7

0x704f,	// (0x0002b8a0) query_popup_pane_cp3

0x0c22,	// (0x00025473) bg_popup_sub_pane_cp22_ParamLimits

0x0c38,	// (0x00025489) navi_navi_volume_pane_cp2

0x0c53,	// (0x000254a4) popup_side_volume_key_window_g2

0x0c62,	// (0x000254b3) popup_side_volume_key_window_g3

0x0002,

0xf6ea,	// (0x00033f3b) popup_side_volume_key_window_g

0x0c7f,	// (0x000254d0) popup_side_volume_key_window_t2

0x0001,

0xf6f1,	// (0x00033f42) popup_side_volume_key_window_t

0x2df0,	// (0x00027641) popup_side_volume_key_window_ParamLimits

0x9fd2,	// (0x0002e823) list_double_graphic_pane_g4_ParamLimits

0x9fd2,	// (0x0002e823) list_double_graphic_pane_g4

0xa4fb,	// (0x0002ed4c) list_single_2heading_msg_pane_ParamLimits

0xa4fb,	// (0x0002ed4c) list_single_2heading_msg_pane

0xa597,	// (0x0002ede8) list_single_2heading_msg_pane_g1_ParamLimits

0xa597,	// (0x0002ede8) list_single_2heading_msg_pane_g1

0xa5a3,	// (0x0002edf4) list_single_2heading_msg_pane_g2_ParamLimits

0xa5a3,	// (0x0002edf4) list_single_2heading_msg_pane_g2

0xa5b6,	// (0x0002ee07) list_single_2heading_msg_pane_g3_ParamLimits

0xa5b6,	// (0x0002ee07) list_single_2heading_msg_pane_g3

0xa5c2,	// (0x0002ee13) list_single_2heading_msg_pane_g4_ParamLimits

0xa5c2,	// (0x0002ee13) list_single_2heading_msg_pane_g4

0x0003,

0xfc93,	// (0x000344e4) list_single_2heading_msg_pane_g_ParamLimits

0xfc93,	// (0x000344e4) list_single_2heading_msg_pane_g

0xa5da,	// (0x0002ee2b) list_single_2heading_msg_pane_t1_ParamLimits

0xa5da,	// (0x0002ee2b) list_single_2heading_msg_pane_t1

0xa602,	// (0x0002ee53) list_single_2heading_msg_pane_t2_ParamLimits

0xa602,	// (0x0002ee53) list_single_2heading_msg_pane_t2

0xa66d,	// (0x0002eebe) list_single_2heading_msg_pane_t3_ParamLimits

0xa66d,	// (0x0002eebe) list_single_2heading_msg_pane_t3

0xf494,	// (0x00033ce5) list_single_2heading_msg_pane_t4_ParamLimits

0xf494,	// (0x00033ce5) list_single_2heading_msg_pane_t4

0x0003,

0xfc9c,	// (0x000344ed) list_single_2heading_msg_pane_t_ParamLimits

0xfc9c,	// (0x000344ed) list_single_2heading_msg_pane_t

0xa995,	// (0x0002f1e6) title_pane_g4_ParamLimits

0xa995,	// (0x0002f1e6) title_pane_g4

0x0622,	// (0x00024e73) title_pane_stacon_g3_ParamLimits

0x0622,	// (0x00024e73) title_pane_stacon_g3

0x6b70,	// (0x0002b3c1) list_single_2graphic_im_pane_g4_ParamLimits

0x6b70,	// (0x0002b3c1) list_single_2graphic_im_pane_g4

0x499d,	// (0x000291ee) popup_side_volume_key_window_cp

0x51fa,	// (0x00029a4b) main_idle_act2_pane_t1

0x17c2,	// (0x00026013) toolbar_button_pane_g10

0xad98,	// (0x0002f5e9) popup_toolbar_window_cp1

0x5a00,	// (0x0002a251) clock_nsta_pane_cp_t1

0x5a00,	// (0x0002a251) clock_nsta_pane_cp_t2

0x0001,

0xfaa3,	// (0x000342f4) clock_nsta_pane_cp_t

0x0c38,	// (0x00025489) navi_navi_volume_pane_cp2_ParamLimits

0x0c47,	// (0x00025498) popup_side_volume_key_window_g1_ParamLimits

0x0c53,	// (0x000254a4) popup_side_volume_key_window_g2_ParamLimits

0x0c62,	// (0x000254b3) popup_side_volume_key_window_g3_ParamLimits

0xf6ea,	// (0x00033f3b) popup_side_volume_key_window_g_ParamLimits

0x1c37,	// (0x00026488) fep_hwr_aid_pane

0xc5ed,	// (0x00030e3e) bg_fep_hwr_top_pane_g4_ParamLimits

0x5f65,	// (0x0002a7b6) fep_hwr_top_pane_g1_ParamLimits

0x5f77,	// (0x0002a7c8) fep_hwr_top_pane_g2_ParamLimits

0x1cf2,	// (0x00026543) fep_hwr_top_pane_g3_ParamLimits

0xfaf8,	// (0x00034349) fep_hwr_top_pane_g_ParamLimits

0x1d07,	// (0x00026558) fep_hwr_top_text_pane_ParamLimits

0x4752,	// (0x00028fa3) aid_touch_tab_arrow_arrow_2

0x475b,	// (0x00028fac) aid_touch_tab_arrow_left_2

0x1c4b,	// (0x0002649c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1c82,	// (0x000264d3) fep_hwr_prediction_pane

0x60cd,	// (0x0002a91e) fep_vkb_prediction_pane

0xc766,	// (0x00030fb7) fep_vkb_side_pane_g3_ParamLimits

0xc766,	// (0x00030fb7) fep_vkb_side_pane_g3

0x617f,	// (0x0002a9d0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x664d,	// (0x0002ae9e) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x665a,	// (0x0002aeab) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba2,	// (0x000343f3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7076,	// (0x0002b8c7) fep_hwr_prediction_pane_g1

0x1fad,	// (0x000267fe) fep_hwr_prediction_pane_g2

0x1fb5,	// (0x00026806) fep_hwr_prediction_pane_g3

0x1fbd,	// (0x0002680e) fep_hwr_prediction_pane_g4

0x0003,

0xfca5,	// (0x000344f6) fep_hwr_prediction_pane_g

0x7076,	// (0x0002b8c7) fep_vkb_prediction_pane_g1

0x7080,	// (0x0002b8d1) fep_vkb_prediction_pane_g2

0x7088,	// (0x0002b8d9) fep_vkb_prediction_pane_g3

0x7090,	// (0x0002b8e1) fep_vkb_prediction_pane_g4

0x0003,

0xfcae,	// (0x000344ff) fep_vkb_prediction_pane_g

0x1ab7,	// (0x00026308) slider_set_pane_g3

0x1acb,	// (0x0002631c) slider_set_pane_g4

0x1ae3,	// (0x00026334) slider_set_pane_g5

0x1ab7,	// (0x00026308) slider_set_pane_g6

0x1af9,	// (0x0002634a) slider_set_pane_g7

0x4e13,	// (0x00029664) slider_form_pane_g3

0x4e1c,	// (0x0002966d) slider_form_pane_g4

0x4e24,	// (0x00029675) slider_form_pane_g5

0x4e13,	// (0x00029664) slider_form_pane_g6

0xc283,	// (0x00030ad4) slider_form_pane_g7

0x54be,	// (0x00029d0f) slider_set_pane_vc_g3

0x54c7,	// (0x00029d18) slider_set_pane_vc_g4

0x54d0,	// (0x00029d21) slider_set_pane_vc_g5

0x54be,	// (0x00029d0f) slider_set_pane_vc_g6

0x54d9,	// (0x00029d2a) slider_set_pane_vc_g7

0x56af,	// (0x00029f00) slider_form_pane_vc_g1

0x56b8,	// (0x00029f09) slider_form_pane_vc_g2

0x56c1,	// (0x00029f12) slider_form_pane_vc_g3

0x56af,	// (0x00029f00) slider_form_pane_vc_g4

0x56ca,	// (0x00029f1b) slider_form_pane_vc_g5

0x0004,

0xfa75,	// (0x000342c6) slider_form_pane_vc_g

0xa762,	// (0x0002efb3) main_idle_act3_pane

0x7098,	// (0x0002b8e9) ai3_links_pane

0xca46,	// (0x00031297) popup_ai3_data_window_ParamLimits

0xca46,	// (0x00031297) popup_ai3_data_window

0xa762,	// (0x0002efb3) grid_ai3_links_pane

0xd763,	// (0x00031fb4) cell_ai3_links_pane_ParamLimits

0xd763,	// (0x00031fb4) cell_ai3_links_pane

0x70d9,	// (0x0002b92a) bg_popup_sub_pane_cp11

0x70e6,	// (0x0002b937) cell_ai3_links_pane_g1

0xa762,	// (0x0002efb3) bg_popup_sub_pane_cp12

0x710b,	// (0x0002b95c) heading_ai3_data_pane

0x7113,	// (0x0002b964) list_ai3_gene_pane

0x711f,	// (0x0002b970) popup_ai3_data_window_g1

0x7127,	// (0x0002b978) heading_ai3_data_pane_g1

0x712f,	// (0x0002b980) heading_ai3_data_pane_t1

0x713d,	// (0x0002b98e) list_double_ai3_gene_pane_ParamLimits

0x713d,	// (0x0002b98e) list_double_ai3_gene_pane

0x714a,	// (0x0002b99b) list_single_ai3_gene_pane_ParamLimits

0x714a,	// (0x0002b99b) list_single_ai3_gene_pane

0x5ec9,	// (0x0002a71a) list_highlight_pane_cp7_ParamLimits

0x5ec9,	// (0x0002a71a) list_highlight_pane_cp7

0x7157,	// (0x0002b9a8) list_single_a13_gene_pane_t1_ParamLimits

0x7157,	// (0x0002b9a8) list_single_a13_gene_pane_t1

0x716e,	// (0x0002b9bf) list_single_ai3_gene_pane_g1

0x7177,	// (0x0002b9c8) list_single_ai3_gene_pane_g2

0x0001,

0xfcb7,	// (0x00034508) list_single_ai3_gene_pane_g

0x717f,	// (0x0002b9d0) list_double_ai3_gene_pane_g1_ParamLimits

0x717f,	// (0x0002b9d0) list_double_ai3_gene_pane_g1

0x718b,	// (0x0002b9dc) list_double_ai3_gene_pane_t1_ParamLimits

0x718b,	// (0x0002b9dc) list_double_ai3_gene_pane_t1

0x71a7,	// (0x0002b9f8) list_double_ai3_gene_pane_t2_ParamLimits

0x71a7,	// (0x0002b9f8) list_double_ai3_gene_pane_t2

0x71bc,	// (0x0002ba0d) list_double_ai3_gene_pane_t3_ParamLimits

0x71bc,	// (0x0002ba0d) list_double_ai3_gene_pane_t3

0x0002,

0xfcbc,	// (0x0003450d) list_double_ai3_gene_pane_t_ParamLimits

0xfcbc,	// (0x0003450d) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf2cc,	// (0x00033b1d) aid_size_min_col_2

0xca30,	// (0x00031281) aid_size_min_msg_ParamLimits

0xca30,	// (0x00031281) aid_size_min_msg

0xc77a,	// (0x00030fcb) fep_vkb_top_text_pane_g2_ParamLimits

0xc77a,	// (0x00030fcb) fep_vkb_top_text_pane_g2

0x0001,

0xfb28,	// (0x00034379) fep_vkb_top_text_pane_g_ParamLimits

0xfb28,	// (0x00034379) fep_vkb_top_text_pane_g

0xa762,	// (0x0002efb3) main_hc_apps_shell_pane

0x71d9,	// (0x0002ba2a) grid_hc_apps_pane_ParamLimits

0x71d9,	// (0x0002ba2a) grid_hc_apps_pane

0x71eb,	// (0x0002ba3c) list_hc_apps_pane

0x71f3,	// (0x0002ba44) scroll_pane_cp37_ParamLimits

0x71f3,	// (0x0002ba44) scroll_pane_cp37

0xd77d,	// (0x00031fce) cell_hc_apps_pane_ParamLimits

0xd77d,	// (0x00031fce) cell_hc_apps_pane

0xd843,	// (0x00032094) cell_hc_apps_pane_g1_ParamLimits

0xd843,	// (0x00032094) cell_hc_apps_pane_g1

0x72df,	// (0x0002bb30) cell_hc_apps_pane_g2_ParamLimits

0x72df,	// (0x0002bb30) cell_hc_apps_pane_g2

0x72fb,	// (0x0002bb4c) cell_hc_apps_pane_g3_ParamLimits

0x72fb,	// (0x0002bb4c) cell_hc_apps_pane_g3

0x0002,

0xfcc3,	// (0x00034514) cell_hc_apps_pane_g_ParamLimits

0xfcc3,	// (0x00034514) cell_hc_apps_pane_g

0xd86f,	// (0x000320c0) cell_hc_apps_pane_t1_ParamLimits

0xd86f,	// (0x000320c0) cell_hc_apps_pane_t1

0xd1b4,	// (0x00031a05) grid_highlight_pane_cp10_ParamLimits

0xd1b4,	// (0x00031a05) grid_highlight_pane_cp10

0xd8ad,	// (0x000320fe) list_single_hc_apps_pane_ParamLimits

0xd8ad,	// (0x000320fe) list_single_hc_apps_pane

0xd8e0,	// (0x00032131) list_single_hc_apps_pane_g1

0xa6db,	// (0x0002ef2c) list_single_hc_apps_pane_g2

0x0001,

0xfcca,	// (0x0003451b) list_single_hc_apps_pane_g

0xa6f4,	// (0x0002ef45) list_single_hc_apps_pane_g2_copy1

0xa710,	// (0x0002ef61) list_single_hc_apps_pane_t1

0xaaa7,	// (0x0002f2f8) bg_set_opt_pane_cp_ParamLimits

0x002e,	// (0x0002487f) setting_slider_pane_t1_ParamLimits

0x0047,	// (0x00024898) setting_slider_pane_t2_ParamLimits

0x0061,	// (0x000248b2) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00033d88) setting_slider_pane_t_ParamLimits

0x0079,	// (0x000248ca) slider_set_pane_ParamLimits

0x1067,	// (0x000258b8) control_pane_g5_ParamLimits

0x1067,	// (0x000258b8) control_pane_g5

0x4c46,	// (0x00029497) slider_set_pane_g1_ParamLimits

0x1aab,	// (0x000262fc) slider_set_pane_g2_ParamLimits

0x1ab7,	// (0x00026308) slider_set_pane_g3_ParamLimits

0x1acb,	// (0x0002631c) slider_set_pane_g4_ParamLimits

0x1ae3,	// (0x00026334) slider_set_pane_g5_ParamLimits

0x1ab7,	// (0x00026308) slider_set_pane_g6_ParamLimits

0x1af9,	// (0x0002634a) slider_set_pane_g7_ParamLimits

0xf938,	// (0x00034189) slider_set_pane_g_ParamLimits

0x2ed5,	// (0x00027726) navi_icon_text_pane_ParamLimits

0xb9a4,	// (0x000301f5) aid_fill_nsta_2_ParamLimits

0xb9dd,	// (0x0003022e) aid_touch_tab_arrow_left_ParamLimits

0xb9f1,	// (0x00030242) aid_touch_tab_arrow_right_ParamLimits

0xba8c,	// (0x000302dd) clock_nsta_pane_ParamLimits

0xc001,	// (0x00030852) navi_icon_pane_g1_ParamLimits

0xc00d,	// (0x0003085e) navi_text_pane_t1_ParamLimits

0xc4ea,	// (0x00030d3b) navi_icon_text_pane_g1_ParamLimits

0xc4f6,	// (0x00030d47) navi_icon_text_pane_t1_ParamLimits

0xd8e0,	// (0x00032131) list_single_hc_apps_pane_g1_ParamLimits

0xa6db,	// (0x0002ef2c) list_single_hc_apps_pane_g2_ParamLimits

0xfcca,	// (0x0003451b) list_single_hc_apps_pane_g_ParamLimits

0xa6f4,	// (0x0002ef45) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xa710,	// (0x0002ef61) list_single_hc_apps_pane_t1_ParamLimits

0xa878,	// (0x0002f0c9) popup_toolbar2_fixed_window_ParamLimits

0xa878,	// (0x0002f0c9) popup_toolbar2_fixed_window

0xb909,	// (0x0003015a) popup_toolbar2_float_window

0xa762,	// (0x0002efb3) bg_popup_sub_pane_cp27

0x73b5,	// (0x0002bc06) grid_toolbar2_float_pane

0xa762,	// (0x0002efb3) bg_popup_sub_pane_cp26

0x73b5,	// (0x0002bc06) grid_toolbar2_fixed_pane

0xd8f9,	// (0x0003214a) cell_toolbar2_fixed_pane_ParamLimits

0xd8f9,	// (0x0003214a) cell_toolbar2_fixed_pane

0xd913,	// (0x00032164) cell_toolbar2_fixed_pane_g1

0x73d6,	// (0x0002bc27) toolbar2_fixed_button_pane

0x38c7,	// (0x00028118) toolbar2_fixed_button_pane_g1

0x38cf,	// (0x00028120) toolbar2_fixed_button_pane_g2

0x38d7,	// (0x00028128) toolbar2_fixed_button_pane_g3

0x38df,	// (0x00028130) toolbar2_fixed_button_pane_g4

0x38e7,	// (0x00028138) toolbar2_fixed_button_pane_g5

0x38ef,	// (0x00028140) toolbar2_fixed_button_pane_g6

0x38f7,	// (0x00028148) toolbar2_fixed_button_pane_g7

0x38ff,	// (0x00028150) toolbar2_fixed_button_pane_g8

0x3907,	// (0x00028158) toolbar2_fixed_button_pane_g9

0x0008,

0xf83a,	// (0x0003408b) toolbar2_fixed_button_pane_g

0x73de,	// (0x0002bc2f) cell_toolbar2_float_pane_ParamLimits

0x73de,	// (0x0002bc2f) cell_toolbar2_float_pane

0x73ef,	// (0x0002bc40) cell_toolbar2_float_pane_g1

0x73d6,	// (0x0002bc27) toolbar2_fixed_button_pane_cp

0xc662,	// (0x00030eb3) fep_vkb_accented_list_pane_ParamLimits

0xc662,	// (0x00030eb3) fep_vkb_accented_list_pane

0x1e69,	// (0x000266ba) bg_popup_fep_shadow_pane_g9

0x3068,	// (0x000278b9) bg_popup_fep_shadow_pane_cp3

0x03b0,	// (0x00024c01) list_accented_list_pane

0x73f8,	// (0x0002bc49) list_single_accented_list_pane_ParamLimits

0x73f8,	// (0x0002bc49) list_single_accented_list_pane

0x3068,	// (0x000278b9) list_highlight_pane_cp10

0x7409,	// (0x0002bc5a) list_single_accented_list_pane_t1

0xb825,	// (0x00030076) popup_slider_window_ParamLimits

0xb825,	// (0x00030076) popup_slider_window

0x7057,	// (0x0002b8a8) aid_indentation_list_msg

0xda16,	// (0x00032267) bg_popup_window_pane_cp19

0x7545,	// (0x0002bd96) popup_slider_window_g1

0x7561,	// (0x0002bdb2) popup_slider_window_g2

0x757d,	// (0x0002bdce) popup_slider_window_g3

0x0005,

0xfccf,	// (0x00034520) popup_slider_window_g

0x75e3,	// (0x0002be34) popup_slider_window_t1

0x7657,	// (0x0002bea8) small_volume_slider_vertical_pane

0x5f04,	// (0x0002a755) small_volume_slider_vertical_pane_g1

0x5f04,	// (0x0002a755) small_volume_slider_vertical_pane_g2

0x7673,	// (0x0002bec4) small_volume_slider_vertical_pane_g3

0x0002,

0xfce1,	// (0x00034532) small_volume_slider_vertical_pane_g

0xf2f6,	// (0x00033b47) area_side_right_pane_ParamLimits

0xf2f6,	// (0x00033b47) area_side_right_pane

0xca64,	// (0x000312b5) aid_size_side_button_ParamLimits

0xca64,	// (0x000312b5) aid_size_side_button

0xca7d,	// (0x000312ce) grid_sctrl_middle_pane_ParamLimits

0xca7d,	// (0x000312ce) grid_sctrl_middle_pane

0x1ff8,	// (0x00026849) sctrl_sk_bottom_pane

0x2009,	// (0x0002685a) sctrl_sk_top_pane

0x201b,	// (0x0002686c) aid_touch_sctrl_top

0xd1b4,	// (0x00031a05) bg_sctrl_sk_pane_ParamLimits

0xd1b4,	// (0x00031a05) bg_sctrl_sk_pane

0x2028,	// (0x00026879) sctrl_sk_top_pane_g1

0x2035,	// (0x00026886) sctrl_sk_top_pane_t1

0x201b,	// (0x0002686c) aid_touch_sctrl_bottom

0xd1b4,	// (0x00031a05) bg_sctrl_sk_pane_cp_ParamLimits

0xd1b4,	// (0x00031a05) bg_sctrl_sk_pane_cp

0x2050,	// (0x000268a1) sctrl_sk_bottom_pane_g1

0x2035,	// (0x00026886) sctrl_sk_bottom_pane_t1

0xca9c,	// (0x000312ed) cell_sctrl_middle_pane_ParamLimits

0xca9c,	// (0x000312ed) cell_sctrl_middle_pane

0xcac3,	// (0x00031314) aid_touch_sctrl_middle_ParamLimits

0xcac3,	// (0x00031314) aid_touch_sctrl_middle

0xd1b4,	// (0x00031a05) bg_sctrl_middle_pane_ParamLimits

0xd1b4,	// (0x00031a05) bg_sctrl_middle_pane

0x8417,	// (0x0002cc68) cell_sctrl_middle_pane_g1_ParamLimits

0x8417,	// (0x0002cc68) cell_sctrl_middle_pane_g1

0xcad7,	// (0x00031328) cell_sctrl_middle_pane_g2_ParamLimits

0xcad7,	// (0x00031328) cell_sctrl_middle_pane_g2

0x0001,

0xfced,	// (0x0003453e) cell_sctrl_middle_pane_g_ParamLimits

0xfced,	// (0x0003453e) cell_sctrl_middle_pane_g

0x38c7,	// (0x00028118) bg_sctrl_middle_pane_g1

0x38cf,	// (0x00028120) bg_sctrl_middle_pane_g2

0x38d7,	// (0x00028128) bg_sctrl_middle_pane_g3

0x38df,	// (0x00028130) bg_sctrl_middle_pane_g4

0x38e7,	// (0x00028138) bg_sctrl_middle_pane_g5

0x38ef,	// (0x00028140) bg_sctrl_middle_pane_g6

0x38f7,	// (0x00028148) bg_sctrl_middle_pane_g7

0x38ff,	// (0x00028150) bg_sctrl_middle_pane_g8

0x0007,

0xfcf2,	// (0x00034543) bg_sctrl_middle_pane_g

0x3907,	// (0x00028158) bg_sctrl_middle_pane_g8_copy1

0x38c7,	// (0x00028118) bg_sctrl_sk_pane_g1

0x38cf,	// (0x00028120) bg_sctrl_sk_pane_g2

0x38d7,	// (0x00028128) bg_sctrl_sk_pane_g3

0x0008,

0xf83a,	// (0x0003408b) bg_sctrl_sk_pane_g

0xd5fc,	// (0x00031e4d) aid_size_touch_scroll_bar

0x38df,	// (0x00028130) bg_sctrl_sk_pane_g4

0x38e7,	// (0x00028138) bg_sctrl_sk_pane_g5

0x38ef,	// (0x00028140) bg_sctrl_sk_pane_g6

0x38f7,	// (0x00028148) bg_sctrl_sk_pane_g7

0x38ff,	// (0x00028150) bg_sctrl_sk_pane_g8

0x3907,	// (0x00028158) bg_sctrl_sk_pane_g9

0x120f,	// (0x00025a60) popup_fep_china_hwr2_fs_candidate_window

0xb2d7,	// (0x0002fb28) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb2d7,	// (0x0002fb28) popup_fep_china_hwr2_fs_control_window

0x617f,	// (0x0002a9d0) sctrl_sk_top_pane_g2

0x0001,

0xfce8,	// (0x00034539) sctrl_sk_top_pane_g

0xdace,	// (0x0003231f) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdace,	// (0x0003231f) aid_fep_china_hwr2_fs_cell

0xdae4,	// (0x00032335) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdae4,	// (0x00032335) bg_popup_fep_shadow_pane_cp4

0xdafb,	// (0x0003234c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdafb,	// (0x0003234c) bg_popup_fep_shadow_pane_cp5

0xdb0d,	// (0x0003235e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdb0d,	// (0x0003235e) popup_fep_china_hwr2_fs_control_bar_grid

0xdb21,	// (0x00032372) popup_fep_china_hwr2_fs_control_funtion_grid

0x76d2,	// (0x0002bf23) aid_fep_china_hwr2_fs_candi_cell

0xa762,	// (0x0002efb3) bg_popup_fep_shadow_pane_cp6

0x76dc,	// (0x0002bf2d) popup_fep_china_hwr2_fs_candidate_grid

0xdb29,	// (0x0003237a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdb29,	// (0x0003237a) cell_fep_china_hwr2_fs_funtion_grid

0x5f04,	// (0x0002a755) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x76fe,	// (0x0002bf4f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x76fe,	// (0x0002bf4f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x770c,	// (0x0002bf5d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x770c,	// (0x0002bf5d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd03,	// (0x00034554) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd03,	// (0x00034554) cell_fep_china_hwr2_fs_funtion_grid_g

0xdb41,	// (0x00032392) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdb41,	// (0x00032392) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb56,	// (0x000323a7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb56,	// (0x000323a7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd08,	// (0x00034559) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd08,	// (0x00034559) cell_fep_china_hwr2_fs_funtion_grid_t

0x7753,	// (0x0002bfa4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x775b,	// (0x0002bfac) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x7763,	// (0x0002bfb4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd0d,	// (0x0003455e) popup_fep_china_hwr2_fs_control_bar_grid_g

0x776b,	// (0x0002bfbc) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x776b,	// (0x0002bfbc) cell_fep_china_hwr2_fs_candidate_grid

0x778a,	// (0x0002bfdb) popup_fep_china_hwr2_fs_candidate_grid_g20

0x7792,	// (0x0002bfe3) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5f04,	// (0x0002a755) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5f04,	// (0x0002a755) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2d,	// (0x0003437e) cell_fep_china_hwr2_fs_candidate_grid_g

0x779a,	// (0x0002bfeb) cell_fep_china_hwr2_fs_candidate_grid_t1

0x34b3,	// (0x00027d04) clock_nsta_pane_cp_24_ParamLimits

0x34b3,	// (0x00027d04) clock_nsta_pane_cp_24

0x3533,	// (0x00027d84) indicator_nsta_pane_cp_24_ParamLimits

0x3533,	// (0x00027d84) indicator_nsta_pane_cp_24

0x45b0,	// (0x00028e01) heading_pane_g1

0x0001,

0xf89f,	// (0x000340f0) heading_pane_g

0x5041,	// (0x00029892) grid_sct_catagory_button_pane

0x5073,	// (0x000298c4) scroll_pane_cp5_ParamLimits

0x5b6b,	// (0x0002a3bc) button_value_adjust_pane_cp5_ParamLimits

0x5b6b,	// (0x0002a3bc) button_value_adjust_pane_cp5

0x5c50,	// (0x0002a4a1) form2_midp_time_pane_ParamLimits

0x77a8,	// (0x0002bff9) cell_sct_catagory_button_pane_ParamLimits

0x77a8,	// (0x0002bff9) cell_sct_catagory_button_pane

0x5ec9,	// (0x0002a71a) bg_button_pane_cp01_ParamLimits

0x5ec9,	// (0x0002a71a) bg_button_pane_cp01

0x5f04,	// (0x0002a755) cell_sct_catagory_button_pane_g1

0xb8a6,	// (0x000300f7) popup_tb_extension_window

0xdb72,	// (0x000323c3) aid_size_cell_ext_ParamLimits

0xdb72,	// (0x000323c3) aid_size_cell_ext

0xd43e,	// (0x00031c8f) bg_tb_trans_pane_cp1_ParamLimits

0xd43e,	// (0x00031c8f) bg_tb_trans_pane_cp1

0xdb98,	// (0x000323e9) grid_tb_ext_pane_ParamLimits

0xdb98,	// (0x000323e9) grid_tb_ext_pane

0xdbd5,	// (0x00032426) cell_tb_ext_pane_ParamLimits

0xdbd5,	// (0x00032426) cell_tb_ext_pane

0xdbfd,	// (0x0003244e) cell_tb_ext_pane_g1_ParamLimits

0xdbfd,	// (0x0003244e) cell_tb_ext_pane_g1

0x783c,	// (0x0002c08d) cell_tb_ext_pane_t1

0xd1b4,	// (0x00031a05) list_highlight_pane_cp11_ParamLimits

0xd1b4,	// (0x00031a05) list_highlight_pane_cp11

0xa88d,	// (0x0002f0de) popup_uni_indicator_window_ParamLimits

0xa88d,	// (0x0002f0de) popup_uni_indicator_window

0xd6c3,	// (0x00031f14) bg_popup_sub_pane_cp14

0x7859,	// (0x0002c0aa) list_uniindi_pane

0x7865,	// (0x0002c0b6) uniindi_top_pane

0xd1b4,	// (0x00031a05) bg_uniindi_top_pane

0x7886,	// (0x0002c0d7) uniindi_top_pane_g1

0x789c,	// (0x0002c0ed) uniindi_top_pane_g2

0x0003,

0xfd14,	// (0x00034565) uniindi_top_pane_g

0x78c6,	// (0x0002c117) uniindi_top_pane_t1

0x78f2,	// (0x0002c143) list_single_uniindi_pane_ParamLimits

0x78f2,	// (0x0002c143) list_single_uniindi_pane

0x5f04,	// (0x0002a755) bg_uniindi_top_pane_g1

0x7905,	// (0x0002c156) list_single_uniindi_pane_g1

0x7918,	// (0x0002c169) list_single_uniindi_pane_t1

0xa762,	// (0x0002efb3) control_bg_pane

0x793d,	// (0x0002c18e) bg_sctrl_sk_pane_cp1

0x7946,	// (0x0002c197) bg_sctrl_sk_pane_cp2

0x794f,	// (0x0002c1a0) control_bg_pane_g1

0x7958,	// (0x0002c1a9) control_bg_pane_g2

0x0001,

0xfd1d,	// (0x0003456e) control_bg_pane_g

0x59a3,	// (0x0002a1f4) cell_indicator_nsta_pane_g1_ParamLimits

0xc44e,	// (0x00030c9f) cell_indicator_nsta_pane_g2_ParamLimits

0xfa91,	// (0x000342e2) cell_indicator_nsta_pane_g_ParamLimits

0xf0cb,	// (0x0003391c) form2_midp_time_pane_t1_ParamLimits

0x1c29,	// (0x0002647a) main_idle_act4_pane_ParamLimits

0x1c29,	// (0x0002647a) main_idle_act4_pane

0xb8a6,	// (0x000300f7) popup_tb_extension_window_ParamLimits

0xdbbd,	// (0x0003240e) tb_ext_find_pane_ParamLimits

0xdbbd,	// (0x0003240e) tb_ext_find_pane

0x7961,	// (0x0002c1b2) ai_gene_pane_1_cp1

0x31b2,	// (0x00027a03) ai_gene_pane_2_cp1

0x7969,	// (0x0002c1ba) list_single_idle_plugin_calendar_pane

0x7972,	// (0x0002c1c3) list_single_idle_plugin_notification_pane

0x797b,	// (0x0002c1cc) list_single_idle_plugin_player_pane

0xdc1a,	// (0x0003246b) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc1a,	// (0x0003246b) list_single_idle_plugin_shortcut_pane

0xdc42,	// (0x00032493) main_idle_act4_pane_t1

0xdc5a,	// (0x000324ab) main_idle_act4_pane_t2

0x0001,

0xfd22,	// (0x00034573) main_idle_act4_pane_t

0xdc72,	// (0x000324c3) middle_sk_idle_act4_pane_ParamLimits

0xdc72,	// (0x000324c3) middle_sk_idle_act4_pane

0xdc8e,	// (0x000324df) popup_clock_digital_analogue_window_cp2

0xdcb5,	// (0x00032506) shortcut_wheel_idle_act4_pane_ParamLimits

0xdcb5,	// (0x00032506) shortcut_wheel_idle_act4_pane

0x5f04,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g1

0x5f04,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g2

0x5f04,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g3

0x5f04,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g4

0x5f04,	// (0x0002a755) shortcut_wheel_idle_act4_pane_g5

0x7a0e,	// (0x0002c25f) shortcut_wheel_idle_act4_pane_g6

0x7a16,	// (0x0002c267) shortcut_wheel_idle_act4_pane_g7

0x7a1e,	// (0x0002c26f) shortcut_wheel_idle_act4_pane_g8

0x7a26,	// (0x0002c277) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd27,	// (0x00034578) shortcut_wheel_idle_act4_pane_g

0xc5ed,	// (0x00030e3e) middle_sk_idle_act4_pane_g1_ParamLimits

0xc5ed,	// (0x00030e3e) middle_sk_idle_act4_pane_g1

0xdd32,	// (0x00032583) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd32,	// (0x00032583) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4a,	// (0x0003459b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4a,	// (0x0003459b) middle_sk_idle_act4_pane_g

0xdd4a,	// (0x0003259b) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd4a,	// (0x0003259b) middle_sk_idle_act4_pane_t1

0xdd79,	// (0x000325ca) grid_ai_shortcut_pane_ParamLimits

0xdd79,	// (0x000325ca) grid_ai_shortcut_pane

0xdd96,	// (0x000325e7) list_highlight_pane_cp16_ParamLimits

0xdd96,	// (0x000325e7) list_highlight_pane_cp16

0xdda3,	// (0x000325f4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdda3,	// (0x000325f4) list_single_idle_plugin_shortcut_pane_g1

0xddaf,	// (0x00032600) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xddaf,	// (0x00032600) list_single_idle_plugin_shortcut_pane_g2

0xddcd,	// (0x0003261e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xddcd,	// (0x0003261e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd4f,	// (0x000345a0) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd4f,	// (0x000345a0) list_single_idle_plugin_shortcut_pane_g

0xdde2,	// (0x00032633) cell_ai_shortcut_pane_ParamLimits

0xdde2,	// (0x00032633) cell_ai_shortcut_pane

0xddf8,	// (0x00032649) cell_ai_shortcut_pane_g1_ParamLimits

0xddf8,	// (0x00032649) cell_ai_shortcut_pane_g1

0x7961,	// (0x0002c1b2) ai_gene_pane_1_cp2

0x7b57,	// (0x0002c3a8) ai_gene_pane_2_cp2

0x7b5f,	// (0x0002c3b0) list_highlight_pane_cp15

0x7b68,	// (0x0002c3b9) list_single_idle_plugin_calendar_pane_g1

0x7b5f,	// (0x0002c3b0) list_highlight_pane_cp17

0x7b70,	// (0x0002c3c1) list_single_idle_plugin_calendar_pane_g1_copy1

0x7b78,	// (0x0002c3c9) list_single_idle_plugin_player_pane_g1

0x52a8,	// (0x00029af9) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd56,	// (0x000345a7) list_single_idle_plugin_player_pane_g

0x7b80,	// (0x0002c3d1) list_single_idle_plugin_player_pane_t1

0x7b8e,	// (0x0002c3df) list_single_idle_plugin_player_pane_t2

0x7b9c,	// (0x0002c3ed) list_single_idle_plugin_player_pane_t3

0x7baa,	// (0x0002c3fb) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5b,	// (0x000345ac) list_single_idle_plugin_player_pane_t

0x7bb8,	// (0x0002c409) wait_bar_pane_cp15

0x7bc0,	// (0x0002c411) grid_ai_notification_pane

0x52a8,	// (0x00029af9) list_single_idle_plugin_notification_pane_g1

0xde1a,	// (0x0003266b) cell_ai_notification_pane_ParamLimits

0xde1a,	// (0x0003266b) cell_ai_notification_pane

0x7bd6,	// (0x0002c427) cell_ai_notification_pane_g1

0x7bde,	// (0x0002c42f) cell_ai_notification_pane_t1

0xde27,	// (0x00032678) tb_ext_find_button_pane

0xde2f,	// (0x00032680) tb_ext_find_pane_g1

0xde37,	// (0x00032688) tb_ext_find_pane_t1

0x0aa3,	// (0x000252f4) tb_ext_find_button_pane_g1

0x7c0a,	// (0x0002c45b) tb_ext_find_button_pane_g2

0x0001,

0xfd64,	// (0x000345b5) tb_ext_find_button_pane_g

0xdc42,	// (0x00032493) main_idle_act4_pane_t1_ParamLimits

0xdc5a,	// (0x000324ab) main_idle_act4_pane_t2_ParamLimits

0xfd22,	// (0x00034573) main_idle_act4_pane_t_ParamLimits

0xdc8e,	// (0x000324df) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdca5,	// (0x000324f6) sat_plugin_idle_act4_pane_ParamLimits

0xdca5,	// (0x000324f6) sat_plugin_idle_act4_pane

0xde45,	// (0x00032696) sat_plugin_idle_act4_pane_t1_ParamLimits

0xde45,	// (0x00032696) sat_plugin_idle_act4_pane_t1

0xde5d,	// (0x000326ae) sat_plugin_idle_act4_pane_t2_ParamLimits

0xde5d,	// (0x000326ae) sat_plugin_idle_act4_pane_t2

0xde75,	// (0x000326c6) sat_plugin_idle_act4_pane_t3_ParamLimits

0xde75,	// (0x000326c6) sat_plugin_idle_act4_pane_t3

0xde8d,	// (0x000326de) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde8d,	// (0x000326de) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd69,	// (0x000345ba) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd69,	// (0x000345ba) sat_plugin_idle_act4_pane_t

0xf4d3,	// (0x00033d24) popup_battery_window_ParamLimits

0xf4d3,	// (0x00033d24) popup_battery_window

0xd1b4,	// (0x00031a05) bg_popup_sub_pane_cp25_ParamLimits

0xd1b4,	// (0x00031a05) bg_popup_sub_pane_cp25

0x7c5f,	// (0x0002c4b0) popup_battery_window_g1_ParamLimits

0x7c5f,	// (0x0002c4b0) popup_battery_window_g1

0x7c6b,	// (0x0002c4bc) popup_battery_window_t1_ParamLimits

0x7c6b,	// (0x0002c4bc) popup_battery_window_t1

0x7c7d,	// (0x0002c4ce) popup_battery_window_t2_ParamLimits

0x7c7d,	// (0x0002c4ce) popup_battery_window_t2

0x0001,

0xfd72,	// (0x000345c3) popup_battery_window_t_ParamLimits

0xfd72,	// (0x000345c3) popup_battery_window_t

0xb054,	// (0x0002f8a5) midp_canvas_pane_ParamLimits

0xb0b0,	// (0x0002f901) midp_keypad_pane_ParamLimits

0xb0b0,	// (0x0002f901) midp_keypad_pane

0x3397,	// (0x00027be8) main_midp_pane_ParamLimits

0x5a1e,	// (0x0002a26f) signal_pane_g2_cp_ParamLimits

0xdea5,	// (0x000326f6) aid_size_cell_midp_keypad_ParamLimits

0xdea5,	// (0x000326f6) aid_size_cell_midp_keypad

0xdec3,	// (0x00032714) midp_keyp_game_grid_pane_ParamLimits

0xdec3,	// (0x00032714) midp_keyp_game_grid_pane

0xdeea,	// (0x0003273b) midp_keyp_rocker_pane_ParamLimits

0xdeea,	// (0x0003273b) midp_keyp_rocker_pane

0xdf39,	// (0x0003278a) midp_keyp_sk_left_pane_ParamLimits

0xdf39,	// (0x0003278a) midp_keyp_sk_left_pane

0xdf8f,	// (0x000327e0) midp_keyp_sk_right_pane_ParamLimits

0xdf8f,	// (0x000327e0) midp_keyp_sk_right_pane

0xa762,	// (0x0002efb3) bg_button_pane_cp03

0xdfe5,	// (0x00032836) midp_keyp_sk_left_pane_g1

0xa762,	// (0x0002efb3) bg_button_pane_cp04

0xdfe5,	// (0x00032836) midp_keyp_sk_right_pane_g1

0x5f04,	// (0x0002a755) midp_keyp_rocker_pane_g1

0xdfed,	// (0x0003283e) keyp_game_cell_pane_ParamLimits

0xdfed,	// (0x0003283e) keyp_game_cell_pane

0xa762,	// (0x0002efb3) bg_button_pane_cp02

0xe013,	// (0x00032864) keyp_game_cell_pane_g1

0xa824,	// (0x0002f075) popup_fep_vkb2_window_ParamLimits

0xa824,	// (0x0002f075) popup_fep_vkb2_window

0xcae9,	// (0x0003133a) aid_size_cell_vkb2_ParamLimits

0xcae9,	// (0x0003133a) aid_size_cell_vkb2

0xcb15,	// (0x00031366) popup_fep_vkb2_window_g1_ParamLimits

0xcb15,	// (0x00031366) popup_fep_vkb2_window_g1

0xcb65,	// (0x000313b6) vkb2_area_bottom_pane_ParamLimits

0xcb65,	// (0x000313b6) vkb2_area_bottom_pane

0xcbc1,	// (0x00031412) vkb2_area_keypad_pane_ParamLimits

0xcbc1,	// (0x00031412) vkb2_area_keypad_pane

0xcc0f,	// (0x00031460) vkb2_area_top_pane_ParamLimits

0xcc0f,	// (0x00031460) vkb2_area_top_pane

0xcc9c,	// (0x000314ed) vkb2_top_entry_pane_ParamLimits

0xcc9c,	// (0x000314ed) vkb2_top_entry_pane

0xccc9,	// (0x0003151a) vkb2_top_grid_left_pane_ParamLimits

0xccc9,	// (0x0003151a) vkb2_top_grid_left_pane

0xccea,	// (0x0003153b) vkb2_top_grid_right_pane_ParamLimits

0xccea,	// (0x0003153b) vkb2_top_grid_right_pane

0x22bc,	// (0x00026b0d) vkb2_cell_keypad_pane_ParamLimits

0x22bc,	// (0x00026b0d) vkb2_cell_keypad_pane

0xcd32,	// (0x00031583) vkb2_area_bottom_grid_pane_ParamLimits

0xcd32,	// (0x00031583) vkb2_area_bottom_grid_pane

0xcd5c,	// (0x000315ad) vkb2_area_bottom_pane_g1_ParamLimits

0xcd5c,	// (0x000315ad) vkb2_area_bottom_pane_g1

0xcd82,	// (0x000315d3) vkb2_area_bottom_pane_g2_ParamLimits

0xcd82,	// (0x000315d3) vkb2_area_bottom_pane_g2

0xcdb3,	// (0x00031604) vkb2_area_bottom_pane_g3_ParamLimits

0xcdb3,	// (0x00031604) vkb2_area_bottom_pane_g3

0x0002,

0xfd77,	// (0x000345c8) vkb2_area_bottom_pane_g_ParamLimits

0xfd77,	// (0x000345c8) vkb2_area_bottom_pane_g

0x2466,	// (0x00026cb7) vkb2_top_cell_left_pane_ParamLimits

0x2466,	// (0x00026cb7) vkb2_top_cell_left_pane

0xe01c,	// (0x0003286d) vkb2_top_entry_pane_g1_ParamLimits

0xe01c,	// (0x0003286d) vkb2_top_entry_pane_g1

0xe02a,	// (0x0003287b) vkb2_top_entry_pane_t1_ParamLimits

0xe02a,	// (0x0003287b) vkb2_top_entry_pane_t1

0x7e27,	// (0x0002c678) vkb2_top_entry_pane_t2_ParamLimits

0x7e27,	// (0x0002c678) vkb2_top_entry_pane_t2

0x7e59,	// (0x0002c6aa) vkb2_top_entry_pane_t3_ParamLimits

0x7e59,	// (0x0002c6aa) vkb2_top_entry_pane_t3

0x0002,

0xfd7e,	// (0x000345cf) vkb2_top_entry_pane_t_ParamLimits

0xfd7e,	// (0x000345cf) vkb2_top_entry_pane_t

0xce1d,	// (0x0003166e) vkb2_top_grid_right_pane_g1_ParamLimits

0xce1d,	// (0x0003166e) vkb2_top_grid_right_pane_g1

0x24c9,	// (0x00026d1a) vkb2_top_grid_right_pane_g2_ParamLimits

0x24c9,	// (0x00026d1a) vkb2_top_grid_right_pane_g2

0x24e1,	// (0x00026d32) vkb2_top_grid_right_pane_g3_ParamLimits

0x24e1,	// (0x00026d32) vkb2_top_grid_right_pane_g3

0xce33,	// (0x00031684) vkb2_top_grid_right_pane_g4_ParamLimits

0xce33,	// (0x00031684) vkb2_top_grid_right_pane_g4

0x0003,

0xfd85,	// (0x000345d6) vkb2_top_grid_right_pane_g_ParamLimits

0xfd85,	// (0x000345d6) vkb2_top_grid_right_pane_g

0x250f,	// (0x00026d60) vkb2_top_cell_left_pane_g1

0x2526,	// (0x00026d77) vkb2_cell_keypad_pane_g1_ParamLimits

0x2526,	// (0x00026d77) vkb2_cell_keypad_pane_g1

0x7e7d,	// (0x0002c6ce) vkb2_cell_keypad_pane_t1_ParamLimits

0x7e7d,	// (0x0002c6ce) vkb2_cell_keypad_pane_t1

0x2534,	// (0x00026d85) vkb2_cell_bottom_grid_pane_ParamLimits

0x2534,	// (0x00026d85) vkb2_cell_bottom_grid_pane

0x256d,	// (0x00026dbe) vkb2_cell_bottom_grid_pane_g1

0xdcd6,	// (0x00032527) aid_call2_pane_cp02

0xdcde,	// (0x0003252f) aid_call_pane_cp02

0xdce6,	// (0x00032537) clock_digital_number_pane_cp10

0xdcee,	// (0x0003253f) clock_digital_number_pane_cp11

0xdcf6,	// (0x00032547) clock_digital_number_pane_cp12

0xdcfe,	// (0x0003254f) clock_digital_number_pane_cp13

0xdd06,	// (0x00032557) clock_digital_separator_pane_cp10

0x0aa3,	// (0x000252f4) popup_clock_digital_analogue_window_cp2_g1

0x0aa3,	// (0x000252f4) popup_clock_digital_analogue_window_cp2_g2

0xdd0e,	// (0x0003255f) popup_clock_digital_analogue_window_cp2_g3

0x0aa3,	// (0x000252f4) popup_clock_digital_analogue_window_cp2_g4

0xdd0e,	// (0x0003255f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3a,	// (0x0003458b) popup_clock_digital_analogue_window_cp2_g

0xdd16,	// (0x00032567) popup_clock_digital_analogue_window_cp2_t1

0xdd24,	// (0x00032575) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd45,	// (0x00034596) popup_clock_digital_analogue_window_cp2_t

0x5f04,	// (0x0002a755) clock_digital_number_pane_cp10_g1

0x5f04,	// (0x0002a755) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2d,	// (0x0003437e) clock_digital_number_pane_cp10_g

0x5f04,	// (0x0002a755) clock_digital_separator_pane_cp10_g1

0x5f04,	// (0x0002a755) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2d,	// (0x0003437e) clock_digital_separator_pane_cp10_g

0x78a8,	// (0x0002c0f9) uniindi_top_pane_g3

0x78b9,	// (0x0002c10a) uniindi_top_pane_g4

0x2347,	// (0x00026b98) vkb2_row_keypad_pane_ParamLimits

0x2347,	// (0x00026b98) vkb2_row_keypad_pane

0x2589,	// (0x00026dda) vkb2_cell_t_keypad_pane_ParamLimits

0x2589,	// (0x00026dda) vkb2_cell_t_keypad_pane

0x2599,	// (0x00026dea) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2599,	// (0x00026dea) vkb2_cell_t_keypad_pane_cp08

0x25ae,	// (0x00026dff) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x25ae,	// (0x00026dff) vkb2_cell_t_keypad_pane_cp09

0x25c2,	// (0x00026e13) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x25c2,	// (0x00026e13) vkb2_cell_t_keypad_pane_cp01

0x25d3,	// (0x00026e24) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x25d3,	// (0x00026e24) vkb2_cell_t_keypad_pane_cp02

0x25e4,	// (0x00026e35) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x25e4,	// (0x00026e35) vkb2_cell_t_keypad_pane_cp03

0x25f5,	// (0x00026e46) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x25f5,	// (0x00026e46) vkb2_cell_t_keypad_pane_cp04

0x2606,	// (0x00026e57) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2606,	// (0x00026e57) vkb2_cell_t_keypad_pane_cp05

0x2617,	// (0x00026e68) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2617,	// (0x00026e68) vkb2_cell_t_keypad_pane_cp06

0x262a,	// (0x00026e7b) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x262a,	// (0x00026e7b) vkb2_cell_t_keypad_pane_cp07

0x263f,	// (0x00026e90) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x263f,	// (0x00026e90) vkb2_cell_t_keypad_pane_cp10

0x617f,	// (0x0002a9d0) vkb2_cell_t_keypad_pane_g1

0x7e94,	// (0x0002c6e5) vkb2_cell_t_keypad_pane_t1

0xa762,	// (0x0002efb3) popup_grid_graphic2_window

0xe063,	// (0x000328b4) aid_size_cell_graphic2_ParamLimits

0xe063,	// (0x000328b4) aid_size_cell_graphic2

0xe0a1,	// (0x000328f2) bg_popup_window_pane_cp21_ParamLimits

0xe0a1,	// (0x000328f2) bg_popup_window_pane_cp21

0xe0af,	// (0x00032900) graphic2_pages_pane_ParamLimits

0xe0af,	// (0x00032900) graphic2_pages_pane

0xe107,	// (0x00032958) grid_graphic2_control_pane_ParamLimits

0xe107,	// (0x00032958) grid_graphic2_control_pane

0xe14f,	// (0x000329a0) grid_graphic2_pane_ParamLimits

0xe14f,	// (0x000329a0) grid_graphic2_pane

0xe1da,	// (0x00032a2b) cell_graphic2_pane

0xa762,	// (0x0002efb3) main_comp_mode_pane

0x7113,	// (0x0002b964) list_ai3_gene_pane_ParamLimits

0xda16,	// (0x00032267) bg_popup_window_pane_cp19_ParamLimits

0x74e5,	// (0x0002bd36) bg_touch_area_indi_pane_ParamLimits

0x74e5,	// (0x0002bd36) bg_touch_area_indi_pane

0x74fb,	// (0x0002bd4c) bg_touch_area_indi_pane_cp01_ParamLimits

0x74fb,	// (0x0002bd4c) bg_touch_area_indi_pane_cp01

0x7511,	// (0x0002bd62) bg_touch_area_indi_pane_cp02_ParamLimits

0x7511,	// (0x0002bd62) bg_touch_area_indi_pane_cp02

0x752b,	// (0x0002bd7c) bg_touch_area_indi_pane_cp03_ParamLimits

0x752b,	// (0x0002bd7c) bg_touch_area_indi_pane_cp03

0x7545,	// (0x0002bd96) popup_slider_window_g1_ParamLimits

0x7561,	// (0x0002bdb2) popup_slider_window_g2_ParamLimits

0x757d,	// (0x0002bdce) popup_slider_window_g3_ParamLimits

0xfccf,	// (0x00034520) popup_slider_window_g_ParamLimits

0x75e3,	// (0x0002be34) popup_slider_window_t1_ParamLimits

0x7657,	// (0x0002bea8) small_volume_slider_vertical_pane_ParamLimits

0xe1da,	// (0x00032a2b) cell_graphic2_pane_ParamLimits

0xe23c,	// (0x00032a8d) bg_button_pane_cp10_ParamLimits

0xe23c,	// (0x00032a8d) bg_button_pane_cp10

0xe24f,	// (0x00032aa0) bg_button_pane_cp11_ParamLimits

0xe24f,	// (0x00032aa0) bg_button_pane_cp11

0xe262,	// (0x00032ab3) graphic2_pages_pane_g1_ParamLimits

0xe262,	// (0x00032ab3) graphic2_pages_pane_g1

0xe27d,	// (0x00032ace) graphic2_pages_pane_g2_ParamLimits

0xe27d,	// (0x00032ace) graphic2_pages_pane_g2

0x0001,

0xfd93,	// (0x000345e4) graphic2_pages_pane_g_ParamLimits

0xfd93,	// (0x000345e4) graphic2_pages_pane_g

0xe295,	// (0x00032ae6) graphic2_pages_pane_t1_ParamLimits

0xe295,	// (0x00032ae6) graphic2_pages_pane_t1

0xe2ad,	// (0x00032afe) cell_graphic2_control_pane_ParamLimits

0xe2ad,	// (0x00032afe) cell_graphic2_control_pane

0xe2e1,	// (0x00032b32) cell_graphic2_pane_g1_ParamLimits

0xe2e1,	// (0x00032b32) cell_graphic2_pane_g1

0xc648,	// (0x00030e99) cell_graphic2_pane_g2_ParamLimits

0xc648,	// (0x00030e99) cell_graphic2_pane_g2

0xe2ee,	// (0x00032b3f) cell_graphic2_pane_g3_ParamLimits

0xe2ee,	// (0x00032b3f) cell_graphic2_pane_g3

0xc655,	// (0x00030ea6) cell_graphic2_pane_g4_ParamLimits

0xc655,	// (0x00030ea6) cell_graphic2_pane_g4

0xe2fb,	// (0x00032b4c) cell_graphic2_pane_g5_ParamLimits

0xe2fb,	// (0x00032b4c) cell_graphic2_pane_g5

0x0004,

0xfd98,	// (0x000345e9) cell_graphic2_pane_g_ParamLimits

0xfd98,	// (0x000345e9) cell_graphic2_pane_g

0xe317,	// (0x00032b68) cell_graphic2_pane_t1_ParamLimits

0xe317,	// (0x00032b68) cell_graphic2_pane_t1

0x45a4,	// (0x00028df5) grid_highlight_pane_cp11_ParamLimits

0x45a4,	// (0x00028df5) grid_highlight_pane_cp11

0xd1b4,	// (0x00031a05) bg_button_pane_cp05

0xe360,	// (0x00032bb1) cell_graphic2_control_pane_g1

0x5f04,	// (0x0002a755) bg_touch_area_indi_pane_g1

0x8177,	// (0x0002c9c8) aid_cmod_rocker_key_size

0x8181,	// (0x0002c9d2) aid_cmode_itu_key_size

0x818b,	// (0x0002c9dc) main_cmode_video_pane

0x8195,	// (0x0002c9e6) main_comp_mode_itu_pane

0x81a1,	// (0x0002c9f2) main_comp_mode_rocker_pane

0x81ad,	// (0x0002c9fe) cell_cmode_rocker_pane_ParamLimits

0x81ad,	// (0x0002c9fe) cell_cmode_rocker_pane

0x81c1,	// (0x0002ca12) cell_cmode_itu_pane_ParamLimits

0x81c1,	// (0x0002ca12) cell_cmode_itu_pane

0xd6c3,	// (0x00031f14) bg_button_pane_cp06_ParamLimits

0xd6c3,	// (0x00031f14) bg_button_pane_cp06

0x617f,	// (0x0002a9d0) cell_cmode_rocker_pane_g1_ParamLimits

0x617f,	// (0x0002a9d0) cell_cmode_rocker_pane_g1

0x76fe,	// (0x0002bf4f) cell_cmode_rocker_pane_g2_ParamLimits

0x76fe,	// (0x0002bf4f) cell_cmode_rocker_pane_g2

0x0001,

0xfda8,	// (0x000345f9) cell_cmode_rocker_pane_g_ParamLimits

0xfda8,	// (0x000345f9) cell_cmode_rocker_pane_g

0xa762,	// (0x0002efb3) bg_button_pane_cp07

0x81d8,	// (0x0002ca29) cell_cmode_itu_pane_g1

0x81e1,	// (0x0002ca32) cell_cmode_itu_pane_t1

0x81ef,	// (0x0002ca40) cell_cmode_itu_pane_t2

0x0001,

0xfdad,	// (0x000345fe) cell_cmode_itu_pane_t

0x792d,	// (0x0002c17e) aid_touch_ctrl_left

0x7935,	// (0x0002c186) aid_touch_ctrl_right

0xa762,	// (0x0002efb3) compa_mode_pane

0xe388,	// (0x00032bd9) aid_cmod_rocker_key_size_cp

0xe392,	// (0x00032be3) aid_cmode_itu_key_size_cp

0x8211,	// (0x0002ca62) compa_mode_pane_g1

0x8219,	// (0x0002ca6a) compa_mode_pane_g2

0x8221,	// (0x0002ca72) compa_mode_pane_g3

0x0002,

0xfdb2,	// (0x00034603) compa_mode_pane_g

0xe39c,	// (0x00032bed) main_comp_mode_itu_pane_cp

0xe3a4,	// (0x00032bf5) main_comp_mode_rocker_pane_cp

0xe3ac,	// (0x00032bfd) cell_cmode_itu_pane_cp_ParamLimits

0xe3ac,	// (0x00032bfd) cell_cmode_itu_pane_cp

0xe3c1,	// (0x00032c12) cell_cmode_rocker_pane_cp_ParamLimits

0xe3c1,	// (0x00032c12) cell_cmode_rocker_pane_cp

0xd6c3,	// (0x00031f14) bg_button_pane_cp06_cp_ParamLimits

0xd6c3,	// (0x00031f14) bg_button_pane_cp06_cp

0x617f,	// (0x0002a9d0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x617f,	// (0x0002a9d0) cell_cmode_rocker_pane_g1_cp

0x5f04,	// (0x0002a755) cell_cmode_rocker_pane_g2_cp

0xa762,	// (0x0002efb3) bg_button_pane_cp07_cp

0xe3d3,	// (0x00032c24) cell_cmode_itu_pane_g1_cp

0xe3dc,	// (0x00032c2d) cell_cmode_itu_pane_t1_cp

0xe3dc,	// (0x00032c2d) cell_cmode_itu_pane_t2_cp

0xc27b,	// (0x00030acc) settings_code_pane_cp2

0xaaa7,	// (0x0002f2f8) bg_popup_window_pane_cp3_ParamLimits

0xd3c8,	// (0x00031c19) heading_pane_cp3_ParamLimits

0xd3d7,	// (0x00031c28) listscroll_popup_graphic_pane_ParamLimits

0x1c37,	// (0x00026488) fep_hwr_aid_pane_ParamLimits

0x201b,	// (0x0002686c) aid_touch_sctrl_top_ParamLimits

0x2028,	// (0x00026879) sctrl_sk_top_pane_g1_ParamLimits

0x617f,	// (0x0002a9d0) sctrl_sk_top_pane_g2_ParamLimits

0xfce8,	// (0x00034539) sctrl_sk_top_pane_g_ParamLimits

0x2035,	// (0x00026886) sctrl_sk_top_pane_t1_ParamLimits

0x201b,	// (0x0002686c) aid_touch_sctrl_bottom_ParamLimits

0x2035,	// (0x00026886) sctrl_sk_bottom_pane_t1_ParamLimits

0x7872,	// (0x0002c0c3) aid_area_touch_clock

0xcc5b,	// (0x000314ac) aid_vkb2_area_top_pane_cell_ParamLimits

0xcc5b,	// (0x000314ac) aid_vkb2_area_top_pane_cell

0xcd0b,	// (0x0003155c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd0b,	// (0x0003155c) aid_vkb2_area_bottom_pane_cell

0x7ddf,	// (0x0002c630) popup_char_count_window

0x8277,	// (0x0002cac8) popup_char_count_window_g1

0x8280,	// (0x0002cad1) popup_char_count_window_g2

0x8289,	// (0x0002cada) popup_char_count_window_g3

0x0002,

0xfdb9,	// (0x0003460a) popup_char_count_window_g

0x8292,	// (0x0002cae3) popup_char_count_window_t1

0x20d0,	// (0x00026921) popup_fep_char_preview_window_ParamLimits

0x20d0,	// (0x00026921) popup_fep_char_preview_window

0xcc7b,	// (0x000314cc) vkb2_top_candi_pane_ParamLimits

0xcc7b,	// (0x000314cc) vkb2_top_candi_pane

0xe3ea,	// (0x00032c3b) cell_vkb2_top_candi_pane_ParamLimits

0xe3ea,	// (0x00032c3b) cell_vkb2_top_candi_pane

0x3f2d,	// (0x0002877e) bg_popup_fep_char_preview_window_ParamLimits

0x3f2d,	// (0x0002877e) bg_popup_fep_char_preview_window

0x2654,	// (0x00026ea5) popup_fep_char_preview_window_t1_ParamLimits

0x2654,	// (0x00026ea5) popup_fep_char_preview_window_t1

0x82ee,	// (0x0002cb3f) bg_popup_fep_char_preview_window_g1

0x82f6,	// (0x0002cb47) bg_popup_fep_char_preview_window_g2

0x82fe,	// (0x0002cb4f) bg_popup_fep_char_preview_window_g3

0x8306,	// (0x0002cb57) bg_popup_fep_char_preview_window_g4

0x830e,	// (0x0002cb5f) bg_popup_fep_char_preview_window_g5

0x8316,	// (0x0002cb67) bg_popup_fep_char_preview_window_g6

0x831e,	// (0x0002cb6f) bg_popup_fep_char_preview_window_g7

0x8326,	// (0x0002cb77) bg_popup_fep_char_preview_window_g8

0x832e,	// (0x0002cb7f) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdc0,	// (0x00034611) bg_popup_fep_char_preview_window_g

0x617f,	// (0x0002a9d0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x617f,	// (0x0002a9d0) cell_vkb2_top_candi_pane_g1

0x64c0,	// (0x0002ad11) cell_vkb2_top_candi_pane_g2_ParamLimits

0x64c0,	// (0x0002ad11) cell_vkb2_top_candi_pane_g2

0x64e1,	// (0x0002ad32) cell_vkb2_top_candi_pane_g3_ParamLimits

0x64e1,	// (0x0002ad32) cell_vkb2_top_candi_pane_g3

0x2696,	// (0x00026ee7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2696,	// (0x00026ee7) cell_vkb2_top_candi_pane_g4

0x8336,	// (0x0002cb87) cell_vkb2_top_candi_pane_g5_ParamLimits

0x8336,	// (0x0002cb87) cell_vkb2_top_candi_pane_g5

0x76fe,	// (0x0002bf4f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x76fe,	// (0x0002bf4f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd5,	// (0x00034626) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd5,	// (0x00034626) cell_vkb2_top_candi_pane_g

0x26b7,	// (0x00026f08) cell_vkb2_top_candi_pane_t1

0x1a97,	// (0x000262e8) aid_size_touch_slider_mark_ParamLimits

0x1a97,	// (0x000262e8) aid_size_touch_slider_mark

0xe0eb,	// (0x0003293c) grid_graphic2_catg_pane_ParamLimits

0xe0eb,	// (0x0003293c) grid_graphic2_catg_pane

0xe1a9,	// (0x000329fa) popup_grid_graphic2_window_t1_ParamLimits

0xe1a9,	// (0x000329fa) popup_grid_graphic2_window_t1

0xe1bf,	// (0x00032a10) popup_grid_graphic2_window_t2_ParamLimits

0xe1bf,	// (0x00032a10) popup_grid_graphic2_window_t2

0x0001,

0xfd8e,	// (0x000345df) popup_grid_graphic2_window_t_ParamLimits

0xfd8e,	// (0x000345df) popup_grid_graphic2_window_t

0xd1b4,	// (0x00031a05) bg_button_pane_cp05_ParamLimits

0xe360,	// (0x00032bb1) cell_graphic2_control_pane_g1_ParamLimits

0xe44e,	// (0x00032c9f) cell_graphic2_catg_pane_ParamLimits

0xe44e,	// (0x00032c9f) cell_graphic2_catg_pane

0xa762,	// (0x0002efb3) bg_button_pane_cp12

0xe460,	// (0x00032cb1) cell_graphic2_catg_pane_g1

0x783c,	// (0x0002c08d) cell_tb_ext_pane_t1_ParamLimits

0x2486,	// (0x00026cd7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2486,	// (0x00026cd7) vkb2_top_cell_right_narrow_pane

0x249e,	// (0x00026cef) vkb2_top_cell_right_wide_pane_ParamLimits

0x249e,	// (0x00026cef) vkb2_top_cell_right_wide_pane

0x1c29,	// (0x0002647a) bg_vkb2_func_pane_ParamLimits

0x1c29,	// (0x0002647a) bg_vkb2_func_pane

0x250f,	// (0x00026d60) vkb2_top_cell_left_pane_g1_ParamLimits

0x1c29,	// (0x0002647a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1c29,	// (0x0002647a) bg_vkb2_fuc_pane_cp03

0x256d,	// (0x00026dbe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x38cf,	// (0x00028120) bg_vkb2_func_pane_g1

0x38d7,	// (0x00028128) bg_vkb2_func_pane_g2

0x38e7,	// (0x00028138) bg_vkb2_func_pane_g3

0x38df,	// (0x00028130) bg_vkb2_func_pane_g4

0x38ef,	// (0x00028140) bg_vkb2_func_pane_g5

0x38f7,	// (0x00028148) bg_vkb2_func_pane_g6

0x38ff,	// (0x00028150) bg_vkb2_func_pane_g7

0x3907,	// (0x00028158) bg_vkb2_func_pane_g8

0x38c7,	// (0x00028118) bg_vkb2_func_pane_g9

0x0008,

0xfde2,	// (0x00034633) bg_vkb2_func_pane_g

0x1c29,	// (0x0002647a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1c29,	// (0x0002647a) bg_vkb2_fuc_pane_cp01

0x250f,	// (0x00026d60) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x250f,	// (0x00026d60) vkb2_top_cell_right_wide_pane_g1

0x1c29,	// (0x0002647a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1c29,	// (0x0002647a) bg_vkb2_fuc_pane_cp02

0x26d5,	// (0x00026f26) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x26d5,	// (0x00026f26) vkb2_top_cell_right_narrow_pane_g1

0xd958,	// (0x000321a9) aid_touch_area_decrease_ParamLimits

0xd958,	// (0x000321a9) aid_touch_area_decrease

0xd992,	// (0x000321e3) aid_touch_area_increase_ParamLimits

0xd992,	// (0x000321e3) aid_touch_area_increase

0xd9ba,	// (0x0003220b) aid_touch_area_mute_ParamLimits

0xd9ba,	// (0x0003220b) aid_touch_area_mute

0xd9e2,	// (0x00032233) aid_touch_area_slider_ParamLimits

0xd9e2,	// (0x00032233) aid_touch_area_slider

0xda22,	// (0x00032273) popup_slider_window_g4_ParamLimits

0xda22,	// (0x00032273) popup_slider_window_g4

0xda4a,	// (0x0003229b) popup_slider_window_g5_ParamLimits

0xda4a,	// (0x0003229b) popup_slider_window_g5

0xda7e,	// (0x000322cf) popup_slider_window_g6_ParamLimits

0xda7e,	// (0x000322cf) popup_slider_window_g6

0x7611,	// (0x0002be62) popup_slider_window_t2_ParamLimits

0x7611,	// (0x0002be62) popup_slider_window_t2

0x0001,

0xfcdc,	// (0x0003452d) popup_slider_window_t_ParamLimits

0xfcdc,	// (0x0003452d) popup_slider_window_t

0xda9a,	// (0x000322eb) slider_pane_ParamLimits

0xda9a,	// (0x000322eb) slider_pane

0x8372,	// (0x0002cbc3) slider_pane_g1_ParamLimits

0x8372,	// (0x0002cbc3) slider_pane_g1

0x8386,	// (0x0002cbd7) slider_pane_g2_ParamLimits

0x8386,	// (0x0002cbd7) slider_pane_g2

0x839c,	// (0x0002cbed) slider_pane_g3_ParamLimits

0x839c,	// (0x0002cbed) slider_pane_g3

0x0003,

0xfdf5,	// (0x00034646) slider_pane_g_ParamLimits

0xfdf5,	// (0x00034646) slider_pane_g

0xb8f2,	// (0x00030143) popup_tb_float_extension_window_ParamLimits

0xb8f2,	// (0x00030143) popup_tb_float_extension_window

0x83c8,	// (0x0002cc19) aid_size_cell_tb_float_ext

0xa762,	// (0x0002efb3) bg_popup_sub_window_cp28

0x83d4,	// (0x0002cc25) grid_tb_float_ext_pane

0x83e0,	// (0x0002cc31) cell_tb_float_ext_pane_ParamLimits

0x83e0,	// (0x0002cc31) cell_tb_float_ext_pane

0x83fc,	// (0x0002cc4d) cell_tb_float_ext_pane_g1

0x8405,	// (0x0002cc56) grid_highlight_pane_cp12

0xc626,	// (0x00030e77) cell_last_hwr_side_pane_ParamLimits

0xc626,	// (0x00030e77) cell_last_hwr_side_pane

0x5f04,	// (0x0002a755) cell_last_hwr_side_pane_g1

0x840e,	// (0x0002cc5f) cell_last_hwr_side_pane_g2

0x0001,

0xfdfe,	// (0x0003464f) cell_last_hwr_side_pane_g

0xcde8,	// (0x00031639) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcde8,	// (0x00031639) vkb2_area_bottom_space_btn_pane

0x617f,	// (0x0002a9d0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7e94,	// (0x0002c6e5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x26b7,	// (0x00026f08) cell_vkb2_top_candi_pane_t1_ParamLimits

0x26f1,	// (0x00026f42) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x26f1,	// (0x00026f42) vkb2_area_bottom_space_btn_pane_g1

0x272b,	// (0x00026f7c) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x272b,	// (0x00026f7c) vkb2_area_bottom_space_btn_pane_g2

0x2761,	// (0x00026fb2) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2761,	// (0x00026fb2) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe03,	// (0x00034654) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe03,	// (0x00034654) vkb2_area_bottom_space_btn_pane_g

0x1ce0,	// (0x00026531) cel_fep_hwr_func_pane_ParamLimits

0x1ce0,	// (0x00026531) cel_fep_hwr_func_pane

0xc5fb,	// (0x00030e4c) cell_hwr_side_button_pane_ParamLimits

0xc5fb,	// (0x00030e4c) cell_hwr_side_button_pane

0x7872,	// (0x0002c0c3) aid_area_touch_clock_ParamLimits

0xd1b4,	// (0x00031a05) bg_uniindi_top_pane_ParamLimits

0x7886,	// (0x0002c0d7) uniindi_top_pane_g1_ParamLimits

0x789c,	// (0x0002c0ed) uniindi_top_pane_g2_ParamLimits

0x78a8,	// (0x0002c0f9) uniindi_top_pane_g3_ParamLimits

0x78b9,	// (0x0002c10a) uniindi_top_pane_g4_ParamLimits

0xfd14,	// (0x00034565) uniindi_top_pane_g_ParamLimits

0x78c6,	// (0x0002c117) uniindi_top_pane_t1_ParamLimits

0xd1b4,	// (0x00031a05) bg_vkb2_func_pane_cp01_ParamLimits

0xd1b4,	// (0x00031a05) bg_vkb2_func_pane_cp01

0x8417,	// (0x0002cc68) cel_fep_hwr_func_pane_g1_ParamLimits

0x8417,	// (0x0002cc68) cel_fep_hwr_func_pane_g1

0xd1b4,	// (0x00031a05) bg_vkb2_func_pane_cp02_ParamLimits

0xd1b4,	// (0x00031a05) bg_vkb2_func_pane_cp02

0x8417,	// (0x0002cc68) cell_hwr_side_button_pane_g1_ParamLimits

0x8417,	// (0x0002cc68) cell_hwr_side_button_pane_g1

0x374e,	// (0x00027f9f) status_pane_g4_ParamLimits

0x374e,	// (0x00027f9f) status_pane_g4

0x3768,	// (0x00027fb9) status_pane_t1

0x5cbe,	// (0x0002a50f) form2_midp_gauge_slider_cont_pane

0x5cc6,	// (0x0002a517) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc545,	// (0x00030d96) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc557,	// (0x00030da8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae0,	// (0x00034331) form2_midp_gauge_slider_pane_t_ParamLimits

0x5cfc,	// (0x0002a54d) form2_midp_slider_pane_ParamLimits

0x2098,	// (0x000268e9) aid_size_cell_func_vkb2_ParamLimits

0x2098,	// (0x000268e9) aid_size_cell_func_vkb2

0x83b4,	// (0x0002cc05) slider_pane_g4_ParamLimits

0x83b4,	// (0x0002cc05) slider_pane_g4

0xce51,	// (0x000316a2) form2_midp_gauge_slider_pane_t2_cp01

0xce5f,	// (0x000316b0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xce5f,	// (0x000316b0) form2_midp_gauge_slider_pane_t3_cp01

0x27d6,	// (0x00027027) form2_midp_slider_pane_cp01

0xa762,	// (0x0002efb3) navi_smil_pane

0x8450,	// (0x0002cca1) navi_smil_pane_g1

0x8458,	// (0x0002cca9) navi_smil_pane_t1

0x8425,	// (0x0002cc76) form2_midp_slider_pane_g1

0x842e,	// (0x0002cc7f) form2_midp_slider_pane_g2

0x8436,	// (0x0002cc87) form2_midp_slider_pane_g3

0x8425,	// (0x0002cc76) form2_midp_slider_pane_g4

0xe469,	// (0x00032cba) form2_midp_slider_pane_g5

0x0004,

0xfe0c,	// (0x0003465d) form2_midp_slider_pane_g

0x279b,	// (0x00026fec) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x279b,	// (0x00026fec) vkb2_area_bottom_space_btn_pane_g4

0xbad7,	// (0x00030328) lc0_navi_pane_ParamLimits

0xbad7,	// (0x00030328) lc0_navi_pane

0xbb47,	// (0x00030398) lc0_stat_indi_pane_ParamLimits

0xbb47,	// (0x00030398) lc0_stat_indi_pane

0xbb5c,	// (0x000303ad) ls0_title_pane_ParamLimits

0xbb5c,	// (0x000303ad) ls0_title_pane

0xd6c3,	// (0x00031f14) bg_popup_sub_pane_cp14_ParamLimits

0x7859,	// (0x0002c0aa) list_uniindi_pane_ParamLimits

0x7865,	// (0x0002c0b6) uniindi_top_pane_ParamLimits

0x7905,	// (0x0002c156) list_single_uniindi_pane_g1_ParamLimits

0x7918,	// (0x0002c169) list_single_uniindi_pane_t1_ParamLimits

0xce7c,	// (0x000316cd) lc0_stat_clock_pane_ParamLimits

0xce7c,	// (0x000316cd) lc0_stat_clock_pane

0xe472,	// (0x00032cc3) lc0_stat_indi_pane_g1_ParamLimits

0xe472,	// (0x00032cc3) lc0_stat_indi_pane_g1

0xe47f,	// (0x00032cd0) lc0_stat_indi_pane_g2_ParamLimits

0xe47f,	// (0x00032cd0) lc0_stat_indi_pane_g2

0x0001,

0xfe17,	// (0x00034668) lc0_stat_indi_pane_g_ParamLimits

0xfe17,	// (0x00034668) lc0_stat_indi_pane_g

0xce89,	// (0x000316da) lc0_uni_indicator_pane_ParamLimits

0xce89,	// (0x000316da) lc0_uni_indicator_pane

0xe48c,	// (0x00032cdd) ls0_title_pane_g1_ParamLimits

0xe48c,	// (0x00032cdd) ls0_title_pane_g1

0xe4a0,	// (0x00032cf1) ls0_title_pane_t1_ParamLimits

0xe4a0,	// (0x00032cf1) ls0_title_pane_t1

0xce96,	// (0x000316e7) lc0_uni_indicator_pane_g1_ParamLimits

0xce96,	// (0x000316e7) lc0_uni_indicator_pane_g1

0x84ca,	// (0x0002cd1b) lc0_stat_clock_pane_t1

0xa762,	// (0x0002efb3) main_ai5_pane

0x84e0,	// (0x0002cd31) ai5_sk_pane_ParamLimits

0x84e0,	// (0x0002cd31) ai5_sk_pane

0xe4d6,	// (0x00032d27) cell_ai5_widget_pane_ParamLimits

0xe4d6,	// (0x00032d27) cell_ai5_widget_pane

0xe555,	// (0x00032da6) aid_size_cell_widget_grid

0x859a,	// (0x0002cdeb) bg_ai5_widget_pane_ParamLimits

0x859a,	// (0x0002cdeb) bg_ai5_widget_pane

0xe58b,	// (0x00032ddc) cell_ai5_widget_pane_g2

0xe59f,	// (0x00032df0) cell_ai5_widget_pane_g3

0xe5b9,	// (0x00032e0a) cell_ai5_widget_pane_g4

0xe5c9,	// (0x00032e1a) cell_ai5_widget_pane_g5

0x8666,	// (0x0002ceb7) cell_ai5_widget_pane_g6

0xe5d9,	// (0x00032e2a) cell_ai5_widget_pane_g7

0xe5fd,	// (0x00032e4e) cell_ai5_widget_pane_t1_ParamLimits

0xe5fd,	// (0x00032e4e) cell_ai5_widget_pane_t1

0x86fc,	// (0x0002cf4d) cell_ai5_widget_pane_t2_ParamLimits

0x86fc,	// (0x0002cf4d) cell_ai5_widget_pane_t2

0x8714,	// (0x0002cf65) cell_ai5_widget_pane_t3_ParamLimits

0x8714,	// (0x0002cf65) cell_ai5_widget_pane_t3

0xe61a,	// (0x00032e6b) cell_ai5_widget_pane_t4_ParamLimits

0xe61a,	// (0x00032e6b) cell_ai5_widget_pane_t4

0xe640,	// (0x00032e91) cell_ai5_widget_pane_t5_ParamLimits

0xe640,	// (0x00032e91) cell_ai5_widget_pane_t5

0x8772,	// (0x0002cfc3) cell_ai5_widget_pane_t6_ParamLimits

0x8772,	// (0x0002cfc3) cell_ai5_widget_pane_t6

0x8784,	// (0x0002cfd5) cell_ai5_widget_pane_t7_ParamLimits

0x8784,	// (0x0002cfd5) cell_ai5_widget_pane_t7

0x87a3,	// (0x0002cff4) cell_ai5_widget_pane_t8_ParamLimits

0x87a3,	// (0x0002cff4) cell_ai5_widget_pane_t8

0x000b,

0xfe37,	// (0x00034688) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x00034688) cell_ai5_widget_pane_t

0xe6d2,	// (0x00032f23) grid_ai5_widget_pane

0xd6c3,	// (0x00031f14) highlight_cell_ai5_widget_pane_ParamLimits

0xd6c3,	// (0x00031f14) highlight_cell_ai5_widget_pane

0xe6e6,	// (0x00032f37) ai5_sk_left_pane

0xe6f0,	// (0x00032f41) ai5_sk_middle_pane

0xe6fa,	// (0x00032f4b) ai5_sk_right_pane

0x8859,	// (0x0002d0aa) bg_ai5_widget_pane_g1_ParamLimits

0x8859,	// (0x0002d0aa) bg_ai5_widget_pane_g1

0x8865,	// (0x0002d0b6) bg_ai5_widget_pane_g2_ParamLimits

0x8865,	// (0x0002d0b6) bg_ai5_widget_pane_g2

0x8871,	// (0x0002d0c2) bg_ai5_widget_pane_g3_ParamLimits

0x8871,	// (0x0002d0c2) bg_ai5_widget_pane_g3

0x887d,	// (0x0002d0ce) bg_ai5_widget_pane_g4_ParamLimits

0x887d,	// (0x0002d0ce) bg_ai5_widget_pane_g4

0x8889,	// (0x0002d0da) bg_ai5_widget_pane_g5_ParamLimits

0x8889,	// (0x0002d0da) bg_ai5_widget_pane_g5

0x8895,	// (0x0002d0e6) bg_ai5_widget_pane_g6_ParamLimits

0x8895,	// (0x0002d0e6) bg_ai5_widget_pane_g6

0x88a1,	// (0x0002d0f2) bg_ai5_widget_pane_g7_ParamLimits

0x88a1,	// (0x0002d0f2) bg_ai5_widget_pane_g7

0x88ad,	// (0x0002d0fe) bg_ai5_widget_pane_g8_ParamLimits

0x88ad,	// (0x0002d0fe) bg_ai5_widget_pane_g8

0x88b9,	// (0x0002d10a) bg_ai5_widget_pane_g9_ParamLimits

0x88b9,	// (0x0002d10a) bg_ai5_widget_pane_g9

0x0008,

0xfe50,	// (0x000346a1) bg_ai5_widget_pane_g_ParamLimits

0xfe50,	// (0x000346a1) bg_ai5_widget_pane_g

0xe730,	// (0x00032f81) cell_shortcut_ai5_widget_pane_ParamLimits

0xe730,	// (0x00032f81) cell_shortcut_ai5_widget_pane

0x3068,	// (0x000278b9) bg_cell_shortcut_ai5_widget_pane

0x8904,	// (0x0002d155) cell_grid_ai5_widget_pane_g1

0x3068,	// (0x000278b9) highlight_cell_shortcut_ai5_widget_pane

0x38d7,	// (0x00028128) ai5_sk_left_pane_g1

0x890d,	// (0x0002d15e) ai5_sk_left_pane_g2

0x8915,	// (0x0002d166) ai5_sk_left_pane_g3

0x891d,	// (0x0002d16e) ai5_sk_left_pane_g4

0x0003,

0xfe63,	// (0x000346b4) ai5_sk_left_pane_g

0x8925,	// (0x0002d176) ai5_sk_left_pane_t1

0x38cf,	// (0x00028120) ai5_sk_right_pane_g1

0x8933,	// (0x0002d184) ai5_sk_right_pane_g2

0x893b,	// (0x0002d18c) ai5_sk_right_pane_g3

0x8943,	// (0x0002d194) ai5_sk_right_pane_g4

0x0003,

0xfe6c,	// (0x000346bd) ai5_sk_right_pane_g

0x894b,	// (0x0002d19c) ai5_sk_right_pane_t1

0x38cf,	// (0x00028120) ai5_sk_middle_pane_g1

0x38d7,	// (0x00028128) ai5_sk_middle_pane_g2

0x38ef,	// (0x00028140) ai5_sk_middle_pane_g3

0x893b,	// (0x0002d18c) ai5_sk_middle_pane_g4

0x8915,	// (0x0002d166) ai5_sk_middle_pane_g5

0x8959,	// (0x0002d1aa) ai5_sk_middle_pane_g6

0xe743,	// (0x00032f94) ai5_sk_middle_pane_g7

0x0006,

0xfe75,	// (0x000346c6) ai5_sk_middle_pane_g

0xb9c3,	// (0x00030214) aid_touch_area_size_lc0_ParamLimits

0xb9c3,	// (0x00030214) aid_touch_area_size_lc0

0x1e7f,	// (0x000266d0) cell_hwr_candidate_pane_t1_ParamLimits

0x3415,	// (0x00027c66) aid_touch_navi_pane

0xbc65,	// (0x000304b6) status_dt_navi_pane_ParamLimits

0xbc65,	// (0x000304b6) status_dt_navi_pane

0xbc7d,	// (0x000304ce) status_dt_sta_pane_ParamLimits

0xbc7d,	// (0x000304ce) status_dt_sta_pane

0xe74b,	// (0x00032f9c) dt_sta_controll_pane

0xe758,	// (0x00032fa9) dt_sta_indi_pane

0xe765,	// (0x00032fb6) dt_sta_title_pane

0xd1b4,	// (0x00031a05) bg_dt_sta_indi_pane_ParamLimits

0xd1b4,	// (0x00031a05) bg_dt_sta_indi_pane

0xe777,	// (0x00032fc8) dt_sta_battery_pane

0xe77f,	// (0x00032fd0) dt_sta_indi_pane_g1

0xe788,	// (0x00032fd9) dt_sta_indi_pane_g2

0xe791,	// (0x00032fe2) dt_sta_indi_pane_g3

0x0002,

0xfe84,	// (0x000346d5) dt_sta_indi_pane_g

0xe79a,	// (0x00032feb) dt_sta_signal_pane

0xd6c3,	// (0x00031f14) bg_dt_sta_title_pane_ParamLimits

0xd6c3,	// (0x00031f14) bg_dt_sta_title_pane

0xe7a3,	// (0x00032ff4) dt_sta_title_pane_g1

0xe7ab,	// (0x00032ffc) dt_sta_title_pane_t1_ParamLimits

0xe7ab,	// (0x00032ffc) dt_sta_title_pane_t1

0xa762,	// (0x0002efb3) bg_dt_sta_control_pane

0xe7c0,	// (0x00033011) dt_sta_controll_pane_g1

0xe7c9,	// (0x0003301a) bg_dt_sta_title_pane_g1

0xe7d2,	// (0x00033023) bg_dt_sta_title_pane_g2

0xe7db,	// (0x0003302c) bg_dt_sta_title_pane_g3

0x0002,

0xfe8b,	// (0x000346dc) bg_dt_sta_title_pane_g

0x5f04,	// (0x0002a755) bg_dt_sta_indi_pane_g1

0x8a07,	// (0x0002d258) dt_sta_signal_pane_g1

0x8a0f,	// (0x0002d260) dt_sta_signal_pane_g2

0x0001,

0xfe92,	// (0x000346e3) dt_sta_signal_pane_g

0x8a17,	// (0x0002d268) dt_sta_battery_pane_g1

0x8a20,	// (0x0002d271) dt_sta_battery_pane_t1

0x5f04,	// (0x0002a755) bg_dt_sta_control_pane_g1

0x0ca3,	// (0x000254f4) fep_china_uni_eep_pane

0x0cab,	// (0x000254fc) fep_china_uni_entry_pane_ParamLimits

0x0cbb,	// (0x0002550c) popup_fep_china_uni_window_g1_ParamLimits

0x0ccb,	// (0x0002551c) popup_fep_china_uni_window_g2_ParamLimits

0x0ccb,	// (0x0002551c) popup_fep_china_uni_window_g2

0x0001,

0xf6f6,	// (0x00033f47) popup_fep_china_uni_window_g_ParamLimits

0xf6f6,	// (0x00033f47) popup_fep_china_uni_window_g

0x8a2f,	// (0x0002d280) fep_china_uni_eep_pane_g1

0x8a37,	// (0x0002d288) fep_china_uni_eep_pane_t1

0x8447,	// (0x0002cc98) aid_touch_area_size_smil_player

0x3567,	// (0x00027db8) lc0_clock_pane

0x375c,	// (0x00027fad) status_pane_g5_ParamLimits

0x375c,	// (0x00027fad) status_pane_g5

0xb418,	// (0x0002fc69) popup_keymap_window

0x3722,	// (0x00027f73) status_icon_pane

0xe59f,	// (0x00032df0) cell_ai5_widget_pane_g3_ParamLimits

0xe5b9,	// (0x00032e0a) cell_ai5_widget_pane_g4_ParamLimits

0xe5c9,	// (0x00032e1a) cell_ai5_widget_pane_g5_ParamLimits

0x867f,	// (0x0002ced0) cell_ai5_widget_pane_g8_ParamLimits

0x867f,	// (0x0002ced0) cell_ai5_widget_pane_g8

0x8693,	// (0x0002cee4) cell_ai5_widget_pane_g9_ParamLimits

0x8693,	// (0x0002cee4) cell_ai5_widget_pane_g9

0x86a7,	// (0x0002cef8) cell_ai5_widget_pane_g10_ParamLimits

0x86a7,	// (0x0002cef8) cell_ai5_widget_pane_g10

0x8a46,	// (0x0002d297) status_icon_pane_g1

0xa762,	// (0x0002efb3) bg_popup_sub_pane_cp13

0x8a4e,	// (0x0002d29f) popup_keymap_window_t1

0x3340,	// (0x00027b91) control_pane_g6_ParamLimits

0x3340,	// (0x00027b91) control_pane_g6

0x334d,	// (0x00027b9e) control_pane_g7_ParamLimits

0x334d,	// (0x00027b9e) control_pane_g7

0x335a,	// (0x00027bab) control_pane_g8_ParamLimits

0x335a,	// (0x00027bab) control_pane_g8

0xe74b,	// (0x00032f9c) dt_sta_controll_pane_ParamLimits

0xe758,	// (0x00032fa9) dt_sta_indi_pane_ParamLimits

0xe765,	// (0x00032fb6) dt_sta_title_pane_ParamLimits

0xd605,	// (0x00031e56) aid_size_touch_scroll_bar_cale

0xf4eb,	// (0x00033d3c) popup_discreet_window_ParamLimits

0xf4eb,	// (0x00033d3c) popup_discreet_window

0xa86e,	// (0x0002f0bf) popup_sk_window

0x3f2d,	// (0x0002877e) bg_popup_sub_pane_cp28_ParamLimits

0x3f2d,	// (0x0002877e) bg_popup_sub_pane_cp28

0x8a5c,	// (0x0002d2ad) popup_discreet_window_g1_ParamLimits

0x8a5c,	// (0x0002d2ad) popup_discreet_window_g1

0x8a7c,	// (0x0002d2cd) popup_discreet_window_t1_ParamLimits

0x8a7c,	// (0x0002d2cd) popup_discreet_window_t1

0x8a9a,	// (0x0002d2eb) popup_discreet_window_t2_ParamLimits

0x8a9a,	// (0x0002d2eb) popup_discreet_window_t2

0x0002,

0xfe97,	// (0x000346e8) popup_discreet_window_t_ParamLimits

0xfe97,	// (0x000346e8) popup_discreet_window_t

0x280c,	// (0x0002705d) popup_sk_window_g1

0x2816,	// (0x00027067) popup_sk_window_g2

0x0001,

0xfe9e,	// (0x000346ef) popup_sk_window_g

0x281e,	// (0x0002706f) popup_sk_window_t1

0x282c,	// (0x0002707d) popup_sk_window_t1_copy1

0xe58b,	// (0x00032ddc) cell_ai5_widget_pane_g2_ParamLimits

0xe660,	// (0x00032eb1) cell_ai5_widget_pane_t9_ParamLimits

0xe660,	// (0x00032eb1) cell_ai5_widget_pane_t9

0xa762,	// (0x0002efb3) main_fep_fshwr2_pane

0xceb5,	// (0x00031706) aid_fshwr2_btn_pane

0xcec9,	// (0x0003171a) aid_fshwr2_syb_pane

0xcedd,	// (0x0003172e) aid_fshwr2_txt_pane

0xceed,	// (0x0003173e) fshwr2_func_candi_pane

0xcf0f,	// (0x00031760) fshwr2_hwr_syb_pane

0xcf33,	// (0x00031784) fshwr2_icf_pane

0xa762,	// (0x0002efb3) fshwr2_icf_bg_pane

0x28d8,	// (0x00027129) fshwr2_icf_pane_t1_ParamLimits

0x28d8,	// (0x00027129) fshwr2_icf_pane_t1

0x0aa3,	// (0x000252f4) fshwr2_func_candi_pane_g1

0xe7e4,	// (0x00033035) fshwr2_func_candi_row_pane_ParamLimits

0xe7e4,	// (0x00033035) fshwr2_func_candi_row_pane

0xcf63,	// (0x000317b4) cell_fshwr2_syb_pane_ParamLimits

0xcf63,	// (0x000317b4) cell_fshwr2_syb_pane

0x8417,	// (0x0002cc68) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8417,	// (0x0002cc68) fshwr2_hwr_syb_pane_g1

0xa762,	// (0x0002efb3) bg_popup_call_pane_cp01

0xcf8b,	// (0x000317dc) fshwr2_func_candi_cell_pane_ParamLimits

0xcf8b,	// (0x000317dc) fshwr2_func_candi_cell_pane

0x3d0d,	// (0x0002855e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x3d0d,	// (0x0002855e) fshwr2_func_candi_cell_bg_pane

0xcfd6,	// (0x00031827) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xcfd6,	// (0x00031827) fshwr2_func_candi_cell_pane_g1

0xd00d,	// (0x0003185e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd00d,	// (0x0003185e) fshwr2_func_candi_cell_pane_t1

0xa762,	// (0x0002efb3) bg_button_pane_cp08

0x3397,	// (0x00027be8) cell_fshwr2_syb_bg_pane

0xd028,	// (0x00031879) cell_fshwr2_syb_bg_pane_g1

0xd03c,	// (0x0003188d) cell_fshwr2_syb_bg_pane_t1

0xd6c3,	// (0x00031f14) main_tmo_pane

0xc080,	// (0x000308d1) uni_indicator_pane_g1_ParamLimits

0xc096,	// (0x000308e7) uni_indicator_pane_g2_ParamLimits

0xc0ac,	// (0x000308fd) uni_indicator_pane_g3_ParamLimits

0xc0bf,	// (0x00030910) uni_indicator_pane_g4_ParamLimits

0xc0bf,	// (0x00030910) uni_indicator_pane_g4

0x4aa4,	// (0x000292f5) uni_indicator_pane_g5_ParamLimits

0x4aa4,	// (0x000292f5) uni_indicator_pane_g5

0x4aa4,	// (0x000292f5) uni_indicator_pane_g6_ParamLimits

0x4aa4,	// (0x000292f5) uni_indicator_pane_g6

0xf8f5,	// (0x00034146) uni_indicator_pane_g_ParamLimits

0xd928,	// (0x00032179) popup_tmo_note_window_ParamLimits

0xd928,	// (0x00032179) popup_tmo_note_window

0xd6c3,	// (0x00031f14) fshwr2_bg_pane

0xcffe,	// (0x0003184f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xcffe,	// (0x0003184f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea3,	// (0x000346f4) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea3,	// (0x000346f4) fshwr2_func_candi_cell_pane_g

0x5f04,	// (0x0002a755) bg_popup_window_pane_cp01

0x29ca,	// (0x0002721b) bg_popup_window_pane_g1_cp01

0x8b0f,	// (0x0002d360) bg_popup_window_pane_cp22_ParamLimits

0x8b0f,	// (0x0002d360) bg_popup_window_pane_cp22

0x8b1d,	// (0x0002d36e) listscroll_tmo_link_pane_ParamLimits

0x8b1d,	// (0x0002d36e) listscroll_tmo_link_pane

0x8b5d,	// (0x0002d3ae) popup_tmo_note_window_g1_ParamLimits

0x8b5d,	// (0x0002d3ae) popup_tmo_note_window_g1

0x8b6a,	// (0x0002d3bb) tmo_note_info_pane_ParamLimits

0x8b6a,	// (0x0002d3bb) tmo_note_info_pane

0xe80b,	// (0x0003305c) list_tmo_note_info_pane_g1_ParamLimits

0xe80b,	// (0x0003305c) list_tmo_note_info_pane_g1

0x8b9b,	// (0x0002d3ec) list_tmo_note_info_pane_g2_ParamLimits

0x8b9b,	// (0x0002d3ec) list_tmo_note_info_pane_g2

0x0001,

0xfea8,	// (0x000346f9) list_tmo_note_info_pane_g_ParamLimits

0xfea8,	// (0x000346f9) list_tmo_note_info_pane_g

0x8bb7,	// (0x0002d408) list_tmo_note_info_text_pane_ParamLimits

0x8bb7,	// (0x0002d408) list_tmo_note_info_text_pane

0x8c3c,	// (0x0002d48d) list_tmo_link_pane

0x8c49,	// (0x0002d49a) scroll_pane_cp20

0x8c56,	// (0x0002d4a7) list_single_tmo_link_pane_ParamLimits

0x8c56,	// (0x0002d4a7) list_single_tmo_link_pane

0x8c66,	// (0x0002d4b7) list_single_tmo_link_pane_t1

0x8c74,	// (0x0002d4c5) list_tmo_note_info_text_pane_t1_ParamLimits

0x8c74,	// (0x0002d4c5) list_tmo_note_info_text_pane_t1

0xada2,	// (0x0002f5f3) aid_size_touch_scroll_bar_cp01_ParamLimits

0xada2,	// (0x0002f5f3) aid_size_touch_scroll_bar_cp01

0xa33e,	// (0x0002eb8f) aid_size_touch_slider_marker

0xa85e,	// (0x0002f0af) popup_settings_window_ParamLimits

0xa85e,	// (0x0002f0af) popup_settings_window

0xec46,	// (0x00033497) popup_candi_list_indi_window

0x3415,	// (0x00027c66) aid_touch_navi_pane_ParamLimits

0x1fef,	// (0x00026840) rs_clock_indi_pane

0x1ff8,	// (0x00026849) sctrl_sk_bottom_pane_ParamLimits

0x2009,	// (0x0002685a) sctrl_sk_top_pane_ParamLimits

0x20ea,	// (0x0002693b) popup_fep_tooltip_window

0xe555,	// (0x00032da6) aid_size_cell_widget_grid_ParamLimits

0xe574,	// (0x00032dc5) cell_ai5_widget_pane_g1_ParamLimits

0xe574,	// (0x00032dc5) cell_ai5_widget_pane_g1

0x8666,	// (0x0002ceb7) cell_ai5_widget_pane_g6_ParamLimits

0xe5d9,	// (0x00032e2a) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe1c,	// (0x0003466d) cell_ai5_widget_pane_g_ParamLimits

0xfe1c,	// (0x0003466d) cell_ai5_widget_pane_g

0xe68f,	// (0x00032ee0) cell_ai5_widget_pane_t10_ParamLimits

0xe68f,	// (0x00032ee0) cell_ai5_widget_pane_t10

0xe6d2,	// (0x00032f23) grid_ai5_widget_pane_ParamLimits

0xe704,	// (0x00032f55) cell_contacts_ai5_widget_pane_ParamLimits

0xe704,	// (0x00032f55) cell_contacts_ai5_widget_pane

0x8aaf,	// (0x0002d300) popup_discreet_window_t3_ParamLimits

0x8aaf,	// (0x0002d300) popup_discreet_window_t3

0xcf4f,	// (0x000317a0) popup_fshwr2_char_preview_window_ParamLimits

0xcf4f,	// (0x000317a0) popup_fshwr2_char_preview_window

0xe822,	// (0x00033073) tmo_note_info_pane_t1

0xe837,	// (0x00033088) tmo_note_info_pane_t2

0xe850,	// (0x000330a1) tmo_note_info_pane_t3

0x8c18,	// (0x0002d469) tmo_note_info_pane_t4

0x8c2a,	// (0x0002d47b) tmo_note_info_pane_t5

0x0004,

0xfead,	// (0x000346fe) tmo_note_info_pane_t

0x8c3c,	// (0x0002d48d) list_tmo_link_pane_ParamLimits

0x8c49,	// (0x0002d49a) scroll_pane_cp20_ParamLimits

0xa762,	// (0x0002efb3) bg_popup_fep_char_preview_window_cp01

0x8c8d,	// (0x0002d4de) popup_fshwr2_char_preview_window_t1

0x8c9b,	// (0x0002d4ec) popup_candi_list_indi_window_g1

0x8ca4,	// (0x0002d4f5) bg_cell_contacts_ai5_widget_pane

0xe865,	// (0x000330b6) cell_contacts_ai5_widget_pane_g1

0x8cc5,	// (0x0002d516) cell_contacts_ai5_widget_pane_g2

0x8cd1,	// (0x0002d522) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb8,	// (0x00034709) cell_contacts_ai5_widget_pane_g

0x8cdd,	// (0x0002d52e) cell_contacts_ai5_widget_pane_t1

0xd6c3,	// (0x00031f14) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8d54,	// (0x0002d5a5) settings_container_pane

0x3068,	// (0x000278b9) listscroll_set_pane_copy1

0x563c,	// (0x00029e8d) scroll_pane_cp121_copy1

0x8d60,	// (0x0002d5b1) set_content_pane_copy1

0x8d68,	// (0x0002d5b9) aid_height_set_list_copy1_ParamLimits

0x8d68,	// (0x0002d5b9) aid_height_set_list_copy1

0x4c94,	// (0x000294e5) aid_size_parent_copy1_ParamLimits

0x4c94,	// (0x000294e5) aid_size_parent_copy1

0x8d74,	// (0x0002d5c5) button_value_adjust_pane_cp6_copy1_ParamLimits

0x8d74,	// (0x0002d5c5) button_value_adjust_pane_cp6_copy1

0x3397,	// (0x00027be8) list_highlight_pane_cp2_copy1_ParamLimits

0x3397,	// (0x00027be8) list_highlight_pane_cp2_copy1

0x8d88,	// (0x0002d5d9) list_set_pane_copy1_ParamLimits

0x8d88,	// (0x0002d5d9) list_set_pane_copy1

0x8cef,	// (0x0002d540) main_pane_set_t1_copy1_ParamLimits

0x8cef,	// (0x0002d540) main_pane_set_t1_copy1

0x8d29,	// (0x0002d57a) main_pane_set_t2_copy1_ParamLimits

0x8d29,	// (0x0002d57a) main_pane_set_t2_copy1

0x8e49,	// (0x0002d69a) main_pane_set_t3_copy1

0x8e57,	// (0x0002d6a8) main_pane_set_t4_copy1

0x8d48,	// (0x0002d599) set_content_pane_g1_copy1_ParamLimits

0x8d48,	// (0x0002d599) set_content_pane_g1_copy1

0x8e65,	// (0x0002d6b6) setting_code_pane_copy1

0x8e6d,	// (0x0002d6be) setting_slider_graphic_pane_copy1

0x8e6d,	// (0x0002d6be) setting_slider_pane_copy1

0x8e75,	// (0x0002d6c6) setting_text_pane_copy1

0x8e75,	// (0x0002d6c6) setting_volume_pane_copy1

0x8e65,	// (0x0002d6b6) settings_code_pane_cp2_copy1

0x8e7d,	// (0x0002d6ce) settings_code_pane_cp_copy1_ParamLimits

0x8e7d,	// (0x0002d6ce) settings_code_pane_cp_copy1

0x29d3,	// (0x00027224) volume_set_pane_copy1

0x8e91,	// (0x0002d6e2) volume_set_pane_g10_copy1

0x8e9d,	// (0x0002d6ee) volume_set_pane_g1_copy1

0x8ea7,	// (0x0002d6f8) volume_set_pane_g2_copy1

0x8eb1,	// (0x0002d702) volume_set_pane_g3_copy1

0x8ebb,	// (0x0002d70c) volume_set_pane_g4_copy1

0x8ec5,	// (0x0002d716) volume_set_pane_g5_copy1

0x8ecf,	// (0x0002d720) volume_set_pane_g6_copy1

0x8ed9,	// (0x0002d72a) volume_set_pane_g7_copy1

0x8ee3,	// (0x0002d734) volume_set_pane_g8_copy1

0x8eed,	// (0x0002d73e) volume_set_pane_g9_copy1

0xaaa7,	// (0x0002f2f8) bg_set_opt_pane_cp_copy1_ParamLimits

0xaaa7,	// (0x0002f2f8) bg_set_opt_pane_cp_copy1

0x29df,	// (0x00027230) setting_slider_pane_t1_copy1_ParamLimits

0x29df,	// (0x00027230) setting_slider_pane_t1_copy1

0x29fe,	// (0x0002724f) setting_slider_pane_t2_copy1_ParamLimits

0x29fe,	// (0x0002724f) setting_slider_pane_t2_copy1

0x2a18,	// (0x00027269) setting_slider_pane_t3_copy1_ParamLimits

0x2a18,	// (0x00027269) setting_slider_pane_t3_copy1

0x2a30,	// (0x00027281) slider_set_pane_copy1_ParamLimits

0x2a30,	// (0x00027281) slider_set_pane_copy1

0xd71b,	// (0x00031f6c) set_opt_bg_pane_g1_copy2

0xd723,	// (0x00031f74) set_opt_bg_pane_g2_copy2

0x8ef9,	// (0x0002d74a) set_opt_bg_pane_g3_copy2

0xd733,	// (0x00031f84) set_opt_bg_pane_g4_copy2

0xd73b,	// (0x00031f8c) set_opt_bg_pane_g5_copy2

0xd743,	// (0x00031f94) set_opt_bg_pane_g6_copy2

0x8f03,	// (0x0002d754) set_opt_bg_pane_g7_copy2

0x8f0d,	// (0x0002d75e) set_opt_bg_pane_g8_copy2

0x8f17,	// (0x0002d768) set_opt_bg_pane_g9_copy2

0x2a46,	// (0x00027297) aid_size_touch_slider_mark_copy1_ParamLimits

0x2a46,	// (0x00027297) aid_size_touch_slider_mark_copy1

0x8f21,	// (0x0002d772) slider_set_pane_g1_copy1

0x2a5a,	// (0x000272ab) slider_set_pane_g2_copy1

0x1ab7,	// (0x00026308) slider_set_pane_g3_copy1_ParamLimits

0x1ab7,	// (0x00026308) slider_set_pane_g3_copy1

0x1acb,	// (0x0002631c) slider_set_pane_g4_copy1_ParamLimits

0x1acb,	// (0x0002631c) slider_set_pane_g4_copy1

0x1ae3,	// (0x00026334) slider_set_pane_g5_copy1_ParamLimits

0x1ae3,	// (0x00026334) slider_set_pane_g5_copy1

0x1ab7,	// (0x00026308) slider_set_pane_g6_copy1_ParamLimits

0x1ab7,	// (0x00026308) slider_set_pane_g6_copy1

0x2a62,	// (0x000272b3) slider_set_pane_g7_copy1_ParamLimits

0x2a62,	// (0x000272b3) slider_set_pane_g7_copy1

0xa81a,	// (0x0002f06b) bg_set_opt_pane_cp2_copy1

0x8f2a,	// (0x0002d77b) setting_slider_graphic_pane_g1_copy1

0x8f33,	// (0x0002d784) setting_slider_graphic_pane_t1_copy1

0x8f43,	// (0x0002d794) setting_slider_graphic_pane_t2_copy1

0x8f53,	// (0x0002d7a4) slider_set_pane_cp_copy1

0x8f63,	// (0x0002d7b4) input_focus_pane_cp1_copy1

0x8f6c,	// (0x0002d7bd) list_set_text_pane_copy1

0x8f74,	// (0x0002d7c5) setting_text_pane_g1_copy1

0xf4b9,	// (0x00033d0a) set_text_pane_t1_copy1

0x8f63,	// (0x0002d7b4) input_focus_pane_cp2_copy1

0x8f74,	// (0x0002d7c5) setting_code_pane_g1_copy1

0x8f7d,	// (0x0002d7ce) setting_code_pane_t1_copy1

0x5441,	// (0x00029c92) list_set_graphic_pane_copy1

0xa81a,	// (0x0002f06b) bg_set_opt_pane_cp4_copy1

0x2d53,	// (0x000275a4) list_set_graphic_pane_g1_copy1_ParamLimits

0x2d53,	// (0x000275a4) list_set_graphic_pane_g1_copy1

0x8f8b,	// (0x0002d7dc) list_set_graphic_pane_g2_copy1

0x2d6b,	// (0x000275bc) list_set_graphic_pane_t1_copy1_ParamLimits

0x2d6b,	// (0x000275bc) list_set_graphic_pane_t1_copy1

0x5f04,	// (0x0002a755) rs_clock_indi_pane_g1

0x8f93,	// (0x0002d7e4) rs_clock_indi_pane_t1

0x8fa1,	// (0x0002d7f2) rs_indi_pane

0x8fa9,	// (0x0002d7fa) rs_indi_pane_g1

0x8fb2,	// (0x0002d803) rs_indi_pane_g2

0x8c9b,	// (0x0002d4ec) rs_indi_pane_g3

0x0002,

0xfebf,	// (0x00034710) rs_indi_pane_g

0x3068,	// (0x000278b9) bg_popup_preview_window_pane_cp03

0x8fbb,	// (0x0002d80c) popup_fep_tooltip_window_t1

0x6bd1,	// (0x0002b422) popup_note2_window_g2_ParamLimits

0x6bd1,	// (0x0002b422) popup_note2_window_g2

0x0001,

0xfc4c,	// (0x0003449d) popup_note2_window_g_ParamLimits

0xfc4c,	// (0x0003449d) popup_note2_window_g

0x70d9,	// (0x0002b92a) bg_popup_sub_pane_cp11_ParamLimits

0x70e6,	// (0x0002b937) cell_ai3_links_pane_g1_ParamLimits

0x70fd,	// (0x0002b94e) cell_ai3_links_pane_t1

0xf4b9,	// (0x00033d0a) set_text_pane_t1_copy1_ParamLimits

0x2f66,	// (0x000277b7) cell_graphic_popup_pane_cp2_ParamLimits

0x2f66,	// (0x000277b7) cell_graphic_popup_pane_cp2

0x8fc9,	// (0x0002d81a) cell_graphic_popup_pane_g1_cp2

0xd418,	// (0x00031c69) cell_graphic_popup_pane_g2_cp2

0x8fd1,	// (0x0002d822) cell_graphic_popup_pane_g3_cp2

0x8fd9,	// (0x0002d82a) cell_graphic_popup_pane_t2_cp2

0xd429,	// (0x00031c7a) grid_highlight_pane_cp3_cp2

0x078f,	// (0x00024fe0) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xd6c3,	// (0x00031f14) main_tmo_pane_ParamLimits

0xd91c,	// (0x0003216d) popup_tmo_big_image_note_window

0xe563,	// (0x00032db4) cell_ai5_widget_list_pane

0xe56b,	// (0x00032dbc) cell_ai5_widget_lrg_icon_pane

0xe822,	// (0x00033073) tmo_note_info_pane_t1_ParamLimits

0xe837,	// (0x00033088) tmo_note_info_pane_t2_ParamLimits

0xe850,	// (0x000330a1) tmo_note_info_pane_t3_ParamLimits

0x8c18,	// (0x0002d469) tmo_note_info_pane_t4_ParamLimits

0x8c2a,	// (0x0002d47b) tmo_note_info_pane_t5_ParamLimits

0xfead,	// (0x000346fe) tmo_note_info_pane_t_ParamLimits

0x8d54,	// (0x0002d5a5) settings_container_pane_ParamLimits

0x8f5b,	// (0x0002d7ac) indicator_popup_pane_cp5

0x8f5b,	// (0x0002d7ac) indicator_popup_pane_cp6

0x5441,	// (0x00029c92) list_set_graphic_pane_copy1_ParamLimits

0xa762,	// (0x0002efb3) bg_popup_window_pane_cp23

0x8fe7,	// (0x0002d838) popup_tmo_big_image_note_window_g1

0x8ff3,	// (0x0002d844) popup_tmo_big_image_note_window_t1

0x9003,	// (0x0002d854) popup_tmo_big_image_note_window_t2

0x9013,	// (0x0002d864) popup_tmo_big_image_note_window_t3

0x0002,

0xfec6,	// (0x00034717) popup_tmo_big_image_note_window_t

0x5f04,	// (0x0002a755) cell_ai5_widget_lrg_icon_pane_g1

0xe87a,	// (0x000330cb) cell_ai5_widget_lrg_icon_pane_t1

0xe888,	// (0x000330d9) cell_ai5_widget_list_row_pane_ParamLimits

0xe888,	// (0x000330d9) cell_ai5_widget_list_row_pane

0xe8a0,	// (0x000330f1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe8a0,	// (0x000330f1) cell_ai5_widget_list_row_pane_g1

0xe8ad,	// (0x000330fe) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe8ad,	// (0x000330fe) cell_ai5_widget_list_row_pane_t1

0xe8d8,	// (0x00033129) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe8d8,	// (0x00033129) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecd,	// (0x0003471e) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecd,	// (0x0003471e) cell_ai5_widget_list_row_pane_t

0xa762,	// (0x0002efb3) main_fep_vtchi_ss_pane

0x90d1,	// (0x0002d922) popup_fep_char_pre_window

0x90d9,	// (0x0002d92a) popup_fep_ituss_window

0xe90f,	// (0x00033160) popup_fep_vkbss_window

0x3397,	// (0x00027be8) grid_vkbss_keypad_pane_ParamLimits

0x3397,	// (0x00027be8) grid_vkbss_keypad_pane

0x9153,	// (0x0002d9a4) ituss_keypad_pane

0x2aa3,	// (0x000272f4) aid_vkbss_key_offset_ParamLimits

0x2aa3,	// (0x000272f4) aid_vkbss_key_offset

0xd066,	// (0x000318b7) cell_vkbss_key_pane_ParamLimits

0xd066,	// (0x000318b7) cell_vkbss_key_pane

0x915f,	// (0x0002d9b0) bg_cell_vkbss_key_g1_ParamLimits

0x915f,	// (0x0002d9b0) bg_cell_vkbss_key_g1

0xe91e,	// (0x0003316f) cell_vkbss_key_3p_pane_ParamLimits

0xe91e,	// (0x0003316f) cell_vkbss_key_3p_pane

0xe954,	// (0x000331a5) cell_vkbss_key_g1_ParamLimits

0xe954,	// (0x000331a5) cell_vkbss_key_g1

0xe98a,	// (0x000331db) cell_vkbss_key_t1_ParamLimits

0xe98a,	// (0x000331db) cell_vkbss_key_t1

0x2b11,	// (0x00027362) cell_ituss_key_pane_ParamLimits

0x2b11,	// (0x00027362) cell_ituss_key_pane

0x9233,	// (0x0002da84) bg_cell_ituss_key_g1_ParamLimits

0x9233,	// (0x0002da84) bg_cell_ituss_key_g1

0x923f,	// (0x0002da90) cell_ituss_key_pane_g1_ParamLimits

0x923f,	// (0x0002da90) cell_ituss_key_pane_g1

0x2b22,	// (0x00027373) cell_ituss_key_pane_g2_ParamLimits

0x2b22,	// (0x00027373) cell_ituss_key_pane_g2

0x0005,

0xfed4,	// (0x00034725) cell_ituss_key_pane_g_ParamLimits

0xfed4,	// (0x00034725) cell_ituss_key_pane_g

0x2ba6,	// (0x000273f7) cell_ituss_key_t1_ParamLimits

0x2ba6,	// (0x000273f7) cell_ituss_key_t1

0x2be0,	// (0x00027431) cell_ituss_key_t2_ParamLimits

0x2be0,	// (0x00027431) cell_ituss_key_t2

0x2c12,	// (0x00027463) cell_ituss_key_t3_ParamLimits

0x2c12,	// (0x00027463) cell_ituss_key_t3

0x2c43,	// (0x00027494) cell_ituss_key_t4_ParamLimits

0x2c43,	// (0x00027494) cell_ituss_key_t4

0x0005,

0xfee1,	// (0x00034732) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x00034732) cell_ituss_key_t

0xe9e6,	// (0x00033237) cell_vkbss_key_3p_pane_g1

0xe9ee,	// (0x0003323f) cell_vkbss_key_3p_pane_g2

0xe9f6,	// (0x00033247) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0003473f) cell_vkbss_key_3p_pane_g

0x3068,	// (0x000278b9) bg_popup_fep_char_preview_window_cp02

0x927d,	// (0x0002dace) popup_fep_char_pre_window_t1

0xe542,	// (0x00032d93) main_ai5_sk_pane

0x8ca4,	// (0x0002d4f5) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe865,	// (0x000330b6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8cc5,	// (0x0002d516) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8cd1,	// (0x0002d522) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb8,	// (0x00034709) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8cdd,	// (0x0002d52e) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xd6c3,	// (0x00031f14) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe9fe,	// (0x0003324f) main_ai5_sk_pane_g1

0x3d65,	// (0x000285b6) popup_query_code_window_g1

0xe900,	// (0x00033151) popup_fep_vkb_icf_pane

0x9127,	// (0x0002d978) popup_fep_vtchi_icf_pane

0x9294,	// (0x0002dae5) bg_icf_pane

0x9294,	// (0x0002dae5) list_vkb_icf_pane

0x92a0,	// (0x0002daf1) bg_icf_pane_cp01

0x92b3,	// (0x0002db04) vtchi_icf_list_pane

0xea53,	// (0x000332a4) list_vkb_icf_pane_t1_ParamLimits

0xea53,	// (0x000332a4) list_vkb_icf_pane_t1

0x932c,	// (0x0002db7d) vtchi_icf_list_pane_t1_ParamLimits

0x932c,	// (0x0002db7d) vtchi_icf_list_pane_t1

0x90d9,	// (0x0002d92a) popup_fep_ituss_window_ParamLimits

0x9127,	// (0x0002d978) popup_fep_vtchi_icf_pane_ParamLimits

0x9153,	// (0x0002d9a4) ituss_keypad_pane_ParamLimits

0x2a99,	// (0x000272ea) ituss_sks_pane

0x9294,	// (0x0002dae5) bg_icf_pane_ParamLimits

0x90a9,	// (0x0002d8fa) icf_edit_indi_pane_ParamLimits

0x90a9,	// (0x0002d8fa) icf_edit_indi_pane

0x9294,	// (0x0002dae5) list_vkb_icf_pane_ParamLimits

0x92a0,	// (0x0002daf1) bg_icf_pane_cp01_ParamLimits

0x90c4,	// (0x0002d915) icf_edit_indi_pane_cp01_ParamLimits

0x90c4,	// (0x0002d915) icf_edit_indi_pane_cp01

0x92b3,	// (0x0002db04) vtchi_query_pane

0x8417,	// (0x0002cc68) icf_edit_indi_pane_g1_ParamLimits

0x8417,	// (0x0002cc68) icf_edit_indi_pane_g1

0xea6a,	// (0x000332bb) icf_edit_indi_pane_g2_ParamLimits

0xea6a,	// (0x000332bb) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0003476a) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0003476a) icf_edit_indi_pane_g

0xea7e,	// (0x000332cf) icf_edit_indi_pane_t1

0x9345,	// (0x0002db96) bg_input_focus_pane_cp042

0xd5fc,	// (0x00031e4d) vtchi_button_pane

0x934e,	// (0x0002db9f) vtchi_query_pane_t1

0x935c,	// (0x0002dbad) vtchi_query_pane_t2

0x936a,	// (0x0002dbbb) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00034759) vtchi_query_pane_t

0xa762,	// (0x0002efb3) bg_button_pane_cp13

0x9378,	// (0x0002dbc9) vtchi_button_pane_g1

0x2cc4,	// (0x00027515) ituss_sks_pane_g1

0x2ccf,	// (0x00027520) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00034760) ituss_sks_pane_g

0x9380,	// (0x0002dbd1) ituss_sks_pane_t1

0x938e,	// (0x0002dbdf) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00034765) ituss_sks_pane_t

0x59df,	// (0x0002a230) indicator_nsta_pane_cp_g1

0x59e8,	// (0x0002a239) indicator_nsta_pane_cp_g2

0x59f0,	// (0x0002a241) indicator_nsta_pane_cp_g3

0x59f8,	// (0x0002a249) indicator_nsta_pane_cp_g4

0x59e8,	// (0x0002a239) indicator_nsta_pane_cp_g5

0x59f0,	// (0x0002a241) indicator_nsta_pane_cp_g6

0x0005,

0xfa96,	// (0x000342e7) indicator_nsta_pane_cp_g

0xe342,	// (0x00032b93) cell_graphic2_pane_t2_ParamLimits

0xe342,	// (0x00032b93) cell_graphic2_pane_t2

0x0001,

0xfda3,	// (0x000345f4) cell_graphic2_pane_t_ParamLimits

0xfda3,	// (0x000345f4) cell_graphic2_pane_t

0xe37a,	// (0x00032bcb) cell_graphic2_control_pane_t1

0xb01c,	// (0x0002f86d) signal_pane_g3_ParamLimits

0xb01c,	// (0x0002f86d) signal_pane_g3

0xb030,	// (0x0002f881) signal_pane_g4_ParamLimits

0xb030,	// (0x0002f881) signal_pane_g4

0xe8ea,	// (0x0003313b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe8ea,	// (0x0003313b) cell_ai5_widget_list_row_pane_t3

0x9253,	// (0x0002daa4) cell_ituss_key_pane_t1_ParamLimits

0x9253,	// (0x0002daa4) cell_ituss_key_pane_t1

0x39cc,	// (0x0002821d) form_field_data_wide_pane_vc_t2_ParamLimits

0x39cc,	// (0x0002821d) form_field_data_wide_pane_vc_t2

0x39e0,	// (0x00028231) form_field_data_wide_pane_vc_t3_ParamLimits

0x39e0,	// (0x00028231) form_field_data_wide_pane_vc_t3

0x0002,

0xf7dd,	// (0x0003402e) form_field_data_wide_pane_vc_t_ParamLimits

0xf7dd,	// (0x0003402e) form_field_data_wide_pane_vc_t

0x567c,	// (0x00029ecd) form_field_slider_wide_pane_vc_t3_ParamLimits

0x567c,	// (0x00029ecd) form_field_slider_wide_pane_vc_t3

0x5752,	// (0x00029fa3) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5752,	// (0x00029fa3) form_field_popup_wide_pane_vc_t2

0x5769,	// (0x00029fba) form_field_popup_wide_pane_vc_t3_ParamLimits

0x5769,	// (0x00029fba) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa85,	// (0x000342d6) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa85,	// (0x000342d6) form_field_popup_wide_pane_vc_t

0xceb5,	// (0x00031706) aid_fshwr2_btn_pane_ParamLimits

0xcec9,	// (0x0003171a) aid_fshwr2_syb_pane_ParamLimits

0xcedd,	// (0x0003172e) aid_fshwr2_txt_pane_ParamLimits

0xd6c3,	// (0x00031f14) fshwr2_bg_pane_ParamLimits

0xceed,	// (0x0003173e) fshwr2_func_candi_pane_ParamLimits

0xcf0f,	// (0x00031760) fshwr2_hwr_syb_pane_ParamLimits

0xcf33,	// (0x00031784) fshwr2_icf_pane_ParamLimits

0xf072,	// (0x000338c3) list_double_graphic_pane_vc_g4_ParamLimits

0xf072,	// (0x000338c3) list_double_graphic_pane_vc_g4

0x2b42,	// (0x00027393) cell_ituss_key_pane_g3_ParamLimits

0x2b42,	// (0x00027393) cell_ituss_key_pane_g3

0x2c74,	// (0x000274c5) cell_ituss_key_t5_ParamLimits

0x2c74,	// (0x000274c5) cell_ituss_key_t5

0xe90f,	// (0x00033160) popup_fep_vkbss_window_ParamLimits

0xe54c,	// (0x00032d9d) aid_cell_ai5_quarter

0xea7e,	// (0x000332cf) icf_edit_indi_pane_t1_ParamLimits

0xd25c,	// (0x00031aad) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xd25c,	// (0x00031aad) aid_tch_indicator_popup_pane_cp2

0xd26f,	// (0x00031ac0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xd26f,	// (0x00031ac0) aid_tch_query_popup_data_pane_cp2

0x3d0d,	// (0x0002855e) aid_tch_query_popup_pane_ParamLimits

0x3d0d,	// (0x0002855e) aid_tch_query_popup_pane

0x3d0d,	// (0x0002855e) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x3d0d,	// (0x0002855e) aid_tch_query_popup_data_pane_cp1

0x3397,	// (0x00027be8) cell_fshwr2_syb_bg_pane_ParamLimits

0xd028,	// (0x00031879) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xd03c,	// (0x0003188d) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe900,	// (0x00033151) popup_fep_vkb_icf_pane_ParamLimits

0xce49,	// (0x0003169a) bg_popup_fep_char_preview_window_g10

0xe5e5,	// (0x00032e36) cell_ai5_widget_pane_g11_ParamLimits

0xe5e5,	// (0x00032e36) cell_ai5_widget_pane_g11

0x86c7,	// (0x0002cf18) cell_ai5_widget_pane_g12_ParamLimits

0x86c7,	// (0x0002cf18) cell_ai5_widget_pane_g12

0xe5f1,	// (0x00032e42) cell_ai5_widget_pane_g13_ParamLimits

0xe5f1,	// (0x00032e42) cell_ai5_widget_pane_g13

0xe6ae,	// (0x00032eff) cell_ai5_widget_pane_t11_ParamLimits

0xe6ae,	// (0x00032eff) cell_ai5_widget_pane_t11

0xe6c0,	// (0x00032f11) cell_ai5_widget_pane_t12_ParamLimits

0xe6c0,	// (0x00032f11) cell_ai5_widget_pane_t12

0x2b4e,	// (0x0002739f) cell_ituss_key_pane_g4_ParamLimits

0x2b4e,	// (0x0002739f) cell_ituss_key_pane_g4

0x2b6a,	// (0x000273bb) cell_ituss_key_pane_g5_ParamLimits

0x2b6a,	// (0x000273bb) cell_ituss_key_pane_g5

0x2b86,	// (0x000273d7) cell_ituss_key_pane_g6_ParamLimits

0x2b86,	// (0x000273d7) cell_ituss_key_pane_g6

0x38c7,	// (0x00028118) bg_icf_pane_g1

0xea07,	// (0x00033258) bg_icf_pane_g2

0xea11,	// (0x00033262) bg_icf_pane_g3

0xea19,	// (0x0003326a) bg_icf_pane_g4

0xea23,	// (0x00033274) bg_icf_pane_g5

0xea2d,	// (0x0003327e) bg_icf_pane_g6

0xea37,	// (0x00033288) bg_icf_pane_g7

0xea3f,	// (0x00033290) bg_icf_pane_g8

0xea49,	// (0x0003329a) bg_icf_pane_g9

0x0008,

0xfef5,	// (0x00034746) bg_icf_pane_g

0x9140,	// (0x0002d991) popup_hyb_candi_window_ParamLimits

0x9140,	// (0x0002d991) popup_hyb_candi_window

0x393b,	// (0x0002818c) bg_popup_sub_pane_cp01_ParamLimits

0x393b,	// (0x0002818c) bg_popup_sub_pane_cp01

0x93c9,	// (0x0002dc1a) entry_hyb_candi_pane_ParamLimits

0x93c9,	// (0x0002dc1a) entry_hyb_candi_pane

0x93d8,	// (0x0002dc29) grid_hyb_candi_pane_ParamLimits

0x93d8,	// (0x0002dc29) grid_hyb_candi_pane

0x93ed,	// (0x0002dc3e) grid_hyb_phrase_pane_ParamLimits

0x93ed,	// (0x0002dc3e) grid_hyb_phrase_pane

0x93fc,	// (0x0002dc4d) cell_hyb_candi_pane_ParamLimits

0x93fc,	// (0x0002dc4d) cell_hyb_candi_pane

0xd605,	// (0x00031e56) cell_hyb_candi_scroll_pane

0x0aa3,	// (0x000252f4) cell_hyb_candi_pane_g1

0x9418,	// (0x0002dc69) cell_hyb_candi_pane_t1

0x9426,	// (0x0002dc77) cell_hyb_phrase_pane

0x0aa3,	// (0x000252f4) cell_hyb_phrase_pane_g1

0x942f,	// (0x0002dc80) cell_hyb_phrase_pane_t1

0x943d,	// (0x0002dc8e) entry_hyb_candi_pane_t1

0x3068,	// (0x000278b9) input_focus_pane_cp06

0x944b,	// (0x0002dc9c) cell_hyb_candi_scroll_pane_g1

0x9453,	// (0x0002dca4) cell_hyb_candi_scroll_pane_g1_aid

0x945b,	// (0x0002dcac) cell_hyb_candi_scroll_pane_g2

0x9463,	// (0x0002dcb4) cell_hyb_candi_scroll_pane_g2_aid

0x946b,	// (0x0002dcbc) cell_hyb_candi_scroll_pane_g3

0x9473,	// (0x0002dcc4) cell_hyb_candi_scroll_pane_g4

0xe4ce,	// (0x00032d1f) ai5_page_g1

0x2c86,	// (0x000274d7) cell_ituss_key_t6_ParamLimits

0x2c86,	// (0x000274d7) cell_ituss_key_t6

0xd052,	// (0x000318a3) icf_edit_indi_pane_cp02_ParamLimits

0xd052,	// (0x000318a3) icf_edit_indi_pane_cp02

0x2a8c,	// (0x000272dd) icf_edit_indi_pane_cp03_ParamLimits

0x2a8c,	// (0x000272dd) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

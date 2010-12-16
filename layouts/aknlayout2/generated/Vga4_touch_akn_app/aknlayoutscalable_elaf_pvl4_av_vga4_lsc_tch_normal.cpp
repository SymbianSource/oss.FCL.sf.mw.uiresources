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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00001595 };

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
0xa5ee,	// (0x0000bb83) Screen

0xa5fa,	// (0x0000bb8f) application_window_ParamLimits

0xa5fa,	// (0x0000bb8f) application_window

0xea2a,	// (0x0000ffbf) screen_g1

0xa632,	// (0x0000bbc7) area_bottom_pane_ParamLimits

0xa632,	// (0x0000bbc7) area_bottom_pane

0xeaa3,	// (0x00010038) area_top_pane_ParamLimits

0xeaa3,	// (0x00010038) area_top_pane

0xeb37,	// (0x000100cc) main_pane_ParamLimits

0xeb37,	// (0x000100cc) main_pane

0xebf2,	// (0x00010187) misc_graphics

0xbdee,	// (0x0000d383) battery_pane_ParamLimits

0xbdee,	// (0x0000d383) battery_pane

0x2c9b,	// (0x00004230) bg_status_flat_pane_g8

0x2ca3,	// (0x00004238) bg_status_flat_pane_g9

0x1e05,	// (0x0000339a) context_pane_ParamLimits

0x1e05,	// (0x0000339a) context_pane

0xbf65,	// (0x0000d4fa) navi_pane_ParamLimits

0xbf65,	// (0x0000d4fa) navi_pane

0xbfed,	// (0x0000d582) signal_pane_ParamLimits

0xbfed,	// (0x0000d582) signal_pane

0x0008,

0xf841,	// (0x00010dd6) bg_status_flat_pane_g

0xc07d,	// (0x0000d612) status_pane_g1_ParamLimits

0xc07d,	// (0x0000d612) status_pane_g1

0xc093,	// (0x0000d628) status_pane_g2_ParamLimits

0xc093,	// (0x0000d628) status_pane_g2

0x203c,	// (0x000035d1) status_pane_g3_ParamLimits

0x203c,	// (0x000035d1) status_pane_g3

0x0004,

0xf774,	// (0x00010d09) status_pane_g_ParamLimits

0xf774,	// (0x00010d09) status_pane_g

0xc09f,	// (0x0000d634) title_pane_ParamLimits

0xc09f,	// (0x0000d634) title_pane

0xc102,	// (0x0000d697) uni_indicator_pane_ParamLimits

0xc102,	// (0x0000d697) uni_indicator_pane

0x162e,	// (0x00002bc3) bg_list_pane_ParamLimits

0x162e,	// (0x00002bc3) bg_list_pane

0xb628,	// (0x0000cbbd) find_pane

0x2412,	// (0x000039a7) listscroll_app_pane_ParamLimits

0x2412,	// (0x000039a7) listscroll_app_pane

0x1662,	// (0x00002bf7) listscroll_form_pane

0xb630,	// (0x0000cbc5) listscroll_gen_pane_ParamLimits

0xb630,	// (0x0000cbc5) listscroll_gen_pane

0x167e,	// (0x00002c13) listscroll_set_pane

0x3a98,	// (0x0000502d) main_idle_act_pane

0x1125,	// (0x000026ba) main_idle_trad_pane

0x1125,	// (0x000026ba) main_list_empty_pane

0x1656,	// (0x00002beb) main_midp_pane

0x1698,	// (0x00002c2d) main_pane_g1_ParamLimits

0x1698,	// (0x00002c2d) main_pane_g1

0xb644,	// (0x0000cbd9) popup_ai_message_window_ParamLimits

0xb644,	// (0x0000cbd9) popup_ai_message_window

0xb6e4,	// (0x0000cc79) popup_fep_china_uni_window_ParamLimits

0xb6e4,	// (0x0000cc79) popup_fep_china_uni_window

0x17c2,	// (0x00002d57) popup_fep_japan_candidate_window_ParamLimits

0x17c2,	// (0x00002d57) popup_fep_japan_candidate_window

0x17ec,	// (0x00002d81) popup_fep_japan_predictive_window_ParamLimits

0x17ec,	// (0x00002d81) popup_fep_japan_predictive_window

0xb744,	// (0x0000ccd9) popup_find_window

0xb761,	// (0x0000ccf6) popup_grid_graphic_window_ParamLimits

0xb761,	// (0x0000ccf6) popup_grid_graphic_window

0x185f,	// (0x00002df4) popup_large_graphic_colour_window

0xb80b,	// (0x0000cda0) popup_menu_window_ParamLimits

0xb80b,	// (0x0000cda0) popup_menu_window

0xb9fb,	// (0x0000cf90) popup_note_image_window

0xb9bb,	// (0x0000cf50) popup_note_wait_window_ParamLimits

0xb9bb,	// (0x0000cf50) popup_note_wait_window

0xba13,	// (0x0000cfa8) popup_note_window_ParamLimits

0xba13,	// (0x0000cfa8) popup_note_window

0xbac1,	// (0x0000d056) popup_query_code_window_ParamLimits

0xbac1,	// (0x0000d056) popup_query_code_window

0x1acb,	// (0x00003060) popup_query_data_code_window_ParamLimits

0x1acb,	// (0x00003060) popup_query_data_code_window

0xbb01,	// (0x0000d096) popup_query_data_window_ParamLimits

0xbb01,	// (0x0000d096) popup_query_data_window

0xbb95,	// (0x0000d12a) popup_query_sat_info_window_ParamLimits

0xbb95,	// (0x0000d12a) popup_query_sat_info_window

0xbc40,	// (0x0000d1d5) popup_snote_single_graphic_window_ParamLimits

0xbc40,	// (0x0000d1d5) popup_snote_single_graphic_window

0xbc40,	// (0x0000d1d5) popup_snote_single_text_window_ParamLimits

0xbc40,	// (0x0000d1d5) popup_snote_single_text_window

0x1b66,	// (0x000030fb) popup_sub_window_general

0x1cac,	// (0x00003241) popup_window_general_ParamLimits

0x1cac,	// (0x00003241) popup_window_general

0x1cc5,	// (0x0000325a) power_save_pane

0x1498,	// (0x00002a2d) control_pane_g1_ParamLimits

0x1498,	// (0x00002a2d) control_pane_g1

0x14bb,	// (0x00002a50) control_pane_g2_ParamLimits

0x14bb,	// (0x00002a50) control_pane_g2

0x14dd,	// (0x00002a72) control_pane_g3_ParamLimits

0x14dd,	// (0x00002a72) control_pane_g3

0x0007,

0xf75c,	// (0x00010cf1) control_pane_g_ParamLimits

0xf75c,	// (0x00010cf1) control_pane_g

0xb53f,	// (0x0000cad4) control_pane_t1_ParamLimits

0xb53f,	// (0x0000cad4) control_pane_t1

0xb58f,	// (0x0000cb24) control_pane_t2_ParamLimits

0xb58f,	// (0x0000cb24) control_pane_t2

0x0002,

0xf76d,	// (0x00010d02) control_pane_t_ParamLimits

0xf76d,	// (0x00010d02) control_pane_t

0x13bd,	// (0x00002952) navi_navi_volume_pane_cp1

0x13c5,	// (0x0000295a) status_small_icon_pane

0x13cd,	// (0x00002962) status_small_pane_g1_ParamLimits

0x13cd,	// (0x00002962) status_small_pane_g1

0x1401,	// (0x00002996) status_small_pane_g2_ParamLimits

0x1401,	// (0x00002996) status_small_pane_g2

0x140d,	// (0x000029a2) status_small_pane_g3_ParamLimits

0x140d,	// (0x000029a2) status_small_pane_g3

0xb4f1,	// (0x0000ca86) status_small_pane_g4_ParamLimits

0xb4f1,	// (0x0000ca86) status_small_pane_g4

0xb4ff,	// (0x0000ca94) status_small_pane_g5_ParamLimits

0xb4ff,	// (0x0000ca94) status_small_pane_g5

0x1433,	// (0x000029c8) status_small_pane_g6_ParamLimits

0x1433,	// (0x000029c8) status_small_pane_g6

0x0007,

0xf74b,	// (0x00010ce0) status_small_pane_g_ParamLimits

0xf74b,	// (0x00010ce0) status_small_pane_g

0x1462,	// (0x000029f7) status_small_pane_t1

0xb515,	// (0x0000caaa) status_small_wait_pane_ParamLimits

0xb515,	// (0x0000caaa) status_small_wait_pane

0xb325,	// (0x0000c8ba) aid_levels_signal_ParamLimits

0xb325,	// (0x0000c8ba) aid_levels_signal

0xb33d,	// (0x0000c8d2) signal_pane_g1_ParamLimits

0xb33d,	// (0x0000c8d2) signal_pane_g1

0xb358,	// (0x0000c8ed) signal_pane_g2_ParamLimits

0xb358,	// (0x0000c8ed) signal_pane_g2

0x0003,

0xf6dc,	// (0x00010c71) signal_pane_g_ParamLimits

0xf6dc,	// (0x00010c71) signal_pane_g

0x09b7,	// (0x00001f4c) context_pane_g1

0xa7dc,	// (0x0000bd71) title_pane_g1

0xa81f,	// (0x0000bdb4) title_pane_t1

0xec5c,	// (0x000101f1) title_pane_t2

0xec82,	// (0x00010217) title_pane_t3

0x0002,

0xf530,	// (0x00010ac5) title_pane_t

0xc12a,	// (0x0000d6bf) aid_levels_battery_ParamLimits

0xc12a,	// (0x0000d6bf) aid_levels_battery

0xc146,	// (0x0000d6db) battery_pane_g1_ParamLimits

0xc146,	// (0x0000d6db) battery_pane_g1

0xc163,	// (0x0000d6f8) battery_pane_g2_ParamLimits

0xc163,	// (0x0000d6f8) battery_pane_g2

0x0001,

0xf77f,	// (0x00010d14) battery_pane_g_ParamLimits

0xf77f,	// (0x00010d14) battery_pane_g

0xc486,	// (0x0000da1b) uni_indicator_pane_g1

0xc49c,	// (0x0000da31) uni_indicator_pane_g2

0xc4b2,	// (0x0000da47) uni_indicator_pane_g3

0x0005,

0xf8e9,	// (0x00010e7e) uni_indicator_pane_g

0x0f84,	// (0x00002519) navi_icon_pane_ParamLimits

0x0f84,	// (0x00002519) navi_icon_pane

0x0ecb,	// (0x00002460) navi_midp_pane

0x0fa0,	// (0x00002535) navi_navi_pane

0x0faa,	// (0x0000253f) navi_text_pane_ParamLimits

0x0faa,	// (0x0000253f) navi_text_pane

0xea2a,	// (0x0000ffbf) status_small_wait_pane_g1

0xf050,	// (0x000105e5) status_small_wait_pane_g2

0x0001,

0xf8e4,	// (0x00010e79) status_small_wait_pane_g

0xc425,	// (0x0000d9ba) navi_navi_icon_text_pane

0xc42d,	// (0x0000d9c2) navi_navi_pane_g1_ParamLimits

0xc42d,	// (0x0000d9c2) navi_navi_pane_g1

0xc43f,	// (0x0000d9d4) navi_navi_pane_g2_ParamLimits

0xc43f,	// (0x0000d9d4) navi_navi_pane_g2

0x0001,

0xf8b2,	// (0x00010e47) navi_navi_pane_g_ParamLimits

0xf8b2,	// (0x00010e47) navi_navi_pane_g

0x3490,	// (0x00004a25) navi_navi_tabs_pane

0xc451,	// (0x0000d9e6) navi_navi_text_pane

0xc425,	// (0x0000d9ba) navi_navi_volume_pane

0xc413,	// (0x0000d9a8) navi_text_pane_t1

0xc407,	// (0x0000d99c) navi_icon_pane_g1

0x3387,	// (0x0000491c) navi_navi_text_pane_t1

0xc3f6,	// (0x0000d98b) navi_navi_volume_pane_g1

0xc3fe,	// (0x0000d993) volume_small_pane

0xc352,	// (0x0000d8e7) navi_navi_icon_text_pane_g1

0xc35a,	// (0x0000d8ef) navi_navi_icon_text_pane_t1

0x0fa0,	// (0x00002535) navi_tabs_2_long_pane

0x0fa0,	// (0x00002535) navi_tabs_2_pane

0x0fa0,	// (0x00002535) navi_tabs_3_long_pane

0x0fa0,	// (0x00002535) navi_tabs_3_pane

0x0fa0,	// (0x00002535) navi_tabs_4_pane

0x323b,	// (0x000047d0) tabs_2_active_pane_ParamLimits

0x323b,	// (0x000047d0) tabs_2_active_pane

0x324b,	// (0x000047e0) tabs_2_passive_pane_ParamLimits

0x324b,	// (0x000047e0) tabs_2_passive_pane

0x3209,	// (0x0000479e) tabs_3_active_pane_ParamLimits

0x3209,	// (0x0000479e) tabs_3_active_pane

0x3219,	// (0x000047ae) tabs_3_passive_pane_ParamLimits

0x3219,	// (0x000047ae) tabs_3_passive_pane

0x322a,	// (0x000047bf) tabs_3_passive_pane_cp_ParamLimits

0x322a,	// (0x000047bf) tabs_3_passive_pane_cp

0x31bd,	// (0x00004752) tabs_4_active_pane_ParamLimits

0x31bd,	// (0x00004752) tabs_4_active_pane

0x31d0,	// (0x00004765) tabs_4_passive_pane_ParamLimits

0x31d0,	// (0x00004765) tabs_4_passive_pane

0x31e1,	// (0x00004776) tabs_4_passive_pane_cp_ParamLimits

0x31e1,	// (0x00004776) tabs_4_passive_pane_cp

0x31f2,	// (0x00004787) tabs_4_passive_pane_cp2_ParamLimits

0x31f2,	// (0x00004787) tabs_4_passive_pane_cp2

0x3199,	// (0x0000472e) tabs_2_long_active_pane_ParamLimits

0x3199,	// (0x0000472e) tabs_2_long_active_pane

0x31ab,	// (0x00004740) tabs_2_long_passive_pane_ParamLimits

0x31ab,	// (0x00004740) tabs_2_long_passive_pane

0x315a,	// (0x000046ef) tabs_3_long_active_pane_ParamLimits

0x315a,	// (0x000046ef) tabs_3_long_active_pane

0x316d,	// (0x00004702) tabs_3_long_passive_pane_ParamLimits

0x316d,	// (0x00004702) tabs_3_long_passive_pane

0x3186,	// (0x0000471b) tabs_3_long_passive_pane_cp_ParamLimits

0x3186,	// (0x0000471b) tabs_3_long_passive_pane_cp

0x3100,	// (0x00004695) volume_small_pane_g1

0xc301,	// (0x0000d896) volume_small_pane_g2

0xc30a,	// (0x0000d89f) volume_small_pane_g3

0xc313,	// (0x0000d8a8) volume_small_pane_g4

0xc31c,	// (0x0000d8b1) volume_small_pane_g5

0xc325,	// (0x0000d8ba) volume_small_pane_g6

0xc32e,	// (0x0000d8c3) volume_small_pane_g7

0xc337,	// (0x0000d8cc) volume_small_pane_g8

0xc340,	// (0x0000d8d5) volume_small_pane_g9

0xc349,	// (0x0000d8de) volume_small_pane_g10

0x0009,

0xf87e,	// (0x00010e13) volume_small_pane_g

0xec94,	// (0x00010229) bg_active_tab_pane_cp2_ParamLimits

0xec94,	// (0x00010229) bg_active_tab_pane_cp2

0xa8ab,	// (0x0000be40) tabs_3_active_pane_g1

0xa8b3,	// (0x0000be48) tabs_3_active_pane_t1

0xec94,	// (0x00010229) bg_passive_tab_pane_cp2_ParamLimits

0xec94,	// (0x00010229) bg_passive_tab_pane_cp2

0xa8ab,	// (0x0000be40) tabs_3_passive_pane_g1

0xa8b3,	// (0x0000be48) tabs_3_passive_pane_t1

0xec94,	// (0x00010229) bg_active_tab_pane_cp3_ParamLimits

0xec94,	// (0x00010229) bg_active_tab_pane_cp3

0xa8c5,	// (0x0000be5a) tabs_4_active_pane_g1

0xa8cd,	// (0x0000be62) tabs_4_active_pane_t1

0xec94,	// (0x00010229) bg_passive_tab_pane_cp3_ParamLimits

0xec94,	// (0x00010229) bg_passive_tab_pane_cp3

0xa8c5,	// (0x0000be5a) tabs_4_1_passive_pane_g1

0xa8cd,	// (0x0000be62) tabs_4_1_passive_pane_t1

0x1656,	// (0x00002beb) list_highlight_pane_cp2

0xc545,	// (0x0000dada) list_set_pane_ParamLimits

0xc545,	// (0x0000dada) list_set_pane

0xc607,	// (0x0000db9c) main_pane_set_t1_ParamLimits

0xc607,	// (0x0000db9c) main_pane_set_t1

0xc627,	// (0x0000dbbc) main_pane_set_t2_ParamLimits

0xc627,	// (0x0000dbbc) main_pane_set_t2

0xc63b,	// (0x0000dbd0) main_pane_set_t3_ParamLimits

0xc63b,	// (0x0000dbd0) main_pane_set_t3

0xc64f,	// (0x0000dbe4) main_pane_set_t4_ParamLimits

0xc64f,	// (0x0000dbe4) main_pane_set_t4

0x0003,

0xf94e,	// (0x00010ee3) main_pane_set_t_ParamLimits

0xf94e,	// (0x00010ee3) main_pane_set_t

0xc663,	// (0x0000dbf8) setting_code_pane

0x3be6,	// (0x0000517b) setting_slider_graphic_pane

0x3be6,	// (0x0000517b) setting_slider_pane

0x3be6,	// (0x0000517b) setting_text_pane

0x3be6,	// (0x0000517b) setting_volume_pane

0xeca2,	// (0x00010237) volume_set_pane

0xecac,	// (0x00010241) bg_set_opt_pane_cp

0xecba,	// (0x0001024f) setting_slider_pane_t1

0xecd3,	// (0x00010268) setting_slider_pane_t2

0xeced,	// (0x00010282) setting_slider_pane_t3

0x0002,

0xf537,	// (0x00010acc) setting_slider_pane_t

0xed05,	// (0x0001029a) slider_set_pane

0xebf2,	// (0x00010187) bg_set_opt_pane_cp2

0xed1b,	// (0x000102b0) setting_slider_graphic_pane_g1

0xed24,	// (0x000102b9) setting_slider_graphic_pane_t1

0xed34,	// (0x000102c9) setting_slider_graphic_pane_t2

0x0001,

0xf53e,	// (0x00010ad3) setting_slider_graphic_pane_t

0xed44,	// (0x000102d9) slider_set_pane_cp

0xebf2,	// (0x00010187) input_focus_pane_cp1

0x3a7f,	// (0x00005014) list_set_text_pane

0xea2a,	// (0x0000ffbf) setting_text_pane_g1

0xebf2,	// (0x00010187) input_focus_pane_cp2

0xea2a,	// (0x0000ffbf) setting_code_pane_g1

0xed4c,	// (0x000102e1) setting_code_pane_t1

0xed5a,	// (0x000102ef) set_text_pane_t1_ParamLimits

0xed5a,	// (0x000102ef) set_text_pane_t1

0xf4df,	// (0x00010a74) set_opt_bg_pane_g1

0xf4e7,	// (0x00010a7c) set_opt_bg_pane_g2

0x3a57,	// (0x00004fec) set_opt_bg_pane_g3

0xf4f7,	// (0x00010a8c) set_opt_bg_pane_g4

0xf4ff,	// (0x00010a94) set_opt_bg_pane_g5

0xf507,	// (0x00010a9c) set_opt_bg_pane_g6

0x3a61,	// (0x00004ff6) set_opt_bg_pane_g7

0x3a6b,	// (0x00005000) set_opt_bg_pane_g8

0x3a75,	// (0x0000500a) set_opt_bg_pane_g9

0x0008,

0xf93b,	// (0x00010ed0) set_opt_bg_pane_g

0x39e6,	// (0x00004f7b) slider_set_pane_g1

0x39f3,	// (0x00004f88) slider_set_pane_g2

0x0006,

0xf92c,	// (0x00010ec1) slider_set_pane_g

0x385e,	// (0x00004df3) volume_set_pane_g1

0x3868,	// (0x00004dfd) volume_set_pane_g2

0x3872,	// (0x00004e07) volume_set_pane_g3

0x387c,	// (0x00004e11) volume_set_pane_g4

0x3886,	// (0x00004e1b) volume_set_pane_g5

0x3890,	// (0x00004e25) volume_set_pane_g6

0x389a,	// (0x00004e2f) volume_set_pane_g7

0x38a4,	// (0x00004e39) volume_set_pane_g8

0x38ae,	// (0x00004e43) volume_set_pane_g9

0x38b8,	// (0x00004e4d) volume_set_pane_g10

0x0009,

0xf904,	// (0x00010e99) volume_set_pane_g

0xa8df,	// (0x0000be74) indicator_pane_ParamLimits

0xa8df,	// (0x0000be74) indicator_pane

0xa90b,	// (0x0000bea0) main_idle_pane_g2_ParamLimits

0xa90b,	// (0x0000bea0) main_idle_pane_g2

0xa943,	// (0x0000bed8) main_pane_idle_g1_ParamLimits

0xa943,	// (0x0000bed8) main_pane_idle_g1

0xed74,	// (0x00010309) popup_clock_digital_analogue_window_ParamLimits

0xed74,	// (0x00010309) popup_clock_digital_analogue_window

0xa96d,	// (0x0000bf02) soft_indicator_pane_ParamLimits

0xa96d,	// (0x0000bf02) soft_indicator_pane

0xa989,	// (0x0000bf1e) wallpaper_pane_ParamLimits

0xa989,	// (0x0000bf1e) wallpaper_pane

0xea2a,	// (0x0000ffbf) wallpaper_pane_g1

0xa99b,	// (0x0000bf30) indicator_pane_g1_ParamLimits

0xa99b,	// (0x0000bf30) indicator_pane_g1

0x3ff4,	// (0x00005589) navi_navi_icon_text_pane_srt_g1

0xeda2,	// (0x00010337) soft_indicator_pane_t1

0xedbc,	// (0x00010351) aid_ps_area_pane

0xa9b4,	// (0x0000bf49) aid_ps_clock_pane

0xedcd,	// (0x00010362) aid_ps_indicator_pane

0xedd9,	// (0x0001036e) indicator_ps_pane_ParamLimits

0xedd9,	// (0x0001036e) indicator_ps_pane

0xede8,	// (0x0001037d) power_save_pane_g1_ParamLimits

0xede8,	// (0x0001037d) power_save_pane_g1

0xedf4,	// (0x00010389) power_save_pane_g2_ParamLimits

0xedf4,	// (0x00010389) power_save_pane_g2

0xea34,	// (0x0000ffc9) aid_navinavi_width_pane

0xedbc,	// (0x00010351) aid_ps_area_pane_ParamLimits

0x0001,

0xf543,	// (0x00010ad8) power_save_pane_g_ParamLimits

0xf543,	// (0x00010ad8) power_save_pane_g

0xee02,	// (0x00010397) power_save_pane_t1_ParamLimits

0xee02,	// (0x00010397) power_save_pane_t1

0xa9b4,	// (0x0000bf49) aid_ps_clock_pane_ParamLimits

0xedcd,	// (0x00010362) aid_ps_indicator_pane_ParamLimits

0xee14,	// (0x000103a9) power_save_pane_t4_ParamLimits

0xee14,	// (0x000103a9) power_save_pane_t4

0x0001,

0xf548,	// (0x00010add) power_save_pane_t_ParamLimits

0xf548,	// (0x00010add) power_save_pane_t

0xee3e,	// (0x000103d3) power_save_t3_ParamLimits

0xee3e,	// (0x000103d3) power_save_t3

0xee29,	// (0x000103be) power_save_t2_ParamLimits

0xee29,	// (0x000103be) power_save_t2

0xee53,	// (0x000103e8) indicator_ps_pane_g1

0xa9c2,	// (0x0000bf57) ai_gene_pane_ParamLimits

0xa9c2,	// (0x0000bf57) ai_gene_pane

0xa9d9,	// (0x0000bf6e) ai_links_pane_ParamLimits

0xa9d9,	// (0x0000bf6e) ai_links_pane

0xa9f1,	// (0x0000bf86) indicator_pane_cp1_ParamLimits

0xa9f1,	// (0x0000bf86) indicator_pane_cp1

0xaa00,	// (0x0000bf95) main_pane_idle_g1_cp_ParamLimits

0xaa00,	// (0x0000bf95) main_pane_idle_g1_cp

0xee5c,	// (0x000103f1) popup_ai_links_title_window

0xaa18,	// (0x0000bfad) soft_indicator_pane_cp1_ParamLimits

0xaa18,	// (0x0000bfad) soft_indicator_pane_cp1

0x373f,	// (0x00004cd4) ai_links_pane_g1

0x3748,	// (0x00004cdd) grid_ai_links_pane

0xc47d,	// (0x0000da12) ai_gene_pane_1

0x372d,	// (0x00004cc2) ai_gene_pane_2

0x3736,	// (0x00004ccb) list_highlight_pane_cp4

0xc459,	// (0x0000d9ee) cell_ai_link_pane_ParamLimits

0xc459,	// (0x0000d9ee) cell_ai_link_pane

0x36fc,	// (0x00004c91) cell_ai_link_pane_g1

0xf050,	// (0x000105e5) cell_ai_link_pane_g2

0x0001,

0xf8df,	// (0x00010e74) cell_ai_link_pane_g

0xebf2,	// (0x00010187) grid_highlight_cp2

0xebf2,	// (0x00010187) bg_popup_sub_pane_cp1

0xee73,	// (0x00010408) popup_ai_links_title_window_t1

0x3648,	// (0x00004bdd) ai_gene_pane_1_g1_ParamLimits

0x3648,	// (0x00004bdd) ai_gene_pane_1_g1

0x3654,	// (0x00004be9) ai_gene_pane_1_g2_ParamLimits

0x3654,	// (0x00004be9) ai_gene_pane_1_g2

0x0001,

0xf8d5,	// (0x00010e6a) ai_gene_pane_1_g_ParamLimits

0xf8d5,	// (0x00010e6a) ai_gene_pane_1_g

0x3661,	// (0x00004bf6) ai_gene_pane_1_t1_ParamLimits

0x3661,	// (0x00004bf6) ai_gene_pane_1_t1

0x3695,	// (0x00004c2a) grid_ai_soft_ind_pane

0x3633,	// (0x00004bc8) ai_gene_pane_2_t1_ParamLimits

0x3633,	// (0x00004bc8) ai_gene_pane_2_t1

0xaa2c,	// (0x0000bfc1) main_pane_empty_t1_ParamLimits

0xaa2c,	// (0x0000bfc1) main_pane_empty_t1

0xaa44,	// (0x0000bfd9) main_pane_empty_t2_ParamLimits

0xaa44,	// (0x0000bfd9) main_pane_empty_t2

0xaa59,	// (0x0000bfee) main_pane_empty_t3_ParamLimits

0xaa59,	// (0x0000bfee) main_pane_empty_t3

0xaa6b,	// (0x0000c000) main_pane_empty_t4_ParamLimits

0xaa6b,	// (0x0000c000) main_pane_empty_t4

0xaa7d,	// (0x0000c012) main_pane_empty_t5_ParamLimits

0xaa7d,	// (0x0000c012) main_pane_empty_t5

0x0004,

0xf54d,	// (0x00010ae2) main_pane_empty_t_ParamLimits

0xf54d,	// (0x00010ae2) main_pane_empty_t

0x0104,	// (0x00001699) bg_popup_window_pane_ParamLimits

0x0104,	// (0x00001699) bg_popup_window_pane

0x3395,	// (0x0000492a) find_popup_pane_cp2_ParamLimits

0x3395,	// (0x0000492a) find_popup_pane_cp2

0x33a1,	// (0x00004936) heading_pane_ParamLimits

0x33a1,	// (0x00004936) heading_pane

0xebf2,	// (0x00010187) bg_popup_sub_pane

0xc377,	// (0x0000d90c) bg_popup_window_pane_g1_ParamLimits

0xc377,	// (0x0000d90c) bg_popup_window_pane_g1

0xc386,	// (0x0000d91b) bg_popup_window_pane_g2_ParamLimits

0xc386,	// (0x0000d91b) bg_popup_window_pane_g2

0xc392,	// (0x0000d927) bg_popup_window_pane_g3_ParamLimits

0xc392,	// (0x0000d927) bg_popup_window_pane_g3

0xc39e,	// (0x0000d933) bg_popup_window_pane_g4_ParamLimits

0xc39e,	// (0x0000d933) bg_popup_window_pane_g4

0xc3ad,	// (0x0000d942) bg_popup_window_pane_g5_ParamLimits

0xc3ad,	// (0x0000d942) bg_popup_window_pane_g5

0xc3bd,	// (0x0000d952) bg_popup_window_pane_g6_ParamLimits

0xc3bd,	// (0x0000d952) bg_popup_window_pane_g6

0xc3c9,	// (0x0000d95e) bg_popup_window_pane_g7_ParamLimits

0xc3c9,	// (0x0000d95e) bg_popup_window_pane_g7

0xc3d8,	// (0x0000d96d) bg_popup_window_pane_g8_ParamLimits

0xc3d8,	// (0x0000d96d) bg_popup_window_pane_g8

0xc3e7,	// (0x0000d97c) bg_popup_window_pane_g9_ParamLimits

0xc3e7,	// (0x0000d97c) bg_popup_window_pane_g9

0x336a,	// (0x000048ff) bg_popup_window_pane_g10_ParamLimits

0x336a,	// (0x000048ff) bg_popup_window_pane_g10

0x0009,

0xf89d,	// (0x00010e32) bg_popup_window_pane_g_ParamLimits

0xf89d,	// (0x00010e32) bg_popup_window_pane_g

0x3293,	// (0x00004828) bg_popup_heading_pane_ParamLimits

0x3293,	// (0x00004828) bg_popup_heading_pane

0x3f37,	// (0x000054cc) tabs_4_passive_pane_cp_srt_ParamLimits

0x3f37,	// (0x000054cc) tabs_4_passive_pane_cp_srt

0x3f49,	// (0x000054de) tabs_4_passive_pane_srt_ParamLimits

0x32a7,	// (0x0000483c) heading_pane_g2

0x3f49,	// (0x000054de) tabs_4_passive_pane_srt

0x2412,	// (0x000039a7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2412,	// (0x000039a7) bg_passive_tab_pane_cp3_srt

0x32af,	// (0x00004844) heading_pane_t1_ParamLimits

0x32af,	// (0x00004844) heading_pane_t1

0x32c6,	// (0x0000485b) heading_pane_t2_ParamLimits

0x32c6,	// (0x0000485b) heading_pane_t2

0x0001,

0xf898,	// (0x00010e2d) heading_pane_t_ParamLimits

0xf898,	// (0x00010e2d) heading_pane_t

0x2c63,	// (0x000041f8) bg_popup_heading_pane_g1

0x2d12,	// (0x000042a7) bg_popup_heading_pane_g2

0x2d1c,	// (0x000042b1) bg_popup_heading_pane_g3

0x2d26,	// (0x000042bb) bg_popup_heading_pane_g4

0x2d30,	// (0x000042c5) bg_popup_heading_pane_g5

0x2d3a,	// (0x000042cf) bg_popup_heading_pane_g6

0x2d42,	// (0x000042d7) bg_popup_heading_pane_g7

0x2d4a,	// (0x000042df) bg_popup_heading_pane_g8

0x2d54,	// (0x000042e9) bg_popup_heading_pane_g9

0x0008,

0xf854,	// (0x00010de9) bg_popup_heading_pane_g

0x2273,	// (0x00003808) bg_popup_sub_pane_g1

0x227b,	// (0x00003810) bg_popup_sub_pane_g2

0x2283,	// (0x00003818) bg_popup_sub_pane_g3

0x228b,	// (0x00003820) bg_popup_sub_pane_g4

0x2293,	// (0x00003828) bg_popup_sub_pane_g5

0x229b,	// (0x00003830) bg_popup_sub_pane_g6

0x22a3,	// (0x00003838) bg_popup_sub_pane_g7

0x22ab,	// (0x00003840) bg_popup_sub_pane_g8

0x22b3,	// (0x00003848) bg_popup_sub_pane_g9

0x0008,

0xf82e,	// (0x00010dc3) bg_popup_sub_pane_g

0xec94,	// (0x00010229) bg_popup_window_pane_cp5_ParamLimits

0xec94,	// (0x00010229) bg_popup_window_pane_cp5

0xee90,	// (0x00010425) popup_note_window_g1_ParamLimits

0xee90,	// (0x00010425) popup_note_window_g1

0xee9c,	// (0x00010431) popup_note_window_t1_ParamLimits

0xee9c,	// (0x00010431) popup_note_window_t1

0xeeb2,	// (0x00010447) popup_note_window_t2_ParamLimits

0xeeb2,	// (0x00010447) popup_note_window_t2

0xeec8,	// (0x0001045d) popup_note_window_t3_ParamLimits

0xeec8,	// (0x0001045d) popup_note_window_t3

0xeede,	// (0x00010473) popup_note_window_t4_ParamLimits

0xeede,	// (0x00010473) popup_note_window_t4

0xef06,	// (0x0001049b) popup_note_window_t5_ParamLimits

0xef06,	// (0x0001049b) popup_note_window_t5

0x0004,

0xf558,	// (0x00010aed) popup_note_window_t_ParamLimits

0xf558,	// (0x00010aed) popup_note_window_t

0xef50,	// (0x000104e5) bg_popup_window_pane_cp6_ParamLimits

0xef50,	// (0x000104e5) bg_popup_window_pane_cp6

0x2bdf,	// (0x00004174) popup_note_image_window_g1_ParamLimits

0x2bdf,	// (0x00004174) popup_note_image_window_g1

0x2beb,	// (0x00004180) popup_note_image_window_g2_ParamLimits

0x2beb,	// (0x00004180) popup_note_image_window_g2

0x0001,

0xf822,	// (0x00010db7) popup_note_image_window_g_ParamLimits

0xf822,	// (0x00010db7) popup_note_image_window_g

0x2c04,	// (0x00004199) popup_note_image_window_t1_ParamLimits

0x2c04,	// (0x00004199) popup_note_image_window_t1

0x2c1d,	// (0x000041b2) popup_note_image_window_t2_ParamLimits

0x2c1d,	// (0x000041b2) popup_note_image_window_t2

0x2c36,	// (0x000041cb) popup_note_image_window_t3_ParamLimits

0x2c36,	// (0x000041cb) popup_note_image_window_t3

0x0002,

0xf827,	// (0x00010dbc) popup_note_image_window_t_ParamLimits

0xf827,	// (0x00010dbc) popup_note_image_window_t

0x2a9f,	// (0x00004034) bg_popup_window_pane_cp7_ParamLimits

0x2a9f,	// (0x00004034) bg_popup_window_pane_cp7

0x2acf,	// (0x00004064) popup_note_wait_window_g1_ParamLimits

0x2acf,	// (0x00004064) popup_note_wait_window_g1

0x2adb,	// (0x00004070) popup_note_wait_window_g2_ParamLimits

0x2adb,	// (0x00004070) popup_note_wait_window_g2

0x0002,

0xf810,	// (0x00010da5) popup_note_wait_window_g_ParamLimits

0xf810,	// (0x00010da5) popup_note_wait_window_g

0x2af3,	// (0x00004088) popup_note_wait_window_t1_ParamLimits

0x2af3,	// (0x00004088) popup_note_wait_window_t1

0x2b1a,	// (0x000040af) popup_note_wait_window_t2_ParamLimits

0x2b1a,	// (0x000040af) popup_note_wait_window_t2

0x2b38,	// (0x000040cd) popup_note_wait_window_t3_ParamLimits

0x2b38,	// (0x000040cd) popup_note_wait_window_t3

0x2b4b,	// (0x000040e0) popup_note_wait_window_t4_ParamLimits

0x2b4b,	// (0x000040e0) popup_note_wait_window_t4

0x0004,

0xf817,	// (0x00010dac) popup_note_wait_window_t_ParamLimits

0xf817,	// (0x00010dac) popup_note_wait_window_t

0x2b70,	// (0x00004105) wait_bar_pane_ParamLimits

0x2b70,	// (0x00004105) wait_bar_pane

0xebf2,	// (0x00010187) wait_anim_pane

0xebf2,	// (0x00010187) wait_border_pane

0xea2a,	// (0x0000ffbf) wait_anim_pane_g1

0xea2a,	// (0x0000ffbf) wait_anim_pane_g2

0x0001,

0xf6d7,	// (0x00010c6c) wait_anim_pane_g

0x2a43,	// (0x00003fd8) wait_border_pane_g1

0x2a4e,	// (0x00003fe3) wait_border_pane_g2

0x2a57,	// (0x00003fec) wait_border_pane_g3

0x0002,

0xf809,	// (0x00010d9e) wait_border_pane_g

0x28ad,	// (0x00003e42) bg_popup_window_pane_cp16_ParamLimits

0x28ad,	// (0x00003e42) bg_popup_window_pane_cp16

0x29ad,	// (0x00003f42) indicator_popup_pane_cp4_ParamLimits

0x29ad,	// (0x00003f42) indicator_popup_pane_cp4

0x29c1,	// (0x00003f56) popup_query_data_window_t1_ParamLimits

0x29c1,	// (0x00003f56) popup_query_data_window_t1

0x29d3,	// (0x00003f68) popup_query_data_window_t2_ParamLimits

0x29d3,	// (0x00003f68) popup_query_data_window_t2

0x29ec,	// (0x00003f81) popup_query_data_window_t3_ParamLimits

0x29ec,	// (0x00003f81) popup_query_data_window_t3

0x0002,

0xf802,	// (0x00010d97) popup_query_data_window_t_ParamLimits

0xf802,	// (0x00010d97) popup_query_data_window_t

0x2a06,	// (0x00003f9b) query_popup_data_pane_ParamLimits

0x2a06,	// (0x00003f9b) query_popup_data_pane

0x2a1a,	// (0x00003faf) query_popup_data_pane_cp1_ParamLimits

0x2a1a,	// (0x00003faf) query_popup_data_pane_cp1

0x28ad,	// (0x00003e42) bg_popup_window_pane_cp10_ParamLimits

0x28ad,	// (0x00003e42) bg_popup_window_pane_cp10

0x28df,	// (0x00003e74) indicator_popup_pane_ParamLimits

0x28df,	// (0x00003e74) indicator_popup_pane

0x2901,	// (0x00003e96) popup_query_code_window_t1_ParamLimits

0x2901,	// (0x00003e96) popup_query_code_window_t1

0x291b,	// (0x00003eb0) popup_query_code_window_t2_ParamLimits

0x291b,	// (0x00003eb0) popup_query_code_window_t2

0x2964,	// (0x00003ef9) popup_query_code_window_t3_ParamLimits

0x2964,	// (0x00003ef9) popup_query_code_window_t3

0x0002,

0xf7fb,	// (0x00010d90) popup_query_code_window_t_ParamLimits

0xf7fb,	// (0x00010d90) popup_query_code_window_t

0x2993,	// (0x00003f28) query_popup_pane_ParamLimits

0x2993,	// (0x00003f28) query_popup_pane

0xef50,	// (0x000104e5) bg_popup_window_pane_cp15_ParamLimits

0xef50,	// (0x000104e5) bg_popup_window_pane_cp15

0xef70,	// (0x00010505) indicator_popup_pane_cp1_ParamLimits

0xef70,	// (0x00010505) indicator_popup_pane_cp1

0xef83,	// (0x00010518) indicator_popup_pane_cp2_ParamLimits

0xef83,	// (0x00010518) indicator_popup_pane_cp2

0xef9e,	// (0x00010533) popup_query_data_code_window_g1_ParamLimits

0xef9e,	// (0x00010533) popup_query_data_code_window_g1

0xefb1,	// (0x00010546) popup_query_data_code_window_t1_ParamLimits

0xefb1,	// (0x00010546) popup_query_data_code_window_t1

0xefc3,	// (0x00010558) popup_query_data_code_window_t2_ParamLimits

0xefc3,	// (0x00010558) popup_query_data_code_window_t2

0xefd5,	// (0x0001056a) popup_query_data_code_window_t3_ParamLimits

0xefd5,	// (0x0001056a) popup_query_data_code_window_t3

0xefeb,	// (0x00010580) popup_query_data_code_window_t4_ParamLimits

0xefeb,	// (0x00010580) popup_query_data_code_window_t4

0x0003,

0xf563,	// (0x00010af8) popup_query_data_code_window_t_ParamLimits

0xf563,	// (0x00010af8) popup_query_data_code_window_t

0x0f40,	// (0x000024d5) list_single_midp_graphic_pane_g3

0xf005,	// (0x0001059a) query_popup_data_pane_cp2_ParamLimits

0xf018,	// (0x000105ad) query_popup_pane_cp2_ParamLimits

0xf018,	// (0x000105ad) query_popup_pane_cp2

0xebf2,	// (0x00010187) bg_popup_window_pane_cp11

0x2891,	// (0x00003e26) heading_pane_cp5

0x2899,	// (0x00003e2e) listscroll_popup_info_pane

0xebf2,	// (0x00010187) input_focus_pane_cp3

0xf033,	// (0x000105c8) query_popup_pane_t1

0xf041,	// (0x000105d6) list_popup_info_pane_ParamLimits

0xf041,	// (0x000105d6) list_popup_info_pane

0xf050,	// (0x000105e5) listscroll_popup_info_pane_g1

0xf058,	// (0x000105ed) scroll_pane_cp7

0xf062,	// (0x000105f7) popup_info_list_pane_t1_ParamLimits

0xf062,	// (0x000105f7) popup_info_list_pane_t1

0xf07c,	// (0x00010611) popup_info_list_pane_t2_ParamLimits

0xf07c,	// (0x00010611) popup_info_list_pane_t2

0x0001,

0xf56c,	// (0x00010b01) popup_info_list_pane_t_ParamLimits

0xf56c,	// (0x00010b01) popup_info_list_pane_t

0xebf2,	// (0x00010187) bg_popup_window_pane_cp12

0x402b,	// (0x000055c0) find_popup_pane

0xecac,	// (0x00010241) bg_popup_window_pane_cp3

0xf096,	// (0x0001062b) heading_pane_cp3

0xf0a5,	// (0x0001063a) listscroll_popup_graphic_pane

0xebf2,	// (0x00010187) bg_popup_window_pane_cp4

0xaadf,	// (0x0000c074) heading_pane_cp4

0xf0b5,	// (0x0001064a) listscroll_popup_colour_pane

0xaae9,	// (0x0000c07e) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xaae9,	// (0x0000c07e) cell_large_graphic_colour_none_popup_pane

0xaafd,	// (0x0000c092) grid_large_graphic_colour_popup_pane_ParamLimits

0xaafd,	// (0x0000c092) grid_large_graphic_colour_popup_pane

0xab25,	// (0x0000c0ba) listscroll_popup_colour_pane_g1_ParamLimits

0xab25,	// (0x0000c0ba) listscroll_popup_colour_pane_g1

0xab3c,	// (0x0000c0d1) listscroll_popup_colour_pane_g2_ParamLimits

0xab3c,	// (0x0000c0d1) listscroll_popup_colour_pane_g2

0xab53,	// (0x0000c0e8) listscroll_popup_colour_pane_g3_ParamLimits

0xab53,	// (0x0000c0e8) listscroll_popup_colour_pane_g3

0xab63,	// (0x0000c0f8) listscroll_popup_colour_pane_g4_ParamLimits

0xab63,	// (0x0000c0f8) listscroll_popup_colour_pane_g4

0x0003,

0xf571,	// (0x00010b06) listscroll_popup_colour_pane_g_ParamLimits

0xf571,	// (0x00010b06) listscroll_popup_colour_pane_g

0xf0bd,	// (0x00010652) scroll_pane_cp6_ParamLimits

0xf0bd,	// (0x00010652) scroll_pane_cp6

0xab73,	// (0x0000c108) cell_large_graphic_colour_popup_pane_ParamLimits

0xab73,	// (0x0000c108) cell_large_graphic_colour_popup_pane

0xf0cf,	// (0x00010664) cell_large_graphic_colour_none_popup_pane_t1

0xebf2,	// (0x00010187) grid_highlight_pane_cp5

0xf0de,	// (0x00010673) cell_large_graphic_colour_popup_pane_g1

0xf0e6,	// (0x0001067b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57a,	// (0x00010b0f) cell_large_graphic_colour_popup_pane_g

0xf0ee,	// (0x00010683) cell_large_graphic_colour_popup_pane_g2_copy1

0xf0f7,	// (0x0001068c) grid_highlight_pane_cp4

0xf0ff,	// (0x00010694) bg_popup_window_pane_cp8_ParamLimits

0xf0ff,	// (0x00010694) bg_popup_window_pane_cp8

0xf11a,	// (0x000106af) popup_snote_single_text_window_g1_ParamLimits

0xf11a,	// (0x000106af) popup_snote_single_text_window_g1

0xf12c,	// (0x000106c1) popup_snote_single_text_window_t1_ParamLimits

0xf12c,	// (0x000106c1) popup_snote_single_text_window_t1

0xf13f,	// (0x000106d4) popup_snote_single_text_window_t2_ParamLimits

0xf13f,	// (0x000106d4) popup_snote_single_text_window_t2

0xf152,	// (0x000106e7) popup_snote_single_text_window_t3_ParamLimits

0xf152,	// (0x000106e7) popup_snote_single_text_window_t3

0xf18b,	// (0x00010720) popup_snote_single_text_window_t4_ParamLimits

0xf18b,	// (0x00010720) popup_snote_single_text_window_t4

0xf1bf,	// (0x00010754) popup_snote_single_text_window_t5_ParamLimits

0xf1bf,	// (0x00010754) popup_snote_single_text_window_t5

0x0004,

0xf57f,	// (0x00010b14) popup_snote_single_text_window_t_ParamLimits

0xf57f,	// (0x00010b14) popup_snote_single_text_window_t

0xf1ee,	// (0x00010783) bg_popup_window_pane_cp9_ParamLimits

0xf1ee,	// (0x00010783) bg_popup_window_pane_cp9

0xf11a,	// (0x000106af) popup_snote_single_graphic_window_g1_ParamLimits

0xf11a,	// (0x000106af) popup_snote_single_graphic_window_g1

0xf1fc,	// (0x00010791) popup_snote_single_graphic_window_g2_ParamLimits

0xf1fc,	// (0x00010791) popup_snote_single_graphic_window_g2

0x0001,

0xf58a,	// (0x00010b1f) popup_snote_single_graphic_window_g_ParamLimits

0xf58a,	// (0x00010b1f) popup_snote_single_graphic_window_g

0xf208,	// (0x0001079d) popup_snote_single_graphic_window_t1_ParamLimits

0xf208,	// (0x0001079d) popup_snote_single_graphic_window_t1

0xf21b,	// (0x000107b0) popup_snote_single_graphic_window_t2_ParamLimits

0xf21b,	// (0x000107b0) popup_snote_single_graphic_window_t2

0xf22e,	// (0x000107c3) popup_snote_single_graphic_window_t3_ParamLimits

0xf22e,	// (0x000107c3) popup_snote_single_graphic_window_t3

0xf267,	// (0x000107fc) popup_snote_single_graphic_window_t4_ParamLimits

0xf267,	// (0x000107fc) popup_snote_single_graphic_window_t4

0xf29b,	// (0x00010830) popup_snote_single_graphic_window_t5_ParamLimits

0xf29b,	// (0x00010830) popup_snote_single_graphic_window_t5

0x0004,

0xf58f,	// (0x00010b24) popup_snote_single_graphic_window_t_ParamLimits

0xf58f,	// (0x00010b24) popup_snote_single_graphic_window_t

0x3eb1,	// (0x00005446) grid_graphic_popup_pane_ParamLimits

0x3eb1,	// (0x00005446) grid_graphic_popup_pane

0x3edf,	// (0x00005474) listscroll_popup_graphic_pane_g1_ParamLimits

0x3edf,	// (0x00005474) listscroll_popup_graphic_pane_g1

0xc7b8,	// (0x0000dd4d) listscroll_popup_graphic_pane_g2_ParamLimits

0xc7b8,	// (0x0000dd4d) listscroll_popup_graphic_pane_g2

0x0001,

0xf978,	// (0x00010f0d) listscroll_popup_graphic_pane_g_ParamLimits

0xf978,	// (0x00010f0d) listscroll_popup_graphic_pane_g

0x3f07,	// (0x0000549c) scroll_pane_cp5

0xc76c,	// (0x0000dd01) cell_graphic_popup_pane_ParamLimits

0xc76c,	// (0x0000dd01) cell_graphic_popup_pane

0x3e21,	// (0x000053b6) cell_graphic_popup_pane_g1

0x3e29,	// (0x000053be) cell_graphic_popup_pane_g2

0xf0ee,	// (0x00010683) cell_graphic_popup_pane_g3

0x0002,

0xf971,	// (0x00010f06) cell_graphic_popup_pane_g

0x3e32,	// (0x000053c7) cell_graphic_popup_pane_t2

0xf0f7,	// (0x0001068c) grid_highlight_pane_cp3

0xf2dc,	// (0x00010871) list_gen_pane_ParamLimits

0xf2dc,	// (0x00010871) list_gen_pane

0xf304,	// (0x00010899) scroll_pane

0xc723,	// (0x0000dcb8) bg_list_pane_g1_ParamLimits

0xc723,	// (0x0000dcb8) bg_list_pane_g1

0x3d96,	// (0x0000532b) bg_list_pane_g2_ParamLimits

0x3d96,	// (0x0000532b) bg_list_pane_g2

0x3dab,	// (0x00005340) bg_list_pane_g3_ParamLimits

0x3dab,	// (0x00005340) bg_list_pane_g3

0x3dbf,	// (0x00005354) bg_list_pane_g4_ParamLimits

0x3dbf,	// (0x00005354) bg_list_pane_g4

0xc740,	// (0x0000dcd5) bg_list_pane_g5_ParamLimits

0xc740,	// (0x0000dcd5) bg_list_pane_g5

0x0004,

0xf966,	// (0x00010efb) bg_list_pane_g_ParamLimits

0xf966,	// (0x00010efb) bg_list_pane_g

0xc6bd,	// (0x0000dc52) list_double2_graphic_large_graphic_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double2_graphic_large_graphic_pane

0xc6bd,	// (0x0000dc52) list_double2_graphic_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double2_graphic_pane

0xc6bd,	// (0x0000dc52) list_double2_large_graphic_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double2_large_graphic_pane

0xc6bd,	// (0x0000dc52) list_double2_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double2_pane

0xc6bd,	// (0x0000dc52) list_double_graphic_heading_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double_graphic_heading_pane

0xc6bd,	// (0x0000dc52) list_double_graphic_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double_graphic_pane

0xc6bd,	// (0x0000dc52) list_double_heading_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double_heading_pane

0xc6bd,	// (0x0000dc52) list_double_large_graphic_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double_large_graphic_pane

0xc6bd,	// (0x0000dc52) list_double_number_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double_number_pane

0xc6bd,	// (0x0000dc52) list_double_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double_pane

0xc6bd,	// (0x0000dc52) list_double_time_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_double_time_pane

0xc6bd,	// (0x0000dc52) list_setting_number_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_setting_number_pane

0xc6bd,	// (0x0000dc52) list_setting_pane_ParamLimits

0xc6bd,	// (0x0000dc52) list_setting_pane

0xc6d1,	// (0x0000dc66) list_single_2graphic_pane_ParamLimits

0xc6d1,	// (0x0000dc66) list_single_2graphic_pane

0xc6d1,	// (0x0000dc66) list_single_graphic_heading_pane_ParamLimits

0xc6d1,	// (0x0000dc66) list_single_graphic_heading_pane

0xc6d1,	// (0x0000dc66) list_single_graphic_pane_ParamLimits

0xc6d1,	// (0x0000dc66) list_single_graphic_pane

0xc6d1,	// (0x0000dc66) list_single_heading_pane_ParamLimits

0xc6d1,	// (0x0000dc66) list_single_heading_pane

0xc6d1,	// (0x0000dc66) list_single_large_graphic_pane_ParamLimits

0xc6d1,	// (0x0000dc66) list_single_large_graphic_pane

0xc6d1,	// (0x0000dc66) list_single_number_heading_pane_ParamLimits

0xc6d1,	// (0x0000dc66) list_single_number_heading_pane

0xc6d1,	// (0x0000dc66) list_single_number_pane_ParamLimits

0xc6d1,	// (0x0000dc66) list_single_number_pane

0xc6d1,	// (0x0000dc66) list_single_pane_ParamLimits

0xc6d1,	// (0x0000dc66) list_single_pane

0xebf2,	// (0x00010187) list_highlight_pane_cp1

0x210b,	// (0x000036a0) list_single_pane_g1_ParamLimits

0x210b,	// (0x000036a0) list_single_pane_g1

0x2117,	// (0x000036ac) list_single_pane_g2_ParamLimits

0x2117,	// (0x000036ac) list_single_pane_g2

0x0001,

0xf5a1,	// (0x00010b36) list_single_pane_g_ParamLimits

0xf5a1,	// (0x00010b36) list_single_pane_g

0x4681,	// (0x00005c16) list_single_pane_t1_ParamLimits

0x4681,	// (0x00005c16) list_single_pane_t1

0x210b,	// (0x000036a0) list_single_number_pane_g1_ParamLimits

0x210b,	// (0x000036a0) list_single_number_pane_g1

0x2117,	// (0x000036ac) list_single_number_pane_g2_ParamLimits

0x2117,	// (0x000036ac) list_single_number_pane_g2

0x0001,

0xf5a1,	// (0x00010b36) list_single_number_pane_g_ParamLimits

0xf5a1,	// (0x00010b36) list_single_number_pane_g

0x2201,	// (0x00003796) list_single_number_pane_t1_ParamLimits

0x2201,	// (0x00003796) list_single_number_pane_t1

0x4775,	// (0x00005d0a) list_single_number_pane_t2_ParamLimits

0x4775,	// (0x00005d0a) list_single_number_pane_t2

0x0001,

0xf927,	// (0x00010ebc) list_single_number_pane_t_ParamLimits

0xf927,	// (0x00010ebc) list_single_number_pane_t

0xab9e,	// (0x0000c133) list_single_graphic_pane_g1_ParamLimits

0xab9e,	// (0x0000c133) list_single_graphic_pane_g1

0x210b,	// (0x000036a0) list_single_graphic_pane_g2_ParamLimits

0x210b,	// (0x000036a0) list_single_graphic_pane_g2

0x2117,	// (0x000036ac) list_single_graphic_pane_g3_ParamLimits

0x2117,	// (0x000036ac) list_single_graphic_pane_g3

0x0002,

0xf59a,	// (0x00010b2f) list_single_graphic_pane_g_ParamLimits

0xf59a,	// (0x00010b2f) list_single_graphic_pane_g

0xabaa,	// (0x0000c13f) list_single_graphic_pane_t1_ParamLimits

0xabaa,	// (0x0000c13f) list_single_graphic_pane_t1

0x210b,	// (0x000036a0) list_single_heading_pane_g1_ParamLimits

0x210b,	// (0x000036a0) list_single_heading_pane_g1

0x2117,	// (0x000036ac) list_single_heading_pane_g2_ParamLimits

0x2117,	// (0x000036ac) list_single_heading_pane_g2

0x0001,

0xf5a1,	// (0x00010b36) list_single_heading_pane_g_ParamLimits

0xf5a1,	// (0x00010b36) list_single_heading_pane_g

0x4631,	// (0x00005bc6) list_single_heading_pane_t1_ParamLimits

0x4631,	// (0x00005bc6) list_single_heading_pane_t1

0xabc0,	// (0x0000c155) list_single_heading_pane_t2_ParamLimits

0xabc0,	// (0x0000c155) list_single_heading_pane_t2

0x0001,

0xf5a6,	// (0x00010b3b) list_single_heading_pane_t_ParamLimits

0xf5a6,	// (0x00010b3b) list_single_heading_pane_t

0x210b,	// (0x000036a0) list_single_number_heading_pane_g1_ParamLimits

0x210b,	// (0x000036a0) list_single_number_heading_pane_g1

0x2117,	// (0x000036ac) list_single_number_heading_pane_g2_ParamLimits

0x2117,	// (0x000036ac) list_single_number_heading_pane_g2

0x0001,

0xf5a1,	// (0x00010b36) list_single_number_heading_pane_g_ParamLimits

0xf5a1,	// (0x00010b36) list_single_number_heading_pane_g

0x4631,	// (0x00005bc6) list_single_number_heading_pane_t1_ParamLimits

0x4631,	// (0x00005bc6) list_single_number_heading_pane_t1

0xabd2,	// (0x0000c167) list_single_number_heading_pane_t2_ParamLimits

0xabd2,	// (0x0000c167) list_single_number_heading_pane_t2

0xabe4,	// (0x0000c179) list_single_number_heading_pane_t3_ParamLimits

0xabe4,	// (0x0000c179) list_single_number_heading_pane_t3

0x0002,

0xf5ab,	// (0x00010b40) list_single_number_heading_pane_t_ParamLimits

0xf5ab,	// (0x00010b40) list_single_number_heading_pane_t

0x20ff,	// (0x00003694) list_single_graphic_heading_pane_g1_ParamLimits

0x20ff,	// (0x00003694) list_single_graphic_heading_pane_g1

0xabf6,	// (0x0000c18b) list_single_graphic_heading_pane_g4_ParamLimits

0xabf6,	// (0x0000c18b) list_single_graphic_heading_pane_g4

0x2117,	// (0x000036ac) list_single_graphic_heading_pane_g5_ParamLimits

0x2117,	// (0x000036ac) list_single_graphic_heading_pane_g5

0x0002,

0xf5b2,	// (0x00010b47) list_single_graphic_heading_pane_g_ParamLimits

0xf5b2,	// (0x00010b47) list_single_graphic_heading_pane_g

0x4631,	// (0x00005bc6) list_single_graphic_heading_pane_t1_ParamLimits

0x4631,	// (0x00005bc6) list_single_graphic_heading_pane_t1

0xac07,	// (0x0000c19c) list_single_graphic_heading_pane_t2_ParamLimits

0xac07,	// (0x0000c19c) list_single_graphic_heading_pane_t2

0x0001,

0xf5b9,	// (0x00010b4e) list_single_graphic_heading_pane_t_ParamLimits

0xf5b9,	// (0x00010b4e) list_single_graphic_heading_pane_t

0x4697,	// (0x00005c2c) list_single_large_graphic_pane_g1_ParamLimits

0x4697,	// (0x00005c2c) list_single_large_graphic_pane_g1

0x210b,	// (0x000036a0) list_single_large_graphic_pane_g2_ParamLimits

0x210b,	// (0x000036a0) list_single_large_graphic_pane_g2

0x2117,	// (0x000036ac) list_single_large_graphic_pane_g3_ParamLimits

0x2117,	// (0x000036ac) list_single_large_graphic_pane_g3

0x0002,

0xf5be,	// (0x00010b53) list_single_large_graphic_pane_g_ParamLimits

0xf5be,	// (0x00010b53) list_single_large_graphic_pane_g

0x2a4e,	// (0x00003fe3) wait_border_pane_g2_copy1

0xac19,	// (0x0000c1ae) list_single_large_graphic_pane_g4_cp2

0x46a3,	// (0x00005c38) list_single_large_graphic_pane_t1_ParamLimits

0x46a3,	// (0x00005c38) list_single_large_graphic_pane_t1

0xac21,	// (0x0000c1b6) list_double_pane_g1_ParamLimits

0xac21,	// (0x0000c1b6) list_double_pane_g1

0xac2d,	// (0x0000c1c2) list_double_pane_g2_ParamLimits

0xac2d,	// (0x0000c1c2) list_double_pane_g2

0x0001,

0xf5c5,	// (0x00010b5a) list_double_pane_g_ParamLimits

0xf5c5,	// (0x00010b5a) list_double_pane_g

0xac39,	// (0x0000c1ce) list_double_pane_t1_ParamLimits

0xac39,	// (0x0000c1ce) list_double_pane_t1

0xac4f,	// (0x0000c1e4) list_double_pane_t2_ParamLimits

0xac4f,	// (0x0000c1e4) list_double_pane_t2

0x0001,

0xf5ca,	// (0x00010b5f) list_double_pane_t_ParamLimits

0xf5ca,	// (0x00010b5f) list_double_pane_t

0xac61,	// (0x0000c1f6) list_double2_pane_g1_ParamLimits

0xac61,	// (0x0000c1f6) list_double2_pane_g1

0xac72,	// (0x0000c207) list_double2_pane_g2_ParamLimits

0xac72,	// (0x0000c207) list_double2_pane_g2

0x0001,

0xf5cf,	// (0x00010b64) list_double2_pane_g_ParamLimits

0xf5cf,	// (0x00010b64) list_double2_pane_g

0xac7e,	// (0x0000c213) list_double2_pane_t1_ParamLimits

0xac7e,	// (0x0000c213) list_double2_pane_t1

0xac94,	// (0x0000c229) list_double2_pane_t2_ParamLimits

0xac94,	// (0x0000c229) list_double2_pane_t2

0x0001,

0xf5d4,	// (0x00010b69) list_double2_pane_t_ParamLimits

0xf5d4,	// (0x00010b69) list_double2_pane_t

0xac21,	// (0x0000c1b6) list_double_number_pane_g1_ParamLimits

0xac21,	// (0x0000c1b6) list_double_number_pane_g1

0xac2d,	// (0x0000c1c2) list_double_number_pane_g2_ParamLimits

0xac2d,	// (0x0000c1c2) list_double_number_pane_g2

0x0001,

0xf5c5,	// (0x00010b5a) list_double_number_pane_g_ParamLimits

0xf5c5,	// (0x00010b5a) list_double_number_pane_g

0xaca6,	// (0x0000c23b) list_double_number_pane_t1_ParamLimits

0xaca6,	// (0x0000c23b) list_double_number_pane_t1

0xacb8,	// (0x0000c24d) list_double_number_pane_t2_ParamLimits

0xacb8,	// (0x0000c24d) list_double_number_pane_t2

0xacce,	// (0x0000c263) list_double_number_pane_t3_ParamLimits

0xacce,	// (0x0000c263) list_double_number_pane_t3

0x0002,

0xf5d9,	// (0x00010b6e) list_double_number_pane_t_ParamLimits

0xf5d9,	// (0x00010b6e) list_double_number_pane_t

0xace0,	// (0x0000c275) list_double_graphic_pane_g1_ParamLimits

0xace0,	// (0x0000c275) list_double_graphic_pane_g1

0xacec,	// (0x0000c281) list_double_graphic_pane_g2_ParamLimits

0xacec,	// (0x0000c281) list_double_graphic_pane_g2

0x43d2,	// (0x00005967) list_double_graphic_pane_g3_ParamLimits

0x43d2,	// (0x00005967) list_double_graphic_pane_g3

0x0003,

0xf5e0,	// (0x00010b75) list_double_graphic_pane_g_ParamLimits

0xf5e0,	// (0x00010b75) list_double_graphic_pane_g

0xad07,	// (0x0000c29c) list_double_graphic_pane_t1_ParamLimits

0xad07,	// (0x0000c29c) list_double_graphic_pane_t1

0xad1d,	// (0x0000c2b2) list_double_graphic_pane_t2_ParamLimits

0xad1d,	// (0x0000c2b2) list_double_graphic_pane_t2

0x0001,

0xf5e9,	// (0x00010b7e) list_double_graphic_pane_t_ParamLimits

0xf5e9,	// (0x00010b7e) list_double_graphic_pane_t

0xf359,	// (0x000108ee) list_double2_graphic_pane_g1_ParamLimits

0xf359,	// (0x000108ee) list_double2_graphic_pane_g1

0xad2f,	// (0x0000c2c4) list_double2_graphic_pane_g2_ParamLimits

0xad2f,	// (0x0000c2c4) list_double2_graphic_pane_g2

0xac72,	// (0x0000c207) list_double2_graphic_pane_g3_ParamLimits

0xac72,	// (0x0000c207) list_double2_graphic_pane_g3

0x0002,

0xf5ee,	// (0x00010b83) list_double2_graphic_pane_g_ParamLimits

0xf5ee,	// (0x00010b83) list_double2_graphic_pane_g

0xad3b,	// (0x0000c2d0) list_double2_graphic_pane_t1_ParamLimits

0xad3b,	// (0x0000c2d0) list_double2_graphic_pane_t1

0xad51,	// (0x0000c2e6) list_double2_graphic_pane_t2_ParamLimits

0xad51,	// (0x0000c2e6) list_double2_graphic_pane_t2

0x0001,

0xf5f5,	// (0x00010b8a) list_double2_graphic_pane_t_ParamLimits

0xf5f5,	// (0x00010b8a) list_double2_graphic_pane_t

0xad63,	// (0x0000c2f8) list_double_large_graphic_pane_g1_ParamLimits

0xad63,	// (0x0000c2f8) list_double_large_graphic_pane_g1

0xad82,	// (0x0000c317) list_double_large_graphic_pane_g2_ParamLimits

0xad82,	// (0x0000c317) list_double_large_graphic_pane_g2

0xac2d,	// (0x0000c1c2) list_double_large_graphic_pane_g3_ParamLimits

0xac2d,	// (0x0000c1c2) list_double_large_graphic_pane_g3

0xad93,	// (0x0000c328) list_double_large_graphic_pane_g4_ParamLimits

0xad93,	// (0x0000c328) list_double_large_graphic_pane_g4

0x0004,

0xf5fa,	// (0x00010b8f) list_double_large_graphic_pane_g_ParamLimits

0xf5fa,	// (0x00010b8f) list_double_large_graphic_pane_g

0xada6,	// (0x0000c33b) list_double_large_graphic_pane_t1_ParamLimits

0xada6,	// (0x0000c33b) list_double_large_graphic_pane_t1

0xadbf,	// (0x0000c354) list_double_large_graphic_pane_t2_ParamLimits

0xadbf,	// (0x0000c354) list_double_large_graphic_pane_t2

0x0001,

0xf605,	// (0x00010b9a) list_double_large_graphic_pane_t_ParamLimits

0xf605,	// (0x00010b9a) list_double_large_graphic_pane_t

0xadd1,	// (0x0000c366) list_double2_large_graphic_pane_g1_ParamLimits

0xadd1,	// (0x0000c366) list_double2_large_graphic_pane_g1

0xac61,	// (0x0000c1f6) list_double2_large_graphic_pane_g2_ParamLimits

0xac61,	// (0x0000c1f6) list_double2_large_graphic_pane_g2

0xac72,	// (0x0000c207) list_double2_large_graphic_pane_g3_ParamLimits

0xac72,	// (0x0000c207) list_double2_large_graphic_pane_g3

0x0002,

0xf60a,	// (0x00010b9f) list_double2_large_graphic_pane_g_ParamLimits

0xf60a,	// (0x00010b9f) list_double2_large_graphic_pane_g

0xaddd,	// (0x0000c372) list_double2_large_graphic_pane_t1_ParamLimits

0xaddd,	// (0x0000c372) list_double2_large_graphic_pane_t1

0xadf3,	// (0x0000c388) list_double2_large_graphic_pane_t2_ParamLimits

0xadf3,	// (0x0000c388) list_double2_large_graphic_pane_t2

0x0001,

0xf611,	// (0x00010ba6) list_double2_large_graphic_pane_t_ParamLimits

0xf611,	// (0x00010ba6) list_double2_large_graphic_pane_t

0xae05,	// (0x0000c39a) list_double_heading_pane_g1_ParamLimits

0xae05,	// (0x0000c39a) list_double_heading_pane_g1

0xae16,	// (0x0000c3ab) list_double_heading_pane_g2_ParamLimits

0xae16,	// (0x0000c3ab) list_double_heading_pane_g2

0x0001,

0xf616,	// (0x00010bab) list_double_heading_pane_g_ParamLimits

0xf616,	// (0x00010bab) list_double_heading_pane_g

0xae22,	// (0x0000c3b7) list_double_heading_pane_t1_ParamLimits

0xae22,	// (0x0000c3b7) list_double_heading_pane_t1

0xae38,	// (0x0000c3cd) list_double_heading_pane_t2_ParamLimits

0xae38,	// (0x0000c3cd) list_double_heading_pane_t2

0x0001,

0xf61b,	// (0x00010bb0) list_double_heading_pane_t_ParamLimits

0xf61b,	// (0x00010bb0) list_double_heading_pane_t

0xae4a,	// (0x0000c3df) list_double_graphic_heading_pane_g1_ParamLimits

0xae4a,	// (0x0000c3df) list_double_graphic_heading_pane_g1

0xae05,	// (0x0000c39a) list_double_graphic_heading_pane_g2_ParamLimits

0xae05,	// (0x0000c39a) list_double_graphic_heading_pane_g2

0xae16,	// (0x0000c3ab) list_double_graphic_heading_pane_g3_ParamLimits

0xae16,	// (0x0000c3ab) list_double_graphic_heading_pane_g3

0x0002,

0xf620,	// (0x00010bb5) list_double_graphic_heading_pane_g_ParamLimits

0xf620,	// (0x00010bb5) list_double_graphic_heading_pane_g

0xae56,	// (0x0000c3eb) list_double_graphic_heading_pane_t1_ParamLimits

0xae56,	// (0x0000c3eb) list_double_graphic_heading_pane_t1

0xae6c,	// (0x0000c401) list_double_graphic_heading_pane_t2_ParamLimits

0xae6c,	// (0x0000c401) list_double_graphic_heading_pane_t2

0x0001,

0xf627,	// (0x00010bbc) list_double_graphic_heading_pane_t_ParamLimits

0xf627,	// (0x00010bbc) list_double_graphic_heading_pane_t

0xad82,	// (0x0000c317) list_double_time_pane_g1_ParamLimits

0xad82,	// (0x0000c317) list_double_time_pane_g1

0xac2d,	// (0x0000c1c2) list_double_time_pane_g2_ParamLimits

0xac2d,	// (0x0000c1c2) list_double_time_pane_g2

0x0001,

0xf62c,	// (0x00010bc1) list_double_time_pane_g_ParamLimits

0xf62c,	// (0x00010bc1) list_double_time_pane_g

0xae7e,	// (0x0000c413) list_double_time_pane_t1_ParamLimits

0xae7e,	// (0x0000c413) list_double_time_pane_t1

0xae94,	// (0x0000c429) list_double_time_pane_t2_ParamLimits

0xae94,	// (0x0000c429) list_double_time_pane_t2

0xaea6,	// (0x0000c43b) list_double_time_pane_t3_ParamLimits

0xaea6,	// (0x0000c43b) list_double_time_pane_t3

0xaeb8,	// (0x0000c44d) list_double_time_pane_t4_ParamLimits

0xaeb8,	// (0x0000c44d) list_double_time_pane_t4

0x0003,

0xf631,	// (0x00010bc6) list_double_time_pane_t_ParamLimits

0xf631,	// (0x00010bc6) list_double_time_pane_t

0xad2f,	// (0x0000c2c4) list_setting_pane_g1_ParamLimits

0xad2f,	// (0x0000c2c4) list_setting_pane_g1

0xac72,	// (0x0000c207) list_setting_pane_g2_ParamLimits

0xac72,	// (0x0000c207) list_setting_pane_g2

0x0001,

0xf63a,	// (0x00010bcf) list_setting_pane_g_ParamLimits

0xf63a,	// (0x00010bcf) list_setting_pane_g

0xaeca,	// (0x0000c45f) list_setting_pane_t1_ParamLimits

0xaeca,	// (0x0000c45f) list_setting_pane_t1

0xaee1,	// (0x0000c476) list_setting_pane_t2_ParamLimits

0xaee1,	// (0x0000c476) list_setting_pane_t2

0x0002,

0xf63f,	// (0x00010bd4) list_setting_pane_t_ParamLimits

0xf63f,	// (0x00010bd4) list_setting_pane_t

0xaf20,	// (0x0000c4b5) set_value_pane_cp_ParamLimits

0xaf20,	// (0x0000c4b5) set_value_pane_cp

0xad2f,	// (0x0000c2c4) list_setting_number_pane_g1_ParamLimits

0xad2f,	// (0x0000c2c4) list_setting_number_pane_g1

0xac72,	// (0x0000c207) list_setting_number_pane_g2_ParamLimits

0xac72,	// (0x0000c207) list_setting_number_pane_g2

0x0001,

0xf63a,	// (0x00010bcf) list_setting_number_pane_g_ParamLimits

0xf63a,	// (0x00010bcf) list_setting_number_pane_g

0xaf2e,	// (0x0000c4c3) list_setting_number_pane_t1_ParamLimits

0xaf2e,	// (0x0000c4c3) list_setting_number_pane_t1

0xaf42,	// (0x0000c4d7) list_setting_number_pane_t2_ParamLimits

0xaf42,	// (0x0000c4d7) list_setting_number_pane_t2

0xaf59,	// (0x0000c4ee) list_setting_number_pane_t3_ParamLimits

0xaf59,	// (0x0000c4ee) list_setting_number_pane_t3

0x0003,

0xf646,	// (0x00010bdb) list_setting_number_pane_t_ParamLimits

0xf646,	// (0x00010bdb) list_setting_number_pane_t

0xaf20,	// (0x0000c4b5) set_value_pane_ParamLimits

0xaf20,	// (0x0000c4b5) set_value_pane

0xf365,	// (0x000108fa) bg_set_opt_pane_ParamLimits

0xf365,	// (0x000108fa) bg_set_opt_pane

0xf386,	// (0x0001091b) set_value_pane_t1

0xf394,	// (0x00010929) slider_set_pane_cp3

0xf39d,	// (0x00010932) volume_small_pane_cp

0xf3a6,	// (0x0001093b) list_form_gen_pane

0xf3af,	// (0x00010944) scroll_pane_cp8

0xaf9c,	// (0x0000c531) form_field_data_pane_ParamLimits

0xaf9c,	// (0x0000c531) form_field_data_pane

0xafb7,	// (0x0000c54c) form_field_data_wide_pane_ParamLimits

0xafb7,	// (0x0000c54c) form_field_data_wide_pane

0xf3d0,	// (0x00010965) form_field_popup_pane_ParamLimits

0xf3d0,	// (0x00010965) form_field_popup_pane

0xafdb,	// (0x0000c570) form_field_popup_wide_pane_ParamLimits

0xafdb,	// (0x0000c570) form_field_popup_wide_pane

0xf3f2,	// (0x00010987) form_field_slider_pane_ParamLimits

0xf3f2,	// (0x00010987) form_field_slider_pane

0xf405,	// (0x0001099a) form_field_slider_wide_pane_ParamLimits

0xf405,	// (0x0001099a) form_field_slider_wide_pane

0xf418,	// (0x000109ad) data_form_pane

0xb006,	// (0x0000c59b) form_field_data_pane_t1

0xf424,	// (0x000109b9) input_focus_pane

0xf432,	// (0x000109c7) data_form_wide_pane

0xf46a,	// (0x000109ff) form_field_data_wide_pane_t1

0xf10c,	// (0x000106a1) input_focus_pane_cp6

0xb020,	// (0x0000c5b5) form_field_popup_pane_t1

0xf424,	// (0x000109b9) input_focus_pane_cp7

0xf489,	// (0x00010a1e) list_form_pane

0xf49d,	// (0x00010a32) form_field_popup_wide_pane_t1

0xf424,	// (0x000109b9) input_focus_pane_cp8

0xf4af,	// (0x00010a44) list_form_wide_pane

0xb042,	// (0x0000c5d7) form_field_slider_pane_t1_ParamLimits

0xb042,	// (0x0000c5d7) form_field_slider_pane_t1

0xb05a,	// (0x0000c5ef) form_field_slider_pane_t2_ParamLimits

0xb05a,	// (0x0000c5ef) form_field_slider_pane_t2

0x0001,

0xf656,	// (0x00010beb) form_field_slider_pane_t_ParamLimits

0xf656,	// (0x00010beb) form_field_slider_pane_t

0xec94,	// (0x00010229) input_focus_pane_cp9_ParamLimits

0xec94,	// (0x00010229) input_focus_pane_cp9

0xb06f,	// (0x0000c604) slider_cont_pane_ParamLimits

0xb06f,	// (0x0000c604) slider_cont_pane

0xf4bb,	// (0x00010a50) form_field_slider_wide_pane_t1_ParamLimits

0xf4bb,	// (0x00010a50) form_field_slider_wide_pane_t1

0xf4cd,	// (0x00010a62) form_field_slider_wide_pane_t2_ParamLimits

0xf4cd,	// (0x00010a62) form_field_slider_wide_pane_t2

0x0001,

0xf65b,	// (0x00010bf0) form_field_slider_wide_pane_t_ParamLimits

0xf65b,	// (0x00010bf0) form_field_slider_wide_pane_t

0xec94,	// (0x00010229) input_focus_pane_cp10_ParamLimits

0xec94,	// (0x00010229) input_focus_pane_cp10

0xb083,	// (0x0000c618) slider_cont_pane_cp1_ParamLimits

0xb083,	// (0x0000c618) slider_cont_pane_cp1

0xb097,	// (0x0000c62c) slider_form_pane_cp

0xf4df,	// (0x00010a74) input_focus_pane_g1

0xf4e7,	// (0x00010a7c) input_focus_pane_g2

0xf4ef,	// (0x00010a84) input_focus_pane_g3

0xf4f7,	// (0x00010a8c) input_focus_pane_g4

0xf4ff,	// (0x00010a94) input_focus_pane_g5

0xf507,	// (0x00010a9c) input_focus_pane_g6

0xf50f,	// (0x00010aa4) input_focus_pane_g7

0xf517,	// (0x00010aac) input_focus_pane_g8

0xf51f,	// (0x00010ab4) input_focus_pane_g9

0xea2a,	// (0x0000ffbf) input_focus_pane_g10

0x0009,

0xf660,	// (0x00010bf5) input_focus_pane_g

0x2a57,	// (0x00003fec) wait_border_pane_g3_copy1

0xb09f,	// (0x0000c634) data_form_pane_t1

0xea2a,	// (0x0000ffbf) wait_anim_pane_g1_copy1

0xc692,	// (0x0000dc27) data_form_wide_pane_t1

0x0013,	// (0x000015a8) list_form_graphic_pane_cp_ParamLimits

0x0013,	// (0x000015a8) list_form_graphic_pane_cp

0x3c0e,	// (0x000051a3) slider_form_pane_g1

0x3c17,	// (0x000051ac) slider_form_pane_g2

0x0006,

0xf957,	// (0x00010eec) slider_form_pane_g

0x0013,	// (0x000015a8) list_form_graphic_pane_ParamLimits

0x0013,	// (0x000015a8) list_form_graphic_pane

0x0025,	// (0x000015ba) list_form_graphic_pane_g1

0x002d,	// (0x000015c2) list_form_graphic_pane_t1_ParamLimits

0x002d,	// (0x000015c2) list_form_graphic_pane_t1

0xecac,	// (0x00010241) list_highlight_pane_cp5_ParamLimits

0xecac,	// (0x00010241) list_highlight_pane_cp5

0xb0bb,	// (0x0000c650) find_pane_g1

0x004b,	// (0x000015e0) input_find_pane

0xb0c4,	// (0x0000c659) input_find_pane_g1_ParamLimits

0xb0c4,	// (0x0000c659) input_find_pane_g1

0xb0d0,	// (0x0000c665) input_find_pane_t1_ParamLimits

0xb0d0,	// (0x0000c665) input_find_pane_t1

0xb0e5,	// (0x0000c67a) input_find_pane_t2_ParamLimits

0xb0e5,	// (0x0000c67a) input_find_pane_t2

0x0001,

0xf675,	// (0x00010c0a) input_find_pane_t_ParamLimits

0xf675,	// (0x00010c0a) input_find_pane_t

0x008a,	// (0x0000161f) input_focus_pane_cp5_ParamLimits

0x008a,	// (0x0000161f) input_focus_pane_cp5

0x00a9,	// (0x0000163e) bg_popup_window_pane_cp2_ParamLimits

0x00a9,	// (0x0000163e) bg_popup_window_pane_cp2

0x00b6,	// (0x0000164b) listscroll_menu_pane_ParamLimits

0x00b6,	// (0x0000164b) listscroll_menu_pane

0xb106,	// (0x0000c69b) popup_submenu_window_ParamLimits

0xb106,	// (0x0000c69b) popup_submenu_window

0x00f2,	// (0x00001687) find_popup_pane_g1

0x00fa,	// (0x0000168f) input_popup_find_pane_cp

0x0104,	// (0x00001699) input_focus_pane_cp4_ParamLimits

0x0104,	// (0x00001699) input_focus_pane_cp4

0x0120,	// (0x000016b5) input_popup_find_pane_t1_ParamLimits

0x0120,	// (0x000016b5) input_popup_find_pane_t1

0xebf2,	// (0x00010187) bg_popup_sub_pane_cp

0x014e,	// (0x000016e3) listscroll_popup_sub_pane

0x0156,	// (0x000016eb) list_submenu_pane_ParamLimits

0x0156,	// (0x000016eb) list_submenu_pane

0x0167,	// (0x000016fc) scroll_pane_cp4

0x016f,	// (0x00001704) list_single_popup_submenu_pane_ParamLimits

0x016f,	// (0x00001704) list_single_popup_submenu_pane

0x0184,	// (0x00001719) list_single_popup_submenu_pane_g1

0x018c,	// (0x00001721) list_single_popup_submenu_pane_t1_ParamLimits

0x018c,	// (0x00001721) list_single_popup_submenu_pane_t1

0xec94,	// (0x00010229) bg_active_tab_pane_cp1_ParamLimits

0xec94,	// (0x00010229) bg_active_tab_pane_cp1

0xb144,	// (0x0000c6d9) tabs_2_active_pane_g1

0xb14c,	// (0x0000c6e1) tabs_2_active_pane_t1

0xec94,	// (0x00010229) bg_passive_tab_pane_cp1_ParamLimits

0xec94,	// (0x00010229) bg_passive_tab_pane_cp1

0xb144,	// (0x0000c6d9) tabs_2_passive_pane_g1

0xb14c,	// (0x0000c6e1) tabs_2_passive_pane_t1

0xecac,	// (0x00010241) bg_active_tab_pane_cp4

0xb15e,	// (0x0000c6f3) tabs_2_long_active_pane_t1

0x1656,	// (0x00002beb) bg_passive_tab_pane_cp4

0x22e0,	// (0x00003875) list_single_midp_graphic_pane_g4_ParamLimits

0xecac,	// (0x00010241) bg_active_tab_pane_cp5

0xb171,	// (0x0000c706) tabs_3_long_active_pane_t1

0x1656,	// (0x00002beb) bg_passive_tab_pane_cp5

0x22e0,	// (0x00003875) list_single_midp_graphic_pane_g4

0xecac,	// (0x00010241) bg_popup_window_pane_cp13_ParamLimits

0xecac,	// (0x00010241) bg_popup_window_pane_cp13

0x0203,	// (0x00001798) listscroll_popup_fast_pane_ParamLimits

0x0203,	// (0x00001798) listscroll_popup_fast_pane

0x0212,	// (0x000017a7) grid_popup_fast_pane_ParamLimits

0x0212,	// (0x000017a7) grid_popup_fast_pane

0x0224,	// (0x000017b9) scroll_pane_cp9_ParamLimits

0x0224,	// (0x000017b9) scroll_pane_cp9

0x600b,	// (0x000075a0) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x600b,	// (0x000075a0) list_single_graphic_hl_pane_t1_cp2

0x0248,	// (0x000017dd) input_focus_pane_cp20_ParamLimits

0x0248,	// (0x000017dd) input_focus_pane_cp20

0x0256,	// (0x000017eb) query_popup_data_pane_t1_ParamLimits

0x0256,	// (0x000017eb) query_popup_data_pane_t1

0x0269,	// (0x000017fe) query_popup_data_pane_t2_ParamLimits

0x0269,	// (0x000017fe) query_popup_data_pane_t2

0x02af,	// (0x00001844) query_popup_data_pane_t3_ParamLimits

0x02af,	// (0x00001844) query_popup_data_pane_t3

0x02f0,	// (0x00001885) query_popup_data_pane_t4_ParamLimits

0x02f0,	// (0x00001885) query_popup_data_pane_t4

0x032c,	// (0x000018c1) query_popup_data_pane_t5_ParamLimits

0x032c,	// (0x000018c1) query_popup_data_pane_t5

0x0004,

0xf67a,	// (0x00010c0f) query_popup_data_pane_t_ParamLimits

0xf67a,	// (0x00010c0f) query_popup_data_pane_t

0xf4df,	// (0x00010a74) bg_set_opt_pane_g1

0xf4e7,	// (0x00010a7c) bg_set_opt_pane_g2

0xf4ef,	// (0x00010a84) bg_set_opt_pane_g3

0xf4f7,	// (0x00010a8c) bg_set_opt_pane_g4

0xf4ff,	// (0x00010a94) bg_set_opt_pane_g5

0xf507,	// (0x00010a9c) bg_set_opt_pane_g6

0xf50f,	// (0x00010aa4) bg_set_opt_pane_g7

0xf517,	// (0x00010aac) bg_set_opt_pane_g8

0xf51f,	// (0x00010ab4) bg_set_opt_pane_g9

0x0008,

0xf685,	// (0x00010c1a) bg_set_opt_pane_g

0x0c69,	// (0x000021fe) control_top_pane_stacon_ParamLimits

0x0c69,	// (0x000021fe) control_top_pane_stacon

0x0cbc,	// (0x00002251) signal_pane_stacon_ParamLimits

0x0cbc,	// (0x00002251) signal_pane_stacon

0x0ce1,	// (0x00002276) stacon_top_pane_g1_ParamLimits

0x0ce1,	// (0x00002276) stacon_top_pane_g1

0x0d03,	// (0x00002298) title_pane_stacon_ParamLimits

0x0d03,	// (0x00002298) title_pane_stacon

0x0d2d,	// (0x000022c2) uni_indicator_pane_stacon_ParamLimits

0x0d2d,	// (0x000022c2) uni_indicator_pane_stacon

0x0d42,	// (0x000022d7) battery_pane_stacon_ParamLimits

0x0d42,	// (0x000022d7) battery_pane_stacon

0x0d86,	// (0x0000231b) control_bottom_pane_stacon_ParamLimits

0x0d86,	// (0x0000231b) control_bottom_pane_stacon

0x0da9,	// (0x0000233e) navi_pane_stacon_ParamLimits

0x0da9,	// (0x0000233e) navi_pane_stacon

0x0dcc,	// (0x00002361) stacon_bottom_pane_g1_ParamLimits

0x0dcc,	// (0x00002361) stacon_bottom_pane_g1

0x0363,	// (0x000018f8) aid_levels_signal_lsc_ParamLimits

0x0363,	// (0x000018f8) aid_levels_signal_lsc

0x037a,	// (0x0000190f) signal_pane_stacon_g1_ParamLimits

0x037a,	// (0x0000190f) signal_pane_stacon_g1

0x038e,	// (0x00001923) signal_pane_stacon_g2_ParamLimits

0x038e,	// (0x00001923) signal_pane_stacon_g2

0x0001,

0xf698,	// (0x00010c2d) signal_pane_stacon_g_ParamLimits

0xf698,	// (0x00010c2d) signal_pane_stacon_g

0x03d0,	// (0x00001965) title_pane_stacon_t1_ParamLimits

0x03d0,	// (0x00001965) title_pane_stacon_t1

0x03f5,	// (0x0000198a) uni_indicator_pane_stacon_g1

0x03ff,	// (0x00001994) uni_indicator_pane_stacon_g2

0x0409,	// (0x0000199e) uni_indicator_pane_stacon_g3

0x0413,	// (0x000019a8) uni_indicator_pane_stacon_g4

0x0003,

0xf6a4,	// (0x00010c39) uni_indicator_pane_stacon_g

0x041d,	// (0x000019b2) control_top_pane_stacon_g1

0x0425,	// (0x000019ba) control_top_pane_stacon_t1_ParamLimits

0x0425,	// (0x000019ba) control_top_pane_stacon_t1

0x045c,	// (0x000019f1) aid_levels_battery_lsc_ParamLimits

0x045c,	// (0x000019f1) aid_levels_battery_lsc

0x0474,	// (0x00001a09) battery_pane_stacon_g1_ParamLimits

0x0474,	// (0x00001a09) battery_pane_stacon_g1

0x0486,	// (0x00001a1b) battery_pane_stacon_g2_ParamLimits

0x0486,	// (0x00001a1b) battery_pane_stacon_g2

0x0001,

0xf6ad,	// (0x00010c42) battery_pane_stacon_g_ParamLimits

0xf6ad,	// (0x00010c42) battery_pane_stacon_g

0x04c4,	// (0x00001a59) navi_icon_pane_stacon

0x04d8,	// (0x00001a6d) navi_navi_pane_stacon

0x04c4,	// (0x00001a59) navi_text_pane_stacon

0x04ee,	// (0x00001a83) control_bottom_pane_stacon_g1

0x04f6,	// (0x00001a8b) control_bottom_pane_stacon_t1_ParamLimits

0x04f6,	// (0x00001a8b) control_bottom_pane_stacon_t1

0xb183,	// (0x0000c718) grid_app_pane_ParamLimits

0xb183,	// (0x0000c718) grid_app_pane

0xb1bb,	// (0x0000c750) scroll_pane_cp15_ParamLimits

0xb1bb,	// (0x0000c750) scroll_pane_cp15

0xb1d0,	// (0x0000c765) cell_app_pane_ParamLimits

0xb1d0,	// (0x0000c765) cell_app_pane

0xb21b,	// (0x0000c7b0) cell_app_pane_g1_ParamLimits

0xb21b,	// (0x0000c7b0) cell_app_pane_g1

0x05cc,	// (0x00001b61) cell_app_pane_g2_ParamLimits

0x05cc,	// (0x00001b61) cell_app_pane_g2

0x0001,

0xf6b2,	// (0x00010c47) cell_app_pane_g_ParamLimits

0xf6b2,	// (0x00010c47) cell_app_pane_g

0xb23f,	// (0x0000c7d4) cell_app_pane_t1_ParamLimits

0xb23f,	// (0x0000c7d4) cell_app_pane_t1

0x0609,	// (0x00001b9e) grid_highlight_pane_ParamLimits

0x0609,	// (0x00001b9e) grid_highlight_pane

0xf4df,	// (0x00010a74) cell_highlight_pane_g1

0xf4e7,	// (0x00010a7c) cell_highlight_pane_g2

0xf4ef,	// (0x00010a84) cell_highlight_pane_g3

0xf4f7,	// (0x00010a8c) cell_highlight_pane_g4

0xf4ff,	// (0x00010a94) cell_highlight_pane_g5

0xf507,	// (0x00010a9c) cell_highlight_pane_g6

0xf50f,	// (0x00010aa4) cell_highlight_pane_g7

0xf517,	// (0x00010aac) cell_highlight_pane_g8

0xf51f,	// (0x00010ab4) cell_highlight_pane_g9

0xea2a,	// (0x0000ffbf) cell_highlight_pane_g10

0x0009,

0xf660,	// (0x00010bf5) cell_highlight_pane_g

0x062d,	// (0x00001bc2) bg_scroll_pane

0x064c,	// (0x00001be1) scroll_handle_pane

0x069d,	// (0x00001c32) scroll_bg_pane_g1

0x06b2,	// (0x00001c47) scroll_bg_pane_g2

0x06ca,	// (0x00001c5f) scroll_bg_pane_g3

0x0002,

0xf6b7,	// (0x00010c4c) scroll_bg_pane_g

0x06df,	// (0x00001c74) scroll_handle_focus_pane_ParamLimits

0x06df,	// (0x00001c74) scroll_handle_focus_pane

0x069d,	// (0x00001c32) scroll_handle_pane_g1

0x06ec,	// (0x00001c81) scroll_handle_pane_g2

0x06ca,	// (0x00001c5f) scroll_handle_pane_g3

0x0002,

0xf6be,	// (0x00010c53) scroll_handle_pane_g

0x0104,	// (0x00001699) bg_popup_sub_pane_cp21_ParamLimits

0x0104,	// (0x00001699) bg_popup_sub_pane_cp21

0x0700,	// (0x00001c95) popup_fep_japan_predictive_window_t1_ParamLimits

0x0700,	// (0x00001c95) popup_fep_japan_predictive_window_t1

0x0717,	// (0x00001cac) popup_fep_japan_predictive_window_t2_ParamLimits

0x0717,	// (0x00001cac) popup_fep_japan_predictive_window_t2

0x074a,	// (0x00001cdf) popup_fep_japan_predictive_window_t3_ParamLimits

0x074a,	// (0x00001cdf) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c5,	// (0x00010c5a) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c5,	// (0x00010c5a) popup_fep_japan_predictive_window_t

0xebf2,	// (0x00010187) bg_popup_sub_pane_cp23

0x0781,	// (0x00001d16) listscroll_japin_cand_pane

0x0789,	// (0x00001d1e) popup_fep_japan_candidate_window_t1

0x0797,	// (0x00001d2c) candidate_pane_ParamLimits

0x0797,	// (0x00001d2c) candidate_pane

0x07a9,	// (0x00001d3e) scroll_pane_cp30

0x07b3,	// (0x00001d48) list_single_popup_jap_candidate_pane_ParamLimits

0x07b3,	// (0x00001d48) list_single_popup_jap_candidate_pane

0xebf2,	// (0x00010187) list_highlight_pane_cp30

0x07c7,	// (0x00001d5c) list_single_popup_jap_candidate_pane_t1

0xb279,	// (0x0000c80e) level_1_signal

0xb28b,	// (0x0000c820) level_2_signal

0xb29e,	// (0x0000c833) level_3_signal

0xb2b1,	// (0x0000c846) level_4_signal

0xb2c4,	// (0x0000c859) level_5_signal

0xb2d7,	// (0x0000c86c) level_6_signal

0xb2ea,	// (0x0000c87f) level_7_signal

0xb279,	// (0x0000c80e) level_1_battery

0xb28b,	// (0x0000c820) level_2_battery

0xb29e,	// (0x0000c833) level_3_battery

0xb2b1,	// (0x0000c846) level_4_battery

0xb2c4,	// (0x0000c859) level_5_battery

0xb2d7,	// (0x0000c86c) level_6_battery

0xb2ea,	// (0x0000c87f) level_7_battery

0x0868,	// (0x00001dfd) list_menu_pane_ParamLimits

0x0868,	// (0x00001dfd) list_menu_pane

0x087e,	// (0x00001e13) scroll_pane_cp25_ParamLimits

0x087e,	// (0x00001e13) scroll_pane_cp25

0x0897,	// (0x00001e2c) list_double2_graphic_pane_cp2_ParamLimits

0x0897,	// (0x00001e2c) list_double2_graphic_pane_cp2

0x0897,	// (0x00001e2c) list_double2_large_graphic_pane_cp2_ParamLimits

0x0897,	// (0x00001e2c) list_double2_large_graphic_pane_cp2

0x0897,	// (0x00001e2c) list_double2_pane_cp2_ParamLimits

0x0897,	// (0x00001e2c) list_double2_pane_cp2

0x0897,	// (0x00001e2c) list_double_graphic_pane_cp2_ParamLimits

0x0897,	// (0x00001e2c) list_double_graphic_pane_cp2

0x0897,	// (0x00001e2c) list_double_large_graphic_pane_cp2_ParamLimits

0x0897,	// (0x00001e2c) list_double_large_graphic_pane_cp2

0x0897,	// (0x00001e2c) list_double_number_pane_cp2_ParamLimits

0x0897,	// (0x00001e2c) list_double_number_pane_cp2

0x0897,	// (0x00001e2c) list_double_pane_cp2_ParamLimits

0x0897,	// (0x00001e2c) list_double_pane_cp2

0xb2fd,	// (0x0000c892) list_single_2graphic_pane_cp2_ParamLimits

0xb2fd,	// (0x0000c892) list_single_2graphic_pane_cp2

0xb2fd,	// (0x0000c892) list_single_graphic_heading_pane_cp2_ParamLimits

0xb2fd,	// (0x0000c892) list_single_graphic_heading_pane_cp2

0xb2fd,	// (0x0000c892) list_single_graphic_pane_cp2_ParamLimits

0xb2fd,	// (0x0000c892) list_single_graphic_pane_cp2

0xb2fd,	// (0x0000c892) list_single_heading_pane_cp2_ParamLimits

0xb2fd,	// (0x0000c892) list_single_heading_pane_cp2

0x08da,	// (0x00001e6f) list_single_large_graphic_pane_cp2_ParamLimits

0x08da,	// (0x00001e6f) list_single_large_graphic_pane_cp2

0xb2fd,	// (0x0000c892) list_single_number_heading_pane_cp2_ParamLimits

0xb2fd,	// (0x0000c892) list_single_number_heading_pane_cp2

0xb2fd,	// (0x0000c892) list_single_number_pane_cp2_ParamLimits

0xb2fd,	// (0x0000c892) list_single_number_pane_cp2

0xb311,	// (0x0000c8a6) list_single_pane_cp2_ParamLimits

0xb311,	// (0x0000c8a6) list_single_pane_cp2

0x09c0,	// (0x00001f55) bg_popup_sub_pane_cp22

0x09e5,	// (0x00001f7a) popup_side_volume_key_window_g1

0x0a0f,	// (0x00001fa4) popup_side_volume_key_window_t1

0x0a2d,	// (0x00001fc2) volume_small_pane_cp1

0xec94,	// (0x00010229) bg_popup_sub_pane_cp24_ParamLimits

0xec94,	// (0x00010229) bg_popup_sub_pane_cp24

0x0a35,	// (0x00001fca) fep_china_uni_candidate_pane_ParamLimits

0x0a35,	// (0x00001fca) fep_china_uni_candidate_pane

0x0a49,	// (0x00001fde) fep_china_uni_entry_pane

0x0a59,	// (0x00001fee) popup_fep_china_uni_window_g1

0x0a75,	// (0x0000200a) fep_china_uni_entry_pane_g1

0x0a7f,	// (0x00002014) fep_china_uni_entry_pane_g2

0x0001,

0xf6f6,	// (0x00010c8b) fep_china_uni_entry_pane_g

0x0a89,	// (0x0000201e) fep_entry_item_pane

0x0a93,	// (0x00002028) fep_candidate_item_pane

0x0a9b,	// (0x00002030) fep_china_uni_candidate_pane_g1

0x0aa5,	// (0x0000203a) fep_china_uni_candidate_pane_g2

0x0aad,	// (0x00002042) fep_china_uni_candidate_pane_g3

0x0ab5,	// (0x0000204a) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fb,	// (0x00010c90) fep_china_uni_candidate_pane_g

0xea2a,	// (0x0000ffbf) fep_entry_item_pane_g1

0x0abf,	// (0x00002054) fep_entry_item_pane_t1_ParamLimits

0x0abf,	// (0x00002054) fep_entry_item_pane_t1

0x0ad5,	// (0x0000206a) fep_candidate_item_pane_t1_ParamLimits

0x0ad5,	// (0x0000206a) fep_candidate_item_pane_t1

0x0aea,	// (0x0000207f) fep_candidate_item_pane_t2_ParamLimits

0x0aea,	// (0x0000207f) fep_candidate_item_pane_t2

0x0001,

0xf704,	// (0x00010c99) fep_candidate_item_pane_t_ParamLimits

0xf704,	// (0x00010c99) fep_candidate_item_pane_t

0xecac,	// (0x00010241) list_highlight_pane_cp31_ParamLimits

0xecac,	// (0x00010241) list_highlight_pane_cp31

0x0afc,	// (0x00002091) level_1_signal_lsc

0x0b05,	// (0x0000209a) level_2_signal_lsc

0x0b0e,	// (0x000020a3) level_3_signal_lsc

0x0b17,	// (0x000020ac) level_4_signal_lsc

0x0b20,	// (0x000020b5) level_5_signal_lsc

0x0b29,	// (0x000020be) level_6_signal_lsc

0x0b32,	// (0x000020c7) level_7_signal_lsc

0x0b32,	// (0x000020c7) level_1_battery_lsc

0x0b3b,	// (0x000020d0) level_2_battery_lsc

0x0b44,	// (0x000020d9) level_3_battery_lsc

0x0b4d,	// (0x000020e2) level_4_battery_lsc

0x0b56,	// (0x000020eb) level_5_battery_lsc

0x0b5f,	// (0x000020f4) level_6_battery_lsc

0x0afc,	// (0x00002091) level_7_battery_lsc

0x0b68,	// (0x000020fd) scroll_handle_focus_pane_g1

0x0b71,	// (0x00002106) scroll_handle_focus_pane_g2

0x0b7a,	// (0x0000210f) scroll_handle_focus_pane_g3

0x0002,

0xf709,	// (0x00010c9e) scroll_handle_focus_pane_g

0xb3a0,	// (0x0000c935) list_single_2graphic_pane_g1_ParamLimits

0xb3a0,	// (0x0000c935) list_single_2graphic_pane_g1

0xabf6,	// (0x0000c18b) list_single_2graphic_pane_g2_ParamLimits

0xabf6,	// (0x0000c18b) list_single_2graphic_pane_g2

0x2117,	// (0x000036ac) list_single_2graphic_pane_g3_ParamLimits

0x2117,	// (0x000036ac) list_single_2graphic_pane_g3

0xb3ac,	// (0x0000c941) list_single_2graphic_pane_g4_ParamLimits

0xb3ac,	// (0x0000c941) list_single_2graphic_pane_g4

0x0003,

0xf710,	// (0x00010ca5) list_single_2graphic_pane_g_ParamLimits

0xf710,	// (0x00010ca5) list_single_2graphic_pane_g

0xb3bd,	// (0x0000c952) list_single_2graphic_pane_t1_ParamLimits

0xb3bd,	// (0x0000c952) list_single_2graphic_pane_t1

0xb3eb,	// (0x0000c980) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb3eb,	// (0x0000c980) list_double2_graphic_large_graphic_pane_g1

0xac61,	// (0x0000c1f6) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xac61,	// (0x0000c1f6) list_double2_graphic_large_graphic_pane_g2

0xac72,	// (0x0000c207) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xac72,	// (0x0000c207) list_double2_graphic_large_graphic_pane_g3

0xb3fd,	// (0x0000c992) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb3fd,	// (0x0000c992) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf719,	// (0x00010cae) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf719,	// (0x00010cae) list_double2_graphic_large_graphic_pane_g

0xb409,	// (0x0000c99e) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb409,	// (0x0000c99e) list_double2_graphic_large_graphic_pane_t1

0xb41f,	// (0x0000c9b4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb41f,	// (0x0000c9b4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf722,	// (0x00010cb7) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf722,	// (0x00010cb7) list_double2_graphic_large_graphic_pane_t

0x0e8f,	// (0x00002424) popup_fast_swap_window_ParamLimits

0x0e8f,	// (0x00002424) popup_fast_swap_window

0x0ead,	// (0x00002442) popup_side_volume_key_window

0x0ecb,	// (0x00002460) stacon_top_pane

0x0ed5,	// (0x0000246a) status_pane_ParamLimits

0x0ed5,	// (0x0000246a) status_pane

0xea20,	// (0x0000ffb5) status_small_pane

0xebf2,	// (0x00010187) control_pane

0xebf2,	// (0x00010187) stacon_bottom_pane

0xf3af,	// (0x00010944) scroll_pane_cp121

0xf3a6,	// (0x0001093b) set_content_pane

0x0c14,	// (0x000021a9) bg_active_tab_pane_g1_cp1

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp1

0x0c26,	// (0x000021bb) bg_active_tab_pane_g3_cp1

0x0c14,	// (0x000021a9) bg_passive_tab_pane_g1_cp1

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp1

0x0c26,	// (0x000021bb) bg_passive_tab_pane_g3_cp1

0x0c2f,	// (0x000021c4) bg_active_tab_pane_g1_cp2

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp2

0x0c38,	// (0x000021cd) bg_active_tab_pane_g3_cp2

0x0c2f,	// (0x000021c4) bg_passive_tab_pane_g1_cp2

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp2

0x0c38,	// (0x000021cd) bg_passive_tab_pane_g3_cp2

0x0c41,	// (0x000021d6) bg_active_tab_pane_g1_cp3

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp3

0x0c4a,	// (0x000021df) bg_active_tab_pane_g3_cp3

0x0c41,	// (0x000021d6) bg_passive_tab_pane_g1_cp3

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp3

0x0c4a,	// (0x000021df) bg_passive_tab_pane_g3_cp3

0x0c53,	// (0x000021e8) bg_active_tab_pane_g1_cp4

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp4

0x0c5e,	// (0x000021f3) bg_active_tab_pane_g3_cp4

0x0c53,	// (0x000021e8) bg_passive_tab_pane_g1_cp4

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp4

0x0c5e,	// (0x000021f3) bg_passive_tab_pane_g3_cp4

0x0de8,	// (0x0000237d) bg_active_tab_pane_g1_cp5

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp5

0x0df1,	// (0x00002386) bg_active_tab_pane_g3_cp5

0x0de8,	// (0x0000237d) bg_passive_tab_pane_g1_cp5

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp5

0x0df1,	// (0x00002386) bg_passive_tab_pane_g3_cp5

0x43f6,	// (0x0000598b) list_set_graphic_pane_ParamLimits

0x43f6,	// (0x0000598b) list_set_graphic_pane

0xebf2,	// (0x00010187) bg_set_opt_pane_cp4

0x0e10,	// (0x000023a5) list_set_graphic_pane_g1_ParamLimits

0x0e10,	// (0x000023a5) list_set_graphic_pane_g1

0x0e1c,	// (0x000023b1) list_set_graphic_pane_g2_ParamLimits

0x0e1c,	// (0x000023b1) list_set_graphic_pane_g2

0x0001,

0xf727,	// (0x00010cbc) list_set_graphic_pane_g_ParamLimits

0xf727,	// (0x00010cbc) list_set_graphic_pane_g

0x0009,

0xfaaa,	// (0x0001103f) volume_small_pane_cp_g

0x0e40,	// (0x000023d5) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0e40,	// (0x000023d5) list_double2_large_graphic_pane_g1_cp2

0x0e4e,	// (0x000023e3) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0e4e,	// (0x000023e3) list_double2_large_graphic_pane_g2_cp2

0x0e5f,	// (0x000023f4) list_double2_large_graphic_pane_g3_cp2

0x0e67,	// (0x000023fc) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0e67,	// (0x000023fc) list_double2_large_graphic_pane_t1_cp2

0x0e7d,	// (0x00002412) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0e7d,	// (0x00002412) list_double2_large_graphic_pane_t2_cp2

0x36a7,	// (0x00004c3c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x36a7,	// (0x00004c3c) list_double_large_graphic_pane_g1_cp2

0x36ba,	// (0x00004c4f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x36ba,	// (0x00004c4f) list_double_large_graphic_pane_g2_cp2

0x0ff3,	// (0x00002588) list_double_large_graphic_pane_g3_cp2

0x36cb,	// (0x00004c60) list_double_large_graphic_pane_g4_cp

0x36d3,	// (0x00004c68) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x36d3,	// (0x00004c68) list_double_large_graphic_pane_t1_cp2

0x36ea,	// (0x00004c7f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x36ea,	// (0x00004c7f) list_double_large_graphic_pane_t2_cp2

0x0ee3,	// (0x00002478) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0ee3,	// (0x00002478) list_double2_graphic_pane_g1_cp2

0x0ef1,	// (0x00002486) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0ef1,	// (0x00002486) list_double2_graphic_pane_g2_cp2

0x0f02,	// (0x00002497) list_double2_graphic_pane_g3_cp2

0x0f0c,	// (0x000024a1) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0f0c,	// (0x000024a1) list_double2_graphic_pane_t1_cp2

0x0f22,	// (0x000024b7) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0f22,	// (0x000024b7) list_double2_graphic_pane_t2_cp2

0x0f34,	// (0x000024c9) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0f34,	// (0x000024c9) list_single_number_heading_pane_g1_cp2

0x0f40,	// (0x000024d5) list_single_number_heading_pane_g2_cp2

0x0f48,	// (0x000024dd) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0f48,	// (0x000024dd) list_single_number_heading_pane_t1_cp2

0x0f5e,	// (0x000024f3) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0f5e,	// (0x000024f3) list_single_number_heading_pane_t2_cp2

0x0f72,	// (0x00002507) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0f72,	// (0x00002507) list_single_number_heading_pane_t3_cp2

0x0f34,	// (0x000024c9) list_single_heading_pane_g1_cp2_ParamLimits

0x0f34,	// (0x000024c9) list_single_heading_pane_g1_cp2

0x0f40,	// (0x000024d5) list_single_heading_pane_g2_cp2

0x0f48,	// (0x000024dd) list_single_heading_pane_t1_cp2_ParamLimits

0x0f48,	// (0x000024dd) list_single_heading_pane_t1_cp2

0x34a1,	// (0x00004a36) list_single_heading_pane_t2_cp2_ParamLimits

0x34a1,	// (0x00004a36) list_single_heading_pane_t2_cp2

0x33e9,	// (0x0000497e) list_double_graphic_pane_g1_cp2_ParamLimits

0x33e9,	// (0x0000497e) list_double_graphic_pane_g1_cp2

0x33f5,	// (0x0000498a) list_double_graphic_pane_g2_cp2_ParamLimits

0x33f5,	// (0x0000498a) list_double_graphic_pane_g2_cp2

0x3404,	// (0x00004999) list_double_graphic_pane_g3_cp2

0x340c,	// (0x000049a1) list_double_graphic_pane_t1_cp2_ParamLimits

0x340c,	// (0x000049a1) list_double_graphic_pane_t1_cp2

0x3422,	// (0x000049b7) list_double_graphic_pane_t2_cp2_ParamLimits

0x3422,	// (0x000049b7) list_double_graphic_pane_t2_cp2

0x0fe7,	// (0x0000257c) list_double_number_pane_g1_cp2_ParamLimits

0x0fe7,	// (0x0000257c) list_double_number_pane_g1_cp2

0x0ff3,	// (0x00002588) list_double_number_pane_g2_cp2

0x33ad,	// (0x00004942) list_double_number_pane_t1_cp2_ParamLimits

0x33ad,	// (0x00004942) list_double_number_pane_t1_cp2

0x33c1,	// (0x00004956) list_double_number_pane_t2_cp2_ParamLimits

0x33c1,	// (0x00004956) list_double_number_pane_t2_cp2

0x33d7,	// (0x0000496c) list_double_number_pane_t3_cp2_ParamLimits

0x33d7,	// (0x0000496c) list_double_number_pane_t3_cp2

0x3285,	// (0x0000481a) list_single_graphic_pane_g1_cp2_ParamLimits

0x3285,	// (0x0000481a) list_single_graphic_pane_g1_cp2

0x105c,	// (0x000025f1) list_single_graphic_pane_g2_cp2_ParamLimits

0x105c,	// (0x000025f1) list_single_graphic_pane_g2_cp2

0x1068,	// (0x000025fd) list_single_graphic_pane_g3_cp2

0x325b,	// (0x000047f0) list_single_graphic_pane_t1_cp2_ParamLimits

0x325b,	// (0x000047f0) list_single_graphic_pane_t1_cp2

0x105c,	// (0x000025f1) list_single_number_pane_g1_cp2_ParamLimits

0x105c,	// (0x000025f1) list_single_number_pane_g1_cp2

0x1068,	// (0x000025fd) list_single_number_pane_g2_cp2

0x325b,	// (0x000047f0) list_single_number_pane_t1_cp2_ParamLimits

0x325b,	// (0x000047f0) list_single_number_pane_t1_cp2

0x3271,	// (0x00004806) list_single_number_pane_t2_cp2_ParamLimits

0x3271,	// (0x00004806) list_single_number_pane_t2_cp2

0x0e4e,	// (0x000023e3) list_double2_pane_g1_cp2_ParamLimits

0x0e4e,	// (0x000023e3) list_double2_pane_g1_cp2

0x0e5f,	// (0x000023f4) list_double2_pane_g2_cp2

0x0fbf,	// (0x00002554) list_double2_pane_t1_cp2_ParamLimits

0x0fbf,	// (0x00002554) list_double2_pane_t1_cp2

0x0fd5,	// (0x0000256a) list_double2_pane_t2_cp2_ParamLimits

0x0fd5,	// (0x0000256a) list_double2_pane_t2_cp2

0x0fe7,	// (0x0000257c) list_double_pane_g1_cp2_ParamLimits

0x0fe7,	// (0x0000257c) list_double_pane_g1_cp2

0x0ff3,	// (0x00002588) list_double_pane_g2_cp2

0x0ffb,	// (0x00002590) list_double_pane_t1_cp2_ParamLimits

0x0ffb,	// (0x00002590) list_double_pane_t1_cp2

0x1011,	// (0x000025a6) list_double_pane_t2_cp2_ParamLimits

0x1011,	// (0x000025a6) list_double_pane_t2_cp2

0x104c,	// (0x000025e1) list_single_pane_cp2_g3

0x105c,	// (0x000025f1) list_single_pane_g1_cp2_ParamLimits

0x105c,	// (0x000025f1) list_single_pane_g1_cp2

0x1068,	// (0x000025fd) list_single_pane_g2_cp2

0x1070,	// (0x00002605) list_single_pane_t1_cp2_ParamLimits

0x1070,	// (0x00002605) list_single_pane_t1_cp2

0x1088,	// (0x0000261d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1088,	// (0x0000261d) list_single_large_graphic_pane_g1_cp2

0x1096,	// (0x0000262b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1096,	// (0x0000262b) list_single_large_graphic_pane_g2_cp2

0x10a2,	// (0x00002637) list_single_large_graphic_pane_g3_cp2

0x10aa,	// (0x0000263f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x10aa,	// (0x0000263f) list_single_large_graphic_pane_g4_cp1

0x10c4,	// (0x00002659) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x10c4,	// (0x00002659) list_single_large_graphic_pane_t1_cp2

0x30ca,	// (0x0000465f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x30ca,	// (0x0000465f) list_single_graphic_heading_pane_g1_cp2

0x3097,	// (0x0000462c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3097,	// (0x0000462c) list_single_graphic_heading_pane_g4_cp2

0x1068,	// (0x000025fd) list_single_graphic_heading_pane_g5_cp2

0x30d6,	// (0x0000466b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x30d6,	// (0x0000466b) list_single_graphic_heading_pane_t1_cp2

0x30ec,	// (0x00004681) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x30ec,	// (0x00004681) list_single_graphic_heading_pane_t2_cp2

0x308b,	// (0x00004620) list_single_2graphic_pane_g1_cp2_ParamLimits

0x308b,	// (0x00004620) list_single_2graphic_pane_g1_cp2

0x3097,	// (0x0000462c) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3097,	// (0x0000462c) list_single_2graphic_pane_g2_cp2

0x1068,	// (0x000025fd) list_single_2graphic_pane_g3_cp2

0x30a8,	// (0x0000463d) list_single_2graphic_pane_g4_cp2_ParamLimits

0x30a8,	// (0x0000463d) list_single_2graphic_pane_g4_cp2

0x30b4,	// (0x00004649) list_single_2graphic_pane_t1_cp2_ParamLimits

0x30b4,	// (0x00004649) list_single_2graphic_pane_t1_cp2

0xea2a,	// (0x0000ffbf) list_highlight_pane_g10_cp1

0x2c63,	// (0x000041f8) list_highlight_pane_g1_cp1

0x2c6b,	// (0x00004200) list_highlight_pane_g2_cp1

0x2c73,	// (0x00004208) list_highlight_pane_g3_cp1

0x2c7b,	// (0x00004210) list_highlight_pane_g4_cp1

0x2c83,	// (0x00004218) list_highlight_pane_g5_cp1

0x2c8b,	// (0x00004220) list_highlight_pane_g6_cp1

0x2c93,	// (0x00004228) list_highlight_pane_g7_cp1

0x2c9b,	// (0x00004230) list_highlight_pane_g8_cp1

0x2ca3,	// (0x00004238) list_highlight_pane_g9_cp1

0xc2c7,	// (0x0000d85c) form_field_slider_pane_t3

0xc2d5,	// (0x0000d86a) form_field_slider_pane_t4

0x2b9f,	// (0x00004134) slider_form_pane_ParamLimits

0x2b9f,	// (0x00004134) slider_form_pane

0xebf2,	// (0x00010187) control_abbreviations

0xebf2,	// (0x00010187) control_conventions

0xebf2,	// (0x00010187) control_definitions

0xebf2,	// (0x00010187) format_table_attribute

0x34f7,	// (0x00004a8c) bg_popup_preview_window_pane_g9

0xebf2,	// (0x00010187) format_table_data2

0xebf2,	// (0x00010187) format_table_data3

0xebf2,	// (0x00010187) format_table_data_example

0x0008,

0xebf2,	// (0x00010187) intro_purpose

0xf8b7,	// (0x00010e4c) bg_popup_preview_window_pane_g

0xebf2,	// (0x00010187) texts_category

0xebf2,	// (0x00010187) texts_graphics

0x10da,	// (0x0000266f) text_digital

0x10e9,	// (0x0000267e) text_primary

0x10f8,	// (0x0000268d) text_primary_small

0x1107,	// (0x0000269c) text_secondary

0x1116,	// (0x000026ab) text_title

0x3df5,	// (0x0000538a) bg_passive_tab_pane_g1_cp3_srt

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp3_srt

0x3dfe,	// (0x00005393) bg_passive_tab_pane_g3_cp3_srt

0xec94,	// (0x00010229) bg_active_tab_pane_cp3_srt_ParamLimits

0xec94,	// (0x00010229) bg_active_tab_pane_cp3_srt

0x3e07,	// (0x0000539c) tabs_4_active_pane_srt_g1

0xc756,	// (0x0000dceb) tabs_4_active_pane_srt_t1_ParamLimits

0xc756,	// (0x0000dceb) tabs_4_active_pane_srt_t1

0x3df5,	// (0x0000538a) bg_active_tab_pane_g1_cp3_copy1

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp3_copy1

0x3dfe,	// (0x00005393) bg_active_tab_pane_g3_cp3_copy1

0xecac,	// (0x00010241) tabs_2_long_active_pane_srt_ParamLimits

0xecac,	// (0x00010241) tabs_2_long_active_pane_srt

0xecac,	// (0x00010241) tabs_2_long_passive_pane_srt_ParamLimits

0xecac,	// (0x00010241) tabs_2_long_passive_pane_srt

0x1656,	// (0x00002beb) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1656,	// (0x00002beb) bg_passive_tab_pane_cp4_srt

0x39ad,	// (0x00004f42) bg_passive_tab_pane_g1_cp4_srt

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp4_srt

0x39b6,	// (0x00004f4b) bg_passive_tab_pane_g3_cp4_srt

0xecac,	// (0x00010241) bg_active_tab_pane_cp4_srt_ParamLimits

0xecac,	// (0x00010241) bg_active_tab_pane_cp4_srt

0xc509,	// (0x0000da9e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc509,	// (0x0000da9e) tabs_2_long_active_pane_srt_t1

0x39ad,	// (0x00004f42) bg_active_tab_pane_g1_cp4_srt

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp4_srt

0x39b6,	// (0x00004f4b) bg_active_tab_pane_g3_cp4_srt

0xec94,	// (0x00010229) tabs_3_long_active_pane_srt_ParamLimits

0xec94,	// (0x00010229) tabs_3_long_active_pane_srt

0xec94,	// (0x00010229) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xec94,	// (0x00010229) tabs_3_long_passive_pane_cp_srt

0xec94,	// (0x00010229) tabs_3_long_passive_pane_srt_ParamLimits

0xec94,	// (0x00010229) tabs_3_long_passive_pane_srt

0x1656,	// (0x00002beb) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1656,	// (0x00002beb) bg_passive_tab_pane_cp5_srt

0x0de8,	// (0x0000237d) bg_passive_tab_pane_g1_cp5_srt

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp5_srt

0x0df1,	// (0x00002386) bg_passive_tab_pane_g3_cp5_srt

0xecac,	// (0x00010241) bg_active_tab_pane_cp5_srt_ParamLimits

0xecac,	// (0x00010241) bg_active_tab_pane_cp5_srt

0xc4f3,	// (0x0000da88) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc4f3,	// (0x0000da88) tabs_3_long_active_pane_srt_t1

0x0de8,	// (0x0000237d) bg_active_tab_pane_g1_cp5_srt

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp5_srt

0x0df1,	// (0x00002386) bg_active_tab_pane_g3_cp5_srt

0x398d,	// (0x00004f22) navi_text_pane_srt_t1

0x3985,	// (0x00004f1a) navi_icon_pane_srt_g1

0x1397,	// (0x0000292c) midp_editing_number_pane_srt

0x1125,	// (0x000026ba) midp_ticker_pane_srt

0x139f,	// (0x00002934) midp_ticker_pane_srt_g1

0x13a7,	// (0x0000293c) midp_ticker_pane_srt_g2

0x0001,

0xf746,	// (0x00010cdb) midp_ticker_pane_srt_g

0x13af,	// (0x00002944) midp_ticker_pane_srt_t1

0x3976,	// (0x00004f0b) midp_editing_number_pane_t1_copy1

0xb431,	// (0x0000c9c6) listscroll_midp_pane

0xb431,	// (0x0000c9c6) midp_form_pane

0x119c,	// (0x00002731) midp_info_popup_window_ParamLimits

0x119c,	// (0x00002731) midp_info_popup_window

0x0104,	// (0x00001699) bg_popup_sub_pane_cp50_ParamLimits

0x0104,	// (0x00001699) bg_popup_sub_pane_cp50

0x2885,	// (0x00003e1a) listscroll_midp_info_pane_ParamLimits

0x2885,	// (0x00003e1a) listscroll_midp_info_pane

0x2865,	// (0x00003dfa) listscroll_form_midp_pane_ParamLimits

0x2865,	// (0x00003dfa) listscroll_form_midp_pane

0x2871,	// (0x00003e06) scroll_bar_cp050

0x2865,	// (0x00003dfa) list_midp_pane

0x4cba,	// (0x0000624f) signal_pane_g2_cp

0x277f,	// (0x00003d14) listscroll_midp_info_pane_t1_ParamLimits

0x277f,	// (0x00003d14) listscroll_midp_info_pane_t1

0x2797,	// (0x00003d2c) listscroll_midp_info_pane_t2_ParamLimits

0x2797,	// (0x00003d2c) listscroll_midp_info_pane_t2

0x27d5,	// (0x00003d6a) listscroll_midp_info_pane_t3_ParamLimits

0x27d5,	// (0x00003d6a) listscroll_midp_info_pane_t3

0x280f,	// (0x00003da4) listscroll_midp_info_pane_t4_ParamLimits

0x280f,	// (0x00003da4) listscroll_midp_info_pane_t4

0x0003,

0xf7f2,	// (0x00010d87) listscroll_midp_info_pane_t_ParamLimits

0xf7f2,	// (0x00010d87) listscroll_midp_info_pane_t

0x0167,	// (0x000016fc) scroll_pane_cp21

0x2719,	// (0x00003cae) form_midp_field_choice_group_pane

0x2722,	// (0x00003cb7) form_midp_field_text_pane

0x2765,	// (0x00003cfa) form_midp_field_time_pane

0x276d,	// (0x00003d02) form_midp_gauge_slider_pane

0x2776,	// (0x00003d0b) form_midp_gauge_wait_pane

0xebf2,	// (0x00010187) form_midp_image_pane

0xc2aa,	// (0x0000d83f) list_single_midp_pane_ParamLimits

0xc2aa,	// (0x0000d83f) list_single_midp_pane

0xc285,	// (0x0000d81a) form_midp_field_text_pane_t1

0x2412,	// (0x000039a7) input_focus_pane_cp050

0x26e8,	// (0x00003c7d) list_midp_form_text_pane

0x268c,	// (0x00003c21) form_midp_field_choice_group_pane_t1

0x269a,	// (0x00003c2f) input_focus_pane_cp051

0x26ae,	// (0x00003c43) list_midp_choice_pane

0xebf2,	// (0x00010187) status_idle_pane

0x2670,	// (0x00003c05) form_midp_field_time_pane_t1

0xea2a,	// (0x0000ffbf) wait_anim_pane_g2_copy1

0x267e,	// (0x00003c13) form_midp_field_time_pane_t2

0x0001,

0x124c,	// (0x000027e1) aid_navinavi_width_2_pane

0xf7ed,	// (0x00010d82) form_midp_field_time_pane_t

0xebf2,	// (0x00010187) input_focus_pane_cp052

0xebf2,	// (0x00010187) bg_input_focus_pane_cp040

0x2630,	// (0x00003bc5) form_midp_gauge_slider_pane_t1

0x263e,	// (0x00003bd3) form_midp_gauge_slider_pane_t2

0xc269,	// (0x0000d7fe) form_midp_gauge_slider_pane_t3

0xc277,	// (0x0000d80c) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e4,	// (0x00010d79) form_midp_gauge_slider_pane_t

0x2668,	// (0x00003bfd) form_midp_slider_pane

0xecac,	// (0x00010241) bg_input_focus_pane_cp041_ParamLimits

0xecac,	// (0x00010241) bg_input_focus_pane_cp041

0x25fd,	// (0x00003b92) form_midp_gauge_wait_pane_t1_ParamLimits

0x25fd,	// (0x00003b92) form_midp_gauge_wait_pane_t1

0x260f,	// (0x00003ba4) form_midp_gauge_wait_pane_t2_ParamLimits

0x260f,	// (0x00003ba4) form_midp_gauge_wait_pane_t2

0x0001,

0xf7df,	// (0x00010d74) form_midp_gauge_wait_pane_t_ParamLimits

0xf7df,	// (0x00010d74) form_midp_gauge_wait_pane_t

0x2621,	// (0x00003bb6) form_midp_wait_pane_ParamLimits

0x2621,	// (0x00003bb6) form_midp_wait_pane

0x25c5,	// (0x00003b5a) form_midp_image_pane_g1

0x25ce,	// (0x00003b63) form_midp_image_pane_t1

0x25dd,	// (0x00003b72) form_midp_image_pane_t2

0x25ec,	// (0x00003b81) form_midp_image_pane_t3

0x0002,

0xf7d8,	// (0x00010d6d) form_midp_image_pane_t

0x25ad,	// (0x00003b42) list_single_midp_pane_g1

0x25b6,	// (0x00003b4b) list_single_midp_pane_t1

0xc252,	// (0x0000d7e7) list_midp_form_item_pane_ParamLimits

0xc252,	// (0x0000d7e7) list_midp_form_item_pane

0x11f4,	// (0x00002789) list_midp_form_item_pane_t1

0x1203,	// (0x00002798) midp_ticker_pane_g1

0x120f,	// (0x000027a4) midp_ticker_pane_g2

0x0001,

0xf72c,	// (0x00010cc1) midp_ticker_pane_g

0xb4d5,	// (0x0000ca6a) midp_ticker_pane_t1

0xc6ae,	// (0x0000dc43) midp_editing_number_pane_t1

0x3c6e,	// (0x00005203) midp_editing_number_pane

0x3c7d,	// (0x00005212) midp_ticker_pane

0x2891,	// (0x00003e26) ai_message_heading_pane

0xebf2,	// (0x00010187) bg_popup_window_pane_cp14

0x2899,	// (0x00003e2e) listscroll_ai_message_pane

0x38d4,	// (0x00004e69) ai_message_heading_pane_g1_ParamLimits

0x38d4,	// (0x00004e69) ai_message_heading_pane_g1

0x38e0,	// (0x00004e75) ai_message_heading_pane_g2_ParamLimits

0x38e0,	// (0x00004e75) ai_message_heading_pane_g2

0x38ee,	// (0x00004e83) ai_message_heading_pane_g3_ParamLimits

0x38ee,	// (0x00004e83) ai_message_heading_pane_g3

0x38fa,	// (0x00004e8f) ai_message_heading_pane_g4_ParamLimits

0x38fa,	// (0x00004e8f) ai_message_heading_pane_g4

0x0003,

0xf919,	// (0x00010eae) ai_message_heading_pane_g_ParamLimits

0xf919,	// (0x00010eae) ai_message_heading_pane_g

0x3906,	// (0x00004e9b) ai_message_heading_pane_t1_ParamLimits

0x3906,	// (0x00004e9b) ai_message_heading_pane_t1

0x3920,	// (0x00004eb5) ai_message_heading_pane_t2_ParamLimits

0x3920,	// (0x00004eb5) ai_message_heading_pane_t2

0x0001,

0xf922,	// (0x00010eb7) ai_message_heading_pane_t_ParamLimits

0xf922,	// (0x00010eb7) ai_message_heading_pane_t

0x3934,	// (0x00004ec9) bg_popup_heading_pane_cp1_ParamLimits

0x3934,	// (0x00004ec9) bg_popup_heading_pane_cp1

0x38c2,	// (0x00004e57) list_ai_message_pane_ParamLimits

0x38c2,	// (0x00004e57) list_ai_message_pane

0x0167,	// (0x000016fc) scroll_pane_cp10

0x37fa,	// (0x00004d8f) list_ai_message_pane_g1

0x3802,	// (0x00004d97) list_ai_message_pane_g2

0x0001,

0xf8f6,	// (0x00010e8b) list_ai_message_pane_g

0x380a,	// (0x00004d9f) list_ai_message_pane_t1_ParamLimits

0x380a,	// (0x00004d9f) list_ai_message_pane_t1

0x381f,	// (0x00004db4) list_ai_message_pane_t2_ParamLimits

0x381f,	// (0x00004db4) list_ai_message_pane_t2

0x3834,	// (0x00004dc9) list_ai_message_pane_t3_ParamLimits

0x3834,	// (0x00004dc9) list_ai_message_pane_t3

0x3849,	// (0x00004dde) list_ai_message_pane_t4_ParamLimits

0x3849,	// (0x00004dde) list_ai_message_pane_t4

0x0003,

0xf8fb,	// (0x00010e90) list_ai_message_pane_t_ParamLimits

0xf8fb,	// (0x00010e90) list_ai_message_pane_t

0xc4d9,	// (0x0000da6e) cell_ai_soft_ind_pane_ParamLimits

0xc4d9,	// (0x0000da6e) cell_ai_soft_ind_pane

0x122d,	// (0x000027c2) cell_ai_soft_ind_pane_g1_ParamLimits

0x122d,	// (0x000027c2) cell_ai_soft_ind_pane_g1

0xebf2,	// (0x00010187) grid_highlight_cp1

0x123a,	// (0x000027cf) text_secondary_cp56_ParamLimits

0x123a,	// (0x000027cf) text_secondary_cp56

0x37b8,	// (0x00004d4d) example_general_pane_ParamLimits

0x37b8,	// (0x00004d4d) example_general_pane

0x37c4,	// (0x00004d59) example_parent_pane_g1_ParamLimits

0x37c4,	// (0x00004d59) example_parent_pane_g1

0x37d0,	// (0x00004d65) example_parent_pane_t1_ParamLimits

0x37d0,	// (0x00004d65) example_parent_pane_t1

0xba4b,	// (0x0000cfe0) popup_preview_text_window_ParamLimits

0xba4b,	// (0x0000cfe0) popup_preview_text_window

0x1054,	// (0x000025e9) list_single_pane_cp2_g4

0xef50,	// (0x000104e5) bg_popup_preview_window_pane_ParamLimits

0xef50,	// (0x000104e5) bg_popup_preview_window_pane

0x3501,	// (0x00004a96) popup_preview_text_window_t1_ParamLimits

0x3501,	// (0x00004a96) popup_preview_text_window_t1

0x351f,	// (0x00004ab4) popup_preview_text_window_t2_ParamLimits

0x351f,	// (0x00004ab4) popup_preview_text_window_t2

0x3568,	// (0x00004afd) popup_preview_text_window_t3_ParamLimits

0x3568,	// (0x00004afd) popup_preview_text_window_t3

0x35ad,	// (0x00004b42) popup_preview_text_window_t4_ParamLimits

0x35ad,	// (0x00004b42) popup_preview_text_window_t4

0x0004,

0xf8ca,	// (0x00010e5f) popup_preview_text_window_t_ParamLimits

0xf8ca,	// (0x00010e5f) popup_preview_text_window_t

0x362b,	// (0x00004bc0) scroll_pane_cp11

0x2273,	// (0x00003808) bg_popup_preview_window_pane_g1

0x34b5,	// (0x00004a4a) bg_popup_preview_window_pane_g2

0x34bf,	// (0x00004a54) bg_popup_preview_window_pane_g3

0x34c9,	// (0x00004a5e) bg_popup_preview_window_pane_g4

0x34d3,	// (0x00004a68) bg_popup_preview_window_pane_g5

0x34dd,	// (0x00004a72) bg_popup_preview_window_pane_g6

0x34e5,	// (0x00004a7a) bg_popup_preview_window_pane_g7

0x34ed,	// (0x00004a82) bg_popup_preview_window_pane_g8

0xea40,	// (0x0000ffd5) aid_popup_width_pane

0xb9bb,	// (0x0000cf50) popup_midp_note_alarm_window_ParamLimits

0xb9bb,	// (0x0000cf50) popup_midp_note_alarm_window

0xf418,	// (0x000109ad) data_form_pane_ParamLimits

0xaffc,	// (0x0000c591) form_field_data_pane_g1

0xb006,	// (0x0000c59b) form_field_data_pane_t1_ParamLimits

0xf424,	// (0x000109b9) input_focus_pane_ParamLimits

0xf432,	// (0x000109c7) data_form_wide_pane_ParamLimits

0xf43e,	// (0x000109d3) form_field_data_wide_pane_g1

0xf46a,	// (0x000109ff) form_field_data_wide_pane_t1_ParamLimits

0xf10c,	// (0x000106a1) input_focus_pane_cp6_ParamLimits

0xb136,	// (0x0000c6cb) input_popup_find_pane_g1_ParamLimits

0xb136,	// (0x0000c6cb) input_popup_find_pane_g1

0x0497,	// (0x00001a2c) aid_navi_side_left_pane

0x04ac,	// (0x00001a41) aid_navi_side_right_pane

0x2d5e,	// (0x000042f3) bg_popup_window_pane_cp30_ParamLimits

0x2d5e,	// (0x000042f3) bg_popup_window_pane_cp30

0x2dd8,	// (0x0000436d) popup_midp_note_alarm_window_g1_ParamLimits

0x2dd8,	// (0x0000436d) popup_midp_note_alarm_window_g1

0x2e08,	// (0x0000439d) popup_midp_note_alarm_window_t1_ParamLimits

0x2e08,	// (0x0000439d) popup_midp_note_alarm_window_t1

0x2ea9,	// (0x0000443e) popup_midp_note_alarm_window_t2_ParamLimits

0x2ea9,	// (0x0000443e) popup_midp_note_alarm_window_t2

0x2f57,	// (0x000044ec) popup_midp_note_alarm_window_t3_ParamLimits

0x2f57,	// (0x000044ec) popup_midp_note_alarm_window_t3

0x2f89,	// (0x0000451e) popup_midp_note_alarm_window_t4_ParamLimits

0x2f89,	// (0x0000451e) popup_midp_note_alarm_window_t4

0x2faf,	// (0x00004544) popup_midp_note_alarm_window_t5_ParamLimits

0x2faf,	// (0x00004544) popup_midp_note_alarm_window_t5

0x000a,

0xf867,	// (0x00010dfc) popup_midp_note_alarm_window_t_ParamLimits

0xf867,	// (0x00010dfc) popup_midp_note_alarm_window_t

0x305b,	// (0x000045f0) wait_bar_pane_cp1_ParamLimits

0x305b,	// (0x000045f0) wait_bar_pane_cp1

0xebf2,	// (0x00010187) wait_anim_pane_copy1

0xebf2,	// (0x00010187) wait_border_pane_copy1

0x2a43,	// (0x00003fd8) wait_border_pane_g1_copy1

0xf481,	// (0x00010a16) form_field_popup_pane_g1

0xb020,	// (0x0000c5b5) form_field_popup_pane_t1_ParamLimits

0xf424,	// (0x000109b9) input_focus_pane_cp7_ParamLimits

0xf489,	// (0x00010a1e) list_form_pane_ParamLimits

0xf495,	// (0x00010a2a) form_field_popup_wide_pane_g1

0xf49d,	// (0x00010a32) form_field_popup_wide_pane_t1_ParamLimits

0xf424,	// (0x000109b9) input_focus_pane_cp8_ParamLimits

0xf4af,	// (0x00010a44) list_form_wide_pane_ParamLimits

0x3e99,	// (0x0000542e) aid_size_cell_graphic_pane

0xb09f,	// (0x0000c634) data_form_pane_t1_ParamLimits

0xc692,	// (0x0000dc27) data_form_wide_pane_t1_ParamLimits

0xbe4d,	// (0x0000d3e2) bg_status_flat_pane

0xa81f,	// (0x0000bdb4) title_pane_t1_ParamLimits

0xec5c,	// (0x000101f1) title_pane_t2_ParamLimits

0xec82,	// (0x00010217) title_pane_t3_ParamLimits

0xf530,	// (0x00010ac5) title_pane_t_ParamLimits

0xb279,	// (0x0000c80e) level_1_signal_ParamLimits

0xb28b,	// (0x0000c820) level_2_signal_ParamLimits

0xb29e,	// (0x0000c833) level_3_signal_ParamLimits

0xb2b1,	// (0x0000c846) level_4_signal_ParamLimits

0xb2c4,	// (0x0000c859) level_5_signal_ParamLimits

0xb2d7,	// (0x0000c86c) level_6_signal_ParamLimits

0xb2ea,	// (0x0000c87f) level_7_signal_ParamLimits

0xb279,	// (0x0000c80e) level_1_battery_ParamLimits

0xb28b,	// (0x0000c820) level_2_battery_ParamLimits

0xb29e,	// (0x0000c833) level_3_battery_ParamLimits

0xb2b1,	// (0x0000c846) level_4_battery_ParamLimits

0xb2c4,	// (0x0000c859) level_5_battery_ParamLimits

0xb2d7,	// (0x0000c86c) level_6_battery_ParamLimits

0xb2ea,	// (0x0000c87f) level_7_battery_ParamLimits

0x2c63,	// (0x000041f8) bg_status_flat_pane_g1

0x2c6b,	// (0x00004200) bg_status_flat_pane_g2

0x2c73,	// (0x00004208) bg_status_flat_pane_g3

0x2c7b,	// (0x00004210) bg_status_flat_pane_g4

0x2c83,	// (0x00004218) bg_status_flat_pane_g5

0x2c8b,	// (0x00004220) bg_status_flat_pane_g6

0x2c93,	// (0x00004228) bg_status_flat_pane_g7

0xa8b3,	// (0x0000be48) tabs_3_active_pane_t1_ParamLimits

0xa8b3,	// (0x0000be48) tabs_3_passive_pane_t1_ParamLimits

0xa8cd,	// (0x0000be62) tabs_4_active_pane_t1_ParamLimits

0xa8cd,	// (0x0000be62) tabs_4_1_passive_pane_t1_ParamLimits

0xb14c,	// (0x0000c6e1) tabs_2_active_pane_t1_ParamLimits

0xb14c,	// (0x0000c6e1) tabs_2_passive_pane_t1_ParamLimits

0xecac,	// (0x00010241) bg_active_tab_pane_cp4_ParamLimits

0xb15e,	// (0x0000c6f3) tabs_2_long_active_pane_t1_ParamLimits

0x1656,	// (0x00002beb) bg_passive_tab_pane_cp4_ParamLimits

0x2333,	// (0x000038c8) list_single_midp_graphic_pane_t1_ParamLimits

0xecac,	// (0x00010241) bg_active_tab_pane_cp5_ParamLimits

0xb171,	// (0x0000c706) tabs_3_long_active_pane_t1_ParamLimits

0x1656,	// (0x00002beb) bg_passive_tab_pane_cp5_ParamLimits

0x2333,	// (0x000038c8) list_single_midp_graphic_pane_t1

0xbe4d,	// (0x0000d3e2) bg_status_flat_pane_ParamLimits

0x1e49,	// (0x000033de) indicator_pane_cp2_ParamLimits

0x1e49,	// (0x000033de) indicator_pane_cp2

0xbfe1,	// (0x0000d576) navi_pane_srt_ParamLimits

0xbfe1,	// (0x0000d576) navi_pane_srt

0x1fae,	// (0x00003543) popup_clock_digital_analogue_window_cp1

0xed93,	// (0x00010328) indicator_pane_t1

0x1125,	// (0x000026ba) copy_highlight_pane

0x1125,	// (0x000026ba) cursor_graphics_pane

0x1125,	// (0x000026ba) graphic_within_text_pane

0x1125,	// (0x000026ba) link_highlight_pane

0x35ee,	// (0x00004b83) popup_preview_text_window_t5_ParamLimits

0x35ee,	// (0x00004b83) popup_preview_text_window_t5

0x1256,	// (0x000027eb) cursor_digital_pane

0x1256,	// (0x000027eb) cursor_primary_pane

0x1267,	// (0x000027fc) cursor_primary_small_pane

0x126f,	// (0x00002804) cursor_secondary_pane

0x1277,	// (0x0000280c) cursor_title_pane

0x1256,	// (0x000027eb) link_highlight_digital_pane

0x125e,	// (0x000027f3) link_highlight_primary_pane

0x1267,	// (0x000027fc) link_highlight_primary_small_pane

0x126f,	// (0x00002804) link_highlight_secondary_pane

0x1277,	// (0x0000280c) link_highlight_title_pane

0x1256,	// (0x000027eb) copy_highlight_digital_pane

0x1256,	// (0x000027eb) copy_highlight_primary_pane

0x1267,	// (0x000027fc) copy_highlight_primary_small_pane

0x126f,	// (0x00002804) copy_highlight_secondary_pane

0x1277,	// (0x0000280c) copy_highlight_title_pane

0x126f,	// (0x00002804) graphic_text_digital_pane

0x2d01,	// (0x00004296) graphic_text_primary_pane

0x2d0a,	// (0x0000429f) graphic_text_primary_small_pane

0x1267,	// (0x000027fc) graphic_text_secondary_pane

0x1256,	// (0x000027eb) graphic_text_title_pane

0xb4e7,	// (0x0000ca7c) cursor_primary_pane_g1

0x2cf3,	// (0x00004288) cursor_text_primary_t1

0xc2f7,	// (0x0000d88c) cursor_primary_small_pane_g1

0x2ce5,	// (0x0000427a) cursor_text_primary_small_t1

0xc2ed,	// (0x0000d882) cursor_primary_small_pane_g1_copy1

0x2ccd,	// (0x00004262) cursor_text_primary_small_t1_copy1

0x2cab,	// (0x00004240) cursor_text_title_t1

0xc2e3,	// (0x0000d878) cursor_title_pane_g1

0xb4e7,	// (0x0000ca7c) cursor_digital_pane_g1

0x1289,	// (0x0000281e) cursor_text_digital_t1

0x1297,	// (0x0000282c) link_highlight_primary_pane_g1

0x2c54,	// (0x000041e9) link_highlight_primary_pane_t1

0x1297,	// (0x0000282c) link_highlight_primary_small_pane_g1

0x129f,	// (0x00002834) link_highlight_primary_small_pane_t1

0x12ae,	// (0x00002843) link_highlight_secondary_pane_g1

0x12b6,	// (0x0000284b) link_highlight_secondary_pane_t1

0x2bc8,	// (0x0000415d) link_highlight_title_pane_g1

0x2bd0,	// (0x00004165) link_highlight_title_pane_t1

0x2bb1,	// (0x00004146) link_highlight_digital_pane_g1

0x2bb9,	// (0x0000414e) link_highlight_digital_pane_t1

0x2a79,	// (0x0000400e) copy_highlight_primary_pane_g1

0x2a90,	// (0x00004025) copy_highlight_primary_pane_t1

0x2a79,	// (0x0000400e) copy_highlight_primary_small_pane_g1

0x2a81,	// (0x00004016) copy_highlight_primary_small_pane_t1

0x12c5,	// (0x0000285a) copy_highlight_secondary_pane_g1

0x12cd,	// (0x00002862) copy_highlight_secondary_pane_t1

0x2a62,	// (0x00003ff7) copy_highlight_title_pane_g1

0x2a6a,	// (0x00003fff) copy_highlight_title_pane_t1

0x2a79,	// (0x0000400e) copy_highlight_digital_pane_g1

0x4123,	// (0x000056b8) copy_highlight_digital_pane_t1

0x4077,	// (0x0000560c) graphic_text_primary_pane_g1

0x4107,	// (0x0000569c) graphic_text_primary_pane_t1

0x4115,	// (0x000056aa) graphic_text_primary_pane_t2

0x0001,

0xf996,	// (0x00010f2b) graphic_text_primary_pane_t

0x40e3,	// (0x00005678) graphic_text_primary_small_pane_g1

0x40eb,	// (0x00005680) graphic_text_primary_small_pane_t1

0x40f9,	// (0x0000568e) graphic_text_primary_small_pane_t2

0x0001,

0xf991,	// (0x00010f26) graphic_text_primary_small_pane_t

0x40bf,	// (0x00005654) graphic_text_secondary_pane_g1

0x40c7,	// (0x0000565c) graphic_text_secondary_pane_t1

0x40d5,	// (0x0000566a) graphic_text_secondary_pane_t2

0x0001,

0xf98c,	// (0x00010f21) graphic_text_secondary_pane_t

0x409b,	// (0x00005630) graphic_text_title_pane_g1

0x40a3,	// (0x00005638) graphic_text_title_pane_t1

0x40b1,	// (0x00005646) graphic_text_title_pane_t2

0x0001,

0xf987,	// (0x00010f1c) graphic_text_title_pane_t

0x4077,	// (0x0000560c) graphic_text_digital_pane_g1

0x407f,	// (0x00005614) graphic_text_digital_pane_t1

0x408d,	// (0x00005622) graphic_text_digital_pane_t2

0x0001,

0xf982,	// (0x00010f17) graphic_text_digital_pane_t

0xecac,	// (0x00010241) navi_icon_pane_srt_ParamLimits

0xecac,	// (0x00010241) navi_icon_pane_srt

0xebf2,	// (0x00010187) navi_midp_pane_srt

0xebf2,	// (0x00010187) navi_navi_pane_srt

0xecac,	// (0x00010241) navi_text_pane_srt_ParamLimits

0xecac,	// (0x00010241) navi_text_pane_srt

0x4042,	// (0x000055d7) navi_navi_icon_text_pane_srt

0x404a,	// (0x000055df) navi_navi_pane_srt_g1_ParamLimits

0x404a,	// (0x000055df) navi_navi_pane_srt_g1

0x405c,	// (0x000055f1) navi_navi_pane_srt_g2_ParamLimits

0x405c,	// (0x000055f1) navi_navi_pane_srt_g2

0x0001,

0xf97d,	// (0x00010f12) navi_navi_pane_srt_g_ParamLimits

0xf97d,	// (0x00010f12) navi_navi_pane_srt_g

0x406e,	// (0x00005603) navi_navi_tabs_pane_srt

0x4042,	// (0x000055d7) navi_navi_text_pane_srt

0x4042,	// (0x000055d7) navi_navi_volume_pane_srt

0x4033,	// (0x000055c8) navi_navi_text_pane_srt_t1

0x400e,	// (0x000055a3) navi_navi_volume_pane_srt_g1

0x4016,	// (0x000055ab) volume_small_pane_srt_ParamLimits

0x4016,	// (0x000055ab) volume_small_pane_srt

0x12dc,	// (0x00002871) volume_small_pane_srt_g1_ParamLimits

0x12dc,	// (0x00002871) volume_small_pane_srt_g1

0x12ec,	// (0x00002881) volume_small_pane_srt_g2_ParamLimits

0x12ec,	// (0x00002881) volume_small_pane_srt_g2

0x12fd,	// (0x00002892) volume_small_pane_srt_g3_ParamLimits

0x12fd,	// (0x00002892) volume_small_pane_srt_g3

0x130e,	// (0x000028a3) volume_small_pane_srt_g4_ParamLimits

0x130e,	// (0x000028a3) volume_small_pane_srt_g4

0x131f,	// (0x000028b4) volume_small_pane_srt_g5_ParamLimits

0x131f,	// (0x000028b4) volume_small_pane_srt_g5

0x1330,	// (0x000028c5) volume_small_pane_srt_g6_ParamLimits

0x1330,	// (0x000028c5) volume_small_pane_srt_g6

0x1341,	// (0x000028d6) volume_small_pane_srt_g7_ParamLimits

0x1341,	// (0x000028d6) volume_small_pane_srt_g7

0x1352,	// (0x000028e7) volume_small_pane_srt_g8_ParamLimits

0x1352,	// (0x000028e7) volume_small_pane_srt_g8

0x1363,	// (0x000028f8) volume_small_pane_srt_g9_ParamLimits

0x1363,	// (0x000028f8) volume_small_pane_srt_g9

0x1374,	// (0x00002909) volume_small_pane_srt_g10_ParamLimits

0x1374,	// (0x00002909) volume_small_pane_srt_g10

0x0009,

0xf731,	// (0x00010cc6) volume_small_pane_srt_g_ParamLimits

0xf731,	// (0x00010cc6) volume_small_pane_srt_g

0xf005,	// (0x0001059a) query_popup_data_pane_cp2

0x3ffc,	// (0x00005591) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3ffc,	// (0x00005591) navi_navi_icon_text_pane_srt_t1

0x2d01,	// (0x00004296) navi_tabs_2_long_pane_srt

0x2d01,	// (0x00004296) navi_tabs_2_pane_srt

0x2d01,	// (0x00004296) navi_tabs_3_long_pane_srt

0x2d01,	// (0x00004296) navi_tabs_3_pane_srt

0x2d01,	// (0x00004296) navi_tabs_4_pane_srt

0x3fd4,	// (0x00005569) tabs_2_active_pane_srt_ParamLimits

0x3fd4,	// (0x00005569) tabs_2_active_pane_srt

0x3fe4,	// (0x00005579) tabs_2_passive_pane_srt_ParamLimits

0x3fe4,	// (0x00005579) tabs_2_passive_pane_srt

0x2412,	// (0x000039a7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2412,	// (0x000039a7) bg_passive_tab_pane_cp1_srt

0x3fa8,	// (0x0000553d) bg_passive_tab_pane_g1_cp1_srt

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp1_srt

0x3fb1,	// (0x00005546) bg_passive_tab_pane_g3_cp1_srt

0xec94,	// (0x00010229) bg_active_tab_pane_cp1_srt_ParamLimits

0xec94,	// (0x00010229) bg_active_tab_pane_cp1_srt

0x3fba,	// (0x0000554f) tabs_2_active_pane_srt_g1

0xc7e2,	// (0x0000dd77) tabs_2_active_pane_srt_t1_ParamLimits

0xc7e2,	// (0x0000dd77) tabs_2_active_pane_srt_t1

0x3fa8,	// (0x0000553d) bg_active_tab_pane_g1_cp1_srt

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp1_srt

0x3fb1,	// (0x00005546) bg_active_tab_pane_g3_cp1_srt

0x3f75,	// (0x0000550a) tabs_3_active_pane_srt_ParamLimits

0x3f75,	// (0x0000550a) tabs_3_active_pane_srt

0x3f86,	// (0x0000551b) tabs_3_passive_pane_cp_srt_ParamLimits

0x3f86,	// (0x0000551b) tabs_3_passive_pane_cp_srt

0x3f97,	// (0x0000552c) tabs_3_passive_pane_srt_ParamLimits

0x3f97,	// (0x0000552c) tabs_3_passive_pane_srt

0x2412,	// (0x000039a7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2412,	// (0x000039a7) bg_passive_tab_pane_cp2_srt

0x1385,	// (0x0000291a) bg_passive_tab_pane_g1_cp2_srt

0x0c1d,	// (0x000021b2) bg_passive_tab_pane_g2_cp2_srt

0x138e,	// (0x00002923) bg_passive_tab_pane_g3_cp2_srt

0xec94,	// (0x00010229) bg_active_tab_pane_cp2_srt_ParamLimits

0xec94,	// (0x00010229) bg_active_tab_pane_cp2_srt

0x3f5b,	// (0x000054f0) tabs_3_active_pane_srt_g1

0xc7cc,	// (0x0000dd61) tabs_3_active_pane_srt_t1_ParamLimits

0xc7cc,	// (0x0000dd61) tabs_3_active_pane_srt_t1

0x1385,	// (0x0000291a) bg_active_tab_pane_g1_cp2_srt

0x0c1d,	// (0x000021b2) bg_active_tab_pane_g2_cp2_srt

0x138e,	// (0x00002923) bg_active_tab_pane_g3_cp2_srt

0x3f13,	// (0x000054a8) tabs_4_active_pane_srt_ParamLimits

0x3f13,	// (0x000054a8) tabs_4_active_pane_srt

0x3f25,	// (0x000054ba) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3f25,	// (0x000054ba) tabs_4_passive_pane_cp2_srt

0x1616,	// (0x00002bab) aid_size_cell_toolbar

0x3a98,	// (0x0000502d) main_idle_act_pane_ParamLimits

0x185f,	// (0x00002df4) popup_large_graphic_colour_window_ParamLimits

0xbd11,	// (0x0000d2a6) popup_toolbar_window_ParamLimits

0xbd11,	// (0x0000d2a6) popup_toolbar_window

0x3cb6,	// (0x0000524b) list_single_graphic_2heading_pane_ParamLimits

0x3cb6,	// (0x0000524b) list_single_graphic_2heading_pane

0x052d,	// (0x00001ac2) aid_size_cell_apps_grid_lsc_pane

0x053f,	// (0x00001ad4) aid_size_cell_apps_grid_prt_pane

0x1656,	// (0x00002beb) bg_wml_button_pane_cp1_ParamLimits

0x1656,	// (0x00002beb) bg_wml_button_pane_cp1

0xc285,	// (0x0000d81a) form_midp_field_text_pane_t1_ParamLimits

0x2412,	// (0x000039a7) input_focus_pane_cp050_ParamLimits

0x26e8,	// (0x00003c7d) list_midp_form_text_pane_ParamLimits

0x269a,	// (0x00003c2f) input_focus_pane_cp051_ParamLimits

0x26ae,	// (0x00003c43) list_midp_choice_pane_ParamLimits

0xc21e,	// (0x0000d7b3) list_single_2graphic_pane_cp3_ParamLimits

0xc21e,	// (0x0000d7b3) list_single_2graphic_pane_cp3

0xc231,	// (0x0000d7c6) list_single_midp_graphic_pane_ParamLimits

0xc231,	// (0x0000d7c6) list_single_midp_graphic_pane

0x20ff,	// (0x00003694) list_single_graphic_2heading_pane_g1_ParamLimits

0x20ff,	// (0x00003694) list_single_graphic_2heading_pane_g1

0x210b,	// (0x000036a0) list_single_graphic_2heading_pane_g4_ParamLimits

0x210b,	// (0x000036a0) list_single_graphic_2heading_pane_g4

0x2117,	// (0x000036ac) list_single_graphic_2heading_pane_g5_ParamLimits

0x2117,	// (0x000036ac) list_single_graphic_2heading_pane_g5

0x0002,

0xf784,	// (0x00010d19) list_single_graphic_2heading_pane_g_ParamLimits

0xf784,	// (0x00010d19) list_single_graphic_2heading_pane_g

0x2123,	// (0x000036b8) list_single_graphic_2heading_pane_t1_ParamLimits

0x2123,	// (0x000036b8) list_single_graphic_2heading_pane_t1

0x2137,	// (0x000036cc) list_single_graphic_2heading_pane_t2_ParamLimits

0x2137,	// (0x000036cc) list_single_graphic_2heading_pane_t2

0x2153,	// (0x000036e8) list_single_graphic_2heading_pane_t3_ParamLimits

0x2153,	// (0x000036e8) list_single_graphic_2heading_pane_t3

0x0002,

0xf78b,	// (0x00010d20) list_single_graphic_2heading_pane_t_ParamLimits

0xf78b,	// (0x00010d20) list_single_graphic_2heading_pane_t

0x216b,	// (0x00003700) bg_popup_sub_pane_cp2

0x2195,	// (0x0000372a) grid_toobar_pane

0x21d1,	// (0x00003766) cell_toolbar_pane_ParamLimits

0x21d1,	// (0x00003766) cell_toolbar_pane

0x2217,	// (0x000037ac) cell_toolbar_pane_g1_ParamLimits

0x2217,	// (0x000037ac) cell_toolbar_pane_g1

0x222b,	// (0x000037c0) cell_toolbar_pane_g2_ParamLimits

0x222b,	// (0x000037c0) cell_toolbar_pane_g2

0x0001,

0xf792,	// (0x00010d27) cell_toolbar_pane_g_ParamLimits

0xf792,	// (0x00010d27) cell_toolbar_pane_g

0x224d,	// (0x000037e2) grid_highlight_pane_cp2_ParamLimits

0x224d,	// (0x000037e2) grid_highlight_pane_cp2

0x2267,	// (0x000037fc) toolbar_button_pane

0x2273,	// (0x00003808) toolbar_button_pane_g1

0x227b,	// (0x00003810) toolbar_button_pane_g2

0x2283,	// (0x00003818) toolbar_button_pane_g3

0x228b,	// (0x00003820) toolbar_button_pane_g4

0x2293,	// (0x00003828) toolbar_button_pane_g5

0x229b,	// (0x00003830) toolbar_button_pane_g6

0x22a3,	// (0x00003838) toolbar_button_pane_g7

0x22ab,	// (0x00003840) toolbar_button_pane_g8

0x22b3,	// (0x00003848) toolbar_button_pane_g9

0x0009,

0xf797,	// (0x00010d2c) toolbar_button_pane_g

0x22c3,	// (0x00003858) list_single_2graphic_pane_g1_cp3_ParamLimits

0x22c3,	// (0x00003858) list_single_2graphic_pane_g1_cp3

0xc180,	// (0x0000d715) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc180,	// (0x0000d715) list_single_2graphic_pane_g2_cp3

0x0f40,	// (0x000024d5) list_single_2graphic_pane_g3_cp3

0x22e0,	// (0x00003875) list_single_2graphic_pane_g4_cp3_ParamLimits

0x22e0,	// (0x00003875) list_single_2graphic_pane_g4_cp3

0x22ec,	// (0x00003881) list_single_2graphic_pane_t1_cp3_ParamLimits

0x22ec,	// (0x00003881) list_single_2graphic_pane_t1_cp3

0x0f34,	// (0x000024c9) list_single_midp_graphic_pane_g2_ParamLimits

0x0f34,	// (0x000024c9) list_single_midp_graphic_pane_g2

0x161e,	// (0x00002bb3) aid_zoom_text_primary

0x1626,	// (0x00002bbb) aid_zoom_text_secondary

0x143f,	// (0x000029d4) status_small_pane_g7_ParamLimits

0x143f,	// (0x000029d4) status_small_pane_g7

0x1462,	// (0x000029f7) status_small_pane_t1_ParamLimits

0xa7ef,	// (0x0000bd84) title_pane_g2

0x0003,

0xf527,	// (0x00010abc) title_pane_g

0xaa8f,	// (0x0000c024) aid_size_cell_colour_1_pane_ParamLimits

0xaa8f,	// (0x0000c024) aid_size_cell_colour_1_pane

0xaaa3,	// (0x0000c038) aid_size_cell_colour_2_pane_ParamLimits

0xaaa3,	// (0x0000c038) aid_size_cell_colour_2_pane

0xaab7,	// (0x0000c04c) aid_size_cell_colour_3_pane_ParamLimits

0xaab7,	// (0x0000c04c) aid_size_cell_colour_3_pane

0xaacb,	// (0x0000c060) aid_size_cell_colour_4_pane_ParamLimits

0xaacb,	// (0x0000c060) aid_size_cell_colour_4_pane

0x039f,	// (0x00001934) title_pane_stacon_g1_ParamLimits

0x039f,	// (0x00001934) title_pane_stacon_g1

0x2ae7,	// (0x0000407c) popup_note_wait_window_g3_ParamLimits

0x2ae7,	// (0x0000407c) popup_note_wait_window_g3

0x2b5e,	// (0x000040f3) popup_note_wait_window_t5_ParamLimits

0x2b5e,	// (0x000040f3) popup_note_wait_window_t5

0xebf2,	// (0x00010187) main_feb_china_hwr_fs_writing_pane

0xb6a2,	// (0x0000cc37) popup_feb_china_hwr_fs_window_ParamLimits

0xb6a2,	// (0x0000cc37) popup_feb_china_hwr_fs_window

0xc191,	// (0x0000d726) aid_size_cell_hwr_fs_ParamLimits

0xc191,	// (0x0000d726) aid_size_cell_hwr_fs

0x2412,	// (0x000039a7) bg_popup_sub_pane_cp3_ParamLimits

0x2412,	// (0x000039a7) bg_popup_sub_pane_cp3

0xc1a6,	// (0x0000d73b) grid_hwr_fs_pane_ParamLimits

0xc1a6,	// (0x0000d73b) grid_hwr_fs_pane

0x2436,	// (0x000039cb) linegrid_hwr_fs_pane_ParamLimits

0x2436,	// (0x000039cb) linegrid_hwr_fs_pane

0xc1be,	// (0x0000d753) cell_hwr_fs_pane_ParamLimits

0xc1be,	// (0x0000d753) cell_hwr_fs_pane

0x246a,	// (0x000039ff) linegrid_hwr_fs_pane_g1_ParamLimits

0x246a,	// (0x000039ff) linegrid_hwr_fs_pane_g1

0xc1e4,	// (0x0000d779) linegrid_hwr_fs_pane_g2_ParamLimits

0xc1e4,	// (0x0000d779) linegrid_hwr_fs_pane_g2

0x2488,	// (0x00003a1d) linegrid_hwr_fs_pane_g3_ParamLimits

0x2488,	// (0x00003a1d) linegrid_hwr_fs_pane_g3

0x2494,	// (0x00003a29) linegrid_hwr_fs_pane_g4_ParamLimits

0x2494,	// (0x00003a29) linegrid_hwr_fs_pane_g4

0x24b2,	// (0x00003a47) linegrid_hwr_fs_pane_g5_ParamLimits

0x24b2,	// (0x00003a47) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bd,	// (0x00010d52) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bd,	// (0x00010d52) linegrid_hwr_fs_pane_g

0x24c8,	// (0x00003a5d) cell_hwr_fs_pane_g1_ParamLimits

0x24c8,	// (0x00003a5d) cell_hwr_fs_pane_g1

0x203c,	// (0x000035d1) cell_hwr_fs_pane_g2_ParamLimits

0x203c,	// (0x000035d1) cell_hwr_fs_pane_g2

0xc1f6,	// (0x0000d78b) cell_hwr_fs_pane_g3_ParamLimits

0xc1f6,	// (0x0000d78b) cell_hwr_fs_pane_g3

0xc203,	// (0x0000d798) cell_hwr_fs_pane_g4_ParamLimits

0xc203,	// (0x0000d798) cell_hwr_fs_pane_g4

0x0003,

0xf7c8,	// (0x00010d5d) cell_hwr_fs_pane_g_ParamLimits

0xf7c8,	// (0x00010d5d) cell_hwr_fs_pane_g

0xc210,	// (0x0000d7a5) cell_hwr_fs_pane_t1

0xebf2,	// (0x00010187) grid_highlight_pane_cp6

0xebf2,	// (0x00010187) main_idle_act2_pane

0x014e,	// (0x000016e3) aid_inside_area_popup_secondary

0xc368,	// (0x0000d8fd) aid_inside_area_window_primary_ParamLimits

0xc368,	// (0x0000d8fd) aid_inside_area_window_primary

0x4132,	// (0x000056c7) ai2_news_ticker_pane

0x413a,	// (0x000056cf) aid_size_cell_ai1_link_ParamLimits

0x413a,	// (0x000056cf) aid_size_cell_ai1_link

0x4154,	// (0x000056e9) popup_ai2_data_window_ParamLimits

0x4154,	// (0x000056e9) popup_ai2_data_window

0x4172,	// (0x00005707) popup_ai2_link_window_ParamLimits

0x4172,	// (0x00005707) popup_ai2_link_window

0x2412,	// (0x000039a7) bg_popup_sub_pane_cp4_ParamLimits

0x2412,	// (0x000039a7) bg_popup_sub_pane_cp4

0x4188,	// (0x0000571d) grid_ai2_link_pane_ParamLimits

0x4188,	// (0x0000571d) grid_ai2_link_pane

0x419f,	// (0x00005734) popup_ai2_link_window_g1_ParamLimits

0x419f,	// (0x00005734) popup_ai2_link_window_g1

0x41ab,	// (0x00005740) popup_ai2_link_window_g2_ParamLimits

0x41ab,	// (0x00005740) popup_ai2_link_window_g2

0x0001,

0xf99b,	// (0x00010f30) popup_ai2_link_window_g_ParamLimits

0xf99b,	// (0x00010f30) popup_ai2_link_window_g

0x41bc,	// (0x00005751) ai2_mp_button_pane

0x41c4,	// (0x00005759) ai2_mp_volume_pane

0x269a,	// (0x00003c2f) bg_popup_sub_pane_cp5_ParamLimits

0x269a,	// (0x00003c2f) bg_popup_sub_pane_cp5

0x41cc,	// (0x00005761) heading_ai2_gene_pane_ParamLimits

0x41cc,	// (0x00005761) heading_ai2_gene_pane

0x41d8,	// (0x0000576d) list_ai2_gene_pane_ParamLimits

0x41d8,	// (0x0000576d) list_ai2_gene_pane

0x4220,	// (0x000057b5) cell_ai2_link_pane_ParamLimits

0x4220,	// (0x000057b5) cell_ai2_link_pane

0x4236,	// (0x000057cb) cell_ai2_link_pane_g1

0xebf2,	// (0x00010187) grid_highlight_pane_cp7

0x4309,	// (0x0000589e) ai2_mp_volume_pane_g1

0x4311,	// (0x000058a6) ai2_mp_volume_pane_g2

0x427e,	// (0x00005813) list_ai2_gene_pane_t1

0x4319,	// (0x000058ae) ai2_mp_volume_pane_g3

0x0002,

0xf9b4,	// (0x00010f49) ai2_mp_volume_pane_g

0x4321,	// (0x000058b6) volume_small_pane_cp3

0x432a,	// (0x000058bf) aid_size_cell_ai2_button

0x4332,	// (0x000058c7) grid_ai2_button_pane

0x433b,	// (0x000058d0) cell_ai2_button_pane_ParamLimits

0x433b,	// (0x000058d0) cell_ai2_button_pane

0xea2a,	// (0x0000ffbf) cell_ai2_button_pane_g1

0xebf2,	// (0x00010187) grid_highlight_pane_cp8

0x42c9,	// (0x0000585e) ai2_gene_pane_t1_ParamLimits

0x42c9,	// (0x0000585e) ai2_gene_pane_t1

0xb61e,	// (0x0000cbb3) aid_height_parent_landscape

0xc520,	// (0x0000dab5) aid_height_set_list

0x3a98,	// (0x0000502d) aid_size_parent

0x3e99,	// (0x0000542e) aid_size_cell_graphic_pane_ParamLimits

0x41e8,	// (0x0000577d) popup_ai2_data_window_g1_ParamLimits

0x41e8,	// (0x0000577d) popup_ai2_data_window_g1

0x41f4,	// (0x00005789) ai2_news_ticker_pane_g1

0x41fc,	// (0x00005791) ai2_news_ticker_pane_g2

0x0001,

0xf9a0,	// (0x00010f35) ai2_news_ticker_pane_g

0x4204,	// (0x00005799) ai2_news_ticker_pane_t1

0x4212,	// (0x000057a7) ai2_news_ticker_pane_t2

0x0001,

0xf9a5,	// (0x00010f3a) ai2_news_ticker_pane_t

0x423f,	// (0x000057d4) heading_ai2_gene_pane_g1

0x4247,	// (0x000057dc) heading_ai2_gene_pane_t1_ParamLimits

0x4247,	// (0x000057dc) heading_ai2_gene_pane_t1

0x425c,	// (0x000057f1) list_highlight_pane_cp6

0x4264,	// (0x000057f9) ai2_gene_pane_ParamLimits

0x4264,	// (0x000057f9) ai2_gene_pane

0x428c,	// (0x00005821) list_ai2_gene_pane_t2

0x0001,

0xf9aa,	// (0x00010f3f) list_ai2_gene_pane_t

0x429a,	// (0x0000582f) list_highlight_pane_cp8_ParamLimits

0x429a,	// (0x0000582f) list_highlight_pane_cp8

0x42ab,	// (0x00005840) ai2_gene_pane_g1_ParamLimits

0x42ab,	// (0x00005840) ai2_gene_pane_g1

0x42bd,	// (0x00005852) ai2_gene_pane_g2_ParamLimits

0x42bd,	// (0x00005852) ai2_gene_pane_g2

0x0001,

0xf9af,	// (0x00010f44) ai2_gene_pane_g_ParamLimits

0xf9af,	// (0x00010f44) ai2_gene_pane_g

0xf327,	// (0x000108bc) scroll_pane_cp12

0xb5dd,	// (0x0000cb72) control_pane_t3_ParamLimits

0xb5dd,	// (0x0000cb72) control_pane_t3

0x1453,	// (0x000029e8) status_small_pane_g8_ParamLimits

0x1453,	// (0x000029e8) status_small_pane_g8

0xb744,	// (0x0000ccd9) popup_find_window_ParamLimits

0xb9fb,	// (0x0000cf90) popup_note_image_window_ParamLimits

0x20ff,	// (0x00003694) list_double2_graphic_pane_vc_g1_ParamLimits

0x20ff,	// (0x00003694) list_double2_graphic_pane_vc_g1

0x210b,	// (0x000036a0) list_double2_graphic_pane_vc_g2_ParamLimits

0x210b,	// (0x000036a0) list_double2_graphic_pane_vc_g2

0x2117,	// (0x000036ac) list_double2_graphic_pane_vc_g3_ParamLimits

0x2117,	// (0x000036ac) list_double2_graphic_pane_vc_g3

0x0002,

0xf784,	// (0x00010d19) list_double2_graphic_pane_vc_g_ParamLimits

0xf784,	// (0x00010d19) list_double2_graphic_pane_vc_g

0x2201,	// (0x00003796) list_double2_graphic_pane_vc_t1_ParamLimits

0x2201,	// (0x00003796) list_double2_graphic_pane_vc_t1

0x210b,	// (0x000036a0) list_single_heading_pane_vc_g1_ParamLimits

0x210b,	// (0x000036a0) list_single_heading_pane_vc_g1

0x2117,	// (0x000036ac) list_single_heading_pane_vc_g2_ParamLimits

0x2117,	// (0x000036ac) list_single_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00010b36) list_single_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00010b36) list_single_heading_pane_vc_g

0x2307,	// (0x0000389c) list_single_heading_pane_vc_t1_ParamLimits

0x2307,	// (0x0000389c) list_single_heading_pane_vc_t1

0x231d,	// (0x000038b2) list_single_heading_pane_vc_t2_ParamLimits

0x231d,	// (0x000038b2) list_single_heading_pane_vc_t2

0x0001,

0xf7ac,	// (0x00010d41) list_single_heading_pane_vc_t_ParamLimits

0xf7ac,	// (0x00010d41) list_single_heading_pane_vc_t

0x2349,	// (0x000038de) list_setting_number_pane_vc_g1_ParamLimits

0x2349,	// (0x000038de) list_setting_number_pane_vc_g1

0x2355,	// (0x000038ea) list_setting_number_pane_vc_g2_ParamLimits

0x2355,	// (0x000038ea) list_setting_number_pane_vc_g2

0x0001,

0xf7b1,	// (0x00010d46) list_setting_number_pane_vc_g_ParamLimits

0xf7b1,	// (0x00010d46) list_setting_number_pane_vc_g

0x2361,	// (0x000038f6) list_setting_number_pane_vc_t1_ParamLimits

0x2361,	// (0x000038f6) list_setting_number_pane_vc_t1

0x2375,	// (0x0000390a) list_setting_number_pane_vc_t2_ParamLimits

0x2375,	// (0x0000390a) list_setting_number_pane_vc_t2

0x2391,	// (0x00003926) list_setting_number_pane_vc_t3_ParamLimits

0x2391,	// (0x00003926) list_setting_number_pane_vc_t3

0x0002,

0xf7b6,	// (0x00010d4b) list_setting_number_pane_vc_t_ParamLimits

0xf7b6,	// (0x00010d4b) list_setting_number_pane_vc_t

0x23bf,	// (0x00003954) set_value_pane_vc_ParamLimits

0x23bf,	// (0x00003954) set_value_pane_vc

0x3cb6,	// (0x0000524b) list_double2_graphic_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_double2_graphic_pane_vc

0x3cb6,	// (0x0000524b) list_double2_large_graphic_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_double2_large_graphic_pane_vc

0x3cb6,	// (0x0000524b) list_double2_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_double2_pane_vc

0x3cb6,	// (0x0000524b) list_double_graphic_heading_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_double_graphic_heading_pane_vc

0x3cb6,	// (0x0000524b) list_double_graphic_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_double_graphic_pane_vc

0x3cb6,	// (0x0000524b) list_double_heading_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_double_heading_pane_vc

0x3cca,	// (0x0000525f) list_double_large_graphic_pane_vc_ParamLimits

0x3cca,	// (0x0000525f) list_double_large_graphic_pane_vc

0x3cb6,	// (0x0000524b) list_double_number_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_double_number_pane_vc

0x3cb6,	// (0x0000524b) list_double_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_double_pane_vc

0x3cb6,	// (0x0000524b) list_double_time_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_double_time_pane_vc

0x3cb6,	// (0x0000524b) list_setting_number_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_setting_number_pane_vc

0x3cb6,	// (0x0000524b) list_setting_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_setting_pane_vc

0x3cb6,	// (0x0000524b) list_single_graphic_heading_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_single_graphic_heading_pane_vc

0x3cb6,	// (0x0000524b) list_single_heading_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_single_heading_pane_vc

0x3cb6,	// (0x0000524b) list_single_number_heading_pane_vc_ParamLimits

0x3cb6,	// (0x0000524b) list_single_number_heading_pane_vc

0x436e,	// (0x00005903) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x436e,	// (0x00005903) list_double_graphic_heading_pane_vc_g1

0x437a,	// (0x0000590f) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x437a,	// (0x0000590f) list_double_graphic_heading_pane_vc_g2

0x4386,	// (0x0000591b) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4386,	// (0x0000591b) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bb,	// (0x00010f50) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bb,	// (0x00010f50) list_double_graphic_heading_pane_vc_g

0x4392,	// (0x00005927) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4392,	// (0x00005927) list_double_graphic_heading_pane_vc_t1

0x43a8,	// (0x0000593d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x43a8,	// (0x0000593d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c2,	// (0x00010f57) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c2,	// (0x00010f57) list_double_graphic_heading_pane_vc_t

0x2349,	// (0x000038de) list_setting_pane_vc_g1_ParamLimits

0x2349,	// (0x000038de) list_setting_pane_vc_g1

0x2355,	// (0x000038ea) list_setting_pane_vc_g2_ParamLimits

0x2355,	// (0x000038ea) list_setting_pane_vc_g2

0x0001,

0xf7b1,	// (0x00010d46) list_setting_pane_vc_g_ParamLimits

0xf7b1,	// (0x00010d46) list_setting_pane_vc_g

0x45f9,	// (0x00005b8e) list_setting_pane_vc_t1_ParamLimits

0x45f9,	// (0x00005b8e) list_setting_pane_vc_t1

0x4615,	// (0x00005baa) list_setting_pane_vc_t2_ParamLimits

0x4615,	// (0x00005baa) list_setting_pane_vc_t2

0x0001,

0xfa05,	// (0x00010f9a) list_setting_pane_vc_t_ParamLimits

0xfa05,	// (0x00010f9a) list_setting_pane_vc_t

0x23bf,	// (0x00003954) set_value_pane_cp_vc_ParamLimits

0x23bf,	// (0x00003954) set_value_pane_cp_vc

0x210b,	// (0x000036a0) list_single_number_heading_pane_vc_g1_ParamLimits

0x210b,	// (0x000036a0) list_single_number_heading_pane_vc_g1

0x2117,	// (0x000036ac) list_single_number_heading_pane_vc_g2_ParamLimits

0x2117,	// (0x000036ac) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a1,	// (0x00010b36) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a1,	// (0x00010b36) list_single_number_heading_pane_vc_g

0x4631,	// (0x00005bc6) list_single_number_heading_pane_vc_t1_ParamLimits

0x4631,	// (0x00005bc6) list_single_number_heading_pane_vc_t1

0x4647,	// (0x00005bdc) list_single_number_heading_pane_vc_t2_ParamLimits

0x4647,	// (0x00005bdc) list_single_number_heading_pane_vc_t2

0x465d,	// (0x00005bf2) list_single_number_heading_pane_vc_t3_ParamLimits

0x465d,	// (0x00005bf2) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0a,	// (0x00010f9f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0a,	// (0x00010f9f) list_single_number_heading_pane_vc_t

0x20ff,	// (0x00003694) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x20ff,	// (0x00003694) list_single_graphic_heading_pane_vc_g1

0x210b,	// (0x000036a0) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x210b,	// (0x000036a0) list_single_graphic_heading_pane_vc_g4

0x2117,	// (0x000036ac) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2117,	// (0x000036ac) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf784,	// (0x00010d19) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf784,	// (0x00010d19) list_single_graphic_heading_pane_vc_g

0x4631,	// (0x00005bc6) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4631,	// (0x00005bc6) list_single_graphic_heading_pane_vc_t1

0x466f,	// (0x00005c04) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x466f,	// (0x00005c04) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa11,	// (0x00010fa6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa11,	// (0x00010fa6) list_single_graphic_heading_pane_vc_t

0x210b,	// (0x000036a0) list_double2_pane_vc_g1_ParamLimits

0x210b,	// (0x000036a0) list_double2_pane_vc_g1

0x2117,	// (0x000036ac) list_double2_pane_vc_g2_ParamLimits

0x2117,	// (0x000036ac) list_double2_pane_vc_g2

0x0001,

0xf5a1,	// (0x00010b36) list_double2_pane_vc_g_ParamLimits

0xf5a1,	// (0x00010b36) list_double2_pane_vc_g

0x4681,	// (0x00005c16) list_double2_pane_vc_t1_ParamLimits

0x4681,	// (0x00005c16) list_double2_pane_vc_t1

0x4697,	// (0x00005c2c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4697,	// (0x00005c2c) list_double2_large_graphic_pane_vc_g1

0x210b,	// (0x000036a0) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x210b,	// (0x000036a0) list_double2_large_graphic_pane_vc_g2

0x2117,	// (0x000036ac) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2117,	// (0x000036ac) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5be,	// (0x00010b53) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5be,	// (0x00010b53) list_double2_large_graphic_pane_vc_g

0x46a3,	// (0x00005c38) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x46a3,	// (0x00005c38) list_double2_large_graphic_pane_vc_t1

0x46b9,	// (0x00005c4e) list_double_time_pane_vc_g1_ParamLimits

0x46b9,	// (0x00005c4e) list_double_time_pane_vc_g1

0x46c5,	// (0x00005c5a) list_double_time_pane_vc_g2_ParamLimits

0x46c5,	// (0x00005c5a) list_double_time_pane_vc_g2

0x0001,

0xfa16,	// (0x00010fab) list_double_time_pane_vc_g_ParamLimits

0xfa16,	// (0x00010fab) list_double_time_pane_vc_g

0x46d1,	// (0x00005c66) list_double_time_pane_vc_t1_ParamLimits

0x46d1,	// (0x00005c66) list_double_time_pane_vc_t1

0x4701,	// (0x00005c96) list_double_time_pane_vc_t2_ParamLimits

0x4701,	// (0x00005c96) list_double_time_pane_vc_t2

0x4725,	// (0x00005cba) list_double_time_pane_vc_t3_ParamLimits

0x4725,	// (0x00005cba) list_double_time_pane_vc_t3

0x4737,	// (0x00005ccc) list_double_time_pane_vc_t4_ParamLimits

0x4737,	// (0x00005ccc) list_double_time_pane_vc_t4

0x0003,

0xfa1b,	// (0x00010fb0) list_double_time_pane_vc_t_ParamLimits

0xfa1b,	// (0x00010fb0) list_double_time_pane_vc_t

0x210b,	// (0x000036a0) list_double_pane_vc_g1_ParamLimits

0x210b,	// (0x000036a0) list_double_pane_vc_g1

0x2117,	// (0x000036ac) list_double_pane_vc_g2_ParamLimits

0x2117,	// (0x000036ac) list_double_pane_vc_g2

0x0001,

0xf5a1,	// (0x00010b36) list_double_pane_vc_g_ParamLimits

0xf5a1,	// (0x00010b36) list_double_pane_vc_g

0x474b,	// (0x00005ce0) list_double_pane_vc_t1_ParamLimits

0x474b,	// (0x00005ce0) list_double_pane_vc_t1

0x475f,	// (0x00005cf4) list_double_pane_vc_t2_ParamLimits

0x475f,	// (0x00005cf4) list_double_pane_vc_t2

0x0001,

0xfa24,	// (0x00010fb9) list_double_pane_vc_t_ParamLimits

0xfa24,	// (0x00010fb9) list_double_pane_vc_t

0x210b,	// (0x000036a0) list_double_number_pane_vc_g1_ParamLimits

0x210b,	// (0x000036a0) list_double_number_pane_vc_g1

0x2117,	// (0x000036ac) list_double_number_pane_vc_g2_ParamLimits

0x2117,	// (0x000036ac) list_double_number_pane_vc_g2

0x0001,

0xf5a1,	// (0x00010b36) list_double_number_pane_vc_g_ParamLimits

0xf5a1,	// (0x00010b36) list_double_number_pane_vc_g

0x4775,	// (0x00005d0a) list_double_number_pane_vc_t1_ParamLimits

0x4775,	// (0x00005d0a) list_double_number_pane_vc_t1

0x4787,	// (0x00005d1c) list_double_number_pane_vc_t2_ParamLimits

0x4787,	// (0x00005d1c) list_double_number_pane_vc_t2

0x479b,	// (0x00005d30) list_double_number_pane_vc_t3_ParamLimits

0x479b,	// (0x00005d30) list_double_number_pane_vc_t3

0x0002,

0xfa29,	// (0x00010fbe) list_double_number_pane_vc_t_ParamLimits

0xfa29,	// (0x00010fbe) list_double_number_pane_vc_t

0x47b3,	// (0x00005d48) list_double_large_graphic_pane_vc_g1_ParamLimits

0x47b3,	// (0x00005d48) list_double_large_graphic_pane_vc_g1

0x47d5,	// (0x00005d6a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x47d5,	// (0x00005d6a) list_double_large_graphic_pane_vc_g2

0x47e9,	// (0x00005d7e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x47e9,	// (0x00005d7e) list_double_large_graphic_pane_vc_g3

0x47f8,	// (0x00005d8d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x47f8,	// (0x00005d8d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa30,	// (0x00010fc5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa30,	// (0x00010fc5) list_double_large_graphic_pane_vc_g

0x4804,	// (0x00005d99) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4804,	// (0x00005d99) list_double_large_graphic_pane_vc_t1

0x4820,	// (0x00005db5) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4820,	// (0x00005db5) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa39,	// (0x00010fce) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa39,	// (0x00010fce) list_double_large_graphic_pane_vc_t

0x437a,	// (0x0000590f) list_double_heading_pane_vc_g1_ParamLimits

0x437a,	// (0x0000590f) list_double_heading_pane_vc_g1

0x4386,	// (0x0000591b) list_double_heading_pane_vc_g2_ParamLimits

0x4386,	// (0x0000591b) list_double_heading_pane_vc_g2

0x0001,

0xfa3e,	// (0x00010fd3) list_double_heading_pane_vc_g_ParamLimits

0xfa3e,	// (0x00010fd3) list_double_heading_pane_vc_g

0x4840,	// (0x00005dd5) list_double_heading_pane_vc_t1_ParamLimits

0x4840,	// (0x00005dd5) list_double_heading_pane_vc_t1

0x4852,	// (0x00005de7) list_double_heading_pane_vc_t2_ParamLimits

0x4852,	// (0x00005de7) list_double_heading_pane_vc_t2

0x0001,

0xfa43,	// (0x00010fd8) list_double_heading_pane_vc_t_ParamLimits

0xfa43,	// (0x00010fd8) list_double_heading_pane_vc_t

0x486a,	// (0x00005dff) list_double_graphic_pane_vc_g1_ParamLimits

0x486a,	// (0x00005dff) list_double_graphic_pane_vc_g1

0x4876,	// (0x00005e0b) list_double_graphic_pane_vc_g2_ParamLimits

0x4876,	// (0x00005e0b) list_double_graphic_pane_vc_g2

0x210b,	// (0x000036a0) list_double_graphic_pane_vc_g3_ParamLimits

0x210b,	// (0x000036a0) list_double_graphic_pane_vc_g3

0x0003,

0xfa48,	// (0x00010fdd) list_double_graphic_pane_vc_g_ParamLimits

0xfa48,	// (0x00010fdd) list_double_graphic_pane_vc_g

0x4893,	// (0x00005e28) list_double_graphic_pane_vc_t1_ParamLimits

0x4893,	// (0x00005e28) list_double_graphic_pane_vc_t1

0x48bd,	// (0x00005e52) list_double_graphic_pane_vc_t2_ParamLimits

0x48bd,	// (0x00005e52) list_double_graphic_pane_vc_t2

0x0001,

0xfa51,	// (0x00010fe6) list_double_graphic_pane_vc_t_ParamLimits

0xfa51,	// (0x00010fe6) list_double_graphic_pane_vc_t

0xea4c,	// (0x0000ffe1) aid_size_cell_fastswap

0xa60a,	// (0x0000bb9f) aid_size_cell_touch_ParamLimits

0xa60a,	// (0x0000bb9f) aid_size_cell_touch

0xec22,	// (0x000101b7) popup_fast_swap_wide_window_ParamLimits

0xec22,	// (0x000101b7) popup_fast_swap_wide_window

0xa786,	// (0x0000bd1b) touch_pane_ParamLimits

0xa786,	// (0x0000bd1b) touch_pane

0xf3b8,	// (0x0001094d) button_value_adjust_pane_cp2

0xf3c0,	// (0x00010955) button_value_adjust_pane_cp4

0xf3c8,	// (0x0001095d) form_field_data_pane_cp2

0xafd1,	// (0x0000c566) form_field_data_wide_pane_cp2

0x062d,	// (0x00001bc2) bg_scroll_pane_ParamLimits

0x064c,	// (0x00001be1) scroll_handle_pane_ParamLimits

0x0660,	// (0x00001bf5) scroll_sc2_down_pane_ParamLimits

0x0660,	// (0x00001bf5) scroll_sc2_down_pane

0x0687,	// (0x00001c1c) scroll_sc2_up_pane_ParamLimits

0x0687,	// (0x00001c1c) scroll_sc2_up_pane

0xc924,	// (0x0000deb9) grid_wheel_folder_pane_g1_ParamLimits

0xc924,	// (0x0000deb9) grid_wheel_folder_pane_g1

0x0d64,	// (0x000022f9) clock_nsta_pane_cp2_ParamLimits

0x0d64,	// (0x000022f9) clock_nsta_pane_cp2

0xb431,	// (0x0000c9c6) listscroll_midp_pane_ParamLimits

0xb43d,	// (0x0000c9d2) midp_canvas_pane

0x1604,	// (0x00002b99) nsta_clock_indic_pane

0x1662,	// (0x00002bf7) listscroll_form_pane_vc

0x1686,	// (0x00002c1b) listscroll_set_pane_vc_ParamLimits

0x1686,	// (0x00002c1b) listscroll_set_pane_vc

0xbe75,	// (0x0000d40a) clock_nsta_pane

0xbe9f,	// (0x0000d434) indicator_nsta_pane

0x216b,	// (0x00003700) bg_popup_sub_pane_cp2_ParamLimits

0x217f,	// (0x00003714) find_pane_cp2_ParamLimits

0x217f,	// (0x00003714) find_pane_cp2

0x2195,	// (0x0000372a) grid_toobar_pane_ParamLimits

0x23d1,	// (0x00003966) list_form_gen_pane_vc_ParamLimits

0x23d1,	// (0x00003966) list_form_gen_pane_vc

0x23e7,	// (0x0000397c) scroll_pane_cp8_vc_ParamLimits

0x23e7,	// (0x0000397c) scroll_pane_cp8_vc

0x2506,	// (0x00003a9b) data_form_wide_pane_vc_ParamLimits

0x2506,	// (0x00003a9b) data_form_wide_pane_vc

0x2512,	// (0x00003aa7) form_field_data_wide_pane_vc_g1

0x251a,	// (0x00003aaf) form_field_data_wide_pane_vc_t1_ParamLimits

0x251a,	// (0x00003aaf) form_field_data_wide_pane_vc_t1

0xf424,	// (0x000109b9) input_focus_pane_cp6_vc_ParamLimits

0xf424,	// (0x000109b9) input_focus_pane_cp6_vc

0x2865,	// (0x00003dfa) list_midp_pane_ParamLimits

0x3f07,	// (0x0000549c) scroll_pane_cp16_ParamLimits

0x3f07,	// (0x0000549c) scroll_pane_cp16

0x28bb,	// (0x00003e50) button_value_adjust_pane_ParamLimits

0x28bb,	// (0x00003e50) button_value_adjust_pane

0xc531,	// (0x0000dac6) button_value_adjust_pane_cp6_ParamLimits

0xc531,	// (0x0000dac6) button_value_adjust_pane_cp6

0xc66d,	// (0x0000dc02) settings_code_pane_cp_ParamLimits

0xc66d,	// (0x0000dc02) settings_code_pane_cp

0xea2a,	// (0x0000ffbf) cell_touch_pane_g1

0xea2a,	// (0x0000ffbf) cell_touch_pane_g2

0x0001,

0xf6d7,	// (0x00010c6c) cell_touch_pane_g

0xc7f8,	// (0x0000dd8d) cell_touch_pane_cp_ParamLimits

0xc7f8,	// (0x0000dd8d) cell_touch_pane_cp

0xc814,	// (0x0000dda9) cell_touch_pane_ParamLimits

0xc814,	// (0x0000dda9) cell_touch_pane

0xea2a,	// (0x0000ffbf) scroll_sc2_down_pane_g1

0xea2a,	// (0x0000ffbf) scroll_sc2_up_pane_g1

0xebf2,	// (0x00010187) bg_set_opt_pane_cp4_vc

0x43c6,	// (0x0000595b) list_set_graphic_pane_vc_g1_ParamLimits

0x43c6,	// (0x0000595b) list_set_graphic_pane_vc_g1

0x43d2,	// (0x00005967) list_set_graphic_pane_vc_g2_ParamLimits

0x43d2,	// (0x00005967) list_set_graphic_pane_vc_g2

0x0001,

0xf9c7,	// (0x00010f5c) list_set_graphic_pane_vc_g_ParamLimits

0xf9c7,	// (0x00010f5c) list_set_graphic_pane_vc_g

0x43de,	// (0x00005973) text_primary_small_cp13_vc_ParamLimits

0x43de,	// (0x00005973) text_primary_small_cp13_vc

0x43f6,	// (0x0000598b) list_set_graphic_pane_vc_ParamLimits

0x43f6,	// (0x0000598b) list_set_graphic_pane_vc

0xebf2,	// (0x00010187) input_focus_pane_cp2_vc

0xea2a,	// (0x0000ffbf) setting_code_pane_vc_g1

0xed4c,	// (0x000102e1) setting_code_pane_vc_t1

0x4409,	// (0x0000599e) set_text_pane_vc_t1_ParamLimits

0x4409,	// (0x0000599e) set_text_pane_vc_t1

0xebf2,	// (0x00010187) input_focus_pane_cp1_vc

0x442a,	// (0x000059bf) list_set_text_pane_vc

0xea2a,	// (0x0000ffbf) setting_text_pane_vc_g1

0xebf2,	// (0x00010187) bg_set_opt_pane_cp2_vc

0xed1b,	// (0x000102b0) setting_slider_graphic_pane_vc_g1

0x4434,	// (0x000059c9) setting_slider_graphic_pane_vc_t1

0x4446,	// (0x000059db) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9cc,	// (0x00010f61) setting_slider_graphic_pane_vc_t

0x4458,	// (0x000059ed) slider_set_pane_cp_vc

0x4462,	// (0x000059f7) slider_set_pane_vc_g1

0x446b,	// (0x00005a00) slider_set_pane_vc_g2

0x0006,

0xf9d1,	// (0x00010f66) slider_set_pane_vc_g

0xf4df,	// (0x00010a74) set_opt_bg_pane_g1_copy1

0xf4e7,	// (0x00010a7c) set_opt_bg_pane_g2_copy1

0x4497,	// (0x00005a2c) set_opt_bg_pane_g3_copy1

0xf4f7,	// (0x00010a8c) set_opt_bg_pane_g4_copy1

0xf4ff,	// (0x00010a94) set_opt_bg_pane_g5_copy1

0xf507,	// (0x00010a9c) set_opt_bg_pane_g6_copy1

0x44a1,	// (0x00005a36) set_opt_bg_pane_g7_copy1

0x44ab,	// (0x00005a40) set_opt_bg_pane_g8_copy1

0x44b5,	// (0x00005a4a) set_opt_bg_pane_g9_copy1

0xebf2,	// (0x00010187) bg_set_opt_pane_cp_vc

0x44bf,	// (0x00005a54) setting_slider_pane_vc_t1

0x44ce,	// (0x00005a63) setting_slider_pane_vc_t2

0x44e0,	// (0x00005a75) setting_slider_pane_vc_t3

0x0002,

0xf9e0,	// (0x00010f75) setting_slider_pane_vc_t

0x44f2,	// (0x00005a87) slider_set_pane_vc

0x3100,	// (0x00004695) volume_set_pane_vc_g1

0x3109,	// (0x0000469e) volume_set_pane_vc_g2

0x3112,	// (0x000046a7) volume_set_pane_vc_g3

0x311b,	// (0x000046b0) volume_set_pane_vc_g4

0x3124,	// (0x000046b9) volume_set_pane_vc_g5

0x312d,	// (0x000046c2) volume_set_pane_vc_g6

0x3136,	// (0x000046cb) volume_set_pane_vc_g7

0x313f,	// (0x000046d4) volume_set_pane_vc_g8

0x3148,	// (0x000046dd) volume_set_pane_vc_g9

0x3151,	// (0x000046e6) volume_set_pane_vc_g10

0x0009,

0xf9e7,	// (0x00010f7c) volume_set_pane_vc_g

0x44fc,	// (0x00005a91) volume_set_pane_vc

0x4506,	// (0x00005a9b) button_value_adjust_pane_cp1_vc

0x4510,	// (0x00005aa5) list_highlight_pane_cp2_vc

0x4519,	// (0x00005aae) list_set_pane_vc_ParamLimits

0x4519,	// (0x00005aae) list_set_pane_vc

0x4587,	// (0x00005b1c) main_pane_set_vc_t1_ParamLimits

0x4587,	// (0x00005b1c) main_pane_set_vc_t1

0x459c,	// (0x00005b31) main_pane_set_vc_t2_ParamLimits

0x459c,	// (0x00005b31) main_pane_set_vc_t2

0x45ae,	// (0x00005b43) main_pane_set_vc_t3_ParamLimits

0x45ae,	// (0x00005b43) main_pane_set_vc_t3

0x45c2,	// (0x00005b57) main_pane_set_vc_t4_ParamLimits

0x45c2,	// (0x00005b57) main_pane_set_vc_t4

0x0003,

0xf9fc,	// (0x00010f91) main_pane_set_vc_t_ParamLimits

0xf9fc,	// (0x00010f91) main_pane_set_vc_t

0x45d6,	// (0x00005b6b) setting_code_pane_vc_ParamLimits

0x45d6,	// (0x00005b6b) setting_code_pane_vc

0x45e7,	// (0x00005b7c) setting_slider_graphic_pane_vc

0x45e7,	// (0x00005b7c) setting_slider_pane_vc

0x45e7,	// (0x00005b7c) setting_text_pane_vc

0x45e7,	// (0x00005b7c) setting_volume_pane_vc

0x45f1,	// (0x00005b86) scroll_pane_cp121_vc

0xf3a6,	// (0x0001093b) set_content_pane_vc

0x48e0,	// (0x00005e75) button_value_adjust_pane_g1

0x48e9,	// (0x00005e7e) button_value_adjust_pane_g2

0x0001,

0xfa56,	// (0x00010feb) button_value_adjust_pane_g

0x48f2,	// (0x00005e87) form_field_slider_wide_pane_vc_t1_ParamLimits

0x48f2,	// (0x00005e87) form_field_slider_wide_pane_vc_t1

0x4904,	// (0x00005e99) form_field_slider_wide_pane_vc_t2_ParamLimits

0x4904,	// (0x00005e99) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5b,	// (0x00010ff0) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5b,	// (0x00010ff0) form_field_slider_wide_pane_vc_t

0xec94,	// (0x00010229) input_focus_pane_cp10_vc_ParamLimits

0xec94,	// (0x00010229) input_focus_pane_cp10_vc

0x4930,	// (0x00005ec5) slider_cont_pane_cp1_vc_ParamLimits

0x4930,	// (0x00005ec5) slider_cont_pane_cp1_vc

0x4942,	// (0x00005ed7) slider_form_pane_g1_cp2

0x446b,	// (0x00005a00) slider_form_pane_g2_cp2

0x496f,	// (0x00005f04) form_field_slider_pane_vc_t3

0x497d,	// (0x00005f12) form_field_slider_pane_vc_t4

0x498b,	// (0x00005f20) slider_form_pane_vc_ParamLimits

0x498b,	// (0x00005f20) slider_form_pane_vc

0x4998,	// (0x00005f2d) form_field_slider_pane_vc_t1_ParamLimits

0x4998,	// (0x00005f2d) form_field_slider_pane_vc_t1

0x4904,	// (0x00005e99) form_field_slider_pane_vc_t2_ParamLimits

0x4904,	// (0x00005e99) form_field_slider_pane_vc_t2

0x0001,

0xfa6d,	// (0x00011002) form_field_slider_pane_vc_t_ParamLimits

0xfa6d,	// (0x00011002) form_field_slider_pane_vc_t

0xec94,	// (0x00010229) input_focus_pane_cp9_vc_ParamLimits

0xec94,	// (0x00010229) input_focus_pane_cp9_vc

0x49ae,	// (0x00005f43) slider_cont_pane_vc_ParamLimits

0x49ae,	// (0x00005f43) slider_cont_pane_vc

0x49c2,	// (0x00005f57) list_form_graphic_pane_cp_vc_ParamLimits

0x49c2,	// (0x00005f57) list_form_graphic_pane_cp_vc

0x2512,	// (0x00003aa7) form_field_popup_wide_pane_vc_g1

0x49d7,	// (0x00005f6c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x49d7,	// (0x00005f6c) form_field_popup_wide_pane_vc_t1

0xf424,	// (0x000109b9) input_focus_pane_cp8_vc_ParamLimits

0xf424,	// (0x000109b9) input_focus_pane_cp8_vc

0x4a1c,	// (0x00005fb1) list_form_wide_pane_vc_ParamLimits

0x4a1c,	// (0x00005fb1) list_form_wide_pane_vc

0x4a28,	// (0x00005fbd) list_form_graphic_pane_vc_g1

0x4a30,	// (0x00005fc5) list_form_graphic_pane_vc_t1_ParamLimits

0x4a30,	// (0x00005fc5) list_form_graphic_pane_vc_t1

0xecac,	// (0x00010241) list_highlight_pane_cp5_vc_ParamLimits

0xecac,	// (0x00010241) list_highlight_pane_cp5_vc

0x4a4c,	// (0x00005fe1) list_form_graphic_pane_vc_ParamLimits

0x4a4c,	// (0x00005fe1) list_form_graphic_pane_vc

0x2512,	// (0x00003aa7) form_field_popup_pane_vc_g1

0x4a62,	// (0x00005ff7) form_field_popup_pane_vc_t1_ParamLimits

0x4a62,	// (0x00005ff7) form_field_popup_pane_vc_t1

0xf424,	// (0x000109b9) input_focus_pane_cp7_vc_ParamLimits

0xf424,	// (0x000109b9) input_focus_pane_cp7_vc

0x4a79,	// (0x0000600e) list_form_pane_vc_ParamLimits

0x4a79,	// (0x0000600e) list_form_pane_vc

0x4a85,	// (0x0000601a) data_form_pane_vc_t1_ParamLimits

0x4a85,	// (0x0000601a) data_form_pane_vc_t1

0xf4df,	// (0x00010a74) input_focus_pane_vc_g1

0xf4e7,	// (0x00010a7c) input_focus_pane_vc_g2

0xf4ef,	// (0x00010a84) input_focus_pane_vc_g3

0xf4f7,	// (0x00010a8c) input_focus_pane_vc_g4

0xf4ff,	// (0x00010a94) input_focus_pane_vc_g5

0xf507,	// (0x00010a9c) input_focus_pane_vc_g6

0xf50f,	// (0x00010aa4) input_focus_pane_vc_g7

0xf517,	// (0x00010aac) input_focus_pane_vc_g8

0xf51f,	// (0x00010ab4) input_focus_pane_vc_g9

0xea2a,	// (0x0000ffbf) input_focus_pane_vc_g10

0x0009,

0xf660,	// (0x00010bf5) input_focus_pane_vc_g

0x2506,	// (0x00003a9b) data_form_pane_vc_ParamLimits

0x2506,	// (0x00003a9b) data_form_pane_vc

0x2512,	// (0x00003aa7) form_field_data_pane_vc_g1

0x4aa2,	// (0x00006037) form_field_data_pane_vc_t1_ParamLimits

0x4aa2,	// (0x00006037) form_field_data_pane_vc_t1

0xf424,	// (0x000109b9) input_focus_pane_vc_ParamLimits

0xf424,	// (0x000109b9) input_focus_pane_vc

0x4abc,	// (0x00006051) button_value_adjust_pane_cp3_vc

0x4ac4,	// (0x00006059) button_value_adjust_pane_cp5_vc

0x4acc,	// (0x00006061) form_field_data_pane_vc_ParamLimits

0x4acc,	// (0x00006061) form_field_data_pane_vc

0x4ae7,	// (0x0000607c) form_field_data_pane_vc_cp2

0x4aef,	// (0x00006084) form_field_data_wide_pane_vc_ParamLimits

0x4aef,	// (0x00006084) form_field_data_wide_pane_vc

0x4b09,	// (0x0000609e) form_field_data_wide_pane_vc_cp2

0x4b11,	// (0x000060a6) form_field_popup_pane_vc_ParamLimits

0x4b11,	// (0x000060a6) form_field_popup_pane_vc

0x4b2c,	// (0x000060c1) form_field_popup_wide_pane_vc_ParamLimits

0x4b2c,	// (0x000060c1) form_field_popup_wide_pane_vc

0x4b46,	// (0x000060db) form_field_slider_pane_vc_ParamLimits

0x4b46,	// (0x000060db) form_field_slider_pane_vc

0x4b59,	// (0x000060ee) form_field_slider_wide_pane_vc_ParamLimits

0x4b59,	// (0x000060ee) form_field_slider_wide_pane_vc

0xc832,	// (0x0000ddc7) grid_touch_1_pane_ParamLimits

0xc832,	// (0x0000ddc7) grid_touch_1_pane

0xc846,	// (0x0000dddb) grid_touch_2_pane_ParamLimits

0xc846,	// (0x0000dddb) grid_touch_2_pane

0x4c3f,	// (0x000061d4) touch_pane_g1_ParamLimits

0x4c3f,	// (0x000061d4) touch_pane_g1

0x4b92,	// (0x00006127) cell_app_pane_cp_wide_ParamLimits

0x4b92,	// (0x00006127) cell_app_pane_cp_wide

0x4ba3,	// (0x00006138) grid_popup_fast_wide_pane_ParamLimits

0x4ba3,	// (0x00006138) grid_popup_fast_wide_pane

0x4bb7,	// (0x0000614c) scroll_pane_cp19_ParamLimits

0x4bb7,	// (0x0000614c) scroll_pane_cp19

0xebf2,	// (0x00010187) bg_popup_window_pane_cp20

0x4bcb,	// (0x00006160) listscroll_popup_fast_wide_pane

0xc872,	// (0x0000de07) grid_indicator_nsta_pane

0x4be5,	// (0x0000617a) clock_nsta_pane_g1

0x4bee,	// (0x00006183) clock_nsta_pane_t1

0xc87e,	// (0x0000de13) cell_indicator_nsta_pane_ParamLimits

0xc87e,	// (0x0000de13) cell_indicator_nsta_pane

0x4c3f,	// (0x000061d4) cell_indicator_nsta_pane_g1

0xc899,	// (0x0000de2e) cell_indicator_nsta_pane_g2

0x0001,

0xfa7e,	// (0x00011013) cell_indicator_nsta_pane_g

0x4c60,	// (0x000061f5) clock_nsta_pane_cp

0x4c69,	// (0x000061fe) indicator_nsta_pane_cp

0x4c73,	// (0x00006208) nsta_clock_indic_pane_g1

0xed8b,	// (0x00010320) grid_indicator_pane

0x0779,	// (0x00001d0e) scroll_pane_cp29

0x0c91,	// (0x00002226) indicator_nsta_pane_cp2_ParamLimits

0x0c91,	// (0x00002226) indicator_nsta_pane_cp2

0xecac,	// (0x00010241) main_apps_wheel_pane

0x2722,	// (0x00003cb7) form_midp_field_text_pane_ParamLimits

0x2871,	// (0x00003e06) scroll_bar_cp050_ParamLimits

0x4ccc,	// (0x00006261) cell_indicator_pane_ParamLimits

0x4ccc,	// (0x00006261) cell_indicator_pane

0x4ce4,	// (0x00006279) cell_indicator_pane_g1

0xc8a6,	// (0x0000de3b) grid_wheel_folder_pane_ParamLimits

0xc8a6,	// (0x0000de3b) grid_wheel_folder_pane

0xc8b4,	// (0x0000de49) list_wheel_apps_pane_ParamLimits

0xc8b4,	// (0x0000de49) list_wheel_apps_pane

0xc8c2,	// (0x0000de57) main_apps_wheel_pane_g1_ParamLimits

0xc8c2,	// (0x0000de57) main_apps_wheel_pane_g1

0xc8d2,	// (0x0000de67) main_apps_wheel_pane_g2_ParamLimits

0xc8d2,	// (0x0000de67) main_apps_wheel_pane_g2

0x0001,

0xfa9a,	// (0x0001102f) main_apps_wheel_pane_g_ParamLimits

0xfa9a,	// (0x0001102f) main_apps_wheel_pane_g

0xc8e2,	// (0x0000de77) main_apps_wheel_pane_t1_ParamLimits

0xc8e2,	// (0x0000de77) main_apps_wheel_pane_t1

0xc8fa,	// (0x0000de8f) list_wheel_apps_pane_g1

0xc902,	// (0x0000de97) list_wheel_apps_pane_g2

0xc90a,	// (0x0000de9f) list_wheel_apps_pane_g3

0xc912,	// (0x0000dea7) list_wheel_apps_pane_g4

0xc91a,	// (0x0000deaf) list_wheel_apps_pane_g5

0x0004,

0xfa9f,	// (0x00011034) list_wheel_apps_pane_g

0x0f92,	// (0x00002527) navi_icon_text_pane

0xbd69,	// (0x0000d2fe) aid_fill_nsta

0xc935,	// (0x0000deca) navi_icon_text_pane_g1

0xc941,	// (0x0000ded6) navi_icon_text_pane_t1

0x0e28,	// (0x000023bd) list_set_graphic_pane_t1_ParamLimits

0x0e28,	// (0x000023bd) list_set_graphic_pane_t1

0x2fde,	// (0x00004573) popup_midp_note_alarm_window_t6_ParamLimits

0x2fde,	// (0x00004573) popup_midp_note_alarm_window_t6

0x2ff0,	// (0x00004585) popup_midp_note_alarm_window_t7_ParamLimits

0x2ff0,	// (0x00004585) popup_midp_note_alarm_window_t7

0x3002,	// (0x00004597) popup_midp_note_alarm_window_t8_ParamLimits

0x3002,	// (0x00004597) popup_midp_note_alarm_window_t8

0x3014,	// (0x000045a9) popup_midp_note_alarm_window_t9_ParamLimits

0x3014,	// (0x000045a9) popup_midp_note_alarm_window_t9

0x3026,	// (0x000045bb) popup_midp_note_alarm_window_t10_ParamLimits

0x3026,	// (0x000045bb) popup_midp_note_alarm_window_t10

0x3038,	// (0x000045cd) popup_midp_note_alarm_window_t11_ParamLimits

0x3038,	// (0x000045cd) popup_midp_note_alarm_window_t11

0x304a,	// (0x000045df) scroll_pane_cp17_ParamLimits

0x304a,	// (0x000045df) scroll_pane_cp17

0x3100,	// (0x00004695) volume_small_pane_cp_g1

0x4dd7,	// (0x0000636c) volume_small_pane_cp_g2

0x4de0,	// (0x00006375) volume_small_pane_cp_g3

0x4de9,	// (0x0000637e) volume_small_pane_cp_g4

0x4df2,	// (0x00006387) volume_small_pane_cp_g5

0x4dfb,	// (0x00006390) volume_small_pane_cp_g6

0x4e04,	// (0x00006399) volume_small_pane_cp_g7

0x4e0d,	// (0x000063a2) volume_small_pane_cp_g8

0x4e16,	// (0x000063ab) volume_small_pane_cp_g9

0x4e1f,	// (0x000063b4) volume_small_pane_cp_g10

0x1203,	// (0x00002798) midp_ticker_pane_g1_ParamLimits

0x120f,	// (0x000027a4) midp_ticker_pane_g2_ParamLimits

0xf72c,	// (0x00010cc1) midp_ticker_pane_g_ParamLimits

0xb4d5,	// (0x0000ca6a) midp_ticker_pane_t1_ParamLimits

0xbd8d,	// (0x0000d322) aid_fill_nsta_2

0x285d,	// (0x00003df2) list_form2_midp_pane

0x3c6e,	// (0x00005203) midp_editing_number_pane_ParamLimits

0x3c7d,	// (0x00005212) midp_ticker_pane_ParamLimits

0x4e28,	// (0x000063bd) form2_midp_field_pane

0x4e4c,	// (0x000063e1) scroll_pane_cp51

0x4e6c,	// (0x00006401) form2_midp_button_pane_ParamLimits

0x4e6c,	// (0x00006401) form2_midp_button_pane

0x4e7e,	// (0x00006413) form2_midp_content_pane_ParamLimits

0x4e7e,	// (0x00006413) form2_midp_content_pane

0x4e98,	// (0x0000642d) form2_midp_field_choice_group_pane

0x4ea0,	// (0x00006435) form2_midp_field_pane_g1

0x4ea8,	// (0x0000643d) form2_midp_field_pane_g2

0x4eb0,	// (0x00006445) form2_midp_field_pane_g3

0x4eb8,	// (0x0000644d) form2_midp_field_pane_g4

0x0003,

0xfac4,	// (0x00011059) form2_midp_field_pane_g

0x4ec0,	// (0x00006455) form2_midp_gauge_slider_pane

0x4ec8,	// (0x0000645d) form2_midp_gauge_wait_pane

0x4ed0,	// (0x00006465) form2_midp_image_pane_ParamLimits

0x4ed0,	// (0x00006465) form2_midp_image_pane

0x4eeb,	// (0x00006480) form2_midp_label_pane_ParamLimits

0x4eeb,	// (0x00006480) form2_midp_label_pane

0xc96f,	// (0x0000df04) form2_midp_label_pane_cp_ParamLimits

0xc96f,	// (0x0000df04) form2_midp_label_pane_cp

0x4f2b,	// (0x000064c0) form2_midp_string_pane_ParamLimits

0x4f2b,	// (0x000064c0) form2_midp_string_pane

0xc990,	// (0x0000df25) form2_midp_text_pane_ParamLimits

0xc990,	// (0x0000df25) form2_midp_text_pane

0x4f5e,	// (0x000064f3) form2_midp_time_pane

0x4f6e,	// (0x00006503) input_focus_pane_cp51_ParamLimits

0x4f6e,	// (0x00006503) input_focus_pane_cp51

0x4f86,	// (0x0000651b) form2_midp_label_pane_t1_ParamLimits

0x4f86,	// (0x0000651b) form2_midp_label_pane_t1

0xc9b1,	// (0x0000df46) form2_mdip_text_pane_t1_ParamLimits

0xc9b1,	// (0x0000df46) form2_mdip_text_pane_t1

0x4feb,	// (0x00006580) form2_midp_time_pane_t1

0x5006,	// (0x0000659b) form2_midp_gauge_slider_pane_t1

0xc9cd,	// (0x0000df62) form2_midp_gauge_slider_pane_t2

0xc9df,	// (0x0000df74) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacd,	// (0x00011062) form2_midp_gauge_slider_pane_t

0x503c,	// (0x000065d1) form2_midp_slider_pane

0x5048,	// (0x000065dd) form2_midp_gauge_wait_pane_t1

0x5056,	// (0x000065eb) form2_midp_wait_pane_ParamLimits

0x5056,	// (0x000065eb) form2_midp_wait_pane

0x2559,	// (0x00003aee) list_single_2graphic_pane_cp4_ParamLimits

0x2559,	// (0x00003aee) list_single_2graphic_pane_cp4

0xc231,	// (0x0000d7c6) list_single_midp_graphic_pane_cp_ParamLimits

0xc231,	// (0x0000d7c6) list_single_midp_graphic_pane_cp

0xebf2,	// (0x00010187) list_highlight_pane_cp20

0x509a,	// (0x0000662f) list_single_2graphic_pane_g1_cp4

0x423f,	// (0x000057d4) list_single_2graphic_pane_g2_cp4

0x50a2,	// (0x00006637) list_single_2graphic_pane_t1_cp4

0xecac,	// (0x00010241) list_highlight_pane_cp21

0x50b1,	// (0x00006646) list_single_midp_graphic_pane_g4_cp

0x50c0,	// (0x00006655) list_single_midp_graphic_pane_t1_cp

0xc9f1,	// (0x0000df86) form2_mdip_string_pane_t1_ParamLimits

0xc9f1,	// (0x0000df86) form2_mdip_string_pane_t1

0xebf2,	// (0x00010187) bg_wml_button_pane_cp2

0xea2a,	// (0x0000ffbf) form2_midp_image_pane_g1

0xf338,	// (0x000108cd) list_double_large_graphic_pane_g5_ParamLimits

0xf338,	// (0x000108cd) list_double_large_graphic_pane_g5

0xb431,	// (0x0000c9c6) midp_form_pane_ParamLimits

0xecac,	// (0x00010241) main_apps_wheel_pane_ParamLimits

0xba81,	// (0x0000d016) popup_preview_window_ParamLimits

0xba81,	// (0x0000d016) popup_preview_window

0x1c5e,	// (0x000031f3) popup_touch_info_window_ParamLimits

0x1c5e,	// (0x000031f3) popup_touch_info_window

0x1c80,	// (0x00003215) popup_touch_menu_window_ParamLimits

0x1c80,	// (0x00003215) popup_touch_menu_window

0xea20,	// (0x0000ffb5) bg_popup_sub_pane_cp6

0x5171,	// (0x00006706) list_touch_menu_pane

0x5179,	// (0x0000670e) list_single_touch_menu_pane_ParamLimits

0x5179,	// (0x0000670e) list_single_touch_menu_pane

0x5191,	// (0x00006726) list_single_touch_menu_pane_t1

0xecac,	// (0x00010241) bg_popup_sub_pane_cp7_ParamLimits

0xecac,	// (0x00010241) bg_popup_sub_pane_cp7

0x2891,	// (0x00003e26) heading_sub_pane

0x519f,	// (0x00006734) list_touch_info_pane_ParamLimits

0x519f,	// (0x00006734) list_touch_info_pane

0x51af,	// (0x00006744) list_single_touch_info_pane_ParamLimits

0x51af,	// (0x00006744) list_single_touch_info_pane

0x51c1,	// (0x00006756) list_single_touch_info_pane_t1

0x51cf,	// (0x00006764) list_single_touch_info_pane_t2

0x0001,

0xfadb,	// (0x00011070) list_single_touch_info_pane_t

0x1125,	// (0x000026ba) bg_popup_heading_pane_cp

0x51dd,	// (0x00006772) heading_sub_pane_t1

0x2412,	// (0x000039a7) bg_popup_preview_window_pane_cp_ParamLimits

0x2412,	// (0x000039a7) bg_popup_preview_window_pane_cp

0x2891,	// (0x00003e26) heading_preview_pane

0x519f,	// (0x00006734) list_preview_pane_ParamLimits

0x519f,	// (0x00006734) list_preview_pane

0x51eb,	// (0x00006780) popup_preview_window_g1

0x51af,	// (0x00006744) list_single_preview_pane_ParamLimits

0x51af,	// (0x00006744) list_single_preview_pane

0x51f3,	// (0x00006788) list_single_preview_pane_g1

0x51fb,	// (0x00006790) list_single_preview_pane_t1

0x51c1,	// (0x00006756) list_single_preview_pane_t2

0x0001,

0xfae0,	// (0x00011075) list_single_preview_pane_t

0x5209,	// (0x0000679e) bg_popup_heading_pane_cp2_ParamLimits

0x5209,	// (0x0000679e) bg_popup_heading_pane_cp2

0x521f,	// (0x000067b4) heading_preview_pane_g1

0x5227,	// (0x000067bc) heading_preview_pane_t1_ParamLimits

0x5227,	// (0x000067bc) heading_preview_pane_t1

0xeda2,	// (0x00010337) soft_indicator_pane_t1_ParamLimits

0xf304,	// (0x00010899) scroll_pane_ParamLimits

0x0675,	// (0x00001c0a) scroll_sc2_left_pane

0x067e,	// (0x00001c13) scroll_sc2_right_pane

0x069d,	// (0x00001c32) scroll_bg_pane_g1_ParamLimits

0x06b2,	// (0x00001c47) scroll_bg_pane_g2_ParamLimits

0x06ca,	// (0x00001c5f) scroll_bg_pane_g3_ParamLimits

0xf6b7,	// (0x00010c4c) scroll_bg_pane_g_ParamLimits

0x069d,	// (0x00001c32) scroll_handle_pane_g1_ParamLimits

0x06ec,	// (0x00001c81) scroll_handle_pane_g2_ParamLimits

0x06ca,	// (0x00001c5f) scroll_handle_pane_g3_ParamLimits

0xf6be,	// (0x00010c53) scroll_handle_pane_g_ParamLimits

0x16bc,	// (0x00002c51) popup_choice_list_window_ParamLimits

0x16bc,	// (0x00002c51) popup_choice_list_window

0x2177,	// (0x0000370c) choice_list_pane

0x223f,	// (0x000037d4) cell_toolbar_pane_t1

0x2267,	// (0x000037fc) toolbar_button_pane_ParamLimits

0x3680,	// (0x00004c15) ai_gene_pane_1_t2_ParamLimits

0x3680,	// (0x00004c15) ai_gene_pane_1_t2

0x0001,

0xf8da,	// (0x00010e6f) ai_gene_pane_1_t_ParamLimits

0xf8da,	// (0x00010e6f) ai_gene_pane_1_t

0x5244,	// (0x000067d9) scroll_sc2_left_pane_g1

0x5244,	// (0x000067d9) scroll_sc2_right_pane_g1

0x1656,	// (0x00002beb) bg_popup_sub_pane_cp10

0x524e,	// (0x000067e3) list_choice_list_pane

0x5267,	// (0x000067fc) list_single_choice_list_pane_ParamLimits

0x5267,	// (0x000067fc) list_single_choice_list_pane

0x527f,	// (0x00006814) list_single_choice_list_pane_g1

0x018c,	// (0x00001721) list_single_choice_list_pane_t1_ParamLimits

0x018c,	// (0x00001721) list_single_choice_list_pane_t1

0x5287,	// (0x0000681c) choice_list_pane_g1

0x528f,	// (0x00006824) choice_list_pane_t1

0xea20,	// (0x0000ffb5) input_focus_pane_cp11

0x03b3,	// (0x00001948) title_pane_stacon_g2_ParamLimits

0x03b3,	// (0x00001948) title_pane_stacon_g2

0x0002,

0xf69d,	// (0x00010c32) title_pane_stacon_g_ParamLimits

0xf69d,	// (0x00010c32) title_pane_stacon_g

0x1125,	// (0x000026ba) cursor_press_pane

0xb6f8,	// (0x0000cc8d) popup_fep_hwr_window_ParamLimits

0xb6f8,	// (0x0000cc8d) popup_fep_hwr_window

0x1800,	// (0x00002d95) popup_fep_vkb_window_ParamLimits

0x1800,	// (0x00002d95) popup_fep_vkb_window

0x529d,	// (0x00006832) cursor_press_pane_g1

0x0002,

0xfb09,	// (0x0001109e) fep_vkb_side_pane_g_ParamLimits

0x52de,	// (0x00006873) fep_hwr_candidate_pane_ParamLimits

0x52de,	// (0x00006873) fep_hwr_candidate_pane

0x5308,	// (0x0000689d) fep_hwr_side_pane_ParamLimits

0x5308,	// (0x0000689d) fep_hwr_side_pane

0x532a,	// (0x000068bf) fep_hwr_top_pane_ParamLimits

0x532a,	// (0x000068bf) fep_hwr_top_pane

0x5342,	// (0x000068d7) fep_hwr_write_pane_ParamLimits

0x5342,	// (0x000068d7) fep_hwr_write_pane

0xfb09,	// (0x0001109e) fep_vkb_side_pane_g

0x537c,	// (0x00006911) fep_hwr_top_pane_g1

0x538e,	// (0x00006923) fep_hwr_top_pane_g2

0x53a0,	// (0x00006935) fep_hwr_top_pane_g3

0x0002,

0xfae5,	// (0x0001107a) fep_hwr_top_pane_g

0x53b5,	// (0x0000694a) fep_hwr_top_text_pane

0x0841,	// (0x00001dd6) fep_hwr_top_text_pane_g1

0x5491,	// (0x00006a26) fep_hwr_top_text_pane_t1

0x54f1,	// (0x00006a86) fep_hwr_candidate_pane_g1

0x5762,	// (0x00006cf7) fep_vkb_keypad_pane_g3_ParamLimits

0x5762,	// (0x00006cf7) fep_vkb_keypad_pane_g3

0x578e,	// (0x00006d23) fep_vkb_keypad_pane_g4_ParamLimits

0x578e,	// (0x00006d23) fep_vkb_keypad_pane_g4

0x5805,	// (0x00006d9a) fep_vkb_bottom_pane_g2_ParamLimits

0x5805,	// (0x00006d9a) fep_vkb_bottom_pane_g2

0x0001,

0xfb10,	// (0x000110a5) fep_vkb_bottom_pane_g_ParamLimits

0xfb10,	// (0x000110a5) fep_vkb_bottom_pane_g

0x5244,	// (0x000067d9) cell_vkb_side_pane_g2

0x0001,

0xfb1a,	// (0x000110af) cell_vkb_side_pane_g

0x5890,	// (0x00006e25) cell_vkb_side_pane_t1

0x589e,	// (0x00006e33) cell_vkb_side_pane_t1_copy1

0x5244,	// (0x000067d9) bg_fep_vkb_candidate_pane_g2

0x59e2,	// (0x00006f77) cell_vkb_candidate_pane_ParamLimits

0x5525,	// (0x00006aba) aid_size_cell_vkb_ParamLimits

0x5525,	// (0x00006aba) aid_size_cell_vkb

0x59e2,	// (0x00006f77) cell_vkb_candidate_pane

0x5a1c,	// (0x00006fb1) bg_popup_fep_shadow_pane_g1

0xcad4,	// (0x0000e069) fep_vkb_bottom_pane_ParamLimits

0xcad4,	// (0x0000e069) fep_vkb_bottom_pane

0x55f4,	// (0x00006b89) fep_vkb_candidate_pane_ParamLimits

0x55f4,	// (0x00006b89) fep_vkb_candidate_pane

0xcb00,	// (0x0000e095) fep_vkb_keypad_pane_ParamLimits

0xcb00,	// (0x0000e095) fep_vkb_keypad_pane

0xcb27,	// (0x0000e0bc) fep_vkb_side_pane_ParamLimits

0xcb27,	// (0x0000e0bc) fep_vkb_side_pane

0xcb63,	// (0x0000e0f8) fep_vkb_top_pane_ParamLimits

0xcb63,	// (0x0000e0f8) fep_vkb_top_pane

0x56bb,	// (0x00006c50) fep_vkb_top_pane_g1_ParamLimits

0x56bb,	// (0x00006c50) fep_vkb_top_pane_g1

0x56ca,	// (0x00006c5f) fep_vkb_top_pane_g2_ParamLimits

0x56ca,	// (0x00006c5f) fep_vkb_top_pane_g2

0x56d9,	// (0x00006c6e) fep_vkb_top_pane_g3_ParamLimits

0x56d9,	// (0x00006c6e) fep_vkb_top_pane_g3

0x0003,

0xfb00,	// (0x00011095) fep_vkb_top_pane_g_ParamLimits

0xfb00,	// (0x00011095) fep_vkb_top_pane_g

0x56f7,	// (0x00006c8c) fep_vkb_top_text_pane_ParamLimits

0x56f7,	// (0x00006c8c) fep_vkb_top_text_pane

0xcb9f,	// (0x0000e134) fep_vkb_side_pane_g1_ParamLimits

0xcb9f,	// (0x0000e134) fep_vkb_side_pane_g1

0x5751,	// (0x00006ce6) grid_vkb_side_pane_ParamLimits

0x5751,	// (0x00006ce6) grid_vkb_side_pane

0x5a24,	// (0x00006fb9) bg_popup_fep_shadow_pane_g2

0x5a2d,	// (0x00006fc2) bg_popup_fep_shadow_pane_g3

0x5a35,	// (0x00006fca) bg_popup_fep_shadow_pane_g4

0x5a3e,	// (0x00006fd3) bg_popup_fep_shadow_pane_g5

0x5a48,	// (0x00006fdd) bg_popup_fep_shadow_pane_g6

0x5a50,	// (0x00006fe5) bg_popup_fep_shadow_pane_g7

0xf4ff,	// (0x00010a94) bg_popup_fep_shadow_pane_g8

0x57b0,	// (0x00006d45) grid_vkb_keypad_number_pane_ParamLimits

0x57b0,	// (0x00006d45) grid_vkb_keypad_number_pane

0x57c4,	// (0x00006d59) grid_vkb_keypad_pane_ParamLimits

0x57c4,	// (0x00006d59) grid_vkb_keypad_pane

0x57ea,	// (0x00006d7f) fep_vkb_bottom_pane_g1_ParamLimits

0x57ea,	// (0x00006d7f) fep_vkb_bottom_pane_g1

0x5813,	// (0x00006da8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5813,	// (0x00006da8) grid_vkb_keypad_bottom_left_pane

0x5828,	// (0x00006dbd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5828,	// (0x00006dbd) grid_vkb_keypad_bottom_right_pane

0x583d,	// (0x00006dd2) fep_vkb_top_text_pane_g1

0xcbe6,	// (0x0000e17b) fep_vkb_top_text_pane_t1

0xcbf8,	// (0x0000e18d) cell_vkb_side_pane_ParamLimits

0xcbf8,	// (0x0000e18d) cell_vkb_side_pane

0x5244,	// (0x000067d9) cell_vkb_side_pane_g1

0x58ac,	// (0x00006e41) cell_vkb_keypad_pane_ParamLimits

0x58ac,	// (0x00006e41) cell_vkb_keypad_pane

0x5939,	// (0x00006ece) cell_vkb_keypad_pane_g1

0x0008,

0xfb2d,	// (0x000110c2) bg_popup_fep_shadow_pane_g

0x5244,	// (0x000067d9) cell_hwr_side_pane_g1

0x5244,	// (0x000067d9) cell_hwr_side_pane_g2

0x5943,	// (0x00006ed8) cell_vkb_keypad_pane_t1

0xcc0e,	// (0x0000e1a3) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcc0e,	// (0x0000e1a3) cell_vkb_keypad_bottom_left_pane

0xcc23,	// (0x0000e1b8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcc23,	// (0x0000e1b8) cell_vkb_keypad_bottom_right_pane

0x5244,	// (0x000067d9) cell_vkb_keypad_bottom_left_pane_g1

0x5244,	// (0x000067d9) cell_vkb_keypad_bottom_right_pane_g1

0x59a7,	// (0x00006f3c) cell_vkb_keypad_number_pane_ParamLimits

0x59a7,	// (0x00006f3c) cell_vkb_keypad_number_pane

0x59c6,	// (0x00006f5b) cell_vkb_keypad_number_pane_g1

0x59d0,	// (0x00006f65) cell_vkb_keypad_number_pane_g2

0x59d9,	// (0x00006f6e) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb1f,	// (0x000110b4) cell_vkb_keypad_number_pane_g

0x5943,	// (0x00006ed8) cell_vkb_keypad_number_pane_t1

0x5a03,	// (0x00006f98) fep_vkb_candidate_pane_g1

0x0001,

0xfb1a,	// (0x000110af) cell_hwr_side_pane_g

0x5a62,	// (0x00006ff7) cell_hwr_side_pane_t1

0x5a70,	// (0x00007005) cell_hwr_side_pane_t1_copy1

0x56e9,	// (0x00006c7e) cell_hwr_candidate_pane_g1

0x5ac0,	// (0x00007055) cell_hwr_candidate_pane_t1

0x5244,	// (0x000067d9) cell_vkb_candidate_pane_g2

0x5b14,	// (0x000070a9) cell_vkb_candidate_pane_t1

0x52a5,	// (0x0000683a) bg_popup_fep_shadow_pane_ParamLimits

0x52a5,	// (0x0000683a) bg_popup_fep_shadow_pane

0x535c,	// (0x000068f1) bg_fep_hwr_top_pane_g4

0x53ca,	// (0x0000695f) bg_hwr_side_pane_g1_ParamLimits

0x53ca,	// (0x0000695f) bg_hwr_side_pane_g1

0xca8d,	// (0x0000e022) cell_hwr_side_pane_ParamLimits

0xca8d,	// (0x0000e022) cell_hwr_side_pane

0x543c,	// (0x000069d1) fep_hwr_write_pane_g1_ParamLimits

0x543c,	// (0x000069d1) fep_hwr_write_pane_g1

0x5449,	// (0x000069de) fep_hwr_write_pane_g2_ParamLimits

0x5449,	// (0x000069de) fep_hwr_write_pane_g2

0x5456,	// (0x000069eb) fep_hwr_write_pane_g3_ParamLimits

0x5456,	// (0x000069eb) fep_hwr_write_pane_g3

0xcaad,	// (0x0000e042) fep_hwr_write_pane_g4_ParamLimits

0xcaad,	// (0x0000e042) fep_hwr_write_pane_g4

0x0005,

0xfaec,	// (0x00011081) fep_hwr_write_pane_g_ParamLimits

0xfaec,	// (0x00011081) fep_hwr_write_pane_g

0x535c,	// (0x000068f1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x535c,	// (0x000068f1) bg_fep_hwr_candidate_pane_g2

0x549f,	// (0x00006a34) cell_hwr_candidate_pane_ParamLimits

0x549f,	// (0x00006a34) cell_hwr_candidate_pane

0x54f1,	// (0x00006a86) fep_hwr_candidate_pane_g1_ParamLimits

0x5553,	// (0x00006ae8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5553,	// (0x00006ae8) bg_popup_fep_shadow_pane_cp2

0x56e9,	// (0x00006c7e) fep_vkb_top_pane_g4_ParamLimits

0x56e9,	// (0x00006c7e) fep_vkb_top_pane_g4

0x572f,	// (0x00006cc4) fep_vkb_side_pane_g2_ParamLimits

0x572f,	// (0x00006cc4) fep_vkb_side_pane_g2

0xaef5,	// (0x0000c48a) list_setting_pane_t4_ParamLimits

0xaef5,	// (0x0000c48a) list_setting_pane_t4

0xaf71,	// (0x0000c506) list_setting_number_pane_t5_ParamLimits

0xaf71,	// (0x0000c506) list_setting_number_pane_t5

0x0897,	// (0x00001e2c) list_double_heading_pane_cp2_ParamLimits

0x0897,	// (0x00001e2c) list_double_heading_pane_cp2

0x5b22,	// (0x000070b7) list_double_heading_pane_g1_cp2_ParamLimits

0x5b22,	// (0x000070b7) list_double_heading_pane_g1_cp2

0x5b2e,	// (0x000070c3) list_double_heading_pane_g2_cp2_ParamLimits

0x5b2e,	// (0x000070c3) list_double_heading_pane_g2_cp2

0x5b42,	// (0x000070d7) list_double_heading_pane_t1_cp2_ParamLimits

0x5b42,	// (0x000070d7) list_double_heading_pane_t1_cp2

0x5b58,	// (0x000070ed) list_double_heading_pane_t2_cp2_ParamLimits

0x5b58,	// (0x000070ed) list_double_heading_pane_t2_cp2

0xea18,	// (0x0000ffad) aid_value_unit2

0xec46,	// (0x000101db) popup_preview_fixed_window

0xee82,	// (0x00010417) bg_popup_preview_window_pane_cp02

0x5b6a,	// (0x000070ff) list_preview_fixed_pane

0x5bb0,	// (0x00007145) list_empty_pane_fp_ParamLimits

0x5bb0,	// (0x00007145) list_empty_pane_fp

0x5bb0,	// (0x00007145) list_single_cale_day_pane_fp_ParamLimits

0x5bb0,	// (0x00007145) list_single_cale_day_pane_fp

0x5bb0,	// (0x00007145) list_single_graphic_heading_pane_fp_ParamLimits

0x5bb0,	// (0x00007145) list_single_graphic_heading_pane_fp

0x5bb0,	// (0x00007145) list_single_graphic_pane_fp_ParamLimits

0x5bb0,	// (0x00007145) list_single_graphic_pane_fp

0x5bb0,	// (0x00007145) list_single_heading_pane_fp_ParamLimits

0x5bb0,	// (0x00007145) list_single_heading_pane_fp

0x5bb0,	// (0x00007145) list_single_pane_fp_ParamLimits

0x5bb0,	// (0x00007145) list_single_pane_fp

0x5bc9,	// (0x0000715e) list_single_pane_fp_g1_ParamLimits

0x5bc9,	// (0x0000715e) list_single_pane_fp_g1

0xf34d,	// (0x000108e2) list_single_pane_fp_g2_ParamLimits

0xf34d,	// (0x000108e2) list_single_pane_fp_g2

0x5bd5,	// (0x0000716a) list_single_pane_fp_g3_ParamLimits

0x5bd5,	// (0x0000716a) list_single_pane_fp_g3

0x5be9,	// (0x0000717e) list_single_pane_fp_g4_ParamLimits

0x5be9,	// (0x0000717e) list_single_pane_fp_g4

0x0003,

0xfb4e,	// (0x000110e3) list_single_pane_fp_g_ParamLimits

0xfb4e,	// (0x000110e3) list_single_pane_fp_g

0x5bf5,	// (0x0000718a) list_single_pane_fp_t1_ParamLimits

0x5bf5,	// (0x0000718a) list_single_pane_fp_t1

0x5c0c,	// (0x000071a1) list_single_graphic_pane_fp_g1_ParamLimits

0x5c0c,	// (0x000071a1) list_single_graphic_pane_fp_g1

0x5bc9,	// (0x0000715e) list_single_graphic_pane_fp_g2_ParamLimits

0x5bc9,	// (0x0000715e) list_single_graphic_pane_fp_g2

0xf34d,	// (0x000108e2) list_single_graphic_pane_fp_g3_ParamLimits

0xf34d,	// (0x000108e2) list_single_graphic_pane_fp_g3

0x5bd5,	// (0x0000716a) list_single_graphic_pane_fp_g4_ParamLimits

0x5bd5,	// (0x0000716a) list_single_graphic_pane_fp_g4

0x5be9,	// (0x0000717e) list_single_graphic_pane_fp_g5_ParamLimits

0x5be9,	// (0x0000717e) list_single_graphic_pane_fp_g5

0x0004,

0xfb57,	// (0x000110ec) list_single_graphic_pane_fp_g_ParamLimits

0xfb57,	// (0x000110ec) list_single_graphic_pane_fp_g

0x5c18,	// (0x000071ad) list_single_graphic_pane_fp_t1_ParamLimits

0x5c18,	// (0x000071ad) list_single_graphic_pane_fp_t1

0x5c0c,	// (0x000071a1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5c0c,	// (0x000071a1) list_single_graphic_heading_pane_fp_g1

0x5bc9,	// (0x0000715e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5bc9,	// (0x0000715e) list_single_graphic_heading_pane_fp_g2

0xf34d,	// (0x000108e2) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xf34d,	// (0x000108e2) list_single_graphic_heading_pane_fp_g3

0x5bd5,	// (0x0000716a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5bd5,	// (0x0000716a) list_single_graphic_heading_pane_fp_g4

0x5be9,	// (0x0000717e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5be9,	// (0x0000717e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb57,	// (0x000110ec) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb57,	// (0x000110ec) list_single_graphic_heading_pane_fp_g

0x5c2e,	// (0x000071c3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5c2e,	// (0x000071c3) list_single_graphic_heading_pane_fp_t1

0x5c44,	// (0x000071d9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5c44,	// (0x000071d9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb62,	// (0x000110f7) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb62,	// (0x000110f7) list_single_graphic_heading_pane_fp_t

0x5c56,	// (0x000071eb) list_single_cale_day_pane_fp_g1_ParamLimits

0x5c56,	// (0x000071eb) list_single_cale_day_pane_fp_g1

0x5c8e,	// (0x00007223) list_single_cale_day_pane_fp_g2_ParamLimits

0x5c8e,	// (0x00007223) list_single_cale_day_pane_fp_g2

0x5c9a,	// (0x0000722f) list_single_cale_day_pane_fp_g3_ParamLimits

0x5c9a,	// (0x0000722f) list_single_cale_day_pane_fp_g3

0x5cc2,	// (0x00007257) list_single_cale_day_pane_fp_g4_ParamLimits

0x5cc2,	// (0x00007257) list_single_cale_day_pane_fp_g4

0x5ce6,	// (0x0000727b) list_single_cale_day_pane_fp_g5_ParamLimits

0x5ce6,	// (0x0000727b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb67,	// (0x000110fc) list_single_cale_day_pane_fp_g_ParamLimits

0xfb67,	// (0x000110fc) list_single_cale_day_pane_fp_g

0x5d0a,	// (0x0000729f) list_single_cale_day_pane_fp_t1_ParamLimits

0x5d0a,	// (0x0000729f) list_single_cale_day_pane_fp_t1

0x5d30,	// (0x000072c5) list_single_cale_day_pane_fp_t2_ParamLimits

0x5d30,	// (0x000072c5) list_single_cale_day_pane_fp_t2

0x5d49,	// (0x000072de) list_single_cale_day_pane_fp_t3_ParamLimits

0x5d49,	// (0x000072de) list_single_cale_day_pane_fp_t3

0x0002,

0xfb72,	// (0x00011107) list_single_cale_day_pane_fp_t_ParamLimits

0xfb72,	// (0x00011107) list_single_cale_day_pane_fp_t

0x5bc9,	// (0x0000715e) list_empty_pane_fp_g1_ParamLimits

0x5bc9,	// (0x0000715e) list_empty_pane_fp_g1

0x5d62,	// (0x000072f7) list_empty_pane_fp_t1

0x5d70,	// (0x00007305) list_empty_pane_fp_t2

0x0001,

0xfb79,	// (0x0001110e) list_empty_pane_fp_t

0x5bc9,	// (0x0000715e) list_single_heading_pane_fp_g1_ParamLimits

0x5bc9,	// (0x0000715e) list_single_heading_pane_fp_g1

0xf34d,	// (0x000108e2) list_single_heading_pane_fp_g2_ParamLimits

0xf34d,	// (0x000108e2) list_single_heading_pane_fp_g2

0x5bd5,	// (0x0000716a) list_single_heading_pane_fp_g3_ParamLimits

0x5bd5,	// (0x0000716a) list_single_heading_pane_fp_g3

0x0002,

0xfb7e,	// (0x00011113) list_single_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x00011113) list_single_heading_pane_fp_g

0x5d7e,	// (0x00007313) list_single_heading_pane_fp_t1_ParamLimits

0x5d7e,	// (0x00007313) list_single_heading_pane_fp_t1

0x5d90,	// (0x00007325) list_single_heading_pane_fp_t2_ParamLimits

0x5d90,	// (0x00007325) list_single_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0001111a) list_single_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0001111a) list_single_heading_pane_fp_t

0x01fa,	// (0x0000178f) aid_size_cell_fast

0xee65,	// (0x000103fa) soft_indicator_pane_cp1_t1

0x0237,	// (0x000017cc) cell_app_pane_cp2_ParamLimits

0x0237,	// (0x000017cc) cell_app_pane_cp2

0x52c7,	// (0x0000685c) fep_hwr_candidate_drop_down_list_pane

0x550b,	// (0x00006aa0) fep_hwr_candidate_pane_g3_ParamLimits

0x550b,	// (0x00006aa0) fep_hwr_candidate_pane_g3

0x5518,	// (0x00006aad) fep_hwr_candidate_pane_g4_ParamLimits

0x5518,	// (0x00006aad) fep_hwr_candidate_pane_g4

0x0002,

0xfaf9,	// (0x0001108e) fep_hwr_candidate_pane_g_ParamLimits

0xfaf9,	// (0x0001108e) fep_hwr_candidate_pane_g

0x55e3,	// (0x00006b78) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x55e3,	// (0x00006b78) fep_vkb_candidate_drop_down_list_pane

0x5a0b,	// (0x00006fa0) fep_vkb_candidate_pane_g3

0x5a13,	// (0x00006fa8) fep_vkb_candidate_pane_g4

0x0002,

0xfb26,	// (0x000110bb) fep_vkb_candidate_pane_g

0x56e9,	// (0x00006c7e) cell_hwr_candidate_pane_g1_ParamLimits

0x5a7e,	// (0x00007013) cell_hwr_candidate_pane_g3_ParamLimits

0x5a7e,	// (0x00007013) cell_hwr_candidate_pane_g3

0x5a9f,	// (0x00007034) cell_hwr_candidate_pane_g4_ParamLimits

0x5a9f,	// (0x00007034) cell_hwr_candidate_pane_g4

0x0002,

0xfb40,	// (0x000110d5) cell_hwr_candidate_pane_g_ParamLimits

0xfb40,	// (0x000110d5) cell_hwr_candidate_pane_g

0x5ade,	// (0x00007073) cell_vkb_candidate_pane_g3_ParamLimits

0x5ade,	// (0x00007073) cell_vkb_candidate_pane_g3

0x5af9,	// (0x0000708e) cell_vkb_candidate_pane_g4_ParamLimits

0x5af9,	// (0x0000708e) cell_vkb_candidate_pane_g4

0x5da6,	// (0x0000733b) cell_app_pane_cp2_g1_ParamLimits

0x5da6,	// (0x0000733b) cell_app_pane_cp2_g1

0x5dc4,	// (0x00007359) cell_app_pane_cp2_g2_ParamLimits

0x5dc4,	// (0x00007359) cell_app_pane_cp2_g2

0x0001,

0xfb8a,	// (0x0001111f) cell_app_pane_cp2_g_ParamLimits

0xfb8a,	// (0x0001111f) cell_app_pane_cp2_g

0x5dd0,	// (0x00007365) cell_app_pane_cp2_t1_ParamLimits

0x5dd0,	// (0x00007365) cell_app_pane_cp2_t1

0xf424,	// (0x000109b9) grid_highlight_pane_cp1_ParamLimits

0xf424,	// (0x000109b9) grid_highlight_pane_cp1

0x5de2,	// (0x00007377) cell_hwr_candidate_pane_cp1_ParamLimits

0x5de2,	// (0x00007377) cell_hwr_candidate_pane_cp1

0x56e9,	// (0x00006c7e) fep_hwr_candidate_drop_down_list_pane_g1

0x5e06,	// (0x0000739b) fep_hwr_candidate_drop_down_list_pane_g2

0x5e13,	// (0x000073a8) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x00011124) fep_hwr_candidate_drop_down_list_pane_g

0x5e20,	// (0x000073b5) fep_hwr_candidate_drop_down_list_scroll_pane

0x5e29,	// (0x000073be) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5e29,	// (0x000073be) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5e36,	// (0x000073cb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5e36,	// (0x000073cb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5e43,	// (0x000073d8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5e43,	// (0x000073d8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x5ade,	// (0x00007073) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5ade,	// (0x00007073) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5af9,	// (0x0000708e) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5af9,	// (0x0000708e) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5e50,	// (0x000073e5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5e50,	// (0x000073e5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5e6b,	// (0x00007400) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5e6b,	// (0x00007400) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5e86,	// (0x0000741b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5e86,	// (0x0000741b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb96,	// (0x0001112b) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb96,	// (0x0001112b) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5ea1,	// (0x00007436) cell_vkb_candidate_pane_cp1_ParamLimits

0x5ea1,	// (0x00007436) cell_vkb_candidate_pane_cp1

0x56e9,	// (0x00006c7e) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x56e9,	// (0x00006c7e) fep_vkb_candidate_drop_down_list_pane_g1

0x5e06,	// (0x0000739b) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5e06,	// (0x0000739b) fep_vkb_candidate_drop_down_list_pane_g2

0x5e13,	// (0x000073a8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5e13,	// (0x000073a8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb8f,	// (0x00011124) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb8f,	// (0x00011124) fep_vkb_candidate_drop_down_list_pane_g

0x5ec7,	// (0x0000745c) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5ec7,	// (0x0000745c) fep_vkb_candidate_drop_down_list_scroll_pane

0x5ed4,	// (0x00007469) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5ed4,	// (0x00007469) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5ee1,	// (0x00007476) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5ee1,	// (0x00007476) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5eed,	// (0x00007482) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5eed,	// (0x00007482) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x5a7e,	// (0x00007013) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x5a7e,	// (0x00007013) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x5a9f,	// (0x00007034) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5a9f,	// (0x00007034) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5ef9,	// (0x0000748e) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5ef9,	// (0x0000748e) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5f1a,	// (0x000074af) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5f1a,	// (0x000074af) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5f3b,	// (0x000074d0) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5f3b,	// (0x000074d0) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba7,	// (0x0001113c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba7,	// (0x0001113c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa7dc,	// (0x0000bd71) title_pane_g1_ParamLimits

0xa7ef,	// (0x0000bd84) title_pane_g2_ParamLimits

0xf527,	// (0x00010abc) title_pane_g_ParamLimits

0x0831,	// (0x00001dc6) aid_call2_pane

0x0839,	// (0x00001dce) aid_call_pane

0x0841,	// (0x00001dd6) popup_clock_analogue_window_g1

0x0841,	// (0x00001dd6) popup_clock_analogue_window_g2

0x0849,	// (0x00001dde) popup_clock_analogue_window_g3

0x0852,	// (0x00001de7) popup_clock_analogue_window_g4

0xea2a,	// (0x0000ffbf) popup_clock_analogue_window_g5

0x0004,

0xf6cc,	// (0x00010c61) popup_clock_analogue_window_g

0x085a,	// (0x00001def) popup_clock_analogue_window_t1

0x0907,	// (0x00001e9c) clock_digital_number_pane_ParamLimits

0x0907,	// (0x00001e9c) clock_digital_number_pane

0x0913,	// (0x00001ea8) clock_digital_number_pane_cp02_ParamLimits

0x0913,	// (0x00001ea8) clock_digital_number_pane_cp02

0x091f,	// (0x00001eb4) clock_digital_number_pane_cp03_ParamLimits

0x091f,	// (0x00001eb4) clock_digital_number_pane_cp03

0x092b,	// (0x00001ec0) clock_digital_number_pane_cp04_ParamLimits

0x092b,	// (0x00001ec0) clock_digital_number_pane_cp04

0x0937,	// (0x00001ecc) clock_digital_separator_pane_ParamLimits

0x0937,	// (0x00001ecc) clock_digital_separator_pane

0x0943,	// (0x00001ed8) popup_clock_digital_window_t1_ParamLimits

0x0943,	// (0x00001ed8) popup_clock_digital_window_t1

0xea2a,	// (0x0000ffbf) clock_digital_number_pane_g1

0xea2a,	// (0x0000ffbf) clock_digital_number_pane_g2

0x0001,

0xf6d7,	// (0x00010c6c) clock_digital_number_pane_g

0xea2a,	// (0x0000ffbf) clock_digital_separator_pane_g1

0xea2a,	// (0x0000ffbf) clock_digital_separator_pane_g2

0x0001,

0xf6d7,	// (0x00010c6c) clock_digital_separator_pane_g

0xbd69,	// (0x0000d2fe) aid_fill_nsta_ParamLimits

0xbe9f,	// (0x0000d434) indicator_nsta_pane_ParamLimits

0x1fa6,	// (0x0000353b) popup_clock_analogue_window

0x1fa6,	// (0x0000353b) popup_clock_digital_window

0xc872,	// (0x0000de07) grid_indicator_nsta_pane_ParamLimits

0x4bfc,	// (0x00006191) clock_nsta_pane_t2

0x0001,

0xfa79,	// (0x0001100e) clock_nsta_pane_t

0x061a,	// (0x00001baf) aid_size_max_handle

0xb270,	// (0x0000c805) aid_size_min_handle

0x1125,	// (0x000026ba) editor_scroll_pane

0x5f56,	// (0x000074eb) ex_editor_pane

0x0167,	// (0x000016fc) scroll_pane_cp13

0xf330,	// (0x000108c5) scroll_pane_cp14

0x088f,	// (0x00001e24) scroll_pane_cp36

0xb2fd,	// (0x0000c892) list_single_graphic_hl_pane_cp2_ParamLimits

0xb2fd,	// (0x0000c892) list_single_graphic_hl_pane_cp2

0xc6fb,	// (0x0000dc90) list_single_graphic_hl_pane_ParamLimits

0xc6fb,	// (0x0000dc90) list_single_graphic_hl_pane

0x5f5e,	// (0x000074f3) aid_size_min_hl_cp1

0x5f67,	// (0x000074fc) list_highlight_pane_cp34_ParamLimits

0x5f67,	// (0x000074fc) list_highlight_pane_cp34

0x5f78,	// (0x0000750d) list_single_graphic_hl_pane_g1_ParamLimits

0x5f78,	// (0x0000750d) list_single_graphic_hl_pane_g1

0xcc3e,	// (0x0000e1d3) list_single_graphic_hl_pane_g2_ParamLimits

0xcc3e,	// (0x0000e1d3) list_single_graphic_hl_pane_g2

0xcc3e,	// (0x0000e1d3) list_single_graphic_hl_pane_g3_ParamLimits

0xcc3e,	// (0x0000e1d3) list_single_graphic_hl_pane_g3

0x105c,	// (0x000025f1) list_single_graphic_hl_pane_g4_ParamLimits

0x105c,	// (0x000025f1) list_single_graphic_hl_pane_g4

0xcc4a,	// (0x0000e1df) list_single_graphic_hl_pane_g5_ParamLimits

0xcc4a,	// (0x0000e1df) list_single_graphic_hl_pane_g5

0x0004,

0xfbb8,	// (0x0001114d) list_single_graphic_hl_pane_g_ParamLimits

0xfbb8,	// (0x0001114d) list_single_graphic_hl_pane_g

0x325b,	// (0x000047f0) list_single_graphic_hl_pane_t1_ParamLimits

0x325b,	// (0x000047f0) list_single_graphic_hl_pane_t1

0x5fbb,	// (0x00007550) aid_size_min_hl_cp2

0x5fc4,	// (0x00007559) list_highlight_pane_cp34_cp2_ParamLimits

0x5fc4,	// (0x00007559) list_highlight_pane_cp34_cp2

0x5f78,	// (0x0000750d) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5f78,	// (0x0000750d) list_single_graphic_hl_pane_g1_cp2

0x5fd1,	// (0x00007566) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5fd1,	// (0x00007566) list_single_graphic_hl_pane_g2_cp2

0x5fdd,	// (0x00007572) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5fdd,	// (0x00007572) list_single_graphic_hl_pane_g3_cp2

0x5feb,	// (0x00007580) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5feb,	// (0x00007580) list_single_graphic_hl_pane_g4_cp2

0x5ff7,	// (0x0000758c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5ff7,	// (0x0000758c) list_single_graphic_hl_pane_g5_cp2

0xb529,	// (0x0000cabe) control_pane_g4_ParamLimits

0xb529,	// (0x0000cabe) control_pane_g4

0x1656,	// (0x00002beb) bg_popup_sub_pane_cp10_ParamLimits

0x524e,	// (0x000067e3) list_choice_list_pane_ParamLimits

0x525d,	// (0x000067f2) scroll_pane_cp23

0xee82,	// (0x00010417) bg_popup_preview_window_pane_cp02_ParamLimits

0x5b6a,	// (0x000070ff) list_preview_fixed_pane_ParamLimits

0x5b80,	// (0x00007115) list_preview_fixed_pane_cp_ParamLimits

0x5b80,	// (0x00007115) list_preview_fixed_pane_cp

0x5b8c,	// (0x00007121) popup_preview_fixed_window_g1_ParamLimits

0x5b8c,	// (0x00007121) popup_preview_fixed_window_g1

0x5b98,	// (0x0000712d) popup_preview_fixed_window_g2_ParamLimits

0x5b98,	// (0x0000712d) popup_preview_fixed_window_g2

0x0002,

0xfb47,	// (0x000110dc) popup_preview_fixed_window_g_ParamLimits

0xfb47,	// (0x000110dc) popup_preview_fixed_window_g

0x0497,	// (0x00001a2c) aid_navi_side_left_pane_ParamLimits

0x04ac,	// (0x00001a41) aid_navi_side_right_pane_ParamLimits

0x04c4,	// (0x00001a59) navi_icon_pane_stacon_ParamLimits

0x04d8,	// (0x00001a6d) navi_navi_pane_stacon_ParamLimits

0x04c4,	// (0x00001a59) navi_text_pane_stacon_ParamLimits

0xea20,	// (0x0000ffb5) main_text_info_pane

0x6021,	// (0x000075b6) listscroll_text_info_pane

0x6029,	// (0x000075be) list_text_info_pane_ParamLimits

0x6029,	// (0x000075be) list_text_info_pane

0x6038,	// (0x000075cd) scroll_pane_cp24_ParamLimits

0x6038,	// (0x000075cd) scroll_pane_cp24

0xcc5e,	// (0x0000e1f3) list_text_info_pane_t1_ParamLimits

0xcc5e,	// (0x0000e1f3) list_text_info_pane_t1

0xb65c,	// (0x0000cbf1) popup_fast_swap2_window_ParamLimits

0xb65c,	// (0x0000cbf1) popup_fast_swap2_window

0x607b,	// (0x00007610) aid_size_cell_fast2

0xea20,	// (0x0000ffb5) bg_popup_window_pane_cp17

0x2891,	// (0x00003e26) heading_pane_cp2

0x6085,	// (0x0000761a) listscroll_fast2_pane

0x608d,	// (0x00007622) grid_fast2_pane

0x6097,	// (0x0000762c) listscroll_fast2_pane_g1

0x60a1,	// (0x00007636) listscroll_fast2_pane_g2

0x0001,

0xfbc3,	// (0x00011158) listscroll_fast2_pane_g

0x0167,	// (0x000016fc) scroll_pane_cp26

0x60ab,	// (0x00007640) cell_fast2_pane_ParamLimits

0x60ab,	// (0x00007640) cell_fast2_pane

0x60c2,	// (0x00007657) cell_fast2_pane_g1

0x60cb,	// (0x00007660) cell_fast2_pane_g2

0x60d4,	// (0x00007669) cell_fast2_pane_g3

0x0002,

0xfbc8,	// (0x0001115d) cell_fast2_pane_g

0xf0f7,	// (0x0001068c) grid_highlight_pane_cp9

0xf10c,	// (0x000106a1) main_eswt_pane_ParamLimits

0xf10c,	// (0x000106a1) main_eswt_pane

0x604d,	// (0x000075e2) list_single_text_info_pane

0x60dc,	// (0x00007671) eswt_ctrl_button_pane

0x60dc,	// (0x00007671) eswt_ctrl_canvas_pane

0x60e4,	// (0x00007679) eswt_ctrl_combo_pane

0x60dc,	// (0x00007671) eswt_ctrl_default_pane

0x60dc,	// (0x00007671) eswt_ctrl_label_pane

0x60ec,	// (0x00007681) eswt_ctrl_wait_pane

0x60f4,	// (0x00007689) eswt_shell_pane

0xea20,	// (0x0000ffb5) listscroll_eswt_app_pane

0x6114,	// (0x000076a9) popup_eswt_tasktip_window_ParamLimits

0x6114,	// (0x000076a9) popup_eswt_tasktip_window

0x2412,	// (0x000039a7) bg_popup_window_pane_cp18

0x6125,	// (0x000076ba) eswt_control_pane_g1_ParamLimits

0x6125,	// (0x000076ba) eswt_control_pane_g1

0x6132,	// (0x000076c7) eswt_control_pane_g2_ParamLimits

0x6132,	// (0x000076c7) eswt_control_pane_g2

0x613f,	// (0x000076d4) eswt_control_pane_g3_ParamLimits

0x613f,	// (0x000076d4) eswt_control_pane_g3

0x614c,	// (0x000076e1) eswt_control_pane_g4_ParamLimits

0x614c,	// (0x000076e1) eswt_control_pane_g4

0x0003,

0xfbcf,	// (0x00011164) eswt_control_pane_g_ParamLimits

0xfbcf,	// (0x00011164) eswt_control_pane_g

0xf424,	// (0x000109b9) bg_button_pane_ParamLimits

0xf424,	// (0x000109b9) bg_button_pane

0xf10c,	// (0x000106a1) common_borders_pane_copy2_ParamLimits

0xf10c,	// (0x000106a1) common_borders_pane_copy2

0x6159,	// (0x000076ee) control_button_pane_g1_ParamLimits

0x6159,	// (0x000076ee) control_button_pane_g1

0x6165,	// (0x000076fa) control_button_pane_g2_ParamLimits

0x6165,	// (0x000076fa) control_button_pane_g2

0x6171,	// (0x00007706) control_button_pane_g3_ParamLimits

0x6171,	// (0x00007706) control_button_pane_g3

0x0002,

0xfbd8,	// (0x0001116d) control_button_pane_g_ParamLimits

0xfbd8,	// (0x0001116d) control_button_pane_g

0x6185,	// (0x0000771a) control_button_pane_t1

0x6193,	// (0x00007728) control_button_pane_t2

0x0001,

0xfbdf,	// (0x00011174) control_button_pane_t

0x2273,	// (0x00003808) bg_button_pane_g1

0x227b,	// (0x00003810) bg_button_pane_g2

0x2283,	// (0x00003818) bg_button_pane_g3

0x228b,	// (0x00003820) bg_button_pane_g4

0x2293,	// (0x00003828) bg_button_pane_g5

0x229b,	// (0x00003830) bg_button_pane_g6

0x22a3,	// (0x00003838) bg_button_pane_g7

0x22ab,	// (0x00003840) bg_button_pane_g8

0x22b3,	// (0x00003848) bg_button_pane_g9

0x0008,

0xf82e,	// (0x00010dc3) bg_button_pane_g

0x5209,	// (0x0000679e) common_borders_pane_ParamLimits

0x5209,	// (0x0000679e) common_borders_pane

0x6125,	// (0x000076ba) eswt_control_pane_g1_copy1_ParamLimits

0x6125,	// (0x000076ba) eswt_control_pane_g1_copy1

0x6132,	// (0x000076c7) eswt_control_pane_g2_copy1_ParamLimits

0x6132,	// (0x000076c7) eswt_control_pane_g2_copy1

0x613f,	// (0x000076d4) eswt_control_pane_g3_copy1_ParamLimits

0x613f,	// (0x000076d4) eswt_control_pane_g3_copy1

0x614c,	// (0x000076e1) eswt_control_pane_g4_copy1_ParamLimits

0x614c,	// (0x000076e1) eswt_control_pane_g4_copy1

0x5244,	// (0x000067d9) bg_eswt_ctrl_canvas_pane_g1

0x5209,	// (0x0000679e) common_borders_pane_cp2_ParamLimits

0x5209,	// (0x0000679e) common_borders_pane_cp2

0x5209,	// (0x0000679e) common_borders_pane_cp3_ParamLimits

0x5209,	// (0x0000679e) common_borders_pane_cp3

0x61a1,	// (0x00007736) separator_horizontal_pane

0x61a9,	// (0x0000773e) separator_vertical_pane

0x6125,	// (0x000076ba) eswt_control_pane_g1_copy2_ParamLimits

0x6125,	// (0x000076ba) eswt_control_pane_g1_copy2

0x6132,	// (0x000076c7) eswt_control_pane_g2_copy2_ParamLimits

0x6132,	// (0x000076c7) eswt_control_pane_g2_copy2

0x613f,	// (0x000076d4) eswt_control_pane_g3_copy2_ParamLimits

0x613f,	// (0x000076d4) eswt_control_pane_g3_copy2

0x614c,	// (0x000076e1) eswt_control_pane_g4_copy2_ParamLimits

0x614c,	// (0x000076e1) eswt_control_pane_g4_copy2

0xea20,	// (0x0000ffb5) common_borders_pane_cp4

0x61b2,	// (0x00007747) separator_horizontal_pane_g1

0x61bb,	// (0x00007750) separator_horizontal_pane_g2

0x61c4,	// (0x00007759) separator_horizontal_pane_g3

0x0002,

0xfbe4,	// (0x00011179) separator_horizontal_pane_g

0x6125,	// (0x000076ba) eswt_control_pane_g1_copy3_ParamLimits

0x6125,	// (0x000076ba) eswt_control_pane_g1_copy3

0x6132,	// (0x000076c7) eswt_control_pane_g2_copy3_ParamLimits

0x6132,	// (0x000076c7) eswt_control_pane_g2_copy3

0x613f,	// (0x000076d4) eswt_control_pane_g3_copy3_ParamLimits

0x613f,	// (0x000076d4) eswt_control_pane_g3_copy3

0x614c,	// (0x000076e1) eswt_control_pane_g4_copy3_ParamLimits

0x614c,	// (0x000076e1) eswt_control_pane_g4_copy3

0xea20,	// (0x0000ffb5) common_borders_pane_cp5

0x61cd,	// (0x00007762) separator_vertical_pane_g1

0x61d6,	// (0x0000776b) separator_vertical_pane_g2

0x61df,	// (0x00007774) separator_vertical_pane_g3

0x0002,

0xfbeb,	// (0x00011180) separator_vertical_pane_g

0x6125,	// (0x000076ba) eswt_control_pane_g1_copy4_ParamLimits

0x6125,	// (0x000076ba) eswt_control_pane_g1_copy4

0x6132,	// (0x000076c7) eswt_control_pane_g2_copy4_ParamLimits

0x6132,	// (0x000076c7) eswt_control_pane_g2_copy4

0x613f,	// (0x000076d4) eswt_control_pane_g3_copy4_ParamLimits

0x613f,	// (0x000076d4) eswt_control_pane_g3_copy4

0x614c,	// (0x000076e1) eswt_control_pane_g4_copy4_ParamLimits

0x614c,	// (0x000076e1) eswt_control_pane_g4_copy4

0xcc80,	// (0x0000e215) eswt_ctrl_combo_button_pane

0xcc88,	// (0x0000e21d) eswt_ctrl_input_pane

0xcc90,	// (0x0000e225) popup_choice_list_window_cp70

0xcc98,	// (0x0000e22d) eswt_ctrl_input_pane_t1

0xea20,	// (0x0000ffb5) input_focus_pane_cp70

0x5209,	// (0x0000679e) bg_button_pane_cp70_ParamLimits

0x5209,	// (0x0000679e) bg_button_pane_cp70

0xcca6,	// (0x0000e23b) eswt_ctrl_combo_button_pane_g1

0x6216,	// (0x000077ab) wait_bar_pane_cp70

0x2412,	// (0x000039a7) bg_popup_window_pane_cp70_ParamLimits

0x2412,	// (0x000039a7) bg_popup_window_pane_cp70

0x621e,	// (0x000077b3) popup_eswt_tasktip_window_t1

0x6234,	// (0x000077c9) wait_bar_pane_cp71_ParamLimits

0x6234,	// (0x000077c9) wait_bar_pane_cp71

0x6240,	// (0x000077d5) grid_eswt_app_pane

0x067e,	// (0x00001c13) scroll_pane_cp70

0xccae,	// (0x0000e243) cell_eswt_app_pane_ParamLimits

0xccae,	// (0x0000e243) cell_eswt_app_pane

0xcce0,	// (0x0000e275) cell_eswt_app_pane_g1_ParamLimits

0xcce0,	// (0x0000e275) cell_eswt_app_pane_g1

0xcd0f,	// (0x0000e2a4) cell_eswt_app_pane_g2_ParamLimits

0xcd0f,	// (0x0000e2a4) cell_eswt_app_pane_g2

0x0001,

0xfbf2,	// (0x00011187) cell_eswt_app_pane_g_ParamLimits

0xfbf2,	// (0x00011187) cell_eswt_app_pane_g

0xcd38,	// (0x0000e2cd) cell_eswt_app_pane_t1_ParamLimits

0xcd38,	// (0x0000e2cd) cell_eswt_app_pane_t1

0x6305,	// (0x0000789a) grid_highlight_pane_cp70_ParamLimits

0x6305,	// (0x0000789a) grid_highlight_pane_cp70

0x0fe7,	// (0x0000257c) set_content_pane_g1

0xb50d,	// (0x0000caa2) status_small_volume_pane

0xcd6a,	// (0x0000e2ff) status_small_volume_pane_g1

0xcd72,	// (0x0000e307) volume_small2_pane

0xcd7b,	// (0x0000e310) volume_small2_pane_g1

0xcd84,	// (0x0000e319) volume_small2_pane_g2

0xcd8d,	// (0x0000e322) volume_small2_pane_g3

0xcd96,	// (0x0000e32b) volume_small2_pane_g4

0xcd9f,	// (0x0000e334) volume_small2_pane_g5

0xcda8,	// (0x0000e33d) volume_small2_pane_g6

0xcdb1,	// (0x0000e346) volume_small2_pane_g7

0xcdba,	// (0x0000e34f) volume_small2_pane_g8

0xcdc3,	// (0x0000e358) volume_small2_pane_g9

0xcdcc,	// (0x0000e361) volume_small2_pane_g10

0x0009,

0xfbf7,	// (0x0001118c) volume_small2_pane_g

0x583d,	// (0x00006dd2) fep_vkb_top_text_pane_g1_ParamLimits

0xcbe6,	// (0x0000e17b) fep_vkb_top_text_pane_t1_ParamLimits

0x5ba4,	// (0x00007139) popup_preview_fixed_window_g3_ParamLimits

0x5ba4,	// (0x00007139) popup_preview_fixed_window_g3

0xbcfc,	// (0x0000d291) popup_toolbar_trans_pane

0xc520,	// (0x0000dab5) aid_height_set_list_ParamLimits

0x3a98,	// (0x0000502d) aid_size_parent_ParamLimits

0x1656,	// (0x00002beb) list_highlight_pane_cp2_ParamLimits

0x0fe7,	// (0x0000257c) set_content_pane_g1_ParamLimits

0xc70f,	// (0x0000dca4) list_single_image_pane_ParamLimits

0xc70f,	// (0x0000dca4) list_single_image_pane

0xcdd5,	// (0x0000e36a) aid_size_cell_image_ParamLimits

0xcdd5,	// (0x0000e36a) aid_size_cell_image

0xcde2,	// (0x0000e377) grid_single_image_pane_ParamLimits

0xcde2,	// (0x0000e377) grid_single_image_pane

0xf44a,	// (0x000109df) list_single_image_pane_g1_ParamLimits

0xf44a,	// (0x000109df) list_single_image_pane_g1

0xf456,	// (0x000109eb) list_single_image_pane_g2_ParamLimits

0xf456,	// (0x000109eb) list_single_image_pane_g2

0x0001,

0xfc0c,	// (0x000111a1) list_single_image_pane_g_ParamLimits

0xfc0c,	// (0x000111a1) list_single_image_pane_g

0x6397,	// (0x0000792c) list_single_image_pane_t1_ParamLimits

0x6397,	// (0x0000792c) list_single_image_pane_t1

0xcdf0,	// (0x0000e385) cell_image_list_pane_ParamLimits

0xcdf0,	// (0x0000e385) cell_image_list_pane

0xce06,	// (0x0000e39b) cell_image_list_pane_g1

0xce0f,	// (0x0000e3a4) cell_image_list_pane_g2

0x0001,

0xfc11,	// (0x000111a6) cell_image_list_pane_g

0x63d7,	// (0x0000796c) aid_size_cell_tb_trans_pane

0xf424,	// (0x000109b9) bg_tb_trans_pane

0x63e9,	// (0x0000797e) grid_tb_trans_pane

0x2273,	// (0x00003808) bg_tb_trans_pane_g1

0x227b,	// (0x00003810) bg_tb_trans_pane_g2

0x2283,	// (0x00003818) bg_tb_trans_pane_g3

0x228b,	// (0x00003820) bg_tb_trans_pane_g4

0x2293,	// (0x00003828) bg_tb_trans_pane_g5

0x22ab,	// (0x00003840) bg_tb_trans_pane_g6

0x22b3,	// (0x00003848) bg_tb_trans_pane_g7

0x229b,	// (0x00003830) bg_tb_trans_pane_g8

0x22a3,	// (0x00003838) bg_tb_trans_pane_g9

0x0008,

0xfc16,	// (0x000111ab) bg_tb_trans_pane_g

0x63fd,	// (0x00007992) cell_toolbar_trans_pane_ParamLimits

0x63fd,	// (0x00007992) cell_toolbar_trans_pane

0x5244,	// (0x000067d9) cell_toolbar_trans_pane_g1

0xc953,	// (0x0000dee8) list_form2_midp_pane_t1

0xc961,	// (0x0000def6) list_form2_midp_pane_t2

0x0001,

0xfabf,	// (0x00011054) list_form2_midp_pane_t

0x4e4c,	// (0x000063e1) scroll_pane_cp51_ParamLimits

0x5066,	// (0x000065fb) form2_midp_wait_pane_g1

0x506f,	// (0x00006604) form2_midp_wait_pane_g2

0x5078,	// (0x0000660d) form2_midp_wait_pane_g3

0x0002,

0xfad4,	// (0x00011069) form2_midp_wait_pane_g

0xecac,	// (0x00010241) list_highlight_pane_cp21_ParamLimits

0x50b1,	// (0x00006646) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x50c0,	// (0x00006655) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3cb6,	// (0x0000524b) list_single_2graphic_im_pane_ParamLimits

0x3cb6,	// (0x0000524b) list_single_2graphic_im_pane

0xce18,	// (0x0000e3ad) list_single_2graphic_im_pane_g1_ParamLimits

0xce18,	// (0x0000e3ad) list_single_2graphic_im_pane_g1

0xce29,	// (0x0000e3be) list_single_2graphic_im_pane_g2_ParamLimits

0xce29,	// (0x0000e3be) list_single_2graphic_im_pane_g2

0xce35,	// (0x0000e3ca) list_single_2graphic_im_pane_g3_ParamLimits

0xce35,	// (0x0000e3ca) list_single_2graphic_im_pane_g3

0x0003,

0xfc29,	// (0x000111be) list_single_2graphic_im_pane_g_ParamLimits

0xfc29,	// (0x000111be) list_single_2graphic_im_pane_g

0xce49,	// (0x0000e3de) list_single_2graphic_im_pane_t1_ParamLimits

0xce49,	// (0x0000e3de) list_single_2graphic_im_pane_t1

0x5bb0,	// (0x00007145) list_single_graphic_2heading_pane_fp_ParamLimits

0x5bb0,	// (0x00007145) list_single_graphic_2heading_pane_fp

0x5c0c,	// (0x000071a1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5c0c,	// (0x000071a1) list_single_graphic_2heading_pane_fp_g1

0x5bc9,	// (0x0000715e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5bc9,	// (0x0000715e) list_single_graphic_2heading_pane_fp_g2

0xf34d,	// (0x000108e2) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xf34d,	// (0x000108e2) list_single_graphic_2heading_pane_fp_g3

0x5bd5,	// (0x0000716a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5bd5,	// (0x0000716a) list_single_graphic_2heading_pane_fp_g4

0x5be9,	// (0x0000717e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5be9,	// (0x0000717e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb57,	// (0x000110ec) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb57,	// (0x000110ec) list_single_graphic_2heading_pane_fp_g

0x6491,	// (0x00007a26) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x6491,	// (0x00007a26) list_single_graphic_2heading_pane_fp_t1

0x5c44,	// (0x000071d9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5c44,	// (0x000071d9) list_single_graphic_2heading_pane_fp_t2

0x64a7,	// (0x00007a3c) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x64a7,	// (0x00007a3c) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc32,	// (0x000111c7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc32,	// (0x000111c7) list_single_graphic_2heading_pane_fp_t

0x5479,	// (0x00006a0e) fep_hwr_write_pane_g5_ParamLimits

0x5479,	// (0x00006a0e) fep_hwr_write_pane_g5

0x5485,	// (0x00006a1a) fep_hwr_write_pane_g6_ParamLimits

0x5485,	// (0x00006a1a) fep_hwr_write_pane_g6

0x60f4,	// (0x00007689) eswt_shell_pane_ParamLimits

0x2412,	// (0x000039a7) bg_popup_window_pane_cp18_ParamLimits

0x2891,	// (0x00003e26) heading_pane_cp70

0x621e,	// (0x000077b3) popup_eswt_tasktip_window_t1_ParamLimits

0xbdc6,	// (0x0000d35b) aid_touch_tab_arrow_left

0xbdda,	// (0x0000d36f) aid_touch_tab_arrow_right

0xa813,	// (0x0000bda8) title_pane_g3_ParamLimits

0xa813,	// (0x0000bda8) title_pane_g3

0xf37d,	// (0x00010912) set_value_pane_g1

0xbcfc,	// (0x0000d291) popup_toolbar_trans_pane_ParamLimits

0x63d7,	// (0x0000796c) aid_size_cell_tb_trans_pane_ParamLimits

0xf424,	// (0x000109b9) bg_tb_trans_pane_ParamLimits

0x63e9,	// (0x0000797e) grid_tb_trans_pane_ParamLimits

0xee82,	// (0x00010417) cont_note_pane_ParamLimits

0xee82,	// (0x00010417) cont_note_pane

0xf10c,	// (0x000106a1) cont_snote2_single_text_pane_ParamLimits

0xf10c,	// (0x000106a1) cont_snote2_single_text_pane

0xf10c,	// (0x000106a1) cont_snote2_single_graphic_pane_ParamLimits

0xf10c,	// (0x000106a1) cont_snote2_single_graphic_pane

0x2ac1,	// (0x00004056) cont_note_wait_pane_ParamLimits

0x2ac1,	// (0x00004056) cont_note_wait_pane

0x2ac1,	// (0x00004056) cont_note_image_pane_ParamLimits

0x2ac1,	// (0x00004056) cont_note_image_pane

0x64bd,	// (0x00007a52) popup_note2_window_g1_ParamLimits

0x64bd,	// (0x00007a52) popup_note2_window_g1

0x64ee,	// (0x00007a83) popup_note2_window_t1_ParamLimits

0x64ee,	// (0x00007a83) popup_note2_window_t1

0x6533,	// (0x00007ac8) popup_note2_window_t2_ParamLimits

0x6533,	// (0x00007ac8) popup_note2_window_t2

0x6578,	// (0x00007b0d) popup_note2_window_t3_ParamLimits

0x6578,	// (0x00007b0d) popup_note2_window_t3

0x65bd,	// (0x00007b52) popup_note2_window_t4_ParamLimits

0x65bd,	// (0x00007b52) popup_note2_window_t4

0xef06,	// (0x0001049b) popup_note2_window_t5_ParamLimits

0xef06,	// (0x0001049b) popup_note2_window_t5

0x0004,

0xfc3e,	// (0x000111d3) popup_note2_window_t_ParamLimits

0xfc3e,	// (0x000111d3) popup_note2_window_t

0x65ec,	// (0x00007b81) popup_note2_image_window_g1_ParamLimits

0x65ec,	// (0x00007b81) popup_note2_image_window_g1

0x65f8,	// (0x00007b8d) popup_note2_image_window_g2_ParamLimits

0x65f8,	// (0x00007b8d) popup_note2_image_window_g2

0x0001,

0xfc49,	// (0x000111de) popup_note2_image_window_g_ParamLimits

0xfc49,	// (0x000111de) popup_note2_image_window_g

0x660a,	// (0x00007b9f) popup_note2_image_window_t1_ParamLimits

0x660a,	// (0x00007b9f) popup_note2_image_window_t1

0x6622,	// (0x00007bb7) popup_note2_image_window_t2_ParamLimits

0x6622,	// (0x00007bb7) popup_note2_image_window_t2

0x663a,	// (0x00007bcf) popup_note2_image_window_t3_ParamLimits

0x663a,	// (0x00007bcf) popup_note2_image_window_t3

0x0002,

0xfc4e,	// (0x000111e3) popup_note2_image_window_t_ParamLimits

0xfc4e,	// (0x000111e3) popup_note2_image_window_t

0x2acf,	// (0x00004064) popup_note2_wait_window_g1_ParamLimits

0x2acf,	// (0x00004064) popup_note2_wait_window_g1

0x6656,	// (0x00007beb) popup_note2_wait_window_g2_ParamLimits

0x6656,	// (0x00007beb) popup_note2_wait_window_g2

0x2ae7,	// (0x0000407c) popup_note2_wait_window_g3_ParamLimits

0x2ae7,	// (0x0000407c) popup_note2_wait_window_g3

0x0002,

0xfc55,	// (0x000111ea) popup_note2_wait_window_g_ParamLimits

0xfc55,	// (0x000111ea) popup_note2_wait_window_g

0x6662,	// (0x00007bf7) popup_note2_wait_window_t1_ParamLimits

0x6662,	// (0x00007bf7) popup_note2_wait_window_t1

0x6680,	// (0x00007c15) popup_note2_wait_window_t2_ParamLimits

0x6680,	// (0x00007c15) popup_note2_wait_window_t2

0x669e,	// (0x00007c33) popup_note2_wait_window_t3_ParamLimits

0x669e,	// (0x00007c33) popup_note2_wait_window_t3

0x66b0,	// (0x00007c45) popup_note2_wait_window_t4_ParamLimits

0x66b0,	// (0x00007c45) popup_note2_wait_window_t4

0x0003,

0xfc5c,	// (0x000111f1) popup_note2_wait_window_t_ParamLimits

0xfc5c,	// (0x000111f1) popup_note2_wait_window_t

0x66c2,	// (0x00007c57) wait_bar2_pane_ParamLimits

0x66c2,	// (0x00007c57) wait_bar2_pane

0x66da,	// (0x00007c6f) popup_snote2_single_text_window_g1_ParamLimits

0x66da,	// (0x00007c6f) popup_snote2_single_text_window_g1

0x6702,	// (0x00007c97) popup_snote2_single_text_window_t1_ParamLimits

0x6702,	// (0x00007c97) popup_snote2_single_text_window_t1

0x674e,	// (0x00007ce3) popup_snote2_single_text_window_t2_ParamLimits

0x674e,	// (0x00007ce3) popup_snote2_single_text_window_t2

0x679a,	// (0x00007d2f) popup_snote2_single_text_window_t3_ParamLimits

0x679a,	// (0x00007d2f) popup_snote2_single_text_window_t3

0x67db,	// (0x00007d70) popup_snote2_single_text_window_t4_ParamLimits

0x67db,	// (0x00007d70) popup_snote2_single_text_window_t4

0x6811,	// (0x00007da6) popup_snote2_single_text_window_t5_ParamLimits

0x6811,	// (0x00007da6) popup_snote2_single_text_window_t5

0x0004,

0xfc65,	// (0x000111fa) popup_snote2_single_text_window_t_ParamLimits

0xfc65,	// (0x000111fa) popup_snote2_single_text_window_t

0x683c,	// (0x00007dd1) popup_snote2_single_graphic_window_g1_ParamLimits

0x683c,	// (0x00007dd1) popup_snote2_single_graphic_window_g1

0x6864,	// (0x00007df9) popup_snote2_single_graphic_window_g2_ParamLimits

0x6864,	// (0x00007df9) popup_snote2_single_graphic_window_g2

0x0001,

0xfc70,	// (0x00011205) popup_snote2_single_graphic_window_g_ParamLimits

0xfc70,	// (0x00011205) popup_snote2_single_graphic_window_g

0x688c,	// (0x00007e21) popup_snote2_single_graphic_window_t1_ParamLimits

0x688c,	// (0x00007e21) popup_snote2_single_graphic_window_t1

0x68d8,	// (0x00007e6d) popup_snote2_single_graphic_window_t2_ParamLimits

0x68d8,	// (0x00007e6d) popup_snote2_single_graphic_window_t2

0x679a,	// (0x00007d2f) popup_snote2_single_graphic_window_t3_ParamLimits

0x679a,	// (0x00007d2f) popup_snote2_single_graphic_window_t3

0x67db,	// (0x00007d70) popup_snote2_single_graphic_window_t4_ParamLimits

0x67db,	// (0x00007d70) popup_snote2_single_graphic_window_t4

0x6811,	// (0x00007da6) popup_snote2_single_graphic_window_t5_ParamLimits

0x6811,	// (0x00007da6) popup_snote2_single_graphic_window_t5

0x0004,

0xfc75,	// (0x0001120a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc75,	// (0x0001120a) popup_snote2_single_graphic_window_t

0x4cab,	// (0x00006240) clock_nsta_pane_cp2_t1

0x4cab,	// (0x00006240) clock_nsta_pane_cp2_t2

0x0001,

0xfa95,	// (0x0001102a) clock_nsta_pane_cp2_t

0xf43e,	// (0x000109d3) form_field_data_wide_pane_g1_ParamLimits

0xf44a,	// (0x000109df) form_field_data_wide_pane_g2_ParamLimits

0xf44a,	// (0x000109df) form_field_data_wide_pane_g2

0xf456,	// (0x000109eb) form_field_data_wide_pane_g3_ParamLimits

0xf456,	// (0x000109eb) form_field_data_wide_pane_g3

0x0002,

0xf64f,	// (0x00010be4) form_field_data_wide_pane_g_ParamLimits

0xf64f,	// (0x00010be4) form_field_data_wide_pane_g

0xc85c,	// (0x0000ddf1) grid_touch_3_pane_ParamLimits

0xc85c,	// (0x0000ddf1) grid_touch_3_pane

0xce7a,	// (0x0000e40f) cell_touch_3_pane_ParamLimits

0xce7a,	// (0x0000e40f) cell_touch_3_pane

0x5244,	// (0x000067d9) cell_touch_3_pane_g1

0x5244,	// (0x000067d9) cell_touch_3_pane_g2

0x0001,

0xfb1a,	// (0x000110af) cell_touch_3_pane_g

0xef5e,	// (0x000104f3) cont_query_data_pane

0xef66,	// (0x000104fb) cont_query_data_pane_cp1

0x6957,	// (0x00007eec) button_value_adjust_pane_cp7

0x695f,	// (0x00007ef4) query_popup_pane_cp3

0x09c0,	// (0x00001f55) bg_popup_sub_pane_cp22_ParamLimits

0x09d6,	// (0x00001f6b) navi_navi_volume_pane_cp2

0x09f1,	// (0x00001f86) popup_side_volume_key_window_g2

0x0a00,	// (0x00001f95) popup_side_volume_key_window_g3

0x0002,

0xf6e5,	// (0x00010c7a) popup_side_volume_key_window_g

0x0a1d,	// (0x00001fb2) popup_side_volume_key_window_t2

0x0001,

0xf6ec,	// (0x00010c81) popup_side_volume_key_window_t

0x0ead,	// (0x00002442) popup_side_volume_key_window_ParamLimits

0xacfb,	// (0x0000c290) list_double_graphic_pane_g4_ParamLimits

0xacfb,	// (0x0000c290) list_double_graphic_pane_g4

0xc6e6,	// (0x0000dc7b) list_single_2heading_msg_pane_ParamLimits

0xc6e6,	// (0x0000dc7b) list_single_2heading_msg_pane

0xcec6,	// (0x0000e45b) list_single_2heading_msg_pane_g1_ParamLimits

0xcec6,	// (0x0000e45b) list_single_2heading_msg_pane_g1

0xced2,	// (0x0000e467) list_single_2heading_msg_pane_g2_ParamLimits

0xced2,	// (0x0000e467) list_single_2heading_msg_pane_g2

0xcee5,	// (0x0000e47a) list_single_2heading_msg_pane_g3_ParamLimits

0xcee5,	// (0x0000e47a) list_single_2heading_msg_pane_g3

0xcef1,	// (0x0000e486) list_single_2heading_msg_pane_g4_ParamLimits

0xcef1,	// (0x0000e486) list_single_2heading_msg_pane_g4

0x0003,

0xfc80,	// (0x00011215) list_single_2heading_msg_pane_g_ParamLimits

0xfc80,	// (0x00011215) list_single_2heading_msg_pane_g

0xcf09,	// (0x0000e49e) list_single_2heading_msg_pane_t1_ParamLimits

0xcf09,	// (0x0000e49e) list_single_2heading_msg_pane_t1

0xcf31,	// (0x0000e4c6) list_single_2heading_msg_pane_t2_ParamLimits

0xcf31,	// (0x0000e4c6) list_single_2heading_msg_pane_t2

0xcf9c,	// (0x0000e531) list_single_2heading_msg_pane_t3_ParamLimits

0xcf9c,	// (0x0000e531) list_single_2heading_msg_pane_t3

0x6a5c,	// (0x00007ff1) list_single_2heading_msg_pane_t4_ParamLimits

0x6a5c,	// (0x00007ff1) list_single_2heading_msg_pane_t4

0x0003,

0xfc89,	// (0x0001121e) list_single_2heading_msg_pane_t_ParamLimits

0xfc89,	// (0x0001121e) list_single_2heading_msg_pane_t

0xec50,	// (0x000101e5) title_pane_g4_ParamLimits

0xec50,	// (0x000101e5) title_pane_g4

0x03c0,	// (0x00001955) title_pane_stacon_g3_ParamLimits

0x03c0,	// (0x00001955) title_pane_stacon_g3

0x6454,	// (0x000079e9) list_single_2graphic_im_pane_g4_ParamLimits

0x6454,	// (0x000079e9) list_single_2graphic_im_pane_g4

0x369d,	// (0x00004c32) popup_side_volume_key_window_cp

0x4146,	// (0x000056db) main_idle_act2_pane_t1

0x22bb,	// (0x00003850) toolbar_button_pane_g10

0xab94,	// (0x0000c129) popup_toolbar_window_cp1

0x4c9c,	// (0x00006231) clock_nsta_pane_cp_t1

0x4c9c,	// (0x00006231) clock_nsta_pane_cp_t2

0x0001,

0xfa90,	// (0x00011025) clock_nsta_pane_cp_t

0x09d6,	// (0x00001f6b) navi_navi_volume_pane_cp2_ParamLimits

0x09e5,	// (0x00001f7a) popup_side_volume_key_window_g1_ParamLimits

0x09f1,	// (0x00001f86) popup_side_volume_key_window_g2_ParamLimits

0x0a00,	// (0x00001f95) popup_side_volume_key_window_g3_ParamLimits

0xf6e5,	// (0x00010c7a) popup_side_volume_key_window_g_ParamLimits

0x52b3,	// (0x00006848) fep_hwr_aid_pane

0x535c,	// (0x000068f1) bg_fep_hwr_top_pane_g4_ParamLimits

0x537c,	// (0x00006911) fep_hwr_top_pane_g1_ParamLimits

0x538e,	// (0x00006923) fep_hwr_top_pane_g2_ParamLimits

0x53a0,	// (0x00006935) fep_hwr_top_pane_g3_ParamLimits

0xfae5,	// (0x0001107a) fep_hwr_top_pane_g_ParamLimits

0x53b5,	// (0x0000694a) fep_hwr_top_text_pane_ParamLimits

0x3452,	// (0x000049e7) aid_touch_tab_arrow_arrow_2

0x345b,	// (0x000049f0) aid_touch_tab_arrow_left_2

0x52c7,	// (0x0000685c) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x52fe,	// (0x00006893) fep_hwr_prediction_pane

0x5637,	// (0x00006bcc) fep_vkb_prediction_pane

0xcbc6,	// (0x0000e15b) fep_vkb_side_pane_g3_ParamLimits

0xcbc6,	// (0x0000e15b) fep_vkb_side_pane_g3

0x56e9,	// (0x00006c7e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5e06,	// (0x0000739b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5e13,	// (0x000073a8) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb8f,	// (0x00011124) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6a81,	// (0x00008016) fep_hwr_prediction_pane_g1

0x6a8b,	// (0x00008020) fep_hwr_prediction_pane_g2

0x6a93,	// (0x00008028) fep_hwr_prediction_pane_g3

0x6a9b,	// (0x00008030) fep_hwr_prediction_pane_g4

0x0003,

0xfc92,	// (0x00011227) fep_hwr_prediction_pane_g

0x6a81,	// (0x00008016) fep_vkb_prediction_pane_g1

0x6aa3,	// (0x00008038) fep_vkb_prediction_pane_g2

0x6aab,	// (0x00008040) fep_vkb_prediction_pane_g3

0x6ab3,	// (0x00008048) fep_vkb_prediction_pane_g4

0x0003,

0xfc9b,	// (0x00011230) fep_vkb_prediction_pane_g

0x39ff,	// (0x00004f94) slider_set_pane_g3

0x3a13,	// (0x00004fa8) slider_set_pane_g4

0x3a2b,	// (0x00004fc0) slider_set_pane_g5

0x39ff,	// (0x00004f94) slider_set_pane_g6

0x3a41,	// (0x00004fd6) slider_set_pane_g7

0x3c17,	// (0x000051ac) slider_form_pane_g3

0x3c20,	// (0x000051b5) slider_form_pane_g4

0x3c28,	// (0x000051bd) slider_form_pane_g5

0x3c17,	// (0x000051ac) slider_form_pane_g6

0xc689,	// (0x0000dc1e) slider_form_pane_g7

0x4473,	// (0x00005a08) slider_set_pane_vc_g3

0x447c,	// (0x00005a11) slider_set_pane_vc_g4

0x4485,	// (0x00005a1a) slider_set_pane_vc_g5

0x4473,	// (0x00005a08) slider_set_pane_vc_g6

0x448e,	// (0x00005a23) slider_set_pane_vc_g7

0x494b,	// (0x00005ee0) slider_form_pane_vc_g1

0x4954,	// (0x00005ee9) slider_form_pane_vc_g2

0x495d,	// (0x00005ef2) slider_form_pane_vc_g3

0x494b,	// (0x00005ee0) slider_form_pane_vc_g4

0x4966,	// (0x00005efb) slider_form_pane_vc_g5

0x0004,

0xfa62,	// (0x00010ff7) slider_form_pane_vc_g

0xea20,	// (0x0000ffb5) main_idle_act3_pane

0x6abb,	// (0x00008050) ai3_links_pane

0xd00a,	// (0x0000e59f) popup_ai3_data_window_ParamLimits

0xd00a,	// (0x0000e59f) popup_ai3_data_window

0xea20,	// (0x0000ffb5) grid_ai3_links_pane

0xd028,	// (0x0000e5bd) cell_ai3_links_pane_ParamLimits

0xd028,	// (0x0000e5bd) cell_ai3_links_pane

0x6afc,	// (0x00008091) bg_popup_sub_pane_cp11

0x6b09,	// (0x0000809e) cell_ai3_links_pane_g1

0xea20,	// (0x0000ffb5) bg_popup_sub_pane_cp12

0x6b2e,	// (0x000080c3) heading_ai3_data_pane

0x6b36,	// (0x000080cb) list_ai3_gene_pane

0x6b42,	// (0x000080d7) popup_ai3_data_window_g1

0x6b4a,	// (0x000080df) heading_ai3_data_pane_g1

0x6b52,	// (0x000080e7) heading_ai3_data_pane_t1

0x6b60,	// (0x000080f5) list_double_ai3_gene_pane_ParamLimits

0x6b60,	// (0x000080f5) list_double_ai3_gene_pane

0x6b6d,	// (0x00008102) list_single_ai3_gene_pane_ParamLimits

0x6b6d,	// (0x00008102) list_single_ai3_gene_pane

0x5209,	// (0x0000679e) list_highlight_pane_cp7_ParamLimits

0x5209,	// (0x0000679e) list_highlight_pane_cp7

0x6b7a,	// (0x0000810f) list_single_a13_gene_pane_t1_ParamLimits

0x6b7a,	// (0x0000810f) list_single_a13_gene_pane_t1

0x6b91,	// (0x00008126) list_single_ai3_gene_pane_g1

0x6b9a,	// (0x0000812f) list_single_ai3_gene_pane_g2

0x0001,

0xfca4,	// (0x00011239) list_single_ai3_gene_pane_g

0x6ba2,	// (0x00008137) list_double_ai3_gene_pane_g1_ParamLimits

0x6ba2,	// (0x00008137) list_double_ai3_gene_pane_g1

0x6bae,	// (0x00008143) list_double_ai3_gene_pane_t1_ParamLimits

0x6bae,	// (0x00008143) list_double_ai3_gene_pane_t1

0x6bca,	// (0x0000815f) list_double_ai3_gene_pane_t2_ParamLimits

0x6bca,	// (0x0000815f) list_double_ai3_gene_pane_t2

0x6bdf,	// (0x00008174) list_double_ai3_gene_pane_t3_ParamLimits

0x6bdf,	// (0x00008174) list_double_ai3_gene_pane_t3

0x0002,

0xfca9,	// (0x0001123e) list_double_ai3_gene_pane_t_ParamLimits

0xfca9,	// (0x0001123e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6970,	// (0x00007f05) aid_size_min_col_2

0xceb0,	// (0x0000e445) aid_size_min_msg_ParamLimits

0xceb0,	// (0x0000e445) aid_size_min_msg

0xcbda,	// (0x0000e16f) fep_vkb_top_text_pane_g2_ParamLimits

0xcbda,	// (0x0000e16f) fep_vkb_top_text_pane_g2

0x0001,

0xfb15,	// (0x000110aa) fep_vkb_top_text_pane_g_ParamLimits

0xfb15,	// (0x000110aa) fep_vkb_top_text_pane_g

0xea20,	// (0x0000ffb5) main_hc_apps_shell_pane

0x6bfc,	// (0x00008191) grid_hc_apps_pane_ParamLimits

0x6bfc,	// (0x00008191) grid_hc_apps_pane

0x6c0e,	// (0x000081a3) list_hc_apps_pane

0x6c16,	// (0x000081ab) scroll_pane_cp37_ParamLimits

0x6c16,	// (0x000081ab) scroll_pane_cp37

0xd042,	// (0x0000e5d7) cell_hc_apps_pane_ParamLimits

0xd042,	// (0x0000e5d7) cell_hc_apps_pane

0xd108,	// (0x0000e69d) cell_hc_apps_pane_g1_ParamLimits

0xd108,	// (0x0000e69d) cell_hc_apps_pane_g1

0x6d02,	// (0x00008297) cell_hc_apps_pane_g2_ParamLimits

0x6d02,	// (0x00008297) cell_hc_apps_pane_g2

0x6d1e,	// (0x000082b3) cell_hc_apps_pane_g3_ParamLimits

0x6d1e,	// (0x000082b3) cell_hc_apps_pane_g3

0x0002,

0xfcb0,	// (0x00011245) cell_hc_apps_pane_g_ParamLimits

0xfcb0,	// (0x00011245) cell_hc_apps_pane_g

0xd134,	// (0x0000e6c9) cell_hc_apps_pane_t1_ParamLimits

0xd134,	// (0x0000e6c9) cell_hc_apps_pane_t1

0xee82,	// (0x00010417) grid_highlight_pane_cp10_ParamLimits

0xee82,	// (0x00010417) grid_highlight_pane_cp10

0xd172,	// (0x0000e707) list_single_hc_apps_pane_ParamLimits

0xd172,	// (0x0000e707) list_single_hc_apps_pane

0xd1a5,	// (0x0000e73a) list_single_hc_apps_pane_g1

0xd1be,	// (0x0000e753) list_single_hc_apps_pane_g2

0x0001,

0xfcb7,	// (0x0001124c) list_single_hc_apps_pane_g

0xd1d7,	// (0x0000e76c) list_single_hc_apps_pane_g2_copy1

0xd1f3,	// (0x0000e788) list_single_hc_apps_pane_t1

0xecac,	// (0x00010241) bg_set_opt_pane_cp_ParamLimits

0xecba,	// (0x0001024f) setting_slider_pane_t1_ParamLimits

0xecd3,	// (0x00010268) setting_slider_pane_t2_ParamLimits

0xeced,	// (0x00010282) setting_slider_pane_t3_ParamLimits

0xf537,	// (0x00010acc) setting_slider_pane_t_ParamLimits

0xed05,	// (0x0001029a) slider_set_pane_ParamLimits

0x14ff,	// (0x00002a94) control_pane_g5_ParamLimits

0x14ff,	// (0x00002a94) control_pane_g5

0x39e6,	// (0x00004f7b) slider_set_pane_g1_ParamLimits

0x39f3,	// (0x00004f88) slider_set_pane_g2_ParamLimits

0x39ff,	// (0x00004f94) slider_set_pane_g3_ParamLimits

0x3a13,	// (0x00004fa8) slider_set_pane_g4_ParamLimits

0x3a2b,	// (0x00004fc0) slider_set_pane_g5_ParamLimits

0x39ff,	// (0x00004f94) slider_set_pane_g6_ParamLimits

0x3a41,	// (0x00004fd6) slider_set_pane_g7_ParamLimits

0xf92c,	// (0x00010ec1) slider_set_pane_g_ParamLimits

0x0f92,	// (0x00002527) navi_icon_text_pane_ParamLimits

0xbd8d,	// (0x0000d322) aid_fill_nsta_2_ParamLimits

0xbdc6,	// (0x0000d35b) aid_touch_tab_arrow_left_ParamLimits

0xbdda,	// (0x0000d36f) aid_touch_tab_arrow_right_ParamLimits

0xbe75,	// (0x0000d40a) clock_nsta_pane_ParamLimits

0xc407,	// (0x0000d99c) navi_icon_pane_g1_ParamLimits

0xc413,	// (0x0000d9a8) navi_text_pane_t1_ParamLimits

0xc935,	// (0x0000deca) navi_icon_text_pane_g1_ParamLimits

0xc941,	// (0x0000ded6) navi_icon_text_pane_t1_ParamLimits

0xd1a5,	// (0x0000e73a) list_single_hc_apps_pane_g1_ParamLimits

0xd1be,	// (0x0000e753) list_single_hc_apps_pane_g2_ParamLimits

0xfcb7,	// (0x0001124c) list_single_hc_apps_pane_g_ParamLimits

0xd1d7,	// (0x0000e76c) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd1f3,	// (0x0000e788) list_single_hc_apps_pane_t1_ParamLimits

0xa702,	// (0x0000bc97) popup_toolbar2_fixed_window_ParamLimits

0xa702,	// (0x0000bc97) popup_toolbar2_fixed_window

0xbcf2,	// (0x0000d287) popup_toolbar2_float_window

0xea20,	// (0x0000ffb5) bg_popup_sub_pane_cp27

0x6e3b,	// (0x000083d0) grid_toolbar2_float_pane

0xea20,	// (0x0000ffb5) bg_popup_sub_pane_cp26

0x6e3b,	// (0x000083d0) grid_toolbar2_fixed_pane

0xd221,	// (0x0000e7b6) cell_toolbar2_fixed_pane_ParamLimits

0xd221,	// (0x0000e7b6) cell_toolbar2_fixed_pane

0xd23b,	// (0x0000e7d0) cell_toolbar2_fixed_pane_g1

0x6e5c,	// (0x000083f1) toolbar2_fixed_button_pane

0x2273,	// (0x00003808) toolbar2_fixed_button_pane_g1

0x227b,	// (0x00003810) toolbar2_fixed_button_pane_g2

0x2283,	// (0x00003818) toolbar2_fixed_button_pane_g3

0x228b,	// (0x00003820) toolbar2_fixed_button_pane_g4

0x2293,	// (0x00003828) toolbar2_fixed_button_pane_g5

0x229b,	// (0x00003830) toolbar2_fixed_button_pane_g6

0x22a3,	// (0x00003838) toolbar2_fixed_button_pane_g7

0x22ab,	// (0x00003840) toolbar2_fixed_button_pane_g8

0x22b3,	// (0x00003848) toolbar2_fixed_button_pane_g9

0x0008,

0xf82e,	// (0x00010dc3) toolbar2_fixed_button_pane_g

0x6e64,	// (0x000083f9) cell_toolbar2_float_pane_ParamLimits

0x6e64,	// (0x000083f9) cell_toolbar2_float_pane

0x6e75,	// (0x0000840a) cell_toolbar2_float_pane_g1

0x6e5c,	// (0x000083f1) toolbar2_fixed_button_pane_cp

0xcac2,	// (0x0000e057) fep_vkb_accented_list_pane_ParamLimits

0xcac2,	// (0x0000e057) fep_vkb_accented_list_pane

0x5a5a,	// (0x00006fef) bg_popup_fep_shadow_pane_g9

0x1125,	// (0x000026ba) bg_popup_fep_shadow_pane_cp3

0x014e,	// (0x000016e3) list_accented_list_pane

0x6e7e,	// (0x00008413) list_single_accented_list_pane_ParamLimits

0x6e7e,	// (0x00008413) list_single_accented_list_pane

0x1125,	// (0x000026ba) list_highlight_pane_cp10

0x6e8f,	// (0x00008424) list_single_accented_list_pane_t1

0xbc0e,	// (0x0000d1a3) popup_slider_window_ParamLimits

0xbc0e,	// (0x0000d1a3) popup_slider_window

0x6967,	// (0x00007efc) aid_indentation_list_msg

0xd33e,	// (0x0000e8d3) bg_popup_window_pane_cp19

0x6fcb,	// (0x00008560) popup_slider_window_g1

0x6fe7,	// (0x0000857c) popup_slider_window_g2

0x7003,	// (0x00008598) popup_slider_window_g3

0x0005,

0xfcbc,	// (0x00011251) popup_slider_window_g

0x7069,	// (0x000085fe) popup_slider_window_t1

0x70dd,	// (0x00008672) small_volume_slider_vertical_pane

0x5244,	// (0x000067d9) small_volume_slider_vertical_pane_g1

0x5244,	// (0x000067d9) small_volume_slider_vertical_pane_g2

0x70f9,	// (0x0000868e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcce,	// (0x00011263) small_volume_slider_vertical_pane_g

0xea54,	// (0x0000ffe9) area_side_right_pane_ParamLimits

0xea54,	// (0x0000ffe9) area_side_right_pane

0xd3f6,	// (0x0000e98b) aid_size_side_button_ParamLimits

0xd3f6,	// (0x0000e98b) aid_size_side_button

0xd40f,	// (0x0000e9a4) grid_sctrl_middle_pane_ParamLimits

0xd40f,	// (0x0000e9a4) grid_sctrl_middle_pane

0x7135,	// (0x000086ca) sctrl_sk_bottom_pane

0x7146,	// (0x000086db) sctrl_sk_top_pane

0x7158,	// (0x000086ed) aid_touch_sctrl_top

0xee82,	// (0x00010417) bg_sctrl_sk_pane_ParamLimits

0xee82,	// (0x00010417) bg_sctrl_sk_pane

0x7165,	// (0x000086fa) sctrl_sk_top_pane_g1

0x7172,	// (0x00008707) sctrl_sk_top_pane_t1

0x7158,	// (0x000086ed) aid_touch_sctrl_bottom

0xee82,	// (0x00010417) bg_sctrl_sk_pane_cp_ParamLimits

0xee82,	// (0x00010417) bg_sctrl_sk_pane_cp

0x718d,	// (0x00008722) sctrl_sk_bottom_pane_g1

0x7172,	// (0x00008707) sctrl_sk_bottom_pane_t1

0xd42e,	// (0x0000e9c3) cell_sctrl_middle_pane_ParamLimits

0xd42e,	// (0x0000e9c3) cell_sctrl_middle_pane

0xd455,	// (0x0000e9ea) aid_touch_sctrl_middle_ParamLimits

0xd455,	// (0x0000e9ea) aid_touch_sctrl_middle

0xee82,	// (0x00010417) bg_sctrl_middle_pane_ParamLimits

0xee82,	// (0x00010417) bg_sctrl_middle_pane

0x8683,	// (0x00009c18) cell_sctrl_middle_pane_g1_ParamLimits

0x8683,	// (0x00009c18) cell_sctrl_middle_pane_g1

0xd469,	// (0x0000e9fe) cell_sctrl_middle_pane_g2_ParamLimits

0xd469,	// (0x0000e9fe) cell_sctrl_middle_pane_g2

0x0001,

0xfcda,	// (0x0001126f) cell_sctrl_middle_pane_g_ParamLimits

0xfcda,	// (0x0001126f) cell_sctrl_middle_pane_g

0x2273,	// (0x00003808) bg_sctrl_middle_pane_g1

0x227b,	// (0x00003810) bg_sctrl_middle_pane_g2

0x2283,	// (0x00003818) bg_sctrl_middle_pane_g3

0x228b,	// (0x00003820) bg_sctrl_middle_pane_g4

0x2293,	// (0x00003828) bg_sctrl_middle_pane_g5

0x229b,	// (0x00003830) bg_sctrl_middle_pane_g6

0x22a3,	// (0x00003838) bg_sctrl_middle_pane_g7

0x22ab,	// (0x00003840) bg_sctrl_middle_pane_g8

0x0007,

0xfcdf,	// (0x00011274) bg_sctrl_middle_pane_g

0x22b3,	// (0x00003848) bg_sctrl_middle_pane_g8_copy1

0x2273,	// (0x00003808) bg_sctrl_sk_pane_g1

0x227b,	// (0x00003810) bg_sctrl_sk_pane_g2

0x2283,	// (0x00003818) bg_sctrl_sk_pane_g3

0x0008,

0xf82e,	// (0x00010dc3) bg_sctrl_sk_pane_g

0xf2ca,	// (0x0001085f) aid_size_touch_scroll_bar

0x228b,	// (0x00003820) bg_sctrl_sk_pane_g4

0x2293,	// (0x00003828) bg_sctrl_sk_pane_g5

0x229b,	// (0x00003830) bg_sctrl_sk_pane_g6

0x22a3,	// (0x00003838) bg_sctrl_sk_pane_g7

0x22ab,	// (0x00003840) bg_sctrl_sk_pane_g8

0x22b3,	// (0x00003848) bg_sctrl_sk_pane_g9

0x1742,	// (0x00002cd7) popup_fep_china_hwr2_fs_candidate_window

0xb6c0,	// (0x0000cc55) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb6c0,	// (0x0000cc55) popup_fep_china_hwr2_fs_control_window

0x56e9,	// (0x00006c7e) sctrl_sk_top_pane_g2

0x0001,

0xfcd5,	// (0x0001126a) sctrl_sk_top_pane_g

0xd47b,	// (0x0000ea10) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd47b,	// (0x0000ea10) aid_fep_china_hwr2_fs_cell

0xd491,	// (0x0000ea26) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd491,	// (0x0000ea26) bg_popup_fep_shadow_pane_cp4

0xd4a8,	// (0x0000ea3d) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd4a8,	// (0x0000ea3d) bg_popup_fep_shadow_pane_cp5

0xd4ba,	// (0x0000ea4f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd4ba,	// (0x0000ea4f) popup_fep_china_hwr2_fs_control_bar_grid

0xd4ce,	// (0x0000ea63) popup_fep_china_hwr2_fs_control_funtion_grid

0x722b,	// (0x000087c0) aid_fep_china_hwr2_fs_candi_cell

0xea20,	// (0x0000ffb5) bg_popup_fep_shadow_pane_cp6

0x7235,	// (0x000087ca) popup_fep_china_hwr2_fs_candidate_grid

0xd4d6,	// (0x0000ea6b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4d6,	// (0x0000ea6b) cell_fep_china_hwr2_fs_funtion_grid

0x5244,	// (0x000067d9) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7257,	// (0x000087ec) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7257,	// (0x000087ec) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7265,	// (0x000087fa) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7265,	// (0x000087fa) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf0,	// (0x00011285) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf0,	// (0x00011285) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4ee,	// (0x0000ea83) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4ee,	// (0x0000ea83) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd503,	// (0x0000ea98) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd503,	// (0x0000ea98) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf5,	// (0x0001128a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf5,	// (0x0001128a) cell_fep_china_hwr2_fs_funtion_grid_t

0x72ac,	// (0x00008841) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x72b4,	// (0x00008849) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x72bc,	// (0x00008851) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfa,	// (0x0001128f) popup_fep_china_hwr2_fs_control_bar_grid_g

0x72c4,	// (0x00008859) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x72c4,	// (0x00008859) cell_fep_china_hwr2_fs_candidate_grid

0x72e3,	// (0x00008878) popup_fep_china_hwr2_fs_candidate_grid_g20

0x72eb,	// (0x00008880) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5244,	// (0x000067d9) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5244,	// (0x000067d9) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1a,	// (0x000110af) cell_fep_china_hwr2_fs_candidate_grid_g

0x72f3,	// (0x00008888) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1dad,	// (0x00003342) clock_nsta_pane_cp_24_ParamLimits

0x1dad,	// (0x00003342) clock_nsta_pane_cp_24

0x1e2d,	// (0x000033c2) indicator_nsta_pane_cp_24_ParamLimits

0x1e2d,	// (0x000033c2) indicator_nsta_pane_cp_24

0x329f,	// (0x00004834) heading_pane_g1

0x0001,

0xf893,	// (0x00010e28) heading_pane_g

0x3ed5,	// (0x0000546a) grid_sct_catagory_button_pane

0x3f07,	// (0x0000549c) scroll_pane_cp5_ParamLimits

0x4e58,	// (0x000063ed) button_value_adjust_pane_cp5_ParamLimits

0x4e58,	// (0x000063ed) button_value_adjust_pane_cp5

0x4f5e,	// (0x000064f3) form2_midp_time_pane_ParamLimits

0x7301,	// (0x00008896) cell_sct_catagory_button_pane_ParamLimits

0x7301,	// (0x00008896) cell_sct_catagory_button_pane

0x5209,	// (0x0000679e) bg_button_pane_cp01_ParamLimits

0x5209,	// (0x0000679e) bg_button_pane_cp01

0x5244,	// (0x000067d9) cell_sct_catagory_button_pane_g1

0xbc8f,	// (0x0000d224) popup_tb_extension_window

0xd51f,	// (0x0000eab4) aid_size_cell_ext_ParamLimits

0xd51f,	// (0x0000eab4) aid_size_cell_ext

0xf10c,	// (0x000106a1) bg_tb_trans_pane_cp1_ParamLimits

0xf10c,	// (0x000106a1) bg_tb_trans_pane_cp1

0xd545,	// (0x0000eada) grid_tb_ext_pane_ParamLimits

0xd545,	// (0x0000eada) grid_tb_ext_pane

0xd582,	// (0x0000eb17) cell_tb_ext_pane_ParamLimits

0xd582,	// (0x0000eb17) cell_tb_ext_pane

0xd5aa,	// (0x0000eb3f) cell_tb_ext_pane_g1_ParamLimits

0xd5aa,	// (0x0000eb3f) cell_tb_ext_pane_g1

0x7395,	// (0x0000892a) cell_tb_ext_pane_t1

0xee82,	// (0x00010417) list_highlight_pane_cp11_ParamLimits

0xee82,	// (0x00010417) list_highlight_pane_cp11

0xa717,	// (0x0000bcac) popup_uni_indicator_window_ParamLimits

0xa717,	// (0x0000bcac) popup_uni_indicator_window

0xf424,	// (0x000109b9) bg_popup_sub_pane_cp14

0x73b2,	// (0x00008947) list_uniindi_pane

0x73be,	// (0x00008953) uniindi_top_pane

0xee82,	// (0x00010417) bg_uniindi_top_pane

0x73df,	// (0x00008974) uniindi_top_pane_g1

0x73f5,	// (0x0000898a) uniindi_top_pane_g2

0x0003,

0xfd01,	// (0x00011296) uniindi_top_pane_g

0x741f,	// (0x000089b4) uniindi_top_pane_t1

0x744b,	// (0x000089e0) list_single_uniindi_pane_ParamLimits

0x744b,	// (0x000089e0) list_single_uniindi_pane

0x5244,	// (0x000067d9) bg_uniindi_top_pane_g1

0x745e,	// (0x000089f3) list_single_uniindi_pane_g1

0x7471,	// (0x00008a06) list_single_uniindi_pane_t1

0xea20,	// (0x0000ffb5) control_bg_pane

0x7496,	// (0x00008a2b) bg_sctrl_sk_pane_cp1

0x749f,	// (0x00008a34) bg_sctrl_sk_pane_cp2

0x74a8,	// (0x00008a3d) control_bg_pane_g1

0x74b1,	// (0x00008a46) control_bg_pane_g2

0x0001,

0xfd0a,	// (0x0001129f) control_bg_pane_g

0x4c3f,	// (0x000061d4) cell_indicator_nsta_pane_g1_ParamLimits

0xc899,	// (0x0000de2e) cell_indicator_nsta_pane_g2_ParamLimits

0xfa7e,	// (0x00011013) cell_indicator_nsta_pane_g_ParamLimits

0x4feb,	// (0x00006580) form2_midp_time_pane_t1_ParamLimits

0x52a5,	// (0x0000683a) main_idle_act4_pane_ParamLimits

0x52a5,	// (0x0000683a) main_idle_act4_pane

0xbc8f,	// (0x0000d224) popup_tb_extension_window_ParamLimits

0xd56a,	// (0x0000eaff) tb_ext_find_pane_ParamLimits

0xd56a,	// (0x0000eaff) tb_ext_find_pane

0x74ba,	// (0x00008a4f) ai_gene_pane_1_cp1

0x126f,	// (0x00002804) ai_gene_pane_2_cp1

0x74c2,	// (0x00008a57) list_single_idle_plugin_calendar_pane

0x74cb,	// (0x00008a60) list_single_idle_plugin_notification_pane

0x74d4,	// (0x00008a69) list_single_idle_plugin_player_pane

0xd5c7,	// (0x0000eb5c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd5c7,	// (0x0000eb5c) list_single_idle_plugin_shortcut_pane

0xd5ef,	// (0x0000eb84) main_idle_act4_pane_t1

0xd607,	// (0x0000eb9c) main_idle_act4_pane_t2

0x0001,

0xfd0f,	// (0x000112a4) main_idle_act4_pane_t

0xd61f,	// (0x0000ebb4) middle_sk_idle_act4_pane_ParamLimits

0xd61f,	// (0x0000ebb4) middle_sk_idle_act4_pane

0xd63b,	// (0x0000ebd0) popup_clock_digital_analogue_window_cp2

0xd662,	// (0x0000ebf7) shortcut_wheel_idle_act4_pane_ParamLimits

0xd662,	// (0x0000ebf7) shortcut_wheel_idle_act4_pane

0x5244,	// (0x000067d9) shortcut_wheel_idle_act4_pane_g1

0x5244,	// (0x000067d9) shortcut_wheel_idle_act4_pane_g2

0x5244,	// (0x000067d9) shortcut_wheel_idle_act4_pane_g3

0x5244,	// (0x000067d9) shortcut_wheel_idle_act4_pane_g4

0x5244,	// (0x000067d9) shortcut_wheel_idle_act4_pane_g5

0x7567,	// (0x00008afc) shortcut_wheel_idle_act4_pane_g6

0x756f,	// (0x00008b04) shortcut_wheel_idle_act4_pane_g7

0x7577,	// (0x00008b0c) shortcut_wheel_idle_act4_pane_g8

0x757f,	// (0x00008b14) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd14,	// (0x000112a9) shortcut_wheel_idle_act4_pane_g

0x535c,	// (0x000068f1) middle_sk_idle_act4_pane_g1_ParamLimits

0x535c,	// (0x000068f1) middle_sk_idle_act4_pane_g1

0xd6df,	// (0x0000ec74) middle_sk_idle_act4_pane_g2_ParamLimits

0xd6df,	// (0x0000ec74) middle_sk_idle_act4_pane_g2

0x0001,

0xfd37,	// (0x000112cc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd37,	// (0x000112cc) middle_sk_idle_act4_pane_g

0xd6f7,	// (0x0000ec8c) middle_sk_idle_act4_pane_t1_ParamLimits

0xd6f7,	// (0x0000ec8c) middle_sk_idle_act4_pane_t1

0xd726,	// (0x0000ecbb) grid_ai_shortcut_pane_ParamLimits

0xd726,	// (0x0000ecbb) grid_ai_shortcut_pane

0xd743,	// (0x0000ecd8) list_highlight_pane_cp16_ParamLimits

0xd743,	// (0x0000ecd8) list_highlight_pane_cp16

0xd750,	// (0x0000ece5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd750,	// (0x0000ece5) list_single_idle_plugin_shortcut_pane_g1

0xd75c,	// (0x0000ecf1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd75c,	// (0x0000ecf1) list_single_idle_plugin_shortcut_pane_g2

0xd77a,	// (0x0000ed0f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd77a,	// (0x0000ed0f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3c,	// (0x000112d1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3c,	// (0x000112d1) list_single_idle_plugin_shortcut_pane_g

0xd78f,	// (0x0000ed24) cell_ai_shortcut_pane_ParamLimits

0xd78f,	// (0x0000ed24) cell_ai_shortcut_pane

0xd7a5,	// (0x0000ed3a) cell_ai_shortcut_pane_g1_ParamLimits

0xd7a5,	// (0x0000ed3a) cell_ai_shortcut_pane_g1

0x74ba,	// (0x00008a4f) ai_gene_pane_1_cp2

0x76b0,	// (0x00008c45) ai_gene_pane_2_cp2

0x76b8,	// (0x00008c4d) list_highlight_pane_cp15

0x76c1,	// (0x00008c56) list_single_idle_plugin_calendar_pane_g1

0x76b8,	// (0x00008c4d) list_highlight_pane_cp17

0x76c9,	// (0x00008c5e) list_single_idle_plugin_calendar_pane_g1_copy1

0x76d1,	// (0x00008c66) list_single_idle_plugin_player_pane_g1

0x41f4,	// (0x00005789) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd43,	// (0x000112d8) list_single_idle_plugin_player_pane_g

0x76d9,	// (0x00008c6e) list_single_idle_plugin_player_pane_t1

0x76e7,	// (0x00008c7c) list_single_idle_plugin_player_pane_t2

0x76f5,	// (0x00008c8a) list_single_idle_plugin_player_pane_t3

0x7703,	// (0x00008c98) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd48,	// (0x000112dd) list_single_idle_plugin_player_pane_t

0x7711,	// (0x00008ca6) wait_bar_pane_cp15

0x7719,	// (0x00008cae) grid_ai_notification_pane

0x41f4,	// (0x00005789) list_single_idle_plugin_notification_pane_g1

0xd7c7,	// (0x0000ed5c) cell_ai_notification_pane_ParamLimits

0xd7c7,	// (0x0000ed5c) cell_ai_notification_pane

0x772f,	// (0x00008cc4) cell_ai_notification_pane_g1

0x7737,	// (0x00008ccc) cell_ai_notification_pane_t1

0xd7d4,	// (0x0000ed69) tb_ext_find_button_pane

0xd7dc,	// (0x0000ed71) tb_ext_find_pane_g1

0xd7e4,	// (0x0000ed79) tb_ext_find_pane_t1

0x0841,	// (0x00001dd6) tb_ext_find_button_pane_g1

0x7763,	// (0x00008cf8) tb_ext_find_button_pane_g2

0x0001,

0xfd51,	// (0x000112e6) tb_ext_find_button_pane_g

0xd5ef,	// (0x0000eb84) main_idle_act4_pane_t1_ParamLimits

0xd607,	// (0x0000eb9c) main_idle_act4_pane_t2_ParamLimits

0xfd0f,	// (0x000112a4) main_idle_act4_pane_t_ParamLimits

0xd63b,	// (0x0000ebd0) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd652,	// (0x0000ebe7) sat_plugin_idle_act4_pane_ParamLimits

0xd652,	// (0x0000ebe7) sat_plugin_idle_act4_pane

0xd7f2,	// (0x0000ed87) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd7f2,	// (0x0000ed87) sat_plugin_idle_act4_pane_t1

0xd80a,	// (0x0000ed9f) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd80a,	// (0x0000ed9f) sat_plugin_idle_act4_pane_t2

0xd822,	// (0x0000edb7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd822,	// (0x0000edb7) sat_plugin_idle_act4_pane_t3

0xd83a,	// (0x0000edcf) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd83a,	// (0x0000edcf) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd56,	// (0x000112eb) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd56,	// (0x000112eb) sat_plugin_idle_act4_pane_t

0xebfc,	// (0x00010191) popup_battery_window_ParamLimits

0xebfc,	// (0x00010191) popup_battery_window

0xee82,	// (0x00010417) bg_popup_sub_pane_cp25_ParamLimits

0xee82,	// (0x00010417) bg_popup_sub_pane_cp25

0x77b8,	// (0x00008d4d) popup_battery_window_g1_ParamLimits

0x77b8,	// (0x00008d4d) popup_battery_window_g1

0x77c4,	// (0x00008d59) popup_battery_window_t1_ParamLimits

0x77c4,	// (0x00008d59) popup_battery_window_t1

0x77d6,	// (0x00008d6b) popup_battery_window_t2_ParamLimits

0x77d6,	// (0x00008d6b) popup_battery_window_t2

0x0001,

0xfd5f,	// (0x000112f4) popup_battery_window_t_ParamLimits

0xfd5f,	// (0x000112f4) popup_battery_window_t

0xb43d,	// (0x0000c9d2) midp_canvas_pane_ParamLimits

0xb499,	// (0x0000ca2e) midp_keypad_pane_ParamLimits

0xb499,	// (0x0000ca2e) midp_keypad_pane

0x1656,	// (0x00002beb) main_midp_pane_ParamLimits

0x4cba,	// (0x0000624f) signal_pane_g2_cp_ParamLimits

0xd852,	// (0x0000ede7) aid_size_cell_midp_keypad_ParamLimits

0xd852,	// (0x0000ede7) aid_size_cell_midp_keypad

0xd870,	// (0x0000ee05) midp_keyp_game_grid_pane_ParamLimits

0xd870,	// (0x0000ee05) midp_keyp_game_grid_pane

0xd897,	// (0x0000ee2c) midp_keyp_rocker_pane_ParamLimits

0xd897,	// (0x0000ee2c) midp_keyp_rocker_pane

0xd8e6,	// (0x0000ee7b) midp_keyp_sk_left_pane_ParamLimits

0xd8e6,	// (0x0000ee7b) midp_keyp_sk_left_pane

0xd93c,	// (0x0000eed1) midp_keyp_sk_right_pane_ParamLimits

0xd93c,	// (0x0000eed1) midp_keyp_sk_right_pane

0xea20,	// (0x0000ffb5) bg_button_pane_cp03

0xd992,	// (0x0000ef27) midp_keyp_sk_left_pane_g1

0xea20,	// (0x0000ffb5) bg_button_pane_cp04

0xd992,	// (0x0000ef27) midp_keyp_sk_right_pane_g1

0x5244,	// (0x000067d9) midp_keyp_rocker_pane_g1

0xd99a,	// (0x0000ef2f) keyp_game_cell_pane_ParamLimits

0xd99a,	// (0x0000ef2f) keyp_game_cell_pane

0xea20,	// (0x0000ffb5) bg_button_pane_cp02

0xd9c0,	// (0x0000ef55) keyp_game_cell_pane_g1

0xa6ae,	// (0x0000bc43) popup_fep_vkb2_window_ParamLimits

0xa6ae,	// (0x0000bc43) popup_fep_vkb2_window

0xd9c9,	// (0x0000ef5e) aid_size_cell_vkb2_ParamLimits

0xd9c9,	// (0x0000ef5e) aid_size_cell_vkb2

0xd9f5,	// (0x0000ef8a) popup_fep_vkb2_window_g1_ParamLimits

0xd9f5,	// (0x0000ef8a) popup_fep_vkb2_window_g1

0xda45,	// (0x0000efda) vkb2_area_bottom_pane_ParamLimits

0xda45,	// (0x0000efda) vkb2_area_bottom_pane

0xdaa1,	// (0x0000f036) vkb2_area_keypad_pane_ParamLimits

0xdaa1,	// (0x0000f036) vkb2_area_keypad_pane

0xdaef,	// (0x0000f084) vkb2_area_top_pane_ParamLimits

0xdaef,	// (0x0000f084) vkb2_area_top_pane

0xdb7c,	// (0x0000f111) vkb2_top_entry_pane_ParamLimits

0xdb7c,	// (0x0000f111) vkb2_top_entry_pane

0xdba9,	// (0x0000f13e) vkb2_top_grid_left_pane_ParamLimits

0xdba9,	// (0x0000f13e) vkb2_top_grid_left_pane

0xdbca,	// (0x0000f15f) vkb2_top_grid_right_pane_ParamLimits

0xdbca,	// (0x0000f15f) vkb2_top_grid_right_pane

0x7b5c,	// (0x000090f1) vkb2_cell_keypad_pane_ParamLimits

0x7b5c,	// (0x000090f1) vkb2_cell_keypad_pane

0xdc12,	// (0x0000f1a7) vkb2_area_bottom_grid_pane_ParamLimits

0xdc12,	// (0x0000f1a7) vkb2_area_bottom_grid_pane

0xdc3c,	// (0x0000f1d1) vkb2_area_bottom_pane_g1_ParamLimits

0xdc3c,	// (0x0000f1d1) vkb2_area_bottom_pane_g1

0xdc62,	// (0x0000f1f7) vkb2_area_bottom_pane_g2_ParamLimits

0xdc62,	// (0x0000f1f7) vkb2_area_bottom_pane_g2

0xdc93,	// (0x0000f228) vkb2_area_bottom_pane_g3_ParamLimits

0xdc93,	// (0x0000f228) vkb2_area_bottom_pane_g3

0x0002,

0xfd64,	// (0x000112f9) vkb2_area_bottom_pane_g_ParamLimits

0xfd64,	// (0x000112f9) vkb2_area_bottom_pane_g

0x7d06,	// (0x0000929b) vkb2_top_cell_left_pane_ParamLimits

0x7d06,	// (0x0000929b) vkb2_top_cell_left_pane

0xdcfd,	// (0x0000f292) vkb2_top_entry_pane_g1_ParamLimits

0xdcfd,	// (0x0000f292) vkb2_top_entry_pane_g1

0xdd0b,	// (0x0000f2a0) vkb2_top_entry_pane_t1_ParamLimits

0xdd0b,	// (0x0000f2a0) vkb2_top_entry_pane_t1

0x7d6e,	// (0x00009303) vkb2_top_entry_pane_t2_ParamLimits

0x7d6e,	// (0x00009303) vkb2_top_entry_pane_t2

0x7da0,	// (0x00009335) vkb2_top_entry_pane_t3_ParamLimits

0x7da0,	// (0x00009335) vkb2_top_entry_pane_t3

0x0002,

0xfd6b,	// (0x00011300) vkb2_top_entry_pane_t_ParamLimits

0xfd6b,	// (0x00011300) vkb2_top_entry_pane_t

0xdd44,	// (0x0000f2d9) vkb2_top_grid_right_pane_g1_ParamLimits

0xdd44,	// (0x0000f2d9) vkb2_top_grid_right_pane_g1

0x7e07,	// (0x0000939c) vkb2_top_grid_right_pane_g2_ParamLimits

0x7e07,	// (0x0000939c) vkb2_top_grid_right_pane_g2

0x7e1f,	// (0x000093b4) vkb2_top_grid_right_pane_g3_ParamLimits

0x7e1f,	// (0x000093b4) vkb2_top_grid_right_pane_g3

0xdd5a,	// (0x0000f2ef) vkb2_top_grid_right_pane_g4_ParamLimits

0xdd5a,	// (0x0000f2ef) vkb2_top_grid_right_pane_g4

0x0003,

0xfd72,	// (0x00011307) vkb2_top_grid_right_pane_g_ParamLimits

0xfd72,	// (0x00011307) vkb2_top_grid_right_pane_g

0x7e4d,	// (0x000093e2) vkb2_top_cell_left_pane_g1

0x7e64,	// (0x000093f9) vkb2_cell_keypad_pane_g1_ParamLimits

0x7e64,	// (0x000093f9) vkb2_cell_keypad_pane_g1

0x7e72,	// (0x00009407) vkb2_cell_keypad_pane_t1_ParamLimits

0x7e72,	// (0x00009407) vkb2_cell_keypad_pane_t1

0x7e89,	// (0x0000941e) vkb2_cell_bottom_grid_pane_ParamLimits

0x7e89,	// (0x0000941e) vkb2_cell_bottom_grid_pane

0x7ec2,	// (0x00009457) vkb2_cell_bottom_grid_pane_g1

0xd683,	// (0x0000ec18) aid_call2_pane_cp02

0xd68b,	// (0x0000ec20) aid_call_pane_cp02

0xd693,	// (0x0000ec28) clock_digital_number_pane_cp10

0xd69b,	// (0x0000ec30) clock_digital_number_pane_cp11

0xd6a3,	// (0x0000ec38) clock_digital_number_pane_cp12

0xd6ab,	// (0x0000ec40) clock_digital_number_pane_cp13

0xd6b3,	// (0x0000ec48) clock_digital_separator_pane_cp10

0x0841,	// (0x00001dd6) popup_clock_digital_analogue_window_cp2_g1

0x0841,	// (0x00001dd6) popup_clock_digital_analogue_window_cp2_g2

0xd6bb,	// (0x0000ec50) popup_clock_digital_analogue_window_cp2_g3

0x0841,	// (0x00001dd6) popup_clock_digital_analogue_window_cp2_g4

0xd6bb,	// (0x0000ec50) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd27,	// (0x000112bc) popup_clock_digital_analogue_window_cp2_g

0xd6c3,	// (0x0000ec58) popup_clock_digital_analogue_window_cp2_t1

0xd6d1,	// (0x0000ec66) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd32,	// (0x000112c7) popup_clock_digital_analogue_window_cp2_t

0x5244,	// (0x000067d9) clock_digital_number_pane_cp10_g1

0x5244,	// (0x000067d9) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1a,	// (0x000110af) clock_digital_number_pane_cp10_g

0x5244,	// (0x000067d9) clock_digital_separator_pane_cp10_g1

0x5244,	// (0x000067d9) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1a,	// (0x000110af) clock_digital_separator_pane_cp10_g

0x7401,	// (0x00008996) uniindi_top_pane_g3

0x7412,	// (0x000089a7) uniindi_top_pane_g4

0x7be7,	// (0x0000917c) vkb2_row_keypad_pane_ParamLimits

0x7be7,	// (0x0000917c) vkb2_row_keypad_pane

0x7ede,	// (0x00009473) vkb2_cell_t_keypad_pane_ParamLimits

0x7ede,	// (0x00009473) vkb2_cell_t_keypad_pane

0x7eee,	// (0x00009483) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7eee,	// (0x00009483) vkb2_cell_t_keypad_pane_cp08

0x7f03,	// (0x00009498) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7f03,	// (0x00009498) vkb2_cell_t_keypad_pane_cp09

0x7f17,	// (0x000094ac) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7f17,	// (0x000094ac) vkb2_cell_t_keypad_pane_cp01

0x7f28,	// (0x000094bd) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7f28,	// (0x000094bd) vkb2_cell_t_keypad_pane_cp02

0x7f39,	// (0x000094ce) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7f39,	// (0x000094ce) vkb2_cell_t_keypad_pane_cp03

0x7f4a,	// (0x000094df) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7f4a,	// (0x000094df) vkb2_cell_t_keypad_pane_cp04

0x7f5b,	// (0x000094f0) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7f5b,	// (0x000094f0) vkb2_cell_t_keypad_pane_cp05

0x7f6c,	// (0x00009501) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7f6c,	// (0x00009501) vkb2_cell_t_keypad_pane_cp06

0x7f7f,	// (0x00009514) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7f7f,	// (0x00009514) vkb2_cell_t_keypad_pane_cp07

0x7f94,	// (0x00009529) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7f94,	// (0x00009529) vkb2_cell_t_keypad_pane_cp10

0x56e9,	// (0x00006c7e) vkb2_cell_t_keypad_pane_g1

0x7fa9,	// (0x0000953e) vkb2_cell_t_keypad_pane_t1

0xea20,	// (0x0000ffb5) popup_grid_graphic2_window

0xdd70,	// (0x0000f305) aid_size_cell_graphic2_ParamLimits

0xdd70,	// (0x0000f305) aid_size_cell_graphic2

0xddae,	// (0x0000f343) bg_popup_window_pane_cp21_ParamLimits

0xddae,	// (0x0000f343) bg_popup_window_pane_cp21

0xddbc,	// (0x0000f351) graphic2_pages_pane_ParamLimits

0xddbc,	// (0x0000f351) graphic2_pages_pane

0xde14,	// (0x0000f3a9) grid_graphic2_control_pane_ParamLimits

0xde14,	// (0x0000f3a9) grid_graphic2_control_pane

0xde5c,	// (0x0000f3f1) grid_graphic2_pane_ParamLimits

0xde5c,	// (0x0000f3f1) grid_graphic2_pane

0xdee7,	// (0x0000f47c) cell_graphic2_pane

0xea20,	// (0x0000ffb5) main_comp_mode_pane

0x6b36,	// (0x000080cb) list_ai3_gene_pane_ParamLimits

0xd33e,	// (0x0000e8d3) bg_popup_window_pane_cp19_ParamLimits

0x6f6b,	// (0x00008500) bg_touch_area_indi_pane_ParamLimits

0x6f6b,	// (0x00008500) bg_touch_area_indi_pane

0x6f81,	// (0x00008516) bg_touch_area_indi_pane_cp01_ParamLimits

0x6f81,	// (0x00008516) bg_touch_area_indi_pane_cp01

0x6f97,	// (0x0000852c) bg_touch_area_indi_pane_cp02_ParamLimits

0x6f97,	// (0x0000852c) bg_touch_area_indi_pane_cp02

0x6fb1,	// (0x00008546) bg_touch_area_indi_pane_cp03_ParamLimits

0x6fb1,	// (0x00008546) bg_touch_area_indi_pane_cp03

0x6fcb,	// (0x00008560) popup_slider_window_g1_ParamLimits

0x6fe7,	// (0x0000857c) popup_slider_window_g2_ParamLimits

0x7003,	// (0x00008598) popup_slider_window_g3_ParamLimits

0xfcbc,	// (0x00011251) popup_slider_window_g_ParamLimits

0x7069,	// (0x000085fe) popup_slider_window_t1_ParamLimits

0x70dd,	// (0x00008672) small_volume_slider_vertical_pane_ParamLimits

0xdee7,	// (0x0000f47c) cell_graphic2_pane_ParamLimits

0xdf49,	// (0x0000f4de) bg_button_pane_cp10_ParamLimits

0xdf49,	// (0x0000f4de) bg_button_pane_cp10

0xdf5c,	// (0x0000f4f1) bg_button_pane_cp11_ParamLimits

0xdf5c,	// (0x0000f4f1) bg_button_pane_cp11

0xdf6f,	// (0x0000f504) graphic2_pages_pane_g1_ParamLimits

0xdf6f,	// (0x0000f504) graphic2_pages_pane_g1

0xdf8a,	// (0x0000f51f) graphic2_pages_pane_g2_ParamLimits

0xdf8a,	// (0x0000f51f) graphic2_pages_pane_g2

0x0001,

0xfd80,	// (0x00011315) graphic2_pages_pane_g_ParamLimits

0xfd80,	// (0x00011315) graphic2_pages_pane_g

0xdfa2,	// (0x0000f537) graphic2_pages_pane_t1_ParamLimits

0xdfa2,	// (0x0000f537) graphic2_pages_pane_t1

0xdfba,	// (0x0000f54f) cell_graphic2_control_pane_ParamLimits

0xdfba,	// (0x0000f54f) cell_graphic2_control_pane

0xdfee,	// (0x0000f583) cell_graphic2_pane_g1_ParamLimits

0xdfee,	// (0x0000f583) cell_graphic2_pane_g1

0x550b,	// (0x00006aa0) cell_graphic2_pane_g2_ParamLimits

0x550b,	// (0x00006aa0) cell_graphic2_pane_g2

0xdffb,	// (0x0000f590) cell_graphic2_pane_g3_ParamLimits

0xdffb,	// (0x0000f590) cell_graphic2_pane_g3

0x5518,	// (0x00006aad) cell_graphic2_pane_g4_ParamLimits

0x5518,	// (0x00006aad) cell_graphic2_pane_g4

0xe008,	// (0x0000f59d) cell_graphic2_pane_g5_ParamLimits

0xe008,	// (0x0000f59d) cell_graphic2_pane_g5

0x0004,

0xfd85,	// (0x0001131a) cell_graphic2_pane_g_ParamLimits

0xfd85,	// (0x0001131a) cell_graphic2_pane_g

0xe024,	// (0x0000f5b9) cell_graphic2_pane_t1_ParamLimits

0xe024,	// (0x0000f5b9) cell_graphic2_pane_t1

0x3293,	// (0x00004828) grid_highlight_pane_cp11_ParamLimits

0x3293,	// (0x00004828) grid_highlight_pane_cp11

0xee82,	// (0x00010417) bg_button_pane_cp05

0xe06d,	// (0x0000f602) cell_graphic2_control_pane_g1

0x5244,	// (0x000067d9) bg_touch_area_indi_pane_g1

0x828c,	// (0x00009821) aid_cmod_rocker_key_size

0x8296,	// (0x0000982b) aid_cmode_itu_key_size

0x82a0,	// (0x00009835) main_cmode_video_pane

0x82aa,	// (0x0000983f) main_comp_mode_itu_pane

0x82b6,	// (0x0000984b) main_comp_mode_rocker_pane

0x82c2,	// (0x00009857) cell_cmode_rocker_pane_ParamLimits

0x82c2,	// (0x00009857) cell_cmode_rocker_pane

0x82d6,	// (0x0000986b) cell_cmode_itu_pane_ParamLimits

0x82d6,	// (0x0000986b) cell_cmode_itu_pane

0xf424,	// (0x000109b9) bg_button_pane_cp06_ParamLimits

0xf424,	// (0x000109b9) bg_button_pane_cp06

0x56e9,	// (0x00006c7e) cell_cmode_rocker_pane_g1_ParamLimits

0x56e9,	// (0x00006c7e) cell_cmode_rocker_pane_g1

0x7257,	// (0x000087ec) cell_cmode_rocker_pane_g2_ParamLimits

0x7257,	// (0x000087ec) cell_cmode_rocker_pane_g2

0x0001,

0xfd95,	// (0x0001132a) cell_cmode_rocker_pane_g_ParamLimits

0xfd95,	// (0x0001132a) cell_cmode_rocker_pane_g

0xea20,	// (0x0000ffb5) bg_button_pane_cp07

0x82ed,	// (0x00009882) cell_cmode_itu_pane_g1

0x82f6,	// (0x0000988b) cell_cmode_itu_pane_t1

0x8304,	// (0x00009899) cell_cmode_itu_pane_t2

0x0001,

0xfd9a,	// (0x0001132f) cell_cmode_itu_pane_t

0x7486,	// (0x00008a1b) aid_touch_ctrl_left

0x748e,	// (0x00008a23) aid_touch_ctrl_right

0xea20,	// (0x0000ffb5) compa_mode_pane

0xe095,	// (0x0000f62a) aid_cmod_rocker_key_size_cp

0xe09f,	// (0x0000f634) aid_cmode_itu_key_size_cp

0x8326,	// (0x000098bb) compa_mode_pane_g1

0x832e,	// (0x000098c3) compa_mode_pane_g2

0x8336,	// (0x000098cb) compa_mode_pane_g3

0x0002,

0xfd9f,	// (0x00011334) compa_mode_pane_g

0xe0a9,	// (0x0000f63e) main_comp_mode_itu_pane_cp

0xe0b1,	// (0x0000f646) main_comp_mode_rocker_pane_cp

0xe0b9,	// (0x0000f64e) cell_cmode_itu_pane_cp_ParamLimits

0xe0b9,	// (0x0000f64e) cell_cmode_itu_pane_cp

0xe0ce,	// (0x0000f663) cell_cmode_rocker_pane_cp_ParamLimits

0xe0ce,	// (0x0000f663) cell_cmode_rocker_pane_cp

0xf424,	// (0x000109b9) bg_button_pane_cp06_cp_ParamLimits

0xf424,	// (0x000109b9) bg_button_pane_cp06_cp

0x56e9,	// (0x00006c7e) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x56e9,	// (0x00006c7e) cell_cmode_rocker_pane_g1_cp

0x5244,	// (0x000067d9) cell_cmode_rocker_pane_g2_cp

0xea20,	// (0x0000ffb5) bg_button_pane_cp07_cp

0xe0e0,	// (0x0000f675) cell_cmode_itu_pane_g1_cp

0xe0e9,	// (0x0000f67e) cell_cmode_itu_pane_t1_cp

0xe0e9,	// (0x0000f67e) cell_cmode_itu_pane_t2_cp

0xc681,	// (0x0000dc16) settings_code_pane_cp2

0xecac,	// (0x00010241) bg_popup_window_pane_cp3_ParamLimits

0xf096,	// (0x0001062b) heading_pane_cp3_ParamLimits

0xf0a5,	// (0x0001063a) listscroll_popup_graphic_pane_ParamLimits

0x52b3,	// (0x00006848) fep_hwr_aid_pane_ParamLimits

0x7158,	// (0x000086ed) aid_touch_sctrl_top_ParamLimits

0x7165,	// (0x000086fa) sctrl_sk_top_pane_g1_ParamLimits

0x56e9,	// (0x00006c7e) sctrl_sk_top_pane_g2_ParamLimits

0xfcd5,	// (0x0001126a) sctrl_sk_top_pane_g_ParamLimits

0x7172,	// (0x00008707) sctrl_sk_top_pane_t1_ParamLimits

0x7158,	// (0x000086ed) aid_touch_sctrl_bottom_ParamLimits

0x7172,	// (0x00008707) sctrl_sk_bottom_pane_t1_ParamLimits

0x73cb,	// (0x00008960) aid_area_touch_clock

0xdb3b,	// (0x0000f0d0) aid_vkb2_area_top_pane_cell_ParamLimits

0xdb3b,	// (0x0000f0d0) aid_vkb2_area_top_pane_cell

0xdbeb,	// (0x0000f180) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdbeb,	// (0x0000f180) aid_vkb2_area_bottom_pane_cell

0x7d26,	// (0x000092bb) popup_char_count_window

0x838c,	// (0x00009921) popup_char_count_window_g1

0x8395,	// (0x0000992a) popup_char_count_window_g2

0x839e,	// (0x00009933) popup_char_count_window_g3

0x0002,

0xfda6,	// (0x0001133b) popup_char_count_window_g

0x83a7,	// (0x0000993c) popup_char_count_window_t1

0x7970,	// (0x00008f05) popup_fep_char_preview_window_ParamLimits

0x7970,	// (0x00008f05) popup_fep_char_preview_window

0xdb5b,	// (0x0000f0f0) vkb2_top_candi_pane_ParamLimits

0xdb5b,	// (0x0000f0f0) vkb2_top_candi_pane

0xe0f7,	// (0x0000f68c) cell_vkb2_top_candi_pane_ParamLimits

0xe0f7,	// (0x0000f68c) cell_vkb2_top_candi_pane

0x2ac1,	// (0x00004056) bg_popup_fep_char_preview_window_ParamLimits

0x2ac1,	// (0x00004056) bg_popup_fep_char_preview_window

0x8403,	// (0x00009998) popup_fep_char_preview_window_t1_ParamLimits

0x8403,	// (0x00009998) popup_fep_char_preview_window_t1

0x843d,	// (0x000099d2) bg_popup_fep_char_preview_window_g1

0x8445,	// (0x000099da) bg_popup_fep_char_preview_window_g2

0x844d,	// (0x000099e2) bg_popup_fep_char_preview_window_g3

0x8455,	// (0x000099ea) bg_popup_fep_char_preview_window_g4

0x845d,	// (0x000099f2) bg_popup_fep_char_preview_window_g5

0x8465,	// (0x000099fa) bg_popup_fep_char_preview_window_g6

0x846d,	// (0x00009a02) bg_popup_fep_char_preview_window_g7

0x8475,	// (0x00009a0a) bg_popup_fep_char_preview_window_g8

0x847d,	// (0x00009a12) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdad,	// (0x00011342) bg_popup_fep_char_preview_window_g

0x56e9,	// (0x00006c7e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x56e9,	// (0x00006c7e) cell_vkb2_top_candi_pane_g1

0x5a7e,	// (0x00007013) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5a7e,	// (0x00007013) cell_vkb2_top_candi_pane_g2

0x5a9f,	// (0x00007034) cell_vkb2_top_candi_pane_g3_ParamLimits

0x5a9f,	// (0x00007034) cell_vkb2_top_candi_pane_g3

0x848d,	// (0x00009a22) cell_vkb2_top_candi_pane_g4_ParamLimits

0x848d,	// (0x00009a22) cell_vkb2_top_candi_pane_g4

0x84ae,	// (0x00009a43) cell_vkb2_top_candi_pane_g5_ParamLimits

0x84ae,	// (0x00009a43) cell_vkb2_top_candi_pane_g5

0x7257,	// (0x000087ec) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7257,	// (0x000087ec) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc2,	// (0x00011357) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc2,	// (0x00011357) cell_vkb2_top_candi_pane_g

0x84cf,	// (0x00009a64) cell_vkb2_top_candi_pane_t1

0x39d2,	// (0x00004f67) aid_size_touch_slider_mark_ParamLimits

0x39d2,	// (0x00004f67) aid_size_touch_slider_mark

0xddf8,	// (0x0000f38d) grid_graphic2_catg_pane_ParamLimits

0xddf8,	// (0x0000f38d) grid_graphic2_catg_pane

0xdeb6,	// (0x0000f44b) popup_grid_graphic2_window_t1_ParamLimits

0xdeb6,	// (0x0000f44b) popup_grid_graphic2_window_t1

0xdecc,	// (0x0000f461) popup_grid_graphic2_window_t2_ParamLimits

0xdecc,	// (0x0000f461) popup_grid_graphic2_window_t2

0x0001,

0xfd7b,	// (0x00011310) popup_grid_graphic2_window_t_ParamLimits

0xfd7b,	// (0x00011310) popup_grid_graphic2_window_t

0xee82,	// (0x00010417) bg_button_pane_cp05_ParamLimits

0xe06d,	// (0x0000f602) cell_graphic2_control_pane_g1_ParamLimits

0xe163,	// (0x0000f6f8) cell_graphic2_catg_pane_ParamLimits

0xe163,	// (0x0000f6f8) cell_graphic2_catg_pane

0xea20,	// (0x0000ffb5) bg_button_pane_cp12

0xe175,	// (0x0000f70a) cell_graphic2_catg_pane_g1

0x7395,	// (0x0000892a) cell_tb_ext_pane_t1_ParamLimits

0x7dc4,	// (0x00009359) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7dc4,	// (0x00009359) vkb2_top_cell_right_narrow_pane

0x7ddc,	// (0x00009371) vkb2_top_cell_right_wide_pane_ParamLimits

0x7ddc,	// (0x00009371) vkb2_top_cell_right_wide_pane

0x52a5,	// (0x0000683a) bg_vkb2_func_pane_ParamLimits

0x52a5,	// (0x0000683a) bg_vkb2_func_pane

0x7e4d,	// (0x000093e2) vkb2_top_cell_left_pane_g1_ParamLimits

0x52a5,	// (0x0000683a) bg_vkb2_fuc_pane_cp03_ParamLimits

0x52a5,	// (0x0000683a) bg_vkb2_fuc_pane_cp03

0x7ec2,	// (0x00009457) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x227b,	// (0x00003810) bg_vkb2_func_pane_g1

0x2283,	// (0x00003818) bg_vkb2_func_pane_g2

0x2293,	// (0x00003828) bg_vkb2_func_pane_g3

0x228b,	// (0x00003820) bg_vkb2_func_pane_g4

0x229b,	// (0x00003830) bg_vkb2_func_pane_g5

0x22a3,	// (0x00003838) bg_vkb2_func_pane_g6

0x22ab,	// (0x00003840) bg_vkb2_func_pane_g7

0x22b3,	// (0x00003848) bg_vkb2_func_pane_g8

0x2273,	// (0x00003808) bg_vkb2_func_pane_g9

0x0008,

0xfdcf,	// (0x00011364) bg_vkb2_func_pane_g

0x52a5,	// (0x0000683a) bg_vkb2_fuc_pane_cp01_ParamLimits

0x52a5,	// (0x0000683a) bg_vkb2_fuc_pane_cp01

0x7e4d,	// (0x000093e2) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7e4d,	// (0x000093e2) vkb2_top_cell_right_wide_pane_g1

0x52a5,	// (0x0000683a) bg_vkb2_fuc_pane_cp02_ParamLimits

0x52a5,	// (0x0000683a) bg_vkb2_fuc_pane_cp02

0x8508,	// (0x00009a9d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8508,	// (0x00009a9d) vkb2_top_cell_right_narrow_pane_g1

0xd280,	// (0x0000e815) aid_touch_area_decrease_ParamLimits

0xd280,	// (0x0000e815) aid_touch_area_decrease

0xd2ba,	// (0x0000e84f) aid_touch_area_increase_ParamLimits

0xd2ba,	// (0x0000e84f) aid_touch_area_increase

0xd2e2,	// (0x0000e877) aid_touch_area_mute_ParamLimits

0xd2e2,	// (0x0000e877) aid_touch_area_mute

0xd30a,	// (0x0000e89f) aid_touch_area_slider_ParamLimits

0xd30a,	// (0x0000e89f) aid_touch_area_slider

0xd34a,	// (0x0000e8df) popup_slider_window_g4_ParamLimits

0xd34a,	// (0x0000e8df) popup_slider_window_g4

0xd372,	// (0x0000e907) popup_slider_window_g5_ParamLimits

0xd372,	// (0x0000e907) popup_slider_window_g5

0xd3a6,	// (0x0000e93b) popup_slider_window_g6_ParamLimits

0xd3a6,	// (0x0000e93b) popup_slider_window_g6

0x7097,	// (0x0000862c) popup_slider_window_t2_ParamLimits

0x7097,	// (0x0000862c) popup_slider_window_t2

0x0001,

0xfcc9,	// (0x0001125e) popup_slider_window_t_ParamLimits

0xfcc9,	// (0x0001125e) popup_slider_window_t

0xd3c2,	// (0x0000e957) slider_pane_ParamLimits

0xd3c2,	// (0x0000e957) slider_pane

0x8524,	// (0x00009ab9) slider_pane_g1_ParamLimits

0x8524,	// (0x00009ab9) slider_pane_g1

0x8538,	// (0x00009acd) slider_pane_g2_ParamLimits

0x8538,	// (0x00009acd) slider_pane_g2

0x854e,	// (0x00009ae3) slider_pane_g3_ParamLimits

0x854e,	// (0x00009ae3) slider_pane_g3

0x0003,

0xfde2,	// (0x00011377) slider_pane_g_ParamLimits

0xfde2,	// (0x00011377) slider_pane_g

0xbcdb,	// (0x0000d270) popup_tb_float_extension_window_ParamLimits

0xbcdb,	// (0x0000d270) popup_tb_float_extension_window

0x857a,	// (0x00009b0f) aid_size_cell_tb_float_ext

0xea20,	// (0x0000ffb5) bg_popup_sub_window_cp28

0x8586,	// (0x00009b1b) grid_tb_float_ext_pane

0x8592,	// (0x00009b27) cell_tb_float_ext_pane_ParamLimits

0x8592,	// (0x00009b27) cell_tb_float_ext_pane

0x85ae,	// (0x00009b43) cell_tb_float_ext_pane_g1

0x85b7,	// (0x00009b4c) grid_highlight_pane_cp12

0xcaa0,	// (0x0000e035) cell_last_hwr_side_pane_ParamLimits

0xcaa0,	// (0x0000e035) cell_last_hwr_side_pane

0x5244,	// (0x000067d9) cell_last_hwr_side_pane_g1

0x85c0,	// (0x00009b55) cell_last_hwr_side_pane_g2

0x0001,

0xfdeb,	// (0x00011380) cell_last_hwr_side_pane_g

0xdcc8,	// (0x0000f25d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdcc8,	// (0x0000f25d) vkb2_area_bottom_space_btn_pane

0x56e9,	// (0x00006c7e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7fa9,	// (0x0000953e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x84cf,	// (0x00009a64) cell_vkb2_top_candi_pane_t1_ParamLimits

0x85c9,	// (0x00009b5e) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x85c9,	// (0x00009b5e) vkb2_area_bottom_space_btn_pane_g1

0x8603,	// (0x00009b98) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8603,	// (0x00009b98) vkb2_area_bottom_space_btn_pane_g2

0x8639,	// (0x00009bce) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8639,	// (0x00009bce) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf0,	// (0x00011385) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf0,	// (0x00011385) vkb2_area_bottom_space_btn_pane_g

0x536a,	// (0x000068ff) cel_fep_hwr_func_pane_ParamLimits

0x536a,	// (0x000068ff) cel_fep_hwr_func_pane

0xca75,	// (0x0000e00a) cell_hwr_side_button_pane_ParamLimits

0xca75,	// (0x0000e00a) cell_hwr_side_button_pane

0x73cb,	// (0x00008960) aid_area_touch_clock_ParamLimits

0xee82,	// (0x00010417) bg_uniindi_top_pane_ParamLimits

0x73df,	// (0x00008974) uniindi_top_pane_g1_ParamLimits

0x73f5,	// (0x0000898a) uniindi_top_pane_g2_ParamLimits

0x7401,	// (0x00008996) uniindi_top_pane_g3_ParamLimits

0x7412,	// (0x000089a7) uniindi_top_pane_g4_ParamLimits

0xfd01,	// (0x00011296) uniindi_top_pane_g_ParamLimits

0x741f,	// (0x000089b4) uniindi_top_pane_t1_ParamLimits

0xee82,	// (0x00010417) bg_vkb2_func_pane_cp01_ParamLimits

0xee82,	// (0x00010417) bg_vkb2_func_pane_cp01

0x8683,	// (0x00009c18) cel_fep_hwr_func_pane_g1_ParamLimits

0x8683,	// (0x00009c18) cel_fep_hwr_func_pane_g1

0xee82,	// (0x00010417) bg_vkb2_func_pane_cp02_ParamLimits

0xee82,	// (0x00010417) bg_vkb2_func_pane_cp02

0x8683,	// (0x00009c18) cell_hwr_side_button_pane_g1_ParamLimits

0x8683,	// (0x00009c18) cell_hwr_side_button_pane_g1

0x2048,	// (0x000035dd) status_pane_g4_ParamLimits

0x2048,	// (0x000035dd) status_pane_g4

0x2062,	// (0x000035f7) status_pane_t1

0x4ffe,	// (0x00006593) form2_midp_gauge_slider_cont_pane

0x5006,	// (0x0000659b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc9cd,	// (0x0000df62) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc9df,	// (0x0000df74) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacd,	// (0x00011062) form2_midp_gauge_slider_pane_t_ParamLimits

0x503c,	// (0x000065d1) form2_midp_slider_pane_ParamLimits

0x7938,	// (0x00008ecd) aid_size_cell_func_vkb2_ParamLimits

0x7938,	// (0x00008ecd) aid_size_cell_func_vkb2

0x8566,	// (0x00009afb) slider_pane_g4_ParamLimits

0x8566,	// (0x00009afb) slider_pane_g4

0xe17e,	// (0x0000f713) form2_midp_gauge_slider_pane_t2_cp01

0xe18c,	// (0x0000f721) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe18c,	// (0x0000f721) form2_midp_gauge_slider_pane_t3_cp01

0x86bc,	// (0x00009c51) form2_midp_slider_pane_cp01

0xea20,	// (0x0000ffb5) navi_smil_pane

0x86f0,	// (0x00009c85) navi_smil_pane_g1

0x86f8,	// (0x00009c8d) navi_smil_pane_t1

0x86c5,	// (0x00009c5a) form2_midp_slider_pane_g1

0x86ce,	// (0x00009c63) form2_midp_slider_pane_g2

0x86d6,	// (0x00009c6b) form2_midp_slider_pane_g3

0x86c5,	// (0x00009c5a) form2_midp_slider_pane_g4

0xe1a9,	// (0x0000f73e) form2_midp_slider_pane_g5

0x0004,

0xfdf9,	// (0x0001138e) form2_midp_slider_pane_g

0x8673,	// (0x00009c08) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8673,	// (0x00009c08) vkb2_area_bottom_space_btn_pane_g4

0xbec0,	// (0x0000d455) lc0_navi_pane_ParamLimits

0xbec0,	// (0x0000d455) lc0_navi_pane

0xbf30,	// (0x0000d4c5) lc0_stat_indi_pane_ParamLimits

0xbf30,	// (0x0000d4c5) lc0_stat_indi_pane

0xbf45,	// (0x0000d4da) ls0_title_pane_ParamLimits

0xbf45,	// (0x0000d4da) ls0_title_pane

0xf424,	// (0x000109b9) bg_popup_sub_pane_cp14_ParamLimits

0x73b2,	// (0x00008947) list_uniindi_pane_ParamLimits

0x73be,	// (0x00008953) uniindi_top_pane_ParamLimits

0x745e,	// (0x000089f3) list_single_uniindi_pane_g1_ParamLimits

0x7471,	// (0x00008a06) list_single_uniindi_pane_t1_ParamLimits

0xe1b2,	// (0x0000f747) lc0_stat_clock_pane_ParamLimits

0xe1b2,	// (0x0000f747) lc0_stat_clock_pane

0xe1bf,	// (0x0000f754) lc0_stat_indi_pane_g1_ParamLimits

0xe1bf,	// (0x0000f754) lc0_stat_indi_pane_g1

0xe1cc,	// (0x0000f761) lc0_stat_indi_pane_g2_ParamLimits

0xe1cc,	// (0x0000f761) lc0_stat_indi_pane_g2

0x0001,

0xfe04,	// (0x00011399) lc0_stat_indi_pane_g_ParamLimits

0xfe04,	// (0x00011399) lc0_stat_indi_pane_g

0xe1d9,	// (0x0000f76e) lc0_uni_indicator_pane_ParamLimits

0xe1d9,	// (0x0000f76e) lc0_uni_indicator_pane

0xe1e6,	// (0x0000f77b) ls0_title_pane_g1_ParamLimits

0xe1e6,	// (0x0000f77b) ls0_title_pane_g1

0xe1fa,	// (0x0000f78f) ls0_title_pane_t1_ParamLimits

0xe1fa,	// (0x0000f78f) ls0_title_pane_t1

0xe228,	// (0x0000f7bd) lc0_uni_indicator_pane_g1_ParamLimits

0xe228,	// (0x0000f7bd) lc0_uni_indicator_pane_g1

0x8797,	// (0x00009d2c) lc0_stat_clock_pane_t1

0xea20,	// (0x0000ffb5) main_ai5_pane

0x87ad,	// (0x00009d42) ai5_sk_pane_ParamLimits

0x87ad,	// (0x00009d42) ai5_sk_pane

0xe24f,	// (0x0000f7e4) cell_ai5_widget_pane_ParamLimits

0xe24f,	// (0x0000f7e4) cell_ai5_widget_pane

0xe2ce,	// (0x0000f863) aid_size_cell_widget_grid

0x8867,	// (0x00009dfc) bg_ai5_widget_pane_ParamLimits

0x8867,	// (0x00009dfc) bg_ai5_widget_pane

0xe304,	// (0x0000f899) cell_ai5_widget_pane_g2

0xe318,	// (0x0000f8ad) cell_ai5_widget_pane_g3

0xe332,	// (0x0000f8c7) cell_ai5_widget_pane_g4

0xe342,	// (0x0000f8d7) cell_ai5_widget_pane_g5

0x8933,	// (0x00009ec8) cell_ai5_widget_pane_g6

0xe352,	// (0x0000f8e7) cell_ai5_widget_pane_g7

0xe376,	// (0x0000f90b) cell_ai5_widget_pane_t1_ParamLimits

0xe376,	// (0x0000f90b) cell_ai5_widget_pane_t1

0x89c9,	// (0x00009f5e) cell_ai5_widget_pane_t2_ParamLimits

0x89c9,	// (0x00009f5e) cell_ai5_widget_pane_t2

0x89e1,	// (0x00009f76) cell_ai5_widget_pane_t3_ParamLimits

0x89e1,	// (0x00009f76) cell_ai5_widget_pane_t3

0xe393,	// (0x0000f928) cell_ai5_widget_pane_t4_ParamLimits

0xe393,	// (0x0000f928) cell_ai5_widget_pane_t4

0xe3b9,	// (0x0000f94e) cell_ai5_widget_pane_t5_ParamLimits

0xe3b9,	// (0x0000f94e) cell_ai5_widget_pane_t5

0x8a3f,	// (0x00009fd4) cell_ai5_widget_pane_t6_ParamLimits

0x8a3f,	// (0x00009fd4) cell_ai5_widget_pane_t6

0x8a51,	// (0x00009fe6) cell_ai5_widget_pane_t7_ParamLimits

0x8a51,	// (0x00009fe6) cell_ai5_widget_pane_t7

0x8a70,	// (0x0000a005) cell_ai5_widget_pane_t8_ParamLimits

0x8a70,	// (0x0000a005) cell_ai5_widget_pane_t8

0x000b,

0xfe24,	// (0x000113b9) cell_ai5_widget_pane_t_ParamLimits

0xfe24,	// (0x000113b9) cell_ai5_widget_pane_t

0xe44b,	// (0x0000f9e0) grid_ai5_widget_pane

0xf424,	// (0x000109b9) highlight_cell_ai5_widget_pane_ParamLimits

0xf424,	// (0x000109b9) highlight_cell_ai5_widget_pane

0xe45f,	// (0x0000f9f4) ai5_sk_left_pane

0xe469,	// (0x0000f9fe) ai5_sk_middle_pane

0xe473,	// (0x0000fa08) ai5_sk_right_pane

0x8b26,	// (0x0000a0bb) bg_ai5_widget_pane_g1_ParamLimits

0x8b26,	// (0x0000a0bb) bg_ai5_widget_pane_g1

0x8b32,	// (0x0000a0c7) bg_ai5_widget_pane_g2_ParamLimits

0x8b32,	// (0x0000a0c7) bg_ai5_widget_pane_g2

0x8b3e,	// (0x0000a0d3) bg_ai5_widget_pane_g3_ParamLimits

0x8b3e,	// (0x0000a0d3) bg_ai5_widget_pane_g3

0x8b4a,	// (0x0000a0df) bg_ai5_widget_pane_g4_ParamLimits

0x8b4a,	// (0x0000a0df) bg_ai5_widget_pane_g4

0x8b56,	// (0x0000a0eb) bg_ai5_widget_pane_g5_ParamLimits

0x8b56,	// (0x0000a0eb) bg_ai5_widget_pane_g5

0x8b62,	// (0x0000a0f7) bg_ai5_widget_pane_g6_ParamLimits

0x8b62,	// (0x0000a0f7) bg_ai5_widget_pane_g6

0x8b6e,	// (0x0000a103) bg_ai5_widget_pane_g7_ParamLimits

0x8b6e,	// (0x0000a103) bg_ai5_widget_pane_g7

0x8b7a,	// (0x0000a10f) bg_ai5_widget_pane_g8_ParamLimits

0x8b7a,	// (0x0000a10f) bg_ai5_widget_pane_g8

0x8b86,	// (0x0000a11b) bg_ai5_widget_pane_g9_ParamLimits

0x8b86,	// (0x0000a11b) bg_ai5_widget_pane_g9

0x0008,

0xfe3d,	// (0x000113d2) bg_ai5_widget_pane_g_ParamLimits

0xfe3d,	// (0x000113d2) bg_ai5_widget_pane_g

0xe4a9,	// (0x0000fa3e) cell_shortcut_ai5_widget_pane_ParamLimits

0xe4a9,	// (0x0000fa3e) cell_shortcut_ai5_widget_pane

0x1125,	// (0x000026ba) bg_cell_shortcut_ai5_widget_pane

0x8bd1,	// (0x0000a166) cell_grid_ai5_widget_pane_g1

0x1125,	// (0x000026ba) highlight_cell_shortcut_ai5_widget_pane

0x2283,	// (0x00003818) ai5_sk_left_pane_g1

0x8bda,	// (0x0000a16f) ai5_sk_left_pane_g2

0x8be2,	// (0x0000a177) ai5_sk_left_pane_g3

0x8bea,	// (0x0000a17f) ai5_sk_left_pane_g4

0x0003,

0xfe50,	// (0x000113e5) ai5_sk_left_pane_g

0x8bf2,	// (0x0000a187) ai5_sk_left_pane_t1

0x227b,	// (0x00003810) ai5_sk_right_pane_g1

0x8c00,	// (0x0000a195) ai5_sk_right_pane_g2

0x8c08,	// (0x0000a19d) ai5_sk_right_pane_g3

0x8c10,	// (0x0000a1a5) ai5_sk_right_pane_g4

0x0003,

0xfe59,	// (0x000113ee) ai5_sk_right_pane_g

0x8c18,	// (0x0000a1ad) ai5_sk_right_pane_t1

0x227b,	// (0x00003810) ai5_sk_middle_pane_g1

0x2283,	// (0x00003818) ai5_sk_middle_pane_g2

0x229b,	// (0x00003830) ai5_sk_middle_pane_g3

0x8c08,	// (0x0000a19d) ai5_sk_middle_pane_g4

0x8be2,	// (0x0000a177) ai5_sk_middle_pane_g5

0x8c26,	// (0x0000a1bb) ai5_sk_middle_pane_g6

0xe4bc,	// (0x0000fa51) ai5_sk_middle_pane_g7

0x0006,

0xfe62,	// (0x000113f7) ai5_sk_middle_pane_g

0xbdac,	// (0x0000d341) aid_touch_area_size_lc0_ParamLimits

0xbdac,	// (0x0000d341) aid_touch_area_size_lc0

0x5ac0,	// (0x00007055) cell_hwr_candidate_pane_t1_ParamLimits

0x1d0f,	// (0x000032a4) aid_touch_navi_pane

0xc04e,	// (0x0000d5e3) status_dt_navi_pane_ParamLimits

0xc04e,	// (0x0000d5e3) status_dt_navi_pane

0xc066,	// (0x0000d5fb) status_dt_sta_pane_ParamLimits

0xc066,	// (0x0000d5fb) status_dt_sta_pane

0xe4c4,	// (0x0000fa59) dt_sta_controll_pane

0xe4d1,	// (0x0000fa66) dt_sta_indi_pane

0xe4de,	// (0x0000fa73) dt_sta_title_pane

0xee82,	// (0x00010417) bg_dt_sta_indi_pane_ParamLimits

0xee82,	// (0x00010417) bg_dt_sta_indi_pane

0xe4f0,	// (0x0000fa85) dt_sta_battery_pane

0xe4f8,	// (0x0000fa8d) dt_sta_indi_pane_g1

0xe501,	// (0x0000fa96) dt_sta_indi_pane_g2

0xe50a,	// (0x0000fa9f) dt_sta_indi_pane_g3

0x0002,

0xfe71,	// (0x00011406) dt_sta_indi_pane_g

0xe513,	// (0x0000faa8) dt_sta_signal_pane

0xf424,	// (0x000109b9) bg_dt_sta_title_pane_ParamLimits

0xf424,	// (0x000109b9) bg_dt_sta_title_pane

0xe51c,	// (0x0000fab1) dt_sta_title_pane_g1

0xe524,	// (0x0000fab9) dt_sta_title_pane_t1_ParamLimits

0xe524,	// (0x0000fab9) dt_sta_title_pane_t1

0xea20,	// (0x0000ffb5) bg_dt_sta_control_pane

0xe539,	// (0x0000face) dt_sta_controll_pane_g1

0xe542,	// (0x0000fad7) bg_dt_sta_title_pane_g1

0xe54b,	// (0x0000fae0) bg_dt_sta_title_pane_g2

0xe554,	// (0x0000fae9) bg_dt_sta_title_pane_g3

0x0002,

0xfe78,	// (0x0001140d) bg_dt_sta_title_pane_g

0x5244,	// (0x000067d9) bg_dt_sta_indi_pane_g1

0x8cd4,	// (0x0000a269) dt_sta_signal_pane_g1

0x8cdc,	// (0x0000a271) dt_sta_signal_pane_g2

0x0001,

0xfe7f,	// (0x00011414) dt_sta_signal_pane_g

0x8ce4,	// (0x0000a279) dt_sta_battery_pane_g1

0x8ced,	// (0x0000a282) dt_sta_battery_pane_t1

0x5244,	// (0x000067d9) bg_dt_sta_control_pane_g1

0x0a41,	// (0x00001fd6) fep_china_uni_eep_pane

0x0a49,	// (0x00001fde) fep_china_uni_entry_pane_ParamLimits

0x0a59,	// (0x00001fee) popup_fep_china_uni_window_g1_ParamLimits

0x0a69,	// (0x00001ffe) popup_fep_china_uni_window_g2_ParamLimits

0x0a69,	// (0x00001ffe) popup_fep_china_uni_window_g2

0x0001,

0xf6f1,	// (0x00010c86) popup_fep_china_uni_window_g_ParamLimits

0xf6f1,	// (0x00010c86) popup_fep_china_uni_window_g

0x8cfc,	// (0x0000a291) fep_china_uni_eep_pane_g1

0x8d04,	// (0x0000a299) fep_china_uni_eep_pane_t1

0x86e7,	// (0x00009c7c) aid_touch_area_size_smil_player

0x1e61,	// (0x000033f6) lc0_clock_pane

0x2056,	// (0x000035eb) status_pane_g5_ParamLimits

0x2056,	// (0x000035eb) status_pane_g5

0xb801,	// (0x0000cd96) popup_keymap_window

0x201c,	// (0x000035b1) status_icon_pane

0xe318,	// (0x0000f8ad) cell_ai5_widget_pane_g3_ParamLimits

0xe332,	// (0x0000f8c7) cell_ai5_widget_pane_g4_ParamLimits

0xe342,	// (0x0000f8d7) cell_ai5_widget_pane_g5_ParamLimits

0x894c,	// (0x00009ee1) cell_ai5_widget_pane_g8_ParamLimits

0x894c,	// (0x00009ee1) cell_ai5_widget_pane_g8

0x8960,	// (0x00009ef5) cell_ai5_widget_pane_g9_ParamLimits

0x8960,	// (0x00009ef5) cell_ai5_widget_pane_g9

0x8974,	// (0x00009f09) cell_ai5_widget_pane_g10_ParamLimits

0x8974,	// (0x00009f09) cell_ai5_widget_pane_g10

0x8d13,	// (0x0000a2a8) status_icon_pane_g1

0xea20,	// (0x0000ffb5) bg_popup_sub_pane_cp13

0x8d1b,	// (0x0000a2b0) popup_keymap_window_t1

0x150e,	// (0x00002aa3) control_pane_g6_ParamLimits

0x150e,	// (0x00002aa3) control_pane_g6

0x151b,	// (0x00002ab0) control_pane_g7_ParamLimits

0x151b,	// (0x00002ab0) control_pane_g7

0x1528,	// (0x00002abd) control_pane_g8_ParamLimits

0x1528,	// (0x00002abd) control_pane_g8

0xe4c4,	// (0x0000fa59) dt_sta_controll_pane_ParamLimits

0xe4d1,	// (0x0000fa66) dt_sta_indi_pane_ParamLimits

0xe4de,	// (0x0000fa73) dt_sta_title_pane_ParamLimits

0xf2d3,	// (0x00010868) aid_size_touch_scroll_bar_cale

0xec14,	// (0x000101a9) popup_discreet_window_ParamLimits

0xec14,	// (0x000101a9) popup_discreet_window

0xa6f8,	// (0x0000bc8d) popup_sk_window

0x2ac1,	// (0x00004056) bg_popup_sub_pane_cp28_ParamLimits

0x2ac1,	// (0x00004056) bg_popup_sub_pane_cp28

0x8d29,	// (0x0000a2be) popup_discreet_window_g1_ParamLimits

0x8d29,	// (0x0000a2be) popup_discreet_window_g1

0x8d49,	// (0x0000a2de) popup_discreet_window_t1_ParamLimits

0x8d49,	// (0x0000a2de) popup_discreet_window_t1

0x8d67,	// (0x0000a2fc) popup_discreet_window_t2_ParamLimits

0x8d67,	// (0x0000a2fc) popup_discreet_window_t2

0x0002,

0xfe84,	// (0x00011419) popup_discreet_window_t_ParamLimits

0xfe84,	// (0x00011419) popup_discreet_window_t

0x8db9,	// (0x0000a34e) popup_sk_window_g1

0x8dc3,	// (0x0000a358) popup_sk_window_g2

0x0001,

0xfe8b,	// (0x00011420) popup_sk_window_g

0x8dcb,	// (0x0000a360) popup_sk_window_t1

0x8dd9,	// (0x0000a36e) popup_sk_window_t1_copy1

0xe304,	// (0x0000f899) cell_ai5_widget_pane_g2_ParamLimits

0xe3d9,	// (0x0000f96e) cell_ai5_widget_pane_t9_ParamLimits

0xe3d9,	// (0x0000f96e) cell_ai5_widget_pane_t9

0xea20,	// (0x0000ffb5) main_fep_fshwr2_pane

0xe55d,	// (0x0000faf2) aid_fshwr2_btn_pane

0xe571,	// (0x0000fb06) aid_fshwr2_syb_pane

0xe585,	// (0x0000fb1a) aid_fshwr2_txt_pane

0xe595,	// (0x0000fb2a) fshwr2_func_candi_pane

0xe5b7,	// (0x0000fb4c) fshwr2_hwr_syb_pane

0xe5db,	// (0x0000fb70) fshwr2_icf_pane

0xea20,	// (0x0000ffb5) fshwr2_icf_bg_pane

0x8e85,	// (0x0000a41a) fshwr2_icf_pane_t1_ParamLimits

0x8e85,	// (0x0000a41a) fshwr2_icf_pane_t1

0x0841,	// (0x00001dd6) fshwr2_func_candi_pane_g1

0xe60b,	// (0x0000fba0) fshwr2_func_candi_row_pane_ParamLimits

0xe60b,	// (0x0000fba0) fshwr2_func_candi_row_pane

0xe632,	// (0x0000fbc7) cell_fshwr2_syb_pane_ParamLimits

0xe632,	// (0x0000fbc7) cell_fshwr2_syb_pane

0x8683,	// (0x00009c18) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8683,	// (0x00009c18) fshwr2_hwr_syb_pane_g1

0xea20,	// (0x0000ffb5) bg_popup_call_pane_cp01

0xe65a,	// (0x0000fbef) fshwr2_func_candi_cell_pane_ParamLimits

0xe65a,	// (0x0000fbef) fshwr2_func_candi_cell_pane

0x28a1,	// (0x00003e36) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x28a1,	// (0x00003e36) fshwr2_func_candi_cell_bg_pane

0xe6a5,	// (0x0000fc3a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe6a5,	// (0x0000fc3a) fshwr2_func_candi_cell_pane_g1

0xe6dc,	// (0x0000fc71) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe6dc,	// (0x0000fc71) fshwr2_func_candi_cell_pane_t1

0xea20,	// (0x0000ffb5) bg_button_pane_cp08

0x1656,	// (0x00002beb) cell_fshwr2_syb_bg_pane

0xe6f7,	// (0x0000fc8c) cell_fshwr2_syb_bg_pane_g1

0xe70b,	// (0x0000fca0) cell_fshwr2_syb_bg_pane_t1

0xf424,	// (0x000109b9) main_tmo_pane

0xc486,	// (0x0000da1b) uni_indicator_pane_g1_ParamLimits

0xc49c,	// (0x0000da31) uni_indicator_pane_g2_ParamLimits

0xc4b2,	// (0x0000da47) uni_indicator_pane_g3_ParamLimits

0xc4c5,	// (0x0000da5a) uni_indicator_pane_g4_ParamLimits

0xc4c5,	// (0x0000da5a) uni_indicator_pane_g4

0x37a4,	// (0x00004d39) uni_indicator_pane_g5_ParamLimits

0x37a4,	// (0x00004d39) uni_indicator_pane_g5

0x37a4,	// (0x00004d39) uni_indicator_pane_g6_ParamLimits

0x37a4,	// (0x00004d39) uni_indicator_pane_g6

0xf8e9,	// (0x00010e7e) uni_indicator_pane_g_ParamLimits

0xd250,	// (0x0000e7e5) popup_tmo_note_window_ParamLimits

0xd250,	// (0x0000e7e5) popup_tmo_note_window

0xf424,	// (0x000109b9) fshwr2_bg_pane

0xe6cd,	// (0x0000fc62) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe6cd,	// (0x0000fc62) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe90,	// (0x00011425) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe90,	// (0x00011425) fshwr2_func_candi_cell_pane_g

0x5244,	// (0x000067d9) bg_popup_window_pane_cp01

0x8f9a,	// (0x0000a52f) bg_popup_window_pane_g1_cp01

0x8fa3,	// (0x0000a538) bg_popup_window_pane_cp22_ParamLimits

0x8fa3,	// (0x0000a538) bg_popup_window_pane_cp22

0x8fb1,	// (0x0000a546) listscroll_tmo_link_pane_ParamLimits

0x8fb1,	// (0x0000a546) listscroll_tmo_link_pane

0x8ff1,	// (0x0000a586) popup_tmo_note_window_g1_ParamLimits

0x8ff1,	// (0x0000a586) popup_tmo_note_window_g1

0x8ffe,	// (0x0000a593) tmo_note_info_pane_ParamLimits

0x8ffe,	// (0x0000a593) tmo_note_info_pane

0xe721,	// (0x0000fcb6) list_tmo_note_info_pane_g1_ParamLimits

0xe721,	// (0x0000fcb6) list_tmo_note_info_pane_g1

0x902f,	// (0x0000a5c4) list_tmo_note_info_pane_g2_ParamLimits

0x902f,	// (0x0000a5c4) list_tmo_note_info_pane_g2

0x0001,

0xfe95,	// (0x0001142a) list_tmo_note_info_pane_g_ParamLimits

0xfe95,	// (0x0001142a) list_tmo_note_info_pane_g

0x904b,	// (0x0000a5e0) list_tmo_note_info_text_pane_ParamLimits

0x904b,	// (0x0000a5e0) list_tmo_note_info_text_pane

0x90d0,	// (0x0000a665) list_tmo_link_pane

0x90dd,	// (0x0000a672) scroll_pane_cp20

0x90ea,	// (0x0000a67f) list_single_tmo_link_pane_ParamLimits

0x90ea,	// (0x0000a67f) list_single_tmo_link_pane

0x90fa,	// (0x0000a68f) list_single_tmo_link_pane_t1

0x9108,	// (0x0000a69d) list_tmo_note_info_text_pane_t1_ParamLimits

0x9108,	// (0x0000a69d) list_tmo_note_info_text_pane_t1

0xb0fa,	// (0x0000c68f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb0fa,	// (0x0000c68f) aid_size_touch_scroll_bar_cp01

0xb03a,	// (0x0000c5cf) aid_size_touch_slider_marker

0xa6e8,	// (0x0000bc7d) popup_settings_window_ParamLimits

0xa6e8,	// (0x0000bc7d) popup_settings_window

0x16b4,	// (0x00002c49) popup_candi_list_indi_window

0x1d0f,	// (0x000032a4) aid_touch_navi_pane_ParamLimits

0x712c,	// (0x000086c1) rs_clock_indi_pane

0x7135,	// (0x000086ca) sctrl_sk_bottom_pane_ParamLimits

0x7146,	// (0x000086db) sctrl_sk_top_pane_ParamLimits

0x798a,	// (0x00008f1f) popup_fep_tooltip_window

0xe2ce,	// (0x0000f863) aid_size_cell_widget_grid_ParamLimits

0xe2ed,	// (0x0000f882) cell_ai5_widget_pane_g1_ParamLimits

0xe2ed,	// (0x0000f882) cell_ai5_widget_pane_g1

0x8933,	// (0x00009ec8) cell_ai5_widget_pane_g6_ParamLimits

0xe352,	// (0x0000f8e7) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe09,	// (0x0001139e) cell_ai5_widget_pane_g_ParamLimits

0xfe09,	// (0x0001139e) cell_ai5_widget_pane_g

0xe408,	// (0x0000f99d) cell_ai5_widget_pane_t10_ParamLimits

0xe408,	// (0x0000f99d) cell_ai5_widget_pane_t10

0xe44b,	// (0x0000f9e0) grid_ai5_widget_pane_ParamLimits

0xe47d,	// (0x0000fa12) cell_contacts_ai5_widget_pane_ParamLimits

0xe47d,	// (0x0000fa12) cell_contacts_ai5_widget_pane

0x8d7c,	// (0x0000a311) popup_discreet_window_t3_ParamLimits

0x8d7c,	// (0x0000a311) popup_discreet_window_t3

0xe5f7,	// (0x0000fb8c) popup_fshwr2_char_preview_window_ParamLimits

0xe5f7,	// (0x0000fb8c) popup_fshwr2_char_preview_window

0xe738,	// (0x0000fccd) tmo_note_info_pane_t1

0xe74d,	// (0x0000fce2) tmo_note_info_pane_t2

0xe766,	// (0x0000fcfb) tmo_note_info_pane_t3

0x90ac,	// (0x0000a641) tmo_note_info_pane_t4

0x90be,	// (0x0000a653) tmo_note_info_pane_t5

0x0004,

0xfe9a,	// (0x0001142f) tmo_note_info_pane_t

0x90d0,	// (0x0000a665) list_tmo_link_pane_ParamLimits

0x90dd,	// (0x0000a672) scroll_pane_cp20_ParamLimits

0xea20,	// (0x0000ffb5) bg_popup_fep_char_preview_window_cp01

0x9121,	// (0x0000a6b6) popup_fshwr2_char_preview_window_t1

0x912f,	// (0x0000a6c4) popup_candi_list_indi_window_g1

0x9138,	// (0x0000a6cd) bg_cell_contacts_ai5_widget_pane

0xe77b,	// (0x0000fd10) cell_contacts_ai5_widget_pane_g1

0x9159,	// (0x0000a6ee) cell_contacts_ai5_widget_pane_g2

0x9165,	// (0x0000a6fa) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea5,	// (0x0001143a) cell_contacts_ai5_widget_pane_g

0x9171,	// (0x0000a706) cell_contacts_ai5_widget_pane_t1

0xf424,	// (0x000109b9) highlight_cell_shortcut_ai5_widget_pane_cp01

0x91e8,	// (0x0000a77d) settings_container_pane

0x1125,	// (0x000026ba) listscroll_set_pane_copy1

0x45f1,	// (0x00005b86) scroll_pane_cp121_copy1

0x91f4,	// (0x0000a789) set_content_pane_copy1

0x91fc,	// (0x0000a791) aid_height_set_list_copy1_ParamLimits

0x91fc,	// (0x0000a791) aid_height_set_list_copy1

0x3a98,	// (0x0000502d) aid_size_parent_copy1_ParamLimits

0x3a98,	// (0x0000502d) aid_size_parent_copy1

0x9208,	// (0x0000a79d) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9208,	// (0x0000a79d) button_value_adjust_pane_cp6_copy1

0x1656,	// (0x00002beb) list_highlight_pane_cp2_copy1_ParamLimits

0x1656,	// (0x00002beb) list_highlight_pane_cp2_copy1

0x921c,	// (0x0000a7b1) list_set_pane_copy1_ParamLimits

0x921c,	// (0x0000a7b1) list_set_pane_copy1

0x9183,	// (0x0000a718) main_pane_set_t1_copy1_ParamLimits

0x9183,	// (0x0000a718) main_pane_set_t1_copy1

0x91bd,	// (0x0000a752) main_pane_set_t2_copy1_ParamLimits

0x91bd,	// (0x0000a752) main_pane_set_t2_copy1

0x92dd,	// (0x0000a872) main_pane_set_t3_copy1

0x92eb,	// (0x0000a880) main_pane_set_t4_copy1

0x91dc,	// (0x0000a771) set_content_pane_g1_copy1_ParamLimits

0x91dc,	// (0x0000a771) set_content_pane_g1_copy1

0x92f9,	// (0x0000a88e) setting_code_pane_copy1

0x9301,	// (0x0000a896) setting_slider_graphic_pane_copy1

0x9301,	// (0x0000a896) setting_slider_pane_copy1

0x9309,	// (0x0000a89e) setting_text_pane_copy1

0x9309,	// (0x0000a89e) setting_volume_pane_copy1

0x92f9,	// (0x0000a88e) settings_code_pane_cp2_copy1

0x9311,	// (0x0000a8a6) settings_code_pane_cp_copy1_ParamLimits

0x9311,	// (0x0000a8a6) settings_code_pane_cp_copy1

0x9325,	// (0x0000a8ba) volume_set_pane_copy1

0x9331,	// (0x0000a8c6) volume_set_pane_g10_copy1

0x933d,	// (0x0000a8d2) volume_set_pane_g1_copy1

0x9347,	// (0x0000a8dc) volume_set_pane_g2_copy1

0x9351,	// (0x0000a8e6) volume_set_pane_g3_copy1

0x935b,	// (0x0000a8f0) volume_set_pane_g4_copy1

0x9365,	// (0x0000a8fa) volume_set_pane_g5_copy1

0x936f,	// (0x0000a904) volume_set_pane_g6_copy1

0x9379,	// (0x0000a90e) volume_set_pane_g7_copy1

0x9383,	// (0x0000a918) volume_set_pane_g8_copy1

0x938d,	// (0x0000a922) volume_set_pane_g9_copy1

0xecac,	// (0x00010241) bg_set_opt_pane_cp_copy1_ParamLimits

0xecac,	// (0x00010241) bg_set_opt_pane_cp_copy1

0x9399,	// (0x0000a92e) setting_slider_pane_t1_copy1_ParamLimits

0x9399,	// (0x0000a92e) setting_slider_pane_t1_copy1

0x93b8,	// (0x0000a94d) setting_slider_pane_t2_copy1_ParamLimits

0x93b8,	// (0x0000a94d) setting_slider_pane_t2_copy1

0x93d2,	// (0x0000a967) setting_slider_pane_t3_copy1_ParamLimits

0x93d2,	// (0x0000a967) setting_slider_pane_t3_copy1

0x93ea,	// (0x0000a97f) slider_set_pane_copy1_ParamLimits

0x93ea,	// (0x0000a97f) slider_set_pane_copy1

0xf4df,	// (0x00010a74) set_opt_bg_pane_g1_copy2

0xf4e7,	// (0x00010a7c) set_opt_bg_pane_g2_copy2

0x9400,	// (0x0000a995) set_opt_bg_pane_g3_copy2

0xf4f7,	// (0x00010a8c) set_opt_bg_pane_g4_copy2

0xf4ff,	// (0x00010a94) set_opt_bg_pane_g5_copy2

0xf507,	// (0x00010a9c) set_opt_bg_pane_g6_copy2

0x940a,	// (0x0000a99f) set_opt_bg_pane_g7_copy2

0x9414,	// (0x0000a9a9) set_opt_bg_pane_g8_copy2

0x941e,	// (0x0000a9b3) set_opt_bg_pane_g9_copy2

0x9428,	// (0x0000a9bd) aid_size_touch_slider_mark_copy1_ParamLimits

0x9428,	// (0x0000a9bd) aid_size_touch_slider_mark_copy1

0x943c,	// (0x0000a9d1) slider_set_pane_g1_copy1

0x9445,	// (0x0000a9da) slider_set_pane_g2_copy1

0x39ff,	// (0x00004f94) slider_set_pane_g3_copy1_ParamLimits

0x39ff,	// (0x00004f94) slider_set_pane_g3_copy1

0x3a13,	// (0x00004fa8) slider_set_pane_g4_copy1_ParamLimits

0x3a13,	// (0x00004fa8) slider_set_pane_g4_copy1

0x3a2b,	// (0x00004fc0) slider_set_pane_g5_copy1_ParamLimits

0x3a2b,	// (0x00004fc0) slider_set_pane_g5_copy1

0x39ff,	// (0x00004f94) slider_set_pane_g6_copy1_ParamLimits

0x39ff,	// (0x00004f94) slider_set_pane_g6_copy1

0x944d,	// (0x0000a9e2) slider_set_pane_g7_copy1_ParamLimits

0x944d,	// (0x0000a9e2) slider_set_pane_g7_copy1

0xebf2,	// (0x00010187) bg_set_opt_pane_cp2_copy1

0x9463,	// (0x0000a9f8) setting_slider_graphic_pane_g1_copy1

0x946c,	// (0x0000aa01) setting_slider_graphic_pane_t1_copy1

0x947c,	// (0x0000aa11) setting_slider_graphic_pane_t2_copy1

0x948c,	// (0x0000aa21) slider_set_pane_cp_copy1

0x949c,	// (0x0000aa31) input_focus_pane_cp1_copy1

0x94a5,	// (0x0000aa3a) list_set_text_pane_copy1

0x94ad,	// (0x0000aa42) setting_text_pane_g1_copy1

0xed5a,	// (0x000102ef) set_text_pane_t1_copy1

0x949c,	// (0x0000aa31) input_focus_pane_cp2_copy1

0x94ad,	// (0x0000aa42) setting_code_pane_g1_copy1

0x94b6,	// (0x0000aa4b) setting_code_pane_t1_copy1

0x43f6,	// (0x0000598b) list_set_graphic_pane_copy1

0xebf2,	// (0x00010187) bg_set_opt_pane_cp4_copy1

0x0e10,	// (0x000023a5) list_set_graphic_pane_g1_copy1_ParamLimits

0x0e10,	// (0x000023a5) list_set_graphic_pane_g1_copy1

0x94c4,	// (0x0000aa59) list_set_graphic_pane_g2_copy1

0x0e28,	// (0x000023bd) list_set_graphic_pane_t1_copy1_ParamLimits

0x0e28,	// (0x000023bd) list_set_graphic_pane_t1_copy1

0x5244,	// (0x000067d9) rs_clock_indi_pane_g1

0x94cc,	// (0x0000aa61) rs_clock_indi_pane_t1

0x94da,	// (0x0000aa6f) rs_indi_pane

0x94e2,	// (0x0000aa77) rs_indi_pane_g1

0x94eb,	// (0x0000aa80) rs_indi_pane_g2

0x912f,	// (0x0000a6c4) rs_indi_pane_g3

0x0002,

0xfeac,	// (0x00011441) rs_indi_pane_g

0x1125,	// (0x000026ba) bg_popup_preview_window_pane_cp03

0x94f4,	// (0x0000aa89) popup_fep_tooltip_window_t1

0x64e1,	// (0x00007a76) popup_note2_window_g2_ParamLimits

0x64e1,	// (0x00007a76) popup_note2_window_g2

0x0001,

0xfc39,	// (0x000111ce) popup_note2_window_g_ParamLimits

0xfc39,	// (0x000111ce) popup_note2_window_g

0x6afc,	// (0x00008091) bg_popup_sub_pane_cp11_ParamLimits

0x6b09,	// (0x0000809e) cell_ai3_links_pane_g1_ParamLimits

0x6b20,	// (0x000080b5) cell_ai3_links_pane_t1

0xed5a,	// (0x000102ef) set_text_pane_t1_copy1_ParamLimits

0x1023,	// (0x000025b8) cell_graphic_popup_pane_cp2_ParamLimits

0x1023,	// (0x000025b8) cell_graphic_popup_pane_cp2

0x9502,	// (0x0000aa97) cell_graphic_popup_pane_g1_cp2

0xf0e6,	// (0x0001067b) cell_graphic_popup_pane_g2_cp2

0x950a,	// (0x0000aa9f) cell_graphic_popup_pane_g3_cp2

0x9512,	// (0x0000aaa7) cell_graphic_popup_pane_t2_cp2

0xf0f7,	// (0x0001068c) grid_highlight_pane_cp3_cp2

0x052d,	// (0x00001ac2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf424,	// (0x000109b9) main_tmo_pane_ParamLimits

0xd244,	// (0x0000e7d9) popup_tmo_big_image_note_window

0xe2dc,	// (0x0000f871) cell_ai5_widget_list_pane

0xe2e4,	// (0x0000f879) cell_ai5_widget_lrg_icon_pane

0xe738,	// (0x0000fccd) tmo_note_info_pane_t1_ParamLimits

0xe74d,	// (0x0000fce2) tmo_note_info_pane_t2_ParamLimits

0xe766,	// (0x0000fcfb) tmo_note_info_pane_t3_ParamLimits

0x90ac,	// (0x0000a641) tmo_note_info_pane_t4_ParamLimits

0x90be,	// (0x0000a653) tmo_note_info_pane_t5_ParamLimits

0xfe9a,	// (0x0001142f) tmo_note_info_pane_t_ParamLimits

0x91e8,	// (0x0000a77d) settings_container_pane_ParamLimits

0x9494,	// (0x0000aa29) indicator_popup_pane_cp5

0x9494,	// (0x0000aa29) indicator_popup_pane_cp6

0x43f6,	// (0x0000598b) list_set_graphic_pane_copy1_ParamLimits

0xea20,	// (0x0000ffb5) bg_popup_window_pane_cp23

0x9520,	// (0x0000aab5) popup_tmo_big_image_note_window_g1

0x952c,	// (0x0000aac1) popup_tmo_big_image_note_window_t1

0x953c,	// (0x0000aad1) popup_tmo_big_image_note_window_t2

0x954c,	// (0x0000aae1) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb3,	// (0x00011448) popup_tmo_big_image_note_window_t

0x5244,	// (0x000067d9) cell_ai5_widget_lrg_icon_pane_g1

0xe790,	// (0x0000fd25) cell_ai5_widget_lrg_icon_pane_t1

0xe79e,	// (0x0000fd33) cell_ai5_widget_list_row_pane_ParamLimits

0xe79e,	// (0x0000fd33) cell_ai5_widget_list_row_pane

0xe7b6,	// (0x0000fd4b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe7b6,	// (0x0000fd4b) cell_ai5_widget_list_row_pane_g1

0xe7c3,	// (0x0000fd58) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe7c3,	// (0x0000fd58) cell_ai5_widget_list_row_pane_t1

0xe7ee,	// (0x0000fd83) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe7ee,	// (0x0000fd83) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeba,	// (0x0001144f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeba,	// (0x0001144f) cell_ai5_widget_list_row_pane_t

0xea20,	// (0x0000ffb5) main_fep_vtchi_ss_pane

0x960a,	// (0x0000ab9f) popup_fep_char_pre_window

0x9612,	// (0x0000aba7) popup_fep_ituss_window

0xe825,	// (0x0000fdba) popup_fep_vkbss_window

0x1656,	// (0x00002beb) grid_vkbss_keypad_pane_ParamLimits

0x1656,	// (0x00002beb) grid_vkbss_keypad_pane

0x96ad,	// (0x0000ac42) ituss_keypad_pane

0x96c3,	// (0x0000ac58) aid_vkbss_key_offset_ParamLimits

0x96c3,	// (0x0000ac58) aid_vkbss_key_offset

0xe848,	// (0x0000fddd) cell_vkbss_key_pane_ParamLimits

0xe848,	// (0x0000fddd) cell_vkbss_key_pane

0x9731,	// (0x0000acc6) bg_cell_vkbss_key_g1_ParamLimits

0x9731,	// (0x0000acc6) bg_cell_vkbss_key_g1

0xe89f,	// (0x0000fe34) cell_vkbss_key_3p_pane_ParamLimits

0xe89f,	// (0x0000fe34) cell_vkbss_key_3p_pane

0xe8d5,	// (0x0000fe6a) cell_vkbss_key_g1_ParamLimits

0xe8d5,	// (0x0000fe6a) cell_vkbss_key_g1

0xe90b,	// (0x0000fea0) cell_vkbss_key_t1_ParamLimits

0xe90b,	// (0x0000fea0) cell_vkbss_key_t1

0x9805,	// (0x0000ad9a) cell_ituss_key_pane_ParamLimits

0x9805,	// (0x0000ad9a) cell_ituss_key_pane

0x9816,	// (0x0000adab) bg_cell_ituss_key_g1_ParamLimits

0x9816,	// (0x0000adab) bg_cell_ituss_key_g1

0x9822,	// (0x0000adb7) cell_ituss_key_pane_g1_ParamLimits

0x9822,	// (0x0000adb7) cell_ituss_key_pane_g1

0x9836,	// (0x0000adcb) cell_ituss_key_pane_g2_ParamLimits

0x9836,	// (0x0000adcb) cell_ituss_key_pane_g2

0x0005,

0xfec1,	// (0x00011456) cell_ituss_key_pane_g_ParamLimits

0xfec1,	// (0x00011456) cell_ituss_key_pane_g

0x98cc,	// (0x0000ae61) cell_ituss_key_t1_ParamLimits

0x98cc,	// (0x0000ae61) cell_ituss_key_t1

0x9906,	// (0x0000ae9b) cell_ituss_key_t2_ParamLimits

0x9906,	// (0x0000ae9b) cell_ituss_key_t2

0x9938,	// (0x0000aecd) cell_ituss_key_t3_ParamLimits

0x9938,	// (0x0000aecd) cell_ituss_key_t3

0x9969,	// (0x0000aefe) cell_ituss_key_t4_ParamLimits

0x9969,	// (0x0000aefe) cell_ituss_key_t4

0x0005,

0xfece,	// (0x00011463) cell_ituss_key_t_ParamLimits

0xfece,	// (0x00011463) cell_ituss_key_t

0xe967,	// (0x0000fefc) cell_vkbss_key_3p_pane_g1

0xe96f,	// (0x0000ff04) cell_vkbss_key_3p_pane_g2

0xe977,	// (0x0000ff0c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedb,	// (0x00011470) cell_vkbss_key_3p_pane_g

0x1125,	// (0x000026ba) bg_popup_fep_char_preview_window_cp02

0x9a02,	// (0x0000af97) popup_fep_char_pre_window_t1

0xe2bb,	// (0x0000f850) main_ai5_sk_pane

0x9138,	// (0x0000a6cd) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xe77b,	// (0x0000fd10) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9159,	// (0x0000a6ee) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9165,	// (0x0000a6fa) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea5,	// (0x0001143a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9171,	// (0x0000a706) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf424,	// (0x000109b9) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe97f,	// (0x0000ff14) main_ai5_sk_pane_g1

0x28f9,	// (0x00003e8e) popup_query_code_window_g1

0xe816,	// (0x0000fdab) popup_fep_vkb_icf_pane

0x9660,	// (0x0000abf5) popup_fep_vtchi_icf_pane

0x9a19,	// (0x0000afae) bg_icf_pane

0x9a19,	// (0x0000afae) list_vkb_icf_pane

0x9a25,	// (0x0000afba) bg_icf_pane_cp01

0x9a38,	// (0x0000afcd) vtchi_icf_list_pane

0xe9d4,	// (0x0000ff69) list_vkb_icf_pane_t1_ParamLimits

0xe9d4,	// (0x0000ff69) list_vkb_icf_pane_t1

0x9ab1,	// (0x0000b046) vtchi_icf_list_pane_t1_ParamLimits

0x9ab1,	// (0x0000b046) vtchi_icf_list_pane_t1

0x9612,	// (0x0000aba7) popup_fep_ituss_window_ParamLimits

0x9660,	// (0x0000abf5) popup_fep_vtchi_icf_pane_ParamLimits

0x96ad,	// (0x0000ac42) ituss_keypad_pane_ParamLimits

0x96b9,	// (0x0000ac4e) ituss_sks_pane

0x9a19,	// (0x0000afae) bg_icf_pane_ParamLimits

0x95e2,	// (0x0000ab77) icf_edit_indi_pane_ParamLimits

0x95e2,	// (0x0000ab77) icf_edit_indi_pane

0x9a19,	// (0x0000afae) list_vkb_icf_pane_ParamLimits

0x9a25,	// (0x0000afba) bg_icf_pane_cp01_ParamLimits

0x95fd,	// (0x0000ab92) icf_edit_indi_pane_cp01_ParamLimits

0x95fd,	// (0x0000ab92) icf_edit_indi_pane_cp01

0x9a38,	// (0x0000afcd) vtchi_query_pane

0x8683,	// (0x00009c18) icf_edit_indi_pane_g1_ParamLimits

0x8683,	// (0x00009c18) icf_edit_indi_pane_g1

0xe9eb,	// (0x0000ff80) icf_edit_indi_pane_g2_ParamLimits

0xe9eb,	// (0x0000ff80) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x0001149b) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x0001149b) icf_edit_indi_pane_g

0xe9ff,	// (0x0000ff94) icf_edit_indi_pane_t1

0x9aca,	// (0x0000b05f) bg_input_focus_pane_cp042

0xf2ca,	// (0x0001085f) vtchi_button_pane

0x9ad3,	// (0x0000b068) vtchi_query_pane_t1

0x9ae1,	// (0x0000b076) vtchi_query_pane_t2

0x9aef,	// (0x0000b084) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x0001148a) vtchi_query_pane_t

0xea20,	// (0x0000ffb5) bg_button_pane_cp13

0x9afd,	// (0x0000b092) vtchi_button_pane_g1

0x9b05,	// (0x0000b09a) ituss_sks_pane_g1

0x9b10,	// (0x0000b0a5) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00011491) ituss_sks_pane_g

0x9b18,	// (0x0000b0ad) ituss_sks_pane_t1

0x9b26,	// (0x0000b0bb) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x00011496) ituss_sks_pane_t

0x4c7b,	// (0x00006210) indicator_nsta_pane_cp_g1

0x4c84,	// (0x00006219) indicator_nsta_pane_cp_g2

0x4c8c,	// (0x00006221) indicator_nsta_pane_cp_g3

0x4c94,	// (0x00006229) indicator_nsta_pane_cp_g4

0x4c84,	// (0x00006219) indicator_nsta_pane_cp_g5

0x4c8c,	// (0x00006221) indicator_nsta_pane_cp_g6

0x0005,

0xfa83,	// (0x00011018) indicator_nsta_pane_cp_g

0xe04f,	// (0x0000f5e4) cell_graphic2_pane_t2_ParamLimits

0xe04f,	// (0x0000f5e4) cell_graphic2_pane_t2

0x0001,

0xfd90,	// (0x00011325) cell_graphic2_pane_t_ParamLimits

0xfd90,	// (0x00011325) cell_graphic2_pane_t

0xe087,	// (0x0000f61c) cell_graphic2_control_pane_t1

0xb374,	// (0x0000c909) signal_pane_g3_ParamLimits

0xb374,	// (0x0000c909) signal_pane_g3

0xb388,	// (0x0000c91d) signal_pane_g4_ParamLimits

0xb388,	// (0x0000c91d) signal_pane_g4

0xe800,	// (0x0000fd95) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe800,	// (0x0000fd95) cell_ai5_widget_list_row_pane_t3

0x98ba,	// (0x0000ae4f) cell_ituss_key_pane_t1_ParamLimits

0x98ba,	// (0x0000ae4f) cell_ituss_key_pane_t1

0x2531,	// (0x00003ac6) form_field_data_wide_pane_vc_t2_ParamLimits

0x2531,	// (0x00003ac6) form_field_data_wide_pane_vc_t2

0x2545,	// (0x00003ada) form_field_data_wide_pane_vc_t3_ParamLimits

0x2545,	// (0x00003ada) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d1,	// (0x00010d66) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d1,	// (0x00010d66) form_field_data_wide_pane_vc_t

0x4918,	// (0x00005ead) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4918,	// (0x00005ead) form_field_slider_wide_pane_vc_t3

0x49ee,	// (0x00005f83) form_field_popup_wide_pane_vc_t2_ParamLimits

0x49ee,	// (0x00005f83) form_field_popup_wide_pane_vc_t2

0x4a05,	// (0x00005f9a) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4a05,	// (0x00005f9a) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa72,	// (0x00011007) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa72,	// (0x00011007) form_field_popup_wide_pane_vc_t

0xe55d,	// (0x0000faf2) aid_fshwr2_btn_pane_ParamLimits

0xe571,	// (0x0000fb06) aid_fshwr2_syb_pane_ParamLimits

0xe585,	// (0x0000fb1a) aid_fshwr2_txt_pane_ParamLimits

0xf424,	// (0x000109b9) fshwr2_bg_pane_ParamLimits

0xe595,	// (0x0000fb2a) fshwr2_func_candi_pane_ParamLimits

0xe5b7,	// (0x0000fb4c) fshwr2_hwr_syb_pane_ParamLimits

0xe5db,	// (0x0000fb70) fshwr2_icf_pane_ParamLimits

0x4887,	// (0x00005e1c) list_double_graphic_pane_vc_g4_ParamLimits

0x4887,	// (0x00005e1c) list_double_graphic_pane_vc_g4

0x9856,	// (0x0000adeb) cell_ituss_key_pane_g3_ParamLimits

0x9856,	// (0x0000adeb) cell_ituss_key_pane_g3

0x999a,	// (0x0000af2f) cell_ituss_key_t5_ParamLimits

0x999a,	// (0x0000af2f) cell_ituss_key_t5

0xe825,	// (0x0000fdba) popup_fep_vkbss_window_ParamLimits

0xe2c5,	// (0x0000f85a) aid_cell_ai5_quarter

0xe9ff,	// (0x0000ff94) icf_edit_indi_pane_t1_ParamLimits

0xef2a,	// (0x000104bf) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xef2a,	// (0x000104bf) aid_tch_indicator_popup_pane_cp2

0xef3d,	// (0x000104d2) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xef3d,	// (0x000104d2) aid_tch_query_popup_data_pane_cp2

0x28a1,	// (0x00003e36) aid_tch_query_popup_pane_ParamLimits

0x28a1,	// (0x00003e36) aid_tch_query_popup_pane

0x28a1,	// (0x00003e36) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x28a1,	// (0x00003e36) aid_tch_query_popup_data_pane_cp1

0x1656,	// (0x00002beb) cell_fshwr2_syb_bg_pane_ParamLimits

0xe6f7,	// (0x0000fc8c) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe70b,	// (0x0000fca0) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe816,	// (0x0000fdab) popup_fep_vkb_icf_pane_ParamLimits

0xe15b,	// (0x0000f6f0) bg_popup_fep_char_preview_window_g10

0xe35e,	// (0x0000f8f3) cell_ai5_widget_pane_g11_ParamLimits

0xe35e,	// (0x0000f8f3) cell_ai5_widget_pane_g11

0x8994,	// (0x00009f29) cell_ai5_widget_pane_g12_ParamLimits

0x8994,	// (0x00009f29) cell_ai5_widget_pane_g12

0xe36a,	// (0x0000f8ff) cell_ai5_widget_pane_g13_ParamLimits

0xe36a,	// (0x0000f8ff) cell_ai5_widget_pane_g13

0xe427,	// (0x0000f9bc) cell_ai5_widget_pane_t11_ParamLimits

0xe427,	// (0x0000f9bc) cell_ai5_widget_pane_t11

0xe439,	// (0x0000f9ce) cell_ai5_widget_pane_t12_ParamLimits

0xe439,	// (0x0000f9ce) cell_ai5_widget_pane_t12

0x9862,	// (0x0000adf7) cell_ituss_key_pane_g4_ParamLimits

0x9862,	// (0x0000adf7) cell_ituss_key_pane_g4

0x987e,	// (0x0000ae13) cell_ituss_key_pane_g5_ParamLimits

0x987e,	// (0x0000ae13) cell_ituss_key_pane_g5

0x989a,	// (0x0000ae2f) cell_ituss_key_pane_g6_ParamLimits

0x989a,	// (0x0000ae2f) cell_ituss_key_pane_g6

0x2273,	// (0x00003808) bg_icf_pane_g1

0xe988,	// (0x0000ff1d) bg_icf_pane_g2

0xe992,	// (0x0000ff27) bg_icf_pane_g3

0xe99a,	// (0x0000ff2f) bg_icf_pane_g4

0xe9a4,	// (0x0000ff39) bg_icf_pane_g5

0xe9ae,	// (0x0000ff43) bg_icf_pane_g6

0xe9b8,	// (0x0000ff4d) bg_icf_pane_g7

0xe9c0,	// (0x0000ff55) bg_icf_pane_g8

0xe9ca,	// (0x0000ff5f) bg_icf_pane_g9

0x0008,

0xfee2,	// (0x00011477) bg_icf_pane_g

0x9679,	// (0x0000ac0e) popup_hyb_candi_window_ParamLimits

0x9679,	// (0x0000ac0e) popup_hyb_candi_window

0x2412,	// (0x000039a7) bg_popup_sub_pane_cp01_ParamLimits

0x2412,	// (0x000039a7) bg_popup_sub_pane_cp01

0x9b61,	// (0x0000b0f6) entry_hyb_candi_pane_ParamLimits

0x9b61,	// (0x0000b0f6) entry_hyb_candi_pane

0x9b70,	// (0x0000b105) grid_hyb_candi_pane_ParamLimits

0x9b70,	// (0x0000b105) grid_hyb_candi_pane

0x9b85,	// (0x0000b11a) grid_hyb_phrase_pane_ParamLimits

0x9b85,	// (0x0000b11a) grid_hyb_phrase_pane

0x9b94,	// (0x0000b129) cell_hyb_candi_pane_ParamLimits

0x9b94,	// (0x0000b129) cell_hyb_candi_pane

0xf2d3,	// (0x00010868) cell_hyb_candi_scroll_pane

0x0841,	// (0x00001dd6) cell_hyb_candi_pane_g1

0x9bb0,	// (0x0000b145) cell_hyb_candi_pane_t1

0x9bbe,	// (0x0000b153) cell_hyb_phrase_pane

0x0841,	// (0x00001dd6) cell_hyb_phrase_pane_g1

0x9bc7,	// (0x0000b15c) cell_hyb_phrase_pane_t1

0x9bd5,	// (0x0000b16a) entry_hyb_candi_pane_t1

0x1125,	// (0x000026ba) input_focus_pane_cp06

0x9be3,	// (0x0000b178) cell_hyb_candi_scroll_pane_g1

0x9beb,	// (0x0000b180) cell_hyb_candi_scroll_pane_g1_aid

0x9bf3,	// (0x0000b188) cell_hyb_candi_scroll_pane_g2

0x9bfb,	// (0x0000b190) cell_hyb_candi_scroll_pane_g2_aid

0x9c03,	// (0x0000b198) cell_hyb_candi_scroll_pane_g3

0x9c0b,	// (0x0000b1a0) cell_hyb_candi_scroll_pane_g4

0xe247,	// (0x0000f7dc) ai5_page_g1

0x99ac,	// (0x0000af41) cell_ituss_key_t6_ParamLimits

0x99ac,	// (0x0000af41) cell_ituss_key_t6

0xe834,	// (0x0000fdc9) icf_edit_indi_pane_cp02_ParamLimits

0xe834,	// (0x0000fdc9) icf_edit_indi_pane_cp02

0x96a0,	// (0x0000ac35) icf_edit_indi_pane_cp03_ParamLimits

0x96a0,	// (0x0000ac35) icf_edit_indi_pane_cp03
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

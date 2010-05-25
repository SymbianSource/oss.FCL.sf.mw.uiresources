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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00001e99 };

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
0x95c0,	// (0x0000b459) Screen

0x95cc,	// (0x0000b465) application_window_ParamLimits

0x95cc,	// (0x0000b465) application_window

0xe770,	// (0x00010609) screen_g1

0x9604,	// (0x0000b49d) area_bottom_pane_ParamLimits

0x9604,	// (0x0000b49d) area_bottom_pane

0xe79a,	// (0x00010633) area_top_pane_ParamLimits

0xe79a,	// (0x00010633) area_top_pane

0xe82e,	// (0x000106c7) main_pane_ParamLimits

0xe82e,	// (0x000106c7) main_pane

0xe8e9,	// (0x00010782) misc_graphics

0xb393,	// (0x0000d22c) battery_pane_ParamLimits

0xb393,	// (0x0000d22c) battery_pane

0x218e,	// (0x00004027) bg_status_flat_pane_g8

0x2196,	// (0x0000402f) bg_status_flat_pane_g9

0x130f,	// (0x000031a8) context_pane_ParamLimits

0x130f,	// (0x000031a8) context_pane

0xb4fe,	// (0x0000d397) navi_pane_ParamLimits

0xb4fe,	// (0x0000d397) navi_pane

0xb57c,	// (0x0000d415) signal_pane_ParamLimits

0xb57c,	// (0x0000d415) signal_pane

0x0008,

0xf85e,	// (0x000116f7) bg_status_flat_pane_g

0xb60c,	// (0x0000d4a5) status_pane_g1_ParamLimits

0xb60c,	// (0x0000d4a5) status_pane_g1

0xb622,	// (0x0000d4bb) status_pane_g2_ParamLimits

0xb622,	// (0x0000d4bb) status_pane_g2

0x1536,	// (0x000033cf) status_pane_g3_ParamLimits

0x1536,	// (0x000033cf) status_pane_g3

0x0004,

0xf791,	// (0x0001162a) status_pane_g_ParamLimits

0xf791,	// (0x0001162a) status_pane_g

0xb62e,	// (0x0000d4c7) title_pane_ParamLimits

0xb62e,	// (0x0000d4c7) title_pane

0xb691,	// (0x0000d52a) uni_indicator_pane_ParamLimits

0xb691,	// (0x0000d52a) uni_indicator_pane

0x0ba4,	// (0x00002a3d) bg_list_pane_ParamLimits

0x0ba4,	// (0x00002a3d) bg_list_pane

0xab4b,	// (0x0000c9e4) find_pane

0xab53,	// (0x0000c9ec) listscroll_app_pane_ParamLimits

0xab53,	// (0x0000c9ec) listscroll_app_pane

0x0bd8,	// (0x00002a71) listscroll_form_pane

0xab63,	// (0x0000c9fc) listscroll_gen_pane_ParamLimits

0xab63,	// (0x0000c9fc) listscroll_gen_pane

0x0bf4,	// (0x00002a8d) listscroll_set_pane

0x2f36,	// (0x00004dcf) main_idle_act_pane

0x0685,	// (0x0000251e) main_idle_trad_pane

0x0685,	// (0x0000251e) main_list_empty_pane

0x0c0e,	// (0x00002aa7) main_midp_pane

0x0c1a,	// (0x00002ab3) main_pane_g1_ParamLimits

0x0c1a,	// (0x00002ab3) main_pane_g1

0xab77,	// (0x0000ca10) popup_ai_message_window_ParamLimits

0xab77,	// (0x0000ca10) popup_ai_message_window

0xac28,	// (0x0000cac1) popup_fep_china_uni_window_ParamLimits

0xac28,	// (0x0000cac1) popup_fep_china_uni_window

0xac82,	// (0x0000cb1b) popup_fep_japan_candidate_window_ParamLimits

0xac82,	// (0x0000cb1b) popup_fep_japan_candidate_window

0xaca0,	// (0x0000cb39) popup_fep_japan_predictive_window_ParamLimits

0xaca0,	// (0x0000cb39) popup_fep_japan_predictive_window

0xacb2,	// (0x0000cb4b) popup_find_window

0xaccf,	// (0x0000cb68) popup_grid_graphic_window_ParamLimits

0xaccf,	// (0x0000cb68) popup_grid_graphic_window

0xad6d,	// (0x0000cc06) popup_large_graphic_colour_window

0xad93,	// (0x0000cc2c) popup_menu_window_ParamLimits

0xad93,	// (0x0000cc2c) popup_menu_window

0xaf65,	// (0x0000cdfe) popup_note_image_window

0xaf2b,	// (0x0000cdc4) popup_note_wait_window_ParamLimits

0xaf2b,	// (0x0000cdc4) popup_note_wait_window

0xaf7d,	// (0x0000ce16) popup_note_window_ParamLimits

0xaf7d,	// (0x0000ce16) popup_note_window

0xb02c,	// (0x0000cec5) popup_query_code_window_ParamLimits

0xb02c,	// (0x0000cec5) popup_query_code_window

0xb066,	// (0x0000ceff) popup_query_data_code_window_ParamLimits

0xb066,	// (0x0000ceff) popup_query_data_code_window

0xb083,	// (0x0000cf1c) popup_query_data_window_ParamLimits

0xb083,	// (0x0000cf1c) popup_query_data_window

0xb105,	// (0x0000cf9e) popup_query_sat_info_window_ParamLimits

0xb105,	// (0x0000cf9e) popup_query_sat_info_window

0xb19c,	// (0x0000d035) popup_snote_single_graphic_window_ParamLimits

0xb19c,	// (0x0000d035) popup_snote_single_graphic_window

0xb19c,	// (0x0000d035) popup_snote_single_text_window_ParamLimits

0xb19c,	// (0x0000d035) popup_snote_single_text_window

0x1086,	// (0x00002f1f) popup_sub_window_general

0xb2f9,	// (0x0000d192) popup_window_general_ParamLimits

0xb2f9,	// (0x0000d192) popup_window_general

0x11cb,	// (0x00003064) power_save_pane

0xa9a9,	// (0x0000c842) control_pane_g1_ParamLimits

0xa9a9,	// (0x0000c842) control_pane_g1

0xa9d2,	// (0x0000c86b) control_pane_g2_ParamLimits

0xa9d2,	// (0x0000c86b) control_pane_g2

0x0a3f,	// (0x000028d8) control_pane_g3_ParamLimits

0x0a3f,	// (0x000028d8) control_pane_g3

0x0007,

0xf779,	// (0x00011612) control_pane_g_ParamLimits

0xf779,	// (0x00011612) control_pane_g

0xaa3a,	// (0x0000c8d3) control_pane_t1_ParamLimits

0xaa3a,	// (0x0000c8d3) control_pane_t1

0xaaa0,	// (0x0000c939) control_pane_t2_ParamLimits

0xaaa0,	// (0x0000c939) control_pane_t2

0x0002,

0xf78a,	// (0x00011623) control_pane_t_ParamLimits

0xf78a,	// (0x00011623) control_pane_t

0xa902,	// (0x0000c79b) navi_navi_volume_pane_cp1

0xa90a,	// (0x0000c7a3) status_small_icon_pane

0x0926,	// (0x000027bf) status_small_pane_g1_ParamLimits

0x0926,	// (0x000027bf) status_small_pane_g1

0xa912,	// (0x0000c7ab) status_small_pane_g2_ParamLimits

0xa912,	// (0x0000c7ab) status_small_pane_g2

0xa91e,	// (0x0000c7b7) status_small_pane_g3_ParamLimits

0xa91e,	// (0x0000c7b7) status_small_pane_g3

0xa92a,	// (0x0000c7c3) status_small_pane_g4_ParamLimits

0xa92a,	// (0x0000c7c3) status_small_pane_g4

0xa936,	// (0x0000c7cf) status_small_pane_g5_ParamLimits

0xa936,	// (0x0000c7cf) status_small_pane_g5

0xa944,	// (0x0000c7dd) status_small_pane_g6_ParamLimits

0xa944,	// (0x0000c7dd) status_small_pane_g6

0x0007,

0xf768,	// (0x00011601) status_small_pane_g_ParamLimits

0xf768,	// (0x00011601) status_small_pane_g

0xa973,	// (0x0000c80c) status_small_pane_t1

0xa995,	// (0x0000c82e) status_small_wait_pane_ParamLimits

0xa995,	// (0x0000c82e) status_small_wait_pane

0xa5de,	// (0x0000c477) aid_levels_signal_ParamLimits

0xa5de,	// (0x0000c477) aid_levels_signal

0xa5f6,	// (0x0000c48f) signal_pane_g1_ParamLimits

0xa5f6,	// (0x0000c48f) signal_pane_g1

0xa611,	// (0x0000c4aa) signal_pane_g2_ParamLimits

0xa611,	// (0x0000c4aa) signal_pane_g2

0x0003,

0xf6f9,	// (0x00011592) signal_pane_g_ParamLimits

0xf6f9,	// (0x00011592) signal_pane_g

0xf4d5,	// (0x0001136e) context_pane_g1

0x9802,	// (0x0000b69b) title_pane_g1

0x9839,	// (0x0000b6d2) title_pane_t1

0xe91f,	// (0x000107b8) title_pane_t2

0xe945,	// (0x000107de) title_pane_t3

0x0002,

0xf557,	// (0x000113f0) title_pane_t

0xb6b9,	// (0x0000d552) aid_levels_battery_ParamLimits

0xb6b9,	// (0x0000d552) aid_levels_battery

0xb6d5,	// (0x0000d56e) battery_pane_g1_ParamLimits

0xb6d5,	// (0x0000d56e) battery_pane_g1

0xb6f2,	// (0x0000d58b) battery_pane_g2_ParamLimits

0xb6f2,	// (0x0000d58b) battery_pane_g2

0x0001,

0xf79c,	// (0x00011635) battery_pane_g_ParamLimits

0xf79c,	// (0x00011635) battery_pane_g

0xbd7f,	// (0x0000dc18) uni_indicator_pane_g1

0xbd95,	// (0x0000dc2e) uni_indicator_pane_g2

0xbdab,	// (0x0000dc44) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x0001179f) uni_indicator_pane_g

0x04f7,	// (0x00002390) navi_icon_pane_ParamLimits

0x04f7,	// (0x00002390) navi_icon_pane

0x0441,	// (0x000022da) navi_midp_pane

0x0513,	// (0x000023ac) navi_navi_pane

0x051d,	// (0x000023b6) navi_text_pane_ParamLimits

0x051d,	// (0x000023b6) navi_text_pane

0xe770,	// (0x00010609) status_small_wait_pane_g1

0xebb0,	// (0x00010a49) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x0001179a) status_small_wait_pane_g

0xbcd8,	// (0x0000db71) navi_navi_icon_text_pane

0x294b,	// (0x000047e4) navi_navi_pane_g1_ParamLimits

0x294b,	// (0x000047e4) navi_navi_pane_g1

0x295d,	// (0x000047f6) navi_navi_pane_g2_ParamLimits

0x295d,	// (0x000047f6) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x00011768) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x00011768) navi_navi_pane_g

0x296f,	// (0x00004808) navi_navi_tabs_pane

0x2978,	// (0x00004811) navi_navi_text_pane

0xbcd8,	// (0x0000db71) navi_navi_volume_pane

0x291f,	// (0x000047b8) navi_text_pane_t1

0x2913,	// (0x000047ac) navi_icon_pane_g1

0x2866,	// (0x000046ff) navi_navi_text_pane_t1

0xbcc4,	// (0x0000db5d) navi_navi_volume_pane_g1

0x285d,	// (0x000046f6) volume_small_pane

0x27bb,	// (0x00004654) navi_navi_icon_text_pane_g1

0xbc28,	// (0x0000dac1) navi_navi_icon_text_pane_t1

0x0513,	// (0x000023ac) navi_tabs_2_long_pane

0x0513,	// (0x000023ac) navi_tabs_2_pane

0x0513,	// (0x000023ac) navi_tabs_3_long_pane

0x0513,	// (0x000023ac) navi_tabs_3_pane

0x0513,	// (0x000023ac) navi_tabs_4_pane

0x271a,	// (0x000045b3) tabs_2_active_pane_ParamLimits

0x271a,	// (0x000045b3) tabs_2_active_pane

0x272a,	// (0x000045c3) tabs_2_passive_pane_ParamLimits

0x272a,	// (0x000045c3) tabs_2_passive_pane

0x26e8,	// (0x00004581) tabs_3_active_pane_ParamLimits

0x26e8,	// (0x00004581) tabs_3_active_pane

0x26f8,	// (0x00004591) tabs_3_passive_pane_ParamLimits

0x26f8,	// (0x00004591) tabs_3_passive_pane

0x2709,	// (0x000045a2) tabs_3_passive_pane_cp_ParamLimits

0x2709,	// (0x000045a2) tabs_3_passive_pane_cp

0x26a4,	// (0x0000453d) tabs_4_active_pane_ParamLimits

0x26a4,	// (0x0000453d) tabs_4_active_pane

0x26b5,	// (0x0000454e) tabs_4_passive_pane_ParamLimits

0x26b5,	// (0x0000454e) tabs_4_passive_pane

0x26c6,	// (0x0000455f) tabs_4_passive_pane_cp_ParamLimits

0x26c6,	// (0x0000455f) tabs_4_passive_pane_cp

0x26d7,	// (0x00004570) tabs_4_passive_pane_cp2_ParamLimits

0x26d7,	// (0x00004570) tabs_4_passive_pane_cp2

0x2680,	// (0x00004519) tabs_2_long_active_pane_ParamLimits

0x2680,	// (0x00004519) tabs_2_long_active_pane

0x2692,	// (0x0000452b) tabs_2_long_passive_pane_ParamLimits

0x2692,	// (0x0000452b) tabs_2_long_passive_pane

0x263b,	// (0x000044d4) tabs_3_long_active_pane_ParamLimits

0x263b,	// (0x000044d4) tabs_3_long_active_pane

0x2654,	// (0x000044ed) tabs_3_long_passive_pane_ParamLimits

0x2654,	// (0x000044ed) tabs_3_long_passive_pane

0x2667,	// (0x00004500) tabs_3_long_passive_pane_cp_ParamLimits

0x2667,	// (0x00004500) tabs_3_long_passive_pane_cp

0x25e1,	// (0x0000447a) volume_small_pane_g1

0x25ea,	// (0x00004483) volume_small_pane_g2

0x25f3,	// (0x0000448c) volume_small_pane_g3

0x25fc,	// (0x00004495) volume_small_pane_g4

0x2605,	// (0x0000449e) volume_small_pane_g5

0x260e,	// (0x000044a7) volume_small_pane_g6

0x2617,	// (0x000044b0) volume_small_pane_g7

0x2620,	// (0x000044b9) volume_small_pane_g8

0x2629,	// (0x000044c2) volume_small_pane_g9

0x2632,	// (0x000044cb) volume_small_pane_g10

0x0009,

0xf89b,	// (0x00011734) volume_small_pane_g

0xe957,	// (0x000107f0) bg_active_tab_pane_cp2_ParamLimits

0xe957,	// (0x000107f0) bg_active_tab_pane_cp2

0x98c5,	// (0x0000b75e) tabs_3_active_pane_g1

0x98cd,	// (0x0000b766) tabs_3_active_pane_t1

0xe957,	// (0x000107f0) bg_passive_tab_pane_cp2_ParamLimits

0xe957,	// (0x000107f0) bg_passive_tab_pane_cp2

0x98c5,	// (0x0000b75e) tabs_3_passive_pane_g1

0x98cd,	// (0x0000b766) tabs_3_passive_pane_t1

0xe957,	// (0x000107f0) bg_active_tab_pane_cp3_ParamLimits

0xe957,	// (0x000107f0) bg_active_tab_pane_cp3

0x98df,	// (0x0000b778) tabs_4_active_pane_g1

0x98e7,	// (0x0000b780) tabs_4_active_pane_t1

0xe957,	// (0x000107f0) bg_passive_tab_pane_cp3_ParamLimits

0xe957,	// (0x000107f0) bg_passive_tab_pane_cp3

0x98df,	// (0x0000b778) tabs_4_1_passive_pane_g1

0x98e7,	// (0x0000b780) tabs_4_1_passive_pane_t1

0x0c0e,	// (0x00002aa7) list_highlight_pane_cp2

0xbf7f,	// (0x0000de18) list_set_pane_ParamLimits

0xbf7f,	// (0x0000de18) list_set_pane

0xc019,	// (0x0000deb2) main_pane_set_t1_ParamLimits

0xc019,	// (0x0000deb2) main_pane_set_t1

0xc039,	// (0x0000ded2) main_pane_set_t2_ParamLimits

0xc039,	// (0x0000ded2) main_pane_set_t2

0xc04d,	// (0x0000dee6) main_pane_set_t3_ParamLimits

0xc04d,	// (0x0000dee6) main_pane_set_t3

0xc05f,	// (0x0000def8) main_pane_set_t4_ParamLimits

0xc05f,	// (0x0000def8) main_pane_set_t4

0x0003,

0xf96b,	// (0x00011804) main_pane_set_t_ParamLimits

0xf96b,	// (0x00011804) main_pane_set_t

0xc071,	// (0x0000df0a) setting_code_pane

0xc07b,	// (0x0000df14) setting_slider_graphic_pane

0xc07b,	// (0x0000df14) setting_slider_pane

0xc07b,	// (0x0000df14) setting_text_pane

0xc07b,	// (0x0000df14) setting_volume_pane

0x98f9,	// (0x0000b792) volume_set_pane

0xe965,	// (0x000107fe) bg_set_opt_pane_cp

0x9901,	// (0x0000b79a) setting_slider_pane_t1

0x991a,	// (0x0000b7b3) setting_slider_pane_t2

0x9934,	// (0x0000b7cd) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000113f7) setting_slider_pane_t

0x994c,	// (0x0000b7e5) slider_set_pane

0xe8e9,	// (0x00010782) bg_set_opt_pane_cp2

0xe973,	// (0x0001080c) setting_slider_graphic_pane_g1

0x9962,	// (0x0000b7fb) setting_slider_graphic_pane_t1

0x9972,	// (0x0000b80b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000113fe) setting_slider_graphic_pane_t

0x9982,	// (0x0000b81b) slider_set_pane_cp

0xe8e9,	// (0x00010782) input_focus_pane_cp1

0x2f1d,	// (0x00004db6) list_set_text_pane

0xe770,	// (0x00010609) setting_text_pane_g1

0xe8e9,	// (0x00010782) input_focus_pane_cp2

0xe770,	// (0x00010609) setting_code_pane_g1

0xe97c,	// (0x00010815) setting_code_pane_t1

0xe98a,	// (0x00010823) set_text_pane_t1_ParamLimits

0xe98a,	// (0x00010823) set_text_pane_t1

0xee61,	// (0x00010cfa) set_opt_bg_pane_g1

0xee69,	// (0x00010d02) set_opt_bg_pane_g2

0xbf34,	// (0x0000ddcd) set_opt_bg_pane_g3

0xee79,	// (0x00010d12) set_opt_bg_pane_g4

0xee81,	// (0x00010d1a) set_opt_bg_pane_g5

0xee89,	// (0x00010d22) set_opt_bg_pane_g6

0xbf3e,	// (0x0000ddd7) set_opt_bg_pane_g7

0xbf46,	// (0x0000dddf) set_opt_bg_pane_g8

0xbf50,	// (0x0000dde9) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x000117f1) set_opt_bg_pane_g

0xbecf,	// (0x0000dd68) slider_set_pane_g1

0x2e93,	// (0x00004d2c) slider_set_pane_g2

0x0006,

0xf949,	// (0x000117e2) slider_set_pane_g

0xbde2,	// (0x0000dc7b) volume_set_pane_g1

0xbdea,	// (0x0000dc83) volume_set_pane_g2

0xbdf2,	// (0x0000dc8b) volume_set_pane_g3

0xbdfa,	// (0x0000dc93) volume_set_pane_g4

0xbe02,	// (0x0000dc9b) volume_set_pane_g5

0xbe0a,	// (0x0000dca3) volume_set_pane_g6

0xbe12,	// (0x0000dcab) volume_set_pane_g7

0xbe1a,	// (0x0000dcb3) volume_set_pane_g8

0xbe22,	// (0x0000dcbb) volume_set_pane_g9

0xbe2a,	// (0x0000dcc3) volume_set_pane_g10

0x0009,

0xf921,	// (0x000117ba) volume_set_pane_g

0x998a,	// (0x0000b823) indicator_pane_ParamLimits

0x998a,	// (0x0000b823) indicator_pane

0x99b2,	// (0x0000b84b) main_idle_pane_g2_ParamLimits

0x99b2,	// (0x0000b84b) main_idle_pane_g2

0x99ea,	// (0x0000b883) main_pane_idle_g1_ParamLimits

0x99ea,	// (0x0000b883) main_pane_idle_g1

0xe9a4,	// (0x0001083d) popup_clock_digital_analogue_window_ParamLimits

0xe9a4,	// (0x0001083d) popup_clock_digital_analogue_window

0x9a11,	// (0x0000b8aa) soft_indicator_pane_ParamLimits

0x9a11,	// (0x0000b8aa) soft_indicator_pane

0x9a35,	// (0x0000b8ce) wallpaper_pane_ParamLimits

0x9a35,	// (0x0000b8ce) wallpaper_pane

0xe770,	// (0x00010609) wallpaper_pane_g1

0x9a47,	// (0x0000b8e0) indicator_pane_g1_ParamLimits

0x9a47,	// (0x0000b8e0) indicator_pane_g1

0x348b,	// (0x00005324) navi_navi_icon_text_pane_srt_g1

0xe9d2,	// (0x0001086b) soft_indicator_pane_t1

0xe9ec,	// (0x00010885) aid_ps_area_pane

0x9a5d,	// (0x0000b8f6) aid_ps_clock_pane

0xe9fd,	// (0x00010896) aid_ps_indicator_pane

0xea09,	// (0x000108a2) indicator_ps_pane_ParamLimits

0xea09,	// (0x000108a2) indicator_ps_pane

0xea18,	// (0x000108b1) power_save_pane_g1_ParamLimits

0xea18,	// (0x000108b1) power_save_pane_g1

0xea24,	// (0x000108bd) power_save_pane_g2_ParamLimits

0xea24,	// (0x000108bd) power_save_pane_g2

0xe77a,	// (0x00010613) aid_navinavi_width_pane

0xe9ec,	// (0x00010885) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00011403) power_save_pane_g_ParamLimits

0xf56a,	// (0x00011403) power_save_pane_g

0xea32,	// (0x000108cb) power_save_pane_t1_ParamLimits

0xea32,	// (0x000108cb) power_save_pane_t1

0x9a5d,	// (0x0000b8f6) aid_ps_clock_pane_ParamLimits

0xe9fd,	// (0x00010896) aid_ps_indicator_pane_ParamLimits

0xea44,	// (0x000108dd) power_save_pane_t4_ParamLimits

0xea44,	// (0x000108dd) power_save_pane_t4

0x0001,

0xf56f,	// (0x00011408) power_save_pane_t_ParamLimits

0xf56f,	// (0x00011408) power_save_pane_t

0xea6e,	// (0x00010907) power_save_t3_ParamLimits

0xea6e,	// (0x00010907) power_save_t3

0xea59,	// (0x000108f2) power_save_t2_ParamLimits

0xea59,	// (0x000108f2) power_save_t2

0xea83,	// (0x0001091c) indicator_ps_pane_g1

0x9a6b,	// (0x0000b904) ai_gene_pane_ParamLimits

0x9a6b,	// (0x0000b904) ai_gene_pane

0x9a82,	// (0x0000b91b) ai_links_pane_ParamLimits

0x9a82,	// (0x0000b91b) ai_links_pane

0x9a9a,	// (0x0000b933) indicator_pane_cp1_ParamLimits

0x9a9a,	// (0x0000b933) indicator_pane_cp1

0x9aa9,	// (0x0000b942) main_pane_idle_g1_cp_ParamLimits

0x9aa9,	// (0x0000b942) main_pane_idle_g1_cp

0x9ac1,	// (0x0000b95a) popup_ai_links_title_window

0x9aca,	// (0x0000b963) soft_indicator_pane_cp1_ParamLimits

0x9aca,	// (0x0000b963) soft_indicator_pane_cp1

0x2c0a,	// (0x00004aa3) ai_links_pane_g1

0x2c13,	// (0x00004aac) grid_ai_links_pane

0xbd76,	// (0x0000dc0f) ai_gene_pane_1

0x2bf8,	// (0x00004a91) ai_gene_pane_2

0x2c01,	// (0x00004a9a) list_highlight_pane_cp4

0xbd52,	// (0x0000dbeb) cell_ai_link_pane_ParamLimits

0xbd52,	// (0x0000dbeb) cell_ai_link_pane

0x2bc9,	// (0x00004a62) cell_ai_link_pane_g1

0xebb0,	// (0x00010a49) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x00011795) cell_ai_link_pane_g

0xe8e9,	// (0x00010782) grid_highlight_cp2

0xe8e9,	// (0x00010782) bg_popup_sub_pane_cp1

0xea9a,	// (0x00010933) popup_ai_links_title_window_t1

0x2b19,	// (0x000049b2) ai_gene_pane_1_g1_ParamLimits

0x2b19,	// (0x000049b2) ai_gene_pane_1_g1

0x2b25,	// (0x000049be) ai_gene_pane_1_g2_ParamLimits

0x2b25,	// (0x000049be) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x0001178b) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x0001178b) ai_gene_pane_1_g

0x2b32,	// (0x000049cb) ai_gene_pane_1_t1_ParamLimits

0x2b32,	// (0x000049cb) ai_gene_pane_1_t1

0x2b66,	// (0x000049ff) grid_ai_soft_ind_pane

0x2b04,	// (0x0000499d) ai_gene_pane_2_t1_ParamLimits

0x2b04,	// (0x0000499d) ai_gene_pane_2_t1

0x9ade,	// (0x0000b977) main_pane_empty_t1_ParamLimits

0x9ade,	// (0x0000b977) main_pane_empty_t1

0x9af6,	// (0x0000b98f) main_pane_empty_t2_ParamLimits

0x9af6,	// (0x0000b98f) main_pane_empty_t2

0x9b0b,	// (0x0000b9a4) main_pane_empty_t3_ParamLimits

0x9b0b,	// (0x0000b9a4) main_pane_empty_t3

0x9b1d,	// (0x0000b9b6) main_pane_empty_t4_ParamLimits

0x9b1d,	// (0x0000b9b6) main_pane_empty_t4

0x9b2f,	// (0x0000b9c8) main_pane_empty_t5_ParamLimits

0x9b2f,	// (0x0000b9c8) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001140d) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001140d) main_pane_empty_t

0xeeb2,	// (0x00010d4b) bg_popup_window_pane_ParamLimits

0xeeb2,	// (0x00010d4b) bg_popup_window_pane

0xbccc,	// (0x0000db65) find_popup_pane_cp2_ParamLimits

0xbccc,	// (0x0000db65) find_popup_pane_cp2

0x2880,	// (0x00004719) heading_pane_ParamLimits

0x2880,	// (0x00004719) heading_pane

0xe8e9,	// (0x00010782) bg_popup_sub_pane

0xbc45,	// (0x0000dade) bg_popup_window_pane_g1_ParamLimits

0xbc45,	// (0x0000dade) bg_popup_window_pane_g1

0xbc54,	// (0x0000daed) bg_popup_window_pane_g2_ParamLimits

0xbc54,	// (0x0000daed) bg_popup_window_pane_g2

0xbc60,	// (0x0000daf9) bg_popup_window_pane_g3_ParamLimits

0xbc60,	// (0x0000daf9) bg_popup_window_pane_g3

0xbc6c,	// (0x0000db05) bg_popup_window_pane_g4_ParamLimits

0xbc6c,	// (0x0000db05) bg_popup_window_pane_g4

0xbc7b,	// (0x0000db14) bg_popup_window_pane_g5_ParamLimits

0xbc7b,	// (0x0000db14) bg_popup_window_pane_g5

0xbc8b,	// (0x0000db24) bg_popup_window_pane_g6_ParamLimits

0xbc8b,	// (0x0000db24) bg_popup_window_pane_g6

0xbc97,	// (0x0000db30) bg_popup_window_pane_g7_ParamLimits

0xbc97,	// (0x0000db30) bg_popup_window_pane_g7

0xbca6,	// (0x0000db3f) bg_popup_window_pane_g8_ParamLimits

0xbca6,	// (0x0000db3f) bg_popup_window_pane_g8

0xbcb5,	// (0x0000db4e) bg_popup_window_pane_g9_ParamLimits

0xbcb5,	// (0x0000db4e) bg_popup_window_pane_g9

0x2849,	// (0x000046e2) bg_popup_window_pane_g10_ParamLimits

0x2849,	// (0x000046e2) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x00011753) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x00011753) bg_popup_window_pane_g

0x2772,	// (0x0000460b) bg_popup_heading_pane_ParamLimits

0x2772,	// (0x0000460b) bg_popup_heading_pane

0x33ce,	// (0x00005267) tabs_4_passive_pane_cp_srt_ParamLimits

0x33ce,	// (0x00005267) tabs_4_passive_pane_cp_srt

0x33e0,	// (0x00005279) tabs_4_passive_pane_srt_ParamLimits

0x2786,	// (0x0000461f) heading_pane_g2

0x33e0,	// (0x00005279) tabs_4_passive_pane_srt

0x18ee,	// (0x00003787) bg_passive_tab_pane_cp3_srt_ParamLimits

0x18ee,	// (0x00003787) bg_passive_tab_pane_cp3_srt

0x278e,	// (0x00004627) heading_pane_t1_ParamLimits

0x278e,	// (0x00004627) heading_pane_t1

0x27a5,	// (0x0000463e) heading_pane_t2_ParamLimits

0x27a5,	// (0x0000463e) heading_pane_t2

0x0001,

0xf8b5,	// (0x0001174e) heading_pane_t_ParamLimits

0xf8b5,	// (0x0001174e) heading_pane_t

0x2156,	// (0x00003fef) bg_popup_heading_pane_g1

0x2205,	// (0x0000409e) bg_popup_heading_pane_g2

0x220f,	// (0x000040a8) bg_popup_heading_pane_g3

0x2219,	// (0x000040b2) bg_popup_heading_pane_g4

0x2223,	// (0x000040bc) bg_popup_heading_pane_g5

0x222d,	// (0x000040c6) bg_popup_heading_pane_g6

0x2235,	// (0x000040ce) bg_popup_heading_pane_g7

0x223d,	// (0x000040d6) bg_popup_heading_pane_g8

0x2247,	// (0x000040e0) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x0001170a) bg_popup_heading_pane_g

0x1762,	// (0x000035fb) bg_popup_sub_pane_g1

0x176a,	// (0x00003603) bg_popup_sub_pane_g2

0x1772,	// (0x0000360b) bg_popup_sub_pane_g3

0x177a,	// (0x00003613) bg_popup_sub_pane_g4

0x1782,	// (0x0000361b) bg_popup_sub_pane_g5

0x178a,	// (0x00003623) bg_popup_sub_pane_g6

0x1792,	// (0x0000362b) bg_popup_sub_pane_g7

0x179a,	// (0x00003633) bg_popup_sub_pane_g8

0x17a2,	// (0x0000363b) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x000116e4) bg_popup_sub_pane_g

0xe957,	// (0x000107f0) bg_popup_window_pane_cp5_ParamLimits

0xe957,	// (0x000107f0) bg_popup_window_pane_cp5

0xeab7,	// (0x00010950) popup_note_window_g1_ParamLimits

0xeab7,	// (0x00010950) popup_note_window_g1

0xeac3,	// (0x0001095c) popup_note_window_t1_ParamLimits

0xeac3,	// (0x0001095c) popup_note_window_t1

0xead9,	// (0x00010972) popup_note_window_t2_ParamLimits

0xead9,	// (0x00010972) popup_note_window_t2

0xeaef,	// (0x00010988) popup_note_window_t3_ParamLimits

0xeaef,	// (0x00010988) popup_note_window_t3

0xeb05,	// (0x0001099e) popup_note_window_t4_ParamLimits

0xeb05,	// (0x0001099e) popup_note_window_t4

0xeb2d,	// (0x000109c6) popup_note_window_t5_ParamLimits

0xeb2d,	// (0x000109c6) popup_note_window_t5

0x0004,

0xf57f,	// (0x00011418) popup_note_window_t_ParamLimits

0xf57f,	// (0x00011418) popup_note_window_t

0xeb51,	// (0x000109ea) bg_popup_window_pane_cp6_ParamLimits

0xeb51,	// (0x000109ea) bg_popup_window_pane_cp6

0x20d2,	// (0x00003f6b) popup_note_image_window_g1_ParamLimits

0x20d2,	// (0x00003f6b) popup_note_image_window_g1

0xbaea,	// (0x0000d983) popup_note_image_window_g2_ParamLimits

0xbaea,	// (0x0000d983) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x000116d8) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x000116d8) popup_note_image_window_g

0x20f7,	// (0x00003f90) popup_note_image_window_t1_ParamLimits

0x20f7,	// (0x00003f90) popup_note_image_window_t1

0x2110,	// (0x00003fa9) popup_note_image_window_t2_ParamLimits

0x2110,	// (0x00003fa9) popup_note_image_window_t2

0x2129,	// (0x00003fc2) popup_note_image_window_t3_ParamLimits

0x2129,	// (0x00003fc2) popup_note_image_window_t3

0x0002,

0xf844,	// (0x000116dd) popup_note_image_window_t_ParamLimits

0xf844,	// (0x000116dd) popup_note_image_window_t

0x1f9b,	// (0x00003e34) bg_popup_window_pane_cp7_ParamLimits

0x1f9b,	// (0x00003e34) bg_popup_window_pane_cp7

0x1fcb,	// (0x00003e64) popup_note_wait_window_g1_ParamLimits

0x1fcb,	// (0x00003e64) popup_note_wait_window_g1

0x1fd7,	// (0x00003e70) popup_note_wait_window_g2_ParamLimits

0x1fd7,	// (0x00003e70) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x000116c6) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x000116c6) popup_note_wait_window_g

0x1fef,	// (0x00003e88) popup_note_wait_window_t1_ParamLimits

0x1fef,	// (0x00003e88) popup_note_wait_window_t1

0xba8b,	// (0x0000d924) popup_note_wait_window_t2_ParamLimits

0xba8b,	// (0x0000d924) popup_note_wait_window_t2

0xbaa8,	// (0x0000d941) popup_note_wait_window_t3_ParamLimits

0xbaa8,	// (0x0000d941) popup_note_wait_window_t3

0xbabb,	// (0x0000d954) popup_note_wait_window_t4_ParamLimits

0xbabb,	// (0x0000d954) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x000116cd) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x000116cd) popup_note_wait_window_t

0x206b,	// (0x00003f04) wait_bar_pane_ParamLimits

0x206b,	// (0x00003f04) wait_bar_pane

0xe8e9,	// (0x00010782) wait_anim_pane

0xe8e9,	// (0x00010782) wait_border_pane

0xe770,	// (0x00010609) wait_anim_pane_g1

0xe770,	// (0x00010609) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x0001158d) wait_anim_pane_g

0x1f47,	// (0x00003de0) wait_border_pane_g1

0x1f52,	// (0x00003deb) wait_border_pane_g2

0x1f5b,	// (0x00003df4) wait_border_pane_g3

0x0002,

0xf826,	// (0x000116bf) wait_border_pane_g

0x1db2,	// (0x00003c4b) bg_popup_window_pane_cp16_ParamLimits

0x1db2,	// (0x00003c4b) bg_popup_window_pane_cp16

0xba3b,	// (0x0000d8d4) indicator_popup_pane_cp4_ParamLimits

0xba3b,	// (0x0000d8d4) indicator_popup_pane_cp4

0x1ec6,	// (0x00003d5f) popup_query_data_window_t1_ParamLimits

0x1ec6,	// (0x00003d5f) popup_query_data_window_t1

0x1ed8,	// (0x00003d71) popup_query_data_window_t2_ParamLimits

0x1ed8,	// (0x00003d71) popup_query_data_window_t2

0x1ef1,	// (0x00003d8a) popup_query_data_window_t3_ParamLimits

0x1ef1,	// (0x00003d8a) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x000116b8) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x000116b8) popup_query_data_window_t

0xba4f,	// (0x0000d8e8) query_popup_data_pane_ParamLimits

0xba4f,	// (0x0000d8e8) query_popup_data_pane

0xba63,	// (0x0000d8fc) query_popup_data_pane_cp1_ParamLimits

0xba63,	// (0x0000d8fc) query_popup_data_pane_cp1

0x1db2,	// (0x00003c4b) bg_popup_window_pane_cp10_ParamLimits

0x1db2,	// (0x00003c4b) bg_popup_window_pane_cp10

0xb9b6,	// (0x0000d84f) indicator_popup_pane_ParamLimits

0xb9b6,	// (0x0000d84f) indicator_popup_pane

0xb9d8,	// (0x0000d871) popup_query_code_window_t1_ParamLimits

0xb9d8,	// (0x0000d871) popup_query_code_window_t1

0xb9f2,	// (0x0000d88b) popup_query_code_window_t2_ParamLimits

0xb9f2,	// (0x0000d88b) popup_query_code_window_t2

0x1e69,	// (0x00003d02) popup_query_code_window_t3_ParamLimits

0x1e69,	// (0x00003d02) popup_query_code_window_t3

0x0002,

0xf818,	// (0x000116b1) popup_query_code_window_t_ParamLimits

0xf818,	// (0x000116b1) popup_query_code_window_t

0x1e98,	// (0x00003d31) query_popup_pane_ParamLimits

0x1e98,	// (0x00003d31) query_popup_pane

0xeb51,	// (0x000109ea) bg_popup_window_pane_cp15_ParamLimits

0xeb51,	// (0x000109ea) bg_popup_window_pane_cp15

0x9b41,	// (0x0000b9da) indicator_popup_pane_cp1_ParamLimits

0x9b41,	// (0x0000b9da) indicator_popup_pane_cp1

0x9b54,	// (0x0000b9ed) indicator_popup_pane_cp2_ParamLimits

0x9b54,	// (0x0000b9ed) indicator_popup_pane_cp2

0x9b67,	// (0x0000ba00) popup_query_data_code_window_g1_ParamLimits

0x9b67,	// (0x0000ba00) popup_query_data_code_window_g1

0xeb6f,	// (0x00010a08) popup_query_data_code_window_t1_ParamLimits

0xeb6f,	// (0x00010a08) popup_query_data_code_window_t1

0xeb81,	// (0x00010a1a) popup_query_data_code_window_t2_ParamLimits

0xeb81,	// (0x00010a1a) popup_query_data_code_window_t2

0x9b7a,	// (0x0000ba13) popup_query_data_code_window_t3_ParamLimits

0x9b7a,	// (0x0000ba13) popup_query_data_code_window_t3

0x9b90,	// (0x0000ba29) popup_query_data_code_window_t4_ParamLimits

0x9b90,	// (0x0000ba29) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00011423) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00011423) popup_query_data_code_window_t

0x04b5,	// (0x0000234e) list_single_midp_graphic_pane_g3

0x9ba8,	// (0x0000ba41) query_popup_data_pane_cp2_ParamLimits

0x9bbb,	// (0x0000ba54) query_popup_pane_cp2_ParamLimits

0x9bbb,	// (0x0000ba54) query_popup_pane_cp2

0xe8e9,	// (0x00010782) bg_popup_window_pane_cp11

0x1daa,	// (0x00003c43) heading_pane_cp5

0xebdd,	// (0x00010a76) listscroll_popup_info_pane

0xe8e9,	// (0x00010782) input_focus_pane_cp3

0xeb93,	// (0x00010a2c) query_popup_pane_t1

0xeba1,	// (0x00010a3a) list_popup_info_pane_ParamLimits

0xeba1,	// (0x00010a3a) list_popup_info_pane

0xebb0,	// (0x00010a49) listscroll_popup_info_pane_g1

0xebb8,	// (0x00010a51) scroll_pane_cp7

0x9bce,	// (0x0000ba67) popup_info_list_pane_t1_ParamLimits

0x9bce,	// (0x0000ba67) popup_info_list_pane_t1

0x9be8,	// (0x0000ba81) popup_info_list_pane_t2_ParamLimits

0x9be8,	// (0x0000ba81) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001142c) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001142c) popup_info_list_pane_t

0xe8e9,	// (0x00010782) bg_popup_window_pane_cp12

0xc2e2,	// (0x0000e17b) find_popup_pane

0xe965,	// (0x000107fe) bg_popup_window_pane_cp3

0xebc2,	// (0x00010a5b) heading_pane_cp3

0xebce,	// (0x00010a67) listscroll_popup_graphic_pane

0xe8e9,	// (0x00010782) bg_popup_window_pane_cp4

0x9c52,	// (0x0000baeb) heading_pane_cp4

0xebdd,	// (0x00010a76) listscroll_popup_colour_pane

0x9c5a,	// (0x0000baf3) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9c5a,	// (0x0000baf3) cell_large_graphic_colour_none_popup_pane

0x9c6e,	// (0x0000bb07) grid_large_graphic_colour_popup_pane_ParamLimits

0x9c6e,	// (0x0000bb07) grid_large_graphic_colour_popup_pane

0x9c92,	// (0x0000bb2b) listscroll_popup_colour_pane_g1_ParamLimits

0x9c92,	// (0x0000bb2b) listscroll_popup_colour_pane_g1

0x9ca9,	// (0x0000bb42) listscroll_popup_colour_pane_g2_ParamLimits

0x9ca9,	// (0x0000bb42) listscroll_popup_colour_pane_g2

0x9cc0,	// (0x0000bb59) listscroll_popup_colour_pane_g3_ParamLimits

0x9cc0,	// (0x0000bb59) listscroll_popup_colour_pane_g3

0x9cd0,	// (0x0000bb69) listscroll_popup_colour_pane_g4_ParamLimits

0x9cd0,	// (0x0000bb69) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00011431) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00011431) listscroll_popup_colour_pane_g

0xebe5,	// (0x00010a7e) scroll_pane_cp6_ParamLimits

0xebe5,	// (0x00010a7e) scroll_pane_cp6

0x9ce0,	// (0x0000bb79) cell_large_graphic_colour_popup_pane_ParamLimits

0x9ce0,	// (0x0000bb79) cell_large_graphic_colour_popup_pane

0x9cff,	// (0x0000bb98) cell_large_graphic_colour_none_popup_pane_t1

0xe8e9,	// (0x00010782) grid_highlight_pane_cp5

0xebf7,	// (0x00010a90) cell_large_graphic_colour_popup_pane_g1

0xebff,	// (0x00010a98) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001143a) cell_large_graphic_colour_popup_pane_g

0xec07,	// (0x00010aa0) cell_large_graphic_colour_popup_pane_g2_copy1

0xec10,	// (0x00010aa9) grid_highlight_pane_cp4

0xec18,	// (0x00010ab1) bg_popup_window_pane_cp8_ParamLimits

0xec18,	// (0x00010ab1) bg_popup_window_pane_cp8

0x9d0e,	// (0x0000bba7) popup_snote_single_text_window_g1_ParamLimits

0x9d0e,	// (0x0000bba7) popup_snote_single_text_window_g1

0x9d20,	// (0x0000bbb9) popup_snote_single_text_window_t1_ParamLimits

0x9d20,	// (0x0000bbb9) popup_snote_single_text_window_t1

0x9d33,	// (0x0000bbcc) popup_snote_single_text_window_t2_ParamLimits

0x9d33,	// (0x0000bbcc) popup_snote_single_text_window_t2

0x9d46,	// (0x0000bbdf) popup_snote_single_text_window_t3_ParamLimits

0x9d46,	// (0x0000bbdf) popup_snote_single_text_window_t3

0x9d7f,	// (0x0000bc18) popup_snote_single_text_window_t4_ParamLimits

0x9d7f,	// (0x0000bc18) popup_snote_single_text_window_t4

0x9db3,	// (0x0000bc4c) popup_snote_single_text_window_t5_ParamLimits

0x9db3,	// (0x0000bc4c) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001143f) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001143f) popup_snote_single_text_window_t

0xec33,	// (0x00010acc) bg_popup_window_pane_cp9_ParamLimits

0xec33,	// (0x00010acc) bg_popup_window_pane_cp9

0x9d0e,	// (0x0000bba7) popup_snote_single_graphic_window_g1_ParamLimits

0x9d0e,	// (0x0000bba7) popup_snote_single_graphic_window_g1

0xec41,	// (0x00010ada) popup_snote_single_graphic_window_g2_ParamLimits

0xec41,	// (0x00010ada) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001144a) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001144a) popup_snote_single_graphic_window_g

0xec4d,	// (0x00010ae6) popup_snote_single_graphic_window_t1_ParamLimits

0xec4d,	// (0x00010ae6) popup_snote_single_graphic_window_t1

0xec60,	// (0x00010af9) popup_snote_single_graphic_window_t2_ParamLimits

0xec60,	// (0x00010af9) popup_snote_single_graphic_window_t2

0x9d46,	// (0x0000bbdf) popup_snote_single_graphic_window_t3_ParamLimits

0x9d46,	// (0x0000bbdf) popup_snote_single_graphic_window_t3

0x9d7f,	// (0x0000bc18) popup_snote_single_graphic_window_t4_ParamLimits

0x9d7f,	// (0x0000bc18) popup_snote_single_graphic_window_t4

0x9de2,	// (0x0000bc7b) popup_snote_single_graphic_window_t5_ParamLimits

0x9de2,	// (0x0000bc7b) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001144f) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001144f) popup_snote_single_graphic_window_t

0x334c,	// (0x000051e5) grid_graphic_popup_pane_ParamLimits

0x334c,	// (0x000051e5) grid_graphic_popup_pane

0x3376,	// (0x0000520f) listscroll_popup_graphic_pane_g1_ParamLimits

0x3376,	// (0x0000520f) listscroll_popup_graphic_pane_g1

0xc22d,	// (0x0000e0c6) listscroll_popup_graphic_pane_g2_ParamLimits

0xc22d,	// (0x0000e0c6) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x0001182e) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x0001182e) listscroll_popup_graphic_pane_g

0x339e,	// (0x00005237) scroll_pane_cp5

0xc1d2,	// (0x0000e06b) cell_graphic_popup_pane_ParamLimits

0xc1d2,	// (0x0000e06b) cell_graphic_popup_pane

0x32cc,	// (0x00005165) cell_graphic_popup_pane_g1

0x32d4,	// (0x0000516d) cell_graphic_popup_pane_g2

0xec07,	// (0x00010aa0) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x00011827) cell_graphic_popup_pane_g

0x32dd,	// (0x00005176) cell_graphic_popup_pane_t2

0xec10,	// (0x00010aa9) grid_highlight_pane_cp3

0xec85,	// (0x00010b1e) list_gen_pane_ParamLimits

0xec85,	// (0x00010b1e) list_gen_pane

0xecad,	// (0x00010b46) scroll_pane

0xc13c,	// (0x0000dfd5) bg_list_pane_g1_ParamLimits

0xc13c,	// (0x0000dfd5) bg_list_pane_g1

0xc157,	// (0x0000dff0) bg_list_pane_g2_ParamLimits

0xc157,	// (0x0000dff0) bg_list_pane_g2

0xc16a,	// (0x0000e003) bg_list_pane_g3_ParamLimits

0xc16a,	// (0x0000e003) bg_list_pane_g3

0xc17c,	// (0x0000e015) bg_list_pane_g4_ParamLimits

0xc17c,	// (0x0000e015) bg_list_pane_g4

0xc18e,	// (0x0000e027) bg_list_pane_g5_ParamLimits

0xc18e,	// (0x0000e027) bg_list_pane_g5

0x0004,

0xf983,	// (0x0001181c) bg_list_pane_g_ParamLimits

0xf983,	// (0x0001181c) bg_list_pane_g

0xc0e0,	// (0x0000df79) list_double2_graphic_large_graphic_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double2_graphic_large_graphic_pane

0xc0e0,	// (0x0000df79) list_double2_graphic_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double2_graphic_pane

0xc0e0,	// (0x0000df79) list_double2_large_graphic_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double2_large_graphic_pane

0xc0e0,	// (0x0000df79) list_double2_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double2_pane

0xc0e0,	// (0x0000df79) list_double_graphic_heading_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double_graphic_heading_pane

0xc0e0,	// (0x0000df79) list_double_graphic_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double_graphic_pane

0xc0e0,	// (0x0000df79) list_double_heading_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double_heading_pane

0xc0e0,	// (0x0000df79) list_double_large_graphic_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double_large_graphic_pane

0xc0e0,	// (0x0000df79) list_double_number_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double_number_pane

0xc0e0,	// (0x0000df79) list_double_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double_pane

0xc0e0,	// (0x0000df79) list_double_time_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_double_time_pane

0xc0e0,	// (0x0000df79) list_setting_number_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_setting_number_pane

0xc0e0,	// (0x0000df79) list_setting_pane_ParamLimits

0xc0e0,	// (0x0000df79) list_setting_pane

0xc0f2,	// (0x0000df8b) list_single_2graphic_pane_ParamLimits

0xc0f2,	// (0x0000df8b) list_single_2graphic_pane

0xc0f2,	// (0x0000df8b) list_single_graphic_heading_pane_ParamLimits

0xc0f2,	// (0x0000df8b) list_single_graphic_heading_pane

0xc0f2,	// (0x0000df8b) list_single_graphic_pane_ParamLimits

0xc0f2,	// (0x0000df8b) list_single_graphic_pane

0xc0f2,	// (0x0000df8b) list_single_heading_pane_ParamLimits

0xc0f2,	// (0x0000df8b) list_single_heading_pane

0xc0f2,	// (0x0000df8b) list_single_large_graphic_pane_ParamLimits

0xc0f2,	// (0x0000df8b) list_single_large_graphic_pane

0xc0f2,	// (0x0000df8b) list_single_number_heading_pane_ParamLimits

0xc0f2,	// (0x0000df8b) list_single_number_heading_pane

0xc0f2,	// (0x0000df8b) list_single_number_pane_ParamLimits

0xc0f2,	// (0x0000df8b) list_single_number_pane

0xc0f2,	// (0x0000df8b) list_single_pane_ParamLimits

0xc0f2,	// (0x0000df8b) list_single_pane

0xe8e9,	// (0x00010782) list_highlight_pane_cp1

0xece1,	// (0x00010b7a) list_single_pane_g1_ParamLimits

0xece1,	// (0x00010b7a) list_single_pane_g1

0xeced,	// (0x00010b86) list_single_pane_g2_ParamLimits

0xeced,	// (0x00010b86) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00011461) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00011461) list_single_pane_g

0xc0ca,	// (0x0000df63) list_single_pane_t1_ParamLimits

0xc0ca,	// (0x0000df63) list_single_pane_t1

0xece1,	// (0x00010b7a) list_single_number_pane_g1_ParamLimits

0xece1,	// (0x00010b7a) list_single_number_pane_g1

0xeced,	// (0x00010b86) list_single_number_pane_g2_ParamLimits

0xeced,	// (0x00010b86) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00011461) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00011461) list_single_number_pane_g

0x16f0,	// (0x00003589) list_single_number_pane_t1_ParamLimits

0x16f0,	// (0x00003589) list_single_number_pane_t1

0xbe6a,	// (0x0000dd03) list_single_number_pane_t2_ParamLimits

0xbe6a,	// (0x0000dd03) list_single_number_pane_t2

0x0001,

0xf944,	// (0x000117dd) list_single_number_pane_t_ParamLimits

0xf944,	// (0x000117dd) list_single_number_pane_t

0x16e4,	// (0x0000357d) list_single_graphic_pane_g1_ParamLimits

0x16e4,	// (0x0000357d) list_single_graphic_pane_g1

0xece1,	// (0x00010b7a) list_single_graphic_pane_g2_ParamLimits

0xece1,	// (0x00010b7a) list_single_graphic_pane_g2

0xeced,	// (0x00010b86) list_single_graphic_pane_g3_ParamLimits

0xeced,	// (0x00010b86) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001145a) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001145a) list_single_graphic_pane_g

0x16f0,	// (0x00003589) list_single_graphic_pane_t1_ParamLimits

0x16f0,	// (0x00003589) list_single_graphic_pane_t1

0xece1,	// (0x00010b7a) list_single_heading_pane_g1_ParamLimits

0xece1,	// (0x00010b7a) list_single_heading_pane_g1

0xeced,	// (0x00010b86) list_single_heading_pane_g2_ParamLimits

0xeced,	// (0x00010b86) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011461) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011461) list_single_heading_pane_g

0x9e1b,	// (0x0000bcb4) list_single_heading_pane_t1_ParamLimits

0x9e1b,	// (0x0000bcb4) list_single_heading_pane_t1

0x9e31,	// (0x0000bcca) list_single_heading_pane_t2_ParamLimits

0x9e31,	// (0x0000bcca) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00011466) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00011466) list_single_heading_pane_t

0xece1,	// (0x00010b7a) list_single_number_heading_pane_g1_ParamLimits

0xece1,	// (0x00010b7a) list_single_number_heading_pane_g1

0xeced,	// (0x00010b86) list_single_number_heading_pane_g2_ParamLimits

0xeced,	// (0x00010b86) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00011461) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00011461) list_single_number_heading_pane_g

0x9e1b,	// (0x0000bcb4) list_single_number_heading_pane_t1_ParamLimits

0x9e1b,	// (0x0000bcb4) list_single_number_heading_pane_t1

0x9e43,	// (0x0000bcdc) list_single_number_heading_pane_t2_ParamLimits

0x9e43,	// (0x0000bcdc) list_single_number_heading_pane_t2

0x9e55,	// (0x0000bcee) list_single_number_heading_pane_t3_ParamLimits

0x9e55,	// (0x0000bcee) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001146b) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001146b) list_single_number_heading_pane_t

0x9e67,	// (0x0000bd00) list_single_graphic_heading_pane_g1_ParamLimits

0x9e67,	// (0x0000bd00) list_single_graphic_heading_pane_g1

0x9e73,	// (0x0000bd0c) list_single_graphic_heading_pane_g4_ParamLimits

0x9e73,	// (0x0000bd0c) list_single_graphic_heading_pane_g4

0xeced,	// (0x00010b86) list_single_graphic_heading_pane_g5_ParamLimits

0xeced,	// (0x00010b86) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00011472) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00011472) list_single_graphic_heading_pane_g

0x9e1b,	// (0x0000bcb4) list_single_graphic_heading_pane_t1_ParamLimits

0x9e1b,	// (0x0000bcb4) list_single_graphic_heading_pane_t1

0x9e84,	// (0x0000bd1d) list_single_graphic_heading_pane_t2_ParamLimits

0x9e84,	// (0x0000bd1d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00011479) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00011479) list_single_graphic_heading_pane_t

0x3b3c,	// (0x000059d5) list_single_large_graphic_pane_g1_ParamLimits

0x3b3c,	// (0x000059d5) list_single_large_graphic_pane_g1

0xece1,	// (0x00010b7a) list_single_large_graphic_pane_g2_ParamLimits

0xece1,	// (0x00010b7a) list_single_large_graphic_pane_g2

0xeced,	// (0x00010b86) list_single_large_graphic_pane_g3_ParamLimits

0xeced,	// (0x00010b86) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001147e) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001147e) list_single_large_graphic_pane_g

0x1f52,	// (0x00003deb) wait_border_pane_g2_copy1

0x9e96,	// (0x0000bd2f) list_single_large_graphic_pane_g4_cp2

0x16f0,	// (0x00003589) list_single_large_graphic_pane_t1_ParamLimits

0x16f0,	// (0x00003589) list_single_large_graphic_pane_t1

0x9e9e,	// (0x0000bd37) list_double_pane_g1_ParamLimits

0x9e9e,	// (0x0000bd37) list_double_pane_g1

0x9eaa,	// (0x0000bd43) list_double_pane_g2_ParamLimits

0x9eaa,	// (0x0000bd43) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00011485) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00011485) list_double_pane_g

0x9eb6,	// (0x0000bd4f) list_double_pane_t1_ParamLimits

0x9eb6,	// (0x0000bd4f) list_double_pane_t1

0x9ecc,	// (0x0000bd65) list_double_pane_t2_ParamLimits

0x9ecc,	// (0x0000bd65) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001148a) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001148a) list_double_pane_t

0x9ede,	// (0x0000bd77) list_double2_pane_g1_ParamLimits

0x9ede,	// (0x0000bd77) list_double2_pane_g1

0x9eef,	// (0x0000bd88) list_double2_pane_g2_ParamLimits

0x9eef,	// (0x0000bd88) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001148f) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001148f) list_double2_pane_g

0x9efb,	// (0x0000bd94) list_double2_pane_t1_ParamLimits

0x9efb,	// (0x0000bd94) list_double2_pane_t1

0x9f11,	// (0x0000bdaa) list_double2_pane_t2_ParamLimits

0x9f11,	// (0x0000bdaa) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00011494) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00011494) list_double2_pane_t

0x9e9e,	// (0x0000bd37) list_double_number_pane_g1_ParamLimits

0x9e9e,	// (0x0000bd37) list_double_number_pane_g1

0x9eaa,	// (0x0000bd43) list_double_number_pane_g2_ParamLimits

0x9eaa,	// (0x0000bd43) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00011485) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00011485) list_double_number_pane_g

0x9f23,	// (0x0000bdbc) list_double_number_pane_t1_ParamLimits

0x9f23,	// (0x0000bdbc) list_double_number_pane_t1

0x9f35,	// (0x0000bdce) list_double_number_pane_t2_ParamLimits

0x9f35,	// (0x0000bdce) list_double_number_pane_t2

0x9f4b,	// (0x0000bde4) list_double_number_pane_t3_ParamLimits

0x9f4b,	// (0x0000bde4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00011499) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00011499) list_double_number_pane_t

0x9f5d,	// (0x0000bdf6) list_double_graphic_pane_g1_ParamLimits

0x9f5d,	// (0x0000bdf6) list_double_graphic_pane_g1

0x9f69,	// (0x0000be02) list_double_graphic_pane_g2_ParamLimits

0x9f69,	// (0x0000be02) list_double_graphic_pane_g2

0x9f78,	// (0x0000be11) list_double_graphic_pane_g3_ParamLimits

0x9f78,	// (0x0000be11) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x000114a0) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x000114a0) list_double_graphic_pane_g

0x9f35,	// (0x0000bdce) list_double_graphic_pane_t1_ParamLimits

0x9f35,	// (0x0000bdce) list_double_graphic_pane_t1

0x9f4b,	// (0x0000bde4) list_double_graphic_pane_t2_ParamLimits

0x9f4b,	// (0x0000bde4) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x000114a9) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x000114a9) list_double_graphic_pane_t

0x9f90,	// (0x0000be29) list_double2_graphic_pane_g1_ParamLimits

0x9f90,	// (0x0000be29) list_double2_graphic_pane_g1

0x4f7a,	// (0x00006e13) list_double2_graphic_pane_g2_ParamLimits

0x4f7a,	// (0x00006e13) list_double2_graphic_pane_g2

0x9eef,	// (0x0000bd88) list_double2_graphic_pane_g3_ParamLimits

0x9eef,	// (0x0000bd88) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x000114ae) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x000114ae) list_double2_graphic_pane_g

0x9f9c,	// (0x0000be35) list_double2_graphic_pane_t1_ParamLimits

0x9f9c,	// (0x0000be35) list_double2_graphic_pane_t1

0x9fb2,	// (0x0000be4b) list_double2_graphic_pane_t2_ParamLimits

0x9fb2,	// (0x0000be4b) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x000114b5) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x000114b5) list_double2_graphic_pane_t

0x9fc4,	// (0x0000be5d) list_double_large_graphic_pane_g1_ParamLimits

0x9fc4,	// (0x0000be5d) list_double_large_graphic_pane_g1

0x9fe3,	// (0x0000be7c) list_double_large_graphic_pane_g2_ParamLimits

0x9fe3,	// (0x0000be7c) list_double_large_graphic_pane_g2

0x9eaa,	// (0x0000bd43) list_double_large_graphic_pane_g3_ParamLimits

0x9eaa,	// (0x0000bd43) list_double_large_graphic_pane_g3

0x9ff4,	// (0x0000be8d) list_double_large_graphic_pane_g4_ParamLimits

0x9ff4,	// (0x0000be8d) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x000114ba) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x000114ba) list_double_large_graphic_pane_g

0xa007,	// (0x0000bea0) list_double_large_graphic_pane_t1_ParamLimits

0xa007,	// (0x0000bea0) list_double_large_graphic_pane_t1

0xa020,	// (0x0000beb9) list_double_large_graphic_pane_t2_ParamLimits

0xa020,	// (0x0000beb9) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x000114c5) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x000114c5) list_double_large_graphic_pane_t

0xa032,	// (0x0000becb) list_double2_large_graphic_pane_g1_ParamLimits

0xa032,	// (0x0000becb) list_double2_large_graphic_pane_g1

0x9ede,	// (0x0000bd77) list_double2_large_graphic_pane_g2_ParamLimits

0x9ede,	// (0x0000bd77) list_double2_large_graphic_pane_g2

0x9eef,	// (0x0000bd88) list_double2_large_graphic_pane_g3_ParamLimits

0x9eef,	// (0x0000bd88) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x000114ca) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x000114ca) list_double2_large_graphic_pane_g

0x9f9c,	// (0x0000be35) list_double2_large_graphic_pane_t1_ParamLimits

0x9f9c,	// (0x0000be35) list_double2_large_graphic_pane_t1

0x9fb2,	// (0x0000be4b) list_double2_large_graphic_pane_t2_ParamLimits

0x9fb2,	// (0x0000be4b) list_double2_large_graphic_pane_t2

0x0001,

0xf61c,	// (0x000114b5) list_double2_large_graphic_pane_t_ParamLimits

0xf61c,	// (0x000114b5) list_double2_large_graphic_pane_t

0xa03e,	// (0x0000bed7) list_double_heading_pane_g1_ParamLimits

0xa03e,	// (0x0000bed7) list_double_heading_pane_g1

0xa04f,	// (0x0000bee8) list_double_heading_pane_g2_ParamLimits

0xa04f,	// (0x0000bee8) list_double_heading_pane_g2

0x0001,

0xf638,	// (0x000114d1) list_double_heading_pane_g_ParamLimits

0xf638,	// (0x000114d1) list_double_heading_pane_g

0xa05b,	// (0x0000bef4) list_double_heading_pane_t1_ParamLimits

0xa05b,	// (0x0000bef4) list_double_heading_pane_t1

0xa071,	// (0x0000bf0a) list_double_heading_pane_t2_ParamLimits

0xa071,	// (0x0000bf0a) list_double_heading_pane_t2

0x0001,

0xf63d,	// (0x000114d6) list_double_heading_pane_t_ParamLimits

0xf63d,	// (0x000114d6) list_double_heading_pane_t

0x9f5d,	// (0x0000bdf6) list_double_graphic_heading_pane_g1_ParamLimits

0x9f5d,	// (0x0000bdf6) list_double_graphic_heading_pane_g1

0xa03e,	// (0x0000bed7) list_double_graphic_heading_pane_g2_ParamLimits

0xa03e,	// (0x0000bed7) list_double_graphic_heading_pane_g2

0xa04f,	// (0x0000bee8) list_double_graphic_heading_pane_g3_ParamLimits

0xa04f,	// (0x0000bee8) list_double_graphic_heading_pane_g3

0x0002,

0xf642,	// (0x000114db) list_double_graphic_heading_pane_g_ParamLimits

0xf642,	// (0x000114db) list_double_graphic_heading_pane_g

0xa05b,	// (0x0000bef4) list_double_graphic_heading_pane_t1_ParamLimits

0xa05b,	// (0x0000bef4) list_double_graphic_heading_pane_t1

0xa071,	// (0x0000bf0a) list_double_graphic_heading_pane_t2_ParamLimits

0xa071,	// (0x0000bf0a) list_double_graphic_heading_pane_t2

0x0001,

0xf63d,	// (0x000114d6) list_double_graphic_heading_pane_t_ParamLimits

0xf63d,	// (0x000114d6) list_double_graphic_heading_pane_t

0x9fe3,	// (0x0000be7c) list_double_time_pane_g1_ParamLimits

0x9fe3,	// (0x0000be7c) list_double_time_pane_g1

0x9eaa,	// (0x0000bd43) list_double_time_pane_g2_ParamLimits

0x9eaa,	// (0x0000bd43) list_double_time_pane_g2

0x0001,

0xf649,	// (0x000114e2) list_double_time_pane_g_ParamLimits

0xf649,	// (0x000114e2) list_double_time_pane_g

0xa083,	// (0x0000bf1c) list_double_time_pane_t1_ParamLimits

0xa083,	// (0x0000bf1c) list_double_time_pane_t1

0xa099,	// (0x0000bf32) list_double_time_pane_t2_ParamLimits

0xa099,	// (0x0000bf32) list_double_time_pane_t2

0xa0ab,	// (0x0000bf44) list_double_time_pane_t3_ParamLimits

0xa0ab,	// (0x0000bf44) list_double_time_pane_t3

0xa0bd,	// (0x0000bf56) list_double_time_pane_t4_ParamLimits

0xa0bd,	// (0x0000bf56) list_double_time_pane_t4

0x0003,

0xf64e,	// (0x000114e7) list_double_time_pane_t_ParamLimits

0xf64e,	// (0x000114e7) list_double_time_pane_t

0x4f7a,	// (0x00006e13) list_setting_pane_g1_ParamLimits

0x4f7a,	// (0x00006e13) list_setting_pane_g1

0x9eef,	// (0x0000bd88) list_setting_pane_g2_ParamLimits

0x9eef,	// (0x0000bd88) list_setting_pane_g2

0x0001,

0xf657,	// (0x000114f0) list_setting_pane_g_ParamLimits

0xf657,	// (0x000114f0) list_setting_pane_g

0xa0cf,	// (0x0000bf68) list_setting_pane_t1_ParamLimits

0xa0cf,	// (0x0000bf68) list_setting_pane_t1

0xa0e6,	// (0x0000bf7f) list_setting_pane_t2_ParamLimits

0xa0e6,	// (0x0000bf7f) list_setting_pane_t2

0x0002,

0xf65c,	// (0x000114f5) list_setting_pane_t_ParamLimits

0xf65c,	// (0x000114f5) list_setting_pane_t

0xa125,	// (0x0000bfbe) set_value_pane_cp_ParamLimits

0xa125,	// (0x0000bfbe) set_value_pane_cp

0x4f7a,	// (0x00006e13) list_setting_number_pane_g1_ParamLimits

0x4f7a,	// (0x00006e13) list_setting_number_pane_g1

0x9eef,	// (0x0000bd88) list_setting_number_pane_g2_ParamLimits

0x9eef,	// (0x0000bd88) list_setting_number_pane_g2

0x0001,

0xf657,	// (0x000114f0) list_setting_number_pane_g_ParamLimits

0xf657,	// (0x000114f0) list_setting_number_pane_g

0xa131,	// (0x0000bfca) list_setting_number_pane_t1_ParamLimits

0xa131,	// (0x0000bfca) list_setting_number_pane_t1

0xa145,	// (0x0000bfde) list_setting_number_pane_t2_ParamLimits

0xa145,	// (0x0000bfde) list_setting_number_pane_t2

0xa15c,	// (0x0000bff5) list_setting_number_pane_t3_ParamLimits

0xa15c,	// (0x0000bff5) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x000114fc) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x000114fc) list_setting_number_pane_t

0xa125,	// (0x0000bfbe) set_value_pane_ParamLimits

0xa125,	// (0x0000bfbe) set_value_pane

0xed26,	// (0x00010bbf) bg_set_opt_pane_ParamLimits

0xed26,	// (0x00010bbf) bg_set_opt_pane

0xed47,	// (0x00010be0) set_value_pane_t1

0xed55,	// (0x00010bee) slider_set_pane_cp3

0xa19f,	// (0x0000c038) volume_small_pane_cp

0xed5e,	// (0x00010bf7) list_form_gen_pane

0xed67,	// (0x00010c00) scroll_pane_cp8

0xa1a8,	// (0x0000c041) form_field_data_pane_ParamLimits

0xa1a8,	// (0x0000c041) form_field_data_pane

0xa1bf,	// (0x0000c058) form_field_data_wide_pane_ParamLimits

0xa1bf,	// (0x0000c058) form_field_data_wide_pane

0xa1df,	// (0x0000c078) form_field_popup_pane_ParamLimits

0xa1df,	// (0x0000c078) form_field_popup_pane

0xa1ff,	// (0x0000c098) form_field_popup_wide_pane_ParamLimits

0xa1ff,	// (0x0000c098) form_field_popup_wide_pane

0xed88,	// (0x00010c21) form_field_slider_pane_ParamLimits

0xed88,	// (0x00010c21) form_field_slider_pane

0xa216,	// (0x0000c0af) form_field_slider_wide_pane_ParamLimits

0xa216,	// (0x0000c0af) form_field_slider_wide_pane

0xed9b,	// (0x00010c34) data_form_pane

0xa233,	// (0x0000c0cc) form_field_data_pane_t1

0xeda7,	// (0x00010c40) input_focus_pane

0xedb5,	// (0x00010c4e) data_form_wide_pane

0xede6,	// (0x00010c7f) form_field_data_wide_pane_t1

0xec25,	// (0x00010abe) input_focus_pane_cp6

0xa24d,	// (0x0000c0e6) form_field_popup_pane_t1

0xeda7,	// (0x00010c40) input_focus_pane_cp7

0xee08,	// (0x00010ca1) list_form_pane

0xee1c,	// (0x00010cb5) form_field_popup_wide_pane_t1

0xeda7,	// (0x00010c40) input_focus_pane_cp8

0xee31,	// (0x00010cca) list_form_wide_pane

0xa26f,	// (0x0000c108) form_field_slider_pane_t1_ParamLimits

0xa26f,	// (0x0000c108) form_field_slider_pane_t1

0xa287,	// (0x0000c120) form_field_slider_pane_t2_ParamLimits

0xa287,	// (0x0000c120) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x0001150c) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x0001150c) form_field_slider_pane_t

0xe957,	// (0x000107f0) input_focus_pane_cp9_ParamLimits

0xe957,	// (0x000107f0) input_focus_pane_cp9

0xa29c,	// (0x0000c135) slider_cont_pane_ParamLimits

0xa29c,	// (0x0000c135) slider_cont_pane

0xee3d,	// (0x00010cd6) form_field_slider_wide_pane_t1_ParamLimits

0xee3d,	// (0x00010cd6) form_field_slider_wide_pane_t1

0xee4f,	// (0x00010ce8) form_field_slider_wide_pane_t2_ParamLimits

0xee4f,	// (0x00010ce8) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x00011511) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x00011511) form_field_slider_wide_pane_t

0xe957,	// (0x000107f0) input_focus_pane_cp10_ParamLimits

0xe957,	// (0x000107f0) input_focus_pane_cp10

0xa2b0,	// (0x0000c149) slider_cont_pane_cp1_ParamLimits

0xa2b0,	// (0x0000c149) slider_cont_pane_cp1

0xa2c4,	// (0x0000c15d) slider_form_pane_cp

0xee61,	// (0x00010cfa) input_focus_pane_g1

0xee69,	// (0x00010d02) input_focus_pane_g2

0xee71,	// (0x00010d0a) input_focus_pane_g3

0xee79,	// (0x00010d12) input_focus_pane_g4

0xee81,	// (0x00010d1a) input_focus_pane_g5

0xee89,	// (0x00010d22) input_focus_pane_g6

0xee91,	// (0x00010d2a) input_focus_pane_g7

0xee99,	// (0x00010d32) input_focus_pane_g8

0xeea1,	// (0x00010d3a) input_focus_pane_g9

0xe770,	// (0x00010609) input_focus_pane_g10

0x0009,

0xf67d,	// (0x00011516) input_focus_pane_g

0x1f5b,	// (0x00003df4) wait_border_pane_g3_copy1

0xa2cc,	// (0x0000c165) data_form_pane_t1

0xe770,	// (0x00010609) wait_anim_pane_g1_copy1

0xc0ae,	// (0x0000df47) data_form_wide_pane_t1

0xa2e6,	// (0x0000c17f) list_form_graphic_pane_cp_ParamLimits

0xa2e6,	// (0x0000c17f) list_form_graphic_pane_cp

0x308e,	// (0x00004f27) slider_form_pane_g1

0x3097,	// (0x00004f30) slider_form_pane_g2

0x0006,

0xf974,	// (0x0001180d) slider_form_pane_g

0xa2f8,	// (0x0000c191) list_form_graphic_pane_ParamLimits

0xa2f8,	// (0x0000c191) list_form_graphic_pane

0xa30b,	// (0x0000c1a4) list_form_graphic_pane_g1

0xa313,	// (0x0000c1ac) list_form_graphic_pane_t1_ParamLimits

0xa313,	// (0x0000c1ac) list_form_graphic_pane_t1

0xe965,	// (0x000107fe) list_highlight_pane_cp5_ParamLimits

0xe965,	// (0x000107fe) list_highlight_pane_cp5

0xa328,	// (0x0000c1c1) find_pane_g1

0xeea9,	// (0x00010d42) input_find_pane

0xa331,	// (0x0000c1ca) input_find_pane_g1_ParamLimits

0xa331,	// (0x0000c1ca) input_find_pane_g1

0xa33d,	// (0x0000c1d6) input_find_pane_t1_ParamLimits

0xa33d,	// (0x0000c1d6) input_find_pane_t1

0xa352,	// (0x0000c1eb) input_find_pane_t2_ParamLimits

0xa352,	// (0x0000c1eb) input_find_pane_t2

0x0001,

0xf692,	// (0x0001152b) input_find_pane_t_ParamLimits

0xf692,	// (0x0001152b) input_find_pane_t

0xeeb2,	// (0x00010d4b) input_focus_pane_cp5_ParamLimits

0xeeb2,	// (0x00010d4b) input_focus_pane_cp5

0xeec0,	// (0x00010d59) bg_popup_window_pane_cp2_ParamLimits

0xeec0,	// (0x00010d59) bg_popup_window_pane_cp2

0xeecd,	// (0x00010d66) listscroll_menu_pane_ParamLimits

0xeecd,	// (0x00010d66) listscroll_menu_pane

0xa373,	// (0x0000c20c) popup_submenu_window_ParamLimits

0xa373,	// (0x0000c20c) popup_submenu_window

0xeed9,	// (0x00010d72) find_popup_pane_g1

0xa39b,	// (0x0000c234) input_popup_find_pane_cp

0xeeb2,	// (0x00010d4b) input_focus_pane_cp4_ParamLimits

0xeeb2,	// (0x00010d4b) input_focus_pane_cp4

0xeee1,	// (0x00010d7a) input_popup_find_pane_t1_ParamLimits

0xeee1,	// (0x00010d7a) input_popup_find_pane_t1

0xe8e9,	// (0x00010782) bg_popup_sub_pane_cp

0xef0f,	// (0x00010da8) listscroll_popup_sub_pane

0xef17,	// (0x00010db0) list_submenu_pane_ParamLimits

0xef17,	// (0x00010db0) list_submenu_pane

0xef28,	// (0x00010dc1) scroll_pane_cp4

0xa3b3,	// (0x0000c24c) list_single_popup_submenu_pane_ParamLimits

0xa3b3,	// (0x0000c24c) list_single_popup_submenu_pane

0xa3c7,	// (0x0000c260) list_single_popup_submenu_pane_g1

0xa3cf,	// (0x0000c268) list_single_popup_submenu_pane_t1_ParamLimits

0xa3cf,	// (0x0000c268) list_single_popup_submenu_pane_t1

0xe957,	// (0x000107f0) bg_active_tab_pane_cp1_ParamLimits

0xe957,	// (0x000107f0) bg_active_tab_pane_cp1

0xef30,	// (0x00010dc9) tabs_2_active_pane_g1

0xa3e4,	// (0x0000c27d) tabs_2_active_pane_t1

0xe957,	// (0x000107f0) bg_passive_tab_pane_cp1_ParamLimits

0xe957,	// (0x000107f0) bg_passive_tab_pane_cp1

0xef30,	// (0x00010dc9) tabs_2_passive_pane_g1

0xa3e4,	// (0x0000c27d) tabs_2_passive_pane_t1

0xe965,	// (0x000107fe) bg_active_tab_pane_cp4

0xa3f6,	// (0x0000c28f) tabs_2_long_active_pane_t1

0x0c0e,	// (0x00002aa7) bg_passive_tab_pane_cp4

0x0158,	// (0x00001ff1) list_single_midp_graphic_pane_g4_ParamLimits

0xe965,	// (0x000107fe) bg_active_tab_pane_cp5

0xa409,	// (0x0000c2a2) tabs_3_long_active_pane_t1

0x0c0e,	// (0x00002aa7) bg_passive_tab_pane_cp5

0x0158,	// (0x00001ff1) list_single_midp_graphic_pane_g4

0xe965,	// (0x000107fe) bg_popup_window_pane_cp13_ParamLimits

0xe965,	// (0x000107fe) bg_popup_window_pane_cp13

0xef4e,	// (0x00010de7) listscroll_popup_fast_pane_ParamLimits

0xef4e,	// (0x00010de7) listscroll_popup_fast_pane

0xef5a,	// (0x00010df3) grid_popup_fast_pane_ParamLimits

0xef5a,	// (0x00010df3) grid_popup_fast_pane

0xef6c,	// (0x00010e05) scroll_pane_cp9_ParamLimits

0xef6c,	// (0x00010e05) scroll_pane_cp9

0x5461,	// (0x000072fa) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5461,	// (0x000072fa) list_single_graphic_hl_pane_t1_cp2

0xef7f,	// (0x00010e18) input_focus_pane_cp20_ParamLimits

0xef7f,	// (0x00010e18) input_focus_pane_cp20

0xef8d,	// (0x00010e26) query_popup_data_pane_t1_ParamLimits

0xef8d,	// (0x00010e26) query_popup_data_pane_t1

0xefa0,	// (0x00010e39) query_popup_data_pane_t2_ParamLimits

0xefa0,	// (0x00010e39) query_popup_data_pane_t2

0xefe6,	// (0x00010e7f) query_popup_data_pane_t3_ParamLimits

0xefe6,	// (0x00010e7f) query_popup_data_pane_t3

0xf027,	// (0x00010ec0) query_popup_data_pane_t4_ParamLimits

0xf027,	// (0x00010ec0) query_popup_data_pane_t4

0xf063,	// (0x00010efc) query_popup_data_pane_t5_ParamLimits

0xf063,	// (0x00010efc) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x00011530) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x00011530) query_popup_data_pane_t

0xee61,	// (0x00010cfa) bg_set_opt_pane_g1

0xee69,	// (0x00010d02) bg_set_opt_pane_g2

0xee71,	// (0x00010d0a) bg_set_opt_pane_g3

0xee79,	// (0x00010d12) bg_set_opt_pane_g4

0xee81,	// (0x00010d1a) bg_set_opt_pane_g5

0xee89,	// (0x00010d22) bg_set_opt_pane_g6

0xee91,	// (0x00010d2a) bg_set_opt_pane_g7

0xee99,	// (0x00010d32) bg_set_opt_pane_g8

0xeea1,	// (0x00010d3a) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x0001153b) bg_set_opt_pane_g

0x01e1,	// (0x0000207a) control_top_pane_stacon_ParamLimits

0x01e1,	// (0x0000207a) control_top_pane_stacon

0x0234,	// (0x000020cd) signal_pane_stacon_ParamLimits

0x0234,	// (0x000020cd) signal_pane_stacon

0x0259,	// (0x000020f2) stacon_top_pane_g1_ParamLimits

0x0259,	// (0x000020f2) stacon_top_pane_g1

0x027b,	// (0x00002114) title_pane_stacon_ParamLimits

0x027b,	// (0x00002114) title_pane_stacon

0x02a5,	// (0x0000213e) uni_indicator_pane_stacon_ParamLimits

0x02a5,	// (0x0000213e) uni_indicator_pane_stacon

0x02ba,	// (0x00002153) battery_pane_stacon_ParamLimits

0x02ba,	// (0x00002153) battery_pane_stacon

0x02fe,	// (0x00002197) control_bottom_pane_stacon_ParamLimits

0x02fe,	// (0x00002197) control_bottom_pane_stacon

0x0321,	// (0x000021ba) navi_pane_stacon_ParamLimits

0x0321,	// (0x000021ba) navi_pane_stacon

0x0344,	// (0x000021dd) stacon_bottom_pane_g1_ParamLimits

0x0344,	// (0x000021dd) stacon_bottom_pane_g1

0xf09a,	// (0x00010f33) aid_levels_signal_lsc_ParamLimits

0xf09a,	// (0x00010f33) aid_levels_signal_lsc

0xf0b0,	// (0x00010f49) signal_pane_stacon_g1_ParamLimits

0xf0b0,	// (0x00010f49) signal_pane_stacon_g1

0xf0c4,	// (0x00010f5d) signal_pane_stacon_g2_ParamLimits

0xf0c4,	// (0x00010f5d) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x0001154e) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x0001154e) signal_pane_stacon_g

0xf106,	// (0x00010f9f) title_pane_stacon_t1_ParamLimits

0xf106,	// (0x00010f9f) title_pane_stacon_t1

0xf12b,	// (0x00010fc4) uni_indicator_pane_stacon_g1

0xf135,	// (0x00010fce) uni_indicator_pane_stacon_g2

0xf13f,	// (0x00010fd8) uni_indicator_pane_stacon_g3

0xf149,	// (0x00010fe2) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x0001155a) uni_indicator_pane_stacon_g

0xf153,	// (0x00010fec) control_top_pane_stacon_g1

0xf15b,	// (0x00010ff4) control_top_pane_stacon_t1_ParamLimits

0xf15b,	// (0x00010ff4) control_top_pane_stacon_t1

0xf192,	// (0x0001102b) aid_levels_battery_lsc_ParamLimits

0xf192,	// (0x0001102b) aid_levels_battery_lsc

0xf1a9,	// (0x00011042) battery_pane_stacon_g1_ParamLimits

0xf1a9,	// (0x00011042) battery_pane_stacon_g1

0xf1bc,	// (0x00011055) battery_pane_stacon_g2_ParamLimits

0xf1bc,	// (0x00011055) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00011563) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00011563) battery_pane_stacon_g

0xf1fa,	// (0x00011093) navi_icon_pane_stacon

0xf20e,	// (0x000110a7) navi_navi_pane_stacon

0xf1fa,	// (0x00011093) navi_text_pane_stacon

0xf153,	// (0x00010fec) control_bottom_pane_stacon_g1

0xf222,	// (0x000110bb) control_bottom_pane_stacon_t1_ParamLimits

0xf222,	// (0x000110bb) control_bottom_pane_stacon_t1

0xa435,	// (0x0000c2ce) grid_app_pane_ParamLimits

0xa435,	// (0x0000c2ce) grid_app_pane

0xa46d,	// (0x0000c306) scroll_pane_cp15_ParamLimits

0xa46d,	// (0x0000c306) scroll_pane_cp15

0xa482,	// (0x0000c31b) cell_app_pane_ParamLimits

0xa482,	// (0x0000c31b) cell_app_pane

0xa4c7,	// (0x0000c360) cell_app_pane_g1_ParamLimits

0xa4c7,	// (0x0000c360) cell_app_pane_g1

0xf273,	// (0x0001110c) cell_app_pane_g2_ParamLimits

0xf273,	// (0x0001110c) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00011568) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00011568) cell_app_pane_g

0xa4eb,	// (0x0000c384) cell_app_pane_t1_ParamLimits

0xa4eb,	// (0x0000c384) cell_app_pane_t1

0xf27f,	// (0x00011118) grid_highlight_pane_ParamLimits

0xf27f,	// (0x00011118) grid_highlight_pane

0xee61,	// (0x00010cfa) cell_highlight_pane_g1

0xee69,	// (0x00010d02) cell_highlight_pane_g2

0xee71,	// (0x00010d0a) cell_highlight_pane_g3

0xee79,	// (0x00010d12) cell_highlight_pane_g4

0xee81,	// (0x00010d1a) cell_highlight_pane_g5

0xee89,	// (0x00010d22) cell_highlight_pane_g6

0xee91,	// (0x00010d2a) cell_highlight_pane_g7

0xee99,	// (0x00010d32) cell_highlight_pane_g8

0xeea1,	// (0x00010d3a) cell_highlight_pane_g9

0xe770,	// (0x00010609) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x00011516) cell_highlight_pane_g

0xf29a,	// (0x00011133) bg_scroll_pane

0xa50b,	// (0x0000c3a4) scroll_handle_pane

0xf2f6,	// (0x0001118f) scroll_bg_pane_g1

0xf30b,	// (0x000111a4) scroll_bg_pane_g2

0xf323,	// (0x000111bc) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x0001156d) scroll_bg_pane_g

0xa51f,	// (0x0000c3b8) scroll_handle_focus_pane_ParamLimits

0xa51f,	// (0x0000c3b8) scroll_handle_focus_pane

0xf2f6,	// (0x0001118f) scroll_handle_pane_g1

0xf338,	// (0x000111d1) scroll_handle_pane_g2

0xf323,	// (0x000111bc) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x00011574) scroll_handle_pane_g

0xeeb2,	// (0x00010d4b) bg_popup_sub_pane_cp21_ParamLimits

0xeeb2,	// (0x00010d4b) bg_popup_sub_pane_cp21

0xa52c,	// (0x0000c3c5) popup_fep_japan_predictive_window_t1_ParamLimits

0xa52c,	// (0x0000c3c5) popup_fep_japan_predictive_window_t1

0xa543,	// (0x0000c3dc) popup_fep_japan_predictive_window_t2_ParamLimits

0xa543,	// (0x0000c3dc) popup_fep_japan_predictive_window_t2

0xa576,	// (0x0000c40f) popup_fep_japan_predictive_window_t3_ParamLimits

0xa576,	// (0x0000c40f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x0001157b) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x0001157b) popup_fep_japan_predictive_window_t

0xe8e9,	// (0x00010782) bg_popup_sub_pane_cp23

0xa5ad,	// (0x0000c446) listscroll_japin_cand_pane

0xf34c,	// (0x000111e5) popup_fep_japan_candidate_window_t1

0xf35a,	// (0x000111f3) candidate_pane_ParamLimits

0xf35a,	// (0x000111f3) candidate_pane

0xa5b5,	// (0x0000c44e) scroll_pane_cp30

0xf36c,	// (0x00011205) list_single_popup_jap_candidate_pane_ParamLimits

0xf36c,	// (0x00011205) list_single_popup_jap_candidate_pane

0xe8e9,	// (0x00010782) list_highlight_pane_cp30

0xf381,	// (0x0001121a) list_single_popup_jap_candidate_pane_t1

0xf390,	// (0x00011229) level_1_signal

0xf39d,	// (0x00011236) level_2_signal

0xf3aa,	// (0x00011243) level_3_signal

0xf3bf,	// (0x00011258) level_4_signal

0xf3cc,	// (0x00011265) level_5_signal

0xf3d9,	// (0x00011272) level_6_signal

0xf3e6,	// (0x0001127f) level_7_signal

0xf390,	// (0x00011229) level_1_battery

0xf39d,	// (0x00011236) level_2_battery

0xf3aa,	// (0x00011243) level_3_battery

0xf3bf,	// (0x00011258) level_4_battery

0xf3cc,	// (0x00011265) level_5_battery

0xf3d9,	// (0x00011272) level_6_battery

0xf3e6,	// (0x0001127f) level_7_battery

0xf42a,	// (0x000112c3) list_menu_pane_ParamLimits

0xf42a,	// (0x000112c3) list_menu_pane

0xf440,	// (0x000112d9) scroll_pane_cp25_ParamLimits

0xf440,	// (0x000112d9) scroll_pane_cp25

0xa5bd,	// (0x0000c456) list_double2_graphic_pane_cp2_ParamLimits

0xa5bd,	// (0x0000c456) list_double2_graphic_pane_cp2

0xa5bd,	// (0x0000c456) list_double2_large_graphic_pane_cp2_ParamLimits

0xa5bd,	// (0x0000c456) list_double2_large_graphic_pane_cp2

0xa5bd,	// (0x0000c456) list_double2_pane_cp2_ParamLimits

0xa5bd,	// (0x0000c456) list_double2_pane_cp2

0xa5bd,	// (0x0000c456) list_double_graphic_pane_cp2_ParamLimits

0xa5bd,	// (0x0000c456) list_double_graphic_pane_cp2

0xa5bd,	// (0x0000c456) list_double_large_graphic_pane_cp2_ParamLimits

0xa5bd,	// (0x0000c456) list_double_large_graphic_pane_cp2

0xa5bd,	// (0x0000c456) list_double_number_pane_cp2_ParamLimits

0xa5bd,	// (0x0000c456) list_double_number_pane_cp2

0xa5bd,	// (0x0000c456) list_double_pane_cp2_ParamLimits

0xa5bd,	// (0x0000c456) list_double_pane_cp2

0xa5cc,	// (0x0000c465) list_single_2graphic_pane_cp2_ParamLimits

0xa5cc,	// (0x0000c465) list_single_2graphic_pane_cp2

0xa5cc,	// (0x0000c465) list_single_graphic_heading_pane_cp2_ParamLimits

0xa5cc,	// (0x0000c465) list_single_graphic_heading_pane_cp2

0xa5cc,	// (0x0000c465) list_single_graphic_pane_cp2_ParamLimits

0xa5cc,	// (0x0000c465) list_single_graphic_pane_cp2

0xa5cc,	// (0x0000c465) list_single_heading_pane_cp2_ParamLimits

0xa5cc,	// (0x0000c465) list_single_heading_pane_cp2

0xf469,	// (0x00011302) list_single_large_graphic_pane_cp2_ParamLimits

0xf469,	// (0x00011302) list_single_large_graphic_pane_cp2

0xa5cc,	// (0x0000c465) list_single_number_heading_pane_cp2_ParamLimits

0xa5cc,	// (0x0000c465) list_single_number_heading_pane_cp2

0xa5cc,	// (0x0000c465) list_single_number_pane_cp2_ParamLimits

0xa5cc,	// (0x0000c465) list_single_number_pane_cp2

0xa5cc,	// (0x0000c465) list_single_pane_cp2_ParamLimits

0xa5cc,	// (0x0000c465) list_single_pane_cp2

0xf4de,	// (0x00011377) bg_popup_sub_pane_cp22

0xf4f4,	// (0x0001138d) popup_side_volume_key_window_g1

0xf500,	// (0x00011399) popup_side_volume_key_window_t1

0xa694,	// (0x0000c52d) volume_small_pane_cp1

0xe957,	// (0x000107f0) bg_popup_sub_pane_cp24_ParamLimits

0xe957,	// (0x000107f0) bg_popup_sub_pane_cp24

0xf50e,	// (0x000113a7) fep_china_uni_candidate_pane_ParamLimits

0xf50e,	// (0x000113a7) fep_china_uni_candidate_pane

0xf522,	// (0x000113bb) fep_china_uni_entry_pane

0xf532,	// (0x000113cb) popup_fep_china_uni_window_g1

0xa69c,	// (0x0000c535) fep_china_uni_entry_pane_g1

0xa6a4,	// (0x0000c53d) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x000115ac) fep_china_uni_entry_pane_g

0x000c,	// (0x00001ea5) fep_entry_item_pane

0x0016,	// (0x00001eaf) fep_candidate_item_pane

0xa6ac,	// (0x0000c545) fep_china_uni_candidate_pane_g1

0x0026,	// (0x00001ebf) fep_china_uni_candidate_pane_g2

0x002e,	// (0x00001ec7) fep_china_uni_candidate_pane_g3

0xa6b4,	// (0x0000c54d) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x000115b1) fep_china_uni_candidate_pane_g

0xe770,	// (0x00010609) fep_entry_item_pane_g1

0x003e,	// (0x00001ed7) fep_entry_item_pane_t1_ParamLimits

0x003e,	// (0x00001ed7) fep_entry_item_pane_t1

0x0054,	// (0x00001eed) fep_candidate_item_pane_t1_ParamLimits

0x0054,	// (0x00001eed) fep_candidate_item_pane_t1

0x0069,	// (0x00001f02) fep_candidate_item_pane_t2_ParamLimits

0x0069,	// (0x00001f02) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x000115ba) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x000115ba) fep_candidate_item_pane_t

0xe965,	// (0x000107fe) list_highlight_pane_cp31_ParamLimits

0xe965,	// (0x000107fe) list_highlight_pane_cp31

0x007b,	// (0x00001f14) level_1_signal_lsc

0x0084,	// (0x00001f1d) level_2_signal_lsc

0x008d,	// (0x00001f26) level_3_signal_lsc

0x0096,	// (0x00001f2f) level_4_signal_lsc

0x009f,	// (0x00001f38) level_5_signal_lsc

0x00a8,	// (0x00001f41) level_6_signal_lsc

0x00b1,	// (0x00001f4a) level_7_signal_lsc

0x00b1,	// (0x00001f4a) level_1_battery_lsc

0x00ba,	// (0x00001f53) level_2_battery_lsc

0x00c3,	// (0x00001f5c) level_3_battery_lsc

0x00cc,	// (0x00001f65) level_4_battery_lsc

0x00d5,	// (0x00001f6e) level_5_battery_lsc

0x00de,	// (0x00001f77) level_6_battery_lsc

0x007b,	// (0x00001f14) level_7_battery_lsc

0x00e7,	// (0x00001f80) scroll_handle_focus_pane_g1

0x00f0,	// (0x00001f89) scroll_handle_focus_pane_g2

0x00f9,	// (0x00001f92) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x000115bf) scroll_handle_focus_pane_g

0xa6bc,	// (0x0000c555) list_single_2graphic_pane_g1_ParamLimits

0xa6bc,	// (0x0000c555) list_single_2graphic_pane_g1

0x9e73,	// (0x0000bd0c) list_single_2graphic_pane_g2_ParamLimits

0x9e73,	// (0x0000bd0c) list_single_2graphic_pane_g2

0xeced,	// (0x00010b86) list_single_2graphic_pane_g3_ParamLimits

0xeced,	// (0x00010b86) list_single_2graphic_pane_g3

0xa6c8,	// (0x0000c561) list_single_2graphic_pane_g4_ParamLimits

0xa6c8,	// (0x0000c561) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x000115c6) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x000115c6) list_single_2graphic_pane_g

0xa6d4,	// (0x0000c56d) list_single_2graphic_pane_t1_ParamLimits

0xa6d4,	// (0x0000c56d) list_single_2graphic_pane_t1

0xa702,	// (0x0000c59b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa702,	// (0x0000c59b) list_double2_graphic_large_graphic_pane_g1

0x9ede,	// (0x0000bd77) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9ede,	// (0x0000bd77) list_double2_graphic_large_graphic_pane_g2

0x9eef,	// (0x0000bd88) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9eef,	// (0x0000bd88) list_double2_graphic_large_graphic_pane_g3

0xa714,	// (0x0000c5ad) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa714,	// (0x0000c5ad) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x000115cf) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x000115cf) list_double2_graphic_large_graphic_pane_g

0xa720,	// (0x0000c5b9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa720,	// (0x0000c5b9) list_double2_graphic_large_graphic_pane_t1

0xa736,	// (0x0000c5cf) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa736,	// (0x0000c5cf) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x000115d8) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x000115d8) list_double2_graphic_large_graphic_pane_t

0xa7bb,	// (0x0000c654) popup_fast_swap_window_ParamLimits

0xa7bb,	// (0x0000c654) popup_fast_swap_window

0xa7d7,	// (0x0000c670) popup_side_volume_key_window

0x0441,	// (0x000022da) stacon_top_pane

0x044b,	// (0x000022e4) status_pane_ParamLimits

0x044b,	// (0x000022e4) status_pane

0xa7f1,	// (0x0000c68a) status_small_pane

0xe8e9,	// (0x00010782) control_pane

0xe8e9,	// (0x00010782) stacon_bottom_pane

0xed67,	// (0x00010c00) scroll_pane_cp121

0xed5e,	// (0x00010bf7) set_content_pane

0xa748,	// (0x0000c5e1) bg_active_tab_pane_g1_cp1

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp1

0xa75a,	// (0x0000c5f3) bg_active_tab_pane_g3_cp1

0xa748,	// (0x0000c5e1) bg_passive_tab_pane_g1_cp1

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp1

0xa75a,	// (0x0000c5f3) bg_passive_tab_pane_g3_cp1

0xa763,	// (0x0000c5fc) bg_active_tab_pane_g1_cp2

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp2

0xa76c,	// (0x0000c605) bg_active_tab_pane_g3_cp2

0xa763,	// (0x0000c5fc) bg_passive_tab_pane_g1_cp2

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp2

0xa76c,	// (0x0000c605) bg_passive_tab_pane_g3_cp2

0xa775,	// (0x0000c60e) bg_active_tab_pane_g1_cp3

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp3

0xa77e,	// (0x0000c617) bg_active_tab_pane_g3_cp3

0xa775,	// (0x0000c60e) bg_passive_tab_pane_g1_cp3

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp3

0xa77e,	// (0x0000c617) bg_passive_tab_pane_g3_cp3

0xa787,	// (0x0000c620) bg_active_tab_pane_g1_cp4

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp4

0xa792,	// (0x0000c62b) bg_active_tab_pane_g3_cp4

0xa787,	// (0x0000c620) bg_passive_tab_pane_g1_cp4

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp4

0xa792,	// (0x0000c62b) bg_passive_tab_pane_g3_cp4

0xa79d,	// (0x0000c636) bg_active_tab_pane_g1_cp5

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp5

0xa7a6,	// (0x0000c63f) bg_active_tab_pane_g3_cp5

0xa79d,	// (0x0000c636) bg_passive_tab_pane_g1_cp5

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp5

0xa7a6,	// (0x0000c63f) bg_passive_tab_pane_g3_cp5

0x385f,	// (0x000056f8) list_set_graphic_pane_ParamLimits

0x385f,	// (0x000056f8) list_set_graphic_pane

0xe8e9,	// (0x00010782) bg_set_opt_pane_cp4

0x0390,	// (0x00002229) list_set_graphic_pane_g1_ParamLimits

0x0390,	// (0x00002229) list_set_graphic_pane_g1

0x039c,	// (0x00002235) list_set_graphic_pane_g2_ParamLimits

0x039c,	// (0x00002235) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x000115dd) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x000115dd) list_set_graphic_pane_g

0x0009,

0xfac9,	// (0x00011962) volume_small_pane_cp_g

0xa7af,	// (0x0000c648) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa7af,	// (0x0000c648) list_double2_large_graphic_pane_g1_cp2

0x03ca,	// (0x00002263) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x03ca,	// (0x00002263) list_double2_large_graphic_pane_g2_cp2

0x03db,	// (0x00002274) list_double2_large_graphic_pane_g3_cp2

0x03e3,	// (0x0000227c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x03e3,	// (0x0000227c) list_double2_large_graphic_pane_t1_cp2

0x03f9,	// (0x00002292) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x03f9,	// (0x00002292) list_double2_large_graphic_pane_t2_cp2

0xbd41,	// (0x0000dbda) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbd41,	// (0x0000dbda) list_double_large_graphic_pane_g1_cp2

0x2b87,	// (0x00004a20) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2b87,	// (0x00004a20) list_double_large_graphic_pane_g2_cp2

0x0566,	// (0x000023ff) list_double_large_graphic_pane_g3_cp2

0x2b98,	// (0x00004a31) list_double_large_graphic_pane_g4_cp

0x2ba0,	// (0x00004a39) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2ba0,	// (0x00004a39) list_double_large_graphic_pane_t1_cp2

0x2bb7,	// (0x00004a50) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2bb7,	// (0x00004a50) list_double_large_graphic_pane_t2_cp2

0x0464,	// (0x000022fd) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0464,	// (0x000022fd) list_double2_graphic_pane_g1_cp2

0x0472,	// (0x0000230b) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0472,	// (0x0000230b) list_double2_graphic_pane_g2_cp2

0x0483,	// (0x0000231c) list_double2_graphic_pane_g3_cp2

0x048d,	// (0x00002326) list_double2_graphic_pane_t1_cp2_ParamLimits

0x048d,	// (0x00002326) list_double2_graphic_pane_t1_cp2

0x04a3,	// (0x0000233c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x04a3,	// (0x0000233c) list_double2_graphic_pane_t2_cp2

0xed1a,	// (0x00010bb3) list_single_number_heading_pane_g1_cp2_ParamLimits

0xed1a,	// (0x00010bb3) list_single_number_heading_pane_g1_cp2

0x04b5,	// (0x0000234e) list_single_number_heading_pane_g2_cp2

0x04bd,	// (0x00002356) list_single_number_heading_pane_t1_cp2_ParamLimits

0x04bd,	// (0x00002356) list_single_number_heading_pane_t1_cp2

0x04d3,	// (0x0000236c) list_single_number_heading_pane_t2_cp2_ParamLimits

0x04d3,	// (0x0000236c) list_single_number_heading_pane_t2_cp2

0x04e5,	// (0x0000237e) list_single_number_heading_pane_t3_cp2_ParamLimits

0x04e5,	// (0x0000237e) list_single_number_heading_pane_t3_cp2

0xed1a,	// (0x00010bb3) list_single_heading_pane_g1_cp2_ParamLimits

0xed1a,	// (0x00010bb3) list_single_heading_pane_g1_cp2

0x04b5,	// (0x0000234e) list_single_heading_pane_g2_cp2

0x04bd,	// (0x00002356) list_single_heading_pane_t1_cp2_ParamLimits

0x04bd,	// (0x00002356) list_single_heading_pane_t1_cp2

0x2980,	// (0x00004819) list_single_heading_pane_t2_cp2_ParamLimits

0x2980,	// (0x00004819) list_single_heading_pane_t2_cp2

0x28c8,	// (0x00004761) list_double_graphic_pane_g1_cp2_ParamLimits

0x28c8,	// (0x00004761) list_double_graphic_pane_g1_cp2

0x28d4,	// (0x0000476d) list_double_graphic_pane_g2_cp2_ParamLimits

0x28d4,	// (0x0000476d) list_double_graphic_pane_g2_cp2

0x28e3,	// (0x0000477c) list_double_graphic_pane_g3_cp2

0x28eb,	// (0x00004784) list_double_graphic_pane_t1_cp2_ParamLimits

0x28eb,	// (0x00004784) list_double_graphic_pane_t1_cp2

0x2901,	// (0x0000479a) list_double_graphic_pane_t2_cp2_ParamLimits

0x2901,	// (0x0000479a) list_double_graphic_pane_t2_cp2

0x055a,	// (0x000023f3) list_double_number_pane_g1_cp2_ParamLimits

0x055a,	// (0x000023f3) list_double_number_pane_g1_cp2

0x0566,	// (0x000023ff) list_double_number_pane_g2_cp2

0x288c,	// (0x00004725) list_double_number_pane_t1_cp2_ParamLimits

0x288c,	// (0x00004725) list_double_number_pane_t1_cp2

0x28a0,	// (0x00004739) list_double_number_pane_t2_cp2_ParamLimits

0x28a0,	// (0x00004739) list_double_number_pane_t2_cp2

0x28b6,	// (0x0000474f) list_double_number_pane_t3_cp2_ParamLimits

0x28b6,	// (0x0000474f) list_double_number_pane_t3_cp2

0x2764,	// (0x000045fd) list_single_graphic_pane_g1_cp2_ParamLimits

0x2764,	// (0x000045fd) list_single_graphic_pane_g1_cp2

0x05be,	// (0x00002457) list_single_graphic_pane_g2_cp2_ParamLimits

0x05be,	// (0x00002457) list_single_graphic_pane_g2_cp2

0x05ca,	// (0x00002463) list_single_graphic_pane_g3_cp2

0x273a,	// (0x000045d3) list_single_graphic_pane_t1_cp2_ParamLimits

0x273a,	// (0x000045d3) list_single_graphic_pane_t1_cp2

0x05be,	// (0x00002457) list_single_number_pane_g1_cp2_ParamLimits

0x05be,	// (0x00002457) list_single_number_pane_g1_cp2

0x05ca,	// (0x00002463) list_single_number_pane_g2_cp2

0x273a,	// (0x000045d3) list_single_number_pane_t1_cp2_ParamLimits

0x273a,	// (0x000045d3) list_single_number_pane_t1_cp2

0x2750,	// (0x000045e9) list_single_number_pane_t2_cp2_ParamLimits

0x2750,	// (0x000045e9) list_single_number_pane_t2_cp2

0x03ca,	// (0x00002263) list_double2_pane_g1_cp2_ParamLimits

0x03ca,	// (0x00002263) list_double2_pane_g1_cp2

0x03db,	// (0x00002274) list_double2_pane_g2_cp2

0x0532,	// (0x000023cb) list_double2_pane_t1_cp2_ParamLimits

0x0532,	// (0x000023cb) list_double2_pane_t1_cp2

0x0548,	// (0x000023e1) list_double2_pane_t2_cp2_ParamLimits

0x0548,	// (0x000023e1) list_double2_pane_t2_cp2

0x055a,	// (0x000023f3) list_double_pane_g1_cp2_ParamLimits

0x055a,	// (0x000023f3) list_double_pane_g1_cp2

0x0566,	// (0x000023ff) list_double_pane_g2_cp2

0x056e,	// (0x00002407) list_double_pane_t1_cp2_ParamLimits

0x056e,	// (0x00002407) list_double_pane_t1_cp2

0x0584,	// (0x0000241d) list_double_pane_t2_cp2_ParamLimits

0x0584,	// (0x0000241d) list_double_pane_t2_cp2

0xa7fc,	// (0x0000c695) list_single_pane_cp2_g3

0x05be,	// (0x00002457) list_single_pane_g1_cp2_ParamLimits

0x05be,	// (0x00002457) list_single_pane_g1_cp2

0x05ca,	// (0x00002463) list_single_pane_g2_cp2

0x05d2,	// (0x0000246b) list_single_pane_t1_cp2_ParamLimits

0x05d2,	// (0x0000246b) list_single_pane_t1_cp2

0xa804,	// (0x0000c69d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa804,	// (0x0000c69d) list_single_large_graphic_pane_g1_cp2

0x05f6,	// (0x0000248f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x05f6,	// (0x0000248f) list_single_large_graphic_pane_g2_cp2

0x0602,	// (0x0000249b) list_single_large_graphic_pane_g3_cp2

0xa810,	// (0x0000c6a9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa810,	// (0x0000c6a9) list_single_large_graphic_pane_g4_cp1

0x0624,	// (0x000024bd) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0624,	// (0x000024bd) list_single_large_graphic_pane_t1_cp2

0x25ad,	// (0x00004446) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x25ad,	// (0x00004446) list_single_graphic_heading_pane_g1_cp2

0x257a,	// (0x00004413) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x257a,	// (0x00004413) list_single_graphic_heading_pane_g4_cp2

0x05ca,	// (0x00002463) list_single_graphic_heading_pane_g5_cp2

0x25b9,	// (0x00004452) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x25b9,	// (0x00004452) list_single_graphic_heading_pane_t1_cp2

0x25cf,	// (0x00004468) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x25cf,	// (0x00004468) list_single_graphic_heading_pane_t2_cp2

0x256e,	// (0x00004407) list_single_2graphic_pane_g1_cp2_ParamLimits

0x256e,	// (0x00004407) list_single_2graphic_pane_g1_cp2

0x257a,	// (0x00004413) list_single_2graphic_pane_g2_cp2_ParamLimits

0x257a,	// (0x00004413) list_single_2graphic_pane_g2_cp2

0x05ca,	// (0x00002463) list_single_2graphic_pane_g3_cp2

0x258b,	// (0x00004424) list_single_2graphic_pane_g4_cp2_ParamLimits

0x258b,	// (0x00004424) list_single_2graphic_pane_g4_cp2

0x2597,	// (0x00004430) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2597,	// (0x00004430) list_single_2graphic_pane_t1_cp2

0xe770,	// (0x00010609) list_highlight_pane_g10_cp1

0x2156,	// (0x00003fef) list_highlight_pane_g1_cp1

0x215e,	// (0x00003ff7) list_highlight_pane_g2_cp1

0x2166,	// (0x00003fff) list_highlight_pane_g3_cp1

0x216e,	// (0x00004007) list_highlight_pane_g4_cp1

0x2176,	// (0x0000400f) list_highlight_pane_g5_cp1

0x217e,	// (0x00004017) list_highlight_pane_g6_cp1

0x2186,	// (0x0000401f) list_highlight_pane_g7_cp1

0x218e,	// (0x00004027) list_highlight_pane_g8_cp1

0x2196,	// (0x0000402f) list_highlight_pane_g9_cp1

0xbace,	// (0x0000d967) form_field_slider_pane_t3

0xbadc,	// (0x0000d975) form_field_slider_pane_t4

0x209a,	// (0x00003f33) slider_form_pane_ParamLimits

0x209a,	// (0x00003f33) slider_form_pane

0xe8e9,	// (0x00010782) control_abbreviations

0xe8e9,	// (0x00010782) control_conventions

0xe8e9,	// (0x00010782) control_definitions

0xe8e9,	// (0x00010782) format_table_attribute

0xbd18,	// (0x0000dbb1) bg_popup_preview_window_pane_g9

0xe8e9,	// (0x00010782) format_table_data2

0xe8e9,	// (0x00010782) format_table_data3

0xe8e9,	// (0x00010782) format_table_data_example

0x0008,

0xe8e9,	// (0x00010782) intro_purpose

0xf8d4,	// (0x0001176d) bg_popup_preview_window_pane_g

0xe8e9,	// (0x00010782) texts_category

0xe8e9,	// (0x00010782) texts_graphics

0x063a,	// (0x000024d3) text_digital

0x0649,	// (0x000024e2) text_primary

0x0658,	// (0x000024f1) text_primary_small

0x0667,	// (0x00002500) text_secondary

0x0676,	// (0x0000250f) text_title

0xc1a2,	// (0x0000e03b) bg_passive_tab_pane_g1_cp3_srt

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp3_srt

0xc1ab,	// (0x0000e044) bg_passive_tab_pane_g3_cp3_srt

0xe957,	// (0x000107f0) bg_active_tab_pane_cp3_srt_ParamLimits

0xe957,	// (0x000107f0) bg_active_tab_pane_cp3_srt

0xc1b4,	// (0x0000e04d) tabs_4_active_pane_srt_g1

0xc1bc,	// (0x0000e055) tabs_4_active_pane_srt_t1_ParamLimits

0xc1bc,	// (0x0000e055) tabs_4_active_pane_srt_t1

0xc1a2,	// (0x0000e03b) bg_active_tab_pane_g1_cp3_copy1

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp3_copy1

0xc1ab,	// (0x0000e044) bg_active_tab_pane_g3_cp3_copy1

0xe965,	// (0x000107fe) tabs_2_long_active_pane_srt_ParamLimits

0xe965,	// (0x000107fe) tabs_2_long_active_pane_srt

0xe965,	// (0x000107fe) tabs_2_long_passive_pane_srt_ParamLimits

0xe965,	// (0x000107fe) tabs_2_long_passive_pane_srt

0x0c0e,	// (0x00002aa7) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0c0e,	// (0x00002aa7) bg_passive_tab_pane_cp4_srt

0xbe92,	// (0x0000dd2b) bg_passive_tab_pane_g1_cp4_srt

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp4_srt

0xbe9b,	// (0x0000dd34) bg_passive_tab_pane_g3_cp4_srt

0xe965,	// (0x000107fe) bg_active_tab_pane_cp4_srt_ParamLimits

0xe965,	// (0x000107fe) bg_active_tab_pane_cp4_srt

0xbea4,	// (0x0000dd3d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbea4,	// (0x0000dd3d) tabs_2_long_active_pane_srt_t1

0xbe92,	// (0x0000dd2b) bg_active_tab_pane_g1_cp4_srt

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp4_srt

0xbe9b,	// (0x0000dd34) bg_active_tab_pane_g3_cp4_srt

0xe957,	// (0x000107f0) tabs_3_long_active_pane_srt_ParamLimits

0xe957,	// (0x000107f0) tabs_3_long_active_pane_srt

0xe957,	// (0x000107f0) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe957,	// (0x000107f0) tabs_3_long_passive_pane_cp_srt

0xe957,	// (0x000107f0) tabs_3_long_passive_pane_srt_ParamLimits

0xe957,	// (0x000107f0) tabs_3_long_passive_pane_srt

0x0c0e,	// (0x00002aa7) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0c0e,	// (0x00002aa7) bg_passive_tab_pane_cp5_srt

0xa79d,	// (0x0000c636) bg_passive_tab_pane_g1_cp5_srt

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp5_srt

0xa7a6,	// (0x0000c63f) bg_passive_tab_pane_g3_cp5_srt

0xe965,	// (0x000107fe) bg_active_tab_pane_cp5_srt_ParamLimits

0xe965,	// (0x000107fe) bg_active_tab_pane_cp5_srt

0xbe7c,	// (0x0000dd15) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbe7c,	// (0x0000dd15) tabs_3_long_active_pane_srt_t1

0xa79d,	// (0x0000c636) bg_active_tab_pane_g1_cp5_srt

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp5_srt

0xa7a6,	// (0x0000c63f) bg_active_tab_pane_g3_cp5_srt

0x2e2d,	// (0x00004cc6) navi_text_pane_srt_t1

0x2e25,	// (0x00004cbe) navi_icon_pane_srt_g1

0x08f0,	// (0x00002789) midp_editing_number_pane_srt

0x0685,	// (0x0000251e) midp_ticker_pane_srt

0x08f8,	// (0x00002791) midp_ticker_pane_srt_g1

0x0900,	// (0x00002799) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x000115fc) midp_ticker_pane_srt_g

0x0908,	// (0x000027a1) midp_ticker_pane_srt_t1

0x2e16,	// (0x00004caf) midp_editing_number_pane_t1_copy1

0xa82a,	// (0x0000c6c3) listscroll_midp_pane

0xa82a,	// (0x0000c6c3) midp_form_pane

0xa895,	// (0x0000c72e) midp_info_popup_window_ParamLimits

0xa895,	// (0x0000c72e) midp_info_popup_window

0xeeb2,	// (0x00010d4b) bg_popup_sub_pane_cp50_ParamLimits

0xeeb2,	// (0x00010d4b) bg_popup_sub_pane_cp50

0x1d9e,	// (0x00003c37) listscroll_midp_info_pane_ParamLimits

0x1d9e,	// (0x00003c37) listscroll_midp_info_pane

0x1d7e,	// (0x00003c17) listscroll_form_midp_pane_ParamLimits

0x1d7e,	// (0x00003c17) listscroll_form_midp_pane

0x1d8a,	// (0x00003c23) scroll_bar_cp050

0x1d7e,	// (0x00003c17) list_midp_pane

0xc3ac,	// (0x0000e245) signal_pane_g2_cp

0x1c98,	// (0x00003b31) listscroll_midp_info_pane_t1_ParamLimits

0x1c98,	// (0x00003b31) listscroll_midp_info_pane_t1

0xb908,	// (0x0000d7a1) listscroll_midp_info_pane_t2_ParamLimits

0xb908,	// (0x0000d7a1) listscroll_midp_info_pane_t2

0xb946,	// (0x0000d7df) listscroll_midp_info_pane_t3_ParamLimits

0xb946,	// (0x0000d7df) listscroll_midp_info_pane_t3

0xb980,	// (0x0000d819) listscroll_midp_info_pane_t4_ParamLimits

0xb980,	// (0x0000d819) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x000116a8) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x000116a8) listscroll_midp_info_pane_t

0xef28,	// (0x00010dc1) scroll_pane_cp21

0x1c38,	// (0x00003ad1) form_midp_field_choice_group_pane

0xb8cb,	// (0x0000d764) form_midp_field_text_pane

0x1c7e,	// (0x00003b17) form_midp_field_time_pane

0x1c86,	// (0x00003b1f) form_midp_gauge_slider_pane

0x1c8f,	// (0x00003b28) form_midp_gauge_wait_pane

0xe8e9,	// (0x00010782) form_midp_image_pane

0xb8b4,	// (0x0000d74d) list_single_midp_pane_ParamLimits

0xb8b4,	// (0x0000d74d) list_single_midp_pane

0xb892,	// (0x0000d72b) form_midp_field_text_pane_t1

0x18ee,	// (0x00003787) input_focus_pane_cp050

0x1bf5,	// (0x00003a8e) list_midp_form_text_pane

0x1b8a,	// (0x00003a23) form_midp_field_choice_group_pane_t1

0x1b98,	// (0x00003a31) input_focus_pane_cp051

0x1bac,	// (0x00003a45) list_midp_choice_pane

0xe8e9,	// (0x00010782) status_idle_pane

0x1b6e,	// (0x00003a07) form_midp_field_time_pane_t1

0xe770,	// (0x00010609) wait_anim_pane_g2_copy1

0x1b7c,	// (0x00003a15) form_midp_field_time_pane_t2

0x0001,

0x07af,	// (0x00002648) aid_navinavi_width_2_pane

0xf80a,	// (0x000116a3) form_midp_field_time_pane_t

0xe8e9,	// (0x00010782) input_focus_pane_cp052

0xe8e9,	// (0x00010782) bg_input_focus_pane_cp040

0x1b2e,	// (0x000039c7) form_midp_gauge_slider_pane_t1

0x1b3c,	// (0x000039d5) form_midp_gauge_slider_pane_t2

0xb876,	// (0x0000d70f) form_midp_gauge_slider_pane_t3

0xb884,	// (0x0000d71d) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x0001169a) form_midp_gauge_slider_pane_t

0x1b66,	// (0x000039ff) form_midp_slider_pane

0xe965,	// (0x000107fe) bg_input_focus_pane_cp041_ParamLimits

0xe965,	// (0x000107fe) bg_input_focus_pane_cp041

0x1afb,	// (0x00003994) form_midp_gauge_wait_pane_t1_ParamLimits

0x1afb,	// (0x00003994) form_midp_gauge_wait_pane_t1

0x1b0d,	// (0x000039a6) form_midp_gauge_wait_pane_t2_ParamLimits

0x1b0d,	// (0x000039a6) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x00011695) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x00011695) form_midp_gauge_wait_pane_t

0x1b1f,	// (0x000039b8) form_midp_wait_pane_ParamLimits

0x1b1f,	// (0x000039b8) form_midp_wait_pane

0xb840,	// (0x0000d6d9) form_midp_image_pane_g1

0xb849,	// (0x0000d6e2) form_midp_image_pane_t1

0xb858,	// (0x0000d6f1) form_midp_image_pane_t2

0xb867,	// (0x0000d700) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x0001168e) form_midp_image_pane_t

0x1aad,	// (0x00003946) list_single_midp_pane_g1

0x1ab6,	// (0x0000394f) list_single_midp_pane_t1

0xb82b,	// (0x0000d6c4) list_midp_form_item_pane_ParamLimits

0xb82b,	// (0x0000d6c4) list_midp_form_item_pane

0x0757,	// (0x000025f0) list_midp_form_item_pane_t1

0x0766,	// (0x000025ff) midp_ticker_pane_g1

0x0772,	// (0x0000260b) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x000115e2) midp_ticker_pane_g

0x077e,	// (0x00002617) midp_ticker_pane_t1

0x310e,	// (0x00004fa7) midp_editing_number_pane_t1

0x30ec,	// (0x00004f85) midp_editing_number_pane

0x30fb,	// (0x00004f94) midp_ticker_pane

0x2df4,	// (0x00004c8d) ai_message_heading_pane

0xe8e9,	// (0x00010782) bg_popup_window_pane_cp14

0x2dfc,	// (0x00004c95) listscroll_ai_message_pane

0x2d7e,	// (0x00004c17) ai_message_heading_pane_g1_ParamLimits

0x2d7e,	// (0x00004c17) ai_message_heading_pane_g1

0xbe32,	// (0x0000dccb) ai_message_heading_pane_g2_ParamLimits

0xbe32,	// (0x0000dccb) ai_message_heading_pane_g2

0x2d96,	// (0x00004c2f) ai_message_heading_pane_g3_ParamLimits

0x2d96,	// (0x00004c2f) ai_message_heading_pane_g3

0x2da2,	// (0x00004c3b) ai_message_heading_pane_g4_ParamLimits

0x2da2,	// (0x00004c3b) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x000117cf) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x000117cf) ai_message_heading_pane_g

0xbe3e,	// (0x0000dcd7) ai_message_heading_pane_t1_ParamLimits

0xbe3e,	// (0x0000dcd7) ai_message_heading_pane_t1

0xbe58,	// (0x0000dcf1) ai_message_heading_pane_t2_ParamLimits

0xbe58,	// (0x0000dcf1) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x000117d8) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x000117d8) ai_message_heading_pane_t

0x2dda,	// (0x00004c73) bg_popup_heading_pane_cp1_ParamLimits

0x2dda,	// (0x00004c73) bg_popup_heading_pane_cp1

0x2d6c,	// (0x00004c05) list_ai_message_pane_ParamLimits

0x2d6c,	// (0x00004c05) list_ai_message_pane

0xef28,	// (0x00010dc1) scroll_pane_cp10

0x2cb8,	// (0x00004b51) list_ai_message_pane_g1

0x2cc0,	// (0x00004b59) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x000117ac) list_ai_message_pane_g

0x2cc8,	// (0x00004b61) list_ai_message_pane_t1_ParamLimits

0x2cc8,	// (0x00004b61) list_ai_message_pane_t1

0x2cdd,	// (0x00004b76) list_ai_message_pane_t2_ParamLimits

0x2cdd,	// (0x00004b76) list_ai_message_pane_t2

0x2cf2,	// (0x00004b8b) list_ai_message_pane_t3_ParamLimits

0x2cf2,	// (0x00004b8b) list_ai_message_pane_t3

0x2d07,	// (0x00004ba0) list_ai_message_pane_t4_ParamLimits

0x2d07,	// (0x00004ba0) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x000117b1) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x000117b1) list_ai_message_pane_t

0xbdbe,	// (0x0000dc57) cell_ai_soft_ind_pane_ParamLimits

0xbdbe,	// (0x0000dc57) cell_ai_soft_ind_pane

0x0790,	// (0x00002629) cell_ai_soft_ind_pane_g1_ParamLimits

0x0790,	// (0x00002629) cell_ai_soft_ind_pane_g1

0xe8e9,	// (0x00010782) grid_highlight_cp1

0x079d,	// (0x00002636) text_secondary_cp56_ParamLimits

0x079d,	// (0x00002636) text_secondary_cp56

0x2c78,	// (0x00004b11) example_general_pane_ParamLimits

0x2c78,	// (0x00004b11) example_general_pane

0x2c84,	// (0x00004b1d) example_parent_pane_g1_ParamLimits

0x2c84,	// (0x00004b1d) example_parent_pane_g1

0x2c90,	// (0x00004b29) example_parent_pane_t1_ParamLimits

0x2c90,	// (0x00004b29) example_parent_pane_t1

0xafaf,	// (0x0000ce48) popup_preview_text_window_ParamLimits

0xafaf,	// (0x0000ce48) popup_preview_text_window

0x05b6,	// (0x0000244f) list_single_pane_cp2_g4

0xeb51,	// (0x000109ea) bg_popup_preview_window_pane_ParamLimits

0xeb51,	// (0x000109ea) bg_popup_preview_window_pane

0xbd20,	// (0x0000dbb9) popup_preview_text_window_t1_ParamLimits

0xbd20,	// (0x0000dbb9) popup_preview_text_window_t1

0x29f0,	// (0x00004889) popup_preview_text_window_t2_ParamLimits

0x29f0,	// (0x00004889) popup_preview_text_window_t2

0x2a39,	// (0x000048d2) popup_preview_text_window_t3_ParamLimits

0x2a39,	// (0x000048d2) popup_preview_text_window_t3

0x2a7e,	// (0x00004917) popup_preview_text_window_t4_ParamLimits

0x2a7e,	// (0x00004917) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x00011780) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x00011780) popup_preview_text_window_t

0x2afc,	// (0x00004995) scroll_pane_cp11

0x1762,	// (0x000035fb) bg_popup_preview_window_pane_g1

0xbce0,	// (0x0000db79) bg_popup_preview_window_pane_g2

0xbce8,	// (0x0000db81) bg_popup_preview_window_pane_g3

0xbcf0,	// (0x0000db89) bg_popup_preview_window_pane_g4

0xbcf8,	// (0x0000db91) bg_popup_preview_window_pane_g5

0xbd00,	// (0x0000db99) bg_popup_preview_window_pane_g6

0xbd08,	// (0x0000dba1) bg_popup_preview_window_pane_g7

0xbd10,	// (0x0000dba9) bg_popup_preview_window_pane_g8

0xe786,	// (0x0001061f) aid_popup_width_pane

0xaf2b,	// (0x0000cdc4) popup_midp_note_alarm_window_ParamLimits

0xaf2b,	// (0x0000cdc4) popup_midp_note_alarm_window

0xed9b,	// (0x00010c34) data_form_pane_ParamLimits

0xa229,	// (0x0000c0c2) form_field_data_pane_g1

0xa233,	// (0x0000c0cc) form_field_data_pane_t1_ParamLimits

0xeda7,	// (0x00010c40) input_focus_pane_ParamLimits

0xedb5,	// (0x00010c4e) data_form_wide_pane_ParamLimits

0xedc6,	// (0x00010c5f) form_field_data_wide_pane_g1

0xede6,	// (0x00010c7f) form_field_data_wide_pane_t1_ParamLimits

0xec25,	// (0x00010abe) input_focus_pane_cp6_ParamLimits

0xa3a5,	// (0x0000c23e) input_popup_find_pane_g1_ParamLimits

0xa3a5,	// (0x0000c23e) input_popup_find_pane_g1

0xf1cd,	// (0x00011066) aid_navi_side_left_pane

0xf1e2,	// (0x0001107b) aid_navi_side_right_pane

0x2251,	// (0x000040ea) bg_popup_window_pane_cp30_ParamLimits

0x2251,	// (0x000040ea) bg_popup_window_pane_cp30

0x22cb,	// (0x00004164) popup_midp_note_alarm_window_g1_ParamLimits

0x22cb,	// (0x00004164) popup_midp_note_alarm_window_g1

0x22fb,	// (0x00004194) popup_midp_note_alarm_window_t1_ParamLimits

0x22fb,	// (0x00004194) popup_midp_note_alarm_window_t1

0xbb21,	// (0x0000d9ba) popup_midp_note_alarm_window_t2_ParamLimits

0xbb21,	// (0x0000d9ba) popup_midp_note_alarm_window_t2

0xbbcf,	// (0x0000da68) popup_midp_note_alarm_window_t3_ParamLimits

0xbbcf,	// (0x0000da68) popup_midp_note_alarm_window_t3

0xbbf7,	// (0x0000da90) popup_midp_note_alarm_window_t4_ParamLimits

0xbbf7,	// (0x0000da90) popup_midp_note_alarm_window_t4

0x2492,	// (0x0000432b) popup_midp_note_alarm_window_t5_ParamLimits

0x2492,	// (0x0000432b) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x0001171d) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x0001171d) popup_midp_note_alarm_window_t

0x253e,	// (0x000043d7) wait_bar_pane_cp1_ParamLimits

0x253e,	// (0x000043d7) wait_bar_pane_cp1

0xe8e9,	// (0x00010782) wait_anim_pane_copy1

0xe8e9,	// (0x00010782) wait_border_pane_copy1

0x1f47,	// (0x00003de0) wait_border_pane_g1_copy1

0xee00,	// (0x00010c99) form_field_popup_pane_g1

0xa24d,	// (0x0000c0e6) form_field_popup_pane_t1_ParamLimits

0xeda7,	// (0x00010c40) input_focus_pane_cp7_ParamLimits

0xee08,	// (0x00010ca1) list_form_pane_ParamLimits

0xee14,	// (0x00010cad) form_field_popup_wide_pane_g1

0xee1c,	// (0x00010cb5) form_field_popup_wide_pane_t1_ParamLimits

0xeda7,	// (0x00010c40) input_focus_pane_cp8_ParamLimits

0xee31,	// (0x00010cca) list_form_wide_pane_ParamLimits

0xc215,	// (0x0000e0ae) aid_size_cell_graphic_pane

0xa2cc,	// (0x0000c165) data_form_pane_t1_ParamLimits

0xc0ae,	// (0x0000df47) data_form_wide_pane_t1_ParamLimits

0xb3f2,	// (0x0000d28b) bg_status_flat_pane

0x9839,	// (0x0000b6d2) title_pane_t1_ParamLimits

0xe91f,	// (0x000107b8) title_pane_t2_ParamLimits

0xe945,	// (0x000107de) title_pane_t3_ParamLimits

0xf557,	// (0x000113f0) title_pane_t_ParamLimits

0xf390,	// (0x00011229) level_1_signal_ParamLimits

0xf39d,	// (0x00011236) level_2_signal_ParamLimits

0xf3aa,	// (0x00011243) level_3_signal_ParamLimits

0xf3bf,	// (0x00011258) level_4_signal_ParamLimits

0xf3cc,	// (0x00011265) level_5_signal_ParamLimits

0xf3d9,	// (0x00011272) level_6_signal_ParamLimits

0xf3e6,	// (0x0001127f) level_7_signal_ParamLimits

0xf390,	// (0x00011229) level_1_battery_ParamLimits

0xf39d,	// (0x00011236) level_2_battery_ParamLimits

0xf3aa,	// (0x00011243) level_3_battery_ParamLimits

0xf3bf,	// (0x00011258) level_4_battery_ParamLimits

0xf3cc,	// (0x00011265) level_5_battery_ParamLimits

0xf3d9,	// (0x00011272) level_6_battery_ParamLimits

0xf3e6,	// (0x0001127f) level_7_battery_ParamLimits

0x2156,	// (0x00003fef) bg_status_flat_pane_g1

0x215e,	// (0x00003ff7) bg_status_flat_pane_g2

0x2166,	// (0x00003fff) bg_status_flat_pane_g3

0x216e,	// (0x00004007) bg_status_flat_pane_g4

0x2176,	// (0x0000400f) bg_status_flat_pane_g5

0x217e,	// (0x00004017) bg_status_flat_pane_g6

0x2186,	// (0x0000401f) bg_status_flat_pane_g7

0x98cd,	// (0x0000b766) tabs_3_active_pane_t1_ParamLimits

0x98cd,	// (0x0000b766) tabs_3_passive_pane_t1_ParamLimits

0x98e7,	// (0x0000b780) tabs_4_active_pane_t1_ParamLimits

0x98e7,	// (0x0000b780) tabs_4_1_passive_pane_t1_ParamLimits

0xa3e4,	// (0x0000c27d) tabs_2_active_pane_t1_ParamLimits

0xa3e4,	// (0x0000c27d) tabs_2_passive_pane_t1_ParamLimits

0xe965,	// (0x000107fe) bg_active_tab_pane_cp4_ParamLimits

0xa3f6,	// (0x0000c28f) tabs_2_long_active_pane_t1_ParamLimits

0x0c0e,	// (0x00002aa7) bg_passive_tab_pane_cp4_ParamLimits

0x1813,	// (0x000036ac) list_single_midp_graphic_pane_t1_ParamLimits

0xe965,	// (0x000107fe) bg_active_tab_pane_cp5_ParamLimits

0xa409,	// (0x0000c2a2) tabs_3_long_active_pane_t1_ParamLimits

0x0c0e,	// (0x00002aa7) bg_passive_tab_pane_cp5_ParamLimits

0x1813,	// (0x000036ac) list_single_midp_graphic_pane_t1

0xb3f2,	// (0x0000d28b) bg_status_flat_pane_ParamLimits

0x1351,	// (0x000031ea) indicator_pane_cp2_ParamLimits

0x1351,	// (0x000031ea) indicator_pane_cp2

0xb570,	// (0x0000d409) navi_pane_srt_ParamLimits

0xb570,	// (0x0000d409) navi_pane_srt

0x14a0,	// (0x00003339) popup_clock_digital_analogue_window_cp1

0xe9c3,	// (0x0001085c) indicator_pane_t1

0x0685,	// (0x0000251e) copy_highlight_pane

0x0685,	// (0x0000251e) cursor_graphics_pane

0x0685,	// (0x0000251e) graphic_within_text_pane

0x0685,	// (0x0000251e) link_highlight_pane

0x2abf,	// (0x00004958) popup_preview_text_window_t5_ParamLimits

0x2abf,	// (0x00004958) popup_preview_text_window_t5

0x07b7,	// (0x00002650) cursor_digital_pane

0x07b7,	// (0x00002650) cursor_primary_pane

0x07c8,	// (0x00002661) cursor_primary_small_pane

0x07d0,	// (0x00002669) cursor_secondary_pane

0x07d8,	// (0x00002671) cursor_title_pane

0x07b7,	// (0x00002650) link_highlight_digital_pane

0x07bf,	// (0x00002658) link_highlight_primary_pane

0x07c8,	// (0x00002661) link_highlight_primary_small_pane

0x07d0,	// (0x00002669) link_highlight_secondary_pane

0x07d8,	// (0x00002671) link_highlight_title_pane

0x07b7,	// (0x00002650) copy_highlight_digital_pane

0x07b7,	// (0x00002650) copy_highlight_primary_pane

0x07c8,	// (0x00002661) copy_highlight_primary_small_pane

0x07d0,	// (0x00002669) copy_highlight_secondary_pane

0x07d8,	// (0x00002671) copy_highlight_title_pane

0x07d0,	// (0x00002669) graphic_text_digital_pane

0x21f4,	// (0x0000408d) graphic_text_primary_pane

0x21fd,	// (0x00004096) graphic_text_primary_small_pane

0x07c8,	// (0x00002661) graphic_text_secondary_pane

0x07b7,	// (0x00002650) graphic_text_title_pane

0xa8e6,	// (0x0000c77f) cursor_primary_pane_g1

0x21e6,	// (0x0000407f) cursor_text_primary_t1

0xbb17,	// (0x0000d9b0) cursor_primary_small_pane_g1

0x21d8,	// (0x00004071) cursor_text_primary_small_t1

0xbb0d,	// (0x0000d9a6) cursor_primary_small_pane_g1_copy1

0x21c0,	// (0x00004059) cursor_text_primary_small_t1_copy1

0x219e,	// (0x00004037) cursor_text_title_t1

0xbb03,	// (0x0000d99c) cursor_title_pane_g1

0xa8e6,	// (0x0000c77f) cursor_digital_pane_g1

0x07ea,	// (0x00002683) cursor_text_digital_t1

0x07f8,	// (0x00002691) link_highlight_primary_pane_g1

0x2147,	// (0x00003fe0) link_highlight_primary_pane_t1

0x07f8,	// (0x00002691) link_highlight_primary_small_pane_g1

0x0800,	// (0x00002699) link_highlight_primary_small_pane_t1

0x07f8,	// (0x00002691) link_highlight_secondary_pane_g1

0x080f,	// (0x000026a8) link_highlight_secondary_pane_t1

0x20ac,	// (0x00003f45) link_highlight_title_pane_g1

0x20c3,	// (0x00003f5c) link_highlight_title_pane_t1

0x20ac,	// (0x00003f45) link_highlight_digital_pane_g1

0x20b4,	// (0x00003f4d) link_highlight_digital_pane_t1

0x1f66,	// (0x00003dff) copy_highlight_primary_pane_g1

0x1f8c,	// (0x00003e25) copy_highlight_primary_pane_t1

0x1f66,	// (0x00003dff) copy_highlight_primary_small_pane_g1

0x1f7d,	// (0x00003e16) copy_highlight_primary_small_pane_t1

0x081e,	// (0x000026b7) copy_highlight_secondary_pane_g1

0x0826,	// (0x000026bf) copy_highlight_secondary_pane_t1

0x1f66,	// (0x00003dff) copy_highlight_title_pane_g1

0x1f6e,	// (0x00003e07) copy_highlight_title_pane_t1

0x1f66,	// (0x00003dff) copy_highlight_digital_pane_g1

0x35ba,	// (0x00005453) copy_highlight_digital_pane_t1

0x350e,	// (0x000053a7) graphic_text_primary_pane_g1

0x359e,	// (0x00005437) graphic_text_primary_pane_t1

0x35ac,	// (0x00005445) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x0001184c) graphic_text_primary_pane_t

0x357a,	// (0x00005413) graphic_text_primary_small_pane_g1

0x3582,	// (0x0000541b) graphic_text_primary_small_pane_t1

0x3590,	// (0x00005429) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x00011847) graphic_text_primary_small_pane_t

0x3556,	// (0x000053ef) graphic_text_secondary_pane_g1

0x355e,	// (0x000053f7) graphic_text_secondary_pane_t1

0x356c,	// (0x00005405) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x00011842) graphic_text_secondary_pane_t

0x3532,	// (0x000053cb) graphic_text_title_pane_g1

0x353a,	// (0x000053d3) graphic_text_title_pane_t1

0x3548,	// (0x000053e1) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x0001183d) graphic_text_title_pane_t

0x350e,	// (0x000053a7) graphic_text_digital_pane_g1

0x3516,	// (0x000053af) graphic_text_digital_pane_t1

0x3524,	// (0x000053bd) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x00011838) graphic_text_digital_pane_t

0xe965,	// (0x000107fe) navi_icon_pane_srt_ParamLimits

0xe965,	// (0x000107fe) navi_icon_pane_srt

0xe8e9,	// (0x00010782) navi_midp_pane_srt

0xe8e9,	// (0x00010782) navi_navi_pane_srt

0xe965,	// (0x000107fe) navi_text_pane_srt_ParamLimits

0xe965,	// (0x000107fe) navi_text_pane_srt

0x34d9,	// (0x00005372) navi_navi_icon_text_pane_srt

0x34e1,	// (0x0000537a) navi_navi_pane_srt_g1_ParamLimits

0x34e1,	// (0x0000537a) navi_navi_pane_srt_g1

0x34f3,	// (0x0000538c) navi_navi_pane_srt_g2_ParamLimits

0x34f3,	// (0x0000538c) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x00011833) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x00011833) navi_navi_pane_srt_g

0x3505,	// (0x0000539e) navi_navi_tabs_pane_srt

0x34d9,	// (0x00005372) navi_navi_text_pane_srt

0x34d9,	// (0x00005372) navi_navi_volume_pane_srt

0x34ca,	// (0x00005363) navi_navi_text_pane_srt_t1

0x34a5,	// (0x0000533e) navi_navi_volume_pane_srt_g1

0x34ad,	// (0x00005346) volume_small_pane_srt_ParamLimits

0x34ad,	// (0x00005346) volume_small_pane_srt

0x0835,	// (0x000026ce) volume_small_pane_srt_g1_ParamLimits

0x0835,	// (0x000026ce) volume_small_pane_srt_g1

0x0845,	// (0x000026de) volume_small_pane_srt_g2_ParamLimits

0x0845,	// (0x000026de) volume_small_pane_srt_g2

0x0856,	// (0x000026ef) volume_small_pane_srt_g3_ParamLimits

0x0856,	// (0x000026ef) volume_small_pane_srt_g3

0x0867,	// (0x00002700) volume_small_pane_srt_g4_ParamLimits

0x0867,	// (0x00002700) volume_small_pane_srt_g4

0x0878,	// (0x00002711) volume_small_pane_srt_g5_ParamLimits

0x0878,	// (0x00002711) volume_small_pane_srt_g5

0x0889,	// (0x00002722) volume_small_pane_srt_g6_ParamLimits

0x0889,	// (0x00002722) volume_small_pane_srt_g6

0x089a,	// (0x00002733) volume_small_pane_srt_g7_ParamLimits

0x089a,	// (0x00002733) volume_small_pane_srt_g7

0x08ab,	// (0x00002744) volume_small_pane_srt_g8_ParamLimits

0x08ab,	// (0x00002744) volume_small_pane_srt_g8

0x08bc,	// (0x00002755) volume_small_pane_srt_g9_ParamLimits

0x08bc,	// (0x00002755) volume_small_pane_srt_g9

0x08cd,	// (0x00002766) volume_small_pane_srt_g10_ParamLimits

0x08cd,	// (0x00002766) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x000115e7) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x000115e7) volume_small_pane_srt_g

0x9ba8,	// (0x0000ba41) query_popup_data_pane_cp2

0x3493,	// (0x0000532c) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3493,	// (0x0000532c) navi_navi_icon_text_pane_srt_t1

0x21f4,	// (0x0000408d) navi_tabs_2_long_pane_srt

0x21f4,	// (0x0000408d) navi_tabs_2_pane_srt

0x21f4,	// (0x0000408d) navi_tabs_3_long_pane_srt

0x21f4,	// (0x0000408d) navi_tabs_3_pane_srt

0x21f4,	// (0x0000408d) navi_tabs_4_pane_srt

0xc2c2,	// (0x0000e15b) tabs_2_active_pane_srt_ParamLimits

0xc2c2,	// (0x0000e15b) tabs_2_active_pane_srt

0xc2d2,	// (0x0000e16b) tabs_2_passive_pane_srt_ParamLimits

0xc2d2,	// (0x0000e16b) tabs_2_passive_pane_srt

0x18ee,	// (0x00003787) bg_passive_tab_pane_cp1_srt_ParamLimits

0x18ee,	// (0x00003787) bg_passive_tab_pane_cp1_srt

0xc292,	// (0x0000e12b) bg_passive_tab_pane_g1_cp1_srt

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp1_srt

0xc29b,	// (0x0000e134) bg_passive_tab_pane_g3_cp1_srt

0xe957,	// (0x000107f0) bg_active_tab_pane_cp1_srt_ParamLimits

0xe957,	// (0x000107f0) bg_active_tab_pane_cp1_srt

0xc2a4,	// (0x0000e13d) tabs_2_active_pane_srt_g1

0xc2ac,	// (0x0000e145) tabs_2_active_pane_srt_t1_ParamLimits

0xc2ac,	// (0x0000e145) tabs_2_active_pane_srt_t1

0xc292,	// (0x0000e12b) bg_active_tab_pane_g1_cp1_srt

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp1_srt

0xc29b,	// (0x0000e134) bg_active_tab_pane_g3_cp1_srt

0xc25f,	// (0x0000e0f8) tabs_3_active_pane_srt_ParamLimits

0xc25f,	// (0x0000e0f8) tabs_3_active_pane_srt

0xc270,	// (0x0000e109) tabs_3_passive_pane_cp_srt_ParamLimits

0xc270,	// (0x0000e109) tabs_3_passive_pane_cp_srt

0xc281,	// (0x0000e11a) tabs_3_passive_pane_srt_ParamLimits

0xc281,	// (0x0000e11a) tabs_3_passive_pane_srt

0x18ee,	// (0x00003787) bg_passive_tab_pane_cp2_srt_ParamLimits

0x18ee,	// (0x00003787) bg_passive_tab_pane_cp2_srt

0xa8f0,	// (0x0000c789) bg_passive_tab_pane_g1_cp2_srt

0xa751,	// (0x0000c5ea) bg_passive_tab_pane_g2_cp2_srt

0xa8f9,	// (0x0000c792) bg_passive_tab_pane_g3_cp2_srt

0xe957,	// (0x000107f0) bg_active_tab_pane_cp2_srt_ParamLimits

0xe957,	// (0x000107f0) bg_active_tab_pane_cp2_srt

0xc241,	// (0x0000e0da) tabs_3_active_pane_srt_g1

0xc249,	// (0x0000e0e2) tabs_3_active_pane_srt_t1_ParamLimits

0xc249,	// (0x0000e0e2) tabs_3_active_pane_srt_t1

0xa8f0,	// (0x0000c789) bg_active_tab_pane_g1_cp2_srt

0xa751,	// (0x0000c5ea) bg_active_tab_pane_g2_cp2_srt

0xa8f9,	// (0x0000c792) bg_active_tab_pane_g3_cp2_srt

0x33aa,	// (0x00005243) tabs_4_active_pane_srt_ParamLimits

0x33aa,	// (0x00005243) tabs_4_active_pane_srt

0x33bc,	// (0x00005255) tabs_4_passive_pane_cp2_srt_ParamLimits

0x33bc,	// (0x00005255) tabs_4_passive_pane_cp2_srt

0x0b8c,	// (0x00002a25) aid_size_cell_toolbar

0x2f36,	// (0x00004dcf) main_idle_act_pane_ParamLimits

0xad6d,	// (0x0000cc06) popup_large_graphic_colour_window_ParamLimits

0xb261,	// (0x0000d0fa) popup_toolbar_window_ParamLimits

0xb261,	// (0x0000d0fa) popup_toolbar_window

0x3139,	// (0x00004fd2) list_single_graphic_2heading_pane_ParamLimits

0x3139,	// (0x00004fd2) list_single_graphic_2heading_pane

0xf259,	// (0x000110f2) aid_size_cell_apps_grid_lsc_pane

0xf26b,	// (0x00011104) aid_size_cell_apps_grid_prt_pane

0x0c0e,	// (0x00002aa7) bg_wml_button_pane_cp1_ParamLimits

0x0c0e,	// (0x00002aa7) bg_wml_button_pane_cp1

0xb892,	// (0x0000d72b) form_midp_field_text_pane_t1_ParamLimits

0x18ee,	// (0x00003787) input_focus_pane_cp050_ParamLimits

0x1bf5,	// (0x00003a8e) list_midp_form_text_pane_ParamLimits

0x1b98,	// (0x00003a31) input_focus_pane_cp051_ParamLimits

0x1bac,	// (0x00003a45) list_midp_choice_pane_ParamLimits

0xb7f7,	// (0x0000d690) list_single_2graphic_pane_cp3_ParamLimits

0xb7f7,	// (0x0000d690) list_single_2graphic_pane_cp3

0xb80b,	// (0x0000d6a4) list_single_midp_graphic_pane_ParamLimits

0xb80b,	// (0x0000d6a4) list_single_midp_graphic_pane

0x15fc,	// (0x00003495) list_single_graphic_2heading_pane_g1_ParamLimits

0x15fc,	// (0x00003495) list_single_graphic_2heading_pane_g1

0xece1,	// (0x00010b7a) list_single_graphic_2heading_pane_g4_ParamLimits

0xece1,	// (0x00010b7a) list_single_graphic_2heading_pane_g4

0xeced,	// (0x00010b86) list_single_graphic_2heading_pane_g5_ParamLimits

0xeced,	// (0x00010b86) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x0001163a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x0001163a) list_single_graphic_2heading_pane_g

0x1608,	// (0x000034a1) list_single_graphic_2heading_pane_t1_ParamLimits

0x1608,	// (0x000034a1) list_single_graphic_2heading_pane_t1

0x161c,	// (0x000034b5) list_single_graphic_2heading_pane_t2_ParamLimits

0x161c,	// (0x000034b5) list_single_graphic_2heading_pane_t2

0x1636,	// (0x000034cf) list_single_graphic_2heading_pane_t3_ParamLimits

0x1636,	// (0x000034cf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x00011641) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x00011641) list_single_graphic_2heading_pane_t

0x164e,	// (0x000034e7) bg_popup_sub_pane_cp2

0x1678,	// (0x00003511) grid_toobar_pane

0x16b4,	// (0x0000354d) cell_toolbar_pane_ParamLimits

0x16b4,	// (0x0000354d) cell_toolbar_pane

0x1706,	// (0x0000359f) cell_toolbar_pane_g1_ParamLimits

0x1706,	// (0x0000359f) cell_toolbar_pane_g1

0xb70f,	// (0x0000d5a8) cell_toolbar_pane_g2_ParamLimits

0xb70f,	// (0x0000d5a8) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x00011648) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x00011648) cell_toolbar_pane_g

0x173c,	// (0x000035d5) grid_highlight_pane_cp2_ParamLimits

0x173c,	// (0x000035d5) grid_highlight_pane_cp2

0x1756,	// (0x000035ef) toolbar_button_pane

0x1762,	// (0x000035fb) toolbar_button_pane_g1

0x176a,	// (0x00003603) toolbar_button_pane_g2

0x1772,	// (0x0000360b) toolbar_button_pane_g3

0x177a,	// (0x00003613) toolbar_button_pane_g4

0x1782,	// (0x0000361b) toolbar_button_pane_g5

0x178a,	// (0x00003623) toolbar_button_pane_g6

0x1792,	// (0x0000362b) toolbar_button_pane_g7

0x179a,	// (0x00003633) toolbar_button_pane_g8

0x17a2,	// (0x0000363b) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x0001164d) toolbar_button_pane_g

0x17b2,	// (0x0000364b) list_single_2graphic_pane_g1_cp3_ParamLimits

0x17b2,	// (0x0000364b) list_single_2graphic_pane_g1_cp3

0xb723,	// (0x0000d5bc) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb723,	// (0x0000d5bc) list_single_2graphic_pane_g2_cp3

0x04b5,	// (0x0000234e) list_single_2graphic_pane_g3_cp3

0x0158,	// (0x00001ff1) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0158,	// (0x00001ff1) list_single_2graphic_pane_g4_cp3

0xb734,	// (0x0000d5cd) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb734,	// (0x0000d5cd) list_single_2graphic_pane_t1_cp3

0xed1a,	// (0x00010bb3) list_single_midp_graphic_pane_g2_ParamLimits

0xed1a,	// (0x00010bb3) list_single_midp_graphic_pane_g2

0x0b94,	// (0x00002a2d) aid_zoom_text_primary

0x0b9c,	// (0x00002a35) aid_zoom_text_secondary

0xa950,	// (0x0000c7e9) status_small_pane_g7_ParamLimits

0xa950,	// (0x0000c7e9) status_small_pane_g7

0xa973,	// (0x0000c80c) status_small_pane_t1_ParamLimits

0x9815,	// (0x0000b6ae) title_pane_g2

0x0003,

0xf54e,	// (0x000113e7) title_pane_g

0x9c02,	// (0x0000ba9b) aid_size_cell_colour_1_pane_ParamLimits

0x9c02,	// (0x0000ba9b) aid_size_cell_colour_1_pane

0x9c16,	// (0x0000baaf) aid_size_cell_colour_2_pane_ParamLimits

0x9c16,	// (0x0000baaf) aid_size_cell_colour_2_pane

0x9c2a,	// (0x0000bac3) aid_size_cell_colour_3_pane_ParamLimits

0x9c2a,	// (0x0000bac3) aid_size_cell_colour_3_pane

0x9c3e,	// (0x0000bad7) aid_size_cell_colour_4_pane_ParamLimits

0x9c3e,	// (0x0000bad7) aid_size_cell_colour_4_pane

0xf0d5,	// (0x00010f6e) title_pane_stacon_g1_ParamLimits

0xf0d5,	// (0x00010f6e) title_pane_stacon_g1

0x1fe3,	// (0x00003e7c) popup_note_wait_window_g3_ParamLimits

0x1fe3,	// (0x00003e7c) popup_note_wait_window_g3

0x2059,	// (0x00003ef2) popup_note_wait_window_t5_ParamLimits

0x2059,	// (0x00003ef2) popup_note_wait_window_t5

0xe8e9,	// (0x00010782) main_feb_china_hwr_fs_writing_pane

0xabef,	// (0x0000ca88) popup_feb_china_hwr_fs_window_ParamLimits

0xabef,	// (0x0000ca88) popup_feb_china_hwr_fs_window

0xb750,	// (0x0000d5e9) aid_size_cell_hwr_fs_ParamLimits

0xb750,	// (0x0000d5e9) aid_size_cell_hwr_fs

0x18ee,	// (0x00003787) bg_popup_sub_pane_cp3_ParamLimits

0x18ee,	// (0x00003787) bg_popup_sub_pane_cp3

0xb765,	// (0x0000d5fe) grid_hwr_fs_pane_ParamLimits

0xb765,	// (0x0000d5fe) grid_hwr_fs_pane

0x1912,	// (0x000037ab) linegrid_hwr_fs_pane_ParamLimits

0x1912,	// (0x000037ab) linegrid_hwr_fs_pane

0xb77d,	// (0x0000d616) cell_hwr_fs_pane_ParamLimits

0xb77d,	// (0x0000d616) cell_hwr_fs_pane

0x1944,	// (0x000037dd) linegrid_hwr_fs_pane_g1_ParamLimits

0x1944,	// (0x000037dd) linegrid_hwr_fs_pane_g1

0xb7a3,	// (0x0000d63c) linegrid_hwr_fs_pane_g2_ParamLimits

0xb7a3,	// (0x0000d63c) linegrid_hwr_fs_pane_g2

0x1962,	// (0x000037fb) linegrid_hwr_fs_pane_g3_ParamLimits

0x1962,	// (0x000037fb) linegrid_hwr_fs_pane_g3

0xb7b5,	// (0x0000d64e) linegrid_hwr_fs_pane_g4_ParamLimits

0xb7b5,	// (0x0000d64e) linegrid_hwr_fs_pane_g4

0x1988,	// (0x00003821) linegrid_hwr_fs_pane_g5_ParamLimits

0x1988,	// (0x00003821) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x00011673) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x00011673) linegrid_hwr_fs_pane_g

0x199e,	// (0x00003837) cell_hwr_fs_pane_g1_ParamLimits

0x199e,	// (0x00003837) cell_hwr_fs_pane_g1

0x1536,	// (0x000033cf) cell_hwr_fs_pane_g2_ParamLimits

0x1536,	// (0x000033cf) cell_hwr_fs_pane_g2

0xb7cf,	// (0x0000d668) cell_hwr_fs_pane_g3_ParamLimits

0xb7cf,	// (0x0000d668) cell_hwr_fs_pane_g3

0xb7dc,	// (0x0000d675) cell_hwr_fs_pane_g4_ParamLimits

0xb7dc,	// (0x0000d675) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x0001167e) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x0001167e) cell_hwr_fs_pane_g

0xb7e9,	// (0x0000d682) cell_hwr_fs_pane_t1

0xe8e9,	// (0x00010782) grid_highlight_pane_cp6

0xe8e9,	// (0x00010782) main_idle_act2_pane

0xef0f,	// (0x00010da8) aid_inside_area_popup_secondary

0xbc36,	// (0x0000dacf) aid_inside_area_window_primary_ParamLimits

0xbc36,	// (0x0000dacf) aid_inside_area_window_primary

0xc2ea,	// (0x0000e183) ai2_news_ticker_pane

0x35d1,	// (0x0000546a) aid_size_cell_ai1_link_ParamLimits

0x35d1,	// (0x0000546a) aid_size_cell_ai1_link

0xc2f2,	// (0x0000e18b) popup_ai2_data_window_ParamLimits

0xc2f2,	// (0x0000e18b) popup_ai2_data_window

0x3601,	// (0x0000549a) popup_ai2_link_window_ParamLimits

0x3601,	// (0x0000549a) popup_ai2_link_window

0x18ee,	// (0x00003787) bg_popup_sub_pane_cp4_ParamLimits

0x18ee,	// (0x00003787) bg_popup_sub_pane_cp4

0x3615,	// (0x000054ae) grid_ai2_link_pane_ParamLimits

0x3615,	// (0x000054ae) grid_ai2_link_pane

0x362c,	// (0x000054c5) popup_ai2_link_window_g1_ParamLimits

0x362c,	// (0x000054c5) popup_ai2_link_window_g1

0x3638,	// (0x000054d1) popup_ai2_link_window_g2_ParamLimits

0x3638,	// (0x000054d1) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x00011851) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x00011851) popup_ai2_link_window_g

0x3647,	// (0x000054e0) ai2_mp_button_pane

0x364f,	// (0x000054e8) ai2_mp_volume_pane

0x1b98,	// (0x00003a31) bg_popup_sub_pane_cp5_ParamLimits

0x1b98,	// (0x00003a31) bg_popup_sub_pane_cp5

0x3657,	// (0x000054f0) heading_ai2_gene_pane_ParamLimits

0x3657,	// (0x000054f0) heading_ai2_gene_pane

0x3663,	// (0x000054fc) list_ai2_gene_pane_ParamLimits

0x3663,	// (0x000054fc) list_ai2_gene_pane

0x36ab,	// (0x00005544) cell_ai2_link_pane_ParamLimits

0x36ab,	// (0x00005544) cell_ai2_link_pane

0x36c1,	// (0x0000555a) cell_ai2_link_pane_g1

0xe8e9,	// (0x00010782) grid_highlight_pane_cp7

0x3791,	// (0x0000562a) ai2_mp_volume_pane_g1

0x3799,	// (0x00005632) ai2_mp_volume_pane_g2

0x3706,	// (0x0000559f) list_ai2_gene_pane_t1

0x37a1,	// (0x0000563a) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x0001186a) ai2_mp_volume_pane_g

0xc308,	// (0x0000e1a1) volume_small_pane_cp3

0x37b2,	// (0x0000564b) aid_size_cell_ai2_button

0x37ba,	// (0x00005653) grid_ai2_button_pane

0x37c3,	// (0x0000565c) cell_ai2_button_pane_ParamLimits

0x37c3,	// (0x0000565c) cell_ai2_button_pane

0xe770,	// (0x00010609) cell_ai2_button_pane_g1

0xe8e9,	// (0x00010782) grid_highlight_pane_cp8

0x3751,	// (0x000055ea) ai2_gene_pane_t1_ParamLimits

0x3751,	// (0x000055ea) ai2_gene_pane_t1

0xab41,	// (0x0000c9da) aid_height_parent_landscape

0xbf5a,	// (0x0000ddf3) aid_height_set_list

0x2f36,	// (0x00004dcf) aid_size_parent

0xc215,	// (0x0000e0ae) aid_size_cell_graphic_pane_ParamLimits

0x3673,	// (0x0000550c) popup_ai2_data_window_g1_ParamLimits

0x3673,	// (0x0000550c) popup_ai2_data_window_g1

0x367f,	// (0x00005518) ai2_news_ticker_pane_g1

0x3687,	// (0x00005520) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x00011856) ai2_news_ticker_pane_g

0x368f,	// (0x00005528) ai2_news_ticker_pane_t1

0x369d,	// (0x00005536) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x0001185b) ai2_news_ticker_pane_t

0x36ca,	// (0x00005563) heading_ai2_gene_pane_g1

0x36d2,	// (0x0000556b) heading_ai2_gene_pane_t1_ParamLimits

0x36d2,	// (0x0000556b) heading_ai2_gene_pane_t1

0x36e7,	// (0x00005580) list_highlight_pane_cp6

0x36ef,	// (0x00005588) ai2_gene_pane_ParamLimits

0x36ef,	// (0x00005588) ai2_gene_pane

0x3714,	// (0x000055ad) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x00011860) list_ai2_gene_pane_t

0x3722,	// (0x000055bb) list_highlight_pane_cp8_ParamLimits

0x3722,	// (0x000055bb) list_highlight_pane_cp8

0x3733,	// (0x000055cc) ai2_gene_pane_g1_ParamLimits

0x3733,	// (0x000055cc) ai2_gene_pane_g1

0x3745,	// (0x000055de) ai2_gene_pane_g2_ParamLimits

0x3745,	// (0x000055de) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x00011865) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x00011865) ai2_gene_pane_g

0xecd0,	// (0x00010b69) scroll_pane_cp12

0xaafe,	// (0x0000c997) control_pane_t3_ParamLimits

0xaafe,	// (0x0000c997) control_pane_t3

0xa964,	// (0x0000c7fd) status_small_pane_g8_ParamLimits

0xa964,	// (0x0000c7fd) status_small_pane_g8

0xacb2,	// (0x0000cb4b) popup_find_window_ParamLimits

0xaf65,	// (0x0000cdfe) popup_note_image_window_ParamLimits

0x16e4,	// (0x0000357d) list_double2_graphic_pane_vc_g1_ParamLimits

0x16e4,	// (0x0000357d) list_double2_graphic_pane_vc_g1

0xece1,	// (0x00010b7a) list_double2_graphic_pane_vc_g2_ParamLimits

0xece1,	// (0x00010b7a) list_double2_graphic_pane_vc_g2

0xeced,	// (0x00010b86) list_double2_graphic_pane_vc_g3_ParamLimits

0xeced,	// (0x00010b86) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0001145a) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0001145a) list_double2_graphic_pane_vc_g

0x16f0,	// (0x00003589) list_double2_graphic_pane_vc_t1_ParamLimits

0x16f0,	// (0x00003589) list_double2_graphic_pane_vc_t1

0xece1,	// (0x00010b7a) list_single_heading_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b7a) list_single_heading_pane_vc_g1

0xeced,	// (0x00010b86) list_single_heading_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b86) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011461) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011461) list_single_heading_pane_vc_g

0x17eb,	// (0x00003684) list_single_heading_pane_vc_t1_ParamLimits

0x17eb,	// (0x00003684) list_single_heading_pane_vc_t1

0x1801,	// (0x0000369a) list_single_heading_pane_vc_t2_ParamLimits

0x1801,	// (0x0000369a) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x00011662) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x00011662) list_single_heading_pane_vc_t

0x1829,	// (0x000036c2) list_setting_number_pane_vc_g1_ParamLimits

0x1829,	// (0x000036c2) list_setting_number_pane_vc_g1

0x1835,	// (0x000036ce) list_setting_number_pane_vc_g2_ParamLimits

0x1835,	// (0x000036ce) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00011667) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00011667) list_setting_number_pane_vc_g

0x1841,	// (0x000036da) list_setting_number_pane_vc_t1_ParamLimits

0x1841,	// (0x000036da) list_setting_number_pane_vc_t1

0x1855,	// (0x000036ee) list_setting_number_pane_vc_t2_ParamLimits

0x1855,	// (0x000036ee) list_setting_number_pane_vc_t2

0x1871,	// (0x0000370a) list_setting_number_pane_vc_t3_ParamLimits

0x1871,	// (0x0000370a) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x0001166c) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x0001166c) list_setting_number_pane_vc_t

0x189d,	// (0x00003736) set_value_pane_vc_ParamLimits

0x189d,	// (0x00003736) set_value_pane_vc

0x3139,	// (0x00004fd2) list_double2_graphic_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_double2_graphic_pane_vc

0x3139,	// (0x00004fd2) list_double2_large_graphic_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_double2_large_graphic_pane_vc

0x3139,	// (0x00004fd2) list_double2_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_double2_pane_vc

0x3139,	// (0x00004fd2) list_double_graphic_heading_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_double_graphic_heading_pane_vc

0x3139,	// (0x00004fd2) list_double_graphic_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_double_graphic_pane_vc

0x3139,	// (0x00004fd2) list_double_heading_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_double_heading_pane_vc

0x314b,	// (0x00004fe4) list_double_large_graphic_pane_vc_ParamLimits

0x314b,	// (0x00004fe4) list_double_large_graphic_pane_vc

0x3139,	// (0x00004fd2) list_double_number_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_double_number_pane_vc

0x3139,	// (0x00004fd2) list_double_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_double_pane_vc

0x3139,	// (0x00004fd2) list_double_time_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_double_time_pane_vc

0x3139,	// (0x00004fd2) list_setting_number_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_setting_number_pane_vc

0x3139,	// (0x00004fd2) list_setting_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_setting_pane_vc

0x3139,	// (0x00004fd2) list_single_graphic_heading_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_single_graphic_heading_pane_vc

0x3139,	// (0x00004fd2) list_single_heading_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_single_heading_pane_vc

0x3139,	// (0x00004fd2) list_single_number_heading_pane_vc_ParamLimits

0x3139,	// (0x00004fd2) list_single_number_heading_pane_vc

0x37f7,	// (0x00005690) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x37f7,	// (0x00005690) list_double_graphic_heading_pane_vc_g1

0xece1,	// (0x00010b7a) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xece1,	// (0x00010b7a) list_double_graphic_heading_pane_vc_g2

0xeced,	// (0x00010b86) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xeced,	// (0x00010b86) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9d8,	// (0x00011871) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9d8,	// (0x00011871) list_double_graphic_heading_pane_vc_g

0x3803,	// (0x0000569c) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3803,	// (0x0000569c) list_double_graphic_heading_pane_vc_t1

0x3817,	// (0x000056b0) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3817,	// (0x000056b0) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9df,	// (0x00011878) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9df,	// (0x00011878) list_double_graphic_heading_pane_vc_t

0x1829,	// (0x000036c2) list_setting_pane_vc_g1_ParamLimits

0x1829,	// (0x000036c2) list_setting_pane_vc_g1

0x1835,	// (0x000036ce) list_setting_pane_vc_g2_ParamLimits

0x1835,	// (0x000036ce) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00011667) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00011667) list_setting_pane_vc_g

0x3a80,	// (0x00005919) list_setting_pane_vc_t1_ParamLimits

0x3a80,	// (0x00005919) list_setting_pane_vc_t1

0x3a9c,	// (0x00005935) list_setting_pane_vc_t2_ParamLimits

0x3a9c,	// (0x00005935) list_setting_pane_vc_t2

0x0001,

0xfa22,	// (0x000118bb) list_setting_pane_vc_t_ParamLimits

0xfa22,	// (0x000118bb) list_setting_pane_vc_t

0x189d,	// (0x00003736) set_value_pane_cp_vc_ParamLimits

0x189d,	// (0x00003736) set_value_pane_cp_vc

0xece1,	// (0x00010b7a) list_single_number_heading_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b7a) list_single_number_heading_pane_vc_g1

0xeced,	// (0x00010b86) list_single_number_heading_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b86) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011461) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011461) list_single_number_heading_pane_vc_g

0x3ab6,	// (0x0000594f) list_single_number_heading_pane_vc_t1_ParamLimits

0x3ab6,	// (0x0000594f) list_single_number_heading_pane_vc_t1

0x3acc,	// (0x00005965) list_single_number_heading_pane_vc_t2_ParamLimits

0x3acc,	// (0x00005965) list_single_number_heading_pane_vc_t2

0x3ade,	// (0x00005977) list_single_number_heading_pane_vc_t3_ParamLimits

0x3ade,	// (0x00005977) list_single_number_heading_pane_vc_t3

0x0002,

0xfa27,	// (0x000118c0) list_single_number_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x000118c0) list_single_number_heading_pane_vc_t

0x3af0,	// (0x00005989) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3af0,	// (0x00005989) list_single_graphic_heading_pane_vc_g1

0xece1,	// (0x00010b7a) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xece1,	// (0x00010b7a) list_single_graphic_heading_pane_vc_g4

0xeced,	// (0x00010b86) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xeced,	// (0x00010b86) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa2e,	// (0x000118c7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa2e,	// (0x000118c7) list_single_graphic_heading_pane_vc_g

0x3afc,	// (0x00005995) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3afc,	// (0x00005995) list_single_graphic_heading_pane_vc_t1

0x3b12,	// (0x000059ab) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3b12,	// (0x000059ab) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x000118ce) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x000118ce) list_single_graphic_heading_pane_vc_t

0xece1,	// (0x00010b7a) list_double2_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b7a) list_double2_pane_vc_g1

0xeced,	// (0x00010b86) list_double2_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b86) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011461) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011461) list_double2_pane_vc_g

0x3b24,	// (0x000059bd) list_double2_pane_vc_t1_ParamLimits

0x3b24,	// (0x000059bd) list_double2_pane_vc_t1

0x3b3c,	// (0x000059d5) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3b3c,	// (0x000059d5) list_double2_large_graphic_pane_vc_g1

0xece1,	// (0x00010b7a) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xece1,	// (0x00010b7a) list_double2_large_graphic_pane_vc_g2

0xeced,	// (0x00010b86) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xeced,	// (0x00010b86) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001147e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001147e) list_double2_large_graphic_pane_vc_g

0x16f0,	// (0x00003589) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x16f0,	// (0x00003589) list_double2_large_graphic_pane_vc_t1

0x3b48,	// (0x000059e1) list_double_time_pane_vc_g1_ParamLimits

0x3b48,	// (0x000059e1) list_double_time_pane_vc_g1

0x3b54,	// (0x000059ed) list_double_time_pane_vc_g2_ParamLimits

0x3b54,	// (0x000059ed) list_double_time_pane_vc_g2

0x0001,

0xfa3a,	// (0x000118d3) list_double_time_pane_vc_g_ParamLimits

0xfa3a,	// (0x000118d3) list_double_time_pane_vc_g

0x3b60,	// (0x000059f9) list_double_time_pane_vc_t1_ParamLimits

0x3b60,	// (0x000059f9) list_double_time_pane_vc_t1

0x3b84,	// (0x00005a1d) list_double_time_pane_vc_t2_ParamLimits

0x3b84,	// (0x00005a1d) list_double_time_pane_vc_t2

0x3bb3,	// (0x00005a4c) list_double_time_pane_vc_t3_ParamLimits

0x3bb3,	// (0x00005a4c) list_double_time_pane_vc_t3

0x3bc5,	// (0x00005a5e) list_double_time_pane_vc_t4_ParamLimits

0x3bc5,	// (0x00005a5e) list_double_time_pane_vc_t4

0x0003,

0xfa3f,	// (0x000118d8) list_double_time_pane_vc_t_ParamLimits

0xfa3f,	// (0x000118d8) list_double_time_pane_vc_t

0xece1,	// (0x00010b7a) list_double_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b7a) list_double_pane_vc_g1

0xeced,	// (0x00010b86) list_double_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b86) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011461) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011461) list_double_pane_vc_g

0x3bd9,	// (0x00005a72) list_double_pane_vc_t1_ParamLimits

0x3bd9,	// (0x00005a72) list_double_pane_vc_t1

0x3bed,	// (0x00005a86) list_double_pane_vc_t2_ParamLimits

0x3bed,	// (0x00005a86) list_double_pane_vc_t2

0x0001,

0xfa48,	// (0x000118e1) list_double_pane_vc_t_ParamLimits

0xfa48,	// (0x000118e1) list_double_pane_vc_t

0xece1,	// (0x00010b7a) list_double_number_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b7a) list_double_number_pane_vc_g1

0xeced,	// (0x00010b86) list_double_number_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b86) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011461) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011461) list_double_number_pane_vc_g

0x3c05,	// (0x00005a9e) list_double_number_pane_vc_t1_ParamLimits

0x3c05,	// (0x00005a9e) list_double_number_pane_vc_t1

0x3bd9,	// (0x00005a72) list_double_number_pane_vc_t2_ParamLimits

0x3bd9,	// (0x00005a72) list_double_number_pane_vc_t2

0x3c17,	// (0x00005ab0) list_double_number_pane_vc_t3_ParamLimits

0x3c17,	// (0x00005ab0) list_double_number_pane_vc_t3

0x0002,

0xfa4d,	// (0x000118e6) list_double_number_pane_vc_t_ParamLimits

0xfa4d,	// (0x000118e6) list_double_number_pane_vc_t

0x3c2f,	// (0x00005ac8) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3c2f,	// (0x00005ac8) list_double_large_graphic_pane_vc_g1

0x3c51,	// (0x00005aea) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3c51,	// (0x00005aea) list_double_large_graphic_pane_vc_g2

0x3c65,	// (0x00005afe) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3c65,	// (0x00005afe) list_double_large_graphic_pane_vc_g3

0x3c74,	// (0x00005b0d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3c74,	// (0x00005b0d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa54,	// (0x000118ed) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x000118ed) list_double_large_graphic_pane_vc_g

0x3c80,	// (0x00005b19) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3c80,	// (0x00005b19) list_double_large_graphic_pane_vc_t1

0x3c9c,	// (0x00005b35) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3c9c,	// (0x00005b35) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5d,	// (0x000118f6) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5d,	// (0x000118f6) list_double_large_graphic_pane_vc_t

0xece1,	// (0x00010b7a) list_double_heading_pane_vc_g1_ParamLimits

0xece1,	// (0x00010b7a) list_double_heading_pane_vc_g1

0xeced,	// (0x00010b86) list_double_heading_pane_vc_g2_ParamLimits

0xeced,	// (0x00010b86) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00011461) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00011461) list_double_heading_pane_vc_g

0x3cbe,	// (0x00005b57) list_double_heading_pane_vc_t1_ParamLimits

0x3cbe,	// (0x00005b57) list_double_heading_pane_vc_t1

0x3cd2,	// (0x00005b6b) list_double_heading_pane_vc_t2_ParamLimits

0x3cd2,	// (0x00005b6b) list_double_heading_pane_vc_t2

0x0001,

0xfa62,	// (0x000118fb) list_double_heading_pane_vc_t_ParamLimits

0xfa62,	// (0x000118fb) list_double_heading_pane_vc_t

0x3cea,	// (0x00005b83) list_double_graphic_pane_vc_g1_ParamLimits

0x3cea,	// (0x00005b83) list_double_graphic_pane_vc_g1

0x3cfd,	// (0x00005b96) list_double_graphic_pane_vc_g2_ParamLimits

0x3cfd,	// (0x00005b96) list_double_graphic_pane_vc_g2

0xece1,	// (0x00010b7a) list_double_graphic_pane_vc_g3_ParamLimits

0xece1,	// (0x00010b7a) list_double_graphic_pane_vc_g3

0x0003,

0xfa67,	// (0x00011900) list_double_graphic_pane_vc_g_ParamLimits

0xfa67,	// (0x00011900) list_double_graphic_pane_vc_g

0x3d1a,	// (0x00005bb3) list_double_graphic_pane_vc_t1_ParamLimits

0x3d1a,	// (0x00005bb3) list_double_graphic_pane_vc_t1

0x3d39,	// (0x00005bd2) list_double_graphic_pane_vc_t2_ParamLimits

0x3d39,	// (0x00005bd2) list_double_graphic_pane_vc_t2

0x0001,

0xfa70,	// (0x00011909) list_double_graphic_pane_vc_t_ParamLimits

0xfa70,	// (0x00011909) list_double_graphic_pane_vc_t

0xe792,	// (0x0001062b) aid_size_cell_fastswap

0x95dc,	// (0x0000b475) aid_size_cell_touch_ParamLimits

0x95dc,	// (0x0000b475) aid_size_cell_touch

0xe8f3,	// (0x0001078c) popup_fast_swap_wide_window_ParamLimits

0xe8f3,	// (0x0001078c) popup_fast_swap_wide_window

0x97ac,	// (0x0000b645) touch_pane_ParamLimits

0x97ac,	// (0x0000b645) touch_pane

0xed70,	// (0x00010c09) button_value_adjust_pane_cp2

0xed78,	// (0x00010c11) button_value_adjust_pane_cp4

0xed80,	// (0x00010c19) form_field_data_pane_cp2

0xa1d5,	// (0x0000c06e) form_field_data_wide_pane_cp2

0xf29a,	// (0x00011133) bg_scroll_pane_ParamLimits

0xa50b,	// (0x0000c3a4) scroll_handle_pane_ParamLimits

0xf2b9,	// (0x00011152) scroll_sc2_down_pane_ParamLimits

0xf2b9,	// (0x00011152) scroll_sc2_down_pane

0xf2e0,	// (0x00011179) scroll_sc2_up_pane_ParamLimits

0xf2e0,	// (0x00011179) scroll_sc2_up_pane

0xc434,	// (0x0000e2cd) grid_wheel_folder_pane_g1_ParamLimits

0xc434,	// (0x0000e2cd) grid_wheel_folder_pane_g1

0x02dc,	// (0x00002175) clock_nsta_pane_cp2_ParamLimits

0x02dc,	// (0x00002175) clock_nsta_pane_cp2

0xa82a,	// (0x0000c6c3) listscroll_midp_pane_ParamLimits

0xa836,	// (0x0000c6cf) midp_canvas_pane

0x0b7a,	// (0x00002a13) nsta_clock_indic_pane

0x0bd8,	// (0x00002a71) listscroll_form_pane_vc

0x0bfc,	// (0x00002a95) listscroll_set_pane_vc_ParamLimits

0x0bfc,	// (0x00002a95) listscroll_set_pane_vc

0xb41a,	// (0x0000d2b3) clock_nsta_pane

0xb444,	// (0x0000d2dd) indicator_nsta_pane

0x164e,	// (0x000034e7) bg_popup_sub_pane_cp2_ParamLimits

0x1662,	// (0x000034fb) find_pane_cp2_ParamLimits

0x1662,	// (0x000034fb) find_pane_cp2

0x1678,	// (0x00003511) grid_toobar_pane_ParamLimits

0x18ad,	// (0x00003746) list_form_gen_pane_vc_ParamLimits

0x18ad,	// (0x00003746) list_form_gen_pane_vc

0x18c3,	// (0x0000375c) scroll_pane_cp8_vc_ParamLimits

0x18c3,	// (0x0000375c) scroll_pane_cp8_vc

0x19dc,	// (0x00003875) data_form_wide_pane_vc_ParamLimits

0x19dc,	// (0x00003875) data_form_wide_pane_vc

0x19e8,	// (0x00003881) form_field_data_wide_pane_vc_g1

0x19f0,	// (0x00003889) form_field_data_wide_pane_vc_t1_ParamLimits

0x19f0,	// (0x00003889) form_field_data_wide_pane_vc_t1

0xeda7,	// (0x00010c40) input_focus_pane_cp6_vc_ParamLimits

0xeda7,	// (0x00010c40) input_focus_pane_cp6_vc

0x1d7e,	// (0x00003c17) list_midp_pane_ParamLimits

0x339e,	// (0x00005237) scroll_pane_cp16_ParamLimits

0x339e,	// (0x00005237) scroll_pane_cp16

0x1dc0,	// (0x00003c59) button_value_adjust_pane_ParamLimits

0x1dc0,	// (0x00003c59) button_value_adjust_pane

0xbf6b,	// (0x0000de04) button_value_adjust_pane_cp6_ParamLimits

0xbf6b,	// (0x0000de04) button_value_adjust_pane_cp6

0xc085,	// (0x0000df1e) settings_code_pane_cp_ParamLimits

0xc085,	// (0x0000df1e) settings_code_pane_cp

0xe770,	// (0x00010609) cell_touch_pane_g1

0xe770,	// (0x00010609) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x0001158d) cell_touch_pane_g

0xc311,	// (0x0000e1aa) cell_touch_pane_cp_ParamLimits

0xc311,	// (0x0000e1aa) cell_touch_pane_cp

0xc32d,	// (0x0000e1c6) cell_touch_pane_ParamLimits

0xc32d,	// (0x0000e1c6) cell_touch_pane

0xe770,	// (0x00010609) scroll_sc2_down_pane_g1

0xe770,	// (0x00010609) scroll_sc2_up_pane_g1

0xe8e9,	// (0x00010782) bg_set_opt_pane_cp4_vc

0x382f,	// (0x000056c8) list_set_graphic_pane_vc_g1_ParamLimits

0x382f,	// (0x000056c8) list_set_graphic_pane_vc_g1

0x383b,	// (0x000056d4) list_set_graphic_pane_vc_g2_ParamLimits

0x383b,	// (0x000056d4) list_set_graphic_pane_vc_g2

0x0001,

0xf9e4,	// (0x0001187d) list_set_graphic_pane_vc_g_ParamLimits

0xf9e4,	// (0x0001187d) list_set_graphic_pane_vc_g

0x3847,	// (0x000056e0) text_primary_small_cp13_vc_ParamLimits

0x3847,	// (0x000056e0) text_primary_small_cp13_vc

0x385f,	// (0x000056f8) list_set_graphic_pane_vc_ParamLimits

0x385f,	// (0x000056f8) list_set_graphic_pane_vc

0xe8e9,	// (0x00010782) input_focus_pane_cp2_vc

0xe770,	// (0x00010609) setting_code_pane_vc_g1

0xe97c,	// (0x00010815) setting_code_pane_vc_t1

0x3872,	// (0x0000570b) set_text_pane_vc_t1_ParamLimits

0x3872,	// (0x0000570b) set_text_pane_vc_t1

0xe8e9,	// (0x00010782) input_focus_pane_cp1_vc

0x388e,	// (0x00005727) list_set_text_pane_vc

0xe770,	// (0x00010609) setting_text_pane_vc_g1

0xe8e9,	// (0x00010782) bg_set_opt_pane_cp2_vc

0xe973,	// (0x0001080c) setting_slider_graphic_pane_vc_g1

0x3898,	// (0x00005731) setting_slider_graphic_pane_vc_t1

0x38a8,	// (0x00005741) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e9,	// (0x00011882) setting_slider_graphic_pane_vc_t

0x38b8,	// (0x00005751) slider_set_pane_cp_vc

0x38c0,	// (0x00005759) slider_set_pane_vc_g1

0x38c9,	// (0x00005762) slider_set_pane_vc_g2

0x0006,

0xf9ee,	// (0x00011887) slider_set_pane_vc_g

0xee61,	// (0x00010cfa) set_opt_bg_pane_g1_copy1

0xee69,	// (0x00010d02) set_opt_bg_pane_g2_copy1

0x38f5,	// (0x0000578e) set_opt_bg_pane_g3_copy1

0xee79,	// (0x00010d12) set_opt_bg_pane_g4_copy1

0xee81,	// (0x00010d1a) set_opt_bg_pane_g5_copy1

0xee89,	// (0x00010d22) set_opt_bg_pane_g6_copy1

0x38fd,	// (0x00005796) set_opt_bg_pane_g7_copy1

0x3905,	// (0x0000579e) set_opt_bg_pane_g8_copy1

0x390d,	// (0x000057a6) set_opt_bg_pane_g9_copy1

0xe8e9,	// (0x00010782) bg_set_opt_pane_cp_vc

0x3915,	// (0x000057ae) setting_slider_pane_vc_t1

0x3924,	// (0x000057bd) setting_slider_pane_vc_t2

0x3934,	// (0x000057cd) setting_slider_pane_vc_t3

0x0002,

0xf9fd,	// (0x00011896) setting_slider_pane_vc_t

0x3944,	// (0x000057dd) slider_set_pane_vc

0x25e1,	// (0x0000447a) volume_set_pane_vc_g1

0x394c,	// (0x000057e5) volume_set_pane_vc_g2

0x3955,	// (0x000057ee) volume_set_pane_vc_g3

0x395e,	// (0x000057f7) volume_set_pane_vc_g4

0x3967,	// (0x00005800) volume_set_pane_vc_g5

0x3970,	// (0x00005809) volume_set_pane_vc_g6

0x3979,	// (0x00005812) volume_set_pane_vc_g7

0x3982,	// (0x0000581b) volume_set_pane_vc_g8

0x398b,	// (0x00005824) volume_set_pane_vc_g9

0x3994,	// (0x0000582d) volume_set_pane_vc_g10

0x0009,

0xfa04,	// (0x0001189d) volume_set_pane_vc_g

0x399d,	// (0x00005836) volume_set_pane_vc

0x39a5,	// (0x0000583e) button_value_adjust_pane_cp1_vc

0x39af,	// (0x00005848) list_highlight_pane_cp2_vc

0x39b8,	// (0x00005851) list_set_pane_vc_ParamLimits

0x39b8,	// (0x00005851) list_set_pane_vc

0x3a16,	// (0x000058af) main_pane_set_vc_t1_ParamLimits

0x3a16,	// (0x000058af) main_pane_set_vc_t1

0x3a2b,	// (0x000058c4) main_pane_set_vc_t2_ParamLimits

0x3a2b,	// (0x000058c4) main_pane_set_vc_t2

0x3a3d,	// (0x000058d6) main_pane_set_vc_t3_ParamLimits

0x3a3d,	// (0x000058d6) main_pane_set_vc_t3

0x3a4f,	// (0x000058e8) main_pane_set_vc_t4_ParamLimits

0x3a4f,	// (0x000058e8) main_pane_set_vc_t4

0x0003,

0xfa19,	// (0x000118b2) main_pane_set_vc_t_ParamLimits

0xfa19,	// (0x000118b2) main_pane_set_vc_t

0x3a61,	// (0x000058fa) setting_code_pane_vc_ParamLimits

0x3a61,	// (0x000058fa) setting_code_pane_vc

0x3a70,	// (0x00005909) setting_slider_graphic_pane_vc

0x3a70,	// (0x00005909) setting_slider_pane_vc

0x3a70,	// (0x00005909) setting_text_pane_vc

0x3a70,	// (0x00005909) setting_volume_pane_vc

0x3a78,	// (0x00005911) scroll_pane_cp121_vc

0xed5e,	// (0x00010bf7) set_content_pane_vc

0x3d63,	// (0x00005bfc) button_value_adjust_pane_g1

0x3d6c,	// (0x00005c05) button_value_adjust_pane_g2

0x0001,

0xfa75,	// (0x0001190e) button_value_adjust_pane_g

0x3d75,	// (0x00005c0e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3d75,	// (0x00005c0e) form_field_slider_wide_pane_vc_t1

0x3d89,	// (0x00005c22) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3d89,	// (0x00005c22) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7a,	// (0x00011913) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7a,	// (0x00011913) form_field_slider_wide_pane_vc_t

0xe957,	// (0x000107f0) input_focus_pane_cp10_vc_ParamLimits

0xe957,	// (0x000107f0) input_focus_pane_cp10_vc

0x3db7,	// (0x00005c50) slider_cont_pane_cp1_vc_ParamLimits

0x3db7,	// (0x00005c50) slider_cont_pane_cp1_vc

0x3dc9,	// (0x00005c62) slider_form_pane_g1_cp2

0x38c9,	// (0x00005762) slider_form_pane_g2_cp2

0x3df6,	// (0x00005c8f) form_field_slider_pane_vc_t3

0x3e04,	// (0x00005c9d) form_field_slider_pane_vc_t4

0x3e12,	// (0x00005cab) slider_form_pane_vc_ParamLimits

0x3e12,	// (0x00005cab) slider_form_pane_vc

0x3e1f,	// (0x00005cb8) form_field_slider_pane_vc_t1_ParamLimits

0x3e1f,	// (0x00005cb8) form_field_slider_pane_vc_t1

0x3d89,	// (0x00005c22) form_field_slider_pane_vc_t2_ParamLimits

0x3d89,	// (0x00005c22) form_field_slider_pane_vc_t2

0x0001,

0xfa8c,	// (0x00011925) form_field_slider_pane_vc_t_ParamLimits

0xfa8c,	// (0x00011925) form_field_slider_pane_vc_t

0xe957,	// (0x000107f0) input_focus_pane_cp9_vc_ParamLimits

0xe957,	// (0x000107f0) input_focus_pane_cp9_vc

0x3e3b,	// (0x00005cd4) slider_cont_pane_vc_ParamLimits

0x3e3b,	// (0x00005cd4) slider_cont_pane_vc

0x3e4f,	// (0x00005ce8) list_form_graphic_pane_cp_vc_ParamLimits

0x3e4f,	// (0x00005ce8) list_form_graphic_pane_cp_vc

0x19e8,	// (0x00003881) form_field_popup_wide_pane_vc_g1

0x3e64,	// (0x00005cfd) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3e64,	// (0x00005cfd) form_field_popup_wide_pane_vc_t1

0xeda7,	// (0x00010c40) input_focus_pane_cp8_vc_ParamLimits

0xeda7,	// (0x00010c40) input_focus_pane_cp8_vc

0x3ea9,	// (0x00005d42) list_form_wide_pane_vc_ParamLimits

0x3ea9,	// (0x00005d42) list_form_wide_pane_vc

0x3eb5,	// (0x00005d4e) list_form_graphic_pane_vc_g1

0x3ebd,	// (0x00005d56) list_form_graphic_pane_vc_t1_ParamLimits

0x3ebd,	// (0x00005d56) list_form_graphic_pane_vc_t1

0xe965,	// (0x000107fe) list_highlight_pane_cp5_vc_ParamLimits

0xe965,	// (0x000107fe) list_highlight_pane_cp5_vc

0x3ed9,	// (0x00005d72) list_form_graphic_pane_vc_ParamLimits

0x3ed9,	// (0x00005d72) list_form_graphic_pane_vc

0x19e8,	// (0x00003881) form_field_popup_pane_vc_g1

0x3eef,	// (0x00005d88) form_field_popup_pane_vc_t1_ParamLimits

0x3eef,	// (0x00005d88) form_field_popup_pane_vc_t1

0xeda7,	// (0x00010c40) input_focus_pane_cp7_vc_ParamLimits

0xeda7,	// (0x00010c40) input_focus_pane_cp7_vc

0x3f06,	// (0x00005d9f) list_form_pane_vc_ParamLimits

0x3f06,	// (0x00005d9f) list_form_pane_vc

0x3f12,	// (0x00005dab) data_form_pane_vc_t1_ParamLimits

0x3f12,	// (0x00005dab) data_form_pane_vc_t1

0xee61,	// (0x00010cfa) input_focus_pane_vc_g1

0xee69,	// (0x00010d02) input_focus_pane_vc_g2

0xee71,	// (0x00010d0a) input_focus_pane_vc_g3

0xee79,	// (0x00010d12) input_focus_pane_vc_g4

0xee81,	// (0x00010d1a) input_focus_pane_vc_g5

0xee89,	// (0x00010d22) input_focus_pane_vc_g6

0xee91,	// (0x00010d2a) input_focus_pane_vc_g7

0xee99,	// (0x00010d32) input_focus_pane_vc_g8

0xeea1,	// (0x00010d3a) input_focus_pane_vc_g9

0xe770,	// (0x00010609) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x00011516) input_focus_pane_vc_g

0x19dc,	// (0x00003875) data_form_pane_vc_ParamLimits

0x19dc,	// (0x00003875) data_form_pane_vc

0x19e8,	// (0x00003881) form_field_data_pane_vc_g1

0x3f2d,	// (0x00005dc6) form_field_data_pane_vc_t1_ParamLimits

0x3f2d,	// (0x00005dc6) form_field_data_pane_vc_t1

0xeda7,	// (0x00010c40) input_focus_pane_vc_ParamLimits

0xeda7,	// (0x00010c40) input_focus_pane_vc

0x3f47,	// (0x00005de0) button_value_adjust_pane_cp3_vc

0x3f4f,	// (0x00005de8) button_value_adjust_pane_cp5_vc

0x3f57,	// (0x00005df0) form_field_data_pane_vc_ParamLimits

0x3f57,	// (0x00005df0) form_field_data_pane_vc

0x3f6e,	// (0x00005e07) form_field_data_pane_vc_cp2

0x3f76,	// (0x00005e0f) form_field_data_wide_pane_vc_ParamLimits

0x3f76,	// (0x00005e0f) form_field_data_wide_pane_vc

0x3f8c,	// (0x00005e25) form_field_data_wide_pane_vc_cp2

0x3f94,	// (0x00005e2d) form_field_popup_pane_vc_ParamLimits

0x3f94,	// (0x00005e2d) form_field_popup_pane_vc

0x3fab,	// (0x00005e44) form_field_popup_wide_pane_vc_ParamLimits

0x3fab,	// (0x00005e44) form_field_popup_wide_pane_vc

0x3fc1,	// (0x00005e5a) form_field_slider_pane_vc_ParamLimits

0x3fc1,	// (0x00005e5a) form_field_slider_pane_vc

0x3fd4,	// (0x00005e6d) form_field_slider_wide_pane_vc_ParamLimits

0x3fd4,	// (0x00005e6d) form_field_slider_wide_pane_vc

0xc34a,	// (0x0000e1e3) grid_touch_1_pane_ParamLimits

0xc34a,	// (0x0000e1e3) grid_touch_1_pane

0xc35e,	// (0x0000e1f7) grid_touch_2_pane_ParamLimits

0xc35e,	// (0x0000e1f7) grid_touch_2_pane

0x40a2,	// (0x00005f3b) touch_pane_g1_ParamLimits

0x40a2,	// (0x00005f3b) touch_pane_g1

0x400b,	// (0x00005ea4) cell_app_pane_cp_wide_ParamLimits

0x400b,	// (0x00005ea4) cell_app_pane_cp_wide

0x401c,	// (0x00005eb5) grid_popup_fast_wide_pane_ParamLimits

0x401c,	// (0x00005eb5) grid_popup_fast_wide_pane

0x4030,	// (0x00005ec9) scroll_pane_cp19_ParamLimits

0x4030,	// (0x00005ec9) scroll_pane_cp19

0xe8e9,	// (0x00010782) bg_popup_window_pane_cp20

0x4044,	// (0x00005edd) listscroll_popup_fast_wide_pane

0xef38,	// (0x00010dd1) grid_indicator_nsta_pane

0x404c,	// (0x00005ee5) clock_nsta_pane_g1

0x4055,	// (0x00005eee) clock_nsta_pane_t1

0xc388,	// (0x0000e221) cell_indicator_nsta_pane_ParamLimits

0xc388,	// (0x0000e221) cell_indicator_nsta_pane

0x40a2,	// (0x00005f3b) cell_indicator_nsta_pane_g1

0xc39f,	// (0x0000e238) cell_indicator_nsta_pane_g2

0x0001,

0xfa9d,	// (0x00011936) cell_indicator_nsta_pane_g

0x40bd,	// (0x00005f56) clock_nsta_pane_cp

0x40c5,	// (0x00005f5e) indicator_nsta_pane_cp

0x40cd,	// (0x00005f66) nsta_clock_indic_pane_g1

0xe9bb,	// (0x00010854) grid_indicator_pane

0xa5a5,	// (0x0000c43e) scroll_pane_cp29

0x0209,	// (0x000020a2) indicator_nsta_pane_cp2_ParamLimits

0x0209,	// (0x000020a2) indicator_nsta_pane_cp2

0xe965,	// (0x000107fe) main_apps_wheel_pane

0xb8cb,	// (0x0000d764) form_midp_field_text_pane_ParamLimits

0x1d8a,	// (0x00003c23) scroll_bar_cp050_ParamLimits

0x411d,	// (0x00005fb6) cell_indicator_pane_ParamLimits

0x411d,	// (0x00005fb6) cell_indicator_pane

0x4136,	// (0x00005fcf) cell_indicator_pane_g1

0xc3be,	// (0x0000e257) grid_wheel_folder_pane_ParamLimits

0xc3be,	// (0x0000e257) grid_wheel_folder_pane

0xc3cc,	// (0x0000e265) list_wheel_apps_pane_ParamLimits

0xc3cc,	// (0x0000e265) list_wheel_apps_pane

0xc3da,	// (0x0000e273) main_apps_wheel_pane_g1_ParamLimits

0xc3da,	// (0x0000e273) main_apps_wheel_pane_g1

0xc3e6,	// (0x0000e27f) main_apps_wheel_pane_g2_ParamLimits

0xc3e6,	// (0x0000e27f) main_apps_wheel_pane_g2

0x0001,

0xfab9,	// (0x00011952) main_apps_wheel_pane_g_ParamLimits

0xfab9,	// (0x00011952) main_apps_wheel_pane_g

0xc3f4,	// (0x0000e28d) main_apps_wheel_pane_t1_ParamLimits

0xc3f4,	// (0x0000e28d) main_apps_wheel_pane_t1

0xc408,	// (0x0000e2a1) list_wheel_apps_pane_g1

0xc410,	// (0x0000e2a9) list_wheel_apps_pane_g2

0xc418,	// (0x0000e2b1) list_wheel_apps_pane_g3

0xc420,	// (0x0000e2b9) list_wheel_apps_pane_g4

0xc42a,	// (0x0000e2c3) list_wheel_apps_pane_g5

0x0004,

0xfabe,	// (0x00011957) list_wheel_apps_pane_g

0x0505,	// (0x0000239e) navi_icon_text_pane

0xb30e,	// (0x0000d1a7) aid_fill_nsta

0x41fd,	// (0x00006096) navi_icon_text_pane_g1

0x4209,	// (0x000060a2) navi_icon_text_pane_t1

0x03a8,	// (0x00002241) list_set_graphic_pane_t1_ParamLimits

0x03a8,	// (0x00002241) list_set_graphic_pane_t1

0x24c1,	// (0x0000435a) popup_midp_note_alarm_window_t6_ParamLimits

0x24c1,	// (0x0000435a) popup_midp_note_alarm_window_t6

0x24d3,	// (0x0000436c) popup_midp_note_alarm_window_t7_ParamLimits

0x24d3,	// (0x0000436c) popup_midp_note_alarm_window_t7

0x24e5,	// (0x0000437e) popup_midp_note_alarm_window_t8_ParamLimits

0x24e5,	// (0x0000437e) popup_midp_note_alarm_window_t8

0x24f7,	// (0x00004390) popup_midp_note_alarm_window_t9_ParamLimits

0x24f7,	// (0x00004390) popup_midp_note_alarm_window_t9

0x2509,	// (0x000043a2) popup_midp_note_alarm_window_t10_ParamLimits

0x2509,	// (0x000043a2) popup_midp_note_alarm_window_t10

0x251b,	// (0x000043b4) popup_midp_note_alarm_window_t11_ParamLimits

0x251b,	// (0x000043b4) popup_midp_note_alarm_window_t11

0xbc17,	// (0x0000dab0) scroll_pane_cp17_ParamLimits

0xbc17,	// (0x0000dab0) scroll_pane_cp17

0x25e1,	// (0x0000447a) volume_small_pane_cp_g1

0x421b,	// (0x000060b4) volume_small_pane_cp_g2

0x4224,	// (0x000060bd) volume_small_pane_cp_g3

0x422d,	// (0x000060c6) volume_small_pane_cp_g4

0x4236,	// (0x000060cf) volume_small_pane_cp_g5

0x3967,	// (0x00005800) volume_small_pane_cp_g6

0x423f,	// (0x000060d8) volume_small_pane_cp_g7

0x4248,	// (0x000060e1) volume_small_pane_cp_g8

0x4251,	// (0x000060ea) volume_small_pane_cp_g9

0x425a,	// (0x000060f3) volume_small_pane_cp_g10

0x0766,	// (0x000025ff) midp_ticker_pane_g1_ParamLimits

0x0772,	// (0x0000260b) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x000115e2) midp_ticker_pane_g_ParamLimits

0x077e,	// (0x00002617) midp_ticker_pane_t1_ParamLimits

0xb332,	// (0x0000d1cb) aid_fill_nsta_2

0x1d76,	// (0x00003c0f) list_form2_midp_pane

0x30ec,	// (0x00004f85) midp_editing_number_pane_ParamLimits

0x30fb,	// (0x00004f94) midp_ticker_pane_ParamLimits

0x4263,	// (0x000060fc) form2_midp_field_pane

0x4287,	// (0x00006120) scroll_pane_cp51

0x42a7,	// (0x00006140) form2_midp_button_pane_ParamLimits

0x42a7,	// (0x00006140) form2_midp_button_pane

0x42b9,	// (0x00006152) form2_midp_content_pane_ParamLimits

0x42b9,	// (0x00006152) form2_midp_content_pane

0x42d3,	// (0x0000616c) form2_midp_field_choice_group_pane

0x42db,	// (0x00006174) form2_midp_field_pane_g1

0x42e3,	// (0x0000617c) form2_midp_field_pane_g2

0x42eb,	// (0x00006184) form2_midp_field_pane_g3

0x42f3,	// (0x0000618c) form2_midp_field_pane_g4

0x0003,

0xfae3,	// (0x0001197c) form2_midp_field_pane_g

0x42fb,	// (0x00006194) form2_midp_gauge_slider_pane

0x4303,	// (0x0000619c) form2_midp_gauge_wait_pane

0x430b,	// (0x000061a4) form2_midp_image_pane_ParamLimits

0x430b,	// (0x000061a4) form2_midp_image_pane

0xc45d,	// (0x0000e2f6) form2_midp_label_pane_ParamLimits

0xc45d,	// (0x0000e2f6) form2_midp_label_pane

0xc476,	// (0x0000e30f) form2_midp_label_pane_cp_ParamLimits

0xc476,	// (0x0000e30f) form2_midp_label_pane_cp

0x4360,	// (0x000061f9) form2_midp_string_pane_ParamLimits

0x4360,	// (0x000061f9) form2_midp_string_pane

0xc495,	// (0x0000e32e) form2_midp_text_pane_ParamLimits

0xc495,	// (0x0000e32e) form2_midp_text_pane

0x438d,	// (0x00006226) form2_midp_time_pane

0x439d,	// (0x00006236) input_focus_pane_cp51_ParamLimits

0x439d,	// (0x00006236) input_focus_pane_cp51

0xc4ae,	// (0x0000e347) form2_midp_label_pane_t1_ParamLimits

0xc4ae,	// (0x0000e347) form2_midp_label_pane_t1

0xc4ee,	// (0x0000e387) form2_mdip_text_pane_t1_ParamLimits

0xc4ee,	// (0x0000e387) form2_mdip_text_pane_t1

0x4415,	// (0x000062ae) form2_midp_time_pane_t1

0x4430,	// (0x000062c9) form2_midp_gauge_slider_pane_t1

0xc50a,	// (0x0000e3a3) form2_midp_gauge_slider_pane_t2

0xc51c,	// (0x0000e3b5) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaec,	// (0x00011985) form2_midp_gauge_slider_pane_t

0x4466,	// (0x000062ff) form2_midp_slider_pane

0x4472,	// (0x0000630b) form2_midp_gauge_wait_pane_t1

0x4480,	// (0x00006319) form2_midp_wait_pane_ParamLimits

0x4480,	// (0x00006319) form2_midp_wait_pane

0xb7f7,	// (0x0000d690) list_single_2graphic_pane_cp4_ParamLimits

0xb7f7,	// (0x0000d690) list_single_2graphic_pane_cp4

0xc52e,	// (0x0000e3c7) list_single_midp_graphic_pane_cp_ParamLimits

0xc52e,	// (0x0000e3c7) list_single_midp_graphic_pane_cp

0xe8e9,	// (0x00010782) list_highlight_pane_cp20

0x44d3,	// (0x0000636c) list_single_2graphic_pane_g1_cp4

0x36ca,	// (0x00005563) list_single_2graphic_pane_g2_cp4

0x44db,	// (0x00006374) list_single_2graphic_pane_t1_cp4

0xe965,	// (0x000107fe) list_highlight_pane_cp21

0x44ea,	// (0x00006383) list_single_midp_graphic_pane_g4_cp

0x44f9,	// (0x00006392) list_single_midp_graphic_pane_t1_cp

0xc54d,	// (0x0000e3e6) form2_mdip_string_pane_t1_ParamLimits

0xc54d,	// (0x0000e3e6) form2_mdip_string_pane_t1

0xe8e9,	// (0x00010782) bg_wml_button_pane_cp2

0xe770,	// (0x00010609) form2_midp_image_pane_g1

0xecf9,	// (0x00010b92) list_double_large_graphic_pane_g5_ParamLimits

0xecf9,	// (0x00010b92) list_double_large_graphic_pane_g5

0xa82a,	// (0x0000c6c3) midp_form_pane_ParamLimits

0xe965,	// (0x000107fe) main_apps_wheel_pane_ParamLimits

0xafec,	// (0x0000ce85) popup_preview_window_ParamLimits

0xafec,	// (0x0000ce85) popup_preview_window

0xb2b9,	// (0x0000d152) popup_touch_info_window_ParamLimits

0xb2b9,	// (0x0000d152) popup_touch_info_window

0xb2d7,	// (0x0000d170) popup_touch_menu_window_ParamLimits

0xb2d7,	// (0x0000d170) popup_touch_menu_window

0xe766,	// (0x000105ff) bg_popup_sub_pane_cp6

0x460f,	// (0x000064a8) list_touch_menu_pane

0xc5c1,	// (0x0000e45a) list_single_touch_menu_pane_ParamLimits

0xc5c1,	// (0x0000e45a) list_single_touch_menu_pane

0xc5d5,	// (0x0000e46e) list_single_touch_menu_pane_t1

0xe965,	// (0x000107fe) bg_popup_sub_pane_cp7_ParamLimits

0xe965,	// (0x000107fe) bg_popup_sub_pane_cp7

0x463b,	// (0x000064d4) heading_sub_pane

0x4643,	// (0x000064dc) list_touch_info_pane_ParamLimits

0x4643,	// (0x000064dc) list_touch_info_pane

0x4652,	// (0x000064eb) list_single_touch_info_pane_ParamLimits

0x4652,	// (0x000064eb) list_single_touch_info_pane

0x4664,	// (0x000064fd) list_single_touch_info_pane_t1

0x4672,	// (0x0000650b) list_single_touch_info_pane_t2

0x0001,

0xfafa,	// (0x00011993) list_single_touch_info_pane_t

0x0685,	// (0x0000251e) bg_popup_heading_pane_cp

0x4680,	// (0x00006519) heading_sub_pane_t1

0x18ee,	// (0x00003787) bg_popup_preview_window_pane_cp_ParamLimits

0x18ee,	// (0x00003787) bg_popup_preview_window_pane_cp

0x463b,	// (0x000064d4) heading_preview_pane

0x4643,	// (0x000064dc) list_preview_pane_ParamLimits

0x4643,	// (0x000064dc) list_preview_pane

0x468e,	// (0x00006527) popup_preview_window_g1

0x4652,	// (0x000064eb) list_single_preview_pane_ParamLimits

0x4652,	// (0x000064eb) list_single_preview_pane

0x4696,	// (0x0000652f) list_single_preview_pane_g1

0x469e,	// (0x00006537) list_single_preview_pane_t1

0x4664,	// (0x000064fd) list_single_preview_pane_t2

0x0001,

0xfaff,	// (0x00011998) list_single_preview_pane_t

0x46ac,	// (0x00006545) bg_popup_heading_pane_cp2_ParamLimits

0x46ac,	// (0x00006545) bg_popup_heading_pane_cp2

0x46c2,	// (0x0000655b) heading_preview_pane_g1

0x46ca,	// (0x00006563) heading_preview_pane_t1_ParamLimits

0x46ca,	// (0x00006563) heading_preview_pane_t1

0xe9d2,	// (0x0001086b) soft_indicator_pane_t1_ParamLimits

0xecad,	// (0x00010b46) scroll_pane_ParamLimits

0xf2ce,	// (0x00011167) scroll_sc2_left_pane

0xf2d7,	// (0x00011170) scroll_sc2_right_pane

0xf2f6,	// (0x0001118f) scroll_bg_pane_g1_ParamLimits

0xf30b,	// (0x000111a4) scroll_bg_pane_g2_ParamLimits

0xf323,	// (0x000111bc) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x0001156d) scroll_bg_pane_g_ParamLimits

0xf2f6,	// (0x0001118f) scroll_handle_pane_g1_ParamLimits

0xf338,	// (0x000111d1) scroll_handle_pane_g2_ParamLimits

0xf323,	// (0x000111bc) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x00011574) scroll_handle_pane_g_ParamLimits

0xab93,	// (0x0000ca2c) popup_choice_list_window_ParamLimits

0xab93,	// (0x0000ca2c) popup_choice_list_window

0x165a,	// (0x000034f3) choice_list_pane

0x172e,	// (0x000035c7) cell_toolbar_pane_t1

0x1756,	// (0x000035ef) toolbar_button_pane_ParamLimits

0x2b51,	// (0x000049ea) ai_gene_pane_1_t2_ParamLimits

0x2b51,	// (0x000049ea) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x00011790) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x00011790) ai_gene_pane_1_t

0x46e7,	// (0x00006580) scroll_sc2_left_pane_g1

0x46e7,	// (0x00006580) scroll_sc2_right_pane_g1

0x0c0e,	// (0x00002aa7) bg_popup_sub_pane_cp10

0x46f1,	// (0x0000658a) list_choice_list_pane

0xc5e3,	// (0x0000e47c) list_single_choice_list_pane_ParamLimits

0xc5e3,	// (0x0000e47c) list_single_choice_list_pane

0xef46,	// (0x00010ddf) list_single_choice_list_pane_g1

0xa3cf,	// (0x0000c268) list_single_choice_list_pane_t1_ParamLimits

0xa3cf,	// (0x0000c268) list_single_choice_list_pane_t1

0x4725,	// (0x000065be) choice_list_pane_g1

0xc5f7,	// (0x0000e490) choice_list_pane_t1

0xe766,	// (0x000105ff) input_focus_pane_cp11

0xf0e9,	// (0x00010f82) title_pane_stacon_g2_ParamLimits

0xf0e9,	// (0x00010f82) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x00011553) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00011553) title_pane_stacon_g

0x0685,	// (0x0000251e) cursor_press_pane

0xac3a,	// (0x0000cad3) popup_fep_hwr_window_ParamLimits

0xac3a,	// (0x0000cad3) popup_fep_hwr_window

0x0d5e,	// (0x00002bf7) popup_fep_vkb_window_ParamLimits

0x0d5e,	// (0x00002bf7) popup_fep_vkb_window

0xc605,	// (0x0000e49e) cursor_press_pane_g1

0x0002,

0xfb28,	// (0x000119c1) fep_vkb_side_pane_g_ParamLimits

0x477c,	// (0x00006615) fep_hwr_candidate_pane_ParamLimits

0x477c,	// (0x00006615) fep_hwr_candidate_pane

0x47a6,	// (0x0000663f) fep_hwr_side_pane_ParamLimits

0x47a6,	// (0x0000663f) fep_hwr_side_pane

0x47c6,	// (0x0000665f) fep_hwr_top_pane_ParamLimits

0x47c6,	// (0x0000665f) fep_hwr_top_pane

0x47de,	// (0x00006677) fep_hwr_write_pane_ParamLimits

0x47de,	// (0x00006677) fep_hwr_write_pane

0xfb28,	// (0x000119c1) fep_vkb_side_pane_g

0x4818,	// (0x000066b1) fep_hwr_top_pane_g1

0x482a,	// (0x000066c3) fep_hwr_top_pane_g2

0x483c,	// (0x000066d5) fep_hwr_top_pane_g3

0x0002,

0xfb04,	// (0x0001199d) fep_hwr_top_pane_g

0x4851,	// (0x000066ea) fep_hwr_top_text_pane

0xf403,	// (0x0001129c) fep_hwr_top_text_pane_g1

0x4929,	// (0x000067c2) fep_hwr_top_text_pane_t1

0x4979,	// (0x00006812) fep_hwr_candidate_pane_g1

0x4be4,	// (0x00006a7d) fep_vkb_keypad_pane_g3_ParamLimits

0x4be4,	// (0x00006a7d) fep_vkb_keypad_pane_g3

0x4c0c,	// (0x00006aa5) fep_vkb_keypad_pane_g4_ParamLimits

0x4c0c,	// (0x00006aa5) fep_vkb_keypad_pane_g4

0x4c7b,	// (0x00006b14) fep_vkb_bottom_pane_g2_ParamLimits

0x4c7b,	// (0x00006b14) fep_vkb_bottom_pane_g2

0x0001,

0xfb2f,	// (0x000119c8) fep_vkb_bottom_pane_g_ParamLimits

0xfb2f,	// (0x000119c8) fep_vkb_bottom_pane_g

0x46e7,	// (0x00006580) cell_vkb_side_pane_g2

0x0001,

0xfb39,	// (0x000119d2) cell_vkb_side_pane_g

0x4d06,	// (0x00006b9f) cell_vkb_side_pane_t1

0x4d14,	// (0x00006bad) cell_vkb_side_pane_t1_copy1

0x46e7,	// (0x00006580) bg_fep_vkb_candidate_pane_g2

0x4e40,	// (0x00006cd9) cell_vkb_candidate_pane_ParamLimits

0x49ad,	// (0x00006846) aid_size_cell_vkb_ParamLimits

0x49ad,	// (0x00006846) aid_size_cell_vkb

0x4e40,	// (0x00006cd9) cell_vkb_candidate_pane

0x4e74,	// (0x00006d0d) bg_popup_fep_shadow_pane_g1

0xc66c,	// (0x0000e505) fep_vkb_bottom_pane_ParamLimits

0xc66c,	// (0x0000e505) fep_vkb_bottom_pane

0x4a71,	// (0x0000690a) fep_vkb_candidate_pane_ParamLimits

0x4a71,	// (0x0000690a) fep_vkb_candidate_pane

0xc691,	// (0x0000e52a) fep_vkb_keypad_pane_ParamLimits

0xc691,	// (0x0000e52a) fep_vkb_keypad_pane

0xc6c6,	// (0x0000e55f) fep_vkb_side_pane_ParamLimits

0xc6c6,	// (0x0000e55f) fep_vkb_side_pane

0xc702,	// (0x0000e59b) fep_vkb_top_pane_ParamLimits

0xc702,	// (0x0000e59b) fep_vkb_top_pane

0x4b3d,	// (0x000069d6) fep_vkb_top_pane_g1_ParamLimits

0x4b3d,	// (0x000069d6) fep_vkb_top_pane_g1

0x4b4c,	// (0x000069e5) fep_vkb_top_pane_g2_ParamLimits

0x4b4c,	// (0x000069e5) fep_vkb_top_pane_g2

0x4b5b,	// (0x000069f4) fep_vkb_top_pane_g3_ParamLimits

0x4b5b,	// (0x000069f4) fep_vkb_top_pane_g3

0x0003,

0xfb1f,	// (0x000119b8) fep_vkb_top_pane_g_ParamLimits

0xfb1f,	// (0x000119b8) fep_vkb_top_pane_g

0x4b79,	// (0x00006a12) fep_vkb_top_text_pane_ParamLimits

0x4b79,	// (0x00006a12) fep_vkb_top_text_pane

0xc737,	// (0x0000e5d0) fep_vkb_side_pane_g1_ParamLimits

0xc737,	// (0x0000e5d0) fep_vkb_side_pane_g1

0x4bd3,	// (0x00006a6c) grid_vkb_side_pane_ParamLimits

0x4bd3,	// (0x00006a6c) grid_vkb_side_pane

0x4e7c,	// (0x00006d15) bg_popup_fep_shadow_pane_g2

0x4e85,	// (0x00006d1e) bg_popup_fep_shadow_pane_g3

0x4e8d,	// (0x00006d26) bg_popup_fep_shadow_pane_g4

0x4e96,	// (0x00006d2f) bg_popup_fep_shadow_pane_g5

0x4ea0,	// (0x00006d39) bg_popup_fep_shadow_pane_g6

0x4ea8,	// (0x00006d41) bg_popup_fep_shadow_pane_g7

0xee81,	// (0x00010d1a) bg_popup_fep_shadow_pane_g8

0x4c2a,	// (0x00006ac3) grid_vkb_keypad_number_pane_ParamLimits

0x4c2a,	// (0x00006ac3) grid_vkb_keypad_number_pane

0x4c3a,	// (0x00006ad3) grid_vkb_keypad_pane_ParamLimits

0x4c3a,	// (0x00006ad3) grid_vkb_keypad_pane

0x4c60,	// (0x00006af9) fep_vkb_bottom_pane_g1_ParamLimits

0x4c60,	// (0x00006af9) fep_vkb_bottom_pane_g1

0x4c89,	// (0x00006b22) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4c89,	// (0x00006b22) grid_vkb_keypad_bottom_left_pane

0x4c9e,	// (0x00006b37) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4c9e,	// (0x00006b37) grid_vkb_keypad_bottom_right_pane

0x4cb3,	// (0x00006b4c) fep_vkb_top_text_pane_g1

0xc77e,	// (0x0000e617) fep_vkb_top_text_pane_t1

0xc790,	// (0x0000e629) cell_vkb_side_pane_ParamLimits

0xc790,	// (0x0000e629) cell_vkb_side_pane

0x46e7,	// (0x00006580) cell_vkb_side_pane_g1

0x4d22,	// (0x00006bbb) cell_vkb_keypad_pane_ParamLimits

0x4d22,	// (0x00006bbb) cell_vkb_keypad_pane

0x4d97,	// (0x00006c30) cell_vkb_keypad_pane_g1

0x0008,

0xfb4c,	// (0x000119e5) bg_popup_fep_shadow_pane_g

0x46e7,	// (0x00006580) cell_hwr_side_pane_g1

0x46e7,	// (0x00006580) cell_hwr_side_pane_g2

0x4da1,	// (0x00006c3a) cell_vkb_keypad_pane_t1

0xc7a6,	// (0x0000e63f) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7a6,	// (0x0000e63f) cell_vkb_keypad_bottom_left_pane

0xc7bb,	// (0x0000e654) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc7bb,	// (0x0000e654) cell_vkb_keypad_bottom_right_pane

0x46e7,	// (0x00006580) cell_vkb_keypad_bottom_left_pane_g1

0x46e7,	// (0x00006580) cell_vkb_keypad_bottom_right_pane_g1

0x4e05,	// (0x00006c9e) cell_vkb_keypad_number_pane_ParamLimits

0x4e05,	// (0x00006c9e) cell_vkb_keypad_number_pane

0x4e24,	// (0x00006cbd) cell_vkb_keypad_number_pane_g1

0x4e2e,	// (0x00006cc7) cell_vkb_keypad_number_pane_g2

0x4e37,	// (0x00006cd0) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3e,	// (0x000119d7) cell_vkb_keypad_number_pane_g

0x4da1,	// (0x00006c3a) cell_vkb_keypad_number_pane_t1

0x4e5b,	// (0x00006cf4) fep_vkb_candidate_pane_g1

0x0001,

0xfb39,	// (0x000119d2) cell_hwr_side_pane_g

0x4eba,	// (0x00006d53) cell_hwr_side_pane_t1

0x4ec8,	// (0x00006d61) cell_hwr_side_pane_t1_copy1

0x4b6b,	// (0x00006a04) cell_hwr_candidate_pane_g1

0x4f18,	// (0x00006db1) cell_hwr_candidate_pane_t1

0x46e7,	// (0x00006580) cell_vkb_candidate_pane_g2

0x4f6c,	// (0x00006e05) cell_vkb_candidate_pane_t1

0x4743,	// (0x000065dc) bg_popup_fep_shadow_pane_ParamLimits

0x4743,	// (0x000065dc) bg_popup_fep_shadow_pane

0x47f8,	// (0x00006691) bg_fep_hwr_top_pane_g4

0x4866,	// (0x000066ff) bg_hwr_side_pane_g1_ParamLimits

0x4866,	// (0x000066ff) bg_hwr_side_pane_g1

0xc625,	// (0x0000e4be) cell_hwr_side_pane_ParamLimits

0xc625,	// (0x0000e4be) cell_hwr_side_pane

0x48d4,	// (0x0000676d) fep_hwr_write_pane_g1_ParamLimits

0x48d4,	// (0x0000676d) fep_hwr_write_pane_g1

0x48e1,	// (0x0000677a) fep_hwr_write_pane_g2_ParamLimits

0x48e1,	// (0x0000677a) fep_hwr_write_pane_g2

0x48ee,	// (0x00006787) fep_hwr_write_pane_g3_ParamLimits

0x48ee,	// (0x00006787) fep_hwr_write_pane_g3

0xc645,	// (0x0000e4de) fep_hwr_write_pane_g4_ParamLimits

0xc645,	// (0x0000e4de) fep_hwr_write_pane_g4

0x0005,

0xfb0b,	// (0x000119a4) fep_hwr_write_pane_g_ParamLimits

0xfb0b,	// (0x000119a4) fep_hwr_write_pane_g

0x47f8,	// (0x00006691) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x47f8,	// (0x00006691) bg_fep_hwr_candidate_pane_g2

0x4937,	// (0x000067d0) cell_hwr_candidate_pane_ParamLimits

0x4937,	// (0x000067d0) cell_hwr_candidate_pane

0x4979,	// (0x00006812) fep_hwr_candidate_pane_g1_ParamLimits

0x49db,	// (0x00006874) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x49db,	// (0x00006874) bg_popup_fep_shadow_pane_cp2

0x4b6b,	// (0x00006a04) fep_vkb_top_pane_g4_ParamLimits

0x4b6b,	// (0x00006a04) fep_vkb_top_pane_g4

0x4bb1,	// (0x00006a4a) fep_vkb_side_pane_g2_ParamLimits

0x4bb1,	// (0x00006a4a) fep_vkb_side_pane_g2

0xa0fa,	// (0x0000bf93) list_setting_pane_t4_ParamLimits

0xa0fa,	// (0x0000bf93) list_setting_pane_t4

0xa174,	// (0x0000c00d) list_setting_number_pane_t5_ParamLimits

0xa174,	// (0x0000c00d) list_setting_number_pane_t5

0xf459,	// (0x000112f2) list_double_heading_pane_cp2_ParamLimits

0xf459,	// (0x000112f2) list_double_heading_pane_cp2

0x4f7a,	// (0x00006e13) list_double_heading_pane_g1_cp2_ParamLimits

0x4f7a,	// (0x00006e13) list_double_heading_pane_g1_cp2

0x4f86,	// (0x00006e1f) list_double_heading_pane_g2_cp2_ParamLimits

0x4f86,	// (0x00006e1f) list_double_heading_pane_g2_cp2

0x4f9a,	// (0x00006e33) list_double_heading_pane_t1_cp2_ParamLimits

0x4f9a,	// (0x00006e33) list_double_heading_pane_t1_cp2

0x4fb0,	// (0x00006e49) list_double_heading_pane_t2_cp2_ParamLimits

0x4fb0,	// (0x00006e49) list_double_heading_pane_t2_cp2

0xe75e,	// (0x000105f7) aid_value_unit2

0xe909,	// (0x000107a2) popup_preview_fixed_window

0xeaa9,	// (0x00010942) bg_popup_preview_window_pane_cp02

0x4fc2,	// (0x00006e5b) list_preview_fixed_pane

0x5008,	// (0x00006ea1) list_empty_pane_fp_ParamLimits

0x5008,	// (0x00006ea1) list_empty_pane_fp

0x5008,	// (0x00006ea1) list_single_cale_day_pane_fp_ParamLimits

0x5008,	// (0x00006ea1) list_single_cale_day_pane_fp

0x5008,	// (0x00006ea1) list_single_graphic_heading_pane_fp_ParamLimits

0x5008,	// (0x00006ea1) list_single_graphic_heading_pane_fp

0x5008,	// (0x00006ea1) list_single_graphic_pane_fp_ParamLimits

0x5008,	// (0x00006ea1) list_single_graphic_pane_fp

0x5008,	// (0x00006ea1) list_single_heading_pane_fp_ParamLimits

0x5008,	// (0x00006ea1) list_single_heading_pane_fp

0x5008,	// (0x00006ea1) list_single_pane_fp_ParamLimits

0x5008,	// (0x00006ea1) list_single_pane_fp

0x501e,	// (0x00006eb7) list_single_pane_fp_g1_ParamLimits

0x501e,	// (0x00006eb7) list_single_pane_fp_g1

0x502a,	// (0x00006ec3) list_single_pane_fp_g2_ParamLimits

0x502a,	// (0x00006ec3) list_single_pane_fp_g2

0x5036,	// (0x00006ecf) list_single_pane_fp_g3_ParamLimits

0x5036,	// (0x00006ecf) list_single_pane_fp_g3

0x504a,	// (0x00006ee3) list_single_pane_fp_g4_ParamLimits

0x504a,	// (0x00006ee3) list_single_pane_fp_g4

0x0003,

0xfb6d,	// (0x00011a06) list_single_pane_fp_g_ParamLimits

0xfb6d,	// (0x00011a06) list_single_pane_fp_g

0x5056,	// (0x00006eef) list_single_pane_fp_t1_ParamLimits

0x5056,	// (0x00006eef) list_single_pane_fp_t1

0x506d,	// (0x00006f06) list_single_graphic_pane_fp_g1_ParamLimits

0x506d,	// (0x00006f06) list_single_graphic_pane_fp_g1

0x501e,	// (0x00006eb7) list_single_graphic_pane_fp_g2_ParamLimits

0x501e,	// (0x00006eb7) list_single_graphic_pane_fp_g2

0x502a,	// (0x00006ec3) list_single_graphic_pane_fp_g3_ParamLimits

0x502a,	// (0x00006ec3) list_single_graphic_pane_fp_g3

0x5036,	// (0x00006ecf) list_single_graphic_pane_fp_g4_ParamLimits

0x5036,	// (0x00006ecf) list_single_graphic_pane_fp_g4

0x504a,	// (0x00006ee3) list_single_graphic_pane_fp_g5_ParamLimits

0x504a,	// (0x00006ee3) list_single_graphic_pane_fp_g5

0x0004,

0xfb76,	// (0x00011a0f) list_single_graphic_pane_fp_g_ParamLimits

0xfb76,	// (0x00011a0f) list_single_graphic_pane_fp_g

0x5079,	// (0x00006f12) list_single_graphic_pane_fp_t1_ParamLimits

0x5079,	// (0x00006f12) list_single_graphic_pane_fp_t1

0x506d,	// (0x00006f06) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x506d,	// (0x00006f06) list_single_graphic_heading_pane_fp_g1

0x501e,	// (0x00006eb7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x501e,	// (0x00006eb7) list_single_graphic_heading_pane_fp_g2

0x502a,	// (0x00006ec3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x502a,	// (0x00006ec3) list_single_graphic_heading_pane_fp_g3

0x5036,	// (0x00006ecf) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x5036,	// (0x00006ecf) list_single_graphic_heading_pane_fp_g4

0x504a,	// (0x00006ee3) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x504a,	// (0x00006ee3) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00011a0f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00011a0f) list_single_graphic_heading_pane_fp_g

0x508f,	// (0x00006f28) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x508f,	// (0x00006f28) list_single_graphic_heading_pane_fp_t1

0x50a5,	// (0x00006f3e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x50a5,	// (0x00006f3e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb81,	// (0x00011a1a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb81,	// (0x00011a1a) list_single_graphic_heading_pane_fp_t

0x50b7,	// (0x00006f50) list_single_cale_day_pane_fp_g1_ParamLimits

0x50b7,	// (0x00006f50) list_single_cale_day_pane_fp_g1

0x50ef,	// (0x00006f88) list_single_cale_day_pane_fp_g2_ParamLimits

0x50ef,	// (0x00006f88) list_single_cale_day_pane_fp_g2

0x50fb,	// (0x00006f94) list_single_cale_day_pane_fp_g3_ParamLimits

0x50fb,	// (0x00006f94) list_single_cale_day_pane_fp_g3

0x5123,	// (0x00006fbc) list_single_cale_day_pane_fp_g4_ParamLimits

0x5123,	// (0x00006fbc) list_single_cale_day_pane_fp_g4

0x5147,	// (0x00006fe0) list_single_cale_day_pane_fp_g5_ParamLimits

0x5147,	// (0x00006fe0) list_single_cale_day_pane_fp_g5

0x0004,

0xfb86,	// (0x00011a1f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb86,	// (0x00011a1f) list_single_cale_day_pane_fp_g

0x516b,	// (0x00007004) list_single_cale_day_pane_fp_t1_ParamLimits

0x516b,	// (0x00007004) list_single_cale_day_pane_fp_t1

0x5191,	// (0x0000702a) list_single_cale_day_pane_fp_t2_ParamLimits

0x5191,	// (0x0000702a) list_single_cale_day_pane_fp_t2

0x51aa,	// (0x00007043) list_single_cale_day_pane_fp_t3_ParamLimits

0x51aa,	// (0x00007043) list_single_cale_day_pane_fp_t3

0x0002,

0xfb91,	// (0x00011a2a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb91,	// (0x00011a2a) list_single_cale_day_pane_fp_t

0x501e,	// (0x00006eb7) list_empty_pane_fp_g1_ParamLimits

0x501e,	// (0x00006eb7) list_empty_pane_fp_g1

0x51c3,	// (0x0000705c) list_empty_pane_fp_t1

0x51d1,	// (0x0000706a) list_empty_pane_fp_t2

0x0001,

0xfb98,	// (0x00011a31) list_empty_pane_fp_t

0x501e,	// (0x00006eb7) list_single_heading_pane_fp_g1_ParamLimits

0x501e,	// (0x00006eb7) list_single_heading_pane_fp_g1

0x502a,	// (0x00006ec3) list_single_heading_pane_fp_g2_ParamLimits

0x502a,	// (0x00006ec3) list_single_heading_pane_fp_g2

0x5036,	// (0x00006ecf) list_single_heading_pane_fp_g3_ParamLimits

0x5036,	// (0x00006ecf) list_single_heading_pane_fp_g3

0x0002,

0xfb9d,	// (0x00011a36) list_single_heading_pane_fp_g_ParamLimits

0xfb9d,	// (0x00011a36) list_single_heading_pane_fp_g

0x51df,	// (0x00007078) list_single_heading_pane_fp_t1_ParamLimits

0x51df,	// (0x00007078) list_single_heading_pane_fp_t1

0x51f1,	// (0x0000708a) list_single_heading_pane_fp_t2_ParamLimits

0x51f1,	// (0x0000708a) list_single_heading_pane_fp_t2

0x0001,

0xfba4,	// (0x00011a3d) list_single_heading_pane_fp_t_ParamLimits

0xfba4,	// (0x00011a3d) list_single_heading_pane_fp_t

0xa41b,	// (0x0000c2b4) aid_size_cell_fast

0xea8c,	// (0x00010925) soft_indicator_pane_cp1_t1

0xa424,	// (0x0000c2bd) cell_app_pane_cp2_ParamLimits

0xa424,	// (0x0000c2bd) cell_app_pane_cp2

0x4765,	// (0x000065fe) fep_hwr_candidate_drop_down_list_pane

0x4993,	// (0x0000682c) fep_hwr_candidate_pane_g3_ParamLimits

0x4993,	// (0x0000682c) fep_hwr_candidate_pane_g3

0x49a0,	// (0x00006839) fep_hwr_candidate_pane_g4_ParamLimits

0x49a0,	// (0x00006839) fep_hwr_candidate_pane_g4

0x0002,

0xfb18,	// (0x000119b1) fep_hwr_candidate_pane_g_ParamLimits

0xfb18,	// (0x000119b1) fep_hwr_candidate_pane_g

0x4a60,	// (0x000068f9) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4a60,	// (0x000068f9) fep_vkb_candidate_drop_down_list_pane

0x4e63,	// (0x00006cfc) fep_vkb_candidate_pane_g3

0x4e6b,	// (0x00006d04) fep_vkb_candidate_pane_g4

0x0002,

0xfb45,	// (0x000119de) fep_vkb_candidate_pane_g

0x4b6b,	// (0x00006a04) cell_hwr_candidate_pane_g1_ParamLimits

0x4ed6,	// (0x00006d6f) cell_hwr_candidate_pane_g3_ParamLimits

0x4ed6,	// (0x00006d6f) cell_hwr_candidate_pane_g3

0x4ef7,	// (0x00006d90) cell_hwr_candidate_pane_g4_ParamLimits

0x4ef7,	// (0x00006d90) cell_hwr_candidate_pane_g4

0x0002,

0xfb5f,	// (0x000119f8) cell_hwr_candidate_pane_g_ParamLimits

0xfb5f,	// (0x000119f8) cell_hwr_candidate_pane_g

0x4f36,	// (0x00006dcf) cell_vkb_candidate_pane_g3_ParamLimits

0x4f36,	// (0x00006dcf) cell_vkb_candidate_pane_g3

0x4f51,	// (0x00006dea) cell_vkb_candidate_pane_g4_ParamLimits

0x4f51,	// (0x00006dea) cell_vkb_candidate_pane_g4

0xc7d6,	// (0x0000e66f) cell_app_pane_cp2_g1_ParamLimits

0xc7d6,	// (0x0000e66f) cell_app_pane_cp2_g1

0x5225,	// (0x000070be) cell_app_pane_cp2_g2_ParamLimits

0x5225,	// (0x000070be) cell_app_pane_cp2_g2

0x0001,

0xfba9,	// (0x00011a42) cell_app_pane_cp2_g_ParamLimits

0xfba9,	// (0x00011a42) cell_app_pane_cp2_g

0x5231,	// (0x000070ca) cell_app_pane_cp2_t1_ParamLimits

0x5231,	// (0x000070ca) cell_app_pane_cp2_t1

0xeda7,	// (0x00010c40) grid_highlight_pane_cp1_ParamLimits

0xeda7,	// (0x00010c40) grid_highlight_pane_cp1

0x5243,	// (0x000070dc) cell_hwr_candidate_pane_cp1_ParamLimits

0x5243,	// (0x000070dc) cell_hwr_candidate_pane_cp1

0x4b6b,	// (0x00006a04) fep_hwr_candidate_drop_down_list_pane_g1

0x5262,	// (0x000070fb) fep_hwr_candidate_drop_down_list_pane_g2

0x526f,	// (0x00007108) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00011a47) fep_hwr_candidate_drop_down_list_pane_g

0x527c,	// (0x00007115) fep_hwr_candidate_drop_down_list_scroll_pane

0x5285,	// (0x0000711e) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5285,	// (0x0000711e) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5292,	// (0x0000712b) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5292,	// (0x0000712b) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x529f,	// (0x00007138) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x529f,	// (0x00007138) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4f36,	// (0x00006dcf) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4f36,	// (0x00006dcf) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4f51,	// (0x00006dea) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4f51,	// (0x00006dea) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x52ac,	// (0x00007145) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x52ac,	// (0x00007145) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x52c7,	// (0x00007160) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x52c7,	// (0x00007160) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x52e2,	// (0x0000717b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x52e2,	// (0x0000717b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb5,	// (0x00011a4e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb5,	// (0x00011a4e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x52fd,	// (0x00007196) cell_vkb_candidate_pane_cp1_ParamLimits

0x52fd,	// (0x00007196) cell_vkb_candidate_pane_cp1

0x4b6b,	// (0x00006a04) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4b6b,	// (0x00006a04) fep_vkb_candidate_drop_down_list_pane_g1

0x5262,	// (0x000070fb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5262,	// (0x000070fb) fep_vkb_candidate_drop_down_list_pane_g2

0x526f,	// (0x00007108) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x526f,	// (0x00007108) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbae,	// (0x00011a47) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbae,	// (0x00011a47) fep_vkb_candidate_drop_down_list_pane_g

0x531d,	// (0x000071b6) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x531d,	// (0x000071b6) fep_vkb_candidate_drop_down_list_scroll_pane

0x532a,	// (0x000071c3) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x532a,	// (0x000071c3) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5337,	// (0x000071d0) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5337,	// (0x000071d0) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5343,	// (0x000071dc) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5343,	// (0x000071dc) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4ed6,	// (0x00006d6f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4ed6,	// (0x00006d6f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4ef7,	// (0x00006d90) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4ef7,	// (0x00006d90) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x534f,	// (0x000071e8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x534f,	// (0x000071e8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5370,	// (0x00007209) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5370,	// (0x00007209) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5391,	// (0x0000722a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5391,	// (0x0000722a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc6,	// (0x00011a5f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc6,	// (0x00011a5f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9802,	// (0x0000b69b) title_pane_g1_ParamLimits

0x9815,	// (0x0000b6ae) title_pane_g2_ParamLimits

0xf54e,	// (0x000113e7) title_pane_g_ParamLimits

0xf3f3,	// (0x0001128c) aid_call2_pane

0xf3fb,	// (0x00011294) aid_call_pane

0xf403,	// (0x0001129c) popup_clock_analogue_window_g1

0xf403,	// (0x0001129c) popup_clock_analogue_window_g2

0xf40b,	// (0x000112a4) popup_clock_analogue_window_g3

0xf414,	// (0x000112ad) popup_clock_analogue_window_g4

0xe770,	// (0x00010609) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x00011582) popup_clock_analogue_window_g

0xf41c,	// (0x000112b5) popup_clock_analogue_window_t1

0xf47a,	// (0x00011313) clock_digital_number_pane_ParamLimits

0xf47a,	// (0x00011313) clock_digital_number_pane

0xf486,	// (0x0001131f) clock_digital_number_pane_cp02_ParamLimits

0xf486,	// (0x0001131f) clock_digital_number_pane_cp02

0xf492,	// (0x0001132b) clock_digital_number_pane_cp03_ParamLimits

0xf492,	// (0x0001132b) clock_digital_number_pane_cp03

0xf49e,	// (0x00011337) clock_digital_number_pane_cp04_ParamLimits

0xf49e,	// (0x00011337) clock_digital_number_pane_cp04

0xf4aa,	// (0x00011343) clock_digital_separator_pane_ParamLimits

0xf4aa,	// (0x00011343) clock_digital_separator_pane

0xf4b6,	// (0x0001134f) popup_clock_digital_window_t1_ParamLimits

0xf4b6,	// (0x0001134f) popup_clock_digital_window_t1

0xe770,	// (0x00010609) clock_digital_number_pane_g1

0xe770,	// (0x00010609) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x0001158d) clock_digital_number_pane_g

0xe770,	// (0x00010609) clock_digital_separator_pane_g1

0xe770,	// (0x00010609) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x0001158d) clock_digital_separator_pane_g

0xb30e,	// (0x0000d1a7) aid_fill_nsta_ParamLimits

0xb444,	// (0x0000d2dd) indicator_nsta_pane_ParamLimits

0x1498,	// (0x00003331) popup_clock_analogue_window

0x1498,	// (0x00003331) popup_clock_digital_window

0xef38,	// (0x00010dd1) grid_indicator_nsta_pane_ParamLimits

0x4063,	// (0x00005efc) clock_nsta_pane_t2

0x0001,

0xfa98,	// (0x00011931) clock_nsta_pane_t

0xf290,	// (0x00011129) aid_size_max_handle

0xa502,	// (0x0000c39b) aid_size_min_handle

0x0685,	// (0x0000251e) editor_scroll_pane

0x53ac,	// (0x00007245) ex_editor_pane

0xef28,	// (0x00010dc1) scroll_pane_cp13

0xecd9,	// (0x00010b72) scroll_pane_cp14

0xf451,	// (0x000112ea) scroll_pane_cp36

0xa5cc,	// (0x0000c465) list_single_graphic_hl_pane_cp2_ParamLimits

0xa5cc,	// (0x0000c465) list_single_graphic_hl_pane_cp2

0xc118,	// (0x0000dfb1) list_single_graphic_hl_pane_ParamLimits

0xc118,	// (0x0000dfb1) list_single_graphic_hl_pane

0xc7f4,	// (0x0000e68d) aid_size_min_hl_cp1

0x53bd,	// (0x00007256) list_highlight_pane_cp34_ParamLimits

0x53bd,	// (0x00007256) list_highlight_pane_cp34

0x53ce,	// (0x00007267) list_single_graphic_hl_pane_g1_ParamLimits

0x53ce,	// (0x00007267) list_single_graphic_hl_pane_g1

0xc7fd,	// (0x0000e696) list_single_graphic_hl_pane_g2_ParamLimits

0xc7fd,	// (0x0000e696) list_single_graphic_hl_pane_g2

0xc7fd,	// (0x0000e696) list_single_graphic_hl_pane_g3_ParamLimits

0xc7fd,	// (0x0000e696) list_single_graphic_hl_pane_g3

0x05be,	// (0x00002457) list_single_graphic_hl_pane_g4_ParamLimits

0x05be,	// (0x00002457) list_single_graphic_hl_pane_g4

0x544d,	// (0x000072e6) list_single_graphic_hl_pane_g5_ParamLimits

0x544d,	// (0x000072e6) list_single_graphic_hl_pane_g5

0x0004,

0xfbd7,	// (0x00011a70) list_single_graphic_hl_pane_g_ParamLimits

0xfbd7,	// (0x00011a70) list_single_graphic_hl_pane_g

0xc809,	// (0x0000e6a2) list_single_graphic_hl_pane_t1_ParamLimits

0xc809,	// (0x0000e6a2) list_single_graphic_hl_pane_t1

0x541d,	// (0x000072b6) aid_size_min_hl_cp2

0x5426,	// (0x000072bf) list_highlight_pane_cp34_cp2_ParamLimits

0x5426,	// (0x000072bf) list_highlight_pane_cp34_cp2

0x53ce,	// (0x00007267) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x53ce,	// (0x00007267) list_single_graphic_hl_pane_g1_cp2

0x5433,	// (0x000072cc) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5433,	// (0x000072cc) list_single_graphic_hl_pane_g2_cp2

0xc81f,	// (0x0000e6b8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc81f,	// (0x0000e6b8) list_single_graphic_hl_pane_g3_cp2

0x05be,	// (0x00002457) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x05be,	// (0x00002457) list_single_graphic_hl_pane_g4_cp2

0x544d,	// (0x000072e6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x544d,	// (0x000072e6) list_single_graphic_hl_pane_g5_cp2

0xa9fb,	// (0x0000c894) control_pane_g4_ParamLimits

0xa9fb,	// (0x0000c894) control_pane_g4

0x0c0e,	// (0x00002aa7) bg_popup_sub_pane_cp10_ParamLimits

0x46f1,	// (0x0000658a) list_choice_list_pane_ParamLimits

0x4700,	// (0x00006599) scroll_pane_cp23

0xeaa9,	// (0x00010942) bg_popup_preview_window_pane_cp02_ParamLimits

0x4fc2,	// (0x00006e5b) list_preview_fixed_pane_ParamLimits

0x4fd8,	// (0x00006e71) list_preview_fixed_pane_cp_ParamLimits

0x4fd8,	// (0x00006e71) list_preview_fixed_pane_cp

0x4fe4,	// (0x00006e7d) popup_preview_fixed_window_g1_ParamLimits

0x4fe4,	// (0x00006e7d) popup_preview_fixed_window_g1

0x4ff0,	// (0x00006e89) popup_preview_fixed_window_g2_ParamLimits

0x4ff0,	// (0x00006e89) popup_preview_fixed_window_g2

0x0002,

0xfb66,	// (0x000119ff) popup_preview_fixed_window_g_ParamLimits

0xfb66,	// (0x000119ff) popup_preview_fixed_window_g

0xf1cd,	// (0x00011066) aid_navi_side_left_pane_ParamLimits

0xf1e2,	// (0x0001107b) aid_navi_side_right_pane_ParamLimits

0xf1fa,	// (0x00011093) navi_icon_pane_stacon_ParamLimits

0xf20e,	// (0x000110a7) navi_navi_pane_stacon_ParamLimits

0xf1fa,	// (0x00011093) navi_text_pane_stacon_ParamLimits

0xe766,	// (0x000105ff) main_text_info_pane

0x5477,	// (0x00007310) listscroll_text_info_pane

0x547f,	// (0x00007318) list_text_info_pane_ParamLimits

0x547f,	// (0x00007318) list_text_info_pane

0x548e,	// (0x00007327) scroll_pane_cp24_ParamLimits

0x548e,	// (0x00007327) scroll_pane_cp24

0xc82d,	// (0x0000e6c6) list_text_info_pane_t1_ParamLimits

0xc82d,	// (0x0000e6c6) list_text_info_pane_t1

0xabaf,	// (0x0000ca48) popup_fast_swap2_window_ParamLimits

0xabaf,	// (0x0000ca48) popup_fast_swap2_window

0x54e0,	// (0x00007379) aid_size_cell_fast2

0xe766,	// (0x000105ff) bg_popup_window_pane_cp17

0x1daa,	// (0x00003c43) heading_pane_cp2

0xebdd,	// (0x00010a76) listscroll_fast2_pane

0x54ea,	// (0x00007383) grid_fast2_pane

0x54f4,	// (0x0000738d) listscroll_fast2_pane_g1

0x54fc,	// (0x00007395) listscroll_fast2_pane_g2

0x0001,

0xfbe2,	// (0x00011a7b) listscroll_fast2_pane_g

0xef28,	// (0x00010dc1) scroll_pane_cp26

0x5506,	// (0x0000739f) cell_fast2_pane_ParamLimits

0x5506,	// (0x0000739f) cell_fast2_pane

0x551b,	// (0x000073b4) cell_fast2_pane_g1

0x5524,	// (0x000073bd) cell_fast2_pane_g2

0x552d,	// (0x000073c6) cell_fast2_pane_g3

0x0002,

0xfbe7,	// (0x00011a80) cell_fast2_pane_g

0xec10,	// (0x00010aa9) grid_highlight_pane_cp9

0xec25,	// (0x00010abe) main_eswt_pane_ParamLimits

0xec25,	// (0x00010abe) main_eswt_pane

0x54a3,	// (0x0000733c) list_single_text_info_pane

0x5535,	// (0x000073ce) eswt_ctrl_button_pane

0x5535,	// (0x000073ce) eswt_ctrl_canvas_pane

0xc849,	// (0x0000e6e2) eswt_ctrl_combo_pane

0x5535,	// (0x000073ce) eswt_ctrl_default_pane

0x5535,	// (0x000073ce) eswt_ctrl_label_pane

0x5545,	// (0x000073de) eswt_ctrl_wait_pane

0xc851,	// (0x0000e6ea) eswt_shell_pane

0xe766,	// (0x000105ff) listscroll_eswt_app_pane

0x556d,	// (0x00007406) popup_eswt_tasktip_window_ParamLimits

0x556d,	// (0x00007406) popup_eswt_tasktip_window

0x18ee,	// (0x00003787) bg_popup_window_pane_cp18

0x557e,	// (0x00007417) eswt_control_pane_g1_ParamLimits

0x557e,	// (0x00007417) eswt_control_pane_g1

0x558b,	// (0x00007424) eswt_control_pane_g2_ParamLimits

0x558b,	// (0x00007424) eswt_control_pane_g2

0x5598,	// (0x00007431) eswt_control_pane_g3_ParamLimits

0x5598,	// (0x00007431) eswt_control_pane_g3

0x55a5,	// (0x0000743e) eswt_control_pane_g4_ParamLimits

0x55a5,	// (0x0000743e) eswt_control_pane_g4

0x0003,

0xfbee,	// (0x00011a87) eswt_control_pane_g_ParamLimits

0xfbee,	// (0x00011a87) eswt_control_pane_g

0xeda7,	// (0x00010c40) bg_button_pane_ParamLimits

0xeda7,	// (0x00010c40) bg_button_pane

0xec25,	// (0x00010abe) common_borders_pane_copy2_ParamLimits

0xec25,	// (0x00010abe) common_borders_pane_copy2

0x55b2,	// (0x0000744b) control_button_pane_g1_ParamLimits

0x55b2,	// (0x0000744b) control_button_pane_g1

0x55be,	// (0x00007457) control_button_pane_g2_ParamLimits

0x55be,	// (0x00007457) control_button_pane_g2

0x55ca,	// (0x00007463) control_button_pane_g3_ParamLimits

0x55ca,	// (0x00007463) control_button_pane_g3

0x0002,

0xfbf7,	// (0x00011a90) control_button_pane_g_ParamLimits

0xfbf7,	// (0x00011a90) control_button_pane_g

0x55de,	// (0x00007477) control_button_pane_t1

0x55ec,	// (0x00007485) control_button_pane_t2

0x0001,

0xfbfe,	// (0x00011a97) control_button_pane_t

0x1762,	// (0x000035fb) bg_button_pane_g1

0x176a,	// (0x00003603) bg_button_pane_g2

0x1772,	// (0x0000360b) bg_button_pane_g3

0x177a,	// (0x00003613) bg_button_pane_g4

0x1782,	// (0x0000361b) bg_button_pane_g5

0x178a,	// (0x00003623) bg_button_pane_g6

0x1792,	// (0x0000362b) bg_button_pane_g7

0x179a,	// (0x00003633) bg_button_pane_g8

0x17a2,	// (0x0000363b) bg_button_pane_g9

0x0008,

0xf84b,	// (0x000116e4) bg_button_pane_g

0x46ac,	// (0x00006545) common_borders_pane_ParamLimits

0x46ac,	// (0x00006545) common_borders_pane

0x557e,	// (0x00007417) eswt_control_pane_g1_copy1_ParamLimits

0x557e,	// (0x00007417) eswt_control_pane_g1_copy1

0x558b,	// (0x00007424) eswt_control_pane_g2_copy1_ParamLimits

0x558b,	// (0x00007424) eswt_control_pane_g2_copy1

0x5598,	// (0x00007431) eswt_control_pane_g3_copy1_ParamLimits

0x5598,	// (0x00007431) eswt_control_pane_g3_copy1

0x55a5,	// (0x0000743e) eswt_control_pane_g4_copy1_ParamLimits

0x55a5,	// (0x0000743e) eswt_control_pane_g4_copy1

0x46e7,	// (0x00006580) bg_eswt_ctrl_canvas_pane_g1

0x46ac,	// (0x00006545) common_borders_pane_cp2_ParamLimits

0x46ac,	// (0x00006545) common_borders_pane_cp2

0x46ac,	// (0x00006545) common_borders_pane_cp3_ParamLimits

0x46ac,	// (0x00006545) common_borders_pane_cp3

0x55fa,	// (0x00007493) separator_horizontal_pane

0x5602,	// (0x0000749b) separator_vertical_pane

0x557e,	// (0x00007417) eswt_control_pane_g1_copy2_ParamLimits

0x557e,	// (0x00007417) eswt_control_pane_g1_copy2

0x558b,	// (0x00007424) eswt_control_pane_g2_copy2_ParamLimits

0x558b,	// (0x00007424) eswt_control_pane_g2_copy2

0x5598,	// (0x00007431) eswt_control_pane_g3_copy2_ParamLimits

0x5598,	// (0x00007431) eswt_control_pane_g3_copy2

0x55a5,	// (0x0000743e) eswt_control_pane_g4_copy2_ParamLimits

0x55a5,	// (0x0000743e) eswt_control_pane_g4_copy2

0xe766,	// (0x000105ff) common_borders_pane_cp4

0x560b,	// (0x000074a4) separator_horizontal_pane_g1

0x5614,	// (0x000074ad) separator_horizontal_pane_g2

0x561d,	// (0x000074b6) separator_horizontal_pane_g3

0x0002,

0xfc03,	// (0x00011a9c) separator_horizontal_pane_g

0x557e,	// (0x00007417) eswt_control_pane_g1_copy3_ParamLimits

0x557e,	// (0x00007417) eswt_control_pane_g1_copy3

0x558b,	// (0x00007424) eswt_control_pane_g2_copy3_ParamLimits

0x558b,	// (0x00007424) eswt_control_pane_g2_copy3

0x5598,	// (0x00007431) eswt_control_pane_g3_copy3_ParamLimits

0x5598,	// (0x00007431) eswt_control_pane_g3_copy3

0x55a5,	// (0x0000743e) eswt_control_pane_g4_copy3_ParamLimits

0x55a5,	// (0x0000743e) eswt_control_pane_g4_copy3

0xe766,	// (0x000105ff) common_borders_pane_cp5

0x5626,	// (0x000074bf) separator_vertical_pane_g1

0x562f,	// (0x000074c8) separator_vertical_pane_g2

0x5638,	// (0x000074d1) separator_vertical_pane_g3

0x0002,

0xfc0a,	// (0x00011aa3) separator_vertical_pane_g

0x557e,	// (0x00007417) eswt_control_pane_g1_copy4_ParamLimits

0x557e,	// (0x00007417) eswt_control_pane_g1_copy4

0x558b,	// (0x00007424) eswt_control_pane_g2_copy4_ParamLimits

0x558b,	// (0x00007424) eswt_control_pane_g2_copy4

0x5598,	// (0x00007431) eswt_control_pane_g3_copy4_ParamLimits

0x5598,	// (0x00007431) eswt_control_pane_g3_copy4

0x55a5,	// (0x0000743e) eswt_control_pane_g4_copy4_ParamLimits

0x55a5,	// (0x0000743e) eswt_control_pane_g4_copy4

0xc871,	// (0x0000e70a) eswt_ctrl_combo_button_pane

0xc879,	// (0x0000e712) eswt_ctrl_input_pane

0xc881,	// (0x0000e71a) popup_choice_list_window_cp70

0xc889,	// (0x0000e722) eswt_ctrl_input_pane_t1

0xe766,	// (0x000105ff) input_focus_pane_cp70

0x46ac,	// (0x00006545) bg_button_pane_cp70_ParamLimits

0x46ac,	// (0x00006545) bg_button_pane_cp70

0xc897,	// (0x0000e730) eswt_ctrl_combo_button_pane_g1

0x566f,	// (0x00007508) wait_bar_pane_cp70

0x18ee,	// (0x00003787) bg_popup_window_pane_cp70_ParamLimits

0x18ee,	// (0x00003787) bg_popup_window_pane_cp70

0x5677,	// (0x00007510) popup_eswt_tasktip_window_t1

0x568d,	// (0x00007526) wait_bar_pane_cp71_ParamLimits

0x568d,	// (0x00007526) wait_bar_pane_cp71

0x5699,	// (0x00007532) grid_eswt_app_pane

0xf2d7,	// (0x00011170) scroll_pane_cp70

0xc89f,	// (0x0000e738) cell_eswt_app_pane_ParamLimits

0xc89f,	// (0x0000e738) cell_eswt_app_pane

0xc8c9,	// (0x0000e762) cell_eswt_app_pane_g1_ParamLimits

0xc8c9,	// (0x0000e762) cell_eswt_app_pane_g1

0xc8f8,	// (0x0000e791) cell_eswt_app_pane_g2_ParamLimits

0xc8f8,	// (0x0000e791) cell_eswt_app_pane_g2

0x0001,

0xfc11,	// (0x00011aaa) cell_eswt_app_pane_g_ParamLimits

0xfc11,	// (0x00011aaa) cell_eswt_app_pane_g

0xc91c,	// (0x0000e7b5) cell_eswt_app_pane_t1_ParamLimits

0xc91c,	// (0x0000e7b5) cell_eswt_app_pane_t1

0x5757,	// (0x000075f0) grid_highlight_pane_cp70_ParamLimits

0x5757,	// (0x000075f0) grid_highlight_pane_cp70

0x055a,	// (0x000023f3) set_content_pane_g1

0xa98d,	// (0x0000c826) status_small_volume_pane

0xc94e,	// (0x0000e7e7) status_small_volume_pane_g1

0xc956,	// (0x0000e7ef) volume_small2_pane

0xc95f,	// (0x0000e7f8) volume_small2_pane_g1

0xc968,	// (0x0000e801) volume_small2_pane_g2

0xc971,	// (0x0000e80a) volume_small2_pane_g3

0xc97a,	// (0x0000e813) volume_small2_pane_g4

0xc983,	// (0x0000e81c) volume_small2_pane_g5

0xc98c,	// (0x0000e825) volume_small2_pane_g6

0xc995,	// (0x0000e82e) volume_small2_pane_g7

0xc99e,	// (0x0000e837) volume_small2_pane_g8

0xc9a7,	// (0x0000e840) volume_small2_pane_g9

0xc9b0,	// (0x0000e849) volume_small2_pane_g10

0x0009,

0xfc16,	// (0x00011aaf) volume_small2_pane_g

0x4cb3,	// (0x00006b4c) fep_vkb_top_text_pane_g1_ParamLimits

0xc77e,	// (0x0000e617) fep_vkb_top_text_pane_t1_ParamLimits

0x4ffc,	// (0x00006e95) popup_preview_fixed_window_g3_ParamLimits

0x4ffc,	// (0x00006e95) popup_preview_fixed_window_g3

0xb24c,	// (0x0000d0e5) popup_toolbar_trans_pane

0xbf5a,	// (0x0000ddf3) aid_height_set_list_ParamLimits

0x2f36,	// (0x00004dcf) aid_size_parent_ParamLimits

0x0c0e,	// (0x00002aa7) list_highlight_pane_cp2_ParamLimits

0x055a,	// (0x000023f3) set_content_pane_g1_ParamLimits

0xc12a,	// (0x0000dfc3) list_single_image_pane_ParamLimits

0xc12a,	// (0x0000dfc3) list_single_image_pane

0xc9b9,	// (0x0000e852) aid_size_cell_image_ParamLimits

0xc9b9,	// (0x0000e852) aid_size_cell_image

0xc9c6,	// (0x0000e85f) grid_single_image_pane_ParamLimits

0xc9c6,	// (0x0000e85f) grid_single_image_pane

0x502a,	// (0x00006ec3) list_single_image_pane_g1_ParamLimits

0x502a,	// (0x00006ec3) list_single_image_pane_g1

0x5036,	// (0x00006ecf) list_single_image_pane_g2_ParamLimits

0x5036,	// (0x00006ecf) list_single_image_pane_g2

0x0001,

0xfc2b,	// (0x00011ac4) list_single_image_pane_g_ParamLimits

0xfc2b,	// (0x00011ac4) list_single_image_pane_g

0x57e9,	// (0x00007682) list_single_image_pane_t1_ParamLimits

0x57e9,	// (0x00007682) list_single_image_pane_t1

0xc9d2,	// (0x0000e86b) cell_image_list_pane_ParamLimits

0xc9d2,	// (0x0000e86b) cell_image_list_pane

0xc9e6,	// (0x0000e87f) cell_image_list_pane_g1

0xc9ef,	// (0x0000e888) cell_image_list_pane_g2

0x0001,

0xfc30,	// (0x00011ac9) cell_image_list_pane_g

0xc9f8,	// (0x0000e891) aid_size_cell_tb_trans_pane

0xeda7,	// (0x00010c40) bg_tb_trans_pane

0xca0a,	// (0x0000e8a3) grid_tb_trans_pane

0x1762,	// (0x000035fb) bg_tb_trans_pane_g1

0x176a,	// (0x00003603) bg_tb_trans_pane_g2

0x1772,	// (0x0000360b) bg_tb_trans_pane_g3

0x177a,	// (0x00003613) bg_tb_trans_pane_g4

0x1782,	// (0x0000361b) bg_tb_trans_pane_g5

0x179a,	// (0x00003633) bg_tb_trans_pane_g6

0x17a2,	// (0x0000363b) bg_tb_trans_pane_g7

0x178a,	// (0x00003623) bg_tb_trans_pane_g8

0x1792,	// (0x0000362b) bg_tb_trans_pane_g9

0x0008,

0xfc35,	// (0x00011ace) bg_tb_trans_pane_g

0xca1e,	// (0x0000e8b7) cell_toolbar_trans_pane_ParamLimits

0xca1e,	// (0x0000e8b7) cell_toolbar_trans_pane

0x46e7,	// (0x00006580) cell_toolbar_trans_pane_g1

0xc441,	// (0x0000e2da) list_form2_midp_pane_t1

0xc44f,	// (0x0000e2e8) list_form2_midp_pane_t2

0x0001,

0xfade,	// (0x00011977) list_form2_midp_pane_t

0x4287,	// (0x00006120) scroll_pane_cp51_ParamLimits

0x4490,	// (0x00006329) form2_midp_wait_pane_g1

0x4499,	// (0x00006332) form2_midp_wait_pane_g2

0x44a2,	// (0x0000633b) form2_midp_wait_pane_g3

0x0002,

0xfaf3,	// (0x0001198c) form2_midp_wait_pane_g

0xe965,	// (0x000107fe) list_highlight_pane_cp21_ParamLimits

0x44ea,	// (0x00006383) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x44f9,	// (0x00006392) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3139,	// (0x00004fd2) list_single_2graphic_im_pane_ParamLimits

0x3139,	// (0x00004fd2) list_single_2graphic_im_pane

0xca44,	// (0x0000e8dd) list_single_2graphic_im_pane_g1_ParamLimits

0xca44,	// (0x0000e8dd) list_single_2graphic_im_pane_g1

0xca55,	// (0x0000e8ee) list_single_2graphic_im_pane_g2_ParamLimits

0xca55,	// (0x0000e8ee) list_single_2graphic_im_pane_g2

0xca61,	// (0x0000e8fa) list_single_2graphic_im_pane_g3_ParamLimits

0xca61,	// (0x0000e8fa) list_single_2graphic_im_pane_g3

0x0003,

0xfc48,	// (0x00011ae1) list_single_2graphic_im_pane_g_ParamLimits

0xfc48,	// (0x00011ae1) list_single_2graphic_im_pane_g

0xca75,	// (0x0000e90e) list_single_2graphic_im_pane_t1_ParamLimits

0xca75,	// (0x0000e90e) list_single_2graphic_im_pane_t1

0x5008,	// (0x00006ea1) list_single_graphic_2heading_pane_fp_ParamLimits

0x5008,	// (0x00006ea1) list_single_graphic_2heading_pane_fp

0x506d,	// (0x00006f06) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x506d,	// (0x00006f06) list_single_graphic_2heading_pane_fp_g1

0x501e,	// (0x00006eb7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x501e,	// (0x00006eb7) list_single_graphic_2heading_pane_fp_g2

0x502a,	// (0x00006ec3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x502a,	// (0x00006ec3) list_single_graphic_2heading_pane_fp_g3

0x5036,	// (0x00006ecf) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x5036,	// (0x00006ecf) list_single_graphic_2heading_pane_fp_g4

0x504a,	// (0x00006ee3) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x504a,	// (0x00006ee3) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb76,	// (0x00011a0f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb76,	// (0x00011a0f) list_single_graphic_2heading_pane_fp_g

0x58df,	// (0x00007778) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x58df,	// (0x00007778) list_single_graphic_2heading_pane_fp_t1

0x50a5,	// (0x00006f3e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x50a5,	// (0x00006f3e) list_single_graphic_2heading_pane_fp_t2

0x58f5,	// (0x0000778e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x58f5,	// (0x0000778e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc51,	// (0x00011aea) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc51,	// (0x00011aea) list_single_graphic_2heading_pane_fp_t

0x4911,	// (0x000067aa) fep_hwr_write_pane_g5_ParamLimits

0x4911,	// (0x000067aa) fep_hwr_write_pane_g5

0x491d,	// (0x000067b6) fep_hwr_write_pane_g6_ParamLimits

0x491d,	// (0x000067b6) fep_hwr_write_pane_g6

0xc851,	// (0x0000e6ea) eswt_shell_pane_ParamLimits

0x18ee,	// (0x00003787) bg_popup_window_pane_cp18_ParamLimits

0x2df4,	// (0x00004c8d) heading_pane_cp70

0x5677,	// (0x00007510) popup_eswt_tasktip_window_t1_ParamLimits

0xb369,	// (0x0000d202) aid_touch_tab_arrow_left

0xb37f,	// (0x0000d218) aid_touch_tab_arrow_right

0x982d,	// (0x0000b6c6) title_pane_g3_ParamLimits

0x982d,	// (0x0000b6c6) title_pane_g3

0xed3e,	// (0x00010bd7) set_value_pane_g1

0xb24c,	// (0x0000d0e5) popup_toolbar_trans_pane_ParamLimits

0xc9f8,	// (0x0000e891) aid_size_cell_tb_trans_pane_ParamLimits

0xeda7,	// (0x00010c40) bg_tb_trans_pane_ParamLimits

0xca0a,	// (0x0000e8a3) grid_tb_trans_pane_ParamLimits

0xeaa9,	// (0x00010942) cont_note_pane_ParamLimits

0xeaa9,	// (0x00010942) cont_note_pane

0xec25,	// (0x00010abe) cont_snote2_single_text_pane_ParamLimits

0xec25,	// (0x00010abe) cont_snote2_single_text_pane

0xec25,	// (0x00010abe) cont_snote2_single_graphic_pane_ParamLimits

0xec25,	// (0x00010abe) cont_snote2_single_graphic_pane

0x1fbd,	// (0x00003e56) cont_note_wait_pane_ParamLimits

0x1fbd,	// (0x00003e56) cont_note_wait_pane

0x1fbd,	// (0x00003e56) cont_note_image_pane_ParamLimits

0x1fbd,	// (0x00003e56) cont_note_image_pane

0x590b,	// (0x000077a4) popup_note2_window_g1_ParamLimits

0x590b,	// (0x000077a4) popup_note2_window_g1

0xcab3,	// (0x0000e94c) popup_note2_window_t1_ParamLimits

0xcab3,	// (0x0000e94c) popup_note2_window_t1

0xcaf8,	// (0x0000e991) popup_note2_window_t2_ParamLimits

0xcaf8,	// (0x0000e991) popup_note2_window_t2

0xcb3d,	// (0x0000e9d6) popup_note2_window_t3_ParamLimits

0xcb3d,	// (0x0000e9d6) popup_note2_window_t3

0x5a0b,	// (0x000078a4) popup_note2_window_t4_ParamLimits

0x5a0b,	// (0x000078a4) popup_note2_window_t4

0xeb2d,	// (0x000109c6) popup_note2_window_t5_ParamLimits

0xeb2d,	// (0x000109c6) popup_note2_window_t5

0x0004,

0xfc5d,	// (0x00011af6) popup_note2_window_t_ParamLimits

0xfc5d,	// (0x00011af6) popup_note2_window_t

0x5a3a,	// (0x000078d3) popup_note2_image_window_g1_ParamLimits

0x5a3a,	// (0x000078d3) popup_note2_image_window_g1

0xcb82,	// (0x0000ea1b) popup_note2_image_window_g2_ParamLimits

0xcb82,	// (0x0000ea1b) popup_note2_image_window_g2

0x0001,

0xfc68,	// (0x00011b01) popup_note2_image_window_g_ParamLimits

0xfc68,	// (0x00011b01) popup_note2_image_window_g

0x5a58,	// (0x000078f1) popup_note2_image_window_t1_ParamLimits

0x5a58,	// (0x000078f1) popup_note2_image_window_t1

0x5a70,	// (0x00007909) popup_note2_image_window_t2_ParamLimits

0x5a70,	// (0x00007909) popup_note2_image_window_t2

0x5a88,	// (0x00007921) popup_note2_image_window_t3_ParamLimits

0x5a88,	// (0x00007921) popup_note2_image_window_t3

0x0002,

0xfc6d,	// (0x00011b06) popup_note2_image_window_t_ParamLimits

0xfc6d,	// (0x00011b06) popup_note2_image_window_t

0x1fcb,	// (0x00003e64) popup_note2_wait_window_g1_ParamLimits

0x1fcb,	// (0x00003e64) popup_note2_wait_window_g1

0x1fd7,	// (0x00003e70) popup_note2_wait_window_g2_ParamLimits

0x1fd7,	// (0x00003e70) popup_note2_wait_window_g2

0x1fe3,	// (0x00003e7c) popup_note2_wait_window_g3_ParamLimits

0x1fe3,	// (0x00003e7c) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x000116c6) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x000116c6) popup_note2_wait_window_g

0x5aa4,	// (0x0000793d) popup_note2_wait_window_t1_ParamLimits

0x5aa4,	// (0x0000793d) popup_note2_wait_window_t1

0x5ac2,	// (0x0000795b) popup_note2_wait_window_t2_ParamLimits

0x5ac2,	// (0x0000795b) popup_note2_wait_window_t2

0x5ae0,	// (0x00007979) popup_note2_wait_window_t3_ParamLimits

0x5ae0,	// (0x00007979) popup_note2_wait_window_t3

0x5af2,	// (0x0000798b) popup_note2_wait_window_t4_ParamLimits

0x5af2,	// (0x0000798b) popup_note2_wait_window_t4

0x0003,

0xfc74,	// (0x00011b0d) popup_note2_wait_window_t_ParamLimits

0xfc74,	// (0x00011b0d) popup_note2_wait_window_t

0x5b04,	// (0x0000799d) wait_bar2_pane_ParamLimits

0x5b04,	// (0x0000799d) wait_bar2_pane

0x5b1c,	// (0x000079b5) popup_snote2_single_text_window_g1_ParamLimits

0x5b1c,	// (0x000079b5) popup_snote2_single_text_window_g1

0x5b44,	// (0x000079dd) popup_snote2_single_text_window_t1_ParamLimits

0x5b44,	// (0x000079dd) popup_snote2_single_text_window_t1

0x5b90,	// (0x00007a29) popup_snote2_single_text_window_t2_ParamLimits

0x5b90,	// (0x00007a29) popup_snote2_single_text_window_t2

0x5bdc,	// (0x00007a75) popup_snote2_single_text_window_t3_ParamLimits

0x5bdc,	// (0x00007a75) popup_snote2_single_text_window_t3

0x5c1d,	// (0x00007ab6) popup_snote2_single_text_window_t4_ParamLimits

0x5c1d,	// (0x00007ab6) popup_snote2_single_text_window_t4

0x5c53,	// (0x00007aec) popup_snote2_single_text_window_t5_ParamLimits

0x5c53,	// (0x00007aec) popup_snote2_single_text_window_t5

0x0004,

0xfc7d,	// (0x00011b16) popup_snote2_single_text_window_t_ParamLimits

0xfc7d,	// (0x00011b16) popup_snote2_single_text_window_t

0xcb94,	// (0x0000ea2d) popup_snote2_single_graphic_window_g1_ParamLimits

0xcb94,	// (0x0000ea2d) popup_snote2_single_graphic_window_g1

0x5ca6,	// (0x00007b3f) popup_snote2_single_graphic_window_g2_ParamLimits

0x5ca6,	// (0x00007b3f) popup_snote2_single_graphic_window_g2

0x0001,

0xfc88,	// (0x00011b21) popup_snote2_single_graphic_window_g_ParamLimits

0xfc88,	// (0x00011b21) popup_snote2_single_graphic_window_g

0x5cce,	// (0x00007b67) popup_snote2_single_graphic_window_t1_ParamLimits

0x5cce,	// (0x00007b67) popup_snote2_single_graphic_window_t1

0x5d1a,	// (0x00007bb3) popup_snote2_single_graphic_window_t2_ParamLimits

0x5d1a,	// (0x00007bb3) popup_snote2_single_graphic_window_t2

0x5bdc,	// (0x00007a75) popup_snote2_single_graphic_window_t3_ParamLimits

0x5bdc,	// (0x00007a75) popup_snote2_single_graphic_window_t3

0x5c1d,	// (0x00007ab6) popup_snote2_single_graphic_window_t4_ParamLimits

0x5c1d,	// (0x00007ab6) popup_snote2_single_graphic_window_t4

0x5c53,	// (0x00007aec) popup_snote2_single_graphic_window_t5_ParamLimits

0x5c53,	// (0x00007aec) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8d,	// (0x00011b26) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8d,	// (0x00011b26) popup_snote2_single_graphic_window_t

0x40fc,	// (0x00005f95) clock_nsta_pane_cp2_t1

0x40fc,	// (0x00005f95) clock_nsta_pane_cp2_t2

0x0001,

0xfab4,	// (0x0001194d) clock_nsta_pane_cp2_t

0xedc6,	// (0x00010c5f) form_field_data_wide_pane_g1_ParamLimits

0xed0e,	// (0x00010ba7) form_field_data_wide_pane_g2_ParamLimits

0xed0e,	// (0x00010ba7) form_field_data_wide_pane_g2

0xedd2,	// (0x00010c6b) form_field_data_wide_pane_g3_ParamLimits

0xedd2,	// (0x00010c6b) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x00011505) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x00011505) form_field_data_wide_pane_g

0xc372,	// (0x0000e20b) grid_touch_3_pane_ParamLimits

0xc372,	// (0x0000e20b) grid_touch_3_pane

0xcbbc,	// (0x0000ea55) cell_touch_3_pane_ParamLimits

0xcbbc,	// (0x0000ea55) cell_touch_3_pane

0x46e7,	// (0x00006580) cell_touch_3_pane_g1

0x46e7,	// (0x00006580) cell_touch_3_pane_g2

0x0001,

0xfb39,	// (0x000119d2) cell_touch_3_pane_g

0xeb5f,	// (0x000109f8) cont_query_data_pane

0xeb67,	// (0x00010a00) cont_query_data_pane_cp1

0x5d94,	// (0x00007c2d) button_value_adjust_pane_cp7

0x5d9c,	// (0x00007c35) query_popup_pane_cp3

0xf4de,	// (0x00011377) bg_popup_sub_pane_cp22_ParamLimits

0xa659,	// (0x0000c4f2) navi_navi_volume_pane_cp2

0xa668,	// (0x0000c501) popup_side_volume_key_window_g2

0xa677,	// (0x0000c510) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x0001159b) popup_side_volume_key_window_g

0xa686,	// (0x0000c51f) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x000115a2) popup_side_volume_key_window_t

0xa7d7,	// (0x0000c670) popup_side_volume_key_window_ParamLimits

0x9f84,	// (0x0000be1d) list_double_graphic_pane_g4_ParamLimits

0x9f84,	// (0x0000be1d) list_double_graphic_pane_g4

0xc105,	// (0x0000df9e) list_single_2heading_msg_pane_ParamLimits

0xc105,	// (0x0000df9e) list_single_2heading_msg_pane

0xcc05,	// (0x0000ea9e) list_single_2heading_msg_pane_g1_ParamLimits

0xcc05,	// (0x0000ea9e) list_single_2heading_msg_pane_g1

0xcc11,	// (0x0000eaaa) list_single_2heading_msg_pane_g2_ParamLimits

0xcc11,	// (0x0000eaaa) list_single_2heading_msg_pane_g2

0xcc24,	// (0x0000eabd) list_single_2heading_msg_pane_g3_ParamLimits

0xcc24,	// (0x0000eabd) list_single_2heading_msg_pane_g3

0xcc30,	// (0x0000eac9) list_single_2heading_msg_pane_g4_ParamLimits

0xcc30,	// (0x0000eac9) list_single_2heading_msg_pane_g4

0x0003,

0xfc98,	// (0x00011b31) list_single_2heading_msg_pane_g_ParamLimits

0xfc98,	// (0x00011b31) list_single_2heading_msg_pane_g

0xcc48,	// (0x0000eae1) list_single_2heading_msg_pane_t1_ParamLimits

0xcc48,	// (0x0000eae1) list_single_2heading_msg_pane_t1

0xcc70,	// (0x0000eb09) list_single_2heading_msg_pane_t2_ParamLimits

0xcc70,	// (0x0000eb09) list_single_2heading_msg_pane_t2

0xccdb,	// (0x0000eb74) list_single_2heading_msg_pane_t3_ParamLimits

0xccdb,	// (0x0000eb74) list_single_2heading_msg_pane_t3

0x5e8b,	// (0x00007d24) list_single_2heading_msg_pane_t4_ParamLimits

0x5e8b,	// (0x00007d24) list_single_2heading_msg_pane_t4

0x0003,

0xfca1,	// (0x00011b3a) list_single_2heading_msg_pane_t_ParamLimits

0xfca1,	// (0x00011b3a) list_single_2heading_msg_pane_t

0xe913,	// (0x000107ac) title_pane_g4_ParamLimits

0xe913,	// (0x000107ac) title_pane_g4

0xf0f6,	// (0x00010f8f) title_pane_stacon_g3_ParamLimits

0xf0f6,	// (0x00010f8f) title_pane_stacon_g3

0x58a2,	// (0x0000773b) list_single_2graphic_im_pane_g4_ParamLimits

0x58a2,	// (0x0000773b) list_single_2graphic_im_pane_g4

0xbd39,	// (0x0000dbd2) popup_side_volume_key_window_cp

0x35dd,	// (0x00005476) main_idle_act2_pane_t1

0x17aa,	// (0x00003643) toolbar_button_pane_g10

0x9e11,	// (0x0000bcaa) popup_toolbar_window_cp1

0x40ed,	// (0x00005f86) clock_nsta_pane_cp_t1

0x40ed,	// (0x00005f86) clock_nsta_pane_cp_t2

0x0001,

0xfaaf,	// (0x00011948) clock_nsta_pane_cp_t

0xa659,	// (0x0000c4f2) navi_navi_volume_pane_cp2_ParamLimits

0xf4f4,	// (0x0001138d) popup_side_volume_key_window_g1_ParamLimits

0xa668,	// (0x0000c501) popup_side_volume_key_window_g2_ParamLimits

0xa677,	// (0x0000c510) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x0001159b) popup_side_volume_key_window_g_ParamLimits

0x4751,	// (0x000065ea) fep_hwr_aid_pane

0x47f8,	// (0x00006691) bg_fep_hwr_top_pane_g4_ParamLimits

0x4818,	// (0x000066b1) fep_hwr_top_pane_g1_ParamLimits

0x482a,	// (0x000066c3) fep_hwr_top_pane_g2_ParamLimits

0x483c,	// (0x000066d5) fep_hwr_top_pane_g3_ParamLimits

0xfb04,	// (0x0001199d) fep_hwr_top_pane_g_ParamLimits

0x4851,	// (0x000066ea) fep_hwr_top_text_pane_ParamLimits

0x2931,	// (0x000047ca) aid_touch_tab_arrow_arrow_2

0x293a,	// (0x000047d3) aid_touch_tab_arrow_left_2

0x4765,	// (0x000065fe) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x479c,	// (0x00006635) fep_hwr_prediction_pane

0x4ac2,	// (0x0000695b) fep_vkb_prediction_pane

0xc75e,	// (0x0000e5f7) fep_vkb_side_pane_g3_ParamLimits

0xc75e,	// (0x0000e5f7) fep_vkb_side_pane_g3

0x4b6b,	// (0x00006a04) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5262,	// (0x000070fb) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x526f,	// (0x00007108) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbae,	// (0x00011a47) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5eb0,	// (0x00007d49) fep_hwr_prediction_pane_g1

0x5eba,	// (0x00007d53) fep_hwr_prediction_pane_g2

0x5ec2,	// (0x00007d5b) fep_hwr_prediction_pane_g3

0x5eca,	// (0x00007d63) fep_hwr_prediction_pane_g4

0x0003,

0xfcaa,	// (0x00011b43) fep_hwr_prediction_pane_g

0x5eb0,	// (0x00007d49) fep_vkb_prediction_pane_g1

0x5ed2,	// (0x00007d6b) fep_vkb_prediction_pane_g2

0x5eda,	// (0x00007d73) fep_vkb_prediction_pane_g3

0x5ee2,	// (0x00007d7b) fep_vkb_prediction_pane_g4

0x0003,

0xfcb3,	// (0x00011b4c) fep_vkb_prediction_pane_g

0xbedc,	// (0x0000dd75) slider_set_pane_g3

0xbef0,	// (0x0000dd89) slider_set_pane_g4

0xbf08,	// (0x0000dda1) slider_set_pane_g5

0xbedc,	// (0x0000dd75) slider_set_pane_g6

0xbf1e,	// (0x0000ddb7) slider_set_pane_g7

0x3097,	// (0x00004f30) slider_form_pane_g3

0x30a0,	// (0x00004f39) slider_form_pane_g4

0x30a8,	// (0x00004f41) slider_form_pane_g5

0x3097,	// (0x00004f30) slider_form_pane_g6

0xc0a5,	// (0x0000df3e) slider_form_pane_g7

0x38d1,	// (0x0000576a) slider_set_pane_vc_g3

0x38da,	// (0x00005773) slider_set_pane_vc_g4

0x38e3,	// (0x0000577c) slider_set_pane_vc_g5

0x38d1,	// (0x0000576a) slider_set_pane_vc_g6

0x38ec,	// (0x00005785) slider_set_pane_vc_g7

0x3dd2,	// (0x00005c6b) slider_form_pane_vc_g1

0x3ddb,	// (0x00005c74) slider_form_pane_vc_g2

0x3de4,	// (0x00005c7d) slider_form_pane_vc_g3

0x3dd2,	// (0x00005c6b) slider_form_pane_vc_g4

0x3ded,	// (0x00005c86) slider_form_pane_vc_g5

0x0004,

0xfa81,	// (0x0001191a) slider_form_pane_vc_g

0xe766,	// (0x000105ff) main_idle_act3_pane

0x5eea,	// (0x00007d83) ai3_links_pane

0xcd49,	// (0x0000ebe2) popup_ai3_data_window_ParamLimits

0xcd49,	// (0x0000ebe2) popup_ai3_data_window

0xe766,	// (0x000105ff) grid_ai3_links_pane

0xcd61,	// (0x0000ebfa) cell_ai3_links_pane_ParamLimits

0xcd61,	// (0x0000ebfa) cell_ai3_links_pane

0x5f23,	// (0x00007dbc) bg_popup_sub_pane_cp11

0x5f30,	// (0x00007dc9) cell_ai3_links_pane_g1

0xe766,	// (0x000105ff) bg_popup_sub_pane_cp12

0x5f55,	// (0x00007dee) heading_ai3_data_pane

0x5f5d,	// (0x00007df6) list_ai3_gene_pane

0x5f69,	// (0x00007e02) popup_ai3_data_window_g1

0x5f71,	// (0x00007e0a) heading_ai3_data_pane_g1

0x5f79,	// (0x00007e12) heading_ai3_data_pane_t1

0xcd7b,	// (0x0000ec14) list_double_ai3_gene_pane_ParamLimits

0xcd7b,	// (0x0000ec14) list_double_ai3_gene_pane

0x5f94,	// (0x00007e2d) list_single_ai3_gene_pane_ParamLimits

0x5f94,	// (0x00007e2d) list_single_ai3_gene_pane

0x46ac,	// (0x00006545) list_highlight_pane_cp7_ParamLimits

0x46ac,	// (0x00006545) list_highlight_pane_cp7

0x5fa1,	// (0x00007e3a) list_single_a13_gene_pane_t1_ParamLimits

0x5fa1,	// (0x00007e3a) list_single_a13_gene_pane_t1

0x5fb8,	// (0x00007e51) list_single_ai3_gene_pane_g1

0x5fc1,	// (0x00007e5a) list_single_ai3_gene_pane_g2

0x0001,

0xfcbc,	// (0x00011b55) list_single_ai3_gene_pane_g

0x5fc9,	// (0x00007e62) list_double_ai3_gene_pane_g1_ParamLimits

0x5fc9,	// (0x00007e62) list_double_ai3_gene_pane_g1

0xcd88,	// (0x0000ec21) list_double_ai3_gene_pane_t1_ParamLimits

0xcd88,	// (0x0000ec21) list_double_ai3_gene_pane_t1

0x5ff1,	// (0x00007e8a) list_double_ai3_gene_pane_t2_ParamLimits

0x5ff1,	// (0x00007e8a) list_double_ai3_gene_pane_t2

0x6006,	// (0x00007e9f) list_double_ai3_gene_pane_t3_ParamLimits

0x6006,	// (0x00007e9f) list_double_ai3_gene_pane_t3

0x0002,

0xfcc1,	// (0x00011b5a) list_double_ai3_gene_pane_t_ParamLimits

0xfcc1,	// (0x00011b5a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5dad,	// (0x00007c46) aid_size_min_col_2

0xcbef,	// (0x0000ea88) aid_size_min_msg_ParamLimits

0xcbef,	// (0x0000ea88) aid_size_min_msg

0xc772,	// (0x0000e60b) fep_vkb_top_text_pane_g2_ParamLimits

0xc772,	// (0x0000e60b) fep_vkb_top_text_pane_g2

0x0001,

0xfb34,	// (0x000119cd) fep_vkb_top_text_pane_g_ParamLimits

0xfb34,	// (0x000119cd) fep_vkb_top_text_pane_g

0xe766,	// (0x000105ff) main_hc_apps_shell_pane

0x6023,	// (0x00007ebc) grid_hc_apps_pane_ParamLimits

0x6023,	// (0x00007ebc) grid_hc_apps_pane

0x6032,	// (0x00007ecb) list_hc_apps_pane

0x603a,	// (0x00007ed3) scroll_pane_cp37_ParamLimits

0x603a,	// (0x00007ed3) scroll_pane_cp37

0xcda4,	// (0x0000ec3d) cell_hc_apps_pane_ParamLimits

0xcda4,	// (0x0000ec3d) cell_hc_apps_pane

0xce62,	// (0x0000ecfb) cell_hc_apps_pane_g1_ParamLimits

0xce62,	// (0x0000ecfb) cell_hc_apps_pane_g1

0x6125,	// (0x00007fbe) cell_hc_apps_pane_g2_ParamLimits

0x6125,	// (0x00007fbe) cell_hc_apps_pane_g2

0x6141,	// (0x00007fda) cell_hc_apps_pane_g3_ParamLimits

0x6141,	// (0x00007fda) cell_hc_apps_pane_g3

0x0002,

0xfcc8,	// (0x00011b61) cell_hc_apps_pane_g_ParamLimits

0xfcc8,	// (0x00011b61) cell_hc_apps_pane_g

0xce8f,	// (0x0000ed28) cell_hc_apps_pane_t1_ParamLimits

0xce8f,	// (0x0000ed28) cell_hc_apps_pane_t1

0xeaa9,	// (0x00010942) grid_highlight_pane_cp10_ParamLimits

0xeaa9,	// (0x00010942) grid_highlight_pane_cp10

0xcecd,	// (0x0000ed66) list_single_hc_apps_pane_ParamLimits

0xcecd,	// (0x0000ed66) list_single_hc_apps_pane

0xcefd,	// (0x0000ed96) list_single_hc_apps_pane_g1

0xcf16,	// (0x0000edaf) list_single_hc_apps_pane_g2

0x0001,

0xfccf,	// (0x00011b68) list_single_hc_apps_pane_g

0xcf2f,	// (0x0000edc8) list_single_hc_apps_pane_g2_copy1

0xcf4b,	// (0x0000ede4) list_single_hc_apps_pane_t1

0xe965,	// (0x000107fe) bg_set_opt_pane_cp_ParamLimits

0x9901,	// (0x0000b79a) setting_slider_pane_t1_ParamLimits

0x991a,	// (0x0000b7b3) setting_slider_pane_t2_ParamLimits

0x9934,	// (0x0000b7cd) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000113f7) setting_slider_pane_t_ParamLimits

0x994c,	// (0x0000b7e5) slider_set_pane_ParamLimits

0x0a61,	// (0x000028fa) control_pane_g5_ParamLimits

0x0a61,	// (0x000028fa) control_pane_g5

0xbecf,	// (0x0000dd68) slider_set_pane_g1_ParamLimits

0x2e93,	// (0x00004d2c) slider_set_pane_g2_ParamLimits

0xbedc,	// (0x0000dd75) slider_set_pane_g3_ParamLimits

0xbef0,	// (0x0000dd89) slider_set_pane_g4_ParamLimits

0xbf08,	// (0x0000dda1) slider_set_pane_g5_ParamLimits

0xbedc,	// (0x0000dd75) slider_set_pane_g6_ParamLimits

0xbf1e,	// (0x0000ddb7) slider_set_pane_g7_ParamLimits

0xf949,	// (0x000117e2) slider_set_pane_g_ParamLimits

0x0505,	// (0x0000239e) navi_icon_text_pane_ParamLimits

0xb332,	// (0x0000d1cb) aid_fill_nsta_2_ParamLimits

0xb369,	// (0x0000d202) aid_touch_tab_arrow_left_ParamLimits

0xb37f,	// (0x0000d218) aid_touch_tab_arrow_right_ParamLimits

0xb41a,	// (0x0000d2b3) clock_nsta_pane_ParamLimits

0x2913,	// (0x000047ac) navi_icon_pane_g1_ParamLimits

0x291f,	// (0x000047b8) navi_text_pane_t1_ParamLimits

0x41fd,	// (0x00006096) navi_icon_text_pane_g1_ParamLimits

0x4209,	// (0x000060a2) navi_icon_text_pane_t1_ParamLimits

0xcefd,	// (0x0000ed96) list_single_hc_apps_pane_g1_ParamLimits

0xcf16,	// (0x0000edaf) list_single_hc_apps_pane_g2_ParamLimits

0xfccf,	// (0x00011b68) list_single_hc_apps_pane_g_ParamLimits

0xcf2f,	// (0x0000edc8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcf4b,	// (0x0000ede4) list_single_hc_apps_pane_t1_ParamLimits

0x9732,	// (0x0000b5cb) popup_toolbar2_fixed_window_ParamLimits

0x9732,	// (0x0000b5cb) popup_toolbar2_fixed_window

0xb242,	// (0x0000d0db) popup_toolbar2_float_window

0xe766,	// (0x000105ff) bg_popup_sub_pane_cp27

0x6282,	// (0x0000811b) grid_toolbar2_float_pane

0xe766,	// (0x000105ff) bg_popup_sub_pane_cp26

0x6282,	// (0x0000811b) grid_toolbar2_fixed_pane

0xcf79,	// (0x0000ee12) cell_toolbar2_fixed_pane_ParamLimits

0xcf79,	// (0x0000ee12) cell_toolbar2_fixed_pane

0xcf93,	// (0x0000ee2c) cell_toolbar2_fixed_pane_g1

0x1690,	// (0x00003529) toolbar2_fixed_button_pane

0x1762,	// (0x000035fb) toolbar2_fixed_button_pane_g1

0x176a,	// (0x00003603) toolbar2_fixed_button_pane_g2

0x1772,	// (0x0000360b) toolbar2_fixed_button_pane_g3

0x177a,	// (0x00003613) toolbar2_fixed_button_pane_g4

0x1782,	// (0x0000361b) toolbar2_fixed_button_pane_g5

0x178a,	// (0x00003623) toolbar2_fixed_button_pane_g6

0x1792,	// (0x0000362b) toolbar2_fixed_button_pane_g7

0x179a,	// (0x00003633) toolbar2_fixed_button_pane_g8

0x17a2,	// (0x0000363b) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x000116e4) toolbar2_fixed_button_pane_g

0x62a3,	// (0x0000813c) cell_toolbar2_float_pane_ParamLimits

0x62a3,	// (0x0000813c) cell_toolbar2_float_pane

0x62b4,	// (0x0000814d) cell_toolbar2_float_pane_g1

0x1690,	// (0x00003529) toolbar2_fixed_button_pane_cp

0xc65a,	// (0x0000e4f3) fep_vkb_accented_list_pane_ParamLimits

0xc65a,	// (0x0000e4f3) fep_vkb_accented_list_pane

0x4eb2,	// (0x00006d4b) bg_popup_fep_shadow_pane_g9

0x0685,	// (0x0000251e) bg_popup_fep_shadow_pane_cp3

0xef0f,	// (0x00010da8) list_accented_list_pane

0x62bd,	// (0x00008156) list_single_accented_list_pane_ParamLimits

0x62bd,	// (0x00008156) list_single_accented_list_pane

0x0685,	// (0x0000251e) list_highlight_pane_cp10

0x62ce,	// (0x00008167) list_single_accented_list_pane_t1

0xb16c,	// (0x0000d005) popup_slider_window_ParamLimits

0xb16c,	// (0x0000d005) popup_slider_window

0x5da4,	// (0x00007c3d) aid_indentation_list_msg

0xd088,	// (0x0000ef21) bg_popup_window_pane_cp19

0x63ee,	// (0x00008287) popup_slider_window_g1

0x640a,	// (0x000082a3) popup_slider_window_g2

0x6426,	// (0x000082bf) popup_slider_window_g3

0x0005,

0xfcd4,	// (0x00011b6d) popup_slider_window_g

0x6482,	// (0x0000831b) popup_slider_window_t1

0x64f6,	// (0x0000838f) small_volume_slider_vertical_pane

0x46e7,	// (0x00006580) small_volume_slider_vertical_pane_g1

0x46e7,	// (0x00006580) small_volume_slider_vertical_pane_g2

0x6512,	// (0x000083ab) small_volume_slider_vertical_pane_g3

0x0002,

0xfce6,	// (0x00011b7f) small_volume_slider_vertical_pane_g

0x9680,	// (0x0000b519) area_side_right_pane_ParamLimits

0x9680,	// (0x0000b519) area_side_right_pane

0xd140,	// (0x0000efd9) aid_size_side_button_ParamLimits

0xd140,	// (0x0000efd9) aid_size_side_button

0xd159,	// (0x0000eff2) grid_sctrl_middle_pane_ParamLimits

0xd159,	// (0x0000eff2) grid_sctrl_middle_pane

0x654e,	// (0x000083e7) sctrl_sk_bottom_pane

0x655f,	// (0x000083f8) sctrl_sk_top_pane

0x6571,	// (0x0000840a) aid_touch_sctrl_top

0xeaa9,	// (0x00010942) bg_sctrl_sk_pane_ParamLimits

0xeaa9,	// (0x00010942) bg_sctrl_sk_pane

0x657e,	// (0x00008417) sctrl_sk_top_pane_g1

0x658b,	// (0x00008424) sctrl_sk_top_pane_t1

0x6571,	// (0x0000840a) aid_touch_sctrl_bottom

0xeaa9,	// (0x00010942) bg_sctrl_sk_pane_cp_ParamLimits

0xeaa9,	// (0x00010942) bg_sctrl_sk_pane_cp

0x65a6,	// (0x0000843f) sctrl_sk_bottom_pane_g1

0x658b,	// (0x00008424) sctrl_sk_bottom_pane_t1

0xd173,	// (0x0000f00c) cell_sctrl_middle_pane_ParamLimits

0xd173,	// (0x0000f00c) cell_sctrl_middle_pane

0xd184,	// (0x0000f01d) aid_touch_sctrl_middle_ParamLimits

0xd184,	// (0x0000f01d) aid_touch_sctrl_middle

0xd191,	// (0x0000f02a) bg_sctrl_middle_pane_ParamLimits

0xd191,	// (0x0000f02a) bg_sctrl_middle_pane

0x666b,	// (0x00008504) cell_sctrl_middle_pane_g1_ParamLimits

0x666b,	// (0x00008504) cell_sctrl_middle_pane_g1

0xd19f,	// (0x0000f038) cell_sctrl_middle_pane_g2_ParamLimits

0xd19f,	// (0x0000f038) cell_sctrl_middle_pane_g2

0x0001,

0xfcf2,	// (0x00011b8b) cell_sctrl_middle_pane_g_ParamLimits

0xfcf2,	// (0x00011b8b) cell_sctrl_middle_pane_g

0x1762,	// (0x000035fb) bg_sctrl_middle_pane_g1

0x176a,	// (0x00003603) bg_sctrl_middle_pane_g2

0x1772,	// (0x0000360b) bg_sctrl_middle_pane_g3

0x177a,	// (0x00003613) bg_sctrl_middle_pane_g4

0x1782,	// (0x0000361b) bg_sctrl_middle_pane_g5

0x178a,	// (0x00003623) bg_sctrl_middle_pane_g6

0x1792,	// (0x0000362b) bg_sctrl_middle_pane_g7

0x179a,	// (0x00003633) bg_sctrl_middle_pane_g8

0x0007,

0xfcf7,	// (0x00011b90) bg_sctrl_middle_pane_g

0x17a2,	// (0x0000363b) bg_sctrl_middle_pane_g8_copy1

0x1762,	// (0x000035fb) bg_sctrl_sk_pane_g1

0x176a,	// (0x00003603) bg_sctrl_sk_pane_g2

0x1772,	// (0x0000360b) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x000116e4) bg_sctrl_sk_pane_g

0xec73,	// (0x00010b0c) aid_size_touch_scroll_bar

0x177a,	// (0x00003613) bg_sctrl_sk_pane_g4

0x1782,	// (0x0000361b) bg_sctrl_sk_pane_g5

0x178a,	// (0x00003623) bg_sctrl_sk_pane_g6

0x1792,	// (0x0000362b) bg_sctrl_sk_pane_g7

0x179a,	// (0x00003633) bg_sctrl_sk_pane_g8

0x17a2,	// (0x0000363b) bg_sctrl_sk_pane_g9

0x0cb8,	// (0x00002b51) popup_fep_china_hwr2_fs_candidate_window

0xac0c,	// (0x0000caa5) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xac0c,	// (0x0000caa5) popup_fep_china_hwr2_fs_control_window

0x4b6b,	// (0x00006a04) sctrl_sk_top_pane_g2

0x0001,

0xfced,	// (0x00011b86) sctrl_sk_top_pane_g

0xd1ab,	// (0x0000f044) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd1ab,	// (0x0000f044) aid_fep_china_hwr2_fs_cell

0xd1bf,	// (0x0000f058) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd1bf,	// (0x0000f058) bg_popup_fep_shadow_pane_cp4

0xd1d6,	// (0x0000f06f) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd1d6,	// (0x0000f06f) bg_popup_fep_shadow_pane_cp5

0xd1e8,	// (0x0000f081) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd1e8,	// (0x0000f081) popup_fep_china_hwr2_fs_control_bar_grid

0xf3b7,	// (0x00011250) popup_fep_china_hwr2_fs_control_funtion_grid

0x663f,	// (0x000084d8) aid_fep_china_hwr2_fs_candi_cell

0xe766,	// (0x000105ff) bg_popup_fep_shadow_pane_cp6

0x6649,	// (0x000084e2) popup_fep_china_hwr2_fs_candidate_grid

0xd1fc,	// (0x0000f095) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd1fc,	// (0x0000f095) cell_fep_china_hwr2_fs_funtion_grid

0x46e7,	// (0x00006580) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x666b,	// (0x00008504) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x666b,	// (0x00008504) cell_fep_china_hwr2_fs_funtion_grid_g1

0x6679,	// (0x00008512) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x6679,	// (0x00008512) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd08,	// (0x00011ba1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd08,	// (0x00011ba1) cell_fep_china_hwr2_fs_funtion_grid_g

0xd214,	// (0x0000f0ad) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd214,	// (0x0000f0ad) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd229,	// (0x0000f0c2) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd229,	// (0x0000f0c2) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0d,	// (0x00011ba6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0d,	// (0x00011ba6) cell_fep_china_hwr2_fs_funtion_grid_t

0x66c0,	// (0x00008559) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x66c8,	// (0x00008561) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x66d0,	// (0x00008569) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd12,	// (0x00011bab) popup_fep_china_hwr2_fs_control_bar_grid_g

0x66d8,	// (0x00008571) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x66d8,	// (0x00008571) cell_fep_china_hwr2_fs_candidate_grid

0x66f1,	// (0x0000858a) popup_fep_china_hwr2_fs_candidate_grid_g20

0x66f9,	// (0x00008592) popup_fep_china_hwr2_fs_candidate_grid_g21

0x46e7,	// (0x00006580) cell_fep_china_hwr2_fs_candidate_grid_g1

0x46e7,	// (0x00006580) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb39,	// (0x000119d2) cell_fep_china_hwr2_fs_candidate_grid_g

0x6701,	// (0x0000859a) cell_fep_china_hwr2_fs_candidate_grid_t1

0x12b7,	// (0x00003150) clock_nsta_pane_cp_24_ParamLimits

0x12b7,	// (0x00003150) clock_nsta_pane_cp_24

0x1335,	// (0x000031ce) indicator_nsta_pane_cp_24_ParamLimits

0x1335,	// (0x000031ce) indicator_nsta_pane_cp_24

0x277e,	// (0x00004617) heading_pane_g1

0x0001,

0xf8b0,	// (0x00011749) heading_pane_g

0x336e,	// (0x00005207) grid_sct_catagory_button_pane

0x339e,	// (0x00005237) scroll_pane_cp5_ParamLimits

0x4293,	// (0x0000612c) button_value_adjust_pane_cp5_ParamLimits

0x4293,	// (0x0000612c) button_value_adjust_pane_cp5

0x438d,	// (0x00006226) form2_midp_time_pane_ParamLimits

0x670f,	// (0x000085a8) cell_sct_catagory_button_pane_ParamLimits

0x670f,	// (0x000085a8) cell_sct_catagory_button_pane

0x46ac,	// (0x00006545) bg_button_pane_cp01_ParamLimits

0x46ac,	// (0x00006545) bg_button_pane_cp01

0x46e7,	// (0x00006580) cell_sct_catagory_button_pane_g1

0xb1e5,	// (0x0000d07e) popup_tb_extension_window

0xd245,	// (0x0000f0de) aid_size_cell_ext_ParamLimits

0xd245,	// (0x0000f0de) aid_size_cell_ext

0xec25,	// (0x00010abe) bg_tb_trans_pane_cp1_ParamLimits

0xec25,	// (0x00010abe) bg_tb_trans_pane_cp1

0xd26b,	// (0x0000f104) grid_tb_ext_pane_ParamLimits

0xd26b,	// (0x0000f104) grid_tb_ext_pane

0xd2aa,	// (0x0000f143) cell_tb_ext_pane_ParamLimits

0xd2aa,	// (0x0000f143) cell_tb_ext_pane

0xd2d2,	// (0x0000f16b) cell_tb_ext_pane_g1_ParamLimits

0xd2d2,	// (0x0000f16b) cell_tb_ext_pane_g1

0x67a5,	// (0x0000863e) cell_tb_ext_pane_t1

0xeaa9,	// (0x00010942) list_highlight_pane_cp11_ParamLimits

0xeaa9,	// (0x00010942) list_highlight_pane_cp11

0x9747,	// (0x0000b5e0) popup_uni_indicator_window_ParamLimits

0x9747,	// (0x0000b5e0) popup_uni_indicator_window

0xeda7,	// (0x00010c40) bg_popup_sub_pane_cp14

0xd2ef,	// (0x0000f188) list_uniindi_pane

0xd2fb,	// (0x0000f194) uniindi_top_pane

0xeaa9,	// (0x00010942) bg_uniindi_top_pane

0xd31a,	// (0x0000f1b3) uniindi_top_pane_g1

0xd330,	// (0x0000f1c9) uniindi_top_pane_g2

0x0003,

0xfd19,	// (0x00011bb2) uniindi_top_pane_g

0xd34d,	// (0x0000f1e6) uniindi_top_pane_t1

0x6856,	// (0x000086ef) list_single_uniindi_pane_ParamLimits

0x6856,	// (0x000086ef) list_single_uniindi_pane

0x46e7,	// (0x00006580) bg_uniindi_top_pane_g1

0x6868,	// (0x00008701) list_single_uniindi_pane_g1

0x687b,	// (0x00008714) list_single_uniindi_pane_t1

0xe766,	// (0x000105ff) control_bg_pane

0x68a0,	// (0x00008739) bg_sctrl_sk_pane_cp1

0x68a9,	// (0x00008742) bg_sctrl_sk_pane_cp2

0x68b2,	// (0x0000874b) control_bg_pane_g1

0x68bb,	// (0x00008754) control_bg_pane_g2

0x0001,

0xfd22,	// (0x00011bbb) control_bg_pane_g

0x40a2,	// (0x00005f3b) cell_indicator_nsta_pane_g1_ParamLimits

0xc39f,	// (0x0000e238) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9d,	// (0x00011936) cell_indicator_nsta_pane_g_ParamLimits

0x4415,	// (0x000062ae) form2_midp_time_pane_t1_ParamLimits

0x4743,	// (0x000065dc) main_idle_act4_pane_ParamLimits

0x4743,	// (0x000065dc) main_idle_act4_pane

0xb1e5,	// (0x0000d07e) popup_tb_extension_window_ParamLimits

0xd290,	// (0x0000f129) tb_ext_find_pane_ParamLimits

0xd290,	// (0x0000f129) tb_ext_find_pane

0x68c4,	// (0x0000875d) ai_gene_pane_1_cp1

0x07d0,	// (0x00002669) ai_gene_pane_2_cp1

0xd377,	// (0x0000f210) list_single_idle_plugin_calendar_pane

0x68d5,	// (0x0000876e) list_single_idle_plugin_notification_pane

0x68de,	// (0x00008777) list_single_idle_plugin_player_pane

0xd380,	// (0x0000f219) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd380,	// (0x0000f219) list_single_idle_plugin_shortcut_pane

0xd3a8,	// (0x0000f241) main_idle_act4_pane_t1

0xd3bf,	// (0x0000f258) main_idle_act4_pane_t2

0x0001,

0xfd27,	// (0x00011bc0) main_idle_act4_pane_t

0xd3d6,	// (0x0000f26f) middle_sk_idle_act4_pane_ParamLimits

0xd3d6,	// (0x0000f26f) middle_sk_idle_act4_pane

0xd3f2,	// (0x0000f28b) popup_clock_digital_analogue_window_cp2

0xd41e,	// (0x0000f2b7) shortcut_wheel_idle_act4_pane_ParamLimits

0xd41e,	// (0x0000f2b7) shortcut_wheel_idle_act4_pane

0x46e7,	// (0x00006580) shortcut_wheel_idle_act4_pane_g1

0x46e7,	// (0x00006580) shortcut_wheel_idle_act4_pane_g2

0x46e7,	// (0x00006580) shortcut_wheel_idle_act4_pane_g3

0x46e7,	// (0x00006580) shortcut_wheel_idle_act4_pane_g4

0x46e7,	// (0x00006580) shortcut_wheel_idle_act4_pane_g5

0x6971,	// (0x0000880a) shortcut_wheel_idle_act4_pane_g6

0x6979,	// (0x00008812) shortcut_wheel_idle_act4_pane_g7

0x6981,	// (0x0000881a) shortcut_wheel_idle_act4_pane_g8

0x6989,	// (0x00008822) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2c,	// (0x00011bc5) shortcut_wheel_idle_act4_pane_g

0x47f8,	// (0x00006691) middle_sk_idle_act4_pane_g1_ParamLimits

0x47f8,	// (0x00006691) middle_sk_idle_act4_pane_g1

0xd49b,	// (0x0000f334) middle_sk_idle_act4_pane_g2_ParamLimits

0xd49b,	// (0x0000f334) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4f,	// (0x00011be8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4f,	// (0x00011be8) middle_sk_idle_act4_pane_g

0xd4b3,	// (0x0000f34c) middle_sk_idle_act4_pane_t1_ParamLimits

0xd4b3,	// (0x0000f34c) middle_sk_idle_act4_pane_t1

0xd4e2,	// (0x0000f37b) grid_ai_shortcut_pane_ParamLimits

0xd4e2,	// (0x0000f37b) grid_ai_shortcut_pane

0xd4ff,	// (0x0000f398) list_highlight_pane_cp16_ParamLimits

0xd4ff,	// (0x0000f398) list_highlight_pane_cp16

0xd50c,	// (0x0000f3a5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd50c,	// (0x0000f3a5) list_single_idle_plugin_shortcut_pane_g1

0xd518,	// (0x0000f3b1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd518,	// (0x0000f3b1) list_single_idle_plugin_shortcut_pane_g2

0xd534,	// (0x0000f3cd) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd534,	// (0x0000f3cd) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd54,	// (0x00011bed) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd54,	// (0x00011bed) list_single_idle_plugin_shortcut_pane_g

0xd549,	// (0x0000f3e2) cell_ai_shortcut_pane_ParamLimits

0xd549,	// (0x0000f3e2) cell_ai_shortcut_pane

0xd55f,	// (0x0000f3f8) cell_ai_shortcut_pane_g1_ParamLimits

0xd55f,	// (0x0000f3f8) cell_ai_shortcut_pane_g1

0x68c4,	// (0x0000875d) ai_gene_pane_1_cp2

0x6ab9,	// (0x00008952) ai_gene_pane_2_cp2

0x6ac1,	// (0x0000895a) list_highlight_pane_cp15

0xd581,	// (0x0000f41a) list_single_idle_plugin_calendar_pane_g1

0x6ac1,	// (0x0000895a) list_highlight_pane_cp17

0x6ad2,	// (0x0000896b) list_single_idle_plugin_calendar_pane_g1_copy1

0x6ada,	// (0x00008973) list_single_idle_plugin_player_pane_g1

0x367f,	// (0x00005518) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5b,	// (0x00011bf4) list_single_idle_plugin_player_pane_g

0x6ae2,	// (0x0000897b) list_single_idle_plugin_player_pane_t1

0x6af0,	// (0x00008989) list_single_idle_plugin_player_pane_t2

0x6afe,	// (0x00008997) list_single_idle_plugin_player_pane_t3

0x6b0c,	// (0x000089a5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd60,	// (0x00011bf9) list_single_idle_plugin_player_pane_t

0x6b1a,	// (0x000089b3) wait_bar_pane_cp15

0x6b22,	// (0x000089bb) grid_ai_notification_pane

0x367f,	// (0x00005518) list_single_idle_plugin_notification_pane_g1

0xd589,	// (0x0000f422) cell_ai_notification_pane_ParamLimits

0xd589,	// (0x0000f422) cell_ai_notification_pane

0x6b38,	// (0x000089d1) cell_ai_notification_pane_g1

0x6b40,	// (0x000089d9) cell_ai_notification_pane_t1

0xd596,	// (0x0000f42f) tb_ext_find_button_pane

0xd59e,	// (0x0000f437) tb_ext_find_pane_g1

0xd5a6,	// (0x0000f43f) tb_ext_find_pane_t1

0xf403,	// (0x0001129c) tb_ext_find_button_pane_g1

0xd5b4,	// (0x0000f44d) tb_ext_find_button_pane_g2

0x0001,

0xfd69,	// (0x00011c02) tb_ext_find_button_pane_g

0xd3a8,	// (0x0000f241) main_idle_act4_pane_t1_ParamLimits

0xd3bf,	// (0x0000f258) main_idle_act4_pane_t2_ParamLimits

0xfd27,	// (0x00011bc0) main_idle_act4_pane_t_ParamLimits

0xd3f2,	// (0x0000f28b) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd40a,	// (0x0000f2a3) sat_plugin_idle_act4_pane_ParamLimits

0xd40a,	// (0x0000f2a3) sat_plugin_idle_act4_pane

0xd5bd,	// (0x0000f456) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd5bd,	// (0x0000f456) sat_plugin_idle_act4_pane_t1

0xd5d5,	// (0x0000f46e) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd5d5,	// (0x0000f46e) sat_plugin_idle_act4_pane_t2

0xd5ed,	// (0x0000f486) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd5ed,	// (0x0000f486) sat_plugin_idle_act4_pane_t3

0xd605,	// (0x0000f49e) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd605,	// (0x0000f49e) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6e,	// (0x00011c07) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6e,	// (0x00011c07) sat_plugin_idle_act4_pane_t

0x96c2,	// (0x0000b55b) popup_battery_window_ParamLimits

0x96c2,	// (0x0000b55b) popup_battery_window

0xeaa9,	// (0x00010942) bg_popup_sub_pane_cp25_ParamLimits

0xeaa9,	// (0x00010942) bg_popup_sub_pane_cp25

0x6bc1,	// (0x00008a5a) popup_battery_window_g1_ParamLimits

0x6bc1,	// (0x00008a5a) popup_battery_window_g1

0x6bcd,	// (0x00008a66) popup_battery_window_t1_ParamLimits

0x6bcd,	// (0x00008a66) popup_battery_window_t1

0x6bdf,	// (0x00008a78) popup_battery_window_t2_ParamLimits

0x6bdf,	// (0x00008a78) popup_battery_window_t2

0x0001,

0xfd77,	// (0x00011c10) popup_battery_window_t_ParamLimits

0xfd77,	// (0x00011c10) popup_battery_window_t

0xa836,	// (0x0000c6cf) midp_canvas_pane_ParamLimits

0xa8a8,	// (0x0000c741) midp_keypad_pane_ParamLimits

0xa8a8,	// (0x0000c741) midp_keypad_pane

0x0c0e,	// (0x00002aa7) main_midp_pane_ParamLimits

0xc3ac,	// (0x0000e245) signal_pane_g2_cp_ParamLimits

0xd61d,	// (0x0000f4b6) aid_size_cell_midp_keypad_ParamLimits

0xd61d,	// (0x0000f4b6) aid_size_cell_midp_keypad

0xd63b,	// (0x0000f4d4) midp_keyp_game_grid_pane_ParamLimits

0xd63b,	// (0x0000f4d4) midp_keyp_game_grid_pane

0xd662,	// (0x0000f4fb) midp_keyp_rocker_pane_ParamLimits

0xd662,	// (0x0000f4fb) midp_keyp_rocker_pane

0xd6b3,	// (0x0000f54c) midp_keyp_sk_left_pane_ParamLimits

0xd6b3,	// (0x0000f54c) midp_keyp_sk_left_pane

0xd707,	// (0x0000f5a0) midp_keyp_sk_right_pane_ParamLimits

0xd707,	// (0x0000f5a0) midp_keyp_sk_right_pane

0xe766,	// (0x000105ff) bg_button_pane_cp03

0xd75b,	// (0x0000f5f4) midp_keyp_sk_left_pane_g1

0xe766,	// (0x000105ff) bg_button_pane_cp04

0xd75b,	// (0x0000f5f4) midp_keyp_sk_right_pane_g1

0x46e7,	// (0x00006580) midp_keyp_rocker_pane_g1

0xd764,	// (0x0000f5fd) keyp_game_cell_pane_ParamLimits

0xd764,	// (0x0000f5fd) keyp_game_cell_pane

0xe766,	// (0x000105ff) bg_button_pane_cp02

0xd788,	// (0x0000f621) keyp_game_cell_pane_g1

0x96e2,	// (0x0000b57b) popup_fep_vkb2_window_ParamLimits

0x96e2,	// (0x0000b57b) popup_fep_vkb2_window

0xd791,	// (0x0000f62a) aid_size_cell_vkb2_ParamLimits

0xd791,	// (0x0000f62a) aid_size_cell_vkb2

0xd7cf,	// (0x0000f668) popup_fep_vkb2_window_g1_ParamLimits

0xd7cf,	// (0x0000f668) popup_fep_vkb2_window_g1

0xd81f,	// (0x0000f6b8) vkb2_area_bottom_pane_ParamLimits

0xd81f,	// (0x0000f6b8) vkb2_area_bottom_pane

0xd873,	// (0x0000f70c) vkb2_area_keypad_pane_ParamLimits

0xd873,	// (0x0000f70c) vkb2_area_keypad_pane

0xd8bb,	// (0x0000f754) vkb2_area_top_pane_ParamLimits

0xd8bb,	// (0x0000f754) vkb2_area_top_pane

0xd941,	// (0x0000f7da) vkb2_top_entry_pane_ParamLimits

0xd941,	// (0x0000f7da) vkb2_top_entry_pane

0xd96e,	// (0x0000f807) vkb2_top_grid_left_pane_ParamLimits

0xd96e,	// (0x0000f807) vkb2_top_grid_left_pane

0xd98e,	// (0x0000f827) vkb2_top_grid_right_pane_ParamLimits

0xd98e,	// (0x0000f827) vkb2_top_grid_right_pane

0x6f60,	// (0x00008df9) vkb2_cell_keypad_pane_ParamLimits

0x6f60,	// (0x00008df9) vkb2_cell_keypad_pane

0xd9d4,	// (0x0000f86d) vkb2_area_bottom_grid_pane_ParamLimits

0xd9d4,	// (0x0000f86d) vkb2_area_bottom_grid_pane

0xd9fe,	// (0x0000f897) vkb2_area_bottom_pane_g1_ParamLimits

0xd9fe,	// (0x0000f897) vkb2_area_bottom_pane_g1

0xda24,	// (0x0000f8bd) vkb2_area_bottom_pane_g2_ParamLimits

0xda24,	// (0x0000f8bd) vkb2_area_bottom_pane_g2

0xda55,	// (0x0000f8ee) vkb2_area_bottom_pane_g3_ParamLimits

0xda55,	// (0x0000f8ee) vkb2_area_bottom_pane_g3

0x0002,

0xfd7c,	// (0x00011c15) vkb2_area_bottom_pane_g_ParamLimits

0xfd7c,	// (0x00011c15) vkb2_area_bottom_pane_g

0x710a,	// (0x00008fa3) vkb2_top_cell_left_pane_ParamLimits

0x710a,	// (0x00008fa3) vkb2_top_cell_left_pane

0xdabf,	// (0x0000f958) vkb2_top_entry_pane_g1_ParamLimits

0xdabf,	// (0x0000f958) vkb2_top_entry_pane_g1

0xdacd,	// (0x0000f966) vkb2_top_entry_pane_t1_ParamLimits

0xdacd,	// (0x0000f966) vkb2_top_entry_pane_t1

0x7172,	// (0x0000900b) vkb2_top_entry_pane_t2_ParamLimits

0x7172,	// (0x0000900b) vkb2_top_entry_pane_t2

0x71a4,	// (0x0000903d) vkb2_top_entry_pane_t3_ParamLimits

0x71a4,	// (0x0000903d) vkb2_top_entry_pane_t3

0x0002,

0xfd83,	// (0x00011c1c) vkb2_top_entry_pane_t_ParamLimits

0xfd83,	// (0x00011c1c) vkb2_top_entry_pane_t

0xdb06,	// (0x0000f99f) vkb2_top_grid_right_pane_g1_ParamLimits

0xdb06,	// (0x0000f99f) vkb2_top_grid_right_pane_g1

0x720b,	// (0x000090a4) vkb2_top_grid_right_pane_g2_ParamLimits

0x720b,	// (0x000090a4) vkb2_top_grid_right_pane_g2

0x7223,	// (0x000090bc) vkb2_top_grid_right_pane_g3_ParamLimits

0x7223,	// (0x000090bc) vkb2_top_grid_right_pane_g3

0xdb1c,	// (0x0000f9b5) vkb2_top_grid_right_pane_g4_ParamLimits

0xdb1c,	// (0x0000f9b5) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8a,	// (0x00011c23) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8a,	// (0x00011c23) vkb2_top_grid_right_pane_g

0x7251,	// (0x000090ea) vkb2_top_cell_left_pane_g1

0x7268,	// (0x00009101) vkb2_cell_keypad_pane_g1_ParamLimits

0x7268,	// (0x00009101) vkb2_cell_keypad_pane_g1

0x7276,	// (0x0000910f) vkb2_cell_keypad_pane_t1_ParamLimits

0x7276,	// (0x0000910f) vkb2_cell_keypad_pane_t1

0x728d,	// (0x00009126) vkb2_cell_bottom_grid_pane_ParamLimits

0x728d,	// (0x00009126) vkb2_cell_bottom_grid_pane

0x72c6,	// (0x0000915f) vkb2_cell_bottom_grid_pane_g1

0xd43f,	// (0x0000f2d8) aid_call2_pane_cp02

0xd447,	// (0x0000f2e0) aid_call_pane_cp02

0xd44f,	// (0x0000f2e8) clock_digital_number_pane_cp10

0xd457,	// (0x0000f2f0) clock_digital_number_pane_cp11

0xd45f,	// (0x0000f2f8) clock_digital_number_pane_cp12

0xd467,	// (0x0000f300) clock_digital_number_pane_cp13

0xd46f,	// (0x0000f308) clock_digital_separator_pane_cp10

0xf403,	// (0x0001129c) popup_clock_digital_analogue_window_cp2_g1

0xf403,	// (0x0001129c) popup_clock_digital_analogue_window_cp2_g2

0xd477,	// (0x0000f310) popup_clock_digital_analogue_window_cp2_g3

0xf403,	// (0x0001129c) popup_clock_digital_analogue_window_cp2_g4

0xd477,	// (0x0000f310) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3f,	// (0x00011bd8) popup_clock_digital_analogue_window_cp2_g

0xd47f,	// (0x0000f318) popup_clock_digital_analogue_window_cp2_t1

0xd48d,	// (0x0000f326) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4a,	// (0x00011be3) popup_clock_digital_analogue_window_cp2_t

0x46e7,	// (0x00006580) clock_digital_number_pane_cp10_g1

0x46e7,	// (0x00006580) clock_digital_number_pane_cp10_g2

0x0001,

0xfb39,	// (0x000119d2) clock_digital_number_pane_cp10_g

0x46e7,	// (0x00006580) clock_digital_separator_pane_cp10_g1

0x46e7,	// (0x00006580) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb39,	// (0x000119d2) clock_digital_separator_pane_cp10_g

0xd33c,	// (0x0000f1d5) uniindi_top_pane_g3

0x681f,	// (0x000086b8) uniindi_top_pane_g4

0x6feb,	// (0x00008e84) vkb2_row_keypad_pane_ParamLimits

0x6feb,	// (0x00008e84) vkb2_row_keypad_pane

0x72e2,	// (0x0000917b) vkb2_cell_t_keypad_pane_ParamLimits

0x72e2,	// (0x0000917b) vkb2_cell_t_keypad_pane

0x72f2,	// (0x0000918b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x72f2,	// (0x0000918b) vkb2_cell_t_keypad_pane_cp08

0x7305,	// (0x0000919e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7305,	// (0x0000919e) vkb2_cell_t_keypad_pane_cp09

0x7319,	// (0x000091b2) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7319,	// (0x000091b2) vkb2_cell_t_keypad_pane_cp01

0x732a,	// (0x000091c3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x732a,	// (0x000091c3) vkb2_cell_t_keypad_pane_cp02

0x733b,	// (0x000091d4) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x733b,	// (0x000091d4) vkb2_cell_t_keypad_pane_cp03

0x734c,	// (0x000091e5) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x734c,	// (0x000091e5) vkb2_cell_t_keypad_pane_cp04

0x735d,	// (0x000091f6) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x735d,	// (0x000091f6) vkb2_cell_t_keypad_pane_cp05

0x736e,	// (0x00009207) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x736e,	// (0x00009207) vkb2_cell_t_keypad_pane_cp06

0x737f,	// (0x00009218) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x737f,	// (0x00009218) vkb2_cell_t_keypad_pane_cp07

0x7390,	// (0x00009229) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7390,	// (0x00009229) vkb2_cell_t_keypad_pane_cp10

0x4b6b,	// (0x00006a04) vkb2_cell_t_keypad_pane_g1

0x73a5,	// (0x0000923e) vkb2_cell_t_keypad_pane_t1

0xe766,	// (0x000105ff) popup_grid_graphic2_window

0xdb32,	// (0x0000f9cb) aid_size_cell_graphic2_ParamLimits

0xdb32,	// (0x0000f9cb) aid_size_cell_graphic2

0xdb70,	// (0x0000fa09) bg_popup_window_pane_cp21_ParamLimits

0xdb70,	// (0x0000fa09) bg_popup_window_pane_cp21

0xdb7e,	// (0x0000fa17) graphic2_pages_pane_ParamLimits

0xdb7e,	// (0x0000fa17) graphic2_pages_pane

0xdbd4,	// (0x0000fa6d) grid_graphic2_control_pane_ParamLimits

0xdbd4,	// (0x0000fa6d) grid_graphic2_control_pane

0xdc1c,	// (0x0000fab5) grid_graphic2_pane_ParamLimits

0xdc1c,	// (0x0000fab5) grid_graphic2_pane

0xdca3,	// (0x0000fb3c) cell_graphic2_pane

0xe766,	// (0x000105ff) main_comp_mode_pane

0x5f5d,	// (0x00007df6) list_ai3_gene_pane_ParamLimits

0xd088,	// (0x0000ef21) bg_popup_window_pane_cp19_ParamLimits

0x6390,	// (0x00008229) bg_touch_area_indi_pane_ParamLimits

0x6390,	// (0x00008229) bg_touch_area_indi_pane

0x63a6,	// (0x0000823f) bg_touch_area_indi_pane_cp01_ParamLimits

0x63a6,	// (0x0000823f) bg_touch_area_indi_pane_cp01

0x63bc,	// (0x00008255) bg_touch_area_indi_pane_cp02_ParamLimits

0x63bc,	// (0x00008255) bg_touch_area_indi_pane_cp02

0x63d4,	// (0x0000826d) bg_touch_area_indi_pane_cp03_ParamLimits

0x63d4,	// (0x0000826d) bg_touch_area_indi_pane_cp03

0x63ee,	// (0x00008287) popup_slider_window_g1_ParamLimits

0x640a,	// (0x000082a3) popup_slider_window_g2_ParamLimits

0x6426,	// (0x000082bf) popup_slider_window_g3_ParamLimits

0xfcd4,	// (0x00011b6d) popup_slider_window_g_ParamLimits

0x6482,	// (0x0000831b) popup_slider_window_t1_ParamLimits

0x64f6,	// (0x0000838f) small_volume_slider_vertical_pane_ParamLimits

0xdca3,	// (0x0000fb3c) cell_graphic2_pane_ParamLimits

0xdcfe,	// (0x0000fb97) bg_button_pane_cp10_ParamLimits

0xdcfe,	// (0x0000fb97) bg_button_pane_cp10

0xdd11,	// (0x0000fbaa) bg_button_pane_cp11_ParamLimits

0xdd11,	// (0x0000fbaa) bg_button_pane_cp11

0xdd24,	// (0x0000fbbd) graphic2_pages_pane_g1_ParamLimits

0xdd24,	// (0x0000fbbd) graphic2_pages_pane_g1

0xdd3f,	// (0x0000fbd8) graphic2_pages_pane_g2_ParamLimits

0xdd3f,	// (0x0000fbd8) graphic2_pages_pane_g2

0x0001,

0xfd98,	// (0x00011c31) graphic2_pages_pane_g_ParamLimits

0xfd98,	// (0x00011c31) graphic2_pages_pane_g

0xdd57,	// (0x0000fbf0) graphic2_pages_pane_t1_ParamLimits

0xdd57,	// (0x0000fbf0) graphic2_pages_pane_t1

0xdd6f,	// (0x0000fc08) cell_graphic2_control_pane_ParamLimits

0xdd6f,	// (0x0000fc08) cell_graphic2_control_pane

0xdda1,	// (0x0000fc3a) cell_graphic2_pane_g1_ParamLimits

0xdda1,	// (0x0000fc3a) cell_graphic2_pane_g1

0x4993,	// (0x0000682c) cell_graphic2_pane_g2_ParamLimits

0x4993,	// (0x0000682c) cell_graphic2_pane_g2

0xddae,	// (0x0000fc47) cell_graphic2_pane_g3_ParamLimits

0xddae,	// (0x0000fc47) cell_graphic2_pane_g3

0x49a0,	// (0x00006839) cell_graphic2_pane_g4_ParamLimits

0x49a0,	// (0x00006839) cell_graphic2_pane_g4

0xddbb,	// (0x0000fc54) cell_graphic2_pane_g5_ParamLimits

0xddbb,	// (0x0000fc54) cell_graphic2_pane_g5

0x0004,

0xfd9d,	// (0x00011c36) cell_graphic2_pane_g_ParamLimits

0xfd9d,	// (0x00011c36) cell_graphic2_pane_g

0xdddb,	// (0x0000fc74) cell_graphic2_pane_t1_ParamLimits

0xdddb,	// (0x0000fc74) cell_graphic2_pane_t1

0x2772,	// (0x0000460b) grid_highlight_pane_cp11_ParamLimits

0x2772,	// (0x0000460b) grid_highlight_pane_cp11

0xeaa9,	// (0x00010942) bg_button_pane_cp05

0xde27,	// (0x0000fcc0) cell_graphic2_control_pane_g1

0x46e7,	// (0x00006580) bg_touch_area_indi_pane_g1

0x7681,	// (0x0000951a) aid_cmod_rocker_key_size

0x768b,	// (0x00009524) aid_cmode_itu_key_size

0x7695,	// (0x0000952e) main_cmode_video_pane

0x769f,	// (0x00009538) main_comp_mode_itu_pane

0x76ab,	// (0x00009544) main_comp_mode_rocker_pane

0x76b7,	// (0x00009550) cell_cmode_rocker_pane_ParamLimits

0x76b7,	// (0x00009550) cell_cmode_rocker_pane

0x76c9,	// (0x00009562) cell_cmode_itu_pane_ParamLimits

0x76c9,	// (0x00009562) cell_cmode_itu_pane

0xeda7,	// (0x00010c40) bg_button_pane_cp06_ParamLimits

0xeda7,	// (0x00010c40) bg_button_pane_cp06

0x4b6b,	// (0x00006a04) cell_cmode_rocker_pane_g1_ParamLimits

0x4b6b,	// (0x00006a04) cell_cmode_rocker_pane_g1

0x666b,	// (0x00008504) cell_cmode_rocker_pane_g2_ParamLimits

0x666b,	// (0x00008504) cell_cmode_rocker_pane_g2

0x0001,

0xfdad,	// (0x00011c46) cell_cmode_rocker_pane_g_ParamLimits

0xfdad,	// (0x00011c46) cell_cmode_rocker_pane_g

0xe766,	// (0x000105ff) bg_button_pane_cp07

0x76de,	// (0x00009577) cell_cmode_itu_pane_g1

0x76e7,	// (0x00009580) cell_cmode_itu_pane_t1

0x76f5,	// (0x0000958e) cell_cmode_itu_pane_t2

0x0001,

0xfdb2,	// (0x00011c4b) cell_cmode_itu_pane_t

0x6890,	// (0x00008729) aid_touch_ctrl_left

0x6898,	// (0x00008731) aid_touch_ctrl_right

0xe766,	// (0x000105ff) compa_mode_pane

0xde4d,	// (0x0000fce6) aid_cmod_rocker_key_size_cp

0xde57,	// (0x0000fcf0) aid_cmode_itu_key_size_cp

0x7717,	// (0x000095b0) compa_mode_pane_g1

0x771f,	// (0x000095b8) compa_mode_pane_g2

0x7727,	// (0x000095c0) compa_mode_pane_g3

0x0002,

0xfdb7,	// (0x00011c50) compa_mode_pane_g

0xde61,	// (0x0000fcfa) main_comp_mode_itu_pane_cp

0xde69,	// (0x0000fd02) main_comp_mode_rocker_pane_cp

0xde71,	// (0x0000fd0a) cell_cmode_itu_pane_cp_ParamLimits

0xde71,	// (0x0000fd0a) cell_cmode_itu_pane_cp

0xde86,	// (0x0000fd1f) cell_cmode_rocker_pane_cp_ParamLimits

0xde86,	// (0x0000fd1f) cell_cmode_rocker_pane_cp

0xeda7,	// (0x00010c40) bg_button_pane_cp06_cp_ParamLimits

0xeda7,	// (0x00010c40) bg_button_pane_cp06_cp

0x4b6b,	// (0x00006a04) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4b6b,	// (0x00006a04) cell_cmode_rocker_pane_g1_cp

0x46e7,	// (0x00006580) cell_cmode_rocker_pane_g2_cp

0xe766,	// (0x000105ff) bg_button_pane_cp07_cp

0xde98,	// (0x0000fd31) cell_cmode_itu_pane_g1_cp

0xdea1,	// (0x0000fd3a) cell_cmode_itu_pane_t1_cp

0xdea1,	// (0x0000fd3a) cell_cmode_itu_pane_t2_cp

0xc09b,	// (0x0000df34) settings_code_pane_cp2

0xe965,	// (0x000107fe) bg_popup_window_pane_cp3_ParamLimits

0xebc2,	// (0x00010a5b) heading_pane_cp3_ParamLimits

0xebce,	// (0x00010a67) listscroll_popup_graphic_pane_ParamLimits

0x4751,	// (0x000065ea) fep_hwr_aid_pane_ParamLimits

0x6571,	// (0x0000840a) aid_touch_sctrl_top_ParamLimits

0x657e,	// (0x00008417) sctrl_sk_top_pane_g1_ParamLimits

0x4b6b,	// (0x00006a04) sctrl_sk_top_pane_g2_ParamLimits

0xfced,	// (0x00011b86) sctrl_sk_top_pane_g_ParamLimits

0x658b,	// (0x00008424) sctrl_sk_top_pane_t1_ParamLimits

0x6571,	// (0x0000840a) aid_touch_sctrl_bottom_ParamLimits

0x658b,	// (0x00008424) sctrl_sk_bottom_pane_t1_ParamLimits

0xd308,	// (0x0000f1a1) aid_area_touch_clock

0xd903,	// (0x0000f79c) aid_vkb2_area_top_pane_cell_ParamLimits

0xd903,	// (0x0000f79c) aid_vkb2_area_top_pane_cell

0xd9ae,	// (0x0000f847) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd9ae,	// (0x0000f847) aid_vkb2_area_bottom_pane_cell

0x712a,	// (0x00008fc3) popup_char_count_window

0x777d,	// (0x00009616) popup_char_count_window_g1

0x7786,	// (0x0000961f) popup_char_count_window_g2

0x778f,	// (0x00009628) popup_char_count_window_g3

0x0002,

0xfdbe,	// (0x00011c57) popup_char_count_window_g

0x7798,	// (0x00009631) popup_char_count_window_t1

0x6d88,	// (0x00008c21) popup_fep_char_preview_window_ParamLimits

0x6d88,	// (0x00008c21) popup_fep_char_preview_window

0xd923,	// (0x0000f7bc) vkb2_top_candi_pane_ParamLimits

0xd923,	// (0x0000f7bc) vkb2_top_candi_pane

0xdeaf,	// (0x0000fd48) cell_vkb2_top_candi_pane_ParamLimits

0xdeaf,	// (0x0000fd48) cell_vkb2_top_candi_pane

0x1fbd,	// (0x00003e56) bg_popup_fep_char_preview_window_ParamLimits

0x1fbd,	// (0x00003e56) bg_popup_fep_char_preview_window

0x77f3,	// (0x0000968c) popup_fep_char_preview_window_t1_ParamLimits

0x77f3,	// (0x0000968c) popup_fep_char_preview_window_t1

0x782d,	// (0x000096c6) bg_popup_fep_char_preview_window_g1

0x7835,	// (0x000096ce) bg_popup_fep_char_preview_window_g2

0x783d,	// (0x000096d6) bg_popup_fep_char_preview_window_g3

0x7845,	// (0x000096de) bg_popup_fep_char_preview_window_g4

0x784d,	// (0x000096e6) bg_popup_fep_char_preview_window_g5

0x7855,	// (0x000096ee) bg_popup_fep_char_preview_window_g6

0x785d,	// (0x000096f6) bg_popup_fep_char_preview_window_g7

0x7865,	// (0x000096fe) bg_popup_fep_char_preview_window_g8

0x786d,	// (0x00009706) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc5,	// (0x00011c5e) bg_popup_fep_char_preview_window_g

0x4b6b,	// (0x00006a04) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4b6b,	// (0x00006a04) cell_vkb2_top_candi_pane_g1

0x4ed6,	// (0x00006d6f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4ed6,	// (0x00006d6f) cell_vkb2_top_candi_pane_g2

0x4ef7,	// (0x00006d90) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4ef7,	// (0x00006d90) cell_vkb2_top_candi_pane_g3

0x7875,	// (0x0000970e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7875,	// (0x0000970e) cell_vkb2_top_candi_pane_g4

0x7896,	// (0x0000972f) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7896,	// (0x0000972f) cell_vkb2_top_candi_pane_g5

0x666b,	// (0x00008504) cell_vkb2_top_candi_pane_g6_ParamLimits

0x666b,	// (0x00008504) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd8,	// (0x00011c71) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd8,	// (0x00011c71) cell_vkb2_top_candi_pane_g

0x78b7,	// (0x00009750) cell_vkb2_top_candi_pane_t1

0xbebb,	// (0x0000dd54) aid_size_touch_slider_mark_ParamLimits

0xbebb,	// (0x0000dd54) aid_size_touch_slider_mark

0xdbba,	// (0x0000fa53) grid_graphic2_catg_pane_ParamLimits

0xdbba,	// (0x0000fa53) grid_graphic2_catg_pane

0xdc76,	// (0x0000fb0f) popup_grid_graphic2_window_t1_ParamLimits

0xdc76,	// (0x0000fb0f) popup_grid_graphic2_window_t1

0xdc8c,	// (0x0000fb25) popup_grid_graphic2_window_t2_ParamLimits

0xdc8c,	// (0x0000fb25) popup_grid_graphic2_window_t2

0x0001,

0xfd93,	// (0x00011c2c) popup_grid_graphic2_window_t_ParamLimits

0xfd93,	// (0x00011c2c) popup_grid_graphic2_window_t

0xeaa9,	// (0x00010942) bg_button_pane_cp05_ParamLimits

0xde27,	// (0x0000fcc0) cell_graphic2_control_pane_g1_ParamLimits

0xdf15,	// (0x0000fdae) cell_graphic2_catg_pane_ParamLimits

0xdf15,	// (0x0000fdae) cell_graphic2_catg_pane

0xe766,	// (0x000105ff) bg_button_pane_cp12

0xdf27,	// (0x0000fdc0) cell_graphic2_catg_pane_g1

0x67a5,	// (0x0000863e) cell_tb_ext_pane_t1_ParamLimits

0x71c8,	// (0x00009061) vkb2_top_cell_right_narrow_pane_ParamLimits

0x71c8,	// (0x00009061) vkb2_top_cell_right_narrow_pane

0x71e0,	// (0x00009079) vkb2_top_cell_right_wide_pane_ParamLimits

0x71e0,	// (0x00009079) vkb2_top_cell_right_wide_pane

0x4743,	// (0x000065dc) bg_vkb2_func_pane_ParamLimits

0x4743,	// (0x000065dc) bg_vkb2_func_pane

0x7251,	// (0x000090ea) vkb2_top_cell_left_pane_g1_ParamLimits

0x4743,	// (0x000065dc) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4743,	// (0x000065dc) bg_vkb2_fuc_pane_cp03

0x72c6,	// (0x0000915f) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x176a,	// (0x00003603) bg_vkb2_func_pane_g1

0x1772,	// (0x0000360b) bg_vkb2_func_pane_g2

0x1782,	// (0x0000361b) bg_vkb2_func_pane_g3

0x177a,	// (0x00003613) bg_vkb2_func_pane_g4

0x178a,	// (0x00003623) bg_vkb2_func_pane_g5

0x1792,	// (0x0000362b) bg_vkb2_func_pane_g6

0x179a,	// (0x00003633) bg_vkb2_func_pane_g7

0x17a2,	// (0x0000363b) bg_vkb2_func_pane_g8

0x1762,	// (0x000035fb) bg_vkb2_func_pane_g9

0x0008,

0xfde5,	// (0x00011c7e) bg_vkb2_func_pane_g

0x4743,	// (0x000065dc) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4743,	// (0x000065dc) bg_vkb2_fuc_pane_cp01

0x7251,	// (0x000090ea) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7251,	// (0x000090ea) vkb2_top_cell_right_wide_pane_g1

0x4743,	// (0x000065dc) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4743,	// (0x000065dc) bg_vkb2_fuc_pane_cp02

0x72c6,	// (0x0000915f) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x72c6,	// (0x0000915f) vkb2_top_cell_right_narrow_pane_g1

0xcfc6,	// (0x0000ee5f) aid_touch_area_decrease_ParamLimits

0xcfc6,	// (0x0000ee5f) aid_touch_area_decrease

0xcffc,	// (0x0000ee95) aid_touch_area_increase_ParamLimits

0xcffc,	// (0x0000ee95) aid_touch_area_increase

0xd024,	// (0x0000eebd) aid_touch_area_mute_ParamLimits

0xd024,	// (0x0000eebd) aid_touch_area_mute

0xd054,	// (0x0000eeed) aid_touch_area_slider_ParamLimits

0xd054,	// (0x0000eeed) aid_touch_area_slider

0xd094,	// (0x0000ef2d) popup_slider_window_g4_ParamLimits

0xd094,	// (0x0000ef2d) popup_slider_window_g4

0xd0bc,	// (0x0000ef55) popup_slider_window_g5_ParamLimits

0xd0bc,	// (0x0000ef55) popup_slider_window_g5

0xd0f0,	// (0x0000ef89) popup_slider_window_g6_ParamLimits

0xd0f0,	// (0x0000ef89) popup_slider_window_g6

0x64b0,	// (0x00008349) popup_slider_window_t2_ParamLimits

0x64b0,	// (0x00008349) popup_slider_window_t2

0x0001,

0xfce1,	// (0x00011b7a) popup_slider_window_t_ParamLimits

0xfce1,	// (0x00011b7a) popup_slider_window_t

0xd10c,	// (0x0000efa5) slider_pane_ParamLimits

0xd10c,	// (0x0000efa5) slider_pane

0x78f1,	// (0x0000978a) slider_pane_g1_ParamLimits

0x78f1,	// (0x0000978a) slider_pane_g1

0x7905,	// (0x0000979e) slider_pane_g2_ParamLimits

0x7905,	// (0x0000979e) slider_pane_g2

0x791b,	// (0x000097b4) slider_pane_g3_ParamLimits

0x791b,	// (0x000097b4) slider_pane_g3

0x0003,

0xfdf8,	// (0x00011c91) slider_pane_g_ParamLimits

0xfdf8,	// (0x00011c91) slider_pane_g

0xb22d,	// (0x0000d0c6) popup_tb_float_extension_window_ParamLimits

0xb22d,	// (0x0000d0c6) popup_tb_float_extension_window

0x7947,	// (0x000097e0) aid_size_cell_tb_float_ext

0xe766,	// (0x000105ff) bg_popup_sub_window_cp28

0xdf30,	// (0x0000fdc9) grid_tb_float_ext_pane

0xdf3a,	// (0x0000fdd3) cell_tb_float_ext_pane_ParamLimits

0xdf3a,	// (0x0000fdd3) cell_tb_float_ext_pane

0xdf54,	// (0x0000fded) cell_tb_float_ext_pane_g1

0xdf5d,	// (0x0000fdf6) grid_highlight_pane_cp12

0xc638,	// (0x0000e4d1) cell_last_hwr_side_pane_ParamLimits

0xc638,	// (0x0000e4d1) cell_last_hwr_side_pane

0x46e7,	// (0x00006580) cell_last_hwr_side_pane_g1

0x7989,	// (0x00009822) cell_last_hwr_side_pane_g2

0x0001,

0xfe01,	// (0x00011c9a) cell_last_hwr_side_pane_g

0xda8a,	// (0x0000f923) vkb2_area_bottom_space_btn_pane_ParamLimits

0xda8a,	// (0x0000f923) vkb2_area_bottom_space_btn_pane

0x4b6b,	// (0x00006a04) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x73a5,	// (0x0000923e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x78b7,	// (0x00009750) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7992,	// (0x0000982b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7992,	// (0x0000982b) vkb2_area_bottom_space_btn_pane_g1

0x79cc,	// (0x00009865) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x79cc,	// (0x00009865) vkb2_area_bottom_space_btn_pane_g2

0x7a02,	// (0x0000989b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7a02,	// (0x0000989b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe06,	// (0x00011c9f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe06,	// (0x00011c9f) vkb2_area_bottom_space_btn_pane_g

0x4806,	// (0x0000669f) cel_fep_hwr_func_pane_ParamLimits

0x4806,	// (0x0000669f) cel_fep_hwr_func_pane

0xc60d,	// (0x0000e4a6) cell_hwr_side_button_pane_ParamLimits

0xc60d,	// (0x0000e4a6) cell_hwr_side_button_pane

0xd308,	// (0x0000f1a1) aid_area_touch_clock_ParamLimits

0xeaa9,	// (0x00010942) bg_uniindi_top_pane_ParamLimits

0xd31a,	// (0x0000f1b3) uniindi_top_pane_g1_ParamLimits

0xd330,	// (0x0000f1c9) uniindi_top_pane_g2_ParamLimits

0xd33c,	// (0x0000f1d5) uniindi_top_pane_g3_ParamLimits

0x681f,	// (0x000086b8) uniindi_top_pane_g4_ParamLimits

0xfd19,	// (0x00011bb2) uniindi_top_pane_g_ParamLimits

0xd34d,	// (0x0000f1e6) uniindi_top_pane_t1_ParamLimits

0xeaa9,	// (0x00010942) bg_vkb2_func_pane_cp01_ParamLimits

0xeaa9,	// (0x00010942) bg_vkb2_func_pane_cp01

0x7a4c,	// (0x000098e5) cel_fep_hwr_func_pane_g1_ParamLimits

0x7a4c,	// (0x000098e5) cel_fep_hwr_func_pane_g1

0xeaa9,	// (0x00010942) bg_vkb2_func_pane_cp02_ParamLimits

0xeaa9,	// (0x00010942) bg_vkb2_func_pane_cp02

0x7a4c,	// (0x000098e5) cell_hwr_side_button_pane_g1_ParamLimits

0x7a4c,	// (0x000098e5) cell_hwr_side_button_pane_g1

0x1542,	// (0x000033db) status_pane_g4_ParamLimits

0x1542,	// (0x000033db) status_pane_g4

0x155c,	// (0x000033f5) status_pane_t1

0x4428,	// (0x000062c1) form2_midp_gauge_slider_cont_pane

0x4430,	// (0x000062c9) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc50a,	// (0x0000e3a3) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc51c,	// (0x0000e3b5) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaec,	// (0x00011985) form2_midp_gauge_slider_pane_t_ParamLimits

0x4466,	// (0x000062ff) form2_midp_slider_pane_ParamLimits

0x6d48,	// (0x00008be1) aid_size_cell_func_vkb2_ParamLimits

0x6d48,	// (0x00008be1) aid_size_cell_func_vkb2

0x7933,	// (0x000097cc) slider_pane_g4_ParamLimits

0x7933,	// (0x000097cc) slider_pane_g4

0xdf66,	// (0x0000fdff) form2_midp_gauge_slider_pane_t2_cp01

0xdf74,	// (0x0000fe0d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xdf74,	// (0x0000fe0d) form2_midp_gauge_slider_pane_t3_cp01

0x7a85,	// (0x0000991e) form2_midp_slider_pane_cp01

0xe766,	// (0x000105ff) navi_smil_pane

0x7ab9,	// (0x00009952) navi_smil_pane_g1

0x7ac1,	// (0x0000995a) navi_smil_pane_t1

0x7a8e,	// (0x00009927) form2_midp_slider_pane_g1

0x7a97,	// (0x00009930) form2_midp_slider_pane_g2

0x7a9f,	// (0x00009938) form2_midp_slider_pane_g3

0x7a8e,	// (0x00009927) form2_midp_slider_pane_g4

0xdf91,	// (0x0000fe2a) form2_midp_slider_pane_g5

0x0004,

0xfe0f,	// (0x00011ca8) form2_midp_slider_pane_g

0x7a3c,	// (0x000098d5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7a3c,	// (0x000098d5) vkb2_area_bottom_space_btn_pane_g4

0xb465,	// (0x0000d2fe) lc0_navi_pane_ParamLimits

0xb465,	// (0x0000d2fe) lc0_navi_pane

0xb4cf,	// (0x0000d368) lc0_stat_indi_pane_ParamLimits

0xb4cf,	// (0x0000d368) lc0_stat_indi_pane

0xb4e4,	// (0x0000d37d) ls0_title_pane_ParamLimits

0xb4e4,	// (0x0000d37d) ls0_title_pane

0xeda7,	// (0x00010c40) bg_popup_sub_pane_cp14_ParamLimits

0xd2ef,	// (0x0000f188) list_uniindi_pane_ParamLimits

0xd2fb,	// (0x0000f194) uniindi_top_pane_ParamLimits

0x6868,	// (0x00008701) list_single_uniindi_pane_g1_ParamLimits

0x687b,	// (0x00008714) list_single_uniindi_pane_t1_ParamLimits

0xdf9c,	// (0x0000fe35) lc0_stat_clock_pane_ParamLimits

0xdf9c,	// (0x0000fe35) lc0_stat_clock_pane

0xdfac,	// (0x0000fe45) lc0_stat_indi_pane_g1_ParamLimits

0xdfac,	// (0x0000fe45) lc0_stat_indi_pane_g1

0xdfb9,	// (0x0000fe52) lc0_stat_indi_pane_g2_ParamLimits

0xdfb9,	// (0x0000fe52) lc0_stat_indi_pane_g2

0x0001,

0xfe1a,	// (0x00011cb3) lc0_stat_indi_pane_g_ParamLimits

0xfe1a,	// (0x00011cb3) lc0_stat_indi_pane_g

0xdfc6,	// (0x0000fe5f) lc0_uni_indicator_pane_ParamLimits

0xdfc6,	// (0x0000fe5f) lc0_uni_indicator_pane

0xdfd6,	// (0x0000fe6f) ls0_title_pane_g1_ParamLimits

0xdfd6,	// (0x0000fe6f) ls0_title_pane_g1

0xdfea,	// (0x0000fe83) ls0_title_pane_t1_ParamLimits

0xdfea,	// (0x0000fe83) ls0_title_pane_t1

0xe018,	// (0x0000feb1) lc0_uni_indicator_pane_g1_ParamLimits

0xe018,	// (0x0000feb1) lc0_uni_indicator_pane_g1

0x7b61,	// (0x000099fa) lc0_stat_clock_pane_t1

0xe766,	// (0x000105ff) main_ai5_pane

0x7b6f,	// (0x00009a08) ai5_sk_pane_ParamLimits

0x7b6f,	// (0x00009a08) ai5_sk_pane

0xe043,	// (0x0000fedc) cell_ai5_widget_pane_ParamLimits

0xe043,	// (0x0000fedc) cell_ai5_widget_pane

0x7c2e,	// (0x00009ac7) aid_size_cell_widget_grid

0x7c3c,	// (0x00009ad5) bg_ai5_widget_pane_ParamLimits

0x7c3c,	// (0x00009ad5) bg_ai5_widget_pane

0x7cb0,	// (0x00009b49) cell_ai5_widget_pane_g2

0x7cc0,	// (0x00009b59) cell_ai5_widget_pane_g3

0x7cd7,	// (0x00009b70) cell_ai5_widget_pane_g4

0x7ce3,	// (0x00009b7c) cell_ai5_widget_pane_g5

0x7cef,	// (0x00009b88) cell_ai5_widget_pane_g6

0x7cfb,	// (0x00009b94) cell_ai5_widget_pane_g7

0x7d43,	// (0x00009bdc) cell_ai5_widget_pane_t1_ParamLimits

0x7d43,	// (0x00009bdc) cell_ai5_widget_pane_t1

0x7d60,	// (0x00009bf9) cell_ai5_widget_pane_t2_ParamLimits

0x7d60,	// (0x00009bf9) cell_ai5_widget_pane_t2

0x7d78,	// (0x00009c11) cell_ai5_widget_pane_t3_ParamLimits

0x7d78,	// (0x00009c11) cell_ai5_widget_pane_t3

0x7d90,	// (0x00009c29) cell_ai5_widget_pane_t4_ParamLimits

0x7d90,	// (0x00009c29) cell_ai5_widget_pane_t4

0x7dad,	// (0x00009c46) cell_ai5_widget_pane_t5_ParamLimits

0x7dad,	// (0x00009c46) cell_ai5_widget_pane_t5

0x7dcc,	// (0x00009c65) cell_ai5_widget_pane_t6_ParamLimits

0x7dcc,	// (0x00009c65) cell_ai5_widget_pane_t6

0x7dde,	// (0x00009c77) cell_ai5_widget_pane_t7_ParamLimits

0x7dde,	// (0x00009c77) cell_ai5_widget_pane_t7

0x7df7,	// (0x00009c90) cell_ai5_widget_pane_t8_ParamLimits

0x7df7,	// (0x00009c90) cell_ai5_widget_pane_t8

0x0009,

0xfe34,	// (0x00011ccd) cell_ai5_widget_pane_t_ParamLimits

0xfe34,	// (0x00011ccd) cell_ai5_widget_pane_t

0x7e4b,	// (0x00009ce4) grid_ai5_widget_pane

0xeda7,	// (0x00010c40) highlight_cell_ai5_widget_pane_ParamLimits

0xeda7,	// (0x00010c40) highlight_cell_ai5_widget_pane

0xe0a9,	// (0x0000ff42) ai5_sk_left_pane

0xe0b3,	// (0x0000ff4c) ai5_sk_middle_pane

0xe0bd,	// (0x0000ff56) ai5_sk_right_pane

0x7e77,	// (0x00009d10) bg_ai5_widget_pane_g1_ParamLimits

0x7e77,	// (0x00009d10) bg_ai5_widget_pane_g1

0x7e83,	// (0x00009d1c) bg_ai5_widget_pane_g2_ParamLimits

0x7e83,	// (0x00009d1c) bg_ai5_widget_pane_g2

0x7e8f,	// (0x00009d28) bg_ai5_widget_pane_g3_ParamLimits

0x7e8f,	// (0x00009d28) bg_ai5_widget_pane_g3

0x7e9b,	// (0x00009d34) bg_ai5_widget_pane_g4_ParamLimits

0x7e9b,	// (0x00009d34) bg_ai5_widget_pane_g4

0x7ea7,	// (0x00009d40) bg_ai5_widget_pane_g5_ParamLimits

0x7ea7,	// (0x00009d40) bg_ai5_widget_pane_g5

0x7eb3,	// (0x00009d4c) bg_ai5_widget_pane_g6_ParamLimits

0x7eb3,	// (0x00009d4c) bg_ai5_widget_pane_g6

0x7ebf,	// (0x00009d58) bg_ai5_widget_pane_g7_ParamLimits

0x7ebf,	// (0x00009d58) bg_ai5_widget_pane_g7

0x7ecb,	// (0x00009d64) bg_ai5_widget_pane_g8_ParamLimits

0x7ecb,	// (0x00009d64) bg_ai5_widget_pane_g8

0x7ed7,	// (0x00009d70) bg_ai5_widget_pane_g9_ParamLimits

0x7ed7,	// (0x00009d70) bg_ai5_widget_pane_g9

0x0008,

0xfe49,	// (0x00011ce2) bg_ai5_widget_pane_g_ParamLimits

0xfe49,	// (0x00011ce2) bg_ai5_widget_pane_g

0x7f09,	// (0x00009da2) cell_shortcut_ai5_widget_pane_ParamLimits

0x7f09,	// (0x00009da2) cell_shortcut_ai5_widget_pane

0x0685,	// (0x0000251e) bg_cell_shortcut_ai5_widget_pane

0x7f1a,	// (0x00009db3) cell_grid_ai5_widget_pane_g1

0x0685,	// (0x0000251e) highlight_cell_shortcut_ai5_widget_pane

0x1772,	// (0x0000360b) ai5_sk_left_pane_g1

0x7f23,	// (0x00009dbc) ai5_sk_left_pane_g2

0x7f2b,	// (0x00009dc4) ai5_sk_left_pane_g3

0x7f33,	// (0x00009dcc) ai5_sk_left_pane_g4

0x0003,

0xfe5c,	// (0x00011cf5) ai5_sk_left_pane_g

0x7f3b,	// (0x00009dd4) ai5_sk_left_pane_t1

0x176a,	// (0x00003603) ai5_sk_right_pane_g1

0x7f49,	// (0x00009de2) ai5_sk_right_pane_g2

0x7f51,	// (0x00009dea) ai5_sk_right_pane_g3

0x7f59,	// (0x00009df2) ai5_sk_right_pane_g4

0x0003,

0xfe65,	// (0x00011cfe) ai5_sk_right_pane_g

0x7f61,	// (0x00009dfa) ai5_sk_right_pane_t1

0x176a,	// (0x00003603) ai5_sk_middle_pane_g1

0x1772,	// (0x0000360b) ai5_sk_middle_pane_g2

0x178a,	// (0x00003623) ai5_sk_middle_pane_g3

0x7f51,	// (0x00009dea) ai5_sk_middle_pane_g4

0x7f2b,	// (0x00009dc4) ai5_sk_middle_pane_g5

0x7f6f,	// (0x00009e08) ai5_sk_middle_pane_g6

0xe0c7,	// (0x0000ff60) ai5_sk_middle_pane_g7

0x0006,

0xfe6e,	// (0x00011d07) ai5_sk_middle_pane_g

0xb351,	// (0x0000d1ea) aid_touch_area_size_lc0_ParamLimits

0xb351,	// (0x0000d1ea) aid_touch_area_size_lc0

0x4f18,	// (0x00006db1) cell_hwr_candidate_pane_t1_ParamLimits

0x1213,	// (0x000030ac) aid_touch_navi_pane

0xb5dd,	// (0x0000d476) status_dt_navi_pane_ParamLimits

0xb5dd,	// (0x0000d476) status_dt_navi_pane

0xb5f5,	// (0x0000d48e) status_dt_sta_pane_ParamLimits

0xb5f5,	// (0x0000d48e) status_dt_sta_pane

0xe0cf,	// (0x0000ff68) dt_sta_controll_pane

0xe0dc,	// (0x0000ff75) dt_sta_indi_pane

0xe0e9,	// (0x0000ff82) dt_sta_title_pane

0xeaa9,	// (0x00010942) bg_dt_sta_indi_pane_ParamLimits

0xeaa9,	// (0x00010942) bg_dt_sta_indi_pane

0xe0fb,	// (0x0000ff94) dt_sta_battery_pane

0xe103,	// (0x0000ff9c) dt_sta_indi_pane_g1

0x7fc1,	// (0x00009e5a) dt_sta_indi_pane_g2

0x7fca,	// (0x00009e63) dt_sta_indi_pane_g3

0x0002,

0xfe7d,	// (0x00011d16) dt_sta_indi_pane_g

0x7fd3,	// (0x00009e6c) dt_sta_signal_pane

0xeda7,	// (0x00010c40) bg_dt_sta_title_pane_ParamLimits

0xeda7,	// (0x00010c40) bg_dt_sta_title_pane

0x28e3,	// (0x0000477c) dt_sta_title_pane_g1

0xe10c,	// (0x0000ffa5) dt_sta_title_pane_t1_ParamLimits

0xe10c,	// (0x0000ffa5) dt_sta_title_pane_t1

0xe766,	// (0x000105ff) bg_dt_sta_control_pane

0xe121,	// (0x0000ffba) dt_sta_controll_pane_g1

0xe12a,	// (0x0000ffc3) bg_dt_sta_title_pane_g1

0xe133,	// (0x0000ffcc) bg_dt_sta_title_pane_g2

0xe13c,	// (0x0000ffd5) bg_dt_sta_title_pane_g3

0x0002,

0xfe84,	// (0x00011d1d) bg_dt_sta_title_pane_g

0x46e7,	// (0x00006580) bg_dt_sta_indi_pane_g1

0x8015,	// (0x00009eae) dt_sta_signal_pane_g1

0x801d,	// (0x00009eb6) dt_sta_signal_pane_g2

0x0001,

0xfe8b,	// (0x00011d24) dt_sta_signal_pane_g

0x8025,	// (0x00009ebe) dt_sta_battery_pane_g1

0x802e,	// (0x00009ec7) dt_sta_battery_pane_t1

0x46e7,	// (0x00006580) bg_dt_sta_control_pane_g1

0xf51a,	// (0x000113b3) fep_china_uni_eep_pane

0xf522,	// (0x000113bb) fep_china_uni_entry_pane_ParamLimits

0xf532,	// (0x000113cb) popup_fep_china_uni_window_g1_ParamLimits

0xf542,	// (0x000113db) popup_fep_china_uni_window_g2_ParamLimits

0xf542,	// (0x000113db) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x000115a7) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x000115a7) popup_fep_china_uni_window_g

0x803d,	// (0x00009ed6) fep_china_uni_eep_pane_g1

0x8045,	// (0x00009ede) fep_china_uni_eep_pane_t1

0x7ab0,	// (0x00009949) aid_touch_area_size_smil_player

0x1369,	// (0x00003202) lc0_clock_pane

0x1550,	// (0x000033e9) status_pane_g5_ParamLimits

0x1550,	// (0x000033e9) status_pane_g5

0xad63,	// (0x0000cbfc) popup_keymap_window

0x150e,	// (0x000033a7) status_icon_pane

0x7cc0,	// (0x00009b59) cell_ai5_widget_pane_g3_ParamLimits

0x7cd7,	// (0x00009b70) cell_ai5_widget_pane_g4_ParamLimits

0x7ce3,	// (0x00009b7c) cell_ai5_widget_pane_g5_ParamLimits

0x7d07,	// (0x00009ba0) cell_ai5_widget_pane_g8_ParamLimits

0x7d07,	// (0x00009ba0) cell_ai5_widget_pane_g8

0x7d1b,	// (0x00009bb4) cell_ai5_widget_pane_g9_ParamLimits

0x7d1b,	// (0x00009bb4) cell_ai5_widget_pane_g9

0x7d2f,	// (0x00009bc8) cell_ai5_widget_pane_g10_ParamLimits

0x7d2f,	// (0x00009bc8) cell_ai5_widget_pane_g10

0x8054,	// (0x00009eed) status_icon_pane_g1

0xe766,	// (0x000105ff) bg_popup_sub_pane_cp13

0x805c,	// (0x00009ef5) popup_keymap_window_t1

0xaa13,	// (0x0000c8ac) control_pane_g6_ParamLimits

0xaa13,	// (0x0000c8ac) control_pane_g6

0xaa20,	// (0x0000c8b9) control_pane_g7_ParamLimits

0xaa20,	// (0x0000c8b9) control_pane_g7

0xaa2d,	// (0x0000c8c6) control_pane_g8_ParamLimits

0xaa2d,	// (0x0000c8c6) control_pane_g8

0xe0cf,	// (0x0000ff68) dt_sta_controll_pane_ParamLimits

0xe0dc,	// (0x0000ff75) dt_sta_indi_pane_ParamLimits

0xe0e9,	// (0x0000ff82) dt_sta_title_pane_ParamLimits

0xec7c,	// (0x00010b15) aid_size_touch_scroll_bar_cale

0x96d6,	// (0x0000b56f) popup_discreet_window_ParamLimits

0x96d6,	// (0x0000b56f) popup_discreet_window

0x9728,	// (0x0000b5c1) popup_sk_window

0x1fbd,	// (0x00003e56) bg_popup_sub_pane_cp28_ParamLimits

0x1fbd,	// (0x00003e56) bg_popup_sub_pane_cp28

0x806a,	// (0x00009f03) popup_discreet_window_g1_ParamLimits

0x806a,	// (0x00009f03) popup_discreet_window_g1

0xe145,	// (0x0000ffde) popup_discreet_window_t1_ParamLimits

0xe145,	// (0x0000ffde) popup_discreet_window_t1

0x80a8,	// (0x00009f41) popup_discreet_window_t2_ParamLimits

0x80a8,	// (0x00009f41) popup_discreet_window_t2

0x0002,

0xfe90,	// (0x00011d29) popup_discreet_window_t_ParamLimits

0xfe90,	// (0x00011d29) popup_discreet_window_t

0x80fa,	// (0x00009f93) popup_sk_window_g1

0x8104,	// (0x00009f9d) popup_sk_window_g2

0x0001,

0xfe97,	// (0x00011d30) popup_sk_window_g

0xe163,	// (0x0000fffc) popup_sk_window_t1

0xe171,	// (0x0001000a) popup_sk_window_t1_copy1

0x7cb0,	// (0x00009b49) cell_ai5_widget_pane_g2_ParamLimits

0x7e09,	// (0x00009ca2) cell_ai5_widget_pane_t9_ParamLimits

0x7e09,	// (0x00009ca2) cell_ai5_widget_pane_t9

0xe766,	// (0x000105ff) main_fep_fshwr2_pane

0xe17f,	// (0x00010018) aid_fshwr2_btn_pane

0xe191,	// (0x0001002a) aid_fshwr2_syb_pane

0xe1a3,	// (0x0001003c) aid_fshwr2_txt_pane

0xe1b2,	// (0x0001004b) fshwr2_func_candi_pane

0xe1d1,	// (0x0001006a) fshwr2_hwr_syb_pane

0xe1ec,	// (0x00010085) fshwr2_icf_pane

0xe766,	// (0x000105ff) fshwr2_icf_bg_pane

0x81a9,	// (0x0000a042) fshwr2_icf_pane_t1_ParamLimits

0x81a9,	// (0x0000a042) fshwr2_icf_pane_t1

0xf403,	// (0x0001129c) fshwr2_func_candi_pane_g1

0xe218,	// (0x000100b1) fshwr2_func_candi_row_pane_ParamLimits

0xe218,	// (0x000100b1) fshwr2_func_candi_row_pane

0xe23b,	// (0x000100d4) cell_fshwr2_syb_pane_ParamLimits

0xe23b,	// (0x000100d4) cell_fshwr2_syb_pane

0x4b6b,	// (0x00006a04) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4b6b,	// (0x00006a04) fshwr2_hwr_syb_pane_g1

0xe766,	// (0x000105ff) bg_popup_call_pane_cp01

0xe251,	// (0x000100ea) fshwr2_func_candi_cell_pane_ParamLimits

0xe251,	// (0x000100ea) fshwr2_func_candi_cell_pane

0xe29c,	// (0x00010135) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe29c,	// (0x00010135) fshwr2_func_candi_cell_bg_pane

0xe2a8,	// (0x00010141) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe2a8,	// (0x00010141) fshwr2_func_candi_cell_pane_g1

0xe2df,	// (0x00010178) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe2df,	// (0x00010178) fshwr2_func_candi_cell_pane_t1

0xe766,	// (0x000105ff) bg_button_pane_cp08

0x826e,	// (0x0000a107) cell_fshwr2_syb_bg_pane

0xe2fa,	// (0x00010193) cell_fshwr2_syb_bg_pane_g1

0xe302,	// (0x0001019b) cell_fshwr2_syb_bg_pane_t1

0xeda7,	// (0x00010c40) main_tmo_pane

0xbd7f,	// (0x0000dc18) uni_indicator_pane_g1_ParamLimits

0xbd95,	// (0x0000dc2e) uni_indicator_pane_g2_ParamLimits

0xbdab,	// (0x0000dc44) uni_indicator_pane_g3_ParamLimits

0x2c50,	// (0x00004ae9) uni_indicator_pane_g4_ParamLimits

0x2c50,	// (0x00004ae9) uni_indicator_pane_g4

0x2c64,	// (0x00004afd) uni_indicator_pane_g5_ParamLimits

0x2c64,	// (0x00004afd) uni_indicator_pane_g5

0x2c64,	// (0x00004afd) uni_indicator_pane_g6_ParamLimits

0x2c64,	// (0x00004afd) uni_indicator_pane_g6

0xf906,	// (0x0001179f) uni_indicator_pane_g_ParamLimits

0xcfa8,	// (0x0000ee41) popup_tmo_note_window_ParamLimits

0xcfa8,	// (0x0000ee41) popup_tmo_note_window

0xeda7,	// (0x00010c40) fshwr2_bg_pane

0xe2d0,	// (0x00010169) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe2d0,	// (0x00010169) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9c,	// (0x00011d35) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9c,	// (0x00011d35) fshwr2_func_candi_cell_pane_g

0x46e7,	// (0x00006580) bg_popup_window_pane_cp01

0x828d,	// (0x0000a126) bg_popup_window_pane_g1_cp01

0x8296,	// (0x0000a12f) bg_popup_window_pane_cp22_ParamLimits

0x8296,	// (0x0000a12f) bg_popup_window_pane_cp22

0xe311,	// (0x000101aa) listscroll_tmo_link_pane_ParamLimits

0xe311,	// (0x000101aa) listscroll_tmo_link_pane

0x82e4,	// (0x0000a17d) popup_tmo_note_window_g1_ParamLimits

0x82e4,	// (0x0000a17d) popup_tmo_note_window_g1

0xe351,	// (0x000101ea) tmo_note_info_pane_ParamLimits

0xe351,	// (0x000101ea) tmo_note_info_pane

0xe36b,	// (0x00010204) list_tmo_note_info_pane_g1_ParamLimits

0xe36b,	// (0x00010204) list_tmo_note_info_pane_g1

0x8322,	// (0x0000a1bb) list_tmo_note_info_pane_g2_ParamLimits

0x8322,	// (0x0000a1bb) list_tmo_note_info_pane_g2

0x0001,

0xfea1,	// (0x00011d3a) list_tmo_note_info_pane_g_ParamLimits

0xfea1,	// (0x00011d3a) list_tmo_note_info_pane_g

0x833e,	// (0x0000a1d7) list_tmo_note_info_text_pane_ParamLimits

0x833e,	// (0x0000a1d7) list_tmo_note_info_text_pane

0x83bf,	// (0x0000a258) list_tmo_link_pane

0x83cc,	// (0x0000a265) scroll_pane_cp20

0x83d9,	// (0x0000a272) list_single_tmo_link_pane_ParamLimits

0x83d9,	// (0x0000a272) list_single_tmo_link_pane

0x83e9,	// (0x0000a282) list_single_tmo_link_pane_t1

0x83f7,	// (0x0000a290) list_tmo_note_info_text_pane_t1_ParamLimits

0x83f7,	// (0x0000a290) list_tmo_note_info_text_pane_t1

0xa367,	// (0x0000c200) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa367,	// (0x0000c200) aid_size_touch_scroll_bar_cp01

0xa267,	// (0x0000c100) aid_size_touch_slider_marker

0x9718,	// (0x0000b5b1) popup_settings_window_ParamLimits

0x9718,	// (0x0000b5b1) popup_settings_window

0x0c36,	// (0x00002acf) popup_candi_list_indi_window

0x1213,	// (0x000030ac) aid_touch_navi_pane_ParamLimits

0x6545,	// (0x000083de) rs_clock_indi_pane

0x654e,	// (0x000083e7) sctrl_sk_bottom_pane_ParamLimits

0x655f,	// (0x000083f8) sctrl_sk_top_pane_ParamLimits

0xd7c7,	// (0x0000f660) popup_fep_tooltip_window

0x7c2e,	// (0x00009ac7) aid_size_cell_widget_grid_ParamLimits

0x7c9b,	// (0x00009b34) cell_ai5_widget_pane_g1_ParamLimits

0x7c9b,	// (0x00009b34) cell_ai5_widget_pane_g1

0x7cef,	// (0x00009b88) cell_ai5_widget_pane_g6_ParamLimits

0x7cfb,	// (0x00009b94) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1f,	// (0x00011cb8) cell_ai5_widget_pane_g_ParamLimits

0xfe1f,	// (0x00011cb8) cell_ai5_widget_pane_g

0x7e2d,	// (0x00009cc6) cell_ai5_widget_pane_t10_ParamLimits

0x7e2d,	// (0x00009cc6) cell_ai5_widget_pane_t10

0x7e4b,	// (0x00009ce4) grid_ai5_widget_pane_ParamLimits

0x7ee3,	// (0x00009d7c) cell_contacts_ai5_widget_pane_ParamLimits

0x7ee3,	// (0x00009d7c) cell_contacts_ai5_widget_pane

0x80bd,	// (0x00009f56) popup_discreet_window_t3_ParamLimits

0x80bd,	// (0x00009f56) popup_discreet_window_t3

0xe204,	// (0x0001009d) popup_fshwr2_char_preview_window_ParamLimits

0xe204,	// (0x0001009d) popup_fshwr2_char_preview_window

0xe382,	// (0x0001021b) tmo_note_info_pane_t1

0xe397,	// (0x00010230) tmo_note_info_pane_t2

0xe3ae,	// (0x00010247) tmo_note_info_pane_t3

0x839b,	// (0x0000a234) tmo_note_info_pane_t4

0x83ad,	// (0x0000a246) tmo_note_info_pane_t5

0x0004,

0xfea6,	// (0x00011d3f) tmo_note_info_pane_t

0x83bf,	// (0x0000a258) list_tmo_link_pane_ParamLimits

0x83cc,	// (0x0000a265) scroll_pane_cp20_ParamLimits

0xe766,	// (0x000105ff) bg_popup_fep_char_preview_window_cp01

0xe3c3,	// (0x0001025c) popup_fshwr2_char_preview_window_t1

0x841e,	// (0x0000a2b7) popup_candi_list_indi_window_g1

0x8427,	// (0x0000a2c0) bg_cell_contacts_ai5_widget_pane

0x8433,	// (0x0000a2cc) cell_contacts_ai5_widget_pane_g1

0x5225,	// (0x000070be) cell_contacts_ai5_widget_pane_g2

0x8448,	// (0x0000a2e1) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb1,	// (0x00011d4a) cell_contacts_ai5_widget_pane_g

0x8454,	// (0x0000a2ed) cell_contacts_ai5_widget_pane_t1

0xeda7,	// (0x00010c40) highlight_cell_shortcut_ai5_widget_pane_cp01

0x84cb,	// (0x0000a364) settings_container_pane

0x0685,	// (0x0000251e) listscroll_set_pane_copy1

0x3a78,	// (0x00005911) scroll_pane_cp121_copy1

0x1d76,	// (0x00003c0f) set_content_pane_copy1

0xe436,	// (0x000102cf) aid_height_set_list_copy1_ParamLimits

0xe436,	// (0x000102cf) aid_height_set_list_copy1

0x2f36,	// (0x00004dcf) aid_size_parent_copy1_ParamLimits

0x2f36,	// (0x00004dcf) aid_size_parent_copy1

0xe442,	// (0x000102db) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe442,	// (0x000102db) button_value_adjust_pane_cp6_copy1

0x0c0e,	// (0x00002aa7) list_highlight_pane_cp2_copy1_ParamLimits

0x0c0e,	// (0x00002aa7) list_highlight_pane_cp2_copy1

0xe456,	// (0x000102ef) list_set_pane_copy1_ParamLimits

0xe456,	// (0x000102ef) list_set_pane_copy1

0xe3d1,	// (0x0001026a) main_pane_set_t1_copy1_ParamLimits

0xe3d1,	// (0x0001026a) main_pane_set_t1_copy1

0xe40b,	// (0x000102a4) main_pane_set_t2_copy1_ParamLimits

0xe40b,	// (0x000102a4) main_pane_set_t2_copy1

0xe503,	// (0x0001039c) main_pane_set_t3_copy1

0xe511,	// (0x000103aa) main_pane_set_t4_copy1

0xe42a,	// (0x000102c3) set_content_pane_g1_copy1_ParamLimits

0xe42a,	// (0x000102c3) set_content_pane_g1_copy1

0xe51f,	// (0x000103b8) setting_code_pane_copy1

0x85c8,	// (0x0000a461) setting_slider_graphic_pane_copy1

0x85c8,	// (0x0000a461) setting_slider_pane_copy1

0x85c8,	// (0x0000a461) setting_text_pane_copy1

0x85c8,	// (0x0000a461) setting_volume_pane_copy1

0xe51f,	// (0x000103b8) settings_code_pane_cp2_copy1

0xe527,	// (0x000103c0) settings_code_pane_cp_copy1_ParamLimits

0xe527,	// (0x000103c0) settings_code_pane_cp_copy1

0xe53b,	// (0x000103d4) volume_set_pane_copy1

0xe543,	// (0x000103dc) volume_set_pane_g10_copy1

0xe54b,	// (0x000103e4) volume_set_pane_g1_copy1

0xe553,	// (0x000103ec) volume_set_pane_g2_copy1

0xe55b,	// (0x000103f4) volume_set_pane_g3_copy1

0xe563,	// (0x000103fc) volume_set_pane_g4_copy1

0xe56b,	// (0x00010404) volume_set_pane_g5_copy1

0xe573,	// (0x0001040c) volume_set_pane_g6_copy1

0xe57b,	// (0x00010414) volume_set_pane_g7_copy1

0xe583,	// (0x0001041c) volume_set_pane_g8_copy1

0xe58b,	// (0x00010424) volume_set_pane_g9_copy1

0xe965,	// (0x000107fe) bg_set_opt_pane_cp_copy1_ParamLimits

0xe965,	// (0x000107fe) bg_set_opt_pane_cp_copy1

0xe593,	// (0x0001042c) setting_slider_pane_t1_copy1_ParamLimits

0xe593,	// (0x0001042c) setting_slider_pane_t1_copy1

0xe5b1,	// (0x0001044a) setting_slider_pane_t2_copy1_ParamLimits

0xe5b1,	// (0x0001044a) setting_slider_pane_t2_copy1

0xe5cb,	// (0x00010464) setting_slider_pane_t3_copy1_ParamLimits

0xe5cb,	// (0x00010464) setting_slider_pane_t3_copy1

0xe5e3,	// (0x0001047c) slider_set_pane_copy1_ParamLimits

0xe5e3,	// (0x0001047c) slider_set_pane_copy1

0xee61,	// (0x00010cfa) set_opt_bg_pane_g1_copy2

0xee69,	// (0x00010d02) set_opt_bg_pane_g2_copy2

0x86a2,	// (0x0000a53b) set_opt_bg_pane_g3_copy2

0xee79,	// (0x00010d12) set_opt_bg_pane_g4_copy2

0xee81,	// (0x00010d1a) set_opt_bg_pane_g5_copy2

0xee89,	// (0x00010d22) set_opt_bg_pane_g6_copy2

0xe5f9,	// (0x00010492) set_opt_bg_pane_g7_copy2

0x86b4,	// (0x0000a54d) set_opt_bg_pane_g8_copy2

0x86be,	// (0x0000a557) set_opt_bg_pane_g9_copy2

0xe601,	// (0x0001049a) aid_size_touch_slider_mark_copy1_ParamLimits

0xe601,	// (0x0001049a) aid_size_touch_slider_mark_copy1

0xe615,	// (0x000104ae) slider_set_pane_g1_copy1

0x86e5,	// (0x0000a57e) slider_set_pane_g2_copy1

0xbedc,	// (0x0000dd75) slider_set_pane_g3_copy1_ParamLimits

0xbedc,	// (0x0000dd75) slider_set_pane_g3_copy1

0xbef0,	// (0x0000dd89) slider_set_pane_g4_copy1_ParamLimits

0xbef0,	// (0x0000dd89) slider_set_pane_g4_copy1

0xbf08,	// (0x0000dda1) slider_set_pane_g5_copy1_ParamLimits

0xbf08,	// (0x0000dda1) slider_set_pane_g5_copy1

0xbedc,	// (0x0000dd75) slider_set_pane_g6_copy1_ParamLimits

0xbedc,	// (0x0000dd75) slider_set_pane_g6_copy1

0xe61e,	// (0x000104b7) slider_set_pane_g7_copy1_ParamLimits

0xe61e,	// (0x000104b7) slider_set_pane_g7_copy1

0xe8e9,	// (0x00010782) bg_set_opt_pane_cp2_copy1

0xe634,	// (0x000104cd) setting_slider_graphic_pane_g1_copy1

0xe63d,	// (0x000104d6) setting_slider_graphic_pane_t1_copy1

0xe64d,	// (0x000104e6) setting_slider_graphic_pane_t2_copy1

0xe65d,	// (0x000104f6) slider_set_pane_cp_copy1

0x873c,	// (0x0000a5d5) input_focus_pane_cp1_copy1

0x8745,	// (0x0000a5de) list_set_text_pane_copy1

0x874d,	// (0x0000a5e6) setting_text_pane_g1_copy1

0x8756,	// (0x0000a5ef) set_text_pane_t1_copy1

0x873c,	// (0x0000a5d5) input_focus_pane_cp2_copy1

0x874d,	// (0x0000a5e6) setting_code_pane_g1_copy1

0x8771,	// (0x0000a60a) setting_code_pane_t1_copy1

0x877f,	// (0x0000a618) list_set_graphic_pane_copy1

0xe8e9,	// (0x00010782) bg_set_opt_pane_cp4_copy1

0x0390,	// (0x00002229) list_set_graphic_pane_g1_copy1_ParamLimits

0x0390,	// (0x00002229) list_set_graphic_pane_g1_copy1

0x8793,	// (0x0000a62c) list_set_graphic_pane_g2_copy1

0x03a8,	// (0x00002241) list_set_graphic_pane_t1_copy1_ParamLimits

0x03a8,	// (0x00002241) list_set_graphic_pane_t1_copy1

0x46e7,	// (0x00006580) rs_clock_indi_pane_g1

0x879b,	// (0x0000a634) rs_clock_indi_pane_t1

0x87a9,	// (0x0000a642) rs_indi_pane

0x87b1,	// (0x0000a64a) rs_indi_pane_g1

0x87ba,	// (0x0000a653) rs_indi_pane_g2

0x841e,	// (0x0000a2b7) rs_indi_pane_g3

0x0002,

0xfeb8,	// (0x00011d51) rs_indi_pane_g

0x0685,	// (0x0000251e) bg_popup_preview_window_pane_cp03

0x87c3,	// (0x0000a65c) popup_fep_tooltip_window_t1

0xcaa6,	// (0x0000e93f) popup_note2_window_g2_ParamLimits

0xcaa6,	// (0x0000e93f) popup_note2_window_g2

0x0001,

0xfc58,	// (0x00011af1) popup_note2_window_g_ParamLimits

0xfc58,	// (0x00011af1) popup_note2_window_g

0x5f23,	// (0x00007dbc) bg_popup_sub_pane_cp11_ParamLimits

0x5f30,	// (0x00007dc9) cell_ai3_links_pane_g1_ParamLimits

0x5f47,	// (0x00007de0) cell_ai3_links_pane_t1

0x8756,	// (0x0000a5ef) set_text_pane_t1_copy1_ParamLimits

0x0596,	// (0x0000242f) cell_graphic_popup_pane_cp2_ParamLimits

0x0596,	// (0x0000242f) cell_graphic_popup_pane_cp2

0xe66d,	// (0x00010506) cell_graphic_popup_pane_g1_cp2

0xebff,	// (0x00010a98) cell_graphic_popup_pane_g2_cp2

0x87d9,	// (0x0000a672) cell_graphic_popup_pane_g3_cp2

0xe675,	// (0x0001050e) cell_graphic_popup_pane_t2_cp2

0xec10,	// (0x00010aa9) grid_highlight_pane_cp3_cp2

0xf259,	// (0x000110f2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xeda7,	// (0x00010c40) main_tmo_pane_ParamLimits

0xcf9c,	// (0x0000ee35) popup_tmo_big_image_note_window

0x7c8a,	// (0x00009b23) cell_ai5_widget_list_pane

0x7c92,	// (0x00009b2b) cell_ai5_widget_lrg_icon_pane

0xe382,	// (0x0001021b) tmo_note_info_pane_t1_ParamLimits

0xe397,	// (0x00010230) tmo_note_info_pane_t2_ParamLimits

0xe3ae,	// (0x00010247) tmo_note_info_pane_t3_ParamLimits

0x839b,	// (0x0000a234) tmo_note_info_pane_t4_ParamLimits

0x83ad,	// (0x0000a246) tmo_note_info_pane_t5_ParamLimits

0xfea6,	// (0x00011d3f) tmo_note_info_pane_t_ParamLimits

0x84cb,	// (0x0000a364) settings_container_pane_ParamLimits

0xe665,	// (0x000104fe) indicator_popup_pane_cp5

0xe665,	// (0x000104fe) indicator_popup_pane_cp6

0x877f,	// (0x0000a618) list_set_graphic_pane_copy1_ParamLimits

0xe766,	// (0x000105ff) bg_popup_window_pane_cp23

0x87ef,	// (0x0000a688) popup_tmo_big_image_note_window_g1

0x87f8,	// (0x0000a691) popup_tmo_big_image_note_window_t1

0x8808,	// (0x0000a6a1) popup_tmo_big_image_note_window_t2

0x8818,	// (0x0000a6b1) popup_tmo_big_image_note_window_t3

0x0002,

0xfebf,	// (0x00011d58) popup_tmo_big_image_note_window_t

0x46e7,	// (0x00006580) cell_ai5_widget_lrg_icon_pane_g1

0x8828,	// (0x0000a6c1) cell_ai5_widget_lrg_icon_pane_t1

0x8836,	// (0x0000a6cf) cell_ai5_widget_list_row_pane_ParamLimits

0x8836,	// (0x0000a6cf) cell_ai5_widget_list_row_pane

0x884d,	// (0x0000a6e6) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x884d,	// (0x0000a6e6) cell_ai5_widget_list_row_pane_g1

0xe683,	// (0x0001051c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe683,	// (0x0001051c) cell_ai5_widget_list_row_pane_t1

0x8885,	// (0x0000a71e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x8885,	// (0x0000a71e) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec6,	// (0x00011d5f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec6,	// (0x00011d5f) cell_ai5_widget_list_row_pane_t

0xe766,	// (0x000105ff) main_fep_vtchi_ss_pane

0x88c9,	// (0x0000a762) popup_fep_char_pre_window

0x88d1,	// (0x0000a76a) popup_fep_ituss_window

0xe6c3,	// (0x0001055c) popup_fep_vkbss_window

0xe6d0,	// (0x00010569) grid_vkbss_keypad_pane_ParamLimits

0xe6d0,	// (0x00010569) grid_vkbss_keypad_pane

0x8928,	// (0x0000a7c1) ituss_keypad_pane

0x8943,	// (0x0000a7dc) aid_vkbss_key_offset_ParamLimits

0x8943,	// (0x0000a7dc) aid_vkbss_key_offset

0xe6e0,	// (0x00010579) cell_vkbss_key_pane_ParamLimits

0xe6e0,	// (0x00010579) cell_vkbss_key_pane

0x152a,	// (0x000033c3) bg_cell_vkbss_key_g1_ParamLimits

0x152a,	// (0x000033c3) bg_cell_vkbss_key_g1

0xe6f6,	// (0x0001058f) cell_vkbss_key_3p_pane_ParamLimits

0xe6f6,	// (0x0001058f) cell_vkbss_key_3p_pane

0xe710,	// (0x000105a9) cell_vkbss_key_g1_ParamLimits

0xe710,	// (0x000105a9) cell_vkbss_key_g1

0xe72a,	// (0x000105c3) cell_vkbss_key_t1_ParamLimits

0xe72a,	// (0x000105c3) cell_vkbss_key_t1

0x89b8,	// (0x0000a851) cell_ituss_key_pane_ParamLimits

0x89b8,	// (0x0000a851) cell_ituss_key_pane

0x89c9,	// (0x0000a862) bg_cell_ituss_key_g1_ParamLimits

0x89c9,	// (0x0000a862) bg_cell_ituss_key_g1

0x89d5,	// (0x0000a86e) cell_ituss_key_pane_g1_ParamLimits

0x89d5,	// (0x0000a86e) cell_ituss_key_pane_g1

0x89e9,	// (0x0000a882) cell_ituss_key_pane_g2_ParamLimits

0x89e9,	// (0x0000a882) cell_ituss_key_pane_g2

0x0002,

0xfecd,	// (0x00011d66) cell_ituss_key_pane_g_ParamLimits

0xfecd,	// (0x00011d66) cell_ituss_key_pane_g

0x8a27,	// (0x0000a8c0) cell_ituss_key_t1_ParamLimits

0x8a27,	// (0x0000a8c0) cell_ituss_key_t1

0x8a61,	// (0x0000a8fa) cell_ituss_key_t2_ParamLimits

0x8a61,	// (0x0000a8fa) cell_ituss_key_t2

0x8a92,	// (0x0000a92b) cell_ituss_key_t3_ParamLimits

0x8a92,	// (0x0000a92b) cell_ituss_key_t3

0x8a61,	// (0x0000a8fa) cell_ituss_key_t4_ParamLimits

0x8a61,	// (0x0000a8fa) cell_ituss_key_t4

0x0004,

0xfed4,	// (0x00011d6d) cell_ituss_key_t_ParamLimits

0xfed4,	// (0x00011d6d) cell_ituss_key_t

0x8ad5,	// (0x0000a96e) cell_vkbss_key_3p_pane_g1

0x8add,	// (0x0000a976) cell_vkbss_key_3p_pane_g2

0x8ae5,	// (0x0000a97e) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedf,	// (0x00011d78) cell_vkbss_key_3p_pane_g

0xe766,	// (0x000105ff) bg_popup_fep_char_preview_window_cp02

0x8aed,	// (0x0000a986) popup_fep_char_pre_window_t1

0xe09f,	// (0x0000ff38) main_ai5_sk_pane

0x8427,	// (0x0000a2c0) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8433,	// (0x0000a2cc) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x5225,	// (0x000070be) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8448,	// (0x0000a2e1) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb1,	// (0x00011d4a) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8454,	// (0x0000a2ed) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xeda7,	// (0x00010c40) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe755,	// (0x000105ee) main_ai5_sk_pane_g1

0xb9d0,	// (0x0000d869) popup_query_code_window_g1

0x88e7,	// (0x0000a780) popup_fep_vkb_icf_pane

0x8906,	// (0x0000a79f) popup_fep_vtchi_icf_pane

0x8b05,	// (0x0000a99e) bg_icf_pane

0x8b11,	// (0x0000a9aa) list_vkb_icf_pane

0x8b20,	// (0x0000a9b9) bg_icf_pane_cp01

0x8b33,	// (0x0000a9cc) vtchi_icf_list_pane

0x8b43,	// (0x0000a9dc) list_vkb_icf_pane_t1_ParamLimits

0x8b43,	// (0x0000a9dc) list_vkb_icf_pane_t1

0x8b5a,	// (0x0000a9f3) vtchi_icf_list_pane_t1_ParamLimits

0x8b5a,	// (0x0000a9f3) vtchi_icf_list_pane_t1

0x88d1,	// (0x0000a76a) popup_fep_ituss_window_ParamLimits

0x8906,	// (0x0000a79f) popup_fep_vtchi_icf_pane_ParamLimits

0x8928,	// (0x0000a7c1) ituss_keypad_pane_ParamLimits

0x8937,	// (0x0000a7d0) ituss_sks_pane

0x8b05,	// (0x0000a99e) bg_icf_pane_ParamLimits

0xe6b4,	// (0x0001054d) icf_edit_indi_pane_ParamLimits

0xe6b4,	// (0x0001054d) icf_edit_indi_pane

0x8b11,	// (0x0000a9aa) list_vkb_icf_pane_ParamLimits

0x8b20,	// (0x0000a9b9) bg_icf_pane_cp01_ParamLimits

0x88bc,	// (0x0000a755) icf_edit_indi_pane_cp01_ParamLimits

0x88bc,	// (0x0000a755) icf_edit_indi_pane_cp01

0x8b3b,	// (0x0000a9d4) vtchi_query_pane

0x4b6b,	// (0x00006a04) icf_edit_indi_pane_g1_ParamLimits

0x4b6b,	// (0x00006a04) icf_edit_indi_pane_g1

0x8be2,	// (0x0000aa7b) icf_edit_indi_pane_g2_ParamLimits

0x8be2,	// (0x0000aa7b) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x00011d90) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x00011d90) icf_edit_indi_pane_g

0x8bf1,	// (0x0000aa8a) icf_edit_indi_pane_t1

0x8b78,	// (0x0000aa11) bg_input_focus_pane_cp042

0xec73,	// (0x00010b0c) vtchi_button_pane

0x8b81,	// (0x0000aa1a) vtchi_query_pane_t1

0x8b8f,	// (0x0000aa28) vtchi_query_pane_t2

0x8b9d,	// (0x0000aa36) vtchi_query_pane_t3

0x0002,

0xfee6,	// (0x00011d7f) vtchi_query_pane_t

0xe766,	// (0x000105ff) bg_button_pane_cp13

0x8bab,	// (0x0000aa44) vtchi_button_pane_g1

0x8bb3,	// (0x0000aa4c) ituss_sks_pane_g1

0x8bbe,	// (0x0000aa57) ituss_sks_pane_g2

0x0001,

0xfeed,	// (0x00011d86) ituss_sks_pane_g

0x8bc6,	// (0x0000aa5f) ituss_sks_pane_t1

0x8bd4,	// (0x0000aa6d) ituss_sks_pane_t2

0x0001,

0xfef2,	// (0x00011d8b) ituss_sks_pane_t

0x40d5,	// (0x00005f6e) indicator_nsta_pane_cp_g1

0x40dd,	// (0x00005f76) indicator_nsta_pane_cp_g2

0x40e5,	// (0x00005f7e) indicator_nsta_pane_cp_g3

0x40d5,	// (0x00005f6e) indicator_nsta_pane_cp_g4

0x40dd,	// (0x00005f76) indicator_nsta_pane_cp_g5

0x40e5,	// (0x00005f7e) indicator_nsta_pane_cp_g6

0x0005,

0xfaa2,	// (0x0001193b) indicator_nsta_pane_cp_g

0xde06,	// (0x0000fc9f) cell_graphic2_pane_t2_ParamLimits

0xde06,	// (0x0000fc9f) cell_graphic2_pane_t2

0x0001,

0xfda8,	// (0x00011c41) cell_graphic2_pane_t_ParamLimits

0xfda8,	// (0x00011c41) cell_graphic2_pane_t

0xde3f,	// (0x0000fcd8) cell_graphic2_control_pane_t1

0xa62d,	// (0x0000c4c6) signal_pane_g3_ParamLimits

0xa62d,	// (0x0000c4c6) signal_pane_g3

0xa641,	// (0x0000c4da) signal_pane_g4_ParamLimits

0xa641,	// (0x0000c4da) signal_pane_g4

0x8897,	// (0x0000a730) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x8897,	// (0x0000a730) cell_ai5_widget_list_row_pane_t3

0x8a15,	// (0x0000a8ae) cell_ituss_key_pane_t1_ParamLimits

0x8a15,	// (0x0000a8ae) cell_ituss_key_pane_t1

0x1a04,	// (0x0000389d) form_field_data_wide_pane_vc_t2_ParamLimits

0x1a04,	// (0x0000389d) form_field_data_wide_pane_vc_t2

0x1a18,	// (0x000038b1) form_field_data_wide_pane_vc_t3_ParamLimits

0x1a18,	// (0x000038b1) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00011687) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00011687) form_field_data_wide_pane_vc_t

0x3d9d,	// (0x00005c36) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3d9d,	// (0x00005c36) form_field_slider_wide_pane_vc_t3

0x3e7b,	// (0x00005d14) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3e7b,	// (0x00005d14) form_field_popup_wide_pane_vc_t2

0x3e92,	// (0x00005d2b) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3e92,	// (0x00005d2b) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa91,	// (0x0001192a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x0001192a) form_field_popup_wide_pane_vc_t

0xe17f,	// (0x00010018) aid_fshwr2_btn_pane_ParamLimits

0xe191,	// (0x0001002a) aid_fshwr2_syb_pane_ParamLimits

0xe1a3,	// (0x0001003c) aid_fshwr2_txt_pane_ParamLimits

0xeda7,	// (0x00010c40) fshwr2_bg_pane_ParamLimits

0xe1b2,	// (0x0001004b) fshwr2_func_candi_pane_ParamLimits

0xe1d1,	// (0x0001006a) fshwr2_hwr_syb_pane_ParamLimits

0xe1ec,	// (0x00010085) fshwr2_icf_pane_ParamLimits

0x3d0e,	// (0x00005ba7) list_double_graphic_pane_vc_g4_ParamLimits

0x3d0e,	// (0x00005ba7) list_double_graphic_pane_vc_g4

0x8a09,	// (0x0000a8a2) cell_ituss_key_pane_g3_ParamLimits

0x8a09,	// (0x0000a8a2) cell_ituss_key_pane_g3

0x8ac3,	// (0x0000a95c) cell_ituss_key_t5_ParamLimits

0x8ac3,	// (0x0000a95c) cell_ituss_key_t5

0xe6c3,	// (0x0001055c) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000b0e7 };

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
0x014a,	// (0x0000b231) Screen

0x0156,	// (0x0000b23d) application_window_ParamLimits

0x0156,	// (0x0000b23d) application_window

0x5cc0,	// (0x00010da7) screen_g1

0xde5d,	// (0x00018f44) area_bottom_pane_ParamLimits

0xde5d,	// (0x00018f44) area_bottom_pane

0x4150,	// (0x0000f237) area_top_pane_ParamLimits

0x4150,	// (0x0000f237) area_top_pane

0x41ee,	// (0x0000f2d5) main_pane_ParamLimits

0x41ee,	// (0x0000f2d5) main_pane

0x5cca,	// (0x00010db1) misc_graphics

0x1741,	// (0x0000c828) battery_pane_ParamLimits

0x1741,	// (0x0000c828) battery_pane

0x913e,	// (0x00014225) bg_status_flat_pane_g8

0x9146,	// (0x0001422d) bg_status_flat_pane_g9

0x843b,	// (0x00013522) context_pane_ParamLimits

0x843b,	// (0x00013522) context_pane

0x18ac,	// (0x0000c993) navi_pane_ParamLimits

0x18ac,	// (0x0000c993) navi_pane

0x1923,	// (0x0000ca0a) signal_pane_ParamLimits

0x1923,	// (0x0000ca0a) signal_pane

0x0008,

0xf880,	// (0x0001a967) bg_status_flat_pane_g

0x19b3,	// (0x0000ca9a) status_pane_g1_ParamLimits

0x19b3,	// (0x0000ca9a) status_pane_g1

0x19c9,	// (0x0000cab0) status_pane_g2_ParamLimits

0x19c9,	// (0x0000cab0) status_pane_g2

0x865b,	// (0x00013742) status_pane_g3_ParamLimits

0x865b,	// (0x00013742) status_pane_g3

0x0004,

0xf7b3,	// (0x0001a89a) status_pane_g_ParamLimits

0xf7b3,	// (0x0001a89a) status_pane_g

0x19d5,	// (0x0000cabc) title_pane_ParamLimits

0x19d5,	// (0x0000cabc) title_pane

0x1a36,	// (0x0000cb1d) uni_indicator_pane_ParamLimits

0x1a36,	// (0x0000cb1d) uni_indicator_pane

0x7cf2,	// (0x00012dd9) bg_list_pane_ParamLimits

0x7cf2,	// (0x00012dd9) bg_list_pane

0x1013,	// (0x0000c0fa) find_pane

0x101b,	// (0x0000c102) listscroll_app_pane_ParamLimits

0x101b,	// (0x0000c102) listscroll_app_pane

0x7d26,	// (0x00012e0d) listscroll_form_pane

0x1027,	// (0x0000c10e) listscroll_gen_pane_ParamLimits

0x1027,	// (0x0000c10e) listscroll_gen_pane

0x7d26,	// (0x00012e0d) listscroll_set_pane

0x9cf2,	// (0x00014dd9) main_idle_act_pane

0x79ce,	// (0x00012ab5) main_idle_trad_pane

0x79ce,	// (0x00012ab5) main_list_empty_pane

0x7d54,	// (0x00012e3b) main_midp_pane

0x7d60,	// (0x00012e47) main_pane_g1_ParamLimits

0x7d60,	// (0x00012e47) main_pane_g1

0x103b,	// (0x0000c122) popup_ai_message_window_ParamLimits

0x103b,	// (0x0000c122) popup_ai_message_window

0x10cc,	// (0x0000c1b3) popup_fep_china_uni_window_ParamLimits

0x10cc,	// (0x0000c1b3) popup_fep_china_uni_window

0x7e72,	// (0x00012f59) popup_fep_japan_candidate_window_ParamLimits

0x7e72,	// (0x00012f59) popup_fep_japan_candidate_window

0x7e90,	// (0x00012f77) popup_fep_japan_predictive_window_ParamLimits

0x7e90,	// (0x00012f77) popup_fep_japan_predictive_window

0x1126,	// (0x0000c20d) popup_find_window

0x1143,	// (0x0000c22a) popup_grid_graphic_window_ParamLimits

0x1143,	// (0x0000c22a) popup_grid_graphic_window

0x7ef3,	// (0x00012fda) popup_large_graphic_colour_window

0x11d5,	// (0x0000c2bc) popup_menu_window_ParamLimits

0x11d5,	// (0x0000c2bc) popup_menu_window

0x13a1,	// (0x0000c488) popup_note_image_window

0x1367,	// (0x0000c44e) popup_note_wait_window_ParamLimits

0x1367,	// (0x0000c44e) popup_note_wait_window

0x13b9,	// (0x0000c4a0) popup_note_window_ParamLimits

0x13b9,	// (0x0000c4a0) popup_note_window

0x145f,	// (0x0000c546) popup_query_code_window_ParamLimits

0x145f,	// (0x0000c546) popup_query_code_window

0x813d,	// (0x00013224) popup_query_data_code_window_ParamLimits

0x813d,	// (0x00013224) popup_query_data_code_window

0x1499,	// (0x0000c580) popup_query_data_window_ParamLimits

0x1499,	// (0x0000c580) popup_query_data_window

0x150f,	// (0x0000c5f6) popup_query_sat_info_window_ParamLimits

0x150f,	// (0x0000c5f6) popup_query_sat_info_window

0x15a6,	// (0x0000c68d) popup_snote_single_graphic_window_ParamLimits

0x15a6,	// (0x0000c68d) popup_snote_single_graphic_window

0x15a6,	// (0x0000c68d) popup_snote_single_text_window_ParamLimits

0x15a6,	// (0x0000c68d) popup_snote_single_text_window

0x81ba,	// (0x000132a1) popup_sub_window_general

0x82e8,	// (0x000133cf) popup_window_general_ParamLimits

0x82e8,	// (0x000133cf) popup_window_general

0x82fd,	// (0x000133e4) power_save_pane

0xdfdf,	// (0x000190c6) control_pane_g1_ParamLimits

0xdfdf,	// (0x000190c6) control_pane_g1

0x495e,	// (0x0000fa45) control_pane_g2_ParamLimits

0x495e,	// (0x0000fa45) control_pane_g2

0x7c93,	// (0x00012d7a) control_pane_g3_ParamLimits

0x7c93,	// (0x00012d7a) control_pane_g3

0x0007,

0xf79b,	// (0x0001a882) control_pane_g_ParamLimits

0xf79b,	// (0x0001a882) control_pane_g

0xe020,	// (0x00019107) control_pane_t1_ParamLimits

0xe020,	// (0x00019107) control_pane_t1

0xe07e,	// (0x00019165) control_pane_t2_ParamLimits

0xe07e,	// (0x00019165) control_pane_t2

0x0002,

0xf7ac,	// (0x0001a893) control_pane_t_ParamLimits

0xf7ac,	// (0x0001a893) control_pane_t

0x7bb4,	// (0x00012c9b) navi_navi_volume_pane_cp1

0x7bbd,	// (0x00012ca4) status_small_icon_pane

0x7bc5,	// (0x00012cac) status_small_pane_g1_ParamLimits

0x7bc5,	// (0x00012cac) status_small_pane_g1

0x7bf9,	// (0x00012ce0) status_small_pane_g2_ParamLimits

0x7bf9,	// (0x00012ce0) status_small_pane_g2

0x7c05,	// (0x00012cec) status_small_pane_g3_ParamLimits

0x7c05,	// (0x00012cec) status_small_pane_g3

0x7c11,	// (0x00012cf8) status_small_pane_g4_ParamLimits

0x7c11,	// (0x00012cf8) status_small_pane_g4

0x7c1d,	// (0x00012d04) status_small_pane_g5_ParamLimits

0x7c1d,	// (0x00012d04) status_small_pane_g5

0x7c2c,	// (0x00012d13) status_small_pane_g6_ParamLimits

0x7c2c,	// (0x00012d13) status_small_pane_g6

0x0007,

0xf78a,	// (0x0001a871) status_small_pane_g_ParamLimits

0xf78a,	// (0x0001a871) status_small_pane_g

0x7c5c,	// (0x00012d43) status_small_pane_t1

0x7c7f,	// (0x00012d66) status_small_wait_pane_ParamLimits

0x7c7f,	// (0x00012d66) status_small_wait_pane

0x0cb7,	// (0x0000bd9e) aid_levels_signal_ParamLimits

0x0cb7,	// (0x0000bd9e) aid_levels_signal

0x0ccf,	// (0x0000bdb6) signal_pane_g1_ParamLimits

0x0ccf,	// (0x0000bdb6) signal_pane_g1

0x0cea,	// (0x0000bdd1) signal_pane_g2_ParamLimits

0x0cea,	// (0x0000bdd1) signal_pane_g2

0x0001,

0xf71f,	// (0x0001a806) signal_pane_g_ParamLimits

0xf71f,	// (0x0001a806) signal_pane_g

0x7419,	// (0x00012500) context_pane_g1

0x0307,	// (0x0000b3ee) title_pane_g1

0x033c,	// (0x0000b423) title_pane_t1

0x5d72,	// (0x00010e59) title_pane_t2

0x5d98,	// (0x00010e7f) title_pane_t3

0x0002,

0xf573,	// (0x0001a65a) title_pane_t

0x1a5e,	// (0x0000cb45) aid_levels_battery_ParamLimits

0x1a5e,	// (0x0000cb45) aid_levels_battery

0x1a7a,	// (0x0000cb61) battery_pane_g1_ParamLimits

0x1a7a,	// (0x0000cb61) battery_pane_g1

0x1a97,	// (0x0000cb7e) battery_pane_g2_ParamLimits

0x1a97,	// (0x0000cb7e) battery_pane_g2

0x0001,

0xf7be,	// (0x0001a8a5) battery_pane_g_ParamLimits

0xf7be,	// (0x0001a8a5) battery_pane_g

0x1eb7,	// (0x0000cf9e) uni_indicator_pane_g1

0x1ecc,	// (0x0000cfb3) uni_indicator_pane_g2

0x1ee1,	// (0x0000cfc8) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0001aa0f) uni_indicator_pane_g

0x783e,	// (0x00012925) navi_icon_pane_ParamLimits

0x783e,	// (0x00012925) navi_icon_pane

0x7785,	// (0x0001286c) navi_midp_pane

0x785a,	// (0x00012941) navi_navi_pane

0x7864,	// (0x0001294b) navi_text_pane_ParamLimits

0x7864,	// (0x0001294b) navi_text_pane

0x5cc0,	// (0x00010da7) status_small_wait_pane_g1

0x61d5,	// (0x000112bc) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0001aa0a) status_small_wait_pane_g

0x1e56,	// (0x0000cf3d) navi_navi_icon_text_pane

0x1e70,	// (0x0000cf57) navi_navi_pane_g1_ParamLimits

0x1e70,	// (0x0000cf57) navi_navi_pane_g1

0x1e5e,	// (0x0000cf45) navi_navi_pane_g2_ParamLimits

0x1e5e,	// (0x0000cf45) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0001a9d8) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0001a9d8) navi_navi_pane_g

0x97bd,	// (0x000148a4) navi_navi_tabs_pane

0x1e82,	// (0x0000cf69) navi_navi_text_pane

0x1e56,	// (0x0000cf3d) navi_navi_volume_pane

0x1e44,	// (0x0000cf2b) navi_text_pane_t1

0x1e38,	// (0x0000cf1f) navi_icon_pane_g1

0x96ae,	// (0x00014795) navi_navi_text_pane_t1

0xe2cd,	// (0x000193b4) navi_navi_volume_pane_g1

0xe2d5,	// (0x000193bc) volume_small_pane

0x1d83,	// (0x0000ce6a) navi_navi_icon_text_pane_g1

0x1d8b,	// (0x0000ce72) navi_navi_icon_text_pane_t1

0x785a,	// (0x00012941) navi_tabs_2_long_pane

0x785a,	// (0x00012941) navi_tabs_2_pane

0x785a,	// (0x00012941) navi_tabs_3_long_pane

0x785a,	// (0x00012941) navi_tabs_3_pane

0x785a,	// (0x00012941) navi_tabs_4_pane

0xe2ad,	// (0x00019394) tabs_2_active_pane_ParamLimits

0xe2ad,	// (0x00019394) tabs_2_active_pane

0xe2bd,	// (0x000193a4) tabs_2_passive_pane_ParamLimits

0xe2bd,	// (0x000193a4) tabs_2_passive_pane

0xe27b,	// (0x00019362) tabs_3_active_pane_ParamLimits

0xe27b,	// (0x00019362) tabs_3_active_pane

0xe28b,	// (0x00019372) tabs_3_passive_pane_ParamLimits

0xe28b,	// (0x00019372) tabs_3_passive_pane

0xe29c,	// (0x00019383) tabs_3_passive_pane_cp_ParamLimits

0xe29c,	// (0x00019383) tabs_3_passive_pane_cp

0xe237,	// (0x0001931e) tabs_4_active_pane_ParamLimits

0xe237,	// (0x0001931e) tabs_4_active_pane

0xe248,	// (0x0001932f) tabs_4_passive_pane_ParamLimits

0xe248,	// (0x0001932f) tabs_4_passive_pane

0xe259,	// (0x00019340) tabs_4_passive_pane_cp_ParamLimits

0xe259,	// (0x00019340) tabs_4_passive_pane_cp

0xe26a,	// (0x00019351) tabs_4_passive_pane_cp2_ParamLimits

0xe26a,	// (0x00019351) tabs_4_passive_pane_cp2

0xe217,	// (0x000192fe) tabs_2_long_active_pane_ParamLimits

0xe217,	// (0x000192fe) tabs_2_long_active_pane

0xe227,	// (0x0001930e) tabs_2_long_passive_pane_ParamLimits

0xe227,	// (0x0001930e) tabs_2_long_passive_pane

0xe1e2,	// (0x000192c9) tabs_3_long_active_pane_ParamLimits

0xe1e2,	// (0x000192c9) tabs_3_long_active_pane

0xe1f3,	// (0x000192da) tabs_3_long_passive_pane_ParamLimits

0xe1f3,	// (0x000192da) tabs_3_long_passive_pane

0xe206,	// (0x000192ed) tabs_3_long_passive_pane_cp_ParamLimits

0xe206,	// (0x000192ed) tabs_3_long_passive_pane_cp

0x4c36,	// (0x0000fd1d) volume_small_pane_g1

0xe191,	// (0x00019278) volume_small_pane_g2

0xe19a,	// (0x00019281) volume_small_pane_g3

0xe1a3,	// (0x0001928a) volume_small_pane_g4

0xe1ac,	// (0x00019293) volume_small_pane_g5

0xe1b5,	// (0x0001929c) volume_small_pane_g6

0xe1be,	// (0x000192a5) volume_small_pane_g7

0xe1c7,	// (0x000192ae) volume_small_pane_g8

0xe1d0,	// (0x000192b7) volume_small_pane_g9

0xe1d9,	// (0x000192c0) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x0001a9a4) volume_small_pane_g

0x603f,	// (0x00011126) bg_active_tab_pane_cp2_ParamLimits

0x603f,	// (0x00011126) bg_active_tab_pane_cp2

0x03c8,	// (0x0000b4af) tabs_3_active_pane_g1

0x03d0,	// (0x0000b4b7) tabs_3_active_pane_t1

0x603f,	// (0x00011126) bg_passive_tab_pane_cp2_ParamLimits

0x603f,	// (0x00011126) bg_passive_tab_pane_cp2

0x03c8,	// (0x0000b4af) tabs_3_passive_pane_g1

0x03d0,	// (0x0000b4b7) tabs_3_passive_pane_t1

0x603f,	// (0x00011126) bg_active_tab_pane_cp3_ParamLimits

0x603f,	// (0x00011126) bg_active_tab_pane_cp3

0x03e2,	// (0x0000b4c9) tabs_4_active_pane_g1

0x03ea,	// (0x0000b4d1) tabs_4_active_pane_t1

0x603f,	// (0x00011126) bg_passive_tab_pane_cp3_ParamLimits

0x603f,	// (0x00011126) bg_passive_tab_pane_cp3

0x03e2,	// (0x0000b4c9) tabs_4_1_passive_pane_g1

0x03ea,	// (0x0000b4d1) tabs_4_1_passive_pane_t1

0x7d54,	// (0x00012e3b) list_highlight_pane_cp2

0x1f80,	// (0x0000d067) list_set_pane_ParamLimits

0x1f80,	// (0x0000d067) list_set_pane

0x201a,	// (0x0000d101) main_pane_set_t1_ParamLimits

0x201a,	// (0x0000d101) main_pane_set_t1

0x203a,	// (0x0000d121) main_pane_set_t2_ParamLimits

0x203a,	// (0x0000d121) main_pane_set_t2

0x204e,	// (0x0000d135) main_pane_set_t3_ParamLimits

0x204e,	// (0x0000d135) main_pane_set_t3

0x2060,	// (0x0000d147) main_pane_set_t4_ParamLimits

0x2060,	// (0x0000d147) main_pane_set_t4

0x0003,

0xf98d,	// (0x0001aa74) main_pane_set_t_ParamLimits

0xf98d,	// (0x0001aa74) main_pane_set_t

0x2072,	// (0x0000d159) setting_code_pane

0x207a,	// (0x0000d161) setting_slider_graphic_pane

0x207a,	// (0x0000d161) setting_slider_pane

0x207a,	// (0x0000d161) setting_text_pane

0x207a,	// (0x0000d161) setting_volume_pane

0x441f,	// (0x0000f506) volume_set_pane

0x5daa,	// (0x00010e91) bg_set_opt_pane_cp

0x4427,	// (0x0000f50e) setting_slider_pane_t1

0x4440,	// (0x0000f527) setting_slider_pane_t2

0x4459,	// (0x0000f540) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0001a661) setting_slider_pane_t

0x4470,	// (0x0000f557) slider_set_pane

0x5cca,	// (0x00010db1) bg_set_opt_pane_cp2

0x5dec,	// (0x00010ed3) setting_slider_graphic_pane_g1

0x4486,	// (0x0000f56d) setting_slider_graphic_pane_t1

0x4495,	// (0x0000f57c) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0001a668) setting_slider_graphic_pane_t

0x44a4,	// (0x0000f58b) slider_set_pane_cp

0x5cca,	// (0x00010db1) input_focus_pane_cp1

0x9cd9,	// (0x00014dc0) list_set_text_pane

0x5cc0,	// (0x00010da7) setting_text_pane_g1

0x5cca,	// (0x00010db1) input_focus_pane_cp2

0x5cc0,	// (0x00010da7) setting_code_pane_g1

0x5df5,	// (0x00010edc) setting_code_pane_t1

0x5e03,	// (0x00010eea) set_text_pane_t1_ParamLimits

0x5e03,	// (0x00010eea) set_text_pane_t1

0x6cbf,	// (0x00011da6) set_opt_bg_pane_g1

0x6cc7,	// (0x00011dae) set_opt_bg_pane_g2

0x9cb9,	// (0x00014da0) set_opt_bg_pane_g3

0x6cd7,	// (0x00011dbe) set_opt_bg_pane_g4

0x6cdf,	// (0x00011dc6) set_opt_bg_pane_g5

0x6ce7,	// (0x00011dce) set_opt_bg_pane_g6

0x9cc1,	// (0x00014da8) set_opt_bg_pane_g7

0x9cc9,	// (0x00014db0) set_opt_bg_pane_g8

0x9cd1,	// (0x00014db8) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0001aa61) set_opt_bg_pane_g

0x9cac,	// (0x00014d93) slider_set_pane_g1

0x4e04,	// (0x0000feeb) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0001aa52) slider_set_pane_g

0x4da0,	// (0x0000fe87) volume_set_pane_g1

0x4da8,	// (0x0000fe8f) volume_set_pane_g2

0x4db0,	// (0x0000fe97) volume_set_pane_g3

0x4db8,	// (0x0000fe9f) volume_set_pane_g4

0x4dc0,	// (0x0000fea7) volume_set_pane_g5

0x4dc8,	// (0x0000feaf) volume_set_pane_g6

0x4dd0,	// (0x0000feb7) volume_set_pane_g7

0x4dd8,	// (0x0000febf) volume_set_pane_g8

0x4de0,	// (0x0000fec7) volume_set_pane_g9

0x4de8,	// (0x0000fecf) volume_set_pane_g10

0x0009,

0xf943,	// (0x0001aa2a) volume_set_pane_g

0x03fc,	// (0x0000b4e3) indicator_pane_ParamLimits

0x03fc,	// (0x0000b4e3) indicator_pane

0x0424,	// (0x0000b50b) main_idle_pane_g2_ParamLimits

0x0424,	// (0x0000b50b) main_idle_pane_g2

0x045c,	// (0x0000b543) main_pane_idle_g1_ParamLimits

0x045c,	// (0x0000b543) main_pane_idle_g1

0x5e5e,	// (0x00010f45) popup_clock_digital_analogue_window_ParamLimits

0x5e5e,	// (0x00010f45) popup_clock_digital_analogue_window

0x0483,	// (0x0000b56a) soft_indicator_pane_ParamLimits

0x0483,	// (0x0000b56a) soft_indicator_pane

0x049d,	// (0x0000b584) wallpaper_pane_ParamLimits

0x049d,	// (0x0000b584) wallpaper_pane

0x5cc0,	// (0x00010da7) wallpaper_pane_g1

0x04af,	// (0x0000b596) indicator_pane_g1_ParamLimits

0x04af,	// (0x0000b596) indicator_pane_g1

0xa198,	// (0x0001527f) navi_navi_icon_text_pane_srt_g1

0x5eb0,	// (0x00010f97) soft_indicator_pane_t1

0x5eca,	// (0x00010fb1) aid_ps_area_pane

0x04c8,	// (0x0000b5af) aid_ps_clock_pane

0x5ee9,	// (0x00010fd0) aid_ps_indicator_pane

0x5ef5,	// (0x00010fdc) indicator_ps_pane_ParamLimits

0x5ef5,	// (0x00010fdc) indicator_ps_pane

0x5f04,	// (0x00010feb) power_save_pane_g1_ParamLimits

0x5f04,	// (0x00010feb) power_save_pane_g1

0x5f10,	// (0x00010ff7) power_save_pane_g2_ParamLimits

0x5f10,	// (0x00010ff7) power_save_pane_g2

0x4044,	// (0x0000f12b) aid_navinavi_width_pane

0x5eca,	// (0x00010fb1) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0001a66d) power_save_pane_g_ParamLimits

0xf586,	// (0x0001a66d) power_save_pane_g

0x5f1e,	// (0x00011005) power_save_pane_t1_ParamLimits

0x5f1e,	// (0x00011005) power_save_pane_t1

0x04c8,	// (0x0000b5af) aid_ps_clock_pane_ParamLimits

0x5ee9,	// (0x00010fd0) aid_ps_indicator_pane_ParamLimits

0x5f30,	// (0x00011017) power_save_pane_t4_ParamLimits

0x5f30,	// (0x00011017) power_save_pane_t4

0x0001,

0xf58b,	// (0x0001a672) power_save_pane_t_ParamLimits

0xf58b,	// (0x0001a672) power_save_pane_t

0x5f5a,	// (0x00011041) power_save_t3_ParamLimits

0x5f5a,	// (0x00011041) power_save_t3

0x5f45,	// (0x0001102c) power_save_t2_ParamLimits

0x5f45,	// (0x0001102c) power_save_t2

0x5f6f,	// (0x00011056) indicator_ps_pane_g1

0x04d6,	// (0x0000b5bd) ai_gene_pane_ParamLimits

0x04d6,	// (0x0000b5bd) ai_gene_pane

0x04ed,	// (0x0000b5d4) ai_links_pane_ParamLimits

0x04ed,	// (0x0000b5d4) ai_links_pane

0x0505,	// (0x0000b5ec) indicator_pane_cp1_ParamLimits

0x0505,	// (0x0000b5ec) indicator_pane_cp1

0x0514,	// (0x0000b5fb) main_pane_idle_g1_cp_ParamLimits

0x0514,	// (0x0000b5fb) main_pane_idle_g1_cp

0x5fa8,	// (0x0001108f) popup_ai_links_title_window

0x052c,	// (0x0000b613) soft_indicator_pane_cp1_ParamLimits

0x052c,	// (0x0000b613) soft_indicator_pane_cp1

0x9a5c,	// (0x00014b43) ai_links_pane_g1

0x9a65,	// (0x00014b4c) grid_ai_links_pane

0x1eae,	// (0x0000cf95) ai_gene_pane_1

0x9a4a,	// (0x00014b31) ai_gene_pane_2

0x9a53,	// (0x00014b3a) list_highlight_pane_cp4

0x1e8a,	// (0x0000cf71) cell_ai_link_pane_ParamLimits

0x1e8a,	// (0x0000cf71) cell_ai_link_pane

0x9a1b,	// (0x00014b02) cell_ai_link_pane_g1

0x61d5,	// (0x000112bc) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x0001aa05) cell_ai_link_pane_g

0x5cca,	// (0x00010db1) grid_highlight_cp2

0x5cca,	// (0x00010db1) bg_popup_sub_pane_cp1

0x5fcb,	// (0x000110b2) popup_ai_links_title_window_t1

0x9969,	// (0x00014a50) ai_gene_pane_1_g1_ParamLimits

0x9969,	// (0x00014a50) ai_gene_pane_1_g1

0x9975,	// (0x00014a5c) ai_gene_pane_1_g2_ParamLimits

0x9975,	// (0x00014a5c) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0001a9fb) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0001a9fb) ai_gene_pane_1_g

0x9982,	// (0x00014a69) ai_gene_pane_1_t1_ParamLimits

0x9982,	// (0x00014a69) ai_gene_pane_1_t1

0x99b6,	// (0x00014a9d) grid_ai_soft_ind_pane

0x9954,	// (0x00014a3b) ai_gene_pane_2_t1_ParamLimits

0x9954,	// (0x00014a3b) ai_gene_pane_2_t1

0x0540,	// (0x0000b627) main_pane_empty_t1_ParamLimits

0x0540,	// (0x0000b627) main_pane_empty_t1

0x0558,	// (0x0000b63f) main_pane_empty_t2_ParamLimits

0x0558,	// (0x0000b63f) main_pane_empty_t2

0x056d,	// (0x0000b654) main_pane_empty_t3_ParamLimits

0x056d,	// (0x0000b654) main_pane_empty_t3

0x057f,	// (0x0000b666) main_pane_empty_t4_ParamLimits

0x057f,	// (0x0000b666) main_pane_empty_t4

0x0591,	// (0x0000b678) main_pane_empty_t5_ParamLimits

0x0591,	// (0x0000b678) main_pane_empty_t5

0x0004,

0xf590,	// (0x0001a677) main_pane_empty_t_ParamLimits

0xf590,	// (0x0001a677) main_pane_empty_t

0x6db8,	// (0x00011e9f) bg_popup_window_pane_ParamLimits

0x6db8,	// (0x00011e9f) bg_popup_window_pane

0x96bc,	// (0x000147a3) find_popup_pane_cp2_ParamLimits

0x96bc,	// (0x000147a3) find_popup_pane_cp2

0x96c8,	// (0x000147af) heading_pane_ParamLimits

0x96c8,	// (0x000147af) heading_pane

0x5cca,	// (0x00010db1) bg_popup_sub_pane

0x1da8,	// (0x0000ce8f) bg_popup_window_pane_g1_ParamLimits

0x1da8,	// (0x0000ce8f) bg_popup_window_pane_g1

0x1db7,	// (0x0000ce9e) bg_popup_window_pane_g2_ParamLimits

0x1db7,	// (0x0000ce9e) bg_popup_window_pane_g2

0x1dc3,	// (0x0000ceaa) bg_popup_window_pane_g3_ParamLimits

0x1dc3,	// (0x0000ceaa) bg_popup_window_pane_g3

0x1dcf,	// (0x0000ceb6) bg_popup_window_pane_g4_ParamLimits

0x1dcf,	// (0x0000ceb6) bg_popup_window_pane_g4

0x1dde,	// (0x0000cec5) bg_popup_window_pane_g5_ParamLimits

0x1dde,	// (0x0000cec5) bg_popup_window_pane_g5

0x1dee,	// (0x0000ced5) bg_popup_window_pane_g6_ParamLimits

0x1dee,	// (0x0000ced5) bg_popup_window_pane_g6

0x1dfa,	// (0x0000cee1) bg_popup_window_pane_g7_ParamLimits

0x1dfa,	// (0x0000cee1) bg_popup_window_pane_g7

0x1e09,	// (0x0000cef0) bg_popup_window_pane_g8_ParamLimits

0x1e09,	// (0x0000cef0) bg_popup_window_pane_g8

0x1e18,	// (0x0000ceff) bg_popup_window_pane_g9_ParamLimits

0x1e18,	// (0x0000ceff) bg_popup_window_pane_g9

0x96a2,	// (0x00014789) bg_popup_window_pane_g10_ParamLimits

0x96a2,	// (0x00014789) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x0001a9c3) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x0001a9c3) bg_popup_window_pane_g

0x95cb,	// (0x000146b2) bg_popup_heading_pane_ParamLimits

0x95cb,	// (0x000146b2) bg_popup_heading_pane

0x4e8c,	// (0x0000ff73) tabs_4_passive_pane_cp_srt_ParamLimits

0x4e8c,	// (0x0000ff73) tabs_4_passive_pane_cp_srt

0x4e9e,	// (0x0000ff85) tabs_4_passive_pane_srt_ParamLimits

0x95df,	// (0x000146c6) heading_pane_g2

0x4e9e,	// (0x0000ff85) tabs_4_passive_pane_srt

0x8920,	// (0x00013a07) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8920,	// (0x00013a07) bg_passive_tab_pane_cp3_srt

0x95e7,	// (0x000146ce) heading_pane_t1_ParamLimits

0x95e7,	// (0x000146ce) heading_pane_t1

0x95fe,	// (0x000146e5) heading_pane_t2_ParamLimits

0x95fe,	// (0x000146e5) heading_pane_t2

0x0001,

0xf8d7,	// (0x0001a9be) heading_pane_t_ParamLimits

0xf8d7,	// (0x0001a9be) heading_pane_t

0x9106,	// (0x000141ed) bg_popup_heading_pane_g1

0x91b5,	// (0x0001429c) bg_popup_heading_pane_g2

0x91bf,	// (0x000142a6) bg_popup_heading_pane_g3

0x91c9,	// (0x000142b0) bg_popup_heading_pane_g4

0x91d3,	// (0x000142ba) bg_popup_heading_pane_g5

0x91dd,	// (0x000142c4) bg_popup_heading_pane_g6

0x91e5,	// (0x000142cc) bg_popup_heading_pane_g7

0x91ed,	// (0x000142d4) bg_popup_heading_pane_g8

0x91f7,	// (0x000142de) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0001a97a) bg_popup_heading_pane_g

0x8806,	// (0x000138ed) bg_popup_sub_pane_g1

0x8816,	// (0x000138fd) bg_popup_sub_pane_g2

0x880e,	// (0x000138f5) bg_popup_sub_pane_g3

0x8826,	// (0x0001390d) bg_popup_sub_pane_g4

0x881e,	// (0x00013905) bg_popup_sub_pane_g5

0x882e,	// (0x00013915) bg_popup_sub_pane_g6

0x8836,	// (0x0001391d) bg_popup_sub_pane_g7

0x8846,	// (0x0001392d) bg_popup_sub_pane_g8

0x883e,	// (0x00013925) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x0001a954) bg_popup_sub_pane_g

0x603f,	// (0x00011126) bg_popup_window_pane_cp5_ParamLimits

0x603f,	// (0x00011126) bg_popup_window_pane_cp5

0x605b,	// (0x00011142) popup_note_window_g1_ParamLimits

0x605b,	// (0x00011142) popup_note_window_g1

0x6067,	// (0x0001114e) popup_note_window_t1_ParamLimits

0x6067,	// (0x0001114e) popup_note_window_t1

0x6079,	// (0x00011160) popup_note_window_t2_ParamLimits

0x6079,	// (0x00011160) popup_note_window_t2

0x608b,	// (0x00011172) popup_note_window_t3_ParamLimits

0x608b,	// (0x00011172) popup_note_window_t3

0x609d,	// (0x00011184) popup_note_window_t4_ParamLimits

0x609d,	// (0x00011184) popup_note_window_t4

0x60c5,	// (0x000111ac) popup_note_window_t5_ParamLimits

0x60c5,	// (0x000111ac) popup_note_window_t5

0x0004,

0xf59b,	// (0x0001a682) popup_note_window_t_ParamLimits

0xf59b,	// (0x0001a682) popup_note_window_t

0x60e9,	// (0x000111d0) bg_popup_window_pane_cp6_ParamLimits

0x60e9,	// (0x000111d0) bg_popup_window_pane_cp6

0x907a,	// (0x00014161) popup_note_image_window_g1_ParamLimits

0x907a,	// (0x00014161) popup_note_image_window_g1

0x9086,	// (0x0001416d) popup_note_image_window_g2_ParamLimits

0x9086,	// (0x0001416d) popup_note_image_window_g2

0x0001,

0xf861,	// (0x0001a948) popup_note_image_window_g_ParamLimits

0xf861,	// (0x0001a948) popup_note_image_window_g

0x909f,	// (0x00014186) popup_note_image_window_t1_ParamLimits

0x909f,	// (0x00014186) popup_note_image_window_t1

0x90b8,	// (0x0001419f) popup_note_image_window_t2_ParamLimits

0x90b8,	// (0x0001419f) popup_note_image_window_t2

0x90d1,	// (0x000141b8) popup_note_image_window_t3_ParamLimits

0x90d1,	// (0x000141b8) popup_note_image_window_t3

0x0002,

0xf866,	// (0x0001a94d) popup_note_image_window_t_ParamLimits

0xf866,	// (0x0001a94d) popup_note_image_window_t

0x8f3b,	// (0x00014022) bg_popup_window_pane_cp7_ParamLimits

0x8f3b,	// (0x00014022) bg_popup_window_pane_cp7

0x8f6b,	// (0x00014052) popup_note_wait_window_g1_ParamLimits

0x8f6b,	// (0x00014052) popup_note_wait_window_g1

0x8f77,	// (0x0001405e) popup_note_wait_window_g2_ParamLimits

0x8f77,	// (0x0001405e) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x0001a936) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x0001a936) popup_note_wait_window_g

0x8f8f,	// (0x00014076) popup_note_wait_window_t1_ParamLimits

0x8f8f,	// (0x00014076) popup_note_wait_window_t1

0x8fb6,	// (0x0001409d) popup_note_wait_window_t2_ParamLimits

0x8fb6,	// (0x0001409d) popup_note_wait_window_t2

0x8fd3,	// (0x000140ba) popup_note_wait_window_t3_ParamLimits

0x8fd3,	// (0x000140ba) popup_note_wait_window_t3

0x8fe6,	// (0x000140cd) popup_note_wait_window_t4_ParamLimits

0x8fe6,	// (0x000140cd) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x0001a93d) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x0001a93d) popup_note_wait_window_t

0x900b,	// (0x000140f2) wait_bar_pane_ParamLimits

0x900b,	// (0x000140f2) wait_bar_pane

0x5cca,	// (0x00010db1) wait_anim_pane

0x5cca,	// (0x00010db1) wait_border_pane

0x5cc0,	// (0x00010da7) wait_anim_pane_g1

0x5cc0,	// (0x00010da7) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0001a801) wait_anim_pane_g

0x8edf,	// (0x00013fc6) wait_border_pane_g1

0x8eea,	// (0x00013fd1) wait_border_pane_g2

0x8ef3,	// (0x00013fda) wait_border_pane_g3

0x0002,

0xf848,	// (0x0001a92f) wait_border_pane_g

0x8d4f,	// (0x00013e36) bg_popup_window_pane_cp16_ParamLimits

0x8d4f,	// (0x00013e36) bg_popup_window_pane_cp16

0x8e4f,	// (0x00013f36) indicator_popup_pane_cp4_ParamLimits

0x8e4f,	// (0x00013f36) indicator_popup_pane_cp4

0x8e63,	// (0x00013f4a) popup_query_data_window_t1_ParamLimits

0x8e63,	// (0x00013f4a) popup_query_data_window_t1

0x8e75,	// (0x00013f5c) popup_query_data_window_t2_ParamLimits

0x8e75,	// (0x00013f5c) popup_query_data_window_t2

0x8e8e,	// (0x00013f75) popup_query_data_window_t3_ParamLimits

0x8e8e,	// (0x00013f75) popup_query_data_window_t3

0x0002,

0xf841,	// (0x0001a928) popup_query_data_window_t_ParamLimits

0xf841,	// (0x0001a928) popup_query_data_window_t

0x8ea8,	// (0x00013f8f) query_popup_data_pane_ParamLimits

0x8ea8,	// (0x00013f8f) query_popup_data_pane

0x8ebc,	// (0x00013fa3) query_popup_data_pane_cp1_ParamLimits

0x8ebc,	// (0x00013fa3) query_popup_data_pane_cp1

0x8d4f,	// (0x00013e36) bg_popup_window_pane_cp10_ParamLimits

0x8d4f,	// (0x00013e36) bg_popup_window_pane_cp10

0x8d81,	// (0x00013e68) indicator_popup_pane_ParamLimits

0x8d81,	// (0x00013e68) indicator_popup_pane

0x8da3,	// (0x00013e8a) popup_query_code_window_t1_ParamLimits

0x8da3,	// (0x00013e8a) popup_query_code_window_t1

0x8dbd,	// (0x00013ea4) popup_query_code_window_t2_ParamLimits

0x8dbd,	// (0x00013ea4) popup_query_code_window_t2

0x8e06,	// (0x00013eed) popup_query_code_window_t3_ParamLimits

0x8e06,	// (0x00013eed) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0001a921) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0001a921) popup_query_code_window_t

0x8e35,	// (0x00013f1c) query_popup_pane_ParamLimits

0x8e35,	// (0x00013f1c) query_popup_pane

0x60e9,	// (0x000111d0) bg_popup_window_pane_cp15_ParamLimits

0x60e9,	// (0x000111d0) bg_popup_window_pane_cp15

0x6107,	// (0x000111ee) indicator_popup_pane_cp1_ParamLimits

0x6107,	// (0x000111ee) indicator_popup_pane_cp1

0x611a,	// (0x00011201) indicator_popup_pane_cp2_ParamLimits

0x611a,	// (0x00011201) indicator_popup_pane_cp2

0x612d,	// (0x00011214) popup_query_data_code_window_g1_ParamLimits

0x612d,	// (0x00011214) popup_query_data_code_window_g1

0x6140,	// (0x00011227) popup_query_data_code_window_t1_ParamLimits

0x6140,	// (0x00011227) popup_query_data_code_window_t1

0x6152,	// (0x00011239) popup_query_data_code_window_t2_ParamLimits

0x6152,	// (0x00011239) popup_query_data_code_window_t2

0x6164,	// (0x0001124b) popup_query_data_code_window_t3_ParamLimits

0x6164,	// (0x0001124b) popup_query_data_code_window_t3

0x617a,	// (0x00011261) popup_query_data_code_window_t4_ParamLimits

0x617a,	// (0x00011261) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0001a68d) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0001a68d) popup_query_data_code_window_t

0x4b49,	// (0x0000fc30) list_single_midp_graphic_pane_g3

0x6192,	// (0x00011279) query_popup_data_pane_cp2_ParamLimits

0x61a5,	// (0x0001128c) query_popup_pane_cp2_ParamLimits

0x61a5,	// (0x0001128c) query_popup_pane_cp2

0x5cca,	// (0x00010db1) bg_popup_window_pane_cp11

0x8d47,	// (0x00013e2e) heading_pane_cp5

0x628d,	// (0x00011374) listscroll_popup_info_pane

0x5cca,	// (0x00010db1) input_focus_pane_cp3

0x61b8,	// (0x0001129f) query_popup_pane_t1

0x61c6,	// (0x000112ad) list_popup_info_pane_ParamLimits

0x61c6,	// (0x000112ad) list_popup_info_pane

0x61d5,	// (0x000112bc) listscroll_popup_info_pane_g1

0x61dd,	// (0x000112c4) scroll_pane_cp7

0x61e7,	// (0x000112ce) popup_info_list_pane_t1_ParamLimits

0x61e7,	// (0x000112ce) popup_info_list_pane_t1

0x6201,	// (0x000112e8) popup_info_list_pane_t2_ParamLimits

0x6201,	// (0x000112e8) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0001a696) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0001a696) popup_info_list_pane_t

0x5cca,	// (0x00010db1) bg_popup_window_pane_cp12

0xa1b2,	// (0x00015299) find_popup_pane

0x5daa,	// (0x00010e91) bg_popup_window_pane_cp3

0x621b,	// (0x00011302) heading_pane_cp3

0x6227,	// (0x0001130e) listscroll_popup_graphic_pane

0x5cca,	// (0x00010db1) bg_popup_window_pane_cp4

0x05f3,	// (0x0000b6da) heading_pane_cp4

0x628d,	// (0x00011374) listscroll_popup_colour_pane

0x6295,	// (0x0001137c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6295,	// (0x0001137c) cell_large_graphic_colour_none_popup_pane

0x05fb,	// (0x0000b6e2) grid_large_graphic_colour_popup_pane_ParamLimits

0x05fb,	// (0x0000b6e2) grid_large_graphic_colour_popup_pane

0x62cd,	// (0x000113b4) listscroll_popup_colour_pane_g1_ParamLimits

0x62cd,	// (0x000113b4) listscroll_popup_colour_pane_g1

0x62e4,	// (0x000113cb) listscroll_popup_colour_pane_g2_ParamLimits

0x62e4,	// (0x000113cb) listscroll_popup_colour_pane_g2

0x62fb,	// (0x000113e2) listscroll_popup_colour_pane_g3_ParamLimits

0x62fb,	// (0x000113e2) listscroll_popup_colour_pane_g3

0x061f,	// (0x0000b706) listscroll_popup_colour_pane_g4_ParamLimits

0x061f,	// (0x0000b706) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0001a69b) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0001a69b) listscroll_popup_colour_pane_g

0x631a,	// (0x00011401) scroll_pane_cp6_ParamLimits

0x631a,	// (0x00011401) scroll_pane_cp6

0x062e,	// (0x0000b715) cell_large_graphic_colour_popup_pane_ParamLimits

0x062e,	// (0x0000b715) cell_large_graphic_colour_popup_pane

0x634b,	// (0x00011432) cell_large_graphic_colour_none_popup_pane_t1

0x5cca,	// (0x00010db1) grid_highlight_pane_cp5

0x635a,	// (0x00011441) cell_large_graphic_colour_popup_pane_g1

0x6362,	// (0x00011449) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0001a6a4) cell_large_graphic_colour_popup_pane_g

0x636a,	// (0x00011451) cell_large_graphic_colour_popup_pane_g2_copy1

0x6373,	// (0x0001145a) grid_highlight_pane_cp4

0x637b,	// (0x00011462) bg_popup_window_pane_cp8_ParamLimits

0x637b,	// (0x00011462) bg_popup_window_pane_cp8

0x6396,	// (0x0001147d) popup_snote_single_text_window_g1_ParamLimits

0x6396,	// (0x0001147d) popup_snote_single_text_window_g1

0x63a8,	// (0x0001148f) popup_snote_single_text_window_t1_ParamLimits

0x63a8,	// (0x0001148f) popup_snote_single_text_window_t1

0x63bb,	// (0x000114a2) popup_snote_single_text_window_t2_ParamLimits

0x63bb,	// (0x000114a2) popup_snote_single_text_window_t2

0x63ce,	// (0x000114b5) popup_snote_single_text_window_t3_ParamLimits

0x63ce,	// (0x000114b5) popup_snote_single_text_window_t3

0x6407,	// (0x000114ee) popup_snote_single_text_window_t4_ParamLimits

0x6407,	// (0x000114ee) popup_snote_single_text_window_t4

0x643b,	// (0x00011522) popup_snote_single_text_window_t5_ParamLimits

0x643b,	// (0x00011522) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0001a6a9) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0001a6a9) popup_snote_single_text_window_t

0x646a,	// (0x00011551) bg_popup_window_pane_cp9_ParamLimits

0x646a,	// (0x00011551) bg_popup_window_pane_cp9

0x6396,	// (0x0001147d) popup_snote_single_graphic_window_g1_ParamLimits

0x6396,	// (0x0001147d) popup_snote_single_graphic_window_g1

0x6478,	// (0x0001155f) popup_snote_single_graphic_window_g2_ParamLimits

0x6478,	// (0x0001155f) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0001a6b4) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0001a6b4) popup_snote_single_graphic_window_g

0x6484,	// (0x0001156b) popup_snote_single_graphic_window_t1_ParamLimits

0x6484,	// (0x0001156b) popup_snote_single_graphic_window_t1

0x6497,	// (0x0001157e) popup_snote_single_graphic_window_t2_ParamLimits

0x6497,	// (0x0001157e) popup_snote_single_graphic_window_t2

0x64aa,	// (0x00011591) popup_snote_single_graphic_window_t3_ParamLimits

0x64aa,	// (0x00011591) popup_snote_single_graphic_window_t3

0x64e3,	// (0x000115ca) popup_snote_single_graphic_window_t4_ParamLimits

0x64e3,	// (0x000115ca) popup_snote_single_graphic_window_t4

0x6517,	// (0x000115fe) popup_snote_single_graphic_window_t5_ParamLimits

0x6517,	// (0x000115fe) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0001a6b9) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0001a6b9) popup_snote_single_graphic_window_t

0xa0f2,	// (0x000151d9) grid_graphic_popup_pane_ParamLimits

0xa0f2,	// (0x000151d9) grid_graphic_popup_pane

0xa11e,	// (0x00015205) listscroll_popup_graphic_pane_g1_ParamLimits

0xa11e,	// (0x00015205) listscroll_popup_graphic_pane_g1

0x21bb,	// (0x0000d2a2) listscroll_popup_graphic_pane_g2_ParamLimits

0x21bb,	// (0x0000d2a2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0001aa9e) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0001aa9e) listscroll_popup_graphic_pane_g

0xa146,	// (0x0001522d) scroll_pane_cp5

0x217e,	// (0x0000d265) cell_graphic_popup_pane_ParamLimits

0x217e,	// (0x0000d265) cell_graphic_popup_pane

0xa07e,	// (0x00015165) cell_graphic_popup_pane_g1

0xa086,	// (0x0001516d) cell_graphic_popup_pane_g2

0x636a,	// (0x00011451) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x0001aa97) cell_graphic_popup_pane_g

0xa08f,	// (0x00015176) cell_graphic_popup_pane_t2

0x6373,	// (0x0001145a) grid_highlight_pane_cp3

0x6558,	// (0x0001163f) list_gen_pane_ParamLimits

0x6558,	// (0x0001163f) list_gen_pane

0x658a,	// (0x00011671) scroll_pane

0x2139,	// (0x0000d220) bg_list_pane_g1_ParamLimits

0x2139,	// (0x0000d220) bg_list_pane_g1

0x9ffb,	// (0x000150e2) bg_list_pane_g2_ParamLimits

0x9ffb,	// (0x000150e2) bg_list_pane_g2

0xa00e,	// (0x000150f5) bg_list_pane_g3_ParamLimits

0xa00e,	// (0x000150f5) bg_list_pane_g3

0xa020,	// (0x00015107) bg_list_pane_g4_ParamLimits

0xa020,	// (0x00015107) bg_list_pane_g4

0x2154,	// (0x0000d23b) bg_list_pane_g5_ParamLimits

0x2154,	// (0x0000d23b) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x0001aa8c) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x0001aa8c) bg_list_pane_g

0x20d8,	// (0x0000d1bf) list_double2_graphic_large_graphic_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double2_graphic_large_graphic_pane

0x20d8,	// (0x0000d1bf) list_double2_graphic_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double2_graphic_pane

0x20d8,	// (0x0000d1bf) list_double2_large_graphic_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double2_large_graphic_pane

0x20d8,	// (0x0000d1bf) list_double2_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double2_pane

0x20d8,	// (0x0000d1bf) list_double_graphic_heading_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double_graphic_heading_pane

0x20d8,	// (0x0000d1bf) list_double_graphic_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double_graphic_pane

0x20d8,	// (0x0000d1bf) list_double_heading_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double_heading_pane

0x20d8,	// (0x0000d1bf) list_double_large_graphic_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double_large_graphic_pane

0x20d8,	// (0x0000d1bf) list_double_number_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double_number_pane

0x20d8,	// (0x0000d1bf) list_double_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double_pane

0x20d8,	// (0x0000d1bf) list_double_time_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_double_time_pane

0x20d8,	// (0x0000d1bf) list_setting_number_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_setting_number_pane

0x20d8,	// (0x0000d1bf) list_setting_pane_ParamLimits

0x20d8,	// (0x0000d1bf) list_setting_pane

0x20eb,	// (0x0000d1d2) list_single_2graphic_pane_ParamLimits

0x20eb,	// (0x0000d1d2) list_single_2graphic_pane

0x20eb,	// (0x0000d1d2) list_single_graphic_heading_pane_ParamLimits

0x20eb,	// (0x0000d1d2) list_single_graphic_heading_pane

0x20eb,	// (0x0000d1d2) list_single_graphic_pane_ParamLimits

0x20eb,	// (0x0000d1d2) list_single_graphic_pane

0x20eb,	// (0x0000d1d2) list_single_heading_pane_ParamLimits

0x20eb,	// (0x0000d1d2) list_single_heading_pane

0x20eb,	// (0x0000d1d2) list_single_large_graphic_pane_ParamLimits

0x20eb,	// (0x0000d1d2) list_single_large_graphic_pane

0x20eb,	// (0x0000d1d2) list_single_number_heading_pane_ParamLimits

0x20eb,	// (0x0000d1d2) list_single_number_heading_pane

0x20eb,	// (0x0000d1d2) list_single_number_pane_ParamLimits

0x20eb,	// (0x0000d1d2) list_single_number_pane

0x20eb,	// (0x0000d1d2) list_single_pane_ParamLimits

0x20eb,	// (0x0000d1d2) list_single_pane

0x5cca,	// (0x00010db1) list_highlight_pane_cp1

0x667f,	// (0x00011766) list_single_pane_g1_ParamLimits

0x667f,	// (0x00011766) list_single_pane_g1

0x668b,	// (0x00011772) list_single_pane_g2_ParamLimits

0x668b,	// (0x00011772) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_single_pane_g

0xa73d,	// (0x00015824) list_single_pane_t1_ParamLimits

0xa73d,	// (0x00015824) list_single_pane_t1

0x667f,	// (0x00011766) list_single_number_pane_g1_ParamLimits

0x667f,	// (0x00011766) list_single_number_pane_g1

0x668b,	// (0x00011772) list_single_number_pane_g2_ParamLimits

0x668b,	// (0x00011772) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_single_number_pane_g

0x8794,	// (0x0001387b) list_single_number_pane_t1_ParamLimits

0x8794,	// (0x0001387b) list_single_number_pane_t1

0x1f1c,	// (0x0000d003) list_single_number_pane_t2_ParamLimits

0x1f1c,	// (0x0000d003) list_single_number_pane_t2

0x0001,

0xf966,	// (0x0001aa4d) list_single_number_pane_t_ParamLimits

0xf966,	// (0x0001aa4d) list_single_number_pane_t

0x0657,	// (0x0000b73e) list_single_graphic_pane_g1_ParamLimits

0x0657,	// (0x0000b73e) list_single_graphic_pane_g1

0x667f,	// (0x00011766) list_single_graphic_pane_g2_ParamLimits

0x667f,	// (0x00011766) list_single_graphic_pane_g2

0x668b,	// (0x00011772) list_single_graphic_pane_g3_ParamLimits

0x668b,	// (0x00011772) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0001a6c4) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0001a6c4) list_single_graphic_pane_g

0x0663,	// (0x0000b74a) list_single_graphic_pane_t1_ParamLimits

0x0663,	// (0x0000b74a) list_single_graphic_pane_t1

0x667f,	// (0x00011766) list_single_heading_pane_g1_ParamLimits

0x667f,	// (0x00011766) list_single_heading_pane_g1

0x668b,	// (0x00011772) list_single_heading_pane_g2_ParamLimits

0x668b,	// (0x00011772) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_single_heading_pane_g

0xa75f,	// (0x00015846) list_single_heading_pane_t1_ParamLimits

0xa75f,	// (0x00015846) list_single_heading_pane_t1

0x0679,	// (0x0000b760) list_single_heading_pane_t2_ParamLimits

0x0679,	// (0x0000b760) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0001a6d0) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0001a6d0) list_single_heading_pane_t

0x667f,	// (0x00011766) list_single_number_heading_pane_g1_ParamLimits

0x667f,	// (0x00011766) list_single_number_heading_pane_g1

0x668b,	// (0x00011772) list_single_number_heading_pane_g2_ParamLimits

0x668b,	// (0x00011772) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_single_number_heading_pane_g

0xa75f,	// (0x00015846) list_single_number_heading_pane_t1_ParamLimits

0xa75f,	// (0x00015846) list_single_number_heading_pane_t1

0x068b,	// (0x0000b772) list_single_number_heading_pane_t2_ParamLimits

0x068b,	// (0x0000b772) list_single_number_heading_pane_t2

0xa717,	// (0x000157fe) list_single_number_heading_pane_t3_ParamLimits

0xa717,	// (0x000157fe) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0001a6d5) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0001a6d5) list_single_number_heading_pane_t

0x8788,	// (0x0001386f) list_single_graphic_heading_pane_g1_ParamLimits

0x8788,	// (0x0001386f) list_single_graphic_heading_pane_g1

0x069d,	// (0x0000b784) list_single_graphic_heading_pane_g4_ParamLimits

0x069d,	// (0x0000b784) list_single_graphic_heading_pane_g4

0x668b,	// (0x00011772) list_single_graphic_heading_pane_g5_ParamLimits

0x668b,	// (0x00011772) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0001a6dc) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0001a6dc) list_single_graphic_heading_pane_g

0xa75f,	// (0x00015846) list_single_graphic_heading_pane_t1_ParamLimits

0xa75f,	// (0x00015846) list_single_graphic_heading_pane_t1

0x06ae,	// (0x0000b795) list_single_graphic_heading_pane_t2_ParamLimits

0x06ae,	// (0x0000b795) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0001a6e3) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0001a6e3) list_single_graphic_heading_pane_t

0xa753,	// (0x0001583a) list_single_large_graphic_pane_g1_ParamLimits

0xa753,	// (0x0001583a) list_single_large_graphic_pane_g1

0x667f,	// (0x00011766) list_single_large_graphic_pane_g2_ParamLimits

0x667f,	// (0x00011766) list_single_large_graphic_pane_g2

0x668b,	// (0x00011772) list_single_large_graphic_pane_g3_ParamLimits

0x668b,	// (0x00011772) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0001a6e8) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0001a6e8) list_single_large_graphic_pane_g

0x8eea,	// (0x00013fd1) wait_border_pane_g2_copy1

0x06c0,	// (0x0000b7a7) list_single_large_graphic_pane_g4_cp2

0xa75f,	// (0x00015846) list_single_large_graphic_pane_t1_ParamLimits

0xa75f,	// (0x00015846) list_single_large_graphic_pane_t1

0x67db,	// (0x000118c2) list_double_pane_g1_ParamLimits

0x67db,	// (0x000118c2) list_double_pane_g1

0x6706,	// (0x000117ed) list_double_pane_g2_ParamLimits

0x6706,	// (0x000117ed) list_double_pane_g2

0x0001,

0xf608,	// (0x0001a6ef) list_double_pane_g_ParamLimits

0xf608,	// (0x0001a6ef) list_double_pane_g

0x6712,	// (0x000117f9) list_double_pane_t1_ParamLimits

0x6712,	// (0x000117f9) list_double_pane_t1

0x06c8,	// (0x0000b7af) list_double_pane_t2_ParamLimits

0x06c8,	// (0x0000b7af) list_double_pane_t2

0x0001,

0xf60d,	// (0x0001a6f4) list_double_pane_t_ParamLimits

0xf60d,	// (0x0001a6f4) list_double_pane_t

0x06da,	// (0x0000b7c1) list_double2_pane_g1_ParamLimits

0x06da,	// (0x0000b7c1) list_double2_pane_g1

0x06eb,	// (0x0000b7d2) list_double2_pane_g2_ParamLimits

0x06eb,	// (0x0000b7d2) list_double2_pane_g2

0x0001,

0xf612,	// (0x0001a6f9) list_double2_pane_g_ParamLimits

0xf612,	// (0x0001a6f9) list_double2_pane_g

0xbf51,	// (0x00017038) list_double2_pane_t1_ParamLimits

0xbf51,	// (0x00017038) list_double2_pane_t1

0x6904,	// (0x000119eb) list_double2_pane_t2_ParamLimits

0x6904,	// (0x000119eb) list_double2_pane_t2

0x0001,

0xf617,	// (0x0001a6fe) list_double2_pane_t_ParamLimits

0xf617,	// (0x0001a6fe) list_double2_pane_t

0x67db,	// (0x000118c2) list_double_number_pane_g1_ParamLimits

0x67db,	// (0x000118c2) list_double_number_pane_g1

0x6706,	// (0x000117ed) list_double_number_pane_g2_ParamLimits

0x6706,	// (0x000117ed) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0001a6ef) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0001a6ef) list_double_number_pane_g

0x06f7,	// (0x0000b7de) list_double_number_pane_t1_ParamLimits

0x06f7,	// (0x0000b7de) list_double_number_pane_t1

0x67e7,	// (0x000118ce) list_double_number_pane_t2_ParamLimits

0x67e7,	// (0x000118ce) list_double_number_pane_t2

0x0709,	// (0x0000b7f0) list_double_number_pane_t3_ParamLimits

0x0709,	// (0x0000b7f0) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0001a703) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0001a703) list_double_number_pane_t

0x67cf,	// (0x000118b6) list_double_graphic_pane_g1_ParamLimits

0x67cf,	// (0x000118b6) list_double_graphic_pane_g1

0x071b,	// (0x0000b802) list_double_graphic_pane_g2_ParamLimits

0x071b,	// (0x0000b802) list_double_graphic_pane_g2

0x072a,	// (0x0000b811) list_double_graphic_pane_g3_ParamLimits

0x072a,	// (0x0000b811) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0001a70a) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0001a70a) list_double_graphic_pane_g

0x0742,	// (0x0000b829) list_double_graphic_pane_t1_ParamLimits

0x0742,	// (0x0000b829) list_double_graphic_pane_t1

0x0758,	// (0x0000b83f) list_double_graphic_pane_t2_ParamLimits

0x0758,	// (0x0000b83f) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a713) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a713) list_double_graphic_pane_t

0x076a,	// (0x0000b851) list_double2_graphic_pane_g1_ParamLimits

0x076a,	// (0x0000b851) list_double2_graphic_pane_g1

0x6ba9,	// (0x00011c90) list_double2_graphic_pane_g2_ParamLimits

0x6ba9,	// (0x00011c90) list_double2_graphic_pane_g2

0x06eb,	// (0x0000b7d2) list_double2_graphic_pane_g3_ParamLimits

0x06eb,	// (0x0000b7d2) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a718) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a718) list_double2_graphic_pane_g

0x0776,	// (0x0000b85d) list_double2_graphic_pane_t1_ParamLimits

0x0776,	// (0x0000b85d) list_double2_graphic_pane_t1

0x692c,	// (0x00011a13) list_double2_graphic_pane_t2_ParamLimits

0x692c,	// (0x00011a13) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a71f) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a71f) list_double2_graphic_pane_t

0x078c,	// (0x0000b873) list_double_large_graphic_pane_g1_ParamLimits

0x078c,	// (0x0000b873) list_double_large_graphic_pane_g1

0x07b7,	// (0x0000b89e) list_double_large_graphic_pane_g2_ParamLimits

0x07b7,	// (0x0000b89e) list_double_large_graphic_pane_g2

0x6706,	// (0x000117ed) list_double_large_graphic_pane_g3_ParamLimits

0x6706,	// (0x000117ed) list_double_large_graphic_pane_g3

0x07c8,	// (0x0000b8af) list_double_large_graphic_pane_g4_ParamLimits

0x07c8,	// (0x0000b8af) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0001a724) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0001a724) list_double_large_graphic_pane_g

0x07db,	// (0x0000b8c2) list_double_large_graphic_pane_t1_ParamLimits

0x07db,	// (0x0000b8c2) list_double_large_graphic_pane_t1

0x07f4,	// (0x0000b8db) list_double_large_graphic_pane_t2_ParamLimits

0x07f4,	// (0x0000b8db) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0001a72f) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0001a72f) list_double_large_graphic_pane_t

0x0806,	// (0x0000b8ed) list_double2_large_graphic_pane_g1_ParamLimits

0x0806,	// (0x0000b8ed) list_double2_large_graphic_pane_g1

0x06da,	// (0x0000b7c1) list_double2_large_graphic_pane_g2_ParamLimits

0x06da,	// (0x0000b7c1) list_double2_large_graphic_pane_g2

0x06eb,	// (0x0000b7d2) list_double2_large_graphic_pane_g3_ParamLimits

0x06eb,	// (0x0000b7d2) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0001a734) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0001a734) list_double2_large_graphic_pane_g

0x0812,	// (0x0000b8f9) list_double2_large_graphic_pane_t1_ParamLimits

0x0812,	// (0x0000b8f9) list_double2_large_graphic_pane_t1

0x0828,	// (0x0000b90f) list_double2_large_graphic_pane_t2_ParamLimits

0x0828,	// (0x0000b90f) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0001a73b) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0001a73b) list_double2_large_graphic_pane_t

0x083a,	// (0x0000b921) list_double_heading_pane_g1_ParamLimits

0x083a,	// (0x0000b921) list_double_heading_pane_g1

0x084b,	// (0x0000b932) list_double_heading_pane_g2_ParamLimits

0x084b,	// (0x0000b932) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0001a740) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0001a740) list_double_heading_pane_g

0x0857,	// (0x0000b93e) list_double_heading_pane_t1_ParamLimits

0x0857,	// (0x0000b93e) list_double_heading_pane_t1

0x086d,	// (0x0000b954) list_double_heading_pane_t2_ParamLimits

0x086d,	// (0x0000b954) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0001a745) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0001a745) list_double_heading_pane_t

0x67cf,	// (0x000118b6) list_double_graphic_heading_pane_g1_ParamLimits

0x67cf,	// (0x000118b6) list_double_graphic_heading_pane_g1

0x083a,	// (0x0000b921) list_double_graphic_heading_pane_g2_ParamLimits

0x083a,	// (0x0000b921) list_double_graphic_heading_pane_g2

0x084b,	// (0x0000b932) list_double_graphic_heading_pane_g3_ParamLimits

0x084b,	// (0x0000b932) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0001a74a) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0001a74a) list_double_graphic_heading_pane_g

0x087f,	// (0x0000b966) list_double_graphic_heading_pane_t1_ParamLimits

0x087f,	// (0x0000b966) list_double_graphic_heading_pane_t1

0x0895,	// (0x0000b97c) list_double_graphic_heading_pane_t2_ParamLimits

0x0895,	// (0x0000b97c) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0001a751) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0001a751) list_double_graphic_heading_pane_t

0x07b7,	// (0x0000b89e) list_double_time_pane_g1_ParamLimits

0x07b7,	// (0x0000b89e) list_double_time_pane_g1

0x6706,	// (0x000117ed) list_double_time_pane_g2_ParamLimits

0x6706,	// (0x000117ed) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0001a756) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0001a756) list_double_time_pane_g

0x68a9,	// (0x00011990) list_double_time_pane_t1_ParamLimits

0x68a9,	// (0x00011990) list_double_time_pane_t1

0x08a7,	// (0x0000b98e) list_double_time_pane_t2_ParamLimits

0x08a7,	// (0x0000b98e) list_double_time_pane_t2

0x08b9,	// (0x0000b9a0) list_double_time_pane_t3_ParamLimits

0x08b9,	// (0x0000b9a0) list_double_time_pane_t3

0x08cb,	// (0x0000b9b2) list_double_time_pane_t4_ParamLimits

0x08cb,	// (0x0000b9b2) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0001a75b) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0001a75b) list_double_time_pane_t

0x6ba9,	// (0x00011c90) list_setting_pane_g1_ParamLimits

0x6ba9,	// (0x00011c90) list_setting_pane_g1

0x06eb,	// (0x0000b7d2) list_setting_pane_g2_ParamLimits

0x06eb,	// (0x0000b7d2) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0001a764) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0001a764) list_setting_pane_g

0x08dd,	// (0x0000b9c4) list_setting_pane_t1_ParamLimits

0x08dd,	// (0x0000b9c4) list_setting_pane_t1

0x08f4,	// (0x0000b9db) list_setting_pane_t2_ParamLimits

0x08f4,	// (0x0000b9db) list_setting_pane_t2

0x0002,

0xf682,	// (0x0001a769) list_setting_pane_t_ParamLimits

0xf682,	// (0x0001a769) list_setting_pane_t

0x0931,	// (0x0000ba18) set_value_pane_cp_ParamLimits

0x0931,	// (0x0000ba18) set_value_pane_cp

0x6ba9,	// (0x00011c90) list_setting_number_pane_g1_ParamLimits

0x6ba9,	// (0x00011c90) list_setting_number_pane_g1

0x06eb,	// (0x0000b7d2) list_setting_number_pane_g2_ParamLimits

0x06eb,	// (0x0000b7d2) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0001a764) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0001a764) list_setting_number_pane_g

0x093d,	// (0x0000ba24) list_setting_number_pane_t1_ParamLimits

0x093d,	// (0x0000ba24) list_setting_number_pane_t1

0x0951,	// (0x0000ba38) list_setting_number_pane_t2_ParamLimits

0x0951,	// (0x0000ba38) list_setting_number_pane_t2

0x0968,	// (0x0000ba4f) list_setting_number_pane_t3_ParamLimits

0x0968,	// (0x0000ba4f) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0001a770) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0001a770) list_setting_number_pane_t

0x0931,	// (0x0000ba18) set_value_pane_ParamLimits

0x0931,	// (0x0000ba18) set_value_pane

0x6a58,	// (0x00011b3f) bg_set_opt_pane_ParamLimits

0x6a58,	// (0x00011b3f) bg_set_opt_pane

0x6a79,	// (0x00011b60) set_value_pane_t1

0x6a87,	// (0x00011b6e) slider_set_pane_cp3

0x6a90,	// (0x00011b77) volume_small_pane_cp

0x6a99,	// (0x00011b80) list_form_gen_pane

0x6aa2,	// (0x00011b89) scroll_pane_cp8

0x09ab,	// (0x0000ba92) form_field_data_pane_ParamLimits

0x09ab,	// (0x0000ba92) form_field_data_pane

0x09c2,	// (0x0000baa9) form_field_data_wide_pane_ParamLimits

0x09c2,	// (0x0000baa9) form_field_data_wide_pane

0x09e2,	// (0x0000bac9) form_field_popup_pane_ParamLimits

0x09e2,	// (0x0000bac9) form_field_popup_pane

0x0a00,	// (0x0000bae7) form_field_popup_wide_pane_ParamLimits

0x0a00,	// (0x0000bae7) form_field_popup_wide_pane

0x6b2d,	// (0x00011c14) form_field_slider_pane_ParamLimits

0x6b2d,	// (0x00011c14) form_field_slider_pane

0x6b40,	// (0x00011c27) form_field_slider_wide_pane_ParamLimits

0x6b40,	// (0x00011c27) form_field_slider_wide_pane

0x6b53,	// (0x00011c3a) data_form_pane

0x0a21,	// (0x0000bb08) form_field_data_pane_t1

0x6b83,	// (0x00011c6a) input_focus_pane

0x6b91,	// (0x00011c78) data_form_wide_pane

0x6bc9,	// (0x00011cb0) form_field_data_wide_pane_t1

0x6388,	// (0x0001146f) input_focus_pane_cp6

0x0a3b,	// (0x0000bb22) form_field_popup_pane_t1

0x6b83,	// (0x00011c6a) input_focus_pane_cp7

0x6c05,	// (0x00011cec) list_form_pane

0x6c19,	// (0x00011d00) form_field_popup_wide_pane_t1

0x6b83,	// (0x00011c6a) input_focus_pane_cp8

0x6c2e,	// (0x00011d15) list_form_wide_pane

0x0a5d,	// (0x0000bb44) form_field_slider_pane_t1_ParamLimits

0x0a5d,	// (0x0000bb44) form_field_slider_pane_t1

0x0a75,	// (0x0000bb5c) form_field_slider_pane_t2_ParamLimits

0x0a75,	// (0x0000bb5c) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0001a780) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0001a780) form_field_slider_pane_t

0x603f,	// (0x00011126) input_focus_pane_cp9_ParamLimits

0x603f,	// (0x00011126) input_focus_pane_cp9

0x0a8a,	// (0x0000bb71) slider_cont_pane_ParamLimits

0x0a8a,	// (0x0000bb71) slider_cont_pane

0x6c7f,	// (0x00011d66) form_field_slider_wide_pane_t1_ParamLimits

0x6c7f,	// (0x00011d66) form_field_slider_wide_pane_t1

0x6c91,	// (0x00011d78) form_field_slider_wide_pane_t2_ParamLimits

0x6c91,	// (0x00011d78) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0001a785) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0001a785) form_field_slider_wide_pane_t

0x603f,	// (0x00011126) input_focus_pane_cp10_ParamLimits

0x603f,	// (0x00011126) input_focus_pane_cp10

0x0a9e,	// (0x0000bb85) slider_cont_pane_cp1_ParamLimits

0x0a9e,	// (0x0000bb85) slider_cont_pane_cp1

0x0ab2,	// (0x0000bb99) slider_form_pane_cp

0x6cbf,	// (0x00011da6) input_focus_pane_g1

0x6cc7,	// (0x00011dae) input_focus_pane_g2

0x6ccf,	// (0x00011db6) input_focus_pane_g3

0x6cd7,	// (0x00011dbe) input_focus_pane_g4

0x6cdf,	// (0x00011dc6) input_focus_pane_g5

0x6ce7,	// (0x00011dce) input_focus_pane_g6

0x6cef,	// (0x00011dd6) input_focus_pane_g7

0x6cf7,	// (0x00011dde) input_focus_pane_g8

0x6cff,	// (0x00011de6) input_focus_pane_g9

0x5cc0,	// (0x00010da7) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0001a78a) input_focus_pane_g

0x8ef3,	// (0x00013fda) wait_border_pane_g3_copy1

0x0aba,	// (0x0000bba1) data_form_pane_t1

0x5cc0,	// (0x00010da7) wait_anim_pane_g1_copy1

0x20ad,	// (0x0000d194) data_form_wide_pane_t1

0x0ad4,	// (0x0000bbbb) list_form_graphic_pane_cp_ParamLimits

0x0ad4,	// (0x0000bbbb) list_form_graphic_pane_cp

0x9e46,	// (0x00014f2d) slider_form_pane_g1

0x9e4f,	// (0x00014f36) slider_form_pane_g2

0x0006,

0xf996,	// (0x0001aa7d) slider_form_pane_g

0x0ae7,	// (0x0000bbce) list_form_graphic_pane_ParamLimits

0x0ae7,	// (0x0000bbce) list_form_graphic_pane

0x6d53,	// (0x00011e3a) list_form_graphic_pane_g1

0x6d5b,	// (0x00011e42) list_form_graphic_pane_t1_ParamLimits

0x6d5b,	// (0x00011e42) list_form_graphic_pane_t1

0x5daa,	// (0x00010e91) list_highlight_pane_cp5_ParamLimits

0x5daa,	// (0x00010e91) list_highlight_pane_cp5

0x0afb,	// (0x0000bbe2) find_pane_g1

0x6d79,	// (0x00011e60) input_find_pane

0x0b04,	// (0x0000bbeb) input_find_pane_g1_ParamLimits

0x0b04,	// (0x0000bbeb) input_find_pane_g1

0x0b10,	// (0x0000bbf7) input_find_pane_t1_ParamLimits

0x0b10,	// (0x0000bbf7) input_find_pane_t1

0x0b25,	// (0x0000bc0c) input_find_pane_t2_ParamLimits

0x0b25,	// (0x0000bc0c) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0001a79f) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0001a79f) input_find_pane_t

0x6db8,	// (0x00011e9f) input_focus_pane_cp5_ParamLimits

0x6db8,	// (0x00011e9f) input_focus_pane_cp5

0x0b46,	// (0x0000bc2d) bg_popup_window_pane_cp2_ParamLimits

0x0b46,	// (0x0000bc2d) bg_popup_window_pane_cp2

0x0b53,	// (0x0000bc3a) listscroll_menu_pane_ParamLimits

0x0b53,	// (0x0000bc3a) listscroll_menu_pane

0x0b5f,	// (0x0000bc46) popup_submenu_window_ParamLimits

0x0b5f,	// (0x0000bc46) popup_submenu_window

0x6e0f,	// (0x00011ef6) find_popup_pane_g1

0x6e17,	// (0x00011efe) input_popup_find_pane_cp

0x6db8,	// (0x00011e9f) input_focus_pane_cp4_ParamLimits

0x6db8,	// (0x00011e9f) input_focus_pane_cp4

0x6e2f,	// (0x00011f16) input_popup_find_pane_t1_ParamLimits

0x6e2f,	// (0x00011f16) input_popup_find_pane_t1

0x5cca,	// (0x00010db1) bg_popup_sub_pane_cp

0x6e5d,	// (0x00011f44) listscroll_popup_sub_pane

0x6e65,	// (0x00011f4c) list_submenu_pane_ParamLimits

0x6e65,	// (0x00011f4c) list_submenu_pane

0x6e76,	// (0x00011f5d) scroll_pane_cp4

0x6e7e,	// (0x00011f65) list_single_popup_submenu_pane_ParamLimits

0x6e7e,	// (0x00011f65) list_single_popup_submenu_pane

0x6e91,	// (0x00011f78) list_single_popup_submenu_pane_g1

0x6e99,	// (0x00011f80) list_single_popup_submenu_pane_t1_ParamLimits

0x6e99,	// (0x00011f80) list_single_popup_submenu_pane_t1

0x603f,	// (0x00011126) bg_active_tab_pane_cp1_ParamLimits

0x603f,	// (0x00011126) bg_active_tab_pane_cp1

0x0b91,	// (0x0000bc78) tabs_2_active_pane_g1

0x0b99,	// (0x0000bc80) tabs_2_active_pane_t1

0x603f,	// (0x00011126) bg_passive_tab_pane_cp1_ParamLimits

0x603f,	// (0x00011126) bg_passive_tab_pane_cp1

0x0b91,	// (0x0000bc78) tabs_2_passive_pane_g1

0x0b99,	// (0x0000bc80) tabs_2_passive_pane_t1

0x5daa,	// (0x00010e91) bg_active_tab_pane_cp4

0x0bab,	// (0x0000bc92) tabs_2_long_active_pane_t1

0x7d54,	// (0x00012e3b) bg_passive_tab_pane_cp4

0x4b51,	// (0x0000fc38) list_single_midp_graphic_pane_g4_ParamLimits

0x5daa,	// (0x00010e91) bg_active_tab_pane_cp5

0x0bbe,	// (0x0000bca5) tabs_3_long_active_pane_t1

0x7d54,	// (0x00012e3b) bg_passive_tab_pane_cp5

0x4b51,	// (0x0000fc38) list_single_midp_graphic_pane_g4

0x5daa,	// (0x00010e91) bg_popup_window_pane_cp13_ParamLimits

0x5daa,	// (0x00010e91) bg_popup_window_pane_cp13

0x6f10,	// (0x00011ff7) listscroll_popup_fast_pane_ParamLimits

0x6f10,	// (0x00011ff7) listscroll_popup_fast_pane

0x6f1f,	// (0x00012006) grid_popup_fast_pane_ParamLimits

0x6f1f,	// (0x00012006) grid_popup_fast_pane

0x6f31,	// (0x00012018) scroll_pane_cp9_ParamLimits

0x6f31,	// (0x00012018) scroll_pane_cp9

0xbc28,	// (0x00016d0f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbc28,	// (0x00016d0f) list_single_graphic_hl_pane_t1_cp2

0x6f55,	// (0x0001203c) input_focus_pane_cp20_ParamLimits

0x6f55,	// (0x0001203c) input_focus_pane_cp20

0x6f63,	// (0x0001204a) query_popup_data_pane_t1_ParamLimits

0x6f63,	// (0x0001204a) query_popup_data_pane_t1

0x6f76,	// (0x0001205d) query_popup_data_pane_t2_ParamLimits

0x6f76,	// (0x0001205d) query_popup_data_pane_t2

0x6fbc,	// (0x000120a3) query_popup_data_pane_t3_ParamLimits

0x6fbc,	// (0x000120a3) query_popup_data_pane_t3

0x6ffd,	// (0x000120e4) query_popup_data_pane_t4_ParamLimits

0x6ffd,	// (0x000120e4) query_popup_data_pane_t4

0x7039,	// (0x00012120) query_popup_data_pane_t5_ParamLimits

0x7039,	// (0x00012120) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0001a7a4) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0001a7a4) query_popup_data_pane_t

0x6cbf,	// (0x00011da6) bg_set_opt_pane_g1

0x6cc7,	// (0x00011dae) bg_set_opt_pane_g2

0x6ccf,	// (0x00011db6) bg_set_opt_pane_g3

0x6cd7,	// (0x00011dbe) bg_set_opt_pane_g4

0x6cdf,	// (0x00011dc6) bg_set_opt_pane_g5

0x6ce7,	// (0x00011dce) bg_set_opt_pane_g6

0x6cef,	// (0x00011dd6) bg_set_opt_pane_g7

0x6cf7,	// (0x00011dde) bg_set_opt_pane_g8

0x6cff,	// (0x00011de6) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0001a7af) bg_set_opt_pane_g

0x474b,	// (0x0000f832) control_top_pane_stacon_ParamLimits

0x474b,	// (0x0000f832) control_top_pane_stacon

0x479e,	// (0x0000f885) signal_pane_stacon_ParamLimits

0x479e,	// (0x0000f885) signal_pane_stacon

0x7662,	// (0x00012749) stacon_top_pane_g1_ParamLimits

0x7662,	// (0x00012749) stacon_top_pane_g1

0x47c3,	// (0x0000f8aa) title_pane_stacon_ParamLimits

0x47c3,	// (0x0000f8aa) title_pane_stacon

0x47ed,	// (0x0000f8d4) uni_indicator_pane_stacon_ParamLimits

0x47ed,	// (0x0000f8d4) uni_indicator_pane_stacon

0x4802,	// (0x0000f8e9) battery_pane_stacon_ParamLimits

0x4802,	// (0x0000f8e9) battery_pane_stacon

0x4846,	// (0x0000f92d) control_bottom_pane_stacon_ParamLimits

0x4846,	// (0x0000f92d) control_bottom_pane_stacon

0x4869,	// (0x0000f950) navi_pane_stacon_ParamLimits

0x4869,	// (0x0000f950) navi_pane_stacon

0x7684,	// (0x0001276b) stacon_bottom_pane_g1_ParamLimits

0x7684,	// (0x0001276b) stacon_bottom_pane_g1

0x44ac,	// (0x0000f593) aid_levels_signal_lsc_ParamLimits

0x44ac,	// (0x0000f593) aid_levels_signal_lsc

0x44c3,	// (0x0000f5aa) signal_pane_stacon_g1_ParamLimits

0x44c3,	// (0x0000f5aa) signal_pane_stacon_g1

0x44d7,	// (0x0000f5be) signal_pane_stacon_g2_ParamLimits

0x44d7,	// (0x0000f5be) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0001a7c2) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0001a7c2) signal_pane_stacon_g

0x450c,	// (0x0000f5f3) title_pane_stacon_t1_ParamLimits

0x450c,	// (0x0000f5f3) title_pane_stacon_t1

0x707d,	// (0x00012164) uni_indicator_pane_stacon_g1

0x7087,	// (0x0001216e) uni_indicator_pane_stacon_g2

0x7091,	// (0x00012178) uni_indicator_pane_stacon_g3

0x709b,	// (0x00012182) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0001a7ce) uni_indicator_pane_stacon_g

0x4531,	// (0x0000f618) control_top_pane_stacon_g1

0x4539,	// (0x0000f620) control_top_pane_stacon_t1_ParamLimits

0x4539,	// (0x0000f620) control_top_pane_stacon_t1

0x4570,	// (0x0000f657) aid_levels_battery_lsc_ParamLimits

0x4570,	// (0x0000f657) aid_levels_battery_lsc

0x4588,	// (0x0000f66f) battery_pane_stacon_g1_ParamLimits

0x4588,	// (0x0000f66f) battery_pane_stacon_g1

0x459b,	// (0x0000f682) battery_pane_stacon_g2_ParamLimits

0x459b,	// (0x0000f682) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0001a7d7) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0001a7d7) battery_pane_stacon_g

0x45d9,	// (0x0000f6c0) navi_icon_pane_stacon

0x45ed,	// (0x0000f6d4) navi_navi_pane_stacon

0x45d9,	// (0x0000f6c0) navi_text_pane_stacon

0x4531,	// (0x0000f618) control_bottom_pane_stacon_g1

0x4601,	// (0x0000f6e8) control_bottom_pane_stacon_t1_ParamLimits

0x4601,	// (0x0000f6e8) control_bottom_pane_stacon_t1

0x0bd0,	// (0x0000bcb7) grid_app_pane_ParamLimits

0x0bd0,	// (0x0000bcb7) grid_app_pane

0x0c06,	// (0x0000bced) scroll_pane_cp15_ParamLimits

0x0c06,	// (0x0000bced) scroll_pane_cp15

0x0c1f,	// (0x0000bd06) cell_app_pane_ParamLimits

0x0c1f,	// (0x0000bd06) cell_app_pane

0x0c66,	// (0x0000bd4d) cell_app_pane_g1_ParamLimits

0x0c66,	// (0x0000bd4d) cell_app_pane_g1

0x7144,	// (0x0001222b) cell_app_pane_g2_ParamLimits

0x7144,	// (0x0001222b) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0001a7dc) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0001a7dc) cell_app_pane_g

0x7150,	// (0x00012237) cell_app_pane_t1_ParamLimits

0x7150,	// (0x00012237) cell_app_pane_t1

0x7167,	// (0x0001224e) grid_highlight_pane_ParamLimits

0x7167,	// (0x0001224e) grid_highlight_pane

0x6cbf,	// (0x00011da6) cell_highlight_pane_g1

0x6cc7,	// (0x00011dae) cell_highlight_pane_g2

0x6ccf,	// (0x00011db6) cell_highlight_pane_g3

0x6cd7,	// (0x00011dbe) cell_highlight_pane_g4

0x6cdf,	// (0x00011dc6) cell_highlight_pane_g5

0x6ce7,	// (0x00011dce) cell_highlight_pane_g6

0x6cef,	// (0x00011dd6) cell_highlight_pane_g7

0x6cf7,	// (0x00011dde) cell_highlight_pane_g8

0x6cff,	// (0x00011de6) cell_highlight_pane_g9

0x5cc0,	// (0x00010da7) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0001a78a) cell_highlight_pane_g

0x7178,	// (0x0001225f) bg_scroll_pane

0x464b,	// (0x0000f732) scroll_handle_pane

0x71bf,	// (0x000122a6) scroll_bg_pane_g1

0x71d4,	// (0x000122bb) scroll_bg_pane_g2

0x71ec,	// (0x000122d3) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0001a7e1) scroll_bg_pane_g

0x7201,	// (0x000122e8) scroll_handle_focus_pane_ParamLimits

0x7201,	// (0x000122e8) scroll_handle_focus_pane

0x71bf,	// (0x000122a6) scroll_handle_pane_g1

0x720e,	// (0x000122f5) scroll_handle_pane_g2

0x71ec,	// (0x000122d3) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0001a7e8) scroll_handle_pane_g

0x6db8,	// (0x00011e9f) bg_popup_sub_pane_cp21_ParamLimits

0x6db8,	// (0x00011e9f) bg_popup_sub_pane_cp21

0x7222,	// (0x00012309) popup_fep_japan_predictive_window_t1_ParamLimits

0x7222,	// (0x00012309) popup_fep_japan_predictive_window_t1

0x7239,	// (0x00012320) popup_fep_japan_predictive_window_t2_ParamLimits

0x7239,	// (0x00012320) popup_fep_japan_predictive_window_t2

0x726c,	// (0x00012353) popup_fep_japan_predictive_window_t3_ParamLimits

0x726c,	// (0x00012353) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0001a7ef) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0001a7ef) popup_fep_japan_predictive_window_t

0x5cca,	// (0x00010db1) bg_popup_sub_pane_cp23

0x72a3,	// (0x0001238a) listscroll_japin_cand_pane

0x72ab,	// (0x00012392) popup_fep_japan_candidate_window_t1

0x72b9,	// (0x000123a0) candidate_pane_ParamLimits

0x72b9,	// (0x000123a0) candidate_pane

0x72cb,	// (0x000123b2) scroll_pane_cp30

0x72d3,	// (0x000123ba) list_single_popup_jap_candidate_pane_ParamLimits

0x72d3,	// (0x000123ba) list_single_popup_jap_candidate_pane

0x5cca,	// (0x00010db1) list_highlight_pane_cp30

0x72e7,	// (0x000123ce) list_single_popup_jap_candidate_pane_t1

0x72f6,	// (0x000123dd) level_1_signal

0x7303,	// (0x000123ea) level_2_signal

0x7310,	// (0x000123f7) level_3_signal

0x731d,	// (0x00012404) level_4_signal

0x732a,	// (0x00012411) level_5_signal

0x7337,	// (0x0001241e) level_6_signal

0x7344,	// (0x0001242b) level_7_signal

0x72f6,	// (0x000123dd) level_1_battery

0x7303,	// (0x000123ea) level_2_battery

0x7310,	// (0x000123f7) level_3_battery

0x731d,	// (0x00012404) level_4_battery

0x732a,	// (0x00012411) level_5_battery

0x7337,	// (0x0001241e) level_6_battery

0x7344,	// (0x0001242b) level_7_battery

0x7369,	// (0x00012450) list_menu_pane_ParamLimits

0x7369,	// (0x00012450) list_menu_pane

0x737a,	// (0x00012461) scroll_pane_cp25_ParamLimits

0x737a,	// (0x00012461) scroll_pane_cp25

0x7393,	// (0x0001247a) list_double2_graphic_pane_cp2_ParamLimits

0x7393,	// (0x0001247a) list_double2_graphic_pane_cp2

0x7393,	// (0x0001247a) list_double2_large_graphic_pane_cp2_ParamLimits

0x7393,	// (0x0001247a) list_double2_large_graphic_pane_cp2

0x7393,	// (0x0001247a) list_double2_pane_cp2_ParamLimits

0x7393,	// (0x0001247a) list_double2_pane_cp2

0x7393,	// (0x0001247a) list_double_graphic_pane_cp2_ParamLimits

0x7393,	// (0x0001247a) list_double_graphic_pane_cp2

0x7393,	// (0x0001247a) list_double_large_graphic_pane_cp2_ParamLimits

0x7393,	// (0x0001247a) list_double_large_graphic_pane_cp2

0x7393,	// (0x0001247a) list_double_number_pane_cp2_ParamLimits

0x7393,	// (0x0001247a) list_double_number_pane_cp2

0x7393,	// (0x0001247a) list_double_pane_cp2_ParamLimits

0x7393,	// (0x0001247a) list_double_pane_cp2

0x0ca4,	// (0x0000bd8b) list_single_2graphic_pane_cp2_ParamLimits

0x0ca4,	// (0x0000bd8b) list_single_2graphic_pane_cp2

0x0ca4,	// (0x0000bd8b) list_single_graphic_heading_pane_cp2_ParamLimits

0x0ca4,	// (0x0000bd8b) list_single_graphic_heading_pane_cp2

0x0ca4,	// (0x0000bd8b) list_single_graphic_pane_cp2_ParamLimits

0x0ca4,	// (0x0000bd8b) list_single_graphic_pane_cp2

0x0ca4,	// (0x0000bd8b) list_single_heading_pane_cp2_ParamLimits

0x0ca4,	// (0x0000bd8b) list_single_heading_pane_cp2

0x73cc,	// (0x000124b3) list_single_large_graphic_pane_cp2_ParamLimits

0x73cc,	// (0x000124b3) list_single_large_graphic_pane_cp2

0x0ca4,	// (0x0000bd8b) list_single_number_heading_pane_cp2_ParamLimits

0x0ca4,	// (0x0000bd8b) list_single_number_heading_pane_cp2

0x0ca4,	// (0x0000bd8b) list_single_number_pane_cp2_ParamLimits

0x0ca4,	// (0x0000bd8b) list_single_number_pane_cp2

0x0ca4,	// (0x0000bd8b) list_single_pane_cp2_ParamLimits

0x0ca4,	// (0x0000bd8b) list_single_pane_cp2

0x7422,	// (0x00012509) bg_popup_sub_pane_cp22

0x46fd,	// (0x0000f7e4) popup_side_volume_key_window_g1

0x4727,	// (0x0000f80e) popup_side_volume_key_window_t1

0x4743,	// (0x0000f82a) volume_small_pane_cp1

0x603f,	// (0x00011126) bg_popup_sub_pane_cp24_ParamLimits

0x603f,	// (0x00011126) bg_popup_sub_pane_cp24

0x7438,	// (0x0001251f) fep_china_uni_candidate_pane_ParamLimits

0x7438,	// (0x0001251f) fep_china_uni_candidate_pane

0x744c,	// (0x00012533) fep_china_uni_entry_pane

0x745c,	// (0x00012543) popup_fep_china_uni_window_g1

0x7478,	// (0x0001255f) fep_china_uni_entry_pane_g1

0x7480,	// (0x00012567) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0001a81c) fep_china_uni_entry_pane_g

0x7488,	// (0x0001256f) fep_entry_item_pane

0x7492,	// (0x00012579) fep_candidate_item_pane

0x749a,	// (0x00012581) fep_china_uni_candidate_pane_g1

0x74a2,	// (0x00012589) fep_china_uni_candidate_pane_g2

0x74aa,	// (0x00012591) fep_china_uni_candidate_pane_g3

0x74b2,	// (0x00012599) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0001a821) fep_china_uni_candidate_pane_g

0x5cc0,	// (0x00010da7) fep_entry_item_pane_g1

0x74ba,	// (0x000125a1) fep_entry_item_pane_t1_ParamLimits

0x74ba,	// (0x000125a1) fep_entry_item_pane_t1

0x74d0,	// (0x000125b7) fep_candidate_item_pane_t1_ParamLimits

0x74d0,	// (0x000125b7) fep_candidate_item_pane_t1

0x74e5,	// (0x000125cc) fep_candidate_item_pane_t2_ParamLimits

0x74e5,	// (0x000125cc) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0001a82a) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0001a82a) fep_candidate_item_pane_t

0x5daa,	// (0x00010e91) list_highlight_pane_cp31_ParamLimits

0x5daa,	// (0x00010e91) list_highlight_pane_cp31

0x74f7,	// (0x000125de) level_1_signal_lsc

0x7500,	// (0x000125e7) level_2_signal_lsc

0x7509,	// (0x000125f0) level_3_signal_lsc

0x7512,	// (0x000125f9) level_4_signal_lsc

0x751b,	// (0x00012602) level_5_signal_lsc

0x7524,	// (0x0001260b) level_6_signal_lsc

0x752d,	// (0x00012614) level_7_signal_lsc

0x752d,	// (0x00012614) level_1_battery_lsc

0x7536,	// (0x0001261d) level_2_battery_lsc

0x753f,	// (0x00012626) level_3_battery_lsc

0x7548,	// (0x0001262f) level_4_battery_lsc

0x7551,	// (0x00012638) level_5_battery_lsc

0x755a,	// (0x00012641) level_6_battery_lsc

0x74f7,	// (0x000125de) level_7_battery_lsc

0x7563,	// (0x0001264a) scroll_handle_focus_pane_g1

0x756c,	// (0x00012653) scroll_handle_focus_pane_g2

0x7575,	// (0x0001265c) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0001a82f) scroll_handle_focus_pane_g

0x0d06,	// (0x0000bded) list_single_2graphic_pane_g1_ParamLimits

0x0d06,	// (0x0000bded) list_single_2graphic_pane_g1

0x069d,	// (0x0000b784) list_single_2graphic_pane_g2_ParamLimits

0x069d,	// (0x0000b784) list_single_2graphic_pane_g2

0x668b,	// (0x00011772) list_single_2graphic_pane_g3_ParamLimits

0x668b,	// (0x00011772) list_single_2graphic_pane_g3

0x0d12,	// (0x0000bdf9) list_single_2graphic_pane_g4_ParamLimits

0x0d12,	// (0x0000bdf9) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0001a836) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0001a836) list_single_2graphic_pane_g

0x0d1e,	// (0x0000be05) list_single_2graphic_pane_t1_ParamLimits

0x0d1e,	// (0x0000be05) list_single_2graphic_pane_t1

0x0d4c,	// (0x0000be33) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0d4c,	// (0x0000be33) list_double2_graphic_large_graphic_pane_g1

0x06da,	// (0x0000b7c1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x06da,	// (0x0000b7c1) list_double2_graphic_large_graphic_pane_g2

0x06eb,	// (0x0000b7d2) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x06eb,	// (0x0000b7d2) list_double2_graphic_large_graphic_pane_g3

0x0d5e,	// (0x0000be45) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0d5e,	// (0x0000be45) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0001a83f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0001a83f) list_double2_graphic_large_graphic_pane_g

0x0d6a,	// (0x0000be51) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0d6a,	// (0x0000be51) list_double2_graphic_large_graphic_pane_t1

0x0d80,	// (0x0000be67) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0d80,	// (0x0000be67) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0001a848) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0001a848) list_double2_graphic_large_graphic_pane_t

0x774f,	// (0x00012836) popup_fast_swap_window_ParamLimits

0x774f,	// (0x00012836) popup_fast_swap_window

0x776b,	// (0x00012852) popup_side_volume_key_window

0x7785,	// (0x0001286c) stacon_top_pane

0x778f,	// (0x00012876) status_pane_ParamLimits

0x778f,	// (0x00012876) status_pane

0x7785,	// (0x0001286c) status_small_pane

0x5cca,	// (0x00010db1) control_pane

0x5cca,	// (0x00010db1) stacon_bottom_pane

0x6aa2,	// (0x00011b89) scroll_pane_cp121

0x6a99,	// (0x00011b80) set_content_pane

0x0d9b,	// (0x0000be82) bg_active_tab_pane_g1_cp1

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp1

0x0d92,	// (0x0000be79) bg_active_tab_pane_g3_cp1

0x0d9b,	// (0x0000be82) bg_passive_tab_pane_g1_cp1

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp1

0x0d92,	// (0x0000be79) bg_passive_tab_pane_g3_cp1

0x0dad,	// (0x0000be94) bg_active_tab_pane_g1_cp2

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp2

0x0da4,	// (0x0000be8b) bg_active_tab_pane_g3_cp2

0x0dad,	// (0x0000be94) bg_passive_tab_pane_g1_cp2

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp2

0x0da4,	// (0x0000be8b) bg_passive_tab_pane_g3_cp2

0x0dbf,	// (0x0000bea6) bg_active_tab_pane_g1_cp3

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp3

0x0db6,	// (0x0000be9d) bg_active_tab_pane_g3_cp3

0x0dbf,	// (0x0000bea6) bg_passive_tab_pane_g1_cp3

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp3

0x0db6,	// (0x0000be9d) bg_passive_tab_pane_g3_cp3

0x0dd1,	// (0x0000beb8) bg_active_tab_pane_g1_cp4

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp4

0x0dc8,	// (0x0000beaf) bg_active_tab_pane_g3_cp4

0x0dd1,	// (0x0000beb8) bg_passive_tab_pane_g1_cp4

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp4

0x0dc8,	// (0x0000beaf) bg_passive_tab_pane_g3_cp4

0x76a0,	// (0x00012787) bg_active_tab_pane_g1_cp5

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp5

0x76a9,	// (0x00012790) bg_active_tab_pane_g3_cp5

0x76a0,	// (0x00012787) bg_passive_tab_pane_g1_cp5

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp5

0x76a9,	// (0x00012790) bg_passive_tab_pane_g3_cp5

0xf045,	// (0x0001a12c) list_set_graphic_pane_ParamLimits

0xf045,	// (0x0001a12c) list_set_graphic_pane

0x5cca,	// (0x00010db1) bg_set_opt_pane_cp4

0x76d0,	// (0x000127b7) list_set_graphic_pane_g1_ParamLimits

0x76d0,	// (0x000127b7) list_set_graphic_pane_g1

0x76dc,	// (0x000127c3) list_set_graphic_pane_g2_ParamLimits

0x76dc,	// (0x000127c3) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0001a84d) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0001a84d) list_set_graphic_pane_g

0x0009,

0xfad2,	// (0x0001abb9) volume_small_pane_cp_g

0x7700,	// (0x000127e7) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7700,	// (0x000127e7) list_double2_large_graphic_pane_g1_cp2

0x770e,	// (0x000127f5) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x770e,	// (0x000127f5) list_double2_large_graphic_pane_g2_cp2

0x771f,	// (0x00012806) list_double2_large_graphic_pane_g3_cp2

0x7727,	// (0x0001280e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7727,	// (0x0001280e) list_double2_large_graphic_pane_t1_cp2

0x773d,	// (0x00012824) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x773d,	// (0x00012824) list_double2_large_graphic_pane_t2_cp2

0x99c6,	// (0x00014aad) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x99c6,	// (0x00014aad) list_double_large_graphic_pane_g1_cp2

0x99d9,	// (0x00014ac0) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x99d9,	// (0x00014ac0) list_double_large_graphic_pane_g2_cp2

0x78ad,	// (0x00012994) list_double_large_graphic_pane_g3_cp2

0x99ea,	// (0x00014ad1) list_double_large_graphic_pane_g4_cp

0x99f2,	// (0x00014ad9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x99f2,	// (0x00014ad9) list_double_large_graphic_pane_t1_cp2

0x9a09,	// (0x00014af0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9a09,	// (0x00014af0) list_double_large_graphic_pane_t2_cp2

0x779d,	// (0x00012884) list_double2_graphic_pane_g1_cp2_ParamLimits

0x779d,	// (0x00012884) list_double2_graphic_pane_g1_cp2

0x77ab,	// (0x00012892) list_double2_graphic_pane_g2_cp2_ParamLimits

0x77ab,	// (0x00012892) list_double2_graphic_pane_g2_cp2

0x77bc,	// (0x000128a3) list_double2_graphic_pane_g3_cp2

0x77c6,	// (0x000128ad) list_double2_graphic_pane_t1_cp2_ParamLimits

0x77c6,	// (0x000128ad) list_double2_graphic_pane_t1_cp2

0x77dc,	// (0x000128c3) list_double2_graphic_pane_t2_cp2_ParamLimits

0x77dc,	// (0x000128c3) list_double2_graphic_pane_t2_cp2

0x77ee,	// (0x000128d5) list_single_number_heading_pane_g1_cp2_ParamLimits

0x77ee,	// (0x000128d5) list_single_number_heading_pane_g1_cp2

0x77fa,	// (0x000128e1) list_single_number_heading_pane_g2_cp2

0x7802,	// (0x000128e9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x7802,	// (0x000128e9) list_single_number_heading_pane_t1_cp2

0x7818,	// (0x000128ff) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7818,	// (0x000128ff) list_single_number_heading_pane_t2_cp2

0x782c,	// (0x00012913) list_single_number_heading_pane_t3_cp2_ParamLimits

0x782c,	// (0x00012913) list_single_number_heading_pane_t3_cp2

0x77ee,	// (0x000128d5) list_single_heading_pane_g1_cp2_ParamLimits

0x77ee,	// (0x000128d5) list_single_heading_pane_g1_cp2

0x77fa,	// (0x000128e1) list_single_heading_pane_g2_cp2

0x7802,	// (0x000128e9) list_single_heading_pane_t1_cp2_ParamLimits

0x7802,	// (0x000128e9) list_single_heading_pane_t1_cp2

0x97ce,	// (0x000148b5) list_single_heading_pane_t2_cp2_ParamLimits

0x97ce,	// (0x000148b5) list_single_heading_pane_t2_cp2

0x9710,	// (0x000147f7) list_double_graphic_pane_g1_cp2_ParamLimits

0x9710,	// (0x000147f7) list_double_graphic_pane_g1_cp2

0x971c,	// (0x00014803) list_double_graphic_pane_g2_cp2_ParamLimits

0x971c,	// (0x00014803) list_double_graphic_pane_g2_cp2

0x972b,	// (0x00014812) list_double_graphic_pane_g3_cp2

0x9733,	// (0x0001481a) list_double_graphic_pane_t1_cp2_ParamLimits

0x9733,	// (0x0001481a) list_double_graphic_pane_t1_cp2

0x9749,	// (0x00014830) list_double_graphic_pane_t2_cp2_ParamLimits

0x9749,	// (0x00014830) list_double_graphic_pane_t2_cp2

0x78a1,	// (0x00012988) list_double_number_pane_g1_cp2_ParamLimits

0x78a1,	// (0x00012988) list_double_number_pane_g1_cp2

0x78ad,	// (0x00012994) list_double_number_pane_g2_cp2

0x96d4,	// (0x000147bb) list_double_number_pane_t1_cp2_ParamLimits

0x96d4,	// (0x000147bb) list_double_number_pane_t1_cp2

0x96e8,	// (0x000147cf) list_double_number_pane_t2_cp2_ParamLimits

0x96e8,	// (0x000147cf) list_double_number_pane_t2_cp2

0x96fe,	// (0x000147e5) list_double_number_pane_t3_cp2_ParamLimits

0x96fe,	// (0x000147e5) list_double_number_pane_t3_cp2

0x95bd,	// (0x000146a4) list_single_graphic_pane_g1_cp2_ParamLimits

0x95bd,	// (0x000146a4) list_single_graphic_pane_g1_cp2

0x7905,	// (0x000129ec) list_single_graphic_pane_g2_cp2_ParamLimits

0x7905,	// (0x000129ec) list_single_graphic_pane_g2_cp2

0x7911,	// (0x000129f8) list_single_graphic_pane_g3_cp2

0x9593,	// (0x0001467a) list_single_graphic_pane_t1_cp2_ParamLimits

0x9593,	// (0x0001467a) list_single_graphic_pane_t1_cp2

0x7905,	// (0x000129ec) list_single_number_pane_g1_cp2_ParamLimits

0x7905,	// (0x000129ec) list_single_number_pane_g1_cp2

0x7911,	// (0x000129f8) list_single_number_pane_g2_cp2

0x9593,	// (0x0001467a) list_single_number_pane_t1_cp2_ParamLimits

0x9593,	// (0x0001467a) list_single_number_pane_t1_cp2

0x95a9,	// (0x00014690) list_single_number_pane_t2_cp2_ParamLimits

0x95a9,	// (0x00014690) list_single_number_pane_t2_cp2

0x770e,	// (0x000127f5) list_double2_pane_g1_cp2_ParamLimits

0x770e,	// (0x000127f5) list_double2_pane_g1_cp2

0x771f,	// (0x00012806) list_double2_pane_g2_cp2

0x7879,	// (0x00012960) list_double2_pane_t1_cp2_ParamLimits

0x7879,	// (0x00012960) list_double2_pane_t1_cp2

0x788f,	// (0x00012976) list_double2_pane_t2_cp2_ParamLimits

0x788f,	// (0x00012976) list_double2_pane_t2_cp2

0x78a1,	// (0x00012988) list_double_pane_g1_cp2_ParamLimits

0x78a1,	// (0x00012988) list_double_pane_g1_cp2

0x78ad,	// (0x00012994) list_double_pane_g2_cp2

0x78b5,	// (0x0001299c) list_double_pane_t1_cp2_ParamLimits

0x78b5,	// (0x0001299c) list_double_pane_t1_cp2

0x78cb,	// (0x000129b2) list_double_pane_t2_cp2_ParamLimits

0x78cb,	// (0x000129b2) list_double_pane_t2_cp2

0x78f5,	// (0x000129dc) list_single_pane_cp2_g3

0x7905,	// (0x000129ec) list_single_pane_g1_cp2_ParamLimits

0x7905,	// (0x000129ec) list_single_pane_g1_cp2

0x7911,	// (0x000129f8) list_single_pane_g2_cp2

0x7919,	// (0x00012a00) list_single_pane_t1_cp2_ParamLimits

0x7919,	// (0x00012a00) list_single_pane_t1_cp2

0x7931,	// (0x00012a18) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x7931,	// (0x00012a18) list_single_large_graphic_pane_g1_cp2

0x793f,	// (0x00012a26) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x793f,	// (0x00012a26) list_single_large_graphic_pane_g2_cp2

0x794b,	// (0x00012a32) list_single_large_graphic_pane_g3_cp2

0x7953,	// (0x00012a3a) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7953,	// (0x00012a3a) list_single_large_graphic_pane_g4_cp1

0x796d,	// (0x00012a54) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x796d,	// (0x00012a54) list_single_large_graphic_pane_t1_cp2

0x955d,	// (0x00014644) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x955d,	// (0x00014644) list_single_graphic_heading_pane_g1_cp2

0x952a,	// (0x00014611) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x952a,	// (0x00014611) list_single_graphic_heading_pane_g4_cp2

0x7911,	// (0x000129f8) list_single_graphic_heading_pane_g5_cp2

0x9569,	// (0x00014650) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x9569,	// (0x00014650) list_single_graphic_heading_pane_t1_cp2

0x957f,	// (0x00014666) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x957f,	// (0x00014666) list_single_graphic_heading_pane_t2_cp2

0x951e,	// (0x00014605) list_single_2graphic_pane_g1_cp2_ParamLimits

0x951e,	// (0x00014605) list_single_2graphic_pane_g1_cp2

0x952a,	// (0x00014611) list_single_2graphic_pane_g2_cp2_ParamLimits

0x952a,	// (0x00014611) list_single_2graphic_pane_g2_cp2

0x7911,	// (0x000129f8) list_single_2graphic_pane_g3_cp2

0x953b,	// (0x00014622) list_single_2graphic_pane_g4_cp2_ParamLimits

0x953b,	// (0x00014622) list_single_2graphic_pane_g4_cp2

0x9547,	// (0x0001462e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x9547,	// (0x0001462e) list_single_2graphic_pane_t1_cp2

0x5cc0,	// (0x00010da7) list_highlight_pane_g10_cp1

0x9106,	// (0x000141ed) list_highlight_pane_g1_cp1

0x910e,	// (0x000141f5) list_highlight_pane_g2_cp1

0x9116,	// (0x000141fd) list_highlight_pane_g3_cp1

0x911e,	// (0x00014205) list_highlight_pane_g4_cp1

0x9126,	// (0x0001420d) list_highlight_pane_g5_cp1

0x912e,	// (0x00014215) list_highlight_pane_g6_cp1

0x9136,	// (0x0001421d) list_highlight_pane_g7_cp1

0x913e,	// (0x00014225) list_highlight_pane_g8_cp1

0x9146,	// (0x0001422d) list_highlight_pane_g9_cp1

0x1c09,	// (0x0000ccf0) form_field_slider_pane_t3

0x1c19,	// (0x0000cd00) form_field_slider_pane_t4

0x903a,	// (0x00014121) slider_form_pane_ParamLimits

0x903a,	// (0x00014121) slider_form_pane

0x5cca,	// (0x00010db1) control_abbreviations

0x5cca,	// (0x00010db1) control_conventions

0x5cca,	// (0x00010db1) control_definitions

0x5cca,	// (0x00010db1) format_table_attribute

0x981a,	// (0x00014901) bg_popup_preview_window_pane_g9

0x5cca,	// (0x00010db1) format_table_data2

0x5cca,	// (0x00010db1) format_table_data3

0x5cca,	// (0x00010db1) format_table_data_example

0x0008,

0x5cca,	// (0x00010db1) intro_purpose

0xf8f6,	// (0x0001a9dd) bg_popup_preview_window_pane_g

0x5cca,	// (0x00010db1) texts_category

0x5cca,	// (0x00010db1) texts_graphics

0x7983,	// (0x00012a6a) text_digital

0x7992,	// (0x00012a79) text_primary

0x79a1,	// (0x00012a88) text_primary_small

0x79b0,	// (0x00012a97) text_secondary

0x79bf,	// (0x00012aa6) text_title

0xa052,	// (0x00015139) bg_passive_tab_pane_g1_cp3_srt

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp3_srt

0xa05b,	// (0x00015142) bg_passive_tab_pane_g3_cp3_srt

0x603f,	// (0x00011126) bg_active_tab_pane_cp3_srt_ParamLimits

0x603f,	// (0x00011126) bg_active_tab_pane_cp3_srt

0xa064,	// (0x0001514b) tabs_4_active_pane_srt_g1

0x2168,	// (0x0000d24f) tabs_4_active_pane_srt_t1_ParamLimits

0x2168,	// (0x0000d24f) tabs_4_active_pane_srt_t1

0xa052,	// (0x00015139) bg_active_tab_pane_g1_cp3_copy1

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp3_copy1

0xa05b,	// (0x00015142) bg_active_tab_pane_g3_cp3_copy1

0x5daa,	// (0x00010e91) tabs_2_long_active_pane_srt_ParamLimits

0x5daa,	// (0x00010e91) tabs_2_long_active_pane_srt

0x5daa,	// (0x00010e91) tabs_2_long_passive_pane_srt_ParamLimits

0x5daa,	// (0x00010e91) tabs_2_long_passive_pane_srt

0x7d54,	// (0x00012e3b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7d54,	// (0x00012e3b) bg_passive_tab_pane_cp4_srt

0x9c87,	// (0x00014d6e) bg_passive_tab_pane_g1_cp4_srt

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp4_srt

0x9c90,	// (0x00014d77) bg_passive_tab_pane_g3_cp4_srt

0x5daa,	// (0x00010e91) bg_active_tab_pane_cp4_srt_ParamLimits

0x5daa,	// (0x00010e91) bg_active_tab_pane_cp4_srt

0x1f44,	// (0x0000d02b) tabs_2_long_active_pane_srt_t1_ParamLimits

0x1f44,	// (0x0000d02b) tabs_2_long_active_pane_srt_t1

0x9c87,	// (0x00014d6e) bg_active_tab_pane_g1_cp4_srt

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp4_srt

0x9c90,	// (0x00014d77) bg_active_tab_pane_g3_cp4_srt

0x603f,	// (0x00011126) tabs_3_long_active_pane_srt_ParamLimits

0x603f,	// (0x00011126) tabs_3_long_active_pane_srt

0x603f,	// (0x00011126) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x603f,	// (0x00011126) tabs_3_long_passive_pane_cp_srt

0x603f,	// (0x00011126) tabs_3_long_passive_pane_srt_ParamLimits

0x603f,	// (0x00011126) tabs_3_long_passive_pane_srt

0x7d54,	// (0x00012e3b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7d54,	// (0x00012e3b) bg_passive_tab_pane_cp5_srt

0x76a0,	// (0x00012787) bg_passive_tab_pane_g1_cp5_srt

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp5_srt

0x76a9,	// (0x00012790) bg_passive_tab_pane_g3_cp5_srt

0x5daa,	// (0x00010e91) bg_active_tab_pane_cp5_srt_ParamLimits

0x5daa,	// (0x00010e91) bg_active_tab_pane_cp5_srt

0x1f2e,	// (0x0000d015) tabs_3_long_active_pane_srt_t1_ParamLimits

0x1f2e,	// (0x0000d015) tabs_3_long_active_pane_srt_t1

0x76a0,	// (0x00012787) bg_active_tab_pane_g1_cp5_srt

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp5_srt

0x76a9,	// (0x00012790) bg_active_tab_pane_g3_cp5_srt

0x9c67,	// (0x00014d4e) navi_text_pane_srt_t1

0x9c5f,	// (0x00014d46) navi_icon_pane_srt_g1

0x7b8e,	// (0x00012c75) midp_editing_number_pane_srt

0x79ce,	// (0x00012ab5) midp_ticker_pane_srt

0x7b96,	// (0x00012c7d) midp_ticker_pane_srt_g1

0x7b9e,	// (0x00012c85) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0001a86c) midp_ticker_pane_srt_g

0x7ba6,	// (0x00012c8d) midp_ticker_pane_srt_t1

0x9c50,	// (0x00014d37) midp_editing_number_pane_t1_copy1

0x0dda,	// (0x0000bec1) listscroll_midp_pane

0x0dda,	// (0x0000bec1) midp_form_pane

0x7a46,	// (0x00012b2d) midp_info_popup_window_ParamLimits

0x7a46,	// (0x00012b2d) midp_info_popup_window

0x6db8,	// (0x00011e9f) bg_popup_sub_pane_cp50_ParamLimits

0x6db8,	// (0x00011e9f) bg_popup_sub_pane_cp50

0x8d3b,	// (0x00013e22) listscroll_midp_info_pane_ParamLimits

0x8d3b,	// (0x00013e22) listscroll_midp_info_pane

0x8d23,	// (0x00013e0a) listscroll_form_midp_pane_ParamLimits

0x8d23,	// (0x00013e0a) listscroll_form_midp_pane

0x8d2f,	// (0x00013e16) scroll_bar_cp050

0x1bfd,	// (0x0000cce4) list_midp_pane

0xac35,	// (0x00015d1c) signal_pane_g2_cp

0x8c3d,	// (0x00013d24) listscroll_midp_info_pane_t1_ParamLimits

0x8c3d,	// (0x00013d24) listscroll_midp_info_pane_t1

0x8c55,	// (0x00013d3c) listscroll_midp_info_pane_t2_ParamLimits

0x8c55,	// (0x00013d3c) listscroll_midp_info_pane_t2

0x8c93,	// (0x00013d7a) listscroll_midp_info_pane_t3_ParamLimits

0x8c93,	// (0x00013d7a) listscroll_midp_info_pane_t3

0x8ccd,	// (0x00013db4) listscroll_midp_info_pane_t4_ParamLimits

0x8ccd,	// (0x00013db4) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x0001a918) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x0001a918) listscroll_midp_info_pane_t

0x6e76,	// (0x00011f5d) scroll_pane_cp21

0x8be1,	// (0x00013cc8) form_midp_field_choice_group_pane

0x8bea,	// (0x00013cd1) form_midp_field_text_pane

0x8c23,	// (0x00013d0a) form_midp_field_time_pane

0x8c2b,	// (0x00013d12) form_midp_gauge_slider_pane

0x8c34,	// (0x00013d1b) form_midp_gauge_wait_pane

0x5cca,	// (0x00010db1) form_midp_image_pane

0x1be1,	// (0x0000ccc8) list_single_midp_pane_ParamLimits

0x1be1,	// (0x0000ccc8) list_single_midp_pane

0x1bbd,	// (0x0000cca4) form_midp_field_text_pane_t1

0x8920,	// (0x00013a07) input_focus_pane_cp050

0x8b94,	// (0x00013c7b) list_midp_form_text_pane

0x8b24,	// (0x00013c0b) form_midp_field_choice_group_pane_t1

0x8b32,	// (0x00013c19) input_focus_pane_cp051

0x8b46,	// (0x00013c2d) list_midp_choice_pane

0x5cca,	// (0x00010db1) status_idle_pane

0x8b08,	// (0x00013bef) form_midp_field_time_pane_t1

0x5cc0,	// (0x00010da7) wait_anim_pane_g2_copy1

0x8b16,	// (0x00013bfd) form_midp_field_time_pane_t2

0x0001,

0x7af6,	// (0x00012bdd) aid_navinavi_width_2_pane

0xf82c,	// (0x0001a913) form_midp_field_time_pane_t

0x5cca,	// (0x00010db1) input_focus_pane_cp052

0x5cca,	// (0x00010db1) bg_input_focus_pane_cp040

0x8ac8,	// (0x00013baf) form_midp_gauge_slider_pane_t1

0x8ad6,	// (0x00013bbd) form_midp_gauge_slider_pane_t2

0x1ba1,	// (0x0000cc88) form_midp_gauge_slider_pane_t3

0x1baf,	// (0x0000cc96) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0001a90a) form_midp_gauge_slider_pane_t

0x8b00,	// (0x00013be7) form_midp_slider_pane

0x5daa,	// (0x00010e91) bg_input_focus_pane_cp041_ParamLimits

0x5daa,	// (0x00010e91) bg_input_focus_pane_cp041

0x8a95,	// (0x00013b7c) form_midp_gauge_wait_pane_t1_ParamLimits

0x8a95,	// (0x00013b7c) form_midp_gauge_wait_pane_t1

0x8aa7,	// (0x00013b8e) form_midp_gauge_wait_pane_t2_ParamLimits

0x8aa7,	// (0x00013b8e) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x0001a905) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x0001a905) form_midp_gauge_wait_pane_t

0x8ab9,	// (0x00013ba0) form_midp_wait_pane_ParamLimits

0x8ab9,	// (0x00013ba0) form_midp_wait_pane

0x8a5f,	// (0x00013b46) form_midp_image_pane_g1

0x8a68,	// (0x00013b4f) form_midp_image_pane_t1

0x8a77,	// (0x00013b5e) form_midp_image_pane_t2

0x8a86,	// (0x00013b6d) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x0001a8fe) form_midp_image_pane_t

0x8a47,	// (0x00013b2e) list_single_midp_pane_g1

0x8a50,	// (0x00013b37) list_single_midp_pane_t1

0x1b8a,	// (0x0000cc71) list_midp_form_item_pane_ParamLimits

0x1b8a,	// (0x0000cc71) list_midp_form_item_pane

0x7a9e,	// (0x00012b85) list_midp_form_item_pane_t1

0x7aad,	// (0x00012b94) midp_ticker_pane_g1

0x7ab9,	// (0x00012ba0) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0001a852) midp_ticker_pane_g

0x0e86,	// (0x0000bf6d) midp_ticker_pane_t1

0x20c9,	// (0x0000d1b0) midp_editing_number_pane_t1

0x9ea4,	// (0x00014f8b) midp_editing_number_pane

0x9eb3,	// (0x00014f9a) midp_ticker_pane

0x9c18,	// (0x00014cff) ai_message_heading_pane

0x5cca,	// (0x00010db1) bg_popup_window_pane_cp14

0x9c20,	// (0x00014d07) listscroll_ai_message_pane

0x9ba2,	// (0x00014c89) ai_message_heading_pane_g1_ParamLimits

0x9ba2,	// (0x00014c89) ai_message_heading_pane_g1

0x9bae,	// (0x00014c95) ai_message_heading_pane_g2_ParamLimits

0x9bae,	// (0x00014c95) ai_message_heading_pane_g2

0x9bba,	// (0x00014ca1) ai_message_heading_pane_g3_ParamLimits

0x9bba,	// (0x00014ca1) ai_message_heading_pane_g3

0x9bc6,	// (0x00014cad) ai_message_heading_pane_g4_ParamLimits

0x9bc6,	// (0x00014cad) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0001aa3f) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0001aa3f) ai_message_heading_pane_g

0x9bd2,	// (0x00014cb9) ai_message_heading_pane_t1_ParamLimits

0x9bd2,	// (0x00014cb9) ai_message_heading_pane_t1

0x9bec,	// (0x00014cd3) ai_message_heading_pane_t2_ParamLimits

0x9bec,	// (0x00014cd3) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x0001aa48) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x0001aa48) ai_message_heading_pane_t

0x9bfe,	// (0x00014ce5) bg_popup_heading_pane_cp1_ParamLimits

0x9bfe,	// (0x00014ce5) bg_popup_heading_pane_cp1

0x9b90,	// (0x00014c77) list_ai_message_pane_ParamLimits

0x9b90,	// (0x00014c77) list_ai_message_pane

0x6e76,	// (0x00011f5d) scroll_pane_cp10

0x9b2c,	// (0x00014c13) list_ai_message_pane_g1

0x9b34,	// (0x00014c1b) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x0001aa1c) list_ai_message_pane_g

0x9b3c,	// (0x00014c23) list_ai_message_pane_t1_ParamLimits

0x9b3c,	// (0x00014c23) list_ai_message_pane_t1

0x9b51,	// (0x00014c38) list_ai_message_pane_t2_ParamLimits

0x9b51,	// (0x00014c38) list_ai_message_pane_t2

0x9b66,	// (0x00014c4d) list_ai_message_pane_t3_ParamLimits

0x9b66,	// (0x00014c4d) list_ai_message_pane_t3

0x9b7b,	// (0x00014c62) list_ai_message_pane_t4_ParamLimits

0x9b7b,	// (0x00014c62) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0001aa21) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0001aa21) list_ai_message_pane_t

0x1ef7,	// (0x0000cfde) cell_ai_soft_ind_pane_ParamLimits

0x1ef7,	// (0x0000cfde) cell_ai_soft_ind_pane

0x7ad7,	// (0x00012bbe) cell_ai_soft_ind_pane_g1_ParamLimits

0x7ad7,	// (0x00012bbe) cell_ai_soft_ind_pane_g1

0x5cca,	// (0x00010db1) grid_highlight_cp1

0x7ae4,	// (0x00012bcb) text_secondary_cp56_ParamLimits

0x7ae4,	// (0x00012bcb) text_secondary_cp56

0x9aeb,	// (0x00014bd2) example_general_pane_ParamLimits

0x9aeb,	// (0x00014bd2) example_general_pane

0x9af7,	// (0x00014bde) example_parent_pane_g1_ParamLimits

0x9af7,	// (0x00014bde) example_parent_pane_g1

0x9b03,	// (0x00014bea) example_parent_pane_t1_ParamLimits

0x9b03,	// (0x00014bea) example_parent_pane_t1

0x13eb,	// (0x0000c4d2) popup_preview_text_window_ParamLimits

0x13eb,	// (0x0000c4d2) popup_preview_text_window

0x78fd,	// (0x000129e4) list_single_pane_cp2_g4

0x60e9,	// (0x000111d0) bg_popup_preview_window_pane_ParamLimits

0x60e9,	// (0x000111d0) bg_popup_preview_window_pane

0x9822,	// (0x00014909) popup_preview_text_window_t1_ParamLimits

0x9822,	// (0x00014909) popup_preview_text_window_t1

0x9840,	// (0x00014927) popup_preview_text_window_t2_ParamLimits

0x9840,	// (0x00014927) popup_preview_text_window_t2

0x9889,	// (0x00014970) popup_preview_text_window_t3_ParamLimits

0x9889,	// (0x00014970) popup_preview_text_window_t3

0x98ce,	// (0x000149b5) popup_preview_text_window_t4_ParamLimits

0x98ce,	// (0x000149b5) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x0001a9f0) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x0001a9f0) popup_preview_text_window_t

0x994c,	// (0x00014a33) scroll_pane_cp11

0x8806,	// (0x000138ed) bg_popup_preview_window_pane_g1

0x97e2,	// (0x000148c9) bg_popup_preview_window_pane_g2

0x97ea,	// (0x000148d1) bg_popup_preview_window_pane_g3

0x97f2,	// (0x000148d9) bg_popup_preview_window_pane_g4

0x97fa,	// (0x000148e1) bg_popup_preview_window_pane_g5

0x9802,	// (0x000148e9) bg_popup_preview_window_pane_g6

0x980a,	// (0x000148f1) bg_popup_preview_window_pane_g7

0x9812,	// (0x000148f9) bg_popup_preview_window_pane_g8

0x4050,	// (0x0000f137) aid_popup_width_pane

0x1367,	// (0x0000c44e) popup_midp_note_alarm_window_ParamLimits

0x1367,	// (0x0000c44e) popup_midp_note_alarm_window

0x6b53,	// (0x00011c3a) data_form_pane_ParamLimits

0x0a17,	// (0x0000bafe) form_field_data_pane_g1

0x0a21,	// (0x0000bb08) form_field_data_pane_t1_ParamLimits

0x6b83,	// (0x00011c6a) input_focus_pane_ParamLimits

0x6b91,	// (0x00011c78) data_form_wide_pane_ParamLimits

0x6b9d,	// (0x00011c84) form_field_data_wide_pane_g1

0x6bc9,	// (0x00011cb0) form_field_data_wide_pane_t1_ParamLimits

0x6388,	// (0x0001146f) input_focus_pane_cp6_ParamLimits

0x0b83,	// (0x0000bc6a) input_popup_find_pane_g1_ParamLimits

0x0b83,	// (0x0000bc6a) input_popup_find_pane_g1

0x45ac,	// (0x0000f693) aid_navi_side_left_pane

0x45c1,	// (0x0000f6a8) aid_navi_side_right_pane

0x9201,	// (0x000142e8) bg_popup_window_pane_cp30_ParamLimits

0x9201,	// (0x000142e8) bg_popup_window_pane_cp30

0x927b,	// (0x00014362) popup_midp_note_alarm_window_g1_ParamLimits

0x927b,	// (0x00014362) popup_midp_note_alarm_window_g1

0x92ab,	// (0x00014392) popup_midp_note_alarm_window_t1_ParamLimits

0x92ab,	// (0x00014392) popup_midp_note_alarm_window_t1

0x934c,	// (0x00014433) popup_midp_note_alarm_window_t2_ParamLimits

0x934c,	// (0x00014433) popup_midp_note_alarm_window_t2

0x93fa,	// (0x000144e1) popup_midp_note_alarm_window_t3_ParamLimits

0x93fa,	// (0x000144e1) popup_midp_note_alarm_window_t3

0x9422,	// (0x00014509) popup_midp_note_alarm_window_t4_ParamLimits

0x9422,	// (0x00014509) popup_midp_note_alarm_window_t4

0x9442,	// (0x00014529) popup_midp_note_alarm_window_t5_ParamLimits

0x9442,	// (0x00014529) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x0001a98d) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x0001a98d) popup_midp_note_alarm_window_t

0x94ee,	// (0x000145d5) wait_bar_pane_cp1_ParamLimits

0x94ee,	// (0x000145d5) wait_bar_pane_cp1

0x5cca,	// (0x00010db1) wait_anim_pane_copy1

0x5cca,	// (0x00010db1) wait_border_pane_copy1

0x8edf,	// (0x00013fc6) wait_border_pane_g1_copy1

0x6be3,	// (0x00011cca) form_field_popup_pane_g1

0x0a3b,	// (0x0000bb22) form_field_popup_pane_t1_ParamLimits

0x6b83,	// (0x00011c6a) input_focus_pane_cp7_ParamLimits

0x6c05,	// (0x00011cec) list_form_pane_ParamLimits

0x6c11,	// (0x00011cf8) form_field_popup_wide_pane_g1

0x6c19,	// (0x00011d00) form_field_popup_wide_pane_t1_ParamLimits

0x6b83,	// (0x00011c6a) input_focus_pane_cp8_ParamLimits

0x6c2e,	// (0x00011d15) list_form_wide_pane_ParamLimits

0xa0dc,	// (0x000151c3) aid_size_cell_graphic_pane

0x0aba,	// (0x0000bba1) data_form_pane_t1_ParamLimits

0x20ad,	// (0x0000d194) data_form_wide_pane_t1_ParamLimits

0x17a0,	// (0x0000c887) bg_status_flat_pane

0x033c,	// (0x0000b423) title_pane_t1_ParamLimits

0x5d72,	// (0x00010e59) title_pane_t2_ParamLimits

0x5d98,	// (0x00010e7f) title_pane_t3_ParamLimits

0xf573,	// (0x0001a65a) title_pane_t_ParamLimits

0x72f6,	// (0x000123dd) level_1_signal_ParamLimits

0x7303,	// (0x000123ea) level_2_signal_ParamLimits

0x7310,	// (0x000123f7) level_3_signal_ParamLimits

0x731d,	// (0x00012404) level_4_signal_ParamLimits

0x732a,	// (0x00012411) level_5_signal_ParamLimits

0x7337,	// (0x0001241e) level_6_signal_ParamLimits

0x7344,	// (0x0001242b) level_7_signal_ParamLimits

0x72f6,	// (0x000123dd) level_1_battery_ParamLimits

0x7303,	// (0x000123ea) level_2_battery_ParamLimits

0x7310,	// (0x000123f7) level_3_battery_ParamLimits

0x731d,	// (0x00012404) level_4_battery_ParamLimits

0x732a,	// (0x00012411) level_5_battery_ParamLimits

0x7337,	// (0x0001241e) level_6_battery_ParamLimits

0x7344,	// (0x0001242b) level_7_battery_ParamLimits

0x9106,	// (0x000141ed) bg_status_flat_pane_g1

0x910e,	// (0x000141f5) bg_status_flat_pane_g2

0x9116,	// (0x000141fd) bg_status_flat_pane_g3

0x911e,	// (0x00014205) bg_status_flat_pane_g4

0x9126,	// (0x0001420d) bg_status_flat_pane_g5

0x912e,	// (0x00014215) bg_status_flat_pane_g6

0x9136,	// (0x0001421d) bg_status_flat_pane_g7

0x03d0,	// (0x0000b4b7) tabs_3_active_pane_t1_ParamLimits

0x03d0,	// (0x0000b4b7) tabs_3_passive_pane_t1_ParamLimits

0x03ea,	// (0x0000b4d1) tabs_4_active_pane_t1_ParamLimits

0x03ea,	// (0x0000b4d1) tabs_4_1_passive_pane_t1_ParamLimits

0x0b99,	// (0x0000bc80) tabs_2_active_pane_t1_ParamLimits

0x0b99,	// (0x0000bc80) tabs_2_passive_pane_t1_ParamLimits

0x5daa,	// (0x00010e91) bg_active_tab_pane_cp4_ParamLimits

0x0bab,	// (0x0000bc92) tabs_2_long_active_pane_t1_ParamLimits

0x7d54,	// (0x00012e3b) bg_passive_tab_pane_cp4_ParamLimits

0x4b83,	// (0x0000fc6a) list_single_midp_graphic_pane_t1_ParamLimits

0x5daa,	// (0x00010e91) bg_active_tab_pane_cp5_ParamLimits

0x0bbe,	// (0x0000bca5) tabs_3_long_active_pane_t1_ParamLimits

0x7d54,	// (0x00012e3b) bg_passive_tab_pane_cp5_ParamLimits

0x4b83,	// (0x0000fc6a) list_single_midp_graphic_pane_t1

0x17a0,	// (0x0000c887) bg_status_flat_pane_ParamLimits

0x847d,	// (0x00013564) indicator_pane_cp2_ParamLimits

0x847d,	// (0x00013564) indicator_pane_cp2

0x1917,	// (0x0000c9fe) navi_pane_srt_ParamLimits

0x1917,	// (0x0000c9fe) navi_pane_srt

0x85c5,	// (0x000136ac) popup_clock_digital_analogue_window_cp1

0x5ea1,	// (0x00010f88) indicator_pane_t1

0x79ce,	// (0x00012ab5) copy_highlight_pane

0x79ce,	// (0x00012ab5) cursor_graphics_pane

0x79ce,	// (0x00012ab5) graphic_within_text_pane

0x79ce,	// (0x00012ab5) link_highlight_pane

0x990f,	// (0x000149f6) popup_preview_text_window_t5_ParamLimits

0x990f,	// (0x000149f6) popup_preview_text_window_t5

0x7afe,	// (0x00012be5) cursor_digital_pane

0x7afe,	// (0x00012be5) cursor_primary_pane

0x7b0f,	// (0x00012bf6) cursor_primary_small_pane

0x7b17,	// (0x00012bfe) cursor_secondary_pane

0x7b1f,	// (0x00012c06) cursor_title_pane

0x7afe,	// (0x00012be5) link_highlight_digital_pane

0x7b06,	// (0x00012bed) link_highlight_primary_pane

0x7b0f,	// (0x00012bf6) link_highlight_primary_small_pane

0x7b17,	// (0x00012bfe) link_highlight_secondary_pane

0x7b1f,	// (0x00012c06) link_highlight_title_pane

0x7afe,	// (0x00012be5) copy_highlight_digital_pane

0x7afe,	// (0x00012be5) copy_highlight_primary_pane

0x7b0f,	// (0x00012bf6) copy_highlight_primary_small_pane

0x7b17,	// (0x00012bfe) copy_highlight_secondary_pane

0x7b1f,	// (0x00012c06) copy_highlight_title_pane

0x7b17,	// (0x00012bfe) graphic_text_digital_pane

0x91a4,	// (0x0001428b) graphic_text_primary_pane

0x91ad,	// (0x00014294) graphic_text_primary_small_pane

0x7b0f,	// (0x00012bf6) graphic_text_secondary_pane

0x7afe,	// (0x00012be5) graphic_text_title_pane

0x0e98,	// (0x0000bf7f) cursor_primary_pane_g1

0x9196,	// (0x0001427d) cursor_text_primary_t1

0x1c3d,	// (0x0000cd24) cursor_primary_small_pane_g1

0x9188,	// (0x0001426f) cursor_text_primary_small_t1

0x1c33,	// (0x0000cd1a) cursor_primary_small_pane_g1_copy1

0x9170,	// (0x00014257) cursor_text_primary_small_t1_copy1

0x914e,	// (0x00014235) cursor_text_title_t1

0x1c29,	// (0x0000cd10) cursor_title_pane_g1

0x0e98,	// (0x0000bf7f) cursor_digital_pane_g1

0x7b31,	// (0x00012c18) cursor_text_digital_t1

0x90ef,	// (0x000141d6) link_highlight_primary_pane_g1

0x90f7,	// (0x000141de) link_highlight_primary_pane_t1

0x7b3f,	// (0x00012c26) link_highlight_primary_small_pane_g1

0x7b47,	// (0x00012c2e) link_highlight_primary_small_pane_t1

0x7b3f,	// (0x00012c26) link_highlight_secondary_pane_g1

0x7b56,	// (0x00012c3d) link_highlight_secondary_pane_t1

0x9063,	// (0x0001414a) link_highlight_title_pane_g1

0x906b,	// (0x00014152) link_highlight_title_pane_t1

0x904c,	// (0x00014133) link_highlight_digital_pane_g1

0x9054,	// (0x0001413b) link_highlight_digital_pane_t1

0x8f24,	// (0x0001400b) copy_highlight_primary_pane_g1

0x8f2c,	// (0x00014013) copy_highlight_primary_pane_t1

0x8efe,	// (0x00013fe5) copy_highlight_primary_small_pane_g1

0x8f15,	// (0x00013ffc) copy_highlight_primary_small_pane_t1

0x7b65,	// (0x00012c4c) copy_highlight_secondary_pane_g1

0x7b6d,	// (0x00012c54) copy_highlight_secondary_pane_t1

0x8efe,	// (0x00013fe5) copy_highlight_title_pane_g1

0x8f06,	// (0x00013fed) copy_highlight_title_pane_t1

0x8f24,	// (0x0001400b) copy_highlight_digital_pane_g1

0xa2aa,	// (0x00015391) copy_highlight_digital_pane_t1

0xa1fe,	// (0x000152e5) graphic_text_primary_pane_g1

0xa28e,	// (0x00015375) graphic_text_primary_pane_t1

0xa29c,	// (0x00015383) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x0001aabc) graphic_text_primary_pane_t

0xa26a,	// (0x00015351) graphic_text_primary_small_pane_g1

0xa272,	// (0x00015359) graphic_text_primary_small_pane_t1

0xa280,	// (0x00015367) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x0001aab7) graphic_text_primary_small_pane_t

0xa246,	// (0x0001532d) graphic_text_secondary_pane_g1

0xa24e,	// (0x00015335) graphic_text_secondary_pane_t1

0xa25c,	// (0x00015343) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x0001aab2) graphic_text_secondary_pane_t

0xa222,	// (0x00015309) graphic_text_title_pane_g1

0xa22a,	// (0x00015311) graphic_text_title_pane_t1

0xa238,	// (0x0001531f) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x0001aaad) graphic_text_title_pane_t

0xa1fe,	// (0x000152e5) graphic_text_digital_pane_g1

0xa206,	// (0x000152ed) graphic_text_digital_pane_t1

0xa214,	// (0x000152fb) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x0001aaa8) graphic_text_digital_pane_t

0x5daa,	// (0x00010e91) navi_icon_pane_srt_ParamLimits

0x5daa,	// (0x00010e91) navi_icon_pane_srt

0x5cca,	// (0x00010db1) navi_midp_pane_srt

0x5cca,	// (0x00010db1) navi_navi_pane_srt

0x5daa,	// (0x00010e91) navi_text_pane_srt_ParamLimits

0x5daa,	// (0x00010e91) navi_text_pane_srt

0xa1c9,	// (0x000152b0) navi_navi_icon_text_pane_srt

0xa1d1,	// (0x000152b8) navi_navi_pane_srt_g1_ParamLimits

0xa1d1,	// (0x000152b8) navi_navi_pane_srt_g1

0xa1e3,	// (0x000152ca) navi_navi_pane_srt_g2_ParamLimits

0xa1e3,	// (0x000152ca) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0001aaa3) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0001aaa3) navi_navi_pane_srt_g

0xa1f5,	// (0x000152dc) navi_navi_tabs_pane_srt

0xa1c9,	// (0x000152b0) navi_navi_text_pane_srt

0xa1c9,	// (0x000152b0) navi_navi_volume_pane_srt

0xa1ba,	// (0x000152a1) navi_navi_text_pane_srt_t1

0x4f03,	// (0x0000ffea) navi_navi_volume_pane_srt_g1

0x4f0b,	// (0x0000fff2) volume_small_pane_srt_ParamLimits

0x4f0b,	// (0x0000fff2) volume_small_pane_srt

0x488c,	// (0x0000f973) volume_small_pane_srt_g1_ParamLimits

0x488c,	// (0x0000f973) volume_small_pane_srt_g1

0x489c,	// (0x0000f983) volume_small_pane_srt_g2_ParamLimits

0x489c,	// (0x0000f983) volume_small_pane_srt_g2

0x48ad,	// (0x0000f994) volume_small_pane_srt_g3_ParamLimits

0x48ad,	// (0x0000f994) volume_small_pane_srt_g3

0x48be,	// (0x0000f9a5) volume_small_pane_srt_g4_ParamLimits

0x48be,	// (0x0000f9a5) volume_small_pane_srt_g4

0x48cf,	// (0x0000f9b6) volume_small_pane_srt_g5_ParamLimits

0x48cf,	// (0x0000f9b6) volume_small_pane_srt_g5

0x48e0,	// (0x0000f9c7) volume_small_pane_srt_g6_ParamLimits

0x48e0,	// (0x0000f9c7) volume_small_pane_srt_g6

0x48f1,	// (0x0000f9d8) volume_small_pane_srt_g7_ParamLimits

0x48f1,	// (0x0000f9d8) volume_small_pane_srt_g7

0x4902,	// (0x0000f9e9) volume_small_pane_srt_g8_ParamLimits

0x4902,	// (0x0000f9e9) volume_small_pane_srt_g8

0x4913,	// (0x0000f9fa) volume_small_pane_srt_g9_ParamLimits

0x4913,	// (0x0000f9fa) volume_small_pane_srt_g9

0x4924,	// (0x0000fa0b) volume_small_pane_srt_g10_ParamLimits

0x4924,	// (0x0000fa0b) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0001a857) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0001a857) volume_small_pane_srt_g

0x6192,	// (0x00011279) query_popup_data_pane_cp2

0xa1a0,	// (0x00015287) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa1a0,	// (0x00015287) navi_navi_icon_text_pane_srt_t1

0x91a4,	// (0x0001428b) navi_tabs_2_long_pane_srt

0x91a4,	// (0x0001428b) navi_tabs_2_pane_srt

0x91a4,	// (0x0001428b) navi_tabs_3_long_pane_srt

0x91a4,	// (0x0001428b) navi_tabs_3_pane_srt

0x91a4,	// (0x0001428b) navi_tabs_4_pane_srt

0x4ee3,	// (0x0000ffca) tabs_2_active_pane_srt_ParamLimits

0x4ee3,	// (0x0000ffca) tabs_2_active_pane_srt

0x4ef3,	// (0x0000ffda) tabs_2_passive_pane_srt_ParamLimits

0x4ef3,	// (0x0000ffda) tabs_2_passive_pane_srt

0x8920,	// (0x00013a07) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8920,	// (0x00013a07) bg_passive_tab_pane_cp1_srt

0xa16c,	// (0x00015253) bg_passive_tab_pane_g1_cp1_srt

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp1_srt

0xa175,	// (0x0001525c) bg_passive_tab_pane_g3_cp1_srt

0x603f,	// (0x00011126) bg_active_tab_pane_cp1_srt_ParamLimits

0x603f,	// (0x00011126) bg_active_tab_pane_cp1_srt

0xa17e,	// (0x00015265) tabs_2_active_pane_srt_g1

0x21e5,	// (0x0000d2cc) tabs_2_active_pane_srt_t1_ParamLimits

0x21e5,	// (0x0000d2cc) tabs_2_active_pane_srt_t1

0xa16c,	// (0x00015253) bg_active_tab_pane_g1_cp1_srt

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp1_srt

0xa175,	// (0x0001525c) bg_active_tab_pane_g3_cp1_srt

0x4eb0,	// (0x0000ff97) tabs_3_active_pane_srt_ParamLimits

0x4eb0,	// (0x0000ff97) tabs_3_active_pane_srt

0x4ec1,	// (0x0000ffa8) tabs_3_passive_pane_cp_srt_ParamLimits

0x4ec1,	// (0x0000ffa8) tabs_3_passive_pane_cp_srt

0x4ed2,	// (0x0000ffb9) tabs_3_passive_pane_srt_ParamLimits

0x4ed2,	// (0x0000ffb9) tabs_3_passive_pane_srt

0x8920,	// (0x00013a07) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8920,	// (0x00013a07) bg_passive_tab_pane_cp2_srt

0x7b7c,	// (0x00012c63) bg_passive_tab_pane_g1_cp2_srt

0x7616,	// (0x000126fd) bg_passive_tab_pane_g2_cp2_srt

0x7b85,	// (0x00012c6c) bg_passive_tab_pane_g3_cp2_srt

0x603f,	// (0x00011126) bg_active_tab_pane_cp2_srt_ParamLimits

0x603f,	// (0x00011126) bg_active_tab_pane_cp2_srt

0xa152,	// (0x00015239) tabs_3_active_pane_srt_g1

0x21cf,	// (0x0000d2b6) tabs_3_active_pane_srt_t1_ParamLimits

0x21cf,	// (0x0000d2b6) tabs_3_active_pane_srt_t1

0x7b7c,	// (0x00012c63) bg_active_tab_pane_g1_cp2_srt

0x7616,	// (0x000126fd) bg_active_tab_pane_g2_cp2_srt

0x7b85,	// (0x00012c6c) bg_active_tab_pane_g3_cp2_srt

0x4e68,	// (0x0000ff4f) tabs_4_active_pane_srt_ParamLimits

0x4e68,	// (0x0000ff4f) tabs_4_active_pane_srt

0x4e7a,	// (0x0000ff61) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4e7a,	// (0x0000ff61) tabs_4_passive_pane_cp2_srt

0x7cda,	// (0x00012dc1) aid_size_cell_toolbar

0x9cf2,	// (0x00014dd9) main_idle_act_pane_ParamLimits

0x7ef3,	// (0x00012fda) popup_large_graphic_colour_window_ParamLimits

0x166b,	// (0x0000c752) popup_toolbar_window_ParamLimits

0x166b,	// (0x0000c752) popup_toolbar_window

0x9ef4,	// (0x00014fdb) list_single_graphic_2heading_pane_ParamLimits

0x9ef4,	// (0x00014fdb) list_single_graphic_2heading_pane

0x70a5,	// (0x0001218c) aid_size_cell_apps_grid_lsc_pane

0x70b7,	// (0x0001219e) aid_size_cell_apps_grid_prt_pane

0x7d54,	// (0x00012e3b) bg_wml_button_pane_cp1_ParamLimits

0x7d54,	// (0x00012e3b) bg_wml_button_pane_cp1

0x1bbd,	// (0x0000cca4) form_midp_field_text_pane_t1_ParamLimits

0x8920,	// (0x00013a07) input_focus_pane_cp050_ParamLimits

0x8b94,	// (0x00013c7b) list_midp_form_text_pane_ParamLimits

0x8b32,	// (0x00013c19) input_focus_pane_cp051_ParamLimits

0x8b46,	// (0x00013c2d) list_midp_choice_pane_ParamLimits

0x1b52,	// (0x0000cc39) list_single_2graphic_pane_cp3_ParamLimits

0x1b52,	// (0x0000cc39) list_single_2graphic_pane_cp3

0x1b68,	// (0x0000cc4f) list_single_midp_graphic_pane_ParamLimits

0x1b68,	// (0x0000cc4f) list_single_midp_graphic_pane

0x4a88,	// (0x0000fb6f) list_single_graphic_2heading_pane_g1_ParamLimits

0x4a88,	// (0x0000fb6f) list_single_graphic_2heading_pane_g1

0x4a94,	// (0x0000fb7b) list_single_graphic_2heading_pane_g4_ParamLimits

0x4a94,	// (0x0000fb7b) list_single_graphic_2heading_pane_g4

0x4aa0,	// (0x0000fb87) list_single_graphic_2heading_pane_g5_ParamLimits

0x4aa0,	// (0x0000fb87) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0001a8aa) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0001a8aa) list_single_graphic_2heading_pane_g

0x4aac,	// (0x0000fb93) list_single_graphic_2heading_pane_t1_ParamLimits

0x4aac,	// (0x0000fb93) list_single_graphic_2heading_pane_t1

0x4ac0,	// (0x0000fba7) list_single_graphic_2heading_pane_t2_ParamLimits

0x4ac0,	// (0x0000fba7) list_single_graphic_2heading_pane_t2

0x4adc,	// (0x0000fbc3) list_single_graphic_2heading_pane_t3_ParamLimits

0x4adc,	// (0x0000fbc3) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0001a8b1) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0001a8b1) list_single_graphic_2heading_pane_t

0x8722,	// (0x00013809) bg_popup_sub_pane_cp2

0x874c,	// (0x00013833) grid_toobar_pane

0x4af4,	// (0x0000fbdb) cell_toolbar_pane_ParamLimits

0x4af4,	// (0x0000fbdb) cell_toolbar_pane

0x87aa,	// (0x00013891) cell_toolbar_pane_g1_ParamLimits

0x87aa,	// (0x00013891) cell_toolbar_pane_g1

0x87be,	// (0x000138a5) cell_toolbar_pane_g2_ParamLimits

0x87be,	// (0x000138a5) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x0001a8bf) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x0001a8bf) cell_toolbar_pane_g

0x87e0,	// (0x000138c7) grid_highlight_pane_cp2_ParamLimits

0x87e0,	// (0x000138c7) grid_highlight_pane_cp2

0x87fa,	// (0x000138e1) toolbar_button_pane

0x8806,	// (0x000138ed) toolbar_button_pane_g1

0x880e,	// (0x000138f5) toolbar_button_pane_g2

0x8816,	// (0x000138fd) toolbar_button_pane_g3

0x881e,	// (0x00013905) toolbar_button_pane_g4

0x8826,	// (0x0001390d) toolbar_button_pane_g5

0x882e,	// (0x00013915) toolbar_button_pane_g6

0x8836,	// (0x0001391d) toolbar_button_pane_g7

0x883e,	// (0x00013925) toolbar_button_pane_g8

0x8846,	// (0x0001392d) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x0001a8c4) toolbar_button_pane_g

0x4b2c,	// (0x0000fc13) list_single_2graphic_pane_g1_cp3_ParamLimits

0x4b2c,	// (0x0000fc13) list_single_2graphic_pane_g1_cp3

0xe11f,	// (0x00019206) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe11f,	// (0x00019206) list_single_2graphic_pane_g2_cp3

0x4b49,	// (0x0000fc30) list_single_2graphic_pane_g3_cp3

0x4b51,	// (0x0000fc38) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4b51,	// (0x0000fc38) list_single_2graphic_pane_g4_cp3

0x4b5d,	// (0x0000fc44) list_single_2graphic_pane_t1_cp3_ParamLimits

0x4b5d,	// (0x0000fc44) list_single_2graphic_pane_t1_cp3

0x4b77,	// (0x0000fc5e) list_single_midp_graphic_pane_g2_ParamLimits

0x4b77,	// (0x0000fc5e) list_single_midp_graphic_pane_g2

0x7ce2,	// (0x00012dc9) aid_zoom_text_primary

0x7cea,	// (0x00012dd1) aid_zoom_text_secondary

0x7c39,	// (0x00012d20) status_small_pane_g7_ParamLimits

0x7c39,	// (0x00012d20) status_small_pane_g7

0x7c5c,	// (0x00012d43) status_small_pane_t1_ParamLimits

0x0318,	// (0x0000b3ff) title_pane_g2

0x0003,

0xf56a,	// (0x0001a651) title_pane_g

0x05a3,	// (0x0000b68a) aid_size_cell_colour_1_pane_ParamLimits

0x05a3,	// (0x0000b68a) aid_size_cell_colour_1_pane

0x05b7,	// (0x0000b69e) aid_size_cell_colour_2_pane_ParamLimits

0x05b7,	// (0x0000b69e) aid_size_cell_colour_2_pane

0x05cb,	// (0x0000b6b2) aid_size_cell_colour_3_pane_ParamLimits

0x05cb,	// (0x0000b6b2) aid_size_cell_colour_3_pane

0x05df,	// (0x0000b6c6) aid_size_cell_colour_4_pane_ParamLimits

0x05df,	// (0x0000b6c6) aid_size_cell_colour_4_pane

0x44e8,	// (0x0000f5cf) title_pane_stacon_g1_ParamLimits

0x44e8,	// (0x0000f5cf) title_pane_stacon_g1

0x8f83,	// (0x0001406a) popup_note_wait_window_g3_ParamLimits

0x8f83,	// (0x0001406a) popup_note_wait_window_g3

0x8ff9,	// (0x000140e0) popup_note_wait_window_t5_ParamLimits

0x8ff9,	// (0x000140e0) popup_note_wait_window_t5

0x5cca,	// (0x00010db1) main_feb_china_hwr_fs_writing_pane

0x1093,	// (0x0000c17a) popup_feb_china_hwr_fs_window_ParamLimits

0x1093,	// (0x0000c17a) popup_feb_china_hwr_fs_window

0xe130,	// (0x00019217) aid_size_cell_hwr_fs_ParamLimits

0xe130,	// (0x00019217) aid_size_cell_hwr_fs

0x8920,	// (0x00013a07) bg_popup_sub_pane_cp3_ParamLimits

0x8920,	// (0x00013a07) bg_popup_sub_pane_cp3

0xe145,	// (0x0001922c) grid_hwr_fs_pane_ParamLimits

0xe145,	// (0x0001922c) grid_hwr_fs_pane

0x4bc6,	// (0x0000fcad) linegrid_hwr_fs_pane_ParamLimits

0x4bc6,	// (0x0000fcad) linegrid_hwr_fs_pane

0xe15d,	// (0x00019244) cell_hwr_fs_pane_ParamLimits

0xe15d,	// (0x00019244) cell_hwr_fs_pane

0x892c,	// (0x00013a13) linegrid_hwr_fs_pane_g1_ParamLimits

0x892c,	// (0x00013a13) linegrid_hwr_fs_pane_g1

0x1b18,	// (0x0000cbff) linegrid_hwr_fs_pane_g2_ParamLimits

0x1b18,	// (0x0000cbff) linegrid_hwr_fs_pane_g2

0x894a,	// (0x00013a31) linegrid_hwr_fs_pane_g3_ParamLimits

0x894a,	// (0x00013a31) linegrid_hwr_fs_pane_g3

0x4bf8,	// (0x0000fcdf) linegrid_hwr_fs_pane_g4_ParamLimits

0x4bf8,	// (0x0000fcdf) linegrid_hwr_fs_pane_g4

0x4c12,	// (0x0000fcf9) linegrid_hwr_fs_pane_g5_ParamLimits

0x4c12,	// (0x0000fcf9) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0001a8ea) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0001a8ea) linegrid_hwr_fs_pane_g

0x8956,	// (0x00013a3d) cell_hwr_fs_pane_g1_ParamLimits

0x8956,	// (0x00013a3d) cell_hwr_fs_pane_g1

0x865b,	// (0x00013742) cell_hwr_fs_pane_g2_ParamLimits

0x865b,	// (0x00013742) cell_hwr_fs_pane_g2

0x1b2a,	// (0x0000cc11) cell_hwr_fs_pane_g3_ParamLimits

0x1b2a,	// (0x0000cc11) cell_hwr_fs_pane_g3

0x1b37,	// (0x0000cc1e) cell_hwr_fs_pane_g4_ParamLimits

0x1b37,	// (0x0000cc1e) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x0001a8f5) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x0001a8f5) cell_hwr_fs_pane_g

0xe183,	// (0x0001926a) cell_hwr_fs_pane_t1

0x5cca,	// (0x00010db1) grid_highlight_pane_cp6

0x5cca,	// (0x00010db1) main_idle_act2_pane

0x6e5d,	// (0x00011f44) aid_inside_area_popup_secondary

0x1d99,	// (0x0000ce80) aid_inside_area_window_primary_ParamLimits

0x1d99,	// (0x0000ce80) aid_inside_area_window_primary

0xa2b9,	// (0x000153a0) ai2_news_ticker_pane

0xa2c1,	// (0x000153a8) aid_size_cell_ai1_link_ParamLimits

0xa2c1,	// (0x000153a8) aid_size_cell_ai1_link

0xa2db,	// (0x000153c2) popup_ai2_data_window_ParamLimits

0xa2db,	// (0x000153c2) popup_ai2_data_window

0xa2ef,	// (0x000153d6) popup_ai2_link_window_ParamLimits

0xa2ef,	// (0x000153d6) popup_ai2_link_window

0x8920,	// (0x00013a07) bg_popup_sub_pane_cp4_ParamLimits

0x8920,	// (0x00013a07) bg_popup_sub_pane_cp4

0xa303,	// (0x000153ea) grid_ai2_link_pane_ParamLimits

0xa303,	// (0x000153ea) grid_ai2_link_pane

0xa31a,	// (0x00015401) popup_ai2_link_window_g1_ParamLimits

0xa31a,	// (0x00015401) popup_ai2_link_window_g1

0xa326,	// (0x0001540d) popup_ai2_link_window_g2_ParamLimits

0xa326,	// (0x0001540d) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x0001aac1) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x0001aac1) popup_ai2_link_window_g

0xa335,	// (0x0001541c) ai2_mp_button_pane

0xa33d,	// (0x00015424) ai2_mp_volume_pane

0x8b32,	// (0x00013c19) bg_popup_sub_pane_cp5_ParamLimits

0x8b32,	// (0x00013c19) bg_popup_sub_pane_cp5

0xa345,	// (0x0001542c) heading_ai2_gene_pane_ParamLimits

0xa345,	// (0x0001542c) heading_ai2_gene_pane

0xa351,	// (0x00015438) list_ai2_gene_pane_ParamLimits

0xa351,	// (0x00015438) list_ai2_gene_pane

0xa399,	// (0x00015480) cell_ai2_link_pane_ParamLimits

0xa399,	// (0x00015480) cell_ai2_link_pane

0xa3af,	// (0x00015496) cell_ai2_link_pane_g1

0x5cca,	// (0x00010db1) grid_highlight_pane_cp7

0x4f20,	// (0x00010007) ai2_mp_volume_pane_g1

0xa480,	// (0x00015567) ai2_mp_volume_pane_g2

0xa3f5,	// (0x000154dc) list_ai2_gene_pane_t1

0xa488,	// (0x0001556f) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x0001aada) ai2_mp_volume_pane_g

0x4f28,	// (0x0001000f) volume_small_pane_cp3

0xa490,	// (0x00015577) aid_size_cell_ai2_button

0xa498,	// (0x0001557f) grid_ai2_button_pane

0xa4a1,	// (0x00015588) cell_ai2_button_pane_ParamLimits

0xa4a1,	// (0x00015588) cell_ai2_button_pane

0x5cc0,	// (0x00010da7) cell_ai2_button_pane_g1

0x5cca,	// (0x00010db1) grid_highlight_pane_cp8

0xa440,	// (0x00015527) ai2_gene_pane_t1_ParamLimits

0xa440,	// (0x00015527) ai2_gene_pane_t1

0x1009,	// (0x0000c0f0) aid_height_parent_landscape

0x1f5b,	// (0x0000d042) aid_height_set_list

0x9cf2,	// (0x00014dd9) aid_size_parent

0xa0dc,	// (0x000151c3) aid_size_cell_graphic_pane_ParamLimits

0xa361,	// (0x00015448) popup_ai2_data_window_g1_ParamLimits

0xa361,	// (0x00015448) popup_ai2_data_window_g1

0xa36d,	// (0x00015454) ai2_news_ticker_pane_g1

0xa375,	// (0x0001545c) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x0001aac6) ai2_news_ticker_pane_g

0xa37d,	// (0x00015464) ai2_news_ticker_pane_t1

0xa38b,	// (0x00015472) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x0001aacb) ai2_news_ticker_pane_t

0xa3b8,	// (0x0001549f) heading_ai2_gene_pane_g1

0xa3c0,	// (0x000154a7) heading_ai2_gene_pane_t1_ParamLimits

0xa3c0,	// (0x000154a7) heading_ai2_gene_pane_t1

0xa3d5,	// (0x000154bc) list_highlight_pane_cp6

0xa3dd,	// (0x000154c4) ai2_gene_pane_ParamLimits

0xa3dd,	// (0x000154c4) ai2_gene_pane

0xa403,	// (0x000154ea) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x0001aad0) list_ai2_gene_pane_t

0xa411,	// (0x000154f8) list_highlight_pane_cp8_ParamLimits

0xa411,	// (0x000154f8) list_highlight_pane_cp8

0xa422,	// (0x00015509) ai2_gene_pane_g1_ParamLimits

0xa422,	// (0x00015509) ai2_gene_pane_g1

0xa434,	// (0x0001551b) ai2_gene_pane_g2_ParamLimits

0xa434,	// (0x0001551b) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x0001aad5) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x0001aad5) ai2_gene_pane_g

0x65ad,	// (0x00011694) scroll_pane_cp12

0xe0dc,	// (0x000191c3) control_pane_t3_ParamLimits

0xe0dc,	// (0x000191c3) control_pane_t3

0x7c4d,	// (0x00012d34) status_small_pane_g8_ParamLimits

0x7c4d,	// (0x00012d34) status_small_pane_g8

0x1126,	// (0x0000c20d) popup_find_window_ParamLimits

0x13a1,	// (0x0000c488) popup_note_image_window_ParamLimits

0x8788,	// (0x0001386f) list_double2_graphic_pane_vc_g1_ParamLimits

0x8788,	// (0x0001386f) list_double2_graphic_pane_vc_g1

0x667f,	// (0x00011766) list_double2_graphic_pane_vc_g2_ParamLimits

0x667f,	// (0x00011766) list_double2_graphic_pane_vc_g2

0x668b,	// (0x00011772) list_double2_graphic_pane_vc_g3_ParamLimits

0x668b,	// (0x00011772) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001a8b8) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a8b8) list_double2_graphic_pane_vc_g

0x8794,	// (0x0001387b) list_double2_graphic_pane_vc_t1_ParamLimits

0x8794,	// (0x0001387b) list_double2_graphic_pane_vc_t1

0x667f,	// (0x00011766) list_single_heading_pane_vc_g1_ParamLimits

0x667f,	// (0x00011766) list_single_heading_pane_vc_g1

0x668b,	// (0x00011772) list_single_heading_pane_vc_g2_ParamLimits

0x668b,	// (0x00011772) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_single_heading_pane_vc_g

0x884e,	// (0x00013935) list_single_heading_pane_vc_t1_ParamLimits

0x884e,	// (0x00013935) list_single_heading_pane_vc_t1

0x8864,	// (0x0001394b) list_single_heading_pane_vc_t2_ParamLimits

0x8864,	// (0x0001394b) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0001a8d9) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0001a8d9) list_single_heading_pane_vc_t

0x8878,	// (0x0001395f) list_setting_number_pane_vc_g1_ParamLimits

0x8878,	// (0x0001395f) list_setting_number_pane_vc_g1

0x8884,	// (0x0001396b) list_setting_number_pane_vc_g2_ParamLimits

0x8884,	// (0x0001396b) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001a8de) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001a8de) list_setting_number_pane_vc_g

0x8890,	// (0x00013977) list_setting_number_pane_vc_t1_ParamLimits

0x8890,	// (0x00013977) list_setting_number_pane_vc_t1

0x88a4,	// (0x0001398b) list_setting_number_pane_vc_t2_ParamLimits

0x88a4,	// (0x0001398b) list_setting_number_pane_vc_t2

0x88c0,	// (0x000139a7) list_setting_number_pane_vc_t3_ParamLimits

0x88c0,	// (0x000139a7) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x0001a8e3) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x0001a8e3) list_setting_number_pane_vc_t

0x88e8,	// (0x000139cf) set_value_pane_vc_ParamLimits

0x88e8,	// (0x000139cf) set_value_pane_vc

0x9ef4,	// (0x00014fdb) list_double2_graphic_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double2_graphic_pane_vc

0x9ef4,	// (0x00014fdb) list_double2_large_graphic_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double2_large_graphic_pane_vc

0x9ef4,	// (0x00014fdb) list_double2_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double2_pane_vc

0x9ef4,	// (0x00014fdb) list_double_graphic_heading_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double_graphic_heading_pane_vc

0x9ef4,	// (0x00014fdb) list_double_graphic_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double_graphic_pane_vc

0x9ef4,	// (0x00014fdb) list_double_heading_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double_heading_pane_vc

0x9ef4,	// (0x00014fdb) list_double_large_graphic_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double_large_graphic_pane_vc

0x9ef4,	// (0x00014fdb) list_double_number_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double_number_pane_vc

0x9ef4,	// (0x00014fdb) list_double_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double_pane_vc

0x9ef4,	// (0x00014fdb) list_double_time_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_double_time_pane_vc

0x9ef4,	// (0x00014fdb) list_setting_number_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_setting_number_pane_vc

0x9ef4,	// (0x00014fdb) list_setting_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_setting_pane_vc

0x9ef4,	// (0x00014fdb) list_single_graphic_heading_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_single_graphic_heading_pane_vc

0x9ef4,	// (0x00014fdb) list_single_heading_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_single_heading_pane_vc

0x9ef4,	// (0x00014fdb) list_single_number_heading_pane_vc_ParamLimits

0x9ef4,	// (0x00014fdb) list_single_number_heading_pane_vc

0x8788,	// (0x0001386f) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x8788,	// (0x0001386f) list_double_graphic_heading_pane_vc_g1

0x667f,	// (0x00011766) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x667f,	// (0x00011766) list_double_graphic_heading_pane_vc_g2

0x668b,	// (0x00011772) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x668b,	// (0x00011772) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d1,	// (0x0001a8b8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a8b8) list_double_graphic_heading_pane_vc_g

0xa4d5,	// (0x000155bc) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa4d5,	// (0x000155bc) list_double_graphic_heading_pane_vc_t1

0x884e,	// (0x00013935) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x884e,	// (0x00013935) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001aae1) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0001aae1) list_double_graphic_heading_pane_vc_t

0x8878,	// (0x0001395f) list_setting_pane_vc_g1_ParamLimits

0x8878,	// (0x0001395f) list_setting_pane_vc_g1

0x8884,	// (0x0001396b) list_setting_pane_vc_g2_ParamLimits

0x8884,	// (0x0001396b) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x0001a8de) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x0001a8de) list_setting_pane_vc_g

0xa6cd,	// (0x000157b4) list_setting_pane_vc_t1_ParamLimits

0xa6cd,	// (0x000157b4) list_setting_pane_vc_t1

0xa6e1,	// (0x000157c8) list_setting_pane_vc_t2_ParamLimits

0xa6e1,	// (0x000157c8) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0001ab24) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0001ab24) list_setting_pane_vc_t

0x88e8,	// (0x000139cf) set_value_pane_cp_vc_ParamLimits

0x88e8,	// (0x000139cf) set_value_pane_cp_vc

0x667f,	// (0x00011766) list_single_number_heading_pane_vc_g1_ParamLimits

0x667f,	// (0x00011766) list_single_number_heading_pane_vc_g1

0x668b,	// (0x00011772) list_single_number_heading_pane_vc_g2_ParamLimits

0x668b,	// (0x00011772) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_single_number_heading_pane_vc_g

0x884e,	// (0x00013935) list_single_number_heading_pane_vc_t1_ParamLimits

0x884e,	// (0x00013935) list_single_number_heading_pane_vc_t1

0xa703,	// (0x000157ea) list_single_number_heading_pane_vc_t2_ParamLimits

0xa703,	// (0x000157ea) list_single_number_heading_pane_vc_t2

0xa717,	// (0x000157fe) list_single_number_heading_pane_vc_t3_ParamLimits

0xa717,	// (0x000157fe) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0001ab29) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0001ab29) list_single_number_heading_pane_vc_t

0x8788,	// (0x0001386f) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8788,	// (0x0001386f) list_single_graphic_heading_pane_vc_g1

0x667f,	// (0x00011766) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x667f,	// (0x00011766) list_single_graphic_heading_pane_vc_g4

0x668b,	// (0x00011772) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x668b,	// (0x00011772) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0001a8b8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0001a8b8) list_single_graphic_heading_pane_vc_g

0x884e,	// (0x00013935) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x884e,	// (0x00013935) list_single_graphic_heading_pane_vc_t1

0xa729,	// (0x00015810) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa729,	// (0x00015810) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0001ab30) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0001ab30) list_single_graphic_heading_pane_vc_t

0x667f,	// (0x00011766) list_double2_pane_vc_g1_ParamLimits

0x667f,	// (0x00011766) list_double2_pane_vc_g1

0x668b,	// (0x00011772) list_double2_pane_vc_g2_ParamLimits

0x668b,	// (0x00011772) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_double2_pane_vc_g

0xa73d,	// (0x00015824) list_double2_pane_vc_t1_ParamLimits

0xa73d,	// (0x00015824) list_double2_pane_vc_t1

0xa753,	// (0x0001583a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xa753,	// (0x0001583a) list_double2_large_graphic_pane_vc_g1

0x667f,	// (0x00011766) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x667f,	// (0x00011766) list_double2_large_graphic_pane_vc_g2

0x668b,	// (0x00011772) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x668b,	// (0x00011772) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0001a6e8) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0001a6e8) list_double2_large_graphic_pane_vc_g

0xa75f,	// (0x00015846) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xa75f,	// (0x00015846) list_double2_large_graphic_pane_vc_t1

0xa775,	// (0x0001585c) list_double_time_pane_vc_g1_ParamLimits

0xa775,	// (0x0001585c) list_double_time_pane_vc_g1

0xa781,	// (0x00015868) list_double_time_pane_vc_g2_ParamLimits

0xa781,	// (0x00015868) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0001ab35) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0001ab35) list_double_time_pane_vc_g

0xa78d,	// (0x00015874) list_double_time_pane_vc_t1_ParamLimits

0xa78d,	// (0x00015874) list_double_time_pane_vc_t1

0xa7a6,	// (0x0001588d) list_double_time_pane_vc_t2_ParamLimits

0xa7a6,	// (0x0001588d) list_double_time_pane_vc_t2

0xa7c6,	// (0x000158ad) list_double_time_pane_vc_t3_ParamLimits

0xa7c6,	// (0x000158ad) list_double_time_pane_vc_t3

0xa7de,	// (0x000158c5) list_double_time_pane_vc_t4_ParamLimits

0xa7de,	// (0x000158c5) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0001ab3a) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0001ab3a) list_double_time_pane_vc_t

0x667f,	// (0x00011766) list_double_pane_vc_g1_ParamLimits

0x667f,	// (0x00011766) list_double_pane_vc_g1

0x668b,	// (0x00011772) list_double_pane_vc_g2_ParamLimits

0x668b,	// (0x00011772) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_double_pane_vc_g

0xa7f2,	// (0x000158d9) list_double_pane_vc_t1_ParamLimits

0xa7f2,	// (0x000158d9) list_double_pane_vc_t1

0xa804,	// (0x000158eb) list_double_pane_vc_t2_ParamLimits

0xa804,	// (0x000158eb) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001ab43) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001ab43) list_double_pane_vc_t

0x667f,	// (0x00011766) list_double_number_pane_vc_g1_ParamLimits

0x667f,	// (0x00011766) list_double_number_pane_vc_g1

0x668b,	// (0x00011772) list_double_number_pane_vc_g2_ParamLimits

0x668b,	// (0x00011772) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_double_number_pane_vc_g

0xa81c,	// (0x00015903) list_double_number_pane_vc_t1_ParamLimits

0xa81c,	// (0x00015903) list_double_number_pane_vc_t1

0xa830,	// (0x00015917) list_double_number_pane_vc_t2_ParamLimits

0xa830,	// (0x00015917) list_double_number_pane_vc_t2

0xa804,	// (0x000158eb) list_double_number_pane_vc_t3_ParamLimits

0xa804,	// (0x000158eb) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0001ab48) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0001ab48) list_double_number_pane_vc_t

0xa842,	// (0x00015929) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa842,	// (0x00015929) list_double_large_graphic_pane_vc_g1

0xa84e,	// (0x00015935) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa84e,	// (0x00015935) list_double_large_graphic_pane_vc_g2

0x668b,	// (0x00011772) list_double_large_graphic_pane_vc_g3_ParamLimits

0x668b,	// (0x00011772) list_double_large_graphic_pane_vc_g3

0xa85d,	// (0x00015944) list_double_large_graphic_pane_vc_g4_ParamLimits

0xa85d,	// (0x00015944) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0001ab4f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0001ab4f) list_double_large_graphic_pane_vc_g

0xa869,	// (0x00015950) list_double_large_graphic_pane_vc_t1_ParamLimits

0xa869,	// (0x00015950) list_double_large_graphic_pane_vc_t1

0xa87b,	// (0x00015962) list_double_large_graphic_pane_vc_t2_ParamLimits

0xa87b,	// (0x00015962) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0001ab58) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0001ab58) list_double_large_graphic_pane_vc_t

0x667f,	// (0x00011766) list_double_heading_pane_vc_g1_ParamLimits

0x667f,	// (0x00011766) list_double_heading_pane_vc_g1

0x668b,	// (0x00011772) list_double_heading_pane_vc_g2_ParamLimits

0x668b,	// (0x00011772) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0001a6cb) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0001a6cb) list_double_heading_pane_vc_g

0xa894,	// (0x0001597b) list_double_heading_pane_vc_t1_ParamLimits

0xa894,	// (0x0001597b) list_double_heading_pane_vc_t1

0x884e,	// (0x00013935) list_double_heading_pane_vc_t2_ParamLimits

0x884e,	// (0x00013935) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0001ab5d) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0001ab5d) list_double_heading_pane_vc_t

0x8788,	// (0x0001386f) list_double_graphic_pane_vc_g1_ParamLimits

0x8788,	// (0x0001386f) list_double_graphic_pane_vc_g1

0xa8a8,	// (0x0001598f) list_double_graphic_pane_vc_g2_ParamLimits

0xa8a8,	// (0x0001598f) list_double_graphic_pane_vc_g2

0xa8b7,	// (0x0001599e) list_double_graphic_pane_vc_g3_ParamLimits

0xa8b7,	// (0x0001599e) list_double_graphic_pane_vc_g3

0x0002,

0xfa7b,	// (0x0001ab62) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0001ab62) list_double_graphic_pane_vc_g

0xa8c3,	// (0x000159aa) list_double_graphic_pane_vc_t1_ParamLimits

0xa8c3,	// (0x000159aa) list_double_graphic_pane_vc_t1

0xa804,	// (0x000158eb) list_double_graphic_pane_vc_t2_ParamLimits

0xa804,	// (0x000158eb) list_double_graphic_pane_vc_t2

0x0001,

0xfa82,	// (0x0001ab69) list_double_graphic_pane_vc_t_ParamLimits

0xfa82,	// (0x0001ab69) list_double_graphic_pane_vc_t

0x405c,	// (0x0000f143) aid_size_cell_fastswap

0xde35,	// (0x00018f1c) aid_size_cell_touch_ParamLimits

0xde35,	// (0x00018f1c) aid_size_cell_touch

0x42c9,	// (0x0000f3b0) popup_fast_swap_wide_window_ParamLimits

0x42c9,	// (0x0000f3b0) popup_fast_swap_wide_window

0xdf80,	// (0x00019067) touch_pane_ParamLimits

0xdf80,	// (0x00019067) touch_pane

0x6aab,	// (0x00011b92) button_value_adjust_pane_cp2

0x6aab,	// (0x00011b92) button_value_adjust_pane_cp4

0x6acb,	// (0x00011bb2) form_field_data_pane_cp2

0x09d8,	// (0x0000babf) form_field_data_wide_pane_cp2

0x7178,	// (0x0001225f) bg_scroll_pane_ParamLimits

0x464b,	// (0x0000f732) scroll_handle_pane_ParamLimits

0x465f,	// (0x0000f746) scroll_sc2_down_pane_ParamLimits

0x465f,	// (0x0000f746) scroll_sc2_down_pane

0x71a9,	// (0x00012290) scroll_sc2_up_pane_ParamLimits

0x71a9,	// (0x00012290) scroll_sc2_up_pane

0x231c,	// (0x0000d403) grid_wheel_folder_pane_g1_ParamLimits

0x231c,	// (0x0000d403) grid_wheel_folder_pane_g1

0x4824,	// (0x0000f90b) clock_nsta_pane_cp2_ParamLimits

0x4824,	// (0x0000f90b) clock_nsta_pane_cp2

0x0dda,	// (0x0000bec1) listscroll_midp_pane_ParamLimits

0x0deb,	// (0x0000bed2) midp_canvas_pane

0x7cc8,	// (0x00012daf) nsta_clock_indic_pane

0x7d26,	// (0x00012e0d) listscroll_form_pane_vc

0x7d42,	// (0x00012e29) listscroll_set_pane_vc_ParamLimits

0x7d42,	// (0x00012e29) listscroll_set_pane_vc

0x17c8,	// (0x0000c8af) clock_nsta_pane

0x17f2,	// (0x0000c8d9) indicator_nsta_pane

0x8722,	// (0x00013809) bg_popup_sub_pane_cp2_ParamLimits

0x8736,	// (0x0001381d) find_pane_cp2_ParamLimits

0x8736,	// (0x0001381d) find_pane_cp2

0x874c,	// (0x00013833) grid_toobar_pane_ParamLimits

0x88f4,	// (0x000139db) list_form_gen_pane_vc_ParamLimits

0x88f4,	// (0x000139db) list_form_gen_pane_vc

0x890a,	// (0x000139f1) scroll_pane_cp8_vc_ParamLimits

0x890a,	// (0x000139f1) scroll_pane_cp8_vc

0x8986,	// (0x00013a6d) data_form_wide_pane_vc_ParamLimits

0x8986,	// (0x00013a6d) data_form_wide_pane_vc

0x8992,	// (0x00013a79) form_field_data_wide_pane_vc_g1

0x899a,	// (0x00013a81) form_field_data_wide_pane_vc_t1_ParamLimits

0x899a,	// (0x00013a81) form_field_data_wide_pane_vc_t1

0x6b83,	// (0x00011c6a) input_focus_pane_cp6_vc_ParamLimits

0x6b83,	// (0x00011c6a) input_focus_pane_cp6_vc

0x1bfd,	// (0x0000cce4) list_midp_pane_ParamLimits

0xa146,	// (0x0001522d) scroll_pane_cp16_ParamLimits

0xa146,	// (0x0001522d) scroll_pane_cp16

0x8d5d,	// (0x00013e44) button_value_adjust_pane_ParamLimits

0x8d5d,	// (0x00013e44) button_value_adjust_pane

0x1f6c,	// (0x0000d053) button_value_adjust_pane_cp6_ParamLimits

0x1f6c,	// (0x0000d053) button_value_adjust_pane_cp6

0x2082,	// (0x0000d169) settings_code_pane_cp_ParamLimits

0x2082,	// (0x0000d169) settings_code_pane_cp

0x5cc0,	// (0x00010da7) cell_touch_pane_g1

0x5cc0,	// (0x00010da7) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0001a801) cell_touch_pane_g

0x21fb,	// (0x0000d2e2) cell_touch_pane_cp_ParamLimits

0x21fb,	// (0x0000d2e2) cell_touch_pane_cp

0x2217,	// (0x0000d2fe) cell_touch_pane_ParamLimits

0x2217,	// (0x0000d2fe) cell_touch_pane

0x5cc0,	// (0x00010da7) scroll_sc2_down_pane_g1

0x5cc0,	// (0x00010da7) scroll_sc2_up_pane_g1

0x5cca,	// (0x00010db1) bg_set_opt_pane_cp4_vc

0xa4e9,	// (0x000155d0) list_set_graphic_pane_vc_g1_ParamLimits

0xa4e9,	// (0x000155d0) list_set_graphic_pane_vc_g1

0xa4f5,	// (0x000155dc) list_set_graphic_pane_vc_g2_ParamLimits

0xa4f5,	// (0x000155dc) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0001aae6) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0001aae6) list_set_graphic_pane_vc_g

0xa501,	// (0x000155e8) text_primary_small_cp13_vc_ParamLimits

0xa501,	// (0x000155e8) text_primary_small_cp13_vc

0xa519,	// (0x00015600) list_set_graphic_pane_vc_ParamLimits

0xa519,	// (0x00015600) list_set_graphic_pane_vc

0x5cca,	// (0x00010db1) input_focus_pane_cp2_vc

0x5cc0,	// (0x00010da7) setting_code_pane_vc_g1

0xa52d,	// (0x00015614) setting_code_pane_vc_t1

0xa53b,	// (0x00015622) set_text_pane_vc_t1_ParamLimits

0xa53b,	// (0x00015622) set_text_pane_vc_t1

0x5cca,	// (0x00010db1) input_focus_pane_cp1_vc

0xa55a,	// (0x00015641) list_set_text_pane_vc

0x5cc0,	// (0x00010da7) setting_text_pane_vc_g1

0x5cca,	// (0x00010db1) bg_set_opt_pane_cp2_vc

0xa564,	// (0x0001564b) setting_slider_graphic_pane_vc_g1

0xa56c,	// (0x00015653) setting_slider_graphic_pane_vc_t1

0xa57a,	// (0x00015661) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0001aaeb) setting_slider_graphic_pane_vc_t

0xa588,	// (0x0001566f) slider_set_pane_cp_vc

0xa590,	// (0x00015677) slider_set_pane_vc_g1

0xa599,	// (0x00015680) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0001aaf0) slider_set_pane_vc_g

0x6cbf,	// (0x00011da6) set_opt_bg_pane_g1_copy1

0x6cc7,	// (0x00011dae) set_opt_bg_pane_g2_copy1

0xa5c5,	// (0x000156ac) set_opt_bg_pane_g3_copy1

0x6cd7,	// (0x00011dbe) set_opt_bg_pane_g4_copy1

0x6cdf,	// (0x00011dc6) set_opt_bg_pane_g5_copy1

0x6ce7,	// (0x00011dce) set_opt_bg_pane_g6_copy1

0xa5cd,	// (0x000156b4) set_opt_bg_pane_g7_copy1

0xa5d7,	// (0x000156be) set_opt_bg_pane_g8_copy1

0xa5df,	// (0x000156c6) set_opt_bg_pane_g9_copy1

0x5cca,	// (0x00010db1) bg_set_opt_pane_cp_vc

0xa5e7,	// (0x000156ce) setting_slider_pane_vc_t1

0xa56c,	// (0x00015653) setting_slider_pane_vc_t2

0xa57a,	// (0x00015661) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0001aaff) setting_slider_pane_vc_t

0xa588,	// (0x0001566f) slider_set_pane_vc

0x4c36,	// (0x0000fd1d) volume_set_pane_vc_g1

0x4f31,	// (0x00010018) volume_set_pane_vc_g2

0x4f3a,	// (0x00010021) volume_set_pane_vc_g3

0x4f43,	// (0x0001002a) volume_set_pane_vc_g4

0x4f4c,	// (0x00010033) volume_set_pane_vc_g5

0x4f55,	// (0x0001003c) volume_set_pane_vc_g6

0x4f5e,	// (0x00010045) volume_set_pane_vc_g7

0x4f67,	// (0x0001004e) volume_set_pane_vc_g8

0x4f70,	// (0x00010057) volume_set_pane_vc_g9

0x4f79,	// (0x00010060) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0001ab06) volume_set_pane_vc_g

0xa5f6,	// (0x000156dd) volume_set_pane_vc

0xa5fe,	// (0x000156e5) button_value_adjust_pane_cp1_vc

0xa608,	// (0x000156ef) list_highlight_pane_cp2_vc

0xa611,	// (0x000156f8) list_set_pane_vc_ParamLimits

0xa611,	// (0x000156f8) list_set_pane_vc

0xa663,	// (0x0001574a) main_pane_set_vc_t1_ParamLimits

0xa663,	// (0x0001574a) main_pane_set_vc_t1

0xa678,	// (0x0001575f) main_pane_set_vc_t2_ParamLimits

0xa678,	// (0x0001575f) main_pane_set_vc_t2

0xa68a,	// (0x00015771) main_pane_set_vc_t3_ParamLimits

0xa68a,	// (0x00015771) main_pane_set_vc_t3

0xa69c,	// (0x00015783) main_pane_set_vc_t4_ParamLimits

0xa69c,	// (0x00015783) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0001ab1b) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0001ab1b) main_pane_set_vc_t

0xa6ae,	// (0x00015795) setting_code_pane_vc_ParamLimits

0xa6ae,	// (0x00015795) setting_code_pane_vc

0xa6bd,	// (0x000157a4) setting_slider_graphic_pane_vc

0xa6bd,	// (0x000157a4) setting_slider_pane_vc

0xa6bd,	// (0x000157a4) setting_text_pane_vc

0xa6bd,	// (0x000157a4) setting_volume_pane_vc

0xa6c5,	// (0x000157ac) scroll_pane_cp121_vc

0x6a99,	// (0x00011b80) set_content_pane_vc

0xa8d5,	// (0x000159bc) button_value_adjust_pane_g1

0xa8de,	// (0x000159c5) button_value_adjust_pane_g2

0x0001,

0xfa87,	// (0x0001ab6e) button_value_adjust_pane_g

0xa8e7,	// (0x000159ce) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa8e7,	// (0x000159ce) form_field_slider_wide_pane_vc_t1

0xa8fb,	// (0x000159e2) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa8fb,	// (0x000159e2) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa8c,	// (0x0001ab73) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8c,	// (0x0001ab73) form_field_slider_wide_pane_vc_t

0x603f,	// (0x00011126) input_focus_pane_cp10_vc_ParamLimits

0x603f,	// (0x00011126) input_focus_pane_cp10_vc

0xa90d,	// (0x000159f4) slider_cont_pane_cp1_vc_ParamLimits

0xa90d,	// (0x000159f4) slider_cont_pane_cp1_vc

0xa590,	// (0x00015677) slider_form_pane_g1_cp2

0xa599,	// (0x00015680) slider_form_pane_g2_cp2

0xa926,	// (0x00015a0d) form_field_slider_pane_vc_t3

0xa934,	// (0x00015a1b) form_field_slider_pane_vc_t4

0xa942,	// (0x00015a29) slider_form_pane_vc_ParamLimits

0xa942,	// (0x00015a29) slider_form_pane_vc

0xa94f,	// (0x00015a36) form_field_slider_pane_vc_t1_ParamLimits

0xa94f,	// (0x00015a36) form_field_slider_pane_vc_t1

0xa8fb,	// (0x000159e2) form_field_slider_pane_vc_t2_ParamLimits

0xa8fb,	// (0x000159e2) form_field_slider_pane_vc_t2

0x0001,

0xfa9c,	// (0x0001ab83) form_field_slider_pane_vc_t_ParamLimits

0xfa9c,	// (0x0001ab83) form_field_slider_pane_vc_t

0x603f,	// (0x00011126) input_focus_pane_cp9_vc_ParamLimits

0x603f,	// (0x00011126) input_focus_pane_cp9_vc

0xa96b,	// (0x00015a52) slider_cont_pane_vc_ParamLimits

0xa96b,	// (0x00015a52) slider_cont_pane_vc

0xa97d,	// (0x00015a64) list_form_graphic_pane_cp_vc_ParamLimits

0xa97d,	// (0x00015a64) list_form_graphic_pane_cp_vc

0x8992,	// (0x00013a79) form_field_popup_wide_pane_vc_g1

0xa992,	// (0x00015a79) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa992,	// (0x00015a79) form_field_popup_wide_pane_vc_t1

0x6b83,	// (0x00011c6a) input_focus_pane_cp8_vc_ParamLimits

0x6b83,	// (0x00011c6a) input_focus_pane_cp8_vc

0xa9a9,	// (0x00015a90) list_form_wide_pane_vc_ParamLimits

0xa9a9,	// (0x00015a90) list_form_wide_pane_vc

0xa9b5,	// (0x00015a9c) list_form_graphic_pane_vc_g1

0xa9bd,	// (0x00015aa4) list_form_graphic_pane_vc_t1_ParamLimits

0xa9bd,	// (0x00015aa4) list_form_graphic_pane_vc_t1

0x5daa,	// (0x00010e91) list_highlight_pane_cp5_vc_ParamLimits

0x5daa,	// (0x00010e91) list_highlight_pane_cp5_vc

0xa9d9,	// (0x00015ac0) list_form_graphic_pane_vc_ParamLimits

0xa9d9,	// (0x00015ac0) list_form_graphic_pane_vc

0x8992,	// (0x00013a79) form_field_popup_pane_vc_g1

0xa9ef,	// (0x00015ad6) form_field_popup_pane_vc_t1_ParamLimits

0xa9ef,	// (0x00015ad6) form_field_popup_pane_vc_t1

0x6b83,	// (0x00011c6a) input_focus_pane_cp7_vc_ParamLimits

0x6b83,	// (0x00011c6a) input_focus_pane_cp7_vc

0xaa06,	// (0x00015aed) list_form_pane_vc_ParamLimits

0xaa06,	// (0x00015aed) list_form_pane_vc

0xaa12,	// (0x00015af9) data_form_pane_vc_t1_ParamLimits

0xaa12,	// (0x00015af9) data_form_pane_vc_t1

0x6cbf,	// (0x00011da6) input_focus_pane_vc_g1

0x6cc7,	// (0x00011dae) input_focus_pane_vc_g2

0x6ccf,	// (0x00011db6) input_focus_pane_vc_g3

0x6cd7,	// (0x00011dbe) input_focus_pane_vc_g4

0x6cdf,	// (0x00011dc6) input_focus_pane_vc_g5

0x6ce7,	// (0x00011dce) input_focus_pane_vc_g6

0x6cef,	// (0x00011dd6) input_focus_pane_vc_g7

0x6cf7,	// (0x00011dde) input_focus_pane_vc_g8

0x6cff,	// (0x00011de6) input_focus_pane_vc_g9

0x5cc0,	// (0x00010da7) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0001a78a) input_focus_pane_vc_g

0x8986,	// (0x00013a6d) data_form_pane_vc_ParamLimits

0x8986,	// (0x00013a6d) data_form_pane_vc

0x8992,	// (0x00013a79) form_field_data_pane_vc_g1

0xaa2d,	// (0x00015b14) form_field_data_pane_vc_t1_ParamLimits

0xaa2d,	// (0x00015b14) form_field_data_pane_vc_t1

0x6b83,	// (0x00011c6a) input_focus_pane_vc_ParamLimits

0x6b83,	// (0x00011c6a) input_focus_pane_vc

0xaa47,	// (0x00015b2e) button_value_adjust_pane_cp3_vc

0xaa4f,	// (0x00015b36) button_value_adjust_pane_cp5_vc

0xaa57,	// (0x00015b3e) form_field_data_pane_vc_ParamLimits

0xaa57,	// (0x00015b3e) form_field_data_pane_vc

0xaa6e,	// (0x00015b55) form_field_data_pane_vc_cp2

0xaa76,	// (0x00015b5d) form_field_data_wide_pane_vc_ParamLimits

0xaa76,	// (0x00015b5d) form_field_data_wide_pane_vc

0xaa8c,	// (0x00015b73) form_field_data_wide_pane_vc_cp2

0xaa94,	// (0x00015b7b) form_field_popup_pane_vc_ParamLimits

0xaa94,	// (0x00015b7b) form_field_popup_pane_vc

0xaaab,	// (0x00015b92) form_field_popup_wide_pane_vc_ParamLimits

0xaaab,	// (0x00015b92) form_field_popup_wide_pane_vc

0xaac1,	// (0x00015ba8) form_field_slider_pane_vc_ParamLimits

0xaac1,	// (0x00015ba8) form_field_slider_pane_vc

0xaad4,	// (0x00015bbb) form_field_slider_wide_pane_vc_ParamLimits

0xaad4,	// (0x00015bbb) form_field_slider_wide_pane_vc

0x2235,	// (0x0000d31c) grid_touch_1_pane_ParamLimits

0x2235,	// (0x0000d31c) grid_touch_1_pane

0x2249,	// (0x0000d330) grid_touch_2_pane_ParamLimits

0x2249,	// (0x0000d330) grid_touch_2_pane

0xaba9,	// (0x00015c90) touch_pane_g1_ParamLimits

0xaba9,	// (0x00015c90) touch_pane_g1

0xab0b,	// (0x00015bf2) cell_app_pane_cp_wide_ParamLimits

0xab0b,	// (0x00015bf2) cell_app_pane_cp_wide

0xab1c,	// (0x00015c03) grid_popup_fast_wide_pane_ParamLimits

0xab1c,	// (0x00015c03) grid_popup_fast_wide_pane

0xab30,	// (0x00015c17) scroll_pane_cp19_ParamLimits

0xab30,	// (0x00015c17) scroll_pane_cp19

0x5cca,	// (0x00010db1) bg_popup_window_pane_cp20

0xab44,	// (0x00015c2b) listscroll_popup_fast_wide_pane

0x6ec8,	// (0x00011faf) grid_indicator_nsta_pane

0xab4c,	// (0x00015c33) clock_nsta_pane_g1

0xab55,	// (0x00015c3c) clock_nsta_pane_t1

0x2273,	// (0x0000d35a) cell_indicator_nsta_pane_ParamLimits

0x2273,	// (0x0000d35a) cell_indicator_nsta_pane

0xaba9,	// (0x00015c90) cell_indicator_nsta_pane_g1

0x2290,	// (0x0000d377) cell_indicator_nsta_pane_g2

0x0001,

0xfaa6,	// (0x0001ab8d) cell_indicator_nsta_pane_g

0xabcd,	// (0x00015cb4) clock_nsta_pane_cp

0xabd5,	// (0x00015cbc) indicator_nsta_pane_cp

0xabde,	// (0x00015cc5) nsta_clock_indic_pane_g1

0x5e8d,	// (0x00010f74) grid_indicator_pane

0x729b,	// (0x00012382) scroll_pane_cp29

0x4773,	// (0x0000f85a) indicator_nsta_pane_cp2_ParamLimits

0x4773,	// (0x0000f85a) indicator_nsta_pane_cp2

0x5daa,	// (0x00010e91) main_apps_wheel_pane

0x8bea,	// (0x00013cd1) form_midp_field_text_pane_ParamLimits

0x8d2f,	// (0x00013e16) scroll_bar_cp050_ParamLimits

0xac47,	// (0x00015d2e) cell_indicator_pane_ParamLimits

0xac47,	// (0x00015d2e) cell_indicator_pane

0xac64,	// (0x00015d4b) cell_indicator_pane_g1

0x22a6,	// (0x0000d38d) grid_wheel_folder_pane_ParamLimits

0x22a6,	// (0x0000d38d) grid_wheel_folder_pane

0x22b4,	// (0x0000d39b) list_wheel_apps_pane_ParamLimits

0x22b4,	// (0x0000d39b) list_wheel_apps_pane

0x22c2,	// (0x0000d3a9) main_apps_wheel_pane_g1_ParamLimits

0x22c2,	// (0x0000d3a9) main_apps_wheel_pane_g1

0x22ce,	// (0x0000d3b5) main_apps_wheel_pane_g2_ParamLimits

0x22ce,	// (0x0000d3b5) main_apps_wheel_pane_g2

0x0001,

0xfac2,	// (0x0001aba9) main_apps_wheel_pane_g_ParamLimits

0xfac2,	// (0x0001aba9) main_apps_wheel_pane_g

0x22dc,	// (0x0000d3c3) main_apps_wheel_pane_t1_ParamLimits

0x22dc,	// (0x0000d3c3) main_apps_wheel_pane_t1

0x22f0,	// (0x0000d3d7) list_wheel_apps_pane_g1

0x22f8,	// (0x0000d3df) list_wheel_apps_pane_g2

0x2300,	// (0x0000d3e7) list_wheel_apps_pane_g3

0x2308,	// (0x0000d3ef) list_wheel_apps_pane_g4

0x2312,	// (0x0000d3f9) list_wheel_apps_pane_g5

0x0004,

0xfac7,	// (0x0001abae) list_wheel_apps_pane_g

0x784c,	// (0x00012933) navi_icon_text_pane

0x16c3,	// (0x0000c7aa) aid_fill_nsta

0x2329,	// (0x0000d410) navi_icon_text_pane_g1

0x2335,	// (0x0000d41c) navi_icon_text_pane_t1

0x76e8,	// (0x000127cf) list_set_graphic_pane_t1_ParamLimits

0x76e8,	// (0x000127cf) list_set_graphic_pane_t1

0x9471,	// (0x00014558) popup_midp_note_alarm_window_t6_ParamLimits

0x9471,	// (0x00014558) popup_midp_note_alarm_window_t6

0x9483,	// (0x0001456a) popup_midp_note_alarm_window_t7_ParamLimits

0x9483,	// (0x0001456a) popup_midp_note_alarm_window_t7

0x9495,	// (0x0001457c) popup_midp_note_alarm_window_t8_ParamLimits

0x9495,	// (0x0001457c) popup_midp_note_alarm_window_t8

0x94a7,	// (0x0001458e) popup_midp_note_alarm_window_t9_ParamLimits

0x94a7,	// (0x0001458e) popup_midp_note_alarm_window_t9

0x94b9,	// (0x000145a0) popup_midp_note_alarm_window_t10_ParamLimits

0x94b9,	// (0x000145a0) popup_midp_note_alarm_window_t10

0x94cb,	// (0x000145b2) popup_midp_note_alarm_window_t11_ParamLimits

0x94cb,	// (0x000145b2) popup_midp_note_alarm_window_t11

0x94dd,	// (0x000145c4) scroll_pane_cp17_ParamLimits

0x94dd,	// (0x000145c4) scroll_pane_cp17

0x4c36,	// (0x0000fd1d) volume_small_pane_cp_g1

0x4f82,	// (0x00010069) volume_small_pane_cp_g2

0x4f8b,	// (0x00010072) volume_small_pane_cp_g3

0x4f94,	// (0x0001007b) volume_small_pane_cp_g4

0x4f9d,	// (0x00010084) volume_small_pane_cp_g5

0x4fa6,	// (0x0001008d) volume_small_pane_cp_g6

0x4faf,	// (0x00010096) volume_small_pane_cp_g7

0x4fb8,	// (0x0001009f) volume_small_pane_cp_g8

0x4fc1,	// (0x000100a8) volume_small_pane_cp_g9

0x4fca,	// (0x000100b1) volume_small_pane_cp_g10

0x7aad,	// (0x00012b94) midp_ticker_pane_g1_ParamLimits

0x7ab9,	// (0x00012ba0) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0001a852) midp_ticker_pane_g_ParamLimits

0x0e86,	// (0x0000bf6d) midp_ticker_pane_t1_ParamLimits

0x16e3,	// (0x0000c7ca) aid_fill_nsta_2

0x8d1b,	// (0x00013e02) list_form2_midp_pane

0x9ea4,	// (0x00014f8b) midp_editing_number_pane_ParamLimits

0x9eb3,	// (0x00014f9a) midp_ticker_pane_ParamLimits

0xad4d,	// (0x00015e34) form2_midp_field_pane

0xad71,	// (0x00015e58) scroll_pane_cp51

0xad91,	// (0x00015e78) form2_midp_button_pane_ParamLimits

0xad91,	// (0x00015e78) form2_midp_button_pane

0xada3,	// (0x00015e8a) form2_midp_content_pane_ParamLimits

0xada3,	// (0x00015e8a) form2_midp_content_pane

0xadbd,	// (0x00015ea4) form2_midp_field_choice_group_pane

0xadc5,	// (0x00015eac) form2_midp_field_pane_g1

0xadcd,	// (0x00015eb4) form2_midp_field_pane_g2

0xadd5,	// (0x00015ebc) form2_midp_field_pane_g3

0xaddd,	// (0x00015ec4) form2_midp_field_pane_g4

0x0003,

0xfaec,	// (0x0001abd3) form2_midp_field_pane_g

0xade5,	// (0x00015ecc) form2_midp_gauge_slider_pane

0xaded,	// (0x00015ed4) form2_midp_gauge_wait_pane

0xadf5,	// (0x00015edc) form2_midp_image_pane_ParamLimits

0xadf5,	// (0x00015edc) form2_midp_image_pane

0xae10,	// (0x00015ef7) form2_midp_label_pane_ParamLimits

0xae10,	// (0x00015ef7) form2_midp_label_pane

0x2363,	// (0x0000d44a) form2_midp_label_pane_cp_ParamLimits

0x2363,	// (0x0000d44a) form2_midp_label_pane_cp

0xae4a,	// (0x00015f31) form2_midp_string_pane_ParamLimits

0xae4a,	// (0x00015f31) form2_midp_string_pane

0xae5c,	// (0x00015f43) form2_midp_text_pane_ParamLimits

0xae5c,	// (0x00015f43) form2_midp_text_pane

0xae75,	// (0x00015f5c) form2_midp_time_pane

0xae85,	// (0x00015f6c) input_focus_pane_cp51_ParamLimits

0xae85,	// (0x00015f6c) input_focus_pane_cp51

0xae9d,	// (0x00015f84) form2_midp_label_pane_t1_ParamLimits

0xae9d,	// (0x00015f84) form2_midp_label_pane_t1

0xaedd,	// (0x00015fc4) form2_mdip_text_pane_t1_ParamLimits

0xaedd,	// (0x00015fc4) form2_mdip_text_pane_t1

0xaef9,	// (0x00015fe0) form2_midp_time_pane_t1

0xaf14,	// (0x00015ffb) form2_midp_gauge_slider_pane_t1

0x2384,	// (0x0000d46b) form2_midp_gauge_slider_pane_t2

0x2396,	// (0x0000d47d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf5,	// (0x0001abdc) form2_midp_gauge_slider_pane_t

0xaf4a,	// (0x00016031) form2_midp_slider_pane

0xaf56,	// (0x0001603d) form2_midp_gauge_wait_pane_t1

0xaf64,	// (0x0001604b) form2_midp_wait_pane_ParamLimits

0xaf64,	// (0x0001604b) form2_midp_wait_pane

0x23a8,	// (0x0000d48f) list_single_2graphic_pane_cp4_ParamLimits

0x23a8,	// (0x0000d48f) list_single_2graphic_pane_cp4

0x1b68,	// (0x0000cc4f) list_single_midp_graphic_pane_cp_ParamLimits

0x1b68,	// (0x0000cc4f) list_single_midp_graphic_pane_cp

0x5cca,	// (0x00010db1) list_highlight_pane_cp20

0xafbe,	// (0x000160a5) list_single_2graphic_pane_g1_cp4

0xa3b8,	// (0x0001549f) list_single_2graphic_pane_g2_cp4

0xafc6,	// (0x000160ad) list_single_2graphic_pane_t1_cp4

0x5daa,	// (0x00010e91) list_highlight_pane_cp21

0xafd5,	// (0x000160bc) list_single_midp_graphic_pane_g4_cp

0xafe4,	// (0x000160cb) list_single_midp_graphic_pane_t1_cp

0x23bf,	// (0x0000d4a6) form2_mdip_string_pane_t1_ParamLimits

0x23bf,	// (0x0000d4a6) form2_mdip_string_pane_t1

0x5cca,	// (0x00010db1) bg_wml_button_pane_cp2

0x5cc0,	// (0x00010da7) form2_midp_image_pane_g1

0x685d,	// (0x00011944) list_double_large_graphic_pane_g5_ParamLimits

0x685d,	// (0x00011944) list_double_large_graphic_pane_g5

0x0dda,	// (0x0000bec1) midp_form_pane_ParamLimits

0x5daa,	// (0x00010e91) main_apps_wheel_pane_ParamLimits

0x141f,	// (0x0000c506) popup_preview_window_ParamLimits

0x141f,	// (0x0000c506) popup_preview_window

0x82aa,	// (0x00013391) popup_touch_info_window_ParamLimits

0x82aa,	// (0x00013391) popup_touch_info_window

0x82c8,	// (0x000133af) popup_touch_menu_window_ParamLimits

0x82c8,	// (0x000133af) popup_touch_menu_window

0x5cb6,	// (0x00010d9d) bg_popup_sub_pane_cp6

0xb133,	// (0x0001621a) list_touch_menu_pane

0xb13b,	// (0x00016222) list_single_touch_menu_pane_ParamLimits

0xb13b,	// (0x00016222) list_single_touch_menu_pane

0xb150,	// (0x00016237) list_single_touch_menu_pane_t1

0x5daa,	// (0x00010e91) bg_popup_sub_pane_cp7_ParamLimits

0x5daa,	// (0x00010e91) bg_popup_sub_pane_cp7

0xb15e,	// (0x00016245) heading_sub_pane

0xb166,	// (0x0001624d) list_touch_info_pane_ParamLimits

0xb166,	// (0x0001624d) list_touch_info_pane

0xb175,	// (0x0001625c) list_single_touch_info_pane_ParamLimits

0xb175,	// (0x0001625c) list_single_touch_info_pane

0xb187,	// (0x0001626e) list_single_touch_info_pane_t1

0xb195,	// (0x0001627c) list_single_touch_info_pane_t2

0x0001,

0xfb03,	// (0x0001abea) list_single_touch_info_pane_t

0x79ce,	// (0x00012ab5) bg_popup_heading_pane_cp

0xb1a3,	// (0x0001628a) heading_sub_pane_t1

0x8920,	// (0x00013a07) bg_popup_preview_window_pane_cp_ParamLimits

0x8920,	// (0x00013a07) bg_popup_preview_window_pane_cp

0xb15e,	// (0x00016245) heading_preview_pane

0xb166,	// (0x0001624d) list_preview_pane_ParamLimits

0xb166,	// (0x0001624d) list_preview_pane

0xb1b1,	// (0x00016298) popup_preview_window_g1

0xb175,	// (0x0001625c) list_single_preview_pane_ParamLimits

0xb175,	// (0x0001625c) list_single_preview_pane

0xb1b9,	// (0x000162a0) list_single_preview_pane_g1

0xb1c1,	// (0x000162a8) list_single_preview_pane_t1

0xb187,	// (0x0001626e) list_single_preview_pane_t2

0x0001,

0xfb08,	// (0x0001abef) list_single_preview_pane_t

0xb1cf,	// (0x000162b6) bg_popup_heading_pane_cp2_ParamLimits

0xb1cf,	// (0x000162b6) bg_popup_heading_pane_cp2

0xb1e5,	// (0x000162cc) heading_preview_pane_g1

0xb1ed,	// (0x000162d4) heading_preview_pane_t1_ParamLimits

0xb1ed,	// (0x000162d4) heading_preview_pane_t1

0x5eb0,	// (0x00010f97) soft_indicator_pane_t1_ParamLimits

0x658a,	// (0x00011671) scroll_pane_ParamLimits

0x7197,	// (0x0001227e) scroll_sc2_left_pane

0x71a0,	// (0x00012287) scroll_sc2_right_pane

0x71bf,	// (0x000122a6) scroll_bg_pane_g1_ParamLimits

0x71d4,	// (0x000122bb) scroll_bg_pane_g2_ParamLimits

0x71ec,	// (0x000122d3) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0001a7e1) scroll_bg_pane_g_ParamLimits

0x71bf,	// (0x000122a6) scroll_handle_pane_g1_ParamLimits

0x720e,	// (0x000122f5) scroll_handle_pane_g2_ParamLimits

0x71ec,	// (0x000122d3) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0001a7e8) scroll_handle_pane_g_ParamLimits

0x7d84,	// (0x00012e6b) popup_choice_list_window_ParamLimits

0x7d84,	// (0x00012e6b) popup_choice_list_window

0x872e,	// (0x00013815) choice_list_pane

0x87d2,	// (0x000138b9) cell_toolbar_pane_t1

0x87fa,	// (0x000138e1) toolbar_button_pane_ParamLimits

0x99a1,	// (0x00014a88) ai_gene_pane_1_t2_ParamLimits

0x99a1,	// (0x00014a88) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x0001aa00) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x0001aa00) ai_gene_pane_1_t

0xb20a,	// (0x000162f1) scroll_sc2_left_pane_g1

0xb20a,	// (0x000162f1) scroll_sc2_right_pane_g1

0x7d54,	// (0x00012e3b) bg_popup_sub_pane_cp10

0xb214,	// (0x000162fb) list_choice_list_pane

0xb22b,	// (0x00016312) list_single_choice_list_pane_ParamLimits

0xb22b,	// (0x00016312) list_single_choice_list_pane

0xb23f,	// (0x00016326) list_single_choice_list_pane_g1

0xb247,	// (0x0001632e) list_single_choice_list_pane_t1_ParamLimits

0xb247,	// (0x0001632e) list_single_choice_list_pane_t1

0xb25c,	// (0x00016343) choice_list_pane_g1

0xb264,	// (0x0001634b) choice_list_pane_t1

0x5cb6,	// (0x00010d9d) input_focus_pane_cp11

0x7070,	// (0x00012157) title_pane_stacon_g2_ParamLimits

0x7070,	// (0x00012157) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0001a7c7) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0001a7c7) title_pane_stacon_g

0x79ce,	// (0x00012ab5) cursor_press_pane

0x10de,	// (0x0000c1c5) popup_fep_hwr_window_ParamLimits

0x10de,	// (0x0000c1c5) popup_fep_hwr_window

0x7ea2,	// (0x00012f89) popup_fep_vkb_window_ParamLimits

0x7ea2,	// (0x00012f89) popup_fep_vkb_window

0xb272,	// (0x00016359) cursor_press_pane_g1

0x0002,

0xfb31,	// (0x0001ac18) fep_vkb_side_pane_g_ParamLimits

0x500c,	// (0x000100f3) fep_hwr_candidate_pane_ParamLimits

0x500c,	// (0x000100f3) fep_hwr_candidate_pane

0x5036,	// (0x0001011d) fep_hwr_side_pane_ParamLimits

0x5036,	// (0x0001011d) fep_hwr_side_pane

0x5056,	// (0x0001013d) fep_hwr_top_pane_ParamLimits

0x5056,	// (0x0001013d) fep_hwr_top_pane

0x506e,	// (0x00010155) fep_hwr_write_pane_ParamLimits

0x506e,	// (0x00010155) fep_hwr_write_pane

0xfb31,	// (0x0001ac18) fep_vkb_side_pane_g

0xb27a,	// (0x00016361) fep_hwr_top_pane_g1

0xb28c,	// (0x00016373) fep_hwr_top_pane_g2

0x50a8,	// (0x0001018f) fep_hwr_top_pane_g3

0x0002,

0xfb0d,	// (0x0001abf4) fep_hwr_top_pane_g

0x50bd,	// (0x000101a4) fep_hwr_top_text_pane

0x7361,	// (0x00012448) fep_hwr_top_text_pane_g1

0xb2c2,	// (0x000163a9) fep_hwr_top_text_pane_t1

0x51b3,	// (0x0001029a) fep_hwr_candidate_pane_g1

0xb51c,	// (0x00016603) fep_vkb_keypad_pane_g3_ParamLimits

0xb51c,	// (0x00016603) fep_vkb_keypad_pane_g3

0xb544,	// (0x0001662b) fep_vkb_keypad_pane_g4_ParamLimits

0xb544,	// (0x0001662b) fep_vkb_keypad_pane_g4

0xb5b3,	// (0x0001669a) fep_vkb_bottom_pane_g2_ParamLimits

0xb5b3,	// (0x0001669a) fep_vkb_bottom_pane_g2

0x0001,

0xfb38,	// (0x0001ac1f) fep_vkb_bottom_pane_g_ParamLimits

0xfb38,	// (0x0001ac1f) fep_vkb_bottom_pane_g

0xb20a,	// (0x000162f1) cell_vkb_side_pane_g2

0x0001,

0xfb42,	// (0x0001ac29) cell_vkb_side_pane_g

0xb63e,	// (0x00016725) cell_vkb_side_pane_t1

0xb64c,	// (0x00016733) cell_vkb_side_pane_t1_copy1

0xb20a,	// (0x000162f1) bg_fep_vkb_candidate_pane_g2

0xb77e,	// (0x00016865) cell_vkb_candidate_pane_ParamLimits

0xb2d0,	// (0x000163b7) aid_size_cell_vkb_ParamLimits

0xb2d0,	// (0x000163b7) aid_size_cell_vkb

0xb77e,	// (0x00016865) cell_vkb_candidate_pane

0x51da,	// (0x000102c1) bg_popup_fep_shadow_pane_g1

0xb35e,	// (0x00016445) fep_vkb_bottom_pane_ParamLimits

0xb35e,	// (0x00016445) fep_vkb_bottom_pane

0xb39b,	// (0x00016482) fep_vkb_candidate_pane_ParamLimits

0xb39b,	// (0x00016482) fep_vkb_candidate_pane

0xb3b7,	// (0x0001649e) fep_vkb_keypad_pane_ParamLimits

0xb3b7,	// (0x0001649e) fep_vkb_keypad_pane

0xb3fd,	// (0x000164e4) fep_vkb_side_pane_ParamLimits

0xb3fd,	// (0x000164e4) fep_vkb_side_pane

0xb439,	// (0x00016520) fep_vkb_top_pane_ParamLimits

0xb439,	// (0x00016520) fep_vkb_top_pane

0xb475,	// (0x0001655c) fep_vkb_top_pane_g1_ParamLimits

0xb475,	// (0x0001655c) fep_vkb_top_pane_g1

0xb484,	// (0x0001656b) fep_vkb_top_pane_g2_ParamLimits

0xb484,	// (0x0001656b) fep_vkb_top_pane_g2

0xb493,	// (0x0001657a) fep_vkb_top_pane_g3_ParamLimits

0xb493,	// (0x0001657a) fep_vkb_top_pane_g3

0x0003,

0xfb28,	// (0x0001ac0f) fep_vkb_top_pane_g_ParamLimits

0xfb28,	// (0x0001ac0f) fep_vkb_top_pane_g

0xb4b1,	// (0x00016598) fep_vkb_top_text_pane_ParamLimits

0xb4b1,	// (0x00016598) fep_vkb_top_text_pane

0x24a4,	// (0x0000d58b) fep_vkb_side_pane_g1_ParamLimits

0x24a4,	// (0x0000d58b) fep_vkb_side_pane_g1

0xb50b,	// (0x000165f2) grid_vkb_side_pane_ParamLimits

0xb50b,	// (0x000165f2) grid_vkb_side_pane

0x51e2,	// (0x000102c9) bg_popup_fep_shadow_pane_g2

0x51eb,	// (0x000102d2) bg_popup_fep_shadow_pane_g3

0x51f3,	// (0x000102da) bg_popup_fep_shadow_pane_g4

0x51fc,	// (0x000102e3) bg_popup_fep_shadow_pane_g5

0x5206,	// (0x000102ed) bg_popup_fep_shadow_pane_g6

0x520e,	// (0x000102f5) bg_popup_fep_shadow_pane_g7

0x6cd7,	// (0x00011dbe) bg_popup_fep_shadow_pane_g8

0xb562,	// (0x00016649) grid_vkb_keypad_number_pane_ParamLimits

0xb562,	// (0x00016649) grid_vkb_keypad_number_pane

0xb572,	// (0x00016659) grid_vkb_keypad_pane_ParamLimits

0xb572,	// (0x00016659) grid_vkb_keypad_pane

0xb598,	// (0x0001667f) fep_vkb_bottom_pane_g1_ParamLimits

0xb598,	// (0x0001667f) fep_vkb_bottom_pane_g1

0xb5c1,	// (0x000166a8) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb5c1,	// (0x000166a8) grid_vkb_keypad_bottom_left_pane

0xb5d6,	// (0x000166bd) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb5d6,	// (0x000166bd) grid_vkb_keypad_bottom_right_pane

0xb5eb,	// (0x000166d2) fep_vkb_top_text_pane_g1

0x24eb,	// (0x0000d5d2) fep_vkb_top_text_pane_t1

0x24fd,	// (0x0000d5e4) cell_vkb_side_pane_ParamLimits

0x24fd,	// (0x0000d5e4) cell_vkb_side_pane

0xb20a,	// (0x000162f1) cell_vkb_side_pane_g1

0xb65a,	// (0x00016741) cell_vkb_keypad_pane_ParamLimits

0xb65a,	// (0x00016741) cell_vkb_keypad_pane

0xb6d5,	// (0x000167bc) cell_vkb_keypad_pane_g1

0x0008,

0xfb55,	// (0x0001ac3c) bg_popup_fep_shadow_pane_g

0x5220,	// (0x00010307) cell_hwr_side_pane_g1

0x5220,	// (0x00010307) cell_hwr_side_pane_g2

0xb6df,	// (0x000167c6) cell_vkb_keypad_pane_t1

0x2513,	// (0x0000d5fa) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x2513,	// (0x0000d5fa) cell_vkb_keypad_bottom_left_pane

0x2528,	// (0x0000d60f) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x2528,	// (0x0000d60f) cell_vkb_keypad_bottom_right_pane

0xb20a,	// (0x000162f1) cell_vkb_keypad_bottom_left_pane_g1

0xb20a,	// (0x000162f1) cell_vkb_keypad_bottom_right_pane_g1

0xb743,	// (0x0001682a) cell_vkb_keypad_number_pane_ParamLimits

0xb743,	// (0x0001682a) cell_vkb_keypad_number_pane

0xb762,	// (0x00016849) cell_vkb_keypad_number_pane_g1

0xb76c,	// (0x00016853) cell_vkb_keypad_number_pane_g2

0xb775,	// (0x0001685c) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb47,	// (0x0001ac2e) cell_vkb_keypad_number_pane_g

0xb6df,	// (0x000167c6) cell_vkb_keypad_number_pane_t1

0xb79b,	// (0x00016882) fep_vkb_candidate_pane_g1

0x0001,

0xfb68,	// (0x0001ac4f) cell_hwr_side_pane_g

0xb7b4,	// (0x0001689b) cell_hwr_side_pane_t1

0x522a,	// (0x00010311) cell_hwr_side_pane_t1_copy1

0x5238,	// (0x0001031f) cell_hwr_candidate_pane_g1

0x5267,	// (0x0001034e) cell_hwr_candidate_pane_t1

0xb20a,	// (0x000162f1) cell_vkb_candidate_pane_g2

0xb848,	// (0x0001692f) cell_vkb_candidate_pane_t1

0x4fd3,	// (0x000100ba) bg_popup_fep_shadow_pane_ParamLimits

0x4fd3,	// (0x000100ba) bg_popup_fep_shadow_pane

0x5088,	// (0x0001016f) bg_fep_hwr_top_pane_g4

0xb29e,	// (0x00016385) bg_hwr_side_pane_g1_ParamLimits

0xb29e,	// (0x00016385) bg_hwr_side_pane_g1

0xe2f6,	// (0x000193dd) cell_hwr_side_pane_ParamLimits

0xe2f6,	// (0x000193dd) cell_hwr_side_pane

0x5134,	// (0x0001021b) fep_hwr_write_pane_g1_ParamLimits

0x5134,	// (0x0001021b) fep_hwr_write_pane_g1

0x5141,	// (0x00010228) fep_hwr_write_pane_g2_ParamLimits

0x5141,	// (0x00010228) fep_hwr_write_pane_g2

0x514e,	// (0x00010235) fep_hwr_write_pane_g3_ParamLimits

0x514e,	// (0x00010235) fep_hwr_write_pane_g3

0xe316,	// (0x000193fd) fep_hwr_write_pane_g4_ParamLimits

0xe316,	// (0x000193fd) fep_hwr_write_pane_g4

0x0005,

0xfb14,	// (0x0001abfb) fep_hwr_write_pane_g_ParamLimits

0xfb14,	// (0x0001abfb) fep_hwr_write_pane_g

0x5088,	// (0x0001016f) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5088,	// (0x0001016f) bg_fep_hwr_candidate_pane_g2

0x5171,	// (0x00010258) cell_hwr_candidate_pane_ParamLimits

0x5171,	// (0x00010258) cell_hwr_candidate_pane

0x51b3,	// (0x0001029a) fep_hwr_candidate_pane_g1_ParamLimits

0xb2fe,	// (0x000163e5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb2fe,	// (0x000163e5) bg_popup_fep_shadow_pane_cp2

0xb4a3,	// (0x0001658a) fep_vkb_top_pane_g4_ParamLimits

0xb4a3,	// (0x0001658a) fep_vkb_top_pane_g4

0xb4e9,	// (0x000165d0) fep_vkb_side_pane_g2_ParamLimits

0xb4e9,	// (0x000165d0) fep_vkb_side_pane_g2

0x0906,	// (0x0000b9ed) list_setting_pane_t4_ParamLimits

0x0906,	// (0x0000b9ed) list_setting_pane_t4

0x0980,	// (0x0000ba67) list_setting_number_pane_t5_ParamLimits

0x0980,	// (0x0000ba67) list_setting_number_pane_t5

0x0c93,	// (0x0000bd7a) list_double_heading_pane_cp2_ParamLimits

0x0c93,	// (0x0000bd7a) list_double_heading_pane_cp2

0x6ba9,	// (0x00011c90) list_double_heading_pane_g1_cp2_ParamLimits

0x6ba9,	// (0x00011c90) list_double_heading_pane_g1_cp2

0x6bb5,	// (0x00011c9c) list_double_heading_pane_g2_cp2_ParamLimits

0x6bb5,	// (0x00011c9c) list_double_heading_pane_g2_cp2

0xb856,	// (0x0001693d) list_double_heading_pane_t1_cp2_ParamLimits

0xb856,	// (0x0001693d) list_double_heading_pane_t1_cp2

0xb86c,	// (0x00016953) list_double_heading_pane_t2_cp2_ParamLimits

0xb86c,	// (0x00016953) list_double_heading_pane_t2_cp2

0x5c9e,	// (0x00010d85) aid_value_unit2

0x4315,	// (0x0000f3fc) popup_preview_fixed_window

0x604d,	// (0x00011134) bg_popup_preview_window_pane_cp02

0xb87e,	// (0x00016965) list_preview_fixed_pane

0xb8c4,	// (0x000169ab) list_empty_pane_fp_ParamLimits

0xb8c4,	// (0x000169ab) list_empty_pane_fp

0xb8c4,	// (0x000169ab) list_single_cale_day_pane_fp_ParamLimits

0xb8c4,	// (0x000169ab) list_single_cale_day_pane_fp

0xb8c4,	// (0x000169ab) list_single_graphic_heading_pane_fp_ParamLimits

0xb8c4,	// (0x000169ab) list_single_graphic_heading_pane_fp

0xb8c4,	// (0x000169ab) list_single_graphic_pane_fp_ParamLimits

0xb8c4,	// (0x000169ab) list_single_graphic_pane_fp

0xb8c4,	// (0x000169ab) list_single_heading_pane_fp_ParamLimits

0xb8c4,	// (0x000169ab) list_single_heading_pane_fp

0xb8c4,	// (0x000169ab) list_single_pane_fp_ParamLimits

0xb8c4,	// (0x000169ab) list_single_pane_fp

0xb8db,	// (0x000169c2) list_single_pane_fp_g1_ParamLimits

0xb8db,	// (0x000169c2) list_single_pane_fp_g1

0x6ba9,	// (0x00011c90) list_single_pane_fp_g2_ParamLimits

0x6ba9,	// (0x00011c90) list_single_pane_fp_g2

0x6bb5,	// (0x00011c9c) list_single_pane_fp_g3_ParamLimits

0x6bb5,	// (0x00011c9c) list_single_pane_fp_g3

0xb8e7,	// (0x000169ce) list_single_pane_fp_g4_ParamLimits

0xb8e7,	// (0x000169ce) list_single_pane_fp_g4

0x0003,

0xfb7b,	// (0x0001ac62) list_single_pane_fp_g_ParamLimits

0xfb7b,	// (0x0001ac62) list_single_pane_fp_g

0xb8f3,	// (0x000169da) list_single_pane_fp_t1_ParamLimits

0xb8f3,	// (0x000169da) list_single_pane_fp_t1

0xb90a,	// (0x000169f1) list_single_graphic_pane_fp_g1_ParamLimits

0xb90a,	// (0x000169f1) list_single_graphic_pane_fp_g1

0xb8db,	// (0x000169c2) list_single_graphic_pane_fp_g2_ParamLimits

0xb8db,	// (0x000169c2) list_single_graphic_pane_fp_g2

0x6ba9,	// (0x00011c90) list_single_graphic_pane_fp_g3_ParamLimits

0x6ba9,	// (0x00011c90) list_single_graphic_pane_fp_g3

0x6bb5,	// (0x00011c9c) list_single_graphic_pane_fp_g4_ParamLimits

0x6bb5,	// (0x00011c9c) list_single_graphic_pane_fp_g4

0xb8e7,	// (0x000169ce) list_single_graphic_pane_fp_g5_ParamLimits

0xb8e7,	// (0x000169ce) list_single_graphic_pane_fp_g5

0x0004,

0xfb84,	// (0x0001ac6b) list_single_graphic_pane_fp_g_ParamLimits

0xfb84,	// (0x0001ac6b) list_single_graphic_pane_fp_g

0xb916,	// (0x000169fd) list_single_graphic_pane_fp_t1_ParamLimits

0xb916,	// (0x000169fd) list_single_graphic_pane_fp_t1

0xb90a,	// (0x000169f1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb90a,	// (0x000169f1) list_single_graphic_heading_pane_fp_g1

0xb8db,	// (0x000169c2) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb8db,	// (0x000169c2) list_single_graphic_heading_pane_fp_g2

0x6ba9,	// (0x00011c90) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6ba9,	// (0x00011c90) list_single_graphic_heading_pane_fp_g3

0x6bb5,	// (0x00011c9c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6bb5,	// (0x00011c9c) list_single_graphic_heading_pane_fp_g4

0xb8e7,	// (0x000169ce) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb8e7,	// (0x000169ce) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0001ac6b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0001ac6b) list_single_graphic_heading_pane_fp_g

0xb92c,	// (0x00016a13) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb92c,	// (0x00016a13) list_single_graphic_heading_pane_fp_t1

0xb942,	// (0x00016a29) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb942,	// (0x00016a29) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x0001ac76) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x0001ac76) list_single_graphic_heading_pane_fp_t

0xb954,	// (0x00016a3b) list_single_cale_day_pane_fp_g1_ParamLimits

0xb954,	// (0x00016a3b) list_single_cale_day_pane_fp_g1

0xb98c,	// (0x00016a73) list_single_cale_day_pane_fp_g2_ParamLimits

0xb98c,	// (0x00016a73) list_single_cale_day_pane_fp_g2

0xb998,	// (0x00016a7f) list_single_cale_day_pane_fp_g3_ParamLimits

0xb998,	// (0x00016a7f) list_single_cale_day_pane_fp_g3

0xb9c0,	// (0x00016aa7) list_single_cale_day_pane_fp_g4_ParamLimits

0xb9c0,	// (0x00016aa7) list_single_cale_day_pane_fp_g4

0xb9e4,	// (0x00016acb) list_single_cale_day_pane_fp_g5_ParamLimits

0xb9e4,	// (0x00016acb) list_single_cale_day_pane_fp_g5

0x0004,

0xfb94,	// (0x0001ac7b) list_single_cale_day_pane_fp_g_ParamLimits

0xfb94,	// (0x0001ac7b) list_single_cale_day_pane_fp_g

0xba08,	// (0x00016aef) list_single_cale_day_pane_fp_t1_ParamLimits

0xba08,	// (0x00016aef) list_single_cale_day_pane_fp_t1

0xba2e,	// (0x00016b15) list_single_cale_day_pane_fp_t2_ParamLimits

0xba2e,	// (0x00016b15) list_single_cale_day_pane_fp_t2

0xba47,	// (0x00016b2e) list_single_cale_day_pane_fp_t3_ParamLimits

0xba47,	// (0x00016b2e) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9f,	// (0x0001ac86) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9f,	// (0x0001ac86) list_single_cale_day_pane_fp_t

0xb8db,	// (0x000169c2) list_empty_pane_fp_g1_ParamLimits

0xb8db,	// (0x000169c2) list_empty_pane_fp_g1

0xba60,	// (0x00016b47) list_empty_pane_fp_t1

0xba6e,	// (0x00016b55) list_empty_pane_fp_t2

0x0001,

0xfba6,	// (0x0001ac8d) list_empty_pane_fp_t

0xb8db,	// (0x000169c2) list_single_heading_pane_fp_g1_ParamLimits

0xb8db,	// (0x000169c2) list_single_heading_pane_fp_g1

0x6ba9,	// (0x00011c90) list_single_heading_pane_fp_g2_ParamLimits

0x6ba9,	// (0x00011c90) list_single_heading_pane_fp_g2

0x6bb5,	// (0x00011c9c) list_single_heading_pane_fp_g3_ParamLimits

0x6bb5,	// (0x00011c9c) list_single_heading_pane_fp_g3

0x0002,

0xfbab,	// (0x0001ac92) list_single_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x0001ac92) list_single_heading_pane_fp_g

0xba7c,	// (0x00016b63) list_single_heading_pane_fp_t1_ParamLimits

0xba7c,	// (0x00016b63) list_single_heading_pane_fp_t1

0xba8e,	// (0x00016b75) list_single_heading_pane_fp_t2_ParamLimits

0xba8e,	// (0x00016b75) list_single_heading_pane_fp_t2

0x0001,

0xfbb2,	// (0x0001ac99) list_single_heading_pane_fp_t_ParamLimits

0xfbb2,	// (0x0001ac99) list_single_heading_pane_fp_t

0x6f07,	// (0x00011fee) aid_size_cell_fast

0x5fbd,	// (0x000110a4) soft_indicator_pane_cp1_t1

0x6f44,	// (0x0001202b) cell_app_pane_cp2_ParamLimits

0x6f44,	// (0x0001202b) cell_app_pane_cp2

0x4ff5,	// (0x000100dc) fep_hwr_candidate_drop_down_list_pane

0x51cd,	// (0x000102b4) fep_hwr_candidate_pane_g3_ParamLimits

0x51cd,	// (0x000102b4) fep_hwr_candidate_pane_g3

0x3764,	// (0x0000e84b) fep_hwr_candidate_pane_g4_ParamLimits

0x3764,	// (0x0000e84b) fep_hwr_candidate_pane_g4

0x0002,

0xfb21,	// (0x0001ac08) fep_hwr_candidate_pane_g_ParamLimits

0xfb21,	// (0x0001ac08) fep_hwr_candidate_pane_g

0xb38a,	// (0x00016471) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb38a,	// (0x00016471) fep_vkb_candidate_drop_down_list_pane

0xb7a3,	// (0x0001688a) fep_vkb_candidate_pane_g3

0xb7ab,	// (0x00016892) fep_vkb_candidate_pane_g4

0x0002,

0xfb4e,	// (0x0001ac35) fep_vkb_candidate_pane_g

0x5238,	// (0x0001031f) cell_hwr_candidate_pane_g1_ParamLimits

0x5246,	// (0x0001032d) cell_hwr_candidate_pane_g3_ParamLimits

0x5246,	// (0x0001032d) cell_hwr_candidate_pane_g3

0xe753,	// (0x0001983a) cell_hwr_candidate_pane_g4_ParamLimits

0xe753,	// (0x0001983a) cell_hwr_candidate_pane_g4

0x0002,

0xfb6d,	// (0x0001ac54) cell_hwr_candidate_pane_g_ParamLimits

0xfb6d,	// (0x0001ac54) cell_hwr_candidate_pane_g

0xb7c2,	// (0x000168a9) cell_vkb_candidate_pane_g3_ParamLimits

0xb7c2,	// (0x000168a9) cell_vkb_candidate_pane_g3

0xb7dd,	// (0x000168c4) cell_vkb_candidate_pane_g4_ParamLimits

0xb7dd,	// (0x000168c4) cell_vkb_candidate_pane_g4

0xbaa4,	// (0x00016b8b) cell_app_pane_cp2_g1_ParamLimits

0xbaa4,	// (0x00016b8b) cell_app_pane_cp2_g1

0xbac2,	// (0x00016ba9) cell_app_pane_cp2_g2_ParamLimits

0xbac2,	// (0x00016ba9) cell_app_pane_cp2_g2

0x0001,

0xfbb7,	// (0x0001ac9e) cell_app_pane_cp2_g_ParamLimits

0xfbb7,	// (0x0001ac9e) cell_app_pane_cp2_g

0xbace,	// (0x00016bb5) cell_app_pane_cp2_t1_ParamLimits

0xbace,	// (0x00016bb5) cell_app_pane_cp2_t1

0x6b83,	// (0x00011c6a) grid_highlight_pane_cp1_ParamLimits

0x6b83,	// (0x00011c6a) grid_highlight_pane_cp1

0x5285,	// (0x0001036c) cell_hwr_candidate_pane_cp1_ParamLimits

0x5285,	// (0x0001036c) cell_hwr_candidate_pane_cp1

0x5238,	// (0x0001031f) fep_hwr_candidate_drop_down_list_pane_g1

0x52a4,	// (0x0001038b) fep_hwr_candidate_drop_down_list_pane_g2

0x52b1,	// (0x00010398) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x0001aca3) fep_hwr_candidate_drop_down_list_pane_g

0x52be,	// (0x000103a5) fep_hwr_candidate_drop_down_list_scroll_pane

0x52c7,	// (0x000103ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x52c7,	// (0x000103ae) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x52d4,	// (0x000103bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x52d4,	// (0x000103bb) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x52e1,	// (0x000103c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x52e1,	// (0x000103c8) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x52ee,	// (0x000103d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x52ee,	// (0x000103d5) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x5309,	// (0x000103f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x5309,	// (0x000103f0) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5324,	// (0x0001040b) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5324,	// (0x0001040b) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x533f,	// (0x00010426) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x533f,	// (0x00010426) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x535a,	// (0x00010441) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x535a,	// (0x00010441) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc3,	// (0x0001acaa) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc3,	// (0x0001acaa) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xbae0,	// (0x00016bc7) cell_vkb_candidate_pane_cp1_ParamLimits

0xbae0,	// (0x00016bc7) cell_vkb_candidate_pane_cp1

0xb4a3,	// (0x0001658a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb4a3,	// (0x0001658a) fep_vkb_candidate_drop_down_list_pane_g1

0xbb00,	// (0x00016be7) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xbb00,	// (0x00016be7) fep_vkb_candidate_drop_down_list_pane_g2

0xbb0d,	// (0x00016bf4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xbb0d,	// (0x00016bf4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd4,	// (0x0001acbb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd4,	// (0x0001acbb) fep_vkb_candidate_drop_down_list_pane_g

0xbb1a,	// (0x00016c01) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xbb1a,	// (0x00016c01) fep_vkb_candidate_drop_down_list_scroll_pane

0xbb27,	// (0x00016c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xbb27,	// (0x00016c0e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xbb34,	// (0x00016c1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xbb34,	// (0x00016c1b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xbb40,	// (0x00016c27) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xbb40,	// (0x00016c27) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb7f8,	// (0x000168df) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb7f8,	// (0x000168df) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb819,	// (0x00016900) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb819,	// (0x00016900) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xbb4c,	// (0x00016c33) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xbb4c,	// (0x00016c33) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xbb6d,	// (0x00016c54) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xbb6d,	// (0x00016c54) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xbb8e,	// (0x00016c75) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xbb8e,	// (0x00016c75) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdb,	// (0x0001acc2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdb,	// (0x0001acc2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0307,	// (0x0000b3ee) title_pane_g1_ParamLimits

0x0318,	// (0x0000b3ff) title_pane_g2_ParamLimits

0xf56a,	// (0x0001a651) title_pane_g_ParamLimits

0x7351,	// (0x00012438) aid_call2_pane

0x7359,	// (0x00012440) aid_call_pane

0x7361,	// (0x00012448) popup_clock_analogue_window_g1

0x7361,	// (0x00012448) popup_clock_analogue_window_g2

0x4674,	// (0x0000f75b) popup_clock_analogue_window_g3

0x467d,	// (0x0000f764) popup_clock_analogue_window_g4

0x5cc0,	// (0x00010da7) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0001a7f6) popup_clock_analogue_window_g

0x4685,	// (0x0000f76c) popup_clock_analogue_window_t1

0x4693,	// (0x0000f77a) clock_digital_number_pane_ParamLimits

0x4693,	// (0x0000f77a) clock_digital_number_pane

0x469f,	// (0x0000f786) clock_digital_number_pane_cp02_ParamLimits

0x469f,	// (0x0000f786) clock_digital_number_pane_cp02

0x46ab,	// (0x0000f792) clock_digital_number_pane_cp03_ParamLimits

0x46ab,	// (0x0000f792) clock_digital_number_pane_cp03

0x46b7,	// (0x0000f79e) clock_digital_number_pane_cp04_ParamLimits

0x46b7,	// (0x0000f79e) clock_digital_number_pane_cp04

0x46c3,	// (0x0000f7aa) clock_digital_separator_pane_ParamLimits

0x46c3,	// (0x0000f7aa) clock_digital_separator_pane

0x46cf,	// (0x0000f7b6) popup_clock_digital_window_t1_ParamLimits

0x46cf,	// (0x0000f7b6) popup_clock_digital_window_t1

0x5cc0,	// (0x00010da7) clock_digital_number_pane_g1

0x5cc0,	// (0x00010da7) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0001a801) clock_digital_number_pane_g

0x5cc0,	// (0x00010da7) clock_digital_separator_pane_g1

0x5cc0,	// (0x00010da7) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0001a801) clock_digital_separator_pane_g

0x16c3,	// (0x0000c7aa) aid_fill_nsta_ParamLimits

0x17f2,	// (0x0000c8d9) indicator_nsta_pane_ParamLimits

0x85bd,	// (0x000136a4) popup_clock_analogue_window

0x85bd,	// (0x000136a4) popup_clock_digital_window

0x6ec8,	// (0x00011faf) grid_indicator_nsta_pane_ParamLimits

0xab63,	// (0x00015c4a) clock_nsta_pane_t2

0x0001,

0xfaa1,	// (0x0001ab88) clock_nsta_pane_t

0x4638,	// (0x0000f71f) aid_size_max_handle

0xdfd6,	// (0x000190bd) aid_size_min_handle

0x79ce,	// (0x00012ab5) editor_scroll_pane

0xbba9,	// (0x00016c90) ex_editor_pane

0x6e76,	// (0x00011f5d) scroll_pane_cp13

0x65b6,	// (0x0001169d) scroll_pane_cp14

0x738b,	// (0x00012472) scroll_pane_cp36

0x0ca4,	// (0x0000bd8b) list_single_graphic_hl_pane_cp2_ParamLimits

0x0ca4,	// (0x0000bd8b) list_single_graphic_hl_pane_cp2

0x2113,	// (0x0000d1fa) list_single_graphic_hl_pane_ParamLimits

0x2113,	// (0x0000d1fa) list_single_graphic_hl_pane

0xbbb1,	// (0x00016c98) aid_size_min_hl_cp1

0xbbba,	// (0x00016ca1) list_highlight_pane_cp34_ParamLimits

0xbbba,	// (0x00016ca1) list_highlight_pane_cp34

0xbbcb,	// (0x00016cb2) list_single_graphic_hl_pane_g1_ParamLimits

0xbbcb,	// (0x00016cb2) list_single_graphic_hl_pane_g1

0x65be,	// (0x000116a5) list_single_graphic_hl_pane_g2_ParamLimits

0x65be,	// (0x000116a5) list_single_graphic_hl_pane_g2

0x65be,	// (0x000116a5) list_single_graphic_hl_pane_g3_ParamLimits

0x65be,	// (0x000116a5) list_single_graphic_hl_pane_g3

0x65ca,	// (0x000116b1) list_single_graphic_hl_pane_g4_ParamLimits

0x65ca,	// (0x000116b1) list_single_graphic_hl_pane_g4

0x2543,	// (0x0000d62a) list_single_graphic_hl_pane_g5_ParamLimits

0x2543,	// (0x0000d62a) list_single_graphic_hl_pane_g5

0x0004,

0xfbec,	// (0x0001acd3) list_single_graphic_hl_pane_g_ParamLimits

0xfbec,	// (0x0001acd3) list_single_graphic_hl_pane_g

0x2557,	// (0x0000d63e) list_single_graphic_hl_pane_t1_ParamLimits

0x2557,	// (0x0000d63e) list_single_graphic_hl_pane_t1

0xbbf8,	// (0x00016cdf) aid_size_min_hl_cp2

0xbc01,	// (0x00016ce8) list_highlight_pane_cp34_cp2_ParamLimits

0xbc01,	// (0x00016ce8) list_highlight_pane_cp34_cp2

0xbbcb,	// (0x00016cb2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xbbcb,	// (0x00016cb2) list_single_graphic_hl_pane_g1_cp2

0xbc0e,	// (0x00016cf5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbc0e,	// (0x00016cf5) list_single_graphic_hl_pane_g2_cp2

0xbc1a,	// (0x00016d01) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbc1a,	// (0x00016d01) list_single_graphic_hl_pane_g3_cp2

0x7905,	// (0x000129ec) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7905,	// (0x000129ec) list_single_graphic_hl_pane_g4_cp2

0xbbe4,	// (0x00016ccb) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xbbe4,	// (0x00016ccb) list_single_graphic_hl_pane_g5_cp2

0xe008,	// (0x000190ef) control_pane_g4_ParamLimits

0xe008,	// (0x000190ef) control_pane_g4

0x7d54,	// (0x00012e3b) bg_popup_sub_pane_cp10_ParamLimits

0xb214,	// (0x000162fb) list_choice_list_pane_ParamLimits

0xb223,	// (0x0001630a) scroll_pane_cp23

0x604d,	// (0x00011134) bg_popup_preview_window_pane_cp02_ParamLimits

0xb87e,	// (0x00016965) list_preview_fixed_pane_ParamLimits

0xb894,	// (0x0001697b) list_preview_fixed_pane_cp_ParamLimits

0xb894,	// (0x0001697b) list_preview_fixed_pane_cp

0xb8a0,	// (0x00016987) popup_preview_fixed_window_g1_ParamLimits

0xb8a0,	// (0x00016987) popup_preview_fixed_window_g1

0xb8ac,	// (0x00016993) popup_preview_fixed_window_g2_ParamLimits

0xb8ac,	// (0x00016993) popup_preview_fixed_window_g2

0x0002,

0xfb74,	// (0x0001ac5b) popup_preview_fixed_window_g_ParamLimits

0xfb74,	// (0x0001ac5b) popup_preview_fixed_window_g

0x45ac,	// (0x0000f693) aid_navi_side_left_pane_ParamLimits

0x45c1,	// (0x0000f6a8) aid_navi_side_right_pane_ParamLimits

0x45d9,	// (0x0000f6c0) navi_icon_pane_stacon_ParamLimits

0x45ed,	// (0x0000f6d4) navi_navi_pane_stacon_ParamLimits

0x45d9,	// (0x0000f6c0) navi_text_pane_stacon_ParamLimits

0x5cb6,	// (0x00010d9d) main_text_info_pane

0xbc3e,	// (0x00016d25) listscroll_text_info_pane

0xbc46,	// (0x00016d2d) list_text_info_pane_ParamLimits

0xbc46,	// (0x00016d2d) list_text_info_pane

0xbc55,	// (0x00016d3c) scroll_pane_cp24_ParamLimits

0xbc55,	// (0x00016d3c) scroll_pane_cp24

0x256d,	// (0x0000d654) list_text_info_pane_t1_ParamLimits

0x256d,	// (0x0000d654) list_text_info_pane_t1

0x1053,	// (0x0000c13a) popup_fast_swap2_window_ParamLimits

0x1053,	// (0x0000c13a) popup_fast_swap2_window

0xbcac,	// (0x00016d93) aid_size_cell_fast2

0x5cb6,	// (0x00010d9d) bg_popup_window_pane_cp17

0x8d47,	// (0x00013e2e) heading_pane_cp2

0x628d,	// (0x00011374) listscroll_fast2_pane

0xbcb6,	// (0x00016d9d) grid_fast2_pane

0xbcc0,	// (0x00016da7) listscroll_fast2_pane_g1

0xbcc8,	// (0x00016daf) listscroll_fast2_pane_g2

0x0001,

0xfbf7,	// (0x0001acde) listscroll_fast2_pane_g

0x6e76,	// (0x00011f5d) scroll_pane_cp26

0xbcd2,	// (0x00016db9) cell_fast2_pane_ParamLimits

0xbcd2,	// (0x00016db9) cell_fast2_pane

0xbce7,	// (0x00016dce) cell_fast2_pane_g1

0xbcf0,	// (0x00016dd7) cell_fast2_pane_g2

0xbcf9,	// (0x00016de0) cell_fast2_pane_g3

0x0002,

0xfbfc,	// (0x0001ace3) cell_fast2_pane_g

0x6373,	// (0x0001145a) grid_highlight_pane_cp9

0x6388,	// (0x0001146f) main_eswt_pane_ParamLimits

0x6388,	// (0x0001146f) main_eswt_pane

0xbc6a,	// (0x00016d51) list_single_text_info_pane

0xbd01,	// (0x00016de8) eswt_ctrl_button_pane

0xbd01,	// (0x00016de8) eswt_ctrl_canvas_pane

0xbd09,	// (0x00016df0) eswt_ctrl_combo_pane

0xbd01,	// (0x00016de8) eswt_ctrl_default_pane

0xbd01,	// (0x00016de8) eswt_ctrl_label_pane

0xbd11,	// (0x00016df8) eswt_ctrl_wait_pane

0xbd19,	// (0x00016e00) eswt_shell_pane

0x5cb6,	// (0x00010d9d) listscroll_eswt_app_pane

0xbd39,	// (0x00016e20) popup_eswt_tasktip_window_ParamLimits

0xbd39,	// (0x00016e20) popup_eswt_tasktip_window

0x8920,	// (0x00013a07) bg_popup_window_pane_cp18

0xbd4a,	// (0x00016e31) eswt_control_pane_g1_ParamLimits

0xbd4a,	// (0x00016e31) eswt_control_pane_g1

0xbd57,	// (0x00016e3e) eswt_control_pane_g2_ParamLimits

0xbd57,	// (0x00016e3e) eswt_control_pane_g2

0xbd64,	// (0x00016e4b) eswt_control_pane_g3_ParamLimits

0xbd64,	// (0x00016e4b) eswt_control_pane_g3

0xbd71,	// (0x00016e58) eswt_control_pane_g4_ParamLimits

0xbd71,	// (0x00016e58) eswt_control_pane_g4

0x0003,

0xfc03,	// (0x0001acea) eswt_control_pane_g_ParamLimits

0xfc03,	// (0x0001acea) eswt_control_pane_g

0x6b83,	// (0x00011c6a) bg_button_pane_ParamLimits

0x6b83,	// (0x00011c6a) bg_button_pane

0x6388,	// (0x0001146f) common_borders_pane_copy2_ParamLimits

0x6388,	// (0x0001146f) common_borders_pane_copy2

0xbd7e,	// (0x00016e65) control_button_pane_g1_ParamLimits

0xbd7e,	// (0x00016e65) control_button_pane_g1

0xbd8a,	// (0x00016e71) control_button_pane_g2_ParamLimits

0xbd8a,	// (0x00016e71) control_button_pane_g2

0xbd96,	// (0x00016e7d) control_button_pane_g3_ParamLimits

0xbd96,	// (0x00016e7d) control_button_pane_g3

0x0002,

0xfc0c,	// (0x0001acf3) control_button_pane_g_ParamLimits

0xfc0c,	// (0x0001acf3) control_button_pane_g

0xbdaa,	// (0x00016e91) control_button_pane_t1

0xbdb8,	// (0x00016e9f) control_button_pane_t2

0x0001,

0xfc13,	// (0x0001acfa) control_button_pane_t

0x8806,	// (0x000138ed) bg_button_pane_g1

0x8816,	// (0x000138fd) bg_button_pane_g2

0x880e,	// (0x000138f5) bg_button_pane_g3

0x8826,	// (0x0001390d) bg_button_pane_g4

0x881e,	// (0x00013905) bg_button_pane_g5

0x882e,	// (0x00013915) bg_button_pane_g6

0x8836,	// (0x0001391d) bg_button_pane_g7

0x8846,	// (0x0001392d) bg_button_pane_g8

0x883e,	// (0x00013925) bg_button_pane_g9

0x0008,

0xf86d,	// (0x0001a954) bg_button_pane_g

0xb1cf,	// (0x000162b6) common_borders_pane_ParamLimits

0xb1cf,	// (0x000162b6) common_borders_pane

0xbd4a,	// (0x00016e31) eswt_control_pane_g1_copy1_ParamLimits

0xbd4a,	// (0x00016e31) eswt_control_pane_g1_copy1

0xbd57,	// (0x00016e3e) eswt_control_pane_g2_copy1_ParamLimits

0xbd57,	// (0x00016e3e) eswt_control_pane_g2_copy1

0xbd64,	// (0x00016e4b) eswt_control_pane_g3_copy1_ParamLimits

0xbd64,	// (0x00016e4b) eswt_control_pane_g3_copy1

0xbd71,	// (0x00016e58) eswt_control_pane_g4_copy1_ParamLimits

0xbd71,	// (0x00016e58) eswt_control_pane_g4_copy1

0xb20a,	// (0x000162f1) bg_eswt_ctrl_canvas_pane_g1

0xb1cf,	// (0x000162b6) common_borders_pane_cp2_ParamLimits

0xb1cf,	// (0x000162b6) common_borders_pane_cp2

0xb1cf,	// (0x000162b6) common_borders_pane_cp3_ParamLimits

0xb1cf,	// (0x000162b6) common_borders_pane_cp3

0xbdc6,	// (0x00016ead) separator_horizontal_pane

0xbdce,	// (0x00016eb5) separator_vertical_pane

0xbd4a,	// (0x00016e31) eswt_control_pane_g1_copy2_ParamLimits

0xbd4a,	// (0x00016e31) eswt_control_pane_g1_copy2

0xbd57,	// (0x00016e3e) eswt_control_pane_g2_copy2_ParamLimits

0xbd57,	// (0x00016e3e) eswt_control_pane_g2_copy2

0xbd64,	// (0x00016e4b) eswt_control_pane_g3_copy2_ParamLimits

0xbd64,	// (0x00016e4b) eswt_control_pane_g3_copy2

0xbd71,	// (0x00016e58) eswt_control_pane_g4_copy2_ParamLimits

0xbd71,	// (0x00016e58) eswt_control_pane_g4_copy2

0x5cb6,	// (0x00010d9d) common_borders_pane_cp4

0xbdd7,	// (0x00016ebe) separator_horizontal_pane_g1

0xbde0,	// (0x00016ec7) separator_horizontal_pane_g2

0xbde9,	// (0x00016ed0) separator_horizontal_pane_g3

0x0002,

0xfc18,	// (0x0001acff) separator_horizontal_pane_g

0xbd4a,	// (0x00016e31) eswt_control_pane_g1_copy3_ParamLimits

0xbd4a,	// (0x00016e31) eswt_control_pane_g1_copy3

0xbd57,	// (0x00016e3e) eswt_control_pane_g2_copy3_ParamLimits

0xbd57,	// (0x00016e3e) eswt_control_pane_g2_copy3

0xbd64,	// (0x00016e4b) eswt_control_pane_g3_copy3_ParamLimits

0xbd64,	// (0x00016e4b) eswt_control_pane_g3_copy3

0xbd71,	// (0x00016e58) eswt_control_pane_g4_copy3_ParamLimits

0xbd71,	// (0x00016e58) eswt_control_pane_g4_copy3

0x5cb6,	// (0x00010d9d) common_borders_pane_cp5

0xbdf2,	// (0x00016ed9) separator_vertical_pane_g1

0xbdfb,	// (0x00016ee2) separator_vertical_pane_g2

0xbe04,	// (0x00016eeb) separator_vertical_pane_g3

0x0002,

0xfc1f,	// (0x0001ad06) separator_vertical_pane_g

0xbd4a,	// (0x00016e31) eswt_control_pane_g1_copy4_ParamLimits

0xbd4a,	// (0x00016e31) eswt_control_pane_g1_copy4

0xbd57,	// (0x00016e3e) eswt_control_pane_g2_copy4_ParamLimits

0xbd57,	// (0x00016e3e) eswt_control_pane_g2_copy4

0xbd64,	// (0x00016e4b) eswt_control_pane_g3_copy4_ParamLimits

0xbd64,	// (0x00016e4b) eswt_control_pane_g3_copy4

0xbd71,	// (0x00016e58) eswt_control_pane_g4_copy4_ParamLimits

0xbd71,	// (0x00016e58) eswt_control_pane_g4_copy4

0x258b,	// (0x0000d672) eswt_ctrl_combo_button_pane

0x2593,	// (0x0000d67a) eswt_ctrl_input_pane

0x259b,	// (0x0000d682) popup_choice_list_window_cp70

0x25a3,	// (0x0000d68a) eswt_ctrl_input_pane_t1

0x5cb6,	// (0x00010d9d) input_focus_pane_cp70

0xb1cf,	// (0x000162b6) bg_button_pane_cp70_ParamLimits

0xb1cf,	// (0x000162b6) bg_button_pane_cp70

0x25b1,	// (0x0000d698) eswt_ctrl_combo_button_pane_g1

0xbe3b,	// (0x00016f22) wait_bar_pane_cp70

0x8920,	// (0x00013a07) bg_popup_window_pane_cp70_ParamLimits

0x8920,	// (0x00013a07) bg_popup_window_pane_cp70

0xbe43,	// (0x00016f2a) popup_eswt_tasktip_window_t1

0xbe59,	// (0x00016f40) wait_bar_pane_cp71_ParamLimits

0xbe59,	// (0x00016f40) wait_bar_pane_cp71

0xbe65,	// (0x00016f4c) grid_eswt_app_pane

0x7197,	// (0x0001227e) scroll_pane_cp70

0x25b9,	// (0x0000d6a0) cell_eswt_app_pane_ParamLimits

0x25b9,	// (0x0000d6a0) cell_eswt_app_pane

0x25e3,	// (0x0000d6ca) cell_eswt_app_pane_g1_ParamLimits

0x25e3,	// (0x0000d6ca) cell_eswt_app_pane_g1

0x2612,	// (0x0000d6f9) cell_eswt_app_pane_g2_ParamLimits

0x2612,	// (0x0000d6f9) cell_eswt_app_pane_g2

0x0001,

0xfc26,	// (0x0001ad0d) cell_eswt_app_pane_g_ParamLimits

0xfc26,	// (0x0001ad0d) cell_eswt_app_pane_g

0x263b,	// (0x0000d722) cell_eswt_app_pane_t1_ParamLimits

0x263b,	// (0x0000d722) cell_eswt_app_pane_t1

0xbf2c,	// (0x00017013) grid_highlight_pane_cp70_ParamLimits

0xbf2c,	// (0x00017013) grid_highlight_pane_cp70

0x78a1,	// (0x00012988) set_content_pane_g1

0x7c76,	// (0x00012d5d) status_small_volume_pane

0x5375,	// (0x0001045c) status_small_volume_pane_g1

0x537d,	// (0x00010464) volume_small2_pane

0x5386,	// (0x0001046d) volume_small2_pane_g1

0x538f,	// (0x00010476) volume_small2_pane_g2

0x5398,	// (0x0001047f) volume_small2_pane_g3

0x53a1,	// (0x00010488) volume_small2_pane_g4

0x53aa,	// (0x00010491) volume_small2_pane_g5

0x53b3,	// (0x0001049a) volume_small2_pane_g6

0x53bc,	// (0x000104a3) volume_small2_pane_g7

0x53c5,	// (0x000104ac) volume_small2_pane_g8

0x53ce,	// (0x000104b5) volume_small2_pane_g9

0x53d7,	// (0x000104be) volume_small2_pane_g10

0x0009,

0xfc2b,	// (0x0001ad12) volume_small2_pane_g

0xb5eb,	// (0x000166d2) fep_vkb_top_text_pane_g1_ParamLimits

0x24eb,	// (0x0000d5d2) fep_vkb_top_text_pane_t1_ParamLimits

0xb8b8,	// (0x0001699f) popup_preview_fixed_window_g3_ParamLimits

0xb8b8,	// (0x0001699f) popup_preview_fixed_window_g3

0x1656,	// (0x0000c73d) popup_toolbar_trans_pane

0x1f5b,	// (0x0000d042) aid_height_set_list_ParamLimits

0x9cf2,	// (0x00014dd9) aid_size_parent_ParamLimits

0x7d54,	// (0x00012e3b) list_highlight_pane_cp2_ParamLimits

0x78a1,	// (0x00012988) set_content_pane_g1_ParamLimits

0x2126,	// (0x0000d20d) list_single_image_pane_ParamLimits

0x2126,	// (0x0000d20d) list_single_image_pane

0x266d,	// (0x0000d754) aid_size_cell_image_ParamLimits

0x266d,	// (0x0000d754) aid_size_cell_image

0x267a,	// (0x0000d761) grid_single_image_pane_ParamLimits

0x267a,	// (0x0000d761) grid_single_image_pane

0x6ba9,	// (0x00011c90) list_single_image_pane_g1_ParamLimits

0x6ba9,	// (0x00011c90) list_single_image_pane_g1

0x6bb5,	// (0x00011c9c) list_single_image_pane_g2_ParamLimits

0x6bb5,	// (0x00011c9c) list_single_image_pane_g2

0x0001,

0xfc40,	// (0x0001ad27) list_single_image_pane_g_ParamLimits

0xfc40,	// (0x0001ad27) list_single_image_pane_g

0xbf51,	// (0x00017038) list_single_image_pane_t1_ParamLimits

0xbf51,	// (0x00017038) list_single_image_pane_t1

0x2686,	// (0x0000d76d) cell_image_list_pane_ParamLimits

0x2686,	// (0x0000d76d) cell_image_list_pane

0x269a,	// (0x0000d781) cell_image_list_pane_g1

0x26a3,	// (0x0000d78a) cell_image_list_pane_g2

0x0001,

0xfc45,	// (0x0001ad2c) cell_image_list_pane_g

0xbf8d,	// (0x00017074) aid_size_cell_tb_trans_pane

0x6b83,	// (0x00011c6a) bg_tb_trans_pane

0xbf9f,	// (0x00017086) grid_tb_trans_pane

0x8806,	// (0x000138ed) bg_tb_trans_pane_g1

0x8816,	// (0x000138fd) bg_tb_trans_pane_g2

0x880e,	// (0x000138f5) bg_tb_trans_pane_g3

0x8826,	// (0x0001390d) bg_tb_trans_pane_g4

0x881e,	// (0x00013905) bg_tb_trans_pane_g5

0x8846,	// (0x0001392d) bg_tb_trans_pane_g6

0x883e,	// (0x00013925) bg_tb_trans_pane_g7

0x882e,	// (0x00013915) bg_tb_trans_pane_g8

0x8836,	// (0x0001391d) bg_tb_trans_pane_g9

0x0008,

0xfc4a,	// (0x0001ad31) bg_tb_trans_pane_g

0xbfb3,	// (0x0001709a) cell_toolbar_trans_pane_ParamLimits

0xbfb3,	// (0x0001709a) cell_toolbar_trans_pane

0xb20a,	// (0x000162f1) cell_toolbar_trans_pane_g1

0x2347,	// (0x0000d42e) list_form2_midp_pane_t1

0x2355,	// (0x0000d43c) list_form2_midp_pane_t2

0x0001,

0xfae7,	// (0x0001abce) list_form2_midp_pane_t

0xad71,	// (0x00015e58) scroll_pane_cp51_ParamLimits

0xaf74,	// (0x0001605b) form2_midp_wait_pane_g1

0xaf7d,	// (0x00016064) form2_midp_wait_pane_g2

0xaf86,	// (0x0001606d) form2_midp_wait_pane_g3

0x0002,

0xfafc,	// (0x0001abe3) form2_midp_wait_pane_g

0x5daa,	// (0x00010e91) list_highlight_pane_cp21_ParamLimits

0xafd5,	// (0x000160bc) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xafe4,	// (0x000160cb) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9ef4,	// (0x00014fdb) list_single_2graphic_im_pane_ParamLimits

0x9ef4,	// (0x00014fdb) list_single_2graphic_im_pane

0x26ac,	// (0x0000d793) list_single_2graphic_im_pane_g1_ParamLimits

0x26ac,	// (0x0000d793) list_single_2graphic_im_pane_g1

0x26bd,	// (0x0000d7a4) list_single_2graphic_im_pane_g2_ParamLimits

0x26bd,	// (0x0000d7a4) list_single_2graphic_im_pane_g2

0x26c9,	// (0x0000d7b0) list_single_2graphic_im_pane_g3_ParamLimits

0x26c9,	// (0x0000d7b0) list_single_2graphic_im_pane_g3

0x0003,

0xfc5d,	// (0x0001ad44) list_single_2graphic_im_pane_g_ParamLimits

0xfc5d,	// (0x0001ad44) list_single_2graphic_im_pane_g

0x26dd,	// (0x0000d7c4) list_single_2graphic_im_pane_t1_ParamLimits

0x26dd,	// (0x0000d7c4) list_single_2graphic_im_pane_t1

0xb8c4,	// (0x000169ab) list_single_graphic_2heading_pane_fp_ParamLimits

0xb8c4,	// (0x000169ab) list_single_graphic_2heading_pane_fp

0xb90a,	// (0x000169f1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb90a,	// (0x000169f1) list_single_graphic_2heading_pane_fp_g1

0xb8db,	// (0x000169c2) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb8db,	// (0x000169c2) list_single_graphic_2heading_pane_fp_g2

0x6ba9,	// (0x00011c90) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6ba9,	// (0x00011c90) list_single_graphic_2heading_pane_fp_g3

0x6bb5,	// (0x00011c9c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6bb5,	// (0x00011c9c) list_single_graphic_2heading_pane_fp_g4

0xb8e7,	// (0x000169ce) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb8e7,	// (0x000169ce) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0001ac6b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0001ac6b) list_single_graphic_2heading_pane_fp_g

0xc047,	// (0x0001712e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xc047,	// (0x0001712e) list_single_graphic_2heading_pane_fp_t1

0xb942,	// (0x00016a29) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb942,	// (0x00016a29) list_single_graphic_2heading_pane_fp_t2

0xc05d,	// (0x00017144) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xc05d,	// (0x00017144) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc66,	// (0x0001ad4d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc66,	// (0x0001ad4d) list_single_graphic_2heading_pane_fp_t

0xb2aa,	// (0x00016391) fep_hwr_write_pane_g5_ParamLimits

0xb2aa,	// (0x00016391) fep_hwr_write_pane_g5

0xb2b6,	// (0x0001639d) fep_hwr_write_pane_g6_ParamLimits

0xb2b6,	// (0x0001639d) fep_hwr_write_pane_g6

0xbd19,	// (0x00016e00) eswt_shell_pane_ParamLimits

0x8920,	// (0x00013a07) bg_popup_window_pane_cp18_ParamLimits

0x9c18,	// (0x00014cff) heading_pane_cp70

0xbe43,	// (0x00016f2a) popup_eswt_tasktip_window_t1_ParamLimits

0x1717,	// (0x0000c7fe) aid_touch_tab_arrow_left

0x172d,	// (0x0000c814) aid_touch_tab_arrow_right

0x0330,	// (0x0000b417) title_pane_g3_ParamLimits

0x0330,	// (0x0000b417) title_pane_g3

0x6a70,	// (0x00011b57) set_value_pane_g1

0x1656,	// (0x0000c73d) popup_toolbar_trans_pane_ParamLimits

0xbf8d,	// (0x00017074) aid_size_cell_tb_trans_pane_ParamLimits

0x6b83,	// (0x00011c6a) bg_tb_trans_pane_ParamLimits

0xbf9f,	// (0x00017086) grid_tb_trans_pane_ParamLimits

0x604d,	// (0x00011134) cont_note_pane_ParamLimits

0x604d,	// (0x00011134) cont_note_pane

0x6388,	// (0x0001146f) cont_snote2_single_text_pane_ParamLimits

0x6388,	// (0x0001146f) cont_snote2_single_text_pane

0x6388,	// (0x0001146f) cont_snote2_single_graphic_pane_ParamLimits

0x6388,	// (0x0001146f) cont_snote2_single_graphic_pane

0x8f5d,	// (0x00014044) cont_note_wait_pane_ParamLimits

0x8f5d,	// (0x00014044) cont_note_wait_pane

0x8f5d,	// (0x00014044) cont_note_image_pane_ParamLimits

0x8f5d,	// (0x00014044) cont_note_image_pane

0xc073,	// (0x0001715a) popup_note2_window_g1_ParamLimits

0xc073,	// (0x0001715a) popup_note2_window_g1

0xc0a4,	// (0x0001718b) popup_note2_window_t1_ParamLimits

0xc0a4,	// (0x0001718b) popup_note2_window_t1

0xc0e9,	// (0x000171d0) popup_note2_window_t2_ParamLimits

0xc0e9,	// (0x000171d0) popup_note2_window_t2

0xc12e,	// (0x00017215) popup_note2_window_t3_ParamLimits

0xc12e,	// (0x00017215) popup_note2_window_t3

0xc173,	// (0x0001725a) popup_note2_window_t4_ParamLimits

0xc173,	// (0x0001725a) popup_note2_window_t4

0x60c5,	// (0x000111ac) popup_note2_window_t5_ParamLimits

0x60c5,	// (0x000111ac) popup_note2_window_t5

0x0004,

0xfc72,	// (0x0001ad59) popup_note2_window_t_ParamLimits

0xfc72,	// (0x0001ad59) popup_note2_window_t

0xc1a2,	// (0x00017289) popup_note2_image_window_g1_ParamLimits

0xc1a2,	// (0x00017289) popup_note2_image_window_g1

0xc1ae,	// (0x00017295) popup_note2_image_window_g2_ParamLimits

0xc1ae,	// (0x00017295) popup_note2_image_window_g2

0x0001,

0xfc7d,	// (0x0001ad64) popup_note2_image_window_g_ParamLimits

0xfc7d,	// (0x0001ad64) popup_note2_image_window_g

0xc1c0,	// (0x000172a7) popup_note2_image_window_t1_ParamLimits

0xc1c0,	// (0x000172a7) popup_note2_image_window_t1

0xc1d8,	// (0x000172bf) popup_note2_image_window_t2_ParamLimits

0xc1d8,	// (0x000172bf) popup_note2_image_window_t2

0xc1f0,	// (0x000172d7) popup_note2_image_window_t3_ParamLimits

0xc1f0,	// (0x000172d7) popup_note2_image_window_t3

0x0002,

0xfc82,	// (0x0001ad69) popup_note2_image_window_t_ParamLimits

0xfc82,	// (0x0001ad69) popup_note2_image_window_t

0x8f6b,	// (0x00014052) popup_note2_wait_window_g1_ParamLimits

0x8f6b,	// (0x00014052) popup_note2_wait_window_g1

0x8f77,	// (0x0001405e) popup_note2_wait_window_g2_ParamLimits

0x8f77,	// (0x0001405e) popup_note2_wait_window_g2

0x8f83,	// (0x0001406a) popup_note2_wait_window_g3_ParamLimits

0x8f83,	// (0x0001406a) popup_note2_wait_window_g3

0x0002,

0xf84f,	// (0x0001a936) popup_note2_wait_window_g_ParamLimits

0xf84f,	// (0x0001a936) popup_note2_wait_window_g

0xc20c,	// (0x000172f3) popup_note2_wait_window_t1_ParamLimits

0xc20c,	// (0x000172f3) popup_note2_wait_window_t1

0xc22a,	// (0x00017311) popup_note2_wait_window_t2_ParamLimits

0xc22a,	// (0x00017311) popup_note2_wait_window_t2

0xc248,	// (0x0001732f) popup_note2_wait_window_t3_ParamLimits

0xc248,	// (0x0001732f) popup_note2_wait_window_t3

0xc25a,	// (0x00017341) popup_note2_wait_window_t4_ParamLimits

0xc25a,	// (0x00017341) popup_note2_wait_window_t4

0x0003,

0xfc89,	// (0x0001ad70) popup_note2_wait_window_t_ParamLimits

0xfc89,	// (0x0001ad70) popup_note2_wait_window_t

0xc26c,	// (0x00017353) wait_bar2_pane_ParamLimits

0xc26c,	// (0x00017353) wait_bar2_pane

0xc284,	// (0x0001736b) popup_snote2_single_text_window_g1_ParamLimits

0xc284,	// (0x0001736b) popup_snote2_single_text_window_g1

0xc2ac,	// (0x00017393) popup_snote2_single_text_window_t1_ParamLimits

0xc2ac,	// (0x00017393) popup_snote2_single_text_window_t1

0xc2f8,	// (0x000173df) popup_snote2_single_text_window_t2_ParamLimits

0xc2f8,	// (0x000173df) popup_snote2_single_text_window_t2

0xc344,	// (0x0001742b) popup_snote2_single_text_window_t3_ParamLimits

0xc344,	// (0x0001742b) popup_snote2_single_text_window_t3

0xc385,	// (0x0001746c) popup_snote2_single_text_window_t4_ParamLimits

0xc385,	// (0x0001746c) popup_snote2_single_text_window_t4

0xc3bb,	// (0x000174a2) popup_snote2_single_text_window_t5_ParamLimits

0xc3bb,	// (0x000174a2) popup_snote2_single_text_window_t5

0x0004,

0xfc92,	// (0x0001ad79) popup_snote2_single_text_window_t_ParamLimits

0xfc92,	// (0x0001ad79) popup_snote2_single_text_window_t

0xc3e6,	// (0x000174cd) popup_snote2_single_graphic_window_g1_ParamLimits

0xc3e6,	// (0x000174cd) popup_snote2_single_graphic_window_g1

0xc40e,	// (0x000174f5) popup_snote2_single_graphic_window_g2_ParamLimits

0xc40e,	// (0x000174f5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9d,	// (0x0001ad84) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9d,	// (0x0001ad84) popup_snote2_single_graphic_window_g

0xc436,	// (0x0001751d) popup_snote2_single_graphic_window_t1_ParamLimits

0xc436,	// (0x0001751d) popup_snote2_single_graphic_window_t1

0xc482,	// (0x00017569) popup_snote2_single_graphic_window_t2_ParamLimits

0xc482,	// (0x00017569) popup_snote2_single_graphic_window_t2

0xc344,	// (0x0001742b) popup_snote2_single_graphic_window_t3_ParamLimits

0xc344,	// (0x0001742b) popup_snote2_single_graphic_window_t3

0xc385,	// (0x0001746c) popup_snote2_single_graphic_window_t4_ParamLimits

0xc385,	// (0x0001746c) popup_snote2_single_graphic_window_t4

0xc3bb,	// (0x000174a2) popup_snote2_single_graphic_window_t5_ParamLimits

0xc3bb,	// (0x000174a2) popup_snote2_single_graphic_window_t5

0x0004,

0xfca2,	// (0x0001ad89) popup_snote2_single_graphic_window_t_ParamLimits

0xfca2,	// (0x0001ad89) popup_snote2_single_graphic_window_t

0xac26,	// (0x00015d0d) clock_nsta_pane_cp2_t1

0xac26,	// (0x00015d0d) clock_nsta_pane_cp2_t2

0x0001,

0xfabd,	// (0x0001aba4) clock_nsta_pane_cp2_t

0x6b9d,	// (0x00011c84) form_field_data_wide_pane_g1_ParamLimits

0x6ba9,	// (0x00011c90) form_field_data_wide_pane_g2_ParamLimits

0x6ba9,	// (0x00011c90) form_field_data_wide_pane_g2

0x6bb5,	// (0x00011c9c) form_field_data_wide_pane_g3_ParamLimits

0x6bb5,	// (0x00011c9c) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0001a779) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0001a779) form_field_data_wide_pane_g

0x225d,	// (0x0000d344) grid_touch_3_pane_ParamLimits

0x225d,	// (0x0000d344) grid_touch_3_pane

0x270e,	// (0x0000d7f5) cell_touch_3_pane_ParamLimits

0x270e,	// (0x0000d7f5) cell_touch_3_pane

0xb20a,	// (0x000162f1) cell_touch_3_pane_g1

0xb20a,	// (0x000162f1) cell_touch_3_pane_g2

0x0001,

0xfb42,	// (0x0001ac29) cell_touch_3_pane_g

0x60f7,	// (0x000111de) cont_query_data_pane

0x60ff,	// (0x000111e6) cont_query_data_pane_cp1

0xc4fd,	// (0x000175e4) button_value_adjust_pane_cp7

0xc505,	// (0x000175ec) query_popup_pane_cp3

0x7422,	// (0x00012509) bg_popup_sub_pane_cp22_ParamLimits

0x46ee,	// (0x0000f7d5) navi_navi_volume_pane_cp2

0x4709,	// (0x0000f7f0) popup_side_volume_key_window_g2

0x4718,	// (0x0000f7ff) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0001a80b) popup_side_volume_key_window_g

0x4735,	// (0x0000f81c) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0001a812) popup_side_volume_key_window_t

0x776b,	// (0x00012852) popup_side_volume_key_window_ParamLimits

0x0736,	// (0x0000b81d) list_double_graphic_pane_g4_ParamLimits

0x0736,	// (0x0000b81d) list_double_graphic_pane_g4

0x20ff,	// (0x0000d1e6) list_single_2heading_msg_pane_ParamLimits

0x20ff,	// (0x0000d1e6) list_single_2heading_msg_pane

0x2757,	// (0x0000d83e) list_single_2heading_msg_pane_g1_ParamLimits

0x2757,	// (0x0000d83e) list_single_2heading_msg_pane_g1

0x2763,	// (0x0000d84a) list_single_2heading_msg_pane_g2_ParamLimits

0x2763,	// (0x0000d84a) list_single_2heading_msg_pane_g2

0x2776,	// (0x0000d85d) list_single_2heading_msg_pane_g3_ParamLimits

0x2776,	// (0x0000d85d) list_single_2heading_msg_pane_g3

0x2782,	// (0x0000d869) list_single_2heading_msg_pane_g4_ParamLimits

0x2782,	// (0x0000d869) list_single_2heading_msg_pane_g4

0x0003,

0xfcad,	// (0x0001ad94) list_single_2heading_msg_pane_g_ParamLimits

0xfcad,	// (0x0001ad94) list_single_2heading_msg_pane_g

0x279a,	// (0x0000d881) list_single_2heading_msg_pane_t1_ParamLimits

0x279a,	// (0x0000d881) list_single_2heading_msg_pane_t1

0x27c2,	// (0x0000d8a9) list_single_2heading_msg_pane_t2_ParamLimits

0x27c2,	// (0x0000d8a9) list_single_2heading_msg_pane_t2

0x282d,	// (0x0000d914) list_single_2heading_msg_pane_t3_ParamLimits

0x282d,	// (0x0000d914) list_single_2heading_msg_pane_t3

0xc5f9,	// (0x000176e0) list_single_2heading_msg_pane_t4_ParamLimits

0xc5f9,	// (0x000176e0) list_single_2heading_msg_pane_t4

0x0003,

0xfcb6,	// (0x0001ad9d) list_single_2heading_msg_pane_t_ParamLimits

0xfcb6,	// (0x0001ad9d) list_single_2heading_msg_pane_t

0x5cfe,	// (0x00010de5) title_pane_g4_ParamLimits

0x5cfe,	// (0x00010de5) title_pane_g4

0x44fc,	// (0x0000f5e3) title_pane_stacon_g3_ParamLimits

0x44fc,	// (0x0000f5e3) title_pane_stacon_g3

0xc00a,	// (0x000170f1) list_single_2graphic_im_pane_g4_ParamLimits

0xc00a,	// (0x000170f1) list_single_2graphic_im_pane_g4

0x99be,	// (0x00014aa5) popup_side_volume_key_window_cp

0xa2cd,	// (0x000153b4) main_idle_act2_pane_t1

0x4b24,	// (0x0000fc0b) toolbar_button_pane_g10

0x064d,	// (0x0000b734) popup_toolbar_window_cp1

0xac17,	// (0x00015cfe) clock_nsta_pane_cp_t1

0xac17,	// (0x00015cfe) clock_nsta_pane_cp_t2

0x0001,

0xfab8,	// (0x0001ab9f) clock_nsta_pane_cp_t

0x46ee,	// (0x0000f7d5) navi_navi_volume_pane_cp2_ParamLimits

0x46fd,	// (0x0000f7e4) popup_side_volume_key_window_g1_ParamLimits

0x4709,	// (0x0000f7f0) popup_side_volume_key_window_g2_ParamLimits

0x4718,	// (0x0000f7ff) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0001a80b) popup_side_volume_key_window_g_ParamLimits

0x4fe1,	// (0x000100c8) fep_hwr_aid_pane

0x5088,	// (0x0001016f) bg_fep_hwr_top_pane_g4_ParamLimits

0xb27a,	// (0x00016361) fep_hwr_top_pane_g1_ParamLimits

0xb28c,	// (0x00016373) fep_hwr_top_pane_g2_ParamLimits

0x50a8,	// (0x0001018f) fep_hwr_top_pane_g3_ParamLimits

0xfb0d,	// (0x0001abf4) fep_hwr_top_pane_g_ParamLimits

0x50bd,	// (0x000101a4) fep_hwr_top_text_pane_ParamLimits

0x977f,	// (0x00014866) aid_touch_tab_arrow_arrow_2

0x9788,	// (0x0001486f) aid_touch_tab_arrow_left_2

0x4ff5,	// (0x000100dc) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x502c,	// (0x00010113) fep_hwr_prediction_pane

0xb3f3,	// (0x000164da) fep_vkb_prediction_pane

0x24cb,	// (0x0000d5b2) fep_vkb_side_pane_g3_ParamLimits

0x24cb,	// (0x0000d5b2) fep_vkb_side_pane_g3

0x5238,	// (0x0001031f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x52a4,	// (0x0001038b) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x52b1,	// (0x00010398) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbc,	// (0x0001aca3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x53e0,	// (0x000104c7) fep_hwr_prediction_pane_g1

0x53ea,	// (0x000104d1) fep_hwr_prediction_pane_g2

0xb272,	// (0x00016359) fep_hwr_prediction_pane_g3

0x53f2,	// (0x000104d9) fep_hwr_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0001ada6) fep_hwr_prediction_pane_g

0xc61e,	// (0x00017705) fep_vkb_prediction_pane_g1

0xc628,	// (0x0001770f) fep_vkb_prediction_pane_g2

0xc630,	// (0x00017717) fep_vkb_prediction_pane_g3

0xc638,	// (0x0001771f) fep_vkb_prediction_pane_g4

0x0003,

0xfcc8,	// (0x0001adaf) fep_vkb_prediction_pane_g

0x4e10,	// (0x0000fef7) slider_set_pane_g3

0x4e24,	// (0x0000ff0b) slider_set_pane_g4

0x4e3c,	// (0x0000ff23) slider_set_pane_g5

0x4e10,	// (0x0000fef7) slider_set_pane_g6

0x4e52,	// (0x0000ff39) slider_set_pane_g7

0x9e4f,	// (0x00014f36) slider_form_pane_g3

0x9e58,	// (0x00014f3f) slider_form_pane_g4

0x9e60,	// (0x00014f47) slider_form_pane_g5

0x9e4f,	// (0x00014f36) slider_form_pane_g6

0x20a2,	// (0x0000d189) slider_form_pane_g7

0xa5a1,	// (0x00015688) slider_set_pane_vc_g3

0xa5aa,	// (0x00015691) slider_set_pane_vc_g4

0xa5b3,	// (0x0001569a) slider_set_pane_vc_g5

0xa5a1,	// (0x00015688) slider_set_pane_vc_g6

0xa5bc,	// (0x000156a3) slider_set_pane_vc_g7

0xa5a1,	// (0x00015688) slider_form_pane_vc_g1

0xa5aa,	// (0x00015691) slider_form_pane_vc_g2

0xa5b3,	// (0x0001569a) slider_form_pane_vc_g3

0xa5a1,	// (0x00015688) slider_form_pane_vc_g4

0xa91d,	// (0x00015a04) slider_form_pane_vc_g5

0x0004,

0xfa91,	// (0x0001ab78) slider_form_pane_vc_g

0x5cb6,	// (0x00010d9d) main_idle_act3_pane

0xc640,	// (0x00017727) ai3_links_pane

0x289b,	// (0x0000d982) popup_ai3_data_window_ParamLimits

0x289b,	// (0x0000d982) popup_ai3_data_window

0x5cb6,	// (0x00010d9d) grid_ai3_links_pane

0x28b3,	// (0x0000d99a) cell_ai3_links_pane_ParamLimits

0x28b3,	// (0x0000d99a) cell_ai3_links_pane

0xc679,	// (0x00017760) bg_popup_sub_pane_cp11

0xc686,	// (0x0001776d) cell_ai3_links_pane_g1

0x5cb6,	// (0x00010d9d) bg_popup_sub_pane_cp12

0xc6ab,	// (0x00017792) heading_ai3_data_pane

0xc6b3,	// (0x0001779a) list_ai3_gene_pane

0xc6bf,	// (0x000177a6) popup_ai3_data_window_g1

0xc6c7,	// (0x000177ae) heading_ai3_data_pane_g1

0xc6cf,	// (0x000177b6) heading_ai3_data_pane_t1

0xc6dd,	// (0x000177c4) list_double_ai3_gene_pane_ParamLimits

0xc6dd,	// (0x000177c4) list_double_ai3_gene_pane

0xc6ea,	// (0x000177d1) list_single_ai3_gene_pane_ParamLimits

0xc6ea,	// (0x000177d1) list_single_ai3_gene_pane

0xb1cf,	// (0x000162b6) list_highlight_pane_cp7_ParamLimits

0xb1cf,	// (0x000162b6) list_highlight_pane_cp7

0xc6f7,	// (0x000177de) list_single_a13_gene_pane_t1_ParamLimits

0xc6f7,	// (0x000177de) list_single_a13_gene_pane_t1

0xc70e,	// (0x000177f5) list_single_ai3_gene_pane_g1

0xc717,	// (0x000177fe) list_single_ai3_gene_pane_g2

0x0001,

0xfcd1,	// (0x0001adb8) list_single_ai3_gene_pane_g

0xc71f,	// (0x00017806) list_double_ai3_gene_pane_g1_ParamLimits

0xc71f,	// (0x00017806) list_double_ai3_gene_pane_g1

0xc72b,	// (0x00017812) list_double_ai3_gene_pane_t1_ParamLimits

0xc72b,	// (0x00017812) list_double_ai3_gene_pane_t1

0xc747,	// (0x0001782e) list_double_ai3_gene_pane_t2_ParamLimits

0xc747,	// (0x0001782e) list_double_ai3_gene_pane_t2

0xc75c,	// (0x00017843) list_double_ai3_gene_pane_t3_ParamLimits

0xc75c,	// (0x00017843) list_double_ai3_gene_pane_t3

0x0002,

0xfcd6,	// (0x0001adbd) list_double_ai3_gene_pane_t_ParamLimits

0xfcd6,	// (0x0001adbd) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc516,	// (0x000175fd) aid_size_min_col_2

0x2741,	// (0x0000d828) aid_size_min_msg_ParamLimits

0x2741,	// (0x0000d828) aid_size_min_msg

0x24df,	// (0x0000d5c6) fep_vkb_top_text_pane_g2_ParamLimits

0x24df,	// (0x0000d5c6) fep_vkb_top_text_pane_g2

0x0001,

0xfb3d,	// (0x0001ac24) fep_vkb_top_text_pane_g_ParamLimits

0xfb3d,	// (0x0001ac24) fep_vkb_top_text_pane_g

0x5cb6,	// (0x00010d9d) main_hc_apps_shell_pane

0xc779,	// (0x00017860) grid_hc_apps_pane_ParamLimits

0xc779,	// (0x00017860) grid_hc_apps_pane

0xc788,	// (0x0001786f) list_hc_apps_pane

0xc790,	// (0x00017877) scroll_pane_cp37_ParamLimits

0xc790,	// (0x00017877) scroll_pane_cp37

0x28cd,	// (0x0000d9b4) cell_hc_apps_pane_ParamLimits

0x28cd,	// (0x0000d9b4) cell_hc_apps_pane

0x298d,	// (0x0000da74) cell_hc_apps_pane_g1_ParamLimits

0x298d,	// (0x0000da74) cell_hc_apps_pane_g1

0xc87d,	// (0x00017964) cell_hc_apps_pane_g2_ParamLimits

0xc87d,	// (0x00017964) cell_hc_apps_pane_g2

0xc899,	// (0x00017980) cell_hc_apps_pane_g3_ParamLimits

0xc899,	// (0x00017980) cell_hc_apps_pane_g3

0x0002,

0xfcdd,	// (0x0001adc4) cell_hc_apps_pane_g_ParamLimits

0xfcdd,	// (0x0001adc4) cell_hc_apps_pane_g

0x29ba,	// (0x0000daa1) cell_hc_apps_pane_t1_ParamLimits

0x29ba,	// (0x0000daa1) cell_hc_apps_pane_t1

0x604d,	// (0x00011134) grid_highlight_pane_cp10_ParamLimits

0x604d,	// (0x00011134) grid_highlight_pane_cp10

0x29f8,	// (0x0000dadf) list_single_hc_apps_pane_ParamLimits

0x29f8,	// (0x0000dadf) list_single_hc_apps_pane

0xc96e,	// (0x00017a55) list_single_hc_apps_pane_g1

0xc987,	// (0x00017a6e) list_single_hc_apps_pane_g2

0x0001,

0xfce4,	// (0x0001adcb) list_single_hc_apps_pane_g

0xc9a0,	// (0x00017a87) list_single_hc_apps_pane_g2_copy1

0xc9bc,	// (0x00017aa3) list_single_hc_apps_pane_t1

0x5daa,	// (0x00010e91) bg_set_opt_pane_cp_ParamLimits

0x4427,	// (0x0000f50e) setting_slider_pane_t1_ParamLimits

0x4440,	// (0x0000f527) setting_slider_pane_t2_ParamLimits

0x4459,	// (0x0000f540) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0001a661) setting_slider_pane_t_ParamLimits

0x4470,	// (0x0000f557) slider_set_pane_ParamLimits

0x4996,	// (0x0000fa7d) control_pane_g5_ParamLimits

0x4996,	// (0x0000fa7d) control_pane_g5

0x9cac,	// (0x00014d93) slider_set_pane_g1_ParamLimits

0x4e04,	// (0x0000feeb) slider_set_pane_g2_ParamLimits

0x4e10,	// (0x0000fef7) slider_set_pane_g3_ParamLimits

0x4e24,	// (0x0000ff0b) slider_set_pane_g4_ParamLimits

0x4e3c,	// (0x0000ff23) slider_set_pane_g5_ParamLimits

0x4e10,	// (0x0000fef7) slider_set_pane_g6_ParamLimits

0x4e52,	// (0x0000ff39) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0001aa52) slider_set_pane_g_ParamLimits

0x784c,	// (0x00012933) navi_icon_text_pane_ParamLimits

0x16e3,	// (0x0000c7ca) aid_fill_nsta_2_ParamLimits

0x1717,	// (0x0000c7fe) aid_touch_tab_arrow_left_ParamLimits

0x172d,	// (0x0000c814) aid_touch_tab_arrow_right_ParamLimits

0x17c8,	// (0x0000c8af) clock_nsta_pane_ParamLimits

0x1e38,	// (0x0000cf1f) navi_icon_pane_g1_ParamLimits

0x1e44,	// (0x0000cf2b) navi_text_pane_t1_ParamLimits

0x2329,	// (0x0000d410) navi_icon_text_pane_g1_ParamLimits

0x2335,	// (0x0000d41c) navi_icon_text_pane_t1_ParamLimits

0xc96e,	// (0x00017a55) list_single_hc_apps_pane_g1_ParamLimits

0xc987,	// (0x00017a6e) list_single_hc_apps_pane_g2_ParamLimits

0xfce4,	// (0x0001adcb) list_single_hc_apps_pane_g_ParamLimits

0xc9a0,	// (0x00017a87) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc9bc,	// (0x00017aa3) list_single_hc_apps_pane_t1_ParamLimits

0xdf6b,	// (0x00019052) popup_toolbar2_fixed_window_ParamLimits

0xdf6b,	// (0x00019052) popup_toolbar2_fixed_window

0x164c,	// (0x0000c733) popup_toolbar2_float_window

0x5cb6,	// (0x00010d9d) bg_popup_sub_pane_cp27

0xc9ea,	// (0x00017ad1) grid_toolbar2_float_pane

0x5cb6,	// (0x00010d9d) bg_popup_sub_pane_cp26

0xc9ea,	// (0x00017ad1) grid_toolbar2_fixed_pane

0x2a2b,	// (0x0000db12) cell_toolbar2_fixed_pane_ParamLimits

0x2a2b,	// (0x0000db12) cell_toolbar2_fixed_pane

0x2a46,	// (0x0000db2d) cell_toolbar2_fixed_pane_g1

0xca0c,	// (0x00017af3) toolbar2_fixed_button_pane

0x8806,	// (0x000138ed) toolbar2_fixed_button_pane_g1

0x8816,	// (0x000138fd) toolbar2_fixed_button_pane_g2

0x880e,	// (0x000138f5) toolbar2_fixed_button_pane_g3

0x8826,	// (0x0001390d) toolbar2_fixed_button_pane_g4

0x881e,	// (0x00013905) toolbar2_fixed_button_pane_g5

0x882e,	// (0x00013915) toolbar2_fixed_button_pane_g6

0x8836,	// (0x0001391d) toolbar2_fixed_button_pane_g7

0x8846,	// (0x0001392d) toolbar2_fixed_button_pane_g8

0x883e,	// (0x00013925) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x0001a954) toolbar2_fixed_button_pane_g

0xca14,	// (0x00017afb) cell_toolbar2_float_pane_ParamLimits

0xca14,	// (0x00017afb) cell_toolbar2_float_pane

0xca25,	// (0x00017b0c) cell_toolbar2_float_pane_g1

0xca0c,	// (0x00017af3) toolbar2_fixed_button_pane_cp

0x2492,	// (0x0000d579) fep_vkb_accented_list_pane_ParamLimits

0x2492,	// (0x0000d579) fep_vkb_accented_list_pane

0x5218,	// (0x000102ff) bg_popup_fep_shadow_pane_g9

0x79ce,	// (0x00012ab5) bg_popup_fep_shadow_pane_cp3

0x6e5d,	// (0x00011f44) list_accented_list_pane

0xca2e,	// (0x00017b15) list_single_accented_list_pane_ParamLimits

0xca2e,	// (0x00017b15) list_single_accented_list_pane

0x79ce,	// (0x00012ab5) list_highlight_pane_cp10

0xca3f,	// (0x00017b26) list_single_accented_list_pane_t1

0x1576,	// (0x0000c65d) popup_slider_window_ParamLimits

0x1576,	// (0x0000c65d) popup_slider_window

0xc50d,	// (0x000175f4) aid_indentation_list_msg

0x2b3f,	// (0x0000dc26) bg_popup_window_pane_cp19

0xcb63,	// (0x00017c4a) popup_slider_window_g1

0xcb7f,	// (0x00017c66) popup_slider_window_g2

0xcb9b,	// (0x00017c82) popup_slider_window_g3

0x0005,

0xfce9,	// (0x0001add0) popup_slider_window_g

0xcbf7,	// (0x00017cde) popup_slider_window_t1

0xcc6b,	// (0x00017d52) small_volume_slider_vertical_pane

0xb20a,	// (0x000162f1) small_volume_slider_vertical_pane_g1

0xb20a,	// (0x000162f1) small_volume_slider_vertical_pane_g2

0xcc87,	// (0x00017d6e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfb,	// (0x0001ade2) small_volume_slider_vertical_pane_g

0xded9,	// (0x00018fc0) area_side_right_pane_ParamLimits

0xded9,	// (0x00018fc0) area_side_right_pane

0xe32b,	// (0x00019412) aid_size_side_button_ParamLimits

0xe32b,	// (0x00019412) aid_size_side_button

0xe344,	// (0x0001942b) grid_sctrl_middle_pane_ParamLimits

0xe344,	// (0x0001942b) grid_sctrl_middle_pane

0x542e,	// (0x00010515) sctrl_sk_bottom_pane

0x543f,	// (0x00010526) sctrl_sk_top_pane

0x5451,	// (0x00010538) aid_touch_sctrl_top

0x545e,	// (0x00010545) bg_sctrl_sk_pane_ParamLimits

0x545e,	// (0x00010545) bg_sctrl_sk_pane

0x546c,	// (0x00010553) sctrl_sk_top_pane_g1

0x5479,	// (0x00010560) sctrl_sk_top_pane_t1

0x5451,	// (0x00010538) aid_touch_sctrl_bottom

0x545e,	// (0x00010545) bg_sctrl_sk_pane_cp_ParamLimits

0x545e,	// (0x00010545) bg_sctrl_sk_pane_cp

0x5494,	// (0x0001057b) sctrl_sk_bottom_pane_g1

0x5479,	// (0x00010560) sctrl_sk_bottom_pane_t1

0xe35e,	// (0x00019445) cell_sctrl_middle_pane_ParamLimits

0xe35e,	// (0x00019445) cell_sctrl_middle_pane

0xe36f,	// (0x00019456) aid_touch_sctrl_middle_ParamLimits

0xe36f,	// (0x00019456) aid_touch_sctrl_middle

0xe37c,	// (0x00019463) bg_sctrl_middle_pane_ParamLimits

0xe37c,	// (0x00019463) bg_sctrl_middle_pane

0x5b01,	// (0x00010be8) cell_sctrl_middle_pane_g1_ParamLimits

0x5b01,	// (0x00010be8) cell_sctrl_middle_pane_g1

0xe38a,	// (0x00019471) cell_sctrl_middle_pane_g2_ParamLimits

0xe38a,	// (0x00019471) cell_sctrl_middle_pane_g2

0x0001,

0xfd07,	// (0x0001adee) cell_sctrl_middle_pane_g_ParamLimits

0xfd07,	// (0x0001adee) cell_sctrl_middle_pane_g

0x8806,	// (0x000138ed) bg_sctrl_middle_pane_g1

0x880e,	// (0x000138f5) bg_sctrl_middle_pane_g2

0x8816,	// (0x000138fd) bg_sctrl_middle_pane_g3

0x881e,	// (0x00013905) bg_sctrl_middle_pane_g4

0x8826,	// (0x0001390d) bg_sctrl_middle_pane_g5

0x882e,	// (0x00013915) bg_sctrl_middle_pane_g6

0x8836,	// (0x0001391d) bg_sctrl_middle_pane_g7

0x883e,	// (0x00013925) bg_sctrl_middle_pane_g8

0x0007,

0xfd0c,	// (0x0001adf3) bg_sctrl_middle_pane_g

0x8846,	// (0x0001392d) bg_sctrl_middle_pane_g8_copy1

0x8806,	// (0x000138ed) bg_sctrl_sk_pane_g1

0x8816,	// (0x000138fd) bg_sctrl_sk_pane_g2

0x880e,	// (0x000138f5) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x0001a954) bg_sctrl_sk_pane_g

0x6546,	// (0x0001162d) aid_size_touch_scroll_bar

0x8826,	// (0x0001390d) bg_sctrl_sk_pane_g4

0x881e,	// (0x00013905) bg_sctrl_sk_pane_g5

0x882e,	// (0x00013915) bg_sctrl_sk_pane_g6

0x8836,	// (0x0001391d) bg_sctrl_sk_pane_g7

0x8846,	// (0x0001392d) bg_sctrl_sk_pane_g8

0x883e,	// (0x00013925) bg_sctrl_sk_pane_g9

0x7dfc,	// (0x00012ee3) popup_fep_china_hwr2_fs_candidate_window

0x10b0,	// (0x0000c197) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x10b0,	// (0x0000c197) popup_fep_china_hwr2_fs_control_window

0x5238,	// (0x0001031f) sctrl_sk_top_pane_g2

0x0001,

0xfd02,	// (0x0001ade9) sctrl_sk_top_pane_g

0x2c62,	// (0x0000dd49) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2c62,	// (0x0000dd49) aid_fep_china_hwr2_fs_cell

0x2c76,	// (0x0000dd5d) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2c76,	// (0x0000dd5d) bg_popup_fep_shadow_pane_cp4

0x2c8d,	// (0x0000dd74) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2c8d,	// (0x0000dd74) bg_popup_fep_shadow_pane_cp5

0x2c9f,	// (0x0000dd86) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2c9f,	// (0x0000dd86) popup_fep_china_hwr2_fs_control_bar_grid

0x2cb3,	// (0x0000dd9a) popup_fep_china_hwr2_fs_control_funtion_grid

0xcce3,	// (0x00017dca) aid_fep_china_hwr2_fs_candi_cell

0x5cb6,	// (0x00010d9d) bg_popup_fep_shadow_pane_cp6

0xcced,	// (0x00017dd4) popup_fep_china_hwr2_fs_candidate_grid

0x2cbb,	// (0x0000dda2) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2cbb,	// (0x0000dda2) cell_fep_china_hwr2_fs_funtion_grid

0xb20a,	// (0x000162f1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcd0f,	// (0x00017df6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcd0f,	// (0x00017df6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcd1d,	// (0x00017e04) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcd1d,	// (0x00017e04) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1d,	// (0x0001ae04) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1d,	// (0x0001ae04) cell_fep_china_hwr2_fs_funtion_grid_g

0x2cd3,	// (0x0000ddba) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2cd3,	// (0x0000ddba) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2ce8,	// (0x0000ddcf) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2ce8,	// (0x0000ddcf) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd22,	// (0x0001ae09) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd22,	// (0x0001ae09) cell_fep_china_hwr2_fs_funtion_grid_t

0xcd64,	// (0x00017e4b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcd6c,	// (0x00017e53) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcd74,	// (0x00017e5b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd27,	// (0x0001ae0e) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcd7c,	// (0x00017e63) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcd7c,	// (0x00017e63) cell_fep_china_hwr2_fs_candidate_grid

0xcd95,	// (0x00017e7c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcd9d,	// (0x00017e84) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb20a,	// (0x000162f1) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb20a,	// (0x000162f1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb42,	// (0x0001ac29) cell_fep_china_hwr2_fs_candidate_grid_g

0xcda5,	// (0x00017e8c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x83e3,	// (0x000134ca) clock_nsta_pane_cp_24_ParamLimits

0x83e3,	// (0x000134ca) clock_nsta_pane_cp_24

0x8461,	// (0x00013548) indicator_nsta_pane_cp_24_ParamLimits

0x8461,	// (0x00013548) indicator_nsta_pane_cp_24

0x95d7,	// (0x000146be) heading_pane_g1

0x0001,

0xf8d2,	// (0x0001a9b9) heading_pane_g

0xa114,	// (0x000151fb) grid_sct_catagory_button_pane

0xa146,	// (0x0001522d) scroll_pane_cp5_ParamLimits

0xad7d,	// (0x00015e64) button_value_adjust_pane_cp5_ParamLimits

0xad7d,	// (0x00015e64) button_value_adjust_pane_cp5

0xae75,	// (0x00015f5c) form2_midp_time_pane_ParamLimits

0xcdb3,	// (0x00017e9a) cell_sct_catagory_button_pane_ParamLimits

0xcdb3,	// (0x00017e9a) cell_sct_catagory_button_pane

0xb1cf,	// (0x000162b6) bg_button_pane_cp01_ParamLimits

0xb1cf,	// (0x000162b6) bg_button_pane_cp01

0xb20a,	// (0x000162f1) cell_sct_catagory_button_pane_g1

0x15ef,	// (0x0000c6d6) popup_tb_extension_window

0x2d04,	// (0x0000ddeb) aid_size_cell_ext_ParamLimits

0x2d04,	// (0x0000ddeb) aid_size_cell_ext

0x6388,	// (0x0001146f) bg_tb_trans_pane_cp1_ParamLimits

0x6388,	// (0x0001146f) bg_tb_trans_pane_cp1

0x2d2a,	// (0x0000de11) grid_tb_ext_pane_ParamLimits

0x2d2a,	// (0x0000de11) grid_tb_ext_pane

0x2d6a,	// (0x0000de51) cell_tb_ext_pane_ParamLimits

0x2d6a,	// (0x0000de51) cell_tb_ext_pane

0x2d92,	// (0x0000de79) cell_tb_ext_pane_g1_ParamLimits

0x2d92,	// (0x0000de79) cell_tb_ext_pane_g1

0xce4b,	// (0x00017f32) cell_tb_ext_pane_t1

0x604d,	// (0x00011134) list_highlight_pane_cp11_ParamLimits

0x604d,	// (0x00011134) list_highlight_pane_cp11

0x4360,	// (0x0000f447) popup_uni_indicator_window_ParamLimits

0x4360,	// (0x0000f447) popup_uni_indicator_window

0x6b83,	// (0x00011c6a) bg_popup_sub_pane_cp14

0xce66,	// (0x00017f4d) list_uniindi_pane

0xce72,	// (0x00017f59) uniindi_top_pane

0x604d,	// (0x00011134) bg_uniindi_top_pane

0xce91,	// (0x00017f78) uniindi_top_pane_g1

0xcea7,	// (0x00017f8e) uniindi_top_pane_g2

0x0003,

0xfd2e,	// (0x0001ae15) uniindi_top_pane_g

0xced1,	// (0x00017fb8) uniindi_top_pane_t1

0xcefb,	// (0x00017fe2) list_single_uniindi_pane_ParamLimits

0xcefb,	// (0x00017fe2) list_single_uniindi_pane

0xb20a,	// (0x000162f1) bg_uniindi_top_pane_g1

0xcf0d,	// (0x00017ff4) list_single_uniindi_pane_g1

0xcf20,	// (0x00018007) list_single_uniindi_pane_t1

0x41e4,	// (0x0000f2cb) control_bg_pane

0xcf45,	// (0x0001802c) bg_sctrl_sk_pane_cp1

0xcf4e,	// (0x00018035) bg_sctrl_sk_pane_cp2

0xcf57,	// (0x0001803e) control_bg_pane_g1

0xcf60,	// (0x00018047) control_bg_pane_g2

0x0001,

0xfd37,	// (0x0001ae1e) control_bg_pane_g

0xaba9,	// (0x00015c90) cell_indicator_nsta_pane_g1_ParamLimits

0x2290,	// (0x0000d377) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa6,	// (0x0001ab8d) cell_indicator_nsta_pane_g_ParamLimits

0xaef9,	// (0x00015fe0) form2_midp_time_pane_t1_ParamLimits

0xb83a,	// (0x00016921) main_idle_act4_pane_ParamLimits

0xb83a,	// (0x00016921) main_idle_act4_pane

0x15ef,	// (0x0000c6d6) popup_tb_extension_window_ParamLimits

0x2d51,	// (0x0000de38) tb_ext_find_pane_ParamLimits

0x2d51,	// (0x0000de38) tb_ext_find_pane

0xcf69,	// (0x00018050) ai_gene_pane_1_cp1

0x7b17,	// (0x00012bfe) ai_gene_pane_2_cp1

0xcf71,	// (0x00018058) list_single_idle_plugin_calendar_pane

0xcf7a,	// (0x00018061) list_single_idle_plugin_notification_pane

0xcf83,	// (0x0001806a) list_single_idle_plugin_player_pane

0x2daf,	// (0x0000de96) list_single_idle_plugin_shortcut_pane_ParamLimits

0x2daf,	// (0x0000de96) list_single_idle_plugin_shortcut_pane

0x2dd7,	// (0x0000debe) main_idle_act4_pane_t1

0x2ded,	// (0x0000ded4) main_idle_act4_pane_t2

0x0001,

0xfd3c,	// (0x0001ae23) main_idle_act4_pane_t

0x2e05,	// (0x0000deec) middle_sk_idle_act4_pane_ParamLimits

0x2e05,	// (0x0000deec) middle_sk_idle_act4_pane

0x2e21,	// (0x0000df08) popup_clock_digital_analogue_window_cp2

0x2e48,	// (0x0000df2f) shortcut_wheel_idle_act4_pane_ParamLimits

0x2e48,	// (0x0000df2f) shortcut_wheel_idle_act4_pane

0xb20a,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g1

0xb20a,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g2

0xb20a,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g3

0xb20a,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g4

0xb20a,	// (0x000162f1) shortcut_wheel_idle_act4_pane_g5

0xd016,	// (0x000180fd) shortcut_wheel_idle_act4_pane_g6

0xd01e,	// (0x00018105) shortcut_wheel_idle_act4_pane_g7

0xd026,	// (0x0001810d) shortcut_wheel_idle_act4_pane_g8

0xd02e,	// (0x00018115) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd41,	// (0x0001ae28) shortcut_wheel_idle_act4_pane_g

0xe774,	// (0x0001985b) middle_sk_idle_act4_pane_g1_ParamLimits

0xe774,	// (0x0001985b) middle_sk_idle_act4_pane_g1

0x2ec5,	// (0x0000dfac) middle_sk_idle_act4_pane_g2_ParamLimits

0x2ec5,	// (0x0000dfac) middle_sk_idle_act4_pane_g2

0x0001,

0xfd64,	// (0x0001ae4b) middle_sk_idle_act4_pane_g_ParamLimits

0xfd64,	// (0x0001ae4b) middle_sk_idle_act4_pane_g

0x2edd,	// (0x0000dfc4) middle_sk_idle_act4_pane_t1_ParamLimits

0x2edd,	// (0x0000dfc4) middle_sk_idle_act4_pane_t1

0x2f0c,	// (0x0000dff3) grid_ai_shortcut_pane_ParamLimits

0x2f0c,	// (0x0000dff3) grid_ai_shortcut_pane

0x2f29,	// (0x0000e010) list_highlight_pane_cp16_ParamLimits

0x2f29,	// (0x0000e010) list_highlight_pane_cp16

0x2f36,	// (0x0000e01d) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x2f36,	// (0x0000e01d) list_single_idle_plugin_shortcut_pane_g1

0x2f42,	// (0x0000e029) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2f42,	// (0x0000e029) list_single_idle_plugin_shortcut_pane_g2

0x2f5e,	// (0x0000e045) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2f5e,	// (0x0000e045) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd69,	// (0x0001ae50) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd69,	// (0x0001ae50) list_single_idle_plugin_shortcut_pane_g

0x2f73,	// (0x0000e05a) cell_ai_shortcut_pane_ParamLimits

0x2f73,	// (0x0000e05a) cell_ai_shortcut_pane

0x2f89,	// (0x0000e070) cell_ai_shortcut_pane_g1_ParamLimits

0x2f89,	// (0x0000e070) cell_ai_shortcut_pane_g1

0xcf69,	// (0x00018050) ai_gene_pane_1_cp2

0xd15b,	// (0x00018242) ai_gene_pane_2_cp2

0xd163,	// (0x0001824a) list_highlight_pane_cp15

0xd16c,	// (0x00018253) list_single_idle_plugin_calendar_pane_g1

0xd163,	// (0x0001824a) list_highlight_pane_cp17

0xd174,	// (0x0001825b) list_single_idle_plugin_calendar_pane_g1_copy1

0xd17c,	// (0x00018263) list_single_idle_plugin_player_pane_g1

0xa36d,	// (0x00015454) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd70,	// (0x0001ae57) list_single_idle_plugin_player_pane_g

0xd184,	// (0x0001826b) list_single_idle_plugin_player_pane_t1

0xd192,	// (0x00018279) list_single_idle_plugin_player_pane_t2

0xd1a0,	// (0x00018287) list_single_idle_plugin_player_pane_t3

0xd1ae,	// (0x00018295) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd75,	// (0x0001ae5c) list_single_idle_plugin_player_pane_t

0xd1bc,	// (0x000182a3) wait_bar_pane_cp15

0xd1c4,	// (0x000182ab) grid_ai_notification_pane

0xa36d,	// (0x00015454) list_single_idle_plugin_notification_pane_g1

0x2fab,	// (0x0000e092) cell_ai_notification_pane_ParamLimits

0x2fab,	// (0x0000e092) cell_ai_notification_pane

0xd1da,	// (0x000182c1) cell_ai_notification_pane_g1

0xd1e2,	// (0x000182c9) cell_ai_notification_pane_t1

0x2fb8,	// (0x0000e09f) tb_ext_find_button_pane

0x2fc0,	// (0x0000e0a7) tb_ext_find_pane_g1

0x2fc8,	// (0x0000e0af) tb_ext_find_pane_t1

0x7361,	// (0x00012448) tb_ext_find_button_pane_g1

0xd20e,	// (0x000182f5) tb_ext_find_button_pane_g2

0x0001,

0xfd7e,	// (0x0001ae65) tb_ext_find_button_pane_g

0x2dd7,	// (0x0000debe) main_idle_act4_pane_t1_ParamLimits

0x2ded,	// (0x0000ded4) main_idle_act4_pane_t2_ParamLimits

0xfd3c,	// (0x0001ae23) main_idle_act4_pane_t_ParamLimits

0x2e21,	// (0x0000df08) popup_clock_digital_analogue_window_cp2_ParamLimits

0x2e38,	// (0x0000df1f) sat_plugin_idle_act4_pane_ParamLimits

0x2e38,	// (0x0000df1f) sat_plugin_idle_act4_pane

0x2fd6,	// (0x0000e0bd) sat_plugin_idle_act4_pane_t1_ParamLimits

0x2fd6,	// (0x0000e0bd) sat_plugin_idle_act4_pane_t1

0x2fee,	// (0x0000e0d5) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2fee,	// (0x0000e0d5) sat_plugin_idle_act4_pane_t2

0x3006,	// (0x0000e0ed) sat_plugin_idle_act4_pane_t3_ParamLimits

0x3006,	// (0x0000e0ed) sat_plugin_idle_act4_pane_t3

0x301e,	// (0x0000e105) sat_plugin_idle_act4_pane_t4_ParamLimits

0x301e,	// (0x0000e105) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd83,	// (0x0001ae6a) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd83,	// (0x0001ae6a) sat_plugin_idle_act4_pane_t

0x42a9,	// (0x0000f390) popup_battery_window_ParamLimits

0x42a9,	// (0x0000f390) popup_battery_window

0x604d,	// (0x00011134) bg_popup_sub_pane_cp25_ParamLimits

0x604d,	// (0x00011134) bg_popup_sub_pane_cp25

0xd263,	// (0x0001834a) popup_battery_window_g1_ParamLimits

0xd263,	// (0x0001834a) popup_battery_window_g1

0xd26f,	// (0x00018356) popup_battery_window_t1_ParamLimits

0xd26f,	// (0x00018356) popup_battery_window_t1

0xd281,	// (0x00018368) popup_battery_window_t2_ParamLimits

0xd281,	// (0x00018368) popup_battery_window_t2

0x0001,

0xfd8c,	// (0x0001ae73) popup_battery_window_t_ParamLimits

0xfd8c,	// (0x0001ae73) popup_battery_window_t

0x0deb,	// (0x0000bed2) midp_canvas_pane_ParamLimits

0x0e48,	// (0x0000bf2f) midp_keypad_pane_ParamLimits

0x0e48,	// (0x0000bf2f) midp_keypad_pane

0x7d54,	// (0x00012e3b) main_midp_pane_ParamLimits

0xac35,	// (0x00015d1c) signal_pane_g2_cp_ParamLimits

0x3036,	// (0x0000e11d) aid_size_cell_midp_keypad_ParamLimits

0x3036,	// (0x0000e11d) aid_size_cell_midp_keypad

0x3054,	// (0x0000e13b) midp_keyp_game_grid_pane_ParamLimits

0x3054,	// (0x0000e13b) midp_keyp_game_grid_pane

0x307b,	// (0x0000e162) midp_keyp_rocker_pane_ParamLimits

0x307b,	// (0x0000e162) midp_keyp_rocker_pane

0x30d4,	// (0x0000e1bb) midp_keyp_sk_left_pane_ParamLimits

0x30d4,	// (0x0000e1bb) midp_keyp_sk_left_pane

0x3128,	// (0x0000e20f) midp_keyp_sk_right_pane_ParamLimits

0x3128,	// (0x0000e20f) midp_keyp_sk_right_pane

0x5cb6,	// (0x00010d9d) bg_button_pane_cp03

0x317c,	// (0x0000e263) midp_keyp_sk_left_pane_g1

0x5cb6,	// (0x00010d9d) bg_button_pane_cp04

0x317c,	// (0x0000e263) midp_keyp_sk_right_pane_g1

0xb20a,	// (0x000162f1) midp_keyp_rocker_pane_g1

0x3185,	// (0x0000e26c) keyp_game_cell_pane_ParamLimits

0x3185,	// (0x0000e26c) keyp_game_cell_pane

0x5cb6,	// (0x00010d9d) bg_button_pane_cp02

0x31a9,	// (0x0000e290) keyp_game_cell_pane_g1

0xdf1b,	// (0x00019002) popup_fep_vkb2_window_ParamLimits

0xdf1b,	// (0x00019002) popup_fep_vkb2_window

0xe396,	// (0x0001947d) aid_size_cell_vkb2_ParamLimits

0xe396,	// (0x0001947d) aid_size_cell_vkb2

0xe3cc,	// (0x000194b3) popup_fep_vkb2_window_g1_ParamLimits

0xe3cc,	// (0x000194b3) popup_fep_vkb2_window_g1

0xe413,	// (0x000194fa) vkb2_area_bottom_pane_ParamLimits

0xe413,	// (0x000194fa) vkb2_area_bottom_pane

0xe467,	// (0x0001954e) vkb2_area_keypad_pane_ParamLimits

0xe467,	// (0x0001954e) vkb2_area_keypad_pane

0xe4af,	// (0x00019596) vkb2_area_top_pane_ParamLimits

0xe4af,	// (0x00019596) vkb2_area_top_pane

0xe535,	// (0x0001961c) vkb2_top_entry_pane_ParamLimits

0xe535,	// (0x0001961c) vkb2_top_entry_pane

0xe562,	// (0x00019649) vkb2_top_grid_left_pane_ParamLimits

0xe562,	// (0x00019649) vkb2_top_grid_left_pane

0xe582,	// (0x00019669) vkb2_top_grid_right_pane_ParamLimits

0xe582,	// (0x00019669) vkb2_top_grid_right_pane

0x56fc,	// (0x000107e3) vkb2_cell_keypad_pane_ParamLimits

0x56fc,	// (0x000107e3) vkb2_cell_keypad_pane

0xe5c8,	// (0x000196af) vkb2_area_bottom_grid_pane_ParamLimits

0xe5c8,	// (0x000196af) vkb2_area_bottom_grid_pane

0xe5f2,	// (0x000196d9) vkb2_area_bottom_pane_g1_ParamLimits

0xe5f2,	// (0x000196d9) vkb2_area_bottom_pane_g1

0xe618,	// (0x000196ff) vkb2_area_bottom_pane_g2_ParamLimits

0xe618,	// (0x000196ff) vkb2_area_bottom_pane_g2

0xe649,	// (0x00019730) vkb2_area_bottom_pane_g3_ParamLimits

0xe649,	// (0x00019730) vkb2_area_bottom_pane_g3

0x0002,

0xfd91,	// (0x0001ae78) vkb2_area_bottom_pane_g_ParamLimits

0xfd91,	// (0x0001ae78) vkb2_area_bottom_pane_g

0x58a6,	// (0x0001098d) vkb2_top_cell_left_pane_ParamLimits

0x58a6,	// (0x0001098d) vkb2_top_cell_left_pane

0x34cf,	// (0x0000e5b6) vkb2_top_entry_pane_g1_ParamLimits

0x34cf,	// (0x0000e5b6) vkb2_top_entry_pane_g1

0x34dd,	// (0x0000e5c4) vkb2_top_entry_pane_t1_ParamLimits

0x34dd,	// (0x0000e5c4) vkb2_top_entry_pane_t1

0xd432,	// (0x00018519) vkb2_top_entry_pane_t2_ParamLimits

0xd432,	// (0x00018519) vkb2_top_entry_pane_t2

0xd464,	// (0x0001854b) vkb2_top_entry_pane_t3_ParamLimits

0xd464,	// (0x0001854b) vkb2_top_entry_pane_t3

0x0002,

0xfd98,	// (0x0001ae7f) vkb2_top_entry_pane_t_ParamLimits

0xfd98,	// (0x0001ae7f) vkb2_top_entry_pane_t

0xe6b3,	// (0x0001979a) vkb2_top_grid_right_pane_g1_ParamLimits

0xe6b3,	// (0x0001979a) vkb2_top_grid_right_pane_g1

0x5909,	// (0x000109f0) vkb2_top_grid_right_pane_g2_ParamLimits

0x5909,	// (0x000109f0) vkb2_top_grid_right_pane_g2

0x5921,	// (0x00010a08) vkb2_top_grid_right_pane_g3_ParamLimits

0x5921,	// (0x00010a08) vkb2_top_grid_right_pane_g3

0xe6c9,	// (0x000197b0) vkb2_top_grid_right_pane_g4_ParamLimits

0xe6c9,	// (0x000197b0) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9f,	// (0x0001ae86) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9f,	// (0x0001ae86) vkb2_top_grid_right_pane_g

0x594f,	// (0x00010a36) vkb2_top_cell_left_pane_g1

0x5966,	// (0x00010a4d) vkb2_cell_keypad_pane_g1_ParamLimits

0x5966,	// (0x00010a4d) vkb2_cell_keypad_pane_g1

0xe782,	// (0x00019869) vkb2_cell_keypad_pane_t1_ParamLimits

0xe782,	// (0x00019869) vkb2_cell_keypad_pane_t1

0x5974,	// (0x00010a5b) vkb2_cell_bottom_grid_pane_ParamLimits

0x5974,	// (0x00010a5b) vkb2_cell_bottom_grid_pane

0x59ad,	// (0x00010a94) vkb2_cell_bottom_grid_pane_g1

0x2e69,	// (0x0000df50) aid_call2_pane_cp02

0x2e71,	// (0x0000df58) aid_call_pane_cp02

0x2e79,	// (0x0000df60) clock_digital_number_pane_cp10

0x2e81,	// (0x0000df68) clock_digital_number_pane_cp11

0x2e89,	// (0x0000df70) clock_digital_number_pane_cp12

0x2e91,	// (0x0000df78) clock_digital_number_pane_cp13

0x2e99,	// (0x0000df80) clock_digital_separator_pane_cp10

0x7361,	// (0x00012448) popup_clock_digital_analogue_window_cp2_g1

0x7361,	// (0x00012448) popup_clock_digital_analogue_window_cp2_g2

0x2ea1,	// (0x0000df88) popup_clock_digital_analogue_window_cp2_g3

0x7361,	// (0x00012448) popup_clock_digital_analogue_window_cp2_g4

0x2ea1,	// (0x0000df88) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd54,	// (0x0001ae3b) popup_clock_digital_analogue_window_cp2_g

0x2ea9,	// (0x0000df90) popup_clock_digital_analogue_window_cp2_t1

0x2eb7,	// (0x0000df9e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5f,	// (0x0001ae46) popup_clock_digital_analogue_window_cp2_t

0xb20a,	// (0x000162f1) clock_digital_number_pane_cp10_g1

0xb20a,	// (0x000162f1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001ac29) clock_digital_number_pane_cp10_g

0xb20a,	// (0x000162f1) clock_digital_separator_pane_cp10_g1

0xb20a,	// (0x000162f1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb42,	// (0x0001ac29) clock_digital_separator_pane_cp10_g

0xceb3,	// (0x00017f9a) uniindi_top_pane_g3

0xcec4,	// (0x00017fab) uniindi_top_pane_g4

0x5787,	// (0x0001086e) vkb2_row_keypad_pane_ParamLimits

0x5787,	// (0x0001086e) vkb2_row_keypad_pane

0x59cd,	// (0x00010ab4) vkb2_cell_t_keypad_pane_ParamLimits

0x59cd,	// (0x00010ab4) vkb2_cell_t_keypad_pane

0x59dd,	// (0x00010ac4) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x59dd,	// (0x00010ac4) vkb2_cell_t_keypad_pane_cp08

0x59f0,	// (0x00010ad7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x59f0,	// (0x00010ad7) vkb2_cell_t_keypad_pane_cp09

0x5a04,	// (0x00010aeb) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5a04,	// (0x00010aeb) vkb2_cell_t_keypad_pane_cp01

0x5a15,	// (0x00010afc) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5a15,	// (0x00010afc) vkb2_cell_t_keypad_pane_cp02

0x5a26,	// (0x00010b0d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5a26,	// (0x00010b0d) vkb2_cell_t_keypad_pane_cp03

0x5a37,	// (0x00010b1e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5a37,	// (0x00010b1e) vkb2_cell_t_keypad_pane_cp04

0x5a48,	// (0x00010b2f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5a48,	// (0x00010b2f) vkb2_cell_t_keypad_pane_cp05

0x5a59,	// (0x00010b40) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5a59,	// (0x00010b40) vkb2_cell_t_keypad_pane_cp06

0x5a6a,	// (0x00010b51) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5a6a,	// (0x00010b51) vkb2_cell_t_keypad_pane_cp07

0x5a7b,	// (0x00010b62) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5a7b,	// (0x00010b62) vkb2_cell_t_keypad_pane_cp10

0x5238,	// (0x0001031f) vkb2_cell_t_keypad_pane_g1

0xe799,	// (0x00019880) vkb2_cell_t_keypad_pane_t1

0x41e4,	// (0x0000f2cb) popup_grid_graphic2_window

0x3542,	// (0x0000e629) aid_size_cell_graphic2_ParamLimits

0x3542,	// (0x0000e629) aid_size_cell_graphic2

0x8f5d,	// (0x00014044) bg_popup_window_pane_cp21_ParamLimits

0x8f5d,	// (0x00014044) bg_popup_window_pane_cp21

0x3574,	// (0x0000e65b) graphic2_pages_pane_ParamLimits

0x3574,	// (0x0000e65b) graphic2_pages_pane

0x35ca,	// (0x0000e6b1) grid_graphic2_control_pane_ParamLimits

0x35ca,	// (0x0000e6b1) grid_graphic2_control_pane

0x35fe,	// (0x0000e6e5) grid_graphic2_pane_ParamLimits

0x35fe,	// (0x0000e6e5) grid_graphic2_pane

0x3671,	// (0x0000e758) cell_graphic2_pane

0x5cb6,	// (0x00010d9d) main_comp_mode_pane

0xc6b3,	// (0x0001779a) list_ai3_gene_pane_ParamLimits

0x2b3f,	// (0x0000dc26) bg_popup_window_pane_cp19_ParamLimits

0xcb05,	// (0x00017bec) bg_touch_area_indi_pane_ParamLimits

0xcb05,	// (0x00017bec) bg_touch_area_indi_pane

0xcb1b,	// (0x00017c02) bg_touch_area_indi_pane_cp01_ParamLimits

0xcb1b,	// (0x00017c02) bg_touch_area_indi_pane_cp01

0xcb31,	// (0x00017c18) bg_touch_area_indi_pane_cp02_ParamLimits

0xcb31,	// (0x00017c18) bg_touch_area_indi_pane_cp02

0xcb49,	// (0x00017c30) bg_touch_area_indi_pane_cp03_ParamLimits

0xcb49,	// (0x00017c30) bg_touch_area_indi_pane_cp03

0xcb63,	// (0x00017c4a) popup_slider_window_g1_ParamLimits

0xcb7f,	// (0x00017c66) popup_slider_window_g2_ParamLimits

0xcb9b,	// (0x00017c82) popup_slider_window_g3_ParamLimits

0xfce9,	// (0x0001add0) popup_slider_window_g_ParamLimits

0xcbf7,	// (0x00017cde) popup_slider_window_t1_ParamLimits

0xcc6b,	// (0x00017d52) small_volume_slider_vertical_pane_ParamLimits

0x3671,	// (0x0000e758) cell_graphic2_pane_ParamLimits

0x36cc,	// (0x0000e7b3) bg_button_pane_cp10_ParamLimits

0x36cc,	// (0x0000e7b3) bg_button_pane_cp10

0x36df,	// (0x0000e7c6) bg_button_pane_cp11_ParamLimits

0x36df,	// (0x0000e7c6) bg_button_pane_cp11

0x36f2,	// (0x0000e7d9) graphic2_pages_pane_g1_ParamLimits

0x36f2,	// (0x0000e7d9) graphic2_pages_pane_g1

0x370d,	// (0x0000e7f4) graphic2_pages_pane_g2_ParamLimits

0x370d,	// (0x0000e7f4) graphic2_pages_pane_g2

0x0001,

0xfdad,	// (0x0001ae94) graphic2_pages_pane_g_ParamLimits

0xfdad,	// (0x0001ae94) graphic2_pages_pane_g

0x3725,	// (0x0000e80c) graphic2_pages_pane_t1_ParamLimits

0x3725,	// (0x0000e80c) graphic2_pages_pane_t1

0x373d,	// (0x0000e824) cell_graphic2_control_pane_ParamLimits

0x373d,	// (0x0000e824) cell_graphic2_control_pane

0x3757,	// (0x0000e83e) cell_graphic2_pane_g1_ParamLimits

0x3757,	// (0x0000e83e) cell_graphic2_pane_g1

0xe7ab,	// (0x00019892) cell_graphic2_pane_g2_ParamLimits

0xe7ab,	// (0x00019892) cell_graphic2_pane_g2

0x3764,	// (0x0000e84b) cell_graphic2_pane_g3_ParamLimits

0x3764,	// (0x0000e84b) cell_graphic2_pane_g3

0xe7b8,	// (0x0001989f) cell_graphic2_pane_g4_ParamLimits

0xe7b8,	// (0x0001989f) cell_graphic2_pane_g4

0x3771,	// (0x0000e858) cell_graphic2_pane_g5_ParamLimits

0x3771,	// (0x0000e858) cell_graphic2_pane_g5

0x0004,

0xfdb2,	// (0x0001ae99) cell_graphic2_pane_g_ParamLimits

0xfdb2,	// (0x0001ae99) cell_graphic2_pane_g

0x3791,	// (0x0000e878) cell_graphic2_pane_t1_ParamLimits

0x3791,	// (0x0000e878) cell_graphic2_pane_t1

0x95cb,	// (0x000146b2) grid_highlight_pane_cp11_ParamLimits

0x95cb,	// (0x000146b2) grid_highlight_pane_cp11

0x6b83,	// (0x00011c6a) bg_button_pane_cp05

0x37c6,	// (0x0000e8ad) cell_graphic2_control_pane_g1

0xb20a,	// (0x000162f1) bg_touch_area_indi_pane_g1

0xe7c5,	// (0x000198ac) aid_cmod_rocker_key_size

0xe7cf,	// (0x000198b6) aid_cmode_itu_key_size

0xe7d9,	// (0x000198c0) main_cmode_video_pane

0xe7e3,	// (0x000198ca) main_comp_mode_itu_pane

0xe7ef,	// (0x000198d6) main_comp_mode_rocker_pane

0xe7fb,	// (0x000198e2) cell_cmode_rocker_pane_ParamLimits

0xe7fb,	// (0x000198e2) cell_cmode_rocker_pane

0xe80d,	// (0x000198f4) cell_cmode_itu_pane_ParamLimits

0xe80d,	// (0x000198f4) cell_cmode_itu_pane

0x6b83,	// (0x00011c6a) bg_button_pane_cp06_ParamLimits

0x6b83,	// (0x00011c6a) bg_button_pane_cp06

0xb4a3,	// (0x0001658a) cell_cmode_rocker_pane_g1_ParamLimits

0xb4a3,	// (0x0001658a) cell_cmode_rocker_pane_g1

0xcd0f,	// (0x00017df6) cell_cmode_rocker_pane_g2_ParamLimits

0xcd0f,	// (0x00017df6) cell_cmode_rocker_pane_g2

0x0001,

0xfdc2,	// (0x0001aea9) cell_cmode_rocker_pane_g_ParamLimits

0xfdc2,	// (0x0001aea9) cell_cmode_rocker_pane_g

0x5cb6,	// (0x00010d9d) bg_button_pane_cp07

0xe822,	// (0x00019909) cell_cmode_itu_pane_g1

0xe82b,	// (0x00019912) cell_cmode_itu_pane_t1

0xe839,	// (0x00019920) cell_cmode_itu_pane_t2

0x0001,

0xfdc7,	// (0x0001aeae) cell_cmode_itu_pane_t

0xcf35,	// (0x0001801c) aid_touch_ctrl_left

0xcf3d,	// (0x00018024) aid_touch_ctrl_right

0x5cb6,	// (0x00010d9d) compa_mode_pane

0x37d3,	// (0x0000e8ba) aid_cmod_rocker_key_size_cp

0x37dd,	// (0x0000e8c4) aid_cmode_itu_key_size_cp

0xe847,	// (0x0001992e) compa_mode_pane_g1

0xe84f,	// (0x00019936) compa_mode_pane_g2

0xe857,	// (0x0001993e) compa_mode_pane_g3

0x0002,

0xfdcc,	// (0x0001aeb3) compa_mode_pane_g

0x37e7,	// (0x0000e8ce) main_comp_mode_itu_pane_cp

0x37ef,	// (0x0000e8d6) main_comp_mode_rocker_pane_cp

0x37f7,	// (0x0000e8de) cell_cmode_itu_pane_cp_ParamLimits

0x37f7,	// (0x0000e8de) cell_cmode_itu_pane_cp

0x380c,	// (0x0000e8f3) cell_cmode_rocker_pane_cp_ParamLimits

0x380c,	// (0x0000e8f3) cell_cmode_rocker_pane_cp

0x6b83,	// (0x00011c6a) bg_button_pane_cp06_cp_ParamLimits

0x6b83,	// (0x00011c6a) bg_button_pane_cp06_cp

0xb4a3,	// (0x0001658a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb4a3,	// (0x0001658a) cell_cmode_rocker_pane_g1_cp

0xb20a,	// (0x000162f1) cell_cmode_rocker_pane_g2_cp

0x5cb6,	// (0x00010d9d) bg_button_pane_cp07_cp

0x381e,	// (0x0000e905) cell_cmode_itu_pane_g1_cp

0x3827,	// (0x0000e90e) cell_cmode_itu_pane_t1_cp

0x3827,	// (0x0000e90e) cell_cmode_itu_pane_t2_cp

0x2098,	// (0x0000d17f) settings_code_pane_cp2

0x5daa,	// (0x00010e91) bg_popup_window_pane_cp3_ParamLimits

0x621b,	// (0x00011302) heading_pane_cp3_ParamLimits

0x6227,	// (0x0001130e) listscroll_popup_graphic_pane_ParamLimits

0x4fe1,	// (0x000100c8) fep_hwr_aid_pane_ParamLimits

0x5451,	// (0x00010538) aid_touch_sctrl_top_ParamLimits

0x546c,	// (0x00010553) sctrl_sk_top_pane_g1_ParamLimits

0x5238,	// (0x0001031f) sctrl_sk_top_pane_g2_ParamLimits

0xfd02,	// (0x0001ade9) sctrl_sk_top_pane_g_ParamLimits

0x5479,	// (0x00010560) sctrl_sk_top_pane_t1_ParamLimits

0x5451,	// (0x00010538) aid_touch_sctrl_bottom_ParamLimits

0x5479,	// (0x00010560) sctrl_sk_bottom_pane_t1_ParamLimits

0xce7f,	// (0x00017f66) aid_area_touch_clock

0xe4f7,	// (0x000195de) aid_vkb2_area_top_pane_cell_ParamLimits

0xe4f7,	// (0x000195de) aid_vkb2_area_top_pane_cell

0xe5a2,	// (0x00019689) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe5a2,	// (0x00019689) aid_vkb2_area_bottom_pane_cell

0xd3ea,	// (0x000184d1) popup_char_count_window

0xe85f,	// (0x00019946) popup_char_count_window_g1

0xe868,	// (0x0001994f) popup_char_count_window_g2

0xe871,	// (0x00019958) popup_char_count_window_g3

0x0002,

0xfdd3,	// (0x0001aeba) popup_char_count_window_g

0xe87a,	// (0x00019961) popup_char_count_window_t1

0x552c,	// (0x00010613) popup_fep_char_preview_window_ParamLimits

0x552c,	// (0x00010613) popup_fep_char_preview_window

0xe517,	// (0x000195fe) vkb2_top_candi_pane_ParamLimits

0xe517,	// (0x000195fe) vkb2_top_candi_pane

0x3835,	// (0x0000e91c) cell_vkb2_top_candi_pane_ParamLimits

0x3835,	// (0x0000e91c) cell_vkb2_top_candi_pane

0x5a90,	// (0x00010b77) bg_popup_fep_char_preview_window_ParamLimits

0x5a90,	// (0x00010b77) bg_popup_fep_char_preview_window

0x5a9e,	// (0x00010b85) popup_fep_char_preview_window_t1_ParamLimits

0x5a9e,	// (0x00010b85) popup_fep_char_preview_window_t1

0xe888,	// (0x0001996f) bg_popup_fep_char_preview_window_g1

0xe890,	// (0x00019977) bg_popup_fep_char_preview_window_g2

0xe898,	// (0x0001997f) bg_popup_fep_char_preview_window_g3

0xe8a0,	// (0x00019987) bg_popup_fep_char_preview_window_g4

0xe8a8,	// (0x0001998f) bg_popup_fep_char_preview_window_g5

0x5ad8,	// (0x00010bbf) bg_popup_fep_char_preview_window_g6

0xe8b0,	// (0x00019997) bg_popup_fep_char_preview_window_g7

0xe8b8,	// (0x0001999f) bg_popup_fep_char_preview_window_g8

0xe8c0,	// (0x000199a7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdda,	// (0x0001aec1) bg_popup_fep_char_preview_window_g

0x5238,	// (0x0001031f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5238,	// (0x0001031f) cell_vkb2_top_candi_pane_g1

0x5246,	// (0x0001032d) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5246,	// (0x0001032d) cell_vkb2_top_candi_pane_g2

0xe753,	// (0x0001983a) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe753,	// (0x0001983a) cell_vkb2_top_candi_pane_g3

0x5ae0,	// (0x00010bc7) cell_vkb2_top_candi_pane_g4_ParamLimits

0x5ae0,	// (0x00010bc7) cell_vkb2_top_candi_pane_g4

0xb819,	// (0x00016900) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb819,	// (0x00016900) cell_vkb2_top_candi_pane_g5

0x5b01,	// (0x00010be8) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5b01,	// (0x00010be8) cell_vkb2_top_candi_pane_g6

0x0005,

0xfded,	// (0x0001aed4) cell_vkb2_top_candi_pane_g_ParamLimits

0xfded,	// (0x0001aed4) cell_vkb2_top_candi_pane_g

0x5b0f,	// (0x00010bf6) cell_vkb2_top_candi_pane_t1

0x4df0,	// (0x0000fed7) aid_size_touch_slider_mark_ParamLimits

0x4df0,	// (0x0000fed7) aid_size_touch_slider_mark

0x35b0,	// (0x0000e697) grid_graphic2_catg_pane_ParamLimits

0x35b0,	// (0x0000e697) grid_graphic2_catg_pane

0x3644,	// (0x0000e72b) popup_grid_graphic2_window_t1_ParamLimits

0x3644,	// (0x0000e72b) popup_grid_graphic2_window_t1

0x365a,	// (0x0000e741) popup_grid_graphic2_window_t2_ParamLimits

0x365a,	// (0x0000e741) popup_grid_graphic2_window_t2

0x0001,

0xfda8,	// (0x0001ae8f) popup_grid_graphic2_window_t_ParamLimits

0xfda8,	// (0x0001ae8f) popup_grid_graphic2_window_t

0x6b83,	// (0x00011c6a) bg_button_pane_cp05_ParamLimits

0x37c6,	// (0x0000e8ad) cell_graphic2_control_pane_g1_ParamLimits

0x389b,	// (0x0000e982) cell_graphic2_catg_pane_ParamLimits

0x389b,	// (0x0000e982) cell_graphic2_catg_pane

0x5cb6,	// (0x00010d9d) bg_button_pane_cp12

0x38ad,	// (0x0000e994) cell_graphic2_catg_pane_g1

0xce4b,	// (0x00017f32) cell_tb_ext_pane_t1_ParamLimits

0x58c6,	// (0x000109ad) vkb2_top_cell_right_narrow_pane_ParamLimits

0x58c6,	// (0x000109ad) vkb2_top_cell_right_narrow_pane

0x58de,	// (0x000109c5) vkb2_top_cell_right_wide_pane_ParamLimits

0x58de,	// (0x000109c5) vkb2_top_cell_right_wide_pane

0x4fd3,	// (0x000100ba) bg_vkb2_func_pane_ParamLimits

0x4fd3,	// (0x000100ba) bg_vkb2_func_pane

0x594f,	// (0x00010a36) vkb2_top_cell_left_pane_g1_ParamLimits

0x4fd3,	// (0x000100ba) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4fd3,	// (0x000100ba) bg_vkb2_fuc_pane_cp03

0x59ad,	// (0x00010a94) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x880e,	// (0x000138f5) bg_vkb2_func_pane_g1

0x8816,	// (0x000138fd) bg_vkb2_func_pane_g2

0x8826,	// (0x0001390d) bg_vkb2_func_pane_g3

0x881e,	// (0x00013905) bg_vkb2_func_pane_g4

0x882e,	// (0x00013915) bg_vkb2_func_pane_g5

0x8836,	// (0x0001391d) bg_vkb2_func_pane_g6

0x883e,	// (0x00013925) bg_vkb2_func_pane_g7

0x8846,	// (0x0001392d) bg_vkb2_func_pane_g8

0x8806,	// (0x000138ed) bg_vkb2_func_pane_g9

0x0008,

0xfdfa,	// (0x0001aee1) bg_vkb2_func_pane_g

0x4fd3,	// (0x000100ba) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4fd3,	// (0x000100ba) bg_vkb2_fuc_pane_cp01

0x594f,	// (0x00010a36) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x594f,	// (0x00010a36) vkb2_top_cell_right_wide_pane_g1

0x4fd3,	// (0x000100ba) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4fd3,	// (0x000100ba) bg_vkb2_fuc_pane_cp02

0x59ad,	// (0x00010a94) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x59ad,	// (0x00010a94) vkb2_top_cell_right_narrow_pane_g1

0x2a79,	// (0x0000db60) aid_touch_area_decrease_ParamLimits

0x2a79,	// (0x0000db60) aid_touch_area_decrease

0x2ab3,	// (0x0000db9a) aid_touch_area_increase_ParamLimits

0x2ab3,	// (0x0000db9a) aid_touch_area_increase

0x2adb,	// (0x0000dbc2) aid_touch_area_mute_ParamLimits

0x2adb,	// (0x0000dbc2) aid_touch_area_mute

0x2b0b,	// (0x0000dbf2) aid_touch_area_slider_ParamLimits

0x2b0b,	// (0x0000dbf2) aid_touch_area_slider

0x2b4b,	// (0x0000dc32) popup_slider_window_g4_ParamLimits

0x2b4b,	// (0x0000dc32) popup_slider_window_g4

0x2b73,	// (0x0000dc5a) popup_slider_window_g5_ParamLimits

0x2b73,	// (0x0000dc5a) popup_slider_window_g5

0x2ba7,	// (0x0000dc8e) popup_slider_window_g6_ParamLimits

0x2ba7,	// (0x0000dc8e) popup_slider_window_g6

0xcc25,	// (0x00017d0c) popup_slider_window_t2_ParamLimits

0xcc25,	// (0x00017d0c) popup_slider_window_t2

0x0001,

0xfcf6,	// (0x0001addd) popup_slider_window_t_ParamLimits

0xfcf6,	// (0x0001addd) popup_slider_window_t

0x2bc3,	// (0x0000dcaa) slider_pane_ParamLimits

0x2bc3,	// (0x0000dcaa) slider_pane

0xe8c8,	// (0x000199af) slider_pane_g1_ParamLimits

0xe8c8,	// (0x000199af) slider_pane_g1

0xe8dc,	// (0x000199c3) slider_pane_g2_ParamLimits

0xe8dc,	// (0x000199c3) slider_pane_g2

0xe8f2,	// (0x000199d9) slider_pane_g3_ParamLimits

0xe8f2,	// (0x000199d9) slider_pane_g3

0x0003,

0xfe0d,	// (0x0001aef4) slider_pane_g_ParamLimits

0xfe0d,	// (0x0001aef4) slider_pane_g

0x1637,	// (0x0000c71e) popup_tb_float_extension_window_ParamLimits

0x1637,	// (0x0000c71e) popup_tb_float_extension_window

0xe91e,	// (0x00019a05) aid_size_cell_tb_float_ext

0x5cb6,	// (0x00010d9d) bg_popup_sub_window_cp28

0xe92a,	// (0x00019a11) grid_tb_float_ext_pane

0xe934,	// (0x00019a1b) cell_tb_float_ext_pane_ParamLimits

0xe934,	// (0x00019a1b) cell_tb_float_ext_pane

0xe94e,	// (0x00019a35) cell_tb_float_ext_pane_g1

0xe957,	// (0x00019a3e) grid_highlight_pane_cp12

0xe309,	// (0x000193f0) cell_last_hwr_side_pane_ParamLimits

0xe309,	// (0x000193f0) cell_last_hwr_side_pane

0xb20a,	// (0x000162f1) cell_last_hwr_side_pane_g1

0xe960,	// (0x00019a47) cell_last_hwr_side_pane_g2

0x0001,

0xfe16,	// (0x0001aefd) cell_last_hwr_side_pane_g

0xe67e,	// (0x00019765) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe67e,	// (0x00019765) vkb2_area_bottom_space_btn_pane

0x5238,	// (0x0001031f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe799,	// (0x00019880) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x5b0f,	// (0x00010bf6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x5b2e,	// (0x00010c15) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x5b2e,	// (0x00010c15) vkb2_area_bottom_space_btn_pane_g1

0x5b68,	// (0x00010c4f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x5b68,	// (0x00010c4f) vkb2_area_bottom_space_btn_pane_g2

0x5b9e,	// (0x00010c85) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x5b9e,	// (0x00010c85) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1b,	// (0x0001af02) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1b,	// (0x0001af02) vkb2_area_bottom_space_btn_pane_g

0x5096,	// (0x0001017d) cel_fep_hwr_func_pane_ParamLimits

0x5096,	// (0x0001017d) cel_fep_hwr_func_pane

0xe2de,	// (0x000193c5) cell_hwr_side_button_pane_ParamLimits

0xe2de,	// (0x000193c5) cell_hwr_side_button_pane

0xce7f,	// (0x00017f66) aid_area_touch_clock_ParamLimits

0x604d,	// (0x00011134) bg_uniindi_top_pane_ParamLimits

0xce91,	// (0x00017f78) uniindi_top_pane_g1_ParamLimits

0xcea7,	// (0x00017f8e) uniindi_top_pane_g2_ParamLimits

0xceb3,	// (0x00017f9a) uniindi_top_pane_g3_ParamLimits

0xcec4,	// (0x00017fab) uniindi_top_pane_g4_ParamLimits

0xfd2e,	// (0x0001ae15) uniindi_top_pane_g_ParamLimits

0xced1,	// (0x00017fb8) uniindi_top_pane_t1_ParamLimits

0x604d,	// (0x00011134) bg_vkb2_func_pane_cp01_ParamLimits

0x604d,	// (0x00011134) bg_vkb2_func_pane_cp01

0xe969,	// (0x00019a50) cel_fep_hwr_func_pane_g1_ParamLimits

0xe969,	// (0x00019a50) cel_fep_hwr_func_pane_g1

0x604d,	// (0x00011134) bg_vkb2_func_pane_cp02_ParamLimits

0x604d,	// (0x00011134) bg_vkb2_func_pane_cp02

0xe969,	// (0x00019a50) cell_hwr_side_button_pane_g1_ParamLimits

0xe969,	// (0x00019a50) cell_hwr_side_button_pane_g1

0x8667,	// (0x0001374e) status_pane_g4_ParamLimits

0x8667,	// (0x0001374e) status_pane_g4

0x867f,	// (0x00013766) status_pane_t1

0xaf0c,	// (0x00015ff3) form2_midp_gauge_slider_cont_pane

0xaf14,	// (0x00015ffb) form2_midp_gauge_slider_pane_t1_ParamLimits

0x2384,	// (0x0000d46b) form2_midp_gauge_slider_pane_t2_ParamLimits

0x2396,	// (0x0000d47d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf5,	// (0x0001abdc) form2_midp_gauge_slider_pane_t_ParamLimits

0xaf4a,	// (0x00016031) form2_midp_slider_pane_ParamLimits

0x54ec,	// (0x000105d3) aid_size_cell_func_vkb2_ParamLimits

0x54ec,	// (0x000105d3) aid_size_cell_func_vkb2

0xe90a,	// (0x000199f1) slider_pane_g4_ParamLimits

0xe90a,	// (0x000199f1) slider_pane_g4

0xe6df,	// (0x000197c6) form2_midp_gauge_slider_pane_t2_cp01

0xe6ed,	// (0x000197d4) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe6ed,	// (0x000197d4) form2_midp_gauge_slider_pane_t3_cp01

0x5c13,	// (0x00010cfa) form2_midp_slider_pane_cp01

0x5cb6,	// (0x00010d9d) navi_smil_pane

0xe999,	// (0x00019a80) navi_smil_pane_g1

0xe9a1,	// (0x00019a88) navi_smil_pane_t1

0xe977,	// (0x00019a5e) form2_midp_slider_pane_g1

0xe980,	// (0x00019a67) form2_midp_slider_pane_g2

0xe988,	// (0x00019a6f) form2_midp_slider_pane_g3

0xe977,	// (0x00019a5e) form2_midp_slider_pane_g4

0x38e1,	// (0x0000e9c8) form2_midp_slider_pane_g5

0x0004,

0xfe24,	// (0x0001af0b) form2_midp_slider_pane_g

0x5bd8,	// (0x00010cbf) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x5bd8,	// (0x00010cbf) vkb2_area_bottom_space_btn_pane_g4

0x1813,	// (0x0000c8fa) lc0_navi_pane_ParamLimits

0x1813,	// (0x0000c8fa) lc0_navi_pane

0x187d,	// (0x0000c964) lc0_stat_indi_pane_ParamLimits

0x187d,	// (0x0000c964) lc0_stat_indi_pane

0x1892,	// (0x0000c979) ls0_title_pane_ParamLimits

0x1892,	// (0x0000c979) ls0_title_pane

0x6b83,	// (0x00011c6a) bg_popup_sub_pane_cp14_ParamLimits

0xce66,	// (0x00017f4d) list_uniindi_pane_ParamLimits

0xce72,	// (0x00017f59) uniindi_top_pane_ParamLimits

0xcf0d,	// (0x00017ff4) list_single_uniindi_pane_g1_ParamLimits

0xcf20,	// (0x00018007) list_single_uniindi_pane_t1_ParamLimits

0xe70a,	// (0x000197f1) lc0_stat_clock_pane_ParamLimits

0xe70a,	// (0x000197f1) lc0_stat_clock_pane

0x3904,	// (0x0000e9eb) lc0_stat_indi_pane_g1_ParamLimits

0x3904,	// (0x0000e9eb) lc0_stat_indi_pane_g1

0x38f7,	// (0x0000e9de) lc0_stat_indi_pane_g2_ParamLimits

0x38f7,	// (0x0000e9de) lc0_stat_indi_pane_g2

0x0001,

0xfe2f,	// (0x0001af16) lc0_stat_indi_pane_g_ParamLimits

0xfe2f,	// (0x0001af16) lc0_stat_indi_pane_g

0xe717,	// (0x000197fe) lc0_uni_indicator_pane_ParamLimits

0xe717,	// (0x000197fe) lc0_uni_indicator_pane

0x391e,	// (0x0000ea05) ls0_title_pane_g1_ParamLimits

0x391e,	// (0x0000ea05) ls0_title_pane_g1

0x3932,	// (0x0000ea19) ls0_title_pane_t1_ParamLimits

0x3932,	// (0x0000ea19) ls0_title_pane_t1

0xe724,	// (0x0001980b) lc0_uni_indicator_pane_g1_ParamLimits

0xe724,	// (0x0001980b) lc0_uni_indicator_pane_g1

0xe9af,	// (0x00019a96) lc0_stat_clock_pane_t1

0x5cb6,	// (0x00010d9d) main_ai5_pane

0xe9bd,	// (0x00019aa4) ai5_sk_pane_ParamLimits

0xe9bd,	// (0x00019aa4) ai5_sk_pane

0x398f,	// (0x0000ea76) cell_ai5_widget_pane_ParamLimits

0x398f,	// (0x0000ea76) cell_ai5_widget_pane

0xe9ca,	// (0x00019ab1) aid_size_cell_widget_grid

0xe9de,	// (0x00019ac5) bg_ai5_widget_pane_ParamLimits

0xe9de,	// (0x00019ac5) bg_ai5_widget_pane

0x3a18,	// (0x0000eaff) cell_ai5_widget_pane_g2

0x3a28,	// (0x0000eb0f) cell_ai5_widget_pane_g3

0x3a47,	// (0x0000eb2e) cell_ai5_widget_pane_g4

0x3a53,	// (0x0000eb3a) cell_ai5_widget_pane_g5

0x3a5f,	// (0x0000eb46) cell_ai5_widget_pane_g6

0x3a6b,	// (0x0000eb52) cell_ai5_widget_pane_g7

0x3ab3,	// (0x0000eb9a) cell_ai5_widget_pane_t1_ParamLimits

0x3ab3,	// (0x0000eb9a) cell_ai5_widget_pane_t1

0x3ad0,	// (0x0000ebb7) cell_ai5_widget_pane_t2_ParamLimits

0x3ad0,	// (0x0000ebb7) cell_ai5_widget_pane_t2

0x3ae8,	// (0x0000ebcf) cell_ai5_widget_pane_t3_ParamLimits

0x3ae8,	// (0x0000ebcf) cell_ai5_widget_pane_t3

0x3b00,	// (0x0000ebe7) cell_ai5_widget_pane_t4_ParamLimits

0x3b00,	// (0x0000ebe7) cell_ai5_widget_pane_t4

0x3b1a,	// (0x0000ec01) cell_ai5_widget_pane_t5_ParamLimits

0x3b1a,	// (0x0000ec01) cell_ai5_widget_pane_t5

0xe9ea,	// (0x00019ad1) cell_ai5_widget_pane_t6_ParamLimits

0xe9ea,	// (0x00019ad1) cell_ai5_widget_pane_t6

0xe9fc,	// (0x00019ae3) cell_ai5_widget_pane_t7_ParamLimits

0xe9fc,	// (0x00019ae3) cell_ai5_widget_pane_t7

0x3b39,	// (0x0000ec20) cell_ai5_widget_pane_t8_ParamLimits

0x3b39,	// (0x0000ec20) cell_ai5_widget_pane_t8

0x0009,

0xfe49,	// (0x0001af30) cell_ai5_widget_pane_t_ParamLimits

0xfe49,	// (0x0001af30) cell_ai5_widget_pane_t

0x3b85,	// (0x0000ec6c) grid_ai5_widget_pane

0x6b83,	// (0x00011c6a) highlight_cell_ai5_widget_pane_ParamLimits

0x6b83,	// (0x00011c6a) highlight_cell_ai5_widget_pane

0x3b9b,	// (0x0000ec82) ai5_sk_left_pane

0x3ba5,	// (0x0000ec8c) ai5_sk_middle_pane

0x3baf,	// (0x0000ec96) ai5_sk_right_pane

0xea15,	// (0x00019afc) bg_ai5_widget_pane_g1_ParamLimits

0xea15,	// (0x00019afc) bg_ai5_widget_pane_g1

0xea21,	// (0x00019b08) bg_ai5_widget_pane_g2_ParamLimits

0xea21,	// (0x00019b08) bg_ai5_widget_pane_g2

0xea2d,	// (0x00019b14) bg_ai5_widget_pane_g3_ParamLimits

0xea2d,	// (0x00019b14) bg_ai5_widget_pane_g3

0xea39,	// (0x00019b20) bg_ai5_widget_pane_g4_ParamLimits

0xea39,	// (0x00019b20) bg_ai5_widget_pane_g4

0xea45,	// (0x00019b2c) bg_ai5_widget_pane_g5_ParamLimits

0xea45,	// (0x00019b2c) bg_ai5_widget_pane_g5

0xea51,	// (0x00019b38) bg_ai5_widget_pane_g6_ParamLimits

0xea51,	// (0x00019b38) bg_ai5_widget_pane_g6

0xea5d,	// (0x00019b44) bg_ai5_widget_pane_g7_ParamLimits

0xea5d,	// (0x00019b44) bg_ai5_widget_pane_g7

0xea69,	// (0x00019b50) bg_ai5_widget_pane_g8_ParamLimits

0xea69,	// (0x00019b50) bg_ai5_widget_pane_g8

0xea75,	// (0x00019b5c) bg_ai5_widget_pane_g9_ParamLimits

0xea75,	// (0x00019b5c) bg_ai5_widget_pane_g9

0x0008,

0xfe5e,	// (0x0001af45) bg_ai5_widget_pane_g_ParamLimits

0xfe5e,	// (0x0001af45) bg_ai5_widget_pane_g

0xeaa8,	// (0x00019b8f) cell_shortcut_ai5_widget_pane_ParamLimits

0xeaa8,	// (0x00019b8f) cell_shortcut_ai5_widget_pane

0x5e8d,	// (0x00010f74) bg_cell_shortcut_ai5_widget_pane

0xeab9,	// (0x00019ba0) cell_grid_ai5_widget_pane_g1

0xeac2,	// (0x00019ba9) highlight_cell_shortcut_ai5_widget_pane

0x880e,	// (0x000138f5) ai5_sk_left_pane_g1

0xeaca,	// (0x00019bb1) ai5_sk_left_pane_g2

0xead2,	// (0x00019bb9) ai5_sk_left_pane_g3

0xeada,	// (0x00019bc1) ai5_sk_left_pane_g4

0x0003,

0xfe71,	// (0x0001af58) ai5_sk_left_pane_g

0xeae2,	// (0x00019bc9) ai5_sk_left_pane_t1

0x8816,	// (0x000138fd) ai5_sk_right_pane_g1

0xeaf0,	// (0x00019bd7) ai5_sk_right_pane_g2

0xeaf8,	// (0x00019bdf) ai5_sk_right_pane_g3

0xeb00,	// (0x00019be7) ai5_sk_right_pane_g4

0x0003,

0xfe7a,	// (0x0001af61) ai5_sk_right_pane_g

0xeb08,	// (0x00019bef) ai5_sk_right_pane_t1

0x8816,	// (0x000138fd) ai5_sk_middle_pane_g1

0x880e,	// (0x000138f5) ai5_sk_middle_pane_g2

0x882e,	// (0x00013915) ai5_sk_middle_pane_g3

0xeaf8,	// (0x00019bdf) ai5_sk_middle_pane_g4

0xead2,	// (0x00019bb9) ai5_sk_middle_pane_g5

0xeb16,	// (0x00019bfd) ai5_sk_middle_pane_g6

0x3bb9,	// (0x0000eca0) ai5_sk_middle_pane_g7

0x0006,

0xfe83,	// (0x0001af6a) ai5_sk_middle_pane_g

0x16ff,	// (0x0000c7e6) aid_touch_area_size_lc0_ParamLimits

0x16ff,	// (0x0000c7e6) aid_touch_area_size_lc0

0x5267,	// (0x0001034e) cell_hwr_candidate_pane_t1_ParamLimits

0x8345,	// (0x0001342c) aid_touch_navi_pane

0x1984,	// (0x0000ca6b) status_dt_navi_pane_ParamLimits

0x1984,	// (0x0000ca6b) status_dt_navi_pane

0x199c,	// (0x0000ca83) status_dt_sta_pane_ParamLimits

0x199c,	// (0x0000ca83) status_dt_sta_pane

0x3bc1,	// (0x0000eca8) dt_sta_controll_pane

0x3bce,	// (0x0000ecb5) dt_sta_indi_pane

0x3bdb,	// (0x0000ecc2) dt_sta_title_pane

0x604d,	// (0x00011134) bg_dt_sta_indi_pane_ParamLimits

0x604d,	// (0x00011134) bg_dt_sta_indi_pane

0x3bed,	// (0x0000ecd4) dt_sta_battery_pane

0x3bf5,	// (0x0000ecdc) dt_sta_indi_pane_g1

0xeb1e,	// (0x00019c05) dt_sta_indi_pane_g2

0xeb27,	// (0x00019c0e) dt_sta_indi_pane_g3

0x0002,

0xfe92,	// (0x0001af79) dt_sta_indi_pane_g

0xeb30,	// (0x00019c17) dt_sta_signal_pane

0x6b83,	// (0x00011c6a) bg_dt_sta_title_pane_ParamLimits

0x6b83,	// (0x00011c6a) bg_dt_sta_title_pane

0x972b,	// (0x00014812) dt_sta_title_pane_g1

0x3bfe,	// (0x0000ece5) dt_sta_title_pane_t1_ParamLimits

0x3bfe,	// (0x0000ece5) dt_sta_title_pane_t1

0x5cb6,	// (0x00010d9d) bg_dt_sta_control_pane

0x3c13,	// (0x0000ecfa) dt_sta_controll_pane_g1

0xeb39,	// (0x00019c20) bg_dt_sta_title_pane_g1

0xeb42,	// (0x00019c29) bg_dt_sta_title_pane_g2

0xeb4b,	// (0x00019c32) bg_dt_sta_title_pane_g3

0x0002,

0xfe99,	// (0x0001af80) bg_dt_sta_title_pane_g

0xb20a,	// (0x000162f1) bg_dt_sta_indi_pane_g1

0xeb54,	// (0x00019c3b) dt_sta_signal_pane_g1

0xeb5c,	// (0x00019c43) dt_sta_signal_pane_g2

0x0001,

0xfea0,	// (0x0001af87) dt_sta_signal_pane_g

0xeb64,	// (0x00019c4b) dt_sta_battery_pane_g1

0xeb6d,	// (0x00019c54) dt_sta_battery_pane_t1

0xb20a,	// (0x000162f1) bg_dt_sta_control_pane_g1

0x7444,	// (0x0001252b) fep_china_uni_eep_pane

0x744c,	// (0x00012533) fep_china_uni_entry_pane_ParamLimits

0x745c,	// (0x00012543) popup_fep_china_uni_window_g1_ParamLimits

0x746c,	// (0x00012553) popup_fep_china_uni_window_g2_ParamLimits

0x746c,	// (0x00012553) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0001a817) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0001a817) popup_fep_china_uni_window_g

0xeb7c,	// (0x00019c63) fep_china_uni_eep_pane_g1

0xeb84,	// (0x00019c6b) fep_china_uni_eep_pane_t1

0xe990,	// (0x00019a77) aid_touch_area_size_smil_player

0x8495,	// (0x0001357c) lc0_clock_pane

0x8673,	// (0x0001375a) status_pane_g5_ParamLimits

0x8673,	// (0x0001375a) status_pane_g5

0x11cb,	// (0x0000c2b2) popup_keymap_window

0x8633,	// (0x0001371a) status_icon_pane

0x3a28,	// (0x0000eb0f) cell_ai5_widget_pane_g3_ParamLimits

0x3a47,	// (0x0000eb2e) cell_ai5_widget_pane_g4_ParamLimits

0x3a53,	// (0x0000eb3a) cell_ai5_widget_pane_g5_ParamLimits

0x3a77,	// (0x0000eb5e) cell_ai5_widget_pane_g8_ParamLimits

0x3a77,	// (0x0000eb5e) cell_ai5_widget_pane_g8

0x3a8b,	// (0x0000eb72) cell_ai5_widget_pane_g9_ParamLimits

0x3a8b,	// (0x0000eb72) cell_ai5_widget_pane_g9

0x3a9f,	// (0x0000eb86) cell_ai5_widget_pane_g10_ParamLimits

0x3a9f,	// (0x0000eb86) cell_ai5_widget_pane_g10

0xeb93,	// (0x00019c7a) status_icon_pane_g1

0x5cb6,	// (0x00010d9d) bg_popup_sub_pane_cp13

0xeb9b,	// (0x00019c82) popup_keymap_window_t1

0x0efd,	// (0x0000bfe4) control_pane_g6_ParamLimits

0x0efd,	// (0x0000bfe4) control_pane_g6

0x0ef0,	// (0x0000bfd7) control_pane_g7_ParamLimits

0x0ef0,	// (0x0000bfd7) control_pane_g7

0x0ee3,	// (0x0000bfca) control_pane_g8_ParamLimits

0x0ee3,	// (0x0000bfca) control_pane_g8

0x3bc1,	// (0x0000eca8) dt_sta_controll_pane_ParamLimits

0x3bce,	// (0x0000ecb5) dt_sta_indi_pane_ParamLimits

0x3bdb,	// (0x0000ecc2) dt_sta_title_pane_ParamLimits

0x654f,	// (0x00011636) aid_size_touch_scroll_bar_cale

0x42bd,	// (0x0000f3a4) popup_discreet_window_ParamLimits

0x42bd,	// (0x0000f3a4) popup_discreet_window

0xdf61,	// (0x00019048) popup_sk_window

0x8f5d,	// (0x00014044) bg_popup_sub_pane_cp28_ParamLimits

0x8f5d,	// (0x00014044) bg_popup_sub_pane_cp28

0xeba9,	// (0x00019c90) popup_discreet_window_g1_ParamLimits

0xeba9,	// (0x00019c90) popup_discreet_window_g1

0xebc9,	// (0x00019cb0) popup_discreet_window_t1_ParamLimits

0xebc9,	// (0x00019cb0) popup_discreet_window_t1

0xebe7,	// (0x00019cce) popup_discreet_window_t2_ParamLimits

0xebe7,	// (0x00019cce) popup_discreet_window_t2

0x0002,

0xfea5,	// (0x0001af8c) popup_discreet_window_t_ParamLimits

0xfea5,	// (0x0001af8c) popup_discreet_window_t

0x5c4c,	// (0x00010d33) popup_sk_window_g1

0x5c56,	// (0x00010d3d) popup_sk_window_g2

0x0001,

0xfeac,	// (0x0001af93) popup_sk_window_g

0xec39,	// (0x00019d20) popup_sk_window_t1

0xec47,	// (0x00019d2e) popup_sk_window_t1_copy1

0x3a18,	// (0x0000eaff) cell_ai5_widget_pane_g2_ParamLimits

0x3b4b,	// (0x0000ec32) cell_ai5_widget_pane_t9_ParamLimits

0x3b4b,	// (0x0000ec32) cell_ai5_widget_pane_t9

0x5cb6,	// (0x00010d9d) main_fep_fshwr2_pane

0x3c1c,	// (0x0000ed03) aid_fshwr2_btn_pane

0x3c24,	// (0x0000ed0b) aid_fshwr2_syb_pane

0x3c2c,	// (0x0000ed13) aid_fshwr2_txt_pane

0x3c34,	// (0x0000ed1b) fshwr2_func_candi_pane

0x3c3e,	// (0x0000ed25) fshwr2_hwr_syb_pane

0x3c4c,	// (0x0000ed33) fshwr2_icf_pane

0x5cb6,	// (0x00010d9d) fshwr2_icf_bg_pane

0x3c56,	// (0x0000ed3d) fshwr2_icf_pane_t1_ParamLimits

0x3c56,	// (0x0000ed3d) fshwr2_icf_pane_t1

0xb20a,	// (0x000162f1) fshwr2_func_candi_pane_g1

0xec69,	// (0x00019d50) fshwr2_func_candi_row_pane_ParamLimits

0xec69,	// (0x00019d50) fshwr2_func_candi_row_pane

0x3c70,	// (0x0000ed57) cell_fshwr2_syb_pane_ParamLimits

0x3c70,	// (0x0000ed57) cell_fshwr2_syb_pane

0xb4a3,	// (0x0001658a) fshwr2_hwr_syb_pane_g1_ParamLimits

0xb4a3,	// (0x0001658a) fshwr2_hwr_syb_pane_g1

0x5cb6,	// (0x00010d9d) bg_popup_call_pane_cp01

0xec7a,	// (0x00019d61) fshwr2_func_candi_cell_pane_ParamLimits

0xec7a,	// (0x00019d61) fshwr2_func_candi_cell_pane

0xecab,	// (0x00019d92) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xecab,	// (0x00019d92) fshwr2_func_candi_cell_bg_pane

0xecc5,	// (0x00019dac) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xecc5,	// (0x00019dac) fshwr2_func_candi_cell_pane_g1

0xece5,	// (0x00019dcc) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xece5,	// (0x00019dcc) fshwr2_func_candi_cell_pane_t1

0x5cb6,	// (0x00010d9d) bg_button_pane_cp08

0x79ce,	// (0x00012ab5) cell_fshwr2_syb_bg_pane

0x3c8a,	// (0x0000ed71) cell_fshwr2_syb_bg_pane_g1

0xecf8,	// (0x00019ddf) cell_fshwr2_syb_bg_pane_t1

0x6b83,	// (0x00011c6a) main_tmo_pane

0x1eb7,	// (0x0000cf9e) uni_indicator_pane_g1_ParamLimits

0x1ecc,	// (0x0000cfb3) uni_indicator_pane_g2_ParamLimits

0x1ee1,	// (0x0000cfc8) uni_indicator_pane_g3_ParamLimits

0x9aaf,	// (0x00014b96) uni_indicator_pane_g4_ParamLimits

0x9aaf,	// (0x00014b96) uni_indicator_pane_g4

0x9ac3,	// (0x00014baa) uni_indicator_pane_g5_ParamLimits

0x9ac3,	// (0x00014baa) uni_indicator_pane_g5

0x9ad7,	// (0x00014bbe) uni_indicator_pane_g6_ParamLimits

0x9ad7,	// (0x00014bbe) uni_indicator_pane_g6

0xf928,	// (0x0001aa0f) uni_indicator_pane_g_ParamLimits

0x2a5b,	// (0x0000db42) popup_tmo_note_window_ParamLimits

0x2a5b,	// (0x0000db42) popup_tmo_note_window

0x5cb6,	// (0x00010d9d) fshwr2_bg_pane

0xecd6,	// (0x00019dbd) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xecd6,	// (0x00019dbd) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb1,	// (0x0001af98) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb1,	// (0x0001af98) fshwr2_func_candi_cell_pane_g

0xb20a,	// (0x000162f1) bg_popup_window_pane_cp01

0xed07,	// (0x00019dee) bg_popup_window_pane_g1_cp01

0xed10,	// (0x00019df7) bg_popup_window_pane_cp22_ParamLimits

0xed10,	// (0x00019df7) bg_popup_window_pane_cp22

0xed1e,	// (0x00019e05) listscroll_tmo_link_pane_ParamLimits

0xed1e,	// (0x00019e05) listscroll_tmo_link_pane

0xed5e,	// (0x00019e45) popup_tmo_note_window_g1_ParamLimits

0xed5e,	// (0x00019e45) popup_tmo_note_window_g1

0xed6b,	// (0x00019e52) tmo_note_info_pane_ParamLimits

0xed6b,	// (0x00019e52) tmo_note_info_pane

0x3c92,	// (0x0000ed79) list_tmo_note_info_pane_g1_ParamLimits

0x3c92,	// (0x0000ed79) list_tmo_note_info_pane_g1

0xed85,	// (0x00019e6c) list_tmo_note_info_pane_g2_ParamLimits

0xed85,	// (0x00019e6c) list_tmo_note_info_pane_g2

0x0001,

0xfeb6,	// (0x0001af9d) list_tmo_note_info_pane_g_ParamLimits

0xfeb6,	// (0x0001af9d) list_tmo_note_info_pane_g

0xeda1,	// (0x00019e88) list_tmo_note_info_text_pane_ParamLimits

0xeda1,	// (0x00019e88) list_tmo_note_info_text_pane

0xede3,	// (0x00019eca) list_tmo_link_pane

0xedf0,	// (0x00019ed7) scroll_pane_cp20

0xedfd,	// (0x00019ee4) list_single_tmo_link_pane_ParamLimits

0xedfd,	// (0x00019ee4) list_single_tmo_link_pane

0xee0d,	// (0x00019ef4) list_single_tmo_link_pane_t1

0xee1b,	// (0x00019f02) list_tmo_note_info_text_pane_t1_ParamLimits

0xee1b,	// (0x00019f02) list_tmo_note_info_text_pane_t1

0x0b3a,	// (0x0000bc21) aid_size_touch_scroll_bar_cp01_ParamLimits

0x0b3a,	// (0x0000bc21) aid_size_touch_scroll_bar_cp01

0x0a55,	// (0x0000bb3c) aid_size_touch_slider_marker

0xdf51,	// (0x00019038) popup_settings_window_ParamLimits

0xdf51,	// (0x00019038) popup_settings_window

0x7d7c,	// (0x00012e63) popup_candi_list_indi_window

0x8345,	// (0x0001342c) aid_touch_navi_pane_ParamLimits

0x5425,	// (0x0001050c) rs_clock_indi_pane

0x542e,	// (0x00010515) sctrl_sk_bottom_pane_ParamLimits

0x543f,	// (0x00010526) sctrl_sk_top_pane_ParamLimits

0x5546,	// (0x0001062d) popup_fep_tooltip_window

0xe9ca,	// (0x00019ab1) aid_size_cell_widget_grid_ParamLimits

0x3a0c,	// (0x0000eaf3) cell_ai5_widget_pane_g1_ParamLimits

0x3a0c,	// (0x0000eaf3) cell_ai5_widget_pane_g1

0x3a5f,	// (0x0000eb46) cell_ai5_widget_pane_g6_ParamLimits

0x3a6b,	// (0x0000eb52) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe34,	// (0x0001af1b) cell_ai5_widget_pane_g_ParamLimits

0xfe34,	// (0x0001af1b) cell_ai5_widget_pane_g

0x3b6f,	// (0x0000ec56) cell_ai5_widget_pane_t10_ParamLimits

0x3b6f,	// (0x0000ec56) cell_ai5_widget_pane_t10

0x3b85,	// (0x0000ec6c) grid_ai5_widget_pane_ParamLimits

0xea81,	// (0x00019b68) cell_contacts_ai5_widget_pane_ParamLimits

0xea81,	// (0x00019b68) cell_contacts_ai5_widget_pane

0xebfc,	// (0x00019ce3) popup_discreet_window_t3_ParamLimits

0xebfc,	// (0x00019ce3) popup_discreet_window_t3

0xec55,	// (0x00019d3c) popup_fshwr2_char_preview_window_ParamLimits

0xec55,	// (0x00019d3c) popup_fshwr2_char_preview_window

0x3ca9,	// (0x0000ed90) tmo_note_info_pane_t1

0x3cbe,	// (0x0000eda5) tmo_note_info_pane_t2

0x3cd7,	// (0x0000edbe) tmo_note_info_pane_t3

0xedbf,	// (0x00019ea6) tmo_note_info_pane_t4

0xedd1,	// (0x00019eb8) tmo_note_info_pane_t5

0x0004,

0xfebb,	// (0x0001afa2) tmo_note_info_pane_t

0xede3,	// (0x00019eca) list_tmo_link_pane_ParamLimits

0xedf0,	// (0x00019ed7) scroll_pane_cp20_ParamLimits

0x5cb6,	// (0x00010d9d) bg_popup_fep_char_preview_window_cp01

0xee34,	// (0x00019f1b) popup_fshwr2_char_preview_window_t1

0xee42,	// (0x00019f29) popup_candi_list_indi_window_g1

0xee4b,	// (0x00019f32) bg_cell_contacts_ai5_widget_pane

0xee57,	// (0x00019f3e) cell_contacts_ai5_widget_pane_g1

0xee6b,	// (0x00019f52) cell_contacts_ai5_widget_pane_g2

0xee7a,	// (0x00019f61) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec6,	// (0x0001afad) cell_contacts_ai5_widget_pane_g

0xee8d,	// (0x00019f74) cell_contacts_ai5_widget_pane_t1

0x6b83,	// (0x00011c6a) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef07,	// (0x00019fee) settings_container_pane

0x79ce,	// (0x00012ab5) listscroll_set_pane_copy1

0xa6c5,	// (0x000157ac) scroll_pane_cp121_copy1

0xef13,	// (0x00019ffa) set_content_pane_copy1

0xef1b,	// (0x0001a002) aid_height_set_list_copy1_ParamLimits

0xef1b,	// (0x0001a002) aid_height_set_list_copy1

0x9cf2,	// (0x00014dd9) aid_size_parent_copy1_ParamLimits

0x9cf2,	// (0x00014dd9) aid_size_parent_copy1

0xef27,	// (0x0001a00e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef27,	// (0x0001a00e) button_value_adjust_pane_cp6_copy1

0x7d54,	// (0x00012e3b) list_highlight_pane_cp2_copy1_ParamLimits

0x7d54,	// (0x00012e3b) list_highlight_pane_cp2_copy1

0xef3b,	// (0x0001a022) list_set_pane_copy1_ParamLimits

0xef3b,	// (0x0001a022) list_set_pane_copy1

0xeea2,	// (0x00019f89) main_pane_set_t1_copy1_ParamLimits

0xeea2,	// (0x00019f89) main_pane_set_t1_copy1

0xeedc,	// (0x00019fc3) main_pane_set_t2_copy1_ParamLimits

0xeedc,	// (0x00019fc3) main_pane_set_t2_copy1

0xefe8,	// (0x0001a0cf) main_pane_set_t3_copy1

0xeff6,	// (0x0001a0dd) main_pane_set_t4_copy1

0xeefb,	// (0x00019fe2) set_content_pane_g1_copy1_ParamLimits

0xeefb,	// (0x00019fe2) set_content_pane_g1_copy1

0xf004,	// (0x0001a0eb) setting_code_pane_copy1

0xf00e,	// (0x0001a0f5) setting_slider_graphic_pane_copy1

0xf00e,	// (0x0001a0f5) setting_slider_pane_copy1

0xf00e,	// (0x0001a0f5) setting_text_pane_copy1

0xf018,	// (0x0001a0ff) setting_volume_pane_copy1

0xf021,	// (0x0001a108) settings_code_pane_cp2_copy1

0xf029,	// (0x0001a110) settings_code_pane_cp_copy1_ParamLimits

0xf029,	// (0x0001a110) settings_code_pane_cp_copy1

0xf03d,	// (0x0001a124) volume_set_pane_copy1

0xf059,	// (0x0001a140) volume_set_pane_g10_copy1

0xf061,	// (0x0001a148) volume_set_pane_g1_copy1

0xf069,	// (0x0001a150) volume_set_pane_g2_copy1

0xf071,	// (0x0001a158) volume_set_pane_g3_copy1

0xf079,	// (0x0001a160) volume_set_pane_g4_copy1

0xf081,	// (0x0001a168) volume_set_pane_g5_copy1

0xf089,	// (0x0001a170) volume_set_pane_g6_copy1

0xf091,	// (0x0001a178) volume_set_pane_g7_copy1

0xf099,	// (0x0001a180) volume_set_pane_g8_copy1

0xf0a1,	// (0x0001a188) volume_set_pane_g9_copy1

0x5daa,	// (0x00010e91) bg_set_opt_pane_cp_copy1_ParamLimits

0x5daa,	// (0x00010e91) bg_set_opt_pane_cp_copy1

0xf0a9,	// (0x0001a190) setting_slider_pane_t1_copy1_ParamLimits

0xf0a9,	// (0x0001a190) setting_slider_pane_t1_copy1

0xf0c7,	// (0x0001a1ae) setting_slider_pane_t2_copy1_ParamLimits

0xf0c7,	// (0x0001a1ae) setting_slider_pane_t2_copy1

0xf0e1,	// (0x0001a1c8) setting_slider_pane_t3_copy1_ParamLimits

0xf0e1,	// (0x0001a1c8) setting_slider_pane_t3_copy1

0xf0f9,	// (0x0001a1e0) slider_set_pane_copy1_ParamLimits

0xf0f9,	// (0x0001a1e0) slider_set_pane_copy1

0x6cbf,	// (0x00011da6) set_opt_bg_pane_g1_copy2

0x6cc7,	// (0x00011dae) set_opt_bg_pane_g2_copy2

0xf10f,	// (0x0001a1f6) set_opt_bg_pane_g3_copy2

0x6cd7,	// (0x00011dbe) set_opt_bg_pane_g4_copy2

0x6cdf,	// (0x00011dc6) set_opt_bg_pane_g5_copy2

0x6ce7,	// (0x00011dce) set_opt_bg_pane_g6_copy2

0xf119,	// (0x0001a200) set_opt_bg_pane_g7_copy2

0xf121,	// (0x0001a208) set_opt_bg_pane_g8_copy2

0xf12b,	// (0x0001a212) set_opt_bg_pane_g9_copy2

0x5c60,	// (0x00010d47) aid_size_touch_slider_mark_copy1_ParamLimits

0x5c60,	// (0x00010d47) aid_size_touch_slider_mark_copy1

0xf135,	// (0x0001a21c) slider_set_pane_g1_copy1

0x5c74,	// (0x00010d5b) slider_set_pane_g2_copy1

0x4e10,	// (0x0000fef7) slider_set_pane_g3_copy1_ParamLimits

0x4e10,	// (0x0000fef7) slider_set_pane_g3_copy1

0x4e24,	// (0x0000ff0b) slider_set_pane_g4_copy1_ParamLimits

0x4e24,	// (0x0000ff0b) slider_set_pane_g4_copy1

0x4e3c,	// (0x0000ff23) slider_set_pane_g5_copy1_ParamLimits

0x4e3c,	// (0x0000ff23) slider_set_pane_g5_copy1

0x4e10,	// (0x0000fef7) slider_set_pane_g6_copy1_ParamLimits

0x4e10,	// (0x0000fef7) slider_set_pane_g6_copy1

0x5c7c,	// (0x00010d63) slider_set_pane_g7_copy1_ParamLimits

0x5c7c,	// (0x00010d63) slider_set_pane_g7_copy1

0x5cca,	// (0x00010db1) bg_set_opt_pane_cp2_copy1

0xf13e,	// (0x0001a225) setting_slider_graphic_pane_g1_copy1

0xf147,	// (0x0001a22e) setting_slider_graphic_pane_t1_copy1

0xf157,	// (0x0001a23e) setting_slider_graphic_pane_t2_copy1

0xf167,	// (0x0001a24e) slider_set_pane_cp_copy1

0xf177,	// (0x0001a25e) input_focus_pane_cp1_copy1

0xf180,	// (0x0001a267) list_set_text_pane_copy1

0xf188,	// (0x0001a26f) setting_text_pane_g1_copy1

0xf191,	// (0x0001a278) set_text_pane_t1_copy1

0xf177,	// (0x0001a25e) input_focus_pane_cp2_copy1

0xf188,	// (0x0001a26f) setting_code_pane_g1_copy1

0xf1ae,	// (0x0001a295) setting_code_pane_t1_copy1

0xf045,	// (0x0001a12c) list_set_graphic_pane_copy1

0x5cca,	// (0x00010db1) bg_set_opt_pane_cp4_copy1

0x76d0,	// (0x000127b7) list_set_graphic_pane_g1_copy1_ParamLimits

0x76d0,	// (0x000127b7) list_set_graphic_pane_g1_copy1

0xf1bc,	// (0x0001a2a3) list_set_graphic_pane_g2_copy1

0x76e8,	// (0x000127cf) list_set_graphic_pane_t1_copy1_ParamLimits

0x76e8,	// (0x000127cf) list_set_graphic_pane_t1_copy1

0xb20a,	// (0x000162f1) rs_clock_indi_pane_g1

0xf1c4,	// (0x0001a2ab) rs_clock_indi_pane_t1

0xf1d2,	// (0x0001a2b9) rs_indi_pane

0xf1da,	// (0x0001a2c1) rs_indi_pane_g1

0xf1e3,	// (0x0001a2ca) rs_indi_pane_g2

0xf1ec,	// (0x0001a2d3) rs_indi_pane_g3

0x0002,

0xfecd,	// (0x0001afb4) rs_indi_pane_g

0x79ce,	// (0x00012ab5) bg_popup_preview_window_pane_cp03

0xf1f5,	// (0x0001a2dc) popup_fep_tooltip_window_t1

0xc097,	// (0x0001717e) popup_note2_window_g2_ParamLimits

0xc097,	// (0x0001717e) popup_note2_window_g2

0x0001,

0xfc6d,	// (0x0001ad54) popup_note2_window_g_ParamLimits

0xfc6d,	// (0x0001ad54) popup_note2_window_g

0xc679,	// (0x00017760) bg_popup_sub_pane_cp11_ParamLimits

0xc686,	// (0x0001776d) cell_ai3_links_pane_g1_ParamLimits

0xc69d,	// (0x00017784) cell_ai3_links_pane_t1

0xf191,	// (0x0001a278) set_text_pane_t1_copy1_ParamLimits

0x78dd,	// (0x000129c4) cell_graphic_popup_pane_cp2_ParamLimits

0x78dd,	// (0x000129c4) cell_graphic_popup_pane_cp2

0xf203,	// (0x0001a2ea) cell_graphic_popup_pane_g1_cp2

0x6362,	// (0x00011449) cell_graphic_popup_pane_g2_cp2

0xf20b,	// (0x0001a2f2) cell_graphic_popup_pane_g3_cp2

0xf213,	// (0x0001a2fa) cell_graphic_popup_pane_t2_cp2

0x6373,	// (0x0001145a) grid_highlight_pane_cp3_cp2

0x70a5,	// (0x0001218c) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x6b83,	// (0x00011c6a) main_tmo_pane_ParamLimits

0x2a4f,	// (0x0000db36) popup_tmo_big_image_note_window

0x39fc,	// (0x0000eae3) cell_ai5_widget_list_pane

0x3a04,	// (0x0000eaeb) cell_ai5_widget_lrg_icon_pane

0x3ca9,	// (0x0000ed90) tmo_note_info_pane_t1_ParamLimits

0x3cbe,	// (0x0000eda5) tmo_note_info_pane_t2_ParamLimits

0x3cd7,	// (0x0000edbe) tmo_note_info_pane_t3_ParamLimits

0xedbf,	// (0x00019ea6) tmo_note_info_pane_t4_ParamLimits

0xedd1,	// (0x00019eb8) tmo_note_info_pane_t5_ParamLimits

0xfebb,	// (0x0001afa2) tmo_note_info_pane_t_ParamLimits

0xef07,	// (0x00019fee) settings_container_pane_ParamLimits

0xf16f,	// (0x0001a256) indicator_popup_pane_cp5

0xf16f,	// (0x0001a256) indicator_popup_pane_cp6

0xf045,	// (0x0001a12c) list_set_graphic_pane_copy1_ParamLimits

0x5cb6,	// (0x00010d9d) bg_popup_window_pane_cp23

0xf221,	// (0x0001a308) popup_tmo_big_image_note_window_g1

0xf22c,	// (0x0001a313) popup_tmo_big_image_note_window_t1

0xf23c,	// (0x0001a323) popup_tmo_big_image_note_window_t2

0xf24c,	// (0x0001a333) popup_tmo_big_image_note_window_t3

0x0002,

0xfed4,	// (0x0001afbb) popup_tmo_big_image_note_window_t

0x3cec,	// (0x0000edd3) cell_ai5_widget_lrg_icon_pane_g1

0x3cf4,	// (0x0000eddb) cell_ai5_widget_lrg_icon_pane_t1

0x3d02,	// (0x0000ede9) cell_ai5_widget_list_row_pane_ParamLimits

0x3d02,	// (0x0000ede9) cell_ai5_widget_list_row_pane

0x3d1b,	// (0x0000ee02) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3d1b,	// (0x0000ee02) cell_ai5_widget_list_row_pane_g1

0x3d28,	// (0x0000ee0f) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3d28,	// (0x0000ee0f) cell_ai5_widget_list_row_pane_t1

0x3d40,	// (0x0000ee27) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3d40,	// (0x0000ee27) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedb,	// (0x0001afc2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedb,	// (0x0001afc2) cell_ai5_widget_list_row_pane_t

0x41e4,	// (0x0000f2cb) main_fep_vtchi_ss_pane

0xf25c,	// (0x0001a343) popup_fep_char_pre_window

0xf264,	// (0x0001a34b) popup_fep_ituss_window

0xf285,	// (0x0001a36c) popup_fep_vkbss_window

0xf2a4,	// (0x0001a38b) grid_vkbss_keypad_pane_ParamLimits

0xf2a4,	// (0x0001a38b) grid_vkbss_keypad_pane

0xf2b4,	// (0x0001a39b) ituss_keypad_pane

0xf2cc,	// (0x0001a3b3) aid_vkbss_key_offset_ParamLimits

0xf2cc,	// (0x0001a3b3) aid_vkbss_key_offset

0xf2d8,	// (0x0001a3bf) cell_vkbss_key_pane_ParamLimits

0xf2d8,	// (0x0001a3bf) cell_vkbss_key_pane

0xf2ee,	// (0x0001a3d5) bg_cell_vkbss_key_g1_ParamLimits

0xf2ee,	// (0x0001a3d5) bg_cell_vkbss_key_g1

0xf2fa,	// (0x0001a3e1) cell_vkbss_key_3p_pane_ParamLimits

0xf2fa,	// (0x0001a3e1) cell_vkbss_key_3p_pane

0xf314,	// (0x0001a3fb) cell_vkbss_key_g1_ParamLimits

0xf314,	// (0x0001a3fb) cell_vkbss_key_g1

0xf32e,	// (0x0001a415) cell_vkbss_key_t1_ParamLimits

0xf32e,	// (0x0001a415) cell_vkbss_key_t1

0xf359,	// (0x0001a440) cell_ituss_key_pane_ParamLimits

0xf359,	// (0x0001a440) cell_ituss_key_pane

0xf369,	// (0x0001a450) bg_cell_ituss_key_g1_ParamLimits

0xf369,	// (0x0001a450) bg_cell_ituss_key_g1

0xf375,	// (0x0001a45c) cell_ituss_key_pane_g1_ParamLimits

0xf375,	// (0x0001a45c) cell_ituss_key_pane_g1

0xf381,	// (0x0001a468) cell_ituss_key_pane_g2_ParamLimits

0xf381,	// (0x0001a468) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x0001afc7) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0001afc7) cell_ituss_key_pane_g

0xf39a,	// (0x0001a481) cell_ituss_key_t1_ParamLimits

0xf39a,	// (0x0001a481) cell_ituss_key_t1

0xf3c8,	// (0x0001a4af) cell_ituss_key_t2_ParamLimits

0xf3c8,	// (0x0001a4af) cell_ituss_key_t2

0xf3f9,	// (0x0001a4e0) cell_ituss_key_t3_ParamLimits

0xf3f9,	// (0x0001a4e0) cell_ituss_key_t3

0xf42a,	// (0x0001a511) cell_ituss_key_t4_ParamLimits

0xf42a,	// (0x0001a511) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x0001afcc) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x0001afcc) cell_ituss_key_t

0xf45b,	// (0x0001a542) cell_vkbss_key_3p_pane_g1

0xf463,	// (0x0001a54a) cell_vkbss_key_3p_pane_g2

0xf46b,	// (0x0001a552) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x0001afd5) cell_vkbss_key_3p_pane_g

0x5cb6,	// (0x00010d9d) bg_popup_fep_char_preview_window_cp02

0xf473,	// (0x0001a55a) popup_fep_char_pre_window_t1

0x39f2,	// (0x0000ead9) main_ai5_sk_pane

0xee4b,	// (0x00019f32) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee57,	// (0x00019f3e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xee6b,	// (0x00019f52) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee7a,	// (0x00019f61) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec6,	// (0x0001afad) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee8d,	// (0x00019f74) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x6b83,	// (0x00011c6a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3d52,	// (0x0000ee39) main_ai5_sk_pane_g1

0x8d9b,	// (0x00013e82) popup_query_code_window_g1

0xf27a,	// (0x0001a361) popup_fep_vkb_icf_pane

0xf28e,	// (0x0001a375) popup_fep_vtchi_icf_pane

0x6b83,	// (0x00011c6a) bg_icf_pane

0xf491,	// (0x0001a578) list_vkb_icf_pane

0x6b83,	// (0x00011c6a) bg_icf_pane_cp01

0xca0c,	// (0x00017af3) vtchi_icf_list_pane

0xf4b1,	// (0x0001a598) list_vkb_icf_pane_t1_ParamLimits

0xf4b1,	// (0x0001a598) list_vkb_icf_pane_t1

0xf4cb,	// (0x0001a5b2) vtchi_icf_list_pane_t1_ParamLimits

0xf4cb,	// (0x0001a5b2) vtchi_icf_list_pane_t1

0xf264,	// (0x0001a34b) popup_fep_ituss_window_ParamLimits

0xf28e,	// (0x0001a375) popup_fep_vtchi_icf_pane_ParamLimits

0xf2b4,	// (0x0001a39b) ituss_keypad_pane_ParamLimits

0xf2c3,	// (0x0001a3aa) ituss_sks_pane

0x6b83,	// (0x00011c6a) bg_icf_pane_ParamLimits

0xf482,	// (0x0001a569) icf_edit_indi_pane_ParamLimits

0xf482,	// (0x0001a569) icf_edit_indi_pane

0xf491,	// (0x0001a578) list_vkb_icf_pane_ParamLimits

0x6b83,	// (0x00011c6a) bg_icf_pane_cp01_ParamLimits

0xf49d,	// (0x0001a584) icf_edit_indi_pane_cp01_ParamLimits

0xf49d,	// (0x0001a584) icf_edit_indi_pane_cp01

0xf4a9,	// (0x0001a590) vtchi_query_pane

0xb4a3,	// (0x0001658a) icf_edit_indi_pane_g1_ParamLimits

0xb4a3,	// (0x0001658a) icf_edit_indi_pane_g1

0xf4f0,	// (0x0001a5d7) icf_edit_indi_pane_g2_ParamLimits

0xf4f0,	// (0x0001a5d7) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x0001afdc) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x0001afdc) icf_edit_indi_pane_g

0xf4fc,	// (0x0001a5e3) icf_edit_indi_pane_t1

0xf50a,	// (0x0001a5f1) bg_input_focus_pane_cp042

0x6546,	// (0x0001162d) vtchi_button_pane

0xf513,	// (0x0001a5fa) vtchi_query_pane_t1

0xf521,	// (0x0001a608) vtchi_query_pane_t2

0xf52f,	// (0x0001a616) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0001afe1) vtchi_query_pane_t

0x5cb6,	// (0x00010d9d) bg_button_pane_cp13

0xf53d,	// (0x0001a624) vtchi_button_pane_g1

0xcf57,	// (0x0001803e) ituss_sks_pane_g1

0xf545,	// (0x0001a62c) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0001afe8) ituss_sks_pane_g

0xf54e,	// (0x0001a635) ituss_sks_pane_t1

0xf55c,	// (0x0001a643) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0001afed) ituss_sks_pane_t

0xabe6,	// (0x00015ccd) indicator_nsta_pane_cp_g1

0xabef,	// (0x00015cd6) indicator_nsta_pane_cp_g2

0xabf7,	// (0x00015cde) indicator_nsta_pane_cp_g3

0xabff,	// (0x00015ce6) indicator_nsta_pane_cp_g4

0xac07,	// (0x00015cee) indicator_nsta_pane_cp_g5

0xac0f,	// (0x00015cf6) indicator_nsta_pane_cp_g6

0x0005,

0xfaab,	// (0x0001ab92) indicator_nsta_pane_cp_g

0x37a8,	// (0x0000e88f) cell_graphic2_pane_t2_ParamLimits

0x37a8,	// (0x0000e88f) cell_graphic2_pane_t2

0x0001,

0xfdbd,	// (0x0001aea4) cell_graphic2_pane_t_ParamLimits

0xfdbd,	// (0x0001aea4) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

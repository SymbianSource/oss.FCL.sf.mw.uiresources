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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00001769 };

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
0xa385,	// (0x0000baee) Screen

0xa391,	// (0x0000bafa) application_window_ParamLimits

0xa391,	// (0x0000bafa) application_window

0xe976,	// (0x000100df) screen_g1

0xa3c9,	// (0x0000bb32) area_bottom_pane_ParamLimits

0xa3c9,	// (0x0000bb32) area_bottom_pane

0xe9a0,	// (0x00010109) area_top_pane_ParamLimits

0xe9a0,	// (0x00010109) area_top_pane

0xea34,	// (0x0001019d) main_pane_ParamLimits

0xea34,	// (0x0001019d) main_pane

0xeaef,	// (0x00010258) misc_graphics

0xbcf8,	// (0x0000d461) battery_pane_ParamLimits

0xbcf8,	// (0x0000d461) battery_pane

0x2ada,	// (0x00004243) bg_status_flat_pane_g8

0x2ae2,	// (0x0000424b) bg_status_flat_pane_g9

0x1c44,	// (0x000033ad) context_pane_ParamLimits

0x1c44,	// (0x000033ad) context_pane

0xbe6f,	// (0x0000d5d8) navi_pane_ParamLimits

0xbe6f,	// (0x0000d5d8) navi_pane

0xbef9,	// (0x0000d662) signal_pane_ParamLimits

0xbef9,	// (0x0000d662) signal_pane

0x0008,

0xf843,	// (0x00010fac) bg_status_flat_pane_g

0xbf89,	// (0x0000d6f2) status_pane_g1_ParamLimits

0xbf89,	// (0x0000d6f2) status_pane_g1

0xbf9f,	// (0x0000d708) status_pane_g2_ParamLimits

0xbf9f,	// (0x0000d708) status_pane_g2

0x1e7d,	// (0x000035e6) status_pane_g3_ParamLimits

0x1e7d,	// (0x000035e6) status_pane_g3

0x0004,

0xf776,	// (0x00010edf) status_pane_g_ParamLimits

0xf776,	// (0x00010edf) status_pane_g

0xbfab,	// (0x0000d714) title_pane_ParamLimits

0xbfab,	// (0x0000d714) title_pane

0xc012,	// (0x0000d77b) uni_indicator_pane_ParamLimits

0xc012,	// (0x0000d77b) uni_indicator_pane

0x146b,	// (0x00002bd4) bg_list_pane_ParamLimits

0x146b,	// (0x00002bd4) bg_list_pane

0xb532,	// (0x0000cc9b) find_pane

0x2251,	// (0x000039ba) listscroll_app_pane_ParamLimits

0x2251,	// (0x000039ba) listscroll_app_pane

0x149f,	// (0x00002c08) listscroll_form_pane

0xb53a,	// (0x0000cca3) listscroll_gen_pane_ParamLimits

0xb53a,	// (0x0000cca3) listscroll_gen_pane

0x14bb,	// (0x00002c24) listscroll_set_pane

0x38e7,	// (0x00005050) main_idle_act_pane

0x0f31,	// (0x0000269a) main_idle_trad_pane

0x0f31,	// (0x0000269a) main_list_empty_pane

0x1493,	// (0x00002bfc) main_midp_pane

0x14d5,	// (0x00002c3e) main_pane_g1_ParamLimits

0x14d5,	// (0x00002c3e) main_pane_g1

0xb54e,	// (0x0000ccb7) popup_ai_message_window_ParamLimits

0xb54e,	// (0x0000ccb7) popup_ai_message_window

0xb5ee,	// (0x0000cd57) popup_fep_china_uni_window_ParamLimits

0xb5ee,	// (0x0000cd57) popup_fep_china_uni_window

0x15ff,	// (0x00002d68) popup_fep_japan_candidate_window_ParamLimits

0x15ff,	// (0x00002d68) popup_fep_japan_candidate_window

0x1629,	// (0x00002d92) popup_fep_japan_predictive_window_ParamLimits

0x1629,	// (0x00002d92) popup_fep_japan_predictive_window

0xb64e,	// (0x0000cdb7) popup_find_window

0xb66b,	// (0x0000cdd4) popup_grid_graphic_window_ParamLimits

0xb66b,	// (0x0000cdd4) popup_grid_graphic_window

0x169c,	// (0x00002e05) popup_large_graphic_colour_window

0xb715,	// (0x0000ce7e) popup_menu_window_ParamLimits

0xb715,	// (0x0000ce7e) popup_menu_window

0xb905,	// (0x0000d06e) popup_note_image_window

0xb8c5,	// (0x0000d02e) popup_note_wait_window_ParamLimits

0xb8c5,	// (0x0000d02e) popup_note_wait_window

0xb91d,	// (0x0000d086) popup_note_window_ParamLimits

0xb91d,	// (0x0000d086) popup_note_window

0xb9cb,	// (0x0000d134) popup_query_code_window_ParamLimits

0xb9cb,	// (0x0000d134) popup_query_code_window

0x1908,	// (0x00003071) popup_query_data_code_window_ParamLimits

0x1908,	// (0x00003071) popup_query_data_code_window

0xba0b,	// (0x0000d174) popup_query_data_window_ParamLimits

0xba0b,	// (0x0000d174) popup_query_data_window

0xba9f,	// (0x0000d208) popup_query_sat_info_window_ParamLimits

0xba9f,	// (0x0000d208) popup_query_sat_info_window

0xbb48,	// (0x0000d2b1) popup_snote_single_graphic_window_ParamLimits

0xbb48,	// (0x0000d2b1) popup_snote_single_graphic_window

0xbb48,	// (0x0000d2b1) popup_snote_single_text_window_ParamLimits

0xbb48,	// (0x0000d2b1) popup_snote_single_text_window

0x19a3,	// (0x0000310c) popup_sub_window_general

0x1ae9,	// (0x00003252) popup_window_general_ParamLimits

0x1ae9,	// (0x00003252) popup_window_general

0x1b02,	// (0x0000326b) power_save_pane

0xb38e,	// (0x0000caf7) control_pane_g1_ParamLimits

0xb38e,	// (0x0000caf7) control_pane_g1

0xb3b7,	// (0x0000cb20) control_pane_g2_ParamLimits

0xb3b7,	// (0x0000cb20) control_pane_g2

0x12f6,	// (0x00002a5f) control_pane_g3_ParamLimits

0x12f6,	// (0x00002a5f) control_pane_g3

0x0007,

0xf75e,	// (0x00010ec7) control_pane_g_ParamLimits

0xf75e,	// (0x00010ec7) control_pane_g

0xb41d,	// (0x0000cb86) control_pane_t1_ParamLimits

0xb41d,	// (0x0000cb86) control_pane_t1

0xb485,	// (0x0000cbee) control_pane_t2_ParamLimits

0xb485,	// (0x0000cbee) control_pane_t2

0x0002,

0xf76f,	// (0x00010ed8) control_pane_t_ParamLimits

0xf76f,	// (0x00010ed8) control_pane_t

0xb2e7,	// (0x0000ca50) navi_navi_volume_pane_cp1

0xb2ef,	// (0x0000ca58) status_small_icon_pane

0x11d9,	// (0x00002942) status_small_pane_g1_ParamLimits

0x11d9,	// (0x00002942) status_small_pane_g1

0xb2f7,	// (0x0000ca60) status_small_pane_g2_ParamLimits

0xb2f7,	// (0x0000ca60) status_small_pane_g2

0xb303,	// (0x0000ca6c) status_small_pane_g3_ParamLimits

0xb303,	// (0x0000ca6c) status_small_pane_g3

0xb30f,	// (0x0000ca78) status_small_pane_g4_ParamLimits

0xb30f,	// (0x0000ca78) status_small_pane_g4

0xb31b,	// (0x0000ca84) status_small_pane_g5_ParamLimits

0xb31b,	// (0x0000ca84) status_small_pane_g5

0xb329,	// (0x0000ca92) status_small_pane_g6_ParamLimits

0xb329,	// (0x0000ca92) status_small_pane_g6

0x0007,

0xf74d,	// (0x00010eb6) status_small_pane_g_ParamLimits

0xf74d,	// (0x00010eb6) status_small_pane_g

0xb358,	// (0x0000cac1) status_small_pane_t1

0xb37a,	// (0x0000cae3) status_small_wait_pane_ParamLimits

0xb37a,	// (0x0000cae3) status_small_wait_pane

0xb0c8,	// (0x0000c831) aid_levels_signal_ParamLimits

0xb0c8,	// (0x0000c831) aid_levels_signal

0xb0e0,	// (0x0000c849) signal_pane_g1_ParamLimits

0xb0e0,	// (0x0000c849) signal_pane_g1

0xb0fb,	// (0x0000c864) signal_pane_g2_ParamLimits

0xb0fb,	// (0x0000c864) signal_pane_g2

0x0003,

0xf6de,	// (0x00010e47) signal_pane_g_ParamLimits

0xf6de,	// (0x00010e47) signal_pane_g

0x07bc,	// (0x00001f25) context_pane_g1

0xa5b5,	// (0x0000bd1e) title_pane_g1

0xa5f8,	// (0x0000bd61) title_pane_t1

0xeb59,	// (0x000102c2) title_pane_t2

0xeb7f,	// (0x000102e8) title_pane_t3

0x0002,

0xf532,	// (0x00010c9b) title_pane_t

0xc03a,	// (0x0000d7a3) aid_levels_battery_ParamLimits

0xc03a,	// (0x0000d7a3) aid_levels_battery

0xc056,	// (0x0000d7bf) battery_pane_g1_ParamLimits

0xc056,	// (0x0000d7bf) battery_pane_g1

0xc073,	// (0x0000d7dc) battery_pane_g2_ParamLimits

0xc073,	// (0x0000d7dc) battery_pane_g2

0x0001,

0xf781,	// (0x00010eea) battery_pane_g_ParamLimits

0xf781,	// (0x00010eea) battery_pane_g

0xc46a,	// (0x0000dbd3) uni_indicator_pane_g1

0xc480,	// (0x0000dbe9) uni_indicator_pane_g2

0xc496,	// (0x0000dbff) uni_indicator_pane_g3

0x0005,

0xf8eb,	// (0x00011054) uni_indicator_pane_g

0x0d94,	// (0x000024fd) navi_icon_pane_ParamLimits

0x0d94,	// (0x000024fd) navi_icon_pane

0x0cd0,	// (0x00002439) navi_midp_pane

0x0db0,	// (0x00002519) navi_navi_pane

0x0dba,	// (0x00002523) navi_text_pane_ParamLimits

0x0dba,	// (0x00002523) navi_text_pane

0xe976,	// (0x000100df) status_small_wait_pane_g1

0xef4d,	// (0x000106b6) status_small_wait_pane_g2

0x0001,

0xf8e6,	// (0x0001104f) status_small_wait_pane_g

0xc409,	// (0x0000db72) navi_navi_icon_text_pane

0xc411,	// (0x0000db7a) navi_navi_pane_g1_ParamLimits

0xc411,	// (0x0000db7a) navi_navi_pane_g1

0xc423,	// (0x0000db8c) navi_navi_pane_g2_ParamLimits

0xc423,	// (0x0000db8c) navi_navi_pane_g2

0x0001,

0xf8b4,	// (0x0001101d) navi_navi_pane_g_ParamLimits

0xf8b4,	// (0x0001101d) navi_navi_pane_g

0x32cf,	// (0x00004a38) navi_navi_tabs_pane

0xc435,	// (0x0000db9e) navi_navi_text_pane

0xc409,	// (0x0000db72) navi_navi_volume_pane

0xc3f7,	// (0x0000db60) navi_text_pane_t1

0xc3eb,	// (0x0000db54) navi_icon_pane_g1

0x31c6,	// (0x0000492f) navi_navi_text_pane_t1

0xc3da,	// (0x0000db43) navi_navi_volume_pane_g1

0xc3e2,	// (0x0000db4b) volume_small_pane

0xc336,	// (0x0000da9f) navi_navi_icon_text_pane_g1

0xc33e,	// (0x0000daa7) navi_navi_icon_text_pane_t1

0x0db0,	// (0x00002519) navi_tabs_2_long_pane

0x0db0,	// (0x00002519) navi_tabs_2_pane

0x0db0,	// (0x00002519) navi_tabs_3_long_pane

0x0db0,	// (0x00002519) navi_tabs_3_pane

0x0db0,	// (0x00002519) navi_tabs_4_pane

0xc316,	// (0x0000da7f) tabs_2_active_pane_ParamLimits

0xc316,	// (0x0000da7f) tabs_2_active_pane

0xc326,	// (0x0000da8f) tabs_2_passive_pane_ParamLimits

0xc326,	// (0x0000da8f) tabs_2_passive_pane

0xc2e4,	// (0x0000da4d) tabs_3_active_pane_ParamLimits

0xc2e4,	// (0x0000da4d) tabs_3_active_pane

0xc2f4,	// (0x0000da5d) tabs_3_passive_pane_ParamLimits

0xc2f4,	// (0x0000da5d) tabs_3_passive_pane

0xc305,	// (0x0000da6e) tabs_3_passive_pane_cp_ParamLimits

0xc305,	// (0x0000da6e) tabs_3_passive_pane_cp

0xc2a0,	// (0x0000da09) tabs_4_active_pane_ParamLimits

0xc2a0,	// (0x0000da09) tabs_4_active_pane

0xc2b1,	// (0x0000da1a) tabs_4_passive_pane_ParamLimits

0xc2b1,	// (0x0000da1a) tabs_4_passive_pane

0xc2c2,	// (0x0000da2b) tabs_4_passive_pane_cp_ParamLimits

0xc2c2,	// (0x0000da2b) tabs_4_passive_pane_cp

0xc2d3,	// (0x0000da3c) tabs_4_passive_pane_cp2_ParamLimits

0xc2d3,	// (0x0000da3c) tabs_4_passive_pane_cp2

0xc27c,	// (0x0000d9e5) tabs_2_long_active_pane_ParamLimits

0xc27c,	// (0x0000d9e5) tabs_2_long_active_pane

0xc28e,	// (0x0000d9f7) tabs_2_long_passive_pane_ParamLimits

0xc28e,	// (0x0000d9f7) tabs_2_long_passive_pane

0xc231,	// (0x0000d99a) tabs_3_long_active_pane_ParamLimits

0xc231,	// (0x0000d99a) tabs_3_long_active_pane

0xc24a,	// (0x0000d9b3) tabs_3_long_passive_pane_ParamLimits

0xc24a,	// (0x0000d9b3) tabs_3_long_passive_pane

0xc263,	// (0x0000d9cc) tabs_3_long_passive_pane_cp_ParamLimits

0xc263,	// (0x0000d9cc) tabs_3_long_passive_pane_cp

0x2f3f,	// (0x000046a8) volume_small_pane_g1

0xc1e0,	// (0x0000d949) volume_small_pane_g2

0xc1e9,	// (0x0000d952) volume_small_pane_g3

0xc1f2,	// (0x0000d95b) volume_small_pane_g4

0xc1fb,	// (0x0000d964) volume_small_pane_g5

0xc204,	// (0x0000d96d) volume_small_pane_g6

0xc20d,	// (0x0000d976) volume_small_pane_g7

0xc216,	// (0x0000d97f) volume_small_pane_g8

0xc21f,	// (0x0000d988) volume_small_pane_g9

0xc228,	// (0x0000d991) volume_small_pane_g10

0x0009,

0xf880,	// (0x00010fe9) volume_small_pane_g

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp2_ParamLimits

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp2

0xa684,	// (0x0000bded) tabs_3_active_pane_g1

0xa68c,	// (0x0000bdf5) tabs_3_active_pane_t1

0xeb91,	// (0x000102fa) bg_passive_tab_pane_cp2_ParamLimits

0xeb91,	// (0x000102fa) bg_passive_tab_pane_cp2

0xa684,	// (0x0000bded) tabs_3_passive_pane_g1

0xa68c,	// (0x0000bdf5) tabs_3_passive_pane_t1

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp3_ParamLimits

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp3

0xa69e,	// (0x0000be07) tabs_4_active_pane_g1

0xa6a6,	// (0x0000be0f) tabs_4_active_pane_t1

0xeb91,	// (0x000102fa) bg_passive_tab_pane_cp3_ParamLimits

0xeb91,	// (0x000102fa) bg_passive_tab_pane_cp3

0xa69e,	// (0x0000be07) tabs_4_1_passive_pane_g1

0xa6a6,	// (0x0000be0f) tabs_4_1_passive_pane_t1

0x1493,	// (0x00002bfc) list_highlight_pane_cp2

0xc529,	// (0x0000dc92) list_set_pane_ParamLimits

0xc529,	// (0x0000dc92) list_set_pane

0xc5eb,	// (0x0000dd54) main_pane_set_t1_ParamLimits

0xc5eb,	// (0x0000dd54) main_pane_set_t1

0xc60b,	// (0x0000dd74) main_pane_set_t2_ParamLimits

0xc60b,	// (0x0000dd74) main_pane_set_t2

0xc61f,	// (0x0000dd88) main_pane_set_t3_ParamLimits

0xc61f,	// (0x0000dd88) main_pane_set_t3

0xc633,	// (0x0000dd9c) main_pane_set_t4_ParamLimits

0xc633,	// (0x0000dd9c) main_pane_set_t4

0x0003,

0xf950,	// (0x000110b9) main_pane_set_t_ParamLimits

0xf950,	// (0x000110b9) main_pane_set_t

0xc647,	// (0x0000ddb0) setting_code_pane

0x3a35,	// (0x0000519e) setting_slider_graphic_pane

0x3a35,	// (0x0000519e) setting_slider_pane

0x3a35,	// (0x0000519e) setting_text_pane

0x3a35,	// (0x0000519e) setting_volume_pane

0xeb9f,	// (0x00010308) volume_set_pane

0xeba9,	// (0x00010312) bg_set_opt_pane_cp

0xebb7,	// (0x00010320) setting_slider_pane_t1

0xebd0,	// (0x00010339) setting_slider_pane_t2

0xebea,	// (0x00010353) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00010ca2) setting_slider_pane_t

0xec02,	// (0x0001036b) slider_set_pane

0xeaef,	// (0x00010258) bg_set_opt_pane_cp2

0xec18,	// (0x00010381) setting_slider_graphic_pane_g1

0xec21,	// (0x0001038a) setting_slider_graphic_pane_t1

0xec31,	// (0x0001039a) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00010ca9) setting_slider_graphic_pane_t

0xec41,	// (0x000103aa) slider_set_pane_cp

0xeaef,	// (0x00010258) input_focus_pane_cp1

0x38ce,	// (0x00005037) list_set_text_pane

0xe976,	// (0x000100df) setting_text_pane_g1

0xeaef,	// (0x00010258) input_focus_pane_cp2

0xe976,	// (0x000100df) setting_code_pane_g1

0xec49,	// (0x000103b2) setting_code_pane_t1

0xec57,	// (0x000103c0) set_text_pane_t1_ParamLimits

0xec57,	// (0x000103c0) set_text_pane_t1

0xf3dc,	// (0x00010b45) set_opt_bg_pane_g1

0xf3e4,	// (0x00010b4d) set_opt_bg_pane_g2

0x38a6,	// (0x0000500f) set_opt_bg_pane_g3

0xf3f4,	// (0x00010b5d) set_opt_bg_pane_g4

0xf3fc,	// (0x00010b65) set_opt_bg_pane_g5

0xf404,	// (0x00010b6d) set_opt_bg_pane_g6

0x38b0,	// (0x00005019) set_opt_bg_pane_g7

0x38ba,	// (0x00005023) set_opt_bg_pane_g8

0x38c4,	// (0x0000502d) set_opt_bg_pane_g9

0x0008,

0xf93d,	// (0x000110a6) set_opt_bg_pane_g

0x3835,	// (0x00004f9e) slider_set_pane_g1

0x3842,	// (0x00004fab) slider_set_pane_g2

0x0006,

0xf92e,	// (0x00011097) slider_set_pane_g

0x369d,	// (0x00004e06) volume_set_pane_g1

0x36a7,	// (0x00004e10) volume_set_pane_g2

0x36b1,	// (0x00004e1a) volume_set_pane_g3

0x36bb,	// (0x00004e24) volume_set_pane_g4

0x36c5,	// (0x00004e2e) volume_set_pane_g5

0x36cf,	// (0x00004e38) volume_set_pane_g6

0x36d9,	// (0x00004e42) volume_set_pane_g7

0x36e3,	// (0x00004e4c) volume_set_pane_g8

0x36ed,	// (0x00004e56) volume_set_pane_g9

0x36f7,	// (0x00004e60) volume_set_pane_g10

0x0009,

0xf906,	// (0x0001106f) volume_set_pane_g

0xa6b8,	// (0x0000be21) indicator_pane_ParamLimits

0xa6b8,	// (0x0000be21) indicator_pane

0xa6e4,	// (0x0000be4d) main_idle_pane_g2_ParamLimits

0xa6e4,	// (0x0000be4d) main_idle_pane_g2

0xa71c,	// (0x0000be85) main_pane_idle_g1_ParamLimits

0xa71c,	// (0x0000be85) main_pane_idle_g1

0xec71,	// (0x000103da) popup_clock_digital_analogue_window_ParamLimits

0xec71,	// (0x000103da) popup_clock_digital_analogue_window

0xa746,	// (0x0000beaf) soft_indicator_pane_ParamLimits

0xa746,	// (0x0000beaf) soft_indicator_pane

0xa762,	// (0x0000becb) wallpaper_pane_ParamLimits

0xa762,	// (0x0000becb) wallpaper_pane

0xe976,	// (0x000100df) wallpaper_pane_g1

0xa774,	// (0x0000bedd) indicator_pane_g1_ParamLimits

0xa774,	// (0x0000bedd) indicator_pane_g1

0x3e3a,	// (0x000055a3) navi_navi_icon_text_pane_srt_g1

0xec9f,	// (0x00010408) soft_indicator_pane_t1

0xecb9,	// (0x00010422) aid_ps_area_pane

0xa78d,	// (0x0000bef6) aid_ps_clock_pane

0xecca,	// (0x00010433) aid_ps_indicator_pane

0xecd6,	// (0x0001043f) indicator_ps_pane_ParamLimits

0xecd6,	// (0x0001043f) indicator_ps_pane

0xece5,	// (0x0001044e) power_save_pane_g1_ParamLimits

0xece5,	// (0x0001044e) power_save_pane_g1

0xecf1,	// (0x0001045a) power_save_pane_g2_ParamLimits

0xecf1,	// (0x0001045a) power_save_pane_g2

0xe980,	// (0x000100e9) aid_navinavi_width_pane

0xecb9,	// (0x00010422) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00010cae) power_save_pane_g_ParamLimits

0xf545,	// (0x00010cae) power_save_pane_g

0xecff,	// (0x00010468) power_save_pane_t1_ParamLimits

0xecff,	// (0x00010468) power_save_pane_t1

0xa78d,	// (0x0000bef6) aid_ps_clock_pane_ParamLimits

0xecca,	// (0x00010433) aid_ps_indicator_pane_ParamLimits

0xed11,	// (0x0001047a) power_save_pane_t4_ParamLimits

0xed11,	// (0x0001047a) power_save_pane_t4

0x0001,

0xf54a,	// (0x00010cb3) power_save_pane_t_ParamLimits

0xf54a,	// (0x00010cb3) power_save_pane_t

0xed3b,	// (0x000104a4) power_save_t3_ParamLimits

0xed3b,	// (0x000104a4) power_save_t3

0xed26,	// (0x0001048f) power_save_t2_ParamLimits

0xed26,	// (0x0001048f) power_save_t2

0xed50,	// (0x000104b9) indicator_ps_pane_g1

0xa79b,	// (0x0000bf04) ai_gene_pane_ParamLimits

0xa79b,	// (0x0000bf04) ai_gene_pane

0xa7b2,	// (0x0000bf1b) ai_links_pane_ParamLimits

0xa7b2,	// (0x0000bf1b) ai_links_pane

0xa7ca,	// (0x0000bf33) indicator_pane_cp1_ParamLimits

0xa7ca,	// (0x0000bf33) indicator_pane_cp1

0xa7d9,	// (0x0000bf42) main_pane_idle_g1_cp_ParamLimits

0xa7d9,	// (0x0000bf42) main_pane_idle_g1_cp

0xed59,	// (0x000104c2) popup_ai_links_title_window

0xa7f1,	// (0x0000bf5a) soft_indicator_pane_cp1_ParamLimits

0xa7f1,	// (0x0000bf5a) soft_indicator_pane_cp1

0x357e,	// (0x00004ce7) ai_links_pane_g1

0x3587,	// (0x00004cf0) grid_ai_links_pane

0xc461,	// (0x0000dbca) ai_gene_pane_1

0x356c,	// (0x00004cd5) ai_gene_pane_2

0x3575,	// (0x00004cde) list_highlight_pane_cp4

0xc43d,	// (0x0000dba6) cell_ai_link_pane_ParamLimits

0xc43d,	// (0x0000dba6) cell_ai_link_pane

0x353b,	// (0x00004ca4) cell_ai_link_pane_g1

0xef4d,	// (0x000106b6) cell_ai_link_pane_g2

0x0001,

0xf8e1,	// (0x0001104a) cell_ai_link_pane_g

0xeaef,	// (0x00010258) grid_highlight_cp2

0xeaef,	// (0x00010258) bg_popup_sub_pane_cp1

0xed70,	// (0x000104d9) popup_ai_links_title_window_t1

0x3487,	// (0x00004bf0) ai_gene_pane_1_g1_ParamLimits

0x3487,	// (0x00004bf0) ai_gene_pane_1_g1

0x3493,	// (0x00004bfc) ai_gene_pane_1_g2_ParamLimits

0x3493,	// (0x00004bfc) ai_gene_pane_1_g2

0x0001,

0xf8d7,	// (0x00011040) ai_gene_pane_1_g_ParamLimits

0xf8d7,	// (0x00011040) ai_gene_pane_1_g

0x34a0,	// (0x00004c09) ai_gene_pane_1_t1_ParamLimits

0x34a0,	// (0x00004c09) ai_gene_pane_1_t1

0x34d4,	// (0x00004c3d) grid_ai_soft_ind_pane

0x3472,	// (0x00004bdb) ai_gene_pane_2_t1_ParamLimits

0x3472,	// (0x00004bdb) ai_gene_pane_2_t1

0xa805,	// (0x0000bf6e) main_pane_empty_t1_ParamLimits

0xa805,	// (0x0000bf6e) main_pane_empty_t1

0xa81d,	// (0x0000bf86) main_pane_empty_t2_ParamLimits

0xa81d,	// (0x0000bf86) main_pane_empty_t2

0xa832,	// (0x0000bf9b) main_pane_empty_t3_ParamLimits

0xa832,	// (0x0000bf9b) main_pane_empty_t3

0xa844,	// (0x0000bfad) main_pane_empty_t4_ParamLimits

0xa844,	// (0x0000bfad) main_pane_empty_t4

0xa856,	// (0x0000bfbf) main_pane_empty_t5_ParamLimits

0xa856,	// (0x0000bfbf) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00010cb8) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00010cb8) main_pane_empty_t

0xf49a,	// (0x00010c03) bg_popup_window_pane_ParamLimits

0xf49a,	// (0x00010c03) bg_popup_window_pane

0x31d4,	// (0x0000493d) find_popup_pane_cp2_ParamLimits

0x31d4,	// (0x0000493d) find_popup_pane_cp2

0x31e0,	// (0x00004949) heading_pane_ParamLimits

0x31e0,	// (0x00004949) heading_pane

0xeaef,	// (0x00010258) bg_popup_sub_pane

0xc35b,	// (0x0000dac4) bg_popup_window_pane_g1_ParamLimits

0xc35b,	// (0x0000dac4) bg_popup_window_pane_g1

0xc36a,	// (0x0000dad3) bg_popup_window_pane_g2_ParamLimits

0xc36a,	// (0x0000dad3) bg_popup_window_pane_g2

0xc376,	// (0x0000dadf) bg_popup_window_pane_g3_ParamLimits

0xc376,	// (0x0000dadf) bg_popup_window_pane_g3

0xc382,	// (0x0000daeb) bg_popup_window_pane_g4_ParamLimits

0xc382,	// (0x0000daeb) bg_popup_window_pane_g4

0xc391,	// (0x0000dafa) bg_popup_window_pane_g5_ParamLimits

0xc391,	// (0x0000dafa) bg_popup_window_pane_g5

0xc3a1,	// (0x0000db0a) bg_popup_window_pane_g6_ParamLimits

0xc3a1,	// (0x0000db0a) bg_popup_window_pane_g6

0xc3ad,	// (0x0000db16) bg_popup_window_pane_g7_ParamLimits

0xc3ad,	// (0x0000db16) bg_popup_window_pane_g7

0xc3bc,	// (0x0000db25) bg_popup_window_pane_g8_ParamLimits

0xc3bc,	// (0x0000db25) bg_popup_window_pane_g8

0xc3cb,	// (0x0000db34) bg_popup_window_pane_g9_ParamLimits

0xc3cb,	// (0x0000db34) bg_popup_window_pane_g9

0x31a9,	// (0x00004912) bg_popup_window_pane_g10_ParamLimits

0x31a9,	// (0x00004912) bg_popup_window_pane_g10

0x0009,

0xf89f,	// (0x00011008) bg_popup_window_pane_g_ParamLimits

0xf89f,	// (0x00011008) bg_popup_window_pane_g

0x30d2,	// (0x0000483b) bg_popup_heading_pane_ParamLimits

0x30d2,	// (0x0000483b) bg_popup_heading_pane

0x3d7d,	// (0x000054e6) tabs_4_passive_pane_cp_srt_ParamLimits

0x3d7d,	// (0x000054e6) tabs_4_passive_pane_cp_srt

0x3d8f,	// (0x000054f8) tabs_4_passive_pane_srt_ParamLimits

0x30e6,	// (0x0000484f) heading_pane_g2

0x3d8f,	// (0x000054f8) tabs_4_passive_pane_srt

0x2251,	// (0x000039ba) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2251,	// (0x000039ba) bg_passive_tab_pane_cp3_srt

0x30ee,	// (0x00004857) heading_pane_t1_ParamLimits

0x30ee,	// (0x00004857) heading_pane_t1

0x3105,	// (0x0000486e) heading_pane_t2_ParamLimits

0x3105,	// (0x0000486e) heading_pane_t2

0x0001,

0xf89a,	// (0x00011003) heading_pane_t_ParamLimits

0xf89a,	// (0x00011003) heading_pane_t

0x2aa2,	// (0x0000420b) bg_popup_heading_pane_g1

0x2b51,	// (0x000042ba) bg_popup_heading_pane_g2

0x2b5b,	// (0x000042c4) bg_popup_heading_pane_g3

0x2b65,	// (0x000042ce) bg_popup_heading_pane_g4

0x2b6f,	// (0x000042d8) bg_popup_heading_pane_g5

0x2b79,	// (0x000042e2) bg_popup_heading_pane_g6

0x2b81,	// (0x000042ea) bg_popup_heading_pane_g7

0x2b89,	// (0x000042f2) bg_popup_heading_pane_g8

0x2b93,	// (0x000042fc) bg_popup_heading_pane_g9

0x0008,

0xf856,	// (0x00010fbf) bg_popup_heading_pane_g

0x20b6,	// (0x0000381f) bg_popup_sub_pane_g1

0x20be,	// (0x00003827) bg_popup_sub_pane_g2

0x20c6,	// (0x0000382f) bg_popup_sub_pane_g3

0x20ce,	// (0x00003837) bg_popup_sub_pane_g4

0x20d6,	// (0x0000383f) bg_popup_sub_pane_g5

0x20de,	// (0x00003847) bg_popup_sub_pane_g6

0x20e6,	// (0x0000384f) bg_popup_sub_pane_g7

0x20ee,	// (0x00003857) bg_popup_sub_pane_g8

0x20f6,	// (0x0000385f) bg_popup_sub_pane_g9

0x0008,

0xf830,	// (0x00010f99) bg_popup_sub_pane_g

0xeb91,	// (0x000102fa) bg_popup_window_pane_cp5_ParamLimits

0xeb91,	// (0x000102fa) bg_popup_window_pane_cp5

0xed8d,	// (0x000104f6) popup_note_window_g1_ParamLimits

0xed8d,	// (0x000104f6) popup_note_window_g1

0xed99,	// (0x00010502) popup_note_window_t1_ParamLimits

0xed99,	// (0x00010502) popup_note_window_t1

0xedaf,	// (0x00010518) popup_note_window_t2_ParamLimits

0xedaf,	// (0x00010518) popup_note_window_t2

0xedc5,	// (0x0001052e) popup_note_window_t3_ParamLimits

0xedc5,	// (0x0001052e) popup_note_window_t3

0xeddb,	// (0x00010544) popup_note_window_t4_ParamLimits

0xeddb,	// (0x00010544) popup_note_window_t4

0xee03,	// (0x0001056c) popup_note_window_t5_ParamLimits

0xee03,	// (0x0001056c) popup_note_window_t5

0x0004,

0xf55a,	// (0x00010cc3) popup_note_window_t_ParamLimits

0xf55a,	// (0x00010cc3) popup_note_window_t

0xee4d,	// (0x000105b6) bg_popup_window_pane_cp6_ParamLimits

0xee4d,	// (0x000105b6) bg_popup_window_pane_cp6

0x2a1e,	// (0x00004187) popup_note_image_window_g1_ParamLimits

0x2a1e,	// (0x00004187) popup_note_image_window_g1

0x2a2a,	// (0x00004193) popup_note_image_window_g2_ParamLimits

0x2a2a,	// (0x00004193) popup_note_image_window_g2

0x0001,

0xf824,	// (0x00010f8d) popup_note_image_window_g_ParamLimits

0xf824,	// (0x00010f8d) popup_note_image_window_g

0x2a43,	// (0x000041ac) popup_note_image_window_t1_ParamLimits

0x2a43,	// (0x000041ac) popup_note_image_window_t1

0x2a5c,	// (0x000041c5) popup_note_image_window_t2_ParamLimits

0x2a5c,	// (0x000041c5) popup_note_image_window_t2

0x2a75,	// (0x000041de) popup_note_image_window_t3_ParamLimits

0x2a75,	// (0x000041de) popup_note_image_window_t3

0x0002,

0xf829,	// (0x00010f92) popup_note_image_window_t_ParamLimits

0xf829,	// (0x00010f92) popup_note_image_window_t

0x28de,	// (0x00004047) bg_popup_window_pane_cp7_ParamLimits

0x28de,	// (0x00004047) bg_popup_window_pane_cp7

0x290e,	// (0x00004077) popup_note_wait_window_g1_ParamLimits

0x290e,	// (0x00004077) popup_note_wait_window_g1

0x291a,	// (0x00004083) popup_note_wait_window_g2_ParamLimits

0x291a,	// (0x00004083) popup_note_wait_window_g2

0x0002,

0xf812,	// (0x00010f7b) popup_note_wait_window_g_ParamLimits

0xf812,	// (0x00010f7b) popup_note_wait_window_g

0x2932,	// (0x0000409b) popup_note_wait_window_t1_ParamLimits

0x2932,	// (0x0000409b) popup_note_wait_window_t1

0x2959,	// (0x000040c2) popup_note_wait_window_t2_ParamLimits

0x2959,	// (0x000040c2) popup_note_wait_window_t2

0x2977,	// (0x000040e0) popup_note_wait_window_t3_ParamLimits

0x2977,	// (0x000040e0) popup_note_wait_window_t3

0x298a,	// (0x000040f3) popup_note_wait_window_t4_ParamLimits

0x298a,	// (0x000040f3) popup_note_wait_window_t4

0x0004,

0xf819,	// (0x00010f82) popup_note_wait_window_t_ParamLimits

0xf819,	// (0x00010f82) popup_note_wait_window_t

0x29af,	// (0x00004118) wait_bar_pane_ParamLimits

0x29af,	// (0x00004118) wait_bar_pane

0xeaef,	// (0x00010258) wait_anim_pane

0xeaef,	// (0x00010258) wait_border_pane

0xe976,	// (0x000100df) wait_anim_pane_g1

0xe976,	// (0x000100df) wait_anim_pane_g2

0x0001,

0xf6d9,	// (0x00010e42) wait_anim_pane_g

0x2882,	// (0x00003feb) wait_border_pane_g1

0x288d,	// (0x00003ff6) wait_border_pane_g2

0x2896,	// (0x00003fff) wait_border_pane_g3

0x0002,

0xf80b,	// (0x00010f74) wait_border_pane_g

0x26ec,	// (0x00003e55) bg_popup_window_pane_cp16_ParamLimits

0x26ec,	// (0x00003e55) bg_popup_window_pane_cp16

0x27ec,	// (0x00003f55) indicator_popup_pane_cp4_ParamLimits

0x27ec,	// (0x00003f55) indicator_popup_pane_cp4

0x2800,	// (0x00003f69) popup_query_data_window_t1_ParamLimits

0x2800,	// (0x00003f69) popup_query_data_window_t1

0x2812,	// (0x00003f7b) popup_query_data_window_t2_ParamLimits

0x2812,	// (0x00003f7b) popup_query_data_window_t2

0x282b,	// (0x00003f94) popup_query_data_window_t3_ParamLimits

0x282b,	// (0x00003f94) popup_query_data_window_t3

0x0002,

0xf804,	// (0x00010f6d) popup_query_data_window_t_ParamLimits

0xf804,	// (0x00010f6d) popup_query_data_window_t

0x2845,	// (0x00003fae) query_popup_data_pane_ParamLimits

0x2845,	// (0x00003fae) query_popup_data_pane

0x2859,	// (0x00003fc2) query_popup_data_pane_cp1_ParamLimits

0x2859,	// (0x00003fc2) query_popup_data_pane_cp1

0x26ec,	// (0x00003e55) bg_popup_window_pane_cp10_ParamLimits

0x26ec,	// (0x00003e55) bg_popup_window_pane_cp10

0x271e,	// (0x00003e87) indicator_popup_pane_ParamLimits

0x271e,	// (0x00003e87) indicator_popup_pane

0x2740,	// (0x00003ea9) popup_query_code_window_t1_ParamLimits

0x2740,	// (0x00003ea9) popup_query_code_window_t1

0x275a,	// (0x00003ec3) popup_query_code_window_t2_ParamLimits

0x275a,	// (0x00003ec3) popup_query_code_window_t2

0x27a3,	// (0x00003f0c) popup_query_code_window_t3_ParamLimits

0x27a3,	// (0x00003f0c) popup_query_code_window_t3

0x0002,

0xf7fd,	// (0x00010f66) popup_query_code_window_t_ParamLimits

0xf7fd,	// (0x00010f66) popup_query_code_window_t

0x27d2,	// (0x00003f3b) query_popup_pane_ParamLimits

0x27d2,	// (0x00003f3b) query_popup_pane

0xee4d,	// (0x000105b6) bg_popup_window_pane_cp15_ParamLimits

0xee4d,	// (0x000105b6) bg_popup_window_pane_cp15

0xee6d,	// (0x000105d6) indicator_popup_pane_cp1_ParamLimits

0xee6d,	// (0x000105d6) indicator_popup_pane_cp1

0xee80,	// (0x000105e9) indicator_popup_pane_cp2_ParamLimits

0xee80,	// (0x000105e9) indicator_popup_pane_cp2

0xee9b,	// (0x00010604) popup_query_data_code_window_g1_ParamLimits

0xee9b,	// (0x00010604) popup_query_data_code_window_g1

0xeeae,	// (0x00010617) popup_query_data_code_window_t1_ParamLimits

0xeeae,	// (0x00010617) popup_query_data_code_window_t1

0xeec0,	// (0x00010629) popup_query_data_code_window_t2_ParamLimits

0xeec0,	// (0x00010629) popup_query_data_code_window_t2

0xeed2,	// (0x0001063b) popup_query_data_code_window_t3_ParamLimits

0xeed2,	// (0x0001063b) popup_query_data_code_window_t3

0xeee8,	// (0x00010651) popup_query_data_code_window_t4_ParamLimits

0xeee8,	// (0x00010651) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00010cce) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00010cce) popup_query_data_code_window_t

0x0d50,	// (0x000024b9) list_single_midp_graphic_pane_g3

0xef02,	// (0x0001066b) query_popup_data_pane_cp2_ParamLimits

0xef15,	// (0x0001067e) query_popup_pane_cp2_ParamLimits

0xef15,	// (0x0001067e) query_popup_pane_cp2

0xeaef,	// (0x00010258) bg_popup_window_pane_cp11

0x26d0,	// (0x00003e39) heading_pane_cp5

0x26d8,	// (0x00003e41) listscroll_popup_info_pane

0xeaef,	// (0x00010258) input_focus_pane_cp3

0xef30,	// (0x00010699) query_popup_pane_t1

0xef3e,	// (0x000106a7) list_popup_info_pane_ParamLimits

0xef3e,	// (0x000106a7) list_popup_info_pane

0xef4d,	// (0x000106b6) listscroll_popup_info_pane_g1

0xef55,	// (0x000106be) scroll_pane_cp7

0xef5f,	// (0x000106c8) popup_info_list_pane_t1_ParamLimits

0xef5f,	// (0x000106c8) popup_info_list_pane_t1

0xef79,	// (0x000106e2) popup_info_list_pane_t2_ParamLimits

0xef79,	// (0x000106e2) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00010cd7) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00010cd7) popup_info_list_pane_t

0xeaef,	// (0x00010258) bg_popup_window_pane_cp12

0x3e71,	// (0x000055da) find_popup_pane

0xeba9,	// (0x00010312) bg_popup_window_pane_cp3

0xef93,	// (0x000106fc) heading_pane_cp3

0xefa2,	// (0x0001070b) listscroll_popup_graphic_pane

0xeaef,	// (0x00010258) bg_popup_window_pane_cp4

0xa8b8,	// (0x0000c021) heading_pane_cp4

0xefb2,	// (0x0001071b) listscroll_popup_colour_pane

0xa8c2,	// (0x0000c02b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xa8c2,	// (0x0000c02b) cell_large_graphic_colour_none_popup_pane

0xa8d6,	// (0x0000c03f) grid_large_graphic_colour_popup_pane_ParamLimits

0xa8d6,	// (0x0000c03f) grid_large_graphic_colour_popup_pane

0xa8fa,	// (0x0000c063) listscroll_popup_colour_pane_g1_ParamLimits

0xa8fa,	// (0x0000c063) listscroll_popup_colour_pane_g1

0xa911,	// (0x0000c07a) listscroll_popup_colour_pane_g2_ParamLimits

0xa911,	// (0x0000c07a) listscroll_popup_colour_pane_g2

0xa928,	// (0x0000c091) listscroll_popup_colour_pane_g3_ParamLimits

0xa928,	// (0x0000c091) listscroll_popup_colour_pane_g3

0xa938,	// (0x0000c0a1) listscroll_popup_colour_pane_g4_ParamLimits

0xa938,	// (0x0000c0a1) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00010cdc) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00010cdc) listscroll_popup_colour_pane_g

0xefba,	// (0x00010723) scroll_pane_cp6_ParamLimits

0xefba,	// (0x00010723) scroll_pane_cp6

0xa948,	// (0x0000c0b1) cell_large_graphic_colour_popup_pane_ParamLimits

0xa948,	// (0x0000c0b1) cell_large_graphic_colour_popup_pane

0xefcc,	// (0x00010735) cell_large_graphic_colour_none_popup_pane_t1

0xeaef,	// (0x00010258) grid_highlight_pane_cp5

0xefdb,	// (0x00010744) cell_large_graphic_colour_popup_pane_g1

0xefe3,	// (0x0001074c) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00010ce5) cell_large_graphic_colour_popup_pane_g

0xefeb,	// (0x00010754) cell_large_graphic_colour_popup_pane_g2_copy1

0xeff4,	// (0x0001075d) grid_highlight_pane_cp4

0xeffc,	// (0x00010765) bg_popup_window_pane_cp8_ParamLimits

0xeffc,	// (0x00010765) bg_popup_window_pane_cp8

0xf017,	// (0x00010780) popup_snote_single_text_window_g1_ParamLimits

0xf017,	// (0x00010780) popup_snote_single_text_window_g1

0xf029,	// (0x00010792) popup_snote_single_text_window_t1_ParamLimits

0xf029,	// (0x00010792) popup_snote_single_text_window_t1

0xf03c,	// (0x000107a5) popup_snote_single_text_window_t2_ParamLimits

0xf03c,	// (0x000107a5) popup_snote_single_text_window_t2

0xf04f,	// (0x000107b8) popup_snote_single_text_window_t3_ParamLimits

0xf04f,	// (0x000107b8) popup_snote_single_text_window_t3

0xf088,	// (0x000107f1) popup_snote_single_text_window_t4_ParamLimits

0xf088,	// (0x000107f1) popup_snote_single_text_window_t4

0xf0bc,	// (0x00010825) popup_snote_single_text_window_t5_ParamLimits

0xf0bc,	// (0x00010825) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00010cea) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00010cea) popup_snote_single_text_window_t

0xf0eb,	// (0x00010854) bg_popup_window_pane_cp9_ParamLimits

0xf0eb,	// (0x00010854) bg_popup_window_pane_cp9

0xf017,	// (0x00010780) popup_snote_single_graphic_window_g1_ParamLimits

0xf017,	// (0x00010780) popup_snote_single_graphic_window_g1

0xf0f9,	// (0x00010862) popup_snote_single_graphic_window_g2_ParamLimits

0xf0f9,	// (0x00010862) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00010cf5) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00010cf5) popup_snote_single_graphic_window_g

0xf105,	// (0x0001086e) popup_snote_single_graphic_window_t1_ParamLimits

0xf105,	// (0x0001086e) popup_snote_single_graphic_window_t1

0xf118,	// (0x00010881) popup_snote_single_graphic_window_t2_ParamLimits

0xf118,	// (0x00010881) popup_snote_single_graphic_window_t2

0xf12b,	// (0x00010894) popup_snote_single_graphic_window_t3_ParamLimits

0xf12b,	// (0x00010894) popup_snote_single_graphic_window_t3

0xf164,	// (0x000108cd) popup_snote_single_graphic_window_t4_ParamLimits

0xf164,	// (0x000108cd) popup_snote_single_graphic_window_t4

0xf198,	// (0x00010901) popup_snote_single_graphic_window_t5_ParamLimits

0xf198,	// (0x00010901) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00010cfa) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00010cfa) popup_snote_single_graphic_window_t

0x3cf7,	// (0x00005460) grid_graphic_popup_pane_ParamLimits

0x3cf7,	// (0x00005460) grid_graphic_popup_pane

0x3d25,	// (0x0000548e) listscroll_popup_graphic_pane_g1_ParamLimits

0x3d25,	// (0x0000548e) listscroll_popup_graphic_pane_g1

0xc7b3,	// (0x0000df1c) listscroll_popup_graphic_pane_g2_ParamLimits

0xc7b3,	// (0x0000df1c) listscroll_popup_graphic_pane_g2

0x0001,

0xf97a,	// (0x000110e3) listscroll_popup_graphic_pane_g_ParamLimits

0xf97a,	// (0x000110e3) listscroll_popup_graphic_pane_g

0x3d4d,	// (0x000054b6) scroll_pane_cp5

0xc76b,	// (0x0000ded4) cell_graphic_popup_pane_ParamLimits

0xc76b,	// (0x0000ded4) cell_graphic_popup_pane

0x3c70,	// (0x000053d9) cell_graphic_popup_pane_g1

0x3c78,	// (0x000053e1) cell_graphic_popup_pane_g2

0xefeb,	// (0x00010754) cell_graphic_popup_pane_g3

0x0002,

0xf973,	// (0x000110dc) cell_graphic_popup_pane_g

0x3c81,	// (0x000053ea) cell_graphic_popup_pane_t2

0xeff4,	// (0x0001075d) grid_highlight_pane_cp3

0xf1d9,	// (0x00010942) list_gen_pane_ParamLimits

0xf1d9,	// (0x00010942) list_gen_pane

0xf201,	// (0x0001096a) scroll_pane

0xc722,	// (0x0000de8b) bg_list_pane_g1_ParamLimits

0xc722,	// (0x0000de8b) bg_list_pane_g1

0x3be5,	// (0x0000534e) bg_list_pane_g2_ParamLimits

0x3be5,	// (0x0000534e) bg_list_pane_g2

0x3bfa,	// (0x00005363) bg_list_pane_g3_ParamLimits

0x3bfa,	// (0x00005363) bg_list_pane_g3

0x3c0e,	// (0x00005377) bg_list_pane_g4_ParamLimits

0x3c0e,	// (0x00005377) bg_list_pane_g4

0xc73f,	// (0x0000dea8) bg_list_pane_g5_ParamLimits

0xc73f,	// (0x0000dea8) bg_list_pane_g5

0x0004,

0xf968,	// (0x000110d1) bg_list_pane_g_ParamLimits

0xf968,	// (0x000110d1) bg_list_pane_g

0xc6a1,	// (0x0000de0a) list_double2_graphic_large_graphic_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double2_graphic_large_graphic_pane

0xc6a1,	// (0x0000de0a) list_double2_graphic_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double2_graphic_pane

0xc6a1,	// (0x0000de0a) list_double2_large_graphic_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double2_large_graphic_pane

0xc6a1,	// (0x0000de0a) list_double2_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double2_pane

0xc6a1,	// (0x0000de0a) list_double_graphic_heading_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double_graphic_heading_pane

0xc6a1,	// (0x0000de0a) list_double_graphic_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double_graphic_pane

0xc6a1,	// (0x0000de0a) list_double_heading_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double_heading_pane

0xc6a1,	// (0x0000de0a) list_double_large_graphic_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double_large_graphic_pane

0xc6a1,	// (0x0000de0a) list_double_number_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double_number_pane

0xc6a1,	// (0x0000de0a) list_double_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double_pane

0xc6a1,	// (0x0000de0a) list_double_time_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_double_time_pane

0xc6a1,	// (0x0000de0a) list_setting_number_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_setting_number_pane

0xc6a1,	// (0x0000de0a) list_setting_pane_ParamLimits

0xc6a1,	// (0x0000de0a) list_setting_pane

0xc6b5,	// (0x0000de1e) list_single_2graphic_pane_ParamLimits

0xc6b5,	// (0x0000de1e) list_single_2graphic_pane

0xc6b5,	// (0x0000de1e) list_single_graphic_heading_pane_ParamLimits

0xc6b5,	// (0x0000de1e) list_single_graphic_heading_pane

0xc6b5,	// (0x0000de1e) list_single_graphic_pane_ParamLimits

0xc6b5,	// (0x0000de1e) list_single_graphic_pane

0xc6b5,	// (0x0000de1e) list_single_heading_pane_ParamLimits

0xc6b5,	// (0x0000de1e) list_single_heading_pane

0xc70d,	// (0x0000de76) list_single_large_graphic_pane_ParamLimits

0xc70d,	// (0x0000de76) list_single_large_graphic_pane

0xc6b5,	// (0x0000de1e) list_single_number_heading_pane_ParamLimits

0xc6b5,	// (0x0000de1e) list_single_number_heading_pane

0xc6b5,	// (0x0000de1e) list_single_number_pane_ParamLimits

0xc6b5,	// (0x0000de1e) list_single_number_pane

0xc6b5,	// (0x0000de1e) list_single_pane_ParamLimits

0xc6b5,	// (0x0000de1e) list_single_pane

0xeaef,	// (0x00010258) list_highlight_pane_cp1

0x1f4e,	// (0x000036b7) list_single_pane_g1_ParamLimits

0x1f4e,	// (0x000036b7) list_single_pane_g1

0x1f5a,	// (0x000036c3) list_single_pane_g2_ParamLimits

0x1f5a,	// (0x000036c3) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00010d0c) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00010d0c) list_single_pane_g

0x44ab,	// (0x00005c14) list_single_pane_t1_ParamLimits

0x44ab,	// (0x00005c14) list_single_pane_t1

0x1f4e,	// (0x000036b7) list_single_number_pane_g1_ParamLimits

0x1f4e,	// (0x000036b7) list_single_number_pane_g1

0x1f5a,	// (0x000036c3) list_single_number_pane_g2_ParamLimits

0x1f5a,	// (0x000036c3) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00010d0c) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00010d0c) list_single_number_pane_g

0x2044,	// (0x000037ad) list_single_number_pane_t1_ParamLimits

0x2044,	// (0x000037ad) list_single_number_pane_t1

0x45bc,	// (0x00005d25) list_single_number_pane_t2_ParamLimits

0x45bc,	// (0x00005d25) list_single_number_pane_t2

0x0001,

0xf929,	// (0x00011092) list_single_number_pane_t_ParamLimits

0xf929,	// (0x00011092) list_single_number_pane_t

0x5da2,	// (0x0000750b) list_single_graphic_pane_g1_ParamLimits

0x5da2,	// (0x0000750b) list_single_graphic_pane_g1

0x1f4e,	// (0x000036b7) list_single_graphic_pane_g2_ParamLimits

0x1f4e,	// (0x000036b7) list_single_graphic_pane_g2

0x1f5a,	// (0x000036c3) list_single_graphic_pane_g3_ParamLimits

0x1f5a,	// (0x000036c3) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00010d05) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00010d05) list_single_graphic_pane_g

0xa973,	// (0x0000c0dc) list_single_graphic_pane_t1_ParamLimits

0xa973,	// (0x0000c0dc) list_single_graphic_pane_t1

0x1f4e,	// (0x000036b7) list_single_heading_pane_g1_ParamLimits

0x1f4e,	// (0x000036b7) list_single_heading_pane_g1

0x1f5a,	// (0x000036c3) list_single_heading_pane_g2_ParamLimits

0x1f5a,	// (0x000036c3) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00010d0c) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00010d0c) list_single_heading_pane_g

0xa989,	// (0x0000c0f2) list_single_heading_pane_t1_ParamLimits

0xa989,	// (0x0000c0f2) list_single_heading_pane_t1

0xa99f,	// (0x0000c108) list_single_heading_pane_t2_ParamLimits

0xa99f,	// (0x0000c108) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00010d11) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00010d11) list_single_heading_pane_t

0x1f4e,	// (0x000036b7) list_single_number_heading_pane_g1_ParamLimits

0x1f4e,	// (0x000036b7) list_single_number_heading_pane_g1

0x1f5a,	// (0x000036c3) list_single_number_heading_pane_g2_ParamLimits

0x1f5a,	// (0x000036c3) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00010d0c) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00010d0c) list_single_number_heading_pane_g

0xa989,	// (0x0000c0f2) list_single_number_heading_pane_t1_ParamLimits

0xa989,	// (0x0000c0f2) list_single_number_heading_pane_t1

0x4475,	// (0x00005bde) list_single_number_heading_pane_t2_ParamLimits

0x4475,	// (0x00005bde) list_single_number_heading_pane_t2

0x4487,	// (0x00005bf0) list_single_number_heading_pane_t3_ParamLimits

0x4487,	// (0x00005bf0) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00010d16) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00010d16) list_single_number_heading_pane_t

0x1f42,	// (0x000036ab) list_single_graphic_heading_pane_g1_ParamLimits

0x1f42,	// (0x000036ab) list_single_graphic_heading_pane_g1

0xa9b1,	// (0x0000c11a) list_single_graphic_heading_pane_g4_ParamLimits

0xa9b1,	// (0x0000c11a) list_single_graphic_heading_pane_g4

0x1f5a,	// (0x000036c3) list_single_graphic_heading_pane_g5_ParamLimits

0x1f5a,	// (0x000036c3) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x00010d1d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x00010d1d) list_single_graphic_heading_pane_g

0xa989,	// (0x0000c0f2) list_single_graphic_heading_pane_t1_ParamLimits

0xa989,	// (0x0000c0f2) list_single_graphic_heading_pane_t1

0xa9c2,	// (0x0000c12b) list_single_graphic_heading_pane_t2_ParamLimits

0xa9c2,	// (0x0000c12b) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00010d24) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00010d24) list_single_graphic_heading_pane_t

0x44c1,	// (0x00005c2a) list_single_large_graphic_pane_g1_ParamLimits

0x44c1,	// (0x00005c2a) list_single_large_graphic_pane_g1

0x44cd,	// (0x00005c36) list_single_large_graphic_pane_g2_ParamLimits

0x44cd,	// (0x00005c36) list_single_large_graphic_pane_g2

0x44d9,	// (0x00005c42) list_single_large_graphic_pane_g3_ParamLimits

0x44d9,	// (0x00005c42) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00010d29) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00010d29) list_single_large_graphic_pane_g

0x288d,	// (0x00003ff6) wait_border_pane_g2_copy1

0xa9d4,	// (0x0000c13d) list_single_large_graphic_pane_g4_cp2

0x44e5,	// (0x00005c4e) list_single_large_graphic_pane_t1_ParamLimits

0x44e5,	// (0x00005c4e) list_single_large_graphic_pane_t1

0xa9dc,	// (0x0000c145) list_double_pane_g1_ParamLimits

0xa9dc,	// (0x0000c145) list_double_pane_g1

0xa9e8,	// (0x0000c151) list_double_pane_g2_ParamLimits

0xa9e8,	// (0x0000c151) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00010d30) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00010d30) list_double_pane_g

0xa9f4,	// (0x0000c15d) list_double_pane_t1_ParamLimits

0xa9f4,	// (0x0000c15d) list_double_pane_t1

0xaa0a,	// (0x0000c173) list_double_pane_t2_ParamLimits

0xaa0a,	// (0x0000c173) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00010d35) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00010d35) list_double_pane_t

0xaa1c,	// (0x0000c185) list_double2_pane_g1_ParamLimits

0xaa1c,	// (0x0000c185) list_double2_pane_g1

0xaa2d,	// (0x0000c196) list_double2_pane_g2_ParamLimits

0xaa2d,	// (0x0000c196) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x00010d3a) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x00010d3a) list_double2_pane_g

0xaa39,	// (0x0000c1a2) list_double2_pane_t1_ParamLimits

0xaa39,	// (0x0000c1a2) list_double2_pane_t1

0xaa4f,	// (0x0000c1b8) list_double2_pane_t2_ParamLimits

0xaa4f,	// (0x0000c1b8) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x00010d3f) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x00010d3f) list_double2_pane_t

0xa9dc,	// (0x0000c145) list_double_number_pane_g1_ParamLimits

0xa9dc,	// (0x0000c145) list_double_number_pane_g1

0xa9e8,	// (0x0000c151) list_double_number_pane_g2_ParamLimits

0xa9e8,	// (0x0000c151) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00010d30) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00010d30) list_double_number_pane_g

0xaa61,	// (0x0000c1ca) list_double_number_pane_t1_ParamLimits

0xaa61,	// (0x0000c1ca) list_double_number_pane_t1

0xaa73,	// (0x0000c1dc) list_double_number_pane_t2_ParamLimits

0xaa73,	// (0x0000c1dc) list_double_number_pane_t2

0xaa89,	// (0x0000c1f2) list_double_number_pane_t3_ParamLimits

0xaa89,	// (0x0000c1f2) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x00010d44) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x00010d44) list_double_number_pane_t

0xaa9b,	// (0x0000c204) list_double_graphic_pane_g1_ParamLimits

0xaa9b,	// (0x0000c204) list_double_graphic_pane_g1

0xaaa7,	// (0x0000c210) list_double_graphic_pane_g2_ParamLimits

0xaaa7,	// (0x0000c210) list_double_graphic_pane_g2

0xaab6,	// (0x0000c21f) list_double_graphic_pane_g3_ParamLimits

0xaab6,	// (0x0000c21f) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x00010d4b) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x00010d4b) list_double_graphic_pane_g

0xaace,	// (0x0000c237) list_double_graphic_pane_t1_ParamLimits

0xaace,	// (0x0000c237) list_double_graphic_pane_t1

0xaae4,	// (0x0000c24d) list_double_graphic_pane_t2_ParamLimits

0xaae4,	// (0x0000c24d) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x00010d54) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x00010d54) list_double_graphic_pane_t

0xaaf6,	// (0x0000c25f) list_double2_graphic_pane_g1_ParamLimits

0xaaf6,	// (0x0000c25f) list_double2_graphic_pane_g1

0xab02,	// (0x0000c26b) list_double2_graphic_pane_g2_ParamLimits

0xab02,	// (0x0000c26b) list_double2_graphic_pane_g2

0xaa2d,	// (0x0000c196) list_double2_graphic_pane_g3_ParamLimits

0xaa2d,	// (0x0000c196) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x00010d59) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x00010d59) list_double2_graphic_pane_g

0xab0e,	// (0x0000c277) list_double2_graphic_pane_t1_ParamLimits

0xab0e,	// (0x0000c277) list_double2_graphic_pane_t1

0xab24,	// (0x0000c28d) list_double2_graphic_pane_t2_ParamLimits

0xab24,	// (0x0000c28d) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x00010d60) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x00010d60) list_double2_graphic_pane_t

0xab36,	// (0x0000c29f) list_double_large_graphic_pane_g1_ParamLimits

0xab36,	// (0x0000c29f) list_double_large_graphic_pane_g1

0xab55,	// (0x0000c2be) list_double_large_graphic_pane_g2_ParamLimits

0xab55,	// (0x0000c2be) list_double_large_graphic_pane_g2

0xa9e8,	// (0x0000c151) list_double_large_graphic_pane_g3_ParamLimits

0xa9e8,	// (0x0000c151) list_double_large_graphic_pane_g3

0xab66,	// (0x0000c2cf) list_double_large_graphic_pane_g4_ParamLimits

0xab66,	// (0x0000c2cf) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x00010d65) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x00010d65) list_double_large_graphic_pane_g

0xab79,	// (0x0000c2e2) list_double_large_graphic_pane_t1_ParamLimits

0xab79,	// (0x0000c2e2) list_double_large_graphic_pane_t1

0xab92,	// (0x0000c2fb) list_double_large_graphic_pane_t2_ParamLimits

0xab92,	// (0x0000c2fb) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x00010d70) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x00010d70) list_double_large_graphic_pane_t

0xaba4,	// (0x0000c30d) list_double2_large_graphic_pane_g1_ParamLimits

0xaba4,	// (0x0000c30d) list_double2_large_graphic_pane_g1

0xaa1c,	// (0x0000c185) list_double2_large_graphic_pane_g2_ParamLimits

0xaa1c,	// (0x0000c185) list_double2_large_graphic_pane_g2

0xaa2d,	// (0x0000c196) list_double2_large_graphic_pane_g3_ParamLimits

0xaa2d,	// (0x0000c196) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x00010d75) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x00010d75) list_double2_large_graphic_pane_g

0xabb0,	// (0x0000c319) list_double2_large_graphic_pane_t1_ParamLimits

0xabb0,	// (0x0000c319) list_double2_large_graphic_pane_t1

0xabc6,	// (0x0000c32f) list_double2_large_graphic_pane_t2_ParamLimits

0xabc6,	// (0x0000c32f) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x00010d7c) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x00010d7c) list_double2_large_graphic_pane_t

0xabd8,	// (0x0000c341) list_double_heading_pane_g1_ParamLimits

0xabd8,	// (0x0000c341) list_double_heading_pane_g1

0xf24a,	// (0x000109b3) list_double_heading_pane_g2_ParamLimits

0xf24a,	// (0x000109b3) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x00010d81) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x00010d81) list_double_heading_pane_g

0xabe9,	// (0x0000c352) list_double_heading_pane_t1_ParamLimits

0xabe9,	// (0x0000c352) list_double_heading_pane_t1

0xabff,	// (0x0000c368) list_double_heading_pane_t2_ParamLimits

0xabff,	// (0x0000c368) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x00010d86) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x00010d86) list_double_heading_pane_t

0xaaf6,	// (0x0000c25f) list_double_graphic_heading_pane_g1_ParamLimits

0xaaf6,	// (0x0000c25f) list_double_graphic_heading_pane_g1

0xabd8,	// (0x0000c341) list_double_graphic_heading_pane_g2_ParamLimits

0xabd8,	// (0x0000c341) list_double_graphic_heading_pane_g2

0xf24a,	// (0x000109b3) list_double_graphic_heading_pane_g3_ParamLimits

0xf24a,	// (0x000109b3) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x00010d8b) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x00010d8b) list_double_graphic_heading_pane_g

0xac11,	// (0x0000c37a) list_double_graphic_heading_pane_t1_ParamLimits

0xac11,	// (0x0000c37a) list_double_graphic_heading_pane_t1

0xac27,	// (0x0000c390) list_double_graphic_heading_pane_t2_ParamLimits

0xac27,	// (0x0000c390) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x00010d92) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x00010d92) list_double_graphic_heading_pane_t

0xab55,	// (0x0000c2be) list_double_time_pane_g1_ParamLimits

0xab55,	// (0x0000c2be) list_double_time_pane_g1

0xa9e8,	// (0x0000c151) list_double_time_pane_g2_ParamLimits

0xa9e8,	// (0x0000c151) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x00010d97) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x00010d97) list_double_time_pane_g

0xac39,	// (0x0000c3a2) list_double_time_pane_t1_ParamLimits

0xac39,	// (0x0000c3a2) list_double_time_pane_t1

0xac4f,	// (0x0000c3b8) list_double_time_pane_t2_ParamLimits

0xac4f,	// (0x0000c3b8) list_double_time_pane_t2

0xac61,	// (0x0000c3ca) list_double_time_pane_t3_ParamLimits

0xac61,	// (0x0000c3ca) list_double_time_pane_t3

0xac73,	// (0x0000c3dc) list_double_time_pane_t4_ParamLimits

0xac73,	// (0x0000c3dc) list_double_time_pane_t4

0x0003,

0xf633,	// (0x00010d9c) list_double_time_pane_t_ParamLimits

0xf633,	// (0x00010d9c) list_double_time_pane_t

0xab02,	// (0x0000c26b) list_setting_pane_g1_ParamLimits

0xab02,	// (0x0000c26b) list_setting_pane_g1

0xaa2d,	// (0x0000c196) list_setting_pane_g2_ParamLimits

0xaa2d,	// (0x0000c196) list_setting_pane_g2

0x0001,

0xf63c,	// (0x00010da5) list_setting_pane_g_ParamLimits

0xf63c,	// (0x00010da5) list_setting_pane_g

0xac85,	// (0x0000c3ee) list_setting_pane_t1_ParamLimits

0xac85,	// (0x0000c3ee) list_setting_pane_t1

0xac9c,	// (0x0000c405) list_setting_pane_t2_ParamLimits

0xac9c,	// (0x0000c405) list_setting_pane_t2

0x0002,

0xf641,	// (0x00010daa) list_setting_pane_t_ParamLimits

0xf641,	// (0x00010daa) list_setting_pane_t

0xacdb,	// (0x0000c444) set_value_pane_cp_ParamLimits

0xacdb,	// (0x0000c444) set_value_pane_cp

0xab02,	// (0x0000c26b) list_setting_number_pane_g1_ParamLimits

0xab02,	// (0x0000c26b) list_setting_number_pane_g1

0xaa2d,	// (0x0000c196) list_setting_number_pane_g2_ParamLimits

0xaa2d,	// (0x0000c196) list_setting_number_pane_g2

0x0001,

0xf63c,	// (0x00010da5) list_setting_number_pane_g_ParamLimits

0xf63c,	// (0x00010da5) list_setting_number_pane_g

0xace9,	// (0x0000c452) list_setting_number_pane_t1_ParamLimits

0xace9,	// (0x0000c452) list_setting_number_pane_t1

0xacfd,	// (0x0000c466) list_setting_number_pane_t2_ParamLimits

0xacfd,	// (0x0000c466) list_setting_number_pane_t2

0xad14,	// (0x0000c47d) list_setting_number_pane_t3_ParamLimits

0xad14,	// (0x0000c47d) list_setting_number_pane_t3

0x0003,

0xf648,	// (0x00010db1) list_setting_number_pane_t_ParamLimits

0xf648,	// (0x00010db1) list_setting_number_pane_t

0xacdb,	// (0x0000c444) set_value_pane_ParamLimits

0xacdb,	// (0x0000c444) set_value_pane

0xf262,	// (0x000109cb) bg_set_opt_pane_ParamLimits

0xf262,	// (0x000109cb) bg_set_opt_pane

0xf283,	// (0x000109ec) set_value_pane_t1

0xf291,	// (0x000109fa) slider_set_pane_cp3

0xf29a,	// (0x00010a03) volume_small_pane_cp

0xf2a3,	// (0x00010a0c) list_form_gen_pane

0xf2ac,	// (0x00010a15) scroll_pane_cp8

0xad57,	// (0x0000c4c0) form_field_data_pane_ParamLimits

0xad57,	// (0x0000c4c0) form_field_data_pane

0xad72,	// (0x0000c4db) form_field_data_wide_pane_ParamLimits

0xad72,	// (0x0000c4db) form_field_data_wide_pane

0xf2cd,	// (0x00010a36) form_field_popup_pane_ParamLimits

0xf2cd,	// (0x00010a36) form_field_popup_pane

0xad96,	// (0x0000c4ff) form_field_popup_wide_pane_ParamLimits

0xad96,	// (0x0000c4ff) form_field_popup_wide_pane

0xf2ef,	// (0x00010a58) form_field_slider_pane_ParamLimits

0xf2ef,	// (0x00010a58) form_field_slider_pane

0xf302,	// (0x00010a6b) form_field_slider_wide_pane_ParamLimits

0xf302,	// (0x00010a6b) form_field_slider_wide_pane

0xf315,	// (0x00010a7e) data_form_pane

0xadc1,	// (0x0000c52a) form_field_data_pane_t1

0xf321,	// (0x00010a8a) input_focus_pane

0xf32f,	// (0x00010a98) data_form_wide_pane

0xf367,	// (0x00010ad0) form_field_data_wide_pane_t1

0xf009,	// (0x00010772) input_focus_pane_cp6

0xaddb,	// (0x0000c544) form_field_popup_pane_t1

0xf321,	// (0x00010a8a) input_focus_pane_cp7

0xf386,	// (0x00010aef) list_form_pane

0xf39a,	// (0x00010b03) form_field_popup_wide_pane_t1

0xf321,	// (0x00010a8a) input_focus_pane_cp8

0xf3ac,	// (0x00010b15) list_form_wide_pane

0xadfd,	// (0x0000c566) form_field_slider_pane_t1_ParamLimits

0xadfd,	// (0x0000c566) form_field_slider_pane_t1

0xae15,	// (0x0000c57e) form_field_slider_pane_t2_ParamLimits

0xae15,	// (0x0000c57e) form_field_slider_pane_t2

0x0001,

0xf658,	// (0x00010dc1) form_field_slider_pane_t_ParamLimits

0xf658,	// (0x00010dc1) form_field_slider_pane_t

0xeb91,	// (0x000102fa) input_focus_pane_cp9_ParamLimits

0xeb91,	// (0x000102fa) input_focus_pane_cp9

0xae2a,	// (0x0000c593) slider_cont_pane_ParamLimits

0xae2a,	// (0x0000c593) slider_cont_pane

0xf3b8,	// (0x00010b21) form_field_slider_wide_pane_t1_ParamLimits

0xf3b8,	// (0x00010b21) form_field_slider_wide_pane_t1

0xf3ca,	// (0x00010b33) form_field_slider_wide_pane_t2_ParamLimits

0xf3ca,	// (0x00010b33) form_field_slider_wide_pane_t2

0x0001,

0xf65d,	// (0x00010dc6) form_field_slider_wide_pane_t_ParamLimits

0xf65d,	// (0x00010dc6) form_field_slider_wide_pane_t

0xeb91,	// (0x000102fa) input_focus_pane_cp10_ParamLimits

0xeb91,	// (0x000102fa) input_focus_pane_cp10

0xae3e,	// (0x0000c5a7) slider_cont_pane_cp1_ParamLimits

0xae3e,	// (0x0000c5a7) slider_cont_pane_cp1

0xae52,	// (0x0000c5bb) slider_form_pane_cp

0xf3dc,	// (0x00010b45) input_focus_pane_g1

0xf3e4,	// (0x00010b4d) input_focus_pane_g2

0xf3ec,	// (0x00010b55) input_focus_pane_g3

0xf3f4,	// (0x00010b5d) input_focus_pane_g4

0xf3fc,	// (0x00010b65) input_focus_pane_g5

0xf404,	// (0x00010b6d) input_focus_pane_g6

0xf40c,	// (0x00010b75) input_focus_pane_g7

0xf414,	// (0x00010b7d) input_focus_pane_g8

0xf41c,	// (0x00010b85) input_focus_pane_g9

0xe976,	// (0x000100df) input_focus_pane_g10

0x0009,

0xf662,	// (0x00010dcb) input_focus_pane_g

0x2896,	// (0x00003fff) wait_border_pane_g3_copy1

0xae5a,	// (0x0000c5c3) data_form_pane_t1

0xe976,	// (0x000100df) wait_anim_pane_g1_copy1

0xc676,	// (0x0000dddf) data_form_wide_pane_t1

0xf424,	// (0x00010b8d) list_form_graphic_pane_cp_ParamLimits

0xf424,	// (0x00010b8d) list_form_graphic_pane_cp

0x3a5d,	// (0x000051c6) slider_form_pane_g1

0x3a66,	// (0x000051cf) slider_form_pane_g2

0x0006,

0xf959,	// (0x000110c2) slider_form_pane_g

0xf424,	// (0x00010b8d) list_form_graphic_pane_ParamLimits

0xf424,	// (0x00010b8d) list_form_graphic_pane

0xf436,	// (0x00010b9f) list_form_graphic_pane_g1

0xf43e,	// (0x00010ba7) list_form_graphic_pane_t1_ParamLimits

0xf43e,	// (0x00010ba7) list_form_graphic_pane_t1

0xeba9,	// (0x00010312) list_highlight_pane_cp5_ParamLimits

0xeba9,	// (0x00010312) list_highlight_pane_cp5

0xae76,	// (0x0000c5df) find_pane_g1

0xf453,	// (0x00010bbc) input_find_pane

0xae7f,	// (0x0000c5e8) input_find_pane_g1_ParamLimits

0xae7f,	// (0x0000c5e8) input_find_pane_g1

0xae8b,	// (0x0000c5f4) input_find_pane_t1_ParamLimits

0xae8b,	// (0x0000c5f4) input_find_pane_t1

0xaea0,	// (0x0000c609) input_find_pane_t2_ParamLimits

0xaea0,	// (0x0000c609) input_find_pane_t2

0x0001,

0xf677,	// (0x00010de0) input_find_pane_t_ParamLimits

0xf677,	// (0x00010de0) input_find_pane_t

0xf45c,	// (0x00010bc5) input_focus_pane_cp5_ParamLimits

0xf45c,	// (0x00010bc5) input_focus_pane_cp5

0xf46f,	// (0x00010bd8) bg_popup_window_pane_cp2_ParamLimits

0xf46f,	// (0x00010bd8) bg_popup_window_pane_cp2

0xf47c,	// (0x00010be5) listscroll_menu_pane_ParamLimits

0xf47c,	// (0x00010be5) listscroll_menu_pane

0xaec1,	// (0x0000c62a) popup_submenu_window_ParamLimits

0xaec1,	// (0x0000c62a) popup_submenu_window

0xf488,	// (0x00010bf1) find_popup_pane_g1

0xf490,	// (0x00010bf9) input_popup_find_pane_cp

0xf49a,	// (0x00010c03) input_focus_pane_cp4_ParamLimits

0xf49a,	// (0x00010c03) input_focus_pane_cp4

0xf4a8,	// (0x00010c11) input_popup_find_pane_t1_ParamLimits

0xf4a8,	// (0x00010c11) input_popup_find_pane_t1

0xeaef,	// (0x00010258) bg_popup_sub_pane_cp

0xf4d6,	// (0x00010c3f) listscroll_popup_sub_pane

0xf4de,	// (0x00010c47) list_submenu_pane_ParamLimits

0xf4de,	// (0x00010c47) list_submenu_pane

0xf4ef,	// (0x00010c58) scroll_pane_cp4

0xf4f7,	// (0x00010c60) list_single_popup_submenu_pane_ParamLimits

0xf4f7,	// (0x00010c60) list_single_popup_submenu_pane

0xf50c,	// (0x00010c75) list_single_popup_submenu_pane_g1

0xf514,	// (0x00010c7d) list_single_popup_submenu_pane_t1_ParamLimits

0xf514,	// (0x00010c7d) list_single_popup_submenu_pane_t1

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp1_ParamLimits

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp1

0xaeff,	// (0x0000c668) tabs_2_active_pane_g1

0xaf07,	// (0x0000c670) tabs_2_active_pane_t1

0xeb91,	// (0x000102fa) bg_passive_tab_pane_cp1_ParamLimits

0xeb91,	// (0x000102fa) bg_passive_tab_pane_cp1

0xaeff,	// (0x0000c668) tabs_2_passive_pane_g1

0xaf07,	// (0x0000c670) tabs_2_passive_pane_t1

0xeba9,	// (0x00010312) bg_active_tab_pane_cp4

0xaf19,	// (0x0000c682) tabs_2_long_active_pane_t1

0x1493,	// (0x00002bfc) bg_passive_tab_pane_cp4

0x2123,	// (0x0000388c) list_single_midp_graphic_pane_g4_ParamLimits

0xeba9,	// (0x00010312) bg_active_tab_pane_cp5

0xaf2c,	// (0x0000c695) tabs_3_long_active_pane_t1

0x1493,	// (0x00002bfc) bg_passive_tab_pane_cp5

0x2123,	// (0x0000388c) list_single_midp_graphic_pane_g4

0xeba9,	// (0x00010312) bg_popup_window_pane_cp13_ParamLimits

0xeba9,	// (0x00010312) bg_popup_window_pane_cp13

0x0029,	// (0x00001792) listscroll_popup_fast_pane_ParamLimits

0x0029,	// (0x00001792) listscroll_popup_fast_pane

0x0038,	// (0x000017a1) grid_popup_fast_pane_ParamLimits

0x0038,	// (0x000017a1) grid_popup_fast_pane

0x004a,	// (0x000017b3) scroll_pane_cp9_ParamLimits

0x004a,	// (0x000017b3) scroll_pane_cp9

0x5e1c,	// (0x00007585) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5e1c,	// (0x00007585) list_single_graphic_hl_pane_t1_cp2

0x006e,	// (0x000017d7) input_focus_pane_cp20_ParamLimits

0x006e,	// (0x000017d7) input_focus_pane_cp20

0x007c,	// (0x000017e5) query_popup_data_pane_t1_ParamLimits

0x007c,	// (0x000017e5) query_popup_data_pane_t1

0x008f,	// (0x000017f8) query_popup_data_pane_t2_ParamLimits

0x008f,	// (0x000017f8) query_popup_data_pane_t2

0x00d5,	// (0x0000183e) query_popup_data_pane_t3_ParamLimits

0x00d5,	// (0x0000183e) query_popup_data_pane_t3

0x0116,	// (0x0000187f) query_popup_data_pane_t4_ParamLimits

0x0116,	// (0x0000187f) query_popup_data_pane_t4

0x0152,	// (0x000018bb) query_popup_data_pane_t5_ParamLimits

0x0152,	// (0x000018bb) query_popup_data_pane_t5

0x0004,

0xf67c,	// (0x00010de5) query_popup_data_pane_t_ParamLimits

0xf67c,	// (0x00010de5) query_popup_data_pane_t

0xf3dc,	// (0x00010b45) bg_set_opt_pane_g1

0xf3e4,	// (0x00010b4d) bg_set_opt_pane_g2

0xf3ec,	// (0x00010b55) bg_set_opt_pane_g3

0xf3f4,	// (0x00010b5d) bg_set_opt_pane_g4

0xf3fc,	// (0x00010b65) bg_set_opt_pane_g5

0xf404,	// (0x00010b6d) bg_set_opt_pane_g6

0xf40c,	// (0x00010b75) bg_set_opt_pane_g7

0xf414,	// (0x00010b7d) bg_set_opt_pane_g8

0xf41c,	// (0x00010b85) bg_set_opt_pane_g9

0x0008,

0xf687,	// (0x00010df0) bg_set_opt_pane_g

0x0a6e,	// (0x000021d7) control_top_pane_stacon_ParamLimits

0x0a6e,	// (0x000021d7) control_top_pane_stacon

0x0ac1,	// (0x0000222a) signal_pane_stacon_ParamLimits

0x0ac1,	// (0x0000222a) signal_pane_stacon

0x0ae6,	// (0x0000224f) stacon_top_pane_g1_ParamLimits

0x0ae6,	// (0x0000224f) stacon_top_pane_g1

0x0b08,	// (0x00002271) title_pane_stacon_ParamLimits

0x0b08,	// (0x00002271) title_pane_stacon

0x0b32,	// (0x0000229b) uni_indicator_pane_stacon_ParamLimits

0x0b32,	// (0x0000229b) uni_indicator_pane_stacon

0x0b47,	// (0x000022b0) battery_pane_stacon_ParamLimits

0x0b47,	// (0x000022b0) battery_pane_stacon

0x0b8b,	// (0x000022f4) control_bottom_pane_stacon_ParamLimits

0x0b8b,	// (0x000022f4) control_bottom_pane_stacon

0x0bae,	// (0x00002317) navi_pane_stacon_ParamLimits

0x0bae,	// (0x00002317) navi_pane_stacon

0x0bd1,	// (0x0000233a) stacon_bottom_pane_g1_ParamLimits

0x0bd1,	// (0x0000233a) stacon_bottom_pane_g1

0x0189,	// (0x000018f2) aid_levels_signal_lsc_ParamLimits

0x0189,	// (0x000018f2) aid_levels_signal_lsc

0x01a0,	// (0x00001909) signal_pane_stacon_g1_ParamLimits

0x01a0,	// (0x00001909) signal_pane_stacon_g1

0x01b4,	// (0x0000191d) signal_pane_stacon_g2_ParamLimits

0x01b4,	// (0x0000191d) signal_pane_stacon_g2

0x0001,

0xf69a,	// (0x00010e03) signal_pane_stacon_g_ParamLimits

0xf69a,	// (0x00010e03) signal_pane_stacon_g

0x01f6,	// (0x0000195f) title_pane_stacon_t1_ParamLimits

0x01f6,	// (0x0000195f) title_pane_stacon_t1

0x021b,	// (0x00001984) uni_indicator_pane_stacon_g1

0x0225,	// (0x0000198e) uni_indicator_pane_stacon_g2

0x022f,	// (0x00001998) uni_indicator_pane_stacon_g3

0x0239,	// (0x000019a2) uni_indicator_pane_stacon_g4

0x0003,

0xf6a6,	// (0x00010e0f) uni_indicator_pane_stacon_g

0x0243,	// (0x000019ac) control_top_pane_stacon_g1

0x024b,	// (0x000019b4) control_top_pane_stacon_t1_ParamLimits

0x024b,	// (0x000019b4) control_top_pane_stacon_t1

0x0282,	// (0x000019eb) aid_levels_battery_lsc_ParamLimits

0x0282,	// (0x000019eb) aid_levels_battery_lsc

0x029a,	// (0x00001a03) battery_pane_stacon_g1_ParamLimits

0x029a,	// (0x00001a03) battery_pane_stacon_g1

0x02ad,	// (0x00001a16) battery_pane_stacon_g2_ParamLimits

0x02ad,	// (0x00001a16) battery_pane_stacon_g2

0x0001,

0xf6af,	// (0x00010e18) battery_pane_stacon_g_ParamLimits

0xf6af,	// (0x00010e18) battery_pane_stacon_g

0x02eb,	// (0x00001a54) navi_icon_pane_stacon

0x02ff,	// (0x00001a68) navi_navi_pane_stacon

0x02eb,	// (0x00001a54) navi_text_pane_stacon

0x0243,	// (0x000019ac) control_bottom_pane_stacon_g1

0x0315,	// (0x00001a7e) control_bottom_pane_stacon_t1_ParamLimits

0x0315,	// (0x00001a7e) control_bottom_pane_stacon_t1

0xaf3e,	// (0x0000c6a7) grid_app_pane_ParamLimits

0xaf3e,	// (0x0000c6a7) grid_app_pane

0xaf76,	// (0x0000c6df) scroll_pane_cp15_ParamLimits

0xaf76,	// (0x0000c6df) scroll_pane_cp15

0xaf8b,	// (0x0000c6f4) cell_app_pane_ParamLimits

0xaf8b,	// (0x0000c6f4) cell_app_pane

0xafd8,	// (0x0000c741) cell_app_pane_g1_ParamLimits

0xafd8,	// (0x0000c741) cell_app_pane_g1

0x03eb,	// (0x00001b54) cell_app_pane_g2_ParamLimits

0x03eb,	// (0x00001b54) cell_app_pane_g2

0x0001,

0xf6b4,	// (0x00010e1d) cell_app_pane_g_ParamLimits

0xf6b4,	// (0x00010e1d) cell_app_pane_g

0xaffc,	// (0x0000c765) cell_app_pane_t1_ParamLimits

0xaffc,	// (0x0000c765) cell_app_pane_t1

0x040e,	// (0x00001b77) grid_highlight_pane_ParamLimits

0x040e,	// (0x00001b77) grid_highlight_pane

0xf3dc,	// (0x00010b45) cell_highlight_pane_g1

0xf3e4,	// (0x00010b4d) cell_highlight_pane_g2

0xf3ec,	// (0x00010b55) cell_highlight_pane_g3

0xf3f4,	// (0x00010b5d) cell_highlight_pane_g4

0xf3fc,	// (0x00010b65) cell_highlight_pane_g5

0xf404,	// (0x00010b6d) cell_highlight_pane_g6

0xf40c,	// (0x00010b75) cell_highlight_pane_g7

0xf414,	// (0x00010b7d) cell_highlight_pane_g8

0xf41c,	// (0x00010b85) cell_highlight_pane_g9

0xe976,	// (0x000100df) cell_highlight_pane_g10

0x0009,

0xf662,	// (0x00010dcb) cell_highlight_pane_g

0x0432,	// (0x00001b9b) bg_scroll_pane

0x0451,	// (0x00001bba) scroll_handle_pane

0x04a2,	// (0x00001c0b) scroll_bg_pane_g1

0x04b7,	// (0x00001c20) scroll_bg_pane_g2

0x04cf,	// (0x00001c38) scroll_bg_pane_g3

0x0002,

0xf6b9,	// (0x00010e22) scroll_bg_pane_g

0x04e4,	// (0x00001c4d) scroll_handle_focus_pane_ParamLimits

0x04e4,	// (0x00001c4d) scroll_handle_focus_pane

0x04a2,	// (0x00001c0b) scroll_handle_pane_g1

0x04f1,	// (0x00001c5a) scroll_handle_pane_g2

0x04cf,	// (0x00001c38) scroll_handle_pane_g3

0x0002,

0xf6c0,	// (0x00010e29) scroll_handle_pane_g

0xf49a,	// (0x00010c03) bg_popup_sub_pane_cp21_ParamLimits

0xf49a,	// (0x00010c03) bg_popup_sub_pane_cp21

0x0505,	// (0x00001c6e) popup_fep_japan_predictive_window_t1_ParamLimits

0x0505,	// (0x00001c6e) popup_fep_japan_predictive_window_t1

0x051c,	// (0x00001c85) popup_fep_japan_predictive_window_t2_ParamLimits

0x051c,	// (0x00001c85) popup_fep_japan_predictive_window_t2

0x054f,	// (0x00001cb8) popup_fep_japan_predictive_window_t3_ParamLimits

0x054f,	// (0x00001cb8) popup_fep_japan_predictive_window_t3

0x0002,

0xf6c7,	// (0x00010e30) popup_fep_japan_predictive_window_t_ParamLimits

0xf6c7,	// (0x00010e30) popup_fep_japan_predictive_window_t

0xeaef,	// (0x00010258) bg_popup_sub_pane_cp23

0x0586,	// (0x00001cef) listscroll_japin_cand_pane

0x058e,	// (0x00001cf7) popup_fep_japan_candidate_window_t1

0x059c,	// (0x00001d05) candidate_pane_ParamLimits

0x059c,	// (0x00001d05) candidate_pane

0x05ae,	// (0x00001d17) scroll_pane_cp30

0x05b8,	// (0x00001d21) list_single_popup_jap_candidate_pane_ParamLimits

0x05b8,	// (0x00001d21) list_single_popup_jap_candidate_pane

0xeaef,	// (0x00010258) list_highlight_pane_cp30

0x05cc,	// (0x00001d35) list_single_popup_jap_candidate_pane_t1

0xb01c,	// (0x0000c785) level_1_signal

0xb02e,	// (0x0000c797) level_2_signal

0xb041,	// (0x0000c7aa) level_3_signal

0xb054,	// (0x0000c7bd) level_4_signal

0xb067,	// (0x0000c7d0) level_5_signal

0xb07a,	// (0x0000c7e3) level_6_signal

0xb08d,	// (0x0000c7f6) level_7_signal

0xb01c,	// (0x0000c785) level_1_battery

0xb02e,	// (0x0000c797) level_2_battery

0xb041,	// (0x0000c7aa) level_3_battery

0xb054,	// (0x0000c7bd) level_4_battery

0xb067,	// (0x0000c7d0) level_5_battery

0xb07a,	// (0x0000c7e3) level_6_battery

0xb08d,	// (0x0000c7f6) level_7_battery

0x066d,	// (0x00001dd6) list_menu_pane_ParamLimits

0x066d,	// (0x00001dd6) list_menu_pane

0x0683,	// (0x00001dec) scroll_pane_cp25_ParamLimits

0x0683,	// (0x00001dec) scroll_pane_cp25

0x069c,	// (0x00001e05) list_double2_graphic_pane_cp2_ParamLimits

0x069c,	// (0x00001e05) list_double2_graphic_pane_cp2

0x069c,	// (0x00001e05) list_double2_large_graphic_pane_cp2_ParamLimits

0x069c,	// (0x00001e05) list_double2_large_graphic_pane_cp2

0x069c,	// (0x00001e05) list_double2_pane_cp2_ParamLimits

0x069c,	// (0x00001e05) list_double2_pane_cp2

0x069c,	// (0x00001e05) list_double_graphic_pane_cp2_ParamLimits

0x069c,	// (0x00001e05) list_double_graphic_pane_cp2

0x069c,	// (0x00001e05) list_double_large_graphic_pane_cp2_ParamLimits

0x069c,	// (0x00001e05) list_double_large_graphic_pane_cp2

0x069c,	// (0x00001e05) list_double_number_pane_cp2_ParamLimits

0x069c,	// (0x00001e05) list_double_number_pane_cp2

0x069c,	// (0x00001e05) list_double_pane_cp2_ParamLimits

0x069c,	// (0x00001e05) list_double_pane_cp2

0xb0a0,	// (0x0000c809) list_single_2graphic_pane_cp2_ParamLimits

0xb0a0,	// (0x0000c809) list_single_2graphic_pane_cp2

0xb0a0,	// (0x0000c809) list_single_graphic_heading_pane_cp2_ParamLimits

0xb0a0,	// (0x0000c809) list_single_graphic_heading_pane_cp2

0xb0a0,	// (0x0000c809) list_single_graphic_pane_cp2_ParamLimits

0xb0a0,	// (0x0000c809) list_single_graphic_pane_cp2

0xb0a0,	// (0x0000c809) list_single_heading_pane_cp2_ParamLimits

0xb0a0,	// (0x0000c809) list_single_heading_pane_cp2

0x06df,	// (0x00001e48) list_single_large_graphic_pane_cp2_ParamLimits

0x06df,	// (0x00001e48) list_single_large_graphic_pane_cp2

0xb0a0,	// (0x0000c809) list_single_number_heading_pane_cp2_ParamLimits

0xb0a0,	// (0x0000c809) list_single_number_heading_pane_cp2

0xb0a0,	// (0x0000c809) list_single_number_pane_cp2_ParamLimits

0xb0a0,	// (0x0000c809) list_single_number_pane_cp2

0xb0b4,	// (0x0000c81d) list_single_pane_cp2_ParamLimits

0xb0b4,	// (0x0000c81d) list_single_pane_cp2

0x07c5,	// (0x00001f2e) bg_popup_sub_pane_cp22

0x07ea,	// (0x00001f53) popup_side_volume_key_window_g1

0x0814,	// (0x00001f7d) popup_side_volume_key_window_t1

0x0832,	// (0x00001f9b) volume_small_pane_cp1

0xeb91,	// (0x000102fa) bg_popup_sub_pane_cp24_ParamLimits

0xeb91,	// (0x000102fa) bg_popup_sub_pane_cp24

0x083a,	// (0x00001fa3) fep_china_uni_candidate_pane_ParamLimits

0x083a,	// (0x00001fa3) fep_china_uni_candidate_pane

0x084e,	// (0x00001fb7) fep_china_uni_entry_pane

0x085e,	// (0x00001fc7) popup_fep_china_uni_window_g1

0x087a,	// (0x00001fe3) fep_china_uni_entry_pane_g1

0x0884,	// (0x00001fed) fep_china_uni_entry_pane_g2

0x0001,

0xf6f8,	// (0x00010e61) fep_china_uni_entry_pane_g

0x088e,	// (0x00001ff7) fep_entry_item_pane

0x0898,	// (0x00002001) fep_candidate_item_pane

0x08a0,	// (0x00002009) fep_china_uni_candidate_pane_g1

0x08aa,	// (0x00002013) fep_china_uni_candidate_pane_g2

0x08b2,	// (0x0000201b) fep_china_uni_candidate_pane_g3

0x08ba,	// (0x00002023) fep_china_uni_candidate_pane_g4

0x0003,

0xf6fd,	// (0x00010e66) fep_china_uni_candidate_pane_g

0xe976,	// (0x000100df) fep_entry_item_pane_g1

0x08c4,	// (0x0000202d) fep_entry_item_pane_t1_ParamLimits

0x08c4,	// (0x0000202d) fep_entry_item_pane_t1

0x08da,	// (0x00002043) fep_candidate_item_pane_t1_ParamLimits

0x08da,	// (0x00002043) fep_candidate_item_pane_t1

0x08ef,	// (0x00002058) fep_candidate_item_pane_t2_ParamLimits

0x08ef,	// (0x00002058) fep_candidate_item_pane_t2

0x0001,

0xf706,	// (0x00010e6f) fep_candidate_item_pane_t_ParamLimits

0xf706,	// (0x00010e6f) fep_candidate_item_pane_t

0xeba9,	// (0x00010312) list_highlight_pane_cp31_ParamLimits

0xeba9,	// (0x00010312) list_highlight_pane_cp31

0x0901,	// (0x0000206a) level_1_signal_lsc

0x090a,	// (0x00002073) level_2_signal_lsc

0x0913,	// (0x0000207c) level_3_signal_lsc

0x091c,	// (0x00002085) level_4_signal_lsc

0x0925,	// (0x0000208e) level_5_signal_lsc

0x092e,	// (0x00002097) level_6_signal_lsc

0x0937,	// (0x000020a0) level_7_signal_lsc

0x0937,	// (0x000020a0) level_1_battery_lsc

0x0940,	// (0x000020a9) level_2_battery_lsc

0x0949,	// (0x000020b2) level_3_battery_lsc

0x0952,	// (0x000020bb) level_4_battery_lsc

0x095b,	// (0x000020c4) level_5_battery_lsc

0x0964,	// (0x000020cd) level_6_battery_lsc

0x0901,	// (0x0000206a) level_7_battery_lsc

0x096d,	// (0x000020d6) scroll_handle_focus_pane_g1

0x0976,	// (0x000020df) scroll_handle_focus_pane_g2

0x097f,	// (0x000020e8) scroll_handle_focus_pane_g3

0x0002,

0xf70b,	// (0x00010e74) scroll_handle_focus_pane_g

0xb143,	// (0x0000c8ac) list_single_2graphic_pane_g1_ParamLimits

0xb143,	// (0x0000c8ac) list_single_2graphic_pane_g1

0xa9b1,	// (0x0000c11a) list_single_2graphic_pane_g2_ParamLimits

0xa9b1,	// (0x0000c11a) list_single_2graphic_pane_g2

0x1f5a,	// (0x000036c3) list_single_2graphic_pane_g3_ParamLimits

0x1f5a,	// (0x000036c3) list_single_2graphic_pane_g3

0xb14f,	// (0x0000c8b8) list_single_2graphic_pane_g4_ParamLimits

0xb14f,	// (0x0000c8b8) list_single_2graphic_pane_g4

0x0003,

0xf712,	// (0x00010e7b) list_single_2graphic_pane_g_ParamLimits

0xf712,	// (0x00010e7b) list_single_2graphic_pane_g

0xb160,	// (0x0000c8c9) list_single_2graphic_pane_t1_ParamLimits

0xb160,	// (0x0000c8c9) list_single_2graphic_pane_t1

0xb18e,	// (0x0000c8f7) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb18e,	// (0x0000c8f7) list_double2_graphic_large_graphic_pane_g1

0xaa1c,	// (0x0000c185) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xaa1c,	// (0x0000c185) list_double2_graphic_large_graphic_pane_g2

0xaa2d,	// (0x0000c196) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xaa2d,	// (0x0000c196) list_double2_graphic_large_graphic_pane_g3

0xb1a0,	// (0x0000c909) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb1a0,	// (0x0000c909) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf71b,	// (0x00010e84) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf71b,	// (0x00010e84) list_double2_graphic_large_graphic_pane_g

0xb1ac,	// (0x0000c915) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb1ac,	// (0x0000c915) list_double2_graphic_large_graphic_pane_t1

0xb1c2,	// (0x0000c92b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb1c2,	// (0x0000c92b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf724,	// (0x00010e8d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf724,	// (0x00010e8d) list_double2_graphic_large_graphic_pane_t

0x0c94,	// (0x000023fd) popup_fast_swap_window_ParamLimits

0x0c94,	// (0x000023fd) popup_fast_swap_window

0x0cb2,	// (0x0000241b) popup_side_volume_key_window

0x0cd0,	// (0x00002439) stacon_top_pane

0x0cda,	// (0x00002443) status_pane_ParamLimits

0x0cda,	// (0x00002443) status_pane

0xb21c,	// (0x0000c985) status_small_pane

0xeaef,	// (0x00010258) control_pane

0xeaef,	// (0x00010258) stacon_bottom_pane

0xf2ac,	// (0x00010a15) scroll_pane_cp121

0xf2a3,	// (0x00010a0c) set_content_pane

0xb1d4,	// (0x0000c93d) bg_active_tab_pane_g1_cp1

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp1

0xb1dd,	// (0x0000c946) bg_active_tab_pane_g3_cp1

0xb1d4,	// (0x0000c93d) bg_passive_tab_pane_g1_cp1

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp1

0xb1dd,	// (0x0000c946) bg_passive_tab_pane_g3_cp1

0xb1e6,	// (0x0000c94f) bg_active_tab_pane_g1_cp2

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp2

0xb1ef,	// (0x0000c958) bg_active_tab_pane_g3_cp2

0xb1e6,	// (0x0000c94f) bg_passive_tab_pane_g1_cp2

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp2

0xb1ef,	// (0x0000c958) bg_passive_tab_pane_g3_cp2

0xb1f8,	// (0x0000c961) bg_active_tab_pane_g1_cp3

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp3

0xb201,	// (0x0000c96a) bg_active_tab_pane_g3_cp3

0xb1f8,	// (0x0000c961) bg_passive_tab_pane_g1_cp3

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp3

0xb201,	// (0x0000c96a) bg_passive_tab_pane_g3_cp3

0xb20a,	// (0x0000c973) bg_active_tab_pane_g1_cp4

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp4

0xb213,	// (0x0000c97c) bg_active_tab_pane_g3_cp4

0xb20a,	// (0x0000c973) bg_passive_tab_pane_g1_cp4

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp4

0xb213,	// (0x0000c97c) bg_passive_tab_pane_g3_cp4

0x0bed,	// (0x00002356) bg_active_tab_pane_g1_cp5

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp5

0x0bf6,	// (0x0000235f) bg_active_tab_pane_g3_cp5

0x0bed,	// (0x00002356) bg_passive_tab_pane_g1_cp5

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp5

0x0bf6,	// (0x0000235f) bg_passive_tab_pane_g3_cp5

0x4224,	// (0x0000598d) list_set_graphic_pane_ParamLimits

0x4224,	// (0x0000598d) list_set_graphic_pane

0xeaef,	// (0x00010258) bg_set_opt_pane_cp4

0x0c15,	// (0x0000237e) list_set_graphic_pane_g1_ParamLimits

0x0c15,	// (0x0000237e) list_set_graphic_pane_g1

0x0c21,	// (0x0000238a) list_set_graphic_pane_g2_ParamLimits

0x0c21,	// (0x0000238a) list_set_graphic_pane_g2

0x0001,

0xf729,	// (0x00010e92) list_set_graphic_pane_g_ParamLimits

0xf729,	// (0x00010e92) list_set_graphic_pane_g

0x0009,

0xfaac,	// (0x00011215) volume_small_pane_cp_g

0x0c45,	// (0x000023ae) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x0c45,	// (0x000023ae) list_double2_large_graphic_pane_g1_cp2

0x0c53,	// (0x000023bc) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0c53,	// (0x000023bc) list_double2_large_graphic_pane_g2_cp2

0x0c64,	// (0x000023cd) list_double2_large_graphic_pane_g3_cp2

0x0c6c,	// (0x000023d5) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x0c6c,	// (0x000023d5) list_double2_large_graphic_pane_t1_cp2

0x0c82,	// (0x000023eb) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x0c82,	// (0x000023eb) list_double2_large_graphic_pane_t2_cp2

0x34e6,	// (0x00004c4f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x34e6,	// (0x00004c4f) list_double_large_graphic_pane_g1_cp2

0x34f9,	// (0x00004c62) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x34f9,	// (0x00004c62) list_double_large_graphic_pane_g2_cp2

0x0e03,	// (0x0000256c) list_double_large_graphic_pane_g3_cp2

0x350a,	// (0x00004c73) list_double_large_graphic_pane_g4_cp

0x3512,	// (0x00004c7b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3512,	// (0x00004c7b) list_double_large_graphic_pane_t1_cp2

0x3529,	// (0x00004c92) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x3529,	// (0x00004c92) list_double_large_graphic_pane_t2_cp2

0x0cf3,	// (0x0000245c) list_double2_graphic_pane_g1_cp2_ParamLimits

0x0cf3,	// (0x0000245c) list_double2_graphic_pane_g1_cp2

0x0d01,	// (0x0000246a) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0d01,	// (0x0000246a) list_double2_graphic_pane_g2_cp2

0x0d12,	// (0x0000247b) list_double2_graphic_pane_g3_cp2

0x0d1c,	// (0x00002485) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0d1c,	// (0x00002485) list_double2_graphic_pane_t1_cp2

0x0d32,	// (0x0000249b) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0d32,	// (0x0000249b) list_double2_graphic_pane_t2_cp2

0x0d44,	// (0x000024ad) list_single_number_heading_pane_g1_cp2_ParamLimits

0x0d44,	// (0x000024ad) list_single_number_heading_pane_g1_cp2

0x0d50,	// (0x000024b9) list_single_number_heading_pane_g2_cp2

0x0d58,	// (0x000024c1) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0d58,	// (0x000024c1) list_single_number_heading_pane_t1_cp2

0x0d6e,	// (0x000024d7) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0d6e,	// (0x000024d7) list_single_number_heading_pane_t2_cp2

0x0d82,	// (0x000024eb) list_single_number_heading_pane_t3_cp2_ParamLimits

0x0d82,	// (0x000024eb) list_single_number_heading_pane_t3_cp2

0x0d44,	// (0x000024ad) list_single_heading_pane_g1_cp2_ParamLimits

0x0d44,	// (0x000024ad) list_single_heading_pane_g1_cp2

0x0d50,	// (0x000024b9) list_single_heading_pane_g2_cp2

0x0d58,	// (0x000024c1) list_single_heading_pane_t1_cp2_ParamLimits

0x0d58,	// (0x000024c1) list_single_heading_pane_t1_cp2

0x32e0,	// (0x00004a49) list_single_heading_pane_t2_cp2_ParamLimits

0x32e0,	// (0x00004a49) list_single_heading_pane_t2_cp2

0x3228,	// (0x00004991) list_double_graphic_pane_g1_cp2_ParamLimits

0x3228,	// (0x00004991) list_double_graphic_pane_g1_cp2

0x3234,	// (0x0000499d) list_double_graphic_pane_g2_cp2_ParamLimits

0x3234,	// (0x0000499d) list_double_graphic_pane_g2_cp2

0x3243,	// (0x000049ac) list_double_graphic_pane_g3_cp2

0x324b,	// (0x000049b4) list_double_graphic_pane_t1_cp2_ParamLimits

0x324b,	// (0x000049b4) list_double_graphic_pane_t1_cp2

0x3261,	// (0x000049ca) list_double_graphic_pane_t2_cp2_ParamLimits

0x3261,	// (0x000049ca) list_double_graphic_pane_t2_cp2

0x0df7,	// (0x00002560) list_double_number_pane_g1_cp2_ParamLimits

0x0df7,	// (0x00002560) list_double_number_pane_g1_cp2

0x0e03,	// (0x0000256c) list_double_number_pane_g2_cp2

0x31ec,	// (0x00004955) list_double_number_pane_t1_cp2_ParamLimits

0x31ec,	// (0x00004955) list_double_number_pane_t1_cp2

0x3200,	// (0x00004969) list_double_number_pane_t2_cp2_ParamLimits

0x3200,	// (0x00004969) list_double_number_pane_t2_cp2

0x3216,	// (0x0000497f) list_double_number_pane_t3_cp2_ParamLimits

0x3216,	// (0x0000497f) list_double_number_pane_t3_cp2

0x30c4,	// (0x0000482d) list_single_graphic_pane_g1_cp2_ParamLimits

0x30c4,	// (0x0000482d) list_single_graphic_pane_g1_cp2

0x0e68,	// (0x000025d1) list_single_graphic_pane_g2_cp2_ParamLimits

0x0e68,	// (0x000025d1) list_single_graphic_pane_g2_cp2

0x0e74,	// (0x000025dd) list_single_graphic_pane_g3_cp2

0x309a,	// (0x00004803) list_single_graphic_pane_t1_cp2_ParamLimits

0x309a,	// (0x00004803) list_single_graphic_pane_t1_cp2

0x0e68,	// (0x000025d1) list_single_number_pane_g1_cp2_ParamLimits

0x0e68,	// (0x000025d1) list_single_number_pane_g1_cp2

0x0e74,	// (0x000025dd) list_single_number_pane_g2_cp2

0x309a,	// (0x00004803) list_single_number_pane_t1_cp2_ParamLimits

0x309a,	// (0x00004803) list_single_number_pane_t1_cp2

0x30b0,	// (0x00004819) list_single_number_pane_t2_cp2_ParamLimits

0x30b0,	// (0x00004819) list_single_number_pane_t2_cp2

0x0c53,	// (0x000023bc) list_double2_pane_g1_cp2_ParamLimits

0x0c53,	// (0x000023bc) list_double2_pane_g1_cp2

0x0c64,	// (0x000023cd) list_double2_pane_g2_cp2

0x0dcf,	// (0x00002538) list_double2_pane_t1_cp2_ParamLimits

0x0dcf,	// (0x00002538) list_double2_pane_t1_cp2

0x0de5,	// (0x0000254e) list_double2_pane_t2_cp2_ParamLimits

0x0de5,	// (0x0000254e) list_double2_pane_t2_cp2

0x0df7,	// (0x00002560) list_double_pane_g1_cp2_ParamLimits

0x0df7,	// (0x00002560) list_double_pane_g1_cp2

0x0e03,	// (0x0000256c) list_double_pane_g2_cp2

0x0e0b,	// (0x00002574) list_double_pane_t1_cp2_ParamLimits

0x0e0b,	// (0x00002574) list_double_pane_t1_cp2

0x0e21,	// (0x0000258a) list_double_pane_t2_cp2_ParamLimits

0x0e21,	// (0x0000258a) list_double_pane_t2_cp2

0x0e58,	// (0x000025c1) list_single_pane_cp2_g3

0x0e68,	// (0x000025d1) list_single_pane_g1_cp2_ParamLimits

0x0e68,	// (0x000025d1) list_single_pane_g1_cp2

0x0e74,	// (0x000025dd) list_single_pane_g2_cp2

0x0e7c,	// (0x000025e5) list_single_pane_t1_cp2_ParamLimits

0x0e7c,	// (0x000025e5) list_single_pane_t1_cp2

0x0e94,	// (0x000025fd) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x0e94,	// (0x000025fd) list_single_large_graphic_pane_g1_cp2

0x0ea2,	// (0x0000260b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0ea2,	// (0x0000260b) list_single_large_graphic_pane_g2_cp2

0x0eae,	// (0x00002617) list_single_large_graphic_pane_g3_cp2

0x0eb6,	// (0x0000261f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0eb6,	// (0x0000261f) list_single_large_graphic_pane_g4_cp1

0x0ed0,	// (0x00002639) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0ed0,	// (0x00002639) list_single_large_graphic_pane_t1_cp2

0x2f09,	// (0x00004672) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2f09,	// (0x00004672) list_single_graphic_heading_pane_g1_cp2

0x2ed6,	// (0x0000463f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2ed6,	// (0x0000463f) list_single_graphic_heading_pane_g4_cp2

0x0e74,	// (0x000025dd) list_single_graphic_heading_pane_g5_cp2

0x2f15,	// (0x0000467e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x2f15,	// (0x0000467e) list_single_graphic_heading_pane_t1_cp2

0x2f2b,	// (0x00004694) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2f2b,	// (0x00004694) list_single_graphic_heading_pane_t2_cp2

0x2eca,	// (0x00004633) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2eca,	// (0x00004633) list_single_2graphic_pane_g1_cp2

0x2ed6,	// (0x0000463f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2ed6,	// (0x0000463f) list_single_2graphic_pane_g2_cp2

0x0e74,	// (0x000025dd) list_single_2graphic_pane_g3_cp2

0x2ee7,	// (0x00004650) list_single_2graphic_pane_g4_cp2_ParamLimits

0x2ee7,	// (0x00004650) list_single_2graphic_pane_g4_cp2

0x2ef3,	// (0x0000465c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2ef3,	// (0x0000465c) list_single_2graphic_pane_t1_cp2

0xe976,	// (0x000100df) list_highlight_pane_g10_cp1

0x2aa2,	// (0x0000420b) list_highlight_pane_g1_cp1

0x2aaa,	// (0x00004213) list_highlight_pane_g2_cp1

0x2ab2,	// (0x0000421b) list_highlight_pane_g3_cp1

0x2aba,	// (0x00004223) list_highlight_pane_g4_cp1

0x2ac2,	// (0x0000422b) list_highlight_pane_g5_cp1

0x2aca,	// (0x00004233) list_highlight_pane_g6_cp1

0x2ad2,	// (0x0000423b) list_highlight_pane_g7_cp1

0x2ada,	// (0x00004243) list_highlight_pane_g8_cp1

0x2ae2,	// (0x0000424b) list_highlight_pane_g9_cp1

0xc1a6,	// (0x0000d90f) form_field_slider_pane_t3

0xc1b4,	// (0x0000d91d) form_field_slider_pane_t4

0x29de,	// (0x00004147) slider_form_pane_ParamLimits

0x29de,	// (0x00004147) slider_form_pane

0xeaef,	// (0x00010258) control_abbreviations

0xeaef,	// (0x00010258) control_conventions

0xeaef,	// (0x00010258) control_definitions

0xeaef,	// (0x00010258) format_table_attribute

0x3336,	// (0x00004a9f) bg_popup_preview_window_pane_g9

0xeaef,	// (0x00010258) format_table_data2

0xeaef,	// (0x00010258) format_table_data3

0xeaef,	// (0x00010258) format_table_data_example

0x0008,

0xeaef,	// (0x00010258) intro_purpose

0xf8b9,	// (0x00011022) bg_popup_preview_window_pane_g

0xeaef,	// (0x00010258) texts_category

0xeaef,	// (0x00010258) texts_graphics

0x0ee6,	// (0x0000264f) text_digital

0x0ef5,	// (0x0000265e) text_primary

0x0f04,	// (0x0000266d) text_primary_small

0x0f13,	// (0x0000267c) text_secondary

0x0f22,	// (0x0000268b) text_title

0x3c44,	// (0x000053ad) bg_passive_tab_pane_g1_cp3_srt

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp3_srt

0x3c4d,	// (0x000053b6) bg_passive_tab_pane_g3_cp3_srt

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp3_srt_ParamLimits

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp3_srt

0x3c56,	// (0x000053bf) tabs_4_active_pane_srt_g1

0xc755,	// (0x0000debe) tabs_4_active_pane_srt_t1_ParamLimits

0xc755,	// (0x0000debe) tabs_4_active_pane_srt_t1

0x3c44,	// (0x000053ad) bg_active_tab_pane_g1_cp3_copy1

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp3_copy1

0x3c4d,	// (0x000053b6) bg_active_tab_pane_g3_cp3_copy1

0xeba9,	// (0x00010312) tabs_2_long_active_pane_srt_ParamLimits

0xeba9,	// (0x00010312) tabs_2_long_active_pane_srt

0xeba9,	// (0x00010312) tabs_2_long_passive_pane_srt_ParamLimits

0xeba9,	// (0x00010312) tabs_2_long_passive_pane_srt

0x1493,	// (0x00002bfc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x1493,	// (0x00002bfc) bg_passive_tab_pane_cp4_srt

0x37fc,	// (0x00004f65) bg_passive_tab_pane_g1_cp4_srt

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp4_srt

0x3805,	// (0x00004f6e) bg_passive_tab_pane_g3_cp4_srt

0xeba9,	// (0x00010312) bg_active_tab_pane_cp4_srt_ParamLimits

0xeba9,	// (0x00010312) bg_active_tab_pane_cp4_srt

0xc4ed,	// (0x0000dc56) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc4ed,	// (0x0000dc56) tabs_2_long_active_pane_srt_t1

0x37fc,	// (0x00004f65) bg_active_tab_pane_g1_cp4_srt

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp4_srt

0x3805,	// (0x00004f6e) bg_active_tab_pane_g3_cp4_srt

0xeb91,	// (0x000102fa) tabs_3_long_active_pane_srt_ParamLimits

0xeb91,	// (0x000102fa) tabs_3_long_active_pane_srt

0xeb91,	// (0x000102fa) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xeb91,	// (0x000102fa) tabs_3_long_passive_pane_cp_srt

0xeb91,	// (0x000102fa) tabs_3_long_passive_pane_srt_ParamLimits

0xeb91,	// (0x000102fa) tabs_3_long_passive_pane_srt

0x1493,	// (0x00002bfc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x1493,	// (0x00002bfc) bg_passive_tab_pane_cp5_srt

0x0bed,	// (0x00002356) bg_passive_tab_pane_g1_cp5_srt

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp5_srt

0x0bf6,	// (0x0000235f) bg_passive_tab_pane_g3_cp5_srt

0xeba9,	// (0x00010312) bg_active_tab_pane_cp5_srt_ParamLimits

0xeba9,	// (0x00010312) bg_active_tab_pane_cp5_srt

0xc4d7,	// (0x0000dc40) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc4d7,	// (0x0000dc40) tabs_3_long_active_pane_srt_t1

0x0bed,	// (0x00002356) bg_active_tab_pane_g1_cp5_srt

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp5_srt

0x0bf6,	// (0x0000235f) bg_active_tab_pane_g3_cp5_srt

0x37dc,	// (0x00004f45) navi_text_pane_srt_t1

0x37d4,	// (0x00004f3d) navi_icon_pane_srt_g1

0x11a3,	// (0x0000290c) midp_editing_number_pane_srt

0x0f31,	// (0x0000269a) midp_ticker_pane_srt

0x11ab,	// (0x00002914) midp_ticker_pane_srt_g1

0x11b3,	// (0x0000291c) midp_ticker_pane_srt_g2

0x0001,

0xf748,	// (0x00010eb1) midp_ticker_pane_srt_g

0x11bb,	// (0x00002924) midp_ticker_pane_srt_t1

0x37c5,	// (0x00004f2e) midp_editing_number_pane_t1_copy1

0xb227,	// (0x0000c990) listscroll_midp_pane

0xb227,	// (0x0000c990) midp_form_pane

0x0fa8,	// (0x00002711) midp_info_popup_window_ParamLimits

0x0fa8,	// (0x00002711) midp_info_popup_window

0xf49a,	// (0x00010c03) bg_popup_sub_pane_cp50_ParamLimits

0xf49a,	// (0x00010c03) bg_popup_sub_pane_cp50

0x26c4,	// (0x00003e2d) listscroll_midp_info_pane_ParamLimits

0x26c4,	// (0x00003e2d) listscroll_midp_info_pane

0x26a4,	// (0x00003e0d) listscroll_form_midp_pane_ParamLimits

0x26a4,	// (0x00003e0d) listscroll_form_midp_pane

0x26b0,	// (0x00003e19) scroll_bar_cp050

0x26a4,	// (0x00003e0d) list_midp_pane

0x4ae4,	// (0x0000624d) signal_pane_g2_cp

0x25be,	// (0x00003d27) listscroll_midp_info_pane_t1_ParamLimits

0x25be,	// (0x00003d27) listscroll_midp_info_pane_t1

0x25d6,	// (0x00003d3f) listscroll_midp_info_pane_t2_ParamLimits

0x25d6,	// (0x00003d3f) listscroll_midp_info_pane_t2

0x2614,	// (0x00003d7d) listscroll_midp_info_pane_t3_ParamLimits

0x2614,	// (0x00003d7d) listscroll_midp_info_pane_t3

0x264e,	// (0x00003db7) listscroll_midp_info_pane_t4_ParamLimits

0x264e,	// (0x00003db7) listscroll_midp_info_pane_t4

0x0003,

0xf7f4,	// (0x00010f5d) listscroll_midp_info_pane_t_ParamLimits

0xf7f4,	// (0x00010f5d) listscroll_midp_info_pane_t

0xf4ef,	// (0x00010c58) scroll_pane_cp21

0x2558,	// (0x00003cc1) form_midp_field_choice_group_pane

0x2561,	// (0x00003cca) form_midp_field_text_pane

0x25a4,	// (0x00003d0d) form_midp_field_time_pane

0x25ac,	// (0x00003d15) form_midp_gauge_slider_pane

0x25b5,	// (0x00003d1e) form_midp_gauge_wait_pane

0xeaef,	// (0x00010258) form_midp_image_pane

0xc189,	// (0x0000d8f2) list_single_midp_pane_ParamLimits

0xc189,	// (0x0000d8f2) list_single_midp_pane

0xc161,	// (0x0000d8ca) form_midp_field_text_pane_t1

0x2251,	// (0x000039ba) input_focus_pane_cp050

0x2527,	// (0x00003c90) list_midp_form_text_pane

0x24cb,	// (0x00003c34) form_midp_field_choice_group_pane_t1

0x24d9,	// (0x00003c42) input_focus_pane_cp051

0x24ed,	// (0x00003c56) list_midp_choice_pane

0xeaef,	// (0x00010258) status_idle_pane

0x24af,	// (0x00003c18) form_midp_field_time_pane_t1

0xe976,	// (0x000100df) wait_anim_pane_g2_copy1

0x24bd,	// (0x00003c26) form_midp_field_time_pane_t2

0x0001,

0x1058,	// (0x000027c1) aid_navinavi_width_2_pane

0xf7ef,	// (0x00010f58) form_midp_field_time_pane_t

0xeaef,	// (0x00010258) input_focus_pane_cp052

0xeaef,	// (0x00010258) bg_input_focus_pane_cp040

0x246f,	// (0x00003bd8) form_midp_gauge_slider_pane_t1

0x247d,	// (0x00003be6) form_midp_gauge_slider_pane_t2

0xc145,	// (0x0000d8ae) form_midp_gauge_slider_pane_t3

0xc153,	// (0x0000d8bc) form_midp_gauge_slider_pane_t4

0x0003,

0xf7e6,	// (0x00010f4f) form_midp_gauge_slider_pane_t

0x24a7,	// (0x00003c10) form_midp_slider_pane

0xeba9,	// (0x00010312) bg_input_focus_pane_cp041_ParamLimits

0xeba9,	// (0x00010312) bg_input_focus_pane_cp041

0x243c,	// (0x00003ba5) form_midp_gauge_wait_pane_t1_ParamLimits

0x243c,	// (0x00003ba5) form_midp_gauge_wait_pane_t1

0x244e,	// (0x00003bb7) form_midp_gauge_wait_pane_t2_ParamLimits

0x244e,	// (0x00003bb7) form_midp_gauge_wait_pane_t2

0x0001,

0xf7e1,	// (0x00010f4a) form_midp_gauge_wait_pane_t_ParamLimits

0xf7e1,	// (0x00010f4a) form_midp_gauge_wait_pane_t

0x2460,	// (0x00003bc9) form_midp_wait_pane_ParamLimits

0x2460,	// (0x00003bc9) form_midp_wait_pane

0x2404,	// (0x00003b6d) form_midp_image_pane_g1

0x240d,	// (0x00003b76) form_midp_image_pane_t1

0x241c,	// (0x00003b85) form_midp_image_pane_t2

0x242b,	// (0x00003b94) form_midp_image_pane_t3

0x0002,

0xf7da,	// (0x00010f43) form_midp_image_pane_t

0x23ec,	// (0x00003b55) list_single_midp_pane_g1

0x23f5,	// (0x00003b5e) list_single_midp_pane_t1

0xc12e,	// (0x0000d897) list_midp_form_item_pane_ParamLimits

0xc12e,	// (0x0000d897) list_midp_form_item_pane

0x1000,	// (0x00002769) list_midp_form_item_pane_t1

0x100f,	// (0x00002778) midp_ticker_pane_g1

0x101b,	// (0x00002784) midp_ticker_pane_g2

0x0001,

0xf72e,	// (0x00010e97) midp_ticker_pane_g

0xb2cb,	// (0x0000ca34) midp_ticker_pane_t1

0xc692,	// (0x0000ddfb) midp_editing_number_pane_t1

0x3abd,	// (0x00005226) midp_editing_number_pane

0x3acc,	// (0x00005235) midp_ticker_pane

0x378d,	// (0x00004ef6) ai_message_heading_pane

0xeaef,	// (0x00010258) bg_popup_window_pane_cp14

0x3795,	// (0x00004efe) listscroll_ai_message_pane

0x3713,	// (0x00004e7c) ai_message_heading_pane_g1_ParamLimits

0x3713,	// (0x00004e7c) ai_message_heading_pane_g1

0x371f,	// (0x00004e88) ai_message_heading_pane_g2_ParamLimits

0x371f,	// (0x00004e88) ai_message_heading_pane_g2

0x372d,	// (0x00004e96) ai_message_heading_pane_g3_ParamLimits

0x372d,	// (0x00004e96) ai_message_heading_pane_g3

0x3739,	// (0x00004ea2) ai_message_heading_pane_g4_ParamLimits

0x3739,	// (0x00004ea2) ai_message_heading_pane_g4

0x0003,

0xf91b,	// (0x00011084) ai_message_heading_pane_g_ParamLimits

0xf91b,	// (0x00011084) ai_message_heading_pane_g

0x3745,	// (0x00004eae) ai_message_heading_pane_t1_ParamLimits

0x3745,	// (0x00004eae) ai_message_heading_pane_t1

0x375f,	// (0x00004ec8) ai_message_heading_pane_t2_ParamLimits

0x375f,	// (0x00004ec8) ai_message_heading_pane_t2

0x0001,

0xf924,	// (0x0001108d) ai_message_heading_pane_t_ParamLimits

0xf924,	// (0x0001108d) ai_message_heading_pane_t

0x3773,	// (0x00004edc) bg_popup_heading_pane_cp1_ParamLimits

0x3773,	// (0x00004edc) bg_popup_heading_pane_cp1

0x3701,	// (0x00004e6a) list_ai_message_pane_ParamLimits

0x3701,	// (0x00004e6a) list_ai_message_pane

0xf4ef,	// (0x00010c58) scroll_pane_cp10

0x3639,	// (0x00004da2) list_ai_message_pane_g1

0x3641,	// (0x00004daa) list_ai_message_pane_g2

0x0001,

0xf8f8,	// (0x00011061) list_ai_message_pane_g

0x3649,	// (0x00004db2) list_ai_message_pane_t1_ParamLimits

0x3649,	// (0x00004db2) list_ai_message_pane_t1

0x365e,	// (0x00004dc7) list_ai_message_pane_t2_ParamLimits

0x365e,	// (0x00004dc7) list_ai_message_pane_t2

0x3673,	// (0x00004ddc) list_ai_message_pane_t3_ParamLimits

0x3673,	// (0x00004ddc) list_ai_message_pane_t3

0x3688,	// (0x00004df1) list_ai_message_pane_t4_ParamLimits

0x3688,	// (0x00004df1) list_ai_message_pane_t4

0x0003,

0xf8fd,	// (0x00011066) list_ai_message_pane_t_ParamLimits

0xf8fd,	// (0x00011066) list_ai_message_pane_t

0xc4bd,	// (0x0000dc26) cell_ai_soft_ind_pane_ParamLimits

0xc4bd,	// (0x0000dc26) cell_ai_soft_ind_pane

0x1039,	// (0x000027a2) cell_ai_soft_ind_pane_g1_ParamLimits

0x1039,	// (0x000027a2) cell_ai_soft_ind_pane_g1

0xeaef,	// (0x00010258) grid_highlight_cp1

0x1046,	// (0x000027af) text_secondary_cp56_ParamLimits

0x1046,	// (0x000027af) text_secondary_cp56

0x35f7,	// (0x00004d60) example_general_pane_ParamLimits

0x35f7,	// (0x00004d60) example_general_pane

0x3603,	// (0x00004d6c) example_parent_pane_g1_ParamLimits

0x3603,	// (0x00004d6c) example_parent_pane_g1

0x360f,	// (0x00004d78) example_parent_pane_t1_ParamLimits

0x360f,	// (0x00004d78) example_parent_pane_t1

0xb955,	// (0x0000d0be) popup_preview_text_window_ParamLimits

0xb955,	// (0x0000d0be) popup_preview_text_window

0x0e60,	// (0x000025c9) list_single_pane_cp2_g4

0xee4d,	// (0x000105b6) bg_popup_preview_window_pane_ParamLimits

0xee4d,	// (0x000105b6) bg_popup_preview_window_pane

0x3340,	// (0x00004aa9) popup_preview_text_window_t1_ParamLimits

0x3340,	// (0x00004aa9) popup_preview_text_window_t1

0x335e,	// (0x00004ac7) popup_preview_text_window_t2_ParamLimits

0x335e,	// (0x00004ac7) popup_preview_text_window_t2

0x33a7,	// (0x00004b10) popup_preview_text_window_t3_ParamLimits

0x33a7,	// (0x00004b10) popup_preview_text_window_t3

0x33ec,	// (0x00004b55) popup_preview_text_window_t4_ParamLimits

0x33ec,	// (0x00004b55) popup_preview_text_window_t4

0x0004,

0xf8cc,	// (0x00011035) popup_preview_text_window_t_ParamLimits

0xf8cc,	// (0x00011035) popup_preview_text_window_t

0x346a,	// (0x00004bd3) scroll_pane_cp11

0x20b6,	// (0x0000381f) bg_popup_preview_window_pane_g1

0x32f4,	// (0x00004a5d) bg_popup_preview_window_pane_g2

0x32fe,	// (0x00004a67) bg_popup_preview_window_pane_g3

0x3308,	// (0x00004a71) bg_popup_preview_window_pane_g4

0x3312,	// (0x00004a7b) bg_popup_preview_window_pane_g5

0x331c,	// (0x00004a85) bg_popup_preview_window_pane_g6

0x3324,	// (0x00004a8d) bg_popup_preview_window_pane_g7

0x332c,	// (0x00004a95) bg_popup_preview_window_pane_g8

0xe98c,	// (0x000100f5) aid_popup_width_pane

0xb8c5,	// (0x0000d02e) popup_midp_note_alarm_window_ParamLimits

0xb8c5,	// (0x0000d02e) popup_midp_note_alarm_window

0xf315,	// (0x00010a7e) data_form_pane_ParamLimits

0xadb7,	// (0x0000c520) form_field_data_pane_g1

0xadc1,	// (0x0000c52a) form_field_data_pane_t1_ParamLimits

0xf321,	// (0x00010a8a) input_focus_pane_ParamLimits

0xf32f,	// (0x00010a98) data_form_wide_pane_ParamLimits

0xf33b,	// (0x00010aa4) form_field_data_wide_pane_g1

0xf367,	// (0x00010ad0) form_field_data_wide_pane_t1_ParamLimits

0xf009,	// (0x00010772) input_focus_pane_cp6_ParamLimits

0xaef1,	// (0x0000c65a) input_popup_find_pane_g1_ParamLimits

0xaef1,	// (0x0000c65a) input_popup_find_pane_g1

0x02be,	// (0x00001a27) aid_navi_side_left_pane

0x02d3,	// (0x00001a3c) aid_navi_side_right_pane

0x2b9d,	// (0x00004306) bg_popup_window_pane_cp30_ParamLimits

0x2b9d,	// (0x00004306) bg_popup_window_pane_cp30

0x2c17,	// (0x00004380) popup_midp_note_alarm_window_g1_ParamLimits

0x2c17,	// (0x00004380) popup_midp_note_alarm_window_g1

0x2c47,	// (0x000043b0) popup_midp_note_alarm_window_t1_ParamLimits

0x2c47,	// (0x000043b0) popup_midp_note_alarm_window_t1

0x2ce8,	// (0x00004451) popup_midp_note_alarm_window_t2_ParamLimits

0x2ce8,	// (0x00004451) popup_midp_note_alarm_window_t2

0x2d96,	// (0x000044ff) popup_midp_note_alarm_window_t3_ParamLimits

0x2d96,	// (0x000044ff) popup_midp_note_alarm_window_t3

0x2dc8,	// (0x00004531) popup_midp_note_alarm_window_t4_ParamLimits

0x2dc8,	// (0x00004531) popup_midp_note_alarm_window_t4

0x2dee,	// (0x00004557) popup_midp_note_alarm_window_t5_ParamLimits

0x2dee,	// (0x00004557) popup_midp_note_alarm_window_t5

0x000a,

0xf869,	// (0x00010fd2) popup_midp_note_alarm_window_t_ParamLimits

0xf869,	// (0x00010fd2) popup_midp_note_alarm_window_t

0x2e9a,	// (0x00004603) wait_bar_pane_cp1_ParamLimits

0x2e9a,	// (0x00004603) wait_bar_pane_cp1

0xeaef,	// (0x00010258) wait_anim_pane_copy1

0xeaef,	// (0x00010258) wait_border_pane_copy1

0x2882,	// (0x00003feb) wait_border_pane_g1_copy1

0xf37e,	// (0x00010ae7) form_field_popup_pane_g1

0xaddb,	// (0x0000c544) form_field_popup_pane_t1_ParamLimits

0xf321,	// (0x00010a8a) input_focus_pane_cp7_ParamLimits

0xf386,	// (0x00010aef) list_form_pane_ParamLimits

0xf392,	// (0x00010afb) form_field_popup_wide_pane_g1

0xf39a,	// (0x00010b03) form_field_popup_wide_pane_t1_ParamLimits

0xf321,	// (0x00010a8a) input_focus_pane_cp8_ParamLimits

0xf3ac,	// (0x00010b15) list_form_wide_pane_ParamLimits

0x3cdf,	// (0x00005448) aid_size_cell_graphic_pane

0xae5a,	// (0x0000c5c3) data_form_pane_t1_ParamLimits

0xc676,	// (0x0000dddf) data_form_wide_pane_t1_ParamLimits

0xbd57,	// (0x0000d4c0) bg_status_flat_pane

0xa5f8,	// (0x0000bd61) title_pane_t1_ParamLimits

0xeb59,	// (0x000102c2) title_pane_t2_ParamLimits

0xeb7f,	// (0x000102e8) title_pane_t3_ParamLimits

0xf532,	// (0x00010c9b) title_pane_t_ParamLimits

0xb01c,	// (0x0000c785) level_1_signal_ParamLimits

0xb02e,	// (0x0000c797) level_2_signal_ParamLimits

0xb041,	// (0x0000c7aa) level_3_signal_ParamLimits

0xb054,	// (0x0000c7bd) level_4_signal_ParamLimits

0xb067,	// (0x0000c7d0) level_5_signal_ParamLimits

0xb07a,	// (0x0000c7e3) level_6_signal_ParamLimits

0xb08d,	// (0x0000c7f6) level_7_signal_ParamLimits

0xb01c,	// (0x0000c785) level_1_battery_ParamLimits

0xb02e,	// (0x0000c797) level_2_battery_ParamLimits

0xb041,	// (0x0000c7aa) level_3_battery_ParamLimits

0xb054,	// (0x0000c7bd) level_4_battery_ParamLimits

0xb067,	// (0x0000c7d0) level_5_battery_ParamLimits

0xb07a,	// (0x0000c7e3) level_6_battery_ParamLimits

0xb08d,	// (0x0000c7f6) level_7_battery_ParamLimits

0x2aa2,	// (0x0000420b) bg_status_flat_pane_g1

0x2aaa,	// (0x00004213) bg_status_flat_pane_g2

0x2ab2,	// (0x0000421b) bg_status_flat_pane_g3

0x2aba,	// (0x00004223) bg_status_flat_pane_g4

0x2ac2,	// (0x0000422b) bg_status_flat_pane_g5

0x2aca,	// (0x00004233) bg_status_flat_pane_g6

0x2ad2,	// (0x0000423b) bg_status_flat_pane_g7

0xa68c,	// (0x0000bdf5) tabs_3_active_pane_t1_ParamLimits

0xa68c,	// (0x0000bdf5) tabs_3_passive_pane_t1_ParamLimits

0xa6a6,	// (0x0000be0f) tabs_4_active_pane_t1_ParamLimits

0xa6a6,	// (0x0000be0f) tabs_4_1_passive_pane_t1_ParamLimits

0xaf07,	// (0x0000c670) tabs_2_active_pane_t1_ParamLimits

0xaf07,	// (0x0000c670) tabs_2_passive_pane_t1_ParamLimits

0xeba9,	// (0x00010312) bg_active_tab_pane_cp4_ParamLimits

0xaf19,	// (0x0000c682) tabs_2_long_active_pane_t1_ParamLimits

0x1493,	// (0x00002bfc) bg_passive_tab_pane_cp4_ParamLimits

0x2172,	// (0x000038db) list_single_midp_graphic_pane_t1_ParamLimits

0xeba9,	// (0x00010312) bg_active_tab_pane_cp5_ParamLimits

0xaf2c,	// (0x0000c695) tabs_3_long_active_pane_t1_ParamLimits

0x1493,	// (0x00002bfc) bg_passive_tab_pane_cp5_ParamLimits

0x2172,	// (0x000038db) list_single_midp_graphic_pane_t1

0xbd57,	// (0x0000d4c0) bg_status_flat_pane_ParamLimits

0x1c88,	// (0x000033f1) indicator_pane_cp2_ParamLimits

0x1c88,	// (0x000033f1) indicator_pane_cp2

0xbeed,	// (0x0000d656) navi_pane_srt_ParamLimits

0xbeed,	// (0x0000d656) navi_pane_srt

0x1def,	// (0x00003558) popup_clock_digital_analogue_window_cp1

0xec90,	// (0x000103f9) indicator_pane_t1

0x0f31,	// (0x0000269a) copy_highlight_pane

0x0f31,	// (0x0000269a) cursor_graphics_pane

0x0f31,	// (0x0000269a) graphic_within_text_pane

0x0f31,	// (0x0000269a) link_highlight_pane

0x342d,	// (0x00004b96) popup_preview_text_window_t5_ParamLimits

0x342d,	// (0x00004b96) popup_preview_text_window_t5

0x1062,	// (0x000027cb) cursor_digital_pane

0x1062,	// (0x000027cb) cursor_primary_pane

0x1073,	// (0x000027dc) cursor_primary_small_pane

0x107b,	// (0x000027e4) cursor_secondary_pane

0x1083,	// (0x000027ec) cursor_title_pane

0x1062,	// (0x000027cb) link_highlight_digital_pane

0x106a,	// (0x000027d3) link_highlight_primary_pane

0x1073,	// (0x000027dc) link_highlight_primary_small_pane

0x107b,	// (0x000027e4) link_highlight_secondary_pane

0x1083,	// (0x000027ec) link_highlight_title_pane

0x1062,	// (0x000027cb) copy_highlight_digital_pane

0x1062,	// (0x000027cb) copy_highlight_primary_pane

0x1073,	// (0x000027dc) copy_highlight_primary_small_pane

0x107b,	// (0x000027e4) copy_highlight_secondary_pane

0x1083,	// (0x000027ec) copy_highlight_title_pane

0x107b,	// (0x000027e4) graphic_text_digital_pane

0x2b40,	// (0x000042a9) graphic_text_primary_pane

0x2b49,	// (0x000042b2) graphic_text_primary_small_pane

0x1073,	// (0x000027dc) graphic_text_secondary_pane

0x1062,	// (0x000027cb) graphic_text_title_pane

0xb2dd,	// (0x0000ca46) cursor_primary_pane_g1

0x2b32,	// (0x0000429b) cursor_text_primary_t1

0xc1d6,	// (0x0000d93f) cursor_primary_small_pane_g1

0x2b24,	// (0x0000428d) cursor_text_primary_small_t1

0xc1cc,	// (0x0000d935) cursor_primary_small_pane_g1_copy1

0x2b0c,	// (0x00004275) cursor_text_primary_small_t1_copy1

0x2aea,	// (0x00004253) cursor_text_title_t1

0xc1c2,	// (0x0000d92b) cursor_title_pane_g1

0xb2dd,	// (0x0000ca46) cursor_digital_pane_g1

0x1095,	// (0x000027fe) cursor_text_digital_t1

0x10a3,	// (0x0000280c) link_highlight_primary_pane_g1

0x2a93,	// (0x000041fc) link_highlight_primary_pane_t1

0x10a3,	// (0x0000280c) link_highlight_primary_small_pane_g1

0x10ab,	// (0x00002814) link_highlight_primary_small_pane_t1

0x10ba,	// (0x00002823) link_highlight_secondary_pane_g1

0x10c2,	// (0x0000282b) link_highlight_secondary_pane_t1

0x2a07,	// (0x00004170) link_highlight_title_pane_g1

0x2a0f,	// (0x00004178) link_highlight_title_pane_t1

0x29f0,	// (0x00004159) link_highlight_digital_pane_g1

0x29f8,	// (0x00004161) link_highlight_digital_pane_t1

0x28b8,	// (0x00004021) copy_highlight_primary_pane_g1

0x28cf,	// (0x00004038) copy_highlight_primary_pane_t1

0x28b8,	// (0x00004021) copy_highlight_primary_small_pane_g1

0x28c0,	// (0x00004029) copy_highlight_primary_small_pane_t1

0x10d1,	// (0x0000283a) copy_highlight_secondary_pane_g1

0x10d9,	// (0x00002842) copy_highlight_secondary_pane_t1

0x28a1,	// (0x0000400a) copy_highlight_title_pane_g1

0x28a9,	// (0x00004012) copy_highlight_title_pane_t1

0x28b8,	// (0x00004021) copy_highlight_digital_pane_g1

0x3f69,	// (0x000056d2) copy_highlight_digital_pane_t1

0x3ebd,	// (0x00005626) graphic_text_primary_pane_g1

0x3f4d,	// (0x000056b6) graphic_text_primary_pane_t1

0x3f5b,	// (0x000056c4) graphic_text_primary_pane_t2

0x0001,

0xf998,	// (0x00011101) graphic_text_primary_pane_t

0x3f29,	// (0x00005692) graphic_text_primary_small_pane_g1

0x3f31,	// (0x0000569a) graphic_text_primary_small_pane_t1

0x3f3f,	// (0x000056a8) graphic_text_primary_small_pane_t2

0x0001,

0xf993,	// (0x000110fc) graphic_text_primary_small_pane_t

0x3f05,	// (0x0000566e) graphic_text_secondary_pane_g1

0x3f0d,	// (0x00005676) graphic_text_secondary_pane_t1

0x3f1b,	// (0x00005684) graphic_text_secondary_pane_t2

0x0001,

0xf98e,	// (0x000110f7) graphic_text_secondary_pane_t

0x3ee1,	// (0x0000564a) graphic_text_title_pane_g1

0x3ee9,	// (0x00005652) graphic_text_title_pane_t1

0x3ef7,	// (0x00005660) graphic_text_title_pane_t2

0x0001,

0xf989,	// (0x000110f2) graphic_text_title_pane_t

0x3ebd,	// (0x00005626) graphic_text_digital_pane_g1

0x3ec5,	// (0x0000562e) graphic_text_digital_pane_t1

0x3ed3,	// (0x0000563c) graphic_text_digital_pane_t2

0x0001,

0xf984,	// (0x000110ed) graphic_text_digital_pane_t

0xeba9,	// (0x00010312) navi_icon_pane_srt_ParamLimits

0xeba9,	// (0x00010312) navi_icon_pane_srt

0xeaef,	// (0x00010258) navi_midp_pane_srt

0xeaef,	// (0x00010258) navi_navi_pane_srt

0xeba9,	// (0x00010312) navi_text_pane_srt_ParamLimits

0xeba9,	// (0x00010312) navi_text_pane_srt

0x3e88,	// (0x000055f1) navi_navi_icon_text_pane_srt

0x3e90,	// (0x000055f9) navi_navi_pane_srt_g1_ParamLimits

0x3e90,	// (0x000055f9) navi_navi_pane_srt_g1

0x3ea2,	// (0x0000560b) navi_navi_pane_srt_g2_ParamLimits

0x3ea2,	// (0x0000560b) navi_navi_pane_srt_g2

0x0001,

0xf97f,	// (0x000110e8) navi_navi_pane_srt_g_ParamLimits

0xf97f,	// (0x000110e8) navi_navi_pane_srt_g

0x3eb4,	// (0x0000561d) navi_navi_tabs_pane_srt

0x3e88,	// (0x000055f1) navi_navi_text_pane_srt

0x3e88,	// (0x000055f1) navi_navi_volume_pane_srt

0x3e79,	// (0x000055e2) navi_navi_text_pane_srt_t1

0x3e54,	// (0x000055bd) navi_navi_volume_pane_srt_g1

0x3e5c,	// (0x000055c5) volume_small_pane_srt_ParamLimits

0x3e5c,	// (0x000055c5) volume_small_pane_srt

0x10e8,	// (0x00002851) volume_small_pane_srt_g1_ParamLimits

0x10e8,	// (0x00002851) volume_small_pane_srt_g1

0x10f8,	// (0x00002861) volume_small_pane_srt_g2_ParamLimits

0x10f8,	// (0x00002861) volume_small_pane_srt_g2

0x1109,	// (0x00002872) volume_small_pane_srt_g3_ParamLimits

0x1109,	// (0x00002872) volume_small_pane_srt_g3

0x111a,	// (0x00002883) volume_small_pane_srt_g4_ParamLimits

0x111a,	// (0x00002883) volume_small_pane_srt_g4

0x112b,	// (0x00002894) volume_small_pane_srt_g5_ParamLimits

0x112b,	// (0x00002894) volume_small_pane_srt_g5

0x113c,	// (0x000028a5) volume_small_pane_srt_g6_ParamLimits

0x113c,	// (0x000028a5) volume_small_pane_srt_g6

0x114d,	// (0x000028b6) volume_small_pane_srt_g7_ParamLimits

0x114d,	// (0x000028b6) volume_small_pane_srt_g7

0x115e,	// (0x000028c7) volume_small_pane_srt_g8_ParamLimits

0x115e,	// (0x000028c7) volume_small_pane_srt_g8

0x116f,	// (0x000028d8) volume_small_pane_srt_g9_ParamLimits

0x116f,	// (0x000028d8) volume_small_pane_srt_g9

0x1180,	// (0x000028e9) volume_small_pane_srt_g10_ParamLimits

0x1180,	// (0x000028e9) volume_small_pane_srt_g10

0x0009,

0xf733,	// (0x00010e9c) volume_small_pane_srt_g_ParamLimits

0xf733,	// (0x00010e9c) volume_small_pane_srt_g

0xef02,	// (0x0001066b) query_popup_data_pane_cp2

0x3e42,	// (0x000055ab) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3e42,	// (0x000055ab) navi_navi_icon_text_pane_srt_t1

0x2b40,	// (0x000042a9) navi_tabs_2_long_pane_srt

0x2b40,	// (0x000042a9) navi_tabs_2_pane_srt

0x2b40,	// (0x000042a9) navi_tabs_3_long_pane_srt

0x2b40,	// (0x000042a9) navi_tabs_3_pane_srt

0x2b40,	// (0x000042a9) navi_tabs_4_pane_srt

0x3e1a,	// (0x00005583) tabs_2_active_pane_srt_ParamLimits

0x3e1a,	// (0x00005583) tabs_2_active_pane_srt

0x3e2a,	// (0x00005593) tabs_2_passive_pane_srt_ParamLimits

0x3e2a,	// (0x00005593) tabs_2_passive_pane_srt

0x2251,	// (0x000039ba) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2251,	// (0x000039ba) bg_passive_tab_pane_cp1_srt

0x3dee,	// (0x00005557) bg_passive_tab_pane_g1_cp1_srt

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp1_srt

0x3df7,	// (0x00005560) bg_passive_tab_pane_g3_cp1_srt

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp1_srt_ParamLimits

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp1_srt

0x3e00,	// (0x00005569) tabs_2_active_pane_srt_g1

0xc7dd,	// (0x0000df46) tabs_2_active_pane_srt_t1_ParamLimits

0xc7dd,	// (0x0000df46) tabs_2_active_pane_srt_t1

0x3dee,	// (0x00005557) bg_active_tab_pane_g1_cp1_srt

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp1_srt

0x3df7,	// (0x00005560) bg_active_tab_pane_g3_cp1_srt

0x3dbb,	// (0x00005524) tabs_3_active_pane_srt_ParamLimits

0x3dbb,	// (0x00005524) tabs_3_active_pane_srt

0x3dcc,	// (0x00005535) tabs_3_passive_pane_cp_srt_ParamLimits

0x3dcc,	// (0x00005535) tabs_3_passive_pane_cp_srt

0x3ddd,	// (0x00005546) tabs_3_passive_pane_srt_ParamLimits

0x3ddd,	// (0x00005546) tabs_3_passive_pane_srt

0x2251,	// (0x000039ba) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2251,	// (0x000039ba) bg_passive_tab_pane_cp2_srt

0x1191,	// (0x000028fa) bg_passive_tab_pane_g1_cp2_srt

0x0a22,	// (0x0000218b) bg_passive_tab_pane_g2_cp2_srt

0x119a,	// (0x00002903) bg_passive_tab_pane_g3_cp2_srt

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp2_srt_ParamLimits

0xeb91,	// (0x000102fa) bg_active_tab_pane_cp2_srt

0x3da1,	// (0x0000550a) tabs_3_active_pane_srt_g1

0xc7c7,	// (0x0000df30) tabs_3_active_pane_srt_t1_ParamLimits

0xc7c7,	// (0x0000df30) tabs_3_active_pane_srt_t1

0x1191,	// (0x000028fa) bg_active_tab_pane_g1_cp2_srt

0x0a22,	// (0x0000218b) bg_active_tab_pane_g2_cp2_srt

0x119a,	// (0x00002903) bg_active_tab_pane_g3_cp2_srt

0x3d59,	// (0x000054c2) tabs_4_active_pane_srt_ParamLimits

0x3d59,	// (0x000054c2) tabs_4_active_pane_srt

0x3d6b,	// (0x000054d4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3d6b,	// (0x000054d4) tabs_4_passive_pane_cp2_srt

0x1453,	// (0x00002bbc) aid_size_cell_toolbar

0x38e7,	// (0x00005050) main_idle_act_pane_ParamLimits

0x169c,	// (0x00002e05) popup_large_graphic_colour_window_ParamLimits

0xbc19,	// (0x0000d382) popup_toolbar_window_ParamLimits

0xbc19,	// (0x0000d382) popup_toolbar_window

0x3b05,	// (0x0000526e) list_single_graphic_2heading_pane_ParamLimits

0x3b05,	// (0x0000526e) list_single_graphic_2heading_pane

0x034c,	// (0x00001ab5) aid_size_cell_apps_grid_lsc_pane

0x035e,	// (0x00001ac7) aid_size_cell_apps_grid_prt_pane

0x1493,	// (0x00002bfc) bg_wml_button_pane_cp1_ParamLimits

0x1493,	// (0x00002bfc) bg_wml_button_pane_cp1

0xc161,	// (0x0000d8ca) form_midp_field_text_pane_t1_ParamLimits

0x2251,	// (0x000039ba) input_focus_pane_cp050_ParamLimits

0x2527,	// (0x00003c90) list_midp_form_text_pane_ParamLimits

0x24d9,	// (0x00003c42) input_focus_pane_cp051_ParamLimits

0x24ed,	// (0x00003c56) list_midp_choice_pane_ParamLimits

0x2398,	// (0x00003b01) list_single_2graphic_pane_cp3_ParamLimits

0x2398,	// (0x00003b01) list_single_2graphic_pane_cp3

0x23ae,	// (0x00003b17) list_single_midp_graphic_pane_ParamLimits

0x23ae,	// (0x00003b17) list_single_midp_graphic_pane

0x1f42,	// (0x000036ab) list_single_graphic_2heading_pane_g1_ParamLimits

0x1f42,	// (0x000036ab) list_single_graphic_2heading_pane_g1

0x1f4e,	// (0x000036b7) list_single_graphic_2heading_pane_g4_ParamLimits

0x1f4e,	// (0x000036b7) list_single_graphic_2heading_pane_g4

0x1f5a,	// (0x000036c3) list_single_graphic_2heading_pane_g5_ParamLimits

0x1f5a,	// (0x000036c3) list_single_graphic_2heading_pane_g5

0x0002,

0xf786,	// (0x00010eef) list_single_graphic_2heading_pane_g_ParamLimits

0xf786,	// (0x00010eef) list_single_graphic_2heading_pane_g

0x1f66,	// (0x000036cf) list_single_graphic_2heading_pane_t1_ParamLimits

0x1f66,	// (0x000036cf) list_single_graphic_2heading_pane_t1

0x1f7a,	// (0x000036e3) list_single_graphic_2heading_pane_t2_ParamLimits

0x1f7a,	// (0x000036e3) list_single_graphic_2heading_pane_t2

0x1f96,	// (0x000036ff) list_single_graphic_2heading_pane_t3_ParamLimits

0x1f96,	// (0x000036ff) list_single_graphic_2heading_pane_t3

0x0002,

0xf78d,	// (0x00010ef6) list_single_graphic_2heading_pane_t_ParamLimits

0xf78d,	// (0x00010ef6) list_single_graphic_2heading_pane_t

0x1fae,	// (0x00003717) bg_popup_sub_pane_cp2

0x1fd8,	// (0x00003741) grid_toobar_pane

0x2014,	// (0x0000377d) cell_toolbar_pane_ParamLimits

0x2014,	// (0x0000377d) cell_toolbar_pane

0x205a,	// (0x000037c3) cell_toolbar_pane_g1_ParamLimits

0x205a,	// (0x000037c3) cell_toolbar_pane_g1

0x206e,	// (0x000037d7) cell_toolbar_pane_g2_ParamLimits

0x206e,	// (0x000037d7) cell_toolbar_pane_g2

0x0001,

0xf794,	// (0x00010efd) cell_toolbar_pane_g_ParamLimits

0xf794,	// (0x00010efd) cell_toolbar_pane_g

0x2090,	// (0x000037f9) grid_highlight_pane_cp2_ParamLimits

0x2090,	// (0x000037f9) grid_highlight_pane_cp2

0x20aa,	// (0x00003813) toolbar_button_pane

0x20b6,	// (0x0000381f) toolbar_button_pane_g1

0x20be,	// (0x00003827) toolbar_button_pane_g2

0x20c6,	// (0x0000382f) toolbar_button_pane_g3

0x20ce,	// (0x00003837) toolbar_button_pane_g4

0x20d6,	// (0x0000383f) toolbar_button_pane_g5

0x20de,	// (0x00003847) toolbar_button_pane_g6

0x20e6,	// (0x0000384f) toolbar_button_pane_g7

0x20ee,	// (0x00003857) toolbar_button_pane_g8

0x20f6,	// (0x0000385f) toolbar_button_pane_g9

0x0009,

0xf799,	// (0x00010f02) toolbar_button_pane_g

0x2106,	// (0x0000386f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x2106,	// (0x0000386f) list_single_2graphic_pane_g1_cp3

0xc090,	// (0x0000d7f9) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc090,	// (0x0000d7f9) list_single_2graphic_pane_g2_cp3

0x0d50,	// (0x000024b9) list_single_2graphic_pane_g3_cp3

0x2123,	// (0x0000388c) list_single_2graphic_pane_g4_cp3_ParamLimits

0x2123,	// (0x0000388c) list_single_2graphic_pane_g4_cp3

0x212f,	// (0x00003898) list_single_2graphic_pane_t1_cp3_ParamLimits

0x212f,	// (0x00003898) list_single_2graphic_pane_t1_cp3

0x0d44,	// (0x000024ad) list_single_midp_graphic_pane_g2_ParamLimits

0x0d44,	// (0x000024ad) list_single_midp_graphic_pane_g2

0x145b,	// (0x00002bc4) aid_zoom_text_primary

0x1463,	// (0x00002bcc) aid_zoom_text_secondary

0xb335,	// (0x0000ca9e) status_small_pane_g7_ParamLimits

0xb335,	// (0x0000ca9e) status_small_pane_g7

0xb358,	// (0x0000cac1) status_small_pane_t1_ParamLimits

0xa5c8,	// (0x0000bd31) title_pane_g2

0x0003,

0xf529,	// (0x00010c92) title_pane_g

0xa868,	// (0x0000bfd1) aid_size_cell_colour_1_pane_ParamLimits

0xa868,	// (0x0000bfd1) aid_size_cell_colour_1_pane

0xa87c,	// (0x0000bfe5) aid_size_cell_colour_2_pane_ParamLimits

0xa87c,	// (0x0000bfe5) aid_size_cell_colour_2_pane

0xa890,	// (0x0000bff9) aid_size_cell_colour_3_pane_ParamLimits

0xa890,	// (0x0000bff9) aid_size_cell_colour_3_pane

0xa8a4,	// (0x0000c00d) aid_size_cell_colour_4_pane_ParamLimits

0xa8a4,	// (0x0000c00d) aid_size_cell_colour_4_pane

0x01c5,	// (0x0000192e) title_pane_stacon_g1_ParamLimits

0x01c5,	// (0x0000192e) title_pane_stacon_g1

0x2926,	// (0x0000408f) popup_note_wait_window_g3_ParamLimits

0x2926,	// (0x0000408f) popup_note_wait_window_g3

0x299d,	// (0x00004106) popup_note_wait_window_t5_ParamLimits

0x299d,	// (0x00004106) popup_note_wait_window_t5

0xeaef,	// (0x00010258) main_feb_china_hwr_fs_writing_pane

0xb5ac,	// (0x0000cd15) popup_feb_china_hwr_fs_window_ParamLimits

0xb5ac,	// (0x0000cd15) popup_feb_china_hwr_fs_window

0xc0a1,	// (0x0000d80a) aid_size_cell_hwr_fs_ParamLimits

0xc0a1,	// (0x0000d80a) aid_size_cell_hwr_fs

0x2251,	// (0x000039ba) bg_popup_sub_pane_cp3_ParamLimits

0x2251,	// (0x000039ba) bg_popup_sub_pane_cp3

0xc0b6,	// (0x0000d81f) grid_hwr_fs_pane_ParamLimits

0xc0b6,	// (0x0000d81f) grid_hwr_fs_pane

0x2275,	// (0x000039de) linegrid_hwr_fs_pane_ParamLimits

0x2275,	// (0x000039de) linegrid_hwr_fs_pane

0xc0ce,	// (0x0000d837) cell_hwr_fs_pane_ParamLimits

0xc0ce,	// (0x0000d837) cell_hwr_fs_pane

0x22a9,	// (0x00003a12) linegrid_hwr_fs_pane_g1_ParamLimits

0x22a9,	// (0x00003a12) linegrid_hwr_fs_pane_g1

0xc0f4,	// (0x0000d85d) linegrid_hwr_fs_pane_g2_ParamLimits

0xc0f4,	// (0x0000d85d) linegrid_hwr_fs_pane_g2

0x22c7,	// (0x00003a30) linegrid_hwr_fs_pane_g3_ParamLimits

0x22c7,	// (0x00003a30) linegrid_hwr_fs_pane_g3

0x22d3,	// (0x00003a3c) linegrid_hwr_fs_pane_g4_ParamLimits

0x22d3,	// (0x00003a3c) linegrid_hwr_fs_pane_g4

0x22f1,	// (0x00003a5a) linegrid_hwr_fs_pane_g5_ParamLimits

0x22f1,	// (0x00003a5a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7bf,	// (0x00010f28) linegrid_hwr_fs_pane_g_ParamLimits

0xf7bf,	// (0x00010f28) linegrid_hwr_fs_pane_g

0x2307,	// (0x00003a70) cell_hwr_fs_pane_g1_ParamLimits

0x2307,	// (0x00003a70) cell_hwr_fs_pane_g1

0x1e7d,	// (0x000035e6) cell_hwr_fs_pane_g2_ParamLimits

0x1e7d,	// (0x000035e6) cell_hwr_fs_pane_g2

0xc106,	// (0x0000d86f) cell_hwr_fs_pane_g3_ParamLimits

0xc106,	// (0x0000d86f) cell_hwr_fs_pane_g3

0xc113,	// (0x0000d87c) cell_hwr_fs_pane_g4_ParamLimits

0xc113,	// (0x0000d87c) cell_hwr_fs_pane_g4

0x0003,

0xf7ca,	// (0x00010f33) cell_hwr_fs_pane_g_ParamLimits

0xf7ca,	// (0x00010f33) cell_hwr_fs_pane_g

0xc120,	// (0x0000d889) cell_hwr_fs_pane_t1

0xeaef,	// (0x00010258) grid_highlight_pane_cp6

0xeaef,	// (0x00010258) main_idle_act2_pane

0xf4d6,	// (0x00010c3f) aid_inside_area_popup_secondary

0xc34c,	// (0x0000dab5) aid_inside_area_window_primary_ParamLimits

0xc34c,	// (0x0000dab5) aid_inside_area_window_primary

0x3f78,	// (0x000056e1) ai2_news_ticker_pane

0x3f80,	// (0x000056e9) aid_size_cell_ai1_link_ParamLimits

0x3f80,	// (0x000056e9) aid_size_cell_ai1_link

0x3f9a,	// (0x00005703) popup_ai2_data_window_ParamLimits

0x3f9a,	// (0x00005703) popup_ai2_data_window

0x3fb8,	// (0x00005721) popup_ai2_link_window_ParamLimits

0x3fb8,	// (0x00005721) popup_ai2_link_window

0x2251,	// (0x000039ba) bg_popup_sub_pane_cp4_ParamLimits

0x2251,	// (0x000039ba) bg_popup_sub_pane_cp4

0x3fce,	// (0x00005737) grid_ai2_link_pane_ParamLimits

0x3fce,	// (0x00005737) grid_ai2_link_pane

0x3fe5,	// (0x0000574e) popup_ai2_link_window_g1_ParamLimits

0x3fe5,	// (0x0000574e) popup_ai2_link_window_g1

0x3ff1,	// (0x0000575a) popup_ai2_link_window_g2_ParamLimits

0x3ff1,	// (0x0000575a) popup_ai2_link_window_g2

0x0001,

0xf99d,	// (0x00011106) popup_ai2_link_window_g_ParamLimits

0xf99d,	// (0x00011106) popup_ai2_link_window_g

0x4002,	// (0x0000576b) ai2_mp_button_pane

0x400a,	// (0x00005773) ai2_mp_volume_pane

0x24d9,	// (0x00003c42) bg_popup_sub_pane_cp5_ParamLimits

0x24d9,	// (0x00003c42) bg_popup_sub_pane_cp5

0x4012,	// (0x0000577b) heading_ai2_gene_pane_ParamLimits

0x4012,	// (0x0000577b) heading_ai2_gene_pane

0x401e,	// (0x00005787) list_ai2_gene_pane_ParamLimits

0x401e,	// (0x00005787) list_ai2_gene_pane

0x4066,	// (0x000057cf) cell_ai2_link_pane_ParamLimits

0x4066,	// (0x000057cf) cell_ai2_link_pane

0x407c,	// (0x000057e5) cell_ai2_link_pane_g1

0xeaef,	// (0x00010258) grid_highlight_pane_cp7

0x414f,	// (0x000058b8) ai2_mp_volume_pane_g1

0x4157,	// (0x000058c0) ai2_mp_volume_pane_g2

0x40c4,	// (0x0000582d) list_ai2_gene_pane_t1

0x415f,	// (0x000058c8) ai2_mp_volume_pane_g3

0x0002,

0xf9b6,	// (0x0001111f) ai2_mp_volume_pane_g

0x4167,	// (0x000058d0) volume_small_pane_cp3

0x4170,	// (0x000058d9) aid_size_cell_ai2_button

0x4178,	// (0x000058e1) grid_ai2_button_pane

0x4181,	// (0x000058ea) cell_ai2_button_pane_ParamLimits

0x4181,	// (0x000058ea) cell_ai2_button_pane

0xe976,	// (0x000100df) cell_ai2_button_pane_g1

0xeaef,	// (0x00010258) grid_highlight_pane_cp8

0x410f,	// (0x00005878) ai2_gene_pane_t1_ParamLimits

0x410f,	// (0x00005878) ai2_gene_pane_t1

0xb528,	// (0x0000cc91) aid_height_parent_landscape

0xc504,	// (0x0000dc6d) aid_height_set_list

0x38e7,	// (0x00005050) aid_size_parent

0x3cdf,	// (0x00005448) aid_size_cell_graphic_pane_ParamLimits

0x402e,	// (0x00005797) popup_ai2_data_window_g1_ParamLimits

0x402e,	// (0x00005797) popup_ai2_data_window_g1

0x403a,	// (0x000057a3) ai2_news_ticker_pane_g1

0x4042,	// (0x000057ab) ai2_news_ticker_pane_g2

0x0001,

0xf9a2,	// (0x0001110b) ai2_news_ticker_pane_g

0x404a,	// (0x000057b3) ai2_news_ticker_pane_t1

0x4058,	// (0x000057c1) ai2_news_ticker_pane_t2

0x0001,

0xf9a7,	// (0x00011110) ai2_news_ticker_pane_t

0x4085,	// (0x000057ee) heading_ai2_gene_pane_g1

0x408d,	// (0x000057f6) heading_ai2_gene_pane_t1_ParamLimits

0x408d,	// (0x000057f6) heading_ai2_gene_pane_t1

0x40a2,	// (0x0000580b) list_highlight_pane_cp6

0x40aa,	// (0x00005813) ai2_gene_pane_ParamLimits

0x40aa,	// (0x00005813) ai2_gene_pane

0x40d2,	// (0x0000583b) list_ai2_gene_pane_t2

0x0001,

0xf9ac,	// (0x00011115) list_ai2_gene_pane_t

0x40e0,	// (0x00005849) list_highlight_pane_cp8_ParamLimits

0x40e0,	// (0x00005849) list_highlight_pane_cp8

0x40f1,	// (0x0000585a) ai2_gene_pane_g1_ParamLimits

0x40f1,	// (0x0000585a) ai2_gene_pane_g1

0x4103,	// (0x0000586c) ai2_gene_pane_g2_ParamLimits

0x4103,	// (0x0000586c) ai2_gene_pane_g2

0x0001,

0xf9b1,	// (0x0001111a) ai2_gene_pane_g_ParamLimits

0xf9b1,	// (0x0001111a) ai2_gene_pane_g

0xf224,	// (0x0001098d) scroll_pane_cp12

0xb4e5,	// (0x0000cc4e) control_pane_t3_ParamLimits

0xb4e5,	// (0x0000cc4e) control_pane_t3

0xb349,	// (0x0000cab2) status_small_pane_g8_ParamLimits

0xb349,	// (0x0000cab2) status_small_pane_g8

0xb64e,	// (0x0000cdb7) popup_find_window_ParamLimits

0xb905,	// (0x0000d06e) popup_note_image_window_ParamLimits

0x1f42,	// (0x000036ab) list_double2_graphic_pane_vc_g1_ParamLimits

0x1f42,	// (0x000036ab) list_double2_graphic_pane_vc_g1

0x1f4e,	// (0x000036b7) list_double2_graphic_pane_vc_g2_ParamLimits

0x1f4e,	// (0x000036b7) list_double2_graphic_pane_vc_g2

0x1f5a,	// (0x000036c3) list_double2_graphic_pane_vc_g3_ParamLimits

0x1f5a,	// (0x000036c3) list_double2_graphic_pane_vc_g3

0x0002,

0xf786,	// (0x00010eef) list_double2_graphic_pane_vc_g_ParamLimits

0xf786,	// (0x00010eef) list_double2_graphic_pane_vc_g

0x2044,	// (0x000037ad) list_double2_graphic_pane_vc_t1_ParamLimits

0x2044,	// (0x000037ad) list_double2_graphic_pane_vc_t1

0x1f4e,	// (0x000036b7) list_single_heading_pane_vc_g1_ParamLimits

0x1f4e,	// (0x000036b7) list_single_heading_pane_vc_g1

0x1f5a,	// (0x000036c3) list_single_heading_pane_vc_g2_ParamLimits

0x1f5a,	// (0x000036c3) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010d0c) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010d0c) list_single_heading_pane_vc_g

0x214a,	// (0x000038b3) list_single_heading_pane_vc_t1_ParamLimits

0x214a,	// (0x000038b3) list_single_heading_pane_vc_t1

0x2160,	// (0x000038c9) list_single_heading_pane_vc_t2_ParamLimits

0x2160,	// (0x000038c9) list_single_heading_pane_vc_t2

0x0001,

0xf7ae,	// (0x00010f17) list_single_heading_pane_vc_t_ParamLimits

0xf7ae,	// (0x00010f17) list_single_heading_pane_vc_t

0x2188,	// (0x000038f1) list_setting_number_pane_vc_g1_ParamLimits

0x2188,	// (0x000038f1) list_setting_number_pane_vc_g1

0x2194,	// (0x000038fd) list_setting_number_pane_vc_g2_ParamLimits

0x2194,	// (0x000038fd) list_setting_number_pane_vc_g2

0x0001,

0xf7b3,	// (0x00010f1c) list_setting_number_pane_vc_g_ParamLimits

0xf7b3,	// (0x00010f1c) list_setting_number_pane_vc_g

0x21a0,	// (0x00003909) list_setting_number_pane_vc_t1_ParamLimits

0x21a0,	// (0x00003909) list_setting_number_pane_vc_t1

0x21b4,	// (0x0000391d) list_setting_number_pane_vc_t2_ParamLimits

0x21b4,	// (0x0000391d) list_setting_number_pane_vc_t2

0x21d0,	// (0x00003939) list_setting_number_pane_vc_t3_ParamLimits

0x21d0,	// (0x00003939) list_setting_number_pane_vc_t3

0x0002,

0xf7b8,	// (0x00010f21) list_setting_number_pane_vc_t_ParamLimits

0xf7b8,	// (0x00010f21) list_setting_number_pane_vc_t

0x21fe,	// (0x00003967) set_value_pane_vc_ParamLimits

0x21fe,	// (0x00003967) set_value_pane_vc

0x3b05,	// (0x0000526e) list_double2_graphic_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_double2_graphic_pane_vc

0x3b1c,	// (0x00005285) list_double2_large_graphic_pane_vc_ParamLimits

0x3b1c,	// (0x00005285) list_double2_large_graphic_pane_vc

0x3b05,	// (0x0000526e) list_double2_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_double2_pane_vc

0x3b05,	// (0x0000526e) list_double_graphic_heading_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_double_graphic_heading_pane_vc

0x3b05,	// (0x0000526e) list_double_graphic_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_double_graphic_pane_vc

0x3b05,	// (0x0000526e) list_double_heading_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_double_heading_pane_vc

0x3b30,	// (0x00005299) list_double_large_graphic_pane_vc_ParamLimits

0x3b30,	// (0x00005299) list_double_large_graphic_pane_vc

0x3b05,	// (0x0000526e) list_double_number_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_double_number_pane_vc

0x3b05,	// (0x0000526e) list_double_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_double_pane_vc

0x3b05,	// (0x0000526e) list_double_time_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_double_time_pane_vc

0x3b05,	// (0x0000526e) list_setting_number_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_setting_number_pane_vc

0x3b05,	// (0x0000526e) list_setting_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_setting_pane_vc

0x3b05,	// (0x0000526e) list_single_graphic_heading_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_single_graphic_heading_pane_vc

0x3b05,	// (0x0000526e) list_single_heading_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_single_heading_pane_vc

0x3b05,	// (0x0000526e) list_single_number_heading_pane_vc_ParamLimits

0x3b05,	// (0x0000526e) list_single_number_heading_pane_vc

0x1f42,	// (0x000036ab) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1f42,	// (0x000036ab) list_double_graphic_heading_pane_vc_g1

0x0df7,	// (0x00002560) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0df7,	// (0x00002560) list_double_graphic_heading_pane_vc_g2

0x41b4,	// (0x0000591d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x41b4,	// (0x0000591d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9bd,	// (0x00011126) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9bd,	// (0x00011126) list_double_graphic_heading_pane_vc_g

0x41c0,	// (0x00005929) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x41c0,	// (0x00005929) list_double_graphic_heading_pane_vc_t1

0x41d6,	// (0x0000593f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x41d6,	// (0x0000593f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x0001112d) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x0001112d) list_double_graphic_heading_pane_vc_t

0x2188,	// (0x000038f1) list_setting_pane_vc_g1_ParamLimits

0x2188,	// (0x000038f1) list_setting_pane_vc_g1

0x2194,	// (0x000038fd) list_setting_pane_vc_g2_ParamLimits

0x2194,	// (0x000038fd) list_setting_pane_vc_g2

0x0001,

0xf7b3,	// (0x00010f1c) list_setting_pane_vc_g_ParamLimits

0xf7b3,	// (0x00010f1c) list_setting_pane_vc_g

0x4427,	// (0x00005b90) list_setting_pane_vc_t1_ParamLimits

0x4427,	// (0x00005b90) list_setting_pane_vc_t1

0x4443,	// (0x00005bac) list_setting_pane_vc_t2_ParamLimits

0x4443,	// (0x00005bac) list_setting_pane_vc_t2

0x0001,

0xfa07,	// (0x00011170) list_setting_pane_vc_t_ParamLimits

0xfa07,	// (0x00011170) list_setting_pane_vc_t

0x21fe,	// (0x00003967) set_value_pane_cp_vc_ParamLimits

0x21fe,	// (0x00003967) set_value_pane_cp_vc

0x1f4e,	// (0x000036b7) list_single_number_heading_pane_vc_g1_ParamLimits

0x1f4e,	// (0x000036b7) list_single_number_heading_pane_vc_g1

0x1f5a,	// (0x000036c3) list_single_number_heading_pane_vc_g2_ParamLimits

0x1f5a,	// (0x000036c3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010d0c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010d0c) list_single_number_heading_pane_vc_g

0x445f,	// (0x00005bc8) list_single_number_heading_pane_vc_t1_ParamLimits

0x445f,	// (0x00005bc8) list_single_number_heading_pane_vc_t1

0x4475,	// (0x00005bde) list_single_number_heading_pane_vc_t2_ParamLimits

0x4475,	// (0x00005bde) list_single_number_heading_pane_vc_t2

0x4487,	// (0x00005bf0) list_single_number_heading_pane_vc_t3_ParamLimits

0x4487,	// (0x00005bf0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0c,	// (0x00011175) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0c,	// (0x00011175) list_single_number_heading_pane_vc_t

0x1f42,	// (0x000036ab) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1f42,	// (0x000036ab) list_single_graphic_heading_pane_vc_g1

0x1f4e,	// (0x000036b7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x1f4e,	// (0x000036b7) list_single_graphic_heading_pane_vc_g4

0x1f5a,	// (0x000036c3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1f5a,	// (0x000036c3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf786,	// (0x00010eef) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf786,	// (0x00010eef) list_single_graphic_heading_pane_vc_g

0x445f,	// (0x00005bc8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x445f,	// (0x00005bc8) list_single_graphic_heading_pane_vc_t1

0x4499,	// (0x00005c02) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4499,	// (0x00005c02) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa13,	// (0x0001117c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x0001117c) list_single_graphic_heading_pane_vc_t

0x1f4e,	// (0x000036b7) list_double2_pane_vc_g1_ParamLimits

0x1f4e,	// (0x000036b7) list_double2_pane_vc_g1

0x1f5a,	// (0x000036c3) list_double2_pane_vc_g2_ParamLimits

0x1f5a,	// (0x000036c3) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010d0c) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010d0c) list_double2_pane_vc_g

0x44ab,	// (0x00005c14) list_double2_pane_vc_t1_ParamLimits

0x44ab,	// (0x00005c14) list_double2_pane_vc_t1

0x44c1,	// (0x00005c2a) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x44c1,	// (0x00005c2a) list_double2_large_graphic_pane_vc_g1

0x44cd,	// (0x00005c36) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x44cd,	// (0x00005c36) list_double2_large_graphic_pane_vc_g2

0x44d9,	// (0x00005c42) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x44d9,	// (0x00005c42) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00010d29) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00010d29) list_double2_large_graphic_pane_vc_g

0x44e5,	// (0x00005c4e) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x44e5,	// (0x00005c4e) list_double2_large_graphic_pane_vc_t1

0x44fb,	// (0x00005c64) list_double_time_pane_vc_g1_ParamLimits

0x44fb,	// (0x00005c64) list_double_time_pane_vc_g1

0x4507,	// (0x00005c70) list_double_time_pane_vc_g2_ParamLimits

0x4507,	// (0x00005c70) list_double_time_pane_vc_g2

0x0001,

0xfa18,	// (0x00011181) list_double_time_pane_vc_g_ParamLimits

0xfa18,	// (0x00011181) list_double_time_pane_vc_g

0x4513,	// (0x00005c7c) list_double_time_pane_vc_t1_ParamLimits

0x4513,	// (0x00005c7c) list_double_time_pane_vc_t1

0x4543,	// (0x00005cac) list_double_time_pane_vc_t2_ParamLimits

0x4543,	// (0x00005cac) list_double_time_pane_vc_t2

0x456c,	// (0x00005cd5) list_double_time_pane_vc_t3_ParamLimits

0x456c,	// (0x00005cd5) list_double_time_pane_vc_t3

0x457e,	// (0x00005ce7) list_double_time_pane_vc_t4_ParamLimits

0x457e,	// (0x00005ce7) list_double_time_pane_vc_t4

0x0003,

0xfa1d,	// (0x00011186) list_double_time_pane_vc_t_ParamLimits

0xfa1d,	// (0x00011186) list_double_time_pane_vc_t

0x1f4e,	// (0x000036b7) list_double_pane_vc_g1_ParamLimits

0x1f4e,	// (0x000036b7) list_double_pane_vc_g1

0x1f5a,	// (0x000036c3) list_double_pane_vc_g2_ParamLimits

0x1f5a,	// (0x000036c3) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010d0c) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010d0c) list_double_pane_vc_g

0x4592,	// (0x00005cfb) list_double_pane_vc_t1_ParamLimits

0x4592,	// (0x00005cfb) list_double_pane_vc_t1

0x45a6,	// (0x00005d0f) list_double_pane_vc_t2_ParamLimits

0x45a6,	// (0x00005d0f) list_double_pane_vc_t2

0x0001,

0xfa26,	// (0x0001118f) list_double_pane_vc_t_ParamLimits

0xfa26,	// (0x0001118f) list_double_pane_vc_t

0x1f4e,	// (0x000036b7) list_double_number_pane_vc_g1_ParamLimits

0x1f4e,	// (0x000036b7) list_double_number_pane_vc_g1

0x1f5a,	// (0x000036c3) list_double_number_pane_vc_g2_ParamLimits

0x1f5a,	// (0x000036c3) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00010d0c) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00010d0c) list_double_number_pane_vc_g

0x45bc,	// (0x00005d25) list_double_number_pane_vc_t1_ParamLimits

0x45bc,	// (0x00005d25) list_double_number_pane_vc_t1

0x45ce,	// (0x00005d37) list_double_number_pane_vc_t2_ParamLimits

0x45ce,	// (0x00005d37) list_double_number_pane_vc_t2

0x45a6,	// (0x00005d0f) list_double_number_pane_vc_t3_ParamLimits

0x45a6,	// (0x00005d0f) list_double_number_pane_vc_t3

0x0002,

0xfa2b,	// (0x00011194) list_double_number_pane_vc_t_ParamLimits

0xfa2b,	// (0x00011194) list_double_number_pane_vc_t

0x45e2,	// (0x00005d4b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x45e2,	// (0x00005d4b) list_double_large_graphic_pane_vc_g1

0x4604,	// (0x00005d6d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4604,	// (0x00005d6d) list_double_large_graphic_pane_vc_g2

0x4618,	// (0x00005d81) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4618,	// (0x00005d81) list_double_large_graphic_pane_vc_g3

0x4627,	// (0x00005d90) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4627,	// (0x00005d90) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa32,	// (0x0001119b) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x0001119b) list_double_large_graphic_pane_vc_g

0x4633,	// (0x00005d9c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x4633,	// (0x00005d9c) list_double_large_graphic_pane_vc_t1

0x464f,	// (0x00005db8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x464f,	// (0x00005db8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa3b,	// (0x000111a4) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa3b,	// (0x000111a4) list_double_large_graphic_pane_vc_t

0x0df7,	// (0x00002560) list_double_heading_pane_vc_g1_ParamLimits

0x0df7,	// (0x00002560) list_double_heading_pane_vc_g1

0x41b4,	// (0x0000591d) list_double_heading_pane_vc_g2_ParamLimits

0x41b4,	// (0x0000591d) list_double_heading_pane_vc_g2

0x0001,

0xfa40,	// (0x000111a9) list_double_heading_pane_vc_g_ParamLimits

0xfa40,	// (0x000111a9) list_double_heading_pane_vc_g

0x466f,	// (0x00005dd8) list_double_heading_pane_vc_t1_ParamLimits

0x466f,	// (0x00005dd8) list_double_heading_pane_vc_t1

0x4681,	// (0x00005dea) list_double_heading_pane_vc_t2_ParamLimits

0x4681,	// (0x00005dea) list_double_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x000111ae) list_double_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x000111ae) list_double_heading_pane_vc_t

0x4699,	// (0x00005e02) list_double_graphic_pane_vc_g1_ParamLimits

0x4699,	// (0x00005e02) list_double_graphic_pane_vc_g1

0x46a5,	// (0x00005e0e) list_double_graphic_pane_vc_g2_ParamLimits

0x46a5,	// (0x00005e0e) list_double_graphic_pane_vc_g2

0x1f4e,	// (0x000036b7) list_double_graphic_pane_vc_g3_ParamLimits

0x1f4e,	// (0x000036b7) list_double_graphic_pane_vc_g3

0x0003,

0xfa4a,	// (0x000111b3) list_double_graphic_pane_vc_g_ParamLimits

0xfa4a,	// (0x000111b3) list_double_graphic_pane_vc_g

0x46c2,	// (0x00005e2b) list_double_graphic_pane_vc_t1_ParamLimits

0x46c2,	// (0x00005e2b) list_double_graphic_pane_vc_t1

0x46ec,	// (0x00005e55) list_double_graphic_pane_vc_t2_ParamLimits

0x46ec,	// (0x00005e55) list_double_graphic_pane_vc_t2

0x0001,

0xfa53,	// (0x000111bc) list_double_graphic_pane_vc_t_ParamLimits

0xfa53,	// (0x000111bc) list_double_graphic_pane_vc_t

0xe998,	// (0x00010101) aid_size_cell_fastswap

0xa3a1,	// (0x0000bb0a) aid_size_cell_touch_ParamLimits

0xa3a1,	// (0x0000bb0a) aid_size_cell_touch

0xeb1f,	// (0x00010288) popup_fast_swap_wide_window_ParamLimits

0xeb1f,	// (0x00010288) popup_fast_swap_wide_window

0xa55f,	// (0x0000bcc8) touch_pane_ParamLimits

0xa55f,	// (0x0000bcc8) touch_pane

0xf2b5,	// (0x00010a1e) button_value_adjust_pane_cp2

0xf2bd,	// (0x00010a26) button_value_adjust_pane_cp4

0xf2c5,	// (0x00010a2e) form_field_data_pane_cp2

0xad8c,	// (0x0000c4f5) form_field_data_wide_pane_cp2

0x0432,	// (0x00001b9b) bg_scroll_pane_ParamLimits

0x0451,	// (0x00001bba) scroll_handle_pane_ParamLimits

0x0465,	// (0x00001bce) scroll_sc2_down_pane_ParamLimits

0x0465,	// (0x00001bce) scroll_sc2_down_pane

0x048c,	// (0x00001bf5) scroll_sc2_up_pane_ParamLimits

0x048c,	// (0x00001bf5) scroll_sc2_up_pane

0xc91f,	// (0x0000e088) grid_wheel_folder_pane_g1_ParamLimits

0xc91f,	// (0x0000e088) grid_wheel_folder_pane_g1

0x0b69,	// (0x000022d2) clock_nsta_pane_cp2_ParamLimits

0x0b69,	// (0x000022d2) clock_nsta_pane_cp2

0xb227,	// (0x0000c990) listscroll_midp_pane_ParamLimits

0xb233,	// (0x0000c99c) midp_canvas_pane

0x1441,	// (0x00002baa) nsta_clock_indic_pane

0x149f,	// (0x00002c08) listscroll_form_pane_vc

0x14c3,	// (0x00002c2c) listscroll_set_pane_vc_ParamLimits

0x14c3,	// (0x00002c2c) listscroll_set_pane_vc

0xbd7f,	// (0x0000d4e8) clock_nsta_pane

0xbda9,	// (0x0000d512) indicator_nsta_pane

0x1fae,	// (0x00003717) bg_popup_sub_pane_cp2_ParamLimits

0x1fc2,	// (0x0000372b) find_pane_cp2_ParamLimits

0x1fc2,	// (0x0000372b) find_pane_cp2

0x1fd8,	// (0x00003741) grid_toobar_pane_ParamLimits

0x2210,	// (0x00003979) list_form_gen_pane_vc_ParamLimits

0x2210,	// (0x00003979) list_form_gen_pane_vc

0x2226,	// (0x0000398f) scroll_pane_cp8_vc_ParamLimits

0x2226,	// (0x0000398f) scroll_pane_cp8_vc

0x2345,	// (0x00003aae) data_form_wide_pane_vc_ParamLimits

0x2345,	// (0x00003aae) data_form_wide_pane_vc

0x2351,	// (0x00003aba) form_field_data_wide_pane_vc_g1

0x2359,	// (0x00003ac2) form_field_data_wide_pane_vc_t1_ParamLimits

0x2359,	// (0x00003ac2) form_field_data_wide_pane_vc_t1

0xf321,	// (0x00010a8a) input_focus_pane_cp6_vc_ParamLimits

0xf321,	// (0x00010a8a) input_focus_pane_cp6_vc

0x26a4,	// (0x00003e0d) list_midp_pane_ParamLimits

0x3d4d,	// (0x000054b6) scroll_pane_cp16_ParamLimits

0x3d4d,	// (0x000054b6) scroll_pane_cp16

0x26fa,	// (0x00003e63) button_value_adjust_pane_ParamLimits

0x26fa,	// (0x00003e63) button_value_adjust_pane

0xc515,	// (0x0000dc7e) button_value_adjust_pane_cp6_ParamLimits

0xc515,	// (0x0000dc7e) button_value_adjust_pane_cp6

0xc651,	// (0x0000ddba) settings_code_pane_cp_ParamLimits

0xc651,	// (0x0000ddba) settings_code_pane_cp

0xe976,	// (0x000100df) cell_touch_pane_g1

0xe976,	// (0x000100df) cell_touch_pane_g2

0x0001,

0xf6d9,	// (0x00010e42) cell_touch_pane_g

0xc7f3,	// (0x0000df5c) cell_touch_pane_cp_ParamLimits

0xc7f3,	// (0x0000df5c) cell_touch_pane_cp

0xc80f,	// (0x0000df78) cell_touch_pane_ParamLimits

0xc80f,	// (0x0000df78) cell_touch_pane

0xe976,	// (0x000100df) scroll_sc2_down_pane_g1

0xe976,	// (0x000100df) scroll_sc2_up_pane_g1

0xeaef,	// (0x00010258) bg_set_opt_pane_cp4_vc

0x41f4,	// (0x0000595d) list_set_graphic_pane_vc_g1_ParamLimits

0x41f4,	// (0x0000595d) list_set_graphic_pane_vc_g1

0x4200,	// (0x00005969) list_set_graphic_pane_vc_g2_ParamLimits

0x4200,	// (0x00005969) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x00011132) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x00011132) list_set_graphic_pane_vc_g

0x420c,	// (0x00005975) text_primary_small_cp13_vc_ParamLimits

0x420c,	// (0x00005975) text_primary_small_cp13_vc

0x4224,	// (0x0000598d) list_set_graphic_pane_vc_ParamLimits

0x4224,	// (0x0000598d) list_set_graphic_pane_vc

0xeaef,	// (0x00010258) input_focus_pane_cp2_vc

0xe976,	// (0x000100df) setting_code_pane_vc_g1

0xec49,	// (0x000103b2) setting_code_pane_vc_t1

0x4237,	// (0x000059a0) set_text_pane_vc_t1_ParamLimits

0x4237,	// (0x000059a0) set_text_pane_vc_t1

0xeaef,	// (0x00010258) input_focus_pane_cp1_vc

0x4258,	// (0x000059c1) list_set_text_pane_vc

0xe976,	// (0x000100df) setting_text_pane_vc_g1

0xeaef,	// (0x00010258) bg_set_opt_pane_cp2_vc

0xec18,	// (0x00010381) setting_slider_graphic_pane_vc_g1

0x4262,	// (0x000059cb) setting_slider_graphic_pane_vc_t1

0x4274,	// (0x000059dd) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x00011137) setting_slider_graphic_pane_vc_t

0x4286,	// (0x000059ef) slider_set_pane_cp_vc

0x4290,	// (0x000059f9) slider_set_pane_vc_g1

0x4299,	// (0x00005a02) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x0001113c) slider_set_pane_vc_g

0xf3dc,	// (0x00010b45) set_opt_bg_pane_g1_copy1

0xf3e4,	// (0x00010b4d) set_opt_bg_pane_g2_copy1

0x42c5,	// (0x00005a2e) set_opt_bg_pane_g3_copy1

0xf3f4,	// (0x00010b5d) set_opt_bg_pane_g4_copy1

0xf3fc,	// (0x00010b65) set_opt_bg_pane_g5_copy1

0xf404,	// (0x00010b6d) set_opt_bg_pane_g6_copy1

0x42cf,	// (0x00005a38) set_opt_bg_pane_g7_copy1

0x42d9,	// (0x00005a42) set_opt_bg_pane_g8_copy1

0x42e3,	// (0x00005a4c) set_opt_bg_pane_g9_copy1

0xeaef,	// (0x00010258) bg_set_opt_pane_cp_vc

0x42ed,	// (0x00005a56) setting_slider_pane_vc_t1

0x42fc,	// (0x00005a65) setting_slider_pane_vc_t2

0x430e,	// (0x00005a77) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x0001114b) setting_slider_pane_vc_t

0x4320,	// (0x00005a89) slider_set_pane_vc

0x2f3f,	// (0x000046a8) volume_set_pane_vc_g1

0x2f48,	// (0x000046b1) volume_set_pane_vc_g2

0x2f51,	// (0x000046ba) volume_set_pane_vc_g3

0x2f5a,	// (0x000046c3) volume_set_pane_vc_g4

0x2f63,	// (0x000046cc) volume_set_pane_vc_g5

0x2f6c,	// (0x000046d5) volume_set_pane_vc_g6

0x2f75,	// (0x000046de) volume_set_pane_vc_g7

0x2f7e,	// (0x000046e7) volume_set_pane_vc_g8

0x2f87,	// (0x000046f0) volume_set_pane_vc_g9

0x2f90,	// (0x000046f9) volume_set_pane_vc_g10

0x0009,

0xf9e9,	// (0x00011152) volume_set_pane_vc_g

0x432a,	// (0x00005a93) volume_set_pane_vc

0x4334,	// (0x00005a9d) button_value_adjust_pane_cp1_vc

0x433e,	// (0x00005aa7) list_highlight_pane_cp2_vc

0x4347,	// (0x00005ab0) list_set_pane_vc_ParamLimits

0x4347,	// (0x00005ab0) list_set_pane_vc

0x43b5,	// (0x00005b1e) main_pane_set_vc_t1_ParamLimits

0x43b5,	// (0x00005b1e) main_pane_set_vc_t1

0x43ca,	// (0x00005b33) main_pane_set_vc_t2_ParamLimits

0x43ca,	// (0x00005b33) main_pane_set_vc_t2

0x43dc,	// (0x00005b45) main_pane_set_vc_t3_ParamLimits

0x43dc,	// (0x00005b45) main_pane_set_vc_t3

0x43f0,	// (0x00005b59) main_pane_set_vc_t4_ParamLimits

0x43f0,	// (0x00005b59) main_pane_set_vc_t4

0x0003,

0xf9fe,	// (0x00011167) main_pane_set_vc_t_ParamLimits

0xf9fe,	// (0x00011167) main_pane_set_vc_t

0x4404,	// (0x00005b6d) setting_code_pane_vc_ParamLimits

0x4404,	// (0x00005b6d) setting_code_pane_vc

0x4415,	// (0x00005b7e) setting_slider_graphic_pane_vc

0x4415,	// (0x00005b7e) setting_slider_pane_vc

0x4415,	// (0x00005b7e) setting_text_pane_vc

0x4415,	// (0x00005b7e) setting_volume_pane_vc

0x441f,	// (0x00005b88) scroll_pane_cp121_vc

0xf2a3,	// (0x00010a0c) set_content_pane_vc

0x470a,	// (0x00005e73) button_value_adjust_pane_g1

0x4713,	// (0x00005e7c) button_value_adjust_pane_g2

0x0001,

0xfa58,	// (0x000111c1) button_value_adjust_pane_g

0x471c,	// (0x00005e85) form_field_slider_wide_pane_vc_t1_ParamLimits

0x471c,	// (0x00005e85) form_field_slider_wide_pane_vc_t1

0x472e,	// (0x00005e97) form_field_slider_wide_pane_vc_t2_ParamLimits

0x472e,	// (0x00005e97) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5d,	// (0x000111c6) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5d,	// (0x000111c6) form_field_slider_wide_pane_vc_t

0xeb91,	// (0x000102fa) input_focus_pane_cp10_vc_ParamLimits

0xeb91,	// (0x000102fa) input_focus_pane_cp10_vc

0x475a,	// (0x00005ec3) slider_cont_pane_cp1_vc_ParamLimits

0x475a,	// (0x00005ec3) slider_cont_pane_cp1_vc

0x476c,	// (0x00005ed5) slider_form_pane_g1_cp2

0x4299,	// (0x00005a02) slider_form_pane_g2_cp2

0x4799,	// (0x00005f02) form_field_slider_pane_vc_t3

0x47a7,	// (0x00005f10) form_field_slider_pane_vc_t4

0x47b5,	// (0x00005f1e) slider_form_pane_vc_ParamLimits

0x47b5,	// (0x00005f1e) slider_form_pane_vc

0x47c2,	// (0x00005f2b) form_field_slider_pane_vc_t1_ParamLimits

0x47c2,	// (0x00005f2b) form_field_slider_pane_vc_t1

0x472e,	// (0x00005e97) form_field_slider_pane_vc_t2_ParamLimits

0x472e,	// (0x00005e97) form_field_slider_pane_vc_t2

0x0001,

0xfa6f,	// (0x000111d8) form_field_slider_pane_vc_t_ParamLimits

0xfa6f,	// (0x000111d8) form_field_slider_pane_vc_t

0xeb91,	// (0x000102fa) input_focus_pane_cp9_vc_ParamLimits

0xeb91,	// (0x000102fa) input_focus_pane_cp9_vc

0x47d8,	// (0x00005f41) slider_cont_pane_vc_ParamLimits

0x47d8,	// (0x00005f41) slider_cont_pane_vc

0x47ec,	// (0x00005f55) list_form_graphic_pane_cp_vc_ParamLimits

0x47ec,	// (0x00005f55) list_form_graphic_pane_cp_vc

0x2351,	// (0x00003aba) form_field_popup_wide_pane_vc_g1

0x4801,	// (0x00005f6a) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4801,	// (0x00005f6a) form_field_popup_wide_pane_vc_t1

0xf321,	// (0x00010a8a) input_focus_pane_cp8_vc_ParamLimits

0xf321,	// (0x00010a8a) input_focus_pane_cp8_vc

0x4846,	// (0x00005faf) list_form_wide_pane_vc_ParamLimits

0x4846,	// (0x00005faf) list_form_wide_pane_vc

0x4852,	// (0x00005fbb) list_form_graphic_pane_vc_g1

0x485a,	// (0x00005fc3) list_form_graphic_pane_vc_t1_ParamLimits

0x485a,	// (0x00005fc3) list_form_graphic_pane_vc_t1

0xeba9,	// (0x00010312) list_highlight_pane_cp5_vc_ParamLimits

0xeba9,	// (0x00010312) list_highlight_pane_cp5_vc

0x4876,	// (0x00005fdf) list_form_graphic_pane_vc_ParamLimits

0x4876,	// (0x00005fdf) list_form_graphic_pane_vc

0x2351,	// (0x00003aba) form_field_popup_pane_vc_g1

0x488c,	// (0x00005ff5) form_field_popup_pane_vc_t1_ParamLimits

0x488c,	// (0x00005ff5) form_field_popup_pane_vc_t1

0xf321,	// (0x00010a8a) input_focus_pane_cp7_vc_ParamLimits

0xf321,	// (0x00010a8a) input_focus_pane_cp7_vc

0x48a3,	// (0x0000600c) list_form_pane_vc_ParamLimits

0x48a3,	// (0x0000600c) list_form_pane_vc

0x48af,	// (0x00006018) data_form_pane_vc_t1_ParamLimits

0x48af,	// (0x00006018) data_form_pane_vc_t1

0xf3dc,	// (0x00010b45) input_focus_pane_vc_g1

0xf3e4,	// (0x00010b4d) input_focus_pane_vc_g2

0xf3ec,	// (0x00010b55) input_focus_pane_vc_g3

0xf3f4,	// (0x00010b5d) input_focus_pane_vc_g4

0xf3fc,	// (0x00010b65) input_focus_pane_vc_g5

0xf404,	// (0x00010b6d) input_focus_pane_vc_g6

0xf40c,	// (0x00010b75) input_focus_pane_vc_g7

0xf414,	// (0x00010b7d) input_focus_pane_vc_g8

0xf41c,	// (0x00010b85) input_focus_pane_vc_g9

0xe976,	// (0x000100df) input_focus_pane_vc_g10

0x0009,

0xf662,	// (0x00010dcb) input_focus_pane_vc_g

0x2345,	// (0x00003aae) data_form_pane_vc_ParamLimits

0x2345,	// (0x00003aae) data_form_pane_vc

0x2351,	// (0x00003aba) form_field_data_pane_vc_g1

0x48cc,	// (0x00006035) form_field_data_pane_vc_t1_ParamLimits

0x48cc,	// (0x00006035) form_field_data_pane_vc_t1

0xf321,	// (0x00010a8a) input_focus_pane_vc_ParamLimits

0xf321,	// (0x00010a8a) input_focus_pane_vc

0x48e6,	// (0x0000604f) button_value_adjust_pane_cp3_vc

0x48ee,	// (0x00006057) button_value_adjust_pane_cp5_vc

0x48f6,	// (0x0000605f) form_field_data_pane_vc_ParamLimits

0x48f6,	// (0x0000605f) form_field_data_pane_vc

0x4911,	// (0x0000607a) form_field_data_pane_vc_cp2

0x4919,	// (0x00006082) form_field_data_wide_pane_vc_ParamLimits

0x4919,	// (0x00006082) form_field_data_wide_pane_vc

0x4933,	// (0x0000609c) form_field_data_wide_pane_vc_cp2

0x493b,	// (0x000060a4) form_field_popup_pane_vc_ParamLimits

0x493b,	// (0x000060a4) form_field_popup_pane_vc

0x4956,	// (0x000060bf) form_field_popup_wide_pane_vc_ParamLimits

0x4956,	// (0x000060bf) form_field_popup_wide_pane_vc

0x4970,	// (0x000060d9) form_field_slider_pane_vc_ParamLimits

0x4970,	// (0x000060d9) form_field_slider_pane_vc

0x4983,	// (0x000060ec) form_field_slider_wide_pane_vc_ParamLimits

0x4983,	// (0x000060ec) form_field_slider_wide_pane_vc

0xc82d,	// (0x0000df96) grid_touch_1_pane_ParamLimits

0xc82d,	// (0x0000df96) grid_touch_1_pane

0xc841,	// (0x0000dfaa) grid_touch_2_pane_ParamLimits

0xc841,	// (0x0000dfaa) grid_touch_2_pane

0x4a69,	// (0x000061d2) touch_pane_g1_ParamLimits

0x4a69,	// (0x000061d2) touch_pane_g1

0x49bc,	// (0x00006125) cell_app_pane_cp_wide_ParamLimits

0x49bc,	// (0x00006125) cell_app_pane_cp_wide

0x49cd,	// (0x00006136) grid_popup_fast_wide_pane_ParamLimits

0x49cd,	// (0x00006136) grid_popup_fast_wide_pane

0x49e1,	// (0x0000614a) scroll_pane_cp19_ParamLimits

0x49e1,	// (0x0000614a) scroll_pane_cp19

0xeaef,	// (0x00010258) bg_popup_window_pane_cp20

0x49f5,	// (0x0000615e) listscroll_popup_fast_wide_pane

0xc86d,	// (0x0000dfd6) grid_indicator_nsta_pane

0x4a0f,	// (0x00006178) clock_nsta_pane_g1

0x4a18,	// (0x00006181) clock_nsta_pane_t1

0xc879,	// (0x0000dfe2) cell_indicator_nsta_pane_ParamLimits

0xc879,	// (0x0000dfe2) cell_indicator_nsta_pane

0x4a69,	// (0x000061d2) cell_indicator_nsta_pane_g1

0xc894,	// (0x0000dffd) cell_indicator_nsta_pane_g2

0x0001,

0xfa80,	// (0x000111e9) cell_indicator_nsta_pane_g

0x4a8a,	// (0x000061f3) clock_nsta_pane_cp

0x4a93,	// (0x000061fc) indicator_nsta_pane_cp

0x4a9d,	// (0x00006206) nsta_clock_indic_pane_g1

0xec88,	// (0x000103f1) grid_indicator_pane

0x057e,	// (0x00001ce7) scroll_pane_cp29

0x0a96,	// (0x000021ff) indicator_nsta_pane_cp2_ParamLimits

0x0a96,	// (0x000021ff) indicator_nsta_pane_cp2

0xeba9,	// (0x00010312) main_apps_wheel_pane

0x2561,	// (0x00003cca) form_midp_field_text_pane_ParamLimits

0x26b0,	// (0x00003e19) scroll_bar_cp050_ParamLimits

0x4af6,	// (0x0000625f) cell_indicator_pane_ParamLimits

0x4af6,	// (0x0000625f) cell_indicator_pane

0x4b0e,	// (0x00006277) cell_indicator_pane_g1

0xc8a1,	// (0x0000e00a) grid_wheel_folder_pane_ParamLimits

0xc8a1,	// (0x0000e00a) grid_wheel_folder_pane

0xc8af,	// (0x0000e018) list_wheel_apps_pane_ParamLimits

0xc8af,	// (0x0000e018) list_wheel_apps_pane

0xc8bd,	// (0x0000e026) main_apps_wheel_pane_g1_ParamLimits

0xc8bd,	// (0x0000e026) main_apps_wheel_pane_g1

0xc8cd,	// (0x0000e036) main_apps_wheel_pane_g2_ParamLimits

0xc8cd,	// (0x0000e036) main_apps_wheel_pane_g2

0x0001,

0xfa9c,	// (0x00011205) main_apps_wheel_pane_g_ParamLimits

0xfa9c,	// (0x00011205) main_apps_wheel_pane_g

0xc8dd,	// (0x0000e046) main_apps_wheel_pane_t1_ParamLimits

0xc8dd,	// (0x0000e046) main_apps_wheel_pane_t1

0xc8f5,	// (0x0000e05e) list_wheel_apps_pane_g1

0xc8fd,	// (0x0000e066) list_wheel_apps_pane_g2

0xc905,	// (0x0000e06e) list_wheel_apps_pane_g3

0xc90d,	// (0x0000e076) list_wheel_apps_pane_g4

0xc915,	// (0x0000e07e) list_wheel_apps_pane_g5

0x0004,

0xfaa1,	// (0x0001120a) list_wheel_apps_pane_g

0x0da2,	// (0x0000250b) navi_icon_text_pane

0xbc71,	// (0x0000d3da) aid_fill_nsta

0xc932,	// (0x0000e09b) navi_icon_text_pane_g1

0xc93e,	// (0x0000e0a7) navi_icon_text_pane_t1

0x0c2d,	// (0x00002396) list_set_graphic_pane_t1_ParamLimits

0x0c2d,	// (0x00002396) list_set_graphic_pane_t1

0x2e1d,	// (0x00004586) popup_midp_note_alarm_window_t6_ParamLimits

0x2e1d,	// (0x00004586) popup_midp_note_alarm_window_t6

0x2e2f,	// (0x00004598) popup_midp_note_alarm_window_t7_ParamLimits

0x2e2f,	// (0x00004598) popup_midp_note_alarm_window_t7

0x2e41,	// (0x000045aa) popup_midp_note_alarm_window_t8_ParamLimits

0x2e41,	// (0x000045aa) popup_midp_note_alarm_window_t8

0x2e53,	// (0x000045bc) popup_midp_note_alarm_window_t9_ParamLimits

0x2e53,	// (0x000045bc) popup_midp_note_alarm_window_t9

0x2e65,	// (0x000045ce) popup_midp_note_alarm_window_t10_ParamLimits

0x2e65,	// (0x000045ce) popup_midp_note_alarm_window_t10

0x2e77,	// (0x000045e0) popup_midp_note_alarm_window_t11_ParamLimits

0x2e77,	// (0x000045e0) popup_midp_note_alarm_window_t11

0x2e89,	// (0x000045f2) scroll_pane_cp17_ParamLimits

0x2e89,	// (0x000045f2) scroll_pane_cp17

0x2f3f,	// (0x000046a8) volume_small_pane_cp_g1

0x4c01,	// (0x0000636a) volume_small_pane_cp_g2

0x4c0a,	// (0x00006373) volume_small_pane_cp_g3

0x4c13,	// (0x0000637c) volume_small_pane_cp_g4

0x4c1c,	// (0x00006385) volume_small_pane_cp_g5

0x4c25,	// (0x0000638e) volume_small_pane_cp_g6

0x4c2e,	// (0x00006397) volume_small_pane_cp_g7

0x4c37,	// (0x000063a0) volume_small_pane_cp_g8

0x4c40,	// (0x000063a9) volume_small_pane_cp_g9

0x4c49,	// (0x000063b2) volume_small_pane_cp_g10

0x100f,	// (0x00002778) midp_ticker_pane_g1_ParamLimits

0x101b,	// (0x00002784) midp_ticker_pane_g2_ParamLimits

0xf72e,	// (0x00010e97) midp_ticker_pane_g_ParamLimits

0xb2cb,	// (0x0000ca34) midp_ticker_pane_t1_ParamLimits

0xbc95,	// (0x0000d3fe) aid_fill_nsta_2

0x269c,	// (0x00003e05) list_form2_midp_pane

0x3abd,	// (0x00005226) midp_editing_number_pane_ParamLimits

0x3acc,	// (0x00005235) midp_ticker_pane_ParamLimits

0x4c52,	// (0x000063bb) form2_midp_field_pane

0x4c76,	// (0x000063df) scroll_pane_cp51

0x4c96,	// (0x000063ff) form2_midp_button_pane_ParamLimits

0x4c96,	// (0x000063ff) form2_midp_button_pane

0x4ca8,	// (0x00006411) form2_midp_content_pane_ParamLimits

0x4ca8,	// (0x00006411) form2_midp_content_pane

0x4cc2,	// (0x0000642b) form2_midp_field_choice_group_pane

0x4cca,	// (0x00006433) form2_midp_field_pane_g1

0x4cd2,	// (0x0000643b) form2_midp_field_pane_g2

0x4cda,	// (0x00006443) form2_midp_field_pane_g3

0x4ce2,	// (0x0000644b) form2_midp_field_pane_g4

0x0003,

0xfac6,	// (0x0001122f) form2_midp_field_pane_g

0x4cea,	// (0x00006453) form2_midp_gauge_slider_pane

0x4cf2,	// (0x0000645b) form2_midp_gauge_wait_pane

0x4cfa,	// (0x00006463) form2_midp_image_pane_ParamLimits

0x4cfa,	// (0x00006463) form2_midp_image_pane

0x4d15,	// (0x0000647e) form2_midp_label_pane_ParamLimits

0x4d15,	// (0x0000647e) form2_midp_label_pane

0xc96c,	// (0x0000e0d5) form2_midp_label_pane_cp_ParamLimits

0xc96c,	// (0x0000e0d5) form2_midp_label_pane_cp

0x4d55,	// (0x000064be) form2_midp_string_pane_ParamLimits

0x4d55,	// (0x000064be) form2_midp_string_pane

0x4d67,	// (0x000064d0) form2_midp_text_pane_ParamLimits

0x4d67,	// (0x000064d0) form2_midp_text_pane

0x4d88,	// (0x000064f1) form2_midp_time_pane

0x4d98,	// (0x00006501) input_focus_pane_cp51_ParamLimits

0x4d98,	// (0x00006501) input_focus_pane_cp51

0x4db0,	// (0x00006519) form2_midp_label_pane_t1_ParamLimits

0x4db0,	// (0x00006519) form2_midp_label_pane_t1

0x4df6,	// (0x0000655f) form2_mdip_text_pane_t1_ParamLimits

0x4df6,	// (0x0000655f) form2_mdip_text_pane_t1

0x4e15,	// (0x0000657e) form2_midp_time_pane_t1

0x4e30,	// (0x00006599) form2_midp_gauge_slider_pane_t1

0xc98d,	// (0x0000e0f6) form2_midp_gauge_slider_pane_t2

0xc99f,	// (0x0000e108) form2_midp_gauge_slider_pane_t3

0x0002,

0xfacf,	// (0x00011238) form2_midp_gauge_slider_pane_t

0x4e66,	// (0x000065cf) form2_midp_slider_pane

0x4e72,	// (0x000065db) form2_midp_gauge_wait_pane_t1

0x4e80,	// (0x000065e9) form2_midp_wait_pane_ParamLimits

0x4e80,	// (0x000065e9) form2_midp_wait_pane

0x2398,	// (0x00003b01) list_single_2graphic_pane_cp4_ParamLimits

0x2398,	// (0x00003b01) list_single_2graphic_pane_cp4

0xc9b1,	// (0x0000e11a) list_single_midp_graphic_pane_cp_ParamLimits

0xc9b1,	// (0x0000e11a) list_single_midp_graphic_pane_cp

0xeaef,	// (0x00010258) list_highlight_pane_cp20

0x4ec4,	// (0x0000662d) list_single_2graphic_pane_g1_cp4

0x4085,	// (0x000057ee) list_single_2graphic_pane_g2_cp4

0x4ecc,	// (0x00006635) list_single_2graphic_pane_t1_cp4

0xeba9,	// (0x00010312) list_highlight_pane_cp21

0x4edb,	// (0x00006644) list_single_midp_graphic_pane_g4_cp

0x4eea,	// (0x00006653) list_single_midp_graphic_pane_t1_cp

0xc9d2,	// (0x0000e13b) form2_mdip_string_pane_t1_ParamLimits

0xc9d2,	// (0x0000e13b) form2_mdip_string_pane_t1

0xeaef,	// (0x00010258) bg_wml_button_pane_cp2

0xe976,	// (0x000100df) form2_midp_image_pane_g1

0xf235,	// (0x0001099e) list_double_large_graphic_pane_g5_ParamLimits

0xf235,	// (0x0001099e) list_double_large_graphic_pane_g5

0xb227,	// (0x0000c990) midp_form_pane_ParamLimits

0xeba9,	// (0x00010312) main_apps_wheel_pane_ParamLimits

0xb98b,	// (0x0000d0f4) popup_preview_window_ParamLimits

0xb98b,	// (0x0000d0f4) popup_preview_window

0x1a9b,	// (0x00003204) popup_touch_info_window_ParamLimits

0x1a9b,	// (0x00003204) popup_touch_info_window

0x1abd,	// (0x00003226) popup_touch_menu_window_ParamLimits

0x1abd,	// (0x00003226) popup_touch_menu_window

0xe96c,	// (0x000100d5) bg_popup_sub_pane_cp6

0x4f9b,	// (0x00006704) list_touch_menu_pane

0x4fa3,	// (0x0000670c) list_single_touch_menu_pane_ParamLimits

0x4fa3,	// (0x0000670c) list_single_touch_menu_pane

0x4fbb,	// (0x00006724) list_single_touch_menu_pane_t1

0xeba9,	// (0x00010312) bg_popup_sub_pane_cp7_ParamLimits

0xeba9,	// (0x00010312) bg_popup_sub_pane_cp7

0x4fc9,	// (0x00006732) heading_sub_pane

0x4fd1,	// (0x0000673a) list_touch_info_pane_ParamLimits

0x4fd1,	// (0x0000673a) list_touch_info_pane

0x4fe0,	// (0x00006749) list_single_touch_info_pane_ParamLimits

0x4fe0,	// (0x00006749) list_single_touch_info_pane

0x4ff2,	// (0x0000675b) list_single_touch_info_pane_t1

0x5000,	// (0x00006769) list_single_touch_info_pane_t2

0x0001,

0xfadd,	// (0x00011246) list_single_touch_info_pane_t

0x0f31,	// (0x0000269a) bg_popup_heading_pane_cp

0x500e,	// (0x00006777) heading_sub_pane_t1

0x2251,	// (0x000039ba) bg_popup_preview_window_pane_cp_ParamLimits

0x2251,	// (0x000039ba) bg_popup_preview_window_pane_cp

0x4fc9,	// (0x00006732) heading_preview_pane

0x4fd1,	// (0x0000673a) list_preview_pane_ParamLimits

0x4fd1,	// (0x0000673a) list_preview_pane

0x501c,	// (0x00006785) popup_preview_window_g1

0x4fe0,	// (0x00006749) list_single_preview_pane_ParamLimits

0x4fe0,	// (0x00006749) list_single_preview_pane

0x5024,	// (0x0000678d) list_single_preview_pane_g1

0x502c,	// (0x00006795) list_single_preview_pane_t1

0x4ff2,	// (0x0000675b) list_single_preview_pane_t2

0x0001,

0xfae2,	// (0x0001124b) list_single_preview_pane_t

0x503a,	// (0x000067a3) bg_popup_heading_pane_cp2_ParamLimits

0x503a,	// (0x000067a3) bg_popup_heading_pane_cp2

0x5050,	// (0x000067b9) heading_preview_pane_g1

0x5058,	// (0x000067c1) heading_preview_pane_t1_ParamLimits

0x5058,	// (0x000067c1) heading_preview_pane_t1

0xec9f,	// (0x00010408) soft_indicator_pane_t1_ParamLimits

0xf201,	// (0x0001096a) scroll_pane_ParamLimits

0x047a,	// (0x00001be3) scroll_sc2_left_pane

0x0483,	// (0x00001bec) scroll_sc2_right_pane

0x04a2,	// (0x00001c0b) scroll_bg_pane_g1_ParamLimits

0x04b7,	// (0x00001c20) scroll_bg_pane_g2_ParamLimits

0x04cf,	// (0x00001c38) scroll_bg_pane_g3_ParamLimits

0xf6b9,	// (0x00010e22) scroll_bg_pane_g_ParamLimits

0x04a2,	// (0x00001c0b) scroll_handle_pane_g1_ParamLimits

0x04f1,	// (0x00001c5a) scroll_handle_pane_g2_ParamLimits

0x04cf,	// (0x00001c38) scroll_handle_pane_g3_ParamLimits

0xf6c0,	// (0x00010e29) scroll_handle_pane_g_ParamLimits

0x14f9,	// (0x00002c62) popup_choice_list_window_ParamLimits

0x14f9,	// (0x00002c62) popup_choice_list_window

0x1fba,	// (0x00003723) choice_list_pane

0x2082,	// (0x000037eb) cell_toolbar_pane_t1

0x20aa,	// (0x00003813) toolbar_button_pane_ParamLimits

0x34bf,	// (0x00004c28) ai_gene_pane_1_t2_ParamLimits

0x34bf,	// (0x00004c28) ai_gene_pane_1_t2

0x0001,

0xf8dc,	// (0x00011045) ai_gene_pane_1_t_ParamLimits

0xf8dc,	// (0x00011045) ai_gene_pane_1_t

0x5075,	// (0x000067de) scroll_sc2_left_pane_g1

0x5075,	// (0x000067de) scroll_sc2_right_pane_g1

0x1493,	// (0x00002bfc) bg_popup_sub_pane_cp10

0x507f,	// (0x000067e8) list_choice_list_pane

0x5098,	// (0x00006801) list_single_choice_list_pane_ParamLimits

0x5098,	// (0x00006801) list_single_choice_list_pane

0x50b0,	// (0x00006819) list_single_choice_list_pane_g1

0xf514,	// (0x00010c7d) list_single_choice_list_pane_t1_ParamLimits

0xf514,	// (0x00010c7d) list_single_choice_list_pane_t1

0x50b8,	// (0x00006821) choice_list_pane_g1

0x50c0,	// (0x00006829) choice_list_pane_t1

0xe96c,	// (0x000100d5) input_focus_pane_cp11

0x01d9,	// (0x00001942) title_pane_stacon_g2_ParamLimits

0x01d9,	// (0x00001942) title_pane_stacon_g2

0x0002,

0xf69f,	// (0x00010e08) title_pane_stacon_g_ParamLimits

0xf69f,	// (0x00010e08) title_pane_stacon_g

0x0f31,	// (0x0000269a) cursor_press_pane

0xb602,	// (0x0000cd6b) popup_fep_hwr_window_ParamLimits

0xb602,	// (0x0000cd6b) popup_fep_hwr_window

0x163d,	// (0x00002da6) popup_fep_vkb_window_ParamLimits

0x163d,	// (0x00002da6) popup_fep_vkb_window

0x50ce,	// (0x00006837) cursor_press_pane_g1

0x0002,

0xfb0b,	// (0x00011274) fep_vkb_side_pane_g_ParamLimits

0x510f,	// (0x00006878) fep_hwr_candidate_pane_ParamLimits

0x510f,	// (0x00006878) fep_hwr_candidate_pane

0x5139,	// (0x000068a2) fep_hwr_side_pane_ParamLimits

0x5139,	// (0x000068a2) fep_hwr_side_pane

0x515b,	// (0x000068c4) fep_hwr_top_pane_ParamLimits

0x515b,	// (0x000068c4) fep_hwr_top_pane

0x5173,	// (0x000068dc) fep_hwr_write_pane_ParamLimits

0x5173,	// (0x000068dc) fep_hwr_write_pane

0xfb0b,	// (0x00011274) fep_vkb_side_pane_g

0x51ad,	// (0x00006916) fep_hwr_top_pane_g1

0x51bf,	// (0x00006928) fep_hwr_top_pane_g2

0x51d1,	// (0x0000693a) fep_hwr_top_pane_g3

0x0002,

0xfae7,	// (0x00011250) fep_hwr_top_pane_g

0x51e6,	// (0x0000694f) fep_hwr_top_text_pane

0x0646,	// (0x00001daf) fep_hwr_top_text_pane_g1

0x52c2,	// (0x00006a2b) fep_hwr_top_text_pane_t1

0x5322,	// (0x00006a8b) fep_hwr_candidate_pane_g1

0x5593,	// (0x00006cfc) fep_vkb_keypad_pane_g3_ParamLimits

0x5593,	// (0x00006cfc) fep_vkb_keypad_pane_g3

0x55bf,	// (0x00006d28) fep_vkb_keypad_pane_g4_ParamLimits

0x55bf,	// (0x00006d28) fep_vkb_keypad_pane_g4

0x5636,	// (0x00006d9f) fep_vkb_bottom_pane_g2_ParamLimits

0x5636,	// (0x00006d9f) fep_vkb_bottom_pane_g2

0x0001,

0xfb12,	// (0x0001127b) fep_vkb_bottom_pane_g_ParamLimits

0xfb12,	// (0x0001127b) fep_vkb_bottom_pane_g

0x5075,	// (0x000067de) cell_vkb_side_pane_g2

0x0001,

0xfb1c,	// (0x00011285) cell_vkb_side_pane_g

0x56c1,	// (0x00006e2a) cell_vkb_side_pane_t1

0x56cf,	// (0x00006e38) cell_vkb_side_pane_t1_copy1

0x5075,	// (0x000067de) bg_fep_vkb_candidate_pane_g2

0x5813,	// (0x00006f7c) cell_vkb_candidate_pane_ParamLimits

0x5356,	// (0x00006abf) aid_size_cell_vkb_ParamLimits

0x5356,	// (0x00006abf) aid_size_cell_vkb

0x5813,	// (0x00006f7c) cell_vkb_candidate_pane

0x584d,	// (0x00006fb6) bg_popup_fep_shadow_pane_g1

0xcabb,	// (0x0000e224) fep_vkb_bottom_pane_ParamLimits

0xcabb,	// (0x0000e224) fep_vkb_bottom_pane

0x5425,	// (0x00006b8e) fep_vkb_candidate_pane_ParamLimits

0x5425,	// (0x00006b8e) fep_vkb_candidate_pane

0xcae7,	// (0x0000e250) fep_vkb_keypad_pane_ParamLimits

0xcae7,	// (0x0000e250) fep_vkb_keypad_pane

0xcb0e,	// (0x0000e277) fep_vkb_side_pane_ParamLimits

0xcb0e,	// (0x0000e277) fep_vkb_side_pane

0xcb4a,	// (0x0000e2b3) fep_vkb_top_pane_ParamLimits

0xcb4a,	// (0x0000e2b3) fep_vkb_top_pane

0x54ec,	// (0x00006c55) fep_vkb_top_pane_g1_ParamLimits

0x54ec,	// (0x00006c55) fep_vkb_top_pane_g1

0x54fb,	// (0x00006c64) fep_vkb_top_pane_g2_ParamLimits

0x54fb,	// (0x00006c64) fep_vkb_top_pane_g2

0x550a,	// (0x00006c73) fep_vkb_top_pane_g3_ParamLimits

0x550a,	// (0x00006c73) fep_vkb_top_pane_g3

0x0003,

0xfb02,	// (0x0001126b) fep_vkb_top_pane_g_ParamLimits

0xfb02,	// (0x0001126b) fep_vkb_top_pane_g

0x5528,	// (0x00006c91) fep_vkb_top_text_pane_ParamLimits

0x5528,	// (0x00006c91) fep_vkb_top_text_pane

0xcb86,	// (0x0000e2ef) fep_vkb_side_pane_g1_ParamLimits

0xcb86,	// (0x0000e2ef) fep_vkb_side_pane_g1

0x5582,	// (0x00006ceb) grid_vkb_side_pane_ParamLimits

0x5582,	// (0x00006ceb) grid_vkb_side_pane

0x5855,	// (0x00006fbe) bg_popup_fep_shadow_pane_g2

0x585e,	// (0x00006fc7) bg_popup_fep_shadow_pane_g3

0x5866,	// (0x00006fcf) bg_popup_fep_shadow_pane_g4

0x586f,	// (0x00006fd8) bg_popup_fep_shadow_pane_g5

0x5879,	// (0x00006fe2) bg_popup_fep_shadow_pane_g6

0x5881,	// (0x00006fea) bg_popup_fep_shadow_pane_g7

0xf3fc,	// (0x00010b65) bg_popup_fep_shadow_pane_g8

0x55e1,	// (0x00006d4a) grid_vkb_keypad_number_pane_ParamLimits

0x55e1,	// (0x00006d4a) grid_vkb_keypad_number_pane

0x55f5,	// (0x00006d5e) grid_vkb_keypad_pane_ParamLimits

0x55f5,	// (0x00006d5e) grid_vkb_keypad_pane

0x561b,	// (0x00006d84) fep_vkb_bottom_pane_g1_ParamLimits

0x561b,	// (0x00006d84) fep_vkb_bottom_pane_g1

0x5644,	// (0x00006dad) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5644,	// (0x00006dad) grid_vkb_keypad_bottom_left_pane

0x5659,	// (0x00006dc2) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5659,	// (0x00006dc2) grid_vkb_keypad_bottom_right_pane

0x566e,	// (0x00006dd7) fep_vkb_top_text_pane_g1

0xcbcd,	// (0x0000e336) fep_vkb_top_text_pane_t1

0xcbdf,	// (0x0000e348) cell_vkb_side_pane_ParamLimits

0xcbdf,	// (0x0000e348) cell_vkb_side_pane

0x5075,	// (0x000067de) cell_vkb_side_pane_g1

0x56dd,	// (0x00006e46) cell_vkb_keypad_pane_ParamLimits

0x56dd,	// (0x00006e46) cell_vkb_keypad_pane

0x576a,	// (0x00006ed3) cell_vkb_keypad_pane_g1

0x0008,

0xfb2f,	// (0x00011298) bg_popup_fep_shadow_pane_g

0x5075,	// (0x000067de) cell_hwr_side_pane_g1

0x5075,	// (0x000067de) cell_hwr_side_pane_g2

0x5774,	// (0x00006edd) cell_vkb_keypad_pane_t1

0xcbf5,	// (0x0000e35e) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xcbf5,	// (0x0000e35e) cell_vkb_keypad_bottom_left_pane

0xcc0a,	// (0x0000e373) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xcc0a,	// (0x0000e373) cell_vkb_keypad_bottom_right_pane

0x5075,	// (0x000067de) cell_vkb_keypad_bottom_left_pane_g1

0x5075,	// (0x000067de) cell_vkb_keypad_bottom_right_pane_g1

0x57d8,	// (0x00006f41) cell_vkb_keypad_number_pane_ParamLimits

0x57d8,	// (0x00006f41) cell_vkb_keypad_number_pane

0x57f7,	// (0x00006f60) cell_vkb_keypad_number_pane_g1

0x5801,	// (0x00006f6a) cell_vkb_keypad_number_pane_g2

0x580a,	// (0x00006f73) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb21,	// (0x0001128a) cell_vkb_keypad_number_pane_g

0x5774,	// (0x00006edd) cell_vkb_keypad_number_pane_t1

0x5834,	// (0x00006f9d) fep_vkb_candidate_pane_g1

0x0001,

0xfb1c,	// (0x00011285) cell_hwr_side_pane_g

0x5893,	// (0x00006ffc) cell_hwr_side_pane_t1

0x58a1,	// (0x0000700a) cell_hwr_side_pane_t1_copy1

0x551a,	// (0x00006c83) cell_hwr_candidate_pane_g1

0x58f1,	// (0x0000705a) cell_hwr_candidate_pane_t1

0x5075,	// (0x000067de) cell_vkb_candidate_pane_g2

0x5945,	// (0x000070ae) cell_vkb_candidate_pane_t1

0x50d6,	// (0x0000683f) bg_popup_fep_shadow_pane_ParamLimits

0x50d6,	// (0x0000683f) bg_popup_fep_shadow_pane

0x518d,	// (0x000068f6) bg_fep_hwr_top_pane_g4

0x51fb,	// (0x00006964) bg_hwr_side_pane_g1_ParamLimits

0x51fb,	// (0x00006964) bg_hwr_side_pane_g1

0xca74,	// (0x0000e1dd) cell_hwr_side_pane_ParamLimits

0xca74,	// (0x0000e1dd) cell_hwr_side_pane

0x526d,	// (0x000069d6) fep_hwr_write_pane_g1_ParamLimits

0x526d,	// (0x000069d6) fep_hwr_write_pane_g1

0x527a,	// (0x000069e3) fep_hwr_write_pane_g2_ParamLimits

0x527a,	// (0x000069e3) fep_hwr_write_pane_g2

0x5287,	// (0x000069f0) fep_hwr_write_pane_g3_ParamLimits

0x5287,	// (0x000069f0) fep_hwr_write_pane_g3

0xca94,	// (0x0000e1fd) fep_hwr_write_pane_g4_ParamLimits

0xca94,	// (0x0000e1fd) fep_hwr_write_pane_g4

0x0005,

0xfaee,	// (0x00011257) fep_hwr_write_pane_g_ParamLimits

0xfaee,	// (0x00011257) fep_hwr_write_pane_g

0x518d,	// (0x000068f6) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x518d,	// (0x000068f6) bg_fep_hwr_candidate_pane_g2

0x52d0,	// (0x00006a39) cell_hwr_candidate_pane_ParamLimits

0x52d0,	// (0x00006a39) cell_hwr_candidate_pane

0x5322,	// (0x00006a8b) fep_hwr_candidate_pane_g1_ParamLimits

0x5384,	// (0x00006aed) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5384,	// (0x00006aed) bg_popup_fep_shadow_pane_cp2

0x551a,	// (0x00006c83) fep_vkb_top_pane_g4_ParamLimits

0x551a,	// (0x00006c83) fep_vkb_top_pane_g4

0x5560,	// (0x00006cc9) fep_vkb_side_pane_g2_ParamLimits

0x5560,	// (0x00006cc9) fep_vkb_side_pane_g2

0xacb0,	// (0x0000c419) list_setting_pane_t4_ParamLimits

0xacb0,	// (0x0000c419) list_setting_pane_t4

0xad2c,	// (0x0000c495) list_setting_number_pane_t5_ParamLimits

0xad2c,	// (0x0000c495) list_setting_number_pane_t5

0x069c,	// (0x00001e05) list_double_heading_pane_cp2_ParamLimits

0x069c,	// (0x00001e05) list_double_heading_pane_cp2

0x5953,	// (0x000070bc) list_double_heading_pane_g1_cp2_ParamLimits

0x5953,	// (0x000070bc) list_double_heading_pane_g1_cp2

0x595f,	// (0x000070c8) list_double_heading_pane_g2_cp2_ParamLimits

0x595f,	// (0x000070c8) list_double_heading_pane_g2_cp2

0x5973,	// (0x000070dc) list_double_heading_pane_t1_cp2_ParamLimits

0x5973,	// (0x000070dc) list_double_heading_pane_t1_cp2

0x5989,	// (0x000070f2) list_double_heading_pane_t2_cp2_ParamLimits

0x5989,	// (0x000070f2) list_double_heading_pane_t2_cp2

0xe964,	// (0x000100cd) aid_value_unit2

0xeb43,	// (0x000102ac) popup_preview_fixed_window

0xed7f,	// (0x000104e8) bg_popup_preview_window_pane_cp02

0x599b,	// (0x00007104) list_preview_fixed_pane

0x59e1,	// (0x0000714a) list_empty_pane_fp_ParamLimits

0x59e1,	// (0x0000714a) list_empty_pane_fp

0x59e1,	// (0x0000714a) list_single_cale_day_pane_fp_ParamLimits

0x59e1,	// (0x0000714a) list_single_cale_day_pane_fp

0x59e1,	// (0x0000714a) list_single_graphic_heading_pane_fp_ParamLimits

0x59e1,	// (0x0000714a) list_single_graphic_heading_pane_fp

0x59e1,	// (0x0000714a) list_single_graphic_pane_fp_ParamLimits

0x59e1,	// (0x0000714a) list_single_graphic_pane_fp

0x59e1,	// (0x0000714a) list_single_heading_pane_fp_ParamLimits

0x59e1,	// (0x0000714a) list_single_heading_pane_fp

0x59e1,	// (0x0000714a) list_single_pane_fp_ParamLimits

0x59e1,	// (0x0000714a) list_single_pane_fp

0x59fa,	// (0x00007163) list_single_pane_fp_g1_ParamLimits

0x59fa,	// (0x00007163) list_single_pane_fp_g1

0x5953,	// (0x000070bc) list_single_pane_fp_g2_ParamLimits

0x5953,	// (0x000070bc) list_single_pane_fp_g2

0x595f,	// (0x000070c8) list_single_pane_fp_g3_ParamLimits

0x595f,	// (0x000070c8) list_single_pane_fp_g3

0x5a06,	// (0x0000716f) list_single_pane_fp_g4_ParamLimits

0x5a06,	// (0x0000716f) list_single_pane_fp_g4

0x0003,

0xfb50,	// (0x000112b9) list_single_pane_fp_g_ParamLimits

0xfb50,	// (0x000112b9) list_single_pane_fp_g

0x5a12,	// (0x0000717b) list_single_pane_fp_t1_ParamLimits

0x5a12,	// (0x0000717b) list_single_pane_fp_t1

0x5a29,	// (0x00007192) list_single_graphic_pane_fp_g1_ParamLimits

0x5a29,	// (0x00007192) list_single_graphic_pane_fp_g1

0x59fa,	// (0x00007163) list_single_graphic_pane_fp_g2_ParamLimits

0x59fa,	// (0x00007163) list_single_graphic_pane_fp_g2

0x5953,	// (0x000070bc) list_single_graphic_pane_fp_g3_ParamLimits

0x5953,	// (0x000070bc) list_single_graphic_pane_fp_g3

0x595f,	// (0x000070c8) list_single_graphic_pane_fp_g4_ParamLimits

0x595f,	// (0x000070c8) list_single_graphic_pane_fp_g4

0x5a06,	// (0x0000716f) list_single_graphic_pane_fp_g5_ParamLimits

0x5a06,	// (0x0000716f) list_single_graphic_pane_fp_g5

0x0004,

0xfb59,	// (0x000112c2) list_single_graphic_pane_fp_g_ParamLimits

0xfb59,	// (0x000112c2) list_single_graphic_pane_fp_g

0x5a35,	// (0x0000719e) list_single_graphic_pane_fp_t1_ParamLimits

0x5a35,	// (0x0000719e) list_single_graphic_pane_fp_t1

0x5a29,	// (0x00007192) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x5a29,	// (0x00007192) list_single_graphic_heading_pane_fp_g1

0x59fa,	// (0x00007163) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x59fa,	// (0x00007163) list_single_graphic_heading_pane_fp_g2

0x5953,	// (0x000070bc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x5953,	// (0x000070bc) list_single_graphic_heading_pane_fp_g3

0x595f,	// (0x000070c8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x595f,	// (0x000070c8) list_single_graphic_heading_pane_fp_g4

0x5a06,	// (0x0000716f) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x5a06,	// (0x0000716f) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb59,	// (0x000112c2) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb59,	// (0x000112c2) list_single_graphic_heading_pane_fp_g

0x5a4b,	// (0x000071b4) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x5a4b,	// (0x000071b4) list_single_graphic_heading_pane_fp_t1

0x5a61,	// (0x000071ca) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5a61,	// (0x000071ca) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb64,	// (0x000112cd) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb64,	// (0x000112cd) list_single_graphic_heading_pane_fp_t

0x5a73,	// (0x000071dc) list_single_cale_day_pane_fp_g1_ParamLimits

0x5a73,	// (0x000071dc) list_single_cale_day_pane_fp_g1

0x5aab,	// (0x00007214) list_single_cale_day_pane_fp_g2_ParamLimits

0x5aab,	// (0x00007214) list_single_cale_day_pane_fp_g2

0x5ab7,	// (0x00007220) list_single_cale_day_pane_fp_g3_ParamLimits

0x5ab7,	// (0x00007220) list_single_cale_day_pane_fp_g3

0x5adf,	// (0x00007248) list_single_cale_day_pane_fp_g4_ParamLimits

0x5adf,	// (0x00007248) list_single_cale_day_pane_fp_g4

0x5b03,	// (0x0000726c) list_single_cale_day_pane_fp_g5_ParamLimits

0x5b03,	// (0x0000726c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb69,	// (0x000112d2) list_single_cale_day_pane_fp_g_ParamLimits

0xfb69,	// (0x000112d2) list_single_cale_day_pane_fp_g

0x5b27,	// (0x00007290) list_single_cale_day_pane_fp_t1_ParamLimits

0x5b27,	// (0x00007290) list_single_cale_day_pane_fp_t1

0x5b4d,	// (0x000072b6) list_single_cale_day_pane_fp_t2_ParamLimits

0x5b4d,	// (0x000072b6) list_single_cale_day_pane_fp_t2

0x5b66,	// (0x000072cf) list_single_cale_day_pane_fp_t3_ParamLimits

0x5b66,	// (0x000072cf) list_single_cale_day_pane_fp_t3

0x0002,

0xfb74,	// (0x000112dd) list_single_cale_day_pane_fp_t_ParamLimits

0xfb74,	// (0x000112dd) list_single_cale_day_pane_fp_t

0x59fa,	// (0x00007163) list_empty_pane_fp_g1_ParamLimits

0x59fa,	// (0x00007163) list_empty_pane_fp_g1

0x5b7f,	// (0x000072e8) list_empty_pane_fp_t1

0x5b8d,	// (0x000072f6) list_empty_pane_fp_t2

0x0001,

0xfb7b,	// (0x000112e4) list_empty_pane_fp_t

0x59fa,	// (0x00007163) list_single_heading_pane_fp_g1_ParamLimits

0x59fa,	// (0x00007163) list_single_heading_pane_fp_g1

0x5953,	// (0x000070bc) list_single_heading_pane_fp_g2_ParamLimits

0x5953,	// (0x000070bc) list_single_heading_pane_fp_g2

0x595f,	// (0x000070c8) list_single_heading_pane_fp_g3_ParamLimits

0x595f,	// (0x000070c8) list_single_heading_pane_fp_g3

0x0002,

0xfb80,	// (0x000112e9) list_single_heading_pane_fp_g_ParamLimits

0xfb80,	// (0x000112e9) list_single_heading_pane_fp_g

0x5b9b,	// (0x00007304) list_single_heading_pane_fp_t1_ParamLimits

0x5b9b,	// (0x00007304) list_single_heading_pane_fp_t1

0x5bad,	// (0x00007316) list_single_heading_pane_fp_t2_ParamLimits

0x5bad,	// (0x00007316) list_single_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x000112f0) list_single_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x000112f0) list_single_heading_pane_fp_t

0x0020,	// (0x00001789) aid_size_cell_fast

0xed62,	// (0x000104cb) soft_indicator_pane_cp1_t1

0x005d,	// (0x000017c6) cell_app_pane_cp2_ParamLimits

0x005d,	// (0x000017c6) cell_app_pane_cp2

0x50f8,	// (0x00006861) fep_hwr_candidate_drop_down_list_pane

0x533c,	// (0x00006aa5) fep_hwr_candidate_pane_g3_ParamLimits

0x533c,	// (0x00006aa5) fep_hwr_candidate_pane_g3

0x5349,	// (0x00006ab2) fep_hwr_candidate_pane_g4_ParamLimits

0x5349,	// (0x00006ab2) fep_hwr_candidate_pane_g4

0x0002,

0xfafb,	// (0x00011264) fep_hwr_candidate_pane_g_ParamLimits

0xfafb,	// (0x00011264) fep_hwr_candidate_pane_g

0x5414,	// (0x00006b7d) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5414,	// (0x00006b7d) fep_vkb_candidate_drop_down_list_pane

0x583c,	// (0x00006fa5) fep_vkb_candidate_pane_g3

0x5844,	// (0x00006fad) fep_vkb_candidate_pane_g4

0x0002,

0xfb28,	// (0x00011291) fep_vkb_candidate_pane_g

0x551a,	// (0x00006c83) cell_hwr_candidate_pane_g1_ParamLimits

0x58af,	// (0x00007018) cell_hwr_candidate_pane_g3_ParamLimits

0x58af,	// (0x00007018) cell_hwr_candidate_pane_g3

0x58d0,	// (0x00007039) cell_hwr_candidate_pane_g4_ParamLimits

0x58d0,	// (0x00007039) cell_hwr_candidate_pane_g4

0x0002,

0xfb42,	// (0x000112ab) cell_hwr_candidate_pane_g_ParamLimits

0xfb42,	// (0x000112ab) cell_hwr_candidate_pane_g

0x590f,	// (0x00007078) cell_vkb_candidate_pane_g3_ParamLimits

0x590f,	// (0x00007078) cell_vkb_candidate_pane_g3

0x592a,	// (0x00007093) cell_vkb_candidate_pane_g4_ParamLimits

0x592a,	// (0x00007093) cell_vkb_candidate_pane_g4

0x5bc3,	// (0x0000732c) cell_app_pane_cp2_g1_ParamLimits

0x5bc3,	// (0x0000732c) cell_app_pane_cp2_g1

0x5be1,	// (0x0000734a) cell_app_pane_cp2_g2_ParamLimits

0x5be1,	// (0x0000734a) cell_app_pane_cp2_g2

0x0001,

0xfb8c,	// (0x000112f5) cell_app_pane_cp2_g_ParamLimits

0xfb8c,	// (0x000112f5) cell_app_pane_cp2_g

0x5bed,	// (0x00007356) cell_app_pane_cp2_t1_ParamLimits

0x5bed,	// (0x00007356) cell_app_pane_cp2_t1

0xf321,	// (0x00010a8a) grid_highlight_pane_cp1_ParamLimits

0xf321,	// (0x00010a8a) grid_highlight_pane_cp1

0x5bff,	// (0x00007368) cell_hwr_candidate_pane_cp1_ParamLimits

0x5bff,	// (0x00007368) cell_hwr_candidate_pane_cp1

0x551a,	// (0x00006c83) fep_hwr_candidate_drop_down_list_pane_g1

0x5c23,	// (0x0000738c) fep_hwr_candidate_drop_down_list_pane_g2

0x5c30,	// (0x00007399) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb91,	// (0x000112fa) fep_hwr_candidate_drop_down_list_pane_g

0x5c3d,	// (0x000073a6) fep_hwr_candidate_drop_down_list_scroll_pane

0x5c46,	// (0x000073af) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5c46,	// (0x000073af) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5c53,	// (0x000073bc) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5c53,	// (0x000073bc) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5c60,	// (0x000073c9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5c60,	// (0x000073c9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x590f,	// (0x00007078) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x590f,	// (0x00007078) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x592a,	// (0x00007093) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x592a,	// (0x00007093) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5c6d,	// (0x000073d6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5c6d,	// (0x000073d6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x5c88,	// (0x000073f1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5c88,	// (0x000073f1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5ca3,	// (0x0000740c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5ca3,	// (0x0000740c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb98,	// (0x00011301) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb98,	// (0x00011301) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5cbe,	// (0x00007427) cell_vkb_candidate_pane_cp1_ParamLimits

0x5cbe,	// (0x00007427) cell_vkb_candidate_pane_cp1

0x551a,	// (0x00006c83) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x551a,	// (0x00006c83) fep_vkb_candidate_drop_down_list_pane_g1

0x5c23,	// (0x0000738c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5c23,	// (0x0000738c) fep_vkb_candidate_drop_down_list_pane_g2

0x5c30,	// (0x00007399) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5c30,	// (0x00007399) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb91,	// (0x000112fa) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb91,	// (0x000112fa) fep_vkb_candidate_drop_down_list_pane_g

0x5ce4,	// (0x0000744d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x5ce4,	// (0x0000744d) fep_vkb_candidate_drop_down_list_scroll_pane

0x5cf1,	// (0x0000745a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5cf1,	// (0x0000745a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5cfe,	// (0x00007467) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5cfe,	// (0x00007467) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5d0a,	// (0x00007473) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5d0a,	// (0x00007473) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x58af,	// (0x00007018) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x58af,	// (0x00007018) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x58d0,	// (0x00007039) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x58d0,	// (0x00007039) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5d16,	// (0x0000747f) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5d16,	// (0x0000747f) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5d37,	// (0x000074a0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5d37,	// (0x000074a0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5d58,	// (0x000074c1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5d58,	// (0x000074c1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba9,	// (0x00011312) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba9,	// (0x00011312) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa5b5,	// (0x0000bd1e) title_pane_g1_ParamLimits

0xa5c8,	// (0x0000bd31) title_pane_g2_ParamLimits

0xf529,	// (0x00010c92) title_pane_g_ParamLimits

0x0636,	// (0x00001d9f) aid_call2_pane

0x063e,	// (0x00001da7) aid_call_pane

0x0646,	// (0x00001daf) popup_clock_analogue_window_g1

0x0646,	// (0x00001daf) popup_clock_analogue_window_g2

0x064e,	// (0x00001db7) popup_clock_analogue_window_g3

0x0657,	// (0x00001dc0) popup_clock_analogue_window_g4

0xe976,	// (0x000100df) popup_clock_analogue_window_g5

0x0004,

0xf6ce,	// (0x00010e37) popup_clock_analogue_window_g

0x065f,	// (0x00001dc8) popup_clock_analogue_window_t1

0x070c,	// (0x00001e75) clock_digital_number_pane_ParamLimits

0x070c,	// (0x00001e75) clock_digital_number_pane

0x0718,	// (0x00001e81) clock_digital_number_pane_cp02_ParamLimits

0x0718,	// (0x00001e81) clock_digital_number_pane_cp02

0x0724,	// (0x00001e8d) clock_digital_number_pane_cp03_ParamLimits

0x0724,	// (0x00001e8d) clock_digital_number_pane_cp03

0x0730,	// (0x00001e99) clock_digital_number_pane_cp04_ParamLimits

0x0730,	// (0x00001e99) clock_digital_number_pane_cp04

0x073c,	// (0x00001ea5) clock_digital_separator_pane_ParamLimits

0x073c,	// (0x00001ea5) clock_digital_separator_pane

0x0748,	// (0x00001eb1) popup_clock_digital_window_t1_ParamLimits

0x0748,	// (0x00001eb1) popup_clock_digital_window_t1

0xe976,	// (0x000100df) clock_digital_number_pane_g1

0xe976,	// (0x000100df) clock_digital_number_pane_g2

0x0001,

0xf6d9,	// (0x00010e42) clock_digital_number_pane_g

0xe976,	// (0x000100df) clock_digital_separator_pane_g1

0xe976,	// (0x000100df) clock_digital_separator_pane_g2

0x0001,

0xf6d9,	// (0x00010e42) clock_digital_separator_pane_g

0xbc71,	// (0x0000d3da) aid_fill_nsta_ParamLimits

0xbda9,	// (0x0000d512) indicator_nsta_pane_ParamLimits

0x1de7,	// (0x00003550) popup_clock_analogue_window

0x1de7,	// (0x00003550) popup_clock_digital_window

0xc86d,	// (0x0000dfd6) grid_indicator_nsta_pane_ParamLimits

0x4a26,	// (0x0000618f) clock_nsta_pane_t2

0x0001,

0xfa7b,	// (0x000111e4) clock_nsta_pane_t

0x041f,	// (0x00001b88) aid_size_max_handle

0xb013,	// (0x0000c77c) aid_size_min_handle

0x0f31,	// (0x0000269a) editor_scroll_pane

0x5d73,	// (0x000074dc) ex_editor_pane

0xf4ef,	// (0x00010c58) scroll_pane_cp13

0xf22d,	// (0x00010996) scroll_pane_cp14

0x0694,	// (0x00001dfd) scroll_pane_cp36

0xb0a0,	// (0x0000c809) list_single_graphic_hl_pane_cp2_ParamLimits

0xb0a0,	// (0x0000c809) list_single_graphic_hl_pane_cp2

0xc6e5,	// (0x0000de4e) list_single_graphic_hl_pane_ParamLimits

0xc6e5,	// (0x0000de4e) list_single_graphic_hl_pane

0x5d7b,	// (0x000074e4) aid_size_min_hl_cp1

0x5d84,	// (0x000074ed) list_highlight_pane_cp34_ParamLimits

0x5d84,	// (0x000074ed) list_highlight_pane_cp34

0x5d95,	// (0x000074fe) list_single_graphic_hl_pane_g1_ParamLimits

0x5d95,	// (0x000074fe) list_single_graphic_hl_pane_g1

0xf256,	// (0x000109bf) list_single_graphic_hl_pane_g2_ParamLimits

0xf256,	// (0x000109bf) list_single_graphic_hl_pane_g2

0xf256,	// (0x000109bf) list_single_graphic_hl_pane_g3_ParamLimits

0xf256,	// (0x000109bf) list_single_graphic_hl_pane_g3

0x67a5,	// (0x00007f0e) list_single_graphic_hl_pane_g4_ParamLimits

0x67a5,	// (0x00007f0e) list_single_graphic_hl_pane_g4

0xcc25,	// (0x0000e38e) list_single_graphic_hl_pane_g5_ParamLimits

0xcc25,	// (0x0000e38e) list_single_graphic_hl_pane_g5

0x0004,

0xfbba,	// (0x00011323) list_single_graphic_hl_pane_g_ParamLimits

0xfbba,	// (0x00011323) list_single_graphic_hl_pane_g

0xcc39,	// (0x0000e3a2) list_single_graphic_hl_pane_t1_ParamLimits

0xcc39,	// (0x0000e3a2) list_single_graphic_hl_pane_t1

0x5dd8,	// (0x00007541) aid_size_min_hl_cp2

0x5de1,	// (0x0000754a) list_highlight_pane_cp34_cp2_ParamLimits

0x5de1,	// (0x0000754a) list_highlight_pane_cp34_cp2

0x5d95,	// (0x000074fe) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5d95,	// (0x000074fe) list_single_graphic_hl_pane_g1_cp2

0x5dee,	// (0x00007557) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5dee,	// (0x00007557) list_single_graphic_hl_pane_g2_cp2

0x5dfa,	// (0x00007563) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5dfa,	// (0x00007563) list_single_graphic_hl_pane_g3_cp2

0x1f4e,	// (0x000036b7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1f4e,	// (0x000036b7) list_single_graphic_hl_pane_g4_cp2

0x5e08,	// (0x00007571) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5e08,	// (0x00007571) list_single_graphic_hl_pane_g5_cp2

0xb3e0,	// (0x0000cb49) control_pane_g4_ParamLimits

0xb3e0,	// (0x0000cb49) control_pane_g4

0x1493,	// (0x00002bfc) bg_popup_sub_pane_cp10_ParamLimits

0x507f,	// (0x000067e8) list_choice_list_pane_ParamLimits

0x508e,	// (0x000067f7) scroll_pane_cp23

0xed7f,	// (0x000104e8) bg_popup_preview_window_pane_cp02_ParamLimits

0x599b,	// (0x00007104) list_preview_fixed_pane_ParamLimits

0x59b1,	// (0x0000711a) list_preview_fixed_pane_cp_ParamLimits

0x59b1,	// (0x0000711a) list_preview_fixed_pane_cp

0x59bd,	// (0x00007126) popup_preview_fixed_window_g1_ParamLimits

0x59bd,	// (0x00007126) popup_preview_fixed_window_g1

0x59c9,	// (0x00007132) popup_preview_fixed_window_g2_ParamLimits

0x59c9,	// (0x00007132) popup_preview_fixed_window_g2

0x0002,

0xfb49,	// (0x000112b2) popup_preview_fixed_window_g_ParamLimits

0xfb49,	// (0x000112b2) popup_preview_fixed_window_g

0x02be,	// (0x00001a27) aid_navi_side_left_pane_ParamLimits

0x02d3,	// (0x00001a3c) aid_navi_side_right_pane_ParamLimits

0x02eb,	// (0x00001a54) navi_icon_pane_stacon_ParamLimits

0x02ff,	// (0x00001a68) navi_navi_pane_stacon_ParamLimits

0x02eb,	// (0x00001a54) navi_text_pane_stacon_ParamLimits

0xe96c,	// (0x000100d5) main_text_info_pane

0x5e32,	// (0x0000759b) listscroll_text_info_pane

0x5e3a,	// (0x000075a3) list_text_info_pane_ParamLimits

0x5e3a,	// (0x000075a3) list_text_info_pane

0x5e49,	// (0x000075b2) scroll_pane_cp24_ParamLimits

0x5e49,	// (0x000075b2) scroll_pane_cp24

0xcc4f,	// (0x0000e3b8) list_text_info_pane_t1_ParamLimits

0xcc4f,	// (0x0000e3b8) list_text_info_pane_t1

0xb566,	// (0x0000cccf) popup_fast_swap2_window_ParamLimits

0xb566,	// (0x0000cccf) popup_fast_swap2_window

0x5e8c,	// (0x000075f5) aid_size_cell_fast2

0xe96c,	// (0x000100d5) bg_popup_window_pane_cp17

0x26d0,	// (0x00003e39) heading_pane_cp2

0x26d8,	// (0x00003e41) listscroll_fast2_pane

0x5e96,	// (0x000075ff) grid_fast2_pane

0x5ea0,	// (0x00007609) listscroll_fast2_pane_g1

0x5eaa,	// (0x00007613) listscroll_fast2_pane_g2

0x0001,

0xfbc5,	// (0x0001132e) listscroll_fast2_pane_g

0xf4ef,	// (0x00010c58) scroll_pane_cp26

0x5eb4,	// (0x0000761d) cell_fast2_pane_ParamLimits

0x5eb4,	// (0x0000761d) cell_fast2_pane

0x5ecb,	// (0x00007634) cell_fast2_pane_g1

0x5ed4,	// (0x0000763d) cell_fast2_pane_g2

0x5edd,	// (0x00007646) cell_fast2_pane_g3

0x0002,

0xfbca,	// (0x00011333) cell_fast2_pane_g

0xeff4,	// (0x0001075d) grid_highlight_pane_cp9

0xf009,	// (0x00010772) main_eswt_pane_ParamLimits

0xf009,	// (0x00010772) main_eswt_pane

0x5e5e,	// (0x000075c7) list_single_text_info_pane

0x5ee5,	// (0x0000764e) eswt_ctrl_button_pane

0x5ee5,	// (0x0000764e) eswt_ctrl_canvas_pane

0x5eed,	// (0x00007656) eswt_ctrl_combo_pane

0x5ee5,	// (0x0000764e) eswt_ctrl_default_pane

0x5ee5,	// (0x0000764e) eswt_ctrl_label_pane

0x5ef5,	// (0x0000765e) eswt_ctrl_wait_pane

0x5efd,	// (0x00007666) eswt_shell_pane

0xe96c,	// (0x000100d5) listscroll_eswt_app_pane

0x5f1d,	// (0x00007686) popup_eswt_tasktip_window_ParamLimits

0x5f1d,	// (0x00007686) popup_eswt_tasktip_window

0x2251,	// (0x000039ba) bg_popup_window_pane_cp18

0x5f2e,	// (0x00007697) eswt_control_pane_g1_ParamLimits

0x5f2e,	// (0x00007697) eswt_control_pane_g1

0x5f3b,	// (0x000076a4) eswt_control_pane_g2_ParamLimits

0x5f3b,	// (0x000076a4) eswt_control_pane_g2

0x5f48,	// (0x000076b1) eswt_control_pane_g3_ParamLimits

0x5f48,	// (0x000076b1) eswt_control_pane_g3

0x5f55,	// (0x000076be) eswt_control_pane_g4_ParamLimits

0x5f55,	// (0x000076be) eswt_control_pane_g4

0x0003,

0xfbd1,	// (0x0001133a) eswt_control_pane_g_ParamLimits

0xfbd1,	// (0x0001133a) eswt_control_pane_g

0xf321,	// (0x00010a8a) bg_button_pane_ParamLimits

0xf321,	// (0x00010a8a) bg_button_pane

0xf009,	// (0x00010772) common_borders_pane_copy2_ParamLimits

0xf009,	// (0x00010772) common_borders_pane_copy2

0x5f62,	// (0x000076cb) control_button_pane_g1_ParamLimits

0x5f62,	// (0x000076cb) control_button_pane_g1

0x5f6e,	// (0x000076d7) control_button_pane_g2_ParamLimits

0x5f6e,	// (0x000076d7) control_button_pane_g2

0x5f7a,	// (0x000076e3) control_button_pane_g3_ParamLimits

0x5f7a,	// (0x000076e3) control_button_pane_g3

0x0002,

0xfbda,	// (0x00011343) control_button_pane_g_ParamLimits

0xfbda,	// (0x00011343) control_button_pane_g

0x5f8e,	// (0x000076f7) control_button_pane_t1

0x5f9c,	// (0x00007705) control_button_pane_t2

0x0001,

0xfbe1,	// (0x0001134a) control_button_pane_t

0x20b6,	// (0x0000381f) bg_button_pane_g1

0x20be,	// (0x00003827) bg_button_pane_g2

0x20c6,	// (0x0000382f) bg_button_pane_g3

0x20ce,	// (0x00003837) bg_button_pane_g4

0x20d6,	// (0x0000383f) bg_button_pane_g5

0x20de,	// (0x00003847) bg_button_pane_g6

0x20e6,	// (0x0000384f) bg_button_pane_g7

0x20ee,	// (0x00003857) bg_button_pane_g8

0x20f6,	// (0x0000385f) bg_button_pane_g9

0x0008,

0xf830,	// (0x00010f99) bg_button_pane_g

0x503a,	// (0x000067a3) common_borders_pane_ParamLimits

0x503a,	// (0x000067a3) common_borders_pane

0x5f2e,	// (0x00007697) eswt_control_pane_g1_copy1_ParamLimits

0x5f2e,	// (0x00007697) eswt_control_pane_g1_copy1

0x5f3b,	// (0x000076a4) eswt_control_pane_g2_copy1_ParamLimits

0x5f3b,	// (0x000076a4) eswt_control_pane_g2_copy1

0x5f48,	// (0x000076b1) eswt_control_pane_g3_copy1_ParamLimits

0x5f48,	// (0x000076b1) eswt_control_pane_g3_copy1

0x5f55,	// (0x000076be) eswt_control_pane_g4_copy1_ParamLimits

0x5f55,	// (0x000076be) eswt_control_pane_g4_copy1

0x5075,	// (0x000067de) bg_eswt_ctrl_canvas_pane_g1

0x503a,	// (0x000067a3) common_borders_pane_cp2_ParamLimits

0x503a,	// (0x000067a3) common_borders_pane_cp2

0x503a,	// (0x000067a3) common_borders_pane_cp3_ParamLimits

0x503a,	// (0x000067a3) common_borders_pane_cp3

0x5faa,	// (0x00007713) separator_horizontal_pane

0x5fb2,	// (0x0000771b) separator_vertical_pane

0x5f2e,	// (0x00007697) eswt_control_pane_g1_copy2_ParamLimits

0x5f2e,	// (0x00007697) eswt_control_pane_g1_copy2

0x5f3b,	// (0x000076a4) eswt_control_pane_g2_copy2_ParamLimits

0x5f3b,	// (0x000076a4) eswt_control_pane_g2_copy2

0x5f48,	// (0x000076b1) eswt_control_pane_g3_copy2_ParamLimits

0x5f48,	// (0x000076b1) eswt_control_pane_g3_copy2

0x5f55,	// (0x000076be) eswt_control_pane_g4_copy2_ParamLimits

0x5f55,	// (0x000076be) eswt_control_pane_g4_copy2

0xe96c,	// (0x000100d5) common_borders_pane_cp4

0x5fbb,	// (0x00007724) separator_horizontal_pane_g1

0x5fc4,	// (0x0000772d) separator_horizontal_pane_g2

0x5fcd,	// (0x00007736) separator_horizontal_pane_g3

0x0002,

0xfbe6,	// (0x0001134f) separator_horizontal_pane_g

0x5f2e,	// (0x00007697) eswt_control_pane_g1_copy3_ParamLimits

0x5f2e,	// (0x00007697) eswt_control_pane_g1_copy3

0x5f3b,	// (0x000076a4) eswt_control_pane_g2_copy3_ParamLimits

0x5f3b,	// (0x000076a4) eswt_control_pane_g2_copy3

0x5f48,	// (0x000076b1) eswt_control_pane_g3_copy3_ParamLimits

0x5f48,	// (0x000076b1) eswt_control_pane_g3_copy3

0x5f55,	// (0x000076be) eswt_control_pane_g4_copy3_ParamLimits

0x5f55,	// (0x000076be) eswt_control_pane_g4_copy3

0xe96c,	// (0x000100d5) common_borders_pane_cp5

0x5fd6,	// (0x0000773f) separator_vertical_pane_g1

0x5fdf,	// (0x00007748) separator_vertical_pane_g2

0x5fe8,	// (0x00007751) separator_vertical_pane_g3

0x0002,

0xfbed,	// (0x00011356) separator_vertical_pane_g

0x5f2e,	// (0x00007697) eswt_control_pane_g1_copy4_ParamLimits

0x5f2e,	// (0x00007697) eswt_control_pane_g1_copy4

0x5f3b,	// (0x000076a4) eswt_control_pane_g2_copy4_ParamLimits

0x5f3b,	// (0x000076a4) eswt_control_pane_g2_copy4

0x5f48,	// (0x000076b1) eswt_control_pane_g3_copy4_ParamLimits

0x5f48,	// (0x000076b1) eswt_control_pane_g3_copy4

0x5f55,	// (0x000076be) eswt_control_pane_g4_copy4_ParamLimits

0x5f55,	// (0x000076be) eswt_control_pane_g4_copy4

0xcc71,	// (0x0000e3da) eswt_ctrl_combo_button_pane

0xcc79,	// (0x0000e3e2) eswt_ctrl_input_pane

0xcc81,	// (0x0000e3ea) popup_choice_list_window_cp70

0xcc89,	// (0x0000e3f2) eswt_ctrl_input_pane_t1

0xe96c,	// (0x000100d5) input_focus_pane_cp70

0x503a,	// (0x000067a3) bg_button_pane_cp70_ParamLimits

0x503a,	// (0x000067a3) bg_button_pane_cp70

0xcc97,	// (0x0000e400) eswt_ctrl_combo_button_pane_g1

0x601f,	// (0x00007788) wait_bar_pane_cp70

0x2251,	// (0x000039ba) bg_popup_window_pane_cp70_ParamLimits

0x2251,	// (0x000039ba) bg_popup_window_pane_cp70

0x6027,	// (0x00007790) popup_eswt_tasktip_window_t1

0x603d,	// (0x000077a6) wait_bar_pane_cp71_ParamLimits

0x603d,	// (0x000077a6) wait_bar_pane_cp71

0x6049,	// (0x000077b2) grid_eswt_app_pane

0x0483,	// (0x00001bec) scroll_pane_cp70

0xcc9f,	// (0x0000e408) cell_eswt_app_pane_ParamLimits

0xcc9f,	// (0x0000e408) cell_eswt_app_pane

0xccd1,	// (0x0000e43a) cell_eswt_app_pane_g1_ParamLimits

0xccd1,	// (0x0000e43a) cell_eswt_app_pane_g1

0xcd00,	// (0x0000e469) cell_eswt_app_pane_g2_ParamLimits

0xcd00,	// (0x0000e469) cell_eswt_app_pane_g2

0x0001,

0xfbf4,	// (0x0001135d) cell_eswt_app_pane_g_ParamLimits

0xfbf4,	// (0x0001135d) cell_eswt_app_pane_g

0xcd29,	// (0x0000e492) cell_eswt_app_pane_t1_ParamLimits

0xcd29,	// (0x0000e492) cell_eswt_app_pane_t1

0x610e,	// (0x00007877) grid_highlight_pane_cp70_ParamLimits

0x610e,	// (0x00007877) grid_highlight_pane_cp70

0x0df7,	// (0x00002560) set_content_pane_g1

0xb372,	// (0x0000cadb) status_small_volume_pane

0x611a,	// (0x00007883) status_small_volume_pane_g1

0x6122,	// (0x0000788b) volume_small2_pane

0x612b,	// (0x00007894) volume_small2_pane_g1

0x6134,	// (0x0000789d) volume_small2_pane_g2

0x613d,	// (0x000078a6) volume_small2_pane_g3

0x6146,	// (0x000078af) volume_small2_pane_g4

0x614f,	// (0x000078b8) volume_small2_pane_g5

0x6158,	// (0x000078c1) volume_small2_pane_g6

0x6161,	// (0x000078ca) volume_small2_pane_g7

0x616a,	// (0x000078d3) volume_small2_pane_g8

0x6173,	// (0x000078dc) volume_small2_pane_g9

0x617c,	// (0x000078e5) volume_small2_pane_g10

0x0009,

0xfbf9,	// (0x00011362) volume_small2_pane_g

0x566e,	// (0x00006dd7) fep_vkb_top_text_pane_g1_ParamLimits

0xcbcd,	// (0x0000e336) fep_vkb_top_text_pane_t1_ParamLimits

0x59d5,	// (0x0000713e) popup_preview_fixed_window_g3_ParamLimits

0x59d5,	// (0x0000713e) popup_preview_fixed_window_g3

0xbc04,	// (0x0000d36d) popup_toolbar_trans_pane

0xc504,	// (0x0000dc6d) aid_height_set_list_ParamLimits

0x38e7,	// (0x00005050) aid_size_parent_ParamLimits

0x1493,	// (0x00002bfc) list_highlight_pane_cp2_ParamLimits

0x0df7,	// (0x00002560) set_content_pane_g1_ParamLimits

0xc6f9,	// (0x0000de62) list_single_image_pane_ParamLimits

0xc6f9,	// (0x0000de62) list_single_image_pane

0xcd5b,	// (0x0000e4c4) aid_size_cell_image_ParamLimits

0xcd5b,	// (0x0000e4c4) aid_size_cell_image

0xcd68,	// (0x0000e4d1) grid_single_image_pane_ParamLimits

0xcd68,	// (0x0000e4d1) grid_single_image_pane

0xf347,	// (0x00010ab0) list_single_image_pane_g1_ParamLimits

0xf347,	// (0x00010ab0) list_single_image_pane_g1

0xf353,	// (0x00010abc) list_single_image_pane_g2_ParamLimits

0xf353,	// (0x00010abc) list_single_image_pane_g2

0x0001,

0xfc0e,	// (0x00011377) list_single_image_pane_g_ParamLimits

0xfc0e,	// (0x00011377) list_single_image_pane_g

0x61a0,	// (0x00007909) list_single_image_pane_t1_ParamLimits

0x61a0,	// (0x00007909) list_single_image_pane_t1

0xcd76,	// (0x0000e4df) cell_image_list_pane_ParamLimits

0xcd76,	// (0x0000e4df) cell_image_list_pane

0xcd8c,	// (0x0000e4f5) cell_image_list_pane_g1

0xcd95,	// (0x0000e4fe) cell_image_list_pane_g2

0x0001,

0xfc13,	// (0x0001137c) cell_image_list_pane_g

0x61e0,	// (0x00007949) aid_size_cell_tb_trans_pane

0xf321,	// (0x00010a8a) bg_tb_trans_pane

0x61f2,	// (0x0000795b) grid_tb_trans_pane

0x20b6,	// (0x0000381f) bg_tb_trans_pane_g1

0x20be,	// (0x00003827) bg_tb_trans_pane_g2

0x20c6,	// (0x0000382f) bg_tb_trans_pane_g3

0x20ce,	// (0x00003837) bg_tb_trans_pane_g4

0x20d6,	// (0x0000383f) bg_tb_trans_pane_g5

0x20ee,	// (0x00003857) bg_tb_trans_pane_g6

0x20f6,	// (0x0000385f) bg_tb_trans_pane_g7

0x20de,	// (0x00003847) bg_tb_trans_pane_g8

0x20e6,	// (0x0000384f) bg_tb_trans_pane_g9

0x0008,

0xfc18,	// (0x00011381) bg_tb_trans_pane_g

0x6206,	// (0x0000796f) cell_toolbar_trans_pane_ParamLimits

0x6206,	// (0x0000796f) cell_toolbar_trans_pane

0x5075,	// (0x000067de) cell_toolbar_trans_pane_g1

0xc950,	// (0x0000e0b9) list_form2_midp_pane_t1

0xc95e,	// (0x0000e0c7) list_form2_midp_pane_t2

0x0001,

0xfac1,	// (0x0001122a) list_form2_midp_pane_t

0x4c76,	// (0x000063df) scroll_pane_cp51_ParamLimits

0x4e90,	// (0x000065f9) form2_midp_wait_pane_g1

0x4e99,	// (0x00006602) form2_midp_wait_pane_g2

0x4ea2,	// (0x0000660b) form2_midp_wait_pane_g3

0x0002,

0xfad6,	// (0x0001123f) form2_midp_wait_pane_g

0xeba9,	// (0x00010312) list_highlight_pane_cp21_ParamLimits

0x4edb,	// (0x00006644) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4eea,	// (0x00006653) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3b05,	// (0x0000526e) list_single_2graphic_im_pane_ParamLimits

0x3b05,	// (0x0000526e) list_single_2graphic_im_pane

0xcd9e,	// (0x0000e507) list_single_2graphic_im_pane_g1_ParamLimits

0xcd9e,	// (0x0000e507) list_single_2graphic_im_pane_g1

0xcdaf,	// (0x0000e518) list_single_2graphic_im_pane_g2_ParamLimits

0xcdaf,	// (0x0000e518) list_single_2graphic_im_pane_g2

0xcdbb,	// (0x0000e524) list_single_2graphic_im_pane_g3_ParamLimits

0xcdbb,	// (0x0000e524) list_single_2graphic_im_pane_g3

0x0003,

0xfc2b,	// (0x00011394) list_single_2graphic_im_pane_g_ParamLimits

0xfc2b,	// (0x00011394) list_single_2graphic_im_pane_g

0xcdcf,	// (0x0000e538) list_single_2graphic_im_pane_t1_ParamLimits

0xcdcf,	// (0x0000e538) list_single_2graphic_im_pane_t1

0x59e1,	// (0x0000714a) list_single_graphic_2heading_pane_fp_ParamLimits

0x59e1,	// (0x0000714a) list_single_graphic_2heading_pane_fp

0x5a29,	// (0x00007192) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x5a29,	// (0x00007192) list_single_graphic_2heading_pane_fp_g1

0x59fa,	// (0x00007163) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x59fa,	// (0x00007163) list_single_graphic_2heading_pane_fp_g2

0x5953,	// (0x000070bc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x5953,	// (0x000070bc) list_single_graphic_2heading_pane_fp_g3

0x595f,	// (0x000070c8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x595f,	// (0x000070c8) list_single_graphic_2heading_pane_fp_g4

0x5a06,	// (0x0000716f) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x5a06,	// (0x0000716f) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb59,	// (0x000112c2) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb59,	// (0x000112c2) list_single_graphic_2heading_pane_fp_g

0x629a,	// (0x00007a03) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x629a,	// (0x00007a03) list_single_graphic_2heading_pane_fp_t1

0x5a61,	// (0x000071ca) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5a61,	// (0x000071ca) list_single_graphic_2heading_pane_fp_t2

0x62b0,	// (0x00007a19) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x62b0,	// (0x00007a19) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc34,	// (0x0001139d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc34,	// (0x0001139d) list_single_graphic_2heading_pane_fp_t

0x52aa,	// (0x00006a13) fep_hwr_write_pane_g5_ParamLimits

0x52aa,	// (0x00006a13) fep_hwr_write_pane_g5

0x52b6,	// (0x00006a1f) fep_hwr_write_pane_g6_ParamLimits

0x52b6,	// (0x00006a1f) fep_hwr_write_pane_g6

0x5efd,	// (0x00007666) eswt_shell_pane_ParamLimits

0x2251,	// (0x000039ba) bg_popup_window_pane_cp18_ParamLimits

0x378d,	// (0x00004ef6) heading_pane_cp70

0x6027,	// (0x00007790) popup_eswt_tasktip_window_t1_ParamLimits

0xbcce,	// (0x0000d437) aid_touch_tab_arrow_left

0xbce4,	// (0x0000d44d) aid_touch_tab_arrow_right

0xa5ec,	// (0x0000bd55) title_pane_g3_ParamLimits

0xa5ec,	// (0x0000bd55) title_pane_g3

0xf27a,	// (0x000109e3) set_value_pane_g1

0xbc04,	// (0x0000d36d) popup_toolbar_trans_pane_ParamLimits

0x61e0,	// (0x00007949) aid_size_cell_tb_trans_pane_ParamLimits

0xf321,	// (0x00010a8a) bg_tb_trans_pane_ParamLimits

0x61f2,	// (0x0000795b) grid_tb_trans_pane_ParamLimits

0xed7f,	// (0x000104e8) cont_note_pane_ParamLimits

0xed7f,	// (0x000104e8) cont_note_pane

0xf009,	// (0x00010772) cont_snote2_single_text_pane_ParamLimits

0xf009,	// (0x00010772) cont_snote2_single_text_pane

0xf009,	// (0x00010772) cont_snote2_single_graphic_pane_ParamLimits

0xf009,	// (0x00010772) cont_snote2_single_graphic_pane

0x2900,	// (0x00004069) cont_note_wait_pane_ParamLimits

0x2900,	// (0x00004069) cont_note_wait_pane

0x2900,	// (0x00004069) cont_note_image_pane_ParamLimits

0x2900,	// (0x00004069) cont_note_image_pane

0x62c6,	// (0x00007a2f) popup_note2_window_g1_ParamLimits

0x62c6,	// (0x00007a2f) popup_note2_window_g1

0x62f7,	// (0x00007a60) popup_note2_window_t1_ParamLimits

0x62f7,	// (0x00007a60) popup_note2_window_t1

0x633c,	// (0x00007aa5) popup_note2_window_t2_ParamLimits

0x633c,	// (0x00007aa5) popup_note2_window_t2

0x6381,	// (0x00007aea) popup_note2_window_t3_ParamLimits

0x6381,	// (0x00007aea) popup_note2_window_t3

0x63c6,	// (0x00007b2f) popup_note2_window_t4_ParamLimits

0x63c6,	// (0x00007b2f) popup_note2_window_t4

0xee03,	// (0x0001056c) popup_note2_window_t5_ParamLimits

0xee03,	// (0x0001056c) popup_note2_window_t5

0x0004,

0xfc40,	// (0x000113a9) popup_note2_window_t_ParamLimits

0xfc40,	// (0x000113a9) popup_note2_window_t

0x63f5,	// (0x00007b5e) popup_note2_image_window_g1_ParamLimits

0x63f5,	// (0x00007b5e) popup_note2_image_window_g1

0x6401,	// (0x00007b6a) popup_note2_image_window_g2_ParamLimits

0x6401,	// (0x00007b6a) popup_note2_image_window_g2

0x0001,

0xfc4b,	// (0x000113b4) popup_note2_image_window_g_ParamLimits

0xfc4b,	// (0x000113b4) popup_note2_image_window_g

0x6413,	// (0x00007b7c) popup_note2_image_window_t1_ParamLimits

0x6413,	// (0x00007b7c) popup_note2_image_window_t1

0x642b,	// (0x00007b94) popup_note2_image_window_t2_ParamLimits

0x642b,	// (0x00007b94) popup_note2_image_window_t2

0x6443,	// (0x00007bac) popup_note2_image_window_t3_ParamLimits

0x6443,	// (0x00007bac) popup_note2_image_window_t3

0x0002,

0xfc50,	// (0x000113b9) popup_note2_image_window_t_ParamLimits

0xfc50,	// (0x000113b9) popup_note2_image_window_t

0x290e,	// (0x00004077) popup_note2_wait_window_g1_ParamLimits

0x290e,	// (0x00004077) popup_note2_wait_window_g1

0x645f,	// (0x00007bc8) popup_note2_wait_window_g2_ParamLimits

0x645f,	// (0x00007bc8) popup_note2_wait_window_g2

0x2926,	// (0x0000408f) popup_note2_wait_window_g3_ParamLimits

0x2926,	// (0x0000408f) popup_note2_wait_window_g3

0x0002,

0xfc57,	// (0x000113c0) popup_note2_wait_window_g_ParamLimits

0xfc57,	// (0x000113c0) popup_note2_wait_window_g

0x646b,	// (0x00007bd4) popup_note2_wait_window_t1_ParamLimits

0x646b,	// (0x00007bd4) popup_note2_wait_window_t1

0x6489,	// (0x00007bf2) popup_note2_wait_window_t2_ParamLimits

0x6489,	// (0x00007bf2) popup_note2_wait_window_t2

0x64a7,	// (0x00007c10) popup_note2_wait_window_t3_ParamLimits

0x64a7,	// (0x00007c10) popup_note2_wait_window_t3

0x64b9,	// (0x00007c22) popup_note2_wait_window_t4_ParamLimits

0x64b9,	// (0x00007c22) popup_note2_wait_window_t4

0x0003,

0xfc5e,	// (0x000113c7) popup_note2_wait_window_t_ParamLimits

0xfc5e,	// (0x000113c7) popup_note2_wait_window_t

0x64cb,	// (0x00007c34) wait_bar2_pane_ParamLimits

0x64cb,	// (0x00007c34) wait_bar2_pane

0x64e3,	// (0x00007c4c) popup_snote2_single_text_window_g1_ParamLimits

0x64e3,	// (0x00007c4c) popup_snote2_single_text_window_g1

0x650b,	// (0x00007c74) popup_snote2_single_text_window_t1_ParamLimits

0x650b,	// (0x00007c74) popup_snote2_single_text_window_t1

0x6557,	// (0x00007cc0) popup_snote2_single_text_window_t2_ParamLimits

0x6557,	// (0x00007cc0) popup_snote2_single_text_window_t2

0x65a3,	// (0x00007d0c) popup_snote2_single_text_window_t3_ParamLimits

0x65a3,	// (0x00007d0c) popup_snote2_single_text_window_t3

0x65e4,	// (0x00007d4d) popup_snote2_single_text_window_t4_ParamLimits

0x65e4,	// (0x00007d4d) popup_snote2_single_text_window_t4

0x661a,	// (0x00007d83) popup_snote2_single_text_window_t5_ParamLimits

0x661a,	// (0x00007d83) popup_snote2_single_text_window_t5

0x0004,

0xfc67,	// (0x000113d0) popup_snote2_single_text_window_t_ParamLimits

0xfc67,	// (0x000113d0) popup_snote2_single_text_window_t

0x6645,	// (0x00007dae) popup_snote2_single_graphic_window_g1_ParamLimits

0x6645,	// (0x00007dae) popup_snote2_single_graphic_window_g1

0x666d,	// (0x00007dd6) popup_snote2_single_graphic_window_g2_ParamLimits

0x666d,	// (0x00007dd6) popup_snote2_single_graphic_window_g2

0x0001,

0xfc72,	// (0x000113db) popup_snote2_single_graphic_window_g_ParamLimits

0xfc72,	// (0x000113db) popup_snote2_single_graphic_window_g

0x6695,	// (0x00007dfe) popup_snote2_single_graphic_window_t1_ParamLimits

0x6695,	// (0x00007dfe) popup_snote2_single_graphic_window_t1

0x66e1,	// (0x00007e4a) popup_snote2_single_graphic_window_t2_ParamLimits

0x66e1,	// (0x00007e4a) popup_snote2_single_graphic_window_t2

0x65a3,	// (0x00007d0c) popup_snote2_single_graphic_window_t3_ParamLimits

0x65a3,	// (0x00007d0c) popup_snote2_single_graphic_window_t3

0x65e4,	// (0x00007d4d) popup_snote2_single_graphic_window_t4_ParamLimits

0x65e4,	// (0x00007d4d) popup_snote2_single_graphic_window_t4

0x661a,	// (0x00007d83) popup_snote2_single_graphic_window_t5_ParamLimits

0x661a,	// (0x00007d83) popup_snote2_single_graphic_window_t5

0x0004,

0xfc77,	// (0x000113e0) popup_snote2_single_graphic_window_t_ParamLimits

0xfc77,	// (0x000113e0) popup_snote2_single_graphic_window_t

0x4ad5,	// (0x0000623e) clock_nsta_pane_cp2_t1

0x4ad5,	// (0x0000623e) clock_nsta_pane_cp2_t2

0x0001,

0xfa97,	// (0x00011200) clock_nsta_pane_cp2_t

0xf33b,	// (0x00010aa4) form_field_data_wide_pane_g1_ParamLimits

0xf347,	// (0x00010ab0) form_field_data_wide_pane_g2_ParamLimits

0xf347,	// (0x00010ab0) form_field_data_wide_pane_g2

0xf353,	// (0x00010abc) form_field_data_wide_pane_g3_ParamLimits

0xf353,	// (0x00010abc) form_field_data_wide_pane_g3

0x0002,

0xf651,	// (0x00010dba) form_field_data_wide_pane_g_ParamLimits

0xf651,	// (0x00010dba) form_field_data_wide_pane_g

0xc857,	// (0x0000dfc0) grid_touch_3_pane_ParamLimits

0xc857,	// (0x0000dfc0) grid_touch_3_pane

0xce00,	// (0x0000e569) cell_touch_3_pane_ParamLimits

0xce00,	// (0x0000e569) cell_touch_3_pane

0x5075,	// (0x000067de) cell_touch_3_pane_g1

0x5075,	// (0x000067de) cell_touch_3_pane_g2

0x0001,

0xfb1c,	// (0x00011285) cell_touch_3_pane_g

0xee5b,	// (0x000105c4) cont_query_data_pane

0xee63,	// (0x000105cc) cont_query_data_pane_cp1

0x6760,	// (0x00007ec9) button_value_adjust_pane_cp7

0x6768,	// (0x00007ed1) query_popup_pane_cp3

0x07c5,	// (0x00001f2e) bg_popup_sub_pane_cp22_ParamLimits

0x07db,	// (0x00001f44) navi_navi_volume_pane_cp2

0x07f6,	// (0x00001f5f) popup_side_volume_key_window_g2

0x0805,	// (0x00001f6e) popup_side_volume_key_window_g3

0x0002,

0xf6e7,	// (0x00010e50) popup_side_volume_key_window_g

0x0822,	// (0x00001f8b) popup_side_volume_key_window_t2

0x0001,

0xf6ee,	// (0x00010e57) popup_side_volume_key_window_t

0x0cb2,	// (0x0000241b) popup_side_volume_key_window_ParamLimits

0xaac2,	// (0x0000c22b) list_double_graphic_pane_g4_ParamLimits

0xaac2,	// (0x0000c22b) list_double_graphic_pane_g4

0xc6cd,	// (0x0000de36) list_single_2heading_msg_pane_ParamLimits

0xc6cd,	// (0x0000de36) list_single_2heading_msg_pane

0xce4c,	// (0x0000e5b5) list_single_2heading_msg_pane_g1_ParamLimits

0xce4c,	// (0x0000e5b5) list_single_2heading_msg_pane_g1

0xce58,	// (0x0000e5c1) list_single_2heading_msg_pane_g2_ParamLimits

0xce58,	// (0x0000e5c1) list_single_2heading_msg_pane_g2

0xce6b,	// (0x0000e5d4) list_single_2heading_msg_pane_g3_ParamLimits

0xce6b,	// (0x0000e5d4) list_single_2heading_msg_pane_g3

0xce77,	// (0x0000e5e0) list_single_2heading_msg_pane_g4_ParamLimits

0xce77,	// (0x0000e5e0) list_single_2heading_msg_pane_g4

0x0003,

0xfc82,	// (0x000113eb) list_single_2heading_msg_pane_g_ParamLimits

0xfc82,	// (0x000113eb) list_single_2heading_msg_pane_g

0xce8f,	// (0x0000e5f8) list_single_2heading_msg_pane_t1_ParamLimits

0xce8f,	// (0x0000e5f8) list_single_2heading_msg_pane_t1

0xceb7,	// (0x0000e620) list_single_2heading_msg_pane_t2_ParamLimits

0xceb7,	// (0x0000e620) list_single_2heading_msg_pane_t2

0xcf22,	// (0x0000e68b) list_single_2heading_msg_pane_t3_ParamLimits

0xcf22,	// (0x0000e68b) list_single_2heading_msg_pane_t3

0x6865,	// (0x00007fce) list_single_2heading_msg_pane_t4_ParamLimits

0x6865,	// (0x00007fce) list_single_2heading_msg_pane_t4

0x0003,

0xfc8b,	// (0x000113f4) list_single_2heading_msg_pane_t_ParamLimits

0xfc8b,	// (0x000113f4) list_single_2heading_msg_pane_t

0xeb4d,	// (0x000102b6) title_pane_g4_ParamLimits

0xeb4d,	// (0x000102b6) title_pane_g4

0x01e6,	// (0x0000194f) title_pane_stacon_g3_ParamLimits

0x01e6,	// (0x0000194f) title_pane_stacon_g3

0x625d,	// (0x000079c6) list_single_2graphic_im_pane_g4_ParamLimits

0x625d,	// (0x000079c6) list_single_2graphic_im_pane_g4

0x34dc,	// (0x00004c45) popup_side_volume_key_window_cp

0x3f8c,	// (0x000056f5) main_idle_act2_pane_t1

0x20fe,	// (0x00003867) toolbar_button_pane_g10

0xa969,	// (0x0000c0d2) popup_toolbar_window_cp1

0x4ac6,	// (0x0000622f) clock_nsta_pane_cp_t1

0x4ac6,	// (0x0000622f) clock_nsta_pane_cp_t2

0x0001,

0xfa92,	// (0x000111fb) clock_nsta_pane_cp_t

0x07db,	// (0x00001f44) navi_navi_volume_pane_cp2_ParamLimits

0x07ea,	// (0x00001f53) popup_side_volume_key_window_g1_ParamLimits

0x07f6,	// (0x00001f5f) popup_side_volume_key_window_g2_ParamLimits

0x0805,	// (0x00001f6e) popup_side_volume_key_window_g3_ParamLimits

0xf6e7,	// (0x00010e50) popup_side_volume_key_window_g_ParamLimits

0x50e4,	// (0x0000684d) fep_hwr_aid_pane

0x518d,	// (0x000068f6) bg_fep_hwr_top_pane_g4_ParamLimits

0x51ad,	// (0x00006916) fep_hwr_top_pane_g1_ParamLimits

0x51bf,	// (0x00006928) fep_hwr_top_pane_g2_ParamLimits

0x51d1,	// (0x0000693a) fep_hwr_top_pane_g3_ParamLimits

0xfae7,	// (0x00011250) fep_hwr_top_pane_g_ParamLimits

0x51e6,	// (0x0000694f) fep_hwr_top_text_pane_ParamLimits

0x3291,	// (0x000049fa) aid_touch_tab_arrow_arrow_2

0x329a,	// (0x00004a03) aid_touch_tab_arrow_left_2

0x50f8,	// (0x00006861) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x512f,	// (0x00006898) fep_hwr_prediction_pane

0x5468,	// (0x00006bd1) fep_vkb_prediction_pane

0xcbad,	// (0x0000e316) fep_vkb_side_pane_g3_ParamLimits

0xcbad,	// (0x0000e316) fep_vkb_side_pane_g3

0x551a,	// (0x00006c83) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5c23,	// (0x0000738c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5c30,	// (0x00007399) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb91,	// (0x000112fa) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x688a,	// (0x00007ff3) fep_hwr_prediction_pane_g1

0x6894,	// (0x00007ffd) fep_hwr_prediction_pane_g2

0x689c,	// (0x00008005) fep_hwr_prediction_pane_g3

0x68a4,	// (0x0000800d) fep_hwr_prediction_pane_g4

0x0003,

0xfc94,	// (0x000113fd) fep_hwr_prediction_pane_g

0x688a,	// (0x00007ff3) fep_vkb_prediction_pane_g1

0x68ac,	// (0x00008015) fep_vkb_prediction_pane_g2

0x68b4,	// (0x0000801d) fep_vkb_prediction_pane_g3

0x68bc,	// (0x00008025) fep_vkb_prediction_pane_g4

0x0003,

0xfc9d,	// (0x00011406) fep_vkb_prediction_pane_g

0x384e,	// (0x00004fb7) slider_set_pane_g3

0x3862,	// (0x00004fcb) slider_set_pane_g4

0x387a,	// (0x00004fe3) slider_set_pane_g5

0x384e,	// (0x00004fb7) slider_set_pane_g6

0x3890,	// (0x00004ff9) slider_set_pane_g7

0x3a66,	// (0x000051cf) slider_form_pane_g3

0x3a6f,	// (0x000051d8) slider_form_pane_g4

0x3a77,	// (0x000051e0) slider_form_pane_g5

0x3a66,	// (0x000051cf) slider_form_pane_g6

0xc66d,	// (0x0000ddd6) slider_form_pane_g7

0x42a1,	// (0x00005a0a) slider_set_pane_vc_g3

0x42aa,	// (0x00005a13) slider_set_pane_vc_g4

0x42b3,	// (0x00005a1c) slider_set_pane_vc_g5

0x42a1,	// (0x00005a0a) slider_set_pane_vc_g6

0x42bc,	// (0x00005a25) slider_set_pane_vc_g7

0x4775,	// (0x00005ede) slider_form_pane_vc_g1

0x477e,	// (0x00005ee7) slider_form_pane_vc_g2

0x4787,	// (0x00005ef0) slider_form_pane_vc_g3

0x4775,	// (0x00005ede) slider_form_pane_vc_g4

0x4790,	// (0x00005ef9) slider_form_pane_vc_g5

0x0004,

0xfa64,	// (0x000111cd) slider_form_pane_vc_g

0xe96c,	// (0x000100d5) main_idle_act3_pane

0x68c4,	// (0x0000802d) ai3_links_pane

0xcf90,	// (0x0000e6f9) popup_ai3_data_window_ParamLimits

0xcf90,	// (0x0000e6f9) popup_ai3_data_window

0xe96c,	// (0x000100d5) grid_ai3_links_pane

0xcfae,	// (0x0000e717) cell_ai3_links_pane_ParamLimits

0xcfae,	// (0x0000e717) cell_ai3_links_pane

0x6905,	// (0x0000806e) bg_popup_sub_pane_cp11

0x6912,	// (0x0000807b) cell_ai3_links_pane_g1

0xe96c,	// (0x000100d5) bg_popup_sub_pane_cp12

0x6937,	// (0x000080a0) heading_ai3_data_pane

0x693f,	// (0x000080a8) list_ai3_gene_pane

0x694b,	// (0x000080b4) popup_ai3_data_window_g1

0x6953,	// (0x000080bc) heading_ai3_data_pane_g1

0x695b,	// (0x000080c4) heading_ai3_data_pane_t1

0x6969,	// (0x000080d2) list_double_ai3_gene_pane_ParamLimits

0x6969,	// (0x000080d2) list_double_ai3_gene_pane

0x6976,	// (0x000080df) list_single_ai3_gene_pane_ParamLimits

0x6976,	// (0x000080df) list_single_ai3_gene_pane

0x503a,	// (0x000067a3) list_highlight_pane_cp7_ParamLimits

0x503a,	// (0x000067a3) list_highlight_pane_cp7

0x6983,	// (0x000080ec) list_single_a13_gene_pane_t1_ParamLimits

0x6983,	// (0x000080ec) list_single_a13_gene_pane_t1

0x699a,	// (0x00008103) list_single_ai3_gene_pane_g1

0x69a3,	// (0x0000810c) list_single_ai3_gene_pane_g2

0x0001,

0xfca6,	// (0x0001140f) list_single_ai3_gene_pane_g

0x69ab,	// (0x00008114) list_double_ai3_gene_pane_g1_ParamLimits

0x69ab,	// (0x00008114) list_double_ai3_gene_pane_g1

0x69b7,	// (0x00008120) list_double_ai3_gene_pane_t1_ParamLimits

0x69b7,	// (0x00008120) list_double_ai3_gene_pane_t1

0x69d3,	// (0x0000813c) list_double_ai3_gene_pane_t2_ParamLimits

0x69d3,	// (0x0000813c) list_double_ai3_gene_pane_t2

0x69e8,	// (0x00008151) list_double_ai3_gene_pane_t3_ParamLimits

0x69e8,	// (0x00008151) list_double_ai3_gene_pane_t3

0x0002,

0xfcab,	// (0x00011414) list_double_ai3_gene_pane_t_ParamLimits

0xfcab,	// (0x00011414) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6779,	// (0x00007ee2) aid_size_min_col_2

0xce36,	// (0x0000e59f) aid_size_min_msg_ParamLimits

0xce36,	// (0x0000e59f) aid_size_min_msg

0xcbc1,	// (0x0000e32a) fep_vkb_top_text_pane_g2_ParamLimits

0xcbc1,	// (0x0000e32a) fep_vkb_top_text_pane_g2

0x0001,

0xfb17,	// (0x00011280) fep_vkb_top_text_pane_g_ParamLimits

0xfb17,	// (0x00011280) fep_vkb_top_text_pane_g

0xe96c,	// (0x000100d5) main_hc_apps_shell_pane

0x6a05,	// (0x0000816e) grid_hc_apps_pane_ParamLimits

0x6a05,	// (0x0000816e) grid_hc_apps_pane

0x6a17,	// (0x00008180) list_hc_apps_pane

0x6a1f,	// (0x00008188) scroll_pane_cp37_ParamLimits

0x6a1f,	// (0x00008188) scroll_pane_cp37

0xcfc8,	// (0x0000e731) cell_hc_apps_pane_ParamLimits

0xcfc8,	// (0x0000e731) cell_hc_apps_pane

0xd090,	// (0x0000e7f9) cell_hc_apps_pane_g1_ParamLimits

0xd090,	// (0x0000e7f9) cell_hc_apps_pane_g1

0x6b0d,	// (0x00008276) cell_hc_apps_pane_g2_ParamLimits

0x6b0d,	// (0x00008276) cell_hc_apps_pane_g2

0x6b29,	// (0x00008292) cell_hc_apps_pane_g3_ParamLimits

0x6b29,	// (0x00008292) cell_hc_apps_pane_g3

0x0002,

0xfcb2,	// (0x0001141b) cell_hc_apps_pane_g_ParamLimits

0xfcb2,	// (0x0001141b) cell_hc_apps_pane_g

0xd0bc,	// (0x0000e825) cell_hc_apps_pane_t1_ParamLimits

0xd0bc,	// (0x0000e825) cell_hc_apps_pane_t1

0xed7f,	// (0x000104e8) grid_highlight_pane_cp10_ParamLimits

0xed7f,	// (0x000104e8) grid_highlight_pane_cp10

0xd0fc,	// (0x0000e865) list_single_hc_apps_pane_ParamLimits

0xd0fc,	// (0x0000e865) list_single_hc_apps_pane

0xd136,	// (0x0000e89f) list_single_hc_apps_pane_g1

0xd14f,	// (0x0000e8b8) list_single_hc_apps_pane_g2

0x0001,

0xfcb9,	// (0x00011422) list_single_hc_apps_pane_g

0xd168,	// (0x0000e8d1) list_single_hc_apps_pane_g2_copy1

0xd184,	// (0x0000e8ed) list_single_hc_apps_pane_t1

0xeba9,	// (0x00010312) bg_set_opt_pane_cp_ParamLimits

0xebb7,	// (0x00010320) setting_slider_pane_t1_ParamLimits

0xebd0,	// (0x00010339) setting_slider_pane_t2_ParamLimits

0xebea,	// (0x00010353) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00010ca2) setting_slider_pane_t_ParamLimits

0xec02,	// (0x0001036b) slider_set_pane_ParamLimits

0x1318,	// (0x00002a81) control_pane_g5_ParamLimits

0x1318,	// (0x00002a81) control_pane_g5

0x3835,	// (0x00004f9e) slider_set_pane_g1_ParamLimits

0x3842,	// (0x00004fab) slider_set_pane_g2_ParamLimits

0x384e,	// (0x00004fb7) slider_set_pane_g3_ParamLimits

0x3862,	// (0x00004fcb) slider_set_pane_g4_ParamLimits

0x387a,	// (0x00004fe3) slider_set_pane_g5_ParamLimits

0x384e,	// (0x00004fb7) slider_set_pane_g6_ParamLimits

0x3890,	// (0x00004ff9) slider_set_pane_g7_ParamLimits

0xf92e,	// (0x00011097) slider_set_pane_g_ParamLimits

0x0da2,	// (0x0000250b) navi_icon_text_pane_ParamLimits

0xbc95,	// (0x0000d3fe) aid_fill_nsta_2_ParamLimits

0xbcce,	// (0x0000d437) aid_touch_tab_arrow_left_ParamLimits

0xbce4,	// (0x0000d44d) aid_touch_tab_arrow_right_ParamLimits

0xbd7f,	// (0x0000d4e8) clock_nsta_pane_ParamLimits

0xc3eb,	// (0x0000db54) navi_icon_pane_g1_ParamLimits

0xc3f7,	// (0x0000db60) navi_text_pane_t1_ParamLimits

0xc932,	// (0x0000e09b) navi_icon_text_pane_g1_ParamLimits

0xc93e,	// (0x0000e0a7) navi_icon_text_pane_t1_ParamLimits

0xd136,	// (0x0000e89f) list_single_hc_apps_pane_g1_ParamLimits

0xd14f,	// (0x0000e8b8) list_single_hc_apps_pane_g2_ParamLimits

0xfcb9,	// (0x00011422) list_single_hc_apps_pane_g_ParamLimits

0xd168,	// (0x0000e8d1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd184,	// (0x0000e8ed) list_single_hc_apps_pane_t1_ParamLimits

0xa4db,	// (0x0000bc44) popup_toolbar2_fixed_window_ParamLimits

0xa4db,	// (0x0000bc44) popup_toolbar2_fixed_window

0xbbfa,	// (0x0000d363) popup_toolbar2_float_window

0xe96c,	// (0x000100d5) bg_popup_sub_pane_cp27

0x6c46,	// (0x000083af) grid_toolbar2_float_pane

0xe96c,	// (0x000100d5) bg_popup_sub_pane_cp26

0x6c46,	// (0x000083af) grid_toolbar2_fixed_pane

0xd1b2,	// (0x0000e91b) cell_toolbar2_fixed_pane_ParamLimits

0xd1b2,	// (0x0000e91b) cell_toolbar2_fixed_pane

0xd1cc,	// (0x0000e935) cell_toolbar2_fixed_pane_g1

0x6c67,	// (0x000083d0) toolbar2_fixed_button_pane

0x20b6,	// (0x0000381f) toolbar2_fixed_button_pane_g1

0x20be,	// (0x00003827) toolbar2_fixed_button_pane_g2

0x20c6,	// (0x0000382f) toolbar2_fixed_button_pane_g3

0x20ce,	// (0x00003837) toolbar2_fixed_button_pane_g4

0x20d6,	// (0x0000383f) toolbar2_fixed_button_pane_g5

0x20de,	// (0x00003847) toolbar2_fixed_button_pane_g6

0x20e6,	// (0x0000384f) toolbar2_fixed_button_pane_g7

0x20ee,	// (0x00003857) toolbar2_fixed_button_pane_g8

0x20f6,	// (0x0000385f) toolbar2_fixed_button_pane_g9

0x0008,

0xf830,	// (0x00010f99) toolbar2_fixed_button_pane_g

0x6c6f,	// (0x000083d8) cell_toolbar2_float_pane_ParamLimits

0x6c6f,	// (0x000083d8) cell_toolbar2_float_pane

0x6c80,	// (0x000083e9) cell_toolbar2_float_pane_g1

0x6c67,	// (0x000083d0) toolbar2_fixed_button_pane_cp

0xcaa9,	// (0x0000e212) fep_vkb_accented_list_pane_ParamLimits

0xcaa9,	// (0x0000e212) fep_vkb_accented_list_pane

0x588b,	// (0x00006ff4) bg_popup_fep_shadow_pane_g9

0x0f31,	// (0x0000269a) bg_popup_fep_shadow_pane_cp3

0xf4d6,	// (0x00010c3f) list_accented_list_pane

0x6c89,	// (0x000083f2) list_single_accented_list_pane_ParamLimits

0x6c89,	// (0x000083f2) list_single_accented_list_pane

0x0f31,	// (0x0000269a) list_highlight_pane_cp10

0x6c9a,	// (0x00008403) list_single_accented_list_pane_t1

0xbb18,	// (0x0000d281) popup_slider_window_ParamLimits

0xbb18,	// (0x0000d281) popup_slider_window

0x6770,	// (0x00007ed9) aid_indentation_list_msg

0xd2cf,	// (0x0000ea38) bg_popup_window_pane_cp19

0x6dd6,	// (0x0000853f) popup_slider_window_g1

0x6df2,	// (0x0000855b) popup_slider_window_g2

0x6e0e,	// (0x00008577) popup_slider_window_g3

0x0005,

0xfcbe,	// (0x00011427) popup_slider_window_g

0x6e74,	// (0x000085dd) popup_slider_window_t1

0x6ee8,	// (0x00008651) small_volume_slider_vertical_pane

0x5075,	// (0x000067de) small_volume_slider_vertical_pane_g1

0x5075,	// (0x000067de) small_volume_slider_vertical_pane_g2

0x6f04,	// (0x0000866d) small_volume_slider_vertical_pane_g3

0x0002,

0xfcd0,	// (0x00011439) small_volume_slider_vertical_pane_g

0xa445,	// (0x0000bbae) area_side_right_pane_ParamLimits

0xa445,	// (0x0000bbae) area_side_right_pane

0xd387,	// (0x0000eaf0) aid_size_side_button_ParamLimits

0xd387,	// (0x0000eaf0) aid_size_side_button

0xd3a0,	// (0x0000eb09) grid_sctrl_middle_pane_ParamLimits

0xd3a0,	// (0x0000eb09) grid_sctrl_middle_pane

0x6f40,	// (0x000086a9) sctrl_sk_bottom_pane

0x6f51,	// (0x000086ba) sctrl_sk_top_pane

0x6f63,	// (0x000086cc) aid_touch_sctrl_top

0xed7f,	// (0x000104e8) bg_sctrl_sk_pane_ParamLimits

0xed7f,	// (0x000104e8) bg_sctrl_sk_pane

0x6f70,	// (0x000086d9) sctrl_sk_top_pane_g1

0x6f7d,	// (0x000086e6) sctrl_sk_top_pane_t1

0x6f63,	// (0x000086cc) aid_touch_sctrl_bottom

0xed7f,	// (0x000104e8) bg_sctrl_sk_pane_cp_ParamLimits

0xed7f,	// (0x000104e8) bg_sctrl_sk_pane_cp

0x6f98,	// (0x00008701) sctrl_sk_bottom_pane_g1

0x6f7d,	// (0x000086e6) sctrl_sk_bottom_pane_t1

0xd3ba,	// (0x0000eb23) cell_sctrl_middle_pane_ParamLimits

0xd3ba,	// (0x0000eb23) cell_sctrl_middle_pane

0xd3cd,	// (0x0000eb36) aid_touch_sctrl_middle_ParamLimits

0xd3cd,	// (0x0000eb36) aid_touch_sctrl_middle

0xd3da,	// (0x0000eb43) bg_sctrl_middle_pane_ParamLimits

0xd3da,	// (0x0000eb43) bg_sctrl_middle_pane

0x7062,	// (0x000087cb) cell_sctrl_middle_pane_g1_ParamLimits

0x7062,	// (0x000087cb) cell_sctrl_middle_pane_g1

0xd3e8,	// (0x0000eb51) cell_sctrl_middle_pane_g2_ParamLimits

0xd3e8,	// (0x0000eb51) cell_sctrl_middle_pane_g2

0x0001,

0xfcdc,	// (0x00011445) cell_sctrl_middle_pane_g_ParamLimits

0xfcdc,	// (0x00011445) cell_sctrl_middle_pane_g

0x20b6,	// (0x0000381f) bg_sctrl_middle_pane_g1

0x20be,	// (0x00003827) bg_sctrl_middle_pane_g2

0x20c6,	// (0x0000382f) bg_sctrl_middle_pane_g3

0x20ce,	// (0x00003837) bg_sctrl_middle_pane_g4

0x20d6,	// (0x0000383f) bg_sctrl_middle_pane_g5

0x20de,	// (0x00003847) bg_sctrl_middle_pane_g6

0x20e6,	// (0x0000384f) bg_sctrl_middle_pane_g7

0x20ee,	// (0x00003857) bg_sctrl_middle_pane_g8

0x0007,

0xfce1,	// (0x0001144a) bg_sctrl_middle_pane_g

0x20f6,	// (0x0000385f) bg_sctrl_middle_pane_g8_copy1

0x20b6,	// (0x0000381f) bg_sctrl_sk_pane_g1

0x20be,	// (0x00003827) bg_sctrl_sk_pane_g2

0x20c6,	// (0x0000382f) bg_sctrl_sk_pane_g3

0x0008,

0xf830,	// (0x00010f99) bg_sctrl_sk_pane_g

0xf1c7,	// (0x00010930) aid_size_touch_scroll_bar

0x20ce,	// (0x00003837) bg_sctrl_sk_pane_g4

0x20d6,	// (0x0000383f) bg_sctrl_sk_pane_g5

0x20de,	// (0x00003847) bg_sctrl_sk_pane_g6

0x20e6,	// (0x0000384f) bg_sctrl_sk_pane_g7

0x20ee,	// (0x00003857) bg_sctrl_sk_pane_g8

0x20f6,	// (0x0000385f) bg_sctrl_sk_pane_g9

0x157f,	// (0x00002ce8) popup_fep_china_hwr2_fs_candidate_window

0xb5ca,	// (0x0000cd33) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb5ca,	// (0x0000cd33) popup_fep_china_hwr2_fs_control_window

0x551a,	// (0x00006c83) sctrl_sk_top_pane_g2

0x0001,

0xfcd7,	// (0x00011440) sctrl_sk_top_pane_g

0xd3f4,	// (0x0000eb5d) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd3f4,	// (0x0000eb5d) aid_fep_china_hwr2_fs_cell

0xd40a,	// (0x0000eb73) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd40a,	// (0x0000eb73) bg_popup_fep_shadow_pane_cp4

0xd421,	// (0x0000eb8a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd421,	// (0x0000eb8a) bg_popup_fep_shadow_pane_cp5

0xd433,	// (0x0000eb9c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd433,	// (0x0000eb9c) popup_fep_china_hwr2_fs_control_bar_grid

0xd447,	// (0x0000ebb0) popup_fep_china_hwr2_fs_control_funtion_grid

0x7036,	// (0x0000879f) aid_fep_china_hwr2_fs_candi_cell

0xe96c,	// (0x000100d5) bg_popup_fep_shadow_pane_cp6

0x7040,	// (0x000087a9) popup_fep_china_hwr2_fs_candidate_grid

0xd44f,	// (0x0000ebb8) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd44f,	// (0x0000ebb8) cell_fep_china_hwr2_fs_funtion_grid

0x5075,	// (0x000067de) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x7062,	// (0x000087cb) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x7062,	// (0x000087cb) cell_fep_china_hwr2_fs_funtion_grid_g1

0x7070,	// (0x000087d9) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x7070,	// (0x000087d9) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcf2,	// (0x0001145b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcf2,	// (0x0001145b) cell_fep_china_hwr2_fs_funtion_grid_g

0xd467,	// (0x0000ebd0) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd467,	// (0x0000ebd0) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd47c,	// (0x0000ebe5) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd47c,	// (0x0000ebe5) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf7,	// (0x00011460) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf7,	// (0x00011460) cell_fep_china_hwr2_fs_funtion_grid_t

0x70b7,	// (0x00008820) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x70bf,	// (0x00008828) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x70c7,	// (0x00008830) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcfc,	// (0x00011465) popup_fep_china_hwr2_fs_control_bar_grid_g

0x70cf,	// (0x00008838) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x70cf,	// (0x00008838) cell_fep_china_hwr2_fs_candidate_grid

0x70ee,	// (0x00008857) popup_fep_china_hwr2_fs_candidate_grid_g20

0x70f6,	// (0x0000885f) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5075,	// (0x000067de) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5075,	// (0x000067de) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1c,	// (0x00011285) cell_fep_china_hwr2_fs_candidate_grid_g

0x70fe,	// (0x00008867) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1bec,	// (0x00003355) clock_nsta_pane_cp_24_ParamLimits

0x1bec,	// (0x00003355) clock_nsta_pane_cp_24

0x1c6c,	// (0x000033d5) indicator_nsta_pane_cp_24_ParamLimits

0x1c6c,	// (0x000033d5) indicator_nsta_pane_cp_24

0x30de,	// (0x00004847) heading_pane_g1

0x0001,

0xf895,	// (0x00010ffe) heading_pane_g

0x3d1b,	// (0x00005484) grid_sct_catagory_button_pane

0x3d4d,	// (0x000054b6) scroll_pane_cp5_ParamLimits

0x4c82,	// (0x000063eb) button_value_adjust_pane_cp5_ParamLimits

0x4c82,	// (0x000063eb) button_value_adjust_pane_cp5

0x4d88,	// (0x000064f1) form2_midp_time_pane_ParamLimits

0x710c,	// (0x00008875) cell_sct_catagory_button_pane_ParamLimits

0x710c,	// (0x00008875) cell_sct_catagory_button_pane

0x503a,	// (0x000067a3) bg_button_pane_cp01_ParamLimits

0x503a,	// (0x000067a3) bg_button_pane_cp01

0x5075,	// (0x000067de) cell_sct_catagory_button_pane_g1

0xbb97,	// (0x0000d300) popup_tb_extension_window

0xd498,	// (0x0000ec01) aid_size_cell_ext_ParamLimits

0xd498,	// (0x0000ec01) aid_size_cell_ext

0xf009,	// (0x00010772) bg_tb_trans_pane_cp1_ParamLimits

0xf009,	// (0x00010772) bg_tb_trans_pane_cp1

0xd4be,	// (0x0000ec27) grid_tb_ext_pane_ParamLimits

0xd4be,	// (0x0000ec27) grid_tb_ext_pane

0xd4fb,	// (0x0000ec64) cell_tb_ext_pane_ParamLimits

0xd4fb,	// (0x0000ec64) cell_tb_ext_pane

0xd523,	// (0x0000ec8c) cell_tb_ext_pane_g1_ParamLimits

0xd523,	// (0x0000ec8c) cell_tb_ext_pane_g1

0x71a0,	// (0x00008909) cell_tb_ext_pane_t1

0xed7f,	// (0x000104e8) list_highlight_pane_cp11_ParamLimits

0xed7f,	// (0x000104e8) list_highlight_pane_cp11

0xa4f0,	// (0x0000bc59) popup_uni_indicator_window_ParamLimits

0xa4f0,	// (0x0000bc59) popup_uni_indicator_window

0xf321,	// (0x00010a8a) bg_popup_sub_pane_cp14

0x71bb,	// (0x00008924) list_uniindi_pane

0x71c7,	// (0x00008930) uniindi_top_pane

0xed7f,	// (0x000104e8) bg_uniindi_top_pane

0x71e8,	// (0x00008951) uniindi_top_pane_g1

0x71fe,	// (0x00008967) uniindi_top_pane_g2

0x0003,

0xfd03,	// (0x0001146c) uniindi_top_pane_g

0x7228,	// (0x00008991) uniindi_top_pane_t1

0x7254,	// (0x000089bd) list_single_uniindi_pane_ParamLimits

0x7254,	// (0x000089bd) list_single_uniindi_pane

0x5075,	// (0x000067de) bg_uniindi_top_pane_g1

0x7267,	// (0x000089d0) list_single_uniindi_pane_g1

0x727a,	// (0x000089e3) list_single_uniindi_pane_t1

0xe96c,	// (0x000100d5) control_bg_pane

0x729f,	// (0x00008a08) bg_sctrl_sk_pane_cp1

0x72a8,	// (0x00008a11) bg_sctrl_sk_pane_cp2

0x72b1,	// (0x00008a1a) control_bg_pane_g1

0x72ba,	// (0x00008a23) control_bg_pane_g2

0x0001,

0xfd0c,	// (0x00011475) control_bg_pane_g

0x4a69,	// (0x000061d2) cell_indicator_nsta_pane_g1_ParamLimits

0xc894,	// (0x0000dffd) cell_indicator_nsta_pane_g2_ParamLimits

0xfa80,	// (0x000111e9) cell_indicator_nsta_pane_g_ParamLimits

0x4e15,	// (0x0000657e) form2_midp_time_pane_t1_ParamLimits

0x50d6,	// (0x0000683f) main_idle_act4_pane_ParamLimits

0x50d6,	// (0x0000683f) main_idle_act4_pane

0xbb97,	// (0x0000d300) popup_tb_extension_window_ParamLimits

0xd4e3,	// (0x0000ec4c) tb_ext_find_pane_ParamLimits

0xd4e3,	// (0x0000ec4c) tb_ext_find_pane

0x72c3,	// (0x00008a2c) ai_gene_pane_1_cp1

0x107b,	// (0x000027e4) ai_gene_pane_2_cp1

0x72cb,	// (0x00008a34) list_single_idle_plugin_calendar_pane

0x72d4,	// (0x00008a3d) list_single_idle_plugin_notification_pane

0x72dd,	// (0x00008a46) list_single_idle_plugin_player_pane

0xd540,	// (0x0000eca9) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd540,	// (0x0000eca9) list_single_idle_plugin_shortcut_pane

0xd568,	// (0x0000ecd1) main_idle_act4_pane_t1

0xd580,	// (0x0000ece9) main_idle_act4_pane_t2

0x0001,

0xfd11,	// (0x0001147a) main_idle_act4_pane_t

0xd598,	// (0x0000ed01) middle_sk_idle_act4_pane_ParamLimits

0xd598,	// (0x0000ed01) middle_sk_idle_act4_pane

0xd5b4,	// (0x0000ed1d) popup_clock_digital_analogue_window_cp2

0xd5db,	// (0x0000ed44) shortcut_wheel_idle_act4_pane_ParamLimits

0xd5db,	// (0x0000ed44) shortcut_wheel_idle_act4_pane

0x5075,	// (0x000067de) shortcut_wheel_idle_act4_pane_g1

0x5075,	// (0x000067de) shortcut_wheel_idle_act4_pane_g2

0x5075,	// (0x000067de) shortcut_wheel_idle_act4_pane_g3

0x5075,	// (0x000067de) shortcut_wheel_idle_act4_pane_g4

0x5075,	// (0x000067de) shortcut_wheel_idle_act4_pane_g5

0x7370,	// (0x00008ad9) shortcut_wheel_idle_act4_pane_g6

0x7378,	// (0x00008ae1) shortcut_wheel_idle_act4_pane_g7

0x7380,	// (0x00008ae9) shortcut_wheel_idle_act4_pane_g8

0x7388,	// (0x00008af1) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd16,	// (0x0001147f) shortcut_wheel_idle_act4_pane_g

0x518d,	// (0x000068f6) middle_sk_idle_act4_pane_g1_ParamLimits

0x518d,	// (0x000068f6) middle_sk_idle_act4_pane_g1

0xd658,	// (0x0000edc1) middle_sk_idle_act4_pane_g2_ParamLimits

0xd658,	// (0x0000edc1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd39,	// (0x000114a2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd39,	// (0x000114a2) middle_sk_idle_act4_pane_g

0xd670,	// (0x0000edd9) middle_sk_idle_act4_pane_t1_ParamLimits

0xd670,	// (0x0000edd9) middle_sk_idle_act4_pane_t1

0xd69f,	// (0x0000ee08) grid_ai_shortcut_pane_ParamLimits

0xd69f,	// (0x0000ee08) grid_ai_shortcut_pane

0xd6bc,	// (0x0000ee25) list_highlight_pane_cp16_ParamLimits

0xd6bc,	// (0x0000ee25) list_highlight_pane_cp16

0xd6c9,	// (0x0000ee32) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd6c9,	// (0x0000ee32) list_single_idle_plugin_shortcut_pane_g1

0xd6d5,	// (0x0000ee3e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd6d5,	// (0x0000ee3e) list_single_idle_plugin_shortcut_pane_g2

0xd6f3,	// (0x0000ee5c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd6f3,	// (0x0000ee5c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd3e,	// (0x000114a7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd3e,	// (0x000114a7) list_single_idle_plugin_shortcut_pane_g

0xd708,	// (0x0000ee71) cell_ai_shortcut_pane_ParamLimits

0xd708,	// (0x0000ee71) cell_ai_shortcut_pane

0xd71e,	// (0x0000ee87) cell_ai_shortcut_pane_g1_ParamLimits

0xd71e,	// (0x0000ee87) cell_ai_shortcut_pane_g1

0x72c3,	// (0x00008a2c) ai_gene_pane_1_cp2

0x74b9,	// (0x00008c22) ai_gene_pane_2_cp2

0x74c1,	// (0x00008c2a) list_highlight_pane_cp15

0x74ca,	// (0x00008c33) list_single_idle_plugin_calendar_pane_g1

0x74c1,	// (0x00008c2a) list_highlight_pane_cp17

0x74d2,	// (0x00008c3b) list_single_idle_plugin_calendar_pane_g1_copy1

0x74da,	// (0x00008c43) list_single_idle_plugin_player_pane_g1

0x403a,	// (0x000057a3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd45,	// (0x000114ae) list_single_idle_plugin_player_pane_g

0x74e2,	// (0x00008c4b) list_single_idle_plugin_player_pane_t1

0x74f0,	// (0x00008c59) list_single_idle_plugin_player_pane_t2

0x74fe,	// (0x00008c67) list_single_idle_plugin_player_pane_t3

0x750c,	// (0x00008c75) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd4a,	// (0x000114b3) list_single_idle_plugin_player_pane_t

0x751a,	// (0x00008c83) wait_bar_pane_cp15

0x7522,	// (0x00008c8b) grid_ai_notification_pane

0x403a,	// (0x000057a3) list_single_idle_plugin_notification_pane_g1

0xd740,	// (0x0000eea9) cell_ai_notification_pane_ParamLimits

0xd740,	// (0x0000eea9) cell_ai_notification_pane

0x7538,	// (0x00008ca1) cell_ai_notification_pane_g1

0x7540,	// (0x00008ca9) cell_ai_notification_pane_t1

0xd74d,	// (0x0000eeb6) tb_ext_find_button_pane

0xd755,	// (0x0000eebe) tb_ext_find_pane_g1

0xd75d,	// (0x0000eec6) tb_ext_find_pane_t1

0x0646,	// (0x00001daf) tb_ext_find_button_pane_g1

0x756c,	// (0x00008cd5) tb_ext_find_button_pane_g2

0x0001,

0xfd53,	// (0x000114bc) tb_ext_find_button_pane_g

0xd568,	// (0x0000ecd1) main_idle_act4_pane_t1_ParamLimits

0xd580,	// (0x0000ece9) main_idle_act4_pane_t2_ParamLimits

0xfd11,	// (0x0001147a) main_idle_act4_pane_t_ParamLimits

0xd5b4,	// (0x0000ed1d) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd5cb,	// (0x0000ed34) sat_plugin_idle_act4_pane_ParamLimits

0xd5cb,	// (0x0000ed34) sat_plugin_idle_act4_pane

0xd76b,	// (0x0000eed4) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd76b,	// (0x0000eed4) sat_plugin_idle_act4_pane_t1

0xd783,	// (0x0000eeec) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd783,	// (0x0000eeec) sat_plugin_idle_act4_pane_t2

0xd79b,	// (0x0000ef04) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd79b,	// (0x0000ef04) sat_plugin_idle_act4_pane_t3

0xd7b3,	// (0x0000ef1c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd7b3,	// (0x0000ef1c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd58,	// (0x000114c1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd58,	// (0x000114c1) sat_plugin_idle_act4_pane_t

0xeaf9,	// (0x00010262) popup_battery_window_ParamLimits

0xeaf9,	// (0x00010262) popup_battery_window

0xed7f,	// (0x000104e8) bg_popup_sub_pane_cp25_ParamLimits

0xed7f,	// (0x000104e8) bg_popup_sub_pane_cp25

0x75c1,	// (0x00008d2a) popup_battery_window_g1_ParamLimits

0x75c1,	// (0x00008d2a) popup_battery_window_g1

0x75cd,	// (0x00008d36) popup_battery_window_t1_ParamLimits

0x75cd,	// (0x00008d36) popup_battery_window_t1

0x75df,	// (0x00008d48) popup_battery_window_t2_ParamLimits

0x75df,	// (0x00008d48) popup_battery_window_t2

0x0001,

0xfd61,	// (0x000114ca) popup_battery_window_t_ParamLimits

0xfd61,	// (0x000114ca) popup_battery_window_t

0xb233,	// (0x0000c99c) midp_canvas_pane_ParamLimits

0xb28f,	// (0x0000c9f8) midp_keypad_pane_ParamLimits

0xb28f,	// (0x0000c9f8) midp_keypad_pane

0x1493,	// (0x00002bfc) main_midp_pane_ParamLimits

0x4ae4,	// (0x0000624d) signal_pane_g2_cp_ParamLimits

0xd7cb,	// (0x0000ef34) aid_size_cell_midp_keypad_ParamLimits

0xd7cb,	// (0x0000ef34) aid_size_cell_midp_keypad

0xd7e9,	// (0x0000ef52) midp_keyp_game_grid_pane_ParamLimits

0xd7e9,	// (0x0000ef52) midp_keyp_game_grid_pane

0xd810,	// (0x0000ef79) midp_keyp_rocker_pane_ParamLimits

0xd810,	// (0x0000ef79) midp_keyp_rocker_pane

0xd85f,	// (0x0000efc8) midp_keyp_sk_left_pane_ParamLimits

0xd85f,	// (0x0000efc8) midp_keyp_sk_left_pane

0xd8b5,	// (0x0000f01e) midp_keyp_sk_right_pane_ParamLimits

0xd8b5,	// (0x0000f01e) midp_keyp_sk_right_pane

0xe96c,	// (0x000100d5) bg_button_pane_cp03

0xd90b,	// (0x0000f074) midp_keyp_sk_left_pane_g1

0xe96c,	// (0x000100d5) bg_button_pane_cp04

0xd90b,	// (0x0000f074) midp_keyp_sk_right_pane_g1

0x5075,	// (0x000067de) midp_keyp_rocker_pane_g1

0xd913,	// (0x0000f07c) keyp_game_cell_pane_ParamLimits

0xd913,	// (0x0000f07c) keyp_game_cell_pane

0xe96c,	// (0x000100d5) bg_button_pane_cp02

0xd939,	// (0x0000f0a2) keyp_game_cell_pane_g1

0xa487,	// (0x0000bbf0) popup_fep_vkb2_window_ParamLimits

0xa487,	// (0x0000bbf0) popup_fep_vkb2_window

0xd942,	// (0x0000f0ab) aid_size_cell_vkb2_ParamLimits

0xd942,	// (0x0000f0ab) aid_size_cell_vkb2

0xd96e,	// (0x0000f0d7) popup_fep_vkb2_window_g1_ParamLimits

0xd96e,	// (0x0000f0d7) popup_fep_vkb2_window_g1

0xd9be,	// (0x0000f127) vkb2_area_bottom_pane_ParamLimits

0xd9be,	// (0x0000f127) vkb2_area_bottom_pane

0xda1a,	// (0x0000f183) vkb2_area_keypad_pane_ParamLimits

0xda1a,	// (0x0000f183) vkb2_area_keypad_pane

0xda68,	// (0x0000f1d1) vkb2_area_top_pane_ParamLimits

0xda68,	// (0x0000f1d1) vkb2_area_top_pane

0xdaf5,	// (0x0000f25e) vkb2_top_entry_pane_ParamLimits

0xdaf5,	// (0x0000f25e) vkb2_top_entry_pane

0xdb22,	// (0x0000f28b) vkb2_top_grid_left_pane_ParamLimits

0xdb22,	// (0x0000f28b) vkb2_top_grid_left_pane

0xdb43,	// (0x0000f2ac) vkb2_top_grid_right_pane_ParamLimits

0xdb43,	// (0x0000f2ac) vkb2_top_grid_right_pane

0x7965,	// (0x000090ce) vkb2_cell_keypad_pane_ParamLimits

0x7965,	// (0x000090ce) vkb2_cell_keypad_pane

0xdb8b,	// (0x0000f2f4) vkb2_area_bottom_grid_pane_ParamLimits

0xdb8b,	// (0x0000f2f4) vkb2_area_bottom_grid_pane

0xdbb5,	// (0x0000f31e) vkb2_area_bottom_pane_g1_ParamLimits

0xdbb5,	// (0x0000f31e) vkb2_area_bottom_pane_g1

0xdbdb,	// (0x0000f344) vkb2_area_bottom_pane_g2_ParamLimits

0xdbdb,	// (0x0000f344) vkb2_area_bottom_pane_g2

0xdc0c,	// (0x0000f375) vkb2_area_bottom_pane_g3_ParamLimits

0xdc0c,	// (0x0000f375) vkb2_area_bottom_pane_g3

0x0002,

0xfd66,	// (0x000114cf) vkb2_area_bottom_pane_g_ParamLimits

0xfd66,	// (0x000114cf) vkb2_area_bottom_pane_g

0x7b0f,	// (0x00009278) vkb2_top_cell_left_pane_ParamLimits

0x7b0f,	// (0x00009278) vkb2_top_cell_left_pane

0xdc76,	// (0x0000f3df) vkb2_top_entry_pane_g1_ParamLimits

0xdc76,	// (0x0000f3df) vkb2_top_entry_pane_g1

0xdc84,	// (0x0000f3ed) vkb2_top_entry_pane_t1_ParamLimits

0xdc84,	// (0x0000f3ed) vkb2_top_entry_pane_t1

0x7b77,	// (0x000092e0) vkb2_top_entry_pane_t2_ParamLimits

0x7b77,	// (0x000092e0) vkb2_top_entry_pane_t2

0x7ba9,	// (0x00009312) vkb2_top_entry_pane_t3_ParamLimits

0x7ba9,	// (0x00009312) vkb2_top_entry_pane_t3

0x0002,

0xfd6d,	// (0x000114d6) vkb2_top_entry_pane_t_ParamLimits

0xfd6d,	// (0x000114d6) vkb2_top_entry_pane_t

0xdcbd,	// (0x0000f426) vkb2_top_grid_right_pane_g1_ParamLimits

0xdcbd,	// (0x0000f426) vkb2_top_grid_right_pane_g1

0x7c10,	// (0x00009379) vkb2_top_grid_right_pane_g2_ParamLimits

0x7c10,	// (0x00009379) vkb2_top_grid_right_pane_g2

0x7c28,	// (0x00009391) vkb2_top_grid_right_pane_g3_ParamLimits

0x7c28,	// (0x00009391) vkb2_top_grid_right_pane_g3

0xdcd3,	// (0x0000f43c) vkb2_top_grid_right_pane_g4_ParamLimits

0xdcd3,	// (0x0000f43c) vkb2_top_grid_right_pane_g4

0x0003,

0xfd74,	// (0x000114dd) vkb2_top_grid_right_pane_g_ParamLimits

0xfd74,	// (0x000114dd) vkb2_top_grid_right_pane_g

0x7c56,	// (0x000093bf) vkb2_top_cell_left_pane_g1

0x7c6d,	// (0x000093d6) vkb2_cell_keypad_pane_g1_ParamLimits

0x7c6d,	// (0x000093d6) vkb2_cell_keypad_pane_g1

0x7c7b,	// (0x000093e4) vkb2_cell_keypad_pane_t1_ParamLimits

0x7c7b,	// (0x000093e4) vkb2_cell_keypad_pane_t1

0x7c92,	// (0x000093fb) vkb2_cell_bottom_grid_pane_ParamLimits

0x7c92,	// (0x000093fb) vkb2_cell_bottom_grid_pane

0x7ccb,	// (0x00009434) vkb2_cell_bottom_grid_pane_g1

0xd5fc,	// (0x0000ed65) aid_call2_pane_cp02

0xd604,	// (0x0000ed6d) aid_call_pane_cp02

0xd60c,	// (0x0000ed75) clock_digital_number_pane_cp10

0xd614,	// (0x0000ed7d) clock_digital_number_pane_cp11

0xd61c,	// (0x0000ed85) clock_digital_number_pane_cp12

0xd624,	// (0x0000ed8d) clock_digital_number_pane_cp13

0xd62c,	// (0x0000ed95) clock_digital_separator_pane_cp10

0x0646,	// (0x00001daf) popup_clock_digital_analogue_window_cp2_g1

0x0646,	// (0x00001daf) popup_clock_digital_analogue_window_cp2_g2

0xd634,	// (0x0000ed9d) popup_clock_digital_analogue_window_cp2_g3

0x0646,	// (0x00001daf) popup_clock_digital_analogue_window_cp2_g4

0xd634,	// (0x0000ed9d) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd29,	// (0x00011492) popup_clock_digital_analogue_window_cp2_g

0xd63c,	// (0x0000eda5) popup_clock_digital_analogue_window_cp2_t1

0xd64a,	// (0x0000edb3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd34,	// (0x0001149d) popup_clock_digital_analogue_window_cp2_t

0x5075,	// (0x000067de) clock_digital_number_pane_cp10_g1

0x5075,	// (0x000067de) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1c,	// (0x00011285) clock_digital_number_pane_cp10_g

0x5075,	// (0x000067de) clock_digital_separator_pane_cp10_g1

0x5075,	// (0x000067de) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1c,	// (0x00011285) clock_digital_separator_pane_cp10_g

0x720a,	// (0x00008973) uniindi_top_pane_g3

0x721b,	// (0x00008984) uniindi_top_pane_g4

0x79f0,	// (0x00009159) vkb2_row_keypad_pane_ParamLimits

0x79f0,	// (0x00009159) vkb2_row_keypad_pane

0x7ce7,	// (0x00009450) vkb2_cell_t_keypad_pane_ParamLimits

0x7ce7,	// (0x00009450) vkb2_cell_t_keypad_pane

0x7cf7,	// (0x00009460) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7cf7,	// (0x00009460) vkb2_cell_t_keypad_pane_cp08

0x7d0c,	// (0x00009475) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7d0c,	// (0x00009475) vkb2_cell_t_keypad_pane_cp09

0x7d20,	// (0x00009489) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x7d20,	// (0x00009489) vkb2_cell_t_keypad_pane_cp01

0x7d31,	// (0x0000949a) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x7d31,	// (0x0000949a) vkb2_cell_t_keypad_pane_cp02

0x7d42,	// (0x000094ab) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7d42,	// (0x000094ab) vkb2_cell_t_keypad_pane_cp03

0x7d53,	// (0x000094bc) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7d53,	// (0x000094bc) vkb2_cell_t_keypad_pane_cp04

0x7d64,	// (0x000094cd) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7d64,	// (0x000094cd) vkb2_cell_t_keypad_pane_cp05

0x7d75,	// (0x000094de) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7d75,	// (0x000094de) vkb2_cell_t_keypad_pane_cp06

0x7d88,	// (0x000094f1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7d88,	// (0x000094f1) vkb2_cell_t_keypad_pane_cp07

0x7d9d,	// (0x00009506) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7d9d,	// (0x00009506) vkb2_cell_t_keypad_pane_cp10

0x551a,	// (0x00006c83) vkb2_cell_t_keypad_pane_g1

0x7db2,	// (0x0000951b) vkb2_cell_t_keypad_pane_t1

0xe96c,	// (0x000100d5) popup_grid_graphic2_window

0xdce9,	// (0x0000f452) aid_size_cell_graphic2_ParamLimits

0xdce9,	// (0x0000f452) aid_size_cell_graphic2

0xdd27,	// (0x0000f490) bg_popup_window_pane_cp21_ParamLimits

0xdd27,	// (0x0000f490) bg_popup_window_pane_cp21

0xdd35,	// (0x0000f49e) graphic2_pages_pane_ParamLimits

0xdd35,	// (0x0000f49e) graphic2_pages_pane

0xdd8d,	// (0x0000f4f6) grid_graphic2_control_pane_ParamLimits

0xdd8d,	// (0x0000f4f6) grid_graphic2_control_pane

0xddd5,	// (0x0000f53e) grid_graphic2_pane_ParamLimits

0xddd5,	// (0x0000f53e) grid_graphic2_pane

0xde60,	// (0x0000f5c9) cell_graphic2_pane

0xe96c,	// (0x000100d5) main_comp_mode_pane

0x693f,	// (0x000080a8) list_ai3_gene_pane_ParamLimits

0xd2cf,	// (0x0000ea38) bg_popup_window_pane_cp19_ParamLimits

0x6d76,	// (0x000084df) bg_touch_area_indi_pane_ParamLimits

0x6d76,	// (0x000084df) bg_touch_area_indi_pane

0x6d8c,	// (0x000084f5) bg_touch_area_indi_pane_cp01_ParamLimits

0x6d8c,	// (0x000084f5) bg_touch_area_indi_pane_cp01

0x6da2,	// (0x0000850b) bg_touch_area_indi_pane_cp02_ParamLimits

0x6da2,	// (0x0000850b) bg_touch_area_indi_pane_cp02

0x6dbc,	// (0x00008525) bg_touch_area_indi_pane_cp03_ParamLimits

0x6dbc,	// (0x00008525) bg_touch_area_indi_pane_cp03

0x6dd6,	// (0x0000853f) popup_slider_window_g1_ParamLimits

0x6df2,	// (0x0000855b) popup_slider_window_g2_ParamLimits

0x6e0e,	// (0x00008577) popup_slider_window_g3_ParamLimits

0xfcbe,	// (0x00011427) popup_slider_window_g_ParamLimits

0x6e74,	// (0x000085dd) popup_slider_window_t1_ParamLimits

0x6ee8,	// (0x00008651) small_volume_slider_vertical_pane_ParamLimits

0xde60,	// (0x0000f5c9) cell_graphic2_pane_ParamLimits

0xdec2,	// (0x0000f62b) bg_button_pane_cp10_ParamLimits

0xdec2,	// (0x0000f62b) bg_button_pane_cp10

0xded5,	// (0x0000f63e) bg_button_pane_cp11_ParamLimits

0xded5,	// (0x0000f63e) bg_button_pane_cp11

0xdee8,	// (0x0000f651) graphic2_pages_pane_g1_ParamLimits

0xdee8,	// (0x0000f651) graphic2_pages_pane_g1

0xdf03,	// (0x0000f66c) graphic2_pages_pane_g2_ParamLimits

0xdf03,	// (0x0000f66c) graphic2_pages_pane_g2

0x0001,

0xfd82,	// (0x000114eb) graphic2_pages_pane_g_ParamLimits

0xfd82,	// (0x000114eb) graphic2_pages_pane_g

0xdf1b,	// (0x0000f684) graphic2_pages_pane_t1_ParamLimits

0xdf1b,	// (0x0000f684) graphic2_pages_pane_t1

0xdf33,	// (0x0000f69c) cell_graphic2_control_pane_ParamLimits

0xdf33,	// (0x0000f69c) cell_graphic2_control_pane

0xdf61,	// (0x0000f6ca) cell_graphic2_pane_g1_ParamLimits

0xdf61,	// (0x0000f6ca) cell_graphic2_pane_g1

0x533c,	// (0x00006aa5) cell_graphic2_pane_g2_ParamLimits

0x533c,	// (0x00006aa5) cell_graphic2_pane_g2

0xdf6e,	// (0x0000f6d7) cell_graphic2_pane_g3_ParamLimits

0xdf6e,	// (0x0000f6d7) cell_graphic2_pane_g3

0x5349,	// (0x00006ab2) cell_graphic2_pane_g4_ParamLimits

0x5349,	// (0x00006ab2) cell_graphic2_pane_g4

0xdf7b,	// (0x0000f6e4) cell_graphic2_pane_g5_ParamLimits

0xdf7b,	// (0x0000f6e4) cell_graphic2_pane_g5

0x0004,

0xfd87,	// (0x000114f0) cell_graphic2_pane_g_ParamLimits

0xfd87,	// (0x000114f0) cell_graphic2_pane_g

0xdf97,	// (0x0000f700) cell_graphic2_pane_t1_ParamLimits

0xdf97,	// (0x0000f700) cell_graphic2_pane_t1

0x30d2,	// (0x0000483b) grid_highlight_pane_cp11_ParamLimits

0x30d2,	// (0x0000483b) grid_highlight_pane_cp11

0xed7f,	// (0x000104e8) bg_button_pane_cp05

0xdfe0,	// (0x0000f749) cell_graphic2_control_pane_g1

0x5075,	// (0x000067de) bg_touch_area_indi_pane_g1

0x8095,	// (0x000097fe) aid_cmod_rocker_key_size

0x809f,	// (0x00009808) aid_cmode_itu_key_size

0x80a9,	// (0x00009812) main_cmode_video_pane

0x80b3,	// (0x0000981c) main_comp_mode_itu_pane

0x80bf,	// (0x00009828) main_comp_mode_rocker_pane

0x80cb,	// (0x00009834) cell_cmode_rocker_pane_ParamLimits

0x80cb,	// (0x00009834) cell_cmode_rocker_pane

0x80df,	// (0x00009848) cell_cmode_itu_pane_ParamLimits

0x80df,	// (0x00009848) cell_cmode_itu_pane

0xf321,	// (0x00010a8a) bg_button_pane_cp06_ParamLimits

0xf321,	// (0x00010a8a) bg_button_pane_cp06

0x551a,	// (0x00006c83) cell_cmode_rocker_pane_g1_ParamLimits

0x551a,	// (0x00006c83) cell_cmode_rocker_pane_g1

0x7062,	// (0x000087cb) cell_cmode_rocker_pane_g2_ParamLimits

0x7062,	// (0x000087cb) cell_cmode_rocker_pane_g2

0x0001,

0xfd97,	// (0x00011500) cell_cmode_rocker_pane_g_ParamLimits

0xfd97,	// (0x00011500) cell_cmode_rocker_pane_g

0xe96c,	// (0x000100d5) bg_button_pane_cp07

0x80f6,	// (0x0000985f) cell_cmode_itu_pane_g1

0x80ff,	// (0x00009868) cell_cmode_itu_pane_t1

0x810d,	// (0x00009876) cell_cmode_itu_pane_t2

0x0001,

0xfd9c,	// (0x00011505) cell_cmode_itu_pane_t

0x728f,	// (0x000089f8) aid_touch_ctrl_left

0x7297,	// (0x00008a00) aid_touch_ctrl_right

0xe96c,	// (0x000100d5) compa_mode_pane

0xe008,	// (0x0000f771) aid_cmod_rocker_key_size_cp

0xe012,	// (0x0000f77b) aid_cmode_itu_key_size_cp

0x812f,	// (0x00009898) compa_mode_pane_g1

0x8137,	// (0x000098a0) compa_mode_pane_g2

0x813f,	// (0x000098a8) compa_mode_pane_g3

0x0002,

0xfda1,	// (0x0001150a) compa_mode_pane_g

0xe01c,	// (0x0000f785) main_comp_mode_itu_pane_cp

0xe024,	// (0x0000f78d) main_comp_mode_rocker_pane_cp

0xe02c,	// (0x0000f795) cell_cmode_itu_pane_cp_ParamLimits

0xe02c,	// (0x0000f795) cell_cmode_itu_pane_cp

0xe041,	// (0x0000f7aa) cell_cmode_rocker_pane_cp_ParamLimits

0xe041,	// (0x0000f7aa) cell_cmode_rocker_pane_cp

0xf321,	// (0x00010a8a) bg_button_pane_cp06_cp_ParamLimits

0xf321,	// (0x00010a8a) bg_button_pane_cp06_cp

0x551a,	// (0x00006c83) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x551a,	// (0x00006c83) cell_cmode_rocker_pane_g1_cp

0x5075,	// (0x000067de) cell_cmode_rocker_pane_g2_cp

0xe96c,	// (0x000100d5) bg_button_pane_cp07_cp

0xe053,	// (0x0000f7bc) cell_cmode_itu_pane_g1_cp

0xe05c,	// (0x0000f7c5) cell_cmode_itu_pane_t1_cp

0xe05c,	// (0x0000f7c5) cell_cmode_itu_pane_t2_cp

0xc665,	// (0x0000ddce) settings_code_pane_cp2

0xeba9,	// (0x00010312) bg_popup_window_pane_cp3_ParamLimits

0xef93,	// (0x000106fc) heading_pane_cp3_ParamLimits

0xefa2,	// (0x0001070b) listscroll_popup_graphic_pane_ParamLimits

0x50e4,	// (0x0000684d) fep_hwr_aid_pane_ParamLimits

0x6f63,	// (0x000086cc) aid_touch_sctrl_top_ParamLimits

0x6f70,	// (0x000086d9) sctrl_sk_top_pane_g1_ParamLimits

0x551a,	// (0x00006c83) sctrl_sk_top_pane_g2_ParamLimits

0xfcd7,	// (0x00011440) sctrl_sk_top_pane_g_ParamLimits

0x6f7d,	// (0x000086e6) sctrl_sk_top_pane_t1_ParamLimits

0x6f63,	// (0x000086cc) aid_touch_sctrl_bottom_ParamLimits

0x6f7d,	// (0x000086e6) sctrl_sk_bottom_pane_t1_ParamLimits

0x71d4,	// (0x0000893d) aid_area_touch_clock

0xdab4,	// (0x0000f21d) aid_vkb2_area_top_pane_cell_ParamLimits

0xdab4,	// (0x0000f21d) aid_vkb2_area_top_pane_cell

0xdb64,	// (0x0000f2cd) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdb64,	// (0x0000f2cd) aid_vkb2_area_bottom_pane_cell

0x7b2f,	// (0x00009298) popup_char_count_window

0x8195,	// (0x000098fe) popup_char_count_window_g1

0x819e,	// (0x00009907) popup_char_count_window_g2

0x81a7,	// (0x00009910) popup_char_count_window_g3

0x0002,

0xfda8,	// (0x00011511) popup_char_count_window_g

0x81b0,	// (0x00009919) popup_char_count_window_t1

0x7779,	// (0x00008ee2) popup_fep_char_preview_window_ParamLimits

0x7779,	// (0x00008ee2) popup_fep_char_preview_window

0xdad4,	// (0x0000f23d) vkb2_top_candi_pane_ParamLimits

0xdad4,	// (0x0000f23d) vkb2_top_candi_pane

0xe06a,	// (0x0000f7d3) cell_vkb2_top_candi_pane_ParamLimits

0xe06a,	// (0x0000f7d3) cell_vkb2_top_candi_pane

0x2900,	// (0x00004069) bg_popup_fep_char_preview_window_ParamLimits

0x2900,	// (0x00004069) bg_popup_fep_char_preview_window

0x820c,	// (0x00009975) popup_fep_char_preview_window_t1_ParamLimits

0x820c,	// (0x00009975) popup_fep_char_preview_window_t1

0x8246,	// (0x000099af) bg_popup_fep_char_preview_window_g1

0x824e,	// (0x000099b7) bg_popup_fep_char_preview_window_g2

0x8256,	// (0x000099bf) bg_popup_fep_char_preview_window_g3

0x825e,	// (0x000099c7) bg_popup_fep_char_preview_window_g4

0x8266,	// (0x000099cf) bg_popup_fep_char_preview_window_g5

0x826e,	// (0x000099d7) bg_popup_fep_char_preview_window_g6

0x8276,	// (0x000099df) bg_popup_fep_char_preview_window_g7

0x827e,	// (0x000099e7) bg_popup_fep_char_preview_window_g8

0x8286,	// (0x000099ef) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdaf,	// (0x00011518) bg_popup_fep_char_preview_window_g

0x551a,	// (0x00006c83) cell_vkb2_top_candi_pane_g1_ParamLimits

0x551a,	// (0x00006c83) cell_vkb2_top_candi_pane_g1

0x58af,	// (0x00007018) cell_vkb2_top_candi_pane_g2_ParamLimits

0x58af,	// (0x00007018) cell_vkb2_top_candi_pane_g2

0x58d0,	// (0x00007039) cell_vkb2_top_candi_pane_g3_ParamLimits

0x58d0,	// (0x00007039) cell_vkb2_top_candi_pane_g3

0x8296,	// (0x000099ff) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8296,	// (0x000099ff) cell_vkb2_top_candi_pane_g4

0x82b7,	// (0x00009a20) cell_vkb2_top_candi_pane_g5_ParamLimits

0x82b7,	// (0x00009a20) cell_vkb2_top_candi_pane_g5

0x7062,	// (0x000087cb) cell_vkb2_top_candi_pane_g6_ParamLimits

0x7062,	// (0x000087cb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdc4,	// (0x0001152d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdc4,	// (0x0001152d) cell_vkb2_top_candi_pane_g

0x82d8,	// (0x00009a41) cell_vkb2_top_candi_pane_t1

0x3821,	// (0x00004f8a) aid_size_touch_slider_mark_ParamLimits

0x3821,	// (0x00004f8a) aid_size_touch_slider_mark

0xdd71,	// (0x0000f4da) grid_graphic2_catg_pane_ParamLimits

0xdd71,	// (0x0000f4da) grid_graphic2_catg_pane

0xde2f,	// (0x0000f598) popup_grid_graphic2_window_t1_ParamLimits

0xde2f,	// (0x0000f598) popup_grid_graphic2_window_t1

0xde45,	// (0x0000f5ae) popup_grid_graphic2_window_t2_ParamLimits

0xde45,	// (0x0000f5ae) popup_grid_graphic2_window_t2

0x0001,

0xfd7d,	// (0x000114e6) popup_grid_graphic2_window_t_ParamLimits

0xfd7d,	// (0x000114e6) popup_grid_graphic2_window_t

0xed7f,	// (0x000104e8) bg_button_pane_cp05_ParamLimits

0xdfe0,	// (0x0000f749) cell_graphic2_control_pane_g1_ParamLimits

0xe0d6,	// (0x0000f83f) cell_graphic2_catg_pane_ParamLimits

0xe0d6,	// (0x0000f83f) cell_graphic2_catg_pane

0xe96c,	// (0x000100d5) bg_button_pane_cp12

0xe0e8,	// (0x0000f851) cell_graphic2_catg_pane_g1

0x71a0,	// (0x00008909) cell_tb_ext_pane_t1_ParamLimits

0x7bcd,	// (0x00009336) vkb2_top_cell_right_narrow_pane_ParamLimits

0x7bcd,	// (0x00009336) vkb2_top_cell_right_narrow_pane

0x7be5,	// (0x0000934e) vkb2_top_cell_right_wide_pane_ParamLimits

0x7be5,	// (0x0000934e) vkb2_top_cell_right_wide_pane

0x50d6,	// (0x0000683f) bg_vkb2_func_pane_ParamLimits

0x50d6,	// (0x0000683f) bg_vkb2_func_pane

0x7c56,	// (0x000093bf) vkb2_top_cell_left_pane_g1_ParamLimits

0x50d6,	// (0x0000683f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x50d6,	// (0x0000683f) bg_vkb2_fuc_pane_cp03

0x7ccb,	// (0x00009434) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x20be,	// (0x00003827) bg_vkb2_func_pane_g1

0x20c6,	// (0x0000382f) bg_vkb2_func_pane_g2

0x20d6,	// (0x0000383f) bg_vkb2_func_pane_g3

0x20ce,	// (0x00003837) bg_vkb2_func_pane_g4

0x20de,	// (0x00003847) bg_vkb2_func_pane_g5

0x20e6,	// (0x0000384f) bg_vkb2_func_pane_g6

0x20ee,	// (0x00003857) bg_vkb2_func_pane_g7

0x20f6,	// (0x0000385f) bg_vkb2_func_pane_g8

0x20b6,	// (0x0000381f) bg_vkb2_func_pane_g9

0x0008,

0xfdd1,	// (0x0001153a) bg_vkb2_func_pane_g

0x50d6,	// (0x0000683f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x50d6,	// (0x0000683f) bg_vkb2_fuc_pane_cp01

0x7c56,	// (0x000093bf) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7c56,	// (0x000093bf) vkb2_top_cell_right_wide_pane_g1

0x50d6,	// (0x0000683f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x50d6,	// (0x0000683f) bg_vkb2_fuc_pane_cp02

0x8311,	// (0x00009a7a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8311,	// (0x00009a7a) vkb2_top_cell_right_narrow_pane_g1

0xd211,	// (0x0000e97a) aid_touch_area_decrease_ParamLimits

0xd211,	// (0x0000e97a) aid_touch_area_decrease

0xd24b,	// (0x0000e9b4) aid_touch_area_increase_ParamLimits

0xd24b,	// (0x0000e9b4) aid_touch_area_increase

0xd273,	// (0x0000e9dc) aid_touch_area_mute_ParamLimits

0xd273,	// (0x0000e9dc) aid_touch_area_mute

0xd29b,	// (0x0000ea04) aid_touch_area_slider_ParamLimits

0xd29b,	// (0x0000ea04) aid_touch_area_slider

0xd2db,	// (0x0000ea44) popup_slider_window_g4_ParamLimits

0xd2db,	// (0x0000ea44) popup_slider_window_g4

0xd303,	// (0x0000ea6c) popup_slider_window_g5_ParamLimits

0xd303,	// (0x0000ea6c) popup_slider_window_g5

0xd337,	// (0x0000eaa0) popup_slider_window_g6_ParamLimits

0xd337,	// (0x0000eaa0) popup_slider_window_g6

0x6ea2,	// (0x0000860b) popup_slider_window_t2_ParamLimits

0x6ea2,	// (0x0000860b) popup_slider_window_t2

0x0001,

0xfccb,	// (0x00011434) popup_slider_window_t_ParamLimits

0xfccb,	// (0x00011434) popup_slider_window_t

0xd353,	// (0x0000eabc) slider_pane_ParamLimits

0xd353,	// (0x0000eabc) slider_pane

0x832d,	// (0x00009a96) slider_pane_g1_ParamLimits

0x832d,	// (0x00009a96) slider_pane_g1

0x8341,	// (0x00009aaa) slider_pane_g2_ParamLimits

0x8341,	// (0x00009aaa) slider_pane_g2

0x8357,	// (0x00009ac0) slider_pane_g3_ParamLimits

0x8357,	// (0x00009ac0) slider_pane_g3

0x0003,

0xfde4,	// (0x0001154d) slider_pane_g_ParamLimits

0xfde4,	// (0x0001154d) slider_pane_g

0xbbe3,	// (0x0000d34c) popup_tb_float_extension_window_ParamLimits

0xbbe3,	// (0x0000d34c) popup_tb_float_extension_window

0x8383,	// (0x00009aec) aid_size_cell_tb_float_ext

0xe96c,	// (0x000100d5) bg_popup_sub_window_cp28

0x838f,	// (0x00009af8) grid_tb_float_ext_pane

0x839b,	// (0x00009b04) cell_tb_float_ext_pane_ParamLimits

0x839b,	// (0x00009b04) cell_tb_float_ext_pane

0x83b7,	// (0x00009b20) cell_tb_float_ext_pane_g1

0x83c0,	// (0x00009b29) grid_highlight_pane_cp12

0xca87,	// (0x0000e1f0) cell_last_hwr_side_pane_ParamLimits

0xca87,	// (0x0000e1f0) cell_last_hwr_side_pane

0x5075,	// (0x000067de) cell_last_hwr_side_pane_g1

0x83c9,	// (0x00009b32) cell_last_hwr_side_pane_g2

0x0001,

0xfded,	// (0x00011556) cell_last_hwr_side_pane_g

0xdc41,	// (0x0000f3aa) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdc41,	// (0x0000f3aa) vkb2_area_bottom_space_btn_pane

0x551a,	// (0x00006c83) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7db2,	// (0x0000951b) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x82d8,	// (0x00009a41) cell_vkb2_top_candi_pane_t1_ParamLimits

0x83d2,	// (0x00009b3b) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x83d2,	// (0x00009b3b) vkb2_area_bottom_space_btn_pane_g1

0x840c,	// (0x00009b75) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x840c,	// (0x00009b75) vkb2_area_bottom_space_btn_pane_g2

0x8442,	// (0x00009bab) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8442,	// (0x00009bab) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdf2,	// (0x0001155b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdf2,	// (0x0001155b) vkb2_area_bottom_space_btn_pane_g

0x519b,	// (0x00006904) cel_fep_hwr_func_pane_ParamLimits

0x519b,	// (0x00006904) cel_fep_hwr_func_pane

0xca5c,	// (0x0000e1c5) cell_hwr_side_button_pane_ParamLimits

0xca5c,	// (0x0000e1c5) cell_hwr_side_button_pane

0x71d4,	// (0x0000893d) aid_area_touch_clock_ParamLimits

0xed7f,	// (0x000104e8) bg_uniindi_top_pane_ParamLimits

0x71e8,	// (0x00008951) uniindi_top_pane_g1_ParamLimits

0x71fe,	// (0x00008967) uniindi_top_pane_g2_ParamLimits

0x720a,	// (0x00008973) uniindi_top_pane_g3_ParamLimits

0x721b,	// (0x00008984) uniindi_top_pane_g4_ParamLimits

0xfd03,	// (0x0001146c) uniindi_top_pane_g_ParamLimits

0x7228,	// (0x00008991) uniindi_top_pane_t1_ParamLimits

0xed7f,	// (0x000104e8) bg_vkb2_func_pane_cp01_ParamLimits

0xed7f,	// (0x000104e8) bg_vkb2_func_pane_cp01

0x848c,	// (0x00009bf5) cel_fep_hwr_func_pane_g1_ParamLimits

0x848c,	// (0x00009bf5) cel_fep_hwr_func_pane_g1

0xed7f,	// (0x000104e8) bg_vkb2_func_pane_cp02_ParamLimits

0xed7f,	// (0x000104e8) bg_vkb2_func_pane_cp02

0x848c,	// (0x00009bf5) cell_hwr_side_button_pane_g1_ParamLimits

0x848c,	// (0x00009bf5) cell_hwr_side_button_pane_g1

0x1e89,	// (0x000035f2) status_pane_g4_ParamLimits

0x1e89,	// (0x000035f2) status_pane_g4

0x1ea3,	// (0x0000360c) status_pane_t1

0x4e28,	// (0x00006591) form2_midp_gauge_slider_cont_pane

0x4e30,	// (0x00006599) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc98d,	// (0x0000e0f6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc99f,	// (0x0000e108) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfacf,	// (0x00011238) form2_midp_gauge_slider_pane_t_ParamLimits

0x4e66,	// (0x000065cf) form2_midp_slider_pane_ParamLimits

0x7741,	// (0x00008eaa) aid_size_cell_func_vkb2_ParamLimits

0x7741,	// (0x00008eaa) aid_size_cell_func_vkb2

0x836f,	// (0x00009ad8) slider_pane_g4_ParamLimits

0x836f,	// (0x00009ad8) slider_pane_g4

0xe0f1,	// (0x0000f85a) form2_midp_gauge_slider_pane_t2_cp01

0xe0ff,	// (0x0000f868) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe0ff,	// (0x0000f868) form2_midp_gauge_slider_pane_t3_cp01

0x84c5,	// (0x00009c2e) form2_midp_slider_pane_cp01

0xe96c,	// (0x000100d5) navi_smil_pane

0x84f9,	// (0x00009c62) navi_smil_pane_g1

0x8501,	// (0x00009c6a) navi_smil_pane_t1

0x84ce,	// (0x00009c37) form2_midp_slider_pane_g1

0x84d7,	// (0x00009c40) form2_midp_slider_pane_g2

0x84df,	// (0x00009c48) form2_midp_slider_pane_g3

0x84ce,	// (0x00009c37) form2_midp_slider_pane_g4

0xe11c,	// (0x0000f885) form2_midp_slider_pane_g5

0x0004,

0xfdfb,	// (0x00011564) form2_midp_slider_pane_g

0x847c,	// (0x00009be5) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x847c,	// (0x00009be5) vkb2_area_bottom_space_btn_pane_g4

0xbdca,	// (0x0000d533) lc0_navi_pane_ParamLimits

0xbdca,	// (0x0000d533) lc0_navi_pane

0xbe3a,	// (0x0000d5a3) lc0_stat_indi_pane_ParamLimits

0xbe3a,	// (0x0000d5a3) lc0_stat_indi_pane

0xbe4f,	// (0x0000d5b8) ls0_title_pane_ParamLimits

0xbe4f,	// (0x0000d5b8) ls0_title_pane

0xf321,	// (0x00010a8a) bg_popup_sub_pane_cp14_ParamLimits

0x71bb,	// (0x00008924) list_uniindi_pane_ParamLimits

0x71c7,	// (0x00008930) uniindi_top_pane_ParamLimits

0x7267,	// (0x000089d0) list_single_uniindi_pane_g1_ParamLimits

0x727a,	// (0x000089e3) list_single_uniindi_pane_t1_ParamLimits

0xe125,	// (0x0000f88e) lc0_stat_clock_pane_ParamLimits

0xe125,	// (0x0000f88e) lc0_stat_clock_pane

0xe132,	// (0x0000f89b) lc0_stat_indi_pane_g1_ParamLimits

0xe132,	// (0x0000f89b) lc0_stat_indi_pane_g1

0xe13f,	// (0x0000f8a8) lc0_stat_indi_pane_g2_ParamLimits

0xe13f,	// (0x0000f8a8) lc0_stat_indi_pane_g2

0x0001,

0xfe06,	// (0x0001156f) lc0_stat_indi_pane_g_ParamLimits

0xfe06,	// (0x0001156f) lc0_stat_indi_pane_g

0xe14c,	// (0x0000f8b5) lc0_uni_indicator_pane_ParamLimits

0xe14c,	// (0x0000f8b5) lc0_uni_indicator_pane

0xe159,	// (0x0000f8c2) ls0_title_pane_g1_ParamLimits

0xe159,	// (0x0000f8c2) ls0_title_pane_g1

0xe16d,	// (0x0000f8d6) ls0_title_pane_t1_ParamLimits

0xe16d,	// (0x0000f8d6) ls0_title_pane_t1

0xe19b,	// (0x0000f904) lc0_uni_indicator_pane_g1_ParamLimits

0xe19b,	// (0x0000f904) lc0_uni_indicator_pane_g1

0x85a0,	// (0x00009d09) lc0_stat_clock_pane_t1

0xe96c,	// (0x000100d5) main_ai5_pane

0x85ae,	// (0x00009d17) ai5_sk_pane_ParamLimits

0x85ae,	// (0x00009d17) ai5_sk_pane

0xe1ba,	// (0x0000f923) cell_ai5_widget_pane_ParamLimits

0xe1ba,	// (0x0000f923) cell_ai5_widget_pane

0xe229,	// (0x0000f992) aid_size_cell_widget_grid

0x866c,	// (0x00009dd5) bg_ai5_widget_pane_ParamLimits

0x866c,	// (0x00009dd5) bg_ai5_widget_pane

0xe25d,	// (0x0000f9c6) cell_ai5_widget_pane_g2

0xe271,	// (0x0000f9da) cell_ai5_widget_pane_g3

0xe28b,	// (0x0000f9f4) cell_ai5_widget_pane_g4

0xe29b,	// (0x0000fa04) cell_ai5_widget_pane_g5

0xe2ab,	// (0x0000fa14) cell_ai5_widget_pane_g6

0xe2b7,	// (0x0000fa20) cell_ai5_widget_pane_g7

0xe2db,	// (0x0000fa44) cell_ai5_widget_pane_t1_ParamLimits

0xe2db,	// (0x0000fa44) cell_ai5_widget_pane_t1

0x87cb,	// (0x00009f34) cell_ai5_widget_pane_t2_ParamLimits

0x87cb,	// (0x00009f34) cell_ai5_widget_pane_t2

0x87e3,	// (0x00009f4c) cell_ai5_widget_pane_t3_ParamLimits

0x87e3,	// (0x00009f4c) cell_ai5_widget_pane_t3

0xe2f8,	// (0x0000fa61) cell_ai5_widget_pane_t4_ParamLimits

0xe2f8,	// (0x0000fa61) cell_ai5_widget_pane_t4

0xe31e,	// (0x0000fa87) cell_ai5_widget_pane_t5_ParamLimits

0xe31e,	// (0x0000fa87) cell_ai5_widget_pane_t5

0x8841,	// (0x00009faa) cell_ai5_widget_pane_t6_ParamLimits

0x8841,	// (0x00009faa) cell_ai5_widget_pane_t6

0x8853,	// (0x00009fbc) cell_ai5_widget_pane_t7_ParamLimits

0x8853,	// (0x00009fbc) cell_ai5_widget_pane_t7

0x8872,	// (0x00009fdb) cell_ai5_widget_pane_t8_ParamLimits

0x8872,	// (0x00009fdb) cell_ai5_widget_pane_t8

0x000b,

0xfe26,	// (0x0001158f) cell_ai5_widget_pane_t_ParamLimits

0xfe26,	// (0x0001158f) cell_ai5_widget_pane_t

0xe3b0,	// (0x0000fb19) grid_ai5_widget_pane

0xf321,	// (0x00010a8a) highlight_cell_ai5_widget_pane_ParamLimits

0xf321,	// (0x00010a8a) highlight_cell_ai5_widget_pane

0xe3be,	// (0x0000fb27) ai5_sk_left_pane

0xe3c8,	// (0x0000fb31) ai5_sk_middle_pane

0xe3d2,	// (0x0000fb3b) ai5_sk_right_pane

0x8922,	// (0x0000a08b) bg_ai5_widget_pane_g1_ParamLimits

0x8922,	// (0x0000a08b) bg_ai5_widget_pane_g1

0x892e,	// (0x0000a097) bg_ai5_widget_pane_g2_ParamLimits

0x892e,	// (0x0000a097) bg_ai5_widget_pane_g2

0x893a,	// (0x0000a0a3) bg_ai5_widget_pane_g3_ParamLimits

0x893a,	// (0x0000a0a3) bg_ai5_widget_pane_g3

0x8946,	// (0x0000a0af) bg_ai5_widget_pane_g4_ParamLimits

0x8946,	// (0x0000a0af) bg_ai5_widget_pane_g4

0x8952,	// (0x0000a0bb) bg_ai5_widget_pane_g5_ParamLimits

0x8952,	// (0x0000a0bb) bg_ai5_widget_pane_g5

0x895e,	// (0x0000a0c7) bg_ai5_widget_pane_g6_ParamLimits

0x895e,	// (0x0000a0c7) bg_ai5_widget_pane_g6

0x896a,	// (0x0000a0d3) bg_ai5_widget_pane_g7_ParamLimits

0x896a,	// (0x0000a0d3) bg_ai5_widget_pane_g7

0x8976,	// (0x0000a0df) bg_ai5_widget_pane_g8_ParamLimits

0x8976,	// (0x0000a0df) bg_ai5_widget_pane_g8

0x8982,	// (0x0000a0eb) bg_ai5_widget_pane_g9_ParamLimits

0x8982,	// (0x0000a0eb) bg_ai5_widget_pane_g9

0x0008,

0xfe3f,	// (0x000115a8) bg_ai5_widget_pane_g_ParamLimits

0xfe3f,	// (0x000115a8) bg_ai5_widget_pane_g

0xe408,	// (0x0000fb71) cell_shortcut_ai5_widget_pane_ParamLimits

0xe408,	// (0x0000fb71) cell_shortcut_ai5_widget_pane

0x0f31,	// (0x0000269a) bg_cell_shortcut_ai5_widget_pane

0x89cd,	// (0x0000a136) cell_grid_ai5_widget_pane_g1

0x0f31,	// (0x0000269a) highlight_cell_shortcut_ai5_widget_pane

0x20c6,	// (0x0000382f) ai5_sk_left_pane_g1

0x89d6,	// (0x0000a13f) ai5_sk_left_pane_g2

0x89de,	// (0x0000a147) ai5_sk_left_pane_g3

0x89e6,	// (0x0000a14f) ai5_sk_left_pane_g4

0x0003,

0xfe52,	// (0x000115bb) ai5_sk_left_pane_g

0x89ee,	// (0x0000a157) ai5_sk_left_pane_t1

0x20be,	// (0x00003827) ai5_sk_right_pane_g1

0x89fc,	// (0x0000a165) ai5_sk_right_pane_g2

0x8a04,	// (0x0000a16d) ai5_sk_right_pane_g3

0x8a0c,	// (0x0000a175) ai5_sk_right_pane_g4

0x0003,

0xfe5b,	// (0x000115c4) ai5_sk_right_pane_g

0x8a14,	// (0x0000a17d) ai5_sk_right_pane_t1

0x20be,	// (0x00003827) ai5_sk_middle_pane_g1

0x20c6,	// (0x0000382f) ai5_sk_middle_pane_g2

0x20de,	// (0x00003847) ai5_sk_middle_pane_g3

0x8a04,	// (0x0000a16d) ai5_sk_middle_pane_g4

0x89de,	// (0x0000a147) ai5_sk_middle_pane_g5

0x8a22,	// (0x0000a18b) ai5_sk_middle_pane_g6

0xe41b,	// (0x0000fb84) ai5_sk_middle_pane_g7

0x0006,

0xfe64,	// (0x000115cd) ai5_sk_middle_pane_g

0xbcb4,	// (0x0000d41d) aid_touch_area_size_lc0_ParamLimits

0xbcb4,	// (0x0000d41d) aid_touch_area_size_lc0

0x58f1,	// (0x0000705a) cell_hwr_candidate_pane_t1_ParamLimits

0x1b4c,	// (0x000032b5) aid_touch_navi_pane

0xbf5a,	// (0x0000d6c3) status_dt_navi_pane_ParamLimits

0xbf5a,	// (0x0000d6c3) status_dt_navi_pane

0xbf72,	// (0x0000d6db) status_dt_sta_pane_ParamLimits

0xbf72,	// (0x0000d6db) status_dt_sta_pane

0xe423,	// (0x0000fb8c) dt_sta_controll_pane

0xe430,	// (0x0000fb99) dt_sta_indi_pane

0xe43d,	// (0x0000fba6) dt_sta_title_pane

0xed7f,	// (0x000104e8) bg_dt_sta_indi_pane_ParamLimits

0xed7f,	// (0x000104e8) bg_dt_sta_indi_pane

0xe44f,	// (0x0000fbb8) dt_sta_battery_pane

0xe457,	// (0x0000fbc0) dt_sta_indi_pane_g1

0xe460,	// (0x0000fbc9) dt_sta_indi_pane_g2

0xe469,	// (0x0000fbd2) dt_sta_indi_pane_g3

0x0002,

0xfe73,	// (0x000115dc) dt_sta_indi_pane_g

0xe472,	// (0x0000fbdb) dt_sta_signal_pane

0xf321,	// (0x00010a8a) bg_dt_sta_title_pane_ParamLimits

0xf321,	// (0x00010a8a) bg_dt_sta_title_pane

0xe47b,	// (0x0000fbe4) dt_sta_title_pane_g1

0xe483,	// (0x0000fbec) dt_sta_title_pane_t1_ParamLimits

0xe483,	// (0x0000fbec) dt_sta_title_pane_t1

0xe96c,	// (0x000100d5) bg_dt_sta_control_pane

0xe498,	// (0x0000fc01) dt_sta_controll_pane_g1

0xe4a1,	// (0x0000fc0a) bg_dt_sta_title_pane_g1

0xe4aa,	// (0x0000fc13) bg_dt_sta_title_pane_g2

0xe4b3,	// (0x0000fc1c) bg_dt_sta_title_pane_g3

0x0002,

0xfe7a,	// (0x000115e3) bg_dt_sta_title_pane_g

0x5075,	// (0x000067de) bg_dt_sta_indi_pane_g1

0x8ad0,	// (0x0000a239) dt_sta_signal_pane_g1

0x8ad8,	// (0x0000a241) dt_sta_signal_pane_g2

0x0001,

0xfe81,	// (0x000115ea) dt_sta_signal_pane_g

0x8ae0,	// (0x0000a249) dt_sta_battery_pane_g1

0x8ae9,	// (0x0000a252) dt_sta_battery_pane_t1

0x5075,	// (0x000067de) bg_dt_sta_control_pane_g1

0x0846,	// (0x00001faf) fep_china_uni_eep_pane

0x084e,	// (0x00001fb7) fep_china_uni_entry_pane_ParamLimits

0x085e,	// (0x00001fc7) popup_fep_china_uni_window_g1_ParamLimits

0x086e,	// (0x00001fd7) popup_fep_china_uni_window_g2_ParamLimits

0x086e,	// (0x00001fd7) popup_fep_china_uni_window_g2

0x0001,

0xf6f3,	// (0x00010e5c) popup_fep_china_uni_window_g_ParamLimits

0xf6f3,	// (0x00010e5c) popup_fep_china_uni_window_g

0x8af8,	// (0x0000a261) fep_china_uni_eep_pane_g1

0x8b00,	// (0x0000a269) fep_china_uni_eep_pane_t1

0x84f0,	// (0x00009c59) aid_touch_area_size_smil_player

0x1ca0,	// (0x00003409) lc0_clock_pane

0x1e97,	// (0x00003600) status_pane_g5_ParamLimits

0x1e97,	// (0x00003600) status_pane_g5

0xb70b,	// (0x0000ce74) popup_keymap_window

0x1e5d,	// (0x000035c6) status_icon_pane

0xe271,	// (0x0000f9da) cell_ai5_widget_pane_g3_ParamLimits

0xe28b,	// (0x0000f9f4) cell_ai5_widget_pane_g4_ParamLimits

0xe29b,	// (0x0000fa04) cell_ai5_widget_pane_g5_ParamLimits

0x874e,	// (0x00009eb7) cell_ai5_widget_pane_g8_ParamLimits

0x874e,	// (0x00009eb7) cell_ai5_widget_pane_g8

0x8762,	// (0x00009ecb) cell_ai5_widget_pane_g9_ParamLimits

0x8762,	// (0x00009ecb) cell_ai5_widget_pane_g9

0x8776,	// (0x00009edf) cell_ai5_widget_pane_g10_ParamLimits

0x8776,	// (0x00009edf) cell_ai5_widget_pane_g10

0x8b0f,	// (0x0000a278) status_icon_pane_g1

0xe96c,	// (0x000100d5) bg_popup_sub_pane_cp13

0x8b17,	// (0x0000a280) popup_keymap_window_t1

0xb3f6,	// (0x0000cb5f) control_pane_g6_ParamLimits

0xb3f6,	// (0x0000cb5f) control_pane_g6

0xb403,	// (0x0000cb6c) control_pane_g7_ParamLimits

0xb403,	// (0x0000cb6c) control_pane_g7

0xb410,	// (0x0000cb79) control_pane_g8_ParamLimits

0xb410,	// (0x0000cb79) control_pane_g8

0xe423,	// (0x0000fb8c) dt_sta_controll_pane_ParamLimits

0xe430,	// (0x0000fb99) dt_sta_indi_pane_ParamLimits

0xe43d,	// (0x0000fba6) dt_sta_title_pane_ParamLimits

0xf1d0,	// (0x00010939) aid_size_touch_scroll_bar_cale

0xeb11,	// (0x0001027a) popup_discreet_window_ParamLimits

0xeb11,	// (0x0001027a) popup_discreet_window

0xa4d1,	// (0x0000bc3a) popup_sk_window

0x2900,	// (0x00004069) bg_popup_sub_pane_cp28_ParamLimits

0x2900,	// (0x00004069) bg_popup_sub_pane_cp28

0x8b25,	// (0x0000a28e) popup_discreet_window_g1_ParamLimits

0x8b25,	// (0x0000a28e) popup_discreet_window_g1

0x8b45,	// (0x0000a2ae) popup_discreet_window_t1_ParamLimits

0x8b45,	// (0x0000a2ae) popup_discreet_window_t1

0x8b63,	// (0x0000a2cc) popup_discreet_window_t2_ParamLimits

0x8b63,	// (0x0000a2cc) popup_discreet_window_t2

0x0002,

0xfe86,	// (0x000115ef) popup_discreet_window_t_ParamLimits

0xfe86,	// (0x000115ef) popup_discreet_window_t

0x8bb5,	// (0x0000a31e) popup_sk_window_g1

0x8bbf,	// (0x0000a328) popup_sk_window_g2

0x0001,

0xfe8d,	// (0x000115f6) popup_sk_window_g

0x8bc7,	// (0x0000a330) popup_sk_window_t1

0x8bd5,	// (0x0000a33e) popup_sk_window_t1_copy1

0xe25d,	// (0x0000f9c6) cell_ai5_widget_pane_g2_ParamLimits

0xe33e,	// (0x0000faa7) cell_ai5_widget_pane_t9_ParamLimits

0xe33e,	// (0x0000faa7) cell_ai5_widget_pane_t9

0xe96c,	// (0x000100d5) main_fep_fshwr2_pane

0xe4bc,	// (0x0000fc25) aid_fshwr2_btn_pane

0xe4d0,	// (0x0000fc39) aid_fshwr2_syb_pane

0xe4e4,	// (0x0000fc4d) aid_fshwr2_txt_pane

0xe4f4,	// (0x0000fc5d) fshwr2_func_candi_pane

0xe516,	// (0x0000fc7f) fshwr2_hwr_syb_pane

0xe53a,	// (0x0000fca3) fshwr2_icf_pane

0xe96c,	// (0x000100d5) fshwr2_icf_bg_pane

0x8c81,	// (0x0000a3ea) fshwr2_icf_pane_t1_ParamLimits

0x8c81,	// (0x0000a3ea) fshwr2_icf_pane_t1

0x0646,	// (0x00001daf) fshwr2_func_candi_pane_g1

0xe56a,	// (0x0000fcd3) fshwr2_func_candi_row_pane_ParamLimits

0xe56a,	// (0x0000fcd3) fshwr2_func_candi_row_pane

0xe591,	// (0x0000fcfa) cell_fshwr2_syb_pane_ParamLimits

0xe591,	// (0x0000fcfa) cell_fshwr2_syb_pane

0x848c,	// (0x00009bf5) fshwr2_hwr_syb_pane_g1_ParamLimits

0x848c,	// (0x00009bf5) fshwr2_hwr_syb_pane_g1

0xe96c,	// (0x000100d5) bg_popup_call_pane_cp01

0xe5b9,	// (0x0000fd22) fshwr2_func_candi_cell_pane_ParamLimits

0xe5b9,	// (0x0000fd22) fshwr2_func_candi_cell_pane

0x26e0,	// (0x00003e49) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x26e0,	// (0x00003e49) fshwr2_func_candi_cell_bg_pane

0xe604,	// (0x0000fd6d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe604,	// (0x0000fd6d) fshwr2_func_candi_cell_pane_g1

0xe63b,	// (0x0000fda4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe63b,	// (0x0000fda4) fshwr2_func_candi_cell_pane_t1

0xe96c,	// (0x000100d5) bg_button_pane_cp08

0x1493,	// (0x00002bfc) cell_fshwr2_syb_bg_pane

0xe656,	// (0x0000fdbf) cell_fshwr2_syb_bg_pane_g1

0xe66a,	// (0x0000fdd3) cell_fshwr2_syb_bg_pane_t1

0xf321,	// (0x00010a8a) main_tmo_pane

0xc46a,	// (0x0000dbd3) uni_indicator_pane_g1_ParamLimits

0xc480,	// (0x0000dbe9) uni_indicator_pane_g2_ParamLimits

0xc496,	// (0x0000dbff) uni_indicator_pane_g3_ParamLimits

0xc4a9,	// (0x0000dc12) uni_indicator_pane_g4_ParamLimits

0xc4a9,	// (0x0000dc12) uni_indicator_pane_g4

0x35e3,	// (0x00004d4c) uni_indicator_pane_g5_ParamLimits

0x35e3,	// (0x00004d4c) uni_indicator_pane_g5

0x35e3,	// (0x00004d4c) uni_indicator_pane_g6_ParamLimits

0x35e3,	// (0x00004d4c) uni_indicator_pane_g6

0xf8eb,	// (0x00011054) uni_indicator_pane_g_ParamLimits

0xd1e1,	// (0x0000e94a) popup_tmo_note_window_ParamLimits

0xd1e1,	// (0x0000e94a) popup_tmo_note_window

0xf321,	// (0x00010a8a) fshwr2_bg_pane

0xe62c,	// (0x0000fd95) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe62c,	// (0x0000fd95) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe92,	// (0x000115fb) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe92,	// (0x000115fb) fshwr2_func_candi_cell_pane_g

0x5075,	// (0x000067de) bg_popup_window_pane_cp01

0x8d96,	// (0x0000a4ff) bg_popup_window_pane_g1_cp01

0x8d9f,	// (0x0000a508) bg_popup_window_pane_cp22_ParamLimits

0x8d9f,	// (0x0000a508) bg_popup_window_pane_cp22

0x8dad,	// (0x0000a516) listscroll_tmo_link_pane_ParamLimits

0x8dad,	// (0x0000a516) listscroll_tmo_link_pane

0x8ded,	// (0x0000a556) popup_tmo_note_window_g1_ParamLimits

0x8ded,	// (0x0000a556) popup_tmo_note_window_g1

0x8dfa,	// (0x0000a563) tmo_note_info_pane_ParamLimits

0x8dfa,	// (0x0000a563) tmo_note_info_pane

0xe680,	// (0x0000fde9) list_tmo_note_info_pane_g1_ParamLimits

0xe680,	// (0x0000fde9) list_tmo_note_info_pane_g1

0x8e2b,	// (0x0000a594) list_tmo_note_info_pane_g2_ParamLimits

0x8e2b,	// (0x0000a594) list_tmo_note_info_pane_g2

0x0001,

0xfe97,	// (0x00011600) list_tmo_note_info_pane_g_ParamLimits

0xfe97,	// (0x00011600) list_tmo_note_info_pane_g

0x8e47,	// (0x0000a5b0) list_tmo_note_info_text_pane_ParamLimits

0x8e47,	// (0x0000a5b0) list_tmo_note_info_text_pane

0x8ecc,	// (0x0000a635) list_tmo_link_pane

0x8ed9,	// (0x0000a642) scroll_pane_cp20

0x8ee6,	// (0x0000a64f) list_single_tmo_link_pane_ParamLimits

0x8ee6,	// (0x0000a64f) list_single_tmo_link_pane

0x8ef6,	// (0x0000a65f) list_single_tmo_link_pane_t1

0x8f04,	// (0x0000a66d) list_tmo_note_info_text_pane_t1_ParamLimits

0x8f04,	// (0x0000a66d) list_tmo_note_info_text_pane_t1

0xaeb5,	// (0x0000c61e) aid_size_touch_scroll_bar_cp01_ParamLimits

0xaeb5,	// (0x0000c61e) aid_size_touch_scroll_bar_cp01

0xadf5,	// (0x0000c55e) aid_size_touch_slider_marker

0xa4c1,	// (0x0000bc2a) popup_settings_window_ParamLimits

0xa4c1,	// (0x0000bc2a) popup_settings_window

0x14f1,	// (0x00002c5a) popup_candi_list_indi_window

0x1b4c,	// (0x000032b5) aid_touch_navi_pane_ParamLimits

0x6f37,	// (0x000086a0) rs_clock_indi_pane

0x6f40,	// (0x000086a9) sctrl_sk_bottom_pane_ParamLimits

0x6f51,	// (0x000086ba) sctrl_sk_top_pane_ParamLimits

0x7793,	// (0x00008efc) popup_fep_tooltip_window

0xe229,	// (0x0000f992) aid_size_cell_widget_grid_ParamLimits

0xe248,	// (0x0000f9b1) cell_ai5_widget_pane_g1_ParamLimits

0xe248,	// (0x0000f9b1) cell_ai5_widget_pane_g1

0xe2ab,	// (0x0000fa14) cell_ai5_widget_pane_g6_ParamLimits

0xe2b7,	// (0x0000fa20) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe0b,	// (0x00011574) cell_ai5_widget_pane_g_ParamLimits

0xfe0b,	// (0x00011574) cell_ai5_widget_pane_g

0xe36d,	// (0x0000fad6) cell_ai5_widget_pane_t10_ParamLimits

0xe36d,	// (0x0000fad6) cell_ai5_widget_pane_t10

0xe3b0,	// (0x0000fb19) grid_ai5_widget_pane_ParamLimits

0xe3dc,	// (0x0000fb45) cell_contacts_ai5_widget_pane_ParamLimits

0xe3dc,	// (0x0000fb45) cell_contacts_ai5_widget_pane

0x8b78,	// (0x0000a2e1) popup_discreet_window_t3_ParamLimits

0x8b78,	// (0x0000a2e1) popup_discreet_window_t3

0xe556,	// (0x0000fcbf) popup_fshwr2_char_preview_window_ParamLimits

0xe556,	// (0x0000fcbf) popup_fshwr2_char_preview_window

0xe697,	// (0x0000fe00) tmo_note_info_pane_t1

0xe6ac,	// (0x0000fe15) tmo_note_info_pane_t2

0xe6c5,	// (0x0000fe2e) tmo_note_info_pane_t3

0x8ea8,	// (0x0000a611) tmo_note_info_pane_t4

0x8eba,	// (0x0000a623) tmo_note_info_pane_t5

0x0004,

0xfe9c,	// (0x00011605) tmo_note_info_pane_t

0x8ecc,	// (0x0000a635) list_tmo_link_pane_ParamLimits

0x8ed9,	// (0x0000a642) scroll_pane_cp20_ParamLimits

0xe96c,	// (0x000100d5) bg_popup_fep_char_preview_window_cp01

0x8f1d,	// (0x0000a686) popup_fshwr2_char_preview_window_t1

0x8f2b,	// (0x0000a694) popup_candi_list_indi_window_g1

0x8f34,	// (0x0000a69d) bg_cell_contacts_ai5_widget_pane

0x8f40,	// (0x0000a6a9) cell_contacts_ai5_widget_pane_g1

0x8f55,	// (0x0000a6be) cell_contacts_ai5_widget_pane_g2

0x8f61,	// (0x0000a6ca) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea7,	// (0x00011610) cell_contacts_ai5_widget_pane_g

0x8f6d,	// (0x0000a6d6) cell_contacts_ai5_widget_pane_t1

0xf321,	// (0x00010a8a) highlight_cell_shortcut_ai5_widget_pane_cp01

0x8fe4,	// (0x0000a74d) settings_container_pane

0x0f31,	// (0x0000269a) listscroll_set_pane_copy1

0x441f,	// (0x00005b88) scroll_pane_cp121_copy1

0x8ff0,	// (0x0000a759) set_content_pane_copy1

0x8ff8,	// (0x0000a761) aid_height_set_list_copy1_ParamLimits

0x8ff8,	// (0x0000a761) aid_height_set_list_copy1

0x38e7,	// (0x00005050) aid_size_parent_copy1_ParamLimits

0x38e7,	// (0x00005050) aid_size_parent_copy1

0x9004,	// (0x0000a76d) button_value_adjust_pane_cp6_copy1_ParamLimits

0x9004,	// (0x0000a76d) button_value_adjust_pane_cp6_copy1

0x1493,	// (0x00002bfc) list_highlight_pane_cp2_copy1_ParamLimits

0x1493,	// (0x00002bfc) list_highlight_pane_cp2_copy1

0x9018,	// (0x0000a781) list_set_pane_copy1_ParamLimits

0x9018,	// (0x0000a781) list_set_pane_copy1

0x8f7f,	// (0x0000a6e8) main_pane_set_t1_copy1_ParamLimits

0x8f7f,	// (0x0000a6e8) main_pane_set_t1_copy1

0x8fb9,	// (0x0000a722) main_pane_set_t2_copy1_ParamLimits

0x8fb9,	// (0x0000a722) main_pane_set_t2_copy1

0x90d9,	// (0x0000a842) main_pane_set_t3_copy1

0x90e7,	// (0x0000a850) main_pane_set_t4_copy1

0x8fd8,	// (0x0000a741) set_content_pane_g1_copy1_ParamLimits

0x8fd8,	// (0x0000a741) set_content_pane_g1_copy1

0x90f5,	// (0x0000a85e) setting_code_pane_copy1

0x90fd,	// (0x0000a866) setting_slider_graphic_pane_copy1

0x90fd,	// (0x0000a866) setting_slider_pane_copy1

0x9105,	// (0x0000a86e) setting_text_pane_copy1

0x9105,	// (0x0000a86e) setting_volume_pane_copy1

0x90f5,	// (0x0000a85e) settings_code_pane_cp2_copy1

0x910d,	// (0x0000a876) settings_code_pane_cp_copy1_ParamLimits

0x910d,	// (0x0000a876) settings_code_pane_cp_copy1

0x9121,	// (0x0000a88a) volume_set_pane_copy1

0x912d,	// (0x0000a896) volume_set_pane_g10_copy1

0x9139,	// (0x0000a8a2) volume_set_pane_g1_copy1

0x9143,	// (0x0000a8ac) volume_set_pane_g2_copy1

0x914d,	// (0x0000a8b6) volume_set_pane_g3_copy1

0x9157,	// (0x0000a8c0) volume_set_pane_g4_copy1

0x9161,	// (0x0000a8ca) volume_set_pane_g5_copy1

0x916b,	// (0x0000a8d4) volume_set_pane_g6_copy1

0x9175,	// (0x0000a8de) volume_set_pane_g7_copy1

0x917f,	// (0x0000a8e8) volume_set_pane_g8_copy1

0x9189,	// (0x0000a8f2) volume_set_pane_g9_copy1

0xeba9,	// (0x00010312) bg_set_opt_pane_cp_copy1_ParamLimits

0xeba9,	// (0x00010312) bg_set_opt_pane_cp_copy1

0x9195,	// (0x0000a8fe) setting_slider_pane_t1_copy1_ParamLimits

0x9195,	// (0x0000a8fe) setting_slider_pane_t1_copy1

0x91b4,	// (0x0000a91d) setting_slider_pane_t2_copy1_ParamLimits

0x91b4,	// (0x0000a91d) setting_slider_pane_t2_copy1

0x91ce,	// (0x0000a937) setting_slider_pane_t3_copy1_ParamLimits

0x91ce,	// (0x0000a937) setting_slider_pane_t3_copy1

0x91e6,	// (0x0000a94f) slider_set_pane_copy1_ParamLimits

0x91e6,	// (0x0000a94f) slider_set_pane_copy1

0xf3dc,	// (0x00010b45) set_opt_bg_pane_g1_copy2

0xf3e4,	// (0x00010b4d) set_opt_bg_pane_g2_copy2

0x91fc,	// (0x0000a965) set_opt_bg_pane_g3_copy2

0xf3f4,	// (0x00010b5d) set_opt_bg_pane_g4_copy2

0xf3fc,	// (0x00010b65) set_opt_bg_pane_g5_copy2

0xf404,	// (0x00010b6d) set_opt_bg_pane_g6_copy2

0x9206,	// (0x0000a96f) set_opt_bg_pane_g7_copy2

0x9210,	// (0x0000a979) set_opt_bg_pane_g8_copy2

0x921a,	// (0x0000a983) set_opt_bg_pane_g9_copy2

0x9224,	// (0x0000a98d) aid_size_touch_slider_mark_copy1_ParamLimits

0x9224,	// (0x0000a98d) aid_size_touch_slider_mark_copy1

0x9238,	// (0x0000a9a1) slider_set_pane_g1_copy1

0x9241,	// (0x0000a9aa) slider_set_pane_g2_copy1

0x384e,	// (0x00004fb7) slider_set_pane_g3_copy1_ParamLimits

0x384e,	// (0x00004fb7) slider_set_pane_g3_copy1

0x3862,	// (0x00004fcb) slider_set_pane_g4_copy1_ParamLimits

0x3862,	// (0x00004fcb) slider_set_pane_g4_copy1

0x387a,	// (0x00004fe3) slider_set_pane_g5_copy1_ParamLimits

0x387a,	// (0x00004fe3) slider_set_pane_g5_copy1

0x384e,	// (0x00004fb7) slider_set_pane_g6_copy1_ParamLimits

0x384e,	// (0x00004fb7) slider_set_pane_g6_copy1

0x9249,	// (0x0000a9b2) slider_set_pane_g7_copy1_ParamLimits

0x9249,	// (0x0000a9b2) slider_set_pane_g7_copy1

0xeaef,	// (0x00010258) bg_set_opt_pane_cp2_copy1

0x925f,	// (0x0000a9c8) setting_slider_graphic_pane_g1_copy1

0x9268,	// (0x0000a9d1) setting_slider_graphic_pane_t1_copy1

0x9278,	// (0x0000a9e1) setting_slider_graphic_pane_t2_copy1

0x9288,	// (0x0000a9f1) slider_set_pane_cp_copy1

0x9298,	// (0x0000aa01) input_focus_pane_cp1_copy1

0x92a1,	// (0x0000aa0a) list_set_text_pane_copy1

0x92a9,	// (0x0000aa12) setting_text_pane_g1_copy1

0xec57,	// (0x000103c0) set_text_pane_t1_copy1

0x9298,	// (0x0000aa01) input_focus_pane_cp2_copy1

0x92a9,	// (0x0000aa12) setting_code_pane_g1_copy1

0x92b2,	// (0x0000aa1b) setting_code_pane_t1_copy1

0x4224,	// (0x0000598d) list_set_graphic_pane_copy1

0xeaef,	// (0x00010258) bg_set_opt_pane_cp4_copy1

0x0c15,	// (0x0000237e) list_set_graphic_pane_g1_copy1_ParamLimits

0x0c15,	// (0x0000237e) list_set_graphic_pane_g1_copy1

0x92c0,	// (0x0000aa29) list_set_graphic_pane_g2_copy1

0x0c2d,	// (0x00002396) list_set_graphic_pane_t1_copy1_ParamLimits

0x0c2d,	// (0x00002396) list_set_graphic_pane_t1_copy1

0x5075,	// (0x000067de) rs_clock_indi_pane_g1

0x92c8,	// (0x0000aa31) rs_clock_indi_pane_t1

0x92d6,	// (0x0000aa3f) rs_indi_pane

0x92de,	// (0x0000aa47) rs_indi_pane_g1

0x92e7,	// (0x0000aa50) rs_indi_pane_g2

0x92f0,	// (0x0000aa59) rs_indi_pane_g3

0x0002,

0xfeae,	// (0x00011617) rs_indi_pane_g

0x0f31,	// (0x0000269a) bg_popup_preview_window_pane_cp03

0x92f9,	// (0x0000aa62) popup_fep_tooltip_window_t1

0x62ea,	// (0x00007a53) popup_note2_window_g2_ParamLimits

0x62ea,	// (0x00007a53) popup_note2_window_g2

0x0001,

0xfc3b,	// (0x000113a4) popup_note2_window_g_ParamLimits

0xfc3b,	// (0x000113a4) popup_note2_window_g

0x6905,	// (0x0000806e) bg_popup_sub_pane_cp11_ParamLimits

0x6912,	// (0x0000807b) cell_ai3_links_pane_g1_ParamLimits

0x6929,	// (0x00008092) cell_ai3_links_pane_t1

0xec57,	// (0x000103c0) set_text_pane_t1_copy1_ParamLimits

0x0e33,	// (0x0000259c) cell_graphic_popup_pane_cp2_ParamLimits

0x0e33,	// (0x0000259c) cell_graphic_popup_pane_cp2

0x9307,	// (0x0000aa70) cell_graphic_popup_pane_g1_cp2

0xefe3,	// (0x0001074c) cell_graphic_popup_pane_g2_cp2

0x930f,	// (0x0000aa78) cell_graphic_popup_pane_g3_cp2

0x9317,	// (0x0000aa80) cell_graphic_popup_pane_t2_cp2

0xeff4,	// (0x0001075d) grid_highlight_pane_cp3_cp2

0x034c,	// (0x00001ab5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xf321,	// (0x00010a8a) main_tmo_pane_ParamLimits

0xd1d5,	// (0x0000e93e) popup_tmo_big_image_note_window

0xe237,	// (0x0000f9a0) cell_ai5_widget_list_pane

0xe23f,	// (0x0000f9a8) cell_ai5_widget_lrg_icon_pane

0xe697,	// (0x0000fe00) tmo_note_info_pane_t1_ParamLimits

0xe6ac,	// (0x0000fe15) tmo_note_info_pane_t2_ParamLimits

0xe6c5,	// (0x0000fe2e) tmo_note_info_pane_t3_ParamLimits

0x8ea8,	// (0x0000a611) tmo_note_info_pane_t4_ParamLimits

0x8eba,	// (0x0000a623) tmo_note_info_pane_t5_ParamLimits

0xfe9c,	// (0x00011605) tmo_note_info_pane_t_ParamLimits

0x8fe4,	// (0x0000a74d) settings_container_pane_ParamLimits

0x9290,	// (0x0000a9f9) indicator_popup_pane_cp5

0x9290,	// (0x0000a9f9) indicator_popup_pane_cp6

0x4224,	// (0x0000598d) list_set_graphic_pane_copy1_ParamLimits

0xe96c,	// (0x000100d5) bg_popup_window_pane_cp23

0x9325,	// (0x0000aa8e) popup_tmo_big_image_note_window_g1

0x9331,	// (0x0000aa9a) popup_tmo_big_image_note_window_t1

0x9341,	// (0x0000aaaa) popup_tmo_big_image_note_window_t2

0x9351,	// (0x0000aaba) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb5,	// (0x0001161e) popup_tmo_big_image_note_window_t

0x5075,	// (0x000067de) cell_ai5_widget_lrg_icon_pane_g1

0xe6da,	// (0x0000fe43) cell_ai5_widget_lrg_icon_pane_t1

0xe6e8,	// (0x0000fe51) cell_ai5_widget_list_row_pane_ParamLimits

0xe6e8,	// (0x0000fe51) cell_ai5_widget_list_row_pane

0xe700,	// (0x0000fe69) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe700,	// (0x0000fe69) cell_ai5_widget_list_row_pane_g1

0xe70d,	// (0x0000fe76) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe70d,	// (0x0000fe76) cell_ai5_widget_list_row_pane_t1

0xe738,	// (0x0000fea1) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe738,	// (0x0000fea1) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfebc,	// (0x00011625) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfebc,	// (0x00011625) cell_ai5_widget_list_row_pane_t

0xe96c,	// (0x000100d5) main_fep_vtchi_ss_pane

0x940f,	// (0x0000ab78) popup_fep_char_pre_window

0x9417,	// (0x0000ab80) popup_fep_ituss_window

0xe78a,	// (0x0000fef3) popup_fep_vkbss_window

0x1493,	// (0x00002bfc) grid_vkbss_keypad_pane_ParamLimits

0x1493,	// (0x00002bfc) grid_vkbss_keypad_pane

0x9485,	// (0x0000abee) ituss_keypad_pane

0x949b,	// (0x0000ac04) aid_vkbss_key_offset_ParamLimits

0x949b,	// (0x0000ac04) aid_vkbss_key_offset

0xe799,	// (0x0000ff02) cell_vkbss_key_pane_ParamLimits

0xe799,	// (0x0000ff02) cell_vkbss_key_pane

0x9505,	// (0x0000ac6e) bg_cell_vkbss_key_g1_ParamLimits

0x9505,	// (0x0000ac6e) bg_cell_vkbss_key_g1

0xe7eb,	// (0x0000ff54) cell_vkbss_key_3p_pane_ParamLimits

0xe7eb,	// (0x0000ff54) cell_vkbss_key_3p_pane

0xe821,	// (0x0000ff8a) cell_vkbss_key_g1_ParamLimits

0xe821,	// (0x0000ff8a) cell_vkbss_key_g1

0xe857,	// (0x0000ffc0) cell_vkbss_key_t1_ParamLimits

0xe857,	// (0x0000ffc0) cell_vkbss_key_t1

0x95d9,	// (0x0000ad42) cell_ituss_key_pane_ParamLimits

0x95d9,	// (0x0000ad42) cell_ituss_key_pane

0x95ea,	// (0x0000ad53) bg_cell_ituss_key_g1_ParamLimits

0x95ea,	// (0x0000ad53) bg_cell_ituss_key_g1

0x95f6,	// (0x0000ad5f) cell_ituss_key_pane_g1_ParamLimits

0x95f6,	// (0x0000ad5f) cell_ituss_key_pane_g1

0x960a,	// (0x0000ad73) cell_ituss_key_pane_g2_ParamLimits

0x960a,	// (0x0000ad73) cell_ituss_key_pane_g2

0x0005,

0xfec3,	// (0x0001162c) cell_ituss_key_pane_g_ParamLimits

0xfec3,	// (0x0001162c) cell_ituss_key_pane_g

0x96a0,	// (0x0000ae09) cell_ituss_key_t1_ParamLimits

0x96a0,	// (0x0000ae09) cell_ituss_key_t1

0x96da,	// (0x0000ae43) cell_ituss_key_t2_ParamLimits

0x96da,	// (0x0000ae43) cell_ituss_key_t2

0x970c,	// (0x0000ae75) cell_ituss_key_t3_ParamLimits

0x970c,	// (0x0000ae75) cell_ituss_key_t3

0x973d,	// (0x0000aea6) cell_ituss_key_t4_ParamLimits

0x973d,	// (0x0000aea6) cell_ituss_key_t4

0x0004,

0xfed0,	// (0x00011639) cell_ituss_key_t_ParamLimits

0xfed0,	// (0x00011639) cell_ituss_key_t

0xe8b3,	// (0x0001001c) cell_vkbss_key_3p_pane_g1

0xe8bb,	// (0x00010024) cell_vkbss_key_3p_pane_g2

0xe8c3,	// (0x0001002c) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedb,	// (0x00011644) cell_vkbss_key_3p_pane_g

0x0f31,	// (0x0000269a) bg_popup_fep_char_preview_window_cp02

0x9798,	// (0x0000af01) popup_fep_char_pre_window_t1

0xe216,	// (0x0000f97f) main_ai5_sk_pane

0x8f34,	// (0x0000a69d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x8f40,	// (0x0000a6a9) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x8f55,	// (0x0000a6be) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8f61,	// (0x0000a6ca) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea7,	// (0x00011610) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8f6d,	// (0x0000a6d6) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xf321,	// (0x00010a8a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe8cb,	// (0x00010034) main_ai5_sk_pane_g1

0x2738,	// (0x00003ea1) popup_query_code_window_g1

0xe77b,	// (0x0000fee4) popup_fep_vkb_icf_pane

0x945c,	// (0x0000abc5) popup_fep_vtchi_icf_pane

0x97af,	// (0x0000af18) bg_icf_pane

0x97af,	// (0x0000af18) list_vkb_icf_pane

0x97bb,	// (0x0000af24) bg_icf_pane_cp01

0x97ce,	// (0x0000af37) vtchi_icf_list_pane

0xe920,	// (0x00010089) list_vkb_icf_pane_t1_ParamLimits

0xe920,	// (0x00010089) list_vkb_icf_pane_t1

0x984a,	// (0x0000afb3) vtchi_icf_list_pane_t1_ParamLimits

0x984a,	// (0x0000afb3) vtchi_icf_list_pane_t1

0x9417,	// (0x0000ab80) popup_fep_ituss_window_ParamLimits

0x945c,	// (0x0000abc5) popup_fep_vtchi_icf_pane_ParamLimits

0x9485,	// (0x0000abee) ituss_keypad_pane_ParamLimits

0x9491,	// (0x0000abfa) ituss_sks_pane

0x97af,	// (0x0000af18) bg_icf_pane_ParamLimits

0xe760,	// (0x0000fec9) icf_edit_indi_pane_ParamLimits

0xe760,	// (0x0000fec9) icf_edit_indi_pane

0x97af,	// (0x0000af18) list_vkb_icf_pane_ParamLimits

0x97bb,	// (0x0000af24) bg_icf_pane_cp01_ParamLimits

0x9402,	// (0x0000ab6b) icf_edit_indi_pane_cp01_ParamLimits

0x9402,	// (0x0000ab6b) icf_edit_indi_pane_cp01

0x97ce,	// (0x0000af37) vtchi_query_pane

0x848c,	// (0x00009bf5) icf_edit_indi_pane_g1_ParamLimits

0x848c,	// (0x00009bf5) icf_edit_indi_pane_g1

0xe937,	// (0x000100a0) icf_edit_indi_pane_g2_ParamLimits

0xe937,	// (0x000100a0) icf_edit_indi_pane_g2

0x0001,

0xff06,	// (0x0001166f) icf_edit_indi_pane_g_ParamLimits

0xff06,	// (0x0001166f) icf_edit_indi_pane_g

0xe94b,	// (0x000100b4) icf_edit_indi_pane_t1

0x9863,	// (0x0000afcc) bg_input_focus_pane_cp042

0xf1c7,	// (0x00010930) vtchi_button_pane

0x986c,	// (0x0000afd5) vtchi_query_pane_t1

0x987a,	// (0x0000afe3) vtchi_query_pane_t2

0x9888,	// (0x0000aff1) vtchi_query_pane_t3

0x0002,

0xfef5,	// (0x0001165e) vtchi_query_pane_t

0xe96c,	// (0x000100d5) bg_button_pane_cp13

0x9896,	// (0x0000afff) vtchi_button_pane_g1

0x989e,	// (0x0000b007) ituss_sks_pane_g1

0x98a9,	// (0x0000b012) ituss_sks_pane_g2

0x0001,

0xfefc,	// (0x00011665) ituss_sks_pane_g

0x98b1,	// (0x0000b01a) ituss_sks_pane_t1

0x98bf,	// (0x0000b028) ituss_sks_pane_t2

0x0001,

0xff01,	// (0x0001166a) ituss_sks_pane_t

0x4aa5,	// (0x0000620e) indicator_nsta_pane_cp_g1

0x4aae,	// (0x00006217) indicator_nsta_pane_cp_g2

0x4ab6,	// (0x0000621f) indicator_nsta_pane_cp_g3

0x4abe,	// (0x00006227) indicator_nsta_pane_cp_g4

0x4aae,	// (0x00006217) indicator_nsta_pane_cp_g5

0x4ab6,	// (0x0000621f) indicator_nsta_pane_cp_g6

0x0005,

0xfa85,	// (0x000111ee) indicator_nsta_pane_cp_g

0xdfc2,	// (0x0000f72b) cell_graphic2_pane_t2_ParamLimits

0xdfc2,	// (0x0000f72b) cell_graphic2_pane_t2

0x0001,

0xfd92,	// (0x000114fb) cell_graphic2_pane_t_ParamLimits

0xfd92,	// (0x000114fb) cell_graphic2_pane_t

0xdffa,	// (0x0000f763) cell_graphic2_control_pane_t1

0xb117,	// (0x0000c880) signal_pane_g3_ParamLimits

0xb117,	// (0x0000c880) signal_pane_g3

0xb12b,	// (0x0000c894) signal_pane_g4_ParamLimits

0xb12b,	// (0x0000c894) signal_pane_g4

0xe74a,	// (0x0000feb3) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe74a,	// (0x0000feb3) cell_ai5_widget_list_row_pane_t3

0x968e,	// (0x0000adf7) cell_ituss_key_pane_t1_ParamLimits

0x968e,	// (0x0000adf7) cell_ituss_key_pane_t1

0x2370,	// (0x00003ad9) form_field_data_wide_pane_vc_t2_ParamLimits

0x2370,	// (0x00003ad9) form_field_data_wide_pane_vc_t2

0x2384,	// (0x00003aed) form_field_data_wide_pane_vc_t3_ParamLimits

0x2384,	// (0x00003aed) form_field_data_wide_pane_vc_t3

0x0002,

0xf7d3,	// (0x00010f3c) form_field_data_wide_pane_vc_t_ParamLimits

0xf7d3,	// (0x00010f3c) form_field_data_wide_pane_vc_t

0x4742,	// (0x00005eab) form_field_slider_wide_pane_vc_t3_ParamLimits

0x4742,	// (0x00005eab) form_field_slider_wide_pane_vc_t3

0x4818,	// (0x00005f81) form_field_popup_wide_pane_vc_t2_ParamLimits

0x4818,	// (0x00005f81) form_field_popup_wide_pane_vc_t2

0x482f,	// (0x00005f98) form_field_popup_wide_pane_vc_t3_ParamLimits

0x482f,	// (0x00005f98) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa74,	// (0x000111dd) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa74,	// (0x000111dd) form_field_popup_wide_pane_vc_t

0xe4bc,	// (0x0000fc25) aid_fshwr2_btn_pane_ParamLimits

0xe4d0,	// (0x0000fc39) aid_fshwr2_syb_pane_ParamLimits

0xe4e4,	// (0x0000fc4d) aid_fshwr2_txt_pane_ParamLimits

0xf321,	// (0x00010a8a) fshwr2_bg_pane_ParamLimits

0xe4f4,	// (0x0000fc5d) fshwr2_func_candi_pane_ParamLimits

0xe516,	// (0x0000fc7f) fshwr2_hwr_syb_pane_ParamLimits

0xe53a,	// (0x0000fca3) fshwr2_icf_pane_ParamLimits

0x46b6,	// (0x00005e1f) list_double_graphic_pane_vc_g4_ParamLimits

0x46b6,	// (0x00005e1f) list_double_graphic_pane_vc_g4

0x962a,	// (0x0000ad93) cell_ituss_key_pane_g3_ParamLimits

0x962a,	// (0x0000ad93) cell_ituss_key_pane_g3

0x976e,	// (0x0000aed7) cell_ituss_key_t5_ParamLimits

0x976e,	// (0x0000aed7) cell_ituss_key_t5

0xe78a,	// (0x0000fef3) popup_fep_vkbss_window_ParamLimits

0xe220,	// (0x0000f989) aid_cell_ai5_quarter

0xe94b,	// (0x000100b4) icf_edit_indi_pane_t1_ParamLimits

0xee27,	// (0x00010590) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xee27,	// (0x00010590) aid_tch_indicator_popup_pane_cp2

0xee3a,	// (0x000105a3) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xee3a,	// (0x000105a3) aid_tch_query_popup_data_pane_cp2

0x26e0,	// (0x00003e49) aid_tch_query_popup_pane_ParamLimits

0x26e0,	// (0x00003e49) aid_tch_query_popup_pane

0x26e0,	// (0x00003e49) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x26e0,	// (0x00003e49) aid_tch_query_popup_data_pane_cp1

0x1493,	// (0x00002bfc) cell_fshwr2_syb_bg_pane_ParamLimits

0xe656,	// (0x0000fdbf) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xe66a,	// (0x0000fdd3) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xe77b,	// (0x0000fee4) popup_fep_vkb_icf_pane_ParamLimits

0xe0ce,	// (0x0000f837) bg_popup_fep_char_preview_window_g10

0xe2c3,	// (0x0000fa2c) cell_ai5_widget_pane_g11_ParamLimits

0xe2c3,	// (0x0000fa2c) cell_ai5_widget_pane_g11

0x8796,	// (0x00009eff) cell_ai5_widget_pane_g12_ParamLimits

0x8796,	// (0x00009eff) cell_ai5_widget_pane_g12

0xe2cf,	// (0x0000fa38) cell_ai5_widget_pane_g13_ParamLimits

0xe2cf,	// (0x0000fa38) cell_ai5_widget_pane_g13

0xe38c,	// (0x0000faf5) cell_ai5_widget_pane_t11_ParamLimits

0xe38c,	// (0x0000faf5) cell_ai5_widget_pane_t11

0xe39e,	// (0x0000fb07) cell_ai5_widget_pane_t12_ParamLimits

0xe39e,	// (0x0000fb07) cell_ai5_widget_pane_t12

0x9636,	// (0x0000ad9f) cell_ituss_key_pane_g4_ParamLimits

0x9636,	// (0x0000ad9f) cell_ituss_key_pane_g4

0x9652,	// (0x0000adbb) cell_ituss_key_pane_g5_ParamLimits

0x9652,	// (0x0000adbb) cell_ituss_key_pane_g5

0x966e,	// (0x0000add7) cell_ituss_key_pane_g6_ParamLimits

0x966e,	// (0x0000add7) cell_ituss_key_pane_g6

0x20b6,	// (0x0000381f) bg_icf_pane_g1

0xe8d4,	// (0x0001003d) bg_icf_pane_g2

0xe8de,	// (0x00010047) bg_icf_pane_g3

0xe8e6,	// (0x0001004f) bg_icf_pane_g4

0xe8f0,	// (0x00010059) bg_icf_pane_g5

0xe8fa,	// (0x00010063) bg_icf_pane_g6

0xe904,	// (0x0001006d) bg_icf_pane_g7

0xe90c,	// (0x00010075) bg_icf_pane_g8

0xe916,	// (0x0001007f) bg_icf_pane_g9

0x0008,

0xfee2,	// (0x0001164b) bg_icf_pane_g

0x9472,	// (0x0000abdb) popup_hyb_candi_window_ParamLimits

0x9472,	// (0x0000abdb) popup_hyb_candi_window

0x2251,	// (0x000039ba) bg_popup_sub_pane_cp01_ParamLimits

0x2251,	// (0x000039ba) bg_popup_sub_pane_cp01

0x98fa,	// (0x0000b063) entry_hyb_candi_pane_ParamLimits

0x98fa,	// (0x0000b063) entry_hyb_candi_pane

0x9909,	// (0x0000b072) grid_hyb_candi_pane_ParamLimits

0x9909,	// (0x0000b072) grid_hyb_candi_pane

0x991e,	// (0x0000b087) grid_hyb_phrase_pane_ParamLimits

0x991e,	// (0x0000b087) grid_hyb_phrase_pane

0x992d,	// (0x0000b096) cell_hyb_candi_pane_ParamLimits

0x992d,	// (0x0000b096) cell_hyb_candi_pane

0xf1d0,	// (0x00010939) cell_hyb_candi_scroll_pane

0x0646,	// (0x00001daf) cell_hyb_candi_pane_g1

0x9949,	// (0x0000b0b2) cell_hyb_candi_pane_t1

0x9957,	// (0x0000b0c0) cell_hyb_phrase_pane

0x0646,	// (0x00001daf) cell_hyb_phrase_pane_g1

0x9960,	// (0x0000b0c9) cell_hyb_phrase_pane_t1

0x996e,	// (0x0000b0d7) entry_hyb_candi_pane_t1

0x0f31,	// (0x0000269a) input_focus_pane_cp06

0x997c,	// (0x0000b0e5) cell_hyb_candi_scroll_pane_g1

0x9984,	// (0x0000b0ed) cell_hyb_candi_scroll_pane_g1_aid

0x998c,	// (0x0000b0f5) cell_hyb_candi_scroll_pane_g2

0x9994,	// (0x0000b0fd) cell_hyb_candi_scroll_pane_g2_aid

0x999c,	// (0x0000b105) cell_hyb_candi_scroll_pane_g3

0x99a4,	// (0x0000b10d) cell_hyb_candi_scroll_pane_g4
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

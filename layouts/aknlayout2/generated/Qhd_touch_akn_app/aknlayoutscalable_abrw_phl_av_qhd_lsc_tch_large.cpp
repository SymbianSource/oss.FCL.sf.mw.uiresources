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

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004ea7c };

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
0xcde9,	// (0x0005b865) Screen

0xcdf5,	// (0x0005b871) application_window_ParamLimits

0xcdf5,	// (0x0005b871) application_window

0x33c1,	// (0x00051e3d) screen_g1

0xb5fa,	// (0x0005a076) area_bottom_pane_ParamLimits

0xb5fa,	// (0x0005a076) area_bottom_pane

0x00a9,	// (0x0004eb25) area_top_pane_ParamLimits

0x00a9,	// (0x0004eb25) area_top_pane

0x0147,	// (0x0004ebc3) main_pane_ParamLimits

0x0147,	// (0x0004ebc3) main_pane

0x33cb,	// (0x00051e47) misc_graphics

0xd4f6,	// (0x0005bf72) battery_pane_ParamLimits

0xd4f6,	// (0x0005bf72) battery_pane

0x5a46,	// (0x000544c2) bg_status_flat_pane_g8

0x5a4e,	// (0x000544ca) bg_status_flat_pane_g9

0x4e36,	// (0x000538b2) context_pane_ParamLimits

0x4e36,	// (0x000538b2) context_pane

0xd661,	// (0x0005c0dd) navi_pane_ParamLimits

0xd661,	// (0x0005c0dd) navi_pane

0xd6df,	// (0x0005c15b) signal_pane_ParamLimits

0xd6df,	// (0x0005c15b) signal_pane

0x0008,

0xf87f,	// (0x0005e2fb) bg_status_flat_pane_g

0xd809,	// (0x0005c285) status_pane_g1_ParamLimits

0xd809,	// (0x0005c285) status_pane_g1

0xd81f,	// (0x0005c29b) status_pane_g2_ParamLimits

0xd81f,	// (0x0005c29b) status_pane_g2

0x5069,	// (0x00053ae5) status_pane_g3_ParamLimits

0x5069,	// (0x00053ae5) status_pane_g3

0x0004,

0xf7ab,	// (0x0005e227) status_pane_g_ParamLimits

0xf7ab,	// (0x0005e227) status_pane_g

0xd82b,	// (0x0005c2a7) title_pane_ParamLimits

0xd82b,	// (0x0005c2a7) title_pane

0xd88e,	// (0x0005c30a) uni_indicator_pane_ParamLimits

0xd88e,	// (0x0005c30a) uni_indicator_pane

0x4c98,	// (0x00053714) bg_list_pane_ParamLimits

0x4c98,	// (0x00053714) bg_list_pane

0xd469,	// (0x0005bee5) find_pane

0xbfa3,	// (0x0005aa1f) listscroll_app_pane_ParamLimits

0xbfa3,	// (0x0005aa1f) listscroll_app_pane

0x4cc4,	// (0x00053740) listscroll_form_pane

0xbfb3,	// (0x0005aa2f) listscroll_gen_pane_ParamLimits

0xbfb3,	// (0x0005aa2f) listscroll_gen_pane

0x1180,	// (0x0004fbfc) listscroll_set_pane

0x65c4,	// (0x00055040) main_idle_act_pane

0x499e,	// (0x0005341a) main_idle_trad_pane

0x499e,	// (0x0005341a) main_list_empty_pane

0x4cde,	// (0x0005375a) main_midp_pane

0x4cea,	// (0x00053766) main_pane_g1_ParamLimits

0x4cea,	// (0x00053766) main_pane_g1

0xbfc7,	// (0x0005aa43) popup_ai_message_window_ParamLimits

0xbfc7,	// (0x0005aa43) popup_ai_message_window

0xc058,	// (0x0005aad4) popup_fep_china_uni_window_ParamLimits

0xc058,	// (0x0005aad4) popup_fep_china_uni_window

0x12a0,	// (0x0004fd1c) popup_fep_japan_candidate_window_ParamLimits

0x12a0,	// (0x0004fd1c) popup_fep_japan_candidate_window

0x12c0,	// (0x0004fd3c) popup_fep_japan_predictive_window_ParamLimits

0x12c0,	// (0x0004fd3c) popup_fep_japan_predictive_window

0xc0b4,	// (0x0005ab30) popup_find_window

0xc0d1,	// (0x0005ab4d) popup_grid_graphic_window_ParamLimits

0xc0d1,	// (0x0005ab4d) popup_grid_graphic_window

0x1325,	// (0x0004fda1) popup_large_graphic_colour_window

0xc169,	// (0x0005abe5) popup_menu_window_ParamLimits

0xc169,	// (0x0005abe5) popup_menu_window

0xc33b,	// (0x0005adb7) popup_note_image_window

0xc301,	// (0x0005ad7d) popup_note_wait_window_ParamLimits

0xc301,	// (0x0005ad7d) popup_note_wait_window

0xc353,	// (0x0005adcf) popup_note_window_ParamLimits

0xc353,	// (0x0005adcf) popup_note_window

0xc3f9,	// (0x0005ae75) popup_query_code_window_ParamLimits

0xc3f9,	// (0x0005ae75) popup_query_code_window

0x156d,	// (0x0004ffe9) popup_query_data_code_window_ParamLimits

0x156d,	// (0x0004ffe9) popup_query_data_code_window

0xc433,	// (0x0005aeaf) popup_query_data_window_ParamLimits

0xc433,	// (0x0005aeaf) popup_query_data_window

0xc4b5,	// (0x0005af31) popup_query_sat_info_window_ParamLimits

0xc4b5,	// (0x0005af31) popup_query_sat_info_window

0xc54c,	// (0x0005afc8) popup_snote_single_graphic_window_ParamLimits

0xc54c,	// (0x0005afc8) popup_snote_single_graphic_window

0xc54c,	// (0x0005afc8) popup_snote_single_text_window_ParamLimits

0xc54c,	// (0x0005afc8) popup_snote_single_text_window

0x15f4,	// (0x00050070) popup_sub_window_general

0x1724,	// (0x000501a0) popup_window_general_ParamLimits

0x1724,	// (0x000501a0) popup_window_general

0x4cf8,	// (0x00053774) power_save_pane

0xbe32,	// (0x0005a8ae) control_pane_g1_ParamLimits

0xbe32,	// (0x0005a8ae) control_pane_g1

0xbe5b,	// (0x0005a8d7) control_pane_g2_ParamLimits

0xbe5b,	// (0x0005a8d7) control_pane_g2

0x4c5b,	// (0x000536d7) control_pane_g3_ParamLimits

0x4c5b,	// (0x000536d7) control_pane_g3

0x0007,

0xf793,	// (0x0005e20f) control_pane_g_ParamLimits

0xf793,	// (0x0005e20f) control_pane_g

0xbe9c,	// (0x0005a918) control_pane_t1_ParamLimits

0xbe9c,	// (0x0005a918) control_pane_t1

0xbefa,	// (0x0005a976) control_pane_t2_ParamLimits

0xbefa,	// (0x0005a976) control_pane_t2

0x0002,

0xf7a4,	// (0x0005e220) control_pane_t_ParamLimits

0xf7a4,	// (0x0005e220) control_pane_t

0x4b7c,	// (0x000535f8) navi_navi_volume_pane_cp1

0x4b85,	// (0x00053601) status_small_icon_pane

0x4b8d,	// (0x00053609) status_small_pane_g1_ParamLimits

0x4b8d,	// (0x00053609) status_small_pane_g1

0x4bc1,	// (0x0005363d) status_small_pane_g2_ParamLimits

0x4bc1,	// (0x0005363d) status_small_pane_g2

0x4bcd,	// (0x00053649) status_small_pane_g3_ParamLimits

0x4bcd,	// (0x00053649) status_small_pane_g3

0x4bd9,	// (0x00053655) status_small_pane_g4_ParamLimits

0x4bd9,	// (0x00053655) status_small_pane_g4

0x4be5,	// (0x00053661) status_small_pane_g5_ParamLimits

0x4be5,	// (0x00053661) status_small_pane_g5

0x4bf4,	// (0x00053670) status_small_pane_g6_ParamLimits

0x4bf4,	// (0x00053670) status_small_pane_g6

0x0007,

0xf782,	// (0x0005e1fe) status_small_pane_g_ParamLimits

0xf782,	// (0x0005e1fe) status_small_pane_g

0x4c24,	// (0x000536a0) status_small_pane_t1

0x4c47,	// (0x000536c3) status_small_wait_pane_ParamLimits

0x4c47,	// (0x000536c3) status_small_wait_pane

0xd2e4,	// (0x0005bd60) aid_levels_signal_ParamLimits

0xd2e4,	// (0x0005bd60) aid_levels_signal

0xd2fc,	// (0x0005bd78) signal_pane_g1_ParamLimits

0xd2fc,	// (0x0005bd78) signal_pane_g1

0xd317,	// (0x0005bd93) signal_pane_g2_ParamLimits

0xd317,	// (0x0005bd93) signal_pane_g2

0x0003,

0xf713,	// (0x0005e18f) signal_pane_g_ParamLimits

0xf713,	// (0x0005e18f) signal_pane_g

0x447d,	// (0x00052ef9) context_pane_g1

0xce05,	// (0x0005b881) title_pane_g1

0xce3c,	// (0x0005b8b8) title_pane_t1

0x3473,	// (0x00051eef) title_pane_t2

0x3499,	// (0x00051f15) title_pane_t3

0x0002,

0xf55d,	// (0x0005dfd9) title_pane_t

0xd8b6,	// (0x0005c332) aid_levels_battery_ParamLimits

0xd8b6,	// (0x0005c332) aid_levels_battery

0xd8d2,	// (0x0005c34e) battery_pane_g1_ParamLimits

0xd8d2,	// (0x0005c34e) battery_pane_g1

0xd8ef,	// (0x0005c36b) battery_pane_g2_ParamLimits

0xd8ef,	// (0x0005c36b) battery_pane_g2

0x0001,

0xf7b6,	// (0x0005e232) battery_pane_g_ParamLimits

0xf7b6,	// (0x0005e232) battery_pane_g

0xdabe,	// (0x0005c53a) uni_indicator_pane_g1

0xdad5,	// (0x0005c551) uni_indicator_pane_g2

0xdaeb,	// (0x0005c567) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0005e3a3) uni_indicator_pane_g

0x4810,	// (0x0005328c) navi_icon_pane_ParamLimits

0x4810,	// (0x0005328c) navi_icon_pane

0x4759,	// (0x000531d5) navi_midp_pane

0x482c,	// (0x000532a8) navi_navi_pane

0x4836,	// (0x000532b2) navi_text_pane_ParamLimits

0x4836,	// (0x000532b2) navi_text_pane

0x33c1,	// (0x00051e3d) status_small_wait_pane_g1

0x38c8,	// (0x00052344) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0005e39e) status_small_wait_pane_g

0x60a1,	// (0x00054b1d) navi_navi_icon_text_pane

0x60a9,	// (0x00054b25) navi_navi_pane_g1_ParamLimits

0x60a9,	// (0x00054b25) navi_navi_pane_g1

0x60bb,	// (0x00054b37) navi_navi_pane_g2_ParamLimits

0x60bb,	// (0x00054b37) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0005e36c) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0005e36c) navi_navi_pane_g

0x60cd,	// (0x00054b49) navi_navi_tabs_pane

0x60d6,	// (0x00054b52) navi_navi_text_pane

0x60a1,	// (0x00054b1d) navi_navi_volume_pane

0x607d,	// (0x00054af9) navi_text_pane_t1

0x6071,	// (0x00054aed) navi_icon_pane_g1

0x5fc4,	// (0x00054a40) navi_navi_text_pane_t1

0x1a0a,	// (0x00050486) navi_navi_volume_pane_g1

0x1a12,	// (0x0005048e) volume_small_pane

0x5f2a,	// (0x000549a6) navi_navi_icon_text_pane_g1

0x5f32,	// (0x000549ae) navi_navi_icon_text_pane_t1

0x482c,	// (0x000532a8) navi_tabs_2_long_pane

0x482c,	// (0x000532a8) navi_tabs_2_pane

0x482c,	// (0x000532a8) navi_tabs_3_long_pane

0x482c,	// (0x000532a8) navi_tabs_3_pane

0x482c,	// (0x000532a8) navi_tabs_4_pane

0x19ea,	// (0x00050466) tabs_2_active_pane_ParamLimits

0x19ea,	// (0x00050466) tabs_2_active_pane

0x19fa,	// (0x00050476) tabs_2_passive_pane_ParamLimits

0x19fa,	// (0x00050476) tabs_2_passive_pane

0x19b8,	// (0x00050434) tabs_3_active_pane_ParamLimits

0x19b8,	// (0x00050434) tabs_3_active_pane

0x19c8,	// (0x00050444) tabs_3_passive_pane_ParamLimits

0x19c8,	// (0x00050444) tabs_3_passive_pane

0x19d9,	// (0x00050455) tabs_3_passive_pane_cp_ParamLimits

0x19d9,	// (0x00050455) tabs_3_passive_pane_cp

0x1974,	// (0x000503f0) tabs_4_active_pane_ParamLimits

0x1974,	// (0x000503f0) tabs_4_active_pane

0x1985,	// (0x00050401) tabs_4_passive_pane_ParamLimits

0x1985,	// (0x00050401) tabs_4_passive_pane

0x1996,	// (0x00050412) tabs_4_passive_pane_cp_ParamLimits

0x1996,	// (0x00050412) tabs_4_passive_pane_cp

0x19a7,	// (0x00050423) tabs_4_passive_pane_cp2_ParamLimits

0x19a7,	// (0x00050423) tabs_4_passive_pane_cp2

0x1950,	// (0x000503cc) tabs_2_long_active_pane_ParamLimits

0x1950,	// (0x000503cc) tabs_2_long_active_pane

0x1962,	// (0x000503de) tabs_2_long_passive_pane_ParamLimits

0x1962,	// (0x000503de) tabs_2_long_passive_pane

0x1911,	// (0x0005038d) tabs_3_long_active_pane_ParamLimits

0x1911,	// (0x0005038d) tabs_3_long_active_pane

0x1924,	// (0x000503a0) tabs_3_long_passive_pane_ParamLimits

0x1924,	// (0x000503a0) tabs_3_long_passive_pane

0x193d,	// (0x000503b9) tabs_3_long_passive_pane_cp_ParamLimits

0x193d,	// (0x000503b9) tabs_3_long_passive_pane_cp

0x18b7,	// (0x00050333) volume_small_pane_g1

0x18c0,	// (0x0005033c) volume_small_pane_g2

0x18c9,	// (0x00050345) volume_small_pane_g3

0x18d2,	// (0x0005034e) volume_small_pane_g4

0x18db,	// (0x00050357) volume_small_pane_g5

0x18e4,	// (0x00050360) volume_small_pane_g6

0x18ed,	// (0x00050369) volume_small_pane_g7

0x18f6,	// (0x00050372) volume_small_pane_g8

0x18ff,	// (0x0005037b) volume_small_pane_g9

0x1908,	// (0x00050384) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0005e338) volume_small_pane_g

0x3726,	// (0x000521a2) bg_active_tab_pane_cp2_ParamLimits

0x3726,	// (0x000521a2) bg_active_tab_pane_cp2

0x34b9,	// (0x00051f35) tabs_3_active_pane_g1

0xcec8,	// (0x0005b944) tabs_3_active_pane_t1

0x3726,	// (0x000521a2) bg_passive_tab_pane_cp2_ParamLimits

0x3726,	// (0x000521a2) bg_passive_tab_pane_cp2

0x34b9,	// (0x00051f35) tabs_3_passive_pane_g1

0xcec8,	// (0x0005b944) tabs_3_passive_pane_t1

0x3726,	// (0x000521a2) bg_active_tab_pane_cp3_ParamLimits

0x3726,	// (0x000521a2) bg_active_tab_pane_cp3

0x34d3,	// (0x00051f4f) tabs_4_active_pane_g1

0xceda,	// (0x0005b956) tabs_4_active_pane_t1

0x3726,	// (0x000521a2) bg_passive_tab_pane_cp3_ParamLimits

0x3726,	// (0x000521a2) bg_passive_tab_pane_cp3

0x34d3,	// (0x00051f4f) tabs_4_1_passive_pane_g1

0xceda,	// (0x0005b956) tabs_4_1_passive_pane_t1

0x4cde,	// (0x0005375a) list_highlight_pane_cp2

0xdb73,	// (0x0005c5ef) list_set_pane_ParamLimits

0xdb73,	// (0x0005c5ef) list_set_pane

0xdc0d,	// (0x0005c689) main_pane_set_t1_ParamLimits

0xdc0d,	// (0x0005c689) main_pane_set_t1

0xdc2d,	// (0x0005c6a9) main_pane_set_t2_ParamLimits

0xdc2d,	// (0x0005c6a9) main_pane_set_t2

0xdc41,	// (0x0005c6bd) main_pane_set_t3_ParamLimits

0xdc41,	// (0x0005c6bd) main_pane_set_t3

0xdc53,	// (0x0005c6cf) main_pane_set_t4_ParamLimits

0xdc53,	// (0x0005c6cf) main_pane_set_t4

0x0003,

0xf98c,	// (0x0005e408) main_pane_set_t_ParamLimits

0xf98c,	// (0x0005e408) main_pane_set_t

0xdc65,	// (0x0005c6e1) setting_code_pane

0xdc6f,	// (0x0005c6eb) setting_slider_graphic_pane

0xdc6f,	// (0x0005c6eb) setting_slider_pane

0xdc6f,	// (0x0005c6eb) setting_text_pane

0xdc6f,	// (0x0005c6eb) setting_volume_pane

0x0396,	// (0x0004ee12) volume_set_pane

0x34ab,	// (0x00051f27) bg_set_opt_pane_cp

0x039e,	// (0x0004ee1a) setting_slider_pane_t1

0x03b7,	// (0x0004ee33) setting_slider_pane_t2

0x03d1,	// (0x0004ee4d) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0005dfe0) setting_slider_pane_t

0x03e9,	// (0x0004ee65) slider_set_pane

0x33cb,	// (0x00051e47) bg_set_opt_pane_cp2

0x34ed,	// (0x00051f69) setting_slider_graphic_pane_g1

0x03ff,	// (0x0004ee7b) setting_slider_graphic_pane_t1

0x040f,	// (0x0004ee8b) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0005dfe7) setting_slider_graphic_pane_t

0x041f,	// (0x0004ee9b) slider_set_pane_cp

0x33cb,	// (0x00051e47) input_focus_pane_cp1

0x65ab,	// (0x00055027) list_set_text_pane

0x33c1,	// (0x00051e3d) setting_text_pane_g1

0x33cb,	// (0x00051e47) input_focus_pane_cp2

0x33c1,	// (0x00051e3d) setting_code_pane_g1

0x34f6,	// (0x00051f72) setting_code_pane_t1

0x0427,	// (0x0004eea3) set_text_pane_t1_ParamLimits

0x0427,	// (0x0004eea3) set_text_pane_t1

0x3d72,	// (0x000527ee) set_opt_bg_pane_g1

0x3d7a,	// (0x000527f6) set_opt_bg_pane_g2

0x6585,	// (0x00055001) set_opt_bg_pane_g3

0x3d8a,	// (0x00052806) set_opt_bg_pane_g4

0x3d92,	// (0x0005280e) set_opt_bg_pane_g5

0x3d9a,	// (0x00052816) set_opt_bg_pane_g6

0x658f,	// (0x0005500b) set_opt_bg_pane_g7

0x6597,	// (0x00055013) set_opt_bg_pane_g8

0x65a1,	// (0x0005501d) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0005e3f5) set_opt_bg_pane_g

0x6578,	// (0x00054ff4) slider_set_pane_g1

0x1a7f,	// (0x000504fb) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0005e3e6) slider_set_pane_g

0x1a1b,	// (0x00050497) volume_set_pane_g1

0x1a23,	// (0x0005049f) volume_set_pane_g2

0x1a2b,	// (0x000504a7) volume_set_pane_g3

0x1a33,	// (0x000504af) volume_set_pane_g4

0x1a3b,	// (0x000504b7) volume_set_pane_g5

0x1a43,	// (0x000504bf) volume_set_pane_g6

0x1a4b,	// (0x000504c7) volume_set_pane_g7

0x1a53,	// (0x000504cf) volume_set_pane_g8

0x1a5b,	// (0x000504d7) volume_set_pane_g9

0x1a63,	// (0x000504df) volume_set_pane_g10

0x0009,

0xf942,	// (0x0005e3be) volume_set_pane_g

0xceec,	// (0x0005b968) indicator_pane_ParamLimits

0xceec,	// (0x0005b968) indicator_pane

0xcf14,	// (0x0005b990) main_idle_pane_g2_ParamLimits

0xcf14,	// (0x0005b990) main_idle_pane_g2

0xcf4c,	// (0x0005b9c8) main_pane_idle_g1_ParamLimits

0xcf4c,	// (0x0005b9c8) main_pane_idle_g1

0x3545,	// (0x00051fc1) popup_clock_digital_analogue_window_ParamLimits

0x3545,	// (0x00051fc1) popup_clock_digital_analogue_window

0xcf73,	// (0x0005b9ef) soft_indicator_pane_ParamLimits

0xcf73,	// (0x0005b9ef) soft_indicator_pane

0xcf8d,	// (0x0005ba09) wallpaper_pane_ParamLimits

0xcf8d,	// (0x0005ba09) wallpaper_pane

0x33c1,	// (0x00051e3d) wallpaper_pane_g1

0xcf9f,	// (0x0005ba1b) indicator_pane_g1_ParamLimits

0xcf9f,	// (0x0005ba1b) indicator_pane_g1

0x6990,	// (0x0005540c) navi_navi_icon_text_pane_srt_g1

0x3597,	// (0x00052013) soft_indicator_pane_t1

0x35b1,	// (0x0005202d) aid_ps_area_pane

0xcfb5,	// (0x0005ba31) aid_ps_clock_pane

0x35d0,	// (0x0005204c) aid_ps_indicator_pane

0x35dc,	// (0x00052058) indicator_ps_pane_ParamLimits

0x35dc,	// (0x00052058) indicator_ps_pane

0x35eb,	// (0x00052067) power_save_pane_g1_ParamLimits

0x35eb,	// (0x00052067) power_save_pane_g1

0x35f7,	// (0x00052073) power_save_pane_g2_ParamLimits

0x35f7,	// (0x00052073) power_save_pane_g2

0xf51c,	// (0x0005df98) aid_navinavi_width_pane

0x35b1,	// (0x0005202d) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0005dfec) power_save_pane_g_ParamLimits

0xf570,	// (0x0005dfec) power_save_pane_g

0x3605,	// (0x00052081) power_save_pane_t1_ParamLimits

0x3605,	// (0x00052081) power_save_pane_t1

0xcfb5,	// (0x0005ba31) aid_ps_clock_pane_ParamLimits

0x35d0,	// (0x0005204c) aid_ps_indicator_pane_ParamLimits

0x3617,	// (0x00052093) power_save_pane_t4_ParamLimits

0x3617,	// (0x00052093) power_save_pane_t4

0x0001,

0xf575,	// (0x0005dff1) power_save_pane_t_ParamLimits

0xf575,	// (0x0005dff1) power_save_pane_t

0x3641,	// (0x000520bd) power_save_t3_ParamLimits

0x3641,	// (0x000520bd) power_save_t3

0x362c,	// (0x000520a8) power_save_t2_ParamLimits

0x362c,	// (0x000520a8) power_save_t2

0x3656,	// (0x000520d2) indicator_ps_pane_g1

0xcfc3,	// (0x0005ba3f) ai_gene_pane_ParamLimits

0xcfc3,	// (0x0005ba3f) ai_gene_pane

0xcfda,	// (0x0005ba56) ai_links_pane_ParamLimits

0xcfda,	// (0x0005ba56) ai_links_pane

0xcff2,	// (0x0005ba6e) indicator_pane_cp1_ParamLimits

0xcff2,	// (0x0005ba6e) indicator_pane_cp1

0xd001,	// (0x0005ba7d) main_pane_idle_g1_cp_ParamLimits

0xd001,	// (0x0005ba7d) main_pane_idle_g1_cp

0x368f,	// (0x0005210b) popup_ai_links_title_window

0xd019,	// (0x0005ba95) soft_indicator_pane_cp1_ParamLimits

0xd019,	// (0x0005ba95) soft_indicator_pane_cp1

0x636a,	// (0x00054de6) ai_links_pane_g1

0x6373,	// (0x00054def) grid_ai_links_pane

0xdab5,	// (0x0005c531) ai_gene_pane_1

0x6358,	// (0x00054dd4) ai_gene_pane_2

0x6361,	// (0x00054ddd) list_highlight_pane_cp4

0xda91,	// (0x0005c50d) cell_ai_link_pane_ParamLimits

0xda91,	// (0x0005c50d) cell_ai_link_pane

0x6329,	// (0x00054da5) cell_ai_link_pane_g1

0x38c8,	// (0x00052344) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0005e399) cell_ai_link_pane_g

0x33cb,	// (0x00051e47) grid_highlight_cp2

0x33cb,	// (0x00051e47) bg_popup_sub_pane_cp1

0x36b2,	// (0x0005212e) popup_ai_links_title_window_t1

0x6277,	// (0x00054cf3) ai_gene_pane_1_g1_ParamLimits

0x6277,	// (0x00054cf3) ai_gene_pane_1_g1

0x6283,	// (0x00054cff) ai_gene_pane_1_g2_ParamLimits

0x6283,	// (0x00054cff) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0005e38f) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0005e38f) ai_gene_pane_1_g

0x6290,	// (0x00054d0c) ai_gene_pane_1_t1_ParamLimits

0x6290,	// (0x00054d0c) ai_gene_pane_1_t1

0x62c4,	// (0x00054d40) grid_ai_soft_ind_pane

0x6262,	// (0x00054cde) ai_gene_pane_2_t1_ParamLimits

0x6262,	// (0x00054cde) ai_gene_pane_2_t1

0xd02d,	// (0x0005baa9) main_pane_empty_t1_ParamLimits

0xd02d,	// (0x0005baa9) main_pane_empty_t1

0xd045,	// (0x0005bac1) main_pane_empty_t2_ParamLimits

0xd045,	// (0x0005bac1) main_pane_empty_t2

0xd05a,	// (0x0005bad6) main_pane_empty_t3_ParamLimits

0xd05a,	// (0x0005bad6) main_pane_empty_t3

0xd06c,	// (0x0005bae8) main_pane_empty_t4_ParamLimits

0xd06c,	// (0x0005bae8) main_pane_empty_t4

0xd07e,	// (0x0005bafa) main_pane_empty_t5_ParamLimits

0xd07e,	// (0x0005bafa) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0005dff6) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0005dff6) main_pane_empty_t

0x3dc3,	// (0x0005283f) bg_popup_window_pane_ParamLimits

0x3dc3,	// (0x0005283f) bg_popup_window_pane

0x5fd2,	// (0x00054a4e) find_popup_pane_cp2_ParamLimits

0x5fd2,	// (0x00054a4e) find_popup_pane_cp2

0x5fde,	// (0x00054a5a) heading_pane_ParamLimits

0x5fde,	// (0x00054a5a) heading_pane

0x33cb,	// (0x00051e47) bg_popup_sub_pane

0xda12,	// (0x0005c48e) bg_popup_window_pane_g1_ParamLimits

0xda12,	// (0x0005c48e) bg_popup_window_pane_g1

0xda21,	// (0x0005c49d) bg_popup_window_pane_g2_ParamLimits

0xda21,	// (0x0005c49d) bg_popup_window_pane_g2

0xda2d,	// (0x0005c4a9) bg_popup_window_pane_g3_ParamLimits

0xda2d,	// (0x0005c4a9) bg_popup_window_pane_g3

0xda39,	// (0x0005c4b5) bg_popup_window_pane_g4_ParamLimits

0xda39,	// (0x0005c4b5) bg_popup_window_pane_g4

0xda48,	// (0x0005c4c4) bg_popup_window_pane_g5_ParamLimits

0xda48,	// (0x0005c4c4) bg_popup_window_pane_g5

0xda58,	// (0x0005c4d4) bg_popup_window_pane_g6_ParamLimits

0xda58,	// (0x0005c4d4) bg_popup_window_pane_g6

0xda64,	// (0x0005c4e0) bg_popup_window_pane_g7_ParamLimits

0xda64,	// (0x0005c4e0) bg_popup_window_pane_g7

0xda73,	// (0x0005c4ef) bg_popup_window_pane_g8_ParamLimits

0xda73,	// (0x0005c4ef) bg_popup_window_pane_g8

0xda82,	// (0x0005c4fe) bg_popup_window_pane_g9_ParamLimits

0xda82,	// (0x0005c4fe) bg_popup_window_pane_g9

0x5fb8,	// (0x00054a34) bg_popup_window_pane_g10_ParamLimits

0x5fb8,	// (0x00054a34) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0005e357) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0005e357) bg_popup_window_pane_g

0x5ee1,	// (0x0005495d) bg_popup_heading_pane_ParamLimits

0x5ee1,	// (0x0005495d) bg_popup_heading_pane

0x1b07,	// (0x00050583) tabs_4_passive_pane_cp_srt_ParamLimits

0x1b07,	// (0x00050583) tabs_4_passive_pane_cp_srt

0x1b19,	// (0x00050595) tabs_4_passive_pane_srt_ParamLimits

0x5ef5,	// (0x00054971) heading_pane_g2

0x1b19,	// (0x00050595) tabs_4_passive_pane_srt

0x5268,	// (0x00053ce4) bg_passive_tab_pane_cp3_srt_ParamLimits

0x5268,	// (0x00053ce4) bg_passive_tab_pane_cp3_srt

0x5efd,	// (0x00054979) heading_pane_t1_ParamLimits

0x5efd,	// (0x00054979) heading_pane_t1

0x5f14,	// (0x00054990) heading_pane_t2_ParamLimits

0x5f14,	// (0x00054990) heading_pane_t2

0x0001,

0xf8d6,	// (0x0005e352) heading_pane_t_ParamLimits

0xf8d6,	// (0x0005e352) heading_pane_t

0x5a0e,	// (0x0005448a) bg_popup_heading_pane_g1

0x5abd,	// (0x00054539) bg_popup_heading_pane_g2

0x5ac7,	// (0x00054543) bg_popup_heading_pane_g3

0x5ad1,	// (0x0005454d) bg_popup_heading_pane_g4

0x5adb,	// (0x00054557) bg_popup_heading_pane_g5

0x5ae5,	// (0x00054561) bg_popup_heading_pane_g6

0x5aed,	// (0x00054569) bg_popup_heading_pane_g7

0x5af5,	// (0x00054571) bg_popup_heading_pane_g8

0x5aff,	// (0x0005457b) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0005e30e) bg_popup_heading_pane_g

0x51f4,	// (0x00053c70) bg_popup_sub_pane_g1

0x5204,	// (0x00053c80) bg_popup_sub_pane_g2

0x51fc,	// (0x00053c78) bg_popup_sub_pane_g3

0x5214,	// (0x00053c90) bg_popup_sub_pane_g4

0x520c,	// (0x00053c88) bg_popup_sub_pane_g5

0x521c,	// (0x00053c98) bg_popup_sub_pane_g6

0x5224,	// (0x00053ca0) bg_popup_sub_pane_g7

0x5234,	// (0x00053cb0) bg_popup_sub_pane_g8

0x522c,	// (0x00053ca8) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0005e2e8) bg_popup_sub_pane_g

0x3726,	// (0x000521a2) bg_popup_window_pane_cp5_ParamLimits

0x3726,	// (0x000521a2) bg_popup_window_pane_cp5

0x3742,	// (0x000521be) popup_note_window_g1_ParamLimits

0x3742,	// (0x000521be) popup_note_window_g1

0x374e,	// (0x000521ca) popup_note_window_t1_ParamLimits

0x374e,	// (0x000521ca) popup_note_window_t1

0x3764,	// (0x000521e0) popup_note_window_t2_ParamLimits

0x3764,	// (0x000521e0) popup_note_window_t2

0x377a,	// (0x000521f6) popup_note_window_t3_ParamLimits

0x377a,	// (0x000521f6) popup_note_window_t3

0x3790,	// (0x0005220c) popup_note_window_t4_ParamLimits

0x3790,	// (0x0005220c) popup_note_window_t4

0x37b8,	// (0x00052234) popup_note_window_t5_ParamLimits

0x37b8,	// (0x00052234) popup_note_window_t5

0x0004,

0xf585,	// (0x0005e001) popup_note_window_t_ParamLimits

0xf585,	// (0x0005e001) popup_note_window_t

0x37dc,	// (0x00052258) bg_popup_window_pane_cp6_ParamLimits

0x37dc,	// (0x00052258) bg_popup_window_pane_cp6

0x598a,	// (0x00054406) popup_note_image_window_g1_ParamLimits

0x598a,	// (0x00054406) popup_note_image_window_g1

0x5996,	// (0x00054412) popup_note_image_window_g2_ParamLimits

0x5996,	// (0x00054412) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0005e2dc) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0005e2dc) popup_note_image_window_g

0x59af,	// (0x0005442b) popup_note_image_window_t1_ParamLimits

0x59af,	// (0x0005442b) popup_note_image_window_t1

0x59c8,	// (0x00054444) popup_note_image_window_t2_ParamLimits

0x59c8,	// (0x00054444) popup_note_image_window_t2

0x59e1,	// (0x0005445d) popup_note_image_window_t3_ParamLimits

0x59e1,	// (0x0005445d) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0005e2e1) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0005e2e1) popup_note_image_window_t

0x584b,	// (0x000542c7) bg_popup_window_pane_cp7_ParamLimits

0x584b,	// (0x000542c7) bg_popup_window_pane_cp7

0x587b,	// (0x000542f7) popup_note_wait_window_g1_ParamLimits

0x587b,	// (0x000542f7) popup_note_wait_window_g1

0x5887,	// (0x00054303) popup_note_wait_window_g2_ParamLimits

0x5887,	// (0x00054303) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0005e2ca) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0005e2ca) popup_note_wait_window_g

0x589f,	// (0x0005431b) popup_note_wait_window_t1_ParamLimits

0x589f,	// (0x0005431b) popup_note_wait_window_t1

0x58c6,	// (0x00054342) popup_note_wait_window_t2_ParamLimits

0x58c6,	// (0x00054342) popup_note_wait_window_t2

0x58e3,	// (0x0005435f) popup_note_wait_window_t3_ParamLimits

0x58e3,	// (0x0005435f) popup_note_wait_window_t3

0x58f6,	// (0x00054372) popup_note_wait_window_t4_ParamLimits

0x58f6,	// (0x00054372) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0005e2d1) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0005e2d1) popup_note_wait_window_t

0x591b,	// (0x00054397) wait_bar_pane_ParamLimits

0x591b,	// (0x00054397) wait_bar_pane

0x33cb,	// (0x00051e47) wait_anim_pane

0x33cb,	// (0x00051e47) wait_border_pane

0x33c1,	// (0x00051e3d) wait_anim_pane_g1

0x33c1,	// (0x00051e3d) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0005e18a) wait_anim_pane_g

0x57ef,	// (0x0005426b) wait_border_pane_g1

0x57fa,	// (0x00054276) wait_border_pane_g2

0x5803,	// (0x0005427f) wait_border_pane_g3

0x0002,

0xf847,	// (0x0005e2c3) wait_border_pane_g

0x565a,	// (0x000540d6) bg_popup_window_pane_cp16_ParamLimits

0x565a,	// (0x000540d6) bg_popup_window_pane_cp16

0x575a,	// (0x000541d6) indicator_popup_pane_cp4_ParamLimits

0x575a,	// (0x000541d6) indicator_popup_pane_cp4

0x576e,	// (0x000541ea) popup_query_data_window_t1_ParamLimits

0x576e,	// (0x000541ea) popup_query_data_window_t1

0x5780,	// (0x000541fc) popup_query_data_window_t2_ParamLimits

0x5780,	// (0x000541fc) popup_query_data_window_t2

0x5799,	// (0x00054215) popup_query_data_window_t3_ParamLimits

0x5799,	// (0x00054215) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0005e2bc) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0005e2bc) popup_query_data_window_t

0x57b3,	// (0x0005422f) query_popup_data_pane_ParamLimits

0x57b3,	// (0x0005422f) query_popup_data_pane

0x57c7,	// (0x00054243) query_popup_data_pane_cp1_ParamLimits

0x57c7,	// (0x00054243) query_popup_data_pane_cp1

0x565a,	// (0x000540d6) bg_popup_window_pane_cp10_ParamLimits

0x565a,	// (0x000540d6) bg_popup_window_pane_cp10

0x568c,	// (0x00054108) indicator_popup_pane_ParamLimits

0x568c,	// (0x00054108) indicator_popup_pane

0x56ae,	// (0x0005412a) popup_query_code_window_t1_ParamLimits

0x56ae,	// (0x0005412a) popup_query_code_window_t1

0x56c8,	// (0x00054144) popup_query_code_window_t2_ParamLimits

0x56c8,	// (0x00054144) popup_query_code_window_t2

0x5711,	// (0x0005418d) popup_query_code_window_t3_ParamLimits

0x5711,	// (0x0005418d) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0005e2b5) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0005e2b5) popup_query_code_window_t

0x5740,	// (0x000541bc) query_popup_pane_ParamLimits

0x5740,	// (0x000541bc) query_popup_pane

0x37dc,	// (0x00052258) bg_popup_window_pane_cp15_ParamLimits

0x37dc,	// (0x00052258) bg_popup_window_pane_cp15

0x37fa,	// (0x00052276) indicator_popup_pane_cp1_ParamLimits

0x37fa,	// (0x00052276) indicator_popup_pane_cp1

0x380d,	// (0x00052289) indicator_popup_pane_cp2_ParamLimits

0x380d,	// (0x00052289) indicator_popup_pane_cp2

0x3820,	// (0x0005229c) popup_query_data_code_window_g1_ParamLimits

0x3820,	// (0x0005229c) popup_query_data_code_window_g1

0x3833,	// (0x000522af) popup_query_data_code_window_t1_ParamLimits

0x3833,	// (0x000522af) popup_query_data_code_window_t1

0x3845,	// (0x000522c1) popup_query_data_code_window_t2_ParamLimits

0x3845,	// (0x000522c1) popup_query_data_code_window_t2

0x3857,	// (0x000522d3) popup_query_data_code_window_t3_ParamLimits

0x3857,	// (0x000522d3) popup_query_data_code_window_t3

0x386d,	// (0x000522e9) popup_query_data_code_window_t4_ParamLimits

0x386d,	// (0x000522e9) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0005e00c) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0005e00c) popup_query_data_code_window_t

0x17b0,	// (0x0005022c) list_single_midp_graphic_pane_g3

0x3885,	// (0x00052301) query_popup_data_pane_cp2_ParamLimits

0x3898,	// (0x00052314) query_popup_pane_cp2_ParamLimits

0x3898,	// (0x00052314) query_popup_pane_cp2

0x33cb,	// (0x00051e47) bg_popup_window_pane_cp11

0x5652,	// (0x000540ce) heading_pane_cp5

0x3980,	// (0x000523fc) listscroll_popup_info_pane

0x33cb,	// (0x00051e47) input_focus_pane_cp3

0x38ab,	// (0x00052327) query_popup_pane_t1

0x38b9,	// (0x00052335) list_popup_info_pane_ParamLimits

0x38b9,	// (0x00052335) list_popup_info_pane

0x38c8,	// (0x00052344) listscroll_popup_info_pane_g1

0x38d0,	// (0x0005234c) scroll_pane_cp7

0x38da,	// (0x00052356) popup_info_list_pane_t1_ParamLimits

0x38da,	// (0x00052356) popup_info_list_pane_t1

0x38f4,	// (0x00052370) popup_info_list_pane_t2_ParamLimits

0x38f4,	// (0x00052370) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0005e015) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0005e015) popup_info_list_pane_t

0x33cb,	// (0x00051e47) bg_popup_window_pane_cp12

0x69aa,	// (0x00055426) find_popup_pane

0x34ab,	// (0x00051f27) bg_popup_window_pane_cp3

0x390e,	// (0x0005238a) heading_pane_cp3

0x391a,	// (0x00052396) listscroll_popup_graphic_pane

0x33cb,	// (0x00051e47) bg_popup_window_pane_cp4

0xd0e0,	// (0x0005bb5c) heading_pane_cp4

0x3980,	// (0x000523fc) listscroll_popup_colour_pane

0x3988,	// (0x00052404) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3988,	// (0x00052404) cell_large_graphic_colour_none_popup_pane

0xd0e8,	// (0x0005bb64) grid_large_graphic_colour_popup_pane_ParamLimits

0xd0e8,	// (0x0005bb64) grid_large_graphic_colour_popup_pane

0x39c8,	// (0x00052444) listscroll_popup_colour_pane_g1_ParamLimits

0x39c8,	// (0x00052444) listscroll_popup_colour_pane_g1

0x39df,	// (0x0005245b) listscroll_popup_colour_pane_g2_ParamLimits

0x39df,	// (0x0005245b) listscroll_popup_colour_pane_g2

0x39f6,	// (0x00052472) listscroll_popup_colour_pane_g3_ParamLimits

0x39f6,	// (0x00052472) listscroll_popup_colour_pane_g3

0xd10c,	// (0x0005bb88) listscroll_popup_colour_pane_g4_ParamLimits

0xd10c,	// (0x0005bb88) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0005e01a) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0005e01a) listscroll_popup_colour_pane_g

0x3a1a,	// (0x00052496) scroll_pane_cp6_ParamLimits

0x3a1a,	// (0x00052496) scroll_pane_cp6

0xd11c,	// (0x0005bb98) cell_large_graphic_colour_popup_pane_ParamLimits

0xd11c,	// (0x0005bb98) cell_large_graphic_colour_popup_pane

0x3a4b,	// (0x000524c7) cell_large_graphic_colour_none_popup_pane_t1

0x33cb,	// (0x00051e47) grid_highlight_pane_cp5

0x3a5a,	// (0x000524d6) cell_large_graphic_colour_popup_pane_g1

0x3a62,	// (0x000524de) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0005e023) cell_large_graphic_colour_popup_pane_g

0x3a6a,	// (0x000524e6) cell_large_graphic_colour_popup_pane_g2_copy1

0x3a73,	// (0x000524ef) grid_highlight_pane_cp4

0x3a7b,	// (0x000524f7) bg_popup_window_pane_cp8_ParamLimits

0x3a7b,	// (0x000524f7) bg_popup_window_pane_cp8

0x3a96,	// (0x00052512) popup_snote_single_text_window_g1_ParamLimits

0x3a96,	// (0x00052512) popup_snote_single_text_window_g1

0x3aa8,	// (0x00052524) popup_snote_single_text_window_t1_ParamLimits

0x3aa8,	// (0x00052524) popup_snote_single_text_window_t1

0x3abb,	// (0x00052537) popup_snote_single_text_window_t2_ParamLimits

0x3abb,	// (0x00052537) popup_snote_single_text_window_t2

0x3ace,	// (0x0005254a) popup_snote_single_text_window_t3_ParamLimits

0x3ace,	// (0x0005254a) popup_snote_single_text_window_t3

0x3b07,	// (0x00052583) popup_snote_single_text_window_t4_ParamLimits

0x3b07,	// (0x00052583) popup_snote_single_text_window_t4

0x3b3b,	// (0x000525b7) popup_snote_single_text_window_t5_ParamLimits

0x3b3b,	// (0x000525b7) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0005e028) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0005e028) popup_snote_single_text_window_t

0x3b6a,	// (0x000525e6) bg_popup_window_pane_cp9_ParamLimits

0x3b6a,	// (0x000525e6) bg_popup_window_pane_cp9

0x3a96,	// (0x00052512) popup_snote_single_graphic_window_g1_ParamLimits

0x3a96,	// (0x00052512) popup_snote_single_graphic_window_g1

0x3b78,	// (0x000525f4) popup_snote_single_graphic_window_g2_ParamLimits

0x3b78,	// (0x000525f4) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0005e033) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0005e033) popup_snote_single_graphic_window_g

0x3b84,	// (0x00052600) popup_snote_single_graphic_window_t1_ParamLimits

0x3b84,	// (0x00052600) popup_snote_single_graphic_window_t1

0x3b97,	// (0x00052613) popup_snote_single_graphic_window_t2_ParamLimits

0x3b97,	// (0x00052613) popup_snote_single_graphic_window_t2

0x3baa,	// (0x00052626) popup_snote_single_graphic_window_t3_ParamLimits

0x3baa,	// (0x00052626) popup_snote_single_graphic_window_t3

0x3be3,	// (0x0005265f) popup_snote_single_graphic_window_t4_ParamLimits

0x3be3,	// (0x0005265f) popup_snote_single_graphic_window_t4

0x3c17,	// (0x00052693) popup_snote_single_graphic_window_t5_ParamLimits

0x3c17,	// (0x00052693) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0005e038) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0005e038) popup_snote_single_graphic_window_t

0x68ac,	// (0x00055328) grid_graphic_popup_pane_ParamLimits

0x68ac,	// (0x00055328) grid_graphic_popup_pane

0x68d4,	// (0x00055350) listscroll_popup_graphic_pane_g1_ParamLimits

0x68d4,	// (0x00055350) listscroll_popup_graphic_pane_g1

0xdd60,	// (0x0005c7dc) listscroll_popup_graphic_pane_g2_ParamLimits

0xdd60,	// (0x0005c7dc) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0005e432) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0005e432) listscroll_popup_graphic_pane_g

0x693e,	// (0x000553ba) scroll_pane_cp5

0xdd23,	// (0x0005c79f) cell_graphic_popup_pane_ParamLimits

0xdd23,	// (0x0005c79f) cell_graphic_popup_pane

0x6836,	// (0x000552b2) cell_graphic_popup_pane_g1

0x683e,	// (0x000552ba) cell_graphic_popup_pane_g2

0x3a6a,	// (0x000524e6) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0005e42b) cell_graphic_popup_pane_g

0x6847,	// (0x000552c3) cell_graphic_popup_pane_t2

0x3a73,	// (0x000524ef) grid_highlight_pane_cp3

0x3c58,	// (0x000526d4) list_gen_pane_ParamLimits

0x3c58,	// (0x000526d4) list_gen_pane

0x3c8a,	// (0x00052706) scroll_pane

0xdcda,	// (0x0005c756) bg_list_pane_g1_ParamLimits

0xdcda,	// (0x0005c756) bg_list_pane_g1

0x67ab,	// (0x00055227) bg_list_pane_g2_ParamLimits

0x67ab,	// (0x00055227) bg_list_pane_g2

0x67c0,	// (0x0005523c) bg_list_pane_g3_ParamLimits

0x67c0,	// (0x0005523c) bg_list_pane_g3

0x67d4,	// (0x00055250) bg_list_pane_g4_ParamLimits

0x67d4,	// (0x00055250) bg_list_pane_g4

0xdcf7,	// (0x0005c773) bg_list_pane_g5_ParamLimits

0xdcf7,	// (0x0005c773) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0005e420) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0005e420) bg_list_pane_g

0xdca2,	// (0x0005c71e) list_double2_graphic_large_graphic_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double2_graphic_large_graphic_pane

0xdca2,	// (0x0005c71e) list_double2_graphic_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double2_graphic_pane

0xdca2,	// (0x0005c71e) list_double2_large_graphic_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double2_large_graphic_pane

0xdca2,	// (0x0005c71e) list_double2_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double2_pane

0xdca2,	// (0x0005c71e) list_double_graphic_heading_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double_graphic_heading_pane

0xdca2,	// (0x0005c71e) list_double_graphic_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double_graphic_pane

0xdca2,	// (0x0005c71e) list_double_heading_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double_heading_pane

0xdca2,	// (0x0005c71e) list_double_large_graphic_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double_large_graphic_pane

0xdca2,	// (0x0005c71e) list_double_number_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double_number_pane

0xdca2,	// (0x0005c71e) list_double_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double_pane

0xdca2,	// (0x0005c71e) list_double_time_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_double_time_pane

0xdca2,	// (0x0005c71e) list_setting_number_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_setting_number_pane

0xdca2,	// (0x0005c71e) list_setting_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_setting_pane

0xdcb4,	// (0x0005c730) list_single_2graphic_pane_ParamLimits

0xdcb4,	// (0x0005c730) list_single_2graphic_pane

0xdcb4,	// (0x0005c730) list_single_graphic_heading_pane_ParamLimits

0xdcb4,	// (0x0005c730) list_single_graphic_heading_pane

0xdcb4,	// (0x0005c730) list_single_graphic_pane_ParamLimits

0xdcb4,	// (0x0005c730) list_single_graphic_pane

0xdcb4,	// (0x0005c730) list_single_heading_pane_ParamLimits

0xdcb4,	// (0x0005c730) list_single_heading_pane

0xdca2,	// (0x0005c71e) list_single_large_graphic_pane_ParamLimits

0xdca2,	// (0x0005c71e) list_single_large_graphic_pane

0xdcb4,	// (0x0005c730) list_single_number_heading_pane_ParamLimits

0xdcb4,	// (0x0005c730) list_single_number_heading_pane

0xdcb4,	// (0x0005c730) list_single_number_pane_ParamLimits

0xdcb4,	// (0x0005c730) list_single_number_pane

0xdcb4,	// (0x0005c730) list_single_pane_ParamLimits

0xdcb4,	// (0x0005c730) list_single_pane

0x33cb,	// (0x00051e47) list_highlight_pane_cp1

0x48d7,	// (0x00053353) list_single_pane_g1_ParamLimits

0x48d7,	// (0x00053353) list_single_pane_g1

0x2b00,	// (0x0005157c) list_single_pane_g2_ParamLimits

0x2b00,	// (0x0005157c) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0005e054) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0005e054) list_single_pane_g

0x2dda,	// (0x00051856) list_single_pane_t1_ParamLimits

0x2dda,	// (0x00051856) list_single_pane_t1

0x48d7,	// (0x00053353) list_single_number_pane_g1_ParamLimits

0x48d7,	// (0x00053353) list_single_number_pane_g1

0x2b00,	// (0x0005157c) list_single_number_pane_g2_ParamLimits

0x2b00,	// (0x0005157c) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0005e054) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0005e054) list_single_number_pane_g

0x1775,	// (0x000501f1) list_single_number_pane_t1_ParamLimits

0x1775,	// (0x000501f1) list_single_number_pane_t1

0xc6f1,	// (0x0005b16d) list_single_number_pane_t2_ParamLimits

0xc6f1,	// (0x0005b16d) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0005e3e1) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0005e3e1) list_single_number_pane_t

0xb7d8,	// (0x0005a254) list_single_graphic_pane_g1_ParamLimits

0xb7d8,	// (0x0005a254) list_single_graphic_pane_g1

0x48d7,	// (0x00053353) list_single_graphic_pane_g2_ParamLimits

0x48d7,	// (0x00053353) list_single_graphic_pane_g2

0x2b00,	// (0x0005157c) list_single_graphic_pane_g3_ParamLimits

0x2b00,	// (0x0005157c) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0005e043) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0005e043) list_single_graphic_pane_g

0xb7e4,	// (0x0005a260) list_single_graphic_pane_t1_ParamLimits

0xb7e4,	// (0x0005a260) list_single_graphic_pane_t1

0xb7fa,	// (0x0005a276) list_single_heading_pane_g1_ParamLimits

0xb7fa,	// (0x0005a276) list_single_heading_pane_g1

0x2b00,	// (0x0005157c) list_single_heading_pane_g2_ParamLimits

0x2b00,	// (0x0005157c) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0005e04a) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0005e04a) list_single_heading_pane_g

0xb80d,	// (0x0005a289) list_single_heading_pane_t1_ParamLimits

0xb80d,	// (0x0005a289) list_single_heading_pane_t1

0xd145,	// (0x0005bbc1) list_single_heading_pane_t2_ParamLimits

0xd145,	// (0x0005bbc1) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0005e04f) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0005e04f) list_single_heading_pane_t

0x48d7,	// (0x00053353) list_single_number_heading_pane_g1_ParamLimits

0x48d7,	// (0x00053353) list_single_number_heading_pane_g1

0x2b00,	// (0x0005157c) list_single_number_heading_pane_g2_ParamLimits

0x2b00,	// (0x0005157c) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0005e054) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0005e054) list_single_number_heading_pane_g

0xb823,	// (0x0005a29f) list_single_number_heading_pane_t1_ParamLimits

0xb823,	// (0x0005a29f) list_single_number_heading_pane_t1

0xb839,	// (0x0005a2b5) list_single_number_heading_pane_t2_ParamLimits

0xb839,	// (0x0005a2b5) list_single_number_heading_pane_t2

0x2db4,	// (0x00051830) list_single_number_heading_pane_t3_ParamLimits

0x2db4,	// (0x00051830) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0005e059) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0005e059) list_single_number_heading_pane_t

0xb84b,	// (0x0005a2c7) list_single_graphic_heading_pane_g1_ParamLimits

0xb84b,	// (0x0005a2c7) list_single_graphic_heading_pane_g1

0xd157,	// (0x0005bbd3) list_single_graphic_heading_pane_g4_ParamLimits

0xd157,	// (0x0005bbd3) list_single_graphic_heading_pane_g4

0x2b00,	// (0x0005157c) list_single_graphic_heading_pane_g5_ParamLimits

0x2b00,	// (0x0005157c) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0005e060) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005e060) list_single_graphic_heading_pane_g

0xb823,	// (0x0005a29f) list_single_graphic_heading_pane_t1_ParamLimits

0xb823,	// (0x0005a29f) list_single_graphic_heading_pane_t1

0xb863,	// (0x0005a2df) list_single_graphic_heading_pane_t2_ParamLimits

0xb863,	// (0x0005a2df) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0005e067) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0005e067) list_single_graphic_heading_pane_t

0x2df0,	// (0x0005186c) list_single_large_graphic_pane_g1_ParamLimits

0x2df0,	// (0x0005186c) list_single_large_graphic_pane_g1

0x2dfc,	// (0x00051878) list_single_large_graphic_pane_g2_ParamLimits

0x2dfc,	// (0x00051878) list_single_large_graphic_pane_g2

0x2e08,	// (0x00051884) list_single_large_graphic_pane_g3_ParamLimits

0x2e08,	// (0x00051884) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005e06c) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005e06c) list_single_large_graphic_pane_g

0x57fa,	// (0x00054276) wait_border_pane_g2_copy1

0xb879,	// (0x0005a2f5) list_single_large_graphic_pane_g4_cp2

0x2e14,	// (0x00051890) list_single_large_graphic_pane_t1_ParamLimits

0x2e14,	// (0x00051890) list_single_large_graphic_pane_t1

0x47c2,	// (0x0005323e) list_double_pane_g1_ParamLimits

0x47c2,	// (0x0005323e) list_double_pane_g1

0xd168,	// (0x0005bbe4) list_double_pane_g2_ParamLimits

0xd168,	// (0x0005bbe4) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0005e073) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0005e073) list_double_pane_g

0xb881,	// (0x0005a2fd) list_double_pane_t1_ParamLimits

0xb881,	// (0x0005a2fd) list_double_pane_t1

0xb897,	// (0x0005a313) list_double_pane_t2_ParamLimits

0xb897,	// (0x0005a313) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0005e078) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0005e078) list_double_pane_t

0xb8a9,	// (0x0005a325) list_double2_pane_g1_ParamLimits

0xb8a9,	// (0x0005a325) list_double2_pane_g1

0xb8ba,	// (0x0005a336) list_double2_pane_g2_ParamLimits

0xb8ba,	// (0x0005a336) list_double2_pane_g2

0x0001,

0xf601,	// (0x0005e07d) list_double2_pane_g_ParamLimits

0xf601,	// (0x0005e07d) list_double2_pane_g

0xb8c6,	// (0x0005a342) list_double2_pane_t1_ParamLimits

0xb8c6,	// (0x0005a342) list_double2_pane_t1

0xb8dc,	// (0x0005a358) list_double2_pane_t2_ParamLimits

0xb8dc,	// (0x0005a358) list_double2_pane_t2

0x0001,

0xf606,	// (0x0005e082) list_double2_pane_t_ParamLimits

0xf606,	// (0x0005e082) list_double2_pane_t

0x47c2,	// (0x0005323e) list_double_number_pane_g1_ParamLimits

0x47c2,	// (0x0005323e) list_double_number_pane_g1

0xd168,	// (0x0005bbe4) list_double_number_pane_g2_ParamLimits

0xd168,	// (0x0005bbe4) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0005e073) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0005e073) list_double_number_pane_g

0xb8ee,	// (0x0005a36a) list_double_number_pane_t1_ParamLimits

0xb8ee,	// (0x0005a36a) list_double_number_pane_t1

0xb900,	// (0x0005a37c) list_double_number_pane_t2_ParamLimits

0xb900,	// (0x0005a37c) list_double_number_pane_t2

0xb916,	// (0x0005a392) list_double_number_pane_t3_ParamLimits

0xb916,	// (0x0005a392) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0005e087) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0005e087) list_double_number_pane_t

0xb928,	// (0x0005a3a4) list_double_graphic_pane_g1_ParamLimits

0xb928,	// (0x0005a3a4) list_double_graphic_pane_g1

0xb934,	// (0x0005a3b0) list_double_graphic_pane_g2_ParamLimits

0xb934,	// (0x0005a3b0) list_double_graphic_pane_g2

0xb943,	// (0x0005a3bf) list_double_graphic_pane_g3_ParamLimits

0xb943,	// (0x0005a3bf) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0005e08e) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0005e08e) list_double_graphic_pane_g

0xb94f,	// (0x0005a3cb) list_double_graphic_pane_t1_ParamLimits

0xb94f,	// (0x0005a3cb) list_double_graphic_pane_t1

0xb965,	// (0x0005a3e1) list_double_graphic_pane_t2_ParamLimits

0xb965,	// (0x0005a3e1) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0005e097) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0005e097) list_double_graphic_pane_t

0xb977,	// (0x0005a3f3) list_double2_graphic_pane_g1_ParamLimits

0xb977,	// (0x0005a3f3) list_double2_graphic_pane_g1

0xb983,	// (0x0005a3ff) list_double2_graphic_pane_g2_ParamLimits

0xb983,	// (0x0005a3ff) list_double2_graphic_pane_g2

0xd180,	// (0x0005bbfc) list_double2_graphic_pane_g3_ParamLimits

0xd180,	// (0x0005bbfc) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0005e09c) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0005e09c) list_double2_graphic_pane_g

0xb98f,	// (0x0005a40b) list_double2_graphic_pane_t1_ParamLimits

0xb98f,	// (0x0005a40b) list_double2_graphic_pane_t1

0xb9a5,	// (0x0005a421) list_double2_graphic_pane_t2_ParamLimits

0xb9a5,	// (0x0005a421) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0005e0a3) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0005e0a3) list_double2_graphic_pane_t

0xb9b7,	// (0x0005a433) list_double_large_graphic_pane_g1_ParamLimits

0xb9b7,	// (0x0005a433) list_double_large_graphic_pane_g1

0xb9d6,	// (0x0005a452) list_double_large_graphic_pane_g2_ParamLimits

0xb9d6,	// (0x0005a452) list_double_large_graphic_pane_g2

0xd168,	// (0x0005bbe4) list_double_large_graphic_pane_g3_ParamLimits

0xd168,	// (0x0005bbe4) list_double_large_graphic_pane_g3

0xb9ec,	// (0x0005a468) list_double_large_graphic_pane_g4_ParamLimits

0xb9ec,	// (0x0005a468) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0005e0a8) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0005e0a8) list_double_large_graphic_pane_g

0xb9fe,	// (0x0005a47a) list_double_large_graphic_pane_t1_ParamLimits

0xb9fe,	// (0x0005a47a) list_double_large_graphic_pane_t1

0xba17,	// (0x0005a493) list_double_large_graphic_pane_t2_ParamLimits

0xba17,	// (0x0005a493) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0005e0b3) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0005e0b3) list_double_large_graphic_pane_t

0xba29,	// (0x0005a4a5) list_double2_large_graphic_pane_g1_ParamLimits

0xba29,	// (0x0005a4a5) list_double2_large_graphic_pane_g1

0xba35,	// (0x0005a4b1) list_double2_large_graphic_pane_g2_ParamLimits

0xba35,	// (0x0005a4b1) list_double2_large_graphic_pane_g2

0xd180,	// (0x0005bbfc) list_double2_large_graphic_pane_g3_ParamLimits

0xd180,	// (0x0005bbfc) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0005e0b8) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0005e0b8) list_double2_large_graphic_pane_g

0xba46,	// (0x0005a4c2) list_double2_large_graphic_pane_t1_ParamLimits

0xba46,	// (0x0005a4c2) list_double2_large_graphic_pane_t1

0xba5c,	// (0x0005a4d8) list_double2_large_graphic_pane_t2_ParamLimits

0xba5c,	// (0x0005a4d8) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0005e0bf) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0005e0bf) list_double2_large_graphic_pane_t

0xba6e,	// (0x0005a4ea) list_double_heading_pane_g1_ParamLimits

0xba6e,	// (0x0005a4ea) list_double_heading_pane_g1

0xba7f,	// (0x0005a4fb) list_double_heading_pane_g2_ParamLimits

0xba7f,	// (0x0005a4fb) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0005e0c4) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0005e0c4) list_double_heading_pane_g

0xba8b,	// (0x0005a507) list_double_heading_pane_t1_ParamLimits

0xba8b,	// (0x0005a507) list_double_heading_pane_t1

0xb8dc,	// (0x0005a358) list_double_heading_pane_t2_ParamLimits

0xb8dc,	// (0x0005a358) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0005e0c9) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0005e0c9) list_double_heading_pane_t

0xbaa1,	// (0x0005a51d) list_double_graphic_heading_pane_g1_ParamLimits

0xbaa1,	// (0x0005a51d) list_double_graphic_heading_pane_g1

0xba6e,	// (0x0005a4ea) list_double_graphic_heading_pane_g2_ParamLimits

0xba6e,	// (0x0005a4ea) list_double_graphic_heading_pane_g2

0xba7f,	// (0x0005a4fb) list_double_graphic_heading_pane_g3_ParamLimits

0xba7f,	// (0x0005a4fb) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0005e0ce) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0005e0ce) list_double_graphic_heading_pane_g

0xbaad,	// (0x0005a529) list_double_graphic_heading_pane_t1_ParamLimits

0xbaad,	// (0x0005a529) list_double_graphic_heading_pane_t1

0xb9a5,	// (0x0005a421) list_double_graphic_heading_pane_t2_ParamLimits

0xb9a5,	// (0x0005a421) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0005e0d5) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0005e0d5) list_double_graphic_heading_pane_t

0xbac3,	// (0x0005a53f) list_double_time_pane_g1_ParamLimits

0xbac3,	// (0x0005a53f) list_double_time_pane_g1

0xbad4,	// (0x0005a550) list_double_time_pane_g2_ParamLimits

0xbad4,	// (0x0005a550) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0005e0da) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0005e0da) list_double_time_pane_g

0xbae0,	// (0x0005a55c) list_double_time_pane_t1_ParamLimits

0xbae0,	// (0x0005a55c) list_double_time_pane_t1

0xbaf6,	// (0x0005a572) list_double_time_pane_t2_ParamLimits

0xbaf6,	// (0x0005a572) list_double_time_pane_t2

0xbb08,	// (0x0005a584) list_double_time_pane_t3_ParamLimits

0xbb08,	// (0x0005a584) list_double_time_pane_t3

0xbb1a,	// (0x0005a596) list_double_time_pane_t4_ParamLimits

0xbb1a,	// (0x0005a596) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0005e0df) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0005e0df) list_double_time_pane_t

0xbb2c,	// (0x0005a5a8) list_setting_pane_g1_ParamLimits

0xbb2c,	// (0x0005a5a8) list_setting_pane_g1

0xb8ba,	// (0x0005a336) list_setting_pane_g2_ParamLimits

0xb8ba,	// (0x0005a336) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0005e0e8) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0005e0e8) list_setting_pane_g

0xbb38,	// (0x0005a5b4) list_setting_pane_t1_ParamLimits

0xbb38,	// (0x0005a5b4) list_setting_pane_t1

0xbb52,	// (0x0005a5ce) list_setting_pane_t2_ParamLimits

0xbb52,	// (0x0005a5ce) list_setting_pane_t2

0x0002,

0xf671,	// (0x0005e0ed) list_setting_pane_t_ParamLimits

0xf671,	// (0x0005e0ed) list_setting_pane_t

0xbb91,	// (0x0005a60d) set_value_pane_cp_ParamLimits

0xbb91,	// (0x0005a60d) set_value_pane_cp

0xbb9d,	// (0x0005a619) list_setting_number_pane_g1_ParamLimits

0xbb9d,	// (0x0005a619) list_setting_number_pane_g1

0xbba9,	// (0x0005a625) list_setting_number_pane_g2_ParamLimits

0xbba9,	// (0x0005a625) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0005e0f4) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0005e0f4) list_setting_number_pane_g

0xbbb5,	// (0x0005a631) list_setting_number_pane_t1_ParamLimits

0xbbb5,	// (0x0005a631) list_setting_number_pane_t1

0xbbce,	// (0x0005a64a) list_setting_number_pane_t2_ParamLimits

0xbbce,	// (0x0005a64a) list_setting_number_pane_t2

0xbbe8,	// (0x0005a664) list_setting_number_pane_t3_ParamLimits

0xbbe8,	// (0x0005a664) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0005e0f9) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0005e0f9) list_setting_number_pane_t

0xbb91,	// (0x0005a60d) set_value_pane_ParamLimits

0xbb91,	// (0x0005a60d) set_value_pane

0x3cca,	// (0x00052746) bg_set_opt_pane_ParamLimits

0x3cca,	// (0x00052746) bg_set_opt_pane

0x089a,	// (0x0004f316) set_value_pane_t1

0x3ceb,	// (0x00052767) slider_set_pane_cp3

0x3cf4,	// (0x00052770) volume_small_pane_cp

0x3cfd,	// (0x00052779) list_form_gen_pane

0x3d06,	// (0x00052782) scroll_pane_cp8

0xbc2b,	// (0x0005a6a7) form_field_data_pane_ParamLimits

0xbc2b,	// (0x0005a6a7) form_field_data_pane

0xbc42,	// (0x0005a6be) form_field_data_wide_pane_ParamLimits

0xbc42,	// (0x0005a6be) form_field_data_wide_pane

0xbc62,	// (0x0005a6de) form_field_popup_pane_ParamLimits

0xbc62,	// (0x0005a6de) form_field_popup_pane

0xbc7a,	// (0x0005a6f6) form_field_popup_wide_pane_ParamLimits

0xbc7a,	// (0x0005a6f6) form_field_popup_wide_pane

0x0936,	// (0x0004f3b2) form_field_slider_pane_ParamLimits

0x0936,	// (0x0004f3b2) form_field_slider_pane

0x0949,	// (0x0004f3c5) form_field_slider_wide_pane_ParamLimits

0x0949,	// (0x0004f3c5) form_field_slider_wide_pane

0x3d17,	// (0x00052793) data_form_pane

0xbc9b,	// (0x0005a717) form_field_data_pane_t1

0x3d23,	// (0x0005279f) input_focus_pane

0x097e,	// (0x0004f3fa) data_form_wide_pane

0x099b,	// (0x0004f417) form_field_data_wide_pane_t1

0x3a88,	// (0x00052504) input_focus_pane_cp6

0xbcb5,	// (0x0005a731) form_field_popup_pane_t1

0x3d23,	// (0x0005279f) input_focus_pane_cp7

0x3d45,	// (0x000527c1) list_form_pane

0x09dd,	// (0x0004f459) form_field_popup_wide_pane_t1

0x3d23,	// (0x0005279f) input_focus_pane_cp8

0x3d51,	// (0x000527cd) list_form_wide_pane

0xbcd7,	// (0x0005a753) form_field_slider_pane_t1_ParamLimits

0xbcd7,	// (0x0005a753) form_field_slider_pane_t1

0xbcef,	// (0x0005a76b) form_field_slider_pane_t2_ParamLimits

0xbcef,	// (0x0005a76b) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0005e109) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0005e109) form_field_slider_pane_t

0x3726,	// (0x000521a2) input_focus_pane_cp9_ParamLimits

0x3726,	// (0x000521a2) input_focus_pane_cp9

0xbd04,	// (0x0005a780) slider_cont_pane_ParamLimits

0xbd04,	// (0x0005a780) slider_cont_pane

0x3d60,	// (0x000527dc) form_field_slider_wide_pane_t1_ParamLimits

0x3d60,	// (0x000527dc) form_field_slider_wide_pane_t1

0x0a39,	// (0x0004f4b5) form_field_slider_wide_pane_t2_ParamLimits

0x0a39,	// (0x0004f4b5) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0005e10e) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0005e10e) form_field_slider_wide_pane_t

0x3726,	// (0x000521a2) input_focus_pane_cp10_ParamLimits

0x3726,	// (0x000521a2) input_focus_pane_cp10

0xbd18,	// (0x0005a794) slider_cont_pane_cp1_ParamLimits

0xbd18,	// (0x0005a794) slider_cont_pane_cp1

0xbd2c,	// (0x0005a7a8) slider_form_pane_cp

0x3d72,	// (0x000527ee) input_focus_pane_g1

0x3d7a,	// (0x000527f6) input_focus_pane_g2

0x3d82,	// (0x000527fe) input_focus_pane_g3

0x3d8a,	// (0x00052806) input_focus_pane_g4

0x3d92,	// (0x0005280e) input_focus_pane_g5

0x3d9a,	// (0x00052816) input_focus_pane_g6

0x3da2,	// (0x0005281e) input_focus_pane_g7

0x3daa,	// (0x00052826) input_focus_pane_g8

0x3db2,	// (0x0005282e) input_focus_pane_g9

0x33c1,	// (0x00051e3d) input_focus_pane_g10

0x0009,

0xf697,	// (0x0005e113) input_focus_pane_g

0x5803,	// (0x0005427f) wait_border_pane_g3_copy1

0xbd34,	// (0x0005a7b0) data_form_pane_t1

0x33c1,	// (0x00051e3d) wait_anim_pane_g1_copy1

0xc703,	// (0x0005b17f) data_form_wide_pane_t1

0xbd4d,	// (0x0005a7c9) list_form_graphic_pane_cp_ParamLimits

0xbd4d,	// (0x0005a7c9) list_form_graphic_pane_cp

0x6720,	// (0x0005519c) slider_form_pane_g1

0x6729,	// (0x000551a5) slider_form_pane_g2

0x0006,

0xf995,	// (0x0005e411) slider_form_pane_g

0xbd5e,	// (0x0005a7da) list_form_graphic_pane_ParamLimits

0xbd5e,	// (0x0005a7da) list_form_graphic_pane

0x0ab7,	// (0x0004f533) list_form_graphic_pane_g1

0x0abf,	// (0x0004f53b) list_form_graphic_pane_t1_ParamLimits

0x0abf,	// (0x0004f53b) list_form_graphic_pane_t1

0x34ab,	// (0x00051f27) list_highlight_pane_cp5_ParamLimits

0x34ab,	// (0x00051f27) list_highlight_pane_cp5

0xbd70,	// (0x0005a7ec) find_pane_g1

0x3dba,	// (0x00052836) input_find_pane

0xbd79,	// (0x0005a7f5) input_find_pane_g1_ParamLimits

0xbd79,	// (0x0005a7f5) input_find_pane_g1

0xbd85,	// (0x0005a801) input_find_pane_t1_ParamLimits

0xbd85,	// (0x0005a801) input_find_pane_t1

0xbd9a,	// (0x0005a816) input_find_pane_t2_ParamLimits

0xbd9a,	// (0x0005a816) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0005e128) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0005e128) input_find_pane_t

0x3dc3,	// (0x0005283f) input_focus_pane_cp5_ParamLimits

0x3dc3,	// (0x0005283f) input_focus_pane_cp5

0x3ddd,	// (0x00052859) bg_popup_window_pane_cp2_ParamLimits

0x3ddd,	// (0x00052859) bg_popup_window_pane_cp2

0x3dea,	// (0x00052866) listscroll_menu_pane_ParamLimits

0x3dea,	// (0x00052866) listscroll_menu_pane

0xd198,	// (0x0005bc14) popup_submenu_window_ParamLimits

0xd198,	// (0x0005bc14) popup_submenu_window

0x3e22,	// (0x0005289e) find_popup_pane_g1

0x3e2a,	// (0x000528a6) input_popup_find_pane_cp

0x3dc3,	// (0x0005283f) input_focus_pane_cp4_ParamLimits

0x3dc3,	// (0x0005283f) input_focus_pane_cp4

0x3e40,	// (0x000528bc) input_popup_find_pane_t1_ParamLimits

0x3e40,	// (0x000528bc) input_popup_find_pane_t1

0x33cb,	// (0x00051e47) bg_popup_sub_pane_cp

0x3e6e,	// (0x000528ea) listscroll_popup_sub_pane

0x3e76,	// (0x000528f2) list_submenu_pane_ParamLimits

0x3e76,	// (0x000528f2) list_submenu_pane

0x3e87,	// (0x00052903) scroll_pane_cp4

0x3e8f,	// (0x0005290b) list_single_popup_submenu_pane_ParamLimits

0x3e8f,	// (0x0005290b) list_single_popup_submenu_pane

0x3ea3,	// (0x0005291f) list_single_popup_submenu_pane_g1

0x3eab,	// (0x00052927) list_single_popup_submenu_pane_t1_ParamLimits

0x3eab,	// (0x00052927) list_single_popup_submenu_pane_t1

0x3726,	// (0x000521a2) bg_active_tab_pane_cp1_ParamLimits

0x3726,	// (0x000521a2) bg_active_tab_pane_cp1

0x3ec0,	// (0x0005293c) tabs_2_active_pane_g1

0xd1d2,	// (0x0005bc4e) tabs_2_active_pane_t1

0x3726,	// (0x000521a2) bg_passive_tab_pane_cp1_ParamLimits

0x3726,	// (0x000521a2) bg_passive_tab_pane_cp1

0x3ec0,	// (0x0005293c) tabs_2_passive_pane_g1

0xd1d2,	// (0x0005bc4e) tabs_2_passive_pane_t1

0x34ab,	// (0x00051f27) bg_active_tab_pane_cp4

0xd1e4,	// (0x0005bc60) tabs_2_long_active_pane_t1

0x4cde,	// (0x0005375a) bg_passive_tab_pane_cp4

0x17b8,	// (0x00050234) list_single_midp_graphic_pane_g4_ParamLimits

0x34ab,	// (0x00051f27) bg_active_tab_pane_cp5

0xd1f7,	// (0x0005bc73) tabs_3_long_active_pane_t1

0x4cde,	// (0x0005375a) bg_passive_tab_pane_cp5

0x17b8,	// (0x00050234) list_single_midp_graphic_pane_g4

0x34ab,	// (0x00051f27) bg_popup_window_pane_cp13_ParamLimits

0x34ab,	// (0x00051f27) bg_popup_window_pane_cp13

0x3f22,	// (0x0005299e) listscroll_popup_fast_pane_ParamLimits

0x3f22,	// (0x0005299e) listscroll_popup_fast_pane

0x3f31,	// (0x000529ad) grid_popup_fast_pane_ParamLimits

0x3f31,	// (0x000529ad) grid_popup_fast_pane

0x3f43,	// (0x000529bf) scroll_pane_cp9_ParamLimits

0x3f43,	// (0x000529bf) scroll_pane_cp9

0x8023,	// (0x00056a9f) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8023,	// (0x00056a9f) list_single_graphic_hl_pane_t1_cp2

0x3f67,	// (0x000529e3) input_focus_pane_cp20_ParamLimits

0x3f67,	// (0x000529e3) input_focus_pane_cp20

0x3f75,	// (0x000529f1) query_popup_data_pane_t1_ParamLimits

0x3f75,	// (0x000529f1) query_popup_data_pane_t1

0x3f88,	// (0x00052a04) query_popup_data_pane_t2_ParamLimits

0x3f88,	// (0x00052a04) query_popup_data_pane_t2

0x3fce,	// (0x00052a4a) query_popup_data_pane_t3_ParamLimits

0x3fce,	// (0x00052a4a) query_popup_data_pane_t3

0x400f,	// (0x00052a8b) query_popup_data_pane_t4_ParamLimits

0x400f,	// (0x00052a8b) query_popup_data_pane_t4

0x404b,	// (0x00052ac7) query_popup_data_pane_t5_ParamLimits

0x404b,	// (0x00052ac7) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0005e12d) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0005e12d) query_popup_data_pane_t

0x3d72,	// (0x000527ee) bg_set_opt_pane_g1

0x3d7a,	// (0x000527f6) bg_set_opt_pane_g2

0x3d82,	// (0x000527fe) bg_set_opt_pane_g3

0x3d8a,	// (0x00052806) bg_set_opt_pane_g4

0x3d92,	// (0x0005280e) bg_set_opt_pane_g5

0x3d9a,	// (0x00052816) bg_set_opt_pane_g6

0x3da2,	// (0x0005281e) bg_set_opt_pane_g7

0x3daa,	// (0x00052826) bg_set_opt_pane_g8

0x3db2,	// (0x0005282e) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0005e138) bg_set_opt_pane_g

0x0e1e,	// (0x0004f89a) control_top_pane_stacon_ParamLimits

0x0e1e,	// (0x0004f89a) control_top_pane_stacon

0x0e71,	// (0x0004f8ed) signal_pane_stacon_ParamLimits

0x0e71,	// (0x0004f8ed) signal_pane_stacon

0x4637,	// (0x000530b3) stacon_top_pane_g1_ParamLimits

0x4637,	// (0x000530b3) stacon_top_pane_g1

0x0e96,	// (0x0004f912) title_pane_stacon_ParamLimits

0x0e96,	// (0x0004f912) title_pane_stacon

0x0ec0,	// (0x0004f93c) uni_indicator_pane_stacon_ParamLimits

0x0ec0,	// (0x0004f93c) uni_indicator_pane_stacon

0x0ed5,	// (0x0004f951) battery_pane_stacon_ParamLimits

0x0ed5,	// (0x0004f951) battery_pane_stacon

0x0f19,	// (0x0004f995) control_bottom_pane_stacon_ParamLimits

0x0f19,	// (0x0004f995) control_bottom_pane_stacon

0x0f3c,	// (0x0004f9b8) navi_pane_stacon_ParamLimits

0x0f3c,	// (0x0004f9b8) navi_pane_stacon

0x4659,	// (0x000530d5) stacon_bottom_pane_g1_ParamLimits

0x4659,	// (0x000530d5) stacon_bottom_pane_g1

0x0b13,	// (0x0004f58f) aid_levels_signal_lsc_ParamLimits

0x0b13,	// (0x0004f58f) aid_levels_signal_lsc

0x0b29,	// (0x0004f5a5) signal_pane_stacon_g1_ParamLimits

0x0b29,	// (0x0004f5a5) signal_pane_stacon_g1

0x0b3d,	// (0x0004f5b9) signal_pane_stacon_g2_ParamLimits

0x0b3d,	// (0x0004f5b9) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0005e14b) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0005e14b) signal_pane_stacon_g

0x0b72,	// (0x0004f5ee) title_pane_stacon_t1_ParamLimits

0x0b72,	// (0x0004f5ee) title_pane_stacon_t1

0x408f,	// (0x00052b0b) uni_indicator_pane_stacon_g1

0x4099,	// (0x00052b15) uni_indicator_pane_stacon_g2

0x40a3,	// (0x00052b1f) uni_indicator_pane_stacon_g3

0x40ad,	// (0x00052b29) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0005e157) uni_indicator_pane_stacon_g

0x0b97,	// (0x0004f613) control_top_pane_stacon_g1

0x0b9f,	// (0x0004f61b) control_top_pane_stacon_t1_ParamLimits

0x0b9f,	// (0x0004f61b) control_top_pane_stacon_t1

0x0bd6,	// (0x0004f652) aid_levels_battery_lsc_ParamLimits

0x0bd6,	// (0x0004f652) aid_levels_battery_lsc

0x0bed,	// (0x0004f669) battery_pane_stacon_g1_ParamLimits

0x0bed,	// (0x0004f669) battery_pane_stacon_g1

0x0c00,	// (0x0004f67c) battery_pane_stacon_g2_ParamLimits

0x0c00,	// (0x0004f67c) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0005e160) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0005e160) battery_pane_stacon_g

0x0c3e,	// (0x0004f6ba) navi_icon_pane_stacon

0x0c52,	// (0x0004f6ce) navi_navi_pane_stacon

0x0c3e,	// (0x0004f6ba) navi_text_pane_stacon

0x0b97,	// (0x0004f613) control_bottom_pane_stacon_g1

0x0c66,	// (0x0004f6e2) control_bottom_pane_stacon_t1_ParamLimits

0x0c66,	// (0x0004f6e2) control_bottom_pane_stacon_t1

0xd209,	// (0x0005bc85) grid_app_pane_ParamLimits

0xd209,	// (0x0005bc85) grid_app_pane

0xd241,	// (0x0005bcbd) scroll_pane_cp15_ParamLimits

0xd241,	// (0x0005bcbd) scroll_pane_cp15

0xd256,	// (0x0005bcd2) cell_app_pane_ParamLimits

0xd256,	// (0x0005bcd2) cell_app_pane

0xd29b,	// (0x0005bd17) cell_app_pane_g1_ParamLimits

0xd29b,	// (0x0005bd17) cell_app_pane_g1

0x414c,	// (0x00052bc8) cell_app_pane_g2_ParamLimits

0x414c,	// (0x00052bc8) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0005e165) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0005e165) cell_app_pane_g

0xd2bb,	// (0x0005bd37) cell_app_pane_t1_ParamLimits

0xd2bb,	// (0x0005bd37) cell_app_pane_t1

0x416f,	// (0x00052beb) grid_highlight_pane_ParamLimits

0x416f,	// (0x00052beb) grid_highlight_pane

0x3d72,	// (0x000527ee) cell_highlight_pane_g1

0x3d7a,	// (0x000527f6) cell_highlight_pane_g2

0x3d82,	// (0x000527fe) cell_highlight_pane_g3

0x3d8a,	// (0x00052806) cell_highlight_pane_g4

0x3d92,	// (0x0005280e) cell_highlight_pane_g5

0x3d9a,	// (0x00052816) cell_highlight_pane_g6

0x3da2,	// (0x0005281e) cell_highlight_pane_g7

0x3daa,	// (0x00052826) cell_highlight_pane_g8

0x3db2,	// (0x0005282e) cell_highlight_pane_g9

0x33c1,	// (0x00051e3d) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0005e113) cell_highlight_pane_g

0x4180,	// (0x00052bfc) bg_scroll_pane

0x0cb0,	// (0x0004f72c) scroll_handle_pane

0x41c7,	// (0x00052c43) scroll_bg_pane_g1

0x41dc,	// (0x00052c58) scroll_bg_pane_g2

0x41f4,	// (0x00052c70) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0005e16a) scroll_bg_pane_g

0x4209,	// (0x00052c85) scroll_handle_focus_pane_ParamLimits

0x4209,	// (0x00052c85) scroll_handle_focus_pane

0x41c7,	// (0x00052c43) scroll_handle_pane_g1

0x4216,	// (0x00052c92) scroll_handle_pane_g2

0x41f4,	// (0x00052c70) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0005e171) scroll_handle_pane_g

0x3dc3,	// (0x0005283f) bg_popup_sub_pane_cp21_ParamLimits

0x3dc3,	// (0x0005283f) bg_popup_sub_pane_cp21

0x422a,	// (0x00052ca6) popup_fep_japan_predictive_window_t1_ParamLimits

0x422a,	// (0x00052ca6) popup_fep_japan_predictive_window_t1

0x4244,	// (0x00052cc0) popup_fep_japan_predictive_window_t2_ParamLimits

0x4244,	// (0x00052cc0) popup_fep_japan_predictive_window_t2

0x4277,	// (0x00052cf3) popup_fep_japan_predictive_window_t3_ParamLimits

0x4277,	// (0x00052cf3) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0005e178) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0005e178) popup_fep_japan_predictive_window_t

0x33cb,	// (0x00051e47) bg_popup_sub_pane_cp23

0x42ae,	// (0x00052d2a) listscroll_japin_cand_pane

0x42b6,	// (0x00052d32) popup_fep_japan_candidate_window_t1

0x42c4,	// (0x00052d40) candidate_pane_ParamLimits

0x42c4,	// (0x00052d40) candidate_pane

0x42d6,	// (0x00052d52) scroll_pane_cp30

0x42de,	// (0x00052d5a) list_single_popup_jap_candidate_pane_ParamLimits

0x42de,	// (0x00052d5a) list_single_popup_jap_candidate_pane

0x33cb,	// (0x00051e47) list_highlight_pane_cp30

0x42f3,	// (0x00052d6f) list_single_popup_jap_candidate_pane_t1

0x4302,	// (0x00052d7e) level_1_signal

0x4314,	// (0x00052d90) level_2_signal

0x4327,	// (0x00052da3) level_3_signal

0x433a,	// (0x00052db6) level_4_signal

0x434d,	// (0x00052dc9) level_5_signal

0x4360,	// (0x00052ddc) level_6_signal

0x4373,	// (0x00052def) level_7_signal

0x4302,	// (0x00052d7e) level_1_battery

0x4314,	// (0x00052d90) level_2_battery

0x4327,	// (0x00052da3) level_3_battery

0x433a,	// (0x00052db6) level_4_battery

0x434d,	// (0x00052dc9) level_5_battery

0x4360,	// (0x00052ddc) level_6_battery

0x4373,	// (0x00052def) level_7_battery

0x439e,	// (0x00052e1a) list_menu_pane_ParamLimits

0x439e,	// (0x00052e1a) list_menu_pane

0x43b4,	// (0x00052e30) scroll_pane_cp25_ParamLimits

0x43b4,	// (0x00052e30) scroll_pane_cp25

0x43cd,	// (0x00052e49) list_double2_graphic_pane_cp2_ParamLimits

0x43cd,	// (0x00052e49) list_double2_graphic_pane_cp2

0x43cd,	// (0x00052e49) list_double2_large_graphic_pane_cp2_ParamLimits

0x43cd,	// (0x00052e49) list_double2_large_graphic_pane_cp2

0x43cd,	// (0x00052e49) list_double2_pane_cp2_ParamLimits

0x43cd,	// (0x00052e49) list_double2_pane_cp2

0x43cd,	// (0x00052e49) list_double_graphic_pane_cp2_ParamLimits

0x43cd,	// (0x00052e49) list_double_graphic_pane_cp2

0x43cd,	// (0x00052e49) list_double_large_graphic_pane_cp2_ParamLimits

0x43cd,	// (0x00052e49) list_double_large_graphic_pane_cp2

0x43cd,	// (0x00052e49) list_double_number_pane_cp2_ParamLimits

0x43cd,	// (0x00052e49) list_double_number_pane_cp2

0x43cd,	// (0x00052e49) list_double_pane_cp2_ParamLimits

0x43cd,	// (0x00052e49) list_double_pane_cp2

0xd2d2,	// (0x0005bd4e) list_single_2graphic_pane_cp2_ParamLimits

0xd2d2,	// (0x0005bd4e) list_single_2graphic_pane_cp2

0xd2d2,	// (0x0005bd4e) list_single_graphic_heading_pane_cp2_ParamLimits

0xd2d2,	// (0x0005bd4e) list_single_graphic_heading_pane_cp2

0xd2d2,	// (0x0005bd4e) list_single_graphic_pane_cp2_ParamLimits

0xd2d2,	// (0x0005bd4e) list_single_graphic_pane_cp2

0xd2d2,	// (0x0005bd4e) list_single_heading_pane_cp2_ParamLimits

0xd2d2,	// (0x0005bd4e) list_single_heading_pane_cp2

0x440a,	// (0x00052e86) list_single_large_graphic_pane_cp2_ParamLimits

0x440a,	// (0x00052e86) list_single_large_graphic_pane_cp2

0xd2d2,	// (0x0005bd4e) list_single_number_heading_pane_cp2_ParamLimits

0xd2d2,	// (0x0005bd4e) list_single_number_heading_pane_cp2

0xd2d2,	// (0x0005bd4e) list_single_number_pane_cp2_ParamLimits

0xd2d2,	// (0x0005bd4e) list_single_number_pane_cp2

0xd2d2,	// (0x0005bd4e) list_single_pane_cp2_ParamLimits

0xd2d2,	// (0x0005bd4e) list_single_pane_cp2

0x4486,	// (0x00052f02) bg_popup_sub_pane_cp22

0x0d62,	// (0x0004f7de) popup_side_volume_key_window_g1

0x0d8c,	// (0x0004f808) popup_side_volume_key_window_t1

0x0da8,	// (0x0004f824) volume_small_pane_cp1

0x3726,	// (0x000521a2) bg_popup_sub_pane_cp24_ParamLimits

0x3726,	// (0x000521a2) bg_popup_sub_pane_cp24

0x449c,	// (0x00052f18) fep_china_uni_candidate_pane_ParamLimits

0x449c,	// (0x00052f18) fep_china_uni_candidate_pane

0x44b0,	// (0x00052f2c) fep_china_uni_entry_pane

0x44c0,	// (0x00052f3c) popup_fep_china_uni_window_g1

0x44dc,	// (0x00052f58) fep_china_uni_entry_pane_g1

0x44e4,	// (0x00052f60) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0005e1a9) fep_china_uni_entry_pane_g

0x44ec,	// (0x00052f68) fep_entry_item_pane

0x44f6,	// (0x00052f72) fep_candidate_item_pane

0x44fe,	// (0x00052f7a) fep_china_uni_candidate_pane_g1

0x4506,	// (0x00052f82) fep_china_uni_candidate_pane_g2

0x450e,	// (0x00052f8a) fep_china_uni_candidate_pane_g3

0x4516,	// (0x00052f92) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0005e1ae) fep_china_uni_candidate_pane_g

0x33c1,	// (0x00051e3d) fep_entry_item_pane_g1

0x451e,	// (0x00052f9a) fep_entry_item_pane_t1_ParamLimits

0x451e,	// (0x00052f9a) fep_entry_item_pane_t1

0x4534,	// (0x00052fb0) fep_candidate_item_pane_t1_ParamLimits

0x4534,	// (0x00052fb0) fep_candidate_item_pane_t1

0x4549,	// (0x00052fc5) fep_candidate_item_pane_t2_ParamLimits

0x4549,	// (0x00052fc5) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0005e1b7) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0005e1b7) fep_candidate_item_pane_t

0x34ab,	// (0x00051f27) list_highlight_pane_cp31_ParamLimits

0x34ab,	// (0x00051f27) list_highlight_pane_cp31

0x455b,	// (0x00052fd7) level_1_signal_lsc

0x4564,	// (0x00052fe0) level_2_signal_lsc

0x456d,	// (0x00052fe9) level_3_signal_lsc

0x4576,	// (0x00052ff2) level_4_signal_lsc

0x457f,	// (0x00052ffb) level_5_signal_lsc

0x4588,	// (0x00053004) level_6_signal_lsc

0x4591,	// (0x0005300d) level_7_signal_lsc

0x4591,	// (0x0005300d) level_1_battery_lsc

0x459a,	// (0x00053016) level_2_battery_lsc

0x45a3,	// (0x0005301f) level_3_battery_lsc

0x45ac,	// (0x00053028) level_4_battery_lsc

0x45b5,	// (0x00053031) level_5_battery_lsc

0x45be,	// (0x0005303a) level_6_battery_lsc

0x455b,	// (0x00052fd7) level_7_battery_lsc

0x45c7,	// (0x00053043) scroll_handle_focus_pane_g1

0x45d0,	// (0x0005304c) scroll_handle_focus_pane_g2

0x45d9,	// (0x00053055) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0005e1bc) scroll_handle_focus_pane_g

0xbdb8,	// (0x0005a834) list_single_2graphic_pane_g1_ParamLimits

0xbdb8,	// (0x0005a834) list_single_2graphic_pane_g1

0xd157,	// (0x0005bbd3) list_single_2graphic_pane_g2_ParamLimits

0xd157,	// (0x0005bbd3) list_single_2graphic_pane_g2

0x2b00,	// (0x0005157c) list_single_2graphic_pane_g3_ParamLimits

0x2b00,	// (0x0005157c) list_single_2graphic_pane_g3

0xbdc4,	// (0x0005a840) list_single_2graphic_pane_g4_ParamLimits

0xbdc4,	// (0x0005a840) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0005e1c3) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0005e1c3) list_single_2graphic_pane_g

0xbdd0,	// (0x0005a84c) list_single_2graphic_pane_t1_ParamLimits

0xbdd0,	// (0x0005a84c) list_single_2graphic_pane_t1

0xd35f,	// (0x0005bddb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd35f,	// (0x0005bddb) list_double2_graphic_large_graphic_pane_g1

0xba35,	// (0x0005a4b1) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xba35,	// (0x0005a4b1) list_double2_graphic_large_graphic_pane_g2

0xd180,	// (0x0005bbfc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd180,	// (0x0005bbfc) list_double2_graphic_large_graphic_pane_g3

0xbdfe,	// (0x0005a87a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbdfe,	// (0x0005a87a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0005e1cc) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0005e1cc) list_double2_graphic_large_graphic_pane_g

0xbe0a,	// (0x0005a886) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbe0a,	// (0x0005a886) list_double2_graphic_large_graphic_pane_t1

0xbe20,	// (0x0005a89c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbe20,	// (0x0005a89c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0005e1d5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0005e1d5) list_double2_graphic_large_graphic_pane_t

0x4721,	// (0x0005319d) popup_fast_swap_window_ParamLimits

0x4721,	// (0x0005319d) popup_fast_swap_window

0x473d,	// (0x000531b9) popup_side_volume_key_window

0x4759,	// (0x000531d5) stacon_top_pane

0x4763,	// (0x000531df) status_pane_ParamLimits

0x4763,	// (0x000531df) status_pane

0x4759,	// (0x000531d5) status_small_pane

0x33cb,	// (0x00051e47) control_pane

0x33cb,	// (0x00051e47) stacon_bottom_pane

0x3d06,	// (0x00052782) scroll_pane_cp121

0x3cfd,	// (0x00052779) set_content_pane

0x45e2,	// (0x0005305e) bg_active_tab_pane_g1_cp1

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp1

0x45f4,	// (0x00053070) bg_active_tab_pane_g3_cp1

0x45e2,	// (0x0005305e) bg_passive_tab_pane_g1_cp1

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp1

0x45f4,	// (0x00053070) bg_passive_tab_pane_g3_cp1

0x45fd,	// (0x00053079) bg_active_tab_pane_g1_cp2

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp2

0x4606,	// (0x00053082) bg_active_tab_pane_g3_cp2

0x45fd,	// (0x00053079) bg_passive_tab_pane_g1_cp2

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp2

0x4606,	// (0x00053082) bg_passive_tab_pane_g3_cp2

0x460f,	// (0x0005308b) bg_active_tab_pane_g1_cp3

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp3

0x4618,	// (0x00053094) bg_active_tab_pane_g3_cp3

0x460f,	// (0x0005308b) bg_passive_tab_pane_g1_cp3

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp3

0x4618,	// (0x00053094) bg_passive_tab_pane_g3_cp3

0x4621,	// (0x0005309d) bg_active_tab_pane_g1_cp4

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp4

0x462c,	// (0x000530a8) bg_active_tab_pane_g3_cp4

0x4621,	// (0x0005309d) bg_passive_tab_pane_g1_cp4

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp4

0x462c,	// (0x000530a8) bg_passive_tab_pane_g3_cp4

0x4675,	// (0x000530f1) bg_active_tab_pane_g1_cp5

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp5

0x467e,	// (0x000530fa) bg_active_tab_pane_g3_cp5

0x4675,	// (0x000530f1) bg_passive_tab_pane_g1_cp5

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp5

0x467e,	// (0x000530fa) bg_passive_tab_pane_g3_cp5

0x6cfe,	// (0x0005577a) list_set_graphic_pane_ParamLimits

0x6cfe,	// (0x0005577a) list_set_graphic_pane

0x33cb,	// (0x00051e47) bg_set_opt_pane_cp4

0xd371,	// (0x0005bded) list_set_graphic_pane_g1_ParamLimits

0xd371,	// (0x0005bded) list_set_graphic_pane_g1

0xd37d,	// (0x0005bdf9) list_set_graphic_pane_g2_ParamLimits

0xd37d,	// (0x0005bdf9) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0005e1da) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0005e1da) list_set_graphic_pane_g

0x0009,

0xfac5,	// (0x0005e541) volume_small_pane_cp_g

0x46d4,	// (0x00053150) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x46d4,	// (0x00053150) list_double2_large_graphic_pane_g1_cp2

0x46e0,	// (0x0005315c) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x46e0,	// (0x0005315c) list_double2_large_graphic_pane_g2_cp2

0x46f1,	// (0x0005316d) list_double2_large_graphic_pane_g3_cp2

0x46f9,	// (0x00053175) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x46f9,	// (0x00053175) list_double2_large_graphic_pane_t1_cp2

0x470f,	// (0x0005318b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x470f,	// (0x0005318b) list_double2_large_graphic_pane_t2_cp2

0x62d6,	// (0x00054d52) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x62d6,	// (0x00054d52) list_double_large_graphic_pane_g1_cp2

0x62e7,	// (0x00054d63) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x62e7,	// (0x00054d63) list_double_large_graphic_pane_g2_cp2

0x487f,	// (0x000532fb) list_double_large_graphic_pane_g3_cp2

0x62f8,	// (0x00054d74) list_double_large_graphic_pane_g4_cp

0x6300,	// (0x00054d7c) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x6300,	// (0x00054d7c) list_double_large_graphic_pane_t1_cp2

0x6317,	// (0x00054d93) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x6317,	// (0x00054d93) list_double_large_graphic_pane_t2_cp2

0x4771,	// (0x000531ed) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4771,	// (0x000531ed) list_double2_graphic_pane_g1_cp2

0x477f,	// (0x000531fb) list_double2_graphic_pane_g2_cp2_ParamLimits

0x477f,	// (0x000531fb) list_double2_graphic_pane_g2_cp2

0x4790,	// (0x0005320c) list_double2_graphic_pane_g3_cp2

0x479a,	// (0x00053216) list_double2_graphic_pane_t1_cp2_ParamLimits

0x479a,	// (0x00053216) list_double2_graphic_pane_t1_cp2

0x47b0,	// (0x0005322c) list_double2_graphic_pane_t2_cp2_ParamLimits

0x47b0,	// (0x0005322c) list_double2_graphic_pane_t2_cp2

0x47c2,	// (0x0005323e) list_single_number_heading_pane_g1_cp2_ParamLimits

0x47c2,	// (0x0005323e) list_single_number_heading_pane_g1_cp2

0x47ce,	// (0x0005324a) list_single_number_heading_pane_g2_cp2

0x47d6,	// (0x00053252) list_single_number_heading_pane_t1_cp2_ParamLimits

0x47d6,	// (0x00053252) list_single_number_heading_pane_t1_cp2

0x47ec,	// (0x00053268) list_single_number_heading_pane_t2_cp2_ParamLimits

0x47ec,	// (0x00053268) list_single_number_heading_pane_t2_cp2

0x47fe,	// (0x0005327a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x47fe,	// (0x0005327a) list_single_number_heading_pane_t3_cp2

0x47c2,	// (0x0005323e) list_single_heading_pane_g1_cp2_ParamLimits

0x47c2,	// (0x0005323e) list_single_heading_pane_g1_cp2

0x47ce,	// (0x0005324a) list_single_heading_pane_g2_cp2

0x47d6,	// (0x00053252) list_single_heading_pane_t1_cp2_ParamLimits

0x47d6,	// (0x00053252) list_single_heading_pane_t1_cp2

0x60de,	// (0x00054b5a) list_single_heading_pane_t2_cp2_ParamLimits

0x60de,	// (0x00054b5a) list_single_heading_pane_t2_cp2

0x6026,	// (0x00054aa2) list_double_graphic_pane_g1_cp2_ParamLimits

0x6026,	// (0x00054aa2) list_double_graphic_pane_g1_cp2

0x6032,	// (0x00054aae) list_double_graphic_pane_g2_cp2_ParamLimits

0x6032,	// (0x00054aae) list_double_graphic_pane_g2_cp2

0x6041,	// (0x00054abd) list_double_graphic_pane_g3_cp2

0x6049,	// (0x00054ac5) list_double_graphic_pane_t1_cp2_ParamLimits

0x6049,	// (0x00054ac5) list_double_graphic_pane_t1_cp2

0x605f,	// (0x00054adb) list_double_graphic_pane_t2_cp2_ParamLimits

0x605f,	// (0x00054adb) list_double_graphic_pane_t2_cp2

0x4873,	// (0x000532ef) list_double_number_pane_g1_cp2_ParamLimits

0x4873,	// (0x000532ef) list_double_number_pane_g1_cp2

0x487f,	// (0x000532fb) list_double_number_pane_g2_cp2

0x5fea,	// (0x00054a66) list_double_number_pane_t1_cp2_ParamLimits

0x5fea,	// (0x00054a66) list_double_number_pane_t1_cp2

0x5ffe,	// (0x00054a7a) list_double_number_pane_t2_cp2_ParamLimits

0x5ffe,	// (0x00054a7a) list_double_number_pane_t2_cp2

0x6014,	// (0x00054a90) list_double_number_pane_t3_cp2_ParamLimits

0x6014,	// (0x00054a90) list_double_number_pane_t3_cp2

0x5ed3,	// (0x0005494f) list_single_graphic_pane_g1_cp2_ParamLimits

0x5ed3,	// (0x0005494f) list_single_graphic_pane_g1_cp2

0x48d7,	// (0x00053353) list_single_graphic_pane_g2_cp2_ParamLimits

0x48d7,	// (0x00053353) list_single_graphic_pane_g2_cp2

0x48e3,	// (0x0005335f) list_single_graphic_pane_g3_cp2

0x5ea9,	// (0x00054925) list_single_graphic_pane_t1_cp2_ParamLimits

0x5ea9,	// (0x00054925) list_single_graphic_pane_t1_cp2

0x48d7,	// (0x00053353) list_single_number_pane_g1_cp2_ParamLimits

0x48d7,	// (0x00053353) list_single_number_pane_g1_cp2

0x48e3,	// (0x0005335f) list_single_number_pane_g2_cp2

0x5ea9,	// (0x00054925) list_single_number_pane_t1_cp2_ParamLimits

0x5ea9,	// (0x00054925) list_single_number_pane_t1_cp2

0x5ebf,	// (0x0005493b) list_single_number_pane_t2_cp2_ParamLimits

0x5ebf,	// (0x0005493b) list_single_number_pane_t2_cp2

0x46e0,	// (0x0005315c) list_double2_pane_g1_cp2_ParamLimits

0x46e0,	// (0x0005315c) list_double2_pane_g1_cp2

0x46f1,	// (0x0005316d) list_double2_pane_g2_cp2

0x484b,	// (0x000532c7) list_double2_pane_t1_cp2_ParamLimits

0x484b,	// (0x000532c7) list_double2_pane_t1_cp2

0x4861,	// (0x000532dd) list_double2_pane_t2_cp2_ParamLimits

0x4861,	// (0x000532dd) list_double2_pane_t2_cp2

0x4873,	// (0x000532ef) list_double_pane_g1_cp2_ParamLimits

0x4873,	// (0x000532ef) list_double_pane_g1_cp2

0x487f,	// (0x000532fb) list_double_pane_g2_cp2

0x4887,	// (0x00053303) list_double_pane_t1_cp2_ParamLimits

0x4887,	// (0x00053303) list_double_pane_t1_cp2

0x489d,	// (0x00053319) list_double_pane_t2_cp2_ParamLimits

0x489d,	// (0x00053319) list_double_pane_t2_cp2

0x48c7,	// (0x00053343) list_single_pane_cp2_g3

0x48d7,	// (0x00053353) list_single_pane_g1_cp2_ParamLimits

0x48d7,	// (0x00053353) list_single_pane_g1_cp2

0x48e3,	// (0x0005335f) list_single_pane_g2_cp2

0x48eb,	// (0x00053367) list_single_pane_t1_cp2_ParamLimits

0x48eb,	// (0x00053367) list_single_pane_t1_cp2

0x4903,	// (0x0005337f) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x4903,	// (0x0005337f) list_single_large_graphic_pane_g1_cp2

0x490f,	// (0x0005338b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x490f,	// (0x0005338b) list_single_large_graphic_pane_g2_cp2

0x491b,	// (0x00053397) list_single_large_graphic_pane_g3_cp2

0x4923,	// (0x0005339f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4923,	// (0x0005339f) list_single_large_graphic_pane_g4_cp1

0x493d,	// (0x000533b9) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x493d,	// (0x000533b9) list_single_large_graphic_pane_t1_cp2

0x5e75,	// (0x000548f1) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x5e75,	// (0x000548f1) list_single_graphic_heading_pane_g1_cp2

0x5e42,	// (0x000548be) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x5e42,	// (0x000548be) list_single_graphic_heading_pane_g4_cp2

0x48e3,	// (0x0005335f) list_single_graphic_heading_pane_g5_cp2

0x5e81,	// (0x000548fd) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x5e81,	// (0x000548fd) list_single_graphic_heading_pane_t1_cp2

0x5e97,	// (0x00054913) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5e97,	// (0x00054913) list_single_graphic_heading_pane_t2_cp2

0x5e36,	// (0x000548b2) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5e36,	// (0x000548b2) list_single_2graphic_pane_g1_cp2

0x5e42,	// (0x000548be) list_single_2graphic_pane_g2_cp2_ParamLimits

0x5e42,	// (0x000548be) list_single_2graphic_pane_g2_cp2

0x48e3,	// (0x0005335f) list_single_2graphic_pane_g3_cp2

0x5e53,	// (0x000548cf) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5e53,	// (0x000548cf) list_single_2graphic_pane_g4_cp2

0x5e5f,	// (0x000548db) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5e5f,	// (0x000548db) list_single_2graphic_pane_t1_cp2

0x33c1,	// (0x00051e3d) list_highlight_pane_g10_cp1

0x5a0e,	// (0x0005448a) list_highlight_pane_g1_cp1

0x5a16,	// (0x00054492) list_highlight_pane_g2_cp1

0x5a1e,	// (0x0005449a) list_highlight_pane_g3_cp1

0x5a26,	// (0x000544a2) list_highlight_pane_g4_cp1

0x5a2e,	// (0x000544aa) list_highlight_pane_g5_cp1

0x5a36,	// (0x000544b2) list_highlight_pane_g6_cp1

0x5a3e,	// (0x000544ba) list_highlight_pane_g7_cp1

0x5a46,	// (0x000544c2) list_highlight_pane_g8_cp1

0x5a4e,	// (0x000544ca) list_highlight_pane_g9_cp1

0xd9c9,	// (0x0005c445) form_field_slider_pane_t3

0xd9d7,	// (0x0005c453) form_field_slider_pane_t4

0x594a,	// (0x000543c6) slider_form_pane_ParamLimits

0x594a,	// (0x000543c6) slider_form_pane

0x33cb,	// (0x00051e47) control_abbreviations

0x33cb,	// (0x00051e47) control_conventions

0x33cb,	// (0x00051e47) control_definitions

0x33cb,	// (0x00051e47) format_table_attribute

0x6128,	// (0x00054ba4) bg_popup_preview_window_pane_g9

0x33cb,	// (0x00051e47) format_table_data2

0x33cb,	// (0x00051e47) format_table_data3

0x33cb,	// (0x00051e47) format_table_data_example

0x0008,

0x33cb,	// (0x00051e47) intro_purpose

0xf8f5,	// (0x0005e371) bg_popup_preview_window_pane_g

0x33cb,	// (0x00051e47) texts_category

0x33cb,	// (0x00051e47) texts_graphics

0x4953,	// (0x000533cf) text_digital

0x4962,	// (0x000533de) text_primary

0x4971,	// (0x000533ed) text_primary_small

0x4980,	// (0x000533fc) text_secondary

0x498f,	// (0x0005340b) text_title

0x680a,	// (0x00055286) bg_passive_tab_pane_g1_cp3_srt

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp3_srt

0x6813,	// (0x0005528f) bg_passive_tab_pane_g3_cp3_srt

0x3726,	// (0x000521a2) bg_active_tab_pane_cp3_srt_ParamLimits

0x3726,	// (0x000521a2) bg_active_tab_pane_cp3_srt

0x681c,	// (0x00055298) tabs_4_active_pane_srt_g1

0xdd0d,	// (0x0005c789) tabs_4_active_pane_srt_t1_ParamLimits

0xdd0d,	// (0x0005c789) tabs_4_active_pane_srt_t1

0x680a,	// (0x00055286) bg_active_tab_pane_g1_cp3_copy1

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp3_copy1

0x6813,	// (0x0005528f) bg_active_tab_pane_g3_cp3_copy1

0x34ab,	// (0x00051f27) tabs_2_long_active_pane_srt_ParamLimits

0x34ab,	// (0x00051f27) tabs_2_long_active_pane_srt

0x34ab,	// (0x00051f27) tabs_2_long_passive_pane_srt_ParamLimits

0x34ab,	// (0x00051f27) tabs_2_long_passive_pane_srt

0x4cde,	// (0x0005375a) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4cde,	// (0x0005375a) bg_passive_tab_pane_cp4_srt

0x6553,	// (0x00054fcf) bg_passive_tab_pane_g1_cp4_srt

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp4_srt

0x655c,	// (0x00054fd8) bg_passive_tab_pane_g3_cp4_srt

0x34ab,	// (0x00051f27) bg_active_tab_pane_cp4_srt_ParamLimits

0x34ab,	// (0x00051f27) bg_active_tab_pane_cp4_srt

0xdb37,	// (0x0005c5b3) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdb37,	// (0x0005c5b3) tabs_2_long_active_pane_srt_t1

0x6553,	// (0x00054fcf) bg_active_tab_pane_g1_cp4_srt

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp4_srt

0x655c,	// (0x00054fd8) bg_active_tab_pane_g3_cp4_srt

0x3726,	// (0x000521a2) tabs_3_long_active_pane_srt_ParamLimits

0x3726,	// (0x000521a2) tabs_3_long_active_pane_srt

0x3726,	// (0x000521a2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3726,	// (0x000521a2) tabs_3_long_passive_pane_cp_srt

0x3726,	// (0x000521a2) tabs_3_long_passive_pane_srt_ParamLimits

0x3726,	// (0x000521a2) tabs_3_long_passive_pane_srt

0x4cde,	// (0x0005375a) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4cde,	// (0x0005375a) bg_passive_tab_pane_cp5_srt

0x4675,	// (0x000530f1) bg_passive_tab_pane_g1_cp5_srt

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp5_srt

0x467e,	// (0x000530fa) bg_passive_tab_pane_g3_cp5_srt

0x34ab,	// (0x00051f27) bg_active_tab_pane_cp5_srt_ParamLimits

0x34ab,	// (0x00051f27) bg_active_tab_pane_cp5_srt

0xdb21,	// (0x0005c59d) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdb21,	// (0x0005c59d) tabs_3_long_active_pane_srt_t1

0x4675,	// (0x000530f1) bg_active_tab_pane_g1_cp5_srt

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp5_srt

0x467e,	// (0x000530fa) bg_active_tab_pane_g3_cp5_srt

0x6533,	// (0x00054faf) navi_text_pane_srt_t1

0x652b,	// (0x00054fa7) navi_icon_pane_srt_g1

0x4b56,	// (0x000535d2) midp_editing_number_pane_srt

0x499e,	// (0x0005341a) midp_ticker_pane_srt

0x4b5e,	// (0x000535da) midp_ticker_pane_srt_g1

0x4b66,	// (0x000535e2) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0005e1f9) midp_ticker_pane_srt_g

0x4b6e,	// (0x000535ea) midp_ticker_pane_srt_t1

0x651c,	// (0x00054f98) midp_editing_number_pane_t1_copy1

0x4cde,	// (0x0005375a) listscroll_midp_pane

0x4cde,	// (0x0005375a) midp_form_pane

0x4a08,	// (0x00053484) midp_info_popup_window_ParamLimits

0x4a08,	// (0x00053484) midp_info_popup_window

0x3dc3,	// (0x0005283f) bg_popup_sub_pane_cp50_ParamLimits

0x3dc3,	// (0x0005283f) bg_popup_sub_pane_cp50

0x5646,	// (0x000540c2) listscroll_midp_info_pane_ParamLimits

0x5646,	// (0x000540c2) listscroll_midp_info_pane

0x562e,	// (0x000540aa) listscroll_form_midp_pane_ParamLimits

0x562e,	// (0x000540aa) listscroll_form_midp_pane

0x563a,	// (0x000540b6) scroll_bar_cp050

0xd9bd,	// (0x0005c439) list_midp_pane

0x729c,	// (0x00055d18) signal_pane_g2_cp

0x5548,	// (0x00053fc4) listscroll_midp_info_pane_t1_ParamLimits

0x5548,	// (0x00053fc4) listscroll_midp_info_pane_t1

0x5560,	// (0x00053fdc) listscroll_midp_info_pane_t2_ParamLimits

0x5560,	// (0x00053fdc) listscroll_midp_info_pane_t2

0x559e,	// (0x0005401a) listscroll_midp_info_pane_t3_ParamLimits

0x559e,	// (0x0005401a) listscroll_midp_info_pane_t3

0x55d8,	// (0x00054054) listscroll_midp_info_pane_t4_ParamLimits

0x55d8,	// (0x00054054) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0005e2ac) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0005e2ac) listscroll_midp_info_pane_t

0x3e87,	// (0x00052903) scroll_pane_cp21

0x54e6,	// (0x00053f62) form_midp_field_choice_group_pane

0x54ef,	// (0x00053f6b) form_midp_field_text_pane

0x552e,	// (0x00053faa) form_midp_field_time_pane

0x5536,	// (0x00053fb2) form_midp_gauge_slider_pane

0x553f,	// (0x00053fbb) form_midp_gauge_wait_pane

0x33cb,	// (0x00051e47) form_midp_image_pane

0xc6db,	// (0x0005b157) list_single_midp_pane_ParamLimits

0xc6db,	// (0x0005b157) list_single_midp_pane

0xd99b,	// (0x0005c417) form_midp_field_text_pane_t1

0x5268,	// (0x00053ce4) input_focus_pane_cp050

0x54d5,	// (0x00053f51) list_midp_form_text_pane

0x546d,	// (0x00053ee9) form_midp_field_choice_group_pane_t1

0x547b,	// (0x00053ef7) input_focus_pane_cp051

0x548f,	// (0x00053f0b) list_midp_choice_pane

0x33cb,	// (0x00051e47) status_idle_pane

0x5451,	// (0x00053ecd) form_midp_field_time_pane_t1

0x33c1,	// (0x00051e3d) wait_anim_pane_g2_copy1

0x545f,	// (0x00053edb) form_midp_field_time_pane_t2

0x0001,

0x4ab6,	// (0x00053532) aid_navinavi_width_2_pane

0xf82b,	// (0x0005e2a7) form_midp_field_time_pane_t

0x33cb,	// (0x00051e47) input_focus_pane_cp052

0x33cb,	// (0x00051e47) bg_input_focus_pane_cp040

0x5411,	// (0x00053e8d) form_midp_gauge_slider_pane_t1

0x541f,	// (0x00053e9b) form_midp_gauge_slider_pane_t2

0xd97f,	// (0x0005c3fb) form_midp_gauge_slider_pane_t3

0xd98d,	// (0x0005c409) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0005e29e) form_midp_gauge_slider_pane_t

0x5449,	// (0x00053ec5) form_midp_slider_pane

0x34ab,	// (0x00051f27) bg_input_focus_pane_cp041_ParamLimits

0x34ab,	// (0x00051f27) bg_input_focus_pane_cp041

0x53de,	// (0x00053e5a) form_midp_gauge_wait_pane_t1_ParamLimits

0x53de,	// (0x00053e5a) form_midp_gauge_wait_pane_t1

0x53f0,	// (0x00053e6c) form_midp_gauge_wait_pane_t2_ParamLimits

0x53f0,	// (0x00053e6c) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0005e299) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0005e299) form_midp_gauge_wait_pane_t

0x5402,	// (0x00053e7e) form_midp_wait_pane_ParamLimits

0x5402,	// (0x00053e7e) form_midp_wait_pane

0x53a8,	// (0x00053e24) form_midp_image_pane_g1

0x53b1,	// (0x00053e2d) form_midp_image_pane_t1

0x53c0,	// (0x00053e3c) form_midp_image_pane_t2

0x53cf,	// (0x00053e4b) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0005e292) form_midp_image_pane_t

0x539f,	// (0x00053e1b) list_single_midp_pane_g1

0x2bac,	// (0x00051628) list_single_midp_pane_t1

0xd96a,	// (0x0005c3e6) list_midp_form_item_pane_ParamLimits

0xd96a,	// (0x0005c3e6) list_midp_form_item_pane

0x4a5e,	// (0x000534da) list_midp_form_item_pane_t1

0x4a6d,	// (0x000534e9) midp_ticker_pane_g1

0x4a79,	// (0x000534f5) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0005e1df) midp_ticker_pane_g

0x4a85,	// (0x00053501) midp_ticker_pane_t1

0x676d,	// (0x000551e9) midp_editing_number_pane_t1

0x674b,	// (0x000551c7) midp_editing_number_pane

0x675a,	// (0x000551d6) midp_ticker_pane

0x650c,	// (0x00054f88) ai_message_heading_pane

0x33cb,	// (0x00051e47) bg_popup_window_pane_cp14

0x6514,	// (0x00054f90) listscroll_ai_message_pane

0x6496,	// (0x00054f12) ai_message_heading_pane_g1_ParamLimits

0x6496,	// (0x00054f12) ai_message_heading_pane_g1

0x64a2,	// (0x00054f1e) ai_message_heading_pane_g2_ParamLimits

0x64a2,	// (0x00054f1e) ai_message_heading_pane_g2

0x64ae,	// (0x00054f2a) ai_message_heading_pane_g3_ParamLimits

0x64ae,	// (0x00054f2a) ai_message_heading_pane_g3

0x64ba,	// (0x00054f36) ai_message_heading_pane_g4_ParamLimits

0x64ba,	// (0x00054f36) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0005e3d3) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0005e3d3) ai_message_heading_pane_g

0x64c6,	// (0x00054f42) ai_message_heading_pane_t1_ParamLimits

0x64c6,	// (0x00054f42) ai_message_heading_pane_t1

0x64e0,	// (0x00054f5c) ai_message_heading_pane_t2_ParamLimits

0x64e0,	// (0x00054f5c) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0005e3dc) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0005e3dc) ai_message_heading_pane_t

0x64f2,	// (0x00054f6e) bg_popup_heading_pane_cp1_ParamLimits

0x64f2,	// (0x00054f6e) bg_popup_heading_pane_cp1

0x6484,	// (0x00054f00) list_ai_message_pane_ParamLimits

0x6484,	// (0x00054f00) list_ai_message_pane

0x3e87,	// (0x00052903) scroll_pane_cp10

0x6420,	// (0x00054e9c) list_ai_message_pane_g1

0x6428,	// (0x00054ea4) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0005e3b0) list_ai_message_pane_g

0x6430,	// (0x00054eac) list_ai_message_pane_t1_ParamLimits

0x6430,	// (0x00054eac) list_ai_message_pane_t1

0x6445,	// (0x00054ec1) list_ai_message_pane_t2_ParamLimits

0x6445,	// (0x00054ec1) list_ai_message_pane_t2

0x645a,	// (0x00054ed6) list_ai_message_pane_t3_ParamLimits

0x645a,	// (0x00054ed6) list_ai_message_pane_t3

0x646f,	// (0x00054eeb) list_ai_message_pane_t4_ParamLimits

0x646f,	// (0x00054eeb) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0005e3b5) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0005e3b5) list_ai_message_pane_t

0xdb00,	// (0x0005c57c) cell_ai_soft_ind_pane_ParamLimits

0xdb00,	// (0x0005c57c) cell_ai_soft_ind_pane

0x4a97,	// (0x00053513) cell_ai_soft_ind_pane_g1_ParamLimits

0x4a97,	// (0x00053513) cell_ai_soft_ind_pane_g1

0x33cb,	// (0x00051e47) grid_highlight_cp1

0x4aa4,	// (0x00053520) text_secondary_cp56_ParamLimits

0x4aa4,	// (0x00053520) text_secondary_cp56

0x63e0,	// (0x00054e5c) example_general_pane_ParamLimits

0x63e0,	// (0x00054e5c) example_general_pane

0x63ec,	// (0x00054e68) example_parent_pane_g1_ParamLimits

0x63ec,	// (0x00054e68) example_parent_pane_g1

0x63f8,	// (0x00054e74) example_parent_pane_t1_ParamLimits

0x63f8,	// (0x00054e74) example_parent_pane_t1

0xc385,	// (0x0005ae01) popup_preview_text_window_ParamLimits

0xc385,	// (0x0005ae01) popup_preview_text_window

0x48cf,	// (0x0005334b) list_single_pane_cp2_g4

0x37dc,	// (0x00052258) bg_popup_preview_window_pane_ParamLimits

0x37dc,	// (0x00052258) bg_popup_preview_window_pane

0x6130,	// (0x00054bac) popup_preview_text_window_t1_ParamLimits

0x6130,	// (0x00054bac) popup_preview_text_window_t1

0x614e,	// (0x00054bca) popup_preview_text_window_t2_ParamLimits

0x614e,	// (0x00054bca) popup_preview_text_window_t2

0x6197,	// (0x00054c13) popup_preview_text_window_t3_ParamLimits

0x6197,	// (0x00054c13) popup_preview_text_window_t3

0x61dc,	// (0x00054c58) popup_preview_text_window_t4_ParamLimits

0x61dc,	// (0x00054c58) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0005e384) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0005e384) popup_preview_text_window_t

0x625a,	// (0x00054cd6) scroll_pane_cp11

0x51f4,	// (0x00053c70) bg_popup_preview_window_pane_g1

0x60f0,	// (0x00054b6c) bg_popup_preview_window_pane_g2

0x60f8,	// (0x00054b74) bg_popup_preview_window_pane_g3

0x6100,	// (0x00054b7c) bg_popup_preview_window_pane_g4

0x6108,	// (0x00054b84) bg_popup_preview_window_pane_g5

0x6110,	// (0x00054b8c) bg_popup_preview_window_pane_g6

0x6118,	// (0x00054b94) bg_popup_preview_window_pane_g7

0x6120,	// (0x00054b9c) bg_popup_preview_window_pane_g8

0xf528,	// (0x0005dfa4) aid_popup_width_pane

0xc301,	// (0x0005ad7d) popup_midp_note_alarm_window_ParamLimits

0xc301,	// (0x0005ad7d) popup_midp_note_alarm_window

0x3d17,	// (0x00052793) data_form_pane_ParamLimits

0xbc91,	// (0x0005a70d) form_field_data_pane_g1

0xbc9b,	// (0x0005a717) form_field_data_pane_t1_ParamLimits

0x3d23,	// (0x0005279f) input_focus_pane_ParamLimits

0x097e,	// (0x0004f3fa) data_form_wide_pane_ParamLimits

0x098f,	// (0x0004f40b) form_field_data_wide_pane_g1

0x099b,	// (0x0004f417) form_field_data_wide_pane_t1_ParamLimits

0x3a88,	// (0x00052504) input_focus_pane_cp6_ParamLimits

0xd1c4,	// (0x0005bc40) input_popup_find_pane_g1_ParamLimits

0xd1c4,	// (0x0005bc40) input_popup_find_pane_g1

0x0c11,	// (0x0004f68d) aid_navi_side_left_pane

0x0c26,	// (0x0004f6a2) aid_navi_side_right_pane

0x5b09,	// (0x00054585) bg_popup_window_pane_cp30_ParamLimits

0x5b09,	// (0x00054585) bg_popup_window_pane_cp30

0x5b83,	// (0x000545ff) popup_midp_note_alarm_window_g1_ParamLimits

0x5b83,	// (0x000545ff) popup_midp_note_alarm_window_g1

0x5bb3,	// (0x0005462f) popup_midp_note_alarm_window_t1_ParamLimits

0x5bb3,	// (0x0005462f) popup_midp_note_alarm_window_t1

0x5c54,	// (0x000546d0) popup_midp_note_alarm_window_t2_ParamLimits

0x5c54,	// (0x000546d0) popup_midp_note_alarm_window_t2

0x5d02,	// (0x0005477e) popup_midp_note_alarm_window_t3_ParamLimits

0x5d02,	// (0x0005477e) popup_midp_note_alarm_window_t3

0x5d34,	// (0x000547b0) popup_midp_note_alarm_window_t4_ParamLimits

0x5d34,	// (0x000547b0) popup_midp_note_alarm_window_t4

0x5d5a,	// (0x000547d6) popup_midp_note_alarm_window_t5_ParamLimits

0x5d5a,	// (0x000547d6) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0005e321) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0005e321) popup_midp_note_alarm_window_t

0x5e06,	// (0x00054882) wait_bar_pane_cp1_ParamLimits

0x5e06,	// (0x00054882) wait_bar_pane_cp1

0x33cb,	// (0x00051e47) wait_anim_pane_copy1

0x33cb,	// (0x00051e47) wait_border_pane_copy1

0x57ef,	// (0x0005426b) wait_border_pane_g1_copy1

0x09b5,	// (0x0004f431) form_field_popup_pane_g1

0xbcb5,	// (0x0005a731) form_field_popup_pane_t1_ParamLimits

0x3d23,	// (0x0005279f) input_focus_pane_cp7_ParamLimits

0x3d45,	// (0x000527c1) list_form_pane_ParamLimits

0x09d5,	// (0x0004f451) form_field_popup_wide_pane_g1

0x09dd,	// (0x0004f459) form_field_popup_wide_pane_t1_ParamLimits

0x3d23,	// (0x0005279f) input_focus_pane_cp8_ParamLimits

0x3d51,	// (0x000527cd) list_form_wide_pane_ParamLimits

0x6896,	// (0x00055312) aid_size_cell_graphic_pane

0xbd34,	// (0x0005a7b0) data_form_pane_t1_ParamLimits

0xc703,	// (0x0005b17f) data_form_wide_pane_t1_ParamLimits

0xd555,	// (0x0005bfd1) bg_status_flat_pane

0xce3c,	// (0x0005b8b8) title_pane_t1_ParamLimits

0x3473,	// (0x00051eef) title_pane_t2_ParamLimits

0x3499,	// (0x00051f15) title_pane_t3_ParamLimits

0xf55d,	// (0x0005dfd9) title_pane_t_ParamLimits

0x4302,	// (0x00052d7e) level_1_signal_ParamLimits

0x4314,	// (0x00052d90) level_2_signal_ParamLimits

0x4327,	// (0x00052da3) level_3_signal_ParamLimits

0x433a,	// (0x00052db6) level_4_signal_ParamLimits

0x434d,	// (0x00052dc9) level_5_signal_ParamLimits

0x4360,	// (0x00052ddc) level_6_signal_ParamLimits

0x4373,	// (0x00052def) level_7_signal_ParamLimits

0x4302,	// (0x00052d7e) level_1_battery_ParamLimits

0x4314,	// (0x00052d90) level_2_battery_ParamLimits

0x4327,	// (0x00052da3) level_3_battery_ParamLimits

0x433a,	// (0x00052db6) level_4_battery_ParamLimits

0x434d,	// (0x00052dc9) level_5_battery_ParamLimits

0x4360,	// (0x00052ddc) level_6_battery_ParamLimits

0x4373,	// (0x00052def) level_7_battery_ParamLimits

0x5a0e,	// (0x0005448a) bg_status_flat_pane_g1

0x5a16,	// (0x00054492) bg_status_flat_pane_g2

0x5a1e,	// (0x0005449a) bg_status_flat_pane_g3

0x5a26,	// (0x000544a2) bg_status_flat_pane_g4

0x5a2e,	// (0x000544aa) bg_status_flat_pane_g5

0x5a36,	// (0x000544b2) bg_status_flat_pane_g6

0x5a3e,	// (0x000544ba) bg_status_flat_pane_g7

0xcec8,	// (0x0005b944) tabs_3_active_pane_t1_ParamLimits

0xcec8,	// (0x0005b944) tabs_3_passive_pane_t1_ParamLimits

0xceda,	// (0x0005b956) tabs_4_active_pane_t1_ParamLimits

0xceda,	// (0x0005b956) tabs_4_1_passive_pane_t1_ParamLimits

0xd1d2,	// (0x0005bc4e) tabs_2_active_pane_t1_ParamLimits

0xd1d2,	// (0x0005bc4e) tabs_2_passive_pane_t1_ParamLimits

0x34ab,	// (0x00051f27) bg_active_tab_pane_cp4_ParamLimits

0xd1e4,	// (0x0005bc60) tabs_2_long_active_pane_t1_ParamLimits

0x4cde,	// (0x0005375a) bg_passive_tab_pane_cp4_ParamLimits

0x1804,	// (0x00050280) list_single_midp_graphic_pane_t1_ParamLimits

0x34ab,	// (0x00051f27) bg_active_tab_pane_cp5_ParamLimits

0xd1f7,	// (0x0005bc73) tabs_3_long_active_pane_t1_ParamLimits

0x4cde,	// (0x0005375a) bg_passive_tab_pane_cp5_ParamLimits

0x1804,	// (0x00050280) list_single_midp_graphic_pane_t1

0xd555,	// (0x0005bfd1) bg_status_flat_pane_ParamLimits

0x4e84,	// (0x00053900) indicator_pane_cp2_ParamLimits

0x4e84,	// (0x00053900) indicator_pane_cp2

0xd6d3,	// (0x0005c14f) navi_pane_srt_ParamLimits

0xd6d3,	// (0x0005c14f) navi_pane_srt

0x4fd3,	// (0x00053a4f) popup_clock_digital_analogue_window_cp1

0x3588,	// (0x00052004) indicator_pane_t1

0x499e,	// (0x0005341a) copy_highlight_pane

0x499e,	// (0x0005341a) cursor_graphics_pane

0x499e,	// (0x0005341a) graphic_within_text_pane

0x499e,	// (0x0005341a) link_highlight_pane

0x621d,	// (0x00054c99) popup_preview_text_window_t5_ParamLimits

0x621d,	// (0x00054c99) popup_preview_text_window_t5

0x4abe,	// (0x0005353a) cursor_digital_pane

0x4abe,	// (0x0005353a) cursor_primary_pane

0x4acf,	// (0x0005354b) cursor_primary_small_pane

0x4ad7,	// (0x00053553) cursor_secondary_pane

0x4adf,	// (0x0005355b) cursor_title_pane

0x4abe,	// (0x0005353a) link_highlight_digital_pane

0x4ac6,	// (0x00053542) link_highlight_primary_pane

0x4acf,	// (0x0005354b) link_highlight_primary_small_pane

0x4ad7,	// (0x00053553) link_highlight_secondary_pane

0x4adf,	// (0x0005355b) link_highlight_title_pane

0x4abe,	// (0x0005353a) copy_highlight_digital_pane

0x4abe,	// (0x0005353a) copy_highlight_primary_pane

0x4acf,	// (0x0005354b) copy_highlight_primary_small_pane

0x4ad7,	// (0x00053553) copy_highlight_secondary_pane

0x4adf,	// (0x0005355b) copy_highlight_title_pane

0x4ad7,	// (0x00053553) graphic_text_digital_pane

0x5aac,	// (0x00054528) graphic_text_primary_pane

0x5ab5,	// (0x00054531) graphic_text_primary_small_pane

0x4acf,	// (0x0005354b) graphic_text_secondary_pane

0x4abe,	// (0x0005353a) graphic_text_title_pane

0xd438,	// (0x0005beb4) cursor_primary_pane_g1

0x5a9e,	// (0x0005451a) cursor_text_primary_t1

0xd9f9,	// (0x0005c475) cursor_primary_small_pane_g1

0x5a90,	// (0x0005450c) cursor_text_primary_small_t1

0xd9ef,	// (0x0005c46b) cursor_primary_small_pane_g1_copy1

0x5a78,	// (0x000544f4) cursor_text_primary_small_t1_copy1

0x5a56,	// (0x000544d2) cursor_text_title_t1

0xd9e5,	// (0x0005c461) cursor_title_pane_g1

0xd438,	// (0x0005beb4) cursor_digital_pane_g1

0x4af1,	// (0x0005356d) cursor_text_digital_t1

0x4b16,	// (0x00053592) link_highlight_primary_pane_g1

0x59ff,	// (0x0005447b) link_highlight_primary_pane_t1

0x4aff,	// (0x0005357b) link_highlight_primary_small_pane_g1

0x4b07,	// (0x00053583) link_highlight_primary_small_pane_t1

0x4b16,	// (0x00053592) link_highlight_secondary_pane_g1

0x4b1e,	// (0x0005359a) link_highlight_secondary_pane_t1

0x5973,	// (0x000543ef) link_highlight_title_pane_g1

0x597b,	// (0x000543f7) link_highlight_title_pane_t1

0x595c,	// (0x000543d8) link_highlight_digital_pane_g1

0x5964,	// (0x000543e0) link_highlight_digital_pane_t1

0x5834,	// (0x000542b0) copy_highlight_primary_pane_g1

0x583c,	// (0x000542b8) copy_highlight_primary_pane_t1

0x580e,	// (0x0005428a) copy_highlight_primary_small_pane_g1

0x5825,	// (0x000542a1) copy_highlight_primary_small_pane_t1

0x4b2d,	// (0x000535a9) copy_highlight_secondary_pane_g1

0x4b35,	// (0x000535b1) copy_highlight_secondary_pane_t1

0x580e,	// (0x0005428a) copy_highlight_title_pane_g1

0x5816,	// (0x00054292) copy_highlight_title_pane_t1

0x5834,	// (0x000542b0) copy_highlight_digital_pane_g1

0x6aa2,	// (0x0005551e) copy_highlight_digital_pane_t1

0x69f6,	// (0x00055472) graphic_text_primary_pane_g1

0x6a86,	// (0x00055502) graphic_text_primary_pane_t1

0x6a94,	// (0x00055510) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0005e450) graphic_text_primary_pane_t

0x6a62,	// (0x000554de) graphic_text_primary_small_pane_g1

0x6a6a,	// (0x000554e6) graphic_text_primary_small_pane_t1

0x6a78,	// (0x000554f4) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0005e44b) graphic_text_primary_small_pane_t

0x6a3e,	// (0x000554ba) graphic_text_secondary_pane_g1

0x6a46,	// (0x000554c2) graphic_text_secondary_pane_t1

0x6a54,	// (0x000554d0) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0005e446) graphic_text_secondary_pane_t

0x6a1a,	// (0x00055496) graphic_text_title_pane_g1

0x6a22,	// (0x0005549e) graphic_text_title_pane_t1

0x6a30,	// (0x000554ac) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0005e441) graphic_text_title_pane_t

0x69f6,	// (0x00055472) graphic_text_digital_pane_g1

0x69fe,	// (0x0005547a) graphic_text_digital_pane_t1

0x6a0c,	// (0x00055488) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0005e43c) graphic_text_digital_pane_t

0x34ab,	// (0x00051f27) navi_icon_pane_srt_ParamLimits

0x34ab,	// (0x00051f27) navi_icon_pane_srt

0x33cb,	// (0x00051e47) navi_midp_pane_srt

0x33cb,	// (0x00051e47) navi_navi_pane_srt

0x34ab,	// (0x00051f27) navi_text_pane_srt_ParamLimits

0x34ab,	// (0x00051f27) navi_text_pane_srt

0x69c1,	// (0x0005543d) navi_navi_icon_text_pane_srt

0x69c9,	// (0x00055445) navi_navi_pane_srt_g1_ParamLimits

0x69c9,	// (0x00055445) navi_navi_pane_srt_g1

0x69db,	// (0x00055457) navi_navi_pane_srt_g2_ParamLimits

0x69db,	// (0x00055457) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0005e437) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0005e437) navi_navi_pane_srt_g

0x69ed,	// (0x00055469) navi_navi_tabs_pane_srt

0x69c1,	// (0x0005543d) navi_navi_text_pane_srt

0x69c1,	// (0x0005543d) navi_navi_volume_pane_srt

0x69b2,	// (0x0005542e) navi_navi_text_pane_srt_t1

0x1b7e,	// (0x000505fa) navi_navi_volume_pane_srt_g1

0x1b86,	// (0x00050602) volume_small_pane_srt_ParamLimits

0x1b86,	// (0x00050602) volume_small_pane_srt

0x0f5f,	// (0x0004f9db) volume_small_pane_srt_g1_ParamLimits

0x0f5f,	// (0x0004f9db) volume_small_pane_srt_g1

0x0f6f,	// (0x0004f9eb) volume_small_pane_srt_g2_ParamLimits

0x0f6f,	// (0x0004f9eb) volume_small_pane_srt_g2

0x0f80,	// (0x0004f9fc) volume_small_pane_srt_g3_ParamLimits

0x0f80,	// (0x0004f9fc) volume_small_pane_srt_g3

0x0f91,	// (0x0004fa0d) volume_small_pane_srt_g4_ParamLimits

0x0f91,	// (0x0004fa0d) volume_small_pane_srt_g4

0x0fa2,	// (0x0004fa1e) volume_small_pane_srt_g5_ParamLimits

0x0fa2,	// (0x0004fa1e) volume_small_pane_srt_g5

0x0fb3,	// (0x0004fa2f) volume_small_pane_srt_g6_ParamLimits

0x0fb3,	// (0x0004fa2f) volume_small_pane_srt_g6

0x0fc4,	// (0x0004fa40) volume_small_pane_srt_g7_ParamLimits

0x0fc4,	// (0x0004fa40) volume_small_pane_srt_g7

0x0fd5,	// (0x0004fa51) volume_small_pane_srt_g8_ParamLimits

0x0fd5,	// (0x0004fa51) volume_small_pane_srt_g8

0x0fe6,	// (0x0004fa62) volume_small_pane_srt_g9_ParamLimits

0x0fe6,	// (0x0004fa62) volume_small_pane_srt_g9

0x0ff7,	// (0x0004fa73) volume_small_pane_srt_g10_ParamLimits

0x0ff7,	// (0x0004fa73) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0005e1e4) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0005e1e4) volume_small_pane_srt_g

0x3885,	// (0x00052301) query_popup_data_pane_cp2

0x6998,	// (0x00055414) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6998,	// (0x00055414) navi_navi_icon_text_pane_srt_t1

0x5aac,	// (0x00054528) navi_tabs_2_long_pane_srt

0x5aac,	// (0x00054528) navi_tabs_2_pane_srt

0x5aac,	// (0x00054528) navi_tabs_3_long_pane_srt

0x5aac,	// (0x00054528) navi_tabs_3_pane_srt

0x5aac,	// (0x00054528) navi_tabs_4_pane_srt

0x1b5e,	// (0x000505da) tabs_2_active_pane_srt_ParamLimits

0x1b5e,	// (0x000505da) tabs_2_active_pane_srt

0x1b6e,	// (0x000505ea) tabs_2_passive_pane_srt_ParamLimits

0x1b6e,	// (0x000505ea) tabs_2_passive_pane_srt

0x5268,	// (0x00053ce4) bg_passive_tab_pane_cp1_srt_ParamLimits

0x5268,	// (0x00053ce4) bg_passive_tab_pane_cp1_srt

0x6964,	// (0x000553e0) bg_passive_tab_pane_g1_cp1_srt

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp1_srt

0x696d,	// (0x000553e9) bg_passive_tab_pane_g3_cp1_srt

0x3726,	// (0x000521a2) bg_active_tab_pane_cp1_srt_ParamLimits

0x3726,	// (0x000521a2) bg_active_tab_pane_cp1_srt

0x6976,	// (0x000553f2) tabs_2_active_pane_srt_g1

0xdd8a,	// (0x0005c806) tabs_2_active_pane_srt_t1_ParamLimits

0xdd8a,	// (0x0005c806) tabs_2_active_pane_srt_t1

0x6964,	// (0x000553e0) bg_active_tab_pane_g1_cp1_srt

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp1_srt

0x696d,	// (0x000553e9) bg_active_tab_pane_g3_cp1_srt

0x1b2b,	// (0x000505a7) tabs_3_active_pane_srt_ParamLimits

0x1b2b,	// (0x000505a7) tabs_3_active_pane_srt

0x1b3c,	// (0x000505b8) tabs_3_passive_pane_cp_srt_ParamLimits

0x1b3c,	// (0x000505b8) tabs_3_passive_pane_cp_srt

0x1b4d,	// (0x000505c9) tabs_3_passive_pane_srt_ParamLimits

0x1b4d,	// (0x000505c9) tabs_3_passive_pane_srt

0x5268,	// (0x00053ce4) bg_passive_tab_pane_cp2_srt_ParamLimits

0x5268,	// (0x00053ce4) bg_passive_tab_pane_cp2_srt

0x4b44,	// (0x000535c0) bg_passive_tab_pane_g1_cp2_srt

0x45eb,	// (0x00053067) bg_passive_tab_pane_g2_cp2_srt

0x4b4d,	// (0x000535c9) bg_passive_tab_pane_g3_cp2_srt

0x3726,	// (0x000521a2) bg_active_tab_pane_cp2_srt_ParamLimits

0x3726,	// (0x000521a2) bg_active_tab_pane_cp2_srt

0x694a,	// (0x000553c6) tabs_3_active_pane_srt_g1

0xdd74,	// (0x0005c7f0) tabs_3_active_pane_srt_t1_ParamLimits

0xdd74,	// (0x0005c7f0) tabs_3_active_pane_srt_t1

0x4b44,	// (0x000535c0) bg_active_tab_pane_g1_cp2_srt

0x45eb,	// (0x00053067) bg_active_tab_pane_g2_cp2_srt

0x4b4d,	// (0x000535c9) bg_active_tab_pane_g3_cp2_srt

0x1ae3,	// (0x0005055f) tabs_4_active_pane_srt_ParamLimits

0x1ae3,	// (0x0005055f) tabs_4_active_pane_srt

0x1af5,	// (0x00050571) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1af5,	// (0x00050571) tabs_4_passive_pane_cp2_srt

0x115c,	// (0x0004fbd8) aid_size_cell_toolbar

0x65c4,	// (0x00055040) main_idle_act_pane_ParamLimits

0x1325,	// (0x0004fda1) popup_large_graphic_colour_window_ParamLimits

0xc611,	// (0x0005b08d) popup_toolbar_window_ParamLimits

0xc611,	// (0x0005b08d) popup_toolbar_window

0x677c,	// (0x000551f8) list_single_graphic_2heading_pane_ParamLimits

0x677c,	// (0x000551f8) list_single_graphic_2heading_pane

0x40b7,	// (0x00052b33) aid_size_cell_apps_grid_lsc_pane

0x40c9,	// (0x00052b45) aid_size_cell_apps_grid_prt_pane

0x4cde,	// (0x0005375a) bg_wml_button_pane_cp1_ParamLimits

0x4cde,	// (0x0005375a) bg_wml_button_pane_cp1

0xd99b,	// (0x0005c417) form_midp_field_text_pane_t1_ParamLimits

0x5268,	// (0x00053ce4) input_focus_pane_cp050_ParamLimits

0x54d5,	// (0x00053f51) list_midp_form_text_pane_ParamLimits

0x547b,	// (0x00053ef7) input_focus_pane_cp051_ParamLimits

0x548f,	// (0x00053f0b) list_midp_choice_pane_ParamLimits

0xd938,	// (0x0005c3b4) list_single_2graphic_pane_cp3_ParamLimits

0xd938,	// (0x0005c3b4) list_single_2graphic_pane_cp3

0xd94b,	// (0x0005c3c7) list_single_midp_graphic_pane_ParamLimits

0xd94b,	// (0x0005c3c7) list_single_midp_graphic_pane

0xf4c8,	// (0x0005df44) list_single_graphic_2heading_pane_g1_ParamLimits

0xf4c8,	// (0x0005df44) list_single_graphic_2heading_pane_g1

0xf4d4,	// (0x0005df50) list_single_graphic_2heading_pane_g4_ParamLimits

0xf4d4,	// (0x0005df50) list_single_graphic_2heading_pane_g4

0xf4e0,	// (0x0005df5c) list_single_graphic_2heading_pane_g5_ParamLimits

0xf4e0,	// (0x0005df5c) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0005e237) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0005e237) list_single_graphic_2heading_pane_g

0xf4ec,	// (0x0005df68) list_single_graphic_2heading_pane_t1_ParamLimits

0xf4ec,	// (0x0005df68) list_single_graphic_2heading_pane_t1

0xf500,	// (0x0005df7c) list_single_graphic_2heading_pane_t2_ParamLimits

0xf500,	// (0x0005df7c) list_single_graphic_2heading_pane_t2

0xf53c,	// (0x0005dfb8) list_single_graphic_2heading_pane_t3_ParamLimits

0xf53c,	// (0x0005dfb8) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0005e23e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0005e23e) list_single_graphic_2heading_pane_t

0x5132,	// (0x00053bae) bg_popup_sub_pane_cp2

0x515c,	// (0x00053bd8) grid_toobar_pane

0x1739,	// (0x000501b5) cell_toolbar_pane_ParamLimits

0x1739,	// (0x000501b5) cell_toolbar_pane

0x5198,	// (0x00053c14) cell_toolbar_pane_g1_ParamLimits

0x5198,	// (0x00053c14) cell_toolbar_pane_g1

0x51ac,	// (0x00053c28) cell_toolbar_pane_g2_ParamLimits

0x51ac,	// (0x00053c28) cell_toolbar_pane_g2

0x0001,

0xf7d0,	// (0x0005e24c) cell_toolbar_pane_g_ParamLimits

0xf7d0,	// (0x0005e24c) cell_toolbar_pane_g

0x51ce,	// (0x00053c4a) grid_highlight_pane_cp2_ParamLimits

0x51ce,	// (0x00053c4a) grid_highlight_pane_cp2

0x51e8,	// (0x00053c64) toolbar_button_pane

0x51f4,	// (0x00053c70) toolbar_button_pane_g1

0x51fc,	// (0x00053c78) toolbar_button_pane_g2

0x5204,	// (0x00053c80) toolbar_button_pane_g3

0x520c,	// (0x00053c88) toolbar_button_pane_g4

0x5214,	// (0x00053c90) toolbar_button_pane_g5

0x521c,	// (0x00053c98) toolbar_button_pane_g6

0x5224,	// (0x00053ca0) toolbar_button_pane_g7

0x522c,	// (0x00053ca8) toolbar_button_pane_g8

0x5234,	// (0x00053cb0) toolbar_button_pane_g9

0x0009,

0xf7d5,	// (0x0005e251) toolbar_button_pane_g

0x1793,	// (0x0005020f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1793,	// (0x0005020f) list_single_2graphic_pane_g1_cp3

0xc669,	// (0x0005b0e5) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc669,	// (0x0005b0e5) list_single_2graphic_pane_g2_cp3

0x17b0,	// (0x0005022c) list_single_2graphic_pane_g3_cp3

0x17b8,	// (0x00050234) list_single_2graphic_pane_g4_cp3_ParamLimits

0x17b8,	// (0x00050234) list_single_2graphic_pane_g4_cp3

0x17c4,	// (0x00050240) list_single_2graphic_pane_t1_cp3_ParamLimits

0x17c4,	// (0x00050240) list_single_2graphic_pane_t1_cp3

0x17f8,	// (0x00050274) list_single_midp_graphic_pane_g2_ParamLimits

0x17f8,	// (0x00050274) list_single_midp_graphic_pane_g2

0xf4c0,	// (0x0005df3c) aid_zoom_text_primary

0x1164,	// (0x0004fbe0) aid_zoom_text_secondary

0x4c01,	// (0x0005367d) status_small_pane_g7_ParamLimits

0x4c01,	// (0x0005367d) status_small_pane_g7

0x4c24,	// (0x000536a0) status_small_pane_t1_ParamLimits

0xce18,	// (0x0005b894) title_pane_g2

0x0003,

0xf554,	// (0x0005dfd0) title_pane_g

0xd090,	// (0x0005bb0c) aid_size_cell_colour_1_pane_ParamLimits

0xd090,	// (0x0005bb0c) aid_size_cell_colour_1_pane

0xd0a4,	// (0x0005bb20) aid_size_cell_colour_2_pane_ParamLimits

0xd0a4,	// (0x0005bb20) aid_size_cell_colour_2_pane

0xd0b8,	// (0x0005bb34) aid_size_cell_colour_3_pane_ParamLimits

0xd0b8,	// (0x0005bb34) aid_size_cell_colour_3_pane

0xd0cc,	// (0x0005bb48) aid_size_cell_colour_4_pane_ParamLimits

0xd0cc,	// (0x0005bb48) aid_size_cell_colour_4_pane

0x0b4e,	// (0x0004f5ca) title_pane_stacon_g1_ParamLimits

0x0b4e,	// (0x0004f5ca) title_pane_stacon_g1

0x5893,	// (0x0005430f) popup_note_wait_window_g3_ParamLimits

0x5893,	// (0x0005430f) popup_note_wait_window_g3

0x5909,	// (0x00054385) popup_note_wait_window_t5_ParamLimits

0x5909,	// (0x00054385) popup_note_wait_window_t5

0x33cb,	// (0x00051e47) main_feb_china_hwr_fs_writing_pane

0xc01f,	// (0x0005aa9b) popup_feb_china_hwr_fs_window_ParamLimits

0xc01f,	// (0x0005aa9b) popup_feb_china_hwr_fs_window

0xc67a,	// (0x0005b0f6) aid_size_cell_hwr_fs_ParamLimits

0xc67a,	// (0x0005b0f6) aid_size_cell_hwr_fs

0x5268,	// (0x00053ce4) bg_popup_sub_pane_cp3_ParamLimits

0x5268,	// (0x00053ce4) bg_popup_sub_pane_cp3

0xc68f,	// (0x0005b10b) grid_hwr_fs_pane_ParamLimits

0xc68f,	// (0x0005b10b) grid_hwr_fs_pane

0x1847,	// (0x000502c3) linegrid_hwr_fs_pane_ParamLimits

0x1847,	// (0x000502c3) linegrid_hwr_fs_pane

0xc6a7,	// (0x0005b123) cell_hwr_fs_pane_ParamLimits

0xc6a7,	// (0x0005b123) cell_hwr_fs_pane

0x5274,	// (0x00053cf0) linegrid_hwr_fs_pane_g1_ParamLimits

0x5274,	// (0x00053cf0) linegrid_hwr_fs_pane_g1

0xd90c,	// (0x0005c388) linegrid_hwr_fs_pane_g2_ParamLimits

0xd90c,	// (0x0005c388) linegrid_hwr_fs_pane_g2

0x5292,	// (0x00053d0e) linegrid_hwr_fs_pane_g3_ParamLimits

0x5292,	// (0x00053d0e) linegrid_hwr_fs_pane_g3

0x1879,	// (0x000502f5) linegrid_hwr_fs_pane_g4_ParamLimits

0x1879,	// (0x000502f5) linegrid_hwr_fs_pane_g4

0x1893,	// (0x0005030f) linegrid_hwr_fs_pane_g5_ParamLimits

0x1893,	// (0x0005030f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0005e277) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0005e277) linegrid_hwr_fs_pane_g

0x529e,	// (0x00053d1a) cell_hwr_fs_pane_g1_ParamLimits

0x529e,	// (0x00053d1a) cell_hwr_fs_pane_g1

0x5069,	// (0x00053ae5) cell_hwr_fs_pane_g2_ParamLimits

0x5069,	// (0x00053ae5) cell_hwr_fs_pane_g2

0xd91e,	// (0x0005c39a) cell_hwr_fs_pane_g3_ParamLimits

0xd91e,	// (0x0005c39a) cell_hwr_fs_pane_g3

0xd92b,	// (0x0005c3a7) cell_hwr_fs_pane_g4_ParamLimits

0xd92b,	// (0x0005c3a7) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0005e282) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0005e282) cell_hwr_fs_pane_g

0xc6cd,	// (0x0005b149) cell_hwr_fs_pane_t1

0x33cb,	// (0x00051e47) grid_highlight_pane_cp6

0x33cb,	// (0x00051e47) main_idle_act2_pane

0x3e6e,	// (0x000528ea) aid_inside_area_popup_secondary

0xda03,	// (0x0005c47f) aid_inside_area_window_primary_ParamLimits

0xda03,	// (0x0005c47f) aid_inside_area_window_primary

0x6ab1,	// (0x0005552d) ai2_news_ticker_pane

0x6ab9,	// (0x00055535) aid_size_cell_ai1_link_ParamLimits

0x6ab9,	// (0x00055535) aid_size_cell_ai1_link

0xdda0,	// (0x0005c81c) popup_ai2_data_window_ParamLimits

0xdda0,	// (0x0005c81c) popup_ai2_data_window

0x6ae9,	// (0x00055565) popup_ai2_link_window_ParamLimits

0x6ae9,	// (0x00055565) popup_ai2_link_window

0x5268,	// (0x00053ce4) bg_popup_sub_pane_cp4_ParamLimits

0x5268,	// (0x00053ce4) bg_popup_sub_pane_cp4

0x6afd,	// (0x00055579) grid_ai2_link_pane_ParamLimits

0x6afd,	// (0x00055579) grid_ai2_link_pane

0x6b14,	// (0x00055590) popup_ai2_link_window_g1_ParamLimits

0x6b14,	// (0x00055590) popup_ai2_link_window_g1

0x6b20,	// (0x0005559c) popup_ai2_link_window_g2_ParamLimits

0x6b20,	// (0x0005559c) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0005e455) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0005e455) popup_ai2_link_window_g

0x6b2f,	// (0x000555ab) ai2_mp_button_pane

0x6b37,	// (0x000555b3) ai2_mp_volume_pane

0x547b,	// (0x00053ef7) bg_popup_sub_pane_cp5_ParamLimits

0x547b,	// (0x00053ef7) bg_popup_sub_pane_cp5

0x6b3f,	// (0x000555bb) heading_ai2_gene_pane_ParamLimits

0x6b3f,	// (0x000555bb) heading_ai2_gene_pane

0x6b4b,	// (0x000555c7) list_ai2_gene_pane_ParamLimits

0x6b4b,	// (0x000555c7) list_ai2_gene_pane

0x6b93,	// (0x0005560f) cell_ai2_link_pane_ParamLimits

0x6b93,	// (0x0005560f) cell_ai2_link_pane

0x6ba9,	// (0x00055625) cell_ai2_link_pane_g1

0x33cb,	// (0x00051e47) grid_highlight_pane_cp7

0x1b9b,	// (0x00050617) ai2_mp_volume_pane_g1

0x6c79,	// (0x000556f5) ai2_mp_volume_pane_g2

0xddca,	// (0x0005c846) list_ai2_gene_pane_t1

0x6c81,	// (0x000556fd) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0005e46e) ai2_mp_volume_pane_g

0x1ba3,	// (0x0005061f) volume_small_pane_cp3

0x6c89,	// (0x00055705) aid_size_cell_ai2_button

0x6c91,	// (0x0005570d) grid_ai2_button_pane

0x6c9a,	// (0x00055716) cell_ai2_button_pane_ParamLimits

0x6c9a,	// (0x00055716) cell_ai2_button_pane

0x33c1,	// (0x00051e3d) cell_ai2_button_pane_g1

0x33cb,	// (0x00051e47) grid_highlight_pane_cp8

0x6c39,	// (0x000556b5) ai2_gene_pane_t1_ParamLimits

0x6c39,	// (0x000556b5) ai2_gene_pane_t1

0xbf99,	// (0x0005aa15) aid_height_parent_landscape

0xdb4e,	// (0x0005c5ca) aid_height_set_list

0x65c4,	// (0x00055040) aid_size_parent

0x6896,	// (0x00055312) aid_size_cell_graphic_pane_ParamLimits

0x6b5b,	// (0x000555d7) popup_ai2_data_window_g1_ParamLimits

0x6b5b,	// (0x000555d7) popup_ai2_data_window_g1

0x6b67,	// (0x000555e3) ai2_news_ticker_pane_g1

0x6b6f,	// (0x000555eb) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0005e45a) ai2_news_ticker_pane_g

0x6b77,	// (0x000555f3) ai2_news_ticker_pane_t1

0x6b85,	// (0x00055601) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0005e45f) ai2_news_ticker_pane_t

0x6bb2,	// (0x0005562e) heading_ai2_gene_pane_g1

0x6bba,	// (0x00055636) heading_ai2_gene_pane_t1_ParamLimits

0x6bba,	// (0x00055636) heading_ai2_gene_pane_t1

0x6bcf,	// (0x0005564b) list_highlight_pane_cp6

0xddb4,	// (0x0005c830) ai2_gene_pane_ParamLimits

0xddb4,	// (0x0005c830) ai2_gene_pane

0xddd8,	// (0x0005c854) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0005e464) list_ai2_gene_pane_t

0x6c0a,	// (0x00055686) list_highlight_pane_cp8_ParamLimits

0x6c0a,	// (0x00055686) list_highlight_pane_cp8

0x6c1b,	// (0x00055697) ai2_gene_pane_g1_ParamLimits

0x6c1b,	// (0x00055697) ai2_gene_pane_g1

0x6c2d,	// (0x000556a9) ai2_gene_pane_g2_ParamLimits

0x6c2d,	// (0x000556a9) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0005e469) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0005e469) ai2_gene_pane_g

0x3cad,	// (0x00052729) scroll_pane_cp12

0xbf58,	// (0x0005a9d4) control_pane_t3_ParamLimits

0xbf58,	// (0x0005a9d4) control_pane_t3

0x4c15,	// (0x00053691) status_small_pane_g8_ParamLimits

0x4c15,	// (0x00053691) status_small_pane_g8

0xc0b4,	// (0x0005ab30) popup_find_window_ParamLimits

0xc33b,	// (0x0005adb7) popup_note_image_window_ParamLimits

0x1769,	// (0x000501e5) list_double2_graphic_pane_vc_g1_ParamLimits

0x1769,	// (0x000501e5) list_double2_graphic_pane_vc_g1

0x48d7,	// (0x00053353) list_double2_graphic_pane_vc_g2_ParamLimits

0x48d7,	// (0x00053353) list_double2_graphic_pane_vc_g2

0x2b00,	// (0x0005157c) list_double2_graphic_pane_vc_g3_ParamLimits

0x2b00,	// (0x0005157c) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005e245) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005e245) list_double2_graphic_pane_vc_g

0x1775,	// (0x000501f1) list_double2_graphic_pane_vc_t1_ParamLimits

0x1775,	// (0x000501f1) list_double2_graphic_pane_vc_t1

0x48d7,	// (0x00053353) list_single_heading_pane_vc_g1_ParamLimits

0x48d7,	// (0x00053353) list_single_heading_pane_vc_g1

0x2b00,	// (0x0005157c) list_single_heading_pane_vc_g2_ParamLimits

0x2b00,	// (0x0005157c) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005e054) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005e054) list_single_heading_pane_vc_g

0x17e0,	// (0x0005025c) list_single_heading_pane_vc_t1_ParamLimits

0x17e0,	// (0x0005025c) list_single_heading_pane_vc_t1

0x2b0c,	// (0x00051588) list_single_heading_pane_vc_t2_ParamLimits

0x2b0c,	// (0x00051588) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0005e266) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0005e266) list_single_heading_pane_vc_t

0x2b28,	// (0x000515a4) list_setting_number_pane_vc_g1_ParamLimits

0x2b28,	// (0x000515a4) list_setting_number_pane_vc_g1

0x2b34,	// (0x000515b0) list_setting_number_pane_vc_g2_ParamLimits

0x2b34,	// (0x000515b0) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0005e26b) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0005e26b) list_setting_number_pane_vc_g

0x2b40,	// (0x000515bc) list_setting_number_pane_vc_t1_ParamLimits

0x2b40,	// (0x000515bc) list_setting_number_pane_vc_t1

0x2b54,	// (0x000515d0) list_setting_number_pane_vc_t2_ParamLimits

0x2b54,	// (0x000515d0) list_setting_number_pane_vc_t2

0x2b70,	// (0x000515ec) list_setting_number_pane_vc_t3_ParamLimits

0x2b70,	// (0x000515ec) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0005e270) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0005e270) list_setting_number_pane_vc_t

0x2b9c,	// (0x00051618) set_value_pane_vc_ParamLimits

0x2b9c,	// (0x00051618) set_value_pane_vc

0x677c,	// (0x000551f8) list_double2_graphic_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_double2_graphic_pane_vc

0x2c6f,	// (0x000516eb) list_double2_large_graphic_pane_vc_ParamLimits

0x2c6f,	// (0x000516eb) list_double2_large_graphic_pane_vc

0x677c,	// (0x000551f8) list_double2_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_double2_pane_vc

0x677c,	// (0x000551f8) list_double_graphic_heading_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_double_graphic_heading_pane_vc

0x677c,	// (0x000551f8) list_double_graphic_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_double_graphic_pane_vc

0x677c,	// (0x000551f8) list_double_heading_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_double_heading_pane_vc

0x2c6f,	// (0x000516eb) list_double_large_graphic_pane_vc_ParamLimits

0x2c6f,	// (0x000516eb) list_double_large_graphic_pane_vc

0x677c,	// (0x000551f8) list_double_number_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_double_number_pane_vc

0x677c,	// (0x000551f8) list_double_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_double_pane_vc

0x677c,	// (0x000551f8) list_double_time_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_double_time_pane_vc

0x677c,	// (0x000551f8) list_setting_number_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_setting_number_pane_vc

0x677c,	// (0x000551f8) list_setting_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_setting_pane_vc

0x677c,	// (0x000551f8) list_single_graphic_heading_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_single_graphic_heading_pane_vc

0x677c,	// (0x000551f8) list_single_heading_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_single_heading_pane_vc

0x677c,	// (0x000551f8) list_single_number_heading_pane_vc_ParamLimits

0x677c,	// (0x000551f8) list_single_number_heading_pane_vc

0x1769,	// (0x000501e5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1769,	// (0x000501e5) list_double_graphic_heading_pane_vc_g1

0x48d7,	// (0x00053353) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x48d7,	// (0x00053353) list_double_graphic_heading_pane_vc_g2

0x2b00,	// (0x0005157c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2b00,	// (0x0005157c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c9,	// (0x0005e245) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005e245) list_double_graphic_heading_pane_vc_g

0x2d2e,	// (0x000517aa) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2d2e,	// (0x000517aa) list_double_graphic_heading_pane_vc_t1

0x2d4a,	// (0x000517c6) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2d4a,	// (0x000517c6) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f9,	// (0x0005e475) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f9,	// (0x0005e475) list_double_graphic_heading_pane_vc_t

0x2b28,	// (0x000515a4) list_setting_pane_vc_g1_ParamLimits

0x2b28,	// (0x000515a4) list_setting_pane_vc_g1

0x2b34,	// (0x000515b0) list_setting_pane_vc_g2_ParamLimits

0x2b34,	// (0x000515b0) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0005e26b) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0005e26b) list_setting_pane_vc_g

0x2d68,	// (0x000517e4) list_setting_pane_vc_t1_ParamLimits

0x2d68,	// (0x000517e4) list_setting_pane_vc_t1

0x2d84,	// (0x00051800) list_setting_pane_vc_t2_ParamLimits

0x2d84,	// (0x00051800) list_setting_pane_vc_t2

0x0001,

0xfa27,	// (0x0005e4a3) list_setting_pane_vc_t_ParamLimits

0xfa27,	// (0x0005e4a3) list_setting_pane_vc_t

0x2b9c,	// (0x00051618) set_value_pane_cp_vc_ParamLimits

0x2b9c,	// (0x00051618) set_value_pane_cp_vc

0x48d7,	// (0x00053353) list_single_number_heading_pane_vc_g1_ParamLimits

0x48d7,	// (0x00053353) list_single_number_heading_pane_vc_g1

0x2b00,	// (0x0005157c) list_single_number_heading_pane_vc_g2_ParamLimits

0x2b00,	// (0x0005157c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005e054) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005e054) list_single_number_heading_pane_vc_g

0x17e0,	// (0x0005025c) list_single_number_heading_pane_vc_t1_ParamLimits

0x17e0,	// (0x0005025c) list_single_number_heading_pane_vc_t1

0x2da0,	// (0x0005181c) list_single_number_heading_pane_vc_t2_ParamLimits

0x2da0,	// (0x0005181c) list_single_number_heading_pane_vc_t2

0x2db4,	// (0x00051830) list_single_number_heading_pane_vc_t3_ParamLimits

0x2db4,	// (0x00051830) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2c,	// (0x0005e4a8) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2c,	// (0x0005e4a8) list_single_number_heading_pane_vc_t

0x1769,	// (0x000501e5) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1769,	// (0x000501e5) list_single_graphic_heading_pane_vc_g1

0x48d7,	// (0x00053353) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x48d7,	// (0x00053353) list_single_graphic_heading_pane_vc_g4

0x2b00,	// (0x0005157c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2b00,	// (0x0005157c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c9,	// (0x0005e245) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c9,	// (0x0005e245) list_single_graphic_heading_pane_vc_g

0x17e0,	// (0x0005025c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x17e0,	// (0x0005025c) list_single_graphic_heading_pane_vc_t1

0x2dc6,	// (0x00051842) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2dc6,	// (0x00051842) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa33,	// (0x0005e4af) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa33,	// (0x0005e4af) list_single_graphic_heading_pane_vc_t

0x48d7,	// (0x00053353) list_double2_pane_vc_g1_ParamLimits

0x48d7,	// (0x00053353) list_double2_pane_vc_g1

0x2b00,	// (0x0005157c) list_double2_pane_vc_g2_ParamLimits

0x2b00,	// (0x0005157c) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005e054) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005e054) list_double2_pane_vc_g

0x2dda,	// (0x00051856) list_double2_pane_vc_t1_ParamLimits

0x2dda,	// (0x00051856) list_double2_pane_vc_t1

0x2df0,	// (0x0005186c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2df0,	// (0x0005186c) list_double2_large_graphic_pane_vc_g1

0x2dfc,	// (0x00051878) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2dfc,	// (0x00051878) list_double2_large_graphic_pane_vc_g2

0x2e08,	// (0x00051884) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2e08,	// (0x00051884) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x0005e06c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x0005e06c) list_double2_large_graphic_pane_vc_g

0x2e14,	// (0x00051890) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2e14,	// (0x00051890) list_double2_large_graphic_pane_vc_t1

0x2e2a,	// (0x000518a6) list_double_time_pane_vc_g1_ParamLimits

0x2e2a,	// (0x000518a6) list_double_time_pane_vc_g1

0x2e36,	// (0x000518b2) list_double_time_pane_vc_g2_ParamLimits

0x2e36,	// (0x000518b2) list_double_time_pane_vc_g2

0x0001,

0xfa38,	// (0x0005e4b4) list_double_time_pane_vc_g_ParamLimits

0xfa38,	// (0x0005e4b4) list_double_time_pane_vc_g

0x2e42,	// (0x000518be) list_double_time_pane_vc_t1_ParamLimits

0x2e42,	// (0x000518be) list_double_time_pane_vc_t1

0x2e66,	// (0x000518e2) list_double_time_pane_vc_t2_ParamLimits

0x2e66,	// (0x000518e2) list_double_time_pane_vc_t2

0x2eb5,	// (0x00051931) list_double_time_pane_vc_t3_ParamLimits

0x2eb5,	// (0x00051931) list_double_time_pane_vc_t3

0x2ec7,	// (0x00051943) list_double_time_pane_vc_t4_ParamLimits

0x2ec7,	// (0x00051943) list_double_time_pane_vc_t4

0x0003,

0xfa3d,	// (0x0005e4b9) list_double_time_pane_vc_t_ParamLimits

0xfa3d,	// (0x0005e4b9) list_double_time_pane_vc_t

0x48d7,	// (0x00053353) list_double_pane_vc_g1_ParamLimits

0x48d7,	// (0x00053353) list_double_pane_vc_g1

0x2b00,	// (0x0005157c) list_double_pane_vc_g2_ParamLimits

0x2b00,	// (0x0005157c) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005e054) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005e054) list_double_pane_vc_g

0x2edb,	// (0x00051957) list_double_pane_vc_t1_ParamLimits

0x2edb,	// (0x00051957) list_double_pane_vc_t1

0x2eef,	// (0x0005196b) list_double_pane_vc_t2_ParamLimits

0x2eef,	// (0x0005196b) list_double_pane_vc_t2

0x0001,

0xfa46,	// (0x0005e4c2) list_double_pane_vc_t_ParamLimits

0xfa46,	// (0x0005e4c2) list_double_pane_vc_t

0x48d7,	// (0x00053353) list_double_number_pane_vc_g1_ParamLimits

0x48d7,	// (0x00053353) list_double_number_pane_vc_g1

0x2b00,	// (0x0005157c) list_double_number_pane_vc_g2_ParamLimits

0x2b00,	// (0x0005157c) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005e054) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005e054) list_double_number_pane_vc_g

0x2f07,	// (0x00051983) list_double_number_pane_vc_t1_ParamLimits

0x2f07,	// (0x00051983) list_double_number_pane_vc_t1

0x2f19,	// (0x00051995) list_double_number_pane_vc_t2_ParamLimits

0x2f19,	// (0x00051995) list_double_number_pane_vc_t2

0x2f2d,	// (0x000519a9) list_double_number_pane_vc_t3_ParamLimits

0x2f2d,	// (0x000519a9) list_double_number_pane_vc_t3

0x0002,

0xfa4b,	// (0x0005e4c7) list_double_number_pane_vc_t_ParamLimits

0xfa4b,	// (0x0005e4c7) list_double_number_pane_vc_t

0x2f45,	// (0x000519c1) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2f45,	// (0x000519c1) list_double_large_graphic_pane_vc_g1

0x2f51,	// (0x000519cd) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2f51,	// (0x000519cd) list_double_large_graphic_pane_vc_g2

0x2e08,	// (0x00051884) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2e08,	// (0x00051884) list_double_large_graphic_pane_vc_g3

0x2f60,	// (0x000519dc) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2f60,	// (0x000519dc) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa52,	// (0x0005e4ce) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa52,	// (0x0005e4ce) list_double_large_graphic_pane_vc_g

0x2f6c,	// (0x000519e8) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2f6c,	// (0x000519e8) list_double_large_graphic_pane_vc_t1

0x2f80,	// (0x000519fc) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2f80,	// (0x000519fc) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5b,	// (0x0005e4d7) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5b,	// (0x0005e4d7) list_double_large_graphic_pane_vc_t

0x48d7,	// (0x00053353) list_double_heading_pane_vc_g1_ParamLimits

0x48d7,	// (0x00053353) list_double_heading_pane_vc_g1

0x2b00,	// (0x0005157c) list_double_heading_pane_vc_g2_ParamLimits

0x2b00,	// (0x0005157c) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005e054) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005e054) list_double_heading_pane_vc_g

0x2f99,	// (0x00051a15) list_double_heading_pane_vc_t1_ParamLimits

0x2f99,	// (0x00051a15) list_double_heading_pane_vc_t1

0x17e0,	// (0x0005025c) list_double_heading_pane_vc_t2_ParamLimits

0x17e0,	// (0x0005025c) list_double_heading_pane_vc_t2

0x0001,

0xfa60,	// (0x0005e4dc) list_double_heading_pane_vc_t_ParamLimits

0xfa60,	// (0x0005e4dc) list_double_heading_pane_vc_t

0x1769,	// (0x000501e5) list_double_graphic_pane_vc_g1_ParamLimits

0x1769,	// (0x000501e5) list_double_graphic_pane_vc_g1

0x2fad,	// (0x00051a29) list_double_graphic_pane_vc_g2_ParamLimits

0x2fad,	// (0x00051a29) list_double_graphic_pane_vc_g2

0x6cda,	// (0x00055756) list_double_graphic_pane_vc_g3_ParamLimits

0x6cda,	// (0x00055756) list_double_graphic_pane_vc_g3

0x0002,

0xfa65,	// (0x0005e4e1) list_double_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x0005e4e1) list_double_graphic_pane_vc_g

0x2fbc,	// (0x00051a38) list_double_graphic_pane_vc_t1_ParamLimits

0x2fbc,	// (0x00051a38) list_double_graphic_pane_vc_t1

0x2fd0,	// (0x00051a4c) list_double_graphic_pane_vc_t2_ParamLimits

0x2fd0,	// (0x00051a4c) list_double_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x0005e4e8) list_double_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x0005e4e8) list_double_graphic_pane_vc_t

0xf534,	// (0x0005dfb0) aid_size_cell_fastswap

0xb5d2,	// (0x0005a04e) aid_size_cell_touch_ParamLimits

0xb5d2,	// (0x0005a04e) aid_size_cell_touch

0x0222,	// (0x0004ec9e) popup_fast_swap_wide_window_ParamLimits

0x0222,	// (0x0004ec9e) popup_fast_swap_wide_window

0xb782,	// (0x0005a1fe) touch_pane_ParamLimits

0xb782,	// (0x0005a1fe) touch_pane

0x3d0f,	// (0x0005278b) button_value_adjust_pane_cp2

0x08a8,	// (0x0004f324) button_value_adjust_pane_cp4

0x08cc,	// (0x0004f348) form_field_data_pane_cp2

0xbc58,	// (0x0005a6d4) form_field_data_wide_pane_cp2

0x4180,	// (0x00052bfc) bg_scroll_pane_ParamLimits

0x0cb0,	// (0x0004f72c) scroll_handle_pane_ParamLimits

0x0cc4,	// (0x0004f740) scroll_sc2_down_pane_ParamLimits

0x0cc4,	// (0x0004f740) scroll_sc2_down_pane

0x41b1,	// (0x00052c2d) scroll_sc2_up_pane_ParamLimits

0x41b1,	// (0x00052c2d) scroll_sc2_up_pane

0xdf02,	// (0x0005c97e) grid_wheel_folder_pane_g1_ParamLimits

0xdf02,	// (0x0005c97e) grid_wheel_folder_pane_g1

0x0ef7,	// (0x0004f973) clock_nsta_pane_cp2_ParamLimits

0x0ef7,	// (0x0004f973) clock_nsta_pane_cp2

0x4cde,	// (0x0005375a) listscroll_midp_pane_ParamLimits

0xd3a1,	// (0x0005be1d) midp_canvas_pane

0x4c90,	// (0x0005370c) nsta_clock_indic_pane

0x4cc4,	// (0x00053740) listscroll_form_pane_vc

0x4ccc,	// (0x00053748) listscroll_set_pane_vc_ParamLimits

0x4ccc,	// (0x00053748) listscroll_set_pane_vc

0xd57d,	// (0x0005bff9) clock_nsta_pane

0xd5a7,	// (0x0005c023) indicator_nsta_pane

0x5132,	// (0x00053bae) bg_popup_sub_pane_cp2_ParamLimits

0x5146,	// (0x00053bc2) find_pane_cp2_ParamLimits

0x5146,	// (0x00053bc2) find_pane_cp2

0x515c,	// (0x00053bd8) grid_toobar_pane_ParamLimits

0x523c,	// (0x00053cb8) list_form_gen_pane_vc_ParamLimits

0x523c,	// (0x00053cb8) list_form_gen_pane_vc

0x5252,	// (0x00053cce) scroll_pane_cp8_vc_ParamLimits

0x5252,	// (0x00053cce) scroll_pane_cp8_vc

0x52ce,	// (0x00053d4a) data_form_wide_pane_vc_ParamLimits

0x52ce,	// (0x00053d4a) data_form_wide_pane_vc

0x52da,	// (0x00053d56) form_field_data_wide_pane_vc_g1

0x52e2,	// (0x00053d5e) form_field_data_wide_pane_vc_t1_ParamLimits

0x52e2,	// (0x00053d5e) form_field_data_wide_pane_vc_t1

0x3d23,	// (0x0005279f) input_focus_pane_cp6_vc_ParamLimits

0x3d23,	// (0x0005279f) input_focus_pane_cp6_vc

0xd9bd,	// (0x0005c439) list_midp_pane_ParamLimits

0x693e,	// (0x000553ba) scroll_pane_cp16_ParamLimits

0x693e,	// (0x000553ba) scroll_pane_cp16

0x5668,	// (0x000540e4) button_value_adjust_pane_ParamLimits

0x5668,	// (0x000540e4) button_value_adjust_pane

0xdb5f,	// (0x0005c5db) button_value_adjust_pane_cp6_ParamLimits

0xdb5f,	// (0x0005c5db) button_value_adjust_pane_cp6

0xdc79,	// (0x0005c6f5) settings_code_pane_cp_ParamLimits

0xdc79,	// (0x0005c6f5) settings_code_pane_cp

0x33c1,	// (0x00051e3d) cell_touch_pane_g1

0x33c1,	// (0x00051e3d) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0005e18a) cell_touch_pane_g

0xdde6,	// (0x0005c862) cell_touch_pane_cp_ParamLimits

0xdde6,	// (0x0005c862) cell_touch_pane_cp

0xde02,	// (0x0005c87e) cell_touch_pane_ParamLimits

0xde02,	// (0x0005c87e) cell_touch_pane

0x33c1,	// (0x00051e3d) scroll_sc2_down_pane_g1

0x33c1,	// (0x00051e3d) scroll_sc2_up_pane_g1

0x33cb,	// (0x00051e47) bg_set_opt_pane_cp4_vc

0x6cce,	// (0x0005574a) list_set_graphic_pane_vc_g1_ParamLimits

0x6cce,	// (0x0005574a) list_set_graphic_pane_vc_g1

0x6cda,	// (0x00055756) list_set_graphic_pane_vc_g2_ParamLimits

0x6cda,	// (0x00055756) list_set_graphic_pane_vc_g2

0x0001,

0xf9fe,	// (0x0005e47a) list_set_graphic_pane_vc_g_ParamLimits

0xf9fe,	// (0x0005e47a) list_set_graphic_pane_vc_g

0x6ce6,	// (0x00055762) text_primary_small_cp13_vc_ParamLimits

0x6ce6,	// (0x00055762) text_primary_small_cp13_vc

0x6cfe,	// (0x0005577a) list_set_graphic_pane_vc_ParamLimits

0x6cfe,	// (0x0005577a) list_set_graphic_pane_vc

0x33cb,	// (0x00051e47) input_focus_pane_cp2_vc

0x33c1,	// (0x00051e3d) setting_code_pane_vc_g1

0x34f6,	// (0x00051f72) setting_code_pane_vc_t1

0x6d10,	// (0x0005578c) set_text_pane_vc_t1_ParamLimits

0x6d10,	// (0x0005578c) set_text_pane_vc_t1

0x33cb,	// (0x00051e47) input_focus_pane_cp1_vc

0x6d2c,	// (0x000557a8) list_set_text_pane_vc

0x33c1,	// (0x00051e3d) setting_text_pane_vc_g1

0x33cb,	// (0x00051e47) bg_set_opt_pane_cp2_vc

0x34ed,	// (0x00051f69) setting_slider_graphic_pane_vc_g1

0x6d36,	// (0x000557b2) setting_slider_graphic_pane_vc_t1

0x6d46,	// (0x000557c2) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x0005e47f) setting_slider_graphic_pane_vc_t

0x6d56,	// (0x000557d2) slider_set_pane_cp_vc

0x6d5e,	// (0x000557da) slider_set_pane_vc_g1

0x6d67,	// (0x000557e3) slider_set_pane_vc_g2

0x0006,

0xfa08,	// (0x0005e484) slider_set_pane_vc_g

0x3d72,	// (0x000527ee) set_opt_bg_pane_g1_copy1

0x3d7a,	// (0x000527f6) set_opt_bg_pane_g2_copy1

0x6d93,	// (0x0005580f) set_opt_bg_pane_g3_copy1

0x3d8a,	// (0x00052806) set_opt_bg_pane_g4_copy1

0x3d92,	// (0x0005280e) set_opt_bg_pane_g5_copy1

0x3d9a,	// (0x00052816) set_opt_bg_pane_g6_copy1

0x6d9d,	// (0x00055819) set_opt_bg_pane_g7_copy1

0x6da5,	// (0x00055821) set_opt_bg_pane_g8_copy1

0x6daf,	// (0x0005582b) set_opt_bg_pane_g9_copy1

0x33cb,	// (0x00051e47) bg_set_opt_pane_cp_vc

0x6db9,	// (0x00055835) setting_slider_pane_vc_t1

0x6dc8,	// (0x00055844) setting_slider_pane_vc_t2

0x6dd8,	// (0x00055854) setting_slider_pane_vc_t3

0x0002,

0xfa17,	// (0x0005e493) setting_slider_pane_vc_t

0x6de8,	// (0x00055864) slider_set_pane_vc

0x18b7,	// (0x00050333) volume_set_pane_vc_g1

0x18c0,	// (0x0005033c) volume_set_pane_vc_g2

0x18c9,	// (0x00050345) volume_set_pane_vc_g3

0x18d2,	// (0x0005034e) volume_set_pane_vc_g4

0x18db,	// (0x00050357) volume_set_pane_vc_g5

0x18e4,	// (0x00050360) volume_set_pane_vc_g6

0x18ed,	// (0x00050369) volume_set_pane_vc_g7

0x18f6,	// (0x00050372) volume_set_pane_vc_g8

0x18ff,	// (0x0005037b) volume_set_pane_vc_g9

0x1908,	// (0x00050384) volume_set_pane_vc_g10

0x0009,

0xf8bc,	// (0x0005e338) volume_set_pane_vc_g

0x6df0,	// (0x0005586c) volume_set_pane_vc

0x6df8,	// (0x00055874) button_value_adjust_pane_cp1_vc

0x6e02,	// (0x0005587e) list_highlight_pane_cp2_vc

0x6e0b,	// (0x00055887) list_set_pane_vc_ParamLimits

0x6e0b,	// (0x00055887) list_set_pane_vc

0x6e69,	// (0x000558e5) main_pane_set_vc_t1_ParamLimits

0x6e69,	// (0x000558e5) main_pane_set_vc_t1

0x6e7e,	// (0x000558fa) main_pane_set_vc_t2_ParamLimits

0x6e7e,	// (0x000558fa) main_pane_set_vc_t2

0x6e90,	// (0x0005590c) main_pane_set_vc_t3_ParamLimits

0x6e90,	// (0x0005590c) main_pane_set_vc_t3

0x6ea4,	// (0x00055920) main_pane_set_vc_t4_ParamLimits

0x6ea4,	// (0x00055920) main_pane_set_vc_t4

0x0003,

0xfa1e,	// (0x0005e49a) main_pane_set_vc_t_ParamLimits

0xfa1e,	// (0x0005e49a) main_pane_set_vc_t

0x6eb8,	// (0x00055934) setting_code_pane_vc_ParamLimits

0x6eb8,	// (0x00055934) setting_code_pane_vc

0x6ec9,	// (0x00055945) setting_slider_graphic_pane_vc

0x6ec9,	// (0x00055945) setting_slider_pane_vc

0x6ec9,	// (0x00055945) setting_text_pane_vc

0x6ec9,	// (0x00055945) setting_volume_pane_vc

0x6ed3,	// (0x0005594f) scroll_pane_cp121_vc

0x3cfd,	// (0x00052779) set_content_pane_vc

0x6edb,	// (0x00055957) button_value_adjust_pane_g1

0x6ee4,	// (0x00055960) button_value_adjust_pane_g2

0x0001,

0xfa71,	// (0x0005e4ed) button_value_adjust_pane_g

0x6eed,	// (0x00055969) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6eed,	// (0x00055969) form_field_slider_wide_pane_vc_t1

0x6f01,	// (0x0005597d) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6f01,	// (0x0005597d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa76,	// (0x0005e4f2) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa76,	// (0x0005e4f2) form_field_slider_wide_pane_vc_t

0x3726,	// (0x000521a2) input_focus_pane_cp10_vc_ParamLimits

0x3726,	// (0x000521a2) input_focus_pane_cp10_vc

0x6f2f,	// (0x000559ab) slider_cont_pane_cp1_vc_ParamLimits

0x6f2f,	// (0x000559ab) slider_cont_pane_cp1_vc

0x6f41,	// (0x000559bd) slider_form_pane_g1_cp2

0x6d67,	// (0x000557e3) slider_form_pane_g2_cp2

0x6f6e,	// (0x000559ea) form_field_slider_pane_vc_t3

0x6f7c,	// (0x000559f8) form_field_slider_pane_vc_t4

0x6f8a,	// (0x00055a06) slider_form_pane_vc_ParamLimits

0x6f8a,	// (0x00055a06) slider_form_pane_vc

0x6f97,	// (0x00055a13) form_field_slider_pane_vc_t1_ParamLimits

0x6f97,	// (0x00055a13) form_field_slider_pane_vc_t1

0x6f01,	// (0x0005597d) form_field_slider_pane_vc_t2_ParamLimits

0x6f01,	// (0x0005597d) form_field_slider_pane_vc_t2

0x0001,

0xfa88,	// (0x0005e504) form_field_slider_pane_vc_t_ParamLimits

0xfa88,	// (0x0005e504) form_field_slider_pane_vc_t

0x3726,	// (0x000521a2) input_focus_pane_cp9_vc_ParamLimits

0x3726,	// (0x000521a2) input_focus_pane_cp9_vc

0x6fb3,	// (0x00055a2f) slider_cont_pane_vc_ParamLimits

0x6fb3,	// (0x00055a2f) slider_cont_pane_vc

0x6fc7,	// (0x00055a43) list_form_graphic_pane_cp_vc_ParamLimits

0x6fc7,	// (0x00055a43) list_form_graphic_pane_cp_vc

0x52da,	// (0x00053d56) form_field_popup_wide_pane_vc_g1

0x6fdc,	// (0x00055a58) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6fdc,	// (0x00055a58) form_field_popup_wide_pane_vc_t1

0x3d23,	// (0x0005279f) input_focus_pane_cp8_vc_ParamLimits

0x3d23,	// (0x0005279f) input_focus_pane_cp8_vc

0x7021,	// (0x00055a9d) list_form_wide_pane_vc_ParamLimits

0x7021,	// (0x00055a9d) list_form_wide_pane_vc

0x702d,	// (0x00055aa9) list_form_graphic_pane_vc_g1

0x7035,	// (0x00055ab1) list_form_graphic_pane_vc_t1_ParamLimits

0x7035,	// (0x00055ab1) list_form_graphic_pane_vc_t1

0x34ab,	// (0x00051f27) list_highlight_pane_cp5_vc_ParamLimits

0x34ab,	// (0x00051f27) list_highlight_pane_cp5_vc

0x7051,	// (0x00055acd) list_form_graphic_pane_vc_ParamLimits

0x7051,	// (0x00055acd) list_form_graphic_pane_vc

0x52da,	// (0x00053d56) form_field_popup_pane_vc_g1

0x7067,	// (0x00055ae3) form_field_popup_pane_vc_t1_ParamLimits

0x7067,	// (0x00055ae3) form_field_popup_pane_vc_t1

0x3d23,	// (0x0005279f) input_focus_pane_cp7_vc_ParamLimits

0x3d23,	// (0x0005279f) input_focus_pane_cp7_vc

0x707e,	// (0x00055afa) list_form_pane_vc_ParamLimits

0x707e,	// (0x00055afa) list_form_pane_vc

0x708a,	// (0x00055b06) data_form_pane_vc_t1_ParamLimits

0x708a,	// (0x00055b06) data_form_pane_vc_t1

0x3d72,	// (0x000527ee) input_focus_pane_vc_g1

0x3d7a,	// (0x000527f6) input_focus_pane_vc_g2

0x3d82,	// (0x000527fe) input_focus_pane_vc_g3

0x3d8a,	// (0x00052806) input_focus_pane_vc_g4

0x3d92,	// (0x0005280e) input_focus_pane_vc_g5

0x3d9a,	// (0x00052816) input_focus_pane_vc_g6

0x3da2,	// (0x0005281e) input_focus_pane_vc_g7

0x3daa,	// (0x00052826) input_focus_pane_vc_g8

0x3db2,	// (0x0005282e) input_focus_pane_vc_g9

0x33c1,	// (0x00051e3d) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0005e113) input_focus_pane_vc_g

0x52ce,	// (0x00053d4a) data_form_pane_vc_ParamLimits

0x52ce,	// (0x00053d4a) data_form_pane_vc

0x52da,	// (0x00053d56) form_field_data_pane_vc_g1

0x70a5,	// (0x00055b21) form_field_data_pane_vc_t1_ParamLimits

0x70a5,	// (0x00055b21) form_field_data_pane_vc_t1

0x3d23,	// (0x0005279f) input_focus_pane_vc_ParamLimits

0x3d23,	// (0x0005279f) input_focus_pane_vc

0x70bf,	// (0x00055b3b) button_value_adjust_pane_cp3_vc

0x70c7,	// (0x00055b43) button_value_adjust_pane_cp5_vc

0x70cf,	// (0x00055b4b) form_field_data_pane_vc_ParamLimits

0x70cf,	// (0x00055b4b) form_field_data_pane_vc

0x70e6,	// (0x00055b62) form_field_data_pane_vc_cp2

0x70ee,	// (0x00055b6a) form_field_data_wide_pane_vc_ParamLimits

0x70ee,	// (0x00055b6a) form_field_data_wide_pane_vc

0x7104,	// (0x00055b80) form_field_data_wide_pane_vc_cp2

0x710c,	// (0x00055b88) form_field_popup_pane_vc_ParamLimits

0x710c,	// (0x00055b88) form_field_popup_pane_vc

0x7123,	// (0x00055b9f) form_field_popup_wide_pane_vc_ParamLimits

0x7123,	// (0x00055b9f) form_field_popup_wide_pane_vc

0x7139,	// (0x00055bb5) form_field_slider_pane_vc_ParamLimits

0x7139,	// (0x00055bb5) form_field_slider_pane_vc

0x714c,	// (0x00055bc8) form_field_slider_wide_pane_vc_ParamLimits

0x714c,	// (0x00055bc8) form_field_slider_wide_pane_vc

0xde20,	// (0x0005c89c) grid_touch_1_pane_ParamLimits

0xde20,	// (0x0005c89c) grid_touch_1_pane

0xde34,	// (0x0005c8b0) grid_touch_2_pane_ParamLimits

0xde34,	// (0x0005c8b0) grid_touch_2_pane

0x7221,	// (0x00055c9d) touch_pane_g1_ParamLimits

0x7221,	// (0x00055c9d) touch_pane_g1

0x7183,	// (0x00055bff) cell_app_pane_cp_wide_ParamLimits

0x7183,	// (0x00055bff) cell_app_pane_cp_wide

0x7194,	// (0x00055c10) grid_popup_fast_wide_pane_ParamLimits

0x7194,	// (0x00055c10) grid_popup_fast_wide_pane

0x71a8,	// (0x00055c24) scroll_pane_cp19_ParamLimits

0x71a8,	// (0x00055c24) scroll_pane_cp19

0x33cb,	// (0x00051e47) bg_popup_window_pane_cp20

0x71bc,	// (0x00055c38) listscroll_popup_fast_wide_pane

0x3eda,	// (0x00052956) grid_indicator_nsta_pane

0x71c4,	// (0x00055c40) clock_nsta_pane_g1

0x71cd,	// (0x00055c49) clock_nsta_pane_t1

0xde5e,	// (0x0005c8da) cell_indicator_nsta_pane_ParamLimits

0xde5e,	// (0x0005c8da) cell_indicator_nsta_pane

0x7221,	// (0x00055c9d) cell_indicator_nsta_pane_g1

0xde77,	// (0x0005c8f3) cell_indicator_nsta_pane_g2

0x0001,

0xfa99,	// (0x0005e515) cell_indicator_nsta_pane_g

0x7245,	// (0x00055cc1) clock_nsta_pane_cp

0x724d,	// (0x00055cc9) indicator_nsta_pane_cp

0x7255,	// (0x00055cd1) nsta_clock_indic_pane_g1

0x3574,	// (0x00051ff0) grid_indicator_pane

0x42a6,	// (0x00052d22) scroll_pane_cp29

0x0e46,	// (0x0004f8c2) indicator_nsta_pane_cp2_ParamLimits

0x0e46,	// (0x0004f8c2) indicator_nsta_pane_cp2

0x34ab,	// (0x00051f27) main_apps_wheel_pane

0x54ef,	// (0x00053f6b) form_midp_field_text_pane_ParamLimits

0x563a,	// (0x000540b6) scroll_bar_cp050_ParamLimits

0x72ae,	// (0x00055d2a) cell_indicator_pane_ParamLimits

0x72ae,	// (0x00055d2a) cell_indicator_pane

0x72c5,	// (0x00055d41) cell_indicator_pane_g1

0xde8c,	// (0x0005c908) grid_wheel_folder_pane_ParamLimits

0xde8c,	// (0x0005c908) grid_wheel_folder_pane

0xde9a,	// (0x0005c916) list_wheel_apps_pane_ParamLimits

0xde9a,	// (0x0005c916) list_wheel_apps_pane

0xdea8,	// (0x0005c924) main_apps_wheel_pane_g1_ParamLimits

0xdea8,	// (0x0005c924) main_apps_wheel_pane_g1

0xdeb4,	// (0x0005c930) main_apps_wheel_pane_g2_ParamLimits

0xdeb4,	// (0x0005c930) main_apps_wheel_pane_g2

0x0001,

0xfab5,	// (0x0005e531) main_apps_wheel_pane_g_ParamLimits

0xfab5,	// (0x0005e531) main_apps_wheel_pane_g

0xdec2,	// (0x0005c93e) main_apps_wheel_pane_t1_ParamLimits

0xdec2,	// (0x0005c93e) main_apps_wheel_pane_t1

0xded6,	// (0x0005c952) list_wheel_apps_pane_g1

0xdede,	// (0x0005c95a) list_wheel_apps_pane_g2

0xdee6,	// (0x0005c962) list_wheel_apps_pane_g3

0xdeee,	// (0x0005c96a) list_wheel_apps_pane_g4

0xdef8,	// (0x0005c974) list_wheel_apps_pane_g5

0x0004,

0xfaba,	// (0x0005e536) list_wheel_apps_pane_g

0x481e,	// (0x0005329a) navi_icon_text_pane

0xd471,	// (0x0005beed) aid_fill_nsta

0x738a,	// (0x00055e06) navi_icon_text_pane_g1

0x7396,	// (0x00055e12) navi_icon_text_pane_t1

0xd389,	// (0x0005be05) list_set_graphic_pane_t1_ParamLimits

0xd389,	// (0x0005be05) list_set_graphic_pane_t1

0x5d89,	// (0x00054805) popup_midp_note_alarm_window_t6_ParamLimits

0x5d89,	// (0x00054805) popup_midp_note_alarm_window_t6

0x5d9b,	// (0x00054817) popup_midp_note_alarm_window_t7_ParamLimits

0x5d9b,	// (0x00054817) popup_midp_note_alarm_window_t7

0x5dad,	// (0x00054829) popup_midp_note_alarm_window_t8_ParamLimits

0x5dad,	// (0x00054829) popup_midp_note_alarm_window_t8

0x5dbf,	// (0x0005483b) popup_midp_note_alarm_window_t9_ParamLimits

0x5dbf,	// (0x0005483b) popup_midp_note_alarm_window_t9

0x5dd1,	// (0x0005484d) popup_midp_note_alarm_window_t10_ParamLimits

0x5dd1,	// (0x0005484d) popup_midp_note_alarm_window_t10

0x5de3,	// (0x0005485f) popup_midp_note_alarm_window_t11_ParamLimits

0x5de3,	// (0x0005485f) popup_midp_note_alarm_window_t11

0x5df5,	// (0x00054871) scroll_pane_cp17_ParamLimits

0x5df5,	// (0x00054871) scroll_pane_cp17

0x18b7,	// (0x00050333) volume_small_pane_cp_g1

0x1bac,	// (0x00050628) volume_small_pane_cp_g2

0x1bb5,	// (0x00050631) volume_small_pane_cp_g3

0x1bbe,	// (0x0005063a) volume_small_pane_cp_g4

0x1bc7,	// (0x00050643) volume_small_pane_cp_g5

0x1bd0,	// (0x0005064c) volume_small_pane_cp_g6

0x1bd9,	// (0x00050655) volume_small_pane_cp_g7

0x1be2,	// (0x0005065e) volume_small_pane_cp_g8

0x1beb,	// (0x00050667) volume_small_pane_cp_g9

0x1bf4,	// (0x00050670) volume_small_pane_cp_g10

0x4a6d,	// (0x000534e9) midp_ticker_pane_g1_ParamLimits

0x4a79,	// (0x000534f5) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0005e1df) midp_ticker_pane_g_ParamLimits

0x4a85,	// (0x00053501) midp_ticker_pane_t1_ParamLimits

0xd495,	// (0x0005bf11) aid_fill_nsta_2

0x5626,	// (0x000540a2) list_form2_midp_pane

0x674b,	// (0x000551c7) midp_editing_number_pane_ParamLimits

0x675a,	// (0x000551d6) midp_ticker_pane_ParamLimits

0x73a8,	// (0x00055e24) form2_midp_field_pane

0x73cc,	// (0x00055e48) scroll_pane_cp51

0x73ec,	// (0x00055e68) form2_midp_button_pane_ParamLimits

0x73ec,	// (0x00055e68) form2_midp_button_pane

0x73fe,	// (0x00055e7a) form2_midp_content_pane_ParamLimits

0x73fe,	// (0x00055e7a) form2_midp_content_pane

0x7418,	// (0x00055e94) form2_midp_field_choice_group_pane

0x7420,	// (0x00055e9c) form2_midp_field_pane_g1

0x7428,	// (0x00055ea4) form2_midp_field_pane_g2

0x7430,	// (0x00055eac) form2_midp_field_pane_g3

0x7438,	// (0x00055eb4) form2_midp_field_pane_g4

0x0003,

0xfadf,	// (0x0005e55b) form2_midp_field_pane_g

0x7440,	// (0x00055ebc) form2_midp_gauge_slider_pane

0x7448,	// (0x00055ec4) form2_midp_gauge_wait_pane

0x7450,	// (0x00055ecc) form2_midp_image_pane_ParamLimits

0x7450,	// (0x00055ecc) form2_midp_image_pane

0x746b,	// (0x00055ee7) form2_midp_label_pane_ParamLimits

0x746b,	// (0x00055ee7) form2_midp_label_pane

0xdf2b,	// (0x0005c9a7) form2_midp_label_pane_cp_ParamLimits

0xdf2b,	// (0x0005c9a7) form2_midp_label_pane_cp

0x74a5,	// (0x00055f21) form2_midp_string_pane_ParamLimits

0x74a5,	// (0x00055f21) form2_midp_string_pane

0xc72f,	// (0x0005b1ab) form2_midp_text_pane_ParamLimits

0xc72f,	// (0x0005b1ab) form2_midp_text_pane

0x74b7,	// (0x00055f33) form2_midp_time_pane

0x74c7,	// (0x00055f43) input_focus_pane_cp51_ParamLimits

0x74c7,	// (0x00055f43) input_focus_pane_cp51

0x74df,	// (0x00055f5b) form2_midp_label_pane_t1_ParamLimits

0x74df,	// (0x00055f5b) form2_midp_label_pane_t1

0xc74e,	// (0x0005b1ca) form2_mdip_text_pane_t1_ParamLimits

0xc74e,	// (0x0005b1ca) form2_mdip_text_pane_t1

0x3025,	// (0x00051aa1) form2_midp_time_pane_t1

0x7528,	// (0x00055fa4) form2_midp_gauge_slider_pane_t1

0xdf4a,	// (0x0005c9c6) form2_midp_gauge_slider_pane_t2

0xdf5c,	// (0x0005c9d8) form2_midp_gauge_slider_pane_t3

0x0002,

0xfae8,	// (0x0005e564) form2_midp_gauge_slider_pane_t

0x755e,	// (0x00055fda) form2_midp_slider_pane

0x756a,	// (0x00055fe6) form2_midp_gauge_wait_pane_t1

0x7578,	// (0x00055ff4) form2_midp_wait_pane_ParamLimits

0x7578,	// (0x00055ff4) form2_midp_wait_pane

0xdf6e,	// (0x0005c9ea) list_single_2graphic_pane_cp4_ParamLimits

0xdf6e,	// (0x0005c9ea) list_single_2graphic_pane_cp4

0xd94b,	// (0x0005c3c7) list_single_midp_graphic_pane_cp_ParamLimits

0xd94b,	// (0x0005c3c7) list_single_midp_graphic_pane_cp

0x33cb,	// (0x00051e47) list_highlight_pane_cp20

0x75d2,	// (0x0005604e) list_single_2graphic_pane_g1_cp4

0x75da,	// (0x00056056) list_single_2graphic_pane_g2_cp4

0x75e2,	// (0x0005605e) list_single_2graphic_pane_t1_cp4

0x34ab,	// (0x00051f27) list_highlight_pane_cp21

0x75f1,	// (0x0005606d) list_single_midp_graphic_pane_g4_cp

0x7600,	// (0x0005607c) list_single_midp_graphic_pane_t1_cp

0xdf82,	// (0x0005c9fe) form2_mdip_string_pane_t1_ParamLimits

0xdf82,	// (0x0005c9fe) form2_mdip_string_pane_t1

0x33cb,	// (0x00051e47) bg_wml_button_pane_cp2

0x33c1,	// (0x00051e3d) form2_midp_image_pane_g1

0x2aaf,	// (0x0005152b) list_double_large_graphic_pane_g5_ParamLimits

0x2aaf,	// (0x0005152b) list_double_large_graphic_pane_g5

0x4cde,	// (0x0005375a) midp_form_pane_ParamLimits

0x34ab,	// (0x00051f27) main_apps_wheel_pane_ParamLimits

0xc3b9,	// (0x0005ae35) popup_preview_window_ParamLimits

0xc3b9,	// (0x0005ae35) popup_preview_window

0x16e4,	// (0x00050160) popup_touch_info_window_ParamLimits

0x16e4,	// (0x00050160) popup_touch_info_window

0x1702,	// (0x0005017e) popup_touch_menu_window_ParamLimits

0x1702,	// (0x0005017e) popup_touch_menu_window

0x33b7,	// (0x00051e33) bg_popup_sub_pane_cp6

0x770e,	// (0x0005618a) list_touch_menu_pane

0x7716,	// (0x00056192) list_single_touch_menu_pane_ParamLimits

0x7716,	// (0x00056192) list_single_touch_menu_pane

0x772c,	// (0x000561a8) list_single_touch_menu_pane_t1

0x34ab,	// (0x00051f27) bg_popup_sub_pane_cp7_ParamLimits

0x34ab,	// (0x00051f27) bg_popup_sub_pane_cp7

0x773a,	// (0x000561b6) heading_sub_pane

0x7742,	// (0x000561be) list_touch_info_pane_ParamLimits

0x7742,	// (0x000561be) list_touch_info_pane

0x7751,	// (0x000561cd) list_single_touch_info_pane_ParamLimits

0x7751,	// (0x000561cd) list_single_touch_info_pane

0x7763,	// (0x000561df) list_single_touch_info_pane_t1

0x7771,	// (0x000561ed) list_single_touch_info_pane_t2

0x0001,

0xfaf6,	// (0x0005e572) list_single_touch_info_pane_t

0x499e,	// (0x0005341a) bg_popup_heading_pane_cp

0x777f,	// (0x000561fb) heading_sub_pane_t1

0x5268,	// (0x00053ce4) bg_popup_preview_window_pane_cp_ParamLimits

0x5268,	// (0x00053ce4) bg_popup_preview_window_pane_cp

0x773a,	// (0x000561b6) heading_preview_pane

0x7742,	// (0x000561be) list_preview_pane_ParamLimits

0x7742,	// (0x000561be) list_preview_pane

0x778d,	// (0x00056209) popup_preview_window_g1

0x7751,	// (0x000561cd) list_single_preview_pane_ParamLimits

0x7751,	// (0x000561cd) list_single_preview_pane

0x7795,	// (0x00056211) list_single_preview_pane_g1

0x779d,	// (0x00056219) list_single_preview_pane_t1

0x7763,	// (0x000561df) list_single_preview_pane_t2

0x0001,

0xfafb,	// (0x0005e577) list_single_preview_pane_t

0x77ab,	// (0x00056227) bg_popup_heading_pane_cp2_ParamLimits

0x77ab,	// (0x00056227) bg_popup_heading_pane_cp2

0x77c1,	// (0x0005623d) heading_preview_pane_g1

0x77c9,	// (0x00056245) heading_preview_pane_t1_ParamLimits

0x77c9,	// (0x00056245) heading_preview_pane_t1

0x3597,	// (0x00052013) soft_indicator_pane_t1_ParamLimits

0x3c8a,	// (0x00052706) scroll_pane_ParamLimits

0x419f,	// (0x00052c1b) scroll_sc2_left_pane

0x41a8,	// (0x00052c24) scroll_sc2_right_pane

0x41c7,	// (0x00052c43) scroll_bg_pane_g1_ParamLimits

0x41dc,	// (0x00052c58) scroll_bg_pane_g2_ParamLimits

0x41f4,	// (0x00052c70) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0005e16a) scroll_bg_pane_g_ParamLimits

0x41c7,	// (0x00052c43) scroll_handle_pane_g1_ParamLimits

0x4216,	// (0x00052c92) scroll_handle_pane_g2_ParamLimits

0x41f4,	// (0x00052c70) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0005e171) scroll_handle_pane_g_ParamLimits

0x11ac,	// (0x0004fc28) popup_choice_list_window_ParamLimits

0x11ac,	// (0x0004fc28) popup_choice_list_window

0x513e,	// (0x00053bba) choice_list_pane

0x51c0,	// (0x00053c3c) cell_toolbar_pane_t1

0x51e8,	// (0x00053c64) toolbar_button_pane_ParamLimits

0x62af,	// (0x00054d2b) ai_gene_pane_1_t2_ParamLimits

0x62af,	// (0x00054d2b) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0005e394) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0005e394) ai_gene_pane_1_t

0x77e6,	// (0x00056262) scroll_sc2_left_pane_g1

0x77e6,	// (0x00056262) scroll_sc2_right_pane_g1

0x4cde,	// (0x0005375a) bg_popup_sub_pane_cp10

0x77f0,	// (0x0005626c) list_choice_list_pane

0x7809,	// (0x00056285) list_single_choice_list_pane_ParamLimits

0x7809,	// (0x00056285) list_single_choice_list_pane

0x781c,	// (0x00056298) list_single_choice_list_pane_g1

0x3eab,	// (0x00052927) list_single_choice_list_pane_t1_ParamLimits

0x3eab,	// (0x00052927) list_single_choice_list_pane_t1

0x7824,	// (0x000562a0) choice_list_pane_g1

0x782c,	// (0x000562a8) choice_list_pane_t1

0x33b7,	// (0x00051e33) input_focus_pane_cp11

0x4082,	// (0x00052afe) title_pane_stacon_g2_ParamLimits

0x4082,	// (0x00052afe) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0005e150) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0005e150) title_pane_stacon_g

0x499e,	// (0x0005341a) cursor_press_pane

0xc06c,	// (0x0005aae8) popup_fep_hwr_window_ParamLimits

0xc06c,	// (0x0005aae8) popup_fep_hwr_window

0x12d2,	// (0x0004fd4e) popup_fep_vkb_window_ParamLimits

0x12d2,	// (0x0004fd4e) popup_fep_vkb_window

0x783a,	// (0x000562b6) cursor_press_pane_g1

0x0002,

0xfb24,	// (0x0005e5a0) fep_vkb_side_pane_g_ParamLimits

0x1c36,	// (0x000506b2) fep_hwr_candidate_pane_ParamLimits

0x1c36,	// (0x000506b2) fep_hwr_candidate_pane

0x1c60,	// (0x000506dc) fep_hwr_side_pane_ParamLimits

0x1c60,	// (0x000506dc) fep_hwr_side_pane

0x1c80,	// (0x000506fc) fep_hwr_top_pane_ParamLimits

0x1c80,	// (0x000506fc) fep_hwr_top_pane

0x1c98,	// (0x00050714) fep_hwr_write_pane_ParamLimits

0x1c98,	// (0x00050714) fep_hwr_write_pane

0xfb24,	// (0x0005e5a0) fep_vkb_side_pane_g

0x7842,	// (0x000562be) fep_hwr_top_pane_g1

0x7854,	// (0x000562d0) fep_hwr_top_pane_g2

0x1cd2,	// (0x0005074e) fep_hwr_top_pane_g3

0x0002,

0xfb00,	// (0x0005e57c) fep_hwr_top_pane_g

0x1ce7,	// (0x00050763) fep_hwr_top_text_pane

0x4396,	// (0x00052e12) fep_hwr_top_text_pane_g1

0x788a,	// (0x00056306) fep_hwr_top_text_pane_t1

0x1ddd,	// (0x00050859) fep_hwr_candidate_pane_g1

0x7add,	// (0x00056559) fep_vkb_keypad_pane_g3_ParamLimits

0x7add,	// (0x00056559) fep_vkb_keypad_pane_g3

0x7b11,	// (0x0005658d) fep_vkb_keypad_pane_g4_ParamLimits

0x7b11,	// (0x0005658d) fep_vkb_keypad_pane_g4

0x7b80,	// (0x000565fc) fep_vkb_bottom_pane_g2_ParamLimits

0x7b80,	// (0x000565fc) fep_vkb_bottom_pane_g2

0x0001,

0xfb2b,	// (0x0005e5a7) fep_vkb_bottom_pane_g_ParamLimits

0xfb2b,	// (0x0005e5a7) fep_vkb_bottom_pane_g

0x77e6,	// (0x00056262) cell_vkb_side_pane_g2

0x0001,

0xfb35,	// (0x0005e5b1) cell_vkb_side_pane_g

0x7c0b,	// (0x00056687) cell_vkb_side_pane_t1

0x7c19,	// (0x00056695) cell_vkb_side_pane_t1_copy1

0x77e6,	// (0x00056262) bg_fep_vkb_candidate_pane_g2

0x7d45,	// (0x000567c1) cell_vkb_candidate_pane_ParamLimits

0x7898,	// (0x00056314) aid_size_cell_vkb_ParamLimits

0x7898,	// (0x00056314) aid_size_cell_vkb

0x7d45,	// (0x000567c1) cell_vkb_candidate_pane

0x1e04,	// (0x00050880) bg_popup_fep_shadow_pane_g1

0xe006,	// (0x0005ca82) fep_vkb_bottom_pane_ParamLimits

0xe006,	// (0x0005ca82) fep_vkb_bottom_pane

0x795c,	// (0x000563d8) fep_vkb_candidate_pane_ParamLimits

0x795c,	// (0x000563d8) fep_vkb_candidate_pane

0xe02b,	// (0x0005caa7) fep_vkb_keypad_pane_ParamLimits

0xe02b,	// (0x0005caa7) fep_vkb_keypad_pane

0xe067,	// (0x0005cae3) fep_vkb_side_pane_ParamLimits

0xe067,	// (0x0005cae3) fep_vkb_side_pane

0xe0a3,	// (0x0005cb1f) fep_vkb_top_pane_ParamLimits

0xe0a3,	// (0x0005cb1f) fep_vkb_top_pane

0x7a36,	// (0x000564b2) fep_vkb_top_pane_g1_ParamLimits

0x7a36,	// (0x000564b2) fep_vkb_top_pane_g1

0x7a45,	// (0x000564c1) fep_vkb_top_pane_g2_ParamLimits

0x7a45,	// (0x000564c1) fep_vkb_top_pane_g2

0x7a54,	// (0x000564d0) fep_vkb_top_pane_g3_ParamLimits

0x7a54,	// (0x000564d0) fep_vkb_top_pane_g3

0x0003,

0xfb1b,	// (0x0005e597) fep_vkb_top_pane_g_ParamLimits

0xfb1b,	// (0x0005e597) fep_vkb_top_pane_g

0x7a72,	// (0x000564ee) fep_vkb_top_text_pane_ParamLimits

0x7a72,	// (0x000564ee) fep_vkb_top_text_pane

0xe0df,	// (0x0005cb5b) fep_vkb_side_pane_g1_ParamLimits

0xe0df,	// (0x0005cb5b) fep_vkb_side_pane_g1

0x7acc,	// (0x00056548) grid_vkb_side_pane_ParamLimits

0x7acc,	// (0x00056548) grid_vkb_side_pane

0x1e0c,	// (0x00050888) bg_popup_fep_shadow_pane_g2

0x1e15,	// (0x00050891) bg_popup_fep_shadow_pane_g3

0x1e1d,	// (0x00050899) bg_popup_fep_shadow_pane_g4

0x1e26,	// (0x000508a2) bg_popup_fep_shadow_pane_g5

0x1e30,	// (0x000508ac) bg_popup_fep_shadow_pane_g6

0x1e38,	// (0x000508b4) bg_popup_fep_shadow_pane_g7

0x3d8a,	// (0x00052806) bg_popup_fep_shadow_pane_g8

0x7b2f,	// (0x000565ab) grid_vkb_keypad_number_pane_ParamLimits

0x7b2f,	// (0x000565ab) grid_vkb_keypad_number_pane

0x7b3f,	// (0x000565bb) grid_vkb_keypad_pane_ParamLimits

0x7b3f,	// (0x000565bb) grid_vkb_keypad_pane

0x7b65,	// (0x000565e1) fep_vkb_bottom_pane_g1_ParamLimits

0x7b65,	// (0x000565e1) fep_vkb_bottom_pane_g1

0x7b8e,	// (0x0005660a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7b8e,	// (0x0005660a) grid_vkb_keypad_bottom_left_pane

0x7ba3,	// (0x0005661f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7ba3,	// (0x0005661f) grid_vkb_keypad_bottom_right_pane

0x7bb8,	// (0x00056634) fep_vkb_top_text_pane_g1

0xe126,	// (0x0005cba2) fep_vkb_top_text_pane_t1

0xe138,	// (0x0005cbb4) cell_vkb_side_pane_ParamLimits

0xe138,	// (0x0005cbb4) cell_vkb_side_pane

0x77e6,	// (0x00056262) cell_vkb_side_pane_g1

0x7c27,	// (0x000566a3) cell_vkb_keypad_pane_ParamLimits

0x7c27,	// (0x000566a3) cell_vkb_keypad_pane

0x7c9c,	// (0x00056718) cell_vkb_keypad_pane_g1

0x0008,

0xfb48,	// (0x0005e5c4) bg_popup_fep_shadow_pane_g

0x1e4a,	// (0x000508c6) cell_hwr_side_pane_g1

0x1e4a,	// (0x000508c6) cell_hwr_side_pane_g2

0x7ca6,	// (0x00056722) cell_vkb_keypad_pane_t1

0xe14e,	// (0x0005cbca) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe14e,	// (0x0005cbca) cell_vkb_keypad_bottom_left_pane

0xe163,	// (0x0005cbdf) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe163,	// (0x0005cbdf) cell_vkb_keypad_bottom_right_pane

0x77e6,	// (0x00056262) cell_vkb_keypad_bottom_left_pane_g1

0x77e6,	// (0x00056262) cell_vkb_keypad_bottom_right_pane_g1

0x7d0a,	// (0x00056786) cell_vkb_keypad_number_pane_ParamLimits

0x7d0a,	// (0x00056786) cell_vkb_keypad_number_pane

0x7d29,	// (0x000567a5) cell_vkb_keypad_number_pane_g1

0x7d33,	// (0x000567af) cell_vkb_keypad_number_pane_g2

0x7d3c,	// (0x000567b8) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3a,	// (0x0005e5b6) cell_vkb_keypad_number_pane_g

0x7ca6,	// (0x00056722) cell_vkb_keypad_number_pane_t1

0x7d60,	// (0x000567dc) fep_vkb_candidate_pane_g1

0x0001,

0xfb5b,	// (0x0005e5d7) cell_hwr_side_pane_g

0x7d79,	// (0x000567f5) cell_hwr_side_pane_t1

0x1e54,	// (0x000508d0) cell_hwr_side_pane_t1_copy1

0x1e62,	// (0x000508de) cell_hwr_candidate_pane_g1

0x1e91,	// (0x0005090d) cell_hwr_candidate_pane_t1

0x77e6,	// (0x00056262) cell_vkb_candidate_pane_g2

0x7dbd,	// (0x00056839) cell_vkb_candidate_pane_t1

0x1bfd,	// (0x00050679) bg_popup_fep_shadow_pane_ParamLimits

0x1bfd,	// (0x00050679) bg_popup_fep_shadow_pane

0x1cb2,	// (0x0005072e) bg_fep_hwr_top_pane_g4

0x7866,	// (0x000562e2) bg_hwr_side_pane_g1_ParamLimits

0x7866,	// (0x000562e2) bg_hwr_side_pane_g1

0xc780,	// (0x0005b1fc) cell_hwr_side_pane_ParamLimits

0xc780,	// (0x0005b1fc) cell_hwr_side_pane

0x1d5e,	// (0x000507da) fep_hwr_write_pane_g1_ParamLimits

0x1d5e,	// (0x000507da) fep_hwr_write_pane_g1

0x1d6b,	// (0x000507e7) fep_hwr_write_pane_g2_ParamLimits

0x1d6b,	// (0x000507e7) fep_hwr_write_pane_g2

0x1d78,	// (0x000507f4) fep_hwr_write_pane_g3_ParamLimits

0x1d78,	// (0x000507f4) fep_hwr_write_pane_g3

0xc7a0,	// (0x0005b21c) fep_hwr_write_pane_g4_ParamLimits

0xc7a0,	// (0x0005b21c) fep_hwr_write_pane_g4

0x0005,

0xfb07,	// (0x0005e583) fep_hwr_write_pane_g_ParamLimits

0xfb07,	// (0x0005e583) fep_hwr_write_pane_g

0x1cb2,	// (0x0005072e) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1cb2,	// (0x0005072e) bg_fep_hwr_candidate_pane_g2

0x1d9b,	// (0x00050817) cell_hwr_candidate_pane_ParamLimits

0x1d9b,	// (0x00050817) cell_hwr_candidate_pane

0x1ddd,	// (0x00050859) fep_hwr_candidate_pane_g1_ParamLimits

0x78c6,	// (0x00056342) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x78c6,	// (0x00056342) bg_popup_fep_shadow_pane_cp2

0x7a64,	// (0x000564e0) fep_vkb_top_pane_g4_ParamLimits

0x7a64,	// (0x000564e0) fep_vkb_top_pane_g4

0x7aaa,	// (0x00056526) fep_vkb_side_pane_g2_ParamLimits

0x7aaa,	// (0x00056526) fep_vkb_side_pane_g2

0xbb66,	// (0x0005a5e2) list_setting_pane_t4_ParamLimits

0xbb66,	// (0x0005a5e2) list_setting_pane_t4

0xbc00,	// (0x0005a67c) list_setting_number_pane_t5_ParamLimits

0xbc00,	// (0x0005a67c) list_setting_number_pane_t5

0x43cd,	// (0x00052e49) list_double_heading_pane_cp2_ParamLimits

0x43cd,	// (0x00052e49) list_double_heading_pane_cp2

0x3cbe,	// (0x0005273a) list_double_heading_pane_g1_cp2_ParamLimits

0x3cbe,	// (0x0005273a) list_double_heading_pane_g1_cp2

0x3d31,	// (0x000527ad) list_double_heading_pane_g2_cp2_ParamLimits

0x3d31,	// (0x000527ad) list_double_heading_pane_g2_cp2

0x7dcb,	// (0x00056847) list_double_heading_pane_t1_cp2_ParamLimits

0x7dcb,	// (0x00056847) list_double_heading_pane_t1_cp2

0x7de1,	// (0x0005685d) list_double_heading_pane_t2_cp2_ParamLimits

0x7de1,	// (0x0005685d) list_double_heading_pane_t2_cp2

0x339f,	// (0x00051e1b) aid_value_unit2

0x027c,	// (0x0004ecf8) popup_preview_fixed_window

0x3734,	// (0x000521b0) bg_popup_preview_window_pane_cp02

0x7df3,	// (0x0005686f) list_preview_fixed_pane

0x7e39,	// (0x000568b5) list_empty_pane_fp_ParamLimits

0x7e39,	// (0x000568b5) list_empty_pane_fp

0x7e39,	// (0x000568b5) list_single_cale_day_pane_fp_ParamLimits

0x7e39,	// (0x000568b5) list_single_cale_day_pane_fp

0x7e39,	// (0x000568b5) list_single_graphic_heading_pane_fp_ParamLimits

0x7e39,	// (0x000568b5) list_single_graphic_heading_pane_fp

0x7e39,	// (0x000568b5) list_single_graphic_pane_fp_ParamLimits

0x7e39,	// (0x000568b5) list_single_graphic_pane_fp

0x7e39,	// (0x000568b5) list_single_heading_pane_fp_ParamLimits

0x7e39,	// (0x000568b5) list_single_heading_pane_fp

0x7e39,	// (0x000568b5) list_single_pane_fp_ParamLimits

0x7e39,	// (0x000568b5) list_single_pane_fp

0x7e4e,	// (0x000568ca) list_single_pane_fp_g1_ParamLimits

0x7e4e,	// (0x000568ca) list_single_pane_fp_g1

0x3cbe,	// (0x0005273a) list_single_pane_fp_g2_ParamLimits

0x3cbe,	// (0x0005273a) list_single_pane_fp_g2

0x3d31,	// (0x000527ad) list_single_pane_fp_g3_ParamLimits

0x3d31,	// (0x000527ad) list_single_pane_fp_g3

0x7e5a,	// (0x000568d6) list_single_pane_fp_g4_ParamLimits

0x7e5a,	// (0x000568d6) list_single_pane_fp_g4

0x0003,

0xfb6e,	// (0x0005e5ea) list_single_pane_fp_g_ParamLimits

0xfb6e,	// (0x0005e5ea) list_single_pane_fp_g

0x3038,	// (0x00051ab4) list_single_pane_fp_t1_ParamLimits

0x3038,	// (0x00051ab4) list_single_pane_fp_t1

0x304f,	// (0x00051acb) list_single_graphic_pane_fp_g1_ParamLimits

0x304f,	// (0x00051acb) list_single_graphic_pane_fp_g1

0x7e4e,	// (0x000568ca) list_single_graphic_pane_fp_g2_ParamLimits

0x7e4e,	// (0x000568ca) list_single_graphic_pane_fp_g2

0x3cbe,	// (0x0005273a) list_single_graphic_pane_fp_g3_ParamLimits

0x3cbe,	// (0x0005273a) list_single_graphic_pane_fp_g3

0x3d31,	// (0x000527ad) list_single_graphic_pane_fp_g4_ParamLimits

0x3d31,	// (0x000527ad) list_single_graphic_pane_fp_g4

0x7e5a,	// (0x000568d6) list_single_graphic_pane_fp_g5_ParamLimits

0x7e5a,	// (0x000568d6) list_single_graphic_pane_fp_g5

0x0004,

0xfb77,	// (0x0005e5f3) list_single_graphic_pane_fp_g_ParamLimits

0xfb77,	// (0x0005e5f3) list_single_graphic_pane_fp_g

0x305b,	// (0x00051ad7) list_single_graphic_pane_fp_t1_ParamLimits

0x305b,	// (0x00051ad7) list_single_graphic_pane_fp_t1

0x304f,	// (0x00051acb) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x304f,	// (0x00051acb) list_single_graphic_heading_pane_fp_g1

0x7e4e,	// (0x000568ca) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x7e4e,	// (0x000568ca) list_single_graphic_heading_pane_fp_g2

0x3cbe,	// (0x0005273a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3cbe,	// (0x0005273a) list_single_graphic_heading_pane_fp_g3

0x3d31,	// (0x000527ad) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3d31,	// (0x000527ad) list_single_graphic_heading_pane_fp_g4

0x7e5a,	// (0x000568d6) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x7e5a,	// (0x000568d6) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0005e5f3) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0005e5f3) list_single_graphic_heading_pane_fp_g

0x3071,	// (0x00051aed) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3071,	// (0x00051aed) list_single_graphic_heading_pane_fp_t1

0x3087,	// (0x00051b03) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3087,	// (0x00051b03) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb82,	// (0x0005e5fe) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb82,	// (0x0005e5fe) list_single_graphic_heading_pane_fp_t

0x3099,	// (0x00051b15) list_single_cale_day_pane_fp_g1_ParamLimits

0x3099,	// (0x00051b15) list_single_cale_day_pane_fp_g1

0x7e66,	// (0x000568e2) list_single_cale_day_pane_fp_g2_ParamLimits

0x7e66,	// (0x000568e2) list_single_cale_day_pane_fp_g2

0x30d1,	// (0x00051b4d) list_single_cale_day_pane_fp_g3_ParamLimits

0x30d1,	// (0x00051b4d) list_single_cale_day_pane_fp_g3

0x30f9,	// (0x00051b75) list_single_cale_day_pane_fp_g4_ParamLimits

0x30f9,	// (0x00051b75) list_single_cale_day_pane_fp_g4

0x311d,	// (0x00051b99) list_single_cale_day_pane_fp_g5_ParamLimits

0x311d,	// (0x00051b99) list_single_cale_day_pane_fp_g5

0x0004,

0xfb87,	// (0x0005e603) list_single_cale_day_pane_fp_g_ParamLimits

0xfb87,	// (0x0005e603) list_single_cale_day_pane_fp_g

0x3141,	// (0x00051bbd) list_single_cale_day_pane_fp_t1_ParamLimits

0x3141,	// (0x00051bbd) list_single_cale_day_pane_fp_t1

0x3167,	// (0x00051be3) list_single_cale_day_pane_fp_t2_ParamLimits

0x3167,	// (0x00051be3) list_single_cale_day_pane_fp_t2

0x3180,	// (0x00051bfc) list_single_cale_day_pane_fp_t3_ParamLimits

0x3180,	// (0x00051bfc) list_single_cale_day_pane_fp_t3

0x0002,

0xfb92,	// (0x0005e60e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb92,	// (0x0005e60e) list_single_cale_day_pane_fp_t

0x7e4e,	// (0x000568ca) list_empty_pane_fp_g1_ParamLimits

0x7e4e,	// (0x000568ca) list_empty_pane_fp_g1

0x3199,	// (0x00051c15) list_empty_pane_fp_t1

0x31a7,	// (0x00051c23) list_empty_pane_fp_t2

0x0001,

0xfb99,	// (0x0005e615) list_empty_pane_fp_t

0x7e4e,	// (0x000568ca) list_single_heading_pane_fp_g1_ParamLimits

0x7e4e,	// (0x000568ca) list_single_heading_pane_fp_g1

0x3cbe,	// (0x0005273a) list_single_heading_pane_fp_g2_ParamLimits

0x3cbe,	// (0x0005273a) list_single_heading_pane_fp_g2

0x3d31,	// (0x000527ad) list_single_heading_pane_fp_g3_ParamLimits

0x3d31,	// (0x000527ad) list_single_heading_pane_fp_g3

0x0002,

0xfb9e,	// (0x0005e61a) list_single_heading_pane_fp_g_ParamLimits

0xfb9e,	// (0x0005e61a) list_single_heading_pane_fp_g

0x31b5,	// (0x00051c31) list_single_heading_pane_fp_t1_ParamLimits

0x31b5,	// (0x00051c31) list_single_heading_pane_fp_t1

0x31c7,	// (0x00051c43) list_single_heading_pane_fp_t2_ParamLimits

0x31c7,	// (0x00051c43) list_single_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0005e621) list_single_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0005e621) list_single_heading_pane_fp_t

0x3f19,	// (0x00052995) aid_size_cell_fast

0x36a4,	// (0x00052120) soft_indicator_pane_cp1_t1

0x3f56,	// (0x000529d2) cell_app_pane_cp2_ParamLimits

0x3f56,	// (0x000529d2) cell_app_pane_cp2

0x1c1f,	// (0x0005069b) fep_hwr_candidate_drop_down_list_pane

0x1df7,	// (0x00050873) fep_hwr_candidate_pane_g3_ParamLimits

0x1df7,	// (0x00050873) fep_hwr_candidate_pane_g3

0xebac,	// (0x0005d628) fep_hwr_candidate_pane_g4_ParamLimits

0xebac,	// (0x0005d628) fep_hwr_candidate_pane_g4

0x0002,

0xfb14,	// (0x0005e590) fep_hwr_candidate_pane_g_ParamLimits

0xfb14,	// (0x0005e590) fep_hwr_candidate_pane_g

0x794b,	// (0x000563c7) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x794b,	// (0x000563c7) fep_vkb_candidate_drop_down_list_pane

0x7d68,	// (0x000567e4) fep_vkb_candidate_pane_g3

0x7d70,	// (0x000567ec) fep_vkb_candidate_pane_g4

0x0002,

0xfb41,	// (0x0005e5bd) fep_vkb_candidate_pane_g

0x1e62,	// (0x000508de) cell_hwr_candidate_pane_g1_ParamLimits

0x1e70,	// (0x000508ec) cell_hwr_candidate_pane_g3_ParamLimits

0x1e70,	// (0x000508ec) cell_hwr_candidate_pane_g3

0x95d9,	// (0x00058055) cell_hwr_candidate_pane_g4_ParamLimits

0x95d9,	// (0x00058055) cell_hwr_candidate_pane_g4

0x0002,

0xfb60,	// (0x0005e5dc) cell_hwr_candidate_pane_g_ParamLimits

0xfb60,	// (0x0005e5dc) cell_hwr_candidate_pane_g

0x7d87,	// (0x00056803) cell_vkb_candidate_pane_g3_ParamLimits

0x7d87,	// (0x00056803) cell_vkb_candidate_pane_g3

0x7da2,	// (0x0005681e) cell_vkb_candidate_pane_g4_ParamLimits

0x7da2,	// (0x0005681e) cell_vkb_candidate_pane_g4

0x7e72,	// (0x000568ee) cell_app_pane_cp2_g1_ParamLimits

0x7e72,	// (0x000568ee) cell_app_pane_cp2_g1

0x7e90,	// (0x0005690c) cell_app_pane_cp2_g2_ParamLimits

0x7e90,	// (0x0005690c) cell_app_pane_cp2_g2

0x0001,

0xfbaa,	// (0x0005e626) cell_app_pane_cp2_g_ParamLimits

0xfbaa,	// (0x0005e626) cell_app_pane_cp2_g

0x7e9c,	// (0x00056918) cell_app_pane_cp2_t1_ParamLimits

0x7e9c,	// (0x00056918) cell_app_pane_cp2_t1

0x3d23,	// (0x0005279f) grid_highlight_pane_cp1_ParamLimits

0x3d23,	// (0x0005279f) grid_highlight_pane_cp1

0x1eaf,	// (0x0005092b) cell_hwr_candidate_pane_cp1_ParamLimits

0x1eaf,	// (0x0005092b) cell_hwr_candidate_pane_cp1

0x1e62,	// (0x000508de) fep_hwr_candidate_drop_down_list_pane_g1

0x1ece,	// (0x0005094a) fep_hwr_candidate_drop_down_list_pane_g2

0x1edb,	// (0x00050957) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbaf,	// (0x0005e62b) fep_hwr_candidate_drop_down_list_pane_g

0x1ee8,	// (0x00050964) fep_hwr_candidate_drop_down_list_scroll_pane

0x1ef1,	// (0x0005096d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1ef1,	// (0x0005096d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1efe,	// (0x0005097a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1efe,	// (0x0005097a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1f0b,	// (0x00050987) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1f0b,	// (0x00050987) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1f18,	// (0x00050994) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1f18,	// (0x00050994) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1f33,	// (0x000509af) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1f33,	// (0x000509af) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1f4e,	// (0x000509ca) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1f4e,	// (0x000509ca) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1f69,	// (0x000509e5) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1f69,	// (0x000509e5) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1f84,	// (0x00050a00) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1f84,	// (0x00050a00) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb6,	// (0x0005e632) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb6,	// (0x0005e632) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7eae,	// (0x0005692a) cell_vkb_candidate_pane_cp1_ParamLimits

0x7eae,	// (0x0005692a) cell_vkb_candidate_pane_cp1

0x7a64,	// (0x000564e0) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7a64,	// (0x000564e0) fep_vkb_candidate_drop_down_list_pane_g1

0x7ece,	// (0x0005694a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7ece,	// (0x0005694a) fep_vkb_candidate_drop_down_list_pane_g2

0x7edb,	// (0x00056957) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7edb,	// (0x00056957) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc7,	// (0x0005e643) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc7,	// (0x0005e643) fep_vkb_candidate_drop_down_list_pane_g

0x7ee8,	// (0x00056964) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7ee8,	// (0x00056964) fep_vkb_candidate_drop_down_list_scroll_pane

0x7ef5,	// (0x00056971) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ef5,	// (0x00056971) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7f02,	// (0x0005697e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7f02,	// (0x0005697e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7f0e,	// (0x0005698a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7f0e,	// (0x0005698a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7f1a,	// (0x00056996) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f1a,	// (0x00056996) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7f3b,	// (0x000569b7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f3b,	// (0x000569b7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7f5c,	// (0x000569d8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f5c,	// (0x000569d8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7f7d,	// (0x000569f9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f7d,	// (0x000569f9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7f9e,	// (0x00056a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f9e,	// (0x00056a1a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x0005e64a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x0005e64a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xce05,	// (0x0005b881) title_pane_g1_ParamLimits

0xce18,	// (0x0005b894) title_pane_g2_ParamLimits

0xf554,	// (0x0005dfd0) title_pane_g_ParamLimits

0x4386,	// (0x00052e02) aid_call2_pane

0x438e,	// (0x00052e0a) aid_call_pane

0x4396,	// (0x00052e12) popup_clock_analogue_window_g1

0x4396,	// (0x00052e12) popup_clock_analogue_window_g2

0x0cd9,	// (0x0004f755) popup_clock_analogue_window_g3

0x0ce2,	// (0x0004f75e) popup_clock_analogue_window_g4

0x33c1,	// (0x00051e3d) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0005e17f) popup_clock_analogue_window_g

0x0cea,	// (0x0004f766) popup_clock_analogue_window_t1

0x0cf8,	// (0x0004f774) clock_digital_number_pane_ParamLimits

0x0cf8,	// (0x0004f774) clock_digital_number_pane

0x0d04,	// (0x0004f780) clock_digital_number_pane_cp02_ParamLimits

0x0d04,	// (0x0004f780) clock_digital_number_pane_cp02

0x0d10,	// (0x0004f78c) clock_digital_number_pane_cp03_ParamLimits

0x0d10,	// (0x0004f78c) clock_digital_number_pane_cp03

0x0d1c,	// (0x0004f798) clock_digital_number_pane_cp04_ParamLimits

0x0d1c,	// (0x0004f798) clock_digital_number_pane_cp04

0x0d28,	// (0x0004f7a4) clock_digital_separator_pane_ParamLimits

0x0d28,	// (0x0004f7a4) clock_digital_separator_pane

0x0d34,	// (0x0004f7b0) popup_clock_digital_window_t1_ParamLimits

0x0d34,	// (0x0004f7b0) popup_clock_digital_window_t1

0x33c1,	// (0x00051e3d) clock_digital_number_pane_g1

0x33c1,	// (0x00051e3d) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0005e18a) clock_digital_number_pane_g

0x33c1,	// (0x00051e3d) clock_digital_separator_pane_g1

0x33c1,	// (0x00051e3d) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0005e18a) clock_digital_separator_pane_g

0xd471,	// (0x0005beed) aid_fill_nsta_ParamLimits

0xd5a7,	// (0x0005c023) indicator_nsta_pane_ParamLimits

0x4fcb,	// (0x00053a47) popup_clock_analogue_window

0x4fcb,	// (0x00053a47) popup_clock_digital_window

0x3eda,	// (0x00052956) grid_indicator_nsta_pane_ParamLimits

0x71db,	// (0x00055c57) clock_nsta_pane_t2

0x0001,

0xfa94,	// (0x0005e510) clock_nsta_pane_t

0x0c9d,	// (0x0004f719) aid_size_max_handle

0xbdaf,	// (0x0005a82b) aid_size_min_handle

0x499e,	// (0x0005341a) editor_scroll_pane

0x7fb9,	// (0x00056a35) ex_editor_pane

0x3e87,	// (0x00052903) scroll_pane_cp13

0x3cb6,	// (0x00052732) scroll_pane_cp14

0x43c5,	// (0x00052e41) scroll_pane_cp36

0xd2d2,	// (0x0005bd4e) list_single_graphic_hl_pane_cp2_ParamLimits

0xd2d2,	// (0x0005bd4e) list_single_graphic_hl_pane_cp2

0xd740,	// (0x0005c1bc) list_single_graphic_hl_pane_ParamLimits

0xd740,	// (0x0005c1bc) list_single_graphic_hl_pane

0x31dd,	// (0x00051c59) aid_size_min_hl_cp1

0x7fc1,	// (0x00056a3d) list_highlight_pane_cp34_ParamLimits

0x7fc1,	// (0x00056a3d) list_highlight_pane_cp34

0x7fd2,	// (0x00056a4e) list_single_graphic_hl_pane_g1_ParamLimits

0x7fd2,	// (0x00056a4e) list_single_graphic_hl_pane_g1

0xc7b5,	// (0x0005b231) list_single_graphic_hl_pane_g2_ParamLimits

0xc7b5,	// (0x0005b231) list_single_graphic_hl_pane_g2

0xc7b5,	// (0x0005b231) list_single_graphic_hl_pane_g3_ParamLimits

0xc7b5,	// (0x0005b231) list_single_graphic_hl_pane_g3

0x490f,	// (0x0005338b) list_single_graphic_hl_pane_g4_ParamLimits

0x490f,	// (0x0005338b) list_single_graphic_hl_pane_g4

0x31f2,	// (0x00051c6e) list_single_graphic_hl_pane_g5_ParamLimits

0x31f2,	// (0x00051c6e) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x0005e65b) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x0005e65b) list_single_graphic_hl_pane_g

0xc7c1,	// (0x0005b23d) list_single_graphic_hl_pane_t1_ParamLimits

0xc7c1,	// (0x0005b23d) list_single_graphic_hl_pane_t1

0x7fdf,	// (0x00056a5b) aid_size_min_hl_cp2

0x7fe8,	// (0x00056a64) list_highlight_pane_cp34_cp2_ParamLimits

0x7fe8,	// (0x00056a64) list_highlight_pane_cp34_cp2

0x7fd2,	// (0x00056a4e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7fd2,	// (0x00056a4e) list_single_graphic_hl_pane_g1_cp2

0x7ff5,	// (0x00056a71) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7ff5,	// (0x00056a71) list_single_graphic_hl_pane_g2_cp2

0x8001,	// (0x00056a7d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x8001,	// (0x00056a7d) list_single_graphic_hl_pane_g3_cp2

0x7b05,	// (0x00056581) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x7b05,	// (0x00056581) list_single_graphic_hl_pane_g4_cp2

0x800f,	// (0x00056a8b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x800f,	// (0x00056a8b) list_single_graphic_hl_pane_g5_cp2

0xbe84,	// (0x0005a900) control_pane_g4_ParamLimits

0xbe84,	// (0x0005a900) control_pane_g4

0x4cde,	// (0x0005375a) bg_popup_sub_pane_cp10_ParamLimits

0x77f0,	// (0x0005626c) list_choice_list_pane_ParamLimits

0x77ff,	// (0x0005627b) scroll_pane_cp23

0x3734,	// (0x000521b0) bg_popup_preview_window_pane_cp02_ParamLimits

0x7df3,	// (0x0005686f) list_preview_fixed_pane_ParamLimits

0x7e09,	// (0x00056885) list_preview_fixed_pane_cp_ParamLimits

0x7e09,	// (0x00056885) list_preview_fixed_pane_cp

0x7e15,	// (0x00056891) popup_preview_fixed_window_g1_ParamLimits

0x7e15,	// (0x00056891) popup_preview_fixed_window_g1

0x7e21,	// (0x0005689d) popup_preview_fixed_window_g2_ParamLimits

0x7e21,	// (0x0005689d) popup_preview_fixed_window_g2

0x0002,

0xfb67,	// (0x0005e5e3) popup_preview_fixed_window_g_ParamLimits

0xfb67,	// (0x0005e5e3) popup_preview_fixed_window_g

0x0c11,	// (0x0004f68d) aid_navi_side_left_pane_ParamLimits

0x0c26,	// (0x0004f6a2) aid_navi_side_right_pane_ParamLimits

0x0c3e,	// (0x0004f6ba) navi_icon_pane_stacon_ParamLimits

0x0c52,	// (0x0004f6ce) navi_navi_pane_stacon_ParamLimits

0x0c3e,	// (0x0004f6ba) navi_text_pane_stacon_ParamLimits

0x013d,	// (0x0004ebb9) main_text_info_pane

0x8039,	// (0x00056ab5) listscroll_text_info_pane

0x8041,	// (0x00056abd) list_text_info_pane_ParamLimits

0x8041,	// (0x00056abd) list_text_info_pane

0x8050,	// (0x00056acc) scroll_pane_cp24_ParamLimits

0x8050,	// (0x00056acc) scroll_pane_cp24

0xe1a6,	// (0x0005cc22) list_text_info_pane_t1_ParamLimits

0xe1a6,	// (0x0005cc22) list_text_info_pane_t1

0xbfdf,	// (0x0005aa5b) popup_fast_swap2_window_ParamLimits

0xbfdf,	// (0x0005aa5b) popup_fast_swap2_window

0x809f,	// (0x00056b1b) aid_size_cell_fast2

0x33b7,	// (0x00051e33) bg_popup_window_pane_cp17

0x5652,	// (0x000540ce) heading_pane_cp2

0x3980,	// (0x000523fc) listscroll_fast2_pane

0x80a9,	// (0x00056b25) grid_fast2_pane

0x80b3,	// (0x00056b2f) listscroll_fast2_pane_g1

0x80bb,	// (0x00056b37) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x0005e666) listscroll_fast2_pane_g

0x3e87,	// (0x00052903) scroll_pane_cp26

0x80c5,	// (0x00056b41) cell_fast2_pane_ParamLimits

0x80c5,	// (0x00056b41) cell_fast2_pane

0x80da,	// (0x00056b56) cell_fast2_pane_g1

0x80e3,	// (0x00056b5f) cell_fast2_pane_g2

0x80ec,	// (0x00056b68) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x0005e66b) cell_fast2_pane_g

0x3a73,	// (0x000524ef) grid_highlight_pane_cp9

0x1188,	// (0x0004fc04) main_eswt_pane_ParamLimits

0x1188,	// (0x0004fc04) main_eswt_pane

0x8065,	// (0x00056ae1) list_single_text_info_pane

0x80f4,	// (0x00056b70) eswt_ctrl_button_pane

0x80f4,	// (0x00056b70) eswt_ctrl_canvas_pane

0x80fc,	// (0x00056b78) eswt_ctrl_combo_pane

0x80f4,	// (0x00056b70) eswt_ctrl_default_pane

0x80f4,	// (0x00056b70) eswt_ctrl_label_pane

0x8104,	// (0x00056b80) eswt_ctrl_wait_pane

0x810c,	// (0x00056b88) eswt_shell_pane

0x33b7,	// (0x00051e33) listscroll_eswt_app_pane

0x812c,	// (0x00056ba8) popup_eswt_tasktip_window_ParamLimits

0x812c,	// (0x00056ba8) popup_eswt_tasktip_window

0x5268,	// (0x00053ce4) bg_popup_window_pane_cp18

0x813d,	// (0x00056bb9) eswt_control_pane_g1_ParamLimits

0x813d,	// (0x00056bb9) eswt_control_pane_g1

0x814a,	// (0x00056bc6) eswt_control_pane_g2_ParamLimits

0x814a,	// (0x00056bc6) eswt_control_pane_g2

0x8157,	// (0x00056bd3) eswt_control_pane_g3_ParamLimits

0x8157,	// (0x00056bd3) eswt_control_pane_g3

0x8164,	// (0x00056be0) eswt_control_pane_g4_ParamLimits

0x8164,	// (0x00056be0) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x0005e672) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x0005e672) eswt_control_pane_g

0x3d23,	// (0x0005279f) bg_button_pane_ParamLimits

0x3d23,	// (0x0005279f) bg_button_pane

0x3a88,	// (0x00052504) common_borders_pane_copy2_ParamLimits

0x3a88,	// (0x00052504) common_borders_pane_copy2

0x8171,	// (0x00056bed) control_button_pane_g1_ParamLimits

0x8171,	// (0x00056bed) control_button_pane_g1

0x817d,	// (0x00056bf9) control_button_pane_g2_ParamLimits

0x817d,	// (0x00056bf9) control_button_pane_g2

0x8189,	// (0x00056c05) control_button_pane_g3_ParamLimits

0x8189,	// (0x00056c05) control_button_pane_g3

0x0002,

0xfbff,	// (0x0005e67b) control_button_pane_g_ParamLimits

0xfbff,	// (0x0005e67b) control_button_pane_g

0x819d,	// (0x00056c19) control_button_pane_t1

0x81ab,	// (0x00056c27) control_button_pane_t2

0x0001,

0xfc06,	// (0x0005e682) control_button_pane_t

0x51f4,	// (0x00053c70) bg_button_pane_g1

0x5204,	// (0x00053c80) bg_button_pane_g2

0x51fc,	// (0x00053c78) bg_button_pane_g3

0x5214,	// (0x00053c90) bg_button_pane_g4

0x520c,	// (0x00053c88) bg_button_pane_g5

0x521c,	// (0x00053c98) bg_button_pane_g6

0x5224,	// (0x00053ca0) bg_button_pane_g7

0x5234,	// (0x00053cb0) bg_button_pane_g8

0x522c,	// (0x00053ca8) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0005e2e8) bg_button_pane_g

0x77ab,	// (0x00056227) common_borders_pane_ParamLimits

0x77ab,	// (0x00056227) common_borders_pane

0x813d,	// (0x00056bb9) eswt_control_pane_g1_copy1_ParamLimits

0x813d,	// (0x00056bb9) eswt_control_pane_g1_copy1

0x814a,	// (0x00056bc6) eswt_control_pane_g2_copy1_ParamLimits

0x814a,	// (0x00056bc6) eswt_control_pane_g2_copy1

0x8157,	// (0x00056bd3) eswt_control_pane_g3_copy1_ParamLimits

0x8157,	// (0x00056bd3) eswt_control_pane_g3_copy1

0x8164,	// (0x00056be0) eswt_control_pane_g4_copy1_ParamLimits

0x8164,	// (0x00056be0) eswt_control_pane_g4_copy1

0x77e6,	// (0x00056262) bg_eswt_ctrl_canvas_pane_g1

0x77ab,	// (0x00056227) common_borders_pane_cp2_ParamLimits

0x77ab,	// (0x00056227) common_borders_pane_cp2

0x77ab,	// (0x00056227) common_borders_pane_cp3_ParamLimits

0x77ab,	// (0x00056227) common_borders_pane_cp3

0x81b9,	// (0x00056c35) separator_horizontal_pane

0x81c1,	// (0x00056c3d) separator_vertical_pane

0x813d,	// (0x00056bb9) eswt_control_pane_g1_copy2_ParamLimits

0x813d,	// (0x00056bb9) eswt_control_pane_g1_copy2

0x814a,	// (0x00056bc6) eswt_control_pane_g2_copy2_ParamLimits

0x814a,	// (0x00056bc6) eswt_control_pane_g2_copy2

0x8157,	// (0x00056bd3) eswt_control_pane_g3_copy2_ParamLimits

0x8157,	// (0x00056bd3) eswt_control_pane_g3_copy2

0x8164,	// (0x00056be0) eswt_control_pane_g4_copy2_ParamLimits

0x8164,	// (0x00056be0) eswt_control_pane_g4_copy2

0x33b7,	// (0x00051e33) common_borders_pane_cp4

0x81ca,	// (0x00056c46) separator_horizontal_pane_g1

0x81d3,	// (0x00056c4f) separator_horizontal_pane_g2

0x81dc,	// (0x00056c58) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x0005e687) separator_horizontal_pane_g

0x813d,	// (0x00056bb9) eswt_control_pane_g1_copy3_ParamLimits

0x813d,	// (0x00056bb9) eswt_control_pane_g1_copy3

0x814a,	// (0x00056bc6) eswt_control_pane_g2_copy3_ParamLimits

0x814a,	// (0x00056bc6) eswt_control_pane_g2_copy3

0x8157,	// (0x00056bd3) eswt_control_pane_g3_copy3_ParamLimits

0x8157,	// (0x00056bd3) eswt_control_pane_g3_copy3

0x8164,	// (0x00056be0) eswt_control_pane_g4_copy3_ParamLimits

0x8164,	// (0x00056be0) eswt_control_pane_g4_copy3

0x33b7,	// (0x00051e33) common_borders_pane_cp5

0x81e5,	// (0x00056c61) separator_vertical_pane_g1

0x81ee,	// (0x00056c6a) separator_vertical_pane_g2

0x81f7,	// (0x00056c73) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x0005e68e) separator_vertical_pane_g

0x813d,	// (0x00056bb9) eswt_control_pane_g1_copy4_ParamLimits

0x813d,	// (0x00056bb9) eswt_control_pane_g1_copy4

0x814a,	// (0x00056bc6) eswt_control_pane_g2_copy4_ParamLimits

0x814a,	// (0x00056bc6) eswt_control_pane_g2_copy4

0x8157,	// (0x00056bd3) eswt_control_pane_g3_copy4_ParamLimits

0x8157,	// (0x00056bd3) eswt_control_pane_g3_copy4

0x8164,	// (0x00056be0) eswt_control_pane_g4_copy4_ParamLimits

0x8164,	// (0x00056be0) eswt_control_pane_g4_copy4

0xe1c1,	// (0x0005cc3d) eswt_ctrl_combo_button_pane

0xe1c9,	// (0x0005cc45) eswt_ctrl_input_pane

0xe1d1,	// (0x0005cc4d) popup_choice_list_window_cp70

0xe1d9,	// (0x0005cc55) eswt_ctrl_input_pane_t1

0x33b7,	// (0x00051e33) input_focus_pane_cp70

0x77ab,	// (0x00056227) bg_button_pane_cp70_ParamLimits

0x77ab,	// (0x00056227) bg_button_pane_cp70

0xe1e7,	// (0x0005cc63) eswt_ctrl_combo_button_pane_g1

0x822e,	// (0x00056caa) wait_bar_pane_cp70

0x5268,	// (0x00053ce4) bg_popup_window_pane_cp70_ParamLimits

0x5268,	// (0x00053ce4) bg_popup_window_pane_cp70

0x8236,	// (0x00056cb2) popup_eswt_tasktip_window_t1

0x824c,	// (0x00056cc8) wait_bar_pane_cp71_ParamLimits

0x824c,	// (0x00056cc8) wait_bar_pane_cp71

0x8258,	// (0x00056cd4) grid_eswt_app_pane

0x419f,	// (0x00052c1b) scroll_pane_cp70

0xe1ef,	// (0x0005cc6b) cell_eswt_app_pane_ParamLimits

0xe1ef,	// (0x0005cc6b) cell_eswt_app_pane

0xe219,	// (0x0005cc95) cell_eswt_app_pane_g1_ParamLimits

0xe219,	// (0x0005cc95) cell_eswt_app_pane_g1

0xe248,	// (0x0005ccc4) cell_eswt_app_pane_g2_ParamLimits

0xe248,	// (0x0005ccc4) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x0005e695) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x0005e695) cell_eswt_app_pane_g

0xe271,	// (0x0005cced) cell_eswt_app_pane_t1_ParamLimits

0xe271,	// (0x0005cced) cell_eswt_app_pane_t1

0x831b,	// (0x00056d97) grid_highlight_pane_cp70_ParamLimits

0x831b,	// (0x00056d97) grid_highlight_pane_cp70

0x4873,	// (0x000532ef) set_content_pane_g1

0x4c3e,	// (0x000536ba) status_small_volume_pane

0x1f9f,	// (0x00050a1b) status_small_volume_pane_g1

0x1fa7,	// (0x00050a23) volume_small2_pane

0x1fb0,	// (0x00050a2c) volume_small2_pane_g1

0x1fb9,	// (0x00050a35) volume_small2_pane_g2

0x1fc2,	// (0x00050a3e) volume_small2_pane_g3

0x1fcb,	// (0x00050a47) volume_small2_pane_g4

0x1fd4,	// (0x00050a50) volume_small2_pane_g5

0x1fdd,	// (0x00050a59) volume_small2_pane_g6

0x1fe6,	// (0x00050a62) volume_small2_pane_g7

0x1fef,	// (0x00050a6b) volume_small2_pane_g8

0x1ff8,	// (0x00050a74) volume_small2_pane_g9

0x2001,	// (0x00050a7d) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x0005e69a) volume_small2_pane_g

0x7bb8,	// (0x00056634) fep_vkb_top_text_pane_g1_ParamLimits

0xe126,	// (0x0005cba2) fep_vkb_top_text_pane_t1_ParamLimits

0x7e2d,	// (0x000568a9) popup_preview_fixed_window_g3_ParamLimits

0x7e2d,	// (0x000568a9) popup_preview_fixed_window_g3

0xc5fc,	// (0x0005b078) popup_toolbar_trans_pane

0xdb4e,	// (0x0005c5ca) aid_height_set_list_ParamLimits

0x65c4,	// (0x00055040) aid_size_parent_ParamLimits

0x4cde,	// (0x0005375a) list_highlight_pane_cp2_ParamLimits

0x4873,	// (0x000532ef) set_content_pane_g1_ParamLimits

0xd751,	// (0x0005c1cd) list_single_image_pane_ParamLimits

0xd751,	// (0x0005c1cd) list_single_image_pane

0xe2a3,	// (0x0005cd1f) aid_size_cell_image_ParamLimits

0xe2a3,	// (0x0005cd1f) aid_size_cell_image

0xe2b0,	// (0x0005cd2c) grid_single_image_pane_ParamLimits

0xe2b0,	// (0x0005cd2c) grid_single_image_pane

0x4e5c,	// (0x000538d8) list_single_image_pane_g1_ParamLimits

0x4e5c,	// (0x000538d8) list_single_image_pane_g1

0x8340,	// (0x00056dbc) list_single_image_pane_g2_ParamLimits

0x8340,	// (0x00056dbc) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x0005e6af) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x0005e6af) list_single_image_pane_g

0x8354,	// (0x00056dd0) list_single_image_pane_t1_ParamLimits

0x8354,	// (0x00056dd0) list_single_image_pane_t1

0xe2be,	// (0x0005cd3a) cell_image_list_pane_ParamLimits

0xe2be,	// (0x0005cd3a) cell_image_list_pane

0xe2d4,	// (0x0005cd50) cell_image_list_pane_g1

0xe2dd,	// (0x0005cd59) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x0005e6b4) cell_image_list_pane_g

0x8390,	// (0x00056e0c) aid_size_cell_tb_trans_pane

0x3d23,	// (0x0005279f) bg_tb_trans_pane

0x83a2,	// (0x00056e1e) grid_tb_trans_pane

0x51f4,	// (0x00053c70) bg_tb_trans_pane_g1

0x5204,	// (0x00053c80) bg_tb_trans_pane_g2

0x51fc,	// (0x00053c78) bg_tb_trans_pane_g3

0x5214,	// (0x00053c90) bg_tb_trans_pane_g4

0x520c,	// (0x00053c88) bg_tb_trans_pane_g5

0x5234,	// (0x00053cb0) bg_tb_trans_pane_g6

0x522c,	// (0x00053ca8) bg_tb_trans_pane_g7

0x521c,	// (0x00053c98) bg_tb_trans_pane_g8

0x5224,	// (0x00053ca0) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x0005e6b9) bg_tb_trans_pane_g

0x83b6,	// (0x00056e32) cell_toolbar_trans_pane_ParamLimits

0x83b6,	// (0x00056e32) cell_toolbar_trans_pane

0x77e6,	// (0x00056262) cell_toolbar_trans_pane_g1

0xdf0f,	// (0x0005c98b) list_form2_midp_pane_t1

0xdf1d,	// (0x0005c999) list_form2_midp_pane_t2

0x0001,

0xfada,	// (0x0005e556) list_form2_midp_pane_t

0x73cc,	// (0x00055e48) scroll_pane_cp51_ParamLimits

0x7588,	// (0x00056004) form2_midp_wait_pane_g1

0x7591,	// (0x0005600d) form2_midp_wait_pane_g2

0x759a,	// (0x00056016) form2_midp_wait_pane_g3

0x0002,

0xfaef,	// (0x0005e56b) form2_midp_wait_pane_g

0x34ab,	// (0x00051f27) list_highlight_pane_cp21_ParamLimits

0x75f1,	// (0x0005606d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7600,	// (0x0005607c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x677c,	// (0x000551f8) list_single_2graphic_im_pane_ParamLimits

0x677c,	// (0x000551f8) list_single_2graphic_im_pane

0xe2e6,	// (0x0005cd62) list_single_2graphic_im_pane_g1_ParamLimits

0xe2e6,	// (0x0005cd62) list_single_2graphic_im_pane_g1

0xe2f7,	// (0x0005cd73) list_single_2graphic_im_pane_g2_ParamLimits

0xe2f7,	// (0x0005cd73) list_single_2graphic_im_pane_g2

0xe303,	// (0x0005cd7f) list_single_2graphic_im_pane_g3_ParamLimits

0xe303,	// (0x0005cd7f) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x0005e6cc) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x0005e6cc) list_single_2graphic_im_pane_g

0xe317,	// (0x0005cd93) list_single_2graphic_im_pane_t1_ParamLimits

0xe317,	// (0x0005cd93) list_single_2graphic_im_pane_t1

0x7e39,	// (0x000568b5) list_single_graphic_2heading_pane_fp_ParamLimits

0x7e39,	// (0x000568b5) list_single_graphic_2heading_pane_fp

0x304f,	// (0x00051acb) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x304f,	// (0x00051acb) list_single_graphic_2heading_pane_fp_g1

0x7e4e,	// (0x000568ca) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x7e4e,	// (0x000568ca) list_single_graphic_2heading_pane_fp_g2

0x3cbe,	// (0x0005273a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3cbe,	// (0x0005273a) list_single_graphic_2heading_pane_fp_g3

0x3d31,	// (0x000527ad) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3d31,	// (0x000527ad) list_single_graphic_2heading_pane_fp_g4

0x7e5a,	// (0x000568d6) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x7e5a,	// (0x000568d6) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb77,	// (0x0005e5f3) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0005e5f3) list_single_graphic_2heading_pane_fp_g

0x321c,	// (0x00051c98) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x321c,	// (0x00051c98) list_single_graphic_2heading_pane_fp_t1

0x3087,	// (0x00051b03) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3087,	// (0x00051b03) list_single_graphic_2heading_pane_fp_t2

0x3232,	// (0x00051cae) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x3232,	// (0x00051cae) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x0005e6d5) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x0005e6d5) list_single_graphic_2heading_pane_fp_t

0x7872,	// (0x000562ee) fep_hwr_write_pane_g5_ParamLimits

0x7872,	// (0x000562ee) fep_hwr_write_pane_g5

0x787e,	// (0x000562fa) fep_hwr_write_pane_g6_ParamLimits

0x787e,	// (0x000562fa) fep_hwr_write_pane_g6

0x810c,	// (0x00056b88) eswt_shell_pane_ParamLimits

0x5268,	// (0x00053ce4) bg_popup_window_pane_cp18_ParamLimits

0x650c,	// (0x00054f88) heading_pane_cp70

0x8236,	// (0x00056cb2) popup_eswt_tasktip_window_t1_ParamLimits

0xd4cc,	// (0x0005bf48) aid_touch_tab_arrow_left

0xd4e2,	// (0x0005bf5e) aid_touch_tab_arrow_right

0xce30,	// (0x0005b8ac) title_pane_g3_ParamLimits

0xce30,	// (0x0005b8ac) title_pane_g3

0x3ce2,	// (0x0005275e) set_value_pane_g1

0xc5fc,	// (0x0005b078) popup_toolbar_trans_pane_ParamLimits

0x8390,	// (0x00056e0c) aid_size_cell_tb_trans_pane_ParamLimits

0x3d23,	// (0x0005279f) bg_tb_trans_pane_ParamLimits

0x83a2,	// (0x00056e1e) grid_tb_trans_pane_ParamLimits

0x3734,	// (0x000521b0) cont_note_pane_ParamLimits

0x3734,	// (0x000521b0) cont_note_pane

0x3a88,	// (0x00052504) cont_snote2_single_text_pane_ParamLimits

0x3a88,	// (0x00052504) cont_snote2_single_text_pane

0x3a88,	// (0x00052504) cont_snote2_single_graphic_pane_ParamLimits

0x3a88,	// (0x00052504) cont_snote2_single_graphic_pane

0x586d,	// (0x000542e9) cont_note_wait_pane_ParamLimits

0x586d,	// (0x000542e9) cont_note_wait_pane

0x586d,	// (0x000542e9) cont_note_image_pane_ParamLimits

0x586d,	// (0x000542e9) cont_note_image_pane

0x844a,	// (0x00056ec6) popup_note2_window_g1_ParamLimits

0x844a,	// (0x00056ec6) popup_note2_window_g1

0x847b,	// (0x00056ef7) popup_note2_window_t1_ParamLimits

0x847b,	// (0x00056ef7) popup_note2_window_t1

0x84c0,	// (0x00056f3c) popup_note2_window_t2_ParamLimits

0x84c0,	// (0x00056f3c) popup_note2_window_t2

0x8505,	// (0x00056f81) popup_note2_window_t3_ParamLimits

0x8505,	// (0x00056f81) popup_note2_window_t3

0x854a,	// (0x00056fc6) popup_note2_window_t4_ParamLimits

0x854a,	// (0x00056fc6) popup_note2_window_t4

0x37b8,	// (0x00052234) popup_note2_window_t5_ParamLimits

0x37b8,	// (0x00052234) popup_note2_window_t5

0x0004,

0xfc65,	// (0x0005e6e1) popup_note2_window_t_ParamLimits

0xfc65,	// (0x0005e6e1) popup_note2_window_t

0x8579,	// (0x00056ff5) popup_note2_image_window_g1_ParamLimits

0x8579,	// (0x00056ff5) popup_note2_image_window_g1

0x8585,	// (0x00057001) popup_note2_image_window_g2_ParamLimits

0x8585,	// (0x00057001) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x0005e6ec) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x0005e6ec) popup_note2_image_window_g

0x8597,	// (0x00057013) popup_note2_image_window_t1_ParamLimits

0x8597,	// (0x00057013) popup_note2_image_window_t1

0x85af,	// (0x0005702b) popup_note2_image_window_t2_ParamLimits

0x85af,	// (0x0005702b) popup_note2_image_window_t2

0x85c7,	// (0x00057043) popup_note2_image_window_t3_ParamLimits

0x85c7,	// (0x00057043) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x0005e6f1) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x0005e6f1) popup_note2_image_window_t

0x587b,	// (0x000542f7) popup_note2_wait_window_g1_ParamLimits

0x587b,	// (0x000542f7) popup_note2_wait_window_g1

0x85e3,	// (0x0005705f) popup_note2_wait_window_g2_ParamLimits

0x85e3,	// (0x0005705f) popup_note2_wait_window_g2

0x5893,	// (0x0005430f) popup_note2_wait_window_g3_ParamLimits

0x5893,	// (0x0005430f) popup_note2_wait_window_g3

0x0002,

0xfc7c,	// (0x0005e6f8) popup_note2_wait_window_g_ParamLimits

0xfc7c,	// (0x0005e6f8) popup_note2_wait_window_g

0x85ef,	// (0x0005706b) popup_note2_wait_window_t1_ParamLimits

0x85ef,	// (0x0005706b) popup_note2_wait_window_t1

0x860d,	// (0x00057089) popup_note2_wait_window_t2_ParamLimits

0x860d,	// (0x00057089) popup_note2_wait_window_t2

0x862b,	// (0x000570a7) popup_note2_wait_window_t3_ParamLimits

0x862b,	// (0x000570a7) popup_note2_wait_window_t3

0x863d,	// (0x000570b9) popup_note2_wait_window_t4_ParamLimits

0x863d,	// (0x000570b9) popup_note2_wait_window_t4

0x0003,

0xfc83,	// (0x0005e6ff) popup_note2_wait_window_t_ParamLimits

0xfc83,	// (0x0005e6ff) popup_note2_wait_window_t

0x864f,	// (0x000570cb) wait_bar2_pane_ParamLimits

0x864f,	// (0x000570cb) wait_bar2_pane

0x8667,	// (0x000570e3) popup_snote2_single_text_window_g1_ParamLimits

0x8667,	// (0x000570e3) popup_snote2_single_text_window_g1

0x868f,	// (0x0005710b) popup_snote2_single_text_window_t1_ParamLimits

0x868f,	// (0x0005710b) popup_snote2_single_text_window_t1

0x86db,	// (0x00057157) popup_snote2_single_text_window_t2_ParamLimits

0x86db,	// (0x00057157) popup_snote2_single_text_window_t2

0x8727,	// (0x000571a3) popup_snote2_single_text_window_t3_ParamLimits

0x8727,	// (0x000571a3) popup_snote2_single_text_window_t3

0x8768,	// (0x000571e4) popup_snote2_single_text_window_t4_ParamLimits

0x8768,	// (0x000571e4) popup_snote2_single_text_window_t4

0x879e,	// (0x0005721a) popup_snote2_single_text_window_t5_ParamLimits

0x879e,	// (0x0005721a) popup_snote2_single_text_window_t5

0x0004,

0xfc8c,	// (0x0005e708) popup_snote2_single_text_window_t_ParamLimits

0xfc8c,	// (0x0005e708) popup_snote2_single_text_window_t

0x87c9,	// (0x00057245) popup_snote2_single_graphic_window_g1_ParamLimits

0x87c9,	// (0x00057245) popup_snote2_single_graphic_window_g1

0x87f1,	// (0x0005726d) popup_snote2_single_graphic_window_g2_ParamLimits

0x87f1,	// (0x0005726d) popup_snote2_single_graphic_window_g2

0x0001,

0xfc97,	// (0x0005e713) popup_snote2_single_graphic_window_g_ParamLimits

0xfc97,	// (0x0005e713) popup_snote2_single_graphic_window_g

0x8819,	// (0x00057295) popup_snote2_single_graphic_window_t1_ParamLimits

0x8819,	// (0x00057295) popup_snote2_single_graphic_window_t1

0x8865,	// (0x000572e1) popup_snote2_single_graphic_window_t2_ParamLimits

0x8865,	// (0x000572e1) popup_snote2_single_graphic_window_t2

0x8727,	// (0x000571a3) popup_snote2_single_graphic_window_t3_ParamLimits

0x8727,	// (0x000571a3) popup_snote2_single_graphic_window_t3

0x8768,	// (0x000571e4) popup_snote2_single_graphic_window_t4_ParamLimits

0x8768,	// (0x000571e4) popup_snote2_single_graphic_window_t4

0x879e,	// (0x0005721a) popup_snote2_single_graphic_window_t5_ParamLimits

0x879e,	// (0x0005721a) popup_snote2_single_graphic_window_t5

0x0004,

0xfc9c,	// (0x0005e718) popup_snote2_single_graphic_window_t_ParamLimits

0xfc9c,	// (0x0005e718) popup_snote2_single_graphic_window_t

0x728d,	// (0x00055d09) clock_nsta_pane_cp2_t1

0x728d,	// (0x00055d09) clock_nsta_pane_cp2_t2

0x0001,

0xfab0,	// (0x0005e52c) clock_nsta_pane_cp2_t

0x098f,	// (0x0004f40b) form_field_data_wide_pane_g1_ParamLimits

0x3cbe,	// (0x0005273a) form_field_data_wide_pane_g2_ParamLimits

0x3cbe,	// (0x0005273a) form_field_data_wide_pane_g2

0x3d31,	// (0x000527ad) form_field_data_wide_pane_g3_ParamLimits

0x3d31,	// (0x000527ad) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0005e102) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0005e102) form_field_data_wide_pane_g

0xde48,	// (0x0005c8c4) grid_touch_3_pane_ParamLimits

0xde48,	// (0x0005c8c4) grid_touch_3_pane

0xe348,	// (0x0005cdc4) cell_touch_3_pane_ParamLimits

0xe348,	// (0x0005cdc4) cell_touch_3_pane

0x77e6,	// (0x00056262) cell_touch_3_pane_g1

0x77e6,	// (0x00056262) cell_touch_3_pane_g2

0x0001,

0xfb35,	// (0x0005e5b1) cell_touch_3_pane_g

0x37ea,	// (0x00052266) cont_query_data_pane

0x37f2,	// (0x0005226e) cont_query_data_pane_cp1

0x88df,	// (0x0005735b) button_value_adjust_pane_cp7

0x88e7,	// (0x00057363) query_popup_pane_cp3

0x4486,	// (0x00052f02) bg_popup_sub_pane_cp22_ParamLimits

0x0d53,	// (0x0004f7cf) navi_navi_volume_pane_cp2

0x0d6e,	// (0x0004f7ea) popup_side_volume_key_window_g2

0x0d7d,	// (0x0004f7f9) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0005e198) popup_side_volume_key_window_g

0x0d9a,	// (0x0004f816) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0005e19f) popup_side_volume_key_window_t

0x473d,	// (0x000531b9) popup_side_volume_key_window_ParamLimits

0xd174,	// (0x0005bbf0) list_double_graphic_pane_g4_ParamLimits

0xd174,	// (0x0005bbf0) list_double_graphic_pane_g4

0xdcc7,	// (0x0005c743) list_single_2heading_msg_pane_ParamLimits

0xdcc7,	// (0x0005c743) list_single_2heading_msg_pane

0xd762,	// (0x0005c1de) list_single_2heading_msg_pane_g1_ParamLimits

0xd762,	// (0x0005c1de) list_single_2heading_msg_pane_g1

0xd76e,	// (0x0005c1ea) list_single_2heading_msg_pane_g2_ParamLimits

0xd76e,	// (0x0005c1ea) list_single_2heading_msg_pane_g2

0xd781,	// (0x0005c1fd) list_single_2heading_msg_pane_g3_ParamLimits

0xd781,	// (0x0005c1fd) list_single_2heading_msg_pane_g3

0xd78d,	// (0x0005c209) list_single_2heading_msg_pane_g4_ParamLimits

0xd78d,	// (0x0005c209) list_single_2heading_msg_pane_g4

0x0003,

0xfca7,	// (0x0005e723) list_single_2heading_msg_pane_g_ParamLimits

0xfca7,	// (0x0005e723) list_single_2heading_msg_pane_g

0xc7d7,	// (0x0005b253) list_single_2heading_msg_pane_t1_ParamLimits

0xc7d7,	// (0x0005b253) list_single_2heading_msg_pane_t1

0xc7ff,	// (0x0005b27b) list_single_2heading_msg_pane_t2_ParamLimits

0xc7ff,	// (0x0005b27b) list_single_2heading_msg_pane_t2

0xc86a,	// (0x0005b2e6) list_single_2heading_msg_pane_t3_ParamLimits

0xc86a,	// (0x0005b2e6) list_single_2heading_msg_pane_t3

0x330b,	// (0x00051d87) list_single_2heading_msg_pane_t4_ParamLimits

0x330b,	// (0x00051d87) list_single_2heading_msg_pane_t4

0x0003,

0xfcb0,	// (0x0005e72c) list_single_2heading_msg_pane_t_ParamLimits

0xfcb0,	// (0x0005e72c) list_single_2heading_msg_pane_t

0x33ff,	// (0x00051e7b) title_pane_g4_ParamLimits

0x33ff,	// (0x00051e7b) title_pane_g4

0x0b62,	// (0x0004f5de) title_pane_stacon_g3_ParamLimits

0x0b62,	// (0x0004f5de) title_pane_stacon_g3

0x840d,	// (0x00056e89) list_single_2graphic_im_pane_g4_ParamLimits

0x840d,	// (0x00056e89) list_single_2graphic_im_pane_g4

0x62cc,	// (0x00054d48) popup_side_volume_key_window_cp

0x6ac5,	// (0x00055541) main_idle_act2_pane_t1

0x178b,	// (0x00050207) toolbar_button_pane_g10

0xd13b,	// (0x0005bbb7) popup_toolbar_window_cp1

0x727e,	// (0x00055cfa) clock_nsta_pane_cp_t1

0x727e,	// (0x00055cfa) clock_nsta_pane_cp_t2

0x0001,

0xfaab,	// (0x0005e527) clock_nsta_pane_cp_t

0x0d53,	// (0x0004f7cf) navi_navi_volume_pane_cp2_ParamLimits

0x0d62,	// (0x0004f7de) popup_side_volume_key_window_g1_ParamLimits

0x0d6e,	// (0x0004f7ea) popup_side_volume_key_window_g2_ParamLimits

0x0d7d,	// (0x0004f7f9) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0005e198) popup_side_volume_key_window_g_ParamLimits

0x1c0b,	// (0x00050687) fep_hwr_aid_pane

0x1cb2,	// (0x0005072e) bg_fep_hwr_top_pane_g4_ParamLimits

0x7842,	// (0x000562be) fep_hwr_top_pane_g1_ParamLimits

0x7854,	// (0x000562d0) fep_hwr_top_pane_g2_ParamLimits

0x1cd2,	// (0x0005074e) fep_hwr_top_pane_g3_ParamLimits

0xfb00,	// (0x0005e57c) fep_hwr_top_pane_g_ParamLimits

0x1ce7,	// (0x00050763) fep_hwr_top_text_pane_ParamLimits

0x608f,	// (0x00054b0b) aid_touch_tab_arrow_arrow_2

0x6098,	// (0x00054b14) aid_touch_tab_arrow_left_2

0x1c1f,	// (0x0005069b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1c56,	// (0x000506d2) fep_hwr_prediction_pane

0x79b4,	// (0x00056430) fep_vkb_prediction_pane

0xe106,	// (0x0005cb82) fep_vkb_side_pane_g3_ParamLimits

0xe106,	// (0x0005cb82) fep_vkb_side_pane_g3

0x1e62,	// (0x000508de) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1ece,	// (0x0005094a) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1edb,	// (0x00050957) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbaf,	// (0x0005e62b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x200a,	// (0x00050a86) fep_hwr_prediction_pane_g1

0x2014,	// (0x00050a90) fep_hwr_prediction_pane_g2

0x201c,	// (0x00050a98) fep_hwr_prediction_pane_g3

0x2024,	// (0x00050aa0) fep_hwr_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0005e735) fep_hwr_prediction_pane_g

0x890c,	// (0x00057388) fep_vkb_prediction_pane_g1

0x8916,	// (0x00057392) fep_vkb_prediction_pane_g2

0x891e,	// (0x0005739a) fep_vkb_prediction_pane_g3

0x8926,	// (0x000573a2) fep_vkb_prediction_pane_g4

0x0003,

0xfcc2,	// (0x0005e73e) fep_vkb_prediction_pane_g

0x1a8b,	// (0x00050507) slider_set_pane_g3

0x1a9f,	// (0x0005051b) slider_set_pane_g4

0x1ab7,	// (0x00050533) slider_set_pane_g5

0x1a8b,	// (0x00050507) slider_set_pane_g6

0x1acd,	// (0x00050549) slider_set_pane_g7

0x6729,	// (0x000551a5) slider_form_pane_g3

0x6732,	// (0x000551ae) slider_form_pane_g4

0x673a,	// (0x000551b6) slider_form_pane_g5

0x6729,	// (0x000551a5) slider_form_pane_g6

0xdc99,	// (0x0005c715) slider_form_pane_g7

0x6d6f,	// (0x000557eb) slider_set_pane_vc_g3

0x6d78,	// (0x000557f4) slider_set_pane_vc_g4

0x6d81,	// (0x000557fd) slider_set_pane_vc_g5

0x6d6f,	// (0x000557eb) slider_set_pane_vc_g6

0x6d8a,	// (0x00055806) slider_set_pane_vc_g7

0x6f4a,	// (0x000559c6) slider_form_pane_vc_g1

0x6f53,	// (0x000559cf) slider_form_pane_vc_g2

0x6f5c,	// (0x000559d8) slider_form_pane_vc_g3

0x6f4a,	// (0x000559c6) slider_form_pane_vc_g4

0x6f65,	// (0x000559e1) slider_form_pane_vc_g5

0x0004,

0xfa7d,	// (0x0005e4f9) slider_form_pane_vc_g

0x013d,	// (0x0004ebb9) main_idle_act3_pane

0x892e,	// (0x000573aa) ai3_links_pane

0xe390,	// (0x0005ce0c) popup_ai3_data_window_ParamLimits

0xe390,	// (0x0005ce0c) popup_ai3_data_window

0x33b7,	// (0x00051e33) grid_ai3_links_pane

0xe3aa,	// (0x0005ce26) cell_ai3_links_pane_ParamLimits

0xe3aa,	// (0x0005ce26) cell_ai3_links_pane

0x8969,	// (0x000573e5) bg_popup_sub_pane_cp11

0x8976,	// (0x000573f2) cell_ai3_links_pane_g1

0x33b7,	// (0x00051e33) bg_popup_sub_pane_cp12

0x899b,	// (0x00057417) heading_ai3_data_pane

0x89a3,	// (0x0005741f) list_ai3_gene_pane

0x89af,	// (0x0005742b) popup_ai3_data_window_g1

0x89b7,	// (0x00057433) heading_ai3_data_pane_g1

0x89bf,	// (0x0005743b) heading_ai3_data_pane_t1

0x89cd,	// (0x00057449) list_double_ai3_gene_pane_ParamLimits

0x89cd,	// (0x00057449) list_double_ai3_gene_pane

0x89da,	// (0x00057456) list_single_ai3_gene_pane_ParamLimits

0x89da,	// (0x00057456) list_single_ai3_gene_pane

0x77ab,	// (0x00056227) list_highlight_pane_cp7_ParamLimits

0x77ab,	// (0x00056227) list_highlight_pane_cp7

0x89e7,	// (0x00057463) list_single_a13_gene_pane_t1_ParamLimits

0x89e7,	// (0x00057463) list_single_a13_gene_pane_t1

0x89fe,	// (0x0005747a) list_single_ai3_gene_pane_g1

0x8a07,	// (0x00057483) list_single_ai3_gene_pane_g2

0x0001,

0xfccb,	// (0x0005e747) list_single_ai3_gene_pane_g

0x8a0f,	// (0x0005748b) list_double_ai3_gene_pane_g1_ParamLimits

0x8a0f,	// (0x0005748b) list_double_ai3_gene_pane_g1

0x8a1b,	// (0x00057497) list_double_ai3_gene_pane_t1_ParamLimits

0x8a1b,	// (0x00057497) list_double_ai3_gene_pane_t1

0x8a37,	// (0x000574b3) list_double_ai3_gene_pane_t2_ParamLimits

0x8a37,	// (0x000574b3) list_double_ai3_gene_pane_t2

0x8a4d,	// (0x000574c9) list_double_ai3_gene_pane_t3_ParamLimits

0x8a4d,	// (0x000574c9) list_double_ai3_gene_pane_t3

0x0002,

0xfcd0,	// (0x0005e74c) list_double_ai3_gene_pane_t_ParamLimits

0xfcd0,	// (0x0005e74c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x3248,	// (0x00051cc4) aid_size_min_col_2

0xe37a,	// (0x0005cdf6) aid_size_min_msg_ParamLimits

0xe37a,	// (0x0005cdf6) aid_size_min_msg

0xe11a,	// (0x0005cb96) fep_vkb_top_text_pane_g2_ParamLimits

0xe11a,	// (0x0005cb96) fep_vkb_top_text_pane_g2

0x0001,

0xfb30,	// (0x0005e5ac) fep_vkb_top_text_pane_g_ParamLimits

0xfb30,	// (0x0005e5ac) fep_vkb_top_text_pane_g

0x013d,	// (0x0004ebb9) main_hc_apps_shell_pane

0x8a6a,	// (0x000574e6) grid_hc_apps_pane_ParamLimits

0x8a6a,	// (0x000574e6) grid_hc_apps_pane

0x8a79,	// (0x000574f5) list_hc_apps_pane

0x8a81,	// (0x000574fd) scroll_pane_cp37_ParamLimits

0x8a81,	// (0x000574fd) scroll_pane_cp37

0xe3c4,	// (0x0005ce40) cell_hc_apps_pane_ParamLimits

0xe3c4,	// (0x0005ce40) cell_hc_apps_pane

0xe482,	// (0x0005cefe) cell_hc_apps_pane_g1_ParamLimits

0xe482,	// (0x0005cefe) cell_hc_apps_pane_g1

0x8b6c,	// (0x000575e8) cell_hc_apps_pane_g2_ParamLimits

0x8b6c,	// (0x000575e8) cell_hc_apps_pane_g2

0x8b88,	// (0x00057604) cell_hc_apps_pane_g3_ParamLimits

0x8b88,	// (0x00057604) cell_hc_apps_pane_g3

0x0002,

0xfcd7,	// (0x0005e753) cell_hc_apps_pane_g_ParamLimits

0xfcd7,	// (0x0005e753) cell_hc_apps_pane_g

0xe4af,	// (0x0005cf2b) cell_hc_apps_pane_t1_ParamLimits

0xe4af,	// (0x0005cf2b) cell_hc_apps_pane_t1

0x3734,	// (0x000521b0) grid_highlight_pane_cp10_ParamLimits

0x3734,	// (0x000521b0) grid_highlight_pane_cp10

0xe4ed,	// (0x0005cf69) list_single_hc_apps_pane_ParamLimits

0xe4ed,	// (0x0005cf69) list_single_hc_apps_pane

0xe51a,	// (0x0005cf96) list_single_hc_apps_pane_g1

0xd7a5,	// (0x0005c221) list_single_hc_apps_pane_g2

0x0001,

0xfcde,	// (0x0005e75a) list_single_hc_apps_pane_g

0xd7be,	// (0x0005c23a) list_single_hc_apps_pane_g2_copy1

0x3365,	// (0x00051de1) list_single_hc_apps_pane_t1

0x34ab,	// (0x00051f27) bg_set_opt_pane_cp_ParamLimits

0x039e,	// (0x0004ee1a) setting_slider_pane_t1_ParamLimits

0x03b7,	// (0x0004ee33) setting_slider_pane_t2_ParamLimits

0x03d1,	// (0x0004ee4d) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0005dfe0) setting_slider_pane_t_ParamLimits

0x03e9,	// (0x0004ee65) slider_set_pane_ParamLimits

0x106a,	// (0x0004fae6) control_pane_g5_ParamLimits

0x106a,	// (0x0004fae6) control_pane_g5

0x6578,	// (0x00054ff4) slider_set_pane_g1_ParamLimits

0x1a7f,	// (0x000504fb) slider_set_pane_g2_ParamLimits

0x1a8b,	// (0x00050507) slider_set_pane_g3_ParamLimits

0x1a9f,	// (0x0005051b) slider_set_pane_g4_ParamLimits

0x1ab7,	// (0x00050533) slider_set_pane_g5_ParamLimits

0x1a8b,	// (0x00050507) slider_set_pane_g6_ParamLimits

0x1acd,	// (0x00050549) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0005e3e6) slider_set_pane_g_ParamLimits

0x481e,	// (0x0005329a) navi_icon_text_pane_ParamLimits

0xd495,	// (0x0005bf11) aid_fill_nsta_2_ParamLimits

0xd4cc,	// (0x0005bf48) aid_touch_tab_arrow_left_ParamLimits

0xd4e2,	// (0x0005bf5e) aid_touch_tab_arrow_right_ParamLimits

0xd57d,	// (0x0005bff9) clock_nsta_pane_ParamLimits

0x6071,	// (0x00054aed) navi_icon_pane_g1_ParamLimits

0x607d,	// (0x00054af9) navi_text_pane_t1_ParamLimits

0x738a,	// (0x00055e06) navi_icon_text_pane_g1_ParamLimits

0x7396,	// (0x00055e12) navi_icon_text_pane_t1_ParamLimits

0xe51a,	// (0x0005cf96) list_single_hc_apps_pane_g1_ParamLimits

0xd7a5,	// (0x0005c221) list_single_hc_apps_pane_g2_ParamLimits

0xfcde,	// (0x0005e75a) list_single_hc_apps_pane_g_ParamLimits

0xd7be,	// (0x0005c23a) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x3365,	// (0x00051de1) list_single_hc_apps_pane_t1_ParamLimits

0xb708,	// (0x0005a184) popup_toolbar2_fixed_window_ParamLimits

0xb708,	// (0x0005a184) popup_toolbar2_fixed_window

0xc5f2,	// (0x0005b06e) popup_toolbar2_float_window

0x33b7,	// (0x00051e33) bg_popup_sub_pane_cp27

0x8c5f,	// (0x000576db) grid_toolbar2_float_pane

0x33b7,	// (0x00051e33) bg_popup_sub_pane_cp26

0x8c5f,	// (0x000576db) grid_toolbar2_fixed_pane

0xe533,	// (0x0005cfaf) cell_toolbar2_fixed_pane_ParamLimits

0xe533,	// (0x0005cfaf) cell_toolbar2_fixed_pane

0xe54d,	// (0x0005cfc9) cell_toolbar2_fixed_pane_g1

0x8c80,	// (0x000576fc) toolbar2_fixed_button_pane

0x51f4,	// (0x00053c70) toolbar2_fixed_button_pane_g1

0x5204,	// (0x00053c80) toolbar2_fixed_button_pane_g2

0x51fc,	// (0x00053c78) toolbar2_fixed_button_pane_g3

0x5214,	// (0x00053c90) toolbar2_fixed_button_pane_g4

0x520c,	// (0x00053c88) toolbar2_fixed_button_pane_g5

0x521c,	// (0x00053c98) toolbar2_fixed_button_pane_g6

0x5224,	// (0x00053ca0) toolbar2_fixed_button_pane_g7

0x5234,	// (0x00053cb0) toolbar2_fixed_button_pane_g8

0x522c,	// (0x00053ca8) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0005e2e8) toolbar2_fixed_button_pane_g

0x8c88,	// (0x00057704) cell_toolbar2_float_pane_ParamLimits

0x8c88,	// (0x00057704) cell_toolbar2_float_pane

0x8c99,	// (0x00057715) cell_toolbar2_float_pane_g1

0x8c80,	// (0x000576fc) toolbar2_fixed_button_pane_cp

0xdff4,	// (0x0005ca70) fep_vkb_accented_list_pane_ParamLimits

0xdff4,	// (0x0005ca70) fep_vkb_accented_list_pane

0x1e42,	// (0x000508be) bg_popup_fep_shadow_pane_g9

0x499e,	// (0x0005341a) bg_popup_fep_shadow_pane_cp3

0x3e6e,	// (0x000528ea) list_accented_list_pane

0x8ca2,	// (0x0005771e) list_single_accented_list_pane_ParamLimits

0x8ca2,	// (0x0005771e) list_single_accented_list_pane

0x499e,	// (0x0005341a) list_highlight_pane_cp10

0x8cb3,	// (0x0005772f) list_single_accented_list_pane_t1

0xc51c,	// (0x0005af98) popup_slider_window_ParamLimits

0xc51c,	// (0x0005af98) popup_slider_window

0x88ef,	// (0x0005736b) aid_indentation_list_msg

0xe646,	// (0x0005d0c2) bg_popup_window_pane_cp19

0x8dd7,	// (0x00057853) popup_slider_window_g1

0x8df3,	// (0x0005786f) popup_slider_window_g2

0x8e0f,	// (0x0005788b) popup_slider_window_g3

0x0005,

0xfce3,	// (0x0005e75f) popup_slider_window_g

0x8e6b,	// (0x000578e7) popup_slider_window_t1

0x8edf,	// (0x0005795b) small_volume_slider_vertical_pane

0x77e6,	// (0x00056262) small_volume_slider_vertical_pane_g1

0x77e6,	// (0x00056262) small_volume_slider_vertical_pane_g2

0x8efb,	// (0x00057977) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf5,	// (0x0005e771) small_volume_slider_vertical_pane_g

0xb676,	// (0x0005a0f2) area_side_right_pane_ParamLimits

0xb676,	// (0x0005a0f2) area_side_right_pane

0xc8d8,	// (0x0005b354) aid_size_side_button_ParamLimits

0xc8d8,	// (0x0005b354) aid_size_side_button

0xc8f1,	// (0x0005b36d) grid_sctrl_middle_pane_ParamLimits

0xc8f1,	// (0x0005b36d) grid_sctrl_middle_pane

0x205f,	// (0x00050adb) sctrl_sk_bottom_pane

0x2070,	// (0x00050aec) sctrl_sk_top_pane

0x2082,	// (0x00050afe) aid_touch_sctrl_top

0x208f,	// (0x00050b0b) bg_sctrl_sk_pane_ParamLimits

0x208f,	// (0x00050b0b) bg_sctrl_sk_pane

0x209d,	// (0x00050b19) sctrl_sk_top_pane_g1

0x20aa,	// (0x00050b26) sctrl_sk_top_pane_t1

0x2082,	// (0x00050afe) aid_touch_sctrl_bottom

0x208f,	// (0x00050b0b) bg_sctrl_sk_pane_cp_ParamLimits

0x208f,	// (0x00050b0b) bg_sctrl_sk_pane_cp

0x20c5,	// (0x00050b41) sctrl_sk_bottom_pane_g1

0x20aa,	// (0x00050b26) sctrl_sk_bottom_pane_t1

0xc90b,	// (0x0005b387) cell_sctrl_middle_pane_ParamLimits

0xc90b,	// (0x0005b387) cell_sctrl_middle_pane

0xc91c,	// (0x0005b398) aid_touch_sctrl_middle_ParamLimits

0xc91c,	// (0x0005b398) aid_touch_sctrl_middle

0xc929,	// (0x0005b3a5) bg_sctrl_middle_pane_ParamLimits

0xc929,	// (0x0005b3a5) bg_sctrl_middle_pane

0x2732,	// (0x000511ae) cell_sctrl_middle_pane_g1_ParamLimits

0x2732,	// (0x000511ae) cell_sctrl_middle_pane_g1

0xc937,	// (0x0005b3b3) cell_sctrl_middle_pane_g2_ParamLimits

0xc937,	// (0x0005b3b3) cell_sctrl_middle_pane_g2

0x0001,

0xfd01,	// (0x0005e77d) cell_sctrl_middle_pane_g_ParamLimits

0xfd01,	// (0x0005e77d) cell_sctrl_middle_pane_g

0x51f4,	// (0x00053c70) bg_sctrl_middle_pane_g1

0x51fc,	// (0x00053c78) bg_sctrl_middle_pane_g2

0x5204,	// (0x00053c80) bg_sctrl_middle_pane_g3

0x520c,	// (0x00053c88) bg_sctrl_middle_pane_g4

0x5214,	// (0x00053c90) bg_sctrl_middle_pane_g5

0x521c,	// (0x00053c98) bg_sctrl_middle_pane_g6

0x5224,	// (0x00053ca0) bg_sctrl_middle_pane_g7

0x522c,	// (0x00053ca8) bg_sctrl_middle_pane_g8

0x0007,

0xfd06,	// (0x0005e782) bg_sctrl_middle_pane_g

0x5234,	// (0x00053cb0) bg_sctrl_middle_pane_g8_copy1

0x51f4,	// (0x00053c70) bg_sctrl_sk_pane_g1

0x5204,	// (0x00053c80) bg_sctrl_sk_pane_g2

0x51fc,	// (0x00053c78) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0005e2e8) bg_sctrl_sk_pane_g

0x3c46,	// (0x000526c2) aid_size_touch_scroll_bar

0x5214,	// (0x00053c90) bg_sctrl_sk_pane_g4

0x520c,	// (0x00053c88) bg_sctrl_sk_pane_g5

0x521c,	// (0x00053c98) bg_sctrl_sk_pane_g6

0x5224,	// (0x00053ca0) bg_sctrl_sk_pane_g7

0x5234,	// (0x00053cb0) bg_sctrl_sk_pane_g8

0x522c,	// (0x00053ca8) bg_sctrl_sk_pane_g9

0x1228,	// (0x0004fca4) popup_fep_china_hwr2_fs_candidate_window

0xc03c,	// (0x0005aab8) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc03c,	// (0x0005aab8) popup_fep_china_hwr2_fs_control_window

0x1e62,	// (0x000508de) sctrl_sk_top_pane_g2

0x0001,

0xfcfc,	// (0x0005e778) sctrl_sk_top_pane_g

0xe6fe,	// (0x0005d17a) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe6fe,	// (0x0005d17a) aid_fep_china_hwr2_fs_cell

0xe712,	// (0x0005d18e) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe712,	// (0x0005d18e) bg_popup_fep_shadow_pane_cp4

0xe729,	// (0x0005d1a5) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe729,	// (0x0005d1a5) bg_popup_fep_shadow_pane_cp5

0xe73b,	// (0x0005d1b7) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe73b,	// (0x0005d1b7) popup_fep_china_hwr2_fs_control_bar_grid

0xe74f,	// (0x0005d1cb) popup_fep_china_hwr2_fs_control_funtion_grid

0x8f57,	// (0x000579d3) aid_fep_china_hwr2_fs_candi_cell

0x33b7,	// (0x00051e33) bg_popup_fep_shadow_pane_cp6

0x8f61,	// (0x000579dd) popup_fep_china_hwr2_fs_candidate_grid

0xe757,	// (0x0005d1d3) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe757,	// (0x0005d1d3) cell_fep_china_hwr2_fs_funtion_grid

0x77e6,	// (0x00056262) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8f83,	// (0x000579ff) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8f83,	// (0x000579ff) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8f91,	// (0x00057a0d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8f91,	// (0x00057a0d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd17,	// (0x0005e793) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd17,	// (0x0005e793) cell_fep_china_hwr2_fs_funtion_grid_g

0xe76f,	// (0x0005d1eb) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe76f,	// (0x0005d1eb) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe784,	// (0x0005d200) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe784,	// (0x0005d200) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd1c,	// (0x0005e798) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd1c,	// (0x0005e798) cell_fep_china_hwr2_fs_funtion_grid_t

0x8fd8,	// (0x00057a54) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8fe0,	// (0x00057a5c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8fe8,	// (0x00057a64) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd21,	// (0x0005e79d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8ff0,	// (0x00057a6c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8ff0,	// (0x00057a6c) cell_fep_china_hwr2_fs_candidate_grid

0x9009,	// (0x00057a85) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9011,	// (0x00057a8d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x77e6,	// (0x00056262) cell_fep_china_hwr2_fs_candidate_grid_g1

0x77e6,	// (0x00056262) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb35,	// (0x0005e5b1) cell_fep_china_hwr2_fs_candidate_grid_g

0x9019,	// (0x00057a95) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4dde,	// (0x0005385a) clock_nsta_pane_cp_24_ParamLimits

0x4dde,	// (0x0005385a) clock_nsta_pane_cp_24

0x4e68,	// (0x000538e4) indicator_nsta_pane_cp_24_ParamLimits

0x4e68,	// (0x000538e4) indicator_nsta_pane_cp_24

0x5eed,	// (0x00054969) heading_pane_g1

0x0001,

0xf8d1,	// (0x0005e34d) heading_pane_g

0x68cc,	// (0x00055348) grid_sct_catagory_button_pane

0x693e,	// (0x000553ba) scroll_pane_cp5_ParamLimits

0x73d8,	// (0x00055e54) button_value_adjust_pane_cp5_ParamLimits

0x73d8,	// (0x00055e54) button_value_adjust_pane_cp5

0x74b7,	// (0x00055f33) form2_midp_time_pane_ParamLimits

0x9027,	// (0x00057aa3) cell_sct_catagory_button_pane_ParamLimits

0x9027,	// (0x00057aa3) cell_sct_catagory_button_pane

0x77ab,	// (0x00056227) bg_button_pane_cp01_ParamLimits

0x77ab,	// (0x00056227) bg_button_pane_cp01

0x77e6,	// (0x00056262) cell_sct_catagory_button_pane_g1

0xc595,	// (0x0005b011) popup_tb_extension_window

0xe7a0,	// (0x0005d21c) aid_size_cell_ext_ParamLimits

0xe7a0,	// (0x0005d21c) aid_size_cell_ext

0x3a88,	// (0x00052504) bg_tb_trans_pane_cp1_ParamLimits

0x3a88,	// (0x00052504) bg_tb_trans_pane_cp1

0xe7c6,	// (0x0005d242) grid_tb_ext_pane_ParamLimits

0xe7c6,	// (0x0005d242) grid_tb_ext_pane

0xe801,	// (0x0005d27d) cell_tb_ext_pane_ParamLimits

0xe801,	// (0x0005d27d) cell_tb_ext_pane

0xe829,	// (0x0005d2a5) cell_tb_ext_pane_g1_ParamLimits

0xe829,	// (0x0005d2a5) cell_tb_ext_pane_g1

0x90bb,	// (0x00057b37) cell_tb_ext_pane_t1

0x3734,	// (0x000521b0) list_highlight_pane_cp11_ParamLimits

0x3734,	// (0x000521b0) list_highlight_pane_cp11

0xb71d,	// (0x0005a199) popup_uni_indicator_window_ParamLimits

0xb71d,	// (0x0005a199) popup_uni_indicator_window

0x3d23,	// (0x0005279f) bg_popup_sub_pane_cp14

0x90d6,	// (0x00057b52) list_uniindi_pane

0x90e2,	// (0x00057b5e) uniindi_top_pane

0x3734,	// (0x000521b0) bg_uniindi_top_pane

0x9101,	// (0x00057b7d) uniindi_top_pane_g1

0x9117,	// (0x00057b93) uniindi_top_pane_g2

0x0003,

0xfd28,	// (0x0005e7a4) uniindi_top_pane_g

0x9141,	// (0x00057bbd) uniindi_top_pane_t1

0x916b,	// (0x00057be7) list_single_uniindi_pane_ParamLimits

0x916b,	// (0x00057be7) list_single_uniindi_pane

0x77e6,	// (0x00056262) bg_uniindi_top_pane_g1

0x917e,	// (0x00057bfa) list_single_uniindi_pane_g1

0x9191,	// (0x00057c0d) list_single_uniindi_pane_t1

0x013d,	// (0x0004ebb9) control_bg_pane

0x91b6,	// (0x00057c32) bg_sctrl_sk_pane_cp1

0x91bf,	// (0x00057c3b) bg_sctrl_sk_pane_cp2

0x91c8,	// (0x00057c44) control_bg_pane_g1

0x91d1,	// (0x00057c4d) control_bg_pane_g2

0x0001,

0xfd31,	// (0x0005e7ad) control_bg_pane_g

0x7221,	// (0x00055c9d) cell_indicator_nsta_pane_g1_ParamLimits

0xde77,	// (0x0005c8f3) cell_indicator_nsta_pane_g2_ParamLimits

0xfa99,	// (0x0005e515) cell_indicator_nsta_pane_g_ParamLimits

0x3025,	// (0x00051aa1) form2_midp_time_pane_t1_ParamLimits

0x1bfd,	// (0x00050679) main_idle_act4_pane_ParamLimits

0x1bfd,	// (0x00050679) main_idle_act4_pane

0xc595,	// (0x0005b011) popup_tb_extension_window_ParamLimits

0xe7e8,	// (0x0005d264) tb_ext_find_pane_ParamLimits

0xe7e8,	// (0x0005d264) tb_ext_find_pane

0x91da,	// (0x00057c56) ai_gene_pane_1_cp1

0x4ad7,	// (0x00053553) ai_gene_pane_2_cp1

0x91e2,	// (0x00057c5e) list_single_idle_plugin_calendar_pane

0x91eb,	// (0x00057c67) list_single_idle_plugin_notification_pane

0x91f4,	// (0x00057c70) list_single_idle_plugin_player_pane

0xe846,	// (0x0005d2c2) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe846,	// (0x0005d2c2) list_single_idle_plugin_shortcut_pane

0xe86e,	// (0x0005d2ea) main_idle_act4_pane_t1

0xe884,	// (0x0005d300) main_idle_act4_pane_t2

0x0001,

0xfd36,	// (0x0005e7b2) main_idle_act4_pane_t

0xe89a,	// (0x0005d316) middle_sk_idle_act4_pane_ParamLimits

0xe89a,	// (0x0005d316) middle_sk_idle_act4_pane

0xe8b6,	// (0x0005d332) popup_clock_digital_analogue_window_cp2

0xe8de,	// (0x0005d35a) shortcut_wheel_idle_act4_pane_ParamLimits

0xe8de,	// (0x0005d35a) shortcut_wheel_idle_act4_pane

0x77e6,	// (0x00056262) shortcut_wheel_idle_act4_pane_g1

0x77e6,	// (0x00056262) shortcut_wheel_idle_act4_pane_g2

0x77e6,	// (0x00056262) shortcut_wheel_idle_act4_pane_g3

0x77e6,	// (0x00056262) shortcut_wheel_idle_act4_pane_g4

0x77e6,	// (0x00056262) shortcut_wheel_idle_act4_pane_g5

0x9287,	// (0x00057d03) shortcut_wheel_idle_act4_pane_g6

0x928f,	// (0x00057d0b) shortcut_wheel_idle_act4_pane_g7

0x9297,	// (0x00057d13) shortcut_wheel_idle_act4_pane_g8

0x929f,	// (0x00057d1b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd3b,	// (0x0005e7b7) shortcut_wheel_idle_act4_pane_g

0xe17e,	// (0x0005cbfa) middle_sk_idle_act4_pane_g1_ParamLimits

0xe17e,	// (0x0005cbfa) middle_sk_idle_act4_pane_g1

0xe95b,	// (0x0005d3d7) middle_sk_idle_act4_pane_g2_ParamLimits

0xe95b,	// (0x0005d3d7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5e,	// (0x0005e7da) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5e,	// (0x0005e7da) middle_sk_idle_act4_pane_g

0xe973,	// (0x0005d3ef) middle_sk_idle_act4_pane_t1_ParamLimits

0xe973,	// (0x0005d3ef) middle_sk_idle_act4_pane_t1

0xe9a2,	// (0x0005d41e) grid_ai_shortcut_pane_ParamLimits

0xe9a2,	// (0x0005d41e) grid_ai_shortcut_pane

0xe9bf,	// (0x0005d43b) list_highlight_pane_cp16_ParamLimits

0xe9bf,	// (0x0005d43b) list_highlight_pane_cp16

0xe9cc,	// (0x0005d448) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe9cc,	// (0x0005d448) list_single_idle_plugin_shortcut_pane_g1

0xe9d8,	// (0x0005d454) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe9d8,	// (0x0005d454) list_single_idle_plugin_shortcut_pane_g2

0xe9f4,	// (0x0005d470) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe9f4,	// (0x0005d470) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd63,	// (0x0005e7df) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd63,	// (0x0005e7df) list_single_idle_plugin_shortcut_pane_g

0xea09,	// (0x0005d485) cell_ai_shortcut_pane_ParamLimits

0xea09,	// (0x0005d485) cell_ai_shortcut_pane

0xea1f,	// (0x0005d49b) cell_ai_shortcut_pane_g1_ParamLimits

0xea1f,	// (0x0005d49b) cell_ai_shortcut_pane_g1

0x91da,	// (0x00057c56) ai_gene_pane_1_cp2

0x93cf,	// (0x00057e4b) ai_gene_pane_2_cp2

0x93d7,	// (0x00057e53) list_highlight_pane_cp15

0x93e0,	// (0x00057e5c) list_single_idle_plugin_calendar_pane_g1

0x93d7,	// (0x00057e53) list_highlight_pane_cp17

0x93e8,	// (0x00057e64) list_single_idle_plugin_calendar_pane_g1_copy1

0x93f0,	// (0x00057e6c) list_single_idle_plugin_player_pane_g1

0x6b67,	// (0x000555e3) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6a,	// (0x0005e7e6) list_single_idle_plugin_player_pane_g

0x93f8,	// (0x00057e74) list_single_idle_plugin_player_pane_t1

0x9406,	// (0x00057e82) list_single_idle_plugin_player_pane_t2

0x9414,	// (0x00057e90) list_single_idle_plugin_player_pane_t3

0x9422,	// (0x00057e9e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6f,	// (0x0005e7eb) list_single_idle_plugin_player_pane_t

0x9430,	// (0x00057eac) wait_bar_pane_cp15

0x9438,	// (0x00057eb4) grid_ai_notification_pane

0x6b67,	// (0x000555e3) list_single_idle_plugin_notification_pane_g1

0xea41,	// (0x0005d4bd) cell_ai_notification_pane_ParamLimits

0xea41,	// (0x0005d4bd) cell_ai_notification_pane

0x944e,	// (0x00057eca) cell_ai_notification_pane_g1

0x9456,	// (0x00057ed2) cell_ai_notification_pane_t1

0xea4e,	// (0x0005d4ca) tb_ext_find_button_pane

0xea56,	// (0x0005d4d2) tb_ext_find_pane_g1

0xea5e,	// (0x0005d4da) tb_ext_find_pane_t1

0x4396,	// (0x00052e12) tb_ext_find_button_pane_g1

0x9482,	// (0x00057efe) tb_ext_find_button_pane_g2

0x0001,

0xfd78,	// (0x0005e7f4) tb_ext_find_button_pane_g

0xe86e,	// (0x0005d2ea) main_idle_act4_pane_t1_ParamLimits

0xe884,	// (0x0005d300) main_idle_act4_pane_t2_ParamLimits

0xfd36,	// (0x0005e7b2) main_idle_act4_pane_t_ParamLimits

0xe8b6,	// (0x0005d332) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe8ce,	// (0x0005d34a) sat_plugin_idle_act4_pane_ParamLimits

0xe8ce,	// (0x0005d34a) sat_plugin_idle_act4_pane

0xea6c,	// (0x0005d4e8) sat_plugin_idle_act4_pane_t1_ParamLimits

0xea6c,	// (0x0005d4e8) sat_plugin_idle_act4_pane_t1

0xea84,	// (0x0005d500) sat_plugin_idle_act4_pane_t2_ParamLimits

0xea84,	// (0x0005d500) sat_plugin_idle_act4_pane_t2

0xea9c,	// (0x0005d518) sat_plugin_idle_act4_pane_t3_ParamLimits

0xea9c,	// (0x0005d518) sat_plugin_idle_act4_pane_t3

0xeab4,	// (0x0005d530) sat_plugin_idle_act4_pane_t4_ParamLimits

0xeab4,	// (0x0005d530) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd7d,	// (0x0005e7f9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd7d,	// (0x0005e7f9) sat_plugin_idle_act4_pane_t

0x0202,	// (0x0004ec7e) popup_battery_window_ParamLimits

0x0202,	// (0x0004ec7e) popup_battery_window

0x3734,	// (0x000521b0) bg_popup_sub_pane_cp25_ParamLimits

0x3734,	// (0x000521b0) bg_popup_sub_pane_cp25

0x94d7,	// (0x00057f53) popup_battery_window_g1_ParamLimits

0x94d7,	// (0x00057f53) popup_battery_window_g1

0x94e3,	// (0x00057f5f) popup_battery_window_t1_ParamLimits

0x94e3,	// (0x00057f5f) popup_battery_window_t1

0x94f5,	// (0x00057f71) popup_battery_window_t2_ParamLimits

0x94f5,	// (0x00057f71) popup_battery_window_t2

0x0001,

0xfd86,	// (0x0005e802) popup_battery_window_t_ParamLimits

0xfd86,	// (0x0005e802) popup_battery_window_t

0xd3a1,	// (0x0005be1d) midp_canvas_pane_ParamLimits

0xd3fc,	// (0x0005be78) midp_keypad_pane_ParamLimits

0xd3fc,	// (0x0005be78) midp_keypad_pane

0x4cde,	// (0x0005375a) main_midp_pane_ParamLimits

0x729c,	// (0x00055d18) signal_pane_g2_cp_ParamLimits

0xeacc,	// (0x0005d548) aid_size_cell_midp_keypad_ParamLimits

0xeacc,	// (0x0005d548) aid_size_cell_midp_keypad

0xeaea,	// (0x0005d566) midp_keyp_game_grid_pane_ParamLimits

0xeaea,	// (0x0005d566) midp_keyp_game_grid_pane

0xeb11,	// (0x0005d58d) midp_keyp_rocker_pane_ParamLimits

0xeb11,	// (0x0005d58d) midp_keyp_rocker_pane

0xeb5a,	// (0x0005d5d6) midp_keyp_sk_left_pane_ParamLimits

0xeb5a,	// (0x0005d5d6) midp_keyp_sk_left_pane

0xebb9,	// (0x0005d635) midp_keyp_sk_right_pane_ParamLimits

0xebb9,	// (0x0005d635) midp_keyp_sk_right_pane

0x33b7,	// (0x00051e33) bg_button_pane_cp03

0xec0b,	// (0x0005d687) midp_keyp_sk_left_pane_g1

0x33b7,	// (0x00051e33) bg_button_pane_cp04

0xec0b,	// (0x0005d687) midp_keyp_sk_right_pane_g1

0x77e6,	// (0x00056262) midp_keyp_rocker_pane_g1

0xec14,	// (0x0005d690) keyp_game_cell_pane_ParamLimits

0xec14,	// (0x0005d690) keyp_game_cell_pane

0x33b7,	// (0x00051e33) bg_button_pane_cp02

0xec38,	// (0x0005d6b4) keyp_game_cell_pane_g1

0xb6b8,	// (0x0005a134) popup_fep_vkb2_window_ParamLimits

0xb6b8,	// (0x0005a134) popup_fep_vkb2_window

0xc943,	// (0x0005b3bf) aid_size_cell_vkb2_ParamLimits

0xc943,	// (0x0005b3bf) aid_size_cell_vkb2

0xc979,	// (0x0005b3f5) popup_fep_vkb2_window_g1_ParamLimits

0xc979,	// (0x0005b3f5) popup_fep_vkb2_window_g1

0xc9c9,	// (0x0005b445) vkb2_area_bottom_pane_ParamLimits

0xc9c9,	// (0x0005b445) vkb2_area_bottom_pane

0xca1d,	// (0x0005b499) vkb2_area_keypad_pane_ParamLimits

0xca1d,	// (0x0005b499) vkb2_area_keypad_pane

0xca65,	// (0x0005b4e1) vkb2_area_top_pane_ParamLimits

0xca65,	// (0x0005b4e1) vkb2_area_top_pane

0xcaeb,	// (0x0005b567) vkb2_top_entry_pane_ParamLimits

0xcaeb,	// (0x0005b567) vkb2_top_entry_pane

0xcb18,	// (0x0005b594) vkb2_top_grid_left_pane_ParamLimits

0xcb18,	// (0x0005b594) vkb2_top_grid_left_pane

0xcb38,	// (0x0005b5b4) vkb2_top_grid_right_pane_ParamLimits

0xcb38,	// (0x0005b5b4) vkb2_top_grid_right_pane

0x2331,	// (0x00050dad) vkb2_cell_keypad_pane_ParamLimits

0x2331,	// (0x00050dad) vkb2_cell_keypad_pane

0xcb7e,	// (0x0005b5fa) vkb2_area_bottom_grid_pane_ParamLimits

0xcb7e,	// (0x0005b5fa) vkb2_area_bottom_grid_pane

0xcba8,	// (0x0005b624) vkb2_area_bottom_pane_g1_ParamLimits

0xcba8,	// (0x0005b624) vkb2_area_bottom_pane_g1

0xcbce,	// (0x0005b64a) vkb2_area_bottom_pane_g2_ParamLimits

0xcbce,	// (0x0005b64a) vkb2_area_bottom_pane_g2

0xcbff,	// (0x0005b67b) vkb2_area_bottom_pane_g3_ParamLimits

0xcbff,	// (0x0005b67b) vkb2_area_bottom_pane_g3

0x0002,

0xfd8b,	// (0x0005e807) vkb2_area_bottom_pane_g_ParamLimits

0xfd8b,	// (0x0005e807) vkb2_area_bottom_pane_g

0x24db,	// (0x00050f57) vkb2_top_cell_left_pane_ParamLimits

0x24db,	// (0x00050f57) vkb2_top_cell_left_pane

0xec41,	// (0x0005d6bd) vkb2_top_entry_pane_g1_ParamLimits

0xec41,	// (0x0005d6bd) vkb2_top_entry_pane_g1

0xec4f,	// (0x0005d6cb) vkb2_top_entry_pane_t1_ParamLimits

0xec4f,	// (0x0005d6cb) vkb2_top_entry_pane_t1

0x96bf,	// (0x0005813b) vkb2_top_entry_pane_t2_ParamLimits

0x96bf,	// (0x0005813b) vkb2_top_entry_pane_t2

0x96f1,	// (0x0005816d) vkb2_top_entry_pane_t3_ParamLimits

0x96f1,	// (0x0005816d) vkb2_top_entry_pane_t3

0x0002,

0xfd92,	// (0x0005e80e) vkb2_top_entry_pane_t_ParamLimits

0xfd92,	// (0x0005e80e) vkb2_top_entry_pane_t

0xcc69,	// (0x0005b6e5) vkb2_top_grid_right_pane_g1_ParamLimits

0xcc69,	// (0x0005b6e5) vkb2_top_grid_right_pane_g1

0x253e,	// (0x00050fba) vkb2_top_grid_right_pane_g2_ParamLimits

0x253e,	// (0x00050fba) vkb2_top_grid_right_pane_g2

0x2556,	// (0x00050fd2) vkb2_top_grid_right_pane_g3_ParamLimits

0x2556,	// (0x00050fd2) vkb2_top_grid_right_pane_g3

0xcc7f,	// (0x0005b6fb) vkb2_top_grid_right_pane_g4_ParamLimits

0xcc7f,	// (0x0005b6fb) vkb2_top_grid_right_pane_g4

0x0003,

0xfd99,	// (0x0005e815) vkb2_top_grid_right_pane_g_ParamLimits

0xfd99,	// (0x0005e815) vkb2_top_grid_right_pane_g

0x2584,	// (0x00051000) vkb2_top_cell_left_pane_g1

0x259b,	// (0x00051017) vkb2_cell_keypad_pane_g1_ParamLimits

0x259b,	// (0x00051017) vkb2_cell_keypad_pane_g1

0x9715,	// (0x00058191) vkb2_cell_keypad_pane_t1_ParamLimits

0x9715,	// (0x00058191) vkb2_cell_keypad_pane_t1

0x25a9,	// (0x00051025) vkb2_cell_bottom_grid_pane_ParamLimits

0x25a9,	// (0x00051025) vkb2_cell_bottom_grid_pane

0x25e2,	// (0x0005105e) vkb2_cell_bottom_grid_pane_g1

0xe8ff,	// (0x0005d37b) aid_call2_pane_cp02

0xe907,	// (0x0005d383) aid_call_pane_cp02

0xe90f,	// (0x0005d38b) clock_digital_number_pane_cp10

0xe917,	// (0x0005d393) clock_digital_number_pane_cp11

0xe91f,	// (0x0005d39b) clock_digital_number_pane_cp12

0xe927,	// (0x0005d3a3) clock_digital_number_pane_cp13

0xe92f,	// (0x0005d3ab) clock_digital_separator_pane_cp10

0x4396,	// (0x00052e12) popup_clock_digital_analogue_window_cp2_g1

0x4396,	// (0x00052e12) popup_clock_digital_analogue_window_cp2_g2

0xe937,	// (0x0005d3b3) popup_clock_digital_analogue_window_cp2_g3

0x4396,	// (0x00052e12) popup_clock_digital_analogue_window_cp2_g4

0xe937,	// (0x0005d3b3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4e,	// (0x0005e7ca) popup_clock_digital_analogue_window_cp2_g

0xe93f,	// (0x0005d3bb) popup_clock_digital_analogue_window_cp2_t1

0xe94d,	// (0x0005d3c9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd59,	// (0x0005e7d5) popup_clock_digital_analogue_window_cp2_t

0x77e6,	// (0x00056262) clock_digital_number_pane_cp10_g1

0x77e6,	// (0x00056262) clock_digital_number_pane_cp10_g2

0x0001,

0xfb35,	// (0x0005e5b1) clock_digital_number_pane_cp10_g

0x77e6,	// (0x00056262) clock_digital_separator_pane_cp10_g1

0x77e6,	// (0x00056262) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb35,	// (0x0005e5b1) clock_digital_separator_pane_cp10_g

0x9123,	// (0x00057b9f) uniindi_top_pane_g3

0x9134,	// (0x00057bb0) uniindi_top_pane_g4

0x23bc,	// (0x00050e38) vkb2_row_keypad_pane_ParamLimits

0x23bc,	// (0x00050e38) vkb2_row_keypad_pane

0x25fe,	// (0x0005107a) vkb2_cell_t_keypad_pane_ParamLimits

0x25fe,	// (0x0005107a) vkb2_cell_t_keypad_pane

0x260e,	// (0x0005108a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x260e,	// (0x0005108a) vkb2_cell_t_keypad_pane_cp08

0x2621,	// (0x0005109d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2621,	// (0x0005109d) vkb2_cell_t_keypad_pane_cp09

0x2635,	// (0x000510b1) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2635,	// (0x000510b1) vkb2_cell_t_keypad_pane_cp01

0x2646,	// (0x000510c2) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2646,	// (0x000510c2) vkb2_cell_t_keypad_pane_cp02

0x2657,	// (0x000510d3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2657,	// (0x000510d3) vkb2_cell_t_keypad_pane_cp03

0x2668,	// (0x000510e4) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2668,	// (0x000510e4) vkb2_cell_t_keypad_pane_cp04

0x2679,	// (0x000510f5) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2679,	// (0x000510f5) vkb2_cell_t_keypad_pane_cp05

0x268a,	// (0x00051106) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x268a,	// (0x00051106) vkb2_cell_t_keypad_pane_cp06

0x269b,	// (0x00051117) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x269b,	// (0x00051117) vkb2_cell_t_keypad_pane_cp07

0x26ac,	// (0x00051128) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x26ac,	// (0x00051128) vkb2_cell_t_keypad_pane_cp10

0x1e62,	// (0x000508de) vkb2_cell_t_keypad_pane_g1

0x972c,	// (0x000581a8) vkb2_cell_t_keypad_pane_t1

0x013d,	// (0x0004ebb9) popup_grid_graphic2_window

0xec88,	// (0x0005d704) aid_size_cell_graphic2_ParamLimits

0xec88,	// (0x0005d704) aid_size_cell_graphic2

0xecc6,	// (0x0005d742) bg_popup_window_pane_cp21_ParamLimits

0xecc6,	// (0x0005d742) bg_popup_window_pane_cp21

0xecd4,	// (0x0005d750) graphic2_pages_pane_ParamLimits

0xecd4,	// (0x0005d750) graphic2_pages_pane

0xed2a,	// (0x0005d7a6) grid_graphic2_control_pane_ParamLimits

0xed2a,	// (0x0005d7a6) grid_graphic2_control_pane

0xed72,	// (0x0005d7ee) grid_graphic2_pane_ParamLimits

0xed72,	// (0x0005d7ee) grid_graphic2_pane

0xedf9,	// (0x0005d875) cell_graphic2_pane

0x013d,	// (0x0004ebb9) main_comp_mode_pane

0x89a3,	// (0x0005741f) list_ai3_gene_pane_ParamLimits

0xe646,	// (0x0005d0c2) bg_popup_window_pane_cp19_ParamLimits

0x8d79,	// (0x000577f5) bg_touch_area_indi_pane_ParamLimits

0x8d79,	// (0x000577f5) bg_touch_area_indi_pane

0x8d8f,	// (0x0005780b) bg_touch_area_indi_pane_cp01_ParamLimits

0x8d8f,	// (0x0005780b) bg_touch_area_indi_pane_cp01

0x8da5,	// (0x00057821) bg_touch_area_indi_pane_cp02_ParamLimits

0x8da5,	// (0x00057821) bg_touch_area_indi_pane_cp02

0x8dbd,	// (0x00057839) bg_touch_area_indi_pane_cp03_ParamLimits

0x8dbd,	// (0x00057839) bg_touch_area_indi_pane_cp03

0x8dd7,	// (0x00057853) popup_slider_window_g1_ParamLimits

0x8df3,	// (0x0005786f) popup_slider_window_g2_ParamLimits

0x8e0f,	// (0x0005788b) popup_slider_window_g3_ParamLimits

0xfce3,	// (0x0005e75f) popup_slider_window_g_ParamLimits

0x8e6b,	// (0x000578e7) popup_slider_window_t1_ParamLimits

0x8edf,	// (0x0005795b) small_volume_slider_vertical_pane_ParamLimits

0xedf9,	// (0x0005d875) cell_graphic2_pane_ParamLimits

0xee56,	// (0x0005d8d2) bg_button_pane_cp10_ParamLimits

0xee56,	// (0x0005d8d2) bg_button_pane_cp10

0xee69,	// (0x0005d8e5) bg_button_pane_cp11_ParamLimits

0xee69,	// (0x0005d8e5) bg_button_pane_cp11

0xee7c,	// (0x0005d8f8) graphic2_pages_pane_g1_ParamLimits

0xee7c,	// (0x0005d8f8) graphic2_pages_pane_g1

0xee97,	// (0x0005d913) graphic2_pages_pane_g2_ParamLimits

0xee97,	// (0x0005d913) graphic2_pages_pane_g2

0x0001,

0xfda7,	// (0x0005e823) graphic2_pages_pane_g_ParamLimits

0xfda7,	// (0x0005e823) graphic2_pages_pane_g

0xeeaf,	// (0x0005d92b) graphic2_pages_pane_t1_ParamLimits

0xeeaf,	// (0x0005d92b) graphic2_pages_pane_t1

0xeec7,	// (0x0005d943) cell_graphic2_control_pane_ParamLimits

0xeec7,	// (0x0005d943) cell_graphic2_control_pane

0xeef9,	// (0x0005d975) cell_graphic2_pane_g1_ParamLimits

0xeef9,	// (0x0005d975) cell_graphic2_pane_g1

0xe18c,	// (0x0005cc08) cell_graphic2_pane_g2_ParamLimits

0xe18c,	// (0x0005cc08) cell_graphic2_pane_g2

0xebac,	// (0x0005d628) cell_graphic2_pane_g3_ParamLimits

0xebac,	// (0x0005d628) cell_graphic2_pane_g3

0xe199,	// (0x0005cc15) cell_graphic2_pane_g4_ParamLimits

0xe199,	// (0x0005cc15) cell_graphic2_pane_g4

0xef06,	// (0x0005d982) cell_graphic2_pane_g5_ParamLimits

0xef06,	// (0x0005d982) cell_graphic2_pane_g5

0x0004,

0xfdac,	// (0x0005e828) cell_graphic2_pane_g_ParamLimits

0xfdac,	// (0x0005e828) cell_graphic2_pane_g

0xef26,	// (0x0005d9a2) cell_graphic2_pane_t1_ParamLimits

0xef26,	// (0x0005d9a2) cell_graphic2_pane_t1

0x5ee1,	// (0x0005495d) grid_highlight_pane_cp11_ParamLimits

0x5ee1,	// (0x0005495d) grid_highlight_pane_cp11

0x3734,	// (0x000521b0) bg_button_pane_cp05

0xef5b,	// (0x0005d9d7) cell_graphic2_control_pane_g1

0x77e6,	// (0x00056262) bg_touch_area_indi_pane_g1

0x99fc,	// (0x00058478) aid_cmod_rocker_key_size

0x9a06,	// (0x00058482) aid_cmode_itu_key_size

0x9a10,	// (0x0005848c) main_cmode_video_pane

0x9a1a,	// (0x00058496) main_comp_mode_itu_pane

0x9a26,	// (0x000584a2) main_comp_mode_rocker_pane

0x9a32,	// (0x000584ae) cell_cmode_rocker_pane_ParamLimits

0x9a32,	// (0x000584ae) cell_cmode_rocker_pane

0x9a44,	// (0x000584c0) cell_cmode_itu_pane_ParamLimits

0x9a44,	// (0x000584c0) cell_cmode_itu_pane

0x3d23,	// (0x0005279f) bg_button_pane_cp06_ParamLimits

0x3d23,	// (0x0005279f) bg_button_pane_cp06

0x7a64,	// (0x000564e0) cell_cmode_rocker_pane_g1_ParamLimits

0x7a64,	// (0x000564e0) cell_cmode_rocker_pane_g1

0x8f83,	// (0x000579ff) cell_cmode_rocker_pane_g2_ParamLimits

0x8f83,	// (0x000579ff) cell_cmode_rocker_pane_g2

0x0001,

0xfdbc,	// (0x0005e838) cell_cmode_rocker_pane_g_ParamLimits

0xfdbc,	// (0x0005e838) cell_cmode_rocker_pane_g

0x33b7,	// (0x00051e33) bg_button_pane_cp07

0x9a59,	// (0x000584d5) cell_cmode_itu_pane_g1

0x9a62,	// (0x000584de) cell_cmode_itu_pane_t1

0x9a70,	// (0x000584ec) cell_cmode_itu_pane_t2

0x0001,

0xfdc1,	// (0x0005e83d) cell_cmode_itu_pane_t

0x91a6,	// (0x00057c22) aid_touch_ctrl_left

0x91ae,	// (0x00057c2a) aid_touch_ctrl_right

0x33b7,	// (0x00051e33) compa_mode_pane

0xef81,	// (0x0005d9fd) aid_cmod_rocker_key_size_cp

0xef8b,	// (0x0005da07) aid_cmode_itu_key_size_cp

0x9a92,	// (0x0005850e) compa_mode_pane_g1

0x9a9a,	// (0x00058516) compa_mode_pane_g2

0x9aa2,	// (0x0005851e) compa_mode_pane_g3

0x0002,

0xfdc6,	// (0x0005e842) compa_mode_pane_g

0xef95,	// (0x0005da11) main_comp_mode_itu_pane_cp

0xef9d,	// (0x0005da19) main_comp_mode_rocker_pane_cp

0xefa5,	// (0x0005da21) cell_cmode_itu_pane_cp_ParamLimits

0xefa5,	// (0x0005da21) cell_cmode_itu_pane_cp

0xefba,	// (0x0005da36) cell_cmode_rocker_pane_cp_ParamLimits

0xefba,	// (0x0005da36) cell_cmode_rocker_pane_cp

0x3d23,	// (0x0005279f) bg_button_pane_cp06_cp_ParamLimits

0x3d23,	// (0x0005279f) bg_button_pane_cp06_cp

0x7a64,	// (0x000564e0) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7a64,	// (0x000564e0) cell_cmode_rocker_pane_g1_cp

0x77e6,	// (0x00056262) cell_cmode_rocker_pane_g2_cp

0x33b7,	// (0x00051e33) bg_button_pane_cp07_cp

0xefcc,	// (0x0005da48) cell_cmode_itu_pane_g1_cp

0xefd5,	// (0x0005da51) cell_cmode_itu_pane_t1_cp

0xefd5,	// (0x0005da51) cell_cmode_itu_pane_t2_cp

0xdc8f,	// (0x0005c70b) settings_code_pane_cp2

0x34ab,	// (0x00051f27) bg_popup_window_pane_cp3_ParamLimits

0x390e,	// (0x0005238a) heading_pane_cp3_ParamLimits

0x391a,	// (0x00052396) listscroll_popup_graphic_pane_ParamLimits

0x1c0b,	// (0x00050687) fep_hwr_aid_pane_ParamLimits

0x2082,	// (0x00050afe) aid_touch_sctrl_top_ParamLimits

0x209d,	// (0x00050b19) sctrl_sk_top_pane_g1_ParamLimits

0x1e62,	// (0x000508de) sctrl_sk_top_pane_g2_ParamLimits

0xfcfc,	// (0x0005e778) sctrl_sk_top_pane_g_ParamLimits

0x20aa,	// (0x00050b26) sctrl_sk_top_pane_t1_ParamLimits

0x2082,	// (0x00050afe) aid_touch_sctrl_bottom_ParamLimits

0x20aa,	// (0x00050b26) sctrl_sk_bottom_pane_t1_ParamLimits

0x90ef,	// (0x00057b6b) aid_area_touch_clock

0xcaad,	// (0x0005b529) aid_vkb2_area_top_pane_cell_ParamLimits

0xcaad,	// (0x0005b529) aid_vkb2_area_top_pane_cell

0xcb58,	// (0x0005b5d4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcb58,	// (0x0005b5d4) aid_vkb2_area_bottom_pane_cell

0x9677,	// (0x000580f3) popup_char_count_window

0x9aef,	// (0x0005856b) popup_char_count_window_g1

0x9af8,	// (0x00058574) popup_char_count_window_g2

0x9b01,	// (0x0005857d) popup_char_count_window_g3

0x0002,

0xfdcd,	// (0x0005e849) popup_char_count_window_g

0x9b0a,	// (0x00058586) popup_char_count_window_t1

0x2159,	// (0x00050bd5) popup_fep_char_preview_window_ParamLimits

0x2159,	// (0x00050bd5) popup_fep_char_preview_window

0xcacd,	// (0x0005b549) vkb2_top_candi_pane_ParamLimits

0xcacd,	// (0x0005b549) vkb2_top_candi_pane

0xefe3,	// (0x0005da5f) cell_vkb2_top_candi_pane_ParamLimits

0xefe3,	// (0x0005da5f) cell_vkb2_top_candi_pane

0x26c1,	// (0x0005113d) bg_popup_fep_char_preview_window_ParamLimits

0x26c1,	// (0x0005113d) bg_popup_fep_char_preview_window

0x26cf,	// (0x0005114b) popup_fep_char_preview_window_t1_ParamLimits

0x26cf,	// (0x0005114b) popup_fep_char_preview_window_t1

0x9b65,	// (0x000585e1) bg_popup_fep_char_preview_window_g1

0x9b6d,	// (0x000585e9) bg_popup_fep_char_preview_window_g2

0x9b75,	// (0x000585f1) bg_popup_fep_char_preview_window_g3

0x9b7d,	// (0x000585f9) bg_popup_fep_char_preview_window_g4

0x9b85,	// (0x00058601) bg_popup_fep_char_preview_window_g5

0x2709,	// (0x00051185) bg_popup_fep_char_preview_window_g6

0x9b8d,	// (0x00058609) bg_popup_fep_char_preview_window_g7

0x9b95,	// (0x00058611) bg_popup_fep_char_preview_window_g8

0x9b9d,	// (0x00058619) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd4,	// (0x0005e850) bg_popup_fep_char_preview_window_g

0x1e62,	// (0x000508de) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1e62,	// (0x000508de) cell_vkb2_top_candi_pane_g1

0x1e70,	// (0x000508ec) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1e70,	// (0x000508ec) cell_vkb2_top_candi_pane_g2

0x95d9,	// (0x00058055) cell_vkb2_top_candi_pane_g3_ParamLimits

0x95d9,	// (0x00058055) cell_vkb2_top_candi_pane_g3

0x2711,	// (0x0005118d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2711,	// (0x0005118d) cell_vkb2_top_candi_pane_g4

0x7f3b,	// (0x000569b7) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7f3b,	// (0x000569b7) cell_vkb2_top_candi_pane_g5

0x2732,	// (0x000511ae) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2732,	// (0x000511ae) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde7,	// (0x0005e863) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde7,	// (0x0005e863) cell_vkb2_top_candi_pane_g

0x2740,	// (0x000511bc) cell_vkb2_top_candi_pane_t1

0x1a6b,	// (0x000504e7) aid_size_touch_slider_mark_ParamLimits

0x1a6b,	// (0x000504e7) aid_size_touch_slider_mark

0xed10,	// (0x0005d78c) grid_graphic2_catg_pane_ParamLimits

0xed10,	// (0x0005d78c) grid_graphic2_catg_pane

0xedcc,	// (0x0005d848) popup_grid_graphic2_window_t1_ParamLimits

0xedcc,	// (0x0005d848) popup_grid_graphic2_window_t1

0xede2,	// (0x0005d85e) popup_grid_graphic2_window_t2_ParamLimits

0xede2,	// (0x0005d85e) popup_grid_graphic2_window_t2

0x0001,

0xfda2,	// (0x0005e81e) popup_grid_graphic2_window_t_ParamLimits

0xfda2,	// (0x0005e81e) popup_grid_graphic2_window_t

0x3734,	// (0x000521b0) bg_button_pane_cp05_ParamLimits

0xef5b,	// (0x0005d9d7) cell_graphic2_control_pane_g1_ParamLimits

0xf049,	// (0x0005dac5) cell_graphic2_catg_pane_ParamLimits

0xf049,	// (0x0005dac5) cell_graphic2_catg_pane

0x33b7,	// (0x00051e33) bg_button_pane_cp12

0xf05b,	// (0x0005dad7) cell_graphic2_catg_pane_g1

0x90bb,	// (0x00057b37) cell_tb_ext_pane_t1_ParamLimits

0x24fb,	// (0x00050f77) vkb2_top_cell_right_narrow_pane_ParamLimits

0x24fb,	// (0x00050f77) vkb2_top_cell_right_narrow_pane

0x2513,	// (0x00050f8f) vkb2_top_cell_right_wide_pane_ParamLimits

0x2513,	// (0x00050f8f) vkb2_top_cell_right_wide_pane

0x1bfd,	// (0x00050679) bg_vkb2_func_pane_ParamLimits

0x1bfd,	// (0x00050679) bg_vkb2_func_pane

0x2584,	// (0x00051000) vkb2_top_cell_left_pane_g1_ParamLimits

0x1bfd,	// (0x00050679) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1bfd,	// (0x00050679) bg_vkb2_fuc_pane_cp03

0x25e2,	// (0x0005105e) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x51fc,	// (0x00053c78) bg_vkb2_func_pane_g1

0x5204,	// (0x00053c80) bg_vkb2_func_pane_g2

0x5214,	// (0x00053c90) bg_vkb2_func_pane_g3

0x520c,	// (0x00053c88) bg_vkb2_func_pane_g4

0x521c,	// (0x00053c98) bg_vkb2_func_pane_g5

0x5224,	// (0x00053ca0) bg_vkb2_func_pane_g6

0x522c,	// (0x00053ca8) bg_vkb2_func_pane_g7

0x5234,	// (0x00053cb0) bg_vkb2_func_pane_g8

0x51f4,	// (0x00053c70) bg_vkb2_func_pane_g9

0x0008,

0xfdf4,	// (0x0005e870) bg_vkb2_func_pane_g

0x1bfd,	// (0x00050679) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1bfd,	// (0x00050679) bg_vkb2_fuc_pane_cp01

0x2584,	// (0x00051000) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2584,	// (0x00051000) vkb2_top_cell_right_wide_pane_g1

0x1bfd,	// (0x00050679) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1bfd,	// (0x00050679) bg_vkb2_fuc_pane_cp02

0x25e2,	// (0x0005105e) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x25e2,	// (0x0005105e) vkb2_top_cell_right_narrow_pane_g1

0xe586,	// (0x0005d002) aid_touch_area_decrease_ParamLimits

0xe586,	// (0x0005d002) aid_touch_area_decrease

0xe5ba,	// (0x0005d036) aid_touch_area_increase_ParamLimits

0xe5ba,	// (0x0005d036) aid_touch_area_increase

0xe5e2,	// (0x0005d05e) aid_touch_area_mute_ParamLimits

0xe5e2,	// (0x0005d05e) aid_touch_area_mute

0xe612,	// (0x0005d08e) aid_touch_area_slider_ParamLimits

0xe612,	// (0x0005d08e) aid_touch_area_slider

0xe652,	// (0x0005d0ce) popup_slider_window_g4_ParamLimits

0xe652,	// (0x0005d0ce) popup_slider_window_g4

0xe67a,	// (0x0005d0f6) popup_slider_window_g5_ParamLimits

0xe67a,	// (0x0005d0f6) popup_slider_window_g5

0xe6ae,	// (0x0005d12a) popup_slider_window_g6_ParamLimits

0xe6ae,	// (0x0005d12a) popup_slider_window_g6

0x8e99,	// (0x00057915) popup_slider_window_t2_ParamLimits

0x8e99,	// (0x00057915) popup_slider_window_t2

0x0001,

0xfcf0,	// (0x0005e76c) popup_slider_window_t_ParamLimits

0xfcf0,	// (0x0005e76c) popup_slider_window_t

0xe6ca,	// (0x0005d146) slider_pane_ParamLimits

0xe6ca,	// (0x0005d146) slider_pane

0x9bc0,	// (0x0005863c) slider_pane_g1_ParamLimits

0x9bc0,	// (0x0005863c) slider_pane_g1

0x9bd4,	// (0x00058650) slider_pane_g2_ParamLimits

0x9bd4,	// (0x00058650) slider_pane_g2

0x9bea,	// (0x00058666) slider_pane_g3_ParamLimits

0x9bea,	// (0x00058666) slider_pane_g3

0x0003,

0xfe07,	// (0x0005e883) slider_pane_g_ParamLimits

0xfe07,	// (0x0005e883) slider_pane_g

0xc5dd,	// (0x0005b059) popup_tb_float_extension_window_ParamLimits

0xc5dd,	// (0x0005b059) popup_tb_float_extension_window

0x9c16,	// (0x00058692) aid_size_cell_tb_float_ext

0x33b7,	// (0x00051e33) bg_popup_sub_window_cp28

0x9c22,	// (0x0005869e) grid_tb_float_ext_pane

0x9c2c,	// (0x000586a8) cell_tb_float_ext_pane_ParamLimits

0x9c2c,	// (0x000586a8) cell_tb_float_ext_pane

0x9c46,	// (0x000586c2) cell_tb_float_ext_pane_g1

0x9c4f,	// (0x000586cb) grid_highlight_pane_cp12

0xc793,	// (0x0005b20f) cell_last_hwr_side_pane_ParamLimits

0xc793,	// (0x0005b20f) cell_last_hwr_side_pane

0x77e6,	// (0x00056262) cell_last_hwr_side_pane_g1

0x9c58,	// (0x000586d4) cell_last_hwr_side_pane_g2

0x0001,

0xfe10,	// (0x0005e88c) cell_last_hwr_side_pane_g

0xcc34,	// (0x0005b6b0) vkb2_area_bottom_space_btn_pane_ParamLimits

0xcc34,	// (0x0005b6b0) vkb2_area_bottom_space_btn_pane

0x1e62,	// (0x000508de) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x972c,	// (0x000581a8) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2740,	// (0x000511bc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x275f,	// (0x000511db) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x275f,	// (0x000511db) vkb2_area_bottom_space_btn_pane_g1

0x2799,	// (0x00051215) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2799,	// (0x00051215) vkb2_area_bottom_space_btn_pane_g2

0x27cf,	// (0x0005124b) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x27cf,	// (0x0005124b) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe15,	// (0x0005e891) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe15,	// (0x0005e891) vkb2_area_bottom_space_btn_pane_g

0x1cc0,	// (0x0005073c) cel_fep_hwr_func_pane_ParamLimits

0x1cc0,	// (0x0005073c) cel_fep_hwr_func_pane

0xc768,	// (0x0005b1e4) cell_hwr_side_button_pane_ParamLimits

0xc768,	// (0x0005b1e4) cell_hwr_side_button_pane

0x90ef,	// (0x00057b6b) aid_area_touch_clock_ParamLimits

0x3734,	// (0x000521b0) bg_uniindi_top_pane_ParamLimits

0x9101,	// (0x00057b7d) uniindi_top_pane_g1_ParamLimits

0x9117,	// (0x00057b93) uniindi_top_pane_g2_ParamLimits

0x9123,	// (0x00057b9f) uniindi_top_pane_g3_ParamLimits

0x9134,	// (0x00057bb0) uniindi_top_pane_g4_ParamLimits

0xfd28,	// (0x0005e7a4) uniindi_top_pane_g_ParamLimits

0x9141,	// (0x00057bbd) uniindi_top_pane_t1_ParamLimits

0x3734,	// (0x000521b0) bg_vkb2_func_pane_cp01_ParamLimits

0x3734,	// (0x000521b0) bg_vkb2_func_pane_cp01

0x9c61,	// (0x000586dd) cel_fep_hwr_func_pane_g1_ParamLimits

0x9c61,	// (0x000586dd) cel_fep_hwr_func_pane_g1

0x3734,	// (0x000521b0) bg_vkb2_func_pane_cp02_ParamLimits

0x3734,	// (0x000521b0) bg_vkb2_func_pane_cp02

0x9c61,	// (0x000586dd) cell_hwr_side_button_pane_g1_ParamLimits

0x9c61,	// (0x000586dd) cell_hwr_side_button_pane_g1

0x5075,	// (0x00053af1) status_pane_g4_ParamLimits

0x5075,	// (0x00053af1) status_pane_g4

0x508f,	// (0x00053b0b) status_pane_t1

0x7520,	// (0x00055f9c) form2_midp_gauge_slider_cont_pane

0x7528,	// (0x00055fa4) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdf4a,	// (0x0005c9c6) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdf5c,	// (0x0005c9d8) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfae8,	// (0x0005e564) form2_midp_gauge_slider_pane_t_ParamLimits

0x755e,	// (0x00055fda) form2_midp_slider_pane_ParamLimits

0x2119,	// (0x00050b95) aid_size_cell_func_vkb2_ParamLimits

0x2119,	// (0x00050b95) aid_size_cell_func_vkb2

0x9c02,	// (0x0005867e) slider_pane_g4_ParamLimits

0x9c02,	// (0x0005867e) slider_pane_g4

0xcc95,	// (0x0005b711) form2_midp_gauge_slider_pane_t2_cp01

0xcca3,	// (0x0005b71f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xcca3,	// (0x0005b71f) form2_midp_gauge_slider_pane_t3_cp01

0x2844,	// (0x000512c0) form2_midp_slider_pane_cp01

0x33b7,	// (0x00051e33) navi_smil_pane

0x9c9a,	// (0x00058716) navi_smil_pane_g1

0x9ca2,	// (0x0005871e) navi_smil_pane_t1

0x9c6f,	// (0x000586eb) form2_midp_slider_pane_g1

0x9c78,	// (0x000586f4) form2_midp_slider_pane_g2

0x9c80,	// (0x000586fc) form2_midp_slider_pane_g3

0x9c6f,	// (0x000586eb) form2_midp_slider_pane_g4

0xf064,	// (0x0005dae0) form2_midp_slider_pane_g5

0x0004,

0xfe1e,	// (0x0005e89a) form2_midp_slider_pane_g

0x2809,	// (0x00051285) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2809,	// (0x00051285) vkb2_area_bottom_space_btn_pane_g4

0xd5c8,	// (0x0005c044) lc0_navi_pane_ParamLimits

0xd5c8,	// (0x0005c044) lc0_navi_pane

0xd632,	// (0x0005c0ae) lc0_stat_indi_pane_ParamLimits

0xd632,	// (0x0005c0ae) lc0_stat_indi_pane

0xd647,	// (0x0005c0c3) ls0_title_pane_ParamLimits

0xd647,	// (0x0005c0c3) ls0_title_pane

0x3d23,	// (0x0005279f) bg_popup_sub_pane_cp14_ParamLimits

0x90d6,	// (0x00057b52) list_uniindi_pane_ParamLimits

0x90e2,	// (0x00057b5e) uniindi_top_pane_ParamLimits

0x917e,	// (0x00057bfa) list_single_uniindi_pane_g1_ParamLimits

0x9191,	// (0x00057c0d) list_single_uniindi_pane_t1_ParamLimits

0xccc0,	// (0x0005b73c) lc0_stat_clock_pane_ParamLimits

0xccc0,	// (0x0005b73c) lc0_stat_clock_pane

0xf06f,	// (0x0005daeb) lc0_stat_indi_pane_g1_ParamLimits

0xf06f,	// (0x0005daeb) lc0_stat_indi_pane_g1

0xf07c,	// (0x0005daf8) lc0_stat_indi_pane_g2_ParamLimits

0xf07c,	// (0x0005daf8) lc0_stat_indi_pane_g2

0x0001,

0xfe29,	// (0x0005e8a5) lc0_stat_indi_pane_g_ParamLimits

0xfe29,	// (0x0005e8a5) lc0_stat_indi_pane_g

0xcccd,	// (0x0005b749) lc0_uni_indicator_pane_ParamLimits

0xcccd,	// (0x0005b749) lc0_uni_indicator_pane

0xf089,	// (0x0005db05) ls0_title_pane_g1_ParamLimits

0xf089,	// (0x0005db05) ls0_title_pane_g1

0xf09d,	// (0x0005db19) ls0_title_pane_t1_ParamLimits

0xf09d,	// (0x0005db19) ls0_title_pane_t1

0xccda,	// (0x0005b756) lc0_uni_indicator_pane_g1_ParamLimits

0xccda,	// (0x0005b756) lc0_uni_indicator_pane_g1

0x9d14,	// (0x00058790) lc0_stat_clock_pane_t1

0x013d,	// (0x0004ebb9) main_ai5_pane

0x9d22,	// (0x0005879e) ai5_sk_pane_ParamLimits

0x9d22,	// (0x0005879e) ai5_sk_pane

0xf0cb,	// (0x0005db47) cell_ai5_widget_pane_ParamLimits

0xf0cb,	// (0x0005db47) cell_ai5_widget_pane

0x9de5,	// (0x00058861) aid_size_cell_widget_grid

0x9dfb,	// (0x00058877) bg_ai5_widget_pane_ParamLimits

0x9dfb,	// (0x00058877) bg_ai5_widget_pane

0x9e6f,	// (0x000588eb) cell_ai5_widget_pane_g2

0x9e7f,	// (0x000588fb) cell_ai5_widget_pane_g3

0x9e96,	// (0x00058912) cell_ai5_widget_pane_g4

0x9ea2,	// (0x0005891e) cell_ai5_widget_pane_g5

0x9eae,	// (0x0005892a) cell_ai5_widget_pane_g6

0x9eba,	// (0x00058936) cell_ai5_widget_pane_g7

0x9f02,	// (0x0005897e) cell_ai5_widget_pane_t1_ParamLimits

0x9f02,	// (0x0005897e) cell_ai5_widget_pane_t1

0x9f1f,	// (0x0005899b) cell_ai5_widget_pane_t2_ParamLimits

0x9f1f,	// (0x0005899b) cell_ai5_widget_pane_t2

0x9f37,	// (0x000589b3) cell_ai5_widget_pane_t3_ParamLimits

0x9f37,	// (0x000589b3) cell_ai5_widget_pane_t3

0x9f4f,	// (0x000589cb) cell_ai5_widget_pane_t4_ParamLimits

0x9f4f,	// (0x000589cb) cell_ai5_widget_pane_t4

0x9f6c,	// (0x000589e8) cell_ai5_widget_pane_t5_ParamLimits

0x9f6c,	// (0x000589e8) cell_ai5_widget_pane_t5

0x9f8b,	// (0x00058a07) cell_ai5_widget_pane_t6_ParamLimits

0x9f8b,	// (0x00058a07) cell_ai5_widget_pane_t6

0x9f9d,	// (0x00058a19) cell_ai5_widget_pane_t7_ParamLimits

0x9f9d,	// (0x00058a19) cell_ai5_widget_pane_t7

0x9fb6,	// (0x00058a32) cell_ai5_widget_pane_t8_ParamLimits

0x9fb6,	// (0x00058a32) cell_ai5_widget_pane_t8

0x0009,

0xfe43,	// (0x0005e8bf) cell_ai5_widget_pane_t_ParamLimits

0xfe43,	// (0x0005e8bf) cell_ai5_widget_pane_t

0xa00a,	// (0x00058a86) grid_ai5_widget_pane

0x3d23,	// (0x0005279f) highlight_cell_ai5_widget_pane_ParamLimits

0x3d23,	// (0x0005279f) highlight_cell_ai5_widget_pane

0xf135,	// (0x0005dbb1) ai5_sk_left_pane

0xf13f,	// (0x0005dbbb) ai5_sk_middle_pane

0xf149,	// (0x0005dbc5) ai5_sk_right_pane

0xa040,	// (0x00058abc) bg_ai5_widget_pane_g1_ParamLimits

0xa040,	// (0x00058abc) bg_ai5_widget_pane_g1

0xa04c,	// (0x00058ac8) bg_ai5_widget_pane_g2_ParamLimits

0xa04c,	// (0x00058ac8) bg_ai5_widget_pane_g2

0xa058,	// (0x00058ad4) bg_ai5_widget_pane_g3_ParamLimits

0xa058,	// (0x00058ad4) bg_ai5_widget_pane_g3

0xa064,	// (0x00058ae0) bg_ai5_widget_pane_g4_ParamLimits

0xa064,	// (0x00058ae0) bg_ai5_widget_pane_g4

0xa070,	// (0x00058aec) bg_ai5_widget_pane_g5_ParamLimits

0xa070,	// (0x00058aec) bg_ai5_widget_pane_g5

0xa07c,	// (0x00058af8) bg_ai5_widget_pane_g6_ParamLimits

0xa07c,	// (0x00058af8) bg_ai5_widget_pane_g6

0xa088,	// (0x00058b04) bg_ai5_widget_pane_g7_ParamLimits

0xa088,	// (0x00058b04) bg_ai5_widget_pane_g7

0xa094,	// (0x00058b10) bg_ai5_widget_pane_g8_ParamLimits

0xa094,	// (0x00058b10) bg_ai5_widget_pane_g8

0xa0a0,	// (0x00058b1c) bg_ai5_widget_pane_g9_ParamLimits

0xa0a0,	// (0x00058b1c) bg_ai5_widget_pane_g9

0x0008,

0xfe58,	// (0x0005e8d4) bg_ai5_widget_pane_g_ParamLimits

0xfe58,	// (0x0005e8d4) bg_ai5_widget_pane_g

0xa0d2,	// (0x00058b4e) cell_shortcut_ai5_widget_pane_ParamLimits

0xa0d2,	// (0x00058b4e) cell_shortcut_ai5_widget_pane

0x499e,	// (0x0005341a) bg_cell_shortcut_ai5_widget_pane

0xa0e3,	// (0x00058b5f) cell_grid_ai5_widget_pane_g1

0xa0ec,	// (0x00058b68) highlight_cell_shortcut_ai5_widget_pane

0x51fc,	// (0x00053c78) ai5_sk_left_pane_g1

0xa0f4,	// (0x00058b70) ai5_sk_left_pane_g2

0xa0fc,	// (0x00058b78) ai5_sk_left_pane_g3

0xa104,	// (0x00058b80) ai5_sk_left_pane_g4

0x0003,

0xfe6b,	// (0x0005e8e7) ai5_sk_left_pane_g

0xa10c,	// (0x00058b88) ai5_sk_left_pane_t1

0x5204,	// (0x00053c80) ai5_sk_right_pane_g1

0xa11a,	// (0x00058b96) ai5_sk_right_pane_g2

0xa122,	// (0x00058b9e) ai5_sk_right_pane_g3

0xa12a,	// (0x00058ba6) ai5_sk_right_pane_g4

0x0003,

0xfe74,	// (0x0005e8f0) ai5_sk_right_pane_g

0xa132,	// (0x00058bae) ai5_sk_right_pane_t1

0x5204,	// (0x00053c80) ai5_sk_middle_pane_g1

0x51fc,	// (0x00053c78) ai5_sk_middle_pane_g2

0x521c,	// (0x00053c98) ai5_sk_middle_pane_g3

0xa122,	// (0x00058b9e) ai5_sk_middle_pane_g4

0xa0fc,	// (0x00058b78) ai5_sk_middle_pane_g5

0xa140,	// (0x00058bbc) ai5_sk_middle_pane_g6

0xf153,	// (0x0005dbcf) ai5_sk_middle_pane_g7

0x0006,

0xfe7d,	// (0x0005e8f9) ai5_sk_middle_pane_g

0xd4b4,	// (0x0005bf30) aid_touch_area_size_lc0_ParamLimits

0xd4b4,	// (0x0005bf30) aid_touch_area_size_lc0

0x1e91,	// (0x0005090d) cell_hwr_candidate_pane_t1_ParamLimits

0x4d40,	// (0x000537bc) aid_touch_navi_pane

0xd7da,	// (0x0005c256) status_dt_navi_pane_ParamLimits

0xd7da,	// (0x0005c256) status_dt_navi_pane

0xd7f2,	// (0x0005c26e) status_dt_sta_pane_ParamLimits

0xd7f2,	// (0x0005c26e) status_dt_sta_pane

0xf15b,	// (0x0005dbd7) dt_sta_controll_pane

0xf168,	// (0x0005dbe4) dt_sta_indi_pane

0xf175,	// (0x0005dbf1) dt_sta_title_pane

0x3734,	// (0x000521b0) bg_dt_sta_indi_pane_ParamLimits

0x3734,	// (0x000521b0) bg_dt_sta_indi_pane

0xf187,	// (0x0005dc03) dt_sta_battery_pane

0xf18f,	// (0x0005dc0b) dt_sta_indi_pane_g1

0xa192,	// (0x00058c0e) dt_sta_indi_pane_g2

0xa19b,	// (0x00058c17) dt_sta_indi_pane_g3

0x0002,

0xfe8c,	// (0x0005e908) dt_sta_indi_pane_g

0xa1a4,	// (0x00058c20) dt_sta_signal_pane

0x3d23,	// (0x0005279f) bg_dt_sta_title_pane_ParamLimits

0x3d23,	// (0x0005279f) bg_dt_sta_title_pane

0xa1ad,	// (0x00058c29) dt_sta_title_pane_g1

0xa1b5,	// (0x00058c31) dt_sta_title_pane_t1_ParamLimits

0xa1b5,	// (0x00058c31) dt_sta_title_pane_t1

0x33b7,	// (0x00051e33) bg_dt_sta_control_pane

0xf198,	// (0x0005dc14) dt_sta_controll_pane_g1

0xa1d3,	// (0x00058c4f) bg_dt_sta_title_pane_g1

0xa1dc,	// (0x00058c58) bg_dt_sta_title_pane_g2

0xa1e5,	// (0x00058c61) bg_dt_sta_title_pane_g3

0x0002,

0xfe93,	// (0x0005e90f) bg_dt_sta_title_pane_g

0x77e6,	// (0x00056262) bg_dt_sta_indi_pane_g1

0xa1ee,	// (0x00058c6a) dt_sta_signal_pane_g1

0xa1f6,	// (0x00058c72) dt_sta_signal_pane_g2

0x0001,

0xfe9a,	// (0x0005e916) dt_sta_signal_pane_g

0xa1fe,	// (0x00058c7a) dt_sta_battery_pane_g1

0xa207,	// (0x00058c83) dt_sta_battery_pane_t1

0x77e6,	// (0x00056262) bg_dt_sta_control_pane_g1

0x44a8,	// (0x00052f24) fep_china_uni_eep_pane

0x44b0,	// (0x00052f2c) fep_china_uni_entry_pane_ParamLimits

0x44c0,	// (0x00052f3c) popup_fep_china_uni_window_g1_ParamLimits

0x44d0,	// (0x00052f4c) popup_fep_china_uni_window_g2_ParamLimits

0x44d0,	// (0x00052f4c) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0005e1a4) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0005e1a4) popup_fep_china_uni_window_g

0xa216,	// (0x00058c92) fep_china_uni_eep_pane_g1

0xa21e,	// (0x00058c9a) fep_china_uni_eep_pane_t1

0x9c91,	// (0x0005870d) aid_touch_area_size_smil_player

0x4e9c,	// (0x00053918) lc0_clock_pane

0x5083,	// (0x00053aff) status_pane_g5_ParamLimits

0x5083,	// (0x00053aff) status_pane_g5

0xc15f,	// (0x0005abdb) popup_keymap_window

0x5041,	// (0x00053abd) status_icon_pane

0x9e7f,	// (0x000588fb) cell_ai5_widget_pane_g3_ParamLimits

0x9e96,	// (0x00058912) cell_ai5_widget_pane_g4_ParamLimits

0x9ea2,	// (0x0005891e) cell_ai5_widget_pane_g5_ParamLimits

0x9ec6,	// (0x00058942) cell_ai5_widget_pane_g8_ParamLimits

0x9ec6,	// (0x00058942) cell_ai5_widget_pane_g8

0x9eda,	// (0x00058956) cell_ai5_widget_pane_g9_ParamLimits

0x9eda,	// (0x00058956) cell_ai5_widget_pane_g9

0x9eee,	// (0x0005896a) cell_ai5_widget_pane_g10_ParamLimits

0x9eee,	// (0x0005896a) cell_ai5_widget_pane_g10

0xa22d,	// (0x00058ca9) status_icon_pane_g1

0x33b7,	// (0x00051e33) bg_popup_sub_pane_cp13

0xa235,	// (0x00058cb1) popup_keymap_window_t1

0xd442,	// (0x0005bebe) control_pane_g6_ParamLimits

0xd442,	// (0x0005bebe) control_pane_g6

0xd44f,	// (0x0005becb) control_pane_g7_ParamLimits

0xd44f,	// (0x0005becb) control_pane_g7

0xd45c,	// (0x0005bed8) control_pane_g8_ParamLimits

0xd45c,	// (0x0005bed8) control_pane_g8

0xf15b,	// (0x0005dbd7) dt_sta_controll_pane_ParamLimits

0xf168,	// (0x0005dbe4) dt_sta_indi_pane_ParamLimits

0xf175,	// (0x0005dbf1) dt_sta_title_pane_ParamLimits

0x3c4f,	// (0x000526cb) aid_size_touch_scroll_bar_cale

0x0216,	// (0x0004ec92) popup_discreet_window_ParamLimits

0x0216,	// (0x0004ec92) popup_discreet_window

0xb6fe,	// (0x0005a17a) popup_sk_window

0x586d,	// (0x000542e9) bg_popup_sub_pane_cp28_ParamLimits

0x586d,	// (0x000542e9) bg_popup_sub_pane_cp28

0xa243,	// (0x00058cbf) popup_discreet_window_g1_ParamLimits

0xa243,	// (0x00058cbf) popup_discreet_window_g1

0xa263,	// (0x00058cdf) popup_discreet_window_t1_ParamLimits

0xa263,	// (0x00058cdf) popup_discreet_window_t1

0xa281,	// (0x00058cfd) popup_discreet_window_t2_ParamLimits

0xa281,	// (0x00058cfd) popup_discreet_window_t2

0x0002,

0xfe9f,	// (0x0005e91b) popup_discreet_window_t_ParamLimits

0xfe9f,	// (0x0005e91b) popup_discreet_window_t

0x287b,	// (0x000512f7) popup_sk_window_g1

0x2885,	// (0x00051301) popup_sk_window_g2

0x0001,

0xfea6,	// (0x0005e922) popup_sk_window_g

0x288f,	// (0x0005130b) popup_sk_window_t1

0x289d,	// (0x00051319) popup_sk_window_t1_copy1

0x9e6f,	// (0x000588eb) cell_ai5_widget_pane_g2_ParamLimits

0x9fc8,	// (0x00058a44) cell_ai5_widget_pane_t9_ParamLimits

0x9fc8,	// (0x00058a44) cell_ai5_widget_pane_t9

0x33b7,	// (0x00051e33) main_fep_fshwr2_pane

0xcd01,	// (0x0005b77d) aid_fshwr2_btn_pane

0xcd12,	// (0x0005b78e) aid_fshwr2_syb_pane

0xcd23,	// (0x0005b79f) aid_fshwr2_txt_pane

0xcd2f,	// (0x0005b7ab) fshwr2_func_candi_pane

0xcd4e,	// (0x0005b7ca) fshwr2_hwr_syb_pane

0xcd69,	// (0x0005b7e5) fshwr2_icf_pane

0x33b7,	// (0x00051e33) fshwr2_icf_bg_pane

0xa2d3,	// (0x00058d4f) fshwr2_icf_pane_t1_ParamLimits

0xa2d3,	// (0x00058d4f) fshwr2_icf_pane_t1

0x4396,	// (0x00052e12) fshwr2_func_candi_pane_g1

0xf1a1,	// (0x0005dc1d) fshwr2_func_candi_row_pane_ParamLimits

0xf1a1,	// (0x0005dc1d) fshwr2_func_candi_row_pane

0xf1b9,	// (0x0005dc35) cell_fshwr2_syb_pane_ParamLimits

0xf1b9,	// (0x0005dc35) cell_fshwr2_syb_pane

0x7a64,	// (0x000564e0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7a64,	// (0x000564e0) fshwr2_hwr_syb_pane_g1

0x33b7,	// (0x00051e33) bg_popup_call_pane_cp01

0xf1d3,	// (0x0005dc4f) fshwr2_func_candi_cell_pane_ParamLimits

0xf1d3,	// (0x0005dc4f) fshwr2_func_candi_cell_pane

0xa340,	// (0x00058dbc) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa340,	// (0x00058dbc) fshwr2_func_candi_cell_bg_pane

0xf1fe,	// (0x0005dc7a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf1fe,	// (0x0005dc7a) fshwr2_func_candi_cell_pane_g1

0xa374,	// (0x00058df0) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa374,	// (0x00058df0) fshwr2_func_candi_cell_pane_t1

0x33b7,	// (0x00051e33) bg_button_pane_cp08

0x499e,	// (0x0005341a) cell_fshwr2_syb_bg_pane

0xf226,	// (0x0005dca2) cell_fshwr2_syb_bg_pane_g1

0xf22e,	// (0x0005dcaa) cell_fshwr2_syb_bg_pane_t1

0x3d23,	// (0x0005279f) main_tmo_pane

0xdabe,	// (0x0005c53a) uni_indicator_pane_g1_ParamLimits

0xdad5,	// (0x0005c551) uni_indicator_pane_g2_ParamLimits

0xdaeb,	// (0x0005c567) uni_indicator_pane_g3_ParamLimits

0x63b8,	// (0x00054e34) uni_indicator_pane_g4_ParamLimits

0x63b8,	// (0x00054e34) uni_indicator_pane_g4

0x63cc,	// (0x00054e48) uni_indicator_pane_g5_ParamLimits

0x63cc,	// (0x00054e48) uni_indicator_pane_g5

0x63cc,	// (0x00054e48) uni_indicator_pane_g6_ParamLimits

0x63cc,	// (0x00054e48) uni_indicator_pane_g6

0xf927,	// (0x0005e3a3) uni_indicator_pane_g_ParamLimits

0xe562,	// (0x0005cfde) popup_tmo_note_window_ParamLimits

0xe562,	// (0x0005cfde) popup_tmo_note_window

0x20fb,	// (0x00050b77) fshwr2_bg_pane

0xf217,	// (0x0005dc93) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf217,	// (0x0005dc93) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeab,	// (0x0005e927) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeab,	// (0x0005e927) fshwr2_func_candi_cell_pane_g

0x77e6,	// (0x00056262) bg_popup_window_pane_cp01

0xa39e,	// (0x00058e1a) bg_popup_window_pane_g1_cp01

0xa3a7,	// (0x00058e23) bg_popup_window_pane_cp22_ParamLimits

0xa3a7,	// (0x00058e23) bg_popup_window_pane_cp22

0xa3b5,	// (0x00058e31) listscroll_tmo_link_pane_ParamLimits

0xa3b5,	// (0x00058e31) listscroll_tmo_link_pane

0xa3f5,	// (0x00058e71) popup_tmo_note_window_g1_ParamLimits

0xa3f5,	// (0x00058e71) popup_tmo_note_window_g1

0xa402,	// (0x00058e7e) tmo_note_info_pane_ParamLimits

0xa402,	// (0x00058e7e) tmo_note_info_pane

0xf23d,	// (0x0005dcb9) list_tmo_note_info_pane_g1_ParamLimits

0xf23d,	// (0x0005dcb9) list_tmo_note_info_pane_g1

0xa433,	// (0x00058eaf) list_tmo_note_info_pane_g2_ParamLimits

0xa433,	// (0x00058eaf) list_tmo_note_info_pane_g2

0x0001,

0xfeb0,	// (0x0005e92c) list_tmo_note_info_pane_g_ParamLimits

0xfeb0,	// (0x0005e92c) list_tmo_note_info_pane_g

0xa44f,	// (0x00058ecb) list_tmo_note_info_text_pane_ParamLimits

0xa44f,	// (0x00058ecb) list_tmo_note_info_text_pane

0xa4d0,	// (0x00058f4c) list_tmo_link_pane

0xa4dd,	// (0x00058f59) scroll_pane_cp20

0xa4ea,	// (0x00058f66) list_single_tmo_link_pane_ParamLimits

0xa4ea,	// (0x00058f66) list_single_tmo_link_pane

0xa4fa,	// (0x00058f76) list_single_tmo_link_pane_t1

0xa508,	// (0x00058f84) list_tmo_note_info_text_pane_t1_ParamLimits

0xa508,	// (0x00058f84) list_tmo_note_info_text_pane_t1

0xd18c,	// (0x0005bc08) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd18c,	// (0x0005bc08) aid_size_touch_scroll_bar_cp01

0xbccf,	// (0x0005a74b) aid_size_touch_slider_marker

0xb6ee,	// (0x0005a16a) popup_settings_window_ParamLimits

0xb6ee,	// (0x0005a16a) popup_settings_window

0x11a4,	// (0x0004fc20) popup_candi_list_indi_window

0x4d40,	// (0x000537bc) aid_touch_navi_pane_ParamLimits

0x2056,	// (0x00050ad2) rs_clock_indi_pane

0x205f,	// (0x00050adb) sctrl_sk_bottom_pane_ParamLimits

0x2070,	// (0x00050aec) sctrl_sk_top_pane_ParamLimits

0x2173,	// (0x00050bef) popup_fep_tooltip_window

0x9de5,	// (0x00058861) aid_size_cell_widget_grid_ParamLimits

0x9e5a,	// (0x000588d6) cell_ai5_widget_pane_g1_ParamLimits

0x9e5a,	// (0x000588d6) cell_ai5_widget_pane_g1

0x9eae,	// (0x0005892a) cell_ai5_widget_pane_g6_ParamLimits

0x9eba,	// (0x00058936) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2e,	// (0x0005e8aa) cell_ai5_widget_pane_g_ParamLimits

0xfe2e,	// (0x0005e8aa) cell_ai5_widget_pane_g

0x9fec,	// (0x00058a68) cell_ai5_widget_pane_t10_ParamLimits

0x9fec,	// (0x00058a68) cell_ai5_widget_pane_t10

0xa00a,	// (0x00058a86) grid_ai5_widget_pane_ParamLimits

0xa0ac,	// (0x00058b28) cell_contacts_ai5_widget_pane_ParamLimits

0xa0ac,	// (0x00058b28) cell_contacts_ai5_widget_pane

0xa296,	// (0x00058d12) popup_discreet_window_t3_ParamLimits

0xa296,	// (0x00058d12) popup_discreet_window_t3

0xcd81,	// (0x0005b7fd) popup_fshwr2_char_preview_window_ParamLimits

0xcd81,	// (0x0005b7fd) popup_fshwr2_char_preview_window

0xf254,	// (0x0005dcd0) tmo_note_info_pane_t1

0xf269,	// (0x0005dce5) tmo_note_info_pane_t2

0xf280,	// (0x0005dcfc) tmo_note_info_pane_t3

0xa4ac,	// (0x00058f28) tmo_note_info_pane_t4

0xa4be,	// (0x00058f3a) tmo_note_info_pane_t5

0x0004,

0xfeb5,	// (0x0005e931) tmo_note_info_pane_t

0xa4d0,	// (0x00058f4c) list_tmo_link_pane_ParamLimits

0xa4dd,	// (0x00058f59) scroll_pane_cp20_ParamLimits

0x33b7,	// (0x00051e33) bg_popup_fep_char_preview_window_cp01

0xa521,	// (0x00058f9d) popup_fshwr2_char_preview_window_t1

0xa52f,	// (0x00058fab) popup_candi_list_indi_window_g1

0xa538,	// (0x00058fb4) bg_cell_contacts_ai5_widget_pane

0xa544,	// (0x00058fc0) cell_contacts_ai5_widget_pane_g1

0x7e90,	// (0x0005690c) cell_contacts_ai5_widget_pane_g2

0xa557,	// (0x00058fd3) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec0,	// (0x0005e93c) cell_contacts_ai5_widget_pane_g

0xa569,	// (0x00058fe5) cell_contacts_ai5_widget_pane_t1

0x3d23,	// (0x0005279f) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf2fa,	// (0x0005dd76) settings_container_pane

0x499e,	// (0x0005341a) listscroll_set_pane_copy1

0x6ed3,	// (0x0005594f) scroll_pane_cp121_copy1

0xa5ec,	// (0x00059068) set_content_pane_copy1

0xf306,	// (0x0005dd82) aid_height_set_list_copy1_ParamLimits

0xf306,	// (0x0005dd82) aid_height_set_list_copy1

0x65c4,	// (0x00055040) aid_size_parent_copy1_ParamLimits

0x65c4,	// (0x00055040) aid_size_parent_copy1

0xf312,	// (0x0005dd8e) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf312,	// (0x0005dd8e) button_value_adjust_pane_cp6_copy1

0x4cde,	// (0x0005375a) list_highlight_pane_cp2_copy1_ParamLimits

0x4cde,	// (0x0005375a) list_highlight_pane_cp2_copy1

0xf326,	// (0x0005dda2) list_set_pane_copy1_ParamLimits

0xf326,	// (0x0005dda2) list_set_pane_copy1

0xf295,	// (0x0005dd11) main_pane_set_t1_copy1_ParamLimits

0xf295,	// (0x0005dd11) main_pane_set_t1_copy1

0xf2cf,	// (0x0005dd4b) main_pane_set_t2_copy1_ParamLimits

0xf2cf,	// (0x0005dd4b) main_pane_set_t2_copy1

0xf3d3,	// (0x0005de4f) main_pane_set_t3_copy1

0xf3e1,	// (0x0005de5d) main_pane_set_t4_copy1

0xf2ee,	// (0x0005dd6a) set_content_pane_g1_copy1_ParamLimits

0xf2ee,	// (0x0005dd6a) set_content_pane_g1_copy1

0xf3ef,	// (0x0005de6b) setting_code_pane_copy1

0xa6e5,	// (0x00059161) setting_slider_graphic_pane_copy1

0xa6e5,	// (0x00059161) setting_slider_pane_copy1

0xa6e5,	// (0x00059161) setting_text_pane_copy1

0xa6e5,	// (0x00059161) setting_volume_pane_copy1

0xf3ef,	// (0x0005de6b) settings_code_pane_cp2_copy1

0xf3f7,	// (0x0005de73) settings_code_pane_cp_copy1_ParamLimits

0xf3f7,	// (0x0005de73) settings_code_pane_cp_copy1

0xcd99,	// (0x0005b815) volume_set_pane_copy1

0xf40b,	// (0x0005de87) volume_set_pane_g10_copy1

0xf413,	// (0x0005de8f) volume_set_pane_g1_copy1

0xf41b,	// (0x0005de97) volume_set_pane_g2_copy1

0xf423,	// (0x0005de9f) volume_set_pane_g3_copy1

0xf42b,	// (0x0005dea7) volume_set_pane_g4_copy1

0xf433,	// (0x0005deaf) volume_set_pane_g5_copy1

0xf43b,	// (0x0005deb7) volume_set_pane_g6_copy1

0xf443,	// (0x0005debf) volume_set_pane_g7_copy1

0xf44b,	// (0x0005dec7) volume_set_pane_g8_copy1

0xf453,	// (0x0005decf) volume_set_pane_g9_copy1

0x34ab,	// (0x00051f27) bg_set_opt_pane_cp_copy1_ParamLimits

0x34ab,	// (0x00051f27) bg_set_opt_pane_cp_copy1

0x2934,	// (0x000513b0) setting_slider_pane_t1_copy1_ParamLimits

0x2934,	// (0x000513b0) setting_slider_pane_t1_copy1

0xcda1,	// (0x0005b81d) setting_slider_pane_t2_copy1_ParamLimits

0xcda1,	// (0x0005b81d) setting_slider_pane_t2_copy1

0xcdbb,	// (0x0005b837) setting_slider_pane_t3_copy1_ParamLimits

0xcdbb,	// (0x0005b837) setting_slider_pane_t3_copy1

0xcdd3,	// (0x0005b84f) slider_set_pane_copy1_ParamLimits

0xcdd3,	// (0x0005b84f) slider_set_pane_copy1

0x3d72,	// (0x000527ee) set_opt_bg_pane_g1_copy2

0x3d7a,	// (0x000527f6) set_opt_bg_pane_g2_copy2

0xa751,	// (0x000591cd) set_opt_bg_pane_g3_copy2

0x3d8a,	// (0x00052806) set_opt_bg_pane_g4_copy2

0x3d92,	// (0x0005280e) set_opt_bg_pane_g5_copy2

0x3d9a,	// (0x00052816) set_opt_bg_pane_g6_copy2

0xf45b,	// (0x0005ded7) set_opt_bg_pane_g7_copy2

0xa763,	// (0x000591df) set_opt_bg_pane_g8_copy2

0xa76d,	// (0x000591e9) set_opt_bg_pane_g9_copy2

0xa777,	// (0x000591f3) aid_size_touch_slider_mark_copy1_ParamLimits

0xa777,	// (0x000591f3) aid_size_touch_slider_mark_copy1

0xa78b,	// (0x00059207) slider_set_pane_g1_copy1

0xa794,	// (0x00059210) slider_set_pane_g2_copy1

0x68e8,	// (0x00055364) slider_set_pane_g3_copy1_ParamLimits

0x68e8,	// (0x00055364) slider_set_pane_g3_copy1

0x68fc,	// (0x00055378) slider_set_pane_g4_copy1_ParamLimits

0x68fc,	// (0x00055378) slider_set_pane_g4_copy1

0x6914,	// (0x00055390) slider_set_pane_g5_copy1_ParamLimits

0x6914,	// (0x00055390) slider_set_pane_g5_copy1

0x68e8,	// (0x00055364) slider_set_pane_g6_copy1_ParamLimits

0x68e8,	// (0x00055364) slider_set_pane_g6_copy1

0xf463,	// (0x0005dedf) slider_set_pane_g7_copy1_ParamLimits

0xf463,	// (0x0005dedf) slider_set_pane_g7_copy1

0x33cb,	// (0x00051e47) bg_set_opt_pane_cp2_copy1

0xa7b2,	// (0x0005922e) setting_slider_graphic_pane_g1_copy1

0xf479,	// (0x0005def5) setting_slider_graphic_pane_t1_copy1

0xf489,	// (0x0005df05) setting_slider_graphic_pane_t2_copy1

0xf499,	// (0x0005df15) slider_set_pane_cp_copy1

0xa7eb,	// (0x00059267) input_focus_pane_cp1_copy1

0xa7f4,	// (0x00059270) list_set_text_pane_copy1

0xa7fc,	// (0x00059278) setting_text_pane_g1_copy1

0x0427,	// (0x0004eea3) set_text_pane_t1_copy1

0xa7eb,	// (0x00059267) input_focus_pane_cp2_copy1

0xa7fc,	// (0x00059278) setting_code_pane_g1_copy1

0xf4a1,	// (0x0005df1d) setting_code_pane_t1_copy1

0x6cfe,	// (0x0005577a) list_set_graphic_pane_copy1

0x33cb,	// (0x00051e47) bg_set_opt_pane_cp4_copy1

0xd371,	// (0x0005bded) list_set_graphic_pane_g1_copy1_ParamLimits

0xd371,	// (0x0005bded) list_set_graphic_pane_g1_copy1

0xf4af,	// (0x0005df2b) list_set_graphic_pane_g2_copy1

0xd389,	// (0x0005be05) list_set_graphic_pane_t1_copy1_ParamLimits

0xd389,	// (0x0005be05) list_set_graphic_pane_t1_copy1

0x77e6,	// (0x00056262) rs_clock_indi_pane_g1

0xa82d,	// (0x000592a9) rs_clock_indi_pane_t1

0xa83b,	// (0x000592b7) rs_indi_pane

0xa843,	// (0x000592bf) rs_indi_pane_g1

0xa84c,	// (0x000592c8) rs_indi_pane_g2

0xa855,	// (0x000592d1) rs_indi_pane_g3

0x0002,

0xfec7,	// (0x0005e943) rs_indi_pane_g

0x499e,	// (0x0005341a) bg_popup_preview_window_pane_cp03

0xa85e,	// (0x000592da) popup_fep_tooltip_window_t1

0x846e,	// (0x00056eea) popup_note2_window_g2_ParamLimits

0x846e,	// (0x00056eea) popup_note2_window_g2

0x0001,

0xfc60,	// (0x0005e6dc) popup_note2_window_g_ParamLimits

0xfc60,	// (0x0005e6dc) popup_note2_window_g

0x8969,	// (0x000573e5) bg_popup_sub_pane_cp11_ParamLimits

0x8976,	// (0x000573f2) cell_ai3_links_pane_g1_ParamLimits

0x898d,	// (0x00057409) cell_ai3_links_pane_t1

0x0427,	// (0x0004eea3) set_text_pane_t1_copy1_ParamLimits

0x48af,	// (0x0005332b) cell_graphic_popup_pane_cp2_ParamLimits

0x48af,	// (0x0005332b) cell_graphic_popup_pane_cp2

0xa86c,	// (0x000592e8) cell_graphic_popup_pane_g1_cp2

0x3a62,	// (0x000524de) cell_graphic_popup_pane_g2_cp2

0xa874,	// (0x000592f0) cell_graphic_popup_pane_g3_cp2

0xa87c,	// (0x000592f8) cell_graphic_popup_pane_t2_cp2

0x3a73,	// (0x000524ef) grid_highlight_pane_cp3_cp2

0x40b7,	// (0x00052b33) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3d23,	// (0x0005279f) main_tmo_pane_ParamLimits

0xe556,	// (0x0005cfd2) popup_tmo_big_image_note_window

0x9e49,	// (0x000588c5) cell_ai5_widget_list_pane

0x9e51,	// (0x000588cd) cell_ai5_widget_lrg_icon_pane

0xf254,	// (0x0005dcd0) tmo_note_info_pane_t1_ParamLimits

0xf269,	// (0x0005dce5) tmo_note_info_pane_t2_ParamLimits

0xf280,	// (0x0005dcfc) tmo_note_info_pane_t3_ParamLimits

0xa4ac,	// (0x00058f28) tmo_note_info_pane_t4_ParamLimits

0xa4be,	// (0x00058f3a) tmo_note_info_pane_t5_ParamLimits

0xfeb5,	// (0x0005e931) tmo_note_info_pane_t_ParamLimits

0xf2fa,	// (0x0005dd76) settings_container_pane_ParamLimits

0xa7e3,	// (0x0005925f) indicator_popup_pane_cp5

0xa7e3,	// (0x0005925f) indicator_popup_pane_cp6

0x6cfe,	// (0x0005577a) list_set_graphic_pane_copy1_ParamLimits

0x33b7,	// (0x00051e33) bg_popup_window_pane_cp23

0xa88a,	// (0x00059306) popup_tmo_big_image_note_window_g1

0xa894,	// (0x00059310) popup_tmo_big_image_note_window_t1

0xa8a4,	// (0x00059320) popup_tmo_big_image_note_window_t2

0xa8b4,	// (0x00059330) popup_tmo_big_image_note_window_t3

0x0002,

0xfece,	// (0x0005e94a) popup_tmo_big_image_note_window_t

0x77e6,	// (0x00056262) cell_ai5_widget_lrg_icon_pane_g1

0xa8c4,	// (0x00059340) cell_ai5_widget_lrg_icon_pane_t1

0xa8d2,	// (0x0005934e) cell_ai5_widget_list_row_pane_ParamLimits

0xa8d2,	// (0x0005934e) cell_ai5_widget_list_row_pane

0xa8eb,	// (0x00059367) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa8eb,	// (0x00059367) cell_ai5_widget_list_row_pane_g1

0xa8f8,	// (0x00059374) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa8f8,	// (0x00059374) cell_ai5_widget_list_row_pane_t1

0xa929,	// (0x000593a5) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa929,	// (0x000593a5) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed5,	// (0x0005e951) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed5,	// (0x0005e951) cell_ai5_widget_list_row_pane_t

0x013d,	// (0x0004ebb9) main_fep_vtchi_ss_pane

0x29a9,	// (0x00051425) popup_fep_char_pre_window

0x29b1,	// (0x0005142d) popup_fep_ituss_window

0x29d2,	// (0x0005144e) popup_fep_vkbss_window

0xa951,	// (0x000593cd) grid_vkbss_keypad_pane_ParamLimits

0xa951,	// (0x000593cd) grid_vkbss_keypad_pane

0xa961,	// (0x000593dd) ituss_keypad_pane

0x29fd,	// (0x00051479) aid_vkbss_key_offset_ParamLimits

0x29fd,	// (0x00051479) aid_vkbss_key_offset

0x2a09,	// (0x00051485) cell_vkbss_key_pane_ParamLimits

0x2a09,	// (0x00051485) cell_vkbss_key_pane

0xa971,	// (0x000593ed) bg_cell_vkbss_key_g1_ParamLimits

0xa971,	// (0x000593ed) bg_cell_vkbss_key_g1

0xa97d,	// (0x000593f9) cell_vkbss_key_3p_pane_ParamLimits

0xa97d,	// (0x000593f9) cell_vkbss_key_3p_pane

0xa997,	// (0x00059413) cell_vkbss_key_g1_ParamLimits

0xa997,	// (0x00059413) cell_vkbss_key_g1

0xa9b1,	// (0x0005942d) cell_vkbss_key_t1_ParamLimits

0xa9b1,	// (0x0005942d) cell_vkbss_key_t1

0x2a1f,	// (0x0005149b) cell_ituss_key_pane_ParamLimits

0x2a1f,	// (0x0005149b) cell_ituss_key_pane

0xa9dc,	// (0x00059458) bg_cell_ituss_key_g1_ParamLimits

0xa9dc,	// (0x00059458) bg_cell_ituss_key_g1

0xa9e8,	// (0x00059464) cell_ituss_key_pane_g1_ParamLimits

0xa9e8,	// (0x00059464) cell_ituss_key_pane_g1

0xaa02,	// (0x0005947e) cell_ituss_key_pane_g2_ParamLimits

0xaa02,	// (0x0005947e) cell_ituss_key_pane_g2

0x0001,

0xfedc,	// (0x0005e958) cell_ituss_key_pane_g_ParamLimits

0xfedc,	// (0x0005e958) cell_ituss_key_pane_g

0xaa30,	// (0x000594ac) cell_ituss_key_t1_ParamLimits

0xaa30,	// (0x000594ac) cell_ituss_key_t1

0xaa6a,	// (0x000594e6) cell_ituss_key_t2_ParamLimits

0xaa6a,	// (0x000594e6) cell_ituss_key_t2

0xaa9b,	// (0x00059517) cell_ituss_key_t3_ParamLimits

0xaa9b,	// (0x00059517) cell_ituss_key_t3

0xaad5,	// (0x00059551) cell_ituss_key_t4_ParamLimits

0xaad5,	// (0x00059551) cell_ituss_key_t4

0x0003,

0xfee1,	// (0x0005e95d) cell_ituss_key_t_ParamLimits

0xfee1,	// (0x0005e95d) cell_ituss_key_t

0xab0f,	// (0x0005958b) cell_vkbss_key_3p_pane_g1

0xab17,	// (0x00059593) cell_vkbss_key_3p_pane_g2

0xab1f,	// (0x0005959b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0005e966) cell_vkbss_key_3p_pane_g

0x33b7,	// (0x00051e33) bg_popup_fep_char_preview_window_cp02

0xab27,	// (0x000595a3) popup_fep_char_pre_window_t1

0xf12b,	// (0x0005dba7) main_ai5_sk_pane

0xa538,	// (0x00058fb4) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa544,	// (0x00058fc0) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7e90,	// (0x0005690c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa557,	// (0x00058fd3) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec0,	// (0x0005e93c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa569,	// (0x00058fe5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3d23,	// (0x0005279f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf4b7,	// (0x0005df33) main_ai5_sk_pane_g1

0x56a6,	// (0x00054122) popup_query_code_window_g1

0x29c7,	// (0x00051443) popup_fep_vkb_icf_pane

0x29db,	// (0x00051457) popup_fep_vtchi_icf_pane

0x3d23,	// (0x0005279f) bg_icf_pane

0xab3f,	// (0x000595bb) list_vkb_icf_pane

0x3d23,	// (0x0005279f) bg_icf_pane_cp01

0xab4b,	// (0x000595c7) vtchi_icf_list_pane

0xab5c,	// (0x000595d8) list_vkb_icf_pane_t1_ParamLimits

0xab5c,	// (0x000595d8) list_vkb_icf_pane_t1

0xab72,	// (0x000595ee) vtchi_icf_list_pane_t1_ParamLimits

0xab72,	// (0x000595ee) vtchi_icf_list_pane_t1

0x29b1,	// (0x0005142d) popup_fep_ituss_window_ParamLimits

0x29db,	// (0x00051457) popup_fep_vtchi_icf_pane_ParamLimits

0xa961,	// (0x000593dd) ituss_keypad_pane_ParamLimits

0x29f1,	// (0x0005146d) ituss_sks_pane

0x3d23,	// (0x0005279f) bg_icf_pane_ParamLimits

0x299a,	// (0x00051416) icf_edit_indi_pane_ParamLimits

0x299a,	// (0x00051416) icf_edit_indi_pane

0xab3f,	// (0x000595bb) list_vkb_icf_pane_ParamLimits

0x3d23,	// (0x0005279f) bg_icf_pane_cp01_ParamLimits

0x299a,	// (0x00051416) icf_edit_indi_pane_cp01_ParamLimits

0x299a,	// (0x00051416) icf_edit_indi_pane_cp01

0xab53,	// (0x000595cf) vtchi_query_pane

0x7a64,	// (0x000564e0) icf_edit_indi_pane_g1_ParamLimits

0x7a64,	// (0x000564e0) icf_edit_indi_pane_g1

0xabf6,	// (0x00059672) icf_edit_indi_pane_g2_ParamLimits

0xabf6,	// (0x00059672) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0005e97e) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0005e97e) icf_edit_indi_pane_g

0xac05,	// (0x00059681) icf_edit_indi_pane_t1

0xab8c,	// (0x00059608) bg_input_focus_pane_cp042

0x3c46,	// (0x000526c2) vtchi_button_pane

0xab95,	// (0x00059611) vtchi_query_pane_t1

0xaba3,	// (0x0005961f) vtchi_query_pane_t2

0xabb1,	// (0x0005962d) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0005e96d) vtchi_query_pane_t

0x33b7,	// (0x00051e33) bg_button_pane_cp13

0xabbf,	// (0x0005963b) vtchi_button_pane_g1

0xabc7,	// (0x00059643) ituss_sks_pane_g1

0xabd2,	// (0x0005964e) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0005e974) ituss_sks_pane_g

0xabda,	// (0x00059656) ituss_sks_pane_t1

0xabe8,	// (0x00059664) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0005e979) ituss_sks_pane_t

0x725d,	// (0x00055cd9) indicator_nsta_pane_cp_g1

0x7266,	// (0x00055ce2) indicator_nsta_pane_cp_g2

0x726e,	// (0x00055cea) indicator_nsta_pane_cp_g3

0x7276,	// (0x00055cf2) indicator_nsta_pane_cp_g4

0x7276,	// (0x00055cf2) indicator_nsta_pane_cp_g5

0x7276,	// (0x00055cf2) indicator_nsta_pane_cp_g6

0x0005,

0xfa9e,	// (0x0005e51a) indicator_nsta_pane_cp_g

0xef3d,	// (0x0005d9b9) cell_graphic2_pane_t2_ParamLimits

0xef3d,	// (0x0005d9b9) cell_graphic2_pane_t2

0x0001,

0xfdb7,	// (0x0005e833) cell_graphic2_pane_t_ParamLimits

0xfdb7,	// (0x0005e833) cell_graphic2_pane_t

0xef73,	// (0x0005d9ef) cell_graphic2_control_pane_t1

0xd333,	// (0x0005bdaf) signal_pane_g3_ParamLimits

0xd333,	// (0x0005bdaf) signal_pane_g3

0xd347,	// (0x0005bdc3) signal_pane_g4_ParamLimits

0xd347,	// (0x0005bdc3) signal_pane_g4

0xa93b,	// (0x000593b7) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa93b,	// (0x000593b7) cell_ai5_widget_list_row_pane_t3

0xaa1e,	// (0x0005949a) cell_ituss_key_pane_t1_ParamLimits

0xaa1e,	// (0x0005949a) cell_ituss_key_pane_t1

0x52f9,	// (0x00053d75) form_field_data_wide_pane_vc_t2_ParamLimits

0x52f9,	// (0x00053d75) form_field_data_wide_pane_vc_t2

0x530d,	// (0x00053d89) form_field_data_wide_pane_vc_t3_ParamLimits

0x530d,	// (0x00053d89) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0005e28b) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0005e28b) form_field_data_wide_pane_vc_t

0x6f15,	// (0x00055991) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6f15,	// (0x00055991) form_field_slider_wide_pane_vc_t3

0x6ff3,	// (0x00055a6f) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6ff3,	// (0x00055a6f) form_field_popup_wide_pane_vc_t2

0x700a,	// (0x00055a86) form_field_popup_wide_pane_vc_t3_ParamLimits

0x700a,	// (0x00055a86) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa8d,	// (0x0005e509) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0005e509) form_field_popup_wide_pane_vc_t

0xcd01,	// (0x0005b77d) aid_fshwr2_btn_pane_ParamLimits

0xcd12,	// (0x0005b78e) aid_fshwr2_syb_pane_ParamLimits

0xcd23,	// (0x0005b79f) aid_fshwr2_txt_pane_ParamLimits

0x20fb,	// (0x00050b77) fshwr2_bg_pane_ParamLimits

0xcd2f,	// (0x0005b7ab) fshwr2_func_candi_pane_ParamLimits

0xcd4e,	// (0x0005b7ca) fshwr2_hwr_syb_pane_ParamLimits

0xcd69,	// (0x0005b7e5) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large

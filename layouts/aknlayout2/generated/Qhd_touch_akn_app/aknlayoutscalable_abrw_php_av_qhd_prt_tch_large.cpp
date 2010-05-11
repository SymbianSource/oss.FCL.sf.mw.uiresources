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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004afa2 };

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
0x77a2,	// (0x00052744) Screen

0x77b6,	// (0x00052758) application_window_ParamLimits

0x77b6,	// (0x00052758) application_window

0x77d0,	// (0x00052772) screen_g1

0x48b3,	// (0x0004f855) area_bottom_pane_ParamLimits

0x48b3,	// (0x0004f855) area_bottom_pane

0x4973,	// (0x0004f915) area_top_pane_ParamLimits

0x4973,	// (0x0004f915) area_top_pane

0x4a11,	// (0x0004f9b3) main_pane_ParamLimits

0x4a11,	// (0x0004f9b3) main_pane

0x77da,	// (0x0005277c) misc_graphics

0x986a,	// (0x0005480c) battery_pane_ParamLimits

0x986a,	// (0x0005480c) battery_pane

0xa53c,	// (0x000554de) bg_status_flat_pane_g8

0xa544,	// (0x000554e6) bg_status_flat_pane_g9

0x992c,	// (0x000548ce) context_pane_ParamLimits

0x992c,	// (0x000548ce) context_pane

0x9a42,	// (0x000549e4) navi_pane_ParamLimits

0x9a42,	// (0x000549e4) navi_pane

0x9ad2,	// (0x00054a74) signal_pane_ParamLimits

0x9ad2,	// (0x00054a74) signal_pane

0x0008,

0xf87e,	// (0x0005a820) bg_status_flat_pane_g

0x9b3f,	// (0x00054ae1) status_pane_g1_ParamLimits

0x9b3f,	// (0x00054ae1) status_pane_g1

0x9b53,	// (0x00054af5) status_pane_g2_ParamLimits

0x9b53,	// (0x00054af5) status_pane_g2

0x9b5f,	// (0x00054b01) status_pane_g3_ParamLimits

0x9b5f,	// (0x00054b01) status_pane_g3

0x0004,

0xf7a5,	// (0x0005a747) status_pane_g_ParamLimits

0xf7a5,	// (0x0005a747) status_pane_g

0x9b93,	// (0x00054b35) title_pane_ParamLimits

0x9b93,	// (0x00054b35) title_pane

0x9bd0,	// (0x00054b72) uni_indicator_pane_ParamLimits

0x9bd0,	// (0x00054b72) uni_indicator_pane

0x978e,	// (0x00054730) bg_list_pane_ParamLimits

0x978e,	// (0x00054730) bg_list_pane

0x7d44,	// (0x00052ce6) find_pane

0x97ae,	// (0x00054750) listscroll_app_pane_ParamLimits

0x97ae,	// (0x00054750) listscroll_app_pane

0x97ba,	// (0x0005475c) listscroll_form_pane

0x5a1d,	// (0x000509bf) listscroll_gen_pane_ParamLimits

0x5a1d,	// (0x000509bf) listscroll_gen_pane

0x5a31,	// (0x000509d3) listscroll_set_pane

0x89e4,	// (0x00053986) main_idle_act_pane

0x9496,	// (0x00054438) main_idle_trad_pane

0x9496,	// (0x00054438) main_list_empty_pane

0x97d4,	// (0x00054776) main_midp_pane

0x97e0,	// (0x00054782) main_pane_g1_ParamLimits

0x97e0,	// (0x00054782) main_pane_g1

0x5a47,	// (0x000509e9) popup_ai_message_window_ParamLimits

0x5a47,	// (0x000509e9) popup_ai_message_window

0x5af5,	// (0x00050a97) popup_fep_china_uni_window_ParamLimits

0x5af5,	// (0x00050a97) popup_fep_china_uni_window

0x5b51,	// (0x00050af3) popup_fep_japan_candidate_window_ParamLimits

0x5b51,	// (0x00050af3) popup_fep_japan_candidate_window

0x5b71,	// (0x00050b13) popup_fep_japan_predictive_window_ParamLimits

0x5b71,	// (0x00050b13) popup_fep_japan_predictive_window

0x5ba1,	// (0x00050b43) popup_find_window

0x5bae,	// (0x00050b50) popup_grid_graphic_window_ParamLimits

0x5bae,	// (0x00050b50) popup_grid_graphic_window

0x5bd8,	// (0x00050b7a) popup_large_graphic_colour_window

0x5bfe,	// (0x00050ba0) popup_menu_window_ParamLimits

0x5bfe,	// (0x00050ba0) popup_menu_window

0x5db6,	// (0x00050d58) popup_note_image_window

0x5da2,	// (0x00050d44) popup_note_wait_window_ParamLimits

0x5da2,	// (0x00050d44) popup_note_wait_window

0x5da2,	// (0x00050d44) popup_note_window_ParamLimits

0x5da2,	// (0x00050d44) popup_note_window

0x5e0c,	// (0x00050dae) popup_query_code_window_ParamLimits

0x5e0c,	// (0x00050dae) popup_query_code_window

0x5e20,	// (0x00050dc2) popup_query_data_code_window_ParamLimits

0x5e20,	// (0x00050dc2) popup_query_data_code_window

0x5e3d,	// (0x00050ddf) popup_query_data_window_ParamLimits

0x5e3d,	// (0x00050ddf) popup_query_data_window

0x5e59,	// (0x00050dfb) popup_query_sat_info_window_ParamLimits

0x5e59,	// (0x00050dfb) popup_query_sat_info_window

0x5e92,	// (0x00050e34) popup_snote_single_graphic_window_ParamLimits

0x5e92,	// (0x00050e34) popup_snote_single_graphic_window

0x5e92,	// (0x00050e34) popup_snote_single_text_window_ParamLimits

0x5e92,	// (0x00050e34) popup_snote_single_text_window

0x5ea7,	// (0x00050e49) popup_sub_window_general

0x5fd7,	// (0x00050f79) popup_window_general_ParamLimits

0x5fd7,	// (0x00050f79) popup_window_general

0x97ee,	// (0x00054790) power_save_pane

0x58b9,	// (0x0005085b) control_pane_g1_ParamLimits

0x58b9,	// (0x0005085b) control_pane_g1

0x58e0,	// (0x00050882) control_pane_g2_ParamLimits

0x58e0,	// (0x00050882) control_pane_g2

0x9751,	// (0x000546f3) control_pane_g3_ParamLimits

0x9751,	// (0x000546f3) control_pane_g3

0x0007,

0xf78d,	// (0x0005a72f) control_pane_g_ParamLimits

0xf78d,	// (0x0005a72f) control_pane_g

0x592a,	// (0x000508cc) control_pane_t1_ParamLimits

0x592a,	// (0x000508cc) control_pane_t1

0x5976,	// (0x00050918) control_pane_t2_ParamLimits

0x5976,	// (0x00050918) control_pane_t2

0x0002,

0xf79e,	// (0x0005a740) control_pane_t_ParamLimits

0xf79e,	// (0x0005a740) control_pane_t

0x9676,	// (0x00054618) navi_navi_volume_pane_cp1

0x967e,	// (0x00054620) status_small_icon_pane

0x9686,	// (0x00054628) status_small_pane_g1_ParamLimits

0x9686,	// (0x00054628) status_small_pane_g1

0x96ba,	// (0x0005465c) status_small_pane_g2_ParamLimits

0x96ba,	// (0x0005465c) status_small_pane_g2

0x96c6,	// (0x00054668) status_small_pane_g3_ParamLimits

0x96c6,	// (0x00054668) status_small_pane_g3

0x96d2,	// (0x00054674) status_small_pane_g4_ParamLimits

0x96d2,	// (0x00054674) status_small_pane_g4

0x96de,	// (0x00054680) status_small_pane_g5_ParamLimits

0x96de,	// (0x00054680) status_small_pane_g5

0x96ec,	// (0x0005468e) status_small_pane_g6_ParamLimits

0x96ec,	// (0x0005468e) status_small_pane_g6

0x0007,

0xf77c,	// (0x0005a71e) status_small_pane_g_ParamLimits

0xf77c,	// (0x0005a71e) status_small_pane_g

0x971b,	// (0x000546bd) status_small_pane_t1

0x973d,	// (0x000546df) status_small_wait_pane_ParamLimits

0x973d,	// (0x000546df) status_small_wait_pane

0x8f08,	// (0x00053eaa) aid_levels_signal_ParamLimits

0x8f08,	// (0x00053eaa) aid_levels_signal

0x8f1a,	// (0x00053ebc) signal_pane_g1_ParamLimits

0x8f1a,	// (0x00053ebc) signal_pane_g1

0x8f2f,	// (0x00053ed1) signal_pane_g2_ParamLimits

0x8f2f,	// (0x00053ed1) signal_pane_g2

0x0003,

0xf70d,	// (0x0005a6af) signal_pane_g_ParamLimits

0xf70d,	// (0x0005a6af) signal_pane_g

0x8f6a,	// (0x00053f0c) context_pane_g1

0x77e4,	// (0x00052786) title_pane_g1

0x781a,	// (0x000527bc) title_pane_t1

0x7882,	// (0x00052824) title_pane_t2

0x78a8,	// (0x0005284a) title_pane_t3

0x0002,

0xf557,	// (0x0005a4f9) title_pane_t

0x9be8,	// (0x00054b8a) aid_levels_battery_ParamLimits

0x9be8,	// (0x00054b8a) aid_levels_battery

0x9bfc,	// (0x00054b9e) battery_pane_g1_ParamLimits

0x9bfc,	// (0x00054b9e) battery_pane_g1

0x9c12,	// (0x00054bb4) battery_pane_g2_ParamLimits

0x9c12,	// (0x00054bb4) battery_pane_g2

0x0001,

0xf7b0,	// (0x0005a752) battery_pane_g_ParamLimits

0xf7b0,	// (0x0005a752) battery_pane_g

0xae72,	// (0x00055e14) uni_indicator_pane_g1

0xae88,	// (0x00055e2a) uni_indicator_pane_g2

0xae9e,	// (0x00055e40) uni_indicator_pane_g3

0x0005,

0xf926,	// (0x0005a8c8) uni_indicator_pane_g

0x9308,	// (0x000542aa) navi_icon_pane_ParamLimits

0x9308,	// (0x000542aa) navi_icon_pane

0x9246,	// (0x000541e8) navi_midp_pane

0x9324,	// (0x000542c6) navi_navi_pane

0x932e,	// (0x000542d0) navi_text_pane_ParamLimits

0x932e,	// (0x000542d0) navi_text_pane

0x77d0,	// (0x00052772) status_small_wait_pane_g1

0x83ae,	// (0x00053350) status_small_wait_pane_g2

0x0001,

0xf921,	// (0x0005a8c3) status_small_wait_pane_g

0xab97,	// (0x00055b39) navi_navi_icon_text_pane

0xab9f,	// (0x00055b41) navi_navi_pane_g1_ParamLimits

0xab9f,	// (0x00055b41) navi_navi_pane_g1

0xabb1,	// (0x00055b53) navi_navi_pane_g2_ParamLimits

0xabb1,	// (0x00055b53) navi_navi_pane_g2

0x0001,

0xf8ef,	// (0x0005a891) navi_navi_pane_g_ParamLimits

0xf8ef,	// (0x0005a891) navi_navi_pane_g

0xabc3,	// (0x00055b65) navi_navi_tabs_pane

0xabcc,	// (0x00055b6e) navi_navi_text_pane

0xab97,	// (0x00055b39) navi_navi_volume_pane

0xab73,	// (0x00055b15) navi_text_pane_t1

0xab67,	// (0x00055b09) navi_icon_pane_g1

0xaaba,	// (0x00055a5c) navi_navi_text_pane_t1

0x637f,	// (0x00051321) navi_navi_volume_pane_g1

0x6387,	// (0x00051329) volume_small_pane

0xaa20,	// (0x000559c2) navi_navi_icon_text_pane_g1

0xaa28,	// (0x000559ca) navi_navi_icon_text_pane_t1

0x9324,	// (0x000542c6) navi_tabs_2_long_pane

0x9324,	// (0x000542c6) navi_tabs_2_pane

0x9324,	// (0x000542c6) navi_tabs_3_long_pane

0x9324,	// (0x000542c6) navi_tabs_3_pane

0x9324,	// (0x000542c6) navi_tabs_4_pane

0x635f,	// (0x00051301) tabs_2_active_pane_ParamLimits

0x635f,	// (0x00051301) tabs_2_active_pane

0x636f,	// (0x00051311) tabs_2_passive_pane_ParamLimits

0x636f,	// (0x00051311) tabs_2_passive_pane

0x632d,	// (0x000512cf) tabs_3_active_pane_ParamLimits

0x632d,	// (0x000512cf) tabs_3_active_pane

0x633d,	// (0x000512df) tabs_3_passive_pane_ParamLimits

0x633d,	// (0x000512df) tabs_3_passive_pane

0x634e,	// (0x000512f0) tabs_3_passive_pane_cp_ParamLimits

0x634e,	// (0x000512f0) tabs_3_passive_pane_cp

0x62e9,	// (0x0005128b) tabs_4_active_pane_ParamLimits

0x62e9,	// (0x0005128b) tabs_4_active_pane

0x62fa,	// (0x0005129c) tabs_4_passive_pane_ParamLimits

0x62fa,	// (0x0005129c) tabs_4_passive_pane

0x630b,	// (0x000512ad) tabs_4_passive_pane_cp_ParamLimits

0x630b,	// (0x000512ad) tabs_4_passive_pane_cp

0x631c,	// (0x000512be) tabs_4_passive_pane_cp2_ParamLimits

0x631c,	// (0x000512be) tabs_4_passive_pane_cp2

0x62c5,	// (0x00051267) tabs_2_long_active_pane_ParamLimits

0x62c5,	// (0x00051267) tabs_2_long_active_pane

0x62d7,	// (0x00051279) tabs_2_long_passive_pane_ParamLimits

0x62d7,	// (0x00051279) tabs_2_long_passive_pane

0x6286,	// (0x00051228) tabs_3_long_active_pane_ParamLimits

0x6286,	// (0x00051228) tabs_3_long_active_pane

0x6299,	// (0x0005123b) tabs_3_long_passive_pane_ParamLimits

0x6299,	// (0x0005123b) tabs_3_long_passive_pane

0x62b2,	// (0x00051254) tabs_3_long_passive_pane_cp_ParamLimits

0x62b2,	// (0x00051254) tabs_3_long_passive_pane_cp

0x622c,	// (0x000511ce) volume_small_pane_g1

0x6235,	// (0x000511d7) volume_small_pane_g2

0x623e,	// (0x000511e0) volume_small_pane_g3

0x6247,	// (0x000511e9) volume_small_pane_g4

0x6250,	// (0x000511f2) volume_small_pane_g5

0x6259,	// (0x000511fb) volume_small_pane_g6

0x6262,	// (0x00051204) volume_small_pane_g7

0x626b,	// (0x0005120d) volume_small_pane_g8

0x6274,	// (0x00051216) volume_small_pane_g9

0x627d,	// (0x0005121f) volume_small_pane_g10

0x0009,

0xf8bb,	// (0x0005a85d) volume_small_pane_g

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp2_ParamLimits

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp2

0x78c8,	// (0x0005286a) tabs_3_active_pane_g1

0x78d0,	// (0x00052872) tabs_3_active_pane_t1

0x78ba,	// (0x0005285c) bg_passive_tab_pane_cp2_ParamLimits

0x78ba,	// (0x0005285c) bg_passive_tab_pane_cp2

0x78c8,	// (0x0005286a) tabs_3_passive_pane_g1

0x78d0,	// (0x00052872) tabs_3_passive_pane_t1

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp3_ParamLimits

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp3

0x78e2,	// (0x00052884) tabs_4_active_pane_g1

0x78ea,	// (0x0005288c) tabs_4_active_pane_t1

0x78ba,	// (0x0005285c) bg_passive_tab_pane_cp3_ParamLimits

0x78ba,	// (0x0005285c) bg_passive_tab_pane_cp3

0x78e2,	// (0x00052884) tabs_4_1_passive_pane_g1

0x78ea,	// (0x0005288c) tabs_4_1_passive_pane_t1

0x97d4,	// (0x00054776) list_highlight_pane_cp2

0xb0e6,	// (0x00056088) list_set_pane_ParamLimits

0xb0e6,	// (0x00056088) list_set_pane

0xb18c,	// (0x0005612e) main_pane_set_t1_ParamLimits

0xb18c,	// (0x0005612e) main_pane_set_t1

0xb1ac,	// (0x0005614e) main_pane_set_t2_ParamLimits

0xb1ac,	// (0x0005614e) main_pane_set_t2

0xb1c0,	// (0x00056162) main_pane_set_t3_ParamLimits

0xb1c0,	// (0x00056162) main_pane_set_t3

0xb1d2,	// (0x00056174) main_pane_set_t4_ParamLimits

0xb1d2,	// (0x00056174) main_pane_set_t4

0x0003,

0xf98b,	// (0x0005a92d) main_pane_set_t_ParamLimits

0xf98b,	// (0x0005a92d) main_pane_set_t

0xb1e4,	// (0x00056186) setting_code_pane

0xb1f0,	// (0x00056192) setting_slider_graphic_pane

0xb1f0,	// (0x00056192) setting_slider_pane

0xb1f0,	// (0x00056192) setting_text_pane

0xb1f0,	// (0x00056192) setting_volume_pane

0x4c60,	// (0x0004fc02) volume_set_pane

0x78ba,	// (0x0005285c) bg_set_opt_pane_cp

0x4c68,	// (0x0004fc0a) setting_slider_pane_t1

0x4c81,	// (0x0004fc23) setting_slider_pane_t2

0x4c9b,	// (0x0004fc3d) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0005a500) setting_slider_pane_t

0x4cb3,	// (0x0004fc55) slider_set_pane

0x77da,	// (0x0005277c) bg_set_opt_pane_cp2

0x78fc,	// (0x0005289e) setting_slider_graphic_pane_g1

0x4cc9,	// (0x0004fc6b) setting_slider_graphic_pane_t1

0x4cd9,	// (0x0004fc7b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0005a507) setting_slider_graphic_pane_t

0x4ce9,	// (0x0004fc8b) slider_set_pane_cp

0x77da,	// (0x0005277c) input_focus_pane_cp1

0xb0a5,	// (0x00056047) list_set_text_pane

0x77d0,	// (0x00052772) setting_text_pane_g1

0x77da,	// (0x0005277c) input_focus_pane_cp2

0x77d0,	// (0x00052772) setting_code_pane_g1

0x7905,	// (0x000528a7) setting_code_pane_t1

0x3e2d,	// (0x0004edcf) set_text_pane_t1_ParamLimits

0x3e2d,	// (0x0004edcf) set_text_pane_t1

0x885b,	// (0x000537fd) set_opt_bg_pane_g1

0x8863,	// (0x00053805) set_opt_bg_pane_g2

0xb07f,	// (0x00056021) set_opt_bg_pane_g3

0x8873,	// (0x00053815) set_opt_bg_pane_g4

0x887b,	// (0x0005381d) set_opt_bg_pane_g5

0x8883,	// (0x00053825) set_opt_bg_pane_g6

0xb089,	// (0x0005602b) set_opt_bg_pane_g7

0xb091,	// (0x00056033) set_opt_bg_pane_g8

0xb09b,	// (0x0005603d) set_opt_bg_pane_g9

0x0008,

0xf978,	// (0x0005a91a) set_opt_bg_pane_g

0xb072,	// (0x00056014) slider_set_pane_g1

0x641c,	// (0x000513be) slider_set_pane_g2

0x0006,

0xf969,	// (0x0005a90b) slider_set_pane_g

0x6390,	// (0x00051332) volume_set_pane_g1

0x6398,	// (0x0005133a) volume_set_pane_g2

0x63a0,	// (0x00051342) volume_set_pane_g3

0x63a8,	// (0x0005134a) volume_set_pane_g4

0x63b0,	// (0x00051352) volume_set_pane_g5

0x63b8,	// (0x0005135a) volume_set_pane_g6

0x63c0,	// (0x00051362) volume_set_pane_g7

0x63c8,	// (0x0005136a) volume_set_pane_g8

0x63d0,	// (0x00051372) volume_set_pane_g9

0x63d8,	// (0x0005137a) volume_set_pane_g10

0x0009,

0xf941,	// (0x0005a8e3) volume_set_pane_g

0x7913,	// (0x000528b5) indicator_pane_ParamLimits

0x7913,	// (0x000528b5) indicator_pane

0x791f,	// (0x000528c1) main_idle_pane_g2_ParamLimits

0x791f,	// (0x000528c1) main_idle_pane_g2

0x7947,	// (0x000528e9) main_pane_idle_g1_ParamLimits

0x7947,	// (0x000528e9) main_pane_idle_g1

0x7954,	// (0x000528f6) popup_clock_digital_analogue_window_ParamLimits

0x7954,	// (0x000528f6) popup_clock_digital_analogue_window

0x796b,	// (0x0005290d) soft_indicator_pane_ParamLimits

0x796b,	// (0x0005290d) soft_indicator_pane

0x7977,	// (0x00052919) wallpaper_pane_ParamLimits

0x7977,	// (0x00052919) wallpaper_pane

0x77d0,	// (0x00052772) wallpaper_pane_g1

0x798b,	// (0x0005292d) indicator_pane_g1_ParamLimits

0x798b,	// (0x0005292d) indicator_pane_g1

0xb454,	// (0x000563f6) navi_navi_icon_text_pane_srt_g1

0x79a6,	// (0x00052948) soft_indicator_pane_t1

0x79c0,	// (0x00052962) aid_ps_area_pane

0x79d1,	// (0x00052973) aid_ps_clock_pane

0x79df,	// (0x00052981) aid_ps_indicator_pane

0x79eb,	// (0x0005298d) indicator_ps_pane_ParamLimits

0x79eb,	// (0x0005298d) indicator_ps_pane

0x79fa,	// (0x0005299c) power_save_pane_g1_ParamLimits

0x79fa,	// (0x0005299c) power_save_pane_g1

0x7a06,	// (0x000529a8) power_save_pane_g2_ParamLimits

0x7a06,	// (0x000529a8) power_save_pane_g2

0x4867,	// (0x0004f809) aid_navinavi_width_pane

0x79c0,	// (0x00052962) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0005a50c) power_save_pane_g_ParamLimits

0xf56a,	// (0x0005a50c) power_save_pane_g

0x7a14,	// (0x000529b6) power_save_pane_t1_ParamLimits

0x7a14,	// (0x000529b6) power_save_pane_t1

0x79d1,	// (0x00052973) aid_ps_clock_pane_ParamLimits

0x79df,	// (0x00052981) aid_ps_indicator_pane_ParamLimits

0x7a26,	// (0x000529c8) power_save_pane_t4_ParamLimits

0x7a26,	// (0x000529c8) power_save_pane_t4

0x0001,

0xf56f,	// (0x0005a511) power_save_pane_t_ParamLimits

0xf56f,	// (0x0005a511) power_save_pane_t

0x7a50,	// (0x000529f2) power_save_t3_ParamLimits

0x7a50,	// (0x000529f2) power_save_t3

0x7a3b,	// (0x000529dd) power_save_t2_ParamLimits

0x7a3b,	// (0x000529dd) power_save_t2

0x7a65,	// (0x00052a07) indicator_ps_pane_g1

0x7a6e,	// (0x00052a10) ai_gene_pane_ParamLimits

0x7a6e,	// (0x00052a10) ai_gene_pane

0x7a7a,	// (0x00052a1c) ai_links_pane_ParamLimits

0x7a7a,	// (0x00052a1c) ai_links_pane

0x7a86,	// (0x00052a28) indicator_pane_cp1_ParamLimits

0x7a86,	// (0x00052a28) indicator_pane_cp1

0x7a92,	// (0x00052a34) main_pane_idle_g1_cp_ParamLimits

0x7a92,	// (0x00052a34) main_pane_idle_g1_cp

0x7a9e,	// (0x00052a40) popup_ai_links_title_window

0x7aa7,	// (0x00052a49) soft_indicator_pane_cp1_ParamLimits

0x7aa7,	// (0x00052a49) soft_indicator_pane_cp1

0xae60,	// (0x00055e02) ai_links_pane_g1

0xae69,	// (0x00055e0b) grid_ai_links_pane

0xae43,	// (0x00055de5) ai_gene_pane_1

0xae4e,	// (0x00055df0) ai_gene_pane_2

0xae57,	// (0x00055df9) list_highlight_pane_cp4

0xae27,	// (0x00055dc9) cell_ai_link_pane_ParamLimits

0xae27,	// (0x00055dc9) cell_ai_link_pane

0xae1f,	// (0x00055dc1) cell_ai_link_pane_g1

0x83ae,	// (0x00053350) cell_ai_link_pane_g2

0x0001,

0xf91c,	// (0x0005a8be) cell_ai_link_pane_g

0x77da,	// (0x0005277c) grid_highlight_cp2

0x77da,	// (0x0005277c) bg_popup_sub_pane_cp1

0x7ac1,	// (0x00052a63) popup_ai_links_title_window_t1

0xad6d,	// (0x00055d0f) ai_gene_pane_1_g1_ParamLimits

0xad6d,	// (0x00055d0f) ai_gene_pane_1_g1

0xad79,	// (0x00055d1b) ai_gene_pane_1_g2_ParamLimits

0xad79,	// (0x00055d1b) ai_gene_pane_1_g2

0x0001,

0xf912,	// (0x0005a8b4) ai_gene_pane_1_g_ParamLimits

0xf912,	// (0x0005a8b4) ai_gene_pane_1_g

0xad86,	// (0x00055d28) ai_gene_pane_1_t1_ParamLimits

0xad86,	// (0x00055d28) ai_gene_pane_1_t1

0xadba,	// (0x00055d5c) grid_ai_soft_ind_pane

0xad58,	// (0x00055cfa) ai_gene_pane_2_t1_ParamLimits

0xad58,	// (0x00055cfa) ai_gene_pane_2_t1

0x7ad0,	// (0x00052a72) main_pane_empty_t1_ParamLimits

0x7ad0,	// (0x00052a72) main_pane_empty_t1

0x7ae8,	// (0x00052a8a) main_pane_empty_t2_ParamLimits

0x7ae8,	// (0x00052a8a) main_pane_empty_t2

0x7afd,	// (0x00052a9f) main_pane_empty_t3_ParamLimits

0x7afd,	// (0x00052a9f) main_pane_empty_t3

0x7b0f,	// (0x00052ab1) main_pane_empty_t4_ParamLimits

0x7b0f,	// (0x00052ab1) main_pane_empty_t4

0x7b21,	// (0x00052ac3) main_pane_empty_t5_ParamLimits

0x7b21,	// (0x00052ac3) main_pane_empty_t5

0x0004,

0xf574,	// (0x0005a516) main_pane_empty_t_ParamLimits

0xf574,	// (0x0005a516) main_pane_empty_t

0x88ac,	// (0x0005384e) bg_popup_window_pane_ParamLimits

0x88ac,	// (0x0005384e) bg_popup_window_pane

0xaac8,	// (0x00055a6a) find_popup_pane_cp2_ParamLimits

0xaac8,	// (0x00055a6a) find_popup_pane_cp2

0xaad4,	// (0x00055a76) heading_pane_ParamLimits

0xaad4,	// (0x00055a76) heading_pane

0x77da,	// (0x0005277c) bg_popup_sub_pane

0xaa42,	// (0x000559e4) bg_popup_window_pane_g1_ParamLimits

0xaa42,	// (0x000559e4) bg_popup_window_pane_g1

0xaa4e,	// (0x000559f0) bg_popup_window_pane_g2_ParamLimits

0xaa4e,	// (0x000559f0) bg_popup_window_pane_g2

0xaa5a,	// (0x000559fc) bg_popup_window_pane_g3_ParamLimits

0xaa5a,	// (0x000559fc) bg_popup_window_pane_g3

0xaa66,	// (0x00055a08) bg_popup_window_pane_g4_ParamLimits

0xaa66,	// (0x00055a08) bg_popup_window_pane_g4

0xaa72,	// (0x00055a14) bg_popup_window_pane_g5_ParamLimits

0xaa72,	// (0x00055a14) bg_popup_window_pane_g5

0xaa7e,	// (0x00055a20) bg_popup_window_pane_g6_ParamLimits

0xaa7e,	// (0x00055a20) bg_popup_window_pane_g6

0xaa8a,	// (0x00055a2c) bg_popup_window_pane_g7_ParamLimits

0xaa8a,	// (0x00055a2c) bg_popup_window_pane_g7

0xaa96,	// (0x00055a38) bg_popup_window_pane_g8_ParamLimits

0xaa96,	// (0x00055a38) bg_popup_window_pane_g8

0xaaa2,	// (0x00055a44) bg_popup_window_pane_g9_ParamLimits

0xaaa2,	// (0x00055a44) bg_popup_window_pane_g9

0xaaae,	// (0x00055a50) bg_popup_window_pane_g10_ParamLimits

0xaaae,	// (0x00055a50) bg_popup_window_pane_g10

0x0009,

0xf8da,	// (0x0005a87c) bg_popup_window_pane_g_ParamLimits

0xf8da,	// (0x0005a87c) bg_popup_window_pane_g

0xa9d7,	// (0x00055979) bg_popup_heading_pane_ParamLimits

0xa9d7,	// (0x00055979) bg_popup_heading_pane

0x654a,	// (0x000514ec) tabs_4_passive_pane_cp_srt_ParamLimits

0x654a,	// (0x000514ec) tabs_4_passive_pane_cp_srt

0x655c,	// (0x000514fe) tabs_4_passive_pane_srt_ParamLimits

0xa9eb,	// (0x0005598d) heading_pane_g2

0x655c,	// (0x000514fe) tabs_4_passive_pane_srt

0x97d4,	// (0x00054776) bg_passive_tab_pane_cp3_srt_ParamLimits

0x97d4,	// (0x00054776) bg_passive_tab_pane_cp3_srt

0xa9f3,	// (0x00055995) heading_pane_t1_ParamLimits

0xa9f3,	// (0x00055995) heading_pane_t1

0xaa0a,	// (0x000559ac) heading_pane_t2_ParamLimits

0xaa0a,	// (0x000559ac) heading_pane_t2

0x0001,

0xf8d5,	// (0x0005a877) heading_pane_t_ParamLimits

0xf8d5,	// (0x0005a877) heading_pane_t

0xa504,	// (0x000554a6) bg_popup_heading_pane_g1

0xa5b3,	// (0x00055555) bg_popup_heading_pane_g2

0xa5bd,	// (0x0005555f) bg_popup_heading_pane_g3

0xa5c7,	// (0x00055569) bg_popup_heading_pane_g4

0xa5d1,	// (0x00055573) bg_popup_heading_pane_g5

0xa5db,	// (0x0005557d) bg_popup_heading_pane_g6

0xa5e3,	// (0x00055585) bg_popup_heading_pane_g7

0xa5eb,	// (0x0005558d) bg_popup_heading_pane_g8

0xa5f5,	// (0x00055597) bg_popup_heading_pane_g9

0x0008,

0xf891,	// (0x0005a833) bg_popup_heading_pane_g

0x9cea,	// (0x00054c8c) bg_popup_sub_pane_g1

0x9cfa,	// (0x00054c9c) bg_popup_sub_pane_g2

0x9cf2,	// (0x00054c94) bg_popup_sub_pane_g3

0x9d0a,	// (0x00054cac) bg_popup_sub_pane_g4

0x9d02,	// (0x00054ca4) bg_popup_sub_pane_g5

0x9d12,	// (0x00054cb4) bg_popup_sub_pane_g6

0x9d1a,	// (0x00054cbc) bg_popup_sub_pane_g7

0x9d2a,	// (0x00054ccc) bg_popup_sub_pane_g8

0x9d22,	// (0x00054cc4) bg_popup_sub_pane_g9

0x0008,

0xf86b,	// (0x0005a80d) bg_popup_sub_pane_g

0x7b35,	// (0x00052ad7) bg_popup_window_pane_cp5_ParamLimits

0x7b35,	// (0x00052ad7) bg_popup_window_pane_cp5

0x7b51,	// (0x00052af3) popup_note_window_g1_ParamLimits

0x7b51,	// (0x00052af3) popup_note_window_g1

0x7b5d,	// (0x00052aff) popup_note_window_t1_ParamLimits

0x7b5d,	// (0x00052aff) popup_note_window_t1

0x7b73,	// (0x00052b15) popup_note_window_t2_ParamLimits

0x7b73,	// (0x00052b15) popup_note_window_t2

0x7b89,	// (0x00052b2b) popup_note_window_t3_ParamLimits

0x7b89,	// (0x00052b2b) popup_note_window_t3

0x7b9f,	// (0x00052b41) popup_note_window_t4_ParamLimits

0x7b9f,	// (0x00052b41) popup_note_window_t4

0x7bc7,	// (0x00052b69) popup_note_window_t5_ParamLimits

0x7bc7,	// (0x00052b69) popup_note_window_t5

0x0004,

0xf57f,	// (0x0005a521) popup_note_window_t_ParamLimits

0xf57f,	// (0x0005a521) popup_note_window_t

0x7beb,	// (0x00052b8d) bg_popup_window_pane_cp6_ParamLimits

0x7beb,	// (0x00052b8d) bg_popup_window_pane_cp6

0xa480,	// (0x00055422) popup_note_image_window_g1_ParamLimits

0xa480,	// (0x00055422) popup_note_image_window_g1

0xa48c,	// (0x0005542e) popup_note_image_window_g2_ParamLimits

0xa48c,	// (0x0005542e) popup_note_image_window_g2

0x0001,

0xf85f,	// (0x0005a801) popup_note_image_window_g_ParamLimits

0xf85f,	// (0x0005a801) popup_note_image_window_g

0xa4a5,	// (0x00055447) popup_note_image_window_t1_ParamLimits

0xa4a5,	// (0x00055447) popup_note_image_window_t1

0xa4be,	// (0x00055460) popup_note_image_window_t2_ParamLimits

0xa4be,	// (0x00055460) popup_note_image_window_t2

0xa4d7,	// (0x00055479) popup_note_image_window_t3_ParamLimits

0xa4d7,	// (0x00055479) popup_note_image_window_t3

0x0002,

0xf864,	// (0x0005a806) popup_note_image_window_t_ParamLimits

0xf864,	// (0x0005a806) popup_note_image_window_t

0xa341,	// (0x000552e3) bg_popup_window_pane_cp7_ParamLimits

0xa341,	// (0x000552e3) bg_popup_window_pane_cp7

0xa371,	// (0x00055313) popup_note_wait_window_g1_ParamLimits

0xa371,	// (0x00055313) popup_note_wait_window_g1

0xa37d,	// (0x0005531f) popup_note_wait_window_g2_ParamLimits

0xa37d,	// (0x0005531f) popup_note_wait_window_g2

0x0002,

0xf84d,	// (0x0005a7ef) popup_note_wait_window_g_ParamLimits

0xf84d,	// (0x0005a7ef) popup_note_wait_window_g

0xa395,	// (0x00055337) popup_note_wait_window_t1_ParamLimits

0xa395,	// (0x00055337) popup_note_wait_window_t1

0xa3bc,	// (0x0005535e) popup_note_wait_window_t2_ParamLimits

0xa3bc,	// (0x0005535e) popup_note_wait_window_t2

0xa3d9,	// (0x0005537b) popup_note_wait_window_t3_ParamLimits

0xa3d9,	// (0x0005537b) popup_note_wait_window_t3

0xa3ec,	// (0x0005538e) popup_note_wait_window_t4_ParamLimits

0xa3ec,	// (0x0005538e) popup_note_wait_window_t4

0x0004,

0xf854,	// (0x0005a7f6) popup_note_wait_window_t_ParamLimits

0xf854,	// (0x0005a7f6) popup_note_wait_window_t

0xa411,	// (0x000553b3) wait_bar_pane_ParamLimits

0xa411,	// (0x000553b3) wait_bar_pane

0x77da,	// (0x0005277c) wait_anim_pane

0x77da,	// (0x0005277c) wait_border_pane

0x77d0,	// (0x00052772) wait_anim_pane_g1

0x77d0,	// (0x00052772) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0005a6aa) wait_anim_pane_g

0xa2e5,	// (0x00055287) wait_border_pane_g1

0xa2f0,	// (0x00055292) wait_border_pane_g2

0xa2f9,	// (0x0005529b) wait_border_pane_g3

0x0002,

0xf846,	// (0x0005a7e8) wait_border_pane_g

0xa150,	// (0x000550f2) bg_popup_window_pane_cp16_ParamLimits

0xa150,	// (0x000550f2) bg_popup_window_pane_cp16

0xa250,	// (0x000551f2) indicator_popup_pane_cp4_ParamLimits

0xa250,	// (0x000551f2) indicator_popup_pane_cp4

0xa264,	// (0x00055206) popup_query_data_window_t1_ParamLimits

0xa264,	// (0x00055206) popup_query_data_window_t1

0xa276,	// (0x00055218) popup_query_data_window_t2_ParamLimits

0xa276,	// (0x00055218) popup_query_data_window_t2

0xa28f,	// (0x00055231) popup_query_data_window_t3_ParamLimits

0xa28f,	// (0x00055231) popup_query_data_window_t3

0x0002,

0xf83f,	// (0x0005a7e1) popup_query_data_window_t_ParamLimits

0xf83f,	// (0x0005a7e1) popup_query_data_window_t

0xa2a9,	// (0x0005524b) query_popup_data_pane_ParamLimits

0xa2a9,	// (0x0005524b) query_popup_data_pane

0xa2bd,	// (0x0005525f) query_popup_data_pane_cp1_ParamLimits

0xa2bd,	// (0x0005525f) query_popup_data_pane_cp1

0xa150,	// (0x000550f2) bg_popup_window_pane_cp10_ParamLimits

0xa150,	// (0x000550f2) bg_popup_window_pane_cp10

0xa182,	// (0x00055124) indicator_popup_pane_ParamLimits

0xa182,	// (0x00055124) indicator_popup_pane

0xa1a4,	// (0x00055146) popup_query_code_window_t1_ParamLimits

0xa1a4,	// (0x00055146) popup_query_code_window_t1

0xa1be,	// (0x00055160) popup_query_code_window_t2_ParamLimits

0xa1be,	// (0x00055160) popup_query_code_window_t2

0xa207,	// (0x000551a9) popup_query_code_window_t3_ParamLimits

0xa207,	// (0x000551a9) popup_query_code_window_t3

0x0002,

0xf838,	// (0x0005a7da) popup_query_code_window_t_ParamLimits

0xf838,	// (0x0005a7da) popup_query_code_window_t

0xa236,	// (0x000551d8) query_popup_pane_ParamLimits

0xa236,	// (0x000551d8) query_popup_pane

0x7beb,	// (0x00052b8d) bg_popup_window_pane_cp15_ParamLimits

0x7beb,	// (0x00052b8d) bg_popup_window_pane_cp15

0x7c09,	// (0x00052bab) indicator_popup_pane_cp1_ParamLimits

0x7c09,	// (0x00052bab) indicator_popup_pane_cp1

0x7c1c,	// (0x00052bbe) indicator_popup_pane_cp2_ParamLimits

0x7c1c,	// (0x00052bbe) indicator_popup_pane_cp2

0x7c2f,	// (0x00052bd1) popup_query_data_code_window_g1_ParamLimits

0x7c2f,	// (0x00052bd1) popup_query_data_code_window_g1

0x7c42,	// (0x00052be4) popup_query_data_code_window_t1_ParamLimits

0x7c42,	// (0x00052be4) popup_query_data_code_window_t1

0x7c54,	// (0x00052bf6) popup_query_data_code_window_t2_ParamLimits

0x7c54,	// (0x00052bf6) popup_query_data_code_window_t2

0x7c66,	// (0x00052c08) popup_query_data_code_window_t3_ParamLimits

0x7c66,	// (0x00052c08) popup_query_data_code_window_t3

0x8353,	// (0x000532f5) popup_query_data_code_window_t4_ParamLimits

0x8353,	// (0x000532f5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0005a52c) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0005a52c) popup_query_data_code_window_t

0x6063,	// (0x00051005) list_single_midp_graphic_pane_g3

0x836b,	// (0x0005330d) query_popup_data_pane_cp2_ParamLimits

0x837e,	// (0x00053320) query_popup_pane_cp2_ParamLimits

0x837e,	// (0x00053320) query_popup_pane_cp2

0x77da,	// (0x0005277c) bg_popup_window_pane_cp11

0xa148,	// (0x000550ea) heading_pane_cp5

0x8469,	// (0x0005340b) listscroll_popup_info_pane

0x77da,	// (0x0005277c) input_focus_pane_cp3

0x8391,	// (0x00053333) query_popup_pane_t1

0x839f,	// (0x00053341) list_popup_info_pane_ParamLimits

0x839f,	// (0x00053341) list_popup_info_pane

0x83ae,	// (0x00053350) listscroll_popup_info_pane_g1

0x83b6,	// (0x00053358) scroll_pane_cp7

0x83c0,	// (0x00053362) popup_info_list_pane_t1_ParamLimits

0x83c0,	// (0x00053362) popup_info_list_pane_t1

0x83da,	// (0x0005337c) popup_info_list_pane_t2_ParamLimits

0x83da,	// (0x0005337c) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0005a535) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0005a535) popup_info_list_pane_t

0x77da,	// (0x0005277c) bg_popup_window_pane_cp12

0xb46e,	// (0x00056410) find_popup_pane

0x78ba,	// (0x0005285c) bg_popup_window_pane_cp3

0x83f4,	// (0x00053396) heading_pane_cp3

0x8400,	// (0x000533a2) listscroll_popup_graphic_pane

0x77da,	// (0x0005277c) bg_popup_window_pane_cp4

0x845f,	// (0x00053401) heading_pane_cp4

0x8469,	// (0x0005340b) listscroll_popup_colour_pane

0x8471,	// (0x00053413) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8471,	// (0x00053413) cell_large_graphic_colour_none_popup_pane

0x8485,	// (0x00053427) grid_large_graphic_colour_popup_pane_ParamLimits

0x8485,	// (0x00053427) grid_large_graphic_colour_popup_pane

0x84b1,	// (0x00053453) listscroll_popup_colour_pane_g1_ParamLimits

0x84b1,	// (0x00053453) listscroll_popup_colour_pane_g1

0x84c8,	// (0x0005346a) listscroll_popup_colour_pane_g2_ParamLimits

0x84c8,	// (0x0005346a) listscroll_popup_colour_pane_g2

0x84df,	// (0x00053481) listscroll_popup_colour_pane_g3_ParamLimits

0x84df,	// (0x00053481) listscroll_popup_colour_pane_g3

0x84ef,	// (0x00053491) listscroll_popup_colour_pane_g4_ParamLimits

0x84ef,	// (0x00053491) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0005a53a) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0005a53a) listscroll_popup_colour_pane_g

0x8503,	// (0x000534a5) scroll_pane_cp6_ParamLimits

0x8503,	// (0x000534a5) scroll_pane_cp6

0x8515,	// (0x000534b7) cell_large_graphic_colour_popup_pane_ParamLimits

0x8515,	// (0x000534b7) cell_large_graphic_colour_popup_pane

0x8534,	// (0x000534d6) cell_large_graphic_colour_none_popup_pane_t1

0x77da,	// (0x0005277c) grid_highlight_pane_cp5

0x8543,	// (0x000534e5) cell_large_graphic_colour_popup_pane_g1

0x854b,	// (0x000534ed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0005a543) cell_large_graphic_colour_popup_pane_g

0x8553,	// (0x000534f5) cell_large_graphic_colour_popup_pane_g2_copy1

0x855c,	// (0x000534fe) grid_highlight_pane_cp4

0x8564,	// (0x00053506) bg_popup_window_pane_cp8_ParamLimits

0x8564,	// (0x00053506) bg_popup_window_pane_cp8

0x857f,	// (0x00053521) popup_snote_single_text_window_g1_ParamLimits

0x857f,	// (0x00053521) popup_snote_single_text_window_g1

0x8591,	// (0x00053533) popup_snote_single_text_window_t1_ParamLimits

0x8591,	// (0x00053533) popup_snote_single_text_window_t1

0x85a4,	// (0x00053546) popup_snote_single_text_window_t2_ParamLimits

0x85a4,	// (0x00053546) popup_snote_single_text_window_t2

0x85b7,	// (0x00053559) popup_snote_single_text_window_t3_ParamLimits

0x85b7,	// (0x00053559) popup_snote_single_text_window_t3

0x85f0,	// (0x00053592) popup_snote_single_text_window_t4_ParamLimits

0x85f0,	// (0x00053592) popup_snote_single_text_window_t4

0x8624,	// (0x000535c6) popup_snote_single_text_window_t5_ParamLimits

0x8624,	// (0x000535c6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0005a548) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0005a548) popup_snote_single_text_window_t

0x8653,	// (0x000535f5) bg_popup_window_pane_cp9_ParamLimits

0x8653,	// (0x000535f5) bg_popup_window_pane_cp9

0x857f,	// (0x00053521) popup_snote_single_graphic_window_g1_ParamLimits

0x857f,	// (0x00053521) popup_snote_single_graphic_window_g1

0x8661,	// (0x00053603) popup_snote_single_graphic_window_g2_ParamLimits

0x8661,	// (0x00053603) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0005a553) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0005a553) popup_snote_single_graphic_window_g

0x866d,	// (0x0005360f) popup_snote_single_graphic_window_t1_ParamLimits

0x866d,	// (0x0005360f) popup_snote_single_graphic_window_t1

0x8680,	// (0x00053622) popup_snote_single_graphic_window_t2_ParamLimits

0x8680,	// (0x00053622) popup_snote_single_graphic_window_t2

0x8693,	// (0x00053635) popup_snote_single_graphic_window_t3_ParamLimits

0x8693,	// (0x00053635) popup_snote_single_graphic_window_t3

0x86cc,	// (0x0005366e) popup_snote_single_graphic_window_t4_ParamLimits

0x86cc,	// (0x0005366e) popup_snote_single_graphic_window_t4

0x8700,	// (0x000536a2) popup_snote_single_graphic_window_t5_ParamLimits

0x8700,	// (0x000536a2) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0005a558) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0005a558) popup_snote_single_graphic_window_t

0xb3b2,	// (0x00056354) grid_graphic_popup_pane_ParamLimits

0xb3b2,	// (0x00056354) grid_graphic_popup_pane

0xb3da,	// (0x0005637c) listscroll_popup_graphic_pane_g1_ParamLimits

0xb3da,	// (0x0005637c) listscroll_popup_graphic_pane_g1

0xb3ee,	// (0x00056390) listscroll_popup_graphic_pane_g2_ParamLimits

0xb3ee,	// (0x00056390) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b5,	// (0x0005a957) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b5,	// (0x0005a957) listscroll_popup_graphic_pane_g

0xb402,	// (0x000563a4) scroll_pane_cp5

0xb34f,	// (0x000562f1) cell_graphic_popup_pane_ParamLimits

0xb34f,	// (0x000562f1) cell_graphic_popup_pane

0xb330,	// (0x000562d2) cell_graphic_popup_pane_g1

0xb338,	// (0x000562da) cell_graphic_popup_pane_g2

0x8553,	// (0x000534f5) cell_graphic_popup_pane_g3

0x0002,

0xf9ae,	// (0x0005a950) cell_graphic_popup_pane_g

0xb341,	// (0x000562e3) cell_graphic_popup_pane_t2

0x855c,	// (0x000534fe) grid_highlight_pane_cp3

0x8741,	// (0x000536e3) list_gen_pane_ParamLimits

0x8741,	// (0x000536e3) list_gen_pane

0x8773,	// (0x00053715) scroll_pane

0xb288,	// (0x0005622a) bg_list_pane_g1_ParamLimits

0xb288,	// (0x0005622a) bg_list_pane_g1

0xb2a5,	// (0x00056247) bg_list_pane_g2_ParamLimits

0xb2a5,	// (0x00056247) bg_list_pane_g2

0xb2ba,	// (0x0005625c) bg_list_pane_g3_ParamLimits

0xb2ba,	// (0x0005625c) bg_list_pane_g3

0xb2ce,	// (0x00056270) bg_list_pane_g4_ParamLimits

0xb2ce,	// (0x00056270) bg_list_pane_g4

0xb2e2,	// (0x00056284) bg_list_pane_g5_ParamLimits

0xb2e2,	// (0x00056284) bg_list_pane_g5

0x0004,

0xf9a3,	// (0x0005a945) bg_list_pane_g_ParamLimits

0xf9a3,	// (0x0005a945) bg_list_pane_g

0x7d70,	// (0x00052d12) list_double2_graphic_large_graphic_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double2_graphic_large_graphic_pane

0x7d70,	// (0x00052d12) list_double2_graphic_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double2_graphic_pane

0x7d70,	// (0x00052d12) list_double2_large_graphic_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double2_large_graphic_pane

0x7d70,	// (0x00052d12) list_double2_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double2_pane

0x7d70,	// (0x00052d12) list_double_graphic_heading_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double_graphic_heading_pane

0x7d70,	// (0x00052d12) list_double_graphic_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double_graphic_pane

0x7d70,	// (0x00052d12) list_double_heading_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double_heading_pane

0x7d70,	// (0x00052d12) list_double_large_graphic_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double_large_graphic_pane

0x7d70,	// (0x00052d12) list_double_number_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double_number_pane

0x7d70,	// (0x00052d12) list_double_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double_pane

0x7d70,	// (0x00052d12) list_double_time_pane_ParamLimits

0x7d70,	// (0x00052d12) list_double_time_pane

0x7d70,	// (0x00052d12) list_setting_number_pane_ParamLimits

0x7d70,	// (0x00052d12) list_setting_number_pane

0x7d70,	// (0x00052d12) list_setting_pane_ParamLimits

0x7d70,	// (0x00052d12) list_setting_pane

0x7da9,	// (0x00052d4b) list_single_2graphic_pane_ParamLimits

0x7da9,	// (0x00052d4b) list_single_2graphic_pane

0x7da9,	// (0x00052d4b) list_single_graphic_heading_pane_ParamLimits

0x7da9,	// (0x00052d4b) list_single_graphic_heading_pane

0x7da9,	// (0x00052d4b) list_single_graphic_pane_ParamLimits

0x7da9,	// (0x00052d4b) list_single_graphic_pane

0x7da9,	// (0x00052d4b) list_single_heading_pane_ParamLimits

0x7da9,	// (0x00052d4b) list_single_heading_pane

0x7de7,	// (0x00052d89) list_single_large_graphic_pane_ParamLimits

0x7de7,	// (0x00052d89) list_single_large_graphic_pane

0x7da9,	// (0x00052d4b) list_single_number_heading_pane_ParamLimits

0x7da9,	// (0x00052d4b) list_single_number_heading_pane

0x7da9,	// (0x00052d4b) list_single_number_pane_ParamLimits

0x7da9,	// (0x00052d4b) list_single_number_pane

0x7da9,	// (0x00052d4b) list_single_pane_ParamLimits

0x7da9,	// (0x00052d4b) list_single_pane

0x77da,	// (0x0005277c) list_highlight_pane_cp1

0x7c7c,	// (0x00052c1e) list_single_pane_g1_ParamLimits

0x7c7c,	// (0x00052c1e) list_single_pane_g1

0x7c88,	// (0x00052c2a) list_single_pane_g2_ParamLimits

0x7c88,	// (0x00052c2a) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0005a574) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0005a574) list_single_pane_g

0x64b0,	// (0x00051452) list_single_pane_t1_ParamLimits

0x64b0,	// (0x00051452) list_single_pane_t1

0x7c7c,	// (0x00052c1e) list_single_number_pane_g1_ParamLimits

0x7c7c,	// (0x00052c1e) list_single_number_pane_g1

0x7c88,	// (0x00052c2a) list_single_number_pane_g2_ParamLimits

0x7c88,	// (0x00052c2a) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0005a574) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0005a574) list_single_number_pane_g

0x63e0,	// (0x00051382) list_single_number_pane_t1_ParamLimits

0x63e0,	// (0x00051382) list_single_number_pane_t1

0x63f6,	// (0x00051398) list_single_number_pane_t2_ParamLimits

0x63f6,	// (0x00051398) list_single_number_pane_t2

0x0001,

0xf964,	// (0x0005a906) list_single_number_pane_t_ParamLimits

0xf964,	// (0x0005a906) list_single_number_pane_t

0x4cf1,	// (0x0004fc93) list_single_graphic_pane_g1_ParamLimits

0x4cf1,	// (0x0004fc93) list_single_graphic_pane_g1

0x7c7c,	// (0x00052c1e) list_single_graphic_pane_g2_ParamLimits

0x7c7c,	// (0x00052c1e) list_single_graphic_pane_g2

0x7c88,	// (0x00052c2a) list_single_graphic_pane_g3_ParamLimits

0x7c88,	// (0x00052c2a) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0005a563) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0005a563) list_single_graphic_pane_g

0x4cfd,	// (0x0004fc9f) list_single_graphic_pane_t1_ParamLimits

0x4cfd,	// (0x0004fc9f) list_single_graphic_pane_t1

0x4d13,	// (0x0004fcb5) list_single_heading_pane_g1_ParamLimits

0x4d13,	// (0x0004fcb5) list_single_heading_pane_g1

0x7c88,	// (0x00052c2a) list_single_heading_pane_g2_ParamLimits

0x7c88,	// (0x00052c2a) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0005a56a) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0005a56a) list_single_heading_pane_g

0x4d26,	// (0x0004fcc8) list_single_heading_pane_t1_ParamLimits

0x4d26,	// (0x0004fcc8) list_single_heading_pane_t1

0x7c94,	// (0x00052c36) list_single_heading_pane_t2_ParamLimits

0x7c94,	// (0x00052c36) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0005a56f) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0005a56f) list_single_heading_pane_t

0x7c7c,	// (0x00052c1e) list_single_number_heading_pane_g1_ParamLimits

0x7c7c,	// (0x00052c1e) list_single_number_heading_pane_g1

0x7c88,	// (0x00052c2a) list_single_number_heading_pane_g2_ParamLimits

0x7c88,	// (0x00052c2a) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0005a574) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0005a574) list_single_number_heading_pane_g

0x4d3c,	// (0x0004fcde) list_single_number_heading_pane_t1_ParamLimits

0x4d3c,	// (0x0004fcde) list_single_number_heading_pane_t1

0x4d52,	// (0x0004fcf4) list_single_number_heading_pane_t2_ParamLimits

0x4d52,	// (0x0004fcf4) list_single_number_heading_pane_t2

0x4d64,	// (0x0004fd06) list_single_number_heading_pane_t3_ParamLimits

0x4d64,	// (0x0004fd06) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0005a579) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0005a579) list_single_number_heading_pane_t

0x4d76,	// (0x0004fd18) list_single_graphic_heading_pane_g1_ParamLimits

0x4d76,	// (0x0004fd18) list_single_graphic_heading_pane_g1

0x7ca6,	// (0x00052c48) list_single_graphic_heading_pane_g4_ParamLimits

0x7ca6,	// (0x00052c48) list_single_graphic_heading_pane_g4

0x7c88,	// (0x00052c2a) list_single_graphic_heading_pane_g5_ParamLimits

0x7c88,	// (0x00052c2a) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0005a580) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0005a580) list_single_graphic_heading_pane_g

0x4d3c,	// (0x0004fcde) list_single_graphic_heading_pane_t1_ParamLimits

0x4d3c,	// (0x0004fcde) list_single_graphic_heading_pane_t1

0x4d8e,	// (0x0004fd30) list_single_graphic_heading_pane_t2_ParamLimits

0x4d8e,	// (0x0004fd30) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0005a587) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0005a587) list_single_graphic_heading_pane_t

0x7cb7,	// (0x00052c59) list_single_large_graphic_pane_g1_ParamLimits

0x7cb7,	// (0x00052c59) list_single_large_graphic_pane_g1

0x7cc3,	// (0x00052c65) list_single_large_graphic_pane_g2_ParamLimits

0x7cc3,	// (0x00052c65) list_single_large_graphic_pane_g2

0x7ccf,	// (0x00052c71) list_single_large_graphic_pane_g3_ParamLimits

0x7ccf,	// (0x00052c71) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0005a58c) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0005a58c) list_single_large_graphic_pane_g

0xa2f0,	// (0x00055292) wait_border_pane_g2_copy1

0x7cdb,	// (0x00052c7d) list_single_large_graphic_pane_g4_cp2

0x4da4,	// (0x0004fd46) list_single_large_graphic_pane_t1_ParamLimits

0x4da4,	// (0x0004fd46) list_single_large_graphic_pane_t1

0x87a7,	// (0x00053749) list_double_pane_g1_ParamLimits

0x87a7,	// (0x00053749) list_double_pane_g1

0x7ce3,	// (0x00052c85) list_double_pane_g2_ParamLimits

0x7ce3,	// (0x00052c85) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0005a593) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0005a593) list_double_pane_g

0x4dba,	// (0x0004fd5c) list_double_pane_t1_ParamLimits

0x4dba,	// (0x0004fd5c) list_double_pane_t1

0x4dd0,	// (0x0004fd72) list_double_pane_t2_ParamLimits

0x4dd0,	// (0x0004fd72) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0005a598) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0005a598) list_double_pane_t

0x4de2,	// (0x0004fd84) list_double2_pane_g1_ParamLimits

0x4de2,	// (0x0004fd84) list_double2_pane_g1

0x4df3,	// (0x0004fd95) list_double2_pane_g2_ParamLimits

0x4df3,	// (0x0004fd95) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0005a59d) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0005a59d) list_double2_pane_g

0x4dff,	// (0x0004fda1) list_double2_pane_t1_ParamLimits

0x4dff,	// (0x0004fda1) list_double2_pane_t1

0x4e15,	// (0x0004fdb7) list_double2_pane_t2_ParamLimits

0x4e15,	// (0x0004fdb7) list_double2_pane_t2

0x0001,

0xf600,	// (0x0005a5a2) list_double2_pane_t_ParamLimits

0xf600,	// (0x0005a5a2) list_double2_pane_t

0x87a7,	// (0x00053749) list_double_number_pane_g1_ParamLimits

0x87a7,	// (0x00053749) list_double_number_pane_g1

0x7ce3,	// (0x00052c85) list_double_number_pane_g2_ParamLimits

0x7ce3,	// (0x00052c85) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0005a593) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0005a593) list_double_number_pane_g

0x4e27,	// (0x0004fdc9) list_double_number_pane_t1_ParamLimits

0x4e27,	// (0x0004fdc9) list_double_number_pane_t1

0x4e39,	// (0x0004fddb) list_double_number_pane_t2_ParamLimits

0x4e39,	// (0x0004fddb) list_double_number_pane_t2

0x4e4f,	// (0x0004fdf1) list_double_number_pane_t3_ParamLimits

0x4e4f,	// (0x0004fdf1) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0005a5a7) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0005a5a7) list_double_number_pane_t

0x4e61,	// (0x0004fe03) list_double_graphic_pane_g1_ParamLimits

0x4e61,	// (0x0004fe03) list_double_graphic_pane_g1

0x4e6d,	// (0x0004fe0f) list_double_graphic_pane_g2_ParamLimits

0x4e6d,	// (0x0004fe0f) list_double_graphic_pane_g2

0x4e7c,	// (0x0004fe1e) list_double_graphic_pane_g3_ParamLimits

0x4e7c,	// (0x0004fe1e) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0005a5ae) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0005a5ae) list_double_graphic_pane_g

0x4e94,	// (0x0004fe36) list_double_graphic_pane_t1_ParamLimits

0x4e94,	// (0x0004fe36) list_double_graphic_pane_t1

0x4eaa,	// (0x0004fe4c) list_double_graphic_pane_t2_ParamLimits

0x4eaa,	// (0x0004fe4c) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0005a5b7) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0005a5b7) list_double_graphic_pane_t

0x4ebc,	// (0x0004fe5e) list_double2_graphic_pane_g1_ParamLimits

0x4ebc,	// (0x0004fe5e) list_double2_graphic_pane_g1

0x9ab5,	// (0x00054a57) list_double2_graphic_pane_g2_ParamLimits

0x9ab5,	// (0x00054a57) list_double2_graphic_pane_g2

0x7cef,	// (0x00052c91) list_double2_graphic_pane_g3_ParamLimits

0x7cef,	// (0x00052c91) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0005a5bc) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0005a5bc) list_double2_graphic_pane_g

0x4ec8,	// (0x0004fe6a) list_double2_graphic_pane_t1_ParamLimits

0x4ec8,	// (0x0004fe6a) list_double2_graphic_pane_t1

0x4ede,	// (0x0004fe80) list_double2_graphic_pane_t2_ParamLimits

0x4ede,	// (0x0004fe80) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0005a5c3) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0005a5c3) list_double2_graphic_pane_t

0x4ef0,	// (0x0004fe92) list_double_large_graphic_pane_g1_ParamLimits

0x4ef0,	// (0x0004fe92) list_double_large_graphic_pane_g1

0x4f0f,	// (0x0004feb1) list_double_large_graphic_pane_g2_ParamLimits

0x4f0f,	// (0x0004feb1) list_double_large_graphic_pane_g2

0x7ce3,	// (0x00052c85) list_double_large_graphic_pane_g3_ParamLimits

0x7ce3,	// (0x00052c85) list_double_large_graphic_pane_g3

0x4f25,	// (0x0004fec7) list_double_large_graphic_pane_g4_ParamLimits

0x4f25,	// (0x0004fec7) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0005a5c8) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0005a5c8) list_double_large_graphic_pane_g

0x4f36,	// (0x0004fed8) list_double_large_graphic_pane_t1_ParamLimits

0x4f36,	// (0x0004fed8) list_double_large_graphic_pane_t1

0x4f4f,	// (0x0004fef1) list_double_large_graphic_pane_t2_ParamLimits

0x4f4f,	// (0x0004fef1) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0005a5d3) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0005a5d3) list_double_large_graphic_pane_t

0x7d10,	// (0x00052cb2) list_double2_large_graphic_pane_g1_ParamLimits

0x7d10,	// (0x00052cb2) list_double2_large_graphic_pane_g1

0x4f61,	// (0x0004ff03) list_double2_large_graphic_pane_g2_ParamLimits

0x4f61,	// (0x0004ff03) list_double2_large_graphic_pane_g2

0x7cef,	// (0x00052c91) list_double2_large_graphic_pane_g3_ParamLimits

0x7cef,	// (0x00052c91) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0005a5d8) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0005a5d8) list_double2_large_graphic_pane_g

0x4f72,	// (0x0004ff14) list_double2_large_graphic_pane_t1_ParamLimits

0x4f72,	// (0x0004ff14) list_double2_large_graphic_pane_t1

0x4f88,	// (0x0004ff2a) list_double2_large_graphic_pane_t2_ParamLimits

0x4f88,	// (0x0004ff2a) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0005a5df) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0005a5df) list_double2_large_graphic_pane_t

0x4f9a,	// (0x0004ff3c) list_double_heading_pane_g1_ParamLimits

0x4f9a,	// (0x0004ff3c) list_double_heading_pane_g1

0x7d1c,	// (0x00052cbe) list_double_heading_pane_g2_ParamLimits

0x7d1c,	// (0x00052cbe) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0005a5e4) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0005a5e4) list_double_heading_pane_g

0x4fab,	// (0x0004ff4d) list_double_heading_pane_t1_ParamLimits

0x4fab,	// (0x0004ff4d) list_double_heading_pane_t1

0x4e15,	// (0x0004fdb7) list_double_heading_pane_t2_ParamLimits

0x4e15,	// (0x0004fdb7) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0005a5e9) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0005a5e9) list_double_heading_pane_t

0x4fc1,	// (0x0004ff63) list_double_graphic_heading_pane_g1_ParamLimits

0x4fc1,	// (0x0004ff63) list_double_graphic_heading_pane_g1

0x4f9a,	// (0x0004ff3c) list_double_graphic_heading_pane_g2_ParamLimits

0x4f9a,	// (0x0004ff3c) list_double_graphic_heading_pane_g2

0x7d1c,	// (0x00052cbe) list_double_graphic_heading_pane_g3_ParamLimits

0x7d1c,	// (0x00052cbe) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0005a5ee) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0005a5ee) list_double_graphic_heading_pane_g

0x4fcd,	// (0x0004ff6f) list_double_graphic_heading_pane_t1_ParamLimits

0x4fcd,	// (0x0004ff6f) list_double_graphic_heading_pane_t1

0x4ede,	// (0x0004fe80) list_double_graphic_heading_pane_t2_ParamLimits

0x4ede,	// (0x0004fe80) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0005a5f5) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0005a5f5) list_double_graphic_heading_pane_t

0x4fe3,	// (0x0004ff85) list_double_time_pane_g1_ParamLimits

0x4fe3,	// (0x0004ff85) list_double_time_pane_g1

0x4ff4,	// (0x0004ff96) list_double_time_pane_g2_ParamLimits

0x4ff4,	// (0x0004ff96) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0005a5fa) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0005a5fa) list_double_time_pane_g

0x5000,	// (0x0004ffa2) list_double_time_pane_t1_ParamLimits

0x5000,	// (0x0004ffa2) list_double_time_pane_t1

0x5016,	// (0x0004ffb8) list_double_time_pane_t2_ParamLimits

0x5016,	// (0x0004ffb8) list_double_time_pane_t2

0x5028,	// (0x0004ffca) list_double_time_pane_t3_ParamLimits

0x5028,	// (0x0004ffca) list_double_time_pane_t3

0x503a,	// (0x0004ffdc) list_double_time_pane_t4_ParamLimits

0x503a,	// (0x0004ffdc) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0005a5ff) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0005a5ff) list_double_time_pane_t

0x504c,	// (0x0004ffee) list_setting_pane_g1_ParamLimits

0x504c,	// (0x0004ffee) list_setting_pane_g1

0x4df3,	// (0x0004fd95) list_setting_pane_g2_ParamLimits

0x4df3,	// (0x0004fd95) list_setting_pane_g2

0x0001,

0xf666,	// (0x0005a608) list_setting_pane_g_ParamLimits

0xf666,	// (0x0005a608) list_setting_pane_g

0x5058,	// (0x0004fffa) list_setting_pane_t1_ParamLimits

0x5058,	// (0x0004fffa) list_setting_pane_t1

0x5072,	// (0x00050014) list_setting_pane_t2_ParamLimits

0x5072,	// (0x00050014) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0005a60d) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0005a60d) list_setting_pane_t

0x50b1,	// (0x00050053) set_value_pane_cp_ParamLimits

0x50b1,	// (0x00050053) set_value_pane_cp

0x50bd,	// (0x0005005f) list_setting_number_pane_g1_ParamLimits

0x50bd,	// (0x0005005f) list_setting_number_pane_g1

0x50c9,	// (0x0005006b) list_setting_number_pane_g2_ParamLimits

0x50c9,	// (0x0005006b) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0005a614) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0005a614) list_setting_number_pane_g

0x50d5,	// (0x00050077) list_setting_number_pane_t1_ParamLimits

0x50d5,	// (0x00050077) list_setting_number_pane_t1

0x50ee,	// (0x00050090) list_setting_number_pane_t2_ParamLimits

0x50ee,	// (0x00050090) list_setting_number_pane_t2

0x5108,	// (0x000500aa) list_setting_number_pane_t3_ParamLimits

0x5108,	// (0x000500aa) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0005a619) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0005a619) list_setting_number_pane_t

0x50b1,	// (0x00050053) set_value_pane_ParamLimits

0x50b1,	// (0x00050053) set_value_pane

0x87b3,	// (0x00053755) bg_set_opt_pane_ParamLimits

0x87b3,	// (0x00053755) bg_set_opt_pane

0x514b,	// (0x000500ed) set_value_pane_t1

0x87d4,	// (0x00053776) slider_set_pane_cp3

0x87dd,	// (0x0005377f) volume_small_pane_cp

0x87e6,	// (0x00053788) list_form_gen_pane

0x87ef,	// (0x00053791) scroll_pane_cp8

0x5161,	// (0x00050103) form_field_data_pane_ParamLimits

0x5161,	// (0x00050103) form_field_data_pane

0x5185,	// (0x00050127) form_field_data_wide_pane_ParamLimits

0x5185,	// (0x00050127) form_field_data_wide_pane

0x51a8,	// (0x0005014a) form_field_popup_pane_ParamLimits

0x51a8,	// (0x0005014a) form_field_popup_pane

0x51c8,	// (0x0005016a) form_field_popup_wide_pane_ParamLimits

0x51c8,	// (0x0005016a) form_field_popup_wide_pane

0x51e7,	// (0x00050189) form_field_slider_pane_ParamLimits

0x51e7,	// (0x00050189) form_field_slider_pane

0x51fa,	// (0x0005019c) form_field_slider_wide_pane_ParamLimits

0x51fa,	// (0x0005019c) form_field_slider_wide_pane

0x8800,	// (0x000537a2) data_form_pane

0x5217,	// (0x000501b9) form_field_data_pane_t1

0x880c,	// (0x000537ae) input_focus_pane

0x522f,	// (0x000501d1) data_form_wide_pane

0x524c,	// (0x000501ee) form_field_data_wide_pane_t1

0x8571,	// (0x00053513) input_focus_pane_cp6

0x526e,	// (0x00050210) form_field_popup_pane_t1

0x880c,	// (0x000537ae) input_focus_pane_cp7

0x882e,	// (0x000537d0) list_form_pane

0x528e,	// (0x00050230) form_field_popup_wide_pane_t1

0x880c,	// (0x000537ae) input_focus_pane_cp8

0x883a,	// (0x000537dc) list_form_wide_pane

0x52ab,	// (0x0005024d) form_field_slider_pane_t1_ParamLimits

0x52ab,	// (0x0005024d) form_field_slider_pane_t1

0x52c1,	// (0x00050263) form_field_slider_pane_t2_ParamLimits

0x52c1,	// (0x00050263) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0005a629) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0005a629) form_field_slider_pane_t

0x7b35,	// (0x00052ad7) input_focus_pane_cp9_ParamLimits

0x7b35,	// (0x00052ad7) input_focus_pane_cp9

0x52d6,	// (0x00050278) slider_cont_pane_ParamLimits

0x52d6,	// (0x00050278) slider_cont_pane

0x8849,	// (0x000537eb) form_field_slider_wide_pane_t1_ParamLimits

0x8849,	// (0x000537eb) form_field_slider_wide_pane_t1

0x52ea,	// (0x0005028c) form_field_slider_wide_pane_t2_ParamLimits

0x52ea,	// (0x0005028c) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0005a62e) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0005a62e) form_field_slider_wide_pane_t

0x7b35,	// (0x00052ad7) input_focus_pane_cp10_ParamLimits

0x7b35,	// (0x00052ad7) input_focus_pane_cp10

0x52fc,	// (0x0005029e) slider_cont_pane_cp1_ParamLimits

0x52fc,	// (0x0005029e) slider_cont_pane_cp1

0x5310,	// (0x000502b2) slider_form_pane_cp

0x885b,	// (0x000537fd) input_focus_pane_g1

0x8863,	// (0x00053805) input_focus_pane_g2

0x886b,	// (0x0005380d) input_focus_pane_g3

0x8873,	// (0x00053815) input_focus_pane_g4

0x887b,	// (0x0005381d) input_focus_pane_g5

0x8883,	// (0x00053825) input_focus_pane_g6

0x888b,	// (0x0005382d) input_focus_pane_g7

0x8893,	// (0x00053835) input_focus_pane_g8

0x889b,	// (0x0005383d) input_focus_pane_g9

0x77d0,	// (0x00052772) input_focus_pane_g10

0x0009,

0xf691,	// (0x0005a633) input_focus_pane_g

0xa2f9,	// (0x0005529b) wait_border_pane_g3_copy1

0x5318,	// (0x000502ba) data_form_pane_t1

0x77d0,	// (0x00052772) wait_anim_pane_g1_copy1

0x6480,	// (0x00051422) data_form_wide_pane_t1

0x5333,	// (0x000502d5) list_form_graphic_pane_cp_ParamLimits

0x5333,	// (0x000502d5) list_form_graphic_pane_cp

0xb21a,	// (0x000561bc) slider_form_pane_g1

0xb223,	// (0x000561c5) slider_form_pane_g2

0x0006,

0xf994,	// (0x0005a936) slider_form_pane_g

0x534c,	// (0x000502ee) list_form_graphic_pane_ParamLimits

0x534c,	// (0x000502ee) list_form_graphic_pane

0x5368,	// (0x0005030a) list_form_graphic_pane_g1

0x5370,	// (0x00050312) list_form_graphic_pane_t1_ParamLimits

0x5370,	// (0x00050312) list_form_graphic_pane_t1

0x78ba,	// (0x0005285c) list_highlight_pane_cp5_ParamLimits

0x78ba,	// (0x0005285c) list_highlight_pane_cp5

0x5385,	// (0x00050327) find_pane_g1

0x88a3,	// (0x00053845) input_find_pane

0x538e,	// (0x00050330) input_find_pane_g1_ParamLimits

0x538e,	// (0x00050330) input_find_pane_g1

0x539a,	// (0x0005033c) input_find_pane_t1_ParamLimits

0x539a,	// (0x0005033c) input_find_pane_t1

0x53af,	// (0x00050351) input_find_pane_t2_ParamLimits

0x53af,	// (0x00050351) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0005a648) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0005a648) input_find_pane_t

0x88ac,	// (0x0005384e) input_focus_pane_cp5_ParamLimits

0x88ac,	// (0x0005384e) input_focus_pane_cp5

0x88c6,	// (0x00053868) bg_popup_window_pane_cp2_ParamLimits

0x88c6,	// (0x00053868) bg_popup_window_pane_cp2

0x88d3,	// (0x00053875) listscroll_menu_pane_ParamLimits

0x88d3,	// (0x00053875) listscroll_menu_pane

0x88df,	// (0x00053881) popup_submenu_window_ParamLimits

0x88df,	// (0x00053881) popup_submenu_window

0x890b,	// (0x000538ad) find_popup_pane_g1

0x8913,	// (0x000538b5) input_popup_find_pane_cp

0x88ac,	// (0x0005384e) input_focus_pane_cp4_ParamLimits

0x88ac,	// (0x0005384e) input_focus_pane_cp4

0x8929,	// (0x000538cb) input_popup_find_pane_t1_ParamLimits

0x8929,	// (0x000538cb) input_popup_find_pane_t1

0x77da,	// (0x0005277c) bg_popup_sub_pane_cp

0x8957,	// (0x000538f9) listscroll_popup_sub_pane

0x895f,	// (0x00053901) list_submenu_pane_ParamLimits

0x895f,	// (0x00053901) list_submenu_pane

0x8970,	// (0x00053912) scroll_pane_cp4

0x8978,	// (0x0005391a) list_single_popup_submenu_pane_ParamLimits

0x8978,	// (0x0005391a) list_single_popup_submenu_pane

0x898c,	// (0x0005392e) list_single_popup_submenu_pane_g1

0x8994,	// (0x00053936) list_single_popup_submenu_pane_t1_ParamLimits

0x8994,	// (0x00053936) list_single_popup_submenu_pane_t1

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp1_ParamLimits

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp1

0x89a9,	// (0x0005394b) tabs_2_active_pane_g1

0x89b1,	// (0x00053953) tabs_2_active_pane_t1

0x78ba,	// (0x0005285c) bg_passive_tab_pane_cp1_ParamLimits

0x78ba,	// (0x0005285c) bg_passive_tab_pane_cp1

0x89a9,	// (0x0005394b) tabs_2_passive_pane_g1

0x89b1,	// (0x00053953) tabs_2_passive_pane_t1

0x89c3,	// (0x00053965) bg_active_tab_pane_cp4

0x89d1,	// (0x00053973) tabs_2_long_active_pane_t1

0x89e4,	// (0x00053986) bg_passive_tab_pane_cp4

0x606b,	// (0x0005100d) list_single_midp_graphic_pane_g4_ParamLimits

0x89c3,	// (0x00053965) bg_active_tab_pane_cp5

0x89f0,	// (0x00053992) tabs_3_long_active_pane_t1

0x89e4,	// (0x00053986) bg_passive_tab_pane_cp5

0x606b,	// (0x0005100d) list_single_midp_graphic_pane_g4

0x78ba,	// (0x0005285c) bg_popup_window_pane_cp13_ParamLimits

0x78ba,	// (0x0005285c) bg_popup_window_pane_cp13

0x8a0b,	// (0x000539ad) listscroll_popup_fast_pane_ParamLimits

0x8a0b,	// (0x000539ad) listscroll_popup_fast_pane

0x8a1a,	// (0x000539bc) grid_popup_fast_pane_ParamLimits

0x8a1a,	// (0x000539bc) grid_popup_fast_pane

0x8a2c,	// (0x000539ce) scroll_pane_cp9_ParamLimits

0x8a2c,	// (0x000539ce) scroll_pane_cp9

0xcae0,	// (0x00057a82) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcae0,	// (0x00057a82) list_single_graphic_hl_pane_t1_cp2

0x8a50,	// (0x000539f2) input_focus_pane_cp20_ParamLimits

0x8a50,	// (0x000539f2) input_focus_pane_cp20

0x8a5e,	// (0x00053a00) query_popup_data_pane_t1_ParamLimits

0x8a5e,	// (0x00053a00) query_popup_data_pane_t1

0x8a71,	// (0x00053a13) query_popup_data_pane_t2_ParamLimits

0x8a71,	// (0x00053a13) query_popup_data_pane_t2

0x8ab7,	// (0x00053a59) query_popup_data_pane_t3_ParamLimits

0x8ab7,	// (0x00053a59) query_popup_data_pane_t3

0x8af8,	// (0x00053a9a) query_popup_data_pane_t4_ParamLimits

0x8af8,	// (0x00053a9a) query_popup_data_pane_t4

0x8b34,	// (0x00053ad6) query_popup_data_pane_t5_ParamLimits

0x8b34,	// (0x00053ad6) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0005a64d) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0005a64d) query_popup_data_pane_t

0x885b,	// (0x000537fd) bg_set_opt_pane_g1

0x8863,	// (0x00053805) bg_set_opt_pane_g2

0x886b,	// (0x0005380d) bg_set_opt_pane_g3

0x8873,	// (0x00053815) bg_set_opt_pane_g4

0x887b,	// (0x0005381d) bg_set_opt_pane_g5

0x8883,	// (0x00053825) bg_set_opt_pane_g6

0x888b,	// (0x0005382d) bg_set_opt_pane_g7

0x8893,	// (0x00053835) bg_set_opt_pane_g8

0x889b,	// (0x0005383d) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0005a658) bg_set_opt_pane_g

0x56cf,	// (0x00050671) control_top_pane_stacon_ParamLimits

0x56cf,	// (0x00050671) control_top_pane_stacon

0x5722,	// (0x000506c4) signal_pane_stacon_ParamLimits

0x5722,	// (0x000506c4) signal_pane_stacon

0x9124,	// (0x000540c6) stacon_top_pane_g1_ParamLimits

0x9124,	// (0x000540c6) stacon_top_pane_g1

0x5747,	// (0x000506e9) title_pane_stacon_ParamLimits

0x5747,	// (0x000506e9) title_pane_stacon

0x5771,	// (0x00050713) uni_indicator_pane_stacon_ParamLimits

0x5771,	// (0x00050713) uni_indicator_pane_stacon

0x5786,	// (0x00050728) battery_pane_stacon_ParamLimits

0x5786,	// (0x00050728) battery_pane_stacon

0x57ca,	// (0x0005076c) control_bottom_pane_stacon_ParamLimits

0x57ca,	// (0x0005076c) control_bottom_pane_stacon

0x57ed,	// (0x0005078f) navi_pane_stacon_ParamLimits

0x57ed,	// (0x0005078f) navi_pane_stacon

0x9146,	// (0x000540e8) stacon_bottom_pane_g1_ParamLimits

0x9146,	// (0x000540e8) stacon_bottom_pane_g1

0x53c4,	// (0x00050366) aid_levels_signal_lsc_ParamLimits

0x53c4,	// (0x00050366) aid_levels_signal_lsc

0x53da,	// (0x0005037c) signal_pane_stacon_g1_ParamLimits

0x53da,	// (0x0005037c) signal_pane_stacon_g1

0x53ee,	// (0x00050390) signal_pane_stacon_g2_ParamLimits

0x53ee,	// (0x00050390) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0005a66b) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0005a66b) signal_pane_stacon_g

0x5423,	// (0x000503c5) title_pane_stacon_t1_ParamLimits

0x5423,	// (0x000503c5) title_pane_stacon_t1

0x8b78,	// (0x00053b1a) uni_indicator_pane_stacon_g1

0x8b82,	// (0x00053b24) uni_indicator_pane_stacon_g2

0x8b8c,	// (0x00053b2e) uni_indicator_pane_stacon_g3

0x8b96,	// (0x00053b38) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0005a677) uni_indicator_pane_stacon_g

0x5448,	// (0x000503ea) control_top_pane_stacon_g1

0x5450,	// (0x000503f2) control_top_pane_stacon_t1_ParamLimits

0x5450,	// (0x000503f2) control_top_pane_stacon_t1

0x5487,	// (0x00050429) aid_levels_battery_lsc_ParamLimits

0x5487,	// (0x00050429) aid_levels_battery_lsc

0x549e,	// (0x00050440) battery_pane_stacon_g1_ParamLimits

0x549e,	// (0x00050440) battery_pane_stacon_g1

0x54b1,	// (0x00050453) battery_pane_stacon_g2_ParamLimits

0x54b1,	// (0x00050453) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0005a680) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0005a680) battery_pane_stacon_g

0x54ef,	// (0x00050491) navi_icon_pane_stacon

0x5503,	// (0x000504a5) navi_navi_pane_stacon

0x54ef,	// (0x00050491) navi_text_pane_stacon

0x5448,	// (0x000503ea) control_bottom_pane_stacon_g1

0x5517,	// (0x000504b9) control_bottom_pane_stacon_t1_ParamLimits

0x5517,	// (0x000504b9) control_bottom_pane_stacon_t1

0x8bba,	// (0x00053b5c) grid_app_pane_ParamLimits

0x8bba,	// (0x00053b5c) grid_app_pane

0x8bde,	// (0x00053b80) scroll_pane_cp15_ParamLimits

0x8bde,	// (0x00053b80) scroll_pane_cp15

0x8bf1,	// (0x00053b93) cell_app_pane_ParamLimits

0x8bf1,	// (0x00053b93) cell_app_pane

0x8c15,	// (0x00053bb7) cell_app_pane_g1_ParamLimits

0x8c15,	// (0x00053bb7) cell_app_pane_g1

0x8c39,	// (0x00053bdb) cell_app_pane_g2_ParamLimits

0x8c39,	// (0x00053bdb) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0005a685) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0005a685) cell_app_pane_g

0x8c45,	// (0x00053be7) cell_app_pane_t1_ParamLimits

0x8c45,	// (0x00053be7) cell_app_pane_t1

0x8c5c,	// (0x00053bfe) grid_highlight_pane_ParamLimits

0x8c5c,	// (0x00053bfe) grid_highlight_pane

0x885b,	// (0x000537fd) cell_highlight_pane_g1

0x8863,	// (0x00053805) cell_highlight_pane_g2

0x886b,	// (0x0005380d) cell_highlight_pane_g3

0x8873,	// (0x00053815) cell_highlight_pane_g4

0x887b,	// (0x0005381d) cell_highlight_pane_g5

0x8883,	// (0x00053825) cell_highlight_pane_g6

0x888b,	// (0x0005382d) cell_highlight_pane_g7

0x8893,	// (0x00053835) cell_highlight_pane_g8

0x889b,	// (0x0005383d) cell_highlight_pane_g9

0x77d0,	// (0x00052772) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0005a633) cell_highlight_pane_g

0x8c6d,	// (0x00053c0f) bg_scroll_pane

0x5561,	// (0x00050503) scroll_handle_pane

0x8cb4,	// (0x00053c56) scroll_bg_pane_g1

0x8cc9,	// (0x00053c6b) scroll_bg_pane_g2

0x8ce1,	// (0x00053c83) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0005a68a) scroll_bg_pane_g

0x8cf6,	// (0x00053c98) scroll_handle_focus_pane_ParamLimits

0x8cf6,	// (0x00053c98) scroll_handle_focus_pane

0x8cb4,	// (0x00053c56) scroll_handle_pane_g1

0x8d03,	// (0x00053ca5) scroll_handle_pane_g2

0x8ce1,	// (0x00053c83) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0005a691) scroll_handle_pane_g

0x88ac,	// (0x0005384e) bg_popup_sub_pane_cp21_ParamLimits

0x88ac,	// (0x0005384e) bg_popup_sub_pane_cp21

0x8d17,	// (0x00053cb9) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d17,	// (0x00053cb9) popup_fep_japan_predictive_window_t1

0x8d31,	// (0x00053cd3) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d31,	// (0x00053cd3) popup_fep_japan_predictive_window_t2

0x8d64,	// (0x00053d06) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d64,	// (0x00053d06) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0005a698) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0005a698) popup_fep_japan_predictive_window_t

0x77da,	// (0x0005277c) bg_popup_sub_pane_cp23

0x8d9b,	// (0x00053d3d) listscroll_japin_cand_pane

0x8da3,	// (0x00053d45) popup_fep_japan_candidate_window_t1

0x8db1,	// (0x00053d53) candidate_pane_ParamLimits

0x8db1,	// (0x00053d53) candidate_pane

0x8dc3,	// (0x00053d65) scroll_pane_cp30

0x8dcb,	// (0x00053d6d) list_single_popup_jap_candidate_pane_ParamLimits

0x8dcb,	// (0x00053d6d) list_single_popup_jap_candidate_pane

0x77da,	// (0x0005277c) list_highlight_pane_cp30

0x8de0,	// (0x00053d82) list_single_popup_jap_candidate_pane_t1

0x8def,	// (0x00053d91) level_1_signal

0x8e01,	// (0x00053da3) level_2_signal

0x8e14,	// (0x00053db6) level_3_signal

0x8e27,	// (0x00053dc9) level_4_signal

0x8e3a,	// (0x00053ddc) level_5_signal

0x8e4d,	// (0x00053def) level_6_signal

0x8e60,	// (0x00053e02) level_7_signal

0x8def,	// (0x00053d91) level_1_battery

0x8e01,	// (0x00053da3) level_2_battery

0x8e14,	// (0x00053db6) level_3_battery

0x8e27,	// (0x00053dc9) level_4_battery

0x8e3a,	// (0x00053ddc) level_5_battery

0x8e4d,	// (0x00053def) level_6_battery

0x8e60,	// (0x00053e02) level_7_battery

0x8e8b,	// (0x00053e2d) list_menu_pane_ParamLimits

0x8e8b,	// (0x00053e2d) list_menu_pane

0x8ea1,	// (0x00053e43) scroll_pane_cp25_ParamLimits

0x8ea1,	// (0x00053e43) scroll_pane_cp25

0x8eba,	// (0x00053e5c) list_double2_graphic_pane_cp2_ParamLimits

0x8eba,	// (0x00053e5c) list_double2_graphic_pane_cp2

0x8eba,	// (0x00053e5c) list_double2_large_graphic_pane_cp2_ParamLimits

0x8eba,	// (0x00053e5c) list_double2_large_graphic_pane_cp2

0x8eba,	// (0x00053e5c) list_double2_pane_cp2_ParamLimits

0x8eba,	// (0x00053e5c) list_double2_pane_cp2

0x8eba,	// (0x00053e5c) list_double_graphic_pane_cp2_ParamLimits

0x8eba,	// (0x00053e5c) list_double_graphic_pane_cp2

0x8eba,	// (0x00053e5c) list_double_large_graphic_pane_cp2_ParamLimits

0x8eba,	// (0x00053e5c) list_double_large_graphic_pane_cp2

0x8eba,	// (0x00053e5c) list_double_number_pane_cp2_ParamLimits

0x8eba,	// (0x00053e5c) list_double_number_pane_cp2

0x8eba,	// (0x00053e5c) list_double_pane_cp2_ParamLimits

0x8eba,	// (0x00053e5c) list_double_pane_cp2

0x8ede,	// (0x00053e80) list_single_2graphic_pane_cp2_ParamLimits

0x8ede,	// (0x00053e80) list_single_2graphic_pane_cp2

0x8ede,	// (0x00053e80) list_single_graphic_heading_pane_cp2_ParamLimits

0x8ede,	// (0x00053e80) list_single_graphic_heading_pane_cp2

0x8ede,	// (0x00053e80) list_single_graphic_pane_cp2_ParamLimits

0x8ede,	// (0x00053e80) list_single_graphic_pane_cp2

0x8ede,	// (0x00053e80) list_single_heading_pane_cp2_ParamLimits

0x8ede,	// (0x00053e80) list_single_heading_pane_cp2

0x8ef7,	// (0x00053e99) list_single_large_graphic_pane_cp2_ParamLimits

0x8ef7,	// (0x00053e99) list_single_large_graphic_pane_cp2

0x8ede,	// (0x00053e80) list_single_number_heading_pane_cp2_ParamLimits

0x8ede,	// (0x00053e80) list_single_number_heading_pane_cp2

0x8ede,	// (0x00053e80) list_single_number_pane_cp2_ParamLimits

0x8ede,	// (0x00053e80) list_single_number_pane_cp2

0x8ede,	// (0x00053e80) list_single_pane_cp2_ParamLimits

0x8ede,	// (0x00053e80) list_single_pane_cp2

0x8f73,	// (0x00053f15) bg_popup_sub_pane_cp22

0x5613,	// (0x000505b5) popup_side_volume_key_window_g1

0x563d,	// (0x000505df) popup_side_volume_key_window_t1

0x5659,	// (0x000505fb) volume_small_pane_cp1

0x7b35,	// (0x00052ad7) bg_popup_sub_pane_cp24_ParamLimits

0x7b35,	// (0x00052ad7) bg_popup_sub_pane_cp24

0x8f89,	// (0x00053f2b) fep_china_uni_candidate_pane_ParamLimits

0x8f89,	// (0x00053f2b) fep_china_uni_candidate_pane

0x8f9d,	// (0x00053f3f) fep_china_uni_entry_pane

0x8fad,	// (0x00053f4f) popup_fep_china_uni_window_g1

0x8fc9,	// (0x00053f6b) fep_china_uni_entry_pane_g1

0x8fd1,	// (0x00053f73) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0005a6c9) fep_china_uni_entry_pane_g

0x8fd9,	// (0x00053f7b) fep_entry_item_pane

0x8fe3,	// (0x00053f85) fep_candidate_item_pane

0x8feb,	// (0x00053f8d) fep_china_uni_candidate_pane_g1

0x8ff3,	// (0x00053f95) fep_china_uni_candidate_pane_g2

0x8ffb,	// (0x00053f9d) fep_china_uni_candidate_pane_g3

0x9003,	// (0x00053fa5) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0005a6ce) fep_china_uni_candidate_pane_g

0x77d0,	// (0x00052772) fep_entry_item_pane_g1

0x900b,	// (0x00053fad) fep_entry_item_pane_t1_ParamLimits

0x900b,	// (0x00053fad) fep_entry_item_pane_t1

0x9021,	// (0x00053fc3) fep_candidate_item_pane_t1_ParamLimits

0x9021,	// (0x00053fc3) fep_candidate_item_pane_t1

0x9036,	// (0x00053fd8) fep_candidate_item_pane_t2_ParamLimits

0x9036,	// (0x00053fd8) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0005a6d7) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0005a6d7) fep_candidate_item_pane_t

0x78ba,	// (0x0005285c) list_highlight_pane_cp31_ParamLimits

0x78ba,	// (0x0005285c) list_highlight_pane_cp31

0x9048,	// (0x00053fea) level_1_signal_lsc

0x9051,	// (0x00053ff3) level_2_signal_lsc

0x905a,	// (0x00053ffc) level_3_signal_lsc

0x9063,	// (0x00054005) level_4_signal_lsc

0x906c,	// (0x0005400e) level_5_signal_lsc

0x9075,	// (0x00054017) level_6_signal_lsc

0x907e,	// (0x00054020) level_7_signal_lsc

0x907e,	// (0x00054020) level_1_battery_lsc

0x9087,	// (0x00054029) level_2_battery_lsc

0x9090,	// (0x00054032) level_3_battery_lsc

0x9099,	// (0x0005403b) level_4_battery_lsc

0x90a2,	// (0x00054044) level_5_battery_lsc

0x90ab,	// (0x0005404d) level_6_battery_lsc

0x9048,	// (0x00053fea) level_7_battery_lsc

0x90b4,	// (0x00054056) scroll_handle_focus_pane_g1

0x90bd,	// (0x0005405f) scroll_handle_focus_pane_g2

0x90c6,	// (0x00054068) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0005a6dc) scroll_handle_focus_pane_g

0x5661,	// (0x00050603) list_single_2graphic_pane_g1_ParamLimits

0x5661,	// (0x00050603) list_single_2graphic_pane_g1

0x7ca6,	// (0x00052c48) list_single_2graphic_pane_g2_ParamLimits

0x7ca6,	// (0x00052c48) list_single_2graphic_pane_g2

0x7c88,	// (0x00052c2a) list_single_2graphic_pane_g3_ParamLimits

0x7c88,	// (0x00052c2a) list_single_2graphic_pane_g3

0x566d,	// (0x0005060f) list_single_2graphic_pane_g4_ParamLimits

0x566d,	// (0x0005060f) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0005a6e3) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0005a6e3) list_single_2graphic_pane_g

0x5679,	// (0x0005061b) list_single_2graphic_pane_t1_ParamLimits

0x5679,	// (0x0005061b) list_single_2graphic_pane_t1

0x7d28,	// (0x00052cca) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x7d28,	// (0x00052cca) list_double2_graphic_large_graphic_pane_g1

0x4f61,	// (0x0004ff03) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4f61,	// (0x0004ff03) list_double2_graphic_large_graphic_pane_g2

0x7cef,	// (0x00052c91) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7cef,	// (0x00052c91) list_double2_graphic_large_graphic_pane_g3

0x7d38,	// (0x00052cda) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x7d38,	// (0x00052cda) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0005a6ec) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0005a6ec) list_double2_graphic_large_graphic_pane_g

0x56a7,	// (0x00050649) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x56a7,	// (0x00050649) list_double2_graphic_large_graphic_pane_t1

0x56bd,	// (0x0005065f) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x56bd,	// (0x0005065f) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0005a6f5) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0005a6f5) list_double2_graphic_large_graphic_pane_t

0x920e,	// (0x000541b0) popup_fast_swap_window_ParamLimits

0x920e,	// (0x000541b0) popup_fast_swap_window

0x922a,	// (0x000541cc) popup_side_volume_key_window

0x9246,	// (0x000541e8) stacon_top_pane

0x9250,	// (0x000541f2) status_pane_ParamLimits

0x9250,	// (0x000541f2) status_pane

0x925e,	// (0x00054200) status_small_pane

0x77da,	// (0x0005277c) control_pane

0x77da,	// (0x0005277c) stacon_bottom_pane

0x87ef,	// (0x00053791) scroll_pane_cp121

0x87e6,	// (0x00053788) set_content_pane

0x90cf,	// (0x00054071) bg_active_tab_pane_g1_cp1

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp1

0x90e1,	// (0x00054083) bg_active_tab_pane_g3_cp1

0x90cf,	// (0x00054071) bg_passive_tab_pane_g1_cp1

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp1

0x90e1,	// (0x00054083) bg_passive_tab_pane_g3_cp1

0x90ea,	// (0x0005408c) bg_active_tab_pane_g1_cp2

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp2

0x90f3,	// (0x00054095) bg_active_tab_pane_g3_cp2

0x90ea,	// (0x0005408c) bg_passive_tab_pane_g1_cp2

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp2

0x90f3,	// (0x00054095) bg_passive_tab_pane_g3_cp2

0x90fc,	// (0x0005409e) bg_active_tab_pane_g1_cp3

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp3

0x9105,	// (0x000540a7) bg_active_tab_pane_g3_cp3

0x90fc,	// (0x0005409e) bg_passive_tab_pane_g1_cp3

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp3

0x9105,	// (0x000540a7) bg_passive_tab_pane_g3_cp3

0x910e,	// (0x000540b0) bg_active_tab_pane_g1_cp4

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp4

0x9119,	// (0x000540bb) bg_active_tab_pane_g3_cp4

0x910e,	// (0x000540b0) bg_passive_tab_pane_g1_cp4

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp4

0x9119,	// (0x000540bb) bg_passive_tab_pane_g3_cp4

0x9162,	// (0x00054104) bg_active_tab_pane_g1_cp5

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp5

0x916b,	// (0x0005410d) bg_active_tab_pane_g3_cp5

0x9162,	// (0x00054104) bg_passive_tab_pane_g1_cp5

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp5

0x916b,	// (0x0005410d) bg_passive_tab_pane_g3_cp5

0x9174,	// (0x00054116) list_set_graphic_pane_ParamLimits

0x9174,	// (0x00054116) list_set_graphic_pane

0x77da,	// (0x0005277c) bg_set_opt_pane_cp4

0x9191,	// (0x00054133) list_set_graphic_pane_g1_ParamLimits

0x9191,	// (0x00054133) list_set_graphic_pane_g1

0x919d,	// (0x0005413f) list_set_graphic_pane_g2_ParamLimits

0x919d,	// (0x0005413f) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0005a6fa) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0005a6fa) list_set_graphic_pane_g

0x0009,

0xfacd,	// (0x0005aa6f) volume_small_pane_cp_g

0x91c1,	// (0x00054163) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91c1,	// (0x00054163) list_double2_large_graphic_pane_g1_cp2

0x91cd,	// (0x0005416f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x91cd,	// (0x0005416f) list_double2_large_graphic_pane_g2_cp2

0x91de,	// (0x00054180) list_double2_large_graphic_pane_g3_cp2

0x91e6,	// (0x00054188) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x91e6,	// (0x00054188) list_double2_large_graphic_pane_t1_cp2

0x91fc,	// (0x0005419e) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x91fc,	// (0x0005419e) list_double2_large_graphic_pane_t2_cp2

0xadcc,	// (0x00055d6e) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xadcc,	// (0x00055d6e) list_double_large_graphic_pane_g1_cp2

0xaddd,	// (0x00055d7f) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xaddd,	// (0x00055d7f) list_double_large_graphic_pane_g2_cp2

0x9377,	// (0x00054319) list_double_large_graphic_pane_g3_cp2

0xadee,	// (0x00055d90) list_double_large_graphic_pane_g4_cp

0xadf6,	// (0x00055d98) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xadf6,	// (0x00055d98) list_double_large_graphic_pane_t1_cp2

0xae0d,	// (0x00055daf) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae0d,	// (0x00055daf) list_double_large_graphic_pane_t2_cp2

0x9269,	// (0x0005420b) list_double2_graphic_pane_g1_cp2_ParamLimits

0x9269,	// (0x0005420b) list_double2_graphic_pane_g1_cp2

0x9277,	// (0x00054219) list_double2_graphic_pane_g2_cp2_ParamLimits

0x9277,	// (0x00054219) list_double2_graphic_pane_g2_cp2

0x9288,	// (0x0005422a) list_double2_graphic_pane_g3_cp2

0x9292,	// (0x00054234) list_double2_graphic_pane_t1_cp2_ParamLimits

0x9292,	// (0x00054234) list_double2_graphic_pane_t1_cp2

0x92a8,	// (0x0005424a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92a8,	// (0x0005424a) list_double2_graphic_pane_t2_cp2

0x92ba,	// (0x0005425c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92ba,	// (0x0005425c) list_single_number_heading_pane_g1_cp2

0x92c6,	// (0x00054268) list_single_number_heading_pane_g2_cp2

0x92ce,	// (0x00054270) list_single_number_heading_pane_t1_cp2_ParamLimits

0x92ce,	// (0x00054270) list_single_number_heading_pane_t1_cp2

0x92e4,	// (0x00054286) list_single_number_heading_pane_t2_cp2_ParamLimits

0x92e4,	// (0x00054286) list_single_number_heading_pane_t2_cp2

0x92f6,	// (0x00054298) list_single_number_heading_pane_t3_cp2_ParamLimits

0x92f6,	// (0x00054298) list_single_number_heading_pane_t3_cp2

0x92ba,	// (0x0005425c) list_single_heading_pane_g1_cp2_ParamLimits

0x92ba,	// (0x0005425c) list_single_heading_pane_g1_cp2

0x92c6,	// (0x00054268) list_single_heading_pane_g2_cp2

0x92ce,	// (0x00054270) list_single_heading_pane_t1_cp2_ParamLimits

0x92ce,	// (0x00054270) list_single_heading_pane_t1_cp2

0xabd4,	// (0x00055b76) list_single_heading_pane_t2_cp2_ParamLimits

0xabd4,	// (0x00055b76) list_single_heading_pane_t2_cp2

0xab1c,	// (0x00055abe) list_double_graphic_pane_g1_cp2_ParamLimits

0xab1c,	// (0x00055abe) list_double_graphic_pane_g1_cp2

0xab28,	// (0x00055aca) list_double_graphic_pane_g2_cp2_ParamLimits

0xab28,	// (0x00055aca) list_double_graphic_pane_g2_cp2

0xab37,	// (0x00055ad9) list_double_graphic_pane_g3_cp2

0xab3f,	// (0x00055ae1) list_double_graphic_pane_t1_cp2_ParamLimits

0xab3f,	// (0x00055ae1) list_double_graphic_pane_t1_cp2

0xab55,	// (0x00055af7) list_double_graphic_pane_t2_cp2_ParamLimits

0xab55,	// (0x00055af7) list_double_graphic_pane_t2_cp2

0x936b,	// (0x0005430d) list_double_number_pane_g1_cp2_ParamLimits

0x936b,	// (0x0005430d) list_double_number_pane_g1_cp2

0x9377,	// (0x00054319) list_double_number_pane_g2_cp2

0xaae0,	// (0x00055a82) list_double_number_pane_t1_cp2_ParamLimits

0xaae0,	// (0x00055a82) list_double_number_pane_t1_cp2

0xaaf4,	// (0x00055a96) list_double_number_pane_t2_cp2_ParamLimits

0xaaf4,	// (0x00055a96) list_double_number_pane_t2_cp2

0xab0a,	// (0x00055aac) list_double_number_pane_t3_cp2_ParamLimits

0xab0a,	// (0x00055aac) list_double_number_pane_t3_cp2

0xa9c9,	// (0x0005596b) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9c9,	// (0x0005596b) list_single_graphic_pane_g1_cp2

0x93cf,	// (0x00054371) list_single_graphic_pane_g2_cp2_ParamLimits

0x93cf,	// (0x00054371) list_single_graphic_pane_g2_cp2

0x93db,	// (0x0005437d) list_single_graphic_pane_g3_cp2

0xa99f,	// (0x00055941) list_single_graphic_pane_t1_cp2_ParamLimits

0xa99f,	// (0x00055941) list_single_graphic_pane_t1_cp2

0x93cf,	// (0x00054371) list_single_number_pane_g1_cp2_ParamLimits

0x93cf,	// (0x00054371) list_single_number_pane_g1_cp2

0x93db,	// (0x0005437d) list_single_number_pane_g2_cp2

0xa99f,	// (0x00055941) list_single_number_pane_t1_cp2_ParamLimits

0xa99f,	// (0x00055941) list_single_number_pane_t1_cp2

0xa9b5,	// (0x00055957) list_single_number_pane_t2_cp2_ParamLimits

0xa9b5,	// (0x00055957) list_single_number_pane_t2_cp2

0x91cd,	// (0x0005416f) list_double2_pane_g1_cp2_ParamLimits

0x91cd,	// (0x0005416f) list_double2_pane_g1_cp2

0x91de,	// (0x00054180) list_double2_pane_g2_cp2

0x9343,	// (0x000542e5) list_double2_pane_t1_cp2_ParamLimits

0x9343,	// (0x000542e5) list_double2_pane_t1_cp2

0x9359,	// (0x000542fb) list_double2_pane_t2_cp2_ParamLimits

0x9359,	// (0x000542fb) list_double2_pane_t2_cp2

0x936b,	// (0x0005430d) list_double_pane_g1_cp2_ParamLimits

0x936b,	// (0x0005430d) list_double_pane_g1_cp2

0x9377,	// (0x00054319) list_double_pane_g2_cp2

0x937f,	// (0x00054321) list_double_pane_t1_cp2_ParamLimits

0x937f,	// (0x00054321) list_double_pane_t1_cp2

0x9395,	// (0x00054337) list_double_pane_t2_cp2_ParamLimits

0x9395,	// (0x00054337) list_double_pane_t2_cp2

0x93bf,	// (0x00054361) list_single_pane_cp2_g3

0x93cf,	// (0x00054371) list_single_pane_g1_cp2_ParamLimits

0x93cf,	// (0x00054371) list_single_pane_g1_cp2

0x93db,	// (0x0005437d) list_single_pane_g2_cp2

0x93e3,	// (0x00054385) list_single_pane_t1_cp2_ParamLimits

0x93e3,	// (0x00054385) list_single_pane_t1_cp2

0x93fb,	// (0x0005439d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x93fb,	// (0x0005439d) list_single_large_graphic_pane_g1_cp2

0x9407,	// (0x000543a9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x9407,	// (0x000543a9) list_single_large_graphic_pane_g2_cp2

0x9413,	// (0x000543b5) list_single_large_graphic_pane_g3_cp2

0x941b,	// (0x000543bd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x941b,	// (0x000543bd) list_single_large_graphic_pane_g4_cp1

0x9435,	// (0x000543d7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9435,	// (0x000543d7) list_single_large_graphic_pane_t1_cp2

0xa96b,	// (0x0005590d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa96b,	// (0x0005590d) list_single_graphic_heading_pane_g1_cp2

0xa938,	// (0x000558da) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa938,	// (0x000558da) list_single_graphic_heading_pane_g4_cp2

0x93db,	// (0x0005437d) list_single_graphic_heading_pane_g5_cp2

0xa977,	// (0x00055919) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa977,	// (0x00055919) list_single_graphic_heading_pane_t1_cp2

0xa98d,	// (0x0005592f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa98d,	// (0x0005592f) list_single_graphic_heading_pane_t2_cp2

0xa92c,	// (0x000558ce) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa92c,	// (0x000558ce) list_single_2graphic_pane_g1_cp2

0xa938,	// (0x000558da) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa938,	// (0x000558da) list_single_2graphic_pane_g2_cp2

0x93db,	// (0x0005437d) list_single_2graphic_pane_g3_cp2

0xa949,	// (0x000558eb) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa949,	// (0x000558eb) list_single_2graphic_pane_g4_cp2

0xa955,	// (0x000558f7) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa955,	// (0x000558f7) list_single_2graphic_pane_t1_cp2

0x77d0,	// (0x00052772) list_highlight_pane_g10_cp1

0xa504,	// (0x000554a6) list_highlight_pane_g1_cp1

0xa50c,	// (0x000554ae) list_highlight_pane_g2_cp1

0xa514,	// (0x000554b6) list_highlight_pane_g3_cp1

0xa51c,	// (0x000554be) list_highlight_pane_g4_cp1

0xa524,	// (0x000554c6) list_highlight_pane_g5_cp1

0xa52c,	// (0x000554ce) list_highlight_pane_g6_cp1

0xa534,	// (0x000554d6) list_highlight_pane_g7_cp1

0xa53c,	// (0x000554de) list_highlight_pane_g8_cp1

0xa544,	// (0x000554e6) list_highlight_pane_g9_cp1

0xa424,	// (0x000553c6) form_field_slider_pane_t3

0xa432,	// (0x000553d4) form_field_slider_pane_t4

0xa440,	// (0x000553e2) slider_form_pane_ParamLimits

0xa440,	// (0x000553e2) slider_form_pane

0x77da,	// (0x0005277c) control_abbreviations

0x77da,	// (0x0005277c) control_conventions

0x77da,	// (0x0005277c) control_definitions

0x77da,	// (0x0005277c) format_table_attribute

0xac1e,	// (0x00055bc0) bg_popup_preview_window_pane_g9

0x77da,	// (0x0005277c) format_table_data2

0x77da,	// (0x0005277c) format_table_data3

0x77da,	// (0x0005277c) format_table_data_example

0x0008,

0x77da,	// (0x0005277c) intro_purpose

0xf8f4,	// (0x0005a896) bg_popup_preview_window_pane_g

0x77da,	// (0x0005277c) texts_category

0x77da,	// (0x0005277c) texts_graphics

0x944b,	// (0x000543ed) text_digital

0x945a,	// (0x000543fc) text_primary

0x9469,	// (0x0005440b) text_primary_small

0x9478,	// (0x0005441a) text_secondary

0x9487,	// (0x00054429) text_title

0xb304,	// (0x000562a6) bg_passive_tab_pane_g1_cp3_srt

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp3_srt

0xb30d,	// (0x000562af) bg_passive_tab_pane_g3_cp3_srt

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp3_srt_ParamLimits

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp3_srt

0xb316,	// (0x000562b8) tabs_4_active_pane_srt_g1

0xb31e,	// (0x000562c0) tabs_4_active_pane_srt_t1_ParamLimits

0xb31e,	// (0x000562c0) tabs_4_active_pane_srt_t1

0xb304,	// (0x000562a6) bg_active_tab_pane_g1_cp3_copy1

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp3_copy1

0xb30d,	// (0x000562af) bg_active_tab_pane_g3_cp3_copy1

0x78ba,	// (0x0005285c) tabs_2_long_active_pane_srt_ParamLimits

0x78ba,	// (0x0005285c) tabs_2_long_active_pane_srt

0x78ba,	// (0x0005285c) tabs_2_long_passive_pane_srt_ParamLimits

0x78ba,	// (0x0005285c) tabs_2_long_passive_pane_srt

0x89e4,	// (0x00053986) bg_passive_tab_pane_cp4_srt_ParamLimits

0x89e4,	// (0x00053986) bg_passive_tab_pane_cp4_srt

0xb04d,	// (0x00055fef) bg_passive_tab_pane_g1_cp4_srt

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp4_srt

0xb056,	// (0x00055ff8) bg_passive_tab_pane_g3_cp4_srt

0x89c3,	// (0x00053965) bg_active_tab_pane_cp4_srt_ParamLimits

0x89c3,	// (0x00053965) bg_active_tab_pane_cp4_srt

0xb05f,	// (0x00056001) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb05f,	// (0x00056001) tabs_2_long_active_pane_srt_t1

0xb04d,	// (0x00055fef) bg_active_tab_pane_g1_cp4_srt

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp4_srt

0xb056,	// (0x00055ff8) bg_active_tab_pane_g3_cp4_srt

0x7b35,	// (0x00052ad7) tabs_3_long_active_pane_srt_ParamLimits

0x7b35,	// (0x00052ad7) tabs_3_long_active_pane_srt

0x7b35,	// (0x00052ad7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7b35,	// (0x00052ad7) tabs_3_long_passive_pane_cp_srt

0x7b35,	// (0x00052ad7) tabs_3_long_passive_pane_srt_ParamLimits

0x7b35,	// (0x00052ad7) tabs_3_long_passive_pane_srt

0x89e4,	// (0x00053986) bg_passive_tab_pane_cp5_srt_ParamLimits

0x89e4,	// (0x00053986) bg_passive_tab_pane_cp5_srt

0x9162,	// (0x00054104) bg_passive_tab_pane_g1_cp5_srt

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp5_srt

0x916b,	// (0x0005410d) bg_passive_tab_pane_g3_cp5_srt

0x89c3,	// (0x00053965) bg_active_tab_pane_cp5_srt_ParamLimits

0x89c3,	// (0x00053965) bg_active_tab_pane_cp5_srt

0xb03b,	// (0x00055fdd) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb03b,	// (0x00055fdd) tabs_3_long_active_pane_srt_t1

0x9162,	// (0x00054104) bg_active_tab_pane_g1_cp5_srt

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp5_srt

0x916b,	// (0x0005410d) bg_active_tab_pane_g3_cp5_srt

0xb02d,	// (0x00055fcf) navi_text_pane_srt_t1

0xb025,	// (0x00055fc7) navi_icon_pane_srt_g1

0x9650,	// (0x000545f2) midp_editing_number_pane_srt

0x9496,	// (0x00054438) midp_ticker_pane_srt

0x9658,	// (0x000545fa) midp_ticker_pane_srt_g1

0x9660,	// (0x00054602) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0005a719) midp_ticker_pane_srt_g

0x9668,	// (0x0005460a) midp_ticker_pane_srt_t1

0xb016,	// (0x00055fb8) midp_editing_number_pane_t1_copy1

0x89e4,	// (0x00053986) listscroll_midp_pane

0x89e4,	// (0x00053986) midp_form_pane

0x9502,	// (0x000544a4) midp_info_popup_window_ParamLimits

0x9502,	// (0x000544a4) midp_info_popup_window

0x88ac,	// (0x0005384e) bg_popup_sub_pane_cp50_ParamLimits

0x88ac,	// (0x0005384e) bg_popup_sub_pane_cp50

0xa13c,	// (0x000550de) listscroll_midp_info_pane_ParamLimits

0xa13c,	// (0x000550de) listscroll_midp_info_pane

0xa124,	// (0x000550c6) listscroll_form_midp_pane_ParamLimits

0xa124,	// (0x000550c6) listscroll_form_midp_pane

0xa130,	// (0x000550d2) scroll_bar_cp050

0xa104,	// (0x000550a6) list_midp_pane

0xbd59,	// (0x00056cfb) signal_pane_g2_cp

0xa03e,	// (0x00054fe0) listscroll_midp_info_pane_t1_ParamLimits

0xa03e,	// (0x00054fe0) listscroll_midp_info_pane_t1

0xa056,	// (0x00054ff8) listscroll_midp_info_pane_t2_ParamLimits

0xa056,	// (0x00054ff8) listscroll_midp_info_pane_t2

0xa094,	// (0x00055036) listscroll_midp_info_pane_t3_ParamLimits

0xa094,	// (0x00055036) listscroll_midp_info_pane_t3

0xa0ce,	// (0x00055070) listscroll_midp_info_pane_t4_ParamLimits

0xa0ce,	// (0x00055070) listscroll_midp_info_pane_t4

0x0003,

0xf82f,	// (0x0005a7d1) listscroll_midp_info_pane_t_ParamLimits

0xf82f,	// (0x0005a7d1) listscroll_midp_info_pane_t

0x8970,	// (0x00053912) scroll_pane_cp21

0x9fdc,	// (0x00054f7e) form_midp_field_choice_group_pane

0x9fe5,	// (0x00054f87) form_midp_field_text_pane

0xa024,	// (0x00054fc6) form_midp_field_time_pane

0xa02c,	// (0x00054fce) form_midp_gauge_slider_pane

0xa035,	// (0x00054fd7) form_midp_gauge_wait_pane

0x77da,	// (0x0005277c) form_midp_image_pane

0x6201,	// (0x000511a3) list_single_midp_pane_ParamLimits

0x6201,	// (0x000511a3) list_single_midp_pane

0x9f94,	// (0x00054f36) form_midp_field_text_pane_t1

0x9d5e,	// (0x00054d00) input_focus_pane_cp050

0x9fcb,	// (0x00054f6d) list_midp_form_text_pane

0x9f63,	// (0x00054f05) form_midp_field_choice_group_pane_t1

0x9f71,	// (0x00054f13) input_focus_pane_cp051

0x9f85,	// (0x00054f27) list_midp_choice_pane

0x77da,	// (0x0005277c) status_idle_pane

0x9f47,	// (0x00054ee9) form_midp_field_time_pane_t1

0x77d0,	// (0x00052772) wait_anim_pane_g2_copy1

0x9f55,	// (0x00054ef7) form_midp_field_time_pane_t2

0x0001,

0x95b0,	// (0x00054552) aid_navinavi_width_2_pane

0xf82a,	// (0x0005a7cc) form_midp_field_time_pane_t

0x77da,	// (0x0005277c) input_focus_pane_cp052

0x77da,	// (0x0005277c) bg_input_focus_pane_cp040

0x9f07,	// (0x00054ea9) form_midp_gauge_slider_pane_t1

0x9f15,	// (0x00054eb7) form_midp_gauge_slider_pane_t2

0x9f23,	// (0x00054ec5) form_midp_gauge_slider_pane_t3

0x9f31,	// (0x00054ed3) form_midp_gauge_slider_pane_t4

0x0003,

0xf821,	// (0x0005a7c3) form_midp_gauge_slider_pane_t

0x9f3f,	// (0x00054ee1) form_midp_slider_pane

0x78ba,	// (0x0005285c) bg_input_focus_pane_cp041_ParamLimits

0x78ba,	// (0x0005285c) bg_input_focus_pane_cp041

0x9ed4,	// (0x00054e76) form_midp_gauge_wait_pane_t1_ParamLimits

0x9ed4,	// (0x00054e76) form_midp_gauge_wait_pane_t1

0x9ee6,	// (0x00054e88) form_midp_gauge_wait_pane_t2_ParamLimits

0x9ee6,	// (0x00054e88) form_midp_gauge_wait_pane_t2

0x0001,

0xf81c,	// (0x0005a7be) form_midp_gauge_wait_pane_t_ParamLimits

0xf81c,	// (0x0005a7be) form_midp_gauge_wait_pane_t

0x9ef8,	// (0x00054e9a) form_midp_wait_pane_ParamLimits

0x9ef8,	// (0x00054e9a) form_midp_wait_pane

0x9e9e,	// (0x00054e40) form_midp_image_pane_g1

0x9ea7,	// (0x00054e49) form_midp_image_pane_t1

0x9eb6,	// (0x00054e58) form_midp_image_pane_t2

0x9ec5,	// (0x00054e67) form_midp_image_pane_t3

0x0002,

0xf815,	// (0x0005a7b7) form_midp_image_pane_t

0x9e95,	// (0x00054e37) list_single_midp_pane_g1

0x61f2,	// (0x00051194) list_single_midp_pane_t1

0x9e6d,	// (0x00054e0f) list_midp_form_item_pane_ParamLimits

0x9e6d,	// (0x00054e0f) list_midp_form_item_pane

0x9558,	// (0x000544fa) list_midp_form_item_pane_t1

0x9567,	// (0x00054509) midp_ticker_pane_g1

0x9573,	// (0x00054515) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0005a6ff) midp_ticker_pane_g

0x957f,	// (0x00054521) midp_ticker_pane_t1

0xb267,	// (0x00056209) midp_editing_number_pane_t1

0xb245,	// (0x000561e7) midp_editing_number_pane

0xb254,	// (0x000561f6) midp_ticker_pane

0xb006,	// (0x00055fa8) ai_message_heading_pane

0x77da,	// (0x0005277c) bg_popup_window_pane_cp14

0xb00e,	// (0x00055fb0) listscroll_ai_message_pane

0xaf90,	// (0x00055f32) ai_message_heading_pane_g1_ParamLimits

0xaf90,	// (0x00055f32) ai_message_heading_pane_g1

0xaf9c,	// (0x00055f3e) ai_message_heading_pane_g2_ParamLimits

0xaf9c,	// (0x00055f3e) ai_message_heading_pane_g2

0xafa8,	// (0x00055f4a) ai_message_heading_pane_g3_ParamLimits

0xafa8,	// (0x00055f4a) ai_message_heading_pane_g3

0xafb4,	// (0x00055f56) ai_message_heading_pane_g4_ParamLimits

0xafb4,	// (0x00055f56) ai_message_heading_pane_g4

0x0003,

0xf956,	// (0x0005a8f8) ai_message_heading_pane_g_ParamLimits

0xf956,	// (0x0005a8f8) ai_message_heading_pane_g

0xafc0,	// (0x00055f62) ai_message_heading_pane_t1_ParamLimits

0xafc0,	// (0x00055f62) ai_message_heading_pane_t1

0xafda,	// (0x00055f7c) ai_message_heading_pane_t2_ParamLimits

0xafda,	// (0x00055f7c) ai_message_heading_pane_t2

0x0001,

0xf95f,	// (0x0005a901) ai_message_heading_pane_t_ParamLimits

0xf95f,	// (0x0005a901) ai_message_heading_pane_t

0xafec,	// (0x00055f8e) bg_popup_heading_pane_cp1_ParamLimits

0xafec,	// (0x00055f8e) bg_popup_heading_pane_cp1

0xaf7e,	// (0x00055f20) list_ai_message_pane_ParamLimits

0xaf7e,	// (0x00055f20) list_ai_message_pane

0x8970,	// (0x00053912) scroll_pane_cp10

0xaf1a,	// (0x00055ebc) list_ai_message_pane_g1

0xaf22,	// (0x00055ec4) list_ai_message_pane_g2

0x0001,

0xf933,	// (0x0005a8d5) list_ai_message_pane_g

0xaf2a,	// (0x00055ecc) list_ai_message_pane_t1_ParamLimits

0xaf2a,	// (0x00055ecc) list_ai_message_pane_t1

0xaf3f,	// (0x00055ee1) list_ai_message_pane_t2_ParamLimits

0xaf3f,	// (0x00055ee1) list_ai_message_pane_t2

0xaf54,	// (0x00055ef6) list_ai_message_pane_t3_ParamLimits

0xaf54,	// (0x00055ef6) list_ai_message_pane_t3

0xaf69,	// (0x00055f0b) list_ai_message_pane_t4_ParamLimits

0xaf69,	// (0x00055f0b) list_ai_message_pane_t4

0x0003,

0xf938,	// (0x0005a8da) list_ai_message_pane_t_ParamLimits

0xf938,	// (0x0005a8da) list_ai_message_pane_t

0xaf05,	// (0x00055ea7) cell_ai_soft_ind_pane_ParamLimits

0xaf05,	// (0x00055ea7) cell_ai_soft_ind_pane

0x9591,	// (0x00054533) cell_ai_soft_ind_pane_g1_ParamLimits

0x9591,	// (0x00054533) cell_ai_soft_ind_pane_g1

0x77da,	// (0x0005277c) grid_highlight_cp1

0x959e,	// (0x00054540) text_secondary_cp56_ParamLimits

0x959e,	// (0x00054540) text_secondary_cp56

0xaeda,	// (0x00055e7c) example_general_pane_ParamLimits

0xaeda,	// (0x00055e7c) example_general_pane

0xaee6,	// (0x00055e88) example_parent_pane_g1_ParamLimits

0xaee6,	// (0x00055e88) example_parent_pane_g1

0xaef2,	// (0x00055e94) example_parent_pane_t1_ParamLimits

0xaef2,	// (0x00055e94) example_parent_pane_t1

0x5dc4,	// (0x00050d66) popup_preview_text_window_ParamLimits

0x5dc4,	// (0x00050d66) popup_preview_text_window

0x93c7,	// (0x00054369) list_single_pane_cp2_g4

0x7beb,	// (0x00052b8d) bg_popup_preview_window_pane_ParamLimits

0x7beb,	// (0x00052b8d) bg_popup_preview_window_pane

0xac26,	// (0x00055bc8) popup_preview_text_window_t1_ParamLimits

0xac26,	// (0x00055bc8) popup_preview_text_window_t1

0xac44,	// (0x00055be6) popup_preview_text_window_t2_ParamLimits

0xac44,	// (0x00055be6) popup_preview_text_window_t2

0xac8d,	// (0x00055c2f) popup_preview_text_window_t3_ParamLimits

0xac8d,	// (0x00055c2f) popup_preview_text_window_t3

0xacd2,	// (0x00055c74) popup_preview_text_window_t4_ParamLimits

0xacd2,	// (0x00055c74) popup_preview_text_window_t4

0x0004,

0xf907,	// (0x0005a8a9) popup_preview_text_window_t_ParamLimits

0xf907,	// (0x0005a8a9) popup_preview_text_window_t

0xad50,	// (0x00055cf2) scroll_pane_cp11

0x9cea,	// (0x00054c8c) bg_popup_preview_window_pane_g1

0xabe6,	// (0x00055b88) bg_popup_preview_window_pane_g2

0xabee,	// (0x00055b90) bg_popup_preview_window_pane_g3

0xabf6,	// (0x00055b98) bg_popup_preview_window_pane_g4

0xabfe,	// (0x00055ba0) bg_popup_preview_window_pane_g5

0xac06,	// (0x00055ba8) bg_popup_preview_window_pane_g6

0xac0e,	// (0x00055bb0) bg_popup_preview_window_pane_g7

0xac16,	// (0x00055bb8) bg_popup_preview_window_pane_g8

0x4873,	// (0x0004f815) aid_popup_width_pane

0x5da2,	// (0x00050d44) popup_midp_note_alarm_window_ParamLimits

0x5da2,	// (0x00050d44) popup_midp_note_alarm_window

0x8800,	// (0x000537a2) data_form_pane_ParamLimits

0x520d,	// (0x000501af) form_field_data_pane_g1

0x5217,	// (0x000501b9) form_field_data_pane_t1_ParamLimits

0x880c,	// (0x000537ae) input_focus_pane_ParamLimits

0x522f,	// (0x000501d1) data_form_wide_pane_ParamLimits

0x5240,	// (0x000501e2) form_field_data_wide_pane_g1

0x524c,	// (0x000501ee) form_field_data_wide_pane_t1_ParamLimits

0x8571,	// (0x00053513) input_focus_pane_cp6_ParamLimits

0x891d,	// (0x000538bf) input_popup_find_pane_g1_ParamLimits

0x891d,	// (0x000538bf) input_popup_find_pane_g1

0x54c2,	// (0x00050464) aid_navi_side_left_pane

0x54d7,	// (0x00050479) aid_navi_side_right_pane

0xa5ff,	// (0x000555a1) bg_popup_window_pane_cp30_ParamLimits

0xa5ff,	// (0x000555a1) bg_popup_window_pane_cp30

0xa679,	// (0x0005561b) popup_midp_note_alarm_window_g1_ParamLimits

0xa679,	// (0x0005561b) popup_midp_note_alarm_window_g1

0xa6a9,	// (0x0005564b) popup_midp_note_alarm_window_t1_ParamLimits

0xa6a9,	// (0x0005564b) popup_midp_note_alarm_window_t1

0xa74a,	// (0x000556ec) popup_midp_note_alarm_window_t2_ParamLimits

0xa74a,	// (0x000556ec) popup_midp_note_alarm_window_t2

0xa7f8,	// (0x0005579a) popup_midp_note_alarm_window_t3_ParamLimits

0xa7f8,	// (0x0005579a) popup_midp_note_alarm_window_t3

0xa82a,	// (0x000557cc) popup_midp_note_alarm_window_t4_ParamLimits

0xa82a,	// (0x000557cc) popup_midp_note_alarm_window_t4

0xa850,	// (0x000557f2) popup_midp_note_alarm_window_t5_ParamLimits

0xa850,	// (0x000557f2) popup_midp_note_alarm_window_t5

0x000a,

0xf8a4,	// (0x0005a846) popup_midp_note_alarm_window_t_ParamLimits

0xf8a4,	// (0x0005a846) popup_midp_note_alarm_window_t

0xa8fc,	// (0x0005589e) wait_bar_pane_cp1_ParamLimits

0xa8fc,	// (0x0005589e) wait_bar_pane_cp1

0x77da,	// (0x0005277c) wait_anim_pane_copy1

0x77da,	// (0x0005277c) wait_border_pane_copy1

0xa2e5,	// (0x00055287) wait_border_pane_g1_copy1

0x5266,	// (0x00050208) form_field_popup_pane_g1

0x526e,	// (0x00050210) form_field_popup_pane_t1_ParamLimits

0x880c,	// (0x000537ae) input_focus_pane_cp7_ParamLimits

0x882e,	// (0x000537d0) list_form_pane_ParamLimits

0x5286,	// (0x00050228) form_field_popup_wide_pane_g1

0x528e,	// (0x00050230) form_field_popup_wide_pane_t1_ParamLimits

0x880c,	// (0x000537ae) input_focus_pane_cp8_ParamLimits

0x883a,	// (0x000537dc) list_form_wide_pane_ParamLimits

0xb39c,	// (0x0005633e) aid_size_cell_graphic_pane

0x5318,	// (0x000502ba) data_form_pane_t1_ParamLimits

0x6480,	// (0x00051422) data_form_wide_pane_t1_ParamLimits

0x98ab,	// (0x0005484d) bg_status_flat_pane

0x781a,	// (0x000527bc) title_pane_t1_ParamLimits

0x7882,	// (0x00052824) title_pane_t2_ParamLimits

0x78a8,	// (0x0005284a) title_pane_t3_ParamLimits

0xf557,	// (0x0005a4f9) title_pane_t_ParamLimits

0x8def,	// (0x00053d91) level_1_signal_ParamLimits

0x8e01,	// (0x00053da3) level_2_signal_ParamLimits

0x8e14,	// (0x00053db6) level_3_signal_ParamLimits

0x8e27,	// (0x00053dc9) level_4_signal_ParamLimits

0x8e3a,	// (0x00053ddc) level_5_signal_ParamLimits

0x8e4d,	// (0x00053def) level_6_signal_ParamLimits

0x8e60,	// (0x00053e02) level_7_signal_ParamLimits

0x8def,	// (0x00053d91) level_1_battery_ParamLimits

0x8e01,	// (0x00053da3) level_2_battery_ParamLimits

0x8e14,	// (0x00053db6) level_3_battery_ParamLimits

0x8e27,	// (0x00053dc9) level_4_battery_ParamLimits

0x8e3a,	// (0x00053ddc) level_5_battery_ParamLimits

0x8e4d,	// (0x00053def) level_6_battery_ParamLimits

0x8e60,	// (0x00053e02) level_7_battery_ParamLimits

0xa504,	// (0x000554a6) bg_status_flat_pane_g1

0xa50c,	// (0x000554ae) bg_status_flat_pane_g2

0xa514,	// (0x000554b6) bg_status_flat_pane_g3

0xa51c,	// (0x000554be) bg_status_flat_pane_g4

0xa524,	// (0x000554c6) bg_status_flat_pane_g5

0xa52c,	// (0x000554ce) bg_status_flat_pane_g6

0xa534,	// (0x000554d6) bg_status_flat_pane_g7

0x78d0,	// (0x00052872) tabs_3_active_pane_t1_ParamLimits

0x78d0,	// (0x00052872) tabs_3_passive_pane_t1_ParamLimits

0x78ea,	// (0x0005288c) tabs_4_active_pane_t1_ParamLimits

0x78ea,	// (0x0005288c) tabs_4_1_passive_pane_t1_ParamLimits

0x89b1,	// (0x00053953) tabs_2_active_pane_t1_ParamLimits

0x89b1,	// (0x00053953) tabs_2_passive_pane_t1_ParamLimits

0x89c3,	// (0x00053965) bg_active_tab_pane_cp4_ParamLimits

0x89d1,	// (0x00053973) tabs_2_long_active_pane_t1_ParamLimits

0x89e4,	// (0x00053986) bg_passive_tab_pane_cp4_ParamLimits

0x60d3,	// (0x00051075) list_single_midp_graphic_pane_t1_ParamLimits

0x89c3,	// (0x00053965) bg_active_tab_pane_cp5_ParamLimits

0x89f0,	// (0x00053992) tabs_3_long_active_pane_t1_ParamLimits

0x89e4,	// (0x00053986) bg_passive_tab_pane_cp5_ParamLimits

0x60d3,	// (0x00051075) list_single_midp_graphic_pane_t1

0x98ab,	// (0x0005484d) bg_status_flat_pane_ParamLimits

0x996e,	// (0x00054910) indicator_pane_cp2_ParamLimits

0x996e,	// (0x00054910) indicator_pane_cp2

0x9a99,	// (0x00054a3b) navi_pane_srt_ParamLimits

0x9a99,	// (0x00054a3b) navi_pane_srt

0x9ac9,	// (0x00054a6b) popup_clock_digital_analogue_window_cp1

0x7997,	// (0x00052939) indicator_pane_t1

0x9496,	// (0x00054438) copy_highlight_pane

0x9496,	// (0x00054438) cursor_graphics_pane

0x9496,	// (0x00054438) graphic_within_text_pane

0x9496,	// (0x00054438) link_highlight_pane

0xad13,	// (0x00055cb5) popup_preview_text_window_t5_ParamLimits

0xad13,	// (0x00055cb5) popup_preview_text_window_t5

0x95b8,	// (0x0005455a) cursor_digital_pane

0x95b8,	// (0x0005455a) cursor_primary_pane

0x95c9,	// (0x0005456b) cursor_primary_small_pane

0x95d1,	// (0x00054573) cursor_secondary_pane

0x95d9,	// (0x0005457b) cursor_title_pane

0x95b8,	// (0x0005455a) link_highlight_digital_pane

0x95c0,	// (0x00054562) link_highlight_primary_pane

0x95c9,	// (0x0005456b) link_highlight_primary_small_pane

0x95d1,	// (0x00054573) link_highlight_secondary_pane

0x95d9,	// (0x0005457b) link_highlight_title_pane

0x95b8,	// (0x0005455a) copy_highlight_digital_pane

0x95b8,	// (0x0005455a) copy_highlight_primary_pane

0x95c9,	// (0x0005456b) copy_highlight_primary_small_pane

0x95d1,	// (0x00054573) copy_highlight_secondary_pane

0x95d9,	// (0x0005457b) copy_highlight_title_pane

0x95d1,	// (0x00054573) graphic_text_digital_pane

0xa5a2,	// (0x00055544) graphic_text_primary_pane

0xa5ab,	// (0x0005554d) graphic_text_primary_small_pane

0x95c9,	// (0x0005456b) graphic_text_secondary_pane

0x95b8,	// (0x0005455a) graphic_text_title_pane

0x95e1,	// (0x00054583) cursor_primary_pane_g1

0xa594,	// (0x00055536) cursor_text_primary_t1

0xa57c,	// (0x0005551e) cursor_primary_small_pane_g1

0xa586,	// (0x00055528) cursor_text_primary_small_t1

0xa564,	// (0x00055506) cursor_primary_small_pane_g1_copy1

0xa56e,	// (0x00055510) cursor_text_primary_small_t1_copy1

0xa54c,	// (0x000554ee) cursor_text_title_t1

0xa55a,	// (0x000554fc) cursor_title_pane_g1

0x95e1,	// (0x00054583) cursor_digital_pane_g1

0x95eb,	// (0x0005458d) cursor_text_digital_t1

0x9610,	// (0x000545b2) link_highlight_primary_pane_g1

0xa4f5,	// (0x00055497) link_highlight_primary_pane_t1

0x95f9,	// (0x0005459b) link_highlight_primary_small_pane_g1

0x9601,	// (0x000545a3) link_highlight_primary_small_pane_t1

0x9610,	// (0x000545b2) link_highlight_secondary_pane_g1

0x9618,	// (0x000545ba) link_highlight_secondary_pane_t1

0xa469,	// (0x0005540b) link_highlight_title_pane_g1

0xa471,	// (0x00055413) link_highlight_title_pane_t1

0xa452,	// (0x000553f4) link_highlight_digital_pane_g1

0xa45a,	// (0x000553fc) link_highlight_digital_pane_t1

0xa32a,	// (0x000552cc) copy_highlight_primary_pane_g1

0xa332,	// (0x000552d4) copy_highlight_primary_pane_t1

0xa304,	// (0x000552a6) copy_highlight_primary_small_pane_g1

0xa31b,	// (0x000552bd) copy_highlight_primary_small_pane_t1

0x9627,	// (0x000545c9) copy_highlight_secondary_pane_g1

0x962f,	// (0x000545d1) copy_highlight_secondary_pane_t1

0xa304,	// (0x000552a6) copy_highlight_title_pane_g1

0xa30c,	// (0x000552ae) copy_highlight_title_pane_t1

0xa32a,	// (0x000552cc) copy_highlight_digital_pane_g1

0xb566,	// (0x00056508) copy_highlight_digital_pane_t1

0xb4ba,	// (0x0005645c) graphic_text_primary_pane_g1

0xb54a,	// (0x000564ec) graphic_text_primary_pane_t1

0xb558,	// (0x000564fa) graphic_text_primary_pane_t2

0x0001,

0xf9d3,	// (0x0005a975) graphic_text_primary_pane_t

0xb526,	// (0x000564c8) graphic_text_primary_small_pane_g1

0xb52e,	// (0x000564d0) graphic_text_primary_small_pane_t1

0xb53c,	// (0x000564de) graphic_text_primary_small_pane_t2

0x0001,

0xf9ce,	// (0x0005a970) graphic_text_primary_small_pane_t

0xb502,	// (0x000564a4) graphic_text_secondary_pane_g1

0xb50a,	// (0x000564ac) graphic_text_secondary_pane_t1

0xb518,	// (0x000564ba) graphic_text_secondary_pane_t2

0x0001,

0xf9c9,	// (0x0005a96b) graphic_text_secondary_pane_t

0xb4de,	// (0x00056480) graphic_text_title_pane_g1

0xb4e6,	// (0x00056488) graphic_text_title_pane_t1

0xb4f4,	// (0x00056496) graphic_text_title_pane_t2

0x0001,

0xf9c4,	// (0x0005a966) graphic_text_title_pane_t

0xb4ba,	// (0x0005645c) graphic_text_digital_pane_g1

0xb4c2,	// (0x00056464) graphic_text_digital_pane_t1

0xb4d0,	// (0x00056472) graphic_text_digital_pane_t2

0x0001,

0xf9bf,	// (0x0005a961) graphic_text_digital_pane_t

0x78ba,	// (0x0005285c) navi_icon_pane_srt_ParamLimits

0x78ba,	// (0x0005285c) navi_icon_pane_srt

0x77da,	// (0x0005277c) navi_midp_pane_srt

0x77da,	// (0x0005277c) navi_navi_pane_srt

0x78ba,	// (0x0005285c) navi_text_pane_srt_ParamLimits

0x78ba,	// (0x0005285c) navi_text_pane_srt

0xb485,	// (0x00056427) navi_navi_icon_text_pane_srt

0xb48d,	// (0x0005642f) navi_navi_pane_srt_g1_ParamLimits

0xb48d,	// (0x0005642f) navi_navi_pane_srt_g1

0xb49f,	// (0x00056441) navi_navi_pane_srt_g2_ParamLimits

0xb49f,	// (0x00056441) navi_navi_pane_srt_g2

0x0001,

0xf9ba,	// (0x0005a95c) navi_navi_pane_srt_g_ParamLimits

0xf9ba,	// (0x0005a95c) navi_navi_pane_srt_g

0xb4b1,	// (0x00056453) navi_navi_tabs_pane_srt

0xb485,	// (0x00056427) navi_navi_text_pane_srt

0xb485,	// (0x00056427) navi_navi_volume_pane_srt

0xb476,	// (0x00056418) navi_navi_text_pane_srt_t1

0x65c1,	// (0x00051563) navi_navi_volume_pane_srt_g1

0x65c9,	// (0x0005156b) volume_small_pane_srt_ParamLimits

0x65c9,	// (0x0005156b) volume_small_pane_srt

0x5810,	// (0x000507b2) volume_small_pane_srt_g1_ParamLimits

0x5810,	// (0x000507b2) volume_small_pane_srt_g1

0x5820,	// (0x000507c2) volume_small_pane_srt_g2_ParamLimits

0x5820,	// (0x000507c2) volume_small_pane_srt_g2

0x5831,	// (0x000507d3) volume_small_pane_srt_g3_ParamLimits

0x5831,	// (0x000507d3) volume_small_pane_srt_g3

0x5842,	// (0x000507e4) volume_small_pane_srt_g4_ParamLimits

0x5842,	// (0x000507e4) volume_small_pane_srt_g4

0x5853,	// (0x000507f5) volume_small_pane_srt_g5_ParamLimits

0x5853,	// (0x000507f5) volume_small_pane_srt_g5

0x5864,	// (0x00050806) volume_small_pane_srt_g6_ParamLimits

0x5864,	// (0x00050806) volume_small_pane_srt_g6

0x5875,	// (0x00050817) volume_small_pane_srt_g7_ParamLimits

0x5875,	// (0x00050817) volume_small_pane_srt_g7

0x5886,	// (0x00050828) volume_small_pane_srt_g8_ParamLimits

0x5886,	// (0x00050828) volume_small_pane_srt_g8

0x5897,	// (0x00050839) volume_small_pane_srt_g9_ParamLimits

0x5897,	// (0x00050839) volume_small_pane_srt_g9

0x58a8,	// (0x0005084a) volume_small_pane_srt_g10_ParamLimits

0x58a8,	// (0x0005084a) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0005a704) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0005a704) volume_small_pane_srt_g

0x836b,	// (0x0005330d) query_popup_data_pane_cp2

0xb45c,	// (0x000563fe) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb45c,	// (0x000563fe) navi_navi_icon_text_pane_srt_t1

0xa5a2,	// (0x00055544) navi_tabs_2_long_pane_srt

0xa5a2,	// (0x00055544) navi_tabs_2_pane_srt

0xa5a2,	// (0x00055544) navi_tabs_3_long_pane_srt

0xa5a2,	// (0x00055544) navi_tabs_3_pane_srt

0xa5a2,	// (0x00055544) navi_tabs_4_pane_srt

0x65a1,	// (0x00051543) tabs_2_active_pane_srt_ParamLimits

0x65a1,	// (0x00051543) tabs_2_active_pane_srt

0x65b1,	// (0x00051553) tabs_2_passive_pane_srt_ParamLimits

0x65b1,	// (0x00051553) tabs_2_passive_pane_srt

0x97d4,	// (0x00054776) bg_passive_tab_pane_cp1_srt_ParamLimits

0x97d4,	// (0x00054776) bg_passive_tab_pane_cp1_srt

0xb428,	// (0x000563ca) bg_passive_tab_pane_g1_cp1_srt

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp1_srt

0xb431,	// (0x000563d3) bg_passive_tab_pane_g3_cp1_srt

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp1_srt_ParamLimits

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp1_srt

0xb43a,	// (0x000563dc) tabs_2_active_pane_srt_g1

0xb442,	// (0x000563e4) tabs_2_active_pane_srt_t1_ParamLimits

0xb442,	// (0x000563e4) tabs_2_active_pane_srt_t1

0xb428,	// (0x000563ca) bg_active_tab_pane_g1_cp1_srt

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp1_srt

0xb431,	// (0x000563d3) bg_active_tab_pane_g3_cp1_srt

0x656e,	// (0x00051510) tabs_3_active_pane_srt_ParamLimits

0x656e,	// (0x00051510) tabs_3_active_pane_srt

0x657f,	// (0x00051521) tabs_3_passive_pane_cp_srt_ParamLimits

0x657f,	// (0x00051521) tabs_3_passive_pane_cp_srt

0x6590,	// (0x00051532) tabs_3_passive_pane_srt_ParamLimits

0x6590,	// (0x00051532) tabs_3_passive_pane_srt

0x97d4,	// (0x00054776) bg_passive_tab_pane_cp2_srt_ParamLimits

0x97d4,	// (0x00054776) bg_passive_tab_pane_cp2_srt

0x963e,	// (0x000545e0) bg_passive_tab_pane_g1_cp2_srt

0x90d8,	// (0x0005407a) bg_passive_tab_pane_g2_cp2_srt

0x9647,	// (0x000545e9) bg_passive_tab_pane_g3_cp2_srt

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp2_srt_ParamLimits

0x78ba,	// (0x0005285c) bg_active_tab_pane_cp2_srt

0xb40e,	// (0x000563b0) tabs_3_active_pane_srt_g1

0xb416,	// (0x000563b8) tabs_3_active_pane_srt_t1_ParamLimits

0xb416,	// (0x000563b8) tabs_3_active_pane_srt_t1

0x963e,	// (0x000545e0) bg_active_tab_pane_g1_cp2_srt

0x90d8,	// (0x0005407a) bg_active_tab_pane_g2_cp2_srt

0x9647,	// (0x000545e9) bg_active_tab_pane_g3_cp2_srt

0x6526,	// (0x000514c8) tabs_4_active_pane_srt_ParamLimits

0x6526,	// (0x000514c8) tabs_4_active_pane_srt

0x6538,	// (0x000514da) tabs_4_passive_pane_cp2_srt_ParamLimits

0x6538,	// (0x000514da) tabs_4_passive_pane_cp2_srt

0x5a0d,	// (0x000509af) aid_size_cell_toolbar

0x89e4,	// (0x00053986) main_idle_act_pane_ParamLimits

0x5bd8,	// (0x00050b7a) popup_large_graphic_colour_window_ParamLimits

0x5f3f,	// (0x00050ee1) popup_toolbar_window_ParamLimits

0x5f3f,	// (0x00050ee1) popup_toolbar_window

0xb276,	// (0x00056218) list_single_graphic_2heading_pane_ParamLimits

0xb276,	// (0x00056218) list_single_graphic_2heading_pane

0x8ba0,	// (0x00053b42) aid_size_cell_apps_grid_lsc_pane

0x8bb2,	// (0x00053b54) aid_size_cell_apps_grid_prt_pane

0x97d4,	// (0x00054776) bg_wml_button_pane_cp1_ParamLimits

0x97d4,	// (0x00054776) bg_wml_button_pane_cp1

0x9f94,	// (0x00054f36) form_midp_field_text_pane_t1_ParamLimits

0x9d5e,	// (0x00054d00) input_focus_pane_cp050_ParamLimits

0x9fcb,	// (0x00054f6d) list_midp_form_text_pane_ParamLimits

0x9f71,	// (0x00054f13) input_focus_pane_cp051_ParamLimits

0x9f85,	// (0x00054f27) list_midp_choice_pane_ParamLimits

0x9e17,	// (0x00054db9) list_single_2graphic_pane_cp3_ParamLimits

0x9e17,	// (0x00054db9) list_single_2graphic_pane_cp3

0x9e3b,	// (0x00054ddd) list_single_midp_graphic_pane_ParamLimits

0x9e3b,	// (0x00054ddd) list_single_midp_graphic_pane

0x47fb,	// (0x0004f79d) list_single_graphic_2heading_pane_g1_ParamLimits

0x47fb,	// (0x0004f79d) list_single_graphic_2heading_pane_g1

0x4807,	// (0x0004f7a9) list_single_graphic_2heading_pane_g4_ParamLimits

0x4807,	// (0x0004f7a9) list_single_graphic_2heading_pane_g4

0x4813,	// (0x0004f7b5) list_single_graphic_2heading_pane_g5_ParamLimits

0x4813,	// (0x0004f7b5) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0005a757) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0005a757) list_single_graphic_2heading_pane_g

0x481f,	// (0x0004f7c1) list_single_graphic_2heading_pane_t1_ParamLimits

0x481f,	// (0x0004f7c1) list_single_graphic_2heading_pane_t1

0x4833,	// (0x0004f7d5) list_single_graphic_2heading_pane_t2_ParamLimits

0x4833,	// (0x0004f7d5) list_single_graphic_2heading_pane_t2

0x484f,	// (0x0004f7f1) list_single_graphic_2heading_pane_t3_ParamLimits

0x484f,	// (0x0004f7f1) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0005a75e) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0005a75e) list_single_graphic_2heading_pane_t

0x9c28,	// (0x00054bca) bg_popup_sub_pane_cp2

0x9c52,	// (0x00054bf4) grid_toobar_pane

0x5fec,	// (0x00050f8e) cell_toolbar_pane_ParamLimits

0x5fec,	// (0x00050f8e) cell_toolbar_pane

0x9c8e,	// (0x00054c30) cell_toolbar_pane_g1_ParamLimits

0x9c8e,	// (0x00054c30) cell_toolbar_pane_g1

0x9ca2,	// (0x00054c44) cell_toolbar_pane_g2_ParamLimits

0x9ca2,	// (0x00054c44) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0005a76c) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0005a76c) cell_toolbar_pane_g

0x9cc4,	// (0x00054c66) grid_highlight_pane_cp2_ParamLimits

0x9cc4,	// (0x00054c66) grid_highlight_pane_cp2

0x9cde,	// (0x00054c80) toolbar_button_pane

0x9cea,	// (0x00054c8c) toolbar_button_pane_g1

0x9cf2,	// (0x00054c94) toolbar_button_pane_g2

0x9cfa,	// (0x00054c9c) toolbar_button_pane_g3

0x9d02,	// (0x00054ca4) toolbar_button_pane_g4

0x9d0a,	// (0x00054cac) toolbar_button_pane_g5

0x9d12,	// (0x00054cb4) toolbar_button_pane_g6

0x9d1a,	// (0x00054cbc) toolbar_button_pane_g7

0x9d22,	// (0x00054cc4) toolbar_button_pane_g8

0x9d2a,	// (0x00054ccc) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0005a771) toolbar_button_pane_g

0x6046,	// (0x00050fe8) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6046,	// (0x00050fe8) list_single_2graphic_pane_g1_cp3

0x6052,	// (0x00050ff4) list_single_2graphic_pane_g2_cp3_ParamLimits

0x6052,	// (0x00050ff4) list_single_2graphic_pane_g2_cp3

0x6063,	// (0x00051005) list_single_2graphic_pane_g3_cp3

0x606b,	// (0x0005100d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x606b,	// (0x0005100d) list_single_2graphic_pane_g4_cp3

0x6077,	// (0x00051019) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6077,	// (0x00051019) list_single_2graphic_pane_t1_cp3

0x60c7,	// (0x00051069) list_single_midp_graphic_pane_g2_ParamLimits

0x60c7,	// (0x00051069) list_single_midp_graphic_pane_g2

0x47f3,	// (0x0004f795) aid_zoom_text_primary

0x5a15,	// (0x000509b7) aid_zoom_text_secondary

0x96f8,	// (0x0005469a) status_small_pane_g7_ParamLimits

0x96f8,	// (0x0005469a) status_small_pane_g7

0x971b,	// (0x000546bd) status_small_pane_t1_ParamLimits

0x77f1,	// (0x00052793) title_pane_g2

0x0003,

0xf54e,	// (0x0005a4f0) title_pane_g

0x840f,	// (0x000533b1) aid_size_cell_colour_1_pane_ParamLimits

0x840f,	// (0x000533b1) aid_size_cell_colour_1_pane

0x8423,	// (0x000533c5) aid_size_cell_colour_2_pane_ParamLimits

0x8423,	// (0x000533c5) aid_size_cell_colour_2_pane

0x8437,	// (0x000533d9) aid_size_cell_colour_3_pane_ParamLimits

0x8437,	// (0x000533d9) aid_size_cell_colour_3_pane

0x844b,	// (0x000533ed) aid_size_cell_colour_4_pane_ParamLimits

0x844b,	// (0x000533ed) aid_size_cell_colour_4_pane

0x53ff,	// (0x000503a1) title_pane_stacon_g1_ParamLimits

0x53ff,	// (0x000503a1) title_pane_stacon_g1

0xa389,	// (0x0005532b) popup_note_wait_window_g3_ParamLimits

0xa389,	// (0x0005532b) popup_note_wait_window_g3

0xa3ff,	// (0x000553a1) popup_note_wait_window_t5_ParamLimits

0xa3ff,	// (0x000553a1) popup_note_wait_window_t5

0x77da,	// (0x0005277c) main_feb_china_hwr_fs_writing_pane

0x5abb,	// (0x00050a5d) popup_feb_china_hwr_fs_window_ParamLimits

0x5abb,	// (0x00050a5d) popup_feb_china_hwr_fs_window

0x6155,	// (0x000510f7) aid_size_cell_hwr_fs_ParamLimits

0x6155,	// (0x000510f7) aid_size_cell_hwr_fs

0x9d5e,	// (0x00054d00) bg_popup_sub_pane_cp3_ParamLimits

0x9d5e,	// (0x00054d00) bg_popup_sub_pane_cp3

0x616a,	// (0x0005110c) grid_hwr_fs_pane_ParamLimits

0x616a,	// (0x0005110c) grid_hwr_fs_pane

0x6182,	// (0x00051124) linegrid_hwr_fs_pane_ParamLimits

0x6182,	// (0x00051124) linegrid_hwr_fs_pane

0x6192,	// (0x00051134) cell_hwr_fs_pane_ParamLimits

0x6192,	// (0x00051134) cell_hwr_fs_pane

0x9d6a,	// (0x00054d0c) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d6a,	// (0x00054d0c) linegrid_hwr_fs_pane_g1

0x9d76,	// (0x00054d18) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d76,	// (0x00054d18) linegrid_hwr_fs_pane_g2

0x9d88,	// (0x00054d2a) linegrid_hwr_fs_pane_g3_ParamLimits

0x9d88,	// (0x00054d2a) linegrid_hwr_fs_pane_g3

0x61b4,	// (0x00051156) linegrid_hwr_fs_pane_g4_ParamLimits

0x61b4,	// (0x00051156) linegrid_hwr_fs_pane_g4

0x61ce,	// (0x00051170) linegrid_hwr_fs_pane_g5_ParamLimits

0x61ce,	// (0x00051170) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fa,	// (0x0005a79c) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fa,	// (0x0005a79c) linegrid_hwr_fs_pane_g

0x9d94,	// (0x00054d36) cell_hwr_fs_pane_g1_ParamLimits

0x9d94,	// (0x00054d36) cell_hwr_fs_pane_g1

0x9b5f,	// (0x00054b01) cell_hwr_fs_pane_g2_ParamLimits

0x9b5f,	// (0x00054b01) cell_hwr_fs_pane_g2

0x9daa,	// (0x00054d4c) cell_hwr_fs_pane_g3_ParamLimits

0x9daa,	// (0x00054d4c) cell_hwr_fs_pane_g3

0x9db7,	// (0x00054d59) cell_hwr_fs_pane_g4_ParamLimits

0x9db7,	// (0x00054d59) cell_hwr_fs_pane_g4

0x0003,

0xf805,	// (0x0005a7a7) cell_hwr_fs_pane_g_ParamLimits

0xf805,	// (0x0005a7a7) cell_hwr_fs_pane_g

0x61e4,	// (0x00051186) cell_hwr_fs_pane_t1

0x77da,	// (0x0005277c) grid_highlight_pane_cp6

0x77da,	// (0x0005277c) main_idle_act2_pane

0x8957,	// (0x000538f9) aid_inside_area_popup_secondary

0xaa36,	// (0x000559d8) aid_inside_area_window_primary_ParamLimits

0xaa36,	// (0x000559d8) aid_inside_area_window_primary

0xb575,	// (0x00056517) ai2_news_ticker_pane

0xb57d,	// (0x0005651f) aid_size_cell_ai1_link_ParamLimits

0xb57d,	// (0x0005651f) aid_size_cell_ai1_link

0xb597,	// (0x00056539) popup_ai2_data_window_ParamLimits

0xb597,	// (0x00056539) popup_ai2_data_window

0xb5ad,	// (0x0005654f) popup_ai2_link_window_ParamLimits

0xb5ad,	// (0x0005654f) popup_ai2_link_window

0x9d5e,	// (0x00054d00) bg_popup_sub_pane_cp4_ParamLimits

0x9d5e,	// (0x00054d00) bg_popup_sub_pane_cp4

0xb5c1,	// (0x00056563) grid_ai2_link_pane_ParamLimits

0xb5c1,	// (0x00056563) grid_ai2_link_pane

0xb5d8,	// (0x0005657a) popup_ai2_link_window_g1_ParamLimits

0xb5d8,	// (0x0005657a) popup_ai2_link_window_g1

0xb5e4,	// (0x00056586) popup_ai2_link_window_g2_ParamLimits

0xb5e4,	// (0x00056586) popup_ai2_link_window_g2

0x0001,

0xf9d8,	// (0x0005a97a) popup_ai2_link_window_g_ParamLimits

0xf9d8,	// (0x0005a97a) popup_ai2_link_window_g

0xb5f3,	// (0x00056595) ai2_mp_button_pane

0xb5fb,	// (0x0005659d) ai2_mp_volume_pane

0x9f71,	// (0x00054f13) bg_popup_sub_pane_cp5_ParamLimits

0x9f71,	// (0x00054f13) bg_popup_sub_pane_cp5

0xb603,	// (0x000565a5) heading_ai2_gene_pane_ParamLimits

0xb603,	// (0x000565a5) heading_ai2_gene_pane

0xb60f,	// (0x000565b1) list_ai2_gene_pane_ParamLimits

0xb60f,	// (0x000565b1) list_ai2_gene_pane

0xb657,	// (0x000565f9) cell_ai2_link_pane_ParamLimits

0xb657,	// (0x000565f9) cell_ai2_link_pane

0xb66d,	// (0x0005660f) cell_ai2_link_pane_g1

0x77da,	// (0x0005277c) grid_highlight_pane_cp7

0x65de,	// (0x00051580) ai2_mp_volume_pane_g1

0xb73d,	// (0x000566df) ai2_mp_volume_pane_g2

0xb6b2,	// (0x00056654) list_ai2_gene_pane_t1

0xb745,	// (0x000566e7) ai2_mp_volume_pane_g3

0x0002,

0xf9f1,	// (0x0005a993) ai2_mp_volume_pane_g

0x65e6,	// (0x00051588) volume_small_pane_cp3

0xb74d,	// (0x000566ef) aid_size_cell_ai2_button

0xb755,	// (0x000566f7) grid_ai2_button_pane

0xb75e,	// (0x00056700) cell_ai2_button_pane_ParamLimits

0xb75e,	// (0x00056700) cell_ai2_button_pane

0x77d0,	// (0x00052772) cell_ai2_button_pane_g1

0x77da,	// (0x0005277c) grid_highlight_pane_cp8

0xb6fd,	// (0x0005669f) ai2_gene_pane_t1_ParamLimits

0xb6fd,	// (0x0005669f) ai2_gene_pane_t1

0x5a03,	// (0x000509a5) aid_height_parent_landscape

0xb0ad,	// (0x0005604f) aid_height_set_list

0xb0be,	// (0x00056060) aid_size_parent

0xb39c,	// (0x0005633e) aid_size_cell_graphic_pane_ParamLimits

0xb61f,	// (0x000565c1) popup_ai2_data_window_g1_ParamLimits

0xb61f,	// (0x000565c1) popup_ai2_data_window_g1

0xb62b,	// (0x000565cd) ai2_news_ticker_pane_g1

0xb633,	// (0x000565d5) ai2_news_ticker_pane_g2

0x0001,

0xf9dd,	// (0x0005a97f) ai2_news_ticker_pane_g

0xb63b,	// (0x000565dd) ai2_news_ticker_pane_t1

0xb649,	// (0x000565eb) ai2_news_ticker_pane_t2

0x0001,

0xf9e2,	// (0x0005a984) ai2_news_ticker_pane_t

0xb676,	// (0x00056618) heading_ai2_gene_pane_g1

0xb67e,	// (0x00056620) heading_ai2_gene_pane_t1_ParamLimits

0xb67e,	// (0x00056620) heading_ai2_gene_pane_t1

0xb693,	// (0x00056635) list_highlight_pane_cp6

0xb69b,	// (0x0005663d) ai2_gene_pane_ParamLimits

0xb69b,	// (0x0005663d) ai2_gene_pane

0xb6c0,	// (0x00056662) list_ai2_gene_pane_t2

0x0001,

0xf9e7,	// (0x0005a989) list_ai2_gene_pane_t

0xb6ce,	// (0x00056670) list_highlight_pane_cp8_ParamLimits

0xb6ce,	// (0x00056670) list_highlight_pane_cp8

0xb6df,	// (0x00056681) ai2_gene_pane_g1_ParamLimits

0xb6df,	// (0x00056681) ai2_gene_pane_g1

0xb6f1,	// (0x00056693) ai2_gene_pane_g2_ParamLimits

0xb6f1,	// (0x00056693) ai2_gene_pane_g2

0x0001,

0xf9ec,	// (0x0005a98e) ai2_gene_pane_g_ParamLimits

0xf9ec,	// (0x0005a98e) ai2_gene_pane_g

0x8796,	// (0x00053738) scroll_pane_cp12

0x59c2,	// (0x00050964) control_pane_t3_ParamLimits

0x59c2,	// (0x00050964) control_pane_t3

0x970c,	// (0x000546ae) status_small_pane_g8_ParamLimits

0x970c,	// (0x000546ae) status_small_pane_g8

0x5ba1,	// (0x00050b43) popup_find_window_ParamLimits

0x5db6,	// (0x00050d58) popup_note_image_window_ParamLimits

0x601c,	// (0x00050fbe) list_double2_graphic_pane_vc_g1_ParamLimits

0x601c,	// (0x00050fbe) list_double2_graphic_pane_vc_g1

0x93cf,	// (0x00054371) list_double2_graphic_pane_vc_g2_ParamLimits

0x93cf,	// (0x00054371) list_double2_graphic_pane_vc_g2

0x7d4c,	// (0x00052cee) list_double2_graphic_pane_vc_g3_ParamLimits

0x7d4c,	// (0x00052cee) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005a765) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a765) list_double2_graphic_pane_vc_g

0x6028,	// (0x00050fca) list_double2_graphic_pane_vc_t1_ParamLimits

0x6028,	// (0x00050fca) list_double2_graphic_pane_vc_t1

0x93cf,	// (0x00054371) list_single_heading_pane_vc_g1_ParamLimits

0x93cf,	// (0x00054371) list_single_heading_pane_vc_g1

0x7d4c,	// (0x00052cee) list_single_heading_pane_vc_g2_ParamLimits

0x7d4c,	// (0x00052cee) list_single_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a786) list_single_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a786) list_single_heading_pane_vc_g

0x6093,	// (0x00051035) list_single_heading_pane_vc_t1_ParamLimits

0x6093,	// (0x00051035) list_single_heading_pane_vc_t1

0x60ab,	// (0x0005104d) list_single_heading_pane_vc_t2_ParamLimits

0x60ab,	// (0x0005104d) list_single_heading_pane_vc_t2

0x0001,

0xf7e9,	// (0x0005a78b) list_single_heading_pane_vc_t_ParamLimits

0xf7e9,	// (0x0005a78b) list_single_heading_pane_vc_t

0x7d58,	// (0x00052cfa) list_setting_number_pane_vc_g1_ParamLimits

0x7d58,	// (0x00052cfa) list_setting_number_pane_vc_g1

0x7d64,	// (0x00052d06) list_setting_number_pane_vc_g2_ParamLimits

0x7d64,	// (0x00052d06) list_setting_number_pane_vc_g2

0x0001,

0xf7ee,	// (0x0005a790) list_setting_number_pane_vc_g_ParamLimits

0xf7ee,	// (0x0005a790) list_setting_number_pane_vc_g

0x60e9,	// (0x0005108b) list_setting_number_pane_vc_t1_ParamLimits

0x60e9,	// (0x0005108b) list_setting_number_pane_vc_t1

0x60fd,	// (0x0005109f) list_setting_number_pane_vc_t2_ParamLimits

0x60fd,	// (0x0005109f) list_setting_number_pane_vc_t2

0x6119,	// (0x000510bb) list_setting_number_pane_vc_t3_ParamLimits

0x6119,	// (0x000510bb) list_setting_number_pane_vc_t3

0x0002,

0xf7f3,	// (0x0005a795) list_setting_number_pane_vc_t_ParamLimits

0xf7f3,	// (0x0005a795) list_setting_number_pane_vc_t

0x6145,	// (0x000510e7) set_value_pane_vc_ParamLimits

0x6145,	// (0x000510e7) set_value_pane_vc

0xb276,	// (0x00056218) list_double2_graphic_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_double2_graphic_pane_vc

0x64c6,	// (0x00051468) list_double2_large_graphic_pane_vc_ParamLimits

0x64c6,	// (0x00051468) list_double2_large_graphic_pane_vc

0xb276,	// (0x00056218) list_double2_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_double2_pane_vc

0xb276,	// (0x00056218) list_double_graphic_heading_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_double_graphic_heading_pane_vc

0xb276,	// (0x00056218) list_double_graphic_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_double_graphic_pane_vc

0xb276,	// (0x00056218) list_double_heading_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_double_heading_pane_vc

0x64d7,	// (0x00051479) list_double_large_graphic_pane_vc_ParamLimits

0x64d7,	// (0x00051479) list_double_large_graphic_pane_vc

0xb276,	// (0x00056218) list_double_number_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_double_number_pane_vc

0xb276,	// (0x00056218) list_double_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_double_pane_vc

0xb276,	// (0x00056218) list_double_time_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_double_time_pane_vc

0xb276,	// (0x00056218) list_setting_number_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_setting_number_pane_vc

0xb276,	// (0x00056218) list_setting_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_setting_pane_vc

0xb276,	// (0x00056218) list_single_graphic_heading_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_single_graphic_heading_pane_vc

0xb276,	// (0x00056218) list_single_heading_pane_vc_ParamLimits

0xb276,	// (0x00056218) list_single_heading_pane_vc

0x7d8b,	// (0x00052d2d) list_single_number_heading_pane_vc_ParamLimits

0x7d8b,	// (0x00052d2d) list_single_number_heading_pane_vc

0x601c,	// (0x00050fbe) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x601c,	// (0x00050fbe) list_double_graphic_heading_pane_vc_g1

0x93cf,	// (0x00054371) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x93cf,	// (0x00054371) list_double_graphic_heading_pane_vc_g2

0x7d4c,	// (0x00052cee) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7d4c,	// (0x00052cee) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0005a765) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a765) list_double_graphic_heading_pane_vc_g

0x65ef,	// (0x00051591) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x65ef,	// (0x00051591) list_double_graphic_heading_pane_vc_t1

0x660b,	// (0x000515ad) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x660b,	// (0x000515ad) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f8,	// (0x0005a99a) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f8,	// (0x0005a99a) list_double_graphic_heading_pane_vc_t

0x7d58,	// (0x00052cfa) list_setting_pane_vc_g1_ParamLimits

0x7d58,	// (0x00052cfa) list_setting_pane_vc_g1

0x7d64,	// (0x00052d06) list_setting_pane_vc_g2_ParamLimits

0x7d64,	// (0x00052d06) list_setting_pane_vc_g2

0x0001,

0xf7ee,	// (0x0005a790) list_setting_pane_vc_g_ParamLimits

0xf7ee,	// (0x0005a790) list_setting_pane_vc_g

0x6629,	// (0x000515cb) list_setting_pane_vc_t1_ParamLimits

0x6629,	// (0x000515cb) list_setting_pane_vc_t1

0x6645,	// (0x000515e7) list_setting_pane_vc_t2_ParamLimits

0x6645,	// (0x000515e7) list_setting_pane_vc_t2

0x0001,

0xfa26,	// (0x0005a9c8) list_setting_pane_vc_t_ParamLimits

0xfa26,	// (0x0005a9c8) list_setting_pane_vc_t

0x6145,	// (0x000510e7) set_value_pane_cp_vc_ParamLimits

0x6145,	// (0x000510e7) set_value_pane_cp_vc

0x93cf,	// (0x00054371) list_single_number_heading_pane_vc_g1_ParamLimits

0x93cf,	// (0x00054371) list_single_number_heading_pane_vc_g1

0x7d4c,	// (0x00052cee) list_single_number_heading_pane_vc_g2_ParamLimits

0x7d4c,	// (0x00052cee) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a786) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a786) list_single_number_heading_pane_vc_g

0x6093,	// (0x00051035) list_single_number_heading_pane_vc_t1_ParamLimits

0x6093,	// (0x00051035) list_single_number_heading_pane_vc_t1

0x6661,	// (0x00051603) list_single_number_heading_pane_vc_t2_ParamLimits

0x6661,	// (0x00051603) list_single_number_heading_pane_vc_t2

0x6675,	// (0x00051617) list_single_number_heading_pane_vc_t3_ParamLimits

0x6675,	// (0x00051617) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2b,	// (0x0005a9cd) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2b,	// (0x0005a9cd) list_single_number_heading_pane_vc_t

0x601c,	// (0x00050fbe) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x601c,	// (0x00050fbe) list_single_graphic_heading_pane_vc_g1

0x93cf,	// (0x00054371) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x93cf,	// (0x00054371) list_single_graphic_heading_pane_vc_g4

0x7d4c,	// (0x00052cee) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7d4c,	// (0x00052cee) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0005a765) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0005a765) list_single_graphic_heading_pane_vc_g

0x6093,	// (0x00051035) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6093,	// (0x00051035) list_single_graphic_heading_pane_vc_t1

0x6687,	// (0x00051629) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x6687,	// (0x00051629) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa32,	// (0x0005a9d4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa32,	// (0x0005a9d4) list_single_graphic_heading_pane_vc_t

0x93cf,	// (0x00054371) list_double2_pane_vc_g1_ParamLimits

0x93cf,	// (0x00054371) list_double2_pane_vc_g1

0x7d4c,	// (0x00052cee) list_double2_pane_vc_g2_ParamLimits

0x7d4c,	// (0x00052cee) list_double2_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a786) list_double2_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a786) list_double2_pane_vc_g

0x669b,	// (0x0005163d) list_double2_pane_vc_t1_ParamLimits

0x669b,	// (0x0005163d) list_double2_pane_vc_t1

0x66b1,	// (0x00051653) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x66b1,	// (0x00051653) list_double2_large_graphic_pane_vc_g1

0x66bd,	// (0x0005165f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x66bd,	// (0x0005165f) list_double2_large_graphic_pane_vc_g2

0x66c9,	// (0x0005166b) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x66c9,	// (0x0005166b) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa37,	// (0x0005a9d9) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa37,	// (0x0005a9d9) list_double2_large_graphic_pane_vc_g

0x66d5,	// (0x00051677) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x66d5,	// (0x00051677) list_double2_large_graphic_pane_vc_t1

0x7e06,	// (0x00052da8) list_double_time_pane_vc_g1_ParamLimits

0x7e06,	// (0x00052da8) list_double_time_pane_vc_g1

0x7e12,	// (0x00052db4) list_double_time_pane_vc_g2_ParamLimits

0x7e12,	// (0x00052db4) list_double_time_pane_vc_g2

0x0001,

0xfa3e,	// (0x0005a9e0) list_double_time_pane_vc_g_ParamLimits

0xfa3e,	// (0x0005a9e0) list_double_time_pane_vc_g

0x66eb,	// (0x0005168d) list_double_time_pane_vc_t1_ParamLimits

0x66eb,	// (0x0005168d) list_double_time_pane_vc_t1

0x670f,	// (0x000516b1) list_double_time_pane_vc_t2_ParamLimits

0x670f,	// (0x000516b1) list_double_time_pane_vc_t2

0x675e,	// (0x00051700) list_double_time_pane_vc_t3_ParamLimits

0x675e,	// (0x00051700) list_double_time_pane_vc_t3

0x6770,	// (0x00051712) list_double_time_pane_vc_t4_ParamLimits

0x6770,	// (0x00051712) list_double_time_pane_vc_t4

0x0003,

0xfa43,	// (0x0005a9e5) list_double_time_pane_vc_t_ParamLimits

0xfa43,	// (0x0005a9e5) list_double_time_pane_vc_t

0x93cf,	// (0x00054371) list_double_pane_vc_g1_ParamLimits

0x93cf,	// (0x00054371) list_double_pane_vc_g1

0x7d4c,	// (0x00052cee) list_double_pane_vc_g2_ParamLimits

0x7d4c,	// (0x00052cee) list_double_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a786) list_double_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a786) list_double_pane_vc_g

0x7e1e,	// (0x00052dc0) list_double_pane_vc_t1_ParamLimits

0x7e1e,	// (0x00052dc0) list_double_pane_vc_t1

0x7e32,	// (0x00052dd4) list_double_pane_vc_t2_ParamLimits

0x7e32,	// (0x00052dd4) list_double_pane_vc_t2

0x0001,

0xfa4c,	// (0x0005a9ee) list_double_pane_vc_t_ParamLimits

0xfa4c,	// (0x0005a9ee) list_double_pane_vc_t

0x93cf,	// (0x00054371) list_double_number_pane_vc_g1_ParamLimits

0x93cf,	// (0x00054371) list_double_number_pane_vc_g1

0x7d4c,	// (0x00052cee) list_double_number_pane_vc_g2_ParamLimits

0x7d4c,	// (0x00052cee) list_double_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a786) list_double_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a786) list_double_number_pane_vc_g

0x7e4a,	// (0x00052dec) list_double_number_pane_vc_t1_ParamLimits

0x7e4a,	// (0x00052dec) list_double_number_pane_vc_t1

0x7e5c,	// (0x00052dfe) list_double_number_pane_vc_t2_ParamLimits

0x7e5c,	// (0x00052dfe) list_double_number_pane_vc_t2

0x7e70,	// (0x00052e12) list_double_number_pane_vc_t3_ParamLimits

0x7e70,	// (0x00052e12) list_double_number_pane_vc_t3

0x0002,

0xfa51,	// (0x0005a9f3) list_double_number_pane_vc_t_ParamLimits

0xfa51,	// (0x0005a9f3) list_double_number_pane_vc_t

0x7e88,	// (0x00052e2a) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7e88,	// (0x00052e2a) list_double_large_graphic_pane_vc_g1

0x7eaa,	// (0x00052e4c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7eaa,	// (0x00052e4c) list_double_large_graphic_pane_vc_g2

0x7ebe,	// (0x00052e60) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7ebe,	// (0x00052e60) list_double_large_graphic_pane_vc_g3

0x7ecd,	// (0x00052e6f) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7ecd,	// (0x00052e6f) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa58,	// (0x0005a9fa) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa58,	// (0x0005a9fa) list_double_large_graphic_pane_vc_g

0x7ed9,	// (0x00052e7b) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7ed9,	// (0x00052e7b) list_double_large_graphic_pane_vc_t1

0x7ef5,	// (0x00052e97) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7ef5,	// (0x00052e97) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa61,	// (0x0005aa03) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa61,	// (0x0005aa03) list_double_large_graphic_pane_vc_t

0x93cf,	// (0x00054371) list_double_heading_pane_vc_g1_ParamLimits

0x93cf,	// (0x00054371) list_double_heading_pane_vc_g1

0x7d4c,	// (0x00052cee) list_double_heading_pane_vc_g2_ParamLimits

0x7d4c,	// (0x00052cee) list_double_heading_pane_vc_g2

0x0001,

0xf7e4,	// (0x0005a786) list_double_heading_pane_vc_g_ParamLimits

0xf7e4,	// (0x0005a786) list_double_heading_pane_vc_g

0x7f17,	// (0x00052eb9) list_double_heading_pane_vc_t1_ParamLimits

0x7f17,	// (0x00052eb9) list_double_heading_pane_vc_t1

0x6093,	// (0x00051035) list_double_heading_pane_vc_t2_ParamLimits

0x6093,	// (0x00051035) list_double_heading_pane_vc_t2

0x0001,

0xfa66,	// (0x0005aa08) list_double_heading_pane_vc_t_ParamLimits

0xfa66,	// (0x0005aa08) list_double_heading_pane_vc_t

0x7f2b,	// (0x00052ecd) list_double_graphic_pane_vc_g1_ParamLimits

0x7f2b,	// (0x00052ecd) list_double_graphic_pane_vc_g1

0x7f37,	// (0x00052ed9) list_double_graphic_pane_vc_g2_ParamLimits

0x7f37,	// (0x00052ed9) list_double_graphic_pane_vc_g2

0x93cf,	// (0x00054371) list_double_graphic_pane_vc_g3_ParamLimits

0x93cf,	// (0x00054371) list_double_graphic_pane_vc_g3

0x0003,

0xfa6b,	// (0x0005aa0d) list_double_graphic_pane_vc_g_ParamLimits

0xfa6b,	// (0x0005aa0d) list_double_graphic_pane_vc_g

0x7f54,	// (0x00052ef6) list_double_graphic_pane_vc_t1_ParamLimits

0x7f54,	// (0x00052ef6) list_double_graphic_pane_vc_t1

0x7f7e,	// (0x00052f20) list_double_graphic_pane_vc_t2_ParamLimits

0x7f7e,	// (0x00052f20) list_double_graphic_pane_vc_t2

0x0001,

0xfa74,	// (0x0005aa16) list_double_graphic_pane_vc_t_ParamLimits

0xfa74,	// (0x0005aa16) list_double_graphic_pane_vc_t

0x487f,	// (0x0004f821) aid_size_cell_fastswap

0x4887,	// (0x0004f829) aid_size_cell_touch_ParamLimits

0x4887,	// (0x0004f829) aid_size_cell_touch

0x4aec,	// (0x0004fa8e) popup_fast_swap_wide_window_ParamLimits

0x4aec,	// (0x0004fa8e) popup_fast_swap_wide_window

0x4c00,	// (0x0004fba2) touch_pane_ParamLimits

0x4c00,	// (0x0004fba2) touch_pane

0x87f8,	// (0x0005379a) button_value_adjust_pane_cp2

0x5159,	// (0x000500fb) button_value_adjust_pane_cp4

0x517d,	// (0x0005011f) form_field_data_pane_cp2

0x519e,	// (0x00050140) form_field_data_wide_pane_cp2

0x8c6d,	// (0x00053c0f) bg_scroll_pane_ParamLimits

0x5561,	// (0x00050503) scroll_handle_pane_ParamLimits

0x5575,	// (0x00050517) scroll_sc2_down_pane_ParamLimits

0x5575,	// (0x00050517) scroll_sc2_down_pane

0x8c9e,	// (0x00053c40) scroll_sc2_up_pane_ParamLimits

0x8c9e,	// (0x00053c40) scroll_sc2_up_pane

0xbe2e,	// (0x00056dd0) grid_wheel_folder_pane_g1_ParamLimits

0xbe2e,	// (0x00056dd0) grid_wheel_folder_pane_g1

0x57a8,	// (0x0005074a) clock_nsta_pane_cp2_ParamLimits

0x57a8,	// (0x0005074a) clock_nsta_pane_cp2

0x89e4,	// (0x00053986) listscroll_midp_pane_ParamLimits

0x949e,	// (0x00054440) midp_canvas_pane

0x9786,	// (0x00054728) nsta_clock_indic_pane

0x97ba,	// (0x0005475c) listscroll_form_pane_vc

0x97c2,	// (0x00054764) listscroll_set_pane_vc_ParamLimits

0x97c2,	// (0x00054764) listscroll_set_pane_vc

0x98c7,	// (0x00054869) clock_nsta_pane

0x993c,	// (0x000548de) indicator_nsta_pane

0x9c28,	// (0x00054bca) bg_popup_sub_pane_cp2_ParamLimits

0x9c3c,	// (0x00054bde) find_pane_cp2_ParamLimits

0x9c3c,	// (0x00054bde) find_pane_cp2

0x9c52,	// (0x00054bf4) grid_toobar_pane_ParamLimits

0x9d32,	// (0x00054cd4) list_form_gen_pane_vc_ParamLimits

0x9d32,	// (0x00054cd4) list_form_gen_pane_vc

0x9d48,	// (0x00054cea) scroll_pane_cp8_vc_ParamLimits

0x9d48,	// (0x00054cea) scroll_pane_cp8_vc

0x9dc4,	// (0x00054d66) data_form_wide_pane_vc_ParamLimits

0x9dc4,	// (0x00054d66) data_form_wide_pane_vc

0x9dd0,	// (0x00054d72) form_field_data_wide_pane_vc_g1

0x9dd8,	// (0x00054d7a) form_field_data_wide_pane_vc_t1_ParamLimits

0x9dd8,	// (0x00054d7a) form_field_data_wide_pane_vc_t1

0x880c,	// (0x000537ae) input_focus_pane_cp6_vc_ParamLimits

0x880c,	// (0x000537ae) input_focus_pane_cp6_vc

0xa104,	// (0x000550a6) list_midp_pane_ParamLimits

0xa110,	// (0x000550b2) scroll_pane_cp16_ParamLimits

0xa110,	// (0x000550b2) scroll_pane_cp16

0xa15e,	// (0x00055100) button_value_adjust_pane_ParamLimits

0xa15e,	// (0x00055100) button_value_adjust_pane

0xb0d0,	// (0x00056072) button_value_adjust_pane_cp6_ParamLimits

0xb0d0,	// (0x00056072) button_value_adjust_pane_cp6

0xb1fa,	// (0x0005619c) settings_code_pane_cp_ParamLimits

0xb1fa,	// (0x0005619c) settings_code_pane_cp

0x77d0,	// (0x00052772) cell_touch_pane_g1

0x77d0,	// (0x00052772) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0005a6aa) cell_touch_pane_g

0xb770,	// (0x00056712) cell_touch_pane_cp_ParamLimits

0xb770,	// (0x00056712) cell_touch_pane_cp

0xb780,	// (0x00056722) cell_touch_pane_ParamLimits

0xb780,	// (0x00056722) cell_touch_pane

0x77d0,	// (0x00052772) scroll_sc2_down_pane_g1

0x77d0,	// (0x00052772) scroll_sc2_up_pane_g1

0x77da,	// (0x0005277c) bg_set_opt_pane_cp4_vc

0xb792,	// (0x00056734) list_set_graphic_pane_vc_g1_ParamLimits

0xb792,	// (0x00056734) list_set_graphic_pane_vc_g1

0xb79e,	// (0x00056740) list_set_graphic_pane_vc_g2_ParamLimits

0xb79e,	// (0x00056740) list_set_graphic_pane_vc_g2

0x0001,

0xf9fd,	// (0x0005a99f) list_set_graphic_pane_vc_g_ParamLimits

0xf9fd,	// (0x0005a99f) list_set_graphic_pane_vc_g

0xb7aa,	// (0x0005674c) text_primary_small_cp13_vc_ParamLimits

0xb7aa,	// (0x0005674c) text_primary_small_cp13_vc

0xb7c2,	// (0x00056764) list_set_graphic_pane_vc_ParamLimits

0xb7c2,	// (0x00056764) list_set_graphic_pane_vc

0x77da,	// (0x0005277c) input_focus_pane_cp2_vc

0x77d0,	// (0x00052772) setting_code_pane_vc_g1

0x7905,	// (0x000528a7) setting_code_pane_vc_t1

0xb7d5,	// (0x00056777) set_text_pane_vc_t1_ParamLimits

0xb7d5,	// (0x00056777) set_text_pane_vc_t1

0x77da,	// (0x0005277c) input_focus_pane_cp1_vc

0xb7f1,	// (0x00056793) list_set_text_pane_vc

0x77d0,	// (0x00052772) setting_text_pane_vc_g1

0x77da,	// (0x0005277c) bg_set_opt_pane_cp2_vc

0x78fc,	// (0x0005289e) setting_slider_graphic_pane_vc_g1

0xb7fb,	// (0x0005679d) setting_slider_graphic_pane_vc_t1

0xb80b,	// (0x000567ad) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa02,	// (0x0005a9a4) setting_slider_graphic_pane_vc_t

0xb81b,	// (0x000567bd) slider_set_pane_cp_vc

0xb823,	// (0x000567c5) slider_set_pane_vc_g1

0xb82c,	// (0x000567ce) slider_set_pane_vc_g2

0x0006,

0xfa07,	// (0x0005a9a9) slider_set_pane_vc_g

0x885b,	// (0x000537fd) set_opt_bg_pane_g1_copy1

0x8863,	// (0x00053805) set_opt_bg_pane_g2_copy1

0xb858,	// (0x000567fa) set_opt_bg_pane_g3_copy1

0x8873,	// (0x00053815) set_opt_bg_pane_g4_copy1

0x887b,	// (0x0005381d) set_opt_bg_pane_g5_copy1

0x8883,	// (0x00053825) set_opt_bg_pane_g6_copy1

0xb862,	// (0x00056804) set_opt_bg_pane_g7_copy1

0xb86a,	// (0x0005680c) set_opt_bg_pane_g8_copy1

0xb874,	// (0x00056816) set_opt_bg_pane_g9_copy1

0x77da,	// (0x0005277c) bg_set_opt_pane_cp_vc

0xb87e,	// (0x00056820) setting_slider_pane_vc_t1

0xb88d,	// (0x0005682f) setting_slider_pane_vc_t2

0xb89d,	// (0x0005683f) setting_slider_pane_vc_t3

0x0002,

0xfa16,	// (0x0005a9b8) setting_slider_pane_vc_t

0xb8ad,	// (0x0005684f) slider_set_pane_vc

0x622c,	// (0x000511ce) volume_set_pane_vc_g1

0x6235,	// (0x000511d7) volume_set_pane_vc_g2

0x623e,	// (0x000511e0) volume_set_pane_vc_g3

0x6247,	// (0x000511e9) volume_set_pane_vc_g4

0x6250,	// (0x000511f2) volume_set_pane_vc_g5

0x6259,	// (0x000511fb) volume_set_pane_vc_g6

0x6262,	// (0x00051204) volume_set_pane_vc_g7

0x626b,	// (0x0005120d) volume_set_pane_vc_g8

0x6274,	// (0x00051216) volume_set_pane_vc_g9

0x627d,	// (0x0005121f) volume_set_pane_vc_g10

0x0009,

0xf8bb,	// (0x0005a85d) volume_set_pane_vc_g

0xb8b5,	// (0x00056857) volume_set_pane_vc

0xb8bd,	// (0x0005685f) button_value_adjust_pane_cp1_vc

0xb8c7,	// (0x00056869) list_highlight_pane_cp2_vc

0xb8d0,	// (0x00056872) list_set_pane_vc_ParamLimits

0xb8d0,	// (0x00056872) list_set_pane_vc

0xb92e,	// (0x000568d0) main_pane_set_vc_t1_ParamLimits

0xb92e,	// (0x000568d0) main_pane_set_vc_t1

0xb943,	// (0x000568e5) main_pane_set_vc_t2_ParamLimits

0xb943,	// (0x000568e5) main_pane_set_vc_t2

0xb955,	// (0x000568f7) main_pane_set_vc_t3_ParamLimits

0xb955,	// (0x000568f7) main_pane_set_vc_t3

0xb969,	// (0x0005690b) main_pane_set_vc_t4_ParamLimits

0xb969,	// (0x0005690b) main_pane_set_vc_t4

0x0003,

0xfa1d,	// (0x0005a9bf) main_pane_set_vc_t_ParamLimits

0xfa1d,	// (0x0005a9bf) main_pane_set_vc_t

0xb97d,	// (0x0005691f) setting_code_pane_vc_ParamLimits

0xb97d,	// (0x0005691f) setting_code_pane_vc

0xb98e,	// (0x00056930) setting_slider_graphic_pane_vc

0xb98e,	// (0x00056930) setting_slider_pane_vc

0xb98e,	// (0x00056930) setting_text_pane_vc

0xb98e,	// (0x00056930) setting_volume_pane_vc

0xb998,	// (0x0005693a) scroll_pane_cp121_vc

0x87e6,	// (0x00053788) set_content_pane_vc

0xb9a0,	// (0x00056942) button_value_adjust_pane_g1

0xb9a9,	// (0x0005694b) button_value_adjust_pane_g2

0x0001,

0xfa79,	// (0x0005aa1b) button_value_adjust_pane_g

0xb9b2,	// (0x00056954) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb9b2,	// (0x00056954) form_field_slider_wide_pane_vc_t1

0xb9c6,	// (0x00056968) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb9c6,	// (0x00056968) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7e,	// (0x0005aa20) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7e,	// (0x0005aa20) form_field_slider_wide_pane_vc_t

0x7b35,	// (0x00052ad7) input_focus_pane_cp10_vc_ParamLimits

0x7b35,	// (0x00052ad7) input_focus_pane_cp10_vc

0xb9f4,	// (0x00056996) slider_cont_pane_cp1_vc_ParamLimits

0xb9f4,	// (0x00056996) slider_cont_pane_cp1_vc

0xba06,	// (0x000569a8) slider_form_pane_g1_cp2

0xb82c,	// (0x000567ce) slider_form_pane_g2_cp2

0xba33,	// (0x000569d5) form_field_slider_pane_vc_t3

0xba41,	// (0x000569e3) form_field_slider_pane_vc_t4

0xba4f,	// (0x000569f1) slider_form_pane_vc_ParamLimits

0xba4f,	// (0x000569f1) slider_form_pane_vc

0xba5c,	// (0x000569fe) form_field_slider_pane_vc_t1_ParamLimits

0xba5c,	// (0x000569fe) form_field_slider_pane_vc_t1

0xb9c6,	// (0x00056968) form_field_slider_pane_vc_t2_ParamLimits

0xb9c6,	// (0x00056968) form_field_slider_pane_vc_t2

0x0001,

0xfa90,	// (0x0005aa32) form_field_slider_pane_vc_t_ParamLimits

0xfa90,	// (0x0005aa32) form_field_slider_pane_vc_t

0x7b35,	// (0x00052ad7) input_focus_pane_cp9_vc_ParamLimits

0x7b35,	// (0x00052ad7) input_focus_pane_cp9_vc

0xba78,	// (0x00056a1a) slider_cont_pane_vc_ParamLimits

0xba78,	// (0x00056a1a) slider_cont_pane_vc

0xba8c,	// (0x00056a2e) list_form_graphic_pane_cp_vc_ParamLimits

0xba8c,	// (0x00056a2e) list_form_graphic_pane_cp_vc

0x9dd0,	// (0x00054d72) form_field_popup_wide_pane_vc_g1

0xbaa1,	// (0x00056a43) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbaa1,	// (0x00056a43) form_field_popup_wide_pane_vc_t1

0x880c,	// (0x000537ae) input_focus_pane_cp8_vc_ParamLimits

0x880c,	// (0x000537ae) input_focus_pane_cp8_vc

0xbae6,	// (0x00056a88) list_form_wide_pane_vc_ParamLimits

0xbae6,	// (0x00056a88) list_form_wide_pane_vc

0xbaf2,	// (0x00056a94) list_form_graphic_pane_vc_g1

0xbafa,	// (0x00056a9c) list_form_graphic_pane_vc_t1_ParamLimits

0xbafa,	// (0x00056a9c) list_form_graphic_pane_vc_t1

0x78ba,	// (0x0005285c) list_highlight_pane_cp5_vc_ParamLimits

0x78ba,	// (0x0005285c) list_highlight_pane_cp5_vc

0xbb16,	// (0x00056ab8) list_form_graphic_pane_vc_ParamLimits

0xbb16,	// (0x00056ab8) list_form_graphic_pane_vc

0x9dd0,	// (0x00054d72) form_field_popup_pane_vc_g1

0xbb2c,	// (0x00056ace) form_field_popup_pane_vc_t1_ParamLimits

0xbb2c,	// (0x00056ace) form_field_popup_pane_vc_t1

0x880c,	// (0x000537ae) input_focus_pane_cp7_vc_ParamLimits

0x880c,	// (0x000537ae) input_focus_pane_cp7_vc

0xbb43,	// (0x00056ae5) list_form_pane_vc_ParamLimits

0xbb43,	// (0x00056ae5) list_form_pane_vc

0xbb4f,	// (0x00056af1) data_form_pane_vc_t1_ParamLimits

0xbb4f,	// (0x00056af1) data_form_pane_vc_t1

0x885b,	// (0x000537fd) input_focus_pane_vc_g1

0x8863,	// (0x00053805) input_focus_pane_vc_g2

0x886b,	// (0x0005380d) input_focus_pane_vc_g3

0x8873,	// (0x00053815) input_focus_pane_vc_g4

0x887b,	// (0x0005381d) input_focus_pane_vc_g5

0x8883,	// (0x00053825) input_focus_pane_vc_g6

0x888b,	// (0x0005382d) input_focus_pane_vc_g7

0x8893,	// (0x00053835) input_focus_pane_vc_g8

0x889b,	// (0x0005383d) input_focus_pane_vc_g9

0x77d0,	// (0x00052772) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0005a633) input_focus_pane_vc_g

0x9dc4,	// (0x00054d66) data_form_pane_vc_ParamLimits

0x9dc4,	// (0x00054d66) data_form_pane_vc

0x9dd0,	// (0x00054d72) form_field_data_pane_vc_g1

0xbb6a,	// (0x00056b0c) form_field_data_pane_vc_t1_ParamLimits

0xbb6a,	// (0x00056b0c) form_field_data_pane_vc_t1

0x880c,	// (0x000537ae) input_focus_pane_vc_ParamLimits

0x880c,	// (0x000537ae) input_focus_pane_vc

0xbb84,	// (0x00056b26) button_value_adjust_pane_cp3_vc

0xbb8c,	// (0x00056b2e) button_value_adjust_pane_cp5_vc

0xbb94,	// (0x00056b36) form_field_data_pane_vc_ParamLimits

0xbb94,	// (0x00056b36) form_field_data_pane_vc

0xbbab,	// (0x00056b4d) form_field_data_pane_vc_cp2

0xbbb3,	// (0x00056b55) form_field_data_wide_pane_vc_ParamLimits

0xbbb3,	// (0x00056b55) form_field_data_wide_pane_vc

0xbbc9,	// (0x00056b6b) form_field_data_wide_pane_vc_cp2

0xbbd1,	// (0x00056b73) form_field_popup_pane_vc_ParamLimits

0xbbd1,	// (0x00056b73) form_field_popup_pane_vc

0xbbe8,	// (0x00056b8a) form_field_popup_wide_pane_vc_ParamLimits

0xbbe8,	// (0x00056b8a) form_field_popup_wide_pane_vc

0xbbfe,	// (0x00056ba0) form_field_slider_pane_vc_ParamLimits

0xbbfe,	// (0x00056ba0) form_field_slider_pane_vc

0xbc11,	// (0x00056bb3) form_field_slider_wide_pane_vc_ParamLimits

0xbc11,	// (0x00056bb3) form_field_slider_wide_pane_vc

0xbc24,	// (0x00056bc6) grid_touch_1_pane_ParamLimits

0xbc24,	// (0x00056bc6) grid_touch_1_pane

0xbc30,	// (0x00056bd2) grid_touch_2_pane_ParamLimits

0xbc30,	// (0x00056bd2) grid_touch_2_pane

0x9751,	// (0x000546f3) touch_pane_g1_ParamLimits

0x9751,	// (0x000546f3) touch_pane_g1

0xbc48,	// (0x00056bea) cell_app_pane_cp_wide_ParamLimits

0xbc48,	// (0x00056bea) cell_app_pane_cp_wide

0xbc59,	// (0x00056bfb) grid_popup_fast_wide_pane_ParamLimits

0xbc59,	// (0x00056bfb) grid_popup_fast_wide_pane

0xbc6d,	// (0x00056c0f) scroll_pane_cp19_ParamLimits

0xbc6d,	// (0x00056c0f) scroll_pane_cp19

0x77da,	// (0x0005277c) bg_popup_window_pane_cp20

0xbc81,	// (0x00056c23) listscroll_popup_fast_wide_pane

0x78ba,	// (0x0005285c) grid_indicator_nsta_pane

0xbc89,	// (0x00056c2b) clock_nsta_pane_g1

0xbc92,	// (0x00056c34) clock_nsta_pane_t1

0xbcae,	// (0x00056c50) cell_indicator_nsta_pane_ParamLimits

0xbcae,	// (0x00056c50) cell_indicator_nsta_pane

0xbcdf,	// (0x00056c81) cell_indicator_nsta_pane_g1

0xbced,	// (0x00056c8f) cell_indicator_nsta_pane_g2

0x0001,

0xfaa1,	// (0x0005aa43) cell_indicator_nsta_pane_g

0xbcfa,	// (0x00056c9c) clock_nsta_pane_cp

0xbd02,	// (0x00056ca4) indicator_nsta_pane_cp

0xbd0a,	// (0x00056cac) nsta_clock_indic_pane_g1

0x7983,	// (0x00052925) grid_indicator_pane

0x8d93,	// (0x00053d35) scroll_pane_cp29

0x56f7,	// (0x00050699) indicator_nsta_pane_cp2_ParamLimits

0x56f7,	// (0x00050699) indicator_nsta_pane_cp2

0x78ba,	// (0x0005285c) main_apps_wheel_pane

0x9fe5,	// (0x00054f87) form_midp_field_text_pane_ParamLimits

0xa130,	// (0x000550d2) scroll_bar_cp050_ParamLimits

0xbd6b,	// (0x00056d0d) cell_indicator_pane_ParamLimits

0xbd6b,	// (0x00056d0d) cell_indicator_pane

0xbd82,	// (0x00056d24) cell_indicator_pane_g1

0xbd8c,	// (0x00056d2e) grid_wheel_folder_pane_ParamLimits

0xbd8c,	// (0x00056d2e) grid_wheel_folder_pane

0xbda2,	// (0x00056d44) list_wheel_apps_pane_ParamLimits

0xbda2,	// (0x00056d44) list_wheel_apps_pane

0xbdb3,	// (0x00056d55) main_apps_wheel_pane_g1_ParamLimits

0xbdb3,	// (0x00056d55) main_apps_wheel_pane_g1

0xbdc7,	// (0x00056d69) main_apps_wheel_pane_g2_ParamLimits

0xbdc7,	// (0x00056d69) main_apps_wheel_pane_g2

0x0001,

0xfabd,	// (0x0005aa5f) main_apps_wheel_pane_g_ParamLimits

0xfabd,	// (0x0005aa5f) main_apps_wheel_pane_g

0xbddf,	// (0x00056d81) main_apps_wheel_pane_t1_ParamLimits

0xbddf,	// (0x00056d81) main_apps_wheel_pane_t1

0xbe02,	// (0x00056da4) list_wheel_apps_pane_g1

0xbe0a,	// (0x00056dac) list_wheel_apps_pane_g2

0xbe12,	// (0x00056db4) list_wheel_apps_pane_g3

0xbe1a,	// (0x00056dbc) list_wheel_apps_pane_g4

0xbe24,	// (0x00056dc6) list_wheel_apps_pane_g5

0x0004,

0xfac2,	// (0x0005aa64) list_wheel_apps_pane_g

0x9316,	// (0x000542b8) navi_icon_text_pane

0x97f6,	// (0x00054798) aid_fill_nsta

0xbe47,	// (0x00056de9) navi_icon_text_pane_g1

0xbe53,	// (0x00056df5) navi_icon_text_pane_t1

0x91a9,	// (0x0005414b) list_set_graphic_pane_t1_ParamLimits

0x91a9,	// (0x0005414b) list_set_graphic_pane_t1

0xa87f,	// (0x00055821) popup_midp_note_alarm_window_t6_ParamLimits

0xa87f,	// (0x00055821) popup_midp_note_alarm_window_t6

0xa891,	// (0x00055833) popup_midp_note_alarm_window_t7_ParamLimits

0xa891,	// (0x00055833) popup_midp_note_alarm_window_t7

0xa8a3,	// (0x00055845) popup_midp_note_alarm_window_t8_ParamLimits

0xa8a3,	// (0x00055845) popup_midp_note_alarm_window_t8

0xa8b5,	// (0x00055857) popup_midp_note_alarm_window_t9_ParamLimits

0xa8b5,	// (0x00055857) popup_midp_note_alarm_window_t9

0xa8c7,	// (0x00055869) popup_midp_note_alarm_window_t10_ParamLimits

0xa8c7,	// (0x00055869) popup_midp_note_alarm_window_t10

0xa8d9,	// (0x0005587b) popup_midp_note_alarm_window_t11_ParamLimits

0xa8d9,	// (0x0005587b) popup_midp_note_alarm_window_t11

0xa8eb,	// (0x0005588d) scroll_pane_cp17_ParamLimits

0xa8eb,	// (0x0005588d) scroll_pane_cp17

0x622c,	// (0x000511ce) volume_small_pane_cp_g1

0x6784,	// (0x00051726) volume_small_pane_cp_g2

0x678d,	// (0x0005172f) volume_small_pane_cp_g3

0x6796,	// (0x00051738) volume_small_pane_cp_g4

0x679f,	// (0x00051741) volume_small_pane_cp_g5

0x67a8,	// (0x0005174a) volume_small_pane_cp_g6

0x67b1,	// (0x00051753) volume_small_pane_cp_g7

0x67ba,	// (0x0005175c) volume_small_pane_cp_g8

0x67c3,	// (0x00051765) volume_small_pane_cp_g9

0x67cc,	// (0x0005176e) volume_small_pane_cp_g10

0x9567,	// (0x00054509) midp_ticker_pane_g1_ParamLimits

0x9573,	// (0x00054515) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0005a6ff) midp_ticker_pane_g_ParamLimits

0x957f,	// (0x00054521) midp_ticker_pane_t1_ParamLimits

0x980c,	// (0x000547ae) aid_fill_nsta_2

0xa11c,	// (0x000550be) list_form2_midp_pane

0xb245,	// (0x000561e7) midp_editing_number_pane_ParamLimits

0xb254,	// (0x000561f6) midp_ticker_pane_ParamLimits

0xbe65,	// (0x00056e07) form2_midp_field_pane

0xbe89,	// (0x00056e2b) scroll_pane_cp51

0xbea9,	// (0x00056e4b) form2_midp_button_pane_ParamLimits

0xbea9,	// (0x00056e4b) form2_midp_button_pane

0xbebb,	// (0x00056e5d) form2_midp_content_pane_ParamLimits

0xbebb,	// (0x00056e5d) form2_midp_content_pane

0xbed5,	// (0x00056e77) form2_midp_field_choice_group_pane

0xbedd,	// (0x00056e7f) form2_midp_field_pane_g1

0xbee5,	// (0x00056e87) form2_midp_field_pane_g2

0xbeed,	// (0x00056e8f) form2_midp_field_pane_g3

0xbef5,	// (0x00056e97) form2_midp_field_pane_g4

0x0003,

0xfae7,	// (0x0005aa89) form2_midp_field_pane_g

0xbefd,	// (0x00056e9f) form2_midp_gauge_slider_pane

0xbf05,	// (0x00056ea7) form2_midp_gauge_wait_pane

0xbf0d,	// (0x00056eaf) form2_midp_image_pane_ParamLimits

0xbf0d,	// (0x00056eaf) form2_midp_image_pane

0xbf28,	// (0x00056eca) form2_midp_label_pane_ParamLimits

0xbf28,	// (0x00056eca) form2_midp_label_pane

0xbf41,	// (0x00056ee3) form2_midp_label_pane_cp_ParamLimits

0xbf41,	// (0x00056ee3) form2_midp_label_pane_cp

0xbf62,	// (0x00056f04) form2_midp_string_pane_ParamLimits

0xbf62,	// (0x00056f04) form2_midp_string_pane

0x7fa8,	// (0x00052f4a) form2_midp_text_pane_ParamLimits

0x7fa8,	// (0x00052f4a) form2_midp_text_pane

0xbf74,	// (0x00056f16) form2_midp_time_pane

0xbf84,	// (0x00056f26) input_focus_pane_cp51_ParamLimits

0xbf84,	// (0x00056f26) input_focus_pane_cp51

0xbf9c,	// (0x00056f3e) form2_midp_label_pane_t1_ParamLimits

0xbf9c,	// (0x00056f3e) form2_midp_label_pane_t1

0x7fc7,	// (0x00052f69) form2_mdip_text_pane_t1_ParamLimits

0x7fc7,	// (0x00052f69) form2_mdip_text_pane_t1

0x7fe5,	// (0x00052f87) form2_midp_time_pane_t1

0xbfe5,	// (0x00056f87) form2_midp_gauge_slider_pane_t1

0xbff7,	// (0x00056f99) form2_midp_gauge_slider_pane_t2

0xc009,	// (0x00056fab) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf0,	// (0x0005aa92) form2_midp_gauge_slider_pane_t

0xc01b,	// (0x00056fbd) form2_midp_slider_pane

0xc027,	// (0x00056fc9) form2_midp_gauge_wait_pane_t1

0xc035,	// (0x00056fd7) form2_midp_wait_pane_ParamLimits

0xc035,	// (0x00056fd7) form2_midp_wait_pane

0x9e17,	// (0x00054db9) list_single_2graphic_pane_cp4_ParamLimits

0x9e17,	// (0x00054db9) list_single_2graphic_pane_cp4

0xc060,	// (0x00057002) list_single_midp_graphic_pane_cp_ParamLimits

0xc060,	// (0x00057002) list_single_midp_graphic_pane_cp

0x77da,	// (0x0005277c) list_highlight_pane_cp20

0xc08f,	// (0x00057031) list_single_2graphic_pane_g1_cp4

0xc097,	// (0x00057039) list_single_2graphic_pane_g2_cp4

0xc09f,	// (0x00057041) list_single_2graphic_pane_t1_cp4

0x78ba,	// (0x0005285c) list_highlight_pane_cp21

0xc0ae,	// (0x00057050) list_single_midp_graphic_pane_g4_cp

0xc0bd,	// (0x0005705f) list_single_midp_graphic_pane_t1_cp

0xc0d2,	// (0x00057074) form2_mdip_string_pane_t1_ParamLimits

0xc0d2,	// (0x00057074) form2_mdip_string_pane_t1

0x77da,	// (0x0005277c) bg_wml_button_pane_cp2

0x77d0,	// (0x00052772) form2_midp_image_pane_g1

0x7cfb,	// (0x00052c9d) list_double_large_graphic_pane_g5_ParamLimits

0x7cfb,	// (0x00052c9d) list_double_large_graphic_pane_g5

0x89e4,	// (0x00053986) midp_form_pane_ParamLimits

0x78ba,	// (0x0005285c) main_apps_wheel_pane_ParamLimits

0x5ddc,	// (0x00050d7e) popup_preview_window_ParamLimits

0x5ddc,	// (0x00050d7e) popup_preview_window

0x5f97,	// (0x00050f39) popup_touch_info_window_ParamLimits

0x5f97,	// (0x00050f39) popup_touch_info_window

0x5fb5,	// (0x00050f57) popup_touch_menu_window_ParamLimits

0x5fb5,	// (0x00050f57) popup_touch_menu_window

0x77c6,	// (0x00052768) bg_popup_sub_pane_cp6

0xc1cb,	// (0x0005716d) list_touch_menu_pane

0xc1d3,	// (0x00057175) list_single_touch_menu_pane_ParamLimits

0xc1d3,	// (0x00057175) list_single_touch_menu_pane

0xc1e9,	// (0x0005718b) list_single_touch_menu_pane_t1

0x78ba,	// (0x0005285c) bg_popup_sub_pane_cp7_ParamLimits

0x78ba,	// (0x0005285c) bg_popup_sub_pane_cp7

0xc1f7,	// (0x00057199) heading_sub_pane

0xc1ff,	// (0x000571a1) list_touch_info_pane_ParamLimits

0xc1ff,	// (0x000571a1) list_touch_info_pane

0xc20e,	// (0x000571b0) list_single_touch_info_pane_ParamLimits

0xc20e,	// (0x000571b0) list_single_touch_info_pane

0xc220,	// (0x000571c2) list_single_touch_info_pane_t1

0xc22e,	// (0x000571d0) list_single_touch_info_pane_t2

0x0001,

0xfafe,	// (0x0005aaa0) list_single_touch_info_pane_t

0x9496,	// (0x00054438) bg_popup_heading_pane_cp

0xc23c,	// (0x000571de) heading_sub_pane_t1

0x9d5e,	// (0x00054d00) bg_popup_preview_window_pane_cp_ParamLimits

0x9d5e,	// (0x00054d00) bg_popup_preview_window_pane_cp

0xc1f7,	// (0x00057199) heading_preview_pane

0xc1ff,	// (0x000571a1) list_preview_pane_ParamLimits

0xc1ff,	// (0x000571a1) list_preview_pane

0xc24a,	// (0x000571ec) popup_preview_window_g1

0xc20e,	// (0x000571b0) list_single_preview_pane_ParamLimits

0xc20e,	// (0x000571b0) list_single_preview_pane

0xc252,	// (0x000571f4) list_single_preview_pane_g1

0xc25a,	// (0x000571fc) list_single_preview_pane_t1

0xc220,	// (0x000571c2) list_single_preview_pane_t2

0x0001,

0xfb03,	// (0x0005aaa5) list_single_preview_pane_t

0xc268,	// (0x0005720a) bg_popup_heading_pane_cp2_ParamLimits

0xc268,	// (0x0005720a) bg_popup_heading_pane_cp2

0xc27e,	// (0x00057220) heading_preview_pane_g1

0xc286,	// (0x00057228) heading_preview_pane_t1_ParamLimits

0xc286,	// (0x00057228) heading_preview_pane_t1

0x79a6,	// (0x00052948) soft_indicator_pane_t1_ParamLimits

0x8773,	// (0x00053715) scroll_pane_ParamLimits

0x8c8c,	// (0x00053c2e) scroll_sc2_left_pane

0x8c95,	// (0x00053c37) scroll_sc2_right_pane

0x8cb4,	// (0x00053c56) scroll_bg_pane_g1_ParamLimits

0x8cc9,	// (0x00053c6b) scroll_bg_pane_g2_ParamLimits

0x8ce1,	// (0x00053c83) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0005a68a) scroll_bg_pane_g_ParamLimits

0x8cb4,	// (0x00053c56) scroll_handle_pane_g1_ParamLimits

0x8d03,	// (0x00053ca5) scroll_handle_pane_g2_ParamLimits

0x8ce1,	// (0x00053c83) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0005a691) scroll_handle_pane_g_ParamLimits

0x5a5d,	// (0x000509ff) popup_choice_list_window_ParamLimits

0x5a5d,	// (0x000509ff) popup_choice_list_window

0x9c34,	// (0x00054bd6) choice_list_pane

0x9cb6,	// (0x00054c58) cell_toolbar_pane_t1

0x9cde,	// (0x00054c80) toolbar_button_pane_ParamLimits

0xada5,	// (0x00055d47) ai_gene_pane_1_t2_ParamLimits

0xada5,	// (0x00055d47) ai_gene_pane_1_t2

0x0001,

0xf917,	// (0x0005a8b9) ai_gene_pane_1_t_ParamLimits

0xf917,	// (0x0005a8b9) ai_gene_pane_1_t

0xc2a3,	// (0x00057245) scroll_sc2_left_pane_g1

0xc2a3,	// (0x00057245) scroll_sc2_right_pane_g1

0x97d4,	// (0x00054776) bg_popup_sub_pane_cp10

0xc2ad,	// (0x0005724f) list_choice_list_pane

0xc2c6,	// (0x00057268) list_single_choice_list_pane_ParamLimits

0xc2c6,	// (0x00057268) list_single_choice_list_pane

0xc2d9,	// (0x0005727b) list_single_choice_list_pane_g1

0x8994,	// (0x00053936) list_single_choice_list_pane_t1_ParamLimits

0x8994,	// (0x00053936) list_single_choice_list_pane_t1

0xc2e1,	// (0x00057283) choice_list_pane_g1

0xc2e9,	// (0x0005728b) choice_list_pane_t1

0x77c6,	// (0x00052768) input_focus_pane_cp11

0x8b6b,	// (0x00053b0d) title_pane_stacon_g2_ParamLimits

0x8b6b,	// (0x00053b0d) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0005a670) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0005a670) title_pane_stacon_g

0x9496,	// (0x00054438) cursor_press_pane

0x5b09,	// (0x00050aab) popup_fep_hwr_window_ParamLimits

0x5b09,	// (0x00050aab) popup_fep_hwr_window

0x5b83,	// (0x00050b25) popup_fep_vkb_window_ParamLimits

0x5b83,	// (0x00050b25) popup_fep_vkb_window

0xc2f7,	// (0x00057299) cursor_press_pane_g1

0x0002,

0xfb2c,	// (0x0005aace) fep_vkb_side_pane_g_ParamLimits

0x680e,	// (0x000517b0) fep_hwr_candidate_pane_ParamLimits

0x680e,	// (0x000517b0) fep_hwr_candidate_pane

0x6838,	// (0x000517da) fep_hwr_side_pane_ParamLimits

0x6838,	// (0x000517da) fep_hwr_side_pane

0x6858,	// (0x000517fa) fep_hwr_top_pane_ParamLimits

0x6858,	// (0x000517fa) fep_hwr_top_pane

0x6870,	// (0x00051812) fep_hwr_write_pane_ParamLimits

0x6870,	// (0x00051812) fep_hwr_write_pane

0xfb2c,	// (0x0005aace) fep_vkb_side_pane_g

0xc2ff,	// (0x000572a1) fep_hwr_top_pane_g1

0xc311,	// (0x000572b3) fep_hwr_top_pane_g2

0x68aa,	// (0x0005184c) fep_hwr_top_pane_g3

0x0002,

0xfb08,	// (0x0005aaaa) fep_hwr_top_pane_g

0x68bf,	// (0x00051861) fep_hwr_top_text_pane

0x8e83,	// (0x00053e25) fep_hwr_top_text_pane_g1

0xc347,	// (0x000572e9) fep_hwr_top_text_pane_t1

0x69b5,	// (0x00051957) fep_hwr_candidate_pane_g1

0xc59a,	// (0x0005753c) fep_vkb_keypad_pane_g3_ParamLimits

0xc59a,	// (0x0005753c) fep_vkb_keypad_pane_g3

0xc5c2,	// (0x00057564) fep_vkb_keypad_pane_g4_ParamLimits

0xc5c2,	// (0x00057564) fep_vkb_keypad_pane_g4

0xc631,	// (0x000575d3) fep_vkb_bottom_pane_g2_ParamLimits

0xc631,	// (0x000575d3) fep_vkb_bottom_pane_g2

0x0001,

0xfb33,	// (0x0005aad5) fep_vkb_bottom_pane_g_ParamLimits

0xfb33,	// (0x0005aad5) fep_vkb_bottom_pane_g

0xc2a3,	// (0x00057245) cell_vkb_side_pane_g2

0x0001,

0xfb3d,	// (0x0005aadf) cell_vkb_side_pane_g

0xc6bc,	// (0x0005765e) cell_vkb_side_pane_t1

0xc6ca,	// (0x0005766c) cell_vkb_side_pane_t1_copy1

0xc2a3,	// (0x00057245) bg_fep_vkb_candidate_pane_g2

0xc7f6,	// (0x00057798) cell_vkb_candidate_pane_ParamLimits

0xc355,	// (0x000572f7) aid_size_cell_vkb_ParamLimits

0xc355,	// (0x000572f7) aid_size_cell_vkb

0xc7f6,	// (0x00057798) cell_vkb_candidate_pane

0x69dc,	// (0x0005197e) bg_popup_fep_shadow_pane_g1

0xc3e3,	// (0x00057385) fep_vkb_bottom_pane_ParamLimits

0xc3e3,	// (0x00057385) fep_vkb_bottom_pane

0xc419,	// (0x000573bb) fep_vkb_candidate_pane_ParamLimits

0xc419,	// (0x000573bb) fep_vkb_candidate_pane

0xc435,	// (0x000573d7) fep_vkb_keypad_pane_ParamLimits

0xc435,	// (0x000573d7) fep_vkb_keypad_pane

0xc47b,	// (0x0005741d) fep_vkb_side_pane_ParamLimits

0xc47b,	// (0x0005741d) fep_vkb_side_pane

0xc4b7,	// (0x00057459) fep_vkb_top_pane_ParamLimits

0xc4b7,	// (0x00057459) fep_vkb_top_pane

0xc4f3,	// (0x00057495) fep_vkb_top_pane_g1_ParamLimits

0xc4f3,	// (0x00057495) fep_vkb_top_pane_g1

0xc502,	// (0x000574a4) fep_vkb_top_pane_g2_ParamLimits

0xc502,	// (0x000574a4) fep_vkb_top_pane_g2

0xc511,	// (0x000574b3) fep_vkb_top_pane_g3_ParamLimits

0xc511,	// (0x000574b3) fep_vkb_top_pane_g3

0x0003,

0xfb23,	// (0x0005aac5) fep_vkb_top_pane_g_ParamLimits

0xfb23,	// (0x0005aac5) fep_vkb_top_pane_g

0xc52f,	// (0x000574d1) fep_vkb_top_text_pane_ParamLimits

0xc52f,	// (0x000574d1) fep_vkb_top_text_pane

0xc540,	// (0x000574e2) fep_vkb_side_pane_g1_ParamLimits

0xc540,	// (0x000574e2) fep_vkb_side_pane_g1

0xc589,	// (0x0005752b) grid_vkb_side_pane_ParamLimits

0xc589,	// (0x0005752b) grid_vkb_side_pane

0x69e4,	// (0x00051986) bg_popup_fep_shadow_pane_g2

0x69ed,	// (0x0005198f) bg_popup_fep_shadow_pane_g3

0x69f5,	// (0x00051997) bg_popup_fep_shadow_pane_g4

0x69fe,	// (0x000519a0) bg_popup_fep_shadow_pane_g5

0x6a08,	// (0x000519aa) bg_popup_fep_shadow_pane_g6

0x6a10,	// (0x000519b2) bg_popup_fep_shadow_pane_g7

0x8873,	// (0x00053815) bg_popup_fep_shadow_pane_g8

0xc5e0,	// (0x00057582) grid_vkb_keypad_number_pane_ParamLimits

0xc5e0,	// (0x00057582) grid_vkb_keypad_number_pane

0xc5f0,	// (0x00057592) grid_vkb_keypad_pane_ParamLimits

0xc5f0,	// (0x00057592) grid_vkb_keypad_pane

0xc616,	// (0x000575b8) fep_vkb_bottom_pane_g1_ParamLimits

0xc616,	// (0x000575b8) fep_vkb_bottom_pane_g1

0xc63f,	// (0x000575e1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc63f,	// (0x000575e1) grid_vkb_keypad_bottom_left_pane

0xc654,	// (0x000575f6) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc654,	// (0x000575f6) grid_vkb_keypad_bottom_right_pane

0xc669,	// (0x0005760b) fep_vkb_top_text_pane_g1

0xc684,	// (0x00057626) fep_vkb_top_text_pane_t1

0xc699,	// (0x0005763b) cell_vkb_side_pane_ParamLimits

0xc699,	// (0x0005763b) cell_vkb_side_pane

0xc2a3,	// (0x00057245) cell_vkb_side_pane_g1

0xc6d8,	// (0x0005767a) cell_vkb_keypad_pane_ParamLimits

0xc6d8,	// (0x0005767a) cell_vkb_keypad_pane

0xc74d,	// (0x000576ef) cell_vkb_keypad_pane_g1

0x0008,

0xfb50,	// (0x0005aaf2) bg_popup_fep_shadow_pane_g

0x6a22,	// (0x000519c4) cell_hwr_side_pane_g1

0x6a22,	// (0x000519c4) cell_hwr_side_pane_g2

0xc757,	// (0x000576f9) cell_vkb_keypad_pane_t1

0xc765,	// (0x00057707) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc765,	// (0x00057707) cell_vkb_keypad_bottom_left_pane

0xc782,	// (0x00057724) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc782,	// (0x00057724) cell_vkb_keypad_bottom_right_pane

0xc2a3,	// (0x00057245) cell_vkb_keypad_bottom_left_pane_g1

0xc2a3,	// (0x00057245) cell_vkb_keypad_bottom_right_pane_g1

0xc7bb,	// (0x0005775d) cell_vkb_keypad_number_pane_ParamLimits

0xc7bb,	// (0x0005775d) cell_vkb_keypad_number_pane

0xc7da,	// (0x0005777c) cell_vkb_keypad_number_pane_g1

0xc7e4,	// (0x00057786) cell_vkb_keypad_number_pane_g2

0xc7ed,	// (0x0005778f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb42,	// (0x0005aae4) cell_vkb_keypad_number_pane_g

0xc757,	// (0x000576f9) cell_vkb_keypad_number_pane_t1

0xc811,	// (0x000577b3) fep_vkb_candidate_pane_g1

0x0001,

0xfb63,	// (0x0005ab05) cell_hwr_side_pane_g

0xc82a,	// (0x000577cc) cell_hwr_side_pane_t1

0x6a2c,	// (0x000519ce) cell_hwr_side_pane_t1_copy1

0x6a3a,	// (0x000519dc) cell_hwr_candidate_pane_g1

0x6a69,	// (0x00051a0b) cell_hwr_candidate_pane_t1

0xc2a3,	// (0x00057245) cell_vkb_candidate_pane_g2

0xc86e,	// (0x00057810) cell_vkb_candidate_pane_t1

0x67d5,	// (0x00051777) bg_popup_fep_shadow_pane_ParamLimits

0x67d5,	// (0x00051777) bg_popup_fep_shadow_pane

0x688a,	// (0x0005182c) bg_fep_hwr_top_pane_g4

0xc323,	// (0x000572c5) bg_hwr_side_pane_g1_ParamLimits

0xc323,	// (0x000572c5) bg_hwr_side_pane_g1

0x68fb,	// (0x0005189d) cell_hwr_side_pane_ParamLimits

0x68fb,	// (0x0005189d) cell_hwr_side_pane

0x6936,	// (0x000518d8) fep_hwr_write_pane_g1_ParamLimits

0x6936,	// (0x000518d8) fep_hwr_write_pane_g1

0x6943,	// (0x000518e5) fep_hwr_write_pane_g2_ParamLimits

0x6943,	// (0x000518e5) fep_hwr_write_pane_g2

0x6950,	// (0x000518f2) fep_hwr_write_pane_g3_ParamLimits

0x6950,	// (0x000518f2) fep_hwr_write_pane_g3

0x695e,	// (0x00051900) fep_hwr_write_pane_g4_ParamLimits

0x695e,	// (0x00051900) fep_hwr_write_pane_g4

0x0005,

0xfb0f,	// (0x0005aab1) fep_hwr_write_pane_g_ParamLimits

0xfb0f,	// (0x0005aab1) fep_hwr_write_pane_g

0x688a,	// (0x0005182c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x688a,	// (0x0005182c) bg_fep_hwr_candidate_pane_g2

0x6973,	// (0x00051915) cell_hwr_candidate_pane_ParamLimits

0x6973,	// (0x00051915) cell_hwr_candidate_pane

0x69b5,	// (0x00051957) fep_hwr_candidate_pane_g1_ParamLimits

0xc383,	// (0x00057325) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc383,	// (0x00057325) bg_popup_fep_shadow_pane_cp2

0xc521,	// (0x000574c3) fep_vkb_top_pane_g4_ParamLimits

0xc521,	// (0x000574c3) fep_vkb_top_pane_g4

0xc567,	// (0x00057509) fep_vkb_side_pane_g2_ParamLimits

0xc567,	// (0x00057509) fep_vkb_side_pane_g2

0x5086,	// (0x00050028) list_setting_pane_t4_ParamLimits

0x5086,	// (0x00050028) list_setting_pane_t4

0x5120,	// (0x000500c2) list_setting_number_pane_t5_ParamLimits

0x5120,	// (0x000500c2) list_setting_number_pane_t5

0x8eca,	// (0x00053e6c) list_double_heading_pane_cp2_ParamLimits

0x8eca,	// (0x00053e6c) list_double_heading_pane_cp2

0x87a7,	// (0x00053749) list_double_heading_pane_g1_cp2_ParamLimits

0x87a7,	// (0x00053749) list_double_heading_pane_g1_cp2

0x881a,	// (0x000537bc) list_double_heading_pane_g2_cp2_ParamLimits

0x881a,	// (0x000537bc) list_double_heading_pane_g2_cp2

0xc87c,	// (0x0005781e) list_double_heading_pane_t1_cp2_ParamLimits

0xc87c,	// (0x0005781e) list_double_heading_pane_t1_cp2

0xc892,	// (0x00057834) list_double_heading_pane_t2_cp2_ParamLimits

0xc892,	// (0x00057834) list_double_heading_pane_t2_cp2

0x77ae,	// (0x00052750) aid_value_unit2

0x4b46,	// (0x0004fae8) popup_preview_fixed_window

0x7b43,	// (0x00052ae5) bg_popup_preview_window_pane_cp02

0xc8a4,	// (0x00057846) list_preview_fixed_pane

0xc8ea,	// (0x0005788c) list_empty_pane_fp_ParamLimits

0xc8ea,	// (0x0005788c) list_empty_pane_fp

0xc8ea,	// (0x0005788c) list_single_cale_day_pane_fp_ParamLimits

0xc8ea,	// (0x0005788c) list_single_cale_day_pane_fp

0xc8ea,	// (0x0005788c) list_single_graphic_heading_pane_fp_ParamLimits

0xc8ea,	// (0x0005788c) list_single_graphic_heading_pane_fp

0xc8ea,	// (0x0005788c) list_single_graphic_pane_fp_ParamLimits

0xc8ea,	// (0x0005788c) list_single_graphic_pane_fp

0xc8ea,	// (0x0005788c) list_single_heading_pane_fp_ParamLimits

0xc8ea,	// (0x0005788c) list_single_heading_pane_fp

0xc8ea,	// (0x0005788c) list_single_pane_fp_ParamLimits

0xc8ea,	// (0x0005788c) list_single_pane_fp

0xc8ff,	// (0x000578a1) list_single_pane_fp_g1_ParamLimits

0xc8ff,	// (0x000578a1) list_single_pane_fp_g1

0x87a7,	// (0x00053749) list_single_pane_fp_g2_ParamLimits

0x87a7,	// (0x00053749) list_single_pane_fp_g2

0x881a,	// (0x000537bc) list_single_pane_fp_g3_ParamLimits

0x881a,	// (0x000537bc) list_single_pane_fp_g3

0xc90b,	// (0x000578ad) list_single_pane_fp_g4_ParamLimits

0xc90b,	// (0x000578ad) list_single_pane_fp_g4

0x0003,

0xfb76,	// (0x0005ab18) list_single_pane_fp_g_ParamLimits

0xfb76,	// (0x0005ab18) list_single_pane_fp_g

0x7ff8,	// (0x00052f9a) list_single_pane_fp_t1_ParamLimits

0x7ff8,	// (0x00052f9a) list_single_pane_fp_t1

0x800f,	// (0x00052fb1) list_single_graphic_pane_fp_g1_ParamLimits

0x800f,	// (0x00052fb1) list_single_graphic_pane_fp_g1

0xc8ff,	// (0x000578a1) list_single_graphic_pane_fp_g2_ParamLimits

0xc8ff,	// (0x000578a1) list_single_graphic_pane_fp_g2

0x87a7,	// (0x00053749) list_single_graphic_pane_fp_g3_ParamLimits

0x87a7,	// (0x00053749) list_single_graphic_pane_fp_g3

0x881a,	// (0x000537bc) list_single_graphic_pane_fp_g4_ParamLimits

0x881a,	// (0x000537bc) list_single_graphic_pane_fp_g4

0xc90b,	// (0x000578ad) list_single_graphic_pane_fp_g5_ParamLimits

0xc90b,	// (0x000578ad) list_single_graphic_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005ab21) list_single_graphic_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005ab21) list_single_graphic_pane_fp_g

0x801b,	// (0x00052fbd) list_single_graphic_pane_fp_t1_ParamLimits

0x801b,	// (0x00052fbd) list_single_graphic_pane_fp_t1

0x800f,	// (0x00052fb1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x800f,	// (0x00052fb1) list_single_graphic_heading_pane_fp_g1

0xc8ff,	// (0x000578a1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc8ff,	// (0x000578a1) list_single_graphic_heading_pane_fp_g2

0x87a7,	// (0x00053749) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x87a7,	// (0x00053749) list_single_graphic_heading_pane_fp_g3

0x881a,	// (0x000537bc) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x881a,	// (0x000537bc) list_single_graphic_heading_pane_fp_g4

0xc90b,	// (0x000578ad) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc90b,	// (0x000578ad) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005ab21) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005ab21) list_single_graphic_heading_pane_fp_g

0x8031,	// (0x00052fd3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x8031,	// (0x00052fd3) list_single_graphic_heading_pane_fp_t1

0x8047,	// (0x00052fe9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x8047,	// (0x00052fe9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8a,	// (0x0005ab2c) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8a,	// (0x0005ab2c) list_single_graphic_heading_pane_fp_t

0x8059,	// (0x00052ffb) list_single_cale_day_pane_fp_g1_ParamLimits

0x8059,	// (0x00052ffb) list_single_cale_day_pane_fp_g1

0xc917,	// (0x000578b9) list_single_cale_day_pane_fp_g2_ParamLimits

0xc917,	// (0x000578b9) list_single_cale_day_pane_fp_g2

0x8091,	// (0x00053033) list_single_cale_day_pane_fp_g3_ParamLimits

0x8091,	// (0x00053033) list_single_cale_day_pane_fp_g3

0x80b9,	// (0x0005305b) list_single_cale_day_pane_fp_g4_ParamLimits

0x80b9,	// (0x0005305b) list_single_cale_day_pane_fp_g4

0x80dd,	// (0x0005307f) list_single_cale_day_pane_fp_g5_ParamLimits

0x80dd,	// (0x0005307f) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8f,	// (0x0005ab31) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8f,	// (0x0005ab31) list_single_cale_day_pane_fp_g

0x8101,	// (0x000530a3) list_single_cale_day_pane_fp_t1_ParamLimits

0x8101,	// (0x000530a3) list_single_cale_day_pane_fp_t1

0x8127,	// (0x000530c9) list_single_cale_day_pane_fp_t2_ParamLimits

0x8127,	// (0x000530c9) list_single_cale_day_pane_fp_t2

0x8140,	// (0x000530e2) list_single_cale_day_pane_fp_t3_ParamLimits

0x8140,	// (0x000530e2) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9a,	// (0x0005ab3c) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9a,	// (0x0005ab3c) list_single_cale_day_pane_fp_t

0xc8ff,	// (0x000578a1) list_empty_pane_fp_g1_ParamLimits

0xc8ff,	// (0x000578a1) list_empty_pane_fp_g1

0x8159,	// (0x000530fb) list_empty_pane_fp_t1

0x8167,	// (0x00053109) list_empty_pane_fp_t2

0x0001,

0xfba1,	// (0x0005ab43) list_empty_pane_fp_t

0xc8ff,	// (0x000578a1) list_single_heading_pane_fp_g1_ParamLimits

0xc8ff,	// (0x000578a1) list_single_heading_pane_fp_g1

0x87a7,	// (0x00053749) list_single_heading_pane_fp_g2_ParamLimits

0x87a7,	// (0x00053749) list_single_heading_pane_fp_g2

0x881a,	// (0x000537bc) list_single_heading_pane_fp_g3_ParamLimits

0x881a,	// (0x000537bc) list_single_heading_pane_fp_g3

0x0002,

0xfba6,	// (0x0005ab48) list_single_heading_pane_fp_g_ParamLimits

0xfba6,	// (0x0005ab48) list_single_heading_pane_fp_g

0x8175,	// (0x00053117) list_single_heading_pane_fp_t1_ParamLimits

0x8175,	// (0x00053117) list_single_heading_pane_fp_t1

0x8187,	// (0x00053129) list_single_heading_pane_fp_t2_ParamLimits

0x8187,	// (0x00053129) list_single_heading_pane_fp_t2

0x0001,

0xfbad,	// (0x0005ab4f) list_single_heading_pane_fp_t_ParamLimits

0xfbad,	// (0x0005ab4f) list_single_heading_pane_fp_t

0x8a02,	// (0x000539a4) aid_size_cell_fast

0x7ab3,	// (0x00052a55) soft_indicator_pane_cp1_t1

0x8a3f,	// (0x000539e1) cell_app_pane_cp2_ParamLimits

0x8a3f,	// (0x000539e1) cell_app_pane_cp2

0x67f7,	// (0x00051799) fep_hwr_candidate_drop_down_list_pane

0x69cf,	// (0x00051971) fep_hwr_candidate_pane_g3_ParamLimits

0x69cf,	// (0x00051971) fep_hwr_candidate_pane_g3

0x320d,	// (0x0004e1af) fep_hwr_candidate_pane_g4_ParamLimits

0x320d,	// (0x0004e1af) fep_hwr_candidate_pane_g4

0x0002,

0xfb1c,	// (0x0005aabe) fep_hwr_candidate_pane_g_ParamLimits

0xfb1c,	// (0x0005aabe) fep_hwr_candidate_pane_g

0xc408,	// (0x000573aa) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc408,	// (0x000573aa) fep_vkb_candidate_drop_down_list_pane

0xc819,	// (0x000577bb) fep_vkb_candidate_pane_g3

0xc821,	// (0x000577c3) fep_vkb_candidate_pane_g4

0x0002,

0xfb49,	// (0x0005aaeb) fep_vkb_candidate_pane_g

0x6a3a,	// (0x000519dc) cell_hwr_candidate_pane_g1_ParamLimits

0x6a48,	// (0x000519ea) cell_hwr_candidate_pane_g3_ParamLimits

0x6a48,	// (0x000519ea) cell_hwr_candidate_pane_g3

0xe0f6,	// (0x00059098) cell_hwr_candidate_pane_g4_ParamLimits

0xe0f6,	// (0x00059098) cell_hwr_candidate_pane_g4

0x0002,

0xfb68,	// (0x0005ab0a) cell_hwr_candidate_pane_g_ParamLimits

0xfb68,	// (0x0005ab0a) cell_hwr_candidate_pane_g

0xc838,	// (0x000577da) cell_vkb_candidate_pane_g3_ParamLimits

0xc838,	// (0x000577da) cell_vkb_candidate_pane_g3

0xc853,	// (0x000577f5) cell_vkb_candidate_pane_g4_ParamLimits

0xc853,	// (0x000577f5) cell_vkb_candidate_pane_g4

0xc923,	// (0x000578c5) cell_app_pane_cp2_g1_ParamLimits

0xc923,	// (0x000578c5) cell_app_pane_cp2_g1

0xc941,	// (0x000578e3) cell_app_pane_cp2_g2_ParamLimits

0xc941,	// (0x000578e3) cell_app_pane_cp2_g2

0x0001,

0xfbb2,	// (0x0005ab54) cell_app_pane_cp2_g_ParamLimits

0xfbb2,	// (0x0005ab54) cell_app_pane_cp2_g

0xc98f,	// (0x00057931) cell_app_pane_cp2_t1_ParamLimits

0xc98f,	// (0x00057931) cell_app_pane_cp2_t1

0x880c,	// (0x000537ae) grid_highlight_pane_cp1_ParamLimits

0x880c,	// (0x000537ae) grid_highlight_pane_cp1

0x6a87,	// (0x00051a29) cell_hwr_candidate_pane_cp1_ParamLimits

0x6a87,	// (0x00051a29) cell_hwr_candidate_pane_cp1

0x6a3a,	// (0x000519dc) fep_hwr_candidate_drop_down_list_pane_g1

0x6aa6,	// (0x00051a48) fep_hwr_candidate_drop_down_list_pane_g2

0x6ab3,	// (0x00051a55) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb7,	// (0x0005ab59) fep_hwr_candidate_drop_down_list_pane_g

0x6ac0,	// (0x00051a62) fep_hwr_candidate_drop_down_list_scroll_pane

0x6ac9,	// (0x00051a6b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6ac9,	// (0x00051a6b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6ad6,	// (0x00051a78) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6ad6,	// (0x00051a78) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6ae3,	// (0x00051a85) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6ae3,	// (0x00051a85) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6af0,	// (0x00051a92) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6af0,	// (0x00051a92) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6b0b,	// (0x00051aad) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6b0b,	// (0x00051aad) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6b26,	// (0x00051ac8) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6b26,	// (0x00051ac8) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6b41,	// (0x00051ae3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6b41,	// (0x00051ae3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6b5c,	// (0x00051afe) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6b5c,	// (0x00051afe) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbe,	// (0x0005ab60) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbe,	// (0x0005ab60) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9a1,	// (0x00057943) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9a1,	// (0x00057943) cell_vkb_candidate_pane_cp1

0xc521,	// (0x000574c3) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc521,	// (0x000574c3) fep_vkb_candidate_drop_down_list_pane_g1

0xc9c1,	// (0x00057963) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc9c1,	// (0x00057963) fep_vkb_candidate_drop_down_list_pane_g2

0xc9ce,	// (0x00057970) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc9ce,	// (0x00057970) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbcf,	// (0x0005ab71) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbcf,	// (0x0005ab71) fep_vkb_candidate_drop_down_list_pane_g

0xc9db,	// (0x0005797d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc9db,	// (0x0005797d) fep_vkb_candidate_drop_down_list_scroll_pane

0xc9e8,	// (0x0005798a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc9e8,	// (0x0005798a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc9f5,	// (0x00057997) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc9f5,	// (0x00057997) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca01,	// (0x000579a3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca01,	// (0x000579a3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc94d,	// (0x000578ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc94d,	// (0x000578ef) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc96e,	// (0x00057910) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc96e,	// (0x00057910) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xca0d,	// (0x000579af) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xca0d,	// (0x000579af) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xca2e,	// (0x000579d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xca2e,	// (0x000579d0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xca4f,	// (0x000579f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xca4f,	// (0x000579f1) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x0005ab78) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x0005ab78) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x77e4,	// (0x00052786) title_pane_g1_ParamLimits

0x77f1,	// (0x00052793) title_pane_g2_ParamLimits

0xf54e,	// (0x0005a4f0) title_pane_g_ParamLimits

0x8e73,	// (0x00053e15) aid_call2_pane

0x8e7b,	// (0x00053e1d) aid_call_pane

0x8e83,	// (0x00053e25) popup_clock_analogue_window_g1

0x8e83,	// (0x00053e25) popup_clock_analogue_window_g2

0x558a,	// (0x0005052c) popup_clock_analogue_window_g3

0x5593,	// (0x00050535) popup_clock_analogue_window_g4

0x77d0,	// (0x00052772) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0005a69f) popup_clock_analogue_window_g

0x559b,	// (0x0005053d) popup_clock_analogue_window_t1

0x55a9,	// (0x0005054b) clock_digital_number_pane_ParamLimits

0x55a9,	// (0x0005054b) clock_digital_number_pane

0x55b5,	// (0x00050557) clock_digital_number_pane_cp02_ParamLimits

0x55b5,	// (0x00050557) clock_digital_number_pane_cp02

0x55c1,	// (0x00050563) clock_digital_number_pane_cp03_ParamLimits

0x55c1,	// (0x00050563) clock_digital_number_pane_cp03

0x55cd,	// (0x0005056f) clock_digital_number_pane_cp04_ParamLimits

0x55cd,	// (0x0005056f) clock_digital_number_pane_cp04

0x55d9,	// (0x0005057b) clock_digital_separator_pane_ParamLimits

0x55d9,	// (0x0005057b) clock_digital_separator_pane

0x55e5,	// (0x00050587) popup_clock_digital_window_t1_ParamLimits

0x55e5,	// (0x00050587) popup_clock_digital_window_t1

0x77d0,	// (0x00052772) clock_digital_number_pane_g1

0x77d0,	// (0x00052772) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0005a6aa) clock_digital_number_pane_g

0x77d0,	// (0x00052772) clock_digital_separator_pane_g1

0x77d0,	// (0x00052772) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0005a6aa) clock_digital_separator_pane_g

0x97f6,	// (0x00054798) aid_fill_nsta_ParamLimits

0x993c,	// (0x000548de) indicator_nsta_pane_ParamLimits

0x9ac1,	// (0x00054a63) popup_clock_analogue_window

0x9ac1,	// (0x00054a63) popup_clock_digital_window

0x78ba,	// (0x0005285c) grid_indicator_nsta_pane_ParamLimits

0xbca0,	// (0x00056c42) clock_nsta_pane_t2

0x0001,

0xfa9c,	// (0x0005aa3e) clock_nsta_pane_t

0x554e,	// (0x000504f0) aid_size_max_handle

0x5558,	// (0x000504fa) aid_size_min_handle

0x9496,	// (0x00054438) editor_scroll_pane

0xca6a,	// (0x00057a0c) ex_editor_pane

0x8970,	// (0x00053912) scroll_pane_cp13

0x879f,	// (0x00053741) scroll_pane_cp14

0x8eb2,	// (0x00053e54) scroll_pane_cp36

0x8ede,	// (0x00053e80) list_single_graphic_hl_pane_cp2_ParamLimits

0x8ede,	// (0x00053e80) list_single_graphic_hl_pane_cp2

0x64f3,	// (0x00051495) list_single_graphic_hl_pane_ParamLimits

0x64f3,	// (0x00051495) list_single_graphic_hl_pane

0x819d,	// (0x0005313f) aid_size_min_hl_cp1

0xca72,	// (0x00057a14) list_highlight_pane_cp34_ParamLimits

0xca72,	// (0x00057a14) list_highlight_pane_cp34

0xca83,	// (0x00057a25) list_single_graphic_hl_pane_g1_ParamLimits

0xca83,	// (0x00057a25) list_single_graphic_hl_pane_g1

0x81a6,	// (0x00053148) list_single_graphic_hl_pane_g2_ParamLimits

0x81a6,	// (0x00053148) list_single_graphic_hl_pane_g2

0x81a6,	// (0x00053148) list_single_graphic_hl_pane_g3_ParamLimits

0x81a6,	// (0x00053148) list_single_graphic_hl_pane_g3

0x9407,	// (0x000543a9) list_single_graphic_hl_pane_g4_ParamLimits

0x9407,	// (0x000543a9) list_single_graphic_hl_pane_g4

0x81b2,	// (0x00053154) list_single_graphic_hl_pane_g5_ParamLimits

0x81b2,	// (0x00053154) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x0005ab89) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x0005ab89) list_single_graphic_hl_pane_g

0x81c6,	// (0x00053168) list_single_graphic_hl_pane_t1_ParamLimits

0x81c6,	// (0x00053168) list_single_graphic_hl_pane_t1

0xca90,	// (0x00057a32) aid_size_min_hl_cp2

0xca99,	// (0x00057a3b) list_highlight_pane_cp34_cp2_ParamLimits

0xca99,	// (0x00057a3b) list_highlight_pane_cp34_cp2

0xca83,	// (0x00057a25) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xca83,	// (0x00057a25) list_single_graphic_hl_pane_g1_cp2

0xcaa6,	// (0x00057a48) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcaa6,	// (0x00057a48) list_single_graphic_hl_pane_g2_cp2

0xcab2,	// (0x00057a54) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcab2,	// (0x00057a54) list_single_graphic_hl_pane_g3_cp2

0xcac0,	// (0x00057a62) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xcac0,	// (0x00057a62) list_single_graphic_hl_pane_g4_cp2

0xcacc,	// (0x00057a6e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcacc,	// (0x00057a6e) list_single_graphic_hl_pane_g5_cp2

0x5907,	// (0x000508a9) control_pane_g4_ParamLimits

0x5907,	// (0x000508a9) control_pane_g4

0x97d4,	// (0x00054776) bg_popup_sub_pane_cp10_ParamLimits

0xc2ad,	// (0x0005724f) list_choice_list_pane_ParamLimits

0xc2bc,	// (0x0005725e) scroll_pane_cp23

0x7b43,	// (0x00052ae5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8a4,	// (0x00057846) list_preview_fixed_pane_ParamLimits

0xc8ba,	// (0x0005785c) list_preview_fixed_pane_cp_ParamLimits

0xc8ba,	// (0x0005785c) list_preview_fixed_pane_cp

0xc8c6,	// (0x00057868) popup_preview_fixed_window_g1_ParamLimits

0xc8c6,	// (0x00057868) popup_preview_fixed_window_g1

0xc8d2,	// (0x00057874) popup_preview_fixed_window_g2_ParamLimits

0xc8d2,	// (0x00057874) popup_preview_fixed_window_g2

0x0002,

0xfb6f,	// (0x0005ab11) popup_preview_fixed_window_g_ParamLimits

0xfb6f,	// (0x0005ab11) popup_preview_fixed_window_g

0x54c2,	// (0x00050464) aid_navi_side_left_pane_ParamLimits

0x54d7,	// (0x00050479) aid_navi_side_right_pane_ParamLimits

0x54ef,	// (0x00050491) navi_icon_pane_stacon_ParamLimits

0x5503,	// (0x000504a5) navi_navi_pane_stacon_ParamLimits

0x54ef,	// (0x00050491) navi_text_pane_stacon_ParamLimits

0x4a07,	// (0x0004f9a9) main_text_info_pane

0xcaf6,	// (0x00057a98) listscroll_text_info_pane

0xcafe,	// (0x00057aa0) list_text_info_pane_ParamLimits

0xcafe,	// (0x00057aa0) list_text_info_pane

0xcb0d,	// (0x00057aaf) scroll_pane_cp24_ParamLimits

0xcb0d,	// (0x00057aaf) scroll_pane_cp24

0xcb2b,	// (0x00057acd) list_text_info_pane_t1_ParamLimits

0xcb2b,	// (0x00057acd) list_text_info_pane_t1

0x5a7b,	// (0x00050a1d) popup_fast_swap2_window_ParamLimits

0x5a7b,	// (0x00050a1d) popup_fast_swap2_window

0xcb5c,	// (0x00057afe) aid_size_cell_fast2

0x77c6,	// (0x00052768) bg_popup_window_pane_cp17

0xa148,	// (0x000550ea) heading_pane_cp2

0x8469,	// (0x0005340b) listscroll_fast2_pane

0xcb66,	// (0x00057b08) grid_fast2_pane

0xcb70,	// (0x00057b12) listscroll_fast2_pane_g1

0xcb78,	// (0x00057b1a) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x0005ab94) listscroll_fast2_pane_g

0x8970,	// (0x00053912) scroll_pane_cp26

0xcb82,	// (0x00057b24) cell_fast2_pane_ParamLimits

0xcb82,	// (0x00057b24) cell_fast2_pane

0xcb97,	// (0x00057b39) cell_fast2_pane_g1

0xcba0,	// (0x00057b42) cell_fast2_pane_g2

0xcba9,	// (0x00057b4b) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x0005ab99) cell_fast2_pane_g

0x855c,	// (0x000534fe) grid_highlight_pane_cp9

0x5a39,	// (0x000509db) main_eswt_pane_ParamLimits

0x5a39,	// (0x000509db) main_eswt_pane

0xcb22,	// (0x00057ac4) list_single_text_info_pane

0xcbb1,	// (0x00057b53) eswt_ctrl_button_pane

0xcbb1,	// (0x00057b53) eswt_ctrl_canvas_pane

0xcbb9,	// (0x00057b5b) eswt_ctrl_combo_pane

0xcbb1,	// (0x00057b53) eswt_ctrl_default_pane

0xcbb1,	// (0x00057b53) eswt_ctrl_label_pane

0xcbc1,	// (0x00057b63) eswt_ctrl_wait_pane

0xcbc9,	// (0x00057b6b) eswt_shell_pane

0x77c6,	// (0x00052768) listscroll_eswt_app_pane

0xcbe9,	// (0x00057b8b) popup_eswt_tasktip_window_ParamLimits

0xcbe9,	// (0x00057b8b) popup_eswt_tasktip_window

0x9d5e,	// (0x00054d00) bg_popup_window_pane_cp18

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1_ParamLimits

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1

0xcc07,	// (0x00057ba9) eswt_control_pane_g2_ParamLimits

0xcc07,	// (0x00057ba9) eswt_control_pane_g2

0xcc14,	// (0x00057bb6) eswt_control_pane_g3_ParamLimits

0xcc14,	// (0x00057bb6) eswt_control_pane_g3

0xcc21,	// (0x00057bc3) eswt_control_pane_g4_ParamLimits

0xcc21,	// (0x00057bc3) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x0005aba0) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x0005aba0) eswt_control_pane_g

0x880c,	// (0x000537ae) bg_button_pane_ParamLimits

0x880c,	// (0x000537ae) bg_button_pane

0x8571,	// (0x00053513) common_borders_pane_copy2_ParamLimits

0x8571,	// (0x00053513) common_borders_pane_copy2

0xcc2e,	// (0x00057bd0) control_button_pane_g1_ParamLimits

0xcc2e,	// (0x00057bd0) control_button_pane_g1

0xcc3a,	// (0x00057bdc) control_button_pane_g2_ParamLimits

0xcc3a,	// (0x00057bdc) control_button_pane_g2

0xcc46,	// (0x00057be8) control_button_pane_g3_ParamLimits

0xcc46,	// (0x00057be8) control_button_pane_g3

0x0002,

0xfc07,	// (0x0005aba9) control_button_pane_g_ParamLimits

0xfc07,	// (0x0005aba9) control_button_pane_g

0xcc5a,	// (0x00057bfc) control_button_pane_t1

0xcc68,	// (0x00057c0a) control_button_pane_t2

0x0001,

0xfc0e,	// (0x0005abb0) control_button_pane_t

0x9cea,	// (0x00054c8c) bg_button_pane_g1

0x9cfa,	// (0x00054c9c) bg_button_pane_g2

0x9cf2,	// (0x00054c94) bg_button_pane_g3

0x9d0a,	// (0x00054cac) bg_button_pane_g4

0x9d02,	// (0x00054ca4) bg_button_pane_g5

0x9d12,	// (0x00054cb4) bg_button_pane_g6

0x9d1a,	// (0x00054cbc) bg_button_pane_g7

0x9d2a,	// (0x00054ccc) bg_button_pane_g8

0x9d22,	// (0x00054cc4) bg_button_pane_g9

0x0008,

0xf86b,	// (0x0005a80d) bg_button_pane_g

0xc268,	// (0x0005720a) common_borders_pane_ParamLimits

0xc268,	// (0x0005720a) common_borders_pane

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1_copy1_ParamLimits

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1_copy1

0xcc07,	// (0x00057ba9) eswt_control_pane_g2_copy1_ParamLimits

0xcc07,	// (0x00057ba9) eswt_control_pane_g2_copy1

0xcc14,	// (0x00057bb6) eswt_control_pane_g3_copy1_ParamLimits

0xcc14,	// (0x00057bb6) eswt_control_pane_g3_copy1

0xcc21,	// (0x00057bc3) eswt_control_pane_g4_copy1_ParamLimits

0xcc21,	// (0x00057bc3) eswt_control_pane_g4_copy1

0xc2a3,	// (0x00057245) bg_eswt_ctrl_canvas_pane_g1

0xc268,	// (0x0005720a) common_borders_pane_cp2_ParamLimits

0xc268,	// (0x0005720a) common_borders_pane_cp2

0xc268,	// (0x0005720a) common_borders_pane_cp3_ParamLimits

0xc268,	// (0x0005720a) common_borders_pane_cp3

0xcc76,	// (0x00057c18) separator_horizontal_pane

0xcc7e,	// (0x00057c20) separator_vertical_pane

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1_copy2_ParamLimits

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1_copy2

0xcc07,	// (0x00057ba9) eswt_control_pane_g2_copy2_ParamLimits

0xcc07,	// (0x00057ba9) eswt_control_pane_g2_copy2

0xcc14,	// (0x00057bb6) eswt_control_pane_g3_copy2_ParamLimits

0xcc14,	// (0x00057bb6) eswt_control_pane_g3_copy2

0xcc21,	// (0x00057bc3) eswt_control_pane_g4_copy2_ParamLimits

0xcc21,	// (0x00057bc3) eswt_control_pane_g4_copy2

0x77c6,	// (0x00052768) common_borders_pane_cp4

0xcc87,	// (0x00057c29) separator_horizontal_pane_g1

0xcc90,	// (0x00057c32) separator_horizontal_pane_g2

0xcc99,	// (0x00057c3b) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x0005abb5) separator_horizontal_pane_g

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1_copy3_ParamLimits

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1_copy3

0xcc07,	// (0x00057ba9) eswt_control_pane_g2_copy3_ParamLimits

0xcc07,	// (0x00057ba9) eswt_control_pane_g2_copy3

0xcc14,	// (0x00057bb6) eswt_control_pane_g3_copy3_ParamLimits

0xcc14,	// (0x00057bb6) eswt_control_pane_g3_copy3

0xcc21,	// (0x00057bc3) eswt_control_pane_g4_copy3_ParamLimits

0xcc21,	// (0x00057bc3) eswt_control_pane_g4_copy3

0x77c6,	// (0x00052768) common_borders_pane_cp5

0xcca2,	// (0x00057c44) separator_vertical_pane_g1

0xccab,	// (0x00057c4d) separator_vertical_pane_g2

0xccb4,	// (0x00057c56) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x0005abbc) separator_vertical_pane_g

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1_copy4_ParamLimits

0xcbfa,	// (0x00057b9c) eswt_control_pane_g1_copy4

0xcc07,	// (0x00057ba9) eswt_control_pane_g2_copy4_ParamLimits

0xcc07,	// (0x00057ba9) eswt_control_pane_g2_copy4

0xcc14,	// (0x00057bb6) eswt_control_pane_g3_copy4_ParamLimits

0xcc14,	// (0x00057bb6) eswt_control_pane_g3_copy4

0xcc21,	// (0x00057bc3) eswt_control_pane_g4_copy4_ParamLimits

0xcc21,	// (0x00057bc3) eswt_control_pane_g4_copy4

0xccbd,	// (0x00057c5f) eswt_ctrl_combo_button_pane

0xccc5,	// (0x00057c67) eswt_ctrl_input_pane

0xcccd,	// (0x00057c6f) popup_choice_list_window_cp70

0xccd5,	// (0x00057c77) eswt_ctrl_input_pane_t1

0x77c6,	// (0x00052768) input_focus_pane_cp70

0xc268,	// (0x0005720a) bg_button_pane_cp70_ParamLimits

0xc268,	// (0x0005720a) bg_button_pane_cp70

0xcce3,	// (0x00057c85) eswt_ctrl_combo_button_pane_g1

0xcceb,	// (0x00057c8d) wait_bar_pane_cp70

0x9d5e,	// (0x00054d00) bg_popup_window_pane_cp70_ParamLimits

0x9d5e,	// (0x00054d00) bg_popup_window_pane_cp70

0xccf3,	// (0x00057c95) popup_eswt_tasktip_window_t1

0xcd09,	// (0x00057cab) wait_bar_pane_cp71_ParamLimits

0xcd09,	// (0x00057cab) wait_bar_pane_cp71

0xcd15,	// (0x00057cb7) grid_eswt_app_pane

0x8c8c,	// (0x00053c2e) scroll_pane_cp70

0xcd1e,	// (0x00057cc0) cell_eswt_app_pane_ParamLimits

0xcd1e,	// (0x00057cc0) cell_eswt_app_pane

0xcd4e,	// (0x00057cf0) cell_eswt_app_pane_g1_ParamLimits

0xcd4e,	// (0x00057cf0) cell_eswt_app_pane_g1

0xcd7d,	// (0x00057d1f) cell_eswt_app_pane_g2_ParamLimits

0xcd7d,	// (0x00057d1f) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x0005abc3) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x0005abc3) cell_eswt_app_pane_g

0xcda6,	// (0x00057d48) cell_eswt_app_pane_t1_ParamLimits

0xcda6,	// (0x00057d48) cell_eswt_app_pane_t1

0xcdd8,	// (0x00057d7a) grid_highlight_pane_cp70_ParamLimits

0xcdd8,	// (0x00057d7a) grid_highlight_pane_cp70

0x936b,	// (0x0005430d) set_content_pane_g1

0x9735,	// (0x000546d7) status_small_volume_pane

0x6b77,	// (0x00051b19) status_small_volume_pane_g1

0x6b7f,	// (0x00051b21) volume_small2_pane

0x6b88,	// (0x00051b2a) volume_small2_pane_g1

0x6b91,	// (0x00051b33) volume_small2_pane_g2

0x6b9a,	// (0x00051b3c) volume_small2_pane_g3

0x6ba3,	// (0x00051b45) volume_small2_pane_g4

0x6bac,	// (0x00051b4e) volume_small2_pane_g5

0x6bb5,	// (0x00051b57) volume_small2_pane_g6

0x6bbe,	// (0x00051b60) volume_small2_pane_g7

0x6bc7,	// (0x00051b69) volume_small2_pane_g8

0x6bd0,	// (0x00051b72) volume_small2_pane_g9

0x6bd9,	// (0x00051b7b) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x0005abc8) volume_small2_pane_g

0xc669,	// (0x0005760b) fep_vkb_top_text_pane_g1_ParamLimits

0xc684,	// (0x00057626) fep_vkb_top_text_pane_t1_ParamLimits

0xc8de,	// (0x00057880) popup_preview_fixed_window_g3_ParamLimits

0xc8de,	// (0x00057880) popup_preview_fixed_window_g3

0x5f2a,	// (0x00050ecc) popup_toolbar_trans_pane

0xb0ad,	// (0x0005604f) aid_height_set_list_ParamLimits

0xb0be,	// (0x00056060) aid_size_parent_ParamLimits

0x97d4,	// (0x00054776) list_highlight_pane_cp2_ParamLimits

0x936b,	// (0x0005430d) set_content_pane_g1_ParamLimits

0x650e,	// (0x000514b0) list_single_image_pane_ParamLimits

0x650e,	// (0x000514b0) list_single_image_pane

0xcde4,	// (0x00057d86) aid_size_cell_image_ParamLimits

0xcde4,	// (0x00057d86) aid_size_cell_image

0xcdf1,	// (0x00057d93) grid_single_image_pane_ParamLimits

0xcdf1,	// (0x00057d93) grid_single_image_pane

0x9ab5,	// (0x00054a57) list_single_image_pane_g1_ParamLimits

0x9ab5,	// (0x00054a57) list_single_image_pane_g1

0xcdfd,	// (0x00057d9f) list_single_image_pane_g2_ParamLimits

0xcdfd,	// (0x00057d9f) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x0005abdd) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x0005abdd) list_single_image_pane_g

0xce11,	// (0x00057db3) list_single_image_pane_t1_ParamLimits

0xce11,	// (0x00057db3) list_single_image_pane_t1

0xce27,	// (0x00057dc9) cell_image_list_pane_ParamLimits

0xce27,	// (0x00057dc9) cell_image_list_pane

0xce3b,	// (0x00057ddd) cell_image_list_pane_g1

0xce44,	// (0x00057de6) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x0005abe2) cell_image_list_pane_g

0xce4d,	// (0x00057def) aid_size_cell_tb_trans_pane

0x880c,	// (0x000537ae) bg_tb_trans_pane

0xce5f,	// (0x00057e01) grid_tb_trans_pane

0x9cea,	// (0x00054c8c) bg_tb_trans_pane_g1

0x9cfa,	// (0x00054c9c) bg_tb_trans_pane_g2

0x9cf2,	// (0x00054c94) bg_tb_trans_pane_g3

0x9d0a,	// (0x00054cac) bg_tb_trans_pane_g4

0x9d02,	// (0x00054ca4) bg_tb_trans_pane_g5

0x9d2a,	// (0x00054ccc) bg_tb_trans_pane_g6

0x9d22,	// (0x00054cc4) bg_tb_trans_pane_g7

0x9d12,	// (0x00054cb4) bg_tb_trans_pane_g8

0x9d1a,	// (0x00054cbc) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x0005abe7) bg_tb_trans_pane_g

0xce73,	// (0x00057e15) cell_toolbar_trans_pane_ParamLimits

0xce73,	// (0x00057e15) cell_toolbar_trans_pane

0xc2a3,	// (0x00057245) cell_toolbar_trans_pane_g1

0xbe6d,	// (0x00056e0f) list_form2_midp_pane_t1

0xbe7b,	// (0x00056e1d) list_form2_midp_pane_t2

0x0001,

0xfae2,	// (0x0005aa84) list_form2_midp_pane_t

0xbe89,	// (0x00056e2b) scroll_pane_cp51_ParamLimits

0xc045,	// (0x00056fe7) form2_midp_wait_pane_g1

0xc04e,	// (0x00056ff0) form2_midp_wait_pane_g2

0xc057,	// (0x00056ff9) form2_midp_wait_pane_g3

0x0002,

0xfaf7,	// (0x0005aa99) form2_midp_wait_pane_g

0x78ba,	// (0x0005285c) list_highlight_pane_cp21_ParamLimits

0xc0ae,	// (0x00057050) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc0bd,	// (0x0005705f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x7d8b,	// (0x00052d2d) list_single_2graphic_im_pane_ParamLimits

0x7d8b,	// (0x00052d2d) list_single_2graphic_im_pane

0xce99,	// (0x00057e3b) list_single_2graphic_im_pane_g1_ParamLimits

0xce99,	// (0x00057e3b) list_single_2graphic_im_pane_g1

0xceaa,	// (0x00057e4c) list_single_2graphic_im_pane_g2_ParamLimits

0xceaa,	// (0x00057e4c) list_single_2graphic_im_pane_g2

0xceb6,	// (0x00057e58) list_single_2graphic_im_pane_g3_ParamLimits

0xceb6,	// (0x00057e58) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x0005abfa) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x0005abfa) list_single_2graphic_im_pane_g

0xced6,	// (0x00057e78) list_single_2graphic_im_pane_t1_ParamLimits

0xced6,	// (0x00057e78) list_single_2graphic_im_pane_t1

0xc8ea,	// (0x0005788c) list_single_graphic_2heading_pane_fp_ParamLimits

0xc8ea,	// (0x0005788c) list_single_graphic_2heading_pane_fp

0x800f,	// (0x00052fb1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x800f,	// (0x00052fb1) list_single_graphic_2heading_pane_fp_g1

0xc8ff,	// (0x000578a1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc8ff,	// (0x000578a1) list_single_graphic_2heading_pane_fp_g2

0x87a7,	// (0x00053749) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x87a7,	// (0x00053749) list_single_graphic_2heading_pane_fp_g3

0x881a,	// (0x000537bc) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x881a,	// (0x000537bc) list_single_graphic_2heading_pane_fp_g4

0xc90b,	// (0x000578ad) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc90b,	// (0x000578ad) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7f,	// (0x0005ab21) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7f,	// (0x0005ab21) list_single_graphic_2heading_pane_fp_g

0x81dc,	// (0x0005317e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x81dc,	// (0x0005317e) list_single_graphic_2heading_pane_fp_t1

0x8047,	// (0x00052fe9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x8047,	// (0x00052fe9) list_single_graphic_2heading_pane_fp_t2

0x81f2,	// (0x00053194) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x81f2,	// (0x00053194) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x0005ac03) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x0005ac03) list_single_graphic_2heading_pane_fp_t

0xc32f,	// (0x000572d1) fep_hwr_write_pane_g5_ParamLimits

0xc32f,	// (0x000572d1) fep_hwr_write_pane_g5

0xc33b,	// (0x000572dd) fep_hwr_write_pane_g6_ParamLimits

0xc33b,	// (0x000572dd) fep_hwr_write_pane_g6

0xcbc9,	// (0x00057b6b) eswt_shell_pane_ParamLimits

0x9d5e,	// (0x00054d00) bg_popup_window_pane_cp18_ParamLimits

0xb006,	// (0x00055fa8) heading_pane_cp70

0xccf3,	// (0x00057c95) popup_eswt_tasktip_window_t1_ParamLimits

0x984b,	// (0x000547ed) aid_touch_tab_arrow_left

0x985a,	// (0x000547fc) aid_touch_tab_arrow_right

0x7802,	// (0x000527a4) title_pane_g3_ParamLimits

0x7802,	// (0x000527a4) title_pane_g3

0x87cb,	// (0x0005376d) set_value_pane_g1

0x5f2a,	// (0x00050ecc) popup_toolbar_trans_pane_ParamLimits

0xce4d,	// (0x00057def) aid_size_cell_tb_trans_pane_ParamLimits

0x880c,	// (0x000537ae) bg_tb_trans_pane_ParamLimits

0xce5f,	// (0x00057e01) grid_tb_trans_pane_ParamLimits

0x7b43,	// (0x00052ae5) cont_note_pane_ParamLimits

0x7b43,	// (0x00052ae5) cont_note_pane

0x8571,	// (0x00053513) cont_snote2_single_text_pane_ParamLimits

0x8571,	// (0x00053513) cont_snote2_single_text_pane

0x8571,	// (0x00053513) cont_snote2_single_graphic_pane_ParamLimits

0x8571,	// (0x00053513) cont_snote2_single_graphic_pane

0xa363,	// (0x00055305) cont_note_wait_pane_ParamLimits

0xa363,	// (0x00055305) cont_note_wait_pane

0xa363,	// (0x00055305) cont_note_image_pane_ParamLimits

0xa363,	// (0x00055305) cont_note_image_pane

0xcf07,	// (0x00057ea9) popup_note2_window_g1_ParamLimits

0xcf07,	// (0x00057ea9) popup_note2_window_g1

0xcf38,	// (0x00057eda) popup_note2_window_t1_ParamLimits

0xcf38,	// (0x00057eda) popup_note2_window_t1

0xcf7d,	// (0x00057f1f) popup_note2_window_t2_ParamLimits

0xcf7d,	// (0x00057f1f) popup_note2_window_t2

0xcfc2,	// (0x00057f64) popup_note2_window_t3_ParamLimits

0xcfc2,	// (0x00057f64) popup_note2_window_t3

0xd007,	// (0x00057fa9) popup_note2_window_t4_ParamLimits

0xd007,	// (0x00057fa9) popup_note2_window_t4

0x7bc7,	// (0x00052b69) popup_note2_window_t5_ParamLimits

0x7bc7,	// (0x00052b69) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x0005ac0f) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x0005ac0f) popup_note2_window_t

0xd036,	// (0x00057fd8) popup_note2_image_window_g1_ParamLimits

0xd036,	// (0x00057fd8) popup_note2_image_window_g1

0xd042,	// (0x00057fe4) popup_note2_image_window_g2_ParamLimits

0xd042,	// (0x00057fe4) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x0005ac1a) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x0005ac1a) popup_note2_image_window_g

0xd054,	// (0x00057ff6) popup_note2_image_window_t1_ParamLimits

0xd054,	// (0x00057ff6) popup_note2_image_window_t1

0xd06c,	// (0x0005800e) popup_note2_image_window_t2_ParamLimits

0xd06c,	// (0x0005800e) popup_note2_image_window_t2

0xd084,	// (0x00058026) popup_note2_image_window_t3_ParamLimits

0xd084,	// (0x00058026) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x0005ac1f) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x0005ac1f) popup_note2_image_window_t

0xa371,	// (0x00055313) popup_note2_wait_window_g1_ParamLimits

0xa371,	// (0x00055313) popup_note2_wait_window_g1

0xd0a0,	// (0x00058042) popup_note2_wait_window_g2_ParamLimits

0xd0a0,	// (0x00058042) popup_note2_wait_window_g2

0xa389,	// (0x0005532b) popup_note2_wait_window_g3_ParamLimits

0xa389,	// (0x0005532b) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x0005ac26) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x0005ac26) popup_note2_wait_window_g

0xd0ac,	// (0x0005804e) popup_note2_wait_window_t1_ParamLimits

0xd0ac,	// (0x0005804e) popup_note2_wait_window_t1

0xd0ca,	// (0x0005806c) popup_note2_wait_window_t2_ParamLimits

0xd0ca,	// (0x0005806c) popup_note2_wait_window_t2

0xd0e8,	// (0x0005808a) popup_note2_wait_window_t3_ParamLimits

0xd0e8,	// (0x0005808a) popup_note2_wait_window_t3

0xd0fa,	// (0x0005809c) popup_note2_wait_window_t4_ParamLimits

0xd0fa,	// (0x0005809c) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x0005ac2d) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x0005ac2d) popup_note2_wait_window_t

0xd10c,	// (0x000580ae) wait_bar2_pane_ParamLimits

0xd10c,	// (0x000580ae) wait_bar2_pane

0xd124,	// (0x000580c6) popup_snote2_single_text_window_g1_ParamLimits

0xd124,	// (0x000580c6) popup_snote2_single_text_window_g1

0xd14c,	// (0x000580ee) popup_snote2_single_text_window_t1_ParamLimits

0xd14c,	// (0x000580ee) popup_snote2_single_text_window_t1

0xd198,	// (0x0005813a) popup_snote2_single_text_window_t2_ParamLimits

0xd198,	// (0x0005813a) popup_snote2_single_text_window_t2

0xd1e4,	// (0x00058186) popup_snote2_single_text_window_t3_ParamLimits

0xd1e4,	// (0x00058186) popup_snote2_single_text_window_t3

0xd225,	// (0x000581c7) popup_snote2_single_text_window_t4_ParamLimits

0xd225,	// (0x000581c7) popup_snote2_single_text_window_t4

0xd25b,	// (0x000581fd) popup_snote2_single_text_window_t5_ParamLimits

0xd25b,	// (0x000581fd) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x0005ac36) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x0005ac36) popup_snote2_single_text_window_t

0xd286,	// (0x00058228) popup_snote2_single_graphic_window_g1_ParamLimits

0xd286,	// (0x00058228) popup_snote2_single_graphic_window_g1

0xd2ae,	// (0x00058250) popup_snote2_single_graphic_window_g2_ParamLimits

0xd2ae,	// (0x00058250) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x0005ac41) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x0005ac41) popup_snote2_single_graphic_window_g

0xd2d6,	// (0x00058278) popup_snote2_single_graphic_window_t1_ParamLimits

0xd2d6,	// (0x00058278) popup_snote2_single_graphic_window_t1

0xd322,	// (0x000582c4) popup_snote2_single_graphic_window_t2_ParamLimits

0xd322,	// (0x000582c4) popup_snote2_single_graphic_window_t2

0xd1e4,	// (0x00058186) popup_snote2_single_graphic_window_t3_ParamLimits

0xd1e4,	// (0x00058186) popup_snote2_single_graphic_window_t3

0xd225,	// (0x000581c7) popup_snote2_single_graphic_window_t4_ParamLimits

0xd225,	// (0x000581c7) popup_snote2_single_graphic_window_t4

0xd25b,	// (0x000581fd) popup_snote2_single_graphic_window_t5_ParamLimits

0xd25b,	// (0x000581fd) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x0005ac46) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x0005ac46) popup_snote2_single_graphic_window_t

0xbd4a,	// (0x00056cec) clock_nsta_pane_cp2_t1

0xbd4a,	// (0x00056cec) clock_nsta_pane_cp2_t2

0x0001,

0xfab8,	// (0x0005aa5a) clock_nsta_pane_cp2_t

0x5240,	// (0x000501e2) form_field_data_wide_pane_g1_ParamLimits

0x87a7,	// (0x00053749) form_field_data_wide_pane_g2_ParamLimits

0x87a7,	// (0x00053749) form_field_data_wide_pane_g2

0x881a,	// (0x000537bc) form_field_data_wide_pane_g3_ParamLimits

0x881a,	// (0x000537bc) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0005a622) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0005a622) form_field_data_wide_pane_g

0xbc3c,	// (0x00056bde) grid_touch_3_pane_ParamLimits

0xbc3c,	// (0x00056bde) grid_touch_3_pane

0xd36e,	// (0x00058310) cell_touch_3_pane_ParamLimits

0xd36e,	// (0x00058310) cell_touch_3_pane

0xc2a3,	// (0x00057245) cell_touch_3_pane_g1

0xc2a3,	// (0x00057245) cell_touch_3_pane_g2

0x0001,

0xfb3d,	// (0x0005aadf) cell_touch_3_pane_g

0x7bf9,	// (0x00052b9b) cont_query_data_pane

0x7c01,	// (0x00052ba3) cont_query_data_pane_cp1

0xd39c,	// (0x0005833e) button_value_adjust_pane_cp7

0xd3a4,	// (0x00058346) query_popup_pane_cp3

0x8f73,	// (0x00053f15) bg_popup_sub_pane_cp22_ParamLimits

0x5604,	// (0x000505a6) navi_navi_volume_pane_cp2

0x561f,	// (0x000505c1) popup_side_volume_key_window_g2

0x562e,	// (0x000505d0) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0005a6b8) popup_side_volume_key_window_g

0x564b,	// (0x000505ed) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0005a6bf) popup_side_volume_key_window_t

0x922a,	// (0x000541cc) popup_side_volume_key_window_ParamLimits

0x4e88,	// (0x0004fe2a) list_double_graphic_pane_g4_ParamLimits

0x4e88,	// (0x0004fe2a) list_double_graphic_pane_g4

0x7dc8,	// (0x00052d6a) list_single_2heading_msg_pane_ParamLimits

0x7dc8,	// (0x00052d6a) list_single_2heading_msg_pane

0x8212,	// (0x000531b4) list_single_2heading_msg_pane_g1_ParamLimits

0x8212,	// (0x000531b4) list_single_2heading_msg_pane_g1

0x93cf,	// (0x00054371) list_single_2heading_msg_pane_g2_ParamLimits

0x93cf,	// (0x00054371) list_single_2heading_msg_pane_g2

0x7e06,	// (0x00052da8) list_single_2heading_msg_pane_g3_ParamLimits

0x7e06,	// (0x00052da8) list_single_2heading_msg_pane_g3

0x821e,	// (0x000531c0) list_single_2heading_msg_pane_g4_ParamLimits

0x821e,	// (0x000531c0) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x0005ac51) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x0005ac51) list_single_2heading_msg_pane_g

0x8236,	// (0x000531d8) list_single_2heading_msg_pane_t1_ParamLimits

0x8236,	// (0x000531d8) list_single_2heading_msg_pane_t1

0x825e,	// (0x00053200) list_single_2heading_msg_pane_t2_ParamLimits

0x825e,	// (0x00053200) list_single_2heading_msg_pane_t2

0x8292,	// (0x00053234) list_single_2heading_msg_pane_t3_ParamLimits

0x8292,	// (0x00053234) list_single_2heading_msg_pane_t3

0x82cb,	// (0x0005326d) list_single_2heading_msg_pane_t4_ParamLimits

0x82cb,	// (0x0005326d) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x0005ac5a) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x0005ac5a) list_single_2heading_msg_pane_t

0x780e,	// (0x000527b0) title_pane_g4_ParamLimits

0x780e,	// (0x000527b0) title_pane_g4

0x5413,	// (0x000503b5) title_pane_stacon_g3_ParamLimits

0x5413,	// (0x000503b5) title_pane_stacon_g3

0xceca,	// (0x00057e6c) list_single_2graphic_im_pane_g4_ParamLimits

0xceca,	// (0x00057e6c) list_single_2graphic_im_pane_g4

0xadc2,	// (0x00055d64) popup_side_volume_key_window_cp

0xb589,	// (0x0005652b) main_idle_act2_pane_t1

0x603e,	// (0x00050fe0) toolbar_button_pane_g10

0x8769,	// (0x0005370b) popup_toolbar_window_cp1

0xbd3b,	// (0x00056cdd) clock_nsta_pane_cp_t1

0xbd3b,	// (0x00056cdd) clock_nsta_pane_cp_t2

0x0001,

0xfab3,	// (0x0005aa55) clock_nsta_pane_cp_t

0x5604,	// (0x000505a6) navi_navi_volume_pane_cp2_ParamLimits

0x5613,	// (0x000505b5) popup_side_volume_key_window_g1_ParamLimits

0x561f,	// (0x000505c1) popup_side_volume_key_window_g2_ParamLimits

0x562e,	// (0x000505d0) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0005a6b8) popup_side_volume_key_window_g_ParamLimits

0x67e3,	// (0x00051785) fep_hwr_aid_pane

0x688a,	// (0x0005182c) bg_fep_hwr_top_pane_g4_ParamLimits

0xc2ff,	// (0x000572a1) fep_hwr_top_pane_g1_ParamLimits

0xc311,	// (0x000572b3) fep_hwr_top_pane_g2_ParamLimits

0x68aa,	// (0x0005184c) fep_hwr_top_pane_g3_ParamLimits

0xfb08,	// (0x0005aaaa) fep_hwr_top_pane_g_ParamLimits

0x68bf,	// (0x00051861) fep_hwr_top_text_pane_ParamLimits

0xab85,	// (0x00055b27) aid_touch_tab_arrow_arrow_2

0xab8e,	// (0x00055b30) aid_touch_tab_arrow_left_2

0x67f7,	// (0x00051799) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x682e,	// (0x000517d0) fep_hwr_prediction_pane

0xc471,	// (0x00057413) fep_vkb_prediction_pane

0xc575,	// (0x00057517) fep_vkb_side_pane_g3_ParamLimits

0xc575,	// (0x00057517) fep_vkb_side_pane_g3

0x6a3a,	// (0x000519dc) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6aa6,	// (0x00051a48) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6ab3,	// (0x00051a55) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb7,	// (0x0005ab59) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6be2,	// (0x00051b84) fep_hwr_prediction_pane_g1

0x6bec,	// (0x00051b8e) fep_hwr_prediction_pane_g2

0x6bf4,	// (0x00051b96) fep_hwr_prediction_pane_g3

0x6bfc,	// (0x00051b9e) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x0005ac63) fep_hwr_prediction_pane_g

0xd3c9,	// (0x0005836b) fep_vkb_prediction_pane_g1

0xd3d3,	// (0x00058375) fep_vkb_prediction_pane_g2

0xd3db,	// (0x0005837d) fep_vkb_prediction_pane_g3

0xd3e3,	// (0x00058385) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x0005ac6c) fep_vkb_prediction_pane_g

0x6428,	// (0x000513ca) slider_set_pane_g3

0x643c,	// (0x000513de) slider_set_pane_g4

0x6454,	// (0x000513f6) slider_set_pane_g5

0x6428,	// (0x000513ca) slider_set_pane_g6

0x646a,	// (0x0005140c) slider_set_pane_g7

0xb223,	// (0x000561c5) slider_form_pane_g3

0xb22c,	// (0x000561ce) slider_form_pane_g4

0xb234,	// (0x000561d6) slider_form_pane_g5

0xb223,	// (0x000561c5) slider_form_pane_g6

0xb23c,	// (0x000561de) slider_form_pane_g7

0xb834,	// (0x000567d6) slider_set_pane_vc_g3

0xb83d,	// (0x000567df) slider_set_pane_vc_g4

0xb846,	// (0x000567e8) slider_set_pane_vc_g5

0xb834,	// (0x000567d6) slider_set_pane_vc_g6

0xb84f,	// (0x000567f1) slider_set_pane_vc_g7

0xba0f,	// (0x000569b1) slider_form_pane_vc_g1

0xba18,	// (0x000569ba) slider_form_pane_vc_g2

0xba21,	// (0x000569c3) slider_form_pane_vc_g3

0xba0f,	// (0x000569b1) slider_form_pane_vc_g4

0xba2a,	// (0x000569cc) slider_form_pane_vc_g5

0x0004,

0xfa85,	// (0x0005aa27) slider_form_pane_vc_g

0x4a07,	// (0x0004f9a9) main_idle_act3_pane

0xd3eb,	// (0x0005838d) ai3_links_pane

0xd3f4,	// (0x00058396) popup_ai3_data_window_ParamLimits

0xd3f4,	// (0x00058396) popup_ai3_data_window

0x77c6,	// (0x00052768) grid_ai3_links_pane

0xd40e,	// (0x000583b0) cell_ai3_links_pane_ParamLimits

0xd40e,	// (0x000583b0) cell_ai3_links_pane

0xd426,	// (0x000583c8) bg_popup_sub_pane_cp11

0xd433,	// (0x000583d5) cell_ai3_links_pane_g1

0x77c6,	// (0x00052768) bg_popup_sub_pane_cp12

0xd458,	// (0x000583fa) heading_ai3_data_pane

0xd460,	// (0x00058402) list_ai3_gene_pane

0xd46c,	// (0x0005840e) popup_ai3_data_window_g1

0xd474,	// (0x00058416) heading_ai3_data_pane_g1

0xd47c,	// (0x0005841e) heading_ai3_data_pane_t1

0xd48a,	// (0x0005842c) list_double_ai3_gene_pane_ParamLimits

0xd48a,	// (0x0005842c) list_double_ai3_gene_pane

0xd497,	// (0x00058439) list_single_ai3_gene_pane_ParamLimits

0xd497,	// (0x00058439) list_single_ai3_gene_pane

0xc268,	// (0x0005720a) list_highlight_pane_cp7_ParamLimits

0xc268,	// (0x0005720a) list_highlight_pane_cp7

0xd4a4,	// (0x00058446) list_single_a13_gene_pane_t1_ParamLimits

0xd4a4,	// (0x00058446) list_single_a13_gene_pane_t1

0xd4bb,	// (0x0005845d) list_single_ai3_gene_pane_g1

0xd4c4,	// (0x00058466) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x0005ac75) list_single_ai3_gene_pane_g

0xd4cc,	// (0x0005846e) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cc,	// (0x0005846e) list_double_ai3_gene_pane_g1

0xd4d8,	// (0x0005847a) list_double_ai3_gene_pane_t1_ParamLimits

0xd4d8,	// (0x0005847a) list_double_ai3_gene_pane_t1

0xd4f4,	// (0x00058496) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f4,	// (0x00058496) list_double_ai3_gene_pane_t2

0xd50a,	// (0x000584ac) list_double_ai3_gene_pane_t3_ParamLimits

0xd50a,	// (0x000584ac) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x0005ac7a) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x0005ac7a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8208,	// (0x000531aa) aid_size_min_col_2

0xd3b5,	// (0x00058357) aid_size_min_msg_ParamLimits

0xd3b5,	// (0x00058357) aid_size_min_msg

0xc675,	// (0x00057617) fep_vkb_top_text_pane_g2_ParamLimits

0xc675,	// (0x00057617) fep_vkb_top_text_pane_g2

0x0001,

0xfb38,	// (0x0005aada) fep_vkb_top_text_pane_g_ParamLimits

0xfb38,	// (0x0005aada) fep_vkb_top_text_pane_g

0x4a07,	// (0x0004f9a9) main_hc_apps_shell_pane

0xd527,	// (0x000584c9) grid_hc_apps_pane_ParamLimits

0xd527,	// (0x000584c9) grid_hc_apps_pane

0xd536,	// (0x000584d8) list_hc_apps_pane

0xd53e,	// (0x000584e0) scroll_pane_cp37_ParamLimits

0xd53e,	// (0x000584e0) scroll_pane_cp37

0xd54a,	// (0x000584ec) cell_hc_apps_pane_ParamLimits

0xd54a,	// (0x000584ec) cell_hc_apps_pane

0xd5f8,	// (0x0005859a) cell_hc_apps_pane_g1_ParamLimits

0xd5f8,	// (0x0005859a) cell_hc_apps_pane_g1

0xd629,	// (0x000585cb) cell_hc_apps_pane_g2_ParamLimits

0xd629,	// (0x000585cb) cell_hc_apps_pane_g2

0xd645,	// (0x000585e7) cell_hc_apps_pane_g3_ParamLimits

0xd645,	// (0x000585e7) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x0005ac81) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x0005ac81) cell_hc_apps_pane_g

0xd667,	// (0x00058609) cell_hc_apps_pane_t1_ParamLimits

0xd667,	// (0x00058609) cell_hc_apps_pane_t1

0x7b43,	// (0x00052ae5) grid_highlight_pane_cp10_ParamLimits

0x7b43,	// (0x00052ae5) grid_highlight_pane_cp10

0xd6a7,	// (0x00058649) list_single_hc_apps_pane_ParamLimits

0xd6a7,	// (0x00058649) list_single_hc_apps_pane

0xd703,	// (0x000586a5) list_single_hc_apps_pane_g1

0x82f0,	// (0x00053292) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x0005ac88) list_single_hc_apps_pane_g

0x8309,	// (0x000532ab) list_single_hc_apps_pane_g2_copy1

0x8325,	// (0x000532c7) list_single_hc_apps_pane_t1

0x78ba,	// (0x0005285c) bg_set_opt_pane_cp_ParamLimits

0x4c68,	// (0x0004fc0a) setting_slider_pane_t1_ParamLimits

0x4c81,	// (0x0004fc23) setting_slider_pane_t2_ParamLimits

0x4c9b,	// (0x0004fc3d) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0005a500) setting_slider_pane_t_ParamLimits

0x4cb3,	// (0x0004fc55) slider_set_pane_ParamLimits

0x591b,	// (0x000508bd) control_pane_g5_ParamLimits

0x591b,	// (0x000508bd) control_pane_g5

0xb072,	// (0x00056014) slider_set_pane_g1_ParamLimits

0x641c,	// (0x000513be) slider_set_pane_g2_ParamLimits

0x6428,	// (0x000513ca) slider_set_pane_g3_ParamLimits

0x643c,	// (0x000513de) slider_set_pane_g4_ParamLimits

0x6454,	// (0x000513f6) slider_set_pane_g5_ParamLimits

0x6428,	// (0x000513ca) slider_set_pane_g6_ParamLimits

0x646a,	// (0x0005140c) slider_set_pane_g7_ParamLimits

0xf969,	// (0x0005a90b) slider_set_pane_g_ParamLimits

0x9316,	// (0x000542b8) navi_icon_text_pane_ParamLimits

0x980c,	// (0x000547ae) aid_fill_nsta_2_ParamLimits

0x984b,	// (0x000547ed) aid_touch_tab_arrow_left_ParamLimits

0x985a,	// (0x000547fc) aid_touch_tab_arrow_right_ParamLimits

0x98c7,	// (0x00054869) clock_nsta_pane_ParamLimits

0xab67,	// (0x00055b09) navi_icon_pane_g1_ParamLimits

0xab73,	// (0x00055b15) navi_text_pane_t1_ParamLimits

0xbe47,	// (0x00056de9) navi_icon_text_pane_g1_ParamLimits

0xbe53,	// (0x00056df5) navi_icon_text_pane_t1_ParamLimits

0xd703,	// (0x000586a5) list_single_hc_apps_pane_g1_ParamLimits

0x82f0,	// (0x00053292) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x0005ac88) list_single_hc_apps_pane_g_ParamLimits

0x8309,	// (0x000532ab) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8325,	// (0x000532c7) list_single_hc_apps_pane_t1_ParamLimits

0x4b72,	// (0x0004fb14) popup_toolbar2_fixed_window_ParamLimits

0x4b72,	// (0x0004fb14) popup_toolbar2_fixed_window

0x5f20,	// (0x00050ec2) popup_toolbar2_float_window

0x77c6,	// (0x00052768) bg_popup_sub_pane_cp27

0xd71c,	// (0x000586be) grid_toolbar2_float_pane

0x77c6,	// (0x00052768) bg_popup_sub_pane_cp26

0xd71c,	// (0x000586be) grid_toolbar2_fixed_pane

0xd724,	// (0x000586c6) cell_toolbar2_fixed_pane_ParamLimits

0xd724,	// (0x000586c6) cell_toolbar2_fixed_pane

0xd734,	// (0x000586d6) cell_toolbar2_fixed_pane_g1

0xd73d,	// (0x000586df) toolbar2_fixed_button_pane

0x9cea,	// (0x00054c8c) toolbar2_fixed_button_pane_g1

0x9cfa,	// (0x00054c9c) toolbar2_fixed_button_pane_g2

0x9cf2,	// (0x00054c94) toolbar2_fixed_button_pane_g3

0x9d0a,	// (0x00054cac) toolbar2_fixed_button_pane_g4

0x9d02,	// (0x00054ca4) toolbar2_fixed_button_pane_g5

0x9d12,	// (0x00054cb4) toolbar2_fixed_button_pane_g6

0x9d1a,	// (0x00054cbc) toolbar2_fixed_button_pane_g7

0x9d2a,	// (0x00054ccc) toolbar2_fixed_button_pane_g8

0x9d22,	// (0x00054cc4) toolbar2_fixed_button_pane_g9

0x0008,

0xf86b,	// (0x0005a80d) toolbar2_fixed_button_pane_g

0xd745,	// (0x000586e7) cell_toolbar2_float_pane_ParamLimits

0xd745,	// (0x000586e7) cell_toolbar2_float_pane

0xd756,	// (0x000586f8) cell_toolbar2_float_pane_g1

0xd73d,	// (0x000586df) toolbar2_fixed_button_pane_cp

0xc3d1,	// (0x00057373) fep_vkb_accented_list_pane_ParamLimits

0xc3d1,	// (0x00057373) fep_vkb_accented_list_pane

0x6a1a,	// (0x000519bc) bg_popup_fep_shadow_pane_g9

0x9496,	// (0x00054438) bg_popup_fep_shadow_pane_cp3

0x8957,	// (0x000538f9) list_accented_list_pane

0xd75f,	// (0x00058701) list_single_accented_list_pane_ParamLimits

0xd75f,	// (0x00058701) list_single_accented_list_pane

0x9496,	// (0x00054438) list_highlight_pane_cp10

0xd770,	// (0x00058712) list_single_accented_list_pane_t1

0x5e70,	// (0x00050e12) popup_slider_window_ParamLimits

0x5e70,	// (0x00050e12) popup_slider_window

0xd3ac,	// (0x0005834e) aid_indentation_list_msg

0xd82a,	// (0x000587cc) bg_popup_window_pane_cp19

0xd894,	// (0x00058836) popup_slider_window_g1

0xd8b0,	// (0x00058852) popup_slider_window_g2

0xd8cc,	// (0x0005886e) popup_slider_window_g3

0x0005,

0xfceb,	// (0x0005ac8d) popup_slider_window_g

0xd928,	// (0x000588ca) popup_slider_window_t1

0xd99c,	// (0x0005893e) small_volume_slider_vertical_pane

0xc2a3,	// (0x00057245) small_volume_slider_vertical_pane_g1

0xc2a3,	// (0x00057245) small_volume_slider_vertical_pane_g2

0xd9b8,	// (0x0005895a) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x0005ac9f) small_volume_slider_vertical_pane_g

0x492a,	// (0x0004f8cc) area_side_right_pane_ParamLimits

0x492a,	// (0x0004f8cc) area_side_right_pane

0x6c04,	// (0x00051ba6) aid_size_side_button_ParamLimits

0x6c04,	// (0x00051ba6) aid_size_side_button

0x6c18,	// (0x00051bba) grid_sctrl_middle_pane_ParamLimits

0x6c18,	// (0x00051bba) grid_sctrl_middle_pane

0x6c37,	// (0x00051bd9) sctrl_sk_bottom_pane

0x6c48,	// (0x00051bea) sctrl_sk_top_pane

0x6c5a,	// (0x00051bfc) aid_touch_sctrl_top

0x6c67,	// (0x00051c09) bg_sctrl_sk_pane_ParamLimits

0x6c67,	// (0x00051c09) bg_sctrl_sk_pane

0x6c75,	// (0x00051c17) sctrl_sk_top_pane_g1

0x6c82,	// (0x00051c24) sctrl_sk_top_pane_t1

0x6c5a,	// (0x00051bfc) aid_touch_sctrl_bottom

0x6c67,	// (0x00051c09) bg_sctrl_sk_pane_cp_ParamLimits

0x6c67,	// (0x00051c09) bg_sctrl_sk_pane_cp

0x6c9d,	// (0x00051c3f) sctrl_sk_bottom_pane_g1

0x6c82,	// (0x00051c24) sctrl_sk_bottom_pane_t1

0x6ca6,	// (0x00051c48) cell_sctrl_middle_pane_ParamLimits

0x6ca6,	// (0x00051c48) cell_sctrl_middle_pane

0x6cc1,	// (0x00051c63) aid_touch_sctrl_middle_ParamLimits

0x6cc1,	// (0x00051c63) aid_touch_sctrl_middle

0x6cd3,	// (0x00051c75) bg_sctrl_middle_pane_ParamLimits

0x6cd3,	// (0x00051c75) bg_sctrl_middle_pane

0x6a3a,	// (0x000519dc) cell_sctrl_middle_pane_g1_ParamLimits

0x6a3a,	// (0x000519dc) cell_sctrl_middle_pane_g1

0x6ce1,	// (0x00051c83) cell_sctrl_middle_pane_g2_ParamLimits

0x6ce1,	// (0x00051c83) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x0005acab) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x0005acab) cell_sctrl_middle_pane_g

0x9cea,	// (0x00054c8c) bg_sctrl_middle_pane_g1

0x9cf2,	// (0x00054c94) bg_sctrl_middle_pane_g2

0x9cfa,	// (0x00054c9c) bg_sctrl_middle_pane_g3

0x9d02,	// (0x00054ca4) bg_sctrl_middle_pane_g4

0x9d0a,	// (0x00054cac) bg_sctrl_middle_pane_g5

0x9d12,	// (0x00054cb4) bg_sctrl_middle_pane_g6

0x9d1a,	// (0x00054cbc) bg_sctrl_middle_pane_g7

0x9d22,	// (0x00054cc4) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x0005acb0) bg_sctrl_middle_pane_g

0x9d2a,	// (0x00054ccc) bg_sctrl_middle_pane_g8_copy1

0x9cea,	// (0x00054c8c) bg_sctrl_sk_pane_g1

0x9cfa,	// (0x00054c9c) bg_sctrl_sk_pane_g2

0x9cf2,	// (0x00054c94) bg_sctrl_sk_pane_g3

0x0008,

0xf86b,	// (0x0005a80d) bg_sctrl_sk_pane_g

0x872f,	// (0x000536d1) aid_size_touch_scroll_bar

0x9d0a,	// (0x00054cac) bg_sctrl_sk_pane_g4

0x9d02,	// (0x00054ca4) bg_sctrl_sk_pane_g5

0x9d12,	// (0x00054cb4) bg_sctrl_sk_pane_g6

0x9d1a,	// (0x00054cbc) bg_sctrl_sk_pane_g7

0x9d2a,	// (0x00054ccc) bg_sctrl_sk_pane_g8

0x9d22,	// (0x00054cc4) bg_sctrl_sk_pane_g9

0x5ad9,	// (0x00050a7b) popup_fep_china_hwr2_fs_candidate_window

0x5ae3,	// (0x00050a85) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5ae3,	// (0x00050a85) popup_fep_china_hwr2_fs_control_window

0x6a3a,	// (0x000519dc) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x0005aca6) sctrl_sk_top_pane_g

0xd9c1,	// (0x00058963) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd9c1,	// (0x00058963) aid_fep_china_hwr2_fs_cell

0xd9d3,	// (0x00058975) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd9d3,	// (0x00058975) bg_popup_fep_shadow_pane_cp4

0xd9ea,	// (0x0005898c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd9ea,	// (0x0005898c) bg_popup_fep_shadow_pane_cp5

0xd9fc,	// (0x0005899e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd9fc,	// (0x0005899e) popup_fep_china_hwr2_fs_control_bar_grid

0xda0c,	// (0x000589ae) popup_fep_china_hwr2_fs_control_funtion_grid

0xda14,	// (0x000589b6) aid_fep_china_hwr2_fs_candi_cell

0x77c6,	// (0x00052768) bg_popup_fep_shadow_pane_cp6

0xda1e,	// (0x000589c0) popup_fep_china_hwr2_fs_candidate_grid

0xda28,	// (0x000589ca) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda28,	// (0x000589ca) cell_fep_china_hwr2_fs_funtion_grid

0xc2a3,	// (0x00057245) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda40,	// (0x000589e2) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda40,	// (0x000589e2) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda4e,	// (0x000589f0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda4e,	// (0x000589f0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x0005acc1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x0005acc1) cell_fep_china_hwr2_fs_funtion_grid_g

0xda64,	// (0x00058a06) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xda64,	// (0x00058a06) cell_fep_china_hwr2_fs_funtion_grid_t1

0xda79,	// (0x00058a1b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xda79,	// (0x00058a1b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x0005acc6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x0005acc6) cell_fep_china_hwr2_fs_funtion_grid_t

0xda95,	// (0x00058a37) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda9d,	// (0x00058a3f) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdaa5,	// (0x00058a47) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x0005accb) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdaad,	// (0x00058a4f) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdaad,	// (0x00058a4f) cell_fep_china_hwr2_fs_candidate_grid

0xdac6,	// (0x00058a68) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdace,	// (0x00058a70) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc2a3,	// (0x00057245) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc2a3,	// (0x00057245) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3d,	// (0x0005aadf) cell_fep_china_hwr2_fs_candidate_grid_g

0xdad6,	// (0x00058a78) cell_fep_china_hwr2_fs_candidate_grid_t1

0x98d4,	// (0x00054876) clock_nsta_pane_cp_24_ParamLimits

0x98d4,	// (0x00054876) clock_nsta_pane_cp_24

0x9952,	// (0x000548f4) indicator_nsta_pane_cp_24_ParamLimits

0x9952,	// (0x000548f4) indicator_nsta_pane_cp_24

0xa9e3,	// (0x00055985) heading_pane_g1

0x0001,

0xf8d0,	// (0x0005a872) heading_pane_g

0xb3d2,	// (0x00056374) grid_sct_catagory_button_pane

0xb402,	// (0x000563a4) scroll_pane_cp5_ParamLimits

0xbe95,	// (0x00056e37) button_value_adjust_pane_cp5_ParamLimits

0xbe95,	// (0x00056e37) button_value_adjust_pane_cp5

0xbf74,	// (0x00056f16) form2_midp_time_pane_ParamLimits

0xdae4,	// (0x00058a86) cell_sct_catagory_button_pane_ParamLimits

0xdae4,	// (0x00058a86) cell_sct_catagory_button_pane

0xc268,	// (0x0005720a) bg_button_pane_cp01_ParamLimits

0xc268,	// (0x0005720a) bg_button_pane_cp01

0xc2a3,	// (0x00057245) cell_sct_catagory_button_pane_g1

0x5eaf,	// (0x00050e51) popup_tb_extension_window

0xdaf6,	// (0x00058a98) aid_size_cell_ext_ParamLimits

0xdaf6,	// (0x00058a98) aid_size_cell_ext

0x7b43,	// (0x00052ae5) bg_tb_trans_pane_cp1_ParamLimits

0x7b43,	// (0x00052ae5) bg_tb_trans_pane_cp1

0xdb16,	// (0x00058ab8) grid_tb_ext_pane_ParamLimits

0xdb16,	// (0x00058ab8) grid_tb_ext_pane

0xdb44,	// (0x00058ae6) cell_tb_ext_pane_ParamLimits

0xdb44,	// (0x00058ae6) cell_tb_ext_pane

0xdb5b,	// (0x00058afd) cell_tb_ext_pane_g1_ParamLimits

0xdb5b,	// (0x00058afd) cell_tb_ext_pane_g1

0xdb78,	// (0x00058b1a) cell_tb_ext_pane_t1

0x7b43,	// (0x00052ae5) list_highlight_pane_cp11_ParamLimits

0x7b43,	// (0x00052ae5) list_highlight_pane_cp11

0x4b91,	// (0x0004fb33) popup_uni_indicator_window_ParamLimits

0x4b91,	// (0x0004fb33) popup_uni_indicator_window

0x880c,	// (0x000537ae) bg_popup_sub_pane_cp14

0xdb93,	// (0x00058b35) list_uniindi_pane

0xdb9f,	// (0x00058b41) uniindi_top_pane

0x7b43,	// (0x00052ae5) bg_uniindi_top_pane

0xdbbe,	// (0x00058b60) uniindi_top_pane_g1

0xdbd4,	// (0x00058b76) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x0005acd2) uniindi_top_pane_g

0xdbfe,	// (0x00058ba0) uniindi_top_pane_t1

0xdc28,	// (0x00058bca) list_single_uniindi_pane_ParamLimits

0xdc28,	// (0x00058bca) list_single_uniindi_pane

0xc2a3,	// (0x00057245) bg_uniindi_top_pane_g1

0xdc3b,	// (0x00058bdd) list_single_uniindi_pane_g1

0xdc4e,	// (0x00058bf0) list_single_uniindi_pane_t1

0x4a07,	// (0x0004f9a9) control_bg_pane

0xdc73,	// (0x00058c15) bg_sctrl_sk_pane_cp1

0xdc7c,	// (0x00058c1e) bg_sctrl_sk_pane_cp2

0xdc85,	// (0x00058c27) control_bg_pane_g1

0xdc8e,	// (0x00058c30) control_bg_pane_g2

0x0001,

0xfd39,	// (0x0005acdb) control_bg_pane_g

0xbcdf,	// (0x00056c81) cell_indicator_nsta_pane_g1_ParamLimits

0xbced,	// (0x00056c8f) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa1,	// (0x0005aa43) cell_indicator_nsta_pane_g_ParamLimits

0x7fe5,	// (0x00052f87) form2_midp_time_pane_t1_ParamLimits

0x5a39,	// (0x000509db) main_idle_act4_pane_ParamLimits

0x5a39,	// (0x000509db) main_idle_act4_pane

0x5eaf,	// (0x00050e51) popup_tb_extension_window_ParamLimits

0xdb34,	// (0x00058ad6) tb_ext_find_pane_ParamLimits

0xdb34,	// (0x00058ad6) tb_ext_find_pane

0xdc97,	// (0x00058c39) ai_gene_pane_1_cp1

0x95d1,	// (0x00054573) ai_gene_pane_2_cp1

0xdc9f,	// (0x00058c41) list_single_idle_plugin_calendar_pane

0xdca8,	// (0x00058c4a) list_single_idle_plugin_notification_pane

0xdcb1,	// (0x00058c53) list_single_idle_plugin_player_pane

0xdcba,	// (0x00058c5c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcba,	// (0x00058c5c) list_single_idle_plugin_shortcut_pane

0xdcdc,	// (0x00058c7e) main_idle_act4_pane_t1

0xdcee,	// (0x00058c90) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x0005ace0) main_idle_act4_pane_t

0xdd00,	// (0x00058ca2) middle_sk_idle_act4_pane_ParamLimits

0xdd00,	// (0x00058ca2) middle_sk_idle_act4_pane

0xdd16,	// (0x00058cb8) popup_clock_digital_analogue_window_cp2

0xdd30,	// (0x00058cd2) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd30,	// (0x00058cd2) shortcut_wheel_idle_act4_pane

0xc2a3,	// (0x00057245) shortcut_wheel_idle_act4_pane_g1

0xc2a3,	// (0x00057245) shortcut_wheel_idle_act4_pane_g2

0xc2a3,	// (0x00057245) shortcut_wheel_idle_act4_pane_g3

0xc2a3,	// (0x00057245) shortcut_wheel_idle_act4_pane_g4

0xc2a3,	// (0x00057245) shortcut_wheel_idle_act4_pane_g5

0xdd44,	// (0x00058ce6) shortcut_wheel_idle_act4_pane_g6

0xdd4c,	// (0x00058cee) shortcut_wheel_idle_act4_pane_g7

0xdd54,	// (0x00058cf6) shortcut_wheel_idle_act4_pane_g8

0xdd5c,	// (0x00058cfe) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x0005ace5) shortcut_wheel_idle_act4_pane_g

0xc521,	// (0x000574c3) middle_sk_idle_act4_pane_g1_ParamLimits

0xc521,	// (0x000574c3) middle_sk_idle_act4_pane_g1

0xddc0,	// (0x00058d62) middle_sk_idle_act4_pane_g2_ParamLimits

0xddc0,	// (0x00058d62) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x0005ad08) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x0005ad08) middle_sk_idle_act4_pane_g

0xddcc,	// (0x00058d6e) middle_sk_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x00058d6e) middle_sk_idle_act4_pane_t1

0xdde9,	// (0x00058d8b) grid_ai_shortcut_pane_ParamLimits

0xdde9,	// (0x00058d8b) grid_ai_shortcut_pane

0xde02,	// (0x00058da4) list_highlight_pane_cp16_ParamLimits

0xde02,	// (0x00058da4) list_highlight_pane_cp16

0xde0f,	// (0x00058db1) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde0f,	// (0x00058db1) list_single_idle_plugin_shortcut_pane_g1

0xde1b,	// (0x00058dbd) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde1b,	// (0x00058dbd) list_single_idle_plugin_shortcut_pane_g2

0xde33,	// (0x00058dd5) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde33,	// (0x00058dd5) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x0005ad0d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x0005ad0d) list_single_idle_plugin_shortcut_pane_g

0xde46,	// (0x00058de8) cell_ai_shortcut_pane_ParamLimits

0xde46,	// (0x00058de8) cell_ai_shortcut_pane

0xde6a,	// (0x00058e0c) cell_ai_shortcut_pane_g1_ParamLimits

0xde6a,	// (0x00058e0c) cell_ai_shortcut_pane_g1

0xdc97,	// (0x00058c39) ai_gene_pane_1_cp2

0xde8c,	// (0x00058e2e) ai_gene_pane_2_cp2

0xde94,	// (0x00058e36) list_highlight_pane_cp15

0xde9d,	// (0x00058e3f) list_single_idle_plugin_calendar_pane_g1

0xde94,	// (0x00058e36) list_highlight_pane_cp17

0xdea5,	// (0x00058e47) list_single_idle_plugin_calendar_pane_g1_copy1

0xdead,	// (0x00058e4f) list_single_idle_plugin_player_pane_g1

0xb62b,	// (0x000565cd) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x0005ad14) list_single_idle_plugin_player_pane_g

0xdeb5,	// (0x00058e57) list_single_idle_plugin_player_pane_t1

0xdec3,	// (0x00058e65) list_single_idle_plugin_player_pane_t2

0xded1,	// (0x00058e73) list_single_idle_plugin_player_pane_t3

0xdedf,	// (0x00058e81) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x0005ad19) list_single_idle_plugin_player_pane_t

0xdeed,	// (0x00058e8f) wait_bar_pane_cp15

0xdef5,	// (0x00058e97) grid_ai_notification_pane

0xb62b,	// (0x000565cd) list_single_idle_plugin_notification_pane_g1

0xdefe,	// (0x00058ea0) cell_ai_notification_pane_ParamLimits

0xdefe,	// (0x00058ea0) cell_ai_notification_pane

0xdf0b,	// (0x00058ead) cell_ai_notification_pane_g1

0xdf13,	// (0x00058eb5) cell_ai_notification_pane_t1

0xdf21,	// (0x00058ec3) tb_ext_find_button_pane

0xdf29,	// (0x00058ecb) tb_ext_find_pane_g1

0xdf31,	// (0x00058ed3) tb_ext_find_pane_t1

0x8e83,	// (0x00053e25) tb_ext_find_button_pane_g1

0xdf3f,	// (0x00058ee1) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x0005ad22) tb_ext_find_button_pane_g

0xdcdc,	// (0x00058c7e) main_idle_act4_pane_t1_ParamLimits

0xdcee,	// (0x00058c90) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x0005ace0) main_idle_act4_pane_t_ParamLimits

0xdd16,	// (0x00058cb8) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd24,	// (0x00058cc6) sat_plugin_idle_act4_pane_ParamLimits

0xdd24,	// (0x00058cc6) sat_plugin_idle_act4_pane

0xdf48,	// (0x00058eea) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf48,	// (0x00058eea) sat_plugin_idle_act4_pane_t1

0xdf5b,	// (0x00058efd) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf5b,	// (0x00058efd) sat_plugin_idle_act4_pane_t2

0xdf6e,	// (0x00058f10) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf6e,	// (0x00058f10) sat_plugin_idle_act4_pane_t3

0xdf81,	// (0x00058f23) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf81,	// (0x00058f23) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x0005ad27) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x0005ad27) sat_plugin_idle_act4_pane_t

0x4acc,	// (0x0004fa6e) popup_battery_window_ParamLimits

0x4acc,	// (0x0004fa6e) popup_battery_window

0x7b43,	// (0x00052ae5) bg_popup_sub_pane_cp25_ParamLimits

0x7b43,	// (0x00052ae5) bg_popup_sub_pane_cp25

0xdf94,	// (0x00058f36) popup_battery_window_g1_ParamLimits

0xdf94,	// (0x00058f36) popup_battery_window_g1

0xdfa0,	// (0x00058f42) popup_battery_window_t1_ParamLimits

0xdfa0,	// (0x00058f42) popup_battery_window_t1

0xdfb2,	// (0x00058f54) popup_battery_window_t2_ParamLimits

0xdfb2,	// (0x00058f54) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x0005ad30) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x0005ad30) popup_battery_window_t

0x949e,	// (0x00054440) midp_canvas_pane_ParamLimits

0x9515,	// (0x000544b7) midp_keypad_pane_ParamLimits

0x9515,	// (0x000544b7) midp_keypad_pane

0x97d4,	// (0x00054776) main_midp_pane_ParamLimits

0xbd59,	// (0x00056cfb) signal_pane_g2_cp_ParamLimits

0xdfcf,	// (0x00058f71) aid_size_cell_midp_keypad_ParamLimits

0xdfcf,	// (0x00058f71) aid_size_cell_midp_keypad

0xdfe9,	// (0x00058f8b) midp_keyp_game_grid_pane_ParamLimits

0xdfe9,	// (0x00058f8b) midp_keyp_game_grid_pane

0xe009,	// (0x00058fab) midp_keyp_rocker_pane_ParamLimits

0xe009,	// (0x00058fab) midp_keyp_rocker_pane

0xe042,	// (0x00058fe4) midp_keyp_sk_left_pane_ParamLimits

0xe042,	// (0x00058fe4) midp_keyp_sk_left_pane

0xe09c,	// (0x0005903e) midp_keyp_sk_right_pane_ParamLimits

0xe09c,	// (0x0005903e) midp_keyp_sk_right_pane

0x77c6,	// (0x00052768) bg_button_pane_cp03

0xe117,	// (0x000590b9) midp_keyp_sk_left_pane_g1

0x77c6,	// (0x00052768) bg_button_pane_cp04

0xe117,	// (0x000590b9) midp_keyp_sk_right_pane_g1

0xc2a3,	// (0x00057245) midp_keyp_rocker_pane_g1

0xe120,	// (0x000590c2) keyp_game_cell_pane_ParamLimits

0xe120,	// (0x000590c2) keyp_game_cell_pane

0x77c6,	// (0x00052768) bg_button_pane_cp02

0xe133,	// (0x000590d5) keyp_game_cell_pane_g1

0x4b10,	// (0x0004fab2) popup_fep_vkb2_window_ParamLimits

0x4b10,	// (0x0004fab2) popup_fep_vkb2_window

0x6cff,	// (0x00051ca1) aid_size_cell_vkb2_ParamLimits

0x6cff,	// (0x00051ca1) aid_size_cell_vkb2

0x6d53,	// (0x00051cf5) popup_fep_vkb2_window_g1_ParamLimits

0x6d53,	// (0x00051cf5) popup_fep_vkb2_window_g1

0x6d9b,	// (0x00051d3d) vkb2_area_bottom_pane_ParamLimits

0x6d9b,	// (0x00051d3d) vkb2_area_bottom_pane

0x6de7,	// (0x00051d89) vkb2_area_keypad_pane_ParamLimits

0x6de7,	// (0x00051d89) vkb2_area_keypad_pane

0x6e29,	// (0x00051dcb) vkb2_area_top_pane_ParamLimits

0x6e29,	// (0x00051dcb) vkb2_area_top_pane

0x6ea3,	// (0x00051e45) vkb2_top_entry_pane_ParamLimits

0x6ea3,	// (0x00051e45) vkb2_top_entry_pane

0x6ecd,	// (0x00051e6f) vkb2_top_grid_left_pane_ParamLimits

0x6ecd,	// (0x00051e6f) vkb2_top_grid_left_pane

0x6eeb,	// (0x00051e8d) vkb2_top_grid_right_pane_ParamLimits

0x6eeb,	// (0x00051e8d) vkb2_top_grid_right_pane

0x6f09,	// (0x00051eab) vkb2_cell_keypad_pane_ParamLimits

0x6f09,	// (0x00051eab) vkb2_cell_keypad_pane

0x6fda,	// (0x00051f7c) vkb2_area_bottom_grid_pane_ParamLimits

0x6fda,	// (0x00051f7c) vkb2_area_bottom_grid_pane

0x7000,	// (0x00051fa2) vkb2_area_bottom_pane_g1_ParamLimits

0x7000,	// (0x00051fa2) vkb2_area_bottom_pane_g1

0x7024,	// (0x00051fc6) vkb2_area_bottom_pane_g2_ParamLimits

0x7024,	// (0x00051fc6) vkb2_area_bottom_pane_g2

0x7052,	// (0x00051ff4) vkb2_area_bottom_pane_g3_ParamLimits

0x7052,	// (0x00051ff4) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x0005ad35) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x0005ad35) vkb2_area_bottom_pane_g

0x70b3,	// (0x00052055) vkb2_top_cell_left_pane_ParamLimits

0x70b3,	// (0x00052055) vkb2_top_cell_left_pane

0xe144,	// (0x000590e6) vkb2_top_entry_pane_g1_ParamLimits

0xe144,	// (0x000590e6) vkb2_top_entry_pane_g1

0xe152,	// (0x000590f4) vkb2_top_entry_pane_t1_ParamLimits

0xe152,	// (0x000590f4) vkb2_top_entry_pane_t1

0xe184,	// (0x00059126) vkb2_top_entry_pane_t2_ParamLimits

0xe184,	// (0x00059126) vkb2_top_entry_pane_t2

0xe1b6,	// (0x00059158) vkb2_top_entry_pane_t3_ParamLimits

0xe1b6,	// (0x00059158) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x0005ad3c) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x0005ad3c) vkb2_top_entry_pane_t

0x7100,	// (0x000520a2) vkb2_top_grid_right_pane_g1_ParamLimits

0x7100,	// (0x000520a2) vkb2_top_grid_right_pane_g1

0x7116,	// (0x000520b8) vkb2_top_grid_right_pane_g2_ParamLimits

0x7116,	// (0x000520b8) vkb2_top_grid_right_pane_g2

0x712e,	// (0x000520d0) vkb2_top_grid_right_pane_g3_ParamLimits

0x712e,	// (0x000520d0) vkb2_top_grid_right_pane_g3

0x7146,	// (0x000520e8) vkb2_top_grid_right_pane_g4_ParamLimits

0x7146,	// (0x000520e8) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x0005ad43) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x0005ad43) vkb2_top_grid_right_pane_g

0x715c,	// (0x000520fe) vkb2_top_cell_left_pane_g1

0x7173,	// (0x00052115) vkb2_cell_keypad_pane_g1_ParamLimits

0x7173,	// (0x00052115) vkb2_cell_keypad_pane_g1

0xe1da,	// (0x0005917c) vkb2_cell_keypad_pane_t1_ParamLimits

0xe1da,	// (0x0005917c) vkb2_cell_keypad_pane_t1

0x7181,	// (0x00052123) vkb2_cell_bottom_grid_pane_ParamLimits

0x7181,	// (0x00052123) vkb2_cell_bottom_grid_pane

0x71ba,	// (0x0005215c) vkb2_cell_bottom_grid_pane_g1

0xdd64,	// (0x00058d06) aid_call2_pane_cp02

0xdd6c,	// (0x00058d0e) aid_call_pane_cp02

0xdd74,	// (0x00058d16) clock_digital_number_pane_cp10

0xdd7c,	// (0x00058d1e) clock_digital_number_pane_cp11

0xdd84,	// (0x00058d26) clock_digital_number_pane_cp12

0xdd8c,	// (0x00058d2e) clock_digital_number_pane_cp13

0xdd94,	// (0x00058d36) clock_digital_separator_pane_cp10

0x8e83,	// (0x00053e25) popup_clock_digital_analogue_window_cp2_g1

0x8e83,	// (0x00053e25) popup_clock_digital_analogue_window_cp2_g2

0xdd9c,	// (0x00058d3e) popup_clock_digital_analogue_window_cp2_g3

0x8e83,	// (0x00053e25) popup_clock_digital_analogue_window_cp2_g4

0xdd9c,	// (0x00058d3e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x0005acf8) popup_clock_digital_analogue_window_cp2_g

0xdda4,	// (0x00058d46) popup_clock_digital_analogue_window_cp2_t1

0xddb2,	// (0x00058d54) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x0005ad03) popup_clock_digital_analogue_window_cp2_t

0xc2a3,	// (0x00057245) clock_digital_number_pane_cp10_g1

0xc2a3,	// (0x00057245) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005aadf) clock_digital_number_pane_cp10_g

0xc2a3,	// (0x00057245) clock_digital_separator_pane_cp10_g1

0xc2a3,	// (0x00057245) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3d,	// (0x0005aadf) clock_digital_separator_pane_cp10_g

0xdbe0,	// (0x00058b82) uniindi_top_pane_g3

0xdbf1,	// (0x00058b93) uniindi_top_pane_g4

0x6f94,	// (0x00051f36) vkb2_row_keypad_pane_ParamLimits

0x6f94,	// (0x00051f36) vkb2_row_keypad_pane

0x71d6,	// (0x00052178) vkb2_cell_t_keypad_pane_ParamLimits

0x71d6,	// (0x00052178) vkb2_cell_t_keypad_pane

0x71e6,	// (0x00052188) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x71e6,	// (0x00052188) vkb2_cell_t_keypad_pane_cp08

0x71f9,	// (0x0005219b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x71f9,	// (0x0005219b) vkb2_cell_t_keypad_pane_cp09

0x720d,	// (0x000521af) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x720d,	// (0x000521af) vkb2_cell_t_keypad_pane_cp01

0x721e,	// (0x000521c0) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x721e,	// (0x000521c0) vkb2_cell_t_keypad_pane_cp02

0x722f,	// (0x000521d1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x722f,	// (0x000521d1) vkb2_cell_t_keypad_pane_cp03

0x7240,	// (0x000521e2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7240,	// (0x000521e2) vkb2_cell_t_keypad_pane_cp04

0x7251,	// (0x000521f3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7251,	// (0x000521f3) vkb2_cell_t_keypad_pane_cp05

0x7262,	// (0x00052204) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7262,	// (0x00052204) vkb2_cell_t_keypad_pane_cp06

0x7273,	// (0x00052215) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7273,	// (0x00052215) vkb2_cell_t_keypad_pane_cp07

0x7284,	// (0x00052226) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7284,	// (0x00052226) vkb2_cell_t_keypad_pane_cp10

0x6a3a,	// (0x000519dc) vkb2_cell_t_keypad_pane_g1

0xe1f1,	// (0x00059193) vkb2_cell_t_keypad_pane_t1

0x4a07,	// (0x0004f9a9) popup_grid_graphic2_window

0xe203,	// (0x000591a5) aid_size_cell_graphic2_ParamLimits

0xe203,	// (0x000591a5) aid_size_cell_graphic2

0xe23b,	// (0x000591dd) bg_popup_window_pane_cp21_ParamLimits

0xe23b,	// (0x000591dd) bg_popup_window_pane_cp21

0xe249,	// (0x000591eb) graphic2_pages_pane_ParamLimits

0xe249,	// (0x000591eb) graphic2_pages_pane

0xe28f,	// (0x00059231) grid_graphic2_control_pane_ParamLimits

0xe28f,	// (0x00059231) grid_graphic2_control_pane

0xe2cd,	// (0x0005926f) grid_graphic2_pane_ParamLimits

0xe2cd,	// (0x0005926f) grid_graphic2_pane

0xe341,	// (0x000592e3) cell_graphic2_pane

0x4a07,	// (0x0004f9a9) main_comp_mode_pane

0xd460,	// (0x00058402) list_ai3_gene_pane_ParamLimits

0xd82a,	// (0x000587cc) bg_popup_window_pane_cp19_ParamLimits

0xd836,	// (0x000587d8) bg_touch_area_indi_pane_ParamLimits

0xd836,	// (0x000587d8) bg_touch_area_indi_pane

0xd84c,	// (0x000587ee) bg_touch_area_indi_pane_cp01_ParamLimits

0xd84c,	// (0x000587ee) bg_touch_area_indi_pane_cp01

0xd862,	// (0x00058804) bg_touch_area_indi_pane_cp02_ParamLimits

0xd862,	// (0x00058804) bg_touch_area_indi_pane_cp02

0xd87a,	// (0x0005881c) bg_touch_area_indi_pane_cp03_ParamLimits

0xd87a,	// (0x0005881c) bg_touch_area_indi_pane_cp03

0xd894,	// (0x00058836) popup_slider_window_g1_ParamLimits

0xd8b0,	// (0x00058852) popup_slider_window_g2_ParamLimits

0xd8cc,	// (0x0005886e) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x0005ac8d) popup_slider_window_g_ParamLimits

0xd928,	// (0x000588ca) popup_slider_window_t1_ParamLimits

0xd99c,	// (0x0005893e) small_volume_slider_vertical_pane_ParamLimits

0xe341,	// (0x000592e3) cell_graphic2_pane_ParamLimits

0xe38f,	// (0x00059331) bg_button_pane_cp10_ParamLimits

0xe38f,	// (0x00059331) bg_button_pane_cp10

0xe3a2,	// (0x00059344) bg_button_pane_cp11_ParamLimits

0xe3a2,	// (0x00059344) bg_button_pane_cp11

0xe3b5,	// (0x00059357) graphic2_pages_pane_g1_ParamLimits

0xe3b5,	// (0x00059357) graphic2_pages_pane_g1

0xe3d0,	// (0x00059372) graphic2_pages_pane_g2_ParamLimits

0xe3d0,	// (0x00059372) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x0005ad51) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x0005ad51) graphic2_pages_pane_g

0xe3e8,	// (0x0005938a) graphic2_pages_pane_t1_ParamLimits

0xe3e8,	// (0x0005938a) graphic2_pages_pane_t1

0xe400,	// (0x000593a2) cell_graphic2_control_pane_ParamLimits

0xe400,	// (0x000593a2) cell_graphic2_control_pane

0xe421,	// (0x000593c3) cell_graphic2_pane_g1_ParamLimits

0xe421,	// (0x000593c3) cell_graphic2_pane_g1

0xe42e,	// (0x000593d0) cell_graphic2_pane_g2_ParamLimits

0xe42e,	// (0x000593d0) cell_graphic2_pane_g2

0xe43b,	// (0x000593dd) cell_graphic2_pane_g3_ParamLimits

0xe43b,	// (0x000593dd) cell_graphic2_pane_g3

0xe448,	// (0x000593ea) cell_graphic2_pane_g4_ParamLimits

0xe448,	// (0x000593ea) cell_graphic2_pane_g4

0xe455,	// (0x000593f7) cell_graphic2_pane_g5_ParamLimits

0xe455,	// (0x000593f7) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x0005ad56) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x0005ad56) cell_graphic2_pane_g

0xe470,	// (0x00059412) cell_graphic2_pane_t1_ParamLimits

0xe470,	// (0x00059412) cell_graphic2_pane_t1

0x9d5e,	// (0x00054d00) grid_highlight_pane_cp11_ParamLimits

0x9d5e,	// (0x00054d00) grid_highlight_pane_cp11

0x7b43,	// (0x00052ae5) bg_button_pane_cp05

0xe499,	// (0x0005943b) cell_graphic2_control_pane_g1

0xc2a3,	// (0x00057245) bg_touch_area_indi_pane_g1

0xe4c1,	// (0x00059463) aid_cmod_rocker_key_size

0xe4cb,	// (0x0005946d) aid_cmode_itu_key_size

0xe4d5,	// (0x00059477) main_cmode_video_pane

0xe4df,	// (0x00059481) main_comp_mode_itu_pane

0xe4eb,	// (0x0005948d) main_comp_mode_rocker_pane

0xe4f7,	// (0x00059499) cell_cmode_rocker_pane_ParamLimits

0xe4f7,	// (0x00059499) cell_cmode_rocker_pane

0xe509,	// (0x000594ab) cell_cmode_itu_pane_ParamLimits

0xe509,	// (0x000594ab) cell_cmode_itu_pane

0x880c,	// (0x000537ae) bg_button_pane_cp06_ParamLimits

0x880c,	// (0x000537ae) bg_button_pane_cp06

0xc521,	// (0x000574c3) cell_cmode_rocker_pane_g1_ParamLimits

0xc521,	// (0x000574c3) cell_cmode_rocker_pane_g1

0xda40,	// (0x000589e2) cell_cmode_rocker_pane_g2_ParamLimits

0xda40,	// (0x000589e2) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x0005ad66) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x0005ad66) cell_cmode_rocker_pane_g

0x77c6,	// (0x00052768) bg_button_pane_cp07

0xe51e,	// (0x000594c0) cell_cmode_itu_pane_g1

0xe527,	// (0x000594c9) cell_cmode_itu_pane_t1

0xe535,	// (0x000594d7) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x0005ad6b) cell_cmode_itu_pane_t

0xdc63,	// (0x00058c05) aid_touch_ctrl_left

0xdc6b,	// (0x00058c0d) aid_touch_ctrl_right

0x77c6,	// (0x00052768) compa_mode_pane

0xe543,	// (0x000594e5) aid_cmod_rocker_key_size_cp

0xe54d,	// (0x000594ef) aid_cmode_itu_key_size_cp

0xe557,	// (0x000594f9) compa_mode_pane_g1

0xe55f,	// (0x00059501) compa_mode_pane_g2

0xe567,	// (0x00059509) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x0005ad70) compa_mode_pane_g

0xe56f,	// (0x00059511) main_comp_mode_itu_pane_cp

0xe577,	// (0x00059519) main_comp_mode_rocker_pane_cp

0xe57f,	// (0x00059521) cell_cmode_itu_pane_cp_ParamLimits

0xe57f,	// (0x00059521) cell_cmode_itu_pane_cp

0xe594,	// (0x00059536) cell_cmode_rocker_pane_cp_ParamLimits

0xe594,	// (0x00059536) cell_cmode_rocker_pane_cp

0x880c,	// (0x000537ae) bg_button_pane_cp06_cp_ParamLimits

0x880c,	// (0x000537ae) bg_button_pane_cp06_cp

0xc521,	// (0x000574c3) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc521,	// (0x000574c3) cell_cmode_rocker_pane_g1_cp

0xc2a3,	// (0x00057245) cell_cmode_rocker_pane_g2_cp

0x77c6,	// (0x00052768) bg_button_pane_cp07_cp

0xb223,	// (0x000561c5) cell_cmode_itu_pane_g1_cp

0xe5a6,	// (0x00059548) cell_cmode_itu_pane_t1_cp

0xe5a6,	// (0x00059548) cell_cmode_itu_pane_t2_cp

0xb210,	// (0x000561b2) settings_code_pane_cp2

0x78ba,	// (0x0005285c) bg_popup_window_pane_cp3_ParamLimits

0x83f4,	// (0x00053396) heading_pane_cp3_ParamLimits

0x8400,	// (0x000533a2) listscroll_popup_graphic_pane_ParamLimits

0x67e3,	// (0x00051785) fep_hwr_aid_pane_ParamLimits

0x6c5a,	// (0x00051bfc) aid_touch_sctrl_top_ParamLimits

0x6c75,	// (0x00051c17) sctrl_sk_top_pane_g1_ParamLimits

0x6a3a,	// (0x000519dc) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x0005aca6) sctrl_sk_top_pane_g_ParamLimits

0x6c82,	// (0x00051c24) sctrl_sk_top_pane_t1_ParamLimits

0x6c5a,	// (0x00051bfc) aid_touch_sctrl_bottom_ParamLimits

0x6c82,	// (0x00051c24) sctrl_sk_bottom_pane_t1_ParamLimits

0xdbac,	// (0x00058b4e) aid_area_touch_clock

0x6e6b,	// (0x00051e0d) aid_vkb2_area_top_pane_cell_ParamLimits

0x6e6b,	// (0x00051e0d) aid_vkb2_area_top_pane_cell

0x6fb6,	// (0x00051f58) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6fb6,	// (0x00051f58) aid_vkb2_area_bottom_pane_cell

0xe13c,	// (0x000590de) popup_char_count_window

0xe5b4,	// (0x00059556) popup_char_count_window_g1

0xe5bd,	// (0x0005955f) popup_char_count_window_g2

0xe5c6,	// (0x00059568) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x0005ad77) popup_char_count_window_g

0xe5cf,	// (0x00059571) popup_char_count_window_t1

0x6d31,	// (0x00051cd3) popup_fep_char_preview_window_ParamLimits

0x6d31,	// (0x00051cd3) popup_fep_char_preview_window

0x6e89,	// (0x00051e2b) vkb2_top_candi_pane_ParamLimits

0x6e89,	// (0x00051e2b) vkb2_top_candi_pane

0xe5dd,	// (0x0005957f) cell_vkb2_top_candi_pane_ParamLimits

0xe5dd,	// (0x0005957f) cell_vkb2_top_candi_pane

0x7299,	// (0x0005223b) bg_popup_fep_char_preview_window_ParamLimits

0x7299,	// (0x0005223b) bg_popup_fep_char_preview_window

0x72a7,	// (0x00052249) popup_fep_char_preview_window_t1_ParamLimits

0x72a7,	// (0x00052249) popup_fep_char_preview_window_t1

0xe62a,	// (0x000595cc) bg_popup_fep_char_preview_window_g1

0xe632,	// (0x000595d4) bg_popup_fep_char_preview_window_g2

0xe63a,	// (0x000595dc) bg_popup_fep_char_preview_window_g3

0xe642,	// (0x000595e4) bg_popup_fep_char_preview_window_g4

0xe64a,	// (0x000595ec) bg_popup_fep_char_preview_window_g5

0x72e1,	// (0x00052283) bg_popup_fep_char_preview_window_g6

0xe652,	// (0x000595f4) bg_popup_fep_char_preview_window_g7

0xe65a,	// (0x000595fc) bg_popup_fep_char_preview_window_g8

0xe662,	// (0x00059604) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x0005ad7e) bg_popup_fep_char_preview_window_g

0x6a3a,	// (0x000519dc) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6a3a,	// (0x000519dc) cell_vkb2_top_candi_pane_g1

0x6a48,	// (0x000519ea) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6a48,	// (0x000519ea) cell_vkb2_top_candi_pane_g2

0xe0f6,	// (0x00059098) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe0f6,	// (0x00059098) cell_vkb2_top_candi_pane_g3

0x72e9,	// (0x0005228b) cell_vkb2_top_candi_pane_g4_ParamLimits

0x72e9,	// (0x0005228b) cell_vkb2_top_candi_pane_g4

0xc96e,	// (0x00057910) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc96e,	// (0x00057910) cell_vkb2_top_candi_pane_g5

0x730a,	// (0x000522ac) cell_vkb2_top_candi_pane_g6_ParamLimits

0x730a,	// (0x000522ac) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x0005ad91) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x0005ad91) cell_vkb2_top_candi_pane_g

0x7318,	// (0x000522ba) cell_vkb2_top_candi_pane_t1

0x6408,	// (0x000513aa) aid_size_touch_slider_mark_ParamLimits

0x6408,	// (0x000513aa) aid_size_touch_slider_mark

0xe27f,	// (0x00059221) grid_graphic2_catg_pane_ParamLimits

0xe27f,	// (0x00059221) grid_graphic2_catg_pane

0xe31d,	// (0x000592bf) popup_grid_graphic2_window_t1_ParamLimits

0xe31d,	// (0x000592bf) popup_grid_graphic2_window_t1

0xe32f,	// (0x000592d1) popup_grid_graphic2_window_t2_ParamLimits

0xe32f,	// (0x000592d1) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x0005ad4c) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x0005ad4c) popup_grid_graphic2_window_t

0x7b43,	// (0x00052ae5) bg_button_pane_cp05_ParamLimits

0xe499,	// (0x0005943b) cell_graphic2_control_pane_g1_ParamLimits

0xe66a,	// (0x0005960c) cell_graphic2_catg_pane_ParamLimits

0xe66a,	// (0x0005960c) cell_graphic2_catg_pane

0x77c6,	// (0x00052768) bg_button_pane_cp12

0xe67c,	// (0x0005961e) cell_graphic2_catg_pane_g1

0xdb78,	// (0x00058b1a) cell_tb_ext_pane_t1_ParamLimits

0x70d3,	// (0x00052075) vkb2_top_cell_right_narrow_pane_ParamLimits

0x70d3,	// (0x00052075) vkb2_top_cell_right_narrow_pane

0x70eb,	// (0x0005208d) vkb2_top_cell_right_wide_pane_ParamLimits

0x70eb,	// (0x0005208d) vkb2_top_cell_right_wide_pane

0x67d5,	// (0x00051777) bg_vkb2_func_pane_ParamLimits

0x67d5,	// (0x00051777) bg_vkb2_func_pane

0x715c,	// (0x000520fe) vkb2_top_cell_left_pane_g1_ParamLimits

0x67d5,	// (0x00051777) bg_vkb2_fuc_pane_cp03_ParamLimits

0x67d5,	// (0x00051777) bg_vkb2_fuc_pane_cp03

0x71ba,	// (0x0005215c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9cf2,	// (0x00054c94) bg_vkb2_func_pane_g1

0x9cfa,	// (0x00054c9c) bg_vkb2_func_pane_g2

0x9d0a,	// (0x00054cac) bg_vkb2_func_pane_g3

0x9d02,	// (0x00054ca4) bg_vkb2_func_pane_g4

0x9d12,	// (0x00054cb4) bg_vkb2_func_pane_g5

0x9d1a,	// (0x00054cbc) bg_vkb2_func_pane_g6

0x9d22,	// (0x00054cc4) bg_vkb2_func_pane_g7

0x9d2a,	// (0x00054ccc) bg_vkb2_func_pane_g8

0x9cea,	// (0x00054c8c) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x0005ad9e) bg_vkb2_func_pane_g

0x67d5,	// (0x00051777) bg_vkb2_fuc_pane_cp01_ParamLimits

0x67d5,	// (0x00051777) bg_vkb2_fuc_pane_cp01

0x715c,	// (0x000520fe) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x715c,	// (0x000520fe) vkb2_top_cell_right_wide_pane_g1

0x67d5,	// (0x00051777) bg_vkb2_fuc_pane_cp02_ParamLimits

0x67d5,	// (0x00051777) bg_vkb2_fuc_pane_cp02

0x71ba,	// (0x0005215c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x71ba,	// (0x0005215c) vkb2_top_cell_right_narrow_pane_g1

0xd7ae,	// (0x00058750) aid_touch_area_decrease_ParamLimits

0xd7ae,	// (0x00058750) aid_touch_area_decrease

0xd7cc,	// (0x0005876e) aid_touch_area_increase_ParamLimits

0xd7cc,	// (0x0005876e) aid_touch_area_increase

0xd7d8,	// (0x0005877a) aid_touch_area_mute_ParamLimits

0xd7d8,	// (0x0005877a) aid_touch_area_mute

0xd7fc,	// (0x0005879e) aid_touch_area_slider_ParamLimits

0xd7fc,	// (0x0005879e) aid_touch_area_slider

0xd8e8,	// (0x0005888a) popup_slider_window_g4_ParamLimits

0xd8e8,	// (0x0005888a) popup_slider_window_g4

0xd8f4,	// (0x00058896) popup_slider_window_g5_ParamLimits

0xd8f4,	// (0x00058896) popup_slider_window_g5

0xd916,	// (0x000588b8) popup_slider_window_g6_ParamLimits

0xd916,	// (0x000588b8) popup_slider_window_g6

0xd956,	// (0x000588f8) popup_slider_window_t2_ParamLimits

0xd956,	// (0x000588f8) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x0005ac9a) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x0005ac9a) popup_slider_window_t

0xd96e,	// (0x00058910) slider_pane_ParamLimits

0xd96e,	// (0x00058910) slider_pane

0xe685,	// (0x00059627) slider_pane_g1_ParamLimits

0xe685,	// (0x00059627) slider_pane_g1

0xe699,	// (0x0005963b) slider_pane_g2_ParamLimits

0xe699,	// (0x0005963b) slider_pane_g2

0xe6af,	// (0x00059651) slider_pane_g3_ParamLimits

0xe6af,	// (0x00059651) slider_pane_g3

0x0003,

0xfe0f,	// (0x0005adb1) slider_pane_g_ParamLimits

0xfe0f,	// (0x0005adb1) slider_pane_g

0x5f0b,	// (0x00050ead) popup_tb_float_extension_window_ParamLimits

0x5f0b,	// (0x00050ead) popup_tb_float_extension_window

0xe6db,	// (0x0005967d) aid_size_cell_tb_float_ext

0x77c6,	// (0x00052768) bg_popup_sub_window_cp28

0xe6e7,	// (0x00059689) grid_tb_float_ext_pane

0xe6f1,	// (0x00059693) cell_tb_float_ext_pane_ParamLimits

0xe6f1,	// (0x00059693) cell_tb_float_ext_pane

0xe70b,	// (0x000596ad) cell_tb_float_ext_pane_g1

0xe714,	// (0x000596b6) grid_highlight_pane_cp12

0x6924,	// (0x000518c6) cell_last_hwr_side_pane_ParamLimits

0x6924,	// (0x000518c6) cell_last_hwr_side_pane

0xc2a3,	// (0x00057245) cell_last_hwr_side_pane_g1

0xe71d,	// (0x000596bf) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x0005adba) cell_last_hwr_side_pane_g

0x7082,	// (0x00052024) vkb2_area_bottom_space_btn_pane_ParamLimits

0x7082,	// (0x00052024) vkb2_area_bottom_space_btn_pane

0x6a3a,	// (0x000519dc) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe1f1,	// (0x00059193) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7318,	// (0x000522ba) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7337,	// (0x000522d9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7337,	// (0x000522d9) vkb2_area_bottom_space_btn_pane_g1

0x7371,	// (0x00052313) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7371,	// (0x00052313) vkb2_area_bottom_space_btn_pane_g2

0x73a7,	// (0x00052349) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x73a7,	// (0x00052349) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x0005adbf) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x0005adbf) vkb2_area_bottom_space_btn_pane_g

0x6898,	// (0x0005183a) cel_fep_hwr_func_pane_ParamLimits

0x6898,	// (0x0005183a) cel_fep_hwr_func_pane

0x68d4,	// (0x00051876) cell_hwr_side_button_pane_ParamLimits

0x68d4,	// (0x00051876) cell_hwr_side_button_pane

0xdbac,	// (0x00058b4e) aid_area_touch_clock_ParamLimits

0x7b43,	// (0x00052ae5) bg_uniindi_top_pane_ParamLimits

0xdbbe,	// (0x00058b60) uniindi_top_pane_g1_ParamLimits

0xdbd4,	// (0x00058b76) uniindi_top_pane_g2_ParamLimits

0xdbe0,	// (0x00058b82) uniindi_top_pane_g3_ParamLimits

0xdbf1,	// (0x00058b93) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x0005acd2) uniindi_top_pane_g_ParamLimits

0xdbfe,	// (0x00058ba0) uniindi_top_pane_t1_ParamLimits

0x7b43,	// (0x00052ae5) bg_vkb2_func_pane_cp01_ParamLimits

0x7b43,	// (0x00052ae5) bg_vkb2_func_pane_cp01

0xe726,	// (0x000596c8) cel_fep_hwr_func_pane_g1_ParamLimits

0xe726,	// (0x000596c8) cel_fep_hwr_func_pane_g1

0x7b43,	// (0x00052ae5) bg_vkb2_func_pane_cp02_ParamLimits

0x7b43,	// (0x00052ae5) bg_vkb2_func_pane_cp02

0xe726,	// (0x000596c8) cell_hwr_side_button_pane_g1_ParamLimits

0xe726,	// (0x000596c8) cell_hwr_side_button_pane_g1

0x9b6b,	// (0x00054b0d) status_pane_g4_ParamLimits

0x9b6b,	// (0x00054b0d) status_pane_g4

0x9b85,	// (0x00054b27) status_pane_t1

0xbfdd,	// (0x00056f7f) form2_midp_gauge_slider_cont_pane

0xbfe5,	// (0x00056f87) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbff7,	// (0x00056f99) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc009,	// (0x00056fab) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf0,	// (0x0005aa92) form2_midp_gauge_slider_pane_t_ParamLimits

0xc01b,	// (0x00056fbd) form2_midp_slider_pane_ParamLimits

0x6cf1,	// (0x00051c93) aid_size_cell_func_vkb2_ParamLimits

0x6cf1,	// (0x00051c93) aid_size_cell_func_vkb2

0xe6c7,	// (0x00059669) slider_pane_g4_ParamLimits

0xe6c7,	// (0x00059669) slider_pane_g4

0x73f1,	// (0x00052393) form2_midp_gauge_slider_pane_t2_cp01

0x73ff,	// (0x000523a1) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x73ff,	// (0x000523a1) form2_midp_gauge_slider_pane_t3_cp01

0x741c,	// (0x000523be) form2_midp_slider_pane_cp01

0x77c6,	// (0x00052768) navi_smil_pane

0xe75f,	// (0x00059701) navi_smil_pane_g1

0xe767,	// (0x00059709) navi_smil_pane_t1

0xe734,	// (0x000596d6) form2_midp_slider_pane_g1

0xe73d,	// (0x000596df) form2_midp_slider_pane_g2

0xe745,	// (0x000596e7) form2_midp_slider_pane_g3

0xe734,	// (0x000596d6) form2_midp_slider_pane_g4

0xe74d,	// (0x000596ef) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x0005adc8) form2_midp_slider_pane_g

0x73e1,	// (0x00052383) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x73e1,	// (0x00052383) vkb2_area_bottom_space_btn_pane_g4

0x998e,	// (0x00054930) lc0_navi_pane_ParamLimits

0x998e,	// (0x00054930) lc0_navi_pane

0x9a04,	// (0x000549a6) lc0_stat_indi_pane_ParamLimits

0x9a04,	// (0x000549a6) lc0_stat_indi_pane

0x9a1b,	// (0x000549bd) ls0_title_pane_ParamLimits

0x9a1b,	// (0x000549bd) ls0_title_pane

0x880c,	// (0x000537ae) bg_popup_sub_pane_cp14_ParamLimits

0xdb93,	// (0x00058b35) list_uniindi_pane_ParamLimits

0xdb9f,	// (0x00058b41) uniindi_top_pane_ParamLimits

0xdc3b,	// (0x00058bdd) list_single_uniindi_pane_g1_ParamLimits

0xdc4e,	// (0x00058bf0) list_single_uniindi_pane_t1_ParamLimits

0x7425,	// (0x000523c7) lc0_stat_clock_pane_ParamLimits

0x7425,	// (0x000523c7) lc0_stat_clock_pane

0xe775,	// (0x00059717) lc0_stat_indi_pane_g1_ParamLimits

0xe775,	// (0x00059717) lc0_stat_indi_pane_g1

0xe782,	// (0x00059724) lc0_stat_indi_pane_g2_ParamLimits

0xe782,	// (0x00059724) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x0005add3) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x0005add3) lc0_stat_indi_pane_g

0x7432,	// (0x000523d4) lc0_uni_indicator_pane_ParamLimits

0x7432,	// (0x000523d4) lc0_uni_indicator_pane

0xe78f,	// (0x00059731) ls0_title_pane_g1_ParamLimits

0xe78f,	// (0x00059731) ls0_title_pane_g1

0xe7a3,	// (0x00059745) ls0_title_pane_t1_ParamLimits

0xe7a3,	// (0x00059745) ls0_title_pane_t1

0x743f,	// (0x000523e1) lc0_uni_indicator_pane_g1_ParamLimits

0x743f,	// (0x000523e1) lc0_uni_indicator_pane_g1

0xe7d9,	// (0x0005977b) lc0_stat_clock_pane_t1

0x4a07,	// (0x0004f9a9) main_ai5_pane

0xe7e7,	// (0x00059789) ai5_sk_pane_ParamLimits

0xe7e7,	// (0x00059789) ai5_sk_pane

0xe7f4,	// (0x00059796) cell_ai5_widget_pane_ParamLimits

0xe7f4,	// (0x00059796) cell_ai5_widget_pane

0xe8aa,	// (0x0005984c) aid_size_cell_widget_grid

0xe8c0,	// (0x00059862) bg_ai5_widget_pane_ParamLimits

0xe8c0,	// (0x00059862) bg_ai5_widget_pane

0xe934,	// (0x000598d6) cell_ai5_widget_pane_g2

0xe944,	// (0x000598e6) cell_ai5_widget_pane_g3

0xe95b,	// (0x000598fd) cell_ai5_widget_pane_g4

0xe967,	// (0x00059909) cell_ai5_widget_pane_g5

0xe973,	// (0x00059915) cell_ai5_widget_pane_g6

0xe97f,	// (0x00059921) cell_ai5_widget_pane_g7

0xe9c7,	// (0x00059969) cell_ai5_widget_pane_t1_ParamLimits

0xe9c7,	// (0x00059969) cell_ai5_widget_pane_t1

0xe9e4,	// (0x00059986) cell_ai5_widget_pane_t2_ParamLimits

0xe9e4,	// (0x00059986) cell_ai5_widget_pane_t2

0xe9fc,	// (0x0005999e) cell_ai5_widget_pane_t3_ParamLimits

0xe9fc,	// (0x0005999e) cell_ai5_widget_pane_t3

0xea14,	// (0x000599b6) cell_ai5_widget_pane_t4_ParamLimits

0xea14,	// (0x000599b6) cell_ai5_widget_pane_t4

0xea31,	// (0x000599d3) cell_ai5_widget_pane_t5_ParamLimits

0xea31,	// (0x000599d3) cell_ai5_widget_pane_t5

0xea50,	// (0x000599f2) cell_ai5_widget_pane_t6_ParamLimits

0xea50,	// (0x000599f2) cell_ai5_widget_pane_t6

0xea62,	// (0x00059a04) cell_ai5_widget_pane_t7_ParamLimits

0xea62,	// (0x00059a04) cell_ai5_widget_pane_t7

0xea7b,	// (0x00059a1d) cell_ai5_widget_pane_t8_ParamLimits

0xea7b,	// (0x00059a1d) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x0005aded) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x0005aded) cell_ai5_widget_pane_t

0xeacf,	// (0x00059a71) grid_ai5_widget_pane

0x880c,	// (0x000537ae) highlight_cell_ai5_widget_pane_ParamLimits

0x880c,	// (0x000537ae) highlight_cell_ai5_widget_pane

0xeae6,	// (0x00059a88) ai5_sk_left_pane

0xeaf0,	// (0x00059a92) ai5_sk_middle_pane

0xeafa,	// (0x00059a9c) ai5_sk_right_pane

0xeb04,	// (0x00059aa6) bg_ai5_widget_pane_g1_ParamLimits

0xeb04,	// (0x00059aa6) bg_ai5_widget_pane_g1

0xeb10,	// (0x00059ab2) bg_ai5_widget_pane_g2_ParamLimits

0xeb10,	// (0x00059ab2) bg_ai5_widget_pane_g2

0xeb1c,	// (0x00059abe) bg_ai5_widget_pane_g3_ParamLimits

0xeb1c,	// (0x00059abe) bg_ai5_widget_pane_g3

0xeb28,	// (0x00059aca) bg_ai5_widget_pane_g4_ParamLimits

0xeb28,	// (0x00059aca) bg_ai5_widget_pane_g4

0xeb34,	// (0x00059ad6) bg_ai5_widget_pane_g5_ParamLimits

0xeb34,	// (0x00059ad6) bg_ai5_widget_pane_g5

0xeb40,	// (0x00059ae2) bg_ai5_widget_pane_g6_ParamLimits

0xeb40,	// (0x00059ae2) bg_ai5_widget_pane_g6

0xeb4c,	// (0x00059aee) bg_ai5_widget_pane_g7_ParamLimits

0xeb4c,	// (0x00059aee) bg_ai5_widget_pane_g7

0xeb58,	// (0x00059afa) bg_ai5_widget_pane_g8_ParamLimits

0xeb58,	// (0x00059afa) bg_ai5_widget_pane_g8

0xeb64,	// (0x00059b06) bg_ai5_widget_pane_g9_ParamLimits

0xeb64,	// (0x00059b06) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x0005ae02) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x0005ae02) bg_ai5_widget_pane_g

0xeb96,	// (0x00059b38) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb96,	// (0x00059b38) cell_shortcut_ai5_widget_pane

0x9496,	// (0x00054438) bg_cell_shortcut_ai5_widget_pane

0xeba7,	// (0x00059b49) cell_grid_ai5_widget_pane_g1

0x9496,	// (0x00054438) highlight_cell_shortcut_ai5_widget_pane

0x9cf2,	// (0x00054c94) ai5_sk_left_pane_g1

0xebb0,	// (0x00059b52) ai5_sk_left_pane_g2

0xebb8,	// (0x00059b5a) ai5_sk_left_pane_g3

0xebc0,	// (0x00059b62) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x0005ae15) ai5_sk_left_pane_g

0xebc8,	// (0x00059b6a) ai5_sk_left_pane_t1

0x9cfa,	// (0x00054c9c) ai5_sk_right_pane_g1

0xebd6,	// (0x00059b78) ai5_sk_right_pane_g2

0xebde,	// (0x00059b80) ai5_sk_right_pane_g3

0xebe6,	// (0x00059b88) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x0005ae1e) ai5_sk_right_pane_g

0xebee,	// (0x00059b90) ai5_sk_right_pane_t1

0x9cfa,	// (0x00054c9c) ai5_sk_middle_pane_g1

0x9cf2,	// (0x00054c94) ai5_sk_middle_pane_g2

0x9d12,	// (0x00054cb4) ai5_sk_middle_pane_g3

0xebde,	// (0x00059b80) ai5_sk_middle_pane_g4

0xebb8,	// (0x00059b5a) ai5_sk_middle_pane_g5

0xebfc,	// (0x00059b9e) ai5_sk_middle_pane_g6

0xec04,	// (0x00059ba6) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x0005ae27) ai5_sk_middle_pane_g

0x981a,	// (0x000547bc) aid_touch_area_size_lc0_ParamLimits

0x981a,	// (0x000547bc) aid_touch_area_size_lc0

0x6a69,	// (0x00051a0b) cell_hwr_candidate_pane_t1_ParamLimits

0x9836,	// (0x000547d8) aid_touch_navi_pane

0x9b15,	// (0x00054ab7) status_dt_navi_pane_ParamLimits

0x9b15,	// (0x00054ab7) status_dt_navi_pane

0x9b22,	// (0x00054ac4) status_dt_sta_pane_ParamLimits

0x9b22,	// (0x00054ac4) status_dt_sta_pane

0xec0c,	// (0x00059bae) dt_sta_controll_pane

0xec19,	// (0x00059bbb) dt_sta_indi_pane

0xec2a,	// (0x00059bcc) dt_sta_title_pane

0x7b43,	// (0x00052ae5) bg_dt_sta_indi_pane_ParamLimits

0x7b43,	// (0x00052ae5) bg_dt_sta_indi_pane

0xec3d,	// (0x00059bdf) dt_sta_battery_pane

0xec45,	// (0x00059be7) dt_sta_indi_pane_g1

0xec4e,	// (0x00059bf0) dt_sta_indi_pane_g2

0xec57,	// (0x00059bf9) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x0005ae36) dt_sta_indi_pane_g

0xec60,	// (0x00059c02) dt_sta_signal_pane

0x880c,	// (0x000537ae) bg_dt_sta_title_pane_ParamLimits

0x880c,	// (0x000537ae) bg_dt_sta_title_pane

0xec69,	// (0x00059c0b) dt_sta_title_pane_g1

0xec71,	// (0x00059c13) dt_sta_title_pane_t1_ParamLimits

0xec71,	// (0x00059c13) dt_sta_title_pane_t1

0x77c6,	// (0x00052768) bg_dt_sta_control_pane

0xec86,	// (0x00059c28) dt_sta_controll_pane_g1

0xec8f,	// (0x00059c31) bg_dt_sta_title_pane_g1

0xec98,	// (0x00059c3a) bg_dt_sta_title_pane_g2

0xeca1,	// (0x00059c43) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x0005ae3d) bg_dt_sta_title_pane_g

0xc2a3,	// (0x00057245) bg_dt_sta_indi_pane_g1

0xecaa,	// (0x00059c4c) dt_sta_signal_pane_g1

0xecb2,	// (0x00059c54) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x0005ae44) dt_sta_signal_pane_g

0xecba,	// (0x00059c5c) dt_sta_battery_pane_g1

0xecc3,	// (0x00059c65) dt_sta_battery_pane_t1

0xc2a3,	// (0x00057245) bg_dt_sta_control_pane_g1

0x8f95,	// (0x00053f37) fep_china_uni_eep_pane

0x8f9d,	// (0x00053f3f) fep_china_uni_entry_pane_ParamLimits

0x8fad,	// (0x00053f4f) popup_fep_china_uni_window_g1_ParamLimits

0x8fbd,	// (0x00053f5f) popup_fep_china_uni_window_g2_ParamLimits

0x8fbd,	// (0x00053f5f) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0005a6c4) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0005a6c4) popup_fep_china_uni_window_g

0xecd2,	// (0x00059c74) fep_china_uni_eep_pane_g1

0xecda,	// (0x00059c7c) fep_china_uni_eep_pane_t1

0xe756,	// (0x000596f8) aid_touch_area_size_smil_player

0x9986,	// (0x00054928) lc0_clock_pane

0x9b79,	// (0x00054b1b) status_pane_g5_ParamLimits

0x9b79,	// (0x00054b1b) status_pane_g5

0x5bd0,	// (0x00050b72) popup_keymap_window

0x9b37,	// (0x00054ad9) status_icon_pane

0xe944,	// (0x000598e6) cell_ai5_widget_pane_g3_ParamLimits

0xe95b,	// (0x000598fd) cell_ai5_widget_pane_g4_ParamLimits

0xe967,	// (0x00059909) cell_ai5_widget_pane_g5_ParamLimits

0xe98b,	// (0x0005992d) cell_ai5_widget_pane_g8_ParamLimits

0xe98b,	// (0x0005992d) cell_ai5_widget_pane_g8

0xe99f,	// (0x00059941) cell_ai5_widget_pane_g9_ParamLimits

0xe99f,	// (0x00059941) cell_ai5_widget_pane_g9

0xe9b3,	// (0x00059955) cell_ai5_widget_pane_g10_ParamLimits

0xe9b3,	// (0x00059955) cell_ai5_widget_pane_g10

0xece9,	// (0x00059c8b) status_icon_pane_g1

0x77c6,	// (0x00052768) bg_popup_sub_pane_cp13

0xecf1,	// (0x00059c93) popup_keymap_window_t1

0x975f,	// (0x00054701) control_pane_g6_ParamLimits

0x975f,	// (0x00054701) control_pane_g6

0x976c,	// (0x0005470e) control_pane_g7_ParamLimits

0x976c,	// (0x0005470e) control_pane_g7

0x9779,	// (0x0005471b) control_pane_g8_ParamLimits

0x9779,	// (0x0005471b) control_pane_g8

0xec0c,	// (0x00059bae) dt_sta_controll_pane_ParamLimits

0xec19,	// (0x00059bbb) dt_sta_indi_pane_ParamLimits

0xec2a,	// (0x00059bcc) dt_sta_title_pane_ParamLimits

0x8738,	// (0x000536da) aid_size_touch_scroll_bar_cale

0x4ae0,	// (0x0004fa82) popup_discreet_window_ParamLimits

0x4ae0,	// (0x0004fa82) popup_discreet_window

0x4b68,	// (0x0004fb0a) popup_sk_window

0xa363,	// (0x00055305) bg_popup_sub_pane_cp28_ParamLimits

0xa363,	// (0x00055305) bg_popup_sub_pane_cp28

0xecff,	// (0x00059ca1) popup_discreet_window_g1_ParamLimits

0xecff,	// (0x00059ca1) popup_discreet_window_g1

0xed1f,	// (0x00059cc1) popup_discreet_window_t1_ParamLimits

0xed1f,	// (0x00059cc1) popup_discreet_window_t1

0xed3d,	// (0x00059cdf) popup_discreet_window_t2_ParamLimits

0xed3d,	// (0x00059cdf) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x0005ae49) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x0005ae49) popup_discreet_window_t

0x7453,	// (0x000523f5) popup_sk_window_g1

0x745d,	// (0x000523ff) popup_sk_window_g2

0x0001,

0xfeae,	// (0x0005ae50) popup_sk_window_g

0x7467,	// (0x00052409) popup_sk_window_t1

0x7475,	// (0x00052417) popup_sk_window_t1_copy1

0xe934,	// (0x000598d6) cell_ai5_widget_pane_g2_ParamLimits

0xea8d,	// (0x00059a2f) cell_ai5_widget_pane_t9_ParamLimits

0xea8d,	// (0x00059a2f) cell_ai5_widget_pane_t9

0x77c6,	// (0x00052768) main_fep_fshwr2_pane

0x7483,	// (0x00052425) aid_fshwr2_btn_pane

0x748f,	// (0x00052431) aid_fshwr2_syb_pane

0x749b,	// (0x0005243d) aid_fshwr2_txt_pane

0x74a7,	// (0x00052449) fshwr2_func_candi_pane

0x74bc,	// (0x0005245e) fshwr2_hwr_syb_pane

0x74cc,	// (0x0005246e) fshwr2_icf_pane

0x4a07,	// (0x0004f9a9) fshwr2_icf_bg_pane

0x74f5,	// (0x00052497) fshwr2_icf_pane_t1_ParamLimits

0x74f5,	// (0x00052497) fshwr2_icf_pane_t1

0x8e83,	// (0x00053e25) fshwr2_func_candi_pane_g1

0xed8f,	// (0x00059d31) fshwr2_func_candi_row_pane_ParamLimits

0xed8f,	// (0x00059d31) fshwr2_func_candi_row_pane

0x750d,	// (0x000524af) cell_fshwr2_syb_pane_ParamLimits

0x750d,	// (0x000524af) cell_fshwr2_syb_pane

0x6a3a,	// (0x000519dc) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6a3a,	// (0x000519dc) fshwr2_hwr_syb_pane_g1

0x4a07,	// (0x0004f9a9) bg_popup_call_pane_cp01

0x7523,	// (0x000524c5) fshwr2_func_candi_cell_pane_ParamLimits

0x7523,	// (0x000524c5) fshwr2_func_candi_cell_pane

0xed9f,	// (0x00059d41) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed9f,	// (0x00059d41) fshwr2_func_candi_cell_bg_pane

0x756c,	// (0x0005250e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x756c,	// (0x0005250e) fshwr2_func_candi_cell_pane_g1

0x7594,	// (0x00052536) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7594,	// (0x00052536) fshwr2_func_candi_cell_pane_t1

0x4a07,	// (0x0004f9a9) bg_button_pane_cp08

0xedab,	// (0x00059d4d) cell_fshwr2_syb_bg_pane

0x75a7,	// (0x00052549) cell_fshwr2_syb_bg_pane_g1

0x75af,	// (0x00052551) cell_fshwr2_syb_bg_pane_t1

0x880c,	// (0x000537ae) main_tmo_pane

0xae72,	// (0x00055e14) uni_indicator_pane_g1_ParamLimits

0xae88,	// (0x00055e2a) uni_indicator_pane_g2_ParamLimits

0xae9e,	// (0x00055e40) uni_indicator_pane_g3_ParamLimits

0xaeb2,	// (0x00055e54) uni_indicator_pane_g4_ParamLimits

0xaeb2,	// (0x00055e54) uni_indicator_pane_g4

0xaec6,	// (0x00055e68) uni_indicator_pane_g5_ParamLimits

0xaec6,	// (0x00055e68) uni_indicator_pane_g5

0xaec6,	// (0x00055e68) uni_indicator_pane_g6_ParamLimits

0xaec6,	// (0x00055e68) uni_indicator_pane_g6

0xf926,	// (0x0005a8c8) uni_indicator_pane_g_ParamLimits

0xd78a,	// (0x0005872c) popup_tmo_note_window_ParamLimits

0xd78a,	// (0x0005872c) popup_tmo_note_window

0x6cd3,	// (0x00051c75) fshwr2_bg_pane

0x7585,	// (0x00052527) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7585,	// (0x00052527) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x0005ae55) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x0005ae55) fshwr2_func_candi_cell_pane_g

0x6a22,	// (0x000519c4) bg_popup_window_pane_cp01

0x75be,	// (0x00052560) bg_popup_window_pane_g1_cp01

0xedb3,	// (0x00059d55) bg_popup_window_pane_cp22_ParamLimits

0xedb3,	// (0x00059d55) bg_popup_window_pane_cp22

0xedc1,	// (0x00059d63) listscroll_tmo_link_pane_ParamLimits

0xedc1,	// (0x00059d63) listscroll_tmo_link_pane

0xee01,	// (0x00059da3) popup_tmo_note_window_g1_ParamLimits

0xee01,	// (0x00059da3) popup_tmo_note_window_g1

0xee0e,	// (0x00059db0) tmo_note_info_pane_ParamLimits

0xee0e,	// (0x00059db0) tmo_note_info_pane

0xee28,	// (0x00059dca) list_tmo_note_info_pane_g1_ParamLimits

0xee28,	// (0x00059dca) list_tmo_note_info_pane_g1

0xee3f,	// (0x00059de1) list_tmo_note_info_pane_g2_ParamLimits

0xee3f,	// (0x00059de1) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x0005ae5a) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x0005ae5a) list_tmo_note_info_pane_g

0xee5b,	// (0x00059dfd) list_tmo_note_info_text_pane_ParamLimits

0xee5b,	// (0x00059dfd) list_tmo_note_info_text_pane

0xeedc,	// (0x00059e7e) list_tmo_link_pane

0xeee9,	// (0x00059e8b) scroll_pane_cp20

0xeef6,	// (0x00059e98) list_single_tmo_link_pane_ParamLimits

0xeef6,	// (0x00059e98) list_single_tmo_link_pane

0xef06,	// (0x00059ea8) list_single_tmo_link_pane_t1

0xef14,	// (0x00059eb6) list_tmo_note_info_text_pane_t1_ParamLimits

0xef14,	// (0x00059eb6) list_tmo_note_info_text_pane_t1

0x88ba,	// (0x0005385c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88ba,	// (0x0005385c) aid_size_touch_scroll_bar_cp01

0x52a3,	// (0x00050245) aid_size_touch_slider_marker

0x4b50,	// (0x0004faf2) popup_settings_window_ParamLimits

0x4b50,	// (0x0004faf2) popup_settings_window

0x5a55,	// (0x000509f7) popup_candi_list_indi_window

0x9836,	// (0x000547d8) aid_touch_navi_pane_ParamLimits

0x6c2e,	// (0x00051bd0) rs_clock_indi_pane

0x6c37,	// (0x00051bd9) sctrl_sk_bottom_pane_ParamLimits

0x6c48,	// (0x00051bea) sctrl_sk_top_pane_ParamLimits

0x6d4b,	// (0x00051ced) popup_fep_tooltip_window

0xe8aa,	// (0x0005984c) aid_size_cell_widget_grid_ParamLimits

0xe91f,	// (0x000598c1) cell_ai5_widget_pane_g1_ParamLimits

0xe91f,	// (0x000598c1) cell_ai5_widget_pane_g1

0xe973,	// (0x00059915) cell_ai5_widget_pane_g6_ParamLimits

0xe97f,	// (0x00059921) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x0005add8) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0005add8) cell_ai5_widget_pane_g

0xeab1,	// (0x00059a53) cell_ai5_widget_pane_t10_ParamLimits

0xeab1,	// (0x00059a53) cell_ai5_widget_pane_t10

0xeacf,	// (0x00059a71) grid_ai5_widget_pane_ParamLimits

0xeb70,	// (0x00059b12) cell_contacts_ai5_widget_pane_ParamLimits

0xeb70,	// (0x00059b12) cell_contacts_ai5_widget_pane

0xed52,	// (0x00059cf4) popup_discreet_window_t3_ParamLimits

0xed52,	// (0x00059cf4) popup_discreet_window_t3

0x74e1,	// (0x00052483) popup_fshwr2_char_preview_window_ParamLimits

0x74e1,	// (0x00052483) popup_fshwr2_char_preview_window

0xee79,	// (0x00059e1b) tmo_note_info_pane_t1

0xee8e,	// (0x00059e30) tmo_note_info_pane_t2

0xeea3,	// (0x00059e45) tmo_note_info_pane_t3

0xeeb8,	// (0x00059e5a) tmo_note_info_pane_t4

0xeeca,	// (0x00059e6c) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x0005ae5f) tmo_note_info_pane_t

0xeedc,	// (0x00059e7e) list_tmo_link_pane_ParamLimits

0xeee9,	// (0x00059e8b) scroll_pane_cp20_ParamLimits

0x4a07,	// (0x0004f9a9) bg_popup_fep_char_preview_window_cp01

0xef2d,	// (0x00059ecf) popup_fshwr2_char_preview_window_t1

0xef3b,	// (0x00059edd) popup_candi_list_indi_window_g1

0xef44,	// (0x00059ee6) bg_cell_contacts_ai5_widget_pane

0xef50,	// (0x00059ef2) cell_contacts_ai5_widget_pane_g1

0xc941,	// (0x000578e3) cell_contacts_ai5_widget_pane_g2

0xef65,	// (0x00059f07) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x0005ae6a) cell_contacts_ai5_widget_pane_g

0xef71,	// (0x00059f13) cell_contacts_ai5_widget_pane_t1

0x880c,	// (0x000537ae) highlight_cell_shortcut_ai5_widget_pane_cp01

0xefe8,	// (0x00059f8a) settings_container_pane

0x9496,	// (0x00054438) listscroll_set_pane_copy1

0xb998,	// (0x0005693a) scroll_pane_cp121_copy1

0xeff4,	// (0x00059f96) set_content_pane_copy1

0xeffc,	// (0x00059f9e) aid_height_set_list_copy1_ParamLimits

0xeffc,	// (0x00059f9e) aid_height_set_list_copy1

0xb0be,	// (0x00056060) aid_size_parent_copy1_ParamLimits

0xb0be,	// (0x00056060) aid_size_parent_copy1

0xf008,	// (0x00059faa) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf008,	// (0x00059faa) button_value_adjust_pane_cp6_copy1

0x97d4,	// (0x00054776) list_highlight_pane_cp2_copy1_ParamLimits

0x97d4,	// (0x00054776) list_highlight_pane_cp2_copy1

0xf01c,	// (0x00059fbe) list_set_pane_copy1_ParamLimits

0xf01c,	// (0x00059fbe) list_set_pane_copy1

0xef83,	// (0x00059f25) main_pane_set_t1_copy1_ParamLimits

0xef83,	// (0x00059f25) main_pane_set_t1_copy1

0xefbd,	// (0x00059f5f) main_pane_set_t2_copy1_ParamLimits

0xefbd,	// (0x00059f5f) main_pane_set_t2_copy1

0xf0c9,	// (0x0005a06b) main_pane_set_t3_copy1

0xf0d7,	// (0x0005a079) main_pane_set_t4_copy1

0xefdc,	// (0x00059f7e) set_content_pane_g1_copy1_ParamLimits

0xefdc,	// (0x00059f7e) set_content_pane_g1_copy1

0xf0e5,	// (0x0005a087) setting_code_pane_copy1

0xf0ed,	// (0x0005a08f) setting_slider_graphic_pane_copy1

0xf0ed,	// (0x0005a08f) setting_slider_pane_copy1

0xf0ed,	// (0x0005a08f) setting_text_pane_copy1

0xf0ed,	// (0x0005a08f) setting_volume_pane_copy1

0xf0e5,	// (0x0005a087) settings_code_pane_cp2_copy1

0xf0f5,	// (0x0005a097) settings_code_pane_cp_copy1_ParamLimits

0xf0f5,	// (0x0005a097) settings_code_pane_cp_copy1

0x75c7,	// (0x00052569) volume_set_pane_copy1

0xf109,	// (0x0005a0ab) volume_set_pane_g10_copy1

0xf111,	// (0x0005a0b3) volume_set_pane_g1_copy1

0xf119,	// (0x0005a0bb) volume_set_pane_g2_copy1

0xf121,	// (0x0005a0c3) volume_set_pane_g3_copy1

0xf129,	// (0x0005a0cb) volume_set_pane_g4_copy1

0xf131,	// (0x0005a0d3) volume_set_pane_g5_copy1

0xf139,	// (0x0005a0db) volume_set_pane_g6_copy1

0xf141,	// (0x0005a0e3) volume_set_pane_g7_copy1

0xf149,	// (0x0005a0eb) volume_set_pane_g8_copy1

0xf151,	// (0x0005a0f3) volume_set_pane_g9_copy1

0x78ba,	// (0x0005285c) bg_set_opt_pane_cp_copy1_ParamLimits

0x78ba,	// (0x0005285c) bg_set_opt_pane_cp_copy1

0x75cf,	// (0x00052571) setting_slider_pane_t1_copy1_ParamLimits

0x75cf,	// (0x00052571) setting_slider_pane_t1_copy1

0x75ed,	// (0x0005258f) setting_slider_pane_t2_copy1_ParamLimits

0x75ed,	// (0x0005258f) setting_slider_pane_t2_copy1

0x7607,	// (0x000525a9) setting_slider_pane_t3_copy1_ParamLimits

0x7607,	// (0x000525a9) setting_slider_pane_t3_copy1

0x761f,	// (0x000525c1) slider_set_pane_copy1_ParamLimits

0x761f,	// (0x000525c1) slider_set_pane_copy1

0x885b,	// (0x000537fd) set_opt_bg_pane_g1_copy2

0x8863,	// (0x00053805) set_opt_bg_pane_g2_copy2

0xf159,	// (0x0005a0fb) set_opt_bg_pane_g3_copy2

0x8873,	// (0x00053815) set_opt_bg_pane_g4_copy2

0x887b,	// (0x0005381d) set_opt_bg_pane_g5_copy2

0x8883,	// (0x00053825) set_opt_bg_pane_g6_copy2

0xf163,	// (0x0005a105) set_opt_bg_pane_g7_copy2

0xf16b,	// (0x0005a10d) set_opt_bg_pane_g8_copy2

0xf175,	// (0x0005a117) set_opt_bg_pane_g9_copy2

0x7635,	// (0x000525d7) aid_size_touch_slider_mark_copy1_ParamLimits

0x7635,	// (0x000525d7) aid_size_touch_slider_mark_copy1

0xf17f,	// (0x0005a121) slider_set_pane_g1_copy1

0x7649,	// (0x000525eb) slider_set_pane_g2_copy1

0x6428,	// (0x000513ca) slider_set_pane_g3_copy1_ParamLimits

0x6428,	// (0x000513ca) slider_set_pane_g3_copy1

0x643c,	// (0x000513de) slider_set_pane_g4_copy1_ParamLimits

0x643c,	// (0x000513de) slider_set_pane_g4_copy1

0x6454,	// (0x000513f6) slider_set_pane_g5_copy1_ParamLimits

0x6454,	// (0x000513f6) slider_set_pane_g5_copy1

0x6428,	// (0x000513ca) slider_set_pane_g6_copy1_ParamLimits

0x6428,	// (0x000513ca) slider_set_pane_g6_copy1

0x7651,	// (0x000525f3) slider_set_pane_g7_copy1_ParamLimits

0x7651,	// (0x000525f3) slider_set_pane_g7_copy1

0x77da,	// (0x0005277c) bg_set_opt_pane_cp2_copy1

0xf188,	// (0x0005a12a) setting_slider_graphic_pane_g1_copy1

0xf191,	// (0x0005a133) setting_slider_graphic_pane_t1_copy1

0xf1a1,	// (0x0005a143) setting_slider_graphic_pane_t2_copy1

0xf1b1,	// (0x0005a153) slider_set_pane_cp_copy1

0xf1c1,	// (0x0005a163) input_focus_pane_cp1_copy1

0xf1ca,	// (0x0005a16c) list_set_text_pane_copy1

0xf1d2,	// (0x0005a174) setting_text_pane_g1_copy1

0x3e2d,	// (0x0004edcf) set_text_pane_t1_copy1

0xf1c1,	// (0x0005a163) input_focus_pane_cp2_copy1

0xf1d2,	// (0x0005a174) setting_code_pane_g1_copy1

0xf1db,	// (0x0005a17d) setting_code_pane_t1_copy1

0xf1e9,	// (0x0005a18b) list_set_graphic_pane_copy1

0x77da,	// (0x0005277c) bg_set_opt_pane_cp4_copy1

0x9191,	// (0x00054133) list_set_graphic_pane_g1_copy1_ParamLimits

0x9191,	// (0x00054133) list_set_graphic_pane_g1_copy1

0xf1fb,	// (0x0005a19d) list_set_graphic_pane_g2_copy1

0x91a9,	// (0x0005414b) list_set_graphic_pane_t1_copy1_ParamLimits

0x91a9,	// (0x0005414b) list_set_graphic_pane_t1_copy1

0xc2a3,	// (0x00057245) rs_clock_indi_pane_g1

0xf203,	// (0x0005a1a5) rs_clock_indi_pane_t1

0xf211,	// (0x0005a1b3) rs_indi_pane

0xf219,	// (0x0005a1bb) rs_indi_pane_g1

0xf222,	// (0x0005a1c4) rs_indi_pane_g2

0xf22b,	// (0x0005a1cd) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x0005ae71) rs_indi_pane_g

0x9496,	// (0x00054438) bg_popup_preview_window_pane_cp03

0xf234,	// (0x0005a1d6) popup_fep_tooltip_window_t1

0xcf2b,	// (0x00057ecd) popup_note2_window_g2_ParamLimits

0xcf2b,	// (0x00057ecd) popup_note2_window_g2

0x0001,

0xfc68,	// (0x0005ac0a) popup_note2_window_g_ParamLimits

0xfc68,	// (0x0005ac0a) popup_note2_window_g

0xd426,	// (0x000583c8) bg_popup_sub_pane_cp11_ParamLimits

0xd433,	// (0x000583d5) cell_ai3_links_pane_g1_ParamLimits

0xd44a,	// (0x000583ec) cell_ai3_links_pane_t1

0x3e2d,	// (0x0004edcf) set_text_pane_t1_copy1_ParamLimits

0x93a7,	// (0x00054349) cell_graphic_popup_pane_cp2_ParamLimits

0x93a7,	// (0x00054349) cell_graphic_popup_pane_cp2

0xf242,	// (0x0005a1e4) cell_graphic_popup_pane_g1_cp2

0x854b,	// (0x000534ed) cell_graphic_popup_pane_g2_cp2

0xf24a,	// (0x0005a1ec) cell_graphic_popup_pane_g3_cp2

0xf252,	// (0x0005a1f4) cell_graphic_popup_pane_t2_cp2

0x855c,	// (0x000534fe) grid_highlight_pane_cp3_cp2

0x8ba0,	// (0x00053b42) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x880c,	// (0x000537ae) main_tmo_pane_ParamLimits

0xd77e,	// (0x00058720) popup_tmo_big_image_note_window

0xe90e,	// (0x000598b0) cell_ai5_widget_list_pane

0xe916,	// (0x000598b8) cell_ai5_widget_lrg_icon_pane

0xee79,	// (0x00059e1b) tmo_note_info_pane_t1_ParamLimits

0xee8e,	// (0x00059e30) tmo_note_info_pane_t2_ParamLimits

0xeea3,	// (0x00059e45) tmo_note_info_pane_t3_ParamLimits

0xeeb8,	// (0x00059e5a) tmo_note_info_pane_t4_ParamLimits

0xeeca,	// (0x00059e6c) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x0005ae5f) tmo_note_info_pane_t_ParamLimits

0xefe8,	// (0x00059f8a) settings_container_pane_ParamLimits

0xf1b9,	// (0x0005a15b) indicator_popup_pane_cp5

0xf1b9,	// (0x0005a15b) indicator_popup_pane_cp6

0xf1e9,	// (0x0005a18b) list_set_graphic_pane_copy1_ParamLimits

0x77c6,	// (0x00052768) bg_popup_window_pane_cp23

0xf260,	// (0x0005a202) popup_tmo_big_image_note_window_g1

0xf26a,	// (0x0005a20c) popup_tmo_big_image_note_window_t1

0xf27a,	// (0x0005a21c) popup_tmo_big_image_note_window_t2

0xf28a,	// (0x0005a22c) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x0005ae78) popup_tmo_big_image_note_window_t

0xc2a3,	// (0x00057245) cell_ai5_widget_lrg_icon_pane_g1

0xf29a,	// (0x0005a23c) cell_ai5_widget_lrg_icon_pane_t1

0xf2a8,	// (0x0005a24a) cell_ai5_widget_list_row_pane_ParamLimits

0xf2a8,	// (0x0005a24a) cell_ai5_widget_list_row_pane

0xf2bf,	// (0x0005a261) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2bf,	// (0x0005a261) cell_ai5_widget_list_row_pane_g1

0xf2cc,	// (0x0005a26e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2cc,	// (0x0005a26e) cell_ai5_widget_list_row_pane_t1

0xf2fd,	// (0x0005a29f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2fd,	// (0x0005a29f) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedd,	// (0x0005ae7f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x0005ae7f) cell_ai5_widget_list_row_pane_t

0x4a07,	// (0x0004f9a9) main_fep_vtchi_ss_pane

0xf341,	// (0x0005a2e3) popup_fep_char_pre_window

0xf349,	// (0x0005a2eb) popup_fep_ituss_window

0xf36a,	// (0x0005a30c) popup_fep_vkbss_window

0xf389,	// (0x0005a32b) grid_vkbss_keypad_pane_ParamLimits

0xf389,	// (0x0005a32b) grid_vkbss_keypad_pane

0xf399,	// (0x0005a33b) ituss_keypad_pane

0x7673,	// (0x00052615) aid_vkbss_key_offset_ParamLimits

0x7673,	// (0x00052615) aid_vkbss_key_offset

0x767f,	// (0x00052621) cell_vkbss_key_pane_ParamLimits

0x767f,	// (0x00052621) cell_vkbss_key_pane

0xf3a8,	// (0x0005a34a) bg_cell_vkbss_key_g1_ParamLimits

0xf3a8,	// (0x0005a34a) bg_cell_vkbss_key_g1

0xf3b4,	// (0x0005a356) cell_vkbss_key_3p_pane_ParamLimits

0xf3b4,	// (0x0005a356) cell_vkbss_key_3p_pane

0xf3ce,	// (0x0005a370) cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x0005a370) cell_vkbss_key_g1

0xf3e8,	// (0x0005a38a) cell_vkbss_key_t1_ParamLimits

0xf3e8,	// (0x0005a38a) cell_vkbss_key_t1

0x7695,	// (0x00052637) cell_ituss_key_pane_ParamLimits

0x7695,	// (0x00052637) cell_ituss_key_pane

0xf413,	// (0x0005a3b5) bg_cell_ituss_key_g1_ParamLimits

0xf413,	// (0x0005a3b5) bg_cell_ituss_key_g1

0xf41f,	// (0x0005a3c1) cell_ituss_key_pane_g1_ParamLimits

0xf41f,	// (0x0005a3c1) cell_ituss_key_pane_g1

0x76a6,	// (0x00052648) cell_ituss_key_pane_g2_ParamLimits

0x76a6,	// (0x00052648) cell_ituss_key_pane_g2

0x0002,

0xfee4,	// (0x0005ae86) cell_ituss_key_pane_g_ParamLimits

0xfee4,	// (0x0005ae86) cell_ituss_key_pane_g

0x76d2,	// (0x00052674) cell_ituss_key_t1_ParamLimits

0x76d2,	// (0x00052674) cell_ituss_key_t1

0x770c,	// (0x000526ae) cell_ituss_key_t2_ParamLimits

0x770c,	// (0x000526ae) cell_ituss_key_t2

0x773d,	// (0x000526df) cell_ituss_key_t3_ParamLimits

0x773d,	// (0x000526df) cell_ituss_key_t3

0x770c,	// (0x000526ae) cell_ituss_key_t4_ParamLimits

0x770c,	// (0x000526ae) cell_ituss_key_t4

0x0004,

0xfeeb,	// (0x0005ae8d) cell_ituss_key_t_ParamLimits

0xfeeb,	// (0x0005ae8d) cell_ituss_key_t

0xf44b,	// (0x0005a3ed) cell_vkbss_key_3p_pane_g1

0xf453,	// (0x0005a3f5) cell_vkbss_key_3p_pane_g2

0xf45b,	// (0x0005a3fd) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef6,	// (0x0005ae98) cell_vkbss_key_3p_pane_g

0x4a07,	// (0x0004f9a9) bg_popup_fep_char_preview_window_cp02

0x7780,	// (0x00052722) popup_fep_char_pre_window_t1

0xe8a0,	// (0x00059842) main_ai5_sk_pane

0xef44,	// (0x00059ee6) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xef50,	// (0x00059ef2) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc941,	// (0x000578e3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xef65,	// (0x00059f07) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x0005ae6a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xef71,	// (0x00059f13) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x880c,	// (0x000537ae) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf463,	// (0x0005a405) main_ai5_sk_pane_g1

0xa19c,	// (0x0005513e) popup_query_code_window_g1

0xf35f,	// (0x0005a301) popup_fep_vkb_icf_pane

0xf373,	// (0x0005a315) popup_fep_vtchi_icf_pane

0xf46c,	// (0x0005a40e) bg_icf_pane

0xf478,	// (0x0005a41a) list_vkb_icf_pane

0xf487,	// (0x0005a429) bg_icf_pane_cp01

0xf49a,	// (0x0005a43c) vtchi_icf_list_pane

0xf4aa,	// (0x0005a44c) list_vkb_icf_pane_t1_ParamLimits

0xf4aa,	// (0x0005a44c) list_vkb_icf_pane_t1

0xf4c0,	// (0x0005a462) vtchi_icf_list_pane_t1_ParamLimits

0xf4c0,	// (0x0005a462) vtchi_icf_list_pane_t1

0xf349,	// (0x0005a2eb) popup_fep_ituss_window_ParamLimits

0xf373,	// (0x0005a315) popup_fep_vtchi_icf_pane_ParamLimits

0xf399,	// (0x0005a33b) ituss_keypad_pane_ParamLimits

0x7667,	// (0x00052609) ituss_sks_pane

0xf46c,	// (0x0005a40e) bg_icf_pane_ParamLimits

0xf325,	// (0x0005a2c7) icf_edit_indi_pane_ParamLimits

0xf325,	// (0x0005a2c7) icf_edit_indi_pane

0xf478,	// (0x0005a41a) list_vkb_icf_pane_ParamLimits

0xf487,	// (0x0005a429) bg_icf_pane_cp01_ParamLimits

0xf334,	// (0x0005a2d6) icf_edit_indi_pane_cp01_ParamLimits

0xf334,	// (0x0005a2d6) icf_edit_indi_pane_cp01

0xf4a2,	// (0x0005a444) vtchi_query_pane

0xc521,	// (0x000574c3) icf_edit_indi_pane_g1_ParamLimits

0xc521,	// (0x000574c3) icf_edit_indi_pane_g1

0xf531,	// (0x0005a4d3) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0005a4d3) icf_edit_indi_pane_g2

0x0001,

0xff0e,	// (0x0005aeb0) icf_edit_indi_pane_g_ParamLimits

0xff0e,	// (0x0005aeb0) icf_edit_indi_pane_g

0xf540,	// (0x0005a4e2) icf_edit_indi_pane_t1

0xf4da,	// (0x0005a47c) bg_input_focus_pane_cp042

0x872f,	// (0x000536d1) vtchi_button_pane

0xf4e3,	// (0x0005a485) vtchi_query_pane_t1

0xf4f1,	// (0x0005a493) vtchi_query_pane_t2

0xf4ff,	// (0x0005a4a1) vtchi_query_pane_t3

0x0002,

0xfefd,	// (0x0005ae9f) vtchi_query_pane_t

0x4a07,	// (0x0004f9a9) bg_button_pane_cp13

0xf50d,	// (0x0005a4af) vtchi_button_pane_g1

0x778f,	// (0x00052731) ituss_sks_pane_g1

0x779a,	// (0x0005273c) ituss_sks_pane_g2

0x0001,

0xff04,	// (0x0005aea6) ituss_sks_pane_g

0xf515,	// (0x0005a4b7) ituss_sks_pane_t1

0xf523,	// (0x0005a4c5) ituss_sks_pane_t2

0x0001,

0xff09,	// (0x0005aeab) ituss_sks_pane_t

0xbd12,	// (0x00056cb4) indicator_nsta_pane_cp_g1

0xbd1b,	// (0x00056cbd) indicator_nsta_pane_cp_g2

0xbd23,	// (0x00056cc5) indicator_nsta_pane_cp_g3

0xbd2b,	// (0x00056ccd) indicator_nsta_pane_cp_g4

0xbd33,	// (0x00056cd5) indicator_nsta_pane_cp_g5

0xbd33,	// (0x00056cd5) indicator_nsta_pane_cp_g6

0x0005,

0xfaa6,	// (0x0005aa48) indicator_nsta_pane_cp_g

0xe486,	// (0x00059428) cell_graphic2_pane_t2_ParamLimits

0xe486,	// (0x00059428) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x0005ad61) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x0005ad61) cell_graphic2_pane_t

0xe4b3,	// (0x00059455) cell_graphic2_control_pane_t1

0x8f44,	// (0x00053ee6) signal_pane_g3_ParamLimits

0x8f44,	// (0x00053ee6) signal_pane_g3

0x8f56,	// (0x00053ef8) signal_pane_g4_ParamLimits

0x8f56,	// (0x00053ef8) signal_pane_g4

0xf30f,	// (0x0005a2b1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf30f,	// (0x0005a2b1) cell_ai5_widget_list_row_pane_t3

0xf439,	// (0x0005a3db) cell_ituss_key_pane_t1_ParamLimits

0xf439,	// (0x0005a3db) cell_ituss_key_pane_t1

0x9def,	// (0x00054d91) form_field_data_wide_pane_vc_t2_ParamLimits

0x9def,	// (0x00054d91) form_field_data_wide_pane_vc_t2

0x9e03,	// (0x00054da5) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e03,	// (0x00054da5) form_field_data_wide_pane_vc_t3

0x0002,

0xf80e,	// (0x0005a7b0) form_field_data_wide_pane_vc_t_ParamLimits

0xf80e,	// (0x0005a7b0) form_field_data_wide_pane_vc_t

0xb9da,	// (0x0005697c) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb9da,	// (0x0005697c) form_field_slider_wide_pane_vc_t3

0xbab8,	// (0x00056a5a) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbab8,	// (0x00056a5a) form_field_popup_wide_pane_vc_t2

0xbacf,	// (0x00056a71) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbacf,	// (0x00056a71) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa95,	// (0x0005aa37) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa95,	// (0x0005aa37) form_field_popup_wide_pane_vc_t

0x7483,	// (0x00052425) aid_fshwr2_btn_pane_ParamLimits

0x748f,	// (0x00052431) aid_fshwr2_syb_pane_ParamLimits

0x749b,	// (0x0005243d) aid_fshwr2_txt_pane_ParamLimits

0x6cd3,	// (0x00051c75) fshwr2_bg_pane_ParamLimits

0x74a7,	// (0x00052449) fshwr2_func_candi_pane_ParamLimits

0x74bc,	// (0x0005245e) fshwr2_hwr_syb_pane_ParamLimits

0x74cc,	// (0x0005246e) fshwr2_icf_pane_ParamLimits

0x7f48,	// (0x00052eea) list_double_graphic_pane_vc_g4_ParamLimits

0x7f48,	// (0x00052eea) list_double_graphic_pane_vc_g4

0x76c6,	// (0x00052668) cell_ituss_key_pane_g3_ParamLimits

0x76c6,	// (0x00052668) cell_ituss_key_pane_g3

0x776e,	// (0x00052710) cell_ituss_key_t5_ParamLimits

0x776e,	// (0x00052710) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Large

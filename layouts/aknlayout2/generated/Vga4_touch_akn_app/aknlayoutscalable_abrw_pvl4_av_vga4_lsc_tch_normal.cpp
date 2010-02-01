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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0001107a };

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
0xb140,	// (0x0001c1ba) Screen

0xb14c,	// (0x0001c1c6) application_window_ParamLimits

0xb14c,	// (0x0001c1c6) application_window

0xea99,	// (0x0001fb13) screen_g1

0xa82f,	// (0x0001b8a9) area_bottom_pane_ParamLimits

0xa82f,	// (0x0001b8a9) area_bottom_pane

0xeac3,	// (0x0001fb3d) area_top_pane_ParamLimits

0xeac3,	// (0x0001fb3d) area_top_pane

0xeb61,	// (0x0001fbdb) main_pane_ParamLimits

0xeb61,	// (0x0001fbdb) main_pane

0xec1c,	// (0x0001fc96) misc_graphics

0xc67e,	// (0x0001d6f8) battery_pane_ParamLimits

0xc67e,	// (0x0001d6f8) battery_pane

0x44aa,	// (0x00015524) bg_status_flat_pane_g8

0x44b2,	// (0x0001552c) bg_status_flat_pane_g9

0x37d8,	// (0x00014852) context_pane_ParamLimits

0x37d8,	// (0x00014852) context_pane

0xc81d,	// (0x0001d897) navi_pane_ParamLimits

0xc81d,	// (0x0001d897) navi_pane

0xc8a6,	// (0x0001d920) signal_pane_ParamLimits

0xc8a6,	// (0x0001d920) signal_pane

0x0008,

0xf880,	// (0x000208fa) bg_status_flat_pane_g

0xc936,	// (0x0001d9b0) status_pane_g1_ParamLimits

0xc936,	// (0x0001d9b0) status_pane_g1

0xc94c,	// (0x0001d9c6) status_pane_g2_ParamLimits

0xc94c,	// (0x0001d9c6) status_pane_g2

0x3a18,	// (0x00014a92) status_pane_g3_ParamLimits

0x3a18,	// (0x00014a92) status_pane_g3

0x0004,

0xf7b3,	// (0x0002082d) status_pane_g_ParamLimits

0xf7b3,	// (0x0002082d) status_pane_g

0xc958,	// (0x0001d9d2) title_pane_ParamLimits

0xc958,	// (0x0001d9d2) title_pane

0xc9b5,	// (0x0001da2f) uni_indicator_pane_ParamLimits

0xc9b5,	// (0x0001da2f) uni_indicator_pane

0x2ffd,	// (0x00014077) bg_list_pane_ParamLimits

0x2ffd,	// (0x00014077) bg_list_pane

0xbead,	// (0x0001cf27) find_pane

0xbeb5,	// (0x0001cf2f) listscroll_app_pane_ParamLimits

0xbeb5,	// (0x0001cf2f) listscroll_app_pane

0x3031,	// (0x000140ab) listscroll_form_pane

0xbec1,	// (0x0001cf3b) listscroll_gen_pane_ParamLimits

0xbec1,	// (0x0001cf3b) listscroll_gen_pane

0x3031,	// (0x000140ab) listscroll_set_pane

0x508b,	// (0x00016105) main_idle_act_pane

0x2cd1,	// (0x00013d4b) main_idle_trad_pane

0x2cd1,	// (0x00013d4b) main_list_empty_pane

0x305f,	// (0x000140d9) main_midp_pane

0x306b,	// (0x000140e5) main_pane_g1_ParamLimits

0x306b,	// (0x000140e5) main_pane_g1

0xbee3,	// (0x0001cf5d) popup_ai_message_window_ParamLimits

0xbee3,	// (0x0001cf5d) popup_ai_message_window

0xbf83,	// (0x0001cffd) popup_fep_china_uni_window_ParamLimits

0xbf83,	// (0x0001cffd) popup_fep_china_uni_window

0x3191,	// (0x0001420b) popup_fep_japan_candidate_window_ParamLimits

0x3191,	// (0x0001420b) popup_fep_japan_candidate_window

0x31bb,	// (0x00014235) popup_fep_japan_predictive_window_ParamLimits

0x31bb,	// (0x00014235) popup_fep_japan_predictive_window

0xbfe3,	// (0x0001d05d) popup_find_window

0xc000,	// (0x0001d07a) popup_grid_graphic_window_ParamLimits

0xc000,	// (0x0001d07a) popup_grid_graphic_window

0x322c,	// (0x000142a6) popup_large_graphic_colour_window

0xc0a4,	// (0x0001d11e) popup_menu_window_ParamLimits

0xc0a4,	// (0x0001d11e) popup_menu_window

0xc290,	// (0x0001d30a) popup_note_image_window

0xc250,	// (0x0001d2ca) popup_note_wait_window_ParamLimits

0xc250,	// (0x0001d2ca) popup_note_wait_window

0xc2a8,	// (0x0001d322) popup_note_window_ParamLimits

0xc2a8,	// (0x0001d322) popup_note_window

0xc356,	// (0x0001d3d0) popup_query_code_window_ParamLimits

0xc356,	// (0x0001d3d0) popup_query_code_window

0x3498,	// (0x00014512) popup_query_data_code_window_ParamLimits

0x3498,	// (0x00014512) popup_query_data_code_window

0xc396,	// (0x0001d410) popup_query_data_window_ParamLimits

0xc396,	// (0x0001d410) popup_query_data_window

0xc42a,	// (0x0001d4a4) popup_query_sat_info_window_ParamLimits

0xc42a,	// (0x0001d4a4) popup_query_sat_info_window

0xc4d5,	// (0x0001d54f) popup_snote_single_graphic_window_ParamLimits

0xc4d5,	// (0x0001d54f) popup_snote_single_graphic_window

0xc4d5,	// (0x0001d54f) popup_snote_single_text_window_ParamLimits

0xc4d5,	// (0x0001d54f) popup_snote_single_text_window

0x3533,	// (0x000145ad) popup_sub_window_general

0x3679,	// (0x000146f3) popup_window_general_ParamLimits

0x3679,	// (0x000146f3) popup_window_general

0x3692,	// (0x0001470c) power_save_pane

0xa9b5,	// (0x0001ba2f) control_pane_g1_ParamLimits

0xa9b5,	// (0x0001ba2f) control_pane_g1

0xf397,	// (0x00020411) control_pane_g2_ParamLimits

0xf397,	// (0x00020411) control_pane_g2

0x2f9e,	// (0x00014018) control_pane_g3_ParamLimits

0x2f9e,	// (0x00014018) control_pane_g3

0x0007,

0xf79b,	// (0x00020815) control_pane_g_ParamLimits

0xf79b,	// (0x00020815) control_pane_g

0xa9f4,	// (0x0001ba6e) control_pane_t1_ParamLimits

0xa9f4,	// (0x0001ba6e) control_pane_t1

0xaa52,	// (0x0001bacc) control_pane_t2_ParamLimits

0xaa52,	// (0x0001bacc) control_pane_t2

0x0002,

0xf7ac,	// (0x00020826) control_pane_t_ParamLimits

0xf7ac,	// (0x00020826) control_pane_t

0x2ebf,	// (0x00013f39) navi_navi_volume_pane_cp1

0x2ec8,	// (0x00013f42) status_small_icon_pane

0x2ed0,	// (0x00013f4a) status_small_pane_g1_ParamLimits

0x2ed0,	// (0x00013f4a) status_small_pane_g1

0x2f04,	// (0x00013f7e) status_small_pane_g2_ParamLimits

0x2f04,	// (0x00013f7e) status_small_pane_g2

0x2f10,	// (0x00013f8a) status_small_pane_g3_ParamLimits

0x2f10,	// (0x00013f8a) status_small_pane_g3

0x2f1c,	// (0x00013f96) status_small_pane_g4_ParamLimits

0x2f1c,	// (0x00013f96) status_small_pane_g4

0x2f28,	// (0x00013fa2) status_small_pane_g5_ParamLimits

0x2f28,	// (0x00013fa2) status_small_pane_g5

0x2f37,	// (0x00013fb1) status_small_pane_g6_ParamLimits

0x2f37,	// (0x00013fb1) status_small_pane_g6

0x0007,

0xf78a,	// (0x00020804) status_small_pane_g_ParamLimits

0xf78a,	// (0x00020804) status_small_pane_g

0x2f67,	// (0x00013fe1) status_small_pane_t1

0x2f8a,	// (0x00014004) status_small_wait_pane_ParamLimits

0x2f8a,	// (0x00014004) status_small_wait_pane

0xbc60,	// (0x0001ccda) aid_levels_signal_ParamLimits

0xbc60,	// (0x0001ccda) aid_levels_signal

0xbc78,	// (0x0001ccf2) signal_pane_g1_ParamLimits

0xbc78,	// (0x0001ccf2) signal_pane_g1

0xbc93,	// (0x0001cd0d) signal_pane_g2_ParamLimits

0xbc93,	// (0x0001cd0d) signal_pane_g2

0x0001,

0xf71f,	// (0x00020799) signal_pane_g_ParamLimits

0xf71f,	// (0x00020799) signal_pane_g

0x2718,	// (0x00013792) context_pane_g1

0xb15c,	// (0x0001c1d6) title_pane_g1

0xb191,	// (0x0001c20b) title_pane_t1

0x1011,	// (0x0001208b) title_pane_t2

0x1037,	// (0x000120b1) title_pane_t3

0x0002,

0xf573,	// (0x000205ed) title_pane_t

0xc9dd,	// (0x0001da57) aid_levels_battery_ParamLimits

0xc9dd,	// (0x0001da57) aid_levels_battery

0xc9f9,	// (0x0001da73) battery_pane_g1_ParamLimits

0xc9f9,	// (0x0001da73) battery_pane_g1

0xca16,	// (0x0001da90) battery_pane_g2_ParamLimits

0xca16,	// (0x0001da90) battery_pane_g2

0x0001,

0xf7be,	// (0x00020838) battery_pane_g_ParamLimits

0xf7be,	// (0x00020838) battery_pane_g

0xcc56,	// (0x0001dcd0) uni_indicator_pane_g1

0xcc6b,	// (0x0001dce5) uni_indicator_pane_g2

0xcc80,	// (0x0001dcfa) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x000209a2) uni_indicator_pane_g

0x2b3f,	// (0x00013bb9) navi_icon_pane_ParamLimits

0x2b3f,	// (0x00013bb9) navi_icon_pane

0x2a86,	// (0x00013b00) navi_midp_pane

0x2b5b,	// (0x00013bd5) navi_navi_pane

0x2b65,	// (0x00013bdf) navi_text_pane_ParamLimits

0x2b65,	// (0x00013bdf) navi_text_pane

0xea99,	// (0x0001fb13) status_small_wait_pane_g1

0x1495,	// (0x0001250f) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x0002099d) status_small_wait_pane_g

0xcbf5,	// (0x0001dc6f) navi_navi_icon_text_pane

0xcbfd,	// (0x0001dc77) navi_navi_pane_g1_ParamLimits

0xcbfd,	// (0x0001dc77) navi_navi_pane_g1

0xcc0f,	// (0x0001dc89) navi_navi_pane_g2_ParamLimits

0xcc0f,	// (0x0001dc89) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x0002096b) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x0002096b) navi_navi_pane_g

0x4b39,	// (0x00015bb3) navi_navi_tabs_pane

0xcc21,	// (0x0001dc9b) navi_navi_text_pane

0xcbf5,	// (0x0001dc6f) navi_navi_volume_pane

0xcbe3,	// (0x0001dc5d) navi_text_pane_t1

0xcbd7,	// (0x0001dc51) navi_icon_pane_g1

0x4a2a,	// (0x00015aa4) navi_navi_text_pane_t1

0xacb9,	// (0x0001bd33) navi_navi_volume_pane_g1

0xacc1,	// (0x0001bd3b) volume_small_pane

0xcb33,	// (0x0001dbad) navi_navi_icon_text_pane_g1

0xcb3b,	// (0x0001dbb5) navi_navi_icon_text_pane_t1

0x2b5b,	// (0x00013bd5) navi_tabs_2_long_pane

0x2b5b,	// (0x00013bd5) navi_tabs_2_pane

0x2b5b,	// (0x00013bd5) navi_tabs_3_long_pane

0x2b5b,	// (0x00013bd5) navi_tabs_3_pane

0x2b5b,	// (0x00013bd5) navi_tabs_4_pane

0xac99,	// (0x0001bd13) tabs_2_active_pane_ParamLimits

0xac99,	// (0x0001bd13) tabs_2_active_pane

0xaca9,	// (0x0001bd23) tabs_2_passive_pane_ParamLimits

0xaca9,	// (0x0001bd23) tabs_2_passive_pane

0xac67,	// (0x0001bce1) tabs_3_active_pane_ParamLimits

0xac67,	// (0x0001bce1) tabs_3_active_pane

0xac77,	// (0x0001bcf1) tabs_3_passive_pane_ParamLimits

0xac77,	// (0x0001bcf1) tabs_3_passive_pane

0xac88,	// (0x0001bd02) tabs_3_passive_pane_cp_ParamLimits

0xac88,	// (0x0001bd02) tabs_3_passive_pane_cp

0xac23,	// (0x0001bc9d) tabs_4_active_pane_ParamLimits

0xac23,	// (0x0001bc9d) tabs_4_active_pane

0xac34,	// (0x0001bcae) tabs_4_passive_pane_ParamLimits

0xac34,	// (0x0001bcae) tabs_4_passive_pane

0xac45,	// (0x0001bcbf) tabs_4_passive_pane_cp_ParamLimits

0xac45,	// (0x0001bcbf) tabs_4_passive_pane_cp

0xac56,	// (0x0001bcd0) tabs_4_passive_pane_cp2_ParamLimits

0xac56,	// (0x0001bcd0) tabs_4_passive_pane_cp2

0xabff,	// (0x0001bc79) tabs_2_long_active_pane_ParamLimits

0xabff,	// (0x0001bc79) tabs_2_long_active_pane

0xac11,	// (0x0001bc8b) tabs_2_long_passive_pane_ParamLimits

0xac11,	// (0x0001bc8b) tabs_2_long_passive_pane

0xabb4,	// (0x0001bc2e) tabs_3_long_active_pane_ParamLimits

0xabb4,	// (0x0001bc2e) tabs_3_long_active_pane

0xabcd,	// (0x0001bc47) tabs_3_long_passive_pane_ParamLimits

0xabcd,	// (0x0001bc47) tabs_3_long_passive_pane

0xabe6,	// (0x0001bc60) tabs_3_long_passive_pane_cp_ParamLimits

0xabe6,	// (0x0001bc60) tabs_3_long_passive_pane_cp

0xf510,	// (0x0002058a) volume_small_pane_g1

0xab63,	// (0x0001bbdd) volume_small_pane_g2

0xab6c,	// (0x0001bbe6) volume_small_pane_g3

0xab75,	// (0x0001bbef) volume_small_pane_g4

0xab7e,	// (0x0001bbf8) volume_small_pane_g5

0xab87,	// (0x0001bc01) volume_small_pane_g6

0xab90,	// (0x0001bc0a) volume_small_pane_g7

0xab99,	// (0x0001bc13) volume_small_pane_g8

0xaba2,	// (0x0001bc1c) volume_small_pane_g9

0xabab,	// (0x0001bc25) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x00020937) volume_small_pane_g

0x12df,	// (0x00012359) bg_active_tab_pane_cp2_ParamLimits

0x12df,	// (0x00012359) bg_active_tab_pane_cp2

0xb21d,	// (0x0001c297) tabs_3_active_pane_g1

0xb225,	// (0x0001c29f) tabs_3_active_pane_t1

0x12df,	// (0x00012359) bg_passive_tab_pane_cp2_ParamLimits

0x12df,	// (0x00012359) bg_passive_tab_pane_cp2

0xb21d,	// (0x0001c297) tabs_3_passive_pane_g1

0xb225,	// (0x0001c29f) tabs_3_passive_pane_t1

0x12df,	// (0x00012359) bg_active_tab_pane_cp3_ParamLimits

0x12df,	// (0x00012359) bg_active_tab_pane_cp3

0xb237,	// (0x0001c2b1) tabs_4_active_pane_g1

0xb23f,	// (0x0001c2b9) tabs_4_active_pane_t1

0x12df,	// (0x00012359) bg_passive_tab_pane_cp3_ParamLimits

0x12df,	// (0x00012359) bg_passive_tab_pane_cp3

0xb237,	// (0x0001c2b1) tabs_4_1_passive_pane_g1

0xb23f,	// (0x0001c2b9) tabs_4_1_passive_pane_t1

0x305f,	// (0x000140d9) list_highlight_pane_cp2

0xcd50,	// (0x0001ddca) list_set_pane_ParamLimits

0xcd50,	// (0x0001ddca) list_set_pane

0xce18,	// (0x0001de92) main_pane_set_t1_ParamLimits

0xce18,	// (0x0001de92) main_pane_set_t1

0xce38,	// (0x0001deb2) main_pane_set_t2_ParamLimits

0xce38,	// (0x0001deb2) main_pane_set_t2

0xce4c,	// (0x0001dec6) main_pane_set_t3_ParamLimits

0xce4c,	// (0x0001dec6) main_pane_set_t3

0xce60,	// (0x0001deda) main_pane_set_t4_ParamLimits

0xce60,	// (0x0001deda) main_pane_set_t4

0x0003,

0xf98d,	// (0x00020a07) main_pane_set_t_ParamLimits

0xf98d,	// (0x00020a07) main_pane_set_t

0xce74,	// (0x0001deee) setting_code_pane

0x51eb,	// (0x00016265) setting_slider_graphic_pane

0x51eb,	// (0x00016265) setting_slider_pane

0x51eb,	// (0x00016265) setting_text_pane

0x51eb,	// (0x00016265) setting_volume_pane

0xee80,	// (0x0001fefa) volume_set_pane

0x1049,	// (0x000120c3) bg_set_opt_pane_cp

0xee8a,	// (0x0001ff04) setting_slider_pane_t1

0xeea0,	// (0x0001ff1a) setting_slider_pane_t2

0xeeba,	// (0x0001ff34) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x000205f4) setting_slider_pane_t

0xeed2,	// (0x0001ff4c) slider_set_pane

0xec1c,	// (0x0001fc96) bg_set_opt_pane_cp2

0x108b,	// (0x00012105) setting_slider_graphic_pane_g1

0xeee8,	// (0x0001ff62) setting_slider_graphic_pane_t1

0xeef8,	// (0x0001ff72) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x000205fb) setting_slider_graphic_pane_t

0xef08,	// (0x0001ff82) slider_set_pane_cp

0xec1c,	// (0x0001fc96) input_focus_pane_cp1

0x5072,	// (0x000160ec) list_set_text_pane

0xea99,	// (0x0001fb13) setting_text_pane_g1

0xec1c,	// (0x0001fc96) input_focus_pane_cp2

0xea99,	// (0x0001fb13) setting_code_pane_g1

0x1094,	// (0x0001210e) setting_code_pane_t1

0x10a2,	// (0x0001211c) set_text_pane_t1_ParamLimits

0x10a2,	// (0x0001211c) set_text_pane_t1

0x1fc1,	// (0x0001303b) set_opt_bg_pane_g1

0x1fc9,	// (0x00013043) set_opt_bg_pane_g2

0x504a,	// (0x000160c4) set_opt_bg_pane_g3

0x1fd9,	// (0x00013053) set_opt_bg_pane_g4

0x1fe1,	// (0x0001305b) set_opt_bg_pane_g5

0x1fe9,	// (0x00013063) set_opt_bg_pane_g6

0x5054,	// (0x000160ce) set_opt_bg_pane_g7

0x505e,	// (0x000160d8) set_opt_bg_pane_g8

0x5068,	// (0x000160e2) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x000209f4) set_opt_bg_pane_g

0x503d,	// (0x000160b7) slider_set_pane_g1

0x012c,	// (0x000111a6) slider_set_pane_g2

0x0006,

0xf96b,	// (0x000209e5) slider_set_pane_g

0x00b4,	// (0x0001112e) volume_set_pane_g1

0x00be,	// (0x00011138) volume_set_pane_g2

0x00c8,	// (0x00011142) volume_set_pane_g3

0x00d2,	// (0x0001114c) volume_set_pane_g4

0x00dc,	// (0x00011156) volume_set_pane_g5

0x00e6,	// (0x00011160) volume_set_pane_g6

0x00f0,	// (0x0001116a) volume_set_pane_g7

0x00fa,	// (0x00011174) volume_set_pane_g8

0x0104,	// (0x0001117e) volume_set_pane_g9

0x010e,	// (0x00011188) volume_set_pane_g10

0x0009,

0xf943,	// (0x000209bd) volume_set_pane_g

0xb251,	// (0x0001c2cb) indicator_pane_ParamLimits

0xb251,	// (0x0001c2cb) indicator_pane

0xb27d,	// (0x0001c2f7) main_idle_pane_g2_ParamLimits

0xb27d,	// (0x0001c2f7) main_idle_pane_g2

0xb2b5,	// (0x0001c32f) main_pane_idle_g1_ParamLimits

0xb2b5,	// (0x0001c32f) main_pane_idle_g1

0x10fe,	// (0x00012178) popup_clock_digital_analogue_window_ParamLimits

0x10fe,	// (0x00012178) popup_clock_digital_analogue_window

0xb2e3,	// (0x0001c35d) soft_indicator_pane_ParamLimits

0xb2e3,	// (0x0001c35d) soft_indicator_pane

0xb2ff,	// (0x0001c379) wallpaper_pane_ParamLimits

0xb2ff,	// (0x0001c379) wallpaper_pane

0xea99,	// (0x0001fb13) wallpaper_pane_g1

0xb311,	// (0x0001c38b) indicator_pane_g1_ParamLimits

0xb311,	// (0x0001c38b) indicator_pane_g1

0x5510,	// (0x0001658a) navi_navi_icon_text_pane_srt_g1

0x1152,	// (0x000121cc) soft_indicator_pane_t1

0x116c,	// (0x000121e6) aid_ps_area_pane

0xb32a,	// (0x0001c3a4) aid_ps_clock_pane

0x118b,	// (0x00012205) aid_ps_indicator_pane

0x1197,	// (0x00012211) indicator_ps_pane_ParamLimits

0x1197,	// (0x00012211) indicator_ps_pane

0x11a6,	// (0x00012220) power_save_pane_g1_ParamLimits

0x11a6,	// (0x00012220) power_save_pane_g1

0x11b2,	// (0x0001222c) power_save_pane_g2_ParamLimits

0x11b2,	// (0x0001222c) power_save_pane_g2

0xeaa3,	// (0x0001fb1d) aid_navinavi_width_pane

0x116c,	// (0x000121e6) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00020600) power_save_pane_g_ParamLimits

0xf586,	// (0x00020600) power_save_pane_g

0x11c0,	// (0x0001223a) power_save_pane_t1_ParamLimits

0x11c0,	// (0x0001223a) power_save_pane_t1

0xb32a,	// (0x0001c3a4) aid_ps_clock_pane_ParamLimits

0x118b,	// (0x00012205) aid_ps_indicator_pane_ParamLimits

0x11d2,	// (0x0001224c) power_save_pane_t4_ParamLimits

0x11d2,	// (0x0001224c) power_save_pane_t4

0x0001,

0xf58b,	// (0x00020605) power_save_pane_t_ParamLimits

0xf58b,	// (0x00020605) power_save_pane_t

0x11fc,	// (0x00012276) power_save_t3_ParamLimits

0x11fc,	// (0x00012276) power_save_t3

0x11e7,	// (0x00012261) power_save_t2_ParamLimits

0x11e7,	// (0x00012261) power_save_t2

0x1211,	// (0x0001228b) indicator_ps_pane_g1

0xb338,	// (0x0001c3b2) ai_gene_pane_ParamLimits

0xb338,	// (0x0001c3b2) ai_gene_pane

0xb34f,	// (0x0001c3c9) ai_links_pane_ParamLimits

0xb34f,	// (0x0001c3c9) ai_links_pane

0xb367,	// (0x0001c3e1) indicator_pane_cp1_ParamLimits

0xb367,	// (0x0001c3e1) indicator_pane_cp1

0xb376,	// (0x0001c3f0) main_pane_idle_g1_cp_ParamLimits

0xb376,	// (0x0001c3f0) main_pane_idle_g1_cp

0x124a,	// (0x000122c4) popup_ai_links_title_window

0xb38e,	// (0x0001c408) soft_indicator_pane_cp1_ParamLimits

0xb38e,	// (0x0001c408) soft_indicator_pane_cp1

0x4de8,	// (0x00015e62) ai_links_pane_g1

0x4df1,	// (0x00015e6b) grid_ai_links_pane

0xcc4d,	// (0x0001dcc7) ai_gene_pane_1

0x4dd6,	// (0x00015e50) ai_gene_pane_2

0x4ddf,	// (0x00015e59) list_highlight_pane_cp4

0xcc29,	// (0x0001dca3) cell_ai_link_pane_ParamLimits

0xcc29,	// (0x0001dca3) cell_ai_link_pane

0x4da5,	// (0x00015e1f) cell_ai_link_pane_g1

0x1495,	// (0x0001250f) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x00020998) cell_ai_link_pane_g

0xec1c,	// (0x0001fc96) grid_highlight_cp2

0xec1c,	// (0x0001fc96) bg_popup_sub_pane_cp1

0x126d,	// (0x000122e7) popup_ai_links_title_window_t1

0x4cf1,	// (0x00015d6b) ai_gene_pane_1_g1_ParamLimits

0x4cf1,	// (0x00015d6b) ai_gene_pane_1_g1

0x4cfd,	// (0x00015d77) ai_gene_pane_1_g2_ParamLimits

0x4cfd,	// (0x00015d77) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x0002098e) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x0002098e) ai_gene_pane_1_g

0x4d0a,	// (0x00015d84) ai_gene_pane_1_t1_ParamLimits

0x4d0a,	// (0x00015d84) ai_gene_pane_1_t1

0x4d3e,	// (0x00015db8) grid_ai_soft_ind_pane

0x4cdc,	// (0x00015d56) ai_gene_pane_2_t1_ParamLimits

0x4cdc,	// (0x00015d56) ai_gene_pane_2_t1

0xb3a2,	// (0x0001c41c) main_pane_empty_t1_ParamLimits

0xb3a2,	// (0x0001c41c) main_pane_empty_t1

0xb3ba,	// (0x0001c434) main_pane_empty_t2_ParamLimits

0xb3ba,	// (0x0001c434) main_pane_empty_t2

0xb3cf,	// (0x0001c449) main_pane_empty_t3_ParamLimits

0xb3cf,	// (0x0001c449) main_pane_empty_t3

0xb3e1,	// (0x0001c45b) main_pane_empty_t4_ParamLimits

0xb3e1,	// (0x0001c45b) main_pane_empty_t4

0xb3f3,	// (0x0001c46d) main_pane_empty_t5_ParamLimits

0xb3f3,	// (0x0001c46d) main_pane_empty_t5

0x0004,

0xf590,	// (0x0002060a) main_pane_empty_t_ParamLimits

0xf590,	// (0x0002060a) main_pane_empty_t

0x209f,	// (0x00013119) bg_popup_window_pane_ParamLimits

0x209f,	// (0x00013119) bg_popup_window_pane

0x4a38,	// (0x00015ab2) find_popup_pane_cp2_ParamLimits

0x4a38,	// (0x00015ab2) find_popup_pane_cp2

0x4a44,	// (0x00015abe) heading_pane_ParamLimits

0x4a44,	// (0x00015abe) heading_pane

0xec1c,	// (0x0001fc96) bg_popup_sub_pane

0xcb58,	// (0x0001dbd2) bg_popup_window_pane_g1_ParamLimits

0xcb58,	// (0x0001dbd2) bg_popup_window_pane_g1

0xcb67,	// (0x0001dbe1) bg_popup_window_pane_g2_ParamLimits

0xcb67,	// (0x0001dbe1) bg_popup_window_pane_g2

0xcb73,	// (0x0001dbed) bg_popup_window_pane_g3_ParamLimits

0xcb73,	// (0x0001dbed) bg_popup_window_pane_g3

0xcb7f,	// (0x0001dbf9) bg_popup_window_pane_g4_ParamLimits

0xcb7f,	// (0x0001dbf9) bg_popup_window_pane_g4

0xcb8e,	// (0x0001dc08) bg_popup_window_pane_g5_ParamLimits

0xcb8e,	// (0x0001dc08) bg_popup_window_pane_g5

0xcb9e,	// (0x0001dc18) bg_popup_window_pane_g6_ParamLimits

0xcb9e,	// (0x0001dc18) bg_popup_window_pane_g6

0xcbaa,	// (0x0001dc24) bg_popup_window_pane_g7_ParamLimits

0xcbaa,	// (0x0001dc24) bg_popup_window_pane_g7

0xcbb9,	// (0x0001dc33) bg_popup_window_pane_g8_ParamLimits

0xcbb9,	// (0x0001dc33) bg_popup_window_pane_g8

0xcbc8,	// (0x0001dc42) bg_popup_window_pane_g9_ParamLimits

0xcbc8,	// (0x0001dc42) bg_popup_window_pane_g9

0x4a1e,	// (0x00015a98) bg_popup_window_pane_g10_ParamLimits

0x4a1e,	// (0x00015a98) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x00020956) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x00020956) bg_popup_window_pane_g

0x4947,	// (0x000159c1) bg_popup_heading_pane_ParamLimits

0x4947,	// (0x000159c1) bg_popup_heading_pane

0x01b4,	// (0x0001122e) tabs_4_passive_pane_cp_srt_ParamLimits

0x01b4,	// (0x0001122e) tabs_4_passive_pane_cp_srt

0x01c6,	// (0x00011240) tabs_4_passive_pane_srt_ParamLimits

0x495b,	// (0x000159d5) heading_pane_g2

0x01c6,	// (0x00011240) tabs_4_passive_pane_srt

0x3ced,	// (0x00014d67) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3ced,	// (0x00014d67) bg_passive_tab_pane_cp3_srt

0x4963,	// (0x000159dd) heading_pane_t1_ParamLimits

0x4963,	// (0x000159dd) heading_pane_t1

0x497a,	// (0x000159f4) heading_pane_t2_ParamLimits

0x497a,	// (0x000159f4) heading_pane_t2

0x0001,

0xf8d7,	// (0x00020951) heading_pane_t_ParamLimits

0xf8d7,	// (0x00020951) heading_pane_t

0x4472,	// (0x000154ec) bg_popup_heading_pane_g1

0x4521,	// (0x0001559b) bg_popup_heading_pane_g2

0x452b,	// (0x000155a5) bg_popup_heading_pane_g3

0x4535,	// (0x000155af) bg_popup_heading_pane_g4

0x453f,	// (0x000155b9) bg_popup_heading_pane_g5

0x4549,	// (0x000155c3) bg_popup_heading_pane_g6

0x4551,	// (0x000155cb) bg_popup_heading_pane_g7

0x4559,	// (0x000155d3) bg_popup_heading_pane_g8

0x4563,	// (0x000155dd) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x0002090d) bg_popup_heading_pane_g

0x3bd1,	// (0x00014c4b) bg_popup_sub_pane_g1

0x3be1,	// (0x00014c5b) bg_popup_sub_pane_g2

0x3bd9,	// (0x00014c53) bg_popup_sub_pane_g3

0x3bf1,	// (0x00014c6b) bg_popup_sub_pane_g4

0x3be9,	// (0x00014c63) bg_popup_sub_pane_g5

0x3bf9,	// (0x00014c73) bg_popup_sub_pane_g6

0x3c01,	// (0x00014c7b) bg_popup_sub_pane_g7

0x3c11,	// (0x00014c8b) bg_popup_sub_pane_g8

0x3c09,	// (0x00014c83) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x000208e7) bg_popup_sub_pane_g

0x12df,	// (0x00012359) bg_popup_window_pane_cp5_ParamLimits

0x12df,	// (0x00012359) bg_popup_window_pane_cp5

0x12fb,	// (0x00012375) popup_note_window_g1_ParamLimits

0x12fb,	// (0x00012375) popup_note_window_g1

0x1307,	// (0x00012381) popup_note_window_t1_ParamLimits

0x1307,	// (0x00012381) popup_note_window_t1

0x131d,	// (0x00012397) popup_note_window_t2_ParamLimits

0x131d,	// (0x00012397) popup_note_window_t2

0x1333,	// (0x000123ad) popup_note_window_t3_ParamLimits

0x1333,	// (0x000123ad) popup_note_window_t3

0x1349,	// (0x000123c3) popup_note_window_t4_ParamLimits

0x1349,	// (0x000123c3) popup_note_window_t4

0x1371,	// (0x000123eb) popup_note_window_t5_ParamLimits

0x1371,	// (0x000123eb) popup_note_window_t5

0x0004,

0xf59b,	// (0x00020615) popup_note_window_t_ParamLimits

0xf59b,	// (0x00020615) popup_note_window_t

0x1395,	// (0x0001240f) bg_popup_window_pane_cp6_ParamLimits

0x1395,	// (0x0001240f) bg_popup_window_pane_cp6

0x43ee,	// (0x00015468) popup_note_image_window_g1_ParamLimits

0x43ee,	// (0x00015468) popup_note_image_window_g1

0x43fa,	// (0x00015474) popup_note_image_window_g2_ParamLimits

0x43fa,	// (0x00015474) popup_note_image_window_g2

0x0001,

0xf861,	// (0x000208db) popup_note_image_window_g_ParamLimits

0xf861,	// (0x000208db) popup_note_image_window_g

0x4413,	// (0x0001548d) popup_note_image_window_t1_ParamLimits

0x4413,	// (0x0001548d) popup_note_image_window_t1

0x442c,	// (0x000154a6) popup_note_image_window_t2_ParamLimits

0x442c,	// (0x000154a6) popup_note_image_window_t2

0x4445,	// (0x000154bf) popup_note_image_window_t3_ParamLimits

0x4445,	// (0x000154bf) popup_note_image_window_t3

0x0002,

0xf866,	// (0x000208e0) popup_note_image_window_t_ParamLimits

0xf866,	// (0x000208e0) popup_note_image_window_t

0x42ae,	// (0x00015328) bg_popup_window_pane_cp7_ParamLimits

0x42ae,	// (0x00015328) bg_popup_window_pane_cp7

0x42de,	// (0x00015358) popup_note_wait_window_g1_ParamLimits

0x42de,	// (0x00015358) popup_note_wait_window_g1

0x42ea,	// (0x00015364) popup_note_wait_window_g2_ParamLimits

0x42ea,	// (0x00015364) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x000208c9) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x000208c9) popup_note_wait_window_g

0x4302,	// (0x0001537c) popup_note_wait_window_t1_ParamLimits

0x4302,	// (0x0001537c) popup_note_wait_window_t1

0x4329,	// (0x000153a3) popup_note_wait_window_t2_ParamLimits

0x4329,	// (0x000153a3) popup_note_wait_window_t2

0x4347,	// (0x000153c1) popup_note_wait_window_t3_ParamLimits

0x4347,	// (0x000153c1) popup_note_wait_window_t3

0x435a,	// (0x000153d4) popup_note_wait_window_t4_ParamLimits

0x435a,	// (0x000153d4) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x000208d0) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x000208d0) popup_note_wait_window_t

0x437f,	// (0x000153f9) wait_bar_pane_ParamLimits

0x437f,	// (0x000153f9) wait_bar_pane

0xec1c,	// (0x0001fc96) wait_anim_pane

0xec1c,	// (0x0001fc96) wait_border_pane

0xea99,	// (0x0001fb13) wait_anim_pane_g1

0xea99,	// (0x0001fb13) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x00020794) wait_anim_pane_g

0x4252,	// (0x000152cc) wait_border_pane_g1

0x425d,	// (0x000152d7) wait_border_pane_g2

0x4266,	// (0x000152e0) wait_border_pane_g3

0x0002,

0xf848,	// (0x000208c2) wait_border_pane_g

0x40bc,	// (0x00015136) bg_popup_window_pane_cp16_ParamLimits

0x40bc,	// (0x00015136) bg_popup_window_pane_cp16

0x41bc,	// (0x00015236) indicator_popup_pane_cp4_ParamLimits

0x41bc,	// (0x00015236) indicator_popup_pane_cp4

0x41d0,	// (0x0001524a) popup_query_data_window_t1_ParamLimits

0x41d0,	// (0x0001524a) popup_query_data_window_t1

0x41e2,	// (0x0001525c) popup_query_data_window_t2_ParamLimits

0x41e2,	// (0x0001525c) popup_query_data_window_t2

0x41fb,	// (0x00015275) popup_query_data_window_t3_ParamLimits

0x41fb,	// (0x00015275) popup_query_data_window_t3

0x0002,

0xf841,	// (0x000208bb) popup_query_data_window_t_ParamLimits

0xf841,	// (0x000208bb) popup_query_data_window_t

0x4215,	// (0x0001528f) query_popup_data_pane_ParamLimits

0x4215,	// (0x0001528f) query_popup_data_pane

0x4229,	// (0x000152a3) query_popup_data_pane_cp1_ParamLimits

0x4229,	// (0x000152a3) query_popup_data_pane_cp1

0x40bc,	// (0x00015136) bg_popup_window_pane_cp10_ParamLimits

0x40bc,	// (0x00015136) bg_popup_window_pane_cp10

0x40ee,	// (0x00015168) indicator_popup_pane_ParamLimits

0x40ee,	// (0x00015168) indicator_popup_pane

0x4110,	// (0x0001518a) popup_query_code_window_t1_ParamLimits

0x4110,	// (0x0001518a) popup_query_code_window_t1

0x412a,	// (0x000151a4) popup_query_code_window_t2_ParamLimits

0x412a,	// (0x000151a4) popup_query_code_window_t2

0x4173,	// (0x000151ed) popup_query_code_window_t3_ParamLimits

0x4173,	// (0x000151ed) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x000208b4) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x000208b4) popup_query_code_window_t

0x41a2,	// (0x0001521c) query_popup_pane_ParamLimits

0x41a2,	// (0x0001521c) query_popup_pane

0x1395,	// (0x0001240f) bg_popup_window_pane_cp15_ParamLimits

0x1395,	// (0x0001240f) bg_popup_window_pane_cp15

0x13b5,	// (0x0001242f) indicator_popup_pane_cp1_ParamLimits

0x13b5,	// (0x0001242f) indicator_popup_pane_cp1

0x13c8,	// (0x00012442) indicator_popup_pane_cp2_ParamLimits

0x13c8,	// (0x00012442) indicator_popup_pane_cp2

0x13e3,	// (0x0001245d) popup_query_data_code_window_g1_ParamLimits

0x13e3,	// (0x0001245d) popup_query_data_code_window_g1

0x13f6,	// (0x00012470) popup_query_data_code_window_t1_ParamLimits

0x13f6,	// (0x00012470) popup_query_data_code_window_t1

0x1408,	// (0x00012482) popup_query_data_code_window_t2_ParamLimits

0x1408,	// (0x00012482) popup_query_data_code_window_t2

0x141a,	// (0x00012494) popup_query_data_code_window_t3_ParamLimits

0x141a,	// (0x00012494) popup_query_data_code_window_t3

0x1430,	// (0x000124aa) popup_query_data_code_window_t4_ParamLimits

0x1430,	// (0x000124aa) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00020620) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00020620) popup_query_data_code_window_t

0xf47b,	// (0x000204f5) list_single_midp_graphic_pane_g3

0x144a,	// (0x000124c4) query_popup_data_pane_cp2_ParamLimits

0x145d,	// (0x000124d7) query_popup_pane_cp2_ParamLimits

0x145d,	// (0x000124d7) query_popup_pane_cp2

0xec1c,	// (0x0001fc96) bg_popup_window_pane_cp11

0x40b4,	// (0x0001512e) heading_pane_cp5

0x154d,	// (0x000125c7) listscroll_popup_info_pane

0xec1c,	// (0x0001fc96) input_focus_pane_cp3

0x1478,	// (0x000124f2) query_popup_pane_t1

0x1486,	// (0x00012500) list_popup_info_pane_ParamLimits

0x1486,	// (0x00012500) list_popup_info_pane

0x1495,	// (0x0001250f) listscroll_popup_info_pane_g1

0x149d,	// (0x00012517) scroll_pane_cp7

0x14a7,	// (0x00012521) popup_info_list_pane_t1_ParamLimits

0x14a7,	// (0x00012521) popup_info_list_pane_t1

0x14c1,	// (0x0001253b) popup_info_list_pane_t2_ParamLimits

0x14c1,	// (0x0001253b) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00020629) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00020629) popup_info_list_pane_t

0xec1c,	// (0x0001fc96) bg_popup_window_pane_cp12

0x552a,	// (0x000165a4) find_popup_pane

0x1049,	// (0x000120c3) bg_popup_window_pane_cp3

0x14db,	// (0x00012555) heading_pane_cp3

0x14e7,	// (0x00012561) listscroll_popup_graphic_pane

0xec1c,	// (0x0001fc96) bg_popup_window_pane_cp4

0xb455,	// (0x0001c4cf) heading_pane_cp4

0x154d,	// (0x000125c7) listscroll_popup_colour_pane

0xb45f,	// (0x0001c4d9) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb45f,	// (0x0001c4d9) cell_large_graphic_colour_none_popup_pane

0xb473,	// (0x0001c4ed) grid_large_graphic_colour_popup_pane_ParamLimits

0xb473,	// (0x0001c4ed) grid_large_graphic_colour_popup_pane

0xb49f,	// (0x0001c519) listscroll_popup_colour_pane_g1_ParamLimits

0xb49f,	// (0x0001c519) listscroll_popup_colour_pane_g1

0xb4b6,	// (0x0001c530) listscroll_popup_colour_pane_g2_ParamLimits

0xb4b6,	// (0x0001c530) listscroll_popup_colour_pane_g2

0xb4cd,	// (0x0001c547) listscroll_popup_colour_pane_g3_ParamLimits

0xb4cd,	// (0x0001c547) listscroll_popup_colour_pane_g3

0xb4dd,	// (0x0001c557) listscroll_popup_colour_pane_g4_ParamLimits

0xb4dd,	// (0x0001c557) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0002062e) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0002062e) listscroll_popup_colour_pane_g

0x15e7,	// (0x00012661) scroll_pane_cp6_ParamLimits

0x15e7,	// (0x00012661) scroll_pane_cp6

0xb4f1,	// (0x0001c56b) cell_large_graphic_colour_popup_pane_ParamLimits

0xb4f1,	// (0x0001c56b) cell_large_graphic_colour_popup_pane

0x161e,	// (0x00012698) cell_large_graphic_colour_none_popup_pane_t1

0xec1c,	// (0x0001fc96) grid_highlight_pane_cp5

0x162d,	// (0x000126a7) cell_large_graphic_colour_popup_pane_g1

0x1635,	// (0x000126af) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00020637) cell_large_graphic_colour_popup_pane_g

0x163d,	// (0x000126b7) cell_large_graphic_colour_popup_pane_g2_copy1

0x1646,	// (0x000126c0) grid_highlight_pane_cp4

0x164e,	// (0x000126c8) bg_popup_window_pane_cp8_ParamLimits

0x164e,	// (0x000126c8) bg_popup_window_pane_cp8

0x1669,	// (0x000126e3) popup_snote_single_text_window_g1_ParamLimits

0x1669,	// (0x000126e3) popup_snote_single_text_window_g1

0x167b,	// (0x000126f5) popup_snote_single_text_window_t1_ParamLimits

0x167b,	// (0x000126f5) popup_snote_single_text_window_t1

0x168e,	// (0x00012708) popup_snote_single_text_window_t2_ParamLimits

0x168e,	// (0x00012708) popup_snote_single_text_window_t2

0x16a1,	// (0x0001271b) popup_snote_single_text_window_t3_ParamLimits

0x16a1,	// (0x0001271b) popup_snote_single_text_window_t3

0x16da,	// (0x00012754) popup_snote_single_text_window_t4_ParamLimits

0x16da,	// (0x00012754) popup_snote_single_text_window_t4

0x170e,	// (0x00012788) popup_snote_single_text_window_t5_ParamLimits

0x170e,	// (0x00012788) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0002063c) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0002063c) popup_snote_single_text_window_t

0x173d,	// (0x000127b7) bg_popup_window_pane_cp9_ParamLimits

0x173d,	// (0x000127b7) bg_popup_window_pane_cp9

0x1669,	// (0x000126e3) popup_snote_single_graphic_window_g1_ParamLimits

0x1669,	// (0x000126e3) popup_snote_single_graphic_window_g1

0x174b,	// (0x000127c5) popup_snote_single_graphic_window_g2_ParamLimits

0x174b,	// (0x000127c5) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00020647) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00020647) popup_snote_single_graphic_window_g

0x1757,	// (0x000127d1) popup_snote_single_graphic_window_t1_ParamLimits

0x1757,	// (0x000127d1) popup_snote_single_graphic_window_t1

0x176a,	// (0x000127e4) popup_snote_single_graphic_window_t2_ParamLimits

0x176a,	// (0x000127e4) popup_snote_single_graphic_window_t2

0x177d,	// (0x000127f7) popup_snote_single_graphic_window_t3_ParamLimits

0x177d,	// (0x000127f7) popup_snote_single_graphic_window_t3

0x17b6,	// (0x00012830) popup_snote_single_graphic_window_t4_ParamLimits

0x17b6,	// (0x00012830) popup_snote_single_graphic_window_t4

0x17ea,	// (0x00012864) popup_snote_single_graphic_window_t5_ParamLimits

0x17ea,	// (0x00012864) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0002064c) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0002064c) popup_snote_single_graphic_window_t

0x5468,	// (0x000164e2) grid_graphic_popup_pane_ParamLimits

0x5468,	// (0x000164e2) grid_graphic_popup_pane

0x5496,	// (0x00016510) listscroll_popup_graphic_pane_g1_ParamLimits

0x5496,	// (0x00016510) listscroll_popup_graphic_pane_g1

0xcfb6,	// (0x0001e030) listscroll_popup_graphic_pane_g2_ParamLimits

0xcfb6,	// (0x0001e030) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x00020a31) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x00020a31) listscroll_popup_graphic_pane_g

0x54be,	// (0x00016538) scroll_pane_cp5

0xcf76,	// (0x0001dff0) cell_graphic_popup_pane_ParamLimits

0xcf76,	// (0x0001dff0) cell_graphic_popup_pane

0x53f1,	// (0x0001646b) cell_graphic_popup_pane_g1

0x53f9,	// (0x00016473) cell_graphic_popup_pane_g2

0x163d,	// (0x000126b7) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x00020a2a) cell_graphic_popup_pane_g

0x5402,	// (0x0001647c) cell_graphic_popup_pane_t2

0x1646,	// (0x000126c0) grid_highlight_pane_cp3

0x182b,	// (0x000128a5) list_gen_pane_ParamLimits

0x182b,	// (0x000128a5) list_gen_pane

0x185d,	// (0x000128d7) scroll_pane

0xcf31,	// (0x0001dfab) bg_list_pane_g1_ParamLimits

0xcf31,	// (0x0001dfab) bg_list_pane_g1

0x536e,	// (0x000163e8) bg_list_pane_g2_ParamLimits

0x536e,	// (0x000163e8) bg_list_pane_g2

0x5381,	// (0x000163fb) bg_list_pane_g3_ParamLimits

0x5381,	// (0x000163fb) bg_list_pane_g3

0x5393,	// (0x0001640d) bg_list_pane_g4_ParamLimits

0x5393,	// (0x0001640d) bg_list_pane_g4

0xcf4c,	// (0x0001dfc6) bg_list_pane_g5_ParamLimits

0xcf4c,	// (0x0001dfc6) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x00020a1f) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x00020a1f) bg_list_pane_g

0xcece,	// (0x0001df48) list_double2_graphic_large_graphic_pane_ParamLimits

0xcece,	// (0x0001df48) list_double2_graphic_large_graphic_pane

0xcece,	// (0x0001df48) list_double2_graphic_pane_ParamLimits

0xcece,	// (0x0001df48) list_double2_graphic_pane

0xcece,	// (0x0001df48) list_double2_large_graphic_pane_ParamLimits

0xcece,	// (0x0001df48) list_double2_large_graphic_pane

0xcece,	// (0x0001df48) list_double2_pane_ParamLimits

0xcece,	// (0x0001df48) list_double2_pane

0xcece,	// (0x0001df48) list_double_graphic_heading_pane_ParamLimits

0xcece,	// (0x0001df48) list_double_graphic_heading_pane

0xcece,	// (0x0001df48) list_double_graphic_pane_ParamLimits

0xcece,	// (0x0001df48) list_double_graphic_pane

0xcece,	// (0x0001df48) list_double_heading_pane_ParamLimits

0xcece,	// (0x0001df48) list_double_heading_pane

0xcece,	// (0x0001df48) list_double_large_graphic_pane_ParamLimits

0xcece,	// (0x0001df48) list_double_large_graphic_pane

0xcece,	// (0x0001df48) list_double_number_pane_ParamLimits

0xcece,	// (0x0001df48) list_double_number_pane

0xcece,	// (0x0001df48) list_double_pane_ParamLimits

0xcece,	// (0x0001df48) list_double_pane

0xcece,	// (0x0001df48) list_double_time_pane_ParamLimits

0xcece,	// (0x0001df48) list_double_time_pane

0xcece,	// (0x0001df48) list_setting_number_pane_ParamLimits

0xcece,	// (0x0001df48) list_setting_number_pane

0xcece,	// (0x0001df48) list_setting_pane_ParamLimits

0xcece,	// (0x0001df48) list_setting_pane

0xcee2,	// (0x0001df5c) list_single_2graphic_pane_ParamLimits

0xcee2,	// (0x0001df5c) list_single_2graphic_pane

0xcee2,	// (0x0001df5c) list_single_graphic_heading_pane_ParamLimits

0xcee2,	// (0x0001df5c) list_single_graphic_heading_pane

0xcee2,	// (0x0001df5c) list_single_graphic_pane_ParamLimits

0xcee2,	// (0x0001df5c) list_single_graphic_pane

0xcee2,	// (0x0001df5c) list_single_heading_pane_ParamLimits

0xcee2,	// (0x0001df5c) list_single_heading_pane

0xcee2,	// (0x0001df5c) list_single_large_graphic_pane_ParamLimits

0xcee2,	// (0x0001df5c) list_single_large_graphic_pane

0xcee2,	// (0x0001df5c) list_single_number_heading_pane_ParamLimits

0xcee2,	// (0x0001df5c) list_single_number_heading_pane

0xcee2,	// (0x0001df5c) list_single_number_pane_ParamLimits

0xcee2,	// (0x0001df5c) list_single_number_pane

0xcee2,	// (0x0001df5c) list_single_pane_ParamLimits

0xcee2,	// (0x0001df5c) list_single_pane

0xec1c,	// (0x0001fc96) list_highlight_pane_cp1

0x2c42,	// (0x00013cbc) list_single_pane_g1_ParamLimits

0x2c42,	// (0x00013cbc) list_single_pane_g1

0x3b53,	// (0x00014bcd) list_single_pane_g2_ParamLimits

0x3b53,	// (0x00014bcd) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0002065e) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0002065e) list_single_pane_g

0x5b01,	// (0x00016b7b) list_single_pane_t1_ParamLimits

0x5b01,	// (0x00016b7b) list_single_pane_t1

0x2c42,	// (0x00013cbc) list_single_number_pane_g1_ParamLimits

0x2c42,	// (0x00013cbc) list_single_number_pane_g1

0x3b53,	// (0x00014bcd) list_single_number_pane_g2_ParamLimits

0x3b53,	// (0x00014bcd) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0002065e) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0002065e) list_single_number_pane_g

0x3b5f,	// (0x00014bd9) list_single_number_pane_t1_ParamLimits

0x3b5f,	// (0x00014bd9) list_single_number_pane_t1

0xccec,	// (0x0001dd66) list_single_number_pane_t2_ParamLimits

0xccec,	// (0x0001dd66) list_single_number_pane_t2

0x0001,

0xf966,	// (0x000209e0) list_single_number_pane_t_ParamLimits

0xf966,	// (0x000209e0) list_single_number_pane_t

0x6fa8,	// (0x00018022) list_single_graphic_pane_g1_ParamLimits

0x6fa8,	// (0x00018022) list_single_graphic_pane_g1

0x2c42,	// (0x00013cbc) list_single_graphic_pane_g2_ParamLimits

0x2c42,	// (0x00013cbc) list_single_graphic_pane_g2

0x3b53,	// (0x00014bcd) list_single_graphic_pane_g3_ParamLimits

0x3b53,	// (0x00014bcd) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00020657) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00020657) list_single_graphic_pane_g

0xb51c,	// (0x0001c596) list_single_graphic_pane_t1_ParamLimits

0xb51c,	// (0x0001c596) list_single_graphic_pane_t1

0x2c42,	// (0x00013cbc) list_single_heading_pane_g1_ParamLimits

0x2c42,	// (0x00013cbc) list_single_heading_pane_g1

0x3b53,	// (0x00014bcd) list_single_heading_pane_g2_ParamLimits

0x3b53,	// (0x00014bcd) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002065e) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002065e) list_single_heading_pane_g

0x5b23,	// (0x00016b9d) list_single_heading_pane_t1_ParamLimits

0x5b23,	// (0x00016b9d) list_single_heading_pane_t1

0xb532,	// (0x0001c5ac) list_single_heading_pane_t2_ParamLimits

0xb532,	// (0x0001c5ac) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00020663) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00020663) list_single_heading_pane_t

0x2c42,	// (0x00013cbc) list_single_number_heading_pane_g1_ParamLimits

0x2c42,	// (0x00013cbc) list_single_number_heading_pane_g1

0x3b53,	// (0x00014bcd) list_single_number_heading_pane_g2_ParamLimits

0x3b53,	// (0x00014bcd) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0002065e) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0002065e) list_single_number_heading_pane_g

0x5b23,	// (0x00016b9d) list_single_number_heading_pane_t1_ParamLimits

0x5b23,	// (0x00016b9d) list_single_number_heading_pane_t1

0xb544,	// (0x0001c5be) list_single_number_heading_pane_t2_ParamLimits

0xb544,	// (0x0001c5be) list_single_number_heading_pane_t2

0x5adb,	// (0x00016b55) list_single_number_heading_pane_t3_ParamLimits

0x5adb,	// (0x00016b55) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00020668) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00020668) list_single_number_heading_pane_t

0x3b47,	// (0x00014bc1) list_single_graphic_heading_pane_g1_ParamLimits

0x3b47,	// (0x00014bc1) list_single_graphic_heading_pane_g1

0xb556,	// (0x0001c5d0) list_single_graphic_heading_pane_g4_ParamLimits

0xb556,	// (0x0001c5d0) list_single_graphic_heading_pane_g4

0x3b53,	// (0x00014bcd) list_single_graphic_heading_pane_g5_ParamLimits

0x3b53,	// (0x00014bcd) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0002066f) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0002066f) list_single_graphic_heading_pane_g

0x5b23,	// (0x00016b9d) list_single_graphic_heading_pane_t1_ParamLimits

0x5b23,	// (0x00016b9d) list_single_graphic_heading_pane_t1

0xb567,	// (0x0001c5e1) list_single_graphic_heading_pane_t2_ParamLimits

0xb567,	// (0x0001c5e1) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00020676) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00020676) list_single_graphic_heading_pane_t

0x5b17,	// (0x00016b91) list_single_large_graphic_pane_g1_ParamLimits

0x5b17,	// (0x00016b91) list_single_large_graphic_pane_g1

0x2c42,	// (0x00013cbc) list_single_large_graphic_pane_g2_ParamLimits

0x2c42,	// (0x00013cbc) list_single_large_graphic_pane_g2

0x3b53,	// (0x00014bcd) list_single_large_graphic_pane_g3_ParamLimits

0x3b53,	// (0x00014bcd) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0002067b) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0002067b) list_single_large_graphic_pane_g

0x425d,	// (0x000152d7) wait_border_pane_g2_copy1

0xb579,	// (0x0001c5f3) list_single_large_graphic_pane_g4_cp2

0x5b23,	// (0x00016b9d) list_single_large_graphic_pane_t1_ParamLimits

0x5b23,	// (0x00016b9d) list_single_large_graphic_pane_t1

0xb581,	// (0x0001c5fb) list_double_pane_g1_ParamLimits

0xb581,	// (0x0001c5fb) list_double_pane_g1

0xb58d,	// (0x0001c607) list_double_pane_g2_ParamLimits

0xb58d,	// (0x0001c607) list_double_pane_g2

0x0001,

0xf608,	// (0x00020682) list_double_pane_g_ParamLimits

0xf608,	// (0x00020682) list_double_pane_g

0xb599,	// (0x0001c613) list_double_pane_t1_ParamLimits

0xb599,	// (0x0001c613) list_double_pane_t1

0xb5af,	// (0x0001c629) list_double_pane_t2_ParamLimits

0xb5af,	// (0x0001c629) list_double_pane_t2

0x0001,

0xf60d,	// (0x00020687) list_double_pane_t_ParamLimits

0xf60d,	// (0x00020687) list_double_pane_t

0xb5c1,	// (0x0001c63b) list_double2_pane_g1_ParamLimits

0xb5c1,	// (0x0001c63b) list_double2_pane_g1

0xb5d2,	// (0x0001c64c) list_double2_pane_g2_ParamLimits

0xb5d2,	// (0x0001c64c) list_double2_pane_g2

0x0001,

0xf612,	// (0x0002068c) list_double2_pane_g_ParamLimits

0xf612,	// (0x0002068c) list_double2_pane_g

0xb5de,	// (0x0001c658) list_double2_pane_t1_ParamLimits

0xb5de,	// (0x0001c658) list_double2_pane_t1

0xb5f4,	// (0x0001c66e) list_double2_pane_t2_ParamLimits

0xb5f4,	// (0x0001c66e) list_double2_pane_t2

0x0001,

0xf617,	// (0x00020691) list_double2_pane_t_ParamLimits

0xf617,	// (0x00020691) list_double2_pane_t

0xb581,	// (0x0001c5fb) list_double_number_pane_g1_ParamLimits

0xb581,	// (0x0001c5fb) list_double_number_pane_g1

0xb58d,	// (0x0001c607) list_double_number_pane_g2_ParamLimits

0xb58d,	// (0x0001c607) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00020682) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00020682) list_double_number_pane_g

0xb606,	// (0x0001c680) list_double_number_pane_t1_ParamLimits

0xb606,	// (0x0001c680) list_double_number_pane_t1

0xb618,	// (0x0001c692) list_double_number_pane_t2_ParamLimits

0xb618,	// (0x0001c692) list_double_number_pane_t2

0xb62e,	// (0x0001c6a8) list_double_number_pane_t3_ParamLimits

0xb62e,	// (0x0001c6a8) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00020696) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00020696) list_double_number_pane_t

0xb640,	// (0x0001c6ba) list_double_graphic_pane_g1_ParamLimits

0xb640,	// (0x0001c6ba) list_double_graphic_pane_g1

0xb64c,	// (0x0001c6c6) list_double_graphic_pane_g2_ParamLimits

0xb64c,	// (0x0001c6c6) list_double_graphic_pane_g2

0xb65b,	// (0x0001c6d5) list_double_graphic_pane_g3_ParamLimits

0xb65b,	// (0x0001c6d5) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0002069d) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0002069d) list_double_graphic_pane_g

0xb673,	// (0x0001c6ed) list_double_graphic_pane_t1_ParamLimits

0xb673,	// (0x0001c6ed) list_double_graphic_pane_t1

0xb689,	// (0x0001c703) list_double_graphic_pane_t2_ParamLimits

0xb689,	// (0x0001c703) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x000206a6) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x000206a6) list_double_graphic_pane_t

0x48d9,	// (0x00015953) list_double2_graphic_pane_g1_ParamLimits

0x48d9,	// (0x00015953) list_double2_graphic_pane_g1

0x2aef,	// (0x00013b69) list_double2_graphic_pane_g2_ParamLimits

0x2aef,	// (0x00013b69) list_double2_graphic_pane_g2

0xb5d2,	// (0x0001c64c) list_double2_graphic_pane_g3_ParamLimits

0xb5d2,	// (0x0001c64c) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x000206ab) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x000206ab) list_double2_graphic_pane_g

0xb69b,	// (0x0001c715) list_double2_graphic_pane_t1_ParamLimits

0xb69b,	// (0x0001c715) list_double2_graphic_pane_t1

0xb6b1,	// (0x0001c72b) list_double2_graphic_pane_t2_ParamLimits

0xb6b1,	// (0x0001c72b) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x000206b2) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x000206b2) list_double2_graphic_pane_t

0xb6c3,	// (0x0001c73d) list_double_large_graphic_pane_g1_ParamLimits

0xb6c3,	// (0x0001c73d) list_double_large_graphic_pane_g1

0xb6ee,	// (0x0001c768) list_double_large_graphic_pane_g2_ParamLimits

0xb6ee,	// (0x0001c768) list_double_large_graphic_pane_g2

0xb58d,	// (0x0001c607) list_double_large_graphic_pane_g3_ParamLimits

0xb58d,	// (0x0001c607) list_double_large_graphic_pane_g3

0xb6ff,	// (0x0001c779) list_double_large_graphic_pane_g4_ParamLimits

0xb6ff,	// (0x0001c779) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x000206b7) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x000206b7) list_double_large_graphic_pane_g

0xb712,	// (0x0001c78c) list_double_large_graphic_pane_t1_ParamLimits

0xb712,	// (0x0001c78c) list_double_large_graphic_pane_t1

0xb72b,	// (0x0001c7a5) list_double_large_graphic_pane_t2_ParamLimits

0xb72b,	// (0x0001c7a5) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x000206c2) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x000206c2) list_double_large_graphic_pane_t

0xb73d,	// (0x0001c7b7) list_double2_large_graphic_pane_g1_ParamLimits

0xb73d,	// (0x0001c7b7) list_double2_large_graphic_pane_g1

0xb5c1,	// (0x0001c63b) list_double2_large_graphic_pane_g2_ParamLimits

0xb5c1,	// (0x0001c63b) list_double2_large_graphic_pane_g2

0xb5d2,	// (0x0001c64c) list_double2_large_graphic_pane_g3_ParamLimits

0xb5d2,	// (0x0001c64c) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x000206c7) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x000206c7) list_double2_large_graphic_pane_g

0xb749,	// (0x0001c7c3) list_double2_large_graphic_pane_t1_ParamLimits

0xb749,	// (0x0001c7c3) list_double2_large_graphic_pane_t1

0xb75f,	// (0x0001c7d9) list_double2_large_graphic_pane_t2_ParamLimits

0xb75f,	// (0x0001c7d9) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x000206ce) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x000206ce) list_double2_large_graphic_pane_t

0xb771,	// (0x0001c7eb) list_double_heading_pane_g1_ParamLimits

0xb771,	// (0x0001c7eb) list_double_heading_pane_g1

0xb782,	// (0x0001c7fc) list_double_heading_pane_g2_ParamLimits

0xb782,	// (0x0001c7fc) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x000206d3) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x000206d3) list_double_heading_pane_g

0xb78e,	// (0x0001c808) list_double_heading_pane_t1_ParamLimits

0xb78e,	// (0x0001c808) list_double_heading_pane_t1

0xb7a4,	// (0x0001c81e) list_double_heading_pane_t2_ParamLimits

0xb7a4,	// (0x0001c81e) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x000206d8) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x000206d8) list_double_heading_pane_t

0x1aa2,	// (0x00012b1c) list_double_graphic_heading_pane_g1_ParamLimits

0x1aa2,	// (0x00012b1c) list_double_graphic_heading_pane_g1

0xb771,	// (0x0001c7eb) list_double_graphic_heading_pane_g2_ParamLimits

0xb771,	// (0x0001c7eb) list_double_graphic_heading_pane_g2

0xb782,	// (0x0001c7fc) list_double_graphic_heading_pane_g3_ParamLimits

0xb782,	// (0x0001c7fc) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x000206dd) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x000206dd) list_double_graphic_heading_pane_g

0xb7b6,	// (0x0001c830) list_double_graphic_heading_pane_t1_ParamLimits

0xb7b6,	// (0x0001c830) list_double_graphic_heading_pane_t1

0xb7cc,	// (0x0001c846) list_double_graphic_heading_pane_t2_ParamLimits

0xb7cc,	// (0x0001c846) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x000206e4) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x000206e4) list_double_graphic_heading_pane_t

0xb6ee,	// (0x0001c768) list_double_time_pane_g1_ParamLimits

0xb6ee,	// (0x0001c768) list_double_time_pane_g1

0xb58d,	// (0x0001c607) list_double_time_pane_g2_ParamLimits

0xb58d,	// (0x0001c607) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x000206e9) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x000206e9) list_double_time_pane_g

0xb7de,	// (0x0001c858) list_double_time_pane_t1_ParamLimits

0xb7de,	// (0x0001c858) list_double_time_pane_t1

0xb7f4,	// (0x0001c86e) list_double_time_pane_t2_ParamLimits

0xb7f4,	// (0x0001c86e) list_double_time_pane_t2

0xb806,	// (0x0001c880) list_double_time_pane_t3_ParamLimits

0xb806,	// (0x0001c880) list_double_time_pane_t3

0xb818,	// (0x0001c892) list_double_time_pane_t4_ParamLimits

0xb818,	// (0x0001c892) list_double_time_pane_t4

0x0003,

0xf674,	// (0x000206ee) list_double_time_pane_t_ParamLimits

0xf674,	// (0x000206ee) list_double_time_pane_t

0x2aef,	// (0x00013b69) list_setting_pane_g1_ParamLimits

0x2aef,	// (0x00013b69) list_setting_pane_g1

0xb5d2,	// (0x0001c64c) list_setting_pane_g2_ParamLimits

0xb5d2,	// (0x0001c64c) list_setting_pane_g2

0x0001,

0xf67d,	// (0x000206f7) list_setting_pane_g_ParamLimits

0xf67d,	// (0x000206f7) list_setting_pane_g

0xb82a,	// (0x0001c8a4) list_setting_pane_t1_ParamLimits

0xb82a,	// (0x0001c8a4) list_setting_pane_t1

0xb841,	// (0x0001c8bb) list_setting_pane_t2_ParamLimits

0xb841,	// (0x0001c8bb) list_setting_pane_t2

0x0002,

0xf682,	// (0x000206fc) list_setting_pane_t_ParamLimits

0xf682,	// (0x000206fc) list_setting_pane_t

0xb880,	// (0x0001c8fa) set_value_pane_cp_ParamLimits

0xb880,	// (0x0001c8fa) set_value_pane_cp

0x2aef,	// (0x00013b69) list_setting_number_pane_g1_ParamLimits

0x2aef,	// (0x00013b69) list_setting_number_pane_g1

0xb5d2,	// (0x0001c64c) list_setting_number_pane_g2_ParamLimits

0xb5d2,	// (0x0001c64c) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x000206f7) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x000206f7) list_setting_number_pane_g

0xb88e,	// (0x0001c908) list_setting_number_pane_t1_ParamLimits

0xb88e,	// (0x0001c908) list_setting_number_pane_t1

0xb8a2,	// (0x0001c91c) list_setting_number_pane_t2_ParamLimits

0xb8a2,	// (0x0001c91c) list_setting_number_pane_t2

0xb8b9,	// (0x0001c933) list_setting_number_pane_t3_ParamLimits

0xb8b9,	// (0x0001c933) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x00020703) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x00020703) list_setting_number_pane_t

0xb880,	// (0x0001c8fa) set_value_pane_ParamLimits

0xb880,	// (0x0001c8fa) set_value_pane

0x1d3c,	// (0x00012db6) bg_set_opt_pane_ParamLimits

0x1d3c,	// (0x00012db6) bg_set_opt_pane

0x1d5d,	// (0x00012dd7) set_value_pane_t1

0x1d6b,	// (0x00012de5) slider_set_pane_cp3

0x1d74,	// (0x00012dee) volume_small_pane_cp

0x1d7d,	// (0x00012df7) list_form_gen_pane

0x1d86,	// (0x00012e00) scroll_pane_cp8

0xb8fc,	// (0x0001c976) form_field_data_pane_ParamLimits

0xb8fc,	// (0x0001c976) form_field_data_pane

0xb917,	// (0x0001c991) form_field_data_wide_pane_ParamLimits

0xb917,	// (0x0001c991) form_field_data_wide_pane

0xb93b,	// (0x0001c9b5) form_field_popup_pane_ParamLimits

0xb93b,	// (0x0001c9b5) form_field_popup_pane

0x1e0e,	// (0x00012e88) form_field_popup_wide_pane_ParamLimits

0x1e0e,	// (0x00012e88) form_field_popup_wide_pane

0x1e2f,	// (0x00012ea9) form_field_slider_pane_ParamLimits

0x1e2f,	// (0x00012ea9) form_field_slider_pane

0x1e42,	// (0x00012ebc) form_field_slider_wide_pane_ParamLimits

0x1e42,	// (0x00012ebc) form_field_slider_wide_pane

0x1e55,	// (0x00012ecf) data_form_pane

0xb967,	// (0x0001c9e1) form_field_data_pane_t1

0x1e85,	// (0x00012eff) input_focus_pane

0x1e93,	// (0x00012f0d) data_form_wide_pane

0x1ecb,	// (0x00012f45) form_field_data_wide_pane_t1

0x165b,	// (0x000126d5) input_focus_pane_cp6

0xb981,	// (0x0001c9fb) form_field_popup_pane_t1

0x1e85,	// (0x00012eff) input_focus_pane_cp7

0x1f07,	// (0x00012f81) list_form_pane

0x1f1b,	// (0x00012f95) form_field_popup_wide_pane_t1

0x1e85,	// (0x00012eff) input_focus_pane_cp8

0x1f30,	// (0x00012faa) list_form_wide_pane

0xb9a3,	// (0x0001ca1d) form_field_slider_pane_t1_ParamLimits

0xb9a3,	// (0x0001ca1d) form_field_slider_pane_t1

0xb9bb,	// (0x0001ca35) form_field_slider_pane_t2_ParamLimits

0xb9bb,	// (0x0001ca35) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x00020713) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x00020713) form_field_slider_pane_t

0x12df,	// (0x00012359) input_focus_pane_cp9_ParamLimits

0x12df,	// (0x00012359) input_focus_pane_cp9

0xb9d0,	// (0x0001ca4a) slider_cont_pane_ParamLimits

0xb9d0,	// (0x0001ca4a) slider_cont_pane

0x1f81,	// (0x00012ffb) form_field_slider_wide_pane_t1_ParamLimits

0x1f81,	// (0x00012ffb) form_field_slider_wide_pane_t1

0x1f93,	// (0x0001300d) form_field_slider_wide_pane_t2_ParamLimits

0x1f93,	// (0x0001300d) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x00020718) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x00020718) form_field_slider_wide_pane_t

0x12df,	// (0x00012359) input_focus_pane_cp10_ParamLimits

0x12df,	// (0x00012359) input_focus_pane_cp10

0xb9e4,	// (0x0001ca5e) slider_cont_pane_cp1_ParamLimits

0xb9e4,	// (0x0001ca5e) slider_cont_pane_cp1

0xb9f8,	// (0x0001ca72) slider_form_pane_cp

0x1fc1,	// (0x0001303b) input_focus_pane_g1

0x1fc9,	// (0x00013043) input_focus_pane_g2

0x1fd1,	// (0x0001304b) input_focus_pane_g3

0x1fd9,	// (0x00013053) input_focus_pane_g4

0x1fe1,	// (0x0001305b) input_focus_pane_g5

0x1fe9,	// (0x00013063) input_focus_pane_g6

0x1ff1,	// (0x0001306b) input_focus_pane_g7

0x1ff9,	// (0x00013073) input_focus_pane_g8

0x2001,	// (0x0001307b) input_focus_pane_g9

0xea99,	// (0x0001fb13) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0002071d) input_focus_pane_g

0x4266,	// (0x000152e0) wait_border_pane_g3_copy1

0xba00,	// (0x0001ca7a) data_form_pane_t1

0xea99,	// (0x0001fb13) wait_anim_pane_g1_copy1

0xcea3,	// (0x0001df1d) data_form_wide_pane_t1

0x2028,	// (0x000130a2) list_form_graphic_pane_cp_ParamLimits

0x2028,	// (0x000130a2) list_form_graphic_pane_cp

0x5213,	// (0x0001628d) slider_form_pane_g1

0x521c,	// (0x00016296) slider_form_pane_g2

0x0006,

0xf996,	// (0x00020a10) slider_form_pane_g

0xba1c,	// (0x0001ca96) list_form_graphic_pane_ParamLimits

0xba1c,	// (0x0001ca96) list_form_graphic_pane

0x203a,	// (0x000130b4) list_form_graphic_pane_g1

0x2042,	// (0x000130bc) list_form_graphic_pane_t1_ParamLimits

0x2042,	// (0x000130bc) list_form_graphic_pane_t1

0x1049,	// (0x000120c3) list_highlight_pane_cp5_ParamLimits

0x1049,	// (0x000120c3) list_highlight_pane_cp5

0xba2d,	// (0x0001caa7) find_pane_g1

0x2060,	// (0x000130da) input_find_pane

0xba36,	// (0x0001cab0) input_find_pane_g1_ParamLimits

0xba36,	// (0x0001cab0) input_find_pane_g1

0xba42,	// (0x0001cabc) input_find_pane_t1_ParamLimits

0xba42,	// (0x0001cabc) input_find_pane_t1

0xba57,	// (0x0001cad1) input_find_pane_t2_ParamLimits

0xba57,	// (0x0001cad1) input_find_pane_t2

0x0001,

0xf6b8,	// (0x00020732) input_find_pane_t_ParamLimits

0xf6b8,	// (0x00020732) input_find_pane_t

0x209f,	// (0x00013119) input_focus_pane_cp5_ParamLimits

0x209f,	// (0x00013119) input_focus_pane_cp5

0xba78,	// (0x0001caf2) bg_popup_window_pane_cp2_ParamLimits

0xba78,	// (0x0001caf2) bg_popup_window_pane_cp2

0xba85,	// (0x0001caff) listscroll_menu_pane_ParamLimits

0xba85,	// (0x0001caff) listscroll_menu_pane

0xba91,	// (0x0001cb0b) popup_submenu_window_ParamLimits

0xba91,	// (0x0001cb0b) popup_submenu_window

0x2102,	// (0x0001317c) find_popup_pane_g1

0x210a,	// (0x00013184) input_popup_find_pane_cp

0x209f,	// (0x00013119) input_focus_pane_cp4_ParamLimits

0x209f,	// (0x00013119) input_focus_pane_cp4

0x2122,	// (0x0001319c) input_popup_find_pane_t1_ParamLimits

0x2122,	// (0x0001319c) input_popup_find_pane_t1

0xec1c,	// (0x0001fc96) bg_popup_sub_pane_cp

0x2150,	// (0x000131ca) listscroll_popup_sub_pane

0x2158,	// (0x000131d2) list_submenu_pane_ParamLimits

0x2158,	// (0x000131d2) list_submenu_pane

0x2169,	// (0x000131e3) scroll_pane_cp4

0x2171,	// (0x000131eb) list_single_popup_submenu_pane_ParamLimits

0x2171,	// (0x000131eb) list_single_popup_submenu_pane

0x2186,	// (0x00013200) list_single_popup_submenu_pane_g1

0x218e,	// (0x00013208) list_single_popup_submenu_pane_t1_ParamLimits

0x218e,	// (0x00013208) list_single_popup_submenu_pane_t1

0x12df,	// (0x00012359) bg_active_tab_pane_cp1_ParamLimits

0x12df,	// (0x00012359) bg_active_tab_pane_cp1

0xbacf,	// (0x0001cb49) tabs_2_active_pane_g1

0xbad7,	// (0x0001cb51) tabs_2_active_pane_t1

0x12df,	// (0x00012359) bg_passive_tab_pane_cp1_ParamLimits

0x12df,	// (0x00012359) bg_passive_tab_pane_cp1

0xbacf,	// (0x0001cb49) tabs_2_passive_pane_g1

0xbad7,	// (0x0001cb51) tabs_2_passive_pane_t1

0x1049,	// (0x000120c3) bg_active_tab_pane_cp4

0xbae9,	// (0x0001cb63) tabs_2_long_active_pane_t1

0x305f,	// (0x000140d9) bg_passive_tab_pane_cp4

0xf483,	// (0x000204fd) list_single_midp_graphic_pane_g4_ParamLimits

0x1049,	// (0x000120c3) bg_active_tab_pane_cp5

0xbafc,	// (0x0001cb76) tabs_3_long_active_pane_t1

0x305f,	// (0x000140d9) bg_passive_tab_pane_cp5

0xf483,	// (0x000204fd) list_single_midp_graphic_pane_g4

0x1049,	// (0x000120c3) bg_popup_window_pane_cp13_ParamLimits

0x1049,	// (0x000120c3) bg_popup_window_pane_cp13

0x2205,	// (0x0001327f) listscroll_popup_fast_pane_ParamLimits

0x2205,	// (0x0001327f) listscroll_popup_fast_pane

0x2214,	// (0x0001328e) grid_popup_fast_pane_ParamLimits

0x2214,	// (0x0001328e) grid_popup_fast_pane

0x2226,	// (0x000132a0) scroll_pane_cp9_ParamLimits

0x2226,	// (0x000132a0) scroll_pane_cp9

0x7022,	// (0x0001809c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7022,	// (0x0001809c) list_single_graphic_hl_pane_t1_cp2

0x224a,	// (0x000132c4) input_focus_pane_cp20_ParamLimits

0x224a,	// (0x000132c4) input_focus_pane_cp20

0x2258,	// (0x000132d2) query_popup_data_pane_t1_ParamLimits

0x2258,	// (0x000132d2) query_popup_data_pane_t1

0x226b,	// (0x000132e5) query_popup_data_pane_t2_ParamLimits

0x226b,	// (0x000132e5) query_popup_data_pane_t2

0x22b1,	// (0x0001332b) query_popup_data_pane_t3_ParamLimits

0x22b1,	// (0x0001332b) query_popup_data_pane_t3

0x22f2,	// (0x0001336c) query_popup_data_pane_t4_ParamLimits

0x22f2,	// (0x0001336c) query_popup_data_pane_t4

0x232e,	// (0x000133a8) query_popup_data_pane_t5_ParamLimits

0x232e,	// (0x000133a8) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x00020737) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x00020737) query_popup_data_pane_t

0x1fc1,	// (0x0001303b) bg_set_opt_pane_g1

0x1fc9,	// (0x00013043) bg_set_opt_pane_g2

0x1fd1,	// (0x0001304b) bg_set_opt_pane_g3

0x1fd9,	// (0x00013053) bg_set_opt_pane_g4

0x1fe1,	// (0x0001305b) bg_set_opt_pane_g5

0x1fe9,	// (0x00013063) bg_set_opt_pane_g6

0x1ff1,	// (0x0001306b) bg_set_opt_pane_g7

0x1ff9,	// (0x00013073) bg_set_opt_pane_g8

0x2001,	// (0x0001307b) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x00020742) bg_set_opt_pane_g

0xf1aa,	// (0x00020224) control_top_pane_stacon_ParamLimits

0xf1aa,	// (0x00020224) control_top_pane_stacon

0xf1fd,	// (0x00020277) signal_pane_stacon_ParamLimits

0xf1fd,	// (0x00020277) signal_pane_stacon

0x2966,	// (0x000139e0) stacon_top_pane_g1_ParamLimits

0x2966,	// (0x000139e0) stacon_top_pane_g1

0xf222,	// (0x0002029c) title_pane_stacon_ParamLimits

0xf222,	// (0x0002029c) title_pane_stacon

0xf24c,	// (0x000202c6) uni_indicator_pane_stacon_ParamLimits

0xf24c,	// (0x000202c6) uni_indicator_pane_stacon

0xf264,	// (0x000202de) battery_pane_stacon_ParamLimits

0xf264,	// (0x000202de) battery_pane_stacon

0xf2a8,	// (0x00020322) control_bottom_pane_stacon_ParamLimits

0xf2a8,	// (0x00020322) control_bottom_pane_stacon

0xf2cb,	// (0x00020345) navi_pane_stacon_ParamLimits

0xf2cb,	// (0x00020345) navi_pane_stacon

0x2988,	// (0x00013a02) stacon_bottom_pane_g1_ParamLimits

0x2988,	// (0x00013a02) stacon_bottom_pane_g1

0xef10,	// (0x0001ff8a) aid_levels_signal_lsc_ParamLimits

0xef10,	// (0x0001ff8a) aid_levels_signal_lsc

0xef27,	// (0x0001ffa1) signal_pane_stacon_g1_ParamLimits

0xef27,	// (0x0001ffa1) signal_pane_stacon_g1

0xef3b,	// (0x0001ffb5) signal_pane_stacon_g2_ParamLimits

0xef3b,	// (0x0001ffb5) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x00020755) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x00020755) signal_pane_stacon_g

0xef70,	// (0x0001ffea) title_pane_stacon_t1_ParamLimits

0xef70,	// (0x0001ffea) title_pane_stacon_t1

0x2372,	// (0x000133ec) uni_indicator_pane_stacon_g1

0x237c,	// (0x000133f6) uni_indicator_pane_stacon_g2

0x2386,	// (0x00013400) uni_indicator_pane_stacon_g3

0x2390,	// (0x0001340a) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x00020761) uni_indicator_pane_stacon_g

0xef95,	// (0x0002000f) control_top_pane_stacon_g1

0xef9d,	// (0x00020017) control_top_pane_stacon_t1_ParamLimits

0xef9d,	// (0x00020017) control_top_pane_stacon_t1

0xefd4,	// (0x0002004e) aid_levels_battery_lsc_ParamLimits

0xefd4,	// (0x0002004e) aid_levels_battery_lsc

0xefec,	// (0x00020066) battery_pane_stacon_g1_ParamLimits

0xefec,	// (0x00020066) battery_pane_stacon_g1

0xefff,	// (0x00020079) battery_pane_stacon_g2_ParamLimits

0xefff,	// (0x00020079) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0002076a) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0002076a) battery_pane_stacon_g

0xf03d,	// (0x000200b7) navi_icon_pane_stacon

0xf051,	// (0x000200cb) navi_navi_pane_stacon

0xf03d,	// (0x000200b7) navi_text_pane_stacon

0xef95,	// (0x0002000f) control_bottom_pane_stacon_g1

0xf067,	// (0x000200e1) control_bottom_pane_stacon_t1_ParamLimits

0xf067,	// (0x000200e1) control_bottom_pane_stacon_t1

0xbb0e,	// (0x0001cb88) grid_app_pane_ParamLimits

0xbb0e,	// (0x0001cb88) grid_app_pane

0xbb46,	// (0x0001cbc0) scroll_pane_cp15_ParamLimits

0xbb46,	// (0x0001cbc0) scroll_pane_cp15

0xbb63,	// (0x0001cbdd) cell_app_pane_ParamLimits

0xbb63,	// (0x0001cbdd) cell_app_pane

0xbba4,	// (0x0001cc1e) cell_app_pane_g1_ParamLimits

0xbba4,	// (0x0001cc1e) cell_app_pane_g1

0x243d,	// (0x000134b7) cell_app_pane_g2_ParamLimits

0x243d,	// (0x000134b7) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0002076f) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0002076f) cell_app_pane_g

0x2449,	// (0x000134c3) cell_app_pane_t1_ParamLimits

0x2449,	// (0x000134c3) cell_app_pane_t1

0x245b,	// (0x000134d5) grid_highlight_pane_ParamLimits

0x245b,	// (0x000134d5) grid_highlight_pane

0x1fc1,	// (0x0001303b) cell_highlight_pane_g1

0x1fc9,	// (0x00013043) cell_highlight_pane_g2

0x1fd1,	// (0x0001304b) cell_highlight_pane_g3

0x1fd9,	// (0x00013053) cell_highlight_pane_g4

0x1fe1,	// (0x0001305b) cell_highlight_pane_g5

0x1fe9,	// (0x00013063) cell_highlight_pane_g6

0x1ff1,	// (0x0001306b) cell_highlight_pane_g7

0x1ff9,	// (0x00013073) cell_highlight_pane_g8

0x2001,	// (0x0001307b) cell_highlight_pane_g9

0xea99,	// (0x0001fb13) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0002071d) cell_highlight_pane_g

0x246c,	// (0x000134e6) bg_scroll_pane

0xf0a8,	// (0x00020122) scroll_handle_pane

0x24b3,	// (0x0001352d) scroll_bg_pane_g1

0x24c8,	// (0x00013542) scroll_bg_pane_g2

0x24e0,	// (0x0001355a) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x00020774) scroll_bg_pane_g

0x24f5,	// (0x0001356f) scroll_handle_focus_pane_ParamLimits

0x24f5,	// (0x0001356f) scroll_handle_focus_pane

0x24b3,	// (0x0001352d) scroll_handle_pane_g1

0x2502,	// (0x0001357c) scroll_handle_pane_g2

0x24e0,	// (0x0001355a) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0002077b) scroll_handle_pane_g

0x209f,	// (0x00013119) bg_popup_sub_pane_cp21_ParamLimits

0x209f,	// (0x00013119) bg_popup_sub_pane_cp21

0x2516,	// (0x00013590) popup_fep_japan_predictive_window_t1_ParamLimits

0x2516,	// (0x00013590) popup_fep_japan_predictive_window_t1

0x252d,	// (0x000135a7) popup_fep_japan_predictive_window_t2_ParamLimits

0x252d,	// (0x000135a7) popup_fep_japan_predictive_window_t2

0x2560,	// (0x000135da) popup_fep_japan_predictive_window_t3_ParamLimits

0x2560,	// (0x000135da) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x00020782) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x00020782) popup_fep_japan_predictive_window_t

0xec1c,	// (0x0001fc96) bg_popup_sub_pane_cp23

0x2597,	// (0x00013611) listscroll_japin_cand_pane

0x259f,	// (0x00013619) popup_fep_japan_candidate_window_t1

0x25ad,	// (0x00013627) candidate_pane_ParamLimits

0x25ad,	// (0x00013627) candidate_pane

0x25bf,	// (0x00013639) scroll_pane_cp30

0x25c9,	// (0x00013643) list_single_popup_jap_candidate_pane_ParamLimits

0x25c9,	// (0x00013643) list_single_popup_jap_candidate_pane

0xec1c,	// (0x0001fc96) list_highlight_pane_cp30

0x25dd,	// (0x00013657) list_single_popup_jap_candidate_pane_t1

0xbbc8,	// (0x0001cc42) level_1_signal

0xbbda,	// (0x0001cc54) level_2_signal

0xbbed,	// (0x0001cc67) level_3_signal

0xbc00,	// (0x0001cc7a) level_4_signal

0xbc13,	// (0x0001cc8d) level_5_signal

0xbc26,	// (0x0001cca0) level_6_signal

0xbc39,	// (0x0001ccb3) level_7_signal

0xbbc8,	// (0x0001cc42) level_1_battery

0xbbda,	// (0x0001cc54) level_2_battery

0xbbed,	// (0x0001cc67) level_3_battery

0xbc00,	// (0x0001cc7a) level_4_battery

0xbc13,	// (0x0001cc8d) level_5_battery

0xbc26,	// (0x0001cca0) level_6_battery

0xbc39,	// (0x0001ccb3) level_7_battery

0x265f,	// (0x000136d9) list_menu_pane_ParamLimits

0x265f,	// (0x000136d9) list_menu_pane

0x2670,	// (0x000136ea) scroll_pane_cp25_ParamLimits

0x2670,	// (0x000136ea) scroll_pane_cp25

0x2689,	// (0x00013703) list_double2_graphic_pane_cp2_ParamLimits

0x2689,	// (0x00013703) list_double2_graphic_pane_cp2

0x2689,	// (0x00013703) list_double2_large_graphic_pane_cp2_ParamLimits

0x2689,	// (0x00013703) list_double2_large_graphic_pane_cp2

0x2689,	// (0x00013703) list_double2_pane_cp2_ParamLimits

0x2689,	// (0x00013703) list_double2_pane_cp2

0x2689,	// (0x00013703) list_double_graphic_pane_cp2_ParamLimits

0x2689,	// (0x00013703) list_double_graphic_pane_cp2

0x2689,	// (0x00013703) list_double_large_graphic_pane_cp2_ParamLimits

0x2689,	// (0x00013703) list_double_large_graphic_pane_cp2

0x2689,	// (0x00013703) list_double_number_pane_cp2_ParamLimits

0x2689,	// (0x00013703) list_double_number_pane_cp2

0x2689,	// (0x00013703) list_double_pane_cp2_ParamLimits

0x2689,	// (0x00013703) list_double_pane_cp2

0xbc4c,	// (0x0001ccc6) list_single_2graphic_pane_cp2_ParamLimits

0xbc4c,	// (0x0001ccc6) list_single_2graphic_pane_cp2

0xbc4c,	// (0x0001ccc6) list_single_graphic_heading_pane_cp2_ParamLimits

0xbc4c,	// (0x0001ccc6) list_single_graphic_heading_pane_cp2

0xbc4c,	// (0x0001ccc6) list_single_graphic_pane_cp2_ParamLimits

0xbc4c,	// (0x0001ccc6) list_single_graphic_pane_cp2

0xbc4c,	// (0x0001ccc6) list_single_heading_pane_cp2_ParamLimits

0xbc4c,	// (0x0001ccc6) list_single_heading_pane_cp2

0x26cc,	// (0x00013746) list_single_large_graphic_pane_cp2_ParamLimits

0x26cc,	// (0x00013746) list_single_large_graphic_pane_cp2

0xbc4c,	// (0x0001ccc6) list_single_number_heading_pane_cp2_ParamLimits

0xbc4c,	// (0x0001ccc6) list_single_number_heading_pane_cp2

0xbc4c,	// (0x0001ccc6) list_single_number_pane_cp2_ParamLimits

0xbc4c,	// (0x0001ccc6) list_single_number_pane_cp2

0xbc4c,	// (0x0001ccc6) list_single_pane_cp2_ParamLimits

0xbc4c,	// (0x0001ccc6) list_single_pane_cp2

0x2721,	// (0x0001379b) bg_popup_sub_pane_cp22

0xf15a,	// (0x000201d4) popup_side_volume_key_window_g1

0xf184,	// (0x000201fe) popup_side_volume_key_window_t1

0xf1a2,	// (0x0002021c) volume_small_pane_cp1

0x12df,	// (0x00012359) bg_popup_sub_pane_cp24_ParamLimits

0x12df,	// (0x00012359) bg_popup_sub_pane_cp24

0x2737,	// (0x000137b1) fep_china_uni_candidate_pane_ParamLimits

0x2737,	// (0x000137b1) fep_china_uni_candidate_pane

0x274b,	// (0x000137c5) fep_china_uni_entry_pane

0x275b,	// (0x000137d5) popup_fep_china_uni_window_g1

0x2777,	// (0x000137f1) fep_china_uni_entry_pane_g1

0x2781,	// (0x000137fb) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x000207af) fep_china_uni_entry_pane_g

0x278b,	// (0x00013805) fep_entry_item_pane

0x2795,	// (0x0001380f) fep_candidate_item_pane

0x279d,	// (0x00013817) fep_china_uni_candidate_pane_g1

0x27a7,	// (0x00013821) fep_china_uni_candidate_pane_g2

0x27af,	// (0x00013829) fep_china_uni_candidate_pane_g3

0x27b7,	// (0x00013831) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x000207b4) fep_china_uni_candidate_pane_g

0xea99,	// (0x0001fb13) fep_entry_item_pane_g1

0x27c1,	// (0x0001383b) fep_entry_item_pane_t1_ParamLimits

0x27c1,	// (0x0001383b) fep_entry_item_pane_t1

0x27d7,	// (0x00013851) fep_candidate_item_pane_t1_ParamLimits

0x27d7,	// (0x00013851) fep_candidate_item_pane_t1

0x27ec,	// (0x00013866) fep_candidate_item_pane_t2_ParamLimits

0x27ec,	// (0x00013866) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x000207bd) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x000207bd) fep_candidate_item_pane_t

0x1049,	// (0x000120c3) list_highlight_pane_cp31_ParamLimits

0x1049,	// (0x000120c3) list_highlight_pane_cp31

0x27fe,	// (0x00013878) level_1_signal_lsc

0x2807,	// (0x00013881) level_2_signal_lsc

0x2810,	// (0x0001388a) level_3_signal_lsc

0x2819,	// (0x00013893) level_4_signal_lsc

0x2822,	// (0x0001389c) level_5_signal_lsc

0x282b,	// (0x000138a5) level_6_signal_lsc

0x2834,	// (0x000138ae) level_7_signal_lsc

0x2834,	// (0x000138ae) level_1_battery_lsc

0x283d,	// (0x000138b7) level_2_battery_lsc

0x2846,	// (0x000138c0) level_3_battery_lsc

0x284f,	// (0x000138c9) level_4_battery_lsc

0x2858,	// (0x000138d2) level_5_battery_lsc

0x2861,	// (0x000138db) level_6_battery_lsc

0x27fe,	// (0x00013878) level_7_battery_lsc

0x286a,	// (0x000138e4) scroll_handle_focus_pane_g1

0x2873,	// (0x000138ed) scroll_handle_focus_pane_g2

0x287c,	// (0x000138f6) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x000207c2) scroll_handle_focus_pane_g

0xbcaf,	// (0x0001cd29) list_single_2graphic_pane_g1_ParamLimits

0xbcaf,	// (0x0001cd29) list_single_2graphic_pane_g1

0xb556,	// (0x0001c5d0) list_single_2graphic_pane_g2_ParamLimits

0xb556,	// (0x0001c5d0) list_single_2graphic_pane_g2

0x3b53,	// (0x00014bcd) list_single_2graphic_pane_g3_ParamLimits

0x3b53,	// (0x00014bcd) list_single_2graphic_pane_g3

0xbcbb,	// (0x0001cd35) list_single_2graphic_pane_g4_ParamLimits

0xbcbb,	// (0x0001cd35) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x000207c9) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x000207c9) list_single_2graphic_pane_g

0xbccc,	// (0x0001cd46) list_single_2graphic_pane_t1_ParamLimits

0xbccc,	// (0x0001cd46) list_single_2graphic_pane_t1

0xbcfa,	// (0x0001cd74) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbcfa,	// (0x0001cd74) list_double2_graphic_large_graphic_pane_g1

0xb5c1,	// (0x0001c63b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb5c1,	// (0x0001c63b) list_double2_graphic_large_graphic_pane_g2

0xb5d2,	// (0x0001c64c) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb5d2,	// (0x0001c64c) list_double2_graphic_large_graphic_pane_g3

0xbd0c,	// (0x0001cd86) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbd0c,	// (0x0001cd86) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x000207d2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x000207d2) list_double2_graphic_large_graphic_pane_g

0xbd18,	// (0x0001cd92) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbd18,	// (0x0001cd92) list_double2_graphic_large_graphic_pane_t1

0xbd2e,	// (0x0001cda8) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbd2e,	// (0x0001cda8) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x000207db) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x000207db) list_double2_graphic_large_graphic_pane_t

0x2a4a,	// (0x00013ac4) popup_fast_swap_window_ParamLimits

0x2a4a,	// (0x00013ac4) popup_fast_swap_window

0x2a68,	// (0x00013ae2) popup_side_volume_key_window

0x2a86,	// (0x00013b00) stacon_top_pane

0x2a90,	// (0x00013b0a) status_pane_ParamLimits

0x2a90,	// (0x00013b0a) status_pane

0x2a86,	// (0x00013b00) status_small_pane

0xec1c,	// (0x0001fc96) control_pane

0xec1c,	// (0x0001fc96) stacon_bottom_pane

0x1d86,	// (0x00012e00) scroll_pane_cp121

0x1d7d,	// (0x00012df7) set_content_pane

0xbd40,	// (0x0001cdba) bg_active_tab_pane_g1_cp1

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp1

0xbd49,	// (0x0001cdc3) bg_active_tab_pane_g3_cp1

0xbd40,	// (0x0001cdba) bg_passive_tab_pane_g1_cp1

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp1

0xbd49,	// (0x0001cdc3) bg_passive_tab_pane_g3_cp1

0xbd52,	// (0x0001cdcc) bg_active_tab_pane_g1_cp2

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp2

0xbd5b,	// (0x0001cdd5) bg_active_tab_pane_g3_cp2

0xbd52,	// (0x0001cdcc) bg_passive_tab_pane_g1_cp2

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp2

0xbd5b,	// (0x0001cdd5) bg_passive_tab_pane_g3_cp2

0xbd64,	// (0x0001cdde) bg_active_tab_pane_g1_cp3

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp3

0xbd6d,	// (0x0001cde7) bg_active_tab_pane_g3_cp3

0xbd64,	// (0x0001cdde) bg_passive_tab_pane_g1_cp3

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp3

0xbd6d,	// (0x0001cde7) bg_passive_tab_pane_g3_cp3

0xbd76,	// (0x0001cdf0) bg_active_tab_pane_g1_cp4

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp4

0xbd7f,	// (0x0001cdf9) bg_active_tab_pane_g3_cp4

0xbd76,	// (0x0001cdf0) bg_passive_tab_pane_g1_cp4

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp4

0xbd7f,	// (0x0001cdf9) bg_passive_tab_pane_g3_cp4

0x29a4,	// (0x00013a1e) bg_active_tab_pane_g1_cp5

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp5

0x29ad,	// (0x00013a27) bg_active_tab_pane_g3_cp5

0x29a4,	// (0x00013a1e) bg_passive_tab_pane_g1_cp5

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp5

0x29ad,	// (0x00013a27) bg_passive_tab_pane_g3_cp5

0x2171,	// (0x000131eb) list_set_graphic_pane_ParamLimits

0x2171,	// (0x000131eb) list_set_graphic_pane

0xec1c,	// (0x0001fc96) bg_set_opt_pane_cp4

0xbd88,	// (0x0001ce02) list_set_graphic_pane_g1_ParamLimits

0xbd88,	// (0x0001ce02) list_set_graphic_pane_g1

0xbd94,	// (0x0001ce0e) list_set_graphic_pane_g2_ParamLimits

0xbd94,	// (0x0001ce0e) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x000207e0) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x000207e0) list_set_graphic_pane_g

0x0009,

0xfade,	// (0x00020b58) volume_small_pane_cp_g

0x29fb,	// (0x00013a75) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x29fb,	// (0x00013a75) list_double2_large_graphic_pane_g1_cp2

0x2a09,	// (0x00013a83) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2a09,	// (0x00013a83) list_double2_large_graphic_pane_g2_cp2

0x2a1a,	// (0x00013a94) list_double2_large_graphic_pane_g3_cp2

0x2a22,	// (0x00013a9c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2a22,	// (0x00013a9c) list_double2_large_graphic_pane_t1_cp2

0x2a38,	// (0x00013ab2) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x2a38,	// (0x00013ab2) list_double2_large_graphic_pane_t2_cp2

0x4d50,	// (0x00015dca) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4d50,	// (0x00015dca) list_double_large_graphic_pane_g1_cp2

0x4d63,	// (0x00015ddd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4d63,	// (0x00015ddd) list_double_large_graphic_pane_g2_cp2

0x2bae,	// (0x00013c28) list_double_large_graphic_pane_g3_cp2

0x4d74,	// (0x00015dee) list_double_large_graphic_pane_g4_cp

0x4d7c,	// (0x00015df6) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4d7c,	// (0x00015df6) list_double_large_graphic_pane_t1_cp2

0x4d93,	// (0x00015e0d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4d93,	// (0x00015e0d) list_double_large_graphic_pane_t2_cp2

0x2a9e,	// (0x00013b18) list_double2_graphic_pane_g1_cp2_ParamLimits

0x2a9e,	// (0x00013b18) list_double2_graphic_pane_g1_cp2

0x2aac,	// (0x00013b26) list_double2_graphic_pane_g2_cp2_ParamLimits

0x2aac,	// (0x00013b26) list_double2_graphic_pane_g2_cp2

0x2abd,	// (0x00013b37) list_double2_graphic_pane_g3_cp2

0x2ac7,	// (0x00013b41) list_double2_graphic_pane_t1_cp2_ParamLimits

0x2ac7,	// (0x00013b41) list_double2_graphic_pane_t1_cp2

0x2add,	// (0x00013b57) list_double2_graphic_pane_t2_cp2_ParamLimits

0x2add,	// (0x00013b57) list_double2_graphic_pane_t2_cp2

0x2aef,	// (0x00013b69) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2aef,	// (0x00013b69) list_single_number_heading_pane_g1_cp2

0x2afb,	// (0x00013b75) list_single_number_heading_pane_g2_cp2

0x2b03,	// (0x00013b7d) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2b03,	// (0x00013b7d) list_single_number_heading_pane_t1_cp2

0x2b19,	// (0x00013b93) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2b19,	// (0x00013b93) list_single_number_heading_pane_t2_cp2

0x2b2d,	// (0x00013ba7) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2b2d,	// (0x00013ba7) list_single_number_heading_pane_t3_cp2

0x2aef,	// (0x00013b69) list_single_heading_pane_g1_cp2_ParamLimits

0x2aef,	// (0x00013b69) list_single_heading_pane_g1_cp2

0x2afb,	// (0x00013b75) list_single_heading_pane_g2_cp2

0x2b03,	// (0x00013b7d) list_single_heading_pane_t1_cp2_ParamLimits

0x2b03,	// (0x00013b7d) list_single_heading_pane_t1_cp2

0x4b4a,	// (0x00015bc4) list_single_heading_pane_t2_cp2_ParamLimits

0x4b4a,	// (0x00015bc4) list_single_heading_pane_t2_cp2

0x4a8c,	// (0x00015b06) list_double_graphic_pane_g1_cp2_ParamLimits

0x4a8c,	// (0x00015b06) list_double_graphic_pane_g1_cp2

0x4a98,	// (0x00015b12) list_double_graphic_pane_g2_cp2_ParamLimits

0x4a98,	// (0x00015b12) list_double_graphic_pane_g2_cp2

0x4aa7,	// (0x00015b21) list_double_graphic_pane_g3_cp2

0x4aaf,	// (0x00015b29) list_double_graphic_pane_t1_cp2_ParamLimits

0x4aaf,	// (0x00015b29) list_double_graphic_pane_t1_cp2

0x4ac5,	// (0x00015b3f) list_double_graphic_pane_t2_cp2_ParamLimits

0x4ac5,	// (0x00015b3f) list_double_graphic_pane_t2_cp2

0x2ba2,	// (0x00013c1c) list_double_number_pane_g1_cp2_ParamLimits

0x2ba2,	// (0x00013c1c) list_double_number_pane_g1_cp2

0x2bae,	// (0x00013c28) list_double_number_pane_g2_cp2

0x4a50,	// (0x00015aca) list_double_number_pane_t1_cp2_ParamLimits

0x4a50,	// (0x00015aca) list_double_number_pane_t1_cp2

0x4a64,	// (0x00015ade) list_double_number_pane_t2_cp2_ParamLimits

0x4a64,	// (0x00015ade) list_double_number_pane_t2_cp2

0x4a7a,	// (0x00015af4) list_double_number_pane_t3_cp2_ParamLimits

0x4a7a,	// (0x00015af4) list_double_number_pane_t3_cp2

0x4939,	// (0x000159b3) list_single_graphic_pane_g1_cp2_ParamLimits

0x4939,	// (0x000159b3) list_single_graphic_pane_g1_cp2

0x2c08,	// (0x00013c82) list_single_graphic_pane_g2_cp2_ParamLimits

0x2c08,	// (0x00013c82) list_single_graphic_pane_g2_cp2

0x2c14,	// (0x00013c8e) list_single_graphic_pane_g3_cp2

0x490f,	// (0x00015989) list_single_graphic_pane_t1_cp2_ParamLimits

0x490f,	// (0x00015989) list_single_graphic_pane_t1_cp2

0x2c08,	// (0x00013c82) list_single_number_pane_g1_cp2_ParamLimits

0x2c08,	// (0x00013c82) list_single_number_pane_g1_cp2

0x2c14,	// (0x00013c8e) list_single_number_pane_g2_cp2

0x490f,	// (0x00015989) list_single_number_pane_t1_cp2_ParamLimits

0x490f,	// (0x00015989) list_single_number_pane_t1_cp2

0x4925,	// (0x0001599f) list_single_number_pane_t2_cp2_ParamLimits

0x4925,	// (0x0001599f) list_single_number_pane_t2_cp2

0x2a09,	// (0x00013a83) list_double2_pane_g1_cp2_ParamLimits

0x2a09,	// (0x00013a83) list_double2_pane_g1_cp2

0x2a1a,	// (0x00013a94) list_double2_pane_g2_cp2

0x2b7a,	// (0x00013bf4) list_double2_pane_t1_cp2_ParamLimits

0x2b7a,	// (0x00013bf4) list_double2_pane_t1_cp2

0x2b90,	// (0x00013c0a) list_double2_pane_t2_cp2_ParamLimits

0x2b90,	// (0x00013c0a) list_double2_pane_t2_cp2

0x2ba2,	// (0x00013c1c) list_double_pane_g1_cp2_ParamLimits

0x2ba2,	// (0x00013c1c) list_double_pane_g1_cp2

0x2bae,	// (0x00013c28) list_double_pane_g2_cp2

0x2bb6,	// (0x00013c30) list_double_pane_t1_cp2_ParamLimits

0x2bb6,	// (0x00013c30) list_double_pane_t1_cp2

0x2bcc,	// (0x00013c46) list_double_pane_t2_cp2_ParamLimits

0x2bcc,	// (0x00013c46) list_double_pane_t2_cp2

0x2bf8,	// (0x00013c72) list_single_pane_cp2_g3

0x2c08,	// (0x00013c82) list_single_pane_g1_cp2_ParamLimits

0x2c08,	// (0x00013c82) list_single_pane_g1_cp2

0x2c14,	// (0x00013c8e) list_single_pane_g2_cp2

0x2c1c,	// (0x00013c96) list_single_pane_t1_cp2_ParamLimits

0x2c1c,	// (0x00013c96) list_single_pane_t1_cp2

0x2c34,	// (0x00013cae) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2c34,	// (0x00013cae) list_single_large_graphic_pane_g1_cp2

0x2c42,	// (0x00013cbc) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2c42,	// (0x00013cbc) list_single_large_graphic_pane_g2_cp2

0x2c4e,	// (0x00013cc8) list_single_large_graphic_pane_g3_cp2

0x2c56,	// (0x00013cd0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2c56,	// (0x00013cd0) list_single_large_graphic_pane_g4_cp1

0x2c70,	// (0x00013cea) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2c70,	// (0x00013cea) list_single_large_graphic_pane_t1_cp2

0x48d9,	// (0x00015953) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x48d9,	// (0x00015953) list_single_graphic_heading_pane_g1_cp2

0x48a6,	// (0x00015920) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x48a6,	// (0x00015920) list_single_graphic_heading_pane_g4_cp2

0x2c14,	// (0x00013c8e) list_single_graphic_heading_pane_g5_cp2

0x48e5,	// (0x0001595f) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x48e5,	// (0x0001595f) list_single_graphic_heading_pane_t1_cp2

0x48fb,	// (0x00015975) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x48fb,	// (0x00015975) list_single_graphic_heading_pane_t2_cp2

0x489a,	// (0x00015914) list_single_2graphic_pane_g1_cp2_ParamLimits

0x489a,	// (0x00015914) list_single_2graphic_pane_g1_cp2

0x48a6,	// (0x00015920) list_single_2graphic_pane_g2_cp2_ParamLimits

0x48a6,	// (0x00015920) list_single_2graphic_pane_g2_cp2

0x2c14,	// (0x00013c8e) list_single_2graphic_pane_g3_cp2

0x48b7,	// (0x00015931) list_single_2graphic_pane_g4_cp2_ParamLimits

0x48b7,	// (0x00015931) list_single_2graphic_pane_g4_cp2

0x48c3,	// (0x0001593d) list_single_2graphic_pane_t1_cp2_ParamLimits

0x48c3,	// (0x0001593d) list_single_2graphic_pane_t1_cp2

0xea99,	// (0x0001fb13) list_highlight_pane_g10_cp1

0x4472,	// (0x000154ec) list_highlight_pane_g1_cp1

0x447a,	// (0x000154f4) list_highlight_pane_g2_cp1

0x4482,	// (0x000154fc) list_highlight_pane_g3_cp1

0x448a,	// (0x00015504) list_highlight_pane_g4_cp1

0x4492,	// (0x0001550c) list_highlight_pane_g5_cp1

0x449a,	// (0x00015514) list_highlight_pane_g6_cp1

0x44a2,	// (0x0001551c) list_highlight_pane_g7_cp1

0x44aa,	// (0x00015524) list_highlight_pane_g8_cp1

0x44b2,	// (0x0001552c) list_highlight_pane_g9_cp1

0xcaf9,	// (0x0001db73) form_field_slider_pane_t3

0xcb07,	// (0x0001db81) form_field_slider_pane_t4

0x43ae,	// (0x00015428) slider_form_pane_ParamLimits

0x43ae,	// (0x00015428) slider_form_pane

0xec1c,	// (0x0001fc96) control_abbreviations

0xec1c,	// (0x0001fc96) control_conventions

0xec1c,	// (0x0001fc96) control_definitions

0xec1c,	// (0x0001fc96) format_table_attribute

0x4ba0,	// (0x00015c1a) bg_popup_preview_window_pane_g9

0xec1c,	// (0x0001fc96) format_table_data2

0xec1c,	// (0x0001fc96) format_table_data3

0xec1c,	// (0x0001fc96) format_table_data_example

0x0008,

0xec1c,	// (0x0001fc96) intro_purpose

0xf8f6,	// (0x00020970) bg_popup_preview_window_pane_g

0xec1c,	// (0x0001fc96) texts_category

0xec1c,	// (0x0001fc96) texts_graphics

0x2c86,	// (0x00013d00) text_digital

0x2c95,	// (0x00013d0f) text_primary

0x2ca4,	// (0x00013d1e) text_primary_small

0x2cb3,	// (0x00013d2d) text_secondary

0x2cc2,	// (0x00013d3c) text_title

0x53c5,	// (0x0001643f) bg_passive_tab_pane_g1_cp3_srt

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp3_srt

0x53ce,	// (0x00016448) bg_passive_tab_pane_g3_cp3_srt

0x12df,	// (0x00012359) bg_active_tab_pane_cp3_srt_ParamLimits

0x12df,	// (0x00012359) bg_active_tab_pane_cp3_srt

0x53d7,	// (0x00016451) tabs_4_active_pane_srt_g1

0xcf60,	// (0x0001dfda) tabs_4_active_pane_srt_t1_ParamLimits

0xcf60,	// (0x0001dfda) tabs_4_active_pane_srt_t1

0x53c5,	// (0x0001643f) bg_active_tab_pane_g1_cp3_copy1

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp3_copy1

0x53ce,	// (0x00016448) bg_active_tab_pane_g3_cp3_copy1

0x1049,	// (0x000120c3) tabs_2_long_active_pane_srt_ParamLimits

0x1049,	// (0x000120c3) tabs_2_long_active_pane_srt

0x1049,	// (0x000120c3) tabs_2_long_passive_pane_srt_ParamLimits

0x1049,	// (0x000120c3) tabs_2_long_passive_pane_srt

0x305f,	// (0x000140d9) bg_passive_tab_pane_cp4_srt_ParamLimits

0x305f,	// (0x000140d9) bg_passive_tab_pane_cp4_srt

0x5018,	// (0x00016092) bg_passive_tab_pane_g1_cp4_srt

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp4_srt

0x5021,	// (0x0001609b) bg_passive_tab_pane_g3_cp4_srt

0x1049,	// (0x000120c3) bg_active_tab_pane_cp4_srt_ParamLimits

0x1049,	// (0x000120c3) bg_active_tab_pane_cp4_srt

0xcd14,	// (0x0001dd8e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcd14,	// (0x0001dd8e) tabs_2_long_active_pane_srt_t1

0x5018,	// (0x00016092) bg_active_tab_pane_g1_cp4_srt

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp4_srt

0x5021,	// (0x0001609b) bg_active_tab_pane_g3_cp4_srt

0x12df,	// (0x00012359) tabs_3_long_active_pane_srt_ParamLimits

0x12df,	// (0x00012359) tabs_3_long_active_pane_srt

0x12df,	// (0x00012359) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x12df,	// (0x00012359) tabs_3_long_passive_pane_cp_srt

0x12df,	// (0x00012359) tabs_3_long_passive_pane_srt_ParamLimits

0x12df,	// (0x00012359) tabs_3_long_passive_pane_srt

0x305f,	// (0x000140d9) bg_passive_tab_pane_cp5_srt_ParamLimits

0x305f,	// (0x000140d9) bg_passive_tab_pane_cp5_srt

0x29a4,	// (0x00013a1e) bg_passive_tab_pane_g1_cp5_srt

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp5_srt

0x29ad,	// (0x00013a27) bg_passive_tab_pane_g3_cp5_srt

0x1049,	// (0x000120c3) bg_active_tab_pane_cp5_srt_ParamLimits

0x1049,	// (0x000120c3) bg_active_tab_pane_cp5_srt

0xccfe,	// (0x0001dd78) tabs_3_long_active_pane_srt_t1_ParamLimits

0xccfe,	// (0x0001dd78) tabs_3_long_active_pane_srt_t1

0x29a4,	// (0x00013a1e) bg_active_tab_pane_g1_cp5_srt

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp5_srt

0x29ad,	// (0x00013a27) bg_active_tab_pane_g3_cp5_srt

0x4ff8,	// (0x00016072) navi_text_pane_srt_t1

0x4ff0,	// (0x0001606a) navi_icon_pane_srt_g1

0x2e99,	// (0x00013f13) midp_editing_number_pane_srt

0x2cd1,	// (0x00013d4b) midp_ticker_pane_srt

0x2ea1,	// (0x00013f1b) midp_ticker_pane_srt_g1

0x2ea9,	// (0x00013f23) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x000207ff) midp_ticker_pane_srt_g

0x2eb1,	// (0x00013f2b) midp_ticker_pane_srt_t1

0x4fe1,	// (0x0001605b) midp_editing_number_pane_t1_copy1

0xbdb8,	// (0x0001ce32) listscroll_midp_pane

0xbdb8,	// (0x0001ce32) midp_form_pane

0x2d47,	// (0x00013dc1) midp_info_popup_window_ParamLimits

0x2d47,	// (0x00013dc1) midp_info_popup_window

0x209f,	// (0x00013119) bg_popup_sub_pane_cp50_ParamLimits

0x209f,	// (0x00013119) bg_popup_sub_pane_cp50

0x40a8,	// (0x00015122) listscroll_midp_info_pane_ParamLimits

0x40a8,	// (0x00015122) listscroll_midp_info_pane

0x4090,	// (0x0001510a) listscroll_form_midp_pane_ParamLimits

0x4090,	// (0x0001510a) listscroll_form_midp_pane

0x409c,	// (0x00015116) scroll_bar_cp050

0xcaed,	// (0x0001db67) list_midp_pane

0x600b,	// (0x00017085) signal_pane_g2_cp

0x3faa,	// (0x00015024) listscroll_midp_info_pane_t1_ParamLimits

0x3faa,	// (0x00015024) listscroll_midp_info_pane_t1

0x3fc2,	// (0x0001503c) listscroll_midp_info_pane_t2_ParamLimits

0x3fc2,	// (0x0001503c) listscroll_midp_info_pane_t2

0x4000,	// (0x0001507a) listscroll_midp_info_pane_t3_ParamLimits

0x4000,	// (0x0001507a) listscroll_midp_info_pane_t3

0x403a,	// (0x000150b4) listscroll_midp_info_pane_t4_ParamLimits

0x403a,	// (0x000150b4) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x000208ab) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x000208ab) listscroll_midp_info_pane_t

0x2169,	// (0x000131e3) scroll_pane_cp21

0x3f44,	// (0x00014fbe) form_midp_field_choice_group_pane

0x3f4d,	// (0x00014fc7) form_midp_field_text_pane

0x3f90,	// (0x0001500a) form_midp_field_time_pane

0x3f98,	// (0x00015012) form_midp_gauge_slider_pane

0x3fa1,	// (0x0001501b) form_midp_gauge_wait_pane

0xec1c,	// (0x0001fc96) form_midp_image_pane

0xcad0,	// (0x0001db4a) list_single_midp_pane_ParamLimits

0xcad0,	// (0x0001db4a) list_single_midp_pane

0xcaa8,	// (0x0001db22) form_midp_field_text_pane_t1

0x3ced,	// (0x00014d67) input_focus_pane_cp050

0x3f13,	// (0x00014f8d) list_midp_form_text_pane

0x3eb7,	// (0x00014f31) form_midp_field_choice_group_pane_t1

0x3ec5,	// (0x00014f3f) input_focus_pane_cp051

0x3ed9,	// (0x00014f53) list_midp_choice_pane

0xec1c,	// (0x0001fc96) status_idle_pane

0x3e9b,	// (0x00014f15) form_midp_field_time_pane_t1

0xea99,	// (0x0001fb13) wait_anim_pane_g2_copy1

0x3ea9,	// (0x00014f23) form_midp_field_time_pane_t2

0x0001,

0x2df7,	// (0x00013e71) aid_navinavi_width_2_pane

0xf82c,	// (0x000208a6) form_midp_field_time_pane_t

0xec1c,	// (0x0001fc96) input_focus_pane_cp052

0xec1c,	// (0x0001fc96) bg_input_focus_pane_cp040

0x3e5b,	// (0x00014ed5) form_midp_gauge_slider_pane_t1

0x3e69,	// (0x00014ee3) form_midp_gauge_slider_pane_t2

0xca8c,	// (0x0001db06) form_midp_gauge_slider_pane_t3

0xca9a,	// (0x0001db14) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x0002089d) form_midp_gauge_slider_pane_t

0x3e93,	// (0x00014f0d) form_midp_slider_pane

0x1049,	// (0x000120c3) bg_input_focus_pane_cp041_ParamLimits

0x1049,	// (0x000120c3) bg_input_focus_pane_cp041

0x3e28,	// (0x00014ea2) form_midp_gauge_wait_pane_t1_ParamLimits

0x3e28,	// (0x00014ea2) form_midp_gauge_wait_pane_t1

0x3e3a,	// (0x00014eb4) form_midp_gauge_wait_pane_t2_ParamLimits

0x3e3a,	// (0x00014eb4) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x00020898) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x00020898) form_midp_gauge_wait_pane_t

0x3e4c,	// (0x00014ec6) form_midp_wait_pane_ParamLimits

0x3e4c,	// (0x00014ec6) form_midp_wait_pane

0x3df0,	// (0x00014e6a) form_midp_image_pane_g1

0x3df9,	// (0x00014e73) form_midp_image_pane_t1

0x3e08,	// (0x00014e82) form_midp_image_pane_t2

0x3e17,	// (0x00014e91) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x00020891) form_midp_image_pane_t

0x3dd8,	// (0x00014e52) list_single_midp_pane_g1

0x3de1,	// (0x00014e5b) list_single_midp_pane_t1

0xca75,	// (0x0001daef) list_midp_form_item_pane_ParamLimits

0xca75,	// (0x0001daef) list_midp_form_item_pane

0x2d9f,	// (0x00013e19) list_midp_form_item_pane_t1

0x2dae,	// (0x00013e28) midp_ticker_pane_g1

0x2dba,	// (0x00013e34) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x000207e5) midp_ticker_pane_g

0xbe60,	// (0x0001ceda) midp_ticker_pane_t1

0xcebf,	// (0x0001df39) midp_editing_number_pane_t1

0x5273,	// (0x000162ed) midp_editing_number_pane

0x5282,	// (0x000162fc) midp_ticker_pane

0x4fa9,	// (0x00016023) ai_message_heading_pane

0xec1c,	// (0x0001fc96) bg_popup_window_pane_cp14

0x4fb1,	// (0x0001602b) listscroll_ai_message_pane

0x4f2f,	// (0x00015fa9) ai_message_heading_pane_g1_ParamLimits

0x4f2f,	// (0x00015fa9) ai_message_heading_pane_g1

0x4f3b,	// (0x00015fb5) ai_message_heading_pane_g2_ParamLimits

0x4f3b,	// (0x00015fb5) ai_message_heading_pane_g2

0x4f49,	// (0x00015fc3) ai_message_heading_pane_g3_ParamLimits

0x4f49,	// (0x00015fc3) ai_message_heading_pane_g3

0x4f55,	// (0x00015fcf) ai_message_heading_pane_g4_ParamLimits

0x4f55,	// (0x00015fcf) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x000209d2) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x000209d2) ai_message_heading_pane_g

0x4f61,	// (0x00015fdb) ai_message_heading_pane_t1_ParamLimits

0x4f61,	// (0x00015fdb) ai_message_heading_pane_t1

0x4f7b,	// (0x00015ff5) ai_message_heading_pane_t2_ParamLimits

0x4f7b,	// (0x00015ff5) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x000209db) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x000209db) ai_message_heading_pane_t

0x4f8f,	// (0x00016009) bg_popup_heading_pane_cp1_ParamLimits

0x4f8f,	// (0x00016009) bg_popup_heading_pane_cp1

0x4f1d,	// (0x00015f97) list_ai_message_pane_ParamLimits

0x4f1d,	// (0x00015f97) list_ai_message_pane

0x2169,	// (0x000131e3) scroll_pane_cp10

0x4eb9,	// (0x00015f33) list_ai_message_pane_g1

0x4ec1,	// (0x00015f3b) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x000209af) list_ai_message_pane_g

0x4ec9,	// (0x00015f43) list_ai_message_pane_t1_ParamLimits

0x4ec9,	// (0x00015f43) list_ai_message_pane_t1

0x4ede,	// (0x00015f58) list_ai_message_pane_t2_ParamLimits

0x4ede,	// (0x00015f58) list_ai_message_pane_t2

0x4ef3,	// (0x00015f6d) list_ai_message_pane_t3_ParamLimits

0x4ef3,	// (0x00015f6d) list_ai_message_pane_t3

0x4f08,	// (0x00015f82) list_ai_message_pane_t4_ParamLimits

0x4f08,	// (0x00015f82) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x000209b4) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x000209b4) list_ai_message_pane_t

0xccd2,	// (0x0001dd4c) cell_ai_soft_ind_pane_ParamLimits

0xccd2,	// (0x0001dd4c) cell_ai_soft_ind_pane

0x2dd8,	// (0x00013e52) cell_ai_soft_ind_pane_g1_ParamLimits

0x2dd8,	// (0x00013e52) cell_ai_soft_ind_pane_g1

0xec1c,	// (0x0001fc96) grid_highlight_cp1

0x2de5,	// (0x00013e5f) text_secondary_cp56_ParamLimits

0x2de5,	// (0x00013e5f) text_secondary_cp56

0x4e77,	// (0x00015ef1) example_general_pane_ParamLimits

0x4e77,	// (0x00015ef1) example_general_pane

0x4e83,	// (0x00015efd) example_parent_pane_g1_ParamLimits

0x4e83,	// (0x00015efd) example_parent_pane_g1

0x4e8f,	// (0x00015f09) example_parent_pane_t1_ParamLimits

0x4e8f,	// (0x00015f09) example_parent_pane_t1

0xc2e0,	// (0x0001d35a) popup_preview_text_window_ParamLimits

0xc2e0,	// (0x0001d35a) popup_preview_text_window

0x2c00,	// (0x00013c7a) list_single_pane_cp2_g4

0x1395,	// (0x0001240f) bg_popup_preview_window_pane_ParamLimits

0x1395,	// (0x0001240f) bg_popup_preview_window_pane

0x4baa,	// (0x00015c24) popup_preview_text_window_t1_ParamLimits

0x4baa,	// (0x00015c24) popup_preview_text_window_t1

0x4bc8,	// (0x00015c42) popup_preview_text_window_t2_ParamLimits

0x4bc8,	// (0x00015c42) popup_preview_text_window_t2

0x4c11,	// (0x00015c8b) popup_preview_text_window_t3_ParamLimits

0x4c11,	// (0x00015c8b) popup_preview_text_window_t3

0x4c56,	// (0x00015cd0) popup_preview_text_window_t4_ParamLimits

0x4c56,	// (0x00015cd0) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x00020983) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x00020983) popup_preview_text_window_t

0x4cd4,	// (0x00015d4e) scroll_pane_cp11

0x3bd1,	// (0x00014c4b) bg_popup_preview_window_pane_g1

0x4b5e,	// (0x00015bd8) bg_popup_preview_window_pane_g2

0x4b68,	// (0x00015be2) bg_popup_preview_window_pane_g3

0x4b72,	// (0x00015bec) bg_popup_preview_window_pane_g4

0x4b7c,	// (0x00015bf6) bg_popup_preview_window_pane_g5

0x4b86,	// (0x00015c00) bg_popup_preview_window_pane_g6

0x4b8e,	// (0x00015c08) bg_popup_preview_window_pane_g7

0x4b96,	// (0x00015c10) bg_popup_preview_window_pane_g8

0xeaaf,	// (0x0001fb29) aid_popup_width_pane

0xc250,	// (0x0001d2ca) popup_midp_note_alarm_window_ParamLimits

0xc250,	// (0x0001d2ca) popup_midp_note_alarm_window

0x1e55,	// (0x00012ecf) data_form_pane_ParamLimits

0xb95d,	// (0x0001c9d7) form_field_data_pane_g1

0xb967,	// (0x0001c9e1) form_field_data_pane_t1_ParamLimits

0x1e85,	// (0x00012eff) input_focus_pane_ParamLimits

0x1e93,	// (0x00012f0d) data_form_wide_pane_ParamLimits

0x1e9f,	// (0x00012f19) form_field_data_wide_pane_g1

0x1ecb,	// (0x00012f45) form_field_data_wide_pane_t1_ParamLimits

0x165b,	// (0x000126d5) input_focus_pane_cp6_ParamLimits

0xbac1,	// (0x0001cb3b) input_popup_find_pane_g1_ParamLimits

0xbac1,	// (0x0001cb3b) input_popup_find_pane_g1

0xf010,	// (0x0002008a) aid_navi_side_left_pane

0xf025,	// (0x0002009f) aid_navi_side_right_pane

0x456d,	// (0x000155e7) bg_popup_window_pane_cp30_ParamLimits

0x456d,	// (0x000155e7) bg_popup_window_pane_cp30

0x45e7,	// (0x00015661) popup_midp_note_alarm_window_g1_ParamLimits

0x45e7,	// (0x00015661) popup_midp_note_alarm_window_g1

0x4617,	// (0x00015691) popup_midp_note_alarm_window_t1_ParamLimits

0x4617,	// (0x00015691) popup_midp_note_alarm_window_t1

0x46b8,	// (0x00015732) popup_midp_note_alarm_window_t2_ParamLimits

0x46b8,	// (0x00015732) popup_midp_note_alarm_window_t2

0x4766,	// (0x000157e0) popup_midp_note_alarm_window_t3_ParamLimits

0x4766,	// (0x000157e0) popup_midp_note_alarm_window_t3

0x4798,	// (0x00015812) popup_midp_note_alarm_window_t4_ParamLimits

0x4798,	// (0x00015812) popup_midp_note_alarm_window_t4

0x47be,	// (0x00015838) popup_midp_note_alarm_window_t5_ParamLimits

0x47be,	// (0x00015838) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x00020920) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x00020920) popup_midp_note_alarm_window_t

0x486a,	// (0x000158e4) wait_bar_pane_cp1_ParamLimits

0x486a,	// (0x000158e4) wait_bar_pane_cp1

0xec1c,	// (0x0001fc96) wait_anim_pane_copy1

0xec1c,	// (0x0001fc96) wait_border_pane_copy1

0x4252,	// (0x000152cc) wait_border_pane_g1_copy1

0x1ee5,	// (0x00012f5f) form_field_popup_pane_g1

0xb981,	// (0x0001c9fb) form_field_popup_pane_t1_ParamLimits

0x1e85,	// (0x00012eff) input_focus_pane_cp7_ParamLimits

0x1f07,	// (0x00012f81) list_form_pane_ParamLimits

0x1f13,	// (0x00012f8d) form_field_popup_wide_pane_g1

0x1f1b,	// (0x00012f95) form_field_popup_wide_pane_t1_ParamLimits

0x1e85,	// (0x00012eff) input_focus_pane_cp8_ParamLimits

0x1f30,	// (0x00012faa) list_form_wide_pane_ParamLimits

0x5452,	// (0x000164cc) aid_size_cell_graphic_pane

0xba00,	// (0x0001ca7a) data_form_pane_t1_ParamLimits

0xcea3,	// (0x0001df1d) data_form_wide_pane_t1_ParamLimits

0xc6dd,	// (0x0001d757) bg_status_flat_pane

0xb191,	// (0x0001c20b) title_pane_t1_ParamLimits

0x1011,	// (0x0001208b) title_pane_t2_ParamLimits

0x1037,	// (0x000120b1) title_pane_t3_ParamLimits

0xf573,	// (0x000205ed) title_pane_t_ParamLimits

0xbbc8,	// (0x0001cc42) level_1_signal_ParamLimits

0xbbda,	// (0x0001cc54) level_2_signal_ParamLimits

0xbbed,	// (0x0001cc67) level_3_signal_ParamLimits

0xbc00,	// (0x0001cc7a) level_4_signal_ParamLimits

0xbc13,	// (0x0001cc8d) level_5_signal_ParamLimits

0xbc26,	// (0x0001cca0) level_6_signal_ParamLimits

0xbc39,	// (0x0001ccb3) level_7_signal_ParamLimits

0xbbc8,	// (0x0001cc42) level_1_battery_ParamLimits

0xbbda,	// (0x0001cc54) level_2_battery_ParamLimits

0xbbed,	// (0x0001cc67) level_3_battery_ParamLimits

0xbc00,	// (0x0001cc7a) level_4_battery_ParamLimits

0xbc13,	// (0x0001cc8d) level_5_battery_ParamLimits

0xbc26,	// (0x0001cca0) level_6_battery_ParamLimits

0xbc39,	// (0x0001ccb3) level_7_battery_ParamLimits

0x4472,	// (0x000154ec) bg_status_flat_pane_g1

0x447a,	// (0x000154f4) bg_status_flat_pane_g2

0x4482,	// (0x000154fc) bg_status_flat_pane_g3

0x448a,	// (0x00015504) bg_status_flat_pane_g4

0x4492,	// (0x0001550c) bg_status_flat_pane_g5

0x449a,	// (0x00015514) bg_status_flat_pane_g6

0x44a2,	// (0x0001551c) bg_status_flat_pane_g7

0xb225,	// (0x0001c29f) tabs_3_active_pane_t1_ParamLimits

0xb225,	// (0x0001c29f) tabs_3_passive_pane_t1_ParamLimits

0xb23f,	// (0x0001c2b9) tabs_4_active_pane_t1_ParamLimits

0xb23f,	// (0x0001c2b9) tabs_4_1_passive_pane_t1_ParamLimits

0xbad7,	// (0x0001cb51) tabs_2_active_pane_t1_ParamLimits

0xbad7,	// (0x0001cb51) tabs_2_passive_pane_t1_ParamLimits

0x1049,	// (0x000120c3) bg_active_tab_pane_cp4_ParamLimits

0xbae9,	// (0x0001cb63) tabs_2_long_active_pane_t1_ParamLimits

0x305f,	// (0x000140d9) bg_passive_tab_pane_cp4_ParamLimits

0xf4b6,	// (0x00020530) list_single_midp_graphic_pane_t1_ParamLimits

0x1049,	// (0x000120c3) bg_active_tab_pane_cp5_ParamLimits

0xbafc,	// (0x0001cb76) tabs_3_long_active_pane_t1_ParamLimits

0x305f,	// (0x000140d9) bg_passive_tab_pane_cp5_ParamLimits

0xf4b6,	// (0x00020530) list_single_midp_graphic_pane_t1

0xc6dd,	// (0x0001d757) bg_status_flat_pane_ParamLimits

0x381c,	// (0x00014896) indicator_pane_cp2_ParamLimits

0x381c,	// (0x00014896) indicator_pane_cp2

0xc89a,	// (0x0001d914) navi_pane_srt_ParamLimits

0xc89a,	// (0x0001d914) navi_pane_srt

0x3982,	// (0x000149fc) popup_clock_digital_analogue_window_cp1

0x1143,	// (0x000121bd) indicator_pane_t1

0x2cd1,	// (0x00013d4b) copy_highlight_pane

0x2cd1,	// (0x00013d4b) cursor_graphics_pane

0x2cd1,	// (0x00013d4b) graphic_within_text_pane

0x2cd1,	// (0x00013d4b) link_highlight_pane

0x4c97,	// (0x00015d11) popup_preview_text_window_t5_ParamLimits

0x4c97,	// (0x00015d11) popup_preview_text_window_t5

0x2e01,	// (0x00013e7b) cursor_digital_pane

0x2e01,	// (0x00013e7b) cursor_primary_pane

0x2e12,	// (0x00013e8c) cursor_primary_small_pane

0x2e1a,	// (0x00013e94) cursor_secondary_pane

0x2e22,	// (0x00013e9c) cursor_title_pane

0x2e01,	// (0x00013e7b) link_highlight_digital_pane

0x2e09,	// (0x00013e83) link_highlight_primary_pane

0x2e12,	// (0x00013e8c) link_highlight_primary_small_pane

0x2e1a,	// (0x00013e94) link_highlight_secondary_pane

0x2e22,	// (0x00013e9c) link_highlight_title_pane

0x2e01,	// (0x00013e7b) copy_highlight_digital_pane

0x2e01,	// (0x00013e7b) copy_highlight_primary_pane

0x2e12,	// (0x00013e8c) copy_highlight_primary_small_pane

0x2e1a,	// (0x00013e94) copy_highlight_secondary_pane

0x2e22,	// (0x00013e9c) copy_highlight_title_pane

0x2e1a,	// (0x00013e94) graphic_text_digital_pane

0x4510,	// (0x0001558a) graphic_text_primary_pane

0x4519,	// (0x00015593) graphic_text_primary_small_pane

0x2e12,	// (0x00013e8c) graphic_text_secondary_pane

0x2e01,	// (0x00013e7b) graphic_text_title_pane

0xbe72,	// (0x0001ceec) cursor_primary_pane_g1

0x4502,	// (0x0001557c) cursor_text_primary_t1

0xcb29,	// (0x0001dba3) cursor_primary_small_pane_g1

0x44f4,	// (0x0001556e) cursor_text_primary_small_t1

0xcb1f,	// (0x0001db99) cursor_primary_small_pane_g1_copy1

0x44dc,	// (0x00015556) cursor_text_primary_small_t1_copy1

0x44ba,	// (0x00015534) cursor_text_title_t1

0xcb15,	// (0x0001db8f) cursor_title_pane_g1

0xbe72,	// (0x0001ceec) cursor_digital_pane_g1

0x2e34,	// (0x00013eae) cursor_text_digital_t1

0x2e42,	// (0x00013ebc) link_highlight_primary_pane_g1

0x4463,	// (0x000154dd) link_highlight_primary_pane_t1

0x2e42,	// (0x00013ebc) link_highlight_primary_small_pane_g1

0x2e4a,	// (0x00013ec4) link_highlight_primary_small_pane_t1

0x2e59,	// (0x00013ed3) link_highlight_secondary_pane_g1

0x2e61,	// (0x00013edb) link_highlight_secondary_pane_t1

0x43d7,	// (0x00015451) link_highlight_title_pane_g1

0x43df,	// (0x00015459) link_highlight_title_pane_t1

0x43c0,	// (0x0001543a) link_highlight_digital_pane_g1

0x43c8,	// (0x00015442) link_highlight_digital_pane_t1

0x4288,	// (0x00015302) copy_highlight_primary_pane_g1

0x429f,	// (0x00015319) copy_highlight_primary_pane_t1

0x4288,	// (0x00015302) copy_highlight_primary_small_pane_g1

0x4290,	// (0x0001530a) copy_highlight_primary_small_pane_t1

0x2e70,	// (0x00013eea) copy_highlight_secondary_pane_g1

0x2e78,	// (0x00013ef2) copy_highlight_secondary_pane_t1

0x4271,	// (0x000152eb) copy_highlight_title_pane_g1

0x4279,	// (0x000152f3) copy_highlight_title_pane_t1

0x4288,	// (0x00015302) copy_highlight_digital_pane_g1

0x5622,	// (0x0001669c) copy_highlight_digital_pane_t1

0x5576,	// (0x000165f0) graphic_text_primary_pane_g1

0x5606,	// (0x00016680) graphic_text_primary_pane_t1

0x5614,	// (0x0001668e) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x00020a4f) graphic_text_primary_pane_t

0x55e2,	// (0x0001665c) graphic_text_primary_small_pane_g1

0x55ea,	// (0x00016664) graphic_text_primary_small_pane_t1

0x55f8,	// (0x00016672) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x00020a4a) graphic_text_primary_small_pane_t

0x55be,	// (0x00016638) graphic_text_secondary_pane_g1

0x55c6,	// (0x00016640) graphic_text_secondary_pane_t1

0x55d4,	// (0x0001664e) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x00020a45) graphic_text_secondary_pane_t

0x559a,	// (0x00016614) graphic_text_title_pane_g1

0x55a2,	// (0x0001661c) graphic_text_title_pane_t1

0x55b0,	// (0x0001662a) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x00020a40) graphic_text_title_pane_t

0x5576,	// (0x000165f0) graphic_text_digital_pane_g1

0x557e,	// (0x000165f8) graphic_text_digital_pane_t1

0x558c,	// (0x00016606) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x00020a3b) graphic_text_digital_pane_t

0x1049,	// (0x000120c3) navi_icon_pane_srt_ParamLimits

0x1049,	// (0x000120c3) navi_icon_pane_srt

0xec1c,	// (0x0001fc96) navi_midp_pane_srt

0xec1c,	// (0x0001fc96) navi_navi_pane_srt

0x1049,	// (0x000120c3) navi_text_pane_srt_ParamLimits

0x1049,	// (0x000120c3) navi_text_pane_srt

0x5541,	// (0x000165bb) navi_navi_icon_text_pane_srt

0x5549,	// (0x000165c3) navi_navi_pane_srt_g1_ParamLimits

0x5549,	// (0x000165c3) navi_navi_pane_srt_g1

0x555b,	// (0x000165d5) navi_navi_pane_srt_g2_ParamLimits

0x555b,	// (0x000165d5) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x00020a36) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x00020a36) navi_navi_pane_srt_g

0x556d,	// (0x000165e7) navi_navi_tabs_pane_srt

0x5541,	// (0x000165bb) navi_navi_text_pane_srt

0x5541,	// (0x000165bb) navi_navi_volume_pane_srt

0x5532,	// (0x000165ac) navi_navi_text_pane_srt_t1

0x022b,	// (0x000112a5) navi_navi_volume_pane_srt_g1

0x0233,	// (0x000112ad) volume_small_pane_srt_ParamLimits

0x0233,	// (0x000112ad) volume_small_pane_srt

0xf2ee,	// (0x00020368) volume_small_pane_srt_g1_ParamLimits

0xf2ee,	// (0x00020368) volume_small_pane_srt_g1

0xf2fe,	// (0x00020378) volume_small_pane_srt_g2_ParamLimits

0xf2fe,	// (0x00020378) volume_small_pane_srt_g2

0xf30f,	// (0x00020389) volume_small_pane_srt_g3_ParamLimits

0xf30f,	// (0x00020389) volume_small_pane_srt_g3

0xf320,	// (0x0002039a) volume_small_pane_srt_g4_ParamLimits

0xf320,	// (0x0002039a) volume_small_pane_srt_g4

0xf331,	// (0x000203ab) volume_small_pane_srt_g5_ParamLimits

0xf331,	// (0x000203ab) volume_small_pane_srt_g5

0xf342,	// (0x000203bc) volume_small_pane_srt_g6_ParamLimits

0xf342,	// (0x000203bc) volume_small_pane_srt_g6

0xf353,	// (0x000203cd) volume_small_pane_srt_g7_ParamLimits

0xf353,	// (0x000203cd) volume_small_pane_srt_g7

0xf364,	// (0x000203de) volume_small_pane_srt_g8_ParamLimits

0xf364,	// (0x000203de) volume_small_pane_srt_g8

0xf375,	// (0x000203ef) volume_small_pane_srt_g9_ParamLimits

0xf375,	// (0x000203ef) volume_small_pane_srt_g9

0xf386,	// (0x00020400) volume_small_pane_srt_g10_ParamLimits

0xf386,	// (0x00020400) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x000207ea) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x000207ea) volume_small_pane_srt_g

0x144a,	// (0x000124c4) query_popup_data_pane_cp2

0x5518,	// (0x00016592) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5518,	// (0x00016592) navi_navi_icon_text_pane_srt_t1

0x4510,	// (0x0001558a) navi_tabs_2_long_pane_srt

0x4510,	// (0x0001558a) navi_tabs_2_pane_srt

0x4510,	// (0x0001558a) navi_tabs_3_long_pane_srt

0x4510,	// (0x0001558a) navi_tabs_3_pane_srt

0x4510,	// (0x0001558a) navi_tabs_4_pane_srt

0x020b,	// (0x00011285) tabs_2_active_pane_srt_ParamLimits

0x020b,	// (0x00011285) tabs_2_active_pane_srt

0x021b,	// (0x00011295) tabs_2_passive_pane_srt_ParamLimits

0x021b,	// (0x00011295) tabs_2_passive_pane_srt

0x3ced,	// (0x00014d67) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3ced,	// (0x00014d67) bg_passive_tab_pane_cp1_srt

0x54e4,	// (0x0001655e) bg_passive_tab_pane_g1_cp1_srt

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp1_srt

0x54ed,	// (0x00016567) bg_passive_tab_pane_g3_cp1_srt

0x12df,	// (0x00012359) bg_active_tab_pane_cp1_srt_ParamLimits

0x12df,	// (0x00012359) bg_active_tab_pane_cp1_srt

0x54f6,	// (0x00016570) tabs_2_active_pane_srt_g1

0xcfe0,	// (0x0001e05a) tabs_2_active_pane_srt_t1_ParamLimits

0xcfe0,	// (0x0001e05a) tabs_2_active_pane_srt_t1

0x54e4,	// (0x0001655e) bg_active_tab_pane_g1_cp1_srt

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp1_srt

0x54ed,	// (0x00016567) bg_active_tab_pane_g3_cp1_srt

0x01d8,	// (0x00011252) tabs_3_active_pane_srt_ParamLimits

0x01d8,	// (0x00011252) tabs_3_active_pane_srt

0x01e9,	// (0x00011263) tabs_3_passive_pane_cp_srt_ParamLimits

0x01e9,	// (0x00011263) tabs_3_passive_pane_cp_srt

0x01fa,	// (0x00011274) tabs_3_passive_pane_srt_ParamLimits

0x01fa,	// (0x00011274) tabs_3_passive_pane_srt

0x3ced,	// (0x00014d67) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3ced,	// (0x00014d67) bg_passive_tab_pane_cp2_srt

0x2e87,	// (0x00013f01) bg_passive_tab_pane_g1_cp2_srt

0x291a,	// (0x00013994) bg_passive_tab_pane_g2_cp2_srt

0x2e90,	// (0x00013f0a) bg_passive_tab_pane_g3_cp2_srt

0x12df,	// (0x00012359) bg_active_tab_pane_cp2_srt_ParamLimits

0x12df,	// (0x00012359) bg_active_tab_pane_cp2_srt

0x54ca,	// (0x00016544) tabs_3_active_pane_srt_g1

0xcfca,	// (0x0001e044) tabs_3_active_pane_srt_t1_ParamLimits

0xcfca,	// (0x0001e044) tabs_3_active_pane_srt_t1

0x2e87,	// (0x00013f01) bg_active_tab_pane_g1_cp2_srt

0x291a,	// (0x00013994) bg_active_tab_pane_g2_cp2_srt

0x2e90,	// (0x00013f0a) bg_active_tab_pane_g3_cp2_srt

0x0190,	// (0x0001120a) tabs_4_active_pane_srt_ParamLimits

0x0190,	// (0x0001120a) tabs_4_active_pane_srt

0x01a2,	// (0x0001121c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x01a2,	// (0x0001121c) tabs_4_passive_pane_cp2_srt

0x2fe5,	// (0x0001405f) aid_size_cell_toolbar

0x508b,	// (0x00016105) main_idle_act_pane_ParamLimits

0x322c,	// (0x000142a6) popup_large_graphic_colour_window_ParamLimits

0xc5a6,	// (0x0001d620) popup_toolbar_window_ParamLimits

0xc5a6,	// (0x0001d620) popup_toolbar_window

0x52b8,	// (0x00016332) list_single_graphic_2heading_pane_ParamLimits

0x52b8,	// (0x00016332) list_single_graphic_2heading_pane

0x239a,	// (0x00013414) aid_size_cell_apps_grid_lsc_pane

0x23ac,	// (0x00013426) aid_size_cell_apps_grid_prt_pane

0x305f,	// (0x000140d9) bg_wml_button_pane_cp1_ParamLimits

0x305f,	// (0x000140d9) bg_wml_button_pane_cp1

0xcaa8,	// (0x0001db22) form_midp_field_text_pane_t1_ParamLimits

0x3ced,	// (0x00014d67) input_focus_pane_cp050_ParamLimits

0x3f13,	// (0x00014f8d) list_midp_form_text_pane_ParamLimits

0x3ec5,	// (0x00014f3f) input_focus_pane_cp051_ParamLimits

0x3ed9,	// (0x00014f53) list_midp_choice_pane_ParamLimits

0xca5f,	// (0x0001dad9) list_single_2graphic_pane_cp3_ParamLimits

0xca5f,	// (0x0001dad9) list_single_2graphic_pane_cp3

0x638a,	// (0x00017404) list_single_midp_graphic_pane_ParamLimits

0x638a,	// (0x00017404) list_single_midp_graphic_pane

0xf3cb,	// (0x00020445) list_single_graphic_2heading_pane_g1_ParamLimits

0xf3cb,	// (0x00020445) list_single_graphic_2heading_pane_g1

0xf3d7,	// (0x00020451) list_single_graphic_2heading_pane_g4_ParamLimits

0xf3d7,	// (0x00020451) list_single_graphic_2heading_pane_g4

0xf3e3,	// (0x0002045d) list_single_graphic_2heading_pane_g5_ParamLimits

0xf3e3,	// (0x0002045d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0002083d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0002083d) list_single_graphic_2heading_pane_g

0xf3ef,	// (0x00020469) list_single_graphic_2heading_pane_t1_ParamLimits

0xf3ef,	// (0x00020469) list_single_graphic_2heading_pane_t1

0xf403,	// (0x0002047d) list_single_graphic_2heading_pane_t2_ParamLimits

0xf403,	// (0x0002047d) list_single_graphic_2heading_pane_t2

0xf41f,	// (0x00020499) list_single_graphic_2heading_pane_t3_ParamLimits

0xf41f,	// (0x00020499) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x00020844) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x00020844) list_single_graphic_2heading_pane_t

0x3ae1,	// (0x00014b5b) bg_popup_sub_pane_cp2

0x3b0b,	// (0x00014b85) grid_toobar_pane

0xf437,	// (0x000204b1) cell_toolbar_pane_ParamLimits

0xf437,	// (0x000204b1) cell_toolbar_pane

0x3b75,	// (0x00014bef) cell_toolbar_pane_g1_ParamLimits

0x3b75,	// (0x00014bef) cell_toolbar_pane_g1

0x3b89,	// (0x00014c03) cell_toolbar_pane_g2_ParamLimits

0x3b89,	// (0x00014c03) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x00020852) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x00020852) cell_toolbar_pane_g

0x3bab,	// (0x00014c25) grid_highlight_pane_cp2_ParamLimits

0x3bab,	// (0x00014c25) grid_highlight_pane_cp2

0x3bc5,	// (0x00014c3f) toolbar_button_pane

0x3bd1,	// (0x00014c4b) toolbar_button_pane_g1

0x3bd9,	// (0x00014c53) toolbar_button_pane_g2

0x3be1,	// (0x00014c5b) toolbar_button_pane_g3

0x3be9,	// (0x00014c63) toolbar_button_pane_g4

0x3bf1,	// (0x00014c6b) toolbar_button_pane_g5

0x3bf9,	// (0x00014c73) toolbar_button_pane_g6

0x3c01,	// (0x00014c7b) toolbar_button_pane_g7

0x3c09,	// (0x00014c83) toolbar_button_pane_g8

0x3c11,	// (0x00014c8b) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x00020857) toolbar_button_pane_g

0xf46f,	// (0x000204e9) list_single_2graphic_pane_g1_cp3_ParamLimits

0xf46f,	// (0x000204e9) list_single_2graphic_pane_g1_cp3

0xaaf1,	// (0x0001bb6b) list_single_2graphic_pane_g2_cp3_ParamLimits

0xaaf1,	// (0x0001bb6b) list_single_2graphic_pane_g2_cp3

0xf47b,	// (0x000204f5) list_single_2graphic_pane_g3_cp3

0xf483,	// (0x000204fd) list_single_2graphic_pane_g4_cp3_ParamLimits

0xf483,	// (0x000204fd) list_single_2graphic_pane_g4_cp3

0xf48f,	// (0x00020509) list_single_2graphic_pane_t1_cp3_ParamLimits

0xf48f,	// (0x00020509) list_single_2graphic_pane_t1_cp3

0xf4aa,	// (0x00020524) list_single_midp_graphic_pane_g2_ParamLimits

0xf4aa,	// (0x00020524) list_single_midp_graphic_pane_g2

0x2fed,	// (0x00014067) aid_zoom_text_primary

0x2ff5,	// (0x0001406f) aid_zoom_text_secondary

0x2f44,	// (0x00013fbe) status_small_pane_g7_ParamLimits

0x2f44,	// (0x00013fbe) status_small_pane_g7

0x2f67,	// (0x00013fe1) status_small_pane_t1_ParamLimits

0xb16d,	// (0x0001c1e7) title_pane_g2

0x0003,

0xf56a,	// (0x000205e4) title_pane_g

0xb405,	// (0x0001c47f) aid_size_cell_colour_1_pane_ParamLimits

0xb405,	// (0x0001c47f) aid_size_cell_colour_1_pane

0xb419,	// (0x0001c493) aid_size_cell_colour_2_pane_ParamLimits

0xb419,	// (0x0001c493) aid_size_cell_colour_2_pane

0xb42d,	// (0x0001c4a7) aid_size_cell_colour_3_pane_ParamLimits

0xb42d,	// (0x0001c4a7) aid_size_cell_colour_3_pane

0xb441,	// (0x0001c4bb) aid_size_cell_colour_4_pane_ParamLimits

0xb441,	// (0x0001c4bb) aid_size_cell_colour_4_pane

0xef4c,	// (0x0001ffc6) title_pane_stacon_g1_ParamLimits

0xef4c,	// (0x0001ffc6) title_pane_stacon_g1

0x42f6,	// (0x00015370) popup_note_wait_window_g3_ParamLimits

0x42f6,	// (0x00015370) popup_note_wait_window_g3

0x436d,	// (0x000153e7) popup_note_wait_window_t5_ParamLimits

0x436d,	// (0x000153e7) popup_note_wait_window_t5

0xec1c,	// (0x0001fc96) main_feb_china_hwr_fs_writing_pane

0xbf41,	// (0x0001cfbb) popup_feb_china_hwr_fs_window_ParamLimits

0xbf41,	// (0x0001cfbb) popup_feb_china_hwr_fs_window

0xab02,	// (0x0001bb7c) aid_size_cell_hwr_fs_ParamLimits

0xab02,	// (0x0001bb7c) aid_size_cell_hwr_fs

0x3ced,	// (0x00014d67) bg_popup_sub_pane_cp3_ParamLimits

0x3ced,	// (0x00014d67) bg_popup_sub_pane_cp3

0xab17,	// (0x0001bb91) grid_hwr_fs_pane_ParamLimits

0xab17,	// (0x0001bb91) grid_hwr_fs_pane

0xf4cc,	// (0x00020546) linegrid_hwr_fs_pane_ParamLimits

0xf4cc,	// (0x00020546) linegrid_hwr_fs_pane

0xab2f,	// (0x0001bba9) cell_hwr_fs_pane_ParamLimits

0xab2f,	// (0x0001bba9) cell_hwr_fs_pane

0x3cf9,	// (0x00014d73) linegrid_hwr_fs_pane_g1_ParamLimits

0x3cf9,	// (0x00014d73) linegrid_hwr_fs_pane_g1

0xca33,	// (0x0001daad) linegrid_hwr_fs_pane_g2_ParamLimits

0xca33,	// (0x0001daad) linegrid_hwr_fs_pane_g2

0x3d17,	// (0x00014d91) linegrid_hwr_fs_pane_g3_ParamLimits

0x3d17,	// (0x00014d91) linegrid_hwr_fs_pane_g3

0xf4dc,	// (0x00020556) linegrid_hwr_fs_pane_g4_ParamLimits

0xf4dc,	// (0x00020556) linegrid_hwr_fs_pane_g4

0xf4fa,	// (0x00020574) linegrid_hwr_fs_pane_g5_ParamLimits

0xf4fa,	// (0x00020574) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x0002087d) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x0002087d) linegrid_hwr_fs_pane_g

0x3d23,	// (0x00014d9d) cell_hwr_fs_pane_g1_ParamLimits

0x3d23,	// (0x00014d9d) cell_hwr_fs_pane_g1

0x3a18,	// (0x00014a92) cell_hwr_fs_pane_g2_ParamLimits

0x3a18,	// (0x00014a92) cell_hwr_fs_pane_g2

0xca45,	// (0x0001dabf) cell_hwr_fs_pane_g3_ParamLimits

0xca45,	// (0x0001dabf) cell_hwr_fs_pane_g3

0xca52,	// (0x0001dacc) cell_hwr_fs_pane_g4_ParamLimits

0xca52,	// (0x0001dacc) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x00020888) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x00020888) cell_hwr_fs_pane_g

0xab55,	// (0x0001bbcf) cell_hwr_fs_pane_t1

0xec1c,	// (0x0001fc96) grid_highlight_pane_cp6

0xec1c,	// (0x0001fc96) main_idle_act2_pane

0x2150,	// (0x000131ca) aid_inside_area_popup_secondary

0xcb49,	// (0x0001dbc3) aid_inside_area_window_primary_ParamLimits

0xcb49,	// (0x0001dbc3) aid_inside_area_window_primary

0x5631,	// (0x000166ab) ai2_news_ticker_pane

0x5639,	// (0x000166b3) aid_size_cell_ai1_link_ParamLimits

0x5639,	// (0x000166b3) aid_size_cell_ai1_link

0x5653,	// (0x000166cd) popup_ai2_data_window_ParamLimits

0x5653,	// (0x000166cd) popup_ai2_data_window

0x5671,	// (0x000166eb) popup_ai2_link_window_ParamLimits

0x5671,	// (0x000166eb) popup_ai2_link_window

0x3ced,	// (0x00014d67) bg_popup_sub_pane_cp4_ParamLimits

0x3ced,	// (0x00014d67) bg_popup_sub_pane_cp4

0x5687,	// (0x00016701) grid_ai2_link_pane_ParamLimits

0x5687,	// (0x00016701) grid_ai2_link_pane

0x569e,	// (0x00016718) popup_ai2_link_window_g1_ParamLimits

0x569e,	// (0x00016718) popup_ai2_link_window_g1

0x56aa,	// (0x00016724) popup_ai2_link_window_g2_ParamLimits

0x56aa,	// (0x00016724) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x00020a54) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x00020a54) popup_ai2_link_window_g

0x56bb,	// (0x00016735) ai2_mp_button_pane

0x56c3,	// (0x0001673d) ai2_mp_volume_pane

0x3ec5,	// (0x00014f3f) bg_popup_sub_pane_cp5_ParamLimits

0x3ec5,	// (0x00014f3f) bg_popup_sub_pane_cp5

0x56cb,	// (0x00016745) heading_ai2_gene_pane_ParamLimits

0x56cb,	// (0x00016745) heading_ai2_gene_pane

0x56d7,	// (0x00016751) list_ai2_gene_pane_ParamLimits

0x56d7,	// (0x00016751) list_ai2_gene_pane

0x571f,	// (0x00016799) cell_ai2_link_pane_ParamLimits

0x571f,	// (0x00016799) cell_ai2_link_pane

0x5735,	// (0x000167af) cell_ai2_link_pane_g1

0xec1c,	// (0x0001fc96) grid_highlight_pane_cp7

0x0248,	// (0x000112c2) ai2_mp_volume_pane_g1

0x5808,	// (0x00016882) ai2_mp_volume_pane_g2

0x577d,	// (0x000167f7) list_ai2_gene_pane_t1

0x5810,	// (0x0001688a) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x00020a6d) ai2_mp_volume_pane_g

0x0250,	// (0x000112ca) volume_small_pane_cp3

0x5818,	// (0x00016892) aid_size_cell_ai2_button

0x5820,	// (0x0001689a) grid_ai2_button_pane

0x5829,	// (0x000168a3) cell_ai2_button_pane_ParamLimits

0x5829,	// (0x000168a3) cell_ai2_button_pane

0xea99,	// (0x0001fb13) cell_ai2_button_pane_g1

0xec1c,	// (0x0001fc96) grid_highlight_pane_cp8

0x57c8,	// (0x00016842) ai2_gene_pane_t1_ParamLimits

0x57c8,	// (0x00016842) ai2_gene_pane_t1

0xbea3,	// (0x0001cf1d) aid_height_parent_landscape

0xcd2b,	// (0x0001dda5) aid_height_set_list

0x508b,	// (0x00016105) aid_size_parent

0x5452,	// (0x000164cc) aid_size_cell_graphic_pane_ParamLimits

0x56e7,	// (0x00016761) popup_ai2_data_window_g1_ParamLimits

0x56e7,	// (0x00016761) popup_ai2_data_window_g1

0x56f3,	// (0x0001676d) ai2_news_ticker_pane_g1

0x56fb,	// (0x00016775) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x00020a59) ai2_news_ticker_pane_g

0x5703,	// (0x0001677d) ai2_news_ticker_pane_t1

0x5711,	// (0x0001678b) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x00020a5e) ai2_news_ticker_pane_t

0x573e,	// (0x000167b8) heading_ai2_gene_pane_g1

0x5746,	// (0x000167c0) heading_ai2_gene_pane_t1_ParamLimits

0x5746,	// (0x000167c0) heading_ai2_gene_pane_t1

0x575b,	// (0x000167d5) list_highlight_pane_cp6

0x5763,	// (0x000167dd) ai2_gene_pane_ParamLimits

0x5763,	// (0x000167dd) ai2_gene_pane

0x578b,	// (0x00016805) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x00020a63) list_ai2_gene_pane_t

0x5799,	// (0x00016813) list_highlight_pane_cp8_ParamLimits

0x5799,	// (0x00016813) list_highlight_pane_cp8

0x57aa,	// (0x00016824) ai2_gene_pane_g1_ParamLimits

0x57aa,	// (0x00016824) ai2_gene_pane_g1

0x57bc,	// (0x00016836) ai2_gene_pane_g2_ParamLimits

0x57bc,	// (0x00016836) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x00020a68) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x00020a68) ai2_gene_pane_g

0x1880,	// (0x000128fa) scroll_pane_cp12

0xaab0,	// (0x0001bb2a) control_pane_t3_ParamLimits

0xaab0,	// (0x0001bb2a) control_pane_t3

0x2f58,	// (0x00013fd2) status_small_pane_g8_ParamLimits

0x2f58,	// (0x00013fd2) status_small_pane_g8

0xbfe3,	// (0x0001d05d) popup_find_window_ParamLimits

0xc290,	// (0x0001d30a) popup_note_image_window_ParamLimits

0x3b47,	// (0x00014bc1) list_double2_graphic_pane_vc_g1_ParamLimits

0x3b47,	// (0x00014bc1) list_double2_graphic_pane_vc_g1

0x2c42,	// (0x00013cbc) list_double2_graphic_pane_vc_g2_ParamLimits

0x2c42,	// (0x00013cbc) list_double2_graphic_pane_vc_g2

0x3b53,	// (0x00014bcd) list_double2_graphic_pane_vc_g3_ParamLimits

0x3b53,	// (0x00014bcd) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x0002084b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002084b) list_double2_graphic_pane_vc_g

0x3b5f,	// (0x00014bd9) list_double2_graphic_pane_vc_t1_ParamLimits

0x3b5f,	// (0x00014bd9) list_double2_graphic_pane_vc_t1

0x2c42,	// (0x00013cbc) list_single_heading_pane_vc_g1_ParamLimits

0x2c42,	// (0x00013cbc) list_single_heading_pane_vc_g1

0x3b53,	// (0x00014bcd) list_single_heading_pane_vc_g2_ParamLimits

0x3b53,	// (0x00014bcd) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002065e) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002065e) list_single_heading_pane_vc_g

0x3c19,	// (0x00014c93) list_single_heading_pane_vc_t1_ParamLimits

0x3c19,	// (0x00014c93) list_single_heading_pane_vc_t1

0x3c2f,	// (0x00014ca9) list_single_heading_pane_vc_t2_ParamLimits

0x3c2f,	// (0x00014ca9) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x0002086c) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x0002086c) list_single_heading_pane_vc_t

0x3c43,	// (0x00014cbd) list_setting_number_pane_vc_g1_ParamLimits

0x3c43,	// (0x00014cbd) list_setting_number_pane_vc_g1

0x3c4f,	// (0x00014cc9) list_setting_number_pane_vc_g2_ParamLimits

0x3c4f,	// (0x00014cc9) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x00020871) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x00020871) list_setting_number_pane_vc_g

0x3c5b,	// (0x00014cd5) list_setting_number_pane_vc_t1_ParamLimits

0x3c5b,	// (0x00014cd5) list_setting_number_pane_vc_t1

0x3c6f,	// (0x00014ce9) list_setting_number_pane_vc_t2_ParamLimits

0x3c6f,	// (0x00014ce9) list_setting_number_pane_vc_t2

0x3c8b,	// (0x00014d05) list_setting_number_pane_vc_t3_ParamLimits

0x3c8b,	// (0x00014d05) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x00020876) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x00020876) list_setting_number_pane_vc_t

0x3cb3,	// (0x00014d2d) set_value_pane_vc_ParamLimits

0x3cb3,	// (0x00014d2d) set_value_pane_vc

0x52b8,	// (0x00016332) list_double2_graphic_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double2_graphic_pane_vc

0x52b8,	// (0x00016332) list_double2_large_graphic_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double2_large_graphic_pane_vc

0x52b8,	// (0x00016332) list_double2_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double2_pane_vc

0x52b8,	// (0x00016332) list_double_graphic_heading_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double_graphic_heading_pane_vc

0x52b8,	// (0x00016332) list_double_graphic_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double_graphic_pane_vc

0x52b8,	// (0x00016332) list_double_heading_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double_heading_pane_vc

0x52b8,	// (0x00016332) list_double_large_graphic_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double_large_graphic_pane_vc

0x52b8,	// (0x00016332) list_double_number_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double_number_pane_vc

0x52b8,	// (0x00016332) list_double_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double_pane_vc

0x52b8,	// (0x00016332) list_double_time_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_double_time_pane_vc

0x52b8,	// (0x00016332) list_setting_number_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_setting_number_pane_vc

0x52b8,	// (0x00016332) list_setting_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_setting_pane_vc

0x52b8,	// (0x00016332) list_single_graphic_heading_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_single_graphic_heading_pane_vc

0x52b8,	// (0x00016332) list_single_heading_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_single_heading_pane_vc

0x52b8,	// (0x00016332) list_single_number_heading_pane_vc_ParamLimits

0x52b8,	// (0x00016332) list_single_number_heading_pane_vc

0x3b47,	// (0x00014bc1) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3b47,	// (0x00014bc1) list_double_graphic_heading_pane_vc_g1

0x585c,	// (0x000168d6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x585c,	// (0x000168d6) list_double_graphic_heading_pane_vc_g2

0x5868,	// (0x000168e2) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x5868,	// (0x000168e2) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x00020a74) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x00020a74) list_double_graphic_heading_pane_vc_g

0x5874,	// (0x000168ee) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x5874,	// (0x000168ee) list_double_graphic_heading_pane_vc_t1

0x3c19,	// (0x00014c93) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3c19,	// (0x00014c93) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x00020a7b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x00020a7b) list_double_graphic_heading_pane_vc_t

0x3c43,	// (0x00014cbd) list_setting_pane_vc_g1_ParamLimits

0x3c43,	// (0x00014cbd) list_setting_pane_vc_g1

0x3c4f,	// (0x00014cc9) list_setting_pane_vc_g2_ParamLimits

0x3c4f,	// (0x00014cc9) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x00020871) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x00020871) list_setting_pane_vc_g

0x5a91,	// (0x00016b0b) list_setting_pane_vc_t1_ParamLimits

0x5a91,	// (0x00016b0b) list_setting_pane_vc_t1

0x5aa5,	// (0x00016b1f) list_setting_pane_vc_t2_ParamLimits

0x5aa5,	// (0x00016b1f) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x00020abe) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x00020abe) list_setting_pane_vc_t

0x3cb3,	// (0x00014d2d) set_value_pane_cp_vc_ParamLimits

0x3cb3,	// (0x00014d2d) set_value_pane_cp_vc

0x2c42,	// (0x00013cbc) list_single_number_heading_pane_vc_g1_ParamLimits

0x2c42,	// (0x00013cbc) list_single_number_heading_pane_vc_g1

0x3b53,	// (0x00014bcd) list_single_number_heading_pane_vc_g2_ParamLimits

0x3b53,	// (0x00014bcd) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002065e) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002065e) list_single_number_heading_pane_vc_g

0x3c19,	// (0x00014c93) list_single_number_heading_pane_vc_t1_ParamLimits

0x3c19,	// (0x00014c93) list_single_number_heading_pane_vc_t1

0x5ac7,	// (0x00016b41) list_single_number_heading_pane_vc_t2_ParamLimits

0x5ac7,	// (0x00016b41) list_single_number_heading_pane_vc_t2

0x5adb,	// (0x00016b55) list_single_number_heading_pane_vc_t3_ParamLimits

0x5adb,	// (0x00016b55) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x00020ac3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00020ac3) list_single_number_heading_pane_vc_t

0x3b47,	// (0x00014bc1) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3b47,	// (0x00014bc1) list_single_graphic_heading_pane_vc_g1

0x2c42,	// (0x00013cbc) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x2c42,	// (0x00013cbc) list_single_graphic_heading_pane_vc_g4

0x3b53,	// (0x00014bcd) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3b53,	// (0x00014bcd) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d1,	// (0x0002084b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d1,	// (0x0002084b) list_single_graphic_heading_pane_vc_g

0x3c19,	// (0x00014c93) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3c19,	// (0x00014c93) list_single_graphic_heading_pane_vc_t1

0x5aed,	// (0x00016b67) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x5aed,	// (0x00016b67) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00020aca) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00020aca) list_single_graphic_heading_pane_vc_t

0x2c42,	// (0x00013cbc) list_double2_pane_vc_g1_ParamLimits

0x2c42,	// (0x00013cbc) list_double2_pane_vc_g1

0x3b53,	// (0x00014bcd) list_double2_pane_vc_g2_ParamLimits

0x3b53,	// (0x00014bcd) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002065e) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002065e) list_double2_pane_vc_g

0x5b01,	// (0x00016b7b) list_double2_pane_vc_t1_ParamLimits

0x5b01,	// (0x00016b7b) list_double2_pane_vc_t1

0x5b17,	// (0x00016b91) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5b17,	// (0x00016b91) list_double2_large_graphic_pane_vc_g1

0x2c42,	// (0x00013cbc) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2c42,	// (0x00013cbc) list_double2_large_graphic_pane_vc_g2

0x3b53,	// (0x00014bcd) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3b53,	// (0x00014bcd) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0002067b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0002067b) list_double2_large_graphic_pane_vc_g

0x5b23,	// (0x00016b9d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5b23,	// (0x00016b9d) list_double2_large_graphic_pane_vc_t1

0x5b39,	// (0x00016bb3) list_double_time_pane_vc_g1_ParamLimits

0x5b39,	// (0x00016bb3) list_double_time_pane_vc_g1

0x5b45,	// (0x00016bbf) list_double_time_pane_vc_g2_ParamLimits

0x5b45,	// (0x00016bbf) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x00020acf) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x00020acf) list_double_time_pane_vc_g

0x5b51,	// (0x00016bcb) list_double_time_pane_vc_t1_ParamLimits

0x5b51,	// (0x00016bcb) list_double_time_pane_vc_t1

0x5b6a,	// (0x00016be4) list_double_time_pane_vc_t2_ParamLimits

0x5b6a,	// (0x00016be4) list_double_time_pane_vc_t2

0x5b8a,	// (0x00016c04) list_double_time_pane_vc_t3_ParamLimits

0x5b8a,	// (0x00016c04) list_double_time_pane_vc_t3

0x5ba2,	// (0x00016c1c) list_double_time_pane_vc_t4_ParamLimits

0x5ba2,	// (0x00016c1c) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x00020ad4) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x00020ad4) list_double_time_pane_vc_t

0x2c42,	// (0x00013cbc) list_double_pane_vc_g1_ParamLimits

0x2c42,	// (0x00013cbc) list_double_pane_vc_g1

0x3b53,	// (0x00014bcd) list_double_pane_vc_g2_ParamLimits

0x3b53,	// (0x00014bcd) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002065e) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002065e) list_double_pane_vc_g

0x5bb6,	// (0x00016c30) list_double_pane_vc_t1_ParamLimits

0x5bb6,	// (0x00016c30) list_double_pane_vc_t1

0x5bc8,	// (0x00016c42) list_double_pane_vc_t2_ParamLimits

0x5bc8,	// (0x00016c42) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x00020add) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x00020add) list_double_pane_vc_t

0x2c42,	// (0x00013cbc) list_double_number_pane_vc_g1_ParamLimits

0x2c42,	// (0x00013cbc) list_double_number_pane_vc_g1

0x3b53,	// (0x00014bcd) list_double_number_pane_vc_g2_ParamLimits

0x3b53,	// (0x00014bcd) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0002065e) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0002065e) list_double_number_pane_vc_g

0x5be0,	// (0x00016c5a) list_double_number_pane_vc_t1_ParamLimits

0x5be0,	// (0x00016c5a) list_double_number_pane_vc_t1

0x5bf4,	// (0x00016c6e) list_double_number_pane_vc_t2_ParamLimits

0x5bf4,	// (0x00016c6e) list_double_number_pane_vc_t2

0x5bc8,	// (0x00016c42) list_double_number_pane_vc_t3_ParamLimits

0x5bc8,	// (0x00016c42) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x00020ae2) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x00020ae2) list_double_number_pane_vc_t

0x5c06,	// (0x00016c80) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5c06,	// (0x00016c80) list_double_large_graphic_pane_vc_g1

0x5c12,	// (0x00016c8c) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5c12,	// (0x00016c8c) list_double_large_graphic_pane_vc_g2

0x3b53,	// (0x00014bcd) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3b53,	// (0x00014bcd) list_double_large_graphic_pane_vc_g3

0x5c21,	// (0x00016c9b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5c21,	// (0x00016c9b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x00020ae9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00020ae9) list_double_large_graphic_pane_vc_g

0x5c2d,	// (0x00016ca7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x5c2d,	// (0x00016ca7) list_double_large_graphic_pane_vc_t1

0x5c3f,	// (0x00016cb9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5c3f,	// (0x00016cb9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00020af2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00020af2) list_double_large_graphic_pane_vc_t

0x585c,	// (0x000168d6) list_double_heading_pane_vc_g1_ParamLimits

0x585c,	// (0x000168d6) list_double_heading_pane_vc_g1

0x5868,	// (0x000168e2) list_double_heading_pane_vc_g2_ParamLimits

0x5868,	// (0x000168e2) list_double_heading_pane_vc_g2

0x0001,

0xfa7d,	// (0x00020af7) list_double_heading_pane_vc_g_ParamLimits

0xfa7d,	// (0x00020af7) list_double_heading_pane_vc_g

0x5c58,	// (0x00016cd2) list_double_heading_pane_vc_t1_ParamLimits

0x5c58,	// (0x00016cd2) list_double_heading_pane_vc_t1

0x3c19,	// (0x00014c93) list_double_heading_pane_vc_t2_ParamLimits

0x3c19,	// (0x00014c93) list_double_heading_pane_vc_t2

0x0001,

0xfa82,	// (0x00020afc) list_double_heading_pane_vc_t_ParamLimits

0xfa82,	// (0x00020afc) list_double_heading_pane_vc_t

0x3b47,	// (0x00014bc1) list_double_graphic_pane_vc_g1_ParamLimits

0x3b47,	// (0x00014bc1) list_double_graphic_pane_vc_g1

0x5c6c,	// (0x00016ce6) list_double_graphic_pane_vc_g2_ParamLimits

0x5c6c,	// (0x00016ce6) list_double_graphic_pane_vc_g2

0x5c7b,	// (0x00016cf5) list_double_graphic_pane_vc_g3_ParamLimits

0x5c7b,	// (0x00016cf5) list_double_graphic_pane_vc_g3

0x0002,

0xfa87,	// (0x00020b01) list_double_graphic_pane_vc_g_ParamLimits

0xfa87,	// (0x00020b01) list_double_graphic_pane_vc_g

0x5c87,	// (0x00016d01) list_double_graphic_pane_vc_t1_ParamLimits

0x5c87,	// (0x00016d01) list_double_graphic_pane_vc_t1

0x5bc8,	// (0x00016c42) list_double_graphic_pane_vc_t2_ParamLimits

0x5bc8,	// (0x00016c42) list_double_graphic_pane_vc_t2

0x0001,

0xfa8e,	// (0x00020b08) list_double_graphic_pane_vc_t_ParamLimits

0xfa8e,	// (0x00020b08) list_double_graphic_pane_vc_t

0xeabb,	// (0x0001fb35) aid_size_cell_fastswap

0xa807,	// (0x0001b881) aid_size_cell_touch_ParamLimits

0xa807,	// (0x0001b881) aid_size_cell_touch

0xede5,	// (0x0001fe5f) popup_fast_swap_wide_window_ParamLimits

0xede5,	// (0x0001fe5f) popup_fast_swap_wide_window

0xa956,	// (0x0001b9d0) touch_pane_ParamLimits

0xa956,	// (0x0001b9d0) touch_pane

0x1d8f,	// (0x00012e09) button_value_adjust_pane_cp2

0x1d97,	// (0x00012e11) button_value_adjust_pane_cp4

0x1dbd,	// (0x00012e37) form_field_data_pane_cp2

0xb931,	// (0x0001c9ab) form_field_data_wide_pane_cp2

0x246c,	// (0x000134e6) bg_scroll_pane_ParamLimits

0xf0a8,	// (0x00020122) scroll_handle_pane_ParamLimits

0xf0bc,	// (0x00020136) scroll_sc2_down_pane_ParamLimits

0xf0bc,	// (0x00020136) scroll_sc2_down_pane

0x249d,	// (0x00013517) scroll_sc2_up_pane_ParamLimits

0x249d,	// (0x00013517) scroll_sc2_up_pane

0xd121,	// (0x0001e19b) grid_wheel_folder_pane_g1_ParamLimits

0xd121,	// (0x0001e19b) grid_wheel_folder_pane_g1

0xf286,	// (0x00020300) clock_nsta_pane_cp2_ParamLimits

0xf286,	// (0x00020300) clock_nsta_pane_cp2

0xbdb8,	// (0x0001ce32) listscroll_midp_pane_ParamLimits

0xbdc9,	// (0x0001ce43) midp_canvas_pane

0x2fd3,	// (0x0001404d) nsta_clock_indic_pane

0x3031,	// (0x000140ab) listscroll_form_pane_vc

0x304d,	// (0x000140c7) listscroll_set_pane_vc_ParamLimits

0x304d,	// (0x000140c7) listscroll_set_pane_vc

0xc72d,	// (0x0001d7a7) clock_nsta_pane

0xc757,	// (0x0001d7d1) indicator_nsta_pane

0x3ae1,	// (0x00014b5b) bg_popup_sub_pane_cp2_ParamLimits

0x3af5,	// (0x00014b6f) find_pane_cp2_ParamLimits

0x3af5,	// (0x00014b6f) find_pane_cp2

0x3b0b,	// (0x00014b85) grid_toobar_pane_ParamLimits

0x3cc1,	// (0x00014d3b) list_form_gen_pane_vc_ParamLimits

0x3cc1,	// (0x00014d3b) list_form_gen_pane_vc

0x3cd7,	// (0x00014d51) scroll_pane_cp8_vc_ParamLimits

0x3cd7,	// (0x00014d51) scroll_pane_cp8_vc

0x3d53,	// (0x00014dcd) data_form_wide_pane_vc_ParamLimits

0x3d53,	// (0x00014dcd) data_form_wide_pane_vc

0x3d5f,	// (0x00014dd9) form_field_data_wide_pane_vc_g1

0x3d67,	// (0x00014de1) form_field_data_wide_pane_vc_t1_ParamLimits

0x3d67,	// (0x00014de1) form_field_data_wide_pane_vc_t1

0x1e85,	// (0x00012eff) input_focus_pane_cp6_vc_ParamLimits

0x1e85,	// (0x00012eff) input_focus_pane_cp6_vc

0xcaed,	// (0x0001db67) list_midp_pane_ParamLimits

0x54be,	// (0x00016538) scroll_pane_cp16_ParamLimits

0x54be,	// (0x00016538) scroll_pane_cp16

0x40ca,	// (0x00015144) button_value_adjust_pane_ParamLimits

0x40ca,	// (0x00015144) button_value_adjust_pane

0xcd3c,	// (0x0001ddb6) button_value_adjust_pane_cp6_ParamLimits

0xcd3c,	// (0x0001ddb6) button_value_adjust_pane_cp6

0xce7e,	// (0x0001def8) settings_code_pane_cp_ParamLimits

0xce7e,	// (0x0001def8) settings_code_pane_cp

0xea99,	// (0x0001fb13) cell_touch_pane_g1

0xea99,	// (0x0001fb13) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x00020794) cell_touch_pane_g

0xcff6,	// (0x0001e070) cell_touch_pane_cp_ParamLimits

0xcff6,	// (0x0001e070) cell_touch_pane_cp

0xd012,	// (0x0001e08c) cell_touch_pane_ParamLimits

0xd012,	// (0x0001e08c) cell_touch_pane

0xea99,	// (0x0001fb13) scroll_sc2_down_pane_g1

0xea99,	// (0x0001fb13) scroll_sc2_up_pane_g1

0xec1c,	// (0x0001fc96) bg_set_opt_pane_cp4_vc

0x5888,	// (0x00016902) list_set_graphic_pane_vc_g1_ParamLimits

0x5888,	// (0x00016902) list_set_graphic_pane_vc_g1

0x5894,	// (0x0001690e) list_set_graphic_pane_vc_g2_ParamLimits

0x5894,	// (0x0001690e) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x00020a80) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x00020a80) list_set_graphic_pane_vc_g

0x58a0,	// (0x0001691a) text_primary_small_cp13_vc_ParamLimits

0x58a0,	// (0x0001691a) text_primary_small_cp13_vc

0x58b8,	// (0x00016932) list_set_graphic_pane_vc_ParamLimits

0x58b8,	// (0x00016932) list_set_graphic_pane_vc

0xec1c,	// (0x0001fc96) input_focus_pane_cp2_vc

0xea99,	// (0x0001fb13) setting_code_pane_vc_g1

0x58cc,	// (0x00016946) setting_code_pane_vc_t1

0x58da,	// (0x00016954) set_text_pane_vc_t1_ParamLimits

0x58da,	// (0x00016954) set_text_pane_vc_t1

0xec1c,	// (0x0001fc96) input_focus_pane_cp1_vc

0x58f8,	// (0x00016972) list_set_text_pane_vc

0xea99,	// (0x0001fb13) setting_text_pane_vc_g1

0xec1c,	// (0x0001fc96) bg_set_opt_pane_cp2_vc

0x5902,	// (0x0001697c) setting_slider_graphic_pane_vc_g1

0x590a,	// (0x00016984) setting_slider_graphic_pane_vc_t1

0x5918,	// (0x00016992) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x00020a85) setting_slider_graphic_pane_vc_t

0x5926,	// (0x000169a0) slider_set_pane_cp_vc

0x592e,	// (0x000169a8) slider_set_pane_vc_g1

0x5937,	// (0x000169b1) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x00020a8a) slider_set_pane_vc_g

0x1fc1,	// (0x0001303b) set_opt_bg_pane_g1_copy1

0x1fc9,	// (0x00013043) set_opt_bg_pane_g2_copy1

0x5963,	// (0x000169dd) set_opt_bg_pane_g3_copy1

0x1fd9,	// (0x00013053) set_opt_bg_pane_g4_copy1

0x1fe1,	// (0x0001305b) set_opt_bg_pane_g5_copy1

0x1fe9,	// (0x00013063) set_opt_bg_pane_g6_copy1

0x596d,	// (0x000169e7) set_opt_bg_pane_g7_copy1

0x5977,	// (0x000169f1) set_opt_bg_pane_g8_copy1

0x5981,	// (0x000169fb) set_opt_bg_pane_g9_copy1

0xec1c,	// (0x0001fc96) bg_set_opt_pane_cp_vc

0x598b,	// (0x00016a05) setting_slider_pane_vc_t1

0x590a,	// (0x00016984) setting_slider_pane_vc_t2

0x5918,	// (0x00016992) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x00020a99) setting_slider_pane_vc_t

0x5926,	// (0x000169a0) slider_set_pane_vc

0xf510,	// (0x0002058a) volume_set_pane_vc_g1

0xf519,	// (0x00020593) volume_set_pane_vc_g2

0xf522,	// (0x0002059c) volume_set_pane_vc_g3

0xf52b,	// (0x000205a5) volume_set_pane_vc_g4

0xf534,	// (0x000205ae) volume_set_pane_vc_g5

0xf53d,	// (0x000205b7) volume_set_pane_vc_g6

0xf546,	// (0x000205c0) volume_set_pane_vc_g7

0xf54f,	// (0x000205c9) volume_set_pane_vc_g8

0xf558,	// (0x000205d2) volume_set_pane_vc_g9

0xf561,	// (0x000205db) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x00020aa0) volume_set_pane_vc_g

0x599a,	// (0x00016a14) volume_set_pane_vc

0x59a2,	// (0x00016a1c) button_value_adjust_pane_cp1_vc

0x59ac,	// (0x00016a26) list_highlight_pane_cp2_vc

0x59b5,	// (0x00016a2f) list_set_pane_vc_ParamLimits

0x59b5,	// (0x00016a2f) list_set_pane_vc

0x5a1f,	// (0x00016a99) main_pane_set_vc_t1_ParamLimits

0x5a1f,	// (0x00016a99) main_pane_set_vc_t1

0x5a34,	// (0x00016aae) main_pane_set_vc_t2_ParamLimits

0x5a34,	// (0x00016aae) main_pane_set_vc_t2

0x5a46,	// (0x00016ac0) main_pane_set_vc_t3_ParamLimits

0x5a46,	// (0x00016ac0) main_pane_set_vc_t3

0x5a5a,	// (0x00016ad4) main_pane_set_vc_t4_ParamLimits

0x5a5a,	// (0x00016ad4) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x00020ab5) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x00020ab5) main_pane_set_vc_t

0x5a6e,	// (0x00016ae8) setting_code_pane_vc_ParamLimits

0x5a6e,	// (0x00016ae8) setting_code_pane_vc

0x5a7f,	// (0x00016af9) setting_slider_graphic_pane_vc

0x5a7f,	// (0x00016af9) setting_slider_pane_vc

0x5a7f,	// (0x00016af9) setting_text_pane_vc

0x5a7f,	// (0x00016af9) setting_volume_pane_vc

0x5a89,	// (0x00016b03) scroll_pane_cp121_vc

0x1d7d,	// (0x00012df7) set_content_pane_vc

0x5c99,	// (0x00016d13) button_value_adjust_pane_g1

0x5ca2,	// (0x00016d1c) button_value_adjust_pane_g2

0x0001,

0xfa93,	// (0x00020b0d) button_value_adjust_pane_g

0x5cab,	// (0x00016d25) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5cab,	// (0x00016d25) form_field_slider_wide_pane_vc_t1

0x5cbf,	// (0x00016d39) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5cbf,	// (0x00016d39) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa98,	// (0x00020b12) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa98,	// (0x00020b12) form_field_slider_wide_pane_vc_t

0x12df,	// (0x00012359) input_focus_pane_cp10_vc_ParamLimits

0x12df,	// (0x00012359) input_focus_pane_cp10_vc

0x5cd1,	// (0x00016d4b) slider_cont_pane_cp1_vc_ParamLimits

0x5cd1,	// (0x00016d4b) slider_cont_pane_cp1_vc

0x592e,	// (0x000169a8) slider_form_pane_g1_cp2

0x5937,	// (0x000169b1) slider_form_pane_g2_cp2

0x5cea,	// (0x00016d64) form_field_slider_pane_vc_t3

0x5cf8,	// (0x00016d72) form_field_slider_pane_vc_t4

0x5d06,	// (0x00016d80) slider_form_pane_vc_ParamLimits

0x5d06,	// (0x00016d80) slider_form_pane_vc

0x5d13,	// (0x00016d8d) form_field_slider_pane_vc_t1_ParamLimits

0x5d13,	// (0x00016d8d) form_field_slider_pane_vc_t1

0x5cbf,	// (0x00016d39) form_field_slider_pane_vc_t2_ParamLimits

0x5cbf,	// (0x00016d39) form_field_slider_pane_vc_t2

0x0001,

0xfaa8,	// (0x00020b22) form_field_slider_pane_vc_t_ParamLimits

0xfaa8,	// (0x00020b22) form_field_slider_pane_vc_t

0x12df,	// (0x00012359) input_focus_pane_cp9_vc_ParamLimits

0x12df,	// (0x00012359) input_focus_pane_cp9_vc

0x5d2f,	// (0x00016da9) slider_cont_pane_vc_ParamLimits

0x5d2f,	// (0x00016da9) slider_cont_pane_vc

0x5d41,	// (0x00016dbb) list_form_graphic_pane_cp_vc_ParamLimits

0x5d41,	// (0x00016dbb) list_form_graphic_pane_cp_vc

0x3d5f,	// (0x00014dd9) form_field_popup_wide_pane_vc_g1

0x5d56,	// (0x00016dd0) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5d56,	// (0x00016dd0) form_field_popup_wide_pane_vc_t1

0x1e85,	// (0x00012eff) input_focus_pane_cp8_vc_ParamLimits

0x1e85,	// (0x00012eff) input_focus_pane_cp8_vc

0x5d6d,	// (0x00016de7) list_form_wide_pane_vc_ParamLimits

0x5d6d,	// (0x00016de7) list_form_wide_pane_vc

0x5d79,	// (0x00016df3) list_form_graphic_pane_vc_g1

0x5d81,	// (0x00016dfb) list_form_graphic_pane_vc_t1_ParamLimits

0x5d81,	// (0x00016dfb) list_form_graphic_pane_vc_t1

0x1049,	// (0x000120c3) list_highlight_pane_cp5_vc_ParamLimits

0x1049,	// (0x000120c3) list_highlight_pane_cp5_vc

0x5d9d,	// (0x00016e17) list_form_graphic_pane_vc_ParamLimits

0x5d9d,	// (0x00016e17) list_form_graphic_pane_vc

0x3d5f,	// (0x00014dd9) form_field_popup_pane_vc_g1

0x5db3,	// (0x00016e2d) form_field_popup_pane_vc_t1_ParamLimits

0x5db3,	// (0x00016e2d) form_field_popup_pane_vc_t1

0x1e85,	// (0x00012eff) input_focus_pane_cp7_vc_ParamLimits

0x1e85,	// (0x00012eff) input_focus_pane_cp7_vc

0x5dca,	// (0x00016e44) list_form_pane_vc_ParamLimits

0x5dca,	// (0x00016e44) list_form_pane_vc

0x5dd6,	// (0x00016e50) data_form_pane_vc_t1_ParamLimits

0x5dd6,	// (0x00016e50) data_form_pane_vc_t1

0x1fc1,	// (0x0001303b) input_focus_pane_vc_g1

0x1fc9,	// (0x00013043) input_focus_pane_vc_g2

0x1fd1,	// (0x0001304b) input_focus_pane_vc_g3

0x1fd9,	// (0x00013053) input_focus_pane_vc_g4

0x1fe1,	// (0x0001305b) input_focus_pane_vc_g5

0x1fe9,	// (0x00013063) input_focus_pane_vc_g6

0x1ff1,	// (0x0001306b) input_focus_pane_vc_g7

0x1ff9,	// (0x00013073) input_focus_pane_vc_g8

0x2001,	// (0x0001307b) input_focus_pane_vc_g9

0xea99,	// (0x0001fb13) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0002071d) input_focus_pane_vc_g

0x3d53,	// (0x00014dcd) data_form_pane_vc_ParamLimits

0x3d53,	// (0x00014dcd) data_form_pane_vc

0x3d5f,	// (0x00014dd9) form_field_data_pane_vc_g1

0x5df3,	// (0x00016e6d) form_field_data_pane_vc_t1_ParamLimits

0x5df3,	// (0x00016e6d) form_field_data_pane_vc_t1

0x1e85,	// (0x00012eff) input_focus_pane_vc_ParamLimits

0x1e85,	// (0x00012eff) input_focus_pane_vc

0x5e0d,	// (0x00016e87) button_value_adjust_pane_cp3_vc

0x5e15,	// (0x00016e8f) button_value_adjust_pane_cp5_vc

0x5e1d,	// (0x00016e97) form_field_data_pane_vc_ParamLimits

0x5e1d,	// (0x00016e97) form_field_data_pane_vc

0x5e38,	// (0x00016eb2) form_field_data_pane_vc_cp2

0x5e40,	// (0x00016eba) form_field_data_wide_pane_vc_ParamLimits

0x5e40,	// (0x00016eba) form_field_data_wide_pane_vc

0x5e5a,	// (0x00016ed4) form_field_data_wide_pane_vc_cp2

0x5e62,	// (0x00016edc) form_field_popup_pane_vc_ParamLimits

0x5e62,	// (0x00016edc) form_field_popup_pane_vc

0x5e7d,	// (0x00016ef7) form_field_popup_wide_pane_vc_ParamLimits

0x5e7d,	// (0x00016ef7) form_field_popup_wide_pane_vc

0x5e97,	// (0x00016f11) form_field_slider_pane_vc_ParamLimits

0x5e97,	// (0x00016f11) form_field_slider_pane_vc

0x5eaa,	// (0x00016f24) form_field_slider_wide_pane_vc_ParamLimits

0x5eaa,	// (0x00016f24) form_field_slider_wide_pane_vc

0xd030,	// (0x0001e0aa) grid_touch_1_pane_ParamLimits

0xd030,	// (0x0001e0aa) grid_touch_1_pane

0xd044,	// (0x0001e0be) grid_touch_2_pane_ParamLimits

0xd044,	// (0x0001e0be) grid_touch_2_pane

0x5f81,	// (0x00016ffb) touch_pane_g1_ParamLimits

0x5f81,	// (0x00016ffb) touch_pane_g1

0x5ee3,	// (0x00016f5d) cell_app_pane_cp_wide_ParamLimits

0x5ee3,	// (0x00016f5d) cell_app_pane_cp_wide

0x5ef4,	// (0x00016f6e) grid_popup_fast_wide_pane_ParamLimits

0x5ef4,	// (0x00016f6e) grid_popup_fast_wide_pane

0x5f08,	// (0x00016f82) scroll_pane_cp19_ParamLimits

0x5f08,	// (0x00016f82) scroll_pane_cp19

0xec1c,	// (0x0001fc96) bg_popup_window_pane_cp20

0x5f1c,	// (0x00016f96) listscroll_popup_fast_wide_pane

0x21bd,	// (0x00013237) grid_indicator_nsta_pane

0x5f24,	// (0x00016f9e) clock_nsta_pane_g1

0x5f2d,	// (0x00016fa7) clock_nsta_pane_t1

0xd070,	// (0x0001e0ea) cell_indicator_nsta_pane_ParamLimits

0xd070,	// (0x0001e0ea) cell_indicator_nsta_pane

0x5f81,	// (0x00016ffb) cell_indicator_nsta_pane_g1

0xd08d,	// (0x0001e107) cell_indicator_nsta_pane_g2

0x0001,

0xfab2,	// (0x00020b2c) cell_indicator_nsta_pane_g

0x5fa4,	// (0x0001701e) clock_nsta_pane_cp

0x5fac,	// (0x00017026) indicator_nsta_pane_cp

0x5fb4,	// (0x0001702e) nsta_clock_indic_pane_g1

0x112f,	// (0x000121a9) grid_indicator_pane

0x258f,	// (0x00013609) scroll_pane_cp29

0xf1d2,	// (0x0002024c) indicator_nsta_pane_cp2_ParamLimits

0xf1d2,	// (0x0002024c) indicator_nsta_pane_cp2

0x1049,	// (0x000120c3) main_apps_wheel_pane

0x3f4d,	// (0x00014fc7) form_midp_field_text_pane_ParamLimits

0x409c,	// (0x00015116) scroll_bar_cp050_ParamLimits

0x601d,	// (0x00017097) cell_indicator_pane_ParamLimits

0x601d,	// (0x00017097) cell_indicator_pane

0x6035,	// (0x000170af) cell_indicator_pane_g1

0xd0a3,	// (0x0001e11d) grid_wheel_folder_pane_ParamLimits

0xd0a3,	// (0x0001e11d) grid_wheel_folder_pane

0xd0b1,	// (0x0001e12b) list_wheel_apps_pane_ParamLimits

0xd0b1,	// (0x0001e12b) list_wheel_apps_pane

0xd0bf,	// (0x0001e139) main_apps_wheel_pane_g1_ParamLimits

0xd0bf,	// (0x0001e139) main_apps_wheel_pane_g1

0xd0cf,	// (0x0001e149) main_apps_wheel_pane_g2_ParamLimits

0xd0cf,	// (0x0001e149) main_apps_wheel_pane_g2

0x0001,

0xface,	// (0x00020b48) main_apps_wheel_pane_g_ParamLimits

0xface,	// (0x00020b48) main_apps_wheel_pane_g

0xd0df,	// (0x0001e159) main_apps_wheel_pane_t1_ParamLimits

0xd0df,	// (0x0001e159) main_apps_wheel_pane_t1

0xd0f7,	// (0x0001e171) list_wheel_apps_pane_g1

0xd0ff,	// (0x0001e179) list_wheel_apps_pane_g2

0xd107,	// (0x0001e181) list_wheel_apps_pane_g3

0xd10f,	// (0x0001e189) list_wheel_apps_pane_g4

0xd117,	// (0x0001e191) list_wheel_apps_pane_g5

0x0004,

0xfad3,	// (0x00020b4d) list_wheel_apps_pane_g

0x2b4d,	// (0x00013bc7) navi_icon_text_pane

0xc5fe,	// (0x0001d678) aid_fill_nsta

0xd134,	// (0x0001e1ae) navi_icon_text_pane_g1

0xd140,	// (0x0001e1ba) navi_icon_text_pane_t1

0xbda0,	// (0x0001ce1a) list_set_graphic_pane_t1_ParamLimits

0xbda0,	// (0x0001ce1a) list_set_graphic_pane_t1

0x47ed,	// (0x00015867) popup_midp_note_alarm_window_t6_ParamLimits

0x47ed,	// (0x00015867) popup_midp_note_alarm_window_t6

0x47ff,	// (0x00015879) popup_midp_note_alarm_window_t7_ParamLimits

0x47ff,	// (0x00015879) popup_midp_note_alarm_window_t7

0x4811,	// (0x0001588b) popup_midp_note_alarm_window_t8_ParamLimits

0x4811,	// (0x0001588b) popup_midp_note_alarm_window_t8

0x4823,	// (0x0001589d) popup_midp_note_alarm_window_t9_ParamLimits

0x4823,	// (0x0001589d) popup_midp_note_alarm_window_t9

0x4835,	// (0x000158af) popup_midp_note_alarm_window_t10_ParamLimits

0x4835,	// (0x000158af) popup_midp_note_alarm_window_t10

0x4847,	// (0x000158c1) popup_midp_note_alarm_window_t11_ParamLimits

0x4847,	// (0x000158c1) popup_midp_note_alarm_window_t11

0x4859,	// (0x000158d3) scroll_pane_cp17_ParamLimits

0x4859,	// (0x000158d3) scroll_pane_cp17

0xf510,	// (0x0002058a) volume_small_pane_cp_g1

0x0259,	// (0x000112d3) volume_small_pane_cp_g2

0x0262,	// (0x000112dc) volume_small_pane_cp_g3

0x026b,	// (0x000112e5) volume_small_pane_cp_g4

0x0274,	// (0x000112ee) volume_small_pane_cp_g5

0x027d,	// (0x000112f7) volume_small_pane_cp_g6

0x0286,	// (0x00011300) volume_small_pane_cp_g7

0x028f,	// (0x00011309) volume_small_pane_cp_g8

0x0298,	// (0x00011312) volume_small_pane_cp_g9

0x02a1,	// (0x0001131b) volume_small_pane_cp_g10

0x2dae,	// (0x00013e28) midp_ticker_pane_g1_ParamLimits

0x2dba,	// (0x00013e34) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x000207e5) midp_ticker_pane_g_ParamLimits

0xbe60,	// (0x0001ceda) midp_ticker_pane_t1_ParamLimits

0xc61e,	// (0x0001d698) aid_fill_nsta_2

0x4088,	// (0x00015102) list_form2_midp_pane

0x5273,	// (0x000162ed) midp_editing_number_pane_ParamLimits

0x5282,	// (0x000162fc) midp_ticker_pane_ParamLimits

0x612e,	// (0x000171a8) form2_midp_field_pane

0x6152,	// (0x000171cc) scroll_pane_cp51

0x6172,	// (0x000171ec) form2_midp_button_pane_ParamLimits

0x6172,	// (0x000171ec) form2_midp_button_pane

0x6184,	// (0x000171fe) form2_midp_content_pane_ParamLimits

0x6184,	// (0x000171fe) form2_midp_content_pane

0x619e,	// (0x00017218) form2_midp_field_choice_group_pane

0x61a6,	// (0x00017220) form2_midp_field_pane_g1

0x61ae,	// (0x00017228) form2_midp_field_pane_g2

0x61b6,	// (0x00017230) form2_midp_field_pane_g3

0x61be,	// (0x00017238) form2_midp_field_pane_g4

0x0003,

0xfaf8,	// (0x00020b72) form2_midp_field_pane_g

0x61c6,	// (0x00017240) form2_midp_gauge_slider_pane

0x61ce,	// (0x00017248) form2_midp_gauge_wait_pane

0x61d6,	// (0x00017250) form2_midp_image_pane_ParamLimits

0x61d6,	// (0x00017250) form2_midp_image_pane

0x61f1,	// (0x0001726b) form2_midp_label_pane_ParamLimits

0x61f1,	// (0x0001726b) form2_midp_label_pane

0xd16e,	// (0x0001e1e8) form2_midp_label_pane_cp_ParamLimits

0xd16e,	// (0x0001e1e8) form2_midp_label_pane_cp

0x6231,	// (0x000172ab) form2_midp_string_pane_ParamLimits

0x6231,	// (0x000172ab) form2_midp_string_pane

0xd18f,	// (0x0001e209) form2_midp_text_pane_ParamLimits

0xd18f,	// (0x0001e209) form2_midp_text_pane

0x6264,	// (0x000172de) form2_midp_time_pane

0x6274,	// (0x000172ee) input_focus_pane_cp51_ParamLimits

0x6274,	// (0x000172ee) input_focus_pane_cp51

0x628c,	// (0x00017306) form2_midp_label_pane_t1_ParamLimits

0x628c,	// (0x00017306) form2_midp_label_pane_t1

0xd1b0,	// (0x0001e22a) form2_mdip_text_pane_t1_ParamLimits

0xd1b0,	// (0x0001e22a) form2_mdip_text_pane_t1

0x62f4,	// (0x0001736e) form2_midp_time_pane_t1

0x630f,	// (0x00017389) form2_midp_gauge_slider_pane_t1

0xd1cf,	// (0x0001e249) form2_midp_gauge_slider_pane_t2

0xd1e1,	// (0x0001e25b) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb01,	// (0x00020b7b) form2_midp_gauge_slider_pane_t

0x6345,	// (0x000173bf) form2_midp_slider_pane

0x6351,	// (0x000173cb) form2_midp_gauge_wait_pane_t1

0x635f,	// (0x000173d9) form2_midp_wait_pane_ParamLimits

0x635f,	// (0x000173d9) form2_midp_wait_pane

0xca5f,	// (0x0001dad9) list_single_2graphic_pane_cp4_ParamLimits

0xca5f,	// (0x0001dad9) list_single_2graphic_pane_cp4

0xd1f3,	// (0x0001e26d) list_single_midp_graphic_pane_cp_ParamLimits

0xd1f3,	// (0x0001e26d) list_single_midp_graphic_pane_cp

0xec1c,	// (0x0001fc96) list_highlight_pane_cp20

0x63ae,	// (0x00017428) list_single_2graphic_pane_g1_cp4

0x573e,	// (0x000167b8) list_single_2graphic_pane_g2_cp4

0x63b6,	// (0x00017430) list_single_2graphic_pane_t1_cp4

0x1049,	// (0x000120c3) list_highlight_pane_cp21

0x63c5,	// (0x0001743f) list_single_midp_graphic_pane_g4_cp

0x63d4,	// (0x0001744e) list_single_midp_graphic_pane_t1_cp

0xd214,	// (0x0001e28e) form2_mdip_string_pane_t1_ParamLimits

0xd214,	// (0x0001e28e) form2_mdip_string_pane_t1

0xec1c,	// (0x0001fc96) bg_wml_button_pane_cp2

0xea99,	// (0x0001fb13) form2_midp_image_pane_g1

0x1b31,	// (0x00012bab) list_double_large_graphic_pane_g5_ParamLimits

0x1b31,	// (0x00012bab) list_double_large_graphic_pane_g5

0xbdb8,	// (0x0001ce32) midp_form_pane_ParamLimits

0x1049,	// (0x000120c3) main_apps_wheel_pane_ParamLimits

0xc316,	// (0x0001d390) popup_preview_window_ParamLimits

0xc316,	// (0x0001d390) popup_preview_window

0x362b,	// (0x000146a5) popup_touch_info_window_ParamLimits

0x362b,	// (0x000146a5) popup_touch_info_window

0x364d,	// (0x000146c7) popup_touch_menu_window_ParamLimits

0x364d,	// (0x000146c7) popup_touch_menu_window

0xea8f,	// (0x0001fb09) bg_popup_sub_pane_cp6

0x648e,	// (0x00017508) list_touch_menu_pane

0x6496,	// (0x00017510) list_single_touch_menu_pane_ParamLimits

0x6496,	// (0x00017510) list_single_touch_menu_pane

0x64b1,	// (0x0001752b) list_single_touch_menu_pane_t1

0x1049,	// (0x000120c3) bg_popup_sub_pane_cp7_ParamLimits

0x1049,	// (0x000120c3) bg_popup_sub_pane_cp7

0x64bf,	// (0x00017539) heading_sub_pane

0x64c7,	// (0x00017541) list_touch_info_pane_ParamLimits

0x64c7,	// (0x00017541) list_touch_info_pane

0x64d6,	// (0x00017550) list_single_touch_info_pane_ParamLimits

0x64d6,	// (0x00017550) list_single_touch_info_pane

0x64e8,	// (0x00017562) list_single_touch_info_pane_t1

0x64f6,	// (0x00017570) list_single_touch_info_pane_t2

0x0001,

0xfb0f,	// (0x00020b89) list_single_touch_info_pane_t

0x2cd1,	// (0x00013d4b) bg_popup_heading_pane_cp

0x6504,	// (0x0001757e) heading_sub_pane_t1

0x3ced,	// (0x00014d67) bg_popup_preview_window_pane_cp_ParamLimits

0x3ced,	// (0x00014d67) bg_popup_preview_window_pane_cp

0x64bf,	// (0x00017539) heading_preview_pane

0x64c7,	// (0x00017541) list_preview_pane_ParamLimits

0x64c7,	// (0x00017541) list_preview_pane

0x6512,	// (0x0001758c) popup_preview_window_g1

0x64d6,	// (0x00017550) list_single_preview_pane_ParamLimits

0x64d6,	// (0x00017550) list_single_preview_pane

0x651a,	// (0x00017594) list_single_preview_pane_g1

0x6522,	// (0x0001759c) list_single_preview_pane_t1

0x64e8,	// (0x00017562) list_single_preview_pane_t2

0x0001,

0xfb14,	// (0x00020b8e) list_single_preview_pane_t

0x6530,	// (0x000175aa) bg_popup_heading_pane_cp2_ParamLimits

0x6530,	// (0x000175aa) bg_popup_heading_pane_cp2

0x6546,	// (0x000175c0) heading_preview_pane_g1

0x654e,	// (0x000175c8) heading_preview_pane_t1_ParamLimits

0x654e,	// (0x000175c8) heading_preview_pane_t1

0x1152,	// (0x000121cc) soft_indicator_pane_t1_ParamLimits

0x185d,	// (0x000128d7) scroll_pane_ParamLimits

0x248b,	// (0x00013505) scroll_sc2_left_pane

0x2494,	// (0x0001350e) scroll_sc2_right_pane

0x24b3,	// (0x0001352d) scroll_bg_pane_g1_ParamLimits

0x24c8,	// (0x00013542) scroll_bg_pane_g2_ParamLimits

0x24e0,	// (0x0001355a) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x00020774) scroll_bg_pane_g_ParamLimits

0x24b3,	// (0x0001352d) scroll_handle_pane_g1_ParamLimits

0x2502,	// (0x0001357c) scroll_handle_pane_g2_ParamLimits

0x24e0,	// (0x0001355a) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0002077b) scroll_handle_pane_g_ParamLimits

0x308f,	// (0x00014109) popup_choice_list_window_ParamLimits

0x308f,	// (0x00014109) popup_choice_list_window

0x3aed,	// (0x00014b67) choice_list_pane

0x3b9d,	// (0x00014c17) cell_toolbar_pane_t1

0x3bc5,	// (0x00014c3f) toolbar_button_pane_ParamLimits

0x4d29,	// (0x00015da3) ai_gene_pane_1_t2_ParamLimits

0x4d29,	// (0x00015da3) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x00020993) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x00020993) ai_gene_pane_1_t

0x656b,	// (0x000175e5) scroll_sc2_left_pane_g1

0x656b,	// (0x000175e5) scroll_sc2_right_pane_g1

0x305f,	// (0x000140d9) bg_popup_sub_pane_cp10

0x6575,	// (0x000175ef) list_choice_list_pane

0x658c,	// (0x00017606) list_single_choice_list_pane_ParamLimits

0x658c,	// (0x00017606) list_single_choice_list_pane

0x65a0,	// (0x0001761a) list_single_choice_list_pane_g1

0x65a8,	// (0x00017622) list_single_choice_list_pane_t1_ParamLimits

0x65a8,	// (0x00017622) list_single_choice_list_pane_t1

0x65bd,	// (0x00017637) choice_list_pane_g1

0x65c5,	// (0x0001763f) choice_list_pane_t1

0xea8f,	// (0x0001fb09) input_focus_pane_cp11

0x2365,	// (0x000133df) title_pane_stacon_g2_ParamLimits

0x2365,	// (0x000133df) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0002075a) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0002075a) title_pane_stacon_g

0x2cd1,	// (0x00013d4b) cursor_press_pane

0xbf97,	// (0x0001d011) popup_fep_hwr_window_ParamLimits

0xbf97,	// (0x0001d011) popup_fep_hwr_window

0x31cf,	// (0x00014249) popup_fep_vkb_window_ParamLimits

0x31cf,	// (0x00014249) popup_fep_vkb_window

0x65d3,	// (0x0001764d) cursor_press_pane_g1

0x0002,

0xfb3d,	// (0x00020bb7) fep_vkb_side_pane_g_ParamLimits

0x02e3,	// (0x0001135d) fep_hwr_candidate_pane_ParamLimits

0x02e3,	// (0x0001135d) fep_hwr_candidate_pane

0x030d,	// (0x00011387) fep_hwr_side_pane_ParamLimits

0x030d,	// (0x00011387) fep_hwr_side_pane

0x032f,	// (0x000113a9) fep_hwr_top_pane_ParamLimits

0x032f,	// (0x000113a9) fep_hwr_top_pane

0x0347,	// (0x000113c1) fep_hwr_write_pane_ParamLimits

0x0347,	// (0x000113c1) fep_hwr_write_pane

0xfb3d,	// (0x00020bb7) fep_vkb_side_pane_g

0x65db,	// (0x00017655) fep_hwr_top_pane_g1

0x65ed,	// (0x00017667) fep_hwr_top_pane_g2

0x0381,	// (0x000113fb) fep_hwr_top_pane_g3

0x0002,

0xfb19,	// (0x00020b93) fep_hwr_top_pane_g

0x0396,	// (0x00011410) fep_hwr_top_text_pane

0x2657,	// (0x000136d1) fep_hwr_top_text_pane_g1

0x6623,	// (0x0001769d) fep_hwr_top_text_pane_t1

0x04a0,	// (0x0001151a) fep_hwr_candidate_pane_g1

0x68b0,	// (0x0001792a) fep_vkb_keypad_pane_g3_ParamLimits

0x68b0,	// (0x0001792a) fep_vkb_keypad_pane_g3

0x68dc,	// (0x00017956) fep_vkb_keypad_pane_g4_ParamLimits

0x68dc,	// (0x00017956) fep_vkb_keypad_pane_g4

0x6953,	// (0x000179cd) fep_vkb_bottom_pane_g2_ParamLimits

0x6953,	// (0x000179cd) fep_vkb_bottom_pane_g2

0x0001,

0xfb44,	// (0x00020bbe) fep_vkb_bottom_pane_g_ParamLimits

0xfb44,	// (0x00020bbe) fep_vkb_bottom_pane_g

0x656b,	// (0x000175e5) cell_vkb_side_pane_g2

0x0001,

0xfb4e,	// (0x00020bc8) cell_vkb_side_pane_g

0x69de,	// (0x00017a58) cell_vkb_side_pane_t1

0x69ec,	// (0x00017a66) cell_vkb_side_pane_t1_copy1

0x656b,	// (0x000175e5) bg_fep_vkb_candidate_pane_g2

0x6b30,	// (0x00017baa) cell_vkb_candidate_pane_ParamLimits

0x6673,	// (0x000176ed) aid_size_cell_vkb_ParamLimits

0x6673,	// (0x000176ed) aid_size_cell_vkb

0x6b30,	// (0x00017baa) cell_vkb_candidate_pane

0x04c7,	// (0x00011541) bg_popup_fep_shadow_pane_g1

0xd2b0,	// (0x0001e32a) fep_vkb_bottom_pane_ParamLimits

0xd2b0,	// (0x0001e32a) fep_vkb_bottom_pane

0x6742,	// (0x000177bc) fep_vkb_candidate_pane_ParamLimits

0x6742,	// (0x000177bc) fep_vkb_candidate_pane

0xd2dc,	// (0x0001e356) fep_vkb_keypad_pane_ParamLimits

0xd2dc,	// (0x0001e356) fep_vkb_keypad_pane

0xd303,	// (0x0001e37d) fep_vkb_side_pane_ParamLimits

0xd303,	// (0x0001e37d) fep_vkb_side_pane

0xd33f,	// (0x0001e3b9) fep_vkb_top_pane_ParamLimits

0xd33f,	// (0x0001e3b9) fep_vkb_top_pane

0x6809,	// (0x00017883) fep_vkb_top_pane_g1_ParamLimits

0x6809,	// (0x00017883) fep_vkb_top_pane_g1

0x6818,	// (0x00017892) fep_vkb_top_pane_g2_ParamLimits

0x6818,	// (0x00017892) fep_vkb_top_pane_g2

0x6827,	// (0x000178a1) fep_vkb_top_pane_g3_ParamLimits

0x6827,	// (0x000178a1) fep_vkb_top_pane_g3

0x0003,

0xfb34,	// (0x00020bae) fep_vkb_top_pane_g_ParamLimits

0xfb34,	// (0x00020bae) fep_vkb_top_pane_g

0x6845,	// (0x000178bf) fep_vkb_top_text_pane_ParamLimits

0x6845,	// (0x000178bf) fep_vkb_top_text_pane

0xd37b,	// (0x0001e3f5) fep_vkb_side_pane_g1_ParamLimits

0xd37b,	// (0x0001e3f5) fep_vkb_side_pane_g1

0x689f,	// (0x00017919) grid_vkb_side_pane_ParamLimits

0x689f,	// (0x00017919) grid_vkb_side_pane

0x04cf,	// (0x00011549) bg_popup_fep_shadow_pane_g2

0x04d8,	// (0x00011552) bg_popup_fep_shadow_pane_g3

0x04e0,	// (0x0001155a) bg_popup_fep_shadow_pane_g4

0x04e9,	// (0x00011563) bg_popup_fep_shadow_pane_g5

0x04f3,	// (0x0001156d) bg_popup_fep_shadow_pane_g6

0x04fb,	// (0x00011575) bg_popup_fep_shadow_pane_g7

0x1fd9,	// (0x00013053) bg_popup_fep_shadow_pane_g8

0x68fe,	// (0x00017978) grid_vkb_keypad_number_pane_ParamLimits

0x68fe,	// (0x00017978) grid_vkb_keypad_number_pane

0x6912,	// (0x0001798c) grid_vkb_keypad_pane_ParamLimits

0x6912,	// (0x0001798c) grid_vkb_keypad_pane

0x6938,	// (0x000179b2) fep_vkb_bottom_pane_g1_ParamLimits

0x6938,	// (0x000179b2) fep_vkb_bottom_pane_g1

0x6961,	// (0x000179db) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6961,	// (0x000179db) grid_vkb_keypad_bottom_left_pane

0x6976,	// (0x000179f0) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6976,	// (0x000179f0) grid_vkb_keypad_bottom_right_pane

0x698b,	// (0x00017a05) fep_vkb_top_text_pane_g1

0xd3c2,	// (0x0001e43c) fep_vkb_top_text_pane_t1

0xd3d4,	// (0x0001e44e) cell_vkb_side_pane_ParamLimits

0xd3d4,	// (0x0001e44e) cell_vkb_side_pane

0x656b,	// (0x000175e5) cell_vkb_side_pane_g1

0x69fa,	// (0x00017a74) cell_vkb_keypad_pane_ParamLimits

0x69fa,	// (0x00017a74) cell_vkb_keypad_pane

0x6a87,	// (0x00017b01) cell_vkb_keypad_pane_g1

0x0008,

0xfb61,	// (0x00020bdb) bg_popup_fep_shadow_pane_g

0x050d,	// (0x00011587) cell_hwr_side_pane_g1

0x050d,	// (0x00011587) cell_hwr_side_pane_g2

0x6a91,	// (0x00017b0b) cell_vkb_keypad_pane_t1

0xd3ea,	// (0x0001e464) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd3ea,	// (0x0001e464) cell_vkb_keypad_bottom_left_pane

0xd3ff,	// (0x0001e479) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd3ff,	// (0x0001e479) cell_vkb_keypad_bottom_right_pane

0x656b,	// (0x000175e5) cell_vkb_keypad_bottom_left_pane_g1

0x656b,	// (0x000175e5) cell_vkb_keypad_bottom_right_pane_g1

0x6af5,	// (0x00017b6f) cell_vkb_keypad_number_pane_ParamLimits

0x6af5,	// (0x00017b6f) cell_vkb_keypad_number_pane

0x6b14,	// (0x00017b8e) cell_vkb_keypad_number_pane_g1

0x6b1e,	// (0x00017b98) cell_vkb_keypad_number_pane_g2

0x6b27,	// (0x00017ba1) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb53,	// (0x00020bcd) cell_vkb_keypad_number_pane_g

0x6a91,	// (0x00017b0b) cell_vkb_keypad_number_pane_t1

0x6b51,	// (0x00017bcb) fep_vkb_candidate_pane_g1

0x0001,

0xfb74,	// (0x00020bee) cell_hwr_side_pane_g

0x6b6a,	// (0x00017be4) cell_hwr_side_pane_t1

0x0517,	// (0x00011591) cell_hwr_side_pane_t1_copy1

0x0525,	// (0x0001159f) cell_hwr_candidate_pane_g1

0x0554,	// (0x000115ce) cell_hwr_candidate_pane_t1

0x656b,	// (0x000175e5) cell_vkb_candidate_pane_g2

0x6bae,	// (0x00017c28) cell_vkb_candidate_pane_t1

0x02aa,	// (0x00011324) bg_popup_fep_shadow_pane_ParamLimits

0x02aa,	// (0x00011324) bg_popup_fep_shadow_pane

0x0361,	// (0x000113db) bg_fep_hwr_top_pane_g4

0x65ff,	// (0x00017679) bg_hwr_side_pane_g1_ParamLimits

0x65ff,	// (0x00017679) bg_hwr_side_pane_g1

0xace2,	// (0x0001bd5c) cell_hwr_side_pane_ParamLimits

0xace2,	// (0x0001bd5c) cell_hwr_side_pane

0x0411,	// (0x0001148b) fep_hwr_write_pane_g1_ParamLimits

0x0411,	// (0x0001148b) fep_hwr_write_pane_g1

0x041e,	// (0x00011498) fep_hwr_write_pane_g2_ParamLimits

0x041e,	// (0x00011498) fep_hwr_write_pane_g2

0x042b,	// (0x000114a5) fep_hwr_write_pane_g3_ParamLimits

0x042b,	// (0x000114a5) fep_hwr_write_pane_g3

0xad02,	// (0x0001bd7c) fep_hwr_write_pane_g4_ParamLimits

0xad02,	// (0x0001bd7c) fep_hwr_write_pane_g4

0x0005,

0xfb20,	// (0x00020b9a) fep_hwr_write_pane_g_ParamLimits

0xfb20,	// (0x00020b9a) fep_hwr_write_pane_g

0x0361,	// (0x000113db) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0361,	// (0x000113db) bg_fep_hwr_candidate_pane_g2

0x044e,	// (0x000114c8) cell_hwr_candidate_pane_ParamLimits

0x044e,	// (0x000114c8) cell_hwr_candidate_pane

0x04a0,	// (0x0001151a) fep_hwr_candidate_pane_g1_ParamLimits

0x66a1,	// (0x0001771b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x66a1,	// (0x0001771b) bg_popup_fep_shadow_pane_cp2

0x6837,	// (0x000178b1) fep_vkb_top_pane_g4_ParamLimits

0x6837,	// (0x000178b1) fep_vkb_top_pane_g4

0x687d,	// (0x000178f7) fep_vkb_side_pane_g2_ParamLimits

0x687d,	// (0x000178f7) fep_vkb_side_pane_g2

0xb855,	// (0x0001c8cf) list_setting_pane_t4_ParamLimits

0xb855,	// (0x0001c8cf) list_setting_pane_t4

0xb8d1,	// (0x0001c94b) list_setting_number_pane_t5_ParamLimits

0xb8d1,	// (0x0001c94b) list_setting_number_pane_t5

0x2689,	// (0x00013703) list_double_heading_pane_cp2_ParamLimits

0x2689,	// (0x00013703) list_double_heading_pane_cp2

0x1eab,	// (0x00012f25) list_double_heading_pane_g1_cp2_ParamLimits

0x1eab,	// (0x00012f25) list_double_heading_pane_g1_cp2

0x1eb7,	// (0x00012f31) list_double_heading_pane_g2_cp2_ParamLimits

0x1eb7,	// (0x00012f31) list_double_heading_pane_g2_cp2

0x6bbc,	// (0x00017c36) list_double_heading_pane_t1_cp2_ParamLimits

0x6bbc,	// (0x00017c36) list_double_heading_pane_t1_cp2

0x6bd2,	// (0x00017c4c) list_double_heading_pane_t2_cp2_ParamLimits

0x6bd2,	// (0x00017c4c) list_double_heading_pane_t2_cp2

0xea87,	// (0x0001fb01) aid_value_unit2

0xee09,	// (0x0001fe83) popup_preview_fixed_window

0x12ed,	// (0x00012367) bg_popup_preview_window_pane_cp02

0x6be4,	// (0x00017c5e) list_preview_fixed_pane

0x6c2a,	// (0x00017ca4) list_empty_pane_fp_ParamLimits

0x6c2a,	// (0x00017ca4) list_empty_pane_fp

0x6c2a,	// (0x00017ca4) list_single_cale_day_pane_fp_ParamLimits

0x6c2a,	// (0x00017ca4) list_single_cale_day_pane_fp

0x6c2a,	// (0x00017ca4) list_single_graphic_heading_pane_fp_ParamLimits

0x6c2a,	// (0x00017ca4) list_single_graphic_heading_pane_fp

0x6c2a,	// (0x00017ca4) list_single_graphic_pane_fp_ParamLimits

0x6c2a,	// (0x00017ca4) list_single_graphic_pane_fp

0x6c2a,	// (0x00017ca4) list_single_heading_pane_fp_ParamLimits

0x6c2a,	// (0x00017ca4) list_single_heading_pane_fp

0x6c2a,	// (0x00017ca4) list_single_pane_fp_ParamLimits

0x6c2a,	// (0x00017ca4) list_single_pane_fp

0x6c43,	// (0x00017cbd) list_single_pane_fp_g1_ParamLimits

0x6c43,	// (0x00017cbd) list_single_pane_fp_g1

0x6c4f,	// (0x00017cc9) list_single_pane_fp_g2_ParamLimits

0x6c4f,	// (0x00017cc9) list_single_pane_fp_g2

0x6c5b,	// (0x00017cd5) list_single_pane_fp_g3_ParamLimits

0x6c5b,	// (0x00017cd5) list_single_pane_fp_g3

0x6c6f,	// (0x00017ce9) list_single_pane_fp_g4_ParamLimits

0x6c6f,	// (0x00017ce9) list_single_pane_fp_g4

0x0003,

0xfb87,	// (0x00020c01) list_single_pane_fp_g_ParamLimits

0xfb87,	// (0x00020c01) list_single_pane_fp_g

0x6c7b,	// (0x00017cf5) list_single_pane_fp_t1_ParamLimits

0x6c7b,	// (0x00017cf5) list_single_pane_fp_t1

0x6c92,	// (0x00017d0c) list_single_graphic_pane_fp_g1_ParamLimits

0x6c92,	// (0x00017d0c) list_single_graphic_pane_fp_g1

0x6c43,	// (0x00017cbd) list_single_graphic_pane_fp_g2_ParamLimits

0x6c43,	// (0x00017cbd) list_single_graphic_pane_fp_g2

0x6c4f,	// (0x00017cc9) list_single_graphic_pane_fp_g3_ParamLimits

0x6c4f,	// (0x00017cc9) list_single_graphic_pane_fp_g3

0x6c5b,	// (0x00017cd5) list_single_graphic_pane_fp_g4_ParamLimits

0x6c5b,	// (0x00017cd5) list_single_graphic_pane_fp_g4

0x6c6f,	// (0x00017ce9) list_single_graphic_pane_fp_g5_ParamLimits

0x6c6f,	// (0x00017ce9) list_single_graphic_pane_fp_g5

0x0004,

0xfb90,	// (0x00020c0a) list_single_graphic_pane_fp_g_ParamLimits

0xfb90,	// (0x00020c0a) list_single_graphic_pane_fp_g

0x6c9e,	// (0x00017d18) list_single_graphic_pane_fp_t1_ParamLimits

0x6c9e,	// (0x00017d18) list_single_graphic_pane_fp_t1

0x6c92,	// (0x00017d0c) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6c92,	// (0x00017d0c) list_single_graphic_heading_pane_fp_g1

0x6c43,	// (0x00017cbd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6c43,	// (0x00017cbd) list_single_graphic_heading_pane_fp_g2

0x6c4f,	// (0x00017cc9) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6c4f,	// (0x00017cc9) list_single_graphic_heading_pane_fp_g3

0x6c5b,	// (0x00017cd5) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6c5b,	// (0x00017cd5) list_single_graphic_heading_pane_fp_g4

0x6c6f,	// (0x00017ce9) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6c6f,	// (0x00017ce9) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00020c0a) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00020c0a) list_single_graphic_heading_pane_fp_g

0x6cb4,	// (0x00017d2e) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6cb4,	// (0x00017d2e) list_single_graphic_heading_pane_fp_t1

0x6cca,	// (0x00017d44) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6cca,	// (0x00017d44) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9b,	// (0x00020c15) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9b,	// (0x00020c15) list_single_graphic_heading_pane_fp_t

0x6cdc,	// (0x00017d56) list_single_cale_day_pane_fp_g1_ParamLimits

0x6cdc,	// (0x00017d56) list_single_cale_day_pane_fp_g1

0x6d14,	// (0x00017d8e) list_single_cale_day_pane_fp_g2_ParamLimits

0x6d14,	// (0x00017d8e) list_single_cale_day_pane_fp_g2

0x6d20,	// (0x00017d9a) list_single_cale_day_pane_fp_g3_ParamLimits

0x6d20,	// (0x00017d9a) list_single_cale_day_pane_fp_g3

0x6d48,	// (0x00017dc2) list_single_cale_day_pane_fp_g4_ParamLimits

0x6d48,	// (0x00017dc2) list_single_cale_day_pane_fp_g4

0x6d6c,	// (0x00017de6) list_single_cale_day_pane_fp_g5_ParamLimits

0x6d6c,	// (0x00017de6) list_single_cale_day_pane_fp_g5

0x0004,

0xfba0,	// (0x00020c1a) list_single_cale_day_pane_fp_g_ParamLimits

0xfba0,	// (0x00020c1a) list_single_cale_day_pane_fp_g

0x6d90,	// (0x00017e0a) list_single_cale_day_pane_fp_t1_ParamLimits

0x6d90,	// (0x00017e0a) list_single_cale_day_pane_fp_t1

0x6db6,	// (0x00017e30) list_single_cale_day_pane_fp_t2_ParamLimits

0x6db6,	// (0x00017e30) list_single_cale_day_pane_fp_t2

0x6dcf,	// (0x00017e49) list_single_cale_day_pane_fp_t3_ParamLimits

0x6dcf,	// (0x00017e49) list_single_cale_day_pane_fp_t3

0x0002,

0xfbab,	// (0x00020c25) list_single_cale_day_pane_fp_t_ParamLimits

0xfbab,	// (0x00020c25) list_single_cale_day_pane_fp_t

0x6c43,	// (0x00017cbd) list_empty_pane_fp_g1_ParamLimits

0x6c43,	// (0x00017cbd) list_empty_pane_fp_g1

0x6de8,	// (0x00017e62) list_empty_pane_fp_t1

0x6df6,	// (0x00017e70) list_empty_pane_fp_t2

0x0001,

0xfbb2,	// (0x00020c2c) list_empty_pane_fp_t

0x6c43,	// (0x00017cbd) list_single_heading_pane_fp_g1_ParamLimits

0x6c43,	// (0x00017cbd) list_single_heading_pane_fp_g1

0x6c4f,	// (0x00017cc9) list_single_heading_pane_fp_g2_ParamLimits

0x6c4f,	// (0x00017cc9) list_single_heading_pane_fp_g2

0x6c5b,	// (0x00017cd5) list_single_heading_pane_fp_g3_ParamLimits

0x6c5b,	// (0x00017cd5) list_single_heading_pane_fp_g3

0x0002,

0xfbb7,	// (0x00020c31) list_single_heading_pane_fp_g_ParamLimits

0xfbb7,	// (0x00020c31) list_single_heading_pane_fp_g

0x6e04,	// (0x00017e7e) list_single_heading_pane_fp_t1_ParamLimits

0x6e04,	// (0x00017e7e) list_single_heading_pane_fp_t1

0x6e16,	// (0x00017e90) list_single_heading_pane_fp_t2_ParamLimits

0x6e16,	// (0x00017e90) list_single_heading_pane_fp_t2

0x0001,

0xfbbe,	// (0x00020c38) list_single_heading_pane_fp_t_ParamLimits

0xfbbe,	// (0x00020c38) list_single_heading_pane_fp_t

0x21fc,	// (0x00013276) aid_size_cell_fast

0x125f,	// (0x000122d9) soft_indicator_pane_cp1_t1

0x2239,	// (0x000132b3) cell_app_pane_cp2_ParamLimits

0x2239,	// (0x000132b3) cell_app_pane_cp2

0x02cc,	// (0x00011346) fep_hwr_candidate_drop_down_list_pane

0x04ba,	// (0x00011534) fep_hwr_candidate_pane_g3_ParamLimits

0x04ba,	// (0x00011534) fep_hwr_candidate_pane_g3

0xdaf4,	// (0x0001eb6e) fep_hwr_candidate_pane_g4_ParamLimits

0xdaf4,	// (0x0001eb6e) fep_hwr_candidate_pane_g4

0x0002,

0xfb2d,	// (0x00020ba7) fep_hwr_candidate_pane_g_ParamLimits

0xfb2d,	// (0x00020ba7) fep_hwr_candidate_pane_g

0x6731,	// (0x000177ab) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6731,	// (0x000177ab) fep_vkb_candidate_drop_down_list_pane

0x6b59,	// (0x00017bd3) fep_vkb_candidate_pane_g3

0x6b61,	// (0x00017bdb) fep_vkb_candidate_pane_g4

0x0002,

0xfb5a,	// (0x00020bd4) fep_vkb_candidate_pane_g

0x0525,	// (0x0001159f) cell_hwr_candidate_pane_g1_ParamLimits

0x0533,	// (0x000115ad) cell_hwr_candidate_pane_g3_ParamLimits

0x0533,	// (0x000115ad) cell_hwr_candidate_pane_g3

0x7de8,	// (0x00018e62) cell_hwr_candidate_pane_g4_ParamLimits

0x7de8,	// (0x00018e62) cell_hwr_candidate_pane_g4

0x0002,

0xfb79,	// (0x00020bf3) cell_hwr_candidate_pane_g_ParamLimits

0xfb79,	// (0x00020bf3) cell_hwr_candidate_pane_g

0x6b78,	// (0x00017bf2) cell_vkb_candidate_pane_g3_ParamLimits

0x6b78,	// (0x00017bf2) cell_vkb_candidate_pane_g3

0x6b93,	// (0x00017c0d) cell_vkb_candidate_pane_g4_ParamLimits

0x6b93,	// (0x00017c0d) cell_vkb_candidate_pane_g4

0x6e2c,	// (0x00017ea6) cell_app_pane_cp2_g1_ParamLimits

0x6e2c,	// (0x00017ea6) cell_app_pane_cp2_g1

0x6e4a,	// (0x00017ec4) cell_app_pane_cp2_g2_ParamLimits

0x6e4a,	// (0x00017ec4) cell_app_pane_cp2_g2

0x0001,

0xfbc3,	// (0x00020c3d) cell_app_pane_cp2_g_ParamLimits

0xfbc3,	// (0x00020c3d) cell_app_pane_cp2_g

0x6e56,	// (0x00017ed0) cell_app_pane_cp2_t1_ParamLimits

0x6e56,	// (0x00017ed0) cell_app_pane_cp2_t1

0x1e85,	// (0x00012eff) grid_highlight_pane_cp1_ParamLimits

0x1e85,	// (0x00012eff) grid_highlight_pane_cp1

0x0572,	// (0x000115ec) cell_hwr_candidate_pane_cp1_ParamLimits

0x0572,	// (0x000115ec) cell_hwr_candidate_pane_cp1

0x0525,	// (0x0001159f) fep_hwr_candidate_drop_down_list_pane_g1

0x0596,	// (0x00011610) fep_hwr_candidate_drop_down_list_pane_g2

0x05a3,	// (0x0001161d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc8,	// (0x00020c42) fep_hwr_candidate_drop_down_list_pane_g

0x05b0,	// (0x0001162a) fep_hwr_candidate_drop_down_list_scroll_pane

0x05b9,	// (0x00011633) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x05b9,	// (0x00011633) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x05c6,	// (0x00011640) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x05c6,	// (0x00011640) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x05d3,	// (0x0001164d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x05d3,	// (0x0001164d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x05e0,	// (0x0001165a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x05e0,	// (0x0001165a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x05fb,	// (0x00011675) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x05fb,	// (0x00011675) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0616,	// (0x00011690) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0616,	// (0x00011690) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0631,	// (0x000116ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0631,	// (0x000116ab) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x064c,	// (0x000116c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x064c,	// (0x000116c6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcf,	// (0x00020c49) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcf,	// (0x00020c49) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6e68,	// (0x00017ee2) cell_vkb_candidate_pane_cp1_ParamLimits

0x6e68,	// (0x00017ee2) cell_vkb_candidate_pane_cp1

0x6837,	// (0x000178b1) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6837,	// (0x000178b1) fep_vkb_candidate_drop_down_list_pane_g1

0x6e8e,	// (0x00017f08) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6e8e,	// (0x00017f08) fep_vkb_candidate_drop_down_list_pane_g2

0x6e9b,	// (0x00017f15) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6e9b,	// (0x00017f15) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe0,	// (0x00020c5a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe0,	// (0x00020c5a) fep_vkb_candidate_drop_down_list_pane_g

0x6ea8,	// (0x00017f22) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6ea8,	// (0x00017f22) fep_vkb_candidate_drop_down_list_scroll_pane

0x6eb5,	// (0x00017f2f) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6eb5,	// (0x00017f2f) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6ec2,	// (0x00017f3c) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6ec2,	// (0x00017f3c) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6ece,	// (0x00017f48) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6ece,	// (0x00017f48) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6eda,	// (0x00017f54) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6eda,	// (0x00017f54) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6efb,	// (0x00017f75) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6efb,	// (0x00017f75) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6f1c,	// (0x00017f96) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6f1c,	// (0x00017f96) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6f3d,	// (0x00017fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6f3d,	// (0x00017fb7) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6f5e,	// (0x00017fd8) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6f5e,	// (0x00017fd8) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe7,	// (0x00020c61) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe7,	// (0x00020c61) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb15c,	// (0x0001c1d6) title_pane_g1_ParamLimits

0xb16d,	// (0x0001c1e7) title_pane_g2_ParamLimits

0xf56a,	// (0x000205e4) title_pane_g_ParamLimits

0x2647,	// (0x000136c1) aid_call2_pane

0x264f,	// (0x000136c9) aid_call_pane

0x2657,	// (0x000136d1) popup_clock_analogue_window_g1

0x2657,	// (0x000136d1) popup_clock_analogue_window_g2

0xf0d1,	// (0x0002014b) popup_clock_analogue_window_g3

0xf0da,	// (0x00020154) popup_clock_analogue_window_g4

0xea99,	// (0x0001fb13) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x00020789) popup_clock_analogue_window_g

0xf0e2,	// (0x0002015c) popup_clock_analogue_window_t1

0xf0f0,	// (0x0002016a) clock_digital_number_pane_ParamLimits

0xf0f0,	// (0x0002016a) clock_digital_number_pane

0xf0fc,	// (0x00020176) clock_digital_number_pane_cp02_ParamLimits

0xf0fc,	// (0x00020176) clock_digital_number_pane_cp02

0xf108,	// (0x00020182) clock_digital_number_pane_cp03_ParamLimits

0xf108,	// (0x00020182) clock_digital_number_pane_cp03

0xf114,	// (0x0002018e) clock_digital_number_pane_cp04_ParamLimits

0xf114,	// (0x0002018e) clock_digital_number_pane_cp04

0xf120,	// (0x0002019a) clock_digital_separator_pane_ParamLimits

0xf120,	// (0x0002019a) clock_digital_separator_pane

0xf12c,	// (0x000201a6) popup_clock_digital_window_t1_ParamLimits

0xf12c,	// (0x000201a6) popup_clock_digital_window_t1

0xea99,	// (0x0001fb13) clock_digital_number_pane_g1

0xea99,	// (0x0001fb13) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x00020794) clock_digital_number_pane_g

0xea99,	// (0x0001fb13) clock_digital_separator_pane_g1

0xea99,	// (0x0001fb13) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x00020794) clock_digital_separator_pane_g

0xc5fe,	// (0x0001d678) aid_fill_nsta_ParamLimits

0xc757,	// (0x0001d7d1) indicator_nsta_pane_ParamLimits

0x397a,	// (0x000149f4) popup_clock_analogue_window

0x397a,	// (0x000149f4) popup_clock_digital_window

0x21bd,	// (0x00013237) grid_indicator_nsta_pane_ParamLimits

0x5f3b,	// (0x00016fb5) clock_nsta_pane_t2

0x0001,

0xfaad,	// (0x00020b27) clock_nsta_pane_t

0xf09e,	// (0x00020118) aid_size_max_handle

0xa9ac,	// (0x0001ba26) aid_size_min_handle

0x2cd1,	// (0x00013d4b) editor_scroll_pane

0x6f79,	// (0x00017ff3) ex_editor_pane

0x2169,	// (0x000131e3) scroll_pane_cp13

0x1889,	// (0x00012903) scroll_pane_cp14

0x2681,	// (0x000136fb) scroll_pane_cp36

0xbc4c,	// (0x0001ccc6) list_single_graphic_hl_pane_cp2_ParamLimits

0xbc4c,	// (0x0001ccc6) list_single_graphic_hl_pane_cp2

0xcf0c,	// (0x0001df86) list_single_graphic_hl_pane_ParamLimits

0xcf0c,	// (0x0001df86) list_single_graphic_hl_pane

0x6f81,	// (0x00017ffb) aid_size_min_hl_cp1

0x6f8a,	// (0x00018004) list_highlight_pane_cp34_ParamLimits

0x6f8a,	// (0x00018004) list_highlight_pane_cp34

0x6f9b,	// (0x00018015) list_single_graphic_hl_pane_g1_ParamLimits

0x6f9b,	// (0x00018015) list_single_graphic_hl_pane_g1

0x1891,	// (0x0001290b) list_single_graphic_hl_pane_g2_ParamLimits

0x1891,	// (0x0001290b) list_single_graphic_hl_pane_g2

0x1891,	// (0x0001290b) list_single_graphic_hl_pane_g3_ParamLimits

0x1891,	// (0x0001290b) list_single_graphic_hl_pane_g3

0x189d,	// (0x00012917) list_single_graphic_hl_pane_g4_ParamLimits

0x189d,	// (0x00012917) list_single_graphic_hl_pane_g4

0x700e,	// (0x00018088) list_single_graphic_hl_pane_g5_ParamLimits

0x700e,	// (0x00018088) list_single_graphic_hl_pane_g5

0x0004,

0xfbf8,	// (0x00020c72) list_single_graphic_hl_pane_g_ParamLimits

0xfbf8,	// (0x00020c72) list_single_graphic_hl_pane_g

0xd41a,	// (0x0001e494) list_single_graphic_hl_pane_t1_ParamLimits

0xd41a,	// (0x0001e494) list_single_graphic_hl_pane_t1

0x6fde,	// (0x00018058) aid_size_min_hl_cp2

0x6fe7,	// (0x00018061) list_highlight_pane_cp34_cp2_ParamLimits

0x6fe7,	// (0x00018061) list_highlight_pane_cp34_cp2

0x6f9b,	// (0x00018015) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6f9b,	// (0x00018015) list_single_graphic_hl_pane_g1_cp2

0x6ff4,	// (0x0001806e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6ff4,	// (0x0001806e) list_single_graphic_hl_pane_g2_cp2

0x7000,	// (0x0001807a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7000,	// (0x0001807a) list_single_graphic_hl_pane_g3_cp2

0x189d,	// (0x00012917) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x189d,	// (0x00012917) list_single_graphic_hl_pane_g4_cp2

0x700e,	// (0x00018088) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x700e,	// (0x00018088) list_single_graphic_hl_pane_g5_cp2

0xa9de,	// (0x0001ba58) control_pane_g4_ParamLimits

0xa9de,	// (0x0001ba58) control_pane_g4

0x305f,	// (0x000140d9) bg_popup_sub_pane_cp10_ParamLimits

0x6575,	// (0x000175ef) list_choice_list_pane_ParamLimits

0x6584,	// (0x000175fe) scroll_pane_cp23

0x12ed,	// (0x00012367) bg_popup_preview_window_pane_cp02_ParamLimits

0x6be4,	// (0x00017c5e) list_preview_fixed_pane_ParamLimits

0x6bfa,	// (0x00017c74) list_preview_fixed_pane_cp_ParamLimits

0x6bfa,	// (0x00017c74) list_preview_fixed_pane_cp

0x6c06,	// (0x00017c80) popup_preview_fixed_window_g1_ParamLimits

0x6c06,	// (0x00017c80) popup_preview_fixed_window_g1

0x6c12,	// (0x00017c8c) popup_preview_fixed_window_g2_ParamLimits

0x6c12,	// (0x00017c8c) popup_preview_fixed_window_g2

0x0002,

0xfb80,	// (0x00020bfa) popup_preview_fixed_window_g_ParamLimits

0xfb80,	// (0x00020bfa) popup_preview_fixed_window_g

0xf010,	// (0x0002008a) aid_navi_side_left_pane_ParamLimits

0xf025,	// (0x0002009f) aid_navi_side_right_pane_ParamLimits

0xf03d,	// (0x000200b7) navi_icon_pane_stacon_ParamLimits

0xf051,	// (0x000200cb) navi_navi_pane_stacon_ParamLimits

0xf03d,	// (0x000200b7) navi_text_pane_stacon_ParamLimits

0xea8f,	// (0x0001fb09) main_text_info_pane

0x7038,	// (0x000180b2) listscroll_text_info_pane

0x7040,	// (0x000180ba) list_text_info_pane_ParamLimits

0x7040,	// (0x000180ba) list_text_info_pane

0x704f,	// (0x000180c9) scroll_pane_cp24_ParamLimits

0x704f,	// (0x000180c9) scroll_pane_cp24

0xd430,	// (0x0001e4aa) list_text_info_pane_t1_ParamLimits

0xd430,	// (0x0001e4aa) list_text_info_pane_t1

0xbefb,	// (0x0001cf75) popup_fast_swap2_window_ParamLimits

0xbefb,	// (0x0001cf75) popup_fast_swap2_window

0x7092,	// (0x0001810c) aid_size_cell_fast2

0xea8f,	// (0x0001fb09) bg_popup_window_pane_cp17

0x40b4,	// (0x0001512e) heading_pane_cp2

0x154d,	// (0x000125c7) listscroll_fast2_pane

0x709c,	// (0x00018116) grid_fast2_pane

0x70a6,	// (0x00018120) listscroll_fast2_pane_g1

0x70b0,	// (0x0001812a) listscroll_fast2_pane_g2

0x0001,

0xfc03,	// (0x00020c7d) listscroll_fast2_pane_g

0x2169,	// (0x000131e3) scroll_pane_cp26

0x70ba,	// (0x00018134) cell_fast2_pane_ParamLimits

0x70ba,	// (0x00018134) cell_fast2_pane

0x70d1,	// (0x0001814b) cell_fast2_pane_g1

0x70da,	// (0x00018154) cell_fast2_pane_g2

0x70e3,	// (0x0001815d) cell_fast2_pane_g3

0x0002,

0xfc08,	// (0x00020c82) cell_fast2_pane_g

0x1646,	// (0x000126c0) grid_highlight_pane_cp9

0x165b,	// (0x000126d5) main_eswt_pane_ParamLimits

0x165b,	// (0x000126d5) main_eswt_pane

0x7064,	// (0x000180de) list_single_text_info_pane

0x70eb,	// (0x00018165) eswt_ctrl_button_pane

0x70eb,	// (0x00018165) eswt_ctrl_canvas_pane

0x70f3,	// (0x0001816d) eswt_ctrl_combo_pane

0x70eb,	// (0x00018165) eswt_ctrl_default_pane

0x70eb,	// (0x00018165) eswt_ctrl_label_pane

0x70fb,	// (0x00018175) eswt_ctrl_wait_pane

0x7103,	// (0x0001817d) eswt_shell_pane

0xea8f,	// (0x0001fb09) listscroll_eswt_app_pane

0x7123,	// (0x0001819d) popup_eswt_tasktip_window_ParamLimits

0x7123,	// (0x0001819d) popup_eswt_tasktip_window

0x3ced,	// (0x00014d67) bg_popup_window_pane_cp18

0x7134,	// (0x000181ae) eswt_control_pane_g1_ParamLimits

0x7134,	// (0x000181ae) eswt_control_pane_g1

0x7141,	// (0x000181bb) eswt_control_pane_g2_ParamLimits

0x7141,	// (0x000181bb) eswt_control_pane_g2

0x714e,	// (0x000181c8) eswt_control_pane_g3_ParamLimits

0x714e,	// (0x000181c8) eswt_control_pane_g3

0x715b,	// (0x000181d5) eswt_control_pane_g4_ParamLimits

0x715b,	// (0x000181d5) eswt_control_pane_g4

0x0003,

0xfc0f,	// (0x00020c89) eswt_control_pane_g_ParamLimits

0xfc0f,	// (0x00020c89) eswt_control_pane_g

0x1e85,	// (0x00012eff) bg_button_pane_ParamLimits

0x1e85,	// (0x00012eff) bg_button_pane

0x165b,	// (0x000126d5) common_borders_pane_copy2_ParamLimits

0x165b,	// (0x000126d5) common_borders_pane_copy2

0x7168,	// (0x000181e2) control_button_pane_g1_ParamLimits

0x7168,	// (0x000181e2) control_button_pane_g1

0x7174,	// (0x000181ee) control_button_pane_g2_ParamLimits

0x7174,	// (0x000181ee) control_button_pane_g2

0x7180,	// (0x000181fa) control_button_pane_g3_ParamLimits

0x7180,	// (0x000181fa) control_button_pane_g3

0x0002,

0xfc18,	// (0x00020c92) control_button_pane_g_ParamLimits

0xfc18,	// (0x00020c92) control_button_pane_g

0x7194,	// (0x0001820e) control_button_pane_t1

0x71a2,	// (0x0001821c) control_button_pane_t2

0x0001,

0xfc1f,	// (0x00020c99) control_button_pane_t

0x3bd1,	// (0x00014c4b) bg_button_pane_g1

0x3be1,	// (0x00014c5b) bg_button_pane_g2

0x3bd9,	// (0x00014c53) bg_button_pane_g3

0x3bf1,	// (0x00014c6b) bg_button_pane_g4

0x3be9,	// (0x00014c63) bg_button_pane_g5

0x3bf9,	// (0x00014c73) bg_button_pane_g6

0x3c01,	// (0x00014c7b) bg_button_pane_g7

0x3c11,	// (0x00014c8b) bg_button_pane_g8

0x3c09,	// (0x00014c83) bg_button_pane_g9

0x0008,

0xf86d,	// (0x000208e7) bg_button_pane_g

0x6530,	// (0x000175aa) common_borders_pane_ParamLimits

0x6530,	// (0x000175aa) common_borders_pane

0x7134,	// (0x000181ae) eswt_control_pane_g1_copy1_ParamLimits

0x7134,	// (0x000181ae) eswt_control_pane_g1_copy1

0x7141,	// (0x000181bb) eswt_control_pane_g2_copy1_ParamLimits

0x7141,	// (0x000181bb) eswt_control_pane_g2_copy1

0x714e,	// (0x000181c8) eswt_control_pane_g3_copy1_ParamLimits

0x714e,	// (0x000181c8) eswt_control_pane_g3_copy1

0x715b,	// (0x000181d5) eswt_control_pane_g4_copy1_ParamLimits

0x715b,	// (0x000181d5) eswt_control_pane_g4_copy1

0x656b,	// (0x000175e5) bg_eswt_ctrl_canvas_pane_g1

0x6530,	// (0x000175aa) common_borders_pane_cp2_ParamLimits

0x6530,	// (0x000175aa) common_borders_pane_cp2

0x6530,	// (0x000175aa) common_borders_pane_cp3_ParamLimits

0x6530,	// (0x000175aa) common_borders_pane_cp3

0x71b0,	// (0x0001822a) separator_horizontal_pane

0x71b8,	// (0x00018232) separator_vertical_pane

0x7134,	// (0x000181ae) eswt_control_pane_g1_copy2_ParamLimits

0x7134,	// (0x000181ae) eswt_control_pane_g1_copy2

0x7141,	// (0x000181bb) eswt_control_pane_g2_copy2_ParamLimits

0x7141,	// (0x000181bb) eswt_control_pane_g2_copy2

0x714e,	// (0x000181c8) eswt_control_pane_g3_copy2_ParamLimits

0x714e,	// (0x000181c8) eswt_control_pane_g3_copy2

0x715b,	// (0x000181d5) eswt_control_pane_g4_copy2_ParamLimits

0x715b,	// (0x000181d5) eswt_control_pane_g4_copy2

0xea8f,	// (0x0001fb09) common_borders_pane_cp4

0x71c1,	// (0x0001823b) separator_horizontal_pane_g1

0x71ca,	// (0x00018244) separator_horizontal_pane_g2

0x71d3,	// (0x0001824d) separator_horizontal_pane_g3

0x0002,

0xfc24,	// (0x00020c9e) separator_horizontal_pane_g

0x7134,	// (0x000181ae) eswt_control_pane_g1_copy3_ParamLimits

0x7134,	// (0x000181ae) eswt_control_pane_g1_copy3

0x7141,	// (0x000181bb) eswt_control_pane_g2_copy3_ParamLimits

0x7141,	// (0x000181bb) eswt_control_pane_g2_copy3

0x714e,	// (0x000181c8) eswt_control_pane_g3_copy3_ParamLimits

0x714e,	// (0x000181c8) eswt_control_pane_g3_copy3

0x715b,	// (0x000181d5) eswt_control_pane_g4_copy3_ParamLimits

0x715b,	// (0x000181d5) eswt_control_pane_g4_copy3

0xea8f,	// (0x0001fb09) common_borders_pane_cp5

0x71dc,	// (0x00018256) separator_vertical_pane_g1

0x71e5,	// (0x0001825f) separator_vertical_pane_g2

0x71ee,	// (0x00018268) separator_vertical_pane_g3

0x0002,

0xfc2b,	// (0x00020ca5) separator_vertical_pane_g

0x7134,	// (0x000181ae) eswt_control_pane_g1_copy4_ParamLimits

0x7134,	// (0x000181ae) eswt_control_pane_g1_copy4

0x7141,	// (0x000181bb) eswt_control_pane_g2_copy4_ParamLimits

0x7141,	// (0x000181bb) eswt_control_pane_g2_copy4

0x714e,	// (0x000181c8) eswt_control_pane_g3_copy4_ParamLimits

0x714e,	// (0x000181c8) eswt_control_pane_g3_copy4

0x715b,	// (0x000181d5) eswt_control_pane_g4_copy4_ParamLimits

0x715b,	// (0x000181d5) eswt_control_pane_g4_copy4

0xd452,	// (0x0001e4cc) eswt_ctrl_combo_button_pane

0xd45a,	// (0x0001e4d4) eswt_ctrl_input_pane

0xd462,	// (0x0001e4dc) popup_choice_list_window_cp70

0xd46a,	// (0x0001e4e4) eswt_ctrl_input_pane_t1

0xea8f,	// (0x0001fb09) input_focus_pane_cp70

0x6530,	// (0x000175aa) bg_button_pane_cp70_ParamLimits

0x6530,	// (0x000175aa) bg_button_pane_cp70

0xd478,	// (0x0001e4f2) eswt_ctrl_combo_button_pane_g1

0x7225,	// (0x0001829f) wait_bar_pane_cp70

0x3ced,	// (0x00014d67) bg_popup_window_pane_cp70_ParamLimits

0x3ced,	// (0x00014d67) bg_popup_window_pane_cp70

0x722d,	// (0x000182a7) popup_eswt_tasktip_window_t1

0x7243,	// (0x000182bd) wait_bar_pane_cp71_ParamLimits

0x7243,	// (0x000182bd) wait_bar_pane_cp71

0x724f,	// (0x000182c9) grid_eswt_app_pane

0x248b,	// (0x00013505) scroll_pane_cp70

0xd480,	// (0x0001e4fa) cell_eswt_app_pane_ParamLimits

0xd480,	// (0x0001e4fa) cell_eswt_app_pane

0xd4b2,	// (0x0001e52c) cell_eswt_app_pane_g1_ParamLimits

0xd4b2,	// (0x0001e52c) cell_eswt_app_pane_g1

0xd4e1,	// (0x0001e55b) cell_eswt_app_pane_g2_ParamLimits

0xd4e1,	// (0x0001e55b) cell_eswt_app_pane_g2

0x0001,

0xfc32,	// (0x00020cac) cell_eswt_app_pane_g_ParamLimits

0xfc32,	// (0x00020cac) cell_eswt_app_pane_g

0xd50a,	// (0x0001e584) cell_eswt_app_pane_t1_ParamLimits

0xd50a,	// (0x0001e584) cell_eswt_app_pane_t1

0x7314,	// (0x0001838e) grid_highlight_pane_cp70_ParamLimits

0x7314,	// (0x0001838e) grid_highlight_pane_cp70

0x51d5,	// (0x0001624f) set_content_pane_g1

0x2f81,	// (0x00013ffb) status_small_volume_pane

0x0667,	// (0x000116e1) status_small_volume_pane_g1

0x066f,	// (0x000116e9) volume_small2_pane

0x0678,	// (0x000116f2) volume_small2_pane_g1

0x0681,	// (0x000116fb) volume_small2_pane_g2

0x068a,	// (0x00011704) volume_small2_pane_g3

0x0693,	// (0x0001170d) volume_small2_pane_g4

0x069c,	// (0x00011716) volume_small2_pane_g5

0x06a5,	// (0x0001171f) volume_small2_pane_g6

0x06ae,	// (0x00011728) volume_small2_pane_g7

0x06b7,	// (0x00011731) volume_small2_pane_g8

0x06c0,	// (0x0001173a) volume_small2_pane_g9

0x06c9,	// (0x00011743) volume_small2_pane_g10

0x0009,

0xfc37,	// (0x00020cb1) volume_small2_pane_g

0x698b,	// (0x00017a05) fep_vkb_top_text_pane_g1_ParamLimits

0xd3c2,	// (0x0001e43c) fep_vkb_top_text_pane_t1_ParamLimits

0x6c1e,	// (0x00017c98) popup_preview_fixed_window_g3_ParamLimits

0x6c1e,	// (0x00017c98) popup_preview_fixed_window_g3

0xc591,	// (0x0001d60b) popup_toolbar_trans_pane

0xcd2b,	// (0x0001dda5) aid_height_set_list_ParamLimits

0x508b,	// (0x00016105) aid_size_parent_ParamLimits

0x305f,	// (0x000140d9) list_highlight_pane_cp2_ParamLimits

0x51d5,	// (0x0001624f) set_content_pane_g1_ParamLimits

0xcf20,	// (0x0001df9a) list_single_image_pane_ParamLimits

0xcf20,	// (0x0001df9a) list_single_image_pane

0xd53c,	// (0x0001e5b6) aid_size_cell_image_ParamLimits

0xd53c,	// (0x0001e5b6) aid_size_cell_image

0xd549,	// (0x0001e5c3) grid_single_image_pane_ParamLimits

0xd549,	// (0x0001e5c3) grid_single_image_pane

0x1eab,	// (0x00012f25) list_single_image_pane_g1_ParamLimits

0x1eab,	// (0x00012f25) list_single_image_pane_g1

0x1eb7,	// (0x00012f31) list_single_image_pane_g2_ParamLimits

0x1eb7,	// (0x00012f31) list_single_image_pane_g2

0x0001,

0xfc4c,	// (0x00020cc6) list_single_image_pane_g_ParamLimits

0xfc4c,	// (0x00020cc6) list_single_image_pane_g

0x733b,	// (0x000183b5) list_single_image_pane_t1_ParamLimits

0x733b,	// (0x000183b5) list_single_image_pane_t1

0xd557,	// (0x0001e5d1) cell_image_list_pane_ParamLimits

0xd557,	// (0x0001e5d1) cell_image_list_pane

0xd571,	// (0x0001e5eb) cell_image_list_pane_g1

0xd57a,	// (0x0001e5f4) cell_image_list_pane_g2

0x0001,

0xfc51,	// (0x00020ccb) cell_image_list_pane_g

0x7379,	// (0x000183f3) aid_size_cell_tb_trans_pane

0x1e85,	// (0x00012eff) bg_tb_trans_pane

0x738b,	// (0x00018405) grid_tb_trans_pane

0x3bd1,	// (0x00014c4b) bg_tb_trans_pane_g1

0x3be1,	// (0x00014c5b) bg_tb_trans_pane_g2

0x3bd9,	// (0x00014c53) bg_tb_trans_pane_g3

0x3bf1,	// (0x00014c6b) bg_tb_trans_pane_g4

0x3be9,	// (0x00014c63) bg_tb_trans_pane_g5

0x3c11,	// (0x00014c8b) bg_tb_trans_pane_g6

0x3c09,	// (0x00014c83) bg_tb_trans_pane_g7

0x3bf9,	// (0x00014c73) bg_tb_trans_pane_g8

0x3c01,	// (0x00014c7b) bg_tb_trans_pane_g9

0x0008,

0xfc56,	// (0x00020cd0) bg_tb_trans_pane_g

0x739f,	// (0x00018419) cell_toolbar_trans_pane_ParamLimits

0x739f,	// (0x00018419) cell_toolbar_trans_pane

0x656b,	// (0x000175e5) cell_toolbar_trans_pane_g1

0xd152,	// (0x0001e1cc) list_form2_midp_pane_t1

0xd160,	// (0x0001e1da) list_form2_midp_pane_t2

0x0001,

0xfaf3,	// (0x00020b6d) list_form2_midp_pane_t

0x6152,	// (0x000171cc) scroll_pane_cp51_ParamLimits

0x636f,	// (0x000173e9) form2_midp_wait_pane_g1

0x6378,	// (0x000173f2) form2_midp_wait_pane_g2

0x6381,	// (0x000173fb) form2_midp_wait_pane_g3

0x0002,

0xfb08,	// (0x00020b82) form2_midp_wait_pane_g

0x1049,	// (0x000120c3) list_highlight_pane_cp21_ParamLimits

0x63c5,	// (0x0001743f) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x63d4,	// (0x0001744e) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x52b8,	// (0x00016332) list_single_2graphic_im_pane_ParamLimits

0x52b8,	// (0x00016332) list_single_2graphic_im_pane

0xd583,	// (0x0001e5fd) list_single_2graphic_im_pane_g1_ParamLimits

0xd583,	// (0x0001e5fd) list_single_2graphic_im_pane_g1

0xd594,	// (0x0001e60e) list_single_2graphic_im_pane_g2_ParamLimits

0xd594,	// (0x0001e60e) list_single_2graphic_im_pane_g2

0xd5a0,	// (0x0001e61a) list_single_2graphic_im_pane_g3_ParamLimits

0xd5a0,	// (0x0001e61a) list_single_2graphic_im_pane_g3

0x0003,

0xfc69,	// (0x00020ce3) list_single_2graphic_im_pane_g_ParamLimits

0xfc69,	// (0x00020ce3) list_single_2graphic_im_pane_g

0xd5b4,	// (0x0001e62e) list_single_2graphic_im_pane_t1_ParamLimits

0xd5b4,	// (0x0001e62e) list_single_2graphic_im_pane_t1

0x6c2a,	// (0x00017ca4) list_single_graphic_2heading_pane_fp_ParamLimits

0x6c2a,	// (0x00017ca4) list_single_graphic_2heading_pane_fp

0x6c92,	// (0x00017d0c) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6c92,	// (0x00017d0c) list_single_graphic_2heading_pane_fp_g1

0x6c43,	// (0x00017cbd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6c43,	// (0x00017cbd) list_single_graphic_2heading_pane_fp_g2

0x6c4f,	// (0x00017cc9) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6c4f,	// (0x00017cc9) list_single_graphic_2heading_pane_fp_g3

0x6c5b,	// (0x00017cd5) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6c5b,	// (0x00017cd5) list_single_graphic_2heading_pane_fp_g4

0x6c6f,	// (0x00017ce9) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6c6f,	// (0x00017ce9) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb90,	// (0x00020c0a) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb90,	// (0x00020c0a) list_single_graphic_2heading_pane_fp_g

0x7433,	// (0x000184ad) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7433,	// (0x000184ad) list_single_graphic_2heading_pane_fp_t1

0x6cca,	// (0x00017d44) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6cca,	// (0x00017d44) list_single_graphic_2heading_pane_fp_t2

0x7449,	// (0x000184c3) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7449,	// (0x000184c3) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc72,	// (0x00020cec) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc72,	// (0x00020cec) list_single_graphic_2heading_pane_fp_t

0x660b,	// (0x00017685) fep_hwr_write_pane_g5_ParamLimits

0x660b,	// (0x00017685) fep_hwr_write_pane_g5

0x6617,	// (0x00017691) fep_hwr_write_pane_g6_ParamLimits

0x6617,	// (0x00017691) fep_hwr_write_pane_g6

0x7103,	// (0x0001817d) eswt_shell_pane_ParamLimits

0x3ced,	// (0x00014d67) bg_popup_window_pane_cp18_ParamLimits

0x4fa9,	// (0x00016023) heading_pane_cp70

0x722d,	// (0x000182a7) popup_eswt_tasktip_window_t1_ParamLimits

0xc654,	// (0x0001d6ce) aid_touch_tab_arrow_left

0xc66a,	// (0x0001d6e4) aid_touch_tab_arrow_right

0xb185,	// (0x0001c1ff) title_pane_g3_ParamLimits

0xb185,	// (0x0001c1ff) title_pane_g3

0x1d54,	// (0x00012dce) set_value_pane_g1

0xc591,	// (0x0001d60b) popup_toolbar_trans_pane_ParamLimits

0x7379,	// (0x000183f3) aid_size_cell_tb_trans_pane_ParamLimits

0x1e85,	// (0x00012eff) bg_tb_trans_pane_ParamLimits

0x738b,	// (0x00018405) grid_tb_trans_pane_ParamLimits

0x12ed,	// (0x00012367) cont_note_pane_ParamLimits

0x12ed,	// (0x00012367) cont_note_pane

0x165b,	// (0x000126d5) cont_snote2_single_text_pane_ParamLimits

0x165b,	// (0x000126d5) cont_snote2_single_text_pane

0x165b,	// (0x000126d5) cont_snote2_single_graphic_pane_ParamLimits

0x165b,	// (0x000126d5) cont_snote2_single_graphic_pane

0x42d0,	// (0x0001534a) cont_note_wait_pane_ParamLimits

0x42d0,	// (0x0001534a) cont_note_wait_pane

0x42d0,	// (0x0001534a) cont_note_image_pane_ParamLimits

0x42d0,	// (0x0001534a) cont_note_image_pane

0x745f,	// (0x000184d9) popup_note2_window_g1_ParamLimits

0x745f,	// (0x000184d9) popup_note2_window_g1

0x7490,	// (0x0001850a) popup_note2_window_t1_ParamLimits

0x7490,	// (0x0001850a) popup_note2_window_t1

0x74d5,	// (0x0001854f) popup_note2_window_t2_ParamLimits

0x74d5,	// (0x0001854f) popup_note2_window_t2

0x751a,	// (0x00018594) popup_note2_window_t3_ParamLimits

0x751a,	// (0x00018594) popup_note2_window_t3

0x755f,	// (0x000185d9) popup_note2_window_t4_ParamLimits

0x755f,	// (0x000185d9) popup_note2_window_t4

0x1371,	// (0x000123eb) popup_note2_window_t5_ParamLimits

0x1371,	// (0x000123eb) popup_note2_window_t5

0x0004,

0xfc7e,	// (0x00020cf8) popup_note2_window_t_ParamLimits

0xfc7e,	// (0x00020cf8) popup_note2_window_t

0x758e,	// (0x00018608) popup_note2_image_window_g1_ParamLimits

0x758e,	// (0x00018608) popup_note2_image_window_g1

0x759a,	// (0x00018614) popup_note2_image_window_g2_ParamLimits

0x759a,	// (0x00018614) popup_note2_image_window_g2

0x0001,

0xfc89,	// (0x00020d03) popup_note2_image_window_g_ParamLimits

0xfc89,	// (0x00020d03) popup_note2_image_window_g

0x75ac,	// (0x00018626) popup_note2_image_window_t1_ParamLimits

0x75ac,	// (0x00018626) popup_note2_image_window_t1

0x75c4,	// (0x0001863e) popup_note2_image_window_t2_ParamLimits

0x75c4,	// (0x0001863e) popup_note2_image_window_t2

0x75dc,	// (0x00018656) popup_note2_image_window_t3_ParamLimits

0x75dc,	// (0x00018656) popup_note2_image_window_t3

0x0002,

0xfc8e,	// (0x00020d08) popup_note2_image_window_t_ParamLimits

0xfc8e,	// (0x00020d08) popup_note2_image_window_t

0x42de,	// (0x00015358) popup_note2_wait_window_g1_ParamLimits

0x42de,	// (0x00015358) popup_note2_wait_window_g1

0x75f8,	// (0x00018672) popup_note2_wait_window_g2_ParamLimits

0x75f8,	// (0x00018672) popup_note2_wait_window_g2

0x42f6,	// (0x00015370) popup_note2_wait_window_g3_ParamLimits

0x42f6,	// (0x00015370) popup_note2_wait_window_g3

0x0002,

0xfc95,	// (0x00020d0f) popup_note2_wait_window_g_ParamLimits

0xfc95,	// (0x00020d0f) popup_note2_wait_window_g

0x7604,	// (0x0001867e) popup_note2_wait_window_t1_ParamLimits

0x7604,	// (0x0001867e) popup_note2_wait_window_t1

0x7622,	// (0x0001869c) popup_note2_wait_window_t2_ParamLimits

0x7622,	// (0x0001869c) popup_note2_wait_window_t2

0x7640,	// (0x000186ba) popup_note2_wait_window_t3_ParamLimits

0x7640,	// (0x000186ba) popup_note2_wait_window_t3

0x7652,	// (0x000186cc) popup_note2_wait_window_t4_ParamLimits

0x7652,	// (0x000186cc) popup_note2_wait_window_t4

0x0003,

0xfc9c,	// (0x00020d16) popup_note2_wait_window_t_ParamLimits

0xfc9c,	// (0x00020d16) popup_note2_wait_window_t

0x7664,	// (0x000186de) wait_bar2_pane_ParamLimits

0x7664,	// (0x000186de) wait_bar2_pane

0x767c,	// (0x000186f6) popup_snote2_single_text_window_g1_ParamLimits

0x767c,	// (0x000186f6) popup_snote2_single_text_window_g1

0x76a4,	// (0x0001871e) popup_snote2_single_text_window_t1_ParamLimits

0x76a4,	// (0x0001871e) popup_snote2_single_text_window_t1

0x76f0,	// (0x0001876a) popup_snote2_single_text_window_t2_ParamLimits

0x76f0,	// (0x0001876a) popup_snote2_single_text_window_t2

0x773c,	// (0x000187b6) popup_snote2_single_text_window_t3_ParamLimits

0x773c,	// (0x000187b6) popup_snote2_single_text_window_t3

0x777d,	// (0x000187f7) popup_snote2_single_text_window_t4_ParamLimits

0x777d,	// (0x000187f7) popup_snote2_single_text_window_t4

0x77b3,	// (0x0001882d) popup_snote2_single_text_window_t5_ParamLimits

0x77b3,	// (0x0001882d) popup_snote2_single_text_window_t5

0x0004,

0xfca5,	// (0x00020d1f) popup_snote2_single_text_window_t_ParamLimits

0xfca5,	// (0x00020d1f) popup_snote2_single_text_window_t

0x77de,	// (0x00018858) popup_snote2_single_graphic_window_g1_ParamLimits

0x77de,	// (0x00018858) popup_snote2_single_graphic_window_g1

0x7806,	// (0x00018880) popup_snote2_single_graphic_window_g2_ParamLimits

0x7806,	// (0x00018880) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb0,	// (0x00020d2a) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb0,	// (0x00020d2a) popup_snote2_single_graphic_window_g

0x782e,	// (0x000188a8) popup_snote2_single_graphic_window_t1_ParamLimits

0x782e,	// (0x000188a8) popup_snote2_single_graphic_window_t1

0x787a,	// (0x000188f4) popup_snote2_single_graphic_window_t2_ParamLimits

0x787a,	// (0x000188f4) popup_snote2_single_graphic_window_t2

0x773c,	// (0x000187b6) popup_snote2_single_graphic_window_t3_ParamLimits

0x773c,	// (0x000187b6) popup_snote2_single_graphic_window_t3

0x777d,	// (0x000187f7) popup_snote2_single_graphic_window_t4_ParamLimits

0x777d,	// (0x000187f7) popup_snote2_single_graphic_window_t4

0x77b3,	// (0x0001882d) popup_snote2_single_graphic_window_t5_ParamLimits

0x77b3,	// (0x0001882d) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb5,	// (0x00020d2f) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb5,	// (0x00020d2f) popup_snote2_single_graphic_window_t

0x5ffc,	// (0x00017076) clock_nsta_pane_cp2_t1

0x5ffc,	// (0x00017076) clock_nsta_pane_cp2_t2

0x0001,

0xfac9,	// (0x00020b43) clock_nsta_pane_cp2_t

0x1e9f,	// (0x00012f19) form_field_data_wide_pane_g1_ParamLimits

0x1eab,	// (0x00012f25) form_field_data_wide_pane_g2_ParamLimits

0x1eab,	// (0x00012f25) form_field_data_wide_pane_g2

0x1eb7,	// (0x00012f31) form_field_data_wide_pane_g3_ParamLimits

0x1eb7,	// (0x00012f31) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0002070c) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0002070c) form_field_data_wide_pane_g

0xd05a,	// (0x0001e0d4) grid_touch_3_pane_ParamLimits

0xd05a,	// (0x0001e0d4) grid_touch_3_pane

0xd5e5,	// (0x0001e65f) cell_touch_3_pane_ParamLimits

0xd5e5,	// (0x0001e65f) cell_touch_3_pane

0x656b,	// (0x000175e5) cell_touch_3_pane_g1

0x656b,	// (0x000175e5) cell_touch_3_pane_g2

0x0001,

0xfb4e,	// (0x00020bc8) cell_touch_3_pane_g

0x13a3,	// (0x0001241d) cont_query_data_pane

0x13ab,	// (0x00012425) cont_query_data_pane_cp1

0x78f9,	// (0x00018973) button_value_adjust_pane_cp7

0x7901,	// (0x0001897b) query_popup_pane_cp3

0x2721,	// (0x0001379b) bg_popup_sub_pane_cp22_ParamLimits

0xf14b,	// (0x000201c5) navi_navi_volume_pane_cp2

0xf166,	// (0x000201e0) popup_side_volume_key_window_g2

0xf175,	// (0x000201ef) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0002079e) popup_side_volume_key_window_g

0xf192,	// (0x0002020c) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x000207a5) popup_side_volume_key_window_t

0x2a68,	// (0x00013ae2) popup_side_volume_key_window_ParamLimits

0xb667,	// (0x0001c6e1) list_double_graphic_pane_g4_ParamLimits

0xb667,	// (0x0001c6e1) list_double_graphic_pane_g4

0xcef7,	// (0x0001df71) list_single_2heading_msg_pane_ParamLimits

0xcef7,	// (0x0001df71) list_single_2heading_msg_pane

0xd62f,	// (0x0001e6a9) list_single_2heading_msg_pane_g1_ParamLimits

0xd62f,	// (0x0001e6a9) list_single_2heading_msg_pane_g1

0xd63b,	// (0x0001e6b5) list_single_2heading_msg_pane_g2_ParamLimits

0xd63b,	// (0x0001e6b5) list_single_2heading_msg_pane_g2

0xd64e,	// (0x0001e6c8) list_single_2heading_msg_pane_g3_ParamLimits

0xd64e,	// (0x0001e6c8) list_single_2heading_msg_pane_g3

0xd65a,	// (0x0001e6d4) list_single_2heading_msg_pane_g4_ParamLimits

0xd65a,	// (0x0001e6d4) list_single_2heading_msg_pane_g4

0x0003,

0xfcc0,	// (0x00020d3a) list_single_2heading_msg_pane_g_ParamLimits

0xfcc0,	// (0x00020d3a) list_single_2heading_msg_pane_g

0xd672,	// (0x0001e6ec) list_single_2heading_msg_pane_t1_ParamLimits

0xd672,	// (0x0001e6ec) list_single_2heading_msg_pane_t1

0xd69a,	// (0x0001e714) list_single_2heading_msg_pane_t2_ParamLimits

0xd69a,	// (0x0001e714) list_single_2heading_msg_pane_t2

0xd705,	// (0x0001e77f) list_single_2heading_msg_pane_t3_ParamLimits

0xd705,	// (0x0001e77f) list_single_2heading_msg_pane_t3

0x79f2,	// (0x00018a6c) list_single_2heading_msg_pane_t4_ParamLimits

0x79f2,	// (0x00018a6c) list_single_2heading_msg_pane_t4

0x0003,

0xfcc9,	// (0x00020d43) list_single_2heading_msg_pane_t_ParamLimits

0xfcc9,	// (0x00020d43) list_single_2heading_msg_pane_t

0xec26,	// (0x0001fca0) title_pane_g4_ParamLimits

0xec26,	// (0x0001fca0) title_pane_g4

0xef60,	// (0x0001ffda) title_pane_stacon_g3_ParamLimits

0xef60,	// (0x0001ffda) title_pane_stacon_g3

0x73f6,	// (0x00018470) list_single_2graphic_im_pane_g4_ParamLimits

0x73f6,	// (0x00018470) list_single_2graphic_im_pane_g4

0x4d46,	// (0x00015dc0) popup_side_volume_key_window_cp

0x5645,	// (0x000166bf) main_idle_act2_pane_t1

0xf467,	// (0x000204e1) toolbar_button_pane_g10

0xb512,	// (0x0001c58c) popup_toolbar_window_cp1

0x5fed,	// (0x00017067) clock_nsta_pane_cp_t1

0x5fed,	// (0x00017067) clock_nsta_pane_cp_t2

0x0001,

0xfac4,	// (0x00020b3e) clock_nsta_pane_cp_t

0xf14b,	// (0x000201c5) navi_navi_volume_pane_cp2_ParamLimits

0xf15a,	// (0x000201d4) popup_side_volume_key_window_g1_ParamLimits

0xf166,	// (0x000201e0) popup_side_volume_key_window_g2_ParamLimits

0xf175,	// (0x000201ef) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0002079e) popup_side_volume_key_window_g_ParamLimits

0x02b8,	// (0x00011332) fep_hwr_aid_pane

0x0361,	// (0x000113db) bg_fep_hwr_top_pane_g4_ParamLimits

0x65db,	// (0x00017655) fep_hwr_top_pane_g1_ParamLimits

0x65ed,	// (0x00017667) fep_hwr_top_pane_g2_ParamLimits

0x0381,	// (0x000113fb) fep_hwr_top_pane_g3_ParamLimits

0xfb19,	// (0x00020b93) fep_hwr_top_pane_g_ParamLimits

0x0396,	// (0x00011410) fep_hwr_top_text_pane_ParamLimits

0x4afb,	// (0x00015b75) aid_touch_tab_arrow_arrow_2

0x4b04,	// (0x00015b7e) aid_touch_tab_arrow_left_2

0x02cc,	// (0x00011346) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0303,	// (0x0001137d) fep_hwr_prediction_pane

0x6785,	// (0x000177ff) fep_vkb_prediction_pane

0xd3a2,	// (0x0001e41c) fep_vkb_side_pane_g3_ParamLimits

0xd3a2,	// (0x0001e41c) fep_vkb_side_pane_g3

0x0525,	// (0x0001159f) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0596,	// (0x00011610) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x05a3,	// (0x0001161d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc8,	// (0x00020c42) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x06d2,	// (0x0001174c) fep_hwr_prediction_pane_g1

0x06dc,	// (0x00011756) fep_hwr_prediction_pane_g2

0x06e4,	// (0x0001175e) fep_hwr_prediction_pane_g3

0x06ec,	// (0x00011766) fep_hwr_prediction_pane_g4

0x0003,

0xfcd2,	// (0x00020d4c) fep_hwr_prediction_pane_g

0x7a17,	// (0x00018a91) fep_vkb_prediction_pane_g1

0x7a21,	// (0x00018a9b) fep_vkb_prediction_pane_g2

0x7a29,	// (0x00018aa3) fep_vkb_prediction_pane_g3

0x7a31,	// (0x00018aab) fep_vkb_prediction_pane_g4

0x0003,

0xfcdb,	// (0x00020d55) fep_vkb_prediction_pane_g

0x0138,	// (0x000111b2) slider_set_pane_g3

0x014c,	// (0x000111c6) slider_set_pane_g4

0x0164,	// (0x000111de) slider_set_pane_g5

0x0138,	// (0x000111b2) slider_set_pane_g6

0x017a,	// (0x000111f4) slider_set_pane_g7

0x521c,	// (0x00016296) slider_form_pane_g3

0x5225,	// (0x0001629f) slider_form_pane_g4

0x522d,	// (0x000162a7) slider_form_pane_g5

0x521c,	// (0x00016296) slider_form_pane_g6

0xce9a,	// (0x0001df14) slider_form_pane_g7

0x593f,	// (0x000169b9) slider_set_pane_vc_g3

0x5948,	// (0x000169c2) slider_set_pane_vc_g4

0x5951,	// (0x000169cb) slider_set_pane_vc_g5

0x593f,	// (0x000169b9) slider_set_pane_vc_g6

0x595a,	// (0x000169d4) slider_set_pane_vc_g7

0x593f,	// (0x000169b9) slider_form_pane_vc_g1

0x5948,	// (0x000169c2) slider_form_pane_vc_g2

0x5951,	// (0x000169cb) slider_form_pane_vc_g3

0x593f,	// (0x000169b9) slider_form_pane_vc_g4

0x5ce1,	// (0x00016d5b) slider_form_pane_vc_g5

0x0004,

0xfa9d,	// (0x00020b17) slider_form_pane_vc_g

0xea8f,	// (0x0001fb09) main_idle_act3_pane

0x7a39,	// (0x00018ab3) ai3_links_pane

0xd773,	// (0x0001e7ed) popup_ai3_data_window_ParamLimits

0xd773,	// (0x0001e7ed) popup_ai3_data_window

0xea8f,	// (0x0001fb09) grid_ai3_links_pane

0xd791,	// (0x0001e80b) cell_ai3_links_pane_ParamLimits

0xd791,	// (0x0001e80b) cell_ai3_links_pane

0x7a7a,	// (0x00018af4) bg_popup_sub_pane_cp11

0x7a87,	// (0x00018b01) cell_ai3_links_pane_g1

0xea8f,	// (0x0001fb09) bg_popup_sub_pane_cp12

0x7aac,	// (0x00018b26) heading_ai3_data_pane

0x7ab4,	// (0x00018b2e) list_ai3_gene_pane

0x7ac0,	// (0x00018b3a) popup_ai3_data_window_g1

0x7ac8,	// (0x00018b42) heading_ai3_data_pane_g1

0x7ad0,	// (0x00018b4a) heading_ai3_data_pane_t1

0x7ade,	// (0x00018b58) list_double_ai3_gene_pane_ParamLimits

0x7ade,	// (0x00018b58) list_double_ai3_gene_pane

0x7aeb,	// (0x00018b65) list_single_ai3_gene_pane_ParamLimits

0x7aeb,	// (0x00018b65) list_single_ai3_gene_pane

0x6530,	// (0x000175aa) list_highlight_pane_cp7_ParamLimits

0x6530,	// (0x000175aa) list_highlight_pane_cp7

0x7af8,	// (0x00018b72) list_single_a13_gene_pane_t1_ParamLimits

0x7af8,	// (0x00018b72) list_single_a13_gene_pane_t1

0x7b0f,	// (0x00018b89) list_single_ai3_gene_pane_g1

0x7b18,	// (0x00018b92) list_single_ai3_gene_pane_g2

0x0001,

0xfce4,	// (0x00020d5e) list_single_ai3_gene_pane_g

0x7b20,	// (0x00018b9a) list_double_ai3_gene_pane_g1_ParamLimits

0x7b20,	// (0x00018b9a) list_double_ai3_gene_pane_g1

0x7b2c,	// (0x00018ba6) list_double_ai3_gene_pane_t1_ParamLimits

0x7b2c,	// (0x00018ba6) list_double_ai3_gene_pane_t1

0x7b48,	// (0x00018bc2) list_double_ai3_gene_pane_t2_ParamLimits

0x7b48,	// (0x00018bc2) list_double_ai3_gene_pane_t2

0x7b5d,	// (0x00018bd7) list_double_ai3_gene_pane_t3_ParamLimits

0x7b5d,	// (0x00018bd7) list_double_ai3_gene_pane_t3

0x0002,

0xfce9,	// (0x00020d63) list_double_ai3_gene_pane_t_ParamLimits

0xfce9,	// (0x00020d63) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7912,	// (0x0001898c) aid_size_min_col_2

0xd619,	// (0x0001e693) aid_size_min_msg_ParamLimits

0xd619,	// (0x0001e693) aid_size_min_msg

0xd3b6,	// (0x0001e430) fep_vkb_top_text_pane_g2_ParamLimits

0xd3b6,	// (0x0001e430) fep_vkb_top_text_pane_g2

0x0001,

0xfb49,	// (0x00020bc3) fep_vkb_top_text_pane_g_ParamLimits

0xfb49,	// (0x00020bc3) fep_vkb_top_text_pane_g

0xea8f,	// (0x0001fb09) main_hc_apps_shell_pane

0x7b7a,	// (0x00018bf4) grid_hc_apps_pane_ParamLimits

0x7b7a,	// (0x00018bf4) grid_hc_apps_pane

0x7b89,	// (0x00018c03) list_hc_apps_pane

0x7b91,	// (0x00018c0b) scroll_pane_cp37_ParamLimits

0x7b91,	// (0x00018c0b) scroll_pane_cp37

0xd7ab,	// (0x0001e825) cell_hc_apps_pane_ParamLimits

0xd7ab,	// (0x0001e825) cell_hc_apps_pane

0xd875,	// (0x0001e8ef) cell_hc_apps_pane_g1_ParamLimits

0xd875,	// (0x0001e8ef) cell_hc_apps_pane_g1

0x7c86,	// (0x00018d00) cell_hc_apps_pane_g2_ParamLimits

0x7c86,	// (0x00018d00) cell_hc_apps_pane_g2

0x7ca2,	// (0x00018d1c) cell_hc_apps_pane_g3_ParamLimits

0x7ca2,	// (0x00018d1c) cell_hc_apps_pane_g3

0x0002,

0xfcf0,	// (0x00020d6a) cell_hc_apps_pane_g_ParamLimits

0xfcf0,	// (0x00020d6a) cell_hc_apps_pane_g

0xd8a2,	// (0x0001e91c) cell_hc_apps_pane_t1_ParamLimits

0xd8a2,	// (0x0001e91c) cell_hc_apps_pane_t1

0x12ed,	// (0x00012367) grid_highlight_pane_cp10_ParamLimits

0x12ed,	// (0x00012367) grid_highlight_pane_cp10

0xd8e2,	// (0x0001e95c) list_single_hc_apps_pane_ParamLimits

0xd8e2,	// (0x0001e95c) list_single_hc_apps_pane

0xd91c,	// (0x0001e996) list_single_hc_apps_pane_g1

0xd935,	// (0x0001e9af) list_single_hc_apps_pane_g2

0x0001,

0xfcf7,	// (0x00020d71) list_single_hc_apps_pane_g

0xd94e,	// (0x0001e9c8) list_single_hc_apps_pane_g2_copy1

0xd96a,	// (0x0001e9e4) list_single_hc_apps_pane_t1

0x1049,	// (0x000120c3) bg_set_opt_pane_cp_ParamLimits

0xee8a,	// (0x0001ff04) setting_slider_pane_t1_ParamLimits

0xeea0,	// (0x0001ff1a) setting_slider_pane_t2_ParamLimits

0xeeba,	// (0x0001ff34) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x000205f4) setting_slider_pane_t_ParamLimits

0xeed2,	// (0x0001ff4c) slider_set_pane_ParamLimits

0xf3bc,	// (0x00020436) control_pane_g5_ParamLimits

0xf3bc,	// (0x00020436) control_pane_g5

0x503d,	// (0x000160b7) slider_set_pane_g1_ParamLimits

0x012c,	// (0x000111a6) slider_set_pane_g2_ParamLimits

0x0138,	// (0x000111b2) slider_set_pane_g3_ParamLimits

0x014c,	// (0x000111c6) slider_set_pane_g4_ParamLimits

0x0164,	// (0x000111de) slider_set_pane_g5_ParamLimits

0x0138,	// (0x000111b2) slider_set_pane_g6_ParamLimits

0x017a,	// (0x000111f4) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x000209e5) slider_set_pane_g_ParamLimits

0x2b4d,	// (0x00013bc7) navi_icon_text_pane_ParamLimits

0xc61e,	// (0x0001d698) aid_fill_nsta_2_ParamLimits

0xc654,	// (0x0001d6ce) aid_touch_tab_arrow_left_ParamLimits

0xc66a,	// (0x0001d6e4) aid_touch_tab_arrow_right_ParamLimits

0xc72d,	// (0x0001d7a7) clock_nsta_pane_ParamLimits

0xcbd7,	// (0x0001dc51) navi_icon_pane_g1_ParamLimits

0xcbe3,	// (0x0001dc5d) navi_text_pane_t1_ParamLimits

0xd134,	// (0x0001e1ae) navi_icon_text_pane_g1_ParamLimits

0xd140,	// (0x0001e1ba) navi_icon_text_pane_t1_ParamLimits

0xd91c,	// (0x0001e996) list_single_hc_apps_pane_g1_ParamLimits

0xd935,	// (0x0001e9af) list_single_hc_apps_pane_g2_ParamLimits

0xfcf7,	// (0x00020d71) list_single_hc_apps_pane_g_ParamLimits

0xd94e,	// (0x0001e9c8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd96a,	// (0x0001e9e4) list_single_hc_apps_pane_t1_ParamLimits

0xa941,	// (0x0001b9bb) popup_toolbar2_fixed_window_ParamLimits

0xa941,	// (0x0001b9bb) popup_toolbar2_fixed_window

0xc587,	// (0x0001d601) popup_toolbar2_float_window

0xea8f,	// (0x0001fb09) bg_popup_sub_pane_cp27

0x7dbf,	// (0x00018e39) grid_toolbar2_float_pane

0xea8f,	// (0x0001fb09) bg_popup_sub_pane_cp26

0x7dbf,	// (0x00018e39) grid_toolbar2_fixed_pane

0xd998,	// (0x0001ea12) cell_toolbar2_fixed_pane_ParamLimits

0xd998,	// (0x0001ea12) cell_toolbar2_fixed_pane

0xd9b5,	// (0x0001ea2f) cell_toolbar2_fixed_pane_g1

0x7de0,	// (0x00018e5a) toolbar2_fixed_button_pane

0x3bd1,	// (0x00014c4b) toolbar2_fixed_button_pane_g1

0x3be1,	// (0x00014c5b) toolbar2_fixed_button_pane_g2

0x3bd9,	// (0x00014c53) toolbar2_fixed_button_pane_g3

0x3bf1,	// (0x00014c6b) toolbar2_fixed_button_pane_g4

0x3be9,	// (0x00014c63) toolbar2_fixed_button_pane_g5

0x3bf9,	// (0x00014c73) toolbar2_fixed_button_pane_g6

0x3c01,	// (0x00014c7b) toolbar2_fixed_button_pane_g7

0x3c11,	// (0x00014c8b) toolbar2_fixed_button_pane_g8

0x3c09,	// (0x00014c83) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x000208e7) toolbar2_fixed_button_pane_g

0x7e09,	// (0x00018e83) cell_toolbar2_float_pane_ParamLimits

0x7e09,	// (0x00018e83) cell_toolbar2_float_pane

0x7e1a,	// (0x00018e94) cell_toolbar2_float_pane_g1

0x7de0,	// (0x00018e5a) toolbar2_fixed_button_pane_cp

0xd29e,	// (0x0001e318) fep_vkb_accented_list_pane_ParamLimits

0xd29e,	// (0x0001e318) fep_vkb_accented_list_pane

0x0505,	// (0x0001157f) bg_popup_fep_shadow_pane_g9

0x2cd1,	// (0x00013d4b) bg_popup_fep_shadow_pane_cp3

0x2150,	// (0x000131ca) list_accented_list_pane

0x7e23,	// (0x00018e9d) list_single_accented_list_pane_ParamLimits

0x7e23,	// (0x00018e9d) list_single_accented_list_pane

0x2cd1,	// (0x00013d4b) list_highlight_pane_cp10

0x7e34,	// (0x00018eae) list_single_accented_list_pane_t1

0xc4a3,	// (0x0001d51d) popup_slider_window_ParamLimits

0xc4a3,	// (0x0001d51d) popup_slider_window

0x7909,	// (0x00018983) aid_indentation_list_msg

0xdac0,	// (0x0001eb3a) bg_popup_window_pane_cp19

0x7f6e,	// (0x00018fe8) popup_slider_window_g1

0x7f8a,	// (0x00019004) popup_slider_window_g2

0x7fa6,	// (0x00019020) popup_slider_window_g3

0x0005,

0xfcfc,	// (0x00020d76) popup_slider_window_g

0x8002,	// (0x0001907c) popup_slider_window_t1

0x8076,	// (0x000190f0) small_volume_slider_vertical_pane

0x656b,	// (0x000175e5) small_volume_slider_vertical_pane_g1

0x656b,	// (0x000175e5) small_volume_slider_vertical_pane_g2

0x8092,	// (0x0001910c) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0e,	// (0x00020d88) small_volume_slider_vertical_pane_g

0xa8ab,	// (0x0001b925) area_side_right_pane_ParamLimits

0xa8ab,	// (0x0001b925) area_side_right_pane

0xad17,	// (0x0001bd91) aid_size_side_button_ParamLimits

0xad17,	// (0x0001bd91) aid_size_side_button

0xad30,	// (0x0001bdaa) grid_sctrl_middle_pane_ParamLimits

0xad30,	// (0x0001bdaa) grid_sctrl_middle_pane

0x0728,	// (0x000117a2) sctrl_sk_bottom_pane

0x0739,	// (0x000117b3) sctrl_sk_top_pane

0x074b,	// (0x000117c5) aid_touch_sctrl_top

0x0758,	// (0x000117d2) bg_sctrl_sk_pane_ParamLimits

0x0758,	// (0x000117d2) bg_sctrl_sk_pane

0x0766,	// (0x000117e0) sctrl_sk_top_pane_g1

0x0773,	// (0x000117ed) sctrl_sk_top_pane_t1

0x074b,	// (0x000117c5) aid_touch_sctrl_bottom

0x0758,	// (0x000117d2) bg_sctrl_sk_pane_cp_ParamLimits

0x0758,	// (0x000117d2) bg_sctrl_sk_pane_cp

0x078e,	// (0x00011808) sctrl_sk_bottom_pane_g1

0x0773,	// (0x000117ed) sctrl_sk_bottom_pane_t1

0xad4a,	// (0x0001bdc4) cell_sctrl_middle_pane_ParamLimits

0xad4a,	// (0x0001bdc4) cell_sctrl_middle_pane

0xad5d,	// (0x0001bdd7) aid_touch_sctrl_middle_ParamLimits

0xad5d,	// (0x0001bdd7) aid_touch_sctrl_middle

0xad6a,	// (0x0001bde4) bg_sctrl_middle_pane_ParamLimits

0xad6a,	// (0x0001bde4) bg_sctrl_middle_pane

0x0e08,	// (0x00011e82) cell_sctrl_middle_pane_g1_ParamLimits

0x0e08,	// (0x00011e82) cell_sctrl_middle_pane_g1

0xad78,	// (0x0001bdf2) cell_sctrl_middle_pane_g2_ParamLimits

0xad78,	// (0x0001bdf2) cell_sctrl_middle_pane_g2

0x0001,

0xfd1a,	// (0x00020d94) cell_sctrl_middle_pane_g_ParamLimits

0xfd1a,	// (0x00020d94) cell_sctrl_middle_pane_g

0x3bd1,	// (0x00014c4b) bg_sctrl_middle_pane_g1

0x3bd9,	// (0x00014c53) bg_sctrl_middle_pane_g2

0x3be1,	// (0x00014c5b) bg_sctrl_middle_pane_g3

0x3be9,	// (0x00014c63) bg_sctrl_middle_pane_g4

0x3bf1,	// (0x00014c6b) bg_sctrl_middle_pane_g5

0x3bf9,	// (0x00014c73) bg_sctrl_middle_pane_g6

0x3c01,	// (0x00014c7b) bg_sctrl_middle_pane_g7

0x3c09,	// (0x00014c83) bg_sctrl_middle_pane_g8

0x0007,

0xfd1f,	// (0x00020d99) bg_sctrl_middle_pane_g

0x3c11,	// (0x00014c8b) bg_sctrl_middle_pane_g8_copy1

0x3bd1,	// (0x00014c4b) bg_sctrl_sk_pane_g1

0x3be1,	// (0x00014c5b) bg_sctrl_sk_pane_g2

0x3bd9,	// (0x00014c53) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x000208e7) bg_sctrl_sk_pane_g

0x1819,	// (0x00012893) aid_size_touch_scroll_bar

0x3bf1,	// (0x00014c6b) bg_sctrl_sk_pane_g4

0x3be9,	// (0x00014c63) bg_sctrl_sk_pane_g5

0x3bf9,	// (0x00014c73) bg_sctrl_sk_pane_g6

0x3c01,	// (0x00014c7b) bg_sctrl_sk_pane_g7

0x3c11,	// (0x00014c8b) bg_sctrl_sk_pane_g8

0x3c09,	// (0x00014c83) bg_sctrl_sk_pane_g9

0x3111,	// (0x0001418b) popup_fep_china_hwr2_fs_candidate_window

0xbf5f,	// (0x0001cfd9) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbf5f,	// (0x0001cfd9) popup_fep_china_hwr2_fs_control_window

0x0525,	// (0x0001159f) sctrl_sk_top_pane_g2

0x0001,

0xfd15,	// (0x00020d8f) sctrl_sk_top_pane_g

0xdb85,	// (0x0001ebff) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdb85,	// (0x0001ebff) aid_fep_china_hwr2_fs_cell

0xdb9b,	// (0x0001ec15) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb9b,	// (0x0001ec15) bg_popup_fep_shadow_pane_cp4

0xdbb2,	// (0x0001ec2c) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdbb2,	// (0x0001ec2c) bg_popup_fep_shadow_pane_cp5

0xdbc4,	// (0x0001ec3e) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdbc4,	// (0x0001ec3e) popup_fep_china_hwr2_fs_control_bar_grid

0xdbd8,	// (0x0001ec52) popup_fep_china_hwr2_fs_control_funtion_grid

0x80f1,	// (0x0001916b) aid_fep_china_hwr2_fs_candi_cell

0xea8f,	// (0x0001fb09) bg_popup_fep_shadow_pane_cp6

0x80fb,	// (0x00019175) popup_fep_china_hwr2_fs_candidate_grid

0xdbe0,	// (0x0001ec5a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdbe0,	// (0x0001ec5a) cell_fep_china_hwr2_fs_funtion_grid

0x656b,	// (0x000175e5) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x811d,	// (0x00019197) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x811d,	// (0x00019197) cell_fep_china_hwr2_fs_funtion_grid_g1

0x812b,	// (0x000191a5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x812b,	// (0x000191a5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd30,	// (0x00020daa) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd30,	// (0x00020daa) cell_fep_china_hwr2_fs_funtion_grid_g

0xdbf8,	// (0x0001ec72) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdbf8,	// (0x0001ec72) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdc0d,	// (0x0001ec87) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdc0d,	// (0x0001ec87) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd35,	// (0x00020daf) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd35,	// (0x00020daf) cell_fep_china_hwr2_fs_funtion_grid_t

0x8172,	// (0x000191ec) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x817a,	// (0x000191f4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8182,	// (0x000191fc) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3a,	// (0x00020db4) popup_fep_china_hwr2_fs_control_bar_grid_g

0x818a,	// (0x00019204) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x818a,	// (0x00019204) cell_fep_china_hwr2_fs_candidate_grid

0x81a9,	// (0x00019223) popup_fep_china_hwr2_fs_candidate_grid_g20

0x81b1,	// (0x0001922b) popup_fep_china_hwr2_fs_candidate_grid_g21

0x656b,	// (0x000175e5) cell_fep_china_hwr2_fs_candidate_grid_g1

0x656b,	// (0x000175e5) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4e,	// (0x00020bc8) cell_fep_china_hwr2_fs_candidate_grid_g

0x81b9,	// (0x00019233) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3780,	// (0x000147fa) clock_nsta_pane_cp_24_ParamLimits

0x3780,	// (0x000147fa) clock_nsta_pane_cp_24

0x3800,	// (0x0001487a) indicator_nsta_pane_cp_24_ParamLimits

0x3800,	// (0x0001487a) indicator_nsta_pane_cp_24

0x4953,	// (0x000159cd) heading_pane_g1

0x0001,

0xf8d2,	// (0x0002094c) heading_pane_g

0x548c,	// (0x00016506) grid_sct_catagory_button_pane

0x54be,	// (0x00016538) scroll_pane_cp5_ParamLimits

0x615e,	// (0x000171d8) button_value_adjust_pane_cp5_ParamLimits

0x615e,	// (0x000171d8) button_value_adjust_pane_cp5

0x6264,	// (0x000172de) form2_midp_time_pane_ParamLimits

0x81c7,	// (0x00019241) cell_sct_catagory_button_pane_ParamLimits

0x81c7,	// (0x00019241) cell_sct_catagory_button_pane

0x6530,	// (0x000175aa) bg_button_pane_cp01_ParamLimits

0x6530,	// (0x000175aa) bg_button_pane_cp01

0x656b,	// (0x000175e5) cell_sct_catagory_button_pane_g1

0xc524,	// (0x0001d59e) popup_tb_extension_window

0xdc29,	// (0x0001eca3) aid_size_cell_ext_ParamLimits

0xdc29,	// (0x0001eca3) aid_size_cell_ext

0x165b,	// (0x000126d5) bg_tb_trans_pane_cp1_ParamLimits

0x165b,	// (0x000126d5) bg_tb_trans_pane_cp1

0xdc4f,	// (0x0001ecc9) grid_tb_ext_pane_ParamLimits

0xdc4f,	// (0x0001ecc9) grid_tb_ext_pane

0xdc8f,	// (0x0001ed09) cell_tb_ext_pane_ParamLimits

0xdc8f,	// (0x0001ed09) cell_tb_ext_pane

0xdcb9,	// (0x0001ed33) cell_tb_ext_pane_g1_ParamLimits

0xdcb9,	// (0x0001ed33) cell_tb_ext_pane_g1

0x825d,	// (0x000192d7) cell_tb_ext_pane_t1

0x12ed,	// (0x00012367) list_highlight_pane_cp11_ParamLimits

0x12ed,	// (0x00012367) list_highlight_pane_cp11

0xee13,	// (0x0001fe8d) popup_uni_indicator_window_ParamLimits

0xee13,	// (0x0001fe8d) popup_uni_indicator_window

0x1e85,	// (0x00012eff) bg_popup_sub_pane_cp14

0x8278,	// (0x000192f2) list_uniindi_pane

0x8284,	// (0x000192fe) uniindi_top_pane

0x12ed,	// (0x00012367) bg_uniindi_top_pane

0x82a5,	// (0x0001931f) uniindi_top_pane_g1

0x82bb,	// (0x00019335) uniindi_top_pane_g2

0x0003,

0xfd41,	// (0x00020dbb) uniindi_top_pane_g

0x82e5,	// (0x0001935f) uniindi_top_pane_t1

0x8311,	// (0x0001938b) list_single_uniindi_pane_ParamLimits

0x8311,	// (0x0001938b) list_single_uniindi_pane

0x656b,	// (0x000175e5) bg_uniindi_top_pane_g1

0x8323,	// (0x0001939d) list_single_uniindi_pane_g1

0x8336,	// (0x000193b0) list_single_uniindi_pane_t1

0xeb57,	// (0x0001fbd1) control_bg_pane

0x835b,	// (0x000193d5) bg_sctrl_sk_pane_cp1

0x8364,	// (0x000193de) bg_sctrl_sk_pane_cp2

0x836d,	// (0x000193e7) control_bg_pane_g1

0x8376,	// (0x000193f0) control_bg_pane_g2

0x0001,

0xfd4a,	// (0x00020dc4) control_bg_pane_g

0x5f81,	// (0x00016ffb) cell_indicator_nsta_pane_g1_ParamLimits

0xd08d,	// (0x0001e107) cell_indicator_nsta_pane_g2_ParamLimits

0xfab2,	// (0x00020b2c) cell_indicator_nsta_pane_g_ParamLimits

0x62f4,	// (0x0001736e) form2_midp_time_pane_t1_ParamLimits

0xbed5,	// (0x0001cf4f) main_idle_act4_pane_ParamLimits

0xbed5,	// (0x0001cf4f) main_idle_act4_pane

0xc524,	// (0x0001d59e) popup_tb_extension_window_ParamLimits

0xdc77,	// (0x0001ecf1) tb_ext_find_pane_ParamLimits

0xdc77,	// (0x0001ecf1) tb_ext_find_pane

0x837f,	// (0x000193f9) ai_gene_pane_1_cp1

0x2e1a,	// (0x00013e94) ai_gene_pane_2_cp1

0x8387,	// (0x00019401) list_single_idle_plugin_calendar_pane

0x8390,	// (0x0001940a) list_single_idle_plugin_notification_pane

0x8399,	// (0x00019413) list_single_idle_plugin_player_pane

0xdcd6,	// (0x0001ed50) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdcd6,	// (0x0001ed50) list_single_idle_plugin_shortcut_pane

0xdcfe,	// (0x0001ed78) main_idle_act4_pane_t1

0xdd16,	// (0x0001ed90) main_idle_act4_pane_t2

0x0001,

0xfd4f,	// (0x00020dc9) main_idle_act4_pane_t

0xdd2e,	// (0x0001eda8) middle_sk_idle_act4_pane_ParamLimits

0xdd2e,	// (0x0001eda8) middle_sk_idle_act4_pane

0xdd4a,	// (0x0001edc4) popup_clock_digital_analogue_window_cp2

0xdd71,	// (0x0001edeb) shortcut_wheel_idle_act4_pane_ParamLimits

0xdd71,	// (0x0001edeb) shortcut_wheel_idle_act4_pane

0x656b,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g1

0x656b,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g2

0x656b,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g3

0x656b,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g4

0x656b,	// (0x000175e5) shortcut_wheel_idle_act4_pane_g5

0x842c,	// (0x000194a6) shortcut_wheel_idle_act4_pane_g6

0x8434,	// (0x000194ae) shortcut_wheel_idle_act4_pane_g7

0x843c,	// (0x000194b6) shortcut_wheel_idle_act4_pane_g8

0x8444,	// (0x000194be) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd54,	// (0x00020dce) shortcut_wheel_idle_act4_pane_g

0xc705,	// (0x0001d77f) middle_sk_idle_act4_pane_g1_ParamLimits

0xc705,	// (0x0001d77f) middle_sk_idle_act4_pane_g1

0xddee,	// (0x0001ee68) middle_sk_idle_act4_pane_g2_ParamLimits

0xddee,	// (0x0001ee68) middle_sk_idle_act4_pane_g2

0x0001,

0xfd77,	// (0x00020df1) middle_sk_idle_act4_pane_g_ParamLimits

0xfd77,	// (0x00020df1) middle_sk_idle_act4_pane_g

0xde06,	// (0x0001ee80) middle_sk_idle_act4_pane_t1_ParamLimits

0xde06,	// (0x0001ee80) middle_sk_idle_act4_pane_t1

0xde35,	// (0x0001eeaf) grid_ai_shortcut_pane_ParamLimits

0xde35,	// (0x0001eeaf) grid_ai_shortcut_pane

0xde52,	// (0x0001eecc) list_highlight_pane_cp16_ParamLimits

0xde52,	// (0x0001eecc) list_highlight_pane_cp16

0xde5f,	// (0x0001eed9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde5f,	// (0x0001eed9) list_single_idle_plugin_shortcut_pane_g1

0xde6b,	// (0x0001eee5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde6b,	// (0x0001eee5) list_single_idle_plugin_shortcut_pane_g2

0xde89,	// (0x0001ef03) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xde89,	// (0x0001ef03) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7c,	// (0x00020df6) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7c,	// (0x00020df6) list_single_idle_plugin_shortcut_pane_g

0xde9e,	// (0x0001ef18) cell_ai_shortcut_pane_ParamLimits

0xde9e,	// (0x0001ef18) cell_ai_shortcut_pane

0xdeb4,	// (0x0001ef2e) cell_ai_shortcut_pane_g1_ParamLimits

0xdeb4,	// (0x0001ef2e) cell_ai_shortcut_pane_g1

0x837f,	// (0x000193f9) ai_gene_pane_1_cp2

0x8575,	// (0x000195ef) ai_gene_pane_2_cp2

0x857d,	// (0x000195f7) list_highlight_pane_cp15

0x8586,	// (0x00019600) list_single_idle_plugin_calendar_pane_g1

0x857d,	// (0x000195f7) list_highlight_pane_cp17

0x858e,	// (0x00019608) list_single_idle_plugin_calendar_pane_g1_copy1

0x8596,	// (0x00019610) list_single_idle_plugin_player_pane_g1

0x56f3,	// (0x0001676d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd83,	// (0x00020dfd) list_single_idle_plugin_player_pane_g

0x859e,	// (0x00019618) list_single_idle_plugin_player_pane_t1

0x85ac,	// (0x00019626) list_single_idle_plugin_player_pane_t2

0x85ba,	// (0x00019634) list_single_idle_plugin_player_pane_t3

0x85c8,	// (0x00019642) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd88,	// (0x00020e02) list_single_idle_plugin_player_pane_t

0x85d6,	// (0x00019650) wait_bar_pane_cp15

0x85de,	// (0x00019658) grid_ai_notification_pane

0x56f3,	// (0x0001676d) list_single_idle_plugin_notification_pane_g1

0xded6,	// (0x0001ef50) cell_ai_notification_pane_ParamLimits

0xded6,	// (0x0001ef50) cell_ai_notification_pane

0x85f4,	// (0x0001966e) cell_ai_notification_pane_g1

0x85fc,	// (0x00019676) cell_ai_notification_pane_t1

0xdee3,	// (0x0001ef5d) tb_ext_find_button_pane

0xdeeb,	// (0x0001ef65) tb_ext_find_pane_g1

0xdef3,	// (0x0001ef6d) tb_ext_find_pane_t1

0x2657,	// (0x000136d1) tb_ext_find_button_pane_g1

0x8628,	// (0x000196a2) tb_ext_find_button_pane_g2

0x0001,

0xfd91,	// (0x00020e0b) tb_ext_find_button_pane_g

0xdcfe,	// (0x0001ed78) main_idle_act4_pane_t1_ParamLimits

0xdd16,	// (0x0001ed90) main_idle_act4_pane_t2_ParamLimits

0xfd4f,	// (0x00020dc9) main_idle_act4_pane_t_ParamLimits

0xdd4a,	// (0x0001edc4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd61,	// (0x0001eddb) sat_plugin_idle_act4_pane_ParamLimits

0xdd61,	// (0x0001eddb) sat_plugin_idle_act4_pane

0xdf01,	// (0x0001ef7b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdf01,	// (0x0001ef7b) sat_plugin_idle_act4_pane_t1

0xdf19,	// (0x0001ef93) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdf19,	// (0x0001ef93) sat_plugin_idle_act4_pane_t2

0xdf31,	// (0x0001efab) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdf31,	// (0x0001efab) sat_plugin_idle_act4_pane_t3

0xdf49,	// (0x0001efc3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdf49,	// (0x0001efc3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd96,	// (0x00020e10) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd96,	// (0x00020e10) sat_plugin_idle_act4_pane_t

0xedbf,	// (0x0001fe39) popup_battery_window_ParamLimits

0xedbf,	// (0x0001fe39) popup_battery_window

0x12ed,	// (0x00012367) bg_popup_sub_pane_cp25_ParamLimits

0x12ed,	// (0x00012367) bg_popup_sub_pane_cp25

0x867d,	// (0x000196f7) popup_battery_window_g1_ParamLimits

0x867d,	// (0x000196f7) popup_battery_window_g1

0x8689,	// (0x00019703) popup_battery_window_t1_ParamLimits

0x8689,	// (0x00019703) popup_battery_window_t1

0x869b,	// (0x00019715) popup_battery_window_t2_ParamLimits

0x869b,	// (0x00019715) popup_battery_window_t2

0x0001,

0xfd9f,	// (0x00020e19) popup_battery_window_t_ParamLimits

0xfd9f,	// (0x00020e19) popup_battery_window_t

0xbdc9,	// (0x0001ce43) midp_canvas_pane_ParamLimits

0xbe24,	// (0x0001ce9e) midp_keypad_pane_ParamLimits

0xbe24,	// (0x0001ce9e) midp_keypad_pane

0x305f,	// (0x000140d9) main_midp_pane_ParamLimits

0x600b,	// (0x00017085) signal_pane_g2_cp_ParamLimits

0xdf61,	// (0x0001efdb) aid_size_cell_midp_keypad_ParamLimits

0xdf61,	// (0x0001efdb) aid_size_cell_midp_keypad

0xdf7f,	// (0x0001eff9) midp_keyp_game_grid_pane_ParamLimits

0xdf7f,	// (0x0001eff9) midp_keyp_game_grid_pane

0xdfa6,	// (0x0001f020) midp_keyp_rocker_pane_ParamLimits

0xdfa6,	// (0x0001f020) midp_keyp_rocker_pane

0xdfeb,	// (0x0001f065) midp_keyp_sk_left_pane_ParamLimits

0xdfeb,	// (0x0001f065) midp_keyp_sk_left_pane

0xe03f,	// (0x0001f0b9) midp_keyp_sk_right_pane_ParamLimits

0xe03f,	// (0x0001f0b9) midp_keyp_sk_right_pane

0xea8f,	// (0x0001fb09) bg_button_pane_cp03

0xe093,	// (0x0001f10d) midp_keyp_sk_left_pane_g1

0xea8f,	// (0x0001fb09) bg_button_pane_cp04

0xe093,	// (0x0001f10d) midp_keyp_sk_right_pane_g1

0x656b,	// (0x000175e5) midp_keyp_rocker_pane_g1

0xe09c,	// (0x0001f116) keyp_game_cell_pane_ParamLimits

0xe09c,	// (0x0001f116) keyp_game_cell_pane

0xea8f,	// (0x0001fb09) bg_button_pane_cp02

0xe0c2,	// (0x0001f13c) keyp_game_cell_pane_g1

0xa8ed,	// (0x0001b967) popup_fep_vkb2_window_ParamLimits

0xa8ed,	// (0x0001b967) popup_fep_vkb2_window

0xad84,	// (0x0001bdfe) aid_size_cell_vkb2_ParamLimits

0xad84,	// (0x0001bdfe) aid_size_cell_vkb2

0xadb2,	// (0x0001be2c) popup_fep_vkb2_window_g1_ParamLimits

0xadb2,	// (0x0001be2c) popup_fep_vkb2_window_g1

0xae02,	// (0x0001be7c) vkb2_area_bottom_pane_ParamLimits

0xae02,	// (0x0001be7c) vkb2_area_bottom_pane

0xae5e,	// (0x0001bed8) vkb2_area_keypad_pane_ParamLimits

0xae5e,	// (0x0001bed8) vkb2_area_keypad_pane

0xaeac,	// (0x0001bf26) vkb2_area_top_pane_ParamLimits

0xaeac,	// (0x0001bf26) vkb2_area_top_pane

0xaf32,	// (0x0001bfac) vkb2_top_entry_pane_ParamLimits

0xaf32,	// (0x0001bfac) vkb2_top_entry_pane

0xaf5f,	// (0x0001bfd9) vkb2_top_grid_left_pane_ParamLimits

0xaf5f,	// (0x0001bfd9) vkb2_top_grid_left_pane

0xaf7f,	// (0x0001bff9) vkb2_top_grid_right_pane_ParamLimits

0xaf7f,	// (0x0001bff9) vkb2_top_grid_right_pane

0x0a04,	// (0x00011a7e) vkb2_cell_keypad_pane_ParamLimits

0x0a04,	// (0x00011a7e) vkb2_cell_keypad_pane

0xafc5,	// (0x0001c03f) vkb2_area_bottom_grid_pane_ParamLimits

0xafc5,	// (0x0001c03f) vkb2_area_bottom_grid_pane

0xafef,	// (0x0001c069) vkb2_area_bottom_pane_g1_ParamLimits

0xafef,	// (0x0001c069) vkb2_area_bottom_pane_g1

0xb015,	// (0x0001c08f) vkb2_area_bottom_pane_g2_ParamLimits

0xb015,	// (0x0001c08f) vkb2_area_bottom_pane_g2

0xb046,	// (0x0001c0c0) vkb2_area_bottom_pane_g3_ParamLimits

0xb046,	// (0x0001c0c0) vkb2_area_bottom_pane_g3

0x0002,

0xfda4,	// (0x00020e1e) vkb2_area_bottom_pane_g_ParamLimits

0xfda4,	// (0x00020e1e) vkb2_area_bottom_pane_g

0x0b93,	// (0x00011c0d) vkb2_top_cell_left_pane_ParamLimits

0x0b93,	// (0x00011c0d) vkb2_top_cell_left_pane

0xe0cb,	// (0x0001f145) vkb2_top_entry_pane_g1_ParamLimits

0xe0cb,	// (0x0001f145) vkb2_top_entry_pane_g1

0xe0d9,	// (0x0001f153) vkb2_top_entry_pane_t1_ParamLimits

0xe0d9,	// (0x0001f153) vkb2_top_entry_pane_t1

0x8828,	// (0x000198a2) vkb2_top_entry_pane_t2_ParamLimits

0x8828,	// (0x000198a2) vkb2_top_entry_pane_t2

0x8840,	// (0x000198ba) vkb2_top_entry_pane_t3_ParamLimits

0x8840,	// (0x000198ba) vkb2_top_entry_pane_t3

0x0002,

0xfdab,	// (0x00020e25) vkb2_top_entry_pane_t_ParamLimits

0xfdab,	// (0x00020e25) vkb2_top_entry_pane_t

0xb0b0,	// (0x0001c12a) vkb2_top_grid_right_pane_g1_ParamLimits

0xb0b0,	// (0x0001c12a) vkb2_top_grid_right_pane_g1

0x0bf6,	// (0x00011c70) vkb2_top_grid_right_pane_g2_ParamLimits

0x0bf6,	// (0x00011c70) vkb2_top_grid_right_pane_g2

0x0c0e,	// (0x00011c88) vkb2_top_grid_right_pane_g3_ParamLimits

0x0c0e,	// (0x00011c88) vkb2_top_grid_right_pane_g3

0xb0c6,	// (0x0001c140) vkb2_top_grid_right_pane_g4_ParamLimits

0xb0c6,	// (0x0001c140) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb2,	// (0x00020e2c) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb2,	// (0x00020e2c) vkb2_top_grid_right_pane_g

0x0c3c,	// (0x00011cb6) vkb2_top_cell_left_pane_g1

0x0c53,	// (0x00011ccd) vkb2_cell_keypad_pane_g1_ParamLimits

0x0c53,	// (0x00011ccd) vkb2_cell_keypad_pane_g1

0x8856,	// (0x000198d0) vkb2_cell_keypad_pane_t1_ParamLimits

0x8856,	// (0x000198d0) vkb2_cell_keypad_pane_t1

0x0c77,	// (0x00011cf1) vkb2_cell_bottom_grid_pane_ParamLimits

0x0c77,	// (0x00011cf1) vkb2_cell_bottom_grid_pane

0x0cb0,	// (0x00011d2a) vkb2_cell_bottom_grid_pane_g1

0xdd92,	// (0x0001ee0c) aid_call2_pane_cp02

0xdd9a,	// (0x0001ee14) aid_call_pane_cp02

0xdda2,	// (0x0001ee1c) clock_digital_number_pane_cp10

0xddaa,	// (0x0001ee24) clock_digital_number_pane_cp11

0xddb2,	// (0x0001ee2c) clock_digital_number_pane_cp12

0xddba,	// (0x0001ee34) clock_digital_number_pane_cp13

0xddc2,	// (0x0001ee3c) clock_digital_separator_pane_cp10

0x2657,	// (0x000136d1) popup_clock_digital_analogue_window_cp2_g1

0x2657,	// (0x000136d1) popup_clock_digital_analogue_window_cp2_g2

0xddca,	// (0x0001ee44) popup_clock_digital_analogue_window_cp2_g3

0x2657,	// (0x000136d1) popup_clock_digital_analogue_window_cp2_g4

0xddca,	// (0x0001ee44) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd67,	// (0x00020de1) popup_clock_digital_analogue_window_cp2_g

0xddd2,	// (0x0001ee4c) popup_clock_digital_analogue_window_cp2_t1

0xdde0,	// (0x0001ee5a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd72,	// (0x00020dec) popup_clock_digital_analogue_window_cp2_t

0x656b,	// (0x000175e5) clock_digital_number_pane_cp10_g1

0x656b,	// (0x000175e5) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4e,	// (0x00020bc8) clock_digital_number_pane_cp10_g

0x656b,	// (0x000175e5) clock_digital_separator_pane_cp10_g1

0x656b,	// (0x000175e5) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4e,	// (0x00020bc8) clock_digital_separator_pane_cp10_g

0x82c7,	// (0x00019341) uniindi_top_pane_g3

0x82d8,	// (0x00019352) uniindi_top_pane_g4

0x0a74,	// (0x00011aee) vkb2_row_keypad_pane_ParamLimits

0x0a74,	// (0x00011aee) vkb2_row_keypad_pane

0x0ccc,	// (0x00011d46) vkb2_cell_t_keypad_pane_ParamLimits

0x0ccc,	// (0x00011d46) vkb2_cell_t_keypad_pane

0x0cdc,	// (0x00011d56) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x0cdc,	// (0x00011d56) vkb2_cell_t_keypad_pane_cp08

0x0cf1,	// (0x00011d6b) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x0cf1,	// (0x00011d6b) vkb2_cell_t_keypad_pane_cp09

0x0d05,	// (0x00011d7f) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x0d05,	// (0x00011d7f) vkb2_cell_t_keypad_pane_cp01

0x0d16,	// (0x00011d90) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x0d16,	// (0x00011d90) vkb2_cell_t_keypad_pane_cp02

0x0d27,	// (0x00011da1) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x0d27,	// (0x00011da1) vkb2_cell_t_keypad_pane_cp03

0x0d38,	// (0x00011db2) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x0d38,	// (0x00011db2) vkb2_cell_t_keypad_pane_cp04

0x0d49,	// (0x00011dc3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x0d49,	// (0x00011dc3) vkb2_cell_t_keypad_pane_cp05

0x0d5a,	// (0x00011dd4) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x0d5a,	// (0x00011dd4) vkb2_cell_t_keypad_pane_cp06

0x0d6d,	// (0x00011de7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x0d6d,	// (0x00011de7) vkb2_cell_t_keypad_pane_cp07

0x0d82,	// (0x00011dfc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x0d82,	// (0x00011dfc) vkb2_cell_t_keypad_pane_cp10

0x0525,	// (0x0001159f) vkb2_cell_t_keypad_pane_g1

0x886d,	// (0x000198e7) vkb2_cell_t_keypad_pane_t1

0xeb57,	// (0x0001fbd1) popup_grid_graphic2_window

0xe112,	// (0x0001f18c) aid_size_cell_graphic2_ParamLimits

0xe112,	// (0x0001f18c) aid_size_cell_graphic2

0xe150,	// (0x0001f1ca) bg_popup_window_pane_cp21_ParamLimits

0xe150,	// (0x0001f1ca) bg_popup_window_pane_cp21

0xe15e,	// (0x0001f1d8) graphic2_pages_pane_ParamLimits

0xe15e,	// (0x0001f1d8) graphic2_pages_pane

0xe1b6,	// (0x0001f230) grid_graphic2_control_pane_ParamLimits

0xe1b6,	// (0x0001f230) grid_graphic2_control_pane

0xe1fe,	// (0x0001f278) grid_graphic2_pane_ParamLimits

0xe1fe,	// (0x0001f278) grid_graphic2_pane

0xe289,	// (0x0001f303) cell_graphic2_pane

0xea8f,	// (0x0001fb09) main_comp_mode_pane

0x7ab4,	// (0x00018b2e) list_ai3_gene_pane_ParamLimits

0xdac0,	// (0x0001eb3a) bg_popup_window_pane_cp19_ParamLimits

0x7f0c,	// (0x00018f86) bg_touch_area_indi_pane_ParamLimits

0x7f0c,	// (0x00018f86) bg_touch_area_indi_pane

0x7f22,	// (0x00018f9c) bg_touch_area_indi_pane_cp01_ParamLimits

0x7f22,	// (0x00018f9c) bg_touch_area_indi_pane_cp01

0x7f3a,	// (0x00018fb4) bg_touch_area_indi_pane_cp02_ParamLimits

0x7f3a,	// (0x00018fb4) bg_touch_area_indi_pane_cp02

0x7f54,	// (0x00018fce) bg_touch_area_indi_pane_cp03_ParamLimits

0x7f54,	// (0x00018fce) bg_touch_area_indi_pane_cp03

0x7f6e,	// (0x00018fe8) popup_slider_window_g1_ParamLimits

0x7f8a,	// (0x00019004) popup_slider_window_g2_ParamLimits

0x7fa6,	// (0x00019020) popup_slider_window_g3_ParamLimits

0xfcfc,	// (0x00020d76) popup_slider_window_g_ParamLimits

0x8002,	// (0x0001907c) popup_slider_window_t1_ParamLimits

0x8076,	// (0x000190f0) small_volume_slider_vertical_pane_ParamLimits

0xe289,	// (0x0001f303) cell_graphic2_pane_ParamLimits

0xe2ec,	// (0x0001f366) bg_button_pane_cp10_ParamLimits

0xe2ec,	// (0x0001f366) bg_button_pane_cp10

0xe2ff,	// (0x0001f379) bg_button_pane_cp11_ParamLimits

0xe2ff,	// (0x0001f379) bg_button_pane_cp11

0xe312,	// (0x0001f38c) graphic2_pages_pane_g1_ParamLimits

0xe312,	// (0x0001f38c) graphic2_pages_pane_g1

0xe32d,	// (0x0001f3a7) graphic2_pages_pane_g2_ParamLimits

0xe32d,	// (0x0001f3a7) graphic2_pages_pane_g2

0x0001,

0xfdc0,	// (0x00020e3a) graphic2_pages_pane_g_ParamLimits

0xfdc0,	// (0x00020e3a) graphic2_pages_pane_g

0xe345,	// (0x0001f3bf) graphic2_pages_pane_t1_ParamLimits

0xe345,	// (0x0001f3bf) graphic2_pages_pane_t1

0xe35d,	// (0x0001f3d7) cell_graphic2_control_pane_ParamLimits

0xe35d,	// (0x0001f3d7) cell_graphic2_control_pane

0xe379,	// (0x0001f3f3) cell_graphic2_pane_g1_ParamLimits

0xe379,	// (0x0001f3f3) cell_graphic2_pane_g1

0xc713,	// (0x0001d78d) cell_graphic2_pane_g2_ParamLimits

0xc713,	// (0x0001d78d) cell_graphic2_pane_g2

0xdaf4,	// (0x0001eb6e) cell_graphic2_pane_g3_ParamLimits

0xdaf4,	// (0x0001eb6e) cell_graphic2_pane_g3

0xc720,	// (0x0001d79a) cell_graphic2_pane_g4_ParamLimits

0xc720,	// (0x0001d79a) cell_graphic2_pane_g4

0xe386,	// (0x0001f400) cell_graphic2_pane_g5_ParamLimits

0xe386,	// (0x0001f400) cell_graphic2_pane_g5

0x0004,

0xfdc5,	// (0x00020e3f) cell_graphic2_pane_g_ParamLimits

0xfdc5,	// (0x00020e3f) cell_graphic2_pane_g

0xe3a6,	// (0x0001f420) cell_graphic2_pane_t1_ParamLimits

0xe3a6,	// (0x0001f420) cell_graphic2_pane_t1

0x4947,	// (0x000159c1) grid_highlight_pane_cp11_ParamLimits

0x4947,	// (0x000159c1) grid_highlight_pane_cp11

0x12ed,	// (0x00012367) bg_button_pane_cp05

0xe3db,	// (0x0001f455) cell_graphic2_control_pane_g1

0x656b,	// (0x000175e5) bg_touch_area_indi_pane_g1

0x8b3e,	// (0x00019bb8) aid_cmod_rocker_key_size

0x8b48,	// (0x00019bc2) aid_cmode_itu_key_size

0x8b52,	// (0x00019bcc) main_cmode_video_pane

0x8b5c,	// (0x00019bd6) main_comp_mode_itu_pane

0x8b68,	// (0x00019be2) main_comp_mode_rocker_pane

0x8b74,	// (0x00019bee) cell_cmode_rocker_pane_ParamLimits

0x8b74,	// (0x00019bee) cell_cmode_rocker_pane

0x8b88,	// (0x00019c02) cell_cmode_itu_pane_ParamLimits

0x8b88,	// (0x00019c02) cell_cmode_itu_pane

0x1e85,	// (0x00012eff) bg_button_pane_cp06_ParamLimits

0x1e85,	// (0x00012eff) bg_button_pane_cp06

0x6837,	// (0x000178b1) cell_cmode_rocker_pane_g1_ParamLimits

0x6837,	// (0x000178b1) cell_cmode_rocker_pane_g1

0x811d,	// (0x00019197) cell_cmode_rocker_pane_g2_ParamLimits

0x811d,	// (0x00019197) cell_cmode_rocker_pane_g2

0x0001,

0xfdd5,	// (0x00020e4f) cell_cmode_rocker_pane_g_ParamLimits

0xfdd5,	// (0x00020e4f) cell_cmode_rocker_pane_g

0xea8f,	// (0x0001fb09) bg_button_pane_cp07

0x8b9f,	// (0x00019c19) cell_cmode_itu_pane_g1

0x8ba8,	// (0x00019c22) cell_cmode_itu_pane_t1

0x8bb6,	// (0x00019c30) cell_cmode_itu_pane_t2

0x0001,

0xfdda,	// (0x00020e54) cell_cmode_itu_pane_t

0x834b,	// (0x000193c5) aid_touch_ctrl_left

0x8353,	// (0x000193cd) aid_touch_ctrl_right

0xea8f,	// (0x0001fb09) compa_mode_pane

0xe401,	// (0x0001f47b) aid_cmod_rocker_key_size_cp

0xe40b,	// (0x0001f485) aid_cmode_itu_key_size_cp

0x8bd8,	// (0x00019c52) compa_mode_pane_g1

0x8be0,	// (0x00019c5a) compa_mode_pane_g2

0x8be8,	// (0x00019c62) compa_mode_pane_g3

0x0002,

0xfddf,	// (0x00020e59) compa_mode_pane_g

0xe415,	// (0x0001f48f) main_comp_mode_itu_pane_cp

0xe41d,	// (0x0001f497) main_comp_mode_rocker_pane_cp

0xe425,	// (0x0001f49f) cell_cmode_itu_pane_cp_ParamLimits

0xe425,	// (0x0001f49f) cell_cmode_itu_pane_cp

0xe43a,	// (0x0001f4b4) cell_cmode_rocker_pane_cp_ParamLimits

0xe43a,	// (0x0001f4b4) cell_cmode_rocker_pane_cp

0x1e85,	// (0x00012eff) bg_button_pane_cp06_cp_ParamLimits

0x1e85,	// (0x00012eff) bg_button_pane_cp06_cp

0x6837,	// (0x000178b1) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6837,	// (0x000178b1) cell_cmode_rocker_pane_g1_cp

0x656b,	// (0x000175e5) cell_cmode_rocker_pane_g2_cp

0xea8f,	// (0x0001fb09) bg_button_pane_cp07_cp

0xe44c,	// (0x0001f4c6) cell_cmode_itu_pane_g1_cp

0xe455,	// (0x0001f4cf) cell_cmode_itu_pane_t1_cp

0xe455,	// (0x0001f4cf) cell_cmode_itu_pane_t2_cp

0xce92,	// (0x0001df0c) settings_code_pane_cp2

0x1049,	// (0x000120c3) bg_popup_window_pane_cp3_ParamLimits

0x14db,	// (0x00012555) heading_pane_cp3_ParamLimits

0x14e7,	// (0x00012561) listscroll_popup_graphic_pane_ParamLimits

0x02b8,	// (0x00011332) fep_hwr_aid_pane_ParamLimits

0x074b,	// (0x000117c5) aid_touch_sctrl_top_ParamLimits

0x0766,	// (0x000117e0) sctrl_sk_top_pane_g1_ParamLimits

0x0525,	// (0x0001159f) sctrl_sk_top_pane_g2_ParamLimits

0xfd15,	// (0x00020d8f) sctrl_sk_top_pane_g_ParamLimits

0x0773,	// (0x000117ed) sctrl_sk_top_pane_t1_ParamLimits

0x074b,	// (0x000117c5) aid_touch_sctrl_bottom_ParamLimits

0x0773,	// (0x000117ed) sctrl_sk_bottom_pane_t1_ParamLimits

0x8291,	// (0x0001930b) aid_area_touch_clock

0xaef4,	// (0x0001bf6e) aid_vkb2_area_top_pane_cell_ParamLimits

0xaef4,	// (0x0001bf6e) aid_vkb2_area_top_pane_cell

0xaf9f,	// (0x0001c019) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xaf9f,	// (0x0001c019) aid_vkb2_area_bottom_pane_cell

0x87fa,	// (0x00019874) popup_char_count_window

0x8c3e,	// (0x00019cb8) popup_char_count_window_g1

0x8c47,	// (0x00019cc1) popup_char_count_window_g2

0x8c50,	// (0x00019cca) popup_char_count_window_g3

0x0002,

0xfde6,	// (0x00020e60) popup_char_count_window_g

0x8c59,	// (0x00019cd3) popup_char_count_window_t1

0x0820,	// (0x0001189a) popup_fep_char_preview_window_ParamLimits

0x0820,	// (0x0001189a) popup_fep_char_preview_window

0xaf14,	// (0x0001bf8e) vkb2_top_candi_pane_ParamLimits

0xaf14,	// (0x0001bf8e) vkb2_top_candi_pane

0xe463,	// (0x0001f4dd) cell_vkb2_top_candi_pane_ParamLimits

0xe463,	// (0x0001f4dd) cell_vkb2_top_candi_pane

0x0d97,	// (0x00011e11) bg_popup_fep_char_preview_window_ParamLimits

0x0d97,	// (0x00011e11) bg_popup_fep_char_preview_window

0x0da5,	// (0x00011e1f) popup_fep_char_preview_window_t1_ParamLimits

0x0da5,	// (0x00011e1f) popup_fep_char_preview_window_t1

0x8cb8,	// (0x00019d32) bg_popup_fep_char_preview_window_g1

0x8cc0,	// (0x00019d3a) bg_popup_fep_char_preview_window_g2

0x8cc8,	// (0x00019d42) bg_popup_fep_char_preview_window_g3

0x8cd0,	// (0x00019d4a) bg_popup_fep_char_preview_window_g4

0x8cd8,	// (0x00019d52) bg_popup_fep_char_preview_window_g5

0x0ddf,	// (0x00011e59) bg_popup_fep_char_preview_window_g6

0x8ce0,	// (0x00019d5a) bg_popup_fep_char_preview_window_g7

0x8ce8,	// (0x00019d62) bg_popup_fep_char_preview_window_g8

0x8cf0,	// (0x00019d6a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfded,	// (0x00020e67) bg_popup_fep_char_preview_window_g

0x0525,	// (0x0001159f) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0525,	// (0x0001159f) cell_vkb2_top_candi_pane_g1

0x0533,	// (0x000115ad) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0533,	// (0x000115ad) cell_vkb2_top_candi_pane_g2

0x7de8,	// (0x00018e62) cell_vkb2_top_candi_pane_g3_ParamLimits

0x7de8,	// (0x00018e62) cell_vkb2_top_candi_pane_g3

0x0de7,	// (0x00011e61) cell_vkb2_top_candi_pane_g4_ParamLimits

0x0de7,	// (0x00011e61) cell_vkb2_top_candi_pane_g4

0x6efb,	// (0x00017f75) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6efb,	// (0x00017f75) cell_vkb2_top_candi_pane_g5

0x0e08,	// (0x00011e82) cell_vkb2_top_candi_pane_g6_ParamLimits

0x0e08,	// (0x00011e82) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe00,	// (0x00020e7a) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe00,	// (0x00020e7a) cell_vkb2_top_candi_pane_g

0x0e16,	// (0x00011e90) cell_vkb2_top_candi_pane_t1

0x0118,	// (0x00011192) aid_size_touch_slider_mark_ParamLimits

0x0118,	// (0x00011192) aid_size_touch_slider_mark

0xe19a,	// (0x0001f214) grid_graphic2_catg_pane_ParamLimits

0xe19a,	// (0x0001f214) grid_graphic2_catg_pane

0xe258,	// (0x0001f2d2) popup_grid_graphic2_window_t1_ParamLimits

0xe258,	// (0x0001f2d2) popup_grid_graphic2_window_t1

0xe26e,	// (0x0001f2e8) popup_grid_graphic2_window_t2_ParamLimits

0xe26e,	// (0x0001f2e8) popup_grid_graphic2_window_t2

0x0001,

0xfdbb,	// (0x00020e35) popup_grid_graphic2_window_t_ParamLimits

0xfdbb,	// (0x00020e35) popup_grid_graphic2_window_t

0x12ed,	// (0x00012367) bg_button_pane_cp05_ParamLimits

0xe3db,	// (0x0001f455) cell_graphic2_control_pane_g1_ParamLimits

0xe4b7,	// (0x0001f531) cell_graphic2_catg_pane_ParamLimits

0xe4b7,	// (0x0001f531) cell_graphic2_catg_pane

0xea8f,	// (0x0001fb09) bg_button_pane_cp12

0xe4c9,	// (0x0001f543) cell_graphic2_catg_pane_g1

0x825d,	// (0x000192d7) cell_tb_ext_pane_t1_ParamLimits

0x0bb3,	// (0x00011c2d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x0bb3,	// (0x00011c2d) vkb2_top_cell_right_narrow_pane

0x0bcb,	// (0x00011c45) vkb2_top_cell_right_wide_pane_ParamLimits

0x0bcb,	// (0x00011c45) vkb2_top_cell_right_wide_pane

0x02aa,	// (0x00011324) bg_vkb2_func_pane_ParamLimits

0x02aa,	// (0x00011324) bg_vkb2_func_pane

0x0c3c,	// (0x00011cb6) vkb2_top_cell_left_pane_g1_ParamLimits

0x02aa,	// (0x00011324) bg_vkb2_fuc_pane_cp03_ParamLimits

0x02aa,	// (0x00011324) bg_vkb2_fuc_pane_cp03

0x0cb0,	// (0x00011d2a) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3bd9,	// (0x00014c53) bg_vkb2_func_pane_g1

0x3be1,	// (0x00014c5b) bg_vkb2_func_pane_g2

0x3bf1,	// (0x00014c6b) bg_vkb2_func_pane_g3

0x3be9,	// (0x00014c63) bg_vkb2_func_pane_g4

0x3bf9,	// (0x00014c73) bg_vkb2_func_pane_g5

0x3c01,	// (0x00014c7b) bg_vkb2_func_pane_g6

0x3c09,	// (0x00014c83) bg_vkb2_func_pane_g7

0x3c11,	// (0x00014c8b) bg_vkb2_func_pane_g8

0x3bd1,	// (0x00014c4b) bg_vkb2_func_pane_g9

0x0008,

0xfe0d,	// (0x00020e87) bg_vkb2_func_pane_g

0x02aa,	// (0x00011324) bg_vkb2_fuc_pane_cp01_ParamLimits

0x02aa,	// (0x00011324) bg_vkb2_fuc_pane_cp01

0x0c3c,	// (0x00011cb6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x0c3c,	// (0x00011cb6) vkb2_top_cell_right_wide_pane_g1

0x02aa,	// (0x00011324) bg_vkb2_fuc_pane_cp02_ParamLimits

0x02aa,	// (0x00011324) bg_vkb2_fuc_pane_cp02

0x0cb0,	// (0x00011d2a) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x0cb0,	// (0x00011d2a) vkb2_top_cell_right_narrow_pane_g1

0xd9fa,	// (0x0001ea74) aid_touch_area_decrease_ParamLimits

0xd9fa,	// (0x0001ea74) aid_touch_area_decrease

0xda34,	// (0x0001eaae) aid_touch_area_increase_ParamLimits

0xda34,	// (0x0001eaae) aid_touch_area_increase

0xda5c,	// (0x0001ead6) aid_touch_area_mute_ParamLimits

0xda5c,	// (0x0001ead6) aid_touch_area_mute

0xda8c,	// (0x0001eb06) aid_touch_area_slider_ParamLimits

0xda8c,	// (0x0001eb06) aid_touch_area_slider

0xdacc,	// (0x0001eb46) popup_slider_window_g4_ParamLimits

0xdacc,	// (0x0001eb46) popup_slider_window_g4

0xdb01,	// (0x0001eb7b) popup_slider_window_g5_ParamLimits

0xdb01,	// (0x0001eb7b) popup_slider_window_g5

0xdb35,	// (0x0001ebaf) popup_slider_window_g6_ParamLimits

0xdb35,	// (0x0001ebaf) popup_slider_window_g6

0x8030,	// (0x000190aa) popup_slider_window_t2_ParamLimits

0x8030,	// (0x000190aa) popup_slider_window_t2

0x0001,

0xfd09,	// (0x00020d83) popup_slider_window_t_ParamLimits

0xfd09,	// (0x00020d83) popup_slider_window_t

0xdb51,	// (0x0001ebcb) slider_pane_ParamLimits

0xdb51,	// (0x0001ebcb) slider_pane

0x8d13,	// (0x00019d8d) slider_pane_g1_ParamLimits

0x8d13,	// (0x00019d8d) slider_pane_g1

0x8d27,	// (0x00019da1) slider_pane_g2_ParamLimits

0x8d27,	// (0x00019da1) slider_pane_g2

0x8d3d,	// (0x00019db7) slider_pane_g3_ParamLimits

0x8d3d,	// (0x00019db7) slider_pane_g3

0x0003,

0xfe20,	// (0x00020e9a) slider_pane_g_ParamLimits

0xfe20,	// (0x00020e9a) slider_pane_g

0xc570,	// (0x0001d5ea) popup_tb_float_extension_window_ParamLimits

0xc570,	// (0x0001d5ea) popup_tb_float_extension_window

0x8d69,	// (0x00019de3) aid_size_cell_tb_float_ext

0xea8f,	// (0x0001fb09) bg_popup_sub_window_cp28

0x8d75,	// (0x00019def) grid_tb_float_ext_pane

0x8d81,	// (0x00019dfb) cell_tb_float_ext_pane_ParamLimits

0x8d81,	// (0x00019dfb) cell_tb_float_ext_pane

0x8d9d,	// (0x00019e17) cell_tb_float_ext_pane_g1

0x8da6,	// (0x00019e20) grid_highlight_pane_cp12

0xacf5,	// (0x0001bd6f) cell_last_hwr_side_pane_ParamLimits

0xacf5,	// (0x0001bd6f) cell_last_hwr_side_pane

0x656b,	// (0x000175e5) cell_last_hwr_side_pane_g1

0x8daf,	// (0x00019e29) cell_last_hwr_side_pane_g2

0x0001,

0xfe29,	// (0x00020ea3) cell_last_hwr_side_pane_g

0xb07b,	// (0x0001c0f5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb07b,	// (0x0001c0f5) vkb2_area_bottom_space_btn_pane

0x0525,	// (0x0001159f) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x886d,	// (0x000198e7) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x0e16,	// (0x00011e90) cell_vkb2_top_candi_pane_t1_ParamLimits

0x0e34,	// (0x00011eae) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x0e34,	// (0x00011eae) vkb2_area_bottom_space_btn_pane_g1

0x0e6e,	// (0x00011ee8) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x0e6e,	// (0x00011ee8) vkb2_area_bottom_space_btn_pane_g2

0x0ea4,	// (0x00011f1e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x0ea4,	// (0x00011f1e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2e,	// (0x00020ea8) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2e,	// (0x00020ea8) vkb2_area_bottom_space_btn_pane_g

0x036f,	// (0x000113e9) cel_fep_hwr_func_pane_ParamLimits

0x036f,	// (0x000113e9) cel_fep_hwr_func_pane

0xacca,	// (0x0001bd44) cell_hwr_side_button_pane_ParamLimits

0xacca,	// (0x0001bd44) cell_hwr_side_button_pane

0x8291,	// (0x0001930b) aid_area_touch_clock_ParamLimits

0x12ed,	// (0x00012367) bg_uniindi_top_pane_ParamLimits

0x82a5,	// (0x0001931f) uniindi_top_pane_g1_ParamLimits

0x82bb,	// (0x00019335) uniindi_top_pane_g2_ParamLimits

0x82c7,	// (0x00019341) uniindi_top_pane_g3_ParamLimits

0x82d8,	// (0x00019352) uniindi_top_pane_g4_ParamLimits

0xfd41,	// (0x00020dbb) uniindi_top_pane_g_ParamLimits

0x82e5,	// (0x0001935f) uniindi_top_pane_t1_ParamLimits

0x12ed,	// (0x00012367) bg_vkb2_func_pane_cp01_ParamLimits

0x12ed,	// (0x00012367) bg_vkb2_func_pane_cp01

0x8db8,	// (0x00019e32) cel_fep_hwr_func_pane_g1_ParamLimits

0x8db8,	// (0x00019e32) cel_fep_hwr_func_pane_g1

0x12ed,	// (0x00012367) bg_vkb2_func_pane_cp02_ParamLimits

0x12ed,	// (0x00012367) bg_vkb2_func_pane_cp02

0x8db8,	// (0x00019e32) cell_hwr_side_button_pane_g1_ParamLimits

0x8db8,	// (0x00019e32) cell_hwr_side_button_pane_g1

0x3a24,	// (0x00014a9e) status_pane_g4_ParamLimits

0x3a24,	// (0x00014a9e) status_pane_g4

0x3a3e,	// (0x00014ab8) status_pane_t1

0x6307,	// (0x00017381) form2_midp_gauge_slider_cont_pane

0x630f,	// (0x00017389) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd1cf,	// (0x0001e249) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd1e1,	// (0x0001e25b) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb01,	// (0x00020b7b) form2_midp_gauge_slider_pane_t_ParamLimits

0x6345,	// (0x000173bf) form2_midp_slider_pane_ParamLimits

0x07e8,	// (0x00011862) aid_size_cell_func_vkb2_ParamLimits

0x07e8,	// (0x00011862) aid_size_cell_func_vkb2

0x8d55,	// (0x00019dcf) slider_pane_g4_ParamLimits

0x8d55,	// (0x00019dcf) slider_pane_g4

0xb0dc,	// (0x0001c156) form2_midp_gauge_slider_pane_t2_cp01

0xb0ea,	// (0x0001c164) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb0ea,	// (0x0001c164) form2_midp_gauge_slider_pane_t3_cp01

0x0f19,	// (0x00011f93) form2_midp_slider_pane_cp01

0xea8f,	// (0x0001fb09) navi_smil_pane

0x8df1,	// (0x00019e6b) navi_smil_pane_g1

0x8df9,	// (0x00019e73) navi_smil_pane_t1

0x8dc6,	// (0x00019e40) form2_midp_slider_pane_g1

0x8dcf,	// (0x00019e49) form2_midp_slider_pane_g2

0x8dd7,	// (0x00019e51) form2_midp_slider_pane_g3

0x8dc6,	// (0x00019e40) form2_midp_slider_pane_g4

0xe4d2,	// (0x0001f54c) form2_midp_slider_pane_g5

0x0004,

0xfe37,	// (0x00020eb1) form2_midp_slider_pane_g

0x0ede,	// (0x00011f58) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x0ede,	// (0x00011f58) vkb2_area_bottom_space_btn_pane_g4

0xc778,	// (0x0001d7f2) lc0_navi_pane_ParamLimits

0xc778,	// (0x0001d7f2) lc0_navi_pane

0xc7e8,	// (0x0001d862) lc0_stat_indi_pane_ParamLimits

0xc7e8,	// (0x0001d862) lc0_stat_indi_pane

0xc7fd,	// (0x0001d877) ls0_title_pane_ParamLimits

0xc7fd,	// (0x0001d877) ls0_title_pane

0x1e85,	// (0x00012eff) bg_popup_sub_pane_cp14_ParamLimits

0x8278,	// (0x000192f2) list_uniindi_pane_ParamLimits

0x8284,	// (0x000192fe) uniindi_top_pane_ParamLimits

0x8323,	// (0x0001939d) list_single_uniindi_pane_g1_ParamLimits

0x8336,	// (0x000193b0) list_single_uniindi_pane_t1_ParamLimits

0xb107,	// (0x0001c181) lc0_stat_clock_pane_ParamLimits

0xb107,	// (0x0001c181) lc0_stat_clock_pane

0xe4db,	// (0x0001f555) lc0_stat_indi_pane_g1_ParamLimits

0xe4db,	// (0x0001f555) lc0_stat_indi_pane_g1

0xe4e8,	// (0x0001f562) lc0_stat_indi_pane_g2_ParamLimits

0xe4e8,	// (0x0001f562) lc0_stat_indi_pane_g2

0x0001,

0xfe42,	// (0x00020ebc) lc0_stat_indi_pane_g_ParamLimits

0xfe42,	// (0x00020ebc) lc0_stat_indi_pane_g

0xb114,	// (0x0001c18e) lc0_uni_indicator_pane_ParamLimits

0xb114,	// (0x0001c18e) lc0_uni_indicator_pane

0xe4f5,	// (0x0001f56f) ls0_title_pane_g1_ParamLimits

0xe4f5,	// (0x0001f56f) ls0_title_pane_g1

0xe509,	// (0x0001f583) ls0_title_pane_t1_ParamLimits

0xe509,	// (0x0001f583) ls0_title_pane_t1

0xb121,	// (0x0001c19b) lc0_uni_indicator_pane_g1_ParamLimits

0xb121,	// (0x0001c19b) lc0_uni_indicator_pane_g1

0x8e6b,	// (0x00019ee5) lc0_stat_clock_pane_t1

0xea8f,	// (0x0001fb09) main_ai5_pane

0x8e79,	// (0x00019ef3) ai5_sk_pane_ParamLimits

0x8e79,	// (0x00019ef3) ai5_sk_pane

0xe537,	// (0x0001f5b1) cell_ai5_widget_pane_ParamLimits

0xe537,	// (0x0001f5b1) cell_ai5_widget_pane

0x8efc,	// (0x00019f76) aid_size_cell_widget_grid

0x8f10,	// (0x00019f8a) bg_ai5_widget_pane_ParamLimits

0x8f10,	// (0x00019f8a) bg_ai5_widget_pane

0xe5c4,	// (0x0001f63e) cell_ai5_widget_pane_g2

0xe5d4,	// (0x0001f64e) cell_ai5_widget_pane_g3

0xe5f3,	// (0x0001f66d) cell_ai5_widget_pane_g4

0xe5ff,	// (0x0001f679) cell_ai5_widget_pane_g5

0xe60b,	// (0x0001f685) cell_ai5_widget_pane_g6

0xe617,	// (0x0001f691) cell_ai5_widget_pane_g7

0xe65f,	// (0x0001f6d9) cell_ai5_widget_pane_t1_ParamLimits

0xe65f,	// (0x0001f6d9) cell_ai5_widget_pane_t1

0xe67c,	// (0x0001f6f6) cell_ai5_widget_pane_t2_ParamLimits

0xe67c,	// (0x0001f6f6) cell_ai5_widget_pane_t2

0xe694,	// (0x0001f70e) cell_ai5_widget_pane_t3_ParamLimits

0xe694,	// (0x0001f70e) cell_ai5_widget_pane_t3

0xe6ac,	// (0x0001f726) cell_ai5_widget_pane_t4_ParamLimits

0xe6ac,	// (0x0001f726) cell_ai5_widget_pane_t4

0xe6c6,	// (0x0001f740) cell_ai5_widget_pane_t5_ParamLimits

0xe6c6,	// (0x0001f740) cell_ai5_widget_pane_t5

0x905b,	// (0x0001a0d5) cell_ai5_widget_pane_t6_ParamLimits

0x905b,	// (0x0001a0d5) cell_ai5_widget_pane_t6

0x906d,	// (0x0001a0e7) cell_ai5_widget_pane_t7_ParamLimits

0x906d,	// (0x0001a0e7) cell_ai5_widget_pane_t7

0xe6e5,	// (0x0001f75f) cell_ai5_widget_pane_t8_ParamLimits

0xe6e5,	// (0x0001f75f) cell_ai5_widget_pane_t8

0x0009,

0xfe5c,	// (0x00020ed6) cell_ai5_widget_pane_t_ParamLimits

0xfe5c,	// (0x00020ed6) cell_ai5_widget_pane_t

0xe731,	// (0x0001f7ab) grid_ai5_widget_pane

0x1e85,	// (0x00012eff) highlight_cell_ai5_widget_pane_ParamLimits

0x1e85,	// (0x00012eff) highlight_cell_ai5_widget_pane

0xe748,	// (0x0001f7c2) ai5_sk_left_pane

0xe752,	// (0x0001f7cc) ai5_sk_middle_pane

0xe75c,	// (0x0001f7d6) ai5_sk_right_pane

0x9107,	// (0x0001a181) bg_ai5_widget_pane_g1_ParamLimits

0x9107,	// (0x0001a181) bg_ai5_widget_pane_g1

0x9113,	// (0x0001a18d) bg_ai5_widget_pane_g2_ParamLimits

0x9113,	// (0x0001a18d) bg_ai5_widget_pane_g2

0x911f,	// (0x0001a199) bg_ai5_widget_pane_g3_ParamLimits

0x911f,	// (0x0001a199) bg_ai5_widget_pane_g3

0x912b,	// (0x0001a1a5) bg_ai5_widget_pane_g4_ParamLimits

0x912b,	// (0x0001a1a5) bg_ai5_widget_pane_g4

0x9137,	// (0x0001a1b1) bg_ai5_widget_pane_g5_ParamLimits

0x9137,	// (0x0001a1b1) bg_ai5_widget_pane_g5

0x9143,	// (0x0001a1bd) bg_ai5_widget_pane_g6_ParamLimits

0x9143,	// (0x0001a1bd) bg_ai5_widget_pane_g6

0x914f,	// (0x0001a1c9) bg_ai5_widget_pane_g7_ParamLimits

0x914f,	// (0x0001a1c9) bg_ai5_widget_pane_g7

0x915b,	// (0x0001a1d5) bg_ai5_widget_pane_g8_ParamLimits

0x915b,	// (0x0001a1d5) bg_ai5_widget_pane_g8

0x9167,	// (0x0001a1e1) bg_ai5_widget_pane_g9_ParamLimits

0x9167,	// (0x0001a1e1) bg_ai5_widget_pane_g9

0x0008,

0xfe71,	// (0x00020eeb) bg_ai5_widget_pane_g_ParamLimits

0xfe71,	// (0x00020eeb) bg_ai5_widget_pane_g

0x918e,	// (0x0001a208) cell_shortcut_ai5_widget_pane_ParamLimits

0x918e,	// (0x0001a208) cell_shortcut_ai5_widget_pane

0x112f,	// (0x000121a9) bg_cell_shortcut_ai5_widget_pane

0x91a0,	// (0x0001a21a) cell_grid_ai5_widget_pane_g1

0x91a9,	// (0x0001a223) highlight_cell_shortcut_ai5_widget_pane

0x3bd9,	// (0x00014c53) ai5_sk_left_pane_g1

0x91b1,	// (0x0001a22b) ai5_sk_left_pane_g2

0x91b9,	// (0x0001a233) ai5_sk_left_pane_g3

0x91c1,	// (0x0001a23b) ai5_sk_left_pane_g4

0x0003,

0xfe84,	// (0x00020efe) ai5_sk_left_pane_g

0x91c9,	// (0x0001a243) ai5_sk_left_pane_t1

0x3be1,	// (0x00014c5b) ai5_sk_right_pane_g1

0x91d7,	// (0x0001a251) ai5_sk_right_pane_g2

0x91df,	// (0x0001a259) ai5_sk_right_pane_g3

0x91e7,	// (0x0001a261) ai5_sk_right_pane_g4

0x0003,

0xfe8d,	// (0x00020f07) ai5_sk_right_pane_g

0x91ef,	// (0x0001a269) ai5_sk_right_pane_t1

0x3be1,	// (0x00014c5b) ai5_sk_middle_pane_g1

0x3bd9,	// (0x00014c53) ai5_sk_middle_pane_g2

0x3bf9,	// (0x00014c73) ai5_sk_middle_pane_g3

0x91df,	// (0x0001a259) ai5_sk_middle_pane_g4

0x91b9,	// (0x0001a233) ai5_sk_middle_pane_g5

0x91fd,	// (0x0001a277) ai5_sk_middle_pane_g6

0xe766,	// (0x0001f7e0) ai5_sk_middle_pane_g7

0x0006,

0xfe96,	// (0x00020f10) ai5_sk_middle_pane_g

0xc63a,	// (0x0001d6b4) aid_touch_area_size_lc0_ParamLimits

0xc63a,	// (0x0001d6b4) aid_touch_area_size_lc0

0x0554,	// (0x000115ce) cell_hwr_candidate_pane_t1_ParamLimits

0x36dc,	// (0x00014756) aid_touch_navi_pane

0xc907,	// (0x0001d981) status_dt_navi_pane_ParamLimits

0xc907,	// (0x0001d981) status_dt_navi_pane

0xc91f,	// (0x0001d999) status_dt_sta_pane_ParamLimits

0xc91f,	// (0x0001d999) status_dt_sta_pane

0xe76e,	// (0x0001f7e8) dt_sta_controll_pane

0xe77b,	// (0x0001f7f5) dt_sta_indi_pane

0xe788,	// (0x0001f802) dt_sta_title_pane

0x12ed,	// (0x00012367) bg_dt_sta_indi_pane_ParamLimits

0x12ed,	// (0x00012367) bg_dt_sta_indi_pane

0xe79a,	// (0x0001f814) dt_sta_battery_pane

0xe7a2,	// (0x0001f81c) dt_sta_indi_pane_g1

0xe7ab,	// (0x0001f825) dt_sta_indi_pane_g2

0xe7b4,	// (0x0001f82e) dt_sta_indi_pane_g3

0x0002,

0xfea5,	// (0x00020f1f) dt_sta_indi_pane_g

0xe7bd,	// (0x0001f837) dt_sta_signal_pane

0x1e85,	// (0x00012eff) bg_dt_sta_title_pane_ParamLimits

0x1e85,	// (0x00012eff) bg_dt_sta_title_pane

0xe7c6,	// (0x0001f840) dt_sta_title_pane_g1

0xe7ce,	// (0x0001f848) dt_sta_title_pane_t1_ParamLimits

0xe7ce,	// (0x0001f848) dt_sta_title_pane_t1

0xea8f,	// (0x0001fb09) bg_dt_sta_control_pane

0xe7e3,	// (0x0001f85d) dt_sta_controll_pane_g1

0xe7ec,	// (0x0001f866) bg_dt_sta_title_pane_g1

0xe7f5,	// (0x0001f86f) bg_dt_sta_title_pane_g2

0xe7fe,	// (0x0001f878) bg_dt_sta_title_pane_g3

0x0002,

0xfeac,	// (0x00020f26) bg_dt_sta_title_pane_g

0x656b,	// (0x000175e5) bg_dt_sta_indi_pane_g1

0x92ab,	// (0x0001a325) dt_sta_signal_pane_g1

0x92b3,	// (0x0001a32d) dt_sta_signal_pane_g2

0x0001,

0xfeb3,	// (0x00020f2d) dt_sta_signal_pane_g

0x92bb,	// (0x0001a335) dt_sta_battery_pane_g1

0x92c4,	// (0x0001a33e) dt_sta_battery_pane_t1

0x656b,	// (0x000175e5) bg_dt_sta_control_pane_g1

0x2743,	// (0x000137bd) fep_china_uni_eep_pane

0x274b,	// (0x000137c5) fep_china_uni_entry_pane_ParamLimits

0x275b,	// (0x000137d5) popup_fep_china_uni_window_g1_ParamLimits

0x276b,	// (0x000137e5) popup_fep_china_uni_window_g2_ParamLimits

0x276b,	// (0x000137e5) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x000207aa) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x000207aa) popup_fep_china_uni_window_g

0x92d3,	// (0x0001a34d) fep_china_uni_eep_pane_g1

0x92db,	// (0x0001a355) fep_china_uni_eep_pane_t1

0x8de8,	// (0x00019e62) aid_touch_area_size_smil_player

0x3834,	// (0x000148ae) lc0_clock_pane

0x3a32,	// (0x00014aac) status_pane_g5_ParamLimits

0x3a32,	// (0x00014aac) status_pane_g5

0xc09a,	// (0x0001d114) popup_keymap_window

0x39f0,	// (0x00014a6a) status_icon_pane

0xe5d4,	// (0x0001f64e) cell_ai5_widget_pane_g3_ParamLimits

0xe5f3,	// (0x0001f66d) cell_ai5_widget_pane_g4_ParamLimits

0xe5ff,	// (0x0001f679) cell_ai5_widget_pane_g5_ParamLimits

0xe623,	// (0x0001f69d) cell_ai5_widget_pane_g8_ParamLimits

0xe623,	// (0x0001f69d) cell_ai5_widget_pane_g8

0xe637,	// (0x0001f6b1) cell_ai5_widget_pane_g9_ParamLimits

0xe637,	// (0x0001f6b1) cell_ai5_widget_pane_g9

0xe64b,	// (0x0001f6c5) cell_ai5_widget_pane_g10_ParamLimits

0xe64b,	// (0x0001f6c5) cell_ai5_widget_pane_g10

0x92ea,	// (0x0001a364) status_icon_pane_g1

0xea8f,	// (0x0001fb09) bg_popup_sub_pane_cp13

0x92f2,	// (0x0001a36c) popup_keymap_window_t1

0xbe7c,	// (0x0001cef6) control_pane_g6_ParamLimits

0xbe7c,	// (0x0001cef6) control_pane_g6

0xbe89,	// (0x0001cf03) control_pane_g7_ParamLimits

0xbe89,	// (0x0001cf03) control_pane_g7

0xbe96,	// (0x0001cf10) control_pane_g8_ParamLimits

0xbe96,	// (0x0001cf10) control_pane_g8

0xe76e,	// (0x0001f7e8) dt_sta_controll_pane_ParamLimits

0xe77b,	// (0x0001f7f5) dt_sta_indi_pane_ParamLimits

0xe788,	// (0x0001f802) dt_sta_title_pane_ParamLimits

0x1822,	// (0x0001289c) aid_size_touch_scroll_bar_cale

0xedd7,	// (0x0001fe51) popup_discreet_window_ParamLimits

0xedd7,	// (0x0001fe51) popup_discreet_window

0xa937,	// (0x0001b9b1) popup_sk_window

0x42d0,	// (0x0001534a) bg_popup_sub_pane_cp28_ParamLimits

0x42d0,	// (0x0001534a) bg_popup_sub_pane_cp28

0x9300,	// (0x0001a37a) popup_discreet_window_g1_ParamLimits

0x9300,	// (0x0001a37a) popup_discreet_window_g1

0x9320,	// (0x0001a39a) popup_discreet_window_t1_ParamLimits

0x9320,	// (0x0001a39a) popup_discreet_window_t1

0x933e,	// (0x0001a3b8) popup_discreet_window_t2_ParamLimits

0x933e,	// (0x0001a3b8) popup_discreet_window_t2

0x0002,

0xfeb8,	// (0x00020f32) popup_discreet_window_t_ParamLimits

0xfeb8,	// (0x00020f32) popup_discreet_window_t

0x0f4f,	// (0x00011fc9) popup_sk_window_g1

0x0f59,	// (0x00011fd3) popup_sk_window_g2

0x0001,

0xfebf,	// (0x00020f39) popup_sk_window_g

0x9390,	// (0x0001a40a) popup_sk_window_t1

0x939e,	// (0x0001a418) popup_sk_window_t1_copy1

0xe5c4,	// (0x0001f63e) cell_ai5_widget_pane_g2_ParamLimits

0xe6f7,	// (0x0001f771) cell_ai5_widget_pane_t9_ParamLimits

0xe6f7,	// (0x0001f771) cell_ai5_widget_pane_t9

0xea8f,	// (0x0001fb09) main_fep_fshwr2_pane

0xe807,	// (0x0001f881) aid_fshwr2_btn_pane

0xe80f,	// (0x0001f889) aid_fshwr2_syb_pane

0xe817,	// (0x0001f891) aid_fshwr2_txt_pane

0xe81f,	// (0x0001f899) fshwr2_func_candi_pane

0xe829,	// (0x0001f8a3) fshwr2_hwr_syb_pane

0xe835,	// (0x0001f8af) fshwr2_icf_pane

0xea8f,	// (0x0001fb09) fshwr2_icf_bg_pane

0xe83f,	// (0x0001f8b9) fshwr2_icf_pane_t1_ParamLimits

0xe83f,	// (0x0001f8b9) fshwr2_icf_pane_t1

0x656b,	// (0x000175e5) fshwr2_func_candi_pane_g1

0x9411,	// (0x0001a48b) fshwr2_func_candi_row_pane_ParamLimits

0x9411,	// (0x0001a48b) fshwr2_func_candi_row_pane

0xe857,	// (0x0001f8d1) cell_fshwr2_syb_pane_ParamLimits

0xe857,	// (0x0001f8d1) cell_fshwr2_syb_pane

0x6837,	// (0x000178b1) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6837,	// (0x000178b1) fshwr2_hwr_syb_pane_g1

0xea8f,	// (0x0001fb09) bg_popup_call_pane_cp01

0x943c,	// (0x0001a4b6) fshwr2_func_candi_cell_pane_ParamLimits

0x943c,	// (0x0001a4b6) fshwr2_func_candi_cell_pane

0x946e,	// (0x0001a4e8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x946e,	// (0x0001a4e8) fshwr2_func_candi_cell_bg_pane

0x9488,	// (0x0001a502) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9488,	// (0x0001a502) fshwr2_func_candi_cell_pane_g1

0x94a8,	// (0x0001a522) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x94a8,	// (0x0001a522) fshwr2_func_candi_cell_pane_t1

0xea8f,	// (0x0001fb09) bg_button_pane_cp08

0x2cd1,	// (0x00013d4b) cell_fshwr2_syb_bg_pane

0xe870,	// (0x0001f8ea) cell_fshwr2_syb_bg_pane_g1

0xe878,	// (0x0001f8f2) cell_fshwr2_syb_bg_pane_t1

0x1e85,	// (0x00012eff) main_tmo_pane

0xcc56,	// (0x0001dcd0) uni_indicator_pane_g1_ParamLimits

0xcc6b,	// (0x0001dce5) uni_indicator_pane_g2_ParamLimits

0xcc80,	// (0x0001dcfa) uni_indicator_pane_g3_ParamLimits

0xcc96,	// (0x0001dd10) uni_indicator_pane_g4_ParamLimits

0xcc96,	// (0x0001dd10) uni_indicator_pane_g4

0xccaa,	// (0x0001dd24) uni_indicator_pane_g5_ParamLimits

0xccaa,	// (0x0001dd24) uni_indicator_pane_g5

0xccbe,	// (0x0001dd38) uni_indicator_pane_g6_ParamLimits

0xccbe,	// (0x0001dd38) uni_indicator_pane_g6

0xf928,	// (0x000209a2) uni_indicator_pane_g_ParamLimits

0xd9ca,	// (0x0001ea44) popup_tmo_note_window_ParamLimits

0xd9ca,	// (0x0001ea44) popup_tmo_note_window

0xea8f,	// (0x0001fb09) fshwr2_bg_pane

0x9499,	// (0x0001a513) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9499,	// (0x0001a513) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec4,	// (0x00020f3e) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec4,	// (0x00020f3e) fshwr2_func_candi_cell_pane_g

0x656b,	// (0x000175e5) bg_popup_window_pane_cp01

0x94d2,	// (0x0001a54c) bg_popup_window_pane_g1_cp01

0x94db,	// (0x0001a555) bg_popup_window_pane_cp22_ParamLimits

0x94db,	// (0x0001a555) bg_popup_window_pane_cp22

0x94e9,	// (0x0001a563) listscroll_tmo_link_pane_ParamLimits

0x94e9,	// (0x0001a563) listscroll_tmo_link_pane

0x9529,	// (0x0001a5a3) popup_tmo_note_window_g1_ParamLimits

0x9529,	// (0x0001a5a3) popup_tmo_note_window_g1

0x9536,	// (0x0001a5b0) tmo_note_info_pane_ParamLimits

0x9536,	// (0x0001a5b0) tmo_note_info_pane

0xe887,	// (0x0001f901) list_tmo_note_info_pane_g1_ParamLimits

0xe887,	// (0x0001f901) list_tmo_note_info_pane_g1

0x9567,	// (0x0001a5e1) list_tmo_note_info_pane_g2_ParamLimits

0x9567,	// (0x0001a5e1) list_tmo_note_info_pane_g2

0x0001,

0xfec9,	// (0x00020f43) list_tmo_note_info_pane_g_ParamLimits

0xfec9,	// (0x00020f43) list_tmo_note_info_pane_g

0x9583,	// (0x0001a5fd) list_tmo_note_info_text_pane_ParamLimits

0x9583,	// (0x0001a5fd) list_tmo_note_info_text_pane

0x9608,	// (0x0001a682) list_tmo_link_pane

0x9615,	// (0x0001a68f) scroll_pane_cp20

0x9622,	// (0x0001a69c) list_single_tmo_link_pane_ParamLimits

0x9622,	// (0x0001a69c) list_single_tmo_link_pane

0x9632,	// (0x0001a6ac) list_single_tmo_link_pane_t1

0x9640,	// (0x0001a6ba) list_tmo_note_info_text_pane_t1_ParamLimits

0x9640,	// (0x0001a6ba) list_tmo_note_info_text_pane_t1

0xba6c,	// (0x0001cae6) aid_size_touch_scroll_bar_cp01_ParamLimits

0xba6c,	// (0x0001cae6) aid_size_touch_scroll_bar_cp01

0xb99b,	// (0x0001ca15) aid_size_touch_slider_marker

0xa927,	// (0x0001b9a1) popup_settings_window_ParamLimits

0xa927,	// (0x0001b9a1) popup_settings_window

0x3087,	// (0x00014101) popup_candi_list_indi_window

0x36dc,	// (0x00014756) aid_touch_navi_pane_ParamLimits

0x071f,	// (0x00011799) rs_clock_indi_pane

0x0728,	// (0x000117a2) sctrl_sk_bottom_pane_ParamLimits

0x0739,	// (0x000117b3) sctrl_sk_top_pane_ParamLimits

0x083a,	// (0x000118b4) popup_fep_tooltip_window

0x8efc,	// (0x00019f76) aid_size_cell_widget_grid_ParamLimits

0xe5b8,	// (0x0001f632) cell_ai5_widget_pane_g1_ParamLimits

0xe5b8,	// (0x0001f632) cell_ai5_widget_pane_g1

0xe60b,	// (0x0001f685) cell_ai5_widget_pane_g6_ParamLimits

0xe617,	// (0x0001f691) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe47,	// (0x00020ec1) cell_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x00020ec1) cell_ai5_widget_pane_g

0xe71b,	// (0x0001f795) cell_ai5_widget_pane_t10_ParamLimits

0xe71b,	// (0x0001f795) cell_ai5_widget_pane_t10

0xe731,	// (0x0001f7ab) grid_ai5_widget_pane_ParamLimits

0x9173,	// (0x0001a1ed) cell_contacts_ai5_widget_pane_ParamLimits

0x9173,	// (0x0001a1ed) cell_contacts_ai5_widget_pane

0x9353,	// (0x0001a3cd) popup_discreet_window_t3_ParamLimits

0x9353,	// (0x0001a3cd) popup_discreet_window_t3

0x93e2,	// (0x0001a45c) popup_fshwr2_char_preview_window_ParamLimits

0x93e2,	// (0x0001a45c) popup_fshwr2_char_preview_window

0xe89e,	// (0x0001f918) tmo_note_info_pane_t1

0xe8b3,	// (0x0001f92d) tmo_note_info_pane_t2

0xe8cc,	// (0x0001f946) tmo_note_info_pane_t3

0x95e4,	// (0x0001a65e) tmo_note_info_pane_t4

0x95f6,	// (0x0001a670) tmo_note_info_pane_t5

0x0004,

0xfece,	// (0x00020f48) tmo_note_info_pane_t

0x9608,	// (0x0001a682) list_tmo_link_pane_ParamLimits

0x9615,	// (0x0001a68f) scroll_pane_cp20_ParamLimits

0xea8f,	// (0x0001fb09) bg_popup_fep_char_preview_window_cp01

0x9659,	// (0x0001a6d3) popup_fshwr2_char_preview_window_t1

0x9667,	// (0x0001a6e1) popup_candi_list_indi_window_g1

0x9670,	// (0x0001a6ea) bg_cell_contacts_ai5_widget_pane

0x967c,	// (0x0001a6f6) cell_contacts_ai5_widget_pane_g1

0x9690,	// (0x0001a70a) cell_contacts_ai5_widget_pane_g2

0x969f,	// (0x0001a719) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed9,	// (0x00020f53) cell_contacts_ai5_widget_pane_g

0x96b2,	// (0x0001a72c) cell_contacts_ai5_widget_pane_t1

0x1e85,	// (0x00012eff) highlight_cell_shortcut_ai5_widget_pane_cp01

0xe946,	// (0x0001f9c0) settings_container_pane

0x2cd1,	// (0x00013d4b) listscroll_set_pane_copy1

0x5a89,	// (0x00016b03) scroll_pane_cp121_copy1

0x9738,	// (0x0001a7b2) set_content_pane_copy1

0xe952,	// (0x0001f9cc) aid_height_set_list_copy1_ParamLimits

0xe952,	// (0x0001f9cc) aid_height_set_list_copy1

0x508b,	// (0x00016105) aid_size_parent_copy1_ParamLimits

0x508b,	// (0x00016105) aid_size_parent_copy1

0xe95e,	// (0x0001f9d8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe95e,	// (0x0001f9d8) button_value_adjust_pane_cp6_copy1

0x305f,	// (0x000140d9) list_highlight_pane_cp2_copy1_ParamLimits

0x305f,	// (0x000140d9) list_highlight_pane_cp2_copy1

0xe972,	// (0x0001f9ec) list_set_pane_copy1_ParamLimits

0xe972,	// (0x0001f9ec) list_set_pane_copy1

0xe8e1,	// (0x0001f95b) main_pane_set_t1_copy1_ParamLimits

0xe8e1,	// (0x0001f95b) main_pane_set_t1_copy1

0xe91b,	// (0x0001f995) main_pane_set_t2_copy1_ParamLimits

0xe91b,	// (0x0001f995) main_pane_set_t2_copy1

0xea39,	// (0x0001fab3) main_pane_set_t3_copy1

0xea47,	// (0x0001fac1) main_pane_set_t4_copy1

0xe93a,	// (0x0001f9b4) set_content_pane_g1_copy1_ParamLimits

0xe93a,	// (0x0001f9b4) set_content_pane_g1_copy1

0xea55,	// (0x0001facf) setting_code_pane_copy1

0x984d,	// (0x0001a8c7) setting_slider_graphic_pane_copy1

0x984d,	// (0x0001a8c7) setting_slider_pane_copy1

0x984d,	// (0x0001a8c7) setting_text_pane_copy1

0x9857,	// (0x0001a8d1) setting_volume_pane_copy1

0xea5f,	// (0x0001fad9) settings_code_pane_cp2_copy1

0xea67,	// (0x0001fae1) settings_code_pane_cp_copy1_ParamLimits

0xea67,	// (0x0001fae1) settings_code_pane_cp_copy1

0xea7b,	// (0x0001faf5) volume_set_pane_copy1

0xec32,	// (0x0001fcac) volume_set_pane_g10_copy1

0xec3e,	// (0x0001fcb8) volume_set_pane_g1_copy1

0xec48,	// (0x0001fcc2) volume_set_pane_g2_copy1

0xec52,	// (0x0001fccc) volume_set_pane_g3_copy1

0xec5c,	// (0x0001fcd6) volume_set_pane_g4_copy1

0xec66,	// (0x0001fce0) volume_set_pane_g5_copy1

0xec70,	// (0x0001fcea) volume_set_pane_g6_copy1

0xec7a,	// (0x0001fcf4) volume_set_pane_g7_copy1

0xec84,	// (0x0001fcfe) volume_set_pane_g8_copy1

0xec8e,	// (0x0001fd08) volume_set_pane_g9_copy1

0x1049,	// (0x000120c3) bg_set_opt_pane_cp_copy1_ParamLimits

0x1049,	// (0x000120c3) bg_set_opt_pane_cp_copy1

0x98ee,	// (0x0001a968) setting_slider_pane_t1_copy1_ParamLimits

0x98ee,	// (0x0001a968) setting_slider_pane_t1_copy1

0xec98,	// (0x0001fd12) setting_slider_pane_t2_copy1_ParamLimits

0xec98,	// (0x0001fd12) setting_slider_pane_t2_copy1

0xecb2,	// (0x0001fd2c) setting_slider_pane_t3_copy1_ParamLimits

0xecb2,	// (0x0001fd2c) setting_slider_pane_t3_copy1

0xecca,	// (0x0001fd44) slider_set_pane_copy1_ParamLimits

0xecca,	// (0x0001fd44) slider_set_pane_copy1

0x1fc1,	// (0x0001303b) set_opt_bg_pane_g1_copy2

0x1fc9,	// (0x00013043) set_opt_bg_pane_g2_copy2

0x9954,	// (0x0001a9ce) set_opt_bg_pane_g3_copy2

0x1fd9,	// (0x00013053) set_opt_bg_pane_g4_copy2

0x1fe1,	// (0x0001305b) set_opt_bg_pane_g5_copy2

0x1fe9,	// (0x00013063) set_opt_bg_pane_g6_copy2

0xece0,	// (0x0001fd5a) set_opt_bg_pane_g7_copy2

0x9968,	// (0x0001a9e2) set_opt_bg_pane_g8_copy2

0x9972,	// (0x0001a9ec) set_opt_bg_pane_g9_copy2

0x997c,	// (0x0001a9f6) aid_size_touch_slider_mark_copy1_ParamLimits

0x997c,	// (0x0001a9f6) aid_size_touch_slider_mark_copy1

0x9990,	// (0x0001aa0a) slider_set_pane_g1_copy1

0x9999,	// (0x0001aa13) slider_set_pane_g2_copy1

0x6631,	// (0x000176ab) slider_set_pane_g3_copy1_ParamLimits

0x6631,	// (0x000176ab) slider_set_pane_g3_copy1

0x6645,	// (0x000176bf) slider_set_pane_g4_copy1_ParamLimits

0x6645,	// (0x000176bf) slider_set_pane_g4_copy1

0x665d,	// (0x000176d7) slider_set_pane_g5_copy1_ParamLimits

0x665d,	// (0x000176d7) slider_set_pane_g5_copy1

0x6631,	// (0x000176ab) slider_set_pane_g6_copy1_ParamLimits

0x6631,	// (0x000176ab) slider_set_pane_g6_copy1

0xecea,	// (0x0001fd64) slider_set_pane_g7_copy1_ParamLimits

0xecea,	// (0x0001fd64) slider_set_pane_g7_copy1

0xec1c,	// (0x0001fc96) bg_set_opt_pane_cp2_copy1

0x99b7,	// (0x0001aa31) setting_slider_graphic_pane_g1_copy1

0xed00,	// (0x0001fd7a) setting_slider_graphic_pane_t1_copy1

0xed10,	// (0x0001fd8a) setting_slider_graphic_pane_t2_copy1

0xed20,	// (0x0001fd9a) slider_set_pane_cp_copy1

0x99f0,	// (0x0001aa6a) input_focus_pane_cp1_copy1

0x99f9,	// (0x0001aa73) list_set_text_pane_copy1

0x9a01,	// (0x0001aa7b) setting_text_pane_g1_copy1

0x10a2,	// (0x0001211c) set_text_pane_t1_copy1

0x99f0,	// (0x0001aa6a) input_focus_pane_cp2_copy1

0x9a01,	// (0x0001aa7b) setting_code_pane_g1_copy1

0xed28,	// (0x0001fda2) setting_code_pane_t1_copy1

0xed36,	// (0x0001fdb0) list_set_graphic_pane_copy1

0xec1c,	// (0x0001fc96) bg_set_opt_pane_cp4_copy1

0xbd88,	// (0x0001ce02) list_set_graphic_pane_g1_copy1_ParamLimits

0xbd88,	// (0x0001ce02) list_set_graphic_pane_g1_copy1

0xed48,	// (0x0001fdc2) list_set_graphic_pane_g2_copy1

0xbda0,	// (0x0001ce1a) list_set_graphic_pane_t1_copy1_ParamLimits

0xbda0,	// (0x0001ce1a) list_set_graphic_pane_t1_copy1

0x656b,	// (0x000175e5) rs_clock_indi_pane_g1

0x9a4b,	// (0x0001aac5) rs_clock_indi_pane_t1

0x9a59,	// (0x0001aad3) rs_indi_pane

0x9a61,	// (0x0001aadb) rs_indi_pane_g1

0x9a6a,	// (0x0001aae4) rs_indi_pane_g2

0x9a73,	// (0x0001aaed) rs_indi_pane_g3

0x0002,

0xfee0,	// (0x00020f5a) rs_indi_pane_g

0x2cd1,	// (0x00013d4b) bg_popup_preview_window_pane_cp03

0x9a7c,	// (0x0001aaf6) popup_fep_tooltip_window_t1

0x7483,	// (0x000184fd) popup_note2_window_g2_ParamLimits

0x7483,	// (0x000184fd) popup_note2_window_g2

0x0001,

0xfc79,	// (0x00020cf3) popup_note2_window_g_ParamLimits

0xfc79,	// (0x00020cf3) popup_note2_window_g

0x7a7a,	// (0x00018af4) bg_popup_sub_pane_cp11_ParamLimits

0x7a87,	// (0x00018b01) cell_ai3_links_pane_g1_ParamLimits

0x7a9e,	// (0x00018b18) cell_ai3_links_pane_t1

0x10a2,	// (0x0001211c) set_text_pane_t1_copy1_ParamLimits

0x2bde,	// (0x00013c58) cell_graphic_popup_pane_cp2_ParamLimits

0x2bde,	// (0x00013c58) cell_graphic_popup_pane_cp2

0x9a8a,	// (0x0001ab04) cell_graphic_popup_pane_g1_cp2

0x1635,	// (0x000126af) cell_graphic_popup_pane_g2_cp2

0x9a92,	// (0x0001ab0c) cell_graphic_popup_pane_g3_cp2

0x9a9a,	// (0x0001ab14) cell_graphic_popup_pane_t2_cp2

0x1646,	// (0x000126c0) grid_highlight_pane_cp3_cp2

0x239a,	// (0x00013414) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1e85,	// (0x00012eff) main_tmo_pane_ParamLimits

0xd9be,	// (0x0001ea38) popup_tmo_big_image_note_window

0xe5a8,	// (0x0001f622) cell_ai5_widget_list_pane

0xe5b0,	// (0x0001f62a) cell_ai5_widget_lrg_icon_pane

0xe89e,	// (0x0001f918) tmo_note_info_pane_t1_ParamLimits

0xe8b3,	// (0x0001f92d) tmo_note_info_pane_t2_ParamLimits

0xe8cc,	// (0x0001f946) tmo_note_info_pane_t3_ParamLimits

0x95e4,	// (0x0001a65e) tmo_note_info_pane_t4_ParamLimits

0x95f6,	// (0x0001a670) tmo_note_info_pane_t5_ParamLimits

0xfece,	// (0x00020f48) tmo_note_info_pane_t_ParamLimits

0xe946,	// (0x0001f9c0) settings_container_pane_ParamLimits

0x99e8,	// (0x0001aa62) indicator_popup_pane_cp5

0x99e8,	// (0x0001aa62) indicator_popup_pane_cp6

0xed36,	// (0x0001fdb0) list_set_graphic_pane_copy1_ParamLimits

0xea8f,	// (0x0001fb09) bg_popup_window_pane_cp23

0x9aa8,	// (0x0001ab22) popup_tmo_big_image_note_window_g1

0x9ab4,	// (0x0001ab2e) popup_tmo_big_image_note_window_t1

0x9ac4,	// (0x0001ab3e) popup_tmo_big_image_note_window_t2

0x9ad4,	// (0x0001ab4e) popup_tmo_big_image_note_window_t3

0x0002,

0xfee7,	// (0x00020f61) popup_tmo_big_image_note_window_t

0xed50,	// (0x0001fdca) cell_ai5_widget_lrg_icon_pane_g1

0xed58,	// (0x0001fdd2) cell_ai5_widget_lrg_icon_pane_t1

0xed66,	// (0x0001fde0) cell_ai5_widget_list_row_pane_ParamLimits

0xed66,	// (0x0001fde0) cell_ai5_widget_list_row_pane

0xed7f,	// (0x0001fdf9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xed7f,	// (0x0001fdf9) cell_ai5_widget_list_row_pane_g1

0xed8c,	// (0x0001fe06) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed8c,	// (0x0001fe06) cell_ai5_widget_list_row_pane_t1

0xeda4,	// (0x0001fe1e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeda4,	// (0x0001fe1e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeee,	// (0x00020f68) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeee,	// (0x00020f68) cell_ai5_widget_list_row_pane_t

0xeb57,	// (0x0001fbd1) main_fep_vtchi_ss_pane

0x9b4a,	// (0x0001abc4) popup_fep_char_pre_window

0x9b52,	// (0x0001abcc) popup_fep_ituss_window

0x9b73,	// (0x0001abed) popup_fep_vkbss_window

0x9b94,	// (0x0001ac0e) grid_vkbss_keypad_pane_ParamLimits

0x9b94,	// (0x0001ac0e) grid_vkbss_keypad_pane

0x9ba4,	// (0x0001ac1e) ituss_keypad_pane

0x9bbc,	// (0x0001ac36) aid_vkbss_key_offset_ParamLimits

0x9bbc,	// (0x0001ac36) aid_vkbss_key_offset

0x9bc8,	// (0x0001ac42) cell_vkbss_key_pane_ParamLimits

0x9bc8,	// (0x0001ac42) cell_vkbss_key_pane

0x9bde,	// (0x0001ac58) bg_cell_vkbss_key_g1_ParamLimits

0x9bde,	// (0x0001ac58) bg_cell_vkbss_key_g1

0x9bea,	// (0x0001ac64) cell_vkbss_key_3p_pane_ParamLimits

0x9bea,	// (0x0001ac64) cell_vkbss_key_3p_pane

0x9c04,	// (0x0001ac7e) cell_vkbss_key_g1_ParamLimits

0x9c04,	// (0x0001ac7e) cell_vkbss_key_g1

0x9c1e,	// (0x0001ac98) cell_vkbss_key_t1_ParamLimits

0x9c1e,	// (0x0001ac98) cell_vkbss_key_t1

0x9c49,	// (0x0001acc3) cell_ituss_key_pane_ParamLimits

0x9c49,	// (0x0001acc3) cell_ituss_key_pane

0x9c59,	// (0x0001acd3) bg_cell_ituss_key_g1_ParamLimits

0x9c59,	// (0x0001acd3) bg_cell_ituss_key_g1

0x9c65,	// (0x0001acdf) cell_ituss_key_pane_g1_ParamLimits

0x9c65,	// (0x0001acdf) cell_ituss_key_pane_g1

0x9c71,	// (0x0001aceb) cell_ituss_key_pane_g2_ParamLimits

0x9c71,	// (0x0001aceb) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x00020f6d) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x00020f6d) cell_ituss_key_pane_g

0x9c8a,	// (0x0001ad04) cell_ituss_key_t1_ParamLimits

0x9c8a,	// (0x0001ad04) cell_ituss_key_t1

0x9cb8,	// (0x0001ad32) cell_ituss_key_t2_ParamLimits

0x9cb8,	// (0x0001ad32) cell_ituss_key_t2

0x9ce9,	// (0x0001ad63) cell_ituss_key_t3_ParamLimits

0x9ce9,	// (0x0001ad63) cell_ituss_key_t3

0x9d1a,	// (0x0001ad94) cell_ituss_key_t4_ParamLimits

0x9d1a,	// (0x0001ad94) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00020f72) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00020f72) cell_ituss_key_t

0x9d4b,	// (0x0001adc5) cell_vkbss_key_3p_pane_g1

0x9d53,	// (0x0001adcd) cell_vkbss_key_3p_pane_g2

0x9d5b,	// (0x0001add5) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00020f7b) cell_vkbss_key_3p_pane_g

0xea8f,	// (0x0001fb09) bg_popup_fep_char_preview_window_cp02

0x9d63,	// (0x0001addd) popup_fep_char_pre_window_t1

0xe59e,	// (0x0001f618) main_ai5_sk_pane

0x9670,	// (0x0001a6ea) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x967c,	// (0x0001a6f6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9690,	// (0x0001a70a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x969f,	// (0x0001a719) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed9,	// (0x00020f53) cell_contacts_ai5_widget_pane_g_ParamLimits

0x96b2,	// (0x0001a72c) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1e85,	// (0x00012eff) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xedb6,	// (0x0001fe30) main_ai5_sk_pane_g1

0x4108,	// (0x00015182) popup_query_code_window_g1

0x9b68,	// (0x0001abe2) popup_fep_vkb_icf_pane

0x9b7e,	// (0x0001abf8) popup_fep_vtchi_icf_pane

0x1e85,	// (0x00012eff) bg_icf_pane

0x9d8a,	// (0x0001ae04) list_vkb_icf_pane

0x1e85,	// (0x00012eff) bg_icf_pane_cp01

0x9da2,	// (0x0001ae1c) vtchi_icf_list_pane

0x9db2,	// (0x0001ae2c) list_vkb_icf_pane_t1_ParamLimits

0x9db2,	// (0x0001ae2c) list_vkb_icf_pane_t1

0x9dc9,	// (0x0001ae43) vtchi_icf_list_pane_t1_ParamLimits

0x9dc9,	// (0x0001ae43) vtchi_icf_list_pane_t1

0x9b52,	// (0x0001abcc) popup_fep_ituss_window_ParamLimits

0x9b7e,	// (0x0001abf8) popup_fep_vtchi_icf_pane_ParamLimits

0x9ba4,	// (0x0001ac1e) ituss_keypad_pane_ParamLimits

0x9bb3,	// (0x0001ac2d) ituss_sks_pane

0x1e85,	// (0x00012eff) bg_icf_pane_ParamLimits

0x9d7b,	// (0x0001adf5) icf_edit_indi_pane_ParamLimits

0x9d7b,	// (0x0001adf5) icf_edit_indi_pane

0x9d8a,	// (0x0001ae04) list_vkb_icf_pane_ParamLimits

0x1e85,	// (0x00012eff) bg_icf_pane_cp01_ParamLimits

0x9d96,	// (0x0001ae10) icf_edit_indi_pane_cp01_ParamLimits

0x9d96,	// (0x0001ae10) icf_edit_indi_pane_cp01

0x9daa,	// (0x0001ae24) vtchi_query_pane

0x6837,	// (0x000178b1) icf_edit_indi_pane_g1_ParamLimits

0x6837,	// (0x000178b1) icf_edit_indi_pane_g1

0x9de2,	// (0x0001ae5c) icf_edit_indi_pane_g2_ParamLimits

0x9de2,	// (0x0001ae5c) icf_edit_indi_pane_g2

0x0001,

0xff08,	// (0x00020f82) icf_edit_indi_pane_g_ParamLimits

0xff08,	// (0x00020f82) icf_edit_indi_pane_g

0x9dee,	// (0x0001ae68) icf_edit_indi_pane_t1

0x9dfc,	// (0x0001ae76) bg_input_focus_pane_cp042

0x1819,	// (0x00012893) vtchi_button_pane

0x9e05,	// (0x0001ae7f) vtchi_query_pane_t1

0x9e13,	// (0x0001ae8d) vtchi_query_pane_t2

0x9e21,	// (0x0001ae9b) vtchi_query_pane_t3

0x0002,

0xff0d,	// (0x00020f87) vtchi_query_pane_t

0xea8f,	// (0x0001fb09) bg_button_pane_cp13

0x9e2f,	// (0x0001aea9) vtchi_button_pane_g1

0x836d,	// (0x000193e7) ituss_sks_pane_g1

0x9e37,	// (0x0001aeb1) ituss_sks_pane_g2

0x0001,

0xff14,	// (0x00020f8e) ituss_sks_pane_g

0x9e40,	// (0x0001aeba) ituss_sks_pane_t1

0x9e4e,	// (0x0001aec8) ituss_sks_pane_t2

0x0001,

0xff19,	// (0x00020f93) ituss_sks_pane_t

0x5fbc,	// (0x00017036) indicator_nsta_pane_cp_g1

0x5fc5,	// (0x0001703f) indicator_nsta_pane_cp_g2

0x5fcd,	// (0x00017047) indicator_nsta_pane_cp_g3

0x5fd5,	// (0x0001704f) indicator_nsta_pane_cp_g4

0x5fdd,	// (0x00017057) indicator_nsta_pane_cp_g5

0x5fe5,	// (0x0001705f) indicator_nsta_pane_cp_g6

0x0005,

0xfab7,	// (0x00020b31) indicator_nsta_pane_cp_g

0xe3bd,	// (0x0001f437) cell_graphic2_pane_t2_ParamLimits

0xe3bd,	// (0x0001f437) cell_graphic2_pane_t2

0x0001,

0xfdd0,	// (0x00020e4a) cell_graphic2_pane_t_ParamLimits

0xfdd0,	// (0x00020e4a) cell_graphic2_pane_t

0xe3f3,	// (0x0001f46d) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal

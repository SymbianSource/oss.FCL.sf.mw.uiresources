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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00037023 };

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
0x9028,	// (0x0004004b) Screen

0x9034,	// (0x00040057) application_window_ParamLimits

0x9034,	// (0x00040057) application_window

0x85b5,	// (0x0003f5d8) screen_g1

0x906c,	// (0x0004008f) area_bottom_pane_ParamLimits

0x906c,	// (0x0004008f) area_bottom_pane

0xe80c,	// (0x0004582f) area_top_pane_ParamLimits

0xe80c,	// (0x0004582f) area_top_pane

0xe8aa,	// (0x000458cd) main_pane_ParamLimits

0xe8aa,	// (0x000458cd) main_pane

0x85bf,	// (0x0003f5e2) misc_graphics

0xbdd6,	// (0x00042df9) battery_pane_ParamLimits

0xbdd6,	// (0x00042df9) battery_pane

0x2f67,	// (0x00039f8a) bg_status_flat_pane_g8

0x2f6f,	// (0x00039f92) bg_status_flat_pane_g9

0x236f,	// (0x00039392) context_pane_ParamLimits

0x236f,	// (0x00039392) context_pane

0xbf4d,	// (0x00042f70) navi_pane_ParamLimits

0xbf4d,	// (0x00042f70) navi_pane

0xbfd7,	// (0x00042ffa) signal_pane_ParamLimits

0xbfd7,	// (0x00042ffa) signal_pane

0x0008,

0xf874,	// (0x00046897) bg_status_flat_pane_g

0xc067,	// (0x0004308a) status_pane_g1_ParamLimits

0xc067,	// (0x0004308a) status_pane_g1

0xc07d,	// (0x000430a0) status_pane_g2_ParamLimits

0xc07d,	// (0x000430a0) status_pane_g2

0x25a8,	// (0x000395cb) status_pane_g3_ParamLimits

0x25a8,	// (0x000395cb) status_pane_g3

0x0004,

0xf7a0,	// (0x000467c3) status_pane_g_ParamLimits

0xf7a0,	// (0x000467c3) status_pane_g

0xc089,	// (0x000430ac) title_pane_ParamLimits

0xc089,	// (0x000430ac) title_pane

0xc0f0,	// (0x00043113) uni_indicator_pane_ParamLimits

0xc0f0,	// (0x00043113) uni_indicator_pane

0x21d7,	// (0x000391fa) bg_list_pane_ParamLimits

0x21d7,	// (0x000391fa) bg_list_pane

0xa1cb,	// (0x000411ee) find_pane

0x27a3,	// (0x000397c6) listscroll_app_pane_ParamLimits

0x27a3,	// (0x000397c6) listscroll_app_pane

0x220b,	// (0x0003922e) listscroll_form_pane

0x9014,	// (0x00040037) listscroll_gen_pane_ParamLimits

0x9014,	// (0x00040037) listscroll_gen_pane

0x00b0,	// (0x000370d3) listscroll_set_pane

0x3af9,	// (0x0003ab1c) main_idle_act_pane

0x1ed0,	// (0x00038ef3) main_idle_trad_pane

0x1ed0,	// (0x00038ef3) main_list_empty_pane

0x21ff,	// (0x00039222) main_midp_pane

0x2225,	// (0x00039248) main_pane_g1_ParamLimits

0x2225,	// (0x00039248) main_pane_g1

0xa1d3,	// (0x000411f6) popup_ai_message_window_ParamLimits

0xa1d3,	// (0x000411f6) popup_ai_message_window

0xa273,	// (0x00041296) popup_fep_china_uni_window_ParamLimits

0xa273,	// (0x00041296) popup_fep_china_uni_window

0x01da,	// (0x000371fd) popup_fep_japan_candidate_window_ParamLimits

0x01da,	// (0x000371fd) popup_fep_japan_candidate_window

0x0204,	// (0x00037227) popup_fep_japan_predictive_window_ParamLimits

0x0204,	// (0x00037227) popup_fep_japan_predictive_window

0xa2d3,	// (0x000412f6) popup_find_window

0xa2f0,	// (0x00041313) popup_grid_graphic_window_ParamLimits

0xa2f0,	// (0x00041313) popup_grid_graphic_window

0x0275,	// (0x00037298) popup_large_graphic_colour_window

0xa394,	// (0x000413b7) popup_menu_window_ParamLimits

0xa394,	// (0x000413b7) popup_menu_window

0xa584,	// (0x000415a7) popup_note_image_window

0xa544,	// (0x00041567) popup_note_wait_window_ParamLimits

0xa544,	// (0x00041567) popup_note_wait_window

0xa59c,	// (0x000415bf) popup_note_window_ParamLimits

0xa59c,	// (0x000415bf) popup_note_window

0xa64a,	// (0x0004166d) popup_query_code_window_ParamLimits

0xa64a,	// (0x0004166d) popup_query_code_window

0x04e1,	// (0x00037504) popup_query_data_code_window_ParamLimits

0x04e1,	// (0x00037504) popup_query_data_code_window

0xa68a,	// (0x000416ad) popup_query_data_window_ParamLimits

0xa68a,	// (0x000416ad) popup_query_data_window

0xa71e,	// (0x00041741) popup_query_sat_info_window_ParamLimits

0xa71e,	// (0x00041741) popup_query_sat_info_window

0xa7c7,	// (0x000417ea) popup_snote_single_graphic_window_ParamLimits

0xa7c7,	// (0x000417ea) popup_snote_single_graphic_window

0xa7c7,	// (0x000417ea) popup_snote_single_text_window_ParamLimits

0xa7c7,	// (0x000417ea) popup_snote_single_text_window

0x057c,	// (0x0003759f) popup_sub_window_general

0x06c2,	// (0x000376e5) popup_window_general_ParamLimits

0x06c2,	// (0x000376e5) popup_window_general

0x2233,	// (0x00039256) power_save_pane

0xa02b,	// (0x0004104e) control_pane_g1_ParamLimits

0xa02b,	// (0x0004104e) control_pane_g1

0xa054,	// (0x00041077) control_pane_g2_ParamLimits

0xa054,	// (0x00041077) control_pane_g2

0x219a,	// (0x000391bd) control_pane_g3_ParamLimits

0x219a,	// (0x000391bd) control_pane_g3

0x0007,

0xf788,	// (0x000467ab) control_pane_g_ParamLimits

0xf788,	// (0x000467ab) control_pane_g

0xa0ba,	// (0x000410dd) control_pane_t1_ParamLimits

0xa0ba,	// (0x000410dd) control_pane_t1

0xa120,	// (0x00041143) control_pane_t2_ParamLimits

0xa120,	// (0x00041143) control_pane_t2

0x0002,

0xf799,	// (0x000467bc) control_pane_t_ParamLimits

0xf799,	// (0x000467bc) control_pane_t

0x9f84,	// (0x00040fa7) navi_navi_volume_pane_cp1

0x9f8c,	// (0x00040faf) status_small_icon_pane

0x20cf,	// (0x000390f2) status_small_pane_g1_ParamLimits

0x20cf,	// (0x000390f2) status_small_pane_g1

0x9f94,	// (0x00040fb7) status_small_pane_g2_ParamLimits

0x9f94,	// (0x00040fb7) status_small_pane_g2

0x9fa0,	// (0x00040fc3) status_small_pane_g3_ParamLimits

0x9fa0,	// (0x00040fc3) status_small_pane_g3

0x9fac,	// (0x00040fcf) status_small_pane_g4_ParamLimits

0x9fac,	// (0x00040fcf) status_small_pane_g4

0x9fb8,	// (0x00040fdb) status_small_pane_g5_ParamLimits

0x9fb8,	// (0x00040fdb) status_small_pane_g5

0x9fc6,	// (0x00040fe9) status_small_pane_g6_ParamLimits

0x9fc6,	// (0x00040fe9) status_small_pane_g6

0x0007,

0xf777,	// (0x0004679a) status_small_pane_g_ParamLimits

0xf777,	// (0x0004679a) status_small_pane_g

0x9ff5,	// (0x00041018) status_small_pane_t1

0xa017,	// (0x0004103a) status_small_wait_pane_ParamLimits

0xa017,	// (0x0004103a) status_small_wait_pane

0x9d6a,	// (0x00040d8d) aid_levels_signal_ParamLimits

0x9d6a,	// (0x00040d8d) aid_levels_signal

0x9d82,	// (0x00040da5) signal_pane_g1_ParamLimits

0x9d82,	// (0x00040da5) signal_pane_g1

0x9d9d,	// (0x00040dc0) signal_pane_g2_ParamLimits

0x9d9d,	// (0x00040dc0) signal_pane_g2

0x0003,

0xf708,	// (0x0004672b) signal_pane_g_ParamLimits

0xf708,	// (0x0004672b) signal_pane_g

0xef6e,	// (0x00045f91) context_pane_g1

0x9258,	// (0x0004027b) title_pane_g1

0x929b,	// (0x000402be) title_pane_t1

0x85d5,	// (0x0003f5f8) title_pane_t2

0x85fb,	// (0x0003f61e) title_pane_t3

0x0002,

0xf557,	// (0x0004657a) title_pane_t

0xc118,	// (0x0004313b) aid_levels_battery_ParamLimits

0xc118,	// (0x0004313b) aid_levels_battery

0xc134,	// (0x00043157) battery_pane_g1_ParamLimits

0xc134,	// (0x00043157) battery_pane_g1

0xc151,	// (0x00043174) battery_pane_g2_ParamLimits

0xc151,	// (0x00043174) battery_pane_g2

0x0001,

0xf7ab,	// (0x000467ce) battery_pane_g_ParamLimits

0xf7ab,	// (0x000467ce) battery_pane_g

0xc352,	// (0x00043375) uni_indicator_pane_g1

0xc368,	// (0x0004338b) uni_indicator_pane_g2

0xc37e,	// (0x000433a1) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x0004693f) uni_indicator_pane_g

0xf45b,	// (0x0004647e) navi_icon_pane_ParamLimits

0xf45b,	// (0x0004647e) navi_icon_pane

0xf3a2,	// (0x000463c5) navi_midp_pane

0xf477,	// (0x0004649a) navi_navi_pane

0xf481,	// (0x000464a4) navi_text_pane_ParamLimits

0xf481,	// (0x000464a4) navi_text_pane

0x85b5,	// (0x0003f5d8) status_small_wait_pane_g1

0xb60a,	// (0x0004262d) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x0004693a) status_small_wait_pane_g

0xc2f1,	// (0x00043314) navi_navi_icon_text_pane

0xc2f9,	// (0x0004331c) navi_navi_pane_g1_ParamLimits

0xc2f9,	// (0x0004331c) navi_navi_pane_g1

0xc30b,	// (0x0004332e) navi_navi_pane_g2_ParamLimits

0xc30b,	// (0x0004332e) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00046908) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00046908) navi_navi_pane_g

0x35f0,	// (0x0003a613) navi_navi_tabs_pane

0xc31d,	// (0x00043340) navi_navi_text_pane

0xc2f1,	// (0x00043314) navi_navi_volume_pane

0xc2df,	// (0x00043302) navi_text_pane_t1

0xc2d3,	// (0x000432f6) navi_icon_pane_g1

0x34e7,	// (0x0003a50a) navi_navi_text_pane_t1

0xaaf9,	// (0x00041b1c) navi_navi_volume_pane_g1

0xab01,	// (0x00041b24) volume_small_pane

0xc22f,	// (0x00043252) navi_navi_icon_text_pane_g1

0xc237,	// (0x0004325a) navi_navi_icon_text_pane_t1

0xf477,	// (0x0004649a) navi_tabs_2_long_pane

0xf477,	// (0x0004649a) navi_tabs_2_pane

0xf477,	// (0x0004649a) navi_tabs_3_long_pane

0xf477,	// (0x0004649a) navi_tabs_3_pane

0xf477,	// (0x0004649a) navi_tabs_4_pane

0xaad9,	// (0x00041afc) tabs_2_active_pane_ParamLimits

0xaad9,	// (0x00041afc) tabs_2_active_pane

0xaae9,	// (0x00041b0c) tabs_2_passive_pane_ParamLimits

0xaae9,	// (0x00041b0c) tabs_2_passive_pane

0xaaa7,	// (0x00041aca) tabs_3_active_pane_ParamLimits

0xaaa7,	// (0x00041aca) tabs_3_active_pane

0xaab7,	// (0x00041ada) tabs_3_passive_pane_ParamLimits

0xaab7,	// (0x00041ada) tabs_3_passive_pane

0xaac8,	// (0x00041aeb) tabs_3_passive_pane_cp_ParamLimits

0xaac8,	// (0x00041aeb) tabs_3_passive_pane_cp

0xaa63,	// (0x00041a86) tabs_4_active_pane_ParamLimits

0xaa63,	// (0x00041a86) tabs_4_active_pane

0xaa74,	// (0x00041a97) tabs_4_passive_pane_ParamLimits

0xaa74,	// (0x00041a97) tabs_4_passive_pane

0xaa85,	// (0x00041aa8) tabs_4_passive_pane_cp_ParamLimits

0xaa85,	// (0x00041aa8) tabs_4_passive_pane_cp

0xaa96,	// (0x00041ab9) tabs_4_passive_pane_cp2_ParamLimits

0xaa96,	// (0x00041ab9) tabs_4_passive_pane_cp2

0xaa3f,	// (0x00041a62) tabs_2_long_active_pane_ParamLimits

0xaa3f,	// (0x00041a62) tabs_2_long_active_pane

0xaa51,	// (0x00041a74) tabs_2_long_passive_pane_ParamLimits

0xaa51,	// (0x00041a74) tabs_2_long_passive_pane

0xa9f4,	// (0x00041a17) tabs_3_long_active_pane_ParamLimits

0xa9f4,	// (0x00041a17) tabs_3_long_active_pane

0xaa0d,	// (0x00041a30) tabs_3_long_passive_pane_ParamLimits

0xaa0d,	// (0x00041a30) tabs_3_long_passive_pane

0xaa26,	// (0x00041a49) tabs_3_long_passive_pane_cp_ParamLimits

0xaa26,	// (0x00041a49) tabs_3_long_passive_pane_cp

0x0844,	// (0x00037867) volume_small_pane_g1

0xa9a3,	// (0x000419c6) volume_small_pane_g2

0xa9ac,	// (0x000419cf) volume_small_pane_g3

0xa9b5,	// (0x000419d8) volume_small_pane_g4

0xa9be,	// (0x000419e1) volume_small_pane_g5

0xa9c7,	// (0x000419ea) volume_small_pane_g6

0xa9d0,	// (0x000419f3) volume_small_pane_g7

0xa9d9,	// (0x000419fc) volume_small_pane_g8

0xa9e2,	// (0x00041a05) volume_small_pane_g9

0xa9eb,	// (0x00041a0e) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x000468d4) volume_small_pane_g

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp2_ParamLimits

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp2

0x9327,	// (0x0004034a) tabs_3_active_pane_g1

0x932f,	// (0x00040352) tabs_3_active_pane_t1

0x8649,	// (0x0003f66c) bg_passive_tab_pane_cp2_ParamLimits

0x8649,	// (0x0003f66c) bg_passive_tab_pane_cp2

0x9327,	// (0x0004034a) tabs_3_passive_pane_g1

0x932f,	// (0x00040352) tabs_3_passive_pane_t1

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp3_ParamLimits

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp3

0x9341,	// (0x00040364) tabs_4_active_pane_g1

0x9349,	// (0x0004036c) tabs_4_active_pane_t1

0x8649,	// (0x0003f66c) bg_passive_tab_pane_cp3_ParamLimits

0x8649,	// (0x0003f66c) bg_passive_tab_pane_cp3

0x9341,	// (0x00040364) tabs_4_1_passive_pane_g1

0x9349,	// (0x0004036c) tabs_4_1_passive_pane_t1

0x21ff,	// (0x00039222) list_highlight_pane_cp2

0x3b1f,	// (0x0003ab42) list_set_pane_ParamLimits

0x3b1f,	// (0x0003ab42) list_set_pane

0xc411,	// (0x00043434) main_pane_set_t1_ParamLimits

0xc411,	// (0x00043434) main_pane_set_t1

0xc431,	// (0x00043454) main_pane_set_t2_ParamLimits

0xc431,	// (0x00043454) main_pane_set_t2

0xc445,	// (0x00043468) main_pane_set_t3_ParamLimits

0xc445,	// (0x00043468) main_pane_set_t3

0xc459,	// (0x0004347c) main_pane_set_t4_ParamLimits

0xc459,	// (0x0004347c) main_pane_set_t4

0x0003,

0xf981,	// (0x000469a4) main_pane_set_t_ParamLimits

0xf981,	// (0x000469a4) main_pane_set_t

0xc46d,	// (0x00043490) setting_code_pane

0x3c47,	// (0x0003ac6a) setting_slider_graphic_pane

0x3c47,	// (0x0003ac6a) setting_slider_pane

0x3c47,	// (0x0003ac6a) setting_text_pane

0x3c47,	// (0x0003ac6a) setting_volume_pane

0xe9b9,	// (0x000459dc) volume_set_pane

0x860d,	// (0x0003f630) bg_set_opt_pane_cp

0xe9c3,	// (0x000459e6) setting_slider_pane_t1

0xe9dc,	// (0x000459ff) setting_slider_pane_t2

0xe9f6,	// (0x00045a19) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00046581) setting_slider_pane_t

0xea0e,	// (0x00045a31) slider_set_pane

0x85bf,	// (0x0003f5e2) bg_set_opt_pane_cp2

0x861b,	// (0x0003f63e) setting_slider_graphic_pane_g1

0xea24,	// (0x00045a47) setting_slider_graphic_pane_t1

0xea34,	// (0x00045a57) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00046588) setting_slider_graphic_pane_t

0xea44,	// (0x00045a67) slider_set_pane_cp

0x85bf,	// (0x0003f5e2) input_focus_pane_cp1

0x3ae0,	// (0x0003ab03) list_set_text_pane

0x85b5,	// (0x0003f5d8) setting_text_pane_g1

0x85bf,	// (0x0003f5e2) input_focus_pane_cp2

0x85b5,	// (0x0003f5d8) setting_code_pane_g1

0x8624,	// (0x0003f647) setting_code_pane_t1

0xcea9,	// (0x00043ecc) set_text_pane_t1_ParamLimits

0xcea9,	// (0x00043ecc) set_text_pane_t1

0xb99f,	// (0x000429c2) set_opt_bg_pane_g1

0xb9a7,	// (0x000429ca) set_opt_bg_pane_g2

0x3ab8,	// (0x0003aadb) set_opt_bg_pane_g3

0xb9b7,	// (0x000429da) set_opt_bg_pane_g4

0xb9bf,	// (0x000429e2) set_opt_bg_pane_g5

0xb9c7,	// (0x000429ea) set_opt_bg_pane_g6

0x3ac2,	// (0x0003aae5) set_opt_bg_pane_g7

0x3acc,	// (0x0003aaef) set_opt_bg_pane_g8

0x3ad6,	// (0x0003aaf9) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00046991) set_opt_bg_pane_g

0x3aab,	// (0x0003aace) slider_set_pane_g1

0x0a50,	// (0x00037a73) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00046982) slider_set_pane_g

0x09b0,	// (0x000379d3) volume_set_pane_g1

0x09ba,	// (0x000379dd) volume_set_pane_g2

0x09c4,	// (0x000379e7) volume_set_pane_g3

0x09ce,	// (0x000379f1) volume_set_pane_g4

0x09d8,	// (0x000379fb) volume_set_pane_g5

0x09e2,	// (0x00037a05) volume_set_pane_g6

0x09ec,	// (0x00037a0f) volume_set_pane_g7

0x09f6,	// (0x00037a19) volume_set_pane_g8

0x0a00,	// (0x00037a23) volume_set_pane_g9

0x0a0a,	// (0x00037a2d) volume_set_pane_g10

0x0009,

0xf937,	// (0x0004695a) volume_set_pane_g

0x935b,	// (0x0004037e) indicator_pane_ParamLimits

0x935b,	// (0x0004037e) indicator_pane

0x9387,	// (0x000403aa) main_idle_pane_g2_ParamLimits

0x9387,	// (0x000403aa) main_idle_pane_g2

0x93bf,	// (0x000403e2) main_pane_idle_g1_ParamLimits

0x93bf,	// (0x000403e2) main_pane_idle_g1

0x8632,	// (0x0003f655) popup_clock_digital_analogue_window_ParamLimits

0x8632,	// (0x0003f655) popup_clock_digital_analogue_window

0x93e9,	// (0x0004040c) soft_indicator_pane_ParamLimits

0x93e9,	// (0x0004040c) soft_indicator_pane

0x9405,	// (0x00040428) wallpaper_pane_ParamLimits

0x9405,	// (0x00040428) wallpaper_pane

0x85b5,	// (0x0003f5d8) wallpaper_pane_g1

0x9417,	// (0x0004043a) indicator_pane_g1_ParamLimits

0x9417,	// (0x0004043a) indicator_pane_g1

0x3f37,	// (0x0003af5a) navi_navi_icon_text_pane_srt_g1

0xb35c,	// (0x0004237f) soft_indicator_pane_t1

0xb376,	// (0x00042399) aid_ps_area_pane

0x9430,	// (0x00040453) aid_ps_clock_pane

0xb387,	// (0x000423aa) aid_ps_indicator_pane

0xb393,	// (0x000423b6) indicator_ps_pane_ParamLimits

0xb393,	// (0x000423b6) indicator_ps_pane

0xb3a2,	// (0x000423c5) power_save_pane_g1_ParamLimits

0xb3a2,	// (0x000423c5) power_save_pane_g1

0xb3ae,	// (0x000423d1) power_save_pane_g2_ParamLimits

0xb3ae,	// (0x000423d1) power_save_pane_g2

0xe7ec,	// (0x0004580f) aid_navinavi_width_pane

0xb376,	// (0x00042399) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0004658d) power_save_pane_g_ParamLimits

0xf56a,	// (0x0004658d) power_save_pane_g

0xb3bc,	// (0x000423df) power_save_pane_t1_ParamLimits

0xb3bc,	// (0x000423df) power_save_pane_t1

0x9430,	// (0x00040453) aid_ps_clock_pane_ParamLimits

0xb387,	// (0x000423aa) aid_ps_indicator_pane_ParamLimits

0xb3ce,	// (0x000423f1) power_save_pane_t4_ParamLimits

0xb3ce,	// (0x000423f1) power_save_pane_t4

0x0001,

0xf56f,	// (0x00046592) power_save_pane_t_ParamLimits

0xf56f,	// (0x00046592) power_save_pane_t

0xb3f8,	// (0x0004241b) power_save_t3_ParamLimits

0xb3f8,	// (0x0004241b) power_save_t3

0xb3e3,	// (0x00042406) power_save_t2_ParamLimits

0xb3e3,	// (0x00042406) power_save_t2

0xb40d,	// (0x00042430) indicator_ps_pane_g1

0x943e,	// (0x00040461) ai_gene_pane_ParamLimits

0x943e,	// (0x00040461) ai_gene_pane

0x9455,	// (0x00040478) ai_links_pane_ParamLimits

0x9455,	// (0x00040478) ai_links_pane

0x946d,	// (0x00040490) indicator_pane_cp1_ParamLimits

0x946d,	// (0x00040490) indicator_pane_cp1

0x947c,	// (0x0004049f) main_pane_idle_g1_cp_ParamLimits

0x947c,	// (0x0004049f) main_pane_idle_g1_cp

0xb416,	// (0x00042439) popup_ai_links_title_window

0x9494,	// (0x000404b7) soft_indicator_pane_cp1_ParamLimits

0x9494,	// (0x000404b7) soft_indicator_pane_cp1

0x389f,	// (0x0003a8c2) ai_links_pane_g1

0x38a8,	// (0x0003a8cb) grid_ai_links_pane

0xc349,	// (0x0004336c) ai_gene_pane_1

0x388d,	// (0x0003a8b0) ai_gene_pane_2

0x3896,	// (0x0003a8b9) list_highlight_pane_cp4

0xc325,	// (0x00043348) cell_ai_link_pane_ParamLimits

0xc325,	// (0x00043348) cell_ai_link_pane

0x385c,	// (0x0003a87f) cell_ai_link_pane_g1

0xb60a,	// (0x0004262d) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00046935) cell_ai_link_pane_g

0x85bf,	// (0x0003f5e2) grid_highlight_cp2

0x85bf,	// (0x0003f5e2) bg_popup_sub_pane_cp1

0xb42d,	// (0x00042450) popup_ai_links_title_window_t1

0x37a8,	// (0x0003a7cb) ai_gene_pane_1_g1_ParamLimits

0x37a8,	// (0x0003a7cb) ai_gene_pane_1_g1

0x37b4,	// (0x0003a7d7) ai_gene_pane_1_g2_ParamLimits

0x37b4,	// (0x0003a7d7) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x0004692b) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x0004692b) ai_gene_pane_1_g

0x37c1,	// (0x0003a7e4) ai_gene_pane_1_t1_ParamLimits

0x37c1,	// (0x0003a7e4) ai_gene_pane_1_t1

0x37f5,	// (0x0003a818) grid_ai_soft_ind_pane

0x3793,	// (0x0003a7b6) ai_gene_pane_2_t1_ParamLimits

0x3793,	// (0x0003a7b6) ai_gene_pane_2_t1

0x94a8,	// (0x000404cb) main_pane_empty_t1_ParamLimits

0x94a8,	// (0x000404cb) main_pane_empty_t1

0x94c0,	// (0x000404e3) main_pane_empty_t2_ParamLimits

0x94c0,	// (0x000404e3) main_pane_empty_t2

0x94d5,	// (0x000404f8) main_pane_empty_t3_ParamLimits

0x94d5,	// (0x000404f8) main_pane_empty_t3

0x94e7,	// (0x0004050a) main_pane_empty_t4_ParamLimits

0x94e7,	// (0x0004050a) main_pane_empty_t4

0x94f9,	// (0x0004051c) main_pane_empty_t5_ParamLimits

0x94f9,	// (0x0004051c) main_pane_empty_t5

0x0004,

0xf574,	// (0x00046597) main_pane_empty_t_ParamLimits

0xf574,	// (0x00046597) main_pane_empty_t

0xb9f0,	// (0x00042a13) bg_popup_window_pane_ParamLimits

0xb9f0,	// (0x00042a13) bg_popup_window_pane

0x34f5,	// (0x0003a518) find_popup_pane_cp2_ParamLimits

0x34f5,	// (0x0003a518) find_popup_pane_cp2

0x3501,	// (0x0003a524) heading_pane_ParamLimits

0x3501,	// (0x0003a524) heading_pane

0x85bf,	// (0x0003f5e2) bg_popup_sub_pane

0xc254,	// (0x00043277) bg_popup_window_pane_g1_ParamLimits

0xc254,	// (0x00043277) bg_popup_window_pane_g1

0xc263,	// (0x00043286) bg_popup_window_pane_g2_ParamLimits

0xc263,	// (0x00043286) bg_popup_window_pane_g2

0xc26f,	// (0x00043292) bg_popup_window_pane_g3_ParamLimits

0xc26f,	// (0x00043292) bg_popup_window_pane_g3

0xc27b,	// (0x0004329e) bg_popup_window_pane_g4_ParamLimits

0xc27b,	// (0x0004329e) bg_popup_window_pane_g4

0xc28a,	// (0x000432ad) bg_popup_window_pane_g5_ParamLimits

0xc28a,	// (0x000432ad) bg_popup_window_pane_g5

0xc29a,	// (0x000432bd) bg_popup_window_pane_g6_ParamLimits

0xc29a,	// (0x000432bd) bg_popup_window_pane_g6

0xc2a6,	// (0x000432c9) bg_popup_window_pane_g7_ParamLimits

0xc2a6,	// (0x000432c9) bg_popup_window_pane_g7

0xc2b5,	// (0x000432d8) bg_popup_window_pane_g8_ParamLimits

0xc2b5,	// (0x000432d8) bg_popup_window_pane_g8

0xc2c4,	// (0x000432e7) bg_popup_window_pane_g9_ParamLimits

0xc2c4,	// (0x000432e7) bg_popup_window_pane_g9

0x34db,	// (0x0003a4fe) bg_popup_window_pane_g10_ParamLimits

0x34db,	// (0x0003a4fe) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x000468f3) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x000468f3) bg_popup_window_pane_g

0x3404,	// (0x0003a427) bg_popup_heading_pane_ParamLimits

0x3404,	// (0x0003a427) bg_popup_heading_pane

0x0b4c,	// (0x00037b6f) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b4c,	// (0x00037b6f) tabs_4_passive_pane_cp_srt

0x0b5e,	// (0x00037b81) tabs_4_passive_pane_srt_ParamLimits

0x3418,	// (0x0003a43b) heading_pane_g2

0x0b5e,	// (0x00037b81) tabs_4_passive_pane_srt

0x27a3,	// (0x000397c6) bg_passive_tab_pane_cp3_srt_ParamLimits

0x27a3,	// (0x000397c6) bg_passive_tab_pane_cp3_srt

0x3420,	// (0x0003a443) heading_pane_t1_ParamLimits

0x3420,	// (0x0003a443) heading_pane_t1

0x3437,	// (0x0003a45a) heading_pane_t2_ParamLimits

0x3437,	// (0x0003a45a) heading_pane_t2

0x0001,

0xf8cb,	// (0x000468ee) heading_pane_t_ParamLimits

0xf8cb,	// (0x000468ee) heading_pane_t

0x2f2f,	// (0x00039f52) bg_popup_heading_pane_g1

0x2fde,	// (0x0003a001) bg_popup_heading_pane_g2

0x2fe8,	// (0x0003a00b) bg_popup_heading_pane_g3

0x2ff2,	// (0x0003a015) bg_popup_heading_pane_g4

0x2ffc,	// (0x0003a01f) bg_popup_heading_pane_g5

0x3006,	// (0x0003a029) bg_popup_heading_pane_g6

0x300e,	// (0x0003a031) bg_popup_heading_pane_g7

0x3016,	// (0x0003a039) bg_popup_heading_pane_g8

0x3020,	// (0x0003a043) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x000468aa) bg_popup_heading_pane_g

0x272f,	// (0x00039752) bg_popup_sub_pane_g1

0x273f,	// (0x00039762) bg_popup_sub_pane_g2

0x2737,	// (0x0003975a) bg_popup_sub_pane_g3

0x274f,	// (0x00039772) bg_popup_sub_pane_g4

0x2747,	// (0x0003976a) bg_popup_sub_pane_g5

0x2757,	// (0x0003977a) bg_popup_sub_pane_g6

0x275f,	// (0x00039782) bg_popup_sub_pane_g7

0x276f,	// (0x00039792) bg_popup_sub_pane_g8

0x2767,	// (0x0003978a) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00046884) bg_popup_sub_pane_g

0x8649,	// (0x0003f66c) bg_popup_window_pane_cp5_ParamLimits

0x8649,	// (0x0003f66c) bg_popup_window_pane_cp5

0xb44a,	// (0x0004246d) popup_note_window_g1_ParamLimits

0xb44a,	// (0x0004246d) popup_note_window_g1

0xb456,	// (0x00042479) popup_note_window_t1_ParamLimits

0xb456,	// (0x00042479) popup_note_window_t1

0xb46c,	// (0x0004248f) popup_note_window_t2_ParamLimits

0xb46c,	// (0x0004248f) popup_note_window_t2

0xb482,	// (0x000424a5) popup_note_window_t3_ParamLimits

0xb482,	// (0x000424a5) popup_note_window_t3

0xb498,	// (0x000424bb) popup_note_window_t4_ParamLimits

0xb498,	// (0x000424bb) popup_note_window_t4

0xb4c0,	// (0x000424e3) popup_note_window_t5_ParamLimits

0xb4c0,	// (0x000424e3) popup_note_window_t5

0x0004,

0xf57f,	// (0x000465a2) popup_note_window_t_ParamLimits

0xf57f,	// (0x000465a2) popup_note_window_t

0xb50a,	// (0x0004252d) bg_popup_window_pane_cp6_ParamLimits

0xb50a,	// (0x0004252d) bg_popup_window_pane_cp6

0x2eab,	// (0x00039ece) popup_note_image_window_g1_ParamLimits

0x2eab,	// (0x00039ece) popup_note_image_window_g1

0x2eb7,	// (0x00039eda) popup_note_image_window_g2_ParamLimits

0x2eb7,	// (0x00039eda) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00046878) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00046878) popup_note_image_window_g

0x2ed0,	// (0x00039ef3) popup_note_image_window_t1_ParamLimits

0x2ed0,	// (0x00039ef3) popup_note_image_window_t1

0x2ee9,	// (0x00039f0c) popup_note_image_window_t2_ParamLimits

0x2ee9,	// (0x00039f0c) popup_note_image_window_t2

0x2f02,	// (0x00039f25) popup_note_image_window_t3_ParamLimits

0x2f02,	// (0x00039f25) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x0004687d) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x0004687d) popup_note_image_window_t

0x2d6b,	// (0x00039d8e) bg_popup_window_pane_cp7_ParamLimits

0x2d6b,	// (0x00039d8e) bg_popup_window_pane_cp7

0x2d9b,	// (0x00039dbe) popup_note_wait_window_g1_ParamLimits

0x2d9b,	// (0x00039dbe) popup_note_wait_window_g1

0x2da7,	// (0x00039dca) popup_note_wait_window_g2_ParamLimits

0x2da7,	// (0x00039dca) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00046866) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00046866) popup_note_wait_window_g

0x2dbf,	// (0x00039de2) popup_note_wait_window_t1_ParamLimits

0x2dbf,	// (0x00039de2) popup_note_wait_window_t1

0x2de6,	// (0x00039e09) popup_note_wait_window_t2_ParamLimits

0x2de6,	// (0x00039e09) popup_note_wait_window_t2

0x2e04,	// (0x00039e27) popup_note_wait_window_t3_ParamLimits

0x2e04,	// (0x00039e27) popup_note_wait_window_t3

0x2e17,	// (0x00039e3a) popup_note_wait_window_t4_ParamLimits

0x2e17,	// (0x00039e3a) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x0004686d) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x0004686d) popup_note_wait_window_t

0x2e3c,	// (0x00039e5f) wait_bar_pane_ParamLimits

0x2e3c,	// (0x00039e5f) wait_bar_pane

0x85bf,	// (0x0003f5e2) wait_anim_pane

0x85bf,	// (0x0003f5e2) wait_border_pane

0x85b5,	// (0x0003f5d8) wait_anim_pane_g1

0x85b5,	// (0x0003f5d8) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00046726) wait_anim_pane_g

0x2d0f,	// (0x00039d32) wait_border_pane_g1

0x2d1a,	// (0x00039d3d) wait_border_pane_g2

0x2d23,	// (0x00039d46) wait_border_pane_g3

0x0002,

0xf83c,	// (0x0004685f) wait_border_pane_g

0x2b79,	// (0x00039b9c) bg_popup_window_pane_cp16_ParamLimits

0x2b79,	// (0x00039b9c) bg_popup_window_pane_cp16

0x2c79,	// (0x00039c9c) indicator_popup_pane_cp4_ParamLimits

0x2c79,	// (0x00039c9c) indicator_popup_pane_cp4

0x2c8d,	// (0x00039cb0) popup_query_data_window_t1_ParamLimits

0x2c8d,	// (0x00039cb0) popup_query_data_window_t1

0x2c9f,	// (0x00039cc2) popup_query_data_window_t2_ParamLimits

0x2c9f,	// (0x00039cc2) popup_query_data_window_t2

0x2cb8,	// (0x00039cdb) popup_query_data_window_t3_ParamLimits

0x2cb8,	// (0x00039cdb) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00046858) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00046858) popup_query_data_window_t

0x2cd2,	// (0x00039cf5) query_popup_data_pane_ParamLimits

0x2cd2,	// (0x00039cf5) query_popup_data_pane

0x2ce6,	// (0x00039d09) query_popup_data_pane_cp1_ParamLimits

0x2ce6,	// (0x00039d09) query_popup_data_pane_cp1

0x2b79,	// (0x00039b9c) bg_popup_window_pane_cp10_ParamLimits

0x2b79,	// (0x00039b9c) bg_popup_window_pane_cp10

0x2bab,	// (0x00039bce) indicator_popup_pane_ParamLimits

0x2bab,	// (0x00039bce) indicator_popup_pane

0x2bcd,	// (0x00039bf0) popup_query_code_window_t1_ParamLimits

0x2bcd,	// (0x00039bf0) popup_query_code_window_t1

0x2be7,	// (0x00039c0a) popup_query_code_window_t2_ParamLimits

0x2be7,	// (0x00039c0a) popup_query_code_window_t2

0x2c30,	// (0x00039c53) popup_query_code_window_t3_ParamLimits

0x2c30,	// (0x00039c53) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00046851) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00046851) popup_query_code_window_t

0x2c5f,	// (0x00039c82) query_popup_pane_ParamLimits

0x2c5f,	// (0x00039c82) query_popup_pane

0xb50a,	// (0x0004252d) bg_popup_window_pane_cp15_ParamLimits

0xb50a,	// (0x0004252d) bg_popup_window_pane_cp15

0xb52a,	// (0x0004254d) indicator_popup_pane_cp1_ParamLimits

0xb52a,	// (0x0004254d) indicator_popup_pane_cp1

0xb53d,	// (0x00042560) indicator_popup_pane_cp2_ParamLimits

0xb53d,	// (0x00042560) indicator_popup_pane_cp2

0xb558,	// (0x0004257b) popup_query_data_code_window_g1_ParamLimits

0xb558,	// (0x0004257b) popup_query_data_code_window_g1

0xb56b,	// (0x0004258e) popup_query_data_code_window_t1_ParamLimits

0xb56b,	// (0x0004258e) popup_query_data_code_window_t1

0xb57d,	// (0x000425a0) popup_query_data_code_window_t2_ParamLimits

0xb57d,	// (0x000425a0) popup_query_data_code_window_t2

0xb58f,	// (0x000425b2) popup_query_data_code_window_t3_ParamLimits

0xb58f,	// (0x000425b2) popup_query_data_code_window_t3

0xb5a5,	// (0x000425c8) popup_query_data_code_window_t4_ParamLimits

0xb5a5,	// (0x000425c8) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000465ad) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000465ad) popup_query_data_code_window_t

0x0730,	// (0x00037753) list_single_midp_graphic_pane_g3

0xb5bf,	// (0x000425e2) query_popup_data_pane_cp2_ParamLimits

0xb5d2,	// (0x000425f5) query_popup_pane_cp2_ParamLimits

0xb5d2,	// (0x000425f5) query_popup_pane_cp2

0x85bf,	// (0x0003f5e2) bg_popup_window_pane_cp11

0x2b65,	// (0x00039b88) heading_pane_cp5

0xb66b,	// (0x0004268e) listscroll_popup_info_pane

0x85bf,	// (0x0003f5e2) input_focus_pane_cp3

0xb5ed,	// (0x00042610) query_popup_pane_t1

0xb5fb,	// (0x0004261e) list_popup_info_pane_ParamLimits

0xb5fb,	// (0x0004261e) list_popup_info_pane

0xb60a,	// (0x0004262d) listscroll_popup_info_pane_g1

0xb612,	// (0x00042635) scroll_pane_cp7

0xb61c,	// (0x0004263f) popup_info_list_pane_t1_ParamLimits

0xb61c,	// (0x0004263f) popup_info_list_pane_t1

0xb636,	// (0x00042659) popup_info_list_pane_t2_ParamLimits

0xb636,	// (0x00042659) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000465b6) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000465b6) popup_info_list_pane_t

0x85bf,	// (0x0003f5e2) bg_popup_window_pane_cp12

0x3f51,	// (0x0003af74) find_popup_pane

0x860d,	// (0x0003f630) bg_popup_window_pane_cp3

0xb650,	// (0x00042673) heading_pane_cp3

0xb65c,	// (0x0004267f) listscroll_popup_graphic_pane

0x85bf,	// (0x0003f5e2) bg_popup_window_pane_cp4

0x955b,	// (0x0004057e) heading_pane_cp4

0xb66b,	// (0x0004268e) listscroll_popup_colour_pane

0x9565,	// (0x00040588) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9565,	// (0x00040588) cell_large_graphic_colour_none_popup_pane

0x9579,	// (0x0004059c) grid_large_graphic_colour_popup_pane_ParamLimits

0x9579,	// (0x0004059c) grid_large_graphic_colour_popup_pane

0x959d,	// (0x000405c0) listscroll_popup_colour_pane_g1_ParamLimits

0x959d,	// (0x000405c0) listscroll_popup_colour_pane_g1

0x95b4,	// (0x000405d7) listscroll_popup_colour_pane_g2_ParamLimits

0x95b4,	// (0x000405d7) listscroll_popup_colour_pane_g2

0x95cb,	// (0x000405ee) listscroll_popup_colour_pane_g3_ParamLimits

0x95cb,	// (0x000405ee) listscroll_popup_colour_pane_g3

0x95db,	// (0x000405fe) listscroll_popup_colour_pane_g4_ParamLimits

0x95db,	// (0x000405fe) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000465bb) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000465bb) listscroll_popup_colour_pane_g

0xb673,	// (0x00042696) scroll_pane_cp6_ParamLimits

0xb673,	// (0x00042696) scroll_pane_cp6

0x95eb,	// (0x0004060e) cell_large_graphic_colour_popup_pane_ParamLimits

0x95eb,	// (0x0004060e) cell_large_graphic_colour_popup_pane

0xb685,	// (0x000426a8) cell_large_graphic_colour_none_popup_pane_t1

0x85bf,	// (0x0003f5e2) grid_highlight_pane_cp5

0xb694,	// (0x000426b7) cell_large_graphic_colour_popup_pane_g1

0xb69c,	// (0x000426bf) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000465c4) cell_large_graphic_colour_popup_pane_g

0xb6a4,	// (0x000426c7) cell_large_graphic_colour_popup_pane_g2_copy1

0xb6ad,	// (0x000426d0) grid_highlight_pane_cp4

0xb6b5,	// (0x000426d8) bg_popup_window_pane_cp8_ParamLimits

0xb6b5,	// (0x000426d8) bg_popup_window_pane_cp8

0xb6d0,	// (0x000426f3) popup_snote_single_text_window_g1_ParamLimits

0xb6d0,	// (0x000426f3) popup_snote_single_text_window_g1

0xb6e2,	// (0x00042705) popup_snote_single_text_window_t1_ParamLimits

0xb6e2,	// (0x00042705) popup_snote_single_text_window_t1

0xb6f5,	// (0x00042718) popup_snote_single_text_window_t2_ParamLimits

0xb6f5,	// (0x00042718) popup_snote_single_text_window_t2

0xb708,	// (0x0004272b) popup_snote_single_text_window_t3_ParamLimits

0xb708,	// (0x0004272b) popup_snote_single_text_window_t3

0xb741,	// (0x00042764) popup_snote_single_text_window_t4_ParamLimits

0xb741,	// (0x00042764) popup_snote_single_text_window_t4

0xb775,	// (0x00042798) popup_snote_single_text_window_t5_ParamLimits

0xb775,	// (0x00042798) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000465c9) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000465c9) popup_snote_single_text_window_t

0xb7a4,	// (0x000427c7) bg_popup_window_pane_cp9_ParamLimits

0xb7a4,	// (0x000427c7) bg_popup_window_pane_cp9

0xb6d0,	// (0x000426f3) popup_snote_single_graphic_window_g1_ParamLimits

0xb6d0,	// (0x000426f3) popup_snote_single_graphic_window_g1

0xb7b2,	// (0x000427d5) popup_snote_single_graphic_window_g2_ParamLimits

0xb7b2,	// (0x000427d5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000465d4) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000465d4) popup_snote_single_graphic_window_g

0xb7be,	// (0x000427e1) popup_snote_single_graphic_window_t1_ParamLimits

0xb7be,	// (0x000427e1) popup_snote_single_graphic_window_t1

0xb7d1,	// (0x000427f4) popup_snote_single_graphic_window_t2_ParamLimits

0xb7d1,	// (0x000427f4) popup_snote_single_graphic_window_t2

0xb7e4,	// (0x00042807) popup_snote_single_graphic_window_t3_ParamLimits

0xb7e4,	// (0x00042807) popup_snote_single_graphic_window_t3

0xb81d,	// (0x00042840) popup_snote_single_graphic_window_t4_ParamLimits

0xb81d,	// (0x00042840) popup_snote_single_graphic_window_t4

0xb851,	// (0x00042874) popup_snote_single_graphic_window_t5_ParamLimits

0xb851,	// (0x00042874) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000465d9) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000465d9) popup_snote_single_graphic_window_t

0x3e8f,	// (0x0003aeb2) grid_graphic_popup_pane_ParamLimits

0x3e8f,	// (0x0003aeb2) grid_graphic_popup_pane

0x3ebd,	// (0x0003aee0) listscroll_popup_graphic_pane_g1_ParamLimits

0x3ebd,	// (0x0003aee0) listscroll_popup_graphic_pane_g1

0xc592,	// (0x000435b5) listscroll_popup_graphic_pane_g2_ParamLimits

0xc592,	// (0x000435b5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x000469ce) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x000469ce) listscroll_popup_graphic_pane_g

0x3ee5,	// (0x0003af08) scroll_pane_cp5

0xc531,	// (0x00043554) cell_graphic_popup_pane_ParamLimits

0xc531,	// (0x00043554) cell_graphic_popup_pane

0x3e05,	// (0x0003ae28) cell_graphic_popup_pane_g1

0x3e0d,	// (0x0003ae30) cell_graphic_popup_pane_g2

0xb6a4,	// (0x000426c7) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x000469c7) cell_graphic_popup_pane_g

0x3e16,	// (0x0003ae39) cell_graphic_popup_pane_t2

0xb6ad,	// (0x000426d0) grid_highlight_pane_cp3

0xb892,	// (0x000428b5) list_gen_pane_ParamLimits

0xb892,	// (0x000428b5) list_gen_pane

0xb8ba,	// (0x000428dd) scroll_pane

0xc4e8,	// (0x0004350b) bg_list_pane_g1_ParamLimits

0xc4e8,	// (0x0004350b) bg_list_pane_g1

0x3d7a,	// (0x0003ad9d) bg_list_pane_g2_ParamLimits

0x3d7a,	// (0x0003ad9d) bg_list_pane_g2

0x3d8f,	// (0x0003adb2) bg_list_pane_g3_ParamLimits

0x3d8f,	// (0x0003adb2) bg_list_pane_g3

0x3da3,	// (0x0003adc6) bg_list_pane_g4_ParamLimits

0x3da3,	// (0x0003adc6) bg_list_pane_g4

0xc505,	// (0x00043528) bg_list_pane_g5_ParamLimits

0xc505,	// (0x00043528) bg_list_pane_g5

0x0004,

0xf999,	// (0x000469bc) bg_list_pane_g_ParamLimits

0xf999,	// (0x000469bc) bg_list_pane_g

0xc4ab,	// (0x000434ce) list_double2_graphic_large_graphic_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double2_graphic_large_graphic_pane

0xc4ab,	// (0x000434ce) list_double2_graphic_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double2_graphic_pane

0xc4ab,	// (0x000434ce) list_double2_large_graphic_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double2_large_graphic_pane

0xc4ab,	// (0x000434ce) list_double2_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double2_pane

0xc4ab,	// (0x000434ce) list_double_graphic_heading_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double_graphic_heading_pane

0xc4ab,	// (0x000434ce) list_double_graphic_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double_graphic_pane

0xc4ab,	// (0x000434ce) list_double_heading_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double_heading_pane

0xc4ab,	// (0x000434ce) list_double_large_graphic_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double_large_graphic_pane

0xc4ab,	// (0x000434ce) list_double_number_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double_number_pane

0xc4ab,	// (0x000434ce) list_double_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double_pane

0xc4ab,	// (0x000434ce) list_double_time_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_double_time_pane

0xc4ab,	// (0x000434ce) list_setting_number_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_setting_number_pane

0xc4ab,	// (0x000434ce) list_setting_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_setting_pane

0xab48,	// (0x00041b6b) list_single_2graphic_pane_ParamLimits

0xab48,	// (0x00041b6b) list_single_2graphic_pane

0xab48,	// (0x00041b6b) list_single_graphic_heading_pane_ParamLimits

0xab48,	// (0x00041b6b) list_single_graphic_heading_pane

0xab48,	// (0x00041b6b) list_single_graphic_pane_ParamLimits

0xab48,	// (0x00041b6b) list_single_graphic_pane

0xab48,	// (0x00041b6b) list_single_heading_pane_ParamLimits

0xab48,	// (0x00041b6b) list_single_heading_pane

0xc4ab,	// (0x000434ce) list_single_large_graphic_pane_ParamLimits

0xc4ab,	// (0x000434ce) list_single_large_graphic_pane

0xab48,	// (0x00041b6b) list_single_number_heading_pane_ParamLimits

0xab48,	// (0x00041b6b) list_single_number_heading_pane

0xab48,	// (0x00041b6b) list_single_number_pane_ParamLimits

0xab48,	// (0x00041b6b) list_single_number_pane

0xab48,	// (0x00041b6b) list_single_pane_ParamLimits

0xab48,	// (0x00041b6b) list_single_pane

0x85bf,	// (0x0003f5e2) list_highlight_pane_cp1

0xcec4,	// (0x00043ee7) list_single_pane_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_single_pane_g1

0xced0,	// (0x00043ef3) list_single_pane_g2_ParamLimits

0xced0,	// (0x00043ef3) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000465eb) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000465eb) list_single_pane_g

0xd21b,	// (0x0004423e) list_single_pane_t1_ParamLimits

0xd21b,	// (0x0004423e) list_single_pane_t1

0xcec4,	// (0x00043ee7) list_single_number_pane_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_single_number_pane_g1

0xced0,	// (0x00043ef3) list_single_number_pane_g2_ParamLimits

0xced0,	// (0x00043ef3) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000465eb) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000465eb) list_single_number_pane_g

0xd146,	// (0x00044169) list_single_number_pane_t1_ParamLimits

0xd146,	// (0x00044169) list_single_number_pane_t1

0xab0a,	// (0x00041b2d) list_single_number_pane_t2_ParamLimits

0xab0a,	// (0x00041b2d) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x0004697d) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x0004697d) list_single_number_pane_t

0x9616,	// (0x00040639) list_single_graphic_pane_g1_ParamLimits

0x9616,	// (0x00040639) list_single_graphic_pane_g1

0xcec4,	// (0x00043ee7) list_single_graphic_pane_g2_ParamLimits

0xcec4,	// (0x00043ee7) list_single_graphic_pane_g2

0xced0,	// (0x00043ef3) list_single_graphic_pane_g3_ParamLimits

0xced0,	// (0x00043ef3) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000465e4) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000465e4) list_single_graphic_pane_g

0x9622,	// (0x00040645) list_single_graphic_pane_t1_ParamLimits

0x9622,	// (0x00040645) list_single_graphic_pane_t1

0xcec4,	// (0x00043ee7) list_single_heading_pane_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_single_heading_pane_g1

0xced0,	// (0x00043ef3) list_single_heading_pane_g2_ParamLimits

0xced0,	// (0x00043ef3) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000465eb) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000465eb) list_single_heading_pane_g

0x9638,	// (0x0004065b) list_single_heading_pane_t1_ParamLimits

0x9638,	// (0x0004065b) list_single_heading_pane_t1

0x964e,	// (0x00040671) list_single_heading_pane_t2_ParamLimits

0x964e,	// (0x00040671) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000465f0) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000465f0) list_single_heading_pane_t

0xcec4,	// (0x00043ee7) list_single_number_heading_pane_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_single_number_heading_pane_g1

0xced0,	// (0x00043ef3) list_single_number_heading_pane_g2_ParamLimits

0xced0,	// (0x00043ef3) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000465eb) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000465eb) list_single_number_heading_pane_g

0x9638,	// (0x0004065b) list_single_number_heading_pane_t1_ParamLimits

0x9638,	// (0x0004065b) list_single_number_heading_pane_t1

0xcedc,	// (0x00043eff) list_single_number_heading_pane_t2_ParamLimits

0xcedc,	// (0x00043eff) list_single_number_heading_pane_t2

0xceee,	// (0x00043f11) list_single_number_heading_pane_t3_ParamLimits

0xceee,	// (0x00043f11) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000465f5) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000465f5) list_single_number_heading_pane_t

0xcf00,	// (0x00043f23) list_single_graphic_heading_pane_g1_ParamLimits

0xcf00,	// (0x00043f23) list_single_graphic_heading_pane_g1

0x9660,	// (0x00040683) list_single_graphic_heading_pane_g4_ParamLimits

0x9660,	// (0x00040683) list_single_graphic_heading_pane_g4

0xced0,	// (0x00043ef3) list_single_graphic_heading_pane_g5_ParamLimits

0xced0,	// (0x00043ef3) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000465fc) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000465fc) list_single_graphic_heading_pane_g

0x9638,	// (0x0004065b) list_single_graphic_heading_pane_t1_ParamLimits

0x9638,	// (0x0004065b) list_single_graphic_heading_pane_t1

0x9671,	// (0x00040694) list_single_graphic_heading_pane_t2_ParamLimits

0x9671,	// (0x00040694) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00046603) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00046603) list_single_graphic_heading_pane_t

0xcf0c,	// (0x00043f2f) list_single_large_graphic_pane_g1_ParamLimits

0xcf0c,	// (0x00043f2f) list_single_large_graphic_pane_g1

0xcf18,	// (0x00043f3b) list_single_large_graphic_pane_g2_ParamLimits

0xcf18,	// (0x00043f3b) list_single_large_graphic_pane_g2

0xcf24,	// (0x00043f47) list_single_large_graphic_pane_g3_ParamLimits

0xcf24,	// (0x00043f47) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00046608) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00046608) list_single_large_graphic_pane_g

0x2d1a,	// (0x00039d3d) wait_border_pane_g2_copy1

0x9683,	// (0x000406a6) list_single_large_graphic_pane_g4_cp2

0xcf30,	// (0x00043f53) list_single_large_graphic_pane_t1_ParamLimits

0xcf30,	// (0x00043f53) list_single_large_graphic_pane_t1

0x968b,	// (0x000406ae) list_double_pane_g1_ParamLimits

0x968b,	// (0x000406ae) list_double_pane_g1

0xcf46,	// (0x00043f69) list_double_pane_g2_ParamLimits

0xcf46,	// (0x00043f69) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0004660f) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0004660f) list_double_pane_g

0x9697,	// (0x000406ba) list_double_pane_t1_ParamLimits

0x9697,	// (0x000406ba) list_double_pane_t1

0x96ad,	// (0x000406d0) list_double_pane_t2_ParamLimits

0x96ad,	// (0x000406d0) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00046614) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00046614) list_double_pane_t

0x96bf,	// (0x000406e2) list_double2_pane_g1_ParamLimits

0x96bf,	// (0x000406e2) list_double2_pane_g1

0x96d0,	// (0x000406f3) list_double2_pane_g2_ParamLimits

0x96d0,	// (0x000406f3) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00046619) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00046619) list_double2_pane_g

0x96dc,	// (0x000406ff) list_double2_pane_t1_ParamLimits

0x96dc,	// (0x000406ff) list_double2_pane_t1

0x96f2,	// (0x00040715) list_double2_pane_t2_ParamLimits

0x96f2,	// (0x00040715) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0004661e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0004661e) list_double2_pane_t

0x968b,	// (0x000406ae) list_double_number_pane_g1_ParamLimits

0x968b,	// (0x000406ae) list_double_number_pane_g1

0xcf46,	// (0x00043f69) list_double_number_pane_g2_ParamLimits

0xcf46,	// (0x00043f69) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0004660f) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0004660f) list_double_number_pane_g

0x9704,	// (0x00040727) list_double_number_pane_t1_ParamLimits

0x9704,	// (0x00040727) list_double_number_pane_t1

0x9716,	// (0x00040739) list_double_number_pane_t2_ParamLimits

0x9716,	// (0x00040739) list_double_number_pane_t2

0x972c,	// (0x0004074f) list_double_number_pane_t3_ParamLimits

0x972c,	// (0x0004074f) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00046623) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00046623) list_double_number_pane_t

0x973e,	// (0x00040761) list_double_graphic_pane_g1_ParamLimits

0x973e,	// (0x00040761) list_double_graphic_pane_g1

0x974a,	// (0x0004076d) list_double_graphic_pane_g2_ParamLimits

0x974a,	// (0x0004076d) list_double_graphic_pane_g2

0x9759,	// (0x0004077c) list_double_graphic_pane_g3_ParamLimits

0x9759,	// (0x0004077c) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0004662a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0004662a) list_double_graphic_pane_g

0x9771,	// (0x00040794) list_double_graphic_pane_t1_ParamLimits

0x9771,	// (0x00040794) list_double_graphic_pane_t1

0x9787,	// (0x000407aa) list_double_graphic_pane_t2_ParamLimits

0x9787,	// (0x000407aa) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00046633) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00046633) list_double_graphic_pane_t

0x9799,	// (0x000407bc) list_double2_graphic_pane_g1_ParamLimits

0x9799,	// (0x000407bc) list_double2_graphic_pane_g1

0xcf52,	// (0x00043f75) list_double2_graphic_pane_g2_ParamLimits

0xcf52,	// (0x00043f75) list_double2_graphic_pane_g2

0xcf5e,	// (0x00043f81) list_double2_graphic_pane_g3_ParamLimits

0xcf5e,	// (0x00043f81) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00046638) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00046638) list_double2_graphic_pane_g

0x97a5,	// (0x000407c8) list_double2_graphic_pane_t1_ParamLimits

0x97a5,	// (0x000407c8) list_double2_graphic_pane_t1

0x97bb,	// (0x000407de) list_double2_graphic_pane_t2_ParamLimits

0x97bb,	// (0x000407de) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0004663f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0004663f) list_double2_graphic_pane_t

0x97cd,	// (0x000407f0) list_double_large_graphic_pane_g1_ParamLimits

0x97cd,	// (0x000407f0) list_double_large_graphic_pane_g1

0x97ec,	// (0x0004080f) list_double_large_graphic_pane_g2_ParamLimits

0x97ec,	// (0x0004080f) list_double_large_graphic_pane_g2

0xcf46,	// (0x00043f69) list_double_large_graphic_pane_g3_ParamLimits

0xcf46,	// (0x00043f69) list_double_large_graphic_pane_g3

0x97fd,	// (0x00040820) list_double_large_graphic_pane_g4_ParamLimits

0x97fd,	// (0x00040820) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00046644) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00046644) list_double_large_graphic_pane_g

0x9810,	// (0x00040833) list_double_large_graphic_pane_t1_ParamLimits

0x9810,	// (0x00040833) list_double_large_graphic_pane_t1

0x9829,	// (0x0004084c) list_double_large_graphic_pane_t2_ParamLimits

0x9829,	// (0x0004084c) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0004664f) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0004664f) list_double_large_graphic_pane_t

0x983b,	// (0x0004085e) list_double2_large_graphic_pane_g1_ParamLimits

0x983b,	// (0x0004085e) list_double2_large_graphic_pane_g1

0x96bf,	// (0x000406e2) list_double2_large_graphic_pane_g2_ParamLimits

0x96bf,	// (0x000406e2) list_double2_large_graphic_pane_g2

0x96d0,	// (0x000406f3) list_double2_large_graphic_pane_g3_ParamLimits

0x96d0,	// (0x000406f3) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00046654) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00046654) list_double2_large_graphic_pane_g

0x9847,	// (0x0004086a) list_double2_large_graphic_pane_t1_ParamLimits

0x9847,	// (0x0004086a) list_double2_large_graphic_pane_t1

0x985d,	// (0x00040880) list_double2_large_graphic_pane_t2_ParamLimits

0x985d,	// (0x00040880) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0004665b) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0004665b) list_double2_large_graphic_pane_t

0x986f,	// (0x00040892) list_double_heading_pane_g1_ParamLimits

0x986f,	// (0x00040892) list_double_heading_pane_g1

0x9880,	// (0x000408a3) list_double_heading_pane_g2_ParamLimits

0x9880,	// (0x000408a3) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00046660) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00046660) list_double_heading_pane_g

0x988c,	// (0x000408af) list_double_heading_pane_t1_ParamLimits

0x988c,	// (0x000408af) list_double_heading_pane_t1

0x96f2,	// (0x00040715) list_double_heading_pane_t2_ParamLimits

0x96f2,	// (0x00040715) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00046665) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00046665) list_double_heading_pane_t

0xcf7f,	// (0x00043fa2) list_double_graphic_heading_pane_g1_ParamLimits

0xcf7f,	// (0x00043fa2) list_double_graphic_heading_pane_g1

0x986f,	// (0x00040892) list_double_graphic_heading_pane_g2_ParamLimits

0x986f,	// (0x00040892) list_double_graphic_heading_pane_g2

0x9880,	// (0x000408a3) list_double_graphic_heading_pane_g3_ParamLimits

0x9880,	// (0x000408a3) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0004666a) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0004666a) list_double_graphic_heading_pane_g

0x98a2,	// (0x000408c5) list_double_graphic_heading_pane_t1_ParamLimits

0x98a2,	// (0x000408c5) list_double_graphic_heading_pane_t1

0x97bb,	// (0x000407de) list_double_graphic_heading_pane_t2_ParamLimits

0x97bb,	// (0x000407de) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00046671) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00046671) list_double_graphic_heading_pane_t

0x97ec,	// (0x0004080f) list_double_time_pane_g1_ParamLimits

0x97ec,	// (0x0004080f) list_double_time_pane_g1

0xcf46,	// (0x00043f69) list_double_time_pane_g2_ParamLimits

0xcf46,	// (0x00043f69) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00046676) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00046676) list_double_time_pane_g

0x98b8,	// (0x000408db) list_double_time_pane_t1_ParamLimits

0x98b8,	// (0x000408db) list_double_time_pane_t1

0x98ce,	// (0x000408f1) list_double_time_pane_t2_ParamLimits

0x98ce,	// (0x000408f1) list_double_time_pane_t2

0x98e0,	// (0x00040903) list_double_time_pane_t3_ParamLimits

0x98e0,	// (0x00040903) list_double_time_pane_t3

0x98f2,	// (0x00040915) list_double_time_pane_t4_ParamLimits

0x98f2,	// (0x00040915) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0004667b) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0004667b) list_double_time_pane_t

0x9904,	// (0x00040927) list_setting_pane_g1_ParamLimits

0x9904,	// (0x00040927) list_setting_pane_g1

0x9910,	// (0x00040933) list_setting_pane_g2_ParamLimits

0x9910,	// (0x00040933) list_setting_pane_g2

0x0001,

0xf661,	// (0x00046684) list_setting_pane_g_ParamLimits

0xf661,	// (0x00046684) list_setting_pane_g

0x991c,	// (0x0004093f) list_setting_pane_t1_ParamLimits

0x991c,	// (0x0004093f) list_setting_pane_t1

0x9936,	// (0x00040959) list_setting_pane_t2_ParamLimits

0x9936,	// (0x00040959) list_setting_pane_t2

0x0002,

0xf666,	// (0x00046689) list_setting_pane_t_ParamLimits

0xf666,	// (0x00046689) list_setting_pane_t

0x9975,	// (0x00040998) set_value_pane_cp_ParamLimits

0x9975,	// (0x00040998) set_value_pane_cp

0x9983,	// (0x000409a6) list_setting_number_pane_g1_ParamLimits

0x9983,	// (0x000409a6) list_setting_number_pane_g1

0x998f,	// (0x000409b2) list_setting_number_pane_g2_ParamLimits

0x998f,	// (0x000409b2) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00046690) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00046690) list_setting_number_pane_g

0x999b,	// (0x000409be) list_setting_number_pane_t1_ParamLimits

0x999b,	// (0x000409be) list_setting_number_pane_t1

0x99b4,	// (0x000409d7) list_setting_number_pane_t2_ParamLimits

0x99b4,	// (0x000409d7) list_setting_number_pane_t2

0x99ce,	// (0x000409f1) list_setting_number_pane_t3_ParamLimits

0x99ce,	// (0x000409f1) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00046695) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00046695) list_setting_number_pane_t

0x9975,	// (0x00040998) set_value_pane_ParamLimits

0x9975,	// (0x00040998) set_value_pane

0xb8ee,	// (0x00042911) bg_set_opt_pane_ParamLimits

0xb8ee,	// (0x00042911) bg_set_opt_pane

0xcf8b,	// (0x00043fae) set_value_pane_t1

0xb90f,	// (0x00042932) slider_set_pane_cp3

0xb918,	// (0x0004293b) volume_small_pane_cp

0xb921,	// (0x00042944) list_form_gen_pane

0xb92a,	// (0x0004294d) scroll_pane_cp8

0x9a11,	// (0x00040a34) form_field_data_pane_ParamLimits

0x9a11,	// (0x00040a34) form_field_data_pane

0x9a2c,	// (0x00040a4f) form_field_data_wide_pane_ParamLimits

0x9a2c,	// (0x00040a4f) form_field_data_wide_pane

0xcfa9,	// (0x00043fcc) form_field_popup_pane_ParamLimits

0xcfa9,	// (0x00043fcc) form_field_popup_pane

0x9a4e,	// (0x00040a71) form_field_popup_wide_pane_ParamLimits

0x9a4e,	// (0x00040a71) form_field_popup_wide_pane

0xcfcb,	// (0x00043fee) form_field_slider_pane_ParamLimits

0xcfcb,	// (0x00043fee) form_field_slider_pane

0xcfde,	// (0x00044001) form_field_slider_wide_pane_ParamLimits

0xcfde,	// (0x00044001) form_field_slider_wide_pane

0xb93b,	// (0x0004295e) data_form_pane

0x9a79,	// (0x00040a9c) form_field_data_pane_t1

0xb947,	// (0x0004296a) input_focus_pane

0xcff1,	// (0x00044014) data_form_wide_pane

0xd00e,	// (0x00044031) form_field_data_wide_pane_t1

0xb6c2,	// (0x000426e5) input_focus_pane_cp6

0x9a93,	// (0x00040ab6) form_field_popup_pane_t1

0xb947,	// (0x0004296a) input_focus_pane_cp7

0xb975,	// (0x00042998) list_form_pane

0xd038,	// (0x0004405b) form_field_popup_wide_pane_t1

0xb947,	// (0x0004296a) input_focus_pane_cp8

0xb981,	// (0x000429a4) list_form_wide_pane

0x9ab5,	// (0x00040ad8) form_field_slider_pane_t1_ParamLimits

0x9ab5,	// (0x00040ad8) form_field_slider_pane_t1

0x9acd,	// (0x00040af0) form_field_slider_pane_t2_ParamLimits

0x9acd,	// (0x00040af0) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x000466a5) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x000466a5) form_field_slider_pane_t

0x8649,	// (0x0003f66c) input_focus_pane_cp9_ParamLimits

0x8649,	// (0x0003f66c) input_focus_pane_cp9

0x9ae2,	// (0x00040b05) slider_cont_pane_ParamLimits

0x9ae2,	// (0x00040b05) slider_cont_pane

0xb98d,	// (0x000429b0) form_field_slider_wide_pane_t1_ParamLimits

0xb98d,	// (0x000429b0) form_field_slider_wide_pane_t1

0xd04d,	// (0x00044070) form_field_slider_wide_pane_t2_ParamLimits

0xd04d,	// (0x00044070) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x000466aa) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x000466aa) form_field_slider_wide_pane_t

0x8649,	// (0x0003f66c) input_focus_pane_cp10_ParamLimits

0x8649,	// (0x0003f66c) input_focus_pane_cp10

0x9af6,	// (0x00040b19) slider_cont_pane_cp1_ParamLimits

0x9af6,	// (0x00040b19) slider_cont_pane_cp1

0x9b0a,	// (0x00040b2d) slider_form_pane_cp

0xb99f,	// (0x000429c2) input_focus_pane_g1

0xb9a7,	// (0x000429ca) input_focus_pane_g2

0xb9af,	// (0x000429d2) input_focus_pane_g3

0xb9b7,	// (0x000429da) input_focus_pane_g4

0xb9bf,	// (0x000429e2) input_focus_pane_g5

0xb9c7,	// (0x000429ea) input_focus_pane_g6

0xb9cf,	// (0x000429f2) input_focus_pane_g7

0xb9d7,	// (0x000429fa) input_focus_pane_g8

0xb9df,	// (0x00042a02) input_focus_pane_g9

0x85b5,	// (0x0003f5d8) input_focus_pane_g10

0x0009,

0xf68c,	// (0x000466af) input_focus_pane_g

0x2d23,	// (0x00039d46) wait_border_pane_g3_copy1

0x9b12,	// (0x00040b35) data_form_pane_t1

0x85b5,	// (0x0003f5d8) wait_anim_pane_g1_copy1

0xab1c,	// (0x00041b3f) data_form_wide_pane_t1

0xd05f,	// (0x00044082) list_form_graphic_pane_cp_ParamLimits

0xd05f,	// (0x00044082) list_form_graphic_pane_cp

0x3c6f,	// (0x0003ac92) slider_form_pane_g1

0x3c78,	// (0x0003ac9b) slider_form_pane_g2

0x0006,

0xf98a,	// (0x000469ad) slider_form_pane_g

0xd05f,	// (0x00044082) list_form_graphic_pane_ParamLimits

0xd05f,	// (0x00044082) list_form_graphic_pane

0xd071,	// (0x00044094) list_form_graphic_pane_g1

0xd079,	// (0x0004409c) list_form_graphic_pane_t1_ParamLimits

0xd079,	// (0x0004409c) list_form_graphic_pane_t1

0x860d,	// (0x0003f630) list_highlight_pane_cp5_ParamLimits

0x860d,	// (0x0003f630) list_highlight_pane_cp5

0x9b2c,	// (0x00040b4f) find_pane_g1

0xb9e7,	// (0x00042a0a) input_find_pane

0x9b35,	// (0x00040b58) input_find_pane_g1_ParamLimits

0x9b35,	// (0x00040b58) input_find_pane_g1

0x9b41,	// (0x00040b64) input_find_pane_t1_ParamLimits

0x9b41,	// (0x00040b64) input_find_pane_t1

0x9b56,	// (0x00040b79) input_find_pane_t2_ParamLimits

0x9b56,	// (0x00040b79) input_find_pane_t2

0x0001,

0xf6a1,	// (0x000466c4) input_find_pane_t_ParamLimits

0xf6a1,	// (0x000466c4) input_find_pane_t

0xb9f0,	// (0x00042a13) input_focus_pane_cp5_ParamLimits

0xb9f0,	// (0x00042a13) input_focus_pane_cp5

0xb9fe,	// (0x00042a21) bg_popup_window_pane_cp2_ParamLimits

0xb9fe,	// (0x00042a21) bg_popup_window_pane_cp2

0xba0b,	// (0x00042a2e) listscroll_menu_pane_ParamLimits

0xba0b,	// (0x00042a2e) listscroll_menu_pane

0x9b77,	// (0x00040b9a) popup_submenu_window_ParamLimits

0x9b77,	// (0x00040b9a) popup_submenu_window

0xba17,	// (0x00042a3a) find_popup_pane_g1

0xba1f,	// (0x00042a42) input_popup_find_pane_cp

0xb9f0,	// (0x00042a13) input_focus_pane_cp4_ParamLimits

0xb9f0,	// (0x00042a13) input_focus_pane_cp4

0xba29,	// (0x00042a4c) input_popup_find_pane_t1_ParamLimits

0xba29,	// (0x00042a4c) input_popup_find_pane_t1

0x85bf,	// (0x0003f5e2) bg_popup_sub_pane_cp

0xba57,	// (0x00042a7a) listscroll_popup_sub_pane

0xba5f,	// (0x00042a82) list_submenu_pane_ParamLimits

0xba5f,	// (0x00042a82) list_submenu_pane

0xba70,	// (0x00042a93) scroll_pane_cp4

0xba78,	// (0x00042a9b) list_single_popup_submenu_pane_ParamLimits

0xba78,	// (0x00042a9b) list_single_popup_submenu_pane

0xba8d,	// (0x00042ab0) list_single_popup_submenu_pane_g1

0xba95,	// (0x00042ab8) list_single_popup_submenu_pane_t1_ParamLimits

0xba95,	// (0x00042ab8) list_single_popup_submenu_pane_t1

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp1_ParamLimits

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp1

0x9bb5,	// (0x00040bd8) tabs_2_active_pane_g1

0x9bbd,	// (0x00040be0) tabs_2_active_pane_t1

0x8649,	// (0x0003f66c) bg_passive_tab_pane_cp1_ParamLimits

0x8649,	// (0x0003f66c) bg_passive_tab_pane_cp1

0x9bb5,	// (0x00040bd8) tabs_2_passive_pane_g1

0x9bbd,	// (0x00040be0) tabs_2_passive_pane_t1

0x860d,	// (0x0003f630) bg_active_tab_pane_cp4

0x9bcf,	// (0x00040bf2) tabs_2_long_active_pane_t1

0x21ff,	// (0x00039222) bg_passive_tab_pane_cp4

0x0738,	// (0x0003775b) list_single_midp_graphic_pane_g4_ParamLimits

0x860d,	// (0x0003f630) bg_active_tab_pane_cp5

0x9be2,	// (0x00040c05) tabs_3_long_active_pane_t1

0x21ff,	// (0x00039222) bg_passive_tab_pane_cp5

0x0738,	// (0x0003775b) list_single_midp_graphic_pane_g4

0x860d,	// (0x0003f630) bg_popup_window_pane_cp13_ParamLimits

0x860d,	// (0x0003f630) bg_popup_window_pane_cp13

0xbab3,	// (0x00042ad6) listscroll_popup_fast_pane_ParamLimits

0xbab3,	// (0x00042ad6) listscroll_popup_fast_pane

0xbac2,	// (0x00042ae5) grid_popup_fast_pane_ParamLimits

0xbac2,	// (0x00042ae5) grid_popup_fast_pane

0xbad4,	// (0x00042af7) scroll_pane_cp9_ParamLimits

0xbad4,	// (0x00042af7) scroll_pane_cp9

0x55b4,	// (0x0003c5d7) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x55b4,	// (0x0003c5d7) list_single_graphic_hl_pane_t1_cp2

0xbaf8,	// (0x00042b1b) input_focus_pane_cp20_ParamLimits

0xbaf8,	// (0x00042b1b) input_focus_pane_cp20

0xbb06,	// (0x00042b29) query_popup_data_pane_t1_ParamLimits

0xbb06,	// (0x00042b29) query_popup_data_pane_t1

0xbb19,	// (0x00042b3c) query_popup_data_pane_t2_ParamLimits

0xbb19,	// (0x00042b3c) query_popup_data_pane_t2

0xbb5f,	// (0x00042b82) query_popup_data_pane_t3_ParamLimits

0xbb5f,	// (0x00042b82) query_popup_data_pane_t3

0xbba0,	// (0x00042bc3) query_popup_data_pane_t4_ParamLimits

0xbba0,	// (0x00042bc3) query_popup_data_pane_t4

0xbbdc,	// (0x00042bff) query_popup_data_pane_t5_ParamLimits

0xbbdc,	// (0x00042bff) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x000466c9) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x000466c9) query_popup_data_pane_t

0xb99f,	// (0x000429c2) bg_set_opt_pane_g1

0xb9a7,	// (0x000429ca) bg_set_opt_pane_g2

0xb9af,	// (0x000429d2) bg_set_opt_pane_g3

0xb9b7,	// (0x000429da) bg_set_opt_pane_g4

0xb9bf,	// (0x000429e2) bg_set_opt_pane_g5

0xb9c7,	// (0x000429ea) bg_set_opt_pane_g6

0xb9cf,	// (0x000429f2) bg_set_opt_pane_g7

0xb9d7,	// (0x000429fa) bg_set_opt_pane_g8

0xb9df,	// (0x00042a02) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x000466d4) bg_set_opt_pane_g

0xf143,	// (0x00046166) control_top_pane_stacon_ParamLimits

0xf143,	// (0x00046166) control_top_pane_stacon

0xf196,	// (0x000461b9) signal_pane_stacon_ParamLimits

0xf196,	// (0x000461b9) signal_pane_stacon

0xf1bb,	// (0x000461de) stacon_top_pane_g1_ParamLimits

0xf1bb,	// (0x000461de) stacon_top_pane_g1

0xf1dd,	// (0x00046200) title_pane_stacon_ParamLimits

0xf1dd,	// (0x00046200) title_pane_stacon

0xf207,	// (0x0004622a) uni_indicator_pane_stacon_ParamLimits

0xf207,	// (0x0004622a) uni_indicator_pane_stacon

0xf21c,	// (0x0004623f) battery_pane_stacon_ParamLimits

0xf21c,	// (0x0004623f) battery_pane_stacon

0xf260,	// (0x00046283) control_bottom_pane_stacon_ParamLimits

0xf260,	// (0x00046283) control_bottom_pane_stacon

0xf283,	// (0x000462a6) navi_pane_stacon_ParamLimits

0xf283,	// (0x000462a6) navi_pane_stacon

0xf2a6,	// (0x000462c9) stacon_bottom_pane_g1_ParamLimits

0xf2a6,	// (0x000462c9) stacon_bottom_pane_g1

0xeccc,	// (0x00045cef) aid_levels_signal_lsc_ParamLimits

0xeccc,	// (0x00045cef) aid_levels_signal_lsc

0xece3,	// (0x00045d06) signal_pane_stacon_g1_ParamLimits

0xece3,	// (0x00045d06) signal_pane_stacon_g1

0xecf7,	// (0x00045d1a) signal_pane_stacon_g2_ParamLimits

0xecf7,	// (0x00045d1a) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x000466e7) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000466e7) signal_pane_stacon_g

0xed2c,	// (0x00045d4f) title_pane_stacon_t1_ParamLimits

0xed2c,	// (0x00045d4f) title_pane_stacon_t1

0xbc20,	// (0x00042c43) uni_indicator_pane_stacon_g1

0xbc2a,	// (0x00042c4d) uni_indicator_pane_stacon_g2

0xbc34,	// (0x00042c57) uni_indicator_pane_stacon_g3

0xbc3e,	// (0x00042c61) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x000466f3) uni_indicator_pane_stacon_g

0xed51,	// (0x00045d74) control_top_pane_stacon_g1

0xed59,	// (0x00045d7c) control_top_pane_stacon_t1_ParamLimits

0xed59,	// (0x00045d7c) control_top_pane_stacon_t1

0xed90,	// (0x00045db3) aid_levels_battery_lsc_ParamLimits

0xed90,	// (0x00045db3) aid_levels_battery_lsc

0xeda8,	// (0x00045dcb) battery_pane_stacon_g1_ParamLimits

0xeda8,	// (0x00045dcb) battery_pane_stacon_g1

0xedbb,	// (0x00045dde) battery_pane_stacon_g2_ParamLimits

0xedbb,	// (0x00045dde) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x000466fc) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x000466fc) battery_pane_stacon_g

0xedf9,	// (0x00045e1c) navi_icon_pane_stacon

0xee0d,	// (0x00045e30) navi_navi_pane_stacon

0xedf9,	// (0x00045e1c) navi_text_pane_stacon

0xed51,	// (0x00045d74) control_bottom_pane_stacon_g1

0xee23,	// (0x00045e46) control_bottom_pane_stacon_t1_ParamLimits

0xee23,	// (0x00045e46) control_bottom_pane_stacon_t1

0x9bf4,	// (0x00040c17) grid_app_pane_ParamLimits

0x9bf4,	// (0x00040c17) grid_app_pane

0x9c2c,	// (0x00040c4f) scroll_pane_cp15_ParamLimits

0x9c2c,	// (0x00040c4f) scroll_pane_cp15

0x9c41,	// (0x00040c64) cell_app_pane_ParamLimits

0x9c41,	// (0x00040c64) cell_app_pane

0x9c8e,	// (0x00040cb1) cell_app_pane_g1_ParamLimits

0x9c8e,	// (0x00040cb1) cell_app_pane_g1

0xbc62,	// (0x00042c85) cell_app_pane_g2_ParamLimits

0xbc62,	// (0x00042c85) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00046701) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00046701) cell_app_pane_g

0x9cb2,	// (0x00040cd5) cell_app_pane_t1_ParamLimits

0x9cb2,	// (0x00040cd5) cell_app_pane_t1

0xbc6e,	// (0x00042c91) grid_highlight_pane_ParamLimits

0xbc6e,	// (0x00042c91) grid_highlight_pane

0xb99f,	// (0x000429c2) cell_highlight_pane_g1

0xb9a7,	// (0x000429ca) cell_highlight_pane_g2

0xb9af,	// (0x000429d2) cell_highlight_pane_g3

0xb9b7,	// (0x000429da) cell_highlight_pane_g4

0xb9bf,	// (0x000429e2) cell_highlight_pane_g5

0xb9c7,	// (0x000429ea) cell_highlight_pane_g6

0xb9cf,	// (0x000429f2) cell_highlight_pane_g7

0xb9d7,	// (0x000429fa) cell_highlight_pane_g8

0xb9df,	// (0x00042a02) cell_highlight_pane_g9

0x85b5,	// (0x0003f5d8) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x000466af) cell_highlight_pane_g

0xbc7f,	// (0x00042ca2) bg_scroll_pane

0xee64,	// (0x00045e87) scroll_handle_pane

0xbcc6,	// (0x00042ce9) scroll_bg_pane_g1

0xbcdb,	// (0x00042cfe) scroll_bg_pane_g2

0xbcf3,	// (0x00042d16) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00046706) scroll_bg_pane_g

0xbd08,	// (0x00042d2b) scroll_handle_focus_pane_ParamLimits

0xbd08,	// (0x00042d2b) scroll_handle_focus_pane

0xbcc6,	// (0x00042ce9) scroll_handle_pane_g1

0xbd15,	// (0x00042d38) scroll_handle_pane_g2

0xbcf3,	// (0x00042d16) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0004670d) scroll_handle_pane_g

0xb9f0,	// (0x00042a13) bg_popup_sub_pane_cp21_ParamLimits

0xb9f0,	// (0x00042a13) bg_popup_sub_pane_cp21

0xbd29,	// (0x00042d4c) popup_fep_japan_predictive_window_t1_ParamLimits

0xbd29,	// (0x00042d4c) popup_fep_japan_predictive_window_t1

0xbd40,	// (0x00042d63) popup_fep_japan_predictive_window_t2_ParamLimits

0xbd40,	// (0x00042d63) popup_fep_japan_predictive_window_t2

0xd08e,	// (0x000440b1) popup_fep_japan_predictive_window_t3_ParamLimits

0xd08e,	// (0x000440b1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00046714) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00046714) popup_fep_japan_predictive_window_t

0x85bf,	// (0x0003f5e2) bg_popup_sub_pane_cp23

0xd0c5,	// (0x000440e8) listscroll_japin_cand_pane

0xd0cd,	// (0x000440f0) popup_fep_japan_candidate_window_t1

0xd0db,	// (0x000440fe) candidate_pane_ParamLimits

0xd0db,	// (0x000440fe) candidate_pane

0xd0ed,	// (0x00044110) scroll_pane_cp30

0xd0f7,	// (0x0004411a) list_single_popup_jap_candidate_pane_ParamLimits

0xd0f7,	// (0x0004411a) list_single_popup_jap_candidate_pane

0x85bf,	// (0x0003f5e2) list_highlight_pane_cp30

0xd10b,	// (0x0004412e) list_single_popup_jap_candidate_pane_t1

0x9cd2,	// (0x00040cf5) level_1_signal

0x9ce4,	// (0x00040d07) level_2_signal

0x9cf7,	// (0x00040d1a) level_3_signal

0x9d0a,	// (0x00040d2d) level_4_signal

0x9d1d,	// (0x00040d40) level_5_signal

0x9d30,	// (0x00040d53) level_6_signal

0x9d43,	// (0x00040d66) level_7_signal

0x9cd2,	// (0x00040cf5) level_1_battery

0x9ce4,	// (0x00040d07) level_2_battery

0x9cf7,	// (0x00040d1a) level_3_battery

0x9d0a,	// (0x00040d2d) level_4_battery

0x9d1d,	// (0x00040d40) level_5_battery

0x9d30,	// (0x00040d53) level_6_battery

0x9d43,	// (0x00040d66) level_7_battery

0xeec4,	// (0x00045ee7) list_menu_pane_ParamLimits

0xeec4,	// (0x00045ee7) list_menu_pane

0xeeda,	// (0x00045efd) scroll_pane_cp25_ParamLimits

0xeeda,	// (0x00045efd) scroll_pane_cp25

0xeef3,	// (0x00045f16) list_double2_graphic_pane_cp2_ParamLimits

0xeef3,	// (0x00045f16) list_double2_graphic_pane_cp2

0xeef3,	// (0x00045f16) list_double2_large_graphic_pane_cp2_ParamLimits

0xeef3,	// (0x00045f16) list_double2_large_graphic_pane_cp2

0xeef3,	// (0x00045f16) list_double2_pane_cp2_ParamLimits

0xeef3,	// (0x00045f16) list_double2_pane_cp2

0xeef3,	// (0x00045f16) list_double_graphic_pane_cp2_ParamLimits

0xeef3,	// (0x00045f16) list_double_graphic_pane_cp2

0xeef3,	// (0x00045f16) list_double_large_graphic_pane_cp2_ParamLimits

0xeef3,	// (0x00045f16) list_double_large_graphic_pane_cp2

0xeef3,	// (0x00045f16) list_double_number_pane_cp2_ParamLimits

0xeef3,	// (0x00045f16) list_double_number_pane_cp2

0xeef3,	// (0x00045f16) list_double_pane_cp2_ParamLimits

0xeef3,	// (0x00045f16) list_double_pane_cp2

0x9d56,	// (0x00040d79) list_single_2graphic_pane_cp2_ParamLimits

0x9d56,	// (0x00040d79) list_single_2graphic_pane_cp2

0x9d56,	// (0x00040d79) list_single_graphic_heading_pane_cp2_ParamLimits

0x9d56,	// (0x00040d79) list_single_graphic_heading_pane_cp2

0x9d56,	// (0x00040d79) list_single_graphic_pane_cp2_ParamLimits

0x9d56,	// (0x00040d79) list_single_graphic_pane_cp2

0x9d56,	// (0x00040d79) list_single_heading_pane_cp2_ParamLimits

0x9d56,	// (0x00040d79) list_single_heading_pane_cp2

0xef03,	// (0x00045f26) list_single_large_graphic_pane_cp2_ParamLimits

0xef03,	// (0x00045f26) list_single_large_graphic_pane_cp2

0x9d56,	// (0x00040d79) list_single_number_heading_pane_cp2_ParamLimits

0x9d56,	// (0x00040d79) list_single_number_heading_pane_cp2

0x9d56,	// (0x00040d79) list_single_number_pane_cp2_ParamLimits

0x9d56,	// (0x00040d79) list_single_number_pane_cp2

0x9d56,	// (0x00040d79) list_single_pane_cp2_ParamLimits

0x9d56,	// (0x00040d79) list_single_pane_cp2

0xef77,	// (0x00045f9a) bg_popup_sub_pane_cp22

0xef9c,	// (0x00045fbf) popup_side_volume_key_window_g1

0xefc6,	// (0x00045fe9) popup_side_volume_key_window_t1

0xefe4,	// (0x00046007) volume_small_pane_cp1

0x8649,	// (0x0003f66c) bg_popup_sub_pane_cp24_ParamLimits

0x8649,	// (0x0003f66c) bg_popup_sub_pane_cp24

0xefec,	// (0x0004600f) fep_china_uni_candidate_pane_ParamLimits

0xefec,	// (0x0004600f) fep_china_uni_candidate_pane

0xf000,	// (0x00046023) fep_china_uni_entry_pane

0xf010,	// (0x00046033) popup_fep_china_uni_window_g1

0xf02c,	// (0x0004604f) fep_china_uni_entry_pane_g1

0xf036,	// (0x00046059) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00046745) fep_china_uni_entry_pane_g

0xf040,	// (0x00046063) fep_entry_item_pane

0xf04a,	// (0x0004606d) fep_candidate_item_pane

0xf052,	// (0x00046075) fep_china_uni_candidate_pane_g1

0xf05c,	// (0x0004607f) fep_china_uni_candidate_pane_g2

0xf064,	// (0x00046087) fep_china_uni_candidate_pane_g3

0xf06c,	// (0x0004608f) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0004674a) fep_china_uni_candidate_pane_g

0x85b5,	// (0x0003f5d8) fep_entry_item_pane_g1

0xf076,	// (0x00046099) fep_entry_item_pane_t1_ParamLimits

0xf076,	// (0x00046099) fep_entry_item_pane_t1

0xf08c,	// (0x000460af) fep_candidate_item_pane_t1_ParamLimits

0xf08c,	// (0x000460af) fep_candidate_item_pane_t1

0xf0a1,	// (0x000460c4) fep_candidate_item_pane_t2_ParamLimits

0xf0a1,	// (0x000460c4) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00046753) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00046753) fep_candidate_item_pane_t

0x860d,	// (0x0003f630) list_highlight_pane_cp31_ParamLimits

0x860d,	// (0x0003f630) list_highlight_pane_cp31

0xf0b3,	// (0x000460d6) level_1_signal_lsc

0xf0bc,	// (0x000460df) level_2_signal_lsc

0xf0c5,	// (0x000460e8) level_3_signal_lsc

0xf0ce,	// (0x000460f1) level_4_signal_lsc

0xf0d7,	// (0x000460fa) level_5_signal_lsc

0xf0e0,	// (0x00046103) level_6_signal_lsc

0xf0e9,	// (0x0004610c) level_7_signal_lsc

0xf0e9,	// (0x0004610c) level_1_battery_lsc

0xf0f2,	// (0x00046115) level_2_battery_lsc

0xf0fb,	// (0x0004611e) level_3_battery_lsc

0xf104,	// (0x00046127) level_4_battery_lsc

0xf10d,	// (0x00046130) level_5_battery_lsc

0xf116,	// (0x00046139) level_6_battery_lsc

0xf0b3,	// (0x000460d6) level_7_battery_lsc

0xf11f,	// (0x00046142) scroll_handle_focus_pane_g1

0xf128,	// (0x0004614b) scroll_handle_focus_pane_g2

0xf131,	// (0x00046154) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00046758) scroll_handle_focus_pane_g

0x9de5,	// (0x00040e08) list_single_2graphic_pane_g1_ParamLimits

0x9de5,	// (0x00040e08) list_single_2graphic_pane_g1

0x9660,	// (0x00040683) list_single_2graphic_pane_g2_ParamLimits

0x9660,	// (0x00040683) list_single_2graphic_pane_g2

0xced0,	// (0x00043ef3) list_single_2graphic_pane_g3_ParamLimits

0xced0,	// (0x00043ef3) list_single_2graphic_pane_g3

0x9df1,	// (0x00040e14) list_single_2graphic_pane_g4_ParamLimits

0x9df1,	// (0x00040e14) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0004675f) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0004675f) list_single_2graphic_pane_g

0x9dfd,	// (0x00040e20) list_single_2graphic_pane_t1_ParamLimits

0x9dfd,	// (0x00040e20) list_single_2graphic_pane_t1

0x9e2b,	// (0x00040e4e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9e2b,	// (0x00040e4e) list_double2_graphic_large_graphic_pane_g1

0x96bf,	// (0x000406e2) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x96bf,	// (0x000406e2) list_double2_graphic_large_graphic_pane_g2

0x96d0,	// (0x000406f3) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x96d0,	// (0x000406f3) list_double2_graphic_large_graphic_pane_g3

0x9e3d,	// (0x00040e60) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9e3d,	// (0x00040e60) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00046768) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00046768) list_double2_graphic_large_graphic_pane_g

0x9e49,	// (0x00040e6c) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9e49,	// (0x00040e6c) list_double2_graphic_large_graphic_pane_t1

0x9e5f,	// (0x00040e82) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9e5f,	// (0x00040e82) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00046771) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00046771) list_double2_graphic_large_graphic_pane_t

0xf366,	// (0x00046389) popup_fast_swap_window_ParamLimits

0xf366,	// (0x00046389) popup_fast_swap_window

0xf384,	// (0x000463a7) popup_side_volume_key_window

0xf3a2,	// (0x000463c5) stacon_top_pane

0xf3ac,	// (0x000463cf) status_pane_ParamLimits

0xf3ac,	// (0x000463cf) status_pane

0x9eb9,	// (0x00040edc) status_small_pane

0x85bf,	// (0x0003f5e2) control_pane

0x85bf,	// (0x0003f5e2) stacon_bottom_pane

0xb92a,	// (0x0004294d) scroll_pane_cp121

0xb921,	// (0x00042944) set_content_pane

0x9e71,	// (0x00040e94) bg_active_tab_pane_g1_cp1

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp1

0x9e7a,	// (0x00040e9d) bg_active_tab_pane_g3_cp1

0x9e71,	// (0x00040e94) bg_passive_tab_pane_g1_cp1

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp1

0x9e7a,	// (0x00040e9d) bg_passive_tab_pane_g3_cp1

0x9e83,	// (0x00040ea6) bg_active_tab_pane_g1_cp2

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp2

0x9e8c,	// (0x00040eaf) bg_active_tab_pane_g3_cp2

0x9e83,	// (0x00040ea6) bg_passive_tab_pane_g1_cp2

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp2

0x9e8c,	// (0x00040eaf) bg_passive_tab_pane_g3_cp2

0x9e95,	// (0x00040eb8) bg_active_tab_pane_g1_cp3

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp3

0x9e9e,	// (0x00040ec1) bg_active_tab_pane_g3_cp3

0x9e95,	// (0x00040eb8) bg_passive_tab_pane_g1_cp3

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp3

0x9e9e,	// (0x00040ec1) bg_passive_tab_pane_g3_cp3

0x9ea7,	// (0x00040eca) bg_active_tab_pane_g1_cp4

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp4

0x9eb0,	// (0x00040ed3) bg_active_tab_pane_g3_cp4

0x9ea7,	// (0x00040eca) bg_passive_tab_pane_g1_cp4

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp4

0x9eb0,	// (0x00040ed3) bg_passive_tab_pane_g3_cp4

0xf2c2,	// (0x000462e5) bg_active_tab_pane_g1_cp5

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp5

0xf2cb,	// (0x000462ee) bg_active_tab_pane_g3_cp5

0xf2c2,	// (0x000462e5) bg_passive_tab_pane_g1_cp5

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp5

0xf2cb,	// (0x000462ee) bg_passive_tab_pane_g3_cp5

0xf2d4,	// (0x000462f7) list_set_graphic_pane_ParamLimits

0xf2d4,	// (0x000462f7) list_set_graphic_pane

0x85bf,	// (0x0003f5e2) bg_set_opt_pane_cp4

0xf2e7,	// (0x0004630a) list_set_graphic_pane_g1_ParamLimits

0xf2e7,	// (0x0004630a) list_set_graphic_pane_g1

0xf2f3,	// (0x00046316) list_set_graphic_pane_g2_ParamLimits

0xf2f3,	// (0x00046316) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00046776) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00046776) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00046afb) volume_small_pane_cp_g

0xf317,	// (0x0004633a) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xf317,	// (0x0004633a) list_double2_large_graphic_pane_g1_cp2

0xf325,	// (0x00046348) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf325,	// (0x00046348) list_double2_large_graphic_pane_g2_cp2

0xf336,	// (0x00046359) list_double2_large_graphic_pane_g3_cp2

0xf33e,	// (0x00046361) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf33e,	// (0x00046361) list_double2_large_graphic_pane_t1_cp2

0xf354,	// (0x00046377) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf354,	// (0x00046377) list_double2_large_graphic_pane_t2_cp2

0x3807,	// (0x0003a82a) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3807,	// (0x0003a82a) list_double_large_graphic_pane_g1_cp2

0x381a,	// (0x0003a83d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x381a,	// (0x0003a83d) list_double_large_graphic_pane_g2_cp2

0x1db9,	// (0x00038ddc) list_double_large_graphic_pane_g3_cp2

0x382b,	// (0x0003a84e) list_double_large_graphic_pane_g4_cp

0x3833,	// (0x0003a856) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3833,	// (0x0003a856) list_double_large_graphic_pane_t1_cp2

0x384a,	// (0x0003a86d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x384a,	// (0x0003a86d) list_double_large_graphic_pane_t2_cp2

0xf3ba,	// (0x000463dd) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf3ba,	// (0x000463dd) list_double2_graphic_pane_g1_cp2

0xf3c8,	// (0x000463eb) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf3c8,	// (0x000463eb) list_double2_graphic_pane_g2_cp2

0xf3d9,	// (0x000463fc) list_double2_graphic_pane_g3_cp2

0xf3e3,	// (0x00046406) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf3e3,	// (0x00046406) list_double2_graphic_pane_t1_cp2

0xf3f9,	// (0x0004641c) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf3f9,	// (0x0004641c) list_double2_graphic_pane_t2_cp2

0xf40b,	// (0x0004642e) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf40b,	// (0x0004642e) list_single_number_heading_pane_g1_cp2

0xf417,	// (0x0004643a) list_single_number_heading_pane_g2_cp2

0xf41f,	// (0x00046442) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf41f,	// (0x00046442) list_single_number_heading_pane_t1_cp2

0xf435,	// (0x00046458) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf435,	// (0x00046458) list_single_number_heading_pane_t2_cp2

0xf449,	// (0x0004646c) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf449,	// (0x0004646c) list_single_number_heading_pane_t3_cp2

0xf40b,	// (0x0004642e) list_single_heading_pane_g1_cp2_ParamLimits

0xf40b,	// (0x0004642e) list_single_heading_pane_g1_cp2

0xf417,	// (0x0004643a) list_single_heading_pane_g2_cp2

0xf41f,	// (0x00046442) list_single_heading_pane_t1_cp2_ParamLimits

0xf41f,	// (0x00046442) list_single_heading_pane_t1_cp2

0x3601,	// (0x0003a624) list_single_heading_pane_t2_cp2_ParamLimits

0x3601,	// (0x0003a624) list_single_heading_pane_t2_cp2

0x3549,	// (0x0003a56c) list_double_graphic_pane_g1_cp2_ParamLimits

0x3549,	// (0x0003a56c) list_double_graphic_pane_g1_cp2

0x3555,	// (0x0003a578) list_double_graphic_pane_g2_cp2_ParamLimits

0x3555,	// (0x0003a578) list_double_graphic_pane_g2_cp2

0x3564,	// (0x0003a587) list_double_graphic_pane_g3_cp2

0x356c,	// (0x0003a58f) list_double_graphic_pane_t1_cp2_ParamLimits

0x356c,	// (0x0003a58f) list_double_graphic_pane_t1_cp2

0x3582,	// (0x0003a5a5) list_double_graphic_pane_t2_cp2_ParamLimits

0x3582,	// (0x0003a5a5) list_double_graphic_pane_t2_cp2

0x1dad,	// (0x00038dd0) list_double_number_pane_g1_cp2_ParamLimits

0x1dad,	// (0x00038dd0) list_double_number_pane_g1_cp2

0x1db9,	// (0x00038ddc) list_double_number_pane_g2_cp2

0x350d,	// (0x0003a530) list_double_number_pane_t1_cp2_ParamLimits

0x350d,	// (0x0003a530) list_double_number_pane_t1_cp2

0x3521,	// (0x0003a544) list_double_number_pane_t2_cp2_ParamLimits

0x3521,	// (0x0003a544) list_double_number_pane_t2_cp2

0x3537,	// (0x0003a55a) list_double_number_pane_t3_cp2_ParamLimits

0x3537,	// (0x0003a55a) list_double_number_pane_t3_cp2

0x33f6,	// (0x0003a419) list_single_graphic_pane_g1_cp2_ParamLimits

0x33f6,	// (0x0003a419) list_single_graphic_pane_g1_cp2

0xd11a,	// (0x0004413d) list_single_graphic_pane_g2_cp2_ParamLimits

0xd11a,	// (0x0004413d) list_single_graphic_pane_g2_cp2

0x1e13,	// (0x00038e36) list_single_graphic_pane_g3_cp2

0x33cc,	// (0x0003a3ef) list_single_graphic_pane_t1_cp2_ParamLimits

0x33cc,	// (0x0003a3ef) list_single_graphic_pane_t1_cp2

0xd11a,	// (0x0004413d) list_single_number_pane_g1_cp2_ParamLimits

0xd11a,	// (0x0004413d) list_single_number_pane_g1_cp2

0x1e13,	// (0x00038e36) list_single_number_pane_g2_cp2

0x33cc,	// (0x0003a3ef) list_single_number_pane_t1_cp2_ParamLimits

0x33cc,	// (0x0003a3ef) list_single_number_pane_t1_cp2

0x33e2,	// (0x0003a405) list_single_number_pane_t2_cp2_ParamLimits

0x33e2,	// (0x0003a405) list_single_number_pane_t2_cp2

0xf325,	// (0x00046348) list_double2_pane_g1_cp2_ParamLimits

0xf325,	// (0x00046348) list_double2_pane_g1_cp2

0xf336,	// (0x00046359) list_double2_pane_g2_cp2

0x1d85,	// (0x00038da8) list_double2_pane_t1_cp2_ParamLimits

0x1d85,	// (0x00038da8) list_double2_pane_t1_cp2

0x1d9b,	// (0x00038dbe) list_double2_pane_t2_cp2_ParamLimits

0x1d9b,	// (0x00038dbe) list_double2_pane_t2_cp2

0x1dad,	// (0x00038dd0) list_double_pane_g1_cp2_ParamLimits

0x1dad,	// (0x00038dd0) list_double_pane_g1_cp2

0x1db9,	// (0x00038ddc) list_double_pane_g2_cp2

0x1dc1,	// (0x00038de4) list_double_pane_t1_cp2_ParamLimits

0x1dc1,	// (0x00038de4) list_double_pane_t1_cp2

0x1dd7,	// (0x00038dfa) list_double_pane_t2_cp2_ParamLimits

0x1dd7,	// (0x00038dfa) list_double_pane_t2_cp2

0x1e03,	// (0x00038e26) list_single_pane_cp2_g3

0xd11a,	// (0x0004413d) list_single_pane_g1_cp2_ParamLimits

0xd11a,	// (0x0004413d) list_single_pane_g1_cp2

0x1e13,	// (0x00038e36) list_single_pane_g2_cp2

0x1e1b,	// (0x00038e3e) list_single_pane_t1_cp2_ParamLimits

0x1e1b,	// (0x00038e3e) list_single_pane_t1_cp2

0x1e33,	// (0x00038e56) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1e33,	// (0x00038e56) list_single_large_graphic_pane_g1_cp2

0x1e41,	// (0x00038e64) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1e41,	// (0x00038e64) list_single_large_graphic_pane_g2_cp2

0x1e4d,	// (0x00038e70) list_single_large_graphic_pane_g3_cp2

0x1e55,	// (0x00038e78) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1e55,	// (0x00038e78) list_single_large_graphic_pane_g4_cp1

0x1e6f,	// (0x00038e92) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1e6f,	// (0x00038e92) list_single_large_graphic_pane_t1_cp2

0x3396,	// (0x0003a3b9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x3396,	// (0x0003a3b9) list_single_graphic_heading_pane_g1_cp2

0x3363,	// (0x0003a386) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x3363,	// (0x0003a386) list_single_graphic_heading_pane_g4_cp2

0x1e13,	// (0x00038e36) list_single_graphic_heading_pane_g5_cp2

0x33a2,	// (0x0003a3c5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x33a2,	// (0x0003a3c5) list_single_graphic_heading_pane_t1_cp2

0x33b8,	// (0x0003a3db) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x33b8,	// (0x0003a3db) list_single_graphic_heading_pane_t2_cp2

0x3357,	// (0x0003a37a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x3357,	// (0x0003a37a) list_single_2graphic_pane_g1_cp2

0x3363,	// (0x0003a386) list_single_2graphic_pane_g2_cp2_ParamLimits

0x3363,	// (0x0003a386) list_single_2graphic_pane_g2_cp2

0x1e13,	// (0x00038e36) list_single_2graphic_pane_g3_cp2

0x3374,	// (0x0003a397) list_single_2graphic_pane_g4_cp2_ParamLimits

0x3374,	// (0x0003a397) list_single_2graphic_pane_g4_cp2

0x3380,	// (0x0003a3a3) list_single_2graphic_pane_t1_cp2_ParamLimits

0x3380,	// (0x0003a3a3) list_single_2graphic_pane_t1_cp2

0x85b5,	// (0x0003f5d8) list_highlight_pane_g10_cp1

0x2f2f,	// (0x00039f52) list_highlight_pane_g1_cp1

0x2f37,	// (0x00039f5a) list_highlight_pane_g2_cp1

0x2f3f,	// (0x00039f62) list_highlight_pane_g3_cp1

0x2f47,	// (0x00039f6a) list_highlight_pane_g4_cp1

0x2f4f,	// (0x00039f72) list_highlight_pane_g5_cp1

0x2f57,	// (0x00039f7a) list_highlight_pane_g6_cp1

0x2f5f,	// (0x00039f82) list_highlight_pane_g7_cp1

0x2f67,	// (0x00039f8a) list_highlight_pane_g8_cp1

0x2f6f,	// (0x00039f92) list_highlight_pane_g9_cp1

0xc1f5,	// (0x00043218) form_field_slider_pane_t3

0xc203,	// (0x00043226) form_field_slider_pane_t4

0x2e6b,	// (0x00039e8e) slider_form_pane_ParamLimits

0x2e6b,	// (0x00039e8e) slider_form_pane

0x85bf,	// (0x0003f5e2) control_abbreviations

0x85bf,	// (0x0003f5e2) control_conventions

0x85bf,	// (0x0003f5e2) control_definitions

0x85bf,	// (0x0003f5e2) format_table_attribute

0x3657,	// (0x0003a67a) bg_popup_preview_window_pane_g9

0x85bf,	// (0x0003f5e2) format_table_data2

0x85bf,	// (0x0003f5e2) format_table_data3

0x85bf,	// (0x0003f5e2) format_table_data_example

0x0008,

0x85bf,	// (0x0003f5e2) intro_purpose

0xf8ea,	// (0x0004690d) bg_popup_preview_window_pane_g

0x85bf,	// (0x0003f5e2) texts_category

0x85bf,	// (0x0003f5e2) texts_graphics

0x1e85,	// (0x00038ea8) text_digital

0x1e94,	// (0x00038eb7) text_primary

0x1ea3,	// (0x00038ec6) text_primary_small

0x1eb2,	// (0x00038ed5) text_secondary

0x1ec1,	// (0x00038ee4) text_title

0x3dd9,	// (0x0003adfc) bg_passive_tab_pane_g1_cp3_srt

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp3_srt

0x3de2,	// (0x0003ae05) bg_passive_tab_pane_g3_cp3_srt

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp3_srt_ParamLimits

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp3_srt

0x3deb,	// (0x0003ae0e) tabs_4_active_pane_srt_g1

0xc51b,	// (0x0004353e) tabs_4_active_pane_srt_t1_ParamLimits

0xc51b,	// (0x0004353e) tabs_4_active_pane_srt_t1

0x3dd9,	// (0x0003adfc) bg_active_tab_pane_g1_cp3_copy1

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp3_copy1

0x3de2,	// (0x0003ae05) bg_active_tab_pane_g3_cp3_copy1

0x860d,	// (0x0003f630) tabs_2_long_active_pane_srt_ParamLimits

0x860d,	// (0x0003f630) tabs_2_long_active_pane_srt

0x860d,	// (0x0003f630) tabs_2_long_passive_pane_srt_ParamLimits

0x860d,	// (0x0003f630) tabs_2_long_passive_pane_srt

0x21ff,	// (0x00039222) bg_passive_tab_pane_cp4_srt_ParamLimits

0x21ff,	// (0x00039222) bg_passive_tab_pane_cp4_srt

0x3a86,	// (0x0003aaa9) bg_passive_tab_pane_g1_cp4_srt

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp4_srt

0x3a8f,	// (0x0003aab2) bg_passive_tab_pane_g3_cp4_srt

0x860d,	// (0x0003f630) bg_active_tab_pane_cp4_srt_ParamLimits

0x860d,	// (0x0003f630) bg_active_tab_pane_cp4_srt

0xc3d5,	// (0x000433f8) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc3d5,	// (0x000433f8) tabs_2_long_active_pane_srt_t1

0x3a86,	// (0x0003aaa9) bg_active_tab_pane_g1_cp4_srt

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp4_srt

0x3a8f,	// (0x0003aab2) bg_active_tab_pane_g3_cp4_srt

0x8649,	// (0x0003f66c) tabs_3_long_active_pane_srt_ParamLimits

0x8649,	// (0x0003f66c) tabs_3_long_active_pane_srt

0x8649,	// (0x0003f66c) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8649,	// (0x0003f66c) tabs_3_long_passive_pane_cp_srt

0x8649,	// (0x0003f66c) tabs_3_long_passive_pane_srt_ParamLimits

0x8649,	// (0x0003f66c) tabs_3_long_passive_pane_srt

0x21ff,	// (0x00039222) bg_passive_tab_pane_cp5_srt_ParamLimits

0x21ff,	// (0x00039222) bg_passive_tab_pane_cp5_srt

0xf2c2,	// (0x000462e5) bg_passive_tab_pane_g1_cp5_srt

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp5_srt

0xf2cb,	// (0x000462ee) bg_passive_tab_pane_g3_cp5_srt

0x860d,	// (0x0003f630) bg_active_tab_pane_cp5_srt_ParamLimits

0x860d,	// (0x0003f630) bg_active_tab_pane_cp5_srt

0xc3bf,	// (0x000433e2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc3bf,	// (0x000433e2) tabs_3_long_active_pane_srt_t1

0xf2c2,	// (0x000462e5) bg_active_tab_pane_g1_cp5_srt

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp5_srt

0xf2cb,	// (0x000462ee) bg_active_tab_pane_g3_cp5_srt

0x3a66,	// (0x0003aa89) navi_text_pane_srt_t1

0x3a5e,	// (0x0003aa81) navi_icon_pane_srt_g1

0x2099,	// (0x000390bc) midp_editing_number_pane_srt

0x1ed0,	// (0x00038ef3) midp_ticker_pane_srt

0x20a1,	// (0x000390c4) midp_ticker_pane_srt_g1

0x20a9,	// (0x000390cc) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00046795) midp_ticker_pane_srt_g

0x20b1,	// (0x000390d4) midp_ticker_pane_srt_t1

0x3a4f,	// (0x0003aa72) midp_editing_number_pane_t1_copy1

0x9ec4,	// (0x00040ee7) listscroll_midp_pane

0x9ec4,	// (0x00040ee7) midp_form_pane

0x1f47,	// (0x00038f6a) midp_info_popup_window_ParamLimits

0x1f47,	// (0x00038f6a) midp_info_popup_window

0xb9f0,	// (0x00042a13) bg_popup_sub_pane_cp50_ParamLimits

0xb9f0,	// (0x00042a13) bg_popup_sub_pane_cp50

0x2b59,	// (0x00039b7c) listscroll_midp_info_pane_ParamLimits

0x2b59,	// (0x00039b7c) listscroll_midp_info_pane

0x2b39,	// (0x00039b5c) listscroll_form_midp_pane_ParamLimits

0x2b39,	// (0x00039b5c) listscroll_form_midp_pane

0x2b45,	// (0x00039b68) scroll_bar_cp050

0x2b39,	// (0x00039b5c) list_midp_pane

0x4851,	// (0x0003b874) signal_pane_g2_cp

0x2a53,	// (0x00039a76) listscroll_midp_info_pane_t1_ParamLimits

0x2a53,	// (0x00039a76) listscroll_midp_info_pane_t1

0x2a6b,	// (0x00039a8e) listscroll_midp_info_pane_t2_ParamLimits

0x2a6b,	// (0x00039a8e) listscroll_midp_info_pane_t2

0x2aa9,	// (0x00039acc) listscroll_midp_info_pane_t3_ParamLimits

0x2aa9,	// (0x00039acc) listscroll_midp_info_pane_t3

0x2ae3,	// (0x00039b06) listscroll_midp_info_pane_t4_ParamLimits

0x2ae3,	// (0x00039b06) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00046848) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00046848) listscroll_midp_info_pane_t

0xba70,	// (0x00042a93) scroll_pane_cp21

0x29ed,	// (0x00039a10) form_midp_field_choice_group_pane

0x29f6,	// (0x00039a19) form_midp_field_text_pane

0x2a39,	// (0x00039a5c) form_midp_field_time_pane

0x2a41,	// (0x00039a64) form_midp_gauge_slider_pane

0x2a4a,	// (0x00039a6d) form_midp_gauge_wait_pane

0x85bf,	// (0x0003f5e2) form_midp_image_pane

0xa986,	// (0x000419a9) list_single_midp_pane_ParamLimits

0xa986,	// (0x000419a9) list_single_midp_pane

0xc1cd,	// (0x000431f0) form_midp_field_text_pane_t1

0x27a3,	// (0x000397c6) input_focus_pane_cp050

0x29dc,	// (0x000399ff) list_midp_form_text_pane

0x2980,	// (0x000399a3) form_midp_field_choice_group_pane_t1

0x298e,	// (0x000399b1) input_focus_pane_cp051

0x29a2,	// (0x000399c5) list_midp_choice_pane

0x85bf,	// (0x0003f5e2) status_idle_pane

0x2964,	// (0x00039987) form_midp_field_time_pane_t1

0x85b5,	// (0x0003f5d8) wait_anim_pane_g2_copy1

0x2972,	// (0x00039995) form_midp_field_time_pane_t2

0x0001,

0x1ff7,	// (0x0003901a) aid_navinavi_width_2_pane

0xf820,	// (0x00046843) form_midp_field_time_pane_t

0x85bf,	// (0x0003f5e2) input_focus_pane_cp052

0x85bf,	// (0x0003f5e2) bg_input_focus_pane_cp040

0x2924,	// (0x00039947) form_midp_gauge_slider_pane_t1

0x2932,	// (0x00039955) form_midp_gauge_slider_pane_t2

0xc1b1,	// (0x000431d4) form_midp_gauge_slider_pane_t3

0xc1bf,	// (0x000431e2) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x0004683a) form_midp_gauge_slider_pane_t

0x295c,	// (0x0003997f) form_midp_slider_pane

0x860d,	// (0x0003f630) bg_input_focus_pane_cp041_ParamLimits

0x860d,	// (0x0003f630) bg_input_focus_pane_cp041

0x28f1,	// (0x00039914) form_midp_gauge_wait_pane_t1_ParamLimits

0x28f1,	// (0x00039914) form_midp_gauge_wait_pane_t1

0x2903,	// (0x00039926) form_midp_gauge_wait_pane_t2_ParamLimits

0x2903,	// (0x00039926) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00046835) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00046835) form_midp_gauge_wait_pane_t

0x2915,	// (0x00039938) form_midp_wait_pane_ParamLimits

0x2915,	// (0x00039938) form_midp_wait_pane

0x28b9,	// (0x000398dc) form_midp_image_pane_g1

0x28c2,	// (0x000398e5) form_midp_image_pane_t1

0x28d1,	// (0x000398f4) form_midp_image_pane_t2

0x28e0,	// (0x00039903) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x0004682e) form_midp_image_pane_t

0x28b0,	// (0x000398d3) list_single_midp_pane_g1

0xd20c,	// (0x0004422f) list_single_midp_pane_t1

0xc19a,	// (0x000431bd) list_midp_form_item_pane_ParamLimits

0xc19a,	// (0x000431bd) list_midp_form_item_pane

0x1f9f,	// (0x00038fc2) list_midp_form_item_pane_t1

0x1fae,	// (0x00038fd1) midp_ticker_pane_g1

0x1fba,	// (0x00038fdd) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0004677b) midp_ticker_pane_g

0x9f68,	// (0x00040f8b) midp_ticker_pane_t1

0xc49c,	// (0x000434bf) midp_editing_number_pane_t1

0x3c9a,	// (0x0003acbd) midp_editing_number_pane

0x3ca9,	// (0x0003accc) midp_ticker_pane

0x3a3f,	// (0x0003aa62) ai_message_heading_pane

0x85bf,	// (0x0003f5e2) bg_popup_window_pane_cp14

0x3a47,	// (0x0003aa6a) listscroll_ai_message_pane

0x39c5,	// (0x0003a9e8) ai_message_heading_pane_g1_ParamLimits

0x39c5,	// (0x0003a9e8) ai_message_heading_pane_g1

0x39d1,	// (0x0003a9f4) ai_message_heading_pane_g2_ParamLimits

0x39d1,	// (0x0003a9f4) ai_message_heading_pane_g2

0x39df,	// (0x0003aa02) ai_message_heading_pane_g3_ParamLimits

0x39df,	// (0x0003aa02) ai_message_heading_pane_g3

0x39eb,	// (0x0003aa0e) ai_message_heading_pane_g4_ParamLimits

0x39eb,	// (0x0003aa0e) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x0004696f) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x0004696f) ai_message_heading_pane_g

0x39f7,	// (0x0003aa1a) ai_message_heading_pane_t1_ParamLimits

0x39f7,	// (0x0003aa1a) ai_message_heading_pane_t1

0x3a11,	// (0x0003aa34) ai_message_heading_pane_t2_ParamLimits

0x3a11,	// (0x0003aa34) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00046978) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00046978) ai_message_heading_pane_t

0x3a25,	// (0x0003aa48) bg_popup_heading_pane_cp1_ParamLimits

0x3a25,	// (0x0003aa48) bg_popup_heading_pane_cp1

0x39b3,	// (0x0003a9d6) list_ai_message_pane_ParamLimits

0x39b3,	// (0x0003a9d6) list_ai_message_pane

0xba70,	// (0x00042a93) scroll_pane_cp10

0x394f,	// (0x0003a972) list_ai_message_pane_g1

0x3957,	// (0x0003a97a) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x0004694c) list_ai_message_pane_g

0x395f,	// (0x0003a982) list_ai_message_pane_t1_ParamLimits

0x395f,	// (0x0003a982) list_ai_message_pane_t1

0x3974,	// (0x0003a997) list_ai_message_pane_t2_ParamLimits

0x3974,	// (0x0003a997) list_ai_message_pane_t2

0x3989,	// (0x0003a9ac) list_ai_message_pane_t3_ParamLimits

0x3989,	// (0x0003a9ac) list_ai_message_pane_t3

0x399e,	// (0x0003a9c1) list_ai_message_pane_t4_ParamLimits

0x399e,	// (0x0003a9c1) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00046951) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00046951) list_ai_message_pane_t

0xc3a5,	// (0x000433c8) cell_ai_soft_ind_pane_ParamLimits

0xc3a5,	// (0x000433c8) cell_ai_soft_ind_pane

0x1fd8,	// (0x00038ffb) cell_ai_soft_ind_pane_g1_ParamLimits

0x1fd8,	// (0x00038ffb) cell_ai_soft_ind_pane_g1

0x85bf,	// (0x0003f5e2) grid_highlight_cp1

0x1fe5,	// (0x00039008) text_secondary_cp56_ParamLimits

0x1fe5,	// (0x00039008) text_secondary_cp56

0x390d,	// (0x0003a930) example_general_pane_ParamLimits

0x390d,	// (0x0003a930) example_general_pane

0x3919,	// (0x0003a93c) example_parent_pane_g1_ParamLimits

0x3919,	// (0x0003a93c) example_parent_pane_g1

0x3925,	// (0x0003a948) example_parent_pane_t1_ParamLimits

0x3925,	// (0x0003a948) example_parent_pane_t1

0xa5d4,	// (0x000415f7) popup_preview_text_window_ParamLimits

0xa5d4,	// (0x000415f7) popup_preview_text_window

0x1e0b,	// (0x00038e2e) list_single_pane_cp2_g4

0xb50a,	// (0x0004252d) bg_popup_preview_window_pane_ParamLimits

0xb50a,	// (0x0004252d) bg_popup_preview_window_pane

0x3661,	// (0x0003a684) popup_preview_text_window_t1_ParamLimits

0x3661,	// (0x0003a684) popup_preview_text_window_t1

0x367f,	// (0x0003a6a2) popup_preview_text_window_t2_ParamLimits

0x367f,	// (0x0003a6a2) popup_preview_text_window_t2

0x36c8,	// (0x0003a6eb) popup_preview_text_window_t3_ParamLimits

0x36c8,	// (0x0003a6eb) popup_preview_text_window_t3

0x370d,	// (0x0003a730) popup_preview_text_window_t4_ParamLimits

0x370d,	// (0x0003a730) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00046920) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00046920) popup_preview_text_window_t

0x378b,	// (0x0003a7ae) scroll_pane_cp11

0x272f,	// (0x00039752) bg_popup_preview_window_pane_g1

0x3615,	// (0x0003a638) bg_popup_preview_window_pane_g2

0x361f,	// (0x0003a642) bg_popup_preview_window_pane_g3

0x3629,	// (0x0003a64c) bg_popup_preview_window_pane_g4

0x3633,	// (0x0003a656) bg_popup_preview_window_pane_g5

0x363d,	// (0x0003a660) bg_popup_preview_window_pane_g6

0x3645,	// (0x0003a668) bg_popup_preview_window_pane_g7

0x364d,	// (0x0003a670) bg_popup_preview_window_pane_g8

0xe7f8,	// (0x0004581b) aid_popup_width_pane

0xa544,	// (0x00041567) popup_midp_note_alarm_window_ParamLimits

0xa544,	// (0x00041567) popup_midp_note_alarm_window

0xb93b,	// (0x0004295e) data_form_pane_ParamLimits

0x9a6f,	// (0x00040a92) form_field_data_pane_g1

0x9a79,	// (0x00040a9c) form_field_data_pane_t1_ParamLimits

0xb947,	// (0x0004296a) input_focus_pane_ParamLimits

0xcff1,	// (0x00044014) data_form_wide_pane_ParamLimits

0xd002,	// (0x00044025) form_field_data_wide_pane_g1

0xd00e,	// (0x00044031) form_field_data_wide_pane_t1_ParamLimits

0xb6c2,	// (0x000426e5) input_focus_pane_cp6_ParamLimits

0x9ba7,	// (0x00040bca) input_popup_find_pane_g1_ParamLimits

0x9ba7,	// (0x00040bca) input_popup_find_pane_g1

0xedcc,	// (0x00045def) aid_navi_side_left_pane

0xede1,	// (0x00045e04) aid_navi_side_right_pane

0x302a,	// (0x0003a04d) bg_popup_window_pane_cp30_ParamLimits

0x302a,	// (0x0003a04d) bg_popup_window_pane_cp30

0x30a4,	// (0x0003a0c7) popup_midp_note_alarm_window_g1_ParamLimits

0x30a4,	// (0x0003a0c7) popup_midp_note_alarm_window_g1

0x30d4,	// (0x0003a0f7) popup_midp_note_alarm_window_t1_ParamLimits

0x30d4,	// (0x0003a0f7) popup_midp_note_alarm_window_t1

0x3175,	// (0x0003a198) popup_midp_note_alarm_window_t2_ParamLimits

0x3175,	// (0x0003a198) popup_midp_note_alarm_window_t2

0x3223,	// (0x0003a246) popup_midp_note_alarm_window_t3_ParamLimits

0x3223,	// (0x0003a246) popup_midp_note_alarm_window_t3

0x3255,	// (0x0003a278) popup_midp_note_alarm_window_t4_ParamLimits

0x3255,	// (0x0003a278) popup_midp_note_alarm_window_t4

0x327b,	// (0x0003a29e) popup_midp_note_alarm_window_t5_ParamLimits

0x327b,	// (0x0003a29e) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x000468bd) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x000468bd) popup_midp_note_alarm_window_t

0x3327,	// (0x0003a34a) wait_bar_pane_cp1_ParamLimits

0x3327,	// (0x0003a34a) wait_bar_pane_cp1

0x85bf,	// (0x0003f5e2) wait_anim_pane_copy1

0x85bf,	// (0x0003f5e2) wait_border_pane_copy1

0x2d0f,	// (0x00039d32) wait_border_pane_g1_copy1

0xd028,	// (0x0004404b) form_field_popup_pane_g1

0x9a93,	// (0x00040ab6) form_field_popup_pane_t1_ParamLimits

0xb947,	// (0x0004296a) input_focus_pane_cp7_ParamLimits

0xb975,	// (0x00042998) list_form_pane_ParamLimits

0xd030,	// (0x00044053) form_field_popup_wide_pane_g1

0xd038,	// (0x0004405b) form_field_popup_wide_pane_t1_ParamLimits

0xb947,	// (0x0004296a) input_focus_pane_cp8_ParamLimits

0xb981,	// (0x000429a4) list_form_wide_pane_ParamLimits

0xc57a,	// (0x0004359d) aid_size_cell_graphic_pane

0x9b12,	// (0x00040b35) data_form_pane_t1_ParamLimits

0xab1c,	// (0x00041b3f) data_form_wide_pane_t1_ParamLimits

0xbe35,	// (0x00042e58) bg_status_flat_pane

0x929b,	// (0x000402be) title_pane_t1_ParamLimits

0x85d5,	// (0x0003f5f8) title_pane_t2_ParamLimits

0x85fb,	// (0x0003f61e) title_pane_t3_ParamLimits

0xf557,	// (0x0004657a) title_pane_t_ParamLimits

0x9cd2,	// (0x00040cf5) level_1_signal_ParamLimits

0x9ce4,	// (0x00040d07) level_2_signal_ParamLimits

0x9cf7,	// (0x00040d1a) level_3_signal_ParamLimits

0x9d0a,	// (0x00040d2d) level_4_signal_ParamLimits

0x9d1d,	// (0x00040d40) level_5_signal_ParamLimits

0x9d30,	// (0x00040d53) level_6_signal_ParamLimits

0x9d43,	// (0x00040d66) level_7_signal_ParamLimits

0x9cd2,	// (0x00040cf5) level_1_battery_ParamLimits

0x9ce4,	// (0x00040d07) level_2_battery_ParamLimits

0x9cf7,	// (0x00040d1a) level_3_battery_ParamLimits

0x9d0a,	// (0x00040d2d) level_4_battery_ParamLimits

0x9d1d,	// (0x00040d40) level_5_battery_ParamLimits

0x9d30,	// (0x00040d53) level_6_battery_ParamLimits

0x9d43,	// (0x00040d66) level_7_battery_ParamLimits

0x2f2f,	// (0x00039f52) bg_status_flat_pane_g1

0x2f37,	// (0x00039f5a) bg_status_flat_pane_g2

0x2f3f,	// (0x00039f62) bg_status_flat_pane_g3

0x2f47,	// (0x00039f6a) bg_status_flat_pane_g4

0x2f4f,	// (0x00039f72) bg_status_flat_pane_g5

0x2f57,	// (0x00039f7a) bg_status_flat_pane_g6

0x2f5f,	// (0x00039f82) bg_status_flat_pane_g7

0x932f,	// (0x00040352) tabs_3_active_pane_t1_ParamLimits

0x932f,	// (0x00040352) tabs_3_passive_pane_t1_ParamLimits

0x9349,	// (0x0004036c) tabs_4_active_pane_t1_ParamLimits

0x9349,	// (0x0004036c) tabs_4_1_passive_pane_t1_ParamLimits

0x9bbd,	// (0x00040be0) tabs_2_active_pane_t1_ParamLimits

0x9bbd,	// (0x00040be0) tabs_2_passive_pane_t1_ParamLimits

0x860d,	// (0x0003f630) bg_active_tab_pane_cp4_ParamLimits

0x9bcf,	// (0x00040bf2) tabs_2_long_active_pane_t1_ParamLimits

0x21ff,	// (0x00039222) bg_passive_tab_pane_cp4_ParamLimits

0x076b,	// (0x0003778e) list_single_midp_graphic_pane_t1_ParamLimits

0x860d,	// (0x0003f630) bg_active_tab_pane_cp5_ParamLimits

0x9be2,	// (0x00040c05) tabs_3_long_active_pane_t1_ParamLimits

0x21ff,	// (0x00039222) bg_passive_tab_pane_cp5_ParamLimits

0x076b,	// (0x0003778e) list_single_midp_graphic_pane_t1

0xbe35,	// (0x00042e58) bg_status_flat_pane_ParamLimits

0x23b3,	// (0x000393d6) indicator_pane_cp2_ParamLimits

0x23b3,	// (0x000393d6) indicator_pane_cp2

0xbfcb,	// (0x00042fee) navi_pane_srt_ParamLimits

0xbfcb,	// (0x00042fee) navi_pane_srt

0x251a,	// (0x0003953d) popup_clock_digital_analogue_window_cp1

0xb34d,	// (0x00042370) indicator_pane_t1

0x1ed0,	// (0x00038ef3) copy_highlight_pane

0x1ed0,	// (0x00038ef3) cursor_graphics_pane

0x1ed0,	// (0x00038ef3) graphic_within_text_pane

0x1ed0,	// (0x00038ef3) link_highlight_pane

0x374e,	// (0x0003a771) popup_preview_text_window_t5_ParamLimits

0x374e,	// (0x0003a771) popup_preview_text_window_t5

0x2001,	// (0x00039024) cursor_digital_pane

0x2001,	// (0x00039024) cursor_primary_pane

0x2012,	// (0x00039035) cursor_primary_small_pane

0x201a,	// (0x0003903d) cursor_secondary_pane

0x2022,	// (0x00039045) cursor_title_pane

0x2001,	// (0x00039024) link_highlight_digital_pane

0x2009,	// (0x0003902c) link_highlight_primary_pane

0x2012,	// (0x00039035) link_highlight_primary_small_pane

0x201a,	// (0x0003903d) link_highlight_secondary_pane

0x2022,	// (0x00039045) link_highlight_title_pane

0x2001,	// (0x00039024) copy_highlight_digital_pane

0x2001,	// (0x00039024) copy_highlight_primary_pane

0x2012,	// (0x00039035) copy_highlight_primary_small_pane

0x201a,	// (0x0003903d) copy_highlight_secondary_pane

0x2022,	// (0x00039045) copy_highlight_title_pane

0x201a,	// (0x0003903d) graphic_text_digital_pane

0x2fcd,	// (0x00039ff0) graphic_text_primary_pane

0x2fd6,	// (0x00039ff9) graphic_text_primary_small_pane

0x2012,	// (0x00039035) graphic_text_secondary_pane

0x2001,	// (0x00039024) graphic_text_title_pane

0x9f7a,	// (0x00040f9d) cursor_primary_pane_g1

0x2fbf,	// (0x00039fe2) cursor_text_primary_t1

0xc225,	// (0x00043248) cursor_primary_small_pane_g1

0x2fb1,	// (0x00039fd4) cursor_text_primary_small_t1

0xc21b,	// (0x0004323e) cursor_primary_small_pane_g1_copy1

0x2f99,	// (0x00039fbc) cursor_text_primary_small_t1_copy1

0x2f77,	// (0x00039f9a) cursor_text_title_t1

0xc211,	// (0x00043234) cursor_title_pane_g1

0x9f7a,	// (0x00040f9d) cursor_digital_pane_g1

0x2034,	// (0x00039057) cursor_text_digital_t1

0x2042,	// (0x00039065) link_highlight_primary_pane_g1

0x2f20,	// (0x00039f43) link_highlight_primary_pane_t1

0x2042,	// (0x00039065) link_highlight_primary_small_pane_g1

0x204a,	// (0x0003906d) link_highlight_primary_small_pane_t1

0x2059,	// (0x0003907c) link_highlight_secondary_pane_g1

0x2061,	// (0x00039084) link_highlight_secondary_pane_t1

0x2e94,	// (0x00039eb7) link_highlight_title_pane_g1

0x2e9c,	// (0x00039ebf) link_highlight_title_pane_t1

0x2e7d,	// (0x00039ea0) link_highlight_digital_pane_g1

0x2e85,	// (0x00039ea8) link_highlight_digital_pane_t1

0x2d45,	// (0x00039d68) copy_highlight_primary_pane_g1

0x2d5c,	// (0x00039d7f) copy_highlight_primary_pane_t1

0x2d45,	// (0x00039d68) copy_highlight_primary_small_pane_g1

0x2d4d,	// (0x00039d70) copy_highlight_primary_small_pane_t1

0x2070,	// (0x00039093) copy_highlight_secondary_pane_g1

0x2078,	// (0x0003909b) copy_highlight_secondary_pane_t1

0x2d2e,	// (0x00039d51) copy_highlight_title_pane_g1

0x2d36,	// (0x00039d59) copy_highlight_title_pane_t1

0x2d45,	// (0x00039d68) copy_highlight_digital_pane_g1

0x4049,	// (0x0003b06c) copy_highlight_digital_pane_t1

0x3f9d,	// (0x0003afc0) graphic_text_primary_pane_g1

0x402d,	// (0x0003b050) graphic_text_primary_pane_t1

0x403b,	// (0x0003b05e) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x000469ec) graphic_text_primary_pane_t

0x4009,	// (0x0003b02c) graphic_text_primary_small_pane_g1

0x4011,	// (0x0003b034) graphic_text_primary_small_pane_t1

0x401f,	// (0x0003b042) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x000469e7) graphic_text_primary_small_pane_t

0x3fe5,	// (0x0003b008) graphic_text_secondary_pane_g1

0x3fed,	// (0x0003b010) graphic_text_secondary_pane_t1

0x3ffb,	// (0x0003b01e) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x000469e2) graphic_text_secondary_pane_t

0x3fc1,	// (0x0003afe4) graphic_text_title_pane_g1

0x3fc9,	// (0x0003afec) graphic_text_title_pane_t1

0x3fd7,	// (0x0003affa) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x000469dd) graphic_text_title_pane_t

0x3f9d,	// (0x0003afc0) graphic_text_digital_pane_g1

0x3fa5,	// (0x0003afc8) graphic_text_digital_pane_t1

0x3fb3,	// (0x0003afd6) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x000469d8) graphic_text_digital_pane_t

0x860d,	// (0x0003f630) navi_icon_pane_srt_ParamLimits

0x860d,	// (0x0003f630) navi_icon_pane_srt

0x85bf,	// (0x0003f5e2) navi_midp_pane_srt

0x85bf,	// (0x0003f5e2) navi_navi_pane_srt

0x860d,	// (0x0003f630) navi_text_pane_srt_ParamLimits

0x860d,	// (0x0003f630) navi_text_pane_srt

0x3f68,	// (0x0003af8b) navi_navi_icon_text_pane_srt

0x3f70,	// (0x0003af93) navi_navi_pane_srt_g1_ParamLimits

0x3f70,	// (0x0003af93) navi_navi_pane_srt_g1

0x3f82,	// (0x0003afa5) navi_navi_pane_srt_g2_ParamLimits

0x3f82,	// (0x0003afa5) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x000469d3) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x000469d3) navi_navi_pane_srt_g

0x3f94,	// (0x0003afb7) navi_navi_tabs_pane_srt

0x3f68,	// (0x0003af8b) navi_navi_text_pane_srt

0x3f68,	// (0x0003af8b) navi_navi_volume_pane_srt

0x3f59,	// (0x0003af7c) navi_navi_text_pane_srt_t1

0x0bc3,	// (0x00037be6) navi_navi_volume_pane_srt_g1

0x0bcb,	// (0x00037bee) volume_small_pane_srt_ParamLimits

0x0bcb,	// (0x00037bee) volume_small_pane_srt

0xf496,	// (0x000464b9) volume_small_pane_srt_g1_ParamLimits

0xf496,	// (0x000464b9) volume_small_pane_srt_g1

0xf4a6,	// (0x000464c9) volume_small_pane_srt_g2_ParamLimits

0xf4a6,	// (0x000464c9) volume_small_pane_srt_g2

0xf4b7,	// (0x000464da) volume_small_pane_srt_g3_ParamLimits

0xf4b7,	// (0x000464da) volume_small_pane_srt_g3

0xf4c8,	// (0x000464eb) volume_small_pane_srt_g4_ParamLimits

0xf4c8,	// (0x000464eb) volume_small_pane_srt_g4

0xf4d9,	// (0x000464fc) volume_small_pane_srt_g5_ParamLimits

0xf4d9,	// (0x000464fc) volume_small_pane_srt_g5

0xf4ea,	// (0x0004650d) volume_small_pane_srt_g6_ParamLimits

0xf4ea,	// (0x0004650d) volume_small_pane_srt_g6

0xf4fb,	// (0x0004651e) volume_small_pane_srt_g7_ParamLimits

0xf4fb,	// (0x0004651e) volume_small_pane_srt_g7

0xf50c,	// (0x0004652f) volume_small_pane_srt_g8_ParamLimits

0xf50c,	// (0x0004652f) volume_small_pane_srt_g8

0xf51d,	// (0x00046540) volume_small_pane_srt_g9_ParamLimits

0xf51d,	// (0x00046540) volume_small_pane_srt_g9

0xf52e,	// (0x00046551) volume_small_pane_srt_g10_ParamLimits

0xf52e,	// (0x00046551) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00046780) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00046780) volume_small_pane_srt_g

0xb5bf,	// (0x000425e2) query_popup_data_pane_cp2

0x3f3f,	// (0x0003af62) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3f3f,	// (0x0003af62) navi_navi_icon_text_pane_srt_t1

0x2fcd,	// (0x00039ff0) navi_tabs_2_long_pane_srt

0x2fcd,	// (0x00039ff0) navi_tabs_2_pane_srt

0x2fcd,	// (0x00039ff0) navi_tabs_3_long_pane_srt

0x2fcd,	// (0x00039ff0) navi_tabs_3_pane_srt

0x2fcd,	// (0x00039ff0) navi_tabs_4_pane_srt

0x0ba3,	// (0x00037bc6) tabs_2_active_pane_srt_ParamLimits

0x0ba3,	// (0x00037bc6) tabs_2_active_pane_srt

0x0bb3,	// (0x00037bd6) tabs_2_passive_pane_srt_ParamLimits

0x0bb3,	// (0x00037bd6) tabs_2_passive_pane_srt

0x27a3,	// (0x000397c6) bg_passive_tab_pane_cp1_srt_ParamLimits

0x27a3,	// (0x000397c6) bg_passive_tab_pane_cp1_srt

0x3f0b,	// (0x0003af2e) bg_passive_tab_pane_g1_cp1_srt

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp1_srt

0x3f14,	// (0x0003af37) bg_passive_tab_pane_g3_cp1_srt

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp1_srt_ParamLimits

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp1_srt

0x3f1d,	// (0x0003af40) tabs_2_active_pane_srt_g1

0xc5bc,	// (0x000435df) tabs_2_active_pane_srt_t1_ParamLimits

0xc5bc,	// (0x000435df) tabs_2_active_pane_srt_t1

0x3f0b,	// (0x0003af2e) bg_active_tab_pane_g1_cp1_srt

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp1_srt

0x3f14,	// (0x0003af37) bg_active_tab_pane_g3_cp1_srt

0x0b70,	// (0x00037b93) tabs_3_active_pane_srt_ParamLimits

0x0b70,	// (0x00037b93) tabs_3_active_pane_srt

0x0b81,	// (0x00037ba4) tabs_3_passive_pane_cp_srt_ParamLimits

0x0b81,	// (0x00037ba4) tabs_3_passive_pane_cp_srt

0x0b92,	// (0x00037bb5) tabs_3_passive_pane_srt_ParamLimits

0x0b92,	// (0x00037bb5) tabs_3_passive_pane_srt

0x27a3,	// (0x000397c6) bg_passive_tab_pane_cp2_srt_ParamLimits

0x27a3,	// (0x000397c6) bg_passive_tab_pane_cp2_srt

0x2087,	// (0x000390aa) bg_passive_tab_pane_g1_cp2_srt

0xf13a,	// (0x0004615d) bg_passive_tab_pane_g2_cp2_srt

0x2090,	// (0x000390b3) bg_passive_tab_pane_g3_cp2_srt

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp2_srt_ParamLimits

0x8649,	// (0x0003f66c) bg_active_tab_pane_cp2_srt

0x3ef1,	// (0x0003af14) tabs_3_active_pane_srt_g1

0xc5a6,	// (0x000435c9) tabs_3_active_pane_srt_t1_ParamLimits

0xc5a6,	// (0x000435c9) tabs_3_active_pane_srt_t1

0x2087,	// (0x000390aa) bg_active_tab_pane_g1_cp2_srt

0xf13a,	// (0x0004615d) bg_active_tab_pane_g2_cp2_srt

0x2090,	// (0x000390b3) bg_active_tab_pane_g3_cp2_srt

0x0b28,	// (0x00037b4b) tabs_4_active_pane_srt_ParamLimits

0x0b28,	// (0x00037b4b) tabs_4_active_pane_srt

0x0b3a,	// (0x00037b5d) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b3a,	// (0x00037b5d) tabs_4_passive_pane_cp2_srt

0x008c,	// (0x000370af) aid_size_cell_toolbar

0x3af9,	// (0x0003ab1c) main_idle_act_pane_ParamLimits

0x0275,	// (0x00037298) popup_large_graphic_colour_window_ParamLimits

0xa898,	// (0x000418bb) popup_toolbar_window_ParamLimits

0xa898,	// (0x000418bb) popup_toolbar_window

0xd231,	// (0x00044254) list_single_graphic_2heading_pane_ParamLimits

0xd231,	// (0x00044254) list_single_graphic_2heading_pane

0xbc48,	// (0x00042c6b) aid_size_cell_apps_grid_lsc_pane

0xbc5a,	// (0x00042c7d) aid_size_cell_apps_grid_prt_pane

0x21ff,	// (0x00039222) bg_wml_button_pane_cp1_ParamLimits

0x21ff,	// (0x00039222) bg_wml_button_pane_cp1

0xc1cd,	// (0x000431f0) form_midp_field_text_pane_t1_ParamLimits

0x27a3,	// (0x000397c6) input_focus_pane_cp050_ParamLimits

0x29dc,	// (0x000399ff) list_midp_form_text_pane_ParamLimits

0x298e,	// (0x000399b1) input_focus_pane_cp051_ParamLimits

0x29a2,	// (0x000399c5) list_midp_choice_pane_ParamLimits

0x285c,	// (0x0003987f) list_single_2graphic_pane_cp3_ParamLimits

0x285c,	// (0x0003987f) list_single_2graphic_pane_cp3

0x2872,	// (0x00039895) list_single_midp_graphic_pane_ParamLimits

0x2872,	// (0x00039895) list_single_midp_graphic_pane

0xea54,	// (0x00045a77) list_single_graphic_2heading_pane_g1_ParamLimits

0xea54,	// (0x00045a77) list_single_graphic_2heading_pane_g1

0xea60,	// (0x00045a83) list_single_graphic_2heading_pane_g4_ParamLimits

0xea60,	// (0x00045a83) list_single_graphic_2heading_pane_g4

0xea6c,	// (0x00045a8f) list_single_graphic_2heading_pane_g5_ParamLimits

0xea6c,	// (0x00045a8f) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x000467d3) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x000467d3) list_single_graphic_2heading_pane_g

0xea78,	// (0x00045a9b) list_single_graphic_2heading_pane_t1_ParamLimits

0xea78,	// (0x00045a9b) list_single_graphic_2heading_pane_t1

0xea8c,	// (0x00045aaf) list_single_graphic_2heading_pane_t2_ParamLimits

0xea8c,	// (0x00045aaf) list_single_graphic_2heading_pane_t2

0xeaa8,	// (0x00045acb) list_single_graphic_2heading_pane_t3_ParamLimits

0xeaa8,	// (0x00045acb) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x000467da) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x000467da) list_single_graphic_2heading_pane_t

0x266d,	// (0x00039690) bg_popup_sub_pane_cp2

0x2697,	// (0x000396ba) grid_toobar_pane

0x06db,	// (0x000376fe) cell_toolbar_pane_ParamLimits

0x06db,	// (0x000376fe) cell_toolbar_pane

0x26d3,	// (0x000396f6) cell_toolbar_pane_g1_ParamLimits

0x26d3,	// (0x000396f6) cell_toolbar_pane_g1

0x26e7,	// (0x0003970a) cell_toolbar_pane_g2_ParamLimits

0x26e7,	// (0x0003970a) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x000467e8) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x000467e8) cell_toolbar_pane_g

0x2709,	// (0x0003972c) grid_highlight_pane_cp2_ParamLimits

0x2709,	// (0x0003972c) grid_highlight_pane_cp2

0x2723,	// (0x00039746) toolbar_button_pane

0x272f,	// (0x00039752) toolbar_button_pane_g1

0x2737,	// (0x0003975a) toolbar_button_pane_g2

0x273f,	// (0x00039762) toolbar_button_pane_g3

0x2747,	// (0x0003976a) toolbar_button_pane_g4

0x274f,	// (0x00039772) toolbar_button_pane_g5

0x2757,	// (0x0003977a) toolbar_button_pane_g6

0x275f,	// (0x00039782) toolbar_button_pane_g7

0x2767,	// (0x0003978a) toolbar_button_pane_g8

0x276f,	// (0x00039792) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x000467ed) toolbar_button_pane_g

0x0713,	// (0x00037736) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0713,	// (0x00037736) list_single_2graphic_pane_g1_cp3

0xa914,	// (0x00041937) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa914,	// (0x00041937) list_single_2graphic_pane_g2_cp3

0x0730,	// (0x00037753) list_single_2graphic_pane_g3_cp3

0x0738,	// (0x0003775b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0738,	// (0x0003775b) list_single_2graphic_pane_g4_cp3

0x0744,	// (0x00037767) list_single_2graphic_pane_t1_cp3_ParamLimits

0x0744,	// (0x00037767) list_single_2graphic_pane_t1_cp3

0x075f,	// (0x00037782) list_single_midp_graphic_pane_g2_ParamLimits

0x075f,	// (0x00037782) list_single_midp_graphic_pane_g2

0x0094,	// (0x000370b7) aid_zoom_text_primary

0xea4c,	// (0x00045a6f) aid_zoom_text_secondary

0x9fd2,	// (0x00040ff5) status_small_pane_g7_ParamLimits

0x9fd2,	// (0x00040ff5) status_small_pane_g7

0x9ff5,	// (0x00041018) status_small_pane_t1_ParamLimits

0x926b,	// (0x0004028e) title_pane_g2

0x0003,

0xf54e,	// (0x00046571) title_pane_g

0x950b,	// (0x0004052e) aid_size_cell_colour_1_pane_ParamLimits

0x950b,	// (0x0004052e) aid_size_cell_colour_1_pane

0x951f,	// (0x00040542) aid_size_cell_colour_2_pane_ParamLimits

0x951f,	// (0x00040542) aid_size_cell_colour_2_pane

0x9533,	// (0x00040556) aid_size_cell_colour_3_pane_ParamLimits

0x9533,	// (0x00040556) aid_size_cell_colour_3_pane

0x9547,	// (0x0004056a) aid_size_cell_colour_4_pane_ParamLimits

0x9547,	// (0x0004056a) aid_size_cell_colour_4_pane

0xed08,	// (0x00045d2b) title_pane_stacon_g1_ParamLimits

0xed08,	// (0x00045d2b) title_pane_stacon_g1

0x2db3,	// (0x00039dd6) popup_note_wait_window_g3_ParamLimits

0x2db3,	// (0x00039dd6) popup_note_wait_window_g3

0x2e2a,	// (0x00039e4d) popup_note_wait_window_t5_ParamLimits

0x2e2a,	// (0x00039e4d) popup_note_wait_window_t5

0x85bf,	// (0x0003f5e2) main_feb_china_hwr_fs_writing_pane

0xa231,	// (0x00041254) popup_feb_china_hwr_fs_window_ParamLimits

0xa231,	// (0x00041254) popup_feb_china_hwr_fs_window

0xa925,	// (0x00041948) aid_size_cell_hwr_fs_ParamLimits

0xa925,	// (0x00041948) aid_size_cell_hwr_fs

0x27a3,	// (0x000397c6) bg_popup_sub_pane_cp3_ParamLimits

0x27a3,	// (0x000397c6) bg_popup_sub_pane_cp3

0xa93a,	// (0x0004195d) grid_hwr_fs_pane_ParamLimits

0xa93a,	// (0x0004195d) grid_hwr_fs_pane

0x07ae,	// (0x000377d1) linegrid_hwr_fs_pane_ParamLimits

0x07ae,	// (0x000377d1) linegrid_hwr_fs_pane

0xa952,	// (0x00041975) cell_hwr_fs_pane_ParamLimits

0xa952,	// (0x00041975) cell_hwr_fs_pane

0x27af,	// (0x000397d2) linegrid_hwr_fs_pane_g1_ParamLimits

0x27af,	// (0x000397d2) linegrid_hwr_fs_pane_g1

0xc16e,	// (0x00043191) linegrid_hwr_fs_pane_g2_ParamLimits

0xc16e,	// (0x00043191) linegrid_hwr_fs_pane_g2

0x27cd,	// (0x000397f0) linegrid_hwr_fs_pane_g3_ParamLimits

0x27cd,	// (0x000397f0) linegrid_hwr_fs_pane_g3

0x07e2,	// (0x00037805) linegrid_hwr_fs_pane_g4_ParamLimits

0x07e2,	// (0x00037805) linegrid_hwr_fs_pane_g4

0x0800,	// (0x00037823) linegrid_hwr_fs_pane_g5_ParamLimits

0x0800,	// (0x00037823) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00046813) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00046813) linegrid_hwr_fs_pane_g

0x27d9,	// (0x000397fc) cell_hwr_fs_pane_g1_ParamLimits

0x27d9,	// (0x000397fc) cell_hwr_fs_pane_g1

0x25a8,	// (0x000395cb) cell_hwr_fs_pane_g2_ParamLimits

0x25a8,	// (0x000395cb) cell_hwr_fs_pane_g2

0xc180,	// (0x000431a3) cell_hwr_fs_pane_g3_ParamLimits

0xc180,	// (0x000431a3) cell_hwr_fs_pane_g3

0xc18d,	// (0x000431b0) cell_hwr_fs_pane_g4_ParamLimits

0xc18d,	// (0x000431b0) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x0004681e) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0004681e) cell_hwr_fs_pane_g

0xa978,	// (0x0004199b) cell_hwr_fs_pane_t1

0x85bf,	// (0x0003f5e2) grid_highlight_pane_cp6

0x85bf,	// (0x0003f5e2) main_idle_act2_pane

0xba57,	// (0x00042a7a) aid_inside_area_popup_secondary

0xc245,	// (0x00043268) aid_inside_area_window_primary_ParamLimits

0xc245,	// (0x00043268) aid_inside_area_window_primary

0x4058,	// (0x0003b07b) ai2_news_ticker_pane

0x4060,	// (0x0003b083) aid_size_cell_ai1_link_ParamLimits

0x4060,	// (0x0003b083) aid_size_cell_ai1_link

0x407a,	// (0x0003b09d) popup_ai2_data_window_ParamLimits

0x407a,	// (0x0003b09d) popup_ai2_data_window

0x4098,	// (0x0003b0bb) popup_ai2_link_window_ParamLimits

0x4098,	// (0x0003b0bb) popup_ai2_link_window

0x27a3,	// (0x000397c6) bg_popup_sub_pane_cp4_ParamLimits

0x27a3,	// (0x000397c6) bg_popup_sub_pane_cp4

0x40ae,	// (0x0003b0d1) grid_ai2_link_pane_ParamLimits

0x40ae,	// (0x0003b0d1) grid_ai2_link_pane

0x40c5,	// (0x0003b0e8) popup_ai2_link_window_g1_ParamLimits

0x40c5,	// (0x0003b0e8) popup_ai2_link_window_g1

0x40d1,	// (0x0003b0f4) popup_ai2_link_window_g2_ParamLimits

0x40d1,	// (0x0003b0f4) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x000469f1) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x000469f1) popup_ai2_link_window_g

0x40e2,	// (0x0003b105) ai2_mp_button_pane

0x40ea,	// (0x0003b10d) ai2_mp_volume_pane

0x298e,	// (0x000399b1) bg_popup_sub_pane_cp5_ParamLimits

0x298e,	// (0x000399b1) bg_popup_sub_pane_cp5

0x40f2,	// (0x0003b115) heading_ai2_gene_pane_ParamLimits

0x40f2,	// (0x0003b115) heading_ai2_gene_pane

0x40fe,	// (0x0003b121) list_ai2_gene_pane_ParamLimits

0x40fe,	// (0x0003b121) list_ai2_gene_pane

0x4146,	// (0x0003b169) cell_ai2_link_pane_ParamLimits

0x4146,	// (0x0003b169) cell_ai2_link_pane

0x415c,	// (0x0003b17f) cell_ai2_link_pane_g1

0x85bf,	// (0x0003f5e2) grid_highlight_pane_cp7

0x0be0,	// (0x00037c03) ai2_mp_volume_pane_g1

0x422f,	// (0x0003b252) ai2_mp_volume_pane_g2

0x41a4,	// (0x0003b1c7) list_ai2_gene_pane_t1

0x4237,	// (0x0003b25a) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00046a0a) ai2_mp_volume_pane_g

0x0be8,	// (0x00037c0b) volume_small_pane_cp3

0x423f,	// (0x0003b262) aid_size_cell_ai2_button

0x4247,	// (0x0003b26a) grid_ai2_button_pane

0x4250,	// (0x0003b273) cell_ai2_button_pane_ParamLimits

0x4250,	// (0x0003b273) cell_ai2_button_pane

0x85b5,	// (0x0003f5d8) cell_ai2_button_pane_g1

0x85bf,	// (0x0003f5e2) grid_highlight_pane_cp8

0x41ef,	// (0x0003b212) ai2_gene_pane_t1_ParamLimits

0x41ef,	// (0x0003b212) ai2_gene_pane_t1

0xa1c1,	// (0x000411e4) aid_height_parent_landscape

0xc3ec,	// (0x0004340f) aid_height_set_list

0x3af9,	// (0x0003ab1c) aid_size_parent

0xc57a,	// (0x0004359d) aid_size_cell_graphic_pane_ParamLimits

0x410e,	// (0x0003b131) popup_ai2_data_window_g1_ParamLimits

0x410e,	// (0x0003b131) popup_ai2_data_window_g1

0x411a,	// (0x0003b13d) ai2_news_ticker_pane_g1

0x4122,	// (0x0003b145) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x000469f6) ai2_news_ticker_pane_g

0x412a,	// (0x0003b14d) ai2_news_ticker_pane_t1

0x4138,	// (0x0003b15b) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x000469fb) ai2_news_ticker_pane_t

0x4165,	// (0x0003b188) heading_ai2_gene_pane_g1

0x416d,	// (0x0003b190) heading_ai2_gene_pane_t1_ParamLimits

0x416d,	// (0x0003b190) heading_ai2_gene_pane_t1

0x4182,	// (0x0003b1a5) list_highlight_pane_cp6

0x418a,	// (0x0003b1ad) ai2_gene_pane_ParamLimits

0x418a,	// (0x0003b1ad) ai2_gene_pane

0x41b2,	// (0x0003b1d5) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00046a00) list_ai2_gene_pane_t

0x41c0,	// (0x0003b1e3) list_highlight_pane_cp8_ParamLimits

0x41c0,	// (0x0003b1e3) list_highlight_pane_cp8

0x41d1,	// (0x0003b1f4) ai2_gene_pane_g1_ParamLimits

0x41d1,	// (0x0003b1f4) ai2_gene_pane_g1

0x41e3,	// (0x0003b206) ai2_gene_pane_g2_ParamLimits

0x41e3,	// (0x0003b206) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00046a05) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00046a05) ai2_gene_pane_g

0xb8dd,	// (0x00042900) scroll_pane_cp12

0xa17e,	// (0x000411a1) control_pane_t3_ParamLimits

0xa17e,	// (0x000411a1) control_pane_t3

0x9fe6,	// (0x00041009) status_small_pane_g8_ParamLimits

0x9fe6,	// (0x00041009) status_small_pane_g8

0xa2d3,	// (0x000412f6) popup_find_window_ParamLimits

0xa584,	// (0x000415a7) popup_note_image_window_ParamLimits

0xcf00,	// (0x00043f23) list_double2_graphic_pane_vc_g1_ParamLimits

0xcf00,	// (0x00043f23) list_double2_graphic_pane_vc_g1

0xd12e,	// (0x00044151) list_double2_graphic_pane_vc_g2_ParamLimits

0xd12e,	// (0x00044151) list_double2_graphic_pane_vc_g2

0xd13a,	// (0x0004415d) list_double2_graphic_pane_vc_g3_ParamLimits

0xd13a,	// (0x0004415d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x000467e1) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x000467e1) list_double2_graphic_pane_vc_g

0xd146,	// (0x00044169) list_double2_graphic_pane_vc_t1_ParamLimits

0xd146,	// (0x00044169) list_double2_graphic_pane_vc_t1

0xcec4,	// (0x00043ee7) list_single_heading_pane_vc_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_single_heading_pane_vc_g1

0xced0,	// (0x00043ef3) list_single_heading_pane_vc_g2_ParamLimits

0xced0,	// (0x00043ef3) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000465eb) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000465eb) list_single_heading_pane_vc_g

0xd15c,	// (0x0004417f) list_single_heading_pane_vc_t1_ParamLimits

0xd15c,	// (0x0004417f) list_single_heading_pane_vc_t1

0xd172,	// (0x00044195) list_single_heading_pane_vc_t2_ParamLimits

0xd172,	// (0x00044195) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00046802) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00046802) list_single_heading_pane_vc_t

0xd184,	// (0x000441a7) list_setting_number_pane_vc_g1_ParamLimits

0xd184,	// (0x000441a7) list_setting_number_pane_vc_g1

0xd190,	// (0x000441b3) list_setting_number_pane_vc_g2_ParamLimits

0xd190,	// (0x000441b3) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00046807) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00046807) list_setting_number_pane_vc_g

0xd19c,	// (0x000441bf) list_setting_number_pane_vc_t1_ParamLimits

0xd19c,	// (0x000441bf) list_setting_number_pane_vc_t1

0xd1b0,	// (0x000441d3) list_setting_number_pane_vc_t2_ParamLimits

0xd1b0,	// (0x000441d3) list_setting_number_pane_vc_t2

0xd1cc,	// (0x000441ef) list_setting_number_pane_vc_t3_ParamLimits

0xd1cc,	// (0x000441ef) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x0004680c) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x0004680c) list_setting_number_pane_vc_t

0xd1fa,	// (0x0004421d) set_value_pane_vc_ParamLimits

0xd1fa,	// (0x0004421d) set_value_pane_vc

0xd231,	// (0x00044254) list_double2_graphic_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_double2_graphic_pane_vc

0x3ce0,	// (0x0003ad03) list_double2_large_graphic_pane_vc_ParamLimits

0x3ce0,	// (0x0003ad03) list_double2_large_graphic_pane_vc

0xd231,	// (0x00044254) list_double2_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_double2_pane_vc

0xd231,	// (0x00044254) list_double_graphic_heading_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_double_graphic_heading_pane_vc

0xd231,	// (0x00044254) list_double_graphic_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_double_graphic_pane_vc

0xd231,	// (0x00044254) list_double_heading_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_double_heading_pane_vc

0x3cf4,	// (0x0003ad17) list_double_large_graphic_pane_vc_ParamLimits

0x3cf4,	// (0x0003ad17) list_double_large_graphic_pane_vc

0xd231,	// (0x00044254) list_double_number_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_double_number_pane_vc

0xd231,	// (0x00044254) list_double_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_double_pane_vc

0xd231,	// (0x00044254) list_double_time_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_double_time_pane_vc

0xd231,	// (0x00044254) list_setting_number_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_setting_number_pane_vc

0xd231,	// (0x00044254) list_setting_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_setting_pane_vc

0xd231,	// (0x00044254) list_single_graphic_heading_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_single_graphic_heading_pane_vc

0xd231,	// (0x00044254) list_single_heading_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_single_heading_pane_vc

0xd231,	// (0x00044254) list_single_number_heading_pane_vc_ParamLimits

0xd231,	// (0x00044254) list_single_number_heading_pane_vc

0xcf00,	// (0x00043f23) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xcf00,	// (0x00043f23) list_double_graphic_heading_pane_vc_g1

0xcec4,	// (0x00043ee7) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xcec4,	// (0x00043ee7) list_double_graphic_heading_pane_vc_g2

0xced0,	// (0x00043ef3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xced0,	// (0x00043ef3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ee,	// (0x00046a11) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00046a11) list_double_graphic_heading_pane_vc_g

0xd246,	// (0x00044269) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xd246,	// (0x00044269) list_double_graphic_heading_pane_vc_t1

0xd25c,	// (0x0004427f) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xd25c,	// (0x0004427f) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f5,	// (0x00046a18) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f5,	// (0x00046a18) list_double_graphic_heading_pane_vc_t

0xd184,	// (0x000441a7) list_setting_pane_vc_g1_ParamLimits

0xd184,	// (0x000441a7) list_setting_pane_vc_g1

0xd190,	// (0x000441b3) list_setting_pane_vc_g2_ParamLimits

0xd190,	// (0x000441b3) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00046807) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00046807) list_setting_pane_vc_g

0xd27a,	// (0x0004429d) list_setting_pane_vc_t1_ParamLimits

0xd27a,	// (0x0004429d) list_setting_pane_vc_t1

0xd296,	// (0x000442b9) list_setting_pane_vc_t2_ParamLimits

0xd296,	// (0x000442b9) list_setting_pane_vc_t2

0x0001,

0xfa38,	// (0x00046a5b) list_setting_pane_vc_t_ParamLimits

0xfa38,	// (0x00046a5b) list_setting_pane_vc_t

0xd1fa,	// (0x0004421d) set_value_pane_cp_vc_ParamLimits

0xd1fa,	// (0x0004421d) set_value_pane_cp_vc

0xcec4,	// (0x00043ee7) list_single_number_heading_pane_vc_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_single_number_heading_pane_vc_g1

0xced0,	// (0x00043ef3) list_single_number_heading_pane_vc_g2_ParamLimits

0xced0,	// (0x00043ef3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000465eb) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000465eb) list_single_number_heading_pane_vc_g

0xd2b2,	// (0x000442d5) list_single_number_heading_pane_vc_t1_ParamLimits

0xd2b2,	// (0x000442d5) list_single_number_heading_pane_vc_t1

0xcedc,	// (0x00043eff) list_single_number_heading_pane_vc_t2_ParamLimits

0xcedc,	// (0x00043eff) list_single_number_heading_pane_vc_t2

0xceee,	// (0x00043f11) list_single_number_heading_pane_vc_t3_ParamLimits

0xceee,	// (0x00043f11) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3d,	// (0x00046a60) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00046a60) list_single_number_heading_pane_vc_t

0xcf00,	// (0x00043f23) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xcf00,	// (0x00043f23) list_single_graphic_heading_pane_vc_g1

0xcec4,	// (0x00043ee7) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xcec4,	// (0x00043ee7) list_single_graphic_heading_pane_vc_g4

0xced0,	// (0x00043ef3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xced0,	// (0x00043ef3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9ee,	// (0x00046a11) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9ee,	// (0x00046a11) list_single_graphic_heading_pane_vc_g

0xd2b2,	// (0x000442d5) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xd2b2,	// (0x000442d5) list_single_graphic_heading_pane_vc_t1

0xd2c8,	// (0x000442eb) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xd2c8,	// (0x000442eb) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa44,	// (0x00046a67) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa44,	// (0x00046a67) list_single_graphic_heading_pane_vc_t

0xcec4,	// (0x00043ee7) list_double2_pane_vc_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_double2_pane_vc_g1

0xced0,	// (0x00043ef3) list_double2_pane_vc_g2_ParamLimits

0xced0,	// (0x00043ef3) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000465eb) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000465eb) list_double2_pane_vc_g

0xd21b,	// (0x0004423e) list_double2_pane_vc_t1_ParamLimits

0xd21b,	// (0x0004423e) list_double2_pane_vc_t1

0xcf0c,	// (0x00043f2f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xcf0c,	// (0x00043f2f) list_double2_large_graphic_pane_vc_g1

0xcf18,	// (0x00043f3b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xcf18,	// (0x00043f3b) list_double2_large_graphic_pane_vc_g2

0xcf24,	// (0x00043f47) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xcf24,	// (0x00043f47) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00046608) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00046608) list_double2_large_graphic_pane_vc_g

0xcf30,	// (0x00043f53) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xcf30,	// (0x00043f53) list_double2_large_graphic_pane_vc_t1

0xd2da,	// (0x000442fd) list_double_time_pane_vc_g1_ParamLimits

0xd2da,	// (0x000442fd) list_double_time_pane_vc_g1

0xd2e6,	// (0x00044309) list_double_time_pane_vc_g2_ParamLimits

0xd2e6,	// (0x00044309) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x00046a6c) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x00046a6c) list_double_time_pane_vc_g

0xd2f2,	// (0x00044315) list_double_time_pane_vc_t1_ParamLimits

0xd2f2,	// (0x00044315) list_double_time_pane_vc_t1

0xd31c,	// (0x0004433f) list_double_time_pane_vc_t2_ParamLimits

0xd31c,	// (0x0004433f) list_double_time_pane_vc_t2

0xd365,	// (0x00044388) list_double_time_pane_vc_t3_ParamLimits

0xd365,	// (0x00044388) list_double_time_pane_vc_t3

0xd377,	// (0x0004439a) list_double_time_pane_vc_t4_ParamLimits

0xd377,	// (0x0004439a) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x00046a71) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x00046a71) list_double_time_pane_vc_t

0xcec4,	// (0x00043ee7) list_double_pane_vc_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_double_pane_vc_g1

0xced0,	// (0x00043ef3) list_double_pane_vc_g2_ParamLimits

0xced0,	// (0x00043ef3) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000465eb) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000465eb) list_double_pane_vc_g

0xd38b,	// (0x000443ae) list_double_pane_vc_t1_ParamLimits

0xd38b,	// (0x000443ae) list_double_pane_vc_t1

0xd39f,	// (0x000443c2) list_double_pane_vc_t2_ParamLimits

0xd39f,	// (0x000443c2) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x00046a7a) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x00046a7a) list_double_pane_vc_t

0xcec4,	// (0x00043ee7) list_double_number_pane_vc_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_double_number_pane_vc_g1

0xced0,	// (0x00043ef3) list_double_number_pane_vc_g2_ParamLimits

0xced0,	// (0x00043ef3) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000465eb) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000465eb) list_double_number_pane_vc_g

0xd3b5,	// (0x000443d8) list_double_number_pane_vc_t1_ParamLimits

0xd3b5,	// (0x000443d8) list_double_number_pane_vc_t1

0xd3c7,	// (0x000443ea) list_double_number_pane_vc_t2_ParamLimits

0xd3c7,	// (0x000443ea) list_double_number_pane_vc_t2

0xd39f,	// (0x000443c2) list_double_number_pane_vc_t3_ParamLimits

0xd39f,	// (0x000443c2) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x00046a7f) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x00046a7f) list_double_number_pane_vc_t

0xd3db,	// (0x000443fe) list_double_large_graphic_pane_vc_g1_ParamLimits

0xd3db,	// (0x000443fe) list_double_large_graphic_pane_vc_g1

0xd3fd,	// (0x00044420) list_double_large_graphic_pane_vc_g2_ParamLimits

0xd3fd,	// (0x00044420) list_double_large_graphic_pane_vc_g2

0xd411,	// (0x00044434) list_double_large_graphic_pane_vc_g3_ParamLimits

0xd411,	// (0x00044434) list_double_large_graphic_pane_vc_g3

0xd420,	// (0x00044443) list_double_large_graphic_pane_vc_g4_ParamLimits

0xd420,	// (0x00044443) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x00046a86) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x00046a86) list_double_large_graphic_pane_vc_g

0xd42f,	// (0x00044452) list_double_large_graphic_pane_vc_t1_ParamLimits

0xd42f,	// (0x00044452) list_double_large_graphic_pane_vc_t1

0xd44b,	// (0x0004446e) list_double_large_graphic_pane_vc_t2_ParamLimits

0xd44b,	// (0x0004446e) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x00046a8f) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x00046a8f) list_double_large_graphic_pane_vc_t

0xcec4,	// (0x00043ee7) list_double_heading_pane_vc_g1_ParamLimits

0xcec4,	// (0x00043ee7) list_double_heading_pane_vc_g1

0xced0,	// (0x00043ef3) list_double_heading_pane_vc_g2_ParamLimits

0xced0,	// (0x00043ef3) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000465eb) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000465eb) list_double_heading_pane_vc_g

0xd46b,	// (0x0004448e) list_double_heading_pane_vc_t1_ParamLimits

0xd46b,	// (0x0004448e) list_double_heading_pane_vc_t1

0xd47d,	// (0x000444a0) list_double_heading_pane_vc_t2_ParamLimits

0xd47d,	// (0x000444a0) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00046a94) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00046a94) list_double_heading_pane_vc_t

0xd495,	// (0x000444b8) list_double_graphic_pane_vc_g1_ParamLimits

0xd495,	// (0x000444b8) list_double_graphic_pane_vc_g1

0xd4a8,	// (0x000444cb) list_double_graphic_pane_vc_g2_ParamLimits

0xd4a8,	// (0x000444cb) list_double_graphic_pane_vc_g2

0xcec4,	// (0x00043ee7) list_double_graphic_pane_vc_g3_ParamLimits

0xcec4,	// (0x00043ee7) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x00046a99) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x00046a99) list_double_graphic_pane_vc_g

0xd4c5,	// (0x000444e8) list_double_graphic_pane_vc_t1_ParamLimits

0xd4c5,	// (0x000444e8) list_double_graphic_pane_vc_t1

0xd4ef,	// (0x00044512) list_double_graphic_pane_vc_t2_ParamLimits

0xd4ef,	// (0x00044512) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00046aa2) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00046aa2) list_double_graphic_pane_vc_t

0xe804,	// (0x00045827) aid_size_cell_fastswap

0x9044,	// (0x00040067) aid_size_cell_touch_ParamLimits

0x9044,	// (0x00040067) aid_size_cell_touch

0xe98b,	// (0x000459ae) popup_fast_swap_wide_window_ParamLimits

0xe98b,	// (0x000459ae) popup_fast_swap_wide_window

0x9202,	// (0x00040225) touch_pane_ParamLimits

0x9202,	// (0x00040225) touch_pane

0xb933,	// (0x00042956) button_value_adjust_pane_cp2

0xcf99,	// (0x00043fbc) button_value_adjust_pane_cp4

0xcfa1,	// (0x00043fc4) form_field_data_pane_cp2

0x9a44,	// (0x00040a67) form_field_data_wide_pane_cp2

0xbc7f,	// (0x00042ca2) bg_scroll_pane_ParamLimits

0xee64,	// (0x00045e87) scroll_handle_pane_ParamLimits

0xee78,	// (0x00045e9b) scroll_sc2_down_pane_ParamLimits

0xee78,	// (0x00045e9b) scroll_sc2_down_pane

0xbcb0,	// (0x00042cd3) scroll_sc2_up_pane_ParamLimits

0xbcb0,	// (0x00042cd3) scroll_sc2_up_pane

0xc6ee,	// (0x00043711) grid_wheel_folder_pane_g1_ParamLimits

0xc6ee,	// (0x00043711) grid_wheel_folder_pane_g1

0xf23e,	// (0x00046261) clock_nsta_pane_cp2_ParamLimits

0xf23e,	// (0x00046261) clock_nsta_pane_cp2

0x9ec4,	// (0x00040ee7) listscroll_midp_pane_ParamLimits

0x9ed0,	// (0x00040ef3) midp_canvas_pane

0x21cf,	// (0x000391f2) nsta_clock_indic_pane

0x220b,	// (0x0003922e) listscroll_form_pane_vc

0x2213,	// (0x00039236) listscroll_set_pane_vc_ParamLimits

0x2213,	// (0x00039236) listscroll_set_pane_vc

0xbe5d,	// (0x00042e80) clock_nsta_pane

0xbe87,	// (0x00042eaa) indicator_nsta_pane

0x266d,	// (0x00039690) bg_popup_sub_pane_cp2_ParamLimits

0x2681,	// (0x000396a4) find_pane_cp2_ParamLimits

0x2681,	// (0x000396a4) find_pane_cp2

0x2697,	// (0x000396ba) grid_toobar_pane_ParamLimits

0x2777,	// (0x0003979a) list_form_gen_pane_vc_ParamLimits

0x2777,	// (0x0003979a) list_form_gen_pane_vc

0x278d,	// (0x000397b0) scroll_pane_cp8_vc_ParamLimits

0x278d,	// (0x000397b0) scroll_pane_cp8_vc

0x2809,	// (0x0003982c) data_form_wide_pane_vc_ParamLimits

0x2809,	// (0x0003982c) data_form_wide_pane_vc

0x2815,	// (0x00039838) form_field_data_wide_pane_vc_g1

0x281d,	// (0x00039840) form_field_data_wide_pane_vc_t1_ParamLimits

0x281d,	// (0x00039840) form_field_data_wide_pane_vc_t1

0xb947,	// (0x0004296a) input_focus_pane_cp6_vc_ParamLimits

0xb947,	// (0x0004296a) input_focus_pane_cp6_vc

0x2b39,	// (0x00039b5c) list_midp_pane_ParamLimits

0x3ee5,	// (0x0003af08) scroll_pane_cp16_ParamLimits

0x3ee5,	// (0x0003af08) scroll_pane_cp16

0x2b87,	// (0x00039baa) button_value_adjust_pane_ParamLimits

0x2b87,	// (0x00039baa) button_value_adjust_pane

0xc3fd,	// (0x00043420) button_value_adjust_pane_cp6_ParamLimits

0xc3fd,	// (0x00043420) button_value_adjust_pane_cp6

0xc477,	// (0x0004349a) settings_code_pane_cp_ParamLimits

0xc477,	// (0x0004349a) settings_code_pane_cp

0x85b5,	// (0x0003f5d8) cell_touch_pane_g1

0x85b5,	// (0x0003f5d8) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00046726) cell_touch_pane_g

0xc5d2,	// (0x000435f5) cell_touch_pane_cp_ParamLimits

0xc5d2,	// (0x000435f5) cell_touch_pane_cp

0xc5ee,	// (0x00043611) cell_touch_pane_ParamLimits

0xc5ee,	// (0x00043611) cell_touch_pane

0x85b5,	// (0x0003f5d8) scroll_sc2_down_pane_g1

0x85b5,	// (0x0003f5d8) scroll_sc2_up_pane_g1

0x85bf,	// (0x0003f5e2) bg_set_opt_pane_cp4_vc

0x4283,	// (0x0003b2a6) list_set_graphic_pane_vc_g1_ParamLimits

0x4283,	// (0x0003b2a6) list_set_graphic_pane_vc_g1

0x428f,	// (0x0003b2b2) list_set_graphic_pane_vc_g2_ParamLimits

0x428f,	// (0x0003b2b2) list_set_graphic_pane_vc_g2

0x0001,

0xf9fa,	// (0x00046a1d) list_set_graphic_pane_vc_g_ParamLimits

0xf9fa,	// (0x00046a1d) list_set_graphic_pane_vc_g

0x429b,	// (0x0003b2be) text_primary_small_cp13_vc_ParamLimits

0x429b,	// (0x0003b2be) text_primary_small_cp13_vc

0xf2d4,	// (0x000462f7) list_set_graphic_pane_vc_ParamLimits

0xf2d4,	// (0x000462f7) list_set_graphic_pane_vc

0x85bf,	// (0x0003f5e2) input_focus_pane_cp2_vc

0x85b5,	// (0x0003f5d8) setting_code_pane_vc_g1

0x8624,	// (0x0003f647) setting_code_pane_vc_t1

0x42b3,	// (0x0003b2d6) set_text_pane_vc_t1_ParamLimits

0x42b3,	// (0x0003b2d6) set_text_pane_vc_t1

0x85bf,	// (0x0003f5e2) input_focus_pane_cp1_vc

0x42d1,	// (0x0003b2f4) list_set_text_pane_vc

0x85b5,	// (0x0003f5d8) setting_text_pane_vc_g1

0x85bf,	// (0x0003f5e2) bg_set_opt_pane_cp2_vc

0x861b,	// (0x0003f63e) setting_slider_graphic_pane_vc_g1

0x42db,	// (0x0003b2fe) setting_slider_graphic_pane_vc_t1

0x42ed,	// (0x0003b310) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ff,	// (0x00046a22) setting_slider_graphic_pane_vc_t

0x42ff,	// (0x0003b322) slider_set_pane_cp_vc

0x4309,	// (0x0003b32c) slider_set_pane_vc_g1

0x4312,	// (0x0003b335) slider_set_pane_vc_g2

0x0006,

0xfa04,	// (0x00046a27) slider_set_pane_vc_g

0xb99f,	// (0x000429c2) set_opt_bg_pane_g1_copy1

0xb9a7,	// (0x000429ca) set_opt_bg_pane_g2_copy1

0x433e,	// (0x0003b361) set_opt_bg_pane_g3_copy1

0xb9b7,	// (0x000429da) set_opt_bg_pane_g4_copy1

0xb9bf,	// (0x000429e2) set_opt_bg_pane_g5_copy1

0xb9c7,	// (0x000429ea) set_opt_bg_pane_g6_copy1

0x4348,	// (0x0003b36b) set_opt_bg_pane_g7_copy1

0x4352,	// (0x0003b375) set_opt_bg_pane_g8_copy1

0x435c,	// (0x0003b37f) set_opt_bg_pane_g9_copy1

0x85bf,	// (0x0003f5e2) bg_set_opt_pane_cp_vc

0x4366,	// (0x0003b389) setting_slider_pane_vc_t1

0x4375,	// (0x0003b398) setting_slider_pane_vc_t2

0x4387,	// (0x0003b3aa) setting_slider_pane_vc_t3

0x0002,

0xfa13,	// (0x00046a36) setting_slider_pane_vc_t

0x4399,	// (0x0003b3bc) slider_set_pane_vc

0x0844,	// (0x00037867) volume_set_pane_vc_g1

0x084d,	// (0x00037870) volume_set_pane_vc_g2

0x0856,	// (0x00037879) volume_set_pane_vc_g3

0x085f,	// (0x00037882) volume_set_pane_vc_g4

0x0868,	// (0x0003788b) volume_set_pane_vc_g5

0x0871,	// (0x00037894) volume_set_pane_vc_g6

0x087a,	// (0x0003789d) volume_set_pane_vc_g7

0x0883,	// (0x000378a6) volume_set_pane_vc_g8

0x088c,	// (0x000378af) volume_set_pane_vc_g9

0x0895,	// (0x000378b8) volume_set_pane_vc_g10

0x0009,

0xfa1a,	// (0x00046a3d) volume_set_pane_vc_g

0x43a1,	// (0x0003b3c4) volume_set_pane_vc

0x43ab,	// (0x0003b3ce) button_value_adjust_pane_cp1_vc

0x43b5,	// (0x0003b3d8) list_highlight_pane_cp2_vc

0x43be,	// (0x0003b3e1) list_set_pane_vc_ParamLimits

0x43be,	// (0x0003b3e1) list_set_pane_vc

0x442c,	// (0x0003b44f) main_pane_set_vc_t1_ParamLimits

0x442c,	// (0x0003b44f) main_pane_set_vc_t1

0x4441,	// (0x0003b464) main_pane_set_vc_t2_ParamLimits

0x4441,	// (0x0003b464) main_pane_set_vc_t2

0x4453,	// (0x0003b476) main_pane_set_vc_t3_ParamLimits

0x4453,	// (0x0003b476) main_pane_set_vc_t3

0x4467,	// (0x0003b48a) main_pane_set_vc_t4_ParamLimits

0x4467,	// (0x0003b48a) main_pane_set_vc_t4

0x0003,

0xfa2f,	// (0x00046a52) main_pane_set_vc_t_ParamLimits

0xfa2f,	// (0x00046a52) main_pane_set_vc_t

0x447b,	// (0x0003b49e) setting_code_pane_vc_ParamLimits

0x447b,	// (0x0003b49e) setting_code_pane_vc

0x448c,	// (0x0003b4af) setting_slider_graphic_pane_vc

0x448c,	// (0x0003b4af) setting_slider_pane_vc

0x448c,	// (0x0003b4af) setting_text_pane_vc

0x448c,	// (0x0003b4af) setting_volume_pane_vc

0x4496,	// (0x0003b4b9) scroll_pane_cp121_vc

0xb921,	// (0x00042944) set_content_pane_vc

0x449e,	// (0x0003b4c1) button_value_adjust_pane_g1

0x44a7,	// (0x0003b4ca) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00046aa7) button_value_adjust_pane_g

0x44b0,	// (0x0003b4d3) form_field_slider_wide_pane_vc_t1_ParamLimits

0x44b0,	// (0x0003b4d3) form_field_slider_wide_pane_vc_t1

0x44c2,	// (0x0003b4e5) form_field_slider_wide_pane_vc_t2_ParamLimits

0x44c2,	// (0x0003b4e5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00046aac) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00046aac) form_field_slider_wide_pane_vc_t

0x8649,	// (0x0003f66c) input_focus_pane_cp10_vc_ParamLimits

0x8649,	// (0x0003f66c) input_focus_pane_cp10_vc

0x44ee,	// (0x0003b511) slider_cont_pane_cp1_vc_ParamLimits

0x44ee,	// (0x0003b511) slider_cont_pane_cp1_vc

0x4500,	// (0x0003b523) slider_form_pane_g1_cp2

0x4312,	// (0x0003b335) slider_form_pane_g2_cp2

0x452d,	// (0x0003b550) form_field_slider_pane_vc_t3

0x453b,	// (0x0003b55e) form_field_slider_pane_vc_t4

0x4549,	// (0x0003b56c) slider_form_pane_vc_ParamLimits

0x4549,	// (0x0003b56c) slider_form_pane_vc

0x4556,	// (0x0003b579) form_field_slider_pane_vc_t1_ParamLimits

0x4556,	// (0x0003b579) form_field_slider_pane_vc_t1

0x44c2,	// (0x0003b4e5) form_field_slider_pane_vc_t2_ParamLimits

0x44c2,	// (0x0003b4e5) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x00046abe) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x00046abe) form_field_slider_pane_vc_t

0x8649,	// (0x0003f66c) input_focus_pane_cp9_vc_ParamLimits

0x8649,	// (0x0003f66c) input_focus_pane_cp9_vc

0x456c,	// (0x0003b58f) slider_cont_pane_vc_ParamLimits

0x456c,	// (0x0003b58f) slider_cont_pane_vc

0x4580,	// (0x0003b5a3) list_form_graphic_pane_cp_vc_ParamLimits

0x4580,	// (0x0003b5a3) list_form_graphic_pane_cp_vc

0x2815,	// (0x00039838) form_field_popup_wide_pane_vc_g1

0x4595,	// (0x0003b5b8) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4595,	// (0x0003b5b8) form_field_popup_wide_pane_vc_t1

0xb947,	// (0x0004296a) input_focus_pane_cp8_vc_ParamLimits

0xb947,	// (0x0004296a) input_focus_pane_cp8_vc

0x45da,	// (0x0003b5fd) list_form_wide_pane_vc_ParamLimits

0x45da,	// (0x0003b5fd) list_form_wide_pane_vc

0x45e6,	// (0x0003b609) list_form_graphic_pane_vc_g1

0x45ee,	// (0x0003b611) list_form_graphic_pane_vc_t1_ParamLimits

0x45ee,	// (0x0003b611) list_form_graphic_pane_vc_t1

0x860d,	// (0x0003f630) list_highlight_pane_cp5_vc_ParamLimits

0x860d,	// (0x0003f630) list_highlight_pane_cp5_vc

0x460a,	// (0x0003b62d) list_form_graphic_pane_vc_ParamLimits

0x460a,	// (0x0003b62d) list_form_graphic_pane_vc

0x2815,	// (0x00039838) form_field_popup_pane_vc_g1

0x4620,	// (0x0003b643) form_field_popup_pane_vc_t1_ParamLimits

0x4620,	// (0x0003b643) form_field_popup_pane_vc_t1

0xb947,	// (0x0004296a) input_focus_pane_cp7_vc_ParamLimits

0xb947,	// (0x0004296a) input_focus_pane_cp7_vc

0x4637,	// (0x0003b65a) list_form_pane_vc_ParamLimits

0x4637,	// (0x0003b65a) list_form_pane_vc

0x4643,	// (0x0003b666) data_form_pane_vc_t1_ParamLimits

0x4643,	// (0x0003b666) data_form_pane_vc_t1

0xb99f,	// (0x000429c2) input_focus_pane_vc_g1

0xb9a7,	// (0x000429ca) input_focus_pane_vc_g2

0xb9af,	// (0x000429d2) input_focus_pane_vc_g3

0xb9b7,	// (0x000429da) input_focus_pane_vc_g4

0xb9bf,	// (0x000429e2) input_focus_pane_vc_g5

0xb9c7,	// (0x000429ea) input_focus_pane_vc_g6

0xb9cf,	// (0x000429f2) input_focus_pane_vc_g7

0xb9d7,	// (0x000429fa) input_focus_pane_vc_g8

0xb9df,	// (0x00042a02) input_focus_pane_vc_g9

0x85b5,	// (0x0003f5d8) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x000466af) input_focus_pane_vc_g

0x2809,	// (0x0003982c) data_form_pane_vc_ParamLimits

0x2809,	// (0x0003982c) data_form_pane_vc

0x2815,	// (0x00039838) form_field_data_pane_vc_g1

0x4660,	// (0x0003b683) form_field_data_pane_vc_t1_ParamLimits

0x4660,	// (0x0003b683) form_field_data_pane_vc_t1

0xb947,	// (0x0004296a) input_focus_pane_vc_ParamLimits

0xb947,	// (0x0004296a) input_focus_pane_vc

0x467a,	// (0x0003b69d) button_value_adjust_pane_cp3_vc

0x4682,	// (0x0003b6a5) button_value_adjust_pane_cp5_vc

0x468a,	// (0x0003b6ad) form_field_data_pane_vc_ParamLimits

0x468a,	// (0x0003b6ad) form_field_data_pane_vc

0x46a5,	// (0x0003b6c8) form_field_data_pane_vc_cp2

0x46ad,	// (0x0003b6d0) form_field_data_wide_pane_vc_ParamLimits

0x46ad,	// (0x0003b6d0) form_field_data_wide_pane_vc

0x46c7,	// (0x0003b6ea) form_field_data_wide_pane_vc_cp2

0x46cf,	// (0x0003b6f2) form_field_popup_pane_vc_ParamLimits

0x46cf,	// (0x0003b6f2) form_field_popup_pane_vc

0x46ea,	// (0x0003b70d) form_field_popup_wide_pane_vc_ParamLimits

0x46ea,	// (0x0003b70d) form_field_popup_wide_pane_vc

0x4704,	// (0x0003b727) form_field_slider_pane_vc_ParamLimits

0x4704,	// (0x0003b727) form_field_slider_pane_vc

0x4717,	// (0x0003b73a) form_field_slider_wide_pane_vc_ParamLimits

0x4717,	// (0x0003b73a) form_field_slider_wide_pane_vc

0xc60c,	// (0x0004362f) grid_touch_1_pane_ParamLimits

0xc60c,	// (0x0004362f) grid_touch_1_pane

0xc620,	// (0x00043643) grid_touch_2_pane_ParamLimits

0xc620,	// (0x00043643) grid_touch_2_pane

0x47e7,	// (0x0003b80a) touch_pane_g1_ParamLimits

0x47e7,	// (0x0003b80a) touch_pane_g1

0x4750,	// (0x0003b773) cell_app_pane_cp_wide_ParamLimits

0x4750,	// (0x0003b773) cell_app_pane_cp_wide

0x4761,	// (0x0003b784) grid_popup_fast_wide_pane_ParamLimits

0x4761,	// (0x0003b784) grid_popup_fast_wide_pane

0x4775,	// (0x0003b798) scroll_pane_cp19_ParamLimits

0x4775,	// (0x0003b798) scroll_pane_cp19

0x85bf,	// (0x0003f5e2) bg_popup_window_pane_cp20

0x4789,	// (0x0003b7ac) listscroll_popup_fast_wide_pane

0xd50d,	// (0x00044530) grid_indicator_nsta_pane

0x4791,	// (0x0003b7b4) clock_nsta_pane_g1

0x479a,	// (0x0003b7bd) clock_nsta_pane_t1

0xc64c,	// (0x0004366f) cell_indicator_nsta_pane_ParamLimits

0xc64c,	// (0x0004366f) cell_indicator_nsta_pane

0x47e7,	// (0x0003b80a) cell_indicator_nsta_pane_g1

0xc663,	// (0x00043686) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x00046acf) cell_indicator_nsta_pane_g

0x4802,	// (0x0003b825) clock_nsta_pane_cp

0x480b,	// (0x0003b82e) indicator_nsta_pane_cp

0x4813,	// (0x0003b836) nsta_clock_indic_pane_g1

0xb345,	// (0x00042368) grid_indicator_pane

0xd0bd,	// (0x000440e0) scroll_pane_cp29

0xf16b,	// (0x0004618e) indicator_nsta_pane_cp2_ParamLimits

0xf16b,	// (0x0004618e) indicator_nsta_pane_cp2

0x860d,	// (0x0003f630) main_apps_wheel_pane

0x29f6,	// (0x00039a19) form_midp_field_text_pane_ParamLimits

0x2b45,	// (0x00039b68) scroll_bar_cp050_ParamLimits

0x4863,	// (0x0003b886) cell_indicator_pane_ParamLimits

0x4863,	// (0x0003b886) cell_indicator_pane

0x487b,	// (0x0003b89e) cell_indicator_pane_g1

0xc670,	// (0x00043693) grid_wheel_folder_pane_ParamLimits

0xc670,	// (0x00043693) grid_wheel_folder_pane

0xc67e,	// (0x000436a1) list_wheel_apps_pane_ParamLimits

0xc67e,	// (0x000436a1) list_wheel_apps_pane

0xc68c,	// (0x000436af) main_apps_wheel_pane_g1_ParamLimits

0xc68c,	// (0x000436af) main_apps_wheel_pane_g1

0xc69c,	// (0x000436bf) main_apps_wheel_pane_g2_ParamLimits

0xc69c,	// (0x000436bf) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x00046aeb) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x00046aeb) main_apps_wheel_pane_g

0xc6ac,	// (0x000436cf) main_apps_wheel_pane_t1_ParamLimits

0xc6ac,	// (0x000436cf) main_apps_wheel_pane_t1

0xc6c4,	// (0x000436e7) list_wheel_apps_pane_g1

0xc6cc,	// (0x000436ef) list_wheel_apps_pane_g2

0xc6d4,	// (0x000436f7) list_wheel_apps_pane_g3

0xc6dc,	// (0x000436ff) list_wheel_apps_pane_g4

0xc6e4,	// (0x00043707) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00046af0) list_wheel_apps_pane_g

0xf469,	// (0x0004648c) navi_icon_text_pane

0xa8f0,	// (0x00041913) aid_fill_nsta

0xc701,	// (0x00043724) navi_icon_text_pane_g1

0xc70d,	// (0x00043730) navi_icon_text_pane_t1

0xf2ff,	// (0x00046322) list_set_graphic_pane_t1_ParamLimits

0xf2ff,	// (0x00046322) list_set_graphic_pane_t1

0x32aa,	// (0x0003a2cd) popup_midp_note_alarm_window_t6_ParamLimits

0x32aa,	// (0x0003a2cd) popup_midp_note_alarm_window_t6

0x32bc,	// (0x0003a2df) popup_midp_note_alarm_window_t7_ParamLimits

0x32bc,	// (0x0003a2df) popup_midp_note_alarm_window_t7

0x32ce,	// (0x0003a2f1) popup_midp_note_alarm_window_t8_ParamLimits

0x32ce,	// (0x0003a2f1) popup_midp_note_alarm_window_t8

0x32e0,	// (0x0003a303) popup_midp_note_alarm_window_t9_ParamLimits

0x32e0,	// (0x0003a303) popup_midp_note_alarm_window_t9

0x32f2,	// (0x0003a315) popup_midp_note_alarm_window_t10_ParamLimits

0x32f2,	// (0x0003a315) popup_midp_note_alarm_window_t10

0x3304,	// (0x0003a327) popup_midp_note_alarm_window_t11_ParamLimits

0x3304,	// (0x0003a327) popup_midp_note_alarm_window_t11

0x3316,	// (0x0003a339) scroll_pane_cp17_ParamLimits

0x3316,	// (0x0003a339) scroll_pane_cp17

0x0844,	// (0x00037867) volume_small_pane_cp_g1

0x0bf1,	// (0x00037c14) volume_small_pane_cp_g2

0x0bfa,	// (0x00037c1d) volume_small_pane_cp_g3

0x0c03,	// (0x00037c26) volume_small_pane_cp_g4

0x0c0c,	// (0x00037c2f) volume_small_pane_cp_g5

0x0c15,	// (0x00037c38) volume_small_pane_cp_g6

0x0c1e,	// (0x00037c41) volume_small_pane_cp_g7

0x0c27,	// (0x00037c4a) volume_small_pane_cp_g8

0x0c30,	// (0x00037c53) volume_small_pane_cp_g9

0x0c39,	// (0x00037c5c) volume_small_pane_cp_g10

0x1fae,	// (0x00038fd1) midp_ticker_pane_g1_ParamLimits

0x1fba,	// (0x00038fdd) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0004677b) midp_ticker_pane_g_ParamLimits

0x9f68,	// (0x00040f8b) midp_ticker_pane_t1_ParamLimits

0xbd73,	// (0x00042d96) aid_fill_nsta_2

0x2b31,	// (0x00039b54) list_form2_midp_pane

0x3c9a,	// (0x0003acbd) midp_editing_number_pane_ParamLimits

0x3ca9,	// (0x0003accc) midp_ticker_pane_ParamLimits

0x496e,	// (0x0003b991) form2_midp_field_pane

0x4992,	// (0x0003b9b5) scroll_pane_cp51

0x49b2,	// (0x0003b9d5) form2_midp_button_pane_ParamLimits

0x49b2,	// (0x0003b9d5) form2_midp_button_pane

0x49c4,	// (0x0003b9e7) form2_midp_content_pane_ParamLimits

0x49c4,	// (0x0003b9e7) form2_midp_content_pane

0x49de,	// (0x0003ba01) form2_midp_field_choice_group_pane

0x49e6,	// (0x0003ba09) form2_midp_field_pane_g1

0x49ee,	// (0x0003ba11) form2_midp_field_pane_g2

0x49f6,	// (0x0003ba19) form2_midp_field_pane_g3

0x49fe,	// (0x0003ba21) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x00046b15) form2_midp_field_pane_g

0x4a06,	// (0x0003ba29) form2_midp_gauge_slider_pane

0x4a0e,	// (0x0003ba31) form2_midp_gauge_wait_pane

0x4a16,	// (0x0003ba39) form2_midp_image_pane_ParamLimits

0x4a16,	// (0x0003ba39) form2_midp_image_pane

0x4a31,	// (0x0003ba54) form2_midp_label_pane_ParamLimits

0x4a31,	// (0x0003ba54) form2_midp_label_pane

0xc73b,	// (0x0004375e) form2_midp_label_pane_cp_ParamLimits

0xc73b,	// (0x0004375e) form2_midp_label_pane_cp

0x4a71,	// (0x0003ba94) form2_midp_string_pane_ParamLimits

0x4a71,	// (0x0003ba94) form2_midp_string_pane

0xd51b,	// (0x0004453e) form2_midp_text_pane_ParamLimits

0xd51b,	// (0x0004453e) form2_midp_text_pane

0x4a83,	// (0x0003baa6) form2_midp_time_pane

0x4a93,	// (0x0003bab6) input_focus_pane_cp51_ParamLimits

0x4a93,	// (0x0003bab6) input_focus_pane_cp51

0x4aab,	// (0x0003bace) form2_midp_label_pane_t1_ParamLimits

0x4aab,	// (0x0003bace) form2_midp_label_pane_t1

0xd53c,	// (0x0004455f) form2_mdip_text_pane_t1_ParamLimits

0xd53c,	// (0x0004455f) form2_mdip_text_pane_t1

0xd560,	// (0x00044583) form2_midp_time_pane_t1

0x4af9,	// (0x0003bb1c) form2_midp_gauge_slider_pane_t1

0xc75c,	// (0x0004377f) form2_midp_gauge_slider_pane_t2

0xc76e,	// (0x00043791) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00046b1e) form2_midp_gauge_slider_pane_t

0x4b2f,	// (0x0003bb52) form2_midp_slider_pane

0x4b3b,	// (0x0003bb5e) form2_midp_gauge_wait_pane_t1

0x4b49,	// (0x0003bb6c) form2_midp_wait_pane_ParamLimits

0x4b49,	// (0x0003bb6c) form2_midp_wait_pane

0x285c,	// (0x0003987f) list_single_2graphic_pane_cp4_ParamLimits

0x285c,	// (0x0003987f) list_single_2graphic_pane_cp4

0xc780,	// (0x000437a3) list_single_midp_graphic_pane_cp_ParamLimits

0xc780,	// (0x000437a3) list_single_midp_graphic_pane_cp

0x85bf,	// (0x0003f5e2) list_highlight_pane_cp20

0x4b8d,	// (0x0003bbb0) list_single_2graphic_pane_g1_cp4

0x4165,	// (0x0003b188) list_single_2graphic_pane_g2_cp4

0x4b95,	// (0x0003bbb8) list_single_2graphic_pane_t1_cp4

0x860d,	// (0x0003f630) list_highlight_pane_cp21

0x4ba4,	// (0x0003bbc7) list_single_midp_graphic_pane_g4_cp

0x4bb3,	// (0x0003bbd6) list_single_midp_graphic_pane_t1_cp

0xc7a1,	// (0x000437c4) form2_mdip_string_pane_t1_ParamLimits

0xc7a1,	// (0x000437c4) form2_mdip_string_pane_t1

0x85bf,	// (0x0003f5e2) bg_wml_button_pane_cp2

0x85b5,	// (0x0003f5d8) form2_midp_image_pane_g1

0xcf6a,	// (0x00043f8d) list_double_large_graphic_pane_g5_ParamLimits

0xcf6a,	// (0x00043f8d) list_double_large_graphic_pane_g5

0x9ec4,	// (0x00040ee7) midp_form_pane_ParamLimits

0x860d,	// (0x0003f630) main_apps_wheel_pane_ParamLimits

0xa60a,	// (0x0004162d) popup_preview_window_ParamLimits

0xa60a,	// (0x0004162d) popup_preview_window

0x0674,	// (0x00037697) popup_touch_info_window_ParamLimits

0x0674,	// (0x00037697) popup_touch_info_window

0x0696,	// (0x000376b9) popup_touch_menu_window_ParamLimits

0x0696,	// (0x000376b9) popup_touch_menu_window

0x85ab,	// (0x0003f5ce) bg_popup_sub_pane_cp6

0x4c64,	// (0x0003bc87) list_touch_menu_pane

0x4c6c,	// (0x0003bc8f) list_single_touch_menu_pane_ParamLimits

0x4c6c,	// (0x0003bc8f) list_single_touch_menu_pane

0x4c84,	// (0x0003bca7) list_single_touch_menu_pane_t1

0x860d,	// (0x0003f630) bg_popup_sub_pane_cp7_ParamLimits

0x860d,	// (0x0003f630) bg_popup_sub_pane_cp7

0x4c92,	// (0x0003bcb5) heading_sub_pane

0x4c9a,	// (0x0003bcbd) list_touch_info_pane_ParamLimits

0x4c9a,	// (0x0003bcbd) list_touch_info_pane

0x4ca9,	// (0x0003bccc) list_single_touch_info_pane_ParamLimits

0x4ca9,	// (0x0003bccc) list_single_touch_info_pane

0x4cbb,	// (0x0003bcde) list_single_touch_info_pane_t1

0x4cc9,	// (0x0003bcec) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00046b2c) list_single_touch_info_pane_t

0x1ed0,	// (0x00038ef3) bg_popup_heading_pane_cp

0x4cd7,	// (0x0003bcfa) heading_sub_pane_t1

0x27a3,	// (0x000397c6) bg_popup_preview_window_pane_cp_ParamLimits

0x27a3,	// (0x000397c6) bg_popup_preview_window_pane_cp

0x4c92,	// (0x0003bcb5) heading_preview_pane

0x4c9a,	// (0x0003bcbd) list_preview_pane_ParamLimits

0x4c9a,	// (0x0003bcbd) list_preview_pane

0x4ce5,	// (0x0003bd08) popup_preview_window_g1

0x4ca9,	// (0x0003bccc) list_single_preview_pane_ParamLimits

0x4ca9,	// (0x0003bccc) list_single_preview_pane

0x4ced,	// (0x0003bd10) list_single_preview_pane_g1

0x4cf5,	// (0x0003bd18) list_single_preview_pane_t1

0x4cbb,	// (0x0003bcde) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00046b31) list_single_preview_pane_t

0x4d03,	// (0x0003bd26) bg_popup_heading_pane_cp2_ParamLimits

0x4d03,	// (0x0003bd26) bg_popup_heading_pane_cp2

0x4d19,	// (0x0003bd3c) heading_preview_pane_g1

0x4d21,	// (0x0003bd44) heading_preview_pane_t1_ParamLimits

0x4d21,	// (0x0003bd44) heading_preview_pane_t1

0xb35c,	// (0x0004237f) soft_indicator_pane_t1_ParamLimits

0xb8ba,	// (0x000428dd) scroll_pane_ParamLimits

0xbc9e,	// (0x00042cc1) scroll_sc2_left_pane

0xbca7,	// (0x00042cca) scroll_sc2_right_pane

0xbcc6,	// (0x00042ce9) scroll_bg_pane_g1_ParamLimits

0xbcdb,	// (0x00042cfe) scroll_bg_pane_g2_ParamLimits

0xbcf3,	// (0x00042d16) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00046706) scroll_bg_pane_g_ParamLimits

0xbcc6,	// (0x00042ce9) scroll_handle_pane_g1_ParamLimits

0xbd15,	// (0x00042d38) scroll_handle_pane_g2_ParamLimits

0xbcf3,	// (0x00042d16) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0004670d) scroll_handle_pane_g_ParamLimits

0x00d4,	// (0x000370f7) popup_choice_list_window_ParamLimits

0x00d4,	// (0x000370f7) popup_choice_list_window

0x2679,	// (0x0003969c) choice_list_pane

0x26fb,	// (0x0003971e) cell_toolbar_pane_t1

0x2723,	// (0x00039746) toolbar_button_pane_ParamLimits

0x37e0,	// (0x0003a803) ai_gene_pane_1_t2_ParamLimits

0x37e0,	// (0x0003a803) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00046930) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00046930) ai_gene_pane_1_t

0x4d3e,	// (0x0003bd61) scroll_sc2_left_pane_g1

0x4d3e,	// (0x0003bd61) scroll_sc2_right_pane_g1

0x21ff,	// (0x00039222) bg_popup_sub_pane_cp10

0x4d48,	// (0x0003bd6b) list_choice_list_pane

0x3d45,	// (0x0003ad68) list_single_choice_list_pane_ParamLimits

0x3d45,	// (0x0003ad68) list_single_choice_list_pane

0x4d61,	// (0x0003bd84) list_single_choice_list_pane_g1

0xba95,	// (0x00042ab8) list_single_choice_list_pane_t1_ParamLimits

0xba95,	// (0x00042ab8) list_single_choice_list_pane_t1

0x4d69,	// (0x0003bd8c) choice_list_pane_g1

0x4d71,	// (0x0003bd94) choice_list_pane_t1

0x85ab,	// (0x0003f5ce) input_focus_pane_cp11

0xbc13,	// (0x00042c36) title_pane_stacon_g2_ParamLimits

0xbc13,	// (0x00042c36) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x000466ec) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x000466ec) title_pane_stacon_g

0x1ed0,	// (0x00038ef3) cursor_press_pane

0xa287,	// (0x000412aa) popup_fep_hwr_window_ParamLimits

0xa287,	// (0x000412aa) popup_fep_hwr_window

0x0218,	// (0x0003723b) popup_fep_vkb_window_ParamLimits

0x0218,	// (0x0003723b) popup_fep_vkb_window

0x4d7f,	// (0x0003bda2) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x00046b5a) fep_vkb_side_pane_g_ParamLimits

0x0c7b,	// (0x00037c9e) fep_hwr_candidate_pane_ParamLimits

0x0c7b,	// (0x00037c9e) fep_hwr_candidate_pane

0x0ca5,	// (0x00037cc8) fep_hwr_side_pane_ParamLimits

0x0ca5,	// (0x00037cc8) fep_hwr_side_pane

0x0cc7,	// (0x00037cea) fep_hwr_top_pane_ParamLimits

0x0cc7,	// (0x00037cea) fep_hwr_top_pane

0x0cdf,	// (0x00037d02) fep_hwr_write_pane_ParamLimits

0x0cdf,	// (0x00037d02) fep_hwr_write_pane

0xfb37,	// (0x00046b5a) fep_vkb_side_pane_g

0x4d87,	// (0x0003bdaa) fep_hwr_top_pane_g1

0x4d99,	// (0x0003bdbc) fep_hwr_top_pane_g2

0x0d19,	// (0x00037d3c) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x00046b36) fep_hwr_top_pane_g

0x0d2e,	// (0x00037d51) fep_hwr_top_text_pane

0xee9d,	// (0x00045ec0) fep_hwr_top_text_pane_g1

0x4dcf,	// (0x0003bdf2) fep_hwr_top_text_pane_t1

0x0e38,	// (0x00037e5b) fep_hwr_candidate_pane_g1

0x501a,	// (0x0003c03d) fep_vkb_keypad_pane_g3_ParamLimits

0x501a,	// (0x0003c03d) fep_vkb_keypad_pane_g3

0x5046,	// (0x0003c069) fep_vkb_keypad_pane_g4_ParamLimits

0x5046,	// (0x0003c069) fep_vkb_keypad_pane_g4

0x50bd,	// (0x0003c0e0) fep_vkb_bottom_pane_g2_ParamLimits

0x50bd,	// (0x0003c0e0) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x00046b61) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x00046b61) fep_vkb_bottom_pane_g

0x4d3e,	// (0x0003bd61) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00046b6b) cell_vkb_side_pane_g

0x5148,	// (0x0003c16b) cell_vkb_side_pane_t1

0x5156,	// (0x0003c179) cell_vkb_side_pane_t1_copy1

0x4d3e,	// (0x0003bd61) bg_fep_vkb_candidate_pane_g2

0x529a,	// (0x0003c2bd) cell_vkb_candidate_pane_ParamLimits

0x4ddd,	// (0x0003be00) aid_size_cell_vkb_ParamLimits

0x4ddd,	// (0x0003be00) aid_size_cell_vkb

0x529a,	// (0x0003c2bd) cell_vkb_candidate_pane

0x0e5f,	// (0x00037e82) bg_popup_fep_shadow_pane_g1

0xc83d,	// (0x00043860) fep_vkb_bottom_pane_ParamLimits

0xc83d,	// (0x00043860) fep_vkb_bottom_pane

0x4eac,	// (0x0003becf) fep_vkb_candidate_pane_ParamLimits

0x4eac,	// (0x0003becf) fep_vkb_candidate_pane

0xc869,	// (0x0004388c) fep_vkb_keypad_pane_ParamLimits

0xc869,	// (0x0004388c) fep_vkb_keypad_pane

0xc890,	// (0x000438b3) fep_vkb_side_pane_ParamLimits

0xc890,	// (0x000438b3) fep_vkb_side_pane

0xc8cc,	// (0x000438ef) fep_vkb_top_pane_ParamLimits

0xc8cc,	// (0x000438ef) fep_vkb_top_pane

0x4f73,	// (0x0003bf96) fep_vkb_top_pane_g1_ParamLimits

0x4f73,	// (0x0003bf96) fep_vkb_top_pane_g1

0x4f82,	// (0x0003bfa5) fep_vkb_top_pane_g2_ParamLimits

0x4f82,	// (0x0003bfa5) fep_vkb_top_pane_g2

0x4f91,	// (0x0003bfb4) fep_vkb_top_pane_g3_ParamLimits

0x4f91,	// (0x0003bfb4) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00046b51) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00046b51) fep_vkb_top_pane_g

0x4faf,	// (0x0003bfd2) fep_vkb_top_text_pane_ParamLimits

0x4faf,	// (0x0003bfd2) fep_vkb_top_text_pane

0xc908,	// (0x0004392b) fep_vkb_side_pane_g1_ParamLimits

0xc908,	// (0x0004392b) fep_vkb_side_pane_g1

0x5009,	// (0x0003c02c) grid_vkb_side_pane_ParamLimits

0x5009,	// (0x0003c02c) grid_vkb_side_pane

0x0e67,	// (0x00037e8a) bg_popup_fep_shadow_pane_g2

0x0e70,	// (0x00037e93) bg_popup_fep_shadow_pane_g3

0x0e78,	// (0x00037e9b) bg_popup_fep_shadow_pane_g4

0x0e81,	// (0x00037ea4) bg_popup_fep_shadow_pane_g5

0x0e8b,	// (0x00037eae) bg_popup_fep_shadow_pane_g6

0x0e93,	// (0x00037eb6) bg_popup_fep_shadow_pane_g7

0xb9b7,	// (0x000429da) bg_popup_fep_shadow_pane_g8

0x5068,	// (0x0003c08b) grid_vkb_keypad_number_pane_ParamLimits

0x5068,	// (0x0003c08b) grid_vkb_keypad_number_pane

0x507c,	// (0x0003c09f) grid_vkb_keypad_pane_ParamLimits

0x507c,	// (0x0003c09f) grid_vkb_keypad_pane

0x50a2,	// (0x0003c0c5) fep_vkb_bottom_pane_g1_ParamLimits

0x50a2,	// (0x0003c0c5) fep_vkb_bottom_pane_g1

0x50cb,	// (0x0003c0ee) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x50cb,	// (0x0003c0ee) grid_vkb_keypad_bottom_left_pane

0x50e0,	// (0x0003c103) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x50e0,	// (0x0003c103) grid_vkb_keypad_bottom_right_pane

0x50f5,	// (0x0003c118) fep_vkb_top_text_pane_g1

0xc94f,	// (0x00043972) fep_vkb_top_text_pane_t1

0xc961,	// (0x00043984) cell_vkb_side_pane_ParamLimits

0xc961,	// (0x00043984) cell_vkb_side_pane

0x4d3e,	// (0x0003bd61) cell_vkb_side_pane_g1

0x5164,	// (0x0003c187) cell_vkb_keypad_pane_ParamLimits

0x5164,	// (0x0003c187) cell_vkb_keypad_pane

0x51f1,	// (0x0003c214) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00046b7e) bg_popup_fep_shadow_pane_g

0x0ea5,	// (0x00037ec8) cell_hwr_side_pane_g1

0x0ea5,	// (0x00037ec8) cell_hwr_side_pane_g2

0x51fb,	// (0x0003c21e) cell_vkb_keypad_pane_t1

0xc977,	// (0x0004399a) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc977,	// (0x0004399a) cell_vkb_keypad_bottom_left_pane

0xc98c,	// (0x000439af) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc98c,	// (0x000439af) cell_vkb_keypad_bottom_right_pane

0x4d3e,	// (0x0003bd61) cell_vkb_keypad_bottom_left_pane_g1

0x4d3e,	// (0x0003bd61) cell_vkb_keypad_bottom_right_pane_g1

0x525f,	// (0x0003c282) cell_vkb_keypad_number_pane_ParamLimits

0x525f,	// (0x0003c282) cell_vkb_keypad_number_pane

0x527e,	// (0x0003c2a1) cell_vkb_keypad_number_pane_g1

0x5288,	// (0x0003c2ab) cell_vkb_keypad_number_pane_g2

0x5291,	// (0x0003c2b4) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x00046b70) cell_vkb_keypad_number_pane_g

0x51fb,	// (0x0003c21e) cell_vkb_keypad_number_pane_t1

0x52bb,	// (0x0003c2de) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x00046b91) cell_hwr_side_pane_g

0x52d4,	// (0x0003c2f7) cell_hwr_side_pane_t1

0x0eaf,	// (0x00037ed2) cell_hwr_side_pane_t1_copy1

0x0ebd,	// (0x00037ee0) cell_hwr_candidate_pane_g1

0x0eec,	// (0x00037f0f) cell_hwr_candidate_pane_t1

0x4d3e,	// (0x0003bd61) cell_vkb_candidate_pane_g2

0x5318,	// (0x0003c33b) cell_vkb_candidate_pane_t1

0x0c42,	// (0x00037c65) bg_popup_fep_shadow_pane_ParamLimits

0x0c42,	// (0x00037c65) bg_popup_fep_shadow_pane

0x0cf9,	// (0x00037d1c) bg_fep_hwr_top_pane_g4

0x4dab,	// (0x0003bdce) bg_hwr_side_pane_g1_ParamLimits

0x4dab,	// (0x0003bdce) bg_hwr_side_pane_g1

0xab8c,	// (0x00041baf) cell_hwr_side_pane_ParamLimits

0xab8c,	// (0x00041baf) cell_hwr_side_pane

0x0da9,	// (0x00037dcc) fep_hwr_write_pane_g1_ParamLimits

0x0da9,	// (0x00037dcc) fep_hwr_write_pane_g1

0x0db6,	// (0x00037dd9) fep_hwr_write_pane_g2_ParamLimits

0x0db6,	// (0x00037dd9) fep_hwr_write_pane_g2

0x0dc3,	// (0x00037de6) fep_hwr_write_pane_g3_ParamLimits

0x0dc3,	// (0x00037de6) fep_hwr_write_pane_g3

0xabac,	// (0x00041bcf) fep_hwr_write_pane_g4_ParamLimits

0xabac,	// (0x00041bcf) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00046b3d) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00046b3d) fep_hwr_write_pane_g

0x0cf9,	// (0x00037d1c) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0cf9,	// (0x00037d1c) bg_fep_hwr_candidate_pane_g2

0x0de6,	// (0x00037e09) cell_hwr_candidate_pane_ParamLimits

0x0de6,	// (0x00037e09) cell_hwr_candidate_pane

0x0e38,	// (0x00037e5b) fep_hwr_candidate_pane_g1_ParamLimits

0x4e0b,	// (0x0003be2e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4e0b,	// (0x0003be2e) bg_popup_fep_shadow_pane_cp2

0x4fa1,	// (0x0003bfc4) fep_vkb_top_pane_g4_ParamLimits

0x4fa1,	// (0x0003bfc4) fep_vkb_top_pane_g4

0x4fe7,	// (0x0003c00a) fep_vkb_side_pane_g2_ParamLimits

0x4fe7,	// (0x0003c00a) fep_vkb_side_pane_g2

0x994a,	// (0x0004096d) list_setting_pane_t4_ParamLimits

0x994a,	// (0x0004096d) list_setting_pane_t4

0x99e6,	// (0x00040a09) list_setting_number_pane_t5_ParamLimits

0x99e6,	// (0x00040a09) list_setting_number_pane_t5

0xeef3,	// (0x00045f16) list_double_heading_pane_cp2_ParamLimits

0xeef3,	// (0x00045f16) list_double_heading_pane_cp2

0x5326,	// (0x0003c349) list_double_heading_pane_g1_cp2_ParamLimits

0x5326,	// (0x0003c349) list_double_heading_pane_g1_cp2

0x5332,	// (0x0003c355) list_double_heading_pane_g2_cp2_ParamLimits

0x5332,	// (0x0003c355) list_double_heading_pane_g2_cp2

0x5346,	// (0x0003c369) list_double_heading_pane_t1_cp2_ParamLimits

0x5346,	// (0x0003c369) list_double_heading_pane_t1_cp2

0x535c,	// (0x0003c37f) list_double_heading_pane_t2_cp2_ParamLimits

0x535c,	// (0x0003c37f) list_double_heading_pane_t2_cp2

0x85a3,	// (0x0003f5c6) aid_value_unit2

0xe9af,	// (0x000459d2) popup_preview_fixed_window

0xb43c,	// (0x0004245f) bg_popup_preview_window_pane_cp02

0x536e,	// (0x0003c391) list_preview_fixed_pane

0x53b4,	// (0x0003c3d7) list_empty_pane_fp_ParamLimits

0x53b4,	// (0x0003c3d7) list_empty_pane_fp

0x53b4,	// (0x0003c3d7) list_single_cale_day_pane_fp_ParamLimits

0x53b4,	// (0x0003c3d7) list_single_cale_day_pane_fp

0x53b4,	// (0x0003c3d7) list_single_graphic_heading_pane_fp_ParamLimits

0x53b4,	// (0x0003c3d7) list_single_graphic_heading_pane_fp

0x53b4,	// (0x0003c3d7) list_single_graphic_pane_fp_ParamLimits

0x53b4,	// (0x0003c3d7) list_single_graphic_pane_fp

0x53b4,	// (0x0003c3d7) list_single_heading_pane_fp_ParamLimits

0x53b4,	// (0x0003c3d7) list_single_heading_pane_fp

0x53b4,	// (0x0003c3d7) list_single_pane_fp_ParamLimits

0x53b4,	// (0x0003c3d7) list_single_pane_fp

0x53cd,	// (0x0003c3f0) list_single_pane_fp_g1_ParamLimits

0x53cd,	// (0x0003c3f0) list_single_pane_fp_g1

0xd580,	// (0x000445a3) list_single_pane_fp_g2_ParamLimits

0xd580,	// (0x000445a3) list_single_pane_fp_g2

0xd58c,	// (0x000445af) list_single_pane_fp_g3_ParamLimits

0xd58c,	// (0x000445af) list_single_pane_fp_g3

0x53d9,	// (0x0003c3fc) list_single_pane_fp_g4_ParamLimits

0x53d9,	// (0x0003c3fc) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x00046ba4) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x00046ba4) list_single_pane_fp_g

0xd5a0,	// (0x000445c3) list_single_pane_fp_t1_ParamLimits

0xd5a0,	// (0x000445c3) list_single_pane_fp_t1

0xeac0,	// (0x00045ae3) list_single_graphic_pane_fp_g1_ParamLimits

0xeac0,	// (0x00045ae3) list_single_graphic_pane_fp_g1

0x53cd,	// (0x0003c3f0) list_single_graphic_pane_fp_g2_ParamLimits

0x53cd,	// (0x0003c3f0) list_single_graphic_pane_fp_g2

0xd580,	// (0x000445a3) list_single_graphic_pane_fp_g3_ParamLimits

0xd580,	// (0x000445a3) list_single_graphic_pane_fp_g3

0xd58c,	// (0x000445af) list_single_graphic_pane_fp_g4_ParamLimits

0xd58c,	// (0x000445af) list_single_graphic_pane_fp_g4

0x53d9,	// (0x0003c3fc) list_single_graphic_pane_fp_g5_ParamLimits

0x53d9,	// (0x0003c3fc) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00046bad) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00046bad) list_single_graphic_pane_fp_g

0xeacc,	// (0x00045aef) list_single_graphic_pane_fp_t1_ParamLimits

0xeacc,	// (0x00045aef) list_single_graphic_pane_fp_t1

0xeac0,	// (0x00045ae3) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xeac0,	// (0x00045ae3) list_single_graphic_heading_pane_fp_g1

0x53cd,	// (0x0003c3f0) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x53cd,	// (0x0003c3f0) list_single_graphic_heading_pane_fp_g2

0xd580,	// (0x000445a3) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xd580,	// (0x000445a3) list_single_graphic_heading_pane_fp_g3

0xd58c,	// (0x000445af) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xd58c,	// (0x000445af) list_single_graphic_heading_pane_fp_g4

0x53d9,	// (0x0003c3fc) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x53d9,	// (0x0003c3fc) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00046bad) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00046bad) list_single_graphic_heading_pane_fp_g

0xeae2,	// (0x00045b05) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xeae2,	// (0x00045b05) list_single_graphic_heading_pane_fp_t1

0xeaf8,	// (0x00045b1b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xeaf8,	// (0x00045b1b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00046bb8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00046bb8) list_single_graphic_heading_pane_fp_t

0xeb0a,	// (0x00045b2d) list_single_cale_day_pane_fp_g1_ParamLimits

0xeb0a,	// (0x00045b2d) list_single_cale_day_pane_fp_g1

0x53e5,	// (0x0003c408) list_single_cale_day_pane_fp_g2_ParamLimits

0x53e5,	// (0x0003c408) list_single_cale_day_pane_fp_g2

0xeb42,	// (0x00045b65) list_single_cale_day_pane_fp_g3_ParamLimits

0xeb42,	// (0x00045b65) list_single_cale_day_pane_fp_g3

0xeb6a,	// (0x00045b8d) list_single_cale_day_pane_fp_g4_ParamLimits

0xeb6a,	// (0x00045b8d) list_single_cale_day_pane_fp_g4

0xeb8e,	// (0x00045bb1) list_single_cale_day_pane_fp_g5_ParamLimits

0xeb8e,	// (0x00045bb1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00046bbd) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00046bbd) list_single_cale_day_pane_fp_g

0xebb2,	// (0x00045bd5) list_single_cale_day_pane_fp_t1_ParamLimits

0xebb2,	// (0x00045bd5) list_single_cale_day_pane_fp_t1

0xebd8,	// (0x00045bfb) list_single_cale_day_pane_fp_t2_ParamLimits

0xebd8,	// (0x00045bfb) list_single_cale_day_pane_fp_t2

0xebf1,	// (0x00045c14) list_single_cale_day_pane_fp_t3_ParamLimits

0xebf1,	// (0x00045c14) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00046bc8) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00046bc8) list_single_cale_day_pane_fp_t

0x53cd,	// (0x0003c3f0) list_empty_pane_fp_g1_ParamLimits

0x53cd,	// (0x0003c3f0) list_empty_pane_fp_g1

0xec0a,	// (0x00045c2d) list_empty_pane_fp_t1

0xec18,	// (0x00045c3b) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00046bcf) list_empty_pane_fp_t

0x53cd,	// (0x0003c3f0) list_single_heading_pane_fp_g1_ParamLimits

0x53cd,	// (0x0003c3f0) list_single_heading_pane_fp_g1

0xd580,	// (0x000445a3) list_single_heading_pane_fp_g2_ParamLimits

0xd580,	// (0x000445a3) list_single_heading_pane_fp_g2

0xd58c,	// (0x000445af) list_single_heading_pane_fp_g3_ParamLimits

0xd58c,	// (0x000445af) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00046bd4) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00046bd4) list_single_heading_pane_fp_g

0xec26,	// (0x00045c49) list_single_heading_pane_fp_t1_ParamLimits

0xec26,	// (0x00045c49) list_single_heading_pane_fp_t1

0xec38,	// (0x00045c5b) list_single_heading_pane_fp_t2_ParamLimits

0xec38,	// (0x00045c5b) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00046bdb) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00046bdb) list_single_heading_pane_fp_t

0xbaaa,	// (0x00042acd) aid_size_cell_fast

0xb41f,	// (0x00042442) soft_indicator_pane_cp1_t1

0xbae7,	// (0x00042b0a) cell_app_pane_cp2_ParamLimits

0xbae7,	// (0x00042b0a) cell_app_pane_cp2

0x0c64,	// (0x00037c87) fep_hwr_candidate_drop_down_list_pane

0x0e52,	// (0x00037e75) fep_hwr_candidate_pane_g3_ParamLimits

0x0e52,	// (0x00037e75) fep_hwr_candidate_pane_g3

0xd573,	// (0x00044596) fep_hwr_candidate_pane_g4_ParamLimits

0xd573,	// (0x00044596) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x00046b4a) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x00046b4a) fep_hwr_candidate_pane_g

0x4e9b,	// (0x0003bebe) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4e9b,	// (0x0003bebe) fep_vkb_candidate_drop_down_list_pane

0x52c3,	// (0x0003c2e6) fep_vkb_candidate_pane_g3

0x52cb,	// (0x0003c2ee) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x00046b77) fep_vkb_candidate_pane_g

0x0ebd,	// (0x00037ee0) cell_hwr_candidate_pane_g1_ParamLimits

0x0ecb,	// (0x00037eee) cell_hwr_candidate_pane_g3_ParamLimits

0x0ecb,	// (0x00037eee) cell_hwr_candidate_pane_g3

0x6f5c,	// (0x0003df7f) cell_hwr_candidate_pane_g4_ParamLimits

0x6f5c,	// (0x0003df7f) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x00046b96) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x00046b96) cell_hwr_candidate_pane_g

0x52e2,	// (0x0003c305) cell_vkb_candidate_pane_g3_ParamLimits

0x52e2,	// (0x0003c305) cell_vkb_candidate_pane_g3

0x52fd,	// (0x0003c320) cell_vkb_candidate_pane_g4_ParamLimits

0x52fd,	// (0x0003c320) cell_vkb_candidate_pane_g4

0x5412,	// (0x0003c435) cell_app_pane_cp2_g1_ParamLimits

0x5412,	// (0x0003c435) cell_app_pane_cp2_g1

0x5430,	// (0x0003c453) cell_app_pane_cp2_g2_ParamLimits

0x5430,	// (0x0003c453) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00046be0) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00046be0) cell_app_pane_cp2_g

0x543c,	// (0x0003c45f) cell_app_pane_cp2_t1_ParamLimits

0x543c,	// (0x0003c45f) cell_app_pane_cp2_t1

0xb947,	// (0x0004296a) grid_highlight_pane_cp1_ParamLimits

0xb947,	// (0x0004296a) grid_highlight_pane_cp1

0x0f0a,	// (0x00037f2d) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f0a,	// (0x00037f2d) cell_hwr_candidate_pane_cp1

0x0ebd,	// (0x00037ee0) fep_hwr_candidate_drop_down_list_pane_g1

0x0f2e,	// (0x00037f51) fep_hwr_candidate_drop_down_list_pane_g2

0x0f3b,	// (0x00037f5e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00046be5) fep_hwr_candidate_drop_down_list_pane_g

0x0f48,	// (0x00037f6b) fep_hwr_candidate_drop_down_list_scroll_pane

0x0f51,	// (0x00037f74) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0f51,	// (0x00037f74) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0f5e,	// (0x00037f81) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0f5e,	// (0x00037f81) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0f6b,	// (0x00037f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0f6b,	// (0x00037f8e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0f78,	// (0x00037f9b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0f78,	// (0x00037f9b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0f93,	// (0x00037fb6) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0f93,	// (0x00037fb6) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x0fae,	// (0x00037fd1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0fae,	// (0x00037fd1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x0fc9,	// (0x00037fec) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0fc9,	// (0x00037fec) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x0fe4,	// (0x00038007) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0fe4,	// (0x00038007) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00046bec) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00046bec) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x544e,	// (0x0003c471) cell_vkb_candidate_pane_cp1_ParamLimits

0x544e,	// (0x0003c471) cell_vkb_candidate_pane_cp1

0x4fa1,	// (0x0003bfc4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4fa1,	// (0x0003bfc4) fep_vkb_candidate_drop_down_list_pane_g1

0x5474,	// (0x0003c497) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5474,	// (0x0003c497) fep_vkb_candidate_drop_down_list_pane_g2

0x5481,	// (0x0003c4a4) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5481,	// (0x0003c4a4) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x00046bfd) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x00046bfd) fep_vkb_candidate_drop_down_list_pane_g

0x548e,	// (0x0003c4b1) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x548e,	// (0x0003c4b1) fep_vkb_candidate_drop_down_list_scroll_pane

0x549b,	// (0x0003c4be) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x549b,	// (0x0003c4be) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x54a8,	// (0x0003c4cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x54a8,	// (0x0003c4cb) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x54b4,	// (0x0003c4d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x54b4,	// (0x0003c4d7) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x53f1,	// (0x0003c414) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x53f1,	// (0x0003c414) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x54c0,	// (0x0003c4e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x54c0,	// (0x0003c4e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x54e1,	// (0x0003c504) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x54e1,	// (0x0003c504) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5502,	// (0x0003c525) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5502,	// (0x0003c525) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5523,	// (0x0003c546) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5523,	// (0x0003c546) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x00046c04) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x00046c04) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x9258,	// (0x0004027b) title_pane_g1_ParamLimits

0x926b,	// (0x0004028e) title_pane_g2_ParamLimits

0xf54e,	// (0x00046571) title_pane_g_ParamLimits

0xee8d,	// (0x00045eb0) aid_call2_pane

0xee95,	// (0x00045eb8) aid_call_pane

0xee9d,	// (0x00045ec0) popup_clock_analogue_window_g1

0xee9d,	// (0x00045ec0) popup_clock_analogue_window_g2

0xeea5,	// (0x00045ec8) popup_clock_analogue_window_g3

0xeeae,	// (0x00045ed1) popup_clock_analogue_window_g4

0x85b5,	// (0x0003f5d8) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0004671b) popup_clock_analogue_window_g

0xeeb6,	// (0x00045ed9) popup_clock_analogue_window_t1

0xef13,	// (0x00045f36) clock_digital_number_pane_ParamLimits

0xef13,	// (0x00045f36) clock_digital_number_pane

0xef1f,	// (0x00045f42) clock_digital_number_pane_cp02_ParamLimits

0xef1f,	// (0x00045f42) clock_digital_number_pane_cp02

0xef2b,	// (0x00045f4e) clock_digital_number_pane_cp03_ParamLimits

0xef2b,	// (0x00045f4e) clock_digital_number_pane_cp03

0xef37,	// (0x00045f5a) clock_digital_number_pane_cp04_ParamLimits

0xef37,	// (0x00045f5a) clock_digital_number_pane_cp04

0xef43,	// (0x00045f66) clock_digital_separator_pane_ParamLimits

0xef43,	// (0x00045f66) clock_digital_separator_pane

0xef4f,	// (0x00045f72) popup_clock_digital_window_t1_ParamLimits

0xef4f,	// (0x00045f72) popup_clock_digital_window_t1

0x85b5,	// (0x0003f5d8) clock_digital_number_pane_g1

0x85b5,	// (0x0003f5d8) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00046726) clock_digital_number_pane_g

0x85b5,	// (0x0003f5d8) clock_digital_separator_pane_g1

0x85b5,	// (0x0003f5d8) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00046726) clock_digital_separator_pane_g

0xa8f0,	// (0x00041913) aid_fill_nsta_ParamLimits

0xbe87,	// (0x00042eaa) indicator_nsta_pane_ParamLimits

0x2512,	// (0x00039535) popup_clock_analogue_window

0x2512,	// (0x00039535) popup_clock_digital_window

0xd50d,	// (0x00044530) grid_indicator_nsta_pane_ParamLimits

0x47a8,	// (0x0003b7cb) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00046aca) clock_nsta_pane_t

0xee5a,	// (0x00045e7d) aid_size_max_handle

0x9cc9,	// (0x00040cec) aid_size_min_handle

0x1ed0,	// (0x00038ef3) editor_scroll_pane

0x553e,	// (0x0003c561) ex_editor_pane

0xba70,	// (0x00042a93) scroll_pane_cp13

0xb8e6,	// (0x00042909) scroll_pane_cp14

0xeeeb,	// (0x00045f0e) scroll_pane_cp36

0x9d56,	// (0x00040d79) list_single_graphic_hl_pane_cp2_ParamLimits

0x9d56,	// (0x00040d79) list_single_graphic_hl_pane_cp2

0xc4c0,	// (0x000434e3) list_single_graphic_hl_pane_ParamLimits

0xc4c0,	// (0x000434e3) list_single_graphic_hl_pane

0xec4e,	// (0x00045c71) aid_size_min_hl_cp1

0x5546,	// (0x0003c569) list_highlight_pane_cp34_ParamLimits

0x5546,	// (0x0003c569) list_highlight_pane_cp34

0x5557,	// (0x0003c57a) list_single_graphic_hl_pane_g1_ParamLimits

0x5557,	// (0x0003c57a) list_single_graphic_hl_pane_g1

0xabc1,	// (0x00041be4) list_single_graphic_hl_pane_g2_ParamLimits

0xabc1,	// (0x00041be4) list_single_graphic_hl_pane_g2

0xabc1,	// (0x00041be4) list_single_graphic_hl_pane_g3_ParamLimits

0xabc1,	// (0x00041be4) list_single_graphic_hl_pane_g3

0xd5b7,	// (0x000445da) list_single_graphic_hl_pane_g4_ParamLimits

0xd5b7,	// (0x000445da) list_single_graphic_hl_pane_g4

0xabcd,	// (0x00041bf0) list_single_graphic_hl_pane_g5_ParamLimits

0xabcd,	// (0x00041bf0) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x00046c15) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x00046c15) list_single_graphic_hl_pane_g

0xabe1,	// (0x00041c04) list_single_graphic_hl_pane_t1_ParamLimits

0xabe1,	// (0x00041c04) list_single_graphic_hl_pane_t1

0x5564,	// (0x0003c587) aid_size_min_hl_cp2

0x556d,	// (0x0003c590) list_highlight_pane_cp34_cp2_ParamLimits

0x556d,	// (0x0003c590) list_highlight_pane_cp34_cp2

0x5557,	// (0x0003c57a) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5557,	// (0x0003c57a) list_single_graphic_hl_pane_g1_cp2

0x557a,	// (0x0003c59d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x557a,	// (0x0003c59d) list_single_graphic_hl_pane_g2_cp2

0x5586,	// (0x0003c5a9) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x5586,	// (0x0003c5a9) list_single_graphic_hl_pane_g3_cp2

0x5594,	// (0x0003c5b7) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x5594,	// (0x0003c5b7) list_single_graphic_hl_pane_g4_cp2

0x55a0,	// (0x0003c5c3) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x55a0,	// (0x0003c5c3) list_single_graphic_hl_pane_g5_cp2

0xa07d,	// (0x000410a0) control_pane_g4_ParamLimits

0xa07d,	// (0x000410a0) control_pane_g4

0x21ff,	// (0x00039222) bg_popup_sub_pane_cp10_ParamLimits

0x4d48,	// (0x0003bd6b) list_choice_list_pane_ParamLimits

0x4d57,	// (0x0003bd7a) scroll_pane_cp23

0xb43c,	// (0x0004245f) bg_popup_preview_window_pane_cp02_ParamLimits

0x536e,	// (0x0003c391) list_preview_fixed_pane_ParamLimits

0x5384,	// (0x0003c3a7) list_preview_fixed_pane_cp_ParamLimits

0x5384,	// (0x0003c3a7) list_preview_fixed_pane_cp

0x5390,	// (0x0003c3b3) popup_preview_fixed_window_g1_ParamLimits

0x5390,	// (0x0003c3b3) popup_preview_fixed_window_g1

0x539c,	// (0x0003c3bf) popup_preview_fixed_window_g2_ParamLimits

0x539c,	// (0x0003c3bf) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00046b9d) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00046b9d) popup_preview_fixed_window_g

0xedcc,	// (0x00045def) aid_navi_side_left_pane_ParamLimits

0xede1,	// (0x00045e04) aid_navi_side_right_pane_ParamLimits

0xedf9,	// (0x00045e1c) navi_icon_pane_stacon_ParamLimits

0xee0d,	// (0x00045e30) navi_navi_pane_stacon_ParamLimits

0xedf9,	// (0x00045e1c) navi_text_pane_stacon_ParamLimits

0xe8a0,	// (0x000458c3) main_text_info_pane

0x55ca,	// (0x0003c5ed) listscroll_text_info_pane

0x55d2,	// (0x0003c5f5) list_text_info_pane_ParamLimits

0x55d2,	// (0x0003c5f5) list_text_info_pane

0x55e1,	// (0x0003c604) scroll_pane_cp24_ParamLimits

0x55e1,	// (0x0003c604) scroll_pane_cp24

0xc9a7,	// (0x000439ca) list_text_info_pane_t1_ParamLimits

0xc9a7,	// (0x000439ca) list_text_info_pane_t1

0xa1eb,	// (0x0004120e) popup_fast_swap2_window_ParamLimits

0xa1eb,	// (0x0004120e) popup_fast_swap2_window

0x5624,	// (0x0003c647) aid_size_cell_fast2

0x85ab,	// (0x0003f5ce) bg_popup_window_pane_cp17

0x2b65,	// (0x00039b88) heading_pane_cp2

0xb66b,	// (0x0004268e) listscroll_fast2_pane

0x562e,	// (0x0003c651) grid_fast2_pane

0x5638,	// (0x0003c65b) listscroll_fast2_pane_g1

0x5642,	// (0x0003c665) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00046c20) listscroll_fast2_pane_g

0xba70,	// (0x00042a93) scroll_pane_cp26

0x564c,	// (0x0003c66f) cell_fast2_pane_ParamLimits

0x564c,	// (0x0003c66f) cell_fast2_pane

0x5663,	// (0x0003c686) cell_fast2_pane_g1

0x566c,	// (0x0003c68f) cell_fast2_pane_g2

0x5675,	// (0x0003c698) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x00046c25) cell_fast2_pane_g

0xb6ad,	// (0x000426d0) grid_highlight_pane_cp9

0x00b8,	// (0x000370db) main_eswt_pane_ParamLimits

0x00b8,	// (0x000370db) main_eswt_pane

0x55f6,	// (0x0003c619) list_single_text_info_pane

0x567d,	// (0x0003c6a0) eswt_ctrl_button_pane

0x567d,	// (0x0003c6a0) eswt_ctrl_canvas_pane

0x5685,	// (0x0003c6a8) eswt_ctrl_combo_pane

0x567d,	// (0x0003c6a0) eswt_ctrl_default_pane

0x567d,	// (0x0003c6a0) eswt_ctrl_label_pane

0x568d,	// (0x0003c6b0) eswt_ctrl_wait_pane

0x5695,	// (0x0003c6b8) eswt_shell_pane

0x85ab,	// (0x0003f5ce) listscroll_eswt_app_pane

0x56b5,	// (0x0003c6d8) popup_eswt_tasktip_window_ParamLimits

0x56b5,	// (0x0003c6d8) popup_eswt_tasktip_window

0x27a3,	// (0x000397c6) bg_popup_window_pane_cp18

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1_ParamLimits

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2_ParamLimits

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2

0x56e0,	// (0x0003c703) eswt_control_pane_g3_ParamLimits

0x56e0,	// (0x0003c703) eswt_control_pane_g3

0x56ed,	// (0x0003c710) eswt_control_pane_g4_ParamLimits

0x56ed,	// (0x0003c710) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x00046c2c) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x00046c2c) eswt_control_pane_g

0xb947,	// (0x0004296a) bg_button_pane_ParamLimits

0xb947,	// (0x0004296a) bg_button_pane

0xb6c2,	// (0x000426e5) common_borders_pane_copy2_ParamLimits

0xb6c2,	// (0x000426e5) common_borders_pane_copy2

0x56fa,	// (0x0003c71d) control_button_pane_g1_ParamLimits

0x56fa,	// (0x0003c71d) control_button_pane_g1

0x5706,	// (0x0003c729) control_button_pane_g2_ParamLimits

0x5706,	// (0x0003c729) control_button_pane_g2

0x5712,	// (0x0003c735) control_button_pane_g3_ParamLimits

0x5712,	// (0x0003c735) control_button_pane_g3

0x0002,

0xfc12,	// (0x00046c35) control_button_pane_g_ParamLimits

0xfc12,	// (0x00046c35) control_button_pane_g

0x5726,	// (0x0003c749) control_button_pane_t1

0x5734,	// (0x0003c757) control_button_pane_t2

0x0001,

0xfc19,	// (0x00046c3c) control_button_pane_t

0x272f,	// (0x00039752) bg_button_pane_g1

0x273f,	// (0x00039762) bg_button_pane_g2

0x2737,	// (0x0003975a) bg_button_pane_g3

0x274f,	// (0x00039772) bg_button_pane_g4

0x2747,	// (0x0003976a) bg_button_pane_g5

0x2757,	// (0x0003977a) bg_button_pane_g6

0x275f,	// (0x00039782) bg_button_pane_g7

0x276f,	// (0x00039792) bg_button_pane_g8

0x2767,	// (0x0003978a) bg_button_pane_g9

0x0008,

0xf861,	// (0x00046884) bg_button_pane_g

0x4d03,	// (0x0003bd26) common_borders_pane_ParamLimits

0x4d03,	// (0x0003bd26) common_borders_pane

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1_copy1_ParamLimits

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1_copy1

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2_copy1_ParamLimits

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2_copy1

0x56e0,	// (0x0003c703) eswt_control_pane_g3_copy1_ParamLimits

0x56e0,	// (0x0003c703) eswt_control_pane_g3_copy1

0x56ed,	// (0x0003c710) eswt_control_pane_g4_copy1_ParamLimits

0x56ed,	// (0x0003c710) eswt_control_pane_g4_copy1

0x4d3e,	// (0x0003bd61) bg_eswt_ctrl_canvas_pane_g1

0x4d03,	// (0x0003bd26) common_borders_pane_cp2_ParamLimits

0x4d03,	// (0x0003bd26) common_borders_pane_cp2

0x4d03,	// (0x0003bd26) common_borders_pane_cp3_ParamLimits

0x4d03,	// (0x0003bd26) common_borders_pane_cp3

0x5742,	// (0x0003c765) separator_horizontal_pane

0x574a,	// (0x0003c76d) separator_vertical_pane

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1_copy2_ParamLimits

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1_copy2

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2_copy2_ParamLimits

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2_copy2

0x56e0,	// (0x0003c703) eswt_control_pane_g3_copy2_ParamLimits

0x56e0,	// (0x0003c703) eswt_control_pane_g3_copy2

0x56ed,	// (0x0003c710) eswt_control_pane_g4_copy2_ParamLimits

0x56ed,	// (0x0003c710) eswt_control_pane_g4_copy2

0x85ab,	// (0x0003f5ce) common_borders_pane_cp4

0x5753,	// (0x0003c776) separator_horizontal_pane_g1

0x575c,	// (0x0003c77f) separator_horizontal_pane_g2

0x5765,	// (0x0003c788) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x00046c41) separator_horizontal_pane_g

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1_copy3_ParamLimits

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1_copy3

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2_copy3_ParamLimits

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2_copy3

0x56e0,	// (0x0003c703) eswt_control_pane_g3_copy3_ParamLimits

0x56e0,	// (0x0003c703) eswt_control_pane_g3_copy3

0x56ed,	// (0x0003c710) eswt_control_pane_g4_copy3_ParamLimits

0x56ed,	// (0x0003c710) eswt_control_pane_g4_copy3

0x85ab,	// (0x0003f5ce) common_borders_pane_cp5

0x576e,	// (0x0003c791) separator_vertical_pane_g1

0x5777,	// (0x0003c79a) separator_vertical_pane_g2

0x5780,	// (0x0003c7a3) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x00046c48) separator_vertical_pane_g

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1_copy4_ParamLimits

0x56c6,	// (0x0003c6e9) eswt_control_pane_g1_copy4

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2_copy4_ParamLimits

0x56d3,	// (0x0003c6f6) eswt_control_pane_g2_copy4

0x56e0,	// (0x0003c703) eswt_control_pane_g3_copy4_ParamLimits

0x56e0,	// (0x0003c703) eswt_control_pane_g3_copy4

0x56ed,	// (0x0003c710) eswt_control_pane_g4_copy4_ParamLimits

0x56ed,	// (0x0003c710) eswt_control_pane_g4_copy4

0xc9c9,	// (0x000439ec) eswt_ctrl_combo_button_pane

0xc9d1,	// (0x000439f4) eswt_ctrl_input_pane

0xc9d9,	// (0x000439fc) popup_choice_list_window_cp70

0xc9e1,	// (0x00043a04) eswt_ctrl_input_pane_t1

0x85ab,	// (0x0003f5ce) input_focus_pane_cp70

0x4d03,	// (0x0003bd26) bg_button_pane_cp70_ParamLimits

0x4d03,	// (0x0003bd26) bg_button_pane_cp70

0xc9ef,	// (0x00043a12) eswt_ctrl_combo_button_pane_g1

0x57b7,	// (0x0003c7da) wait_bar_pane_cp70

0x27a3,	// (0x000397c6) bg_popup_window_pane_cp70_ParamLimits

0x27a3,	// (0x000397c6) bg_popup_window_pane_cp70

0x57bf,	// (0x0003c7e2) popup_eswt_tasktip_window_t1

0x57d5,	// (0x0003c7f8) wait_bar_pane_cp71_ParamLimits

0x57d5,	// (0x0003c7f8) wait_bar_pane_cp71

0x57e1,	// (0x0003c804) grid_eswt_app_pane

0xbc9e,	// (0x00042cc1) scroll_pane_cp70

0xc9f7,	// (0x00043a1a) cell_eswt_app_pane_ParamLimits

0xc9f7,	// (0x00043a1a) cell_eswt_app_pane

0xca29,	// (0x00043a4c) cell_eswt_app_pane_g1_ParamLimits

0xca29,	// (0x00043a4c) cell_eswt_app_pane_g1

0xca58,	// (0x00043a7b) cell_eswt_app_pane_g2_ParamLimits

0xca58,	// (0x00043a7b) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x00046c4f) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x00046c4f) cell_eswt_app_pane_g

0xca81,	// (0x00043aa4) cell_eswt_app_pane_t1_ParamLimits

0xca81,	// (0x00043aa4) cell_eswt_app_pane_t1

0x58a6,	// (0x0003c8c9) grid_highlight_pane_cp70_ParamLimits

0x58a6,	// (0x0003c8c9) grid_highlight_pane_cp70

0x1dad,	// (0x00038dd0) set_content_pane_g1

0xa00f,	// (0x00041032) status_small_volume_pane

0x1035,	// (0x00038058) status_small_volume_pane_g1

0x103d,	// (0x00038060) volume_small2_pane

0x1046,	// (0x00038069) volume_small2_pane_g1

0x104f,	// (0x00038072) volume_small2_pane_g2

0x1058,	// (0x0003807b) volume_small2_pane_g3

0x1061,	// (0x00038084) volume_small2_pane_g4

0x106a,	// (0x0003808d) volume_small2_pane_g5

0x1073,	// (0x00038096) volume_small2_pane_g6

0x107c,	// (0x0003809f) volume_small2_pane_g7

0x1085,	// (0x000380a8) volume_small2_pane_g8

0x108e,	// (0x000380b1) volume_small2_pane_g9

0x1097,	// (0x000380ba) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x00046c54) volume_small2_pane_g

0x50f5,	// (0x0003c118) fep_vkb_top_text_pane_g1_ParamLimits

0xc94f,	// (0x00043972) fep_vkb_top_text_pane_t1_ParamLimits

0x53a8,	// (0x0003c3cb) popup_preview_fixed_window_g3_ParamLimits

0x53a8,	// (0x0003c3cb) popup_preview_fixed_window_g3

0xa883,	// (0x000418a6) popup_toolbar_trans_pane

0xc3ec,	// (0x0004340f) aid_height_set_list_ParamLimits

0x3af9,	// (0x0003ab1c) aid_size_parent_ParamLimits

0x21ff,	// (0x00039222) list_highlight_pane_cp2_ParamLimits

0x1dad,	// (0x00038dd0) set_content_pane_g1_ParamLimits

0xc4d4,	// (0x000434f7) list_single_image_pane_ParamLimits

0xc4d4,	// (0x000434f7) list_single_image_pane

0xcab3,	// (0x00043ad6) aid_size_cell_image_ParamLimits

0xcab3,	// (0x00043ad6) aid_size_cell_image

0xcac0,	// (0x00043ae3) grid_single_image_pane_ParamLimits

0xcac0,	// (0x00043ae3) grid_single_image_pane

0xb955,	// (0x00042978) list_single_image_pane_g1_ParamLimits

0xb955,	// (0x00042978) list_single_image_pane_g1

0xb961,	// (0x00042984) list_single_image_pane_g2_ParamLimits

0xb961,	// (0x00042984) list_single_image_pane_g2

0x0001,

0xf67d,	// (0x000466a0) list_single_image_pane_g_ParamLimits

0xf67d,	// (0x000466a0) list_single_image_pane_g

0x58cd,	// (0x0003c8f0) list_single_image_pane_t1_ParamLimits

0x58cd,	// (0x0003c8f0) list_single_image_pane_t1

0xcace,	// (0x00043af1) cell_image_list_pane_ParamLimits

0xcace,	// (0x00043af1) cell_image_list_pane

0xcae2,	// (0x00043b05) cell_image_list_pane_g1

0xcaeb,	// (0x00043b0e) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x00046c69) cell_image_list_pane_g

0x590b,	// (0x0003c92e) aid_size_cell_tb_trans_pane

0xb947,	// (0x0004296a) bg_tb_trans_pane

0x591d,	// (0x0003c940) grid_tb_trans_pane

0x272f,	// (0x00039752) bg_tb_trans_pane_g1

0x273f,	// (0x00039762) bg_tb_trans_pane_g2

0x2737,	// (0x0003975a) bg_tb_trans_pane_g3

0x274f,	// (0x00039772) bg_tb_trans_pane_g4

0x2747,	// (0x0003976a) bg_tb_trans_pane_g5

0x276f,	// (0x00039792) bg_tb_trans_pane_g6

0x2767,	// (0x0003978a) bg_tb_trans_pane_g7

0x2757,	// (0x0003977a) bg_tb_trans_pane_g8

0x275f,	// (0x00039782) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x00046c6e) bg_tb_trans_pane_g

0x5931,	// (0x0003c954) cell_toolbar_trans_pane_ParamLimits

0x5931,	// (0x0003c954) cell_toolbar_trans_pane

0x4d3e,	// (0x0003bd61) cell_toolbar_trans_pane_g1

0xc71f,	// (0x00043742) list_form2_midp_pane_t1

0xc72d,	// (0x00043750) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00046b10) list_form2_midp_pane_t

0x4992,	// (0x0003b9b5) scroll_pane_cp51_ParamLimits

0x4b59,	// (0x0003bb7c) form2_midp_wait_pane_g1

0x4b62,	// (0x0003bb85) form2_midp_wait_pane_g2

0x4b6b,	// (0x0003bb8e) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x00046b25) form2_midp_wait_pane_g

0x860d,	// (0x0003f630) list_highlight_pane_cp21_ParamLimits

0x4ba4,	// (0x0003bbc7) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4bb3,	// (0x0003bbd6) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xd231,	// (0x00044254) list_single_2graphic_im_pane_ParamLimits

0xd231,	// (0x00044254) list_single_2graphic_im_pane

0xcaf4,	// (0x00043b17) list_single_2graphic_im_pane_g1_ParamLimits

0xcaf4,	// (0x00043b17) list_single_2graphic_im_pane_g1

0xcb05,	// (0x00043b28) list_single_2graphic_im_pane_g2_ParamLimits

0xcb05,	// (0x00043b28) list_single_2graphic_im_pane_g2

0xcb11,	// (0x00043b34) list_single_2graphic_im_pane_g3_ParamLimits

0xcb11,	// (0x00043b34) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x00046c81) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x00046c81) list_single_2graphic_im_pane_g

0xcb25,	// (0x00043b48) list_single_2graphic_im_pane_t1_ParamLimits

0xcb25,	// (0x00043b48) list_single_2graphic_im_pane_t1

0x53b4,	// (0x0003c3d7) list_single_graphic_2heading_pane_fp_ParamLimits

0x53b4,	// (0x0003c3d7) list_single_graphic_2heading_pane_fp

0xeac0,	// (0x00045ae3) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xeac0,	// (0x00045ae3) list_single_graphic_2heading_pane_fp_g1

0x53cd,	// (0x0003c3f0) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x53cd,	// (0x0003c3f0) list_single_graphic_2heading_pane_fp_g2

0xd580,	// (0x000445a3) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xd580,	// (0x000445a3) list_single_graphic_2heading_pane_fp_g3

0xd58c,	// (0x000445af) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xd58c,	// (0x000445af) list_single_graphic_2heading_pane_fp_g4

0x53d9,	// (0x0003c3fc) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x53d9,	// (0x0003c3fc) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00046bad) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00046bad) list_single_graphic_2heading_pane_fp_g

0xec57,	// (0x00045c7a) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xec57,	// (0x00045c7a) list_single_graphic_2heading_pane_fp_t1

0xeaf8,	// (0x00045b1b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xeaf8,	// (0x00045b1b) list_single_graphic_2heading_pane_fp_t2

0xec6d,	// (0x00045c90) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xec6d,	// (0x00045c90) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x00046c8a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x00046c8a) list_single_graphic_2heading_pane_fp_t

0x4db7,	// (0x0003bdda) fep_hwr_write_pane_g5_ParamLimits

0x4db7,	// (0x0003bdda) fep_hwr_write_pane_g5

0x4dc3,	// (0x0003bde6) fep_hwr_write_pane_g6_ParamLimits

0x4dc3,	// (0x0003bde6) fep_hwr_write_pane_g6

0x5695,	// (0x0003c6b8) eswt_shell_pane_ParamLimits

0x27a3,	// (0x000397c6) bg_popup_window_pane_cp18_ParamLimits

0x3a3f,	// (0x0003aa62) heading_pane_cp70

0x57bf,	// (0x0003c7e2) popup_eswt_tasktip_window_t1_ParamLimits

0xbdac,	// (0x00042dcf) aid_touch_tab_arrow_left

0xbdc2,	// (0x00042de5) aid_touch_tab_arrow_right

0x928f,	// (0x000402b2) title_pane_g3_ParamLimits

0x928f,	// (0x000402b2) title_pane_g3

0xb906,	// (0x00042929) set_value_pane_g1

0xa883,	// (0x000418a6) popup_toolbar_trans_pane_ParamLimits

0x590b,	// (0x0003c92e) aid_size_cell_tb_trans_pane_ParamLimits

0xb947,	// (0x0004296a) bg_tb_trans_pane_ParamLimits

0x591d,	// (0x0003c940) grid_tb_trans_pane_ParamLimits

0xb43c,	// (0x0004245f) cont_note_pane_ParamLimits

0xb43c,	// (0x0004245f) cont_note_pane

0xb6c2,	// (0x000426e5) cont_snote2_single_text_pane_ParamLimits

0xb6c2,	// (0x000426e5) cont_snote2_single_text_pane

0xb6c2,	// (0x000426e5) cont_snote2_single_graphic_pane_ParamLimits

0xb6c2,	// (0x000426e5) cont_snote2_single_graphic_pane

0x2d8d,	// (0x00039db0) cont_note_wait_pane_ParamLimits

0x2d8d,	// (0x00039db0) cont_note_wait_pane

0x2d8d,	// (0x00039db0) cont_note_image_pane_ParamLimits

0x2d8d,	// (0x00039db0) cont_note_image_pane

0x59c5,	// (0x0003c9e8) popup_note2_window_g1_ParamLimits

0x59c5,	// (0x0003c9e8) popup_note2_window_g1

0x59f6,	// (0x0003ca19) popup_note2_window_t1_ParamLimits

0x59f6,	// (0x0003ca19) popup_note2_window_t1

0x5a3b,	// (0x0003ca5e) popup_note2_window_t2_ParamLimits

0x5a3b,	// (0x0003ca5e) popup_note2_window_t2

0x5a80,	// (0x0003caa3) popup_note2_window_t3_ParamLimits

0x5a80,	// (0x0003caa3) popup_note2_window_t3

0x5ac5,	// (0x0003cae8) popup_note2_window_t4_ParamLimits

0x5ac5,	// (0x0003cae8) popup_note2_window_t4

0xb4c0,	// (0x000424e3) popup_note2_window_t5_ParamLimits

0xb4c0,	// (0x000424e3) popup_note2_window_t5

0x0004,

0xfc73,	// (0x00046c96) popup_note2_window_t_ParamLimits

0xfc73,	// (0x00046c96) popup_note2_window_t

0x5af4,	// (0x0003cb17) popup_note2_image_window_g1_ParamLimits

0x5af4,	// (0x0003cb17) popup_note2_image_window_g1

0x5b00,	// (0x0003cb23) popup_note2_image_window_g2_ParamLimits

0x5b00,	// (0x0003cb23) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x00046ca1) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x00046ca1) popup_note2_image_window_g

0x5b12,	// (0x0003cb35) popup_note2_image_window_t1_ParamLimits

0x5b12,	// (0x0003cb35) popup_note2_image_window_t1

0x5b2a,	// (0x0003cb4d) popup_note2_image_window_t2_ParamLimits

0x5b2a,	// (0x0003cb4d) popup_note2_image_window_t2

0x5b42,	// (0x0003cb65) popup_note2_image_window_t3_ParamLimits

0x5b42,	// (0x0003cb65) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x00046ca6) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x00046ca6) popup_note2_image_window_t

0x2d9b,	// (0x00039dbe) popup_note2_wait_window_g1_ParamLimits

0x2d9b,	// (0x00039dbe) popup_note2_wait_window_g1

0x5b5e,	// (0x0003cb81) popup_note2_wait_window_g2_ParamLimits

0x5b5e,	// (0x0003cb81) popup_note2_wait_window_g2

0x2db3,	// (0x00039dd6) popup_note2_wait_window_g3_ParamLimits

0x2db3,	// (0x00039dd6) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x00046cad) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x00046cad) popup_note2_wait_window_g

0x5b6a,	// (0x0003cb8d) popup_note2_wait_window_t1_ParamLimits

0x5b6a,	// (0x0003cb8d) popup_note2_wait_window_t1

0x5b88,	// (0x0003cbab) popup_note2_wait_window_t2_ParamLimits

0x5b88,	// (0x0003cbab) popup_note2_wait_window_t2

0x5ba6,	// (0x0003cbc9) popup_note2_wait_window_t3_ParamLimits

0x5ba6,	// (0x0003cbc9) popup_note2_wait_window_t3

0x5bb8,	// (0x0003cbdb) popup_note2_wait_window_t4_ParamLimits

0x5bb8,	// (0x0003cbdb) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x00046cb4) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x00046cb4) popup_note2_wait_window_t

0x5bca,	// (0x0003cbed) wait_bar2_pane_ParamLimits

0x5bca,	// (0x0003cbed) wait_bar2_pane

0x5be2,	// (0x0003cc05) popup_snote2_single_text_window_g1_ParamLimits

0x5be2,	// (0x0003cc05) popup_snote2_single_text_window_g1

0x5c0a,	// (0x0003cc2d) popup_snote2_single_text_window_t1_ParamLimits

0x5c0a,	// (0x0003cc2d) popup_snote2_single_text_window_t1

0x5c56,	// (0x0003cc79) popup_snote2_single_text_window_t2_ParamLimits

0x5c56,	// (0x0003cc79) popup_snote2_single_text_window_t2

0x5ca2,	// (0x0003ccc5) popup_snote2_single_text_window_t3_ParamLimits

0x5ca2,	// (0x0003ccc5) popup_snote2_single_text_window_t3

0x5ce3,	// (0x0003cd06) popup_snote2_single_text_window_t4_ParamLimits

0x5ce3,	// (0x0003cd06) popup_snote2_single_text_window_t4

0x5d19,	// (0x0003cd3c) popup_snote2_single_text_window_t5_ParamLimits

0x5d19,	// (0x0003cd3c) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x00046cbd) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x00046cbd) popup_snote2_single_text_window_t

0x5d44,	// (0x0003cd67) popup_snote2_single_graphic_window_g1_ParamLimits

0x5d44,	// (0x0003cd67) popup_snote2_single_graphic_window_g1

0x5d6c,	// (0x0003cd8f) popup_snote2_single_graphic_window_g2_ParamLimits

0x5d6c,	// (0x0003cd8f) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x00046cc8) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x00046cc8) popup_snote2_single_graphic_window_g

0x5d94,	// (0x0003cdb7) popup_snote2_single_graphic_window_t1_ParamLimits

0x5d94,	// (0x0003cdb7) popup_snote2_single_graphic_window_t1

0x5de0,	// (0x0003ce03) popup_snote2_single_graphic_window_t2_ParamLimits

0x5de0,	// (0x0003ce03) popup_snote2_single_graphic_window_t2

0x5ca2,	// (0x0003ccc5) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ca2,	// (0x0003ccc5) popup_snote2_single_graphic_window_t3

0x5ce3,	// (0x0003cd06) popup_snote2_single_graphic_window_t4_ParamLimits

0x5ce3,	// (0x0003cd06) popup_snote2_single_graphic_window_t4

0x5d19,	// (0x0003cd3c) popup_snote2_single_graphic_window_t5_ParamLimits

0x5d19,	// (0x0003cd3c) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x00046ccd) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x00046ccd) popup_snote2_single_graphic_window_t

0x4842,	// (0x0003b865) clock_nsta_pane_cp2_t1

0x4842,	// (0x0003b865) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x00046ae6) clock_nsta_pane_cp2_t

0xd002,	// (0x00044025) form_field_data_wide_pane_g1_ParamLimits

0xb955,	// (0x00042978) form_field_data_wide_pane_g2_ParamLimits

0xb955,	// (0x00042978) form_field_data_wide_pane_g2

0xb961,	// (0x00042984) form_field_data_wide_pane_g3_ParamLimits

0xb961,	// (0x00042984) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0004669e) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0004669e) form_field_data_wide_pane_g

0xc636,	// (0x00043659) grid_touch_3_pane_ParamLimits

0xc636,	// (0x00043659) grid_touch_3_pane

0xcb56,	// (0x00043b79) cell_touch_3_pane_ParamLimits

0xcb56,	// (0x00043b79) cell_touch_3_pane

0x4d3e,	// (0x0003bd61) cell_touch_3_pane_g1

0x4d3e,	// (0x0003bd61) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00046b6b) cell_touch_3_pane_g

0xb518,	// (0x0004253b) cont_query_data_pane

0xb520,	// (0x00042543) cont_query_data_pane_cp1

0x5e5f,	// (0x0003ce82) button_value_adjust_pane_cp7

0x5e67,	// (0x0003ce8a) query_popup_pane_cp3

0xef77,	// (0x00045f9a) bg_popup_sub_pane_cp22_ParamLimits

0xef8d,	// (0x00045fb0) navi_navi_volume_pane_cp2

0xefa8,	// (0x00045fcb) popup_side_volume_key_window_g2

0xefb7,	// (0x00045fda) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00046734) popup_side_volume_key_window_g

0xefd4,	// (0x00045ff7) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0004673b) popup_side_volume_key_window_t

0xf384,	// (0x000463a7) popup_side_volume_key_window_ParamLimits

0x9765,	// (0x00040788) list_double_graphic_pane_g4_ParamLimits

0x9765,	// (0x00040788) list_double_graphic_pane_g4

0xab5e,	// (0x00041b81) list_single_2heading_msg_pane_ParamLimits

0xab5e,	// (0x00041b81) list_single_2heading_msg_pane

0xabf7,	// (0x00041c1a) list_single_2heading_msg_pane_g1_ParamLimits

0xabf7,	// (0x00041c1a) list_single_2heading_msg_pane_g1

0xac03,	// (0x00041c26) list_single_2heading_msg_pane_g2_ParamLimits

0xac03,	// (0x00041c26) list_single_2heading_msg_pane_g2

0xac16,	// (0x00041c39) list_single_2heading_msg_pane_g3_ParamLimits

0xac16,	// (0x00041c39) list_single_2heading_msg_pane_g3

0xac22,	// (0x00041c45) list_single_2heading_msg_pane_g4_ParamLimits

0xac22,	// (0x00041c45) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x00046cd8) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x00046cd8) list_single_2heading_msg_pane_g

0xac3a,	// (0x00041c5d) list_single_2heading_msg_pane_t1_ParamLimits

0xac3a,	// (0x00041c5d) list_single_2heading_msg_pane_t1

0xac62,	// (0x00041c85) list_single_2heading_msg_pane_t2_ParamLimits

0xac62,	// (0x00041c85) list_single_2heading_msg_pane_t2

0xaccd,	// (0x00041cf0) list_single_2heading_msg_pane_t3_ParamLimits

0xaccd,	// (0x00041cf0) list_single_2heading_msg_pane_t3

0xec8d,	// (0x00045cb0) list_single_2heading_msg_pane_t4_ParamLimits

0xec8d,	// (0x00045cb0) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x00046ce1) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x00046ce1) list_single_2heading_msg_pane_t

0x85c9,	// (0x0003f5ec) title_pane_g4_ParamLimits

0x85c9,	// (0x0003f5ec) title_pane_g4

0xed1c,	// (0x00045d3f) title_pane_stacon_g3_ParamLimits

0xed1c,	// (0x00045d3f) title_pane_stacon_g3

0x5988,	// (0x0003c9ab) list_single_2graphic_im_pane_g4_ParamLimits

0x5988,	// (0x0003c9ab) list_single_2graphic_im_pane_g4

0x37fd,	// (0x0003a820) popup_side_volume_key_window_cp

0x406c,	// (0x0003b08f) main_idle_act2_pane_t1

0x070b,	// (0x0003772e) toolbar_button_pane_g10

0x960c,	// (0x0004062f) popup_toolbar_window_cp1

0x4833,	// (0x0003b856) clock_nsta_pane_cp_t1

0x4833,	// (0x0003b856) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x00046ae1) clock_nsta_pane_cp_t

0xef8d,	// (0x00045fb0) navi_navi_volume_pane_cp2_ParamLimits

0xef9c,	// (0x00045fbf) popup_side_volume_key_window_g1_ParamLimits

0xefa8,	// (0x00045fcb) popup_side_volume_key_window_g2_ParamLimits

0xefb7,	// (0x00045fda) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00046734) popup_side_volume_key_window_g_ParamLimits

0x0c50,	// (0x00037c73) fep_hwr_aid_pane

0x0cf9,	// (0x00037d1c) bg_fep_hwr_top_pane_g4_ParamLimits

0x4d87,	// (0x0003bdaa) fep_hwr_top_pane_g1_ParamLimits

0x4d99,	// (0x0003bdbc) fep_hwr_top_pane_g2_ParamLimits

0x0d19,	// (0x00037d3c) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x00046b36) fep_hwr_top_pane_g_ParamLimits

0x0d2e,	// (0x00037d51) fep_hwr_top_text_pane_ParamLimits

0x35b2,	// (0x0003a5d5) aid_touch_tab_arrow_arrow_2

0x35bb,	// (0x0003a5de) aid_touch_tab_arrow_left_2

0x0c64,	// (0x00037c87) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0c9b,	// (0x00037cbe) fep_hwr_prediction_pane

0x4eef,	// (0x0003bf12) fep_vkb_prediction_pane

0xc92f,	// (0x00043952) fep_vkb_side_pane_g3_ParamLimits

0xc92f,	// (0x00043952) fep_vkb_side_pane_g3

0x0ebd,	// (0x00037ee0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f2e,	// (0x00037f51) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f3b,	// (0x00037f5e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00046be5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1165,	// (0x00038188) fep_hwr_prediction_pane_g1

0x116f,	// (0x00038192) fep_hwr_prediction_pane_g2

0x1177,	// (0x0003819a) fep_hwr_prediction_pane_g3

0x117f,	// (0x000381a2) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x00046cea) fep_hwr_prediction_pane_g

0x5e8e,	// (0x0003ceb1) fep_vkb_prediction_pane_g1

0x5e98,	// (0x0003cebb) fep_vkb_prediction_pane_g2

0x5ea0,	// (0x0003cec3) fep_vkb_prediction_pane_g3

0x5ea8,	// (0x0003cecb) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00046cf3) fep_vkb_prediction_pane_g

0x0a5c,	// (0x00037a7f) slider_set_pane_g3

0x0a70,	// (0x00037a93) slider_set_pane_g4

0x0a88,	// (0x00037aab) slider_set_pane_g5

0x0a5c,	// (0x00037a7f) slider_set_pane_g6

0x0a9e,	// (0x00037ac1) slider_set_pane_g7

0x3c78,	// (0x0003ac9b) slider_form_pane_g3

0x3c81,	// (0x0003aca4) slider_form_pane_g4

0x3c89,	// (0x0003acac) slider_form_pane_g5

0x3c78,	// (0x0003ac9b) slider_form_pane_g6

0xc493,	// (0x000434b6) slider_form_pane_g7

0x431a,	// (0x0003b33d) slider_set_pane_vc_g3

0x4323,	// (0x0003b346) slider_set_pane_vc_g4

0x432c,	// (0x0003b34f) slider_set_pane_vc_g5

0x431a,	// (0x0003b33d) slider_set_pane_vc_g6

0x4335,	// (0x0003b358) slider_set_pane_vc_g7

0x4509,	// (0x0003b52c) slider_form_pane_vc_g1

0x4512,	// (0x0003b535) slider_form_pane_vc_g2

0x451b,	// (0x0003b53e) slider_form_pane_vc_g3

0x4509,	// (0x0003b52c) slider_form_pane_vc_g4

0x4524,	// (0x0003b547) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00046ab3) slider_form_pane_vc_g

0xe8a0,	// (0x000458c3) main_idle_act3_pane

0x5eb0,	// (0x0003ced3) ai3_links_pane

0xcba2,	// (0x00043bc5) popup_ai3_data_window_ParamLimits

0xcba2,	// (0x00043bc5) popup_ai3_data_window

0x85ab,	// (0x0003f5ce) grid_ai3_links_pane

0xcbc0,	// (0x00043be3) cell_ai3_links_pane_ParamLimits

0xcbc0,	// (0x00043be3) cell_ai3_links_pane

0x5ef1,	// (0x0003cf14) bg_popup_sub_pane_cp11

0x5efe,	// (0x0003cf21) cell_ai3_links_pane_g1

0x85ab,	// (0x0003f5ce) bg_popup_sub_pane_cp12

0x5f23,	// (0x0003cf46) heading_ai3_data_pane

0x5f2b,	// (0x0003cf4e) list_ai3_gene_pane

0x5f37,	// (0x0003cf5a) popup_ai3_data_window_g1

0x5f3f,	// (0x0003cf62) heading_ai3_data_pane_g1

0x5f47,	// (0x0003cf6a) heading_ai3_data_pane_t1

0x5f55,	// (0x0003cf78) list_double_ai3_gene_pane_ParamLimits

0x5f55,	// (0x0003cf78) list_double_ai3_gene_pane

0x5f62,	// (0x0003cf85) list_single_ai3_gene_pane_ParamLimits

0x5f62,	// (0x0003cf85) list_single_ai3_gene_pane

0x4d03,	// (0x0003bd26) list_highlight_pane_cp7_ParamLimits

0x4d03,	// (0x0003bd26) list_highlight_pane_cp7

0x5f6f,	// (0x0003cf92) list_single_a13_gene_pane_t1_ParamLimits

0x5f6f,	// (0x0003cf92) list_single_a13_gene_pane_t1

0x5f86,	// (0x0003cfa9) list_single_ai3_gene_pane_g1

0x5f8f,	// (0x0003cfb2) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x00046cfc) list_single_ai3_gene_pane_g

0x5f97,	// (0x0003cfba) list_double_ai3_gene_pane_g1_ParamLimits

0x5f97,	// (0x0003cfba) list_double_ai3_gene_pane_g1

0x5fa3,	// (0x0003cfc6) list_double_ai3_gene_pane_t1_ParamLimits

0x5fa3,	// (0x0003cfc6) list_double_ai3_gene_pane_t1

0x5fbf,	// (0x0003cfe2) list_double_ai3_gene_pane_t2_ParamLimits

0x5fbf,	// (0x0003cfe2) list_double_ai3_gene_pane_t2

0x5fd4,	// (0x0003cff7) list_double_ai3_gene_pane_t3_ParamLimits

0x5fd4,	// (0x0003cff7) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x00046d01) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x00046d01) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xec83,	// (0x00045ca6) aid_size_min_col_2

0xcb8c,	// (0x00043baf) aid_size_min_msg_ParamLimits

0xcb8c,	// (0x00043baf) aid_size_min_msg

0xc943,	// (0x00043966) fep_vkb_top_text_pane_g2_ParamLimits

0xc943,	// (0x00043966) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x00046b66) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x00046b66) fep_vkb_top_text_pane_g

0xe8a0,	// (0x000458c3) main_hc_apps_shell_pane

0x5ff1,	// (0x0003d014) grid_hc_apps_pane_ParamLimits

0x5ff1,	// (0x0003d014) grid_hc_apps_pane

0x6000,	// (0x0003d023) list_hc_apps_pane

0x6008,	// (0x0003d02b) scroll_pane_cp37_ParamLimits

0x6008,	// (0x0003d02b) scroll_pane_cp37

0xcbda,	// (0x00043bfd) cell_hc_apps_pane_ParamLimits

0xcbda,	// (0x00043bfd) cell_hc_apps_pane

0xcca4,	// (0x00043cc7) cell_hc_apps_pane_g1_ParamLimits

0xcca4,	// (0x00043cc7) cell_hc_apps_pane_g1

0x60fd,	// (0x0003d120) cell_hc_apps_pane_g2_ParamLimits

0x60fd,	// (0x0003d120) cell_hc_apps_pane_g2

0x6119,	// (0x0003d13c) cell_hc_apps_pane_g3_ParamLimits

0x6119,	// (0x0003d13c) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x00046d08) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x00046d08) cell_hc_apps_pane_g

0xccd1,	// (0x00043cf4) cell_hc_apps_pane_t1_ParamLimits

0xccd1,	// (0x00043cf4) cell_hc_apps_pane_t1

0xb43c,	// (0x0004245f) grid_highlight_pane_cp10_ParamLimits

0xb43c,	// (0x0004245f) grid_highlight_pane_cp10

0xcd11,	// (0x00043d34) list_single_hc_apps_pane_ParamLimits

0xcd11,	// (0x00043d34) list_single_hc_apps_pane

0xcd4b,	// (0x00043d6e) list_single_hc_apps_pane_g1

0xad3b,	// (0x00041d5e) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x00046d0f) list_single_hc_apps_pane_g

0xad54,	// (0x00041d77) list_single_hc_apps_pane_g2_copy1

0xad70,	// (0x00041d93) list_single_hc_apps_pane_t1

0x860d,	// (0x0003f630) bg_set_opt_pane_cp_ParamLimits

0xe9c3,	// (0x000459e6) setting_slider_pane_t1_ParamLimits

0xe9dc,	// (0x000459ff) setting_slider_pane_t2_ParamLimits

0xe9f6,	// (0x00045a19) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00046581) setting_slider_pane_t_ParamLimits

0xea0e,	// (0x00045a31) slider_set_pane_ParamLimits

0xf53f,	// (0x00046562) control_pane_g5_ParamLimits

0xf53f,	// (0x00046562) control_pane_g5

0x3aab,	// (0x0003aace) slider_set_pane_g1_ParamLimits

0x0a50,	// (0x00037a73) slider_set_pane_g2_ParamLimits

0x0a5c,	// (0x00037a7f) slider_set_pane_g3_ParamLimits

0x0a70,	// (0x00037a93) slider_set_pane_g4_ParamLimits

0x0a88,	// (0x00037aab) slider_set_pane_g5_ParamLimits

0x0a5c,	// (0x00037a7f) slider_set_pane_g6_ParamLimits

0x0a9e,	// (0x00037ac1) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00046982) slider_set_pane_g_ParamLimits

0xf469,	// (0x0004648c) navi_icon_text_pane_ParamLimits

0xbd73,	// (0x00042d96) aid_fill_nsta_2_ParamLimits

0xbdac,	// (0x00042dcf) aid_touch_tab_arrow_left_ParamLimits

0xbdc2,	// (0x00042de5) aid_touch_tab_arrow_right_ParamLimits

0xbe5d,	// (0x00042e80) clock_nsta_pane_ParamLimits

0xc2d3,	// (0x000432f6) navi_icon_pane_g1_ParamLimits

0xc2df,	// (0x00043302) navi_text_pane_t1_ParamLimits

0xc701,	// (0x00043724) navi_icon_text_pane_g1_ParamLimits

0xc70d,	// (0x00043730) navi_icon_text_pane_t1_ParamLimits

0xcd4b,	// (0x00043d6e) list_single_hc_apps_pane_g1_ParamLimits

0xad3b,	// (0x00041d5e) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x00046d0f) list_single_hc_apps_pane_g_ParamLimits

0xad54,	// (0x00041d77) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xad70,	// (0x00041d93) list_single_hc_apps_pane_t1_ParamLimits

0x917e,	// (0x000401a1) popup_toolbar2_fixed_window_ParamLimits

0x917e,	// (0x000401a1) popup_toolbar2_fixed_window

0xa879,	// (0x0004189c) popup_toolbar2_float_window

0x85ab,	// (0x0003f5ce) bg_popup_sub_pane_cp27

0x61d3,	// (0x0003d1f6) grid_toolbar2_float_pane

0x85ab,	// (0x0003f5ce) bg_popup_sub_pane_cp26

0x61d3,	// (0x0003d1f6) grid_toolbar2_fixed_pane

0xcd64,	// (0x00043d87) cell_toolbar2_fixed_pane_ParamLimits

0xcd64,	// (0x00043d87) cell_toolbar2_fixed_pane

0xcd7e,	// (0x00043da1) cell_toolbar2_fixed_pane_g1

0x61f4,	// (0x0003d217) toolbar2_fixed_button_pane

0x272f,	// (0x00039752) toolbar2_fixed_button_pane_g1

0x273f,	// (0x00039762) toolbar2_fixed_button_pane_g2

0x2737,	// (0x0003975a) toolbar2_fixed_button_pane_g3

0x274f,	// (0x00039772) toolbar2_fixed_button_pane_g4

0x2747,	// (0x0003976a) toolbar2_fixed_button_pane_g5

0x2757,	// (0x0003977a) toolbar2_fixed_button_pane_g6

0x275f,	// (0x00039782) toolbar2_fixed_button_pane_g7

0x276f,	// (0x00039792) toolbar2_fixed_button_pane_g8

0x2767,	// (0x0003978a) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00046884) toolbar2_fixed_button_pane_g

0x61fc,	// (0x0003d21f) cell_toolbar2_float_pane_ParamLimits

0x61fc,	// (0x0003d21f) cell_toolbar2_float_pane

0x620d,	// (0x0003d230) cell_toolbar2_float_pane_g1

0x61f4,	// (0x0003d217) toolbar2_fixed_button_pane_cp

0xc82b,	// (0x0004384e) fep_vkb_accented_list_pane_ParamLimits

0xc82b,	// (0x0004384e) fep_vkb_accented_list_pane

0x0e9d,	// (0x00037ec0) bg_popup_fep_shadow_pane_g9

0x1ed0,	// (0x00038ef3) bg_popup_fep_shadow_pane_cp3

0xba57,	// (0x00042a7a) list_accented_list_pane

0x6216,	// (0x0003d239) list_single_accented_list_pane_ParamLimits

0x6216,	// (0x0003d239) list_single_accented_list_pane

0x1ed0,	// (0x00038ef3) list_highlight_pane_cp10

0x6227,	// (0x0003d24a) list_single_accented_list_pane_t1

0xa797,	// (0x000417ba) popup_slider_window_ParamLimits

0xa797,	// (0x000417ba) popup_slider_window

0x5e6f,	// (0x0003ce92) aid_indentation_list_msg

0xd5c3,	// (0x000445e6) bg_popup_window_pane_cp19

0x6363,	// (0x0003d386) popup_slider_window_g1

0x637f,	// (0x0003d3a2) popup_slider_window_g2

0x639b,	// (0x0003d3be) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x00046d14) popup_slider_window_g

0x6401,	// (0x0003d424) popup_slider_window_t1

0x6475,	// (0x0003d498) small_volume_slider_vertical_pane

0x4d3e,	// (0x0003bd61) small_volume_slider_vertical_pane_g1

0x4d3e,	// (0x0003bd61) small_volume_slider_vertical_pane_g2

0x6491,	// (0x0003d4b4) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x00046d26) small_volume_slider_vertical_pane_g

0x90e8,	// (0x0004010b) area_side_right_pane_ParamLimits

0x90e8,	// (0x0004010b) area_side_right_pane

0xad9e,	// (0x00041dc1) aid_size_side_button_ParamLimits

0xad9e,	// (0x00041dc1) aid_size_side_button

0xadb7,	// (0x00041dda) grid_sctrl_middle_pane_ParamLimits

0xadb7,	// (0x00041dda) grid_sctrl_middle_pane

0x121d,	// (0x00038240) sctrl_sk_bottom_pane

0x122e,	// (0x00038251) sctrl_sk_top_pane

0x1240,	// (0x00038263) aid_touch_sctrl_top

0x124d,	// (0x00038270) bg_sctrl_sk_pane_ParamLimits

0x124d,	// (0x00038270) bg_sctrl_sk_pane

0x125b,	// (0x0003827e) sctrl_sk_top_pane_g1

0x1268,	// (0x0003828b) sctrl_sk_top_pane_t1

0x1240,	// (0x00038263) aid_touch_sctrl_bottom

0x124d,	// (0x00038270) bg_sctrl_sk_pane_cp_ParamLimits

0x124d,	// (0x00038270) bg_sctrl_sk_pane_cp

0x1283,	// (0x000382a6) sctrl_sk_bottom_pane_g1

0x1268,	// (0x0003828b) sctrl_sk_bottom_pane_t1

0xadd1,	// (0x00041df4) cell_sctrl_middle_pane_ParamLimits

0xadd1,	// (0x00041df4) cell_sctrl_middle_pane

0xade4,	// (0x00041e07) aid_touch_sctrl_middle_ParamLimits

0xade4,	// (0x00041e07) aid_touch_sctrl_middle

0xadf1,	// (0x00041e14) bg_sctrl_middle_pane_ParamLimits

0xadf1,	// (0x00041e14) bg_sctrl_middle_pane

0x1906,	// (0x00038929) cell_sctrl_middle_pane_g1_ParamLimits

0x1906,	// (0x00038929) cell_sctrl_middle_pane_g1

0xadff,	// (0x00041e22) cell_sctrl_middle_pane_g2_ParamLimits

0xadff,	// (0x00041e22) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x00046d32) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x00046d32) cell_sctrl_middle_pane_g

0x272f,	// (0x00039752) bg_sctrl_middle_pane_g1

0x2737,	// (0x0003975a) bg_sctrl_middle_pane_g2

0x273f,	// (0x00039762) bg_sctrl_middle_pane_g3

0x2747,	// (0x0003976a) bg_sctrl_middle_pane_g4

0x274f,	// (0x00039772) bg_sctrl_middle_pane_g5

0x2757,	// (0x0003977a) bg_sctrl_middle_pane_g6

0x275f,	// (0x00039782) bg_sctrl_middle_pane_g7

0x2767,	// (0x0003978a) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x00046d37) bg_sctrl_middle_pane_g

0x276f,	// (0x00039792) bg_sctrl_middle_pane_g8_copy1

0x272f,	// (0x00039752) bg_sctrl_sk_pane_g1

0x273f,	// (0x00039762) bg_sctrl_sk_pane_g2

0x2737,	// (0x0003975a) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00046884) bg_sctrl_sk_pane_g

0xb880,	// (0x000428a3) aid_size_touch_scroll_bar

0x274f,	// (0x00039772) bg_sctrl_sk_pane_g4

0x2747,	// (0x0003976a) bg_sctrl_sk_pane_g5

0x2757,	// (0x0003977a) bg_sctrl_sk_pane_g6

0x275f,	// (0x00039782) bg_sctrl_sk_pane_g7

0x276f,	// (0x00039792) bg_sctrl_sk_pane_g8

0x2767,	// (0x0003978a) bg_sctrl_sk_pane_g9

0x015a,	// (0x0003717d) popup_fep_china_hwr2_fs_candidate_window

0xa24f,	// (0x00041272) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa24f,	// (0x00041272) popup_fep_china_hwr2_fs_control_window

0x0ebd,	// (0x00037ee0) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x00046d2d) sctrl_sk_top_pane_g

0xd67b,	// (0x0004469e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd67b,	// (0x0004469e) aid_fep_china_hwr2_fs_cell

0xd691,	// (0x000446b4) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd691,	// (0x000446b4) bg_popup_fep_shadow_pane_cp4

0xd6a8,	// (0x000446cb) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd6a8,	// (0x000446cb) bg_popup_fep_shadow_pane_cp5

0xd6ba,	// (0x000446dd) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd6ba,	// (0x000446dd) popup_fep_china_hwr2_fs_control_bar_grid

0xd6ce,	// (0x000446f1) popup_fep_china_hwr2_fs_control_funtion_grid

0x64f0,	// (0x0003d513) aid_fep_china_hwr2_fs_candi_cell

0x85ab,	// (0x0003f5ce) bg_popup_fep_shadow_pane_cp6

0x64fa,	// (0x0003d51d) popup_fep_china_hwr2_fs_candidate_grid

0xd6d6,	// (0x000446f9) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd6d6,	// (0x000446f9) cell_fep_china_hwr2_fs_funtion_grid

0x4d3e,	// (0x0003bd61) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x651c,	// (0x0003d53f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x651c,	// (0x0003d53f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x652a,	// (0x0003d54d) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x652a,	// (0x0003d54d) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x00046d48) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x00046d48) cell_fep_china_hwr2_fs_funtion_grid_g

0xd6ee,	// (0x00044711) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd6ee,	// (0x00044711) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd703,	// (0x00044726) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd703,	// (0x00044726) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x00046d4d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x00046d4d) cell_fep_china_hwr2_fs_funtion_grid_t

0x6571,	// (0x0003d594) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6579,	// (0x0003d59c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6581,	// (0x0003d5a4) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x00046d52) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6589,	// (0x0003d5ac) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6589,	// (0x0003d5ac) cell_fep_china_hwr2_fs_candidate_grid

0x65a8,	// (0x0003d5cb) popup_fep_china_hwr2_fs_candidate_grid_g20

0x65b0,	// (0x0003d5d3) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4d3e,	// (0x0003bd61) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4d3e,	// (0x0003bd61) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00046b6b) cell_fep_china_hwr2_fs_candidate_grid_g

0x65b8,	// (0x0003d5db) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2317,	// (0x0003933a) clock_nsta_pane_cp_24_ParamLimits

0x2317,	// (0x0003933a) clock_nsta_pane_cp_24

0x2397,	// (0x000393ba) indicator_nsta_pane_cp_24_ParamLimits

0x2397,	// (0x000393ba) indicator_nsta_pane_cp_24

0x3410,	// (0x0003a433) heading_pane_g1

0x0001,

0xf8c6,	// (0x000468e9) heading_pane_g

0x3eb3,	// (0x0003aed6) grid_sct_catagory_button_pane

0x3ee5,	// (0x0003af08) scroll_pane_cp5_ParamLimits

0x499e,	// (0x0003b9c1) button_value_adjust_pane_cp5_ParamLimits

0x499e,	// (0x0003b9c1) button_value_adjust_pane_cp5

0x4a83,	// (0x0003baa6) form2_midp_time_pane_ParamLimits

0x65c6,	// (0x0003d5e9) cell_sct_catagory_button_pane_ParamLimits

0x65c6,	// (0x0003d5e9) cell_sct_catagory_button_pane

0x4d03,	// (0x0003bd26) bg_button_pane_cp01_ParamLimits

0x4d03,	// (0x0003bd26) bg_button_pane_cp01

0x4d3e,	// (0x0003bd61) cell_sct_catagory_button_pane_g1

0xa816,	// (0x00041839) popup_tb_extension_window

0xd71f,	// (0x00044742) aid_size_cell_ext_ParamLimits

0xd71f,	// (0x00044742) aid_size_cell_ext

0xb6c2,	// (0x000426e5) bg_tb_trans_pane_cp1_ParamLimits

0xb6c2,	// (0x000426e5) bg_tb_trans_pane_cp1

0xd745,	// (0x00044768) grid_tb_ext_pane_ParamLimits

0xd745,	// (0x00044768) grid_tb_ext_pane

0xd782,	// (0x000447a5) cell_tb_ext_pane_ParamLimits

0xd782,	// (0x000447a5) cell_tb_ext_pane

0xd7aa,	// (0x000447cd) cell_tb_ext_pane_g1_ParamLimits

0xd7aa,	// (0x000447cd) cell_tb_ext_pane_g1

0x665a,	// (0x0003d67d) cell_tb_ext_pane_t1

0xb43c,	// (0x0004245f) list_highlight_pane_cp11_ParamLimits

0xb43c,	// (0x0004245f) list_highlight_pane_cp11

0x9193,	// (0x000401b6) popup_uni_indicator_window_ParamLimits

0x9193,	// (0x000401b6) popup_uni_indicator_window

0xb947,	// (0x0004296a) bg_popup_sub_pane_cp14

0x6675,	// (0x0003d698) list_uniindi_pane

0x6681,	// (0x0003d6a4) uniindi_top_pane

0xb43c,	// (0x0004245f) bg_uniindi_top_pane

0x66a2,	// (0x0003d6c5) uniindi_top_pane_g1

0x66b8,	// (0x0003d6db) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x00046d59) uniindi_top_pane_g

0x66e2,	// (0x0003d705) uniindi_top_pane_t1

0x670e,	// (0x0003d731) list_single_uniindi_pane_ParamLimits

0x670e,	// (0x0003d731) list_single_uniindi_pane

0x4d3e,	// (0x0003bd61) bg_uniindi_top_pane_g1

0x6720,	// (0x0003d743) list_single_uniindi_pane_g1

0x6733,	// (0x0003d756) list_single_uniindi_pane_t1

0xe8a0,	// (0x000458c3) control_bg_pane

0x6758,	// (0x0003d77b) bg_sctrl_sk_pane_cp1

0x6761,	// (0x0003d784) bg_sctrl_sk_pane_cp2

0x676a,	// (0x0003d78d) control_bg_pane_g1

0x6773,	// (0x0003d796) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x00046d62) control_bg_pane_g

0x47e7,	// (0x0003b80a) cell_indicator_nsta_pane_g1_ParamLimits

0xc663,	// (0x00043686) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x00046acf) cell_indicator_nsta_pane_g_ParamLimits

0xd560,	// (0x00044583) form2_midp_time_pane_t1_ParamLimits

0x0c42,	// (0x00037c65) main_idle_act4_pane_ParamLimits

0x0c42,	// (0x00037c65) main_idle_act4_pane

0xa816,	// (0x00041839) popup_tb_extension_window_ParamLimits

0xd76a,	// (0x0004478d) tb_ext_find_pane_ParamLimits

0xd76a,	// (0x0004478d) tb_ext_find_pane

0x677c,	// (0x0003d79f) ai_gene_pane_1_cp1

0x201a,	// (0x0003903d) ai_gene_pane_2_cp1

0x6784,	// (0x0003d7a7) list_single_idle_plugin_calendar_pane

0x678d,	// (0x0003d7b0) list_single_idle_plugin_notification_pane

0x6796,	// (0x0003d7b9) list_single_idle_plugin_player_pane

0xd7c7,	// (0x000447ea) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd7c7,	// (0x000447ea) list_single_idle_plugin_shortcut_pane

0xd7ef,	// (0x00044812) main_idle_act4_pane_t1

0xd807,	// (0x0004482a) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x00046d67) main_idle_act4_pane_t

0xd81f,	// (0x00044842) middle_sk_idle_act4_pane_ParamLimits

0xd81f,	// (0x00044842) middle_sk_idle_act4_pane

0xd83b,	// (0x0004485e) popup_clock_digital_analogue_window_cp2

0xd862,	// (0x00044885) shortcut_wheel_idle_act4_pane_ParamLimits

0xd862,	// (0x00044885) shortcut_wheel_idle_act4_pane

0x4d3e,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g1

0x4d3e,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g2

0x4d3e,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g3

0x4d3e,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g4

0x4d3e,	// (0x0003bd61) shortcut_wheel_idle_act4_pane_g5

0x6829,	// (0x0003d84c) shortcut_wheel_idle_act4_pane_g6

0x6831,	// (0x0003d854) shortcut_wheel_idle_act4_pane_g7

0x6839,	// (0x0003d85c) shortcut_wheel_idle_act4_pane_g8

0x6841,	// (0x0003d864) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x00046d6c) shortcut_wheel_idle_act4_pane_g

0xce81,	// (0x00043ea4) middle_sk_idle_act4_pane_g1_ParamLimits

0xce81,	// (0x00043ea4) middle_sk_idle_act4_pane_g1

0xd8df,	// (0x00044902) middle_sk_idle_act4_pane_g2_ParamLimits

0xd8df,	// (0x00044902) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x00046d8f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x00046d8f) middle_sk_idle_act4_pane_g

0xd8f7,	// (0x0004491a) middle_sk_idle_act4_pane_t1_ParamLimits

0xd8f7,	// (0x0004491a) middle_sk_idle_act4_pane_t1

0xd926,	// (0x00044949) grid_ai_shortcut_pane_ParamLimits

0xd926,	// (0x00044949) grid_ai_shortcut_pane

0xd943,	// (0x00044966) list_highlight_pane_cp16_ParamLimits

0xd943,	// (0x00044966) list_highlight_pane_cp16

0xd950,	// (0x00044973) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd950,	// (0x00044973) list_single_idle_plugin_shortcut_pane_g1

0xd95c,	// (0x0004497f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd95c,	// (0x0004497f) list_single_idle_plugin_shortcut_pane_g2

0xd97a,	// (0x0004499d) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd97a,	// (0x0004499d) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x00046d94) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x00046d94) list_single_idle_plugin_shortcut_pane_g

0xd98f,	// (0x000449b2) cell_ai_shortcut_pane_ParamLimits

0xd98f,	// (0x000449b2) cell_ai_shortcut_pane

0xd9a5,	// (0x000449c8) cell_ai_shortcut_pane_g1_ParamLimits

0xd9a5,	// (0x000449c8) cell_ai_shortcut_pane_g1

0x677c,	// (0x0003d79f) ai_gene_pane_1_cp2

0x6972,	// (0x0003d995) ai_gene_pane_2_cp2

0x697a,	// (0x0003d99d) list_highlight_pane_cp15

0x6983,	// (0x0003d9a6) list_single_idle_plugin_calendar_pane_g1

0x697a,	// (0x0003d99d) list_highlight_pane_cp17

0x698b,	// (0x0003d9ae) list_single_idle_plugin_calendar_pane_g1_copy1

0x6993,	// (0x0003d9b6) list_single_idle_plugin_player_pane_g1

0x411a,	// (0x0003b13d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x00046d9b) list_single_idle_plugin_player_pane_g

0x699b,	// (0x0003d9be) list_single_idle_plugin_player_pane_t1

0x69a9,	// (0x0003d9cc) list_single_idle_plugin_player_pane_t2

0x69b7,	// (0x0003d9da) list_single_idle_plugin_player_pane_t3

0x69c5,	// (0x0003d9e8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x00046da0) list_single_idle_plugin_player_pane_t

0x69d3,	// (0x0003d9f6) wait_bar_pane_cp15

0x69db,	// (0x0003d9fe) grid_ai_notification_pane

0x411a,	// (0x0003b13d) list_single_idle_plugin_notification_pane_g1

0xd9c7,	// (0x000449ea) cell_ai_notification_pane_ParamLimits

0xd9c7,	// (0x000449ea) cell_ai_notification_pane

0x69f1,	// (0x0003da14) cell_ai_notification_pane_g1

0x69f9,	// (0x0003da1c) cell_ai_notification_pane_t1

0xd9d4,	// (0x000449f7) tb_ext_find_button_pane

0xd9dc,	// (0x000449ff) tb_ext_find_pane_g1

0xd9e4,	// (0x00044a07) tb_ext_find_pane_t1

0xee9d,	// (0x00045ec0) tb_ext_find_button_pane_g1

0x6a25,	// (0x0003da48) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x00046da9) tb_ext_find_button_pane_g

0xd7ef,	// (0x00044812) main_idle_act4_pane_t1_ParamLimits

0xd807,	// (0x0004482a) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x00046d67) main_idle_act4_pane_t_ParamLimits

0xd83b,	// (0x0004485e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd852,	// (0x00044875) sat_plugin_idle_act4_pane_ParamLimits

0xd852,	// (0x00044875) sat_plugin_idle_act4_pane

0xd9f2,	// (0x00044a15) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9f2,	// (0x00044a15) sat_plugin_idle_act4_pane_t1

0xda0a,	// (0x00044a2d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda0a,	// (0x00044a2d) sat_plugin_idle_act4_pane_t2

0xda22,	// (0x00044a45) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda22,	// (0x00044a45) sat_plugin_idle_act4_pane_t3

0xda3a,	// (0x00044a5d) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda3a,	// (0x00044a5d) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x00046dae) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x00046dae) sat_plugin_idle_act4_pane_t

0xe965,	// (0x00045988) popup_battery_window_ParamLimits

0xe965,	// (0x00045988) popup_battery_window

0xb43c,	// (0x0004245f) bg_popup_sub_pane_cp25_ParamLimits

0xb43c,	// (0x0004245f) bg_popup_sub_pane_cp25

0x6a7a,	// (0x0003da9d) popup_battery_window_g1_ParamLimits

0x6a7a,	// (0x0003da9d) popup_battery_window_g1

0x6a86,	// (0x0003daa9) popup_battery_window_t1_ParamLimits

0x6a86,	// (0x0003daa9) popup_battery_window_t1

0x6a98,	// (0x0003dabb) popup_battery_window_t2_ParamLimits

0x6a98,	// (0x0003dabb) popup_battery_window_t2

0x0001,

0xfd94,	// (0x00046db7) popup_battery_window_t_ParamLimits

0xfd94,	// (0x00046db7) popup_battery_window_t

0x9ed0,	// (0x00040ef3) midp_canvas_pane_ParamLimits

0x9f2c,	// (0x00040f4f) midp_keypad_pane_ParamLimits

0x9f2c,	// (0x00040f4f) midp_keypad_pane

0x21ff,	// (0x00039222) main_midp_pane_ParamLimits

0x4851,	// (0x0003b874) signal_pane_g2_cp_ParamLimits

0xda52,	// (0x00044a75) aid_size_cell_midp_keypad_ParamLimits

0xda52,	// (0x00044a75) aid_size_cell_midp_keypad

0xda70,	// (0x00044a93) midp_keyp_game_grid_pane_ParamLimits

0xda70,	// (0x00044a93) midp_keyp_game_grid_pane

0xda97,	// (0x00044aba) midp_keyp_rocker_pane_ParamLimits

0xda97,	// (0x00044aba) midp_keyp_rocker_pane

0xdae6,	// (0x00044b09) midp_keyp_sk_left_pane_ParamLimits

0xdae6,	// (0x00044b09) midp_keyp_sk_left_pane

0xdb3c,	// (0x00044b5f) midp_keyp_sk_right_pane_ParamLimits

0xdb3c,	// (0x00044b5f) midp_keyp_sk_right_pane

0x85ab,	// (0x0003f5ce) bg_button_pane_cp03

0xdb92,	// (0x00044bb5) midp_keyp_sk_left_pane_g1

0x85ab,	// (0x0003f5ce) bg_button_pane_cp04

0xdb92,	// (0x00044bb5) midp_keyp_sk_right_pane_g1

0x4d3e,	// (0x0003bd61) midp_keyp_rocker_pane_g1

0xdb9a,	// (0x00044bbd) keyp_game_cell_pane_ParamLimits

0xdb9a,	// (0x00044bbd) keyp_game_cell_pane

0x85ab,	// (0x0003f5ce) bg_button_pane_cp02

0xdbc0,	// (0x00044be3) keyp_game_cell_pane_g1

0x912a,	// (0x0004014d) popup_fep_vkb2_window_ParamLimits

0x912a,	// (0x0004014d) popup_fep_vkb2_window

0xae0b,	// (0x00041e2e) aid_size_cell_vkb2_ParamLimits

0xae0b,	// (0x00041e2e) aid_size_cell_vkb2

0xae41,	// (0x00041e64) popup_fep_vkb2_window_g1_ParamLimits

0xae41,	// (0x00041e64) popup_fep_vkb2_window_g1

0xae91,	// (0x00041eb4) vkb2_area_bottom_pane_ParamLimits

0xae91,	// (0x00041eb4) vkb2_area_bottom_pane

0xaeed,	// (0x00041f10) vkb2_area_keypad_pane_ParamLimits

0xaeed,	// (0x00041f10) vkb2_area_keypad_pane

0xaf3b,	// (0x00041f5e) vkb2_area_top_pane_ParamLimits

0xaf3b,	// (0x00041f5e) vkb2_area_top_pane

0xafc1,	// (0x00041fe4) vkb2_top_entry_pane_ParamLimits

0xafc1,	// (0x00041fe4) vkb2_top_entry_pane

0xafee,	// (0x00042011) vkb2_top_grid_left_pane_ParamLimits

0xafee,	// (0x00042011) vkb2_top_grid_left_pane

0xb00e,	// (0x00042031) vkb2_top_grid_right_pane_ParamLimits

0xb00e,	// (0x00042031) vkb2_top_grid_right_pane

0x14fd,	// (0x00038520) vkb2_cell_keypad_pane_ParamLimits

0x14fd,	// (0x00038520) vkb2_cell_keypad_pane

0xb054,	// (0x00042077) vkb2_area_bottom_grid_pane_ParamLimits

0xb054,	// (0x00042077) vkb2_area_bottom_grid_pane

0xb07e,	// (0x000420a1) vkb2_area_bottom_pane_g1_ParamLimits

0xb07e,	// (0x000420a1) vkb2_area_bottom_pane_g1

0xb0a4,	// (0x000420c7) vkb2_area_bottom_pane_g2_ParamLimits

0xb0a4,	// (0x000420c7) vkb2_area_bottom_pane_g2

0xb0d5,	// (0x000420f8) vkb2_area_bottom_pane_g3_ParamLimits

0xb0d5,	// (0x000420f8) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x00046dbc) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x00046dbc) vkb2_area_bottom_pane_g

0x16a7,	// (0x000386ca) vkb2_top_cell_left_pane_ParamLimits

0x16a7,	// (0x000386ca) vkb2_top_cell_left_pane

0xdbc9,	// (0x00044bec) vkb2_top_entry_pane_g1_ParamLimits

0xdbc9,	// (0x00044bec) vkb2_top_entry_pane_g1

0xdbd7,	// (0x00044bfa) vkb2_top_entry_pane_t1_ParamLimits

0xdbd7,	// (0x00044bfa) vkb2_top_entry_pane_t1

0x6c42,	// (0x0003dc65) vkb2_top_entry_pane_t2_ParamLimits

0x6c42,	// (0x0003dc65) vkb2_top_entry_pane_t2

0x6c74,	// (0x0003dc97) vkb2_top_entry_pane_t3_ParamLimits

0x6c74,	// (0x0003dc97) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x00046dc3) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x00046dc3) vkb2_top_entry_pane_t

0xb13f,	// (0x00042162) vkb2_top_grid_right_pane_g1_ParamLimits

0xb13f,	// (0x00042162) vkb2_top_grid_right_pane_g1

0x170a,	// (0x0003872d) vkb2_top_grid_right_pane_g2_ParamLimits

0x170a,	// (0x0003872d) vkb2_top_grid_right_pane_g2

0x1722,	// (0x00038745) vkb2_top_grid_right_pane_g3_ParamLimits

0x1722,	// (0x00038745) vkb2_top_grid_right_pane_g3

0xb155,	// (0x00042178) vkb2_top_grid_right_pane_g4_ParamLimits

0xb155,	// (0x00042178) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x00046dca) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x00046dca) vkb2_top_grid_right_pane_g

0x1750,	// (0x00038773) vkb2_top_cell_left_pane_g1

0x1767,	// (0x0003878a) vkb2_cell_keypad_pane_g1_ParamLimits

0x1767,	// (0x0003878a) vkb2_cell_keypad_pane_g1

0x6c98,	// (0x0003dcbb) vkb2_cell_keypad_pane_t1_ParamLimits

0x6c98,	// (0x0003dcbb) vkb2_cell_keypad_pane_t1

0x1775,	// (0x00038798) vkb2_cell_bottom_grid_pane_ParamLimits

0x1775,	// (0x00038798) vkb2_cell_bottom_grid_pane

0x17ae,	// (0x000387d1) vkb2_cell_bottom_grid_pane_g1

0xd883,	// (0x000448a6) aid_call2_pane_cp02

0xd88b,	// (0x000448ae) aid_call_pane_cp02

0xd893,	// (0x000448b6) clock_digital_number_pane_cp10

0xd89b,	// (0x000448be) clock_digital_number_pane_cp11

0xd8a3,	// (0x000448c6) clock_digital_number_pane_cp12

0xd8ab,	// (0x000448ce) clock_digital_number_pane_cp13

0xd8b3,	// (0x000448d6) clock_digital_separator_pane_cp10

0xee9d,	// (0x00045ec0) popup_clock_digital_analogue_window_cp2_g1

0xee9d,	// (0x00045ec0) popup_clock_digital_analogue_window_cp2_g2

0xd8bb,	// (0x000448de) popup_clock_digital_analogue_window_cp2_g3

0xee9d,	// (0x00045ec0) popup_clock_digital_analogue_window_cp2_g4

0xd8bb,	// (0x000448de) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x00046d7f) popup_clock_digital_analogue_window_cp2_g

0xd8c3,	// (0x000448e6) popup_clock_digital_analogue_window_cp2_t1

0xd8d1,	// (0x000448f4) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x00046d8a) popup_clock_digital_analogue_window_cp2_t

0x4d3e,	// (0x0003bd61) clock_digital_number_pane_cp10_g1

0x4d3e,	// (0x0003bd61) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00046b6b) clock_digital_number_pane_cp10_g

0x4d3e,	// (0x0003bd61) clock_digital_separator_pane_cp10_g1

0x4d3e,	// (0x0003bd61) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00046b6b) clock_digital_separator_pane_cp10_g

0x66c4,	// (0x0003d6e7) uniindi_top_pane_g3

0x66d5,	// (0x0003d6f8) uniindi_top_pane_g4

0x1588,	// (0x000385ab) vkb2_row_keypad_pane_ParamLimits

0x1588,	// (0x000385ab) vkb2_row_keypad_pane

0x17ca,	// (0x000387ed) vkb2_cell_t_keypad_pane_ParamLimits

0x17ca,	// (0x000387ed) vkb2_cell_t_keypad_pane

0x17da,	// (0x000387fd) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17da,	// (0x000387fd) vkb2_cell_t_keypad_pane_cp08

0x17ef,	// (0x00038812) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17ef,	// (0x00038812) vkb2_cell_t_keypad_pane_cp09

0x1803,	// (0x00038826) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x1803,	// (0x00038826) vkb2_cell_t_keypad_pane_cp01

0x1814,	// (0x00038837) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1814,	// (0x00038837) vkb2_cell_t_keypad_pane_cp02

0x1825,	// (0x00038848) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1825,	// (0x00038848) vkb2_cell_t_keypad_pane_cp03

0x1836,	// (0x00038859) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1836,	// (0x00038859) vkb2_cell_t_keypad_pane_cp04

0x1847,	// (0x0003886a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1847,	// (0x0003886a) vkb2_cell_t_keypad_pane_cp05

0x1858,	// (0x0003887b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x1858,	// (0x0003887b) vkb2_cell_t_keypad_pane_cp06

0x186b,	// (0x0003888e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x186b,	// (0x0003888e) vkb2_cell_t_keypad_pane_cp07

0x1880,	// (0x000388a3) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x1880,	// (0x000388a3) vkb2_cell_t_keypad_pane_cp10

0x0ebd,	// (0x00037ee0) vkb2_cell_t_keypad_pane_g1

0x6caf,	// (0x0003dcd2) vkb2_cell_t_keypad_pane_t1

0xe8a0,	// (0x000458c3) popup_grid_graphic2_window

0xdc10,	// (0x00044c33) aid_size_cell_graphic2_ParamLimits

0xdc10,	// (0x00044c33) aid_size_cell_graphic2

0xdc4e,	// (0x00044c71) bg_popup_window_pane_cp21_ParamLimits

0xdc4e,	// (0x00044c71) bg_popup_window_pane_cp21

0xdc5c,	// (0x00044c7f) graphic2_pages_pane_ParamLimits

0xdc5c,	// (0x00044c7f) graphic2_pages_pane

0xdcb4,	// (0x00044cd7) grid_graphic2_control_pane_ParamLimits

0xdcb4,	// (0x00044cd7) grid_graphic2_control_pane

0xdcfc,	// (0x00044d1f) grid_graphic2_pane_ParamLimits

0xdcfc,	// (0x00044d1f) grid_graphic2_pane

0xdd87,	// (0x00044daa) cell_graphic2_pane

0xe8a0,	// (0x000458c3) main_comp_mode_pane

0x5f2b,	// (0x0003cf4e) list_ai3_gene_pane_ParamLimits

0xd5c3,	// (0x000445e6) bg_popup_window_pane_cp19_ParamLimits

0x6303,	// (0x0003d326) bg_touch_area_indi_pane_ParamLimits

0x6303,	// (0x0003d326) bg_touch_area_indi_pane

0x6319,	// (0x0003d33c) bg_touch_area_indi_pane_cp01_ParamLimits

0x6319,	// (0x0003d33c) bg_touch_area_indi_pane_cp01

0x632f,	// (0x0003d352) bg_touch_area_indi_pane_cp02_ParamLimits

0x632f,	// (0x0003d352) bg_touch_area_indi_pane_cp02

0x6349,	// (0x0003d36c) bg_touch_area_indi_pane_cp03_ParamLimits

0x6349,	// (0x0003d36c) bg_touch_area_indi_pane_cp03

0x6363,	// (0x0003d386) popup_slider_window_g1_ParamLimits

0x637f,	// (0x0003d3a2) popup_slider_window_g2_ParamLimits

0x639b,	// (0x0003d3be) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x00046d14) popup_slider_window_g_ParamLimits

0x6401,	// (0x0003d424) popup_slider_window_t1_ParamLimits

0x6475,	// (0x0003d498) small_volume_slider_vertical_pane_ParamLimits

0xdd87,	// (0x00044daa) cell_graphic2_pane_ParamLimits

0xddea,	// (0x00044e0d) bg_button_pane_cp10_ParamLimits

0xddea,	// (0x00044e0d) bg_button_pane_cp10

0xddfd,	// (0x00044e20) bg_button_pane_cp11_ParamLimits

0xddfd,	// (0x00044e20) bg_button_pane_cp11

0xde10,	// (0x00044e33) graphic2_pages_pane_g1_ParamLimits

0xde10,	// (0x00044e33) graphic2_pages_pane_g1

0xde2b,	// (0x00044e4e) graphic2_pages_pane_g2_ParamLimits

0xde2b,	// (0x00044e4e) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x00046dd8) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x00046dd8) graphic2_pages_pane_g

0xde43,	// (0x00044e66) graphic2_pages_pane_t1_ParamLimits

0xde43,	// (0x00044e66) graphic2_pages_pane_t1

0xde5b,	// (0x00044e7e) cell_graphic2_control_pane_ParamLimits

0xde5b,	// (0x00044e7e) cell_graphic2_control_pane

0xde8f,	// (0x00044eb2) cell_graphic2_pane_g1_ParamLimits

0xde8f,	// (0x00044eb2) cell_graphic2_pane_g1

0xce8f,	// (0x00043eb2) cell_graphic2_pane_g2_ParamLimits

0xce8f,	// (0x00043eb2) cell_graphic2_pane_g2

0xd573,	// (0x00044596) cell_graphic2_pane_g3_ParamLimits

0xd573,	// (0x00044596) cell_graphic2_pane_g3

0xce9c,	// (0x00043ebf) cell_graphic2_pane_g4_ParamLimits

0xce9c,	// (0x00043ebf) cell_graphic2_pane_g4

0xde9c,	// (0x00044ebf) cell_graphic2_pane_g5_ParamLimits

0xde9c,	// (0x00044ebf) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x00046ddd) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x00046ddd) cell_graphic2_pane_g

0xdebc,	// (0x00044edf) cell_graphic2_pane_t1_ParamLimits

0xdebc,	// (0x00044edf) cell_graphic2_pane_t1

0x3404,	// (0x0003a427) grid_highlight_pane_cp11_ParamLimits

0x3404,	// (0x0003a427) grid_highlight_pane_cp11

0xb43c,	// (0x0004245f) bg_button_pane_cp05

0xdf05,	// (0x00044f28) cell_graphic2_control_pane_g1

0x4d3e,	// (0x0003bd61) bg_touch_area_indi_pane_g1

0x6fb8,	// (0x0003dfdb) aid_cmod_rocker_key_size

0x6fc2,	// (0x0003dfe5) aid_cmode_itu_key_size

0x6fcc,	// (0x0003dfef) main_cmode_video_pane

0x6fd6,	// (0x0003dff9) main_comp_mode_itu_pane

0x6fe2,	// (0x0003e005) main_comp_mode_rocker_pane

0x6fee,	// (0x0003e011) cell_cmode_rocker_pane_ParamLimits

0x6fee,	// (0x0003e011) cell_cmode_rocker_pane

0x7002,	// (0x0003e025) cell_cmode_itu_pane_ParamLimits

0x7002,	// (0x0003e025) cell_cmode_itu_pane

0xb947,	// (0x0004296a) bg_button_pane_cp06_ParamLimits

0xb947,	// (0x0004296a) bg_button_pane_cp06

0x4fa1,	// (0x0003bfc4) cell_cmode_rocker_pane_g1_ParamLimits

0x4fa1,	// (0x0003bfc4) cell_cmode_rocker_pane_g1

0x651c,	// (0x0003d53f) cell_cmode_rocker_pane_g2_ParamLimits

0x651c,	// (0x0003d53f) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x00046ded) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x00046ded) cell_cmode_rocker_pane_g

0x85ab,	// (0x0003f5ce) bg_button_pane_cp07

0x7019,	// (0x0003e03c) cell_cmode_itu_pane_g1

0x7022,	// (0x0003e045) cell_cmode_itu_pane_t1

0x7030,	// (0x0003e053) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x00046df2) cell_cmode_itu_pane_t

0x6748,	// (0x0003d76b) aid_touch_ctrl_left

0x6750,	// (0x0003d773) aid_touch_ctrl_right

0x85ab,	// (0x0003f5ce) compa_mode_pane

0xdf2d,	// (0x00044f50) aid_cmod_rocker_key_size_cp

0xdf37,	// (0x00044f5a) aid_cmode_itu_key_size_cp

0x7052,	// (0x0003e075) compa_mode_pane_g1

0x705a,	// (0x0003e07d) compa_mode_pane_g2

0x7062,	// (0x0003e085) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x00046df7) compa_mode_pane_g

0xdf41,	// (0x00044f64) main_comp_mode_itu_pane_cp

0xdf49,	// (0x00044f6c) main_comp_mode_rocker_pane_cp

0xdf51,	// (0x00044f74) cell_cmode_itu_pane_cp_ParamLimits

0xdf51,	// (0x00044f74) cell_cmode_itu_pane_cp

0xdf66,	// (0x00044f89) cell_cmode_rocker_pane_cp_ParamLimits

0xdf66,	// (0x00044f89) cell_cmode_rocker_pane_cp

0xb947,	// (0x0004296a) bg_button_pane_cp06_cp_ParamLimits

0xb947,	// (0x0004296a) bg_button_pane_cp06_cp

0x4fa1,	// (0x0003bfc4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4fa1,	// (0x0003bfc4) cell_cmode_rocker_pane_g1_cp

0x4d3e,	// (0x0003bd61) cell_cmode_rocker_pane_g2_cp

0x85ab,	// (0x0003f5ce) bg_button_pane_cp07_cp

0xdf78,	// (0x00044f9b) cell_cmode_itu_pane_g1_cp

0xdf81,	// (0x00044fa4) cell_cmode_itu_pane_t1_cp

0xdf81,	// (0x00044fa4) cell_cmode_itu_pane_t2_cp

0xc48b,	// (0x000434ae) settings_code_pane_cp2

0x860d,	// (0x0003f630) bg_popup_window_pane_cp3_ParamLimits

0xb650,	// (0x00042673) heading_pane_cp3_ParamLimits

0xb65c,	// (0x0004267f) listscroll_popup_graphic_pane_ParamLimits

0x0c50,	// (0x00037c73) fep_hwr_aid_pane_ParamLimits

0x1240,	// (0x00038263) aid_touch_sctrl_top_ParamLimits

0x125b,	// (0x0003827e) sctrl_sk_top_pane_g1_ParamLimits

0x0ebd,	// (0x00037ee0) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x00046d2d) sctrl_sk_top_pane_g_ParamLimits

0x1268,	// (0x0003828b) sctrl_sk_top_pane_t1_ParamLimits

0x1240,	// (0x00038263) aid_touch_sctrl_bottom_ParamLimits

0x1268,	// (0x0003828b) sctrl_sk_bottom_pane_t1_ParamLimits

0x668e,	// (0x0003d6b1) aid_area_touch_clock

0xaf83,	// (0x00041fa6) aid_vkb2_area_top_pane_cell_ParamLimits

0xaf83,	// (0x00041fa6) aid_vkb2_area_top_pane_cell

0xb02e,	// (0x00042051) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb02e,	// (0x00042051) aid_vkb2_area_bottom_pane_cell

0x6bfa,	// (0x0003dc1d) popup_char_count_window

0x70b8,	// (0x0003e0db) popup_char_count_window_g1

0x70c1,	// (0x0003e0e4) popup_char_count_window_g2

0x70ca,	// (0x0003e0ed) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x00046dfe) popup_char_count_window_g

0x70d3,	// (0x0003e0f6) popup_char_count_window_t1

0x1319,	// (0x0003833c) popup_fep_char_preview_window_ParamLimits

0x1319,	// (0x0003833c) popup_fep_char_preview_window

0xafa3,	// (0x00041fc6) vkb2_top_candi_pane_ParamLimits

0xafa3,	// (0x00041fc6) vkb2_top_candi_pane

0xdf8f,	// (0x00044fb2) cell_vkb2_top_candi_pane_ParamLimits

0xdf8f,	// (0x00044fb2) cell_vkb2_top_candi_pane

0x1895,	// (0x000388b8) bg_popup_fep_char_preview_window_ParamLimits

0x1895,	// (0x000388b8) bg_popup_fep_char_preview_window

0x18a3,	// (0x000388c6) popup_fep_char_preview_window_t1_ParamLimits

0x18a3,	// (0x000388c6) popup_fep_char_preview_window_t1

0x7132,	// (0x0003e155) bg_popup_fep_char_preview_window_g1

0x713a,	// (0x0003e15d) bg_popup_fep_char_preview_window_g2

0x7142,	// (0x0003e165) bg_popup_fep_char_preview_window_g3

0x714a,	// (0x0003e16d) bg_popup_fep_char_preview_window_g4

0x7152,	// (0x0003e175) bg_popup_fep_char_preview_window_g5

0x18dd,	// (0x00038900) bg_popup_fep_char_preview_window_g6

0x715a,	// (0x0003e17d) bg_popup_fep_char_preview_window_g7

0x7162,	// (0x0003e185) bg_popup_fep_char_preview_window_g8

0x716a,	// (0x0003e18d) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x00046e05) bg_popup_fep_char_preview_window_g

0x0ebd,	// (0x00037ee0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0ebd,	// (0x00037ee0) cell_vkb2_top_candi_pane_g1

0x0ecb,	// (0x00037eee) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0ecb,	// (0x00037eee) cell_vkb2_top_candi_pane_g2

0x6f5c,	// (0x0003df7f) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6f5c,	// (0x0003df7f) cell_vkb2_top_candi_pane_g3

0x18e5,	// (0x00038908) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18e5,	// (0x00038908) cell_vkb2_top_candi_pane_g4

0x54c0,	// (0x0003c4e3) cell_vkb2_top_candi_pane_g5_ParamLimits

0x54c0,	// (0x0003c4e3) cell_vkb2_top_candi_pane_g5

0x1906,	// (0x00038929) cell_vkb2_top_candi_pane_g6_ParamLimits

0x1906,	// (0x00038929) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x00046e18) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x00046e18) cell_vkb2_top_candi_pane_g

0x1914,	// (0x00038937) cell_vkb2_top_candi_pane_t1

0x0a3c,	// (0x00037a5f) aid_size_touch_slider_mark_ParamLimits

0x0a3c,	// (0x00037a5f) aid_size_touch_slider_mark

0xdc98,	// (0x00044cbb) grid_graphic2_catg_pane_ParamLimits

0xdc98,	// (0x00044cbb) grid_graphic2_catg_pane

0xdd56,	// (0x00044d79) popup_grid_graphic2_window_t1_ParamLimits

0xdd56,	// (0x00044d79) popup_grid_graphic2_window_t1

0xdd6c,	// (0x00044d8f) popup_grid_graphic2_window_t2_ParamLimits

0xdd6c,	// (0x00044d8f) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x00046dd3) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x00046dd3) popup_grid_graphic2_window_t

0xb43c,	// (0x0004245f) bg_button_pane_cp05_ParamLimits

0xdf05,	// (0x00044f28) cell_graphic2_control_pane_g1_ParamLimits

0xdff9,	// (0x0004501c) cell_graphic2_catg_pane_ParamLimits

0xdff9,	// (0x0004501c) cell_graphic2_catg_pane

0x85ab,	// (0x0003f5ce) bg_button_pane_cp12

0xe00b,	// (0x0004502e) cell_graphic2_catg_pane_g1

0x665a,	// (0x0003d67d) cell_tb_ext_pane_t1_ParamLimits

0x16c7,	// (0x000386ea) vkb2_top_cell_right_narrow_pane_ParamLimits

0x16c7,	// (0x000386ea) vkb2_top_cell_right_narrow_pane

0x16df,	// (0x00038702) vkb2_top_cell_right_wide_pane_ParamLimits

0x16df,	// (0x00038702) vkb2_top_cell_right_wide_pane

0x0c42,	// (0x00037c65) bg_vkb2_func_pane_ParamLimits

0x0c42,	// (0x00037c65) bg_vkb2_func_pane

0x1750,	// (0x00038773) vkb2_top_cell_left_pane_g1_ParamLimits

0x0c42,	// (0x00037c65) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0c42,	// (0x00037c65) bg_vkb2_fuc_pane_cp03

0x17ae,	// (0x000387d1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2737,	// (0x0003975a) bg_vkb2_func_pane_g1

0x273f,	// (0x00039762) bg_vkb2_func_pane_g2

0x274f,	// (0x00039772) bg_vkb2_func_pane_g3

0x2747,	// (0x0003976a) bg_vkb2_func_pane_g4

0x2757,	// (0x0003977a) bg_vkb2_func_pane_g5

0x275f,	// (0x00039782) bg_vkb2_func_pane_g6

0x2767,	// (0x0003978a) bg_vkb2_func_pane_g7

0x276f,	// (0x00039792) bg_vkb2_func_pane_g8

0x272f,	// (0x00039752) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x00046e25) bg_vkb2_func_pane_g

0x0c42,	// (0x00037c65) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0c42,	// (0x00037c65) bg_vkb2_fuc_pane_cp01

0x1750,	// (0x00038773) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1750,	// (0x00038773) vkb2_top_cell_right_wide_pane_g1

0x0c42,	// (0x00037c65) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0c42,	// (0x00037c65) bg_vkb2_fuc_pane_cp02

0x17ae,	// (0x000387d1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x17ae,	// (0x000387d1) vkb2_top_cell_right_narrow_pane_g1

0xcdc3,	// (0x00043de6) aid_touch_area_decrease_ParamLimits

0xcdc3,	// (0x00043de6) aid_touch_area_decrease

0xcdfd,	// (0x00043e20) aid_touch_area_increase_ParamLimits

0xcdfd,	// (0x00043e20) aid_touch_area_increase

0xce25,	// (0x00043e48) aid_touch_area_mute_ParamLimits

0xce25,	// (0x00043e48) aid_touch_area_mute

0xce4d,	// (0x00043e70) aid_touch_area_slider_ParamLimits

0xce4d,	// (0x00043e70) aid_touch_area_slider

0xd5cf,	// (0x000445f2) popup_slider_window_g4_ParamLimits

0xd5cf,	// (0x000445f2) popup_slider_window_g4

0xd5f7,	// (0x0004461a) popup_slider_window_g5_ParamLimits

0xd5f7,	// (0x0004461a) popup_slider_window_g5

0xd62b,	// (0x0004464e) popup_slider_window_g6_ParamLimits

0xd62b,	// (0x0004464e) popup_slider_window_g6

0x642f,	// (0x0003d452) popup_slider_window_t2_ParamLimits

0x642f,	// (0x0003d452) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x00046d21) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x00046d21) popup_slider_window_t

0xd647,	// (0x0004466a) slider_pane_ParamLimits

0xd647,	// (0x0004466a) slider_pane

0x718d,	// (0x0003e1b0) slider_pane_g1_ParamLimits

0x718d,	// (0x0003e1b0) slider_pane_g1

0x71a1,	// (0x0003e1c4) slider_pane_g2_ParamLimits

0x71a1,	// (0x0003e1c4) slider_pane_g2

0x71b7,	// (0x0003e1da) slider_pane_g3_ParamLimits

0x71b7,	// (0x0003e1da) slider_pane_g3

0x0003,

0xfe15,	// (0x00046e38) slider_pane_g_ParamLimits

0xfe15,	// (0x00046e38) slider_pane_g

0xa862,	// (0x00041885) popup_tb_float_extension_window_ParamLimits

0xa862,	// (0x00041885) popup_tb_float_extension_window

0x71e3,	// (0x0003e206) aid_size_cell_tb_float_ext

0x85ab,	// (0x0003f5ce) bg_popup_sub_window_cp28

0x71ef,	// (0x0003e212) grid_tb_float_ext_pane

0x71fb,	// (0x0003e21e) cell_tb_float_ext_pane_ParamLimits

0x71fb,	// (0x0003e21e) cell_tb_float_ext_pane

0x7217,	// (0x0003e23a) cell_tb_float_ext_pane_g1

0x7220,	// (0x0003e243) grid_highlight_pane_cp12

0xab9f,	// (0x00041bc2) cell_last_hwr_side_pane_ParamLimits

0xab9f,	// (0x00041bc2) cell_last_hwr_side_pane

0x4d3e,	// (0x0003bd61) cell_last_hwr_side_pane_g1

0x7229,	// (0x0003e24c) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x00046e41) cell_last_hwr_side_pane_g

0xb10a,	// (0x0004212d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb10a,	// (0x0004212d) vkb2_area_bottom_space_btn_pane

0x0ebd,	// (0x00037ee0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6caf,	// (0x0003dcd2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1914,	// (0x00038937) cell_vkb2_top_candi_pane_t1_ParamLimits

0x1932,	// (0x00038955) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x1932,	// (0x00038955) vkb2_area_bottom_space_btn_pane_g1

0x196c,	// (0x0003898f) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x196c,	// (0x0003898f) vkb2_area_bottom_space_btn_pane_g2

0x19a2,	// (0x000389c5) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x19a2,	// (0x000389c5) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x00046e46) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x00046e46) vkb2_area_bottom_space_btn_pane_g

0x0d07,	// (0x00037d2a) cel_fep_hwr_func_pane_ParamLimits

0x0d07,	// (0x00037d2a) cel_fep_hwr_func_pane

0xab74,	// (0x00041b97) cell_hwr_side_button_pane_ParamLimits

0xab74,	// (0x00041b97) cell_hwr_side_button_pane

0x668e,	// (0x0003d6b1) aid_area_touch_clock_ParamLimits

0xb43c,	// (0x0004245f) bg_uniindi_top_pane_ParamLimits

0x66a2,	// (0x0003d6c5) uniindi_top_pane_g1_ParamLimits

0x66b8,	// (0x0003d6db) uniindi_top_pane_g2_ParamLimits

0x66c4,	// (0x0003d6e7) uniindi_top_pane_g3_ParamLimits

0x66d5,	// (0x0003d6f8) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x00046d59) uniindi_top_pane_g_ParamLimits

0x66e2,	// (0x0003d705) uniindi_top_pane_t1_ParamLimits

0xb43c,	// (0x0004245f) bg_vkb2_func_pane_cp01_ParamLimits

0xb43c,	// (0x0004245f) bg_vkb2_func_pane_cp01

0x7232,	// (0x0003e255) cel_fep_hwr_func_pane_g1_ParamLimits

0x7232,	// (0x0003e255) cel_fep_hwr_func_pane_g1

0xb43c,	// (0x0004245f) bg_vkb2_func_pane_cp02_ParamLimits

0xb43c,	// (0x0004245f) bg_vkb2_func_pane_cp02

0x7232,	// (0x0003e255) cell_hwr_side_button_pane_g1_ParamLimits

0x7232,	// (0x0003e255) cell_hwr_side_button_pane_g1

0x25b4,	// (0x000395d7) status_pane_g4_ParamLimits

0x25b4,	// (0x000395d7) status_pane_g4

0x25ce,	// (0x000395f1) status_pane_t1

0x4af1,	// (0x0003bb14) form2_midp_gauge_slider_cont_pane

0x4af9,	// (0x0003bb1c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc75c,	// (0x0004377f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc76e,	// (0x00043791) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00046b1e) form2_midp_gauge_slider_pane_t_ParamLimits

0x4b2f,	// (0x0003bb52) form2_midp_slider_pane_ParamLimits

0x12d9,	// (0x000382fc) aid_size_cell_func_vkb2_ParamLimits

0x12d9,	// (0x000382fc) aid_size_cell_func_vkb2

0x71cf,	// (0x0003e1f2) slider_pane_g4_ParamLimits

0x71cf,	// (0x0003e1f2) slider_pane_g4

0xb16b,	// (0x0004218e) form2_midp_gauge_slider_pane_t2_cp01

0xb179,	// (0x0004219c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb179,	// (0x0004219c) form2_midp_gauge_slider_pane_t3_cp01

0x1a17,	// (0x00038a3a) form2_midp_slider_pane_cp01

0x85ab,	// (0x0003f5ce) navi_smil_pane

0x726b,	// (0x0003e28e) navi_smil_pane_g1

0x7273,	// (0x0003e296) navi_smil_pane_t1

0x7240,	// (0x0003e263) form2_midp_slider_pane_g1

0x7249,	// (0x0003e26c) form2_midp_slider_pane_g2

0x7251,	// (0x0003e274) form2_midp_slider_pane_g3

0x7240,	// (0x0003e263) form2_midp_slider_pane_g4

0xe014,	// (0x00045037) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x00046e4f) form2_midp_slider_pane_g

0x19dc,	// (0x000389ff) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19dc,	// (0x000389ff) vkb2_area_bottom_space_btn_pane_g4

0xbea8,	// (0x00042ecb) lc0_navi_pane_ParamLimits

0xbea8,	// (0x00042ecb) lc0_navi_pane

0xbf18,	// (0x00042f3b) lc0_stat_indi_pane_ParamLimits

0xbf18,	// (0x00042f3b) lc0_stat_indi_pane

0xbf2d,	// (0x00042f50) ls0_title_pane_ParamLimits

0xbf2d,	// (0x00042f50) ls0_title_pane

0xb947,	// (0x0004296a) bg_popup_sub_pane_cp14_ParamLimits

0x6675,	// (0x0003d698) list_uniindi_pane_ParamLimits

0x6681,	// (0x0003d6a4) uniindi_top_pane_ParamLimits

0x6720,	// (0x0003d743) list_single_uniindi_pane_g1_ParamLimits

0x6733,	// (0x0003d756) list_single_uniindi_pane_t1_ParamLimits

0xb196,	// (0x000421b9) lc0_stat_clock_pane_ParamLimits

0xb196,	// (0x000421b9) lc0_stat_clock_pane

0xe01d,	// (0x00045040) lc0_stat_indi_pane_g1_ParamLimits

0xe01d,	// (0x00045040) lc0_stat_indi_pane_g1

0xe02a,	// (0x0004504d) lc0_stat_indi_pane_g2_ParamLimits

0xe02a,	// (0x0004504d) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x00046e5a) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x00046e5a) lc0_stat_indi_pane_g

0xb1a3,	// (0x000421c6) lc0_uni_indicator_pane_ParamLimits

0xb1a3,	// (0x000421c6) lc0_uni_indicator_pane

0xe037,	// (0x0004505a) ls0_title_pane_g1_ParamLimits

0xe037,	// (0x0004505a) ls0_title_pane_g1

0xe04b,	// (0x0004506e) ls0_title_pane_t1_ParamLimits

0xe04b,	// (0x0004506e) ls0_title_pane_t1

0xb1b0,	// (0x000421d3) lc0_uni_indicator_pane_g1_ParamLimits

0xb1b0,	// (0x000421d3) lc0_uni_indicator_pane_g1

0x72e5,	// (0x0003e308) lc0_stat_clock_pane_t1

0xe8a0,	// (0x000458c3) main_ai5_pane

0x72f3,	// (0x0003e316) ai5_sk_pane_ParamLimits

0x72f3,	// (0x0003e316) ai5_sk_pane

0xe079,	// (0x0004509c) cell_ai5_widget_pane_ParamLimits

0xe079,	// (0x0004509c) cell_ai5_widget_pane

0xe3d3,	// (0x000453f6) aid_size_cell_widget_grid

0x78b0,	// (0x0003e8d3) bg_ai5_widget_pane_ParamLimits

0x78b0,	// (0x0003e8d3) bg_ai5_widget_pane

0xe407,	// (0x0004542a) cell_ai5_widget_pane_g2

0xe41b,	// (0x0004543e) cell_ai5_widget_pane_g3

0xe435,	// (0x00045458) cell_ai5_widget_pane_g4

0xe445,	// (0x00045468) cell_ai5_widget_pane_g5

0xe455,	// (0x00045478) cell_ai5_widget_pane_g6

0xe461,	// (0x00045484) cell_ai5_widget_pane_g7

0xe46d,	// (0x00045490) cell_ai5_widget_pane_t1_ParamLimits

0xe46d,	// (0x00045490) cell_ai5_widget_pane_t1

0x79e7,	// (0x0003ea0a) cell_ai5_widget_pane_t2_ParamLimits

0x79e7,	// (0x0003ea0a) cell_ai5_widget_pane_t2

0x79ff,	// (0x0003ea22) cell_ai5_widget_pane_t3_ParamLimits

0x79ff,	// (0x0003ea22) cell_ai5_widget_pane_t3

0xe48a,	// (0x000454ad) cell_ai5_widget_pane_t4_ParamLimits

0xe48a,	// (0x000454ad) cell_ai5_widget_pane_t4

0xe4b0,	// (0x000454d3) cell_ai5_widget_pane_t5_ParamLimits

0xe4b0,	// (0x000454d3) cell_ai5_widget_pane_t5

0x7a5d,	// (0x0003ea80) cell_ai5_widget_pane_t6_ParamLimits

0x7a5d,	// (0x0003ea80) cell_ai5_widget_pane_t6

0x7a6f,	// (0x0003ea92) cell_ai5_widget_pane_t7_ParamLimits

0x7a6f,	// (0x0003ea92) cell_ai5_widget_pane_t7

0x7a88,	// (0x0003eaab) cell_ai5_widget_pane_t8_ParamLimits

0x7a88,	// (0x0003eaab) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x00046e74) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x00046e74) cell_ai5_widget_pane_t

0xe51d,	// (0x00045540) grid_ai5_widget_pane

0xb947,	// (0x0004296a) highlight_cell_ai5_widget_pane_ParamLimits

0xb947,	// (0x0004296a) highlight_cell_ai5_widget_pane

0xe52b,	// (0x0004554e) ai5_sk_left_pane

0xe535,	// (0x00045558) ai5_sk_middle_pane

0xe53f,	// (0x00045562) ai5_sk_right_pane

0x7b13,	// (0x0003eb36) bg_ai5_widget_pane_g1_ParamLimits

0x7b13,	// (0x0003eb36) bg_ai5_widget_pane_g1

0x7b1f,	// (0x0003eb42) bg_ai5_widget_pane_g2_ParamLimits

0x7b1f,	// (0x0003eb42) bg_ai5_widget_pane_g2

0x7b2b,	// (0x0003eb4e) bg_ai5_widget_pane_g3_ParamLimits

0x7b2b,	// (0x0003eb4e) bg_ai5_widget_pane_g3

0x7b37,	// (0x0003eb5a) bg_ai5_widget_pane_g4_ParamLimits

0x7b37,	// (0x0003eb5a) bg_ai5_widget_pane_g4

0x7b43,	// (0x0003eb66) bg_ai5_widget_pane_g5_ParamLimits

0x7b43,	// (0x0003eb66) bg_ai5_widget_pane_g5

0x7b4f,	// (0x0003eb72) bg_ai5_widget_pane_g6_ParamLimits

0x7b4f,	// (0x0003eb72) bg_ai5_widget_pane_g6

0x7b5b,	// (0x0003eb7e) bg_ai5_widget_pane_g7_ParamLimits

0x7b5b,	// (0x0003eb7e) bg_ai5_widget_pane_g7

0x7b67,	// (0x0003eb8a) bg_ai5_widget_pane_g8_ParamLimits

0x7b67,	// (0x0003eb8a) bg_ai5_widget_pane_g8

0x7b73,	// (0x0003eb96) bg_ai5_widget_pane_g9_ParamLimits

0x7b73,	// (0x0003eb96) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x00046e89) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x00046e89) bg_ai5_widget_pane_g

0xe575,	// (0x00045598) cell_shortcut_ai5_widget_pane_ParamLimits

0xe575,	// (0x00045598) cell_shortcut_ai5_widget_pane

0x1ed0,	// (0x00038ef3) bg_cell_shortcut_ai5_widget_pane

0x7bbe,	// (0x0003ebe1) cell_grid_ai5_widget_pane_g1

0x1ed0,	// (0x00038ef3) highlight_cell_shortcut_ai5_widget_pane

0x2737,	// (0x0003975a) ai5_sk_left_pane_g1

0x7bc7,	// (0x0003ebea) ai5_sk_left_pane_g2

0x7bcf,	// (0x0003ebf2) ai5_sk_left_pane_g3

0x7bd7,	// (0x0003ebfa) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x00046e9c) ai5_sk_left_pane_g

0x7bdf,	// (0x0003ec02) ai5_sk_left_pane_t1

0x273f,	// (0x00039762) ai5_sk_right_pane_g1

0x7bed,	// (0x0003ec10) ai5_sk_right_pane_g2

0x7bf5,	// (0x0003ec18) ai5_sk_right_pane_g3

0x7bfd,	// (0x0003ec20) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x00046ea5) ai5_sk_right_pane_g

0x7c05,	// (0x0003ec28) ai5_sk_right_pane_t1

0x273f,	// (0x00039762) ai5_sk_middle_pane_g1

0x2737,	// (0x0003975a) ai5_sk_middle_pane_g2

0x2757,	// (0x0003977a) ai5_sk_middle_pane_g3

0x7bf5,	// (0x0003ec18) ai5_sk_middle_pane_g4

0x7bcf,	// (0x0003ebf2) ai5_sk_middle_pane_g5

0x7c13,	// (0x0003ec36) ai5_sk_middle_pane_g6

0xe588,	// (0x000455ab) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x00046eae) ai5_sk_middle_pane_g

0xbd92,	// (0x00042db5) aid_touch_area_size_lc0_ParamLimits

0xbd92,	// (0x00042db5) aid_touch_area_size_lc0

0x0eec,	// (0x00037f0f) cell_hwr_candidate_pane_t1_ParamLimits

0x227d,	// (0x000392a0) aid_touch_navi_pane

0xc038,	// (0x0004305b) status_dt_navi_pane_ParamLimits

0xc038,	// (0x0004305b) status_dt_navi_pane

0xc050,	// (0x00043073) status_dt_sta_pane_ParamLimits

0xc050,	// (0x00043073) status_dt_sta_pane

0xe590,	// (0x000455b3) dt_sta_controll_pane

0xe59d,	// (0x000455c0) dt_sta_indi_pane

0xe5aa,	// (0x000455cd) dt_sta_title_pane

0xb43c,	// (0x0004245f) bg_dt_sta_indi_pane_ParamLimits

0xb43c,	// (0x0004245f) bg_dt_sta_indi_pane

0xe5bc,	// (0x000455df) dt_sta_battery_pane

0xe5c4,	// (0x000455e7) dt_sta_indi_pane_g1

0xe5cd,	// (0x000455f0) dt_sta_indi_pane_g2

0xe5d6,	// (0x000455f9) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x00046ebd) dt_sta_indi_pane_g

0xe5df,	// (0x00045602) dt_sta_signal_pane

0xb947,	// (0x0004296a) bg_dt_sta_title_pane_ParamLimits

0xb947,	// (0x0004296a) bg_dt_sta_title_pane

0xe5e8,	// (0x0004560b) dt_sta_title_pane_g1

0xe5f0,	// (0x00045613) dt_sta_title_pane_t1_ParamLimits

0xe5f0,	// (0x00045613) dt_sta_title_pane_t1

0x85ab,	// (0x0003f5ce) bg_dt_sta_control_pane

0xe605,	// (0x00045628) dt_sta_controll_pane_g1

0xe60e,	// (0x00045631) bg_dt_sta_title_pane_g1

0xe617,	// (0x0004563a) bg_dt_sta_title_pane_g2

0xe620,	// (0x00045643) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x00046ec4) bg_dt_sta_title_pane_g

0x4d3e,	// (0x0003bd61) bg_dt_sta_indi_pane_g1

0x7cc1,	// (0x0003ece4) dt_sta_signal_pane_g1

0x7cc9,	// (0x0003ecec) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x00046ecb) dt_sta_signal_pane_g

0x7cd1,	// (0x0003ecf4) dt_sta_battery_pane_g1

0x7cda,	// (0x0003ecfd) dt_sta_battery_pane_t1

0x4d3e,	// (0x0003bd61) bg_dt_sta_control_pane_g1

0xeff8,	// (0x0004601b) fep_china_uni_eep_pane

0xf000,	// (0x00046023) fep_china_uni_entry_pane_ParamLimits

0xf010,	// (0x00046033) popup_fep_china_uni_window_g1_ParamLimits

0xf020,	// (0x00046043) popup_fep_china_uni_window_g2_ParamLimits

0xf020,	// (0x00046043) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00046740) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00046740) popup_fep_china_uni_window_g

0x7ce9,	// (0x0003ed0c) fep_china_uni_eep_pane_g1

0x7cf1,	// (0x0003ed14) fep_china_uni_eep_pane_t1

0x7262,	// (0x0003e285) aid_touch_area_size_smil_player

0x23cb,	// (0x000393ee) lc0_clock_pane

0x25c2,	// (0x000395e5) status_pane_g5_ParamLimits

0x25c2,	// (0x000395e5) status_pane_g5

0xa38a,	// (0x000413ad) popup_keymap_window

0x2588,	// (0x000395ab) status_icon_pane

0xe41b,	// (0x0004543e) cell_ai5_widget_pane_g3_ParamLimits

0xe435,	// (0x00045458) cell_ai5_widget_pane_g4_ParamLimits

0xe445,	// (0x00045468) cell_ai5_widget_pane_g5_ParamLimits

0x798e,	// (0x0003e9b1) cell_ai5_widget_pane_g8_ParamLimits

0x798e,	// (0x0003e9b1) cell_ai5_widget_pane_g8

0x79a2,	// (0x0003e9c5) cell_ai5_widget_pane_g9_ParamLimits

0x79a2,	// (0x0003e9c5) cell_ai5_widget_pane_g9

0x79b6,	// (0x0003e9d9) cell_ai5_widget_pane_g10_ParamLimits

0x79b6,	// (0x0003e9d9) cell_ai5_widget_pane_g10

0x7d00,	// (0x0003ed23) status_icon_pane_g1

0x85ab,	// (0x0003f5ce) bg_popup_sub_pane_cp13

0x7d08,	// (0x0003ed2b) popup_keymap_window_t1

0xa093,	// (0x000410b6) control_pane_g6_ParamLimits

0xa093,	// (0x000410b6) control_pane_g6

0xa0a0,	// (0x000410c3) control_pane_g7_ParamLimits

0xa0a0,	// (0x000410c3) control_pane_g7

0xa0ad,	// (0x000410d0) control_pane_g8_ParamLimits

0xa0ad,	// (0x000410d0) control_pane_g8

0xe590,	// (0x000455b3) dt_sta_controll_pane_ParamLimits

0xe59d,	// (0x000455c0) dt_sta_indi_pane_ParamLimits

0xe5aa,	// (0x000455cd) dt_sta_title_pane_ParamLimits

0xb889,	// (0x000428ac) aid_size_touch_scroll_bar_cale

0xe97d,	// (0x000459a0) popup_discreet_window_ParamLimits

0xe97d,	// (0x000459a0) popup_discreet_window

0x9174,	// (0x00040197) popup_sk_window

0x2d8d,	// (0x00039db0) bg_popup_sub_pane_cp28_ParamLimits

0x2d8d,	// (0x00039db0) bg_popup_sub_pane_cp28

0x7d16,	// (0x0003ed39) popup_discreet_window_g1_ParamLimits

0x7d16,	// (0x0003ed39) popup_discreet_window_g1

0x7d36,	// (0x0003ed59) popup_discreet_window_t1_ParamLimits

0x7d36,	// (0x0003ed59) popup_discreet_window_t1

0x7d54,	// (0x0003ed77) popup_discreet_window_t2_ParamLimits

0x7d54,	// (0x0003ed77) popup_discreet_window_t2

0x0002,

0xfead,	// (0x00046ed0) popup_discreet_window_t_ParamLimits

0xfead,	// (0x00046ed0) popup_discreet_window_t

0x1a4d,	// (0x00038a70) popup_sk_window_g1

0x1a57,	// (0x00038a7a) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x00046ed7) popup_sk_window_g

0x1a5f,	// (0x00038a82) popup_sk_window_t1

0x1a6d,	// (0x00038a90) popup_sk_window_t1_copy1

0xe407,	// (0x0004542a) cell_ai5_widget_pane_g2_ParamLimits

0xe4d0,	// (0x000454f3) cell_ai5_widget_pane_t9_ParamLimits

0xe4d0,	// (0x000454f3) cell_ai5_widget_pane_t9

0x85ab,	// (0x0003f5ce) main_fep_fshwr2_pane

0xb1cf,	// (0x000421f2) aid_fshwr2_btn_pane

0xb1e0,	// (0x00042203) aid_fshwr2_syb_pane

0xb1f1,	// (0x00042214) aid_fshwr2_txt_pane

0xb1fd,	// (0x00042220) fshwr2_func_candi_pane

0xb21e,	// (0x00042241) fshwr2_hwr_syb_pane

0xb23b,	// (0x0004225e) fshwr2_icf_pane

0xe8a0,	// (0x000458c3) fshwr2_icf_bg_pane

0x1ae3,	// (0x00038b06) fshwr2_icf_pane_t1_ParamLimits

0x1ae3,	// (0x00038b06) fshwr2_icf_pane_t1

0xee9d,	// (0x00045ec0) fshwr2_func_candi_pane_g1

0xe629,	// (0x0004564c) fshwr2_func_candi_row_pane_ParamLimits

0xe629,	// (0x0004564c) fshwr2_func_candi_row_pane

0xb267,	// (0x0004228a) cell_fshwr2_syb_pane_ParamLimits

0xb267,	// (0x0004228a) cell_fshwr2_syb_pane

0x0ebd,	// (0x00037ee0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0ebd,	// (0x00037ee0) fshwr2_hwr_syb_pane_g1

0xe8a0,	// (0x000458c3) bg_popup_call_pane_cp01

0xb27d,	// (0x000422a0) fshwr2_func_candi_cell_pane_ParamLimits

0xb27d,	// (0x000422a0) fshwr2_func_candi_cell_pane

0xe650,	// (0x00045673) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe650,	// (0x00045673) fshwr2_func_candi_cell_bg_pane

0xb2c6,	// (0x000422e9) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xb2c6,	// (0x000422e9) fshwr2_func_candi_cell_pane_g1

0xb2fd,	// (0x00042320) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xb2fd,	// (0x00042320) fshwr2_func_candi_cell_pane_t1

0xe8a0,	// (0x000458c3) bg_button_pane_cp08

0x7dc2,	// (0x0003ede5) cell_fshwr2_syb_bg_pane

0xb318,	// (0x0004233b) cell_fshwr2_syb_bg_pane_g1

0xb320,	// (0x00042343) cell_fshwr2_syb_bg_pane_t1

0xb947,	// (0x0004296a) main_tmo_pane

0xc352,	// (0x00043375) uni_indicator_pane_g1_ParamLimits

0xc368,	// (0x0004338b) uni_indicator_pane_g2_ParamLimits

0xc37e,	// (0x000433a1) uni_indicator_pane_g3_ParamLimits

0xc391,	// (0x000433b4) uni_indicator_pane_g4_ParamLimits

0xc391,	// (0x000433b4) uni_indicator_pane_g4

0x38f9,	// (0x0003a91c) uni_indicator_pane_g5_ParamLimits

0x38f9,	// (0x0003a91c) uni_indicator_pane_g5

0x38f9,	// (0x0003a91c) uni_indicator_pane_g6_ParamLimits

0x38f9,	// (0x0003a91c) uni_indicator_pane_g6

0xf91c,	// (0x0004693f) uni_indicator_pane_g_ParamLimits

0xcd93,	// (0x00043db6) popup_tmo_note_window_ParamLimits

0xcd93,	// (0x00043db6) popup_tmo_note_window

0x12bb,	// (0x000382de) fshwr2_bg_pane

0xb2ee,	// (0x00042311) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xb2ee,	// (0x00042311) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x00046edc) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x00046edc) fshwr2_func_candi_cell_pane_g

0x0ea5,	// (0x00037ec8) bg_popup_window_pane_cp01

0x1bac,	// (0x00038bcf) bg_popup_window_pane_g1_cp01

0x7dca,	// (0x0003eded) bg_popup_window_pane_cp22_ParamLimits

0x7dca,	// (0x0003eded) bg_popup_window_pane_cp22

0x7dd8,	// (0x0003edfb) listscroll_tmo_link_pane_ParamLimits

0x7dd8,	// (0x0003edfb) listscroll_tmo_link_pane

0x7e18,	// (0x0003ee3b) popup_tmo_note_window_g1_ParamLimits

0x7e18,	// (0x0003ee3b) popup_tmo_note_window_g1

0x7e25,	// (0x0003ee48) tmo_note_info_pane_ParamLimits

0x7e25,	// (0x0003ee48) tmo_note_info_pane

0xe65c,	// (0x0004567f) list_tmo_note_info_pane_g1_ParamLimits

0xe65c,	// (0x0004567f) list_tmo_note_info_pane_g1

0x7e56,	// (0x0003ee79) list_tmo_note_info_pane_g2_ParamLimits

0x7e56,	// (0x0003ee79) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x00046ee1) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x00046ee1) list_tmo_note_info_pane_g

0x7e72,	// (0x0003ee95) list_tmo_note_info_text_pane_ParamLimits

0x7e72,	// (0x0003ee95) list_tmo_note_info_text_pane

0x7ef7,	// (0x0003ef1a) list_tmo_link_pane

0x7f04,	// (0x0003ef27) scroll_pane_cp20

0x7f11,	// (0x0003ef34) list_single_tmo_link_pane_ParamLimits

0x7f11,	// (0x0003ef34) list_single_tmo_link_pane

0x7f21,	// (0x0003ef44) list_single_tmo_link_pane_t1

0x7f2f,	// (0x0003ef52) list_tmo_note_info_text_pane_t1_ParamLimits

0x7f2f,	// (0x0003ef52) list_tmo_note_info_text_pane_t1

0x9b6b,	// (0x00040b8e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9b6b,	// (0x00040b8e) aid_size_touch_scroll_bar_cp01

0x9aad,	// (0x00040ad0) aid_size_touch_slider_marker

0x9164,	// (0x00040187) popup_settings_window_ParamLimits

0x9164,	// (0x00040187) popup_settings_window

0xd126,	// (0x00044149) popup_candi_list_indi_window

0x227d,	// (0x000392a0) aid_touch_navi_pane_ParamLimits

0x1214,	// (0x00038237) rs_clock_indi_pane

0x121d,	// (0x00038240) sctrl_sk_bottom_pane_ParamLimits

0x122e,	// (0x00038251) sctrl_sk_top_pane_ParamLimits

0x1333,	// (0x00038356) popup_fep_tooltip_window

0xe3d3,	// (0x000453f6) aid_size_cell_widget_grid_ParamLimits

0xe3f2,	// (0x00045415) cell_ai5_widget_pane_g1_ParamLimits

0xe3f2,	// (0x00045415) cell_ai5_widget_pane_g1

0xe455,	// (0x00045478) cell_ai5_widget_pane_g6_ParamLimits

0xe461,	// (0x00045484) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x00046e5f) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x00046e5f) cell_ai5_widget_pane_g

0xe4ff,	// (0x00045522) cell_ai5_widget_pane_t10_ParamLimits

0xe4ff,	// (0x00045522) cell_ai5_widget_pane_t10

0xe51d,	// (0x00045540) grid_ai5_widget_pane_ParamLimits

0xe549,	// (0x0004556c) cell_contacts_ai5_widget_pane_ParamLimits

0xe549,	// (0x0004556c) cell_contacts_ai5_widget_pane

0x7d69,	// (0x0003ed8c) popup_discreet_window_t3_ParamLimits

0x7d69,	// (0x0003ed8c) popup_discreet_window_t3

0xb253,	// (0x00042276) popup_fshwr2_char_preview_window_ParamLimits

0xb253,	// (0x00042276) popup_fshwr2_char_preview_window

0xe673,	// (0x00045696) tmo_note_info_pane_t1

0xe688,	// (0x000456ab) tmo_note_info_pane_t2

0xe6a1,	// (0x000456c4) tmo_note_info_pane_t3

0x7ed3,	// (0x0003eef6) tmo_note_info_pane_t4

0x7ee5,	// (0x0003ef08) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x00046ee6) tmo_note_info_pane_t

0x7ef7,	// (0x0003ef1a) list_tmo_link_pane_ParamLimits

0x7f04,	// (0x0003ef27) scroll_pane_cp20_ParamLimits

0xe8a0,	// (0x000458c3) bg_popup_fep_char_preview_window_cp01

0x7f48,	// (0x0003ef6b) popup_fshwr2_char_preview_window_t1

0x7f56,	// (0x0003ef79) popup_candi_list_indi_window_g1

0x7f5f,	// (0x0003ef82) bg_cell_contacts_ai5_widget_pane

0x7f6b,	// (0x0003ef8e) cell_contacts_ai5_widget_pane_g1

0x7f80,	// (0x0003efa3) cell_contacts_ai5_widget_pane_g2

0x7f8c,	// (0x0003efaf) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x00046ef1) cell_contacts_ai5_widget_pane_g

0x7f98,	// (0x0003efbb) cell_contacts_ai5_widget_pane_t1

0xb947,	// (0x0004296a) highlight_cell_shortcut_ai5_widget_pane_cp01

0x800f,	// (0x0003f032) settings_container_pane

0x1ed0,	// (0x00038ef3) listscroll_set_pane_copy1

0x4496,	// (0x0003b4b9) scroll_pane_cp121_copy1

0x801b,	// (0x0003f03e) set_content_pane_copy1

0x8023,	// (0x0003f046) aid_height_set_list_copy1_ParamLimits

0x8023,	// (0x0003f046) aid_height_set_list_copy1

0x3af9,	// (0x0003ab1c) aid_size_parent_copy1_ParamLimits

0x3af9,	// (0x0003ab1c) aid_size_parent_copy1

0x802f,	// (0x0003f052) button_value_adjust_pane_cp6_copy1_ParamLimits

0x802f,	// (0x0003f052) button_value_adjust_pane_cp6_copy1

0x21ff,	// (0x00039222) list_highlight_pane_cp2_copy1_ParamLimits

0x21ff,	// (0x00039222) list_highlight_pane_cp2_copy1

0x8043,	// (0x0003f066) list_set_pane_copy1_ParamLimits

0x8043,	// (0x0003f066) list_set_pane_copy1

0x7faa,	// (0x0003efcd) main_pane_set_t1_copy1_ParamLimits

0x7faa,	// (0x0003efcd) main_pane_set_t1_copy1

0x7fe4,	// (0x0003f007) main_pane_set_t2_copy1_ParamLimits

0x7fe4,	// (0x0003f007) main_pane_set_t2_copy1

0x8104,	// (0x0003f127) main_pane_set_t3_copy1

0x8112,	// (0x0003f135) main_pane_set_t4_copy1

0x8003,	// (0x0003f026) set_content_pane_g1_copy1_ParamLimits

0x8003,	// (0x0003f026) set_content_pane_g1_copy1

0x8120,	// (0x0003f143) setting_code_pane_copy1

0x8128,	// (0x0003f14b) setting_slider_graphic_pane_copy1

0x8128,	// (0x0003f14b) setting_slider_pane_copy1

0x8128,	// (0x0003f14b) setting_text_pane_copy1

0x8128,	// (0x0003f14b) setting_volume_pane_copy1

0x8120,	// (0x0003f143) settings_code_pane_cp2_copy1

0x8130,	// (0x0003f153) settings_code_pane_cp_copy1_ParamLimits

0x8130,	// (0x0003f153) settings_code_pane_cp_copy1

0x1bb5,	// (0x00038bd8) volume_set_pane_copy1

0x8144,	// (0x0003f167) volume_set_pane_g10_copy1

0x8150,	// (0x0003f173) volume_set_pane_g1_copy1

0x815a,	// (0x0003f17d) volume_set_pane_g2_copy1

0x8164,	// (0x0003f187) volume_set_pane_g3_copy1

0x816e,	// (0x0003f191) volume_set_pane_g4_copy1

0x8178,	// (0x0003f19b) volume_set_pane_g5_copy1

0x8182,	// (0x0003f1a5) volume_set_pane_g6_copy1

0x818c,	// (0x0003f1af) volume_set_pane_g7_copy1

0x8196,	// (0x0003f1b9) volume_set_pane_g8_copy1

0x81a0,	// (0x0003f1c3) volume_set_pane_g9_copy1

0x860d,	// (0x0003f630) bg_set_opt_pane_cp_copy1_ParamLimits

0x860d,	// (0x0003f630) bg_set_opt_pane_cp_copy1

0x1bc1,	// (0x00038be4) setting_slider_pane_t1_copy1_ParamLimits

0x1bc1,	// (0x00038be4) setting_slider_pane_t1_copy1

0x1bdf,	// (0x00038c02) setting_slider_pane_t2_copy1_ParamLimits

0x1bdf,	// (0x00038c02) setting_slider_pane_t2_copy1

0x1bf9,	// (0x00038c1c) setting_slider_pane_t3_copy1_ParamLimits

0x1bf9,	// (0x00038c1c) setting_slider_pane_t3_copy1

0x1c11,	// (0x00038c34) slider_set_pane_copy1_ParamLimits

0x1c11,	// (0x00038c34) slider_set_pane_copy1

0xb99f,	// (0x000429c2) set_opt_bg_pane_g1_copy2

0xb9a7,	// (0x000429ca) set_opt_bg_pane_g2_copy2

0x81aa,	// (0x0003f1cd) set_opt_bg_pane_g3_copy2

0xb9b7,	// (0x000429da) set_opt_bg_pane_g4_copy2

0xb9bf,	// (0x000429e2) set_opt_bg_pane_g5_copy2

0xb9c7,	// (0x000429ea) set_opt_bg_pane_g6_copy2

0x81b4,	// (0x0003f1d7) set_opt_bg_pane_g7_copy2

0x81be,	// (0x0003f1e1) set_opt_bg_pane_g8_copy2

0x81c8,	// (0x0003f1eb) set_opt_bg_pane_g9_copy2

0x1c27,	// (0x00038c4a) aid_size_touch_slider_mark_copy1_ParamLimits

0x1c27,	// (0x00038c4a) aid_size_touch_slider_mark_copy1

0x81d2,	// (0x0003f1f5) slider_set_pane_g1_copy1

0x1c3b,	// (0x00038c5e) slider_set_pane_g2_copy1

0x0a5c,	// (0x00037a7f) slider_set_pane_g3_copy1_ParamLimits

0x0a5c,	// (0x00037a7f) slider_set_pane_g3_copy1

0x0a70,	// (0x00037a93) slider_set_pane_g4_copy1_ParamLimits

0x0a70,	// (0x00037a93) slider_set_pane_g4_copy1

0x0a88,	// (0x00037aab) slider_set_pane_g5_copy1_ParamLimits

0x0a88,	// (0x00037aab) slider_set_pane_g5_copy1

0x0a5c,	// (0x00037a7f) slider_set_pane_g6_copy1_ParamLimits

0x0a5c,	// (0x00037a7f) slider_set_pane_g6_copy1

0x1c43,	// (0x00038c66) slider_set_pane_g7_copy1_ParamLimits

0x1c43,	// (0x00038c66) slider_set_pane_g7_copy1

0x85bf,	// (0x0003f5e2) bg_set_opt_pane_cp2_copy1

0x81db,	// (0x0003f1fe) setting_slider_graphic_pane_g1_copy1

0x81e4,	// (0x0003f207) setting_slider_graphic_pane_t1_copy1

0x81f4,	// (0x0003f217) setting_slider_graphic_pane_t2_copy1

0x8204,	// (0x0003f227) slider_set_pane_cp_copy1

0x8214,	// (0x0003f237) input_focus_pane_cp1_copy1

0x821d,	// (0x0003f240) list_set_text_pane_copy1

0x8225,	// (0x0003f248) setting_text_pane_g1_copy1

0xecb2,	// (0x00045cd5) set_text_pane_t1_copy1

0x8214,	// (0x0003f237) input_focus_pane_cp2_copy1

0x8225,	// (0x0003f248) setting_code_pane_g1_copy1

0x822e,	// (0x0003f251) setting_code_pane_t1_copy1

0xf2d4,	// (0x000462f7) list_set_graphic_pane_copy1

0x85bf,	// (0x0003f5e2) bg_set_opt_pane_cp4_copy1

0xf2e7,	// (0x0004630a) list_set_graphic_pane_g1_copy1_ParamLimits

0xf2e7,	// (0x0004630a) list_set_graphic_pane_g1_copy1

0x823c,	// (0x0003f25f) list_set_graphic_pane_g2_copy1

0xf2ff,	// (0x00046322) list_set_graphic_pane_t1_copy1_ParamLimits

0xf2ff,	// (0x00046322) list_set_graphic_pane_t1_copy1

0x4d3e,	// (0x0003bd61) rs_clock_indi_pane_g1

0x8244,	// (0x0003f267) rs_clock_indi_pane_t1

0x8252,	// (0x0003f275) rs_indi_pane

0x825a,	// (0x0003f27d) rs_indi_pane_g1

0x8263,	// (0x0003f286) rs_indi_pane_g2

0x826c,	// (0x0003f28f) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x00046ef8) rs_indi_pane_g

0x1ed0,	// (0x00038ef3) bg_popup_preview_window_pane_cp03

0x8275,	// (0x0003f298) popup_fep_tooltip_window_t1

0x59e9,	// (0x0003ca0c) popup_note2_window_g2_ParamLimits

0x59e9,	// (0x0003ca0c) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x00046c91) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x00046c91) popup_note2_window_g

0x5ef1,	// (0x0003cf14) bg_popup_sub_pane_cp11_ParamLimits

0x5efe,	// (0x0003cf21) cell_ai3_links_pane_g1_ParamLimits

0x5f15,	// (0x0003cf38) cell_ai3_links_pane_t1

0xecb2,	// (0x00045cd5) set_text_pane_t1_copy1_ParamLimits

0x1de9,	// (0x00038e0c) cell_graphic_popup_pane_cp2_ParamLimits

0x1de9,	// (0x00038e0c) cell_graphic_popup_pane_cp2

0x8283,	// (0x0003f2a6) cell_graphic_popup_pane_g1_cp2

0xb69c,	// (0x000426bf) cell_graphic_popup_pane_g2_cp2

0x828b,	// (0x0003f2ae) cell_graphic_popup_pane_g3_cp2

0x8293,	// (0x0003f2b6) cell_graphic_popup_pane_t2_cp2

0xb6ad,	// (0x000426d0) grid_highlight_pane_cp3_cp2

0xbc48,	// (0x00042c6b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb947,	// (0x0004296a) main_tmo_pane_ParamLimits

0xcd87,	// (0x00043daa) popup_tmo_big_image_note_window

0xe3e1,	// (0x00045404) cell_ai5_widget_list_pane

0xe3e9,	// (0x0004540c) cell_ai5_widget_lrg_icon_pane

0xe673,	// (0x00045696) tmo_note_info_pane_t1_ParamLimits

0xe688,	// (0x000456ab) tmo_note_info_pane_t2_ParamLimits

0xe6a1,	// (0x000456c4) tmo_note_info_pane_t3_ParamLimits

0x7ed3,	// (0x0003eef6) tmo_note_info_pane_t4_ParamLimits

0x7ee5,	// (0x0003ef08) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x00046ee6) tmo_note_info_pane_t_ParamLimits

0x800f,	// (0x0003f032) settings_container_pane_ParamLimits

0x820c,	// (0x0003f22f) indicator_popup_pane_cp5

0x820c,	// (0x0003f22f) indicator_popup_pane_cp6

0xf2d4,	// (0x000462f7) list_set_graphic_pane_copy1_ParamLimits

0x85ab,	// (0x0003f5ce) bg_popup_window_pane_cp23

0x82a1,	// (0x0003f2c4) popup_tmo_big_image_note_window_g1

0x82ad,	// (0x0003f2d0) popup_tmo_big_image_note_window_t1

0x82bd,	// (0x0003f2e0) popup_tmo_big_image_note_window_t2

0x82cd,	// (0x0003f2f0) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x00046eff) popup_tmo_big_image_note_window_t

0x4d3e,	// (0x0003bd61) cell_ai5_widget_lrg_icon_pane_g1

0xe6b6,	// (0x000456d9) cell_ai5_widget_lrg_icon_pane_t1

0xe6c4,	// (0x000456e7) cell_ai5_widget_list_row_pane_ParamLimits

0xe6c4,	// (0x000456e7) cell_ai5_widget_list_row_pane

0xe6dc,	// (0x000456ff) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xe6dc,	// (0x000456ff) cell_ai5_widget_list_row_pane_g1

0xe6e9,	// (0x0004570c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe6e9,	// (0x0004570c) cell_ai5_widget_list_row_pane_t1

0xe714,	// (0x00045737) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xe714,	// (0x00045737) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x00046f06) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x00046f06) cell_ai5_widget_list_row_pane_t

0xe8a0,	// (0x000458c3) main_fep_vtchi_ss_pane

0x8383,	// (0x0003f3a6) popup_fep_char_pre_window

0x838b,	// (0x0003f3ae) popup_fep_ituss_window

0xe73c,	// (0x0004575f) popup_fep_vkbss_window

0xe74b,	// (0x0004576e) grid_vkbss_keypad_pane_ParamLimits

0xe74b,	// (0x0004576e) grid_vkbss_keypad_pane

0x83e8,	// (0x0003f40b) ituss_keypad_pane

0x1c65,	// (0x00038c88) aid_vkbss_key_offset_ParamLimits

0x1c65,	// (0x00038c88) aid_vkbss_key_offset

0xb32f,	// (0x00042352) cell_vkbss_key_pane_ParamLimits

0xb32f,	// (0x00042352) cell_vkbss_key_pane

0x83f7,	// (0x0003f41a) bg_cell_vkbss_key_g1_ParamLimits

0x83f7,	// (0x0003f41a) bg_cell_vkbss_key_g1

0xe75b,	// (0x0004577e) cell_vkbss_key_3p_pane_ParamLimits

0xe75b,	// (0x0004577e) cell_vkbss_key_3p_pane

0xe775,	// (0x00045798) cell_vkbss_key_g1_ParamLimits

0xe775,	// (0x00045798) cell_vkbss_key_g1

0xe78f,	// (0x000457b2) cell_vkbss_key_t1_ParamLimits

0xe78f,	// (0x000457b2) cell_vkbss_key_t1

0x1c87,	// (0x00038caa) cell_ituss_key_pane_ParamLimits

0x1c87,	// (0x00038caa) cell_ituss_key_pane

0x8456,	// (0x0003f479) bg_cell_ituss_key_g1_ParamLimits

0x8456,	// (0x0003f479) bg_cell_ituss_key_g1

0x8462,	// (0x0003f485) cell_ituss_key_pane_g1_ParamLimits

0x8462,	// (0x0003f485) cell_ituss_key_pane_g1

0x1c98,	// (0x00038cbb) cell_ituss_key_pane_g2_ParamLimits

0x1c98,	// (0x00038cbb) cell_ituss_key_pane_g2

0x0002,

0xfeea,	// (0x00046f0d) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x00046f0d) cell_ituss_key_pane_g

0x1cc4,	// (0x00038ce7) cell_ituss_key_t1_ParamLimits

0x1cc4,	// (0x00038ce7) cell_ituss_key_t1

0x1cfe,	// (0x00038d21) cell_ituss_key_t2_ParamLimits

0x1cfe,	// (0x00038d21) cell_ituss_key_t2

0x1d2f,	// (0x00038d52) cell_ituss_key_t3_ParamLimits

0x1d2f,	// (0x00038d52) cell_ituss_key_t3

0x1cfe,	// (0x00038d21) cell_ituss_key_t4_ParamLimits

0x1cfe,	// (0x00038d21) cell_ituss_key_t4

0x0004,

0xfef1,	// (0x00046f14) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x00046f14) cell_ituss_key_t

0x8488,	// (0x0003f4ab) cell_vkbss_key_3p_pane_g1

0x8490,	// (0x0003f4b3) cell_vkbss_key_3p_pane_g2

0x8498,	// (0x0003f4bb) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x00046f1f) cell_vkbss_key_3p_pane_g

0x1ed0,	// (0x00038ef3) bg_popup_fep_char_preview_window_cp02

0x84a0,	// (0x0003f4c3) popup_fep_char_pre_window_t1

0xe3c0,	// (0x000453e3) main_ai5_sk_pane

0x7f5f,	// (0x0003ef82) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7f6b,	// (0x0003ef8e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7f80,	// (0x0003efa3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7f8c,	// (0x0003efaf) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x00046ef1) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7f98,	// (0x0003efbb) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb947,	// (0x0004296a) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe7ba,	// (0x000457dd) main_ai5_sk_pane_g1

0x2bc5,	// (0x00039be8) popup_query_code_window_g1

0x83a1,	// (0x0003f3c4) popup_fep_vkb_icf_pane

0x83c2,	// (0x0003f3e5) popup_fep_vtchi_icf_pane

0x84b7,	// (0x0003f4da) bg_icf_pane

0x84c3,	// (0x0003f4e6) list_vkb_icf_pane

0x84d2,	// (0x0003f4f5) bg_icf_pane_cp01

0x84e5,	// (0x0003f508) vtchi_icf_list_pane

0x84f5,	// (0x0003f518) list_vkb_icf_pane_t1_ParamLimits

0x84f5,	// (0x0003f518) list_vkb_icf_pane_t1

0x850b,	// (0x0003f52e) vtchi_icf_list_pane_t1_ParamLimits

0x850b,	// (0x0003f52e) vtchi_icf_list_pane_t1

0x838b,	// (0x0003f3ae) popup_fep_ituss_window_ParamLimits

0x83c2,	// (0x0003f3e5) popup_fep_vtchi_icf_pane_ParamLimits

0x83e8,	// (0x0003f40b) ituss_keypad_pane_ParamLimits

0x1c59,	// (0x00038c7c) ituss_sks_pane

0x84b7,	// (0x0003f4da) bg_icf_pane_ParamLimits

0x8363,	// (0x0003f386) icf_edit_indi_pane_ParamLimits

0x8363,	// (0x0003f386) icf_edit_indi_pane

0x84c3,	// (0x0003f4e6) list_vkb_icf_pane_ParamLimits

0x84d2,	// (0x0003f4f5) bg_icf_pane_cp01_ParamLimits

0x8376,	// (0x0003f399) icf_edit_indi_pane_cp01_ParamLimits

0x8376,	// (0x0003f399) icf_edit_indi_pane_cp01

0x84ed,	// (0x0003f510) vtchi_query_pane

0x7232,	// (0x0003e255) icf_edit_indi_pane_g1_ParamLimits

0x7232,	// (0x0003e255) icf_edit_indi_pane_g1

0xe7c3,	// (0x000457e6) icf_edit_indi_pane_g2_ParamLimits

0xe7c3,	// (0x000457e6) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x00046f37) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x00046f37) icf_edit_indi_pane_g

0xe7d5,	// (0x000457f8) icf_edit_indi_pane_t1

0x8523,	// (0x0003f546) bg_input_focus_pane_cp042

0xb880,	// (0x000428a3) vtchi_button_pane

0x852c,	// (0x0003f54f) vtchi_query_pane_t1

0x853a,	// (0x0003f55d) vtchi_query_pane_t2

0x8548,	// (0x0003f56b) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x00046f26) vtchi_query_pane_t

0xe8a0,	// (0x000458c3) bg_button_pane_cp13

0x8556,	// (0x0003f579) vtchi_button_pane_g1

0x1d72,	// (0x00038d95) ituss_sks_pane_g1

0x1d7d,	// (0x00038da0) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x00046f2d) ituss_sks_pane_g

0x855e,	// (0x0003f581) ituss_sks_pane_t1

0x856c,	// (0x0003f58f) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x00046f32) ituss_sks_pane_t

0x481b,	// (0x0003b83e) indicator_nsta_pane_cp_g1

0x4823,	// (0x0003b846) indicator_nsta_pane_cp_g2

0x482b,	// (0x0003b84e) indicator_nsta_pane_cp_g3

0x481b,	// (0x0003b83e) indicator_nsta_pane_cp_g4

0x4823,	// (0x0003b846) indicator_nsta_pane_cp_g5

0x482b,	// (0x0003b84e) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x00046ad4) indicator_nsta_pane_cp_g

0xdee7,	// (0x00044f0a) cell_graphic2_pane_t2_ParamLimits

0xdee7,	// (0x00044f0a) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x00046de8) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x00046de8) cell_graphic2_pane_t

0xdf1f,	// (0x00044f42) cell_graphic2_control_pane_t1

0x9db9,	// (0x00040ddc) signal_pane_g3_ParamLimits

0x9db9,	// (0x00040ddc) signal_pane_g3

0x9dcd,	// (0x00040df0) signal_pane_g4_ParamLimits

0x9dcd,	// (0x00040df0) signal_pane_g4

0xe726,	// (0x00045749) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xe726,	// (0x00045749) cell_ai5_widget_list_row_pane_t3

0x8476,	// (0x0003f499) cell_ituss_key_pane_t1_ParamLimits

0x8476,	// (0x0003f499) cell_ituss_key_pane_t1

0x2834,	// (0x00039857) form_field_data_wide_pane_vc_t2_ParamLimits

0x2834,	// (0x00039857) form_field_data_wide_pane_vc_t2

0x2848,	// (0x0003986b) form_field_data_wide_pane_vc_t3_ParamLimits

0x2848,	// (0x0003986b) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00046827) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00046827) form_field_data_wide_pane_vc_t

0x44d6,	// (0x0003b4f9) form_field_slider_wide_pane_vc_t3_ParamLimits

0x44d6,	// (0x0003b4f9) form_field_slider_wide_pane_vc_t3

0x45ac,	// (0x0003b5cf) form_field_popup_wide_pane_vc_t2_ParamLimits

0x45ac,	// (0x0003b5cf) form_field_popup_wide_pane_vc_t2

0x45c3,	// (0x0003b5e6) form_field_popup_wide_pane_vc_t3_ParamLimits

0x45c3,	// (0x0003b5e6) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00046ac3) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00046ac3) form_field_popup_wide_pane_vc_t

0xb1cf,	// (0x000421f2) aid_fshwr2_btn_pane_ParamLimits

0xb1e0,	// (0x00042203) aid_fshwr2_syb_pane_ParamLimits

0xb1f1,	// (0x00042214) aid_fshwr2_txt_pane_ParamLimits

0x12bb,	// (0x000382de) fshwr2_bg_pane_ParamLimits

0xb1fd,	// (0x00042220) fshwr2_func_candi_pane_ParamLimits

0xb21e,	// (0x00042241) fshwr2_hwr_syb_pane_ParamLimits

0xb23b,	// (0x0004225e) fshwr2_icf_pane_ParamLimits

0xd4b9,	// (0x000444dc) list_double_graphic_pane_vc_g4_ParamLimits

0xd4b9,	// (0x000444dc) list_double_graphic_pane_vc_g4

0x1cb8,	// (0x00038cdb) cell_ituss_key_pane_g3_ParamLimits

0x1cb8,	// (0x00038cdb) cell_ituss_key_pane_g3

0x1d60,	// (0x00038d83) cell_ituss_key_t5_ParamLimits

0x1d60,	// (0x00038d83) cell_ituss_key_t5

0xe73c,	// (0x0004575f) popup_fep_vkbss_window_ParamLimits

0xe3ca,	// (0x000453ed) aid_cell_ai5_quarter

0xe7d5,	// (0x000457f8) icf_edit_indi_pane_t1_ParamLimits

0xb4e4,	// (0x00042507) aid_tch_indicator_popup_pane_cp2_ParamLimits

0xb4e4,	// (0x00042507) aid_tch_indicator_popup_pane_cp2

0xb4f7,	// (0x0004251a) aid_tch_query_popup_data_pane_cp2_ParamLimits

0xb4f7,	// (0x0004251a) aid_tch_query_popup_data_pane_cp2

0x2b6d,	// (0x00039b90) aid_tch_query_popup_pane_ParamLimits

0x2b6d,	// (0x00039b90) aid_tch_query_popup_pane

0x2b6d,	// (0x00039b90) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2b6d,	// (0x00039b90) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Small

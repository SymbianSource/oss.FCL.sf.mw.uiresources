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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000c864 };

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
0x34d8,	// (0x0000fd3c) Screen

0x34ea,	// (0x0000fd4e) application_window_ParamLimits

0x34ea,	// (0x0000fd4e) application_window

0x3502,	// (0x0000fd66) screen_g1

0x350c,	// (0x0000fd70) area_bottom_pane_ParamLimits

0x350c,	// (0x0000fd70) area_bottom_pane

0x3571,	// (0x0000fdd5) area_top_pane_ParamLimits

0x3571,	// (0x0000fdd5) area_top_pane

0x9df5,	// (0x00016659) main_pane_ParamLimits

0x9df5,	// (0x00016659) main_pane

0x35e9,	// (0x0000fe4d) misc_graphics

0xa9a5,	// (0x00017209) battery_pane_ParamLimits

0xa9a5,	// (0x00017209) battery_pane

0x70b4,	// (0x00013918) bg_status_flat_pane_g8

0x70bc,	// (0x00013920) bg_status_flat_pane_g9

0x680e,	// (0x00013072) context_pane_ParamLimits

0x680e,	// (0x00013072) context_pane

0xaad7,	// (0x0001733b) navi_pane_ParamLimits

0xaad7,	// (0x0001733b) navi_pane

0xab43,	// (0x000173a7) signal_pane_ParamLimits

0xab43,	// (0x000173a7) signal_pane

0x0008,

0xf8a6,	// (0x0001c10a) bg_status_flat_pane_g

0xaba4,	// (0x00017408) status_pane_g1_ParamLimits

0xaba4,	// (0x00017408) status_pane_g1

0xabb0,	// (0x00017414) status_pane_g2_ParamLimits

0xabb0,	// (0x00017414) status_pane_g2

0x6874,	// (0x000130d8) status_pane_g3_ParamLimits

0x6874,	// (0x000130d8) status_pane_g3

0x0004,

0xf7db,	// (0x0001c03f) status_pane_g_ParamLimits

0xf7db,	// (0x0001c03f) status_pane_g

0xabbc,	// (0x00017420) title_pane_ParamLimits

0xabbc,	// (0x00017420) title_pane

0xabf9,	// (0x0001745d) uni_indicator_pane_ParamLimits

0xabf9,	// (0x0001745d) uni_indicator_pane

0x6668,	// (0x00012ecc) bg_list_pane_ParamLimits

0x6668,	// (0x00012ecc) bg_list_pane

0x95db,	// (0x00015e3f) find_pane

0xa5b1,	// (0x00016e15) listscroll_app_pane_ParamLimits

0xa5b1,	// (0x00016e15) listscroll_app_pane

0x6688,	// (0x00012eec) listscroll_form_pane

0x95e3,	// (0x00015e47) listscroll_gen_pane_ParamLimits

0x95e3,	// (0x00015e47) listscroll_gen_pane

0x6688,	// (0x00012eec) listscroll_set_pane

0x471a,	// (0x00010f7e) main_idle_act_pane

0x516c,	// (0x000119d0) main_idle_trad_pane

0x516c,	// (0x000119d0) main_list_empty_pane

0x6644,	// (0x00012ea8) main_midp_pane

0x66a2,	// (0x00012f06) main_pane_g1_ParamLimits

0x66a2,	// (0x00012f06) main_pane_g1

0xa5bd,	// (0x00016e21) popup_ai_message_window_ParamLimits

0xa5bd,	// (0x00016e21) popup_ai_message_window

0xa631,	// (0x00016e95) popup_fep_china_uni_window_ParamLimits

0xa631,	// (0x00016e95) popup_fep_china_uni_window

0x66da,	// (0x00012f3e) popup_fep_japan_candidate_window_ParamLimits

0x66da,	// (0x00012f3e) popup_fep_japan_candidate_window

0x66f8,	// (0x00012f5c) popup_fep_japan_predictive_window_ParamLimits

0x66f8,	// (0x00012f5c) popup_fep_japan_predictive_window

0xa66f,	// (0x00016ed3) popup_find_window

0xa67c,	// (0x00016ee0) popup_grid_graphic_window_ParamLimits

0xa67c,	// (0x00016ee0) popup_grid_graphic_window

0x6724,	// (0x00012f88) popup_large_graphic_colour_window

0xa69a,	// (0x00016efe) popup_menu_window_ParamLimits

0xa69a,	// (0x00016efe) popup_menu_window

0xa7d2,	// (0x00017036) popup_note_image_window

0xa7c0,	// (0x00017024) popup_note_wait_window_ParamLimits

0xa7c0,	// (0x00017024) popup_note_wait_window

0xa7c0,	// (0x00017024) popup_note_window_ParamLimits

0xa7c0,	// (0x00017024) popup_note_window

0xa826,	// (0x0001708a) popup_query_code_window_ParamLimits

0xa826,	// (0x0001708a) popup_query_code_window

0x6743,	// (0x00012fa7) popup_query_data_code_window_ParamLimits

0x6743,	// (0x00012fa7) popup_query_data_code_window

0xa838,	// (0x0001709c) popup_query_data_window_ParamLimits

0xa838,	// (0x0001709c) popup_query_data_window

0xa84e,	// (0x000170b2) popup_query_sat_info_window_ParamLimits

0xa84e,	// (0x000170b2) popup_query_sat_info_window

0xa87f,	// (0x000170e3) popup_snote_single_graphic_window_ParamLimits

0xa87f,	// (0x000170e3) popup_snote_single_graphic_window

0xa87f,	// (0x000170e3) popup_snote_single_text_window_ParamLimits

0xa87f,	// (0x000170e3) popup_snote_single_text_window

0x6758,	// (0x00012fbc) popup_sub_window_general

0x679a,	// (0x00012ffe) popup_window_general_ParamLimits

0x679a,	// (0x00012ffe) popup_window_general

0x67ad,	// (0x00013011) power_save_pane

0xa45c,	// (0x00016cc0) control_pane_g1_ParamLimits

0xa45c,	// (0x00016cc0) control_pane_g1

0xa47d,	// (0x00016ce1) control_pane_g2_ParamLimits

0xa47d,	// (0x00016ce1) control_pane_g2

0x5425,	// (0x00011c89) control_pane_g3_ParamLimits

0x5425,	// (0x00011c89) control_pane_g3

0x0007,

0xf7c3,	// (0x0001c027) control_pane_g_ParamLimits

0xf7c3,	// (0x0001c027) control_pane_g

0xa4c0,	// (0x00016d24) control_pane_t1_ParamLimits

0xa4c0,	// (0x00016d24) control_pane_t1

0xa512,	// (0x00016d76) control_pane_t2_ParamLimits

0xa512,	// (0x00016d76) control_pane_t2

0x0002,

0xf7d4,	// (0x0001c038) control_pane_t_ParamLimits

0xf7d4,	// (0x0001c038) control_pane_t

0x5348,	// (0x00011bac) navi_navi_volume_pane_cp1

0x5351,	// (0x00011bb5) status_small_icon_pane

0x5359,	// (0x00011bbd) status_small_pane_g1_ParamLimits

0x5359,	// (0x00011bbd) status_small_pane_g1

0x538d,	// (0x00011bf1) status_small_pane_g2_ParamLimits

0x538d,	// (0x00011bf1) status_small_pane_g2

0x5399,	// (0x00011bfd) status_small_pane_g3_ParamLimits

0x5399,	// (0x00011bfd) status_small_pane_g3

0x53a5,	// (0x00011c09) status_small_pane_g4_ParamLimits

0x53a5,	// (0x00011c09) status_small_pane_g4

0x53b1,	// (0x00011c15) status_small_pane_g5_ParamLimits

0x53b1,	// (0x00011c15) status_small_pane_g5

0x53be,	// (0x00011c22) status_small_pane_g6_ParamLimits

0x53be,	// (0x00011c22) status_small_pane_g6

0x0007,

0xf7b2,	// (0x0001c016) status_small_pane_g_ParamLimits

0xf7b2,	// (0x0001c016) status_small_pane_g

0x53ee,	// (0x00011c52) status_small_pane_t1

0x5411,	// (0x00011c75) status_small_wait_pane_ParamLimits

0x5411,	// (0x00011c75) status_small_wait_pane

0x4c02,	// (0x00011466) aid_levels_signal_ParamLimits

0x4c02,	// (0x00011466) aid_levels_signal

0x4c13,	// (0x00011477) signal_pane_g1_ParamLimits

0x4c13,	// (0x00011477) signal_pane_g1

0x4c29,	// (0x0001148d) signal_pane_g2_ParamLimits

0x4c29,	// (0x0001148d) signal_pane_g2

0x0001,

0xf747,	// (0x0001bfab) signal_pane_g_ParamLimits

0xf747,	// (0x0001bfab) signal_pane_g

0x4c3f,	// (0x000114a3) context_pane_g1

0x35f3,	// (0x0000fe57) title_pane_g1

0x3629,	// (0x0000fe8d) title_pane_t1

0x3691,	// (0x0000fef5) title_pane_t2

0x36b7,	// (0x0000ff1b) title_pane_t3

0x0002,

0xf59b,	// (0x0001bdff) title_pane_t

0xac0f,	// (0x00017473) aid_levels_battery_ParamLimits

0xac0f,	// (0x00017473) aid_levels_battery

0xac22,	// (0x00017486) battery_pane_g1_ParamLimits

0xac22,	// (0x00017486) battery_pane_g1

0xac37,	// (0x0001749b) battery_pane_g2_ParamLimits

0xac37,	// (0x0001749b) battery_pane_g2

0x0001,

0xf7e6,	// (0x0001c04a) battery_pane_g_ParamLimits

0xf7e6,	// (0x0001c04a) battery_pane_g

0xb065,	// (0x000178c9) uni_indicator_pane_g1

0xb07a,	// (0x000178de) uni_indicator_pane_g2

0xb090,	// (0x000178f4) uni_indicator_pane_g3

0x0005,

0xf94e,	// (0x0001c1b2) uni_indicator_pane_g

0x45f7,	// (0x00010e5b) navi_icon_pane_ParamLimits

0x45f7,	// (0x00010e5b) navi_icon_pane

0x35e9,	// (0x0000fe4d) navi_midp_pane

0x35e9,	// (0x0000fe4d) navi_navi_pane

0x45f7,	// (0x00010e5b) navi_text_pane_ParamLimits

0x45f7,	// (0x00010e5b) navi_text_pane

0x3502,	// (0x0000fd66) status_small_wait_pane_g1

0x3b30,	// (0x00010394) status_small_wait_pane_g2

0x0001,

0xf949,	// (0x0001c1ad) status_small_wait_pane_g

0x7a4a,	// (0x000142ae) navi_navi_icon_text_pane

0x7a64,	// (0x000142c8) navi_navi_pane_g1_ParamLimits

0x7a64,	// (0x000142c8) navi_navi_pane_g1

0x7a52,	// (0x000142b6) navi_navi_pane_g2_ParamLimits

0x7a52,	// (0x000142b6) navi_navi_pane_g2

0x0001,

0xf917,	// (0x0001c17b) navi_navi_pane_g_ParamLimits

0xf917,	// (0x0001c17b) navi_navi_pane_g

0x7a76,	// (0x000142da) navi_navi_tabs_pane

0x7a4a,	// (0x000142ae) navi_navi_text_pane

0x7a4a,	// (0x000142ae) navi_navi_volume_pane

0x75fa,	// (0x00013e5e) navi_text_pane_t1

0x75ee,	// (0x00013e52) navi_icon_pane_g1

0x7542,	// (0x00013da6) navi_navi_text_pane_t1

0xb02f,	// (0x00017893) navi_navi_volume_pane_g1

0xb037,	// (0x0001789b) volume_small_pane

0xafa1,	// (0x00017805) navi_navi_icon_text_pane_g1

0xafa9,	// (0x0001780d) navi_navi_icon_text_pane_t1

0x70fc,	// (0x00013960) navi_tabs_2_long_pane

0x70fc,	// (0x00013960) navi_tabs_2_pane

0x70fc,	// (0x00013960) navi_tabs_3_long_pane

0x70fc,	// (0x00013960) navi_tabs_3_pane

0x70fc,	// (0x00013960) navi_tabs_4_pane

0xaf81,	// (0x000177e5) tabs_2_active_pane_ParamLimits

0xaf81,	// (0x000177e5) tabs_2_active_pane

0xaf91,	// (0x000177f5) tabs_2_passive_pane_ParamLimits

0xaf91,	// (0x000177f5) tabs_2_passive_pane

0xaf4f,	// (0x000177b3) tabs_3_active_pane_ParamLimits

0xaf4f,	// (0x000177b3) tabs_3_active_pane

0xaf5f,	// (0x000177c3) tabs_3_passive_pane_ParamLimits

0xaf5f,	// (0x000177c3) tabs_3_passive_pane

0xaf70,	// (0x000177d4) tabs_3_passive_pane_cp_ParamLimits

0xaf70,	// (0x000177d4) tabs_3_passive_pane_cp

0xaf0b,	// (0x0001776f) tabs_4_active_pane_ParamLimits

0xaf0b,	// (0x0001776f) tabs_4_active_pane

0xaf1c,	// (0x00017780) tabs_4_passive_pane_ParamLimits

0xaf1c,	// (0x00017780) tabs_4_passive_pane

0xaf2d,	// (0x00017791) tabs_4_passive_pane_cp_ParamLimits

0xaf2d,	// (0x00017791) tabs_4_passive_pane_cp

0xaf3e,	// (0x000177a2) tabs_4_passive_pane_cp2_ParamLimits

0xaf3e,	// (0x000177a2) tabs_4_passive_pane_cp2

0xaeeb,	// (0x0001774f) tabs_2_long_active_pane_ParamLimits

0xaeeb,	// (0x0001774f) tabs_2_long_active_pane

0xaefb,	// (0x0001775f) tabs_2_long_passive_pane_ParamLimits

0xaefb,	// (0x0001775f) tabs_2_long_passive_pane

0xaeb6,	// (0x0001771a) tabs_3_long_active_pane_ParamLimits

0xaeb6,	// (0x0001771a) tabs_3_long_active_pane

0xaec7,	// (0x0001772b) tabs_3_long_passive_pane_ParamLimits

0xaec7,	// (0x0001772b) tabs_3_long_passive_pane

0xaeda,	// (0x0001773e) tabs_3_long_passive_pane_cp_ParamLimits

0xaeda,	// (0x0001773e) tabs_3_long_passive_pane_cp

0xae5c,	// (0x000176c0) volume_small_pane_g1

0xae65,	// (0x000176c9) volume_small_pane_g2

0xae6e,	// (0x000176d2) volume_small_pane_g3

0xae77,	// (0x000176db) volume_small_pane_g4

0xae80,	// (0x000176e4) volume_small_pane_g5

0xae89,	// (0x000176ed) volume_small_pane_g6

0xae92,	// (0x000176f6) volume_small_pane_g7

0xae9b,	// (0x000176ff) volume_small_pane_g8

0xaea4,	// (0x00017708) volume_small_pane_g9

0xaead,	// (0x00017711) volume_small_pane_g10

0x0009,

0xf8e3,	// (0x0001c147) volume_small_pane_g

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp2_ParamLimits

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp2

0x36d7,	// (0x0000ff3b) tabs_3_active_pane_g1

0x36df,	// (0x0000ff43) tabs_3_active_pane_t1

0x36c9,	// (0x0000ff2d) bg_passive_tab_pane_cp2_ParamLimits

0x36c9,	// (0x0000ff2d) bg_passive_tab_pane_cp2

0x36d7,	// (0x0000ff3b) tabs_3_passive_pane_g1

0x36df,	// (0x0000ff43) tabs_3_passive_pane_t1

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp3_ParamLimits

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp3

0x36f1,	// (0x0000ff55) tabs_4_active_pane_g1

0x36f9,	// (0x0000ff5d) tabs_4_active_pane_t1

0x36c9,	// (0x0000ff2d) bg_passive_tab_pane_cp3_ParamLimits

0x36c9,	// (0x0000ff2d) bg_passive_tab_pane_cp3

0x36f1,	// (0x0000ff55) tabs_4_1_passive_pane_g1

0x36f9,	// (0x0000ff5d) tabs_4_1_passive_pane_t1

0x6644,	// (0x00012ea8) list_highlight_pane_cp2

0xb158,	// (0x000179bc) list_set_pane_ParamLimits

0xb158,	// (0x000179bc) list_set_pane

0xb1e6,	// (0x00017a4a) main_pane_set_t1_ParamLimits

0xb1e6,	// (0x00017a4a) main_pane_set_t1

0xb206,	// (0x00017a6a) main_pane_set_t2_ParamLimits

0xb206,	// (0x00017a6a) main_pane_set_t2

0xb218,	// (0x00017a7c) main_pane_set_t3_ParamLimits

0xb218,	// (0x00017a7c) main_pane_set_t3

0xb22a,	// (0x00017a8e) main_pane_set_t4_ParamLimits

0xb22a,	// (0x00017a8e) main_pane_set_t4

0x0003,

0xf9b3,	// (0x0001c217) main_pane_set_t_ParamLimits

0xf9b3,	// (0x0001c217) main_pane_set_t

0xb23c,	// (0x00017aa0) setting_code_pane

0xb244,	// (0x00017aa8) setting_slider_graphic_pane

0xb244,	// (0x00017aa8) setting_slider_pane

0xb244,	// (0x00017aa8) setting_text_pane

0xb244,	// (0x00017aa8) setting_volume_pane

0x9ff4,	// (0x00016858) volume_set_pane

0x36c9,	// (0x0000ff2d) bg_set_opt_pane_cp

0x397e,	// (0x000101e2) setting_slider_pane_t1

0x9ffc,	// (0x00016860) setting_slider_pane_t2

0xa015,	// (0x00016879) setting_slider_pane_t3

0x0002,

0xf5a2,	// (0x0001be06) setting_slider_pane_t

0x3994,	// (0x000101f8) slider_set_pane

0x35e9,	// (0x0000fe4d) bg_set_opt_pane_cp2

0x370b,	// (0x0000ff6f) setting_slider_graphic_pane_g1

0xa02c,	// (0x00016890) setting_slider_graphic_pane_t1

0xa03b,	// (0x0001689f) setting_slider_graphic_pane_t2

0x0001,

0xf5a9,	// (0x0001be0d) setting_slider_graphic_pane_t

0xa04a,	// (0x000168ae) slider_set_pane_cp

0x35e9,	// (0x0000fe4d) input_focus_pane_cp1

0x7ad5,	// (0x00014339) list_set_text_pane

0x3502,	// (0x0000fd66) setting_text_pane_g1

0x35e9,	// (0x0000fe4d) input_focus_pane_cp2

0x3502,	// (0x0000fd66) setting_code_pane_g1

0x3714,	// (0x0000ff78) setting_code_pane_t1

0x8eb9,	// (0x0001571d) set_text_pane_t1_ParamLimits

0x8eb9,	// (0x0001571d) set_text_pane_t1

0x4505,	// (0x00010d69) set_opt_bg_pane_g1

0x450d,	// (0x00010d71) set_opt_bg_pane_g2

0xb118,	// (0x0001797c) set_opt_bg_pane_g3

0x451d,	// (0x00010d81) set_opt_bg_pane_g4

0x4525,	// (0x00010d89) set_opt_bg_pane_g5

0x452d,	// (0x00010d91) set_opt_bg_pane_g6

0xb120,	// (0x00017984) set_opt_bg_pane_g7

0xb128,	// (0x0001798c) set_opt_bg_pane_g8

0xb130,	// (0x00017994) set_opt_bg_pane_g9

0x0008,

0xf9a0,	// (0x0001c204) set_opt_bg_pane_g

0x7a3d,	// (0x000142a1) slider_set_pane_g1

0xb0f6,	// (0x0001795a) slider_set_pane_g2

0x0006,

0xf991,	// (0x0001c1f5) slider_set_pane_g

0xb0a6,	// (0x0001790a) volume_set_pane_g1

0xb0ae,	// (0x00017912) volume_set_pane_g2

0xb0b6,	// (0x0001791a) volume_set_pane_g3

0xb0be,	// (0x00017922) volume_set_pane_g4

0xb0c6,	// (0x0001792a) volume_set_pane_g5

0xb0ce,	// (0x00017932) volume_set_pane_g6

0xb0d6,	// (0x0001793a) volume_set_pane_g7

0xb0de,	// (0x00017942) volume_set_pane_g8

0xb0e6,	// (0x0001794a) volume_set_pane_g9

0xb0ee,	// (0x00017952) volume_set_pane_g10

0x0009,

0xf969,	// (0x0001c1cd) volume_set_pane_g

0x373d,	// (0x0000ffa1) indicator_pane_ParamLimits

0x373d,	// (0x0000ffa1) indicator_pane

0x3749,	// (0x0000ffad) main_idle_pane_g2_ParamLimits

0x3749,	// (0x0000ffad) main_idle_pane_g2

0x376d,	// (0x0000ffd1) main_pane_idle_g1_ParamLimits

0x376d,	// (0x0000ffd1) main_pane_idle_g1

0x377a,	// (0x0000ffde) popup_clock_digital_analogue_window_ParamLimits

0x377a,	// (0x0000ffde) popup_clock_digital_analogue_window

0x3791,	// (0x0000fff5) soft_indicator_pane_ParamLimits

0x3791,	// (0x0000fff5) soft_indicator_pane

0x379d,	// (0x00010001) wallpaper_pane_ParamLimits

0x379d,	// (0x00010001) wallpaper_pane

0x3502,	// (0x0000fd66) wallpaper_pane_g1

0x37b1,	// (0x00010015) indicator_pane_g1_ParamLimits

0x37b1,	// (0x00010015) indicator_pane_g1

0x7be2,	// (0x00014446) navi_navi_icon_text_pane_srt_g1

0x37cc,	// (0x00010030) soft_indicator_pane_t1

0x37e6,	// (0x0001004a) aid_ps_area_pane

0x37f7,	// (0x0001005b) aid_ps_clock_pane

0x3803,	// (0x00010067) aid_ps_indicator_pane

0x380f,	// (0x00010073) indicator_ps_pane_ParamLimits

0x380f,	// (0x00010073) indicator_ps_pane

0x381e,	// (0x00010082) power_save_pane_g1_ParamLimits

0x381e,	// (0x00010082) power_save_pane_g1

0x382a,	// (0x0001008e) power_save_pane_g2_ParamLimits

0x382a,	// (0x0001008e) power_save_pane_g2

0x9d71,	// (0x000165d5) aid_navinavi_width_pane

0x37e6,	// (0x0001004a) aid_ps_area_pane_ParamLimits

0x0001,

0xf5ae,	// (0x0001be12) power_save_pane_g_ParamLimits

0xf5ae,	// (0x0001be12) power_save_pane_g

0x3838,	// (0x0001009c) power_save_pane_t1_ParamLimits

0x3838,	// (0x0001009c) power_save_pane_t1

0x37f7,	// (0x0001005b) aid_ps_clock_pane_ParamLimits

0x3803,	// (0x00010067) aid_ps_indicator_pane_ParamLimits

0x384a,	// (0x000100ae) power_save_pane_t4_ParamLimits

0x384a,	// (0x000100ae) power_save_pane_t4

0x0001,

0xf5b3,	// (0x0001be17) power_save_pane_t_ParamLimits

0xf5b3,	// (0x0001be17) power_save_pane_t

0x3874,	// (0x000100d8) power_save_t3_ParamLimits

0x3874,	// (0x000100d8) power_save_t3

0x385f,	// (0x000100c3) power_save_t2_ParamLimits

0x385f,	// (0x000100c3) power_save_t2

0x3889,	// (0x000100ed) indicator_ps_pane_g1

0x3892,	// (0x000100f6) ai_gene_pane_ParamLimits

0x3892,	// (0x000100f6) ai_gene_pane

0x389e,	// (0x00010102) ai_links_pane_ParamLimits

0x389e,	// (0x00010102) ai_links_pane

0x38aa,	// (0x0001010e) indicator_pane_cp1_ParamLimits

0x38aa,	// (0x0001010e) indicator_pane_cp1

0x38b6,	// (0x0001011a) main_pane_idle_g1_cp_ParamLimits

0x38b6,	// (0x0001011a) main_pane_idle_g1_cp

0x38c2,	// (0x00010126) popup_ai_links_title_window

0x38cb,	// (0x0001012f) soft_indicator_pane_cp1_ParamLimits

0x38cb,	// (0x0001012f) soft_indicator_pane_cp1

0x787f,	// (0x000140e3) ai_links_pane_g1

0x7888,	// (0x000140ec) grid_ai_links_pane

0xb05c,	// (0x000178c0) ai_gene_pane_1

0x786d,	// (0x000140d1) ai_gene_pane_2

0x7876,	// (0x000140da) list_highlight_pane_cp4

0xb040,	// (0x000178a4) cell_ai_link_pane_ParamLimits

0xb040,	// (0x000178a4) cell_ai_link_pane

0x7865,	// (0x000140c9) cell_ai_link_pane_g1

0x3b30,	// (0x00010394) cell_ai_link_pane_g2

0x0001,

0xf944,	// (0x0001c1a8) cell_ai_link_pane_g

0x35e9,	// (0x0000fe4d) grid_highlight_cp2

0x35e9,	// (0x0000fe4d) bg_popup_sub_pane_cp1

0x38e5,	// (0x00010149) popup_ai_links_title_window_t1

0x77b7,	// (0x0001401b) ai_gene_pane_1_g1_ParamLimits

0x77b7,	// (0x0001401b) ai_gene_pane_1_g1

0x77c3,	// (0x00014027) ai_gene_pane_1_g2_ParamLimits

0x77c3,	// (0x00014027) ai_gene_pane_1_g2

0x0001,

0xf93a,	// (0x0001c19e) ai_gene_pane_1_g_ParamLimits

0xf93a,	// (0x0001c19e) ai_gene_pane_1_g

0x77d0,	// (0x00014034) ai_gene_pane_1_t1_ParamLimits

0x77d0,	// (0x00014034) ai_gene_pane_1_t1

0x7804,	// (0x00014068) grid_ai_soft_ind_pane

0x77a2,	// (0x00014006) ai_gene_pane_2_t1_ParamLimits

0x77a2,	// (0x00014006) ai_gene_pane_2_t1

0x38f4,	// (0x00010158) main_pane_empty_t1_ParamLimits

0x38f4,	// (0x00010158) main_pane_empty_t1

0x3911,	// (0x00010175) main_pane_empty_t2_ParamLimits

0x3911,	// (0x00010175) main_pane_empty_t2

0x3929,	// (0x0001018d) main_pane_empty_t3_ParamLimits

0x3929,	// (0x0001018d) main_pane_empty_t3

0x393c,	// (0x000101a0) main_pane_empty_t4_ParamLimits

0x393c,	// (0x000101a0) main_pane_empty_t4

0x394f,	// (0x000101b3) main_pane_empty_t5_ParamLimits

0x394f,	// (0x000101b3) main_pane_empty_t5

0x0004,

0xf5b8,	// (0x0001be1c) main_pane_empty_t_ParamLimits

0xf5b8,	// (0x0001be1c) main_pane_empty_t

0x45f7,	// (0x00010e5b) bg_popup_window_pane_ParamLimits

0x45f7,	// (0x00010e5b) bg_popup_window_pane

0x7551,	// (0x00013db5) find_popup_pane_cp2_ParamLimits

0x7551,	// (0x00013db5) find_popup_pane_cp2

0x755d,	// (0x00013dc1) heading_pane_ParamLimits

0x755d,	// (0x00013dc1) heading_pane

0x35e9,	// (0x0000fe4d) bg_popup_sub_pane

0xafc3,	// (0x00017827) bg_popup_window_pane_g1_ParamLimits

0xafc3,	// (0x00017827) bg_popup_window_pane_g1

0xafcf,	// (0x00017833) bg_popup_window_pane_g2_ParamLimits

0xafcf,	// (0x00017833) bg_popup_window_pane_g2

0xafdb,	// (0x0001783f) bg_popup_window_pane_g3_ParamLimits

0xafdb,	// (0x0001783f) bg_popup_window_pane_g3

0xafe7,	// (0x0001784b) bg_popup_window_pane_g4_ParamLimits

0xafe7,	// (0x0001784b) bg_popup_window_pane_g4

0xaff3,	// (0x00017857) bg_popup_window_pane_g5_ParamLimits

0xaff3,	// (0x00017857) bg_popup_window_pane_g5

0xafff,	// (0x00017863) bg_popup_window_pane_g6_ParamLimits

0xafff,	// (0x00017863) bg_popup_window_pane_g6

0xb00b,	// (0x0001786f) bg_popup_window_pane_g7_ParamLimits

0xb00b,	// (0x0001786f) bg_popup_window_pane_g7

0xb017,	// (0x0001787b) bg_popup_window_pane_g8_ParamLimits

0xb017,	// (0x0001787b) bg_popup_window_pane_g8

0xb023,	// (0x00017887) bg_popup_window_pane_g9_ParamLimits

0xb023,	// (0x00017887) bg_popup_window_pane_g9

0x7536,	// (0x00013d9a) bg_popup_window_pane_g10_ParamLimits

0x7536,	// (0x00013d9a) bg_popup_window_pane_g10

0x0009,

0xf902,	// (0x0001c166) bg_popup_window_pane_g_ParamLimits

0xf902,	// (0x0001c166) bg_popup_window_pane_g

0x74ed,	// (0x00013d51) bg_popup_heading_pane_ParamLimits

0x74ed,	// (0x00013d51) bg_popup_heading_pane

0xb3a6,	// (0x00017c0a) tabs_4_passive_pane_cp_srt_ParamLimits

0xb3a6,	// (0x00017c0a) tabs_4_passive_pane_cp_srt

0xb3b8,	// (0x00017c1c) tabs_4_passive_pane_srt_ParamLimits

0x7501,	// (0x00013d65) heading_pane_g2

0xb3b8,	// (0x00017c1c) tabs_4_passive_pane_srt

0x6644,	// (0x00012ea8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x6644,	// (0x00012ea8) bg_passive_tab_pane_cp3_srt

0x7509,	// (0x00013d6d) heading_pane_t1_ParamLimits

0x7509,	// (0x00013d6d) heading_pane_t1

0x7520,	// (0x00013d84) heading_pane_t2_ParamLimits

0x7520,	// (0x00013d84) heading_pane_t2

0x0001,

0xf8fd,	// (0x0001c161) heading_pane_t_ParamLimits

0xf8fd,	// (0x0001c161) heading_pane_t

0x707c,	// (0x000138e0) bg_popup_heading_pane_g1

0x710d,	// (0x00013971) bg_popup_heading_pane_g2

0x7115,	// (0x00013979) bg_popup_heading_pane_g3

0x711d,	// (0x00013981) bg_popup_heading_pane_g4

0x7125,	// (0x00013989) bg_popup_heading_pane_g5

0x712d,	// (0x00013991) bg_popup_heading_pane_g6

0x7135,	// (0x00013999) bg_popup_heading_pane_g7

0x713d,	// (0x000139a1) bg_popup_heading_pane_g8

0x7145,	// (0x000139a9) bg_popup_heading_pane_g9

0x0008,

0xf8b9,	// (0x0001c11d) bg_popup_heading_pane_g

0x695c,	// (0x000131c0) bg_popup_sub_pane_g1

0x696c,	// (0x000131d0) bg_popup_sub_pane_g2

0x6964,	// (0x000131c8) bg_popup_sub_pane_g3

0x697c,	// (0x000131e0) bg_popup_sub_pane_g4

0x6974,	// (0x000131d8) bg_popup_sub_pane_g5

0x6984,	// (0x000131e8) bg_popup_sub_pane_g6

0x698c,	// (0x000131f0) bg_popup_sub_pane_g7

0x699c,	// (0x00013200) bg_popup_sub_pane_g8

0x6994,	// (0x000131f8) bg_popup_sub_pane_g9

0x0008,

0xf893,	// (0x0001c0f7) bg_popup_sub_pane_g

0x3962,	// (0x000101c6) bg_popup_window_pane_cp5_ParamLimits

0x3962,	// (0x000101c6) bg_popup_window_pane_cp5

0x39aa,	// (0x0001020e) popup_note_window_g1_ParamLimits

0x39aa,	// (0x0001020e) popup_note_window_g1

0x39b6,	// (0x0001021a) popup_note_window_t1_ParamLimits

0x39b6,	// (0x0001021a) popup_note_window_t1

0x39cc,	// (0x00010230) popup_note_window_t2_ParamLimits

0x39cc,	// (0x00010230) popup_note_window_t2

0x39e2,	// (0x00010246) popup_note_window_t3_ParamLimits

0x39e2,	// (0x00010246) popup_note_window_t3

0x39f8,	// (0x0001025c) popup_note_window_t4_ParamLimits

0x39f8,	// (0x0001025c) popup_note_window_t4

0x3a20,	// (0x00010284) popup_note_window_t5_ParamLimits

0x3a20,	// (0x00010284) popup_note_window_t5

0x0004,

0xf5c3,	// (0x0001be27) popup_note_window_t_ParamLimits

0xf5c3,	// (0x0001be27) popup_note_window_t

0x3a44,	// (0x000102a8) bg_popup_window_pane_cp6_ParamLimits

0x3a44,	// (0x000102a8) bg_popup_window_pane_cp6

0x6ff8,	// (0x0001385c) popup_note_image_window_g1_ParamLimits

0x6ff8,	// (0x0001385c) popup_note_image_window_g1

0x7004,	// (0x00013868) popup_note_image_window_g2_ParamLimits

0x7004,	// (0x00013868) popup_note_image_window_g2

0x0001,

0xf887,	// (0x0001c0eb) popup_note_image_window_g_ParamLimits

0xf887,	// (0x0001c0eb) popup_note_image_window_g

0x701d,	// (0x00013881) popup_note_image_window_t1_ParamLimits

0x701d,	// (0x00013881) popup_note_image_window_t1

0x7036,	// (0x0001389a) popup_note_image_window_t2_ParamLimits

0x7036,	// (0x0001389a) popup_note_image_window_t2

0x704f,	// (0x000138b3) popup_note_image_window_t3_ParamLimits

0x704f,	// (0x000138b3) popup_note_image_window_t3

0x0002,

0xf88c,	// (0x0001c0f0) popup_note_image_window_t_ParamLimits

0xf88c,	// (0x0001c0f0) popup_note_image_window_t

0x6ee3,	// (0x00013747) bg_popup_window_pane_cp7_ParamLimits

0x6ee3,	// (0x00013747) bg_popup_window_pane_cp7

0x6f13,	// (0x00013777) popup_note_wait_window_g1_ParamLimits

0x6f13,	// (0x00013777) popup_note_wait_window_g1

0x6f1f,	// (0x00013783) popup_note_wait_window_g2_ParamLimits

0x6f1f,	// (0x00013783) popup_note_wait_window_g2

0x0002,

0xf875,	// (0x0001c0d9) popup_note_wait_window_g_ParamLimits

0xf875,	// (0x0001c0d9) popup_note_wait_window_g

0x6f37,	// (0x0001379b) popup_note_wait_window_t1_ParamLimits

0x6f37,	// (0x0001379b) popup_note_wait_window_t1

0x6f5e,	// (0x000137c2) popup_note_wait_window_t2_ParamLimits

0x6f5e,	// (0x000137c2) popup_note_wait_window_t2

0x6f7b,	// (0x000137df) popup_note_wait_window_t3_ParamLimits

0x6f7b,	// (0x000137df) popup_note_wait_window_t3

0x6f8e,	// (0x000137f2) popup_note_wait_window_t4_ParamLimits

0x6f8e,	// (0x000137f2) popup_note_wait_window_t4

0x0004,

0xf87c,	// (0x0001c0e0) popup_note_wait_window_t_ParamLimits

0xf87c,	// (0x0001c0e0) popup_note_wait_window_t

0x6fb3,	// (0x00013817) wait_bar_pane_ParamLimits

0x6fb3,	// (0x00013817) wait_bar_pane

0x35e9,	// (0x0000fe4d) wait_anim_pane

0x35e9,	// (0x0000fe4d) wait_border_pane

0x3502,	// (0x0000fd66) wait_anim_pane_g1

0x3502,	// (0x0000fd66) wait_anim_pane_g2

0x0001,

0xf742,	// (0x0001bfa6) wait_anim_pane_g

0x6e87,	// (0x000136eb) wait_border_pane_g1

0x6e9c,	// (0x00013700) wait_border_pane_g2

0x6ea5,	// (0x00013709) wait_border_pane_g3

0x0002,

0xf86e,	// (0x0001c0d2) wait_border_pane_g

0x6de9,	// (0x0001364d) bg_popup_window_pane_cp16_ParamLimits

0x6de9,	// (0x0001364d) bg_popup_window_pane_cp16

0x6df7,	// (0x0001365b) indicator_popup_pane_cp4_ParamLimits

0x6df7,	// (0x0001365b) indicator_popup_pane_cp4

0x6e0b,	// (0x0001366f) popup_query_data_window_t1_ParamLimits

0x6e0b,	// (0x0001366f) popup_query_data_window_t1

0x6e1d,	// (0x00013681) popup_query_data_window_t2_ParamLimits

0x6e1d,	// (0x00013681) popup_query_data_window_t2

0x6e36,	// (0x0001369a) popup_query_data_window_t3_ParamLimits

0x6e36,	// (0x0001369a) popup_query_data_window_t3

0x0002,

0xf867,	// (0x0001c0cb) popup_query_data_window_t_ParamLimits

0xf867,	// (0x0001c0cb) popup_query_data_window_t

0x6e50,	// (0x000136b4) query_popup_data_pane_ParamLimits

0x6e50,	// (0x000136b4) query_popup_data_pane

0x6e64,	// (0x000136c8) query_popup_data_pane_cp1_ParamLimits

0x6e64,	// (0x000136c8) query_popup_data_pane_cp1

0x3a44,	// (0x000102a8) bg_popup_window_pane_cp10_ParamLimits

0x3a44,	// (0x000102a8) bg_popup_window_pane_cp10

0x6d4c,	// (0x000135b0) indicator_popup_pane_ParamLimits

0x6d4c,	// (0x000135b0) indicator_popup_pane

0x3a9b,	// (0x000102ff) popup_query_code_window_t1_ParamLimits

0x3a9b,	// (0x000102ff) popup_query_code_window_t1

0x6d64,	// (0x000135c8) popup_query_code_window_t2_ParamLimits

0x6d64,	// (0x000135c8) popup_query_code_window_t2

0x6da2,	// (0x00013606) popup_query_code_window_t3_ParamLimits

0x6da2,	// (0x00013606) popup_query_code_window_t3

0x0002,

0xf860,	// (0x0001c0c4) popup_query_code_window_t_ParamLimits

0xf860,	// (0x0001c0c4) popup_query_code_window_t

0x6dd1,	// (0x00013635) query_popup_pane_ParamLimits

0x6dd1,	// (0x00013635) query_popup_pane

0x3a44,	// (0x000102a8) bg_popup_window_pane_cp15_ParamLimits

0x3a44,	// (0x000102a8) bg_popup_window_pane_cp15

0x3a62,	// (0x000102c6) indicator_popup_pane_cp1_ParamLimits

0x3a62,	// (0x000102c6) indicator_popup_pane_cp1

0x3a75,	// (0x000102d9) indicator_popup_pane_cp2_ParamLimits

0x3a75,	// (0x000102d9) indicator_popup_pane_cp2

0x3a88,	// (0x000102ec) popup_query_data_code_window_g1_ParamLimits

0x3a88,	// (0x000102ec) popup_query_data_code_window_g1

0x3a9b,	// (0x000102ff) popup_query_data_code_window_t1_ParamLimits

0x3a9b,	// (0x000102ff) popup_query_data_code_window_t1

0x3aad,	// (0x00010311) popup_query_data_code_window_t2_ParamLimits

0x3aad,	// (0x00010311) popup_query_data_code_window_t2

0x3abf,	// (0x00010323) popup_query_data_code_window_t3_ParamLimits

0x3abf,	// (0x00010323) popup_query_data_code_window_t3

0x3ad5,	// (0x00010339) popup_query_data_code_window_t4_ParamLimits

0x3ad5,	// (0x00010339) popup_query_data_code_window_t4

0x0003,

0xf5ce,	// (0x0001be32) popup_query_data_code_window_t_ParamLimits

0xf5ce,	// (0x0001be32) popup_query_data_code_window_t

0x4fed,	// (0x00011851) list_single_midp_graphic_pane_g3

0x3aed,	// (0x00010351) query_popup_data_pane_cp2_ParamLimits

0x3b00,	// (0x00010364) query_popup_pane_cp2_ParamLimits

0x3b00,	// (0x00010364) query_popup_pane_cp2

0x35e9,	// (0x0000fe4d) bg_popup_window_pane_cp11

0x6d20,	// (0x00013584) heading_pane_cp5

0x3be4,	// (0x00010448) listscroll_popup_info_pane

0x35e9,	// (0x0000fe4d) input_focus_pane_cp3

0x3b13,	// (0x00010377) query_popup_pane_t1

0x3b21,	// (0x00010385) list_popup_info_pane_ParamLimits

0x3b21,	// (0x00010385) list_popup_info_pane

0x3b30,	// (0x00010394) listscroll_popup_info_pane_g1

0x3b38,	// (0x0001039c) scroll_pane_cp7

0x3b40,	// (0x000103a4) popup_info_list_pane_t1_ParamLimits

0x3b40,	// (0x000103a4) popup_info_list_pane_t1

0x3b5a,	// (0x000103be) popup_info_list_pane_t2_ParamLimits

0x3b5a,	// (0x000103be) popup_info_list_pane_t2

0x0001,

0xf5d7,	// (0x0001be3b) popup_info_list_pane_t_ParamLimits

0xf5d7,	// (0x0001be3b) popup_info_list_pane_t

0x35e9,	// (0x0000fe4d) bg_popup_window_pane_cp12

0x7bfc,	// (0x00014460) find_popup_pane

0x36c9,	// (0x0000ff2d) bg_popup_window_pane_cp3

0x3b74,	// (0x000103d8) heading_pane_cp3

0x3b80,	// (0x000103e4) listscroll_popup_graphic_pane

0x35e9,	// (0x0000fe4d) bg_popup_window_pane_cp4

0x3bdc,	// (0x00010440) heading_pane_cp4

0x3be4,	// (0x00010448) listscroll_popup_colour_pane

0x3bec,	// (0x00010450) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3bec,	// (0x00010450) cell_large_graphic_colour_none_popup_pane

0x3bfc,	// (0x00010460) grid_large_graphic_colour_popup_pane_ParamLimits

0x3bfc,	// (0x00010460) grid_large_graphic_colour_popup_pane

0x3c18,	// (0x0001047c) listscroll_popup_colour_pane_g1_ParamLimits

0x3c18,	// (0x0001047c) listscroll_popup_colour_pane_g1

0x3c2f,	// (0x00010493) listscroll_popup_colour_pane_g2_ParamLimits

0x3c2f,	// (0x00010493) listscroll_popup_colour_pane_g2

0x3c43,	// (0x000104a7) listscroll_popup_colour_pane_g3_ParamLimits

0x3c43,	// (0x000104a7) listscroll_popup_colour_pane_g3

0x3c53,	// (0x000104b7) listscroll_popup_colour_pane_g4_ParamLimits

0x3c53,	// (0x000104b7) listscroll_popup_colour_pane_g4

0x0003,

0xf5dc,	// (0x0001be40) listscroll_popup_colour_pane_g_ParamLimits

0xf5dc,	// (0x0001be40) listscroll_popup_colour_pane_g

0x3c62,	// (0x000104c6) scroll_pane_cp6_ParamLimits

0x3c62,	// (0x000104c6) scroll_pane_cp6

0x3c74,	// (0x000104d8) cell_large_graphic_colour_popup_pane_ParamLimits

0x3c74,	// (0x000104d8) cell_large_graphic_colour_popup_pane

0x3c93,	// (0x000104f7) cell_large_graphic_colour_none_popup_pane_t1

0x35e9,	// (0x0000fe4d) grid_highlight_pane_cp5

0x3ca2,	// (0x00010506) cell_large_graphic_colour_popup_pane_g1

0x3caa,	// (0x0001050e) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5e5,	// (0x0001be49) cell_large_graphic_colour_popup_pane_g

0x3cb2,	// (0x00010516) cell_large_graphic_colour_popup_pane_g2_copy1

0x3cbb,	// (0x0001051f) grid_highlight_pane_cp4

0x3cc3,	// (0x00010527) bg_popup_window_pane_cp8_ParamLimits

0x3cc3,	// (0x00010527) bg_popup_window_pane_cp8

0x3cde,	// (0x00010542) popup_snote_single_text_window_g1_ParamLimits

0x3cde,	// (0x00010542) popup_snote_single_text_window_g1

0x3cf0,	// (0x00010554) popup_snote_single_text_window_t1_ParamLimits

0x3cf0,	// (0x00010554) popup_snote_single_text_window_t1

0x3d03,	// (0x00010567) popup_snote_single_text_window_t2_ParamLimits

0x3d03,	// (0x00010567) popup_snote_single_text_window_t2

0x3d16,	// (0x0001057a) popup_snote_single_text_window_t3_ParamLimits

0x3d16,	// (0x0001057a) popup_snote_single_text_window_t3

0x3d4f,	// (0x000105b3) popup_snote_single_text_window_t4_ParamLimits

0x3d4f,	// (0x000105b3) popup_snote_single_text_window_t4

0x3d83,	// (0x000105e7) popup_snote_single_text_window_t5_ParamLimits

0x3d83,	// (0x000105e7) popup_snote_single_text_window_t5

0x0004,

0xf5ea,	// (0x0001be4e) popup_snote_single_text_window_t_ParamLimits

0xf5ea,	// (0x0001be4e) popup_snote_single_text_window_t

0x3db2,	// (0x00010616) bg_popup_window_pane_cp9_ParamLimits

0x3db2,	// (0x00010616) bg_popup_window_pane_cp9

0x3cde,	// (0x00010542) popup_snote_single_graphic_window_g1_ParamLimits

0x3cde,	// (0x00010542) popup_snote_single_graphic_window_g1

0x3dc0,	// (0x00010624) popup_snote_single_graphic_window_g2_ParamLimits

0x3dc0,	// (0x00010624) popup_snote_single_graphic_window_g2

0x0001,

0xf5f5,	// (0x0001be59) popup_snote_single_graphic_window_g_ParamLimits

0xf5f5,	// (0x0001be59) popup_snote_single_graphic_window_g

0x3dcc,	// (0x00010630) popup_snote_single_graphic_window_t1_ParamLimits

0x3dcc,	// (0x00010630) popup_snote_single_graphic_window_t1

0x3ddf,	// (0x00010643) popup_snote_single_graphic_window_t2_ParamLimits

0x3ddf,	// (0x00010643) popup_snote_single_graphic_window_t2

0x3d16,	// (0x0001057a) popup_snote_single_graphic_window_t3_ParamLimits

0x3d16,	// (0x0001057a) popup_snote_single_graphic_window_t3

0x3d4f,	// (0x000105b3) popup_snote_single_graphic_window_t4_ParamLimits

0x3d4f,	// (0x000105b3) popup_snote_single_graphic_window_t4

0x3d83,	// (0x000105e7) popup_snote_single_graphic_window_t5_ParamLimits

0x3d83,	// (0x000105e7) popup_snote_single_graphic_window_t5

0x0004,

0xf5fa,	// (0x0001be5e) popup_snote_single_graphic_window_t_ParamLimits

0xf5fa,	// (0x0001be5e) popup_snote_single_graphic_window_t

0xb337,	// (0x00017b9b) grid_graphic_popup_pane_ParamLimits

0xb337,	// (0x00017b9b) grid_graphic_popup_pane

0xb35a,	// (0x00017bbe) listscroll_popup_graphic_pane_g1_ParamLimits

0xb35a,	// (0x00017bbe) listscroll_popup_graphic_pane_g1

0xb36e,	// (0x00017bd2) listscroll_popup_graphic_pane_g2_ParamLimits

0xb36e,	// (0x00017bd2) listscroll_popup_graphic_pane_g2

0x0001,

0xf9dd,	// (0x0001c241) listscroll_popup_graphic_pane_g_ParamLimits

0xf9dd,	// (0x0001c241) listscroll_popup_graphic_pane_g

0x7ac9,	// (0x0001432d) scroll_pane_cp5

0xb2f0,	// (0x00017b54) cell_graphic_popup_pane_ParamLimits

0xb2f0,	// (0x00017b54) cell_graphic_popup_pane

0x7ba5,	// (0x00014409) cell_graphic_popup_pane_g1

0x7bad,	// (0x00014411) cell_graphic_popup_pane_g2

0x3cb2,	// (0x00010516) cell_graphic_popup_pane_g3

0x0002,

0xf9d6,	// (0x0001c23a) cell_graphic_popup_pane_g

0x7bb6,	// (0x0001441a) cell_graphic_popup_pane_t2

0x3cbb,	// (0x0001051f) grid_highlight_pane_cp3

0x3e04,	// (0x00010668) list_gen_pane_ParamLimits

0x3e04,	// (0x00010668) list_gen_pane

0x3e35,	// (0x00010699) scroll_pane

0xb2c1,	// (0x00017b25) bg_list_pane_g1_ParamLimits

0xb2c1,	// (0x00017b25) bg_list_pane_g1

0x7b5c,	// (0x000143c0) bg_list_pane_g2_ParamLimits

0x7b5c,	// (0x000143c0) bg_list_pane_g2

0x7b6f,	// (0x000143d3) bg_list_pane_g3_ParamLimits

0x7b6f,	// (0x000143d3) bg_list_pane_g3

0x7b81,	// (0x000143e5) bg_list_pane_g4_ParamLimits

0x7b81,	// (0x000143e5) bg_list_pane_g4

0xb2d8,	// (0x00017b3c) bg_list_pane_g5_ParamLimits

0xb2d8,	// (0x00017b3c) bg_list_pane_g5

0x0004,

0xf9cb,	// (0x0001c22f) bg_list_pane_g_ParamLimits

0xf9cb,	// (0x0001c22f) bg_list_pane_g

0xb271,	// (0x00017ad5) list_double2_graphic_large_graphic_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double2_graphic_large_graphic_pane

0xb271,	// (0x00017ad5) list_double2_graphic_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double2_graphic_pane

0xb271,	// (0x00017ad5) list_double2_large_graphic_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double2_large_graphic_pane

0xb271,	// (0x00017ad5) list_double2_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double2_pane

0xb271,	// (0x00017ad5) list_double_graphic_heading_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double_graphic_heading_pane

0xb271,	// (0x00017ad5) list_double_graphic_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double_graphic_pane

0xb271,	// (0x00017ad5) list_double_heading_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double_heading_pane

0xb271,	// (0x00017ad5) list_double_large_graphic_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double_large_graphic_pane

0xb271,	// (0x00017ad5) list_double_number_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double_number_pane

0xb271,	// (0x00017ad5) list_double_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double_pane

0xb271,	// (0x00017ad5) list_double_time_pane_ParamLimits

0xb271,	// (0x00017ad5) list_double_time_pane

0xb271,	// (0x00017ad5) list_setting_number_pane_ParamLimits

0xb271,	// (0x00017ad5) list_setting_number_pane

0xb271,	// (0x00017ad5) list_setting_pane_ParamLimits

0xb271,	// (0x00017ad5) list_setting_pane

0x9743,	// (0x00015fa7) list_single_2graphic_pane_ParamLimits

0x9743,	// (0x00015fa7) list_single_2graphic_pane

0x9743,	// (0x00015fa7) list_single_graphic_heading_pane_ParamLimits

0x9743,	// (0x00015fa7) list_single_graphic_heading_pane

0x9743,	// (0x00015fa7) list_single_graphic_pane_ParamLimits

0x9743,	// (0x00015fa7) list_single_graphic_pane

0x9743,	// (0x00015fa7) list_single_heading_pane_ParamLimits

0x9743,	// (0x00015fa7) list_single_heading_pane

0x975a,	// (0x00015fbe) list_single_large_graphic_pane_ParamLimits

0x975a,	// (0x00015fbe) list_single_large_graphic_pane

0x9743,	// (0x00015fa7) list_single_number_heading_pane_ParamLimits

0x9743,	// (0x00015fa7) list_single_number_heading_pane

0x9743,	// (0x00015fa7) list_single_number_pane_ParamLimits

0x9743,	// (0x00015fa7) list_single_number_pane

0x9743,	// (0x00015fa7) list_single_pane_ParamLimits

0x9743,	// (0x00015fa7) list_single_pane

0x35e9,	// (0x0000fe4d) list_highlight_pane_cp1

0x8ee1,	// (0x00015745) list_single_pane_g1_ParamLimits

0x8ee1,	// (0x00015745) list_single_pane_g1

0x8eed,	// (0x00015751) list_single_pane_g2_ParamLimits

0x8eed,	// (0x00015751) list_single_pane_g2

0x0001,

0xf60c,	// (0x0001be70) list_single_pane_g_ParamLimits

0xf60c,	// (0x0001be70) list_single_pane_g

0x9703,	// (0x00015f67) list_single_pane_t1_ParamLimits

0x9703,	// (0x00015f67) list_single_pane_t1

0x8ee1,	// (0x00015745) list_single_number_pane_g1_ParamLimits

0x8ee1,	// (0x00015745) list_single_number_pane_g1

0x8eed,	// (0x00015751) list_single_number_pane_g2_ParamLimits

0x8eed,	// (0x00015751) list_single_number_pane_g2

0x0001,

0xf60c,	// (0x0001be70) list_single_number_pane_g_ParamLimits

0xf60c,	// (0x0001be70) list_single_number_pane_g

0x8ef9,	// (0x0001575d) list_single_number_pane_t1_ParamLimits

0x8ef9,	// (0x0001575d) list_single_number_pane_t1

0x96c4,	// (0x00015f28) list_single_number_pane_t2_ParamLimits

0x96c4,	// (0x00015f28) list_single_number_pane_t2

0x0001,

0xf98c,	// (0x0001c1f0) list_single_number_pane_t_ParamLimits

0xf98c,	// (0x0001c1f0) list_single_number_pane_t

0x8ed5,	// (0x00015739) list_single_graphic_pane_g1_ParamLimits

0x8ed5,	// (0x00015739) list_single_graphic_pane_g1

0x8ee1,	// (0x00015745) list_single_graphic_pane_g2_ParamLimits

0x8ee1,	// (0x00015745) list_single_graphic_pane_g2

0x8eed,	// (0x00015751) list_single_graphic_pane_g3_ParamLimits

0x8eed,	// (0x00015751) list_single_graphic_pane_g3

0x0002,

0xf605,	// (0x0001be69) list_single_graphic_pane_g_ParamLimits

0xf605,	// (0x0001be69) list_single_graphic_pane_g

0x8ef9,	// (0x0001575d) list_single_graphic_pane_t1_ParamLimits

0x8ef9,	// (0x0001575d) list_single_graphic_pane_t1

0x8ee1,	// (0x00015745) list_single_heading_pane_g1_ParamLimits

0x8ee1,	// (0x00015745) list_single_heading_pane_g1

0x8eed,	// (0x00015751) list_single_heading_pane_g2_ParamLimits

0x8eed,	// (0x00015751) list_single_heading_pane_g2

0x0001,

0xf60c,	// (0x0001be70) list_single_heading_pane_g_ParamLimits

0xf60c,	// (0x0001be70) list_single_heading_pane_g

0x8f0f,	// (0x00015773) list_single_heading_pane_t1_ParamLimits

0x8f0f,	// (0x00015773) list_single_heading_pane_t1

0x8f25,	// (0x00015789) list_single_heading_pane_t2_ParamLimits

0x8f25,	// (0x00015789) list_single_heading_pane_t2

0x0001,

0xf611,	// (0x0001be75) list_single_heading_pane_t_ParamLimits

0xf611,	// (0x0001be75) list_single_heading_pane_t

0x8ee1,	// (0x00015745) list_single_number_heading_pane_g1_ParamLimits

0x8ee1,	// (0x00015745) list_single_number_heading_pane_g1

0x8eed,	// (0x00015751) list_single_number_heading_pane_g2_ParamLimits

0x8eed,	// (0x00015751) list_single_number_heading_pane_g2

0x0001,

0xf60c,	// (0x0001be70) list_single_number_heading_pane_g_ParamLimits

0xf60c,	// (0x0001be70) list_single_number_heading_pane_g

0x8f0f,	// (0x00015773) list_single_number_heading_pane_t1_ParamLimits

0x8f0f,	// (0x00015773) list_single_number_heading_pane_t1

0x8f37,	// (0x0001579b) list_single_number_heading_pane_t2_ParamLimits

0x8f37,	// (0x0001579b) list_single_number_heading_pane_t2

0x8f49,	// (0x000157ad) list_single_number_heading_pane_t3_ParamLimits

0x8f49,	// (0x000157ad) list_single_number_heading_pane_t3

0x0002,

0xf616,	// (0x0001be7a) list_single_number_heading_pane_t_ParamLimits

0xf616,	// (0x0001be7a) list_single_number_heading_pane_t

0x8ed5,	// (0x00015739) list_single_graphic_heading_pane_g1_ParamLimits

0x8ed5,	// (0x00015739) list_single_graphic_heading_pane_g1

0x8f5b,	// (0x000157bf) list_single_graphic_heading_pane_g4_ParamLimits

0x8f5b,	// (0x000157bf) list_single_graphic_heading_pane_g4

0x8eed,	// (0x00015751) list_single_graphic_heading_pane_g5_ParamLimits

0x8eed,	// (0x00015751) list_single_graphic_heading_pane_g5

0x0002,

0xf61d,	// (0x0001be81) list_single_graphic_heading_pane_g_ParamLimits

0xf61d,	// (0x0001be81) list_single_graphic_heading_pane_g

0x8f0f,	// (0x00015773) list_single_graphic_heading_pane_t1_ParamLimits

0x8f0f,	// (0x00015773) list_single_graphic_heading_pane_t1

0x8f6a,	// (0x000157ce) list_single_graphic_heading_pane_t2_ParamLimits

0x8f6a,	// (0x000157ce) list_single_graphic_heading_pane_t2

0x0001,

0xf624,	// (0x0001be88) list_single_graphic_heading_pane_t_ParamLimits

0xf624,	// (0x0001be88) list_single_graphic_heading_pane_t

0x8f7c,	// (0x000157e0) list_single_large_graphic_pane_g1_ParamLimits

0x8f7c,	// (0x000157e0) list_single_large_graphic_pane_g1

0x8f88,	// (0x000157ec) list_single_large_graphic_pane_g2_ParamLimits

0x8f88,	// (0x000157ec) list_single_large_graphic_pane_g2

0x8f94,	// (0x000157f8) list_single_large_graphic_pane_g3_ParamLimits

0x8f94,	// (0x000157f8) list_single_large_graphic_pane_g3

0x0002,

0xf629,	// (0x0001be8d) list_single_large_graphic_pane_g_ParamLimits

0xf629,	// (0x0001be8d) list_single_large_graphic_pane_g

0x6e9c,	// (0x00013700) wait_border_pane_g2_copy1

0x8fa0,	// (0x00015804) list_single_large_graphic_pane_g4_cp2

0x8fa8,	// (0x0001580c) list_single_large_graphic_pane_t1_ParamLimits

0x8fa8,	// (0x0001580c) list_single_large_graphic_pane_t1

0x8fbe,	// (0x00015822) list_double_pane_g1_ParamLimits

0x8fbe,	// (0x00015822) list_double_pane_g1

0x8fca,	// (0x0001582e) list_double_pane_g2_ParamLimits

0x8fca,	// (0x0001582e) list_double_pane_g2

0x0001,

0xf630,	// (0x0001be94) list_double_pane_g_ParamLimits

0xf630,	// (0x0001be94) list_double_pane_g

0x8fd6,	// (0x0001583a) list_double_pane_t1_ParamLimits

0x8fd6,	// (0x0001583a) list_double_pane_t1

0x8fec,	// (0x00015850) list_double_pane_t2_ParamLimits

0x8fec,	// (0x00015850) list_double_pane_t2

0x0001,

0xf635,	// (0x0001be99) list_double_pane_t_ParamLimits

0xf635,	// (0x0001be99) list_double_pane_t

0x8ffe,	// (0x00015862) list_double2_pane_g1_ParamLimits

0x8ffe,	// (0x00015862) list_double2_pane_g1

0x8fca,	// (0x0001582e) list_double2_pane_g2_ParamLimits

0x8fca,	// (0x0001582e) list_double2_pane_g2

0x0001,

0xf63a,	// (0x0001be9e) list_double2_pane_g_ParamLimits

0xf63a,	// (0x0001be9e) list_double2_pane_g

0x8fd6,	// (0x0001583a) list_double2_pane_t1_ParamLimits

0x8fd6,	// (0x0001583a) list_double2_pane_t1

0x900d,	// (0x00015871) list_double2_pane_t2_ParamLimits

0x900d,	// (0x00015871) list_double2_pane_t2

0x0001,

0xf63f,	// (0x0001bea3) list_double2_pane_t_ParamLimits

0xf63f,	// (0x0001bea3) list_double2_pane_t

0x8fbe,	// (0x00015822) list_double_number_pane_g1_ParamLimits

0x8fbe,	// (0x00015822) list_double_number_pane_g1

0x8fca,	// (0x0001582e) list_double_number_pane_g2_ParamLimits

0x8fca,	// (0x0001582e) list_double_number_pane_g2

0x0001,

0xf630,	// (0x0001be94) list_double_number_pane_g_ParamLimits

0xf630,	// (0x0001be94) list_double_number_pane_g

0x901f,	// (0x00015883) list_double_number_pane_t1_ParamLimits

0x901f,	// (0x00015883) list_double_number_pane_t1

0x9031,	// (0x00015895) list_double_number_pane_t2_ParamLimits

0x9031,	// (0x00015895) list_double_number_pane_t2

0x9047,	// (0x000158ab) list_double_number_pane_t3_ParamLimits

0x9047,	// (0x000158ab) list_double_number_pane_t3

0x0002,

0xf644,	// (0x0001bea8) list_double_number_pane_t_ParamLimits

0xf644,	// (0x0001bea8) list_double_number_pane_t

0x9059,	// (0x000158bd) list_double_graphic_pane_g1_ParamLimits

0x9059,	// (0x000158bd) list_double_graphic_pane_g1

0x9065,	// (0x000158c9) list_double_graphic_pane_g2_ParamLimits

0x9065,	// (0x000158c9) list_double_graphic_pane_g2

0x9074,	// (0x000158d8) list_double_graphic_pane_g3_ParamLimits

0x9074,	// (0x000158d8) list_double_graphic_pane_g3

0x0003,

0xf64b,	// (0x0001beaf) list_double_graphic_pane_g_ParamLimits

0xf64b,	// (0x0001beaf) list_double_graphic_pane_g

0x908c,	// (0x000158f0) list_double_graphic_pane_t1_ParamLimits

0x908c,	// (0x000158f0) list_double_graphic_pane_t1

0x90a2,	// (0x00015906) list_double_graphic_pane_t2_ParamLimits

0x90a2,	// (0x00015906) list_double_graphic_pane_t2

0x0001,

0xf654,	// (0x0001beb8) list_double_graphic_pane_t_ParamLimits

0xf654,	// (0x0001beb8) list_double_graphic_pane_t

0x9059,	// (0x000158bd) list_double2_graphic_pane_g1_ParamLimits

0x9059,	// (0x000158bd) list_double2_graphic_pane_g1

0x90b4,	// (0x00015918) list_double2_graphic_pane_g2_ParamLimits

0x90b4,	// (0x00015918) list_double2_graphic_pane_g2

0x90c0,	// (0x00015924) list_double2_graphic_pane_g3_ParamLimits

0x90c0,	// (0x00015924) list_double2_graphic_pane_g3

0x0002,

0xf659,	// (0x0001bebd) list_double2_graphic_pane_g_ParamLimits

0xf659,	// (0x0001bebd) list_double2_graphic_pane_g

0x9031,	// (0x00015895) list_double2_graphic_pane_t1_ParamLimits

0x9031,	// (0x00015895) list_double2_graphic_pane_t1

0x90cc,	// (0x00015930) list_double2_graphic_pane_t2_ParamLimits

0x90cc,	// (0x00015930) list_double2_graphic_pane_t2

0x0001,

0xf660,	// (0x0001bec4) list_double2_graphic_pane_t_ParamLimits

0xf660,	// (0x0001bec4) list_double2_graphic_pane_t

0x90de,	// (0x00015942) list_double_large_graphic_pane_g1_ParamLimits

0x90de,	// (0x00015942) list_double_large_graphic_pane_g1

0x8ffe,	// (0x00015862) list_double_large_graphic_pane_g2_ParamLimits

0x8ffe,	// (0x00015862) list_double_large_graphic_pane_g2

0x8fca,	// (0x0001582e) list_double_large_graphic_pane_g3_ParamLimits

0x8fca,	// (0x0001582e) list_double_large_graphic_pane_g3

0x9107,	// (0x0001596b) list_double_large_graphic_pane_g4_ParamLimits

0x9107,	// (0x0001596b) list_double_large_graphic_pane_g4

0x0004,

0xf665,	// (0x0001bec9) list_double_large_graphic_pane_g_ParamLimits

0xf665,	// (0x0001bec9) list_double_large_graphic_pane_g

0x912d,	// (0x00015991) list_double_large_graphic_pane_t1_ParamLimits

0x912d,	// (0x00015991) list_double_large_graphic_pane_t1

0x9146,	// (0x000159aa) list_double_large_graphic_pane_t2_ParamLimits

0x9146,	// (0x000159aa) list_double_large_graphic_pane_t2

0x0001,

0xf670,	// (0x0001bed4) list_double_large_graphic_pane_t_ParamLimits

0xf670,	// (0x0001bed4) list_double_large_graphic_pane_t

0x9158,	// (0x000159bc) list_double2_large_graphic_pane_g1_ParamLimits

0x9158,	// (0x000159bc) list_double2_large_graphic_pane_g1

0x8ffe,	// (0x00015862) list_double2_large_graphic_pane_g2_ParamLimits

0x8ffe,	// (0x00015862) list_double2_large_graphic_pane_g2

0x8fca,	// (0x0001582e) list_double2_large_graphic_pane_g3_ParamLimits

0x8fca,	// (0x0001582e) list_double2_large_graphic_pane_g3

0x0002,

0xf675,	// (0x0001bed9) list_double2_large_graphic_pane_g_ParamLimits

0xf675,	// (0x0001bed9) list_double2_large_graphic_pane_g

0x9164,	// (0x000159c8) list_double2_large_graphic_pane_t1_ParamLimits

0x9164,	// (0x000159c8) list_double2_large_graphic_pane_t1

0x917a,	// (0x000159de) list_double2_large_graphic_pane_t2_ParamLimits

0x917a,	// (0x000159de) list_double2_large_graphic_pane_t2

0x0001,

0xf67c,	// (0x0001bee0) list_double2_large_graphic_pane_t_ParamLimits

0xf67c,	// (0x0001bee0) list_double2_large_graphic_pane_t

0x918c,	// (0x000159f0) list_double_heading_pane_g1_ParamLimits

0x918c,	// (0x000159f0) list_double_heading_pane_g1

0x919b,	// (0x000159ff) list_double_heading_pane_g2_ParamLimits

0x919b,	// (0x000159ff) list_double_heading_pane_g2

0x0001,

0xf681,	// (0x0001bee5) list_double_heading_pane_g_ParamLimits

0xf681,	// (0x0001bee5) list_double_heading_pane_g

0x91a7,	// (0x00015a0b) list_double_heading_pane_t1_ParamLimits

0x91a7,	// (0x00015a0b) list_double_heading_pane_t1

0x91bd,	// (0x00015a21) list_double_heading_pane_t2_ParamLimits

0x91bd,	// (0x00015a21) list_double_heading_pane_t2

0x0001,

0xf686,	// (0x0001beea) list_double_heading_pane_t_ParamLimits

0xf686,	// (0x0001beea) list_double_heading_pane_t

0x91cf,	// (0x00015a33) list_double_graphic_heading_pane_g1_ParamLimits

0x91cf,	// (0x00015a33) list_double_graphic_heading_pane_g1

0x918c,	// (0x000159f0) list_double_graphic_heading_pane_g2_ParamLimits

0x918c,	// (0x000159f0) list_double_graphic_heading_pane_g2

0x919b,	// (0x000159ff) list_double_graphic_heading_pane_g3_ParamLimits

0x919b,	// (0x000159ff) list_double_graphic_heading_pane_g3

0x0002,

0xf68b,	// (0x0001beef) list_double_graphic_heading_pane_g_ParamLimits

0xf68b,	// (0x0001beef) list_double_graphic_heading_pane_g

0x91db,	// (0x00015a3f) list_double_graphic_heading_pane_t1_ParamLimits

0x91db,	// (0x00015a3f) list_double_graphic_heading_pane_t1

0x91f1,	// (0x00015a55) list_double_graphic_heading_pane_t2_ParamLimits

0x91f1,	// (0x00015a55) list_double_graphic_heading_pane_t2

0x0001,

0xf692,	// (0x0001bef6) list_double_graphic_heading_pane_t_ParamLimits

0xf692,	// (0x0001bef6) list_double_graphic_heading_pane_t

0x8ffe,	// (0x00015862) list_double_time_pane_g1_ParamLimits

0x8ffe,	// (0x00015862) list_double_time_pane_g1

0x8fca,	// (0x0001582e) list_double_time_pane_g2_ParamLimits

0x8fca,	// (0x0001582e) list_double_time_pane_g2

0x0001,

0xf63a,	// (0x0001be9e) list_double_time_pane_g_ParamLimits

0xf63a,	// (0x0001be9e) list_double_time_pane_g

0x9164,	// (0x000159c8) list_double_time_pane_t1_ParamLimits

0x9164,	// (0x000159c8) list_double_time_pane_t1

0x9203,	// (0x00015a67) list_double_time_pane_t2_ParamLimits

0x9203,	// (0x00015a67) list_double_time_pane_t2

0x9215,	// (0x00015a79) list_double_time_pane_t3_ParamLimits

0x9215,	// (0x00015a79) list_double_time_pane_t3

0x9227,	// (0x00015a8b) list_double_time_pane_t4_ParamLimits

0x9227,	// (0x00015a8b) list_double_time_pane_t4

0x0003,

0xf697,	// (0x0001befb) list_double_time_pane_t_ParamLimits

0xf697,	// (0x0001befb) list_double_time_pane_t

0x9239,	// (0x00015a9d) list_setting_pane_g1_ParamLimits

0x9239,	// (0x00015a9d) list_setting_pane_g1

0x9245,	// (0x00015aa9) list_setting_pane_g2_ParamLimits

0x9245,	// (0x00015aa9) list_setting_pane_g2

0x0001,

0xf6a0,	// (0x0001bf04) list_setting_pane_g_ParamLimits

0xf6a0,	// (0x0001bf04) list_setting_pane_g

0x9251,	// (0x00015ab5) list_setting_pane_t1_ParamLimits

0x9251,	// (0x00015ab5) list_setting_pane_t1

0x9268,	// (0x00015acc) list_setting_pane_t2_ParamLimits

0x9268,	// (0x00015acc) list_setting_pane_t2

0x0002,

0xf6a5,	// (0x0001bf09) list_setting_pane_t_ParamLimits

0xf6a5,	// (0x0001bf09) list_setting_pane_t

0x92a5,	// (0x00015b09) set_value_pane_cp_ParamLimits

0x92a5,	// (0x00015b09) set_value_pane_cp

0x92b1,	// (0x00015b15) list_setting_number_pane_g1_ParamLimits

0x92b1,	// (0x00015b15) list_setting_number_pane_g1

0x92bd,	// (0x00015b21) list_setting_number_pane_g2_ParamLimits

0x92bd,	// (0x00015b21) list_setting_number_pane_g2

0x0001,

0xf6ac,	// (0x0001bf10) list_setting_number_pane_g_ParamLimits

0xf6ac,	// (0x0001bf10) list_setting_number_pane_g

0x92c9,	// (0x00015b2d) list_setting_number_pane_t1_ParamLimits

0x92c9,	// (0x00015b2d) list_setting_number_pane_t1

0x92db,	// (0x00015b3f) list_setting_number_pane_t2_ParamLimits

0x92db,	// (0x00015b3f) list_setting_number_pane_t2

0x92f2,	// (0x00015b56) list_setting_number_pane_t3_ParamLimits

0x92f2,	// (0x00015b56) list_setting_number_pane_t3

0x0003,

0xf6b1,	// (0x0001bf15) list_setting_number_pane_t_ParamLimits

0xf6b1,	// (0x0001bf15) list_setting_number_pane_t

0x92a5,	// (0x00015b09) set_value_pane_ParamLimits

0x92a5,	// (0x00015b09) set_value_pane

0x42c5,	// (0x00010b29) bg_set_opt_pane_ParamLimits

0x42c5,	// (0x00010b29) bg_set_opt_pane

0x9333,	// (0x00015b97) set_value_pane_t1

0x42f4,	// (0x00010b58) slider_set_pane_cp3

0x42fd,	// (0x00010b61) volume_small_pane_cp

0x4306,	// (0x00010b6a) list_form_gen_pane

0x3e59,	// (0x000106bd) scroll_pane_cp8

0x9349,	// (0x00015bad) form_field_data_pane_ParamLimits

0x9349,	// (0x00015bad) form_field_data_pane

0x9369,	// (0x00015bcd) form_field_data_wide_pane_ParamLimits

0x9369,	// (0x00015bcd) form_field_data_wide_pane

0x9388,	// (0x00015bec) form_field_popup_pane_ParamLimits

0x9388,	// (0x00015bec) form_field_popup_pane

0x93a0,	// (0x00015c04) form_field_popup_wide_pane_ParamLimits

0x93a0,	// (0x00015c04) form_field_popup_wide_pane

0x93b7,	// (0x00015c1b) form_field_slider_pane_ParamLimits

0x93b7,	// (0x00015c1b) form_field_slider_pane

0x93ca,	// (0x00015c2e) form_field_slider_wide_pane_ParamLimits

0x93ca,	// (0x00015c2e) form_field_slider_wide_pane

0x43b3,	// (0x00010c17) data_form_pane

0x443b,	// (0x00010c9f) form_field_data_pane_t1

0x43df,	// (0x00010c43) input_focus_pane

0x43ed,	// (0x00010c51) data_form_wide_pane

0x93f1,	// (0x00015c55) form_field_data_wide_pane_t1

0x3cd0,	// (0x00010534) input_focus_pane_cp6

0x9413,	// (0x00015c77) form_field_popup_pane_t1

0x43df,	// (0x00010c43) input_focus_pane_cp7

0x43b3,	// (0x00010c17) list_form_pane

0x9433,	// (0x00015c97) form_field_popup_wide_pane_t1

0x43df,	// (0x00010c43) input_focus_pane_cp8

0x4470,	// (0x00010cd4) list_form_wide_pane

0x9450,	// (0x00015cb4) form_field_slider_pane_t1_ParamLimits

0x9450,	// (0x00015cb4) form_field_slider_pane_t1

0x9462,	// (0x00015cc6) form_field_slider_pane_t2_ParamLimits

0x9462,	// (0x00015cc6) form_field_slider_pane_t2

0x0001,

0xf6c1,	// (0x0001bf25) form_field_slider_pane_t_ParamLimits

0xf6c1,	// (0x0001bf25) form_field_slider_pane_t

0x3962,	// (0x000101c6) input_focus_pane_cp9_ParamLimits

0x3962,	// (0x000101c6) input_focus_pane_cp9

0x9474,	// (0x00015cd8) slider_cont_pane_ParamLimits

0x9474,	// (0x00015cd8) slider_cont_pane

0x44c3,	// (0x00010d27) form_field_slider_wide_pane_t1_ParamLimits

0x44c3,	// (0x00010d27) form_field_slider_wide_pane_t1

0x9488,	// (0x00015cec) form_field_slider_wide_pane_t2_ParamLimits

0x9488,	// (0x00015cec) form_field_slider_wide_pane_t2

0x0001,

0xf6c6,	// (0x0001bf2a) form_field_slider_wide_pane_t_ParamLimits

0xf6c6,	// (0x0001bf2a) form_field_slider_wide_pane_t

0x3962,	// (0x000101c6) input_focus_pane_cp10_ParamLimits

0x3962,	// (0x000101c6) input_focus_pane_cp10

0x949a,	// (0x00015cfe) slider_cont_pane_cp1_ParamLimits

0x949a,	// (0x00015cfe) slider_cont_pane_cp1

0x94b0,	// (0x00015d14) slider_form_pane_cp

0x4505,	// (0x00010d69) input_focus_pane_g1

0x450d,	// (0x00010d71) input_focus_pane_g2

0x4515,	// (0x00010d79) input_focus_pane_g3

0x451d,	// (0x00010d81) input_focus_pane_g4

0x4525,	// (0x00010d89) input_focus_pane_g5

0x452d,	// (0x00010d91) input_focus_pane_g6

0x4535,	// (0x00010d99) input_focus_pane_g7

0x453d,	// (0x00010da1) input_focus_pane_g8

0x4545,	// (0x00010da9) input_focus_pane_g9

0x3502,	// (0x0000fd66) input_focus_pane_g10

0x0009,

0xf6cb,	// (0x0001bf2f) input_focus_pane_g

0x6ea5,	// (0x00013709) wait_border_pane_g3_copy1

0x94b8,	// (0x00015d1c) data_form_pane_t1

0x3502,	// (0x0000fd66) wait_anim_pane_g1_copy1

0x96d6,	// (0x00015f3a) data_form_wide_pane_t1

0x94d2,	// (0x00015d36) list_form_graphic_pane_cp_ParamLimits

0x94d2,	// (0x00015d36) list_form_graphic_pane_cp

0x7aef,	// (0x00014353) slider_form_pane_g1

0x7af8,	// (0x0001435c) slider_form_pane_g2

0x0006,

0xf9bc,	// (0x0001c220) slider_form_pane_g

0x94d2,	// (0x00015d36) list_form_graphic_pane_ParamLimits

0x94d2,	// (0x00015d36) list_form_graphic_pane

0x94e8,	// (0x00015d4c) list_form_graphic_pane_g1

0x94f0,	// (0x00015d54) list_form_graphic_pane_t1_ParamLimits

0x94f0,	// (0x00015d54) list_form_graphic_pane_t1

0x36c9,	// (0x0000ff2d) list_highlight_pane_cp5_ParamLimits

0x36c9,	// (0x0000ff2d) list_highlight_pane_cp5

0x9505,	// (0x00015d69) find_pane_g1

0x45b8,	// (0x00010e1c) input_find_pane

0x950e,	// (0x00015d72) input_find_pane_g1_ParamLimits

0x950e,	// (0x00015d72) input_find_pane_g1

0x951a,	// (0x00015d7e) input_find_pane_t1_ParamLimits

0x951a,	// (0x00015d7e) input_find_pane_t1

0x952f,	// (0x00015d93) input_find_pane_t2_ParamLimits

0x952f,	// (0x00015d93) input_find_pane_t2

0x0001,

0xf6e0,	// (0x0001bf44) input_find_pane_t_ParamLimits

0xf6e0,	// (0x0001bf44) input_find_pane_t

0x45f7,	// (0x00010e5b) input_focus_pane_cp5_ParamLimits

0x45f7,	// (0x00010e5b) input_focus_pane_cp5

0x3962,	// (0x000101c6) bg_popup_window_pane_cp2_ParamLimits

0x3962,	// (0x000101c6) bg_popup_window_pane_cp2

0x4611,	// (0x00010e75) listscroll_menu_pane_ParamLimits

0x4611,	// (0x00010e75) listscroll_menu_pane

0x461d,	// (0x00010e81) popup_submenu_window_ParamLimits

0x461d,	// (0x00010e81) popup_submenu_window

0x4641,	// (0x00010ea5) find_popup_pane_g1

0x4649,	// (0x00010ead) input_popup_find_pane_cp

0x45f7,	// (0x00010e5b) input_focus_pane_cp4_ParamLimits

0x45f7,	// (0x00010e5b) input_focus_pane_cp4

0x465f,	// (0x00010ec3) input_popup_find_pane_t1_ParamLimits

0x465f,	// (0x00010ec3) input_popup_find_pane_t1

0x35e9,	// (0x0000fe4d) bg_popup_sub_pane_cp

0x468d,	// (0x00010ef1) listscroll_popup_sub_pane

0x4695,	// (0x00010ef9) list_submenu_pane_ParamLimits

0x4695,	// (0x00010ef9) list_submenu_pane

0x46a6,	// (0x00010f0a) scroll_pane_cp4

0x46ae,	// (0x00010f12) list_single_popup_submenu_pane_ParamLimits

0x46ae,	// (0x00010f12) list_single_popup_submenu_pane

0x46c2,	// (0x00010f26) list_single_popup_submenu_pane_g1

0x46ca,	// (0x00010f2e) list_single_popup_submenu_pane_t1_ParamLimits

0x46ca,	// (0x00010f2e) list_single_popup_submenu_pane_t1

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp1_ParamLimits

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp1

0x46df,	// (0x00010f43) tabs_2_active_pane_g1

0x46e7,	// (0x00010f4b) tabs_2_active_pane_t1

0x36c9,	// (0x0000ff2d) bg_passive_tab_pane_cp1_ParamLimits

0x36c9,	// (0x0000ff2d) bg_passive_tab_pane_cp1

0x46df,	// (0x00010f43) tabs_2_passive_pane_g1

0x46e7,	// (0x00010f4b) tabs_2_passive_pane_t1

0x46f9,	// (0x00010f5d) bg_active_tab_pane_cp4

0x4707,	// (0x00010f6b) tabs_2_long_active_pane_t1

0x471a,	// (0x00010f7e) bg_passive_tab_pane_cp4

0x6e90,	// (0x000136f4) list_single_midp_graphic_pane_g4_ParamLimits

0x46f9,	// (0x00010f5d) bg_active_tab_pane_cp5

0x4726,	// (0x00010f8a) tabs_3_long_active_pane_t1

0x471a,	// (0x00010f7e) bg_passive_tab_pane_cp5

0x6e90,	// (0x000136f4) list_single_midp_graphic_pane_g4

0x36c9,	// (0x0000ff2d) bg_popup_window_pane_cp13_ParamLimits

0x36c9,	// (0x0000ff2d) bg_popup_window_pane_cp13

0x4741,	// (0x00010fa5) listscroll_popup_fast_pane_ParamLimits

0x4741,	// (0x00010fa5) listscroll_popup_fast_pane

0x4750,	// (0x00010fb4) grid_popup_fast_pane_ParamLimits

0x4750,	// (0x00010fb4) grid_popup_fast_pane

0x4762,	// (0x00010fc6) scroll_pane_cp9_ParamLimits

0x4762,	// (0x00010fc6) scroll_pane_cp9

0xc4f5,	// (0x00018d59) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc4f5,	// (0x00018d59) list_single_graphic_hl_pane_t1_cp2

0x4786,	// (0x00010fea) input_focus_pane_cp20_ParamLimits

0x4786,	// (0x00010fea) input_focus_pane_cp20

0x4794,	// (0x00010ff8) query_popup_data_pane_t1_ParamLimits

0x4794,	// (0x00010ff8) query_popup_data_pane_t1

0x47a7,	// (0x0001100b) query_popup_data_pane_t2_ParamLimits

0x47a7,	// (0x0001100b) query_popup_data_pane_t2

0x47ed,	// (0x00011051) query_popup_data_pane_t3_ParamLimits

0x47ed,	// (0x00011051) query_popup_data_pane_t3

0x482e,	// (0x00011092) query_popup_data_pane_t4_ParamLimits

0x482e,	// (0x00011092) query_popup_data_pane_t4

0x486a,	// (0x000110ce) query_popup_data_pane_t5_ParamLimits

0x486a,	// (0x000110ce) query_popup_data_pane_t5

0x0004,

0xf6e5,	// (0x0001bf49) query_popup_data_pane_t_ParamLimits

0xf6e5,	// (0x0001bf49) query_popup_data_pane_t

0x4505,	// (0x00010d69) bg_set_opt_pane_g1

0x450d,	// (0x00010d71) bg_set_opt_pane_g2

0x4515,	// (0x00010d79) bg_set_opt_pane_g3

0x451d,	// (0x00010d81) bg_set_opt_pane_g4

0x4525,	// (0x00010d89) bg_set_opt_pane_g5

0x452d,	// (0x00010d91) bg_set_opt_pane_g6

0x4535,	// (0x00010d99) bg_set_opt_pane_g7

0x453d,	// (0x00010da1) bg_set_opt_pane_g8

0x4545,	// (0x00010da9) bg_set_opt_pane_g9

0x0008,

0xf6f0,	// (0x0001bf54) bg_set_opt_pane_g

0xa286,	// (0x00016aea) control_top_pane_stacon_ParamLimits

0xa286,	// (0x00016aea) control_top_pane_stacon

0xa2d9,	// (0x00016b3d) signal_pane_stacon_ParamLimits

0xa2d9,	// (0x00016b3d) signal_pane_stacon

0x4e7f,	// (0x000116e3) stacon_top_pane_g1_ParamLimits

0x4e7f,	// (0x000116e3) stacon_top_pane_g1

0xa2fe,	// (0x00016b62) title_pane_stacon_ParamLimits

0xa2fe,	// (0x00016b62) title_pane_stacon

0xa320,	// (0x00016b84) uni_indicator_pane_stacon_ParamLimits

0xa320,	// (0x00016b84) uni_indicator_pane_stacon

0xa335,	// (0x00016b99) battery_pane_stacon_ParamLimits

0xa335,	// (0x00016b99) battery_pane_stacon

0xa375,	// (0x00016bd9) control_bottom_pane_stacon_ParamLimits

0xa375,	// (0x00016bd9) control_bottom_pane_stacon

0xa394,	// (0x00016bf8) navi_pane_stacon_ParamLimits

0xa394,	// (0x00016bf8) navi_pane_stacon

0x4ea1,	// (0x00011705) stacon_bottom_pane_g1_ParamLimits

0x4ea1,	// (0x00011705) stacon_bottom_pane_g1

0x48a1,	// (0x00011105) aid_levels_signal_lsc_ParamLimits

0x48a1,	// (0x00011105) aid_levels_signal_lsc

0xa052,	// (0x000168b6) signal_pane_stacon_g1_ParamLimits

0xa052,	// (0x000168b6) signal_pane_stacon_g1

0xa05e,	// (0x000168c2) signal_pane_stacon_g2_ParamLimits

0xa05e,	// (0x000168c2) signal_pane_stacon_g2

0x0001,

0xf703,	// (0x0001bf67) signal_pane_stacon_g_ParamLimits

0xf703,	// (0x0001bf67) signal_pane_stacon_g

0xa092,	// (0x000168f6) title_pane_stacon_t1_ParamLimits

0xa092,	// (0x000168f6) title_pane_stacon_t1

0x48cf,	// (0x00011133) uni_indicator_pane_stacon_g1

0x48d9,	// (0x0001113d) uni_indicator_pane_stacon_g2

0x48bb,	// (0x0001111f) uni_indicator_pane_stacon_g3

0x48c5,	// (0x00011129) uni_indicator_pane_stacon_g4

0x0003,

0xf70f,	// (0x0001bf73) uni_indicator_pane_stacon_g

0xa0b7,	// (0x0001691b) control_top_pane_stacon_g1

0xa0bf,	// (0x00016923) control_top_pane_stacon_t1_ParamLimits

0xa0bf,	// (0x00016923) control_top_pane_stacon_t1

0x48e3,	// (0x00011147) aid_levels_battery_lsc_ParamLimits

0x48e3,	// (0x00011147) aid_levels_battery_lsc

0xa0f0,	// (0x00016954) battery_pane_stacon_g1_ParamLimits

0xa0f0,	// (0x00016954) battery_pane_stacon_g1

0xa0fc,	// (0x00016960) battery_pane_stacon_g2_ParamLimits

0xa0fc,	// (0x00016960) battery_pane_stacon_g2

0x0001,

0xf718,	// (0x0001bf7c) battery_pane_stacon_g_ParamLimits

0xf718,	// (0x0001bf7c) battery_pane_stacon_g

0xa12b,	// (0x0001698f) navi_icon_pane_stacon

0xa13b,	// (0x0001699f) navi_navi_pane_stacon

0xa12b,	// (0x0001698f) navi_text_pane_stacon

0xa0b7,	// (0x0001691b) control_bottom_pane_stacon_g1

0xa14b,	// (0x000169af) control_bottom_pane_stacon_t1_ParamLimits

0xa14b,	// (0x000169af) control_bottom_pane_stacon_t1

0x490b,	// (0x0001116f) grid_app_pane_ParamLimits

0x490b,	// (0x0001116f) grid_app_pane

0x4927,	// (0x0001118b) scroll_pane_cp15_ParamLimits

0x4927,	// (0x0001118b) scroll_pane_cp15

0x493a,	// (0x0001119e) cell_app_pane_ParamLimits

0x493a,	// (0x0001119e) cell_app_pane

0x495c,	// (0x000111c0) cell_app_pane_g1_ParamLimits

0x495c,	// (0x000111c0) cell_app_pane_g1

0x4980,	// (0x000111e4) cell_app_pane_g2_ParamLimits

0x4980,	// (0x000111e4) cell_app_pane_g2

0x0001,

0xf71d,	// (0x0001bf81) cell_app_pane_g_ParamLimits

0xf71d,	// (0x0001bf81) cell_app_pane_g

0x498c,	// (0x000111f0) cell_app_pane_t1_ParamLimits

0x498c,	// (0x000111f0) cell_app_pane_t1

0x499e,	// (0x00011202) grid_highlight_pane_ParamLimits

0x499e,	// (0x00011202) grid_highlight_pane

0x4505,	// (0x00010d69) cell_highlight_pane_g1

0x450d,	// (0x00010d71) cell_highlight_pane_g2

0x4515,	// (0x00010d79) cell_highlight_pane_g3

0x451d,	// (0x00010d81) cell_highlight_pane_g4

0x4525,	// (0x00010d89) cell_highlight_pane_g5

0x452d,	// (0x00010d91) cell_highlight_pane_g6

0x4535,	// (0x00010d99) cell_highlight_pane_g7

0x453d,	// (0x00010da1) cell_highlight_pane_g8

0x4545,	// (0x00010da9) cell_highlight_pane_g9

0x3502,	// (0x0000fd66) cell_highlight_pane_g10

0x0009,

0xf6cb,	// (0x0001bf2f) cell_highlight_pane_g

0x49af,	// (0x00011213) bg_scroll_pane

0xa18f,	// (0x000169f3) scroll_handle_pane

0x49f6,	// (0x0001125a) scroll_bg_pane_g1

0x4a0b,	// (0x0001126f) scroll_bg_pane_g2

0x4a23,	// (0x00011287) scroll_bg_pane_g3

0x0002,

0xf722,	// (0x0001bf86) scroll_bg_pane_g

0x4a38,	// (0x0001129c) scroll_handle_focus_pane_ParamLimits

0x4a38,	// (0x0001129c) scroll_handle_focus_pane

0x49f6,	// (0x0001125a) scroll_handle_pane_g1

0x4a45,	// (0x000112a9) scroll_handle_pane_g2

0x4a23,	// (0x00011287) scroll_handle_pane_g3

0x0002,

0xf729,	// (0x0001bf8d) scroll_handle_pane_g

0x45f7,	// (0x00010e5b) bg_popup_sub_pane_cp21_ParamLimits

0x45f7,	// (0x00010e5b) bg_popup_sub_pane_cp21

0x4a59,	// (0x000112bd) popup_fep_japan_predictive_window_t1_ParamLimits

0x4a59,	// (0x000112bd) popup_fep_japan_predictive_window_t1

0x4a70,	// (0x000112d4) popup_fep_japan_predictive_window_t2_ParamLimits

0x4a70,	// (0x000112d4) popup_fep_japan_predictive_window_t2

0x4aa3,	// (0x00011307) popup_fep_japan_predictive_window_t3_ParamLimits

0x4aa3,	// (0x00011307) popup_fep_japan_predictive_window_t3

0x0002,

0xf730,	// (0x0001bf94) popup_fep_japan_predictive_window_t_ParamLimits

0xf730,	// (0x0001bf94) popup_fep_japan_predictive_window_t

0x35e9,	// (0x0000fe4d) bg_popup_sub_pane_cp23

0x4ada,	// (0x0001133e) listscroll_japin_cand_pane

0x4ae2,	// (0x00011346) popup_fep_japan_candidate_window_t1

0x4af0,	// (0x00011354) candidate_pane_ParamLimits

0x4af0,	// (0x00011354) candidate_pane

0x4b03,	// (0x00011367) scroll_pane_cp30

0x4b0b,	// (0x0001136f) list_single_popup_jap_candidate_pane_ParamLimits

0x4b0b,	// (0x0001136f) list_single_popup_jap_candidate_pane

0x35e9,	// (0x0000fe4d) list_highlight_pane_cp30

0x4b20,	// (0x00011384) list_single_popup_jap_candidate_pane_t1

0x4b2f,	// (0x00011393) level_1_signal

0x4b3c,	// (0x000113a0) level_2_signal

0x4b49,	// (0x000113ad) level_3_signal

0x4b56,	// (0x000113ba) level_4_signal

0x4b63,	// (0x000113c7) level_5_signal

0x4b70,	// (0x000113d4) level_6_signal

0x4b7d,	// (0x000113e1) level_7_signal

0x4b2f,	// (0x00011393) level_1_battery

0x4b3c,	// (0x000113a0) level_2_battery

0x4b49,	// (0x000113ad) level_3_battery

0x4b56,	// (0x000113ba) level_4_battery

0x4b63,	// (0x000113c7) level_5_battery

0x4b70,	// (0x000113d4) level_6_battery

0x4b7d,	// (0x000113e1) level_7_battery

0x4ba2,	// (0x00011406) list_menu_pane_ParamLimits

0x4ba2,	// (0x00011406) list_menu_pane

0x4bb3,	// (0x00011417) scroll_pane_cp25_ParamLimits

0x4bb3,	// (0x00011417) scroll_pane_cp25

0x4bcc,	// (0x00011430) list_double2_graphic_pane_cp2_ParamLimits

0x4bcc,	// (0x00011430) list_double2_graphic_pane_cp2

0x4bcc,	// (0x00011430) list_double2_large_graphic_pane_cp2_ParamLimits

0x4bcc,	// (0x00011430) list_double2_large_graphic_pane_cp2

0x4bcc,	// (0x00011430) list_double2_pane_cp2_ParamLimits

0x4bcc,	// (0x00011430) list_double2_pane_cp2

0x4bcc,	// (0x00011430) list_double_graphic_pane_cp2_ParamLimits

0x4bcc,	// (0x00011430) list_double_graphic_pane_cp2

0x4bcc,	// (0x00011430) list_double_large_graphic_pane_cp2_ParamLimits

0x4bcc,	// (0x00011430) list_double_large_graphic_pane_cp2

0x4bcc,	// (0x00011430) list_double_number_pane_cp2_ParamLimits

0x4bcc,	// (0x00011430) list_double_number_pane_cp2

0x4bcc,	// (0x00011430) list_double_pane_cp2_ParamLimits

0x4bcc,	// (0x00011430) list_double_pane_cp2

0x4bdc,	// (0x00011440) list_single_2graphic_pane_cp2_ParamLimits

0x4bdc,	// (0x00011440) list_single_2graphic_pane_cp2

0x4bdc,	// (0x00011440) list_single_graphic_heading_pane_cp2_ParamLimits

0x4bdc,	// (0x00011440) list_single_graphic_heading_pane_cp2

0x4bdc,	// (0x00011440) list_single_graphic_pane_cp2_ParamLimits

0x4bdc,	// (0x00011440) list_single_graphic_pane_cp2

0x4bdc,	// (0x00011440) list_single_heading_pane_cp2_ParamLimits

0x4bdc,	// (0x00011440) list_single_heading_pane_cp2

0x4bf1,	// (0x00011455) list_single_large_graphic_pane_cp2_ParamLimits

0x4bf1,	// (0x00011455) list_single_large_graphic_pane_cp2

0x4bdc,	// (0x00011440) list_single_number_heading_pane_cp2_ParamLimits

0x4bdc,	// (0x00011440) list_single_number_heading_pane_cp2

0x4bdc,	// (0x00011440) list_single_number_pane_cp2_ParamLimits

0x4bdc,	// (0x00011440) list_single_number_pane_cp2

0x4bdc,	// (0x00011440) list_single_pane_cp2_ParamLimits

0x4bdc,	// (0x00011440) list_single_pane_cp2

0x4c48,	// (0x000114ac) bg_popup_sub_pane_cp22

0xa23e,	// (0x00016aa2) popup_side_volume_key_window_g1

0xa262,	// (0x00016ac6) popup_side_volume_key_window_t1

0xa27e,	// (0x00016ae2) volume_small_pane_cp1

0x3962,	// (0x000101c6) bg_popup_sub_pane_cp24_ParamLimits

0x3962,	// (0x000101c6) bg_popup_sub_pane_cp24

0x4c5e,	// (0x000114c2) fep_china_uni_candidate_pane_ParamLimits

0x4c5e,	// (0x000114c2) fep_china_uni_candidate_pane

0x4c72,	// (0x000114d6) fep_china_uni_entry_pane

0x4c82,	// (0x000114e6) popup_fep_china_uni_window_g1

0x4c9e,	// (0x00011502) fep_china_uni_entry_pane_g1

0x4ca6,	// (0x0001150a) fep_china_uni_entry_pane_g2

0x0001,

0xf75d,	// (0x0001bfc1) fep_china_uni_entry_pane_g

0x4cae,	// (0x00011512) fep_entry_item_pane

0x4cb8,	// (0x0001151c) fep_candidate_item_pane

0x4cc0,	// (0x00011524) fep_china_uni_candidate_pane_g1

0x4cc8,	// (0x0001152c) fep_china_uni_candidate_pane_g2

0x4cd0,	// (0x00011534) fep_china_uni_candidate_pane_g3

0x4cd8,	// (0x0001153c) fep_china_uni_candidate_pane_g4

0x0003,

0xf762,	// (0x0001bfc6) fep_china_uni_candidate_pane_g

0x3502,	// (0x0000fd66) fep_entry_item_pane_g1

0x4ce0,	// (0x00011544) fep_entry_item_pane_t1_ParamLimits

0x4ce0,	// (0x00011544) fep_entry_item_pane_t1

0x4cf6,	// (0x0001155a) fep_candidate_item_pane_t1_ParamLimits

0x4cf6,	// (0x0001155a) fep_candidate_item_pane_t1

0x4d0b,	// (0x0001156f) fep_candidate_item_pane_t2_ParamLimits

0x4d0b,	// (0x0001156f) fep_candidate_item_pane_t2

0x0001,

0xf76b,	// (0x0001bfcf) fep_candidate_item_pane_t_ParamLimits

0xf76b,	// (0x0001bfcf) fep_candidate_item_pane_t

0x36c9,	// (0x0000ff2d) list_highlight_pane_cp31_ParamLimits

0x36c9,	// (0x0000ff2d) list_highlight_pane_cp31

0x4d1d,	// (0x00011581) level_1_signal_lsc

0x4d26,	// (0x0001158a) level_2_signal_lsc

0x4d2f,	// (0x00011593) level_3_signal_lsc

0x4d38,	// (0x0001159c) level_4_signal_lsc

0x4d41,	// (0x000115a5) level_5_signal_lsc

0x4d4a,	// (0x000115ae) level_6_signal_lsc

0x4d53,	// (0x000115b7) level_7_signal_lsc

0x4d53,	// (0x000115b7) level_1_battery_lsc

0x4d5c,	// (0x000115c0) level_2_battery_lsc

0x4d65,	// (0x000115c9) level_3_battery_lsc

0x4d6e,	// (0x000115d2) level_4_battery_lsc

0x4d77,	// (0x000115db) level_5_battery_lsc

0x4d80,	// (0x000115e4) level_6_battery_lsc

0x4d1d,	// (0x00011581) level_7_battery_lsc

0x4d89,	// (0x000115ed) scroll_handle_focus_pane_g1

0x4d92,	// (0x000115f6) scroll_handle_focus_pane_g2

0x4d9b,	// (0x000115ff) scroll_handle_focus_pane_g3

0x0002,

0xf770,	// (0x0001bfd4) scroll_handle_focus_pane_g

0x9544,	// (0x00015da8) list_single_2graphic_pane_g1_ParamLimits

0x9544,	// (0x00015da8) list_single_2graphic_pane_g1

0x8f5b,	// (0x000157bf) list_single_2graphic_pane_g2_ParamLimits

0x8f5b,	// (0x000157bf) list_single_2graphic_pane_g2

0x8eed,	// (0x00015751) list_single_2graphic_pane_g3_ParamLimits

0x8eed,	// (0x00015751) list_single_2graphic_pane_g3

0x9550,	// (0x00015db4) list_single_2graphic_pane_g4_ParamLimits

0x9550,	// (0x00015db4) list_single_2graphic_pane_g4

0x0003,

0xf777,	// (0x0001bfdb) list_single_2graphic_pane_g_ParamLimits

0xf777,	// (0x0001bfdb) list_single_2graphic_pane_g

0x9561,	// (0x00015dc5) list_single_2graphic_pane_t1_ParamLimits

0x9561,	// (0x00015dc5) list_single_2graphic_pane_t1

0x958f,	// (0x00015df3) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x958f,	// (0x00015df3) list_double2_graphic_large_graphic_pane_g1

0x8ffe,	// (0x00015862) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8ffe,	// (0x00015862) list_double2_graphic_large_graphic_pane_g2

0x8fca,	// (0x0001582e) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8fca,	// (0x0001582e) list_double2_graphic_large_graphic_pane_g3

0x959f,	// (0x00015e03) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x959f,	// (0x00015e03) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf780,	// (0x0001bfe4) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf780,	// (0x0001bfe4) list_double2_graphic_large_graphic_pane_g

0x95ab,	// (0x00015e0f) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x95ab,	// (0x00015e0f) list_double2_graphic_large_graphic_pane_t1

0x95c1,	// (0x00015e25) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x95c1,	// (0x00015e25) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf789,	// (0x0001bfed) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf789,	// (0x0001bfed) list_double2_graphic_large_graphic_pane_t

0x4f48,	// (0x000117ac) popup_fast_swap_window_ParamLimits

0x4f48,	// (0x000117ac) popup_fast_swap_window

0x4f64,	// (0x000117c8) popup_side_volume_key_window

0x4f7e,	// (0x000117e2) stacon_top_pane

0x4f88,	// (0x000117ec) status_pane_ParamLimits

0x4f88,	// (0x000117ec) status_pane

0x4f7e,	// (0x000117e2) status_small_pane

0x35e9,	// (0x0000fe4d) control_pane

0x35e9,	// (0x0000fe4d) stacon_bottom_pane

0x3e59,	// (0x000106bd) scroll_pane_cp121

0x4306,	// (0x00010b6a) set_content_pane

0x4e40,	// (0x000116a4) bg_active_tab_pane_g1_cp1

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp1

0x4e2e,	// (0x00011692) bg_active_tab_pane_g3_cp1

0x4e40,	// (0x000116a4) bg_passive_tab_pane_g1_cp1

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp1

0x4e2e,	// (0x00011692) bg_passive_tab_pane_g3_cp1

0x4e52,	// (0x000116b6) bg_active_tab_pane_g1_cp2

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp2

0x4e49,	// (0x000116ad) bg_active_tab_pane_g3_cp2

0x4e52,	// (0x000116b6) bg_passive_tab_pane_g1_cp2

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp2

0x4e49,	// (0x000116ad) bg_passive_tab_pane_g3_cp2

0x4e64,	// (0x000116c8) bg_active_tab_pane_g1_cp3

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp3

0x4e5b,	// (0x000116bf) bg_active_tab_pane_g3_cp3

0x4e64,	// (0x000116c8) bg_passive_tab_pane_g1_cp3

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp3

0x4e5b,	// (0x000116bf) bg_passive_tab_pane_g3_cp3

0x4e76,	// (0x000116da) bg_active_tab_pane_g1_cp4

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp4

0x4e6d,	// (0x000116d1) bg_active_tab_pane_g3_cp4

0x4e76,	// (0x000116da) bg_passive_tab_pane_g1_cp4

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp4

0x4e6d,	// (0x000116d1) bg_passive_tab_pane_g3_cp4

0x4ec6,	// (0x0001172a) bg_active_tab_pane_g1_cp5

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp5

0x4ebd,	// (0x00011721) bg_active_tab_pane_g3_cp5

0x4ec6,	// (0x0001172a) bg_passive_tab_pane_g1_cp5

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp5

0x4ebd,	// (0x00011721) bg_passive_tab_pane_g3_cp5

0x457c,	// (0x00010de0) list_set_graphic_pane_ParamLimits

0x457c,	// (0x00010de0) list_set_graphic_pane

0x35e9,	// (0x0000fe4d) bg_set_opt_pane_cp4

0x4ecf,	// (0x00011733) list_set_graphic_pane_g1_ParamLimits

0x4ecf,	// (0x00011733) list_set_graphic_pane_g1

0x4edb,	// (0x0001173f) list_set_graphic_pane_g2_ParamLimits

0x4edb,	// (0x0001173f) list_set_graphic_pane_g2

0x0001,

0xf78e,	// (0x0001bff2) list_set_graphic_pane_g_ParamLimits

0xf78e,	// (0x0001bff2) list_set_graphic_pane_g

0x0009,

0xfaf4,	// (0x0001c358) volume_small_pane_cp_g

0x4efd,	// (0x00011761) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x4efd,	// (0x00011761) list_double2_large_graphic_pane_g1_cp2

0x4f09,	// (0x0001176d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x4f09,	// (0x0001176d) list_double2_large_graphic_pane_g2_cp2

0x4f18,	// (0x0001177c) list_double2_large_graphic_pane_g3_cp2

0x4f20,	// (0x00011784) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4f20,	// (0x00011784) list_double2_large_graphic_pane_t1_cp2

0x4f36,	// (0x0001179a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4f36,	// (0x0001179a) list_double2_large_graphic_pane_t2_cp2

0x7814,	// (0x00014078) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x7814,	// (0x00014078) list_double_large_graphic_pane_g1_cp2

0x7825,	// (0x00014089) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x7825,	// (0x00014089) list_double_large_graphic_pane_g2_cp2

0x5063,	// (0x000118c7) list_double_large_graphic_pane_g3_cp2

0x7834,	// (0x00014098) list_double_large_graphic_pane_g4_cp

0x783c,	// (0x000140a0) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x783c,	// (0x000140a0) list_double_large_graphic_pane_t1_cp2

0x7853,	// (0x000140b7) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x7853,	// (0x000140b7) list_double_large_graphic_pane_t2_cp2

0x4f96,	// (0x000117fa) list_double2_graphic_pane_g1_cp2_ParamLimits

0x4f96,	// (0x000117fa) list_double2_graphic_pane_g1_cp2

0x4fa2,	// (0x00011806) list_double2_graphic_pane_g2_cp2_ParamLimits

0x4fa2,	// (0x00011806) list_double2_graphic_pane_g2_cp2

0x4fb1,	// (0x00011815) list_double2_graphic_pane_g3_cp2

0x4fb9,	// (0x0001181d) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4fb9,	// (0x0001181d) list_double2_graphic_pane_t1_cp2

0x4fcf,	// (0x00011833) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4fcf,	// (0x00011833) list_double2_graphic_pane_t2_cp2

0x4fe1,	// (0x00011845) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4fe1,	// (0x00011845) list_single_number_heading_pane_g1_cp2

0x4fed,	// (0x00011851) list_single_number_heading_pane_g2_cp2

0x4ff5,	// (0x00011859) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4ff5,	// (0x00011859) list_single_number_heading_pane_t1_cp2

0x500b,	// (0x0001186f) list_single_number_heading_pane_t2_cp2_ParamLimits

0x500b,	// (0x0001186f) list_single_number_heading_pane_t2_cp2

0x501d,	// (0x00011881) list_single_number_heading_pane_t3_cp2_ParamLimits

0x501d,	// (0x00011881) list_single_number_heading_pane_t3_cp2

0x4fe1,	// (0x00011845) list_single_heading_pane_g1_cp2_ParamLimits

0x4fe1,	// (0x00011845) list_single_heading_pane_g1_cp2

0x4fed,	// (0x00011851) list_single_heading_pane_g2_cp2

0x4ff5,	// (0x00011859) list_single_heading_pane_t1_cp2_ParamLimits

0x4ff5,	// (0x00011859) list_single_heading_pane_t1_cp2

0x761e,	// (0x00013e82) list_single_heading_pane_t2_cp2_ParamLimits

0x761e,	// (0x00013e82) list_single_heading_pane_t2_cp2

0x75a3,	// (0x00013e07) list_double_graphic_pane_g1_cp2_ParamLimits

0x75a3,	// (0x00013e07) list_double_graphic_pane_g1_cp2

0x75af,	// (0x00013e13) list_double_graphic_pane_g2_cp2_ParamLimits

0x75af,	// (0x00013e13) list_double_graphic_pane_g2_cp2

0x75be,	// (0x00013e22) list_double_graphic_pane_g3_cp2

0x75c6,	// (0x00013e2a) list_double_graphic_pane_t1_cp2_ParamLimits

0x75c6,	// (0x00013e2a) list_double_graphic_pane_t1_cp2

0x75dc,	// (0x00013e40) list_double_graphic_pane_t2_cp2_ParamLimits

0x75dc,	// (0x00013e40) list_double_graphic_pane_t2_cp2

0x5057,	// (0x000118bb) list_double_number_pane_g1_cp2_ParamLimits

0x5057,	// (0x000118bb) list_double_number_pane_g1_cp2

0x5063,	// (0x000118c7) list_double_number_pane_g2_cp2

0x7569,	// (0x00013dcd) list_double_number_pane_t1_cp2_ParamLimits

0x7569,	// (0x00013dcd) list_double_number_pane_t1_cp2

0x757b,	// (0x00013ddf) list_double_number_pane_t2_cp2_ParamLimits

0x757b,	// (0x00013ddf) list_double_number_pane_t2_cp2

0x7591,	// (0x00013df5) list_double_number_pane_t3_cp2_ParamLimits

0x7591,	// (0x00013df5) list_double_number_pane_t3_cp2

0x74e1,	// (0x00013d45) list_single_graphic_pane_g1_cp2_ParamLimits

0x74e1,	// (0x00013d45) list_single_graphic_pane_g1_cp2

0x4fe1,	// (0x00011845) list_single_graphic_pane_g2_cp2_ParamLimits

0x4fe1,	// (0x00011845) list_single_graphic_pane_g2_cp2

0x4fed,	// (0x00011851) list_single_graphic_pane_g3_cp2

0x74b9,	// (0x00013d1d) list_single_graphic_pane_t1_cp2_ParamLimits

0x74b9,	// (0x00013d1d) list_single_graphic_pane_t1_cp2

0x4fe1,	// (0x00011845) list_single_number_pane_g1_cp2_ParamLimits

0x4fe1,	// (0x00011845) list_single_number_pane_g1_cp2

0x4fed,	// (0x00011851) list_single_number_pane_g2_cp2

0x74b9,	// (0x00013d1d) list_single_number_pane_t1_cp2_ParamLimits

0x74b9,	// (0x00013d1d) list_single_number_pane_t1_cp2

0x74cf,	// (0x00013d33) list_single_number_pane_t2_cp2_ParamLimits

0x74cf,	// (0x00013d33) list_single_number_pane_t2_cp2

0x4f09,	// (0x0001176d) list_double2_pane_g1_cp2_ParamLimits

0x4f09,	// (0x0001176d) list_double2_pane_g1_cp2

0x4f18,	// (0x0001177c) list_double2_pane_g2_cp2

0x502f,	// (0x00011893) list_double2_pane_t1_cp2_ParamLimits

0x502f,	// (0x00011893) list_double2_pane_t1_cp2

0x5045,	// (0x000118a9) list_double2_pane_t2_cp2_ParamLimits

0x5045,	// (0x000118a9) list_double2_pane_t2_cp2

0x5057,	// (0x000118bb) list_double_pane_g1_cp2_ParamLimits

0x5057,	// (0x000118bb) list_double_pane_g1_cp2

0x5063,	// (0x000118c7) list_double_pane_g2_cp2

0x506b,	// (0x000118cf) list_double_pane_t1_cp2_ParamLimits

0x506b,	// (0x000118cf) list_double_pane_t1_cp2

0x5081,	// (0x000118e5) list_double_pane_t2_cp2_ParamLimits

0x5081,	// (0x000118e5) list_double_pane_t2_cp2

0x50a9,	// (0x0001190d) list_single_pane_cp2_g3

0x4fe1,	// (0x00011845) list_single_pane_g1_cp2_ParamLimits

0x4fe1,	// (0x00011845) list_single_pane_g1_cp2

0x4fed,	// (0x00011851) list_single_pane_g2_cp2

0x50b9,	// (0x0001191d) list_single_pane_t1_cp2_ParamLimits

0x50b9,	// (0x0001191d) list_single_pane_t1_cp2

0x50d1,	// (0x00011935) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x50d1,	// (0x00011935) list_single_large_graphic_pane_g1_cp2

0x50dd,	// (0x00011941) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x50dd,	// (0x00011941) list_single_large_graphic_pane_g2_cp2

0x50e9,	// (0x0001194d) list_single_large_graphic_pane_g3_cp2

0x50f1,	// (0x00011955) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x50f1,	// (0x00011955) list_single_large_graphic_pane_g4_cp1

0x510b,	// (0x0001196f) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x510b,	// (0x0001196f) list_single_large_graphic_pane_t1_cp2

0x749b,	// (0x00013cff) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x749b,	// (0x00013cff) list_single_graphic_heading_pane_g1_cp2

0x7476,	// (0x00013cda) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x7476,	// (0x00013cda) list_single_graphic_heading_pane_g4_cp2

0x4fed,	// (0x00011851) list_single_graphic_heading_pane_g5_cp2

0x4ff5,	// (0x00011859) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4ff5,	// (0x00011859) list_single_graphic_heading_pane_t1_cp2

0x74a7,	// (0x00013d0b) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x74a7,	// (0x00013d0b) list_single_graphic_heading_pane_t2_cp2

0x746a,	// (0x00013cce) list_single_2graphic_pane_g1_cp2_ParamLimits

0x746a,	// (0x00013cce) list_single_2graphic_pane_g1_cp2

0x7476,	// (0x00013cda) list_single_2graphic_pane_g2_cp2_ParamLimits

0x7476,	// (0x00013cda) list_single_2graphic_pane_g2_cp2

0x4fed,	// (0x00011851) list_single_2graphic_pane_g3_cp2

0x6e90,	// (0x000136f4) list_single_2graphic_pane_g4_cp2_ParamLimits

0x6e90,	// (0x000136f4) list_single_2graphic_pane_g4_cp2

0x7485,	// (0x00013ce9) list_single_2graphic_pane_t1_cp2_ParamLimits

0x7485,	// (0x00013ce9) list_single_2graphic_pane_t1_cp2

0x3502,	// (0x0000fd66) list_highlight_pane_g10_cp1

0x707c,	// (0x000138e0) list_highlight_pane_g1_cp1

0x7084,	// (0x000138e8) list_highlight_pane_g2_cp1

0x708c,	// (0x000138f0) list_highlight_pane_g3_cp1

0x7094,	// (0x000138f8) list_highlight_pane_g4_cp1

0x709c,	// (0x00013900) list_highlight_pane_g5_cp1

0x70a4,	// (0x00013908) list_highlight_pane_g6_cp1

0x70ac,	// (0x00013910) list_highlight_pane_g7_cp1

0x70b4,	// (0x00013918) list_highlight_pane_g8_cp1

0x70bc,	// (0x00013920) list_highlight_pane_g9_cp1

0xae28,	// (0x0001768c) form_field_slider_pane_t3

0xae36,	// (0x0001769a) form_field_slider_pane_t4

0x6fc6,	// (0x0001382a) slider_form_pane_ParamLimits

0x6fc6,	// (0x0001382a) slider_form_pane

0x35e9,	// (0x0000fe4d) control_abbreviations

0x35e9,	// (0x0000fe4d) control_conventions

0x35e9,	// (0x0000fe4d) control_definitions

0x35e9,	// (0x0000fe4d) format_table_attribute

0x7668,	// (0x00013ecc) bg_popup_preview_window_pane_g9

0x35e9,	// (0x0000fe4d) format_table_data2

0x35e9,	// (0x0000fe4d) format_table_data3

0x35e9,	// (0x0000fe4d) format_table_data_example

0x0008,

0x35e9,	// (0x0000fe4d) intro_purpose

0xf91c,	// (0x0001c180) bg_popup_preview_window_pane_g

0x35e9,	// (0x0000fe4d) texts_category

0x35e9,	// (0x0000fe4d) texts_graphics

0x5121,	// (0x00011985) text_digital

0x5130,	// (0x00011994) text_primary

0x513f,	// (0x000119a3) text_primary_small

0x514e,	// (0x000119b2) text_secondary

0x515d,	// (0x000119c1) text_title

0x7b9c,	// (0x00014400) bg_passive_tab_pane_g1_cp3_srt

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp3_srt

0x7b93,	// (0x000143f7) bg_passive_tab_pane_g3_cp3_srt

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp3_srt_ParamLimits

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp3_srt

0x7aa7,	// (0x0001430b) tabs_4_active_pane_srt_g1

0x36f9,	// (0x0000ff5d) tabs_4_active_pane_srt_t1_ParamLimits

0x36f9,	// (0x0000ff5d) tabs_4_active_pane_srt_t1

0x7b9c,	// (0x00014400) bg_active_tab_pane_g1_cp3_copy1

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp3_copy1

0x7b93,	// (0x000143f7) bg_active_tab_pane_g3_cp3_copy1

0x36c9,	// (0x0000ff2d) tabs_2_long_active_pane_srt_ParamLimits

0x36c9,	// (0x0000ff2d) tabs_2_long_active_pane_srt

0x36c9,	// (0x0000ff2d) tabs_2_long_passive_pane_srt_ParamLimits

0x36c9,	// (0x0000ff2d) tabs_2_long_passive_pane_srt

0x471a,	// (0x00010f7e) bg_passive_tab_pane_cp4_srt_ParamLimits

0x471a,	// (0x00010f7e) bg_passive_tab_pane_cp4_srt

0x7a34,	// (0x00014298) bg_passive_tab_pane_g1_cp4_srt

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp4_srt

0x7a2b,	// (0x0001428f) bg_passive_tab_pane_g3_cp4_srt

0x46f9,	// (0x00010f5d) bg_active_tab_pane_cp4_srt_ParamLimits

0x46f9,	// (0x00010f5d) bg_active_tab_pane_cp4_srt

0x4707,	// (0x00010f6b) tabs_2_long_active_pane_srt_t1_ParamLimits

0x4707,	// (0x00010f6b) tabs_2_long_active_pane_srt_t1

0x7a34,	// (0x00014298) bg_active_tab_pane_g1_cp4_srt

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp4_srt

0x7a2b,	// (0x0001428f) bg_active_tab_pane_g3_cp4_srt

0x3962,	// (0x000101c6) tabs_3_long_active_pane_srt_ParamLimits

0x3962,	// (0x000101c6) tabs_3_long_active_pane_srt

0x3962,	// (0x000101c6) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x3962,	// (0x000101c6) tabs_3_long_passive_pane_cp_srt

0x3962,	// (0x000101c6) tabs_3_long_passive_pane_srt_ParamLimits

0x3962,	// (0x000101c6) tabs_3_long_passive_pane_srt

0x471a,	// (0x00010f7e) bg_passive_tab_pane_cp5_srt_ParamLimits

0x471a,	// (0x00010f7e) bg_passive_tab_pane_cp5_srt

0x4ec6,	// (0x0001172a) bg_passive_tab_pane_g1_cp5_srt

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp5_srt

0x4ebd,	// (0x00011721) bg_passive_tab_pane_g3_cp5_srt

0x46f9,	// (0x00010f5d) bg_active_tab_pane_cp5_srt_ParamLimits

0x46f9,	// (0x00010f5d) bg_active_tab_pane_cp5_srt

0x4726,	// (0x00010f8a) tabs_3_long_active_pane_srt_t1_ParamLimits

0x4726,	// (0x00010f8a) tabs_3_long_active_pane_srt_t1

0x4ec6,	// (0x0001172a) bg_active_tab_pane_g1_cp5_srt

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp5_srt

0x4ebd,	// (0x00011721) bg_active_tab_pane_g3_cp5_srt

0x7a1d,	// (0x00014281) navi_text_pane_srt_t1

0x7a15,	// (0x00014279) navi_icon_pane_srt_g1

0x5322,	// (0x00011b86) midp_editing_number_pane_srt

0x516c,	// (0x000119d0) midp_ticker_pane_srt

0x532a,	// (0x00011b8e) midp_ticker_pane_srt_g1

0x5332,	// (0x00011b96) midp_ticker_pane_srt_g2

0x0001,

0xf7ad,	// (0x0001c011) midp_ticker_pane_srt_g

0x533a,	// (0x00011b9e) midp_ticker_pane_srt_t1

0x7a06,	// (0x0001426a) midp_editing_number_pane_t1_copy1

0x5174,	// (0x000119d8) listscroll_midp_pane

0x5174,	// (0x000119d8) midp_form_pane

0x51dc,	// (0x00011a40) midp_info_popup_window_ParamLimits

0x51dc,	// (0x00011a40) midp_info_popup_window

0x45f7,	// (0x00010e5b) bg_popup_sub_pane_cp50_ParamLimits

0x45f7,	// (0x00010e5b) bg_popup_sub_pane_cp50

0x6d14,	// (0x00013578) listscroll_midp_info_pane_ParamLimits

0x6d14,	// (0x00013578) listscroll_midp_info_pane

0x6cfc,	// (0x00013560) listscroll_form_midp_pane_ParamLimits

0x6cfc,	// (0x00013560) listscroll_form_midp_pane

0x6d08,	// (0x0001356c) scroll_bar_cp050

0xae10,	// (0x00017674) list_midp_pane

0x851f,	// (0x00014d83) signal_pane_g2_cp

0x6c2e,	// (0x00013492) listscroll_midp_info_pane_t1_ParamLimits

0x6c2e,	// (0x00013492) listscroll_midp_info_pane_t1

0x6c46,	// (0x000134aa) listscroll_midp_info_pane_t2_ParamLimits

0x6c46,	// (0x000134aa) listscroll_midp_info_pane_t2

0x6c84,	// (0x000134e8) listscroll_midp_info_pane_t3_ParamLimits

0x6c84,	// (0x000134e8) listscroll_midp_info_pane_t3

0x6cbe,	// (0x00013522) listscroll_midp_info_pane_t4_ParamLimits

0x6cbe,	// (0x00013522) listscroll_midp_info_pane_t4

0x0003,

0xf857,	// (0x0001c0bb) listscroll_midp_info_pane_t_ParamLimits

0xf857,	// (0x0001c0bb) listscroll_midp_info_pane_t

0x46a6,	// (0x00010f0a) scroll_pane_cp21

0x6bd2,	// (0x00013436) form_midp_field_choice_group_pane

0x6bdb,	// (0x0001343f) form_midp_field_text_pane

0x6c14,	// (0x00013478) form_midp_field_time_pane

0x6c1c,	// (0x00013480) form_midp_gauge_slider_pane

0x6c25,	// (0x00013489) form_midp_gauge_wait_pane

0x35e9,	// (0x0000fe4d) form_midp_image_pane

0x96ab,	// (0x00015f0f) list_single_midp_pane_ParamLimits

0x96ab,	// (0x00015f0f) list_single_midp_pane

0xaded,	// (0x00017651) form_midp_field_text_pane_t1

0x6a72,	// (0x000132d6) input_focus_pane_cp050

0x6bc1,	// (0x00013425) list_midp_form_text_pane

0x6b90,	// (0x000133f4) form_midp_field_choice_group_pane_t1

0x6b9e,	// (0x00013402) input_focus_pane_cp051

0x6bb2,	// (0x00013416) list_midp_choice_pane

0x35e9,	// (0x0000fe4d) status_idle_pane

0x6b74,	// (0x000133d8) form_midp_field_time_pane_t1

0x3502,	// (0x0000fd66) wait_anim_pane_g2_copy1

0x6b82,	// (0x000133e6) form_midp_field_time_pane_t2

0x0001,

0x5284,	// (0x00011ae8) aid_navinavi_width_2_pane

0xf852,	// (0x0001c0b6) form_midp_field_time_pane_t

0x35e9,	// (0x0000fe4d) input_focus_pane_cp052

0x35e9,	// (0x0000fe4d) bg_input_focus_pane_cp040

0x6b50,	// (0x000133b4) form_midp_gauge_slider_pane_t1

0x6b5e,	// (0x000133c2) form_midp_gauge_slider_pane_t2

0xadd1,	// (0x00017635) form_midp_gauge_slider_pane_t3

0xaddf,	// (0x00017643) form_midp_gauge_slider_pane_t4

0x0003,

0xf849,	// (0x0001c0ad) form_midp_gauge_slider_pane_t

0x6b6c,	// (0x000133d0) form_midp_slider_pane

0x36c9,	// (0x0000ff2d) bg_input_focus_pane_cp041_ParamLimits

0x36c9,	// (0x0000ff2d) bg_input_focus_pane_cp041

0x6b20,	// (0x00013384) form_midp_gauge_wait_pane_t1_ParamLimits

0x6b20,	// (0x00013384) form_midp_gauge_wait_pane_t1

0x6b32,	// (0x00013396) form_midp_gauge_wait_pane_t2_ParamLimits

0x6b32,	// (0x00013396) form_midp_gauge_wait_pane_t2

0x0001,

0xf844,	// (0x0001c0a8) form_midp_gauge_wait_pane_t_ParamLimits

0xf844,	// (0x0001c0a8) form_midp_gauge_wait_pane_t

0x6b44,	// (0x000133a8) form_midp_wait_pane_ParamLimits

0x6b44,	// (0x000133a8) form_midp_wait_pane

0x6aea,	// (0x0001334e) form_midp_image_pane_g1

0x6af3,	// (0x00013357) form_midp_image_pane_t1

0x6b02,	// (0x00013366) form_midp_image_pane_t2

0x6b11,	// (0x00013375) form_midp_image_pane_t3

0x0002,

0xf83d,	// (0x0001c0a1) form_midp_image_pane_t

0x6ad2,	// (0x00013336) list_single_midp_pane_g1

0x969c,	// (0x00015f00) list_single_midp_pane_t1

0xadbb,	// (0x0001761f) list_midp_form_item_pane_ParamLimits

0xadbb,	// (0x0001761f) list_midp_form_item_pane

0x522c,	// (0x00011a90) list_midp_form_item_pane_t1

0x523b,	// (0x00011a9f) midp_ticker_pane_g1

0x5247,	// (0x00011aab) midp_ticker_pane_g2

0x0001,

0xf793,	// (0x0001bff7) midp_ticker_pane_g

0x5253,	// (0x00011ab7) midp_ticker_pane_t1

0x7a06,	// (0x0001426a) midp_editing_number_pane_t1

0x7b19,	// (0x0001437d) midp_editing_number_pane

0x7b25,	// (0x00014389) midp_ticker_pane

0x79f6,	// (0x0001425a) ai_message_heading_pane

0x35e9,	// (0x0000fe4d) bg_popup_window_pane_cp14

0x79fe,	// (0x00014262) listscroll_ai_message_pane

0x7980,	// (0x000141e4) ai_message_heading_pane_g1_ParamLimits

0x7980,	// (0x000141e4) ai_message_heading_pane_g1

0x798c,	// (0x000141f0) ai_message_heading_pane_g2_ParamLimits

0x798c,	// (0x000141f0) ai_message_heading_pane_g2

0x7998,	// (0x000141fc) ai_message_heading_pane_g3_ParamLimits

0x7998,	// (0x000141fc) ai_message_heading_pane_g3

0x79a4,	// (0x00014208) ai_message_heading_pane_g4_ParamLimits

0x79a4,	// (0x00014208) ai_message_heading_pane_g4

0x0003,

0xf97e,	// (0x0001c1e2) ai_message_heading_pane_g_ParamLimits

0xf97e,	// (0x0001c1e2) ai_message_heading_pane_g

0x79b0,	// (0x00014214) ai_message_heading_pane_t1_ParamLimits

0x79b0,	// (0x00014214) ai_message_heading_pane_t1

0x79ca,	// (0x0001422e) ai_message_heading_pane_t2_ParamLimits

0x79ca,	// (0x0001422e) ai_message_heading_pane_t2

0x0001,

0xf987,	// (0x0001c1eb) ai_message_heading_pane_t_ParamLimits

0xf987,	// (0x0001c1eb) ai_message_heading_pane_t

0x79dc,	// (0x00014240) bg_popup_heading_pane_cp1_ParamLimits

0x79dc,	// (0x00014240) bg_popup_heading_pane_cp1

0x796e,	// (0x000141d2) list_ai_message_pane_ParamLimits

0x796e,	// (0x000141d2) list_ai_message_pane

0x46a6,	// (0x00010f0a) scroll_pane_cp10

0x790a,	// (0x0001416e) list_ai_message_pane_g1

0x7912,	// (0x00014176) list_ai_message_pane_g2

0x0001,

0xf95b,	// (0x0001c1bf) list_ai_message_pane_g

0x791a,	// (0x0001417e) list_ai_message_pane_t1_ParamLimits

0x791a,	// (0x0001417e) list_ai_message_pane_t1

0x792f,	// (0x00014193) list_ai_message_pane_t2_ParamLimits

0x792f,	// (0x00014193) list_ai_message_pane_t2

0x7944,	// (0x000141a8) list_ai_message_pane_t3_ParamLimits

0x7944,	// (0x000141a8) list_ai_message_pane_t3

0x7959,	// (0x000141bd) list_ai_message_pane_t4_ParamLimits

0x7959,	// (0x000141bd) list_ai_message_pane_t4

0x0003,

0xf960,	// (0x0001c1c4) list_ai_message_pane_t_ParamLimits

0xf960,	// (0x0001c1c4) list_ai_message_pane_t

0x78f8,	// (0x0001415c) cell_ai_soft_ind_pane_ParamLimits

0x78f8,	// (0x0001415c) cell_ai_soft_ind_pane

0x5265,	// (0x00011ac9) cell_ai_soft_ind_pane_g1_ParamLimits

0x5265,	// (0x00011ac9) cell_ai_soft_ind_pane_g1

0x35e9,	// (0x0000fe4d) grid_highlight_cp1

0x5272,	// (0x00011ad6) text_secondary_cp56_ParamLimits

0x5272,	// (0x00011ad6) text_secondary_cp56

0x78cd,	// (0x00014131) example_general_pane_ParamLimits

0x78cd,	// (0x00014131) example_general_pane

0x78d9,	// (0x0001413d) example_parent_pane_g1_ParamLimits

0x78d9,	// (0x0001413d) example_parent_pane_g1

0x78e5,	// (0x00014149) example_parent_pane_t1_ParamLimits

0x78e5,	// (0x00014149) example_parent_pane_t1

0xa7de,	// (0x00017042) popup_preview_text_window_ParamLimits

0xa7de,	// (0x00017042) popup_preview_text_window

0x50b1,	// (0x00011915) list_single_pane_cp2_g4

0x3a44,	// (0x000102a8) bg_popup_preview_window_pane_ParamLimits

0x3a44,	// (0x000102a8) bg_popup_preview_window_pane

0x7670,	// (0x00013ed4) popup_preview_text_window_t1_ParamLimits

0x7670,	// (0x00013ed4) popup_preview_text_window_t1

0x768e,	// (0x00013ef2) popup_preview_text_window_t2_ParamLimits

0x768e,	// (0x00013ef2) popup_preview_text_window_t2

0x76d7,	// (0x00013f3b) popup_preview_text_window_t3_ParamLimits

0x76d7,	// (0x00013f3b) popup_preview_text_window_t3

0x771c,	// (0x00013f80) popup_preview_text_window_t4_ParamLimits

0x771c,	// (0x00013f80) popup_preview_text_window_t4

0x0004,

0xf92f,	// (0x0001c193) popup_preview_text_window_t_ParamLimits

0xf92f,	// (0x0001c193) popup_preview_text_window_t

0x779a,	// (0x00013ffe) scroll_pane_cp11

0x695c,	// (0x000131c0) bg_popup_preview_window_pane_g1

0x7630,	// (0x00013e94) bg_popup_preview_window_pane_g2

0x7638,	// (0x00013e9c) bg_popup_preview_window_pane_g3

0x7640,	// (0x00013ea4) bg_popup_preview_window_pane_g4

0x7648,	// (0x00013eac) bg_popup_preview_window_pane_g5

0x7650,	// (0x00013eb4) bg_popup_preview_window_pane_g6

0x7658,	// (0x00013ebc) bg_popup_preview_window_pane_g7

0x7660,	// (0x00013ec4) bg_popup_preview_window_pane_g8

0x9d79,	// (0x000165dd) aid_popup_width_pane

0xa7c0,	// (0x00017024) popup_midp_note_alarm_window_ParamLimits

0xa7c0,	// (0x00017024) popup_midp_note_alarm_window

0x43b3,	// (0x00010c17) data_form_pane_ParamLimits

0x93dd,	// (0x00015c41) form_field_data_pane_g1

0x443b,	// (0x00010c9f) form_field_data_pane_t1_ParamLimits

0x43df,	// (0x00010c43) input_focus_pane_ParamLimits

0x43ed,	// (0x00010c51) data_form_wide_pane_ParamLimits

0x93e5,	// (0x00015c49) form_field_data_wide_pane_g1

0x93f1,	// (0x00015c55) form_field_data_wide_pane_t1_ParamLimits

0x3cd0,	// (0x00010534) input_focus_pane_cp6_ParamLimits

0x4653,	// (0x00010eb7) input_popup_find_pane_g1_ParamLimits

0x4653,	// (0x00010eb7) input_popup_find_pane_g1

0xa10c,	// (0x00016970) aid_navi_side_left_pane

0xa11c,	// (0x00016980) aid_navi_side_right_pane

0x714d,	// (0x000139b1) bg_popup_window_pane_cp30_ParamLimits

0x714d,	// (0x000139b1) bg_popup_window_pane_cp30

0x71c7,	// (0x00013a2b) popup_midp_note_alarm_window_g1_ParamLimits

0x71c7,	// (0x00013a2b) popup_midp_note_alarm_window_g1

0x71f7,	// (0x00013a5b) popup_midp_note_alarm_window_t1_ParamLimits

0x71f7,	// (0x00013a5b) popup_midp_note_alarm_window_t1

0x7298,	// (0x00013afc) popup_midp_note_alarm_window_t2_ParamLimits

0x7298,	// (0x00013afc) popup_midp_note_alarm_window_t2

0x7346,	// (0x00013baa) popup_midp_note_alarm_window_t3_ParamLimits

0x7346,	// (0x00013baa) popup_midp_note_alarm_window_t3

0x736e,	// (0x00013bd2) popup_midp_note_alarm_window_t4_ParamLimits

0x736e,	// (0x00013bd2) popup_midp_note_alarm_window_t4

0x738e,	// (0x00013bf2) popup_midp_note_alarm_window_t5_ParamLimits

0x738e,	// (0x00013bf2) popup_midp_note_alarm_window_t5

0x000a,

0xf8cc,	// (0x0001c130) popup_midp_note_alarm_window_t_ParamLimits

0xf8cc,	// (0x0001c130) popup_midp_note_alarm_window_t

0x743a,	// (0x00013c9e) wait_bar_pane_cp1_ParamLimits

0x743a,	// (0x00013c9e) wait_bar_pane_cp1

0x35e9,	// (0x0000fe4d) wait_anim_pane_copy1

0x35e9,	// (0x0000fe4d) wait_border_pane_copy1

0x6e87,	// (0x000136eb) wait_border_pane_g1_copy1

0x940b,	// (0x00015c6f) form_field_popup_pane_g1

0x9413,	// (0x00015c77) form_field_popup_pane_t1_ParamLimits

0x43df,	// (0x00010c43) input_focus_pane_cp7_ParamLimits

0x43b3,	// (0x00010c17) list_form_pane_ParamLimits

0x942b,	// (0x00015c8f) form_field_popup_wide_pane_g1

0x9433,	// (0x00015c97) form_field_popup_wide_pane_t1_ParamLimits

0x43df,	// (0x00010c43) input_focus_pane_cp8_ParamLimits

0x4470,	// (0x00010cd4) list_form_wide_pane_ParamLimits

0x7bc4,	// (0x00014428) aid_size_cell_graphic_pane

0x94b8,	// (0x00015d1c) data_form_pane_t1_ParamLimits

0x96d6,	// (0x00015f3a) data_form_wide_pane_t1_ParamLimits

0xa9e4,	// (0x00017248) bg_status_flat_pane

0x3629,	// (0x0000fe8d) title_pane_t1_ParamLimits

0x3691,	// (0x0000fef5) title_pane_t2_ParamLimits

0x36b7,	// (0x0000ff1b) title_pane_t3_ParamLimits

0xf59b,	// (0x0001bdff) title_pane_t_ParamLimits

0x4b2f,	// (0x00011393) level_1_signal_ParamLimits

0x4b3c,	// (0x000113a0) level_2_signal_ParamLimits

0x4b49,	// (0x000113ad) level_3_signal_ParamLimits

0x4b56,	// (0x000113ba) level_4_signal_ParamLimits

0x4b63,	// (0x000113c7) level_5_signal_ParamLimits

0x4b70,	// (0x000113d4) level_6_signal_ParamLimits

0x4b7d,	// (0x000113e1) level_7_signal_ParamLimits

0x4b2f,	// (0x00011393) level_1_battery_ParamLimits

0x4b3c,	// (0x000113a0) level_2_battery_ParamLimits

0x4b49,	// (0x000113ad) level_3_battery_ParamLimits

0x4b56,	// (0x000113ba) level_4_battery_ParamLimits

0x4b63,	// (0x000113c7) level_5_battery_ParamLimits

0x4b70,	// (0x000113d4) level_6_battery_ParamLimits

0x4b7d,	// (0x000113e1) level_7_battery_ParamLimits

0x707c,	// (0x000138e0) bg_status_flat_pane_g1

0x7084,	// (0x000138e8) bg_status_flat_pane_g2

0x708c,	// (0x000138f0) bg_status_flat_pane_g3

0x7094,	// (0x000138f8) bg_status_flat_pane_g4

0x709c,	// (0x00013900) bg_status_flat_pane_g5

0x70a4,	// (0x00013908) bg_status_flat_pane_g6

0x70ac,	// (0x00013910) bg_status_flat_pane_g7

0x36df,	// (0x0000ff43) tabs_3_active_pane_t1_ParamLimits

0x36df,	// (0x0000ff43) tabs_3_passive_pane_t1_ParamLimits

0x36f9,	// (0x0000ff5d) tabs_4_active_pane_t1_ParamLimits

0x36f9,	// (0x0000ff5d) tabs_4_1_passive_pane_t1_ParamLimits

0x46e7,	// (0x00010f4b) tabs_2_active_pane_t1_ParamLimits

0x46e7,	// (0x00010f4b) tabs_2_passive_pane_t1_ParamLimits

0x46f9,	// (0x00010f5d) bg_active_tab_pane_cp4_ParamLimits

0x4707,	// (0x00010f6b) tabs_2_long_active_pane_t1_ParamLimits

0x471a,	// (0x00010f7e) bg_passive_tab_pane_cp4_ParamLimits

0xacb0,	// (0x00017514) list_single_midp_graphic_pane_t1_ParamLimits

0x46f9,	// (0x00010f5d) bg_active_tab_pane_cp5_ParamLimits

0x4726,	// (0x00010f8a) tabs_3_long_active_pane_t1_ParamLimits

0x471a,	// (0x00010f7e) bg_passive_tab_pane_cp5_ParamLimits

0xacb0,	// (0x00017514) list_single_midp_graphic_pane_t1

0xa9e4,	// (0x00017248) bg_status_flat_pane_ParamLimits

0x683b,	// (0x0001309f) indicator_pane_cp2_ParamLimits

0x683b,	// (0x0001309f) indicator_pane_cp2

0xab27,	// (0x0001738b) navi_pane_srt_ParamLimits

0xab27,	// (0x0001738b) navi_pane_srt

0x6863,	// (0x000130c7) popup_clock_digital_analogue_window_cp1

0x37bd,	// (0x00010021) indicator_pane_t1

0x516c,	// (0x000119d0) copy_highlight_pane

0x516c,	// (0x000119d0) cursor_graphics_pane

0x516c,	// (0x000119d0) graphic_within_text_pane

0x516c,	// (0x000119d0) link_highlight_pane

0x775d,	// (0x00013fc1) popup_preview_text_window_t5_ParamLimits

0x775d,	// (0x00013fc1) popup_preview_text_window_t5

0x528c,	// (0x00011af0) cursor_digital_pane

0x528c,	// (0x00011af0) cursor_primary_pane

0x529d,	// (0x00011b01) cursor_primary_small_pane

0x52a5,	// (0x00011b09) cursor_secondary_pane

0x52ad,	// (0x00011b11) cursor_title_pane

0x528c,	// (0x00011af0) link_highlight_digital_pane

0x5294,	// (0x00011af8) link_highlight_primary_pane

0x529d,	// (0x00011b01) link_highlight_primary_small_pane

0x52a5,	// (0x00011b09) link_highlight_secondary_pane

0x52ad,	// (0x00011b11) link_highlight_title_pane

0x528c,	// (0x00011af0) copy_highlight_digital_pane

0x528c,	// (0x00011af0) copy_highlight_primary_pane

0x529d,	// (0x00011b01) copy_highlight_primary_small_pane

0x52a5,	// (0x00011b09) copy_highlight_secondary_pane

0x52ad,	// (0x00011b11) copy_highlight_title_pane

0x52a5,	// (0x00011b09) graphic_text_digital_pane

0x70fc,	// (0x00013960) graphic_text_primary_pane

0x7105,	// (0x00013969) graphic_text_primary_small_pane

0x529d,	// (0x00011b01) graphic_text_secondary_pane

0x528c,	// (0x00011af0) graphic_text_title_pane

0x52b5,	// (0x00011b19) cursor_primary_pane_g1

0x70ee,	// (0x00013952) cursor_text_primary_t1

0xae54,	// (0x000176b8) cursor_primary_small_pane_g1

0x70e0,	// (0x00013944) cursor_text_primary_small_t1

0xae4c,	// (0x000176b0) cursor_primary_small_pane_g1_copy1

0x70d2,	// (0x00013936) cursor_text_primary_small_t1_copy1

0x70c4,	// (0x00013928) cursor_text_title_t1

0xae44,	// (0x000176a8) cursor_title_pane_g1

0x52b5,	// (0x00011b19) cursor_digital_pane_g1

0x52bd,	// (0x00011b21) cursor_text_digital_t1

0x52cb,	// (0x00011b2f) link_highlight_primary_pane_g1

0x706d,	// (0x000138d1) link_highlight_primary_pane_t1

0x52cb,	// (0x00011b2f) link_highlight_primary_small_pane_g1

0x52d3,	// (0x00011b37) link_highlight_primary_small_pane_t1

0x52e2,	// (0x00011b46) link_highlight_secondary_pane_g1

0x52ea,	// (0x00011b4e) link_highlight_secondary_pane_t1

0x6fd2,	// (0x00013836) link_highlight_title_pane_g1

0x6fe9,	// (0x0001384d) link_highlight_title_pane_t1

0x6fd2,	// (0x00013836) link_highlight_digital_pane_g1

0x6fda,	// (0x0001383e) link_highlight_digital_pane_t1

0x6eae,	// (0x00013712) copy_highlight_primary_pane_g1

0x6ed4,	// (0x00013738) copy_highlight_primary_pane_t1

0x6eae,	// (0x00013712) copy_highlight_primary_small_pane_g1

0x6ec5,	// (0x00013729) copy_highlight_primary_small_pane_t1

0x52f9,	// (0x00011b5d) copy_highlight_secondary_pane_g1

0x5301,	// (0x00011b65) copy_highlight_secondary_pane_t1

0x6eae,	// (0x00013712) copy_highlight_title_pane_g1

0x6eb6,	// (0x0001371a) copy_highlight_title_pane_t1

0x6eae,	// (0x00013712) copy_highlight_digital_pane_g1

0x7d03,	// (0x00014567) copy_highlight_digital_pane_t1

0x7c13,	// (0x00014477) graphic_text_primary_pane_g1

0x7ce7,	// (0x0001454b) graphic_text_primary_pane_t1

0x7cf5,	// (0x00014559) graphic_text_primary_pane_t2

0x0001,

0xf9f6,	// (0x0001c25a) graphic_text_primary_pane_t

0x7cc3,	// (0x00014527) graphic_text_primary_small_pane_g1

0x7ccb,	// (0x0001452f) graphic_text_primary_small_pane_t1

0x7cd9,	// (0x0001453d) graphic_text_primary_small_pane_t2

0x0001,

0xf9f1,	// (0x0001c255) graphic_text_primary_small_pane_t

0x7c9f,	// (0x00014503) graphic_text_secondary_pane_g1

0x7ca7,	// (0x0001450b) graphic_text_secondary_pane_t1

0x7cb5,	// (0x00014519) graphic_text_secondary_pane_t2

0x0001,

0xf9ec,	// (0x0001c250) graphic_text_secondary_pane_t

0x7c37,	// (0x0001449b) graphic_text_title_pane_g1

0x7c83,	// (0x000144e7) graphic_text_title_pane_t1

0x7c91,	// (0x000144f5) graphic_text_title_pane_t2

0x0001,

0xf9e7,	// (0x0001c24b) graphic_text_title_pane_t

0x7c13,	// (0x00014477) graphic_text_digital_pane_g1

0x7c1b,	// (0x0001447f) graphic_text_digital_pane_t1

0x7c29,	// (0x0001448d) graphic_text_digital_pane_t2

0x0001,

0xf9e2,	// (0x0001c246) graphic_text_digital_pane_t

0x36c9,	// (0x0000ff2d) navi_icon_pane_srt_ParamLimits

0x36c9,	// (0x0000ff2d) navi_icon_pane_srt

0x35e9,	// (0x0000fe4d) navi_midp_pane_srt

0x35e9,	// (0x0000fe4d) navi_navi_pane_srt

0x36c9,	// (0x0000ff2d) navi_text_pane_srt_ParamLimits

0x36c9,	// (0x0000ff2d) navi_text_pane_srt

0x7a4a,	// (0x000142ae) navi_navi_icon_text_pane_srt

0x7a64,	// (0x000142c8) navi_navi_pane_srt_g1_ParamLimits

0x7a64,	// (0x000142c8) navi_navi_pane_srt_g1

0x7a52,	// (0x000142b6) navi_navi_pane_srt_g2_ParamLimits

0x7a52,	// (0x000142b6) navi_navi_pane_srt_g2

0x0001,

0xf917,	// (0x0001c17b) navi_navi_pane_srt_g_ParamLimits

0xf917,	// (0x0001c17b) navi_navi_pane_srt_g

0x7a76,	// (0x000142da) navi_navi_tabs_pane_srt

0x7a4a,	// (0x000142ae) navi_navi_text_pane_srt

0x7a4a,	// (0x000142ae) navi_navi_volume_pane_srt

0x7c04,	// (0x00014468) navi_navi_text_pane_srt_t1

0xb41d,	// (0x00017c81) navi_navi_volume_pane_srt_g1

0xb425,	// (0x00017c89) volume_small_pane_srt_ParamLimits

0xb425,	// (0x00017c89) volume_small_pane_srt

0xa3b3,	// (0x00016c17) volume_small_pane_srt_g1_ParamLimits

0xa3b3,	// (0x00016c17) volume_small_pane_srt_g1

0xa3c3,	// (0x00016c27) volume_small_pane_srt_g2_ParamLimits

0xa3c3,	// (0x00016c27) volume_small_pane_srt_g2

0xa3d4,	// (0x00016c38) volume_small_pane_srt_g3_ParamLimits

0xa3d4,	// (0x00016c38) volume_small_pane_srt_g3

0xa3e5,	// (0x00016c49) volume_small_pane_srt_g4_ParamLimits

0xa3e5,	// (0x00016c49) volume_small_pane_srt_g4

0xa3f6,	// (0x00016c5a) volume_small_pane_srt_g5_ParamLimits

0xa3f6,	// (0x00016c5a) volume_small_pane_srt_g5

0xa407,	// (0x00016c6b) volume_small_pane_srt_g6_ParamLimits

0xa407,	// (0x00016c6b) volume_small_pane_srt_g6

0xa418,	// (0x00016c7c) volume_small_pane_srt_g7_ParamLimits

0xa418,	// (0x00016c7c) volume_small_pane_srt_g7

0xa429,	// (0x00016c8d) volume_small_pane_srt_g8_ParamLimits

0xa429,	// (0x00016c8d) volume_small_pane_srt_g8

0xa43a,	// (0x00016c9e) volume_small_pane_srt_g9_ParamLimits

0xa43a,	// (0x00016c9e) volume_small_pane_srt_g9

0xa44b,	// (0x00016caf) volume_small_pane_srt_g10_ParamLimits

0xa44b,	// (0x00016caf) volume_small_pane_srt_g10

0x0009,

0xf798,	// (0x0001bffc) volume_small_pane_srt_g_ParamLimits

0xf798,	// (0x0001bffc) volume_small_pane_srt_g

0x3aed,	// (0x00010351) query_popup_data_pane_cp2

0x7bea,	// (0x0001444e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x7bea,	// (0x0001444e) navi_navi_icon_text_pane_srt_t1

0x70fc,	// (0x00013960) navi_tabs_2_long_pane_srt

0x70fc,	// (0x00013960) navi_tabs_2_pane_srt

0x70fc,	// (0x00013960) navi_tabs_3_long_pane_srt

0x70fc,	// (0x00013960) navi_tabs_3_pane_srt

0x70fc,	// (0x00013960) navi_tabs_4_pane_srt

0xb3fd,	// (0x00017c61) tabs_2_active_pane_srt_ParamLimits

0xb3fd,	// (0x00017c61) tabs_2_active_pane_srt

0xb40d,	// (0x00017c71) tabs_2_passive_pane_srt_ParamLimits

0xb40d,	// (0x00017c71) tabs_2_passive_pane_srt

0x6644,	// (0x00012ea8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x6644,	// (0x00012ea8) bg_passive_tab_pane_cp1_srt

0x7ac0,	// (0x00014324) bg_passive_tab_pane_g1_cp1_srt

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp1_srt

0x7ab7,	// (0x0001431b) bg_passive_tab_pane_g3_cp1_srt

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp1_srt_ParamLimits

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp1_srt

0x7aaf,	// (0x00014313) tabs_2_active_pane_srt_g1

0x46e7,	// (0x00010f4b) tabs_2_active_pane_srt_t1_ParamLimits

0x46e7,	// (0x00010f4b) tabs_2_active_pane_srt_t1

0x7ac0,	// (0x00014324) bg_active_tab_pane_g1_cp1_srt

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp1_srt

0x7ab7,	// (0x0001431b) bg_active_tab_pane_g3_cp1_srt

0xb3ca,	// (0x00017c2e) tabs_3_active_pane_srt_ParamLimits

0xb3ca,	// (0x00017c2e) tabs_3_active_pane_srt

0xb3db,	// (0x00017c3f) tabs_3_passive_pane_cp_srt_ParamLimits

0xb3db,	// (0x00017c3f) tabs_3_passive_pane_cp_srt

0xb3ec,	// (0x00017c50) tabs_3_passive_pane_srt_ParamLimits

0xb3ec,	// (0x00017c50) tabs_3_passive_pane_srt

0x6644,	// (0x00012ea8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x6644,	// (0x00012ea8) bg_passive_tab_pane_cp2_srt

0x5319,	// (0x00011b7d) bg_passive_tab_pane_g1_cp2_srt

0x4e37,	// (0x0001169b) bg_passive_tab_pane_g2_cp2_srt

0x5310,	// (0x00011b74) bg_passive_tab_pane_g3_cp2_srt

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp2_srt_ParamLimits

0x36c9,	// (0x0000ff2d) bg_active_tab_pane_cp2_srt

0x7bda,	// (0x0001443e) tabs_3_active_pane_srt_g1

0x36df,	// (0x0000ff43) tabs_3_active_pane_srt_t1_ParamLimits

0x36df,	// (0x0000ff43) tabs_3_active_pane_srt_t1

0x5319,	// (0x00011b7d) bg_active_tab_pane_g1_cp2_srt

0x4e37,	// (0x0001169b) bg_active_tab_pane_g2_cp2_srt

0x5310,	// (0x00011b74) bg_active_tab_pane_g3_cp2_srt

0xb382,	// (0x00017be6) tabs_4_active_pane_srt_ParamLimits

0xb382,	// (0x00017be6) tabs_4_active_pane_srt

0xb394,	// (0x00017bf8) tabs_4_passive_pane_cp2_srt_ParamLimits

0xb394,	// (0x00017bf8) tabs_4_passive_pane_cp2_srt

0x6650,	// (0x00012eb4) aid_size_cell_toolbar

0x471a,	// (0x00010f7e) main_idle_act_pane_ParamLimits

0x6724,	// (0x00012f88) popup_large_graphic_colour_window_ParamLimits

0xa912,	// (0x00017176) popup_toolbar_window_ParamLimits

0xa912,	// (0x00017176) popup_toolbar_window

0x9719,	// (0x00015f7d) list_single_graphic_2heading_pane_ParamLimits

0x9719,	// (0x00015f7d) list_single_graphic_2heading_pane

0x48f1,	// (0x00011155) aid_size_cell_apps_grid_lsc_pane

0x4903,	// (0x00011167) aid_size_cell_apps_grid_prt_pane

0x6644,	// (0x00012ea8) bg_wml_button_pane_cp1_ParamLimits

0x6644,	// (0x00012ea8) bg_wml_button_pane_cp1

0xaded,	// (0x00017651) form_midp_field_text_pane_t1_ParamLimits

0x6a72,	// (0x000132d6) input_focus_pane_cp050_ParamLimits

0x6bc1,	// (0x00013425) list_midp_form_text_pane_ParamLimits

0x6b9e,	// (0x00013402) input_focus_pane_cp051_ParamLimits

0x6bb2,	// (0x00013416) list_midp_choice_pane_ParamLimits

0xad87,	// (0x000175eb) list_single_2graphic_pane_cp3_ParamLimits

0xad87,	// (0x000175eb) list_single_2graphic_pane_cp3

0xad9b,	// (0x000175ff) list_single_midp_graphic_pane_ParamLimits

0xad9b,	// (0x000175ff) list_single_midp_graphic_pane

0x8ed5,	// (0x00015739) list_single_graphic_2heading_pane_g1_ParamLimits

0x8ed5,	// (0x00015739) list_single_graphic_2heading_pane_g1

0x9600,	// (0x00015e64) list_single_graphic_2heading_pane_g4_ParamLimits

0x9600,	// (0x00015e64) list_single_graphic_2heading_pane_g4

0x960c,	// (0x00015e70) list_single_graphic_2heading_pane_g5_ParamLimits

0x960c,	// (0x00015e70) list_single_graphic_2heading_pane_g5

0x0002,

0xf7eb,	// (0x0001c04f) list_single_graphic_2heading_pane_g_ParamLimits

0xf7eb,	// (0x0001c04f) list_single_graphic_2heading_pane_g

0x9618,	// (0x00015e7c) list_single_graphic_2heading_pane_t1_ParamLimits

0x9618,	// (0x00015e7c) list_single_graphic_2heading_pane_t1

0x962c,	// (0x00015e90) list_single_graphic_2heading_pane_t2_ParamLimits

0x962c,	// (0x00015e90) list_single_graphic_2heading_pane_t2

0x9646,	// (0x00015eaa) list_single_graphic_2heading_pane_t3_ParamLimits

0x9646,	// (0x00015eaa) list_single_graphic_2heading_pane_t3

0x0002,

0xf7f2,	// (0x0001c056) list_single_graphic_2heading_pane_t_ParamLimits

0xf7f2,	// (0x0001c056) list_single_graphic_2heading_pane_t

0x68a6,	// (0x0001310a) bg_popup_sub_pane_cp2

0x68cc,	// (0x00013130) grid_toobar_pane

0xac4c,	// (0x000174b0) cell_toolbar_pane_ParamLimits

0xac4c,	// (0x000174b0) cell_toolbar_pane

0x6902,	// (0x00013166) cell_toolbar_pane_g1_ParamLimits

0x6902,	// (0x00013166) cell_toolbar_pane_g1

0x6914,	// (0x00013178) cell_toolbar_pane_g2_ParamLimits

0x6914,	// (0x00013178) cell_toolbar_pane_g2

0x0001,

0xf7f9,	// (0x0001c05d) cell_toolbar_pane_g_ParamLimits

0xf7f9,	// (0x0001c05d) cell_toolbar_pane_g

0x6936,	// (0x0001319a) grid_highlight_pane_cp2_ParamLimits

0x6936,	// (0x0001319a) grid_highlight_pane_cp2

0x6950,	// (0x000131b4) toolbar_button_pane

0x695c,	// (0x000131c0) toolbar_button_pane_g1

0x696c,	// (0x000131d0) toolbar_button_pane_g2

0x6964,	// (0x000131c8) toolbar_button_pane_g3

0x697c,	// (0x000131e0) toolbar_button_pane_g4

0x6974,	// (0x000131d8) toolbar_button_pane_g5

0x6984,	// (0x000131e8) toolbar_button_pane_g6

0x698c,	// (0x000131f0) toolbar_button_pane_g7

0x699c,	// (0x00013200) toolbar_button_pane_g8

0x6994,	// (0x000131f8) toolbar_button_pane_g9

0x0009,

0xf7fe,	// (0x0001c062) toolbar_button_pane_g

0xac7b,	// (0x000174df) list_single_2graphic_pane_g1_cp3_ParamLimits

0xac7b,	// (0x000174df) list_single_2graphic_pane_g1_cp3

0xac87,	// (0x000174eb) list_single_2graphic_pane_g2_cp3_ParamLimits

0xac87,	// (0x000174eb) list_single_2graphic_pane_g2_cp3

0x4fed,	// (0x00011851) list_single_2graphic_pane_g3_cp3

0x6e90,	// (0x000136f4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6e90,	// (0x000136f4) list_single_2graphic_pane_g4_cp3

0xac96,	// (0x000174fa) list_single_2graphic_pane_t1_cp3_ParamLimits

0xac96,	// (0x000174fa) list_single_2graphic_pane_t1_cp3

0x4fe1,	// (0x00011845) list_single_midp_graphic_pane_g2_ParamLimits

0x4fe1,	// (0x00011845) list_single_midp_graphic_pane_g2

0x6660,	// (0x00012ec4) aid_zoom_text_primary

0x95d3,	// (0x00015e37) aid_zoom_text_secondary

0x53cb,	// (0x00011c2f) status_small_pane_g7_ParamLimits

0x53cb,	// (0x00011c2f) status_small_pane_g7

0x53ee,	// (0x00011c52) status_small_pane_t1_ParamLimits

0x3600,	// (0x0000fe64) title_pane_g2

0x0003,

0xf592,	// (0x0001bdf6) title_pane_g

0x3b8c,	// (0x000103f0) aid_size_cell_colour_1_pane_ParamLimits

0x3b8c,	// (0x000103f0) aid_size_cell_colour_1_pane

0x3ba0,	// (0x00010404) aid_size_cell_colour_2_pane_ParamLimits

0x3ba0,	// (0x00010404) aid_size_cell_colour_2_pane

0x3bb4,	// (0x00010418) aid_size_cell_colour_3_pane_ParamLimits

0x3bb4,	// (0x00010418) aid_size_cell_colour_3_pane

0x3bc8,	// (0x0001042c) aid_size_cell_colour_4_pane_ParamLimits

0x3bc8,	// (0x0001042c) aid_size_cell_colour_4_pane

0xa06e,	// (0x000168d2) title_pane_stacon_g1_ParamLimits

0xa06e,	// (0x000168d2) title_pane_stacon_g1

0x6f2b,	// (0x0001378f) popup_note_wait_window_g3_ParamLimits

0x6f2b,	// (0x0001378f) popup_note_wait_window_g3

0x6fa1,	// (0x00013805) popup_note_wait_window_t5_ParamLimits

0x6fa1,	// (0x00013805) popup_note_wait_window_t5

0x35e9,	// (0x0000fe4d) main_feb_china_hwr_fs_writing_pane

0xa601,	// (0x00016e65) popup_feb_china_hwr_fs_window_ParamLimits

0xa601,	// (0x00016e65) popup_feb_china_hwr_fs_window

0xacc6,	// (0x0001752a) aid_size_cell_hwr_fs_ParamLimits

0xacc6,	// (0x0001752a) aid_size_cell_hwr_fs

0x6a72,	// (0x000132d6) bg_popup_sub_pane_cp3_ParamLimits

0x6a72,	// (0x000132d6) bg_popup_sub_pane_cp3

0xacdb,	// (0x0001753f) grid_hwr_fs_pane_ParamLimits

0xacdb,	// (0x0001753f) grid_hwr_fs_pane

0xacef,	// (0x00017553) linegrid_hwr_fs_pane_ParamLimits

0xacef,	// (0x00017553) linegrid_hwr_fs_pane

0xacff,	// (0x00017563) cell_hwr_fs_pane_ParamLimits

0xacff,	// (0x00017563) cell_hwr_fs_pane

0x6a7e,	// (0x000132e2) linegrid_hwr_fs_pane_g1_ParamLimits

0x6a7e,	// (0x000132e2) linegrid_hwr_fs_pane_g1

0xad1d,	// (0x00017581) linegrid_hwr_fs_pane_g2_ParamLimits

0xad1d,	// (0x00017581) linegrid_hwr_fs_pane_g2

0x6a8a,	// (0x000132ee) linegrid_hwr_fs_pane_g3_ParamLimits

0x6a8a,	// (0x000132ee) linegrid_hwr_fs_pane_g3

0xad2f,	// (0x00017593) linegrid_hwr_fs_pane_g4_ParamLimits

0xad2f,	// (0x00017593) linegrid_hwr_fs_pane_g4

0xad49,	// (0x000175ad) linegrid_hwr_fs_pane_g5_ParamLimits

0xad49,	// (0x000175ad) linegrid_hwr_fs_pane_g5

0x0004,

0xf829,	// (0x0001c08d) linegrid_hwr_fs_pane_g_ParamLimits

0xf829,	// (0x0001c08d) linegrid_hwr_fs_pane_g

0x6a96,	// (0x000132fa) cell_hwr_fs_pane_g1_ParamLimits

0x6a96,	// (0x000132fa) cell_hwr_fs_pane_g1

0x6874,	// (0x000130d8) cell_hwr_fs_pane_g2_ParamLimits

0x6874,	// (0x000130d8) cell_hwr_fs_pane_g2

0xad5f,	// (0x000175c3) cell_hwr_fs_pane_g3_ParamLimits

0xad5f,	// (0x000175c3) cell_hwr_fs_pane_g3

0xad6c,	// (0x000175d0) cell_hwr_fs_pane_g4_ParamLimits

0xad6c,	// (0x000175d0) cell_hwr_fs_pane_g4

0x0003,

0xf834,	// (0x0001c098) cell_hwr_fs_pane_g_ParamLimits

0xf834,	// (0x0001c098) cell_hwr_fs_pane_g

0xad79,	// (0x000175dd) cell_hwr_fs_pane_t1

0x35e9,	// (0x0000fe4d) grid_highlight_pane_cp6

0x35e9,	// (0x0000fe4d) main_idle_act2_pane

0x468d,	// (0x00010ef1) aid_inside_area_popup_secondary

0xafb7,	// (0x0001781b) aid_inside_area_window_primary_ParamLimits

0xafb7,	// (0x0001781b) aid_inside_area_window_primary

0x7d12,	// (0x00014576) ai2_news_ticker_pane

0x7d1a,	// (0x0001457e) aid_size_cell_ai1_link_ParamLimits

0x7d1a,	// (0x0001457e) aid_size_cell_ai1_link

0xb43a,	// (0x00017c9e) popup_ai2_data_window_ParamLimits

0xb43a,	// (0x00017c9e) popup_ai2_data_window

0x7d34,	// (0x00014598) popup_ai2_link_window_ParamLimits

0x7d34,	// (0x00014598) popup_ai2_link_window

0x6a72,	// (0x000132d6) bg_popup_sub_pane_cp4_ParamLimits

0x6a72,	// (0x000132d6) bg_popup_sub_pane_cp4

0x7d48,	// (0x000145ac) grid_ai2_link_pane_ParamLimits

0x7d48,	// (0x000145ac) grid_ai2_link_pane

0x7d5f,	// (0x000145c3) popup_ai2_link_window_g1_ParamLimits

0x7d5f,	// (0x000145c3) popup_ai2_link_window_g1

0x7d6b,	// (0x000145cf) popup_ai2_link_window_g2_ParamLimits

0x7d6b,	// (0x000145cf) popup_ai2_link_window_g2

0x0001,

0xf9fb,	// (0x0001c25f) popup_ai2_link_window_g_ParamLimits

0xf9fb,	// (0x0001c25f) popup_ai2_link_window_g

0x7d7a,	// (0x000145de) ai2_mp_button_pane

0x7d82,	// (0x000145e6) ai2_mp_volume_pane

0x6b9e,	// (0x00013402) bg_popup_sub_pane_cp5_ParamLimits

0x6b9e,	// (0x00013402) bg_popup_sub_pane_cp5

0x7d8a,	// (0x000145ee) heading_ai2_gene_pane_ParamLimits

0x7d8a,	// (0x000145ee) heading_ai2_gene_pane

0x7d96,	// (0x000145fa) list_ai2_gene_pane_ParamLimits

0x7d96,	// (0x000145fa) list_ai2_gene_pane

0x7dde,	// (0x00014642) cell_ai2_link_pane_ParamLimits

0x7dde,	// (0x00014642) cell_ai2_link_pane

0x7df4,	// (0x00014658) cell_ai2_link_pane_g1

0x35e9,	// (0x0000fe4d) grid_highlight_pane_cp7

0xb481,	// (0x00017ce5) ai2_mp_volume_pane_g1

0x7ea4,	// (0x00014708) ai2_mp_volume_pane_g2

0xb465,	// (0x00017cc9) list_ai2_gene_pane_t1

0x7e9c,	// (0x00014700) ai2_mp_volume_pane_g3

0x0002,

0xfa14,	// (0x0001c278) ai2_mp_volume_pane_g

0xb489,	// (0x00017ced) volume_small_pane_cp3

0x7eac,	// (0x00014710) aid_size_cell_ai2_button

0x7eb4,	// (0x00014718) grid_ai2_button_pane

0x7ebd,	// (0x00014721) cell_ai2_button_pane_ParamLimits

0x7ebd,	// (0x00014721) cell_ai2_button_pane

0x3502,	// (0x0000fd66) cell_ai2_button_pane_g1

0x35e9,	// (0x0000fe4d) grid_highlight_pane_cp8

0x7e5c,	// (0x000146c0) ai2_gene_pane_t1_ParamLimits

0x7e5c,	// (0x000146c0) ai2_gene_pane_t1

0xa5a7,	// (0x00016e0b) aid_height_parent_landscape

0xb138,	// (0x0001799c) aid_height_set_list

0x7add,	// (0x00014341) aid_size_parent

0x7bc4,	// (0x00014428) aid_size_cell_graphic_pane_ParamLimits

0x7da6,	// (0x0001460a) popup_ai2_data_window_g1_ParamLimits

0x7da6,	// (0x0001460a) popup_ai2_data_window_g1

0x7db2,	// (0x00014616) ai2_news_ticker_pane_g1

0x7dba,	// (0x0001461e) ai2_news_ticker_pane_g2

0x0001,

0xfa00,	// (0x0001c264) ai2_news_ticker_pane_g

0x7dc2,	// (0x00014626) ai2_news_ticker_pane_t1

0x7dd0,	// (0x00014634) ai2_news_ticker_pane_t2

0x0001,

0xfa05,	// (0x0001c269) ai2_news_ticker_pane_t

0x7ba5,	// (0x00014409) heading_ai2_gene_pane_g1

0x7dfd,	// (0x00014661) heading_ai2_gene_pane_t1_ParamLimits

0x7dfd,	// (0x00014661) heading_ai2_gene_pane_t1

0x7e12,	// (0x00014676) list_highlight_pane_cp6

0xb44e,	// (0x00017cb2) ai2_gene_pane_ParamLimits

0xb44e,	// (0x00017cb2) ai2_gene_pane

0xb473,	// (0x00017cd7) list_ai2_gene_pane_t2

0x0001,

0xfa0a,	// (0x0001c26e) list_ai2_gene_pane_t

0x7e2d,	// (0x00014691) list_highlight_pane_cp8_ParamLimits

0x7e2d,	// (0x00014691) list_highlight_pane_cp8

0x7e3e,	// (0x000146a2) ai2_gene_pane_g1_ParamLimits

0x7e3e,	// (0x000146a2) ai2_gene_pane_g1

0x7e50,	// (0x000146b4) ai2_gene_pane_g2_ParamLimits

0x7e50,	// (0x000146b4) ai2_gene_pane_g2

0x0001,

0xfa0f,	// (0x0001c273) ai2_gene_pane_g_ParamLimits

0xfa0f,	// (0x0001c273) ai2_gene_pane_g

0x3e59,	// (0x000106bd) scroll_pane_cp12

0xa55e,	// (0x00016dc2) control_pane_t3_ParamLimits

0xa55e,	// (0x00016dc2) control_pane_t3

0x53df,	// (0x00011c43) status_small_pane_g8_ParamLimits

0x53df,	// (0x00011c43) status_small_pane_g8

0xa66f,	// (0x00016ed3) popup_find_window_ParamLimits

0xa7d2,	// (0x00017036) popup_note_image_window_ParamLimits

0x8ed5,	// (0x00015739) list_double2_graphic_pane_vc_g1_ParamLimits

0x8ed5,	// (0x00015739) list_double2_graphic_pane_vc_g1

0x9600,	// (0x00015e64) list_double2_graphic_pane_vc_g2_ParamLimits

0x9600,	// (0x00015e64) list_double2_graphic_pane_vc_g2

0x960c,	// (0x00015e70) list_double2_graphic_pane_vc_g3_ParamLimits

0x960c,	// (0x00015e70) list_double2_graphic_pane_vc_g3

0x0002,

0xf7eb,	// (0x0001c04f) list_double2_graphic_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c04f) list_double2_graphic_pane_vc_g

0x965e,	// (0x00015ec2) list_double2_graphic_pane_vc_t1_ParamLimits

0x965e,	// (0x00015ec2) list_double2_graphic_pane_vc_t1

0x9600,	// (0x00015e64) list_single_heading_pane_vc_g1_ParamLimits

0x9600,	// (0x00015e64) list_single_heading_pane_vc_g1

0x960c,	// (0x00015e70) list_single_heading_pane_vc_g2_ParamLimits

0x960c,	// (0x00015e70) list_single_heading_pane_vc_g2

0x0001,

0xf813,	// (0x0001c077) list_single_heading_pane_vc_g_ParamLimits

0xf813,	// (0x0001c077) list_single_heading_pane_vc_g

0x9674,	// (0x00015ed8) list_single_heading_pane_vc_t1_ParamLimits

0x9674,	// (0x00015ed8) list_single_heading_pane_vc_t1

0x968a,	// (0x00015eee) list_single_heading_pane_vc_t2_ParamLimits

0x968a,	// (0x00015eee) list_single_heading_pane_vc_t2

0x0001,

0xf818,	// (0x0001c07c) list_single_heading_pane_vc_t_ParamLimits

0xf818,	// (0x0001c07c) list_single_heading_pane_vc_t

0x69cc,	// (0x00013230) list_setting_number_pane_vc_g1_ParamLimits

0x69cc,	// (0x00013230) list_setting_number_pane_vc_g1

0x69d8,	// (0x0001323c) list_setting_number_pane_vc_g2_ParamLimits

0x69d8,	// (0x0001323c) list_setting_number_pane_vc_g2

0x0001,

0xf81d,	// (0x0001c081) list_setting_number_pane_vc_g_ParamLimits

0xf81d,	// (0x0001c081) list_setting_number_pane_vc_g

0x69e4,	// (0x00013248) list_setting_number_pane_vc_t1_ParamLimits

0x69e4,	// (0x00013248) list_setting_number_pane_vc_t1

0x69f8,	// (0x0001325c) list_setting_number_pane_vc_t2_ParamLimits

0x69f8,	// (0x0001325c) list_setting_number_pane_vc_t2

0x6a14,	// (0x00013278) list_setting_number_pane_vc_t3_ParamLimits

0x6a14,	// (0x00013278) list_setting_number_pane_vc_t3

0x0002,

0xf822,	// (0x0001c086) list_setting_number_pane_vc_t_ParamLimits

0xf822,	// (0x0001c086) list_setting_number_pane_vc_t

0x6a3a,	// (0x0001329e) set_value_pane_vc_ParamLimits

0x6a3a,	// (0x0001329e) set_value_pane_vc

0x9719,	// (0x00015f7d) list_double2_graphic_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_double2_graphic_pane_vc

0x7b4b,	// (0x000143af) list_double2_large_graphic_pane_vc_ParamLimits

0x7b4b,	// (0x000143af) list_double2_large_graphic_pane_vc

0x9719,	// (0x00015f7d) list_double2_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_double2_pane_vc

0x9719,	// (0x00015f7d) list_double_graphic_heading_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_double_graphic_heading_pane_vc

0x9719,	// (0x00015f7d) list_double_graphic_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_double_graphic_pane_vc

0x9719,	// (0x00015f7d) list_double_heading_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_double_heading_pane_vc

0x7b4b,	// (0x000143af) list_double_large_graphic_pane_vc_ParamLimits

0x7b4b,	// (0x000143af) list_double_large_graphic_pane_vc

0x9719,	// (0x00015f7d) list_double_number_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_double_number_pane_vc

0x9719,	// (0x00015f7d) list_double_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_double_pane_vc

0x9719,	// (0x00015f7d) list_double_time_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_double_time_pane_vc

0x9719,	// (0x00015f7d) list_setting_number_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_setting_number_pane_vc

0x9719,	// (0x00015f7d) list_setting_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_setting_pane_vc

0x9719,	// (0x00015f7d) list_single_graphic_heading_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_single_graphic_heading_pane_vc

0x9719,	// (0x00015f7d) list_single_heading_pane_vc_ParamLimits

0x9719,	// (0x00015f7d) list_single_heading_pane_vc

0x972d,	// (0x00015f91) list_single_number_heading_pane_vc_ParamLimits

0x972d,	// (0x00015f91) list_single_number_heading_pane_vc

0x9771,	// (0x00015fd5) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9771,	// (0x00015fd5) list_double_graphic_heading_pane_vc_g1

0x9600,	// (0x00015e64) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x9600,	// (0x00015e64) list_double_graphic_heading_pane_vc_g2

0x960c,	// (0x00015e70) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x960c,	// (0x00015e70) list_double_graphic_heading_pane_vc_g3

0x0002,

0xfa1b,	// (0x0001c27f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xfa1b,	// (0x0001c27f) list_double_graphic_heading_pane_vc_g

0x977d,	// (0x00015fe1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x977d,	// (0x00015fe1) list_double_graphic_heading_pane_vc_t1

0x9674,	// (0x00015ed8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9674,	// (0x00015ed8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa22,	// (0x0001c286) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa22,	// (0x0001c286) list_double_graphic_heading_pane_vc_t

0x69cc,	// (0x00013230) list_setting_pane_vc_g1_ParamLimits

0x69cc,	// (0x00013230) list_setting_pane_vc_g1

0x69d8,	// (0x0001323c) list_setting_pane_vc_g2_ParamLimits

0x69d8,	// (0x0001323c) list_setting_pane_vc_g2

0x0001,

0xf81d,	// (0x0001c081) list_setting_pane_vc_g_ParamLimits

0xf81d,	// (0x0001c081) list_setting_pane_vc_g

0x80bd,	// (0x00014921) list_setting_pane_vc_t1_ParamLimits

0x80bd,	// (0x00014921) list_setting_pane_vc_t1

0x80d1,	// (0x00014935) list_setting_pane_vc_t2_ParamLimits

0x80d1,	// (0x00014935) list_setting_pane_vc_t2

0x0001,

0xfa65,	// (0x0001c2c9) list_setting_pane_vc_t_ParamLimits

0xfa65,	// (0x0001c2c9) list_setting_pane_vc_t

0x6a3a,	// (0x0001329e) set_value_pane_cp_vc_ParamLimits

0x6a3a,	// (0x0001329e) set_value_pane_cp_vc

0x9600,	// (0x00015e64) list_single_number_heading_pane_vc_g1_ParamLimits

0x9600,	// (0x00015e64) list_single_number_heading_pane_vc_g1

0x960c,	// (0x00015e70) list_single_number_heading_pane_vc_g2_ParamLimits

0x960c,	// (0x00015e70) list_single_number_heading_pane_vc_g2

0x0001,

0xf813,	// (0x0001c077) list_single_number_heading_pane_vc_g_ParamLimits

0xf813,	// (0x0001c077) list_single_number_heading_pane_vc_g

0x9674,	// (0x00015ed8) list_single_number_heading_pane_vc_t1_ParamLimits

0x9674,	// (0x00015ed8) list_single_number_heading_pane_vc_t1

0x978f,	// (0x00015ff3) list_single_number_heading_pane_vc_t2_ParamLimits

0x978f,	// (0x00015ff3) list_single_number_heading_pane_vc_t2

0x97a1,	// (0x00016005) list_single_number_heading_pane_vc_t3_ParamLimits

0x97a1,	// (0x00016005) list_single_number_heading_pane_vc_t3

0x0002,

0xfa6a,	// (0x0001c2ce) list_single_number_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x0001c2ce) list_single_number_heading_pane_vc_t

0x8ed5,	// (0x00015739) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8ed5,	// (0x00015739) list_single_graphic_heading_pane_vc_g1

0x9600,	// (0x00015e64) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x9600,	// (0x00015e64) list_single_graphic_heading_pane_vc_g4

0x960c,	// (0x00015e70) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x960c,	// (0x00015e70) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7eb,	// (0x0001c04f) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7eb,	// (0x0001c04f) list_single_graphic_heading_pane_vc_g

0x9674,	// (0x00015ed8) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9674,	// (0x00015ed8) list_single_graphic_heading_pane_vc_t1

0x97b3,	// (0x00016017) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x97b3,	// (0x00016017) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x0001c2d5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x0001c2d5) list_single_graphic_heading_pane_vc_t

0x9600,	// (0x00015e64) list_double2_pane_vc_g1_ParamLimits

0x9600,	// (0x00015e64) list_double2_pane_vc_g1

0x960c,	// (0x00015e70) list_double2_pane_vc_g2_ParamLimits

0x960c,	// (0x00015e70) list_double2_pane_vc_g2

0x0001,

0xf813,	// (0x0001c077) list_double2_pane_vc_g_ParamLimits

0xf813,	// (0x0001c077) list_double2_pane_vc_g

0x97c5,	// (0x00016029) list_double2_pane_vc_t1_ParamLimits

0x97c5,	// (0x00016029) list_double2_pane_vc_t1

0x97db,	// (0x0001603f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x97db,	// (0x0001603f) list_double2_large_graphic_pane_vc_g1

0x97e7,	// (0x0001604b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x97e7,	// (0x0001604b) list_double2_large_graphic_pane_vc_g2

0x97f3,	// (0x00016057) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x97f3,	// (0x00016057) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa76,	// (0x0001c2da) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x0001c2da) list_double2_large_graphic_pane_vc_g

0x97ff,	// (0x00016063) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x97ff,	// (0x00016063) list_double2_large_graphic_pane_vc_t1

0x9815,	// (0x00016079) list_double_time_pane_vc_g1_ParamLimits

0x9815,	// (0x00016079) list_double_time_pane_vc_g1

0x9821,	// (0x00016085) list_double_time_pane_vc_g2_ParamLimits

0x9821,	// (0x00016085) list_double_time_pane_vc_g2

0x0001,

0xfa7d,	// (0x0001c2e1) list_double_time_pane_vc_g_ParamLimits

0xfa7d,	// (0x0001c2e1) list_double_time_pane_vc_g

0x982d,	// (0x00016091) list_double_time_pane_vc_t1_ParamLimits

0x982d,	// (0x00016091) list_double_time_pane_vc_t1

0x9846,	// (0x000160aa) list_double_time_pane_vc_t2_ParamLimits

0x9846,	// (0x000160aa) list_double_time_pane_vc_t2

0x987f,	// (0x000160e3) list_double_time_pane_vc_t3_ParamLimits

0x987f,	// (0x000160e3) list_double_time_pane_vc_t3

0x9897,	// (0x000160fb) list_double_time_pane_vc_t4_ParamLimits

0x9897,	// (0x000160fb) list_double_time_pane_vc_t4

0x0003,

0xfa82,	// (0x0001c2e6) list_double_time_pane_vc_t_ParamLimits

0xfa82,	// (0x0001c2e6) list_double_time_pane_vc_t

0x9600,	// (0x00015e64) list_double_pane_vc_g1_ParamLimits

0x9600,	// (0x00015e64) list_double_pane_vc_g1

0x960c,	// (0x00015e70) list_double_pane_vc_g2_ParamLimits

0x960c,	// (0x00015e70) list_double_pane_vc_g2

0x0001,

0xf813,	// (0x0001c077) list_double_pane_vc_g_ParamLimits

0xf813,	// (0x0001c077) list_double_pane_vc_g

0x98a9,	// (0x0001610d) list_double_pane_vc_t1_ParamLimits

0x98a9,	// (0x0001610d) list_double_pane_vc_t1

0x98bb,	// (0x0001611f) list_double_pane_vc_t2_ParamLimits

0x98bb,	// (0x0001611f) list_double_pane_vc_t2

0x0001,

0xfa8b,	// (0x0001c2ef) list_double_pane_vc_t_ParamLimits

0xfa8b,	// (0x0001c2ef) list_double_pane_vc_t

0x9600,	// (0x00015e64) list_double_number_pane_vc_g1_ParamLimits

0x9600,	// (0x00015e64) list_double_number_pane_vc_g1

0x960c,	// (0x00015e70) list_double_number_pane_vc_g2_ParamLimits

0x960c,	// (0x00015e70) list_double_number_pane_vc_g2

0x0001,

0xf813,	// (0x0001c077) list_double_number_pane_vc_g_ParamLimits

0xf813,	// (0x0001c077) list_double_number_pane_vc_g

0x98d1,	// (0x00016135) list_double_number_pane_vc_t1_ParamLimits

0x98d1,	// (0x00016135) list_double_number_pane_vc_t1

0x98e5,	// (0x00016149) list_double_number_pane_vc_t2_ParamLimits

0x98e5,	// (0x00016149) list_double_number_pane_vc_t2

0x98bb,	// (0x0001611f) list_double_number_pane_vc_t3_ParamLimits

0x98bb,	// (0x0001611f) list_double_number_pane_vc_t3

0x0002,

0xfa90,	// (0x0001c2f4) list_double_number_pane_vc_t_ParamLimits

0xfa90,	// (0x0001c2f4) list_double_number_pane_vc_t

0x98f7,	// (0x0001615b) list_double_large_graphic_pane_vc_g1_ParamLimits

0x98f7,	// (0x0001615b) list_double_large_graphic_pane_vc_g1

0x9903,	// (0x00016167) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9903,	// (0x00016167) list_double_large_graphic_pane_vc_g2

0x97f3,	// (0x00016057) list_double_large_graphic_pane_vc_g3_ParamLimits

0x97f3,	// (0x00016057) list_double_large_graphic_pane_vc_g3

0x9912,	// (0x00016176) list_double_large_graphic_pane_vc_g4_ParamLimits

0x9912,	// (0x00016176) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa97,	// (0x0001c2fb) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa97,	// (0x0001c2fb) list_double_large_graphic_pane_vc_g

0x991e,	// (0x00016182) list_double_large_graphic_pane_vc_t1_ParamLimits

0x991e,	// (0x00016182) list_double_large_graphic_pane_vc_t1

0x9930,	// (0x00016194) list_double_large_graphic_pane_vc_t2_ParamLimits

0x9930,	// (0x00016194) list_double_large_graphic_pane_vc_t2

0x0001,

0xfaa0,	// (0x0001c304) list_double_large_graphic_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001c304) list_double_large_graphic_pane_vc_t

0x9600,	// (0x00015e64) list_double_heading_pane_vc_g1_ParamLimits

0x9600,	// (0x00015e64) list_double_heading_pane_vc_g1

0x960c,	// (0x00015e70) list_double_heading_pane_vc_g2_ParamLimits

0x960c,	// (0x00015e70) list_double_heading_pane_vc_g2

0x0001,

0xf813,	// (0x0001c077) list_double_heading_pane_vc_g_ParamLimits

0xf813,	// (0x0001c077) list_double_heading_pane_vc_g

0x9947,	// (0x000161ab) list_double_heading_pane_vc_t1_ParamLimits

0x9947,	// (0x000161ab) list_double_heading_pane_vc_t1

0x9674,	// (0x00015ed8) list_double_heading_pane_vc_t2_ParamLimits

0x9674,	// (0x00015ed8) list_double_heading_pane_vc_t2

0x0001,

0xfaa5,	// (0x0001c309) list_double_heading_pane_vc_t_ParamLimits

0xfaa5,	// (0x0001c309) list_double_heading_pane_vc_t

0x9959,	// (0x000161bd) list_double_graphic_pane_vc_g1_ParamLimits

0x9959,	// (0x000161bd) list_double_graphic_pane_vc_g1

0x9969,	// (0x000161cd) list_double_graphic_pane_vc_g2_ParamLimits

0x9969,	// (0x000161cd) list_double_graphic_pane_vc_g2

0x9978,	// (0x000161dc) list_double_graphic_pane_vc_g3_ParamLimits

0x9978,	// (0x000161dc) list_double_graphic_pane_vc_g3

0x0002,

0xfaaa,	// (0x0001c30e) list_double_graphic_pane_vc_g_ParamLimits

0xfaaa,	// (0x0001c30e) list_double_graphic_pane_vc_g

0x9984,	// (0x000161e8) list_double_graphic_pane_vc_t1_ParamLimits

0x9984,	// (0x000161e8) list_double_graphic_pane_vc_t1

0x98bb,	// (0x0001611f) list_double_graphic_pane_vc_t2_ParamLimits

0x98bb,	// (0x0001611f) list_double_graphic_pane_vc_t2

0x0001,

0xfab1,	// (0x0001c315) list_double_graphic_pane_vc_t_ParamLimits

0xfab1,	// (0x0001c315) list_double_graphic_pane_vc_t

0x9d81,	// (0x000165e5) aid_size_cell_fastswap

0x9d89,	// (0x000165ed) aid_size_cell_touch_ParamLimits

0x9d89,	// (0x000165ed) aid_size_cell_touch

0x9ece,	// (0x00016732) popup_fast_swap_wide_window_ParamLimits

0x9ece,	// (0x00016732) popup_fast_swap_wide_window

0x9f94,	// (0x000167f8) touch_pane_ParamLimits

0x9f94,	// (0x000167f8) touch_pane

0x9341,	// (0x00015ba5) button_value_adjust_pane_cp2

0x83fc,	// (0x00014c60) button_value_adjust_pane_cp4

0x9361,	// (0x00015bc5) form_field_data_pane_cp2

0x9380,	// (0x00015be4) form_field_data_wide_pane_cp2

0x49af,	// (0x00011213) bg_scroll_pane_ParamLimits

0xa18f,	// (0x000169f3) scroll_handle_pane_ParamLimits

0xa1a3,	// (0x00016a07) scroll_sc2_down_pane_ParamLimits

0xa1a3,	// (0x00016a07) scroll_sc2_down_pane

0x49e0,	// (0x00011244) scroll_sc2_up_pane_ParamLimits

0x49e0,	// (0x00011244) scroll_sc2_up_pane

0xb606,	// (0x00017e6a) grid_wheel_folder_pane_g1_ParamLimits

0xb606,	// (0x00017e6a) grid_wheel_folder_pane_g1

0xa357,	// (0x00016bbb) clock_nsta_pane_cp2_ParamLimits

0xa357,	// (0x00016bbb) clock_nsta_pane_cp2

0x5174,	// (0x000119d8) listscroll_midp_pane_ParamLimits

0x5180,	// (0x000119e4) midp_canvas_pane

0xa59f,	// (0x00016e03) nsta_clock_indic_pane

0x6688,	// (0x00012eec) listscroll_form_pane_vc

0x6690,	// (0x00012ef4) listscroll_set_pane_vc_ParamLimits

0x6690,	// (0x00012ef4) listscroll_set_pane_vc

0xaa00,	// (0x00017264) clock_nsta_pane

0xaa0d,	// (0x00017271) indicator_nsta_pane

0x68a6,	// (0x0001310a) bg_popup_sub_pane_cp2_ParamLimits

0x68ba,	// (0x0001311e) find_pane_cp2_ParamLimits

0x68ba,	// (0x0001311e) find_pane_cp2

0x68cc,	// (0x00013130) grid_toobar_pane_ParamLimits

0x6a46,	// (0x000132aa) list_form_gen_pane_vc_ParamLimits

0x6a46,	// (0x000132aa) list_form_gen_pane_vc

0x6a5c,	// (0x000132c0) scroll_pane_cp8_vc_ParamLimits

0x6a5c,	// (0x000132c0) scroll_pane_cp8_vc

0x6aac,	// (0x00013310) data_form_wide_pane_vc_ParamLimits

0x6aac,	// (0x00013310) data_form_wide_pane_vc

0x6ab8,	// (0x0001331c) form_field_data_wide_pane_vc_g1

0x6ac0,	// (0x00013324) form_field_data_wide_pane_vc_t1_ParamLimits

0x6ac0,	// (0x00013324) form_field_data_wide_pane_vc_t1

0x43df,	// (0x00010c43) input_focus_pane_cp6_vc_ParamLimits

0x43df,	// (0x00010c43) input_focus_pane_cp6_vc

0xae10,	// (0x00017674) list_midp_pane_ParamLimits

0xae1c,	// (0x00017680) scroll_pane_cp16_ParamLimits

0xae1c,	// (0x00017680) scroll_pane_cp16

0x6d28,	// (0x0001358c) button_value_adjust_pane_ParamLimits

0x6d28,	// (0x0001358c) button_value_adjust_pane

0xb144,	// (0x000179a8) button_value_adjust_pane_cp6_ParamLimits

0xb144,	// (0x000179a8) button_value_adjust_pane_cp6

0xb24c,	// (0x00017ab0) settings_code_pane_cp_ParamLimits

0xb24c,	// (0x00017ab0) settings_code_pane_cp

0x3502,	// (0x0000fd66) cell_touch_pane_g1

0x3502,	// (0x0000fd66) cell_touch_pane_g2

0x0001,

0xf742,	// (0x0001bfa6) cell_touch_pane_g

0xb492,	// (0x00017cf6) cell_touch_pane_cp_ParamLimits

0xb492,	// (0x00017cf6) cell_touch_pane_cp

0xb4a2,	// (0x00017d06) cell_touch_pane_ParamLimits

0xb4a2,	// (0x00017d06) cell_touch_pane

0x3502,	// (0x0000fd66) scroll_sc2_down_pane_g1

0x3502,	// (0x0000fd66) scroll_sc2_up_pane_g1

0x35e9,	// (0x0000fe4d) bg_set_opt_pane_cp4_vc

0x7ee1,	// (0x00014745) list_set_graphic_pane_vc_g1_ParamLimits

0x7ee1,	// (0x00014745) list_set_graphic_pane_vc_g1

0x7eed,	// (0x00014751) list_set_graphic_pane_vc_g2_ParamLimits

0x7eed,	// (0x00014751) list_set_graphic_pane_vc_g2

0x0001,

0xfa27,	// (0x0001c28b) list_set_graphic_pane_vc_g_ParamLimits

0xfa27,	// (0x0001c28b) list_set_graphic_pane_vc_g

0x7ef9,	// (0x0001475d) text_primary_small_cp13_vc_ParamLimits

0x7ef9,	// (0x0001475d) text_primary_small_cp13_vc

0x7e1a,	// (0x0001467e) list_set_graphic_pane_vc_ParamLimits

0x7e1a,	// (0x0001467e) list_set_graphic_pane_vc

0x35e9,	// (0x0000fe4d) input_focus_pane_cp2_vc

0x3502,	// (0x0000fd66) setting_code_pane_vc_g1

0x7f11,	// (0x00014775) setting_code_pane_vc_t1

0x7f1f,	// (0x00014783) set_text_pane_vc_t1_ParamLimits

0x7f1f,	// (0x00014783) set_text_pane_vc_t1

0x35e9,	// (0x0000fe4d) input_focus_pane_cp1_vc

0x7f3a,	// (0x0001479e) list_set_text_pane_vc

0x3502,	// (0x0000fd66) setting_text_pane_vc_g1

0x35e9,	// (0x0000fe4d) bg_set_opt_pane_cp2_vc

0x7f44,	// (0x000147a8) setting_slider_graphic_pane_vc_g1

0x7f4c,	// (0x000147b0) setting_slider_graphic_pane_vc_t1

0x7f5a,	// (0x000147be) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa2c,	// (0x0001c290) setting_slider_graphic_pane_vc_t

0x7f68,	// (0x000147cc) slider_set_pane_cp_vc

0x7f70,	// (0x000147d4) slider_set_pane_vc_g1

0x7f79,	// (0x000147dd) slider_set_pane_vc_g2

0x0006,

0xfa31,	// (0x0001c295) slider_set_pane_vc_g

0x4505,	// (0x00010d69) set_opt_bg_pane_g1_copy1

0x450d,	// (0x00010d71) set_opt_bg_pane_g2_copy1

0x7fa5,	// (0x00014809) set_opt_bg_pane_g3_copy1

0x451d,	// (0x00010d81) set_opt_bg_pane_g4_copy1

0x4525,	// (0x00010d89) set_opt_bg_pane_g5_copy1

0x452d,	// (0x00010d91) set_opt_bg_pane_g6_copy1

0x7fad,	// (0x00014811) set_opt_bg_pane_g7_copy1

0x7fb5,	// (0x00014819) set_opt_bg_pane_g8_copy1

0x7fbd,	// (0x00014821) set_opt_bg_pane_g9_copy1

0x35e9,	// (0x0000fe4d) bg_set_opt_pane_cp_vc

0x7fc5,	// (0x00014829) setting_slider_pane_vc_t1

0x7f4c,	// (0x000147b0) setting_slider_pane_vc_t2

0x7f5a,	// (0x000147be) setting_slider_pane_vc_t3

0x0002,

0xfa40,	// (0x0001c2a4) setting_slider_pane_vc_t

0x7f68,	// (0x000147cc) slider_set_pane_vc

0xae5c,	// (0x000176c0) volume_set_pane_vc_g1

0xb4b4,	// (0x00017d18) volume_set_pane_vc_g2

0xb4bd,	// (0x00017d21) volume_set_pane_vc_g3

0xb4c6,	// (0x00017d2a) volume_set_pane_vc_g4

0xb4cf,	// (0x00017d33) volume_set_pane_vc_g5

0xb4d8,	// (0x00017d3c) volume_set_pane_vc_g6

0xb4e1,	// (0x00017d45) volume_set_pane_vc_g7

0xb4ea,	// (0x00017d4e) volume_set_pane_vc_g8

0xb4f3,	// (0x00017d57) volume_set_pane_vc_g9

0xb4fc,	// (0x00017d60) volume_set_pane_vc_g10

0x0009,

0xfa47,	// (0x0001c2ab) volume_set_pane_vc_g

0x7fd4,	// (0x00014838) volume_set_pane_vc

0x7fdc,	// (0x00014840) button_value_adjust_pane_cp1_vc

0x7fe6,	// (0x0001484a) list_highlight_pane_cp2_vc

0x7fef,	// (0x00014853) list_set_pane_vc_ParamLimits

0x7fef,	// (0x00014853) list_set_pane_vc

0x8041,	// (0x000148a5) main_pane_set_vc_t1_ParamLimits

0x8041,	// (0x000148a5) main_pane_set_vc_t1

0x8056,	// (0x000148ba) main_pane_set_vc_t2_ParamLimits

0x8056,	// (0x000148ba) main_pane_set_vc_t2

0x8068,	// (0x000148cc) main_pane_set_vc_t3_ParamLimits

0x8068,	// (0x000148cc) main_pane_set_vc_t3

0x807a,	// (0x000148de) main_pane_set_vc_t4_ParamLimits

0x807a,	// (0x000148de) main_pane_set_vc_t4

0x0003,

0xfa5c,	// (0x0001c2c0) main_pane_set_vc_t_ParamLimits

0xfa5c,	// (0x0001c2c0) main_pane_set_vc_t

0x809e,	// (0x00014902) setting_code_pane_vc_ParamLimits

0x809e,	// (0x00014902) setting_code_pane_vc

0x80ad,	// (0x00014911) setting_slider_graphic_pane_vc

0x80ad,	// (0x00014911) setting_slider_pane_vc

0x80ad,	// (0x00014911) setting_text_pane_vc

0x80ad,	// (0x00014911) setting_volume_pane_vc

0x80b5,	// (0x00014919) scroll_pane_cp121_vc

0x4306,	// (0x00010b6a) set_content_pane_vc

0x8268,	// (0x00014acc) button_value_adjust_pane_g1

0x8271,	// (0x00014ad5) button_value_adjust_pane_g2

0x0001,

0xfab6,	// (0x0001c31a) button_value_adjust_pane_g

0x827a,	// (0x00014ade) form_field_slider_wide_pane_vc_t1_ParamLimits

0x827a,	// (0x00014ade) form_field_slider_wide_pane_vc_t1

0x8290,	// (0x00014af4) form_field_slider_wide_pane_vc_t2_ParamLimits

0x8290,	// (0x00014af4) form_field_slider_wide_pane_vc_t2

0x0001,

0xfabb,	// (0x0001c31f) form_field_slider_wide_pane_vc_t_ParamLimits

0xfabb,	// (0x0001c31f) form_field_slider_wide_pane_vc_t

0x3962,	// (0x000101c6) input_focus_pane_cp10_vc_ParamLimits

0x3962,	// (0x000101c6) input_focus_pane_cp10_vc

0x82a5,	// (0x00014b09) slider_cont_pane_cp1_vc_ParamLimits

0x82a5,	// (0x00014b09) slider_cont_pane_cp1_vc

0x7f70,	// (0x000147d4) slider_form_pane_g1_cp2

0x7f79,	// (0x000147dd) slider_form_pane_g2_cp2

0x82c0,	// (0x00014b24) form_field_slider_pane_vc_t3

0x82ce,	// (0x00014b32) form_field_slider_pane_vc_t4

0x82dc,	// (0x00014b40) slider_form_pane_vc_ParamLimits

0x82dc,	// (0x00014b40) slider_form_pane_vc

0x82e9,	// (0x00014b4d) form_field_slider_pane_vc_t1_ParamLimits

0x82e9,	// (0x00014b4d) form_field_slider_pane_vc_t1

0x82ff,	// (0x00014b63) form_field_slider_pane_vc_t2_ParamLimits

0x82ff,	// (0x00014b63) form_field_slider_pane_vc_t2

0x0001,

0xfacb,	// (0x0001c32f) form_field_slider_pane_vc_t_ParamLimits

0xfacb,	// (0x0001c32f) form_field_slider_pane_vc_t

0x3962,	// (0x000101c6) input_focus_pane_cp9_vc_ParamLimits

0x3962,	// (0x000101c6) input_focus_pane_cp9_vc

0x8311,	// (0x00014b75) slider_cont_pane_vc_ParamLimits

0x8311,	// (0x00014b75) slider_cont_pane_vc

0x8323,	// (0x00014b87) list_form_graphic_pane_cp_vc_ParamLimits

0x8323,	// (0x00014b87) list_form_graphic_pane_cp_vc

0x6ab8,	// (0x0001331c) form_field_popup_wide_pane_vc_g1

0x8338,	// (0x00014b9c) form_field_popup_wide_pane_vc_t1_ParamLimits

0x8338,	// (0x00014b9c) form_field_popup_wide_pane_vc_t1

0x43df,	// (0x00010c43) input_focus_pane_cp8_vc_ParamLimits

0x43df,	// (0x00010c43) input_focus_pane_cp8_vc

0x834d,	// (0x00014bb1) list_form_wide_pane_vc_ParamLimits

0x834d,	// (0x00014bb1) list_form_wide_pane_vc

0x8359,	// (0x00014bbd) list_form_graphic_pane_vc_g1

0x8361,	// (0x00014bc5) list_form_graphic_pane_vc_t1_ParamLimits

0x8361,	// (0x00014bc5) list_form_graphic_pane_vc_t1

0x36c9,	// (0x0000ff2d) list_highlight_pane_cp5_vc_ParamLimits

0x36c9,	// (0x0000ff2d) list_highlight_pane_cp5_vc

0x837d,	// (0x00014be1) list_form_graphic_pane_vc_ParamLimits

0x837d,	// (0x00014be1) list_form_graphic_pane_vc

0x6ab8,	// (0x0001331c) form_field_popup_pane_vc_g1

0x8393,	// (0x00014bf7) form_field_popup_pane_vc_t1_ParamLimits

0x8393,	// (0x00014bf7) form_field_popup_pane_vc_t1

0x43df,	// (0x00010c43) input_focus_pane_cp7_vc_ParamLimits

0x43df,	// (0x00010c43) input_focus_pane_cp7_vc

0x83a8,	// (0x00014c0c) list_form_pane_vc_ParamLimits

0x83a8,	// (0x00014c0c) list_form_pane_vc

0x83b4,	// (0x00014c18) data_form_pane_vc_t1_ParamLimits

0x83b4,	// (0x00014c18) data_form_pane_vc_t1

0x4505,	// (0x00010d69) input_focus_pane_vc_g1

0x450d,	// (0x00010d71) input_focus_pane_vc_g2

0x4515,	// (0x00010d79) input_focus_pane_vc_g3

0x451d,	// (0x00010d81) input_focus_pane_vc_g4

0x4525,	// (0x00010d89) input_focus_pane_vc_g5

0x452d,	// (0x00010d91) input_focus_pane_vc_g6

0x4535,	// (0x00010d99) input_focus_pane_vc_g7

0x453d,	// (0x00010da1) input_focus_pane_vc_g8

0x4545,	// (0x00010da9) input_focus_pane_vc_g9

0x3502,	// (0x0000fd66) input_focus_pane_vc_g10

0x0009,

0xf6cb,	// (0x0001bf2f) input_focus_pane_vc_g

0x6aac,	// (0x00013310) data_form_pane_vc_ParamLimits

0x6aac,	// (0x00013310) data_form_pane_vc

0x6ab8,	// (0x0001331c) form_field_data_pane_vc_g1

0x83e6,	// (0x00014c4a) form_field_data_pane_vc_t1_ParamLimits

0x83e6,	// (0x00014c4a) form_field_data_pane_vc_t1

0x43df,	// (0x00010c43) input_focus_pane_vc_ParamLimits

0x43df,	// (0x00010c43) input_focus_pane_vc

0x430f,	// (0x00010b73) button_value_adjust_pane_cp3_vc

0x83fc,	// (0x00014c60) button_value_adjust_pane_cp5_vc

0x83cf,	// (0x00014c33) form_field_data_pane_vc_ParamLimits

0x83cf,	// (0x00014c33) form_field_data_pane_vc

0x4337,	// (0x00010b9b) form_field_data_pane_vc_cp2

0x8404,	// (0x00014c68) form_field_data_wide_pane_vc_ParamLimits

0x8404,	// (0x00014c68) form_field_data_wide_pane_vc

0x841a,	// (0x00014c7e) form_field_data_wide_pane_vc_cp2

0x8422,	// (0x00014c86) form_field_popup_pane_vc_ParamLimits

0x8422,	// (0x00014c86) form_field_popup_pane_vc

0x8439,	// (0x00014c9d) form_field_popup_wide_pane_vc_ParamLimits

0x8439,	// (0x00014c9d) form_field_popup_wide_pane_vc

0x844f,	// (0x00014cb3) form_field_slider_pane_vc_ParamLimits

0x844f,	// (0x00014cb3) form_field_slider_pane_vc

0x8462,	// (0x00014cc6) form_field_slider_wide_pane_vc_ParamLimits

0x8462,	// (0x00014cc6) form_field_slider_wide_pane_vc

0xb505,	// (0x00017d69) grid_touch_1_pane_ParamLimits

0xb505,	// (0x00017d69) grid_touch_1_pane

0xb511,	// (0x00017d75) grid_touch_2_pane_ParamLimits

0xb511,	// (0x00017d75) grid_touch_2_pane

0x5425,	// (0x00011c89) touch_pane_g1_ParamLimits

0x5425,	// (0x00011c89) touch_pane_g1

0x8475,	// (0x00014cd9) cell_app_pane_cp_wide_ParamLimits

0x8475,	// (0x00014cd9) cell_app_pane_cp_wide

0x8485,	// (0x00014ce9) grid_popup_fast_wide_pane_ParamLimits

0x8485,	// (0x00014ce9) grid_popup_fast_wide_pane

0x8499,	// (0x00014cfd) scroll_pane_cp19_ParamLimits

0x8499,	// (0x00014cfd) scroll_pane_cp19

0x35e9,	// (0x0000fe4d) bg_popup_window_pane_cp20

0x84ad,	// (0x00014d11) listscroll_popup_fast_wide_pane

0x36c9,	// (0x0000ff2d) grid_indicator_nsta_pane

0x84b5,	// (0x00014d19) clock_nsta_pane_g1

0x84cc,	// (0x00014d30) clock_nsta_pane_t1

0xb529,	// (0x00017d8d) cell_indicator_nsta_pane_ParamLimits

0xb529,	// (0x00017d8d) cell_indicator_nsta_pane

0x84be,	// (0x00014d22) cell_indicator_nsta_pane_g1

0xb561,	// (0x00017dc5) cell_indicator_nsta_pane_g2

0x0001,

0xfad5,	// (0x0001c339) cell_indicator_nsta_pane_g

0x84e8,	// (0x00014d4c) clock_nsta_pane_cp

0x84f0,	// (0x00014d54) indicator_nsta_pane_cp

0x84f9,	// (0x00014d5d) nsta_clock_indic_pane_g1

0x37a9,	// (0x0001000d) grid_indicator_pane

0x4ad2,	// (0x00011336) scroll_pane_cp29

0xa2ae,	// (0x00016b12) indicator_nsta_pane_cp2_ParamLimits

0xa2ae,	// (0x00016b12) indicator_nsta_pane_cp2

0x36c9,	// (0x0000ff2d) main_apps_wheel_pane

0x6bdb,	// (0x0001343f) form_midp_field_text_pane_ParamLimits

0x6d08,	// (0x0001356c) scroll_bar_cp050_ParamLimits

0x8531,	// (0x00014d95) cell_indicator_pane_ParamLimits

0x8531,	// (0x00014d95) cell_indicator_pane

0x8547,	// (0x00014dab) cell_indicator_pane_g1

0xb576,	// (0x00017dda) grid_wheel_folder_pane_ParamLimits

0xb576,	// (0x00017dda) grid_wheel_folder_pane

0xb588,	// (0x00017dec) list_wheel_apps_pane_ParamLimits

0xb588,	// (0x00017dec) list_wheel_apps_pane

0xb597,	// (0x00017dfb) main_apps_wheel_pane_g1_ParamLimits

0xb597,	// (0x00017dfb) main_apps_wheel_pane_g1

0xb5ab,	// (0x00017e0f) main_apps_wheel_pane_g2_ParamLimits

0xb5ab,	// (0x00017e0f) main_apps_wheel_pane_g2

0x0001,

0xfae4,	// (0x0001c348) main_apps_wheel_pane_g_ParamLimits

0xfae4,	// (0x0001c348) main_apps_wheel_pane_g

0xb5bf,	// (0x00017e23) main_apps_wheel_pane_t1_ParamLimits

0xb5bf,	// (0x00017e23) main_apps_wheel_pane_t1

0xb5de,	// (0x00017e42) list_wheel_apps_pane_g1

0xb5e6,	// (0x00017e4a) list_wheel_apps_pane_g2

0xb5ee,	// (0x00017e52) list_wheel_apps_pane_g3

0xb5f6,	// (0x00017e5a) list_wheel_apps_pane_g4

0xb5fe,	// (0x00017e62) list_wheel_apps_pane_g5

0x0004,

0xfae9,	// (0x0001c34d) list_wheel_apps_pane_g

0x36c9,	// (0x0000ff2d) navi_icon_text_pane

0xa954,	// (0x000171b8) aid_fill_nsta

0xb61d,	// (0x00017e81) navi_icon_text_pane_g1

0xb629,	// (0x00017e8d) navi_icon_text_pane_t1

0x4ee7,	// (0x0001174b) list_set_graphic_pane_t1_ParamLimits

0x4ee7,	// (0x0001174b) list_set_graphic_pane_t1

0x73bd,	// (0x00013c21) popup_midp_note_alarm_window_t6_ParamLimits

0x73bd,	// (0x00013c21) popup_midp_note_alarm_window_t6

0x73cf,	// (0x00013c33) popup_midp_note_alarm_window_t7_ParamLimits

0x73cf,	// (0x00013c33) popup_midp_note_alarm_window_t7

0x73e1,	// (0x00013c45) popup_midp_note_alarm_window_t8_ParamLimits

0x73e1,	// (0x00013c45) popup_midp_note_alarm_window_t8

0x73f3,	// (0x00013c57) popup_midp_note_alarm_window_t9_ParamLimits

0x73f3,	// (0x00013c57) popup_midp_note_alarm_window_t9

0x7405,	// (0x00013c69) popup_midp_note_alarm_window_t10_ParamLimits

0x7405,	// (0x00013c69) popup_midp_note_alarm_window_t10

0x7417,	// (0x00013c7b) popup_midp_note_alarm_window_t11_ParamLimits

0x7417,	// (0x00013c7b) popup_midp_note_alarm_window_t11

0x7429,	// (0x00013c8d) scroll_pane_cp17_ParamLimits

0x7429,	// (0x00013c8d) scroll_pane_cp17

0xae5c,	// (0x000176c0) volume_small_pane_cp_g1

0xb63b,	// (0x00017e9f) volume_small_pane_cp_g2

0xb644,	// (0x00017ea8) volume_small_pane_cp_g3

0xb64d,	// (0x00017eb1) volume_small_pane_cp_g4

0xae89,	// (0x000176ed) volume_small_pane_cp_g5

0xb656,	// (0x00017eba) volume_small_pane_cp_g6

0xb65f,	// (0x00017ec3) volume_small_pane_cp_g7

0xb668,	// (0x00017ecc) volume_small_pane_cp_g8

0xb671,	// (0x00017ed5) volume_small_pane_cp_g9

0xb67a,	// (0x00017ede) volume_small_pane_cp_g10

0x523b,	// (0x00011a9f) midp_ticker_pane_g1_ParamLimits

0x5247,	// (0x00011aab) midp_ticker_pane_g2_ParamLimits

0xf793,	// (0x0001bff7) midp_ticker_pane_g_ParamLimits

0x5253,	// (0x00011ab7) midp_ticker_pane_t1_ParamLimits

0xa964,	// (0x000171c8) aid_fill_nsta_2

0x6cf4,	// (0x00013558) list_form2_midp_pane

0x7b19,	// (0x0001437d) midp_editing_number_pane_ParamLimits

0x7b25,	// (0x00014389) midp_ticker_pane_ParamLimits

0xb683,	// (0x00017ee7) form2_midp_field_pane

0xb6a7,	// (0x00017f0b) scroll_pane_cp51

0xb6c7,	// (0x00017f2b) form2_midp_button_pane_ParamLimits

0xb6c7,	// (0x00017f2b) form2_midp_button_pane

0xb6d9,	// (0x00017f3d) form2_midp_content_pane_ParamLimits

0xb6d9,	// (0x00017f3d) form2_midp_content_pane

0xb6f3,	// (0x00017f57) form2_midp_field_choice_group_pane

0xb6fb,	// (0x00017f5f) form2_midp_field_pane_g1

0xb703,	// (0x00017f67) form2_midp_field_pane_g2

0xb70b,	// (0x00017f6f) form2_midp_field_pane_g3

0xb713,	// (0x00017f77) form2_midp_field_pane_g4

0x0003,

0xfb0e,	// (0x0001c372) form2_midp_field_pane_g

0xb71b,	// (0x00017f7f) form2_midp_gauge_slider_pane

0xb723,	// (0x00017f87) form2_midp_gauge_wait_pane

0xb72b,	// (0x00017f8f) form2_midp_image_pane_ParamLimits

0xb72b,	// (0x00017f8f) form2_midp_image_pane

0xb746,	// (0x00017faa) form2_midp_label_pane_ParamLimits

0xb746,	// (0x00017faa) form2_midp_label_pane

0xb75f,	// (0x00017fc3) form2_midp_label_pane_cp_ParamLimits

0xb75f,	// (0x00017fc3) form2_midp_label_pane_cp

0xb77e,	// (0x00017fe2) form2_midp_string_pane_ParamLimits

0xb77e,	// (0x00017fe2) form2_midp_string_pane

0x9996,	// (0x000161fa) form2_midp_text_pane_ParamLimits

0x9996,	// (0x000161fa) form2_midp_text_pane

0xb790,	// (0x00017ff4) form2_midp_time_pane

0xb7a0,	// (0x00018004) input_focus_pane_cp51_ParamLimits

0xb7a0,	// (0x00018004) input_focus_pane_cp51

0xb7b8,	// (0x0001801c) form2_midp_label_pane_t1_ParamLimits

0xb7b8,	// (0x0001801c) form2_midp_label_pane_t1

0x99af,	// (0x00016213) form2_mdip_text_pane_t1_ParamLimits

0x99af,	// (0x00016213) form2_mdip_text_pane_t1

0x99cc,	// (0x00016230) form2_midp_time_pane_t1

0xb800,	// (0x00018064) form2_midp_gauge_slider_pane_t1

0xb812,	// (0x00018076) form2_midp_gauge_slider_pane_t2

0xb824,	// (0x00018088) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb17,	// (0x0001c37b) form2_midp_gauge_slider_pane_t

0xb836,	// (0x0001809a) form2_midp_slider_pane

0xb842,	// (0x000180a6) form2_midp_gauge_wait_pane_t1

0xb850,	// (0x000180b4) form2_midp_wait_pane_ParamLimits

0xb850,	// (0x000180b4) form2_midp_wait_pane

0x4bdc,	// (0x00011440) list_single_2graphic_pane_cp4_ParamLimits

0x4bdc,	// (0x00011440) list_single_2graphic_pane_cp4

0xad9b,	// (0x000175ff) list_single_midp_graphic_pane_cp_ParamLimits

0xad9b,	// (0x000175ff) list_single_midp_graphic_pane_cp

0x35e9,	// (0x0000fe4d) list_highlight_pane_cp20

0xb87b,	// (0x000180df) list_single_2graphic_pane_g1_cp4

0x7ba5,	// (0x00014409) list_single_2graphic_pane_g2_cp4

0xb883,	// (0x000180e7) list_single_2graphic_pane_t1_cp4

0x36c9,	// (0x0000ff2d) list_highlight_pane_cp21

0xb892,	// (0x000180f6) list_single_midp_graphic_pane_g4_cp

0xb8a1,	// (0x00018105) list_single_midp_graphic_pane_t1_cp

0xb8b6,	// (0x0001811a) form2_mdip_string_pane_t1_ParamLimits

0xb8b6,	// (0x0001811a) form2_mdip_string_pane_t1

0x35e9,	// (0x0000fe4d) bg_wml_button_pane_cp2

0x3502,	// (0x0000fd66) form2_midp_image_pane_g1

0x9118,	// (0x0001597c) list_double_large_graphic_pane_g5_ParamLimits

0x9118,	// (0x0001597c) list_double_large_graphic_pane_g5

0x5174,	// (0x000119d8) midp_form_pane_ParamLimits

0x36c9,	// (0x0000ff2d) main_apps_wheel_pane_ParamLimits

0xa7f6,	// (0x0001705a) popup_preview_window_ParamLimits

0xa7f6,	// (0x0001705a) popup_preview_window

0x6760,	// (0x00012fc4) popup_touch_info_window_ParamLimits

0x6760,	// (0x00012fc4) popup_touch_info_window

0x677e,	// (0x00012fe2) popup_touch_menu_window_ParamLimits

0x677e,	// (0x00012fe2) popup_touch_menu_window

0x34f8,	// (0x0000fd5c) bg_popup_sub_pane_cp6

0xb92e,	// (0x00018192) list_touch_menu_pane

0xb936,	// (0x0001819a) list_single_touch_menu_pane_ParamLimits

0xb936,	// (0x0001819a) list_single_touch_menu_pane

0xb94d,	// (0x000181b1) list_single_touch_menu_pane_t1

0x36c9,	// (0x0000ff2d) bg_popup_sub_pane_cp7_ParamLimits

0x36c9,	// (0x0000ff2d) bg_popup_sub_pane_cp7

0xb95b,	// (0x000181bf) heading_sub_pane

0xb963,	// (0x000181c7) list_touch_info_pane_ParamLimits

0xb963,	// (0x000181c7) list_touch_info_pane

0xb972,	// (0x000181d6) list_single_touch_info_pane_ParamLimits

0xb972,	// (0x000181d6) list_single_touch_info_pane

0xb983,	// (0x000181e7) list_single_touch_info_pane_t1

0xb991,	// (0x000181f5) list_single_touch_info_pane_t2

0x0001,

0xfb25,	// (0x0001c389) list_single_touch_info_pane_t

0x516c,	// (0x000119d0) bg_popup_heading_pane_cp

0xb99f,	// (0x00018203) heading_sub_pane_t1

0x6a72,	// (0x000132d6) bg_popup_preview_window_pane_cp_ParamLimits

0x6a72,	// (0x000132d6) bg_popup_preview_window_pane_cp

0xb95b,	// (0x000181bf) heading_preview_pane

0xb963,	// (0x000181c7) list_preview_pane_ParamLimits

0xb963,	// (0x000181c7) list_preview_pane

0xb9ad,	// (0x00018211) popup_preview_window_g1

0xb972,	// (0x000181d6) list_single_preview_pane_ParamLimits

0xb972,	// (0x000181d6) list_single_preview_pane

0xb9b5,	// (0x00018219) list_single_preview_pane_g1

0xb9bd,	// (0x00018221) list_single_preview_pane_t1

0xb983,	// (0x000181e7) list_single_preview_pane_t2

0x0001,

0xfb2a,	// (0x0001c38e) list_single_preview_pane_t

0xb9cb,	// (0x0001822f) bg_popup_heading_pane_cp2_ParamLimits

0xb9cb,	// (0x0001822f) bg_popup_heading_pane_cp2

0xb9e1,	// (0x00018245) heading_preview_pane_g1

0xb9e9,	// (0x0001824d) heading_preview_pane_t1_ParamLimits

0xb9e9,	// (0x0001824d) heading_preview_pane_t1

0x37cc,	// (0x00010030) soft_indicator_pane_t1_ParamLimits

0x3e35,	// (0x00010699) scroll_pane_ParamLimits

0x49d7,	// (0x0001123b) scroll_sc2_left_pane

0x49ce,	// (0x00011232) scroll_sc2_right_pane

0x49f6,	// (0x0001125a) scroll_bg_pane_g1_ParamLimits

0x4a0b,	// (0x0001126f) scroll_bg_pane_g2_ParamLimits

0x4a23,	// (0x00011287) scroll_bg_pane_g3_ParamLimits

0xf722,	// (0x0001bf86) scroll_bg_pane_g_ParamLimits

0x49f6,	// (0x0001125a) scroll_handle_pane_g1_ParamLimits

0x4a45,	// (0x000112a9) scroll_handle_pane_g2_ParamLimits

0x4a23,	// (0x00011287) scroll_handle_pane_g3_ParamLimits

0xf729,	// (0x0001bf8d) scroll_handle_pane_g_ParamLimits

0x66b8,	// (0x00012f1c) popup_choice_list_window_ParamLimits

0x66b8,	// (0x00012f1c) popup_choice_list_window

0x68b2,	// (0x00013116) choice_list_pane

0x6928,	// (0x0001318c) cell_toolbar_pane_t1

0x6950,	// (0x000131b4) toolbar_button_pane_ParamLimits

0x77ef,	// (0x00014053) ai_gene_pane_1_t2_ParamLimits

0x77ef,	// (0x00014053) ai_gene_pane_1_t2

0x0001,

0xf93f,	// (0x0001c1a3) ai_gene_pane_1_t_ParamLimits

0xf93f,	// (0x0001c1a3) ai_gene_pane_1_t

0xba06,	// (0x0001826a) scroll_sc2_left_pane_g1

0xba06,	// (0x0001826a) scroll_sc2_right_pane_g1

0x6644,	// (0x00012ea8) bg_popup_sub_pane_cp10

0xba10,	// (0x00018274) list_choice_list_pane

0xba27,	// (0x0001828b) list_single_choice_list_pane_ParamLimits

0xba27,	// (0x0001828b) list_single_choice_list_pane

0xba3b,	// (0x0001829f) list_single_choice_list_pane_g1

0x46ca,	// (0x00010f2e) list_single_choice_list_pane_t1_ParamLimits

0x46ca,	// (0x00010f2e) list_single_choice_list_pane_t1

0xba43,	// (0x000182a7) choice_list_pane_g1

0xba4b,	// (0x000182af) choice_list_pane_t1

0x34f8,	// (0x0000fd5c) input_focus_pane_cp11

0x48ae,	// (0x00011112) title_pane_stacon_g2_ParamLimits

0x48ae,	// (0x00011112) title_pane_stacon_g2

0x0002,

0xf708,	// (0x0001bf6c) title_pane_stacon_g_ParamLimits

0xf708,	// (0x0001bf6c) title_pane_stacon_g

0x516c,	// (0x000119d0) cursor_press_pane

0xa643,	// (0x00016ea7) popup_fep_hwr_window_ParamLimits

0xa643,	// (0x00016ea7) popup_fep_hwr_window

0x670a,	// (0x00012f6e) popup_fep_vkb_window_ParamLimits

0x670a,	// (0x00012f6e) popup_fep_vkb_window

0xba59,	// (0x000182bd) cursor_press_pane_g1

0x0002,

0xfb53,	// (0x0001c3b7) fep_vkb_side_pane_g_ParamLimits

0xba96,	// (0x000182fa) fep_hwr_candidate_pane_ParamLimits

0xba96,	// (0x000182fa) fep_hwr_candidate_pane

0xbabe,	// (0x00018322) fep_hwr_side_pane_ParamLimits

0xbabe,	// (0x00018322) fep_hwr_side_pane

0xbade,	// (0x00018342) fep_hwr_top_pane_ParamLimits

0xbade,	// (0x00018342) fep_hwr_top_pane

0xbaf6,	// (0x0001835a) fep_hwr_write_pane_ParamLimits

0xbaf6,	// (0x0001835a) fep_hwr_write_pane

0xfb53,	// (0x0001c3b7) fep_vkb_side_pane_g

0xbb30,	// (0x00018394) fep_hwr_top_pane_g1

0xbb42,	// (0x000183a6) fep_hwr_top_pane_g2

0xbb54,	// (0x000183b8) fep_hwr_top_pane_g3

0x0002,

0xfb2f,	// (0x0001c393) fep_hwr_top_pane_g

0xbb69,	// (0x000183cd) fep_hwr_top_text_pane

0x4b9a,	// (0x000113fe) fep_hwr_top_text_pane_g1

0xbc41,	// (0x000184a5) fep_hwr_top_text_pane_t1

0xbc89,	// (0x000184ed) fep_hwr_candidate_pane_g1

0xbebf,	// (0x00018723) fep_vkb_keypad_pane_g3_ParamLimits

0xbebf,	// (0x00018723) fep_vkb_keypad_pane_g3

0xbee1,	// (0x00018745) fep_vkb_keypad_pane_g4_ParamLimits

0xbee1,	// (0x00018745) fep_vkb_keypad_pane_g4

0xbf50,	// (0x000187b4) fep_vkb_bottom_pane_g2_ParamLimits

0xbf50,	// (0x000187b4) fep_vkb_bottom_pane_g2

0x0001,

0xfb5a,	// (0x0001c3be) fep_vkb_bottom_pane_g_ParamLimits

0xfb5a,	// (0x0001c3be) fep_vkb_bottom_pane_g

0xba06,	// (0x0001826a) cell_vkb_side_pane_g2

0x0001,

0xfb64,	// (0x0001c3c8) cell_vkb_side_pane_g

0xbfdb,	// (0x0001883f) cell_vkb_side_pane_t1

0xbfe9,	// (0x0001884d) cell_vkb_side_pane_t1_copy1

0xba06,	// (0x0001826a) bg_fep_vkb_candidate_pane_g2

0xc10d,	// (0x00018971) cell_vkb_candidate_pane_ParamLimits

0xbcbd,	// (0x00018521) aid_size_cell_vkb_ParamLimits

0xbcbd,	// (0x00018521) aid_size_cell_vkb

0xc10d,	// (0x00018971) cell_vkb_candidate_pane

0xc13f,	// (0x000189a3) bg_popup_fep_shadow_pane_g1

0xbd33,	// (0x00018597) fep_vkb_bottom_pane_ParamLimits

0xbd33,	// (0x00018597) fep_vkb_bottom_pane

0xbd70,	// (0x000185d4) fep_vkb_candidate_pane_ParamLimits

0xbd70,	// (0x000185d4) fep_vkb_candidate_pane

0xbd8c,	// (0x000185f0) fep_vkb_keypad_pane_ParamLimits

0xbd8c,	// (0x000185f0) fep_vkb_keypad_pane

0xbdc0,	// (0x00018624) fep_vkb_side_pane_ParamLimits

0xbdc0,	// (0x00018624) fep_vkb_side_pane

0xbdec,	// (0x00018650) fep_vkb_top_pane_ParamLimits

0xbdec,	// (0x00018650) fep_vkb_top_pane

0xbe18,	// (0x0001867c) fep_vkb_top_pane_g1_ParamLimits

0xbe18,	// (0x0001867c) fep_vkb_top_pane_g1

0xbe27,	// (0x0001868b) fep_vkb_top_pane_g2_ParamLimits

0xbe27,	// (0x0001868b) fep_vkb_top_pane_g2

0xbe36,	// (0x0001869a) fep_vkb_top_pane_g3_ParamLimits

0xbe36,	// (0x0001869a) fep_vkb_top_pane_g3

0x0003,

0xfb4a,	// (0x0001c3ae) fep_vkb_top_pane_g_ParamLimits

0xfb4a,	// (0x0001c3ae) fep_vkb_top_pane_g

0xbe54,	// (0x000186b8) fep_vkb_top_text_pane_ParamLimits

0xbe54,	// (0x000186b8) fep_vkb_top_text_pane

0xbe65,	// (0x000186c9) fep_vkb_side_pane_g1_ParamLimits

0xbe65,	// (0x000186c9) fep_vkb_side_pane_g1

0xbeae,	// (0x00018712) grid_vkb_side_pane_ParamLimits

0xbeae,	// (0x00018712) grid_vkb_side_pane

0xc147,	// (0x000189ab) bg_popup_fep_shadow_pane_g2

0xc150,	// (0x000189b4) bg_popup_fep_shadow_pane_g3

0xc158,	// (0x000189bc) bg_popup_fep_shadow_pane_g4

0xc161,	// (0x000189c5) bg_popup_fep_shadow_pane_g5

0xc169,	// (0x000189cd) bg_popup_fep_shadow_pane_g6

0xc171,	// (0x000189d5) bg_popup_fep_shadow_pane_g7

0x4525,	// (0x00010d89) bg_popup_fep_shadow_pane_g8

0xbeff,	// (0x00018763) grid_vkb_keypad_number_pane_ParamLimits

0xbeff,	// (0x00018763) grid_vkb_keypad_number_pane

0xbf0f,	// (0x00018773) grid_vkb_keypad_pane_ParamLimits

0xbf0f,	// (0x00018773) grid_vkb_keypad_pane

0xbf35,	// (0x00018799) fep_vkb_bottom_pane_g1_ParamLimits

0xbf35,	// (0x00018799) fep_vkb_bottom_pane_g1

0xbf5e,	// (0x000187c2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xbf5e,	// (0x000187c2) grid_vkb_keypad_bottom_left_pane

0xbf73,	// (0x000187d7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xbf73,	// (0x000187d7) grid_vkb_keypad_bottom_right_pane

0xbf88,	// (0x000187ec) fep_vkb_top_text_pane_g1

0xbfa3,	// (0x00018807) fep_vkb_top_text_pane_t1

0xbfb8,	// (0x0001881c) cell_vkb_side_pane_ParamLimits

0xbfb8,	// (0x0001881c) cell_vkb_side_pane

0xba06,	// (0x0001826a) cell_vkb_side_pane_g1

0xbff7,	// (0x0001885b) cell_vkb_keypad_pane_ParamLimits

0xbff7,	// (0x0001885b) cell_vkb_keypad_pane

0xc064,	// (0x000188c8) cell_vkb_keypad_pane_g1

0x0008,

0xfb77,	// (0x0001c3db) bg_popup_fep_shadow_pane_g

0xba06,	// (0x0001826a) cell_hwr_side_pane_g1

0xba06,	// (0x0001826a) cell_hwr_side_pane_g2

0xc06e,	// (0x000188d2) cell_vkb_keypad_pane_t1

0xc07c,	// (0x000188e0) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc07c,	// (0x000188e0) cell_vkb_keypad_bottom_left_pane

0xc099,	// (0x000188fd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc099,	// (0x000188fd) cell_vkb_keypad_bottom_right_pane

0xba06,	// (0x0001826a) cell_vkb_keypad_bottom_left_pane_g1

0xba06,	// (0x0001826a) cell_vkb_keypad_bottom_right_pane_g1

0xc0d2,	// (0x00018936) cell_vkb_keypad_number_pane_ParamLimits

0xc0d2,	// (0x00018936) cell_vkb_keypad_number_pane

0xc0f1,	// (0x00018955) cell_vkb_keypad_number_pane_g1

0xc0fb,	// (0x0001895f) cell_vkb_keypad_number_pane_g2

0xc104,	// (0x00018968) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb69,	// (0x0001c3cd) cell_vkb_keypad_number_pane_g

0xc06e,	// (0x000188d2) cell_vkb_keypad_number_pane_t1

0xc126,	// (0x0001898a) fep_vkb_candidate_pane_g1

0x0001,

0xfb64,	// (0x0001c3c8) cell_hwr_side_pane_g

0xc181,	// (0x000189e5) cell_hwr_side_pane_t1

0xc18f,	// (0x000189f3) cell_hwr_side_pane_t1_copy1

0xbe46,	// (0x000186aa) cell_hwr_candidate_pane_g1

0xc1df,	// (0x00018a43) cell_hwr_candidate_pane_t1

0xba06,	// (0x0001826a) cell_vkb_candidate_pane_g2

0xc232,	// (0x00018a96) cell_vkb_candidate_pane_t1

0xba61,	// (0x000182c5) bg_popup_fep_shadow_pane_ParamLimits

0xba61,	// (0x000182c5) bg_popup_fep_shadow_pane

0xbb10,	// (0x00018374) bg_fep_hwr_top_pane_g4

0xbb7e,	// (0x000183e2) bg_hwr_side_pane_g1_ParamLimits

0xbb7e,	// (0x000183e2) bg_hwr_side_pane_g1

0xbbb1,	// (0x00018415) cell_hwr_side_pane_ParamLimits

0xbbb1,	// (0x00018415) cell_hwr_side_pane

0xbbec,	// (0x00018450) fep_hwr_write_pane_g1_ParamLimits

0xbbec,	// (0x00018450) fep_hwr_write_pane_g1

0xbbf9,	// (0x0001845d) fep_hwr_write_pane_g2_ParamLimits

0xbbf9,	// (0x0001845d) fep_hwr_write_pane_g2

0xbc06,	// (0x0001846a) fep_hwr_write_pane_g3_ParamLimits

0xbc06,	// (0x0001846a) fep_hwr_write_pane_g3

0xbc14,	// (0x00018478) fep_hwr_write_pane_g4_ParamLimits

0xbc14,	// (0x00018478) fep_hwr_write_pane_g4

0x0005,

0xfb36,	// (0x0001c39a) fep_hwr_write_pane_g_ParamLimits

0xfb36,	// (0x0001c39a) fep_hwr_write_pane_g

0xbb10,	// (0x00018374) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xbb10,	// (0x00018374) bg_fep_hwr_candidate_pane_g2

0xbc4f,	// (0x000184b3) cell_hwr_candidate_pane_ParamLimits

0xbc4f,	// (0x000184b3) cell_hwr_candidate_pane

0xbc89,	// (0x000184ed) fep_hwr_candidate_pane_g1_ParamLimits

0xbceb,	// (0x0001854f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbceb,	// (0x0001854f) bg_popup_fep_shadow_pane_cp2

0xbe46,	// (0x000186aa) fep_vkb_top_pane_g4_ParamLimits

0xbe46,	// (0x000186aa) fep_vkb_top_pane_g4

0xbe8c,	// (0x000186f0) fep_vkb_side_pane_g2_ParamLimits

0xbe8c,	// (0x000186f0) fep_vkb_side_pane_g2

0x927a,	// (0x00015ade) list_setting_pane_t4_ParamLimits

0x927a,	// (0x00015ade) list_setting_pane_t4

0x9308,	// (0x00015b6c) list_setting_number_pane_t5_ParamLimits

0x9308,	// (0x00015b6c) list_setting_number_pane_t5

0x4bcc,	// (0x00011430) list_double_heading_pane_cp2_ParamLimits

0x4bcc,	// (0x00011430) list_double_heading_pane_cp2

0x4fe1,	// (0x00011845) list_double_heading_pane_g1_cp2_ParamLimits

0x4fe1,	// (0x00011845) list_double_heading_pane_g1_cp2

0xc240,	// (0x00018aa4) list_double_heading_pane_g2_cp2_ParamLimits

0xc240,	// (0x00018aa4) list_double_heading_pane_g2_cp2

0xc254,	// (0x00018ab8) list_double_heading_pane_t1_cp2_ParamLimits

0xc254,	// (0x00018ab8) list_double_heading_pane_t1_cp2

0xc26a,	// (0x00018ace) list_double_heading_pane_t2_cp2_ParamLimits

0xc26a,	// (0x00018ace) list_double_heading_pane_t2_cp2

0x34e2,	// (0x0000fd46) aid_value_unit2

0x9f0a,	// (0x0001676e) popup_preview_fixed_window

0x3970,	// (0x000101d4) bg_popup_preview_window_pane_cp02

0xc27c,	// (0x00018ae0) list_preview_fixed_pane

0xc2c2,	// (0x00018b26) list_empty_pane_fp_ParamLimits

0xc2c2,	// (0x00018b26) list_empty_pane_fp

0xc2c2,	// (0x00018b26) list_single_cale_day_pane_fp_ParamLimits

0xc2c2,	// (0x00018b26) list_single_cale_day_pane_fp

0xc2c2,	// (0x00018b26) list_single_graphic_heading_pane_fp_ParamLimits

0xc2c2,	// (0x00018b26) list_single_graphic_heading_pane_fp

0xc2c2,	// (0x00018b26) list_single_graphic_pane_fp_ParamLimits

0xc2c2,	// (0x00018b26) list_single_graphic_pane_fp

0xc2c2,	// (0x00018b26) list_single_heading_pane_fp_ParamLimits

0xc2c2,	// (0x00018b26) list_single_heading_pane_fp

0xc2c2,	// (0x00018b26) list_single_pane_fp_ParamLimits

0xc2c2,	// (0x00018b26) list_single_pane_fp

0xc2d6,	// (0x00018b3a) list_single_pane_fp_g1_ParamLimits

0xc2d6,	// (0x00018b3a) list_single_pane_fp_g1

0x9239,	// (0x00015a9d) list_single_pane_fp_g2_ParamLimits

0x9239,	// (0x00015a9d) list_single_pane_fp_g2

0x99df,	// (0x00016243) list_single_pane_fp_g3_ParamLimits

0x99df,	// (0x00016243) list_single_pane_fp_g3

0xc2e2,	// (0x00018b46) list_single_pane_fp_g4_ParamLimits

0xc2e2,	// (0x00018b46) list_single_pane_fp_g4

0x0003,

0xfb98,	// (0x0001c3fc) list_single_pane_fp_g_ParamLimits

0xfb98,	// (0x0001c3fc) list_single_pane_fp_g

0x99f3,	// (0x00016257) list_single_pane_fp_t1_ParamLimits

0x99f3,	// (0x00016257) list_single_pane_fp_t1

0x9a0a,	// (0x0001626e) list_single_graphic_pane_fp_g1_ParamLimits

0x9a0a,	// (0x0001626e) list_single_graphic_pane_fp_g1

0xc2d6,	// (0x00018b3a) list_single_graphic_pane_fp_g2_ParamLimits

0xc2d6,	// (0x00018b3a) list_single_graphic_pane_fp_g2

0x9239,	// (0x00015a9d) list_single_graphic_pane_fp_g3_ParamLimits

0x9239,	// (0x00015a9d) list_single_graphic_pane_fp_g3

0x99df,	// (0x00016243) list_single_graphic_pane_fp_g4_ParamLimits

0x99df,	// (0x00016243) list_single_graphic_pane_fp_g4

0xc2e2,	// (0x00018b46) list_single_graphic_pane_fp_g5_ParamLimits

0xc2e2,	// (0x00018b46) list_single_graphic_pane_fp_g5

0x0004,

0xfba1,	// (0x0001c405) list_single_graphic_pane_fp_g_ParamLimits

0xfba1,	// (0x0001c405) list_single_graphic_pane_fp_g

0x9a16,	// (0x0001627a) list_single_graphic_pane_fp_t1_ParamLimits

0x9a16,	// (0x0001627a) list_single_graphic_pane_fp_t1

0x9a0a,	// (0x0001626e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9a0a,	// (0x0001626e) list_single_graphic_heading_pane_fp_g1

0xc2d6,	// (0x00018b3a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc2d6,	// (0x00018b3a) list_single_graphic_heading_pane_fp_g2

0x9239,	// (0x00015a9d) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x9239,	// (0x00015a9d) list_single_graphic_heading_pane_fp_g3

0x99df,	// (0x00016243) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x99df,	// (0x00016243) list_single_graphic_heading_pane_fp_g4

0xc2e2,	// (0x00018b46) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc2e2,	// (0x00018b46) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfba1,	// (0x0001c405) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0001c405) list_single_graphic_heading_pane_fp_g

0x9a2c,	// (0x00016290) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9a2c,	// (0x00016290) list_single_graphic_heading_pane_fp_t1

0x9a42,	// (0x000162a6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9a42,	// (0x000162a6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x0001c410) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x0001c410) list_single_graphic_heading_pane_fp_t

0x9a54,	// (0x000162b8) list_single_cale_day_pane_fp_g1_ParamLimits

0x9a54,	// (0x000162b8) list_single_cale_day_pane_fp_g1

0xc2ee,	// (0x00018b52) list_single_cale_day_pane_fp_g2_ParamLimits

0xc2ee,	// (0x00018b52) list_single_cale_day_pane_fp_g2

0x9a8c,	// (0x000162f0) list_single_cale_day_pane_fp_g3_ParamLimits

0x9a8c,	// (0x000162f0) list_single_cale_day_pane_fp_g3

0x9ab4,	// (0x00016318) list_single_cale_day_pane_fp_g4_ParamLimits

0x9ab4,	// (0x00016318) list_single_cale_day_pane_fp_g4

0x9ad8,	// (0x0001633c) list_single_cale_day_pane_fp_g5_ParamLimits

0x9ad8,	// (0x0001633c) list_single_cale_day_pane_fp_g5

0x0004,

0xfbb1,	// (0x0001c415) list_single_cale_day_pane_fp_g_ParamLimits

0xfbb1,	// (0x0001c415) list_single_cale_day_pane_fp_g

0x9afc,	// (0x00016360) list_single_cale_day_pane_fp_t1_ParamLimits

0x9afc,	// (0x00016360) list_single_cale_day_pane_fp_t1

0x9b22,	// (0x00016386) list_single_cale_day_pane_fp_t2_ParamLimits

0x9b22,	// (0x00016386) list_single_cale_day_pane_fp_t2

0x9b3b,	// (0x0001639f) list_single_cale_day_pane_fp_t3_ParamLimits

0x9b3b,	// (0x0001639f) list_single_cale_day_pane_fp_t3

0x0002,

0xfbbc,	// (0x0001c420) list_single_cale_day_pane_fp_t_ParamLimits

0xfbbc,	// (0x0001c420) list_single_cale_day_pane_fp_t

0xc2d6,	// (0x00018b3a) list_empty_pane_fp_g1_ParamLimits

0xc2d6,	// (0x00018b3a) list_empty_pane_fp_g1

0x9b54,	// (0x000163b8) list_empty_pane_fp_t1

0x9b62,	// (0x000163c6) list_empty_pane_fp_t2

0x0001,

0xfbc3,	// (0x0001c427) list_empty_pane_fp_t

0xc2d6,	// (0x00018b3a) list_single_heading_pane_fp_g1_ParamLimits

0xc2d6,	// (0x00018b3a) list_single_heading_pane_fp_g1

0x9239,	// (0x00015a9d) list_single_heading_pane_fp_g2_ParamLimits

0x9239,	// (0x00015a9d) list_single_heading_pane_fp_g2

0x99df,	// (0x00016243) list_single_heading_pane_fp_g3_ParamLimits

0x99df,	// (0x00016243) list_single_heading_pane_fp_g3

0x0002,

0xfbc8,	// (0x0001c42c) list_single_heading_pane_fp_g_ParamLimits

0xfbc8,	// (0x0001c42c) list_single_heading_pane_fp_g

0x9b70,	// (0x000163d4) list_single_heading_pane_fp_t1_ParamLimits

0x9b70,	// (0x000163d4) list_single_heading_pane_fp_t1

0x9b82,	// (0x000163e6) list_single_heading_pane_fp_t2_ParamLimits

0x9b82,	// (0x000163e6) list_single_heading_pane_fp_t2

0x0001,

0xfbcf,	// (0x0001c433) list_single_heading_pane_fp_t_ParamLimits

0xfbcf,	// (0x0001c433) list_single_heading_pane_fp_t

0x4738,	// (0x00010f9c) aid_size_cell_fast

0x38d7,	// (0x0001013b) soft_indicator_pane_cp1_t1

0x4775,	// (0x00010fd9) cell_app_pane_cp2_ParamLimits

0x4775,	// (0x00010fd9) cell_app_pane_cp2

0xba83,	// (0x000182e7) fep_hwr_candidate_drop_down_list_pane

0xbca3,	// (0x00018507) fep_hwr_candidate_pane_g3_ParamLimits

0xbca3,	// (0x00018507) fep_hwr_candidate_pane_g3

0xbcb0,	// (0x00018514) fep_hwr_candidate_pane_g4_ParamLimits

0xbcb0,	// (0x00018514) fep_hwr_candidate_pane_g4

0x0002,

0xfb43,	// (0x0001c3a7) fep_hwr_candidate_pane_g_ParamLimits

0xfb43,	// (0x0001c3a7) fep_hwr_candidate_pane_g

0xbd5f,	// (0x000185c3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbd5f,	// (0x000185c3) fep_vkb_candidate_drop_down_list_pane

0xc12e,	// (0x00018992) fep_vkb_candidate_pane_g3

0xc136,	// (0x0001899a) fep_vkb_candidate_pane_g4

0x0002,

0xfb70,	// (0x0001c3d4) fep_vkb_candidate_pane_g

0xbe46,	// (0x000186aa) cell_hwr_candidate_pane_g1_ParamLimits

0xc19d,	// (0x00018a01) cell_hwr_candidate_pane_g3_ParamLimits

0xc19d,	// (0x00018a01) cell_hwr_candidate_pane_g3

0xc1be,	// (0x00018a22) cell_hwr_candidate_pane_g4_ParamLimits

0xc1be,	// (0x00018a22) cell_hwr_candidate_pane_g4

0x0002,

0xfb8a,	// (0x0001c3ee) cell_hwr_candidate_pane_g_ParamLimits

0xfb8a,	// (0x0001c3ee) cell_hwr_candidate_pane_g

0xc1fc,	// (0x00018a60) cell_vkb_candidate_pane_g3_ParamLimits

0xc1fc,	// (0x00018a60) cell_vkb_candidate_pane_g3

0xc217,	// (0x00018a7b) cell_vkb_candidate_pane_g4_ParamLimits

0xc217,	// (0x00018a7b) cell_vkb_candidate_pane_g4

0xc2fa,	// (0x00018b5e) cell_app_pane_cp2_g1_ParamLimits

0xc2fa,	// (0x00018b5e) cell_app_pane_cp2_g1

0xc318,	// (0x00018b7c) cell_app_pane_cp2_g2_ParamLimits

0xc318,	// (0x00018b7c) cell_app_pane_cp2_g2

0x0001,

0xfbd4,	// (0x0001c438) cell_app_pane_cp2_g_ParamLimits

0xfbd4,	// (0x0001c438) cell_app_pane_cp2_g

0xc324,	// (0x00018b88) cell_app_pane_cp2_t1_ParamLimits

0xc324,	// (0x00018b88) cell_app_pane_cp2_t1

0x43df,	// (0x00010c43) grid_highlight_pane_cp1_ParamLimits

0x43df,	// (0x00010c43) grid_highlight_pane_cp1

0xc336,	// (0x00018b9a) cell_hwr_candidate_pane_cp1_ParamLimits

0xc336,	// (0x00018b9a) cell_hwr_candidate_pane_cp1

0xbe46,	// (0x000186aa) fep_hwr_candidate_drop_down_list_pane_g1

0xc354,	// (0x00018bb8) fep_hwr_candidate_drop_down_list_pane_g2

0xc361,	// (0x00018bc5) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0001c43d) fep_hwr_candidate_drop_down_list_pane_g

0xc36e,	// (0x00018bd2) fep_hwr_candidate_drop_down_list_scroll_pane

0xc377,	// (0x00018bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc377,	// (0x00018bdb) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xc384,	// (0x00018be8) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc384,	// (0x00018be8) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xc391,	// (0x00018bf5) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc391,	// (0x00018bf5) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc1fc,	// (0x00018a60) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc1fc,	// (0x00018a60) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc217,	// (0x00018a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc217,	// (0x00018a7b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xc39e,	// (0x00018c02) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc39e,	// (0x00018c02) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xc3b9,	// (0x00018c1d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc3b9,	// (0x00018c1d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xc3d4,	// (0x00018c38) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc3d4,	// (0x00018c38) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x0001c444) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x0001c444) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc3ef,	// (0x00018c53) cell_vkb_candidate_pane_cp1_ParamLimits

0xc3ef,	// (0x00018c53) cell_vkb_candidate_pane_cp1

0xbe46,	// (0x000186aa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xbe46,	// (0x000186aa) fep_vkb_candidate_drop_down_list_pane_g1

0xc354,	// (0x00018bb8) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc354,	// (0x00018bb8) fep_vkb_candidate_drop_down_list_pane_g2

0xc361,	// (0x00018bc5) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc361,	// (0x00018bc5) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0001c43d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd9,	// (0x0001c43d) fep_vkb_candidate_drop_down_list_pane_g

0xc412,	// (0x00018c76) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc412,	// (0x00018c76) fep_vkb_candidate_drop_down_list_scroll_pane

0xc41f,	// (0x00018c83) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc41f,	// (0x00018c83) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc42c,	// (0x00018c90) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc42c,	// (0x00018c90) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc438,	// (0x00018c9c) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc438,	// (0x00018c9c) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc19d,	// (0x00018a01) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc19d,	// (0x00018a01) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc1be,	// (0x00018a22) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc1be,	// (0x00018a22) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc444,	// (0x00018ca8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc444,	// (0x00018ca8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc465,	// (0x00018cc9) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc465,	// (0x00018cc9) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc486,	// (0x00018cea) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc486,	// (0x00018cea) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x0001c455) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x0001c455) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x35f3,	// (0x0000fe57) title_pane_g1_ParamLimits

0x3600,	// (0x0000fe64) title_pane_g2_ParamLimits

0xf592,	// (0x0001bdf6) title_pane_g_ParamLimits

0x4b8a,	// (0x000113ee) aid_call2_pane

0x4b92,	// (0x000113f6) aid_call_pane

0x4b9a,	// (0x000113fe) popup_clock_analogue_window_g1

0x4b9a,	// (0x000113fe) popup_clock_analogue_window_g2

0xa1b8,	// (0x00016a1c) popup_clock_analogue_window_g3

0xa1c1,	// (0x00016a25) popup_clock_analogue_window_g4

0x3502,	// (0x0000fd66) popup_clock_analogue_window_g5

0x0004,

0xf737,	// (0x0001bf9b) popup_clock_analogue_window_g

0xa1c9,	// (0x00016a2d) popup_clock_analogue_window_t1

0xa1d7,	// (0x00016a3b) clock_digital_number_pane_ParamLimits

0xa1d7,	// (0x00016a3b) clock_digital_number_pane

0xa1e3,	// (0x00016a47) clock_digital_number_pane_cp02_ParamLimits

0xa1e3,	// (0x00016a47) clock_digital_number_pane_cp02

0xa1ef,	// (0x00016a53) clock_digital_number_pane_cp03_ParamLimits

0xa1ef,	// (0x00016a53) clock_digital_number_pane_cp03

0xa1fb,	// (0x00016a5f) clock_digital_number_pane_cp04_ParamLimits

0xa1fb,	// (0x00016a5f) clock_digital_number_pane_cp04

0xa207,	// (0x00016a6b) clock_digital_separator_pane_ParamLimits

0xa207,	// (0x00016a6b) clock_digital_separator_pane

0xa213,	// (0x00016a77) popup_clock_digital_window_t1_ParamLimits

0xa213,	// (0x00016a77) popup_clock_digital_window_t1

0x3502,	// (0x0000fd66) clock_digital_number_pane_g1

0x3502,	// (0x0000fd66) clock_digital_number_pane_g2

0x0001,

0xf742,	// (0x0001bfa6) clock_digital_number_pane_g

0x3502,	// (0x0000fd66) clock_digital_separator_pane_g1

0x3502,	// (0x0000fd66) clock_digital_separator_pane_g2

0x0001,

0xf742,	// (0x0001bfa6) clock_digital_separator_pane_g

0xa954,	// (0x000171b8) aid_fill_nsta_ParamLimits

0xaa0d,	// (0x00017271) indicator_nsta_pane_ParamLimits

0x685b,	// (0x000130bf) popup_clock_analogue_window

0x685b,	// (0x000130bf) popup_clock_digital_window

0x36c9,	// (0x0000ff2d) grid_indicator_nsta_pane_ParamLimits

0x84da,	// (0x00014d3e) clock_nsta_pane_t2

0x0001,

0xfad0,	// (0x0001c334) clock_nsta_pane_t

0xa17c,	// (0x000169e0) aid_size_max_handle

0xa186,	// (0x000169ea) aid_size_min_handle

0x516c,	// (0x000119d0) editor_scroll_pane

0xc4a1,	// (0x00018d05) ex_editor_pane

0x46a6,	// (0x00010f0a) scroll_pane_cp13

0x3e62,	// (0x000106c6) scroll_pane_cp14

0x4bc4,	// (0x00011428) scroll_pane_cp36

0x4bdc,	// (0x00011440) list_single_graphic_hl_pane_cp2_ParamLimits

0x4bdc,	// (0x00011440) list_single_graphic_hl_pane_cp2

0xb29a,	// (0x00017afe) list_single_graphic_hl_pane_ParamLimits

0xb29a,	// (0x00017afe) list_single_graphic_hl_pane

0x9b98,	// (0x000163fc) aid_size_min_hl_cp1

0xc4a9,	// (0x00018d0d) list_highlight_pane_cp34_ParamLimits

0xc4a9,	// (0x00018d0d) list_highlight_pane_cp34

0xc4ba,	// (0x00018d1e) list_single_graphic_hl_pane_g1_ParamLimits

0xc4ba,	// (0x00018d1e) list_single_graphic_hl_pane_g1

0x9ba1,	// (0x00016405) list_single_graphic_hl_pane_g2_ParamLimits

0x9ba1,	// (0x00016405) list_single_graphic_hl_pane_g2

0x9ba1,	// (0x00016405) list_single_graphic_hl_pane_g3_ParamLimits

0x9ba1,	// (0x00016405) list_single_graphic_hl_pane_g3

0x9600,	// (0x00015e64) list_single_graphic_hl_pane_g4_ParamLimits

0x9600,	// (0x00015e64) list_single_graphic_hl_pane_g4

0x9bad,	// (0x00016411) list_single_graphic_hl_pane_g5_ParamLimits

0x9bad,	// (0x00016411) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x0001c466) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x0001c466) list_single_graphic_hl_pane_g

0x9bc1,	// (0x00016425) list_single_graphic_hl_pane_t1_ParamLimits

0x9bc1,	// (0x00016425) list_single_graphic_hl_pane_t1

0xc4c7,	// (0x00018d2b) aid_size_min_hl_cp2

0xc4d0,	// (0x00018d34) list_highlight_pane_cp34_cp2_ParamLimits

0xc4d0,	// (0x00018d34) list_highlight_pane_cp34_cp2

0xc4ba,	// (0x00018d1e) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc4ba,	// (0x00018d1e) list_single_graphic_hl_pane_g1_cp2

0xc4dd,	// (0x00018d41) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc4dd,	// (0x00018d41) list_single_graphic_hl_pane_g2_cp2

0xc4e9,	// (0x00018d4d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc4e9,	// (0x00018d4d) list_single_graphic_hl_pane_g3_cp2

0x4fe1,	// (0x00011845) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4fe1,	// (0x00011845) list_single_graphic_hl_pane_g4_cp2

0xc240,	// (0x00018aa4) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc240,	// (0x00018aa4) list_single_graphic_hl_pane_g5_cp2

0xa49e,	// (0x00016d02) control_pane_g4_ParamLimits

0xa49e,	// (0x00016d02) control_pane_g4

0x6644,	// (0x00012ea8) bg_popup_sub_pane_cp10_ParamLimits

0xba10,	// (0x00018274) list_choice_list_pane_ParamLimits

0xba1f,	// (0x00018283) scroll_pane_cp23

0x3970,	// (0x000101d4) bg_popup_preview_window_pane_cp02_ParamLimits

0xc27c,	// (0x00018ae0) list_preview_fixed_pane_ParamLimits

0xc292,	// (0x00018af6) list_preview_fixed_pane_cp_ParamLimits

0xc292,	// (0x00018af6) list_preview_fixed_pane_cp

0xc29e,	// (0x00018b02) popup_preview_fixed_window_g1_ParamLimits

0xc29e,	// (0x00018b02) popup_preview_fixed_window_g1

0xc2aa,	// (0x00018b0e) popup_preview_fixed_window_g2_ParamLimits

0xc2aa,	// (0x00018b0e) popup_preview_fixed_window_g2

0x0002,

0xfb91,	// (0x0001c3f5) popup_preview_fixed_window_g_ParamLimits

0xfb91,	// (0x0001c3f5) popup_preview_fixed_window_g

0xa10c,	// (0x00016970) aid_navi_side_left_pane_ParamLimits

0xa11c,	// (0x00016980) aid_navi_side_right_pane_ParamLimits

0xa12b,	// (0x0001698f) navi_icon_pane_stacon_ParamLimits

0xa13b,	// (0x0001699f) navi_navi_pane_stacon_ParamLimits

0xa12b,	// (0x0001698f) navi_text_pane_stacon_ParamLimits

0x34f8,	// (0x0000fd5c) main_text_info_pane

0xc50b,	// (0x00018d6f) listscroll_text_info_pane

0xc513,	// (0x00018d77) list_text_info_pane_ParamLimits

0xc513,	// (0x00018d77) list_text_info_pane

0xc522,	// (0x00018d86) scroll_pane_cp24_ParamLimits

0xc522,	// (0x00018d86) scroll_pane_cp24

0xc540,	// (0x00018da4) list_text_info_pane_t1_ParamLimits

0xc540,	// (0x00018da4) list_text_info_pane_t1

0xa5c9,	// (0x00016e2d) popup_fast_swap2_window_ParamLimits

0xa5c9,	// (0x00016e2d) popup_fast_swap2_window

0xc55d,	// (0x00018dc1) aid_size_cell_fast2

0x34f8,	// (0x0000fd5c) bg_popup_window_pane_cp17

0x6d20,	// (0x00013584) heading_pane_cp2

0x3be4,	// (0x00010448) listscroll_fast2_pane

0xc567,	// (0x00018dcb) grid_fast2_pane

0xc56f,	// (0x00018dd3) listscroll_fast2_pane_g1

0xc577,	// (0x00018ddb) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x0001c471) listscroll_fast2_pane_g

0x46a6,	// (0x00010f0a) scroll_pane_cp26

0xc57f,	// (0x00018de3) cell_fast2_pane_ParamLimits

0xc57f,	// (0x00018de3) cell_fast2_pane

0xc595,	// (0x00018df9) cell_fast2_pane_g1

0xc59e,	// (0x00018e02) cell_fast2_pane_g2

0xc5a7,	// (0x00018e0b) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x0001c476) cell_fast2_pane_g

0x3cbb,	// (0x0001051f) grid_highlight_pane_cp9

0x3cd0,	// (0x00010534) main_eswt_pane_ParamLimits

0x3cd0,	// (0x00010534) main_eswt_pane

0xc537,	// (0x00018d9b) list_single_text_info_pane

0xc5af,	// (0x00018e13) eswt_ctrl_button_pane

0xc5af,	// (0x00018e13) eswt_ctrl_canvas_pane

0xc5b7,	// (0x00018e1b) eswt_ctrl_combo_pane

0xc5af,	// (0x00018e13) eswt_ctrl_default_pane

0xc5af,	// (0x00018e13) eswt_ctrl_label_pane

0xc5bf,	// (0x00018e23) eswt_ctrl_wait_pane

0xc5c7,	// (0x00018e2b) eswt_shell_pane

0x34f8,	// (0x0000fd5c) listscroll_eswt_app_pane

0xc5e3,	// (0x00018e47) popup_eswt_tasktip_window_ParamLimits

0xc5e3,	// (0x00018e47) popup_eswt_tasktip_window

0x6a72,	// (0x000132d6) bg_popup_window_pane_cp18

0xc5f4,	// (0x00018e58) eswt_control_pane_g1_ParamLimits

0xc5f4,	// (0x00018e58) eswt_control_pane_g1

0xc601,	// (0x00018e65) eswt_control_pane_g2_ParamLimits

0xc601,	// (0x00018e65) eswt_control_pane_g2

0xc60e,	// (0x00018e72) eswt_control_pane_g3_ParamLimits

0xc60e,	// (0x00018e72) eswt_control_pane_g3

0xc61b,	// (0x00018e7f) eswt_control_pane_g4_ParamLimits

0xc61b,	// (0x00018e7f) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x0001c47d) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x0001c47d) eswt_control_pane_g

0x43df,	// (0x00010c43) bg_button_pane_ParamLimits

0x43df,	// (0x00010c43) bg_button_pane

0x3cd0,	// (0x00010534) common_borders_pane_copy2_ParamLimits

0x3cd0,	// (0x00010534) common_borders_pane_copy2

0xc628,	// (0x00018e8c) control_button_pane_g1_ParamLimits

0xc628,	// (0x00018e8c) control_button_pane_g1

0xc634,	// (0x00018e98) control_button_pane_g2_ParamLimits

0xc634,	// (0x00018e98) control_button_pane_g2

0xc640,	// (0x00018ea4) control_button_pane_g3_ParamLimits

0xc640,	// (0x00018ea4) control_button_pane_g3

0x0002,

0xfc22,	// (0x0001c486) control_button_pane_g_ParamLimits

0xfc22,	// (0x0001c486) control_button_pane_g

0xc654,	// (0x00018eb8) control_button_pane_t1

0xc662,	// (0x00018ec6) control_button_pane_t2

0x0001,

0xfc29,	// (0x0001c48d) control_button_pane_t

0x695c,	// (0x000131c0) bg_button_pane_g1

0x696c,	// (0x000131d0) bg_button_pane_g2

0x6964,	// (0x000131c8) bg_button_pane_g3

0x697c,	// (0x000131e0) bg_button_pane_g4

0x6974,	// (0x000131d8) bg_button_pane_g5

0x6984,	// (0x000131e8) bg_button_pane_g6

0x698c,	// (0x000131f0) bg_button_pane_g7

0x699c,	// (0x00013200) bg_button_pane_g8

0x6994,	// (0x000131f8) bg_button_pane_g9

0x0008,

0xf893,	// (0x0001c0f7) bg_button_pane_g

0xb9cb,	// (0x0001822f) common_borders_pane_ParamLimits

0xb9cb,	// (0x0001822f) common_borders_pane

0xc5f4,	// (0x00018e58) eswt_control_pane_g1_copy1_ParamLimits

0xc5f4,	// (0x00018e58) eswt_control_pane_g1_copy1

0xc601,	// (0x00018e65) eswt_control_pane_g2_copy1_ParamLimits

0xc601,	// (0x00018e65) eswt_control_pane_g2_copy1

0xc60e,	// (0x00018e72) eswt_control_pane_g3_copy1_ParamLimits

0xc60e,	// (0x00018e72) eswt_control_pane_g3_copy1

0xc61b,	// (0x00018e7f) eswt_control_pane_g4_copy1_ParamLimits

0xc61b,	// (0x00018e7f) eswt_control_pane_g4_copy1

0xba06,	// (0x0001826a) bg_eswt_ctrl_canvas_pane_g1

0xb9cb,	// (0x0001822f) common_borders_pane_cp2_ParamLimits

0xb9cb,	// (0x0001822f) common_borders_pane_cp2

0xb9cb,	// (0x0001822f) common_borders_pane_cp3_ParamLimits

0xb9cb,	// (0x0001822f) common_borders_pane_cp3

0xc670,	// (0x00018ed4) separator_horizontal_pane

0x49d7,	// (0x0001123b) separator_vertical_pane

0xc5f4,	// (0x00018e58) eswt_control_pane_g1_copy2_ParamLimits

0xc5f4,	// (0x00018e58) eswt_control_pane_g1_copy2

0xc601,	// (0x00018e65) eswt_control_pane_g2_copy2_ParamLimits

0xc601,	// (0x00018e65) eswt_control_pane_g2_copy2

0xc60e,	// (0x00018e72) eswt_control_pane_g3_copy2_ParamLimits

0xc60e,	// (0x00018e72) eswt_control_pane_g3_copy2

0xc61b,	// (0x00018e7f) eswt_control_pane_g4_copy2_ParamLimits

0xc61b,	// (0x00018e7f) eswt_control_pane_g4_copy2

0x34f8,	// (0x0000fd5c) common_borders_pane_cp4

0xc678,	// (0x00018edc) separator_horizontal_pane_g1

0xc681,	// (0x00018ee5) separator_horizontal_pane_g2

0xc68a,	// (0x00018eee) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x0001c492) separator_horizontal_pane_g

0xc5f4,	// (0x00018e58) eswt_control_pane_g1_copy3_ParamLimits

0xc5f4,	// (0x00018e58) eswt_control_pane_g1_copy3

0xc601,	// (0x00018e65) eswt_control_pane_g2_copy3_ParamLimits

0xc601,	// (0x00018e65) eswt_control_pane_g2_copy3

0xc60e,	// (0x00018e72) eswt_control_pane_g3_copy3_ParamLimits

0xc60e,	// (0x00018e72) eswt_control_pane_g3_copy3

0xc61b,	// (0x00018e7f) eswt_control_pane_g4_copy3_ParamLimits

0xc61b,	// (0x00018e7f) eswt_control_pane_g4_copy3

0x34f8,	// (0x0000fd5c) common_borders_pane_cp5

0xc693,	// (0x00018ef7) separator_vertical_pane_g1

0xc69c,	// (0x00018f00) separator_vertical_pane_g2

0xc6a5,	// (0x00018f09) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x0001c499) separator_vertical_pane_g

0xc5f4,	// (0x00018e58) eswt_control_pane_g1_copy4_ParamLimits

0xc5f4,	// (0x00018e58) eswt_control_pane_g1_copy4

0xc601,	// (0x00018e65) eswt_control_pane_g2_copy4_ParamLimits

0xc601,	// (0x00018e65) eswt_control_pane_g2_copy4

0xc60e,	// (0x00018e72) eswt_control_pane_g3_copy4_ParamLimits

0xc60e,	// (0x00018e72) eswt_control_pane_g3_copy4

0xc61b,	// (0x00018e7f) eswt_control_pane_g4_copy4_ParamLimits

0xc61b,	// (0x00018e7f) eswt_control_pane_g4_copy4

0xc6ae,	// (0x00018f12) eswt_ctrl_combo_button_pane

0xc6b6,	// (0x00018f1a) eswt_ctrl_input_pane

0xc6be,	// (0x00018f22) popup_choice_list_window_cp70

0xc6c6,	// (0x00018f2a) eswt_ctrl_input_pane_t1

0x34f8,	// (0x0000fd5c) input_focus_pane_cp70

0xb9cb,	// (0x0001822f) bg_button_pane_cp70_ParamLimits

0xb9cb,	// (0x0001822f) bg_button_pane_cp70

0xc6d4,	// (0x00018f38) eswt_ctrl_combo_button_pane_g1

0xc6dc,	// (0x00018f40) wait_bar_pane_cp70

0x6a72,	// (0x000132d6) bg_popup_window_pane_cp70_ParamLimits

0x6a72,	// (0x000132d6) bg_popup_window_pane_cp70

0xc6e4,	// (0x00018f48) popup_eswt_tasktip_window_t1

0xc6fa,	// (0x00018f5e) wait_bar_pane_cp71_ParamLimits

0xc6fa,	// (0x00018f5e) wait_bar_pane_cp71

0xc706,	// (0x00018f6a) grid_eswt_app_pane

0x49ce,	// (0x00011232) scroll_pane_cp70

0xc70f,	// (0x00018f73) cell_eswt_app_pane_ParamLimits

0xc70f,	// (0x00018f73) cell_eswt_app_pane

0xc737,	// (0x00018f9b) cell_eswt_app_pane_g1_ParamLimits

0xc737,	// (0x00018f9b) cell_eswt_app_pane_g1

0xc766,	// (0x00018fca) cell_eswt_app_pane_g2_ParamLimits

0xc766,	// (0x00018fca) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x0001c4a0) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x0001c4a0) cell_eswt_app_pane_g

0xc78f,	// (0x00018ff3) cell_eswt_app_pane_t1_ParamLimits

0xc78f,	// (0x00018ff3) cell_eswt_app_pane_t1

0xc7c1,	// (0x00019025) grid_highlight_pane_cp70_ParamLimits

0xc7c1,	// (0x00019025) grid_highlight_pane_cp70

0x3e76,	// (0x000106da) set_content_pane_g1

0x5408,	// (0x00011c6c) status_small_volume_pane

0xc7cd,	// (0x00019031) status_small_volume_pane_g1

0xc7d5,	// (0x00019039) volume_small2_pane

0xc7de,	// (0x00019042) volume_small2_pane_g1

0xc7e7,	// (0x0001904b) volume_small2_pane_g2

0xc7f0,	// (0x00019054) volume_small2_pane_g3

0xc7f9,	// (0x0001905d) volume_small2_pane_g4

0xc802,	// (0x00019066) volume_small2_pane_g5

0xc80b,	// (0x0001906f) volume_small2_pane_g6

0xc814,	// (0x00019078) volume_small2_pane_g7

0xc81d,	// (0x00019081) volume_small2_pane_g8

0xc826,	// (0x0001908a) volume_small2_pane_g9

0xc82f,	// (0x00019093) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x0001c4a5) volume_small2_pane_g

0xbf88,	// (0x000187ec) fep_vkb_top_text_pane_g1_ParamLimits

0xbfa3,	// (0x00018807) fep_vkb_top_text_pane_t1_ParamLimits

0xc2b6,	// (0x00018b1a) popup_preview_fixed_window_g3_ParamLimits

0xc2b6,	// (0x00018b1a) popup_preview_fixed_window_g3

0xa8fd,	// (0x00017161) popup_toolbar_trans_pane

0xb138,	// (0x0001799c) aid_height_set_list_ParamLimits

0x7add,	// (0x00014341) aid_size_parent_ParamLimits

0x6644,	// (0x00012ea8) list_highlight_pane_cp2_ParamLimits

0x3e76,	// (0x000106da) set_content_pane_g1_ParamLimits

0xb2af,	// (0x00017b13) list_single_image_pane_ParamLimits

0xb2af,	// (0x00017b13) list_single_image_pane

0xc838,	// (0x0001909c) aid_size_cell_image_ParamLimits

0xc838,	// (0x0001909c) aid_size_cell_image

0xc845,	// (0x000190a9) grid_single_image_pane_ParamLimits

0xc845,	// (0x000190a9) grid_single_image_pane

0x3e76,	// (0x000106da) list_single_image_pane_g1_ParamLimits

0x3e76,	// (0x000106da) list_single_image_pane_g1

0x4405,	// (0x00010c69) list_single_image_pane_g2_ParamLimits

0x4405,	// (0x00010c69) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x0001c4ba) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x0001c4ba) list_single_image_pane_g

0x7c3f,	// (0x000144a3) list_single_image_pane_t1_ParamLimits

0x7c3f,	// (0x000144a3) list_single_image_pane_t1

0xc851,	// (0x000190b5) cell_image_list_pane_ParamLimits

0xc851,	// (0x000190b5) cell_image_list_pane

0xc864,	// (0x000190c8) cell_image_list_pane_g1

0xc86d,	// (0x000190d1) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x0001c4bf) cell_image_list_pane_g

0xc876,	// (0x000190da) aid_size_cell_tb_trans_pane

0x43df,	// (0x00010c43) bg_tb_trans_pane

0xc888,	// (0x000190ec) grid_tb_trans_pane

0x695c,	// (0x000131c0) bg_tb_trans_pane_g1

0x696c,	// (0x000131d0) bg_tb_trans_pane_g2

0x6964,	// (0x000131c8) bg_tb_trans_pane_g3

0x697c,	// (0x000131e0) bg_tb_trans_pane_g4

0x6974,	// (0x000131d8) bg_tb_trans_pane_g5

0x699c,	// (0x00013200) bg_tb_trans_pane_g6

0x6994,	// (0x000131f8) bg_tb_trans_pane_g7

0x6984,	// (0x000131e8) bg_tb_trans_pane_g8

0x698c,	// (0x000131f0) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x0001c4c4) bg_tb_trans_pane_g

0xc89c,	// (0x00019100) cell_toolbar_trans_pane_ParamLimits

0xc89c,	// (0x00019100) cell_toolbar_trans_pane

0xba06,	// (0x0001826a) cell_toolbar_trans_pane_g1

0xb68b,	// (0x00017eef) list_form2_midp_pane_t1

0xb699,	// (0x00017efd) list_form2_midp_pane_t2

0x0001,

0xfb09,	// (0x0001c36d) list_form2_midp_pane_t

0xb6a7,	// (0x00017f0b) scroll_pane_cp51_ParamLimits

0xb860,	// (0x000180c4) form2_midp_wait_pane_g1

0xb869,	// (0x000180cd) form2_midp_wait_pane_g2

0xb872,	// (0x000180d6) form2_midp_wait_pane_g3

0x0002,

0xfb1e,	// (0x0001c382) form2_midp_wait_pane_g

0x36c9,	// (0x0000ff2d) list_highlight_pane_cp21_ParamLimits

0xb892,	// (0x000180f6) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xb8a1,	// (0x00018105) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x972d,	// (0x00015f91) list_single_2graphic_im_pane_ParamLimits

0x972d,	// (0x00015f91) list_single_2graphic_im_pane

0xc8c2,	// (0x00019126) list_single_2graphic_im_pane_g1_ParamLimits

0xc8c2,	// (0x00019126) list_single_2graphic_im_pane_g1

0xc8d3,	// (0x00019137) list_single_2graphic_im_pane_g2_ParamLimits

0xc8d3,	// (0x00019137) list_single_2graphic_im_pane_g2

0xc8df,	// (0x00019143) list_single_2graphic_im_pane_g3_ParamLimits

0xc8df,	// (0x00019143) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x0001c4d7) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x0001c4d7) list_single_2graphic_im_pane_g

0xc8ff,	// (0x00019163) list_single_2graphic_im_pane_t1_ParamLimits

0xc8ff,	// (0x00019163) list_single_2graphic_im_pane_t1

0xc2c2,	// (0x00018b26) list_single_graphic_2heading_pane_fp_ParamLimits

0xc2c2,	// (0x00018b26) list_single_graphic_2heading_pane_fp

0x9a0a,	// (0x0001626e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9a0a,	// (0x0001626e) list_single_graphic_2heading_pane_fp_g1

0xc2d6,	// (0x00018b3a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc2d6,	// (0x00018b3a) list_single_graphic_2heading_pane_fp_g2

0x9239,	// (0x00015a9d) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x9239,	// (0x00015a9d) list_single_graphic_2heading_pane_fp_g3

0x99df,	// (0x00016243) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x99df,	// (0x00016243) list_single_graphic_2heading_pane_fp_g4

0xc2e2,	// (0x00018b46) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc2e2,	// (0x00018b46) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfba1,	// (0x0001c405) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfba1,	// (0x0001c405) list_single_graphic_2heading_pane_fp_g

0x9bd7,	// (0x0001643b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x9bd7,	// (0x0001643b) list_single_graphic_2heading_pane_fp_t1

0x9a42,	// (0x000162a6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9a42,	// (0x000162a6) list_single_graphic_2heading_pane_fp_t2

0x9bed,	// (0x00016451) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9bed,	// (0x00016451) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x0001c4e0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x0001c4e0) list_single_graphic_2heading_pane_fp_t

0xbc29,	// (0x0001848d) fep_hwr_write_pane_g5_ParamLimits

0xbc29,	// (0x0001848d) fep_hwr_write_pane_g5

0xbc35,	// (0x00018499) fep_hwr_write_pane_g6_ParamLimits

0xbc35,	// (0x00018499) fep_hwr_write_pane_g6

0xc5c7,	// (0x00018e2b) eswt_shell_pane_ParamLimits

0x6a72,	// (0x000132d6) bg_popup_window_pane_cp18_ParamLimits

0x79f6,	// (0x0001425a) heading_pane_cp70

0xc6e4,	// (0x00018f48) popup_eswt_tasktip_window_t1_ParamLimits

0xa98a,	// (0x000171ee) aid_touch_tab_arrow_left

0xa996,	// (0x000171fa) aid_touch_tab_arrow_right

0x3611,	// (0x0000fe75) title_pane_g3_ParamLimits

0x3611,	// (0x0000fe75) title_pane_g3

0x42dd,	// (0x00010b41) set_value_pane_g1

0xa8fd,	// (0x00017161) popup_toolbar_trans_pane_ParamLimits

0xc876,	// (0x000190da) aid_size_cell_tb_trans_pane_ParamLimits

0x43df,	// (0x00010c43) bg_tb_trans_pane_ParamLimits

0xc888,	// (0x000190ec) grid_tb_trans_pane_ParamLimits

0x3970,	// (0x000101d4) cont_note_pane_ParamLimits

0x3970,	// (0x000101d4) cont_note_pane

0x3cd0,	// (0x00010534) cont_snote2_single_text_pane_ParamLimits

0x3cd0,	// (0x00010534) cont_snote2_single_text_pane

0x3cd0,	// (0x00010534) cont_snote2_single_graphic_pane_ParamLimits

0x3cd0,	// (0x00010534) cont_snote2_single_graphic_pane

0x6f05,	// (0x00013769) cont_note_wait_pane_ParamLimits

0x6f05,	// (0x00013769) cont_note_wait_pane

0x6f05,	// (0x00013769) cont_note_image_pane_ParamLimits

0x6f05,	// (0x00013769) cont_note_image_pane

0xc930,	// (0x00019194) popup_note2_window_g1_ParamLimits

0xc930,	// (0x00019194) popup_note2_window_g1

0xc961,	// (0x000191c5) popup_note2_window_t1_ParamLimits

0xc961,	// (0x000191c5) popup_note2_window_t1

0xc9a6,	// (0x0001920a) popup_note2_window_t2_ParamLimits

0xc9a6,	// (0x0001920a) popup_note2_window_t2

0xc9eb,	// (0x0001924f) popup_note2_window_t3_ParamLimits

0xc9eb,	// (0x0001924f) popup_note2_window_t3

0xca30,	// (0x00019294) popup_note2_window_t4_ParamLimits

0xca30,	// (0x00019294) popup_note2_window_t4

0x3a20,	// (0x00010284) popup_note2_window_t5_ParamLimits

0x3a20,	// (0x00010284) popup_note2_window_t5

0x0004,

0xfc88,	// (0x0001c4ec) popup_note2_window_t_ParamLimits

0xfc88,	// (0x0001c4ec) popup_note2_window_t

0xca5f,	// (0x000192c3) popup_note2_image_window_g1_ParamLimits

0xca5f,	// (0x000192c3) popup_note2_image_window_g1

0xca6b,	// (0x000192cf) popup_note2_image_window_g2_ParamLimits

0xca6b,	// (0x000192cf) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x0001c4f7) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x0001c4f7) popup_note2_image_window_g

0xca7d,	// (0x000192e1) popup_note2_image_window_t1_ParamLimits

0xca7d,	// (0x000192e1) popup_note2_image_window_t1

0xca95,	// (0x000192f9) popup_note2_image_window_t2_ParamLimits

0xca95,	// (0x000192f9) popup_note2_image_window_t2

0xcaad,	// (0x00019311) popup_note2_image_window_t3_ParamLimits

0xcaad,	// (0x00019311) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x0001c4fc) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x0001c4fc) popup_note2_image_window_t

0x6f13,	// (0x00013777) popup_note2_wait_window_g1_ParamLimits

0x6f13,	// (0x00013777) popup_note2_wait_window_g1

0x6f1f,	// (0x00013783) popup_note2_wait_window_g2_ParamLimits

0x6f1f,	// (0x00013783) popup_note2_wait_window_g2

0x6f2b,	// (0x0001378f) popup_note2_wait_window_g3_ParamLimits

0x6f2b,	// (0x0001378f) popup_note2_wait_window_g3

0x0002,

0xf875,	// (0x0001c0d9) popup_note2_wait_window_g_ParamLimits

0xf875,	// (0x0001c0d9) popup_note2_wait_window_g

0xcac9,	// (0x0001932d) popup_note2_wait_window_t1_ParamLimits

0xcac9,	// (0x0001932d) popup_note2_wait_window_t1

0xcae7,	// (0x0001934b) popup_note2_wait_window_t2_ParamLimits

0xcae7,	// (0x0001934b) popup_note2_wait_window_t2

0xcb05,	// (0x00019369) popup_note2_wait_window_t3_ParamLimits

0xcb05,	// (0x00019369) popup_note2_wait_window_t3

0xcb17,	// (0x0001937b) popup_note2_wait_window_t4_ParamLimits

0xcb17,	// (0x0001937b) popup_note2_wait_window_t4

0x0003,

0xfc9f,	// (0x0001c503) popup_note2_wait_window_t_ParamLimits

0xfc9f,	// (0x0001c503) popup_note2_wait_window_t

0xcb29,	// (0x0001938d) wait_bar2_pane_ParamLimits

0xcb29,	// (0x0001938d) wait_bar2_pane

0xcb41,	// (0x000193a5) popup_snote2_single_text_window_g1_ParamLimits

0xcb41,	// (0x000193a5) popup_snote2_single_text_window_g1

0xcb69,	// (0x000193cd) popup_snote2_single_text_window_t1_ParamLimits

0xcb69,	// (0x000193cd) popup_snote2_single_text_window_t1

0xcbb5,	// (0x00019419) popup_snote2_single_text_window_t2_ParamLimits

0xcbb5,	// (0x00019419) popup_snote2_single_text_window_t2

0xcc01,	// (0x00019465) popup_snote2_single_text_window_t3_ParamLimits

0xcc01,	// (0x00019465) popup_snote2_single_text_window_t3

0xcc42,	// (0x000194a6) popup_snote2_single_text_window_t4_ParamLimits

0xcc42,	// (0x000194a6) popup_snote2_single_text_window_t4

0xcc78,	// (0x000194dc) popup_snote2_single_text_window_t5_ParamLimits

0xcc78,	// (0x000194dc) popup_snote2_single_text_window_t5

0x0004,

0xfca8,	// (0x0001c50c) popup_snote2_single_text_window_t_ParamLimits

0xfca8,	// (0x0001c50c) popup_snote2_single_text_window_t

0xcca3,	// (0x00019507) popup_snote2_single_graphic_window_g1_ParamLimits

0xcca3,	// (0x00019507) popup_snote2_single_graphic_window_g1

0xcccb,	// (0x0001952f) popup_snote2_single_graphic_window_g2_ParamLimits

0xcccb,	// (0x0001952f) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb3,	// (0x0001c517) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb3,	// (0x0001c517) popup_snote2_single_graphic_window_g

0xccf3,	// (0x00019557) popup_snote2_single_graphic_window_t1_ParamLimits

0xccf3,	// (0x00019557) popup_snote2_single_graphic_window_t1

0xcd3f,	// (0x000195a3) popup_snote2_single_graphic_window_t2_ParamLimits

0xcd3f,	// (0x000195a3) popup_snote2_single_graphic_window_t2

0xcc01,	// (0x00019465) popup_snote2_single_graphic_window_t3_ParamLimits

0xcc01,	// (0x00019465) popup_snote2_single_graphic_window_t3

0xcc42,	// (0x000194a6) popup_snote2_single_graphic_window_t4_ParamLimits

0xcc42,	// (0x000194a6) popup_snote2_single_graphic_window_t4

0xcc78,	// (0x000194dc) popup_snote2_single_graphic_window_t5_ParamLimits

0xcc78,	// (0x000194dc) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb8,	// (0x0001c51c) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb8,	// (0x0001c51c) popup_snote2_single_graphic_window_t

0x8510,	// (0x00014d74) clock_nsta_pane_cp2_t1

0x8510,	// (0x00014d74) clock_nsta_pane_cp2_t2

0x0001,

0xfadf,	// (0x0001c343) clock_nsta_pane_cp2_t

0x93e5,	// (0x00015c49) form_field_data_wide_pane_g1_ParamLimits

0x3e76,	// (0x000106da) form_field_data_wide_pane_g2_ParamLimits

0x3e76,	// (0x000106da) form_field_data_wide_pane_g2

0x4405,	// (0x00010c69) form_field_data_wide_pane_g3_ParamLimits

0x4405,	// (0x00010c69) form_field_data_wide_pane_g3

0x0002,

0xf6ba,	// (0x0001bf1e) form_field_data_wide_pane_g_ParamLimits

0xf6ba,	// (0x0001bf1e) form_field_data_wide_pane_g

0xb51d,	// (0x00017d81) grid_touch_3_pane_ParamLimits

0xb51d,	// (0x00017d81) grid_touch_3_pane

0xcd8b,	// (0x000195ef) cell_touch_3_pane_ParamLimits

0xcd8b,	// (0x000195ef) cell_touch_3_pane

0xba06,	// (0x0001826a) cell_touch_3_pane_g1

0xba06,	// (0x0001826a) cell_touch_3_pane_g2

0x0001,

0xfb64,	// (0x0001c3c8) cell_touch_3_pane_g

0x3a52,	// (0x000102b6) cont_query_data_pane

0x3a5a,	// (0x000102be) cont_query_data_pane_cp1

0xcdb8,	// (0x0001961c) button_value_adjust_pane_cp7

0xcdc0,	// (0x00019624) query_popup_pane_cp3

0x4c48,	// (0x000114ac) bg_popup_sub_pane_cp22_ParamLimits

0xa232,	// (0x00016a96) navi_navi_volume_pane_cp2

0xa24a,	// (0x00016aae) popup_side_volume_key_window_g2

0xa256,	// (0x00016aba) popup_side_volume_key_window_g3

0x0002,

0xf74c,	// (0x0001bfb0) popup_side_volume_key_window_g

0xa270,	// (0x00016ad4) popup_side_volume_key_window_t2

0x0001,

0xf753,	// (0x0001bfb7) popup_side_volume_key_window_t

0x4f64,	// (0x000117c8) popup_side_volume_key_window_ParamLimits

0x9080,	// (0x000158e4) list_double_graphic_pane_g4_ParamLimits

0x9080,	// (0x000158e4) list_double_graphic_pane_g4

0xb283,	// (0x00017ae7) list_single_2heading_msg_pane_ParamLimits

0xb283,	// (0x00017ae7) list_single_2heading_msg_pane

0x9c0b,	// (0x0001646f) list_single_2heading_msg_pane_g1_ParamLimits

0x9c0b,	// (0x0001646f) list_single_2heading_msg_pane_g1

0x8ee1,	// (0x00015745) list_single_2heading_msg_pane_g2_ParamLimits

0x8ee1,	// (0x00015745) list_single_2heading_msg_pane_g2

0x9c17,	// (0x0001647b) list_single_2heading_msg_pane_g3_ParamLimits

0x9c17,	// (0x0001647b) list_single_2heading_msg_pane_g3

0x9c23,	// (0x00016487) list_single_2heading_msg_pane_g4_ParamLimits

0x9c23,	// (0x00016487) list_single_2heading_msg_pane_g4

0x0003,

0xfcc3,	// (0x0001c527) list_single_2heading_msg_pane_g_ParamLimits

0xfcc3,	// (0x0001c527) list_single_2heading_msg_pane_g

0x9c3b,	// (0x0001649f) list_single_2heading_msg_pane_t1_ParamLimits

0x9c3b,	// (0x0001649f) list_single_2heading_msg_pane_t1

0x9c63,	// (0x000164c7) list_single_2heading_msg_pane_t2_ParamLimits

0x9c63,	// (0x000164c7) list_single_2heading_msg_pane_t2

0x9c97,	// (0x000164fb) list_single_2heading_msg_pane_t3_ParamLimits

0x9c97,	// (0x000164fb) list_single_2heading_msg_pane_t3

0x9cd0,	// (0x00016534) list_single_2heading_msg_pane_t4_ParamLimits

0x9cd0,	// (0x00016534) list_single_2heading_msg_pane_t4

0x0003,

0xfccc,	// (0x0001c530) list_single_2heading_msg_pane_t_ParamLimits

0xfccc,	// (0x0001c530) list_single_2heading_msg_pane_t

0x361d,	// (0x0000fe81) title_pane_g4_ParamLimits

0x361d,	// (0x0000fe81) title_pane_g4

0xa082,	// (0x000168e6) title_pane_stacon_g3_ParamLimits

0xa082,	// (0x000168e6) title_pane_stacon_g3

0xc8f3,	// (0x00019157) list_single_2graphic_im_pane_g4_ParamLimits

0xc8f3,	// (0x00019157) list_single_2graphic_im_pane_g4

0x780c,	// (0x00014070) popup_side_volume_key_window_cp

0x7d26,	// (0x0001458a) main_idle_act2_pane_t1

0xac73,	// (0x000174d7) toolbar_button_pane_g10

0x3e2d,	// (0x00010691) popup_toolbar_window_cp1

0x8501,	// (0x00014d65) clock_nsta_pane_cp_t1

0x8501,	// (0x00014d65) clock_nsta_pane_cp_t2

0x0001,

0xfada,	// (0x0001c33e) clock_nsta_pane_cp_t

0xa232,	// (0x00016a96) navi_navi_volume_pane_cp2_ParamLimits

0xa23e,	// (0x00016aa2) popup_side_volume_key_window_g1_ParamLimits

0xa24a,	// (0x00016aae) popup_side_volume_key_window_g2_ParamLimits

0xa256,	// (0x00016aba) popup_side_volume_key_window_g3_ParamLimits

0xf74c,	// (0x0001bfb0) popup_side_volume_key_window_g_ParamLimits

0xba6f,	// (0x000182d3) fep_hwr_aid_pane

0xbb10,	// (0x00018374) bg_fep_hwr_top_pane_g4_ParamLimits

0xbb30,	// (0x00018394) fep_hwr_top_pane_g1_ParamLimits

0xbb42,	// (0x000183a6) fep_hwr_top_pane_g2_ParamLimits

0xbb54,	// (0x000183b8) fep_hwr_top_pane_g3_ParamLimits

0xfb2f,	// (0x0001c393) fep_hwr_top_pane_g_ParamLimits

0xbb69,	// (0x000183cd) fep_hwr_top_text_pane_ParamLimits

0x7615,	// (0x00013e79) aid_touch_tab_arrow_arrow_2

0x760c,	// (0x00013e70) aid_touch_tab_arrow_left_2

0xba83,	// (0x000182e7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xbab6,	// (0x0001831a) fep_hwr_prediction_pane

0xbdb8,	// (0x0001861c) fep_vkb_prediction_pane

0xbe9a,	// (0x000186fe) fep_vkb_side_pane_g3_ParamLimits

0xbe9a,	// (0x000186fe) fep_vkb_side_pane_g3

0xbe46,	// (0x000186aa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc354,	// (0x00018bb8) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc361,	// (0x00018bc5) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd9,	// (0x0001c43d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcde5,	// (0x00019649) fep_hwr_prediction_pane_g1

0xcdef,	// (0x00019653) fep_hwr_prediction_pane_g2

0xcdf7,	// (0x0001965b) fep_hwr_prediction_pane_g3

0xcdff,	// (0x00019663) fep_hwr_prediction_pane_g4

0x0003,

0xfcd5,	// (0x0001c539) fep_hwr_prediction_pane_g

0xcde5,	// (0x00019649) fep_vkb_prediction_pane_g1

0xce07,	// (0x0001966b) fep_vkb_prediction_pane_g2

0xce0f,	// (0x00019673) fep_vkb_prediction_pane_g3

0xce17,	// (0x0001967b) fep_vkb_prediction_pane_g4

0x0003,

0xfcde,	// (0x0001c542) fep_vkb_prediction_pane_g

0x7a93,	// (0x000142f7) slider_set_pane_g3

0x7c55,	// (0x000144b9) slider_set_pane_g4

0x7c6d,	// (0x000144d1) slider_set_pane_g5

0x7a93,	// (0x000142f7) slider_set_pane_g6

0xb102,	// (0x00017966) slider_set_pane_g7

0x7b00,	// (0x00014364) slider_form_pane_g3

0x7b09,	// (0x0001436d) slider_form_pane_g4

0x7b11,	// (0x00014375) slider_form_pane_g5

0x7b00,	// (0x00014364) slider_form_pane_g6

0xb268,	// (0x00017acc) slider_form_pane_g7

0x7f81,	// (0x000147e5) slider_set_pane_vc_g3

0x7f8a,	// (0x000147ee) slider_set_pane_vc_g4

0x7f93,	// (0x000147f7) slider_set_pane_vc_g5

0x7f81,	// (0x000147e5) slider_set_pane_vc_g6

0x7f9c,	// (0x00014800) slider_set_pane_vc_g7

0x7f81,	// (0x000147e5) slider_form_pane_vc_g1

0x7f8a,	// (0x000147ee) slider_form_pane_vc_g2

0x7f93,	// (0x000147f7) slider_form_pane_vc_g3

0x7f81,	// (0x000147e5) slider_form_pane_vc_g4

0x82b7,	// (0x00014b1b) slider_form_pane_vc_g5

0x0004,

0xfac0,	// (0x0001c324) slider_form_pane_vc_g

0x34f8,	// (0x0000fd5c) main_idle_act3_pane

0xce1f,	// (0x00019683) ai3_links_pane

0xce28,	// (0x0001968c) popup_ai3_data_window_ParamLimits

0xce28,	// (0x0001968c) popup_ai3_data_window

0x34f8,	// (0x0000fd5c) grid_ai3_links_pane

0xce40,	// (0x000196a4) cell_ai3_links_pane_ParamLimits

0xce40,	// (0x000196a4) cell_ai3_links_pane

0xce54,	// (0x000196b8) bg_popup_sub_pane_cp11

0xce61,	// (0x000196c5) cell_ai3_links_pane_g1

0x34f8,	// (0x0000fd5c) bg_popup_sub_pane_cp12

0xce86,	// (0x000196ea) heading_ai3_data_pane

0xce8e,	// (0x000196f2) list_ai3_gene_pane

0xce9a,	// (0x000196fe) popup_ai3_data_window_g1

0xcea2,	// (0x00019706) heading_ai3_data_pane_g1

0xceaa,	// (0x0001970e) heading_ai3_data_pane_t1

0xceb8,	// (0x0001971c) list_double_ai3_gene_pane_ParamLimits

0xceb8,	// (0x0001971c) list_double_ai3_gene_pane

0xcec5,	// (0x00019729) list_single_ai3_gene_pane_ParamLimits

0xcec5,	// (0x00019729) list_single_ai3_gene_pane

0xb9cb,	// (0x0001822f) list_highlight_pane_cp7_ParamLimits

0xb9cb,	// (0x0001822f) list_highlight_pane_cp7

0xced2,	// (0x00019736) list_single_a13_gene_pane_t1_ParamLimits

0xced2,	// (0x00019736) list_single_a13_gene_pane_t1

0xcee9,	// (0x0001974d) list_single_ai3_gene_pane_g1

0xcef2,	// (0x00019756) list_single_ai3_gene_pane_g2

0x0001,

0xfce7,	// (0x0001c54b) list_single_ai3_gene_pane_g

0xcefa,	// (0x0001975e) list_double_ai3_gene_pane_g1_ParamLimits

0xcefa,	// (0x0001975e) list_double_ai3_gene_pane_g1

0xcf06,	// (0x0001976a) list_double_ai3_gene_pane_t1_ParamLimits

0xcf06,	// (0x0001976a) list_double_ai3_gene_pane_t1

0xcf22,	// (0x00019786) list_double_ai3_gene_pane_t2_ParamLimits

0xcf22,	// (0x00019786) list_double_ai3_gene_pane_t2

0xcf37,	// (0x0001979b) list_double_ai3_gene_pane_t3_ParamLimits

0xcf37,	// (0x0001979b) list_double_ai3_gene_pane_t3

0x0002,

0xfcec,	// (0x0001c550) list_double_ai3_gene_pane_t_ParamLimits

0xfcec,	// (0x0001c550) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c03,	// (0x00016467) aid_size_min_col_2

0xcdd1,	// (0x00019635) aid_size_min_msg_ParamLimits

0xcdd1,	// (0x00019635) aid_size_min_msg

0xbf94,	// (0x000187f8) fep_vkb_top_text_pane_g2_ParamLimits

0xbf94,	// (0x000187f8) fep_vkb_top_text_pane_g2

0x0001,

0xfb5f,	// (0x0001c3c3) fep_vkb_top_text_pane_g_ParamLimits

0xfb5f,	// (0x0001c3c3) fep_vkb_top_text_pane_g

0x34f8,	// (0x0000fd5c) main_hc_apps_shell_pane

0xcf54,	// (0x000197b8) grid_hc_apps_pane_ParamLimits

0xcf54,	// (0x000197b8) grid_hc_apps_pane

0xcf63,	// (0x000197c7) list_hc_apps_pane

0xcf6b,	// (0x000197cf) scroll_pane_cp37_ParamLimits

0xcf6b,	// (0x000197cf) scroll_pane_cp37

0xcf77,	// (0x000197db) cell_hc_apps_pane_ParamLimits

0xcf77,	// (0x000197db) cell_hc_apps_pane

0xd005,	// (0x00019869) cell_hc_apps_pane_g1_ParamLimits

0xd005,	// (0x00019869) cell_hc_apps_pane_g1

0xd032,	// (0x00019896) cell_hc_apps_pane_g2_ParamLimits

0xd032,	// (0x00019896) cell_hc_apps_pane_g2

0xd04e,	// (0x000198b2) cell_hc_apps_pane_g3_ParamLimits

0xd04e,	// (0x000198b2) cell_hc_apps_pane_g3

0x0002,

0xfcf3,	// (0x0001c557) cell_hc_apps_pane_g_ParamLimits

0xfcf3,	// (0x0001c557) cell_hc_apps_pane_g

0xd070,	// (0x000198d4) cell_hc_apps_pane_t1_ParamLimits

0xd070,	// (0x000198d4) cell_hc_apps_pane_t1

0x3970,	// (0x000101d4) grid_highlight_pane_cp10_ParamLimits

0x3970,	// (0x000101d4) grid_highlight_pane_cp10

0xd0ae,	// (0x00019912) list_single_hc_apps_pane_ParamLimits

0xd0ae,	// (0x00019912) list_single_hc_apps_pane

0xd0de,	// (0x00019942) list_single_hc_apps_pane_g1

0x9cf5,	// (0x00016559) list_single_hc_apps_pane_g2

0x0001,

0xfcfa,	// (0x0001c55e) list_single_hc_apps_pane_g

0x9d0e,	// (0x00016572) list_single_hc_apps_pane_g2_copy1

0x9d2a,	// (0x0001658e) list_single_hc_apps_pane_t1

0x36c9,	// (0x0000ff2d) bg_set_opt_pane_cp_ParamLimits

0x397e,	// (0x000101e2) setting_slider_pane_t1_ParamLimits

0x9ffc,	// (0x00016860) setting_slider_pane_t2_ParamLimits

0xa015,	// (0x00016879) setting_slider_pane_t3_ParamLimits

0xf5a2,	// (0x0001be06) setting_slider_pane_t_ParamLimits

0x3994,	// (0x000101f8) slider_set_pane_ParamLimits

0xa4b3,	// (0x00016d17) control_pane_g5_ParamLimits

0xa4b3,	// (0x00016d17) control_pane_g5

0x7a3d,	// (0x000142a1) slider_set_pane_g1_ParamLimits

0xb0f6,	// (0x0001795a) slider_set_pane_g2_ParamLimits

0x7a93,	// (0x000142f7) slider_set_pane_g3_ParamLimits

0x7c55,	// (0x000144b9) slider_set_pane_g4_ParamLimits

0x7c6d,	// (0x000144d1) slider_set_pane_g5_ParamLimits

0x7a93,	// (0x000142f7) slider_set_pane_g6_ParamLimits

0xb102,	// (0x00017966) slider_set_pane_g7_ParamLimits

0xf991,	// (0x0001c1f5) slider_set_pane_g_ParamLimits

0x36c9,	// (0x0000ff2d) navi_icon_text_pane_ParamLimits

0xa964,	// (0x000171c8) aid_fill_nsta_2_ParamLimits

0xa98a,	// (0x000171ee) aid_touch_tab_arrow_left_ParamLimits

0xa996,	// (0x000171fa) aid_touch_tab_arrow_right_ParamLimits

0xaa00,	// (0x00017264) clock_nsta_pane_ParamLimits

0x75ee,	// (0x00013e52) navi_icon_pane_g1_ParamLimits

0x75fa,	// (0x00013e5e) navi_text_pane_t1_ParamLimits

0xb61d,	// (0x00017e81) navi_icon_text_pane_g1_ParamLimits

0xb629,	// (0x00017e8d) navi_icon_text_pane_t1_ParamLimits

0xd0de,	// (0x00019942) list_single_hc_apps_pane_g1_ParamLimits

0x9cf5,	// (0x00016559) list_single_hc_apps_pane_g2_ParamLimits

0xfcfa,	// (0x0001c55e) list_single_hc_apps_pane_g_ParamLimits

0x9d0e,	// (0x00016572) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9d2a,	// (0x0001658e) list_single_hc_apps_pane_t1_ParamLimits

0x9f2e,	// (0x00016792) popup_toolbar2_fixed_window_ParamLimits

0x9f2e,	// (0x00016792) popup_toolbar2_fixed_window

0xa8f5,	// (0x00017159) popup_toolbar2_float_window

0x34f8,	// (0x0000fd5c) bg_popup_sub_pane_cp27

0xd0f7,	// (0x0001995b) grid_toolbar2_float_pane

0x34f8,	// (0x0000fd5c) bg_popup_sub_pane_cp26

0xd0f7,	// (0x0001995b) grid_toolbar2_fixed_pane

0xd0ff,	// (0x00019963) cell_toolbar2_fixed_pane_ParamLimits

0xd0ff,	// (0x00019963) cell_toolbar2_fixed_pane

0xd110,	// (0x00019974) cell_toolbar2_fixed_pane_g1

0xd119,	// (0x0001997d) toolbar2_fixed_button_pane

0x695c,	// (0x000131c0) toolbar2_fixed_button_pane_g1

0x696c,	// (0x000131d0) toolbar2_fixed_button_pane_g2

0x6964,	// (0x000131c8) toolbar2_fixed_button_pane_g3

0x697c,	// (0x000131e0) toolbar2_fixed_button_pane_g4

0x6974,	// (0x000131d8) toolbar2_fixed_button_pane_g5

0x6984,	// (0x000131e8) toolbar2_fixed_button_pane_g6

0x698c,	// (0x000131f0) toolbar2_fixed_button_pane_g7

0x699c,	// (0x00013200) toolbar2_fixed_button_pane_g8

0x6994,	// (0x000131f8) toolbar2_fixed_button_pane_g9

0x0008,

0xf893,	// (0x0001c0f7) toolbar2_fixed_button_pane_g

0xd121,	// (0x00019985) cell_toolbar2_float_pane_ParamLimits

0xd121,	// (0x00019985) cell_toolbar2_float_pane

0xd132,	// (0x00019996) cell_toolbar2_float_pane_g1

0xd119,	// (0x0001997d) toolbar2_fixed_button_pane_cp

0xbd27,	// (0x0001858b) fep_vkb_accented_list_pane_ParamLimits

0xbd27,	// (0x0001858b) fep_vkb_accented_list_pane

0xc179,	// (0x000189dd) bg_popup_fep_shadow_pane_g9

0x516c,	// (0x000119d0) bg_popup_fep_shadow_pane_cp3

0x468d,	// (0x00010ef1) list_accented_list_pane

0xd13b,	// (0x0001999f) list_single_accented_list_pane_ParamLimits

0xd13b,	// (0x0001999f) list_single_accented_list_pane

0x516c,	// (0x000119d0) list_highlight_pane_cp10

0xd14c,	// (0x000199b0) list_single_accented_list_pane_t1

0xa863,	// (0x000170c7) popup_slider_window_ParamLimits

0xa863,	// (0x000170c7) popup_slider_window

0xcdc8,	// (0x0001962c) aid_indentation_list_msg

0xd1ec,	// (0x00019a50) bg_popup_window_pane_cp19

0xd250,	// (0x00019ab4) popup_slider_window_g1

0xd26c,	// (0x00019ad0) popup_slider_window_g2

0xd288,	// (0x00019aec) popup_slider_window_g3

0x0005,

0xfcff,	// (0x0001c563) popup_slider_window_g

0xd2e4,	// (0x00019b48) popup_slider_window_t1

0xd356,	// (0x00019bba) small_volume_slider_vertical_pane

0xba06,	// (0x0001826a) small_volume_slider_vertical_pane_g1

0xba06,	// (0x0001826a) small_volume_slider_vertical_pane_g2

0xd372,	// (0x00019bd6) small_volume_slider_vertical_pane_g3

0x0002,

0xfd11,	// (0x0001c575) small_volume_slider_vertical_pane_g

0x9dac,	// (0x00016610) area_side_right_pane_ParamLimits

0x9dac,	// (0x00016610) area_side_right_pane

0xd37b,	// (0x00019bdf) aid_size_side_button_ParamLimits

0xd37b,	// (0x00019bdf) aid_size_side_button

0xd38f,	// (0x00019bf3) grid_sctrl_middle_pane_ParamLimits

0xd38f,	// (0x00019bf3) grid_sctrl_middle_pane

0xd3ab,	// (0x00019c0f) sctrl_sk_bottom_pane

0xd3bc,	// (0x00019c20) sctrl_sk_top_pane

0xd3ce,	// (0x00019c32) aid_touch_sctrl_top

0x3970,	// (0x000101d4) bg_sctrl_sk_pane_ParamLimits

0x3970,	// (0x000101d4) bg_sctrl_sk_pane

0xd3db,	// (0x00019c3f) sctrl_sk_top_pane_g1

0xd3e8,	// (0x00019c4c) sctrl_sk_top_pane_t1

0xd3ce,	// (0x00019c32) aid_touch_sctrl_bottom

0x3970,	// (0x000101d4) bg_sctrl_sk_pane_cp_ParamLimits

0x3970,	// (0x000101d4) bg_sctrl_sk_pane_cp

0xd403,	// (0x00019c67) sctrl_sk_bottom_pane_g1

0xd3e8,	// (0x00019c4c) sctrl_sk_bottom_pane_t1

0xd40c,	// (0x00019c70) cell_sctrl_middle_pane_ParamLimits

0xd40c,	// (0x00019c70) cell_sctrl_middle_pane

0xd427,	// (0x00019c8b) aid_touch_sctrl_middle_ParamLimits

0xd427,	// (0x00019c8b) aid_touch_sctrl_middle

0x43df,	// (0x00010c43) bg_sctrl_middle_pane_ParamLimits

0x43df,	// (0x00010c43) bg_sctrl_middle_pane

0xbe46,	// (0x000186aa) cell_sctrl_middle_pane_g1_ParamLimits

0xbe46,	// (0x000186aa) cell_sctrl_middle_pane_g1

0xd438,	// (0x00019c9c) cell_sctrl_middle_pane_g2_ParamLimits

0xd438,	// (0x00019c9c) cell_sctrl_middle_pane_g2

0x0001,

0xfd1d,	// (0x0001c581) cell_sctrl_middle_pane_g_ParamLimits

0xfd1d,	// (0x0001c581) cell_sctrl_middle_pane_g

0x695c,	// (0x000131c0) bg_sctrl_middle_pane_g1

0x696c,	// (0x000131d0) bg_sctrl_middle_pane_g2

0x6964,	// (0x000131c8) bg_sctrl_middle_pane_g3

0x697c,	// (0x000131e0) bg_sctrl_middle_pane_g4

0x6974,	// (0x000131d8) bg_sctrl_middle_pane_g5

0x6984,	// (0x000131e8) bg_sctrl_middle_pane_g6

0x698c,	// (0x000131f0) bg_sctrl_middle_pane_g7

0x699c,	// (0x00013200) bg_sctrl_middle_pane_g8

0x0007,

0xfd22,	// (0x0001c586) bg_sctrl_middle_pane_g

0x6994,	// (0x000131f8) bg_sctrl_middle_pane_g8_copy1

0x695c,	// (0x000131c0) bg_sctrl_sk_pane_g1

0x696c,	// (0x000131d0) bg_sctrl_sk_pane_g2

0x6964,	// (0x000131c8) bg_sctrl_sk_pane_g3

0x0008,

0xf893,	// (0x0001c0f7) bg_sctrl_sk_pane_g

0x3df2,	// (0x00010656) aid_size_touch_scroll_bar

0x697c,	// (0x000131e0) bg_sctrl_sk_pane_g4

0x6974,	// (0x000131d8) bg_sctrl_sk_pane_g5

0x6984,	// (0x000131e8) bg_sctrl_sk_pane_g6

0x698c,	// (0x000131f0) bg_sctrl_sk_pane_g7

0x699c,	// (0x00013200) bg_sctrl_sk_pane_g8

0x6994,	// (0x000131f8) bg_sctrl_sk_pane_g9

0x66d2,	// (0x00012f36) popup_fep_china_hwr2_fs_candidate_window

0xa61f,	// (0x00016e83) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa61f,	// (0x00016e83) popup_fep_china_hwr2_fs_control_window

0xbe46,	// (0x000186aa) sctrl_sk_top_pane_g2

0x0001,

0xfd18,	// (0x0001c57c) sctrl_sk_top_pane_g

0xd44e,	// (0x00019cb2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd44e,	// (0x00019cb2) aid_fep_china_hwr2_fs_cell

0xd45f,	// (0x00019cc3) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd45f,	// (0x00019cc3) bg_popup_fep_shadow_pane_cp4

0xd476,	// (0x00019cda) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd476,	// (0x00019cda) bg_popup_fep_shadow_pane_cp5

0xd488,	// (0x00019cec) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd488,	// (0x00019cec) popup_fep_china_hwr2_fs_control_bar_grid

0xd498,	// (0x00019cfc) popup_fep_china_hwr2_fs_control_funtion_grid

0xd4a0,	// (0x00019d04) aid_fep_china_hwr2_fs_candi_cell

0x34f8,	// (0x0000fd5c) bg_popup_fep_shadow_pane_cp6

0xd4aa,	// (0x00019d0e) popup_fep_china_hwr2_fs_candidate_grid

0xd4b2,	// (0x00019d16) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd4b2,	// (0x00019d16) cell_fep_china_hwr2_fs_funtion_grid

0xba06,	// (0x0001826a) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd4ca,	// (0x00019d2e) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd4ca,	// (0x00019d2e) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd4d8,	// (0x00019d3c) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd4d8,	// (0x00019d3c) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd33,	// (0x0001c597) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd33,	// (0x0001c597) cell_fep_china_hwr2_fs_funtion_grid_g

0xd4ee,	// (0x00019d52) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd4ee,	// (0x00019d52) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd503,	// (0x00019d67) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd503,	// (0x00019d67) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd38,	// (0x0001c59c) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd38,	// (0x0001c59c) cell_fep_china_hwr2_fs_funtion_grid_t

0xd51f,	// (0x00019d83) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd527,	// (0x00019d8b) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd52f,	// (0x00019d93) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3d,	// (0x0001c5a1) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd537,	// (0x00019d9b) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd537,	// (0x00019d9b) cell_fep_china_hwr2_fs_candidate_grid

0xd550,	// (0x00019db4) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd558,	// (0x00019dbc) popup_fep_china_hwr2_fs_candidate_grid_g21

0xba06,	// (0x0001826a) cell_fep_china_hwr2_fs_candidate_grid_g1

0xba06,	// (0x0001826a) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb64,	// (0x0001c3c8) cell_fep_china_hwr2_fs_candidate_grid_g

0xd560,	// (0x00019dc4) cell_fep_china_hwr2_fs_candidate_grid_t1

0x67c1,	// (0x00013025) clock_nsta_pane_cp_24_ParamLimits

0x67c1,	// (0x00013025) clock_nsta_pane_cp_24

0x681e,	// (0x00013082) indicator_nsta_pane_cp_24_ParamLimits

0x681e,	// (0x00013082) indicator_nsta_pane_cp_24

0x74f9,	// (0x00013d5d) heading_pane_g1

0x0001,

0xf8f8,	// (0x0001c15c) heading_pane_g

0xb352,	// (0x00017bb6) grid_sct_catagory_button_pane

0x7ac9,	// (0x0001432d) scroll_pane_cp5_ParamLimits

0xb6b3,	// (0x00017f17) button_value_adjust_pane_cp5_ParamLimits

0xb6b3,	// (0x00017f17) button_value_adjust_pane_cp5

0xb790,	// (0x00017ff4) form2_midp_time_pane_ParamLimits

0xd56e,	// (0x00019dd2) cell_sct_catagory_button_pane_ParamLimits

0xd56e,	// (0x00019dd2) cell_sct_catagory_button_pane

0xb9cb,	// (0x0001822f) bg_button_pane_cp01_ParamLimits

0xb9cb,	// (0x0001822f) bg_button_pane_cp01

0xba06,	// (0x0001826a) cell_sct_catagory_button_pane_g1

0xa892,	// (0x000170f6) popup_tb_extension_window

0xd580,	// (0x00019de4) aid_size_cell_ext_ParamLimits

0xd580,	// (0x00019de4) aid_size_cell_ext

0x3970,	// (0x000101d4) bg_tb_trans_pane_cp1_ParamLimits

0x3970,	// (0x000101d4) bg_tb_trans_pane_cp1

0xd5a0,	// (0x00019e04) grid_tb_ext_pane_ParamLimits

0xd5a0,	// (0x00019e04) grid_tb_ext_pane

0xd5c6,	// (0x00019e2a) cell_tb_ext_pane_ParamLimits

0xd5c6,	// (0x00019e2a) cell_tb_ext_pane

0xd5db,	// (0x00019e3f) cell_tb_ext_pane_g1_ParamLimits

0xd5db,	// (0x00019e3f) cell_tb_ext_pane_g1

0xd5f8,	// (0x00019e5c) cell_tb_ext_pane_t1

0x3970,	// (0x000101d4) list_highlight_pane_cp11_ParamLimits

0x3970,	// (0x000101d4) list_highlight_pane_cp11

0x9f4d,	// (0x000167b1) popup_uni_indicator_window_ParamLimits

0x9f4d,	// (0x000167b1) popup_uni_indicator_window

0x43df,	// (0x00010c43) bg_popup_sub_pane_cp14

0xd613,	// (0x00019e77) list_uniindi_pane

0xd61f,	// (0x00019e83) uniindi_top_pane

0x3970,	// (0x000101d4) bg_uniindi_top_pane

0xd63e,	// (0x00019ea2) uniindi_top_pane_g1

0xd654,	// (0x00019eb8) uniindi_top_pane_g2

0x0003,

0xfd44,	// (0x0001c5a8) uniindi_top_pane_g

0xd67e,	// (0x00019ee2) uniindi_top_pane_t1

0xd6a8,	// (0x00019f0c) list_single_uniindi_pane_ParamLimits

0xd6a8,	// (0x00019f0c) list_single_uniindi_pane

0xba06,	// (0x0001826a) bg_uniindi_top_pane_g1

0xd6ba,	// (0x00019f1e) list_single_uniindi_pane_g1

0xd6cd,	// (0x00019f31) list_single_uniindi_pane_t1

0x34f8,	// (0x0000fd5c) control_bg_pane

0xd6f2,	// (0x00019f56) bg_sctrl_sk_pane_cp1

0xd6fb,	// (0x00019f5f) bg_sctrl_sk_pane_cp2

0xd704,	// (0x00019f68) control_bg_pane_g1

0xd70d,	// (0x00019f71) control_bg_pane_g2

0x0001,

0xfd4d,	// (0x0001c5b1) control_bg_pane_g

0x84be,	// (0x00014d22) cell_indicator_nsta_pane_g1_ParamLimits

0xb561,	// (0x00017dc5) cell_indicator_nsta_pane_g2_ParamLimits

0xfad5,	// (0x0001c339) cell_indicator_nsta_pane_g_ParamLimits

0x99cc,	// (0x00016230) form2_midp_time_pane_t1_ParamLimits

0x3cd0,	// (0x00010534) main_idle_act4_pane_ParamLimits

0x3cd0,	// (0x00010534) main_idle_act4_pane

0xa892,	// (0x000170f6) popup_tb_extension_window_ParamLimits

0xd5ba,	// (0x00019e1e) tb_ext_find_pane_ParamLimits

0xd5ba,	// (0x00019e1e) tb_ext_find_pane

0xd716,	// (0x00019f7a) ai_gene_pane_1_cp1

0x52a5,	// (0x00011b09) ai_gene_pane_2_cp1

0xd71e,	// (0x00019f82) list_single_idle_plugin_calendar_pane

0xd727,	// (0x00019f8b) list_single_idle_plugin_notification_pane

0xd730,	// (0x00019f94) list_single_idle_plugin_player_pane

0xd739,	// (0x00019f9d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd739,	// (0x00019f9d) list_single_idle_plugin_shortcut_pane

0xd75b,	// (0x00019fbf) main_idle_act4_pane_t1

0xd76d,	// (0x00019fd1) main_idle_act4_pane_t2

0x0001,

0xfd52,	// (0x0001c5b6) main_idle_act4_pane_t

0xd77f,	// (0x00019fe3) middle_sk_idle_act4_pane_ParamLimits

0xd77f,	// (0x00019fe3) middle_sk_idle_act4_pane

0xd795,	// (0x00019ff9) popup_clock_digital_analogue_window_cp2

0xd7af,	// (0x0001a013) shortcut_wheel_idle_act4_pane_ParamLimits

0xd7af,	// (0x0001a013) shortcut_wheel_idle_act4_pane

0xba06,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g1

0xba06,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g2

0xba06,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g3

0xba06,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g4

0xba06,	// (0x0001826a) shortcut_wheel_idle_act4_pane_g5

0xd7c3,	// (0x0001a027) shortcut_wheel_idle_act4_pane_g6

0xd7cb,	// (0x0001a02f) shortcut_wheel_idle_act4_pane_g7

0xd7d3,	// (0x0001a037) shortcut_wheel_idle_act4_pane_g8

0xd7db,	// (0x0001a03f) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd57,	// (0x0001c5bb) shortcut_wheel_idle_act4_pane_g

0xbe46,	// (0x000186aa) middle_sk_idle_act4_pane_g1_ParamLimits

0xbe46,	// (0x000186aa) middle_sk_idle_act4_pane_g1

0xd83f,	// (0x0001a0a3) middle_sk_idle_act4_pane_g2_ParamLimits

0xd83f,	// (0x0001a0a3) middle_sk_idle_act4_pane_g2

0x0001,

0xfd7a,	// (0x0001c5de) middle_sk_idle_act4_pane_g_ParamLimits

0xfd7a,	// (0x0001c5de) middle_sk_idle_act4_pane_g

0xd84b,	// (0x0001a0af) middle_sk_idle_act4_pane_t1_ParamLimits

0xd84b,	// (0x0001a0af) middle_sk_idle_act4_pane_t1

0xd868,	// (0x0001a0cc) grid_ai_shortcut_pane_ParamLimits

0xd868,	// (0x0001a0cc) grid_ai_shortcut_pane

0xd881,	// (0x0001a0e5) list_highlight_pane_cp16_ParamLimits

0xd881,	// (0x0001a0e5) list_highlight_pane_cp16

0xd88e,	// (0x0001a0f2) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd88e,	// (0x0001a0f2) list_single_idle_plugin_shortcut_pane_g1

0xd89a,	// (0x0001a0fe) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd89a,	// (0x0001a0fe) list_single_idle_plugin_shortcut_pane_g2

0xd8b2,	// (0x0001a116) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd8b2,	// (0x0001a116) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7f,	// (0x0001c5e3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7f,	// (0x0001c5e3) list_single_idle_plugin_shortcut_pane_g

0xd8c5,	// (0x0001a129) cell_ai_shortcut_pane_ParamLimits

0xd8c5,	// (0x0001a129) cell_ai_shortcut_pane

0xd8e6,	// (0x0001a14a) cell_ai_shortcut_pane_g1_ParamLimits

0xd8e6,	// (0x0001a14a) cell_ai_shortcut_pane_g1

0xd716,	// (0x00019f7a) ai_gene_pane_1_cp2

0xd908,	// (0x0001a16c) ai_gene_pane_2_cp2

0xd910,	// (0x0001a174) list_highlight_pane_cp15

0xd919,	// (0x0001a17d) list_single_idle_plugin_calendar_pane_g1

0xd910,	// (0x0001a174) list_highlight_pane_cp17

0xd921,	// (0x0001a185) list_single_idle_plugin_calendar_pane_g1_copy1

0xd929,	// (0x0001a18d) list_single_idle_plugin_player_pane_g1

0x7db2,	// (0x00014616) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd86,	// (0x0001c5ea) list_single_idle_plugin_player_pane_g

0xd931,	// (0x0001a195) list_single_idle_plugin_player_pane_t1

0xd93f,	// (0x0001a1a3) list_single_idle_plugin_player_pane_t2

0xd94d,	// (0x0001a1b1) list_single_idle_plugin_player_pane_t3

0xd95b,	// (0x0001a1bf) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd8b,	// (0x0001c5ef) list_single_idle_plugin_player_pane_t

0xd969,	// (0x0001a1cd) wait_bar_pane_cp15

0xd971,	// (0x0001a1d5) grid_ai_notification_pane

0x7db2,	// (0x00014616) list_single_idle_plugin_notification_pane_g1

0xd97a,	// (0x0001a1de) cell_ai_notification_pane_ParamLimits

0xd97a,	// (0x0001a1de) cell_ai_notification_pane

0xd987,	// (0x0001a1eb) cell_ai_notification_pane_g1

0xd98f,	// (0x0001a1f3) cell_ai_notification_pane_t1

0xd99d,	// (0x0001a201) tb_ext_find_button_pane

0xd9a5,	// (0x0001a209) tb_ext_find_pane_g1

0xd9ad,	// (0x0001a211) tb_ext_find_pane_t1

0x4b9a,	// (0x000113fe) tb_ext_find_button_pane_g1

0xd9bb,	// (0x0001a21f) tb_ext_find_button_pane_g2

0x0001,

0xfd94,	// (0x0001c5f8) tb_ext_find_button_pane_g

0xd75b,	// (0x00019fbf) main_idle_act4_pane_t1_ParamLimits

0xd76d,	// (0x00019fd1) main_idle_act4_pane_t2_ParamLimits

0xfd52,	// (0x0001c5b6) main_idle_act4_pane_t_ParamLimits

0xd795,	// (0x00019ff9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd7a3,	// (0x0001a007) sat_plugin_idle_act4_pane_ParamLimits

0xd7a3,	// (0x0001a007) sat_plugin_idle_act4_pane

0xd9c4,	// (0x0001a228) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd9c4,	// (0x0001a228) sat_plugin_idle_act4_pane_t1

0xd9d7,	// (0x0001a23b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd9d7,	// (0x0001a23b) sat_plugin_idle_act4_pane_t2

0xd9ea,	// (0x0001a24e) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd9ea,	// (0x0001a24e) sat_plugin_idle_act4_pane_t3

0xd9fd,	// (0x0001a261) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd9fd,	// (0x0001a261) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd99,	// (0x0001c5fd) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd99,	// (0x0001c5fd) sat_plugin_idle_act4_pane_t

0x9eae,	// (0x00016712) popup_battery_window_ParamLimits

0x9eae,	// (0x00016712) popup_battery_window

0x3970,	// (0x000101d4) bg_popup_sub_pane_cp25_ParamLimits

0x3970,	// (0x000101d4) bg_popup_sub_pane_cp25

0xda10,	// (0x0001a274) popup_battery_window_g1_ParamLimits

0xda10,	// (0x0001a274) popup_battery_window_g1

0xda1c,	// (0x0001a280) popup_battery_window_t1_ParamLimits

0xda1c,	// (0x0001a280) popup_battery_window_t1

0xda2e,	// (0x0001a292) popup_battery_window_t2_ParamLimits

0xda2e,	// (0x0001a292) popup_battery_window_t2

0x0001,

0xfda2,	// (0x0001c606) popup_battery_window_t_ParamLimits

0xfda2,	// (0x0001c606) popup_battery_window_t

0x5180,	// (0x000119e4) midp_canvas_pane_ParamLimits

0x51ef,	// (0x00011a53) midp_keypad_pane_ParamLimits

0x51ef,	// (0x00011a53) midp_keypad_pane

0x6644,	// (0x00012ea8) main_midp_pane_ParamLimits

0x851f,	// (0x00014d83) signal_pane_g2_cp_ParamLimits

0xda4b,	// (0x0001a2af) aid_size_cell_midp_keypad_ParamLimits

0xda4b,	// (0x0001a2af) aid_size_cell_midp_keypad

0xda65,	// (0x0001a2c9) midp_keyp_game_grid_pane_ParamLimits

0xda65,	// (0x0001a2c9) midp_keyp_game_grid_pane

0xda7f,	// (0x0001a2e3) midp_keyp_rocker_pane_ParamLimits

0xda7f,	// (0x0001a2e3) midp_keyp_rocker_pane

0xdaac,	// (0x0001a310) midp_keyp_sk_left_pane_ParamLimits

0xdaac,	// (0x0001a310) midp_keyp_sk_left_pane

0xdb04,	// (0x0001a368) midp_keyp_sk_right_pane_ParamLimits

0xdb04,	// (0x0001a368) midp_keyp_sk_right_pane

0x34f8,	// (0x0000fd5c) bg_button_pane_cp03

0xdb56,	// (0x0001a3ba) midp_keyp_sk_left_pane_g1

0x34f8,	// (0x0000fd5c) bg_button_pane_cp04

0xdb56,	// (0x0001a3ba) midp_keyp_sk_right_pane_g1

0xba06,	// (0x0001826a) midp_keyp_rocker_pane_g1

0xdb5f,	// (0x0001a3c3) keyp_game_cell_pane_ParamLimits

0xdb5f,	// (0x0001a3c3) keyp_game_cell_pane

0x34f8,	// (0x0000fd5c) bg_button_pane_cp02

0xdb70,	// (0x0001a3d4) keyp_game_cell_pane_g1

0x9ee4,	// (0x00016748) popup_fep_vkb2_window_ParamLimits

0x9ee4,	// (0x00016748) popup_fep_vkb2_window

0xdb87,	// (0x0001a3eb) aid_size_cell_vkb2_ParamLimits

0xdb87,	// (0x0001a3eb) aid_size_cell_vkb2

0xdbdb,	// (0x0001a43f) popup_fep_vkb2_window_g1_ParamLimits

0xdbdb,	// (0x0001a43f) popup_fep_vkb2_window_g1

0xdc23,	// (0x0001a487) vkb2_area_bottom_pane_ParamLimits

0xdc23,	// (0x0001a487) vkb2_area_bottom_pane

0xdc5b,	// (0x0001a4bf) vkb2_area_keypad_pane_ParamLimits

0xdc5b,	// (0x0001a4bf) vkb2_area_keypad_pane

0xdc93,	// (0x0001a4f7) vkb2_area_top_pane_ParamLimits

0xdc93,	// (0x0001a4f7) vkb2_area_top_pane

0xdd03,	// (0x0001a567) vkb2_top_entry_pane_ParamLimits

0xdd03,	// (0x0001a567) vkb2_top_entry_pane

0xdd2d,	// (0x0001a591) vkb2_top_grid_left_pane_ParamLimits

0xdd2d,	// (0x0001a591) vkb2_top_grid_left_pane

0xdd4b,	// (0x0001a5af) vkb2_top_grid_right_pane_ParamLimits

0xdd4b,	// (0x0001a5af) vkb2_top_grid_right_pane

0xdd69,	// (0x0001a5cd) vkb2_cell_keypad_pane_ParamLimits

0xdd69,	// (0x0001a5cd) vkb2_cell_keypad_pane

0xde1a,	// (0x0001a67e) vkb2_area_bottom_grid_pane_ParamLimits

0xde1a,	// (0x0001a67e) vkb2_area_bottom_grid_pane

0xde3e,	// (0x0001a6a2) vkb2_area_bottom_pane_g1_ParamLimits

0xde3e,	// (0x0001a6a2) vkb2_area_bottom_pane_g1

0xde62,	// (0x0001a6c6) vkb2_area_bottom_pane_g2_ParamLimits

0xde62,	// (0x0001a6c6) vkb2_area_bottom_pane_g2

0xde90,	// (0x0001a6f4) vkb2_area_bottom_pane_g3_ParamLimits

0xde90,	// (0x0001a6f4) vkb2_area_bottom_pane_g3

0x0002,

0xfda7,	// (0x0001c60b) vkb2_area_bottom_pane_g_ParamLimits

0xfda7,	// (0x0001c60b) vkb2_area_bottom_pane_g

0xdee1,	// (0x0001a745) vkb2_top_cell_left_pane_ParamLimits

0xdee1,	// (0x0001a745) vkb2_top_cell_left_pane

0xdf09,	// (0x0001a76d) vkb2_top_entry_pane_g1_ParamLimits

0xdf09,	// (0x0001a76d) vkb2_top_entry_pane_g1

0xdf17,	// (0x0001a77b) vkb2_top_entry_pane_t1_ParamLimits

0xdf17,	// (0x0001a77b) vkb2_top_entry_pane_t1

0xdf49,	// (0x0001a7ad) vkb2_top_entry_pane_t2_ParamLimits

0xdf49,	// (0x0001a7ad) vkb2_top_entry_pane_t2

0xdf7b,	// (0x0001a7df) vkb2_top_entry_pane_t3_ParamLimits

0xdf7b,	// (0x0001a7df) vkb2_top_entry_pane_t3

0x0002,

0xfdae,	// (0x0001c612) vkb2_top_entry_pane_t_ParamLimits

0xfdae,	// (0x0001c612) vkb2_top_entry_pane_t

0xdfbe,	// (0x0001a822) vkb2_top_grid_right_pane_g1_ParamLimits

0xdfbe,	// (0x0001a822) vkb2_top_grid_right_pane_g1

0xdfd4,	// (0x0001a838) vkb2_top_grid_right_pane_g2_ParamLimits

0xdfd4,	// (0x0001a838) vkb2_top_grid_right_pane_g2

0xdfec,	// (0x0001a850) vkb2_top_grid_right_pane_g3_ParamLimits

0xdfec,	// (0x0001a850) vkb2_top_grid_right_pane_g3

0xe004,	// (0x0001a868) vkb2_top_grid_right_pane_g4_ParamLimits

0xe004,	// (0x0001a868) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb5,	// (0x0001c619) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb5,	// (0x0001c619) vkb2_top_grid_right_pane_g

0xe01a,	// (0x0001a87e) vkb2_top_cell_left_pane_g1

0xe031,	// (0x0001a895) vkb2_cell_keypad_pane_g1_ParamLimits

0xe031,	// (0x0001a895) vkb2_cell_keypad_pane_g1

0xe03f,	// (0x0001a8a3) vkb2_cell_keypad_pane_t1_ParamLimits

0xe03f,	// (0x0001a8a3) vkb2_cell_keypad_pane_t1

0xe056,	// (0x0001a8ba) vkb2_cell_bottom_grid_pane_ParamLimits

0xe056,	// (0x0001a8ba) vkb2_cell_bottom_grid_pane

0xe08f,	// (0x0001a8f3) vkb2_cell_bottom_grid_pane_g1

0xd7e3,	// (0x0001a047) aid_call2_pane_cp02

0xd7eb,	// (0x0001a04f) aid_call_pane_cp02

0xd7f3,	// (0x0001a057) clock_digital_number_pane_cp10

0xd7fb,	// (0x0001a05f) clock_digital_number_pane_cp11

0xd803,	// (0x0001a067) clock_digital_number_pane_cp12

0xd80b,	// (0x0001a06f) clock_digital_number_pane_cp13

0xd813,	// (0x0001a077) clock_digital_separator_pane_cp10

0x4b9a,	// (0x000113fe) popup_clock_digital_analogue_window_cp2_g1

0x4b9a,	// (0x000113fe) popup_clock_digital_analogue_window_cp2_g2

0xd81b,	// (0x0001a07f) popup_clock_digital_analogue_window_cp2_g3

0x4b9a,	// (0x000113fe) popup_clock_digital_analogue_window_cp2_g4

0xd81b,	// (0x0001a07f) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd6a,	// (0x0001c5ce) popup_clock_digital_analogue_window_cp2_g

0xd823,	// (0x0001a087) popup_clock_digital_analogue_window_cp2_t1

0xd831,	// (0x0001a095) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd75,	// (0x0001c5d9) popup_clock_digital_analogue_window_cp2_t

0xba06,	// (0x0001826a) clock_digital_number_pane_cp10_g1

0xba06,	// (0x0001826a) clock_digital_number_pane_cp10_g2

0x0001,

0xfb64,	// (0x0001c3c8) clock_digital_number_pane_cp10_g

0xba06,	// (0x0001826a) clock_digital_separator_pane_cp10_g1

0xba06,	// (0x0001826a) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb64,	// (0x0001c3c8) clock_digital_separator_pane_cp10_g

0xd660,	// (0x00019ec4) uniindi_top_pane_g3

0xd671,	// (0x00019ed5) uniindi_top_pane_g4

0xddd4,	// (0x0001a638) vkb2_row_keypad_pane_ParamLimits

0xddd4,	// (0x0001a638) vkb2_row_keypad_pane

0xe0ab,	// (0x0001a90f) vkb2_cell_t_keypad_pane_ParamLimits

0xe0ab,	// (0x0001a90f) vkb2_cell_t_keypad_pane

0xe0b8,	// (0x0001a91c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe0b8,	// (0x0001a91c) vkb2_cell_t_keypad_pane_cp08

0xe0c8,	// (0x0001a92c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe0c8,	// (0x0001a92c) vkb2_cell_t_keypad_pane_cp09

0xe0d9,	// (0x0001a93d) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe0d9,	// (0x0001a93d) vkb2_cell_t_keypad_pane_cp01

0xe0e9,	// (0x0001a94d) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe0e9,	// (0x0001a94d) vkb2_cell_t_keypad_pane_cp02

0xe0f9,	// (0x0001a95d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe0f9,	// (0x0001a95d) vkb2_cell_t_keypad_pane_cp03

0xe109,	// (0x0001a96d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe109,	// (0x0001a96d) vkb2_cell_t_keypad_pane_cp04

0xe119,	// (0x0001a97d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe119,	// (0x0001a97d) vkb2_cell_t_keypad_pane_cp05

0xe129,	// (0x0001a98d) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe129,	// (0x0001a98d) vkb2_cell_t_keypad_pane_cp06

0xe139,	// (0x0001a99d) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe139,	// (0x0001a99d) vkb2_cell_t_keypad_pane_cp07

0xe149,	// (0x0001a9ad) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe149,	// (0x0001a9ad) vkb2_cell_t_keypad_pane_cp10

0xbe46,	// (0x000186aa) vkb2_cell_t_keypad_pane_g1

0xe15e,	// (0x0001a9c2) vkb2_cell_t_keypad_pane_t1

0x34f8,	// (0x0000fd5c) popup_grid_graphic2_window

0xe170,	// (0x0001a9d4) aid_size_cell_graphic2_ParamLimits

0xe170,	// (0x0001a9d4) aid_size_cell_graphic2

0xba61,	// (0x000182c5) bg_popup_window_pane_cp21_ParamLimits

0xba61,	// (0x000182c5) bg_popup_window_pane_cp21

0xe19c,	// (0x0001aa00) graphic2_pages_pane_ParamLimits

0xe19c,	// (0x0001aa00) graphic2_pages_pane

0xe1d6,	// (0x0001aa3a) grid_graphic2_control_pane_ParamLimits

0xe1d6,	// (0x0001aa3a) grid_graphic2_control_pane

0xe1fe,	// (0x0001aa62) grid_graphic2_pane_ParamLimits

0xe1fe,	// (0x0001aa62) grid_graphic2_pane

0xe24e,	// (0x0001aab2) cell_graphic2_pane

0x34f8,	// (0x0000fd5c) main_comp_mode_pane

0xce8e,	// (0x000196f2) list_ai3_gene_pane_ParamLimits

0xd1ec,	// (0x00019a50) bg_popup_window_pane_cp19_ParamLimits

0xd1f8,	// (0x00019a5c) bg_touch_area_indi_pane_ParamLimits

0xd1f8,	// (0x00019a5c) bg_touch_area_indi_pane

0xd20e,	// (0x00019a72) bg_touch_area_indi_pane_cp01_ParamLimits

0xd20e,	// (0x00019a72) bg_touch_area_indi_pane_cp01

0xd224,	// (0x00019a88) bg_touch_area_indi_pane_cp02_ParamLimits

0xd224,	// (0x00019a88) bg_touch_area_indi_pane_cp02

0xd23a,	// (0x00019a9e) bg_touch_area_indi_pane_cp03_ParamLimits

0xd23a,	// (0x00019a9e) bg_touch_area_indi_pane_cp03

0xd250,	// (0x00019ab4) popup_slider_window_g1_ParamLimits

0xd26c,	// (0x00019ad0) popup_slider_window_g2_ParamLimits

0xd288,	// (0x00019aec) popup_slider_window_g3_ParamLimits

0xfcff,	// (0x0001c563) popup_slider_window_g_ParamLimits

0xd2e4,	// (0x00019b48) popup_slider_window_t1_ParamLimits

0xd356,	// (0x00019bba) small_volume_slider_vertical_pane_ParamLimits

0xe24e,	// (0x0001aab2) cell_graphic2_pane_ParamLimits

0xe28b,	// (0x0001aaef) bg_button_pane_cp10_ParamLimits

0xe28b,	// (0x0001aaef) bg_button_pane_cp10

0xe29c,	// (0x0001ab00) bg_button_pane_cp11_ParamLimits

0xe29c,	// (0x0001ab00) bg_button_pane_cp11

0xe2ad,	// (0x0001ab11) graphic2_pages_pane_g1_ParamLimits

0xe2ad,	// (0x0001ab11) graphic2_pages_pane_g1

0xe2c0,	// (0x0001ab24) graphic2_pages_pane_g2_ParamLimits

0xe2c0,	// (0x0001ab24) graphic2_pages_pane_g2

0x0001,

0xfdc3,	// (0x0001c627) graphic2_pages_pane_g_ParamLimits

0xfdc3,	// (0x0001c627) graphic2_pages_pane_g

0xe2d6,	// (0x0001ab3a) graphic2_pages_pane_t1_ParamLimits

0xe2d6,	// (0x0001ab3a) graphic2_pages_pane_t1

0xe2ec,	// (0x0001ab50) cell_graphic2_control_pane_ParamLimits

0xe2ec,	// (0x0001ab50) cell_graphic2_control_pane

0xe306,	// (0x0001ab6a) cell_graphic2_pane_g1_ParamLimits

0xe306,	// (0x0001ab6a) cell_graphic2_pane_g1

0xe313,	// (0x0001ab77) cell_graphic2_pane_g2_ParamLimits

0xe313,	// (0x0001ab77) cell_graphic2_pane_g2

0xe320,	// (0x0001ab84) cell_graphic2_pane_g3_ParamLimits

0xe320,	// (0x0001ab84) cell_graphic2_pane_g3

0xe32d,	// (0x0001ab91) cell_graphic2_pane_g4_ParamLimits

0xe32d,	// (0x0001ab91) cell_graphic2_pane_g4

0xe33a,	// (0x0001ab9e) cell_graphic2_pane_g5_ParamLimits

0xe33a,	// (0x0001ab9e) cell_graphic2_pane_g5

0x0004,

0xfdc8,	// (0x0001c62c) cell_graphic2_pane_g_ParamLimits

0xfdc8,	// (0x0001c62c) cell_graphic2_pane_g

0xe355,	// (0x0001abb9) cell_graphic2_pane_t1_ParamLimits

0xe355,	// (0x0001abb9) cell_graphic2_pane_t1

0x6a72,	// (0x000132d6) grid_highlight_pane_cp11_ParamLimits

0x6a72,	// (0x000132d6) grid_highlight_pane_cp11

0x43df,	// (0x00010c43) bg_button_pane_cp05

0xe36b,	// (0x0001abcf) cell_graphic2_control_pane_g1

0xba06,	// (0x0001826a) bg_touch_area_indi_pane_g1

0xe378,	// (0x0001abdc) aid_cmod_rocker_key_size

0xe382,	// (0x0001abe6) aid_cmode_itu_key_size

0xe38c,	// (0x0001abf0) main_cmode_video_pane

0xe394,	// (0x0001abf8) main_comp_mode_itu_pane

0xe39e,	// (0x0001ac02) main_comp_mode_rocker_pane

0xe3a6,	// (0x0001ac0a) cell_cmode_rocker_pane_ParamLimits

0xe3a6,	// (0x0001ac0a) cell_cmode_rocker_pane

0xe3b8,	// (0x0001ac1c) cell_cmode_itu_pane_ParamLimits

0xe3b8,	// (0x0001ac1c) cell_cmode_itu_pane

0x43df,	// (0x00010c43) bg_button_pane_cp06_ParamLimits

0x43df,	// (0x00010c43) bg_button_pane_cp06

0xbe46,	// (0x000186aa) cell_cmode_rocker_pane_g1_ParamLimits

0xbe46,	// (0x000186aa) cell_cmode_rocker_pane_g1

0xd4ca,	// (0x00019d2e) cell_cmode_rocker_pane_g2_ParamLimits

0xd4ca,	// (0x00019d2e) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x0001c637) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x0001c637) cell_cmode_rocker_pane_g

0x34f8,	// (0x0000fd5c) bg_button_pane_cp07

0xe3cd,	// (0x0001ac31) cell_cmode_itu_pane_g1

0xe3d6,	// (0x0001ac3a) cell_cmode_itu_pane_t1

0xe3e4,	// (0x0001ac48) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x0001c63c) cell_cmode_itu_pane_t

0xd6e2,	// (0x00019f46) aid_touch_ctrl_left

0xd6ea,	// (0x00019f4e) aid_touch_ctrl_right

0x34f8,	// (0x0000fd5c) compa_mode_pane

0xe3f2,	// (0x0001ac56) aid_cmod_rocker_key_size_cp

0xe3fc,	// (0x0001ac60) aid_cmode_itu_key_size_cp

0xe406,	// (0x0001ac6a) compa_mode_pane_g1

0xe40e,	// (0x0001ac72) compa_mode_pane_g2

0xe416,	// (0x0001ac7a) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x0001c641) compa_mode_pane_g

0xe41e,	// (0x0001ac82) main_comp_mode_itu_pane_cp

0xe426,	// (0x0001ac8a) main_comp_mode_rocker_pane_cp

0xe42e,	// (0x0001ac92) cell_cmode_itu_pane_cp_ParamLimits

0xe42e,	// (0x0001ac92) cell_cmode_itu_pane_cp

0xe443,	// (0x0001aca7) cell_cmode_rocker_pane_cp_ParamLimits

0xe443,	// (0x0001aca7) cell_cmode_rocker_pane_cp

0x43df,	// (0x00010c43) bg_button_pane_cp06_cp_ParamLimits

0x43df,	// (0x00010c43) bg_button_pane_cp06_cp

0xbe46,	// (0x000186aa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xbe46,	// (0x000186aa) cell_cmode_rocker_pane_g1_cp

0xba06,	// (0x0001826a) cell_cmode_rocker_pane_g2_cp

0x34f8,	// (0x0000fd5c) bg_button_pane_cp07_cp

0xe455,	// (0x0001acb9) cell_cmode_itu_pane_g1_cp

0xe45e,	// (0x0001acc2) cell_cmode_itu_pane_t1_cp

0xe46c,	// (0x0001acd0) cell_cmode_itu_pane_t2_cp

0xb260,	// (0x00017ac4) settings_code_pane_cp2

0x36c9,	// (0x0000ff2d) bg_popup_window_pane_cp3_ParamLimits

0x3b74,	// (0x000103d8) heading_pane_cp3_ParamLimits

0x3b80,	// (0x000103e4) listscroll_popup_graphic_pane_ParamLimits

0xba6f,	// (0x000182d3) fep_hwr_aid_pane_ParamLimits

0xd3ce,	// (0x00019c32) aid_touch_sctrl_top_ParamLimits

0xd3db,	// (0x00019c3f) sctrl_sk_top_pane_g1_ParamLimits

0xbe46,	// (0x000186aa) sctrl_sk_top_pane_g2_ParamLimits

0xfd18,	// (0x0001c57c) sctrl_sk_top_pane_g_ParamLimits

0xd3e8,	// (0x00019c4c) sctrl_sk_top_pane_t1_ParamLimits

0xd3ce,	// (0x00019c32) aid_touch_sctrl_bottom_ParamLimits

0xd3e8,	// (0x00019c4c) sctrl_sk_bottom_pane_t1_ParamLimits

0xd62c,	// (0x00019e90) aid_area_touch_clock

0xdccb,	// (0x0001a52f) aid_vkb2_area_top_pane_cell_ParamLimits

0xdccb,	// (0x0001a52f) aid_vkb2_area_top_pane_cell

0xddf6,	// (0x0001a65a) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xddf6,	// (0x0001a65a) aid_vkb2_area_bottom_pane_cell

0xdf01,	// (0x0001a765) popup_char_count_window

0xe47a,	// (0x0001acde) popup_char_count_window_g1

0xe483,	// (0x0001ace7) popup_char_count_window_g2

0xe48c,	// (0x0001acf0) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x0001c648) popup_char_count_window_g

0xe495,	// (0x0001acf9) popup_char_count_window_t1

0xdbb9,	// (0x0001a41d) popup_fep_char_preview_window_ParamLimits

0xdbb9,	// (0x0001a41d) popup_fep_char_preview_window

0xdce9,	// (0x0001a54d) vkb2_top_candi_pane_ParamLimits

0xdce9,	// (0x0001a54d) vkb2_top_candi_pane

0xe4a3,	// (0x0001ad07) cell_vkb2_top_candi_pane_ParamLimits

0xe4a3,	// (0x0001ad07) cell_vkb2_top_candi_pane

0x6f05,	// (0x00013769) bg_popup_fep_char_preview_window_ParamLimits

0x6f05,	// (0x00013769) bg_popup_fep_char_preview_window

0xe4dc,	// (0x0001ad40) popup_fep_char_preview_window_t1_ParamLimits

0xe4dc,	// (0x0001ad40) popup_fep_char_preview_window_t1

0xe516,	// (0x0001ad7a) bg_popup_fep_char_preview_window_g1

0xe51e,	// (0x0001ad82) bg_popup_fep_char_preview_window_g2

0xe526,	// (0x0001ad8a) bg_popup_fep_char_preview_window_g3

0xe52e,	// (0x0001ad92) bg_popup_fep_char_preview_window_g4

0xe536,	// (0x0001ad9a) bg_popup_fep_char_preview_window_g5

0xe53e,	// (0x0001ada2) bg_popup_fep_char_preview_window_g6

0xe546,	// (0x0001adaa) bg_popup_fep_char_preview_window_g7

0xe54e,	// (0x0001adb2) bg_popup_fep_char_preview_window_g8

0xe556,	// (0x0001adba) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x0001c64f) bg_popup_fep_char_preview_window_g

0xbe46,	// (0x000186aa) cell_vkb2_top_candi_pane_g1_ParamLimits

0xbe46,	// (0x000186aa) cell_vkb2_top_candi_pane_g1

0xc19d,	// (0x00018a01) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc19d,	// (0x00018a01) cell_vkb2_top_candi_pane_g2

0xc1be,	// (0x00018a22) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc1be,	// (0x00018a22) cell_vkb2_top_candi_pane_g3

0xe55e,	// (0x0001adc2) cell_vkb2_top_candi_pane_g4_ParamLimits

0xe55e,	// (0x0001adc2) cell_vkb2_top_candi_pane_g4

0xe57f,	// (0x0001ade3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe57f,	// (0x0001ade3) cell_vkb2_top_candi_pane_g5

0xd4ca,	// (0x00019d2e) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd4ca,	// (0x00019d2e) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x0001c662) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x0001c662) cell_vkb2_top_candi_pane_g

0xe5a0,	// (0x0001ae04) cell_vkb2_top_candi_pane_t1

0x7a7f,	// (0x000142e3) aid_size_touch_slider_mark_ParamLimits

0x7a7f,	// (0x000142e3) aid_size_touch_slider_mark

0xe1ca,	// (0x0001aa2e) grid_graphic2_catg_pane_ParamLimits

0xe1ca,	// (0x0001aa2e) grid_graphic2_catg_pane

0xe22a,	// (0x0001aa8e) popup_grid_graphic2_window_t1_ParamLimits

0xe22a,	// (0x0001aa8e) popup_grid_graphic2_window_t1

0xe23c,	// (0x0001aaa0) popup_grid_graphic2_window_t2_ParamLimits

0xe23c,	// (0x0001aaa0) popup_grid_graphic2_window_t2

0x0001,

0xfdbe,	// (0x0001c622) popup_grid_graphic2_window_t_ParamLimits

0xfdbe,	// (0x0001c622) popup_grid_graphic2_window_t

0x43df,	// (0x00010c43) bg_button_pane_cp05_ParamLimits

0xe36b,	// (0x0001abcf) cell_graphic2_control_pane_g1_ParamLimits

0xe5b6,	// (0x0001ae1a) cell_graphic2_catg_pane_ParamLimits

0xe5b6,	// (0x0001ae1a) cell_graphic2_catg_pane

0x34f8,	// (0x0000fd5c) bg_button_pane_cp12

0xe5c8,	// (0x0001ae2c) cell_graphic2_catg_pane_g1

0xd5f8,	// (0x00019e5c) cell_tb_ext_pane_t1_ParamLimits

0xdf91,	// (0x0001a7f5) vkb2_top_cell_right_narrow_pane_ParamLimits

0xdf91,	// (0x0001a7f5) vkb2_top_cell_right_narrow_pane

0xdfa9,	// (0x0001a80d) vkb2_top_cell_right_wide_pane_ParamLimits

0xdfa9,	// (0x0001a80d) vkb2_top_cell_right_wide_pane

0xba61,	// (0x000182c5) bg_vkb2_func_pane_ParamLimits

0xba61,	// (0x000182c5) bg_vkb2_func_pane

0xe01a,	// (0x0001a87e) vkb2_top_cell_left_pane_g1_ParamLimits

0xba61,	// (0x000182c5) bg_vkb2_fuc_pane_cp03_ParamLimits

0xba61,	// (0x000182c5) bg_vkb2_fuc_pane_cp03

0xe08f,	// (0x0001a8f3) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x696c,	// (0x000131d0) bg_vkb2_func_pane_g1

0x6964,	// (0x000131c8) bg_vkb2_func_pane_g2

0x6974,	// (0x000131d8) bg_vkb2_func_pane_g3

0x697c,	// (0x000131e0) bg_vkb2_func_pane_g4

0x6984,	// (0x000131e8) bg_vkb2_func_pane_g5

0x698c,	// (0x000131f0) bg_vkb2_func_pane_g6

0x699c,	// (0x00013200) bg_vkb2_func_pane_g7

0x6994,	// (0x000131f8) bg_vkb2_func_pane_g8

0x695c,	// (0x000131c0) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x0001c66f) bg_vkb2_func_pane_g

0xba61,	// (0x000182c5) bg_vkb2_fuc_pane_cp01_ParamLimits

0xba61,	// (0x000182c5) bg_vkb2_fuc_pane_cp01

0xe01a,	// (0x0001a87e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe01a,	// (0x0001a87e) vkb2_top_cell_right_wide_pane_g1

0xba61,	// (0x000182c5) bg_vkb2_fuc_pane_cp02_ParamLimits

0xba61,	// (0x000182c5) bg_vkb2_fuc_pane_cp02

0xe08f,	// (0x0001a8f3) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe08f,	// (0x0001a8f3) vkb2_top_cell_right_narrow_pane_g1

0xd17e,	// (0x000199e2) aid_touch_area_decrease_ParamLimits

0xd17e,	// (0x000199e2) aid_touch_area_decrease

0xd196,	// (0x000199fa) aid_touch_area_increase_ParamLimits

0xd196,	// (0x000199fa) aid_touch_area_increase

0xd1a2,	// (0x00019a06) aid_touch_area_mute_ParamLimits

0xd1a2,	// (0x00019a06) aid_touch_area_mute

0xd1be,	// (0x00019a22) aid_touch_area_slider_ParamLimits

0xd1be,	// (0x00019a22) aid_touch_area_slider

0xd2a4,	// (0x00019b08) popup_slider_window_g4_ParamLimits

0xd2a4,	// (0x00019b08) popup_slider_window_g4

0xd2b0,	// (0x00019b14) popup_slider_window_g5_ParamLimits

0xd2b0,	// (0x00019b14) popup_slider_window_g5

0xd2d2,	// (0x00019b36) popup_slider_window_g6_ParamLimits

0xd2d2,	// (0x00019b36) popup_slider_window_g6

0xd310,	// (0x00019b74) popup_slider_window_t2_ParamLimits

0xd310,	// (0x00019b74) popup_slider_window_t2

0x0001,

0xfd0c,	// (0x0001c570) popup_slider_window_t_ParamLimits

0xfd0c,	// (0x0001c570) popup_slider_window_t

0xd328,	// (0x00019b8c) slider_pane_ParamLimits

0xd328,	// (0x00019b8c) slider_pane

0xe5d1,	// (0x0001ae35) slider_pane_g1_ParamLimits

0xe5d1,	// (0x0001ae35) slider_pane_g1

0xe5e5,	// (0x0001ae49) slider_pane_g2_ParamLimits

0xe5e5,	// (0x0001ae49) slider_pane_g2

0xe5fb,	// (0x0001ae5f) slider_pane_g3_ParamLimits

0xe5fb,	// (0x0001ae5f) slider_pane_g3

0x0003,

0xfe1e,	// (0x0001c682) slider_pane_g_ParamLimits

0xfe1e,	// (0x0001c682) slider_pane_g

0xa8e2,	// (0x00017146) popup_tb_float_extension_window_ParamLimits

0xa8e2,	// (0x00017146) popup_tb_float_extension_window

0xe627,	// (0x0001ae8b) aid_size_cell_tb_float_ext

0x34f8,	// (0x0000fd5c) bg_popup_sub_window_cp28

0xe632,	// (0x0001ae96) grid_tb_float_ext_pane

0xe63a,	// (0x0001ae9e) cell_tb_float_ext_pane_ParamLimits

0xe63a,	// (0x0001ae9e) cell_tb_float_ext_pane

0xe652,	// (0x0001aeb6) cell_tb_float_ext_pane_g1

0xe65b,	// (0x0001aebf) grid_highlight_pane_cp12

0xbbda,	// (0x0001843e) cell_last_hwr_side_pane_ParamLimits

0xbbda,	// (0x0001843e) cell_last_hwr_side_pane

0xba06,	// (0x0001826a) cell_last_hwr_side_pane_g1

0xe664,	// (0x0001aec8) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x0001c68b) cell_last_hwr_side_pane_g

0xdebe,	// (0x0001a722) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdebe,	// (0x0001a722) vkb2_area_bottom_space_btn_pane

0xbe46,	// (0x000186aa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe15e,	// (0x0001a9c2) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xe5a0,	// (0x0001ae04) cell_vkb2_top_candi_pane_t1_ParamLimits

0xe66d,	// (0x0001aed1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xe66d,	// (0x0001aed1) vkb2_area_bottom_space_btn_pane_g1

0xe6a3,	// (0x0001af07) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xe6a3,	// (0x0001af07) vkb2_area_bottom_space_btn_pane_g2

0xe6d9,	// (0x0001af3d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xe6d9,	// (0x0001af3d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x0001c690) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x0001c690) vkb2_area_bottom_space_btn_pane_g

0xbb1e,	// (0x00018382) cel_fep_hwr_func_pane_ParamLimits

0xbb1e,	// (0x00018382) cel_fep_hwr_func_pane

0xbb8a,	// (0x000183ee) cell_hwr_side_button_pane_ParamLimits

0xbb8a,	// (0x000183ee) cell_hwr_side_button_pane

0xd62c,	// (0x00019e90) aid_area_touch_clock_ParamLimits

0x3970,	// (0x000101d4) bg_uniindi_top_pane_ParamLimits

0xd63e,	// (0x00019ea2) uniindi_top_pane_g1_ParamLimits

0xd654,	// (0x00019eb8) uniindi_top_pane_g2_ParamLimits

0xd660,	// (0x00019ec4) uniindi_top_pane_g3_ParamLimits

0xd671,	// (0x00019ed5) uniindi_top_pane_g4_ParamLimits

0xfd44,	// (0x0001c5a8) uniindi_top_pane_g_ParamLimits

0xd67e,	// (0x00019ee2) uniindi_top_pane_t1_ParamLimits

0x3970,	// (0x000101d4) bg_vkb2_func_pane_cp01_ParamLimits

0x3970,	// (0x000101d4) bg_vkb2_func_pane_cp01

0xe71f,	// (0x0001af83) cel_fep_hwr_func_pane_g1_ParamLimits

0xe71f,	// (0x0001af83) cel_fep_hwr_func_pane_g1

0x3970,	// (0x000101d4) bg_vkb2_func_pane_cp02_ParamLimits

0x3970,	// (0x000101d4) bg_vkb2_func_pane_cp02

0xe71f,	// (0x0001af83) cell_hwr_side_button_pane_g1_ParamLimits

0xe71f,	// (0x0001af83) cell_hwr_side_button_pane_g1

0x6880,	// (0x000130e4) status_pane_g4_ParamLimits

0x6880,	// (0x000130e4) status_pane_g4

0x6898,	// (0x000130fc) status_pane_t1

0xb7f8,	// (0x0001805c) form2_midp_gauge_slider_cont_pane

0xb800,	// (0x00018064) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb812,	// (0x00018076) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb824,	// (0x00018088) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb17,	// (0x0001c37b) form2_midp_gauge_slider_pane_t_ParamLimits

0xb836,	// (0x0001809a) form2_midp_slider_pane_ParamLimits

0xdb79,	// (0x0001a3dd) aid_size_cell_func_vkb2_ParamLimits

0xdb79,	// (0x0001a3dd) aid_size_cell_func_vkb2

0xe613,	// (0x0001ae77) slider_pane_g4_ParamLimits

0xe613,	// (0x0001ae77) slider_pane_g4

0xe72d,	// (0x0001af91) form2_midp_gauge_slider_pane_t2_cp01

0xe73b,	// (0x0001af9f) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe73b,	// (0x0001af9f) form2_midp_gauge_slider_pane_t3_cp01

0xe758,	// (0x0001afbc) form2_midp_slider_pane_cp01

0x34f8,	// (0x0000fd5c) navi_smil_pane

0xe78c,	// (0x0001aff0) navi_smil_pane_g1

0xe794,	// (0x0001aff8) navi_smil_pane_t1

0xe761,	// (0x0001afc5) form2_midp_slider_pane_g1

0xe76a,	// (0x0001afce) form2_midp_slider_pane_g2

0xe772,	// (0x0001afd6) form2_midp_slider_pane_g3

0xe761,	// (0x0001afc5) form2_midp_slider_pane_g4

0xe77a,	// (0x0001afde) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x0001c699) form2_midp_slider_pane_g

0xe70f,	// (0x0001af73) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xe70f,	// (0x0001af73) vkb2_area_bottom_space_btn_pane_g4

0xaa23,	// (0x00017287) lc0_navi_pane_ParamLimits

0xaa23,	// (0x00017287) lc0_navi_pane

0xaa99,	// (0x000172fd) lc0_stat_indi_pane_ParamLimits

0xaa99,	// (0x000172fd) lc0_stat_indi_pane

0xaab0,	// (0x00017314) ls0_title_pane_ParamLimits

0xaab0,	// (0x00017314) ls0_title_pane

0x43df,	// (0x00010c43) bg_popup_sub_pane_cp14_ParamLimits

0xd613,	// (0x00019e77) list_uniindi_pane_ParamLimits

0xd61f,	// (0x00019e83) uniindi_top_pane_ParamLimits

0xd6ba,	// (0x00019f1e) list_single_uniindi_pane_g1_ParamLimits

0xd6cd,	// (0x00019f31) list_single_uniindi_pane_t1_ParamLimits

0xe7a2,	// (0x0001b006) lc0_stat_clock_pane_ParamLimits

0xe7a2,	// (0x0001b006) lc0_stat_clock_pane

0xe7af,	// (0x0001b013) lc0_stat_indi_pane_g1_ParamLimits

0xe7af,	// (0x0001b013) lc0_stat_indi_pane_g1

0xe7bc,	// (0x0001b020) lc0_stat_indi_pane_g2_ParamLimits

0xe7bc,	// (0x0001b020) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x0001c6a4) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x0001c6a4) lc0_stat_indi_pane_g

0xe7c9,	// (0x0001b02d) lc0_uni_indicator_pane_ParamLimits

0xe7c9,	// (0x0001b02d) lc0_uni_indicator_pane

0xe7d6,	// (0x0001b03a) ls0_title_pane_g1_ParamLimits

0xe7d6,	// (0x0001b03a) ls0_title_pane_g1

0xe7ea,	// (0x0001b04e) ls0_title_pane_t1_ParamLimits

0xe7ea,	// (0x0001b04e) ls0_title_pane_t1

0xe820,	// (0x0001b084) lc0_uni_indicator_pane_g1_ParamLimits

0xe820,	// (0x0001b084) lc0_uni_indicator_pane_g1

0xe832,	// (0x0001b096) lc0_stat_clock_pane_t1

0x34f8,	// (0x0000fd5c) main_ai5_pane

0xe840,	// (0x0001b0a4) ai5_sk_pane_ParamLimits

0xe840,	// (0x0001b0a4) ai5_sk_pane

0xe84d,	// (0x0001b0b1) cell_ai5_widget_pane_ParamLimits

0xe84d,	// (0x0001b0b1) cell_ai5_widget_pane

0xe8a8,	// (0x0001b10c) aid_size_cell_widget_grid

0xe8bc,	// (0x0001b120) bg_ai5_widget_pane_ParamLimits

0xe8bc,	// (0x0001b120) bg_ai5_widget_pane

0xe8e4,	// (0x0001b148) cell_ai5_widget_pane_g2

0xe8f4,	// (0x0001b158) cell_ai5_widget_pane_g3

0xe908,	// (0x0001b16c) cell_ai5_widget_pane_g4

0xe914,	// (0x0001b178) cell_ai5_widget_pane_g5

0xe920,	// (0x0001b184) cell_ai5_widget_pane_g6

0xe92c,	// (0x0001b190) cell_ai5_widget_pane_g7

0xe974,	// (0x0001b1d8) cell_ai5_widget_pane_t1_ParamLimits

0xe974,	// (0x0001b1d8) cell_ai5_widget_pane_t1

0xe991,	// (0x0001b1f5) cell_ai5_widget_pane_t2_ParamLimits

0xe991,	// (0x0001b1f5) cell_ai5_widget_pane_t2

0xe9a9,	// (0x0001b20d) cell_ai5_widget_pane_t3_ParamLimits

0xe9a9,	// (0x0001b20d) cell_ai5_widget_pane_t3

0xe9c1,	// (0x0001b225) cell_ai5_widget_pane_t4_ParamLimits

0xe9c1,	// (0x0001b225) cell_ai5_widget_pane_t4

0xe9db,	// (0x0001b23f) cell_ai5_widget_pane_t5_ParamLimits

0xe9db,	// (0x0001b23f) cell_ai5_widget_pane_t5

0xe9fa,	// (0x0001b25e) cell_ai5_widget_pane_t6_ParamLimits

0xe9fa,	// (0x0001b25e) cell_ai5_widget_pane_t6

0xea0c,	// (0x0001b270) cell_ai5_widget_pane_t7_ParamLimits

0xea0c,	// (0x0001b270) cell_ai5_widget_pane_t7

0xea25,	// (0x0001b289) cell_ai5_widget_pane_t8_ParamLimits

0xea25,	// (0x0001b289) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x0001c6be) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x0001c6be) cell_ai5_widget_pane_t

0xea6d,	// (0x0001b2d1) grid_ai5_widget_pane

0x43df,	// (0x00010c43) highlight_cell_ai5_widget_pane_ParamLimits

0x43df,	// (0x00010c43) highlight_cell_ai5_widget_pane

0xea83,	// (0x0001b2e7) ai5_sk_left_pane

0xea8d,	// (0x0001b2f1) ai5_sk_middle_pane

0xea97,	// (0x0001b2fb) ai5_sk_right_pane

0xeaa1,	// (0x0001b305) bg_ai5_widget_pane_g1_ParamLimits

0xeaa1,	// (0x0001b305) bg_ai5_widget_pane_g1

0xeaad,	// (0x0001b311) bg_ai5_widget_pane_g2_ParamLimits

0xeaad,	// (0x0001b311) bg_ai5_widget_pane_g2

0xeab9,	// (0x0001b31d) bg_ai5_widget_pane_g3_ParamLimits

0xeab9,	// (0x0001b31d) bg_ai5_widget_pane_g3

0xeac5,	// (0x0001b329) bg_ai5_widget_pane_g4_ParamLimits

0xeac5,	// (0x0001b329) bg_ai5_widget_pane_g4

0xead1,	// (0x0001b335) bg_ai5_widget_pane_g5_ParamLimits

0xead1,	// (0x0001b335) bg_ai5_widget_pane_g5

0xeadd,	// (0x0001b341) bg_ai5_widget_pane_g6_ParamLimits

0xeadd,	// (0x0001b341) bg_ai5_widget_pane_g6

0xeae9,	// (0x0001b34d) bg_ai5_widget_pane_g7_ParamLimits

0xeae9,	// (0x0001b34d) bg_ai5_widget_pane_g7

0xeaf5,	// (0x0001b359) bg_ai5_widget_pane_g8_ParamLimits

0xeaf5,	// (0x0001b359) bg_ai5_widget_pane_g8

0xeb01,	// (0x0001b365) bg_ai5_widget_pane_g9_ParamLimits

0xeb01,	// (0x0001b365) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x0001c6d3) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x0001c6d3) bg_ai5_widget_pane_g

0xeb29,	// (0x0001b38d) cell_shortcut_ai5_widget_pane_ParamLimits

0xeb29,	// (0x0001b38d) cell_shortcut_ai5_widget_pane

0x37a9,	// (0x0001000d) bg_cell_shortcut_ai5_widget_pane

0xeb3a,	// (0x0001b39e) cell_grid_ai5_widget_pane_g1

0xeb43,	// (0x0001b3a7) highlight_cell_shortcut_ai5_widget_pane

0x6964,	// (0x000131c8) ai5_sk_left_pane_g1

0xeb4b,	// (0x0001b3af) ai5_sk_left_pane_g2

0xeb53,	// (0x0001b3b7) ai5_sk_left_pane_g3

0xeb5b,	// (0x0001b3bf) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x0001c6e6) ai5_sk_left_pane_g

0xeb63,	// (0x0001b3c7) ai5_sk_left_pane_t1

0x696c,	// (0x000131d0) ai5_sk_right_pane_g1

0xeb71,	// (0x0001b3d5) ai5_sk_right_pane_g2

0xeb79,	// (0x0001b3dd) ai5_sk_right_pane_g3

0xeb81,	// (0x0001b3e5) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x0001c6ef) ai5_sk_right_pane_g

0xeb89,	// (0x0001b3ed) ai5_sk_right_pane_t1

0x696c,	// (0x000131d0) ai5_sk_middle_pane_g1

0x6964,	// (0x000131c8) ai5_sk_middle_pane_g2

0x6984,	// (0x000131e8) ai5_sk_middle_pane_g3

0xeb79,	// (0x0001b3dd) ai5_sk_middle_pane_g4

0xeb53,	// (0x0001b3b7) ai5_sk_middle_pane_g5

0xeb97,	// (0x0001b3fb) ai5_sk_middle_pane_g6

0xeb9f,	// (0x0001b403) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x0001c6f8) ai5_sk_middle_pane_g

0xa970,	// (0x000171d4) aid_touch_area_size_lc0_ParamLimits

0xa970,	// (0x000171d4) aid_touch_area_size_lc0

0xc1df,	// (0x00018a43) cell_hwr_candidate_pane_t1_ParamLimits

0x67b5,	// (0x00013019) aid_touch_navi_pane

0xab82,	// (0x000173e6) status_dt_navi_pane_ParamLimits

0xab82,	// (0x000173e6) status_dt_navi_pane

0xab8f,	// (0x000173f3) status_dt_sta_pane_ParamLimits

0xab8f,	// (0x000173f3) status_dt_sta_pane

0xeba7,	// (0x0001b40b) dt_sta_controll_pane

0xebb4,	// (0x0001b418) dt_sta_indi_pane

0xebc5,	// (0x0001b429) dt_sta_title_pane

0x3970,	// (0x000101d4) bg_dt_sta_indi_pane_ParamLimits

0x3970,	// (0x000101d4) bg_dt_sta_indi_pane

0xebd8,	// (0x0001b43c) dt_sta_battery_pane

0xebe0,	// (0x0001b444) dt_sta_indi_pane_g1

0xebe9,	// (0x0001b44d) dt_sta_indi_pane_g2

0xebf2,	// (0x0001b456) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x0001c707) dt_sta_indi_pane_g

0xebfb,	// (0x0001b45f) dt_sta_signal_pane

0x43df,	// (0x00010c43) bg_dt_sta_title_pane_ParamLimits

0x43df,	// (0x00010c43) bg_dt_sta_title_pane

0xec04,	// (0x0001b468) dt_sta_title_pane_g1

0xec0c,	// (0x0001b470) dt_sta_title_pane_t1_ParamLimits

0xec0c,	// (0x0001b470) dt_sta_title_pane_t1

0x34f8,	// (0x0000fd5c) bg_dt_sta_control_pane

0xec21,	// (0x0001b485) dt_sta_controll_pane_g1

0xec2a,	// (0x0001b48e) bg_dt_sta_title_pane_g1

0xec33,	// (0x0001b497) bg_dt_sta_title_pane_g2

0xec3c,	// (0x0001b4a0) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x0001c70e) bg_dt_sta_title_pane_g

0xba06,	// (0x0001826a) bg_dt_sta_indi_pane_g1

0xec45,	// (0x0001b4a9) dt_sta_signal_pane_g1

0xec4d,	// (0x0001b4b1) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x0001c715) dt_sta_signal_pane_g

0xec55,	// (0x0001b4b9) dt_sta_battery_pane_g1

0xec5e,	// (0x0001b4c2) dt_sta_battery_pane_t1

0xba06,	// (0x0001826a) bg_dt_sta_control_pane_g1

0x4c6a,	// (0x000114ce) fep_china_uni_eep_pane

0x4c72,	// (0x000114d6) fep_china_uni_entry_pane_ParamLimits

0x4c82,	// (0x000114e6) popup_fep_china_uni_window_g1_ParamLimits

0x4c92,	// (0x000114f6) popup_fep_china_uni_window_g2_ParamLimits

0x4c92,	// (0x000114f6) popup_fep_china_uni_window_g2

0x0001,

0xf758,	// (0x0001bfbc) popup_fep_china_uni_window_g_ParamLimits

0xf758,	// (0x0001bfbc) popup_fep_china_uni_window_g

0xec6d,	// (0x0001b4d1) fep_china_uni_eep_pane_g1

0xec75,	// (0x0001b4d9) fep_china_uni_eep_pane_t1

0xe783,	// (0x0001afe7) aid_touch_area_size_smil_player

0x6853,	// (0x000130b7) lc0_clock_pane

0x688c,	// (0x000130f0) status_pane_g5_ParamLimits

0x688c,	// (0x000130f0) status_pane_g5

0xa692,	// (0x00016ef6) popup_keymap_window

0x686c,	// (0x000130d0) status_icon_pane

0xe8f4,	// (0x0001b158) cell_ai5_widget_pane_g3_ParamLimits

0xe908,	// (0x0001b16c) cell_ai5_widget_pane_g4_ParamLimits

0xe914,	// (0x0001b178) cell_ai5_widget_pane_g5_ParamLimits

0xe938,	// (0x0001b19c) cell_ai5_widget_pane_g8_ParamLimits

0xe938,	// (0x0001b19c) cell_ai5_widget_pane_g8

0xe94c,	// (0x0001b1b0) cell_ai5_widget_pane_g9_ParamLimits

0xe94c,	// (0x0001b1b0) cell_ai5_widget_pane_g9

0xe960,	// (0x0001b1c4) cell_ai5_widget_pane_g10_ParamLimits

0xe960,	// (0x0001b1c4) cell_ai5_widget_pane_g10

0xec84,	// (0x0001b4e8) status_icon_pane_g1

0x34f8,	// (0x0000fd5c) bg_popup_sub_pane_cp13

0xec8c,	// (0x0001b4f0) popup_keymap_window_t1

0x544d,	// (0x00011cb1) control_pane_g6_ParamLimits

0x544d,	// (0x00011cb1) control_pane_g6

0x5440,	// (0x00011ca4) control_pane_g7_ParamLimits

0x5440,	// (0x00011ca4) control_pane_g7

0x5433,	// (0x00011c97) control_pane_g8_ParamLimits

0x5433,	// (0x00011c97) control_pane_g8

0xeba7,	// (0x0001b40b) dt_sta_controll_pane_ParamLimits

0xebb4,	// (0x0001b418) dt_sta_indi_pane_ParamLimits

0xebc5,	// (0x0001b429) dt_sta_title_pane_ParamLimits

0x3dfb,	// (0x0001065f) aid_size_touch_scroll_bar_cale

0x9ec2,	// (0x00016726) popup_discreet_window_ParamLimits

0x9ec2,	// (0x00016726) popup_discreet_window

0x9f26,	// (0x0001678a) popup_sk_window

0x6f05,	// (0x00013769) bg_popup_sub_pane_cp28_ParamLimits

0x6f05,	// (0x00013769) bg_popup_sub_pane_cp28

0xec9a,	// (0x0001b4fe) popup_discreet_window_g1_ParamLimits

0xec9a,	// (0x0001b4fe) popup_discreet_window_g1

0xecba,	// (0x0001b51e) popup_discreet_window_t1_ParamLimits

0xecba,	// (0x0001b51e) popup_discreet_window_t1

0xecd8,	// (0x0001b53c) popup_discreet_window_t2_ParamLimits

0xecd8,	// (0x0001b53c) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x0001c71a) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x0001c71a) popup_discreet_window_t

0xed2a,	// (0x0001b58e) popup_sk_window_g1

0xed33,	// (0x0001b597) popup_sk_window_g2

0x0001,

0xfebd,	// (0x0001c721) popup_sk_window_g

0xed3c,	// (0x0001b5a0) popup_sk_window_t1

0xed4a,	// (0x0001b5ae) popup_sk_window_t1_copy1

0xe8e4,	// (0x0001b148) cell_ai5_widget_pane_g2_ParamLimits

0xea37,	// (0x0001b29b) cell_ai5_widget_pane_t9_ParamLimits

0xea37,	// (0x0001b29b) cell_ai5_widget_pane_t9

0x34f8,	// (0x0000fd5c) main_fep_fshwr2_pane

0xed58,	// (0x0001b5bc) aid_fshwr2_btn_pane

0xed60,	// (0x0001b5c4) aid_fshwr2_syb_pane

0xed68,	// (0x0001b5cc) aid_fshwr2_txt_pane

0xed70,	// (0x0001b5d4) fshwr2_func_candi_pane

0xed78,	// (0x0001b5dc) fshwr2_hwr_syb_pane

0xed80,	// (0x0001b5e4) fshwr2_icf_pane

0x34f8,	// (0x0000fd5c) fshwr2_icf_bg_pane

0xed9a,	// (0x0001b5fe) fshwr2_icf_pane_t1_ParamLimits

0xed9a,	// (0x0001b5fe) fshwr2_icf_pane_t1

0xba06,	// (0x0001826a) fshwr2_func_candi_pane_g1

0xedb1,	// (0x0001b615) fshwr2_func_candi_row_pane_ParamLimits

0xedb1,	// (0x0001b615) fshwr2_func_candi_row_pane

0xedc2,	// (0x0001b626) cell_fshwr2_syb_pane_ParamLimits

0xedc2,	// (0x0001b626) cell_fshwr2_syb_pane

0xbe46,	// (0x000186aa) fshwr2_hwr_syb_pane_g1_ParamLimits

0xbe46,	// (0x000186aa) fshwr2_hwr_syb_pane_g1

0x34f8,	// (0x0000fd5c) bg_popup_call_pane_cp01

0xedd9,	// (0x0001b63d) fshwr2_func_candi_cell_pane_ParamLimits

0xedd9,	// (0x0001b63d) fshwr2_func_candi_cell_pane

0xee04,	// (0x0001b668) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee04,	// (0x0001b668) fshwr2_func_candi_cell_bg_pane

0xee1e,	// (0x0001b682) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xee1e,	// (0x0001b682) fshwr2_func_candi_cell_pane_g1

0xee3e,	// (0x0001b6a2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xee3e,	// (0x0001b6a2) fshwr2_func_candi_cell_pane_t1

0x34f8,	// (0x0000fd5c) bg_button_pane_cp08

0x516c,	// (0x000119d0) cell_fshwr2_syb_bg_pane

0xee51,	// (0x0001b6b5) cell_fshwr2_syb_bg_pane_g1

0xee59,	// (0x0001b6bd) cell_fshwr2_syb_bg_pane_t1

0x43df,	// (0x00010c43) main_tmo_pane

0xb065,	// (0x000178c9) uni_indicator_pane_g1_ParamLimits

0xb07a,	// (0x000178de) uni_indicator_pane_g2_ParamLimits

0xb090,	// (0x000178f4) uni_indicator_pane_g3_ParamLimits

0x7891,	// (0x000140f5) uni_indicator_pane_g4_ParamLimits

0x7891,	// (0x000140f5) uni_indicator_pane_g4

0x78a5,	// (0x00014109) uni_indicator_pane_g5_ParamLimits

0x78a5,	// (0x00014109) uni_indicator_pane_g5

0x78b9,	// (0x0001411d) uni_indicator_pane_g6_ParamLimits

0x78b9,	// (0x0001411d) uni_indicator_pane_g6

0xf94e,	// (0x0001c1b2) uni_indicator_pane_g_ParamLimits

0xd162,	// (0x000199c6) popup_tmo_note_window_ParamLimits

0xd162,	// (0x000199c6) popup_tmo_note_window

0x34f8,	// (0x0000fd5c) fshwr2_bg_pane

0xee2f,	// (0x0001b693) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xee2f,	// (0x0001b693) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x0001c726) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x0001c726) fshwr2_func_candi_cell_pane_g

0xba06,	// (0x0001826a) bg_popup_window_pane_cp01

0xee68,	// (0x0001b6cc) bg_popup_window_pane_g1_cp01

0xee71,	// (0x0001b6d5) bg_popup_window_pane_cp22_ParamLimits

0xee71,	// (0x0001b6d5) bg_popup_window_pane_cp22

0xee7f,	// (0x0001b6e3) listscroll_tmo_link_pane_ParamLimits

0xee7f,	// (0x0001b6e3) listscroll_tmo_link_pane

0xeebf,	// (0x0001b723) popup_tmo_note_window_g1_ParamLimits

0xeebf,	// (0x0001b723) popup_tmo_note_window_g1

0xeecc,	// (0x0001b730) tmo_note_info_pane_ParamLimits

0xeecc,	// (0x0001b730) tmo_note_info_pane

0xeee6,	// (0x0001b74a) list_tmo_note_info_pane_g1_ParamLimits

0xeee6,	// (0x0001b74a) list_tmo_note_info_pane_g1

0xeefd,	// (0x0001b761) list_tmo_note_info_pane_g2_ParamLimits

0xeefd,	// (0x0001b761) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x0001c72b) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x0001c72b) list_tmo_note_info_pane_g

0xef19,	// (0x0001b77d) list_tmo_note_info_text_pane_ParamLimits

0xef19,	// (0x0001b77d) list_tmo_note_info_text_pane

0xef9a,	// (0x0001b7fe) list_tmo_link_pane

0xefa7,	// (0x0001b80b) scroll_pane_cp20

0xefb4,	// (0x0001b818) list_single_tmo_link_pane_ParamLimits

0xefb4,	// (0x0001b818) list_single_tmo_link_pane

0xefc4,	// (0x0001b828) list_single_tmo_link_pane_t1

0xefd2,	// (0x0001b836) list_tmo_note_info_text_pane_t1_ParamLimits

0xefd2,	// (0x0001b836) list_tmo_note_info_text_pane_t1

0x4605,	// (0x00010e69) aid_size_touch_scroll_bar_cp01_ParamLimits

0x4605,	// (0x00010e69) aid_size_touch_scroll_bar_cp01

0x9448,	// (0x00015cac) aid_size_touch_slider_marker

0x9f12,	// (0x00016776) popup_settings_window_ParamLimits

0x9f12,	// (0x00016776) popup_settings_window

0x95f8,	// (0x00015e5c) popup_candi_list_indi_window

0x67b5,	// (0x00013019) aid_touch_navi_pane_ParamLimits

0xd3a2,	// (0x00019c06) rs_clock_indi_pane

0xd3ab,	// (0x00019c0f) sctrl_sk_bottom_pane_ParamLimits

0xd3bc,	// (0x00019c20) sctrl_sk_top_pane_ParamLimits

0xdbd3,	// (0x0001a437) popup_fep_tooltip_window

0xe8a8,	// (0x0001b10c) aid_size_cell_widget_grid_ParamLimits

0xe8d8,	// (0x0001b13c) cell_ai5_widget_pane_g1_ParamLimits

0xe8d8,	// (0x0001b13c) cell_ai5_widget_pane_g1

0xe920,	// (0x0001b184) cell_ai5_widget_pane_g6_ParamLimits

0xe92c,	// (0x0001b190) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x0001c6a9) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x0001c6a9) cell_ai5_widget_pane_g

0xea5b,	// (0x0001b2bf) cell_ai5_widget_pane_t10_ParamLimits

0xea5b,	// (0x0001b2bf) cell_ai5_widget_pane_t10

0xea6d,	// (0x0001b2d1) grid_ai5_widget_pane_ParamLimits

0xeb0d,	// (0x0001b371) cell_contacts_ai5_widget_pane_ParamLimits

0xeb0d,	// (0x0001b371) cell_contacts_ai5_widget_pane

0xeced,	// (0x0001b551) popup_discreet_window_t3_ParamLimits

0xeced,	// (0x0001b551) popup_discreet_window_t3

0xed88,	// (0x0001b5ec) popup_fshwr2_char_preview_window_ParamLimits

0xed88,	// (0x0001b5ec) popup_fshwr2_char_preview_window

0xef37,	// (0x0001b79b) tmo_note_info_pane_t1

0xef4c,	// (0x0001b7b0) tmo_note_info_pane_t2

0xef61,	// (0x0001b7c5) tmo_note_info_pane_t3

0xef76,	// (0x0001b7da) tmo_note_info_pane_t4

0xef88,	// (0x0001b7ec) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x0001c730) tmo_note_info_pane_t

0xef9a,	// (0x0001b7fe) list_tmo_link_pane_ParamLimits

0xefa7,	// (0x0001b80b) scroll_pane_cp20_ParamLimits

0x34f8,	// (0x0000fd5c) bg_popup_fep_char_preview_window_cp01

0xefeb,	// (0x0001b84f) popup_fshwr2_char_preview_window_t1

0xeff9,	// (0x0001b85d) popup_candi_list_indi_window_g1

0xf002,	// (0x0001b866) bg_cell_contacts_ai5_widget_pane

0xf00e,	// (0x0001b872) cell_contacts_ai5_widget_pane_g1

0xf022,	// (0x0001b886) cell_contacts_ai5_widget_pane_g2

0xf031,	// (0x0001b895) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x0001c73b) cell_contacts_ai5_widget_pane_g

0xf044,	// (0x0001b8a8) cell_contacts_ai5_widget_pane_t1

0x43df,	// (0x00010c43) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf0bc,	// (0x0001b920) settings_container_pane

0x516c,	// (0x000119d0) listscroll_set_pane_copy1

0x80b5,	// (0x00014919) scroll_pane_cp121_copy1

0xf0c8,	// (0x0001b92c) set_content_pane_copy1

0xf0d0,	// (0x0001b934) aid_height_set_list_copy1_ParamLimits

0xf0d0,	// (0x0001b934) aid_height_set_list_copy1

0x7add,	// (0x00014341) aid_size_parent_copy1_ParamLimits

0x7add,	// (0x00014341) aid_size_parent_copy1

0xf0dc,	// (0x0001b940) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0dc,	// (0x0001b940) button_value_adjust_pane_cp6_copy1

0x6644,	// (0x00012ea8) list_highlight_pane_cp2_copy1_ParamLimits

0x6644,	// (0x00012ea8) list_highlight_pane_cp2_copy1

0xf0f0,	// (0x0001b954) list_set_pane_copy1_ParamLimits

0xf0f0,	// (0x0001b954) list_set_pane_copy1

0xf059,	// (0x0001b8bd) main_pane_set_t1_copy1_ParamLimits

0xf059,	// (0x0001b8bd) main_pane_set_t1_copy1

0xf093,	// (0x0001b8f7) main_pane_set_t2_copy1_ParamLimits

0xf093,	// (0x0001b8f7) main_pane_set_t2_copy1

0xf17e,	// (0x0001b9e2) main_pane_set_t3_copy1

0xf18c,	// (0x0001b9f0) main_pane_set_t4_copy1

0xf0b0,	// (0x0001b914) set_content_pane_g1_copy1_ParamLimits

0xf0b0,	// (0x0001b914) set_content_pane_g1_copy1

0xf19a,	// (0x0001b9fe) setting_code_pane_copy1

0xf1a2,	// (0x0001ba06) setting_slider_graphic_pane_copy1

0xf1a2,	// (0x0001ba06) setting_slider_pane_copy1

0xf1aa,	// (0x0001ba0e) setting_text_pane_copy1

0xf1a2,	// (0x0001ba06) setting_volume_pane_copy1

0xf1b2,	// (0x0001ba16) settings_code_pane_cp2_copy1

0xf1ba,	// (0x0001ba1e) settings_code_pane_cp_copy1_ParamLimits

0xf1ba,	// (0x0001ba1e) settings_code_pane_cp_copy1

0xf1ce,	// (0x0001ba32) volume_set_pane_copy1

0xf1d6,	// (0x0001ba3a) volume_set_pane_g10_copy1

0xf1de,	// (0x0001ba42) volume_set_pane_g1_copy1

0xf1e6,	// (0x0001ba4a) volume_set_pane_g2_copy1

0xf1ee,	// (0x0001ba52) volume_set_pane_g3_copy1

0xf1f6,	// (0x0001ba5a) volume_set_pane_g4_copy1

0xf1fe,	// (0x0001ba62) volume_set_pane_g5_copy1

0xf206,	// (0x0001ba6a) volume_set_pane_g6_copy1

0xf20e,	// (0x0001ba72) volume_set_pane_g7_copy1

0xf216,	// (0x0001ba7a) volume_set_pane_g8_copy1

0xf21e,	// (0x0001ba82) volume_set_pane_g9_copy1

0x36c9,	// (0x0000ff2d) bg_set_opt_pane_cp_copy1_ParamLimits

0x36c9,	// (0x0000ff2d) bg_set_opt_pane_cp_copy1

0x397e,	// (0x000101e2) setting_slider_pane_t1_copy1_ParamLimits

0x397e,	// (0x000101e2) setting_slider_pane_t1_copy1

0xf226,	// (0x0001ba8a) setting_slider_pane_t2_copy1_ParamLimits

0xf226,	// (0x0001ba8a) setting_slider_pane_t2_copy1

0xf23f,	// (0x0001baa3) setting_slider_pane_t3_copy1_ParamLimits

0xf23f,	// (0x0001baa3) setting_slider_pane_t3_copy1

0x3994,	// (0x000101f8) slider_set_pane_copy1_ParamLimits

0x3994,	// (0x000101f8) slider_set_pane_copy1

0x4505,	// (0x00010d69) set_opt_bg_pane_g1_copy2

0x450d,	// (0x00010d71) set_opt_bg_pane_g2_copy2

0xf256,	// (0x0001baba) set_opt_bg_pane_g3_copy2

0x451d,	// (0x00010d81) set_opt_bg_pane_g4_copy2

0x4525,	// (0x00010d89) set_opt_bg_pane_g5_copy2

0x452d,	// (0x00010d91) set_opt_bg_pane_g6_copy2

0xf25e,	// (0x0001bac2) set_opt_bg_pane_g7_copy2

0xf266,	// (0x0001baca) set_opt_bg_pane_g8_copy2

0xf26e,	// (0x0001bad2) set_opt_bg_pane_g9_copy2

0x7a7f,	// (0x000142e3) aid_size_touch_slider_mark_copy1_ParamLimits

0x7a7f,	// (0x000142e3) aid_size_touch_slider_mark_copy1

0x7aef,	// (0x00014353) slider_set_pane_g1_copy1

0x7af8,	// (0x0001435c) slider_set_pane_g2_copy1

0x7a93,	// (0x000142f7) slider_set_pane_g3_copy1_ParamLimits

0x7a93,	// (0x000142f7) slider_set_pane_g3_copy1

0x7c55,	// (0x000144b9) slider_set_pane_g4_copy1_ParamLimits

0x7c55,	// (0x000144b9) slider_set_pane_g4_copy1

0x7c6d,	// (0x000144d1) slider_set_pane_g5_copy1_ParamLimits

0x7c6d,	// (0x000144d1) slider_set_pane_g5_copy1

0x7a93,	// (0x000142f7) slider_set_pane_g6_copy1_ParamLimits

0x7a93,	// (0x000142f7) slider_set_pane_g6_copy1

0xf276,	// (0x0001bada) slider_set_pane_g7_copy1_ParamLimits

0xf276,	// (0x0001bada) slider_set_pane_g7_copy1

0x35e9,	// (0x0000fe4d) bg_set_opt_pane_cp2_copy1

0x370b,	// (0x0000ff6f) setting_slider_graphic_pane_g1_copy1

0xf28c,	// (0x0001baf0) setting_slider_graphic_pane_t1_copy1

0xf29b,	// (0x0001baff) setting_slider_graphic_pane_t2_copy1

0xf2aa,	// (0x0001bb0e) slider_set_pane_cp_copy1

0xf2ba,	// (0x0001bb1e) input_focus_pane_cp1_copy1

0xf2c3,	// (0x0001bb27) list_set_text_pane_copy1

0xf2cb,	// (0x0001bb2f) setting_text_pane_g1_copy1

0x9d58,	// (0x000165bc) set_text_pane_t1_copy1

0xf2ba,	// (0x0001bb1e) input_focus_pane_cp2_copy1

0xf2cb,	// (0x0001bb2f) setting_code_pane_g1_copy1

0xf2d4,	// (0x0001bb38) setting_code_pane_t1_copy1

0xf2e2,	// (0x0001bb46) list_set_graphic_pane_copy1

0x35e9,	// (0x0000fe4d) bg_set_opt_pane_cp4_copy1

0xf2f6,	// (0x0001bb5a) list_set_graphic_pane_g1_copy1_ParamLimits

0xf2f6,	// (0x0001bb5a) list_set_graphic_pane_g1_copy1

0xf302,	// (0x0001bb66) list_set_graphic_pane_g2_copy1

0x4ee7,	// (0x0001174b) list_set_graphic_pane_t1_copy1_ParamLimits

0x4ee7,	// (0x0001174b) list_set_graphic_pane_t1_copy1

0xba06,	// (0x0001826a) rs_clock_indi_pane_g1

0xf30a,	// (0x0001bb6e) rs_clock_indi_pane_t1

0xf318,	// (0x0001bb7c) rs_indi_pane

0xf320,	// (0x0001bb84) rs_indi_pane_g1

0xf329,	// (0x0001bb8d) rs_indi_pane_g2

0xeff9,	// (0x0001b85d) rs_indi_pane_g3

0x0002,

0xfede,	// (0x0001c742) rs_indi_pane_g

0x516c,	// (0x000119d0) bg_popup_preview_window_pane_cp03

0xf332,	// (0x0001bb96) popup_fep_tooltip_window_t1

0xc954,	// (0x000191b8) popup_note2_window_g2_ParamLimits

0xc954,	// (0x000191b8) popup_note2_window_g2

0x0001,

0xfc83,	// (0x0001c4e7) popup_note2_window_g_ParamLimits

0xfc83,	// (0x0001c4e7) popup_note2_window_g

0xce54,	// (0x000196b8) bg_popup_sub_pane_cp11_ParamLimits

0xce61,	// (0x000196c5) cell_ai3_links_pane_g1_ParamLimits

0xce78,	// (0x000196dc) cell_ai3_links_pane_t1

0x9d58,	// (0x000165bc) set_text_pane_t1_copy1_ParamLimits

0x5093,	// (0x000118f7) cell_graphic_popup_pane_cp2_ParamLimits

0x5093,	// (0x000118f7) cell_graphic_popup_pane_cp2

0xf340,	// (0x0001bba4) cell_graphic_popup_pane_g1_cp2

0x3caa,	// (0x0001050e) cell_graphic_popup_pane_g2_cp2

0xf348,	// (0x0001bbac) cell_graphic_popup_pane_g3_cp2

0xf350,	// (0x0001bbb4) cell_graphic_popup_pane_t2_cp2

0x3cbb,	// (0x0001051f) grid_highlight_pane_cp3_cp2

0x48f1,	// (0x00011155) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x43df,	// (0x00010c43) main_tmo_pane_ParamLimits

0xd15a,	// (0x000199be) popup_tmo_big_image_note_window

0xe8c8,	// (0x0001b12c) cell_ai5_widget_list_pane

0xe8d0,	// (0x0001b134) cell_ai5_widget_lrg_icon_pane

0xef37,	// (0x0001b79b) tmo_note_info_pane_t1_ParamLimits

0xef4c,	// (0x0001b7b0) tmo_note_info_pane_t2_ParamLimits

0xef61,	// (0x0001b7c5) tmo_note_info_pane_t3_ParamLimits

0xef76,	// (0x0001b7da) tmo_note_info_pane_t4_ParamLimits

0xef88,	// (0x0001b7ec) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x0001c730) tmo_note_info_pane_t_ParamLimits

0xf0bc,	// (0x0001b920) settings_container_pane_ParamLimits

0xf2b2,	// (0x0001bb16) indicator_popup_pane_cp5

0xf2b2,	// (0x0001bb16) indicator_popup_pane_cp6

0xf2e2,	// (0x0001bb46) list_set_graphic_pane_copy1_ParamLimits

0x34f8,	// (0x0000fd5c) bg_popup_window_pane_cp23

0xf35e,	// (0x0001bbc2) popup_tmo_big_image_note_window_g1

0xf367,	// (0x0001bbcb) popup_tmo_big_image_note_window_t1

0xf375,	// (0x0001bbd9) popup_tmo_big_image_note_window_t2

0xf383,	// (0x0001bbe7) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x0001c749) popup_tmo_big_image_note_window_t

0xf391,	// (0x0001bbf5) cell_ai5_widget_lrg_icon_pane_g1

0xf399,	// (0x0001bbfd) cell_ai5_widget_lrg_icon_pane_t1

0xf3a7,	// (0x0001bc0b) cell_ai5_widget_list_row_pane_ParamLimits

0xf3a7,	// (0x0001bc0b) cell_ai5_widget_list_row_pane

0xf3c0,	// (0x0001bc24) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf3c0,	// (0x0001bc24) cell_ai5_widget_list_row_pane_g1

0xf3cd,	// (0x0001bc31) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf3cd,	// (0x0001bc31) cell_ai5_widget_list_row_pane_t1

0xf3e5,	// (0x0001bc49) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf3e5,	// (0x0001bc49) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfeec,	// (0x0001c750) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x0001c750) cell_ai5_widget_list_row_pane_t

0x34f8,	// (0x0000fd5c) main_fep_vtchi_ss_pane

0xf3f7,	// (0x0001bc5b) popup_fep_char_pre_window

0xf3ff,	// (0x0001bc63) popup_fep_ituss_window

0xf408,	// (0x0001bc6c) popup_fep_vkbss_window

0xf411,	// (0x0001bc75) grid_vkbss_keypad_pane_ParamLimits

0xf411,	// (0x0001bc75) grid_vkbss_keypad_pane

0xf421,	// (0x0001bc85) ituss_keypad_pane

0xf429,	// (0x0001bc8d) aid_vkbss_key_offset_ParamLimits

0xf429,	// (0x0001bc8d) aid_vkbss_key_offset

0xf438,	// (0x0001bc9c) cell_vkbss_key_pane_ParamLimits

0xf438,	// (0x0001bc9c) cell_vkbss_key_pane

0xf44e,	// (0x0001bcb2) bg_cell_vkbss_key_g1_ParamLimits

0xf44e,	// (0x0001bcb2) bg_cell_vkbss_key_g1

0xf45a,	// (0x0001bcbe) cell_vkbss_key_3p_pane_ParamLimits

0xf45a,	// (0x0001bcbe) cell_vkbss_key_3p_pane

0xf46e,	// (0x0001bcd2) cell_vkbss_key_g1_ParamLimits

0xf46e,	// (0x0001bcd2) cell_vkbss_key_g1

0xf482,	// (0x0001bce6) cell_vkbss_key_t1_ParamLimits

0xf482,	// (0x0001bce6) cell_vkbss_key_t1

0xf4ad,	// (0x0001bd11) cell_ituss_key_pane_ParamLimits

0xf4ad,	// (0x0001bd11) cell_ituss_key_pane

0xf4bc,	// (0x0001bd20) bg_cell_ituss_key_g1_ParamLimits

0xf4bc,	// (0x0001bd20) bg_cell_ituss_key_g1

0xf4c8,	// (0x0001bd2c) cell_ituss_key_pane_g1_ParamLimits

0xf4c8,	// (0x0001bd2c) cell_ituss_key_pane_g1

0xf4d4,	// (0x0001bd38) cell_ituss_key_pane_g2_ParamLimits

0xf4d4,	// (0x0001bd38) cell_ituss_key_pane_g2

0x0001,

0xfef1,	// (0x0001c755) cell_ituss_key_pane_g_ParamLimits

0xfef1,	// (0x0001c755) cell_ituss_key_pane_g

0xf4e7,	// (0x0001bd4b) cell_ituss_key_t1_ParamLimits

0xf4e7,	// (0x0001bd4b) cell_ituss_key_t1

0xf505,	// (0x0001bd69) cell_ituss_key_t2_ParamLimits

0xf505,	// (0x0001bd69) cell_ituss_key_t2

0xf524,	// (0x0001bd88) cell_ituss_key_t3_ParamLimits

0xf524,	// (0x0001bd88) cell_ituss_key_t3

0xf543,	// (0x0001bda7) cell_ituss_key_t4_ParamLimits

0xf543,	// (0x0001bda7) cell_ituss_key_t4

0x0003,

0xfef6,	// (0x0001c75a) cell_ituss_key_t_ParamLimits

0xfef6,	// (0x0001c75a) cell_ituss_key_t

0xf562,	// (0x0001bdc6) cell_vkbss_key_3p_pane_g1

0xf56a,	// (0x0001bdce) cell_vkbss_key_3p_pane_g2

0xf572,	// (0x0001bdd6) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeff,	// (0x0001c763) cell_vkbss_key_3p_pane_g

0x34f8,	// (0x0000fd5c) bg_popup_fep_char_preview_window_cp02

0xf57a,	// (0x0001bdde) popup_fep_char_pre_window_t1

0xe89e,	// (0x0001b102) main_ai5_sk_pane

0xf002,	// (0x0001b866) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf00e,	// (0x0001b872) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf022,	// (0x0001b886) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf031,	// (0x0001b895) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x0001c73b) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf044,	// (0x0001b8a8) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x43df,	// (0x00010c43) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf589,	// (0x0001bded) main_ai5_sk_pane_g1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small

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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00015e68 };

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
0x9195,	// (0x0001effd) Screen

0x919f,	// (0x0001f007) application_window_ParamLimits

0x919f,	// (0x0001f007) application_window

0xc32a,	// (0x00022192) screen_g1

0x91d5,	// (0x0001f03d) area_bottom_pane_ParamLimits

0x91d5,	// (0x0001f03d) area_bottom_pane

0x4a22,	// (0x0001a88a) area_top_pane_ParamLimits

0x4a22,	// (0x0001a88a) area_top_pane

0x4aac,	// (0x0001a914) main_pane_ParamLimits

0x4aac,	// (0x0001a914) main_pane

0xc334,	// (0x0002219c) misc_graphics

0xa1ea,	// (0x00020052) battery_pane_ParamLimits

0xa1ea,	// (0x00020052) battery_pane

0xde8a,	// (0x00023cf2) bg_status_flat_pane_g8

0xde92,	// (0x00023cfa) bg_status_flat_pane_g9

0xd5fd,	// (0x00023465) context_pane_ParamLimits

0xd5fd,	// (0x00023465) context_pane

0xa353,	// (0x000201bb) navi_pane_ParamLimits

0xa353,	// (0x000201bb) navi_pane

0xa3c9,	// (0x00020231) signal_pane_ParamLimits

0xa3c9,	// (0x00020231) signal_pane

0x0008,

0xf86d,	// (0x000256d5) bg_status_flat_pane_g

0xa455,	// (0x000202bd) status_pane_g1_ParamLimits

0xa455,	// (0x000202bd) status_pane_g1

0xa46b,	// (0x000202d3) status_pane_g2_ParamLimits

0xa46b,	// (0x000202d3) status_pane_g2

0xd682,	// (0x000234ea) status_pane_g3_ParamLimits

0xd682,	// (0x000234ea) status_pane_g3

0x0004,

0xf7a0,	// (0x00025608) status_pane_g_ParamLimits

0xf7a0,	// (0x00025608) status_pane_g

0xa477,	// (0x000202df) title_pane_ParamLimits

0xa477,	// (0x000202df) title_pane

0xa4d2,	// (0x0002033a) uni_indicator_pane_ParamLimits

0xa4d2,	// (0x0002033a) uni_indicator_pane

0xd542,	// (0x000233aa) bg_list_pane_ParamLimits

0xd542,	// (0x000233aa) bg_list_pane

0x9bb7,	// (0x0001fa1f) find_pane

0x9bbf,	// (0x0001fa27) listscroll_app_pane_ParamLimits

0x9bbf,	// (0x0001fa27) listscroll_app_pane

0xd562,	// (0x000233ca) listscroll_form_pane

0x9bcf,	// (0x0001fa37) listscroll_gen_pane_ParamLimits

0x9bcf,	// (0x0001fa37) listscroll_gen_pane

0x531d,	// (0x0001b185) listscroll_set_pane

0xe5d6,	// (0x0002443e) main_idle_act_pane

0xd3c9,	// (0x00023231) main_idle_trad_pane

0xd3c9,	// (0x00023231) main_list_empty_pane

0xcab4,	// (0x0002291c) main_midp_pane

0xd57c,	// (0x000233e4) main_pane_g1_ParamLimits

0xd57c,	// (0x000233e4) main_pane_g1

0x9be3,	// (0x0001fa4b) popup_ai_message_window_ParamLimits

0x9be3,	// (0x0001fa4b) popup_ai_message_window

0x9c68,	// (0x0001fad0) popup_fep_china_uni_window_ParamLimits

0x9c68,	// (0x0001fad0) popup_fep_china_uni_window

0x53f9,	// (0x0001b261) popup_fep_japan_candidate_window_ParamLimits

0x53f9,	// (0x0001b261) popup_fep_japan_candidate_window

0x5417,	// (0x0001b27f) popup_fep_japan_predictive_window_ParamLimits

0x5417,	// (0x0001b27f) popup_fep_japan_predictive_window

0x9ca6,	// (0x0001fb0e) popup_find_window

0x9cbf,	// (0x0001fb27) popup_grid_graphic_window_ParamLimits

0x9cbf,	// (0x0001fb27) popup_grid_graphic_window

0x5476,	// (0x0001b2de) popup_large_graphic_colour_window

0x9d3b,	// (0x0001fba3) popup_menu_window_ParamLimits

0x9d3b,	// (0x0001fba3) popup_menu_window

0x9e99,	// (0x0001fd01) popup_note_image_window

0x9e61,	// (0x0001fcc9) popup_note_wait_window_ParamLimits

0x9e61,	// (0x0001fcc9) popup_note_wait_window

0x9eaf,	// (0x0001fd17) popup_note_window_ParamLimits

0x9eaf,	// (0x0001fd17) popup_note_window

0x9f43,	// (0x0001fdab) popup_query_code_window_ParamLimits

0x9f43,	// (0x0001fdab) popup_query_code_window

0x5648,	// (0x0001b4b0) popup_query_data_code_window_ParamLimits

0x5648,	// (0x0001b4b0) popup_query_data_code_window

0x9f7b,	// (0x0001fde3) popup_query_data_window_ParamLimits

0x9f7b,	// (0x0001fde3) popup_query_data_window

0x9fef,	// (0x0001fe57) popup_query_sat_info_window_ParamLimits

0x9fef,	// (0x0001fe57) popup_query_sat_info_window

0xa07c,	// (0x0001fee4) popup_snote_single_graphic_window_ParamLimits

0xa07c,	// (0x0001fee4) popup_snote_single_graphic_window

0xa07c,	// (0x0001fee4) popup_snote_single_text_window_ParamLimits

0xa07c,	// (0x0001fee4) popup_snote_single_text_window

0x56b7,	// (0x0001b51f) popup_sub_window_general

0x57c5,	// (0x0001b62d) popup_window_general_ParamLimits

0x57c5,	// (0x0001b62d) popup_window_general

0xd58a,	// (0x000233f2) power_save_pane

0x9a24,	// (0x0001f88c) control_pane_g1_ParamLimits

0x9a24,	// (0x0001f88c) control_pane_g1

0x9a4b,	// (0x0001f8b3) control_pane_g2_ParamLimits

0x9a4b,	// (0x0001f8b3) control_pane_g2

0xd52c,	// (0x00023394) control_pane_g3_ParamLimits

0xd52c,	// (0x00023394) control_pane_g3

0x0007,

0xf788,	// (0x000255f0) control_pane_g_ParamLimits

0xf788,	// (0x000255f0) control_pane_g

0x9aad,	// (0x0001f915) control_pane_t1_ParamLimits

0x9aad,	// (0x0001f915) control_pane_t1

0x9b10,	// (0x0001f978) control_pane_t2_ParamLimits

0x9b10,	// (0x0001f978) control_pane_t2

0x0002,

0xf799,	// (0x00025601) control_pane_t_ParamLimits

0xf799,	// (0x00025601) control_pane_t

0x997f,	// (0x0001f7e7) navi_navi_volume_pane_cp1

0x9987,	// (0x0001f7ef) status_small_icon_pane

0xd4f8,	// (0x00023360) status_small_pane_g1_ParamLimits

0xd4f8,	// (0x00023360) status_small_pane_g1

0x998f,	// (0x0001f7f7) status_small_pane_g2_ParamLimits

0x998f,	// (0x0001f7f7) status_small_pane_g2

0x999b,	// (0x0001f803) status_small_pane_g3_ParamLimits

0x999b,	// (0x0001f803) status_small_pane_g3

0x99a7,	// (0x0001f80f) status_small_pane_g4_ParamLimits

0x99a7,	// (0x0001f80f) status_small_pane_g4

0x99b3,	// (0x0001f81b) status_small_pane_g5_ParamLimits

0x99b3,	// (0x0001f81b) status_small_pane_g5

0x99bf,	// (0x0001f827) status_small_pane_g6_ParamLimits

0x99bf,	// (0x0001f827) status_small_pane_g6

0x0007,

0xf777,	// (0x000255df) status_small_pane_g_ParamLimits

0xf777,	// (0x000255df) status_small_pane_g

0x99ee,	// (0x0001f856) status_small_pane_t1

0x9a10,	// (0x0001f878) status_small_wait_pane_ParamLimits

0x9a10,	// (0x0001f878) status_small_wait_pane

0x9858,	// (0x0001f6c0) aid_levels_signal_ParamLimits

0x9858,	// (0x0001f6c0) aid_levels_signal

0x9870,	// (0x0001f6d8) signal_pane_g1_ParamLimits

0x9870,	// (0x0001f6d8) signal_pane_g1

0x988b,	// (0x0001f6f3) signal_pane_g2_ParamLimits

0x988b,	// (0x0001f6f3) signal_pane_g2

0x0003,

0xf708,	// (0x00025570) signal_pane_g_ParamLimits

0xf708,	// (0x00025570) signal_pane_g

0xced7,	// (0x00022d3f) context_pane_g1

0x937f,	// (0x0001f1e7) title_pane_g1

0x93b6,	// (0x0001f21e) title_pane_t1

0xc34a,	// (0x000221b2) title_pane_t2

0xc370,	// (0x000221d8) title_pane_t3

0x0002,

0xf557,	// (0x000253bf) title_pane_t

0xa4f8,	// (0x00020360) aid_levels_battery_ParamLimits

0xa4f8,	// (0x00020360) aid_levels_battery

0xa514,	// (0x0002037c) battery_pane_g1_ParamLimits

0xa514,	// (0x0002037c) battery_pane_g1

0xa531,	// (0x00020399) battery_pane_g2_ParamLimits

0xa531,	// (0x00020399) battery_pane_g2

0x0001,

0xf7ab,	// (0x00025613) battery_pane_g_ParamLimits

0xf7ab,	// (0x00025613) battery_pane_g

0xa74c,	// (0x000205b4) uni_indicator_pane_g1

0xa762,	// (0x000205ca) uni_indicator_pane_g2

0xa778,	// (0x000205e0) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x0002577d) uni_indicator_pane_g

0xd23d,	// (0x000230a5) navi_icon_pane_ParamLimits

0xd23d,	// (0x000230a5) navi_icon_pane

0xd18c,	// (0x00022ff4) navi_midp_pane

0xd259,	// (0x000230c1) navi_navi_pane

0xd263,	// (0x000230cb) navi_text_pane_ParamLimits

0xd263,	// (0x000230cb) navi_text_pane

0xc32a,	// (0x00022192) status_small_wait_pane_g1

0xc667,	// (0x000224cf) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x00025778) status_small_wait_pane_g

0xe42b,	// (0x00024293) navi_navi_icon_text_pane

0xe433,	// (0x0002429b) navi_navi_pane_g1_ParamLimits

0xe433,	// (0x0002429b) navi_navi_pane_g1

0xe445,	// (0x000242ad) navi_navi_pane_g2_ParamLimits

0xe445,	// (0x000242ad) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x00025746) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x00025746) navi_navi_pane_g

0xe457,	// (0x000242bf) navi_navi_tabs_pane

0xe460,	// (0x000242c8) navi_navi_text_pane

0xe42b,	// (0x00024293) navi_navi_volume_pane

0xe407,	// (0x0002426f) navi_text_pane_t1

0xe3fb,	// (0x00024263) navi_icon_pane_g1

0xe350,	// (0x000241b8) navi_navi_text_pane_t1

0x5a2d,	// (0x0001b895) navi_navi_volume_pane_g1

0x5a35,	// (0x0001b89d) volume_small_pane

0xe32e,	// (0x00024196) navi_navi_icon_text_pane_g1

0xe336,	// (0x0002419e) navi_navi_icon_text_pane_t1

0xd259,	// (0x000230c1) navi_tabs_2_long_pane

0xd259,	// (0x000230c1) navi_tabs_2_pane

0xd259,	// (0x000230c1) navi_tabs_3_long_pane

0xd259,	// (0x000230c1) navi_tabs_3_pane

0xd259,	// (0x000230c1) navi_tabs_4_pane

0x5a0d,	// (0x0001b875) tabs_2_active_pane_ParamLimits

0x5a0d,	// (0x0001b875) tabs_2_active_pane

0x5a1d,	// (0x0001b885) tabs_2_passive_pane_ParamLimits

0x5a1d,	// (0x0001b885) tabs_2_passive_pane

0x59db,	// (0x0001b843) tabs_3_active_pane_ParamLimits

0x59db,	// (0x0001b843) tabs_3_active_pane

0x59eb,	// (0x0001b853) tabs_3_passive_pane_ParamLimits

0x59eb,	// (0x0001b853) tabs_3_passive_pane

0x59fc,	// (0x0001b864) tabs_3_passive_pane_cp_ParamLimits

0x59fc,	// (0x0001b864) tabs_3_passive_pane_cp

0x5997,	// (0x0001b7ff) tabs_4_active_pane_ParamLimits

0x5997,	// (0x0001b7ff) tabs_4_active_pane

0x59a8,	// (0x0001b810) tabs_4_passive_pane_ParamLimits

0x59a8,	// (0x0001b810) tabs_4_passive_pane

0x59b9,	// (0x0001b821) tabs_4_passive_pane_cp_ParamLimits

0x59b9,	// (0x0001b821) tabs_4_passive_pane_cp

0x59ca,	// (0x0001b832) tabs_4_passive_pane_cp2_ParamLimits

0x59ca,	// (0x0001b832) tabs_4_passive_pane_cp2

0x5977,	// (0x0001b7df) tabs_2_long_active_pane_ParamLimits

0x5977,	// (0x0001b7df) tabs_2_long_active_pane

0x5987,	// (0x0001b7ef) tabs_2_long_passive_pane_ParamLimits

0x5987,	// (0x0001b7ef) tabs_2_long_passive_pane

0x5944,	// (0x0001b7ac) tabs_3_long_active_pane_ParamLimits

0x5944,	// (0x0001b7ac) tabs_3_long_active_pane

0x5955,	// (0x0001b7bd) tabs_3_long_passive_pane_ParamLimits

0x5955,	// (0x0001b7bd) tabs_3_long_passive_pane

0x5966,	// (0x0001b7ce) tabs_3_long_passive_pane_cp_ParamLimits

0x5966,	// (0x0001b7ce) tabs_3_long_passive_pane_cp

0x58ea,	// (0x0001b752) volume_small_pane_g1

0x58f3,	// (0x0001b75b) volume_small_pane_g2

0x58fc,	// (0x0001b764) volume_small_pane_g3

0x5905,	// (0x0001b76d) volume_small_pane_g4

0x590e,	// (0x0001b776) volume_small_pane_g5

0x5917,	// (0x0001b77f) volume_small_pane_g6

0x5920,	// (0x0001b788) volume_small_pane_g7

0x5929,	// (0x0001b791) volume_small_pane_g8

0x5932,	// (0x0001b79a) volume_small_pane_g9

0x593b,	// (0x0001b7a3) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x00025712) volume_small_pane_g

0xc382,	// (0x000221ea) bg_active_tab_pane_cp2_ParamLimits

0xc382,	// (0x000221ea) bg_active_tab_pane_cp2

0xc390,	// (0x000221f8) tabs_3_active_pane_g1

0x9442,	// (0x0001f2aa) tabs_3_active_pane_t1

0xc382,	// (0x000221ea) bg_passive_tab_pane_cp2_ParamLimits

0xc382,	// (0x000221ea) bg_passive_tab_pane_cp2

0xc390,	// (0x000221f8) tabs_3_passive_pane_g1

0x9442,	// (0x0001f2aa) tabs_3_passive_pane_t1

0xc382,	// (0x000221ea) bg_active_tab_pane_cp3_ParamLimits

0xc382,	// (0x000221ea) bg_active_tab_pane_cp3

0xc398,	// (0x00022200) tabs_4_active_pane_g1

0x9454,	// (0x0001f2bc) tabs_4_active_pane_t1

0xc382,	// (0x000221ea) bg_passive_tab_pane_cp3_ParamLimits

0xc382,	// (0x000221ea) bg_passive_tab_pane_cp3

0xc398,	// (0x00022200) tabs_4_1_passive_pane_g1

0x9454,	// (0x0001f2bc) tabs_4_1_passive_pane_t1

0xcab4,	// (0x0002291c) list_highlight_pane_cp2

0xa866,	// (0x000206ce) list_set_pane_ParamLimits

0xa866,	// (0x000206ce) list_set_pane

0xa8f4,	// (0x0002075c) main_pane_set_t1_ParamLimits

0xa8f4,	// (0x0002075c) main_pane_set_t1

0xa914,	// (0x0002077c) main_pane_set_t2_ParamLimits

0xa914,	// (0x0002077c) main_pane_set_t2

0xa928,	// (0x00020790) main_pane_set_t3_ParamLimits

0xa928,	// (0x00020790) main_pane_set_t3

0xa93a,	// (0x000207a2) main_pane_set_t4_ParamLimits

0xa93a,	// (0x000207a2) main_pane_set_t4

0x0003,

0xf97a,	// (0x000257e2) main_pane_set_t_ParamLimits

0xf97a,	// (0x000257e2) main_pane_set_t

0xa94c,	// (0x000207b4) setting_code_pane

0xa954,	// (0x000207bc) setting_slider_graphic_pane

0xa954,	// (0x000207bc) setting_slider_pane

0xa954,	// (0x000207bc) setting_text_pane

0xa954,	// (0x000207bc) setting_volume_pane

0x9466,	// (0x0001f2ce) volume_set_pane

0xc3a0,	// (0x00022208) bg_set_opt_pane_cp

0x4cb5,	// (0x0001ab1d) setting_slider_pane_t1

0x946e,	// (0x0001f2d6) setting_slider_pane_t2

0x9487,	// (0x0001f2ef) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x000253c6) setting_slider_pane_t

0x4cfe,	// (0x0001ab66) slider_set_pane

0xc334,	// (0x0002219c) bg_set_opt_pane_cp2

0xc3ae,	// (0x00022216) setting_slider_graphic_pane_g1

0x949e,	// (0x0001f306) setting_slider_graphic_pane_t1

0x94ad,	// (0x0001f315) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x000253cd) setting_slider_graphic_pane_t

0x4d32,	// (0x0001ab9a) slider_set_pane_cp

0xc334,	// (0x0002219c) input_focus_pane_cp1

0xe8c3,	// (0x0002472b) list_set_text_pane

0xc32a,	// (0x00022192) setting_text_pane_g1

0xc334,	// (0x0002219c) input_focus_pane_cp2

0xc32a,	// (0x00022192) setting_code_pane_g1

0xc3b7,	// (0x0002221f) setting_code_pane_t1

0x394d,	// (0x000197b5) set_text_pane_t1_ParamLimits

0x394d,	// (0x000197b5) set_text_pane_t1

0xc9a3,	// (0x0002280b) set_opt_bg_pane_g1

0xc9ab,	// (0x00022813) set_opt_bg_pane_g2

0xa829,	// (0x00020691) set_opt_bg_pane_g3

0xc9bb,	// (0x00022823) set_opt_bg_pane_g4

0xc9c3,	// (0x0002282b) set_opt_bg_pane_g5

0xc9cb,	// (0x00022833) set_opt_bg_pane_g6

0xe8bb,	// (0x00024723) set_opt_bg_pane_g7

0xa831,	// (0x00020699) set_opt_bg_pane_g8

0xa839,	// (0x000206a1) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x000257cf) set_opt_bg_pane_g

0xe8ae,	// (0x00024716) slider_set_pane_g1

0x5aa2,	// (0x0001b90a) slider_set_pane_g2

0x0006,

0xf958,	// (0x000257c0) slider_set_pane_g

0x5a3e,	// (0x0001b8a6) volume_set_pane_g1

0xa79e,	// (0x00020606) volume_set_pane_g2

0xa7a6,	// (0x0002060e) volume_set_pane_g3

0xa7ae,	// (0x00020616) volume_set_pane_g4

0xa7b6,	// (0x0002061e) volume_set_pane_g5

0xa7be,	// (0x00020626) volume_set_pane_g6

0xa7c6,	// (0x0002062e) volume_set_pane_g7

0xa7ce,	// (0x00020636) volume_set_pane_g8

0xa7d6,	// (0x0002063e) volume_set_pane_g9

0xa7de,	// (0x00020646) volume_set_pane_g10

0x0009,

0xf930,	// (0x00025798) volume_set_pane_g

0x94bc,	// (0x0001f324) indicator_pane_ParamLimits

0x94bc,	// (0x0001f324) indicator_pane

0x94e4,	// (0x0001f34c) main_idle_pane_g2_ParamLimits

0x94e4,	// (0x0001f34c) main_idle_pane_g2

0x9512,	// (0x0001f37a) main_pane_idle_g1_ParamLimits

0x9512,	// (0x0001f37a) main_pane_idle_g1

0xc3c5,	// (0x0002222d) popup_clock_digital_analogue_window_ParamLimits

0xc3c5,	// (0x0002222d) popup_clock_digital_analogue_window

0x9537,	// (0x0001f39f) soft_indicator_pane_ParamLimits

0x9537,	// (0x0001f39f) soft_indicator_pane

0x9551,	// (0x0001f3b9) wallpaper_pane_ParamLimits

0x9551,	// (0x0001f3b9) wallpaper_pane

0xc32a,	// (0x00022192) wallpaper_pane_g1

0x9563,	// (0x0001f3cb) indicator_pane_g1_ParamLimits

0x9563,	// (0x0001f3cb) indicator_pane_g1

0xea2b,	// (0x00024893) navi_navi_icon_text_pane_srt_g1

0xc3f3,	// (0x0002225b) soft_indicator_pane_t1

0xc40d,	// (0x00022275) aid_ps_area_pane

0x957c,	// (0x0001f3e4) aid_ps_clock_pane

0xc41e,	// (0x00022286) aid_ps_indicator_pane

0xc42a,	// (0x00022292) indicator_ps_pane_ParamLimits

0xc42a,	// (0x00022292) indicator_ps_pane

0xc439,	// (0x000222a1) power_save_pane_g1_ParamLimits

0xc439,	// (0x000222a1) power_save_pane_g1

0xc445,	// (0x000222ad) power_save_pane_g2_ParamLimits

0xc445,	// (0x000222ad) power_save_pane_g2

0x491e,	// (0x0001a786) aid_navinavi_width_pane

0xc40d,	// (0x00022275) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000253d2) power_save_pane_g_ParamLimits

0xf56a,	// (0x000253d2) power_save_pane_g

0xc453,	// (0x000222bb) power_save_pane_t1_ParamLimits

0xc453,	// (0x000222bb) power_save_pane_t1

0x957c,	// (0x0001f3e4) aid_ps_clock_pane_ParamLimits

0xc41e,	// (0x00022286) aid_ps_indicator_pane_ParamLimits

0xc465,	// (0x000222cd) power_save_pane_t4_ParamLimits

0xc465,	// (0x000222cd) power_save_pane_t4

0x0001,

0xf56f,	// (0x000253d7) power_save_pane_t_ParamLimits

0xf56f,	// (0x000253d7) power_save_pane_t

0xc48f,	// (0x000222f7) power_save_t3_ParamLimits

0xc48f,	// (0x000222f7) power_save_t3

0xc47a,	// (0x000222e2) power_save_t2_ParamLimits

0xc47a,	// (0x000222e2) power_save_t2

0xc4a4,	// (0x0002230c) indicator_ps_pane_g1

0x9588,	// (0x0001f3f0) ai_gene_pane_ParamLimits

0x9588,	// (0x0001f3f0) ai_gene_pane

0x959f,	// (0x0001f407) ai_links_pane_ParamLimits

0x959f,	// (0x0001f407) ai_links_pane

0x95b7,	// (0x0001f41f) indicator_pane_cp1_ParamLimits

0x95b7,	// (0x0001f41f) indicator_pane_cp1

0x95c6,	// (0x0001f42e) main_pane_idle_g1_cp_ParamLimits

0x95c6,	// (0x0001f42e) main_pane_idle_g1_cp

0xc4ad,	// (0x00022315) popup_ai_links_title_window

0x95de,	// (0x0001f446) soft_indicator_pane_cp1_ParamLimits

0x95de,	// (0x0001f446) soft_indicator_pane_cp1

0xe716,	// (0x0002457e) ai_links_pane_g1

0xe71f,	// (0x00024587) grid_ai_links_pane

0xa743,	// (0x000205ab) ai_gene_pane_1

0xe704,	// (0x0002456c) ai_gene_pane_2

0xe70d,	// (0x00024575) list_highlight_pane_cp4

0xa729,	// (0x00020591) cell_ai_link_pane_ParamLimits

0xa729,	// (0x00020591) cell_ai_link_pane

0xe6fc,	// (0x00024564) cell_ai_link_pane_g1

0xc667,	// (0x000224cf) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x00025773) cell_ai_link_pane_g

0xc334,	// (0x0002219c) grid_highlight_cp2

0xc334,	// (0x0002219c) bg_popup_sub_pane_cp1

0xc4c4,	// (0x0002232c) popup_ai_links_title_window_t1

0xe64e,	// (0x000244b6) ai_gene_pane_1_g1_ParamLimits

0xe64e,	// (0x000244b6) ai_gene_pane_1_g1

0xe65a,	// (0x000244c2) ai_gene_pane_1_g2_ParamLimits

0xe65a,	// (0x000244c2) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x00025769) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x00025769) ai_gene_pane_1_g

0xe667,	// (0x000244cf) ai_gene_pane_1_t1_ParamLimits

0xe667,	// (0x000244cf) ai_gene_pane_1_t1

0xe69b,	// (0x00024503) grid_ai_soft_ind_pane

0xe639,	// (0x000244a1) ai_gene_pane_2_t1_ParamLimits

0xe639,	// (0x000244a1) ai_gene_pane_2_t1

0x95f2,	// (0x0001f45a) main_pane_empty_t1_ParamLimits

0x95f2,	// (0x0001f45a) main_pane_empty_t1

0x960a,	// (0x0001f472) main_pane_empty_t2_ParamLimits

0x960a,	// (0x0001f472) main_pane_empty_t2

0x961f,	// (0x0001f487) main_pane_empty_t3_ParamLimits

0x961f,	// (0x0001f487) main_pane_empty_t3

0x9631,	// (0x0001f499) main_pane_empty_t4_ParamLimits

0x9631,	// (0x0001f499) main_pane_empty_t4

0x9643,	// (0x0001f4ab) main_pane_empty_t5_ParamLimits

0x9643,	// (0x0001f4ab) main_pane_empty_t5

0x0004,

0xf574,	// (0x000253dc) main_pane_empty_t_ParamLimits

0xf574,	// (0x000253dc) main_pane_empty_t

0xc9f4,	// (0x0002285c) bg_popup_window_pane_ParamLimits

0xc9f4,	// (0x0002285c) bg_popup_window_pane

0xe35e,	// (0x000241c6) find_popup_pane_cp2_ParamLimits

0xe35e,	// (0x000241c6) find_popup_pane_cp2

0xe36a,	// (0x000241d2) heading_pane_ParamLimits

0xe36a,	// (0x000241d2) heading_pane

0xc334,	// (0x0002219c) bg_popup_sub_pane

0xa6aa,	// (0x00020512) bg_popup_window_pane_g1_ParamLimits

0xa6aa,	// (0x00020512) bg_popup_window_pane_g1

0xa6b9,	// (0x00020521) bg_popup_window_pane_g2_ParamLimits

0xa6b9,	// (0x00020521) bg_popup_window_pane_g2

0xa6c5,	// (0x0002052d) bg_popup_window_pane_g3_ParamLimits

0xa6c5,	// (0x0002052d) bg_popup_window_pane_g3

0xa6d1,	// (0x00020539) bg_popup_window_pane_g4_ParamLimits

0xa6d1,	// (0x00020539) bg_popup_window_pane_g4

0xa6e0,	// (0x00020548) bg_popup_window_pane_g5_ParamLimits

0xa6e0,	// (0x00020548) bg_popup_window_pane_g5

0xa6f0,	// (0x00020558) bg_popup_window_pane_g6_ParamLimits

0xa6f0,	// (0x00020558) bg_popup_window_pane_g6

0xa6fc,	// (0x00020564) bg_popup_window_pane_g7_ParamLimits

0xa6fc,	// (0x00020564) bg_popup_window_pane_g7

0xa70b,	// (0x00020573) bg_popup_window_pane_g8_ParamLimits

0xa70b,	// (0x00020573) bg_popup_window_pane_g8

0xa71a,	// (0x00020582) bg_popup_window_pane_g9_ParamLimits

0xa71a,	// (0x00020582) bg_popup_window_pane_g9

0xe344,	// (0x000241ac) bg_popup_window_pane_g10_ParamLimits

0xe344,	// (0x000241ac) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x00025731) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x00025731) bg_popup_window_pane_g

0xe2e5,	// (0x0002414d) bg_popup_heading_pane_ParamLimits

0xe2e5,	// (0x0002414d) bg_popup_heading_pane

0x5b2a,	// (0x0001b992) tabs_4_passive_pane_cp_srt_ParamLimits

0x5b2a,	// (0x0001b992) tabs_4_passive_pane_cp_srt

0x5b3c,	// (0x0001b9a4) tabs_4_passive_pane_srt_ParamLimits

0xe2f9,	// (0x00024161) heading_pane_g2

0x5b3c,	// (0x0001b9a4) tabs_4_passive_pane_srt

0xd800,	// (0x00023668) bg_passive_tab_pane_cp3_srt_ParamLimits

0xd800,	// (0x00023668) bg_passive_tab_pane_cp3_srt

0xe301,	// (0x00024169) heading_pane_t1_ParamLimits

0xe301,	// (0x00024169) heading_pane_t1

0xe318,	// (0x00024180) heading_pane_t2_ParamLimits

0xe318,	// (0x00024180) heading_pane_t2

0x0001,

0xf8c4,	// (0x0002572c) heading_pane_t_ParamLimits

0xf8c4,	// (0x0002572c) heading_pane_t

0xde52,	// (0x00023cba) bg_popup_heading_pane_g1

0xdee3,	// (0x00023d4b) bg_popup_heading_pane_g2

0xdeeb,	// (0x00023d53) bg_popup_heading_pane_g3

0xdef3,	// (0x00023d5b) bg_popup_heading_pane_g4

0xdefb,	// (0x00023d63) bg_popup_heading_pane_g5

0xdf03,	// (0x00023d6b) bg_popup_heading_pane_g6

0xdf0b,	// (0x00023d73) bg_popup_heading_pane_g7

0xdf13,	// (0x00023d7b) bg_popup_heading_pane_g8

0xdf1b,	// (0x00023d83) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x000256e8) bg_popup_heading_pane_g

0xd774,	// (0x000235dc) bg_popup_sub_pane_g1

0xd77c,	// (0x000235e4) bg_popup_sub_pane_g2

0xd784,	// (0x000235ec) bg_popup_sub_pane_g3

0xd78c,	// (0x000235f4) bg_popup_sub_pane_g4

0xd794,	// (0x000235fc) bg_popup_sub_pane_g5

0xd79c,	// (0x00023604) bg_popup_sub_pane_g6

0xd7a4,	// (0x0002360c) bg_popup_sub_pane_g7

0xd7ac,	// (0x00023614) bg_popup_sub_pane_g8

0xd7b4,	// (0x0002361c) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x000256c2) bg_popup_sub_pane_g

0xc382,	// (0x000221ea) bg_popup_window_pane_cp5_ParamLimits

0xc382,	// (0x000221ea) bg_popup_window_pane_cp5

0xc4e1,	// (0x00022349) popup_note_window_g1_ParamLimits

0xc4e1,	// (0x00022349) popup_note_window_g1

0xc4ed,	// (0x00022355) popup_note_window_t1_ParamLimits

0xc4ed,	// (0x00022355) popup_note_window_t1

0xc503,	// (0x0002236b) popup_note_window_t2_ParamLimits

0xc503,	// (0x0002236b) popup_note_window_t2

0xc519,	// (0x00022381) popup_note_window_t3_ParamLimits

0xc519,	// (0x00022381) popup_note_window_t3

0xc52f,	// (0x00022397) popup_note_window_t4_ParamLimits

0xc52f,	// (0x00022397) popup_note_window_t4

0xc557,	// (0x000223bf) popup_note_window_t5_ParamLimits

0xc557,	// (0x000223bf) popup_note_window_t5

0x0004,

0xf57f,	// (0x000253e7) popup_note_window_t_ParamLimits

0xf57f,	// (0x000253e7) popup_note_window_t

0xc57b,	// (0x000223e3) bg_popup_window_pane_cp6_ParamLimits

0xc57b,	// (0x000223e3) bg_popup_window_pane_cp6

0xddce,	// (0x00023c36) popup_note_image_window_g1_ParamLimits

0xddce,	// (0x00023c36) popup_note_image_window_g1

0xddda,	// (0x00023c42) popup_note_image_window_g2_ParamLimits

0xddda,	// (0x00023c42) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x000256b6) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x000256b6) popup_note_image_window_g

0xddf3,	// (0x00023c5b) popup_note_image_window_t1_ParamLimits

0xddf3,	// (0x00023c5b) popup_note_image_window_t1

0xde0c,	// (0x00023c74) popup_note_image_window_t2_ParamLimits

0xde0c,	// (0x00023c74) popup_note_image_window_t2

0xde25,	// (0x00023c8d) popup_note_image_window_t3_ParamLimits

0xde25,	// (0x00023c8d) popup_note_image_window_t3

0x0002,

0xf853,	// (0x000256bb) popup_note_image_window_t_ParamLimits

0xf853,	// (0x000256bb) popup_note_image_window_t

0xdcb3,	// (0x00023b1b) bg_popup_window_pane_cp7_ParamLimits

0xdcb3,	// (0x00023b1b) bg_popup_window_pane_cp7

0xdce3,	// (0x00023b4b) popup_note_wait_window_g1_ParamLimits

0xdce3,	// (0x00023b4b) popup_note_wait_window_g1

0xdcef,	// (0x00023b57) popup_note_wait_window_g2_ParamLimits

0xdcef,	// (0x00023b57) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x000256a4) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x000256a4) popup_note_wait_window_g

0xdd07,	// (0x00023b6f) popup_note_wait_window_t1_ParamLimits

0xdd07,	// (0x00023b6f) popup_note_wait_window_t1

0xdd2e,	// (0x00023b96) popup_note_wait_window_t2_ParamLimits

0xdd2e,	// (0x00023b96) popup_note_wait_window_t2

0xdd4b,	// (0x00023bb3) popup_note_wait_window_t3_ParamLimits

0xdd4b,	// (0x00023bb3) popup_note_wait_window_t3

0xdd5e,	// (0x00023bc6) popup_note_wait_window_t4_ParamLimits

0xdd5e,	// (0x00023bc6) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x000256ab) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x000256ab) popup_note_wait_window_t

0xdd83,	// (0x00023beb) wait_bar_pane_ParamLimits

0xdd83,	// (0x00023beb) wait_bar_pane

0xc334,	// (0x0002219c) wait_anim_pane

0xc334,	// (0x0002219c) wait_border_pane

0xc32a,	// (0x00022192) wait_anim_pane_g1

0xc32a,	// (0x00022192) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0002556b) wait_anim_pane_g

0xdc63,	// (0x00023acb) wait_border_pane_g1

0xdc6c,	// (0x00023ad4) wait_border_pane_g2

0xdc75,	// (0x00023add) wait_border_pane_g3

0x0002,

0xf835,	// (0x0002569d) wait_border_pane_g

0xdad3,	// (0x0002393b) bg_popup_window_pane_cp16_ParamLimits

0xdad3,	// (0x0002393b) bg_popup_window_pane_cp16

0xdbd3,	// (0x00023a3b) indicator_popup_pane_cp4_ParamLimits

0xdbd3,	// (0x00023a3b) indicator_popup_pane_cp4

0xdbe7,	// (0x00023a4f) popup_query_data_window_t1_ParamLimits

0xdbe7,	// (0x00023a4f) popup_query_data_window_t1

0xdbf9,	// (0x00023a61) popup_query_data_window_t2_ParamLimits

0xdbf9,	// (0x00023a61) popup_query_data_window_t2

0xdc12,	// (0x00023a7a) popup_query_data_window_t3_ParamLimits

0xdc12,	// (0x00023a7a) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x00025696) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x00025696) popup_query_data_window_t

0xdc2c,	// (0x00023a94) query_popup_data_pane_ParamLimits

0xdc2c,	// (0x00023a94) query_popup_data_pane

0xdc40,	// (0x00023aa8) query_popup_data_pane_cp1_ParamLimits

0xdc40,	// (0x00023aa8) query_popup_data_pane_cp1

0xdad3,	// (0x0002393b) bg_popup_window_pane_cp10_ParamLimits

0xdad3,	// (0x0002393b) bg_popup_window_pane_cp10

0xdb05,	// (0x0002396d) indicator_popup_pane_ParamLimits

0xdb05,	// (0x0002396d) indicator_popup_pane

0xdb27,	// (0x0002398f) popup_query_code_window_t1_ParamLimits

0xdb27,	// (0x0002398f) popup_query_code_window_t1

0xdb41,	// (0x000239a9) popup_query_code_window_t2_ParamLimits

0xdb41,	// (0x000239a9) popup_query_code_window_t2

0xdb8a,	// (0x000239f2) popup_query_code_window_t3_ParamLimits

0xdb8a,	// (0x000239f2) popup_query_code_window_t3

0x0002,

0xf827,	// (0x0002568f) popup_query_code_window_t_ParamLimits

0xf827,	// (0x0002568f) popup_query_code_window_t

0xdbb9,	// (0x00023a21) query_popup_pane_ParamLimits

0xdbb9,	// (0x00023a21) query_popup_pane

0xc57b,	// (0x000223e3) bg_popup_window_pane_cp15_ParamLimits

0xc57b,	// (0x000223e3) bg_popup_window_pane_cp15

0xc599,	// (0x00022401) indicator_popup_pane_cp1_ParamLimits

0xc599,	// (0x00022401) indicator_popup_pane_cp1

0xc5ac,	// (0x00022414) indicator_popup_pane_cp2_ParamLimits

0xc5ac,	// (0x00022414) indicator_popup_pane_cp2

0xc5bf,	// (0x00022427) popup_query_data_code_window_g1_ParamLimits

0xc5bf,	// (0x00022427) popup_query_data_code_window_g1

0xc5d2,	// (0x0002243a) popup_query_data_code_window_t1_ParamLimits

0xc5d2,	// (0x0002243a) popup_query_data_code_window_t1

0xc5e4,	// (0x0002244c) popup_query_data_code_window_t2_ParamLimits

0xc5e4,	// (0x0002244c) popup_query_data_code_window_t2

0xc5f6,	// (0x0002245e) popup_query_data_code_window_t3_ParamLimits

0xc5f6,	// (0x0002245e) popup_query_data_code_window_t3

0xc60c,	// (0x00022474) popup_query_data_code_window_t4_ParamLimits

0xc60c,	// (0x00022474) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000253f2) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000253f2) popup_query_data_code_window_t

0xd1fb,	// (0x00023063) list_single_midp_graphic_pane_g3

0xc624,	// (0x0002248c) query_popup_data_pane_cp2_ParamLimits

0xc637,	// (0x0002249f) query_popup_pane_cp2_ParamLimits

0xc637,	// (0x0002249f) query_popup_pane_cp2

0xc334,	// (0x0002219c) bg_popup_window_pane_cp11

0xdacb,	// (0x00023933) heading_pane_cp5

0xc6c6,	// (0x0002252e) listscroll_popup_info_pane

0xc334,	// (0x0002219c) input_focus_pane_cp3

0xc64a,	// (0x000224b2) query_popup_pane_t1

0xc658,	// (0x000224c0) list_popup_info_pane_ParamLimits

0xc658,	// (0x000224c0) list_popup_info_pane

0xc667,	// (0x000224cf) listscroll_popup_info_pane_g1

0xc66f,	// (0x000224d7) scroll_pane_cp7

0xc677,	// (0x000224df) popup_info_list_pane_t1_ParamLimits

0xc677,	// (0x000224df) popup_info_list_pane_t1

0xc691,	// (0x000224f9) popup_info_list_pane_t2_ParamLimits

0xc691,	// (0x000224f9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000253fb) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000253fb) popup_info_list_pane_t

0xc334,	// (0x0002219c) bg_popup_window_pane_cp12

0xea45,	// (0x000248ad) find_popup_pane

0xc3a0,	// (0x00022208) bg_popup_window_pane_cp3

0xc6ab,	// (0x00022513) heading_pane_cp3

0xc6b7,	// (0x0002251f) listscroll_popup_graphic_pane

0xc334,	// (0x0002219c) bg_popup_window_pane_cp4

0x96a5,	// (0x0001f50d) heading_pane_cp4

0xc6c6,	// (0x0002252e) listscroll_popup_colour_pane

0xc6ce,	// (0x00022536) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xc6ce,	// (0x00022536) cell_large_graphic_colour_none_popup_pane

0x96ad,	// (0x0001f515) grid_large_graphic_colour_popup_pane_ParamLimits

0x96ad,	// (0x0001f515) grid_large_graphic_colour_popup_pane

0xc6de,	// (0x00022546) listscroll_popup_colour_pane_g1_ParamLimits

0xc6de,	// (0x00022546) listscroll_popup_colour_pane_g1

0xc6f5,	// (0x0002255d) listscroll_popup_colour_pane_g2_ParamLimits

0xc6f5,	// (0x0002255d) listscroll_popup_colour_pane_g2

0xc70c,	// (0x00022574) listscroll_popup_colour_pane_g3_ParamLimits

0xc70c,	// (0x00022574) listscroll_popup_colour_pane_g3

0x96c9,	// (0x0001f531) listscroll_popup_colour_pane_g4_ParamLimits

0x96c9,	// (0x0001f531) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00025400) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00025400) listscroll_popup_colour_pane_g

0xc71c,	// (0x00022584) scroll_pane_cp6_ParamLimits

0xc71c,	// (0x00022584) scroll_pane_cp6

0x96d8,	// (0x0001f540) cell_large_graphic_colour_popup_pane_ParamLimits

0x96d8,	// (0x0001f540) cell_large_graphic_colour_popup_pane

0xc72e,	// (0x00022596) cell_large_graphic_colour_none_popup_pane_t1

0xc334,	// (0x0002219c) grid_highlight_pane_cp5

0xc73d,	// (0x000225a5) cell_large_graphic_colour_popup_pane_g1

0xc745,	// (0x000225ad) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00025409) cell_large_graphic_colour_popup_pane_g

0xc74d,	// (0x000225b5) cell_large_graphic_colour_popup_pane_g2_copy1

0xc756,	// (0x000225be) grid_highlight_pane_cp4

0xc75e,	// (0x000225c6) bg_popup_window_pane_cp8_ParamLimits

0xc75e,	// (0x000225c6) bg_popup_window_pane_cp8

0xc779,	// (0x000225e1) popup_snote_single_text_window_g1_ParamLimits

0xc779,	// (0x000225e1) popup_snote_single_text_window_g1

0xc78b,	// (0x000225f3) popup_snote_single_text_window_t1_ParamLimits

0xc78b,	// (0x000225f3) popup_snote_single_text_window_t1

0xc79e,	// (0x00022606) popup_snote_single_text_window_t2_ParamLimits

0xc79e,	// (0x00022606) popup_snote_single_text_window_t2

0xc7b1,	// (0x00022619) popup_snote_single_text_window_t3_ParamLimits

0xc7b1,	// (0x00022619) popup_snote_single_text_window_t3

0xc7ea,	// (0x00022652) popup_snote_single_text_window_t4_ParamLimits

0xc7ea,	// (0x00022652) popup_snote_single_text_window_t4

0xc81e,	// (0x00022686) popup_snote_single_text_window_t5_ParamLimits

0xc81e,	// (0x00022686) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0002540e) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0002540e) popup_snote_single_text_window_t

0xc84d,	// (0x000226b5) bg_popup_window_pane_cp9_ParamLimits

0xc84d,	// (0x000226b5) bg_popup_window_pane_cp9

0xc779,	// (0x000225e1) popup_snote_single_graphic_window_g1_ParamLimits

0xc779,	// (0x000225e1) popup_snote_single_graphic_window_g1

0xc85b,	// (0x000226c3) popup_snote_single_graphic_window_g2_ParamLimits

0xc85b,	// (0x000226c3) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00025419) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00025419) popup_snote_single_graphic_window_g

0xc867,	// (0x000226cf) popup_snote_single_graphic_window_t1_ParamLimits

0xc867,	// (0x000226cf) popup_snote_single_graphic_window_t1

0xc87a,	// (0x000226e2) popup_snote_single_graphic_window_t2_ParamLimits

0xc87a,	// (0x000226e2) popup_snote_single_graphic_window_t2

0xc7b1,	// (0x00022619) popup_snote_single_graphic_window_t3_ParamLimits

0xc7b1,	// (0x00022619) popup_snote_single_graphic_window_t3

0xc7ea,	// (0x00022652) popup_snote_single_graphic_window_t4_ParamLimits

0xc7ea,	// (0x00022652) popup_snote_single_graphic_window_t4

0xc81e,	// (0x00022686) popup_snote_single_graphic_window_t5_ParamLimits

0xc81e,	// (0x00022686) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0002541e) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0002541e) popup_snote_single_graphic_window_t

0xe9d1,	// (0x00024839) grid_graphic_popup_pane_ParamLimits

0xe9d1,	// (0x00024839) grid_graphic_popup_pane

0xe9f5,	// (0x0002485d) listscroll_popup_graphic_pane_g1_ParamLimits

0xe9f5,	// (0x0002485d) listscroll_popup_graphic_pane_g1

0xaa57,	// (0x000208bf) listscroll_popup_graphic_pane_g2_ParamLimits

0xaa57,	// (0x000208bf) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0002580c) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0002580c) listscroll_popup_graphic_pane_g

0xe5e8,	// (0x00024450) scroll_pane_cp5

0xaa1a,	// (0x00020882) cell_graphic_popup_pane_ParamLimits

0xaa1a,	// (0x00020882) cell_graphic_popup_pane

0xe99c,	// (0x00024804) cell_graphic_popup_pane_g1

0xe9a4,	// (0x0002480c) cell_graphic_popup_pane_g2

0xc74d,	// (0x000225b5) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x00025805) cell_graphic_popup_pane_g

0xe9ad,	// (0x00024815) cell_graphic_popup_pane_t2

0xc756,	// (0x000225be) grid_highlight_pane_cp3

0xc89f,	// (0x00022707) list_gen_pane_ParamLimits

0xc89f,	// (0x00022707) list_gen_pane

0xc8c7,	// (0x0002272f) scroll_pane

0xa9d7,	// (0x0002083f) bg_list_pane_g1_ParamLimits

0xa9d7,	// (0x0002083f) bg_list_pane_g1

0xe94b,	// (0x000247b3) bg_list_pane_g2_ParamLimits

0xe94b,	// (0x000247b3) bg_list_pane_g2

0xe95e,	// (0x000247c6) bg_list_pane_g3_ParamLimits

0xe95e,	// (0x000247c6) bg_list_pane_g3

0xe970,	// (0x000247d8) bg_list_pane_g4_ParamLimits

0xe970,	// (0x000247d8) bg_list_pane_g4

0xa9f2,	// (0x0002085a) bg_list_pane_g5_ParamLimits

0xa9f2,	// (0x0002085a) bg_list_pane_g5

0x0004,

0xf992,	// (0x000257fa) bg_list_pane_g_ParamLimits

0xf992,	// (0x000257fa) bg_list_pane_g

0xa981,	// (0x000207e9) list_double2_graphic_large_graphic_pane_ParamLimits

0xa981,	// (0x000207e9) list_double2_graphic_large_graphic_pane

0xa981,	// (0x000207e9) list_double2_graphic_pane_ParamLimits

0xa981,	// (0x000207e9) list_double2_graphic_pane

0xa981,	// (0x000207e9) list_double2_large_graphic_pane_ParamLimits

0xa981,	// (0x000207e9) list_double2_large_graphic_pane

0xa981,	// (0x000207e9) list_double2_pane_ParamLimits

0xa981,	// (0x000207e9) list_double2_pane

0xa981,	// (0x000207e9) list_double_graphic_heading_pane_ParamLimits

0xa981,	// (0x000207e9) list_double_graphic_heading_pane

0xa981,	// (0x000207e9) list_double_graphic_pane_ParamLimits

0xa981,	// (0x000207e9) list_double_graphic_pane

0xa981,	// (0x000207e9) list_double_heading_pane_ParamLimits

0xa981,	// (0x000207e9) list_double_heading_pane

0xa981,	// (0x000207e9) list_double_large_graphic_pane_ParamLimits

0xa981,	// (0x000207e9) list_double_large_graphic_pane

0xa981,	// (0x000207e9) list_double_number_pane_ParamLimits

0xa981,	// (0x000207e9) list_double_number_pane

0xa981,	// (0x000207e9) list_double_pane_ParamLimits

0xa981,	// (0x000207e9) list_double_pane

0xa981,	// (0x000207e9) list_double_time_pane_ParamLimits

0xa981,	// (0x000207e9) list_double_time_pane

0xa981,	// (0x000207e9) list_setting_number_pane_ParamLimits

0xa981,	// (0x000207e9) list_setting_number_pane

0xa981,	// (0x000207e9) list_setting_pane_ParamLimits

0xa981,	// (0x000207e9) list_setting_pane

0xa992,	// (0x000207fa) list_single_2graphic_pane_ParamLimits

0xa992,	// (0x000207fa) list_single_2graphic_pane

0xa992,	// (0x000207fa) list_single_graphic_heading_pane_ParamLimits

0xa992,	// (0x000207fa) list_single_graphic_heading_pane

0xa992,	// (0x000207fa) list_single_graphic_pane_ParamLimits

0xa992,	// (0x000207fa) list_single_graphic_pane

0xa992,	// (0x000207fa) list_single_heading_pane_ParamLimits

0xa992,	// (0x000207fa) list_single_heading_pane

0xa992,	// (0x000207fa) list_single_large_graphic_pane_ParamLimits

0xa992,	// (0x000207fa) list_single_large_graphic_pane

0xa992,	// (0x000207fa) list_single_number_heading_pane_ParamLimits

0xa992,	// (0x000207fa) list_single_number_heading_pane

0xa992,	// (0x000207fa) list_single_number_pane_ParamLimits

0xa992,	// (0x000207fa) list_single_number_pane

0xa992,	// (0x000207fa) list_single_pane_ParamLimits

0xa992,	// (0x000207fa) list_single_pane

0xc334,	// (0x0002219c) list_highlight_pane_cp1

0x40c5,	// (0x00019f2d) list_single_pane_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_single_pane_g1

0x40d1,	// (0x00019f39) list_single_pane_g2_ParamLimits

0x40d1,	// (0x00019f39) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00025430) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00025430) list_single_pane_g

0x42f8,	// (0x0001a160) list_single_pane_t1_ParamLimits

0x42f8,	// (0x0001a160) list_single_pane_t1

0x40c5,	// (0x00019f2d) list_single_number_pane_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_single_number_pane_g1

0x40d1,	// (0x00019f39) list_single_number_pane_g2_ParamLimits

0x40d1,	// (0x00019f39) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00025430) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00025430) list_single_number_pane_g

0x4123,	// (0x00019f8b) list_single_number_pane_t1_ParamLimits

0x4123,	// (0x00019f8b) list_single_number_pane_t1

0x8f3e,	// (0x0001eda6) list_single_number_pane_t2_ParamLimits

0x8f3e,	// (0x0001eda6) list_single_number_pane_t2

0x0001,

0xf953,	// (0x000257bb) list_single_number_pane_t_ParamLimits

0xf953,	// (0x000257bb) list_single_number_pane_t

0x3967,	// (0x000197cf) list_single_graphic_pane_g1_ParamLimits

0x3967,	// (0x000197cf) list_single_graphic_pane_g1

0x40c5,	// (0x00019f2d) list_single_graphic_pane_g2_ParamLimits

0x40c5,	// (0x00019f2d) list_single_graphic_pane_g2

0x40d1,	// (0x00019f39) list_single_graphic_pane_g3_ParamLimits

0x40d1,	// (0x00019f39) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00025429) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00025429) list_single_graphic_pane_g

0x89e7,	// (0x0001e84f) list_single_graphic_pane_t1_ParamLimits

0x89e7,	// (0x0001e84f) list_single_graphic_pane_t1

0x40c5,	// (0x00019f2d) list_single_heading_pane_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_single_heading_pane_g1

0x40d1,	// (0x00019f39) list_single_heading_pane_g2_ParamLimits

0x40d1,	// (0x00019f39) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00025430) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00025430) list_single_heading_pane_g

0x89fd,	// (0x0001e865) list_single_heading_pane_t1_ParamLimits

0x89fd,	// (0x0001e865) list_single_heading_pane_t1

0x8a13,	// (0x0001e87b) list_single_heading_pane_t2_ParamLimits

0x8a13,	// (0x0001e87b) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00025435) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00025435) list_single_heading_pane_t

0x40c5,	// (0x00019f2d) list_single_number_heading_pane_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_single_number_heading_pane_g1

0x40d1,	// (0x00019f39) list_single_number_heading_pane_g2_ParamLimits

0x40d1,	// (0x00019f39) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00025430) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00025430) list_single_number_heading_pane_g

0x89fd,	// (0x0001e865) list_single_number_heading_pane_t1_ParamLimits

0x89fd,	// (0x0001e865) list_single_number_heading_pane_t1

0x42c2,	// (0x0001a12a) list_single_number_heading_pane_t2_ParamLimits

0x42c2,	// (0x0001a12a) list_single_number_heading_pane_t2

0x42d4,	// (0x0001a13c) list_single_number_heading_pane_t3_ParamLimits

0x42d4,	// (0x0001a13c) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0002543a) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0002543a) list_single_number_heading_pane_t

0x39ed,	// (0x00019855) list_single_graphic_heading_pane_g1_ParamLimits

0x39ed,	// (0x00019855) list_single_graphic_heading_pane_g1

0x8a25,	// (0x0001e88d) list_single_graphic_heading_pane_g4_ParamLimits

0x8a25,	// (0x0001e88d) list_single_graphic_heading_pane_g4

0x40d1,	// (0x00019f39) list_single_graphic_heading_pane_g5_ParamLimits

0x40d1,	// (0x00019f39) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00025441) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00025441) list_single_graphic_heading_pane_g

0x89fd,	// (0x0001e865) list_single_graphic_heading_pane_t1_ParamLimits

0x89fd,	// (0x0001e865) list_single_graphic_heading_pane_t1

0x8a36,	// (0x0001e89e) list_single_graphic_heading_pane_t2_ParamLimits

0x8a36,	// (0x0001e89e) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00025448) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00025448) list_single_graphic_heading_pane_t

0x430e,	// (0x0001a176) list_single_large_graphic_pane_g1_ParamLimits

0x430e,	// (0x0001a176) list_single_large_graphic_pane_g1

0x40c5,	// (0x00019f2d) list_single_large_graphic_pane_g2_ParamLimits

0x40c5,	// (0x00019f2d) list_single_large_graphic_pane_g2

0x40d1,	// (0x00019f39) list_single_large_graphic_pane_g3_ParamLimits

0x40d1,	// (0x00019f39) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0002544d) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0002544d) list_single_large_graphic_pane_g

0xdc6c,	// (0x00023ad4) wait_border_pane_g2_copy1

0x8a48,	// (0x0001e8b0) list_single_large_graphic_pane_g4_cp2

0x431a,	// (0x0001a182) list_single_large_graphic_pane_t1_ParamLimits

0x431a,	// (0x0001a182) list_single_large_graphic_pane_t1

0x4574,	// (0x0001a3dc) list_double_pane_g1_ParamLimits

0x4574,	// (0x0001a3dc) list_double_pane_g1

0x8a50,	// (0x0001e8b8) list_double_pane_g2_ParamLimits

0x8a50,	// (0x0001e8b8) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00025454) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00025454) list_double_pane_g

0x8a5c,	// (0x0001e8c4) list_double_pane_t1_ParamLimits

0x8a5c,	// (0x0001e8c4) list_double_pane_t1

0x8a72,	// (0x0001e8da) list_double_pane_t2_ParamLimits

0x8a72,	// (0x0001e8da) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00025459) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00025459) list_double_pane_t

0x8a84,	// (0x0001e8ec) list_double2_pane_g1_ParamLimits

0x8a84,	// (0x0001e8ec) list_double2_pane_g1

0x8a95,	// (0x0001e8fd) list_double2_pane_g2_ParamLimits

0x8a95,	// (0x0001e8fd) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0002545e) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0002545e) list_double2_pane_g

0x8aa1,	// (0x0001e909) list_double2_pane_t1_ParamLimits

0x8aa1,	// (0x0001e909) list_double2_pane_t1

0x8ab7,	// (0x0001e91f) list_double2_pane_t2_ParamLimits

0x8ab7,	// (0x0001e91f) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00025463) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00025463) list_double2_pane_t

0x4574,	// (0x0001a3dc) list_double_number_pane_g1_ParamLimits

0x4574,	// (0x0001a3dc) list_double_number_pane_g1

0x8a50,	// (0x0001e8b8) list_double_number_pane_g2_ParamLimits

0x8a50,	// (0x0001e8b8) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00025454) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00025454) list_double_number_pane_g

0x8ac9,	// (0x0001e931) list_double_number_pane_t1_ParamLimits

0x8ac9,	// (0x0001e931) list_double_number_pane_t1

0x8adb,	// (0x0001e943) list_double_number_pane_t2_ParamLimits

0x8adb,	// (0x0001e943) list_double_number_pane_t2

0x8af1,	// (0x0001e959) list_double_number_pane_t3_ParamLimits

0x8af1,	// (0x0001e959) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00025468) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00025468) list_double_number_pane_t

0x8b03,	// (0x0001e96b) list_double_graphic_pane_g1_ParamLimits

0x8b03,	// (0x0001e96b) list_double_graphic_pane_g1

0x8b0f,	// (0x0001e977) list_double_graphic_pane_g2_ParamLimits

0x8b0f,	// (0x0001e977) list_double_graphic_pane_g2

0x8b1e,	// (0x0001e986) list_double_graphic_pane_g3_ParamLimits

0x8b1e,	// (0x0001e986) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0002546f) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0002546f) list_double_graphic_pane_g

0x8b36,	// (0x0001e99e) list_double_graphic_pane_t1_ParamLimits

0x8b36,	// (0x0001e99e) list_double_graphic_pane_t1

0x8b4c,	// (0x0001e9b4) list_double_graphic_pane_t2_ParamLimits

0x8b4c,	// (0x0001e9b4) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00025478) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00025478) list_double_graphic_pane_t

0x3c8c,	// (0x00019af4) list_double2_graphic_pane_g1_ParamLimits

0x3c8c,	// (0x00019af4) list_double2_graphic_pane_g1

0x4574,	// (0x0001a3dc) list_double2_graphic_pane_g2_ParamLimits

0x4574,	// (0x0001a3dc) list_double2_graphic_pane_g2

0x8a50,	// (0x0001e8b8) list_double2_graphic_pane_g3_ParamLimits

0x8a50,	// (0x0001e8b8) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0002547d) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0002547d) list_double2_graphic_pane_g

0x8b5e,	// (0x0001e9c6) list_double2_graphic_pane_t1_ParamLimits

0x8b5e,	// (0x0001e9c6) list_double2_graphic_pane_t1

0x8b74,	// (0x0001e9dc) list_double2_graphic_pane_t2_ParamLimits

0x8b74,	// (0x0001e9dc) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00025484) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00025484) list_double2_graphic_pane_t

0x8b86,	// (0x0001e9ee) list_double_large_graphic_pane_g1_ParamLimits

0x8b86,	// (0x0001e9ee) list_double_large_graphic_pane_g1

0x8ba5,	// (0x0001ea0d) list_double_large_graphic_pane_g2_ParamLimits

0x8ba5,	// (0x0001ea0d) list_double_large_graphic_pane_g2

0x8a50,	// (0x0001e8b8) list_double_large_graphic_pane_g3_ParamLimits

0x8a50,	// (0x0001e8b8) list_double_large_graphic_pane_g3

0x8bb6,	// (0x0001ea1e) list_double_large_graphic_pane_g4_ParamLimits

0x8bb6,	// (0x0001ea1e) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00025489) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00025489) list_double_large_graphic_pane_g

0x8bc7,	// (0x0001ea2f) list_double_large_graphic_pane_t1_ParamLimits

0x8bc7,	// (0x0001ea2f) list_double_large_graphic_pane_t1

0x8be0,	// (0x0001ea48) list_double_large_graphic_pane_t2_ParamLimits

0x8be0,	// (0x0001ea48) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00025494) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00025494) list_double_large_graphic_pane_t

0x8bf2,	// (0x0001ea5a) list_double2_large_graphic_pane_g1_ParamLimits

0x8bf2,	// (0x0001ea5a) list_double2_large_graphic_pane_g1

0x8a84,	// (0x0001e8ec) list_double2_large_graphic_pane_g2_ParamLimits

0x8a84,	// (0x0001e8ec) list_double2_large_graphic_pane_g2

0x8a95,	// (0x0001e8fd) list_double2_large_graphic_pane_g3_ParamLimits

0x8a95,	// (0x0001e8fd) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00025499) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00025499) list_double2_large_graphic_pane_g

0x8bfe,	// (0x0001ea66) list_double2_large_graphic_pane_t1_ParamLimits

0x8bfe,	// (0x0001ea66) list_double2_large_graphic_pane_t1

0x8c14,	// (0x0001ea7c) list_double2_large_graphic_pane_t2_ParamLimits

0x8c14,	// (0x0001ea7c) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x000254a0) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x000254a0) list_double2_large_graphic_pane_t

0x8c26,	// (0x0001ea8e) list_double_heading_pane_g1_ParamLimits

0x8c26,	// (0x0001ea8e) list_double_heading_pane_g1

0x3a68,	// (0x000198d0) list_double_heading_pane_g2_ParamLimits

0x3a68,	// (0x000198d0) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x000254a5) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x000254a5) list_double_heading_pane_g

0x8c37,	// (0x0001ea9f) list_double_heading_pane_t1_ParamLimits

0x8c37,	// (0x0001ea9f) list_double_heading_pane_t1

0x8ab7,	// (0x0001e91f) list_double_heading_pane_t2_ParamLimits

0x8ab7,	// (0x0001e91f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x000254aa) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x000254aa) list_double_heading_pane_t

0x3c8c,	// (0x00019af4) list_double_graphic_heading_pane_g1_ParamLimits

0x3c8c,	// (0x00019af4) list_double_graphic_heading_pane_g1

0x8c26,	// (0x0001ea8e) list_double_graphic_heading_pane_g2_ParamLimits

0x8c26,	// (0x0001ea8e) list_double_graphic_heading_pane_g2

0x3a68,	// (0x000198d0) list_double_graphic_heading_pane_g3_ParamLimits

0x3a68,	// (0x000198d0) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x000254af) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x000254af) list_double_graphic_heading_pane_g

0x8c4d,	// (0x0001eab5) list_double_graphic_heading_pane_t1_ParamLimits

0x8c4d,	// (0x0001eab5) list_double_graphic_heading_pane_t1

0x8b74,	// (0x0001e9dc) list_double_graphic_heading_pane_t2_ParamLimits

0x8b74,	// (0x0001e9dc) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x000254b6) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x000254b6) list_double_graphic_heading_pane_t

0x8ba5,	// (0x0001ea0d) list_double_time_pane_g1_ParamLimits

0x8ba5,	// (0x0001ea0d) list_double_time_pane_g1

0x8a50,	// (0x0001e8b8) list_double_time_pane_g2_ParamLimits

0x8a50,	// (0x0001e8b8) list_double_time_pane_g2

0x0001,

0xf653,	// (0x000254bb) list_double_time_pane_g_ParamLimits

0xf653,	// (0x000254bb) list_double_time_pane_g

0x8c63,	// (0x0001eacb) list_double_time_pane_t1_ParamLimits

0x8c63,	// (0x0001eacb) list_double_time_pane_t1

0x8c79,	// (0x0001eae1) list_double_time_pane_t2_ParamLimits

0x8c79,	// (0x0001eae1) list_double_time_pane_t2

0x8c8b,	// (0x0001eaf3) list_double_time_pane_t3_ParamLimits

0x8c8b,	// (0x0001eaf3) list_double_time_pane_t3

0x8c9d,	// (0x0001eb05) list_double_time_pane_t4_ParamLimits

0x8c9d,	// (0x0001eb05) list_double_time_pane_t4

0x0003,

0xf658,	// (0x000254c0) list_double_time_pane_t_ParamLimits

0xf658,	// (0x000254c0) list_double_time_pane_t

0x8caf,	// (0x0001eb17) list_setting_pane_g1_ParamLimits

0x8caf,	// (0x0001eb17) list_setting_pane_g1

0x8a95,	// (0x0001e8fd) list_setting_pane_g2_ParamLimits

0x8a95,	// (0x0001e8fd) list_setting_pane_g2

0x0001,

0xf661,	// (0x000254c9) list_setting_pane_g_ParamLimits

0xf661,	// (0x000254c9) list_setting_pane_g

0x8cbb,	// (0x0001eb23) list_setting_pane_t1_ParamLimits

0x8cbb,	// (0x0001eb23) list_setting_pane_t1

0x8cd5,	// (0x0001eb3d) list_setting_pane_t2_ParamLimits

0x8cd5,	// (0x0001eb3d) list_setting_pane_t2

0x0002,

0xf666,	// (0x000254ce) list_setting_pane_t_ParamLimits

0xf666,	// (0x000254ce) list_setting_pane_t

0x8d12,	// (0x0001eb7a) set_value_pane_cp_ParamLimits

0x8d12,	// (0x0001eb7a) set_value_pane_cp

0x8d1e,	// (0x0001eb86) list_setting_number_pane_g1_ParamLimits

0x8d1e,	// (0x0001eb86) list_setting_number_pane_g1

0x8d2a,	// (0x0001eb92) list_setting_number_pane_g2_ParamLimits

0x8d2a,	// (0x0001eb92) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x000254d5) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x000254d5) list_setting_number_pane_g

0x8d36,	// (0x0001eb9e) list_setting_number_pane_t1_ParamLimits

0x8d36,	// (0x0001eb9e) list_setting_number_pane_t1

0x8d4f,	// (0x0001ebb7) list_setting_number_pane_t2_ParamLimits

0x8d4f,	// (0x0001ebb7) list_setting_number_pane_t2

0x8d69,	// (0x0001ebd1) list_setting_number_pane_t3_ParamLimits

0x8d69,	// (0x0001ebd1) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x000254da) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x000254da) list_setting_number_pane_t

0x8d12,	// (0x0001eb7a) set_value_pane_ParamLimits

0x8d12,	// (0x0001eb7a) set_value_pane

0xc8fb,	// (0x00022763) bg_set_opt_pane_ParamLimits

0xc8fb,	// (0x00022763) bg_set_opt_pane

0x3df3,	// (0x00019c5b) set_value_pane_t1

0xc91c,	// (0x00022784) slider_set_pane_cp3

0x9701,	// (0x0001f569) volume_small_pane_cp

0xc925,	// (0x0002278d) list_form_gen_pane

0xc92e,	// (0x00022796) scroll_pane_cp8

0x8dac,	// (0x0001ec14) form_field_data_pane_ParamLimits

0x8dac,	// (0x0001ec14) form_field_data_pane

0x8dc3,	// (0x0001ec2b) form_field_data_wide_pane_ParamLimits

0x8dc3,	// (0x0001ec2b) form_field_data_wide_pane

0x3e48,	// (0x00019cb0) form_field_popup_pane_ParamLimits

0x3e48,	// (0x00019cb0) form_field_popup_pane

0x3e60,	// (0x00019cc8) form_field_popup_wide_pane_ParamLimits

0x3e60,	// (0x00019cc8) form_field_popup_wide_pane

0x3e77,	// (0x00019cdf) form_field_slider_pane_ParamLimits

0x3e77,	// (0x00019cdf) form_field_slider_pane

0x3e8a,	// (0x00019cf2) form_field_slider_wide_pane_ParamLimits

0x3e8a,	// (0x00019cf2) form_field_slider_wide_pane

0xc93f,	// (0x000227a7) data_form_pane

0x8deb,	// (0x0001ec53) form_field_data_pane_t1

0xc94b,	// (0x000227b3) input_focus_pane

0x3ebd,	// (0x00019d25) data_form_wide_pane

0x3eda,	// (0x00019d42) form_field_data_wide_pane_t1

0xc76b,	// (0x000225d3) input_focus_pane_cp6

0x8e03,	// (0x0001ec6b) form_field_popup_pane_t1

0xc94b,	// (0x000227b3) input_focus_pane_cp7

0xc979,	// (0x000227e1) list_form_pane

0x3f1c,	// (0x00019d84) form_field_popup_wide_pane_t1

0xc94b,	// (0x000227b3) input_focus_pane_cp8

0xc985,	// (0x000227ed) list_form_wide_pane

0x8e23,	// (0x0001ec8b) form_field_slider_pane_t1_ParamLimits

0x8e23,	// (0x0001ec8b) form_field_slider_pane_t1

0x8e39,	// (0x0001eca1) form_field_slider_pane_t2_ParamLimits

0x8e39,	// (0x0001eca1) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x000254ea) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x000254ea) form_field_slider_pane_t

0xc382,	// (0x000221ea) input_focus_pane_cp9_ParamLimits

0xc382,	// (0x000221ea) input_focus_pane_cp9

0x8e4e,	// (0x0001ecb6) slider_cont_pane_ParamLimits

0x8e4e,	// (0x0001ecb6) slider_cont_pane

0xc991,	// (0x000227f9) form_field_slider_wide_pane_t1_ParamLimits

0xc991,	// (0x000227f9) form_field_slider_wide_pane_t1

0x3f71,	// (0x00019dd9) form_field_slider_wide_pane_t2_ParamLimits

0x3f71,	// (0x00019dd9) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x000254ef) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x000254ef) form_field_slider_wide_pane_t

0xc382,	// (0x000221ea) input_focus_pane_cp10_ParamLimits

0xc382,	// (0x000221ea) input_focus_pane_cp10

0x8e62,	// (0x0001ecca) slider_cont_pane_cp1_ParamLimits

0x8e62,	// (0x0001ecca) slider_cont_pane_cp1

0x8e76,	// (0x0001ecde) slider_form_pane_cp

0xc9a3,	// (0x0002280b) input_focus_pane_g1

0xc9ab,	// (0x00022813) input_focus_pane_g2

0xc9b3,	// (0x0002281b) input_focus_pane_g3

0xc9bb,	// (0x00022823) input_focus_pane_g4

0xc9c3,	// (0x0002282b) input_focus_pane_g5

0xc9cb,	// (0x00022833) input_focus_pane_g6

0xc9d3,	// (0x0002283b) input_focus_pane_g7

0xc9db,	// (0x00022843) input_focus_pane_g8

0xc9e3,	// (0x0002284b) input_focus_pane_g9

0xc32a,	// (0x00022192) input_focus_pane_g10

0x0009,

0xf68c,	// (0x000254f4) input_focus_pane_g

0xdc75,	// (0x00023add) wait_border_pane_g3_copy1

0x8e7e,	// (0x0001ece6) data_form_pane_t1

0xc32a,	// (0x00022192) wait_anim_pane_g1_copy1

0x8f50,	// (0x0001edb8) data_form_wide_pane_t1

0x3fb9,	// (0x00019e21) list_form_graphic_pane_cp_ParamLimits

0x3fb9,	// (0x00019e21) list_form_graphic_pane_cp

0xe8cb,	// (0x00024733) slider_form_pane_g1

0xe8d4,	// (0x0002473c) slider_form_pane_g2

0x0006,

0xf983,	// (0x000257eb) slider_form_pane_g

0x3fb9,	// (0x00019e21) list_form_graphic_pane_ParamLimits

0x3fb9,	// (0x00019e21) list_form_graphic_pane

0x3fca,	// (0x00019e32) list_form_graphic_pane_g1

0x3fd2,	// (0x00019e3a) list_form_graphic_pane_t1_ParamLimits

0x3fd2,	// (0x00019e3a) list_form_graphic_pane_t1

0xc3a0,	// (0x00022208) list_highlight_pane_cp5_ParamLimits

0xc3a0,	// (0x00022208) list_highlight_pane_cp5

0x8e97,	// (0x0001ecff) find_pane_g1

0xc9eb,	// (0x00022853) input_find_pane

0x8ea0,	// (0x0001ed08) input_find_pane_g1_ParamLimits

0x8ea0,	// (0x0001ed08) input_find_pane_g1

0x3ffc,	// (0x00019e64) input_find_pane_t1_ParamLimits

0x3ffc,	// (0x00019e64) input_find_pane_t1

0x4011,	// (0x00019e79) input_find_pane_t2_ParamLimits

0x4011,	// (0x00019e79) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00025509) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00025509) input_find_pane_t

0xc9f4,	// (0x0002285c) input_focus_pane_cp5_ParamLimits

0xc9f4,	// (0x0002285c) input_focus_pane_cp5

0xca02,	// (0x0002286a) bg_popup_window_pane_cp2_ParamLimits

0xca02,	// (0x0002286a) bg_popup_window_pane_cp2

0xca0f,	// (0x00022877) listscroll_menu_pane_ParamLimits

0xca0f,	// (0x00022877) listscroll_menu_pane

0x9716,	// (0x0001f57e) popup_submenu_window_ParamLimits

0x9716,	// (0x0001f57e) popup_submenu_window

0xca1b,	// (0x00022883) find_popup_pane_g1

0xca23,	// (0x0002288b) input_popup_find_pane_cp

0xc9f4,	// (0x0002285c) input_focus_pane_cp4_ParamLimits

0xc9f4,	// (0x0002285c) input_focus_pane_cp4

0xca2d,	// (0x00022895) input_popup_find_pane_t1_ParamLimits

0xca2d,	// (0x00022895) input_popup_find_pane_t1

0xc334,	// (0x0002219c) bg_popup_sub_pane_cp

0xca5b,	// (0x000228c3) listscroll_popup_sub_pane

0xca63,	// (0x000228cb) list_submenu_pane_ParamLimits

0xca63,	// (0x000228cb) list_submenu_pane

0xca74,	// (0x000228dc) scroll_pane_cp4

0xca7c,	// (0x000228e4) list_single_popup_submenu_pane_ParamLimits

0xca7c,	// (0x000228e4) list_single_popup_submenu_pane

0xca8f,	// (0x000228f7) list_single_popup_submenu_pane_g1

0xca97,	// (0x000228ff) list_single_popup_submenu_pane_t1_ParamLimits

0xca97,	// (0x000228ff) list_single_popup_submenu_pane_t1

0xc382,	// (0x000221ea) bg_active_tab_pane_cp1_ParamLimits

0xc382,	// (0x000221ea) bg_active_tab_pane_cp1

0xcaac,	// (0x00022914) tabs_2_active_pane_g1

0x9746,	// (0x0001f5ae) tabs_2_active_pane_t1

0xc382,	// (0x000221ea) bg_passive_tab_pane_cp1_ParamLimits

0xc382,	// (0x000221ea) bg_passive_tab_pane_cp1

0xcaac,	// (0x00022914) tabs_2_passive_pane_g1

0x9746,	// (0x0001f5ae) tabs_2_passive_pane_t1

0xc3a0,	// (0x00022208) bg_active_tab_pane_cp4

0x9758,	// (0x0001f5c0) tabs_2_long_active_pane_t1

0xcab4,	// (0x0002291c) bg_passive_tab_pane_cp4

0x136c,	// (0x000171d4) list_single_midp_graphic_pane_g4_ParamLimits

0xc3a0,	// (0x00022208) bg_active_tab_pane_cp5

0x976b,	// (0x0001f5d3) tabs_3_long_active_pane_t1

0xcab4,	// (0x0002291c) bg_passive_tab_pane_cp5

0x136c,	// (0x000171d4) list_single_midp_graphic_pane_g4

0xc3a0,	// (0x00022208) bg_popup_window_pane_cp13_ParamLimits

0xc3a0,	// (0x00022208) bg_popup_window_pane_cp13

0xcac9,	// (0x00022931) listscroll_popup_fast_pane_ParamLimits

0xcac9,	// (0x00022931) listscroll_popup_fast_pane

0xcad8,	// (0x00022940) grid_popup_fast_pane_ParamLimits

0xcad8,	// (0x00022940) grid_popup_fast_pane

0xcaea,	// (0x00022952) scroll_pane_cp9_ParamLimits

0xcaea,	// (0x00022952) scroll_pane_cp9

0x1b6a,	// (0x000179d2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x1b6a,	// (0x000179d2) list_single_graphic_hl_pane_t1_cp2

0xcb0e,	// (0x00022976) input_focus_pane_cp20_ParamLimits

0xcb0e,	// (0x00022976) input_focus_pane_cp20

0xcb1c,	// (0x00022984) query_popup_data_pane_t1_ParamLimits

0xcb1c,	// (0x00022984) query_popup_data_pane_t1

0xcb2f,	// (0x00022997) query_popup_data_pane_t2_ParamLimits

0xcb2f,	// (0x00022997) query_popup_data_pane_t2

0xcb75,	// (0x000229dd) query_popup_data_pane_t3_ParamLimits

0xcb75,	// (0x000229dd) query_popup_data_pane_t3

0xcbb6,	// (0x00022a1e) query_popup_data_pane_t4_ParamLimits

0xcbb6,	// (0x00022a1e) query_popup_data_pane_t4

0xcbf2,	// (0x00022a5a) query_popup_data_pane_t5_ParamLimits

0xcbf2,	// (0x00022a5a) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0002550e) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0002550e) query_popup_data_pane_t

0xc9a3,	// (0x0002280b) bg_set_opt_pane_g1

0xc9ab,	// (0x00022813) bg_set_opt_pane_g2

0xc9b3,	// (0x0002281b) bg_set_opt_pane_g3

0xc9bb,	// (0x00022823) bg_set_opt_pane_g4

0xc9c3,	// (0x0002282b) bg_set_opt_pane_g5

0xc9cb,	// (0x00022833) bg_set_opt_pane_g6

0xc9d3,	// (0x0002283b) bg_set_opt_pane_g7

0xc9db,	// (0x00022843) bg_set_opt_pane_g8

0xc9e3,	// (0x0002284b) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00025519) bg_set_opt_pane_g

0x4fc8,	// (0x0001ae30) control_top_pane_stacon_ParamLimits

0x4fc8,	// (0x0001ae30) control_top_pane_stacon

0x501b,	// (0x0001ae83) signal_pane_stacon_ParamLimits

0x501b,	// (0x0001ae83) signal_pane_stacon

0xd08d,	// (0x00022ef5) stacon_top_pane_g1_ParamLimits

0xd08d,	// (0x00022ef5) stacon_top_pane_g1

0x5040,	// (0x0001aea8) title_pane_stacon_ParamLimits

0x5040,	// (0x0001aea8) title_pane_stacon

0x5062,	// (0x0001aeca) uni_indicator_pane_stacon_ParamLimits

0x5062,	// (0x0001aeca) uni_indicator_pane_stacon

0x5077,	// (0x0001aedf) battery_pane_stacon_ParamLimits

0x5077,	// (0x0001aedf) battery_pane_stacon

0x50b7,	// (0x0001af1f) control_bottom_pane_stacon_ParamLimits

0x50b7,	// (0x0001af1f) control_bottom_pane_stacon

0x50d6,	// (0x0001af3e) navi_pane_stacon_ParamLimits

0x50d6,	// (0x0001af3e) navi_pane_stacon

0xd0af,	// (0x00022f17) stacon_bottom_pane_g1_ParamLimits

0xd0af,	// (0x00022f17) stacon_bottom_pane_g1

0x4d3a,	// (0x0001aba2) aid_levels_signal_lsc_ParamLimits

0x4d3a,	// (0x0001aba2) aid_levels_signal_lsc

0x4d51,	// (0x0001abb9) signal_pane_stacon_g1_ParamLimits

0x4d51,	// (0x0001abb9) signal_pane_stacon_g1

0x4d65,	// (0x0001abcd) signal_pane_stacon_g2_ParamLimits

0x4d65,	// (0x0001abcd) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0002552c) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0002552c) signal_pane_stacon_g

0x4d9a,	// (0x0001ac02) title_pane_stacon_t1_ParamLimits

0x4d9a,	// (0x0001ac02) title_pane_stacon_t1

0xcc36,	// (0x00022a9e) uni_indicator_pane_stacon_g1

0xcc40,	// (0x00022aa8) uni_indicator_pane_stacon_g2

0xcc4a,	// (0x00022ab2) uni_indicator_pane_stacon_g3

0xcc54,	// (0x00022abc) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00025538) uni_indicator_pane_stacon_g

0x4dbf,	// (0x0001ac27) control_top_pane_stacon_g1

0x4dc7,	// (0x0001ac2f) control_top_pane_stacon_t1_ParamLimits

0x4dc7,	// (0x0001ac2f) control_top_pane_stacon_t1

0x4dfe,	// (0x0001ac66) aid_levels_battery_lsc_ParamLimits

0x4dfe,	// (0x0001ac66) aid_levels_battery_lsc

0x4e16,	// (0x0001ac7e) battery_pane_stacon_g1_ParamLimits

0x4e16,	// (0x0001ac7e) battery_pane_stacon_g1

0x4e29,	// (0x0001ac91) battery_pane_stacon_g2_ParamLimits

0x4e29,	// (0x0001ac91) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00025541) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00025541) battery_pane_stacon_g

0x4e5f,	// (0x0001acc7) navi_icon_pane_stacon

0x4e73,	// (0x0001acdb) navi_navi_pane_stacon

0x4e5f,	// (0x0001acc7) navi_text_pane_stacon

0x4dbf,	// (0x0001ac27) control_bottom_pane_stacon_g1

0x4e87,	// (0x0001acef) control_bottom_pane_stacon_t1_ParamLimits

0x4e87,	// (0x0001acef) control_bottom_pane_stacon_t1

0x977d,	// (0x0001f5e5) grid_app_pane_ParamLimits

0x977d,	// (0x0001f5e5) grid_app_pane

0x97ab,	// (0x0001f613) scroll_pane_cp15_ParamLimits

0x97ab,	// (0x0001f613) scroll_pane_cp15

0x97be,	// (0x0001f626) cell_app_pane_ParamLimits

0x97be,	// (0x0001f626) cell_app_pane

0x97f9,	// (0x0001f661) cell_app_pane_g1_ParamLimits

0x97f9,	// (0x0001f661) cell_app_pane_g1

0xcc78,	// (0x00022ae0) cell_app_pane_g2_ParamLimits

0xcc78,	// (0x00022ae0) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00025546) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00025546) cell_app_pane_g

0x981d,	// (0x0001f685) cell_app_pane_t1_ParamLimits

0x981d,	// (0x0001f685) cell_app_pane_t1

0xcc84,	// (0x00022aec) grid_highlight_pane_ParamLimits

0xcc84,	// (0x00022aec) grid_highlight_pane

0xc9a3,	// (0x0002280b) cell_highlight_pane_g1

0xc9ab,	// (0x00022813) cell_highlight_pane_g2

0xc9b3,	// (0x0002281b) cell_highlight_pane_g3

0xc9bb,	// (0x00022823) cell_highlight_pane_g4

0xc9c3,	// (0x0002282b) cell_highlight_pane_g5

0xc9cb,	// (0x00022833) cell_highlight_pane_g6

0xc9d3,	// (0x0002283b) cell_highlight_pane_g7

0xc9db,	// (0x00022843) cell_highlight_pane_g8

0xc9e3,	// (0x0002284b) cell_highlight_pane_g9

0xc32a,	// (0x00022192) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x000254f4) cell_highlight_pane_g

0xcc95,	// (0x00022afd) bg_scroll_pane

0x4ed1,	// (0x0001ad39) scroll_handle_pane

0xccdc,	// (0x00022b44) scroll_bg_pane_g1

0xccf1,	// (0x00022b59) scroll_bg_pane_g2

0xcd09,	// (0x00022b71) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0002554b) scroll_bg_pane_g

0xcd1e,	// (0x00022b86) scroll_handle_focus_pane_ParamLimits

0xcd1e,	// (0x00022b86) scroll_handle_focus_pane

0xccdc,	// (0x00022b44) scroll_handle_pane_g1

0xcd2b,	// (0x00022b93) scroll_handle_pane_g2

0xcd09,	// (0x00022b71) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00025552) scroll_handle_pane_g

0xc9f4,	// (0x0002285c) bg_popup_sub_pane_cp21_ParamLimits

0xc9f4,	// (0x0002285c) bg_popup_sub_pane_cp21

0xcd3f,	// (0x00022ba7) popup_fep_japan_predictive_window_t1_ParamLimits

0xcd3f,	// (0x00022ba7) popup_fep_japan_predictive_window_t1

0xcd56,	// (0x00022bbe) popup_fep_japan_predictive_window_t2_ParamLimits

0xcd56,	// (0x00022bbe) popup_fep_japan_predictive_window_t2

0xcd89,	// (0x00022bf1) popup_fep_japan_predictive_window_t3_ParamLimits

0xcd89,	// (0x00022bf1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00025559) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00025559) popup_fep_japan_predictive_window_t

0xc334,	// (0x0002219c) bg_popup_sub_pane_cp23

0xcdc0,	// (0x00022c28) listscroll_japin_cand_pane

0xcdc8,	// (0x00022c30) popup_fep_japan_candidate_window_t1

0xcdd6,	// (0x00022c3e) candidate_pane_ParamLimits

0xcdd6,	// (0x00022c3e) candidate_pane

0xcde8,	// (0x00022c50) scroll_pane_cp30

0xcdf0,	// (0x00022c58) list_single_popup_jap_candidate_pane_ParamLimits

0xcdf0,	// (0x00022c58) list_single_popup_jap_candidate_pane

0xc334,	// (0x0002219c) list_highlight_pane_cp30

0xce05,	// (0x00022c6d) list_single_popup_jap_candidate_pane_t1

0xce14,	// (0x00022c7c) level_1_signal

0xce21,	// (0x00022c89) level_2_signal

0xce2e,	// (0x00022c96) level_3_signal

0xce3b,	// (0x00022ca3) level_4_signal

0xce48,	// (0x00022cb0) level_5_signal

0xce55,	// (0x00022cbd) level_6_signal

0xce62,	// (0x00022cca) level_7_signal

0xce14,	// (0x00022c7c) level_1_battery

0xce21,	// (0x00022c89) level_2_battery

0xce2e,	// (0x00022c96) level_3_battery

0xce3b,	// (0x00022ca3) level_4_battery

0xce48,	// (0x00022cb0) level_5_battery

0xce55,	// (0x00022cbd) level_6_battery

0xce62,	// (0x00022cca) level_7_battery

0xce87,	// (0x00022cef) list_menu_pane_ParamLimits

0xce87,	// (0x00022cef) list_menu_pane

0xce9d,	// (0x00022d05) scroll_pane_cp25_ParamLimits

0xce9d,	// (0x00022d05) scroll_pane_cp25

0xceb6,	// (0x00022d1e) list_double2_graphic_pane_cp2_ParamLimits

0xceb6,	// (0x00022d1e) list_double2_graphic_pane_cp2

0xceb6,	// (0x00022d1e) list_double2_large_graphic_pane_cp2_ParamLimits

0xceb6,	// (0x00022d1e) list_double2_large_graphic_pane_cp2

0xceb6,	// (0x00022d1e) list_double2_pane_cp2_ParamLimits

0xceb6,	// (0x00022d1e) list_double2_pane_cp2

0xceb6,	// (0x00022d1e) list_double_graphic_pane_cp2_ParamLimits

0xceb6,	// (0x00022d1e) list_double_graphic_pane_cp2

0xceb6,	// (0x00022d1e) list_double_large_graphic_pane_cp2_ParamLimits

0xceb6,	// (0x00022d1e) list_double_large_graphic_pane_cp2

0xceb6,	// (0x00022d1e) list_double_number_pane_cp2_ParamLimits

0xceb6,	// (0x00022d1e) list_double_number_pane_cp2

0xceb6,	// (0x00022d1e) list_double_pane_cp2_ParamLimits

0xceb6,	// (0x00022d1e) list_double_pane_cp2

0x9847,	// (0x0001f6af) list_single_2graphic_pane_cp2_ParamLimits

0x9847,	// (0x0001f6af) list_single_2graphic_pane_cp2

0x9847,	// (0x0001f6af) list_single_graphic_heading_pane_cp2_ParamLimits

0x9847,	// (0x0001f6af) list_single_graphic_heading_pane_cp2

0x9847,	// (0x0001f6af) list_single_graphic_pane_cp2_ParamLimits

0x9847,	// (0x0001f6af) list_single_graphic_pane_cp2

0x9847,	// (0x0001f6af) list_single_heading_pane_cp2_ParamLimits

0x9847,	// (0x0001f6af) list_single_heading_pane_cp2

0xcec6,	// (0x00022d2e) list_single_large_graphic_pane_cp2_ParamLimits

0xcec6,	// (0x00022d2e) list_single_large_graphic_pane_cp2

0x9847,	// (0x0001f6af) list_single_number_heading_pane_cp2_ParamLimits

0x9847,	// (0x0001f6af) list_single_number_heading_pane_cp2

0x9847,	// (0x0001f6af) list_single_number_pane_cp2_ParamLimits

0x9847,	// (0x0001f6af) list_single_number_pane_cp2

0x9847,	// (0x0001f6af) list_single_pane_cp2_ParamLimits

0x9847,	// (0x0001f6af) list_single_pane_cp2

0xcee0,	// (0x00022d48) bg_popup_sub_pane_cp22

0x4f80,	// (0x0001ade8) popup_side_volume_key_window_g1

0x4fa4,	// (0x0001ae0c) popup_side_volume_key_window_t1

0x4fc0,	// (0x0001ae28) volume_small_pane_cp1

0xc382,	// (0x000221ea) bg_popup_sub_pane_cp24_ParamLimits

0xc382,	// (0x000221ea) bg_popup_sub_pane_cp24

0xcef6,	// (0x00022d5e) fep_china_uni_candidate_pane_ParamLimits

0xcef6,	// (0x00022d5e) fep_china_uni_candidate_pane

0xcf0a,	// (0x00022d72) fep_china_uni_entry_pane

0xcf1a,	// (0x00022d82) popup_fep_china_uni_window_g1

0xcf36,	// (0x00022d9e) fep_china_uni_entry_pane_g1

0xcf3e,	// (0x00022da6) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0002558a) fep_china_uni_entry_pane_g

0xcf46,	// (0x00022dae) fep_entry_item_pane

0xcf50,	// (0x00022db8) fep_candidate_item_pane

0xcf58,	// (0x00022dc0) fep_china_uni_candidate_pane_g1

0xcf60,	// (0x00022dc8) fep_china_uni_candidate_pane_g2

0xcf68,	// (0x00022dd0) fep_china_uni_candidate_pane_g3

0xcf70,	// (0x00022dd8) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0002558f) fep_china_uni_candidate_pane_g

0xc32a,	// (0x00022192) fep_entry_item_pane_g1

0xcf78,	// (0x00022de0) fep_entry_item_pane_t1_ParamLimits

0xcf78,	// (0x00022de0) fep_entry_item_pane_t1

0xcf8e,	// (0x00022df6) fep_candidate_item_pane_t1_ParamLimits

0xcf8e,	// (0x00022df6) fep_candidate_item_pane_t1

0xcfa3,	// (0x00022e0b) fep_candidate_item_pane_t2_ParamLimits

0xcfa3,	// (0x00022e0b) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00025598) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00025598) fep_candidate_item_pane_t

0xc3a0,	// (0x00022208) list_highlight_pane_cp31_ParamLimits

0xc3a0,	// (0x00022208) list_highlight_pane_cp31

0xcfb5,	// (0x00022e1d) level_1_signal_lsc

0xcfbe,	// (0x00022e26) level_2_signal_lsc

0xcfc7,	// (0x00022e2f) level_3_signal_lsc

0xcfd0,	// (0x00022e38) level_4_signal_lsc

0xcfd9,	// (0x00022e41) level_5_signal_lsc

0xcfe2,	// (0x00022e4a) level_6_signal_lsc

0xcfeb,	// (0x00022e53) level_7_signal_lsc

0xcfeb,	// (0x00022e53) level_1_battery_lsc

0xcff4,	// (0x00022e5c) level_2_battery_lsc

0xcffd,	// (0x00022e65) level_3_battery_lsc

0xd006,	// (0x00022e6e) level_4_battery_lsc

0xd00f,	// (0x00022e77) level_5_battery_lsc

0xd018,	// (0x00022e80) level_6_battery_lsc

0xcfb5,	// (0x00022e1d) level_7_battery_lsc

0xd021,	// (0x00022e89) scroll_handle_focus_pane_g1

0xd02a,	// (0x00022e92) scroll_handle_focus_pane_g2

0xd033,	// (0x00022e9b) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0002559d) scroll_handle_focus_pane_g

0x4026,	// (0x00019e8e) list_single_2graphic_pane_g1_ParamLimits

0x4026,	// (0x00019e8e) list_single_2graphic_pane_g1

0x8a25,	// (0x0001e88d) list_single_2graphic_pane_g2_ParamLimits

0x8a25,	// (0x0001e88d) list_single_2graphic_pane_g2

0x40d1,	// (0x00019f39) list_single_2graphic_pane_g3_ParamLimits

0x40d1,	// (0x00019f39) list_single_2graphic_pane_g3

0x8eac,	// (0x0001ed14) list_single_2graphic_pane_g4_ParamLimits

0x8eac,	// (0x0001ed14) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x000255a4) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x000255a4) list_single_2graphic_pane_g

0x8eb8,	// (0x0001ed20) list_single_2graphic_pane_t1_ParamLimits

0x8eb8,	// (0x0001ed20) list_single_2graphic_pane_t1

0x8ee6,	// (0x0001ed4e) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8ee6,	// (0x0001ed4e) list_double2_graphic_large_graphic_pane_g1

0x8a84,	// (0x0001e8ec) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x8a84,	// (0x0001e8ec) list_double2_graphic_large_graphic_pane_g2

0x8a95,	// (0x0001e8fd) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x8a95,	// (0x0001e8fd) list_double2_graphic_large_graphic_pane_g3

0x8ef6,	// (0x0001ed5e) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8ef6,	// (0x0001ed5e) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x000255ad) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x000255ad) list_double2_graphic_large_graphic_pane_g

0x8f02,	// (0x0001ed6a) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8f02,	// (0x0001ed6a) list_double2_graphic_large_graphic_pane_t1

0x8f18,	// (0x0001ed80) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8f18,	// (0x0001ed80) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x000255b6) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x000255b6) list_double2_graphic_large_graphic_pane_t

0xd156,	// (0x00022fbe) popup_fast_swap_window_ParamLimits

0xd156,	// (0x00022fbe) popup_fast_swap_window

0xd172,	// (0x00022fda) popup_side_volume_key_window

0xd18c,	// (0x00022ff4) stacon_top_pane

0xd196,	// (0x00022ffe) status_pane_ParamLimits

0xd196,	// (0x00022ffe) status_pane

0x98d3,	// (0x0001f73b) status_small_pane

0xc334,	// (0x0002219c) control_pane

0xc334,	// (0x0002219c) stacon_bottom_pane

0xc92e,	// (0x00022796) scroll_pane_cp121

0xc925,	// (0x0002278d) set_content_pane

0xd03c,	// (0x00022ea4) bg_active_tab_pane_g1_cp1

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp1

0xd04e,	// (0x00022eb6) bg_active_tab_pane_g3_cp1

0xd03c,	// (0x00022ea4) bg_passive_tab_pane_g1_cp1

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp1

0xd04e,	// (0x00022eb6) bg_passive_tab_pane_g3_cp1

0xd057,	// (0x00022ebf) bg_active_tab_pane_g1_cp2

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp2

0xd060,	// (0x00022ec8) bg_active_tab_pane_g3_cp2

0xd057,	// (0x00022ebf) bg_passive_tab_pane_g1_cp2

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp2

0xd060,	// (0x00022ec8) bg_passive_tab_pane_g3_cp2

0xd069,	// (0x00022ed1) bg_active_tab_pane_g1_cp3

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp3

0xd072,	// (0x00022eda) bg_active_tab_pane_g3_cp3

0xd069,	// (0x00022ed1) bg_passive_tab_pane_g1_cp3

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp3

0xd072,	// (0x00022eda) bg_passive_tab_pane_g3_cp3

0xd07b,	// (0x00022ee3) bg_active_tab_pane_g1_cp4

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp4

0xd084,	// (0x00022eec) bg_active_tab_pane_g3_cp4

0xd07b,	// (0x00022ee3) bg_passive_tab_pane_g1_cp4

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp4

0xd084,	// (0x00022eec) bg_passive_tab_pane_g3_cp4

0xd0cb,	// (0x00022f33) bg_active_tab_pane_g1_cp5

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp5

0xd0d4,	// (0x00022f3c) bg_active_tab_pane_g3_cp5

0xd0cb,	// (0x00022f33) bg_passive_tab_pane_g1_cp5

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp5

0xd0d4,	// (0x00022f3c) bg_passive_tab_pane_g3_cp5

0xe5c5,	// (0x0002442d) list_set_graphic_pane_ParamLimits

0xe5c5,	// (0x0002442d) list_set_graphic_pane

0xc334,	// (0x0002219c) bg_set_opt_pane_cp4

0xd0dd,	// (0x00022f45) list_set_graphic_pane_g1_ParamLimits

0xd0dd,	// (0x00022f45) list_set_graphic_pane_g1

0xd0e9,	// (0x00022f51) list_set_graphic_pane_g2_ParamLimits

0xd0e9,	// (0x00022f51) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x000255bb) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x000255bb) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00025939) volume_small_pane_cp_g

0xd10b,	// (0x00022f73) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd10b,	// (0x00022f73) list_double2_large_graphic_pane_g1_cp2

0xd117,	// (0x00022f7f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd117,	// (0x00022f7f) list_double2_large_graphic_pane_g2_cp2

0xd126,	// (0x00022f8e) list_double2_large_graphic_pane_g3_cp2

0xd12e,	// (0x00022f96) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xd12e,	// (0x00022f96) list_double2_large_graphic_pane_t1_cp2

0xd144,	// (0x00022fac) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xd144,	// (0x00022fac) list_double2_large_graphic_pane_t2_cp2

0xe6ab,	// (0x00024513) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe6ab,	// (0x00024513) list_double_large_graphic_pane_g1_cp2

0xe6bc,	// (0x00024524) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe6bc,	// (0x00024524) list_double_large_graphic_pane_g2_cp2

0xd2ac,	// (0x00023114) list_double_large_graphic_pane_g3_cp2

0xe6cb,	// (0x00024533) list_double_large_graphic_pane_g4_cp

0xe6d3,	// (0x0002453b) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xe6d3,	// (0x0002453b) list_double_large_graphic_pane_t1_cp2

0xe6ea,	// (0x00024552) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xe6ea,	// (0x00024552) list_double_large_graphic_pane_t2_cp2

0xd1a4,	// (0x0002300c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd1a4,	// (0x0002300c) list_double2_graphic_pane_g1_cp2

0xd1b0,	// (0x00023018) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd1b0,	// (0x00023018) list_double2_graphic_pane_g2_cp2

0xd1bf,	// (0x00023027) list_double2_graphic_pane_g3_cp2

0xd1c7,	// (0x0002302f) list_double2_graphic_pane_t1_cp2_ParamLimits

0xd1c7,	// (0x0002302f) list_double2_graphic_pane_t1_cp2

0xd1dd,	// (0x00023045) list_double2_graphic_pane_t2_cp2_ParamLimits

0xd1dd,	// (0x00023045) list_double2_graphic_pane_t2_cp2

0xd1ef,	// (0x00023057) list_single_number_heading_pane_g1_cp2_ParamLimits

0xd1ef,	// (0x00023057) list_single_number_heading_pane_g1_cp2

0xd1fb,	// (0x00023063) list_single_number_heading_pane_g2_cp2

0xd203,	// (0x0002306b) list_single_number_heading_pane_t1_cp2_ParamLimits

0xd203,	// (0x0002306b) list_single_number_heading_pane_t1_cp2

0xd219,	// (0x00023081) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd219,	// (0x00023081) list_single_number_heading_pane_t2_cp2

0xd22b,	// (0x00023093) list_single_number_heading_pane_t3_cp2_ParamLimits

0xd22b,	// (0x00023093) list_single_number_heading_pane_t3_cp2

0xd1ef,	// (0x00023057) list_single_heading_pane_g1_cp2_ParamLimits

0xd1ef,	// (0x00023057) list_single_heading_pane_g1_cp2

0xd1fb,	// (0x00023063) list_single_heading_pane_g2_cp2

0xd203,	// (0x0002306b) list_single_heading_pane_t1_cp2_ParamLimits

0xd203,	// (0x0002306b) list_single_heading_pane_t1_cp2

0xe468,	// (0x000242d0) list_single_heading_pane_t2_cp2_ParamLimits

0xe468,	// (0x000242d0) list_single_heading_pane_t2_cp2

0xe3b0,	// (0x00024218) list_double_graphic_pane_g1_cp2_ParamLimits

0xe3b0,	// (0x00024218) list_double_graphic_pane_g1_cp2

0xe3bc,	// (0x00024224) list_double_graphic_pane_g2_cp2_ParamLimits

0xe3bc,	// (0x00024224) list_double_graphic_pane_g2_cp2

0xe3cb,	// (0x00024233) list_double_graphic_pane_g3_cp2

0xe3d3,	// (0x0002423b) list_double_graphic_pane_t1_cp2_ParamLimits

0xe3d3,	// (0x0002423b) list_double_graphic_pane_t1_cp2

0xe3e9,	// (0x00024251) list_double_graphic_pane_t2_cp2_ParamLimits

0xe3e9,	// (0x00024251) list_double_graphic_pane_t2_cp2

0xd2a0,	// (0x00023108) list_double_number_pane_g1_cp2_ParamLimits

0xd2a0,	// (0x00023108) list_double_number_pane_g1_cp2

0xd2ac,	// (0x00023114) list_double_number_pane_g2_cp2

0xe376,	// (0x000241de) list_double_number_pane_t1_cp2_ParamLimits

0xe376,	// (0x000241de) list_double_number_pane_t1_cp2

0xe388,	// (0x000241f0) list_double_number_pane_t2_cp2_ParamLimits

0xe388,	// (0x000241f0) list_double_number_pane_t2_cp2

0xe39e,	// (0x00024206) list_double_number_pane_t3_cp2_ParamLimits

0xe39e,	// (0x00024206) list_double_number_pane_t3_cp2

0xe2d9,	// (0x00024141) list_single_graphic_pane_g1_cp2_ParamLimits

0xe2d9,	// (0x00024141) list_single_graphic_pane_g1_cp2

0xd302,	// (0x0002316a) list_single_graphic_pane_g2_cp2_ParamLimits

0xd302,	// (0x0002316a) list_single_graphic_pane_g2_cp2

0xd30e,	// (0x00023176) list_single_graphic_pane_g3_cp2

0xe2b1,	// (0x00024119) list_single_graphic_pane_t1_cp2_ParamLimits

0xe2b1,	// (0x00024119) list_single_graphic_pane_t1_cp2

0xd302,	// (0x0002316a) list_single_number_pane_g1_cp2_ParamLimits

0xd302,	// (0x0002316a) list_single_number_pane_g1_cp2

0xd30e,	// (0x00023176) list_single_number_pane_g2_cp2

0xe2b1,	// (0x00024119) list_single_number_pane_t1_cp2_ParamLimits

0xe2b1,	// (0x00024119) list_single_number_pane_t1_cp2

0xe2c7,	// (0x0002412f) list_single_number_pane_t2_cp2_ParamLimits

0xe2c7,	// (0x0002412f) list_single_number_pane_t2_cp2

0xd117,	// (0x00022f7f) list_double2_pane_g1_cp2_ParamLimits

0xd117,	// (0x00022f7f) list_double2_pane_g1_cp2

0xd126,	// (0x00022f8e) list_double2_pane_g2_cp2

0xd278,	// (0x000230e0) list_double2_pane_t1_cp2_ParamLimits

0xd278,	// (0x000230e0) list_double2_pane_t1_cp2

0xd28e,	// (0x000230f6) list_double2_pane_t2_cp2_ParamLimits

0xd28e,	// (0x000230f6) list_double2_pane_t2_cp2

0xd2a0,	// (0x00023108) list_double_pane_g1_cp2_ParamLimits

0xd2a0,	// (0x00023108) list_double_pane_g1_cp2

0xd2ac,	// (0x00023114) list_double_pane_g2_cp2

0xd2b4,	// (0x0002311c) list_double_pane_t1_cp2_ParamLimits

0xd2b4,	// (0x0002311c) list_double_pane_t1_cp2

0xd2ca,	// (0x00023132) list_double_pane_t2_cp2_ParamLimits

0xd2ca,	// (0x00023132) list_double_pane_t2_cp2

0xd2f2,	// (0x0002315a) list_single_pane_cp2_g3

0xd302,	// (0x0002316a) list_single_pane_g1_cp2_ParamLimits

0xd302,	// (0x0002316a) list_single_pane_g1_cp2

0xd30e,	// (0x00023176) list_single_pane_g2_cp2

0xd316,	// (0x0002317e) list_single_pane_t1_cp2_ParamLimits

0xd316,	// (0x0002317e) list_single_pane_t1_cp2

0xd32e,	// (0x00023196) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd32e,	// (0x00023196) list_single_large_graphic_pane_g1_cp2

0xd33a,	// (0x000231a2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xd33a,	// (0x000231a2) list_single_large_graphic_pane_g2_cp2

0xd346,	// (0x000231ae) list_single_large_graphic_pane_g3_cp2

0xd34e,	// (0x000231b6) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xd34e,	// (0x000231b6) list_single_large_graphic_pane_g4_cp1

0xd368,	// (0x000231d0) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xd368,	// (0x000231d0) list_single_large_graphic_pane_t1_cp2

0xe27d,	// (0x000240e5) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xe27d,	// (0x000240e5) list_single_graphic_heading_pane_g1_cp2

0xe24c,	// (0x000240b4) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe24c,	// (0x000240b4) list_single_graphic_heading_pane_g4_cp2

0xd30e,	// (0x00023176) list_single_graphic_heading_pane_g5_cp2

0xe289,	// (0x000240f1) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xe289,	// (0x000240f1) list_single_graphic_heading_pane_t1_cp2

0xe29f,	// (0x00024107) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe29f,	// (0x00024107) list_single_graphic_heading_pane_t2_cp2

0xe240,	// (0x000240a8) list_single_2graphic_pane_g1_cp2_ParamLimits

0xe240,	// (0x000240a8) list_single_2graphic_pane_g1_cp2

0xe24c,	// (0x000240b4) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe24c,	// (0x000240b4) list_single_2graphic_pane_g2_cp2

0xd30e,	// (0x00023176) list_single_2graphic_pane_g3_cp2

0xe25b,	// (0x000240c3) list_single_2graphic_pane_g4_cp2_ParamLimits

0xe25b,	// (0x000240c3) list_single_2graphic_pane_g4_cp2

0xe267,	// (0x000240cf) list_single_2graphic_pane_t1_cp2_ParamLimits

0xe267,	// (0x000240cf) list_single_2graphic_pane_t1_cp2

0xc32a,	// (0x00022192) list_highlight_pane_g10_cp1

0xde52,	// (0x00023cba) list_highlight_pane_g1_cp1

0xde5a,	// (0x00023cc2) list_highlight_pane_g2_cp1

0xde62,	// (0x00023cca) list_highlight_pane_g3_cp1

0xde6a,	// (0x00023cd2) list_highlight_pane_g4_cp1

0xde72,	// (0x00023cda) list_highlight_pane_g5_cp1

0xde7a,	// (0x00023ce2) list_highlight_pane_g6_cp1

0xde82,	// (0x00023cea) list_highlight_pane_g7_cp1

0xde8a,	// (0x00023cf2) list_highlight_pane_g8_cp1

0xde92,	// (0x00023cfa) list_highlight_pane_g9_cp1

0xa661,	// (0x000204c9) form_field_slider_pane_t3

0xa66f,	// (0x000204d7) form_field_slider_pane_t4

0xdd96,	// (0x00023bfe) slider_form_pane_ParamLimits

0xdd96,	// (0x00023bfe) slider_form_pane

0xc334,	// (0x0002219c) control_abbreviations

0xc334,	// (0x0002219c) control_conventions

0xc334,	// (0x0002219c) control_definitions

0xc334,	// (0x0002219c) format_table_attribute

0xe4b2,	// (0x0002431a) bg_popup_preview_window_pane_g9

0xc334,	// (0x0002219c) format_table_data2

0xc334,	// (0x0002219c) format_table_data3

0xc334,	// (0x0002219c) format_table_data_example

0x0008,

0xc334,	// (0x0002219c) intro_purpose

0xf8e3,	// (0x0002574b) bg_popup_preview_window_pane_g

0xc334,	// (0x0002219c) texts_category

0xc334,	// (0x0002219c) texts_graphics

0xd37e,	// (0x000231e6) text_digital

0xd38d,	// (0x000231f5) text_primary

0xd39c,	// (0x00023204) text_primary_small

0xd3ab,	// (0x00023213) text_secondary

0xd3ba,	// (0x00023222) text_title

0xe982,	// (0x000247ea) bg_passive_tab_pane_g1_cp3_srt

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp3_srt

0xe98b,	// (0x000247f3) bg_passive_tab_pane_g3_cp3_srt

0xc382,	// (0x000221ea) bg_active_tab_pane_cp3_srt_ParamLimits

0xc382,	// (0x000221ea) bg_active_tab_pane_cp3_srt

0xe994,	// (0x000247fc) tabs_4_active_pane_srt_g1

0xaa04,	// (0x0002086c) tabs_4_active_pane_srt_t1_ParamLimits

0xaa04,	// (0x0002086c) tabs_4_active_pane_srt_t1

0xe982,	// (0x000247ea) bg_active_tab_pane_g1_cp3_copy1

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp3_copy1

0xe98b,	// (0x000247f3) bg_active_tab_pane_g3_cp3_copy1

0xc3a0,	// (0x00022208) tabs_2_long_active_pane_srt_ParamLimits

0xc3a0,	// (0x00022208) tabs_2_long_active_pane_srt

0xc3a0,	// (0x00022208) tabs_2_long_passive_pane_srt_ParamLimits

0xc3a0,	// (0x00022208) tabs_2_long_passive_pane_srt

0xcab4,	// (0x0002291c) bg_passive_tab_pane_cp4_srt_ParamLimits

0xcab4,	// (0x0002291c) bg_passive_tab_pane_cp4_srt

0xe89c,	// (0x00024704) bg_passive_tab_pane_g1_cp4_srt

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp4_srt

0xe8a5,	// (0x0002470d) bg_passive_tab_pane_g3_cp4_srt

0xc3a0,	// (0x00022208) bg_active_tab_pane_cp4_srt_ParamLimits

0xc3a0,	// (0x00022208) bg_active_tab_pane_cp4_srt

0xa7fc,	// (0x00020664) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa7fc,	// (0x00020664) tabs_2_long_active_pane_srt_t1

0xe89c,	// (0x00024704) bg_active_tab_pane_g1_cp4_srt

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp4_srt

0xe8a5,	// (0x0002470d) bg_active_tab_pane_g3_cp4_srt

0xc382,	// (0x000221ea) tabs_3_long_active_pane_srt_ParamLimits

0xc382,	// (0x000221ea) tabs_3_long_active_pane_srt

0xc382,	// (0x000221ea) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xc382,	// (0x000221ea) tabs_3_long_passive_pane_cp_srt

0xc382,	// (0x000221ea) tabs_3_long_passive_pane_srt_ParamLimits

0xc382,	// (0x000221ea) tabs_3_long_passive_pane_srt

0xcab4,	// (0x0002291c) bg_passive_tab_pane_cp5_srt_ParamLimits

0xcab4,	// (0x0002291c) bg_passive_tab_pane_cp5_srt

0xd0cb,	// (0x00022f33) bg_passive_tab_pane_g1_cp5_srt

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp5_srt

0xd0d4,	// (0x00022f3c) bg_passive_tab_pane_g3_cp5_srt

0xc3a0,	// (0x00022208) bg_active_tab_pane_cp5_srt_ParamLimits

0xc3a0,	// (0x00022208) bg_active_tab_pane_cp5_srt

0xa7e6,	// (0x0002064e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa7e6,	// (0x0002064e) tabs_3_long_active_pane_srt_t1

0xd0cb,	// (0x00022f33) bg_active_tab_pane_g1_cp5_srt

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp5_srt

0xd0d4,	// (0x00022f3c) bg_active_tab_pane_g3_cp5_srt

0xe88e,	// (0x000246f6) navi_text_pane_srt_t1

0xe886,	// (0x000246ee) navi_icon_pane_srt_g1

0xd4d2,	// (0x0002333a) midp_editing_number_pane_srt

0xd3c9,	// (0x00023231) midp_ticker_pane_srt

0xd4da,	// (0x00023342) midp_ticker_pane_srt_g1

0xd4e2,	// (0x0002334a) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x000255da) midp_ticker_pane_srt_g

0xd4ea,	// (0x00023352) midp_ticker_pane_srt_t1

0xe877,	// (0x000246df) midp_editing_number_pane_t1_copy1

0x98dc,	// (0x0001f744) listscroll_midp_pane

0x98dc,	// (0x0001f744) midp_form_pane

0xd3d1,	// (0x00023239) midp_info_popup_window_ParamLimits

0xd3d1,	// (0x00023239) midp_info_popup_window

0xc9f4,	// (0x0002285c) bg_popup_sub_pane_cp50_ParamLimits

0xc9f4,	// (0x0002285c) bg_popup_sub_pane_cp50

0xdabf,	// (0x00023927) listscroll_midp_info_pane_ParamLimits

0xdabf,	// (0x00023927) listscroll_midp_info_pane

0xda97,	// (0x000238ff) listscroll_form_midp_pane_ParamLimits

0xda97,	// (0x000238ff) listscroll_form_midp_pane

0xdaab,	// (0x00023913) scroll_bar_cp050

0xda97,	// (0x000238ff) list_midp_pane

0xf1ff,	// (0x00025067) signal_pane_g2_cp

0xd9d1,	// (0x00023839) listscroll_midp_info_pane_t1_ParamLimits

0xd9d1,	// (0x00023839) listscroll_midp_info_pane_t1

0xd9e9,	// (0x00023851) listscroll_midp_info_pane_t2_ParamLimits

0xd9e9,	// (0x00023851) listscroll_midp_info_pane_t2

0xda27,	// (0x0002388f) listscroll_midp_info_pane_t3_ParamLimits

0xda27,	// (0x0002388f) listscroll_midp_info_pane_t3

0xda61,	// (0x000238c9) listscroll_midp_info_pane_t4_ParamLimits

0xda61,	// (0x000238c9) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x00025686) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x00025686) listscroll_midp_info_pane_t

0xca74,	// (0x000228dc) scroll_pane_cp21

0xd975,	// (0x000237dd) form_midp_field_choice_group_pane

0xd97e,	// (0x000237e6) form_midp_field_text_pane

0xd9b7,	// (0x0002381f) form_midp_field_time_pane

0xd9bf,	// (0x00023827) form_midp_gauge_slider_pane

0xd9c8,	// (0x00023830) form_midp_gauge_wait_pane

0xc334,	// (0x0002219c) form_midp_image_pane

0x8f2a,	// (0x0001ed92) list_single_midp_pane_ParamLimits

0x8f2a,	// (0x0001ed92) list_single_midp_pane

0xa642,	// (0x000204aa) form_midp_field_text_pane_t1

0xd800,	// (0x00023668) input_focus_pane_cp050

0xd964,	// (0x000237cc) list_midp_form_text_pane

0xd933,	// (0x0002379b) form_midp_field_choice_group_pane_t1

0xd941,	// (0x000237a9) input_focus_pane_cp051

0xd955,	// (0x000237bd) list_midp_choice_pane

0xc334,	// (0x0002219c) status_idle_pane

0xd917,	// (0x0002377f) form_midp_field_time_pane_t1

0xc32a,	// (0x00022192) wait_anim_pane_g2_copy1

0xd925,	// (0x0002378d) form_midp_field_time_pane_t2

0x0001,

0xd43c,	// (0x000232a4) aid_navinavi_width_2_pane

0xf819,	// (0x00025681) form_midp_field_time_pane_t

0xc334,	// (0x0002219c) input_focus_pane_cp052

0xc334,	// (0x0002219c) bg_input_focus_pane_cp040

0xd8f3,	// (0x0002375b) form_midp_gauge_slider_pane_t1

0xd901,	// (0x00023769) form_midp_gauge_slider_pane_t2

0xa626,	// (0x0002048e) form_midp_gauge_slider_pane_t3

0xa634,	// (0x0002049c) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x00025678) form_midp_gauge_slider_pane_t

0xd90f,	// (0x00023777) form_midp_slider_pane

0xc3a0,	// (0x00022208) bg_input_focus_pane_cp041_ParamLimits

0xc3a0,	// (0x00022208) bg_input_focus_pane_cp041

0xd8c3,	// (0x0002372b) form_midp_gauge_wait_pane_t1_ParamLimits

0xd8c3,	// (0x0002372b) form_midp_gauge_wait_pane_t1

0xd8d5,	// (0x0002373d) form_midp_gauge_wait_pane_t2_ParamLimits

0xd8d5,	// (0x0002373d) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x00025673) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x00025673) form_midp_gauge_wait_pane_t

0xd8e7,	// (0x0002374f) form_midp_wait_pane_ParamLimits

0xd8e7,	// (0x0002374f) form_midp_wait_pane

0xd88d,	// (0x000236f5) form_midp_image_pane_g1

0xd896,	// (0x000236fe) form_midp_image_pane_t1

0xd8a5,	// (0x0002370d) form_midp_image_pane_t2

0xd8b4,	// (0x0002371c) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x0002566c) form_midp_image_pane_t

0xd884,	// (0x000236ec) list_single_midp_pane_g1

0x41b5,	// (0x0001a01d) list_single_midp_pane_t1

0xa614,	// (0x0002047c) list_midp_form_item_pane_ParamLimits

0xa614,	// (0x0002047c) list_midp_form_item_pane

0xd3e4,	// (0x0002324c) list_midp_form_item_pane_t1

0xd3f3,	// (0x0002325b) midp_ticker_pane_g1

0xd3ff,	// (0x00023267) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x000255c0) midp_ticker_pane_g

0xd40b,	// (0x00023273) midp_ticker_pane_t1

0xe90f,	// (0x00024777) midp_editing_number_pane_t1

0xe8ed,	// (0x00024755) midp_editing_number_pane

0xe8fc,	// (0x00024764) midp_ticker_pane

0xe867,	// (0x000246cf) ai_message_heading_pane

0xc334,	// (0x0002219c) bg_popup_window_pane_cp14

0xe86f,	// (0x000246d7) listscroll_ai_message_pane

0xe7f1,	// (0x00024659) ai_message_heading_pane_g1_ParamLimits

0xe7f1,	// (0x00024659) ai_message_heading_pane_g1

0xe7fd,	// (0x00024665) ai_message_heading_pane_g2_ParamLimits

0xe7fd,	// (0x00024665) ai_message_heading_pane_g2

0xe809,	// (0x00024671) ai_message_heading_pane_g3_ParamLimits

0xe809,	// (0x00024671) ai_message_heading_pane_g3

0xe815,	// (0x0002467d) ai_message_heading_pane_g4_ParamLimits

0xe815,	// (0x0002467d) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x000257ad) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x000257ad) ai_message_heading_pane_g

0xe821,	// (0x00024689) ai_message_heading_pane_t1_ParamLimits

0xe821,	// (0x00024689) ai_message_heading_pane_t1

0xe83b,	// (0x000246a3) ai_message_heading_pane_t2_ParamLimits

0xe83b,	// (0x000246a3) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x000257b6) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x000257b6) ai_message_heading_pane_t

0xe84d,	// (0x000246b5) bg_popup_heading_pane_cp1_ParamLimits

0xe84d,	// (0x000246b5) bg_popup_heading_pane_cp1

0xe7df,	// (0x00024647) list_ai_message_pane_ParamLimits

0xe7df,	// (0x00024647) list_ai_message_pane

0xca74,	// (0x000228dc) scroll_pane_cp10

0xe77b,	// (0x000245e3) list_ai_message_pane_g1

0xe783,	// (0x000245eb) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x0002578a) list_ai_message_pane_g

0xe78b,	// (0x000245f3) list_ai_message_pane_t1_ParamLimits

0xe78b,	// (0x000245f3) list_ai_message_pane_t1

0xe7a0,	// (0x00024608) list_ai_message_pane_t2_ParamLimits

0xe7a0,	// (0x00024608) list_ai_message_pane_t2

0xe7b5,	// (0x0002461d) list_ai_message_pane_t3_ParamLimits

0xe7b5,	// (0x0002461d) list_ai_message_pane_t3

0xe7ca,	// (0x00024632) list_ai_message_pane_t4_ParamLimits

0xe7ca,	// (0x00024632) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x0002578f) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x0002578f) list_ai_message_pane_t

0xa78b,	// (0x000205f3) cell_ai_soft_ind_pane_ParamLimits

0xa78b,	// (0x000205f3) cell_ai_soft_ind_pane

0xd41d,	// (0x00023285) cell_ai_soft_ind_pane_g1_ParamLimits

0xd41d,	// (0x00023285) cell_ai_soft_ind_pane_g1

0xc334,	// (0x0002219c) grid_highlight_cp1

0xd42a,	// (0x00023292) text_secondary_cp56_ParamLimits

0xd42a,	// (0x00023292) text_secondary_cp56

0xe750,	// (0x000245b8) example_general_pane_ParamLimits

0xe750,	// (0x000245b8) example_general_pane

0xe75c,	// (0x000245c4) example_parent_pane_g1_ParamLimits

0xe75c,	// (0x000245c4) example_parent_pane_g1

0xe768,	// (0x000245d0) example_parent_pane_t1_ParamLimits

0xe768,	// (0x000245d0) example_parent_pane_t1

0x9edf,	// (0x0001fd47) popup_preview_text_window_ParamLimits

0x9edf,	// (0x0001fd47) popup_preview_text_window

0xd2fa,	// (0x00023162) list_single_pane_cp2_g4

0xc57b,	// (0x000223e3) bg_popup_preview_window_pane_ParamLimits

0xc57b,	// (0x000223e3) bg_popup_preview_window_pane

0xe4ba,	// (0x00024322) popup_preview_text_window_t1_ParamLimits

0xe4ba,	// (0x00024322) popup_preview_text_window_t1

0xe4d8,	// (0x00024340) popup_preview_text_window_t2_ParamLimits

0xe4d8,	// (0x00024340) popup_preview_text_window_t2

0xe521,	// (0x00024389) popup_preview_text_window_t3_ParamLimits

0xe521,	// (0x00024389) popup_preview_text_window_t3

0xe566,	// (0x000243ce) popup_preview_text_window_t4_ParamLimits

0xe566,	// (0x000243ce) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0002575e) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0002575e) popup_preview_text_window_t

0xe631,	// (0x00024499) scroll_pane_cp11

0xd774,	// (0x000235dc) bg_popup_preview_window_pane_g1

0xe47a,	// (0x000242e2) bg_popup_preview_window_pane_g2

0xe482,	// (0x000242ea) bg_popup_preview_window_pane_g3

0xe48a,	// (0x000242f2) bg_popup_preview_window_pane_g4

0xe492,	// (0x000242fa) bg_popup_preview_window_pane_g5

0xe49a,	// (0x00024302) bg_popup_preview_window_pane_g6

0xe4a2,	// (0x0002430a) bg_popup_preview_window_pane_g7

0xe4aa,	// (0x00024312) bg_popup_preview_window_pane_g8

0x4926,	// (0x0001a78e) aid_popup_width_pane

0x9e61,	// (0x0001fcc9) popup_midp_note_alarm_window_ParamLimits

0x9e61,	// (0x0001fcc9) popup_midp_note_alarm_window

0xc93f,	// (0x000227a7) data_form_pane_ParamLimits

0x8de1,	// (0x0001ec49) form_field_data_pane_g1

0x8deb,	// (0x0001ec53) form_field_data_pane_t1_ParamLimits

0xc94b,	// (0x000227b3) input_focus_pane_ParamLimits

0x3ebd,	// (0x00019d25) data_form_wide_pane_ParamLimits

0x3ece,	// (0x00019d36) form_field_data_wide_pane_g1

0x3eda,	// (0x00019d42) form_field_data_wide_pane_t1_ParamLimits

0xc76b,	// (0x000225d3) input_focus_pane_cp6_ParamLimits

0x973a,	// (0x0001f5a2) input_popup_find_pane_g1_ParamLimits

0x973a,	// (0x0001f5a2) input_popup_find_pane_g1

0x4e3a,	// (0x0001aca2) aid_navi_side_left_pane

0x4e4b,	// (0x0001acb3) aid_navi_side_right_pane

0xdf23,	// (0x00023d8b) bg_popup_window_pane_cp30_ParamLimits

0xdf23,	// (0x00023d8b) bg_popup_window_pane_cp30

0xdf9d,	// (0x00023e05) popup_midp_note_alarm_window_g1_ParamLimits

0xdf9d,	// (0x00023e05) popup_midp_note_alarm_window_g1

0xdfcd,	// (0x00023e35) popup_midp_note_alarm_window_t1_ParamLimits

0xdfcd,	// (0x00023e35) popup_midp_note_alarm_window_t1

0xe06e,	// (0x00023ed6) popup_midp_note_alarm_window_t2_ParamLimits

0xe06e,	// (0x00023ed6) popup_midp_note_alarm_window_t2

0xe11c,	// (0x00023f84) popup_midp_note_alarm_window_t3_ParamLimits

0xe11c,	// (0x00023f84) popup_midp_note_alarm_window_t3

0xe144,	// (0x00023fac) popup_midp_note_alarm_window_t4_ParamLimits

0xe144,	// (0x00023fac) popup_midp_note_alarm_window_t4

0xe164,	// (0x00023fcc) popup_midp_note_alarm_window_t5_ParamLimits

0xe164,	// (0x00023fcc) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x000256fb) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x000256fb) popup_midp_note_alarm_window_t

0xe210,	// (0x00024078) wait_bar_pane_cp1_ParamLimits

0xe210,	// (0x00024078) wait_bar_pane_cp1

0xc334,	// (0x0002219c) wait_anim_pane_copy1

0xc334,	// (0x0002219c) wait_border_pane_copy1

0xdc63,	// (0x00023acb) wait_border_pane_g1_copy1

0x3ef4,	// (0x00019d5c) form_field_popup_pane_g1

0x8e03,	// (0x0001ec6b) form_field_popup_pane_t1_ParamLimits

0xc94b,	// (0x000227b3) input_focus_pane_cp7_ParamLimits

0xc979,	// (0x000227e1) list_form_pane_ParamLimits

0x3f14,	// (0x00019d7c) form_field_popup_wide_pane_g1

0x3f1c,	// (0x00019d84) form_field_popup_wide_pane_t1_ParamLimits

0xc94b,	// (0x000227b3) input_focus_pane_cp8_ParamLimits

0xc985,	// (0x000227ed) list_form_wide_pane_ParamLimits

0xe9bb,	// (0x00024823) aid_size_cell_graphic_pane

0x8e7e,	// (0x0001ece6) data_form_pane_t1_ParamLimits

0x8f50,	// (0x0001edb8) data_form_wide_pane_t1_ParamLimits

0xa247,	// (0x000200af) bg_status_flat_pane

0x93b6,	// (0x0001f21e) title_pane_t1_ParamLimits

0xc34a,	// (0x000221b2) title_pane_t2_ParamLimits

0xc370,	// (0x000221d8) title_pane_t3_ParamLimits

0xf557,	// (0x000253bf) title_pane_t_ParamLimits

0xce14,	// (0x00022c7c) level_1_signal_ParamLimits

0xce21,	// (0x00022c89) level_2_signal_ParamLimits

0xce2e,	// (0x00022c96) level_3_signal_ParamLimits

0xce3b,	// (0x00022ca3) level_4_signal_ParamLimits

0xce48,	// (0x00022cb0) level_5_signal_ParamLimits

0xce55,	// (0x00022cbd) level_6_signal_ParamLimits

0xce62,	// (0x00022cca) level_7_signal_ParamLimits

0xce14,	// (0x00022c7c) level_1_battery_ParamLimits

0xce21,	// (0x00022c89) level_2_battery_ParamLimits

0xce2e,	// (0x00022c96) level_3_battery_ParamLimits

0xce3b,	// (0x00022ca3) level_4_battery_ParamLimits

0xce48,	// (0x00022cb0) level_5_battery_ParamLimits

0xce55,	// (0x00022cbd) level_6_battery_ParamLimits

0xce62,	// (0x00022cca) level_7_battery_ParamLimits

0xde52,	// (0x00023cba) bg_status_flat_pane_g1

0xde5a,	// (0x00023cc2) bg_status_flat_pane_g2

0xde62,	// (0x00023cca) bg_status_flat_pane_g3

0xde6a,	// (0x00023cd2) bg_status_flat_pane_g4

0xde72,	// (0x00023cda) bg_status_flat_pane_g5

0xde7a,	// (0x00023ce2) bg_status_flat_pane_g6

0xde82,	// (0x00023cea) bg_status_flat_pane_g7

0x9442,	// (0x0001f2aa) tabs_3_active_pane_t1_ParamLimits

0x9442,	// (0x0001f2aa) tabs_3_passive_pane_t1_ParamLimits

0x9454,	// (0x0001f2bc) tabs_4_active_pane_t1_ParamLimits

0x9454,	// (0x0001f2bc) tabs_4_1_passive_pane_t1_ParamLimits

0x9746,	// (0x0001f5ae) tabs_2_active_pane_t1_ParamLimits

0x9746,	// (0x0001f5ae) tabs_2_passive_pane_t1_ParamLimits

0xc3a0,	// (0x00022208) bg_active_tab_pane_cp4_ParamLimits

0x9758,	// (0x0001f5c0) tabs_2_long_active_pane_t1_ParamLimits

0xcab4,	// (0x0002291c) bg_passive_tab_pane_cp4_ParamLimits

0x583f,	// (0x0001b6a7) list_single_midp_graphic_pane_t1_ParamLimits

0xc3a0,	// (0x00022208) bg_active_tab_pane_cp5_ParamLimits

0x976b,	// (0x0001f5d3) tabs_3_long_active_pane_t1_ParamLimits

0xcab4,	// (0x0002291c) bg_passive_tab_pane_cp5_ParamLimits

0x583f,	// (0x0001b6a7) list_single_midp_graphic_pane_t1

0xa247,	// (0x000200af) bg_status_flat_pane_ParamLimits

0xd629,	// (0x00023491) indicator_pane_cp2_ParamLimits

0xd629,	// (0x00023491) indicator_pane_cp2

0xa3bd,	// (0x00020225) navi_pane_srt_ParamLimits

0xa3bd,	// (0x00020225) navi_pane_srt

0xd671,	// (0x000234d9) popup_clock_digital_analogue_window_cp1

0xc3e4,	// (0x0002224c) indicator_pane_t1

0xd3c9,	// (0x00023231) copy_highlight_pane

0xd3c9,	// (0x00023231) cursor_graphics_pane

0xd3c9,	// (0x00023231) graphic_within_text_pane

0xd3c9,	// (0x00023231) link_highlight_pane

0xe5f4,	// (0x0002445c) popup_preview_text_window_t5_ParamLimits

0xe5f4,	// (0x0002445c) popup_preview_text_window_t5

0xd444,	// (0x000232ac) cursor_digital_pane

0xd444,	// (0x000232ac) cursor_primary_pane

0xd455,	// (0x000232bd) cursor_primary_small_pane

0xd45d,	// (0x000232c5) cursor_secondary_pane

0xd465,	// (0x000232cd) cursor_title_pane

0xd444,	// (0x000232ac) link_highlight_digital_pane

0xd44c,	// (0x000232b4) link_highlight_primary_pane

0xd455,	// (0x000232bd) link_highlight_primary_small_pane

0xd45d,	// (0x000232c5) link_highlight_secondary_pane

0xd465,	// (0x000232cd) link_highlight_title_pane

0xd444,	// (0x000232ac) copy_highlight_digital_pane

0xd444,	// (0x000232ac) copy_highlight_primary_pane

0xd455,	// (0x000232bd) copy_highlight_primary_small_pane

0xd45d,	// (0x000232c5) copy_highlight_secondary_pane

0xd465,	// (0x000232cd) copy_highlight_title_pane

0xd45d,	// (0x000232c5) graphic_text_digital_pane

0xded2,	// (0x00023d3a) graphic_text_primary_pane

0xdedb,	// (0x00023d43) graphic_text_primary_small_pane

0xd455,	// (0x000232bd) graphic_text_secondary_pane

0xd444,	// (0x000232ac) graphic_text_title_pane

0x9975,	// (0x0001f7dd) cursor_primary_pane_g1

0xdec4,	// (0x00023d2c) cursor_text_primary_t1

0xa691,	// (0x000204f9) cursor_primary_small_pane_g1

0xdeb6,	// (0x00023d1e) cursor_text_primary_small_t1

0xa687,	// (0x000204ef) cursor_primary_small_pane_g1_copy1

0xdea8,	// (0x00023d10) cursor_text_primary_small_t1_copy1

0xde9a,	// (0x00023d02) cursor_text_title_t1

0xa67d,	// (0x000204e5) cursor_title_pane_g1

0x9975,	// (0x0001f7dd) cursor_digital_pane_g1

0xd46d,	// (0x000232d5) cursor_text_digital_t1

0xd47b,	// (0x000232e3) link_highlight_primary_pane_g1

0xde43,	// (0x00023cab) link_highlight_primary_pane_t1

0xd47b,	// (0x000232e3) link_highlight_primary_small_pane_g1

0xd483,	// (0x000232eb) link_highlight_primary_small_pane_t1

0xd492,	// (0x000232fa) link_highlight_secondary_pane_g1

0xd49a,	// (0x00023302) link_highlight_secondary_pane_t1

0xdda8,	// (0x00023c10) link_highlight_title_pane_g1

0xddbf,	// (0x00023c27) link_highlight_title_pane_t1

0xdda8,	// (0x00023c10) link_highlight_digital_pane_g1

0xddb0,	// (0x00023c18) link_highlight_digital_pane_t1

0xdc7e,	// (0x00023ae6) copy_highlight_primary_pane_g1

0xdca4,	// (0x00023b0c) copy_highlight_primary_pane_t1

0xdc7e,	// (0x00023ae6) copy_highlight_primary_small_pane_g1

0xdc95,	// (0x00023afd) copy_highlight_primary_small_pane_t1

0xd4a9,	// (0x00023311) copy_highlight_secondary_pane_g1

0xd4b1,	// (0x00023319) copy_highlight_secondary_pane_t1

0xdc7e,	// (0x00023ae6) copy_highlight_title_pane_g1

0xdc86,	// (0x00023aee) copy_highlight_title_pane_t1

0xdc7e,	// (0x00023ae6) copy_highlight_digital_pane_g1

0xeb3d,	// (0x000249a5) copy_highlight_digital_pane_t1

0xea91,	// (0x000248f9) graphic_text_primary_pane_g1

0xeb21,	// (0x00024989) graphic_text_primary_pane_t1

0xeb2f,	// (0x00024997) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x0002582a) graphic_text_primary_pane_t

0xeafd,	// (0x00024965) graphic_text_primary_small_pane_g1

0xeb05,	// (0x0002496d) graphic_text_primary_small_pane_t1

0xeb13,	// (0x0002497b) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x00025825) graphic_text_primary_small_pane_t

0xead9,	// (0x00024941) graphic_text_secondary_pane_g1

0xeae1,	// (0x00024949) graphic_text_secondary_pane_t1

0xeaef,	// (0x00024957) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x00025820) graphic_text_secondary_pane_t

0xeab5,	// (0x0002491d) graphic_text_title_pane_g1

0xeabd,	// (0x00024925) graphic_text_title_pane_t1

0xeacb,	// (0x00024933) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x0002581b) graphic_text_title_pane_t

0xea91,	// (0x000248f9) graphic_text_digital_pane_g1

0xea99,	// (0x00024901) graphic_text_digital_pane_t1

0xeaa7,	// (0x0002490f) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x00025816) graphic_text_digital_pane_t

0xc3a0,	// (0x00022208) navi_icon_pane_srt_ParamLimits

0xc3a0,	// (0x00022208) navi_icon_pane_srt

0xc334,	// (0x0002219c) navi_midp_pane_srt

0xc334,	// (0x0002219c) navi_navi_pane_srt

0xc3a0,	// (0x00022208) navi_text_pane_srt_ParamLimits

0xc3a0,	// (0x00022208) navi_text_pane_srt

0xea5c,	// (0x000248c4) navi_navi_icon_text_pane_srt

0xea64,	// (0x000248cc) navi_navi_pane_srt_g1_ParamLimits

0xea64,	// (0x000248cc) navi_navi_pane_srt_g1

0xea76,	// (0x000248de) navi_navi_pane_srt_g2_ParamLimits

0xea76,	// (0x000248de) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x00025811) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x00025811) navi_navi_pane_srt_g

0xea88,	// (0x000248f0) navi_navi_tabs_pane_srt

0xea5c,	// (0x000248c4) navi_navi_text_pane_srt

0xea5c,	// (0x000248c4) navi_navi_volume_pane_srt

0xea4d,	// (0x000248b5) navi_navi_text_pane_srt_t1

0x5ba1,	// (0x0001ba09) navi_navi_volume_pane_srt_g1

0x5ba9,	// (0x0001ba11) volume_small_pane_srt_ParamLimits

0x5ba9,	// (0x0001ba11) volume_small_pane_srt

0x50f5,	// (0x0001af5d) volume_small_pane_srt_g1_ParamLimits

0x50f5,	// (0x0001af5d) volume_small_pane_srt_g1

0x5105,	// (0x0001af6d) volume_small_pane_srt_g2_ParamLimits

0x5105,	// (0x0001af6d) volume_small_pane_srt_g2

0x5116,	// (0x0001af7e) volume_small_pane_srt_g3_ParamLimits

0x5116,	// (0x0001af7e) volume_small_pane_srt_g3

0x5127,	// (0x0001af8f) volume_small_pane_srt_g4_ParamLimits

0x5127,	// (0x0001af8f) volume_small_pane_srt_g4

0x5138,	// (0x0001afa0) volume_small_pane_srt_g5_ParamLimits

0x5138,	// (0x0001afa0) volume_small_pane_srt_g5

0x5149,	// (0x0001afb1) volume_small_pane_srt_g6_ParamLimits

0x5149,	// (0x0001afb1) volume_small_pane_srt_g6

0x515a,	// (0x0001afc2) volume_small_pane_srt_g7_ParamLimits

0x515a,	// (0x0001afc2) volume_small_pane_srt_g7

0x516b,	// (0x0001afd3) volume_small_pane_srt_g8_ParamLimits

0x516b,	// (0x0001afd3) volume_small_pane_srt_g8

0x517c,	// (0x0001afe4) volume_small_pane_srt_g9_ParamLimits

0x517c,	// (0x0001afe4) volume_small_pane_srt_g9

0x518d,	// (0x0001aff5) volume_small_pane_srt_g10_ParamLimits

0x518d,	// (0x0001aff5) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x000255c5) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x000255c5) volume_small_pane_srt_g

0xc624,	// (0x0002248c) query_popup_data_pane_cp2

0xea33,	// (0x0002489b) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xea33,	// (0x0002489b) navi_navi_icon_text_pane_srt_t1

0xded2,	// (0x00023d3a) navi_tabs_2_long_pane_srt

0xded2,	// (0x00023d3a) navi_tabs_2_pane_srt

0xded2,	// (0x00023d3a) navi_tabs_3_long_pane_srt

0xded2,	// (0x00023d3a) navi_tabs_3_pane_srt

0xded2,	// (0x00023d3a) navi_tabs_4_pane_srt

0x5b81,	// (0x0001b9e9) tabs_2_active_pane_srt_ParamLimits

0x5b81,	// (0x0001b9e9) tabs_2_active_pane_srt

0x5b91,	// (0x0001b9f9) tabs_2_passive_pane_srt_ParamLimits

0x5b91,	// (0x0001b9f9) tabs_2_passive_pane_srt

0xd800,	// (0x00023668) bg_passive_tab_pane_cp1_srt_ParamLimits

0xd800,	// (0x00023668) bg_passive_tab_pane_cp1_srt

0xea11,	// (0x00024879) bg_passive_tab_pane_g1_cp1_srt

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp1_srt

0xea1a,	// (0x00024882) bg_passive_tab_pane_g3_cp1_srt

0xc382,	// (0x000221ea) bg_active_tab_pane_cp1_srt_ParamLimits

0xc382,	// (0x000221ea) bg_active_tab_pane_cp1_srt

0xea23,	// (0x0002488b) tabs_2_active_pane_srt_g1

0xaa81,	// (0x000208e9) tabs_2_active_pane_srt_t1_ParamLimits

0xaa81,	// (0x000208e9) tabs_2_active_pane_srt_t1

0xea11,	// (0x00024879) bg_active_tab_pane_g1_cp1_srt

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp1_srt

0xea1a,	// (0x00024882) bg_active_tab_pane_g3_cp1_srt

0x5b4e,	// (0x0001b9b6) tabs_3_active_pane_srt_ParamLimits

0x5b4e,	// (0x0001b9b6) tabs_3_active_pane_srt

0x5b5f,	// (0x0001b9c7) tabs_3_passive_pane_cp_srt_ParamLimits

0x5b5f,	// (0x0001b9c7) tabs_3_passive_pane_cp_srt

0x5b70,	// (0x0001b9d8) tabs_3_passive_pane_srt_ParamLimits

0x5b70,	// (0x0001b9d8) tabs_3_passive_pane_srt

0xd800,	// (0x00023668) bg_passive_tab_pane_cp2_srt_ParamLimits

0xd800,	// (0x00023668) bg_passive_tab_pane_cp2_srt

0xd4c0,	// (0x00023328) bg_passive_tab_pane_g1_cp2_srt

0xd045,	// (0x00022ead) bg_passive_tab_pane_g2_cp2_srt

0xd4c9,	// (0x00023331) bg_passive_tab_pane_g3_cp2_srt

0xc382,	// (0x000221ea) bg_active_tab_pane_cp2_srt_ParamLimits

0xc382,	// (0x000221ea) bg_active_tab_pane_cp2_srt

0xea09,	// (0x00024871) tabs_3_active_pane_srt_g1

0xaa6b,	// (0x000208d3) tabs_3_active_pane_srt_t1_ParamLimits

0xaa6b,	// (0x000208d3) tabs_3_active_pane_srt_t1

0xd4c0,	// (0x00023328) bg_active_tab_pane_g1_cp2_srt

0xd045,	// (0x00022ead) bg_active_tab_pane_g2_cp2_srt

0xd4c9,	// (0x00023331) bg_active_tab_pane_g3_cp2_srt

0x5b06,	// (0x0001b96e) tabs_4_active_pane_srt_ParamLimits

0x5b06,	// (0x0001b96e) tabs_4_active_pane_srt

0x5b18,	// (0x0001b980) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5b18,	// (0x0001b980) tabs_4_passive_pane_cp2_srt

0x52f9,	// (0x0001b161) aid_size_cell_toolbar

0xe5d6,	// (0x0002443e) main_idle_act_pane_ParamLimits

0x5476,	// (0x0001b2de) popup_large_graphic_colour_window_ParamLimits

0xa12b,	// (0x0001ff93) popup_toolbar_window_ParamLimits

0xa12b,	// (0x0001ff93) popup_toolbar_window

0xe91e,	// (0x00024786) list_single_graphic_2heading_pane_ParamLimits

0xe91e,	// (0x00024786) list_single_graphic_2heading_pane

0xcc5e,	// (0x00022ac6) aid_size_cell_apps_grid_lsc_pane

0xcc70,	// (0x00022ad8) aid_size_cell_apps_grid_prt_pane

0xcab4,	// (0x0002291c) bg_wml_button_pane_cp1_ParamLimits

0xcab4,	// (0x0002291c) bg_wml_button_pane_cp1

0xa642,	// (0x000204aa) form_midp_field_text_pane_t1_ParamLimits

0xd800,	// (0x00023668) input_focus_pane_cp050_ParamLimits

0xd964,	// (0x000237cc) list_midp_form_text_pane_ParamLimits

0xd941,	// (0x000237a9) input_focus_pane_cp051_ParamLimits

0xd955,	// (0x000237bd) list_midp_choice_pane_ParamLimits

0xa5e6,	// (0x0002044e) list_single_2graphic_pane_cp3_ParamLimits

0xa5e6,	// (0x0002044e) list_single_2graphic_pane_cp3

0xa5f7,	// (0x0002045f) list_single_midp_graphic_pane_ParamLimits

0xa5f7,	// (0x0002045f) list_single_midp_graphic_pane

0x39ed,	// (0x00019855) list_single_graphic_2heading_pane_g1_ParamLimits

0x39ed,	// (0x00019855) list_single_graphic_2heading_pane_g1

0x40c5,	// (0x00019f2d) list_single_graphic_2heading_pane_g4_ParamLimits

0x40c5,	// (0x00019f2d) list_single_graphic_2heading_pane_g4

0x40d1,	// (0x00019f39) list_single_graphic_2heading_pane_g5_ParamLimits

0x40d1,	// (0x00019f39) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00025618) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00025618) list_single_graphic_2heading_pane_g

0x40dd,	// (0x00019f45) list_single_graphic_2heading_pane_t1_ParamLimits

0x40dd,	// (0x00019f45) list_single_graphic_2heading_pane_t1

0x40f1,	// (0x00019f59) list_single_graphic_2heading_pane_t2_ParamLimits

0x40f1,	// (0x00019f59) list_single_graphic_2heading_pane_t2

0x410b,	// (0x00019f73) list_single_graphic_2heading_pane_t3_ParamLimits

0x410b,	// (0x00019f73) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0002561f) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0002561f) list_single_graphic_2heading_pane_t

0xd6b4,	// (0x0002351c) bg_popup_sub_pane_cp2

0xd6de,	// (0x00023546) grid_toobar_pane

0x57d8,	// (0x0001b640) cell_toolbar_pane_ParamLimits

0x57d8,	// (0x0001b640) cell_toolbar_pane

0xd718,	// (0x00023580) cell_toolbar_pane_g1_ParamLimits

0xd718,	// (0x00023580) cell_toolbar_pane_g1

0xd72c,	// (0x00023594) cell_toolbar_pane_g2_ParamLimits

0xd72c,	// (0x00023594) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x00025626) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x00025626) cell_toolbar_pane_g

0xd74e,	// (0x000235b6) grid_highlight_pane_cp2_ParamLimits

0xd74e,	// (0x000235b6) grid_highlight_pane_cp2

0xd768,	// (0x000235d0) toolbar_button_pane

0xd774,	// (0x000235dc) toolbar_button_pane_g1

0xd77c,	// (0x000235e4) toolbar_button_pane_g2

0xd784,	// (0x000235ec) toolbar_button_pane_g3

0xd78c,	// (0x000235f4) toolbar_button_pane_g4

0xd794,	// (0x000235fc) toolbar_button_pane_g5

0xd79c,	// (0x00023604) toolbar_button_pane_g6

0xd7a4,	// (0x0002360c) toolbar_button_pane_g7

0xd7ac,	// (0x00023614) toolbar_button_pane_g8

0xd7b4,	// (0x0002361c) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0002562b) toolbar_button_pane_g

0x580a,	// (0x0001b672) list_single_2graphic_pane_g1_cp3_ParamLimits

0x580a,	// (0x0001b672) list_single_2graphic_pane_g1_cp3

0xa54e,	// (0x000203b6) list_single_2graphic_pane_g2_cp3_ParamLimits

0xa54e,	// (0x000203b6) list_single_2graphic_pane_g2_cp3

0xd1fb,	// (0x00023063) list_single_2graphic_pane_g3_cp3

0x136c,	// (0x000171d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x136c,	// (0x000171d4) list_single_2graphic_pane_g4_cp3

0x5825,	// (0x0001b68d) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5825,	// (0x0001b68d) list_single_2graphic_pane_t1_cp3

0xd1ef,	// (0x00023057) list_single_midp_graphic_pane_g2_ParamLimits

0xd1ef,	// (0x00023057) list_single_midp_graphic_pane_g2

0x5301,	// (0x0001b169) aid_zoom_text_primary

0x40b5,	// (0x00019f1d) aid_zoom_text_secondary

0x99cb,	// (0x0001f833) status_small_pane_g7_ParamLimits

0x99cb,	// (0x0001f833) status_small_pane_g7

0x99ee,	// (0x0001f856) status_small_pane_t1_ParamLimits

0x9392,	// (0x0001f1fa) title_pane_g2

0x0003,

0xf54e,	// (0x000253b6) title_pane_g

0x9655,	// (0x0001f4bd) aid_size_cell_colour_1_pane_ParamLimits

0x9655,	// (0x0001f4bd) aid_size_cell_colour_1_pane

0x9669,	// (0x0001f4d1) aid_size_cell_colour_2_pane_ParamLimits

0x9669,	// (0x0001f4d1) aid_size_cell_colour_2_pane

0x967d,	// (0x0001f4e5) aid_size_cell_colour_3_pane_ParamLimits

0x967d,	// (0x0001f4e5) aid_size_cell_colour_3_pane

0x9691,	// (0x0001f4f9) aid_size_cell_colour_4_pane_ParamLimits

0x9691,	// (0x0001f4f9) aid_size_cell_colour_4_pane

0x4d76,	// (0x0001abde) title_pane_stacon_g1_ParamLimits

0x4d76,	// (0x0001abde) title_pane_stacon_g1

0xdcfb,	// (0x00023b63) popup_note_wait_window_g3_ParamLimits

0xdcfb,	// (0x00023b63) popup_note_wait_window_g3

0xdd71,	// (0x00023bd9) popup_note_wait_window_t5_ParamLimits

0xdd71,	// (0x00023bd9) popup_note_wait_window_t5

0xc334,	// (0x0002219c) main_feb_china_hwr_fs_writing_pane

0x9c31,	// (0x0001fa99) popup_feb_china_hwr_fs_window_ParamLimits

0x9c31,	// (0x0001fa99) popup_feb_china_hwr_fs_window

0xa55f,	// (0x000203c7) aid_size_cell_hwr_fs_ParamLimits

0xa55f,	// (0x000203c7) aid_size_cell_hwr_fs

0xd800,	// (0x00023668) bg_popup_sub_pane_cp3_ParamLimits

0xd800,	// (0x00023668) bg_popup_sub_pane_cp3

0xa574,	// (0x000203dc) grid_hwr_fs_pane_ParamLimits

0xa574,	// (0x000203dc) grid_hwr_fs_pane

0x587e,	// (0x0001b6e6) linegrid_hwr_fs_pane_ParamLimits

0x587e,	// (0x0001b6e6) linegrid_hwr_fs_pane

0xa58c,	// (0x000203f4) cell_hwr_fs_pane_ParamLimits

0xa58c,	// (0x000203f4) cell_hwr_fs_pane

0xd80c,	// (0x00023674) linegrid_hwr_fs_pane_g1_ParamLimits

0xd80c,	// (0x00023674) linegrid_hwr_fs_pane_g1

0xa5ac,	// (0x00020414) linegrid_hwr_fs_pane_g2_ParamLimits

0xa5ac,	// (0x00020414) linegrid_hwr_fs_pane_g2

0xd818,	// (0x00023680) linegrid_hwr_fs_pane_g3_ParamLimits

0xd818,	// (0x00023680) linegrid_hwr_fs_pane_g3

0x58ac,	// (0x0001b714) linegrid_hwr_fs_pane_g4_ParamLimits

0x58ac,	// (0x0001b714) linegrid_hwr_fs_pane_g4

0x58c6,	// (0x0001b72e) linegrid_hwr_fs_pane_g5_ParamLimits

0x58c6,	// (0x0001b72e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x00025651) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x00025651) linegrid_hwr_fs_pane_g

0xd824,	// (0x0002368c) cell_hwr_fs_pane_g1_ParamLimits

0xd824,	// (0x0002368c) cell_hwr_fs_pane_g1

0xd682,	// (0x000234ea) cell_hwr_fs_pane_g2_ParamLimits

0xd682,	// (0x000234ea) cell_hwr_fs_pane_g2

0xa5be,	// (0x00020426) cell_hwr_fs_pane_g3_ParamLimits

0xa5be,	// (0x00020426) cell_hwr_fs_pane_g3

0xa5cb,	// (0x00020433) cell_hwr_fs_pane_g4_ParamLimits

0xa5cb,	// (0x00020433) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x0002565c) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0002565c) cell_hwr_fs_pane_g

0xa5d8,	// (0x00020440) cell_hwr_fs_pane_t1

0xc334,	// (0x0002219c) grid_highlight_pane_cp6

0xc334,	// (0x0002219c) main_idle_act2_pane

0xca5b,	// (0x000228c3) aid_inside_area_popup_secondary

0xa69b,	// (0x00020503) aid_inside_area_window_primary_ParamLimits

0xa69b,	// (0x00020503) aid_inside_area_window_primary

0xeb4c,	// (0x000249b4) ai2_news_ticker_pane

0xeb54,	// (0x000249bc) aid_size_cell_ai1_link_ParamLimits

0xeb54,	// (0x000249bc) aid_size_cell_ai1_link

0xaa97,	// (0x000208ff) popup_ai2_data_window_ParamLimits

0xaa97,	// (0x000208ff) popup_ai2_data_window

0xeb6e,	// (0x000249d6) popup_ai2_link_window_ParamLimits

0xeb6e,	// (0x000249d6) popup_ai2_link_window

0xd800,	// (0x00023668) bg_popup_sub_pane_cp4_ParamLimits

0xd800,	// (0x00023668) bg_popup_sub_pane_cp4

0xeb82,	// (0x000249ea) grid_ai2_link_pane_ParamLimits

0xeb82,	// (0x000249ea) grid_ai2_link_pane

0xeb99,	// (0x00024a01) popup_ai2_link_window_g1_ParamLimits

0xeb99,	// (0x00024a01) popup_ai2_link_window_g1

0xeba5,	// (0x00024a0d) popup_ai2_link_window_g2_ParamLimits

0xeba5,	// (0x00024a0d) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0002582f) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0002582f) popup_ai2_link_window_g

0xebb4,	// (0x00024a1c) ai2_mp_button_pane

0xebbc,	// (0x00024a24) ai2_mp_volume_pane

0xd941,	// (0x000237a9) bg_popup_sub_pane_cp5_ParamLimits

0xd941,	// (0x000237a9) bg_popup_sub_pane_cp5

0xebc4,	// (0x00024a2c) heading_ai2_gene_pane_ParamLimits

0xebc4,	// (0x00024a2c) heading_ai2_gene_pane

0xebd0,	// (0x00024a38) list_ai2_gene_pane_ParamLimits

0xebd0,	// (0x00024a38) list_ai2_gene_pane

0xec18,	// (0x00024a80) cell_ai2_link_pane_ParamLimits

0xec18,	// (0x00024a80) cell_ai2_link_pane

0xec2e,	// (0x00024a96) cell_ai2_link_pane_g1

0xc334,	// (0x0002219c) grid_highlight_pane_cp7

0x5bbe,	// (0x0001ba26) ai2_mp_volume_pane_g1

0xeccb,	// (0x00024b33) ai2_mp_volume_pane_g2

0xaab8,	// (0x00020920) list_ai2_gene_pane_t1

0xecd3,	// (0x00024b3b) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x00025848) ai2_mp_volume_pane_g

0x5bc6,	// (0x0001ba2e) volume_small_pane_cp3

0xecdb,	// (0x00024b43) aid_size_cell_ai2_button

0xece3,	// (0x00024b4b) grid_ai2_button_pane

0xecec,	// (0x00024b54) cell_ai2_button_pane_ParamLimits

0xecec,	// (0x00024b54) cell_ai2_button_pane

0xc32a,	// (0x00022192) cell_ai2_button_pane_g1

0xc334,	// (0x0002219c) grid_highlight_pane_cp8

0xec8b,	// (0x00024af3) ai2_gene_pane_t1_ParamLimits

0xec8b,	// (0x00024af3) ai2_gene_pane_t1

0x9baf,	// (0x0001fa17) aid_height_parent_landscape

0xa841,	// (0x000206a9) aid_height_set_list

0xe5d6,	// (0x0002443e) aid_size_parent

0xe9bb,	// (0x00024823) aid_size_cell_graphic_pane_ParamLimits

0xebe0,	// (0x00024a48) popup_ai2_data_window_g1_ParamLimits

0xebe0,	// (0x00024a48) popup_ai2_data_window_g1

0xebec,	// (0x00024a54) ai2_news_ticker_pane_g1

0xebf4,	// (0x00024a5c) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x00025834) ai2_news_ticker_pane_g

0xebfc,	// (0x00024a64) ai2_news_ticker_pane_t1

0xec0a,	// (0x00024a72) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x00025839) ai2_news_ticker_pane_t

0xec37,	// (0x00024a9f) heading_ai2_gene_pane_g1

0xec3f,	// (0x00024aa7) heading_ai2_gene_pane_t1_ParamLimits

0xec3f,	// (0x00024aa7) heading_ai2_gene_pane_t1

0xec54,	// (0x00024abc) list_highlight_pane_cp6

0xaaa3,	// (0x0002090b) ai2_gene_pane_ParamLimits

0xaaa3,	// (0x0002090b) ai2_gene_pane

0xaac6,	// (0x0002092e) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0002583e) list_ai2_gene_pane_t

0xec5c,	// (0x00024ac4) list_highlight_pane_cp8_ParamLimits

0xec5c,	// (0x00024ac4) list_highlight_pane_cp8

0xec6d,	// (0x00024ad5) ai2_gene_pane_g1_ParamLimits

0xec6d,	// (0x00024ad5) ai2_gene_pane_g1

0xec7f,	// (0x00024ae7) ai2_gene_pane_g2_ParamLimits

0xec7f,	// (0x00024ae7) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x00025843) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x00025843) ai2_gene_pane_g

0xc8ea,	// (0x00022752) scroll_pane_cp12

0x9b6c,	// (0x0001f9d4) control_pane_t3_ParamLimits

0x9b6c,	// (0x0001f9d4) control_pane_t3

0x99df,	// (0x0001f847) status_small_pane_g8_ParamLimits

0x99df,	// (0x0001f847) status_small_pane_g8

0x9ca6,	// (0x0001fb0e) popup_find_window_ParamLimits

0x9e99,	// (0x0001fd01) popup_note_image_window_ParamLimits

0x39ed,	// (0x00019855) list_double2_graphic_pane_vc_g1_ParamLimits

0x39ed,	// (0x00019855) list_double2_graphic_pane_vc_g1

0x40c5,	// (0x00019f2d) list_double2_graphic_pane_vc_g2_ParamLimits

0x40c5,	// (0x00019f2d) list_double2_graphic_pane_vc_g2

0x40d1,	// (0x00019f39) list_double2_graphic_pane_vc_g3_ParamLimits

0x40d1,	// (0x00019f39) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x00025618) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x00025618) list_double2_graphic_pane_vc_g

0x4123,	// (0x00019f8b) list_double2_graphic_pane_vc_t1_ParamLimits

0x4123,	// (0x00019f8b) list_double2_graphic_pane_vc_t1

0x40c5,	// (0x00019f2d) list_single_heading_pane_vc_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_single_heading_pane_vc_g1

0x40d1,	// (0x00019f39) list_single_heading_pane_vc_g2_ParamLimits

0x40d1,	// (0x00019f39) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00025430) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00025430) list_single_heading_pane_vc_g

0x4139,	// (0x00019fa1) list_single_heading_pane_vc_t1_ParamLimits

0x4139,	// (0x00019fa1) list_single_heading_pane_vc_t1

0x414f,	// (0x00019fb7) list_single_heading_pane_vc_t2_ParamLimits

0x414f,	// (0x00019fb7) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x00025640) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x00025640) list_single_heading_pane_vc_t

0xd7bc,	// (0x00023624) list_setting_number_pane_vc_g1_ParamLimits

0xd7bc,	// (0x00023624) list_setting_number_pane_vc_g1

0xd7c8,	// (0x00023630) list_setting_number_pane_vc_g2_ParamLimits

0xd7c8,	// (0x00023630) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x00025645) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x00025645) list_setting_number_pane_vc_g

0x4161,	// (0x00019fc9) list_setting_number_pane_vc_t1_ParamLimits

0x4161,	// (0x00019fc9) list_setting_number_pane_vc_t1

0x4175,	// (0x00019fdd) list_setting_number_pane_vc_t2_ParamLimits

0x4175,	// (0x00019fdd) list_setting_number_pane_vc_t2

0x418d,	// (0x00019ff5) list_setting_number_pane_vc_t3_ParamLimits

0x418d,	// (0x00019ff5) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x0002564a) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x0002564a) list_setting_number_pane_vc_t

0x41a5,	// (0x0001a00d) set_value_pane_vc_ParamLimits

0x41a5,	// (0x0001a00d) set_value_pane_vc

0xe91e,	// (0x00024786) list_double2_graphic_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_double2_graphic_pane_vc

0xe91e,	// (0x00024786) list_double2_large_graphic_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_double2_large_graphic_pane_vc

0xe91e,	// (0x00024786) list_double2_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_double2_pane_vc

0xe91e,	// (0x00024786) list_double_graphic_heading_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_double_graphic_heading_pane_vc

0xe91e,	// (0x00024786) list_double_graphic_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_double_graphic_pane_vc

0xe91e,	// (0x00024786) list_double_heading_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_double_heading_pane_vc

0xe92f,	// (0x00024797) list_double_large_graphic_pane_vc_ParamLimits

0xe92f,	// (0x00024797) list_double_large_graphic_pane_vc

0xe91e,	// (0x00024786) list_double_number_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_double_number_pane_vc

0xe91e,	// (0x00024786) list_double_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_double_pane_vc

0xe91e,	// (0x00024786) list_double_time_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_double_time_pane_vc

0xe91e,	// (0x00024786) list_setting_number_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_setting_number_pane_vc

0xe91e,	// (0x00024786) list_setting_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_setting_pane_vc

0xe91e,	// (0x00024786) list_single_graphic_heading_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_single_graphic_heading_pane_vc

0xe91e,	// (0x00024786) list_single_heading_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_single_heading_pane_vc

0xe91e,	// (0x00024786) list_single_number_heading_pane_vc_ParamLimits

0xe91e,	// (0x00024786) list_single_number_heading_pane_vc

0x4244,	// (0x0001a0ac) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4244,	// (0x0001a0ac) list_double_graphic_heading_pane_vc_g1

0x40c5,	// (0x00019f2d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x40c5,	// (0x00019f2d) list_double_graphic_heading_pane_vc_g2

0x40d1,	// (0x00019f39) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x40d1,	// (0x00019f39) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e7,	// (0x0002584f) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e7,	// (0x0002584f) list_double_graphic_heading_pane_vc_g

0x4250,	// (0x0001a0b8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4250,	// (0x0001a0b8) list_double_graphic_heading_pane_vc_t1

0x4266,	// (0x0001a0ce) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4266,	// (0x0001a0ce) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x00025856) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x00025856) list_double_graphic_heading_pane_vc_t

0xd7bc,	// (0x00023624) list_setting_pane_vc_g1_ParamLimits

0xd7bc,	// (0x00023624) list_setting_pane_vc_g1

0xd7c8,	// (0x00023630) list_setting_pane_vc_g2_ParamLimits

0xd7c8,	// (0x00023630) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x00025645) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x00025645) list_setting_pane_vc_g

0x427e,	// (0x0001a0e6) list_setting_pane_vc_t1_ParamLimits

0x427e,	// (0x0001a0e6) list_setting_pane_vc_t1

0x4296,	// (0x0001a0fe) list_setting_pane_vc_t2_ParamLimits

0x4296,	// (0x0001a0fe) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x00025899) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x00025899) list_setting_pane_vc_t

0x41a5,	// (0x0001a00d) set_value_pane_cp_vc_ParamLimits

0x41a5,	// (0x0001a00d) set_value_pane_cp_vc

0x40c5,	// (0x00019f2d) list_single_number_heading_pane_vc_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_single_number_heading_pane_vc_g1

0x40d1,	// (0x00019f39) list_single_number_heading_pane_vc_g2_ParamLimits

0x40d1,	// (0x00019f39) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00025430) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00025430) list_single_number_heading_pane_vc_g

0x42ac,	// (0x0001a114) list_single_number_heading_pane_vc_t1_ParamLimits

0x42ac,	// (0x0001a114) list_single_number_heading_pane_vc_t1

0x42c2,	// (0x0001a12a) list_single_number_heading_pane_vc_t2_ParamLimits

0x42c2,	// (0x0001a12a) list_single_number_heading_pane_vc_t2

0x42d4,	// (0x0001a13c) list_single_number_heading_pane_vc_t3_ParamLimits

0x42d4,	// (0x0001a13c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x0002589e) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x0002589e) list_single_number_heading_pane_vc_t

0x39ed,	// (0x00019855) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x39ed,	// (0x00019855) list_single_graphic_heading_pane_vc_g1

0x40c5,	// (0x00019f2d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x40c5,	// (0x00019f2d) list_single_graphic_heading_pane_vc_g4

0x40d1,	// (0x00019f39) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x40d1,	// (0x00019f39) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x00025618) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x00025618) list_single_graphic_heading_pane_vc_g

0x42ac,	// (0x0001a114) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x42ac,	// (0x0001a114) list_single_graphic_heading_pane_vc_t1

0x42e6,	// (0x0001a14e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x42e6,	// (0x0001a14e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x000258a5) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x000258a5) list_single_graphic_heading_pane_vc_t

0x40c5,	// (0x00019f2d) list_double2_pane_vc_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_double2_pane_vc_g1

0x40d1,	// (0x00019f39) list_double2_pane_vc_g2_ParamLimits

0x40d1,	// (0x00019f39) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00025430) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00025430) list_double2_pane_vc_g

0x42f8,	// (0x0001a160) list_double2_pane_vc_t1_ParamLimits

0x42f8,	// (0x0001a160) list_double2_pane_vc_t1

0x430e,	// (0x0001a176) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x430e,	// (0x0001a176) list_double2_large_graphic_pane_vc_g1

0x40c5,	// (0x00019f2d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x40c5,	// (0x00019f2d) list_double2_large_graphic_pane_vc_g2

0x40d1,	// (0x00019f39) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x40d1,	// (0x00019f39) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0002544d) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0002544d) list_double2_large_graphic_pane_vc_g

0x431a,	// (0x0001a182) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x431a,	// (0x0001a182) list_double2_large_graphic_pane_vc_t1

0x4330,	// (0x0001a198) list_double_time_pane_vc_g1_ParamLimits

0x4330,	// (0x0001a198) list_double_time_pane_vc_g1

0x433c,	// (0x0001a1a4) list_double_time_pane_vc_g2_ParamLimits

0x433c,	// (0x0001a1a4) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x000258aa) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x000258aa) list_double_time_pane_vc_g

0x4348,	// (0x0001a1b0) list_double_time_pane_vc_t1_ParamLimits

0x4348,	// (0x0001a1b0) list_double_time_pane_vc_t1

0x4366,	// (0x0001a1ce) list_double_time_pane_vc_t2_ParamLimits

0x4366,	// (0x0001a1ce) list_double_time_pane_vc_t2

0x43a4,	// (0x0001a20c) list_double_time_pane_vc_t3_ParamLimits

0x43a4,	// (0x0001a20c) list_double_time_pane_vc_t3

0x43b6,	// (0x0001a21e) list_double_time_pane_vc_t4_ParamLimits

0x43b6,	// (0x0001a21e) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x000258af) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x000258af) list_double_time_pane_vc_t

0x40c5,	// (0x00019f2d) list_double_pane_vc_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_double_pane_vc_g1

0x40d1,	// (0x00019f39) list_double_pane_vc_g2_ParamLimits

0x40d1,	// (0x00019f39) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00025430) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00025430) list_double_pane_vc_g

0x43c8,	// (0x0001a230) list_double_pane_vc_t1_ParamLimits

0x43c8,	// (0x0001a230) list_double_pane_vc_t1

0x43da,	// (0x0001a242) list_double_pane_vc_t2_ParamLimits

0x43da,	// (0x0001a242) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x000258b8) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x000258b8) list_double_pane_vc_t

0x40c5,	// (0x00019f2d) list_double_number_pane_vc_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_double_number_pane_vc_g1

0x40d1,	// (0x00019f39) list_double_number_pane_vc_g2_ParamLimits

0x40d1,	// (0x00019f39) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00025430) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00025430) list_double_number_pane_vc_g

0x43f0,	// (0x0001a258) list_double_number_pane_vc_t1_ParamLimits

0x43f0,	// (0x0001a258) list_double_number_pane_vc_t1

0x4402,	// (0x0001a26a) list_double_number_pane_vc_t2_ParamLimits

0x4402,	// (0x0001a26a) list_double_number_pane_vc_t2

0x43da,	// (0x0001a242) list_double_number_pane_vc_t3_ParamLimits

0x43da,	// (0x0001a242) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x000258bd) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x000258bd) list_double_number_pane_vc_t

0x4414,	// (0x0001a27c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x4414,	// (0x0001a27c) list_double_large_graphic_pane_vc_g1

0x4430,	// (0x0001a298) list_double_large_graphic_pane_vc_g2_ParamLimits

0x4430,	// (0x0001a298) list_double_large_graphic_pane_vc_g2

0x4444,	// (0x0001a2ac) list_double_large_graphic_pane_vc_g3_ParamLimits

0x4444,	// (0x0001a2ac) list_double_large_graphic_pane_vc_g3

0x4453,	// (0x0001a2bb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x4453,	// (0x0001a2bb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x000258c4) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x000258c4) list_double_large_graphic_pane_vc_g

0x445f,	// (0x0001a2c7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x445f,	// (0x0001a2c7) list_double_large_graphic_pane_vc_t1

0x4479,	// (0x0001a2e1) list_double_large_graphic_pane_vc_t2_ParamLimits

0x4479,	// (0x0001a2e1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x000258cd) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x000258cd) list_double_large_graphic_pane_vc_t

0x40c5,	// (0x00019f2d) list_double_heading_pane_vc_g1_ParamLimits

0x40c5,	// (0x00019f2d) list_double_heading_pane_vc_g1

0x40d1,	// (0x00019f39) list_double_heading_pane_vc_g2_ParamLimits

0x40d1,	// (0x00019f39) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00025430) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00025430) list_double_heading_pane_vc_g

0x4499,	// (0x0001a301) list_double_heading_pane_vc_t1_ParamLimits

0x4499,	// (0x0001a301) list_double_heading_pane_vc_t1

0x44ab,	// (0x0001a313) list_double_heading_pane_vc_t2_ParamLimits

0x44ab,	// (0x0001a313) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x000258d2) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x000258d2) list_double_heading_pane_vc_t

0x44c1,	// (0x0001a329) list_double_graphic_pane_vc_g1_ParamLimits

0x44c1,	// (0x0001a329) list_double_graphic_pane_vc_g1

0x44d4,	// (0x0001a33c) list_double_graphic_pane_vc_g2_ParamLimits

0x44d4,	// (0x0001a33c) list_double_graphic_pane_vc_g2

0x40c5,	// (0x00019f2d) list_double_graphic_pane_vc_g3_ParamLimits

0x40c5,	// (0x00019f2d) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x000258d7) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x000258d7) list_double_graphic_pane_vc_g

0x44f1,	// (0x0001a359) list_double_graphic_pane_vc_t1_ParamLimits

0x44f1,	// (0x0001a359) list_double_graphic_pane_vc_t1

0x450f,	// (0x0001a377) list_double_graphic_pane_vc_t2_ParamLimits

0x450f,	// (0x0001a377) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x000258e0) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x000258e0) list_double_graphic_pane_vc_t

0x492e,	// (0x0001a796) aid_size_cell_fastswap

0x91ad,	// (0x0001f015) aid_size_cell_touch_ParamLimits

0x91ad,	// (0x0001f015) aid_size_cell_touch

0x4b87,	// (0x0001a9ef) popup_fast_swap_wide_window_ParamLimits

0x4b87,	// (0x0001a9ef) popup_fast_swap_wide_window

0x9329,	// (0x0001f191) touch_pane_ParamLimits

0x9329,	// (0x0001f191) touch_pane

0xc937,	// (0x0002279f) button_value_adjust_pane_cp2

0x3e01,	// (0x00019c69) button_value_adjust_pane_cp4

0x3e21,	// (0x00019c89) form_field_data_pane_cp2

0x8dd9,	// (0x0001ec41) form_field_data_wide_pane_cp2

0xcc95,	// (0x00022afd) bg_scroll_pane_ParamLimits

0x4ed1,	// (0x0001ad39) scroll_handle_pane_ParamLimits

0x4ee5,	// (0x0001ad4d) scroll_sc2_down_pane_ParamLimits

0x4ee5,	// (0x0001ad4d) scroll_sc2_down_pane

0xccc6,	// (0x00022b2e) scroll_sc2_up_pane_ParamLimits

0xccc6,	// (0x00022b2e) scroll_sc2_up_pane

0xabdc,	// (0x00020a44) grid_wheel_folder_pane_g1_ParamLimits

0xabdc,	// (0x00020a44) grid_wheel_folder_pane_g1

0x5099,	// (0x0001af01) clock_nsta_pane_cp2_ParamLimits

0x5099,	// (0x0001af01) clock_nsta_pane_cp2

0x98dc,	// (0x0001f744) listscroll_midp_pane_ParamLimits

0x98e8,	// (0x0001f750) midp_canvas_pane

0xd53a,	// (0x000233a2) nsta_clock_indic_pane

0xd562,	// (0x000233ca) listscroll_form_pane_vc

0xd56a,	// (0x000233d2) listscroll_set_pane_vc_ParamLimits

0xd56a,	// (0x000233d2) listscroll_set_pane_vc

0xa26f,	// (0x000200d7) clock_nsta_pane

0xa299,	// (0x00020101) indicator_nsta_pane

0xd6b4,	// (0x0002351c) bg_popup_sub_pane_cp2_ParamLimits

0xd6c8,	// (0x00023530) find_pane_cp2_ParamLimits

0xd6c8,	// (0x00023530) find_pane_cp2

0xd6de,	// (0x00023546) grid_toobar_pane_ParamLimits

0xd7d4,	// (0x0002363c) list_form_gen_pane_vc_ParamLimits

0xd7d4,	// (0x0002363c) list_form_gen_pane_vc

0xd7ea,	// (0x00023652) scroll_pane_cp8_vc_ParamLimits

0xd7ea,	// (0x00023652) scroll_pane_cp8_vc

0xd83a,	// (0x000236a2) data_form_wide_pane_vc_ParamLimits

0xd83a,	// (0x000236a2) data_form_wide_pane_vc

0xd846,	// (0x000236ae) form_field_data_wide_pane_vc_g1

0xd84e,	// (0x000236b6) form_field_data_wide_pane_vc_t1_ParamLimits

0xd84e,	// (0x000236b6) form_field_data_wide_pane_vc_t1

0xc94b,	// (0x000227b3) input_focus_pane_cp6_vc_ParamLimits

0xc94b,	// (0x000227b3) input_focus_pane_cp6_vc

0xda97,	// (0x000238ff) list_midp_pane_ParamLimits

0xe5e8,	// (0x00024450) scroll_pane_cp16_ParamLimits

0xe5e8,	// (0x00024450) scroll_pane_cp16

0xdae1,	// (0x00023949) button_value_adjust_pane_ParamLimits

0xdae1,	// (0x00023949) button_value_adjust_pane

0xa852,	// (0x000206ba) button_value_adjust_pane_cp6_ParamLimits

0xa852,	// (0x000206ba) button_value_adjust_pane_cp6

0xa95c,	// (0x000207c4) settings_code_pane_cp_ParamLimits

0xa95c,	// (0x000207c4) settings_code_pane_cp

0xc32a,	// (0x00022192) cell_touch_pane_g1

0xc32a,	// (0x00022192) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0002556b) cell_touch_pane_g

0xaad4,	// (0x0002093c) cell_touch_pane_cp_ParamLimits

0xaad4,	// (0x0002093c) cell_touch_pane_cp

0xaaf0,	// (0x00020958) cell_touch_pane_ParamLimits

0xaaf0,	// (0x00020958) cell_touch_pane

0xc32a,	// (0x00022192) scroll_sc2_down_pane_g1

0xc32a,	// (0x00022192) scroll_sc2_up_pane_g1

0xc334,	// (0x0002219c) bg_set_opt_pane_cp4_vc

0xecfe,	// (0x00024b66) list_set_graphic_pane_vc_g1_ParamLimits

0xecfe,	// (0x00024b66) list_set_graphic_pane_vc_g1

0xed0a,	// (0x00024b72) list_set_graphic_pane_vc_g2_ParamLimits

0xed0a,	// (0x00024b72) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x0002585b) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x0002585b) list_set_graphic_pane_vc_g

0xed16,	// (0x00024b7e) text_primary_small_cp13_vc_ParamLimits

0xed16,	// (0x00024b7e) text_primary_small_cp13_vc

0xe5c5,	// (0x0002442d) list_set_graphic_pane_vc_ParamLimits

0xe5c5,	// (0x0002442d) list_set_graphic_pane_vc

0xc334,	// (0x0002219c) input_focus_pane_cp2_vc

0xc32a,	// (0x00022192) setting_code_pane_vc_g1

0xc3b7,	// (0x0002221f) setting_code_pane_vc_t1

0xed2e,	// (0x00024b96) set_text_pane_vc_t1_ParamLimits

0xed2e,	// (0x00024b96) set_text_pane_vc_t1

0xc334,	// (0x0002219c) input_focus_pane_cp1_vc

0xed48,	// (0x00024bb0) list_set_text_pane_vc

0xc32a,	// (0x00022192) setting_text_pane_vc_g1

0xc334,	// (0x0002219c) bg_set_opt_pane_cp2_vc

0xc3ae,	// (0x00022216) setting_slider_graphic_pane_vc_g1

0xed52,	// (0x00024bba) setting_slider_graphic_pane_vc_t1

0xed61,	// (0x00024bc9) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x00025860) setting_slider_graphic_pane_vc_t

0xed70,	// (0x00024bd8) slider_set_pane_cp_vc

0xed78,	// (0x00024be0) slider_set_pane_vc_g1

0xed81,	// (0x00024be9) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x00025865) slider_set_pane_vc_g

0xc9a3,	// (0x0002280b) set_opt_bg_pane_g1_copy1

0xc9ab,	// (0x00022813) set_opt_bg_pane_g2_copy1

0xedad,	// (0x00024c15) set_opt_bg_pane_g3_copy1

0xc9bb,	// (0x00022823) set_opt_bg_pane_g4_copy1

0xc9c3,	// (0x0002282b) set_opt_bg_pane_g5_copy1

0xc9cb,	// (0x00022833) set_opt_bg_pane_g6_copy1

0xedb5,	// (0x00024c1d) set_opt_bg_pane_g7_copy1

0xedbd,	// (0x00024c25) set_opt_bg_pane_g8_copy1

0xedc5,	// (0x00024c2d) set_opt_bg_pane_g9_copy1

0xc334,	// (0x0002219c) bg_set_opt_pane_cp_vc

0xedcd,	// (0x00024c35) setting_slider_pane_vc_t1

0xeddc,	// (0x00024c44) setting_slider_pane_vc_t2

0xedeb,	// (0x00024c53) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x00025874) setting_slider_pane_vc_t

0xedfa,	// (0x00024c62) slider_set_pane_vc

0x58ea,	// (0x0001b752) volume_set_pane_vc_g1

0x5bcf,	// (0x0001ba37) volume_set_pane_vc_g2

0x5bd8,	// (0x0001ba40) volume_set_pane_vc_g3

0x5be1,	// (0x0001ba49) volume_set_pane_vc_g4

0x5bea,	// (0x0001ba52) volume_set_pane_vc_g5

0x5bf3,	// (0x0001ba5b) volume_set_pane_vc_g6

0x5bfc,	// (0x0001ba64) volume_set_pane_vc_g7

0x5c05,	// (0x0001ba6d) volume_set_pane_vc_g8

0x5c0e,	// (0x0001ba76) volume_set_pane_vc_g9

0x5c17,	// (0x0001ba7f) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x0002587b) volume_set_pane_vc_g

0xee02,	// (0x00024c6a) volume_set_pane_vc

0xee0a,	// (0x00024c72) button_value_adjust_pane_cp1_vc

0xee12,	// (0x00024c7a) list_highlight_pane_cp2_vc

0xee1b,	// (0x00024c83) list_set_pane_vc_ParamLimits

0xee1b,	// (0x00024c83) list_set_pane_vc

0xee6d,	// (0x00024cd5) main_pane_set_vc_t1_ParamLimits

0xee6d,	// (0x00024cd5) main_pane_set_vc_t1

0xee82,	// (0x00024cea) main_pane_set_vc_t2_ParamLimits

0xee82,	// (0x00024cea) main_pane_set_vc_t2

0xee94,	// (0x00024cfc) main_pane_set_vc_t3_ParamLimits

0xee94,	// (0x00024cfc) main_pane_set_vc_t3

0xeea6,	// (0x00024d0e) main_pane_set_vc_t4_ParamLimits

0xeea6,	// (0x00024d0e) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x00025890) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x00025890) main_pane_set_vc_t

0xeeb8,	// (0x00024d20) setting_code_pane_vc_ParamLimits

0xeeb8,	// (0x00024d20) setting_code_pane_vc

0xeec7,	// (0x00024d2f) setting_slider_graphic_pane_vc

0xeec7,	// (0x00024d2f) setting_slider_pane_vc

0xeec7,	// (0x00024d2f) setting_text_pane_vc

0xeec7,	// (0x00024d2f) setting_volume_pane_vc

0xeecf,	// (0x00024d37) scroll_pane_cp121_vc

0xc925,	// (0x0002278d) set_content_pane_vc

0xeed7,	// (0x00024d3f) button_value_adjust_pane_g1

0xeee0,	// (0x00024d48) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x000258e5) button_value_adjust_pane_g

0xeee9,	// (0x00024d51) form_field_slider_wide_pane_vc_t1_ParamLimits

0xeee9,	// (0x00024d51) form_field_slider_wide_pane_vc_t1

0xeefb,	// (0x00024d63) form_field_slider_wide_pane_vc_t2_ParamLimits

0xeefb,	// (0x00024d63) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x000258ea) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x000258ea) form_field_slider_wide_pane_vc_t

0xc382,	// (0x000221ea) input_focus_pane_cp10_vc_ParamLimits

0xc382,	// (0x000221ea) input_focus_pane_cp10_vc

0xef23,	// (0x00024d8b) slider_cont_pane_cp1_vc_ParamLimits

0xef23,	// (0x00024d8b) slider_cont_pane_cp1_vc

0xef33,	// (0x00024d9b) slider_form_pane_g1_cp2

0xed81,	// (0x00024be9) slider_form_pane_g2_cp2

0xef60,	// (0x00024dc8) form_field_slider_pane_vc_t3

0xef6e,	// (0x00024dd6) form_field_slider_pane_vc_t4

0xef7c,	// (0x00024de4) slider_form_pane_vc_ParamLimits

0xef7c,	// (0x00024de4) slider_form_pane_vc

0xef89,	// (0x00024df1) form_field_slider_pane_vc_t1_ParamLimits

0xef89,	// (0x00024df1) form_field_slider_pane_vc_t1

0xeefb,	// (0x00024d63) form_field_slider_pane_vc_t2_ParamLimits

0xeefb,	// (0x00024d63) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x000258fc) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x000258fc) form_field_slider_pane_vc_t

0xc382,	// (0x000221ea) input_focus_pane_cp9_vc_ParamLimits

0xc382,	// (0x000221ea) input_focus_pane_cp9_vc

0xef9f,	// (0x00024e07) slider_cont_pane_vc_ParamLimits

0xef9f,	// (0x00024e07) slider_cont_pane_vc

0xefb1,	// (0x00024e19) list_form_graphic_pane_cp_vc_ParamLimits

0xefb1,	// (0x00024e19) list_form_graphic_pane_cp_vc

0xd846,	// (0x000236ae) form_field_popup_wide_pane_vc_g1

0xefc6,	// (0x00024e2e) form_field_popup_wide_pane_vc_t1_ParamLimits

0xefc6,	// (0x00024e2e) form_field_popup_wide_pane_vc_t1

0xc94b,	// (0x000227b3) input_focus_pane_cp8_vc_ParamLimits

0xc94b,	// (0x000227b3) input_focus_pane_cp8_vc

0xf005,	// (0x00024e6d) list_form_wide_pane_vc_ParamLimits

0xf005,	// (0x00024e6d) list_form_wide_pane_vc

0xf011,	// (0x00024e79) list_form_graphic_pane_vc_g1

0xf019,	// (0x00024e81) list_form_graphic_pane_vc_t1_ParamLimits

0xf019,	// (0x00024e81) list_form_graphic_pane_vc_t1

0xc3a0,	// (0x00022208) list_highlight_pane_cp5_vc_ParamLimits

0xc3a0,	// (0x00022208) list_highlight_pane_cp5_vc

0xf035,	// (0x00024e9d) list_form_graphic_pane_vc_ParamLimits

0xf035,	// (0x00024e9d) list_form_graphic_pane_vc

0xd846,	// (0x000236ae) form_field_popup_pane_vc_g1

0xf04b,	// (0x00024eb3) form_field_popup_pane_vc_t1_ParamLimits

0xf04b,	// (0x00024eb3) form_field_popup_pane_vc_t1

0xc94b,	// (0x000227b3) input_focus_pane_cp7_vc_ParamLimits

0xc94b,	// (0x000227b3) input_focus_pane_cp7_vc

0xf060,	// (0x00024ec8) list_form_pane_vc_ParamLimits

0xf060,	// (0x00024ec8) list_form_pane_vc

0xf06c,	// (0x00024ed4) data_form_pane_vc_t1_ParamLimits

0xf06c,	// (0x00024ed4) data_form_pane_vc_t1

0xc9a3,	// (0x0002280b) input_focus_pane_vc_g1

0xc9ab,	// (0x00022813) input_focus_pane_vc_g2

0xc9b3,	// (0x0002281b) input_focus_pane_vc_g3

0xc9bb,	// (0x00022823) input_focus_pane_vc_g4

0xc9c3,	// (0x0002282b) input_focus_pane_vc_g5

0xc9cb,	// (0x00022833) input_focus_pane_vc_g6

0xc9d3,	// (0x0002283b) input_focus_pane_vc_g7

0xc9db,	// (0x00022843) input_focus_pane_vc_g8

0xc9e3,	// (0x0002284b) input_focus_pane_vc_g9

0xc32a,	// (0x00022192) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x000254f4) input_focus_pane_vc_g

0xd83a,	// (0x000236a2) data_form_pane_vc_ParamLimits

0xd83a,	// (0x000236a2) data_form_pane_vc

0xd846,	// (0x000236ae) form_field_data_pane_vc_g1

0xf087,	// (0x00024eef) form_field_data_pane_vc_t1_ParamLimits

0xf087,	// (0x00024eef) form_field_data_pane_vc_t1

0xc94b,	// (0x000227b3) input_focus_pane_vc_ParamLimits

0xc94b,	// (0x000227b3) input_focus_pane_vc

0xf09d,	// (0x00024f05) button_value_adjust_pane_cp3_vc

0xf0a5,	// (0x00024f0d) button_value_adjust_pane_cp5_vc

0xf0ad,	// (0x00024f15) form_field_data_pane_vc_ParamLimits

0xf0ad,	// (0x00024f15) form_field_data_pane_vc

0xf0c4,	// (0x00024f2c) form_field_data_pane_vc_cp2

0xf0cc,	// (0x00024f34) form_field_data_wide_pane_vc_ParamLimits

0xf0cc,	// (0x00024f34) form_field_data_wide_pane_vc

0xf0e2,	// (0x00024f4a) form_field_data_wide_pane_vc_cp2

0xf0ea,	// (0x00024f52) form_field_popup_pane_vc_ParamLimits

0xf0ea,	// (0x00024f52) form_field_popup_pane_vc

0xf101,	// (0x00024f69) form_field_popup_wide_pane_vc_ParamLimits

0xf101,	// (0x00024f69) form_field_popup_wide_pane_vc

0xf117,	// (0x00024f7f) form_field_slider_pane_vc_ParamLimits

0xf117,	// (0x00024f7f) form_field_slider_pane_vc

0xf12a,	// (0x00024f92) form_field_slider_wide_pane_vc_ParamLimits

0xf12a,	// (0x00024f92) form_field_slider_wide_pane_vc

0xab0e,	// (0x00020976) grid_touch_1_pane_ParamLimits

0xab0e,	// (0x00020976) grid_touch_1_pane

0xab22,	// (0x0002098a) grid_touch_2_pane_ParamLimits

0xab22,	// (0x0002098a) grid_touch_2_pane

0xf13d,	// (0x00024fa5) touch_pane_g1_ParamLimits

0xf13d,	// (0x00024fa5) touch_pane_g1

0xf14b,	// (0x00024fb3) cell_app_pane_cp_wide_ParamLimits

0xf14b,	// (0x00024fb3) cell_app_pane_cp_wide

0xf15c,	// (0x00024fc4) grid_popup_fast_wide_pane_ParamLimits

0xf15c,	// (0x00024fc4) grid_popup_fast_wide_pane

0xf170,	// (0x00024fd8) scroll_pane_cp19_ParamLimits

0xf170,	// (0x00024fd8) scroll_pane_cp19

0xc334,	// (0x0002219c) bg_popup_window_pane_cp20

0xf184,	// (0x00024fec) listscroll_popup_fast_wide_pane

0xd649,	// (0x000234b1) grid_indicator_nsta_pane

0xf18c,	// (0x00024ff4) clock_nsta_pane_g1

0xf195,	// (0x00024ffd) clock_nsta_pane_t1

0xab4c,	// (0x000209b4) cell_indicator_nsta_pane_ParamLimits

0xab4c,	// (0x000209b4) cell_indicator_nsta_pane

0xf13d,	// (0x00024fa5) cell_indicator_nsta_pane_g1

0xab63,	// (0x000209cb) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0002590d) cell_indicator_nsta_pane_g

0xf1b1,	// (0x00025019) clock_nsta_pane_cp

0xf1b9,	// (0x00025021) indicator_nsta_pane_cp

0xf1c1,	// (0x00025029) nsta_clock_indic_pane_g1

0xc3dc,	// (0x00022244) grid_indicator_pane

0xcdb8,	// (0x00022c20) scroll_pane_cp29

0x4ff0,	// (0x0001ae58) indicator_nsta_pane_cp2_ParamLimits

0x4ff0,	// (0x0001ae58) indicator_nsta_pane_cp2

0xc3a0,	// (0x00022208) main_apps_wheel_pane

0xd97e,	// (0x000237e6) form_midp_field_text_pane_ParamLimits

0xdaab,	// (0x00023913) scroll_bar_cp050_ParamLimits

0xf211,	// (0x00025079) cell_indicator_pane_ParamLimits

0xf211,	// (0x00025079) cell_indicator_pane

0xf225,	// (0x0002508d) cell_indicator_pane_g1

0xab70,	// (0x000209d8) grid_wheel_folder_pane_ParamLimits

0xab70,	// (0x000209d8) grid_wheel_folder_pane

0xab7e,	// (0x000209e6) list_wheel_apps_pane_ParamLimits

0xab7e,	// (0x000209e6) list_wheel_apps_pane

0xab8a,	// (0x000209f2) main_apps_wheel_pane_g1_ParamLimits

0xab8a,	// (0x000209f2) main_apps_wheel_pane_g1

0xab96,	// (0x000209fe) main_apps_wheel_pane_g2_ParamLimits

0xab96,	// (0x000209fe) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x00025929) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x00025929) main_apps_wheel_pane_g

0xaba2,	// (0x00020a0a) main_apps_wheel_pane_t1_ParamLimits

0xaba2,	// (0x00020a0a) main_apps_wheel_pane_t1

0xabb4,	// (0x00020a1c) list_wheel_apps_pane_g1

0xabbc,	// (0x00020a24) list_wheel_apps_pane_g2

0xabc4,	// (0x00020a2c) list_wheel_apps_pane_g3

0xabcc,	// (0x00020a34) list_wheel_apps_pane_g4

0xabd4,	// (0x00020a3c) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0002592e) list_wheel_apps_pane_g

0xd24b,	// (0x000230b3) navi_icon_text_pane

0xa177,	// (0x0001ffdf) aid_fill_nsta

0xf22f,	// (0x00025097) navi_icon_text_pane_g1

0xf23b,	// (0x000250a3) navi_icon_text_pane_t1

0xd0f5,	// (0x00022f5d) list_set_graphic_pane_t1_ParamLimits

0xd0f5,	// (0x00022f5d) list_set_graphic_pane_t1

0xe193,	// (0x00023ffb) popup_midp_note_alarm_window_t6_ParamLimits

0xe193,	// (0x00023ffb) popup_midp_note_alarm_window_t6

0xe1a5,	// (0x0002400d) popup_midp_note_alarm_window_t7_ParamLimits

0xe1a5,	// (0x0002400d) popup_midp_note_alarm_window_t7

0xe1b7,	// (0x0002401f) popup_midp_note_alarm_window_t8_ParamLimits

0xe1b7,	// (0x0002401f) popup_midp_note_alarm_window_t8

0xe1c9,	// (0x00024031) popup_midp_note_alarm_window_t9_ParamLimits

0xe1c9,	// (0x00024031) popup_midp_note_alarm_window_t9

0xe1db,	// (0x00024043) popup_midp_note_alarm_window_t10_ParamLimits

0xe1db,	// (0x00024043) popup_midp_note_alarm_window_t10

0xe1ed,	// (0x00024055) popup_midp_note_alarm_window_t11_ParamLimits

0xe1ed,	// (0x00024055) popup_midp_note_alarm_window_t11

0xe1ff,	// (0x00024067) scroll_pane_cp17_ParamLimits

0xe1ff,	// (0x00024067) scroll_pane_cp17

0x58ea,	// (0x0001b752) volume_small_pane_cp_g1

0x5c20,	// (0x0001ba88) volume_small_pane_cp_g2

0x5c29,	// (0x0001ba91) volume_small_pane_cp_g3

0x5c32,	// (0x0001ba9a) volume_small_pane_cp_g4

0x5c3b,	// (0x0001baa3) volume_small_pane_cp_g5

0x5c44,	// (0x0001baac) volume_small_pane_cp_g6

0x5c4d,	// (0x0001bab5) volume_small_pane_cp_g7

0x5c56,	// (0x0001babe) volume_small_pane_cp_g8

0x5c5f,	// (0x0001bac7) volume_small_pane_cp_g9

0x5c68,	// (0x0001bad0) volume_small_pane_cp_g10

0xd3f3,	// (0x0002325b) midp_ticker_pane_g1_ParamLimits

0xd3ff,	// (0x00023267) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x000255c0) midp_ticker_pane_g_ParamLimits

0xd40b,	// (0x00023273) midp_ticker_pane_t1_ParamLimits

0xa193,	// (0x0001fffb) aid_fill_nsta_2

0xdaa3,	// (0x0002390b) list_form2_midp_pane

0xe8ed,	// (0x00024755) midp_editing_number_pane_ParamLimits

0xe8fc,	// (0x00024764) midp_ticker_pane_ParamLimits

0xf24d,	// (0x000250b5) form2_midp_field_pane

0xf255,	// (0x000250bd) scroll_pane_cp51

0xf275,	// (0x000250dd) form2_midp_button_pane_ParamLimits

0xf275,	// (0x000250dd) form2_midp_button_pane

0xf287,	// (0x000250ef) form2_midp_content_pane_ParamLimits

0xf287,	// (0x000250ef) form2_midp_content_pane

0xf2a1,	// (0x00025109) form2_midp_field_choice_group_pane

0xf2a9,	// (0x00025111) form2_midp_field_pane_g1

0xf2b1,	// (0x00025119) form2_midp_field_pane_g2

0xf2b9,	// (0x00025121) form2_midp_field_pane_g3

0xf2c1,	// (0x00025129) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00025953) form2_midp_field_pane_g

0xf2c9,	// (0x00025131) form2_midp_gauge_slider_pane

0xf2d1,	// (0x00025139) form2_midp_gauge_wait_pane

0xf2d9,	// (0x00025141) form2_midp_image_pane_ParamLimits

0xf2d9,	// (0x00025141) form2_midp_image_pane

0xac09,	// (0x00020a71) form2_midp_label_pane_ParamLimits

0xac09,	// (0x00020a71) form2_midp_label_pane

0xac22,	// (0x00020a8a) form2_midp_label_pane_cp_ParamLimits

0xac22,	// (0x00020a8a) form2_midp_label_pane_cp

0xf2f4,	// (0x0002515c) form2_midp_string_pane_ParamLimits

0xf2f4,	// (0x0002515c) form2_midp_string_pane

0x8f7a,	// (0x0001ede2) form2_midp_text_pane_ParamLimits

0x8f7a,	// (0x0001ede2) form2_midp_text_pane

0xf306,	// (0x0002516e) form2_midp_time_pane

0xf316,	// (0x0002517e) input_focus_pane_cp51_ParamLimits

0xf316,	// (0x0002517e) input_focus_pane_cp51

0xac41,	// (0x00020aa9) form2_midp_label_pane_t1_ParamLimits

0xac41,	// (0x00020aa9) form2_midp_label_pane_t1

0x8f93,	// (0x0001edfb) form2_mdip_text_pane_t1_ParamLimits

0x8f93,	// (0x0001edfb) form2_mdip_text_pane_t1

0x4561,	// (0x0001a3c9) form2_midp_time_pane_t1

0xf336,	// (0x0002519e) form2_midp_gauge_slider_pane_t1

0xac7c,	// (0x00020ae4) form2_midp_gauge_slider_pane_t2

0xac8e,	// (0x00020af6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x0002595c) form2_midp_gauge_slider_pane_t

0xf348,	// (0x000251b0) form2_midp_slider_pane

0xf354,	// (0x000251bc) form2_midp_gauge_wait_pane_t1

0xf362,	// (0x000251ca) form2_midp_wait_pane_ParamLimits

0xf362,	// (0x000251ca) form2_midp_wait_pane

0xe5a7,	// (0x0002440f) list_single_2graphic_pane_cp4_ParamLimits

0xe5a7,	// (0x0002440f) list_single_2graphic_pane_cp4

0xa5f7,	// (0x0002045f) list_single_midp_graphic_pane_cp_ParamLimits

0xa5f7,	// (0x0002045f) list_single_midp_graphic_pane_cp

0xc334,	// (0x0002219c) list_highlight_pane_cp20

0xf38d,	// (0x000251f5) list_single_2graphic_pane_g1_cp4

0xec37,	// (0x00024a9f) list_single_2graphic_pane_g2_cp4

0xf395,	// (0x000251fd) list_single_2graphic_pane_t1_cp4

0xc3a0,	// (0x00022208) list_highlight_pane_cp21

0xf3a4,	// (0x0002520c) list_single_midp_graphic_pane_g4_cp

0xf3b3,	// (0x0002521b) list_single_midp_graphic_pane_t1_cp

0xaca0,	// (0x00020b08) form2_mdip_string_pane_t1_ParamLimits

0xaca0,	// (0x00020b08) form2_mdip_string_pane_t1

0xc334,	// (0x0002219c) bg_wml_button_pane_cp2

0xc32a,	// (0x00022192) form2_midp_image_pane_g1

0x3be7,	// (0x00019a4f) list_double_large_graphic_pane_g5_ParamLimits

0x3be7,	// (0x00019a4f) list_double_large_graphic_pane_g5

0x98dc,	// (0x0001f744) midp_form_pane_ParamLimits

0xc3a0,	// (0x00022208) main_apps_wheel_pane_ParamLimits

0x9f13,	// (0x0001fd7b) popup_preview_window_ParamLimits

0x9f13,	// (0x0001fd7b) popup_preview_window

0x5787,	// (0x0001b5ef) popup_touch_info_window_ParamLimits

0x5787,	// (0x0001b5ef) popup_touch_info_window

0x57a5,	// (0x0001b60d) popup_touch_menu_window_ParamLimits

0x57a5,	// (0x0001b60d) popup_touch_menu_window

0xc320,	// (0x00022188) bg_popup_sub_pane_cp6

0xf3c8,	// (0x00025230) list_touch_menu_pane

0xf3d0,	// (0x00025238) list_single_touch_menu_pane_ParamLimits

0xf3d0,	// (0x00025238) list_single_touch_menu_pane

0xf3e4,	// (0x0002524c) list_single_touch_menu_pane_t1

0xc3a0,	// (0x00022208) bg_popup_sub_pane_cp7_ParamLimits

0xc3a0,	// (0x00022208) bg_popup_sub_pane_cp7

0xf3f2,	// (0x0002525a) heading_sub_pane

0xf3fa,	// (0x00025262) list_touch_info_pane_ParamLimits

0xf3fa,	// (0x00025262) list_touch_info_pane

0xf409,	// (0x00025271) list_single_touch_info_pane_ParamLimits

0xf409,	// (0x00025271) list_single_touch_info_pane

0xf41a,	// (0x00025282) list_single_touch_info_pane_t1

0xf428,	// (0x00025290) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x0002596a) list_single_touch_info_pane_t

0xd3c9,	// (0x00023231) bg_popup_heading_pane_cp

0xf436,	// (0x0002529e) heading_sub_pane_t1

0xd800,	// (0x00023668) bg_popup_preview_window_pane_cp_ParamLimits

0xd800,	// (0x00023668) bg_popup_preview_window_pane_cp

0xf3f2,	// (0x0002525a) heading_preview_pane

0xf3fa,	// (0x00025262) list_preview_pane_ParamLimits

0xf3fa,	// (0x00025262) list_preview_pane

0xf444,	// (0x000252ac) popup_preview_window_g1

0xf409,	// (0x00025271) list_single_preview_pane_ParamLimits

0xf409,	// (0x00025271) list_single_preview_pane

0xf44c,	// (0x000252b4) list_single_preview_pane_g1

0xf454,	// (0x000252bc) list_single_preview_pane_t1

0xf41a,	// (0x00025282) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0002596f) list_single_preview_pane_t

0xf462,	// (0x000252ca) bg_popup_heading_pane_cp2_ParamLimits

0xf462,	// (0x000252ca) bg_popup_heading_pane_cp2

0xf478,	// (0x000252e0) heading_preview_pane_g1

0xf480,	// (0x000252e8) heading_preview_pane_t1_ParamLimits

0xf480,	// (0x000252e8) heading_preview_pane_t1

0xc3f3,	// (0x0002225b) soft_indicator_pane_t1_ParamLimits

0xc8c7,	// (0x0002272f) scroll_pane_ParamLimits

0xccb4,	// (0x00022b1c) scroll_sc2_left_pane

0xccbd,	// (0x00022b25) scroll_sc2_right_pane

0xccdc,	// (0x00022b44) scroll_bg_pane_g1_ParamLimits

0xccf1,	// (0x00022b59) scroll_bg_pane_g2_ParamLimits

0xcd09,	// (0x00022b71) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0002554b) scroll_bg_pane_g_ParamLimits

0xccdc,	// (0x00022b44) scroll_handle_pane_g1_ParamLimits

0xcd2b,	// (0x00022b93) scroll_handle_pane_g2_ParamLimits

0xcd09,	// (0x00022b71) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00025552) scroll_handle_pane_g_ParamLimits

0x5331,	// (0x0001b199) popup_choice_list_window_ParamLimits

0x5331,	// (0x0001b199) popup_choice_list_window

0xd6c0,	// (0x00023528) choice_list_pane

0xd740,	// (0x000235a8) cell_toolbar_pane_t1

0xd768,	// (0x000235d0) toolbar_button_pane_ParamLimits

0xe686,	// (0x000244ee) ai_gene_pane_1_t2_ParamLimits

0xe686,	// (0x000244ee) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0002576e) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0002576e) ai_gene_pane_1_t

0xf49d,	// (0x00025305) scroll_sc2_left_pane_g1

0xf49d,	// (0x00025305) scroll_sc2_right_pane_g1

0xcab4,	// (0x0002291c) bg_popup_sub_pane_cp10

0xf4a7,	// (0x0002530f) list_choice_list_pane

0xf4be,	// (0x00025326) list_single_choice_list_pane_ParamLimits

0xf4be,	// (0x00025326) list_single_choice_list_pane

0xf4d2,	// (0x0002533a) list_single_choice_list_pane_g1

0xca97,	// (0x000228ff) list_single_choice_list_pane_t1_ParamLimits

0xca97,	// (0x000228ff) list_single_choice_list_pane_t1

0xf4da,	// (0x00025342) choice_list_pane_g1

0xf4e2,	// (0x0002534a) choice_list_pane_t1

0xc320,	// (0x00022188) input_focus_pane_cp11

0xcc29,	// (0x00022a91) title_pane_stacon_g2_ParamLimits

0xcc29,	// (0x00022a91) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00025531) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00025531) title_pane_stacon_g

0xd3c9,	// (0x00023231) cursor_press_pane

0x9c7a,	// (0x0001fae2) popup_fep_hwr_window_ParamLimits

0x9c7a,	// (0x0001fae2) popup_fep_hwr_window

0x5429,	// (0x0001b291) popup_fep_vkb_window_ParamLimits

0x5429,	// (0x0001b291) popup_fep_vkb_window

0xf4f0,	// (0x00025358) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x00025998) fep_vkb_side_pane_g_ParamLimits

0x5ca6,	// (0x0001bb0e) fep_hwr_candidate_pane_ParamLimits

0x5ca6,	// (0x0001bb0e) fep_hwr_candidate_pane

0x5cce,	// (0x0001bb36) fep_hwr_side_pane_ParamLimits

0x5cce,	// (0x0001bb36) fep_hwr_side_pane

0x5cee,	// (0x0001bb56) fep_hwr_top_pane_ParamLimits

0x5cee,	// (0x0001bb56) fep_hwr_top_pane

0x5d06,	// (0x0001bb6e) fep_hwr_write_pane_ParamLimits

0x5d06,	// (0x0001bb6e) fep_hwr_write_pane

0xfb30,	// (0x00025998) fep_vkb_side_pane_g

0xf4f8,	// (0x00025360) fep_hwr_top_pane_g1

0xf50a,	// (0x00025372) fep_hwr_top_pane_g2

0x5d32,	// (0x0001bb9a) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x00025974) fep_hwr_top_pane_g

0x5d47,	// (0x0001bbaf) fep_hwr_top_text_pane

0xce7f,	// (0x00022ce7) fep_hwr_top_text_pane_g1

0xf540,	// (0x000253a8) fep_hwr_top_text_pane_t1

0x5e35,	// (0x0001bc9d) fep_hwr_candidate_pane_g1

0x1533,	// (0x0001739b) fep_vkb_keypad_pane_g3_ParamLimits

0x1533,	// (0x0001739b) fep_vkb_keypad_pane_g3

0x1555,	// (0x000173bd) fep_vkb_keypad_pane_g4_ParamLimits

0x1555,	// (0x000173bd) fep_vkb_keypad_pane_g4

0x15c4,	// (0x0001742c) fep_vkb_bottom_pane_g2_ParamLimits

0x15c4,	// (0x0001742c) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x0002599f) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x0002599f) fep_vkb_bottom_pane_g

0xf49d,	// (0x00025305) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x000259a9) cell_vkb_side_pane_g

0x1608,	// (0x00017470) cell_vkb_side_pane_t1

0x1616,	// (0x0001747e) cell_vkb_side_pane_t1_copy1

0xf49d,	// (0x00025305) bg_fep_vkb_candidate_pane_g2

0x16e4,	// (0x0001754c) cell_vkb_candidate_pane_ParamLimits

0x1378,	// (0x000171e0) aid_size_cell_vkb_ParamLimits

0x1378,	// (0x000171e0) aid_size_cell_vkb

0x16e4,	// (0x0001754c) cell_vkb_candidate_pane

0x5f33,	// (0x0001bd9b) bg_popup_fep_shadow_pane_g1

0x13e2,	// (0x0001724a) fep_vkb_bottom_pane_ParamLimits

0x13e2,	// (0x0001724a) fep_vkb_bottom_pane

0x141f,	// (0x00017287) fep_vkb_candidate_pane_ParamLimits

0x141f,	// (0x00017287) fep_vkb_candidate_pane

0x143b,	// (0x000172a3) fep_vkb_keypad_pane_ParamLimits

0x143b,	// (0x000172a3) fep_vkb_keypad_pane

0x146f,	// (0x000172d7) fep_vkb_side_pane_ParamLimits

0x146f,	// (0x000172d7) fep_vkb_side_pane

0x149b,	// (0x00017303) fep_vkb_top_pane_ParamLimits

0x149b,	// (0x00017303) fep_vkb_top_pane

0x14c7,	// (0x0001732f) fep_vkb_top_pane_g1_ParamLimits

0x14c7,	// (0x0001732f) fep_vkb_top_pane_g1

0x14d6,	// (0x0001733e) fep_vkb_top_pane_g2_ParamLimits

0x14d6,	// (0x0001733e) fep_vkb_top_pane_g2

0x14e5,	// (0x0001734d) fep_vkb_top_pane_g3_ParamLimits

0x14e5,	// (0x0001734d) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x0002598f) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x0002598f) fep_vkb_top_pane_g

0x1503,	// (0x0001736b) fep_vkb_top_text_pane_ParamLimits

0x1503,	// (0x0001736b) fep_vkb_top_text_pane

0xad5e,	// (0x00020bc6) fep_vkb_side_pane_g1_ParamLimits

0xad5e,	// (0x00020bc6) fep_vkb_side_pane_g1

0x1522,	// (0x0001738a) grid_vkb_side_pane_ParamLimits

0x1522,	// (0x0001738a) grid_vkb_side_pane

0x5f3b,	// (0x0001bda3) bg_popup_fep_shadow_pane_g2

0x5f44,	// (0x0001bdac) bg_popup_fep_shadow_pane_g3

0x5f4c,	// (0x0001bdb4) bg_popup_fep_shadow_pane_g4

0x5f55,	// (0x0001bdbd) bg_popup_fep_shadow_pane_g5

0x5f5d,	// (0x0001bdc5) bg_popup_fep_shadow_pane_g6

0x5f65,	// (0x0001bdcd) bg_popup_fep_shadow_pane_g7

0xc9c3,	// (0x0002282b) bg_popup_fep_shadow_pane_g8

0x1573,	// (0x000173db) grid_vkb_keypad_number_pane_ParamLimits

0x1573,	// (0x000173db) grid_vkb_keypad_number_pane

0x1583,	// (0x000173eb) grid_vkb_keypad_pane_ParamLimits

0x1583,	// (0x000173eb) grid_vkb_keypad_pane

0x15a9,	// (0x00017411) fep_vkb_bottom_pane_g1_ParamLimits

0x15a9,	// (0x00017411) fep_vkb_bottom_pane_g1

0x15d2,	// (0x0001743a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x15d2,	// (0x0001743a) grid_vkb_keypad_bottom_left_pane

0x15e7,	// (0x0001744f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x15e7,	// (0x0001744f) grid_vkb_keypad_bottom_right_pane

0x15fc,	// (0x00017464) fep_vkb_top_text_pane_g1

0xada5,	// (0x00020c0d) fep_vkb_top_text_pane_t1

0xadb7,	// (0x00020c1f) cell_vkb_side_pane_ParamLimits

0xadb7,	// (0x00020c1f) cell_vkb_side_pane

0xf49d,	// (0x00025305) cell_vkb_side_pane_g1

0x1624,	// (0x0001748c) cell_vkb_keypad_pane_ParamLimits

0x1624,	// (0x0001748c) cell_vkb_keypad_pane

0x1691,	// (0x000174f9) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x000259bc) bg_popup_fep_shadow_pane_g

0xf49d,	// (0x00025305) cell_hwr_side_pane_g1

0xf49d,	// (0x00025305) cell_hwr_side_pane_g2

0x169b,	// (0x00017503) cell_vkb_keypad_pane_t1

0xadcd,	// (0x00020c35) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xadcd,	// (0x00020c35) cell_vkb_keypad_bottom_left_pane

0xade2,	// (0x00020c4a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xade2,	// (0x00020c4a) cell_vkb_keypad_bottom_right_pane

0xf49d,	// (0x00025305) cell_vkb_keypad_bottom_left_pane_g1

0xf49d,	// (0x00025305) cell_vkb_keypad_bottom_right_pane_g1

0x16a9,	// (0x00017511) cell_vkb_keypad_number_pane_ParamLimits

0x16a9,	// (0x00017511) cell_vkb_keypad_number_pane

0x16c8,	// (0x00017530) cell_vkb_keypad_number_pane_g1

0x16d2,	// (0x0001753a) cell_vkb_keypad_number_pane_g2

0x16db,	// (0x00017543) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x000259ae) cell_vkb_keypad_number_pane_g

0x169b,	// (0x00017503) cell_vkb_keypad_number_pane_t1

0x16fd,	// (0x00017565) fep_vkb_candidate_pane_g1

0x0001,

0xfb41,	// (0x000259a9) cell_hwr_side_pane_g

0x1716,	// (0x0001757e) cell_hwr_side_pane_t1

0x5f75,	// (0x0001bddd) cell_hwr_side_pane_t1_copy1

0x14f5,	// (0x0001735d) cell_hwr_candidate_pane_g1

0x5f83,	// (0x0001bdeb) cell_hwr_candidate_pane_t1

0xf49d,	// (0x00025305) cell_vkb_candidate_pane_g2

0x175a,	// (0x000175c2) cell_vkb_candidate_pane_t1

0x5c71,	// (0x0001bad9) bg_popup_fep_shadow_pane_ParamLimits

0x5c71,	// (0x0001bad9) bg_popup_fep_shadow_pane

0x2510,	// (0x00018378) bg_fep_hwr_top_pane_g4

0xf51c,	// (0x00025384) bg_hwr_side_pane_g1_ParamLimits

0xf51c,	// (0x00025384) bg_hwr_side_pane_g1

0xad19,	// (0x00020b81) cell_hwr_side_pane_ParamLimits

0xad19,	// (0x00020b81) cell_hwr_side_pane

0x5dbe,	// (0x0001bc26) fep_hwr_write_pane_g1_ParamLimits

0x5dbe,	// (0x0001bc26) fep_hwr_write_pane_g1

0x5dcb,	// (0x0001bc33) fep_hwr_write_pane_g2_ParamLimits

0x5dcb,	// (0x0001bc33) fep_hwr_write_pane_g2

0x5dd8,	// (0x0001bc40) fep_hwr_write_pane_g3_ParamLimits

0x5dd8,	// (0x0001bc40) fep_hwr_write_pane_g3

0xad39,	// (0x00020ba1) fep_hwr_write_pane_g4_ParamLimits

0xad39,	// (0x00020ba1) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x0002597b) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x0002597b) fep_hwr_write_pane_g

0x2510,	// (0x00018378) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2510,	// (0x00018378) bg_fep_hwr_candidate_pane_g2

0x5dfb,	// (0x0001bc63) cell_hwr_candidate_pane_ParamLimits

0x5dfb,	// (0x0001bc63) cell_hwr_candidate_pane

0x5e35,	// (0x0001bc9d) fep_hwr_candidate_pane_g1_ParamLimits

0x13a6,	// (0x0001720e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x13a6,	// (0x0001720e) bg_popup_fep_shadow_pane_cp2

0x14f5,	// (0x0001735d) fep_vkb_top_pane_g4_ParamLimits

0x14f5,	// (0x0001735d) fep_vkb_top_pane_g4

0x1514,	// (0x0001737c) fep_vkb_side_pane_g2_ParamLimits

0x1514,	// (0x0001737c) fep_vkb_side_pane_g2

0x8ce7,	// (0x0001eb4f) list_setting_pane_t4_ParamLimits

0x8ce7,	// (0x0001eb4f) list_setting_pane_t4

0x8d81,	// (0x0001ebe9) list_setting_number_pane_t5_ParamLimits

0x8d81,	// (0x0001ebe9) list_setting_number_pane_t5

0x9838,	// (0x0001f6a0) list_double_heading_pane_cp2_ParamLimits

0x9838,	// (0x0001f6a0) list_double_heading_pane_cp2

0xc959,	// (0x000227c1) list_double_heading_pane_g1_cp2_ParamLimits

0xc959,	// (0x000227c1) list_double_heading_pane_g1_cp2

0xc965,	// (0x000227cd) list_double_heading_pane_g2_cp2_ParamLimits

0xc965,	// (0x000227cd) list_double_heading_pane_g2_cp2

0x1768,	// (0x000175d0) list_double_heading_pane_t1_cp2_ParamLimits

0x1768,	// (0x000175d0) list_double_heading_pane_t1_cp2

0x177e,	// (0x000175e6) list_double_heading_pane_t2_cp2_ParamLimits

0x177e,	// (0x000175e6) list_double_heading_pane_t2_cp2

0xc318,	// (0x00022180) aid_value_unit2

0x4bc3,	// (0x0001aa2b) popup_preview_fixed_window

0xc4d3,	// (0x0002233b) bg_popup_preview_window_pane_cp02

0x1790,	// (0x000175f8) list_preview_fixed_pane

0x17d6,	// (0x0001763e) list_empty_pane_fp_ParamLimits

0x17d6,	// (0x0001763e) list_empty_pane_fp

0x17d6,	// (0x0001763e) list_single_cale_day_pane_fp_ParamLimits

0x17d6,	// (0x0001763e) list_single_cale_day_pane_fp

0x17d6,	// (0x0001763e) list_single_graphic_heading_pane_fp_ParamLimits

0x17d6,	// (0x0001763e) list_single_graphic_heading_pane_fp

0x17d6,	// (0x0001763e) list_single_graphic_pane_fp_ParamLimits

0x17d6,	// (0x0001763e) list_single_graphic_pane_fp

0x17d6,	// (0x0001763e) list_single_heading_pane_fp_ParamLimits

0x17d6,	// (0x0001763e) list_single_heading_pane_fp

0x17d6,	// (0x0001763e) list_single_pane_fp_ParamLimits

0x17d6,	// (0x0001763e) list_single_pane_fp

0x17e9,	// (0x00017651) list_single_pane_fp_g1_ParamLimits

0x17e9,	// (0x00017651) list_single_pane_fp_g1

0x4574,	// (0x0001a3dc) list_single_pane_fp_g2_ParamLimits

0x4574,	// (0x0001a3dc) list_single_pane_fp_g2

0x4580,	// (0x0001a3e8) list_single_pane_fp_g3_ParamLimits

0x4580,	// (0x0001a3e8) list_single_pane_fp_g3

0x1815,	// (0x0001767d) list_single_pane_fp_g4_ParamLimits

0x1815,	// (0x0001767d) list_single_pane_fp_g4

0x0003,

0xfb75,	// (0x000259dd) list_single_pane_fp_g_ParamLimits

0xfb75,	// (0x000259dd) list_single_pane_fp_g

0x4594,	// (0x0001a3fc) list_single_pane_fp_t1_ParamLimits

0x4594,	// (0x0001a3fc) list_single_pane_fp_t1

0x45ab,	// (0x0001a413) list_single_graphic_pane_fp_g1_ParamLimits

0x45ab,	// (0x0001a413) list_single_graphic_pane_fp_g1

0x17e9,	// (0x00017651) list_single_graphic_pane_fp_g2_ParamLimits

0x17e9,	// (0x00017651) list_single_graphic_pane_fp_g2

0x4574,	// (0x0001a3dc) list_single_graphic_pane_fp_g3_ParamLimits

0x4574,	// (0x0001a3dc) list_single_graphic_pane_fp_g3

0x4580,	// (0x0001a3e8) list_single_graphic_pane_fp_g4_ParamLimits

0x4580,	// (0x0001a3e8) list_single_graphic_pane_fp_g4

0x1815,	// (0x0001767d) list_single_graphic_pane_fp_g5_ParamLimits

0x1815,	// (0x0001767d) list_single_graphic_pane_fp_g5

0x0004,

0xfb7e,	// (0x000259e6) list_single_graphic_pane_fp_g_ParamLimits

0xfb7e,	// (0x000259e6) list_single_graphic_pane_fp_g

0x45b7,	// (0x0001a41f) list_single_graphic_pane_fp_t1_ParamLimits

0x45b7,	// (0x0001a41f) list_single_graphic_pane_fp_t1

0x45ab,	// (0x0001a413) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x45ab,	// (0x0001a413) list_single_graphic_heading_pane_fp_g1

0x17e9,	// (0x00017651) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x17e9,	// (0x00017651) list_single_graphic_heading_pane_fp_g2

0x4574,	// (0x0001a3dc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4574,	// (0x0001a3dc) list_single_graphic_heading_pane_fp_g3

0x4580,	// (0x0001a3e8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4580,	// (0x0001a3e8) list_single_graphic_heading_pane_fp_g4

0x1815,	// (0x0001767d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x1815,	// (0x0001767d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x000259e6) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x000259e6) list_single_graphic_heading_pane_fp_g

0x45cd,	// (0x0001a435) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x45cd,	// (0x0001a435) list_single_graphic_heading_pane_fp_t1

0x45e3,	// (0x0001a44b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x45e3,	// (0x0001a44b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x000259f1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x000259f1) list_single_graphic_heading_pane_fp_t

0x45f5,	// (0x0001a45d) list_single_cale_day_pane_fp_g1_ParamLimits

0x45f5,	// (0x0001a45d) list_single_cale_day_pane_fp_g1

0x18ba,	// (0x00017722) list_single_cale_day_pane_fp_g2_ParamLimits

0x18ba,	// (0x00017722) list_single_cale_day_pane_fp_g2

0x462d,	// (0x0001a495) list_single_cale_day_pane_fp_g3_ParamLimits

0x462d,	// (0x0001a495) list_single_cale_day_pane_fp_g3

0x4655,	// (0x0001a4bd) list_single_cale_day_pane_fp_g4_ParamLimits

0x4655,	// (0x0001a4bd) list_single_cale_day_pane_fp_g4

0x4679,	// (0x0001a4e1) list_single_cale_day_pane_fp_g5_ParamLimits

0x4679,	// (0x0001a4e1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8e,	// (0x000259f6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8e,	// (0x000259f6) list_single_cale_day_pane_fp_g

0x469d,	// (0x0001a505) list_single_cale_day_pane_fp_t1_ParamLimits

0x469d,	// (0x0001a505) list_single_cale_day_pane_fp_t1

0x46c3,	// (0x0001a52b) list_single_cale_day_pane_fp_t2_ParamLimits

0x46c3,	// (0x0001a52b) list_single_cale_day_pane_fp_t2

0x46dc,	// (0x0001a544) list_single_cale_day_pane_fp_t3_ParamLimits

0x46dc,	// (0x0001a544) list_single_cale_day_pane_fp_t3

0x0002,

0xfb99,	// (0x00025a01) list_single_cale_day_pane_fp_t_ParamLimits

0xfb99,	// (0x00025a01) list_single_cale_day_pane_fp_t

0x17e9,	// (0x00017651) list_empty_pane_fp_g1_ParamLimits

0x17e9,	// (0x00017651) list_empty_pane_fp_g1

0x46f5,	// (0x0001a55d) list_empty_pane_fp_t1

0x4703,	// (0x0001a56b) list_empty_pane_fp_t2

0x0001,

0xfba0,	// (0x00025a08) list_empty_pane_fp_t

0x17e9,	// (0x00017651) list_single_heading_pane_fp_g1_ParamLimits

0x17e9,	// (0x00017651) list_single_heading_pane_fp_g1

0x4574,	// (0x0001a3dc) list_single_heading_pane_fp_g2_ParamLimits

0x4574,	// (0x0001a3dc) list_single_heading_pane_fp_g2

0x4580,	// (0x0001a3e8) list_single_heading_pane_fp_g3_ParamLimits

0x4580,	// (0x0001a3e8) list_single_heading_pane_fp_g3

0x0002,

0xfba5,	// (0x00025a0d) list_single_heading_pane_fp_g_ParamLimits

0xfba5,	// (0x00025a0d) list_single_heading_pane_fp_g

0x4711,	// (0x0001a579) list_single_heading_pane_fp_t1_ParamLimits

0x4711,	// (0x0001a579) list_single_heading_pane_fp_t1

0x4723,	// (0x0001a58b) list_single_heading_pane_fp_t2_ParamLimits

0x4723,	// (0x0001a58b) list_single_heading_pane_fp_t2

0x0001,

0xfbac,	// (0x00025a14) list_single_heading_pane_fp_t_ParamLimits

0xfbac,	// (0x00025a14) list_single_heading_pane_fp_t

0xcac0,	// (0x00022928) aid_size_cell_fast

0xc4b6,	// (0x0002231e) soft_indicator_pane_cp1_t1

0xcafd,	// (0x00022965) cell_app_pane_cp2_ParamLimits

0xcafd,	// (0x00022965) cell_app_pane_cp2

0x5c93,	// (0x0001bafb) fep_hwr_candidate_drop_down_list_pane

0x251e,	// (0x00018386) fep_hwr_candidate_pane_g3_ParamLimits

0x251e,	// (0x00018386) fep_hwr_candidate_pane_g3

0x252b,	// (0x00018393) fep_hwr_candidate_pane_g4_ParamLimits

0x252b,	// (0x00018393) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x00025988) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x00025988) fep_hwr_candidate_pane_g

0x140e,	// (0x00017276) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x140e,	// (0x00017276) fep_vkb_candidate_drop_down_list_pane

0x1705,	// (0x0001756d) fep_vkb_candidate_pane_g3

0x170d,	// (0x00017575) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x000259b5) fep_vkb_candidate_pane_g

0x14f5,	// (0x0001735d) cell_hwr_candidate_pane_g1_ParamLimits

0x1a5a,	// (0x000178c2) cell_hwr_candidate_pane_g3_ParamLimits

0x1a5a,	// (0x000178c2) cell_hwr_candidate_pane_g3

0x1a7b,	// (0x000178e3) cell_hwr_candidate_pane_g4_ParamLimits

0x1a7b,	// (0x000178e3) cell_hwr_candidate_pane_g4

0x0002,

0xfb67,	// (0x000259cf) cell_hwr_candidate_pane_g_ParamLimits

0xfb67,	// (0x000259cf) cell_hwr_candidate_pane_g

0x1724,	// (0x0001758c) cell_vkb_candidate_pane_g3_ParamLimits

0x1724,	// (0x0001758c) cell_vkb_candidate_pane_g3

0x173f,	// (0x000175a7) cell_vkb_candidate_pane_g4_ParamLimits

0x173f,	// (0x000175a7) cell_vkb_candidate_pane_g4

0x19d2,	// (0x0001783a) cell_app_pane_cp2_g1_ParamLimits

0x19d2,	// (0x0001783a) cell_app_pane_cp2_g1

0x19f0,	// (0x00017858) cell_app_pane_cp2_g2_ParamLimits

0x19f0,	// (0x00017858) cell_app_pane_cp2_g2

0x0001,

0xfbb1,	// (0x00025a19) cell_app_pane_cp2_g_ParamLimits

0xfbb1,	// (0x00025a19) cell_app_pane_cp2_g

0x19fc,	// (0x00017864) cell_app_pane_cp2_t1_ParamLimits

0x19fc,	// (0x00017864) cell_app_pane_cp2_t1

0xc94b,	// (0x000227b3) grid_highlight_pane_cp1_ParamLimits

0xc94b,	// (0x000227b3) grid_highlight_pane_cp1

0x5fa0,	// (0x0001be08) cell_hwr_candidate_pane_cp1_ParamLimits

0x5fa0,	// (0x0001be08) cell_hwr_candidate_pane_cp1

0x14f5,	// (0x0001735d) fep_hwr_candidate_drop_down_list_pane_g1

0x1a0e,	// (0x00017876) fep_hwr_candidate_drop_down_list_pane_g2

0x1a1b,	// (0x00017883) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00025a1e) fep_hwr_candidate_drop_down_list_pane_g

0x5fbe,	// (0x0001be26) fep_hwr_candidate_drop_down_list_scroll_pane

0x5fc7,	// (0x0001be2f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5fc7,	// (0x0001be2f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5fd4,	// (0x0001be3c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5fd4,	// (0x0001be3c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5fe1,	// (0x0001be49) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5fe1,	// (0x0001be49) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1724,	// (0x0001758c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1724,	// (0x0001758c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x173f,	// (0x000175a7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x173f,	// (0x000175a7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5fee,	// (0x0001be56) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5fee,	// (0x0001be56) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6009,	// (0x0001be71) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6009,	// (0x0001be71) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6024,	// (0x0001be8c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6024,	// (0x0001be8c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbd,	// (0x00025a25) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbd,	// (0x00025a25) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xadfd,	// (0x00020c65) cell_vkb_candidate_pane_cp1_ParamLimits

0xadfd,	// (0x00020c65) cell_vkb_candidate_pane_cp1

0x14f5,	// (0x0001735d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x14f5,	// (0x0001735d) fep_vkb_candidate_drop_down_list_pane_g1

0x1a0e,	// (0x00017876) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x1a0e,	// (0x00017876) fep_vkb_candidate_drop_down_list_pane_g2

0x1a1b,	// (0x00017883) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x1a1b,	// (0x00017883) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb6,	// (0x00025a1e) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb6,	// (0x00025a1e) fep_vkb_candidate_drop_down_list_pane_g

0x1a28,	// (0x00017890) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x1a28,	// (0x00017890) fep_vkb_candidate_drop_down_list_scroll_pane

0x1a35,	// (0x0001789d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1a35,	// (0x0001789d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x1a42,	// (0x000178aa) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1a42,	// (0x000178aa) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x1a4e,	// (0x000178b6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1a4e,	// (0x000178b6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x1a5a,	// (0x000178c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1a5a,	// (0x000178c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x1a7b,	// (0x000178e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1a7b,	// (0x000178e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x1a9c,	// (0x00017904) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1a9c,	// (0x00017904) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x1abd,	// (0x00017925) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1abd,	// (0x00017925) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x1ade,	// (0x00017946) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1ade,	// (0x00017946) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbce,	// (0x00025a36) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbce,	// (0x00025a36) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x937f,	// (0x0001f1e7) title_pane_g1_ParamLimits

0x9392,	// (0x0001f1fa) title_pane_g2_ParamLimits

0xf54e,	// (0x000253b6) title_pane_g_ParamLimits

0xce6f,	// (0x00022cd7) aid_call2_pane

0xce77,	// (0x00022cdf) aid_call_pane

0xce7f,	// (0x00022ce7) popup_clock_analogue_window_g1

0xce7f,	// (0x00022ce7) popup_clock_analogue_window_g2

0x4efa,	// (0x0001ad62) popup_clock_analogue_window_g3

0x4f03,	// (0x0001ad6b) popup_clock_analogue_window_g4

0xc32a,	// (0x00022192) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00025560) popup_clock_analogue_window_g

0x4f0b,	// (0x0001ad73) popup_clock_analogue_window_t1

0x4f19,	// (0x0001ad81) clock_digital_number_pane_ParamLimits

0x4f19,	// (0x0001ad81) clock_digital_number_pane

0x4f25,	// (0x0001ad8d) clock_digital_number_pane_cp02_ParamLimits

0x4f25,	// (0x0001ad8d) clock_digital_number_pane_cp02

0x4f31,	// (0x0001ad99) clock_digital_number_pane_cp03_ParamLimits

0x4f31,	// (0x0001ad99) clock_digital_number_pane_cp03

0x4f3d,	// (0x0001ada5) clock_digital_number_pane_cp04_ParamLimits

0x4f3d,	// (0x0001ada5) clock_digital_number_pane_cp04

0x4f49,	// (0x0001adb1) clock_digital_separator_pane_ParamLimits

0x4f49,	// (0x0001adb1) clock_digital_separator_pane

0x4f55,	// (0x0001adbd) popup_clock_digital_window_t1_ParamLimits

0x4f55,	// (0x0001adbd) popup_clock_digital_window_t1

0xc32a,	// (0x00022192) clock_digital_number_pane_g1

0xc32a,	// (0x00022192) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0002556b) clock_digital_number_pane_g

0xc32a,	// (0x00022192) clock_digital_separator_pane_g1

0xc32a,	// (0x00022192) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0002556b) clock_digital_separator_pane_g

0xa177,	// (0x0001ffdf) aid_fill_nsta_ParamLimits

0xa299,	// (0x00020101) indicator_nsta_pane_ParamLimits

0xd669,	// (0x000234d1) popup_clock_analogue_window

0xd669,	// (0x000234d1) popup_clock_digital_window

0xd649,	// (0x000234b1) grid_indicator_nsta_pane_ParamLimits

0xf1a3,	// (0x0002500b) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x00025908) clock_nsta_pane_t

0x4ebe,	// (0x0001ad26) aid_size_max_handle

0x982f,	// (0x0001f697) aid_size_min_handle

0xd3c9,	// (0x00023231) editor_scroll_pane

0x1af9,	// (0x00017961) ex_editor_pane

0xca74,	// (0x000228dc) scroll_pane_cp13

0xc8f3,	// (0x0002275b) scroll_pane_cp14

0xceae,	// (0x00022d16) scroll_pane_cp36

0x9847,	// (0x0001f6af) list_single_graphic_hl_pane_cp2_ParamLimits

0x9847,	// (0x0001f6af) list_single_graphic_hl_pane_cp2

0xa9b6,	// (0x0002081e) list_single_graphic_hl_pane_ParamLimits

0xa9b6,	// (0x0002081e) list_single_graphic_hl_pane

0x4739,	// (0x0001a5a1) aid_size_min_hl_cp1

0x1b0a,	// (0x00017972) list_highlight_pane_cp34_ParamLimits

0x1b0a,	// (0x00017972) list_highlight_pane_cp34

0x1b1b,	// (0x00017983) list_single_graphic_hl_pane_g1_ParamLimits

0x1b1b,	// (0x00017983) list_single_graphic_hl_pane_g1

0x8fac,	// (0x0001ee14) list_single_graphic_hl_pane_g2_ParamLimits

0x8fac,	// (0x0001ee14) list_single_graphic_hl_pane_g2

0x8fac,	// (0x0001ee14) list_single_graphic_hl_pane_g3_ParamLimits

0x8fac,	// (0x0001ee14) list_single_graphic_hl_pane_g3

0x8fb8,	// (0x0001ee20) list_single_graphic_hl_pane_g4_ParamLimits

0x8fb8,	// (0x0001ee20) list_single_graphic_hl_pane_g4

0x8fc4,	// (0x0001ee2c) list_single_graphic_hl_pane_g5_ParamLimits

0x8fc4,	// (0x0001ee2c) list_single_graphic_hl_pane_g5

0x0004,

0xfbdf,	// (0x00025a47) list_single_graphic_hl_pane_g_ParamLimits

0xfbdf,	// (0x00025a47) list_single_graphic_hl_pane_g

0x8fd8,	// (0x0001ee40) list_single_graphic_hl_pane_t1_ParamLimits

0x8fd8,	// (0x0001ee40) list_single_graphic_hl_pane_t1

0x1b28,	// (0x00017990) aid_size_min_hl_cp2

0x1b31,	// (0x00017999) list_highlight_pane_cp34_cp2_ParamLimits

0x1b31,	// (0x00017999) list_highlight_pane_cp34_cp2

0x1b1b,	// (0x00017983) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x1b1b,	// (0x00017983) list_single_graphic_hl_pane_g1_cp2

0x1b3e,	// (0x000179a6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x1b3e,	// (0x000179a6) list_single_graphic_hl_pane_g2_cp2

0x1b4a,	// (0x000179b2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x1b4a,	// (0x000179b2) list_single_graphic_hl_pane_g3_cp2

0xd302,	// (0x0002316a) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xd302,	// (0x0002316a) list_single_graphic_hl_pane_g4_cp2

0x1b56,	// (0x000179be) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x1b56,	// (0x000179be) list_single_graphic_hl_pane_g5_cp2

0x9a72,	// (0x0001f8da) control_pane_g4_ParamLimits

0x9a72,	// (0x0001f8da) control_pane_g4

0xcab4,	// (0x0002291c) bg_popup_sub_pane_cp10_ParamLimits

0xf4a7,	// (0x0002530f) list_choice_list_pane_ParamLimits

0xf4b6,	// (0x0002531e) scroll_pane_cp23

0xc4d3,	// (0x0002233b) bg_popup_preview_window_pane_cp02_ParamLimits

0x1790,	// (0x000175f8) list_preview_fixed_pane_ParamLimits

0x17a6,	// (0x0001760e) list_preview_fixed_pane_cp_ParamLimits

0x17a6,	// (0x0001760e) list_preview_fixed_pane_cp

0x17b2,	// (0x0001761a) popup_preview_fixed_window_g1_ParamLimits

0x17b2,	// (0x0001761a) popup_preview_fixed_window_g1

0x17be,	// (0x00017626) popup_preview_fixed_window_g2_ParamLimits

0x17be,	// (0x00017626) popup_preview_fixed_window_g2

0x0002,

0xfb6e,	// (0x000259d6) popup_preview_fixed_window_g_ParamLimits

0xfb6e,	// (0x000259d6) popup_preview_fixed_window_g

0x4e3a,	// (0x0001aca2) aid_navi_side_left_pane_ParamLimits

0x4e4b,	// (0x0001acb3) aid_navi_side_right_pane_ParamLimits

0x4e5f,	// (0x0001acc7) navi_icon_pane_stacon_ParamLimits

0x4e73,	// (0x0001acdb) navi_navi_pane_stacon_ParamLimits

0x4e5f,	// (0x0001acc7) navi_text_pane_stacon_ParamLimits

0xc320,	// (0x00022188) main_text_info_pane

0x1b80,	// (0x000179e8) listscroll_text_info_pane

0x1b88,	// (0x000179f0) list_text_info_pane_ParamLimits

0x1b88,	// (0x000179f0) list_text_info_pane

0x1b97,	// (0x000179ff) scroll_pane_cp24_ParamLimits

0x1b97,	// (0x000179ff) scroll_pane_cp24

0xae1d,	// (0x00020c85) list_text_info_pane_t1_ParamLimits

0xae1d,	// (0x00020c85) list_text_info_pane_t1

0x9bf9,	// (0x0001fa61) popup_fast_swap2_window_ParamLimits

0x9bf9,	// (0x0001fa61) popup_fast_swap2_window

0x1bb5,	// (0x00017a1d) aid_size_cell_fast2

0xc320,	// (0x00022188) bg_popup_window_pane_cp17

0xdacb,	// (0x00023933) heading_pane_cp2

0xc6c6,	// (0x0002252e) listscroll_fast2_pane

0x1bbf,	// (0x00017a27) grid_fast2_pane

0x1bc7,	// (0x00017a2f) listscroll_fast2_pane_g1

0x1bcf,	// (0x00017a37) listscroll_fast2_pane_g2

0x0001,

0xfbea,	// (0x00025a52) listscroll_fast2_pane_g

0xca74,	// (0x000228dc) scroll_pane_cp26

0x1bd7,	// (0x00017a3f) cell_fast2_pane_ParamLimits

0x1bd7,	// (0x00017a3f) cell_fast2_pane

0x1bec,	// (0x00017a54) cell_fast2_pane_g1

0x1bf5,	// (0x00017a5d) cell_fast2_pane_g2

0x1bfe,	// (0x00017a66) cell_fast2_pane_g3

0x0002,

0xfbef,	// (0x00025a57) cell_fast2_pane_g

0xc756,	// (0x000225be) grid_highlight_pane_cp9

0xc76b,	// (0x000225d3) main_eswt_pane_ParamLimits

0xc76b,	// (0x000225d3) main_eswt_pane

0x1bac,	// (0x00017a14) list_single_text_info_pane

0x1c06,	// (0x00017a6e) eswt_ctrl_button_pane

0x1c06,	// (0x00017a6e) eswt_ctrl_canvas_pane

0x1c0e,	// (0x00017a76) eswt_ctrl_combo_pane

0x1c06,	// (0x00017a6e) eswt_ctrl_default_pane

0x1c06,	// (0x00017a6e) eswt_ctrl_label_pane

0x1c16,	// (0x00017a7e) eswt_ctrl_wait_pane

0x1c1e,	// (0x00017a86) eswt_shell_pane

0xc320,	// (0x00022188) listscroll_eswt_app_pane

0x1c3a,	// (0x00017aa2) popup_eswt_tasktip_window_ParamLimits

0x1c3a,	// (0x00017aa2) popup_eswt_tasktip_window

0xd800,	// (0x00023668) bg_popup_window_pane_cp18

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1_ParamLimits

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1

0x1c58,	// (0x00017ac0) eswt_control_pane_g2_ParamLimits

0x1c58,	// (0x00017ac0) eswt_control_pane_g2

0x1c65,	// (0x00017acd) eswt_control_pane_g3_ParamLimits

0x1c65,	// (0x00017acd) eswt_control_pane_g3

0x1c72,	// (0x00017ada) eswt_control_pane_g4_ParamLimits

0x1c72,	// (0x00017ada) eswt_control_pane_g4

0x0003,

0xfbf6,	// (0x00025a5e) eswt_control_pane_g_ParamLimits

0xfbf6,	// (0x00025a5e) eswt_control_pane_g

0xc94b,	// (0x000227b3) bg_button_pane_ParamLimits

0xc94b,	// (0x000227b3) bg_button_pane

0xc76b,	// (0x000225d3) common_borders_pane_copy2_ParamLimits

0xc76b,	// (0x000225d3) common_borders_pane_copy2

0x1c7f,	// (0x00017ae7) control_button_pane_g1_ParamLimits

0x1c7f,	// (0x00017ae7) control_button_pane_g1

0x1c8b,	// (0x00017af3) control_button_pane_g2_ParamLimits

0x1c8b,	// (0x00017af3) control_button_pane_g2

0x1c97,	// (0x00017aff) control_button_pane_g3_ParamLimits

0x1c97,	// (0x00017aff) control_button_pane_g3

0x0002,

0xfbff,	// (0x00025a67) control_button_pane_g_ParamLimits

0xfbff,	// (0x00025a67) control_button_pane_g

0x1cab,	// (0x00017b13) control_button_pane_t1

0x1cb9,	// (0x00017b21) control_button_pane_t2

0x0001,

0xfc06,	// (0x00025a6e) control_button_pane_t

0xd774,	// (0x000235dc) bg_button_pane_g1

0xd77c,	// (0x000235e4) bg_button_pane_g2

0xd784,	// (0x000235ec) bg_button_pane_g3

0xd78c,	// (0x000235f4) bg_button_pane_g4

0xd794,	// (0x000235fc) bg_button_pane_g5

0xd79c,	// (0x00023604) bg_button_pane_g6

0xd7a4,	// (0x0002360c) bg_button_pane_g7

0xd7ac,	// (0x00023614) bg_button_pane_g8

0xd7b4,	// (0x0002361c) bg_button_pane_g9

0x0008,

0xf85a,	// (0x000256c2) bg_button_pane_g

0xf462,	// (0x000252ca) common_borders_pane_ParamLimits

0xf462,	// (0x000252ca) common_borders_pane

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1_copy1_ParamLimits

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1_copy1

0x1c58,	// (0x00017ac0) eswt_control_pane_g2_copy1_ParamLimits

0x1c58,	// (0x00017ac0) eswt_control_pane_g2_copy1

0x1c65,	// (0x00017acd) eswt_control_pane_g3_copy1_ParamLimits

0x1c65,	// (0x00017acd) eswt_control_pane_g3_copy1

0x1c72,	// (0x00017ada) eswt_control_pane_g4_copy1_ParamLimits

0x1c72,	// (0x00017ada) eswt_control_pane_g4_copy1

0xf49d,	// (0x00025305) bg_eswt_ctrl_canvas_pane_g1

0xf462,	// (0x000252ca) common_borders_pane_cp2_ParamLimits

0xf462,	// (0x000252ca) common_borders_pane_cp2

0xf462,	// (0x000252ca) common_borders_pane_cp3_ParamLimits

0xf462,	// (0x000252ca) common_borders_pane_cp3

0x1cc7,	// (0x00017b2f) separator_horizontal_pane

0x1ccf,	// (0x00017b37) separator_vertical_pane

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1_copy2_ParamLimits

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1_copy2

0x1c58,	// (0x00017ac0) eswt_control_pane_g2_copy2_ParamLimits

0x1c58,	// (0x00017ac0) eswt_control_pane_g2_copy2

0x1c65,	// (0x00017acd) eswt_control_pane_g3_copy2_ParamLimits

0x1c65,	// (0x00017acd) eswt_control_pane_g3_copy2

0x1c72,	// (0x00017ada) eswt_control_pane_g4_copy2_ParamLimits

0x1c72,	// (0x00017ada) eswt_control_pane_g4_copy2

0xc320,	// (0x00022188) common_borders_pane_cp4

0x1cd8,	// (0x00017b40) separator_horizontal_pane_g1

0x1ce1,	// (0x00017b49) separator_horizontal_pane_g2

0x1cea,	// (0x00017b52) separator_horizontal_pane_g3

0x0002,

0xfc0b,	// (0x00025a73) separator_horizontal_pane_g

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1_copy3_ParamLimits

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1_copy3

0x1c58,	// (0x00017ac0) eswt_control_pane_g2_copy3_ParamLimits

0x1c58,	// (0x00017ac0) eswt_control_pane_g2_copy3

0x1c65,	// (0x00017acd) eswt_control_pane_g3_copy3_ParamLimits

0x1c65,	// (0x00017acd) eswt_control_pane_g3_copy3

0x1c72,	// (0x00017ada) eswt_control_pane_g4_copy3_ParamLimits

0x1c72,	// (0x00017ada) eswt_control_pane_g4_copy3

0xc320,	// (0x00022188) common_borders_pane_cp5

0x1cf3,	// (0x00017b5b) separator_vertical_pane_g1

0x1cfc,	// (0x00017b64) separator_vertical_pane_g2

0x1d05,	// (0x00017b6d) separator_vertical_pane_g3

0x0002,

0xfc12,	// (0x00025a7a) separator_vertical_pane_g

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1_copy4_ParamLimits

0x1c4b,	// (0x00017ab3) eswt_control_pane_g1_copy4

0x1c58,	// (0x00017ac0) eswt_control_pane_g2_copy4_ParamLimits

0x1c58,	// (0x00017ac0) eswt_control_pane_g2_copy4

0x1c65,	// (0x00017acd) eswt_control_pane_g3_copy4_ParamLimits

0x1c65,	// (0x00017acd) eswt_control_pane_g3_copy4

0x1c72,	// (0x00017ada) eswt_control_pane_g4_copy4_ParamLimits

0x1c72,	// (0x00017ada) eswt_control_pane_g4_copy4

0xae36,	// (0x00020c9e) eswt_ctrl_combo_button_pane

0xae3e,	// (0x00020ca6) eswt_ctrl_input_pane

0xae46,	// (0x00020cae) popup_choice_list_window_cp70

0xae4e,	// (0x00020cb6) eswt_ctrl_input_pane_t1

0xc320,	// (0x00022188) input_focus_pane_cp70

0xf462,	// (0x000252ca) bg_button_pane_cp70_ParamLimits

0xf462,	// (0x000252ca) bg_button_pane_cp70

0xae5c,	// (0x00020cc4) eswt_ctrl_combo_button_pane_g1

0x1d0e,	// (0x00017b76) wait_bar_pane_cp70

0xd800,	// (0x00023668) bg_popup_window_pane_cp70_ParamLimits

0xd800,	// (0x00023668) bg_popup_window_pane_cp70

0x1d16,	// (0x00017b7e) popup_eswt_tasktip_window_t1

0x1d2c,	// (0x00017b94) wait_bar_pane_cp71_ParamLimits

0x1d2c,	// (0x00017b94) wait_bar_pane_cp71

0x1d38,	// (0x00017ba0) grid_eswt_app_pane

0xccbd,	// (0x00022b25) scroll_pane_cp70

0xae64,	// (0x00020ccc) cell_eswt_app_pane_ParamLimits

0xae64,	// (0x00020ccc) cell_eswt_app_pane

0xae8c,	// (0x00020cf4) cell_eswt_app_pane_g1_ParamLimits

0xae8c,	// (0x00020cf4) cell_eswt_app_pane_g1

0xaebb,	// (0x00020d23) cell_eswt_app_pane_g2_ParamLimits

0xaebb,	// (0x00020d23) cell_eswt_app_pane_g2

0x0001,

0xfc19,	// (0x00025a81) cell_eswt_app_pane_g_ParamLimits

0xfc19,	// (0x00025a81) cell_eswt_app_pane_g

0xaee4,	// (0x00020d4c) cell_eswt_app_pane_t1_ParamLimits

0xaee4,	// (0x00020d4c) cell_eswt_app_pane_t1

0x1d41,	// (0x00017ba9) grid_highlight_pane_cp70_ParamLimits

0x1d41,	// (0x00017ba9) grid_highlight_pane_cp70

0xd2a0,	// (0x00023108) set_content_pane_g1

0x9a08,	// (0x0001f870) status_small_volume_pane

0x615d,	// (0x0001bfc5) status_small_volume_pane_g1

0x6165,	// (0x0001bfcd) volume_small2_pane

0x616e,	// (0x0001bfd6) volume_small2_pane_g1

0x6177,	// (0x0001bfdf) volume_small2_pane_g2

0x6180,	// (0x0001bfe8) volume_small2_pane_g3

0x6189,	// (0x0001bff1) volume_small2_pane_g4

0x6192,	// (0x0001bffa) volume_small2_pane_g5

0x619b,	// (0x0001c003) volume_small2_pane_g6

0x61a4,	// (0x0001c00c) volume_small2_pane_g7

0x61ad,	// (0x0001c015) volume_small2_pane_g8

0x61b6,	// (0x0001c01e) volume_small2_pane_g9

0x61bf,	// (0x0001c027) volume_small2_pane_g10

0x0009,

0xfc1e,	// (0x00025a86) volume_small2_pane_g

0x15fc,	// (0x00017464) fep_vkb_top_text_pane_g1_ParamLimits

0xada5,	// (0x00020c0d) fep_vkb_top_text_pane_t1_ParamLimits

0x17ca,	// (0x00017632) popup_preview_fixed_window_g3_ParamLimits

0x17ca,	// (0x00017632) popup_preview_fixed_window_g3

0xa116,	// (0x0001ff7e) popup_toolbar_trans_pane

0xa841,	// (0x000206a9) aid_height_set_list_ParamLimits

0xe5d6,	// (0x0002443e) aid_size_parent_ParamLimits

0xcab4,	// (0x0002291c) list_highlight_pane_cp2_ParamLimits

0xd2a0,	// (0x00023108) set_content_pane_g1_ParamLimits

0xa9c6,	// (0x0002082e) list_single_image_pane_ParamLimits

0xa9c6,	// (0x0002082e) list_single_image_pane

0xaf16,	// (0x00020d7e) aid_size_cell_image_ParamLimits

0xaf16,	// (0x00020d7e) aid_size_cell_image

0xaf23,	// (0x00020d8b) grid_single_image_pane_ParamLimits

0xaf23,	// (0x00020d8b) grid_single_image_pane

0xc959,	// (0x000227c1) list_single_image_pane_g1_ParamLimits

0xc959,	// (0x000227c1) list_single_image_pane_g1

0xc965,	// (0x000227cd) list_single_image_pane_g2_ParamLimits

0xc965,	// (0x000227cd) list_single_image_pane_g2

0x0001,

0xfc33,	// (0x00025a9b) list_single_image_pane_g_ParamLimits

0xfc33,	// (0x00025a9b) list_single_image_pane_g

0x1356,	// (0x000171be) list_single_image_pane_t1_ParamLimits

0x1356,	// (0x000171be) list_single_image_pane_t1

0xaf2f,	// (0x00020d97) cell_image_list_pane_ParamLimits

0xaf2f,	// (0x00020d97) cell_image_list_pane

0xaf43,	// (0x00020dab) cell_image_list_pane_g1

0xaf4c,	// (0x00020db4) cell_image_list_pane_g2

0x0001,

0xfc38,	// (0x00025aa0) cell_image_list_pane_g

0x1d4d,	// (0x00017bb5) aid_size_cell_tb_trans_pane

0xc94b,	// (0x000227b3) bg_tb_trans_pane

0x1d5f,	// (0x00017bc7) grid_tb_trans_pane

0xd774,	// (0x000235dc) bg_tb_trans_pane_g1

0xd77c,	// (0x000235e4) bg_tb_trans_pane_g2

0xd784,	// (0x000235ec) bg_tb_trans_pane_g3

0xd78c,	// (0x000235f4) bg_tb_trans_pane_g4

0xd794,	// (0x000235fc) bg_tb_trans_pane_g5

0xd7ac,	// (0x00023614) bg_tb_trans_pane_g6

0xd7b4,	// (0x0002361c) bg_tb_trans_pane_g7

0xd79c,	// (0x00023604) bg_tb_trans_pane_g8

0xd7a4,	// (0x0002360c) bg_tb_trans_pane_g9

0x0008,

0xfc3d,	// (0x00025aa5) bg_tb_trans_pane_g

0x1d73,	// (0x00017bdb) cell_toolbar_trans_pane_ParamLimits

0x1d73,	// (0x00017bdb) cell_toolbar_trans_pane

0xf49d,	// (0x00025305) cell_toolbar_trans_pane_g1

0xabed,	// (0x00020a55) list_form2_midp_pane_t1

0xabfb,	// (0x00020a63) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0002594e) list_form2_midp_pane_t

0xf255,	// (0x000250bd) scroll_pane_cp51_ParamLimits

0xf372,	// (0x000251da) form2_midp_wait_pane_g1

0xf37b,	// (0x000251e3) form2_midp_wait_pane_g2

0xf384,	// (0x000251ec) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x00025963) form2_midp_wait_pane_g

0xc3a0,	// (0x00022208) list_highlight_pane_cp21_ParamLimits

0xf3a4,	// (0x0002520c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xf3b3,	// (0x0002521b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe91e,	// (0x00024786) list_single_2graphic_im_pane_ParamLimits

0xe91e,	// (0x00024786) list_single_2graphic_im_pane

0xaf55,	// (0x00020dbd) list_single_2graphic_im_pane_g1_ParamLimits

0xaf55,	// (0x00020dbd) list_single_2graphic_im_pane_g1

0x1d99,	// (0x00017c01) list_single_2graphic_im_pane_g2_ParamLimits

0x1d99,	// (0x00017c01) list_single_2graphic_im_pane_g2

0x1da5,	// (0x00017c0d) list_single_2graphic_im_pane_g3_ParamLimits

0x1da5,	// (0x00017c0d) list_single_2graphic_im_pane_g3

0x0003,

0xfc50,	// (0x00025ab8) list_single_2graphic_im_pane_g_ParamLimits

0xfc50,	// (0x00025ab8) list_single_2graphic_im_pane_g

0xaf66,	// (0x00020dce) list_single_2graphic_im_pane_t1_ParamLimits

0xaf66,	// (0x00020dce) list_single_2graphic_im_pane_t1

0x17d6,	// (0x0001763e) list_single_graphic_2heading_pane_fp_ParamLimits

0x17d6,	// (0x0001763e) list_single_graphic_2heading_pane_fp

0x45ab,	// (0x0001a413) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x45ab,	// (0x0001a413) list_single_graphic_2heading_pane_fp_g1

0x17e9,	// (0x00017651) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x17e9,	// (0x00017651) list_single_graphic_2heading_pane_fp_g2

0x4574,	// (0x0001a3dc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4574,	// (0x0001a3dc) list_single_graphic_2heading_pane_fp_g3

0x4580,	// (0x0001a3e8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4580,	// (0x0001a3e8) list_single_graphic_2heading_pane_fp_g4

0x1815,	// (0x0001767d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x1815,	// (0x0001767d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7e,	// (0x000259e6) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7e,	// (0x000259e6) list_single_graphic_2heading_pane_fp_g

0x4784,	// (0x0001a5ec) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4784,	// (0x0001a5ec) list_single_graphic_2heading_pane_fp_t1

0x45e3,	// (0x0001a44b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x45e3,	// (0x0001a44b) list_single_graphic_2heading_pane_fp_t2

0x479a,	// (0x0001a602) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x479a,	// (0x0001a602) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc59,	// (0x00025ac1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc59,	// (0x00025ac1) list_single_graphic_2heading_pane_fp_t

0xf528,	// (0x00025390) fep_hwr_write_pane_g5_ParamLimits

0xf528,	// (0x00025390) fep_hwr_write_pane_g5

0xf534,	// (0x0002539c) fep_hwr_write_pane_g6_ParamLimits

0xf534,	// (0x0002539c) fep_hwr_write_pane_g6

0x1c1e,	// (0x00017a86) eswt_shell_pane_ParamLimits

0xd800,	// (0x00023668) bg_popup_window_pane_cp18_ParamLimits

0xe867,	// (0x000246cf) heading_pane_cp70

0x1d16,	// (0x00017b7e) popup_eswt_tasktip_window_t1_ParamLimits

0xa1c2,	// (0x0002002a) aid_touch_tab_arrow_left

0xa1d6,	// (0x0002003e) aid_touch_tab_arrow_right

0x93aa,	// (0x0001f212) title_pane_g3_ParamLimits

0x93aa,	// (0x0001f212) title_pane_g3

0xc913,	// (0x0002277b) set_value_pane_g1

0xa116,	// (0x0001ff7e) popup_toolbar_trans_pane_ParamLimits

0x1d4d,	// (0x00017bb5) aid_size_cell_tb_trans_pane_ParamLimits

0xc94b,	// (0x000227b3) bg_tb_trans_pane_ParamLimits

0x1d5f,	// (0x00017bc7) grid_tb_trans_pane_ParamLimits

0xc4d3,	// (0x0002233b) cont_note_pane_ParamLimits

0xc4d3,	// (0x0002233b) cont_note_pane

0xc76b,	// (0x000225d3) cont_snote2_single_text_pane_ParamLimits

0xc76b,	// (0x000225d3) cont_snote2_single_text_pane

0xc76b,	// (0x000225d3) cont_snote2_single_graphic_pane_ParamLimits

0xc76b,	// (0x000225d3) cont_snote2_single_graphic_pane

0xdcd5,	// (0x00023b3d) cont_note_wait_pane_ParamLimits

0xdcd5,	// (0x00023b3d) cont_note_wait_pane

0xdcd5,	// (0x00023b3d) cont_note_image_pane_ParamLimits

0xdcd5,	// (0x00023b3d) cont_note_image_pane

0x1df1,	// (0x00017c59) popup_note2_window_g1_ParamLimits

0x1df1,	// (0x00017c59) popup_note2_window_g1

0x1e22,	// (0x00017c8a) popup_note2_window_t1_ParamLimits

0x1e22,	// (0x00017c8a) popup_note2_window_t1

0x1e67,	// (0x00017ccf) popup_note2_window_t2_ParamLimits

0x1e67,	// (0x00017ccf) popup_note2_window_t2

0x1eac,	// (0x00017d14) popup_note2_window_t3_ParamLimits

0x1eac,	// (0x00017d14) popup_note2_window_t3

0x1ef1,	// (0x00017d59) popup_note2_window_t4_ParamLimits

0x1ef1,	// (0x00017d59) popup_note2_window_t4

0xc557,	// (0x000223bf) popup_note2_window_t5_ParamLimits

0xc557,	// (0x000223bf) popup_note2_window_t5

0x0004,

0xfc65,	// (0x00025acd) popup_note2_window_t_ParamLimits

0xfc65,	// (0x00025acd) popup_note2_window_t

0x1f20,	// (0x00017d88) popup_note2_image_window_g1_ParamLimits

0x1f20,	// (0x00017d88) popup_note2_image_window_g1

0x1f2c,	// (0x00017d94) popup_note2_image_window_g2_ParamLimits

0x1f2c,	// (0x00017d94) popup_note2_image_window_g2

0x0001,

0xfc70,	// (0x00025ad8) popup_note2_image_window_g_ParamLimits

0xfc70,	// (0x00025ad8) popup_note2_image_window_g

0x1f3e,	// (0x00017da6) popup_note2_image_window_t1_ParamLimits

0x1f3e,	// (0x00017da6) popup_note2_image_window_t1

0x1f56,	// (0x00017dbe) popup_note2_image_window_t2_ParamLimits

0x1f56,	// (0x00017dbe) popup_note2_image_window_t2

0x1f6e,	// (0x00017dd6) popup_note2_image_window_t3_ParamLimits

0x1f6e,	// (0x00017dd6) popup_note2_image_window_t3

0x0002,

0xfc75,	// (0x00025add) popup_note2_image_window_t_ParamLimits

0xfc75,	// (0x00025add) popup_note2_image_window_t

0xdce3,	// (0x00023b4b) popup_note2_wait_window_g1_ParamLimits

0xdce3,	// (0x00023b4b) popup_note2_wait_window_g1

0xdcef,	// (0x00023b57) popup_note2_wait_window_g2_ParamLimits

0xdcef,	// (0x00023b57) popup_note2_wait_window_g2

0xdcfb,	// (0x00023b63) popup_note2_wait_window_g3_ParamLimits

0xdcfb,	// (0x00023b63) popup_note2_wait_window_g3

0x0002,

0xf83c,	// (0x000256a4) popup_note2_wait_window_g_ParamLimits

0xf83c,	// (0x000256a4) popup_note2_wait_window_g

0x1f8a,	// (0x00017df2) popup_note2_wait_window_t1_ParamLimits

0x1f8a,	// (0x00017df2) popup_note2_wait_window_t1

0x1fa8,	// (0x00017e10) popup_note2_wait_window_t2_ParamLimits

0x1fa8,	// (0x00017e10) popup_note2_wait_window_t2

0x1fc6,	// (0x00017e2e) popup_note2_wait_window_t3_ParamLimits

0x1fc6,	// (0x00017e2e) popup_note2_wait_window_t3

0x1fd8,	// (0x00017e40) popup_note2_wait_window_t4_ParamLimits

0x1fd8,	// (0x00017e40) popup_note2_wait_window_t4

0x0003,

0xfc7c,	// (0x00025ae4) popup_note2_wait_window_t_ParamLimits

0xfc7c,	// (0x00025ae4) popup_note2_wait_window_t

0x1fea,	// (0x00017e52) wait_bar2_pane_ParamLimits

0x1fea,	// (0x00017e52) wait_bar2_pane

0x2002,	// (0x00017e6a) popup_snote2_single_text_window_g1_ParamLimits

0x2002,	// (0x00017e6a) popup_snote2_single_text_window_g1

0x202a,	// (0x00017e92) popup_snote2_single_text_window_t1_ParamLimits

0x202a,	// (0x00017e92) popup_snote2_single_text_window_t1

0x2076,	// (0x00017ede) popup_snote2_single_text_window_t2_ParamLimits

0x2076,	// (0x00017ede) popup_snote2_single_text_window_t2

0x20c2,	// (0x00017f2a) popup_snote2_single_text_window_t3_ParamLimits

0x20c2,	// (0x00017f2a) popup_snote2_single_text_window_t3

0x2103,	// (0x00017f6b) popup_snote2_single_text_window_t4_ParamLimits

0x2103,	// (0x00017f6b) popup_snote2_single_text_window_t4

0x2139,	// (0x00017fa1) popup_snote2_single_text_window_t5_ParamLimits

0x2139,	// (0x00017fa1) popup_snote2_single_text_window_t5

0x0004,

0xfc85,	// (0x00025aed) popup_snote2_single_text_window_t_ParamLimits

0xfc85,	// (0x00025aed) popup_snote2_single_text_window_t

0x2164,	// (0x00017fcc) popup_snote2_single_graphic_window_g1_ParamLimits

0x2164,	// (0x00017fcc) popup_snote2_single_graphic_window_g1

0x218c,	// (0x00017ff4) popup_snote2_single_graphic_window_g2_ParamLimits

0x218c,	// (0x00017ff4) popup_snote2_single_graphic_window_g2

0x0001,

0xfc90,	// (0x00025af8) popup_snote2_single_graphic_window_g_ParamLimits

0xfc90,	// (0x00025af8) popup_snote2_single_graphic_window_g

0x21b4,	// (0x0001801c) popup_snote2_single_graphic_window_t1_ParamLimits

0x21b4,	// (0x0001801c) popup_snote2_single_graphic_window_t1

0x2200,	// (0x00018068) popup_snote2_single_graphic_window_t2_ParamLimits

0x2200,	// (0x00018068) popup_snote2_single_graphic_window_t2

0x20c2,	// (0x00017f2a) popup_snote2_single_graphic_window_t3_ParamLimits

0x20c2,	// (0x00017f2a) popup_snote2_single_graphic_window_t3

0x2103,	// (0x00017f6b) popup_snote2_single_graphic_window_t4_ParamLimits

0x2103,	// (0x00017f6b) popup_snote2_single_graphic_window_t4

0x2139,	// (0x00017fa1) popup_snote2_single_graphic_window_t5_ParamLimits

0x2139,	// (0x00017fa1) popup_snote2_single_graphic_window_t5

0x0004,

0xfc95,	// (0x00025afd) popup_snote2_single_graphic_window_t_ParamLimits

0xfc95,	// (0x00025afd) popup_snote2_single_graphic_window_t

0xf1f0,	// (0x00025058) clock_nsta_pane_cp2_t1

0xf1f0,	// (0x00025058) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x00025924) clock_nsta_pane_cp2_t

0x3ece,	// (0x00019d36) form_field_data_wide_pane_g1_ParamLimits

0xc959,	// (0x000227c1) form_field_data_wide_pane_g2_ParamLimits

0xc959,	// (0x000227c1) form_field_data_wide_pane_g2

0xc965,	// (0x000227cd) form_field_data_wide_pane_g3_ParamLimits

0xc965,	// (0x000227cd) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x000254e3) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x000254e3) form_field_data_wide_pane_g

0xab36,	// (0x0002099e) grid_touch_3_pane_ParamLimits

0xab36,	// (0x0002099e) grid_touch_3_pane

0xaf97,	// (0x00020dff) cell_touch_3_pane_ParamLimits

0xaf97,	// (0x00020dff) cell_touch_3_pane

0xf49d,	// (0x00025305) cell_touch_3_pane_g1

0xf49d,	// (0x00025305) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x000259a9) cell_touch_3_pane_g

0xc589,	// (0x000223f1) cont_query_data_pane

0xc591,	// (0x000223f9) cont_query_data_pane_cp1

0x224c,	// (0x000180b4) button_value_adjust_pane_cp7

0x2254,	// (0x000180bc) query_popup_pane_cp3

0xcee0,	// (0x00022d48) bg_popup_sub_pane_cp22_ParamLimits

0x4f74,	// (0x0001addc) navi_navi_volume_pane_cp2

0x4f8c,	// (0x0001adf4) popup_side_volume_key_window_g2

0x4f98,	// (0x0001ae00) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00025579) popup_side_volume_key_window_g

0x4fb2,	// (0x0001ae1a) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00025580) popup_side_volume_key_window_t

0xd172,	// (0x00022fda) popup_side_volume_key_window_ParamLimits

0x8b2a,	// (0x0001e992) list_double_graphic_pane_g4_ParamLimits

0x8b2a,	// (0x0001e992) list_double_graphic_pane_g4

0xa9a4,	// (0x0002080c) list_single_2heading_msg_pane_ParamLimits

0xa9a4,	// (0x0002080c) list_single_2heading_msg_pane

0x8fee,	// (0x0001ee56) list_single_2heading_msg_pane_g1_ParamLimits

0x8fee,	// (0x0001ee56) list_single_2heading_msg_pane_g1

0x8ffa,	// (0x0001ee62) list_single_2heading_msg_pane_g2_ParamLimits

0x8ffa,	// (0x0001ee62) list_single_2heading_msg_pane_g2

0x900d,	// (0x0001ee75) list_single_2heading_msg_pane_g3_ParamLimits

0x900d,	// (0x0001ee75) list_single_2heading_msg_pane_g3

0x9019,	// (0x0001ee81) list_single_2heading_msg_pane_g4_ParamLimits

0x9019,	// (0x0001ee81) list_single_2heading_msg_pane_g4

0x0003,

0xfca0,	// (0x00025b08) list_single_2heading_msg_pane_g_ParamLimits

0xfca0,	// (0x00025b08) list_single_2heading_msg_pane_g

0x9031,	// (0x0001ee99) list_single_2heading_msg_pane_t1_ParamLimits

0x9031,	// (0x0001ee99) list_single_2heading_msg_pane_t1

0x9059,	// (0x0001eec1) list_single_2heading_msg_pane_t2_ParamLimits

0x9059,	// (0x0001eec1) list_single_2heading_msg_pane_t2

0x90c4,	// (0x0001ef2c) list_single_2heading_msg_pane_t3_ParamLimits

0x90c4,	// (0x0001ef2c) list_single_2heading_msg_pane_t3

0x487d,	// (0x0001a6e5) list_single_2heading_msg_pane_t4_ParamLimits

0x487d,	// (0x0001a6e5) list_single_2heading_msg_pane_t4

0x0003,

0xfca9,	// (0x00025b11) list_single_2heading_msg_pane_t_ParamLimits

0xfca9,	// (0x00025b11) list_single_2heading_msg_pane_t

0xc33e,	// (0x000221a6) title_pane_g4_ParamLimits

0xc33e,	// (0x000221a6) title_pane_g4

0x4d8a,	// (0x0001abf2) title_pane_stacon_g3_ParamLimits

0x4d8a,	// (0x0001abf2) title_pane_stacon_g3

0x1db9,	// (0x00017c21) list_single_2graphic_im_pane_g4_ParamLimits

0x1db9,	// (0x00017c21) list_single_2graphic_im_pane_g4

0xe6a3,	// (0x0002450b) popup_side_volume_key_window_cp

0xeb60,	// (0x000249c8) main_idle_act2_pane_t1

0x5802,	// (0x0001b66a) toolbar_button_pane_g10

0x96f7,	// (0x0001f55f) popup_toolbar_window_cp1

0xf1e1,	// (0x00025049) clock_nsta_pane_cp_t1

0xf1e1,	// (0x00025049) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0002591f) clock_nsta_pane_cp_t

0x4f74,	// (0x0001addc) navi_navi_volume_pane_cp2_ParamLimits

0x4f80,	// (0x0001ade8) popup_side_volume_key_window_g1_ParamLimits

0x4f8c,	// (0x0001adf4) popup_side_volume_key_window_g2_ParamLimits

0x4f98,	// (0x0001ae00) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00025579) popup_side_volume_key_window_g_ParamLimits

0x5c7f,	// (0x0001bae7) fep_hwr_aid_pane

0x2510,	// (0x00018378) bg_fep_hwr_top_pane_g4_ParamLimits

0xf4f8,	// (0x00025360) fep_hwr_top_pane_g1_ParamLimits

0xf50a,	// (0x00025372) fep_hwr_top_pane_g2_ParamLimits

0x5d32,	// (0x0001bb9a) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x00025974) fep_hwr_top_pane_g_ParamLimits

0x5d47,	// (0x0001bbaf) fep_hwr_top_text_pane_ParamLimits

0xe419,	// (0x00024281) aid_touch_tab_arrow_arrow_2

0xe422,	// (0x0002428a) aid_touch_tab_arrow_left_2

0x5c93,	// (0x0001bafb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5cc6,	// (0x0001bb2e) fep_hwr_prediction_pane

0x1467,	// (0x000172cf) fep_vkb_prediction_pane

0xad85,	// (0x00020bed) fep_vkb_side_pane_g3_ParamLimits

0xad85,	// (0x00020bed) fep_vkb_side_pane_g3

0x14f5,	// (0x0001735d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1a0e,	// (0x00017876) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1a1b,	// (0x00017883) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb6,	// (0x00025a1e) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x22aa,	// (0x00018112) fep_hwr_prediction_pane_g1

0x6289,	// (0x0001c0f1) fep_hwr_prediction_pane_g2

0xe8e5,	// (0x0002474d) fep_hwr_prediction_pane_g3

0x6291,	// (0x0001c0f9) fep_hwr_prediction_pane_g4

0x0003,

0xfcb2,	// (0x00025b1a) fep_hwr_prediction_pane_g

0x22aa,	// (0x00018112) fep_vkb_prediction_pane_g1

0x22b4,	// (0x0001811c) fep_vkb_prediction_pane_g2

0x22bc,	// (0x00018124) fep_vkb_prediction_pane_g3

0x22c4,	// (0x0001812c) fep_vkb_prediction_pane_g4

0x0003,

0xfcbb,	// (0x00025b23) fep_vkb_prediction_pane_g

0x5aae,	// (0x0001b916) slider_set_pane_g3

0x5ac2,	// (0x0001b92a) slider_set_pane_g4

0x5ada,	// (0x0001b942) slider_set_pane_g5

0x5aae,	// (0x0001b916) slider_set_pane_g6

0xa813,	// (0x0002067b) slider_set_pane_g7

0xe8d4,	// (0x0002473c) slider_form_pane_g3

0xe8dd,	// (0x00024745) slider_form_pane_g4

0xe8e5,	// (0x0002474d) slider_form_pane_g5

0xe8d4,	// (0x0002473c) slider_form_pane_g6

0xa978,	// (0x000207e0) slider_form_pane_g7

0xed89,	// (0x00024bf1) slider_set_pane_vc_g3

0xed92,	// (0x00024bfa) slider_set_pane_vc_g4

0xed9b,	// (0x00024c03) slider_set_pane_vc_g5

0xed89,	// (0x00024bf1) slider_set_pane_vc_g6

0xeda4,	// (0x00024c0c) slider_set_pane_vc_g7

0xef3c,	// (0x00024da4) slider_form_pane_vc_g1

0xef45,	// (0x00024dad) slider_form_pane_vc_g2

0xef4e,	// (0x00024db6) slider_form_pane_vc_g3

0xef3c,	// (0x00024da4) slider_form_pane_vc_g4

0xef57,	// (0x00024dbf) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x000258f1) slider_form_pane_vc_g

0xc320,	// (0x00022188) main_idle_act3_pane

0x22cc,	// (0x00018134) ai3_links_pane

0xafdd,	// (0x00020e45) popup_ai3_data_window_ParamLimits

0xafdd,	// (0x00020e45) popup_ai3_data_window

0xc320,	// (0x00022188) grid_ai3_links_pane

0xaff5,	// (0x00020e5d) cell_ai3_links_pane_ParamLimits

0xaff5,	// (0x00020e5d) cell_ai3_links_pane

0x22d5,	// (0x0001813d) bg_popup_sub_pane_cp11

0x22e2,	// (0x0001814a) cell_ai3_links_pane_g1

0xc320,	// (0x00022188) bg_popup_sub_pane_cp12

0x2307,	// (0x0001816f) heading_ai3_data_pane

0x230f,	// (0x00018177) list_ai3_gene_pane

0x231b,	// (0x00018183) popup_ai3_data_window_g1

0x2323,	// (0x0001818b) heading_ai3_data_pane_g1

0x232b,	// (0x00018193) heading_ai3_data_pane_t1

0x2339,	// (0x000181a1) list_double_ai3_gene_pane_ParamLimits

0x2339,	// (0x000181a1) list_double_ai3_gene_pane

0x2346,	// (0x000181ae) list_single_ai3_gene_pane_ParamLimits

0x2346,	// (0x000181ae) list_single_ai3_gene_pane

0xf462,	// (0x000252ca) list_highlight_pane_cp7_ParamLimits

0xf462,	// (0x000252ca) list_highlight_pane_cp7

0x2353,	// (0x000181bb) list_single_a13_gene_pane_t1_ParamLimits

0x2353,	// (0x000181bb) list_single_a13_gene_pane_t1

0x236a,	// (0x000181d2) list_single_ai3_gene_pane_g1

0x2373,	// (0x000181db) list_single_ai3_gene_pane_g2

0x0001,

0xfcc4,	// (0x00025b2c) list_single_ai3_gene_pane_g

0x237b,	// (0x000181e3) list_double_ai3_gene_pane_g1_ParamLimits

0x237b,	// (0x000181e3) list_double_ai3_gene_pane_g1

0x2387,	// (0x000181ef) list_double_ai3_gene_pane_t1_ParamLimits

0x2387,	// (0x000181ef) list_double_ai3_gene_pane_t1

0x23a3,	// (0x0001820b) list_double_ai3_gene_pane_t2_ParamLimits

0x23a3,	// (0x0001820b) list_double_ai3_gene_pane_t2

0x23b9,	// (0x00018221) list_double_ai3_gene_pane_t3_ParamLimits

0x23b9,	// (0x00018221) list_double_ai3_gene_pane_t3

0x0002,

0xfcc9,	// (0x00025b31) list_double_ai3_gene_pane_t_ParamLimits

0xfcc9,	// (0x00025b31) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x47b0,	// (0x0001a618) aid_size_min_col_2

0xafc9,	// (0x00020e31) aid_size_min_msg_ParamLimits

0xafc9,	// (0x00020e31) aid_size_min_msg

0xad99,	// (0x00020c01) fep_vkb_top_text_pane_g2_ParamLimits

0xad99,	// (0x00020c01) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x000259a4) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x000259a4) fep_vkb_top_text_pane_g

0xc320,	// (0x00022188) main_hc_apps_shell_pane

0x23d6,	// (0x0001823e) grid_hc_apps_pane_ParamLimits

0x23d6,	// (0x0001823e) grid_hc_apps_pane

0x23e5,	// (0x0001824d) list_hc_apps_pane

0x23ed,	// (0x00018255) scroll_pane_cp37_ParamLimits

0x23ed,	// (0x00018255) scroll_pane_cp37

0xb00b,	// (0x00020e73) cell_hc_apps_pane_ParamLimits

0xb00b,	// (0x00020e73) cell_hc_apps_pane

0xb0a5,	// (0x00020f0d) cell_hc_apps_pane_g1_ParamLimits

0xb0a5,	// (0x00020f0d) cell_hc_apps_pane_g1

0x23f9,	// (0x00018261) cell_hc_apps_pane_g2_ParamLimits

0x23f9,	// (0x00018261) cell_hc_apps_pane_g2

0x2415,	// (0x0001827d) cell_hc_apps_pane_g3_ParamLimits

0x2415,	// (0x0001827d) cell_hc_apps_pane_g3

0x0002,

0xfcd0,	// (0x00025b38) cell_hc_apps_pane_g_ParamLimits

0xfcd0,	// (0x00025b38) cell_hc_apps_pane_g

0xb0d2,	// (0x00020f3a) cell_hc_apps_pane_t1_ParamLimits

0xb0d2,	// (0x00020f3a) cell_hc_apps_pane_t1

0xc4d3,	// (0x0002233b) grid_highlight_pane_cp10_ParamLimits

0xc4d3,	// (0x0002233b) grid_highlight_pane_cp10

0xb110,	// (0x00020f78) list_single_hc_apps_pane_ParamLimits

0xb110,	// (0x00020f78) list_single_hc_apps_pane

0xb13b,	// (0x00020fa3) list_single_hc_apps_pane_g1

0x9132,	// (0x0001ef9a) list_single_hc_apps_pane_g2

0x0001,

0xfcd7,	// (0x00025b3f) list_single_hc_apps_pane_g

0x914b,	// (0x0001efb3) list_single_hc_apps_pane_g2_copy1

0x9167,	// (0x0001efcf) list_single_hc_apps_pane_t1

0xc3a0,	// (0x00022208) bg_set_opt_pane_cp_ParamLimits

0x4cb5,	// (0x0001ab1d) setting_slider_pane_t1_ParamLimits

0x946e,	// (0x0001f2d6) setting_slider_pane_t2_ParamLimits

0x9487,	// (0x0001f2ef) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x000253c6) setting_slider_pane_t_ParamLimits

0x4cfe,	// (0x0001ab66) slider_set_pane_ParamLimits

0x5200,	// (0x0001b068) control_pane_g5_ParamLimits

0x5200,	// (0x0001b068) control_pane_g5

0xe8ae,	// (0x00024716) slider_set_pane_g1_ParamLimits

0x5aa2,	// (0x0001b90a) slider_set_pane_g2_ParamLimits

0x5aae,	// (0x0001b916) slider_set_pane_g3_ParamLimits

0x5ac2,	// (0x0001b92a) slider_set_pane_g4_ParamLimits

0x5ada,	// (0x0001b942) slider_set_pane_g5_ParamLimits

0x5aae,	// (0x0001b916) slider_set_pane_g6_ParamLimits

0xa813,	// (0x0002067b) slider_set_pane_g7_ParamLimits

0xf958,	// (0x000257c0) slider_set_pane_g_ParamLimits

0xd24b,	// (0x000230b3) navi_icon_text_pane_ParamLimits

0xa193,	// (0x0001fffb) aid_fill_nsta_2_ParamLimits

0xa1c2,	// (0x0002002a) aid_touch_tab_arrow_left_ParamLimits

0xa1d6,	// (0x0002003e) aid_touch_tab_arrow_right_ParamLimits

0xa26f,	// (0x000200d7) clock_nsta_pane_ParamLimits

0xe3fb,	// (0x00024263) navi_icon_pane_g1_ParamLimits

0xe407,	// (0x0002426f) navi_text_pane_t1_ParamLimits

0xf22f,	// (0x00025097) navi_icon_text_pane_g1_ParamLimits

0xf23b,	// (0x000250a3) navi_icon_text_pane_t1_ParamLimits

0xb13b,	// (0x00020fa3) list_single_hc_apps_pane_g1_ParamLimits

0x9132,	// (0x0001ef9a) list_single_hc_apps_pane_g2_ParamLimits

0xfcd7,	// (0x00025b3f) list_single_hc_apps_pane_g_ParamLimits

0x914b,	// (0x0001efb3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x9167,	// (0x0001efcf) list_single_hc_apps_pane_t1_ParamLimits

0x92cd,	// (0x0001f135) popup_toolbar2_fixed_window_ParamLimits

0x92cd,	// (0x0001f135) popup_toolbar2_fixed_window

0xa10e,	// (0x0001ff76) popup_toolbar2_float_window

0xc320,	// (0x00022188) bg_popup_sub_pane_cp27

0x2437,	// (0x0001829f) grid_toolbar2_float_pane

0xc320,	// (0x00022188) bg_popup_sub_pane_cp26

0x2437,	// (0x0001829f) grid_toolbar2_fixed_pane

0xb154,	// (0x00020fbc) cell_toolbar2_fixed_pane_ParamLimits

0xb154,	// (0x00020fbc) cell_toolbar2_fixed_pane

0xb16f,	// (0x00020fd7) cell_toolbar2_fixed_pane_g1

0x243f,	// (0x000182a7) toolbar2_fixed_button_pane

0xd774,	// (0x000235dc) toolbar2_fixed_button_pane_g1

0xd77c,	// (0x000235e4) toolbar2_fixed_button_pane_g2

0xd784,	// (0x000235ec) toolbar2_fixed_button_pane_g3

0xd78c,	// (0x000235f4) toolbar2_fixed_button_pane_g4

0xd794,	// (0x000235fc) toolbar2_fixed_button_pane_g5

0xd79c,	// (0x00023604) toolbar2_fixed_button_pane_g6

0xd7a4,	// (0x0002360c) toolbar2_fixed_button_pane_g7

0xd7ac,	// (0x00023614) toolbar2_fixed_button_pane_g8

0xd7b4,	// (0x0002361c) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x000256c2) toolbar2_fixed_button_pane_g

0x2447,	// (0x000182af) cell_toolbar2_float_pane_ParamLimits

0x2447,	// (0x000182af) cell_toolbar2_float_pane

0x2458,	// (0x000182c0) cell_toolbar2_float_pane_g1

0x243f,	// (0x000182a7) toolbar2_fixed_button_pane_cp

0xad4e,	// (0x00020bb6) fep_vkb_accented_list_pane_ParamLimits

0xad4e,	// (0x00020bb6) fep_vkb_accented_list_pane

0x5f6d,	// (0x0001bdd5) bg_popup_fep_shadow_pane_g9

0xd3c9,	// (0x00023231) bg_popup_fep_shadow_pane_cp3

0xca5b,	// (0x000228c3) list_accented_list_pane

0x2461,	// (0x000182c9) list_single_accented_list_pane_ParamLimits

0x2461,	// (0x000182c9) list_single_accented_list_pane

0xd3c9,	// (0x00023231) list_highlight_pane_cp10

0x2472,	// (0x000182da) list_single_accented_list_pane_t1

0xa054,	// (0x0001febc) popup_slider_window_ParamLimits

0xa054,	// (0x0001febc) popup_slider_window

0x225c,	// (0x000180c4) aid_indentation_list_msg

0xb24e,	// (0x000210b6) bg_popup_window_pane_cp19

0x24d8,	// (0x00018340) popup_slider_window_g1

0x24f4,	// (0x0001835c) popup_slider_window_g2

0x2538,	// (0x000183a0) popup_slider_window_g3

0x0005,

0xfcdc,	// (0x00025b44) popup_slider_window_g

0x2554,	// (0x000183bc) popup_slider_window_t1

0x2598,	// (0x00018400) small_volume_slider_vertical_pane

0xf49d,	// (0x00025305) small_volume_slider_vertical_pane_g1

0xf49d,	// (0x00025305) small_volume_slider_vertical_pane_g2

0x25b4,	// (0x0001841c) small_volume_slider_vertical_pane_g3

0x0002,

0xfcee,	// (0x00025b56) small_volume_slider_vertical_pane_g

0x9251,	// (0x0001f0b9) area_side_right_pane_ParamLimits

0x9251,	// (0x0001f0b9) area_side_right_pane

0xb306,	// (0x0002116e) aid_size_side_button_ParamLimits

0xb306,	// (0x0002116e) aid_size_side_button

0xb31f,	// (0x00021187) grid_sctrl_middle_pane_ParamLimits

0xb31f,	// (0x00021187) grid_sctrl_middle_pane

0x6558,	// (0x0001c3c0) sctrl_sk_bottom_pane

0x6569,	// (0x0001c3d1) sctrl_sk_top_pane

0x657b,	// (0x0001c3e3) aid_touch_sctrl_top

0xc4d3,	// (0x0002233b) bg_sctrl_sk_pane_ParamLimits

0xc4d3,	// (0x0002233b) bg_sctrl_sk_pane

0x6588,	// (0x0001c3f0) sctrl_sk_top_pane_g1

0x6595,	// (0x0001c3fd) sctrl_sk_top_pane_t1

0x657b,	// (0x0001c3e3) aid_touch_sctrl_bottom

0xc4d3,	// (0x0002233b) bg_sctrl_sk_pane_cp_ParamLimits

0xc4d3,	// (0x0002233b) bg_sctrl_sk_pane_cp

0x65b0,	// (0x0001c418) sctrl_sk_bottom_pane_g1

0x6595,	// (0x0001c3fd) sctrl_sk_bottom_pane_t1

0xb335,	// (0x0002119d) cell_sctrl_middle_pane_ParamLimits

0xb335,	// (0x0002119d) cell_sctrl_middle_pane

0xb346,	// (0x000211ae) aid_touch_sctrl_middle_ParamLimits

0xb346,	// (0x000211ae) aid_touch_sctrl_middle

0xb353,	// (0x000211bb) bg_sctrl_middle_pane_ParamLimits

0xb353,	// (0x000211bb) bg_sctrl_middle_pane

0x25cf,	// (0x00018437) cell_sctrl_middle_pane_g1_ParamLimits

0x25cf,	// (0x00018437) cell_sctrl_middle_pane_g1

0xb361,	// (0x000211c9) cell_sctrl_middle_pane_g2_ParamLimits

0xb361,	// (0x000211c9) cell_sctrl_middle_pane_g2

0x0001,

0xfcfa,	// (0x00025b62) cell_sctrl_middle_pane_g_ParamLimits

0xfcfa,	// (0x00025b62) cell_sctrl_middle_pane_g

0xd774,	// (0x000235dc) bg_sctrl_middle_pane_g1

0xd77c,	// (0x000235e4) bg_sctrl_middle_pane_g2

0xd784,	// (0x000235ec) bg_sctrl_middle_pane_g3

0xd78c,	// (0x000235f4) bg_sctrl_middle_pane_g4

0xd794,	// (0x000235fc) bg_sctrl_middle_pane_g5

0xd79c,	// (0x00023604) bg_sctrl_middle_pane_g6

0xd7a4,	// (0x0002360c) bg_sctrl_middle_pane_g7

0xd7ac,	// (0x00023614) bg_sctrl_middle_pane_g8

0x0007,

0xfcff,	// (0x00025b67) bg_sctrl_middle_pane_g

0xd7b4,	// (0x0002361c) bg_sctrl_middle_pane_g8_copy1

0xd774,	// (0x000235dc) bg_sctrl_sk_pane_g1

0xd77c,	// (0x000235e4) bg_sctrl_sk_pane_g2

0xd784,	// (0x000235ec) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x000256c2) bg_sctrl_sk_pane_g

0xc88d,	// (0x000226f5) aid_size_touch_scroll_bar

0xd78c,	// (0x000235f4) bg_sctrl_sk_pane_g4

0xd794,	// (0x000235fc) bg_sctrl_sk_pane_g5

0xd79c,	// (0x00023604) bg_sctrl_sk_pane_g6

0xd7a4,	// (0x0002360c) bg_sctrl_sk_pane_g7

0xd7ac,	// (0x00023614) bg_sctrl_sk_pane_g8

0xd7b4,	// (0x0002361c) bg_sctrl_sk_pane_g9

0x53a1,	// (0x0001b209) popup_fep_china_hwr2_fs_candidate_window

0x9c4c,	// (0x0001fab4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9c4c,	// (0x0001fab4) popup_fep_china_hwr2_fs_control_window

0x14f5,	// (0x0001735d) sctrl_sk_top_pane_g2

0x0001,

0xfcf5,	// (0x00025b5d) sctrl_sk_top_pane_g

0xb36d,	// (0x000211d5) aid_fep_china_hwr2_fs_cell_ParamLimits

0xb36d,	// (0x000211d5) aid_fep_china_hwr2_fs_cell

0xb381,	// (0x000211e9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xb381,	// (0x000211e9) bg_popup_fep_shadow_pane_cp4

0xb398,	// (0x00021200) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xb398,	// (0x00021200) bg_popup_fep_shadow_pane_cp5

0xb3aa,	// (0x00021212) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xb3aa,	// (0x00021212) popup_fep_china_hwr2_fs_control_bar_grid

0xb3be,	// (0x00021226) popup_fep_china_hwr2_fs_control_funtion_grid

0x25bd,	// (0x00018425) aid_fep_china_hwr2_fs_candi_cell

0xc320,	// (0x00022188) bg_popup_fep_shadow_pane_cp6

0x25c7,	// (0x0001842f) popup_fep_china_hwr2_fs_candidate_grid

0xb3c6,	// (0x0002122e) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xb3c6,	// (0x0002122e) cell_fep_china_hwr2_fs_funtion_grid

0xf49d,	// (0x00025305) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x25cf,	// (0x00018437) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x25cf,	// (0x00018437) cell_fep_china_hwr2_fs_funtion_grid_g1

0x25dd,	// (0x00018445) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x25dd,	// (0x00018445) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd10,	// (0x00025b78) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd10,	// (0x00025b78) cell_fep_china_hwr2_fs_funtion_grid_g

0xb3de,	// (0x00021246) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xb3de,	// (0x00021246) cell_fep_china_hwr2_fs_funtion_grid_t1

0xb3f3,	// (0x0002125b) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xb3f3,	// (0x0002125b) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd15,	// (0x00025b7d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd15,	// (0x00025b7d) cell_fep_china_hwr2_fs_funtion_grid_t

0x25f3,	// (0x0001845b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x25fb,	// (0x00018463) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x2603,	// (0x0001846b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1a,	// (0x00025b82) popup_fep_china_hwr2_fs_control_bar_grid_g

0x260b,	// (0x00018473) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x260b,	// (0x00018473) cell_fep_china_hwr2_fs_candidate_grid

0x2624,	// (0x0001848c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x262c,	// (0x00018494) popup_fep_china_hwr2_fs_candidate_grid_g21

0xf49d,	// (0x00025305) cell_fep_china_hwr2_fs_candidate_grid_g1

0xf49d,	// (0x00025305) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x000259a9) cell_fep_china_hwr2_fs_candidate_grid_g

0x2634,	// (0x0001849c) cell_fep_china_hwr2_fs_candidate_grid_t1

0xd5a5,	// (0x0002340d) clock_nsta_pane_cp_24_ParamLimits

0xd5a5,	// (0x0002340d) clock_nsta_pane_cp_24

0xd60d,	// (0x00023475) indicator_nsta_pane_cp_24_ParamLimits

0xd60d,	// (0x00023475) indicator_nsta_pane_cp_24

0xe2f1,	// (0x00024159) heading_pane_g1

0x0001,

0xf8bf,	// (0x00025727) heading_pane_g

0xe9ed,	// (0x00024855) grid_sct_catagory_button_pane

0xe5e8,	// (0x00024450) scroll_pane_cp5_ParamLimits

0xf261,	// (0x000250c9) button_value_adjust_pane_cp5_ParamLimits

0xf261,	// (0x000250c9) button_value_adjust_pane_cp5

0xf306,	// (0x0002516e) form2_midp_time_pane_ParamLimits

0x2642,	// (0x000184aa) cell_sct_catagory_button_pane_ParamLimits

0x2642,	// (0x000184aa) cell_sct_catagory_button_pane

0xf462,	// (0x000252ca) bg_button_pane_cp01_ParamLimits

0xf462,	// (0x000252ca) bg_button_pane_cp01

0xf49d,	// (0x00025305) cell_sct_catagory_button_pane_g1

0xa0c3,	// (0x0001ff2b) popup_tb_extension_window

0xb40f,	// (0x00021277) aid_size_cell_ext_ParamLimits

0xb40f,	// (0x00021277) aid_size_cell_ext

0xc76b,	// (0x000225d3) bg_tb_trans_pane_cp1_ParamLimits

0xc76b,	// (0x000225d3) bg_tb_trans_pane_cp1

0xb431,	// (0x00021299) grid_tb_ext_pane_ParamLimits

0xb431,	// (0x00021299) grid_tb_ext_pane

0xb461,	// (0x000212c9) cell_tb_ext_pane_ParamLimits

0xb461,	// (0x000212c9) cell_tb_ext_pane

0xb485,	// (0x000212ed) cell_tb_ext_pane_g1_ParamLimits

0xb485,	// (0x000212ed) cell_tb_ext_pane_g1

0x2654,	// (0x000184bc) cell_tb_ext_pane_t1

0xc4d3,	// (0x0002233b) list_highlight_pane_cp11_ParamLimits

0xc4d3,	// (0x0002233b) list_highlight_pane_cp11

0x92e2,	// (0x0001f14a) popup_uni_indicator_window_ParamLimits

0x92e2,	// (0x0001f14a) popup_uni_indicator_window

0xc94b,	// (0x000227b3) bg_popup_sub_pane_cp14

0x266f,	// (0x000184d7) list_uniindi_pane

0x267b,	// (0x000184e3) uniindi_top_pane

0xc4d3,	// (0x0002233b) bg_uniindi_top_pane

0x269a,	// (0x00018502) uniindi_top_pane_g1

0x26b0,	// (0x00018518) uniindi_top_pane_g2

0x0003,

0xfd21,	// (0x00025b89) uniindi_top_pane_g

0x26da,	// (0x00018542) uniindi_top_pane_t1

0x2704,	// (0x0001856c) list_single_uniindi_pane_ParamLimits

0x2704,	// (0x0001856c) list_single_uniindi_pane

0xf49d,	// (0x00025305) bg_uniindi_top_pane_g1

0x2716,	// (0x0001857e) list_single_uniindi_pane_g1

0x2729,	// (0x00018591) list_single_uniindi_pane_t1

0xc320,	// (0x00022188) control_bg_pane

0x274e,	// (0x000185b6) bg_sctrl_sk_pane_cp1

0x2757,	// (0x000185bf) bg_sctrl_sk_pane_cp2

0x2760,	// (0x000185c8) control_bg_pane_g1

0x2769,	// (0x000185d1) control_bg_pane_g2

0x0001,

0xfd2a,	// (0x00025b92) control_bg_pane_g

0xf13d,	// (0x00024fa5) cell_indicator_nsta_pane_g1_ParamLimits

0xab63,	// (0x000209cb) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0002590d) cell_indicator_nsta_pane_g_ParamLimits

0x4561,	// (0x0001a3c9) form2_midp_time_pane_t1_ParamLimits

0x5c71,	// (0x0001bad9) main_idle_act4_pane_ParamLimits

0x5c71,	// (0x0001bad9) main_idle_act4_pane

0xa0c3,	// (0x0001ff2b) popup_tb_extension_window_ParamLimits

0xb44d,	// (0x000212b5) tb_ext_find_pane_ParamLimits

0xb44d,	// (0x000212b5) tb_ext_find_pane

0x2772,	// (0x000185da) ai_gene_pane_1_cp1

0xd45d,	// (0x000232c5) ai_gene_pane_2_cp1

0x277a,	// (0x000185e2) list_single_idle_plugin_calendar_pane

0x2783,	// (0x000185eb) list_single_idle_plugin_notification_pane

0x278c,	// (0x000185f4) list_single_idle_plugin_player_pane

0xb4a2,	// (0x0002130a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xb4a2,	// (0x0002130a) list_single_idle_plugin_shortcut_pane

0xb4c2,	// (0x0002132a) main_idle_act4_pane_t1

0xb4d8,	// (0x00021340) main_idle_act4_pane_t2

0x0001,

0xfd2f,	// (0x00025b97) main_idle_act4_pane_t

0xb4ee,	// (0x00021356) middle_sk_idle_act4_pane_ParamLimits

0xb4ee,	// (0x00021356) middle_sk_idle_act4_pane

0xb50a,	// (0x00021372) popup_clock_digital_analogue_window_cp2

0xb530,	// (0x00021398) shortcut_wheel_idle_act4_pane_ParamLimits

0xb530,	// (0x00021398) shortcut_wheel_idle_act4_pane

0xf49d,	// (0x00025305) shortcut_wheel_idle_act4_pane_g1

0xf49d,	// (0x00025305) shortcut_wheel_idle_act4_pane_g2

0xf49d,	// (0x00025305) shortcut_wheel_idle_act4_pane_g3

0xf49d,	// (0x00025305) shortcut_wheel_idle_act4_pane_g4

0xf49d,	// (0x00025305) shortcut_wheel_idle_act4_pane_g5

0x2795,	// (0x000185fd) shortcut_wheel_idle_act4_pane_g6

0x279d,	// (0x00018605) shortcut_wheel_idle_act4_pane_g7

0x27a5,	// (0x0001860d) shortcut_wheel_idle_act4_pane_g8

0x27ad,	// (0x00018615) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd34,	// (0x00025b9c) shortcut_wheel_idle_act4_pane_g

0x2510,	// (0x00018378) middle_sk_idle_act4_pane_g1_ParamLimits

0x2510,	// (0x00018378) middle_sk_idle_act4_pane_g1

0xb5ab,	// (0x00021413) middle_sk_idle_act4_pane_g2_ParamLimits

0xb5ab,	// (0x00021413) middle_sk_idle_act4_pane_g2

0x0001,

0xfd57,	// (0x00025bbf) middle_sk_idle_act4_pane_g_ParamLimits

0xfd57,	// (0x00025bbf) middle_sk_idle_act4_pane_g

0xb5c3,	// (0x0002142b) middle_sk_idle_act4_pane_t1_ParamLimits

0xb5c3,	// (0x0002142b) middle_sk_idle_act4_pane_t1

0xb5f2,	// (0x0002145a) grid_ai_shortcut_pane_ParamLimits

0xb5f2,	// (0x0002145a) grid_ai_shortcut_pane

0xb60f,	// (0x00021477) list_highlight_pane_cp16_ParamLimits

0xb60f,	// (0x00021477) list_highlight_pane_cp16

0xb61c,	// (0x00021484) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xb61c,	// (0x00021484) list_single_idle_plugin_shortcut_pane_g1

0xb628,	// (0x00021490) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xb628,	// (0x00021490) list_single_idle_plugin_shortcut_pane_g2

0xb644,	// (0x000214ac) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xb644,	// (0x000214ac) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5c,	// (0x00025bc4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5c,	// (0x00025bc4) list_single_idle_plugin_shortcut_pane_g

0xb659,	// (0x000214c1) cell_ai_shortcut_pane_ParamLimits

0xb659,	// (0x000214c1) cell_ai_shortcut_pane

0xb66f,	// (0x000214d7) cell_ai_shortcut_pane_g1_ParamLimits

0xb66f,	// (0x000214d7) cell_ai_shortcut_pane_g1

0x2772,	// (0x000185da) ai_gene_pane_1_cp2

0x27b5,	// (0x0001861d) ai_gene_pane_2_cp2

0x27bd,	// (0x00018625) list_highlight_pane_cp15

0x27c6,	// (0x0001862e) list_single_idle_plugin_calendar_pane_g1

0x27bd,	// (0x00018625) list_highlight_pane_cp17

0x27ce,	// (0x00018636) list_single_idle_plugin_calendar_pane_g1_copy1

0x27d6,	// (0x0001863e) list_single_idle_plugin_player_pane_g1

0xebec,	// (0x00024a54) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd63,	// (0x00025bcb) list_single_idle_plugin_player_pane_g

0x27de,	// (0x00018646) list_single_idle_plugin_player_pane_t1

0x27ec,	// (0x00018654) list_single_idle_plugin_player_pane_t2

0x27fa,	// (0x00018662) list_single_idle_plugin_player_pane_t3

0x2808,	// (0x00018670) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd68,	// (0x00025bd0) list_single_idle_plugin_player_pane_t

0x2816,	// (0x0001867e) wait_bar_pane_cp15

0x281e,	// (0x00018686) grid_ai_notification_pane

0xebec,	// (0x00024a54) list_single_idle_plugin_notification_pane_g1

0xb691,	// (0x000214f9) cell_ai_notification_pane_ParamLimits

0xb691,	// (0x000214f9) cell_ai_notification_pane

0x2827,	// (0x0001868f) cell_ai_notification_pane_g1

0x282f,	// (0x00018697) cell_ai_notification_pane_t1

0xb69e,	// (0x00021506) tb_ext_find_button_pane

0xb6a6,	// (0x0002150e) tb_ext_find_pane_g1

0xb6ae,	// (0x00021516) tb_ext_find_pane_t1

0xce7f,	// (0x00022ce7) tb_ext_find_button_pane_g1

0x283d,	// (0x000186a5) tb_ext_find_button_pane_g2

0x0001,

0xfd71,	// (0x00025bd9) tb_ext_find_button_pane_g

0xb4c2,	// (0x0002132a) main_idle_act4_pane_t1_ParamLimits

0xb4d8,	// (0x00021340) main_idle_act4_pane_t2_ParamLimits

0xfd2f,	// (0x00025b97) main_idle_act4_pane_t_ParamLimits

0xb50a,	// (0x00021372) popup_clock_digital_analogue_window_cp2_ParamLimits

0xb520,	// (0x00021388) sat_plugin_idle_act4_pane_ParamLimits

0xb520,	// (0x00021388) sat_plugin_idle_act4_pane

0xb6bc,	// (0x00021524) sat_plugin_idle_act4_pane_t1_ParamLimits

0xb6bc,	// (0x00021524) sat_plugin_idle_act4_pane_t1

0xb6d4,	// (0x0002153c) sat_plugin_idle_act4_pane_t2_ParamLimits

0xb6d4,	// (0x0002153c) sat_plugin_idle_act4_pane_t2

0xb6ec,	// (0x00021554) sat_plugin_idle_act4_pane_t3_ParamLimits

0xb6ec,	// (0x00021554) sat_plugin_idle_act4_pane_t3

0xb704,	// (0x0002156c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xb704,	// (0x0002156c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd76,	// (0x00025bde) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd76,	// (0x00025bde) sat_plugin_idle_act4_pane_t

0x4b67,	// (0x0001a9cf) popup_battery_window_ParamLimits

0x4b67,	// (0x0001a9cf) popup_battery_window

0xc4d3,	// (0x0002233b) bg_popup_sub_pane_cp25_ParamLimits

0xc4d3,	// (0x0002233b) bg_popup_sub_pane_cp25

0x2846,	// (0x000186ae) popup_battery_window_g1_ParamLimits

0x2846,	// (0x000186ae) popup_battery_window_g1

0x2852,	// (0x000186ba) popup_battery_window_t1_ParamLimits

0x2852,	// (0x000186ba) popup_battery_window_t1

0x2864,	// (0x000186cc) popup_battery_window_t2_ParamLimits

0x2864,	// (0x000186cc) popup_battery_window_t2

0x0001,

0xfd7f,	// (0x00025be7) popup_battery_window_t_ParamLimits

0xfd7f,	// (0x00025be7) popup_battery_window_t

0x98e8,	// (0x0001f750) midp_canvas_pane_ParamLimits

0x993d,	// (0x0001f7a5) midp_keypad_pane_ParamLimits

0x993d,	// (0x0001f7a5) midp_keypad_pane

0xcab4,	// (0x0002291c) main_midp_pane_ParamLimits

0xf1ff,	// (0x00025067) signal_pane_g2_cp_ParamLimits

0xb71c,	// (0x00021584) aid_size_cell_midp_keypad_ParamLimits

0xb71c,	// (0x00021584) aid_size_cell_midp_keypad

0xb739,	// (0x000215a1) midp_keyp_game_grid_pane_ParamLimits

0xb739,	// (0x000215a1) midp_keyp_game_grid_pane

0xb758,	// (0x000215c0) midp_keyp_rocker_pane_ParamLimits

0xb758,	// (0x000215c0) midp_keyp_rocker_pane

0xb799,	// (0x00021601) midp_keyp_sk_left_pane_ParamLimits

0xb799,	// (0x00021601) midp_keyp_sk_left_pane

0xb7eb,	// (0x00021653) midp_keyp_sk_right_pane_ParamLimits

0xb7eb,	// (0x00021653) midp_keyp_sk_right_pane

0xc320,	// (0x00022188) bg_button_pane_cp03

0xb837,	// (0x0002169f) midp_keyp_sk_left_pane_g1

0xc320,	// (0x00022188) bg_button_pane_cp04

0xb837,	// (0x0002169f) midp_keyp_sk_right_pane_g1

0xf49d,	// (0x00025305) midp_keyp_rocker_pane_g1

0xb840,	// (0x000216a8) keyp_game_cell_pane_ParamLimits

0xb840,	// (0x000216a8) keyp_game_cell_pane

0xc320,	// (0x00022188) bg_button_pane_cp02

0xb862,	// (0x000216ca) keyp_game_cell_pane_g1

0x9293,	// (0x0001f0fb) popup_fep_vkb2_window_ParamLimits

0x9293,	// (0x0001f0fb) popup_fep_vkb2_window

0xb86b,	// (0x000216d3) aid_size_cell_vkb2_ParamLimits

0xb86b,	// (0x000216d3) aid_size_cell_vkb2

0xb8a1,	// (0x00021709) popup_fep_vkb2_window_g1_ParamLimits

0xb8a1,	// (0x00021709) popup_fep_vkb2_window_g1

0xb8f1,	// (0x00021759) vkb2_area_bottom_pane_ParamLimits

0xb8f1,	// (0x00021759) vkb2_area_bottom_pane

0xb92f,	// (0x00021797) vkb2_area_keypad_pane_ParamLimits

0xb92f,	// (0x00021797) vkb2_area_keypad_pane

0xb96d,	// (0x000217d5) vkb2_area_top_pane_ParamLimits

0xb96d,	// (0x000217d5) vkb2_area_top_pane

0xb9e9,	// (0x00021851) vkb2_top_entry_pane_ParamLimits

0xb9e9,	// (0x00021851) vkb2_top_entry_pane

0xba16,	// (0x0002187e) vkb2_top_grid_left_pane_ParamLimits

0xba16,	// (0x0002187e) vkb2_top_grid_left_pane

0xba36,	// (0x0002189e) vkb2_top_grid_right_pane_ParamLimits

0xba36,	// (0x0002189e) vkb2_top_grid_right_pane

0x6c42,	// (0x0001caaa) vkb2_cell_keypad_pane_ParamLimits

0x6c42,	// (0x0001caaa) vkb2_cell_keypad_pane

0xba7c,	// (0x000218e4) vkb2_area_bottom_grid_pane_ParamLimits

0xba7c,	// (0x000218e4) vkb2_area_bottom_grid_pane

0xbaa2,	// (0x0002190a) vkb2_area_bottom_pane_g1_ParamLimits

0xbaa2,	// (0x0002190a) vkb2_area_bottom_pane_g1

0xbac8,	// (0x00021930) vkb2_area_bottom_pane_g2_ParamLimits

0xbac8,	// (0x00021930) vkb2_area_bottom_pane_g2

0xbaf9,	// (0x00021961) vkb2_area_bottom_pane_g3_ParamLimits

0xbaf9,	// (0x00021961) vkb2_area_bottom_pane_g3

0x0002,

0xfd84,	// (0x00025bec) vkb2_area_bottom_pane_g_ParamLimits

0xfd84,	// (0x00025bec) vkb2_area_bottom_pane_g

0x6dba,	// (0x0001cc22) vkb2_top_cell_left_pane_ParamLimits

0x6dba,	// (0x0001cc22) vkb2_top_cell_left_pane

0xbb4f,	// (0x000219b7) vkb2_top_entry_pane_g1_ParamLimits

0xbb4f,	// (0x000219b7) vkb2_top_entry_pane_g1

0xbb5d,	// (0x000219c5) vkb2_top_entry_pane_t1_ParamLimits

0xbb5d,	// (0x000219c5) vkb2_top_entry_pane_t1

0x2889,	// (0x000186f1) vkb2_top_entry_pane_t2_ParamLimits

0x2889,	// (0x000186f1) vkb2_top_entry_pane_t2

0x28bb,	// (0x00018723) vkb2_top_entry_pane_t3_ParamLimits

0x28bb,	// (0x00018723) vkb2_top_entry_pane_t3

0x0002,

0xfd8b,	// (0x00025bf3) vkb2_top_entry_pane_t_ParamLimits

0xfd8b,	// (0x00025bf3) vkb2_top_entry_pane_t

0xbb96,	// (0x000219fe) vkb2_top_grid_right_pane_g1_ParamLimits

0xbb96,	// (0x000219fe) vkb2_top_grid_right_pane_g1

0x6e5d,	// (0x0001ccc5) vkb2_top_grid_right_pane_g2_ParamLimits

0x6e5d,	// (0x0001ccc5) vkb2_top_grid_right_pane_g2

0x6e75,	// (0x0001ccdd) vkb2_top_grid_right_pane_g3_ParamLimits

0x6e75,	// (0x0001ccdd) vkb2_top_grid_right_pane_g3

0xbbac,	// (0x00021a14) vkb2_top_grid_right_pane_g4_ParamLimits

0xbbac,	// (0x00021a14) vkb2_top_grid_right_pane_g4

0x0003,

0xfd92,	// (0x00025bfa) vkb2_top_grid_right_pane_g_ParamLimits

0xfd92,	// (0x00025bfa) vkb2_top_grid_right_pane_g

0x6ea3,	// (0x0001cd0b) vkb2_top_cell_left_pane_g1

0x6eba,	// (0x0001cd22) vkb2_cell_keypad_pane_g1_ParamLimits

0x6eba,	// (0x0001cd22) vkb2_cell_keypad_pane_g1

0x28df,	// (0x00018747) vkb2_cell_keypad_pane_t1_ParamLimits

0x28df,	// (0x00018747) vkb2_cell_keypad_pane_t1

0x6ec8,	// (0x0001cd30) vkb2_cell_bottom_grid_pane_ParamLimits

0x6ec8,	// (0x0001cd30) vkb2_cell_bottom_grid_pane

0x6f01,	// (0x0001cd69) vkb2_cell_bottom_grid_pane_g1

0xb54f,	// (0x000213b7) aid_call2_pane_cp02

0xb557,	// (0x000213bf) aid_call_pane_cp02

0xb55f,	// (0x000213c7) clock_digital_number_pane_cp10

0xb567,	// (0x000213cf) clock_digital_number_pane_cp11

0xb56f,	// (0x000213d7) clock_digital_number_pane_cp12

0xb577,	// (0x000213df) clock_digital_number_pane_cp13

0xb57f,	// (0x000213e7) clock_digital_separator_pane_cp10

0xce7f,	// (0x00022ce7) popup_clock_digital_analogue_window_cp2_g1

0xce7f,	// (0x00022ce7) popup_clock_digital_analogue_window_cp2_g2

0xb587,	// (0x000213ef) popup_clock_digital_analogue_window_cp2_g3

0xce7f,	// (0x00022ce7) popup_clock_digital_analogue_window_cp2_g4

0xb587,	// (0x000213ef) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd47,	// (0x00025baf) popup_clock_digital_analogue_window_cp2_g

0xb58f,	// (0x000213f7) popup_clock_digital_analogue_window_cp2_t1

0xb59d,	// (0x00021405) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd52,	// (0x00025bba) popup_clock_digital_analogue_window_cp2_t

0xf49d,	// (0x00025305) clock_digital_number_pane_cp10_g1

0xf49d,	// (0x00025305) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x000259a9) clock_digital_number_pane_cp10_g

0xf49d,	// (0x00025305) clock_digital_separator_pane_cp10_g1

0xf49d,	// (0x00025305) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x000259a9) clock_digital_separator_pane_cp10_g

0x26bc,	// (0x00018524) uniindi_top_pane_g3

0x26cd,	// (0x00018535) uniindi_top_pane_g4

0x6cad,	// (0x0001cb15) vkb2_row_keypad_pane_ParamLimits

0x6cad,	// (0x0001cb15) vkb2_row_keypad_pane

0x6f1d,	// (0x0001cd85) vkb2_cell_t_keypad_pane_ParamLimits

0x6f1d,	// (0x0001cd85) vkb2_cell_t_keypad_pane

0x6f2a,	// (0x0001cd92) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6f2a,	// (0x0001cd92) vkb2_cell_t_keypad_pane_cp08

0x6f3a,	// (0x0001cda2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6f3a,	// (0x0001cda2) vkb2_cell_t_keypad_pane_cp09

0x6f4b,	// (0x0001cdb3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6f4b,	// (0x0001cdb3) vkb2_cell_t_keypad_pane_cp01

0x6f5b,	// (0x0001cdc3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6f5b,	// (0x0001cdc3) vkb2_cell_t_keypad_pane_cp02

0x6f6b,	// (0x0001cdd3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6f6b,	// (0x0001cdd3) vkb2_cell_t_keypad_pane_cp03

0x6f7b,	// (0x0001cde3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6f7b,	// (0x0001cde3) vkb2_cell_t_keypad_pane_cp04

0x6f8b,	// (0x0001cdf3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6f8b,	// (0x0001cdf3) vkb2_cell_t_keypad_pane_cp05

0x6f9b,	// (0x0001ce03) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6f9b,	// (0x0001ce03) vkb2_cell_t_keypad_pane_cp06

0x6fab,	// (0x0001ce13) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6fab,	// (0x0001ce13) vkb2_cell_t_keypad_pane_cp07

0x6fbb,	// (0x0001ce23) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6fbb,	// (0x0001ce23) vkb2_cell_t_keypad_pane_cp10

0x14f5,	// (0x0001735d) vkb2_cell_t_keypad_pane_g1

0x28f6,	// (0x0001875e) vkb2_cell_t_keypad_pane_t1

0xc320,	// (0x00022188) popup_grid_graphic2_window

0xbbc2,	// (0x00021a2a) aid_size_cell_graphic2_ParamLimits

0xbbc2,	// (0x00021a2a) aid_size_cell_graphic2

0xbc00,	// (0x00021a68) bg_popup_window_pane_cp21_ParamLimits

0xbc00,	// (0x00021a68) bg_popup_window_pane_cp21

0xbc0e,	// (0x00021a76) graphic2_pages_pane_ParamLimits

0xbc0e,	// (0x00021a76) graphic2_pages_pane

0xbc57,	// (0x00021abf) grid_graphic2_control_pane_ParamLimits

0xbc57,	// (0x00021abf) grid_graphic2_control_pane

0xbc95,	// (0x00021afd) grid_graphic2_pane_ParamLimits

0xbc95,	// (0x00021afd) grid_graphic2_pane

0xbd04,	// (0x00021b6c) cell_graphic2_pane

0xc320,	// (0x00022188) main_comp_mode_pane

0x230f,	// (0x00018177) list_ai3_gene_pane_ParamLimits

0xb24e,	// (0x000210b6) bg_popup_window_pane_cp19_ParamLimits

0x2480,	// (0x000182e8) bg_touch_area_indi_pane_ParamLimits

0x2480,	// (0x000182e8) bg_touch_area_indi_pane

0x2496,	// (0x000182fe) bg_touch_area_indi_pane_cp01_ParamLimits

0x2496,	// (0x000182fe) bg_touch_area_indi_pane_cp01

0x24ac,	// (0x00018314) bg_touch_area_indi_pane_cp02_ParamLimits

0x24ac,	// (0x00018314) bg_touch_area_indi_pane_cp02

0x24c2,	// (0x0001832a) bg_touch_area_indi_pane_cp03_ParamLimits

0x24c2,	// (0x0001832a) bg_touch_area_indi_pane_cp03

0x24d8,	// (0x00018340) popup_slider_window_g1_ParamLimits

0x24f4,	// (0x0001835c) popup_slider_window_g2_ParamLimits

0x2538,	// (0x000183a0) popup_slider_window_g3_ParamLimits

0xfcdc,	// (0x00025b44) popup_slider_window_g_ParamLimits

0x2554,	// (0x000183bc) popup_slider_window_t1_ParamLimits

0x2598,	// (0x00018400) small_volume_slider_vertical_pane_ParamLimits

0xbd04,	// (0x00021b6c) cell_graphic2_pane_ParamLimits

0xbd4d,	// (0x00021bb5) bg_button_pane_cp10_ParamLimits

0xbd4d,	// (0x00021bb5) bg_button_pane_cp10

0xbd60,	// (0x00021bc8) bg_button_pane_cp11_ParamLimits

0xbd60,	// (0x00021bc8) bg_button_pane_cp11

0xbd73,	// (0x00021bdb) graphic2_pages_pane_g1_ParamLimits

0xbd73,	// (0x00021bdb) graphic2_pages_pane_g1

0xbd8e,	// (0x00021bf6) graphic2_pages_pane_g2_ParamLimits

0xbd8e,	// (0x00021bf6) graphic2_pages_pane_g2

0x0001,

0xfda0,	// (0x00025c08) graphic2_pages_pane_g_ParamLimits

0xfda0,	// (0x00025c08) graphic2_pages_pane_g

0xbda6,	// (0x00021c0e) graphic2_pages_pane_t1_ParamLimits

0xbda6,	// (0x00021c0e) graphic2_pages_pane_t1

0xbdbe,	// (0x00021c26) cell_graphic2_control_pane_ParamLimits

0xbdbe,	// (0x00021c26) cell_graphic2_control_pane

0xbde8,	// (0x00021c50) cell_graphic2_pane_g1_ParamLimits

0xbde8,	// (0x00021c50) cell_graphic2_pane_g1

0x251e,	// (0x00018386) cell_graphic2_pane_g2_ParamLimits

0x251e,	// (0x00018386) cell_graphic2_pane_g2

0xbdf5,	// (0x00021c5d) cell_graphic2_pane_g3_ParamLimits

0xbdf5,	// (0x00021c5d) cell_graphic2_pane_g3

0x252b,	// (0x00018393) cell_graphic2_pane_g4_ParamLimits

0x252b,	// (0x00018393) cell_graphic2_pane_g4

0xbe02,	// (0x00021c6a) cell_graphic2_pane_g5_ParamLimits

0xbe02,	// (0x00021c6a) cell_graphic2_pane_g5

0x0004,

0xfda5,	// (0x00025c0d) cell_graphic2_pane_g_ParamLimits

0xfda5,	// (0x00025c0d) cell_graphic2_pane_g

0xbe22,	// (0x00021c8a) cell_graphic2_pane_t1_ParamLimits

0xbe22,	// (0x00021c8a) cell_graphic2_pane_t1

0xe2e5,	// (0x0002414d) grid_highlight_pane_cp11_ParamLimits

0xe2e5,	// (0x0002414d) grid_highlight_pane_cp11

0xc4d3,	// (0x0002233b) bg_button_pane_cp05

0xbe6a,	// (0x00021cd2) cell_graphic2_control_pane_g1

0xf49d,	// (0x00025305) bg_touch_area_indi_pane_g1

0x2908,	// (0x00018770) aid_cmod_rocker_key_size

0x2912,	// (0x0001877a) aid_cmode_itu_key_size

0x291c,	// (0x00018784) main_cmode_video_pane

0x2924,	// (0x0001878c) main_comp_mode_itu_pane

0x292e,	// (0x00018796) main_comp_mode_rocker_pane

0x2936,	// (0x0001879e) cell_cmode_rocker_pane_ParamLimits

0x2936,	// (0x0001879e) cell_cmode_rocker_pane

0x2948,	// (0x000187b0) cell_cmode_itu_pane_ParamLimits

0x2948,	// (0x000187b0) cell_cmode_itu_pane

0xc94b,	// (0x000227b3) bg_button_pane_cp06_ParamLimits

0xc94b,	// (0x000227b3) bg_button_pane_cp06

0x14f5,	// (0x0001735d) cell_cmode_rocker_pane_g1_ParamLimits

0x14f5,	// (0x0001735d) cell_cmode_rocker_pane_g1

0x25cf,	// (0x00018437) cell_cmode_rocker_pane_g2_ParamLimits

0x25cf,	// (0x00018437) cell_cmode_rocker_pane_g2

0x0001,

0xfdb5,	// (0x00025c1d) cell_cmode_rocker_pane_g_ParamLimits

0xfdb5,	// (0x00025c1d) cell_cmode_rocker_pane_g

0xc320,	// (0x00022188) bg_button_pane_cp07

0x295d,	// (0x000187c5) cell_cmode_itu_pane_g1

0x2987,	// (0x000187ef) cell_cmode_itu_pane_t1

0x2995,	// (0x000187fd) cell_cmode_itu_pane_t2

0x0001,

0xfdba,	// (0x00025c22) cell_cmode_itu_pane_t

0x273e,	// (0x000185a6) aid_touch_ctrl_left

0x2746,	// (0x000185ae) aid_touch_ctrl_right

0xc320,	// (0x00022188) compa_mode_pane

0xbe92,	// (0x00021cfa) aid_cmod_rocker_key_size_cp

0xbe9c,	// (0x00021d04) aid_cmode_itu_key_size_cp

0x29a3,	// (0x0001880b) compa_mode_pane_g1

0x29ab,	// (0x00018813) compa_mode_pane_g2

0x29b3,	// (0x0001881b) compa_mode_pane_g3

0x0002,

0xfdbf,	// (0x00025c27) compa_mode_pane_g

0xbea6,	// (0x00021d0e) main_comp_mode_itu_pane_cp

0xbeae,	// (0x00021d16) main_comp_mode_rocker_pane_cp

0xbeb6,	// (0x00021d1e) cell_cmode_itu_pane_cp_ParamLimits

0xbeb6,	// (0x00021d1e) cell_cmode_itu_pane_cp

0xbecb,	// (0x00021d33) cell_cmode_rocker_pane_cp_ParamLimits

0xbecb,	// (0x00021d33) cell_cmode_rocker_pane_cp

0xc94b,	// (0x000227b3) bg_button_pane_cp06_cp_ParamLimits

0xc94b,	// (0x000227b3) bg_button_pane_cp06_cp

0x14f5,	// (0x0001735d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x14f5,	// (0x0001735d) cell_cmode_rocker_pane_g1_cp

0xf49d,	// (0x00025305) cell_cmode_rocker_pane_g2_cp

0xc320,	// (0x00022188) bg_button_pane_cp07_cp

0xbedd,	// (0x00021d45) cell_cmode_itu_pane_g1_cp

0xbee6,	// (0x00021d4e) cell_cmode_itu_pane_t1_cp

0xbee6,	// (0x00021d4e) cell_cmode_itu_pane_t2_cp

0xa970,	// (0x000207d8) settings_code_pane_cp2

0xc3a0,	// (0x00022208) bg_popup_window_pane_cp3_ParamLimits

0xc6ab,	// (0x00022513) heading_pane_cp3_ParamLimits

0xc6b7,	// (0x0002251f) listscroll_popup_graphic_pane_ParamLimits

0x5c7f,	// (0x0001bae7) fep_hwr_aid_pane_ParamLimits

0x657b,	// (0x0001c3e3) aid_touch_sctrl_top_ParamLimits

0x6588,	// (0x0001c3f0) sctrl_sk_top_pane_g1_ParamLimits

0x14f5,	// (0x0001735d) sctrl_sk_top_pane_g2_ParamLimits

0xfcf5,	// (0x00025b5d) sctrl_sk_top_pane_g_ParamLimits

0x6595,	// (0x0001c3fd) sctrl_sk_top_pane_t1_ParamLimits

0x657b,	// (0x0001c3e3) aid_touch_sctrl_bottom_ParamLimits

0x6595,	// (0x0001c3fd) sctrl_sk_bottom_pane_t1_ParamLimits

0x2688,	// (0x000184f0) aid_area_touch_clock

0xb9ab,	// (0x00021813) aid_vkb2_area_top_pane_cell_ParamLimits

0xb9ab,	// (0x00021813) aid_vkb2_area_top_pane_cell

0xba56,	// (0x000218be) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xba56,	// (0x000218be) aid_vkb2_area_bottom_pane_cell

0x2881,	// (0x000186e9) popup_char_count_window

0x29bb,	// (0x00018823) popup_char_count_window_g1

0x29c4,	// (0x0001882c) popup_char_count_window_g2

0x29cd,	// (0x00018835) popup_char_count_window_g3

0x0002,

0xfdc6,	// (0x00025c2e) popup_char_count_window_g

0x29d6,	// (0x0001883e) popup_char_count_window_t1

0x6a92,	// (0x0001c8fa) popup_fep_char_preview_window_ParamLimits

0x6a92,	// (0x0001c8fa) popup_fep_char_preview_window

0xb9cb,	// (0x00021833) vkb2_top_candi_pane_ParamLimits

0xb9cb,	// (0x00021833) vkb2_top_candi_pane

0xbef4,	// (0x00021d5c) cell_vkb2_top_candi_pane_ParamLimits

0xbef4,	// (0x00021d5c) cell_vkb2_top_candi_pane

0xdcd5,	// (0x00023b3d) bg_popup_fep_char_preview_window_ParamLimits

0xdcd5,	// (0x00023b3d) bg_popup_fep_char_preview_window

0x72f7,	// (0x0001d15f) popup_fep_char_preview_window_t1_ParamLimits

0x72f7,	// (0x0001d15f) popup_fep_char_preview_window_t1

0x29f4,	// (0x0001885c) bg_popup_fep_char_preview_window_g1

0x29ec,	// (0x00018854) bg_popup_fep_char_preview_window_g2

0x29e4,	// (0x0001884c) bg_popup_fep_char_preview_window_g3

0x2a14,	// (0x0001887c) bg_popup_fep_char_preview_window_g4

0x2a0c,	// (0x00018874) bg_popup_fep_char_preview_window_g5

0x7331,	// (0x0001d199) bg_popup_fep_char_preview_window_g6

0x2a04,	// (0x0001886c) bg_popup_fep_char_preview_window_g7

0x29fc,	// (0x00018864) bg_popup_fep_char_preview_window_g8

0x2a1c,	// (0x00018884) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcd,	// (0x00025c35) bg_popup_fep_char_preview_window_g

0x14f5,	// (0x0001735d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x14f5,	// (0x0001735d) cell_vkb2_top_candi_pane_g1

0x1a5a,	// (0x000178c2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1a5a,	// (0x000178c2) cell_vkb2_top_candi_pane_g2

0x1a7b,	// (0x000178e3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x1a7b,	// (0x000178e3) cell_vkb2_top_candi_pane_g3

0x7339,	// (0x0001d1a1) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7339,	// (0x0001d1a1) cell_vkb2_top_candi_pane_g4

0x2966,	// (0x000187ce) cell_vkb2_top_candi_pane_g5_ParamLimits

0x2966,	// (0x000187ce) cell_vkb2_top_candi_pane_g5

0x25cf,	// (0x00018437) cell_vkb2_top_candi_pane_g6_ParamLimits

0x25cf,	// (0x00018437) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde0,	// (0x00025c48) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde0,	// (0x00025c48) cell_vkb2_top_candi_pane_g

0x735a,	// (0x0001d1c2) cell_vkb2_top_candi_pane_t1

0x5a8e,	// (0x0001b8f6) aid_size_touch_slider_mark_ParamLimits

0x5a8e,	// (0x0001b8f6) aid_size_touch_slider_mark

0xbc42,	// (0x00021aaa) grid_graphic2_catg_pane_ParamLimits

0xbc42,	// (0x00021aaa) grid_graphic2_catg_pane

0xbcd9,	// (0x00021b41) popup_grid_graphic2_window_t1_ParamLimits

0xbcd9,	// (0x00021b41) popup_grid_graphic2_window_t1

0xbcee,	// (0x00021b56) popup_grid_graphic2_window_t2_ParamLimits

0xbcee,	// (0x00021b56) popup_grid_graphic2_window_t2

0x0001,

0xfd9b,	// (0x00025c03) popup_grid_graphic2_window_t_ParamLimits

0xfd9b,	// (0x00025c03) popup_grid_graphic2_window_t

0xc4d3,	// (0x0002233b) bg_button_pane_cp05_ParamLimits

0xbe6a,	// (0x00021cd2) cell_graphic2_control_pane_g1_ParamLimits

0x2704,	// (0x0001856c) cell_graphic2_catg_pane_ParamLimits

0x2704,	// (0x0001856c) cell_graphic2_catg_pane

0xc320,	// (0x00022188) bg_button_pane_cp12

0xbf3e,	// (0x00021da6) cell_graphic2_catg_pane_g1

0x2654,	// (0x000184bc) cell_tb_ext_pane_t1_ParamLimits

0x6e1a,	// (0x0001cc82) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6e1a,	// (0x0001cc82) vkb2_top_cell_right_narrow_pane

0x6e32,	// (0x0001cc9a) vkb2_top_cell_right_wide_pane_ParamLimits

0x6e32,	// (0x0001cc9a) vkb2_top_cell_right_wide_pane

0x5c71,	// (0x0001bad9) bg_vkb2_func_pane_ParamLimits

0x5c71,	// (0x0001bad9) bg_vkb2_func_pane

0x6ea3,	// (0x0001cd0b) vkb2_top_cell_left_pane_g1_ParamLimits

0x5c71,	// (0x0001bad9) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5c71,	// (0x0001bad9) bg_vkb2_fuc_pane_cp03

0x6f01,	// (0x0001cd69) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xd77c,	// (0x000235e4) bg_vkb2_func_pane_g1

0xd784,	// (0x000235ec) bg_vkb2_func_pane_g2

0xd794,	// (0x000235fc) bg_vkb2_func_pane_g3

0xd78c,	// (0x000235f4) bg_vkb2_func_pane_g4

0xd79c,	// (0x00023604) bg_vkb2_func_pane_g5

0xd7a4,	// (0x0002360c) bg_vkb2_func_pane_g6

0xd7ac,	// (0x00023614) bg_vkb2_func_pane_g7

0xd7b4,	// (0x0002361c) bg_vkb2_func_pane_g8

0xd774,	// (0x000235dc) bg_vkb2_func_pane_g9

0x0008,

0xfded,	// (0x00025c55) bg_vkb2_func_pane_g

0x5c71,	// (0x0001bad9) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5c71,	// (0x0001bad9) bg_vkb2_fuc_pane_cp01

0x6ea3,	// (0x0001cd0b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6ea3,	// (0x0001cd0b) vkb2_top_cell_right_wide_pane_g1

0x5c71,	// (0x0001bad9) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5c71,	// (0x0001bad9) bg_vkb2_fuc_pane_cp02

0x6f01,	// (0x0001cd69) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6f01,	// (0x0001cd69) vkb2_top_cell_right_narrow_pane_g1

0xb19c,	// (0x00021004) aid_touch_area_decrease_ParamLimits

0xb19c,	// (0x00021004) aid_touch_area_decrease

0xb1ca,	// (0x00021032) aid_touch_area_increase_ParamLimits

0xb1ca,	// (0x00021032) aid_touch_area_increase

0xb1f2,	// (0x0002105a) aid_touch_area_mute_ParamLimits

0xb1f2,	// (0x0002105a) aid_touch_area_mute

0xb21a,	// (0x00021082) aid_touch_area_slider_ParamLimits

0xb21a,	// (0x00021082) aid_touch_area_slider

0xb25a,	// (0x000210c2) popup_slider_window_g4_ParamLimits

0xb25a,	// (0x000210c2) popup_slider_window_g4

0xb282,	// (0x000210ea) popup_slider_window_g5_ParamLimits

0xb282,	// (0x000210ea) popup_slider_window_g5

0xb2b6,	// (0x0002111e) popup_slider_window_g6_ParamLimits

0xb2b6,	// (0x0002111e) popup_slider_window_g6

0x2580,	// (0x000183e8) popup_slider_window_t2_ParamLimits

0x2580,	// (0x000183e8) popup_slider_window_t2

0x0001,

0xfce9,	// (0x00025b51) popup_slider_window_t_ParamLimits

0xfce9,	// (0x00025b51) popup_slider_window_t

0xb2d2,	// (0x0002113a) slider_pane_ParamLimits

0xb2d2,	// (0x0002113a) slider_pane

0x2a24,	// (0x0001888c) slider_pane_g1_ParamLimits

0x2a24,	// (0x0001888c) slider_pane_g1

0x2a38,	// (0x000188a0) slider_pane_g2_ParamLimits

0x2a38,	// (0x000188a0) slider_pane_g2

0x2a4e,	// (0x000188b6) slider_pane_g3_ParamLimits

0x2a4e,	// (0x000188b6) slider_pane_g3

0x0003,

0xfe00,	// (0x00025c68) slider_pane_g_ParamLimits

0xfe00,	// (0x00025c68) slider_pane_g

0xa0fb,	// (0x0001ff63) popup_tb_float_extension_window_ParamLimits

0xa0fb,	// (0x0001ff63) popup_tb_float_extension_window

0x2a7a,	// (0x000188e2) aid_size_cell_tb_float_ext

0xc320,	// (0x00022188) bg_popup_sub_window_cp28

0x2a85,	// (0x000188ed) grid_tb_float_ext_pane

0x2a8d,	// (0x000188f5) cell_tb_float_ext_pane_ParamLimits

0x2a8d,	// (0x000188f5) cell_tb_float_ext_pane

0x2aa5,	// (0x0001890d) cell_tb_float_ext_pane_g1

0x2aae,	// (0x00018916) grid_highlight_pane_cp12

0xad2c,	// (0x00020b94) cell_last_hwr_side_pane_ParamLimits

0xad2c,	// (0x00020b94) cell_last_hwr_side_pane

0xf49d,	// (0x00025305) cell_last_hwr_side_pane_g1

0x2ab7,	// (0x0001891f) cell_last_hwr_side_pane_g2

0x0001,

0xfe09,	// (0x00025c71) cell_last_hwr_side_pane_g

0xbb2a,	// (0x00021992) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbb2a,	// (0x00021992) vkb2_area_bottom_space_btn_pane

0x14f5,	// (0x0001735d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x28f6,	// (0x0001875e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x735a,	// (0x0001d1c2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7393,	// (0x0001d1fb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7393,	// (0x0001d1fb) vkb2_area_bottom_space_btn_pane_g1

0x73c9,	// (0x0001d231) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x73c9,	// (0x0001d231) vkb2_area_bottom_space_btn_pane_g2

0x73ff,	// (0x0001d267) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x73ff,	// (0x0001d267) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0e,	// (0x00025c76) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0e,	// (0x00025c76) vkb2_area_bottom_space_btn_pane_g

0x5d20,	// (0x0001bb88) cel_fep_hwr_func_pane_ParamLimits

0x5d20,	// (0x0001bb88) cel_fep_hwr_func_pane

0xad01,	// (0x00020b69) cell_hwr_side_button_pane_ParamLimits

0xad01,	// (0x00020b69) cell_hwr_side_button_pane

0x2688,	// (0x000184f0) aid_area_touch_clock_ParamLimits

0xc4d3,	// (0x0002233b) bg_uniindi_top_pane_ParamLimits

0x269a,	// (0x00018502) uniindi_top_pane_g1_ParamLimits

0x26b0,	// (0x00018518) uniindi_top_pane_g2_ParamLimits

0x26bc,	// (0x00018524) uniindi_top_pane_g3_ParamLimits

0x26cd,	// (0x00018535) uniindi_top_pane_g4_ParamLimits

0xfd21,	// (0x00025b89) uniindi_top_pane_g_ParamLimits

0x26da,	// (0x00018542) uniindi_top_pane_t1_ParamLimits

0xc4d3,	// (0x0002233b) bg_vkb2_func_pane_cp01_ParamLimits

0xc4d3,	// (0x0002233b) bg_vkb2_func_pane_cp01

0x2ac0,	// (0x00018928) cel_fep_hwr_func_pane_g1_ParamLimits

0x2ac0,	// (0x00018928) cel_fep_hwr_func_pane_g1

0xc4d3,	// (0x0002233b) bg_vkb2_func_pane_cp02_ParamLimits

0xc4d3,	// (0x0002233b) bg_vkb2_func_pane_cp02

0x2ac0,	// (0x00018928) cell_hwr_side_button_pane_g1_ParamLimits

0x2ac0,	// (0x00018928) cell_hwr_side_button_pane_g1

0xd68e,	// (0x000234f6) status_pane_g4_ParamLimits

0xd68e,	// (0x000234f6) status_pane_g4

0xd6a6,	// (0x0002350e) status_pane_t1

0xf32e,	// (0x00025196) form2_midp_gauge_slider_cont_pane

0xf336,	// (0x0002519e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xac7c,	// (0x00020ae4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xac8e,	// (0x00020af6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x0002595c) form2_midp_gauge_slider_pane_t_ParamLimits

0xf348,	// (0x000251b0) form2_midp_slider_pane_ParamLimits

0x6a52,	// (0x0001c8ba) aid_size_cell_func_vkb2_ParamLimits

0x6a52,	// (0x0001c8ba) aid_size_cell_func_vkb2

0x2a66,	// (0x000188ce) slider_pane_g4_ParamLimits

0x2a66,	// (0x000188ce) slider_pane_g4

0xbf47,	// (0x00021daf) form2_midp_gauge_slider_pane_t2_cp01

0xbf55,	// (0x00021dbd) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbf55,	// (0x00021dbd) form2_midp_gauge_slider_pane_t3_cp01

0x7470,	// (0x0001d2d8) form2_midp_slider_pane_cp01

0xc320,	// (0x00022188) navi_smil_pane

0x2af0,	// (0x00018958) navi_smil_pane_g1

0x2af8,	// (0x00018960) navi_smil_pane_t1

0x2ace,	// (0x00018936) form2_midp_slider_pane_g1

0x2ad7,	// (0x0001893f) form2_midp_slider_pane_g2

0x2adf,	// (0x00018947) form2_midp_slider_pane_g3

0x2ace,	// (0x00018936) form2_midp_slider_pane_g4

0xbf72,	// (0x00021dda) form2_midp_slider_pane_g5

0x0004,

0xfe17,	// (0x00025c7f) form2_midp_slider_pane_g

0x7435,	// (0x0001d29d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7435,	// (0x0001d29d) vkb2_area_bottom_space_btn_pane_g4

0xa2ba,	// (0x00020122) lc0_navi_pane_ParamLimits

0xa2ba,	// (0x00020122) lc0_navi_pane

0xa324,	// (0x0002018c) lc0_stat_indi_pane_ParamLimits

0xa324,	// (0x0002018c) lc0_stat_indi_pane

0xa339,	// (0x000201a1) ls0_title_pane_ParamLimits

0xa339,	// (0x000201a1) ls0_title_pane

0xc94b,	// (0x000227b3) bg_popup_sub_pane_cp14_ParamLimits

0x266f,	// (0x000184d7) list_uniindi_pane_ParamLimits

0x267b,	// (0x000184e3) uniindi_top_pane_ParamLimits

0x2716,	// (0x0001857e) list_single_uniindi_pane_g1_ParamLimits

0x2729,	// (0x00018591) list_single_uniindi_pane_t1_ParamLimits

0xbf7b,	// (0x00021de3) lc0_stat_clock_pane_ParamLimits

0xbf7b,	// (0x00021de3) lc0_stat_clock_pane

0xbf88,	// (0x00021df0) lc0_stat_indi_pane_g1_ParamLimits

0xbf88,	// (0x00021df0) lc0_stat_indi_pane_g1

0xbf95,	// (0x00021dfd) lc0_stat_indi_pane_g2_ParamLimits

0xbf95,	// (0x00021dfd) lc0_stat_indi_pane_g2

0x0001,

0xfe22,	// (0x00025c8a) lc0_stat_indi_pane_g_ParamLimits

0xfe22,	// (0x00025c8a) lc0_stat_indi_pane_g

0xbfa2,	// (0x00021e0a) lc0_uni_indicator_pane_ParamLimits

0xbfa2,	// (0x00021e0a) lc0_uni_indicator_pane

0x2b06,	// (0x0001896e) ls0_title_pane_g1_ParamLimits

0x2b06,	// (0x0001896e) ls0_title_pane_g1

0xbfaf,	// (0x00021e17) ls0_title_pane_t1_ParamLimits

0xbfaf,	// (0x00021e17) ls0_title_pane_t1

0xbfdd,	// (0x00021e45) lc0_uni_indicator_pane_g1_ParamLimits

0xbfdd,	// (0x00021e45) lc0_uni_indicator_pane_g1

0x2b1a,	// (0x00018982) lc0_stat_clock_pane_t1

0xc320,	// (0x00022188) main_ai5_pane

0x2b28,	// (0x00018990) ai5_sk_pane_ParamLimits

0x2b28,	// (0x00018990) ai5_sk_pane

0xbff2,	// (0x00021e5a) cell_ai5_widget_pane_ParamLimits

0xbff2,	// (0x00021e5a) cell_ai5_widget_pane

0x2b35,	// (0x0001899d) aid_size_cell_widget_grid

0x2b43,	// (0x000189ab) bg_ai5_widget_pane_ParamLimits

0x2b43,	// (0x000189ab) bg_ai5_widget_pane

0x2b97,	// (0x000189ff) cell_ai5_widget_pane_g2

0x2ba7,	// (0x00018a0f) cell_ai5_widget_pane_g3

0x2bbe,	// (0x00018a26) cell_ai5_widget_pane_g4

0x2bca,	// (0x00018a32) cell_ai5_widget_pane_g5

0x2bd6,	// (0x00018a3e) cell_ai5_widget_pane_g6

0x2be2,	// (0x00018a4a) cell_ai5_widget_pane_g7

0x2c2a,	// (0x00018a92) cell_ai5_widget_pane_t1_ParamLimits

0x2c2a,	// (0x00018a92) cell_ai5_widget_pane_t1

0x2c47,	// (0x00018aaf) cell_ai5_widget_pane_t2_ParamLimits

0x2c47,	// (0x00018aaf) cell_ai5_widget_pane_t2

0x2c5f,	// (0x00018ac7) cell_ai5_widget_pane_t3_ParamLimits

0x2c5f,	// (0x00018ac7) cell_ai5_widget_pane_t3

0x2c77,	// (0x00018adf) cell_ai5_widget_pane_t4_ParamLimits

0x2c77,	// (0x00018adf) cell_ai5_widget_pane_t4

0x2c94,	// (0x00018afc) cell_ai5_widget_pane_t5_ParamLimits

0x2c94,	// (0x00018afc) cell_ai5_widget_pane_t5

0x2cb3,	// (0x00018b1b) cell_ai5_widget_pane_t6_ParamLimits

0x2cb3,	// (0x00018b1b) cell_ai5_widget_pane_t6

0x2cc5,	// (0x00018b2d) cell_ai5_widget_pane_t7_ParamLimits

0x2cc5,	// (0x00018b2d) cell_ai5_widget_pane_t7

0x2cde,	// (0x00018b46) cell_ai5_widget_pane_t8_ParamLimits

0x2cde,	// (0x00018b46) cell_ai5_widget_pane_t8

0x0009,

0xfe3c,	// (0x00025ca4) cell_ai5_widget_pane_t_ParamLimits

0xfe3c,	// (0x00025ca4) cell_ai5_widget_pane_t

0x2d32,	// (0x00018b9a) grid_ai5_widget_pane

0xc94b,	// (0x000227b3) highlight_cell_ai5_widget_pane_ParamLimits

0xc94b,	// (0x000227b3) highlight_cell_ai5_widget_pane

0xc050,	// (0x00021eb8) ai5_sk_left_pane

0xc05a,	// (0x00021ec2) ai5_sk_middle_pane

0xc064,	// (0x00021ecc) ai5_sk_right_pane

0x2d3e,	// (0x00018ba6) bg_ai5_widget_pane_g1_ParamLimits

0x2d3e,	// (0x00018ba6) bg_ai5_widget_pane_g1

0x2d4a,	// (0x00018bb2) bg_ai5_widget_pane_g2_ParamLimits

0x2d4a,	// (0x00018bb2) bg_ai5_widget_pane_g2

0x2d56,	// (0x00018bbe) bg_ai5_widget_pane_g3_ParamLimits

0x2d56,	// (0x00018bbe) bg_ai5_widget_pane_g3

0x2d62,	// (0x00018bca) bg_ai5_widget_pane_g4_ParamLimits

0x2d62,	// (0x00018bca) bg_ai5_widget_pane_g4

0x2d6e,	// (0x00018bd6) bg_ai5_widget_pane_g5_ParamLimits

0x2d6e,	// (0x00018bd6) bg_ai5_widget_pane_g5

0x2d7a,	// (0x00018be2) bg_ai5_widget_pane_g6_ParamLimits

0x2d7a,	// (0x00018be2) bg_ai5_widget_pane_g6

0x2d86,	// (0x00018bee) bg_ai5_widget_pane_g7_ParamLimits

0x2d86,	// (0x00018bee) bg_ai5_widget_pane_g7

0x2d92,	// (0x00018bfa) bg_ai5_widget_pane_g8_ParamLimits

0x2d92,	// (0x00018bfa) bg_ai5_widget_pane_g8

0x2d9e,	// (0x00018c06) bg_ai5_widget_pane_g9_ParamLimits

0x2d9e,	// (0x00018c06) bg_ai5_widget_pane_g9

0x0008,

0xfe51,	// (0x00025cb9) bg_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x00025cb9) bg_ai5_widget_pane_g

0x2dd0,	// (0x00018c38) cell_shortcut_ai5_widget_pane_ParamLimits

0x2dd0,	// (0x00018c38) cell_shortcut_ai5_widget_pane

0xd3c9,	// (0x00023231) bg_cell_shortcut_ai5_widget_pane

0x2de1,	// (0x00018c49) cell_grid_ai5_widget_pane_g1

0xd3c9,	// (0x00023231) highlight_cell_shortcut_ai5_widget_pane

0xd784,	// (0x000235ec) ai5_sk_left_pane_g1

0x2dea,	// (0x00018c52) ai5_sk_left_pane_g2

0x2df2,	// (0x00018c5a) ai5_sk_left_pane_g3

0x2dfa,	// (0x00018c62) ai5_sk_left_pane_g4

0x0003,

0xfe64,	// (0x00025ccc) ai5_sk_left_pane_g

0x2e02,	// (0x00018c6a) ai5_sk_left_pane_t1

0xd77c,	// (0x000235e4) ai5_sk_right_pane_g1

0x2e10,	// (0x00018c78) ai5_sk_right_pane_g2

0x2e18,	// (0x00018c80) ai5_sk_right_pane_g3

0x2e20,	// (0x00018c88) ai5_sk_right_pane_g4

0x0003,

0xfe6d,	// (0x00025cd5) ai5_sk_right_pane_g

0x2e28,	// (0x00018c90) ai5_sk_right_pane_t1

0xd77c,	// (0x000235e4) ai5_sk_middle_pane_g1

0xd784,	// (0x000235ec) ai5_sk_middle_pane_g2

0xd79c,	// (0x00023604) ai5_sk_middle_pane_g3

0x2e18,	// (0x00018c80) ai5_sk_middle_pane_g4

0x2df2,	// (0x00018c5a) ai5_sk_middle_pane_g5

0x2e36,	// (0x00018c9e) ai5_sk_middle_pane_g6

0xc06e,	// (0x00021ed6) ai5_sk_middle_pane_g7

0x0006,

0xfe76,	// (0x00025cde) ai5_sk_middle_pane_g

0xa1ac,	// (0x00020014) aid_touch_area_size_lc0_ParamLimits

0xa1ac,	// (0x00020014) aid_touch_area_size_lc0

0x5f83,	// (0x0001bdeb) cell_hwr_candidate_pane_t1_ParamLimits

0xd592,	// (0x000233fa) aid_touch_navi_pane

0xa426,	// (0x0002028e) status_dt_navi_pane_ParamLimits

0xa426,	// (0x0002028e) status_dt_navi_pane

0xa43e,	// (0x000202a6) status_dt_sta_pane_ParamLimits

0xa43e,	// (0x000202a6) status_dt_sta_pane

0xc076,	// (0x00021ede) dt_sta_controll_pane

0xc083,	// (0x00021eeb) dt_sta_indi_pane

0xc090,	// (0x00021ef8) dt_sta_title_pane

0xc4d3,	// (0x0002233b) bg_dt_sta_indi_pane_ParamLimits

0xc4d3,	// (0x0002233b) bg_dt_sta_indi_pane

0x2e3e,	// (0x00018ca6) dt_sta_battery_pane

0x2e46,	// (0x00018cae) dt_sta_indi_pane_g1

0x2e4f,	// (0x00018cb7) dt_sta_indi_pane_g2

0x2e58,	// (0x00018cc0) dt_sta_indi_pane_g3

0x0002,

0xfe85,	// (0x00025ced) dt_sta_indi_pane_g

0x2e61,	// (0x00018cc9) dt_sta_signal_pane

0xc94b,	// (0x000227b3) bg_dt_sta_title_pane_ParamLimits

0xc94b,	// (0x000227b3) bg_dt_sta_title_pane

0x2e6a,	// (0x00018cd2) dt_sta_title_pane_g1

0x2e72,	// (0x00018cda) dt_sta_title_pane_t1_ParamLimits

0x2e72,	// (0x00018cda) dt_sta_title_pane_t1

0xc320,	// (0x00022188) bg_dt_sta_control_pane

0x2e87,	// (0x00018cef) dt_sta_controll_pane_g1

0x2e90,	// (0x00018cf8) bg_dt_sta_title_pane_g1

0x2e99,	// (0x00018d01) bg_dt_sta_title_pane_g2

0x2ea2,	// (0x00018d0a) bg_dt_sta_title_pane_g3

0x0002,

0xfe8c,	// (0x00025cf4) bg_dt_sta_title_pane_g

0xf49d,	// (0x00025305) bg_dt_sta_indi_pane_g1

0x2eab,	// (0x00018d13) dt_sta_signal_pane_g1

0x2eb3,	// (0x00018d1b) dt_sta_signal_pane_g2

0x0001,

0xfe93,	// (0x00025cfb) dt_sta_signal_pane_g

0x2ebb,	// (0x00018d23) dt_sta_battery_pane_g1

0x2ec4,	// (0x00018d2c) dt_sta_battery_pane_t1

0xf49d,	// (0x00025305) bg_dt_sta_control_pane_g1

0xcf02,	// (0x00022d6a) fep_china_uni_eep_pane

0xcf0a,	// (0x00022d72) fep_china_uni_entry_pane_ParamLimits

0xcf1a,	// (0x00022d82) popup_fep_china_uni_window_g1_ParamLimits

0xcf2a,	// (0x00022d92) popup_fep_china_uni_window_g2_ParamLimits

0xcf2a,	// (0x00022d92) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00025585) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00025585) popup_fep_china_uni_window_g

0x2ed3,	// (0x00018d3b) fep_china_uni_eep_pane_g1

0x2edb,	// (0x00018d43) fep_china_uni_eep_pane_t1

0x2ae7,	// (0x0001894f) aid_touch_area_size_smil_player

0xd641,	// (0x000234a9) lc0_clock_pane

0xd69a,	// (0x00023502) status_pane_g5_ParamLimits

0xd69a,	// (0x00023502) status_pane_g5

0x9d33,	// (0x0001fb9b) popup_keymap_window

0xd67a,	// (0x000234e2) status_icon_pane

0x2ba7,	// (0x00018a0f) cell_ai5_widget_pane_g3_ParamLimits

0x2bbe,	// (0x00018a26) cell_ai5_widget_pane_g4_ParamLimits

0x2bca,	// (0x00018a32) cell_ai5_widget_pane_g5_ParamLimits

0x2bee,	// (0x00018a56) cell_ai5_widget_pane_g8_ParamLimits

0x2bee,	// (0x00018a56) cell_ai5_widget_pane_g8

0x2c02,	// (0x00018a6a) cell_ai5_widget_pane_g9_ParamLimits

0x2c02,	// (0x00018a6a) cell_ai5_widget_pane_g9

0x2c16,	// (0x00018a7e) cell_ai5_widget_pane_g10_ParamLimits

0x2c16,	// (0x00018a7e) cell_ai5_widget_pane_g10

0x2eea,	// (0x00018d52) status_icon_pane_g1

0xc320,	// (0x00022188) bg_popup_sub_pane_cp13

0x2ef2,	// (0x00018d5a) popup_keymap_window_t1

0x9a86,	// (0x0001f8ee) control_pane_g6_ParamLimits

0x9a86,	// (0x0001f8ee) control_pane_g6

0x9a93,	// (0x0001f8fb) control_pane_g7_ParamLimits

0x9a93,	// (0x0001f8fb) control_pane_g7

0x9aa0,	// (0x0001f908) control_pane_g8_ParamLimits

0x9aa0,	// (0x0001f908) control_pane_g8

0xc076,	// (0x00021ede) dt_sta_controll_pane_ParamLimits

0xc083,	// (0x00021eeb) dt_sta_indi_pane_ParamLimits

0xc090,	// (0x00021ef8) dt_sta_title_pane_ParamLimits

0xc896,	// (0x000226fe) aid_size_touch_scroll_bar_cale

0x4b7b,	// (0x0001a9e3) popup_discreet_window_ParamLimits

0x4b7b,	// (0x0001a9e3) popup_discreet_window

0x92c5,	// (0x0001f12d) popup_sk_window

0xdcd5,	// (0x00023b3d) bg_popup_sub_pane_cp28_ParamLimits

0xdcd5,	// (0x00023b3d) bg_popup_sub_pane_cp28

0x2f00,	// (0x00018d68) popup_discreet_window_g1_ParamLimits

0x2f00,	// (0x00018d68) popup_discreet_window_g1

0x2f20,	// (0x00018d88) popup_discreet_window_t1_ParamLimits

0x2f20,	// (0x00018d88) popup_discreet_window_t1

0x2f3e,	// (0x00018da6) popup_discreet_window_t2_ParamLimits

0x2f3e,	// (0x00018da6) popup_discreet_window_t2

0x0002,

0xfe98,	// (0x00025d00) popup_discreet_window_t_ParamLimits

0xfe98,	// (0x00025d00) popup_discreet_window_t

0x75b7,	// (0x0001d41f) popup_sk_window_g1

0x75c1,	// (0x0001d429) popup_sk_window_g2

0x0001,

0xfe9f,	// (0x00025d07) popup_sk_window_g

0x75c9,	// (0x0001d431) popup_sk_window_t1

0x75d7,	// (0x0001d43f) popup_sk_window_t1_copy1

0x2b97,	// (0x000189ff) cell_ai5_widget_pane_g2_ParamLimits

0x2cf0,	// (0x00018b58) cell_ai5_widget_pane_t9_ParamLimits

0x2cf0,	// (0x00018b58) cell_ai5_widget_pane_t9

0xc320,	// (0x00022188) main_fep_fshwr2_pane

0xc0a2,	// (0x00021f0a) aid_fshwr2_btn_pane

0xc0b3,	// (0x00021f1b) aid_fshwr2_syb_pane

0xc0c4,	// (0x00021f2c) aid_fshwr2_txt_pane

0xc0d0,	// (0x00021f38) fshwr2_func_candi_pane

0xc0ea,	// (0x00021f52) fshwr2_hwr_syb_pane

0xc0ff,	// (0x00021f67) fshwr2_icf_pane

0xc320,	// (0x00022188) fshwr2_icf_bg_pane

0xc125,	// (0x00021f8d) fshwr2_icf_pane_t1_ParamLimits

0xc125,	// (0x00021f8d) fshwr2_icf_pane_t1

0xce7f,	// (0x00022ce7) fshwr2_func_candi_pane_g1

0xc13c,	// (0x00021fa4) fshwr2_func_candi_row_pane_ParamLimits

0xc13c,	// (0x00021fa4) fshwr2_func_candi_row_pane

0xc15f,	// (0x00021fc7) cell_fshwr2_syb_pane_ParamLimits

0xc15f,	// (0x00021fc7) cell_fshwr2_syb_pane

0x14f5,	// (0x0001735d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x14f5,	// (0x0001735d) fshwr2_hwr_syb_pane_g1

0xc320,	// (0x00022188) bg_popup_call_pane_cp01

0xc173,	// (0x00021fdb) fshwr2_func_candi_cell_pane_ParamLimits

0xc173,	// (0x00021fdb) fshwr2_func_candi_cell_pane

0xc1b2,	// (0x0002201a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc1b2,	// (0x0002201a) fshwr2_func_candi_cell_bg_pane

0xc1be,	// (0x00022026) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc1be,	// (0x00022026) fshwr2_func_candi_cell_pane_g1

0xc1f5,	// (0x0002205d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc1f5,	// (0x0002205d) fshwr2_func_candi_cell_pane_t1

0xc320,	// (0x00022188) bg_button_pane_cp08

0xd3c9,	// (0x00023231) cell_fshwr2_syb_bg_pane

0xc210,	// (0x00022078) cell_fshwr2_syb_bg_pane_g1

0xc218,	// (0x00022080) cell_fshwr2_syb_bg_pane_t1

0xc94b,	// (0x000227b3) main_tmo_pane

0xa74c,	// (0x000205b4) uni_indicator_pane_g1_ParamLimits

0xa762,	// (0x000205ca) uni_indicator_pane_g2_ParamLimits

0xa778,	// (0x000205e0) uni_indicator_pane_g3_ParamLimits

0xe728,	// (0x00024590) uni_indicator_pane_g4_ParamLimits

0xe728,	// (0x00024590) uni_indicator_pane_g4

0xe73c,	// (0x000245a4) uni_indicator_pane_g5_ParamLimits

0xe73c,	// (0x000245a4) uni_indicator_pane_g5

0xe73c,	// (0x000245a4) uni_indicator_pane_g6_ParamLimits

0xe73c,	// (0x000245a4) uni_indicator_pane_g6

0xf915,	// (0x0002577d) uni_indicator_pane_g_ParamLimits

0xb180,	// (0x00020fe8) popup_tmo_note_window_ParamLimits

0xb180,	// (0x00020fe8) popup_tmo_note_window

0xc94b,	// (0x000227b3) fshwr2_bg_pane

0xc1e6,	// (0x0002204e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc1e6,	// (0x0002204e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea4,	// (0x00025d0c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea4,	// (0x00025d0c) fshwr2_func_candi_cell_pane_g

0xf49d,	// (0x00025305) bg_popup_window_pane_cp01

0x7710,	// (0x0001d578) bg_popup_window_pane_g1_cp01

0x7719,	// (0x0001d581) bg_popup_window_pane_cp22_ParamLimits

0x7719,	// (0x0001d581) bg_popup_window_pane_cp22

0x7727,	// (0x0001d58f) listscroll_tmo_link_pane_ParamLimits

0x7727,	// (0x0001d58f) listscroll_tmo_link_pane

0x7767,	// (0x0001d5cf) popup_tmo_note_window_g1_ParamLimits

0x7767,	// (0x0001d5cf) popup_tmo_note_window_g1

0x7774,	// (0x0001d5dc) tmo_note_info_pane_ParamLimits

0x7774,	// (0x0001d5dc) tmo_note_info_pane

0xc227,	// (0x0002208f) list_tmo_note_info_pane_g1_ParamLimits

0xc227,	// (0x0002208f) list_tmo_note_info_pane_g1

0x77a5,	// (0x0001d60d) list_tmo_note_info_pane_g2_ParamLimits

0x77a5,	// (0x0001d60d) list_tmo_note_info_pane_g2

0x0001,

0xfea9,	// (0x00025d11) list_tmo_note_info_pane_g_ParamLimits

0xfea9,	// (0x00025d11) list_tmo_note_info_pane_g

0x77c1,	// (0x0001d629) list_tmo_note_info_text_pane_ParamLimits

0x77c1,	// (0x0001d629) list_tmo_note_info_text_pane

0x7842,	// (0x0001d6aa) list_tmo_link_pane

0x784f,	// (0x0001d6b7) scroll_pane_cp20

0x785c,	// (0x0001d6c4) list_single_tmo_link_pane_ParamLimits

0x785c,	// (0x0001d6c4) list_single_tmo_link_pane

0x786c,	// (0x0001d6d4) list_single_tmo_link_pane_t1

0x787a,	// (0x0001d6e2) list_tmo_note_info_text_pane_t1_ParamLimits

0x787a,	// (0x0001d6e2) list_tmo_note_info_text_pane_t1

0x970a,	// (0x0001f572) aid_size_touch_scroll_bar_cp01_ParamLimits

0x970a,	// (0x0001f572) aid_size_touch_scroll_bar_cp01

0x8e1b,	// (0x0001ec83) aid_size_touch_slider_marker

0x92b9,	// (0x0001f121) popup_settings_window_ParamLimits

0x92b9,	// (0x0001f121) popup_settings_window

0x40bd,	// (0x00019f25) popup_candi_list_indi_window

0xd592,	// (0x000233fa) aid_touch_navi_pane_ParamLimits

0x654f,	// (0x0001c3b7) rs_clock_indi_pane

0x6558,	// (0x0001c3c0) sctrl_sk_bottom_pane_ParamLimits

0x6569,	// (0x0001c3d1) sctrl_sk_top_pane_ParamLimits

0x6aac,	// (0x0001c914) popup_fep_tooltip_window

0x2b35,	// (0x0001899d) aid_size_cell_widget_grid_ParamLimits

0x2b82,	// (0x000189ea) cell_ai5_widget_pane_g1_ParamLimits

0x2b82,	// (0x000189ea) cell_ai5_widget_pane_g1

0x2bd6,	// (0x00018a3e) cell_ai5_widget_pane_g6_ParamLimits

0x2be2,	// (0x00018a4a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe27,	// (0x00025c8f) cell_ai5_widget_pane_g_ParamLimits

0xfe27,	// (0x00025c8f) cell_ai5_widget_pane_g

0x2d14,	// (0x00018b7c) cell_ai5_widget_pane_t10_ParamLimits

0x2d14,	// (0x00018b7c) cell_ai5_widget_pane_t10

0x2d32,	// (0x00018b9a) grid_ai5_widget_pane_ParamLimits

0x2daa,	// (0x00018c12) cell_contacts_ai5_widget_pane_ParamLimits

0x2daa,	// (0x00018c12) cell_contacts_ai5_widget_pane

0x2f53,	// (0x00018dbb) popup_discreet_window_t3_ParamLimits

0x2f53,	// (0x00018dbb) popup_discreet_window_t3

0xc113,	// (0x00021f7b) popup_fshwr2_char_preview_window_ParamLimits

0xc113,	// (0x00021f7b) popup_fshwr2_char_preview_window

0xc23e,	// (0x000220a6) tmo_note_info_pane_t1

0xc253,	// (0x000220bb) tmo_note_info_pane_t2

0xc268,	// (0x000220d0) tmo_note_info_pane_t3

0x781e,	// (0x0001d686) tmo_note_info_pane_t4

0x7830,	// (0x0001d698) tmo_note_info_pane_t5

0x0004,

0xfeae,	// (0x00025d16) tmo_note_info_pane_t

0x7842,	// (0x0001d6aa) list_tmo_link_pane_ParamLimits

0x784f,	// (0x0001d6b7) scroll_pane_cp20_ParamLimits

0xc320,	// (0x00022188) bg_popup_fep_char_preview_window_cp01

0x7893,	// (0x0001d6fb) popup_fshwr2_char_preview_window_t1

0x78a1,	// (0x0001d709) popup_candi_list_indi_window_g1

0x78aa,	// (0x0001d712) bg_cell_contacts_ai5_widget_pane

0x78b6,	// (0x0001d71e) cell_contacts_ai5_widget_pane_g1

0x78cb,	// (0x0001d733) cell_contacts_ai5_widget_pane_g2

0x78d7,	// (0x0001d73f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb9,	// (0x00025d21) cell_contacts_ai5_widget_pane_g

0x78e3,	// (0x0001d74b) cell_contacts_ai5_widget_pane_t1

0xc94b,	// (0x000227b3) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7958,	// (0x0001d7c0) settings_container_pane

0xd3c9,	// (0x00023231) listscroll_set_pane_copy1

0xeecf,	// (0x00024d37) scroll_pane_cp121_copy1

0xdaa3,	// (0x0002390b) set_content_pane_copy1

0x7964,	// (0x0001d7cc) aid_height_set_list_copy1_ParamLimits

0x7964,	// (0x0001d7cc) aid_height_set_list_copy1

0xe5d6,	// (0x0002443e) aid_size_parent_copy1_ParamLimits

0xe5d6,	// (0x0002443e) aid_size_parent_copy1

0x7970,	// (0x0001d7d8) button_value_adjust_pane_cp6_copy1_ParamLimits

0x7970,	// (0x0001d7d8) button_value_adjust_pane_cp6_copy1

0xcab4,	// (0x0002291c) list_highlight_pane_cp2_copy1_ParamLimits

0xcab4,	// (0x0002291c) list_highlight_pane_cp2_copy1

0x7984,	// (0x0001d7ec) list_set_pane_copy1_ParamLimits

0x7984,	// (0x0001d7ec) list_set_pane_copy1

0x78f5,	// (0x0001d75d) main_pane_set_t1_copy1_ParamLimits

0x78f5,	// (0x0001d75d) main_pane_set_t1_copy1

0x792f,	// (0x0001d797) main_pane_set_t2_copy1_ParamLimits

0x792f,	// (0x0001d797) main_pane_set_t2_copy1

0x7a13,	// (0x0001d87b) main_pane_set_t3_copy1

0x7a21,	// (0x0001d889) main_pane_set_t4_copy1

0x794c,	// (0x0001d7b4) set_content_pane_g1_copy1_ParamLimits

0x794c,	// (0x0001d7b4) set_content_pane_g1_copy1

0x7a2f,	// (0x0001d897) setting_code_pane_copy1

0x7a37,	// (0x0001d89f) setting_slider_graphic_pane_copy1

0x7a37,	// (0x0001d89f) setting_slider_pane_copy1

0x7a37,	// (0x0001d89f) setting_text_pane_copy1

0x7a37,	// (0x0001d89f) setting_volume_pane_copy1

0x7a2f,	// (0x0001d897) settings_code_pane_cp2_copy1

0x7a3f,	// (0x0001d8a7) settings_code_pane_cp_copy1_ParamLimits

0x7a3f,	// (0x0001d8a7) settings_code_pane_cp_copy1

0x7a53,	// (0x0001d8bb) volume_set_pane_copy1

0x7a5b,	// (0x0001d8c3) volume_set_pane_g10_copy1

0x7a63,	// (0x0001d8cb) volume_set_pane_g1_copy1

0x7a6b,	// (0x0001d8d3) volume_set_pane_g2_copy1

0x7a73,	// (0x0001d8db) volume_set_pane_g3_copy1

0x7a7b,	// (0x0001d8e3) volume_set_pane_g4_copy1

0x7a83,	// (0x0001d8eb) volume_set_pane_g5_copy1

0x7a8b,	// (0x0001d8f3) volume_set_pane_g6_copy1

0x7a93,	// (0x0001d8fb) volume_set_pane_g7_copy1

0x7a9b,	// (0x0001d903) volume_set_pane_g8_copy1

0x7aa3,	// (0x0001d90b) volume_set_pane_g9_copy1

0xc3a0,	// (0x00022208) bg_set_opt_pane_cp_copy1_ParamLimits

0xc3a0,	// (0x00022208) bg_set_opt_pane_cp_copy1

0x7aab,	// (0x0001d913) setting_slider_pane_t1_copy1_ParamLimits

0x7aab,	// (0x0001d913) setting_slider_pane_t1_copy1

0x7ac9,	// (0x0001d931) setting_slider_pane_t2_copy1_ParamLimits

0x7ac9,	// (0x0001d931) setting_slider_pane_t2_copy1

0x7ae2,	// (0x0001d94a) setting_slider_pane_t3_copy1_ParamLimits

0x7ae2,	// (0x0001d94a) setting_slider_pane_t3_copy1

0x7af9,	// (0x0001d961) slider_set_pane_copy1_ParamLimits

0x7af9,	// (0x0001d961) slider_set_pane_copy1

0xc9a3,	// (0x0002280b) set_opt_bg_pane_g1_copy2

0xc9ab,	// (0x00022813) set_opt_bg_pane_g2_copy2

0x7b0f,	// (0x0001d977) set_opt_bg_pane_g3_copy2

0xc9bb,	// (0x00022823) set_opt_bg_pane_g4_copy2

0xc9c3,	// (0x0002282b) set_opt_bg_pane_g5_copy2

0xc9cb,	// (0x00022833) set_opt_bg_pane_g6_copy2

0x7b17,	// (0x0001d97f) set_opt_bg_pane_g7_copy2

0x7b1f,	// (0x0001d987) set_opt_bg_pane_g8_copy2

0x7b27,	// (0x0001d98f) set_opt_bg_pane_g9_copy2

0x7b2f,	// (0x0001d997) aid_size_touch_slider_mark_copy1_ParamLimits

0x7b2f,	// (0x0001d997) aid_size_touch_slider_mark_copy1

0x7b43,	// (0x0001d9ab) slider_set_pane_g1_copy1

0x7b4c,	// (0x0001d9b4) slider_set_pane_g2_copy1

0x5aae,	// (0x0001b916) slider_set_pane_g3_copy1_ParamLimits

0x5aae,	// (0x0001b916) slider_set_pane_g3_copy1

0x5ac2,	// (0x0001b92a) slider_set_pane_g4_copy1_ParamLimits

0x5ac2,	// (0x0001b92a) slider_set_pane_g4_copy1

0x5ada,	// (0x0001b942) slider_set_pane_g5_copy1_ParamLimits

0x5ada,	// (0x0001b942) slider_set_pane_g5_copy1

0x5aae,	// (0x0001b916) slider_set_pane_g6_copy1_ParamLimits

0x5aae,	// (0x0001b916) slider_set_pane_g6_copy1

0x7b54,	// (0x0001d9bc) slider_set_pane_g7_copy1_ParamLimits

0x7b54,	// (0x0001d9bc) slider_set_pane_g7_copy1

0xc334,	// (0x0002219c) bg_set_opt_pane_cp2_copy1

0x7b6a,	// (0x0001d9d2) setting_slider_graphic_pane_g1_copy1

0x7b73,	// (0x0001d9db) setting_slider_graphic_pane_t1_copy1

0x7b82,	// (0x0001d9ea) setting_slider_graphic_pane_t2_copy1

0x7b91,	// (0x0001d9f9) slider_set_pane_cp_copy1

0x7ba1,	// (0x0001da09) input_focus_pane_cp1_copy1

0x7baa,	// (0x0001da12) list_set_text_pane_copy1

0x7bb2,	// (0x0001da1a) setting_text_pane_g1_copy1

0x4905,	// (0x0001a76d) set_text_pane_t1_copy1

0x7ba1,	// (0x0001da09) input_focus_pane_cp2_copy1

0x7bb2,	// (0x0001da1a) setting_code_pane_g1_copy1

0x7bbb,	// (0x0001da23) setting_code_pane_t1_copy1

0xd657,	// (0x000234bf) list_set_graphic_pane_copy1

0xc334,	// (0x0002219c) bg_set_opt_pane_cp4_copy1

0xd0dd,	// (0x00022f45) list_set_graphic_pane_g1_copy1_ParamLimits

0xd0dd,	// (0x00022f45) list_set_graphic_pane_g1_copy1

0x7bc9,	// (0x0001da31) list_set_graphic_pane_g2_copy1

0xd0f5,	// (0x00022f5d) list_set_graphic_pane_t1_copy1_ParamLimits

0xd0f5,	// (0x00022f5d) list_set_graphic_pane_t1_copy1

0xf49d,	// (0x00025305) rs_clock_indi_pane_g1

0x7bd1,	// (0x0001da39) rs_clock_indi_pane_t1

0x7bdf,	// (0x0001da47) rs_indi_pane

0x7be7,	// (0x0001da4f) rs_indi_pane_g1

0x7bf0,	// (0x0001da58) rs_indi_pane_g2

0x7bf9,	// (0x0001da61) rs_indi_pane_g3

0x0002,

0xfec0,	// (0x00025d28) rs_indi_pane_g

0xd3c9,	// (0x00023231) bg_popup_preview_window_pane_cp03

0x7c02,	// (0x0001da6a) popup_fep_tooltip_window_t1

0x1e15,	// (0x00017c7d) popup_note2_window_g2_ParamLimits

0x1e15,	// (0x00017c7d) popup_note2_window_g2

0x0001,

0xfc60,	// (0x00025ac8) popup_note2_window_g_ParamLimits

0xfc60,	// (0x00025ac8) popup_note2_window_g

0x22d5,	// (0x0001813d) bg_popup_sub_pane_cp11_ParamLimits

0x22e2,	// (0x0001814a) cell_ai3_links_pane_g1_ParamLimits

0x22f9,	// (0x00018161) cell_ai3_links_pane_t1

0x4905,	// (0x0001a76d) set_text_pane_t1_copy1_ParamLimits

0xd2dc,	// (0x00023144) cell_graphic_popup_pane_cp2_ParamLimits

0xd2dc,	// (0x00023144) cell_graphic_popup_pane_cp2

0x7c10,	// (0x0001da78) cell_graphic_popup_pane_g1_cp2

0xc745,	// (0x000225ad) cell_graphic_popup_pane_g2_cp2

0x7c18,	// (0x0001da80) cell_graphic_popup_pane_g3_cp2

0x7c20,	// (0x0001da88) cell_graphic_popup_pane_t2_cp2

0xc756,	// (0x000225be) grid_highlight_pane_cp3_cp2

0xcc5e,	// (0x00022ac6) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xc94b,	// (0x000227b3) main_tmo_pane_ParamLimits

0xb178,	// (0x00020fe0) popup_tmo_big_image_note_window

0x2b71,	// (0x000189d9) cell_ai5_widget_list_pane

0x2b79,	// (0x000189e1) cell_ai5_widget_lrg_icon_pane

0xc23e,	// (0x000220a6) tmo_note_info_pane_t1_ParamLimits

0xc253,	// (0x000220bb) tmo_note_info_pane_t2_ParamLimits

0xc268,	// (0x000220d0) tmo_note_info_pane_t3_ParamLimits

0x781e,	// (0x0001d686) tmo_note_info_pane_t4_ParamLimits

0x7830,	// (0x0001d698) tmo_note_info_pane_t5_ParamLimits

0xfeae,	// (0x00025d16) tmo_note_info_pane_t_ParamLimits

0x7958,	// (0x0001d7c0) settings_container_pane_ParamLimits

0x7b99,	// (0x0001da01) indicator_popup_pane_cp5

0x7b99,	// (0x0001da01) indicator_popup_pane_cp6

0xd657,	// (0x000234bf) list_set_graphic_pane_copy1_ParamLimits

0xc320,	// (0x00022188) bg_popup_window_pane_cp23

0x7c2e,	// (0x0001da96) popup_tmo_big_image_note_window_g1

0x7c37,	// (0x0001da9f) popup_tmo_big_image_note_window_t1

0x7c45,	// (0x0001daad) popup_tmo_big_image_note_window_t2

0x7c53,	// (0x0001dabb) popup_tmo_big_image_note_window_t3

0x0002,

0xfec7,	// (0x00025d2f) popup_tmo_big_image_note_window_t

0xf49d,	// (0x00025305) cell_ai5_widget_lrg_icon_pane_g1

0x7c61,	// (0x0001dac9) cell_ai5_widget_lrg_icon_pane_t1

0x7c6f,	// (0x0001dad7) cell_ai5_widget_list_row_pane_ParamLimits

0x7c6f,	// (0x0001dad7) cell_ai5_widget_list_row_pane

0x7c86,	// (0x0001daee) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7c86,	// (0x0001daee) cell_ai5_widget_list_row_pane_g1

0x7c93,	// (0x0001dafb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7c93,	// (0x0001dafb) cell_ai5_widget_list_row_pane_t1

0x7cc1,	// (0x0001db29) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7cc1,	// (0x0001db29) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfece,	// (0x00025d36) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfece,	// (0x00025d36) cell_ai5_widget_list_row_pane_t

0xc320,	// (0x00022188) main_fep_vtchi_ss_pane

0x7d05,	// (0x0001db6d) popup_fep_char_pre_window

0x7d0d,	// (0x0001db75) popup_fep_ituss_window

0xc27d,	// (0x000220e5) popup_fep_vkbss_window

0xc28a,	// (0x000220f2) grid_vkbss_keypad_pane_ParamLimits

0xc28a,	// (0x000220f2) grid_vkbss_keypad_pane

0x7d5e,	// (0x0001dbc6) ituss_keypad_pane

0x7d77,	// (0x0001dbdf) aid_vkbss_key_offset_ParamLimits

0x7d77,	// (0x0001dbdf) aid_vkbss_key_offset

0xc29a,	// (0x00022102) cell_vkbss_key_pane_ParamLimits

0xc29a,	// (0x00022102) cell_vkbss_key_pane

0xe5b9,	// (0x00024421) bg_cell_vkbss_key_g1_ParamLimits

0xe5b9,	// (0x00024421) bg_cell_vkbss_key_g1

0xc2b0,	// (0x00022118) cell_vkbss_key_3p_pane_ParamLimits

0xc2b0,	// (0x00022118) cell_vkbss_key_3p_pane

0xc2ca,	// (0x00022132) cell_vkbss_key_g1_ParamLimits

0xc2ca,	// (0x00022132) cell_vkbss_key_g1

0xc2e4,	// (0x0002214c) cell_vkbss_key_t1_ParamLimits

0xc2e4,	// (0x0002214c) cell_vkbss_key_t1

0x7dec,	// (0x0001dc54) cell_ituss_key_pane_ParamLimits

0x7dec,	// (0x0001dc54) cell_ituss_key_pane

0x7dfd,	// (0x0001dc65) bg_cell_ituss_key_g1_ParamLimits

0x7dfd,	// (0x0001dc65) bg_cell_ituss_key_g1

0x7e09,	// (0x0001dc71) cell_ituss_key_pane_g1_ParamLimits

0x7e09,	// (0x0001dc71) cell_ituss_key_pane_g1

0x7e1d,	// (0x0001dc85) cell_ituss_key_pane_g2_ParamLimits

0x7e1d,	// (0x0001dc85) cell_ituss_key_pane_g2

0x0002,

0xfed5,	// (0x00025d3d) cell_ituss_key_pane_g_ParamLimits

0xfed5,	// (0x00025d3d) cell_ituss_key_pane_g

0x7e57,	// (0x0001dcbf) cell_ituss_key_t1_ParamLimits

0x7e57,	// (0x0001dcbf) cell_ituss_key_t1

0x7e91,	// (0x0001dcf9) cell_ituss_key_t2_ParamLimits

0x7e91,	// (0x0001dcf9) cell_ituss_key_t2

0x7ec2,	// (0x0001dd2a) cell_ituss_key_t3_ParamLimits

0x7ec2,	// (0x0001dd2a) cell_ituss_key_t3

0x7e91,	// (0x0001dcf9) cell_ituss_key_t4_ParamLimits

0x7e91,	// (0x0001dcf9) cell_ituss_key_t4

0x0004,

0xfedc,	// (0x00025d44) cell_ituss_key_t_ParamLimits

0xfedc,	// (0x00025d44) cell_ituss_key_t

0x7f05,	// (0x0001dd6d) cell_vkbss_key_3p_pane_g1

0x7f0d,	// (0x0001dd75) cell_vkbss_key_3p_pane_g2

0x7f15,	// (0x0001dd7d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee7,	// (0x00025d4f) cell_vkbss_key_3p_pane_g

0xc320,	// (0x00022188) bg_popup_fep_char_preview_window_cp02

0x7f1d,	// (0x0001dd85) popup_fep_char_pre_window_t1

0xc046,	// (0x00021eae) main_ai5_sk_pane

0x78aa,	// (0x0001d712) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x78b6,	// (0x0001d71e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x78cb,	// (0x0001d733) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x78d7,	// (0x0001d73f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb9,	// (0x00025d21) cell_contacts_ai5_widget_pane_g_ParamLimits

0x78e3,	// (0x0001d74b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xc94b,	// (0x000227b3) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xc30f,	// (0x00022177) main_ai5_sk_pane_g1

0xdb1f,	// (0x00023987) popup_query_code_window_g1

0x7d1f,	// (0x0001db87) popup_fep_vkb_icf_pane

0x7d3c,	// (0x0001dba4) popup_fep_vtchi_icf_pane

0x7f35,	// (0x0001dd9d) bg_icf_pane

0x7f41,	// (0x0001dda9) list_vkb_icf_pane

0x7f50,	// (0x0001ddb8) bg_icf_pane_cp01

0x7f63,	// (0x0001ddcb) vtchi_icf_list_pane

0x7f73,	// (0x0001dddb) list_vkb_icf_pane_t1_ParamLimits

0x7f73,	// (0x0001dddb) list_vkb_icf_pane_t1

0x7f88,	// (0x0001ddf0) vtchi_icf_list_pane_t1_ParamLimits

0x7f88,	// (0x0001ddf0) vtchi_icf_list_pane_t1

0x7d0d,	// (0x0001db75) popup_fep_ituss_window_ParamLimits

0x7d3c,	// (0x0001dba4) popup_fep_vtchi_icf_pane_ParamLimits

0x7d5e,	// (0x0001dbc6) ituss_keypad_pane_ParamLimits

0x7d6d,	// (0x0001dbd5) ituss_sks_pane

0x7f35,	// (0x0001dd9d) bg_icf_pane_ParamLimits

0x7ce9,	// (0x0001db51) icf_edit_indi_pane_ParamLimits

0x7ce9,	// (0x0001db51) icf_edit_indi_pane

0x7f41,	// (0x0001dda9) list_vkb_icf_pane_ParamLimits

0x7f50,	// (0x0001ddb8) bg_icf_pane_cp01_ParamLimits

0x7cf8,	// (0x0001db60) icf_edit_indi_pane_cp01_ParamLimits

0x7cf8,	// (0x0001db60) icf_edit_indi_pane_cp01

0x7f6b,	// (0x0001ddd3) vtchi_query_pane

0x14f5,	// (0x0001735d) icf_edit_indi_pane_g1_ParamLimits

0x14f5,	// (0x0001735d) icf_edit_indi_pane_g1

0x8008,	// (0x0001de70) icf_edit_indi_pane_g2_ParamLimits

0x8008,	// (0x0001de70) icf_edit_indi_pane_g2

0x0001,

0xfeff,	// (0x00025d67) icf_edit_indi_pane_g_ParamLimits

0xfeff,	// (0x00025d67) icf_edit_indi_pane_g

0x8017,	// (0x0001de7f) icf_edit_indi_pane_t1

0x7f9f,	// (0x0001de07) bg_input_focus_pane_cp042

0xc88d,	// (0x000226f5) vtchi_button_pane

0x7fa8,	// (0x0001de10) vtchi_query_pane_t1

0x7fb6,	// (0x0001de1e) vtchi_query_pane_t2

0x7fc4,	// (0x0001de2c) vtchi_query_pane_t3

0x0002,

0xfeee,	// (0x00025d56) vtchi_query_pane_t

0xc320,	// (0x00022188) bg_button_pane_cp13

0x7fd2,	// (0x0001de3a) vtchi_button_pane_g1

0x7fda,	// (0x0001de42) ituss_sks_pane_g1

0x7fe4,	// (0x0001de4c) ituss_sks_pane_g2

0x0001,

0xfef5,	// (0x00025d5d) ituss_sks_pane_g

0x7fec,	// (0x0001de54) ituss_sks_pane_t1

0x7ffa,	// (0x0001de62) ituss_sks_pane_t2

0x0001,

0xfefa,	// (0x00025d62) ituss_sks_pane_t

0xf1c9,	// (0x00025031) indicator_nsta_pane_cp_g1

0xf1d1,	// (0x00025039) indicator_nsta_pane_cp_g2

0xf1d9,	// (0x00025041) indicator_nsta_pane_cp_g3

0xf1c9,	// (0x00025031) indicator_nsta_pane_cp_g4

0xf1d1,	// (0x00025039) indicator_nsta_pane_cp_g5

0xf1d9,	// (0x00025041) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x00025912) indicator_nsta_pane_cp_g

0xbe4d,	// (0x00021cb5) cell_graphic2_pane_t2_ParamLimits

0xbe4d,	// (0x00021cb5) cell_graphic2_pane_t2

0x0001,

0xfdb0,	// (0x00025c18) cell_graphic2_pane_t_ParamLimits

0xfdb0,	// (0x00025c18) cell_graphic2_pane_t

0xbe84,	// (0x00021cec) cell_graphic2_control_pane_t1

0x98a7,	// (0x0001f70f) signal_pane_g3_ParamLimits

0x98a7,	// (0x0001f70f) signal_pane_g3

0x98bb,	// (0x0001f723) signal_pane_g4_ParamLimits

0x98bb,	// (0x0001f723) signal_pane_g4

0x7cd3,	// (0x0001db3b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7cd3,	// (0x0001db3b) cell_ai5_widget_list_row_pane_t3

0x7e45,	// (0x0001dcad) cell_ituss_key_pane_t1_ParamLimits

0x7e45,	// (0x0001dcad) cell_ituss_key_pane_t1

0xd860,	// (0x000236c8) form_field_data_wide_pane_vc_t2_ParamLimits

0xd860,	// (0x000236c8) form_field_data_wide_pane_vc_t2

0xd872,	// (0x000236da) form_field_data_wide_pane_vc_t3_ParamLimits

0xd872,	// (0x000236da) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x00025665) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x00025665) form_field_data_wide_pane_vc_t

0xef0d,	// (0x00024d75) form_field_slider_wide_pane_vc_t3_ParamLimits

0xef0d,	// (0x00024d75) form_field_slider_wide_pane_vc_t3

0xefdb,	// (0x00024e43) form_field_popup_wide_pane_vc_t2_ParamLimits

0xefdb,	// (0x00024e43) form_field_popup_wide_pane_vc_t2

0xeff0,	// (0x00024e58) form_field_popup_wide_pane_vc_t3_ParamLimits

0xeff0,	// (0x00024e58) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x00025901) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x00025901) form_field_popup_wide_pane_vc_t

0xc0a2,	// (0x00021f0a) aid_fshwr2_btn_pane_ParamLimits

0xc0b3,	// (0x00021f1b) aid_fshwr2_syb_pane_ParamLimits

0xc0c4,	// (0x00021f2c) aid_fshwr2_txt_pane_ParamLimits

0xc94b,	// (0x000227b3) fshwr2_bg_pane_ParamLimits

0xc0d0,	// (0x00021f38) fshwr2_func_candi_pane_ParamLimits

0xc0ea,	// (0x00021f52) fshwr2_hwr_syb_pane_ParamLimits

0xc0ff,	// (0x00021f67) fshwr2_icf_pane_ParamLimits

0x44e5,	// (0x0001a34d) list_double_graphic_pane_vc_g4_ParamLimits

0x44e5,	// (0x0001a34d) list_double_graphic_pane_vc_g4

0x7e39,	// (0x0001dca1) cell_ituss_key_pane_g3_ParamLimits

0x7e39,	// (0x0001dca1) cell_ituss_key_pane_g3

0x7ef3,	// (0x0001dd5b) cell_ituss_key_t5_ParamLimits

0x7ef3,	// (0x0001dd5b) cell_ituss_key_t5

0xc27d,	// (0x000220e5) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Small

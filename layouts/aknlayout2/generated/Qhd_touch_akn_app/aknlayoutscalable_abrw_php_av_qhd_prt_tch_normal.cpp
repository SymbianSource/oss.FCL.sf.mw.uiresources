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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0000abd9 };

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
0x6cb9,	// (0x00011892) Screen

0x6ccd,	// (0x000118a6) application_window_ParamLimits

0x6ccd,	// (0x000118a6) application_window

0x6ce7,	// (0x000118c0) screen_g1

0x499a,	// (0x0000f573) area_bottom_pane_ParamLimits

0x499a,	// (0x0000f573) area_bottom_pane

0x4a5a,	// (0x0000f633) area_top_pane_ParamLimits

0x4a5a,	// (0x0000f633) area_top_pane

0x4af8,	// (0x0000f6d1) main_pane_ParamLimits

0x4af8,	// (0x0000f6d1) main_pane

0x6cf1,	// (0x000118ca) misc_graphics

0x8e48,	// (0x00013a21) battery_pane_ParamLimits

0x8e48,	// (0x00013a21) battery_pane

0x9c40,	// (0x00014819) bg_status_flat_pane_g8

0x9c48,	// (0x00014821) bg_status_flat_pane_g9

0x8f0a,	// (0x00013ae3) context_pane_ParamLimits

0x8f0a,	// (0x00013ae3) context_pane

0x9020,	// (0x00013bf9) navi_pane_ParamLimits

0x9020,	// (0x00013bf9) navi_pane

0x90a4,	// (0x00013c7d) signal_pane_ParamLimits

0x90a4,	// (0x00013c7d) signal_pane

0x0008,

0xf87a,	// (0x0001a453) bg_status_flat_pane_g

0x9111,	// (0x00013cea) status_pane_g1_ParamLimits

0x9111,	// (0x00013cea) status_pane_g1

0x9125,	// (0x00013cfe) status_pane_g2_ParamLimits

0x9125,	// (0x00013cfe) status_pane_g2

0x9131,	// (0x00013d0a) status_pane_g3_ParamLimits

0x9131,	// (0x00013d0a) status_pane_g3

0x0004,

0xf7a1,	// (0x0001a37a) status_pane_g_ParamLimits

0xf7a1,	// (0x0001a37a) status_pane_g

0x9165,	// (0x00013d3e) title_pane_ParamLimits

0x9165,	// (0x00013d3e) title_pane

0x91a2,	// (0x00013d7b) uni_indicator_pane_ParamLimits

0x91a2,	// (0x00013d7b) uni_indicator_pane

0x8d5c,	// (0x00013935) bg_list_pane_ParamLimits

0x8d5c,	// (0x00013935) bg_list_pane

0x8d7c,	// (0x00013955) find_pane

0x8d84,	// (0x0001395d) listscroll_app_pane_ParamLimits

0x8d84,	// (0x0001395d) listscroll_app_pane

0x8d90,	// (0x00013969) listscroll_form_pane

0x53cb,	// (0x0000ffa4) listscroll_gen_pane_ParamLimits

0x53cb,	// (0x0000ffa4) listscroll_gen_pane

0x53df,	// (0x0000ffb8) listscroll_set_pane

0x7f30,	// (0x00012b09) main_idle_act_pane

0x8a62,	// (0x0001363b) main_idle_trad_pane

0x8a62,	// (0x0001363b) main_list_empty_pane

0x8daa,	// (0x00013983) main_midp_pane

0x8db6,	// (0x0001398f) main_pane_g1_ParamLimits

0x8db6,	// (0x0001398f) main_pane_g1

0x53f5,	// (0x0000ffce) popup_ai_message_window_ParamLimits

0x53f5,	// (0x0000ffce) popup_ai_message_window

0x549b,	// (0x00010074) popup_fep_china_uni_window_ParamLimits

0x549b,	// (0x00010074) popup_fep_china_uni_window

0x54f7,	// (0x000100d0) popup_fep_japan_candidate_window_ParamLimits

0x54f7,	// (0x000100d0) popup_fep_japan_candidate_window

0x5517,	// (0x000100f0) popup_fep_japan_predictive_window_ParamLimits

0x5517,	// (0x000100f0) popup_fep_japan_predictive_window

0x5547,	// (0x00010120) popup_find_window

0x5554,	// (0x0001012d) popup_grid_graphic_window_ParamLimits

0x5554,	// (0x0001012d) popup_grid_graphic_window

0x557c,	// (0x00010155) popup_large_graphic_colour_window

0x55a2,	// (0x0001017b) popup_menu_window_ParamLimits

0x55a2,	// (0x0001017b) popup_menu_window

0x575a,	// (0x00010333) popup_note_image_window

0x5746,	// (0x0001031f) popup_note_wait_window_ParamLimits

0x5746,	// (0x0001031f) popup_note_wait_window

0x5746,	// (0x0001031f) popup_note_window_ParamLimits

0x5746,	// (0x0001031f) popup_note_window

0x57b0,	// (0x00010389) popup_query_code_window_ParamLimits

0x57b0,	// (0x00010389) popup_query_code_window

0x57c4,	// (0x0001039d) popup_query_data_code_window_ParamLimits

0x57c4,	// (0x0001039d) popup_query_data_code_window

0x57e1,	// (0x000103ba) popup_query_data_window_ParamLimits

0x57e1,	// (0x000103ba) popup_query_data_window

0x57fd,	// (0x000103d6) popup_query_sat_info_window_ParamLimits

0x57fd,	// (0x000103d6) popup_query_sat_info_window

0x5836,	// (0x0001040f) popup_snote_single_graphic_window_ParamLimits

0x5836,	// (0x0001040f) popup_snote_single_graphic_window

0x5836,	// (0x0001040f) popup_snote_single_text_window_ParamLimits

0x5836,	// (0x0001040f) popup_snote_single_text_window

0x584b,	// (0x00010424) popup_sub_window_general

0x597b,	// (0x00010554) popup_window_general_ParamLimits

0x597b,	// (0x00010554) popup_window_general

0x8dcc,	// (0x000139a5) power_save_pane

0x525f,	// (0x0000fe38) control_pane_g1_ParamLimits

0x525f,	// (0x0000fe38) control_pane_g1

0x5286,	// (0x0000fe5f) control_pane_g2_ParamLimits

0x5286,	// (0x0000fe5f) control_pane_g2

0x8d1f,	// (0x000138f8) control_pane_g3_ParamLimits

0x8d1f,	// (0x000138f8) control_pane_g3

0x0007,

0xf789,	// (0x0001a362) control_pane_g_ParamLimits

0xf789,	// (0x0001a362) control_pane_g

0x52d0,	// (0x0000fea9) control_pane_t1_ParamLimits

0x52d0,	// (0x0000fea9) control_pane_t1

0x531c,	// (0x0000fef5) control_pane_t2_ParamLimits

0x531c,	// (0x0000fef5) control_pane_t2

0x0002,

0xf79a,	// (0x0001a373) control_pane_t_ParamLimits

0xf79a,	// (0x0001a373) control_pane_t

0x8c40,	// (0x00013819) navi_navi_volume_pane_cp1

0x8c49,	// (0x00013822) status_small_icon_pane

0x8c51,	// (0x0001382a) status_small_pane_g1_ParamLimits

0x8c51,	// (0x0001382a) status_small_pane_g1

0x8c85,	// (0x0001385e) status_small_pane_g2_ParamLimits

0x8c85,	// (0x0001385e) status_small_pane_g2

0x8c91,	// (0x0001386a) status_small_pane_g3_ParamLimits

0x8c91,	// (0x0001386a) status_small_pane_g3

0x8c9d,	// (0x00013876) status_small_pane_g4_ParamLimits

0x8c9d,	// (0x00013876) status_small_pane_g4

0x8ca9,	// (0x00013882) status_small_pane_g5_ParamLimits

0x8ca9,	// (0x00013882) status_small_pane_g5

0x8cb8,	// (0x00013891) status_small_pane_g6_ParamLimits

0x8cb8,	// (0x00013891) status_small_pane_g6

0x0007,

0xf778,	// (0x0001a351) status_small_pane_g_ParamLimits

0xf778,	// (0x0001a351) status_small_pane_g

0x8ce8,	// (0x000138c1) status_small_pane_t1

0x8d0b,	// (0x000138e4) status_small_wait_pane_ParamLimits

0x8d0b,	// (0x000138e4) status_small_wait_pane

0x8450,	// (0x00013029) aid_levels_signal_ParamLimits

0x8450,	// (0x00013029) aid_levels_signal

0x8462,	// (0x0001303b) signal_pane_g1_ParamLimits

0x8462,	// (0x0001303b) signal_pane_g1

0x8477,	// (0x00013050) signal_pane_g2_ParamLimits

0x8477,	// (0x00013050) signal_pane_g2

0x0003,

0xf709,	// (0x0001a2e2) signal_pane_g_ParamLimits

0xf709,	// (0x0001a2e2) signal_pane_g

0x84b2,	// (0x0001308b) context_pane_g1

0x6cfb,	// (0x000118d4) title_pane_g1

0x6d31,	// (0x0001190a) title_pane_t1

0x6d99,	// (0x00011972) title_pane_t2

0x6dbf,	// (0x00011998) title_pane_t3

0x0002,

0xf55d,	// (0x0001a136) title_pane_t

0x91ba,	// (0x00013d93) aid_levels_battery_ParamLimits

0x91ba,	// (0x00013d93) aid_levels_battery

0x91ce,	// (0x00013da7) battery_pane_g1_ParamLimits

0x91ce,	// (0x00013da7) battery_pane_g1

0x91e4,	// (0x00013dbd) battery_pane_g2_ParamLimits

0x91e4,	// (0x00013dbd) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001a385) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001a385) battery_pane_g

0xa576,	// (0x0001514f) uni_indicator_pane_g1

0xa58d,	// (0x00015166) uni_indicator_pane_g2

0xa5a0,	// (0x00015179) uni_indicator_pane_g3

0x0005,

0xf922,	// (0x0001a4fb) uni_indicator_pane_g

0x88d4,	// (0x000134ad) navi_icon_pane_ParamLimits

0x88d4,	// (0x000134ad) navi_icon_pane

0x881d,	// (0x000133f6) navi_midp_pane

0x88f0,	// (0x000134c9) navi_navi_pane

0x88fa,	// (0x000134d3) navi_text_pane_ParamLimits

0x88fa,	// (0x000134d3) navi_text_pane

0x6ce7,	// (0x000118c0) status_small_wait_pane_g1

0x7208,	// (0x00011de1) status_small_wait_pane_g2

0x0001,

0xf91d,	// (0x0001a4f6) status_small_wait_pane_g

0xa29b,	// (0x00014e74) navi_navi_icon_text_pane

0xa2a3,	// (0x00014e7c) navi_navi_pane_g1_ParamLimits

0xa2a3,	// (0x00014e7c) navi_navi_pane_g1

0xa2b5,	// (0x00014e8e) navi_navi_pane_g2_ParamLimits

0xa2b5,	// (0x00014e8e) navi_navi_pane_g2

0x0001,

0xf8eb,	// (0x0001a4c4) navi_navi_pane_g_ParamLimits

0xf8eb,	// (0x0001a4c4) navi_navi_pane_g

0xa2c7,	// (0x00014ea0) navi_navi_tabs_pane

0xa2d0,	// (0x00014ea9) navi_navi_text_pane

0xa29b,	// (0x00014e74) navi_navi_volume_pane

0xa277,	// (0x00014e50) navi_text_pane_t1

0xa26b,	// (0x00014e44) navi_icon_pane_g1

0xa1be,	// (0x00014d97) navi_navi_text_pane_t1

0x5c93,	// (0x0001086c) navi_navi_volume_pane_g1

0x5c9b,	// (0x00010874) volume_small_pane

0xa124,	// (0x00014cfd) navi_navi_icon_text_pane_g1

0xa12c,	// (0x00014d05) navi_navi_icon_text_pane_t1

0x88f0,	// (0x000134c9) navi_tabs_2_long_pane

0x88f0,	// (0x000134c9) navi_tabs_2_pane

0x88f0,	// (0x000134c9) navi_tabs_3_long_pane

0x88f0,	// (0x000134c9) navi_tabs_3_pane

0x88f0,	// (0x000134c9) navi_tabs_4_pane

0x5c73,	// (0x0001084c) tabs_2_active_pane_ParamLimits

0x5c73,	// (0x0001084c) tabs_2_active_pane

0x5c83,	// (0x0001085c) tabs_2_passive_pane_ParamLimits

0x5c83,	// (0x0001085c) tabs_2_passive_pane

0x5c41,	// (0x0001081a) tabs_3_active_pane_ParamLimits

0x5c41,	// (0x0001081a) tabs_3_active_pane

0x5c51,	// (0x0001082a) tabs_3_passive_pane_ParamLimits

0x5c51,	// (0x0001082a) tabs_3_passive_pane

0x5c62,	// (0x0001083b) tabs_3_passive_pane_cp_ParamLimits

0x5c62,	// (0x0001083b) tabs_3_passive_pane_cp

0x5bfd,	// (0x000107d6) tabs_4_active_pane_ParamLimits

0x5bfd,	// (0x000107d6) tabs_4_active_pane

0x5c0e,	// (0x000107e7) tabs_4_passive_pane_ParamLimits

0x5c0e,	// (0x000107e7) tabs_4_passive_pane

0x5c1f,	// (0x000107f8) tabs_4_passive_pane_cp_ParamLimits

0x5c1f,	// (0x000107f8) tabs_4_passive_pane_cp

0x5c30,	// (0x00010809) tabs_4_passive_pane_cp2_ParamLimits

0x5c30,	// (0x00010809) tabs_4_passive_pane_cp2

0x5bd9,	// (0x000107b2) tabs_2_long_active_pane_ParamLimits

0x5bd9,	// (0x000107b2) tabs_2_long_active_pane

0x5beb,	// (0x000107c4) tabs_2_long_passive_pane_ParamLimits

0x5beb,	// (0x000107c4) tabs_2_long_passive_pane

0x5b9a,	// (0x00010773) tabs_3_long_active_pane_ParamLimits

0x5b9a,	// (0x00010773) tabs_3_long_active_pane

0x5bad,	// (0x00010786) tabs_3_long_passive_pane_ParamLimits

0x5bad,	// (0x00010786) tabs_3_long_passive_pane

0x5bc6,	// (0x0001079f) tabs_3_long_passive_pane_cp_ParamLimits

0x5bc6,	// (0x0001079f) tabs_3_long_passive_pane_cp

0x5b40,	// (0x00010719) volume_small_pane_g1

0x5b49,	// (0x00010722) volume_small_pane_g2

0x5b52,	// (0x0001072b) volume_small_pane_g3

0x5b5b,	// (0x00010734) volume_small_pane_g4

0x5b64,	// (0x0001073d) volume_small_pane_g5

0x5b6d,	// (0x00010746) volume_small_pane_g6

0x5b76,	// (0x0001074f) volume_small_pane_g7

0x5b7f,	// (0x00010758) volume_small_pane_g8

0x5b88,	// (0x00010761) volume_small_pane_g9

0x5b91,	// (0x0001076a) volume_small_pane_g10

0x0009,

0xf8b7,	// (0x0001a490) volume_small_pane_g

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp2_ParamLimits

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp2

0x6ddf,	// (0x000119b8) tabs_3_active_pane_g1

0x6de7,	// (0x000119c0) tabs_3_active_pane_t1

0x6dd1,	// (0x000119aa) bg_passive_tab_pane_cp2_ParamLimits

0x6dd1,	// (0x000119aa) bg_passive_tab_pane_cp2

0x6ddf,	// (0x000119b8) tabs_3_passive_pane_g1

0x6de7,	// (0x000119c0) tabs_3_passive_pane_t1

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp3_ParamLimits

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp3

0x6df9,	// (0x000119d2) tabs_4_active_pane_g1

0x6e01,	// (0x000119da) tabs_4_active_pane_t1

0x6dd1,	// (0x000119aa) bg_passive_tab_pane_cp3_ParamLimits

0x6dd1,	// (0x000119aa) bg_passive_tab_pane_cp3

0x6df9,	// (0x000119d2) tabs_4_1_passive_pane_g1

0x6e01,	// (0x000119da) tabs_4_1_passive_pane_t1

0x8daa,	// (0x00013983) list_highlight_pane_cp2

0xa80e,	// (0x000153e7) list_set_pane_ParamLimits

0xa80e,	// (0x000153e7) list_set_pane

0xa8f6,	// (0x000154cf) main_pane_set_t1_ParamLimits

0xa8f6,	// (0x000154cf) main_pane_set_t1

0xa916,	// (0x000154ef) main_pane_set_t2_ParamLimits

0xa916,	// (0x000154ef) main_pane_set_t2

0xa92a,	// (0x00015503) main_pane_set_t3_ParamLimits

0xa92a,	// (0x00015503) main_pane_set_t3

0xa93c,	// (0x00015515) main_pane_set_t4_ParamLimits

0xa93c,	// (0x00015515) main_pane_set_t4

0x0003,

0xf987,	// (0x0001a560) main_pane_set_t_ParamLimits

0xf987,	// (0x0001a560) main_pane_set_t

0xa94e,	// (0x00015527) setting_code_pane

0xa95a,	// (0x00015533) setting_slider_graphic_pane

0xa95a,	// (0x00015533) setting_slider_pane

0xa95a,	// (0x00015533) setting_text_pane

0xa95a,	// (0x00015533) setting_volume_pane

0x4d47,	// (0x0000f920) volume_set_pane

0x6dd1,	// (0x000119aa) bg_set_opt_pane_cp

0x4d4f,	// (0x0000f928) setting_slider_pane_t1

0x4d68,	// (0x0000f941) setting_slider_pane_t2

0x4d82,	// (0x0000f95b) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001a13d) setting_slider_pane_t

0x4d9a,	// (0x0000f973) slider_set_pane

0x6cf1,	// (0x000118ca) bg_set_opt_pane_cp2

0x6e13,	// (0x000119ec) setting_slider_graphic_pane_g1

0x4db0,	// (0x0000f989) setting_slider_graphic_pane_t1

0x4dc0,	// (0x0000f999) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001a144) setting_slider_graphic_pane_t

0x4dd0,	// (0x0000f9a9) slider_set_pane_cp

0x6cf1,	// (0x000118ca) input_focus_pane_cp1

0xa7cd,	// (0x000153a6) list_set_text_pane

0x6ce7,	// (0x000118c0) setting_text_pane_g1

0x6cf1,	// (0x000118ca) input_focus_pane_cp2

0x6ce7,	// (0x000118c0) setting_code_pane_g1

0x6e1c,	// (0x000119f5) setting_code_pane_t1

0x6e2a,	// (0x00011a03) set_text_pane_t1_ParamLimits

0x6e2a,	// (0x00011a03) set_text_pane_t1

0x7cfb,	// (0x000128d4) set_opt_bg_pane_g1

0x7d03,	// (0x000128dc) set_opt_bg_pane_g2

0xa7a7,	// (0x00015380) set_opt_bg_pane_g3

0x7d13,	// (0x000128ec) set_opt_bg_pane_g4

0x7d1b,	// (0x000128f4) set_opt_bg_pane_g5

0x7d23,	// (0x000128fc) set_opt_bg_pane_g6

0xa7b1,	// (0x0001538a) set_opt_bg_pane_g7

0xa7b9,	// (0x00015392) set_opt_bg_pane_g8

0xa7c3,	// (0x0001539c) set_opt_bg_pane_g9

0x0008,

0xf974,	// (0x0001a54d) set_opt_bg_pane_g

0xa79a,	// (0x00015373) slider_set_pane_g1

0x5d08,	// (0x000108e1) slider_set_pane_g2

0x0006,

0xf965,	// (0x0001a53e) slider_set_pane_g

0x5ca4,	// (0x0001087d) volume_set_pane_g1

0x5cac,	// (0x00010885) volume_set_pane_g2

0x5cb4,	// (0x0001088d) volume_set_pane_g3

0x5cbc,	// (0x00010895) volume_set_pane_g4

0x5cc4,	// (0x0001089d) volume_set_pane_g5

0x5ccc,	// (0x000108a5) volume_set_pane_g6

0x5cd4,	// (0x000108ad) volume_set_pane_g7

0x5cdc,	// (0x000108b5) volume_set_pane_g8

0x5ce4,	// (0x000108bd) volume_set_pane_g9

0x5cec,	// (0x000108c5) volume_set_pane_g10

0x0009,

0xf93d,	// (0x0001a516) volume_set_pane_g

0x6e44,	// (0x00011a1d) indicator_pane_ParamLimits

0x6e44,	// (0x00011a1d) indicator_pane

0x6e50,	// (0x00011a29) main_idle_pane_g2_ParamLimits

0x6e50,	// (0x00011a29) main_idle_pane_g2

0x6e78,	// (0x00011a51) main_pane_idle_g1_ParamLimits

0x6e78,	// (0x00011a51) main_pane_idle_g1

0x6e85,	// (0x00011a5e) popup_clock_digital_analogue_window_ParamLimits

0x6e85,	// (0x00011a5e) popup_clock_digital_analogue_window

0x6e9c,	// (0x00011a75) soft_indicator_pane_ParamLimits

0x6e9c,	// (0x00011a75) soft_indicator_pane

0x6ea8,	// (0x00011a81) wallpaper_pane_ParamLimits

0x6ea8,	// (0x00011a81) wallpaper_pane

0x6ce7,	// (0x000118c0) wallpaper_pane_g1

0x6ebc,	// (0x00011a95) indicator_pane_g1_ParamLimits

0x6ebc,	// (0x00011a95) indicator_pane_g1

0xacb2,	// (0x0001588b) navi_navi_icon_text_pane_srt_g1

0x6ed7,	// (0x00011ab0) soft_indicator_pane_t1

0x6ef1,	// (0x00011aca) aid_ps_area_pane

0x6f02,	// (0x00011adb) aid_ps_clock_pane

0x6f10,	// (0x00011ae9) aid_ps_indicator_pane

0x6f1c,	// (0x00011af5) indicator_ps_pane_ParamLimits

0x6f1c,	// (0x00011af5) indicator_ps_pane

0x6f2b,	// (0x00011b04) power_save_pane_g1_ParamLimits

0x6f2b,	// (0x00011b04) power_save_pane_g1

0x6f37,	// (0x00011b10) power_save_pane_g2_ParamLimits

0x6f37,	// (0x00011b10) power_save_pane_g2

0x494e,	// (0x0000f527) aid_navinavi_width_pane

0x6ef1,	// (0x00011aca) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001a149) power_save_pane_g_ParamLimits

0xf570,	// (0x0001a149) power_save_pane_g

0x6f45,	// (0x00011b1e) power_save_pane_t1_ParamLimits

0x6f45,	// (0x00011b1e) power_save_pane_t1

0x6f02,	// (0x00011adb) aid_ps_clock_pane_ParamLimits

0x6f10,	// (0x00011ae9) aid_ps_indicator_pane_ParamLimits

0x6f57,	// (0x00011b30) power_save_pane_t4_ParamLimits

0x6f57,	// (0x00011b30) power_save_pane_t4

0x0001,

0xf575,	// (0x0001a14e) power_save_pane_t_ParamLimits

0xf575,	// (0x0001a14e) power_save_pane_t

0x6f81,	// (0x00011b5a) power_save_t3_ParamLimits

0x6f81,	// (0x00011b5a) power_save_t3

0x6f6c,	// (0x00011b45) power_save_t2_ParamLimits

0x6f6c,	// (0x00011b45) power_save_t2

0x6f96,	// (0x00011b6f) indicator_ps_pane_g1

0x6f9f,	// (0x00011b78) ai_gene_pane_ParamLimits

0x6f9f,	// (0x00011b78) ai_gene_pane

0x6fab,	// (0x00011b84) ai_links_pane_ParamLimits

0x6fab,	// (0x00011b84) ai_links_pane

0x6fb7,	// (0x00011b90) indicator_pane_cp1_ParamLimits

0x6fb7,	// (0x00011b90) indicator_pane_cp1

0x6fc3,	// (0x00011b9c) main_pane_idle_g1_cp_ParamLimits

0x6fc3,	// (0x00011b9c) main_pane_idle_g1_cp

0x6fcf,	// (0x00011ba8) popup_ai_links_title_window

0x6fd8,	// (0x00011bb1) soft_indicator_pane_cp1_ParamLimits

0x6fd8,	// (0x00011bb1) soft_indicator_pane_cp1

0xa564,	// (0x0001513d) ai_links_pane_g1

0xa56d,	// (0x00015146) grid_ai_links_pane

0xa547,	// (0x00015120) ai_gene_pane_1

0xa552,	// (0x0001512b) ai_gene_pane_2

0xa55b,	// (0x00015134) list_highlight_pane_cp4

0xa52b,	// (0x00015104) cell_ai_link_pane_ParamLimits

0xa52b,	// (0x00015104) cell_ai_link_pane

0xa523,	// (0x000150fc) cell_ai_link_pane_g1

0x7208,	// (0x00011de1) cell_ai_link_pane_g2

0x0001,

0xf918,	// (0x0001a4f1) cell_ai_link_pane_g

0x6cf1,	// (0x000118ca) grid_highlight_cp2

0x6cf1,	// (0x000118ca) bg_popup_sub_pane_cp1

0x6ff2,	// (0x00011bcb) popup_ai_links_title_window_t1

0xa471,	// (0x0001504a) ai_gene_pane_1_g1_ParamLimits

0xa471,	// (0x0001504a) ai_gene_pane_1_g1

0xa47d,	// (0x00015056) ai_gene_pane_1_g2_ParamLimits

0xa47d,	// (0x00015056) ai_gene_pane_1_g2

0x0001,

0xf90e,	// (0x0001a4e7) ai_gene_pane_1_g_ParamLimits

0xf90e,	// (0x0001a4e7) ai_gene_pane_1_g

0xa48a,	// (0x00015063) ai_gene_pane_1_t1_ParamLimits

0xa48a,	// (0x00015063) ai_gene_pane_1_t1

0xa4be,	// (0x00015097) grid_ai_soft_ind_pane

0xa45c,	// (0x00015035) ai_gene_pane_2_t1_ParamLimits

0xa45c,	// (0x00015035) ai_gene_pane_2_t1

0x7001,	// (0x00011bda) main_pane_empty_t1_ParamLimits

0x7001,	// (0x00011bda) main_pane_empty_t1

0x7019,	// (0x00011bf2) main_pane_empty_t2_ParamLimits

0x7019,	// (0x00011bf2) main_pane_empty_t2

0x702e,	// (0x00011c07) main_pane_empty_t3_ParamLimits

0x702e,	// (0x00011c07) main_pane_empty_t3

0x7040,	// (0x00011c19) main_pane_empty_t4_ParamLimits

0x7040,	// (0x00011c19) main_pane_empty_t4

0x7052,	// (0x00011c2b) main_pane_empty_t5_ParamLimits

0x7052,	// (0x00011c2b) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001a153) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001a153) main_pane_empty_t

0x7df8,	// (0x000129d1) bg_popup_window_pane_ParamLimits

0x7df8,	// (0x000129d1) bg_popup_window_pane

0xa1cc,	// (0x00014da5) find_popup_pane_cp2_ParamLimits

0xa1cc,	// (0x00014da5) find_popup_pane_cp2

0xa1d8,	// (0x00014db1) heading_pane_ParamLimits

0xa1d8,	// (0x00014db1) heading_pane

0x6cf1,	// (0x000118ca) bg_popup_sub_pane

0xa146,	// (0x00014d1f) bg_popup_window_pane_g1_ParamLimits

0xa146,	// (0x00014d1f) bg_popup_window_pane_g1

0xa152,	// (0x00014d2b) bg_popup_window_pane_g2_ParamLimits

0xa152,	// (0x00014d2b) bg_popup_window_pane_g2

0xa15e,	// (0x00014d37) bg_popup_window_pane_g3_ParamLimits

0xa15e,	// (0x00014d37) bg_popup_window_pane_g3

0xa16a,	// (0x00014d43) bg_popup_window_pane_g4_ParamLimits

0xa16a,	// (0x00014d43) bg_popup_window_pane_g4

0xa176,	// (0x00014d4f) bg_popup_window_pane_g5_ParamLimits

0xa176,	// (0x00014d4f) bg_popup_window_pane_g5

0xa182,	// (0x00014d5b) bg_popup_window_pane_g6_ParamLimits

0xa182,	// (0x00014d5b) bg_popup_window_pane_g6

0xa18e,	// (0x00014d67) bg_popup_window_pane_g7_ParamLimits

0xa18e,	// (0x00014d67) bg_popup_window_pane_g7

0xa19a,	// (0x00014d73) bg_popup_window_pane_g8_ParamLimits

0xa19a,	// (0x00014d73) bg_popup_window_pane_g8

0xa1a6,	// (0x00014d7f) bg_popup_window_pane_g9_ParamLimits

0xa1a6,	// (0x00014d7f) bg_popup_window_pane_g9

0xa1b2,	// (0x00014d8b) bg_popup_window_pane_g10_ParamLimits

0xa1b2,	// (0x00014d8b) bg_popup_window_pane_g10

0x0009,

0xf8d6,	// (0x0001a4af) bg_popup_window_pane_g_ParamLimits

0xf8d6,	// (0x0001a4af) bg_popup_window_pane_g

0xa0db,	// (0x00014cb4) bg_popup_heading_pane_ParamLimits

0xa0db,	// (0x00014cb4) bg_popup_heading_pane

0x5d90,	// (0x00010969) tabs_4_passive_pane_cp_srt_ParamLimits

0x5d90,	// (0x00010969) tabs_4_passive_pane_cp_srt

0x5da2,	// (0x0001097b) tabs_4_passive_pane_srt_ParamLimits

0xa0ef,	// (0x00014cc8) heading_pane_g2

0x5da2,	// (0x0001097b) tabs_4_passive_pane_srt

0x8daa,	// (0x00013983) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8daa,	// (0x00013983) bg_passive_tab_pane_cp3_srt

0xa0f7,	// (0x00014cd0) heading_pane_t1_ParamLimits

0xa0f7,	// (0x00014cd0) heading_pane_t1

0xa10e,	// (0x00014ce7) heading_pane_t2_ParamLimits

0xa10e,	// (0x00014ce7) heading_pane_t2

0x0001,

0xf8d1,	// (0x0001a4aa) heading_pane_t_ParamLimits

0xf8d1,	// (0x0001a4aa) heading_pane_t

0x9c08,	// (0x000147e1) bg_popup_heading_pane_g1

0x9cb7,	// (0x00014890) bg_popup_heading_pane_g2

0x9cc1,	// (0x0001489a) bg_popup_heading_pane_g3

0x9ccb,	// (0x000148a4) bg_popup_heading_pane_g4

0x9cd5,	// (0x000148ae) bg_popup_heading_pane_g5

0x9cdf,	// (0x000148b8) bg_popup_heading_pane_g6

0x9ce7,	// (0x000148c0) bg_popup_heading_pane_g7

0x9cef,	// (0x000148c8) bg_popup_heading_pane_g8

0x9cf9,	// (0x000148d2) bg_popup_heading_pane_g9

0x0008,

0xf88d,	// (0x0001a466) bg_popup_heading_pane_g

0x92ea,	// (0x00013ec3) bg_popup_sub_pane_g1

0x92fa,	// (0x00013ed3) bg_popup_sub_pane_g2

0x92f2,	// (0x00013ecb) bg_popup_sub_pane_g3

0x930a,	// (0x00013ee3) bg_popup_sub_pane_g4

0x9302,	// (0x00013edb) bg_popup_sub_pane_g5

0x9312,	// (0x00013eeb) bg_popup_sub_pane_g6

0x931a,	// (0x00013ef3) bg_popup_sub_pane_g7

0x932a,	// (0x00013f03) bg_popup_sub_pane_g8

0x9322,	// (0x00013efb) bg_popup_sub_pane_g9

0x0008,

0xf867,	// (0x0001a440) bg_popup_sub_pane_g

0x7066,	// (0x00011c3f) bg_popup_window_pane_cp5_ParamLimits

0x7066,	// (0x00011c3f) bg_popup_window_pane_cp5

0x7082,	// (0x00011c5b) popup_note_window_g1_ParamLimits

0x7082,	// (0x00011c5b) popup_note_window_g1

0x708e,	// (0x00011c67) popup_note_window_t1_ParamLimits

0x708e,	// (0x00011c67) popup_note_window_t1

0x70a4,	// (0x00011c7d) popup_note_window_t2_ParamLimits

0x70a4,	// (0x00011c7d) popup_note_window_t2

0x70ba,	// (0x00011c93) popup_note_window_t3_ParamLimits

0x70ba,	// (0x00011c93) popup_note_window_t3

0x70d0,	// (0x00011ca9) popup_note_window_t4_ParamLimits

0x70d0,	// (0x00011ca9) popup_note_window_t4

0x70f8,	// (0x00011cd1) popup_note_window_t5_ParamLimits

0x70f8,	// (0x00011cd1) popup_note_window_t5

0x0004,

0xf585,	// (0x0001a15e) popup_note_window_t_ParamLimits

0xf585,	// (0x0001a15e) popup_note_window_t

0x711c,	// (0x00011cf5) bg_popup_window_pane_cp6_ParamLimits

0x711c,	// (0x00011cf5) bg_popup_window_pane_cp6

0x9b84,	// (0x0001475d) popup_note_image_window_g1_ParamLimits

0x9b84,	// (0x0001475d) popup_note_image_window_g1

0x9b90,	// (0x00014769) popup_note_image_window_g2_ParamLimits

0x9b90,	// (0x00014769) popup_note_image_window_g2

0x0001,

0xf85b,	// (0x0001a434) popup_note_image_window_g_ParamLimits

0xf85b,	// (0x0001a434) popup_note_image_window_g

0x9ba9,	// (0x00014782) popup_note_image_window_t1_ParamLimits

0x9ba9,	// (0x00014782) popup_note_image_window_t1

0x9bc2,	// (0x0001479b) popup_note_image_window_t2_ParamLimits

0x9bc2,	// (0x0001479b) popup_note_image_window_t2

0x9bdb,	// (0x000147b4) popup_note_image_window_t3_ParamLimits

0x9bdb,	// (0x000147b4) popup_note_image_window_t3

0x0002,

0xf860,	// (0x0001a439) popup_note_image_window_t_ParamLimits

0xf860,	// (0x0001a439) popup_note_image_window_t

0x9a45,	// (0x0001461e) bg_popup_window_pane_cp7_ParamLimits

0x9a45,	// (0x0001461e) bg_popup_window_pane_cp7

0x9a75,	// (0x0001464e) popup_note_wait_window_g1_ParamLimits

0x9a75,	// (0x0001464e) popup_note_wait_window_g1

0x9a81,	// (0x0001465a) popup_note_wait_window_g2_ParamLimits

0x9a81,	// (0x0001465a) popup_note_wait_window_g2

0x0002,

0xf849,	// (0x0001a422) popup_note_wait_window_g_ParamLimits

0xf849,	// (0x0001a422) popup_note_wait_window_g

0x9a99,	// (0x00014672) popup_note_wait_window_t1_ParamLimits

0x9a99,	// (0x00014672) popup_note_wait_window_t1

0x9ac0,	// (0x00014699) popup_note_wait_window_t2_ParamLimits

0x9ac0,	// (0x00014699) popup_note_wait_window_t2

0x9add,	// (0x000146b6) popup_note_wait_window_t3_ParamLimits

0x9add,	// (0x000146b6) popup_note_wait_window_t3

0x9af0,	// (0x000146c9) popup_note_wait_window_t4_ParamLimits

0x9af0,	// (0x000146c9) popup_note_wait_window_t4

0x0004,

0xf850,	// (0x0001a429) popup_note_wait_window_t_ParamLimits

0xf850,	// (0x0001a429) popup_note_wait_window_t

0x9b15,	// (0x000146ee) wait_bar_pane_ParamLimits

0x9b15,	// (0x000146ee) wait_bar_pane

0x6cf1,	// (0x000118ca) wait_anim_pane

0x6cf1,	// (0x000118ca) wait_border_pane

0x6ce7,	// (0x000118c0) wait_anim_pane_g1

0x6ce7,	// (0x000118c0) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001a2dd) wait_anim_pane_g

0x99e9,	// (0x000145c2) wait_border_pane_g1

0x99f4,	// (0x000145cd) wait_border_pane_g2

0x99fd,	// (0x000145d6) wait_border_pane_g3

0x0002,

0xf842,	// (0x0001a41b) wait_border_pane_g

0x9848,	// (0x00014421) bg_popup_window_pane_cp16_ParamLimits

0x9848,	// (0x00014421) bg_popup_window_pane_cp16

0x9954,	// (0x0001452d) indicator_popup_pane_cp4_ParamLimits

0x9954,	// (0x0001452d) indicator_popup_pane_cp4

0x9968,	// (0x00014541) popup_query_data_window_t1_ParamLimits

0x9968,	// (0x00014541) popup_query_data_window_t1

0x997a,	// (0x00014553) popup_query_data_window_t2_ParamLimits

0x997a,	// (0x00014553) popup_query_data_window_t2

0x9993,	// (0x0001456c) popup_query_data_window_t3_ParamLimits

0x9993,	// (0x0001456c) popup_query_data_window_t3

0x0002,

0xf83b,	// (0x0001a414) popup_query_data_window_t_ParamLimits

0xf83b,	// (0x0001a414) popup_query_data_window_t

0x99ad,	// (0x00014586) query_popup_data_pane_ParamLimits

0x99ad,	// (0x00014586) query_popup_data_pane

0x99c1,	// (0x0001459a) query_popup_data_pane_cp1_ParamLimits

0x99c1,	// (0x0001459a) query_popup_data_pane_cp1

0x9848,	// (0x00014421) bg_popup_window_pane_cp10_ParamLimits

0x9848,	// (0x00014421) bg_popup_window_pane_cp10

0x987a,	// (0x00014453) indicator_popup_pane_ParamLimits

0x987a,	// (0x00014453) indicator_popup_pane

0x989c,	// (0x00014475) popup_query_code_window_t1_ParamLimits

0x989c,	// (0x00014475) popup_query_code_window_t1

0x98b6,	// (0x0001448f) popup_query_code_window_t2_ParamLimits

0x98b6,	// (0x0001448f) popup_query_code_window_t2

0x98ff,	// (0x000144d8) popup_query_code_window_t3_ParamLimits

0x98ff,	// (0x000144d8) popup_query_code_window_t3

0x0002,

0xf834,	// (0x0001a40d) popup_query_code_window_t_ParamLimits

0xf834,	// (0x0001a40d) popup_query_code_window_t

0x993a,	// (0x00014513) query_popup_pane_ParamLimits

0x993a,	// (0x00014513) query_popup_pane

0x711c,	// (0x00011cf5) bg_popup_window_pane_cp15_ParamLimits

0x711c,	// (0x00011cf5) bg_popup_window_pane_cp15

0x713a,	// (0x00011d13) indicator_popup_pane_cp1_ParamLimits

0x713a,	// (0x00011d13) indicator_popup_pane_cp1

0x714d,	// (0x00011d26) indicator_popup_pane_cp2_ParamLimits

0x714d,	// (0x00011d26) indicator_popup_pane_cp2

0x7160,	// (0x00011d39) popup_query_data_code_window_g1_ParamLimits

0x7160,	// (0x00011d39) popup_query_data_code_window_g1

0x7173,	// (0x00011d4c) popup_query_data_code_window_t1_ParamLimits

0x7173,	// (0x00011d4c) popup_query_data_code_window_t1

0x7185,	// (0x00011d5e) popup_query_data_code_window_t2_ParamLimits

0x7185,	// (0x00011d5e) popup_query_data_code_window_t2

0x7197,	// (0x00011d70) popup_query_data_code_window_t3_ParamLimits

0x7197,	// (0x00011d70) popup_query_data_code_window_t3

0x71ad,	// (0x00011d86) popup_query_data_code_window_t4_ParamLimits

0x71ad,	// (0x00011d86) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001a169) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001a169) popup_query_data_code_window_t

0x5a51,	// (0x0001062a) list_single_midp_graphic_pane_g3

0x71c5,	// (0x00011d9e) query_popup_data_pane_cp2_ParamLimits

0x71d8,	// (0x00011db1) query_popup_pane_cp2_ParamLimits

0x71d8,	// (0x00011db1) query_popup_pane_cp2

0x6cf1,	// (0x000118ca) bg_popup_window_pane_cp11

0x9840,	// (0x00014419) heading_pane_cp5

0x72c0,	// (0x00011e99) listscroll_popup_info_pane

0x6cf1,	// (0x000118ca) input_focus_pane_cp3

0x71eb,	// (0x00011dc4) query_popup_pane_t1

0x71f9,	// (0x00011dd2) list_popup_info_pane_ParamLimits

0x71f9,	// (0x00011dd2) list_popup_info_pane

0x7208,	// (0x00011de1) listscroll_popup_info_pane_g1

0x7210,	// (0x00011de9) scroll_pane_cp7

0x721a,	// (0x00011df3) popup_info_list_pane_t1_ParamLimits

0x721a,	// (0x00011df3) popup_info_list_pane_t1

0x7234,	// (0x00011e0d) popup_info_list_pane_t2_ParamLimits

0x7234,	// (0x00011e0d) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001a172) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001a172) popup_info_list_pane_t

0x6cf1,	// (0x000118ca) bg_popup_window_pane_cp12

0xaccc,	// (0x000158a5) find_popup_pane

0x6dd1,	// (0x000119aa) bg_popup_window_pane_cp3

0x724e,	// (0x00011e27) heading_pane_cp3

0x725a,	// (0x00011e33) listscroll_popup_graphic_pane

0x6cf1,	// (0x000118ca) bg_popup_window_pane_cp4

0x72b6,	// (0x00011e8f) heading_pane_cp4

0x72c0,	// (0x00011e99) listscroll_popup_colour_pane

0x72c8,	// (0x00011ea1) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x72c8,	// (0x00011ea1) cell_large_graphic_colour_none_popup_pane

0x72dc,	// (0x00011eb5) grid_large_graphic_colour_popup_pane_ParamLimits

0x72dc,	// (0x00011eb5) grid_large_graphic_colour_popup_pane

0x7308,	// (0x00011ee1) listscroll_popup_colour_pane_g1_ParamLimits

0x7308,	// (0x00011ee1) listscroll_popup_colour_pane_g1

0x731f,	// (0x00011ef8) listscroll_popup_colour_pane_g2_ParamLimits

0x731f,	// (0x00011ef8) listscroll_popup_colour_pane_g2

0x7336,	// (0x00011f0f) listscroll_popup_colour_pane_g3_ParamLimits

0x7336,	// (0x00011f0f) listscroll_popup_colour_pane_g3

0x7346,	// (0x00011f1f) listscroll_popup_colour_pane_g4_ParamLimits

0x7346,	// (0x00011f1f) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001a177) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001a177) listscroll_popup_colour_pane_g

0x735a,	// (0x00011f33) scroll_pane_cp6_ParamLimits

0x735a,	// (0x00011f33) scroll_pane_cp6

0x736c,	// (0x00011f45) cell_large_graphic_colour_popup_pane_ParamLimits

0x736c,	// (0x00011f45) cell_large_graphic_colour_popup_pane

0x738b,	// (0x00011f64) cell_large_graphic_colour_none_popup_pane_t1

0x6cf1,	// (0x000118ca) grid_highlight_pane_cp5

0x739a,	// (0x00011f73) cell_large_graphic_colour_popup_pane_g1

0x73a2,	// (0x00011f7b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001a180) cell_large_graphic_colour_popup_pane_g

0x73aa,	// (0x00011f83) cell_large_graphic_colour_popup_pane_g2_copy1

0x73b3,	// (0x00011f8c) grid_highlight_pane_cp4

0x73bb,	// (0x00011f94) bg_popup_window_pane_cp8_ParamLimits

0x73bb,	// (0x00011f94) bg_popup_window_pane_cp8

0x73d6,	// (0x00011faf) popup_snote_single_text_window_g1_ParamLimits

0x73d6,	// (0x00011faf) popup_snote_single_text_window_g1

0x73e8,	// (0x00011fc1) popup_snote_single_text_window_t1_ParamLimits

0x73e8,	// (0x00011fc1) popup_snote_single_text_window_t1

0x73fb,	// (0x00011fd4) popup_snote_single_text_window_t2_ParamLimits

0x73fb,	// (0x00011fd4) popup_snote_single_text_window_t2

0x740e,	// (0x00011fe7) popup_snote_single_text_window_t3_ParamLimits

0x740e,	// (0x00011fe7) popup_snote_single_text_window_t3

0x7447,	// (0x00012020) popup_snote_single_text_window_t4_ParamLimits

0x7447,	// (0x00012020) popup_snote_single_text_window_t4

0x747b,	// (0x00012054) popup_snote_single_text_window_t5_ParamLimits

0x747b,	// (0x00012054) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001a185) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001a185) popup_snote_single_text_window_t

0x74aa,	// (0x00012083) bg_popup_window_pane_cp9_ParamLimits

0x74aa,	// (0x00012083) bg_popup_window_pane_cp9

0x73d6,	// (0x00011faf) popup_snote_single_graphic_window_g1_ParamLimits

0x73d6,	// (0x00011faf) popup_snote_single_graphic_window_g1

0x74b8,	// (0x00012091) popup_snote_single_graphic_window_g2_ParamLimits

0x74b8,	// (0x00012091) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001a190) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001a190) popup_snote_single_graphic_window_g

0x74c4,	// (0x0001209d) popup_snote_single_graphic_window_t1_ParamLimits

0x74c4,	// (0x0001209d) popup_snote_single_graphic_window_t1

0x74d7,	// (0x000120b0) popup_snote_single_graphic_window_t2_ParamLimits

0x74d7,	// (0x000120b0) popup_snote_single_graphic_window_t2

0x74ea,	// (0x000120c3) popup_snote_single_graphic_window_t3_ParamLimits

0x74ea,	// (0x000120c3) popup_snote_single_graphic_window_t3

0x7523,	// (0x000120fc) popup_snote_single_graphic_window_t4_ParamLimits

0x7523,	// (0x000120fc) popup_snote_single_graphic_window_t4

0x7557,	// (0x00012130) popup_snote_single_graphic_window_t5_ParamLimits

0x7557,	// (0x00012130) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001a195) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001a195) popup_snote_single_graphic_window_t

0xac10,	// (0x000157e9) grid_graphic_popup_pane_ParamLimits

0xac10,	// (0x000157e9) grid_graphic_popup_pane

0xac38,	// (0x00015811) listscroll_popup_graphic_pane_g1_ParamLimits

0xac38,	// (0x00015811) listscroll_popup_graphic_pane_g1

0xac4c,	// (0x00015825) listscroll_popup_graphic_pane_g2_ParamLimits

0xac4c,	// (0x00015825) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b1,	// (0x0001a58a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b1,	// (0x0001a58a) listscroll_popup_graphic_pane_g

0xac60,	// (0x00015839) scroll_pane_cp5

0xabb9,	// (0x00015792) cell_graphic_popup_pane_ParamLimits

0xabb9,	// (0x00015792) cell_graphic_popup_pane

0xab9a,	// (0x00015773) cell_graphic_popup_pane_g1

0xaba2,	// (0x0001577b) cell_graphic_popup_pane_g2

0x73aa,	// (0x00011f83) cell_graphic_popup_pane_g3

0x0002,

0xf9aa,	// (0x0001a583) cell_graphic_popup_pane_g

0xabab,	// (0x00015784) cell_graphic_popup_pane_t2

0x73b3,	// (0x00011f8c) grid_highlight_pane_cp3

0x7598,	// (0x00012171) list_gen_pane_ParamLimits

0x7598,	// (0x00012171) list_gen_pane

0x75ca,	// (0x000121a3) scroll_pane

0xaaf2,	// (0x000156cb) bg_list_pane_g1_ParamLimits

0xaaf2,	// (0x000156cb) bg_list_pane_g1

0xab0f,	// (0x000156e8) bg_list_pane_g2_ParamLimits

0xab0f,	// (0x000156e8) bg_list_pane_g2

0xab24,	// (0x000156fd) bg_list_pane_g3_ParamLimits

0xab24,	// (0x000156fd) bg_list_pane_g3

0xab38,	// (0x00015711) bg_list_pane_g4_ParamLimits

0xab38,	// (0x00015711) bg_list_pane_g4

0xab4c,	// (0x00015725) bg_list_pane_g5_ParamLimits

0xab4c,	// (0x00015725) bg_list_pane_g5

0x0004,

0xf99f,	// (0x0001a578) bg_list_pane_g_ParamLimits

0xf99f,	// (0x0001a578) bg_list_pane_g

0xaa13,	// (0x000155ec) list_double2_graphic_large_graphic_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double2_graphic_large_graphic_pane

0xaa13,	// (0x000155ec) list_double2_graphic_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double2_graphic_pane

0xaa13,	// (0x000155ec) list_double2_large_graphic_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double2_large_graphic_pane

0xaa13,	// (0x000155ec) list_double2_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double2_pane

0xaa13,	// (0x000155ec) list_double_graphic_heading_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double_graphic_heading_pane

0xaa13,	// (0x000155ec) list_double_graphic_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double_graphic_pane

0xaa13,	// (0x000155ec) list_double_heading_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double_heading_pane

0xaa13,	// (0x000155ec) list_double_large_graphic_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double_large_graphic_pane

0xaa13,	// (0x000155ec) list_double_number_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double_number_pane

0xaa13,	// (0x000155ec) list_double_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double_pane

0xaa13,	// (0x000155ec) list_double_time_pane_ParamLimits

0xaa13,	// (0x000155ec) list_double_time_pane

0xaa13,	// (0x000155ec) list_setting_number_pane_ParamLimits

0xaa13,	// (0x000155ec) list_setting_number_pane

0xaa13,	// (0x000155ec) list_setting_pane_ParamLimits

0xaa13,	// (0x000155ec) list_setting_pane

0xaa5e,	// (0x00015637) list_single_2graphic_pane_ParamLimits

0xaa5e,	// (0x00015637) list_single_2graphic_pane

0xaa5e,	// (0x00015637) list_single_graphic_heading_pane_ParamLimits

0xaa5e,	// (0x00015637) list_single_graphic_heading_pane

0xaa5e,	// (0x00015637) list_single_graphic_pane_ParamLimits

0xaa5e,	// (0x00015637) list_single_graphic_pane

0xaa5e,	// (0x00015637) list_single_heading_pane_ParamLimits

0xaa5e,	// (0x00015637) list_single_heading_pane

0xaad3,	// (0x000156ac) list_single_large_graphic_pane_ParamLimits

0xaad3,	// (0x000156ac) list_single_large_graphic_pane

0xaa5e,	// (0x00015637) list_single_number_heading_pane_ParamLimits

0xaa5e,	// (0x00015637) list_single_number_heading_pane

0xaa5e,	// (0x00015637) list_single_number_pane_ParamLimits

0xaa5e,	// (0x00015637) list_single_number_pane

0xaa5e,	// (0x00015637) list_single_pane_ParamLimits

0xaa5e,	// (0x00015637) list_single_pane

0x6cf1,	// (0x000118ca) list_highlight_pane_cp1

0x760a,	// (0x000121e3) list_single_pane_g1_ParamLimits

0x760a,	// (0x000121e3) list_single_pane_g1

0x7616,	// (0x000121ef) list_single_pane_g2_ParamLimits

0x7616,	// (0x000121ef) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001a1a7) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001a1a7) list_single_pane_g

0xa9cc,	// (0x000155a5) list_single_pane_t1_ParamLimits

0xa9cc,	// (0x000155a5) list_single_pane_t1

0x760a,	// (0x000121e3) list_single_number_pane_g1_ParamLimits

0x760a,	// (0x000121e3) list_single_number_pane_g1

0x7616,	// (0x000121ef) list_single_number_pane_g2_ParamLimits

0x7616,	// (0x000121ef) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001a1a7) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001a1a7) list_single_number_pane_g

0xa716,	// (0x000152ef) list_single_number_pane_t1_ParamLimits

0xa716,	// (0x000152ef) list_single_number_pane_t1

0xa72c,	// (0x00015305) list_single_number_pane_t2_ParamLimits

0xa72c,	// (0x00015305) list_single_number_pane_t2

0x0001,

0xf960,	// (0x0001a539) list_single_number_pane_t_ParamLimits

0xf960,	// (0x0001a539) list_single_number_pane_t

0x75fe,	// (0x000121d7) list_single_graphic_pane_g1_ParamLimits

0x75fe,	// (0x000121d7) list_single_graphic_pane_g1

0x760a,	// (0x000121e3) list_single_graphic_pane_g2_ParamLimits

0x760a,	// (0x000121e3) list_single_graphic_pane_g2

0x7616,	// (0x000121ef) list_single_graphic_pane_g3_ParamLimits

0x7616,	// (0x000121ef) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001a1a0) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001a1a0) list_single_graphic_pane_g

0x7622,	// (0x000121fb) list_single_graphic_pane_t1_ParamLimits

0x7622,	// (0x000121fb) list_single_graphic_pane_t1

0x760a,	// (0x000121e3) list_single_heading_pane_g1_ParamLimits

0x760a,	// (0x000121e3) list_single_heading_pane_g1

0x7616,	// (0x000121ef) list_single_heading_pane_g2_ParamLimits

0x7616,	// (0x000121ef) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001a1a7) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001a1a7) list_single_heading_pane_g

0x7638,	// (0x00012211) list_single_heading_pane_t1_ParamLimits

0x7638,	// (0x00012211) list_single_heading_pane_t1

0x764e,	// (0x00012227) list_single_heading_pane_t2_ParamLimits

0x764e,	// (0x00012227) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001a1ac) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001a1ac) list_single_heading_pane_t

0x760a,	// (0x000121e3) list_single_number_heading_pane_g1_ParamLimits

0x760a,	// (0x000121e3) list_single_number_heading_pane_g1

0x7616,	// (0x000121ef) list_single_number_heading_pane_g2_ParamLimits

0x7616,	// (0x000121ef) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001a1a7) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001a1a7) list_single_number_heading_pane_g

0x7638,	// (0x00012211) list_single_number_heading_pane_t1_ParamLimits

0x7638,	// (0x00012211) list_single_number_heading_pane_t1

0x7660,	// (0x00012239) list_single_number_heading_pane_t2_ParamLimits

0x7660,	// (0x00012239) list_single_number_heading_pane_t2

0x7672,	// (0x0001224b) list_single_number_heading_pane_t3_ParamLimits

0x7672,	// (0x0001224b) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001a1b1) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001a1b1) list_single_number_heading_pane_t

0x7684,	// (0x0001225d) list_single_graphic_heading_pane_g1_ParamLimits

0x7684,	// (0x0001225d) list_single_graphic_heading_pane_g1

0x7690,	// (0x00012269) list_single_graphic_heading_pane_g4_ParamLimits

0x7690,	// (0x00012269) list_single_graphic_heading_pane_g4

0x7616,	// (0x000121ef) list_single_graphic_heading_pane_g5_ParamLimits

0x7616,	// (0x000121ef) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001a1b8) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001a1b8) list_single_graphic_heading_pane_g

0x7638,	// (0x00012211) list_single_graphic_heading_pane_t1_ParamLimits

0x7638,	// (0x00012211) list_single_graphic_heading_pane_t1

0x76a1,	// (0x0001227a) list_single_graphic_heading_pane_t2_ParamLimits

0x76a1,	// (0x0001227a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001a1bf) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001a1bf) list_single_graphic_heading_pane_t

0x76b3,	// (0x0001228c) list_single_large_graphic_pane_g1_ParamLimits

0x76b3,	// (0x0001228c) list_single_large_graphic_pane_g1

0x76bf,	// (0x00012298) list_single_large_graphic_pane_g2_ParamLimits

0x76bf,	// (0x00012298) list_single_large_graphic_pane_g2

0x76cb,	// (0x000122a4) list_single_large_graphic_pane_g3_ParamLimits

0x76cb,	// (0x000122a4) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001a1c4) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001a1c4) list_single_large_graphic_pane_g

0x99f4,	// (0x000145cd) wait_border_pane_g2_copy1

0x76d7,	// (0x000122b0) list_single_large_graphic_pane_g4_cp2

0x76df,	// (0x000122b8) list_single_large_graphic_pane_t1_ParamLimits

0x76df,	// (0x000122b8) list_single_large_graphic_pane_t1

0x76f5,	// (0x000122ce) list_double_pane_g1_ParamLimits

0x76f5,	// (0x000122ce) list_double_pane_g1

0x7701,	// (0x000122da) list_double_pane_g2_ParamLimits

0x7701,	// (0x000122da) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001a1cb) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001a1cb) list_double_pane_g

0x770d,	// (0x000122e6) list_double_pane_t1_ParamLimits

0x770d,	// (0x000122e6) list_double_pane_t1

0x7723,	// (0x000122fc) list_double_pane_t2_ParamLimits

0x7723,	// (0x000122fc) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001a1d0) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001a1d0) list_double_pane_t

0x7735,	// (0x0001230e) list_double2_pane_g1_ParamLimits

0x7735,	// (0x0001230e) list_double2_pane_g1

0x7746,	// (0x0001231f) list_double2_pane_g2_ParamLimits

0x7746,	// (0x0001231f) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001a1d5) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001a1d5) list_double2_pane_g

0x7752,	// (0x0001232b) list_double2_pane_t1_ParamLimits

0x7752,	// (0x0001232b) list_double2_pane_t1

0x7768,	// (0x00012341) list_double2_pane_t2_ParamLimits

0x7768,	// (0x00012341) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001a1da) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001a1da) list_double2_pane_t

0x76f5,	// (0x000122ce) list_double_number_pane_g1_ParamLimits

0x76f5,	// (0x000122ce) list_double_number_pane_g1

0x7701,	// (0x000122da) list_double_number_pane_g2_ParamLimits

0x7701,	// (0x000122da) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001a1cb) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001a1cb) list_double_number_pane_g

0x777a,	// (0x00012353) list_double_number_pane_t1_ParamLimits

0x777a,	// (0x00012353) list_double_number_pane_t1

0x778c,	// (0x00012365) list_double_number_pane_t2_ParamLimits

0x778c,	// (0x00012365) list_double_number_pane_t2

0x77a2,	// (0x0001237b) list_double_number_pane_t3_ParamLimits

0x77a2,	// (0x0001237b) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001a1df) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001a1df) list_double_number_pane_t

0x77b4,	// (0x0001238d) list_double_graphic_pane_g1_ParamLimits

0x77b4,	// (0x0001238d) list_double_graphic_pane_g1

0x77c0,	// (0x00012399) list_double_graphic_pane_g2_ParamLimits

0x77c0,	// (0x00012399) list_double_graphic_pane_g2

0x77cf,	// (0x000123a8) list_double_graphic_pane_g3_ParamLimits

0x77cf,	// (0x000123a8) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001a1e6) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001a1e6) list_double_graphic_pane_g

0x77e7,	// (0x000123c0) list_double_graphic_pane_t1_ParamLimits

0x77e7,	// (0x000123c0) list_double_graphic_pane_t1

0x77fd,	// (0x000123d6) list_double_graphic_pane_t2_ParamLimits

0x77fd,	// (0x000123d6) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001a1ef) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001a1ef) list_double_graphic_pane_t

0x780f,	// (0x000123e8) list_double2_graphic_pane_g1_ParamLimits

0x780f,	// (0x000123e8) list_double2_graphic_pane_g1

0x781b,	// (0x000123f4) list_double2_graphic_pane_g2_ParamLimits

0x781b,	// (0x000123f4) list_double2_graphic_pane_g2

0x7746,	// (0x0001231f) list_double2_graphic_pane_g3_ParamLimits

0x7746,	// (0x0001231f) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001a1f4) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001a1f4) list_double2_graphic_pane_g

0x7827,	// (0x00012400) list_double2_graphic_pane_t1_ParamLimits

0x7827,	// (0x00012400) list_double2_graphic_pane_t1

0x783d,	// (0x00012416) list_double2_graphic_pane_t2_ParamLimits

0x783d,	// (0x00012416) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001a1fb) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001a1fb) list_double2_graphic_pane_t

0x784f,	// (0x00012428) list_double_large_graphic_pane_g1_ParamLimits

0x784f,	// (0x00012428) list_double_large_graphic_pane_g1

0x786e,	// (0x00012447) list_double_large_graphic_pane_g2_ParamLimits

0x786e,	// (0x00012447) list_double_large_graphic_pane_g2

0x7701,	// (0x000122da) list_double_large_graphic_pane_g3_ParamLimits

0x7701,	// (0x000122da) list_double_large_graphic_pane_g3

0x787f,	// (0x00012458) list_double_large_graphic_pane_g4_ParamLimits

0x787f,	// (0x00012458) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001a200) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001a200) list_double_large_graphic_pane_g

0x78a5,	// (0x0001247e) list_double_large_graphic_pane_t1_ParamLimits

0x78a5,	// (0x0001247e) list_double_large_graphic_pane_t1

0x78be,	// (0x00012497) list_double_large_graphic_pane_t2_ParamLimits

0x78be,	// (0x00012497) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001a20b) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001a20b) list_double_large_graphic_pane_t

0x78d0,	// (0x000124a9) list_double2_large_graphic_pane_g1_ParamLimits

0x78d0,	// (0x000124a9) list_double2_large_graphic_pane_g1

0x7735,	// (0x0001230e) list_double2_large_graphic_pane_g2_ParamLimits

0x7735,	// (0x0001230e) list_double2_large_graphic_pane_g2

0x7746,	// (0x0001231f) list_double2_large_graphic_pane_g3_ParamLimits

0x7746,	// (0x0001231f) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001a210) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001a210) list_double2_large_graphic_pane_g

0x78dc,	// (0x000124b5) list_double2_large_graphic_pane_t1_ParamLimits

0x78dc,	// (0x000124b5) list_double2_large_graphic_pane_t1

0x78f2,	// (0x000124cb) list_double2_large_graphic_pane_t2_ParamLimits

0x78f2,	// (0x000124cb) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001a217) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001a217) list_double2_large_graphic_pane_t

0x7904,	// (0x000124dd) list_double_heading_pane_g1_ParamLimits

0x7904,	// (0x000124dd) list_double_heading_pane_g1

0x7915,	// (0x000124ee) list_double_heading_pane_g2_ParamLimits

0x7915,	// (0x000124ee) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001a21c) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001a21c) list_double_heading_pane_g

0x7921,	// (0x000124fa) list_double_heading_pane_t1_ParamLimits

0x7921,	// (0x000124fa) list_double_heading_pane_t1

0x7937,	// (0x00012510) list_double_heading_pane_t2_ParamLimits

0x7937,	// (0x00012510) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001a221) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001a221) list_double_heading_pane_t

0x7949,	// (0x00012522) list_double_graphic_heading_pane_g1_ParamLimits

0x7949,	// (0x00012522) list_double_graphic_heading_pane_g1

0x7904,	// (0x000124dd) list_double_graphic_heading_pane_g2_ParamLimits

0x7904,	// (0x000124dd) list_double_graphic_heading_pane_g2

0x7915,	// (0x000124ee) list_double_graphic_heading_pane_g3_ParamLimits

0x7915,	// (0x000124ee) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001a226) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001a226) list_double_graphic_heading_pane_g

0x7955,	// (0x0001252e) list_double_graphic_heading_pane_t1_ParamLimits

0x7955,	// (0x0001252e) list_double_graphic_heading_pane_t1

0x796b,	// (0x00012544) list_double_graphic_heading_pane_t2_ParamLimits

0x796b,	// (0x00012544) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001a22d) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001a22d) list_double_graphic_heading_pane_t

0x786e,	// (0x00012447) list_double_time_pane_g1_ParamLimits

0x786e,	// (0x00012447) list_double_time_pane_g1

0x7701,	// (0x000122da) list_double_time_pane_g2_ParamLimits

0x7701,	// (0x000122da) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001a232) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001a232) list_double_time_pane_g

0x797d,	// (0x00012556) list_double_time_pane_t1_ParamLimits

0x797d,	// (0x00012556) list_double_time_pane_t1

0x7993,	// (0x0001256c) list_double_time_pane_t2_ParamLimits

0x7993,	// (0x0001256c) list_double_time_pane_t2

0x79a5,	// (0x0001257e) list_double_time_pane_t3_ParamLimits

0x79a5,	// (0x0001257e) list_double_time_pane_t3

0x79b7,	// (0x00012590) list_double_time_pane_t4_ParamLimits

0x79b7,	// (0x00012590) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001a237) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001a237) list_double_time_pane_t

0x781b,	// (0x000123f4) list_setting_pane_g1_ParamLimits

0x781b,	// (0x000123f4) list_setting_pane_g1

0x7746,	// (0x0001231f) list_setting_pane_g2_ParamLimits

0x7746,	// (0x0001231f) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001a240) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001a240) list_setting_pane_g

0x79c9,	// (0x000125a2) list_setting_pane_t1_ParamLimits

0x79c9,	// (0x000125a2) list_setting_pane_t1

0x79e0,	// (0x000125b9) list_setting_pane_t2_ParamLimits

0x79e0,	// (0x000125b9) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001a245) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001a245) list_setting_pane_t

0x7a1f,	// (0x000125f8) set_value_pane_cp_ParamLimits

0x7a1f,	// (0x000125f8) set_value_pane_cp

0x781b,	// (0x000123f4) list_setting_number_pane_g1_ParamLimits

0x781b,	// (0x000123f4) list_setting_number_pane_g1

0x7746,	// (0x0001231f) list_setting_number_pane_g2_ParamLimits

0x7746,	// (0x0001231f) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001a240) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001a240) list_setting_number_pane_g

0x7a2b,	// (0x00012604) list_setting_number_pane_t1_ParamLimits

0x7a2b,	// (0x00012604) list_setting_number_pane_t1

0x7a3f,	// (0x00012618) list_setting_number_pane_t2_ParamLimits

0x7a3f,	// (0x00012618) list_setting_number_pane_t2

0x7a56,	// (0x0001262f) list_setting_number_pane_t3_ParamLimits

0x7a56,	// (0x0001262f) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001a24c) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001a24c) list_setting_number_pane_t

0x7a1f,	// (0x000125f8) set_value_pane_ParamLimits

0x7a1f,	// (0x000125f8) set_value_pane

0x7a99,	// (0x00012672) bg_set_opt_pane_ParamLimits

0x7a99,	// (0x00012672) bg_set_opt_pane

0x7aba,	// (0x00012693) set_value_pane_t1

0x7ac8,	// (0x000126a1) slider_set_pane_cp3

0x7ad1,	// (0x000126aa) volume_small_pane_cp

0x7ada,	// (0x000126b3) list_form_gen_pane

0x7ae3,	// (0x000126bc) scroll_pane_cp8

0x7afc,	// (0x000126d5) form_field_data_pane_ParamLimits

0x7afc,	// (0x000126d5) form_field_data_pane

0x7b1e,	// (0x000126f7) form_field_data_wide_pane_ParamLimits

0x7b1e,	// (0x000126f7) form_field_data_wide_pane

0x7b41,	// (0x0001271a) form_field_popup_pane_ParamLimits

0x7b41,	// (0x0001271a) form_field_popup_pane

0x7b61,	// (0x0001273a) form_field_popup_wide_pane_ParamLimits

0x7b61,	// (0x0001273a) form_field_popup_wide_pane

0x7b7e,	// (0x00012757) form_field_slider_pane_ParamLimits

0x7b7e,	// (0x00012757) form_field_slider_pane

0x7b91,	// (0x0001276a) form_field_slider_wide_pane_ParamLimits

0x7b91,	// (0x0001276a) form_field_slider_wide_pane

0x7ba4,	// (0x0001277d) data_form_pane

0x7bba,	// (0x00012793) form_field_data_pane_t1

0x7bd2,	// (0x000127ab) input_focus_pane

0x7be0,	// (0x000127b9) data_form_wide_pane

0x7c0c,	// (0x000127e5) form_field_data_wide_pane_t1

0x73c8,	// (0x00011fa1) input_focus_pane_cp6

0x7c2b,	// (0x00012804) form_field_popup_pane_t1

0x7bd2,	// (0x000127ab) input_focus_pane_cp7

0x7c43,	// (0x0001281c) list_form_pane

0x7c57,	// (0x00012830) form_field_popup_wide_pane_t1

0x7bd2,	// (0x000127ab) input_focus_pane_cp8

0x7c6c,	// (0x00012845) list_form_wide_pane

0x7c83,	// (0x0001285c) form_field_slider_pane_t1_ParamLimits

0x7c83,	// (0x0001285c) form_field_slider_pane_t1

0x7c95,	// (0x0001286e) form_field_slider_pane_t2_ParamLimits

0x7c95,	// (0x0001286e) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001a25c) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001a25c) form_field_slider_pane_t

0x7066,	// (0x00011c3f) input_focus_pane_cp9_ParamLimits

0x7066,	// (0x00011c3f) input_focus_pane_cp9

0x7ca7,	// (0x00012880) slider_cont_pane_ParamLimits

0x7ca7,	// (0x00012880) slider_cont_pane

0x7cbb,	// (0x00012894) form_field_slider_wide_pane_t1_ParamLimits

0x7cbb,	// (0x00012894) form_field_slider_wide_pane_t1

0x7ccd,	// (0x000128a6) form_field_slider_wide_pane_t2_ParamLimits

0x7ccd,	// (0x000128a6) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001a261) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001a261) form_field_slider_wide_pane_t

0x7066,	// (0x00011c3f) input_focus_pane_cp10_ParamLimits

0x7066,	// (0x00011c3f) input_focus_pane_cp10

0x7cdf,	// (0x000128b8) slider_cont_pane_cp1_ParamLimits

0x7cdf,	// (0x000128b8) slider_cont_pane_cp1

0x7cf3,	// (0x000128cc) slider_form_pane_cp

0x7cfb,	// (0x000128d4) input_focus_pane_g1

0x7d03,	// (0x000128dc) input_focus_pane_g2

0x7d0b,	// (0x000128e4) input_focus_pane_g3

0x7d13,	// (0x000128ec) input_focus_pane_g4

0x7d1b,	// (0x000128f4) input_focus_pane_g5

0x7d23,	// (0x000128fc) input_focus_pane_g6

0x7d2b,	// (0x00012904) input_focus_pane_g7

0x7d33,	// (0x0001290c) input_focus_pane_g8

0x7d3b,	// (0x00012914) input_focus_pane_g9

0x6ce7,	// (0x000118c0) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001a266) input_focus_pane_g

0x99fd,	// (0x000145d6) wait_border_pane_g3_copy1

0x7d43,	// (0x0001291c) data_form_pane_t1

0x6ce7,	// (0x000118c0) wait_anim_pane_g1_copy1

0xa9af,	// (0x00015588) data_form_wide_pane_t1

0x7d5e,	// (0x00012937) list_form_graphic_pane_cp_ParamLimits

0x7d5e,	// (0x00012937) list_form_graphic_pane_cp

0xa984,	// (0x0001555d) slider_form_pane_g1

0xa98d,	// (0x00015566) slider_form_pane_g2

0x0006,

0xf990,	// (0x0001a569) slider_form_pane_g

0x7d77,	// (0x00012950) list_form_graphic_pane_ParamLimits

0x7d77,	// (0x00012950) list_form_graphic_pane

0x7d93,	// (0x0001296c) list_form_graphic_pane_g1

0x7d9b,	// (0x00012974) list_form_graphic_pane_t1_ParamLimits

0x7d9b,	// (0x00012974) list_form_graphic_pane_t1

0x6dd1,	// (0x000119aa) list_highlight_pane_cp5_ParamLimits

0x6dd1,	// (0x000119aa) list_highlight_pane_cp5

0x7db0,	// (0x00012989) find_pane_g1

0x7db9,	// (0x00012992) input_find_pane

0x7dc2,	// (0x0001299b) input_find_pane_g1_ParamLimits

0x7dc2,	// (0x0001299b) input_find_pane_g1

0x7dce,	// (0x000129a7) input_find_pane_t1_ParamLimits

0x7dce,	// (0x000129a7) input_find_pane_t1

0x7de3,	// (0x000129bc) input_find_pane_t2_ParamLimits

0x7de3,	// (0x000129bc) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001a27b) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001a27b) input_find_pane_t

0x7df8,	// (0x000129d1) input_focus_pane_cp5_ParamLimits

0x7df8,	// (0x000129d1) input_focus_pane_cp5

0x7e12,	// (0x000129eb) bg_popup_window_pane_cp2_ParamLimits

0x7e12,	// (0x000129eb) bg_popup_window_pane_cp2

0x7e1f,	// (0x000129f8) listscroll_menu_pane_ParamLimits

0x7e1f,	// (0x000129f8) listscroll_menu_pane

0x7e2b,	// (0x00012a04) popup_submenu_window_ParamLimits

0x7e2b,	// (0x00012a04) popup_submenu_window

0x7e57,	// (0x00012a30) find_popup_pane_g1

0x7e5f,	// (0x00012a38) input_popup_find_pane_cp

0x7df8,	// (0x000129d1) input_focus_pane_cp4_ParamLimits

0x7df8,	// (0x000129d1) input_focus_pane_cp4

0x7e75,	// (0x00012a4e) input_popup_find_pane_t1_ParamLimits

0x7e75,	// (0x00012a4e) input_popup_find_pane_t1

0x6cf1,	// (0x000118ca) bg_popup_sub_pane_cp

0x7ea3,	// (0x00012a7c) listscroll_popup_sub_pane

0x7eab,	// (0x00012a84) list_submenu_pane_ParamLimits

0x7eab,	// (0x00012a84) list_submenu_pane

0x7ebc,	// (0x00012a95) scroll_pane_cp4

0x7ec4,	// (0x00012a9d) list_single_popup_submenu_pane_ParamLimits

0x7ec4,	// (0x00012a9d) list_single_popup_submenu_pane

0x7ed8,	// (0x00012ab1) list_single_popup_submenu_pane_g1

0x7ee0,	// (0x00012ab9) list_single_popup_submenu_pane_t1_ParamLimits

0x7ee0,	// (0x00012ab9) list_single_popup_submenu_pane_t1

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp1_ParamLimits

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp1

0x7ef5,	// (0x00012ace) tabs_2_active_pane_g1

0x7efd,	// (0x00012ad6) tabs_2_active_pane_t1

0x6dd1,	// (0x000119aa) bg_passive_tab_pane_cp1_ParamLimits

0x6dd1,	// (0x000119aa) bg_passive_tab_pane_cp1

0x7ef5,	// (0x00012ace) tabs_2_passive_pane_g1

0x7efd,	// (0x00012ad6) tabs_2_passive_pane_t1

0x7f0f,	// (0x00012ae8) bg_active_tab_pane_cp4

0x7f1d,	// (0x00012af6) tabs_2_long_active_pane_t1

0x7f30,	// (0x00012b09) bg_passive_tab_pane_cp4

0x5a59,	// (0x00010632) list_single_midp_graphic_pane_g4_ParamLimits

0x7f0f,	// (0x00012ae8) bg_active_tab_pane_cp5

0x7f3c,	// (0x00012b15) tabs_3_long_active_pane_t1

0x7f30,	// (0x00012b09) bg_passive_tab_pane_cp5

0x5a59,	// (0x00010632) list_single_midp_graphic_pane_g4

0x6dd1,	// (0x000119aa) bg_popup_window_pane_cp13_ParamLimits

0x6dd1,	// (0x000119aa) bg_popup_window_pane_cp13

0x7f57,	// (0x00012b30) listscroll_popup_fast_pane_ParamLimits

0x7f57,	// (0x00012b30) listscroll_popup_fast_pane

0x7f66,	// (0x00012b3f) grid_popup_fast_pane_ParamLimits

0x7f66,	// (0x00012b3f) grid_popup_fast_pane

0x7f78,	// (0x00012b51) scroll_pane_cp9_ParamLimits

0x7f78,	// (0x00012b51) scroll_pane_cp9

0xc7f2,	// (0x000173cb) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc7f2,	// (0x000173cb) list_single_graphic_hl_pane_t1_cp2

0x7f9c,	// (0x00012b75) input_focus_pane_cp20_ParamLimits

0x7f9c,	// (0x00012b75) input_focus_pane_cp20

0x7faa,	// (0x00012b83) query_popup_data_pane_t1_ParamLimits

0x7faa,	// (0x00012b83) query_popup_data_pane_t1

0x7fbd,	// (0x00012b96) query_popup_data_pane_t2_ParamLimits

0x7fbd,	// (0x00012b96) query_popup_data_pane_t2

0x8003,	// (0x00012bdc) query_popup_data_pane_t3_ParamLimits

0x8003,	// (0x00012bdc) query_popup_data_pane_t3

0x8044,	// (0x00012c1d) query_popup_data_pane_t4_ParamLimits

0x8044,	// (0x00012c1d) query_popup_data_pane_t4

0x8080,	// (0x00012c59) query_popup_data_pane_t5_ParamLimits

0x8080,	// (0x00012c59) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001a280) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001a280) query_popup_data_pane_t

0x7cfb,	// (0x000128d4) bg_set_opt_pane_g1

0x7d03,	// (0x000128dc) bg_set_opt_pane_g2

0x7d0b,	// (0x000128e4) bg_set_opt_pane_g3

0x7d13,	// (0x000128ec) bg_set_opt_pane_g4

0x7d1b,	// (0x000128f4) bg_set_opt_pane_g5

0x7d23,	// (0x000128fc) bg_set_opt_pane_g6

0x7d2b,	// (0x00012904) bg_set_opt_pane_g7

0x7d33,	// (0x0001290c) bg_set_opt_pane_g8

0x7d3b,	// (0x00012914) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001a28b) bg_set_opt_pane_g

0x5075,	// (0x0000fc4e) control_top_pane_stacon_ParamLimits

0x5075,	// (0x0000fc4e) control_top_pane_stacon

0x50c8,	// (0x0000fca1) signal_pane_stacon_ParamLimits

0x50c8,	// (0x0000fca1) signal_pane_stacon

0x86fb,	// (0x000132d4) stacon_top_pane_g1_ParamLimits

0x86fb,	// (0x000132d4) stacon_top_pane_g1

0x50ed,	// (0x0000fcc6) title_pane_stacon_ParamLimits

0x50ed,	// (0x0000fcc6) title_pane_stacon

0x5117,	// (0x0000fcf0) uni_indicator_pane_stacon_ParamLimits

0x5117,	// (0x0000fcf0) uni_indicator_pane_stacon

0x512c,	// (0x0000fd05) battery_pane_stacon_ParamLimits

0x512c,	// (0x0000fd05) battery_pane_stacon

0x5170,	// (0x0000fd49) control_bottom_pane_stacon_ParamLimits

0x5170,	// (0x0000fd49) control_bottom_pane_stacon

0x5193,	// (0x0000fd6c) navi_pane_stacon_ParamLimits

0x5193,	// (0x0000fd6c) navi_pane_stacon

0x871d,	// (0x000132f6) stacon_bottom_pane_g1_ParamLimits

0x871d,	// (0x000132f6) stacon_bottom_pane_g1

0x4dd8,	// (0x0000f9b1) aid_levels_signal_lsc_ParamLimits

0x4dd8,	// (0x0000f9b1) aid_levels_signal_lsc

0x4dee,	// (0x0000f9c7) signal_pane_stacon_g1_ParamLimits

0x4dee,	// (0x0000f9c7) signal_pane_stacon_g1

0x4e02,	// (0x0000f9db) signal_pane_stacon_g2_ParamLimits

0x4e02,	// (0x0000f9db) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001a29e) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001a29e) signal_pane_stacon_g

0x4e37,	// (0x0000fa10) title_pane_stacon_t1_ParamLimits

0x4e37,	// (0x0000fa10) title_pane_stacon_t1

0x80c4,	// (0x00012c9d) uni_indicator_pane_stacon_g1

0x80ce,	// (0x00012ca7) uni_indicator_pane_stacon_g2

0x80d8,	// (0x00012cb1) uni_indicator_pane_stacon_g3

0x80e2,	// (0x00012cbb) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001a2aa) uni_indicator_pane_stacon_g

0x4e5c,	// (0x0000fa35) control_top_pane_stacon_g1

0x4e64,	// (0x0000fa3d) control_top_pane_stacon_t1_ParamLimits

0x4e64,	// (0x0000fa3d) control_top_pane_stacon_t1

0x4e9b,	// (0x0000fa74) aid_levels_battery_lsc_ParamLimits

0x4e9b,	// (0x0000fa74) aid_levels_battery_lsc

0x4eb2,	// (0x0000fa8b) battery_pane_stacon_g1_ParamLimits

0x4eb2,	// (0x0000fa8b) battery_pane_stacon_g1

0x4ec5,	// (0x0000fa9e) battery_pane_stacon_g2_ParamLimits

0x4ec5,	// (0x0000fa9e) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001a2b3) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001a2b3) battery_pane_stacon_g

0x4f03,	// (0x0000fadc) navi_icon_pane_stacon

0x4f17,	// (0x0000faf0) navi_navi_pane_stacon

0x4f03,	// (0x0000fadc) navi_text_pane_stacon

0x4e5c,	// (0x0000fa35) control_bottom_pane_stacon_g1

0x4f2b,	// (0x0000fb04) control_bottom_pane_stacon_t1_ParamLimits

0x4f2b,	// (0x0000fb04) control_bottom_pane_stacon_t1

0x8106,	// (0x00012cdf) grid_app_pane_ParamLimits

0x8106,	// (0x00012cdf) grid_app_pane

0x812a,	// (0x00012d03) scroll_pane_cp15_ParamLimits

0x812a,	// (0x00012d03) scroll_pane_cp15

0x813d,	// (0x00012d16) cell_app_pane_ParamLimits

0x813d,	// (0x00012d16) cell_app_pane

0x8161,	// (0x00012d3a) cell_app_pane_g1_ParamLimits

0x8161,	// (0x00012d3a) cell_app_pane_g1

0x8181,	// (0x00012d5a) cell_app_pane_g2_ParamLimits

0x8181,	// (0x00012d5a) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001a2b8) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001a2b8) cell_app_pane_g

0x818d,	// (0x00012d66) cell_app_pane_t1_ParamLimits

0x818d,	// (0x00012d66) cell_app_pane_t1

0x81a4,	// (0x00012d7d) grid_highlight_pane_ParamLimits

0x81a4,	// (0x00012d7d) grid_highlight_pane

0x7cfb,	// (0x000128d4) cell_highlight_pane_g1

0x7d03,	// (0x000128dc) cell_highlight_pane_g2

0x7d0b,	// (0x000128e4) cell_highlight_pane_g3

0x7d13,	// (0x000128ec) cell_highlight_pane_g4

0x7d1b,	// (0x000128f4) cell_highlight_pane_g5

0x7d23,	// (0x000128fc) cell_highlight_pane_g6

0x7d2b,	// (0x00012904) cell_highlight_pane_g7

0x7d33,	// (0x0001290c) cell_highlight_pane_g8

0x7d3b,	// (0x00012914) cell_highlight_pane_g9

0x6ce7,	// (0x000118c0) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001a266) cell_highlight_pane_g

0x81b5,	// (0x00012d8e) bg_scroll_pane

0x4f75,	// (0x0000fb4e) scroll_handle_pane

0x81fc,	// (0x00012dd5) scroll_bg_pane_g1

0x8211,	// (0x00012dea) scroll_bg_pane_g2

0x8229,	// (0x00012e02) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001a2bd) scroll_bg_pane_g

0x823e,	// (0x00012e17) scroll_handle_focus_pane_ParamLimits

0x823e,	// (0x00012e17) scroll_handle_focus_pane

0x81fc,	// (0x00012dd5) scroll_handle_pane_g1

0x824b,	// (0x00012e24) scroll_handle_pane_g2

0x8229,	// (0x00012e02) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001a2c4) scroll_handle_pane_g

0x7df8,	// (0x000129d1) bg_popup_sub_pane_cp21_ParamLimits

0x7df8,	// (0x000129d1) bg_popup_sub_pane_cp21

0x825f,	// (0x00012e38) popup_fep_japan_predictive_window_t1_ParamLimits

0x825f,	// (0x00012e38) popup_fep_japan_predictive_window_t1

0x8279,	// (0x00012e52) popup_fep_japan_predictive_window_t2_ParamLimits

0x8279,	// (0x00012e52) popup_fep_japan_predictive_window_t2

0x82ac,	// (0x00012e85) popup_fep_japan_predictive_window_t3_ParamLimits

0x82ac,	// (0x00012e85) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001a2cb) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001a2cb) popup_fep_japan_predictive_window_t

0x6cf1,	// (0x000118ca) bg_popup_sub_pane_cp23

0x82e3,	// (0x00012ebc) listscroll_japin_cand_pane

0x82eb,	// (0x00012ec4) popup_fep_japan_candidate_window_t1

0x82f9,	// (0x00012ed2) candidate_pane_ParamLimits

0x82f9,	// (0x00012ed2) candidate_pane

0x830b,	// (0x00012ee4) scroll_pane_cp30

0x8313,	// (0x00012eec) list_single_popup_jap_candidate_pane_ParamLimits

0x8313,	// (0x00012eec) list_single_popup_jap_candidate_pane

0x6cf1,	// (0x000118ca) list_highlight_pane_cp30

0x8328,	// (0x00012f01) list_single_popup_jap_candidate_pane_t1

0x8337,	// (0x00012f10) level_1_signal

0x8349,	// (0x00012f22) level_2_signal

0x835c,	// (0x00012f35) level_3_signal

0x836f,	// (0x00012f48) level_4_signal

0x8382,	// (0x00012f5b) level_5_signal

0x8395,	// (0x00012f6e) level_6_signal

0x83a8,	// (0x00012f81) level_7_signal

0x8337,	// (0x00012f10) level_1_battery

0x8349,	// (0x00012f22) level_2_battery

0x835c,	// (0x00012f35) level_3_battery

0x836f,	// (0x00012f48) level_4_battery

0x8382,	// (0x00012f5b) level_5_battery

0x8395,	// (0x00012f6e) level_6_battery

0x83a8,	// (0x00012f81) level_7_battery

0x83d3,	// (0x00012fac) list_menu_pane_ParamLimits

0x83d3,	// (0x00012fac) list_menu_pane

0x83e9,	// (0x00012fc2) scroll_pane_cp25_ParamLimits

0x83e9,	// (0x00012fc2) scroll_pane_cp25

0x8402,	// (0x00012fdb) list_double2_graphic_pane_cp2_ParamLimits

0x8402,	// (0x00012fdb) list_double2_graphic_pane_cp2

0x8402,	// (0x00012fdb) list_double2_large_graphic_pane_cp2_ParamLimits

0x8402,	// (0x00012fdb) list_double2_large_graphic_pane_cp2

0x8402,	// (0x00012fdb) list_double2_pane_cp2_ParamLimits

0x8402,	// (0x00012fdb) list_double2_pane_cp2

0x8402,	// (0x00012fdb) list_double_graphic_pane_cp2_ParamLimits

0x8402,	// (0x00012fdb) list_double_graphic_pane_cp2

0x8402,	// (0x00012fdb) list_double_large_graphic_pane_cp2_ParamLimits

0x8402,	// (0x00012fdb) list_double_large_graphic_pane_cp2

0x8402,	// (0x00012fdb) list_double_number_pane_cp2_ParamLimits

0x8402,	// (0x00012fdb) list_double_number_pane_cp2

0x8402,	// (0x00012fdb) list_double_pane_cp2_ParamLimits

0x8402,	// (0x00012fdb) list_double_pane_cp2

0x8426,	// (0x00012fff) list_single_2graphic_pane_cp2_ParamLimits

0x8426,	// (0x00012fff) list_single_2graphic_pane_cp2

0x8426,	// (0x00012fff) list_single_graphic_heading_pane_cp2_ParamLimits

0x8426,	// (0x00012fff) list_single_graphic_heading_pane_cp2

0x8426,	// (0x00012fff) list_single_graphic_pane_cp2_ParamLimits

0x8426,	// (0x00012fff) list_single_graphic_pane_cp2

0x8426,	// (0x00012fff) list_single_heading_pane_cp2_ParamLimits

0x8426,	// (0x00012fff) list_single_heading_pane_cp2

0x843f,	// (0x00013018) list_single_large_graphic_pane_cp2_ParamLimits

0x843f,	// (0x00013018) list_single_large_graphic_pane_cp2

0x8426,	// (0x00012fff) list_single_number_heading_pane_cp2_ParamLimits

0x8426,	// (0x00012fff) list_single_number_heading_pane_cp2

0x8426,	// (0x00012fff) list_single_number_pane_cp2_ParamLimits

0x8426,	// (0x00012fff) list_single_number_pane_cp2

0x8426,	// (0x00012fff) list_single_pane_cp2_ParamLimits

0x8426,	// (0x00012fff) list_single_pane_cp2

0x84bb,	// (0x00013094) bg_popup_sub_pane_cp22

0x5027,	// (0x0000fc00) popup_side_volume_key_window_g1

0x5051,	// (0x0000fc2a) popup_side_volume_key_window_t1

0x506d,	// (0x0000fc46) volume_small_pane_cp1

0x7066,	// (0x00011c3f) bg_popup_sub_pane_cp24_ParamLimits

0x7066,	// (0x00011c3f) bg_popup_sub_pane_cp24

0x84d1,	// (0x000130aa) fep_china_uni_candidate_pane_ParamLimits

0x84d1,	// (0x000130aa) fep_china_uni_candidate_pane

0x84e5,	// (0x000130be) fep_china_uni_entry_pane

0x84f5,	// (0x000130ce) popup_fep_china_uni_window_g1

0x8511,	// (0x000130ea) fep_china_uni_entry_pane_g1

0x8519,	// (0x000130f2) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001a2fc) fep_china_uni_entry_pane_g

0x8521,	// (0x000130fa) fep_entry_item_pane

0x852b,	// (0x00013104) fep_candidate_item_pane

0x8533,	// (0x0001310c) fep_china_uni_candidate_pane_g1

0x853b,	// (0x00013114) fep_china_uni_candidate_pane_g2

0x8543,	// (0x0001311c) fep_china_uni_candidate_pane_g3

0x854b,	// (0x00013124) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001a301) fep_china_uni_candidate_pane_g

0x6ce7,	// (0x000118c0) fep_entry_item_pane_g1

0x8553,	// (0x0001312c) fep_entry_item_pane_t1_ParamLimits

0x8553,	// (0x0001312c) fep_entry_item_pane_t1

0x8569,	// (0x00013142) fep_candidate_item_pane_t1_ParamLimits

0x8569,	// (0x00013142) fep_candidate_item_pane_t1

0x857e,	// (0x00013157) fep_candidate_item_pane_t2_ParamLimits

0x857e,	// (0x00013157) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001a30a) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001a30a) fep_candidate_item_pane_t

0x6dd1,	// (0x000119aa) list_highlight_pane_cp31_ParamLimits

0x6dd1,	// (0x000119aa) list_highlight_pane_cp31

0x8590,	// (0x00013169) level_1_signal_lsc

0x8599,	// (0x00013172) level_2_signal_lsc

0x85a2,	// (0x0001317b) level_3_signal_lsc

0x85ab,	// (0x00013184) level_4_signal_lsc

0x85b4,	// (0x0001318d) level_5_signal_lsc

0x85bd,	// (0x00013196) level_6_signal_lsc

0x85c6,	// (0x0001319f) level_7_signal_lsc

0x85c6,	// (0x0001319f) level_1_battery_lsc

0x85cf,	// (0x000131a8) level_2_battery_lsc

0x85d8,	// (0x000131b1) level_3_battery_lsc

0x85e1,	// (0x000131ba) level_4_battery_lsc

0x85ea,	// (0x000131c3) level_5_battery_lsc

0x85f3,	// (0x000131cc) level_6_battery_lsc

0x8590,	// (0x00013169) level_7_battery_lsc

0x85fc,	// (0x000131d5) scroll_handle_focus_pane_g1

0x8605,	// (0x000131de) scroll_handle_focus_pane_g2

0x860e,	// (0x000131e7) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001a30f) scroll_handle_focus_pane_g

0x8617,	// (0x000131f0) list_single_2graphic_pane_g1_ParamLimits

0x8617,	// (0x000131f0) list_single_2graphic_pane_g1

0x7690,	// (0x00012269) list_single_2graphic_pane_g2_ParamLimits

0x7690,	// (0x00012269) list_single_2graphic_pane_g2

0x7616,	// (0x000121ef) list_single_2graphic_pane_g3_ParamLimits

0x7616,	// (0x000121ef) list_single_2graphic_pane_g3

0x8623,	// (0x000131fc) list_single_2graphic_pane_g4_ParamLimits

0x8623,	// (0x000131fc) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001a316) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001a316) list_single_2graphic_pane_g

0x8634,	// (0x0001320d) list_single_2graphic_pane_t1_ParamLimits

0x8634,	// (0x0001320d) list_single_2graphic_pane_t1

0x8662,	// (0x0001323b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8662,	// (0x0001323b) list_double2_graphic_large_graphic_pane_g1

0x7735,	// (0x0001230e) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7735,	// (0x0001230e) list_double2_graphic_large_graphic_pane_g2

0x7746,	// (0x0001231f) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7746,	// (0x0001231f) list_double2_graphic_large_graphic_pane_g3

0x8672,	// (0x0001324b) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8672,	// (0x0001324b) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001a31f) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001a31f) list_double2_graphic_large_graphic_pane_g

0x867e,	// (0x00013257) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x867e,	// (0x00013257) list_double2_graphic_large_graphic_pane_t1

0x8694,	// (0x0001326d) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8694,	// (0x0001326d) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001a328) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001a328) list_double2_graphic_large_graphic_pane_t

0x87e5,	// (0x000133be) popup_fast_swap_window_ParamLimits

0x87e5,	// (0x000133be) popup_fast_swap_window

0x8801,	// (0x000133da) popup_side_volume_key_window

0x881d,	// (0x000133f6) stacon_top_pane

0x8827,	// (0x00013400) status_pane_ParamLimits

0x8827,	// (0x00013400) status_pane

0x881d,	// (0x000133f6) status_small_pane

0x6cf1,	// (0x000118ca) control_pane

0x6cf1,	// (0x000118ca) stacon_bottom_pane

0x7ae3,	// (0x000126bc) scroll_pane_cp121

0x7ada,	// (0x000126b3) set_content_pane

0x86a6,	// (0x0001327f) bg_active_tab_pane_g1_cp1

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp1

0x86b8,	// (0x00013291) bg_active_tab_pane_g3_cp1

0x86a6,	// (0x0001327f) bg_passive_tab_pane_g1_cp1

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp1

0x86b8,	// (0x00013291) bg_passive_tab_pane_g3_cp1

0x86c1,	// (0x0001329a) bg_active_tab_pane_g1_cp2

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp2

0x86ca,	// (0x000132a3) bg_active_tab_pane_g3_cp2

0x86c1,	// (0x0001329a) bg_passive_tab_pane_g1_cp2

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp2

0x86ca,	// (0x000132a3) bg_passive_tab_pane_g3_cp2

0x86d3,	// (0x000132ac) bg_active_tab_pane_g1_cp3

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp3

0x86dc,	// (0x000132b5) bg_active_tab_pane_g3_cp3

0x86d3,	// (0x000132ac) bg_passive_tab_pane_g1_cp3

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp3

0x86dc,	// (0x000132b5) bg_passive_tab_pane_g3_cp3

0x86e5,	// (0x000132be) bg_active_tab_pane_g1_cp4

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp4

0x86f0,	// (0x000132c9) bg_active_tab_pane_g3_cp4

0x86e5,	// (0x000132be) bg_passive_tab_pane_g1_cp4

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp4

0x86f0,	// (0x000132c9) bg_passive_tab_pane_g3_cp4

0x8739,	// (0x00013312) bg_active_tab_pane_g1_cp5

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp5

0x8742,	// (0x0001331b) bg_active_tab_pane_g3_cp5

0x8739,	// (0x00013312) bg_passive_tab_pane_g1_cp5

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp5

0x8742,	// (0x0001331b) bg_passive_tab_pane_g3_cp5

0x874b,	// (0x00013324) list_set_graphic_pane_ParamLimits

0x874b,	// (0x00013324) list_set_graphic_pane

0x6cf1,	// (0x000118ca) bg_set_opt_pane_cp4

0x8768,	// (0x00013341) list_set_graphic_pane_g1_ParamLimits

0x8768,	// (0x00013341) list_set_graphic_pane_g1

0x8774,	// (0x0001334d) list_set_graphic_pane_g2_ParamLimits

0x8774,	// (0x0001334d) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001a32d) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001a32d) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0001a6ac) volume_small_pane_cp_g

0x8798,	// (0x00013371) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8798,	// (0x00013371) list_double2_large_graphic_pane_g1_cp2

0x87a4,	// (0x0001337d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x87a4,	// (0x0001337d) list_double2_large_graphic_pane_g2_cp2

0x87b5,	// (0x0001338e) list_double2_large_graphic_pane_g3_cp2

0x87bd,	// (0x00013396) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x87bd,	// (0x00013396) list_double2_large_graphic_pane_t1_cp2

0x87d3,	// (0x000133ac) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x87d3,	// (0x000133ac) list_double2_large_graphic_pane_t2_cp2

0xa4d0,	// (0x000150a9) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa4d0,	// (0x000150a9) list_double_large_graphic_pane_g1_cp2

0xa4e1,	// (0x000150ba) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa4e1,	// (0x000150ba) list_double_large_graphic_pane_g2_cp2

0x8943,	// (0x0001351c) list_double_large_graphic_pane_g3_cp2

0xa4f2,	// (0x000150cb) list_double_large_graphic_pane_g4_cp

0xa4fa,	// (0x000150d3) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa4fa,	// (0x000150d3) list_double_large_graphic_pane_t1_cp2

0xa511,	// (0x000150ea) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa511,	// (0x000150ea) list_double_large_graphic_pane_t2_cp2

0x8835,	// (0x0001340e) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8835,	// (0x0001340e) list_double2_graphic_pane_g1_cp2

0x8843,	// (0x0001341c) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8843,	// (0x0001341c) list_double2_graphic_pane_g2_cp2

0x8854,	// (0x0001342d) list_double2_graphic_pane_g3_cp2

0x885e,	// (0x00013437) list_double2_graphic_pane_t1_cp2_ParamLimits

0x885e,	// (0x00013437) list_double2_graphic_pane_t1_cp2

0x8874,	// (0x0001344d) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8874,	// (0x0001344d) list_double2_graphic_pane_t2_cp2

0x8886,	// (0x0001345f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8886,	// (0x0001345f) list_single_number_heading_pane_g1_cp2

0x8892,	// (0x0001346b) list_single_number_heading_pane_g2_cp2

0x889a,	// (0x00013473) list_single_number_heading_pane_t1_cp2_ParamLimits

0x889a,	// (0x00013473) list_single_number_heading_pane_t1_cp2

0x88b0,	// (0x00013489) list_single_number_heading_pane_t2_cp2_ParamLimits

0x88b0,	// (0x00013489) list_single_number_heading_pane_t2_cp2

0x88c2,	// (0x0001349b) list_single_number_heading_pane_t3_cp2_ParamLimits

0x88c2,	// (0x0001349b) list_single_number_heading_pane_t3_cp2

0x8886,	// (0x0001345f) list_single_heading_pane_g1_cp2_ParamLimits

0x8886,	// (0x0001345f) list_single_heading_pane_g1_cp2

0x8892,	// (0x0001346b) list_single_heading_pane_g2_cp2

0x889a,	// (0x00013473) list_single_heading_pane_t1_cp2_ParamLimits

0x889a,	// (0x00013473) list_single_heading_pane_t1_cp2

0xa2d8,	// (0x00014eb1) list_single_heading_pane_t2_cp2_ParamLimits

0xa2d8,	// (0x00014eb1) list_single_heading_pane_t2_cp2

0xa220,	// (0x00014df9) list_double_graphic_pane_g1_cp2_ParamLimits

0xa220,	// (0x00014df9) list_double_graphic_pane_g1_cp2

0xa22c,	// (0x00014e05) list_double_graphic_pane_g2_cp2_ParamLimits

0xa22c,	// (0x00014e05) list_double_graphic_pane_g2_cp2

0xa23b,	// (0x00014e14) list_double_graphic_pane_g3_cp2

0xa243,	// (0x00014e1c) list_double_graphic_pane_t1_cp2_ParamLimits

0xa243,	// (0x00014e1c) list_double_graphic_pane_t1_cp2

0xa259,	// (0x00014e32) list_double_graphic_pane_t2_cp2_ParamLimits

0xa259,	// (0x00014e32) list_double_graphic_pane_t2_cp2

0x8937,	// (0x00013510) list_double_number_pane_g1_cp2_ParamLimits

0x8937,	// (0x00013510) list_double_number_pane_g1_cp2

0x8943,	// (0x0001351c) list_double_number_pane_g2_cp2

0xa1e4,	// (0x00014dbd) list_double_number_pane_t1_cp2_ParamLimits

0xa1e4,	// (0x00014dbd) list_double_number_pane_t1_cp2

0xa1f8,	// (0x00014dd1) list_double_number_pane_t2_cp2_ParamLimits

0xa1f8,	// (0x00014dd1) list_double_number_pane_t2_cp2

0xa20e,	// (0x00014de7) list_double_number_pane_t3_cp2_ParamLimits

0xa20e,	// (0x00014de7) list_double_number_pane_t3_cp2

0xa0cd,	// (0x00014ca6) list_single_graphic_pane_g1_cp2_ParamLimits

0xa0cd,	// (0x00014ca6) list_single_graphic_pane_g1_cp2

0x899b,	// (0x00013574) list_single_graphic_pane_g2_cp2_ParamLimits

0x899b,	// (0x00013574) list_single_graphic_pane_g2_cp2

0x89a7,	// (0x00013580) list_single_graphic_pane_g3_cp2

0xa0a3,	// (0x00014c7c) list_single_graphic_pane_t1_cp2_ParamLimits

0xa0a3,	// (0x00014c7c) list_single_graphic_pane_t1_cp2

0x899b,	// (0x00013574) list_single_number_pane_g1_cp2_ParamLimits

0x899b,	// (0x00013574) list_single_number_pane_g1_cp2

0x89a7,	// (0x00013580) list_single_number_pane_g2_cp2

0xa0a3,	// (0x00014c7c) list_single_number_pane_t1_cp2_ParamLimits

0xa0a3,	// (0x00014c7c) list_single_number_pane_t1_cp2

0xa0b9,	// (0x00014c92) list_single_number_pane_t2_cp2_ParamLimits

0xa0b9,	// (0x00014c92) list_single_number_pane_t2_cp2

0x87a4,	// (0x0001337d) list_double2_pane_g1_cp2_ParamLimits

0x87a4,	// (0x0001337d) list_double2_pane_g1_cp2

0x87b5,	// (0x0001338e) list_double2_pane_g2_cp2

0x890f,	// (0x000134e8) list_double2_pane_t1_cp2_ParamLimits

0x890f,	// (0x000134e8) list_double2_pane_t1_cp2

0x8925,	// (0x000134fe) list_double2_pane_t2_cp2_ParamLimits

0x8925,	// (0x000134fe) list_double2_pane_t2_cp2

0x8937,	// (0x00013510) list_double_pane_g1_cp2_ParamLimits

0x8937,	// (0x00013510) list_double_pane_g1_cp2

0x8943,	// (0x0001351c) list_double_pane_g2_cp2

0x894b,	// (0x00013524) list_double_pane_t1_cp2_ParamLimits

0x894b,	// (0x00013524) list_double_pane_t1_cp2

0x8961,	// (0x0001353a) list_double_pane_t2_cp2_ParamLimits

0x8961,	// (0x0001353a) list_double_pane_t2_cp2

0x898b,	// (0x00013564) list_single_pane_cp2_g3

0x899b,	// (0x00013574) list_single_pane_g1_cp2_ParamLimits

0x899b,	// (0x00013574) list_single_pane_g1_cp2

0x89a7,	// (0x00013580) list_single_pane_g2_cp2

0x89af,	// (0x00013588) list_single_pane_t1_cp2_ParamLimits

0x89af,	// (0x00013588) list_single_pane_t1_cp2

0x89c7,	// (0x000135a0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x89c7,	// (0x000135a0) list_single_large_graphic_pane_g1_cp2

0x89d3,	// (0x000135ac) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x89d3,	// (0x000135ac) list_single_large_graphic_pane_g2_cp2

0x89df,	// (0x000135b8) list_single_large_graphic_pane_g3_cp2

0x89e7,	// (0x000135c0) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x89e7,	// (0x000135c0) list_single_large_graphic_pane_g4_cp1

0x8a01,	// (0x000135da) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8a01,	// (0x000135da) list_single_large_graphic_pane_t1_cp2

0xa06f,	// (0x00014c48) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa06f,	// (0x00014c48) list_single_graphic_heading_pane_g1_cp2

0xa03c,	// (0x00014c15) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa03c,	// (0x00014c15) list_single_graphic_heading_pane_g4_cp2

0x89a7,	// (0x00013580) list_single_graphic_heading_pane_g5_cp2

0xa07b,	// (0x00014c54) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa07b,	// (0x00014c54) list_single_graphic_heading_pane_t1_cp2

0xa091,	// (0x00014c6a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa091,	// (0x00014c6a) list_single_graphic_heading_pane_t2_cp2

0xa030,	// (0x00014c09) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa030,	// (0x00014c09) list_single_2graphic_pane_g1_cp2

0xa03c,	// (0x00014c15) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa03c,	// (0x00014c15) list_single_2graphic_pane_g2_cp2

0x89a7,	// (0x00013580) list_single_2graphic_pane_g3_cp2

0xa04d,	// (0x00014c26) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa04d,	// (0x00014c26) list_single_2graphic_pane_g4_cp2

0xa059,	// (0x00014c32) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa059,	// (0x00014c32) list_single_2graphic_pane_t1_cp2

0x6ce7,	// (0x000118c0) list_highlight_pane_g10_cp1

0x9c08,	// (0x000147e1) list_highlight_pane_g1_cp1

0x9c10,	// (0x000147e9) list_highlight_pane_g2_cp1

0x9c18,	// (0x000147f1) list_highlight_pane_g3_cp1

0x9c20,	// (0x000147f9) list_highlight_pane_g4_cp1

0x9c28,	// (0x00014801) list_highlight_pane_g5_cp1

0x9c30,	// (0x00014809) list_highlight_pane_g6_cp1

0x9c38,	// (0x00014811) list_highlight_pane_g7_cp1

0x9c40,	// (0x00014819) list_highlight_pane_g8_cp1

0x9c48,	// (0x00014821) list_highlight_pane_g9_cp1

0x9b28,	// (0x00014701) form_field_slider_pane_t3

0x9b36,	// (0x0001470f) form_field_slider_pane_t4

0x9b44,	// (0x0001471d) slider_form_pane_ParamLimits

0x9b44,	// (0x0001471d) slider_form_pane

0x6cf1,	// (0x000118ca) control_abbreviations

0x6cf1,	// (0x000118ca) control_conventions

0x6cf1,	// (0x000118ca) control_definitions

0x6cf1,	// (0x000118ca) format_table_attribute

0xa322,	// (0x00014efb) bg_popup_preview_window_pane_g9

0x6cf1,	// (0x000118ca) format_table_data2

0x6cf1,	// (0x000118ca) format_table_data3

0x6cf1,	// (0x000118ca) format_table_data_example

0x0008,

0x6cf1,	// (0x000118ca) intro_purpose

0xf8f0,	// (0x0001a4c9) bg_popup_preview_window_pane_g

0x6cf1,	// (0x000118ca) texts_category

0x6cf1,	// (0x000118ca) texts_graphics

0x8a17,	// (0x000135f0) text_digital

0x8a26,	// (0x000135ff) text_primary

0x8a35,	// (0x0001360e) text_primary_small

0x8a44,	// (0x0001361d) text_secondary

0x8a53,	// (0x0001362c) text_title

0xab6e,	// (0x00015747) bg_passive_tab_pane_g1_cp3_srt

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp3_srt

0xab77,	// (0x00015750) bg_passive_tab_pane_g3_cp3_srt

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp3_srt_ParamLimits

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp3_srt

0xab80,	// (0x00015759) tabs_4_active_pane_srt_g1

0xab88,	// (0x00015761) tabs_4_active_pane_srt_t1_ParamLimits

0xab88,	// (0x00015761) tabs_4_active_pane_srt_t1

0xab6e,	// (0x00015747) bg_active_tab_pane_g1_cp3_copy1

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp3_copy1

0xab77,	// (0x00015750) bg_active_tab_pane_g3_cp3_copy1

0x6dd1,	// (0x000119aa) tabs_2_long_active_pane_srt_ParamLimits

0x6dd1,	// (0x000119aa) tabs_2_long_active_pane_srt

0x6dd1,	// (0x000119aa) tabs_2_long_passive_pane_srt_ParamLimits

0x6dd1,	// (0x000119aa) tabs_2_long_passive_pane_srt

0x7f30,	// (0x00012b09) bg_passive_tab_pane_cp4_srt_ParamLimits

0x7f30,	// (0x00012b09) bg_passive_tab_pane_cp4_srt

0xa775,	// (0x0001534e) bg_passive_tab_pane_g1_cp4_srt

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp4_srt

0xa77e,	// (0x00015357) bg_passive_tab_pane_g3_cp4_srt

0x7f0f,	// (0x00012ae8) bg_active_tab_pane_cp4_srt_ParamLimits

0x7f0f,	// (0x00012ae8) bg_active_tab_pane_cp4_srt

0xa787,	// (0x00015360) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa787,	// (0x00015360) tabs_2_long_active_pane_srt_t1

0xa775,	// (0x0001534e) bg_active_tab_pane_g1_cp4_srt

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp4_srt

0xa77e,	// (0x00015357) bg_active_tab_pane_g3_cp4_srt

0x7066,	// (0x00011c3f) tabs_3_long_active_pane_srt_ParamLimits

0x7066,	// (0x00011c3f) tabs_3_long_active_pane_srt

0x7066,	// (0x00011c3f) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7066,	// (0x00011c3f) tabs_3_long_passive_pane_cp_srt

0x7066,	// (0x00011c3f) tabs_3_long_passive_pane_srt_ParamLimits

0x7066,	// (0x00011c3f) tabs_3_long_passive_pane_srt

0x7f30,	// (0x00012b09) bg_passive_tab_pane_cp5_srt_ParamLimits

0x7f30,	// (0x00012b09) bg_passive_tab_pane_cp5_srt

0x8739,	// (0x00013312) bg_passive_tab_pane_g1_cp5_srt

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp5_srt

0x8742,	// (0x0001331b) bg_passive_tab_pane_g3_cp5_srt

0x7f0f,	// (0x00012ae8) bg_active_tab_pane_cp5_srt_ParamLimits

0x7f0f,	// (0x00012ae8) bg_active_tab_pane_cp5_srt

0xa763,	// (0x0001533c) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa763,	// (0x0001533c) tabs_3_long_active_pane_srt_t1

0x8739,	// (0x00013312) bg_active_tab_pane_g1_cp5_srt

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp5_srt

0x8742,	// (0x0001331b) bg_active_tab_pane_g3_cp5_srt

0xa755,	// (0x0001532e) navi_text_pane_srt_t1

0xa74d,	// (0x00015326) navi_icon_pane_srt_g1

0x8c1a,	// (0x000137f3) midp_editing_number_pane_srt

0x8a62,	// (0x0001363b) midp_ticker_pane_srt

0x8c22,	// (0x000137fb) midp_ticker_pane_srt_g1

0x8c2a,	// (0x00013803) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001a34c) midp_ticker_pane_srt_g

0x8c32,	// (0x0001380b) midp_ticker_pane_srt_t1

0xa73e,	// (0x00015317) midp_editing_number_pane_t1_copy1

0x7f30,	// (0x00012b09) listscroll_midp_pane

0x7f30,	// (0x00012b09) midp_form_pane

0x8acc,	// (0x000136a5) midp_info_popup_window_ParamLimits

0x8acc,	// (0x000136a5) midp_info_popup_window

0x7df8,	// (0x000129d1) bg_popup_sub_pane_cp50_ParamLimits

0x7df8,	// (0x000129d1) bg_popup_sub_pane_cp50

0x9834,	// (0x0001440d) listscroll_midp_info_pane_ParamLimits

0x9834,	// (0x0001440d) listscroll_midp_info_pane

0x981c,	// (0x000143f5) listscroll_form_midp_pane_ParamLimits

0x981c,	// (0x000143f5) listscroll_form_midp_pane

0x9828,	// (0x00014401) scroll_bar_cp050

0x97fc,	// (0x000143d5) list_midp_pane

0xb858,	// (0x00016431) signal_pane_g2_cp

0x9736,	// (0x0001430f) listscroll_midp_info_pane_t1_ParamLimits

0x9736,	// (0x0001430f) listscroll_midp_info_pane_t1

0x974e,	// (0x00014327) listscroll_midp_info_pane_t2_ParamLimits

0x974e,	// (0x00014327) listscroll_midp_info_pane_t2

0x978c,	// (0x00014365) listscroll_midp_info_pane_t3_ParamLimits

0x978c,	// (0x00014365) listscroll_midp_info_pane_t3

0x97c6,	// (0x0001439f) listscroll_midp_info_pane_t4_ParamLimits

0x97c6,	// (0x0001439f) listscroll_midp_info_pane_t4

0x0003,

0xf82b,	// (0x0001a404) listscroll_midp_info_pane_t_ParamLimits

0xf82b,	// (0x0001a404) listscroll_midp_info_pane_t

0x7ebc,	// (0x00012a95) scroll_pane_cp21

0x96d4,	// (0x000142ad) form_midp_field_choice_group_pane

0x96dd,	// (0x000142b6) form_midp_field_text_pane

0x971c,	// (0x000142f5) form_midp_field_time_pane

0x9724,	// (0x000142fd) form_midp_gauge_slider_pane

0x972d,	// (0x00014306) form_midp_gauge_wait_pane

0x6cf1,	// (0x000118ca) form_midp_image_pane

0x96a5,	// (0x0001427e) list_single_midp_pane_ParamLimits

0x96a5,	// (0x0001427e) list_single_midp_pane

0x965d,	// (0x00014236) form_midp_field_text_pane_t1

0x9418,	// (0x00013ff1) input_focus_pane_cp050

0x9694,	// (0x0001426d) list_midp_form_text_pane

0x962c,	// (0x00014205) form_midp_field_choice_group_pane_t1

0x963a,	// (0x00014213) input_focus_pane_cp051

0x964e,	// (0x00014227) list_midp_choice_pane

0x6cf1,	// (0x000118ca) status_idle_pane

0x9610,	// (0x000141e9) form_midp_field_time_pane_t1

0x6ce7,	// (0x000118c0) wait_anim_pane_g2_copy1

0x961e,	// (0x000141f7) form_midp_field_time_pane_t2

0x0001,

0x8b7a,	// (0x00013753) aid_navinavi_width_2_pane

0xf826,	// (0x0001a3ff) form_midp_field_time_pane_t

0x6cf1,	// (0x000118ca) input_focus_pane_cp052

0x6cf1,	// (0x000118ca) bg_input_focus_pane_cp040

0x95d0,	// (0x000141a9) form_midp_gauge_slider_pane_t1

0x95de,	// (0x000141b7) form_midp_gauge_slider_pane_t2

0x95ec,	// (0x000141c5) form_midp_gauge_slider_pane_t3

0x95fa,	// (0x000141d3) form_midp_gauge_slider_pane_t4

0x0003,

0xf81d,	// (0x0001a3f6) form_midp_gauge_slider_pane_t

0x9608,	// (0x000141e1) form_midp_slider_pane

0x6dd1,	// (0x000119aa) bg_input_focus_pane_cp041_ParamLimits

0x6dd1,	// (0x000119aa) bg_input_focus_pane_cp041

0x959d,	// (0x00014176) form_midp_gauge_wait_pane_t1_ParamLimits

0x959d,	// (0x00014176) form_midp_gauge_wait_pane_t1

0x95af,	// (0x00014188) form_midp_gauge_wait_pane_t2_ParamLimits

0x95af,	// (0x00014188) form_midp_gauge_wait_pane_t2

0x0001,

0xf818,	// (0x0001a3f1) form_midp_gauge_wait_pane_t_ParamLimits

0xf818,	// (0x0001a3f1) form_midp_gauge_wait_pane_t

0x95c1,	// (0x0001419a) form_midp_wait_pane_ParamLimits

0x95c1,	// (0x0001419a) form_midp_wait_pane

0x9567,	// (0x00014140) form_midp_image_pane_g1

0x9570,	// (0x00014149) form_midp_image_pane_t1

0x957f,	// (0x00014158) form_midp_image_pane_t2

0x958e,	// (0x00014167) form_midp_image_pane_t3

0x0002,

0xf811,	// (0x0001a3ea) form_midp_image_pane_t

0x954f,	// (0x00014128) list_single_midp_pane_g1

0x9558,	// (0x00014131) list_single_midp_pane_t1

0x9527,	// (0x00014100) list_midp_form_item_pane_ParamLimits

0x9527,	// (0x00014100) list_midp_form_item_pane

0x8b22,	// (0x000136fb) list_midp_form_item_pane_t1

0x8b31,	// (0x0001370a) midp_ticker_pane_g1

0x8b3d,	// (0x00013716) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001a332) midp_ticker_pane_g

0x8b49,	// (0x00013722) midp_ticker_pane_t1

0xaa04,	// (0x000155dd) midp_editing_number_pane_t1

0xa9e2,	// (0x000155bb) midp_editing_number_pane

0xa9f1,	// (0x000155ca) midp_ticker_pane

0xa706,	// (0x000152df) ai_message_heading_pane

0x6cf1,	// (0x000118ca) bg_popup_window_pane_cp14

0xa70e,	// (0x000152e7) listscroll_ai_message_pane

0xa690,	// (0x00015269) ai_message_heading_pane_g1_ParamLimits

0xa690,	// (0x00015269) ai_message_heading_pane_g1

0xa69c,	// (0x00015275) ai_message_heading_pane_g2_ParamLimits

0xa69c,	// (0x00015275) ai_message_heading_pane_g2

0xa6a8,	// (0x00015281) ai_message_heading_pane_g3_ParamLimits

0xa6a8,	// (0x00015281) ai_message_heading_pane_g3

0xa6b4,	// (0x0001528d) ai_message_heading_pane_g4_ParamLimits

0xa6b4,	// (0x0001528d) ai_message_heading_pane_g4

0x0003,

0xf952,	// (0x0001a52b) ai_message_heading_pane_g_ParamLimits

0xf952,	// (0x0001a52b) ai_message_heading_pane_g

0xa6c0,	// (0x00015299) ai_message_heading_pane_t1_ParamLimits

0xa6c0,	// (0x00015299) ai_message_heading_pane_t1

0xa6da,	// (0x000152b3) ai_message_heading_pane_t2_ParamLimits

0xa6da,	// (0x000152b3) ai_message_heading_pane_t2

0x0001,

0xf95b,	// (0x0001a534) ai_message_heading_pane_t_ParamLimits

0xf95b,	// (0x0001a534) ai_message_heading_pane_t

0xa6ec,	// (0x000152c5) bg_popup_heading_pane_cp1_ParamLimits

0xa6ec,	// (0x000152c5) bg_popup_heading_pane_cp1

0xa67e,	// (0x00015257) list_ai_message_pane_ParamLimits

0xa67e,	// (0x00015257) list_ai_message_pane

0x7ebc,	// (0x00012a95) scroll_pane_cp10

0xa61a,	// (0x000151f3) list_ai_message_pane_g1

0xa622,	// (0x000151fb) list_ai_message_pane_g2

0x0001,

0xf92f,	// (0x0001a508) list_ai_message_pane_g

0xa62a,	// (0x00015203) list_ai_message_pane_t1_ParamLimits

0xa62a,	// (0x00015203) list_ai_message_pane_t1

0xa63f,	// (0x00015218) list_ai_message_pane_t2_ParamLimits

0xa63f,	// (0x00015218) list_ai_message_pane_t2

0xa654,	// (0x0001522d) list_ai_message_pane_t3_ParamLimits

0xa654,	// (0x0001522d) list_ai_message_pane_t3

0xa669,	// (0x00015242) list_ai_message_pane_t4_ParamLimits

0xa669,	// (0x00015242) list_ai_message_pane_t4

0x0003,

0xf934,	// (0x0001a50d) list_ai_message_pane_t_ParamLimits

0xf934,	// (0x0001a50d) list_ai_message_pane_t

0xa605,	// (0x000151de) cell_ai_soft_ind_pane_ParamLimits

0xa605,	// (0x000151de) cell_ai_soft_ind_pane

0x8b5b,	// (0x00013734) cell_ai_soft_ind_pane_g1_ParamLimits

0x8b5b,	// (0x00013734) cell_ai_soft_ind_pane_g1

0x6cf1,	// (0x000118ca) grid_highlight_cp1

0x8b68,	// (0x00013741) text_secondary_cp56_ParamLimits

0x8b68,	// (0x00013741) text_secondary_cp56

0xa5da,	// (0x000151b3) example_general_pane_ParamLimits

0xa5da,	// (0x000151b3) example_general_pane

0xa5e6,	// (0x000151bf) example_parent_pane_g1_ParamLimits

0xa5e6,	// (0x000151bf) example_parent_pane_g1

0xa5f2,	// (0x000151cb) example_parent_pane_t1_ParamLimits

0xa5f2,	// (0x000151cb) example_parent_pane_t1

0x5768,	// (0x00010341) popup_preview_text_window_ParamLimits

0x5768,	// (0x00010341) popup_preview_text_window

0x8993,	// (0x0001356c) list_single_pane_cp2_g4

0x711c,	// (0x00011cf5) bg_popup_preview_window_pane_ParamLimits

0x711c,	// (0x00011cf5) bg_popup_preview_window_pane

0xa32a,	// (0x00014f03) popup_preview_text_window_t1_ParamLimits

0xa32a,	// (0x00014f03) popup_preview_text_window_t1

0xa348,	// (0x00014f21) popup_preview_text_window_t2_ParamLimits

0xa348,	// (0x00014f21) popup_preview_text_window_t2

0xa391,	// (0x00014f6a) popup_preview_text_window_t3_ParamLimits

0xa391,	// (0x00014f6a) popup_preview_text_window_t3

0xa3d6,	// (0x00014faf) popup_preview_text_window_t4_ParamLimits

0xa3d6,	// (0x00014faf) popup_preview_text_window_t4

0x0004,

0xf903,	// (0x0001a4dc) popup_preview_text_window_t_ParamLimits

0xf903,	// (0x0001a4dc) popup_preview_text_window_t

0xa454,	// (0x0001502d) scroll_pane_cp11

0x92ea,	// (0x00013ec3) bg_popup_preview_window_pane_g1

0xa2ea,	// (0x00014ec3) bg_popup_preview_window_pane_g2

0xa2f2,	// (0x00014ecb) bg_popup_preview_window_pane_g3

0xa2fa,	// (0x00014ed3) bg_popup_preview_window_pane_g4

0xa302,	// (0x00014edb) bg_popup_preview_window_pane_g5

0xa30a,	// (0x00014ee3) bg_popup_preview_window_pane_g6

0xa312,	// (0x00014eeb) bg_popup_preview_window_pane_g7

0xa31a,	// (0x00014ef3) bg_popup_preview_window_pane_g8

0x495a,	// (0x0000f533) aid_popup_width_pane

0x5746,	// (0x0001031f) popup_midp_note_alarm_window_ParamLimits

0x5746,	// (0x0001031f) popup_midp_note_alarm_window

0x7ba4,	// (0x0001277d) data_form_pane_ParamLimits

0x7bb0,	// (0x00012789) form_field_data_pane_g1

0x7bba,	// (0x00012793) form_field_data_pane_t1_ParamLimits

0x7bd2,	// (0x000127ab) input_focus_pane_ParamLimits

0x7be0,	// (0x000127b9) data_form_wide_pane_ParamLimits

0x7bec,	// (0x000127c5) form_field_data_wide_pane_g1

0x7c0c,	// (0x000127e5) form_field_data_wide_pane_t1_ParamLimits

0x73c8,	// (0x00011fa1) input_focus_pane_cp6_ParamLimits

0x7e69,	// (0x00012a42) input_popup_find_pane_g1_ParamLimits

0x7e69,	// (0x00012a42) input_popup_find_pane_g1

0x4ed6,	// (0x0000faaf) aid_navi_side_left_pane

0x4eeb,	// (0x0000fac4) aid_navi_side_right_pane

0x9d03,	// (0x000148dc) bg_popup_window_pane_cp30_ParamLimits

0x9d03,	// (0x000148dc) bg_popup_window_pane_cp30

0x9d7d,	// (0x00014956) popup_midp_note_alarm_window_g1_ParamLimits

0x9d7d,	// (0x00014956) popup_midp_note_alarm_window_g1

0x9dad,	// (0x00014986) popup_midp_note_alarm_window_t1_ParamLimits

0x9dad,	// (0x00014986) popup_midp_note_alarm_window_t1

0x9e4e,	// (0x00014a27) popup_midp_note_alarm_window_t2_ParamLimits

0x9e4e,	// (0x00014a27) popup_midp_note_alarm_window_t2

0x9efc,	// (0x00014ad5) popup_midp_note_alarm_window_t3_ParamLimits

0x9efc,	// (0x00014ad5) popup_midp_note_alarm_window_t3

0x9f2e,	// (0x00014b07) popup_midp_note_alarm_window_t4_ParamLimits

0x9f2e,	// (0x00014b07) popup_midp_note_alarm_window_t4

0x9f54,	// (0x00014b2d) popup_midp_note_alarm_window_t5_ParamLimits

0x9f54,	// (0x00014b2d) popup_midp_note_alarm_window_t5

0x000a,

0xf8a0,	// (0x0001a479) popup_midp_note_alarm_window_t_ParamLimits

0xf8a0,	// (0x0001a479) popup_midp_note_alarm_window_t

0xa000,	// (0x00014bd9) wait_bar_pane_cp1_ParamLimits

0xa000,	// (0x00014bd9) wait_bar_pane_cp1

0x6cf1,	// (0x000118ca) wait_anim_pane_copy1

0x6cf1,	// (0x000118ca) wait_border_pane_copy1

0x99e9,	// (0x000145c2) wait_border_pane_g1_copy1

0x7c23,	// (0x000127fc) form_field_popup_pane_g1

0x7c2b,	// (0x00012804) form_field_popup_pane_t1_ParamLimits

0x7bd2,	// (0x000127ab) input_focus_pane_cp7_ParamLimits

0x7c43,	// (0x0001281c) list_form_pane_ParamLimits

0x7c4f,	// (0x00012828) form_field_popup_wide_pane_g1

0x7c57,	// (0x00012830) form_field_popup_wide_pane_t1_ParamLimits

0x7bd2,	// (0x000127ab) input_focus_pane_cp8_ParamLimits

0x7c6c,	// (0x00012845) list_form_wide_pane_ParamLimits

0xabfa,	// (0x000157d3) aid_size_cell_graphic_pane

0x7d43,	// (0x0001291c) data_form_pane_t1_ParamLimits

0xa9af,	// (0x00015588) data_form_wide_pane_t1_ParamLimits

0x8e89,	// (0x00013a62) bg_status_flat_pane

0x6d31,	// (0x0001190a) title_pane_t1_ParamLimits

0x6d99,	// (0x00011972) title_pane_t2_ParamLimits

0x6dbf,	// (0x00011998) title_pane_t3_ParamLimits

0xf55d,	// (0x0001a136) title_pane_t_ParamLimits

0x8337,	// (0x00012f10) level_1_signal_ParamLimits

0x8349,	// (0x00012f22) level_2_signal_ParamLimits

0x835c,	// (0x00012f35) level_3_signal_ParamLimits

0x836f,	// (0x00012f48) level_4_signal_ParamLimits

0x8382,	// (0x00012f5b) level_5_signal_ParamLimits

0x8395,	// (0x00012f6e) level_6_signal_ParamLimits

0x83a8,	// (0x00012f81) level_7_signal_ParamLimits

0x8337,	// (0x00012f10) level_1_battery_ParamLimits

0x8349,	// (0x00012f22) level_2_battery_ParamLimits

0x835c,	// (0x00012f35) level_3_battery_ParamLimits

0x836f,	// (0x00012f48) level_4_battery_ParamLimits

0x8382,	// (0x00012f5b) level_5_battery_ParamLimits

0x8395,	// (0x00012f6e) level_6_battery_ParamLimits

0x83a8,	// (0x00012f81) level_7_battery_ParamLimits

0x9c08,	// (0x000147e1) bg_status_flat_pane_g1

0x9c10,	// (0x000147e9) bg_status_flat_pane_g2

0x9c18,	// (0x000147f1) bg_status_flat_pane_g3

0x9c20,	// (0x000147f9) bg_status_flat_pane_g4

0x9c28,	// (0x00014801) bg_status_flat_pane_g5

0x9c30,	// (0x00014809) bg_status_flat_pane_g6

0x9c38,	// (0x00014811) bg_status_flat_pane_g7

0x6de7,	// (0x000119c0) tabs_3_active_pane_t1_ParamLimits

0x6de7,	// (0x000119c0) tabs_3_passive_pane_t1_ParamLimits

0x6e01,	// (0x000119da) tabs_4_active_pane_t1_ParamLimits

0x6e01,	// (0x000119da) tabs_4_1_passive_pane_t1_ParamLimits

0x7efd,	// (0x00012ad6) tabs_2_active_pane_t1_ParamLimits

0x7efd,	// (0x00012ad6) tabs_2_passive_pane_t1_ParamLimits

0x7f0f,	// (0x00012ae8) bg_active_tab_pane_cp4_ParamLimits

0x7f1d,	// (0x00012af6) tabs_2_long_active_pane_t1_ParamLimits

0x7f30,	// (0x00012b09) bg_passive_tab_pane_cp4_ParamLimits

0x5a8d,	// (0x00010666) list_single_midp_graphic_pane_t1_ParamLimits

0x7f0f,	// (0x00012ae8) bg_active_tab_pane_cp5_ParamLimits

0x7f3c,	// (0x00012b15) tabs_3_long_active_pane_t1_ParamLimits

0x7f30,	// (0x00012b09) bg_passive_tab_pane_cp5_ParamLimits

0x5a8d,	// (0x00010666) list_single_midp_graphic_pane_t1

0x8e89,	// (0x00013a62) bg_status_flat_pane_ParamLimits

0x8f4c,	// (0x00013b25) indicator_pane_cp2_ParamLimits

0x8f4c,	// (0x00013b25) indicator_pane_cp2

0x9077,	// (0x00013c50) navi_pane_srt_ParamLimits

0x9077,	// (0x00013c50) navi_pane_srt

0x909b,	// (0x00013c74) popup_clock_digital_analogue_window_cp1

0x6ec8,	// (0x00011aa1) indicator_pane_t1

0x8a62,	// (0x0001363b) copy_highlight_pane

0x8a62,	// (0x0001363b) cursor_graphics_pane

0x8a62,	// (0x0001363b) graphic_within_text_pane

0x8a62,	// (0x0001363b) link_highlight_pane

0xa417,	// (0x00014ff0) popup_preview_text_window_t5_ParamLimits

0xa417,	// (0x00014ff0) popup_preview_text_window_t5

0x8b82,	// (0x0001375b) cursor_digital_pane

0x8b82,	// (0x0001375b) cursor_primary_pane

0x8b93,	// (0x0001376c) cursor_primary_small_pane

0x8b9b,	// (0x00013774) cursor_secondary_pane

0x8ba3,	// (0x0001377c) cursor_title_pane

0x8b82,	// (0x0001375b) link_highlight_digital_pane

0x8b8a,	// (0x00013763) link_highlight_primary_pane

0x8b93,	// (0x0001376c) link_highlight_primary_small_pane

0x8b9b,	// (0x00013774) link_highlight_secondary_pane

0x8ba3,	// (0x0001377c) link_highlight_title_pane

0x8b82,	// (0x0001375b) copy_highlight_digital_pane

0x8b82,	// (0x0001375b) copy_highlight_primary_pane

0x8b93,	// (0x0001376c) copy_highlight_primary_small_pane

0x8b9b,	// (0x00013774) copy_highlight_secondary_pane

0x8ba3,	// (0x0001377c) copy_highlight_title_pane

0x8b9b,	// (0x00013774) graphic_text_digital_pane

0x9ca6,	// (0x0001487f) graphic_text_primary_pane

0x9caf,	// (0x00014888) graphic_text_primary_small_pane

0x8b93,	// (0x0001376c) graphic_text_secondary_pane

0x8b82,	// (0x0001375b) graphic_text_title_pane

0x8bab,	// (0x00013784) cursor_primary_pane_g1

0x9c98,	// (0x00014871) cursor_text_primary_t1

0x9c80,	// (0x00014859) cursor_primary_small_pane_g1

0x9c8a,	// (0x00014863) cursor_text_primary_small_t1

0x9c68,	// (0x00014841) cursor_primary_small_pane_g1_copy1

0x9c72,	// (0x0001484b) cursor_text_primary_small_t1_copy1

0x9c50,	// (0x00014829) cursor_text_title_t1

0x9c5e,	// (0x00014837) cursor_title_pane_g1

0x8bab,	// (0x00013784) cursor_digital_pane_g1

0x8bb5,	// (0x0001378e) cursor_text_digital_t1

0x8bda,	// (0x000137b3) link_highlight_primary_pane_g1

0x9bf9,	// (0x000147d2) link_highlight_primary_pane_t1

0x8bc3,	// (0x0001379c) link_highlight_primary_small_pane_g1

0x8bcb,	// (0x000137a4) link_highlight_primary_small_pane_t1

0x8bda,	// (0x000137b3) link_highlight_secondary_pane_g1

0x8be2,	// (0x000137bb) link_highlight_secondary_pane_t1

0x9b6d,	// (0x00014746) link_highlight_title_pane_g1

0x9b75,	// (0x0001474e) link_highlight_title_pane_t1

0x9b56,	// (0x0001472f) link_highlight_digital_pane_g1

0x9b5e,	// (0x00014737) link_highlight_digital_pane_t1

0x9a2e,	// (0x00014607) copy_highlight_primary_pane_g1

0x9a36,	// (0x0001460f) copy_highlight_primary_pane_t1

0x9a08,	// (0x000145e1) copy_highlight_primary_small_pane_g1

0x9a1f,	// (0x000145f8) copy_highlight_primary_small_pane_t1

0x8bf1,	// (0x000137ca) copy_highlight_secondary_pane_g1

0x8bf9,	// (0x000137d2) copy_highlight_secondary_pane_t1

0x9a08,	// (0x000145e1) copy_highlight_title_pane_g1

0x9a10,	// (0x000145e9) copy_highlight_title_pane_t1

0x9a2e,	// (0x00014607) copy_highlight_digital_pane_g1

0xadc4,	// (0x0001599d) copy_highlight_digital_pane_t1

0xad18,	// (0x000158f1) graphic_text_primary_pane_g1

0xada8,	// (0x00015981) graphic_text_primary_pane_t1

0xadb6,	// (0x0001598f) graphic_text_primary_pane_t2

0x0001,

0xf9cf,	// (0x0001a5a8) graphic_text_primary_pane_t

0xad84,	// (0x0001595d) graphic_text_primary_small_pane_g1

0xad8c,	// (0x00015965) graphic_text_primary_small_pane_t1

0xad9a,	// (0x00015973) graphic_text_primary_small_pane_t2

0x0001,

0xf9ca,	// (0x0001a5a3) graphic_text_primary_small_pane_t

0xad60,	// (0x00015939) graphic_text_secondary_pane_g1

0xad68,	// (0x00015941) graphic_text_secondary_pane_t1

0xad76,	// (0x0001594f) graphic_text_secondary_pane_t2

0x0001,

0xf9c5,	// (0x0001a59e) graphic_text_secondary_pane_t

0xad3c,	// (0x00015915) graphic_text_title_pane_g1

0xad44,	// (0x0001591d) graphic_text_title_pane_t1

0xad52,	// (0x0001592b) graphic_text_title_pane_t2

0x0001,

0xf9c0,	// (0x0001a599) graphic_text_title_pane_t

0xad18,	// (0x000158f1) graphic_text_digital_pane_g1

0xad20,	// (0x000158f9) graphic_text_digital_pane_t1

0xad2e,	// (0x00015907) graphic_text_digital_pane_t2

0x0001,

0xf9bb,	// (0x0001a594) graphic_text_digital_pane_t

0x6dd1,	// (0x000119aa) navi_icon_pane_srt_ParamLimits

0x6dd1,	// (0x000119aa) navi_icon_pane_srt

0x6cf1,	// (0x000118ca) navi_midp_pane_srt

0x6cf1,	// (0x000118ca) navi_navi_pane_srt

0x6dd1,	// (0x000119aa) navi_text_pane_srt_ParamLimits

0x6dd1,	// (0x000119aa) navi_text_pane_srt

0xace3,	// (0x000158bc) navi_navi_icon_text_pane_srt

0xaceb,	// (0x000158c4) navi_navi_pane_srt_g1_ParamLimits

0xaceb,	// (0x000158c4) navi_navi_pane_srt_g1

0xacfd,	// (0x000158d6) navi_navi_pane_srt_g2_ParamLimits

0xacfd,	// (0x000158d6) navi_navi_pane_srt_g2

0x0001,

0xf9b6,	// (0x0001a58f) navi_navi_pane_srt_g_ParamLimits

0xf9b6,	// (0x0001a58f) navi_navi_pane_srt_g

0xad0f,	// (0x000158e8) navi_navi_tabs_pane_srt

0xace3,	// (0x000158bc) navi_navi_text_pane_srt

0xace3,	// (0x000158bc) navi_navi_volume_pane_srt

0xacd4,	// (0x000158ad) navi_navi_text_pane_srt_t1

0x5e07,	// (0x000109e0) navi_navi_volume_pane_srt_g1

0x5e0f,	// (0x000109e8) volume_small_pane_srt_ParamLimits

0x5e0f,	// (0x000109e8) volume_small_pane_srt

0x51b6,	// (0x0000fd8f) volume_small_pane_srt_g1_ParamLimits

0x51b6,	// (0x0000fd8f) volume_small_pane_srt_g1

0x51c6,	// (0x0000fd9f) volume_small_pane_srt_g2_ParamLimits

0x51c6,	// (0x0000fd9f) volume_small_pane_srt_g2

0x51d7,	// (0x0000fdb0) volume_small_pane_srt_g3_ParamLimits

0x51d7,	// (0x0000fdb0) volume_small_pane_srt_g3

0x51e8,	// (0x0000fdc1) volume_small_pane_srt_g4_ParamLimits

0x51e8,	// (0x0000fdc1) volume_small_pane_srt_g4

0x51f9,	// (0x0000fdd2) volume_small_pane_srt_g5_ParamLimits

0x51f9,	// (0x0000fdd2) volume_small_pane_srt_g5

0x520a,	// (0x0000fde3) volume_small_pane_srt_g6_ParamLimits

0x520a,	// (0x0000fde3) volume_small_pane_srt_g6

0x521b,	// (0x0000fdf4) volume_small_pane_srt_g7_ParamLimits

0x521b,	// (0x0000fdf4) volume_small_pane_srt_g7

0x522c,	// (0x0000fe05) volume_small_pane_srt_g8_ParamLimits

0x522c,	// (0x0000fe05) volume_small_pane_srt_g8

0x523d,	// (0x0000fe16) volume_small_pane_srt_g9_ParamLimits

0x523d,	// (0x0000fe16) volume_small_pane_srt_g9

0x524e,	// (0x0000fe27) volume_small_pane_srt_g10_ParamLimits

0x524e,	// (0x0000fe27) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001a337) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001a337) volume_small_pane_srt_g

0x71c5,	// (0x00011d9e) query_popup_data_pane_cp2

0xacba,	// (0x00015893) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xacba,	// (0x00015893) navi_navi_icon_text_pane_srt_t1

0x9ca6,	// (0x0001487f) navi_tabs_2_long_pane_srt

0x9ca6,	// (0x0001487f) navi_tabs_2_pane_srt

0x9ca6,	// (0x0001487f) navi_tabs_3_long_pane_srt

0x9ca6,	// (0x0001487f) navi_tabs_3_pane_srt

0x9ca6,	// (0x0001487f) navi_tabs_4_pane_srt

0x5de7,	// (0x000109c0) tabs_2_active_pane_srt_ParamLimits

0x5de7,	// (0x000109c0) tabs_2_active_pane_srt

0x5df7,	// (0x000109d0) tabs_2_passive_pane_srt_ParamLimits

0x5df7,	// (0x000109d0) tabs_2_passive_pane_srt

0x8daa,	// (0x00013983) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8daa,	// (0x00013983) bg_passive_tab_pane_cp1_srt

0xac86,	// (0x0001585f) bg_passive_tab_pane_g1_cp1_srt

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp1_srt

0xac8f,	// (0x00015868) bg_passive_tab_pane_g3_cp1_srt

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp1_srt_ParamLimits

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp1_srt

0xac98,	// (0x00015871) tabs_2_active_pane_srt_g1

0xaca0,	// (0x00015879) tabs_2_active_pane_srt_t1_ParamLimits

0xaca0,	// (0x00015879) tabs_2_active_pane_srt_t1

0xac86,	// (0x0001585f) bg_active_tab_pane_g1_cp1_srt

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp1_srt

0xac8f,	// (0x00015868) bg_active_tab_pane_g3_cp1_srt

0x5db4,	// (0x0001098d) tabs_3_active_pane_srt_ParamLimits

0x5db4,	// (0x0001098d) tabs_3_active_pane_srt

0x5dc5,	// (0x0001099e) tabs_3_passive_pane_cp_srt_ParamLimits

0x5dc5,	// (0x0001099e) tabs_3_passive_pane_cp_srt

0x5dd6,	// (0x000109af) tabs_3_passive_pane_srt_ParamLimits

0x5dd6,	// (0x000109af) tabs_3_passive_pane_srt

0x8daa,	// (0x00013983) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8daa,	// (0x00013983) bg_passive_tab_pane_cp2_srt

0x8c08,	// (0x000137e1) bg_passive_tab_pane_g1_cp2_srt

0x86af,	// (0x00013288) bg_passive_tab_pane_g2_cp2_srt

0x8c11,	// (0x000137ea) bg_passive_tab_pane_g3_cp2_srt

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp2_srt_ParamLimits

0x6dd1,	// (0x000119aa) bg_active_tab_pane_cp2_srt

0xac6c,	// (0x00015845) tabs_3_active_pane_srt_g1

0xac74,	// (0x0001584d) tabs_3_active_pane_srt_t1_ParamLimits

0xac74,	// (0x0001584d) tabs_3_active_pane_srt_t1

0x8c08,	// (0x000137e1) bg_active_tab_pane_g1_cp2_srt

0x86af,	// (0x00013288) bg_active_tab_pane_g2_cp2_srt

0x8c11,	// (0x000137ea) bg_active_tab_pane_g3_cp2_srt

0x5d6c,	// (0x00010945) tabs_4_active_pane_srt_ParamLimits

0x5d6c,	// (0x00010945) tabs_4_active_pane_srt

0x5d7e,	// (0x00010957) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5d7e,	// (0x00010957) tabs_4_passive_pane_cp2_srt

0x53b3,	// (0x0000ff8c) aid_size_cell_toolbar

0x7f30,	// (0x00012b09) main_idle_act_pane_ParamLimits

0x557c,	// (0x00010155) popup_large_graphic_colour_window_ParamLimits

0x58e3,	// (0x000104bc) popup_toolbar_window_ParamLimits

0x58e3,	// (0x000104bc) popup_toolbar_window

0xaa2e,	// (0x00015607) list_single_graphic_2heading_pane_ParamLimits

0xaa2e,	// (0x00015607) list_single_graphic_2heading_pane

0x80ec,	// (0x00012cc5) aid_size_cell_apps_grid_lsc_pane

0x80fe,	// (0x00012cd7) aid_size_cell_apps_grid_prt_pane

0x8daa,	// (0x00013983) bg_wml_button_pane_cp1_ParamLimits

0x8daa,	// (0x00013983) bg_wml_button_pane_cp1

0x965d,	// (0x00014236) form_midp_field_text_pane_t1_ParamLimits

0x9418,	// (0x00013ff1) input_focus_pane_cp050_ParamLimits

0x9694,	// (0x0001426d) list_midp_form_text_pane_ParamLimits

0x963a,	// (0x00014213) input_focus_pane_cp051_ParamLimits

0x964e,	// (0x00014227) list_midp_choice_pane_ParamLimits

0x94d1,	// (0x000140aa) list_single_2graphic_pane_cp3_ParamLimits

0x94d1,	// (0x000140aa) list_single_2graphic_pane_cp3

0x94f5,	// (0x000140ce) list_single_midp_graphic_pane_ParamLimits

0x94f5,	// (0x000140ce) list_single_midp_graphic_pane

0x5990,	// (0x00010569) list_single_graphic_2heading_pane_g1_ParamLimits

0x5990,	// (0x00010569) list_single_graphic_2heading_pane_g1

0x599c,	// (0x00010575) list_single_graphic_2heading_pane_g4_ParamLimits

0x599c,	// (0x00010575) list_single_graphic_2heading_pane_g4

0x59a8,	// (0x00010581) list_single_graphic_2heading_pane_g5_ParamLimits

0x59a8,	// (0x00010581) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001a38a) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001a38a) list_single_graphic_2heading_pane_g

0x59b4,	// (0x0001058d) list_single_graphic_2heading_pane_t1_ParamLimits

0x59b4,	// (0x0001058d) list_single_graphic_2heading_pane_t1

0x59c8,	// (0x000105a1) list_single_graphic_2heading_pane_t2_ParamLimits

0x59c8,	// (0x000105a1) list_single_graphic_2heading_pane_t2

0x59e4,	// (0x000105bd) list_single_graphic_2heading_pane_t3_ParamLimits

0x59e4,	// (0x000105bd) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001a391) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001a391) list_single_graphic_2heading_pane_t

0x91fa,	// (0x00013dd3) bg_popup_sub_pane_cp2

0x9224,	// (0x00013dfd) grid_toobar_pane

0x59fc,	// (0x000105d5) cell_toolbar_pane_ParamLimits

0x59fc,	// (0x000105d5) cell_toolbar_pane

0x928e,	// (0x00013e67) cell_toolbar_pane_g1_ParamLimits

0x928e,	// (0x00013e67) cell_toolbar_pane_g1

0x92a2,	// (0x00013e7b) cell_toolbar_pane_g2_ParamLimits

0x92a2,	// (0x00013e7b) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001a39f) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001a39f) cell_toolbar_pane_g

0x92c4,	// (0x00013e9d) grid_highlight_pane_cp2_ParamLimits

0x92c4,	// (0x00013e9d) grid_highlight_pane_cp2

0x92de,	// (0x00013eb7) toolbar_button_pane

0x92ea,	// (0x00013ec3) toolbar_button_pane_g1

0x92f2,	// (0x00013ecb) toolbar_button_pane_g2

0x92fa,	// (0x00013ed3) toolbar_button_pane_g3

0x9302,	// (0x00013edb) toolbar_button_pane_g4

0x930a,	// (0x00013ee3) toolbar_button_pane_g5

0x9312,	// (0x00013eeb) toolbar_button_pane_g6

0x931a,	// (0x00013ef3) toolbar_button_pane_g7

0x9322,	// (0x00013efb) toolbar_button_pane_g8

0x932a,	// (0x00013f03) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001a3a4) toolbar_button_pane_g

0x5a34,	// (0x0001060d) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5a34,	// (0x0001060d) list_single_2graphic_pane_g1_cp3

0x5a40,	// (0x00010619) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5a40,	// (0x00010619) list_single_2graphic_pane_g2_cp3

0x5a51,	// (0x0001062a) list_single_2graphic_pane_g3_cp3

0x5a59,	// (0x00010632) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5a59,	// (0x00010632) list_single_2graphic_pane_g4_cp3

0x5a65,	// (0x0001063e) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5a65,	// (0x0001063e) list_single_2graphic_pane_t1_cp3

0x5a81,	// (0x0001065a) list_single_midp_graphic_pane_g2_ParamLimits

0x5a81,	// (0x0001065a) list_single_midp_graphic_pane_g2

0x53bb,	// (0x0000ff94) aid_zoom_text_primary

0x53c3,	// (0x0000ff9c) aid_zoom_text_secondary

0x8cc5,	// (0x0001389e) status_small_pane_g7_ParamLimits

0x8cc5,	// (0x0001389e) status_small_pane_g7

0x8ce8,	// (0x000138c1) status_small_pane_t1_ParamLimits

0x6d08,	// (0x000118e1) title_pane_g2

0x0003,

0xf554,	// (0x0001a12d) title_pane_g

0x7266,	// (0x00011e3f) aid_size_cell_colour_1_pane_ParamLimits

0x7266,	// (0x00011e3f) aid_size_cell_colour_1_pane

0x727a,	// (0x00011e53) aid_size_cell_colour_2_pane_ParamLimits

0x727a,	// (0x00011e53) aid_size_cell_colour_2_pane

0x728e,	// (0x00011e67) aid_size_cell_colour_3_pane_ParamLimits

0x728e,	// (0x00011e67) aid_size_cell_colour_3_pane

0x72a2,	// (0x00011e7b) aid_size_cell_colour_4_pane_ParamLimits

0x72a2,	// (0x00011e7b) aid_size_cell_colour_4_pane

0x4e13,	// (0x0000f9ec) title_pane_stacon_g1_ParamLimits

0x4e13,	// (0x0000f9ec) title_pane_stacon_g1

0x9a8d,	// (0x00014666) popup_note_wait_window_g3_ParamLimits

0x9a8d,	// (0x00014666) popup_note_wait_window_g3

0x9b03,	// (0x000146dc) popup_note_wait_window_t5_ParamLimits

0x9b03,	// (0x000146dc) popup_note_wait_window_t5

0x6cf1,	// (0x000118ca) main_feb_china_hwr_fs_writing_pane

0x5461,	// (0x0001003a) popup_feb_china_hwr_fs_window_ParamLimits

0x5461,	// (0x0001003a) popup_feb_china_hwr_fs_window

0x5aa3,	// (0x0001067c) aid_size_cell_hwr_fs_ParamLimits

0x5aa3,	// (0x0001067c) aid_size_cell_hwr_fs

0x9418,	// (0x00013ff1) bg_popup_sub_pane_cp3_ParamLimits

0x9418,	// (0x00013ff1) bg_popup_sub_pane_cp3

0x5ab8,	// (0x00010691) grid_hwr_fs_pane_ParamLimits

0x5ab8,	// (0x00010691) grid_hwr_fs_pane

0x5ad0,	// (0x000106a9) linegrid_hwr_fs_pane_ParamLimits

0x5ad0,	// (0x000106a9) linegrid_hwr_fs_pane

0x5ae0,	// (0x000106b9) cell_hwr_fs_pane_ParamLimits

0x5ae0,	// (0x000106b9) cell_hwr_fs_pane

0x9424,	// (0x00013ffd) linegrid_hwr_fs_pane_g1_ParamLimits

0x9424,	// (0x00013ffd) linegrid_hwr_fs_pane_g1

0x9430,	// (0x00014009) linegrid_hwr_fs_pane_g2_ParamLimits

0x9430,	// (0x00014009) linegrid_hwr_fs_pane_g2

0x9442,	// (0x0001401b) linegrid_hwr_fs_pane_g3_ParamLimits

0x9442,	// (0x0001401b) linegrid_hwr_fs_pane_g3

0x5b02,	// (0x000106db) linegrid_hwr_fs_pane_g4_ParamLimits

0x5b02,	// (0x000106db) linegrid_hwr_fs_pane_g4

0x5b1c,	// (0x000106f5) linegrid_hwr_fs_pane_g5_ParamLimits

0x5b1c,	// (0x000106f5) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f6,	// (0x0001a3cf) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001a3cf) linegrid_hwr_fs_pane_g

0x944e,	// (0x00014027) cell_hwr_fs_pane_g1_ParamLimits

0x944e,	// (0x00014027) cell_hwr_fs_pane_g1

0x9131,	// (0x00013d0a) cell_hwr_fs_pane_g2_ParamLimits

0x9131,	// (0x00013d0a) cell_hwr_fs_pane_g2

0x9464,	// (0x0001403d) cell_hwr_fs_pane_g3_ParamLimits

0x9464,	// (0x0001403d) cell_hwr_fs_pane_g3

0x9471,	// (0x0001404a) cell_hwr_fs_pane_g4_ParamLimits

0x9471,	// (0x0001404a) cell_hwr_fs_pane_g4

0x0003,

0xf801,	// (0x0001a3da) cell_hwr_fs_pane_g_ParamLimits

0xf801,	// (0x0001a3da) cell_hwr_fs_pane_g

0x5b32,	// (0x0001070b) cell_hwr_fs_pane_t1

0x6cf1,	// (0x000118ca) grid_highlight_pane_cp6

0x6cf1,	// (0x000118ca) main_idle_act2_pane

0x7ea3,	// (0x00012a7c) aid_inside_area_popup_secondary

0xa13a,	// (0x00014d13) aid_inside_area_window_primary_ParamLimits

0xa13a,	// (0x00014d13) aid_inside_area_window_primary

0xadd3,	// (0x000159ac) ai2_news_ticker_pane

0xaddb,	// (0x000159b4) aid_size_cell_ai1_link_ParamLimits

0xaddb,	// (0x000159b4) aid_size_cell_ai1_link

0xadf5,	// (0x000159ce) popup_ai2_data_window_ParamLimits

0xadf5,	// (0x000159ce) popup_ai2_data_window

0xae0b,	// (0x000159e4) popup_ai2_link_window_ParamLimits

0xae0b,	// (0x000159e4) popup_ai2_link_window

0x9418,	// (0x00013ff1) bg_popup_sub_pane_cp4_ParamLimits

0x9418,	// (0x00013ff1) bg_popup_sub_pane_cp4

0xae1f,	// (0x000159f8) grid_ai2_link_pane_ParamLimits

0xae1f,	// (0x000159f8) grid_ai2_link_pane

0xae36,	// (0x00015a0f) popup_ai2_link_window_g1_ParamLimits

0xae36,	// (0x00015a0f) popup_ai2_link_window_g1

0xae42,	// (0x00015a1b) popup_ai2_link_window_g2_ParamLimits

0xae42,	// (0x00015a1b) popup_ai2_link_window_g2

0x0001,

0xf9d4,	// (0x0001a5ad) popup_ai2_link_window_g_ParamLimits

0xf9d4,	// (0x0001a5ad) popup_ai2_link_window_g

0xae51,	// (0x00015a2a) ai2_mp_button_pane

0xae59,	// (0x00015a32) ai2_mp_volume_pane

0x963a,	// (0x00014213) bg_popup_sub_pane_cp5_ParamLimits

0x963a,	// (0x00014213) bg_popup_sub_pane_cp5

0xae61,	// (0x00015a3a) heading_ai2_gene_pane_ParamLimits

0xae61,	// (0x00015a3a) heading_ai2_gene_pane

0xae6d,	// (0x00015a46) list_ai2_gene_pane_ParamLimits

0xae6d,	// (0x00015a46) list_ai2_gene_pane

0xaeb5,	// (0x00015a8e) cell_ai2_link_pane_ParamLimits

0xaeb5,	// (0x00015a8e) cell_ai2_link_pane

0xaecb,	// (0x00015aa4) cell_ai2_link_pane_g1

0x6cf1,	// (0x000118ca) grid_highlight_pane_cp7

0x5e24,	// (0x000109fd) ai2_mp_volume_pane_g1

0xaf9b,	// (0x00015b74) ai2_mp_volume_pane_g2

0xaf10,	// (0x00015ae9) list_ai2_gene_pane_t1

0xafa3,	// (0x00015b7c) ai2_mp_volume_pane_g3

0x0002,

0xf9ed,	// (0x0001a5c6) ai2_mp_volume_pane_g

0x5e2c,	// (0x00010a05) volume_small_pane_cp3

0xafab,	// (0x00015b84) aid_size_cell_ai2_button

0xafb3,	// (0x00015b8c) grid_ai2_button_pane

0xafbc,	// (0x00015b95) cell_ai2_button_pane_ParamLimits

0xafbc,	// (0x00015b95) cell_ai2_button_pane

0x6ce7,	// (0x000118c0) cell_ai2_button_pane_g1

0x6cf1,	// (0x000118ca) grid_highlight_pane_cp8

0xaf5b,	// (0x00015b34) ai2_gene_pane_t1_ParamLimits

0xaf5b,	// (0x00015b34) ai2_gene_pane_t1

0x53a9,	// (0x0000ff82) aid_height_parent_landscape

0xa7d5,	// (0x000153ae) aid_height_set_list

0xa7e6,	// (0x000153bf) aid_size_parent

0xabfa,	// (0x000157d3) aid_size_cell_graphic_pane_ParamLimits

0xae7d,	// (0x00015a56) popup_ai2_data_window_g1_ParamLimits

0xae7d,	// (0x00015a56) popup_ai2_data_window_g1

0xae89,	// (0x00015a62) ai2_news_ticker_pane_g1

0xae91,	// (0x00015a6a) ai2_news_ticker_pane_g2

0x0001,

0xf9d9,	// (0x0001a5b2) ai2_news_ticker_pane_g

0xae99,	// (0x00015a72) ai2_news_ticker_pane_t1

0xaea7,	// (0x00015a80) ai2_news_ticker_pane_t2

0x0001,

0xf9de,	// (0x0001a5b7) ai2_news_ticker_pane_t

0xaed4,	// (0x00015aad) heading_ai2_gene_pane_g1

0xaedc,	// (0x00015ab5) heading_ai2_gene_pane_t1_ParamLimits

0xaedc,	// (0x00015ab5) heading_ai2_gene_pane_t1

0xaef1,	// (0x00015aca) list_highlight_pane_cp6

0xaef9,	// (0x00015ad2) ai2_gene_pane_ParamLimits

0xaef9,	// (0x00015ad2) ai2_gene_pane

0xaf1e,	// (0x00015af7) list_ai2_gene_pane_t2

0x0001,

0xf9e3,	// (0x0001a5bc) list_ai2_gene_pane_t

0xaf2c,	// (0x00015b05) list_highlight_pane_cp8_ParamLimits

0xaf2c,	// (0x00015b05) list_highlight_pane_cp8

0xaf3d,	// (0x00015b16) ai2_gene_pane_g1_ParamLimits

0xaf3d,	// (0x00015b16) ai2_gene_pane_g1

0xaf4f,	// (0x00015b28) ai2_gene_pane_g2_ParamLimits

0xaf4f,	// (0x00015b28) ai2_gene_pane_g2

0x0001,

0xf9e8,	// (0x0001a5c1) ai2_gene_pane_g_ParamLimits

0xf9e8,	// (0x0001a5c1) ai2_gene_pane_g

0x75ed,	// (0x000121c6) scroll_pane_cp12

0x5368,	// (0x0000ff41) control_pane_t3_ParamLimits

0x5368,	// (0x0000ff41) control_pane_t3

0x8cd9,	// (0x000138b2) status_small_pane_g8_ParamLimits

0x8cd9,	// (0x000138b2) status_small_pane_g8

0x5547,	// (0x00010120) popup_find_window_ParamLimits

0x575a,	// (0x00010333) popup_note_image_window_ParamLimits

0x9260,	// (0x00013e39) list_double2_graphic_pane_vc_g1_ParamLimits

0x9260,	// (0x00013e39) list_double2_graphic_pane_vc_g1

0x899b,	// (0x00013574) list_double2_graphic_pane_vc_g2_ParamLimits

0x899b,	// (0x00013574) list_double2_graphic_pane_vc_g2

0x926c,	// (0x00013e45) list_double2_graphic_pane_vc_g3_ParamLimits

0x926c,	// (0x00013e45) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001a398) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001a398) list_double2_graphic_pane_vc_g

0x9278,	// (0x00013e51) list_double2_graphic_pane_vc_t1_ParamLimits

0x9278,	// (0x00013e51) list_double2_graphic_pane_vc_t1

0x899b,	// (0x00013574) list_single_heading_pane_vc_g1_ParamLimits

0x899b,	// (0x00013574) list_single_heading_pane_vc_g1

0x926c,	// (0x00013e45) list_single_heading_pane_vc_g2_ParamLimits

0x926c,	// (0x00013e45) list_single_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a3b9) list_single_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a3b9) list_single_heading_pane_vc_g

0x9332,	// (0x00013f0b) list_single_heading_pane_vc_t1_ParamLimits

0x9332,	// (0x00013f0b) list_single_heading_pane_vc_t1

0x934a,	// (0x00013f23) list_single_heading_pane_vc_t2_ParamLimits

0x934a,	// (0x00013f23) list_single_heading_pane_vc_t2

0x0001,

0xf7e5,	// (0x0001a3be) list_single_heading_pane_vc_t_ParamLimits

0xf7e5,	// (0x0001a3be) list_single_heading_pane_vc_t

0x9366,	// (0x00013f3f) list_setting_number_pane_vc_g1_ParamLimits

0x9366,	// (0x00013f3f) list_setting_number_pane_vc_g1

0x9372,	// (0x00013f4b) list_setting_number_pane_vc_g2_ParamLimits

0x9372,	// (0x00013f4b) list_setting_number_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001a3c3) list_setting_number_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001a3c3) list_setting_number_pane_vc_g

0x937e,	// (0x00013f57) list_setting_number_pane_vc_t1_ParamLimits

0x937e,	// (0x00013f57) list_setting_number_pane_vc_t1

0x9392,	// (0x00013f6b) list_setting_number_pane_vc_t2_ParamLimits

0x9392,	// (0x00013f6b) list_setting_number_pane_vc_t2

0x93ae,	// (0x00013f87) list_setting_number_pane_vc_t3_ParamLimits

0x93ae,	// (0x00013f87) list_setting_number_pane_vc_t3

0x0002,

0xf7ef,	// (0x0001a3c8) list_setting_number_pane_vc_t_ParamLimits

0xf7ef,	// (0x0001a3c8) list_setting_number_pane_vc_t

0x93dc,	// (0x00013fb5) set_value_pane_vc_ParamLimits

0x93dc,	// (0x00013fb5) set_value_pane_vc

0xaa2e,	// (0x00015607) list_double2_graphic_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double2_graphic_pane_vc

0xaa2e,	// (0x00015607) list_double2_large_graphic_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double2_large_graphic_pane_vc

0xaa2e,	// (0x00015607) list_double2_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double2_pane_vc

0xaa2e,	// (0x00015607) list_double_graphic_heading_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double_graphic_heading_pane_vc

0xaa2e,	// (0x00015607) list_double_graphic_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double_graphic_pane_vc

0xaa2e,	// (0x00015607) list_double_heading_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double_heading_pane_vc

0xaa2e,	// (0x00015607) list_double_large_graphic_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double_large_graphic_pane_vc

0xaa2e,	// (0x00015607) list_double_number_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double_number_pane_vc

0xaa2e,	// (0x00015607) list_double_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double_pane_vc

0xaa2e,	// (0x00015607) list_double_time_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_double_time_pane_vc

0xaa2e,	// (0x00015607) list_setting_number_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_setting_number_pane_vc

0xaa2e,	// (0x00015607) list_setting_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_setting_pane_vc

0xaa2e,	// (0x00015607) list_single_graphic_heading_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_single_graphic_heading_pane_vc

0xaa2e,	// (0x00015607) list_single_heading_pane_vc_ParamLimits

0xaa2e,	// (0x00015607) list_single_heading_pane_vc

0xaa40,	// (0x00015619) list_single_number_heading_pane_vc_ParamLimits

0xaa40,	// (0x00015619) list_single_number_heading_pane_vc

0x9260,	// (0x00013e39) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9260,	// (0x00013e39) list_double_graphic_heading_pane_vc_g1

0xaff0,	// (0x00015bc9) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xaff0,	// (0x00015bc9) list_double_graphic_heading_pane_vc_g2

0xaffc,	// (0x00015bd5) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xaffc,	// (0x00015bd5) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f4,	// (0x0001a5cd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f4,	// (0x0001a5cd) list_double_graphic_heading_pane_vc_g

0xb008,	// (0x00015be1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb008,	// (0x00015be1) list_double_graphic_heading_pane_vc_t1

0xb024,	// (0x00015bfd) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb024,	// (0x00015bfd) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fb,	// (0x0001a5d4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fb,	// (0x0001a5d4) list_double_graphic_heading_pane_vc_t

0x9366,	// (0x00013f3f) list_setting_pane_vc_g1_ParamLimits

0x9366,	// (0x00013f3f) list_setting_pane_vc_g1

0x9372,	// (0x00013f4b) list_setting_pane_vc_g2_ParamLimits

0x9372,	// (0x00013f4b) list_setting_pane_vc_g2

0x0001,

0xf7ea,	// (0x0001a3c3) list_setting_pane_vc_g_ParamLimits

0xf7ea,	// (0x0001a3c3) list_setting_pane_vc_g

0xb24f,	// (0x00015e28) list_setting_pane_vc_t1_ParamLimits

0xb24f,	// (0x00015e28) list_setting_pane_vc_t1

0xb26b,	// (0x00015e44) list_setting_pane_vc_t2_ParamLimits

0xb26b,	// (0x00015e44) list_setting_pane_vc_t2

0x0001,

0xfa29,	// (0x0001a602) list_setting_pane_vc_t_ParamLimits

0xfa29,	// (0x0001a602) list_setting_pane_vc_t

0x93dc,	// (0x00013fb5) set_value_pane_cp_vc_ParamLimits

0x93dc,	// (0x00013fb5) set_value_pane_cp_vc

0x899b,	// (0x00013574) list_single_number_heading_pane_vc_g1_ParamLimits

0x899b,	// (0x00013574) list_single_number_heading_pane_vc_g1

0x926c,	// (0x00013e45) list_single_number_heading_pane_vc_g2_ParamLimits

0x926c,	// (0x00013e45) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a3b9) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a3b9) list_single_number_heading_pane_vc_g

0x9332,	// (0x00013f0b) list_single_number_heading_pane_vc_t1_ParamLimits

0x9332,	// (0x00013f0b) list_single_number_heading_pane_vc_t1

0xb287,	// (0x00015e60) list_single_number_heading_pane_vc_t2_ParamLimits

0xb287,	// (0x00015e60) list_single_number_heading_pane_vc_t2

0xb29b,	// (0x00015e74) list_single_number_heading_pane_vc_t3_ParamLimits

0xb29b,	// (0x00015e74) list_single_number_heading_pane_vc_t3

0x0002,

0xfa2e,	// (0x0001a607) list_single_number_heading_pane_vc_t_ParamLimits

0xfa2e,	// (0x0001a607) list_single_number_heading_pane_vc_t

0x9260,	// (0x00013e39) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x9260,	// (0x00013e39) list_single_graphic_heading_pane_vc_g1

0x899b,	// (0x00013574) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x899b,	// (0x00013574) list_single_graphic_heading_pane_vc_g4

0x926c,	// (0x00013e45) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x926c,	// (0x00013e45) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001a398) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001a398) list_single_graphic_heading_pane_vc_g

0x9332,	// (0x00013f0b) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x9332,	// (0x00013f0b) list_single_graphic_heading_pane_vc_t1

0xb2ad,	// (0x00015e86) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb2ad,	// (0x00015e86) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa35,	// (0x0001a60e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa35,	// (0x0001a60e) list_single_graphic_heading_pane_vc_t

0x899b,	// (0x00013574) list_double2_pane_vc_g1_ParamLimits

0x899b,	// (0x00013574) list_double2_pane_vc_g1

0x926c,	// (0x00013e45) list_double2_pane_vc_g2_ParamLimits

0x926c,	// (0x00013e45) list_double2_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a3b9) list_double2_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a3b9) list_double2_pane_vc_g

0xb2c1,	// (0x00015e9a) list_double2_pane_vc_t1_ParamLimits

0xb2c1,	// (0x00015e9a) list_double2_pane_vc_t1

0xb2d7,	// (0x00015eb0) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb2d7,	// (0x00015eb0) list_double2_large_graphic_pane_vc_g1

0x899b,	// (0x00013574) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x899b,	// (0x00013574) list_double2_large_graphic_pane_vc_g2

0x926c,	// (0x00013e45) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x926c,	// (0x00013e45) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa3a,	// (0x0001a613) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa3a,	// (0x0001a613) list_double2_large_graphic_pane_vc_g

0xb2e3,	// (0x00015ebc) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb2e3,	// (0x00015ebc) list_double2_large_graphic_pane_vc_t1

0xb2f9,	// (0x00015ed2) list_double_time_pane_vc_g1_ParamLimits

0xb2f9,	// (0x00015ed2) list_double_time_pane_vc_g1

0xb305,	// (0x00015ede) list_double_time_pane_vc_g2_ParamLimits

0xb305,	// (0x00015ede) list_double_time_pane_vc_g2

0x0001,

0xfa41,	// (0x0001a61a) list_double_time_pane_vc_g_ParamLimits

0xfa41,	// (0x0001a61a) list_double_time_pane_vc_g

0xb311,	// (0x00015eea) list_double_time_pane_vc_t1_ParamLimits

0xb311,	// (0x00015eea) list_double_time_pane_vc_t1

0xb335,	// (0x00015f0e) list_double_time_pane_vc_t2_ParamLimits

0xb335,	// (0x00015f0e) list_double_time_pane_vc_t2

0xb364,	// (0x00015f3d) list_double_time_pane_vc_t3_ParamLimits

0xb364,	// (0x00015f3d) list_double_time_pane_vc_t3

0xb376,	// (0x00015f4f) list_double_time_pane_vc_t4_ParamLimits

0xb376,	// (0x00015f4f) list_double_time_pane_vc_t4

0x0003,

0xfa46,	// (0x0001a61f) list_double_time_pane_vc_t_ParamLimits

0xfa46,	// (0x0001a61f) list_double_time_pane_vc_t

0x899b,	// (0x00013574) list_double_pane_vc_g1_ParamLimits

0x899b,	// (0x00013574) list_double_pane_vc_g1

0x926c,	// (0x00013e45) list_double_pane_vc_g2_ParamLimits

0x926c,	// (0x00013e45) list_double_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a3b9) list_double_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a3b9) list_double_pane_vc_g

0xb38a,	// (0x00015f63) list_double_pane_vc_t1_ParamLimits

0xb38a,	// (0x00015f63) list_double_pane_vc_t1

0xb39e,	// (0x00015f77) list_double_pane_vc_t2_ParamLimits

0xb39e,	// (0x00015f77) list_double_pane_vc_t2

0x0001,

0xfa4f,	// (0x0001a628) list_double_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001a628) list_double_pane_vc_t

0x899b,	// (0x00013574) list_double_number_pane_vc_g1_ParamLimits

0x899b,	// (0x00013574) list_double_number_pane_vc_g1

0x926c,	// (0x00013e45) list_double_number_pane_vc_g2_ParamLimits

0x926c,	// (0x00013e45) list_double_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001a3b9) list_double_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001a3b9) list_double_number_pane_vc_g

0xb3b6,	// (0x00015f8f) list_double_number_pane_vc_t1_ParamLimits

0xb3b6,	// (0x00015f8f) list_double_number_pane_vc_t1

0xb3c8,	// (0x00015fa1) list_double_number_pane_vc_t2_ParamLimits

0xb3c8,	// (0x00015fa1) list_double_number_pane_vc_t2

0xb3dc,	// (0x00015fb5) list_double_number_pane_vc_t3_ParamLimits

0xb3dc,	// (0x00015fb5) list_double_number_pane_vc_t3

0x0002,

0xfa54,	// (0x0001a62d) list_double_number_pane_vc_t_ParamLimits

0xfa54,	// (0x0001a62d) list_double_number_pane_vc_t

0xb3f4,	// (0x00015fcd) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb3f4,	// (0x00015fcd) list_double_large_graphic_pane_vc_g1

0xb400,	// (0x00015fd9) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb400,	// (0x00015fd9) list_double_large_graphic_pane_vc_g2

0x926c,	// (0x00013e45) list_double_large_graphic_pane_vc_g3_ParamLimits

0x926c,	// (0x00013e45) list_double_large_graphic_pane_vc_g3

0xb40f,	// (0x00015fe8) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb40f,	// (0x00015fe8) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5b,	// (0x0001a634) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5b,	// (0x0001a634) list_double_large_graphic_pane_vc_g

0xb41b,	// (0x00015ff4) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb41b,	// (0x00015ff4) list_double_large_graphic_pane_vc_t1

0xb42f,	// (0x00016008) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb42f,	// (0x00016008) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa64,	// (0x0001a63d) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa64,	// (0x0001a63d) list_double_large_graphic_pane_vc_t

0xaff0,	// (0x00015bc9) list_double_heading_pane_vc_g1_ParamLimits

0xaff0,	// (0x00015bc9) list_double_heading_pane_vc_g1

0xaffc,	// (0x00015bd5) list_double_heading_pane_vc_g2_ParamLimits

0xaffc,	// (0x00015bd5) list_double_heading_pane_vc_g2

0x0001,

0xfa69,	// (0x0001a642) list_double_heading_pane_vc_g_ParamLimits

0xfa69,	// (0x0001a642) list_double_heading_pane_vc_g

0xb448,	// (0x00016021) list_double_heading_pane_vc_t1_ParamLimits

0xb448,	// (0x00016021) list_double_heading_pane_vc_t1

0x9332,	// (0x00013f0b) list_double_heading_pane_vc_t2_ParamLimits

0x9332,	// (0x00013f0b) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0001a647) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0001a647) list_double_heading_pane_vc_t

0x9260,	// (0x00013e39) list_double_graphic_pane_vc_g1_ParamLimits

0x9260,	// (0x00013e39) list_double_graphic_pane_vc_g1

0xb45c,	// (0x00016035) list_double_graphic_pane_vc_g2_ParamLimits

0xb45c,	// (0x00016035) list_double_graphic_pane_vc_g2

0xb04e,	// (0x00015c27) list_double_graphic_pane_vc_g3_ParamLimits

0xb04e,	// (0x00015c27) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0001a64c) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0001a64c) list_double_graphic_pane_vc_g

0xb46b,	// (0x00016044) list_double_graphic_pane_vc_t1_ParamLimits

0xb46b,	// (0x00016044) list_double_graphic_pane_vc_t1

0xb47f,	// (0x00016058) list_double_graphic_pane_vc_t2_ParamLimits

0xb47f,	// (0x00016058) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0001a653) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0001a653) list_double_graphic_pane_vc_t

0x4966,	// (0x0000f53f) aid_size_cell_fastswap

0x496e,	// (0x0000f547) aid_size_cell_touch_ParamLimits

0x496e,	// (0x0000f547) aid_size_cell_touch

0x4bd3,	// (0x0000f7ac) popup_fast_swap_wide_window_ParamLimits

0x4bd3,	// (0x0000f7ac) popup_fast_swap_wide_window

0x4ce7,	// (0x0000f8c0) touch_pane_ParamLimits

0x4ce7,	// (0x0000f8c0) touch_pane

0x7aec,	// (0x000126c5) button_value_adjust_pane_cp2

0x7af4,	// (0x000126cd) button_value_adjust_pane_cp4

0x7b16,	// (0x000126ef) form_field_data_pane_cp2

0x7b37,	// (0x00012710) form_field_data_wide_pane_cp2

0x81b5,	// (0x00012d8e) bg_scroll_pane_ParamLimits

0x4f75,	// (0x0000fb4e) scroll_handle_pane_ParamLimits

0x4f89,	// (0x0000fb62) scroll_sc2_down_pane_ParamLimits

0x4f89,	// (0x0000fb62) scroll_sc2_down_pane

0x81e6,	// (0x00012dbf) scroll_sc2_up_pane_ParamLimits

0x81e6,	// (0x00012dbf) scroll_sc2_up_pane

0xb92d,	// (0x00016506) grid_wheel_folder_pane_g1_ParamLimits

0xb92d,	// (0x00016506) grid_wheel_folder_pane_g1

0x514e,	// (0x0000fd27) clock_nsta_pane_cp2_ParamLimits

0x514e,	// (0x0000fd27) clock_nsta_pane_cp2

0x7f30,	// (0x00012b09) listscroll_midp_pane_ParamLimits

0x8a6a,	// (0x00013643) midp_canvas_pane

0x8d54,	// (0x0001392d) nsta_clock_indic_pane

0x8d90,	// (0x00013969) listscroll_form_pane_vc

0x8d98,	// (0x00013971) listscroll_set_pane_vc_ParamLimits

0x8d98,	// (0x00013971) listscroll_set_pane_vc

0x8ea5,	// (0x00013a7e) clock_nsta_pane

0x8f1a,	// (0x00013af3) indicator_nsta_pane

0x91fa,	// (0x00013dd3) bg_popup_sub_pane_cp2_ParamLimits

0x920e,	// (0x00013de7) find_pane_cp2_ParamLimits

0x920e,	// (0x00013de7) find_pane_cp2

0x9224,	// (0x00013dfd) grid_toobar_pane_ParamLimits

0x93ec,	// (0x00013fc5) list_form_gen_pane_vc_ParamLimits

0x93ec,	// (0x00013fc5) list_form_gen_pane_vc

0x9402,	// (0x00013fdb) scroll_pane_cp8_vc_ParamLimits

0x9402,	// (0x00013fdb) scroll_pane_cp8_vc

0x947e,	// (0x00014057) data_form_wide_pane_vc_ParamLimits

0x947e,	// (0x00014057) data_form_wide_pane_vc

0x948a,	// (0x00014063) form_field_data_wide_pane_vc_g1

0x9492,	// (0x0001406b) form_field_data_wide_pane_vc_t1_ParamLimits

0x9492,	// (0x0001406b) form_field_data_wide_pane_vc_t1

0x7bd2,	// (0x000127ab) input_focus_pane_cp6_vc_ParamLimits

0x7bd2,	// (0x000127ab) input_focus_pane_cp6_vc

0x97fc,	// (0x000143d5) list_midp_pane_ParamLimits

0x9808,	// (0x000143e1) scroll_pane_cp16_ParamLimits

0x9808,	// (0x000143e1) scroll_pane_cp16

0x9856,	// (0x0001442f) button_value_adjust_pane_ParamLimits

0x9856,	// (0x0001442f) button_value_adjust_pane

0xa7f8,	// (0x000153d1) button_value_adjust_pane_cp6_ParamLimits

0xa7f8,	// (0x000153d1) button_value_adjust_pane_cp6

0xa964,	// (0x0001553d) settings_code_pane_cp_ParamLimits

0xa964,	// (0x0001553d) settings_code_pane_cp

0x6ce7,	// (0x000118c0) cell_touch_pane_g1

0x6ce7,	// (0x000118c0) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001a2dd) cell_touch_pane_g

0xafce,	// (0x00015ba7) cell_touch_pane_cp_ParamLimits

0xafce,	// (0x00015ba7) cell_touch_pane_cp

0xafde,	// (0x00015bb7) cell_touch_pane_ParamLimits

0xafde,	// (0x00015bb7) cell_touch_pane

0x6ce7,	// (0x000118c0) scroll_sc2_down_pane_g1

0x6ce7,	// (0x000118c0) scroll_sc2_up_pane_g1

0x6cf1,	// (0x000118ca) bg_set_opt_pane_cp4_vc

0xb042,	// (0x00015c1b) list_set_graphic_pane_vc_g1_ParamLimits

0xb042,	// (0x00015c1b) list_set_graphic_pane_vc_g1

0xb04e,	// (0x00015c27) list_set_graphic_pane_vc_g2_ParamLimits

0xb04e,	// (0x00015c27) list_set_graphic_pane_vc_g2

0x0001,

0xfa00,	// (0x0001a5d9) list_set_graphic_pane_vc_g_ParamLimits

0xfa00,	// (0x0001a5d9) list_set_graphic_pane_vc_g

0xb05a,	// (0x00015c33) text_primary_small_cp13_vc_ParamLimits

0xb05a,	// (0x00015c33) text_primary_small_cp13_vc

0xb072,	// (0x00015c4b) list_set_graphic_pane_vc_ParamLimits

0xb072,	// (0x00015c4b) list_set_graphic_pane_vc

0x6cf1,	// (0x000118ca) input_focus_pane_cp2_vc

0x6ce7,	// (0x000118c0) setting_code_pane_vc_g1

0x6e1c,	// (0x000119f5) setting_code_pane_vc_t1

0xb084,	// (0x00015c5d) set_text_pane_vc_t1_ParamLimits

0xb084,	// (0x00015c5d) set_text_pane_vc_t1

0x6cf1,	// (0x000118ca) input_focus_pane_cp1_vc

0xb0a0,	// (0x00015c79) list_set_text_pane_vc

0x6ce7,	// (0x000118c0) setting_text_pane_vc_g1

0x6cf1,	// (0x000118ca) bg_set_opt_pane_cp2_vc

0x6e13,	// (0x000119ec) setting_slider_graphic_pane_vc_g1

0xb0aa,	// (0x00015c83) setting_slider_graphic_pane_vc_t1

0xb0ba,	// (0x00015c93) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa05,	// (0x0001a5de) setting_slider_graphic_pane_vc_t

0xb0ca,	// (0x00015ca3) slider_set_pane_cp_vc

0xb0d2,	// (0x00015cab) slider_set_pane_vc_g1

0xb0db,	// (0x00015cb4) slider_set_pane_vc_g2

0x0006,

0xfa0a,	// (0x0001a5e3) slider_set_pane_vc_g

0x7cfb,	// (0x000128d4) set_opt_bg_pane_g1_copy1

0x7d03,	// (0x000128dc) set_opt_bg_pane_g2_copy1

0xb107,	// (0x00015ce0) set_opt_bg_pane_g3_copy1

0x7d13,	// (0x000128ec) set_opt_bg_pane_g4_copy1

0x7d1b,	// (0x000128f4) set_opt_bg_pane_g5_copy1

0x7d23,	// (0x000128fc) set_opt_bg_pane_g6_copy1

0xb111,	// (0x00015cea) set_opt_bg_pane_g7_copy1

0xb119,	// (0x00015cf2) set_opt_bg_pane_g8_copy1

0xb123,	// (0x00015cfc) set_opt_bg_pane_g9_copy1

0x6cf1,	// (0x000118ca) bg_set_opt_pane_cp_vc

0xb12d,	// (0x00015d06) setting_slider_pane_vc_t1

0xb13c,	// (0x00015d15) setting_slider_pane_vc_t2

0xb14c,	// (0x00015d25) setting_slider_pane_vc_t3

0x0002,

0xfa19,	// (0x0001a5f2) setting_slider_pane_vc_t

0xb15c,	// (0x00015d35) slider_set_pane_vc

0x5b40,	// (0x00010719) volume_set_pane_vc_g1

0x5b49,	// (0x00010722) volume_set_pane_vc_g2

0x5b52,	// (0x0001072b) volume_set_pane_vc_g3

0x5b5b,	// (0x00010734) volume_set_pane_vc_g4

0x5b64,	// (0x0001073d) volume_set_pane_vc_g5

0x5b6d,	// (0x00010746) volume_set_pane_vc_g6

0x5b76,	// (0x0001074f) volume_set_pane_vc_g7

0x5b7f,	// (0x00010758) volume_set_pane_vc_g8

0x5b88,	// (0x00010761) volume_set_pane_vc_g9

0x5b91,	// (0x0001076a) volume_set_pane_vc_g10

0x0009,

0xf8b7,	// (0x0001a490) volume_set_pane_vc_g

0xb164,	// (0x00015d3d) volume_set_pane_vc

0xb16c,	// (0x00015d45) button_value_adjust_pane_cp1_vc

0xb176,	// (0x00015d4f) list_highlight_pane_cp2_vc

0xb17f,	// (0x00015d58) list_set_pane_vc_ParamLimits

0xb17f,	// (0x00015d58) list_set_pane_vc

0xb1dd,	// (0x00015db6) main_pane_set_vc_t1_ParamLimits

0xb1dd,	// (0x00015db6) main_pane_set_vc_t1

0xb1f2,	// (0x00015dcb) main_pane_set_vc_t2_ParamLimits

0xb1f2,	// (0x00015dcb) main_pane_set_vc_t2

0xb204,	// (0x00015ddd) main_pane_set_vc_t3_ParamLimits

0xb204,	// (0x00015ddd) main_pane_set_vc_t3

0xb218,	// (0x00015df1) main_pane_set_vc_t4_ParamLimits

0xb218,	// (0x00015df1) main_pane_set_vc_t4

0x0003,

0xfa20,	// (0x0001a5f9) main_pane_set_vc_t_ParamLimits

0xfa20,	// (0x0001a5f9) main_pane_set_vc_t

0xb22c,	// (0x00015e05) setting_code_pane_vc_ParamLimits

0xb22c,	// (0x00015e05) setting_code_pane_vc

0xb23d,	// (0x00015e16) setting_slider_graphic_pane_vc

0xb23d,	// (0x00015e16) setting_slider_pane_vc

0xb23d,	// (0x00015e16) setting_text_pane_vc

0xb23d,	// (0x00015e16) setting_volume_pane_vc

0xb247,	// (0x00015e20) scroll_pane_cp121_vc

0x7ada,	// (0x000126b3) set_content_pane_vc

0xb497,	// (0x00016070) button_value_adjust_pane_g1

0xb4a0,	// (0x00016079) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0001a658) button_value_adjust_pane_g

0xb4a9,	// (0x00016082) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb4a9,	// (0x00016082) form_field_slider_wide_pane_vc_t1

0xb4bd,	// (0x00016096) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb4bd,	// (0x00016096) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0001a65d) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0001a65d) form_field_slider_wide_pane_vc_t

0x7066,	// (0x00011c3f) input_focus_pane_cp10_vc_ParamLimits

0x7066,	// (0x00011c3f) input_focus_pane_cp10_vc

0xb4eb,	// (0x000160c4) slider_cont_pane_cp1_vc_ParamLimits

0xb4eb,	// (0x000160c4) slider_cont_pane_cp1_vc

0xb4fd,	// (0x000160d6) slider_form_pane_g1_cp2

0xb0db,	// (0x00015cb4) slider_form_pane_g2_cp2

0xb52a,	// (0x00016103) form_field_slider_pane_vc_t3

0xb538,	// (0x00016111) form_field_slider_pane_vc_t4

0xb546,	// (0x0001611f) slider_form_pane_vc_ParamLimits

0xb546,	// (0x0001611f) slider_form_pane_vc

0xb553,	// (0x0001612c) form_field_slider_pane_vc_t1_ParamLimits

0xb553,	// (0x0001612c) form_field_slider_pane_vc_t1

0xb4bd,	// (0x00016096) form_field_slider_pane_vc_t2_ParamLimits

0xb4bd,	// (0x00016096) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0001a66f) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0001a66f) form_field_slider_pane_vc_t

0x7066,	// (0x00011c3f) input_focus_pane_cp9_vc_ParamLimits

0x7066,	// (0x00011c3f) input_focus_pane_cp9_vc

0xb56f,	// (0x00016148) slider_cont_pane_vc_ParamLimits

0xb56f,	// (0x00016148) slider_cont_pane_vc

0xb583,	// (0x0001615c) list_form_graphic_pane_cp_vc_ParamLimits

0xb583,	// (0x0001615c) list_form_graphic_pane_cp_vc

0x948a,	// (0x00014063) form_field_popup_wide_pane_vc_g1

0xb598,	// (0x00016171) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb598,	// (0x00016171) form_field_popup_wide_pane_vc_t1

0x7bd2,	// (0x000127ab) input_focus_pane_cp8_vc_ParamLimits

0x7bd2,	// (0x000127ab) input_focus_pane_cp8_vc

0xb5dd,	// (0x000161b6) list_form_wide_pane_vc_ParamLimits

0xb5dd,	// (0x000161b6) list_form_wide_pane_vc

0xb5e9,	// (0x000161c2) list_form_graphic_pane_vc_g1

0xb5f1,	// (0x000161ca) list_form_graphic_pane_vc_t1_ParamLimits

0xb5f1,	// (0x000161ca) list_form_graphic_pane_vc_t1

0x6dd1,	// (0x000119aa) list_highlight_pane_cp5_vc_ParamLimits

0x6dd1,	// (0x000119aa) list_highlight_pane_cp5_vc

0xb60d,	// (0x000161e6) list_form_graphic_pane_vc_ParamLimits

0xb60d,	// (0x000161e6) list_form_graphic_pane_vc

0x948a,	// (0x00014063) form_field_popup_pane_vc_g1

0xb623,	// (0x000161fc) form_field_popup_pane_vc_t1_ParamLimits

0xb623,	// (0x000161fc) form_field_popup_pane_vc_t1

0x7bd2,	// (0x000127ab) input_focus_pane_cp7_vc_ParamLimits

0x7bd2,	// (0x000127ab) input_focus_pane_cp7_vc

0xb63a,	// (0x00016213) list_form_pane_vc_ParamLimits

0xb63a,	// (0x00016213) list_form_pane_vc

0xb646,	// (0x0001621f) data_form_pane_vc_t1_ParamLimits

0xb646,	// (0x0001621f) data_form_pane_vc_t1

0x7cfb,	// (0x000128d4) input_focus_pane_vc_g1

0x7d03,	// (0x000128dc) input_focus_pane_vc_g2

0x7d0b,	// (0x000128e4) input_focus_pane_vc_g3

0x7d13,	// (0x000128ec) input_focus_pane_vc_g4

0x7d1b,	// (0x000128f4) input_focus_pane_vc_g5

0x7d23,	// (0x000128fc) input_focus_pane_vc_g6

0x7d2b,	// (0x00012904) input_focus_pane_vc_g7

0x7d33,	// (0x0001290c) input_focus_pane_vc_g8

0x7d3b,	// (0x00012914) input_focus_pane_vc_g9

0x6ce7,	// (0x000118c0) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001a266) input_focus_pane_vc_g

0x947e,	// (0x00014057) data_form_pane_vc_ParamLimits

0x947e,	// (0x00014057) data_form_pane_vc

0x948a,	// (0x00014063) form_field_data_pane_vc_g1

0xb661,	// (0x0001623a) form_field_data_pane_vc_t1_ParamLimits

0xb661,	// (0x0001623a) form_field_data_pane_vc_t1

0x7bd2,	// (0x000127ab) input_focus_pane_vc_ParamLimits

0x7bd2,	// (0x000127ab) input_focus_pane_vc

0xb67b,	// (0x00016254) button_value_adjust_pane_cp3_vc

0xb683,	// (0x0001625c) button_value_adjust_pane_cp5_vc

0xb68b,	// (0x00016264) form_field_data_pane_vc_ParamLimits

0xb68b,	// (0x00016264) form_field_data_pane_vc

0xb6a2,	// (0x0001627b) form_field_data_pane_vc_cp2

0xb6aa,	// (0x00016283) form_field_data_wide_pane_vc_ParamLimits

0xb6aa,	// (0x00016283) form_field_data_wide_pane_vc

0xb6c0,	// (0x00016299) form_field_data_wide_pane_vc_cp2

0xb6c8,	// (0x000162a1) form_field_popup_pane_vc_ParamLimits

0xb6c8,	// (0x000162a1) form_field_popup_pane_vc

0xb6df,	// (0x000162b8) form_field_popup_wide_pane_vc_ParamLimits

0xb6df,	// (0x000162b8) form_field_popup_wide_pane_vc

0xb6f5,	// (0x000162ce) form_field_slider_pane_vc_ParamLimits

0xb6f5,	// (0x000162ce) form_field_slider_pane_vc

0xb708,	// (0x000162e1) form_field_slider_wide_pane_vc_ParamLimits

0xb708,	// (0x000162e1) form_field_slider_wide_pane_vc

0xb71b,	// (0x000162f4) grid_touch_1_pane_ParamLimits

0xb71b,	// (0x000162f4) grid_touch_1_pane

0xb727,	// (0x00016300) grid_touch_2_pane_ParamLimits

0xb727,	// (0x00016300) grid_touch_2_pane

0x8d1f,	// (0x000138f8) touch_pane_g1_ParamLimits

0x8d1f,	// (0x000138f8) touch_pane_g1

0xb73f,	// (0x00016318) cell_app_pane_cp_wide_ParamLimits

0xb73f,	// (0x00016318) cell_app_pane_cp_wide

0xb750,	// (0x00016329) grid_popup_fast_wide_pane_ParamLimits

0xb750,	// (0x00016329) grid_popup_fast_wide_pane

0xb764,	// (0x0001633d) scroll_pane_cp19_ParamLimits

0xb764,	// (0x0001633d) scroll_pane_cp19

0x6cf1,	// (0x000118ca) bg_popup_window_pane_cp20

0xb778,	// (0x00016351) listscroll_popup_fast_wide_pane

0x6dd1,	// (0x000119aa) grid_indicator_nsta_pane

0xb780,	// (0x00016359) clock_nsta_pane_g1

0xb789,	// (0x00016362) clock_nsta_pane_t1

0xb7a5,	// (0x0001637e) cell_indicator_nsta_pane_ParamLimits

0xb7a5,	// (0x0001637e) cell_indicator_nsta_pane

0xb7dd,	// (0x000163b6) cell_indicator_nsta_pane_g1

0xb7eb,	// (0x000163c4) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0001a680) cell_indicator_nsta_pane_g

0xb801,	// (0x000163da) clock_nsta_pane_cp

0xb809,	// (0x000163e2) indicator_nsta_pane_cp

0xb811,	// (0x000163ea) nsta_clock_indic_pane_g1

0x6eb4,	// (0x00011a8d) grid_indicator_pane

0x82db,	// (0x00012eb4) scroll_pane_cp29

0x509d,	// (0x0000fc76) indicator_nsta_pane_cp2_ParamLimits

0x509d,	// (0x0000fc76) indicator_nsta_pane_cp2

0x6dd1,	// (0x000119aa) main_apps_wheel_pane

0x96dd,	// (0x000142b6) form_midp_field_text_pane_ParamLimits

0x9828,	// (0x00014401) scroll_bar_cp050_ParamLimits

0xb86a,	// (0x00016443) cell_indicator_pane_ParamLimits

0xb86a,	// (0x00016443) cell_indicator_pane

0xb881,	// (0x0001645a) cell_indicator_pane_g1

0xb88b,	// (0x00016464) grid_wheel_folder_pane_ParamLimits

0xb88b,	// (0x00016464) grid_wheel_folder_pane

0xb8a1,	// (0x0001647a) list_wheel_apps_pane_ParamLimits

0xb8a1,	// (0x0001647a) list_wheel_apps_pane

0xb8b2,	// (0x0001648b) main_apps_wheel_pane_g1_ParamLimits

0xb8b2,	// (0x0001648b) main_apps_wheel_pane_g1

0xb8c6,	// (0x0001649f) main_apps_wheel_pane_g2_ParamLimits

0xb8c6,	// (0x0001649f) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0001a69c) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0001a69c) main_apps_wheel_pane_g

0xb8de,	// (0x000164b7) main_apps_wheel_pane_t1_ParamLimits

0xb8de,	// (0x000164b7) main_apps_wheel_pane_t1

0xb901,	// (0x000164da) list_wheel_apps_pane_g1

0xb909,	// (0x000164e2) list_wheel_apps_pane_g2

0xb911,	// (0x000164ea) list_wheel_apps_pane_g3

0xb919,	// (0x000164f2) list_wheel_apps_pane_g4

0xb923,	// (0x000164fc) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0001a6a1) list_wheel_apps_pane_g

0x88e2,	// (0x000134bb) navi_icon_text_pane

0x8dd4,	// (0x000139ad) aid_fill_nsta

0xb946,	// (0x0001651f) navi_icon_text_pane_g1

0xb952,	// (0x0001652b) navi_icon_text_pane_t1

0x8780,	// (0x00013359) list_set_graphic_pane_t1_ParamLimits

0x8780,	// (0x00013359) list_set_graphic_pane_t1

0x9f83,	// (0x00014b5c) popup_midp_note_alarm_window_t6_ParamLimits

0x9f83,	// (0x00014b5c) popup_midp_note_alarm_window_t6

0x9f95,	// (0x00014b6e) popup_midp_note_alarm_window_t7_ParamLimits

0x9f95,	// (0x00014b6e) popup_midp_note_alarm_window_t7

0x9fa7,	// (0x00014b80) popup_midp_note_alarm_window_t8_ParamLimits

0x9fa7,	// (0x00014b80) popup_midp_note_alarm_window_t8

0x9fb9,	// (0x00014b92) popup_midp_note_alarm_window_t9_ParamLimits

0x9fb9,	// (0x00014b92) popup_midp_note_alarm_window_t9

0x9fcb,	// (0x00014ba4) popup_midp_note_alarm_window_t10_ParamLimits

0x9fcb,	// (0x00014ba4) popup_midp_note_alarm_window_t10

0x9fdd,	// (0x00014bb6) popup_midp_note_alarm_window_t11_ParamLimits

0x9fdd,	// (0x00014bb6) popup_midp_note_alarm_window_t11

0x9fef,	// (0x00014bc8) scroll_pane_cp17_ParamLimits

0x9fef,	// (0x00014bc8) scroll_pane_cp17

0x5b40,	// (0x00010719) volume_small_pane_cp_g1

0x5e35,	// (0x00010a0e) volume_small_pane_cp_g2

0x5e3e,	// (0x00010a17) volume_small_pane_cp_g3

0x5e47,	// (0x00010a20) volume_small_pane_cp_g4

0x5e50,	// (0x00010a29) volume_small_pane_cp_g5

0x5e59,	// (0x00010a32) volume_small_pane_cp_g6

0x5e62,	// (0x00010a3b) volume_small_pane_cp_g7

0x5e6b,	// (0x00010a44) volume_small_pane_cp_g8

0x5e74,	// (0x00010a4d) volume_small_pane_cp_g9

0x5e7d,	// (0x00010a56) volume_small_pane_cp_g10

0x8b31,	// (0x0001370a) midp_ticker_pane_g1_ParamLimits

0x8b3d,	// (0x00013716) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001a332) midp_ticker_pane_g_ParamLimits

0x8b49,	// (0x00013722) midp_ticker_pane_t1_ParamLimits

0x8dea,	// (0x000139c3) aid_fill_nsta_2

0x9814,	// (0x000143ed) list_form2_midp_pane

0xa9e2,	// (0x000155bb) midp_editing_number_pane_ParamLimits

0xa9f1,	// (0x000155ca) midp_ticker_pane_ParamLimits

0xb964,	// (0x0001653d) form2_midp_field_pane

0xb988,	// (0x00016561) scroll_pane_cp51

0xb9a8,	// (0x00016581) form2_midp_button_pane_ParamLimits

0xb9a8,	// (0x00016581) form2_midp_button_pane

0xb9ba,	// (0x00016593) form2_midp_content_pane_ParamLimits

0xb9ba,	// (0x00016593) form2_midp_content_pane

0xb9d4,	// (0x000165ad) form2_midp_field_choice_group_pane

0xb9dc,	// (0x000165b5) form2_midp_field_pane_g1

0xb9e4,	// (0x000165bd) form2_midp_field_pane_g2

0xb9ec,	// (0x000165c5) form2_midp_field_pane_g3

0xb9f4,	// (0x000165cd) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0001a6c6) form2_midp_field_pane_g

0xb9fc,	// (0x000165d5) form2_midp_gauge_slider_pane

0xba04,	// (0x000165dd) form2_midp_gauge_wait_pane

0xba0c,	// (0x000165e5) form2_midp_image_pane_ParamLimits

0xba0c,	// (0x000165e5) form2_midp_image_pane

0xba27,	// (0x00016600) form2_midp_label_pane_ParamLimits

0xba27,	// (0x00016600) form2_midp_label_pane

0xba40,	// (0x00016619) form2_midp_label_pane_cp_ParamLimits

0xba40,	// (0x00016619) form2_midp_label_pane_cp

0xba61,	// (0x0001663a) form2_midp_string_pane_ParamLimits

0xba61,	// (0x0001663a) form2_midp_string_pane

0xba73,	// (0x0001664c) form2_midp_text_pane_ParamLimits

0xba73,	// (0x0001664c) form2_midp_text_pane

0xba90,	// (0x00016669) form2_midp_time_pane

0xbaa0,	// (0x00016679) input_focus_pane_cp51_ParamLimits

0xbaa0,	// (0x00016679) input_focus_pane_cp51

0xbab8,	// (0x00016691) form2_midp_label_pane_t1_ParamLimits

0xbab8,	// (0x00016691) form2_midp_label_pane_t1

0xbaf9,	// (0x000166d2) form2_mdip_text_pane_t1_ParamLimits

0xbaf9,	// (0x000166d2) form2_mdip_text_pane_t1

0xbb18,	// (0x000166f1) form2_midp_time_pane_t1

0xbb33,	// (0x0001670c) form2_midp_gauge_slider_pane_t1

0xbb45,	// (0x0001671e) form2_midp_gauge_slider_pane_t2

0xbb57,	// (0x00016730) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0001a6cf) form2_midp_gauge_slider_pane_t

0xbb69,	// (0x00016742) form2_midp_slider_pane

0xbb75,	// (0x0001674e) form2_midp_gauge_wait_pane_t1

0xbb83,	// (0x0001675c) form2_midp_wait_pane_ParamLimits

0xbb83,	// (0x0001675c) form2_midp_wait_pane

0x94d1,	// (0x000140aa) list_single_2graphic_pane_cp4_ParamLimits

0x94d1,	// (0x000140aa) list_single_2graphic_pane_cp4

0xbbae,	// (0x00016787) list_single_midp_graphic_pane_cp_ParamLimits

0xbbae,	// (0x00016787) list_single_midp_graphic_pane_cp

0x6cf1,	// (0x000118ca) list_highlight_pane_cp20

0xbbdd,	// (0x000167b6) list_single_2graphic_pane_g1_cp4

0xbbe5,	// (0x000167be) list_single_2graphic_pane_g2_cp4

0xbbed,	// (0x000167c6) list_single_2graphic_pane_t1_cp4

0x6dd1,	// (0x000119aa) list_highlight_pane_cp21

0xbbfc,	// (0x000167d5) list_single_midp_graphic_pane_g4_cp

0xbc0b,	// (0x000167e4) list_single_midp_graphic_pane_t1_cp

0xbc20,	// (0x000167f9) form2_mdip_string_pane_t1_ParamLimits

0xbc20,	// (0x000167f9) form2_mdip_string_pane_t1

0x6cf1,	// (0x000118ca) bg_wml_button_pane_cp2

0x6ce7,	// (0x000118c0) form2_midp_image_pane_g1

0x7890,	// (0x00012469) list_double_large_graphic_pane_g5_ParamLimits

0x7890,	// (0x00012469) list_double_large_graphic_pane_g5

0x7f30,	// (0x00012b09) midp_form_pane_ParamLimits

0x6dd1,	// (0x000119aa) main_apps_wheel_pane_ParamLimits

0x5780,	// (0x00010359) popup_preview_window_ParamLimits

0x5780,	// (0x00010359) popup_preview_window

0x593b,	// (0x00010514) popup_touch_info_window_ParamLimits

0x593b,	// (0x00010514) popup_touch_info_window

0x5959,	// (0x00010532) popup_touch_menu_window_ParamLimits

0x5959,	// (0x00010532) popup_touch_menu_window

0x6cdd,	// (0x000118b6) bg_popup_sub_pane_cp6

0xbd19,	// (0x000168f2) list_touch_menu_pane

0xbd21,	// (0x000168fa) list_single_touch_menu_pane_ParamLimits

0xbd21,	// (0x000168fa) list_single_touch_menu_pane

0xbd37,	// (0x00016910) list_single_touch_menu_pane_t1

0x6dd1,	// (0x000119aa) bg_popup_sub_pane_cp7_ParamLimits

0x6dd1,	// (0x000119aa) bg_popup_sub_pane_cp7

0xbd45,	// (0x0001691e) heading_sub_pane

0xbd4d,	// (0x00016926) list_touch_info_pane_ParamLimits

0xbd4d,	// (0x00016926) list_touch_info_pane

0xbd5c,	// (0x00016935) list_single_touch_info_pane_ParamLimits

0xbd5c,	// (0x00016935) list_single_touch_info_pane

0xbd6e,	// (0x00016947) list_single_touch_info_pane_t1

0xbd7c,	// (0x00016955) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0001a6dd) list_single_touch_info_pane_t

0x8a62,	// (0x0001363b) bg_popup_heading_pane_cp

0xbd8a,	// (0x00016963) heading_sub_pane_t1

0x9418,	// (0x00013ff1) bg_popup_preview_window_pane_cp_ParamLimits

0x9418,	// (0x00013ff1) bg_popup_preview_window_pane_cp

0xbd45,	// (0x0001691e) heading_preview_pane

0xbd4d,	// (0x00016926) list_preview_pane_ParamLimits

0xbd4d,	// (0x00016926) list_preview_pane

0xbd98,	// (0x00016971) popup_preview_window_g1

0xbd5c,	// (0x00016935) list_single_preview_pane_ParamLimits

0xbd5c,	// (0x00016935) list_single_preview_pane

0xbda0,	// (0x00016979) list_single_preview_pane_g1

0xbda8,	// (0x00016981) list_single_preview_pane_t1

0xbd6e,	// (0x00016947) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0001a6e2) list_single_preview_pane_t

0xbdb6,	// (0x0001698f) bg_popup_heading_pane_cp2_ParamLimits

0xbdb6,	// (0x0001698f) bg_popup_heading_pane_cp2

0xbdcc,	// (0x000169a5) heading_preview_pane_g1

0xbdd4,	// (0x000169ad) heading_preview_pane_t1_ParamLimits

0xbdd4,	// (0x000169ad) heading_preview_pane_t1

0x6ed7,	// (0x00011ab0) soft_indicator_pane_t1_ParamLimits

0x75ca,	// (0x000121a3) scroll_pane_ParamLimits

0x81d4,	// (0x00012dad) scroll_sc2_left_pane

0x81dd,	// (0x00012db6) scroll_sc2_right_pane

0x81fc,	// (0x00012dd5) scroll_bg_pane_g1_ParamLimits

0x8211,	// (0x00012dea) scroll_bg_pane_g2_ParamLimits

0x8229,	// (0x00012e02) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001a2bd) scroll_bg_pane_g_ParamLimits

0x81fc,	// (0x00012dd5) scroll_handle_pane_g1_ParamLimits

0x824b,	// (0x00012e24) scroll_handle_pane_g2_ParamLimits

0x8229,	// (0x00012e02) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001a2c4) scroll_handle_pane_g_ParamLimits

0x5403,	// (0x0000ffdc) popup_choice_list_window_ParamLimits

0x5403,	// (0x0000ffdc) popup_choice_list_window

0x9206,	// (0x00013ddf) choice_list_pane

0x92b6,	// (0x00013e8f) cell_toolbar_pane_t1

0x92de,	// (0x00013eb7) toolbar_button_pane_ParamLimits

0xa4a9,	// (0x00015082) ai_gene_pane_1_t2_ParamLimits

0xa4a9,	// (0x00015082) ai_gene_pane_1_t2

0x0001,

0xf913,	// (0x0001a4ec) ai_gene_pane_1_t_ParamLimits

0xf913,	// (0x0001a4ec) ai_gene_pane_1_t

0xbdf1,	// (0x000169ca) scroll_sc2_left_pane_g1

0xbdf1,	// (0x000169ca) scroll_sc2_right_pane_g1

0x8daa,	// (0x00013983) bg_popup_sub_pane_cp10

0xbdfb,	// (0x000169d4) list_choice_list_pane

0xbe14,	// (0x000169ed) list_single_choice_list_pane_ParamLimits

0xbe14,	// (0x000169ed) list_single_choice_list_pane

0xbe27,	// (0x00016a00) list_single_choice_list_pane_g1

0x7ee0,	// (0x00012ab9) list_single_choice_list_pane_t1_ParamLimits

0x7ee0,	// (0x00012ab9) list_single_choice_list_pane_t1

0xbe2f,	// (0x00016a08) choice_list_pane_g1

0xbe37,	// (0x00016a10) choice_list_pane_t1

0x6cdd,	// (0x000118b6) input_focus_pane_cp11

0x80b7,	// (0x00012c90) title_pane_stacon_g2_ParamLimits

0x80b7,	// (0x00012c90) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001a2a3) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001a2a3) title_pane_stacon_g

0x8a62,	// (0x0001363b) cursor_press_pane

0x54af,	// (0x00010088) popup_fep_hwr_window_ParamLimits

0x54af,	// (0x00010088) popup_fep_hwr_window

0x5529,	// (0x00010102) popup_fep_vkb_window_ParamLimits

0x5529,	// (0x00010102) popup_fep_vkb_window

0xbe45,	// (0x00016a1e) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0001a70b) fep_vkb_side_pane_g_ParamLimits

0x5ebf,	// (0x00010a98) fep_hwr_candidate_pane_ParamLimits

0x5ebf,	// (0x00010a98) fep_hwr_candidate_pane

0x5ee9,	// (0x00010ac2) fep_hwr_side_pane_ParamLimits

0x5ee9,	// (0x00010ac2) fep_hwr_side_pane

0x5f09,	// (0x00010ae2) fep_hwr_top_pane_ParamLimits

0x5f09,	// (0x00010ae2) fep_hwr_top_pane

0x5f21,	// (0x00010afa) fep_hwr_write_pane_ParamLimits

0x5f21,	// (0x00010afa) fep_hwr_write_pane

0xfb32,	// (0x0001a70b) fep_vkb_side_pane_g

0xbe4d,	// (0x00016a26) fep_hwr_top_pane_g1

0xbe5f,	// (0x00016a38) fep_hwr_top_pane_g2

0x5f5b,	// (0x00010b34) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0001a6e7) fep_hwr_top_pane_g

0x5f70,	// (0x00010b49) fep_hwr_top_text_pane

0x83cb,	// (0x00012fa4) fep_hwr_top_text_pane_g1

0xbe95,	// (0x00016a6e) fep_hwr_top_text_pane_t1

0x6066,	// (0x00010c3f) fep_hwr_candidate_pane_g1

0xc0e8,	// (0x00016cc1) fep_vkb_keypad_pane_g3_ParamLimits

0xc0e8,	// (0x00016cc1) fep_vkb_keypad_pane_g3

0xc110,	// (0x00016ce9) fep_vkb_keypad_pane_g4_ParamLimits

0xc110,	// (0x00016ce9) fep_vkb_keypad_pane_g4

0xc17f,	// (0x00016d58) fep_vkb_bottom_pane_g2_ParamLimits

0xc17f,	// (0x00016d58) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0001a712) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0001a712) fep_vkb_bottom_pane_g

0xbdf1,	// (0x000169ca) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0001a71c) cell_vkb_side_pane_g

0xc20a,	// (0x00016de3) cell_vkb_side_pane_t1

0xc218,	// (0x00016df1) cell_vkb_side_pane_t1_copy1

0xbdf1,	// (0x000169ca) bg_fep_vkb_candidate_pane_g2

0xc344,	// (0x00016f1d) cell_vkb_candidate_pane_ParamLimits

0xbea3,	// (0x00016a7c) aid_size_cell_vkb_ParamLimits

0xbea3,	// (0x00016a7c) aid_size_cell_vkb

0xc344,	// (0x00016f1d) cell_vkb_candidate_pane

0x608d,	// (0x00010c66) bg_popup_fep_shadow_pane_g1

0xbf31,	// (0x00016b0a) fep_vkb_bottom_pane_ParamLimits

0xbf31,	// (0x00016b0a) fep_vkb_bottom_pane

0xbf67,	// (0x00016b40) fep_vkb_candidate_pane_ParamLimits

0xbf67,	// (0x00016b40) fep_vkb_candidate_pane

0xbf83,	// (0x00016b5c) fep_vkb_keypad_pane_ParamLimits

0xbf83,	// (0x00016b5c) fep_vkb_keypad_pane

0xbfc9,	// (0x00016ba2) fep_vkb_side_pane_ParamLimits

0xbfc9,	// (0x00016ba2) fep_vkb_side_pane

0xc005,	// (0x00016bde) fep_vkb_top_pane_ParamLimits

0xc005,	// (0x00016bde) fep_vkb_top_pane

0xc041,	// (0x00016c1a) fep_vkb_top_pane_g1_ParamLimits

0xc041,	// (0x00016c1a) fep_vkb_top_pane_g1

0xc050,	// (0x00016c29) fep_vkb_top_pane_g2_ParamLimits

0xc050,	// (0x00016c29) fep_vkb_top_pane_g2

0xc05f,	// (0x00016c38) fep_vkb_top_pane_g3_ParamLimits

0xc05f,	// (0x00016c38) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0001a702) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0001a702) fep_vkb_top_pane_g

0xc07d,	// (0x00016c56) fep_vkb_top_text_pane_ParamLimits

0xc07d,	// (0x00016c56) fep_vkb_top_text_pane

0xc08e,	// (0x00016c67) fep_vkb_side_pane_g1_ParamLimits

0xc08e,	// (0x00016c67) fep_vkb_side_pane_g1

0xc0d7,	// (0x00016cb0) grid_vkb_side_pane_ParamLimits

0xc0d7,	// (0x00016cb0) grid_vkb_side_pane

0x6095,	// (0x00010c6e) bg_popup_fep_shadow_pane_g2

0x609e,	// (0x00010c77) bg_popup_fep_shadow_pane_g3

0x60a6,	// (0x00010c7f) bg_popup_fep_shadow_pane_g4

0x60af,	// (0x00010c88) bg_popup_fep_shadow_pane_g5

0x60b9,	// (0x00010c92) bg_popup_fep_shadow_pane_g6

0x60c1,	// (0x00010c9a) bg_popup_fep_shadow_pane_g7

0x7d13,	// (0x000128ec) bg_popup_fep_shadow_pane_g8

0xc12e,	// (0x00016d07) grid_vkb_keypad_number_pane_ParamLimits

0xc12e,	// (0x00016d07) grid_vkb_keypad_number_pane

0xc13e,	// (0x00016d17) grid_vkb_keypad_pane_ParamLimits

0xc13e,	// (0x00016d17) grid_vkb_keypad_pane

0xc164,	// (0x00016d3d) fep_vkb_bottom_pane_g1_ParamLimits

0xc164,	// (0x00016d3d) fep_vkb_bottom_pane_g1

0xc18d,	// (0x00016d66) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc18d,	// (0x00016d66) grid_vkb_keypad_bottom_left_pane

0xc1a2,	// (0x00016d7b) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc1a2,	// (0x00016d7b) grid_vkb_keypad_bottom_right_pane

0xc1b7,	// (0x00016d90) fep_vkb_top_text_pane_g1

0xc1d2,	// (0x00016dab) fep_vkb_top_text_pane_t1

0xc1e7,	// (0x00016dc0) cell_vkb_side_pane_ParamLimits

0xc1e7,	// (0x00016dc0) cell_vkb_side_pane

0xbdf1,	// (0x000169ca) cell_vkb_side_pane_g1

0xc226,	// (0x00016dff) cell_vkb_keypad_pane_ParamLimits

0xc226,	// (0x00016dff) cell_vkb_keypad_pane

0xc29b,	// (0x00016e74) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0001a72f) bg_popup_fep_shadow_pane_g

0x60d3,	// (0x00010cac) cell_hwr_side_pane_g1

0x60d3,	// (0x00010cac) cell_hwr_side_pane_g2

0xc2a5,	// (0x00016e7e) cell_vkb_keypad_pane_t1

0xc2b3,	// (0x00016e8c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc2b3,	// (0x00016e8c) cell_vkb_keypad_bottom_left_pane

0xc2d0,	// (0x00016ea9) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc2d0,	// (0x00016ea9) cell_vkb_keypad_bottom_right_pane

0xbdf1,	// (0x000169ca) cell_vkb_keypad_bottom_left_pane_g1

0xbdf1,	// (0x000169ca) cell_vkb_keypad_bottom_right_pane_g1

0xc309,	// (0x00016ee2) cell_vkb_keypad_number_pane_ParamLimits

0xc309,	// (0x00016ee2) cell_vkb_keypad_number_pane

0xc328,	// (0x00016f01) cell_vkb_keypad_number_pane_g1

0xc332,	// (0x00016f0b) cell_vkb_keypad_number_pane_g2

0xc33b,	// (0x00016f14) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0001a721) cell_vkb_keypad_number_pane_g

0xc2a5,	// (0x00016e7e) cell_vkb_keypad_number_pane_t1

0xc35f,	// (0x00016f38) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0001a742) cell_hwr_side_pane_g

0xc378,	// (0x00016f51) cell_hwr_side_pane_t1

0x60dd,	// (0x00010cb6) cell_hwr_side_pane_t1_copy1

0x60eb,	// (0x00010cc4) cell_hwr_candidate_pane_g1

0x611a,	// (0x00010cf3) cell_hwr_candidate_pane_t1

0xbdf1,	// (0x000169ca) cell_vkb_candidate_pane_g2

0xc3fe,	// (0x00016fd7) cell_vkb_candidate_pane_t1

0x5e86,	// (0x00010a5f) bg_popup_fep_shadow_pane_ParamLimits

0x5e86,	// (0x00010a5f) bg_popup_fep_shadow_pane

0x5f3b,	// (0x00010b14) bg_fep_hwr_top_pane_g4

0xbe71,	// (0x00016a4a) bg_hwr_side_pane_g1_ParamLimits

0xbe71,	// (0x00016a4a) bg_hwr_side_pane_g1

0x5fac,	// (0x00010b85) cell_hwr_side_pane_ParamLimits

0x5fac,	// (0x00010b85) cell_hwr_side_pane

0x5fe7,	// (0x00010bc0) fep_hwr_write_pane_g1_ParamLimits

0x5fe7,	// (0x00010bc0) fep_hwr_write_pane_g1

0x5ff4,	// (0x00010bcd) fep_hwr_write_pane_g2_ParamLimits

0x5ff4,	// (0x00010bcd) fep_hwr_write_pane_g2

0x6001,	// (0x00010bda) fep_hwr_write_pane_g3_ParamLimits

0x6001,	// (0x00010bda) fep_hwr_write_pane_g3

0x600f,	// (0x00010be8) fep_hwr_write_pane_g4_ParamLimits

0x600f,	// (0x00010be8) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0001a6ee) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0001a6ee) fep_hwr_write_pane_g

0x5f3b,	// (0x00010b14) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5f3b,	// (0x00010b14) bg_fep_hwr_candidate_pane_g2

0x6024,	// (0x00010bfd) cell_hwr_candidate_pane_ParamLimits

0x6024,	// (0x00010bfd) cell_hwr_candidate_pane

0x6066,	// (0x00010c3f) fep_hwr_candidate_pane_g1_ParamLimits

0xbed1,	// (0x00016aaa) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xbed1,	// (0x00016aaa) bg_popup_fep_shadow_pane_cp2

0xc06f,	// (0x00016c48) fep_vkb_top_pane_g4_ParamLimits

0xc06f,	// (0x00016c48) fep_vkb_top_pane_g4

0xc0b5,	// (0x00016c8e) fep_vkb_side_pane_g2_ParamLimits

0xc0b5,	// (0x00016c8e) fep_vkb_side_pane_g2

0x79f4,	// (0x000125cd) list_setting_pane_t4_ParamLimits

0x79f4,	// (0x000125cd) list_setting_pane_t4

0x7a6e,	// (0x00012647) list_setting_number_pane_t5_ParamLimits

0x7a6e,	// (0x00012647) list_setting_number_pane_t5

0x8412,	// (0x00012feb) list_double_heading_pane_cp2_ParamLimits

0x8412,	// (0x00012feb) list_double_heading_pane_cp2

0x781b,	// (0x000123f4) list_double_heading_pane_g1_cp2_ParamLimits

0x781b,	// (0x000123f4) list_double_heading_pane_g1_cp2

0x7bf8,	// (0x000127d1) list_double_heading_pane_g2_cp2_ParamLimits

0x7bf8,	// (0x000127d1) list_double_heading_pane_g2_cp2

0xc40c,	// (0x00016fe5) list_double_heading_pane_t1_cp2_ParamLimits

0xc40c,	// (0x00016fe5) list_double_heading_pane_t1_cp2

0xc422,	// (0x00016ffb) list_double_heading_pane_t2_cp2_ParamLimits

0xc422,	// (0x00016ffb) list_double_heading_pane_t2_cp2

0x6cc5,	// (0x0001189e) aid_value_unit2

0x4c2d,	// (0x0000f806) popup_preview_fixed_window

0x7074,	// (0x00011c4d) bg_popup_preview_window_pane_cp02

0xc434,	// (0x0001700d) list_preview_fixed_pane

0xc47a,	// (0x00017053) list_empty_pane_fp_ParamLimits

0xc47a,	// (0x00017053) list_empty_pane_fp

0xc47a,	// (0x00017053) list_single_cale_day_pane_fp_ParamLimits

0xc47a,	// (0x00017053) list_single_cale_day_pane_fp

0xc47a,	// (0x00017053) list_single_graphic_heading_pane_fp_ParamLimits

0xc47a,	// (0x00017053) list_single_graphic_heading_pane_fp

0xc47a,	// (0x00017053) list_single_graphic_pane_fp_ParamLimits

0xc47a,	// (0x00017053) list_single_graphic_pane_fp

0xc47a,	// (0x00017053) list_single_heading_pane_fp_ParamLimits

0xc47a,	// (0x00017053) list_single_heading_pane_fp

0xc47a,	// (0x00017053) list_single_pane_fp_ParamLimits

0xc47a,	// (0x00017053) list_single_pane_fp

0xc48f,	// (0x00017068) list_single_pane_fp_g1_ParamLimits

0xc48f,	// (0x00017068) list_single_pane_fp_g1

0x781b,	// (0x000123f4) list_single_pane_fp_g2_ParamLimits

0x781b,	// (0x000123f4) list_single_pane_fp_g2

0x7bf8,	// (0x000127d1) list_single_pane_fp_g3_ParamLimits

0x7bf8,	// (0x000127d1) list_single_pane_fp_g3

0xc49b,	// (0x00017074) list_single_pane_fp_g4_ParamLimits

0xc49b,	// (0x00017074) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0001a755) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0001a755) list_single_pane_fp_g

0xc4a7,	// (0x00017080) list_single_pane_fp_t1_ParamLimits

0xc4a7,	// (0x00017080) list_single_pane_fp_t1

0xc4be,	// (0x00017097) list_single_graphic_pane_fp_g1_ParamLimits

0xc4be,	// (0x00017097) list_single_graphic_pane_fp_g1

0xc48f,	// (0x00017068) list_single_graphic_pane_fp_g2_ParamLimits

0xc48f,	// (0x00017068) list_single_graphic_pane_fp_g2

0x781b,	// (0x000123f4) list_single_graphic_pane_fp_g3_ParamLimits

0x781b,	// (0x000123f4) list_single_graphic_pane_fp_g3

0x7bf8,	// (0x000127d1) list_single_graphic_pane_fp_g4_ParamLimits

0x7bf8,	// (0x000127d1) list_single_graphic_pane_fp_g4

0xc49b,	// (0x00017074) list_single_graphic_pane_fp_g5_ParamLimits

0xc49b,	// (0x00017074) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0001a75e) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0001a75e) list_single_graphic_pane_fp_g

0xc4ca,	// (0x000170a3) list_single_graphic_pane_fp_t1_ParamLimits

0xc4ca,	// (0x000170a3) list_single_graphic_pane_fp_t1

0xc4be,	// (0x00017097) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc4be,	// (0x00017097) list_single_graphic_heading_pane_fp_g1

0xc48f,	// (0x00017068) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc48f,	// (0x00017068) list_single_graphic_heading_pane_fp_g2

0x781b,	// (0x000123f4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x781b,	// (0x000123f4) list_single_graphic_heading_pane_fp_g3

0x7bf8,	// (0x000127d1) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7bf8,	// (0x000127d1) list_single_graphic_heading_pane_fp_g4

0xc49b,	// (0x00017074) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc49b,	// (0x00017074) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001a75e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001a75e) list_single_graphic_heading_pane_fp_g

0xc4e0,	// (0x000170b9) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc4e0,	// (0x000170b9) list_single_graphic_heading_pane_fp_t1

0xc4f6,	// (0x000170cf) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc4f6,	// (0x000170cf) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0001a769) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0001a769) list_single_graphic_heading_pane_fp_t

0xc508,	// (0x000170e1) list_single_cale_day_pane_fp_g1_ParamLimits

0xc508,	// (0x000170e1) list_single_cale_day_pane_fp_g1

0xc540,	// (0x00017119) list_single_cale_day_pane_fp_g2_ParamLimits

0xc540,	// (0x00017119) list_single_cale_day_pane_fp_g2

0xc54c,	// (0x00017125) list_single_cale_day_pane_fp_g3_ParamLimits

0xc54c,	// (0x00017125) list_single_cale_day_pane_fp_g3

0xc574,	// (0x0001714d) list_single_cale_day_pane_fp_g4_ParamLimits

0xc574,	// (0x0001714d) list_single_cale_day_pane_fp_g4

0xc598,	// (0x00017171) list_single_cale_day_pane_fp_g5_ParamLimits

0xc598,	// (0x00017171) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0001a76e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0001a76e) list_single_cale_day_pane_fp_g

0xc5bc,	// (0x00017195) list_single_cale_day_pane_fp_t1_ParamLimits

0xc5bc,	// (0x00017195) list_single_cale_day_pane_fp_t1

0xc5e2,	// (0x000171bb) list_single_cale_day_pane_fp_t2_ParamLimits

0xc5e2,	// (0x000171bb) list_single_cale_day_pane_fp_t2

0xc5fb,	// (0x000171d4) list_single_cale_day_pane_fp_t3_ParamLimits

0xc5fb,	// (0x000171d4) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0001a779) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0001a779) list_single_cale_day_pane_fp_t

0xc48f,	// (0x00017068) list_empty_pane_fp_g1_ParamLimits

0xc48f,	// (0x00017068) list_empty_pane_fp_g1

0xc614,	// (0x000171ed) list_empty_pane_fp_t1

0xc622,	// (0x000171fb) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0001a780) list_empty_pane_fp_t

0xc48f,	// (0x00017068) list_single_heading_pane_fp_g1_ParamLimits

0xc48f,	// (0x00017068) list_single_heading_pane_fp_g1

0x781b,	// (0x000123f4) list_single_heading_pane_fp_g2_ParamLimits

0x781b,	// (0x000123f4) list_single_heading_pane_fp_g2

0x7bf8,	// (0x000127d1) list_single_heading_pane_fp_g3_ParamLimits

0x7bf8,	// (0x000127d1) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0001a785) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0001a785) list_single_heading_pane_fp_g

0xc630,	// (0x00017209) list_single_heading_pane_fp_t1_ParamLimits

0xc630,	// (0x00017209) list_single_heading_pane_fp_t1

0xc642,	// (0x0001721b) list_single_heading_pane_fp_t2_ParamLimits

0xc642,	// (0x0001721b) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0001a78c) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0001a78c) list_single_heading_pane_fp_t

0x7f4e,	// (0x00012b27) aid_size_cell_fast

0x6fe4,	// (0x00011bbd) soft_indicator_pane_cp1_t1

0x7f8b,	// (0x00012b64) cell_app_pane_cp2_ParamLimits

0x7f8b,	// (0x00012b64) cell_app_pane_cp2

0x5ea8,	// (0x00010a81) fep_hwr_candidate_drop_down_list_pane

0x6080,	// (0x00010c59) fep_hwr_candidate_pane_g3_ParamLimits

0x6080,	// (0x00010c59) fep_hwr_candidate_pane_g3

0x3f76,	// (0x0000eb4f) fep_hwr_candidate_pane_g4_ParamLimits

0x3f76,	// (0x0000eb4f) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0001a6fb) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0001a6fb) fep_hwr_candidate_pane_g

0xbf56,	// (0x00016b2f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xbf56,	// (0x00016b2f) fep_vkb_candidate_drop_down_list_pane

0xc367,	// (0x00016f40) fep_vkb_candidate_pane_g3

0xc36f,	// (0x00016f48) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0001a728) fep_vkb_candidate_pane_g

0x60eb,	// (0x00010cc4) cell_hwr_candidate_pane_g1_ParamLimits

0x60f9,	// (0x00010cd2) cell_hwr_candidate_pane_g3_ParamLimits

0x60f9,	// (0x00010cd2) cell_hwr_candidate_pane_g3

0xe40f,	// (0x00018fe8) cell_hwr_candidate_pane_g4_ParamLimits

0xe40f,	// (0x00018fe8) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0001a747) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0001a747) cell_hwr_candidate_pane_g

0xc386,	// (0x00016f5f) cell_vkb_candidate_pane_g3_ParamLimits

0xc386,	// (0x00016f5f) cell_vkb_candidate_pane_g3

0xc3a1,	// (0x00016f7a) cell_vkb_candidate_pane_g4_ParamLimits

0xc3a1,	// (0x00016f7a) cell_vkb_candidate_pane_g4

0xc658,	// (0x00017231) cell_app_pane_cp2_g1_ParamLimits

0xc658,	// (0x00017231) cell_app_pane_cp2_g1

0xc676,	// (0x0001724f) cell_app_pane_cp2_g2_ParamLimits

0xc676,	// (0x0001724f) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0001a791) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0001a791) cell_app_pane_cp2_g

0xc682,	// (0x0001725b) cell_app_pane_cp2_t1_ParamLimits

0xc682,	// (0x0001725b) cell_app_pane_cp2_t1

0x7bd2,	// (0x000127ab) grid_highlight_pane_cp1_ParamLimits

0x7bd2,	// (0x000127ab) grid_highlight_pane_cp1

0x6138,	// (0x00010d11) cell_hwr_candidate_pane_cp1_ParamLimits

0x6138,	// (0x00010d11) cell_hwr_candidate_pane_cp1

0x60eb,	// (0x00010cc4) fep_hwr_candidate_drop_down_list_pane_g1

0x6157,	// (0x00010d30) fep_hwr_candidate_drop_down_list_pane_g2

0x6164,	// (0x00010d3d) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0001a796) fep_hwr_candidate_drop_down_list_pane_g

0x6171,	// (0x00010d4a) fep_hwr_candidate_drop_down_list_scroll_pane

0x617a,	// (0x00010d53) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x617a,	// (0x00010d53) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6187,	// (0x00010d60) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6187,	// (0x00010d60) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6194,	// (0x00010d6d) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6194,	// (0x00010d6d) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x61a1,	// (0x00010d7a) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x61a1,	// (0x00010d7a) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x61bc,	// (0x00010d95) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x61bc,	// (0x00010d95) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x61d7,	// (0x00010db0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x61d7,	// (0x00010db0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x61f2,	// (0x00010dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x61f2,	// (0x00010dcb) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x620d,	// (0x00010de6) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x620d,	// (0x00010de6) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0001a79d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0001a79d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc694,	// (0x0001726d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc694,	// (0x0001726d) cell_vkb_candidate_pane_cp1

0xc06f,	// (0x00016c48) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc06f,	// (0x00016c48) fep_vkb_candidate_drop_down_list_pane_g1

0xc6b4,	// (0x0001728d) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc6b4,	// (0x0001728d) fep_vkb_candidate_drop_down_list_pane_g2

0xc6c1,	// (0x0001729a) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc6c1,	// (0x0001729a) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0001a7ae) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0001a7ae) fep_vkb_candidate_drop_down_list_pane_g

0xc6ce,	// (0x000172a7) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc6ce,	// (0x000172a7) fep_vkb_candidate_drop_down_list_scroll_pane

0xc6db,	// (0x000172b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc6db,	// (0x000172b4) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc6e8,	// (0x000172c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc6e8,	// (0x000172c1) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc6f4,	// (0x000172cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc6f4,	// (0x000172cd) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc3bc,	// (0x00016f95) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc3bc,	// (0x00016f95) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc3dd,	// (0x00016fb6) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc3dd,	// (0x00016fb6) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc700,	// (0x000172d9) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc700,	// (0x000172d9) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc721,	// (0x000172fa) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc721,	// (0x000172fa) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc742,	// (0x0001731b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc742,	// (0x0001731b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0001a7b5) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0001a7b5) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6cfb,	// (0x000118d4) title_pane_g1_ParamLimits

0x6d08,	// (0x000118e1) title_pane_g2_ParamLimits

0xf554,	// (0x0001a12d) title_pane_g_ParamLimits

0x83bb,	// (0x00012f94) aid_call2_pane

0x83c3,	// (0x00012f9c) aid_call_pane

0x83cb,	// (0x00012fa4) popup_clock_analogue_window_g1

0x83cb,	// (0x00012fa4) popup_clock_analogue_window_g2

0x4f9e,	// (0x0000fb77) popup_clock_analogue_window_g3

0x4fa7,	// (0x0000fb80) popup_clock_analogue_window_g4

0x6ce7,	// (0x000118c0) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001a2d2) popup_clock_analogue_window_g

0x4faf,	// (0x0000fb88) popup_clock_analogue_window_t1

0x4fbd,	// (0x0000fb96) clock_digital_number_pane_ParamLimits

0x4fbd,	// (0x0000fb96) clock_digital_number_pane

0x4fc9,	// (0x0000fba2) clock_digital_number_pane_cp02_ParamLimits

0x4fc9,	// (0x0000fba2) clock_digital_number_pane_cp02

0x4fd5,	// (0x0000fbae) clock_digital_number_pane_cp03_ParamLimits

0x4fd5,	// (0x0000fbae) clock_digital_number_pane_cp03

0x4fe1,	// (0x0000fbba) clock_digital_number_pane_cp04_ParamLimits

0x4fe1,	// (0x0000fbba) clock_digital_number_pane_cp04

0x4fed,	// (0x0000fbc6) clock_digital_separator_pane_ParamLimits

0x4fed,	// (0x0000fbc6) clock_digital_separator_pane

0x4ff9,	// (0x0000fbd2) popup_clock_digital_window_t1_ParamLimits

0x4ff9,	// (0x0000fbd2) popup_clock_digital_window_t1

0x6ce7,	// (0x000118c0) clock_digital_number_pane_g1

0x6ce7,	// (0x000118c0) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001a2dd) clock_digital_number_pane_g

0x6ce7,	// (0x000118c0) clock_digital_separator_pane_g1

0x6ce7,	// (0x000118c0) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001a2dd) clock_digital_separator_pane_g

0x8dd4,	// (0x000139ad) aid_fill_nsta_ParamLimits

0x8f1a,	// (0x00013af3) indicator_nsta_pane_ParamLimits

0x9093,	// (0x00013c6c) popup_clock_analogue_window

0x9093,	// (0x00013c6c) popup_clock_digital_window

0x6dd1,	// (0x000119aa) grid_indicator_nsta_pane_ParamLimits

0xb797,	// (0x00016370) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0001a67b) clock_nsta_pane_t

0x4f62,	// (0x0000fb3b) aid_size_max_handle

0x4f6c,	// (0x0000fb45) aid_size_min_handle

0x8a62,	// (0x0001363b) editor_scroll_pane

0xc75d,	// (0x00017336) ex_editor_pane

0x7ebc,	// (0x00012a95) scroll_pane_cp13

0x75f6,	// (0x000121cf) scroll_pane_cp14

0x83fa,	// (0x00012fd3) scroll_pane_cp36

0x8426,	// (0x00012fff) list_single_graphic_hl_pane_cp2_ParamLimits

0x8426,	// (0x00012fff) list_single_graphic_hl_pane_cp2

0xaa9c,	// (0x00015675) list_single_graphic_hl_pane_ParamLimits

0xaa9c,	// (0x00015675) list_single_graphic_hl_pane

0xc765,	// (0x0001733e) aid_size_min_hl_cp1

0xc76e,	// (0x00017347) list_highlight_pane_cp34_ParamLimits

0xc76e,	// (0x00017347) list_highlight_pane_cp34

0xc77f,	// (0x00017358) list_single_graphic_hl_pane_g1_ParamLimits

0xc77f,	// (0x00017358) list_single_graphic_hl_pane_g1

0xc78c,	// (0x00017365) list_single_graphic_hl_pane_g2_ParamLimits

0xc78c,	// (0x00017365) list_single_graphic_hl_pane_g2

0xc78c,	// (0x00017365) list_single_graphic_hl_pane_g3_ParamLimits

0xc78c,	// (0x00017365) list_single_graphic_hl_pane_g3

0xaff0,	// (0x00015bc9) list_single_graphic_hl_pane_g4_ParamLimits

0xaff0,	// (0x00015bc9) list_single_graphic_hl_pane_g4

0xc798,	// (0x00017371) list_single_graphic_hl_pane_g5_ParamLimits

0xc798,	// (0x00017371) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0001a7c6) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0001a7c6) list_single_graphic_hl_pane_g

0xc7ac,	// (0x00017385) list_single_graphic_hl_pane_t1_ParamLimits

0xc7ac,	// (0x00017385) list_single_graphic_hl_pane_t1

0xc7c2,	// (0x0001739b) aid_size_min_hl_cp2

0xc7cb,	// (0x000173a4) list_highlight_pane_cp34_cp2_ParamLimits

0xc7cb,	// (0x000173a4) list_highlight_pane_cp34_cp2

0xc77f,	// (0x00017358) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc77f,	// (0x00017358) list_single_graphic_hl_pane_g1_cp2

0xc7d8,	// (0x000173b1) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc7d8,	// (0x000173b1) list_single_graphic_hl_pane_g2_cp2

0xc7e4,	// (0x000173bd) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc7e4,	// (0x000173bd) list_single_graphic_hl_pane_g3_cp2

0xaff0,	// (0x00015bc9) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xaff0,	// (0x00015bc9) list_single_graphic_hl_pane_g4_cp2

0xc798,	// (0x00017371) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc798,	// (0x00017371) list_single_graphic_hl_pane_g5_cp2

0x52ad,	// (0x0000fe86) control_pane_g4_ParamLimits

0x52ad,	// (0x0000fe86) control_pane_g4

0x8daa,	// (0x00013983) bg_popup_sub_pane_cp10_ParamLimits

0xbdfb,	// (0x000169d4) list_choice_list_pane_ParamLimits

0xbe0a,	// (0x000169e3) scroll_pane_cp23

0x7074,	// (0x00011c4d) bg_popup_preview_window_pane_cp02_ParamLimits

0xc434,	// (0x0001700d) list_preview_fixed_pane_ParamLimits

0xc44a,	// (0x00017023) list_preview_fixed_pane_cp_ParamLimits

0xc44a,	// (0x00017023) list_preview_fixed_pane_cp

0xc456,	// (0x0001702f) popup_preview_fixed_window_g1_ParamLimits

0xc456,	// (0x0001702f) popup_preview_fixed_window_g1

0xc462,	// (0x0001703b) popup_preview_fixed_window_g2_ParamLimits

0xc462,	// (0x0001703b) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0001a74e) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0001a74e) popup_preview_fixed_window_g

0x4ed6,	// (0x0000faaf) aid_navi_side_left_pane_ParamLimits

0x4eeb,	// (0x0000fac4) aid_navi_side_right_pane_ParamLimits

0x4f03,	// (0x0000fadc) navi_icon_pane_stacon_ParamLimits

0x4f17,	// (0x0000faf0) navi_navi_pane_stacon_ParamLimits

0x4f03,	// (0x0000fadc) navi_text_pane_stacon_ParamLimits

0x4aee,	// (0x0000f6c7) main_text_info_pane

0xc808,	// (0x000173e1) listscroll_text_info_pane

0xc810,	// (0x000173e9) list_text_info_pane_ParamLimits

0xc810,	// (0x000173e9) list_text_info_pane

0xc81f,	// (0x000173f8) scroll_pane_cp24_ParamLimits

0xc81f,	// (0x000173f8) scroll_pane_cp24

0xc83d,	// (0x00017416) list_text_info_pane_t1_ParamLimits

0xc83d,	// (0x00017416) list_text_info_pane_t1

0x5421,	// (0x0000fffa) popup_fast_swap2_window_ParamLimits

0x5421,	// (0x0000fffa) popup_fast_swap2_window

0xc86e,	// (0x00017447) aid_size_cell_fast2

0x6cdd,	// (0x000118b6) bg_popup_window_pane_cp17

0x9840,	// (0x00014419) heading_pane_cp2

0x72c0,	// (0x00011e99) listscroll_fast2_pane

0xc878,	// (0x00017451) grid_fast2_pane

0xc882,	// (0x0001745b) listscroll_fast2_pane_g1

0xc88a,	// (0x00017463) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0001a7d1) listscroll_fast2_pane_g

0x7ebc,	// (0x00012a95) scroll_pane_cp26

0xc894,	// (0x0001746d) cell_fast2_pane_ParamLimits

0xc894,	// (0x0001746d) cell_fast2_pane

0xc8a9,	// (0x00017482) cell_fast2_pane_g1

0xc8b2,	// (0x0001748b) cell_fast2_pane_g2

0xc8bb,	// (0x00017494) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0001a7d6) cell_fast2_pane_g

0x73b3,	// (0x00011f8c) grid_highlight_pane_cp9

0x53e7,	// (0x0000ffc0) main_eswt_pane_ParamLimits

0x53e7,	// (0x0000ffc0) main_eswt_pane

0xc834,	// (0x0001740d) list_single_text_info_pane

0xc8c3,	// (0x0001749c) eswt_ctrl_button_pane

0xc8c3,	// (0x0001749c) eswt_ctrl_canvas_pane

0xc8cb,	// (0x000174a4) eswt_ctrl_combo_pane

0xc8c3,	// (0x0001749c) eswt_ctrl_default_pane

0xc8c3,	// (0x0001749c) eswt_ctrl_label_pane

0xc8d3,	// (0x000174ac) eswt_ctrl_wait_pane

0xc8db,	// (0x000174b4) eswt_shell_pane

0x6cdd,	// (0x000118b6) listscroll_eswt_app_pane

0xc8fb,	// (0x000174d4) popup_eswt_tasktip_window_ParamLimits

0xc8fb,	// (0x000174d4) popup_eswt_tasktip_window

0x9418,	// (0x00013ff1) bg_popup_window_pane_cp18

0xc90c,	// (0x000174e5) eswt_control_pane_g1_ParamLimits

0xc90c,	// (0x000174e5) eswt_control_pane_g1

0xc919,	// (0x000174f2) eswt_control_pane_g2_ParamLimits

0xc919,	// (0x000174f2) eswt_control_pane_g2

0xc926,	// (0x000174ff) eswt_control_pane_g3_ParamLimits

0xc926,	// (0x000174ff) eswt_control_pane_g3

0xc933,	// (0x0001750c) eswt_control_pane_g4_ParamLimits

0xc933,	// (0x0001750c) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0001a7dd) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0001a7dd) eswt_control_pane_g

0x7bd2,	// (0x000127ab) bg_button_pane_ParamLimits

0x7bd2,	// (0x000127ab) bg_button_pane

0x73c8,	// (0x00011fa1) common_borders_pane_copy2_ParamLimits

0x73c8,	// (0x00011fa1) common_borders_pane_copy2

0xc940,	// (0x00017519) control_button_pane_g1_ParamLimits

0xc940,	// (0x00017519) control_button_pane_g1

0xc94c,	// (0x00017525) control_button_pane_g2_ParamLimits

0xc94c,	// (0x00017525) control_button_pane_g2

0xc958,	// (0x00017531) control_button_pane_g3_ParamLimits

0xc958,	// (0x00017531) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0001a7e6) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0001a7e6) control_button_pane_g

0xc96c,	// (0x00017545) control_button_pane_t1

0xc97a,	// (0x00017553) control_button_pane_t2

0x0001,

0xfc14,	// (0x0001a7ed) control_button_pane_t

0x92ea,	// (0x00013ec3) bg_button_pane_g1

0x92fa,	// (0x00013ed3) bg_button_pane_g2

0x92f2,	// (0x00013ecb) bg_button_pane_g3

0x930a,	// (0x00013ee3) bg_button_pane_g4

0x9302,	// (0x00013edb) bg_button_pane_g5

0x9312,	// (0x00013eeb) bg_button_pane_g6

0x931a,	// (0x00013ef3) bg_button_pane_g7

0x932a,	// (0x00013f03) bg_button_pane_g8

0x9322,	// (0x00013efb) bg_button_pane_g9

0x0008,

0xf867,	// (0x0001a440) bg_button_pane_g

0xbdb6,	// (0x0001698f) common_borders_pane_ParamLimits

0xbdb6,	// (0x0001698f) common_borders_pane

0xc90c,	// (0x000174e5) eswt_control_pane_g1_copy1_ParamLimits

0xc90c,	// (0x000174e5) eswt_control_pane_g1_copy1

0xc919,	// (0x000174f2) eswt_control_pane_g2_copy1_ParamLimits

0xc919,	// (0x000174f2) eswt_control_pane_g2_copy1

0xc926,	// (0x000174ff) eswt_control_pane_g3_copy1_ParamLimits

0xc926,	// (0x000174ff) eswt_control_pane_g3_copy1

0xc933,	// (0x0001750c) eswt_control_pane_g4_copy1_ParamLimits

0xc933,	// (0x0001750c) eswt_control_pane_g4_copy1

0xbdf1,	// (0x000169ca) bg_eswt_ctrl_canvas_pane_g1

0xbdb6,	// (0x0001698f) common_borders_pane_cp2_ParamLimits

0xbdb6,	// (0x0001698f) common_borders_pane_cp2

0xbdb6,	// (0x0001698f) common_borders_pane_cp3_ParamLimits

0xbdb6,	// (0x0001698f) common_borders_pane_cp3

0xc988,	// (0x00017561) separator_horizontal_pane

0xc990,	// (0x00017569) separator_vertical_pane

0xc90c,	// (0x000174e5) eswt_control_pane_g1_copy2_ParamLimits

0xc90c,	// (0x000174e5) eswt_control_pane_g1_copy2

0xc919,	// (0x000174f2) eswt_control_pane_g2_copy2_ParamLimits

0xc919,	// (0x000174f2) eswt_control_pane_g2_copy2

0xc926,	// (0x000174ff) eswt_control_pane_g3_copy2_ParamLimits

0xc926,	// (0x000174ff) eswt_control_pane_g3_copy2

0xc933,	// (0x0001750c) eswt_control_pane_g4_copy2_ParamLimits

0xc933,	// (0x0001750c) eswt_control_pane_g4_copy2

0x6cdd,	// (0x000118b6) common_borders_pane_cp4

0xc999,	// (0x00017572) separator_horizontal_pane_g1

0xc9a2,	// (0x0001757b) separator_horizontal_pane_g2

0xc9ab,	// (0x00017584) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0001a7f2) separator_horizontal_pane_g

0xc90c,	// (0x000174e5) eswt_control_pane_g1_copy3_ParamLimits

0xc90c,	// (0x000174e5) eswt_control_pane_g1_copy3

0xc919,	// (0x000174f2) eswt_control_pane_g2_copy3_ParamLimits

0xc919,	// (0x000174f2) eswt_control_pane_g2_copy3

0xc926,	// (0x000174ff) eswt_control_pane_g3_copy3_ParamLimits

0xc926,	// (0x000174ff) eswt_control_pane_g3_copy3

0xc933,	// (0x0001750c) eswt_control_pane_g4_copy3_ParamLimits

0xc933,	// (0x0001750c) eswt_control_pane_g4_copy3

0x6cdd,	// (0x000118b6) common_borders_pane_cp5

0xc9b4,	// (0x0001758d) separator_vertical_pane_g1

0xc9bd,	// (0x00017596) separator_vertical_pane_g2

0xc9c6,	// (0x0001759f) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0001a7f9) separator_vertical_pane_g

0xc90c,	// (0x000174e5) eswt_control_pane_g1_copy4_ParamLimits

0xc90c,	// (0x000174e5) eswt_control_pane_g1_copy4

0xc919,	// (0x000174f2) eswt_control_pane_g2_copy4_ParamLimits

0xc919,	// (0x000174f2) eswt_control_pane_g2_copy4

0xc926,	// (0x000174ff) eswt_control_pane_g3_copy4_ParamLimits

0xc926,	// (0x000174ff) eswt_control_pane_g3_copy4

0xc933,	// (0x0001750c) eswt_control_pane_g4_copy4_ParamLimits

0xc933,	// (0x0001750c) eswt_control_pane_g4_copy4

0xc9cf,	// (0x000175a8) eswt_ctrl_combo_button_pane

0xc9d7,	// (0x000175b0) eswt_ctrl_input_pane

0xc9df,	// (0x000175b8) popup_choice_list_window_cp70

0xc9e7,	// (0x000175c0) eswt_ctrl_input_pane_t1

0x6cdd,	// (0x000118b6) input_focus_pane_cp70

0xbdb6,	// (0x0001698f) bg_button_pane_cp70_ParamLimits

0xbdb6,	// (0x0001698f) bg_button_pane_cp70

0xc9f5,	// (0x000175ce) eswt_ctrl_combo_button_pane_g1

0xc9fd,	// (0x000175d6) wait_bar_pane_cp70

0x9418,	// (0x00013ff1) bg_popup_window_pane_cp70_ParamLimits

0x9418,	// (0x00013ff1) bg_popup_window_pane_cp70

0xca05,	// (0x000175de) popup_eswt_tasktip_window_t1

0xca1b,	// (0x000175f4) wait_bar_pane_cp71_ParamLimits

0xca1b,	// (0x000175f4) wait_bar_pane_cp71

0xca27,	// (0x00017600) grid_eswt_app_pane

0x81d4,	// (0x00012dad) scroll_pane_cp70

0xca30,	// (0x00017609) cell_eswt_app_pane_ParamLimits

0xca30,	// (0x00017609) cell_eswt_app_pane

0xca60,	// (0x00017639) cell_eswt_app_pane_g1_ParamLimits

0xca60,	// (0x00017639) cell_eswt_app_pane_g1

0xca8f,	// (0x00017668) cell_eswt_app_pane_g2_ParamLimits

0xca8f,	// (0x00017668) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0001a800) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0001a800) cell_eswt_app_pane_g

0xcab8,	// (0x00017691) cell_eswt_app_pane_t1_ParamLimits

0xcab8,	// (0x00017691) cell_eswt_app_pane_t1

0xcaea,	// (0x000176c3) grid_highlight_pane_cp70_ParamLimits

0xcaea,	// (0x000176c3) grid_highlight_pane_cp70

0x8937,	// (0x00013510) set_content_pane_g1

0x8d02,	// (0x000138db) status_small_volume_pane

0x6228,	// (0x00010e01) status_small_volume_pane_g1

0x6230,	// (0x00010e09) volume_small2_pane

0x6239,	// (0x00010e12) volume_small2_pane_g1

0x6242,	// (0x00010e1b) volume_small2_pane_g2

0x624b,	// (0x00010e24) volume_small2_pane_g3

0x6254,	// (0x00010e2d) volume_small2_pane_g4

0x625d,	// (0x00010e36) volume_small2_pane_g5

0x6266,	// (0x00010e3f) volume_small2_pane_g6

0x626f,	// (0x00010e48) volume_small2_pane_g7

0x6278,	// (0x00010e51) volume_small2_pane_g8

0x6281,	// (0x00010e5a) volume_small2_pane_g9

0x628a,	// (0x00010e63) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0001a805) volume_small2_pane_g

0xc1b7,	// (0x00016d90) fep_vkb_top_text_pane_g1_ParamLimits

0xc1d2,	// (0x00016dab) fep_vkb_top_text_pane_t1_ParamLimits

0xc46e,	// (0x00017047) popup_preview_fixed_window_g3_ParamLimits

0xc46e,	// (0x00017047) popup_preview_fixed_window_g3

0x58ce,	// (0x000104a7) popup_toolbar_trans_pane

0xa7d5,	// (0x000153ae) aid_height_set_list_ParamLimits

0xa7e6,	// (0x000153bf) aid_size_parent_ParamLimits

0x8daa,	// (0x00013983) list_highlight_pane_cp2_ParamLimits

0x8937,	// (0x00013510) set_content_pane_g1_ParamLimits

0xaab8,	// (0x00015691) list_single_image_pane_ParamLimits

0xaab8,	// (0x00015691) list_single_image_pane

0xcaf6,	// (0x000176cf) aid_size_cell_image_ParamLimits

0xcaf6,	// (0x000176cf) aid_size_cell_image

0xcb03,	// (0x000176dc) grid_single_image_pane_ParamLimits

0xcb03,	// (0x000176dc) grid_single_image_pane

0x992e,	// (0x00014507) list_single_image_pane_g1_ParamLimits

0x992e,	// (0x00014507) list_single_image_pane_g1

0xcb0f,	// (0x000176e8) list_single_image_pane_g2_ParamLimits

0xcb0f,	// (0x000176e8) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0001a81a) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0001a81a) list_single_image_pane_g

0xcb23,	// (0x000176fc) list_single_image_pane_t1_ParamLimits

0xcb23,	// (0x000176fc) list_single_image_pane_t1

0xcb39,	// (0x00017712) cell_image_list_pane_ParamLimits

0xcb39,	// (0x00017712) cell_image_list_pane

0xcb4d,	// (0x00017726) cell_image_list_pane_g1

0xcb56,	// (0x0001772f) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0001a81f) cell_image_list_pane_g

0xcb5f,	// (0x00017738) aid_size_cell_tb_trans_pane

0x7bd2,	// (0x000127ab) bg_tb_trans_pane

0xcb71,	// (0x0001774a) grid_tb_trans_pane

0x92ea,	// (0x00013ec3) bg_tb_trans_pane_g1

0x92fa,	// (0x00013ed3) bg_tb_trans_pane_g2

0x92f2,	// (0x00013ecb) bg_tb_trans_pane_g3

0x930a,	// (0x00013ee3) bg_tb_trans_pane_g4

0x9302,	// (0x00013edb) bg_tb_trans_pane_g5

0x932a,	// (0x00013f03) bg_tb_trans_pane_g6

0x9322,	// (0x00013efb) bg_tb_trans_pane_g7

0x9312,	// (0x00013eeb) bg_tb_trans_pane_g8

0x931a,	// (0x00013ef3) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0001a824) bg_tb_trans_pane_g

0xcb85,	// (0x0001775e) cell_toolbar_trans_pane_ParamLimits

0xcb85,	// (0x0001775e) cell_toolbar_trans_pane

0xbdf1,	// (0x000169ca) cell_toolbar_trans_pane_g1

0xb96c,	// (0x00016545) list_form2_midp_pane_t1

0xb97a,	// (0x00016553) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0001a6c1) list_form2_midp_pane_t

0xb988,	// (0x00016561) scroll_pane_cp51_ParamLimits

0xbb93,	// (0x0001676c) form2_midp_wait_pane_g1

0xbb9c,	// (0x00016775) form2_midp_wait_pane_g2

0xbba5,	// (0x0001677e) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0001a6d6) form2_midp_wait_pane_g

0x6dd1,	// (0x000119aa) list_highlight_pane_cp21_ParamLimits

0xbbfc,	// (0x000167d5) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbc0b,	// (0x000167e4) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xaa40,	// (0x00015619) list_single_2graphic_im_pane_ParamLimits

0xaa40,	// (0x00015619) list_single_2graphic_im_pane

0xcbab,	// (0x00017784) list_single_2graphic_im_pane_g1_ParamLimits

0xcbab,	// (0x00017784) list_single_2graphic_im_pane_g1

0xcbbc,	// (0x00017795) list_single_2graphic_im_pane_g2_ParamLimits

0xcbbc,	// (0x00017795) list_single_2graphic_im_pane_g2

0xcbc8,	// (0x000177a1) list_single_2graphic_im_pane_g3_ParamLimits

0xcbc8,	// (0x000177a1) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0001a837) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0001a837) list_single_2graphic_im_pane_g

0xcbe8,	// (0x000177c1) list_single_2graphic_im_pane_t1_ParamLimits

0xcbe8,	// (0x000177c1) list_single_2graphic_im_pane_t1

0xc47a,	// (0x00017053) list_single_graphic_2heading_pane_fp_ParamLimits

0xc47a,	// (0x00017053) list_single_graphic_2heading_pane_fp

0xc4be,	// (0x00017097) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc4be,	// (0x00017097) list_single_graphic_2heading_pane_fp_g1

0xc48f,	// (0x00017068) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc48f,	// (0x00017068) list_single_graphic_2heading_pane_fp_g2

0x781b,	// (0x000123f4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x781b,	// (0x000123f4) list_single_graphic_2heading_pane_fp_g3

0x7bf8,	// (0x000127d1) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7bf8,	// (0x000127d1) list_single_graphic_2heading_pane_fp_g4

0xc49b,	// (0x00017074) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc49b,	// (0x00017074) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0001a75e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0001a75e) list_single_graphic_2heading_pane_fp_g

0xcc19,	// (0x000177f2) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcc19,	// (0x000177f2) list_single_graphic_2heading_pane_fp_t1

0xc4f6,	// (0x000170cf) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc4f6,	// (0x000170cf) list_single_graphic_2heading_pane_fp_t2

0xcc2f,	// (0x00017808) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcc2f,	// (0x00017808) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0001a840) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0001a840) list_single_graphic_2heading_pane_fp_t

0xbe7d,	// (0x00016a56) fep_hwr_write_pane_g5_ParamLimits

0xbe7d,	// (0x00016a56) fep_hwr_write_pane_g5

0xbe89,	// (0x00016a62) fep_hwr_write_pane_g6_ParamLimits

0xbe89,	// (0x00016a62) fep_hwr_write_pane_g6

0xc8db,	// (0x000174b4) eswt_shell_pane_ParamLimits

0x9418,	// (0x00013ff1) bg_popup_window_pane_cp18_ParamLimits

0xa706,	// (0x000152df) heading_pane_cp70

0xca05,	// (0x000175de) popup_eswt_tasktip_window_t1_ParamLimits

0x8e29,	// (0x00013a02) aid_touch_tab_arrow_left

0x8e38,	// (0x00013a11) aid_touch_tab_arrow_right

0x6d19,	// (0x000118f2) title_pane_g3_ParamLimits

0x6d19,	// (0x000118f2) title_pane_g3

0x7ab1,	// (0x0001268a) set_value_pane_g1

0x58ce,	// (0x000104a7) popup_toolbar_trans_pane_ParamLimits

0xcb5f,	// (0x00017738) aid_size_cell_tb_trans_pane_ParamLimits

0x7bd2,	// (0x000127ab) bg_tb_trans_pane_ParamLimits

0xcb71,	// (0x0001774a) grid_tb_trans_pane_ParamLimits

0x7074,	// (0x00011c4d) cont_note_pane_ParamLimits

0x7074,	// (0x00011c4d) cont_note_pane

0x73c8,	// (0x00011fa1) cont_snote2_single_text_pane_ParamLimits

0x73c8,	// (0x00011fa1) cont_snote2_single_text_pane

0x73c8,	// (0x00011fa1) cont_snote2_single_graphic_pane_ParamLimits

0x73c8,	// (0x00011fa1) cont_snote2_single_graphic_pane

0x9a67,	// (0x00014640) cont_note_wait_pane_ParamLimits

0x9a67,	// (0x00014640) cont_note_wait_pane

0x9a67,	// (0x00014640) cont_note_image_pane_ParamLimits

0x9a67,	// (0x00014640) cont_note_image_pane

0xcc45,	// (0x0001781e) popup_note2_window_g1_ParamLimits

0xcc45,	// (0x0001781e) popup_note2_window_g1

0xcc76,	// (0x0001784f) popup_note2_window_t1_ParamLimits

0xcc76,	// (0x0001784f) popup_note2_window_t1

0xccbb,	// (0x00017894) popup_note2_window_t2_ParamLimits

0xccbb,	// (0x00017894) popup_note2_window_t2

0xcd00,	// (0x000178d9) popup_note2_window_t3_ParamLimits

0xcd00,	// (0x000178d9) popup_note2_window_t3

0xcd45,	// (0x0001791e) popup_note2_window_t4_ParamLimits

0xcd45,	// (0x0001791e) popup_note2_window_t4

0x70f8,	// (0x00011cd1) popup_note2_window_t5_ParamLimits

0x70f8,	// (0x00011cd1) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0001a84c) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0001a84c) popup_note2_window_t

0xcd74,	// (0x0001794d) popup_note2_image_window_g1_ParamLimits

0xcd74,	// (0x0001794d) popup_note2_image_window_g1

0xcd80,	// (0x00017959) popup_note2_image_window_g2_ParamLimits

0xcd80,	// (0x00017959) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0001a857) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0001a857) popup_note2_image_window_g

0xcd92,	// (0x0001796b) popup_note2_image_window_t1_ParamLimits

0xcd92,	// (0x0001796b) popup_note2_image_window_t1

0xcdaa,	// (0x00017983) popup_note2_image_window_t2_ParamLimits

0xcdaa,	// (0x00017983) popup_note2_image_window_t2

0xcdc2,	// (0x0001799b) popup_note2_image_window_t3_ParamLimits

0xcdc2,	// (0x0001799b) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0001a85c) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0001a85c) popup_note2_image_window_t

0x9a75,	// (0x0001464e) popup_note2_wait_window_g1_ParamLimits

0x9a75,	// (0x0001464e) popup_note2_wait_window_g1

0xcdde,	// (0x000179b7) popup_note2_wait_window_g2_ParamLimits

0xcdde,	// (0x000179b7) popup_note2_wait_window_g2

0x9a8d,	// (0x00014666) popup_note2_wait_window_g3_ParamLimits

0x9a8d,	// (0x00014666) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0001a863) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0001a863) popup_note2_wait_window_g

0xcdea,	// (0x000179c3) popup_note2_wait_window_t1_ParamLimits

0xcdea,	// (0x000179c3) popup_note2_wait_window_t1

0xce08,	// (0x000179e1) popup_note2_wait_window_t2_ParamLimits

0xce08,	// (0x000179e1) popup_note2_wait_window_t2

0xce26,	// (0x000179ff) popup_note2_wait_window_t3_ParamLimits

0xce26,	// (0x000179ff) popup_note2_wait_window_t3

0xce38,	// (0x00017a11) popup_note2_wait_window_t4_ParamLimits

0xce38,	// (0x00017a11) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0001a86a) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0001a86a) popup_note2_wait_window_t

0xce4a,	// (0x00017a23) wait_bar2_pane_ParamLimits

0xce4a,	// (0x00017a23) wait_bar2_pane

0xce62,	// (0x00017a3b) popup_snote2_single_text_window_g1_ParamLimits

0xce62,	// (0x00017a3b) popup_snote2_single_text_window_g1

0xce8a,	// (0x00017a63) popup_snote2_single_text_window_t1_ParamLimits

0xce8a,	// (0x00017a63) popup_snote2_single_text_window_t1

0xced6,	// (0x00017aaf) popup_snote2_single_text_window_t2_ParamLimits

0xced6,	// (0x00017aaf) popup_snote2_single_text_window_t2

0xcf22,	// (0x00017afb) popup_snote2_single_text_window_t3_ParamLimits

0xcf22,	// (0x00017afb) popup_snote2_single_text_window_t3

0xcf63,	// (0x00017b3c) popup_snote2_single_text_window_t4_ParamLimits

0xcf63,	// (0x00017b3c) popup_snote2_single_text_window_t4

0xcf99,	// (0x00017b72) popup_snote2_single_text_window_t5_ParamLimits

0xcf99,	// (0x00017b72) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0001a873) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0001a873) popup_snote2_single_text_window_t

0xcfc4,	// (0x00017b9d) popup_snote2_single_graphic_window_g1_ParamLimits

0xcfc4,	// (0x00017b9d) popup_snote2_single_graphic_window_g1

0xcfec,	// (0x00017bc5) popup_snote2_single_graphic_window_g2_ParamLimits

0xcfec,	// (0x00017bc5) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0001a87e) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0001a87e) popup_snote2_single_graphic_window_g

0xd014,	// (0x00017bed) popup_snote2_single_graphic_window_t1_ParamLimits

0xd014,	// (0x00017bed) popup_snote2_single_graphic_window_t1

0xd060,	// (0x00017c39) popup_snote2_single_graphic_window_t2_ParamLimits

0xd060,	// (0x00017c39) popup_snote2_single_graphic_window_t2

0xcf22,	// (0x00017afb) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf22,	// (0x00017afb) popup_snote2_single_graphic_window_t3

0xcf63,	// (0x00017b3c) popup_snote2_single_graphic_window_t4_ParamLimits

0xcf63,	// (0x00017b3c) popup_snote2_single_graphic_window_t4

0xcf99,	// (0x00017b72) popup_snote2_single_graphic_window_t5_ParamLimits

0xcf99,	// (0x00017b72) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0001a883) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0001a883) popup_snote2_single_graphic_window_t

0xb849,	// (0x00016422) clock_nsta_pane_cp2_t1

0xb849,	// (0x00016422) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0001a697) clock_nsta_pane_cp2_t

0x7bec,	// (0x000127c5) form_field_data_wide_pane_g1_ParamLimits

0x781b,	// (0x000123f4) form_field_data_wide_pane_g2_ParamLimits

0x781b,	// (0x000123f4) form_field_data_wide_pane_g2

0x7bf8,	// (0x000127d1) form_field_data_wide_pane_g3_ParamLimits

0x7bf8,	// (0x000127d1) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001a255) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001a255) form_field_data_wide_pane_g

0xb733,	// (0x0001630c) grid_touch_3_pane_ParamLimits

0xb733,	// (0x0001630c) grid_touch_3_pane

0xd0ac,	// (0x00017c85) cell_touch_3_pane_ParamLimits

0xd0ac,	// (0x00017c85) cell_touch_3_pane

0xbdf1,	// (0x000169ca) cell_touch_3_pane_g1

0xbdf1,	// (0x000169ca) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0001a71c) cell_touch_3_pane_g

0x712a,	// (0x00011d03) cont_query_data_pane

0x7132,	// (0x00011d0b) cont_query_data_pane_cp1

0xd0da,	// (0x00017cb3) button_value_adjust_pane_cp7

0xd0e2,	// (0x00017cbb) query_popup_pane_cp3

0x84bb,	// (0x00013094) bg_popup_sub_pane_cp22_ParamLimits

0x5018,	// (0x0000fbf1) navi_navi_volume_pane_cp2

0x5033,	// (0x0000fc0c) popup_side_volume_key_window_g2

0x5042,	// (0x0000fc1b) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001a2eb) popup_side_volume_key_window_g

0x505f,	// (0x0000fc38) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001a2f2) popup_side_volume_key_window_t

0x8801,	// (0x000133da) popup_side_volume_key_window_ParamLimits

0x77db,	// (0x000123b4) list_double_graphic_pane_g4_ParamLimits

0x77db,	// (0x000123b4) list_double_graphic_pane_g4

0xaa7d,	// (0x00015656) list_single_2heading_msg_pane_ParamLimits

0xaa7d,	// (0x00015656) list_single_2heading_msg_pane

0xd111,	// (0x00017cea) list_single_2heading_msg_pane_g1_ParamLimits

0xd111,	// (0x00017cea) list_single_2heading_msg_pane_g1

0x899b,	// (0x00013574) list_single_2heading_msg_pane_g2_ParamLimits

0x899b,	// (0x00013574) list_single_2heading_msg_pane_g2

0xb2f9,	// (0x00015ed2) list_single_2heading_msg_pane_g3_ParamLimits

0xb2f9,	// (0x00015ed2) list_single_2heading_msg_pane_g3

0xd11d,	// (0x00017cf6) list_single_2heading_msg_pane_g4_ParamLimits

0xd11d,	// (0x00017cf6) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0001a88e) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0001a88e) list_single_2heading_msg_pane_g

0xd135,	// (0x00017d0e) list_single_2heading_msg_pane_t1_ParamLimits

0xd135,	// (0x00017d0e) list_single_2heading_msg_pane_t1

0xd15d,	// (0x00017d36) list_single_2heading_msg_pane_t2_ParamLimits

0xd15d,	// (0x00017d36) list_single_2heading_msg_pane_t2

0xd18c,	// (0x00017d65) list_single_2heading_msg_pane_t3_ParamLimits

0xd18c,	// (0x00017d65) list_single_2heading_msg_pane_t3

0xd1c5,	// (0x00017d9e) list_single_2heading_msg_pane_t4_ParamLimits

0xd1c5,	// (0x00017d9e) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0001a897) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0001a897) list_single_2heading_msg_pane_t

0x6d25,	// (0x000118fe) title_pane_g4_ParamLimits

0x6d25,	// (0x000118fe) title_pane_g4

0x4e27,	// (0x0000fa00) title_pane_stacon_g3_ParamLimits

0x4e27,	// (0x0000fa00) title_pane_stacon_g3

0xcbdc,	// (0x000177b5) list_single_2graphic_im_pane_g4_ParamLimits

0xcbdc,	// (0x000177b5) list_single_2graphic_im_pane_g4

0xa4c6,	// (0x0001509f) popup_side_volume_key_window_cp

0xade7,	// (0x000159c0) main_idle_act2_pane_t1

0x5a2c,	// (0x00010605) toolbar_button_pane_g10

0x75c0,	// (0x00012199) popup_toolbar_window_cp1

0xb83a,	// (0x00016413) clock_nsta_pane_cp_t1

0xb83a,	// (0x00016413) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0001a692) clock_nsta_pane_cp_t

0x5018,	// (0x0000fbf1) navi_navi_volume_pane_cp2_ParamLimits

0x5027,	// (0x0000fc00) popup_side_volume_key_window_g1_ParamLimits

0x5033,	// (0x0000fc0c) popup_side_volume_key_window_g2_ParamLimits

0x5042,	// (0x0000fc1b) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001a2eb) popup_side_volume_key_window_g_ParamLimits

0x5e94,	// (0x00010a6d) fep_hwr_aid_pane

0x5f3b,	// (0x00010b14) bg_fep_hwr_top_pane_g4_ParamLimits

0xbe4d,	// (0x00016a26) fep_hwr_top_pane_g1_ParamLimits

0xbe5f,	// (0x00016a38) fep_hwr_top_pane_g2_ParamLimits

0x5f5b,	// (0x00010b34) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0001a6e7) fep_hwr_top_pane_g_ParamLimits

0x5f70,	// (0x00010b49) fep_hwr_top_text_pane_ParamLimits

0xa289,	// (0x00014e62) aid_touch_tab_arrow_arrow_2

0xa292,	// (0x00014e6b) aid_touch_tab_arrow_left_2

0x5ea8,	// (0x00010a81) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5edf,	// (0x00010ab8) fep_hwr_prediction_pane

0xbfbf,	// (0x00016b98) fep_vkb_prediction_pane

0xc0c3,	// (0x00016c9c) fep_vkb_side_pane_g3_ParamLimits

0xc0c3,	// (0x00016c9c) fep_vkb_side_pane_g3

0x60eb,	// (0x00010cc4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6157,	// (0x00010d30) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6164,	// (0x00010d3d) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0001a796) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6293,	// (0x00010e6c) fep_hwr_prediction_pane_g1

0x629d,	// (0x00010e76) fep_hwr_prediction_pane_g2

0x62a5,	// (0x00010e7e) fep_hwr_prediction_pane_g3

0x62ad,	// (0x00010e86) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0001a8a0) fep_hwr_prediction_pane_g

0xd1ea,	// (0x00017dc3) fep_vkb_prediction_pane_g1

0xd1f4,	// (0x00017dcd) fep_vkb_prediction_pane_g2

0xd1fc,	// (0x00017dd5) fep_vkb_prediction_pane_g3

0xd204,	// (0x00017ddd) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0001a8a9) fep_vkb_prediction_pane_g

0x5d14,	// (0x000108ed) slider_set_pane_g3

0x5d28,	// (0x00010901) slider_set_pane_g4

0x5d40,	// (0x00010919) slider_set_pane_g5

0x5d14,	// (0x000108ed) slider_set_pane_g6

0x5d56,	// (0x0001092f) slider_set_pane_g7

0xa98d,	// (0x00015566) slider_form_pane_g3

0xa996,	// (0x0001556f) slider_form_pane_g4

0xa99e,	// (0x00015577) slider_form_pane_g5

0xa98d,	// (0x00015566) slider_form_pane_g6

0xa9a6,	// (0x0001557f) slider_form_pane_g7

0xb0e3,	// (0x00015cbc) slider_set_pane_vc_g3

0xb0ec,	// (0x00015cc5) slider_set_pane_vc_g4

0xb0f5,	// (0x00015cce) slider_set_pane_vc_g5

0xb0e3,	// (0x00015cbc) slider_set_pane_vc_g6

0xb0fe,	// (0x00015cd7) slider_set_pane_vc_g7

0xb506,	// (0x000160df) slider_form_pane_vc_g1

0xb50f,	// (0x000160e8) slider_form_pane_vc_g2

0xb518,	// (0x000160f1) slider_form_pane_vc_g3

0xb506,	// (0x000160df) slider_form_pane_vc_g4

0xb521,	// (0x000160fa) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0001a664) slider_form_pane_vc_g

0x4aee,	// (0x0000f6c7) main_idle_act3_pane

0xd20c,	// (0x00017de5) ai3_links_pane

0xd215,	// (0x00017dee) popup_ai3_data_window_ParamLimits

0xd215,	// (0x00017dee) popup_ai3_data_window

0x6cdd,	// (0x000118b6) grid_ai3_links_pane

0xd22f,	// (0x00017e08) cell_ai3_links_pane_ParamLimits

0xd22f,	// (0x00017e08) cell_ai3_links_pane

0xd247,	// (0x00017e20) bg_popup_sub_pane_cp11

0xd254,	// (0x00017e2d) cell_ai3_links_pane_g1

0x6cdd,	// (0x000118b6) bg_popup_sub_pane_cp12

0xd279,	// (0x00017e52) heading_ai3_data_pane

0xd281,	// (0x00017e5a) list_ai3_gene_pane

0xd28d,	// (0x00017e66) popup_ai3_data_window_g1

0xd295,	// (0x00017e6e) heading_ai3_data_pane_g1

0xd29d,	// (0x00017e76) heading_ai3_data_pane_t1

0xd2ab,	// (0x00017e84) list_double_ai3_gene_pane_ParamLimits

0xd2ab,	// (0x00017e84) list_double_ai3_gene_pane

0xd2b8,	// (0x00017e91) list_single_ai3_gene_pane_ParamLimits

0xd2b8,	// (0x00017e91) list_single_ai3_gene_pane

0xbdb6,	// (0x0001698f) list_highlight_pane_cp7_ParamLimits

0xbdb6,	// (0x0001698f) list_highlight_pane_cp7

0xd2c5,	// (0x00017e9e) list_single_a13_gene_pane_t1_ParamLimits

0xd2c5,	// (0x00017e9e) list_single_a13_gene_pane_t1

0xd2dc,	// (0x00017eb5) list_single_ai3_gene_pane_g1

0xd2e5,	// (0x00017ebe) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0001a8b2) list_single_ai3_gene_pane_g

0xd2ed,	// (0x00017ec6) list_double_ai3_gene_pane_g1_ParamLimits

0xd2ed,	// (0x00017ec6) list_double_ai3_gene_pane_g1

0xd2f9,	// (0x00017ed2) list_double_ai3_gene_pane_t1_ParamLimits

0xd2f9,	// (0x00017ed2) list_double_ai3_gene_pane_t1

0xd315,	// (0x00017eee) list_double_ai3_gene_pane_t2_ParamLimits

0xd315,	// (0x00017eee) list_double_ai3_gene_pane_t2

0xd32b,	// (0x00017f04) list_double_ai3_gene_pane_t3_ParamLimits

0xd32b,	// (0x00017f04) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0001a8b7) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0001a8b7) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd0f3,	// (0x00017ccc) aid_size_min_col_2

0xd0fd,	// (0x00017cd6) aid_size_min_msg_ParamLimits

0xd0fd,	// (0x00017cd6) aid_size_min_msg

0xc1c3,	// (0x00016d9c) fep_vkb_top_text_pane_g2_ParamLimits

0xc1c3,	// (0x00016d9c) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0001a717) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0001a717) fep_vkb_top_text_pane_g

0x4aee,	// (0x0000f6c7) main_hc_apps_shell_pane

0xd348,	// (0x00017f21) grid_hc_apps_pane_ParamLimits

0xd348,	// (0x00017f21) grid_hc_apps_pane

0xd357,	// (0x00017f30) list_hc_apps_pane

0xd35f,	// (0x00017f38) scroll_pane_cp37_ParamLimits

0xd35f,	// (0x00017f38) scroll_pane_cp37

0xd36b,	// (0x00017f44) cell_hc_apps_pane_ParamLimits

0xd36b,	// (0x00017f44) cell_hc_apps_pane

0xd419,	// (0x00017ff2) cell_hc_apps_pane_g1_ParamLimits

0xd419,	// (0x00017ff2) cell_hc_apps_pane_g1

0xd44a,	// (0x00018023) cell_hc_apps_pane_g2_ParamLimits

0xd44a,	// (0x00018023) cell_hc_apps_pane_g2

0xd466,	// (0x0001803f) cell_hc_apps_pane_g3_ParamLimits

0xd466,	// (0x0001803f) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0001a8be) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0001a8be) cell_hc_apps_pane_g

0xd488,	// (0x00018061) cell_hc_apps_pane_t1_ParamLimits

0xd488,	// (0x00018061) cell_hc_apps_pane_t1

0x7074,	// (0x00011c4d) grid_highlight_pane_cp10_ParamLimits

0x7074,	// (0x00011c4d) grid_highlight_pane_cp10

0xd4c8,	// (0x000180a1) list_single_hc_apps_pane_ParamLimits

0xd4c8,	// (0x000180a1) list_single_hc_apps_pane

0xd524,	// (0x000180fd) list_single_hc_apps_pane_g1

0xd53d,	// (0x00018116) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0001a8c5) list_single_hc_apps_pane_g

0xd556,	// (0x0001812f) list_single_hc_apps_pane_g2_copy1

0xd572,	// (0x0001814b) list_single_hc_apps_pane_t1

0x6dd1,	// (0x000119aa) bg_set_opt_pane_cp_ParamLimits

0x4d4f,	// (0x0000f928) setting_slider_pane_t1_ParamLimits

0x4d68,	// (0x0000f941) setting_slider_pane_t2_ParamLimits

0x4d82,	// (0x0000f95b) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001a13d) setting_slider_pane_t_ParamLimits

0x4d9a,	// (0x0000f973) slider_set_pane_ParamLimits

0x52c1,	// (0x0000fe9a) control_pane_g5_ParamLimits

0x52c1,	// (0x0000fe9a) control_pane_g5

0xa79a,	// (0x00015373) slider_set_pane_g1_ParamLimits

0x5d08,	// (0x000108e1) slider_set_pane_g2_ParamLimits

0x5d14,	// (0x000108ed) slider_set_pane_g3_ParamLimits

0x5d28,	// (0x00010901) slider_set_pane_g4_ParamLimits

0x5d40,	// (0x00010919) slider_set_pane_g5_ParamLimits

0x5d14,	// (0x000108ed) slider_set_pane_g6_ParamLimits

0x5d56,	// (0x0001092f) slider_set_pane_g7_ParamLimits

0xf965,	// (0x0001a53e) slider_set_pane_g_ParamLimits

0x88e2,	// (0x000134bb) navi_icon_text_pane_ParamLimits

0x8dea,	// (0x000139c3) aid_fill_nsta_2_ParamLimits

0x8e29,	// (0x00013a02) aid_touch_tab_arrow_left_ParamLimits

0x8e38,	// (0x00013a11) aid_touch_tab_arrow_right_ParamLimits

0x8ea5,	// (0x00013a7e) clock_nsta_pane_ParamLimits

0xa26b,	// (0x00014e44) navi_icon_pane_g1_ParamLimits

0xa277,	// (0x00014e50) navi_text_pane_t1_ParamLimits

0xb946,	// (0x0001651f) navi_icon_text_pane_g1_ParamLimits

0xb952,	// (0x0001652b) navi_icon_text_pane_t1_ParamLimits

0xd524,	// (0x000180fd) list_single_hc_apps_pane_g1_ParamLimits

0xd53d,	// (0x00018116) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0001a8c5) list_single_hc_apps_pane_g_ParamLimits

0xd556,	// (0x0001812f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd572,	// (0x0001814b) list_single_hc_apps_pane_t1_ParamLimits

0x4c59,	// (0x0000f832) popup_toolbar2_fixed_window_ParamLimits

0x4c59,	// (0x0000f832) popup_toolbar2_fixed_window

0x58c4,	// (0x0001049d) popup_toolbar2_float_window

0x6cdd,	// (0x000118b6) bg_popup_sub_pane_cp27

0xd5a0,	// (0x00018179) grid_toolbar2_float_pane

0x6cdd,	// (0x000118b6) bg_popup_sub_pane_cp26

0xd5a0,	// (0x00018179) grid_toolbar2_fixed_pane

0xd5a8,	// (0x00018181) cell_toolbar2_fixed_pane_ParamLimits

0xd5a8,	// (0x00018181) cell_toolbar2_fixed_pane

0xd5b8,	// (0x00018191) cell_toolbar2_fixed_pane_g1

0xd5c1,	// (0x0001819a) toolbar2_fixed_button_pane

0x92ea,	// (0x00013ec3) toolbar2_fixed_button_pane_g1

0x92fa,	// (0x00013ed3) toolbar2_fixed_button_pane_g2

0x92f2,	// (0x00013ecb) toolbar2_fixed_button_pane_g3

0x930a,	// (0x00013ee3) toolbar2_fixed_button_pane_g4

0x9302,	// (0x00013edb) toolbar2_fixed_button_pane_g5

0x9312,	// (0x00013eeb) toolbar2_fixed_button_pane_g6

0x931a,	// (0x00013ef3) toolbar2_fixed_button_pane_g7

0x932a,	// (0x00013f03) toolbar2_fixed_button_pane_g8

0x9322,	// (0x00013efb) toolbar2_fixed_button_pane_g9

0x0008,

0xf867,	// (0x0001a440) toolbar2_fixed_button_pane_g

0xd5c9,	// (0x000181a2) cell_toolbar2_float_pane_ParamLimits

0xd5c9,	// (0x000181a2) cell_toolbar2_float_pane

0xd5da,	// (0x000181b3) cell_toolbar2_float_pane_g1

0xd5c1,	// (0x0001819a) toolbar2_fixed_button_pane_cp

0xbf1f,	// (0x00016af8) fep_vkb_accented_list_pane_ParamLimits

0xbf1f,	// (0x00016af8) fep_vkb_accented_list_pane

0x60cb,	// (0x00010ca4) bg_popup_fep_shadow_pane_g9

0x8a62,	// (0x0001363b) bg_popup_fep_shadow_pane_cp3

0x7ea3,	// (0x00012a7c) list_accented_list_pane

0xd5e3,	// (0x000181bc) list_single_accented_list_pane_ParamLimits

0xd5e3,	// (0x000181bc) list_single_accented_list_pane

0x8a62,	// (0x0001363b) list_highlight_pane_cp10

0xd5f4,	// (0x000181cd) list_single_accented_list_pane_t1

0x5814,	// (0x000103ed) popup_slider_window_ParamLimits

0x5814,	// (0x000103ed) popup_slider_window

0xd0ea,	// (0x00017cc3) aid_indentation_list_msg

0xd6ae,	// (0x00018287) bg_popup_window_pane_cp19

0xd718,	// (0x000182f1) popup_slider_window_g1

0xd734,	// (0x0001830d) popup_slider_window_g2

0xd750,	// (0x00018329) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0001a8ca) popup_slider_window_g

0xd7ac,	// (0x00018385) popup_slider_window_t1

0xd820,	// (0x000183f9) small_volume_slider_vertical_pane

0xbdf1,	// (0x000169ca) small_volume_slider_vertical_pane_g1

0xbdf1,	// (0x000169ca) small_volume_slider_vertical_pane_g2

0xd83c,	// (0x00018415) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0001a8dc) small_volume_slider_vertical_pane_g

0x4a11,	// (0x0000f5ea) area_side_right_pane_ParamLimits

0x4a11,	// (0x0000f5ea) area_side_right_pane

0x62b5,	// (0x00010e8e) aid_size_side_button_ParamLimits

0x62b5,	// (0x00010e8e) aid_size_side_button

0x62c9,	// (0x00010ea2) grid_sctrl_middle_pane_ParamLimits

0x62c9,	// (0x00010ea2) grid_sctrl_middle_pane

0x62e8,	// (0x00010ec1) sctrl_sk_bottom_pane

0x62f9,	// (0x00010ed2) sctrl_sk_top_pane

0x630b,	// (0x00010ee4) aid_touch_sctrl_top

0x6318,	// (0x00010ef1) bg_sctrl_sk_pane_ParamLimits

0x6318,	// (0x00010ef1) bg_sctrl_sk_pane

0x6326,	// (0x00010eff) sctrl_sk_top_pane_g1

0x6333,	// (0x00010f0c) sctrl_sk_top_pane_t1

0x630b,	// (0x00010ee4) aid_touch_sctrl_bottom

0x6318,	// (0x00010ef1) bg_sctrl_sk_pane_cp_ParamLimits

0x6318,	// (0x00010ef1) bg_sctrl_sk_pane_cp

0x634e,	// (0x00010f27) sctrl_sk_bottom_pane_g1

0x6333,	// (0x00010f0c) sctrl_sk_bottom_pane_t1

0x6357,	// (0x00010f30) cell_sctrl_middle_pane_ParamLimits

0x6357,	// (0x00010f30) cell_sctrl_middle_pane

0x6372,	// (0x00010f4b) aid_touch_sctrl_middle_ParamLimits

0x6372,	// (0x00010f4b) aid_touch_sctrl_middle

0x6384,	// (0x00010f5d) bg_sctrl_middle_pane_ParamLimits

0x6384,	// (0x00010f5d) bg_sctrl_middle_pane

0x60eb,	// (0x00010cc4) cell_sctrl_middle_pane_g1_ParamLimits

0x60eb,	// (0x00010cc4) cell_sctrl_middle_pane_g1

0x6392,	// (0x00010f6b) cell_sctrl_middle_pane_g2_ParamLimits

0x6392,	// (0x00010f6b) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0001a8e8) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0001a8e8) cell_sctrl_middle_pane_g

0x92ea,	// (0x00013ec3) bg_sctrl_middle_pane_g1

0x92f2,	// (0x00013ecb) bg_sctrl_middle_pane_g2

0x92fa,	// (0x00013ed3) bg_sctrl_middle_pane_g3

0x9302,	// (0x00013edb) bg_sctrl_middle_pane_g4

0x930a,	// (0x00013ee3) bg_sctrl_middle_pane_g5

0x9312,	// (0x00013eeb) bg_sctrl_middle_pane_g6

0x931a,	// (0x00013ef3) bg_sctrl_middle_pane_g7

0x9322,	// (0x00013efb) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0001a8ed) bg_sctrl_middle_pane_g

0x932a,	// (0x00013f03) bg_sctrl_middle_pane_g8_copy1

0x92ea,	// (0x00013ec3) bg_sctrl_sk_pane_g1

0x92fa,	// (0x00013ed3) bg_sctrl_sk_pane_g2

0x92f2,	// (0x00013ecb) bg_sctrl_sk_pane_g3

0x0008,

0xf867,	// (0x0001a440) bg_sctrl_sk_pane_g

0x7586,	// (0x0001215f) aid_size_touch_scroll_bar

0x930a,	// (0x00013ee3) bg_sctrl_sk_pane_g4

0x9302,	// (0x00013edb) bg_sctrl_sk_pane_g5

0x9312,	// (0x00013eeb) bg_sctrl_sk_pane_g6

0x931a,	// (0x00013ef3) bg_sctrl_sk_pane_g7

0x932a,	// (0x00013f03) bg_sctrl_sk_pane_g8

0x9322,	// (0x00013efb) bg_sctrl_sk_pane_g9

0x547f,	// (0x00010058) popup_fep_china_hwr2_fs_candidate_window

0x5489,	// (0x00010062) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5489,	// (0x00010062) popup_fep_china_hwr2_fs_control_window

0x60eb,	// (0x00010cc4) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0001a8e3) sctrl_sk_top_pane_g

0xd845,	// (0x0001841e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd845,	// (0x0001841e) aid_fep_china_hwr2_fs_cell

0xd857,	// (0x00018430) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd857,	// (0x00018430) bg_popup_fep_shadow_pane_cp4

0xd86e,	// (0x00018447) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd86e,	// (0x00018447) bg_popup_fep_shadow_pane_cp5

0xd880,	// (0x00018459) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd880,	// (0x00018459) popup_fep_china_hwr2_fs_control_bar_grid

0xd890,	// (0x00018469) popup_fep_china_hwr2_fs_control_funtion_grid

0xd898,	// (0x00018471) aid_fep_china_hwr2_fs_candi_cell

0x6cdd,	// (0x000118b6) bg_popup_fep_shadow_pane_cp6

0xd8a2,	// (0x0001847b) popup_fep_china_hwr2_fs_candidate_grid

0xd8ac,	// (0x00018485) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd8ac,	// (0x00018485) cell_fep_china_hwr2_fs_funtion_grid

0xbdf1,	// (0x000169ca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd8c4,	// (0x0001849d) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd8c4,	// (0x0001849d) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd8d2,	// (0x000184ab) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd8d2,	// (0x000184ab) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0001a8fe) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0001a8fe) cell_fep_china_hwr2_fs_funtion_grid_g

0xd8e8,	// (0x000184c1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd8e8,	// (0x000184c1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd8fd,	// (0x000184d6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd8fd,	// (0x000184d6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0001a903) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0001a903) cell_fep_china_hwr2_fs_funtion_grid_t

0xd919,	// (0x000184f2) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd921,	// (0x000184fa) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd929,	// (0x00018502) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0001a908) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd931,	// (0x0001850a) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd931,	// (0x0001850a) cell_fep_china_hwr2_fs_candidate_grid

0xd94a,	// (0x00018523) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd952,	// (0x0001852b) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbdf1,	// (0x000169ca) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbdf1,	// (0x000169ca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0001a71c) cell_fep_china_hwr2_fs_candidate_grid_g

0xd95a,	// (0x00018533) cell_fep_china_hwr2_fs_candidate_grid_t1

0x8eb2,	// (0x00013a8b) clock_nsta_pane_cp_24_ParamLimits

0x8eb2,	// (0x00013a8b) clock_nsta_pane_cp_24

0x8f30,	// (0x00013b09) indicator_nsta_pane_cp_24_ParamLimits

0x8f30,	// (0x00013b09) indicator_nsta_pane_cp_24

0xa0e7,	// (0x00014cc0) heading_pane_g1

0x0001,

0xf8cc,	// (0x0001a4a5) heading_pane_g

0xac30,	// (0x00015809) grid_sct_catagory_button_pane

0xac60,	// (0x00015839) scroll_pane_cp5_ParamLimits

0xb994,	// (0x0001656d) button_value_adjust_pane_cp5_ParamLimits

0xb994,	// (0x0001656d) button_value_adjust_pane_cp5

0xba90,	// (0x00016669) form2_midp_time_pane_ParamLimits

0xd968,	// (0x00018541) cell_sct_catagory_button_pane_ParamLimits

0xd968,	// (0x00018541) cell_sct_catagory_button_pane

0xbdb6,	// (0x0001698f) bg_button_pane_cp01_ParamLimits

0xbdb6,	// (0x0001698f) bg_button_pane_cp01

0xbdf1,	// (0x000169ca) cell_sct_catagory_button_pane_g1

0x5853,	// (0x0001042c) popup_tb_extension_window

0xd97a,	// (0x00018553) aid_size_cell_ext_ParamLimits

0xd97a,	// (0x00018553) aid_size_cell_ext

0x7074,	// (0x00011c4d) bg_tb_trans_pane_cp1_ParamLimits

0x7074,	// (0x00011c4d) bg_tb_trans_pane_cp1

0xd99a,	// (0x00018573) grid_tb_ext_pane_ParamLimits

0xd99a,	// (0x00018573) grid_tb_ext_pane

0xd9c8,	// (0x000185a1) cell_tb_ext_pane_ParamLimits

0xd9c8,	// (0x000185a1) cell_tb_ext_pane

0xd9df,	// (0x000185b8) cell_tb_ext_pane_g1_ParamLimits

0xd9df,	// (0x000185b8) cell_tb_ext_pane_g1

0xd9fc,	// (0x000185d5) cell_tb_ext_pane_t1

0x7074,	// (0x00011c4d) list_highlight_pane_cp11_ParamLimits

0x7074,	// (0x00011c4d) list_highlight_pane_cp11

0x4c78,	// (0x0000f851) popup_uni_indicator_window_ParamLimits

0x4c78,	// (0x0000f851) popup_uni_indicator_window

0x7bd2,	// (0x000127ab) bg_popup_sub_pane_cp14

0xda17,	// (0x000185f0) list_uniindi_pane

0xda23,	// (0x000185fc) uniindi_top_pane

0x7074,	// (0x00011c4d) bg_uniindi_top_pane

0xda42,	// (0x0001861b) uniindi_top_pane_g1

0xda58,	// (0x00018631) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0001a90f) uniindi_top_pane_g

0xda82,	// (0x0001865b) uniindi_top_pane_t1

0xdaac,	// (0x00018685) list_single_uniindi_pane_ParamLimits

0xdaac,	// (0x00018685) list_single_uniindi_pane

0xbdf1,	// (0x000169ca) bg_uniindi_top_pane_g1

0xdabf,	// (0x00018698) list_single_uniindi_pane_g1

0xdad2,	// (0x000186ab) list_single_uniindi_pane_t1

0x4aee,	// (0x0000f6c7) control_bg_pane

0xdaf7,	// (0x000186d0) bg_sctrl_sk_pane_cp1

0xdb00,	// (0x000186d9) bg_sctrl_sk_pane_cp2

0xdb09,	// (0x000186e2) control_bg_pane_g1

0xdb12,	// (0x000186eb) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0001a918) control_bg_pane_g

0xb7dd,	// (0x000163b6) cell_indicator_nsta_pane_g1_ParamLimits

0xb7eb,	// (0x000163c4) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0001a680) cell_indicator_nsta_pane_g_ParamLimits

0xbb18,	// (0x000166f1) form2_midp_time_pane_t1_ParamLimits

0x53e7,	// (0x0000ffc0) main_idle_act4_pane_ParamLimits

0x53e7,	// (0x0000ffc0) main_idle_act4_pane

0x5853,	// (0x0001042c) popup_tb_extension_window_ParamLimits

0xd9b8,	// (0x00018591) tb_ext_find_pane_ParamLimits

0xd9b8,	// (0x00018591) tb_ext_find_pane

0xdb1b,	// (0x000186f4) ai_gene_pane_1_cp1

0x8b9b,	// (0x00013774) ai_gene_pane_2_cp1

0xdb23,	// (0x000186fc) list_single_idle_plugin_calendar_pane

0xdb2c,	// (0x00018705) list_single_idle_plugin_notification_pane

0xdb35,	// (0x0001870e) list_single_idle_plugin_player_pane

0xdb3e,	// (0x00018717) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdb3e,	// (0x00018717) list_single_idle_plugin_shortcut_pane

0xdb60,	// (0x00018739) main_idle_act4_pane_t1

0xdb72,	// (0x0001874b) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0001a91d) main_idle_act4_pane_t

0xdb84,	// (0x0001875d) middle_sk_idle_act4_pane_ParamLimits

0xdb84,	// (0x0001875d) middle_sk_idle_act4_pane

0xdb9a,	// (0x00018773) popup_clock_digital_analogue_window_cp2

0xdbb4,	// (0x0001878d) shortcut_wheel_idle_act4_pane_ParamLimits

0xdbb4,	// (0x0001878d) shortcut_wheel_idle_act4_pane

0xbdf1,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g1

0xbdf1,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g2

0xbdf1,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g3

0xbdf1,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g4

0xbdf1,	// (0x000169ca) shortcut_wheel_idle_act4_pane_g5

0xdbc8,	// (0x000187a1) shortcut_wheel_idle_act4_pane_g6

0xdbd0,	// (0x000187a9) shortcut_wheel_idle_act4_pane_g7

0xdbd8,	// (0x000187b1) shortcut_wheel_idle_act4_pane_g8

0xdbe0,	// (0x000187b9) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0001a922) shortcut_wheel_idle_act4_pane_g

0xc06f,	// (0x00016c48) middle_sk_idle_act4_pane_g1_ParamLimits

0xc06f,	// (0x00016c48) middle_sk_idle_act4_pane_g1

0xdc44,	// (0x0001881d) middle_sk_idle_act4_pane_g2_ParamLimits

0xdc44,	// (0x0001881d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0001a945) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0001a945) middle_sk_idle_act4_pane_g

0xdc50,	// (0x00018829) middle_sk_idle_act4_pane_t1_ParamLimits

0xdc50,	// (0x00018829) middle_sk_idle_act4_pane_t1

0xdc6d,	// (0x00018846) grid_ai_shortcut_pane_ParamLimits

0xdc6d,	// (0x00018846) grid_ai_shortcut_pane

0xdc86,	// (0x0001885f) list_highlight_pane_cp16_ParamLimits

0xdc86,	// (0x0001885f) list_highlight_pane_cp16

0xdc93,	// (0x0001886c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdc93,	// (0x0001886c) list_single_idle_plugin_shortcut_pane_g1

0xdc9f,	// (0x00018878) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdc9f,	// (0x00018878) list_single_idle_plugin_shortcut_pane_g2

0xdcb7,	// (0x00018890) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdcb7,	// (0x00018890) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0001a94a) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0001a94a) list_single_idle_plugin_shortcut_pane_g

0xdcca,	// (0x000188a3) cell_ai_shortcut_pane_ParamLimits

0xdcca,	// (0x000188a3) cell_ai_shortcut_pane

0xdcee,	// (0x000188c7) cell_ai_shortcut_pane_g1_ParamLimits

0xdcee,	// (0x000188c7) cell_ai_shortcut_pane_g1

0xdb1b,	// (0x000186f4) ai_gene_pane_1_cp2

0xdd10,	// (0x000188e9) ai_gene_pane_2_cp2

0xdd18,	// (0x000188f1) list_highlight_pane_cp15

0xdd21,	// (0x000188fa) list_single_idle_plugin_calendar_pane_g1

0xdd18,	// (0x000188f1) list_highlight_pane_cp17

0xdd29,	// (0x00018902) list_single_idle_plugin_calendar_pane_g1_copy1

0xdd31,	// (0x0001890a) list_single_idle_plugin_player_pane_g1

0xae89,	// (0x00015a62) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0001a951) list_single_idle_plugin_player_pane_g

0xdd39,	// (0x00018912) list_single_idle_plugin_player_pane_t1

0xdd47,	// (0x00018920) list_single_idle_plugin_player_pane_t2

0xdd55,	// (0x0001892e) list_single_idle_plugin_player_pane_t3

0xdd63,	// (0x0001893c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0001a956) list_single_idle_plugin_player_pane_t

0xdd71,	// (0x0001894a) wait_bar_pane_cp15

0xdd79,	// (0x00018952) grid_ai_notification_pane

0xae89,	// (0x00015a62) list_single_idle_plugin_notification_pane_g1

0xdd82,	// (0x0001895b) cell_ai_notification_pane_ParamLimits

0xdd82,	// (0x0001895b) cell_ai_notification_pane

0xdd8f,	// (0x00018968) cell_ai_notification_pane_g1

0xdd97,	// (0x00018970) cell_ai_notification_pane_t1

0xdda5,	// (0x0001897e) tb_ext_find_button_pane

0xddad,	// (0x00018986) tb_ext_find_pane_g1

0xddb5,	// (0x0001898e) tb_ext_find_pane_t1

0x83cb,	// (0x00012fa4) tb_ext_find_button_pane_g1

0xddc3,	// (0x0001899c) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0001a95f) tb_ext_find_button_pane_g

0xdb60,	// (0x00018739) main_idle_act4_pane_t1_ParamLimits

0xdb72,	// (0x0001874b) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0001a91d) main_idle_act4_pane_t_ParamLimits

0xdb9a,	// (0x00018773) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdba8,	// (0x00018781) sat_plugin_idle_act4_pane_ParamLimits

0xdba8,	// (0x00018781) sat_plugin_idle_act4_pane

0xddcc,	// (0x000189a5) sat_plugin_idle_act4_pane_t1_ParamLimits

0xddcc,	// (0x000189a5) sat_plugin_idle_act4_pane_t1

0xdddf,	// (0x000189b8) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdddf,	// (0x000189b8) sat_plugin_idle_act4_pane_t2

0xddf2,	// (0x000189cb) sat_plugin_idle_act4_pane_t3_ParamLimits

0xddf2,	// (0x000189cb) sat_plugin_idle_act4_pane_t3

0xde05,	// (0x000189de) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde05,	// (0x000189de) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0001a964) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0001a964) sat_plugin_idle_act4_pane_t

0x4bb3,	// (0x0000f78c) popup_battery_window_ParamLimits

0x4bb3,	// (0x0000f78c) popup_battery_window

0x7074,	// (0x00011c4d) bg_popup_sub_pane_cp25_ParamLimits

0x7074,	// (0x00011c4d) bg_popup_sub_pane_cp25

0xde18,	// (0x000189f1) popup_battery_window_g1_ParamLimits

0xde18,	// (0x000189f1) popup_battery_window_g1

0xde24,	// (0x000189fd) popup_battery_window_t1_ParamLimits

0xde24,	// (0x000189fd) popup_battery_window_t1

0xde36,	// (0x00018a0f) popup_battery_window_t2_ParamLimits

0xde36,	// (0x00018a0f) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0001a96d) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0001a96d) popup_battery_window_t

0x8a6a,	// (0x00013643) midp_canvas_pane_ParamLimits

0x8adf,	// (0x000136b8) midp_keypad_pane_ParamLimits

0x8adf,	// (0x000136b8) midp_keypad_pane

0x8daa,	// (0x00013983) main_midp_pane_ParamLimits

0xb858,	// (0x00016431) signal_pane_g2_cp_ParamLimits

0xde53,	// (0x00018a2c) aid_size_cell_midp_keypad_ParamLimits

0xde53,	// (0x00018a2c) aid_size_cell_midp_keypad

0xde6d,	// (0x00018a46) midp_keyp_game_grid_pane_ParamLimits

0xde6d,	// (0x00018a46) midp_keyp_game_grid_pane

0xde8d,	// (0x00018a66) midp_keyp_rocker_pane_ParamLimits

0xde8d,	// (0x00018a66) midp_keyp_rocker_pane

0xdec2,	// (0x00018a9b) midp_keyp_sk_left_pane_ParamLimits

0xdec2,	// (0x00018a9b) midp_keyp_sk_left_pane

0xdf1a,	// (0x00018af3) midp_keyp_sk_right_pane_ParamLimits

0xdf1a,	// (0x00018af3) midp_keyp_sk_right_pane

0x6cdd,	// (0x000118b6) bg_button_pane_cp03

0xdf72,	// (0x00018b4b) midp_keyp_sk_left_pane_g1

0x6cdd,	// (0x000118b6) bg_button_pane_cp04

0xdf72,	// (0x00018b4b) midp_keyp_sk_right_pane_g1

0xbdf1,	// (0x000169ca) midp_keyp_rocker_pane_g1

0xdf7b,	// (0x00018b54) keyp_game_cell_pane_ParamLimits

0xdf7b,	// (0x00018b54) keyp_game_cell_pane

0x6cdd,	// (0x000118b6) bg_button_pane_cp02

0xdf8e,	// (0x00018b67) keyp_game_cell_pane_g1

0x4bf7,	// (0x0000f7d0) popup_fep_vkb2_window_ParamLimits

0x4bf7,	// (0x0000f7d0) popup_fep_vkb2_window

0x63b0,	// (0x00010f89) aid_size_cell_vkb2_ParamLimits

0x63b0,	// (0x00010f89) aid_size_cell_vkb2

0x6404,	// (0x00010fdd) popup_fep_vkb2_window_g1_ParamLimits

0x6404,	// (0x00010fdd) popup_fep_vkb2_window_g1

0x644c,	// (0x00011025) vkb2_area_bottom_pane_ParamLimits

0x644c,	// (0x00011025) vkb2_area_bottom_pane

0x6498,	// (0x00011071) vkb2_area_keypad_pane_ParamLimits

0x6498,	// (0x00011071) vkb2_area_keypad_pane

0x64da,	// (0x000110b3) vkb2_area_top_pane_ParamLimits

0x64da,	// (0x000110b3) vkb2_area_top_pane

0x6554,	// (0x0001112d) vkb2_top_entry_pane_ParamLimits

0x6554,	// (0x0001112d) vkb2_top_entry_pane

0x657e,	// (0x00011157) vkb2_top_grid_left_pane_ParamLimits

0x657e,	// (0x00011157) vkb2_top_grid_left_pane

0x659c,	// (0x00011175) vkb2_top_grid_right_pane_ParamLimits

0x659c,	// (0x00011175) vkb2_top_grid_right_pane

0x65ba,	// (0x00011193) vkb2_cell_keypad_pane_ParamLimits

0x65ba,	// (0x00011193) vkb2_cell_keypad_pane

0x668b,	// (0x00011264) vkb2_area_bottom_grid_pane_ParamLimits

0x668b,	// (0x00011264) vkb2_area_bottom_grid_pane

0x66b1,	// (0x0001128a) vkb2_area_bottom_pane_g1_ParamLimits

0x66b1,	// (0x0001128a) vkb2_area_bottom_pane_g1

0x66d5,	// (0x000112ae) vkb2_area_bottom_pane_g2_ParamLimits

0x66d5,	// (0x000112ae) vkb2_area_bottom_pane_g2

0x6703,	// (0x000112dc) vkb2_area_bottom_pane_g3_ParamLimits

0x6703,	// (0x000112dc) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0001a972) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0001a972) vkb2_area_bottom_pane_g

0x6764,	// (0x0001133d) vkb2_top_cell_left_pane_ParamLimits

0x6764,	// (0x0001133d) vkb2_top_cell_left_pane

0xdf9f,	// (0x00018b78) vkb2_top_entry_pane_g1_ParamLimits

0xdf9f,	// (0x00018b78) vkb2_top_entry_pane_g1

0xdfad,	// (0x00018b86) vkb2_top_entry_pane_t1_ParamLimits

0xdfad,	// (0x00018b86) vkb2_top_entry_pane_t1

0xdfdf,	// (0x00018bb8) vkb2_top_entry_pane_t2_ParamLimits

0xdfdf,	// (0x00018bb8) vkb2_top_entry_pane_t2

0xe011,	// (0x00018bea) vkb2_top_entry_pane_t3_ParamLimits

0xe011,	// (0x00018bea) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0001a979) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0001a979) vkb2_top_entry_pane_t

0x67b1,	// (0x0001138a) vkb2_top_grid_right_pane_g1_ParamLimits

0x67b1,	// (0x0001138a) vkb2_top_grid_right_pane_g1

0x67c7,	// (0x000113a0) vkb2_top_grid_right_pane_g2_ParamLimits

0x67c7,	// (0x000113a0) vkb2_top_grid_right_pane_g2

0x67df,	// (0x000113b8) vkb2_top_grid_right_pane_g3_ParamLimits

0x67df,	// (0x000113b8) vkb2_top_grid_right_pane_g3

0x67f7,	// (0x000113d0) vkb2_top_grid_right_pane_g4_ParamLimits

0x67f7,	// (0x000113d0) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0001a980) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0001a980) vkb2_top_grid_right_pane_g

0x680d,	// (0x000113e6) vkb2_top_cell_left_pane_g1

0x6824,	// (0x000113fd) vkb2_cell_keypad_pane_g1_ParamLimits

0x6824,	// (0x000113fd) vkb2_cell_keypad_pane_g1

0xe035,	// (0x00018c0e) vkb2_cell_keypad_pane_t1_ParamLimits

0xe035,	// (0x00018c0e) vkb2_cell_keypad_pane_t1

0x6832,	// (0x0001140b) vkb2_cell_bottom_grid_pane_ParamLimits

0x6832,	// (0x0001140b) vkb2_cell_bottom_grid_pane

0x686b,	// (0x00011444) vkb2_cell_bottom_grid_pane_g1

0xdbe8,	// (0x000187c1) aid_call2_pane_cp02

0xdbf0,	// (0x000187c9) aid_call_pane_cp02

0xdbf8,	// (0x000187d1) clock_digital_number_pane_cp10

0xdc00,	// (0x000187d9) clock_digital_number_pane_cp11

0xdc08,	// (0x000187e1) clock_digital_number_pane_cp12

0xdc10,	// (0x000187e9) clock_digital_number_pane_cp13

0xdc18,	// (0x000187f1) clock_digital_separator_pane_cp10

0x83cb,	// (0x00012fa4) popup_clock_digital_analogue_window_cp2_g1

0x83cb,	// (0x00012fa4) popup_clock_digital_analogue_window_cp2_g2

0xdc20,	// (0x000187f9) popup_clock_digital_analogue_window_cp2_g3

0x83cb,	// (0x00012fa4) popup_clock_digital_analogue_window_cp2_g4

0xdc20,	// (0x000187f9) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0001a935) popup_clock_digital_analogue_window_cp2_g

0xdc28,	// (0x00018801) popup_clock_digital_analogue_window_cp2_t1

0xdc36,	// (0x0001880f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0001a940) popup_clock_digital_analogue_window_cp2_t

0xbdf1,	// (0x000169ca) clock_digital_number_pane_cp10_g1

0xbdf1,	// (0x000169ca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001a71c) clock_digital_number_pane_cp10_g

0xbdf1,	// (0x000169ca) clock_digital_separator_pane_cp10_g1

0xbdf1,	// (0x000169ca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0001a71c) clock_digital_separator_pane_cp10_g

0xda64,	// (0x0001863d) uniindi_top_pane_g3

0xda75,	// (0x0001864e) uniindi_top_pane_g4

0x6645,	// (0x0001121e) vkb2_row_keypad_pane_ParamLimits

0x6645,	// (0x0001121e) vkb2_row_keypad_pane

0x6887,	// (0x00011460) vkb2_cell_t_keypad_pane_ParamLimits

0x6887,	// (0x00011460) vkb2_cell_t_keypad_pane

0x6897,	// (0x00011470) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6897,	// (0x00011470) vkb2_cell_t_keypad_pane_cp08

0x68aa,	// (0x00011483) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x68aa,	// (0x00011483) vkb2_cell_t_keypad_pane_cp09

0x68be,	// (0x00011497) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x68be,	// (0x00011497) vkb2_cell_t_keypad_pane_cp01

0x68cf,	// (0x000114a8) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x68cf,	// (0x000114a8) vkb2_cell_t_keypad_pane_cp02

0x68e0,	// (0x000114b9) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x68e0,	// (0x000114b9) vkb2_cell_t_keypad_pane_cp03

0x68f1,	// (0x000114ca) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x68f1,	// (0x000114ca) vkb2_cell_t_keypad_pane_cp04

0x6902,	// (0x000114db) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6902,	// (0x000114db) vkb2_cell_t_keypad_pane_cp05

0x6913,	// (0x000114ec) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6913,	// (0x000114ec) vkb2_cell_t_keypad_pane_cp06

0x6924,	// (0x000114fd) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6924,	// (0x000114fd) vkb2_cell_t_keypad_pane_cp07

0x6935,	// (0x0001150e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6935,	// (0x0001150e) vkb2_cell_t_keypad_pane_cp10

0x60eb,	// (0x00010cc4) vkb2_cell_t_keypad_pane_g1

0xe04c,	// (0x00018c25) vkb2_cell_t_keypad_pane_t1

0x4aee,	// (0x0000f6c7) popup_grid_graphic2_window

0xe05e,	// (0x00018c37) aid_size_cell_graphic2_ParamLimits

0xe05e,	// (0x00018c37) aid_size_cell_graphic2

0xe096,	// (0x00018c6f) bg_popup_window_pane_cp21_ParamLimits

0xe096,	// (0x00018c6f) bg_popup_window_pane_cp21

0xe0a4,	// (0x00018c7d) graphic2_pages_pane_ParamLimits

0xe0a4,	// (0x00018c7d) graphic2_pages_pane

0xe0ea,	// (0x00018cc3) grid_graphic2_control_pane_ParamLimits

0xe0ea,	// (0x00018cc3) grid_graphic2_control_pane

0xe128,	// (0x00018d01) grid_graphic2_pane_ParamLimits

0xe128,	// (0x00018d01) grid_graphic2_pane

0xe19c,	// (0x00018d75) cell_graphic2_pane

0x4aee,	// (0x0000f6c7) main_comp_mode_pane

0xd281,	// (0x00017e5a) list_ai3_gene_pane_ParamLimits

0xd6ae,	// (0x00018287) bg_popup_window_pane_cp19_ParamLimits

0xd6ba,	// (0x00018293) bg_touch_area_indi_pane_ParamLimits

0xd6ba,	// (0x00018293) bg_touch_area_indi_pane

0xd6d0,	// (0x000182a9) bg_touch_area_indi_pane_cp01_ParamLimits

0xd6d0,	// (0x000182a9) bg_touch_area_indi_pane_cp01

0xd6e6,	// (0x000182bf) bg_touch_area_indi_pane_cp02_ParamLimits

0xd6e6,	// (0x000182bf) bg_touch_area_indi_pane_cp02

0xd6fe,	// (0x000182d7) bg_touch_area_indi_pane_cp03_ParamLimits

0xd6fe,	// (0x000182d7) bg_touch_area_indi_pane_cp03

0xd718,	// (0x000182f1) popup_slider_window_g1_ParamLimits

0xd734,	// (0x0001830d) popup_slider_window_g2_ParamLimits

0xd750,	// (0x00018329) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0001a8ca) popup_slider_window_g_ParamLimits

0xd7ac,	// (0x00018385) popup_slider_window_t1_ParamLimits

0xd820,	// (0x000183f9) small_volume_slider_vertical_pane_ParamLimits

0xe19c,	// (0x00018d75) cell_graphic2_pane_ParamLimits

0xe1ea,	// (0x00018dc3) bg_button_pane_cp10_ParamLimits

0xe1ea,	// (0x00018dc3) bg_button_pane_cp10

0xe1fd,	// (0x00018dd6) bg_button_pane_cp11_ParamLimits

0xe1fd,	// (0x00018dd6) bg_button_pane_cp11

0xe210,	// (0x00018de9) graphic2_pages_pane_g1_ParamLimits

0xe210,	// (0x00018de9) graphic2_pages_pane_g1

0xe22b,	// (0x00018e04) graphic2_pages_pane_g2_ParamLimits

0xe22b,	// (0x00018e04) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0001a98e) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0001a98e) graphic2_pages_pane_g

0xe243,	// (0x00018e1c) graphic2_pages_pane_t1_ParamLimits

0xe243,	// (0x00018e1c) graphic2_pages_pane_t1

0xe25b,	// (0x00018e34) cell_graphic2_control_pane_ParamLimits

0xe25b,	// (0x00018e34) cell_graphic2_control_pane

0xe27c,	// (0x00018e55) cell_graphic2_pane_g1_ParamLimits

0xe27c,	// (0x00018e55) cell_graphic2_pane_g1

0xe289,	// (0x00018e62) cell_graphic2_pane_g2_ParamLimits

0xe289,	// (0x00018e62) cell_graphic2_pane_g2

0xe296,	// (0x00018e6f) cell_graphic2_pane_g3_ParamLimits

0xe296,	// (0x00018e6f) cell_graphic2_pane_g3

0xe2a3,	// (0x00018e7c) cell_graphic2_pane_g4_ParamLimits

0xe2a3,	// (0x00018e7c) cell_graphic2_pane_g4

0xe2b0,	// (0x00018e89) cell_graphic2_pane_g5_ParamLimits

0xe2b0,	// (0x00018e89) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0001a993) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0001a993) cell_graphic2_pane_g

0xe2cb,	// (0x00018ea4) cell_graphic2_pane_t1_ParamLimits

0xe2cb,	// (0x00018ea4) cell_graphic2_pane_t1

0x9418,	// (0x00013ff1) grid_highlight_pane_cp11_ParamLimits

0x9418,	// (0x00013ff1) grid_highlight_pane_cp11

0x7074,	// (0x00011c4d) bg_button_pane_cp05

0xe2f4,	// (0x00018ecd) cell_graphic2_control_pane_g1

0xbdf1,	// (0x000169ca) bg_touch_area_indi_pane_g1

0xe31c,	// (0x00018ef5) aid_cmod_rocker_key_size

0xe326,	// (0x00018eff) aid_cmode_itu_key_size

0xe330,	// (0x00018f09) main_cmode_video_pane

0xe33a,	// (0x00018f13) main_comp_mode_itu_pane

0xe346,	// (0x00018f1f) main_comp_mode_rocker_pane

0xe352,	// (0x00018f2b) cell_cmode_rocker_pane_ParamLimits

0xe352,	// (0x00018f2b) cell_cmode_rocker_pane

0xe364,	// (0x00018f3d) cell_cmode_itu_pane_ParamLimits

0xe364,	// (0x00018f3d) cell_cmode_itu_pane

0x7bd2,	// (0x000127ab) bg_button_pane_cp06_ParamLimits

0x7bd2,	// (0x000127ab) bg_button_pane_cp06

0xc06f,	// (0x00016c48) cell_cmode_rocker_pane_g1_ParamLimits

0xc06f,	// (0x00016c48) cell_cmode_rocker_pane_g1

0xd8c4,	// (0x0001849d) cell_cmode_rocker_pane_g2_ParamLimits

0xd8c4,	// (0x0001849d) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0001a9a3) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0001a9a3) cell_cmode_rocker_pane_g

0x6cdd,	// (0x000118b6) bg_button_pane_cp07

0xe379,	// (0x00018f52) cell_cmode_itu_pane_g1

0xe382,	// (0x00018f5b) cell_cmode_itu_pane_t1

0xe390,	// (0x00018f69) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0001a9a8) cell_cmode_itu_pane_t

0xdae7,	// (0x000186c0) aid_touch_ctrl_left

0xdaef,	// (0x000186c8) aid_touch_ctrl_right

0x6cdd,	// (0x000118b6) compa_mode_pane

0xe39e,	// (0x00018f77) aid_cmod_rocker_key_size_cp

0xe3a8,	// (0x00018f81) aid_cmode_itu_key_size_cp

0xe3b2,	// (0x00018f8b) compa_mode_pane_g1

0xe3ba,	// (0x00018f93) compa_mode_pane_g2

0xe3c2,	// (0x00018f9b) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0001a9ad) compa_mode_pane_g

0xe3ca,	// (0x00018fa3) main_comp_mode_itu_pane_cp

0xe3d2,	// (0x00018fab) main_comp_mode_rocker_pane_cp

0xe3da,	// (0x00018fb3) cell_cmode_itu_pane_cp_ParamLimits

0xe3da,	// (0x00018fb3) cell_cmode_itu_pane_cp

0xe3ef,	// (0x00018fc8) cell_cmode_rocker_pane_cp_ParamLimits

0xe3ef,	// (0x00018fc8) cell_cmode_rocker_pane_cp

0x7bd2,	// (0x000127ab) bg_button_pane_cp06_cp_ParamLimits

0x7bd2,	// (0x000127ab) bg_button_pane_cp06_cp

0xc06f,	// (0x00016c48) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc06f,	// (0x00016c48) cell_cmode_rocker_pane_g1_cp

0xbdf1,	// (0x000169ca) cell_cmode_rocker_pane_g2_cp

0x6cdd,	// (0x000118b6) bg_button_pane_cp07_cp

0xa98d,	// (0x00015566) cell_cmode_itu_pane_g1_cp

0xe401,	// (0x00018fda) cell_cmode_itu_pane_t1_cp

0xe401,	// (0x00018fda) cell_cmode_itu_pane_t2_cp

0xa97a,	// (0x00015553) settings_code_pane_cp2

0x6dd1,	// (0x000119aa) bg_popup_window_pane_cp3_ParamLimits

0x724e,	// (0x00011e27) heading_pane_cp3_ParamLimits

0x725a,	// (0x00011e33) listscroll_popup_graphic_pane_ParamLimits

0x5e94,	// (0x00010a6d) fep_hwr_aid_pane_ParamLimits

0x630b,	// (0x00010ee4) aid_touch_sctrl_top_ParamLimits

0x6326,	// (0x00010eff) sctrl_sk_top_pane_g1_ParamLimits

0x60eb,	// (0x00010cc4) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0001a8e3) sctrl_sk_top_pane_g_ParamLimits

0x6333,	// (0x00010f0c) sctrl_sk_top_pane_t1_ParamLimits

0x630b,	// (0x00010ee4) aid_touch_sctrl_bottom_ParamLimits

0x6333,	// (0x00010f0c) sctrl_sk_bottom_pane_t1_ParamLimits

0xda30,	// (0x00018609) aid_area_touch_clock

0x651c,	// (0x000110f5) aid_vkb2_area_top_pane_cell_ParamLimits

0x651c,	// (0x000110f5) aid_vkb2_area_top_pane_cell

0x6667,	// (0x00011240) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6667,	// (0x00011240) aid_vkb2_area_bottom_pane_cell

0xdf97,	// (0x00018b70) popup_char_count_window

0xe430,	// (0x00019009) popup_char_count_window_g1

0xe439,	// (0x00019012) popup_char_count_window_g2

0xe442,	// (0x0001901b) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0001a9b4) popup_char_count_window_g

0xe44b,	// (0x00019024) popup_char_count_window_t1

0x63e2,	// (0x00010fbb) popup_fep_char_preview_window_ParamLimits

0x63e2,	// (0x00010fbb) popup_fep_char_preview_window

0x653a,	// (0x00011113) vkb2_top_candi_pane_ParamLimits

0x653a,	// (0x00011113) vkb2_top_candi_pane

0xe459,	// (0x00019032) cell_vkb2_top_candi_pane_ParamLimits

0xe459,	// (0x00019032) cell_vkb2_top_candi_pane

0x694a,	// (0x00011523) bg_popup_fep_char_preview_window_ParamLimits

0x694a,	// (0x00011523) bg_popup_fep_char_preview_window

0x6958,	// (0x00011531) popup_fep_char_preview_window_t1_ParamLimits

0x6958,	// (0x00011531) popup_fep_char_preview_window_t1

0xe4a6,	// (0x0001907f) bg_popup_fep_char_preview_window_g1

0xe4ae,	// (0x00019087) bg_popup_fep_char_preview_window_g2

0xe4b6,	// (0x0001908f) bg_popup_fep_char_preview_window_g3

0xe4be,	// (0x00019097) bg_popup_fep_char_preview_window_g4

0xe4c6,	// (0x0001909f) bg_popup_fep_char_preview_window_g5

0x6992,	// (0x0001156b) bg_popup_fep_char_preview_window_g6

0xe4ce,	// (0x000190a7) bg_popup_fep_char_preview_window_g7

0xe4d6,	// (0x000190af) bg_popup_fep_char_preview_window_g8

0xe4de,	// (0x000190b7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0001a9bb) bg_popup_fep_char_preview_window_g

0x60eb,	// (0x00010cc4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x60eb,	// (0x00010cc4) cell_vkb2_top_candi_pane_g1

0x60f9,	// (0x00010cd2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x60f9,	// (0x00010cd2) cell_vkb2_top_candi_pane_g2

0xe40f,	// (0x00018fe8) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe40f,	// (0x00018fe8) cell_vkb2_top_candi_pane_g3

0x699a,	// (0x00011573) cell_vkb2_top_candi_pane_g4_ParamLimits

0x699a,	// (0x00011573) cell_vkb2_top_candi_pane_g4

0xc3dd,	// (0x00016fb6) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc3dd,	// (0x00016fb6) cell_vkb2_top_candi_pane_g5

0x69bb,	// (0x00011594) cell_vkb2_top_candi_pane_g6_ParamLimits

0x69bb,	// (0x00011594) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0001a9ce) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0001a9ce) cell_vkb2_top_candi_pane_g

0x69c9,	// (0x000115a2) cell_vkb2_top_candi_pane_t1

0x5cf4,	// (0x000108cd) aid_size_touch_slider_mark_ParamLimits

0x5cf4,	// (0x000108cd) aid_size_touch_slider_mark

0xe0da,	// (0x00018cb3) grid_graphic2_catg_pane_ParamLimits

0xe0da,	// (0x00018cb3) grid_graphic2_catg_pane

0xe178,	// (0x00018d51) popup_grid_graphic2_window_t1_ParamLimits

0xe178,	// (0x00018d51) popup_grid_graphic2_window_t1

0xe18a,	// (0x00018d63) popup_grid_graphic2_window_t2_ParamLimits

0xe18a,	// (0x00018d63) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0001a989) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0001a989) popup_grid_graphic2_window_t

0x7074,	// (0x00011c4d) bg_button_pane_cp05_ParamLimits

0xe2f4,	// (0x00018ecd) cell_graphic2_control_pane_g1_ParamLimits

0xe4e6,	// (0x000190bf) cell_graphic2_catg_pane_ParamLimits

0xe4e6,	// (0x000190bf) cell_graphic2_catg_pane

0x6cdd,	// (0x000118b6) bg_button_pane_cp12

0xe4f8,	// (0x000190d1) cell_graphic2_catg_pane_g1

0xd9fc,	// (0x000185d5) cell_tb_ext_pane_t1_ParamLimits

0x6784,	// (0x0001135d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6784,	// (0x0001135d) vkb2_top_cell_right_narrow_pane

0x679c,	// (0x00011375) vkb2_top_cell_right_wide_pane_ParamLimits

0x679c,	// (0x00011375) vkb2_top_cell_right_wide_pane

0x5e86,	// (0x00010a5f) bg_vkb2_func_pane_ParamLimits

0x5e86,	// (0x00010a5f) bg_vkb2_func_pane

0x680d,	// (0x000113e6) vkb2_top_cell_left_pane_g1_ParamLimits

0x5e86,	// (0x00010a5f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5e86,	// (0x00010a5f) bg_vkb2_fuc_pane_cp03

0x686b,	// (0x00011444) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x92f2,	// (0x00013ecb) bg_vkb2_func_pane_g1

0x92fa,	// (0x00013ed3) bg_vkb2_func_pane_g2

0x930a,	// (0x00013ee3) bg_vkb2_func_pane_g3

0x9302,	// (0x00013edb) bg_vkb2_func_pane_g4

0x9312,	// (0x00013eeb) bg_vkb2_func_pane_g5

0x931a,	// (0x00013ef3) bg_vkb2_func_pane_g6

0x9322,	// (0x00013efb) bg_vkb2_func_pane_g7

0x932a,	// (0x00013f03) bg_vkb2_func_pane_g8

0x92ea,	// (0x00013ec3) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0001a9db) bg_vkb2_func_pane_g

0x5e86,	// (0x00010a5f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5e86,	// (0x00010a5f) bg_vkb2_fuc_pane_cp01

0x680d,	// (0x000113e6) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x680d,	// (0x000113e6) vkb2_top_cell_right_wide_pane_g1

0x5e86,	// (0x00010a5f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5e86,	// (0x00010a5f) bg_vkb2_fuc_pane_cp02

0x686b,	// (0x00011444) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x686b,	// (0x00011444) vkb2_top_cell_right_narrow_pane_g1

0xd632,	// (0x0001820b) aid_touch_area_decrease_ParamLimits

0xd632,	// (0x0001820b) aid_touch_area_decrease

0xd650,	// (0x00018229) aid_touch_area_increase_ParamLimits

0xd650,	// (0x00018229) aid_touch_area_increase

0xd65c,	// (0x00018235) aid_touch_area_mute_ParamLimits

0xd65c,	// (0x00018235) aid_touch_area_mute

0xd680,	// (0x00018259) aid_touch_area_slider_ParamLimits

0xd680,	// (0x00018259) aid_touch_area_slider

0xd76c,	// (0x00018345) popup_slider_window_g4_ParamLimits

0xd76c,	// (0x00018345) popup_slider_window_g4

0xd778,	// (0x00018351) popup_slider_window_g5_ParamLimits

0xd778,	// (0x00018351) popup_slider_window_g5

0xd79a,	// (0x00018373) popup_slider_window_g6_ParamLimits

0xd79a,	// (0x00018373) popup_slider_window_g6

0xd7da,	// (0x000183b3) popup_slider_window_t2_ParamLimits

0xd7da,	// (0x000183b3) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0001a8d7) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0001a8d7) popup_slider_window_t

0xd7f2,	// (0x000183cb) slider_pane_ParamLimits

0xd7f2,	// (0x000183cb) slider_pane

0xe501,	// (0x000190da) slider_pane_g1_ParamLimits

0xe501,	// (0x000190da) slider_pane_g1

0xe515,	// (0x000190ee) slider_pane_g2_ParamLimits

0xe515,	// (0x000190ee) slider_pane_g2

0xe52b,	// (0x00019104) slider_pane_g3_ParamLimits

0xe52b,	// (0x00019104) slider_pane_g3

0x0003,

0xfe15,	// (0x0001a9ee) slider_pane_g_ParamLimits

0xfe15,	// (0x0001a9ee) slider_pane_g

0x58af,	// (0x00010488) popup_tb_float_extension_window_ParamLimits

0x58af,	// (0x00010488) popup_tb_float_extension_window

0xe557,	// (0x00019130) aid_size_cell_tb_float_ext

0x6cdd,	// (0x000118b6) bg_popup_sub_window_cp28

0xe563,	// (0x0001913c) grid_tb_float_ext_pane

0xe56d,	// (0x00019146) cell_tb_float_ext_pane_ParamLimits

0xe56d,	// (0x00019146) cell_tb_float_ext_pane

0xe587,	// (0x00019160) cell_tb_float_ext_pane_g1

0xe590,	// (0x00019169) grid_highlight_pane_cp12

0x5fd5,	// (0x00010bae) cell_last_hwr_side_pane_ParamLimits

0x5fd5,	// (0x00010bae) cell_last_hwr_side_pane

0xbdf1,	// (0x000169ca) cell_last_hwr_side_pane_g1

0xe599,	// (0x00019172) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0001a9f7) cell_last_hwr_side_pane_g

0x6733,	// (0x0001130c) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6733,	// (0x0001130c) vkb2_area_bottom_space_btn_pane

0x60eb,	// (0x00010cc4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe04c,	// (0x00018c25) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x69c9,	// (0x000115a2) cell_vkb2_top_candi_pane_t1_ParamLimits

0x69e8,	// (0x000115c1) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x69e8,	// (0x000115c1) vkb2_area_bottom_space_btn_pane_g1

0x6a22,	// (0x000115fb) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6a22,	// (0x000115fb) vkb2_area_bottom_space_btn_pane_g2

0x6a58,	// (0x00011631) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6a58,	// (0x00011631) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0001a9fc) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0001a9fc) vkb2_area_bottom_space_btn_pane_g

0x5f49,	// (0x00010b22) cel_fep_hwr_func_pane_ParamLimits

0x5f49,	// (0x00010b22) cel_fep_hwr_func_pane

0x5f85,	// (0x00010b5e) cell_hwr_side_button_pane_ParamLimits

0x5f85,	// (0x00010b5e) cell_hwr_side_button_pane

0xda30,	// (0x00018609) aid_area_touch_clock_ParamLimits

0x7074,	// (0x00011c4d) bg_uniindi_top_pane_ParamLimits

0xda42,	// (0x0001861b) uniindi_top_pane_g1_ParamLimits

0xda58,	// (0x00018631) uniindi_top_pane_g2_ParamLimits

0xda64,	// (0x0001863d) uniindi_top_pane_g3_ParamLimits

0xda75,	// (0x0001864e) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0001a90f) uniindi_top_pane_g_ParamLimits

0xda82,	// (0x0001865b) uniindi_top_pane_t1_ParamLimits

0x7074,	// (0x00011c4d) bg_vkb2_func_pane_cp01_ParamLimits

0x7074,	// (0x00011c4d) bg_vkb2_func_pane_cp01

0xe5a2,	// (0x0001917b) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5a2,	// (0x0001917b) cel_fep_hwr_func_pane_g1

0x7074,	// (0x00011c4d) bg_vkb2_func_pane_cp02_ParamLimits

0x7074,	// (0x00011c4d) bg_vkb2_func_pane_cp02

0xe5a2,	// (0x0001917b) cell_hwr_side_button_pane_g1_ParamLimits

0xe5a2,	// (0x0001917b) cell_hwr_side_button_pane_g1

0x913d,	// (0x00013d16) status_pane_g4_ParamLimits

0x913d,	// (0x00013d16) status_pane_g4

0x9157,	// (0x00013d30) status_pane_t1

0xbb2b,	// (0x00016704) form2_midp_gauge_slider_cont_pane

0xbb33,	// (0x0001670c) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbb45,	// (0x0001671e) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbb57,	// (0x00016730) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0001a6cf) form2_midp_gauge_slider_pane_t_ParamLimits

0xbb69,	// (0x00016742) form2_midp_slider_pane_ParamLimits

0x63a2,	// (0x00010f7b) aid_size_cell_func_vkb2_ParamLimits

0x63a2,	// (0x00010f7b) aid_size_cell_func_vkb2

0xe543,	// (0x0001911c) slider_pane_g4_ParamLimits

0xe543,	// (0x0001911c) slider_pane_g4

0x6aa2,	// (0x0001167b) form2_midp_gauge_slider_pane_t2_cp01

0x6ab0,	// (0x00011689) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6ab0,	// (0x00011689) form2_midp_gauge_slider_pane_t3_cp01

0x6acd,	// (0x000116a6) form2_midp_slider_pane_cp01

0x6cdd,	// (0x000118b6) navi_smil_pane

0xe5db,	// (0x000191b4) navi_smil_pane_g1

0xe5e3,	// (0x000191bc) navi_smil_pane_t1

0xe5b0,	// (0x00019189) form2_midp_slider_pane_g1

0xe5b9,	// (0x00019192) form2_midp_slider_pane_g2

0xe5c1,	// (0x0001919a) form2_midp_slider_pane_g3

0xe5b0,	// (0x00019189) form2_midp_slider_pane_g4

0xe5c9,	// (0x000191a2) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0001aa05) form2_midp_slider_pane_g

0x6a92,	// (0x0001166b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6a92,	// (0x0001166b) vkb2_area_bottom_space_btn_pane_g4

0x8f6c,	// (0x00013b45) lc0_navi_pane_ParamLimits

0x8f6c,	// (0x00013b45) lc0_navi_pane

0x8fe2,	// (0x00013bbb) lc0_stat_indi_pane_ParamLimits

0x8fe2,	// (0x00013bbb) lc0_stat_indi_pane

0x8ff9,	// (0x00013bd2) ls0_title_pane_ParamLimits

0x8ff9,	// (0x00013bd2) ls0_title_pane

0x7bd2,	// (0x000127ab) bg_popup_sub_pane_cp14_ParamLimits

0xda17,	// (0x000185f0) list_uniindi_pane_ParamLimits

0xda23,	// (0x000185fc) uniindi_top_pane_ParamLimits

0xdabf,	// (0x00018698) list_single_uniindi_pane_g1_ParamLimits

0xdad2,	// (0x000186ab) list_single_uniindi_pane_t1_ParamLimits

0x6ad6,	// (0x000116af) lc0_stat_clock_pane_ParamLimits

0x6ad6,	// (0x000116af) lc0_stat_clock_pane

0xe5f1,	// (0x000191ca) lc0_stat_indi_pane_g1_ParamLimits

0xe5f1,	// (0x000191ca) lc0_stat_indi_pane_g1

0xe5fe,	// (0x000191d7) lc0_stat_indi_pane_g2_ParamLimits

0xe5fe,	// (0x000191d7) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0001aa10) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0001aa10) lc0_stat_indi_pane_g

0x6ae3,	// (0x000116bc) lc0_uni_indicator_pane_ParamLimits

0x6ae3,	// (0x000116bc) lc0_uni_indicator_pane

0xe60b,	// (0x000191e4) ls0_title_pane_g1_ParamLimits

0xe60b,	// (0x000191e4) ls0_title_pane_g1

0xe61f,	// (0x000191f8) ls0_title_pane_t1_ParamLimits

0xe61f,	// (0x000191f8) ls0_title_pane_t1

0x6af0,	// (0x000116c9) lc0_uni_indicator_pane_g1_ParamLimits

0x6af0,	// (0x000116c9) lc0_uni_indicator_pane_g1

0xe655,	// (0x0001922e) lc0_stat_clock_pane_t1

0x4aee,	// (0x0000f6c7) main_ai5_pane

0xe663,	// (0x0001923c) ai5_sk_pane_ParamLimits

0xe663,	// (0x0001923c) ai5_sk_pane

0xe670,	// (0x00019249) cell_ai5_widget_pane_ParamLimits

0xe670,	// (0x00019249) cell_ai5_widget_pane

0xe726,	// (0x000192ff) aid_size_cell_widget_grid

0xe73c,	// (0x00019315) bg_ai5_widget_pane_ParamLimits

0xe73c,	// (0x00019315) bg_ai5_widget_pane

0xe7b0,	// (0x00019389) cell_ai5_widget_pane_g2

0xe7c0,	// (0x00019399) cell_ai5_widget_pane_g3

0xe7d7,	// (0x000193b0) cell_ai5_widget_pane_g4

0xe7e3,	// (0x000193bc) cell_ai5_widget_pane_g5

0xe7ef,	// (0x000193c8) cell_ai5_widget_pane_g6

0xe7fb,	// (0x000193d4) cell_ai5_widget_pane_g7

0xe843,	// (0x0001941c) cell_ai5_widget_pane_t1_ParamLimits

0xe843,	// (0x0001941c) cell_ai5_widget_pane_t1

0xe860,	// (0x00019439) cell_ai5_widget_pane_t2_ParamLimits

0xe860,	// (0x00019439) cell_ai5_widget_pane_t2

0xe878,	// (0x00019451) cell_ai5_widget_pane_t3_ParamLimits

0xe878,	// (0x00019451) cell_ai5_widget_pane_t3

0xe890,	// (0x00019469) cell_ai5_widget_pane_t4_ParamLimits

0xe890,	// (0x00019469) cell_ai5_widget_pane_t4

0xe8ad,	// (0x00019486) cell_ai5_widget_pane_t5_ParamLimits

0xe8ad,	// (0x00019486) cell_ai5_widget_pane_t5

0xe8cc,	// (0x000194a5) cell_ai5_widget_pane_t6_ParamLimits

0xe8cc,	// (0x000194a5) cell_ai5_widget_pane_t6

0xe8de,	// (0x000194b7) cell_ai5_widget_pane_t7_ParamLimits

0xe8de,	// (0x000194b7) cell_ai5_widget_pane_t7

0xe8f7,	// (0x000194d0) cell_ai5_widget_pane_t8_ParamLimits

0xe8f7,	// (0x000194d0) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0001aa2a) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0001aa2a) cell_ai5_widget_pane_t

0xe94b,	// (0x00019524) grid_ai5_widget_pane

0x7bd2,	// (0x000127ab) highlight_cell_ai5_widget_pane_ParamLimits

0x7bd2,	// (0x000127ab) highlight_cell_ai5_widget_pane

0xe963,	// (0x0001953c) ai5_sk_left_pane

0xe96d,	// (0x00019546) ai5_sk_middle_pane

0xe977,	// (0x00019550) ai5_sk_right_pane

0xe981,	// (0x0001955a) bg_ai5_widget_pane_g1_ParamLimits

0xe981,	// (0x0001955a) bg_ai5_widget_pane_g1

0xe98d,	// (0x00019566) bg_ai5_widget_pane_g2_ParamLimits

0xe98d,	// (0x00019566) bg_ai5_widget_pane_g2

0xe999,	// (0x00019572) bg_ai5_widget_pane_g3_ParamLimits

0xe999,	// (0x00019572) bg_ai5_widget_pane_g3

0xe9a5,	// (0x0001957e) bg_ai5_widget_pane_g4_ParamLimits

0xe9a5,	// (0x0001957e) bg_ai5_widget_pane_g4

0xe9b1,	// (0x0001958a) bg_ai5_widget_pane_g5_ParamLimits

0xe9b1,	// (0x0001958a) bg_ai5_widget_pane_g5

0xe9bd,	// (0x00019596) bg_ai5_widget_pane_g6_ParamLimits

0xe9bd,	// (0x00019596) bg_ai5_widget_pane_g6

0xe9c9,	// (0x000195a2) bg_ai5_widget_pane_g7_ParamLimits

0xe9c9,	// (0x000195a2) bg_ai5_widget_pane_g7

0xe9d5,	// (0x000195ae) bg_ai5_widget_pane_g8_ParamLimits

0xe9d5,	// (0x000195ae) bg_ai5_widget_pane_g8

0xe9e1,	// (0x000195ba) bg_ai5_widget_pane_g9_ParamLimits

0xe9e1,	// (0x000195ba) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0001aa3f) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0001aa3f) bg_ai5_widget_pane_g

0xea13,	// (0x000195ec) cell_shortcut_ai5_widget_pane_ParamLimits

0xea13,	// (0x000195ec) cell_shortcut_ai5_widget_pane

0x8a62,	// (0x0001363b) bg_cell_shortcut_ai5_widget_pane

0xea24,	// (0x000195fd) cell_grid_ai5_widget_pane_g1

0xea2d,	// (0x00019606) highlight_cell_shortcut_ai5_widget_pane

0x92f2,	// (0x00013ecb) ai5_sk_left_pane_g1

0xea35,	// (0x0001960e) ai5_sk_left_pane_g2

0xea3d,	// (0x00019616) ai5_sk_left_pane_g3

0xea45,	// (0x0001961e) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0001aa52) ai5_sk_left_pane_g

0xea4d,	// (0x00019626) ai5_sk_left_pane_t1

0x92fa,	// (0x00013ed3) ai5_sk_right_pane_g1

0xea5b,	// (0x00019634) ai5_sk_right_pane_g2

0xea63,	// (0x0001963c) ai5_sk_right_pane_g3

0xea6b,	// (0x00019644) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0001aa5b) ai5_sk_right_pane_g

0xea73,	// (0x0001964c) ai5_sk_right_pane_t1

0x92fa,	// (0x00013ed3) ai5_sk_middle_pane_g1

0x92f2,	// (0x00013ecb) ai5_sk_middle_pane_g2

0x9312,	// (0x00013eeb) ai5_sk_middle_pane_g3

0xea63,	// (0x0001963c) ai5_sk_middle_pane_g4

0xea3d,	// (0x00019616) ai5_sk_middle_pane_g5

0xea81,	// (0x0001965a) ai5_sk_middle_pane_g6

0xea89,	// (0x00019662) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0001aa64) ai5_sk_middle_pane_g

0x8df8,	// (0x000139d1) aid_touch_area_size_lc0_ParamLimits

0x8df8,	// (0x000139d1) aid_touch_area_size_lc0

0x611a,	// (0x00010cf3) cell_hwr_candidate_pane_t1_ParamLimits

0x8e14,	// (0x000139ed) aid_touch_navi_pane

0x90e7,	// (0x00013cc0) status_dt_navi_pane_ParamLimits

0x90e7,	// (0x00013cc0) status_dt_navi_pane

0x90f4,	// (0x00013ccd) status_dt_sta_pane_ParamLimits

0x90f4,	// (0x00013ccd) status_dt_sta_pane

0xea91,	// (0x0001966a) dt_sta_controll_pane

0xea9e,	// (0x00019677) dt_sta_indi_pane

0xeaaf,	// (0x00019688) dt_sta_title_pane

0x7074,	// (0x00011c4d) bg_dt_sta_indi_pane_ParamLimits

0x7074,	// (0x00011c4d) bg_dt_sta_indi_pane

0xeac2,	// (0x0001969b) dt_sta_battery_pane

0xeaca,	// (0x000196a3) dt_sta_indi_pane_g1

0xead3,	// (0x000196ac) dt_sta_indi_pane_g2

0xeadc,	// (0x000196b5) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0001aa73) dt_sta_indi_pane_g

0xeae5,	// (0x000196be) dt_sta_signal_pane

0x7bd2,	// (0x000127ab) bg_dt_sta_title_pane_ParamLimits

0x7bd2,	// (0x000127ab) bg_dt_sta_title_pane

0xeaee,	// (0x000196c7) dt_sta_title_pane_g1

0xeaf6,	// (0x000196cf) dt_sta_title_pane_t1_ParamLimits

0xeaf6,	// (0x000196cf) dt_sta_title_pane_t1

0x6cdd,	// (0x000118b6) bg_dt_sta_control_pane

0xeb0b,	// (0x000196e4) dt_sta_controll_pane_g1

0xeb14,	// (0x000196ed) bg_dt_sta_title_pane_g1

0xeb1d,	// (0x000196f6) bg_dt_sta_title_pane_g2

0xeb26,	// (0x000196ff) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0001aa7a) bg_dt_sta_title_pane_g

0xbdf1,	// (0x000169ca) bg_dt_sta_indi_pane_g1

0xeb2f,	// (0x00019708) dt_sta_signal_pane_g1

0xeb37,	// (0x00019710) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0001aa81) dt_sta_signal_pane_g

0xeb3f,	// (0x00019718) dt_sta_battery_pane_g1

0xeb48,	// (0x00019721) dt_sta_battery_pane_t1

0xbdf1,	// (0x000169ca) bg_dt_sta_control_pane_g1

0x84dd,	// (0x000130b6) fep_china_uni_eep_pane

0x84e5,	// (0x000130be) fep_china_uni_entry_pane_ParamLimits

0x84f5,	// (0x000130ce) popup_fep_china_uni_window_g1_ParamLimits

0x8505,	// (0x000130de) popup_fep_china_uni_window_g2_ParamLimits

0x8505,	// (0x000130de) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001a2f7) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001a2f7) popup_fep_china_uni_window_g

0xeb57,	// (0x00019730) fep_china_uni_eep_pane_g1

0xeb5f,	// (0x00019738) fep_china_uni_eep_pane_t1

0xe5d2,	// (0x000191ab) aid_touch_area_size_smil_player

0x8f64,	// (0x00013b3d) lc0_clock_pane

0x914b,	// (0x00013d24) status_pane_g5_ParamLimits

0x914b,	// (0x00013d24) status_pane_g5

0x5574,	// (0x0001014d) popup_keymap_window

0x9109,	// (0x00013ce2) status_icon_pane

0xe7c0,	// (0x00019399) cell_ai5_widget_pane_g3_ParamLimits

0xe7d7,	// (0x000193b0) cell_ai5_widget_pane_g4_ParamLimits

0xe7e3,	// (0x000193bc) cell_ai5_widget_pane_g5_ParamLimits

0xe807,	// (0x000193e0) cell_ai5_widget_pane_g8_ParamLimits

0xe807,	// (0x000193e0) cell_ai5_widget_pane_g8

0xe81b,	// (0x000193f4) cell_ai5_widget_pane_g9_ParamLimits

0xe81b,	// (0x000193f4) cell_ai5_widget_pane_g9

0xe82f,	// (0x00019408) cell_ai5_widget_pane_g10_ParamLimits

0xe82f,	// (0x00019408) cell_ai5_widget_pane_g10

0xeb6e,	// (0x00019747) status_icon_pane_g1

0x6cdd,	// (0x000118b6) bg_popup_sub_pane_cp13

0xeb76,	// (0x0001974f) popup_keymap_window_t1

0x8d2d,	// (0x00013906) control_pane_g6_ParamLimits

0x8d2d,	// (0x00013906) control_pane_g6

0x8d3a,	// (0x00013913) control_pane_g7_ParamLimits

0x8d3a,	// (0x00013913) control_pane_g7

0x8d47,	// (0x00013920) control_pane_g8_ParamLimits

0x8d47,	// (0x00013920) control_pane_g8

0xea91,	// (0x0001966a) dt_sta_controll_pane_ParamLimits

0xea9e,	// (0x00019677) dt_sta_indi_pane_ParamLimits

0xeaaf,	// (0x00019688) dt_sta_title_pane_ParamLimits

0x758f,	// (0x00012168) aid_size_touch_scroll_bar_cale

0x4bc7,	// (0x0000f7a0) popup_discreet_window_ParamLimits

0x4bc7,	// (0x0000f7a0) popup_discreet_window

0x4c4f,	// (0x0000f828) popup_sk_window

0x9a67,	// (0x00014640) bg_popup_sub_pane_cp28_ParamLimits

0x9a67,	// (0x00014640) bg_popup_sub_pane_cp28

0xeb84,	// (0x0001975d) popup_discreet_window_g1_ParamLimits

0xeb84,	// (0x0001975d) popup_discreet_window_g1

0xeba4,	// (0x0001977d) popup_discreet_window_t1_ParamLimits

0xeba4,	// (0x0001977d) popup_discreet_window_t1

0xebc2,	// (0x0001979b) popup_discreet_window_t2_ParamLimits

0xebc2,	// (0x0001979b) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0001aa86) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0001aa86) popup_discreet_window_t

0x6b04,	// (0x000116dd) popup_sk_window_g1

0x6b0e,	// (0x000116e7) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0001aa8d) popup_sk_window_g

0x6b18,	// (0x000116f1) popup_sk_window_t1

0x6b26,	// (0x000116ff) popup_sk_window_t1_copy1

0xe7b0,	// (0x00019389) cell_ai5_widget_pane_g2_ParamLimits

0xe909,	// (0x000194e2) cell_ai5_widget_pane_t9_ParamLimits

0xe909,	// (0x000194e2) cell_ai5_widget_pane_t9

0x6cdd,	// (0x000118b6) main_fep_fshwr2_pane

0x6b34,	// (0x0001170d) aid_fshwr2_btn_pane

0x6b40,	// (0x00011719) aid_fshwr2_syb_pane

0x6b51,	// (0x0001172a) aid_fshwr2_txt_pane

0x6b5d,	// (0x00011736) fshwr2_func_candi_pane

0x6b75,	// (0x0001174e) fshwr2_hwr_syb_pane

0x6b8c,	// (0x00011765) fshwr2_icf_pane

0x6cdd,	// (0x000118b6) fshwr2_icf_bg_pane

0xec14,	// (0x000197ed) fshwr2_icf_pane_t1_ParamLimits

0xec14,	// (0x000197ed) fshwr2_icf_pane_t1

0x83cb,	// (0x00012fa4) fshwr2_func_candi_pane_g1

0xec2c,	// (0x00019805) fshwr2_func_candi_row_pane_ParamLimits

0xec2c,	// (0x00019805) fshwr2_func_candi_row_pane

0xec3c,	// (0x00019815) cell_fshwr2_syb_pane_ParamLimits

0xec3c,	// (0x00019815) cell_fshwr2_syb_pane

0xc06f,	// (0x00016c48) fshwr2_hwr_syb_pane_g1_ParamLimits

0xc06f,	// (0x00016c48) fshwr2_hwr_syb_pane_g1

0x6cdd,	// (0x000118b6) bg_popup_call_pane_cp01

0xec56,	// (0x0001982f) fshwr2_func_candi_cell_pane_ParamLimits

0xec56,	// (0x0001982f) fshwr2_func_candi_cell_pane

0xec81,	// (0x0001985a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xec81,	// (0x0001985a) fshwr2_func_candi_cell_bg_pane

0xec8d,	// (0x00019866) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xec8d,	// (0x00019866) fshwr2_func_candi_cell_pane_g1

0xecb5,	// (0x0001988e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xecb5,	// (0x0001988e) fshwr2_func_candi_cell_pane_t1

0x6cdd,	// (0x000118b6) bg_button_pane_cp08

0x8a62,	// (0x0001363b) cell_fshwr2_syb_bg_pane

0xecc8,	// (0x000198a1) cell_fshwr2_syb_bg_pane_g1

0xecd0,	// (0x000198a9) cell_fshwr2_syb_bg_pane_t1

0x7bd2,	// (0x000127ab) main_tmo_pane

0xa576,	// (0x0001514f) uni_indicator_pane_g1_ParamLimits

0xa58d,	// (0x00015166) uni_indicator_pane_g2_ParamLimits

0xa5a0,	// (0x00015179) uni_indicator_pane_g3_ParamLimits

0xa5b2,	// (0x0001518b) uni_indicator_pane_g4_ParamLimits

0xa5b2,	// (0x0001518b) uni_indicator_pane_g4

0xa5c6,	// (0x0001519f) uni_indicator_pane_g5_ParamLimits

0xa5c6,	// (0x0001519f) uni_indicator_pane_g5

0xa5c6,	// (0x0001519f) uni_indicator_pane_g6_ParamLimits

0xa5c6,	// (0x0001519f) uni_indicator_pane_g6

0xf922,	// (0x0001a4fb) uni_indicator_pane_g_ParamLimits

0xd60e,	// (0x000181e7) popup_tmo_note_window_ParamLimits

0xd60e,	// (0x000181e7) popup_tmo_note_window

0x6384,	// (0x00010f5d) fshwr2_bg_pane

0xeca6,	// (0x0001987f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeca6,	// (0x0001987f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0001aa92) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0001aa92) fshwr2_func_candi_cell_pane_g

0xbdf1,	// (0x000169ca) bg_popup_window_pane_cp01

0xecdf,	// (0x000198b8) bg_popup_window_pane_g1_cp01

0xece8,	// (0x000198c1) bg_popup_window_pane_cp22_ParamLimits

0xece8,	// (0x000198c1) bg_popup_window_pane_cp22

0xecf6,	// (0x000198cf) listscroll_tmo_link_pane_ParamLimits

0xecf6,	// (0x000198cf) listscroll_tmo_link_pane

0xed36,	// (0x0001990f) popup_tmo_note_window_g1_ParamLimits

0xed36,	// (0x0001990f) popup_tmo_note_window_g1

0xed43,	// (0x0001991c) tmo_note_info_pane_ParamLimits

0xed43,	// (0x0001991c) tmo_note_info_pane

0xed5d,	// (0x00019936) list_tmo_note_info_pane_g1_ParamLimits

0xed5d,	// (0x00019936) list_tmo_note_info_pane_g1

0xed74,	// (0x0001994d) list_tmo_note_info_pane_g2_ParamLimits

0xed74,	// (0x0001994d) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0001aa97) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0001aa97) list_tmo_note_info_pane_g

0xed90,	// (0x00019969) list_tmo_note_info_text_pane_ParamLimits

0xed90,	// (0x00019969) list_tmo_note_info_text_pane

0xee11,	// (0x000199ea) list_tmo_link_pane

0xee1e,	// (0x000199f7) scroll_pane_cp20

0xee2b,	// (0x00019a04) list_single_tmo_link_pane_ParamLimits

0xee2b,	// (0x00019a04) list_single_tmo_link_pane

0xee3b,	// (0x00019a14) list_single_tmo_link_pane_t1

0xee49,	// (0x00019a22) list_tmo_note_info_text_pane_t1_ParamLimits

0xee49,	// (0x00019a22) list_tmo_note_info_text_pane_t1

0x7e06,	// (0x000129df) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7e06,	// (0x000129df) aid_size_touch_scroll_bar_cp01

0x7c7b,	// (0x00012854) aid_size_touch_slider_marker

0x4c37,	// (0x0000f810) popup_settings_window_ParamLimits

0x4c37,	// (0x0000f810) popup_settings_window

0x8dc4,	// (0x0001399d) popup_candi_list_indi_window

0x8e14,	// (0x000139ed) aid_touch_navi_pane_ParamLimits

0x62df,	// (0x00010eb8) rs_clock_indi_pane

0x62e8,	// (0x00010ec1) sctrl_sk_bottom_pane_ParamLimits

0x62f9,	// (0x00010ed2) sctrl_sk_top_pane_ParamLimits

0x63fc,	// (0x00010fd5) popup_fep_tooltip_window

0xe726,	// (0x000192ff) aid_size_cell_widget_grid_ParamLimits

0xe79b,	// (0x00019374) cell_ai5_widget_pane_g1_ParamLimits

0xe79b,	// (0x00019374) cell_ai5_widget_pane_g1

0xe7ef,	// (0x000193c8) cell_ai5_widget_pane_g6_ParamLimits

0xe7fb,	// (0x000193d4) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0001aa15) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0001aa15) cell_ai5_widget_pane_g

0xe92d,	// (0x00019506) cell_ai5_widget_pane_t10_ParamLimits

0xe92d,	// (0x00019506) cell_ai5_widget_pane_t10

0xe94b,	// (0x00019524) grid_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x000195c6) cell_contacts_ai5_widget_pane_ParamLimits

0xe9ed,	// (0x000195c6) cell_contacts_ai5_widget_pane

0xebd7,	// (0x000197b0) popup_discreet_window_t3_ParamLimits

0xebd7,	// (0x000197b0) popup_discreet_window_t3

0x6ba1,	// (0x0001177a) popup_fshwr2_char_preview_window_ParamLimits

0x6ba1,	// (0x0001177a) popup_fshwr2_char_preview_window

0xedae,	// (0x00019987) tmo_note_info_pane_t1

0xedc3,	// (0x0001999c) tmo_note_info_pane_t2

0xedd8,	// (0x000199b1) tmo_note_info_pane_t3

0xeded,	// (0x000199c6) tmo_note_info_pane_t4

0xedff,	// (0x000199d8) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0001aa9c) tmo_note_info_pane_t

0xee11,	// (0x000199ea) list_tmo_link_pane_ParamLimits

0xee1e,	// (0x000199f7) scroll_pane_cp20_ParamLimits

0x6cdd,	// (0x000118b6) bg_popup_fep_char_preview_window_cp01

0xee62,	// (0x00019a3b) popup_fshwr2_char_preview_window_t1

0xee70,	// (0x00019a49) popup_candi_list_indi_window_g1

0xee79,	// (0x00019a52) bg_cell_contacts_ai5_widget_pane

0xee85,	// (0x00019a5e) cell_contacts_ai5_widget_pane_g1

0xc676,	// (0x0001724f) cell_contacts_ai5_widget_pane_g2

0xee98,	// (0x00019a71) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0001aaa7) cell_contacts_ai5_widget_pane_g

0xeeaa,	// (0x00019a83) cell_contacts_ai5_widget_pane_t1

0x7bd2,	// (0x000127ab) highlight_cell_shortcut_ai5_widget_pane_cp01

0xef21,	// (0x00019afa) settings_container_pane

0x8a62,	// (0x0001363b) listscroll_set_pane_copy1

0xb247,	// (0x00015e20) scroll_pane_cp121_copy1

0xef2d,	// (0x00019b06) set_content_pane_copy1

0xef35,	// (0x00019b0e) aid_height_set_list_copy1_ParamLimits

0xef35,	// (0x00019b0e) aid_height_set_list_copy1

0xa7e6,	// (0x000153bf) aid_size_parent_copy1_ParamLimits

0xa7e6,	// (0x000153bf) aid_size_parent_copy1

0xef41,	// (0x00019b1a) button_value_adjust_pane_cp6_copy1_ParamLimits

0xef41,	// (0x00019b1a) button_value_adjust_pane_cp6_copy1

0x8daa,	// (0x00013983) list_highlight_pane_cp2_copy1_ParamLimits

0x8daa,	// (0x00013983) list_highlight_pane_cp2_copy1

0xef55,	// (0x00019b2e) list_set_pane_copy1_ParamLimits

0xef55,	// (0x00019b2e) list_set_pane_copy1

0xeebc,	// (0x00019a95) main_pane_set_t1_copy1_ParamLimits

0xeebc,	// (0x00019a95) main_pane_set_t1_copy1

0xeef6,	// (0x00019acf) main_pane_set_t2_copy1_ParamLimits

0xeef6,	// (0x00019acf) main_pane_set_t2_copy1

0xf002,	// (0x00019bdb) main_pane_set_t3_copy1

0xf010,	// (0x00019be9) main_pane_set_t4_copy1

0xef15,	// (0x00019aee) set_content_pane_g1_copy1_ParamLimits

0xef15,	// (0x00019aee) set_content_pane_g1_copy1

0xf01e,	// (0x00019bf7) setting_code_pane_copy1

0xf026,	// (0x00019bff) setting_slider_graphic_pane_copy1

0xf026,	// (0x00019bff) setting_slider_pane_copy1

0xf026,	// (0x00019bff) setting_text_pane_copy1

0xf026,	// (0x00019bff) setting_volume_pane_copy1

0xf01e,	// (0x00019bf7) settings_code_pane_cp2_copy1

0xf02e,	// (0x00019c07) settings_code_pane_cp_copy1_ParamLimits

0xf02e,	// (0x00019c07) settings_code_pane_cp_copy1

0x6bb5,	// (0x0001178e) volume_set_pane_copy1

0xf042,	// (0x00019c1b) volume_set_pane_g10_copy1

0xf04a,	// (0x00019c23) volume_set_pane_g1_copy1

0xf052,	// (0x00019c2b) volume_set_pane_g2_copy1

0xf05a,	// (0x00019c33) volume_set_pane_g3_copy1

0xf062,	// (0x00019c3b) volume_set_pane_g4_copy1

0xf06a,	// (0x00019c43) volume_set_pane_g5_copy1

0xf072,	// (0x00019c4b) volume_set_pane_g6_copy1

0xf07a,	// (0x00019c53) volume_set_pane_g7_copy1

0xf082,	// (0x00019c5b) volume_set_pane_g8_copy1

0xf08a,	// (0x00019c63) volume_set_pane_g9_copy1

0x6dd1,	// (0x000119aa) bg_set_opt_pane_cp_copy1_ParamLimits

0x6dd1,	// (0x000119aa) bg_set_opt_pane_cp_copy1

0x6bbd,	// (0x00011796) setting_slider_pane_t1_copy1_ParamLimits

0x6bbd,	// (0x00011796) setting_slider_pane_t1_copy1

0x6bdb,	// (0x000117b4) setting_slider_pane_t2_copy1_ParamLimits

0x6bdb,	// (0x000117b4) setting_slider_pane_t2_copy1

0x6bf5,	// (0x000117ce) setting_slider_pane_t3_copy1_ParamLimits

0x6bf5,	// (0x000117ce) setting_slider_pane_t3_copy1

0x6c0d,	// (0x000117e6) slider_set_pane_copy1_ParamLimits

0x6c0d,	// (0x000117e6) slider_set_pane_copy1

0x7cfb,	// (0x000128d4) set_opt_bg_pane_g1_copy2

0x7d03,	// (0x000128dc) set_opt_bg_pane_g2_copy2

0xf092,	// (0x00019c6b) set_opt_bg_pane_g3_copy2

0x7d13,	// (0x000128ec) set_opt_bg_pane_g4_copy2

0x7d1b,	// (0x000128f4) set_opt_bg_pane_g5_copy2

0x7d23,	// (0x000128fc) set_opt_bg_pane_g6_copy2

0xf09c,	// (0x00019c75) set_opt_bg_pane_g7_copy2

0xf0a4,	// (0x00019c7d) set_opt_bg_pane_g8_copy2

0xf0ae,	// (0x00019c87) set_opt_bg_pane_g9_copy2

0xf0b8,	// (0x00019c91) aid_size_touch_slider_mark_copy1_ParamLimits

0xf0b8,	// (0x00019c91) aid_size_touch_slider_mark_copy1

0xf0cc,	// (0x00019ca5) slider_set_pane_g1_copy1

0xf0d5,	// (0x00019cae) slider_set_pane_g2_copy1

0xa8b4,	// (0x0001548d) slider_set_pane_g3_copy1_ParamLimits

0xa8b4,	// (0x0001548d) slider_set_pane_g3_copy1

0xa8c8,	// (0x000154a1) slider_set_pane_g4_copy1_ParamLimits

0xa8c8,	// (0x000154a1) slider_set_pane_g4_copy1

0xa8e0,	// (0x000154b9) slider_set_pane_g5_copy1_ParamLimits

0xa8e0,	// (0x000154b9) slider_set_pane_g5_copy1

0xa8b4,	// (0x0001548d) slider_set_pane_g6_copy1_ParamLimits

0xa8b4,	// (0x0001548d) slider_set_pane_g6_copy1

0xf0dd,	// (0x00019cb6) slider_set_pane_g7_copy1_ParamLimits

0xf0dd,	// (0x00019cb6) slider_set_pane_g7_copy1

0x6cf1,	// (0x000118ca) bg_set_opt_pane_cp2_copy1

0xf0f3,	// (0x00019ccc) setting_slider_graphic_pane_g1_copy1

0xf0fc,	// (0x00019cd5) setting_slider_graphic_pane_t1_copy1

0xf10c,	// (0x00019ce5) setting_slider_graphic_pane_t2_copy1

0xf11c,	// (0x00019cf5) slider_set_pane_cp_copy1

0xf12c,	// (0x00019d05) input_focus_pane_cp1_copy1

0xf135,	// (0x00019d0e) list_set_text_pane_copy1

0xf13d,	// (0x00019d16) setting_text_pane_g1_copy1

0x6e2a,	// (0x00011a03) set_text_pane_t1_copy1

0xf12c,	// (0x00019d05) input_focus_pane_cp2_copy1

0xf13d,	// (0x00019d16) setting_code_pane_g1_copy1

0xf146,	// (0x00019d1f) setting_code_pane_t1_copy1

0xf154,	// (0x00019d2d) list_set_graphic_pane_copy1

0x6cf1,	// (0x000118ca) bg_set_opt_pane_cp4_copy1

0x8768,	// (0x00013341) list_set_graphic_pane_g1_copy1_ParamLimits

0x8768,	// (0x00013341) list_set_graphic_pane_g1_copy1

0xf166,	// (0x00019d3f) list_set_graphic_pane_g2_copy1

0x8780,	// (0x00013359) list_set_graphic_pane_t1_copy1_ParamLimits

0x8780,	// (0x00013359) list_set_graphic_pane_t1_copy1

0xbdf1,	// (0x000169ca) rs_clock_indi_pane_g1

0xf16e,	// (0x00019d47) rs_clock_indi_pane_t1

0xf17c,	// (0x00019d55) rs_indi_pane

0xf184,	// (0x00019d5d) rs_indi_pane_g1

0xf18d,	// (0x00019d66) rs_indi_pane_g2

0xf196,	// (0x00019d6f) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0001aaae) rs_indi_pane_g

0x8a62,	// (0x0001363b) bg_popup_preview_window_pane_cp03

0xf19f,	// (0x00019d78) popup_fep_tooltip_window_t1

0xcc69,	// (0x00017842) popup_note2_window_g2_ParamLimits

0xcc69,	// (0x00017842) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0001a847) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0001a847) popup_note2_window_g

0xd247,	// (0x00017e20) bg_popup_sub_pane_cp11_ParamLimits

0xd254,	// (0x00017e2d) cell_ai3_links_pane_g1_ParamLimits

0xd26b,	// (0x00017e44) cell_ai3_links_pane_t1

0x6e2a,	// (0x00011a03) set_text_pane_t1_copy1_ParamLimits

0x8973,	// (0x0001354c) cell_graphic_popup_pane_cp2_ParamLimits

0x8973,	// (0x0001354c) cell_graphic_popup_pane_cp2

0xf1ad,	// (0x00019d86) cell_graphic_popup_pane_g1_cp2

0x73a2,	// (0x00011f7b) cell_graphic_popup_pane_g2_cp2

0xf1b5,	// (0x00019d8e) cell_graphic_popup_pane_g3_cp2

0xf1bd,	// (0x00019d96) cell_graphic_popup_pane_t2_cp2

0x73b3,	// (0x00011f8c) grid_highlight_pane_cp3_cp2

0x80ec,	// (0x00012cc5) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7bd2,	// (0x000127ab) main_tmo_pane_ParamLimits

0xd602,	// (0x000181db) popup_tmo_big_image_note_window

0xe78a,	// (0x00019363) cell_ai5_widget_list_pane

0xe792,	// (0x0001936b) cell_ai5_widget_lrg_icon_pane

0xedae,	// (0x00019987) tmo_note_info_pane_t1_ParamLimits

0xedc3,	// (0x0001999c) tmo_note_info_pane_t2_ParamLimits

0xedd8,	// (0x000199b1) tmo_note_info_pane_t3_ParamLimits

0xeded,	// (0x000199c6) tmo_note_info_pane_t4_ParamLimits

0xedff,	// (0x000199d8) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0001aa9c) tmo_note_info_pane_t_ParamLimits

0xef21,	// (0x00019afa) settings_container_pane_ParamLimits

0xf124,	// (0x00019cfd) indicator_popup_pane_cp5

0xf124,	// (0x00019cfd) indicator_popup_pane_cp6

0xf154,	// (0x00019d2d) list_set_graphic_pane_copy1_ParamLimits

0x6cdd,	// (0x000118b6) bg_popup_window_pane_cp23

0xf1cb,	// (0x00019da4) popup_tmo_big_image_note_window_g1

0xf1d5,	// (0x00019dae) popup_tmo_big_image_note_window_t1

0xf1e5,	// (0x00019dbe) popup_tmo_big_image_note_window_t2

0xf1f5,	// (0x00019dce) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0001aab5) popup_tmo_big_image_note_window_t

0xbdf1,	// (0x000169ca) cell_ai5_widget_lrg_icon_pane_g1

0xf205,	// (0x00019dde) cell_ai5_widget_lrg_icon_pane_t1

0xf213,	// (0x00019dec) cell_ai5_widget_list_row_pane_ParamLimits

0xf213,	// (0x00019dec) cell_ai5_widget_list_row_pane

0xf22c,	// (0x00019e05) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf22c,	// (0x00019e05) cell_ai5_widget_list_row_pane_g1

0xf239,	// (0x00019e12) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf239,	// (0x00019e12) cell_ai5_widget_list_row_pane_t1

0xf26a,	// (0x00019e43) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf26a,	// (0x00019e43) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0001aabc) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0001aabc) cell_ai5_widget_list_row_pane_t

0x4aee,	// (0x0000f6c7) main_fep_vtchi_ss_pane

0x6c32,	// (0x0001180b) popup_fep_char_pre_window

0x6c3a,	// (0x00011813) popup_fep_ituss_window

0x6c5b,	// (0x00011834) popup_fep_vkbss_window

0xf292,	// (0x00019e6b) grid_vkbss_keypad_pane_ParamLimits

0xf292,	// (0x00019e6b) grid_vkbss_keypad_pane

0xf2a2,	// (0x00019e7b) ituss_keypad_pane

0x6c86,	// (0x0001185f) aid_vkbss_key_offset_ParamLimits

0x6c86,	// (0x0001185f) aid_vkbss_key_offset

0x6c92,	// (0x0001186b) cell_vkbss_key_pane_ParamLimits

0x6c92,	// (0x0001186b) cell_vkbss_key_pane

0xf2b2,	// (0x00019e8b) bg_cell_vkbss_key_g1_ParamLimits

0xf2b2,	// (0x00019e8b) bg_cell_vkbss_key_g1

0xf2be,	// (0x00019e97) cell_vkbss_key_3p_pane_ParamLimits

0xf2be,	// (0x00019e97) cell_vkbss_key_3p_pane

0xf2d8,	// (0x00019eb1) cell_vkbss_key_g1_ParamLimits

0xf2d8,	// (0x00019eb1) cell_vkbss_key_g1

0xf2f2,	// (0x00019ecb) cell_vkbss_key_t1_ParamLimits

0xf2f2,	// (0x00019ecb) cell_vkbss_key_t1

0x6ca8,	// (0x00011881) cell_ituss_key_pane_ParamLimits

0x6ca8,	// (0x00011881) cell_ituss_key_pane

0xf31d,	// (0x00019ef6) bg_cell_ituss_key_g1_ParamLimits

0xf31d,	// (0x00019ef6) bg_cell_ituss_key_g1

0xf329,	// (0x00019f02) cell_ituss_key_pane_g1_ParamLimits

0xf329,	// (0x00019f02) cell_ituss_key_pane_g1

0xf343,	// (0x00019f1c) cell_ituss_key_pane_g2_ParamLimits

0xf343,	// (0x00019f1c) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0001aac3) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0001aac3) cell_ituss_key_pane_g

0xf371,	// (0x00019f4a) cell_ituss_key_t1_ParamLimits

0xf371,	// (0x00019f4a) cell_ituss_key_t1

0xf3ab,	// (0x00019f84) cell_ituss_key_t2_ParamLimits

0xf3ab,	// (0x00019f84) cell_ituss_key_t2

0xf3dc,	// (0x00019fb5) cell_ituss_key_t3_ParamLimits

0xf3dc,	// (0x00019fb5) cell_ituss_key_t3

0xf416,	// (0x00019fef) cell_ituss_key_t4_ParamLimits

0xf416,	// (0x00019fef) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0001aac8) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0001aac8) cell_ituss_key_t

0xf450,	// (0x0001a029) cell_vkbss_key_3p_pane_g1

0xf458,	// (0x0001a031) cell_vkbss_key_3p_pane_g2

0xf460,	// (0x0001a039) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0001aad1) cell_vkbss_key_3p_pane_g

0x6cdd,	// (0x000118b6) bg_popup_fep_char_preview_window_cp02

0xf468,	// (0x0001a041) popup_fep_char_pre_window_t1

0xe71c,	// (0x000192f5) main_ai5_sk_pane

0xee79,	// (0x00019a52) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xee85,	// (0x00019a5e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc676,	// (0x0001724f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee98,	// (0x00019a71) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0001aaa7) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeeaa,	// (0x00019a83) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7bd2,	// (0x000127ab) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf477,	// (0x0001a050) main_ai5_sk_pane_g1

0x9894,	// (0x0001446d) popup_query_code_window_g1

0x6c50,	// (0x00011829) popup_fep_vkb_icf_pane

0x6c64,	// (0x0001183d) popup_fep_vtchi_icf_pane

0x7bd2,	// (0x000127ab) bg_icf_pane

0xf480,	// (0x0001a059) list_vkb_icf_pane

0x7bd2,	// (0x000127ab) bg_icf_pane_cp01

0xf48c,	// (0x0001a065) vtchi_icf_list_pane

0xf49d,	// (0x0001a076) list_vkb_icf_pane_t1_ParamLimits

0xf49d,	// (0x0001a076) list_vkb_icf_pane_t1

0xf4b3,	// (0x0001a08c) vtchi_icf_list_pane_t1_ParamLimits

0xf4b3,	// (0x0001a08c) vtchi_icf_list_pane_t1

0x6c3a,	// (0x00011813) popup_fep_ituss_window_ParamLimits

0x6c64,	// (0x0001183d) popup_fep_vtchi_icf_pane_ParamLimits

0xf2a2,	// (0x00019e7b) ituss_keypad_pane_ParamLimits

0x6c7a,	// (0x00011853) ituss_sks_pane

0x7bd2,	// (0x000127ab) bg_icf_pane_ParamLimits

0x6c23,	// (0x000117fc) icf_edit_indi_pane_ParamLimits

0x6c23,	// (0x000117fc) icf_edit_indi_pane

0xf480,	// (0x0001a059) list_vkb_icf_pane_ParamLimits

0x7bd2,	// (0x000127ab) bg_icf_pane_cp01_ParamLimits

0x6c23,	// (0x000117fc) icf_edit_indi_pane_cp01_ParamLimits

0x6c23,	// (0x000117fc) icf_edit_indi_pane_cp01

0xf494,	// (0x0001a06d) vtchi_query_pane

0xc06f,	// (0x00016c48) icf_edit_indi_pane_g1_ParamLimits

0xc06f,	// (0x00016c48) icf_edit_indi_pane_g1

0xf537,	// (0x0001a110) icf_edit_indi_pane_g2_ParamLimits

0xf537,	// (0x0001a110) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0001aae9) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0001aae9) icf_edit_indi_pane_g

0xf546,	// (0x0001a11f) icf_edit_indi_pane_t1

0xf4cd,	// (0x0001a0a6) bg_input_focus_pane_cp042

0x7586,	// (0x0001215f) vtchi_button_pane

0xf4d6,	// (0x0001a0af) vtchi_query_pane_t1

0xf4e4,	// (0x0001a0bd) vtchi_query_pane_t2

0xf4f2,	// (0x0001a0cb) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0001aad8) vtchi_query_pane_t

0x6cdd,	// (0x000118b6) bg_button_pane_cp13

0xf500,	// (0x0001a0d9) vtchi_button_pane_g1

0xf508,	// (0x0001a0e1) ituss_sks_pane_g1

0xf513,	// (0x0001a0ec) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0001aadf) ituss_sks_pane_g

0xf51b,	// (0x0001a0f4) ituss_sks_pane_t1

0xf529,	// (0x0001a102) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0001aae4) ituss_sks_pane_t

0xb819,	// (0x000163f2) indicator_nsta_pane_cp_g1

0xb822,	// (0x000163fb) indicator_nsta_pane_cp_g2

0xb82a,	// (0x00016403) indicator_nsta_pane_cp_g3

0xb832,	// (0x0001640b) indicator_nsta_pane_cp_g4

0xb832,	// (0x0001640b) indicator_nsta_pane_cp_g5

0xb832,	// (0x0001640b) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0001a685) indicator_nsta_pane_cp_g

0xe2e1,	// (0x00018eba) cell_graphic2_pane_t2_ParamLimits

0xe2e1,	// (0x00018eba) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0001a99e) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0001a99e) cell_graphic2_pane_t

0xe30e,	// (0x00018ee7) cell_graphic2_control_pane_t1

0x848c,	// (0x00013065) signal_pane_g3_ParamLimits

0x848c,	// (0x00013065) signal_pane_g3

0x849e,	// (0x00013077) signal_pane_g4_ParamLimits

0x849e,	// (0x00013077) signal_pane_g4

0xf27c,	// (0x00019e55) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf27c,	// (0x00019e55) cell_ai5_widget_list_row_pane_t3

0xf35f,	// (0x00019f38) cell_ituss_key_pane_t1_ParamLimits

0xf35f,	// (0x00019f38) cell_ituss_key_pane_t1

0x94a9,	// (0x00014082) form_field_data_wide_pane_vc_t2_ParamLimits

0x94a9,	// (0x00014082) form_field_data_wide_pane_vc_t2

0x94bd,	// (0x00014096) form_field_data_wide_pane_vc_t3_ParamLimits

0x94bd,	// (0x00014096) form_field_data_wide_pane_vc_t3

0x0002,

0xf80a,	// (0x0001a3e3) form_field_data_wide_pane_vc_t_ParamLimits

0xf80a,	// (0x0001a3e3) form_field_data_wide_pane_vc_t

0xb4d1,	// (0x000160aa) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb4d1,	// (0x000160aa) form_field_slider_wide_pane_vc_t3

0xb5af,	// (0x00016188) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb5af,	// (0x00016188) form_field_popup_wide_pane_vc_t2

0xb5c6,	// (0x0001619f) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb5c6,	// (0x0001619f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0001a674) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0001a674) form_field_popup_wide_pane_vc_t

0x6b34,	// (0x0001170d) aid_fshwr2_btn_pane_ParamLimits

0x6b40,	// (0x00011719) aid_fshwr2_syb_pane_ParamLimits

0x6b51,	// (0x0001172a) aid_fshwr2_txt_pane_ParamLimits

0x6384,	// (0x00010f5d) fshwr2_bg_pane_ParamLimits

0x6b5d,	// (0x00011736) fshwr2_func_candi_pane_ParamLimits

0x6b75,	// (0x0001174e) fshwr2_hwr_syb_pane_ParamLimits

0x6b8c,	// (0x00011765) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Normal

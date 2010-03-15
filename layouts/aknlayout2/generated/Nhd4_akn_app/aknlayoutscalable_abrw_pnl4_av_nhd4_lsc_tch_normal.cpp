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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000e512 };

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
0xd052,	// (0x0001b564) Screen

0xd05e,	// (0x0001b570) application_window_ParamLimits

0xd05e,	// (0x0001b570) application_window

0x307c,	// (0x0001158e) screen_g1

0xb2c7,	// (0x000197d9) area_bottom_pane_ParamLimits

0xb2c7,	// (0x000197d9) area_bottom_pane

0x0e10,	// (0x0000f322) area_top_pane_ParamLimits

0x0e10,	// (0x0000f322) area_top_pane

0x0eae,	// (0x0000f3c0) main_pane_ParamLimits

0x0eae,	// (0x0000f3c0) main_pane

0x3086,	// (0x00011598) misc_graphics

0xdcde,	// (0x0001c1f0) battery_pane_ParamLimits

0xdcde,	// (0x0001c1f0) battery_pane

0x5f20,	// (0x00014432) bg_status_flat_pane_g8

0x5f28,	// (0x0001443a) bg_status_flat_pane_g9

0x520a,	// (0x0001371c) context_pane_ParamLimits

0x520a,	// (0x0001371c) context_pane

0xde49,	// (0x0001c35b) navi_pane_ParamLimits

0xde49,	// (0x0001c35b) navi_pane

0xdec1,	// (0x0001c3d3) signal_pane_ParamLimits

0xdec1,	// (0x0001c3d3) signal_pane

0x0008,

0xf870,	// (0x0001dd82) bg_status_flat_pane_g

0xdf51,	// (0x0001c463) status_pane_g1_ParamLimits

0xdf51,	// (0x0001c463) status_pane_g1

0xdf67,	// (0x0001c479) status_pane_g2_ParamLimits

0xdf67,	// (0x0001c479) status_pane_g2

0x542b,	// (0x0001393d) status_pane_g3_ParamLimits

0x542b,	// (0x0001393d) status_pane_g3

0x0004,

0xf79c,	// (0x0001dcae) status_pane_g_ParamLimits

0xf79c,	// (0x0001dcae) status_pane_g

0xdf73,	// (0x0001c485) title_pane_ParamLimits

0xdf73,	// (0x0001c485) title_pane

0xdfd6,	// (0x0001c4e8) uni_indicator_pane_ParamLimits

0xdfd6,	// (0x0001c4e8) uni_indicator_pane

0x505c,	// (0x0001356e) bg_list_pane_ParamLimits

0x505c,	// (0x0001356e) bg_list_pane

0x507c,	// (0x0001358e) find_pane

0xdc4d,	// (0x0001c15f) listscroll_app_pane_ParamLimits

0xdc4d,	// (0x0001c15f) listscroll_app_pane

0x5090,	// (0x000135a2) listscroll_form_pane

0x1760,	// (0x0000fc72) listscroll_gen_pane_ParamLimits

0x1760,	// (0x0000fc72) listscroll_gen_pane

0x5090,	// (0x000135a2) listscroll_set_pane

0x6ac2,	// (0x00014fd4) main_idle_act_pane

0x4d66,	// (0x00013278) main_idle_trad_pane

0x4d66,	// (0x00013278) main_list_empty_pane

0x50aa,	// (0x000135bc) main_midp_pane

0x50b6,	// (0x000135c8) main_pane_g1_ParamLimits

0x50b6,	// (0x000135c8) main_pane_g1

0xb5b1,	// (0x00019ac3) popup_ai_message_window_ParamLimits

0xb5b1,	// (0x00019ac3) popup_ai_message_window

0xb642,	// (0x00019b54) popup_fep_china_uni_window_ParamLimits

0xb642,	// (0x00019b54) popup_fep_china_uni_window

0x1880,	// (0x0000fd92) popup_fep_japan_candidate_window_ParamLimits

0x1880,	// (0x0000fd92) popup_fep_japan_candidate_window

0x189e,	// (0x0000fdb0) popup_fep_japan_predictive_window_ParamLimits

0x189e,	// (0x0000fdb0) popup_fep_japan_predictive_window

0xb69c,	// (0x00019bae) popup_find_window

0xb6b9,	// (0x00019bcb) popup_grid_graphic_window_ParamLimits

0xb6b9,	// (0x00019bcb) popup_grid_graphic_window

0x1903,	// (0x0000fe15) popup_large_graphic_colour_window

0xb751,	// (0x00019c63) popup_menu_window_ParamLimits

0xb751,	// (0x00019c63) popup_menu_window

0xb91d,	// (0x00019e2f) popup_note_image_window

0xb8e3,	// (0x00019df5) popup_note_wait_window_ParamLimits

0xb8e3,	// (0x00019df5) popup_note_wait_window

0xb935,	// (0x00019e47) popup_note_window_ParamLimits

0xb935,	// (0x00019e47) popup_note_window

0xb9db,	// (0x00019eed) popup_query_code_window_ParamLimits

0xb9db,	// (0x00019eed) popup_query_code_window

0x1b4d,	// (0x0001005f) popup_query_data_code_window_ParamLimits

0x1b4d,	// (0x0001005f) popup_query_data_code_window

0xba15,	// (0x00019f27) popup_query_data_window_ParamLimits

0xba15,	// (0x00019f27) popup_query_data_window

0xba91,	// (0x00019fa3) popup_query_sat_info_window_ParamLimits

0xba91,	// (0x00019fa3) popup_query_sat_info_window

0xbb28,	// (0x0001a03a) popup_snote_single_graphic_window_ParamLimits

0xbb28,	// (0x0001a03a) popup_snote_single_graphic_window

0xbb28,	// (0x0001a03a) popup_snote_single_text_window_ParamLimits

0xbb28,	// (0x0001a03a) popup_snote_single_text_window

0x1bd0,	// (0x000100e2) popup_sub_window_general

0x1cfe,	// (0x00010210) popup_window_general_ParamLimits

0x1cfe,	// (0x00010210) popup_window_general

0x50cc,	// (0x000135de) power_save_pane

0xb440,	// (0x00019952) control_pane_g1_ParamLimits

0xb440,	// (0x00019952) control_pane_g1

0xb469,	// (0x0001997b) control_pane_g2_ParamLimits

0xb469,	// (0x0001997b) control_pane_g2

0x501f,	// (0x00013531) control_pane_g3_ParamLimits

0x501f,	// (0x00013531) control_pane_g3

0x0007,

0xf784,	// (0x0001dc96) control_pane_g_ParamLimits

0xf784,	// (0x0001dc96) control_pane_g

0xb4aa,	// (0x000199bc) control_pane_t1_ParamLimits

0xb4aa,	// (0x000199bc) control_pane_t1

0xb508,	// (0x00019a1a) control_pane_t2_ParamLimits

0xb508,	// (0x00019a1a) control_pane_t2

0x0002,

0xf795,	// (0x0001dca7) control_pane_t_ParamLimits

0xf795,	// (0x0001dca7) control_pane_t

0x4f40,	// (0x00013452) navi_navi_volume_pane_cp1

0x4f49,	// (0x0001345b) status_small_icon_pane

0x4f51,	// (0x00013463) status_small_pane_g1_ParamLimits

0x4f51,	// (0x00013463) status_small_pane_g1

0x4f85,	// (0x00013497) status_small_pane_g2_ParamLimits

0x4f85,	// (0x00013497) status_small_pane_g2

0x4f91,	// (0x000134a3) status_small_pane_g3_ParamLimits

0x4f91,	// (0x000134a3) status_small_pane_g3

0x4f9d,	// (0x000134af) status_small_pane_g4_ParamLimits

0x4f9d,	// (0x000134af) status_small_pane_g4

0x4fa9,	// (0x000134bb) status_small_pane_g5_ParamLimits

0x4fa9,	// (0x000134bb) status_small_pane_g5

0x4fb8,	// (0x000134ca) status_small_pane_g6_ParamLimits

0x4fb8,	// (0x000134ca) status_small_pane_g6

0x0007,

0xf773,	// (0x0001dc85) status_small_pane_g_ParamLimits

0xf773,	// (0x0001dc85) status_small_pane_g

0x4fe8,	// (0x000134fa) status_small_pane_t1

0x500b,	// (0x0001351d) status_small_wait_pane_ParamLimits

0x500b,	// (0x0001351d) status_small_wait_pane

0xda08,	// (0x0001bf1a) aid_levels_signal_ParamLimits

0xda08,	// (0x0001bf1a) aid_levels_signal

0xda20,	// (0x0001bf32) signal_pane_g1_ParamLimits

0xda20,	// (0x0001bf32) signal_pane_g1

0xda3b,	// (0x0001bf4d) signal_pane_g2_ParamLimits

0xda3b,	// (0x0001bf4d) signal_pane_g2

0x0003,

0xf704,	// (0x0001dc16) signal_pane_g_ParamLimits

0xf704,	// (0x0001dc16) signal_pane_g

0x47c3,	// (0x00012cd5) context_pane_g1

0xd06e,	// (0x0001b580) title_pane_g1

0xd0a5,	// (0x0001b5b7) title_pane_t1

0x312e,	// (0x00011640) title_pane_t2

0x3154,	// (0x00011666) title_pane_t3

0x0002,

0xf55d,	// (0x0001da6f) title_pane_t

0xdffe,	// (0x0001c510) aid_levels_battery_ParamLimits

0xdffe,	// (0x0001c510) aid_levels_battery

0xe01a,	// (0x0001c52c) battery_pane_g1_ParamLimits

0xe01a,	// (0x0001c52c) battery_pane_g1

0xe037,	// (0x0001c549) battery_pane_g2_ParamLimits

0xe037,	// (0x0001c549) battery_pane_g2

0x0001,

0xf7a7,	// (0x0001dcb9) battery_pane_g_ParamLimits

0xf7a7,	// (0x0001dcb9) battery_pane_g

0xe2e9,	// (0x0001c7fb) uni_indicator_pane_g1

0xe2fe,	// (0x0001c810) uni_indicator_pane_g2

0x687f,	// (0x00014d91) uni_indicator_pane_g3

0x0005,

0xf918,	// (0x0001de2a) uni_indicator_pane_g

0x4be4,	// (0x000130f6) navi_icon_pane_ParamLimits

0x4be4,	// (0x000130f6) navi_icon_pane

0x4b2d,	// (0x0001303f) navi_midp_pane

0x4c00,	// (0x00013112) navi_navi_pane

0x4c0a,	// (0x0001311c) navi_text_pane_ParamLimits

0x4c0a,	// (0x0001311c) navi_text_pane

0x307c,	// (0x0001158e) status_small_wait_pane_g1

0x3591,	// (0x00011aa3) status_small_wait_pane_g2

0x0001,

0xf913,	// (0x0001de25) status_small_wait_pane_g

0x657b,	// (0x00014a8d) navi_navi_icon_text_pane

0x6583,	// (0x00014a95) navi_navi_pane_g1_ParamLimits

0x6583,	// (0x00014a95) navi_navi_pane_g1

0x6595,	// (0x00014aa7) navi_navi_pane_g2_ParamLimits

0x6595,	// (0x00014aa7) navi_navi_pane_g2

0x0001,

0xf8e1,	// (0x0001ddf3) navi_navi_pane_g_ParamLimits

0xf8e1,	// (0x0001ddf3) navi_navi_pane_g

0x65a7,	// (0x00014ab9) navi_navi_tabs_pane

0x65b0,	// (0x00014ac2) navi_navi_text_pane

0x657b,	// (0x00014a8d) navi_navi_volume_pane

0xe272,	// (0x0001c784) navi_text_pane_t1

0x654b,	// (0x00014a5d) navi_icon_pane_g1

0x649e,	// (0x000149b0) navi_navi_text_pane_t1

0xbdf3,	// (0x0001a305) navi_navi_volume_pane_g1

0xbdfb,	// (0x0001a30d) volume_small_pane

0xe1ba,	// (0x0001c6cc) navi_navi_icon_text_pane_g1

0xe1c2,	// (0x0001c6d4) navi_navi_icon_text_pane_t1

0x4c00,	// (0x00013112) navi_tabs_2_long_pane

0x4c00,	// (0x00013112) navi_tabs_2_pane

0x4c00,	// (0x00013112) navi_tabs_3_long_pane

0x4c00,	// (0x00013112) navi_tabs_3_pane

0x4c00,	// (0x00013112) navi_tabs_4_pane

0xbdd3,	// (0x0001a2e5) tabs_2_active_pane_ParamLimits

0xbdd3,	// (0x0001a2e5) tabs_2_active_pane

0xbde3,	// (0x0001a2f5) tabs_2_passive_pane_ParamLimits

0xbde3,	// (0x0001a2f5) tabs_2_passive_pane

0xbda1,	// (0x0001a2b3) tabs_3_active_pane_ParamLimits

0xbda1,	// (0x0001a2b3) tabs_3_active_pane

0xbdb1,	// (0x0001a2c3) tabs_3_passive_pane_ParamLimits

0xbdb1,	// (0x0001a2c3) tabs_3_passive_pane

0xbdc2,	// (0x0001a2d4) tabs_3_passive_pane_cp_ParamLimits

0xbdc2,	// (0x0001a2d4) tabs_3_passive_pane_cp

0xbd5d,	// (0x0001a26f) tabs_4_active_pane_ParamLimits

0xbd5d,	// (0x0001a26f) tabs_4_active_pane

0xbd6e,	// (0x0001a280) tabs_4_passive_pane_ParamLimits

0xbd6e,	// (0x0001a280) tabs_4_passive_pane

0xbd7f,	// (0x0001a291) tabs_4_passive_pane_cp_ParamLimits

0xbd7f,	// (0x0001a291) tabs_4_passive_pane_cp

0xbd90,	// (0x0001a2a2) tabs_4_passive_pane_cp2_ParamLimits

0xbd90,	// (0x0001a2a2) tabs_4_passive_pane_cp2

0xbd3d,	// (0x0001a24f) tabs_2_long_active_pane_ParamLimits

0xbd3d,	// (0x0001a24f) tabs_2_long_active_pane

0xbd4d,	// (0x0001a25f) tabs_2_long_passive_pane_ParamLimits

0xbd4d,	// (0x0001a25f) tabs_2_long_passive_pane

0xbd08,	// (0x0001a21a) tabs_3_long_active_pane_ParamLimits

0xbd08,	// (0x0001a21a) tabs_3_long_active_pane

0xbd19,	// (0x0001a22b) tabs_3_long_passive_pane_ParamLimits

0xbd19,	// (0x0001a22b) tabs_3_long_passive_pane

0xbd2c,	// (0x0001a23e) tabs_3_long_passive_pane_cp_ParamLimits

0xbd2c,	// (0x0001a23e) tabs_3_long_passive_pane_cp

0x1ec1,	// (0x000103d3) volume_small_pane_g1

0xbcb7,	// (0x0001a1c9) volume_small_pane_g2

0xbcc0,	// (0x0001a1d2) volume_small_pane_g3

0xbcc9,	// (0x0001a1db) volume_small_pane_g4

0xbcd2,	// (0x0001a1e4) volume_small_pane_g5

0xbcdb,	// (0x0001a1ed) volume_small_pane_g6

0xbce4,	// (0x0001a1f6) volume_small_pane_g7

0xbced,	// (0x0001a1ff) volume_small_pane_g8

0xbcf6,	// (0x0001a208) volume_small_pane_g9

0xbcff,	// (0x0001a211) volume_small_pane_g10

0x0009,

0xf8ad,	// (0x0001ddbf) volume_small_pane_g

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp2_ParamLimits

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp2

0xd131,	// (0x0001b643) tabs_3_active_pane_g1

0xd139,	// (0x0001b64b) tabs_3_active_pane_t1

0x33fb,	// (0x0001190d) bg_passive_tab_pane_cp2_ParamLimits

0x33fb,	// (0x0001190d) bg_passive_tab_pane_cp2

0xd131,	// (0x0001b643) tabs_3_passive_pane_g1

0xd139,	// (0x0001b64b) tabs_3_passive_pane_t1

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp3_ParamLimits

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp3

0xd14b,	// (0x0001b65d) tabs_4_active_pane_g1

0xd153,	// (0x0001b665) tabs_4_active_pane_t1

0x33fb,	// (0x0001190d) bg_passive_tab_pane_cp3_ParamLimits

0x33fb,	// (0x0001190d) bg_passive_tab_pane_cp3

0xd14b,	// (0x0001b65d) tabs_4_1_passive_pane_g1

0xd153,	// (0x0001b665) tabs_4_1_passive_pane_t1

0x50aa,	// (0x000135bc) list_highlight_pane_cp2

0xe388,	// (0x0001c89a) list_set_pane_ParamLimits

0xe388,	// (0x0001c89a) list_set_pane

0xe422,	// (0x0001c934) main_pane_set_t1_ParamLimits

0xe422,	// (0x0001c934) main_pane_set_t1

0xe442,	// (0x0001c954) main_pane_set_t2_ParamLimits

0xe442,	// (0x0001c954) main_pane_set_t2

0xe456,	// (0x0001c968) main_pane_set_t3_ParamLimits

0xe456,	// (0x0001c968) main_pane_set_t3

0xe468,	// (0x0001c97a) main_pane_set_t4_ParamLimits

0xe468,	// (0x0001c97a) main_pane_set_t4

0x0003,

0xf97d,	// (0x0001de8f) main_pane_set_t_ParamLimits

0xf97d,	// (0x0001de8f) main_pane_set_t

0xe47a,	// (0x0001c98c) setting_code_pane

0xe482,	// (0x0001c994) setting_slider_graphic_pane

0xe482,	// (0x0001c994) setting_slider_pane

0xe482,	// (0x0001c994) setting_text_pane

0xe482,	// (0x0001c994) setting_volume_pane

0x10e5,	// (0x0000f5f7) volume_set_pane

0x3166,	// (0x00011678) bg_set_opt_pane_cp

0x10ed,	// (0x0000f5ff) setting_slider_pane_t1

0x1106,	// (0x0000f618) setting_slider_pane_t2

0x1120,	// (0x0000f632) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001da76) setting_slider_pane_t

0x1138,	// (0x0000f64a) slider_set_pane

0x3086,	// (0x00011598) bg_set_opt_pane_cp2

0x31a8,	// (0x000116ba) setting_slider_graphic_pane_g1

0x114e,	// (0x0000f660) setting_slider_graphic_pane_t1

0x115e,	// (0x0000f670) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001da7d) setting_slider_graphic_pane_t

0x116e,	// (0x0000f680) slider_set_pane_cp

0x3086,	// (0x00011598) input_focus_pane_cp1

0x6aa9,	// (0x00014fbb) list_set_text_pane

0x307c,	// (0x0001158e) setting_text_pane_g1

0x3086,	// (0x00011598) input_focus_pane_cp2

0x307c,	// (0x0001158e) setting_code_pane_g1

0x31b1,	// (0x000116c3) setting_code_pane_t1

0x31bf,	// (0x000116d1) set_text_pane_t1_ParamLimits

0x31bf,	// (0x000116d1) set_text_pane_t1

0x405b,	// (0x0001256d) set_opt_bg_pane_g1

0x4063,	// (0x00012575) set_opt_bg_pane_g2

0x6a89,	// (0x00014f9b) set_opt_bg_pane_g3

0x4073,	// (0x00012585) set_opt_bg_pane_g4

0x407b,	// (0x0001258d) set_opt_bg_pane_g5

0x4083,	// (0x00012595) set_opt_bg_pane_g6

0x6a91,	// (0x00014fa3) set_opt_bg_pane_g7

0x6a99,	// (0x00014fab) set_opt_bg_pane_g8

0x6aa1,	// (0x00014fb3) set_opt_bg_pane_g9

0x0008,

0xf96a,	// (0x0001de7c) set_opt_bg_pane_g

0x6a7c,	// (0x00014f8e) slider_set_pane_g1

0x2083,	// (0x00010595) slider_set_pane_g2

0x0006,

0xf95b,	// (0x0001de6d) slider_set_pane_g

0x201f,	// (0x00010531) volume_set_pane_g1

0x2027,	// (0x00010539) volume_set_pane_g2

0x202f,	// (0x00010541) volume_set_pane_g3

0x2037,	// (0x00010549) volume_set_pane_g4

0x203f,	// (0x00010551) volume_set_pane_g5

0x2047,	// (0x00010559) volume_set_pane_g6

0x204f,	// (0x00010561) volume_set_pane_g7

0x2057,	// (0x00010569) volume_set_pane_g8

0x205f,	// (0x00010571) volume_set_pane_g9

0x2067,	// (0x00010579) volume_set_pane_g10

0x0009,

0xf933,	// (0x0001de45) volume_set_pane_g

0xd165,	// (0x0001b677) indicator_pane_ParamLimits

0xd165,	// (0x0001b677) indicator_pane

0xd18d,	// (0x0001b69f) main_idle_pane_g2_ParamLimits

0xd18d,	// (0x0001b69f) main_idle_pane_g2

0xd1c5,	// (0x0001b6d7) main_pane_idle_g1_ParamLimits

0xd1c5,	// (0x0001b6d7) main_pane_idle_g1

0x321a,	// (0x0001172c) popup_clock_digital_analogue_window_ParamLimits

0x321a,	// (0x0001172c) popup_clock_digital_analogue_window

0xd1ec,	// (0x0001b6fe) soft_indicator_pane_ParamLimits

0xd1ec,	// (0x0001b6fe) soft_indicator_pane

0xd206,	// (0x0001b718) wallpaper_pane_ParamLimits

0xd206,	// (0x0001b718) wallpaper_pane

0x307c,	// (0x0001158e) wallpaper_pane_g1

0xd218,	// (0x0001b72a) indicator_pane_g1_ParamLimits

0xd218,	// (0x0001b72a) indicator_pane_g1

0x6f64,	// (0x00015476) navi_navi_icon_text_pane_srt_g1

0x326c,	// (0x0001177e) soft_indicator_pane_t1

0x3286,	// (0x00011798) aid_ps_area_pane

0xd22e,	// (0x0001b740) aid_ps_clock_pane

0x32a5,	// (0x000117b7) aid_ps_indicator_pane

0x32b1,	// (0x000117c3) indicator_ps_pane_ParamLimits

0x32b1,	// (0x000117c3) indicator_ps_pane

0x32c0,	// (0x000117d2) power_save_pane_g1_ParamLimits

0x32c0,	// (0x000117d2) power_save_pane_g1

0x32cc,	// (0x000117de) power_save_pane_g2_ParamLimits

0x32cc,	// (0x000117de) power_save_pane_g2

0x0d04,	// (0x0000f216) aid_navinavi_width_pane

0x3286,	// (0x00011798) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001da82) power_save_pane_g_ParamLimits

0xf570,	// (0x0001da82) power_save_pane_g

0x32da,	// (0x000117ec) power_save_pane_t1_ParamLimits

0x32da,	// (0x000117ec) power_save_pane_t1

0xd22e,	// (0x0001b740) aid_ps_clock_pane_ParamLimits

0x32a5,	// (0x000117b7) aid_ps_indicator_pane_ParamLimits

0x32ec,	// (0x000117fe) power_save_pane_t4_ParamLimits

0x32ec,	// (0x000117fe) power_save_pane_t4

0x0001,

0xf575,	// (0x0001da87) power_save_pane_t_ParamLimits

0xf575,	// (0x0001da87) power_save_pane_t

0x3316,	// (0x00011828) power_save_t3_ParamLimits

0x3316,	// (0x00011828) power_save_t3

0x3301,	// (0x00011813) power_save_t2_ParamLimits

0x3301,	// (0x00011813) power_save_t2

0x332b,	// (0x0001183d) indicator_ps_pane_g1

0xd23c,	// (0x0001b74e) ai_gene_pane_ParamLimits

0xd23c,	// (0x0001b74e) ai_gene_pane

0xd253,	// (0x0001b765) ai_links_pane_ParamLimits

0xd253,	// (0x0001b765) ai_links_pane

0xd26b,	// (0x0001b77d) indicator_pane_cp1_ParamLimits

0xd26b,	// (0x0001b77d) indicator_pane_cp1

0xd27a,	// (0x0001b78c) main_pane_idle_g1_cp_ParamLimits

0xd27a,	// (0x0001b78c) main_pane_idle_g1_cp

0x3364,	// (0x00011876) popup_ai_links_title_window

0xd292,	// (0x0001b7a4) soft_indicator_pane_cp1_ParamLimits

0xd292,	// (0x0001b7a4) soft_indicator_pane_cp1

0x6842,	// (0x00014d54) ai_links_pane_g1

0x684b,	// (0x00014d5d) grid_ai_links_pane

0xe2e0,	// (0x0001c7f2) ai_gene_pane_1

0x6830,	// (0x00014d42) ai_gene_pane_2

0x6839,	// (0x00014d4b) list_highlight_pane_cp4

0xe2bc,	// (0x0001c7ce) cell_ai_link_pane_ParamLimits

0xe2bc,	// (0x0001c7ce) cell_ai_link_pane

0x6801,	// (0x00014d13) cell_ai_link_pane_g1

0x3591,	// (0x00011aa3) cell_ai_link_pane_g2

0x0001,

0xf90e,	// (0x0001de20) cell_ai_link_pane_g

0x3086,	// (0x00011598) grid_highlight_cp2

0x3086,	// (0x00011598) bg_popup_sub_pane_cp1

0x3387,	// (0x00011899) popup_ai_links_title_window_t1

0x6751,	// (0x00014c63) ai_gene_pane_1_g1_ParamLimits

0x6751,	// (0x00014c63) ai_gene_pane_1_g1

0x675d,	// (0x00014c6f) ai_gene_pane_1_g2_ParamLimits

0x675d,	// (0x00014c6f) ai_gene_pane_1_g2

0x0001,

0xf904,	// (0x0001de16) ai_gene_pane_1_g_ParamLimits

0xf904,	// (0x0001de16) ai_gene_pane_1_g

0x676a,	// (0x00014c7c) ai_gene_pane_1_t1_ParamLimits

0x676a,	// (0x00014c7c) ai_gene_pane_1_t1

0x679e,	// (0x00014cb0) grid_ai_soft_ind_pane

0x673c,	// (0x00014c4e) ai_gene_pane_2_t1_ParamLimits

0x673c,	// (0x00014c4e) ai_gene_pane_2_t1

0xd2a6,	// (0x0001b7b8) main_pane_empty_t1_ParamLimits

0xd2a6,	// (0x0001b7b8) main_pane_empty_t1

0xd2be,	// (0x0001b7d0) main_pane_empty_t2_ParamLimits

0xd2be,	// (0x0001b7d0) main_pane_empty_t2

0xd2d3,	// (0x0001b7e5) main_pane_empty_t3_ParamLimits

0xd2d3,	// (0x0001b7e5) main_pane_empty_t3

0xd2e5,	// (0x0001b7f7) main_pane_empty_t4_ParamLimits

0xd2e5,	// (0x0001b7f7) main_pane_empty_t4

0xd2f7,	// (0x0001b809) main_pane_empty_t5_ParamLimits

0xd2f7,	// (0x0001b809) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001da8c) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001da8c) main_pane_empty_t

0x413a,	// (0x0001264c) bg_popup_window_pane_ParamLimits

0x413a,	// (0x0001264c) bg_popup_window_pane

0x64ac,	// (0x000149be) find_popup_pane_cp2_ParamLimits

0x64ac,	// (0x000149be) find_popup_pane_cp2

0x64b8,	// (0x000149ca) heading_pane_ParamLimits

0x64b8,	// (0x000149ca) heading_pane

0x3086,	// (0x00011598) bg_popup_sub_pane

0xe1df,	// (0x0001c6f1) bg_popup_window_pane_g1_ParamLimits

0xe1df,	// (0x0001c6f1) bg_popup_window_pane_g1

0xe1ee,	// (0x0001c700) bg_popup_window_pane_g2_ParamLimits

0xe1ee,	// (0x0001c700) bg_popup_window_pane_g2

0xe1fa,	// (0x0001c70c) bg_popup_window_pane_g3_ParamLimits

0xe1fa,	// (0x0001c70c) bg_popup_window_pane_g3

0xe206,	// (0x0001c718) bg_popup_window_pane_g4_ParamLimits

0xe206,	// (0x0001c718) bg_popup_window_pane_g4

0xe215,	// (0x0001c727) bg_popup_window_pane_g5_ParamLimits

0xe215,	// (0x0001c727) bg_popup_window_pane_g5

0xe225,	// (0x0001c737) bg_popup_window_pane_g6_ParamLimits

0xe225,	// (0x0001c737) bg_popup_window_pane_g6

0xe231,	// (0x0001c743) bg_popup_window_pane_g7_ParamLimits

0xe231,	// (0x0001c743) bg_popup_window_pane_g7

0xe240,	// (0x0001c752) bg_popup_window_pane_g8_ParamLimits

0xe240,	// (0x0001c752) bg_popup_window_pane_g8

0xe24f,	// (0x0001c761) bg_popup_window_pane_g9_ParamLimits

0xe24f,	// (0x0001c761) bg_popup_window_pane_g9

0x6492,	// (0x000149a4) bg_popup_window_pane_g10_ParamLimits

0x6492,	// (0x000149a4) bg_popup_window_pane_g10

0x0009,

0xf8cc,	// (0x0001ddde) bg_popup_window_pane_g_ParamLimits

0xf8cc,	// (0x0001ddde) bg_popup_window_pane_g

0x63bb,	// (0x000148cd) bg_popup_heading_pane_ParamLimits

0x63bb,	// (0x000148cd) bg_popup_heading_pane

0x210b,	// (0x0001061d) tabs_4_passive_pane_cp_srt_ParamLimits

0x210b,	// (0x0001061d) tabs_4_passive_pane_cp_srt

0x211d,	// (0x0001062f) tabs_4_passive_pane_srt_ParamLimits

0x63cf,	// (0x000148e1) heading_pane_g2

0x211d,	// (0x0001062f) tabs_4_passive_pane_srt

0x56e8,	// (0x00013bfa) bg_passive_tab_pane_cp3_srt_ParamLimits

0x56e8,	// (0x00013bfa) bg_passive_tab_pane_cp3_srt

0x63d7,	// (0x000148e9) heading_pane_t1_ParamLimits

0x63d7,	// (0x000148e9) heading_pane_t1

0x63ee,	// (0x00014900) heading_pane_t2_ParamLimits

0x63ee,	// (0x00014900) heading_pane_t2

0x0001,

0xf8c7,	// (0x0001ddd9) heading_pane_t_ParamLimits

0xf8c7,	// (0x0001ddd9) heading_pane_t

0x5ee8,	// (0x000143fa) bg_popup_heading_pane_g1

0x5f97,	// (0x000144a9) bg_popup_heading_pane_g2

0x5fa1,	// (0x000144b3) bg_popup_heading_pane_g3

0x5fab,	// (0x000144bd) bg_popup_heading_pane_g4

0x5fb5,	// (0x000144c7) bg_popup_heading_pane_g5

0x5fbf,	// (0x000144d1) bg_popup_heading_pane_g6

0x5fc7,	// (0x000144d9) bg_popup_heading_pane_g7

0x5fcf,	// (0x000144e1) bg_popup_heading_pane_g8

0x5fd9,	// (0x000144eb) bg_popup_heading_pane_g9

0x0008,

0xf883,	// (0x0001dd95) bg_popup_heading_pane_g

0x55cc,	// (0x00013ade) bg_popup_sub_pane_g1

0x55dc,	// (0x00013aee) bg_popup_sub_pane_g2

0x55d4,	// (0x00013ae6) bg_popup_sub_pane_g3

0x55ec,	// (0x00013afe) bg_popup_sub_pane_g4

0x55e4,	// (0x00013af6) bg_popup_sub_pane_g5

0x55f4,	// (0x00013b06) bg_popup_sub_pane_g6

0x55fc,	// (0x00013b0e) bg_popup_sub_pane_g7

0x560c,	// (0x00013b1e) bg_popup_sub_pane_g8

0x5604,	// (0x00013b16) bg_popup_sub_pane_g9

0x0008,

0xf85d,	// (0x0001dd6f) bg_popup_sub_pane_g

0x33fb,	// (0x0001190d) bg_popup_window_pane_cp5_ParamLimits

0x33fb,	// (0x0001190d) bg_popup_window_pane_cp5

0x3417,	// (0x00011929) popup_note_window_g1_ParamLimits

0x3417,	// (0x00011929) popup_note_window_g1

0x3423,	// (0x00011935) popup_note_window_t1_ParamLimits

0x3423,	// (0x00011935) popup_note_window_t1

0x3435,	// (0x00011947) popup_note_window_t2_ParamLimits

0x3435,	// (0x00011947) popup_note_window_t2

0x3447,	// (0x00011959) popup_note_window_t3_ParamLimits

0x3447,	// (0x00011959) popup_note_window_t3

0x3459,	// (0x0001196b) popup_note_window_t4_ParamLimits

0x3459,	// (0x0001196b) popup_note_window_t4

0x3481,	// (0x00011993) popup_note_window_t5_ParamLimits

0x3481,	// (0x00011993) popup_note_window_t5

0x0004,

0xf585,	// (0x0001da97) popup_note_window_t_ParamLimits

0xf585,	// (0x0001da97) popup_note_window_t

0x34a5,	// (0x000119b7) bg_popup_window_pane_cp6_ParamLimits

0x34a5,	// (0x000119b7) bg_popup_window_pane_cp6

0x5e5c,	// (0x0001436e) popup_note_image_window_g1_ParamLimits

0x5e5c,	// (0x0001436e) popup_note_image_window_g1

0x5e68,	// (0x0001437a) popup_note_image_window_g2_ParamLimits

0x5e68,	// (0x0001437a) popup_note_image_window_g2

0x0001,

0xf851,	// (0x0001dd63) popup_note_image_window_g_ParamLimits

0xf851,	// (0x0001dd63) popup_note_image_window_g

0x5e81,	// (0x00014393) popup_note_image_window_t1_ParamLimits

0x5e81,	// (0x00014393) popup_note_image_window_t1

0x5e9a,	// (0x000143ac) popup_note_image_window_t2_ParamLimits

0x5e9a,	// (0x000143ac) popup_note_image_window_t2

0x5eb3,	// (0x000143c5) popup_note_image_window_t3_ParamLimits

0x5eb3,	// (0x000143c5) popup_note_image_window_t3

0x0002,

0xf856,	// (0x0001dd68) popup_note_image_window_t_ParamLimits

0xf856,	// (0x0001dd68) popup_note_image_window_t

0x5d1d,	// (0x0001422f) bg_popup_window_pane_cp7_ParamLimits

0x5d1d,	// (0x0001422f) bg_popup_window_pane_cp7

0x5d4d,	// (0x0001425f) popup_note_wait_window_g1_ParamLimits

0x5d4d,	// (0x0001425f) popup_note_wait_window_g1

0x5d59,	// (0x0001426b) popup_note_wait_window_g2_ParamLimits

0x5d59,	// (0x0001426b) popup_note_wait_window_g2

0x0002,

0xf83f,	// (0x0001dd51) popup_note_wait_window_g_ParamLimits

0xf83f,	// (0x0001dd51) popup_note_wait_window_g

0x5d71,	// (0x00014283) popup_note_wait_window_t1_ParamLimits

0x5d71,	// (0x00014283) popup_note_wait_window_t1

0x5d98,	// (0x000142aa) popup_note_wait_window_t2_ParamLimits

0x5d98,	// (0x000142aa) popup_note_wait_window_t2

0x5db5,	// (0x000142c7) popup_note_wait_window_t3_ParamLimits

0x5db5,	// (0x000142c7) popup_note_wait_window_t3

0x5dc8,	// (0x000142da) popup_note_wait_window_t4_ParamLimits

0x5dc8,	// (0x000142da) popup_note_wait_window_t4

0x0004,

0xf846,	// (0x0001dd58) popup_note_wait_window_t_ParamLimits

0xf846,	// (0x0001dd58) popup_note_wait_window_t

0x5ded,	// (0x000142ff) wait_bar_pane_ParamLimits

0x5ded,	// (0x000142ff) wait_bar_pane

0x3086,	// (0x00011598) wait_anim_pane

0x3086,	// (0x00011598) wait_border_pane

0x307c,	// (0x0001158e) wait_anim_pane_g1

0x307c,	// (0x0001158e) wait_anim_pane_g2

0x0001,

0xf6ff,	// (0x0001dc11) wait_anim_pane_g

0x5cc1,	// (0x000141d3) wait_border_pane_g1

0x5ccc,	// (0x000141de) wait_border_pane_g2

0x5cd5,	// (0x000141e7) wait_border_pane_g3

0x0002,

0xf838,	// (0x0001dd4a) wait_border_pane_g

0x5b31,	// (0x00014043) bg_popup_window_pane_cp16_ParamLimits

0x5b31,	// (0x00014043) bg_popup_window_pane_cp16

0x5c31,	// (0x00014143) indicator_popup_pane_cp4_ParamLimits

0x5c31,	// (0x00014143) indicator_popup_pane_cp4

0x5c45,	// (0x00014157) popup_query_data_window_t1_ParamLimits

0x5c45,	// (0x00014157) popup_query_data_window_t1

0x5c57,	// (0x00014169) popup_query_data_window_t2_ParamLimits

0x5c57,	// (0x00014169) popup_query_data_window_t2

0x5c70,	// (0x00014182) popup_query_data_window_t3_ParamLimits

0x5c70,	// (0x00014182) popup_query_data_window_t3

0x0002,

0xf831,	// (0x0001dd43) popup_query_data_window_t_ParamLimits

0xf831,	// (0x0001dd43) popup_query_data_window_t

0x5c8a,	// (0x0001419c) query_popup_data_pane_ParamLimits

0x5c8a,	// (0x0001419c) query_popup_data_pane

0x5c9e,	// (0x000141b0) query_popup_data_pane_cp1_ParamLimits

0x5c9e,	// (0x000141b0) query_popup_data_pane_cp1

0x5b31,	// (0x00014043) bg_popup_window_pane_cp10_ParamLimits

0x5b31,	// (0x00014043) bg_popup_window_pane_cp10

0x5b63,	// (0x00014075) indicator_popup_pane_ParamLimits

0x5b63,	// (0x00014075) indicator_popup_pane

0x5b85,	// (0x00014097) popup_query_code_window_t1_ParamLimits

0x5b85,	// (0x00014097) popup_query_code_window_t1

0x5b9f,	// (0x000140b1) popup_query_code_window_t2_ParamLimits

0x5b9f,	// (0x000140b1) popup_query_code_window_t2

0x5be8,	// (0x000140fa) popup_query_code_window_t3_ParamLimits

0x5be8,	// (0x000140fa) popup_query_code_window_t3

0x0002,

0xf82a,	// (0x0001dd3c) popup_query_code_window_t_ParamLimits

0xf82a,	// (0x0001dd3c) popup_query_code_window_t

0x5c17,	// (0x00014129) query_popup_pane_ParamLimits

0x5c17,	// (0x00014129) query_popup_pane

0x34a5,	// (0x000119b7) bg_popup_window_pane_cp15_ParamLimits

0x34a5,	// (0x000119b7) bg_popup_window_pane_cp15

0x34c3,	// (0x000119d5) indicator_popup_pane_cp1_ParamLimits

0x34c3,	// (0x000119d5) indicator_popup_pane_cp1

0x34d6,	// (0x000119e8) indicator_popup_pane_cp2_ParamLimits

0x34d6,	// (0x000119e8) indicator_popup_pane_cp2

0x34e9,	// (0x000119fb) popup_query_data_code_window_g1_ParamLimits

0x34e9,	// (0x000119fb) popup_query_data_code_window_g1

0x34fc,	// (0x00011a0e) popup_query_data_code_window_t1_ParamLimits

0x34fc,	// (0x00011a0e) popup_query_data_code_window_t1

0x350e,	// (0x00011a20) popup_query_data_code_window_t2_ParamLimits

0x350e,	// (0x00011a20) popup_query_data_code_window_t2

0x3520,	// (0x00011a32) popup_query_data_code_window_t3_ParamLimits

0x3520,	// (0x00011a32) popup_query_data_code_window_t3

0x3536,	// (0x00011a48) popup_query_data_code_window_t4_ParamLimits

0x3536,	// (0x00011a48) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001daa2) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001daa2) popup_query_data_code_window_t

0x1dd4,	// (0x000102e6) list_single_midp_graphic_pane_g3

0x354e,	// (0x00011a60) query_popup_data_pane_cp2_ParamLimits

0x3561,	// (0x00011a73) query_popup_pane_cp2_ParamLimits

0x3561,	// (0x00011a73) query_popup_pane_cp2

0x3086,	// (0x00011598) bg_popup_window_pane_cp11

0x5b29,	// (0x0001403b) heading_pane_cp5

0x3649,	// (0x00011b5b) listscroll_popup_info_pane

0x3086,	// (0x00011598) input_focus_pane_cp3

0x3574,	// (0x00011a86) query_popup_pane_t1

0x3582,	// (0x00011a94) list_popup_info_pane_ParamLimits

0x3582,	// (0x00011a94) list_popup_info_pane

0x3591,	// (0x00011aa3) listscroll_popup_info_pane_g1

0x3599,	// (0x00011aab) scroll_pane_cp7

0x35a3,	// (0x00011ab5) popup_info_list_pane_t1_ParamLimits

0x35a3,	// (0x00011ab5) popup_info_list_pane_t1

0x35bd,	// (0x00011acf) popup_info_list_pane_t2_ParamLimits

0x35bd,	// (0x00011acf) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001daab) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001daab) popup_info_list_pane_t

0x3086,	// (0x00011598) bg_popup_window_pane_cp12

0x6f7e,	// (0x00015490) find_popup_pane

0x3166,	// (0x00011678) bg_popup_window_pane_cp3

0x35d7,	// (0x00011ae9) heading_pane_cp3

0x35e3,	// (0x00011af5) listscroll_popup_graphic_pane

0x3086,	// (0x00011598) bg_popup_window_pane_cp4

0xd359,	// (0x0001b86b) heading_pane_cp4

0x3649,	// (0x00011b5b) listscroll_popup_colour_pane

0x3651,	// (0x00011b63) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x3651,	// (0x00011b63) cell_large_graphic_colour_none_popup_pane

0xd361,	// (0x0001b873) grid_large_graphic_colour_popup_pane_ParamLimits

0xd361,	// (0x0001b873) grid_large_graphic_colour_popup_pane

0x368d,	// (0x00011b9f) listscroll_popup_colour_pane_g1_ParamLimits

0x368d,	// (0x00011b9f) listscroll_popup_colour_pane_g1

0x36a4,	// (0x00011bb6) listscroll_popup_colour_pane_g2_ParamLimits

0x36a4,	// (0x00011bb6) listscroll_popup_colour_pane_g2

0x36bb,	// (0x00011bcd) listscroll_popup_colour_pane_g3_ParamLimits

0x36bb,	// (0x00011bcd) listscroll_popup_colour_pane_g3

0xd385,	// (0x0001b897) listscroll_popup_colour_pane_g4_ParamLimits

0xd385,	// (0x0001b897) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001dab0) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001dab0) listscroll_popup_colour_pane_g

0x36da,	// (0x00011bec) scroll_pane_cp6_ParamLimits

0x36da,	// (0x00011bec) scroll_pane_cp6

0xd394,	// (0x0001b8a6) cell_large_graphic_colour_popup_pane_ParamLimits

0xd394,	// (0x0001b8a6) cell_large_graphic_colour_popup_pane

0x370b,	// (0x00011c1d) cell_large_graphic_colour_none_popup_pane_t1

0x3086,	// (0x00011598) grid_highlight_pane_cp5

0x371a,	// (0x00011c2c) cell_large_graphic_colour_popup_pane_g1

0x3722,	// (0x00011c34) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001dab9) cell_large_graphic_colour_popup_pane_g

0x372a,	// (0x00011c3c) cell_large_graphic_colour_popup_pane_g2_copy1

0x3733,	// (0x00011c45) grid_highlight_pane_cp4

0x373b,	// (0x00011c4d) bg_popup_window_pane_cp8_ParamLimits

0x373b,	// (0x00011c4d) bg_popup_window_pane_cp8

0x3756,	// (0x00011c68) popup_snote_single_text_window_g1_ParamLimits

0x3756,	// (0x00011c68) popup_snote_single_text_window_g1

0x3768,	// (0x00011c7a) popup_snote_single_text_window_t1_ParamLimits

0x3768,	// (0x00011c7a) popup_snote_single_text_window_t1

0x377b,	// (0x00011c8d) popup_snote_single_text_window_t2_ParamLimits

0x377b,	// (0x00011c8d) popup_snote_single_text_window_t2

0x378e,	// (0x00011ca0) popup_snote_single_text_window_t3_ParamLimits

0x378e,	// (0x00011ca0) popup_snote_single_text_window_t3

0x37c7,	// (0x00011cd9) popup_snote_single_text_window_t4_ParamLimits

0x37c7,	// (0x00011cd9) popup_snote_single_text_window_t4

0x37fb,	// (0x00011d0d) popup_snote_single_text_window_t5_ParamLimits

0x37fb,	// (0x00011d0d) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001dabe) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001dabe) popup_snote_single_text_window_t

0x382a,	// (0x00011d3c) bg_popup_window_pane_cp9_ParamLimits

0x382a,	// (0x00011d3c) bg_popup_window_pane_cp9

0x3756,	// (0x00011c68) popup_snote_single_graphic_window_g1_ParamLimits

0x3756,	// (0x00011c68) popup_snote_single_graphic_window_g1

0x3838,	// (0x00011d4a) popup_snote_single_graphic_window_g2_ParamLimits

0x3838,	// (0x00011d4a) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001dac9) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001dac9) popup_snote_single_graphic_window_g

0x3844,	// (0x00011d56) popup_snote_single_graphic_window_t1_ParamLimits

0x3844,	// (0x00011d56) popup_snote_single_graphic_window_t1

0x3857,	// (0x00011d69) popup_snote_single_graphic_window_t2_ParamLimits

0x3857,	// (0x00011d69) popup_snote_single_graphic_window_t2

0x386a,	// (0x00011d7c) popup_snote_single_graphic_window_t3_ParamLimits

0x386a,	// (0x00011d7c) popup_snote_single_graphic_window_t3

0x38a3,	// (0x00011db5) popup_snote_single_graphic_window_t4_ParamLimits

0x38a3,	// (0x00011db5) popup_snote_single_graphic_window_t4

0x38d7,	// (0x00011de9) popup_snote_single_graphic_window_t5_ParamLimits

0x38d7,	// (0x00011de9) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001dace) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001dace) popup_snote_single_graphic_window_t

0x6ec2,	// (0x000153d4) grid_graphic_popup_pane_ParamLimits

0x6ec2,	// (0x000153d4) grid_graphic_popup_pane

0x6eea,	// (0x000153fc) listscroll_popup_graphic_pane_g1_ParamLimits

0x6eea,	// (0x000153fc) listscroll_popup_graphic_pane_g1

0xe5c3,	// (0x0001cad5) listscroll_popup_graphic_pane_g2_ParamLimits

0xe5c3,	// (0x0001cad5) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a7,	// (0x0001deb9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a7,	// (0x0001deb9) listscroll_popup_graphic_pane_g

0x6f12,	// (0x00015424) scroll_pane_cp5

0xe587,	// (0x0001ca99) cell_graphic_popup_pane_ParamLimits

0xe587,	// (0x0001ca99) cell_graphic_popup_pane

0x6e4e,	// (0x00015360) cell_graphic_popup_pane_g1

0x6e56,	// (0x00015368) cell_graphic_popup_pane_g2

0x372a,	// (0x00011c3c) cell_graphic_popup_pane_g3

0x0002,

0xf9a0,	// (0x0001deb2) cell_graphic_popup_pane_g

0x6e5f,	// (0x00015371) cell_graphic_popup_pane_t2

0x3733,	// (0x00011c45) grid_highlight_pane_cp3

0x3918,	// (0x00011e2a) list_gen_pane_ParamLimits

0x3918,	// (0x00011e2a) list_gen_pane

0x394a,	// (0x00011e5c) scroll_pane

0xe542,	// (0x0001ca54) bg_list_pane_g1_ParamLimits

0xe542,	// (0x0001ca54) bg_list_pane_g1

0x6dcb,	// (0x000152dd) bg_list_pane_g2_ParamLimits

0x6dcb,	// (0x000152dd) bg_list_pane_g2

0x6dde,	// (0x000152f0) bg_list_pane_g3_ParamLimits

0x6dde,	// (0x000152f0) bg_list_pane_g3

0x6df0,	// (0x00015302) bg_list_pane_g4_ParamLimits

0x6df0,	// (0x00015302) bg_list_pane_g4

0xe55d,	// (0x0001ca6f) bg_list_pane_g5_ParamLimits

0xe55d,	// (0x0001ca6f) bg_list_pane_g5

0x0004,

0xf995,	// (0x0001dea7) bg_list_pane_g_ParamLimits

0xf995,	// (0x0001dea7) bg_list_pane_g

0xe4d1,	// (0x0001c9e3) list_double2_graphic_large_graphic_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double2_graphic_large_graphic_pane

0xe4d1,	// (0x0001c9e3) list_double2_graphic_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double2_graphic_pane

0xe4d1,	// (0x0001c9e3) list_double2_large_graphic_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double2_large_graphic_pane

0xe4e4,	// (0x0001c9f6) list_double2_pane_ParamLimits

0xe4e4,	// (0x0001c9f6) list_double2_pane

0xe4d1,	// (0x0001c9e3) list_double_graphic_heading_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double_graphic_heading_pane

0xe4d1,	// (0x0001c9e3) list_double_graphic_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double_graphic_pane

0xe4d1,	// (0x0001c9e3) list_double_heading_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double_heading_pane

0xe4d1,	// (0x0001c9e3) list_double_large_graphic_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double_large_graphic_pane

0xe4d1,	// (0x0001c9e3) list_double_number_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double_number_pane

0xe4d1,	// (0x0001c9e3) list_double_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double_pane

0xe4d1,	// (0x0001c9e3) list_double_time_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_double_time_pane

0xe4d1,	// (0x0001c9e3) list_setting_number_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_setting_number_pane

0xe4d1,	// (0x0001c9e3) list_setting_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_setting_pane

0xe4f6,	// (0x0001ca08) list_single_2graphic_pane_ParamLimits

0xe4f6,	// (0x0001ca08) list_single_2graphic_pane

0xe4f6,	// (0x0001ca08) list_single_graphic_heading_pane_ParamLimits

0xe4f6,	// (0x0001ca08) list_single_graphic_heading_pane

0xe4f6,	// (0x0001ca08) list_single_graphic_pane_ParamLimits

0xe4f6,	// (0x0001ca08) list_single_graphic_pane

0xe4f6,	// (0x0001ca08) list_single_heading_pane_ParamLimits

0xe4f6,	// (0x0001ca08) list_single_heading_pane

0xe4d1,	// (0x0001c9e3) list_single_large_graphic_pane_ParamLimits

0xe4d1,	// (0x0001c9e3) list_single_large_graphic_pane

0xe4f6,	// (0x0001ca08) list_single_number_heading_pane_ParamLimits

0xe4f6,	// (0x0001ca08) list_single_number_heading_pane

0xe4f6,	// (0x0001ca08) list_single_number_pane_ParamLimits

0xe4f6,	// (0x0001ca08) list_single_number_pane

0xe4f6,	// (0x0001ca08) list_single_pane_ParamLimits

0xe4f6,	// (0x0001ca08) list_single_pane

0x3086,	// (0x00011598) list_highlight_pane_cp1

0x398a,	// (0x00011e9c) list_single_pane_g1_ParamLimits

0x398a,	// (0x00011e9c) list_single_pane_g1

0x3996,	// (0x00011ea8) list_single_pane_g2_ParamLimits

0x3996,	// (0x00011ea8) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001dae0) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001dae0) list_single_pane_g

0x6c62,	// (0x00015174) list_single_pane_t1_ParamLimits

0x6c62,	// (0x00015174) list_single_pane_t1

0x398a,	// (0x00011e9c) list_single_number_pane_g1_ParamLimits

0x398a,	// (0x00011e9c) list_single_number_pane_g1

0x3996,	// (0x00011ea8) list_single_number_pane_g2_ParamLimits

0x3996,	// (0x00011ea8) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001dae0) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001dae0) list_single_number_pane_g

0x555a,	// (0x00013a6c) list_single_number_pane_t1_ParamLimits

0x555a,	// (0x00013a6c) list_single_number_pane_t1

0x6a0e,	// (0x00014f20) list_single_number_pane_t2_ParamLimits

0x6a0e,	// (0x00014f20) list_single_number_pane_t2

0x0001,

0xf956,	// (0x0001de68) list_single_number_pane_t_ParamLimits

0xf956,	// (0x0001de68) list_single_number_pane_t

0x397e,	// (0x00011e90) list_single_graphic_pane_g1_ParamLimits

0x397e,	// (0x00011e90) list_single_graphic_pane_g1

0x398a,	// (0x00011e9c) list_single_graphic_pane_g2_ParamLimits

0x398a,	// (0x00011e9c) list_single_graphic_pane_g2

0x3996,	// (0x00011ea8) list_single_graphic_pane_g3_ParamLimits

0x3996,	// (0x00011ea8) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001dad9) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001dad9) list_single_graphic_pane_g

0x39a2,	// (0x00011eb4) list_single_graphic_pane_t1_ParamLimits

0x39a2,	// (0x00011eb4) list_single_graphic_pane_t1

0x398a,	// (0x00011e9c) list_single_heading_pane_g1_ParamLimits

0x398a,	// (0x00011e9c) list_single_heading_pane_g1

0x3996,	// (0x00011ea8) list_single_heading_pane_g2_ParamLimits

0x3996,	// (0x00011ea8) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001dae0) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001dae0) list_single_heading_pane_g

0x39b8,	// (0x00011eca) list_single_heading_pane_t1_ParamLimits

0x39b8,	// (0x00011eca) list_single_heading_pane_t1

0x39ce,	// (0x00011ee0) list_single_heading_pane_t2_ParamLimits

0x39ce,	// (0x00011ee0) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001dae5) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001dae5) list_single_heading_pane_t

0x398a,	// (0x00011e9c) list_single_number_heading_pane_g1_ParamLimits

0x398a,	// (0x00011e9c) list_single_number_heading_pane_g1

0x3996,	// (0x00011ea8) list_single_number_heading_pane_g2_ParamLimits

0x3996,	// (0x00011ea8) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001dae0) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001dae0) list_single_number_heading_pane_g

0x39b8,	// (0x00011eca) list_single_number_heading_pane_t1_ParamLimits

0x39b8,	// (0x00011eca) list_single_number_heading_pane_t1

0x39e0,	// (0x00011ef2) list_single_number_heading_pane_t2_ParamLimits

0x39e0,	// (0x00011ef2) list_single_number_heading_pane_t2

0x39f2,	// (0x00011f04) list_single_number_heading_pane_t3_ParamLimits

0x39f2,	// (0x00011f04) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001daea) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001daea) list_single_number_heading_pane_t

0x3a04,	// (0x00011f16) list_single_graphic_heading_pane_g1_ParamLimits

0x3a04,	// (0x00011f16) list_single_graphic_heading_pane_g1

0xd3bd,	// (0x0001b8cf) list_single_graphic_heading_pane_g4_ParamLimits

0xd3bd,	// (0x0001b8cf) list_single_graphic_heading_pane_g4

0x3996,	// (0x00011ea8) list_single_graphic_heading_pane_g5_ParamLimits

0x3996,	// (0x00011ea8) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001daf1) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001daf1) list_single_graphic_heading_pane_g

0x39b8,	// (0x00011eca) list_single_graphic_heading_pane_t1_ParamLimits

0x39b8,	// (0x00011eca) list_single_graphic_heading_pane_t1

0x3a21,	// (0x00011f33) list_single_graphic_heading_pane_t2_ParamLimits

0x3a21,	// (0x00011f33) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001daf8) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001daf8) list_single_graphic_heading_pane_t

0x7597,	// (0x00015aa9) list_single_large_graphic_pane_g1_ParamLimits

0x7597,	// (0x00015aa9) list_single_large_graphic_pane_g1

0x75a3,	// (0x00015ab5) list_single_large_graphic_pane_g2_ParamLimits

0x75a3,	// (0x00015ab5) list_single_large_graphic_pane_g2

0x75af,	// (0x00015ac1) list_single_large_graphic_pane_g3_ParamLimits

0x75af,	// (0x00015ac1) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001dafd) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001dafd) list_single_large_graphic_pane_g

0x5ccc,	// (0x000141de) wait_border_pane_g2_copy1

0xd3ce,	// (0x0001b8e0) list_single_large_graphic_pane_g4_cp2

0x75bb,	// (0x00015acd) list_single_large_graphic_pane_t1_ParamLimits

0x75bb,	// (0x00015acd) list_single_large_graphic_pane_t1

0x4b96,	// (0x000130a8) list_double_pane_g1_ParamLimits

0x4b96,	// (0x000130a8) list_double_pane_g1

0xd3d6,	// (0x0001b8e8) list_double_pane_g2_ParamLimits

0xd3d6,	// (0x0001b8e8) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001db04) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001db04) list_double_pane_g

0xd3e2,	// (0x0001b8f4) list_double_pane_t1_ParamLimits

0xd3e2,	// (0x0001b8f4) list_double_pane_t1

0xd3f8,	// (0x0001b90a) list_double_pane_t2_ParamLimits

0xd3f8,	// (0x0001b90a) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001db09) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001db09) list_double_pane_t

0xd40a,	// (0x0001b91c) list_double2_pane_g1_ParamLimits

0xd40a,	// (0x0001b91c) list_double2_pane_g1

0x3a81,	// (0x00011f93) list_double2_pane_g2_ParamLimits

0x3a81,	// (0x00011f93) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001db0e) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001db0e) list_double2_pane_g

0x3a8d,	// (0x00011f9f) list_double2_pane_t1_ParamLimits

0x3a8d,	// (0x00011f9f) list_double2_pane_t1

0xd41b,	// (0x0001b92d) list_double2_pane_t2_ParamLimits

0xd41b,	// (0x0001b92d) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001db13) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001db13) list_double2_pane_t

0x4b96,	// (0x000130a8) list_double_number_pane_g1_ParamLimits

0x4b96,	// (0x000130a8) list_double_number_pane_g1

0xd3d6,	// (0x0001b8e8) list_double_number_pane_g2_ParamLimits

0xd3d6,	// (0x0001b8e8) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001db04) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001db04) list_double_number_pane_g

0xd42d,	// (0x0001b93f) list_double_number_pane_t1_ParamLimits

0xd42d,	// (0x0001b93f) list_double_number_pane_t1

0xd43f,	// (0x0001b951) list_double_number_pane_t2_ParamLimits

0xd43f,	// (0x0001b951) list_double_number_pane_t2

0xd455,	// (0x0001b967) list_double_number_pane_t3_ParamLimits

0xd455,	// (0x0001b967) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001db18) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001db18) list_double_number_pane_t

0x634f,	// (0x00014861) list_double_graphic_pane_g1_ParamLimits

0x634f,	// (0x00014861) list_double_graphic_pane_g1

0xd467,	// (0x0001b979) list_double_graphic_pane_g2_ParamLimits

0xd467,	// (0x0001b979) list_double_graphic_pane_g2

0xd476,	// (0x0001b988) list_double_graphic_pane_g3_ParamLimits

0xd476,	// (0x0001b988) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001db1f) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001db1f) list_double_graphic_pane_g

0xd48e,	// (0x0001b9a0) list_double_graphic_pane_t1_ParamLimits

0xd48e,	// (0x0001b9a0) list_double_graphic_pane_t1

0xd4a4,	// (0x0001b9b6) list_double_graphic_pane_t2_ParamLimits

0xd4a4,	// (0x0001b9b6) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001db28) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001db28) list_double_graphic_pane_t

0xd4b6,	// (0x0001b9c8) list_double2_graphic_pane_g1_ParamLimits

0xd4b6,	// (0x0001b9c8) list_double2_graphic_pane_g1

0xd4c2,	// (0x0001b9d4) list_double2_graphic_pane_g2_ParamLimits

0xd4c2,	// (0x0001b9d4) list_double2_graphic_pane_g2

0xd4ce,	// (0x0001b9e0) list_double2_graphic_pane_g3_ParamLimits

0xd4ce,	// (0x0001b9e0) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001db2d) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001db2d) list_double2_graphic_pane_g

0xd4da,	// (0x0001b9ec) list_double2_graphic_pane_t1_ParamLimits

0xd4da,	// (0x0001b9ec) list_double2_graphic_pane_t1

0xd4f0,	// (0x0001ba02) list_double2_graphic_pane_t2_ParamLimits

0xd4f0,	// (0x0001ba02) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001db34) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001db34) list_double2_graphic_pane_t

0xd502,	// (0x0001ba14) list_double_large_graphic_pane_g1_ParamLimits

0xd502,	// (0x0001ba14) list_double_large_graphic_pane_g1

0xd52d,	// (0x0001ba3f) list_double_large_graphic_pane_g2_ParamLimits

0xd52d,	// (0x0001ba3f) list_double_large_graphic_pane_g2

0xd3d6,	// (0x0001b8e8) list_double_large_graphic_pane_g3_ParamLimits

0xd3d6,	// (0x0001b8e8) list_double_large_graphic_pane_g3

0xd53e,	// (0x0001ba50) list_double_large_graphic_pane_g4_ParamLimits

0xd53e,	// (0x0001ba50) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001db39) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001db39) list_double_large_graphic_pane_g

0xd551,	// (0x0001ba63) list_double_large_graphic_pane_t1_ParamLimits

0xd551,	// (0x0001ba63) list_double_large_graphic_pane_t1

0xd56a,	// (0x0001ba7c) list_double_large_graphic_pane_t2_ParamLimits

0xd56a,	// (0x0001ba7c) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001db44) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001db44) list_double_large_graphic_pane_t

0xd57c,	// (0x0001ba8e) list_double2_large_graphic_pane_g1_ParamLimits

0xd57c,	// (0x0001ba8e) list_double2_large_graphic_pane_g1

0xd588,	// (0x0001ba9a) list_double2_large_graphic_pane_g2_ParamLimits

0xd588,	// (0x0001ba9a) list_double2_large_graphic_pane_g2

0xd4ce,	// (0x0001b9e0) list_double2_large_graphic_pane_g3_ParamLimits

0xd4ce,	// (0x0001b9e0) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001db49) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001db49) list_double2_large_graphic_pane_g

0xd599,	// (0x0001baab) list_double2_large_graphic_pane_t1_ParamLimits

0xd599,	// (0x0001baab) list_double2_large_graphic_pane_t1

0xd5af,	// (0x0001bac1) list_double2_large_graphic_pane_t2_ParamLimits

0xd5af,	// (0x0001bac1) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001db50) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001db50) list_double2_large_graphic_pane_t

0xd5c1,	// (0x0001bad3) list_double_heading_pane_g1_ParamLimits

0xd5c1,	// (0x0001bad3) list_double_heading_pane_g1

0xd5d2,	// (0x0001bae4) list_double_heading_pane_g2_ParamLimits

0xd5d2,	// (0x0001bae4) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001db55) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001db55) list_double_heading_pane_g

0xd5de,	// (0x0001baf0) list_double_heading_pane_t1_ParamLimits

0xd5de,	// (0x0001baf0) list_double_heading_pane_t1

0xd5f4,	// (0x0001bb06) list_double_heading_pane_t2_ParamLimits

0xd5f4,	// (0x0001bb06) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001db5a) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001db5a) list_double_heading_pane_t

0x3b8f,	// (0x000120a1) list_double_graphic_heading_pane_g1_ParamLimits

0x3b8f,	// (0x000120a1) list_double_graphic_heading_pane_g1

0xd5c1,	// (0x0001bad3) list_double_graphic_heading_pane_g2_ParamLimits

0xd5c1,	// (0x0001bad3) list_double_graphic_heading_pane_g2

0xd5d2,	// (0x0001bae4) list_double_graphic_heading_pane_g3_ParamLimits

0xd5d2,	// (0x0001bae4) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001db5f) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001db5f) list_double_graphic_heading_pane_g

0xd606,	// (0x0001bb18) list_double_graphic_heading_pane_t1_ParamLimits

0xd606,	// (0x0001bb18) list_double_graphic_heading_pane_t1

0xd61c,	// (0x0001bb2e) list_double_graphic_heading_pane_t2_ParamLimits

0xd61c,	// (0x0001bb2e) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001db66) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001db66) list_double_graphic_heading_pane_t

0xd52d,	// (0x0001ba3f) list_double_time_pane_g1_ParamLimits

0xd52d,	// (0x0001ba3f) list_double_time_pane_g1

0xd3d6,	// (0x0001b8e8) list_double_time_pane_g2_ParamLimits

0xd3d6,	// (0x0001b8e8) list_double_time_pane_g2

0x0001,

0xf629,	// (0x0001db3b) list_double_time_pane_g_ParamLimits

0xf629,	// (0x0001db3b) list_double_time_pane_g

0xd62e,	// (0x0001bb40) list_double_time_pane_t1_ParamLimits

0xd62e,	// (0x0001bb40) list_double_time_pane_t1

0xd644,	// (0x0001bb56) list_double_time_pane_t2_ParamLimits

0xd644,	// (0x0001bb56) list_double_time_pane_t2

0xd656,	// (0x0001bb68) list_double_time_pane_t3_ParamLimits

0xd656,	// (0x0001bb68) list_double_time_pane_t3

0xd668,	// (0x0001bb7a) list_double_time_pane_t4_ParamLimits

0xd668,	// (0x0001bb7a) list_double_time_pane_t4

0x0003,

0xf659,	// (0x0001db6b) list_double_time_pane_t_ParamLimits

0xf659,	// (0x0001db6b) list_double_time_pane_t

0xd4c2,	// (0x0001b9d4) list_setting_pane_g1_ParamLimits

0xd4c2,	// (0x0001b9d4) list_setting_pane_g1

0xd4ce,	// (0x0001b9e0) list_setting_pane_g2_ParamLimits

0xd4ce,	// (0x0001b9e0) list_setting_pane_g2

0x0001,

0xf662,	// (0x0001db74) list_setting_pane_g_ParamLimits

0xf662,	// (0x0001db74) list_setting_pane_g

0xd67a,	// (0x0001bb8c) list_setting_pane_t1_ParamLimits

0xd67a,	// (0x0001bb8c) list_setting_pane_t1

0xd691,	// (0x0001bba3) list_setting_pane_t2_ParamLimits

0xd691,	// (0x0001bba3) list_setting_pane_t2

0x0002,

0xf667,	// (0x0001db79) list_setting_pane_t_ParamLimits

0xf667,	// (0x0001db79) list_setting_pane_t

0xd6ce,	// (0x0001bbe0) set_value_pane_cp_ParamLimits

0xd6ce,	// (0x0001bbe0) set_value_pane_cp

0xd4c2,	// (0x0001b9d4) list_setting_number_pane_g1_ParamLimits

0xd4c2,	// (0x0001b9d4) list_setting_number_pane_g1

0xd4ce,	// (0x0001b9e0) list_setting_number_pane_g2_ParamLimits

0xd4ce,	// (0x0001b9e0) list_setting_number_pane_g2

0x0001,

0xf662,	// (0x0001db74) list_setting_number_pane_g_ParamLimits

0xf662,	// (0x0001db74) list_setting_number_pane_g

0xd6da,	// (0x0001bbec) list_setting_number_pane_t1_ParamLimits

0xd6da,	// (0x0001bbec) list_setting_number_pane_t1

0xd6ee,	// (0x0001bc00) list_setting_number_pane_t2_ParamLimits

0xd6ee,	// (0x0001bc00) list_setting_number_pane_t2

0xd705,	// (0x0001bc17) list_setting_number_pane_t3_ParamLimits

0xd705,	// (0x0001bc17) list_setting_number_pane_t3

0x0003,

0xf66e,	// (0x0001db80) list_setting_number_pane_t_ParamLimits

0xf66e,	// (0x0001db80) list_setting_number_pane_t

0xd6ce,	// (0x0001bbe0) set_value_pane_ParamLimits

0xd6ce,	// (0x0001bbe0) set_value_pane

0x3e01,	// (0x00012313) bg_set_opt_pane_ParamLimits

0x3e01,	// (0x00012313) bg_set_opt_pane

0x3e22,	// (0x00012334) set_value_pane_t1

0x3e30,	// (0x00012342) slider_set_pane_cp3

0x3e39,	// (0x0001234b) volume_small_pane_cp

0x3e42,	// (0x00012354) list_form_gen_pane

0x3e4b,	// (0x0001235d) scroll_pane_cp8

0xd748,	// (0x0001bc5a) form_field_data_pane_ParamLimits

0xd748,	// (0x0001bc5a) form_field_data_pane

0xd75f,	// (0x0001bc71) form_field_data_wide_pane_ParamLimits

0xd75f,	// (0x0001bc71) form_field_data_wide_pane

0xd77f,	// (0x0001bc91) form_field_popup_pane_ParamLimits

0xd77f,	// (0x0001bc91) form_field_popup_pane

0xd797,	// (0x0001bca9) form_field_popup_wide_pane_ParamLimits

0xd797,	// (0x0001bca9) form_field_popup_wide_pane

0x3ed8,	// (0x000123ea) form_field_slider_pane_ParamLimits

0x3ed8,	// (0x000123ea) form_field_slider_pane

0x3eeb,	// (0x000123fd) form_field_slider_wide_pane_ParamLimits

0x3eeb,	// (0x000123fd) form_field_slider_wide_pane

0x3efe,	// (0x00012410) data_form_pane

0xd7be,	// (0x0001bcd0) form_field_data_pane_t1

0x3f2e,	// (0x00012440) input_focus_pane

0x3f3c,	// (0x0001244e) data_form_wide_pane

0x3f68,	// (0x0001247a) form_field_data_wide_pane_t1

0x3748,	// (0x00011c5a) input_focus_pane_cp6

0xd7d8,	// (0x0001bcea) form_field_popup_pane_t1

0x3f2e,	// (0x00012440) input_focus_pane_cp7

0x3fa1,	// (0x000124b3) list_form_pane

0x3fb5,	// (0x000124c7) form_field_popup_wide_pane_t1

0x3f2e,	// (0x00012440) input_focus_pane_cp8

0x3fca,	// (0x000124dc) list_form_wide_pane

0xd7fa,	// (0x0001bd0c) form_field_slider_pane_t1_ParamLimits

0xd7fa,	// (0x0001bd0c) form_field_slider_pane_t1

0xd812,	// (0x0001bd24) form_field_slider_pane_t2_ParamLimits

0xd812,	// (0x0001bd24) form_field_slider_pane_t2

0x0001,

0xf67e,	// (0x0001db90) form_field_slider_pane_t_ParamLimits

0xf67e,	// (0x0001db90) form_field_slider_pane_t

0x33fb,	// (0x0001190d) input_focus_pane_cp9_ParamLimits

0x33fb,	// (0x0001190d) input_focus_pane_cp9

0xd827,	// (0x0001bd39) slider_cont_pane_ParamLimits

0xd827,	// (0x0001bd39) slider_cont_pane

0x401b,	// (0x0001252d) form_field_slider_wide_pane_t1_ParamLimits

0x401b,	// (0x0001252d) form_field_slider_wide_pane_t1

0x402d,	// (0x0001253f) form_field_slider_wide_pane_t2_ParamLimits

0x402d,	// (0x0001253f) form_field_slider_wide_pane_t2

0x0001,

0xf683,	// (0x0001db95) form_field_slider_wide_pane_t_ParamLimits

0xf683,	// (0x0001db95) form_field_slider_wide_pane_t

0x33fb,	// (0x0001190d) input_focus_pane_cp10_ParamLimits

0x33fb,	// (0x0001190d) input_focus_pane_cp10

0xd83b,	// (0x0001bd4d) slider_cont_pane_cp1_ParamLimits

0xd83b,	// (0x0001bd4d) slider_cont_pane_cp1

0xd84f,	// (0x0001bd61) slider_form_pane_cp

0x405b,	// (0x0001256d) input_focus_pane_g1

0x4063,	// (0x00012575) input_focus_pane_g2

0x406b,	// (0x0001257d) input_focus_pane_g3

0x4073,	// (0x00012585) input_focus_pane_g4

0x407b,	// (0x0001258d) input_focus_pane_g5

0x4083,	// (0x00012595) input_focus_pane_g6

0x408b,	// (0x0001259d) input_focus_pane_g7

0x4093,	// (0x000125a5) input_focus_pane_g8

0x409b,	// (0x000125ad) input_focus_pane_g9

0x307c,	// (0x0001158e) input_focus_pane_g10

0x0009,

0xf688,	// (0x0001db9a) input_focus_pane_g

0x5cd5,	// (0x000141e7) wait_border_pane_g3_copy1

0xd857,	// (0x0001bd69) data_form_pane_t1

0x307c,	// (0x0001158e) wait_anim_pane_g1_copy1

0xe4b5,	// (0x0001c9c7) data_form_wide_pane_t1

0xd871,	// (0x0001bd83) list_form_graphic_pane_cp_ParamLimits

0xd871,	// (0x0001bd83) list_form_graphic_pane_cp

0x6c1a,	// (0x0001512c) slider_form_pane_g1

0x6c23,	// (0x00015135) slider_form_pane_g2

0x0006,

0xf986,	// (0x0001de98) slider_form_pane_g

0xd884,	// (0x0001bd96) list_form_graphic_pane_ParamLimits

0xd884,	// (0x0001bd96) list_form_graphic_pane

0x40d5,	// (0x000125e7) list_form_graphic_pane_g1

0x40dd,	// (0x000125ef) list_form_graphic_pane_t1_ParamLimits

0x40dd,	// (0x000125ef) list_form_graphic_pane_t1

0x3166,	// (0x00011678) list_highlight_pane_cp5_ParamLimits

0x3166,	// (0x00011678) list_highlight_pane_cp5

0x40f2,	// (0x00012604) find_pane_g1

0x40fb,	// (0x0001260d) input_find_pane

0x4104,	// (0x00012616) input_find_pane_g1_ParamLimits

0x4104,	// (0x00012616) input_find_pane_g1

0x4110,	// (0x00012622) input_find_pane_t1_ParamLimits

0x4110,	// (0x00012622) input_find_pane_t1

0x4125,	// (0x00012637) input_find_pane_t2_ParamLimits

0x4125,	// (0x00012637) input_find_pane_t2

0x0001,

0xf69d,	// (0x0001dbaf) input_find_pane_t_ParamLimits

0xf69d,	// (0x0001dbaf) input_find_pane_t

0x413a,	// (0x0001264c) input_focus_pane_cp5_ParamLimits

0x413a,	// (0x0001264c) input_focus_pane_cp5

0x4154,	// (0x00012666) bg_popup_window_pane_cp2_ParamLimits

0x4154,	// (0x00012666) bg_popup_window_pane_cp2

0x4161,	// (0x00012673) listscroll_menu_pane_ParamLimits

0x4161,	// (0x00012673) listscroll_menu_pane

0xd8a2,	// (0x0001bdb4) popup_submenu_window_ParamLimits

0xd8a2,	// (0x0001bdb4) popup_submenu_window

0x4195,	// (0x000126a7) find_popup_pane_g1

0x419d,	// (0x000126af) input_popup_find_pane_cp

0x413a,	// (0x0001264c) input_focus_pane_cp4_ParamLimits

0x413a,	// (0x0001264c) input_focus_pane_cp4

0x41b5,	// (0x000126c7) input_popup_find_pane_t1_ParamLimits

0x41b5,	// (0x000126c7) input_popup_find_pane_t1

0x3086,	// (0x00011598) bg_popup_sub_pane_cp

0x41e3,	// (0x000126f5) listscroll_popup_sub_pane

0x41eb,	// (0x000126fd) list_submenu_pane_ParamLimits

0x41eb,	// (0x000126fd) list_submenu_pane

0x41fc,	// (0x0001270e) scroll_pane_cp4

0x4204,	// (0x00012716) list_single_popup_submenu_pane_ParamLimits

0x4204,	// (0x00012716) list_single_popup_submenu_pane

0x4218,	// (0x0001272a) list_single_popup_submenu_pane_g1

0x4220,	// (0x00012732) list_single_popup_submenu_pane_t1_ParamLimits

0x4220,	// (0x00012732) list_single_popup_submenu_pane_t1

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp1_ParamLimits

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp1

0xd8d8,	// (0x0001bdea) tabs_2_active_pane_g1

0xd8e0,	// (0x0001bdf2) tabs_2_active_pane_t1

0x33fb,	// (0x0001190d) bg_passive_tab_pane_cp1_ParamLimits

0x33fb,	// (0x0001190d) bg_passive_tab_pane_cp1

0xd8d8,	// (0x0001bdea) tabs_2_passive_pane_g1

0xd8e0,	// (0x0001bdf2) tabs_2_passive_pane_t1

0x3166,	// (0x00011678) bg_active_tab_pane_cp4

0xd8f2,	// (0x0001be04) tabs_2_long_active_pane_t1

0x50aa,	// (0x000135bc) bg_passive_tab_pane_cp4

0x1ddc,	// (0x000102ee) list_single_midp_graphic_pane_g4_ParamLimits

0x3166,	// (0x00011678) bg_active_tab_pane_cp5

0xd905,	// (0x0001be17) tabs_3_long_active_pane_t1

0x50aa,	// (0x000135bc) bg_passive_tab_pane_cp5

0x1ddc,	// (0x000102ee) list_single_midp_graphic_pane_g4

0x3166,	// (0x00011678) bg_popup_window_pane_cp13_ParamLimits

0x3166,	// (0x00011678) bg_popup_window_pane_cp13

0x4297,	// (0x000127a9) listscroll_popup_fast_pane_ParamLimits

0x4297,	// (0x000127a9) listscroll_popup_fast_pane

0x42a3,	// (0x000127b5) grid_popup_fast_pane_ParamLimits

0x42a3,	// (0x000127b5) grid_popup_fast_pane

0x42b5,	// (0x000127c7) scroll_pane_cp9_ParamLimits

0x42b5,	// (0x000127c7) scroll_pane_cp9

0x8aec,	// (0x00016ffe) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x8aec,	// (0x00016ffe) list_single_graphic_hl_pane_t1_cp2

0x42d9,	// (0x000127eb) input_focus_pane_cp20_ParamLimits

0x42d9,	// (0x000127eb) input_focus_pane_cp20

0x42e7,	// (0x000127f9) query_popup_data_pane_t1_ParamLimits

0x42e7,	// (0x000127f9) query_popup_data_pane_t1

0x42fa,	// (0x0001280c) query_popup_data_pane_t2_ParamLimits

0x42fa,	// (0x0001280c) query_popup_data_pane_t2

0x4340,	// (0x00012852) query_popup_data_pane_t3_ParamLimits

0x4340,	// (0x00012852) query_popup_data_pane_t3

0x4381,	// (0x00012893) query_popup_data_pane_t4_ParamLimits

0x4381,	// (0x00012893) query_popup_data_pane_t4

0x43bd,	// (0x000128cf) query_popup_data_pane_t5_ParamLimits

0x43bd,	// (0x000128cf) query_popup_data_pane_t5

0x0004,

0xf6a2,	// (0x0001dbb4) query_popup_data_pane_t_ParamLimits

0xf6a2,	// (0x0001dbb4) query_popup_data_pane_t

0x405b,	// (0x0001256d) bg_set_opt_pane_g1

0x4063,	// (0x00012575) bg_set_opt_pane_g2

0x406b,	// (0x0001257d) bg_set_opt_pane_g3

0x4073,	// (0x00012585) bg_set_opt_pane_g4

0x407b,	// (0x0001258d) bg_set_opt_pane_g5

0x4083,	// (0x00012595) bg_set_opt_pane_g6

0x408b,	// (0x0001259d) bg_set_opt_pane_g7

0x4093,	// (0x000125a5) bg_set_opt_pane_g8

0x409b,	// (0x000125ad) bg_set_opt_pane_g9

0x0008,

0xf6ad,	// (0x0001dbbf) bg_set_opt_pane_g

0x140c,	// (0x0000f91e) control_top_pane_stacon_ParamLimits

0x140c,	// (0x0000f91e) control_top_pane_stacon

0x145f,	// (0x0000f971) signal_pane_stacon_ParamLimits

0x145f,	// (0x0000f971) signal_pane_stacon

0x4a0c,	// (0x00012f1e) stacon_top_pane_g1_ParamLimits

0x4a0c,	// (0x00012f1e) stacon_top_pane_g1

0x1484,	// (0x0000f996) title_pane_stacon_ParamLimits

0x1484,	// (0x0000f996) title_pane_stacon

0x14ae,	// (0x0000f9c0) uni_indicator_pane_stacon_ParamLimits

0x14ae,	// (0x0000f9c0) uni_indicator_pane_stacon

0x14c3,	// (0x0000f9d5) battery_pane_stacon_ParamLimits

0x14c3,	// (0x0000f9d5) battery_pane_stacon

0x1507,	// (0x0000fa19) control_bottom_pane_stacon_ParamLimits

0x1507,	// (0x0000fa19) control_bottom_pane_stacon

0x152a,	// (0x0000fa3c) navi_pane_stacon_ParamLimits

0x152a,	// (0x0000fa3c) navi_pane_stacon

0x4a2e,	// (0x00012f40) stacon_bottom_pane_g1_ParamLimits

0x4a2e,	// (0x00012f40) stacon_bottom_pane_g1

0x1176,	// (0x0000f688) aid_levels_signal_lsc_ParamLimits

0x1176,	// (0x0000f688) aid_levels_signal_lsc

0x118d,	// (0x0000f69f) signal_pane_stacon_g1_ParamLimits

0x118d,	// (0x0000f69f) signal_pane_stacon_g1

0x11a1,	// (0x0000f6b3) signal_pane_stacon_g2_ParamLimits

0x11a1,	// (0x0000f6b3) signal_pane_stacon_g2

0x0001,

0xf6c0,	// (0x0001dbd2) signal_pane_stacon_g_ParamLimits

0xf6c0,	// (0x0001dbd2) signal_pane_stacon_g

0x11d6,	// (0x0000f6e8) title_pane_stacon_t1_ParamLimits

0x11d6,	// (0x0000f6e8) title_pane_stacon_t1

0x4401,	// (0x00012913) uni_indicator_pane_stacon_g1

0x440b,	// (0x0001291d) uni_indicator_pane_stacon_g2

0x4415,	// (0x00012927) uni_indicator_pane_stacon_g3

0x441f,	// (0x00012931) uni_indicator_pane_stacon_g4

0x0003,

0xf6cc,	// (0x0001dbde) uni_indicator_pane_stacon_g

0x11fb,	// (0x0000f70d) control_top_pane_stacon_g1

0x1203,	// (0x0000f715) control_top_pane_stacon_t1_ParamLimits

0x1203,	// (0x0000f715) control_top_pane_stacon_t1

0x123a,	// (0x0000f74c) aid_levels_battery_lsc_ParamLimits

0x123a,	// (0x0000f74c) aid_levels_battery_lsc

0x1252,	// (0x0000f764) battery_pane_stacon_g1_ParamLimits

0x1252,	// (0x0000f764) battery_pane_stacon_g1

0x1265,	// (0x0000f777) battery_pane_stacon_g2_ParamLimits

0x1265,	// (0x0000f777) battery_pane_stacon_g2

0x0001,

0xf6d5,	// (0x0001dbe7) battery_pane_stacon_g_ParamLimits

0xf6d5,	// (0x0001dbe7) battery_pane_stacon_g

0x12a3,	// (0x0000f7b5) navi_icon_pane_stacon

0x12b7,	// (0x0000f7c9) navi_navi_pane_stacon

0x12a3,	// (0x0000f7b5) navi_text_pane_stacon

0x11fb,	// (0x0000f70d) control_bottom_pane_stacon_g1

0x12cb,	// (0x0000f7dd) control_bottom_pane_stacon_t1_ParamLimits

0x12cb,	// (0x0000f7dd) control_bottom_pane_stacon_t1

0xd917,	// (0x0001be29) grid_app_pane_ParamLimits

0xd917,	// (0x0001be29) grid_app_pane

0xd94d,	// (0x0001be5f) scroll_pane_cp15_ParamLimits

0xd94d,	// (0x0001be5f) scroll_pane_cp15

0xd966,	// (0x0001be78) cell_app_pane_ParamLimits

0xd966,	// (0x0001be78) cell_app_pane

0xd9ad,	// (0x0001bebf) cell_app_pane_g1_ParamLimits

0xd9ad,	// (0x0001bebf) cell_app_pane_g1

0x44c0,	// (0x000129d2) cell_app_pane_g2_ParamLimits

0x44c0,	// (0x000129d2) cell_app_pane_g2

0x0001,

0xf6da,	// (0x0001dbec) cell_app_pane_g_ParamLimits

0xf6da,	// (0x0001dbec) cell_app_pane_g

0xd9cd,	// (0x0001bedf) cell_app_pane_t1_ParamLimits

0xd9cd,	// (0x0001bedf) cell_app_pane_t1

0x44e3,	// (0x000129f5) grid_highlight_pane_ParamLimits

0x44e3,	// (0x000129f5) grid_highlight_pane

0x405b,	// (0x0001256d) cell_highlight_pane_g1

0x4063,	// (0x00012575) cell_highlight_pane_g2

0x406b,	// (0x0001257d) cell_highlight_pane_g3

0x4073,	// (0x00012585) cell_highlight_pane_g4

0x407b,	// (0x0001258d) cell_highlight_pane_g5

0x4083,	// (0x00012595) cell_highlight_pane_g6

0x408b,	// (0x0001259d) cell_highlight_pane_g7

0x4093,	// (0x000125a5) cell_highlight_pane_g8

0x409b,	// (0x000125ad) cell_highlight_pane_g9

0x307c,	// (0x0001158e) cell_highlight_pane_g10

0x0009,

0xf688,	// (0x0001db9a) cell_highlight_pane_g

0x44f4,	// (0x00012a06) bg_scroll_pane

0x1315,	// (0x0000f827) scroll_handle_pane

0x453b,	// (0x00012a4d) scroll_bg_pane_g1

0x4550,	// (0x00012a62) scroll_bg_pane_g2

0x4568,	// (0x00012a7a) scroll_bg_pane_g3

0x0002,

0xf6df,	// (0x0001dbf1) scroll_bg_pane_g

0x457d,	// (0x00012a8f) scroll_handle_focus_pane_ParamLimits

0x457d,	// (0x00012a8f) scroll_handle_focus_pane

0x453b,	// (0x00012a4d) scroll_handle_pane_g1

0x458a,	// (0x00012a9c) scroll_handle_pane_g2

0x4568,	// (0x00012a7a) scroll_handle_pane_g3

0x0002,

0xf6e6,	// (0x0001dbf8) scroll_handle_pane_g

0x413a,	// (0x0001264c) bg_popup_sub_pane_cp21_ParamLimits

0x413a,	// (0x0001264c) bg_popup_sub_pane_cp21

0x459e,	// (0x00012ab0) popup_fep_japan_predictive_window_t1_ParamLimits

0x459e,	// (0x00012ab0) popup_fep_japan_predictive_window_t1

0x45b8,	// (0x00012aca) popup_fep_japan_predictive_window_t2_ParamLimits

0x45b8,	// (0x00012aca) popup_fep_japan_predictive_window_t2

0x45eb,	// (0x00012afd) popup_fep_japan_predictive_window_t3_ParamLimits

0x45eb,	// (0x00012afd) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ed,	// (0x0001dbff) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ed,	// (0x0001dbff) popup_fep_japan_predictive_window_t

0x3086,	// (0x00011598) bg_popup_sub_pane_cp23

0x4622,	// (0x00012b34) listscroll_japin_cand_pane

0x462a,	// (0x00012b3c) popup_fep_japan_candidate_window_t1

0x4638,	// (0x00012b4a) candidate_pane_ParamLimits

0x4638,	// (0x00012b4a) candidate_pane

0x464a,	// (0x00012b5c) scroll_pane_cp30

0x4652,	// (0x00012b64) list_single_popup_jap_candidate_pane_ParamLimits

0x4652,	// (0x00012b64) list_single_popup_jap_candidate_pane

0x3086,	// (0x00011598) list_highlight_pane_cp30

0x4666,	// (0x00012b78) list_single_popup_jap_candidate_pane_t1

0x4675,	// (0x00012b87) level_1_signal

0x4682,	// (0x00012b94) level_2_signal

0x468f,	// (0x00012ba1) level_3_signal

0x469c,	// (0x00012bae) level_4_signal

0x46a9,	// (0x00012bbb) level_5_signal

0x46b6,	// (0x00012bc8) level_6_signal

0x46c3,	// (0x00012bd5) level_7_signal

0x4675,	// (0x00012b87) level_1_battery

0x4682,	// (0x00012b94) level_2_battery

0x468f,	// (0x00012ba1) level_3_battery

0x469c,	// (0x00012bae) level_4_battery

0x46a9,	// (0x00012bbb) level_5_battery

0x46b6,	// (0x00012bc8) level_6_battery

0x46c3,	// (0x00012bd5) level_7_battery

0x46e8,	// (0x00012bfa) list_menu_pane_ParamLimits

0x46e8,	// (0x00012bfa) list_menu_pane

0x46fe,	// (0x00012c10) scroll_pane_cp25_ParamLimits

0x46fe,	// (0x00012c10) scroll_pane_cp25

0x4717,	// (0x00012c29) list_double2_graphic_pane_cp2_ParamLimits

0x4717,	// (0x00012c29) list_double2_graphic_pane_cp2

0x4717,	// (0x00012c29) list_double2_large_graphic_pane_cp2_ParamLimits

0x4717,	// (0x00012c29) list_double2_large_graphic_pane_cp2

0x4717,	// (0x00012c29) list_double2_pane_cp2_ParamLimits

0x4717,	// (0x00012c29) list_double2_pane_cp2

0x4717,	// (0x00012c29) list_double_graphic_pane_cp2_ParamLimits

0x4717,	// (0x00012c29) list_double_graphic_pane_cp2

0x4717,	// (0x00012c29) list_double_large_graphic_pane_cp2_ParamLimits

0x4717,	// (0x00012c29) list_double_large_graphic_pane_cp2

0x4717,	// (0x00012c29) list_double_number_pane_cp2_ParamLimits

0x4717,	// (0x00012c29) list_double_number_pane_cp2

0x4717,	// (0x00012c29) list_double_pane_cp2_ParamLimits

0x4717,	// (0x00012c29) list_double_pane_cp2

0xd9f5,	// (0x0001bf07) list_single_2graphic_pane_cp2_ParamLimits

0xd9f5,	// (0x0001bf07) list_single_2graphic_pane_cp2

0xd9f5,	// (0x0001bf07) list_single_graphic_heading_pane_cp2_ParamLimits

0xd9f5,	// (0x0001bf07) list_single_graphic_heading_pane_cp2

0xd9f5,	// (0x0001bf07) list_single_graphic_pane_cp2_ParamLimits

0xd9f5,	// (0x0001bf07) list_single_graphic_pane_cp2

0xd9f5,	// (0x0001bf07) list_single_heading_pane_cp2_ParamLimits

0xd9f5,	// (0x0001bf07) list_single_heading_pane_cp2

0x4751,	// (0x00012c63) list_single_large_graphic_pane_cp2_ParamLimits

0x4751,	// (0x00012c63) list_single_large_graphic_pane_cp2

0xd9f5,	// (0x0001bf07) list_single_number_heading_pane_cp2_ParamLimits

0xd9f5,	// (0x0001bf07) list_single_number_heading_pane_cp2

0xd9f5,	// (0x0001bf07) list_single_number_pane_cp2_ParamLimits

0xd9f5,	// (0x0001bf07) list_single_number_pane_cp2

0xd9f5,	// (0x0001bf07) list_single_pane_cp2_ParamLimits

0xd9f5,	// (0x0001bf07) list_single_pane_cp2

0x47cc,	// (0x00012cde) bg_popup_sub_pane_cp22

0x13c4,	// (0x0000f8d6) popup_side_volume_key_window_g1

0x13e8,	// (0x0000f8fa) popup_side_volume_key_window_t1

0x1404,	// (0x0000f916) volume_small_pane_cp1

0x33fb,	// (0x0001190d) bg_popup_sub_pane_cp24_ParamLimits

0x33fb,	// (0x0001190d) bg_popup_sub_pane_cp24

0x47e2,	// (0x00012cf4) fep_china_uni_candidate_pane_ParamLimits

0x47e2,	// (0x00012cf4) fep_china_uni_candidate_pane

0x47f6,	// (0x00012d08) fep_china_uni_entry_pane

0x4806,	// (0x00012d18) popup_fep_china_uni_window_g1

0x4822,	// (0x00012d34) fep_china_uni_entry_pane_g1

0x482a,	// (0x00012d3c) fep_china_uni_entry_pane_g2

0x0001,

0xf71e,	// (0x0001dc30) fep_china_uni_entry_pane_g

0x4832,	// (0x00012d44) fep_entry_item_pane

0x483c,	// (0x00012d4e) fep_candidate_item_pane

0x4844,	// (0x00012d56) fep_china_uni_candidate_pane_g1

0x484c,	// (0x00012d5e) fep_china_uni_candidate_pane_g2

0x4854,	// (0x00012d66) fep_china_uni_candidate_pane_g3

0x485c,	// (0x00012d6e) fep_china_uni_candidate_pane_g4

0x0003,

0xf723,	// (0x0001dc35) fep_china_uni_candidate_pane_g

0x307c,	// (0x0001158e) fep_entry_item_pane_g1

0x4864,	// (0x00012d76) fep_entry_item_pane_t1_ParamLimits

0x4864,	// (0x00012d76) fep_entry_item_pane_t1

0x487a,	// (0x00012d8c) fep_candidate_item_pane_t1_ParamLimits

0x487a,	// (0x00012d8c) fep_candidate_item_pane_t1

0x488f,	// (0x00012da1) fep_candidate_item_pane_t2_ParamLimits

0x488f,	// (0x00012da1) fep_candidate_item_pane_t2

0x0001,

0xf72c,	// (0x0001dc3e) fep_candidate_item_pane_t_ParamLimits

0xf72c,	// (0x0001dc3e) fep_candidate_item_pane_t

0x3166,	// (0x00011678) list_highlight_pane_cp31_ParamLimits

0x3166,	// (0x00011678) list_highlight_pane_cp31

0x48a1,	// (0x00012db3) level_1_signal_lsc

0x48aa,	// (0x00012dbc) level_2_signal_lsc

0x48b3,	// (0x00012dc5) level_3_signal_lsc

0x48bc,	// (0x00012dce) level_4_signal_lsc

0x48c5,	// (0x00012dd7) level_5_signal_lsc

0x48ce,	// (0x00012de0) level_6_signal_lsc

0x48d7,	// (0x00012de9) level_7_signal_lsc

0x48d7,	// (0x00012de9) level_1_battery_lsc

0x48e0,	// (0x00012df2) level_2_battery_lsc

0x48e9,	// (0x00012dfb) level_3_battery_lsc

0x48f2,	// (0x00012e04) level_4_battery_lsc

0x48fb,	// (0x00012e0d) level_5_battery_lsc

0x4904,	// (0x00012e16) level_6_battery_lsc

0x48a1,	// (0x00012db3) level_7_battery_lsc

0x490d,	// (0x00012e1f) scroll_handle_focus_pane_g1

0x4916,	// (0x00012e28) scroll_handle_focus_pane_g2

0x491f,	// (0x00012e31) scroll_handle_focus_pane_g3

0x0002,

0xf731,	// (0x0001dc43) scroll_handle_focus_pane_g

0x4928,	// (0x00012e3a) list_single_2graphic_pane_g1_ParamLimits

0x4928,	// (0x00012e3a) list_single_2graphic_pane_g1

0xd3bd,	// (0x0001b8cf) list_single_2graphic_pane_g2_ParamLimits

0xd3bd,	// (0x0001b8cf) list_single_2graphic_pane_g2

0x3996,	// (0x00011ea8) list_single_2graphic_pane_g3_ParamLimits

0x3996,	// (0x00011ea8) list_single_2graphic_pane_g3

0x4934,	// (0x00012e46) list_single_2graphic_pane_g4_ParamLimits

0x4934,	// (0x00012e46) list_single_2graphic_pane_g4

0x0003,

0xf738,	// (0x0001dc4a) list_single_2graphic_pane_g_ParamLimits

0xf738,	// (0x0001dc4a) list_single_2graphic_pane_g

0x4945,	// (0x00012e57) list_single_2graphic_pane_t1_ParamLimits

0x4945,	// (0x00012e57) list_single_2graphic_pane_t1

0xda83,	// (0x0001bf95) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xda83,	// (0x0001bf95) list_double2_graphic_large_graphic_pane_g1

0xd588,	// (0x0001ba9a) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd588,	// (0x0001ba9a) list_double2_graphic_large_graphic_pane_g2

0xd4ce,	// (0x0001b9e0) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd4ce,	// (0x0001b9e0) list_double2_graphic_large_graphic_pane_g3

0xda95,	// (0x0001bfa7) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xda95,	// (0x0001bfa7) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf741,	// (0x0001dc53) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf741,	// (0x0001dc53) list_double2_graphic_large_graphic_pane_g

0xdaa1,	// (0x0001bfb3) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xdaa1,	// (0x0001bfb3) list_double2_graphic_large_graphic_pane_t1

0xdab7,	// (0x0001bfc9) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xdab7,	// (0x0001bfc9) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74a,	// (0x0001dc5c) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74a,	// (0x0001dc5c) list_double2_graphic_large_graphic_pane_t

0x4af7,	// (0x00013009) popup_fast_swap_window_ParamLimits

0x4af7,	// (0x00013009) popup_fast_swap_window

0x4b13,	// (0x00013025) popup_side_volume_key_window

0x4b2d,	// (0x0001303f) stacon_top_pane

0x4b37,	// (0x00013049) status_pane_ParamLimits

0x4b37,	// (0x00013049) status_pane

0x4b2d,	// (0x0001303f) status_small_pane

0x3086,	// (0x00011598) control_pane

0x3086,	// (0x00011598) stacon_bottom_pane

0x3e4b,	// (0x0001235d) scroll_pane_cp121

0x3e42,	// (0x00012354) set_content_pane

0x49d2,	// (0x00012ee4) bg_active_tab_pane_g1_cp1

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp1

0x49db,	// (0x00012eed) bg_active_tab_pane_g3_cp1

0x49d2,	// (0x00012ee4) bg_passive_tab_pane_g1_cp1

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp1

0x49db,	// (0x00012eed) bg_passive_tab_pane_g3_cp1

0xdac9,	// (0x0001bfdb) bg_active_tab_pane_g1_cp2

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp2

0xdad2,	// (0x0001bfe4) bg_active_tab_pane_g3_cp2

0xdac9,	// (0x0001bfdb) bg_passive_tab_pane_g1_cp2

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp2

0xdad2,	// (0x0001bfe4) bg_passive_tab_pane_g3_cp2

0xdadb,	// (0x0001bfed) bg_active_tab_pane_g1_cp3

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp3

0xdae4,	// (0x0001bff6) bg_active_tab_pane_g3_cp3

0xdadb,	// (0x0001bfed) bg_passive_tab_pane_g1_cp3

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp3

0xdae4,	// (0x0001bff6) bg_passive_tab_pane_g3_cp3

0xdaed,	// (0x0001bfff) bg_active_tab_pane_g1_cp4

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp4

0xdaf6,	// (0x0001c008) bg_active_tab_pane_g3_cp4

0xdaed,	// (0x0001bfff) bg_passive_tab_pane_g1_cp4

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp4

0xdaf6,	// (0x0001c008) bg_passive_tab_pane_g3_cp4

0x4a4a,	// (0x00012f5c) bg_active_tab_pane_g1_cp5

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp5

0x4a53,	// (0x00012f65) bg_active_tab_pane_g3_cp5

0x4a4a,	// (0x00012f5c) bg_passive_tab_pane_g1_cp5

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp5

0x4a53,	// (0x00012f65) bg_passive_tab_pane_g3_cp5

0x736a,	// (0x0001587c) list_set_graphic_pane_ParamLimits

0x736a,	// (0x0001587c) list_set_graphic_pane

0x3086,	// (0x00011598) bg_set_opt_pane_cp4

0x4a7c,	// (0x00012f8e) list_set_graphic_pane_g1_ParamLimits

0x4a7c,	// (0x00012f8e) list_set_graphic_pane_g1

0x4a88,	// (0x00012f9a) list_set_graphic_pane_g2_ParamLimits

0x4a88,	// (0x00012f9a) list_set_graphic_pane_g2

0x0001,

0xf74f,	// (0x0001dc61) list_set_graphic_pane_g_ParamLimits

0xf74f,	// (0x0001dc61) list_set_graphic_pane_g

0x0009,

0xfad7,	// (0x0001dfe9) volume_small_pane_cp_g

0xdaff,	// (0x0001c011) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xdaff,	// (0x0001c011) list_double2_large_graphic_pane_g1_cp2

0xdb0d,	// (0x0001c01f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xdb0d,	// (0x0001c01f) list_double2_large_graphic_pane_g2_cp2

0x4ac7,	// (0x00012fd9) list_double2_large_graphic_pane_g3_cp2

0x4acf,	// (0x00012fe1) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4acf,	// (0x00012fe1) list_double2_large_graphic_pane_t1_cp2

0x4ae5,	// (0x00012ff7) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x4ae5,	// (0x00012ff7) list_double2_large_graphic_pane_t2_cp2

0xe298,	// (0x0001c7aa) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe298,	// (0x0001c7aa) list_double_large_graphic_pane_g1_cp2

0xe2ab,	// (0x0001c7bd) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe2ab,	// (0x0001c7bd) list_double_large_graphic_pane_g2_cp2

0x4c53,	// (0x00013165) list_double_large_graphic_pane_g3_cp2

0x67d0,	// (0x00014ce2) list_double_large_graphic_pane_g4_cp

0x67d8,	// (0x00014cea) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x67d8,	// (0x00014cea) list_double_large_graphic_pane_t1_cp2

0x67ef,	// (0x00014d01) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x67ef,	// (0x00014d01) list_double_large_graphic_pane_t2_cp2

0xdb1e,	// (0x0001c030) list_double2_graphic_pane_g1_cp2_ParamLimits

0xdb1e,	// (0x0001c030) list_double2_graphic_pane_g1_cp2

0xdb2c,	// (0x0001c03e) list_double2_graphic_pane_g2_cp2_ParamLimits

0xdb2c,	// (0x0001c03e) list_double2_graphic_pane_g2_cp2

0xdb3d,	// (0x0001c04f) list_double2_graphic_pane_g3_cp2

0x4b6e,	// (0x00013080) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4b6e,	// (0x00013080) list_double2_graphic_pane_t1_cp2

0x4b84,	// (0x00013096) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4b84,	// (0x00013096) list_double2_graphic_pane_t2_cp2

0x4b96,	// (0x000130a8) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4b96,	// (0x000130a8) list_single_number_heading_pane_g1_cp2

0x4ba2,	// (0x000130b4) list_single_number_heading_pane_g2_cp2

0x4baa,	// (0x000130bc) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4baa,	// (0x000130bc) list_single_number_heading_pane_t1_cp2

0xdb47,	// (0x0001c059) list_single_number_heading_pane_t2_cp2_ParamLimits

0xdb47,	// (0x0001c059) list_single_number_heading_pane_t2_cp2

0x4bd2,	// (0x000130e4) list_single_number_heading_pane_t3_cp2_ParamLimits

0x4bd2,	// (0x000130e4) list_single_number_heading_pane_t3_cp2

0x4b96,	// (0x000130a8) list_single_heading_pane_g1_cp2_ParamLimits

0x4b96,	// (0x000130a8) list_single_heading_pane_g1_cp2

0x4ba2,	// (0x000130b4) list_single_heading_pane_g2_cp2

0x4baa,	// (0x000130bc) list_single_heading_pane_t1_cp2_ParamLimits

0x4baa,	// (0x000130bc) list_single_heading_pane_t1_cp2

0xe284,	// (0x0001c796) list_single_heading_pane_t2_cp2_ParamLimits

0xe284,	// (0x0001c796) list_single_heading_pane_t2_cp2

0x6500,	// (0x00014a12) list_double_graphic_pane_g1_cp2_ParamLimits

0x6500,	// (0x00014a12) list_double_graphic_pane_g1_cp2

0x650c,	// (0x00014a1e) list_double_graphic_pane_g2_cp2_ParamLimits

0x650c,	// (0x00014a1e) list_double_graphic_pane_g2_cp2

0x651b,	// (0x00014a2d) list_double_graphic_pane_g3_cp2

0x6523,	// (0x00014a35) list_double_graphic_pane_t1_cp2_ParamLimits

0x6523,	// (0x00014a35) list_double_graphic_pane_t1_cp2

0x6539,	// (0x00014a4b) list_double_graphic_pane_t2_cp2_ParamLimits

0x6539,	// (0x00014a4b) list_double_graphic_pane_t2_cp2

0x4c47,	// (0x00013159) list_double_number_pane_g1_cp2_ParamLimits

0x4c47,	// (0x00013159) list_double_number_pane_g1_cp2

0x4c53,	// (0x00013165) list_double_number_pane_g2_cp2

0xe25e,	// (0x0001c770) list_double_number_pane_t1_cp2_ParamLimits

0xe25e,	// (0x0001c770) list_double_number_pane_t1_cp2

0x64d8,	// (0x000149ea) list_double_number_pane_t2_cp2_ParamLimits

0x64d8,	// (0x000149ea) list_double_number_pane_t2_cp2

0x64ee,	// (0x00014a00) list_double_number_pane_t3_cp2_ParamLimits

0x64ee,	// (0x00014a00) list_double_number_pane_t3_cp2

0xe1ac,	// (0x0001c6be) list_single_graphic_pane_g1_cp2_ParamLimits

0xe1ac,	// (0x0001c6be) list_single_graphic_pane_g1_cp2

0x398a,	// (0x00011e9c) list_single_graphic_pane_g2_cp2_ParamLimits

0x398a,	// (0x00011e9c) list_single_graphic_pane_g2_cp2

0x4cab,	// (0x000131bd) list_single_graphic_pane_g3_cp2

0x6383,	// (0x00014895) list_single_graphic_pane_t1_cp2_ParamLimits

0x6383,	// (0x00014895) list_single_graphic_pane_t1_cp2

0x398a,	// (0x00011e9c) list_single_number_pane_g1_cp2_ParamLimits

0x398a,	// (0x00011e9c) list_single_number_pane_g1_cp2

0x4cab,	// (0x000131bd) list_single_number_pane_g2_cp2

0x6383,	// (0x00014895) list_single_number_pane_t1_cp2_ParamLimits

0x6383,	// (0x00014895) list_single_number_pane_t1_cp2

0xe198,	// (0x0001c6aa) list_single_number_pane_t2_cp2_ParamLimits

0xe198,	// (0x0001c6aa) list_single_number_pane_t2_cp2

0xdb0d,	// (0x0001c01f) list_double2_pane_g1_cp2_ParamLimits

0xdb0d,	// (0x0001c01f) list_double2_pane_g1_cp2

0x4ac7,	// (0x00012fd9) list_double2_pane_g2_cp2

0x4c1f,	// (0x00013131) list_double2_pane_t1_cp2_ParamLimits

0x4c1f,	// (0x00013131) list_double2_pane_t1_cp2

0x4c35,	// (0x00013147) list_double2_pane_t2_cp2_ParamLimits

0x4c35,	// (0x00013147) list_double2_pane_t2_cp2

0x4c47,	// (0x00013159) list_double_pane_g1_cp2_ParamLimits

0x4c47,	// (0x00013159) list_double_pane_g1_cp2

0x4c53,	// (0x00013165) list_double_pane_g2_cp2

0x4c5b,	// (0x0001316d) list_double_pane_t1_cp2_ParamLimits

0x4c5b,	// (0x0001316d) list_double_pane_t1_cp2

0x4c71,	// (0x00013183) list_double_pane_t2_cp2_ParamLimits

0x4c71,	// (0x00013183) list_double_pane_t2_cp2

0x4c9b,	// (0x000131ad) list_single_pane_cp2_g3

0x398a,	// (0x00011e9c) list_single_pane_g1_cp2_ParamLimits

0x398a,	// (0x00011e9c) list_single_pane_g1_cp2

0x4cab,	// (0x000131bd) list_single_pane_g2_cp2

0x4cb3,	// (0x000131c5) list_single_pane_t1_cp2_ParamLimits

0x4cb3,	// (0x000131c5) list_single_pane_t1_cp2

0xdb73,	// (0x0001c085) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xdb73,	// (0x0001c085) list_single_large_graphic_pane_g1_cp2

0x4cd7,	// (0x000131e9) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4cd7,	// (0x000131e9) list_single_large_graphic_pane_g2_cp2

0x4ce3,	// (0x000131f5) list_single_large_graphic_pane_g3_cp2

0x4ceb,	// (0x000131fd) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4ceb,	// (0x000131fd) list_single_large_graphic_pane_g4_cp1

0x4d05,	// (0x00013217) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4d05,	// (0x00013217) list_single_large_graphic_pane_t1_cp2

0x634f,	// (0x00014861) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x634f,	// (0x00014861) list_single_graphic_heading_pane_g1_cp2

0xe173,	// (0x0001c685) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe173,	// (0x0001c685) list_single_graphic_heading_pane_g4_cp2

0x4cab,	// (0x000131bd) list_single_graphic_heading_pane_g5_cp2

0x635b,	// (0x0001486d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x635b,	// (0x0001486d) list_single_graphic_heading_pane_t1_cp2

0xe184,	// (0x0001c696) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe184,	// (0x0001c696) list_single_graphic_heading_pane_t2_cp2

0x6310,	// (0x00014822) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6310,	// (0x00014822) list_single_2graphic_pane_g1_cp2

0xe173,	// (0x0001c685) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe173,	// (0x0001c685) list_single_2graphic_pane_g2_cp2

0x4cab,	// (0x000131bd) list_single_2graphic_pane_g3_cp2

0x632d,	// (0x0001483f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x632d,	// (0x0001483f) list_single_2graphic_pane_g4_cp2

0x6339,	// (0x0001484b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x6339,	// (0x0001484b) list_single_2graphic_pane_t1_cp2

0x307c,	// (0x0001158e) list_highlight_pane_g10_cp1

0x5ee8,	// (0x000143fa) list_highlight_pane_g1_cp1

0x5ef0,	// (0x00014402) list_highlight_pane_g2_cp1

0x5ef8,	// (0x0001440a) list_highlight_pane_g3_cp1

0x5f00,	// (0x00014412) list_highlight_pane_g4_cp1

0x5f08,	// (0x0001441a) list_highlight_pane_g5_cp1

0x5f10,	// (0x00014422) list_highlight_pane_g6_cp1

0x5f18,	// (0x0001442a) list_highlight_pane_g7_cp1

0x5f20,	// (0x00014432) list_highlight_pane_g8_cp1

0x5f28,	// (0x0001443a) list_highlight_pane_g9_cp1

0xe135,	// (0x0001c647) form_field_slider_pane_t3

0xe145,	// (0x0001c657) form_field_slider_pane_t4

0x5e1c,	// (0x0001432e) slider_form_pane_ParamLimits

0x5e1c,	// (0x0001432e) slider_form_pane

0x3086,	// (0x00011598) control_abbreviations

0x3086,	// (0x00011598) control_conventions

0x3086,	// (0x00011598) control_definitions

0x3086,	// (0x00011598) format_table_attribute

0x6602,	// (0x00014b14) bg_popup_preview_window_pane_g9

0x3086,	// (0x00011598) format_table_data2

0x3086,	// (0x00011598) format_table_data3

0x3086,	// (0x00011598) format_table_data_example

0x0008,

0x3086,	// (0x00011598) intro_purpose

0xf8e6,	// (0x0001ddf8) bg_popup_preview_window_pane_g

0x3086,	// (0x00011598) texts_category

0x3086,	// (0x00011598) texts_graphics

0x4d1b,	// (0x0001322d) text_digital

0x4d2a,	// (0x0001323c) text_primary

0x4d39,	// (0x0001324b) text_primary_small

0x4d48,	// (0x0001325a) text_secondary

0x4d57,	// (0x00013269) text_title

0x6e22,	// (0x00015334) bg_passive_tab_pane_g1_cp3_srt

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp3_srt

0x6e2b,	// (0x0001533d) bg_passive_tab_pane_g3_cp3_srt

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp3_srt_ParamLimits

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp3_srt

0x6e34,	// (0x00015346) tabs_4_active_pane_srt_g1

0xe571,	// (0x0001ca83) tabs_4_active_pane_srt_t1_ParamLimits

0xe571,	// (0x0001ca83) tabs_4_active_pane_srt_t1

0x6e22,	// (0x00015334) bg_active_tab_pane_g1_cp3_copy1

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp3_copy1

0x6e2b,	// (0x0001533d) bg_active_tab_pane_g3_cp3_copy1

0x3166,	// (0x00011678) tabs_2_long_active_pane_srt_ParamLimits

0x3166,	// (0x00011678) tabs_2_long_active_pane_srt

0x3166,	// (0x00011678) tabs_2_long_passive_pane_srt_ParamLimits

0x3166,	// (0x00011678) tabs_2_long_passive_pane_srt

0x50aa,	// (0x000135bc) bg_passive_tab_pane_cp4_srt_ParamLimits

0x50aa,	// (0x000135bc) bg_passive_tab_pane_cp4_srt

0x6a57,	// (0x00014f69) bg_passive_tab_pane_g1_cp4_srt

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp4_srt

0x6a60,	// (0x00014f72) bg_passive_tab_pane_g3_cp4_srt

0x3166,	// (0x00011678) bg_active_tab_pane_cp4_srt_ParamLimits

0x3166,	// (0x00011678) bg_active_tab_pane_cp4_srt

0xe34c,	// (0x0001c85e) tabs_2_long_active_pane_srt_t1_ParamLimits

0xe34c,	// (0x0001c85e) tabs_2_long_active_pane_srt_t1

0x6a57,	// (0x00014f69) bg_active_tab_pane_g1_cp4_srt

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp4_srt

0x6a60,	// (0x00014f72) bg_active_tab_pane_g3_cp4_srt

0x33fb,	// (0x0001190d) tabs_3_long_active_pane_srt_ParamLimits

0x33fb,	// (0x0001190d) tabs_3_long_active_pane_srt

0x33fb,	// (0x0001190d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x33fb,	// (0x0001190d) tabs_3_long_passive_pane_cp_srt

0x33fb,	// (0x0001190d) tabs_3_long_passive_pane_srt_ParamLimits

0x33fb,	// (0x0001190d) tabs_3_long_passive_pane_srt

0x50aa,	// (0x000135bc) bg_passive_tab_pane_cp5_srt_ParamLimits

0x50aa,	// (0x000135bc) bg_passive_tab_pane_cp5_srt

0x4a4a,	// (0x00012f5c) bg_passive_tab_pane_g1_cp5_srt

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp5_srt

0x4a53,	// (0x00012f65) bg_passive_tab_pane_g3_cp5_srt

0x3166,	// (0x00011678) bg_active_tab_pane_cp5_srt_ParamLimits

0x3166,	// (0x00011678) bg_active_tab_pane_cp5_srt

0xe336,	// (0x0001c848) tabs_3_long_active_pane_srt_t1_ParamLimits

0xe336,	// (0x0001c848) tabs_3_long_active_pane_srt_t1

0x4a4a,	// (0x00012f5c) bg_active_tab_pane_g1_cp5_srt

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp5_srt

0x4a53,	// (0x00012f65) bg_active_tab_pane_g3_cp5_srt

0x6a37,	// (0x00014f49) navi_text_pane_srt_t1

0x6a2f,	// (0x00014f41) navi_icon_pane_srt_g1

0x4f1a,	// (0x0001342c) midp_editing_number_pane_srt

0x4d66,	// (0x00013278) midp_ticker_pane_srt

0x4f22,	// (0x00013434) midp_ticker_pane_srt_g1

0x4f2a,	// (0x0001343c) midp_ticker_pane_srt_g2

0x0001,

0xf76e,	// (0x0001dc80) midp_ticker_pane_srt_g

0x4f32,	// (0x00013444) midp_ticker_pane_srt_t1

0x6a20,	// (0x00014f32) midp_editing_number_pane_t1_copy1

0x50aa,	// (0x000135bc) listscroll_midp_pane

0x50aa,	// (0x000135bc) midp_form_pane

0x4dd2,	// (0x000132e4) midp_info_popup_window_ParamLimits

0x4dd2,	// (0x000132e4) midp_info_popup_window

0x413a,	// (0x0001264c) bg_popup_sub_pane_cp50_ParamLimits

0x413a,	// (0x0001264c) bg_popup_sub_pane_cp50

0x5b1d,	// (0x0001402f) listscroll_midp_info_pane_ParamLimits

0x5b1d,	// (0x0001402f) listscroll_midp_info_pane

0x5b05,	// (0x00014017) listscroll_form_midp_pane_ParamLimits

0x5b05,	// (0x00014017) listscroll_form_midp_pane

0x5b11,	// (0x00014023) scroll_bar_cp050

0xe129,	// (0x0001c63b) list_midp_pane

0x7b2d,	// (0x0001603f) signal_pane_g2_cp

0x5a1f,	// (0x00013f31) listscroll_midp_info_pane_t1_ParamLimits

0x5a1f,	// (0x00013f31) listscroll_midp_info_pane_t1

0x5a37,	// (0x00013f49) listscroll_midp_info_pane_t2_ParamLimits

0x5a37,	// (0x00013f49) listscroll_midp_info_pane_t2

0x5a75,	// (0x00013f87) listscroll_midp_info_pane_t3_ParamLimits

0x5a75,	// (0x00013f87) listscroll_midp_info_pane_t3

0x5aaf,	// (0x00013fc1) listscroll_midp_info_pane_t4_ParamLimits

0x5aaf,	// (0x00013fc1) listscroll_midp_info_pane_t4

0x0003,

0xf821,	// (0x0001dd33) listscroll_midp_info_pane_t_ParamLimits

0xf821,	// (0x0001dd33) listscroll_midp_info_pane_t

0x41fc,	// (0x0001270e) scroll_pane_cp21

0x59c1,	// (0x00013ed3) form_midp_field_choice_group_pane

0x59ca,	// (0x00013edc) form_midp_field_text_pane

0x5a05,	// (0x00013f17) form_midp_field_time_pane

0x5a0d,	// (0x00013f1f) form_midp_gauge_slider_pane

0x5a16,	// (0x00013f28) form_midp_gauge_wait_pane

0x3086,	// (0x00011598) form_midp_image_pane

0xe10f,	// (0x0001c621) list_single_midp_pane_ParamLimits

0xe10f,	// (0x0001c621) list_single_midp_pane

0xe0ec,	// (0x0001c5fe) form_midp_field_text_pane_t1

0x56e8,	// (0x00013bfa) input_focus_pane_cp050

0x597a,	// (0x00013e8c) list_midp_form_text_pane

0x590e,	// (0x00013e20) form_midp_field_choice_group_pane_t1

0x591c,	// (0x00013e2e) input_focus_pane_cp051

0x5930,	// (0x00013e42) list_midp_choice_pane

0x3086,	// (0x00011598) status_idle_pane

0x58f2,	// (0x00013e04) form_midp_field_time_pane_t1

0x307c,	// (0x0001158e) wait_anim_pane_g2_copy1

0x5900,	// (0x00013e12) form_midp_field_time_pane_t2

0x0001,

0x4e82,	// (0x00013394) aid_navinavi_width_2_pane

0xf81c,	// (0x0001dd2e) form_midp_field_time_pane_t

0x3086,	// (0x00011598) input_focus_pane_cp052

0x3086,	// (0x00011598) bg_input_focus_pane_cp040

0x58b2,	// (0x00013dc4) form_midp_gauge_slider_pane_t1

0x58c0,	// (0x00013dd2) form_midp_gauge_slider_pane_t2

0xe0cc,	// (0x0001c5de) form_midp_gauge_slider_pane_t3

0xe0dc,	// (0x0001c5ee) form_midp_gauge_slider_pane_t4

0x0003,

0xf813,	// (0x0001dd25) form_midp_gauge_slider_pane_t

0x58ea,	// (0x00013dfc) form_midp_slider_pane

0x3166,	// (0x00011678) bg_input_focus_pane_cp041_ParamLimits

0x3166,	// (0x00011678) bg_input_focus_pane_cp041

0x587f,	// (0x00013d91) form_midp_gauge_wait_pane_t1_ParamLimits

0x587f,	// (0x00013d91) form_midp_gauge_wait_pane_t1

0x5891,	// (0x00013da3) form_midp_gauge_wait_pane_t2_ParamLimits

0x5891,	// (0x00013da3) form_midp_gauge_wait_pane_t2

0x0001,

0xf80e,	// (0x0001dd20) form_midp_gauge_wait_pane_t_ParamLimits

0xf80e,	// (0x0001dd20) form_midp_gauge_wait_pane_t

0x58a3,	// (0x00013db5) form_midp_wait_pane_ParamLimits

0x58a3,	// (0x00013db5) form_midp_wait_pane

0x5849,	// (0x00013d5b) form_midp_image_pane_g1

0x5852,	// (0x00013d64) form_midp_image_pane_t1

0x5861,	// (0x00013d73) form_midp_image_pane_t2

0x5870,	// (0x00013d82) form_midp_image_pane_t3

0x0002,

0xf807,	// (0x0001dd19) form_midp_image_pane_t

0x5831,	// (0x00013d43) list_single_midp_pane_g1

0x583a,	// (0x00013d4c) list_single_midp_pane_t1

0xe0b6,	// (0x0001c5c8) list_midp_form_item_pane_ParamLimits

0xe0b6,	// (0x0001c5c8) list_midp_form_item_pane

0x4e2a,	// (0x0001333c) list_midp_form_item_pane_t1

0x4e39,	// (0x0001334b) midp_ticker_pane_g1

0x4e45,	// (0x00013357) midp_ticker_pane_g2

0x0001,

0xf754,	// (0x0001dc66) midp_ticker_pane_g

0x4e51,	// (0x00013363) midp_ticker_pane_t1

0x6c9a,	// (0x000151ac) midp_editing_number_pane_t1

0x6c78,	// (0x0001518a) midp_editing_number_pane

0x6c87,	// (0x00015199) midp_ticker_pane

0x69fe,	// (0x00014f10) ai_message_heading_pane

0x3086,	// (0x00011598) bg_popup_window_pane_cp14

0x6a06,	// (0x00014f18) listscroll_ai_message_pane

0x6988,	// (0x00014e9a) ai_message_heading_pane_g1_ParamLimits

0x6988,	// (0x00014e9a) ai_message_heading_pane_g1

0x6994,	// (0x00014ea6) ai_message_heading_pane_g2_ParamLimits

0x6994,	// (0x00014ea6) ai_message_heading_pane_g2

0x69a0,	// (0x00014eb2) ai_message_heading_pane_g3_ParamLimits

0x69a0,	// (0x00014eb2) ai_message_heading_pane_g3

0x69ac,	// (0x00014ebe) ai_message_heading_pane_g4_ParamLimits

0x69ac,	// (0x00014ebe) ai_message_heading_pane_g4

0x0003,

0xf948,	// (0x0001de5a) ai_message_heading_pane_g_ParamLimits

0xf948,	// (0x0001de5a) ai_message_heading_pane_g

0x69b8,	// (0x00014eca) ai_message_heading_pane_t1_ParamLimits

0x69b8,	// (0x00014eca) ai_message_heading_pane_t1

0x69d2,	// (0x00014ee4) ai_message_heading_pane_t2_ParamLimits

0x69d2,	// (0x00014ee4) ai_message_heading_pane_t2

0x0001,

0xf951,	// (0x0001de63) ai_message_heading_pane_t_ParamLimits

0xf951,	// (0x0001de63) ai_message_heading_pane_t

0x69e4,	// (0x00014ef6) bg_popup_heading_pane_cp1_ParamLimits

0x69e4,	// (0x00014ef6) bg_popup_heading_pane_cp1

0x6976,	// (0x00014e88) list_ai_message_pane_ParamLimits

0x6976,	// (0x00014e88) list_ai_message_pane

0x41fc,	// (0x0001270e) scroll_pane_cp10

0x6912,	// (0x00014e24) list_ai_message_pane_g1

0x691a,	// (0x00014e2c) list_ai_message_pane_g2

0x0001,

0xf925,	// (0x0001de37) list_ai_message_pane_g

0x6922,	// (0x00014e34) list_ai_message_pane_t1_ParamLimits

0x6922,	// (0x00014e34) list_ai_message_pane_t1

0x6937,	// (0x00014e49) list_ai_message_pane_t2_ParamLimits

0x6937,	// (0x00014e49) list_ai_message_pane_t2

0x694c,	// (0x00014e5e) list_ai_message_pane_t3_ParamLimits

0x694c,	// (0x00014e5e) list_ai_message_pane_t3

0x6961,	// (0x00014e73) list_ai_message_pane_t4_ParamLimits

0x6961,	// (0x00014e73) list_ai_message_pane_t4

0x0003,

0xf92a,	// (0x0001de3c) list_ai_message_pane_t_ParamLimits

0xf92a,	// (0x0001de3c) list_ai_message_pane_t

0xe314,	// (0x0001c826) cell_ai_soft_ind_pane_ParamLimits

0xe314,	// (0x0001c826) cell_ai_soft_ind_pane

0x4e63,	// (0x00013375) cell_ai_soft_ind_pane_g1_ParamLimits

0x4e63,	// (0x00013375) cell_ai_soft_ind_pane_g1

0x3086,	// (0x00011598) grid_highlight_cp1

0x4e70,	// (0x00013382) text_secondary_cp56_ParamLimits

0x4e70,	// (0x00013382) text_secondary_cp56

0x68d1,	// (0x00014de3) example_general_pane_ParamLimits

0x68d1,	// (0x00014de3) example_general_pane

0x68dd,	// (0x00014def) example_parent_pane_g1_ParamLimits

0x68dd,	// (0x00014def) example_parent_pane_g1

0x68e9,	// (0x00014dfb) example_parent_pane_t1_ParamLimits

0x68e9,	// (0x00014dfb) example_parent_pane_t1

0xb967,	// (0x00019e79) popup_preview_text_window_ParamLimits

0xb967,	// (0x00019e79) popup_preview_text_window

0x4ca3,	// (0x000131b5) list_single_pane_cp2_g4

0x34a5,	// (0x000119b7) bg_popup_preview_window_pane_ParamLimits

0x34a5,	// (0x000119b7) bg_popup_preview_window_pane

0x660a,	// (0x00014b1c) popup_preview_text_window_t1_ParamLimits

0x660a,	// (0x00014b1c) popup_preview_text_window_t1

0x6628,	// (0x00014b3a) popup_preview_text_window_t2_ParamLimits

0x6628,	// (0x00014b3a) popup_preview_text_window_t2

0x6671,	// (0x00014b83) popup_preview_text_window_t3_ParamLimits

0x6671,	// (0x00014b83) popup_preview_text_window_t3

0x66b6,	// (0x00014bc8) popup_preview_text_window_t4_ParamLimits

0x66b6,	// (0x00014bc8) popup_preview_text_window_t4

0x0004,

0xf8f9,	// (0x0001de0b) popup_preview_text_window_t_ParamLimits

0xf8f9,	// (0x0001de0b) popup_preview_text_window_t

0x6734,	// (0x00014c46) scroll_pane_cp11

0x55cc,	// (0x00013ade) bg_popup_preview_window_pane_g1

0x65ca,	// (0x00014adc) bg_popup_preview_window_pane_g2

0x65d2,	// (0x00014ae4) bg_popup_preview_window_pane_g3

0x65da,	// (0x00014aec) bg_popup_preview_window_pane_g4

0x65e2,	// (0x00014af4) bg_popup_preview_window_pane_g5

0x65ea,	// (0x00014afc) bg_popup_preview_window_pane_g6

0x65f2,	// (0x00014b04) bg_popup_preview_window_pane_g7

0x65fa,	// (0x00014b0c) bg_popup_preview_window_pane_g8

0x0d10,	// (0x0000f222) aid_popup_width_pane

0xb8e3,	// (0x00019df5) popup_midp_note_alarm_window_ParamLimits

0xb8e3,	// (0x00019df5) popup_midp_note_alarm_window

0x3efe,	// (0x00012410) data_form_pane_ParamLimits

0xd7b4,	// (0x0001bcc6) form_field_data_pane_g1

0xd7be,	// (0x0001bcd0) form_field_data_pane_t1_ParamLimits

0x3f2e,	// (0x00012440) input_focus_pane_ParamLimits

0x3f3c,	// (0x0001244e) data_form_wide_pane_ParamLimits

0x3f48,	// (0x0001245a) form_field_data_wide_pane_g1

0x3f68,	// (0x0001247a) form_field_data_wide_pane_t1_ParamLimits

0x3748,	// (0x00011c5a) input_focus_pane_cp6_ParamLimits

0xd8ca,	// (0x0001bddc) input_popup_find_pane_g1_ParamLimits

0xd8ca,	// (0x0001bddc) input_popup_find_pane_g1

0x1276,	// (0x0000f788) aid_navi_side_left_pane

0x128b,	// (0x0000f79d) aid_navi_side_right_pane

0x5fe3,	// (0x000144f5) bg_popup_window_pane_cp30_ParamLimits

0x5fe3,	// (0x000144f5) bg_popup_window_pane_cp30

0x605d,	// (0x0001456f) popup_midp_note_alarm_window_g1_ParamLimits

0x605d,	// (0x0001456f) popup_midp_note_alarm_window_g1

0x608d,	// (0x0001459f) popup_midp_note_alarm_window_t1_ParamLimits

0x608d,	// (0x0001459f) popup_midp_note_alarm_window_t1

0x612e,	// (0x00014640) popup_midp_note_alarm_window_t2_ParamLimits

0x612e,	// (0x00014640) popup_midp_note_alarm_window_t2

0x61dc,	// (0x000146ee) popup_midp_note_alarm_window_t3_ParamLimits

0x61dc,	// (0x000146ee) popup_midp_note_alarm_window_t3

0x620e,	// (0x00014720) popup_midp_note_alarm_window_t4_ParamLimits

0x620e,	// (0x00014720) popup_midp_note_alarm_window_t4

0x6234,	// (0x00014746) popup_midp_note_alarm_window_t5_ParamLimits

0x6234,	// (0x00014746) popup_midp_note_alarm_window_t5

0x000a,

0xf896,	// (0x0001dda8) popup_midp_note_alarm_window_t_ParamLimits

0xf896,	// (0x0001dda8) popup_midp_note_alarm_window_t

0x62e0,	// (0x000147f2) wait_bar_pane_cp1_ParamLimits

0x62e0,	// (0x000147f2) wait_bar_pane_cp1

0x3086,	// (0x00011598) wait_anim_pane_copy1

0x3086,	// (0x00011598) wait_border_pane_copy1

0x5cc1,	// (0x000141d3) wait_border_pane_g1_copy1

0x3f7f,	// (0x00012491) form_field_popup_pane_g1

0xd7d8,	// (0x0001bcea) form_field_popup_pane_t1_ParamLimits

0x3f2e,	// (0x00012440) input_focus_pane_cp7_ParamLimits

0x3fa1,	// (0x000124b3) list_form_pane_ParamLimits

0x3fad,	// (0x000124bf) form_field_popup_wide_pane_g1

0x3fb5,	// (0x000124c7) form_field_popup_wide_pane_t1_ParamLimits

0x3f2e,	// (0x00012440) input_focus_pane_cp8_ParamLimits

0x3fca,	// (0x000124dc) list_form_wide_pane_ParamLimits

0x6eac,	// (0x000153be) aid_size_cell_graphic_pane

0xd857,	// (0x0001bd69) data_form_pane_t1_ParamLimits

0xe4b5,	// (0x0001c9c7) data_form_wide_pane_t1_ParamLimits

0xdd3d,	// (0x0001c24f) bg_status_flat_pane

0xd0a5,	// (0x0001b5b7) title_pane_t1_ParamLimits

0x312e,	// (0x00011640) title_pane_t2_ParamLimits

0x3154,	// (0x00011666) title_pane_t3_ParamLimits

0xf55d,	// (0x0001da6f) title_pane_t_ParamLimits

0x4675,	// (0x00012b87) level_1_signal_ParamLimits

0x4682,	// (0x00012b94) level_2_signal_ParamLimits

0x468f,	// (0x00012ba1) level_3_signal_ParamLimits

0x469c,	// (0x00012bae) level_4_signal_ParamLimits

0x46a9,	// (0x00012bbb) level_5_signal_ParamLimits

0x46b6,	// (0x00012bc8) level_6_signal_ParamLimits

0x46c3,	// (0x00012bd5) level_7_signal_ParamLimits

0x4675,	// (0x00012b87) level_1_battery_ParamLimits

0x4682,	// (0x00012b94) level_2_battery_ParamLimits

0x468f,	// (0x00012ba1) level_3_battery_ParamLimits

0x469c,	// (0x00012bae) level_4_battery_ParamLimits

0x46a9,	// (0x00012bbb) level_5_battery_ParamLimits

0x46b6,	// (0x00012bc8) level_6_battery_ParamLimits

0x46c3,	// (0x00012bd5) level_7_battery_ParamLimits

0x5ee8,	// (0x000143fa) bg_status_flat_pane_g1

0x5ef0,	// (0x00014402) bg_status_flat_pane_g2

0x5ef8,	// (0x0001440a) bg_status_flat_pane_g3

0x5f00,	// (0x00014412) bg_status_flat_pane_g4

0x5f08,	// (0x0001441a) bg_status_flat_pane_g5

0x5f10,	// (0x00014422) bg_status_flat_pane_g6

0x5f18,	// (0x0001442a) bg_status_flat_pane_g7

0xd139,	// (0x0001b64b) tabs_3_active_pane_t1_ParamLimits

0xd139,	// (0x0001b64b) tabs_3_passive_pane_t1_ParamLimits

0xd153,	// (0x0001b665) tabs_4_active_pane_t1_ParamLimits

0xd153,	// (0x0001b665) tabs_4_1_passive_pane_t1_ParamLimits

0xd8e0,	// (0x0001bdf2) tabs_2_active_pane_t1_ParamLimits

0xd8e0,	// (0x0001bdf2) tabs_2_passive_pane_t1_ParamLimits

0x3166,	// (0x00011678) bg_active_tab_pane_cp4_ParamLimits

0xd8f2,	// (0x0001be04) tabs_2_long_active_pane_t1_ParamLimits

0x50aa,	// (0x000135bc) bg_passive_tab_pane_cp4_ParamLimits

0x1e0e,	// (0x00010320) list_single_midp_graphic_pane_t1_ParamLimits

0x3166,	// (0x00011678) bg_active_tab_pane_cp5_ParamLimits

0xd905,	// (0x0001be17) tabs_3_long_active_pane_t1_ParamLimits

0x50aa,	// (0x000135bc) bg_passive_tab_pane_cp5_ParamLimits

0x1e0e,	// (0x00010320) list_single_midp_graphic_pane_t1

0xdd3d,	// (0x0001c24f) bg_status_flat_pane_ParamLimits

0x524c,	// (0x0001375e) indicator_pane_cp2_ParamLimits

0x524c,	// (0x0001375e) indicator_pane_cp2

0xdeb5,	// (0x0001c3c7) navi_pane_srt_ParamLimits

0xdeb5,	// (0x0001c3c7) navi_pane_srt

0x5395,	// (0x000138a7) popup_clock_digital_analogue_window_cp1

0x325d,	// (0x0001176f) indicator_pane_t1

0x4d66,	// (0x00013278) copy_highlight_pane

0x4d66,	// (0x00013278) cursor_graphics_pane

0x4d66,	// (0x00013278) graphic_within_text_pane

0x4d66,	// (0x00013278) link_highlight_pane

0x66f7,	// (0x00014c09) popup_preview_text_window_t5_ParamLimits

0x66f7,	// (0x00014c09) popup_preview_text_window_t5

0x4e8a,	// (0x0001339c) cursor_digital_pane

0x4e8a,	// (0x0001339c) cursor_primary_pane

0x4e9b,	// (0x000133ad) cursor_primary_small_pane

0x4ea3,	// (0x000133b5) cursor_secondary_pane

0x4eab,	// (0x000133bd) cursor_title_pane

0x4e8a,	// (0x0001339c) link_highlight_digital_pane

0x4e92,	// (0x000133a4) link_highlight_primary_pane

0x4e9b,	// (0x000133ad) link_highlight_primary_small_pane

0x4ea3,	// (0x000133b5) link_highlight_secondary_pane

0x4eab,	// (0x000133bd) link_highlight_title_pane

0x4e8a,	// (0x0001339c) copy_highlight_digital_pane

0x4e8a,	// (0x0001339c) copy_highlight_primary_pane

0x4e9b,	// (0x000133ad) copy_highlight_primary_small_pane

0x4ea3,	// (0x000133b5) copy_highlight_secondary_pane

0x4eab,	// (0x000133bd) copy_highlight_title_pane

0x4ea3,	// (0x000133b5) graphic_text_digital_pane

0x5f86,	// (0x00014498) graphic_text_primary_pane

0x5f8f,	// (0x000144a1) graphic_text_primary_small_pane

0x4e9b,	// (0x000133ad) graphic_text_secondary_pane

0x4e8a,	// (0x0001339c) graphic_text_title_pane

0xdc1c,	// (0x0001c12e) cursor_primary_pane_g1

0x5f78,	// (0x0001448a) cursor_text_primary_t1

0xe169,	// (0x0001c67b) cursor_primary_small_pane_g1

0x5f6a,	// (0x0001447c) cursor_text_primary_small_t1

0xe15f,	// (0x0001c671) cursor_primary_small_pane_g1_copy1

0x5f52,	// (0x00014464) cursor_text_primary_small_t1_copy1

0x5f30,	// (0x00014442) cursor_text_title_t1

0xe155,	// (0x0001c667) cursor_title_pane_g1

0xdc1c,	// (0x0001c12e) cursor_digital_pane_g1

0x4ebd,	// (0x000133cf) cursor_text_digital_t1

0x5ed1,	// (0x000143e3) link_highlight_primary_pane_g1

0x5ed9,	// (0x000143eb) link_highlight_primary_pane_t1

0x4ecb,	// (0x000133dd) link_highlight_primary_small_pane_g1

0x4ed3,	// (0x000133e5) link_highlight_primary_small_pane_t1

0x4ecb,	// (0x000133dd) link_highlight_secondary_pane_g1

0x4ee2,	// (0x000133f4) link_highlight_secondary_pane_t1

0x5e45,	// (0x00014357) link_highlight_title_pane_g1

0x5e4d,	// (0x0001435f) link_highlight_title_pane_t1

0x5e2e,	// (0x00014340) link_highlight_digital_pane_g1

0x5e36,	// (0x00014348) link_highlight_digital_pane_t1

0x5d06,	// (0x00014218) copy_highlight_primary_pane_g1

0x5d0e,	// (0x00014220) copy_highlight_primary_pane_t1

0x5ce0,	// (0x000141f2) copy_highlight_primary_small_pane_g1

0x5cf7,	// (0x00014209) copy_highlight_primary_small_pane_t1

0x4ef1,	// (0x00013403) copy_highlight_secondary_pane_g1

0x4ef9,	// (0x0001340b) copy_highlight_secondary_pane_t1

0x5ce0,	// (0x000141f2) copy_highlight_title_pane_g1

0x5ce8,	// (0x000141fa) copy_highlight_title_pane_t1

0x5d06,	// (0x00014218) copy_highlight_digital_pane_g1

0x7076,	// (0x00015588) copy_highlight_digital_pane_t1

0x6fca,	// (0x000154dc) graphic_text_primary_pane_g1

0x705a,	// (0x0001556c) graphic_text_primary_pane_t1

0x7068,	// (0x0001557a) graphic_text_primary_pane_t2

0x0001,

0xf9c5,	// (0x0001ded7) graphic_text_primary_pane_t

0x7036,	// (0x00015548) graphic_text_primary_small_pane_g1

0x703e,	// (0x00015550) graphic_text_primary_small_pane_t1

0x704c,	// (0x0001555e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c0,	// (0x0001ded2) graphic_text_primary_small_pane_t

0x7012,	// (0x00015524) graphic_text_secondary_pane_g1

0x701a,	// (0x0001552c) graphic_text_secondary_pane_t1

0x7028,	// (0x0001553a) graphic_text_secondary_pane_t2

0x0001,

0xf9bb,	// (0x0001decd) graphic_text_secondary_pane_t

0x6fee,	// (0x00015500) graphic_text_title_pane_g1

0x6ff6,	// (0x00015508) graphic_text_title_pane_t1

0x7004,	// (0x00015516) graphic_text_title_pane_t2

0x0001,

0xf9b6,	// (0x0001dec8) graphic_text_title_pane_t

0x6fca,	// (0x000154dc) graphic_text_digital_pane_g1

0x6fd2,	// (0x000154e4) graphic_text_digital_pane_t1

0x6fe0,	// (0x000154f2) graphic_text_digital_pane_t2

0x0001,

0xf9b1,	// (0x0001dec3) graphic_text_digital_pane_t

0x3166,	// (0x00011678) navi_icon_pane_srt_ParamLimits

0x3166,	// (0x00011678) navi_icon_pane_srt

0x3086,	// (0x00011598) navi_midp_pane_srt

0x3086,	// (0x00011598) navi_navi_pane_srt

0x3166,	// (0x00011678) navi_text_pane_srt_ParamLimits

0x3166,	// (0x00011678) navi_text_pane_srt

0x6f95,	// (0x000154a7) navi_navi_icon_text_pane_srt

0x6f9d,	// (0x000154af) navi_navi_pane_srt_g1_ParamLimits

0x6f9d,	// (0x000154af) navi_navi_pane_srt_g1

0x6faf,	// (0x000154c1) navi_navi_pane_srt_g2_ParamLimits

0x6faf,	// (0x000154c1) navi_navi_pane_srt_g2

0x0001,

0xf9ac,	// (0x0001debe) navi_navi_pane_srt_g_ParamLimits

0xf9ac,	// (0x0001debe) navi_navi_pane_srt_g

0x6fc1,	// (0x000154d3) navi_navi_tabs_pane_srt

0x6f95,	// (0x000154a7) navi_navi_text_pane_srt

0x6f95,	// (0x000154a7) navi_navi_volume_pane_srt

0x6f86,	// (0x00015498) navi_navi_text_pane_srt_t1

0x2182,	// (0x00010694) navi_navi_volume_pane_srt_g1

0x218a,	// (0x0001069c) volume_small_pane_srt_ParamLimits

0x218a,	// (0x0001069c) volume_small_pane_srt

0x154d,	// (0x0000fa5f) volume_small_pane_srt_g1_ParamLimits

0x154d,	// (0x0000fa5f) volume_small_pane_srt_g1

0x155d,	// (0x0000fa6f) volume_small_pane_srt_g2_ParamLimits

0x155d,	// (0x0000fa6f) volume_small_pane_srt_g2

0x156e,	// (0x0000fa80) volume_small_pane_srt_g3_ParamLimits

0x156e,	// (0x0000fa80) volume_small_pane_srt_g3

0x157f,	// (0x0000fa91) volume_small_pane_srt_g4_ParamLimits

0x157f,	// (0x0000fa91) volume_small_pane_srt_g4

0x1590,	// (0x0000faa2) volume_small_pane_srt_g5_ParamLimits

0x1590,	// (0x0000faa2) volume_small_pane_srt_g5

0x15a1,	// (0x0000fab3) volume_small_pane_srt_g6_ParamLimits

0x15a1,	// (0x0000fab3) volume_small_pane_srt_g6

0x15b2,	// (0x0000fac4) volume_small_pane_srt_g7_ParamLimits

0x15b2,	// (0x0000fac4) volume_small_pane_srt_g7

0x15c3,	// (0x0000fad5) volume_small_pane_srt_g8_ParamLimits

0x15c3,	// (0x0000fad5) volume_small_pane_srt_g8

0x15d4,	// (0x0000fae6) volume_small_pane_srt_g9_ParamLimits

0x15d4,	// (0x0000fae6) volume_small_pane_srt_g9

0x15e5,	// (0x0000faf7) volume_small_pane_srt_g10_ParamLimits

0x15e5,	// (0x0000faf7) volume_small_pane_srt_g10

0x0009,

0xf759,	// (0x0001dc6b) volume_small_pane_srt_g_ParamLimits

0xf759,	// (0x0001dc6b) volume_small_pane_srt_g

0x354e,	// (0x00011a60) query_popup_data_pane_cp2

0x6f6c,	// (0x0001547e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6f6c,	// (0x0001547e) navi_navi_icon_text_pane_srt_t1

0x5f86,	// (0x00014498) navi_tabs_2_long_pane_srt

0x5f86,	// (0x00014498) navi_tabs_2_pane_srt

0x5f86,	// (0x00014498) navi_tabs_3_long_pane_srt

0x5f86,	// (0x00014498) navi_tabs_3_pane_srt

0x5f86,	// (0x00014498) navi_tabs_4_pane_srt

0x2162,	// (0x00010674) tabs_2_active_pane_srt_ParamLimits

0x2162,	// (0x00010674) tabs_2_active_pane_srt

0x2172,	// (0x00010684) tabs_2_passive_pane_srt_ParamLimits

0x2172,	// (0x00010684) tabs_2_passive_pane_srt

0x56e8,	// (0x00013bfa) bg_passive_tab_pane_cp1_srt_ParamLimits

0x56e8,	// (0x00013bfa) bg_passive_tab_pane_cp1_srt

0x6f38,	// (0x0001544a) bg_passive_tab_pane_g1_cp1_srt

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp1_srt

0x6f41,	// (0x00015453) bg_passive_tab_pane_g3_cp1_srt

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp1_srt_ParamLimits

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp1_srt

0x6f4a,	// (0x0001545c) tabs_2_active_pane_srt_g1

0xe5ed,	// (0x0001caff) tabs_2_active_pane_srt_t1_ParamLimits

0xe5ed,	// (0x0001caff) tabs_2_active_pane_srt_t1

0x6f38,	// (0x0001544a) bg_active_tab_pane_g1_cp1_srt

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp1_srt

0x6f41,	// (0x00015453) bg_active_tab_pane_g3_cp1_srt

0x212f,	// (0x00010641) tabs_3_active_pane_srt_ParamLimits

0x212f,	// (0x00010641) tabs_3_active_pane_srt

0x2140,	// (0x00010652) tabs_3_passive_pane_cp_srt_ParamLimits

0x2140,	// (0x00010652) tabs_3_passive_pane_cp_srt

0x2151,	// (0x00010663) tabs_3_passive_pane_srt_ParamLimits

0x2151,	// (0x00010663) tabs_3_passive_pane_srt

0x56e8,	// (0x00013bfa) bg_passive_tab_pane_cp2_srt_ParamLimits

0x56e8,	// (0x00013bfa) bg_passive_tab_pane_cp2_srt

0x4f08,	// (0x0001341a) bg_passive_tab_pane_g1_cp2_srt

0x49c0,	// (0x00012ed2) bg_passive_tab_pane_g2_cp2_srt

0x4f11,	// (0x00013423) bg_passive_tab_pane_g3_cp2_srt

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp2_srt_ParamLimits

0x33fb,	// (0x0001190d) bg_active_tab_pane_cp2_srt

0x6f1e,	// (0x00015430) tabs_3_active_pane_srt_g1

0xe5d7,	// (0x0001cae9) tabs_3_active_pane_srt_t1_ParamLimits

0xe5d7,	// (0x0001cae9) tabs_3_active_pane_srt_t1

0x4f08,	// (0x0001341a) bg_active_tab_pane_g1_cp2_srt

0x49c0,	// (0x00012ed2) bg_active_tab_pane_g2_cp2_srt

0x4f11,	// (0x00013423) bg_active_tab_pane_g3_cp2_srt

0x20e7,	// (0x000105f9) tabs_4_active_pane_srt_ParamLimits

0x20e7,	// (0x000105f9) tabs_4_active_pane_srt

0x20f9,	// (0x0001060b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x20f9,	// (0x0001060b) tabs_4_passive_pane_cp2_srt

0x1748,	// (0x0000fc5a) aid_size_cell_toolbar

0x6ac2,	// (0x00014fd4) main_idle_act_pane_ParamLimits

0x1903,	// (0x0000fe15) popup_large_graphic_colour_window_ParamLimits

0xbbed,	// (0x0001a0ff) popup_toolbar_window_ParamLimits

0xbbed,	// (0x0001a0ff) popup_toolbar_window

0x6cc5,	// (0x000151d7) list_single_graphic_2heading_pane_ParamLimits

0x6cc5,	// (0x000151d7) list_single_graphic_2heading_pane

0x4429,	// (0x0001293b) aid_size_cell_apps_grid_lsc_pane

0x443b,	// (0x0001294d) aid_size_cell_apps_grid_prt_pane

0x50aa,	// (0x000135bc) bg_wml_button_pane_cp1_ParamLimits

0x50aa,	// (0x000135bc) bg_wml_button_pane_cp1

0xe0ec,	// (0x0001c5fe) form_midp_field_text_pane_t1_ParamLimits

0x56e8,	// (0x00013bfa) input_focus_pane_cp050_ParamLimits

0x597a,	// (0x00013e8c) list_midp_form_text_pane_ParamLimits

0x591c,	// (0x00013e2e) input_focus_pane_cp051_ParamLimits

0x5930,	// (0x00013e42) list_midp_choice_pane_ParamLimits

0xe080,	// (0x0001c592) list_single_2graphic_pane_cp3_ParamLimits

0xe080,	// (0x0001c592) list_single_2graphic_pane_cp3

0xe095,	// (0x0001c5a7) list_single_midp_graphic_pane_ParamLimits

0xe095,	// (0x0001c5a7) list_single_midp_graphic_pane

0x1d13,	// (0x00010225) list_single_graphic_2heading_pane_g1_ParamLimits

0x1d13,	// (0x00010225) list_single_graphic_2heading_pane_g1

0x1d1f,	// (0x00010231) list_single_graphic_2heading_pane_g4_ParamLimits

0x1d1f,	// (0x00010231) list_single_graphic_2heading_pane_g4

0x1d2b,	// (0x0001023d) list_single_graphic_2heading_pane_g5_ParamLimits

0x1d2b,	// (0x0001023d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ac,	// (0x0001dcbe) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ac,	// (0x0001dcbe) list_single_graphic_2heading_pane_g

0x1d37,	// (0x00010249) list_single_graphic_2heading_pane_t1_ParamLimits

0x1d37,	// (0x00010249) list_single_graphic_2heading_pane_t1

0x1d4b,	// (0x0001025d) list_single_graphic_2heading_pane_t2_ParamLimits

0x1d4b,	// (0x0001025d) list_single_graphic_2heading_pane_t2

0x1d67,	// (0x00010279) list_single_graphic_2heading_pane_t3_ParamLimits

0x1d67,	// (0x00010279) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b3,	// (0x0001dcc5) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b3,	// (0x0001dcc5) list_single_graphic_2heading_pane_t

0x54f4,	// (0x00013a06) bg_popup_sub_pane_cp2

0x551e,	// (0x00013a30) grid_toobar_pane

0x1d7f,	// (0x00010291) cell_toolbar_pane_ParamLimits

0x1d7f,	// (0x00010291) cell_toolbar_pane

0x5570,	// (0x00013a82) cell_toolbar_pane_g1_ParamLimits

0x5570,	// (0x00013a82) cell_toolbar_pane_g1

0x5584,	// (0x00013a96) cell_toolbar_pane_g2_ParamLimits

0x5584,	// (0x00013a96) cell_toolbar_pane_g2

0x0001,

0xf7c1,	// (0x0001dcd3) cell_toolbar_pane_g_ParamLimits

0xf7c1,	// (0x0001dcd3) cell_toolbar_pane_g

0x55a6,	// (0x00013ab8) grid_highlight_pane_cp2_ParamLimits

0x55a6,	// (0x00013ab8) grid_highlight_pane_cp2

0x55c0,	// (0x00013ad2) toolbar_button_pane

0x55cc,	// (0x00013ade) toolbar_button_pane_g1

0x55d4,	// (0x00013ae6) toolbar_button_pane_g2

0x55dc,	// (0x00013aee) toolbar_button_pane_g3

0x55e4,	// (0x00013af6) toolbar_button_pane_g4

0x55ec,	// (0x00013afe) toolbar_button_pane_g5

0x55f4,	// (0x00013b06) toolbar_button_pane_g6

0x55fc,	// (0x00013b0e) toolbar_button_pane_g7

0x5604,	// (0x00013b16) toolbar_button_pane_g8

0x560c,	// (0x00013b1e) toolbar_button_pane_g9

0x0009,

0xf7c6,	// (0x0001dcd8) toolbar_button_pane_g

0x1db7,	// (0x000102c9) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1db7,	// (0x000102c9) list_single_2graphic_pane_g1_cp3

0xbc45,	// (0x0001a157) list_single_2graphic_pane_g2_cp3_ParamLimits

0xbc45,	// (0x0001a157) list_single_2graphic_pane_g2_cp3

0x1dd4,	// (0x000102e6) list_single_2graphic_pane_g3_cp3

0x1ddc,	// (0x000102ee) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1ddc,	// (0x000102ee) list_single_2graphic_pane_g4_cp3

0x1de8,	// (0x000102fa) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1de8,	// (0x000102fa) list_single_2graphic_pane_t1_cp3

0x1e02,	// (0x00010314) list_single_midp_graphic_pane_g2_ParamLimits

0x1e02,	// (0x00010314) list_single_midp_graphic_pane_g2

0x1750,	// (0x0000fc62) aid_zoom_text_primary

0x1758,	// (0x0000fc6a) aid_zoom_text_secondary

0x4fc5,	// (0x000134d7) status_small_pane_g7_ParamLimits

0x4fc5,	// (0x000134d7) status_small_pane_g7

0x4fe8,	// (0x000134fa) status_small_pane_t1_ParamLimits

0xd081,	// (0x0001b593) title_pane_g2

0x0003,

0xf554,	// (0x0001da66) title_pane_g

0xd309,	// (0x0001b81b) aid_size_cell_colour_1_pane_ParamLimits

0xd309,	// (0x0001b81b) aid_size_cell_colour_1_pane

0xd31d,	// (0x0001b82f) aid_size_cell_colour_2_pane_ParamLimits

0xd31d,	// (0x0001b82f) aid_size_cell_colour_2_pane

0xd331,	// (0x0001b843) aid_size_cell_colour_3_pane_ParamLimits

0xd331,	// (0x0001b843) aid_size_cell_colour_3_pane

0xd345,	// (0x0001b857) aid_size_cell_colour_4_pane_ParamLimits

0xd345,	// (0x0001b857) aid_size_cell_colour_4_pane

0x11b2,	// (0x0000f6c4) title_pane_stacon_g1_ParamLimits

0x11b2,	// (0x0000f6c4) title_pane_stacon_g1

0x5d65,	// (0x00014277) popup_note_wait_window_g3_ParamLimits

0x5d65,	// (0x00014277) popup_note_wait_window_g3

0x5ddb,	// (0x000142ed) popup_note_wait_window_t5_ParamLimits

0x5ddb,	// (0x000142ed) popup_note_wait_window_t5

0x3086,	// (0x00011598) main_feb_china_hwr_fs_writing_pane

0xb609,	// (0x00019b1b) popup_feb_china_hwr_fs_window_ParamLimits

0xb609,	// (0x00019b1b) popup_feb_china_hwr_fs_window

0xbc56,	// (0x0001a168) aid_size_cell_hwr_fs_ParamLimits

0xbc56,	// (0x0001a168) aid_size_cell_hwr_fs

0x56e8,	// (0x00013bfa) bg_popup_sub_pane_cp3_ParamLimits

0x56e8,	// (0x00013bfa) bg_popup_sub_pane_cp3

0xbc6b,	// (0x0001a17d) grid_hwr_fs_pane_ParamLimits

0xbc6b,	// (0x0001a17d) grid_hwr_fs_pane

0x1e51,	// (0x00010363) linegrid_hwr_fs_pane_ParamLimits

0x1e51,	// (0x00010363) linegrid_hwr_fs_pane

0xbc83,	// (0x0001a195) cell_hwr_fs_pane_ParamLimits

0xbc83,	// (0x0001a195) cell_hwr_fs_pane

0x56f4,	// (0x00013c06) linegrid_hwr_fs_pane_g1_ParamLimits

0x56f4,	// (0x00013c06) linegrid_hwr_fs_pane_g1

0xe054,	// (0x0001c566) linegrid_hwr_fs_pane_g2_ParamLimits

0xe054,	// (0x0001c566) linegrid_hwr_fs_pane_g2

0x5712,	// (0x00013c24) linegrid_hwr_fs_pane_g3_ParamLimits

0x5712,	// (0x00013c24) linegrid_hwr_fs_pane_g3

0x1e83,	// (0x00010395) linegrid_hwr_fs_pane_g4_ParamLimits

0x1e83,	// (0x00010395) linegrid_hwr_fs_pane_g4

0x1e9d,	// (0x000103af) linegrid_hwr_fs_pane_g5_ParamLimits

0x1e9d,	// (0x000103af) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ec,	// (0x0001dcfe) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ec,	// (0x0001dcfe) linegrid_hwr_fs_pane_g

0x571e,	// (0x00013c30) cell_hwr_fs_pane_g1_ParamLimits

0x571e,	// (0x00013c30) cell_hwr_fs_pane_g1

0x542b,	// (0x0001393d) cell_hwr_fs_pane_g2_ParamLimits

0x542b,	// (0x0001393d) cell_hwr_fs_pane_g2

0xe066,	// (0x0001c578) cell_hwr_fs_pane_g3_ParamLimits

0xe066,	// (0x0001c578) cell_hwr_fs_pane_g3

0xe073,	// (0x0001c585) cell_hwr_fs_pane_g4_ParamLimits

0xe073,	// (0x0001c585) cell_hwr_fs_pane_g4

0x0003,

0xf7f7,	// (0x0001dd09) cell_hwr_fs_pane_g_ParamLimits

0xf7f7,	// (0x0001dd09) cell_hwr_fs_pane_g

0xbca9,	// (0x0001a1bb) cell_hwr_fs_pane_t1

0x3086,	// (0x00011598) grid_highlight_pane_cp6

0x3086,	// (0x00011598) main_idle_act2_pane

0x41e3,	// (0x000126f5) aid_inside_area_popup_secondary

0xe1d0,	// (0x0001c6e2) aid_inside_area_window_primary_ParamLimits

0xe1d0,	// (0x0001c6e2) aid_inside_area_window_primary

0x7085,	// (0x00015597) ai2_news_ticker_pane

0x708d,	// (0x0001559f) aid_size_cell_ai1_link_ParamLimits

0x708d,	// (0x0001559f) aid_size_cell_ai1_link

0x70a7,	// (0x000155b9) popup_ai2_data_window_ParamLimits

0x70a7,	// (0x000155b9) popup_ai2_data_window

0x70bb,	// (0x000155cd) popup_ai2_link_window_ParamLimits

0x70bb,	// (0x000155cd) popup_ai2_link_window

0x56e8,	// (0x00013bfa) bg_popup_sub_pane_cp4_ParamLimits

0x56e8,	// (0x00013bfa) bg_popup_sub_pane_cp4

0x70cf,	// (0x000155e1) grid_ai2_link_pane_ParamLimits

0x70cf,	// (0x000155e1) grid_ai2_link_pane

0x70e6,	// (0x000155f8) popup_ai2_link_window_g1_ParamLimits

0x70e6,	// (0x000155f8) popup_ai2_link_window_g1

0x70f2,	// (0x00015604) popup_ai2_link_window_g2_ParamLimits

0x70f2,	// (0x00015604) popup_ai2_link_window_g2

0x0001,

0xf9ca,	// (0x0001dedc) popup_ai2_link_window_g_ParamLimits

0xf9ca,	// (0x0001dedc) popup_ai2_link_window_g

0x7101,	// (0x00015613) ai2_mp_button_pane

0x7109,	// (0x0001561b) ai2_mp_volume_pane

0x591c,	// (0x00013e2e) bg_popup_sub_pane_cp5_ParamLimits

0x591c,	// (0x00013e2e) bg_popup_sub_pane_cp5

0x7111,	// (0x00015623) heading_ai2_gene_pane_ParamLimits

0x7111,	// (0x00015623) heading_ai2_gene_pane

0x711d,	// (0x0001562f) list_ai2_gene_pane_ParamLimits

0x711d,	// (0x0001562f) list_ai2_gene_pane

0x71a7,	// (0x000156b9) cell_ai2_link_pane_ParamLimits

0x71a7,	// (0x000156b9) cell_ai2_link_pane

0x71bd,	// (0x000156cf) cell_ai2_link_pane_g1

0x3086,	// (0x00011598) grid_highlight_pane_cp7

0x219f,	// (0x000106b1) ai2_mp_volume_pane_g1

0x728e,	// (0x000157a0) ai2_mp_volume_pane_g2

0x7203,	// (0x00015715) list_ai2_gene_pane_t1

0x7296,	// (0x000157a8) ai2_mp_volume_pane_g3

0x0002,

0xf9e3,	// (0x0001def5) ai2_mp_volume_pane_g

0x21a7,	// (0x000106b9) volume_small_pane_cp3

0x729e,	// (0x000157b0) aid_size_cell_ai2_button

0x72a6,	// (0x000157b8) grid_ai2_button_pane

0x72af,	// (0x000157c1) cell_ai2_button_pane_ParamLimits

0x72af,	// (0x000157c1) cell_ai2_button_pane

0x307c,	// (0x0001158e) cell_ai2_button_pane_g1

0x3086,	// (0x00011598) grid_highlight_pane_cp8

0x724e,	// (0x00015760) ai2_gene_pane_t1_ParamLimits

0x724e,	// (0x00015760) ai2_gene_pane_t1

0xb5a7,	// (0x00019ab9) aid_height_parent_landscape

0xe363,	// (0x0001c875) aid_height_set_list

0x6ac2,	// (0x00014fd4) aid_size_parent

0x6eac,	// (0x000153be) aid_size_cell_graphic_pane_ParamLimits

0x712d,	// (0x0001563f) popup_ai2_data_window_g1_ParamLimits

0x712d,	// (0x0001563f) popup_ai2_data_window_g1

0x717b,	// (0x0001568d) ai2_news_ticker_pane_g1

0x7183,	// (0x00015695) ai2_news_ticker_pane_g2

0x0001,

0xf9cf,	// (0x0001dee1) ai2_news_ticker_pane_g

0x718b,	// (0x0001569d) ai2_news_ticker_pane_t1

0x7199,	// (0x000156ab) ai2_news_ticker_pane_t2

0x0001,

0xf9d4,	// (0x0001dee6) ai2_news_ticker_pane_t

0x71c6,	// (0x000156d8) heading_ai2_gene_pane_g1

0x71ce,	// (0x000156e0) heading_ai2_gene_pane_t1_ParamLimits

0x71ce,	// (0x000156e0) heading_ai2_gene_pane_t1

0x71e3,	// (0x000156f5) list_highlight_pane_cp6

0x71eb,	// (0x000156fd) ai2_gene_pane_ParamLimits

0x71eb,	// (0x000156fd) ai2_gene_pane

0x7211,	// (0x00015723) list_ai2_gene_pane_t2

0x0001,

0xf9d9,	// (0x0001deeb) list_ai2_gene_pane_t

0x721f,	// (0x00015731) list_highlight_pane_cp8_ParamLimits

0x721f,	// (0x00015731) list_highlight_pane_cp8

0x7230,	// (0x00015742) ai2_gene_pane_g1_ParamLimits

0x7230,	// (0x00015742) ai2_gene_pane_g1

0x7242,	// (0x00015754) ai2_gene_pane_g2_ParamLimits

0x7242,	// (0x00015754) ai2_gene_pane_g2

0x0001,

0xf9de,	// (0x0001def0) ai2_gene_pane_g_ParamLimits

0xf9de,	// (0x0001def0) ai2_gene_pane_g

0x396d,	// (0x00011e7f) scroll_pane_cp12

0xb566,	// (0x00019a78) control_pane_t3_ParamLimits

0xb566,	// (0x00019a78) control_pane_t3

0x4fd9,	// (0x000134eb) status_small_pane_g8_ParamLimits

0x4fd9,	// (0x000134eb) status_small_pane_g8

0xb69c,	// (0x00019bae) popup_find_window_ParamLimits

0xb91d,	// (0x00019e2f) popup_note_image_window_ParamLimits

0x3a04,	// (0x00011f16) list_double2_graphic_pane_vc_g1_ParamLimits

0x3a04,	// (0x00011f16) list_double2_graphic_pane_vc_g1

0x398a,	// (0x00011e9c) list_double2_graphic_pane_vc_g2_ParamLimits

0x398a,	// (0x00011e9c) list_double2_graphic_pane_vc_g2

0x3996,	// (0x00011ea8) list_double2_graphic_pane_vc_g3_ParamLimits

0x3996,	// (0x00011ea8) list_double2_graphic_pane_vc_g3

0x0002,

0xf7ba,	// (0x0001dccc) list_double2_graphic_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001dccc) list_double2_graphic_pane_vc_g

0x555a,	// (0x00013a6c) list_double2_graphic_pane_vc_t1_ParamLimits

0x555a,	// (0x00013a6c) list_double2_graphic_pane_vc_t1

0x398a,	// (0x00011e9c) list_single_heading_pane_vc_g1_ParamLimits

0x398a,	// (0x00011e9c) list_single_heading_pane_vc_g1

0x3996,	// (0x00011ea8) list_single_heading_pane_vc_g2_ParamLimits

0x3996,	// (0x00011ea8) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dae0) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dae0) list_single_heading_pane_vc_g

0x5614,	// (0x00013b26) list_single_heading_pane_vc_t1_ParamLimits

0x5614,	// (0x00013b26) list_single_heading_pane_vc_t1

0x562a,	// (0x00013b3c) list_single_heading_pane_vc_t2_ParamLimits

0x562a,	// (0x00013b3c) list_single_heading_pane_vc_t2

0x0001,

0xf7db,	// (0x0001dced) list_single_heading_pane_vc_t_ParamLimits

0xf7db,	// (0x0001dced) list_single_heading_pane_vc_t

0x563e,	// (0x00013b50) list_setting_number_pane_vc_g1_ParamLimits

0x563e,	// (0x00013b50) list_setting_number_pane_vc_g1

0x564a,	// (0x00013b5c) list_setting_number_pane_vc_g2_ParamLimits

0x564a,	// (0x00013b5c) list_setting_number_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001dcf2) list_setting_number_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001dcf2) list_setting_number_pane_vc_g

0x5656,	// (0x00013b68) list_setting_number_pane_vc_t1_ParamLimits

0x5656,	// (0x00013b68) list_setting_number_pane_vc_t1

0x566a,	// (0x00013b7c) list_setting_number_pane_vc_t2_ParamLimits

0x566a,	// (0x00013b7c) list_setting_number_pane_vc_t2

0x5684,	// (0x00013b96) list_setting_number_pane_vc_t3_ParamLimits

0x5684,	// (0x00013b96) list_setting_number_pane_vc_t3

0x0002,

0xf7e5,	// (0x0001dcf7) list_setting_number_pane_vc_t_ParamLimits

0xf7e5,	// (0x0001dcf7) list_setting_number_pane_vc_t

0x56ac,	// (0x00013bbe) set_value_pane_vc_ParamLimits

0x56ac,	// (0x00013bbe) set_value_pane_vc

0x6cc5,	// (0x000151d7) list_double2_graphic_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_double2_graphic_pane_vc

0x6cd8,	// (0x000151ea) list_double2_large_graphic_pane_vc_ParamLimits

0x6cd8,	// (0x000151ea) list_double2_large_graphic_pane_vc

0x6cc5,	// (0x000151d7) list_double2_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_double2_pane_vc

0x6cc5,	// (0x000151d7) list_double_graphic_heading_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_double_graphic_heading_pane_vc

0x6cc5,	// (0x000151d7) list_double_graphic_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_double_graphic_pane_vc

0x6cc5,	// (0x000151d7) list_double_heading_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_double_heading_pane_vc

0x6cd8,	// (0x000151ea) list_double_large_graphic_pane_vc_ParamLimits

0x6cd8,	// (0x000151ea) list_double_large_graphic_pane_vc

0x6cc5,	// (0x000151d7) list_double_number_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_double_number_pane_vc

0x6cc5,	// (0x000151d7) list_double_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_double_pane_vc

0x6cc5,	// (0x000151d7) list_double_time_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_double_time_pane_vc

0x6cc5,	// (0x000151d7) list_setting_number_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_setting_number_pane_vc

0x6cc5,	// (0x000151d7) list_setting_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_setting_pane_vc

0x6cc5,	// (0x000151d7) list_single_graphic_heading_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_single_graphic_heading_pane_vc

0x6cc5,	// (0x000151d7) list_single_heading_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_single_heading_pane_vc

0x6cc5,	// (0x000151d7) list_single_number_heading_pane_vc_ParamLimits

0x6cc5,	// (0x000151d7) list_single_number_heading_pane_vc

0x72e2,	// (0x000157f4) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x72e2,	// (0x000157f4) list_double_graphic_heading_pane_vc_g1

0x72ee,	// (0x00015800) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x72ee,	// (0x00015800) list_double_graphic_heading_pane_vc_g2

0x72fa,	// (0x0001580c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x72fa,	// (0x0001580c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ea,	// (0x0001defc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ea,	// (0x0001defc) list_double_graphic_heading_pane_vc_g

0x7306,	// (0x00015818) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7306,	// (0x00015818) list_double_graphic_heading_pane_vc_t1

0x7322,	// (0x00015834) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7322,	// (0x00015834) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f1,	// (0x0001df03) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f1,	// (0x0001df03) list_double_graphic_heading_pane_vc_t

0x563e,	// (0x00013b50) list_setting_pane_vc_g1_ParamLimits

0x563e,	// (0x00013b50) list_setting_pane_vc_g1

0x564a,	// (0x00013b5c) list_setting_pane_vc_g2_ParamLimits

0x564a,	// (0x00013b5c) list_setting_pane_vc_g2

0x0001,

0xf7e0,	// (0x0001dcf2) list_setting_pane_vc_g_ParamLimits

0xf7e0,	// (0x0001dcf2) list_setting_pane_vc_g

0x753d,	// (0x00015a4f) list_setting_pane_vc_t1_ParamLimits

0x753d,	// (0x00015a4f) list_setting_pane_vc_t1

0x7557,	// (0x00015a69) list_setting_pane_vc_t2_ParamLimits

0x7557,	// (0x00015a69) list_setting_pane_vc_t2

0x0001,

0xfa34,	// (0x0001df46) list_setting_pane_vc_t_ParamLimits

0xfa34,	// (0x0001df46) list_setting_pane_vc_t

0x56ac,	// (0x00013bbe) set_value_pane_cp_vc_ParamLimits

0x56ac,	// (0x00013bbe) set_value_pane_cp_vc

0x398a,	// (0x00011e9c) list_single_number_heading_pane_vc_g1_ParamLimits

0x398a,	// (0x00011e9c) list_single_number_heading_pane_vc_g1

0x3996,	// (0x00011ea8) list_single_number_heading_pane_vc_g2_ParamLimits

0x3996,	// (0x00011ea8) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dae0) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dae0) list_single_number_heading_pane_vc_g

0x5614,	// (0x00013b26) list_single_number_heading_pane_vc_t1_ParamLimits

0x5614,	// (0x00013b26) list_single_number_heading_pane_vc_t1

0x756f,	// (0x00015a81) list_single_number_heading_pane_vc_t2_ParamLimits

0x756f,	// (0x00015a81) list_single_number_heading_pane_vc_t2

0x39f2,	// (0x00011f04) list_single_number_heading_pane_vc_t3_ParamLimits

0x39f2,	// (0x00011f04) list_single_number_heading_pane_vc_t3

0x0002,

0xfa39,	// (0x0001df4b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa39,	// (0x0001df4b) list_single_number_heading_pane_vc_t

0x3a04,	// (0x00011f16) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3a04,	// (0x00011f16) list_single_graphic_heading_pane_vc_g1

0x398a,	// (0x00011e9c) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x398a,	// (0x00011e9c) list_single_graphic_heading_pane_vc_g4

0x3996,	// (0x00011ea8) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x3996,	// (0x00011ea8) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7ba,	// (0x0001dccc) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7ba,	// (0x0001dccc) list_single_graphic_heading_pane_vc_g

0x5614,	// (0x00013b26) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5614,	// (0x00013b26) list_single_graphic_heading_pane_vc_t1

0x7583,	// (0x00015a95) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7583,	// (0x00015a95) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa40,	// (0x0001df52) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa40,	// (0x0001df52) list_single_graphic_heading_pane_vc_t

0x398a,	// (0x00011e9c) list_double2_pane_vc_g1_ParamLimits

0x398a,	// (0x00011e9c) list_double2_pane_vc_g1

0x3996,	// (0x00011ea8) list_double2_pane_vc_g2_ParamLimits

0x3996,	// (0x00011ea8) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dae0) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dae0) list_double2_pane_vc_g

0x6c62,	// (0x00015174) list_double2_pane_vc_t1_ParamLimits

0x6c62,	// (0x00015174) list_double2_pane_vc_t1

0x7597,	// (0x00015aa9) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7597,	// (0x00015aa9) list_double2_large_graphic_pane_vc_g1

0x75a3,	// (0x00015ab5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x75a3,	// (0x00015ab5) list_double2_large_graphic_pane_vc_g2

0x75af,	// (0x00015ac1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x75af,	// (0x00015ac1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0001dafd) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0001dafd) list_double2_large_graphic_pane_vc_g

0x75bb,	// (0x00015acd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x75bb,	// (0x00015acd) list_double2_large_graphic_pane_vc_t1

0x75d1,	// (0x00015ae3) list_double_time_pane_vc_g1_ParamLimits

0x75d1,	// (0x00015ae3) list_double_time_pane_vc_g1

0x75dd,	// (0x00015aef) list_double_time_pane_vc_g2_ParamLimits

0x75dd,	// (0x00015aef) list_double_time_pane_vc_g2

0x0001,

0xfa45,	// (0x0001df57) list_double_time_pane_vc_g_ParamLimits

0xfa45,	// (0x0001df57) list_double_time_pane_vc_g

0x75e9,	// (0x00015afb) list_double_time_pane_vc_t1_ParamLimits

0x75e9,	// (0x00015afb) list_double_time_pane_vc_t1

0x760d,	// (0x00015b1f) list_double_time_pane_vc_t2_ParamLimits

0x760d,	// (0x00015b1f) list_double_time_pane_vc_t2

0x7637,	// (0x00015b49) list_double_time_pane_vc_t3_ParamLimits

0x7637,	// (0x00015b49) list_double_time_pane_vc_t3

0x7649,	// (0x00015b5b) list_double_time_pane_vc_t4_ParamLimits

0x7649,	// (0x00015b5b) list_double_time_pane_vc_t4

0x0003,

0xfa4a,	// (0x0001df5c) list_double_time_pane_vc_t_ParamLimits

0xfa4a,	// (0x0001df5c) list_double_time_pane_vc_t

0x398a,	// (0x00011e9c) list_double_pane_vc_g1_ParamLimits

0x398a,	// (0x00011e9c) list_double_pane_vc_g1

0x3996,	// (0x00011ea8) list_double_pane_vc_g2_ParamLimits

0x3996,	// (0x00011ea8) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dae0) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dae0) list_double_pane_vc_g

0x765d,	// (0x00015b6f) list_double_pane_vc_t1_ParamLimits

0x765d,	// (0x00015b6f) list_double_pane_vc_t1

0x7671,	// (0x00015b83) list_double_pane_vc_t2_ParamLimits

0x7671,	// (0x00015b83) list_double_pane_vc_t2

0x0001,

0xfa53,	// (0x0001df65) list_double_pane_vc_t_ParamLimits

0xfa53,	// (0x0001df65) list_double_pane_vc_t

0x398a,	// (0x00011e9c) list_double_number_pane_vc_g1_ParamLimits

0x398a,	// (0x00011e9c) list_double_number_pane_vc_g1

0x3996,	// (0x00011ea8) list_double_number_pane_vc_g2_ParamLimits

0x3996,	// (0x00011ea8) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dae0) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dae0) list_double_number_pane_vc_g

0x7689,	// (0x00015b9b) list_double_number_pane_vc_t1_ParamLimits

0x7689,	// (0x00015b9b) list_double_number_pane_vc_t1

0x769d,	// (0x00015baf) list_double_number_pane_vc_t2_ParamLimits

0x769d,	// (0x00015baf) list_double_number_pane_vc_t2

0x7671,	// (0x00015b83) list_double_number_pane_vc_t3_ParamLimits

0x7671,	// (0x00015b83) list_double_number_pane_vc_t3

0x0002,

0xfa58,	// (0x0001df6a) list_double_number_pane_vc_t_ParamLimits

0xfa58,	// (0x0001df6a) list_double_number_pane_vc_t

0x76b1,	// (0x00015bc3) list_double_large_graphic_pane_vc_g1_ParamLimits

0x76b1,	// (0x00015bc3) list_double_large_graphic_pane_vc_g1

0x76c2,	// (0x00015bd4) list_double_large_graphic_pane_vc_g2_ParamLimits

0x76c2,	// (0x00015bd4) list_double_large_graphic_pane_vc_g2

0x75af,	// (0x00015ac1) list_double_large_graphic_pane_vc_g3_ParamLimits

0x75af,	// (0x00015ac1) list_double_large_graphic_pane_vc_g3

0x76d1,	// (0x00015be3) list_double_large_graphic_pane_vc_g4_ParamLimits

0x76d1,	// (0x00015be3) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5f,	// (0x0001df71) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5f,	// (0x0001df71) list_double_large_graphic_pane_vc_g

0x76dd,	// (0x00015bef) list_double_large_graphic_pane_vc_t1_ParamLimits

0x76dd,	// (0x00015bef) list_double_large_graphic_pane_vc_t1

0x76f6,	// (0x00015c08) list_double_large_graphic_pane_vc_t2_ParamLimits

0x76f6,	// (0x00015c08) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa68,	// (0x0001df7a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa68,	// (0x0001df7a) list_double_large_graphic_pane_vc_t

0x72ee,	// (0x00015800) list_double_heading_pane_vc_g1_ParamLimits

0x72ee,	// (0x00015800) list_double_heading_pane_vc_g1

0x72fa,	// (0x0001580c) list_double_heading_pane_vc_g2_ParamLimits

0x72fa,	// (0x0001580c) list_double_heading_pane_vc_g2

0x0001,

0xfa6d,	// (0x0001df7f) list_double_heading_pane_vc_g_ParamLimits

0xfa6d,	// (0x0001df7f) list_double_heading_pane_vc_g

0x770f,	// (0x00015c21) list_double_heading_pane_vc_t1_ParamLimits

0x770f,	// (0x00015c21) list_double_heading_pane_vc_t1

0x5614,	// (0x00013b26) list_double_heading_pane_vc_t2_ParamLimits

0x5614,	// (0x00013b26) list_double_heading_pane_vc_t2

0x0001,

0xfa72,	// (0x0001df84) list_double_heading_pane_vc_t_ParamLimits

0xfa72,	// (0x0001df84) list_double_heading_pane_vc_t

0x3a04,	// (0x00011f16) list_double_graphic_pane_vc_g1_ParamLimits

0x3a04,	// (0x00011f16) list_double_graphic_pane_vc_g1

0x7723,	// (0x00015c35) list_double_graphic_pane_vc_g2_ParamLimits

0x7723,	// (0x00015c35) list_double_graphic_pane_vc_g2

0x7732,	// (0x00015c44) list_double_graphic_pane_vc_g3_ParamLimits

0x7732,	// (0x00015c44) list_double_graphic_pane_vc_g3

0x0002,

0xfa77,	// (0x0001df89) list_double_graphic_pane_vc_g_ParamLimits

0xfa77,	// (0x0001df89) list_double_graphic_pane_vc_g

0x773e,	// (0x00015c50) list_double_graphic_pane_vc_t1_ParamLimits

0x773e,	// (0x00015c50) list_double_graphic_pane_vc_t1

0x7752,	// (0x00015c64) list_double_graphic_pane_vc_t2_ParamLimits

0x7752,	// (0x00015c64) list_double_graphic_pane_vc_t2

0x0001,

0xfa7e,	// (0x0001df90) list_double_graphic_pane_vc_t_ParamLimits

0xfa7e,	// (0x0001df90) list_double_graphic_pane_vc_t

0x0d1c,	// (0x0000f22e) aid_size_cell_fastswap

0xb29f,	// (0x000197b1) aid_size_cell_touch_ParamLimits

0xb29f,	// (0x000197b1) aid_size_cell_touch

0x0f89,	// (0x0000f49b) popup_fast_swap_wide_window_ParamLimits

0x0f89,	// (0x0000f49b) popup_fast_swap_wide_window

0xb3ea,	// (0x000198fc) touch_pane_ParamLimits

0xb3ea,	// (0x000198fc) touch_pane

0x3e54,	// (0x00012366) button_value_adjust_pane_cp2

0x3e54,	// (0x00012366) button_value_adjust_pane_cp4

0x3e74,	// (0x00012386) form_field_data_pane_cp2

0xd775,	// (0x0001bc87) form_field_data_wide_pane_cp2

0x44f4,	// (0x00012a06) bg_scroll_pane_ParamLimits

0x1315,	// (0x0000f827) scroll_handle_pane_ParamLimits

0x1329,	// (0x0000f83b) scroll_sc2_down_pane_ParamLimits

0x1329,	// (0x0000f83b) scroll_sc2_down_pane

0x4525,	// (0x00012a37) scroll_sc2_up_pane_ParamLimits

0x4525,	// (0x00012a37) scroll_sc2_up_pane

0xe724,	// (0x0001cc36) grid_wheel_folder_pane_g1_ParamLimits

0xe724,	// (0x0001cc36) grid_wheel_folder_pane_g1

0x14e5,	// (0x0000f9f7) clock_nsta_pane_cp2_ParamLimits

0x14e5,	// (0x0000f9f7) clock_nsta_pane_cp2

0x50aa,	// (0x000135bc) listscroll_midp_pane_ParamLimits

0xdb81,	// (0x0001c093) midp_canvas_pane

0x5054,	// (0x00013566) nsta_clock_indic_pane

0x5090,	// (0x000135a2) listscroll_form_pane_vc

0x5098,	// (0x000135aa) listscroll_set_pane_vc_ParamLimits

0x5098,	// (0x000135aa) listscroll_set_pane_vc

0xdd65,	// (0x0001c277) clock_nsta_pane

0xdd8f,	// (0x0001c2a1) indicator_nsta_pane

0x54f4,	// (0x00013a06) bg_popup_sub_pane_cp2_ParamLimits

0x5508,	// (0x00013a1a) find_pane_cp2_ParamLimits

0x5508,	// (0x00013a1a) find_pane_cp2

0x551e,	// (0x00013a30) grid_toobar_pane_ParamLimits

0x56bc,	// (0x00013bce) list_form_gen_pane_vc_ParamLimits

0x56bc,	// (0x00013bce) list_form_gen_pane_vc

0x56d2,	// (0x00013be4) scroll_pane_cp8_vc_ParamLimits

0x56d2,	// (0x00013be4) scroll_pane_cp8_vc

0x574e,	// (0x00013c60) data_form_wide_pane_vc_ParamLimits

0x574e,	// (0x00013c60) data_form_wide_pane_vc

0x575a,	// (0x00013c6c) form_field_data_wide_pane_vc_g1

0x5762,	// (0x00013c74) form_field_data_wide_pane_vc_t1_ParamLimits

0x5762,	// (0x00013c74) form_field_data_wide_pane_vc_t1

0x3f2e,	// (0x00012440) input_focus_pane_cp6_vc_ParamLimits

0x3f2e,	// (0x00012440) input_focus_pane_cp6_vc

0xe129,	// (0x0001c63b) list_midp_pane_ParamLimits

0x6f12,	// (0x00015424) scroll_pane_cp16_ParamLimits

0x6f12,	// (0x00015424) scroll_pane_cp16

0x5b3f,	// (0x00014051) button_value_adjust_pane_ParamLimits

0x5b3f,	// (0x00014051) button_value_adjust_pane

0xe374,	// (0x0001c886) button_value_adjust_pane_cp6_ParamLimits

0xe374,	// (0x0001c886) button_value_adjust_pane_cp6

0xe48a,	// (0x0001c99c) settings_code_pane_cp_ParamLimits

0xe48a,	// (0x0001c99c) settings_code_pane_cp

0x307c,	// (0x0001158e) cell_touch_pane_g1

0x307c,	// (0x0001158e) cell_touch_pane_g2

0x0001,

0xf6ff,	// (0x0001dc11) cell_touch_pane_g

0xe603,	// (0x0001cb15) cell_touch_pane_cp_ParamLimits

0xe603,	// (0x0001cb15) cell_touch_pane_cp

0xe61f,	// (0x0001cb31) cell_touch_pane_ParamLimits

0xe61f,	// (0x0001cb31) cell_touch_pane

0x307c,	// (0x0001158e) scroll_sc2_down_pane_g1

0x307c,	// (0x0001158e) scroll_sc2_up_pane_g1

0x3086,	// (0x00011598) bg_set_opt_pane_cp4_vc

0x733a,	// (0x0001584c) list_set_graphic_pane_vc_g1_ParamLimits

0x733a,	// (0x0001584c) list_set_graphic_pane_vc_g1

0x7346,	// (0x00015858) list_set_graphic_pane_vc_g2_ParamLimits

0x7346,	// (0x00015858) list_set_graphic_pane_vc_g2

0x0001,

0xf9f6,	// (0x0001df08) list_set_graphic_pane_vc_g_ParamLimits

0xf9f6,	// (0x0001df08) list_set_graphic_pane_vc_g

0x7352,	// (0x00015864) text_primary_small_cp13_vc_ParamLimits

0x7352,	// (0x00015864) text_primary_small_cp13_vc

0x736a,	// (0x0001587c) list_set_graphic_pane_vc_ParamLimits

0x736a,	// (0x0001587c) list_set_graphic_pane_vc

0x3086,	// (0x00011598) input_focus_pane_cp2_vc

0x307c,	// (0x0001158e) setting_code_pane_vc_g1

0x31b1,	// (0x000116c3) setting_code_pane_vc_t1

0x737d,	// (0x0001588f) set_text_pane_vc_t1_ParamLimits

0x737d,	// (0x0001588f) set_text_pane_vc_t1

0x3086,	// (0x00011598) input_focus_pane_cp1_vc

0x739a,	// (0x000158ac) list_set_text_pane_vc

0x307c,	// (0x0001158e) setting_text_pane_vc_g1

0x3086,	// (0x00011598) bg_set_opt_pane_cp2_vc

0x31a8,	// (0x000116ba) setting_slider_graphic_pane_vc_g1

0x73a4,	// (0x000158b6) setting_slider_graphic_pane_vc_t1

0x73b4,	// (0x000158c6) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fb,	// (0x0001df0d) setting_slider_graphic_pane_vc_t

0x73c4,	// (0x000158d6) slider_set_pane_cp_vc

0x73cc,	// (0x000158de) slider_set_pane_vc_g1

0x73d5,	// (0x000158e7) slider_set_pane_vc_g2

0x0006,

0xfa00,	// (0x0001df12) slider_set_pane_vc_g

0x405b,	// (0x0001256d) set_opt_bg_pane_g1_copy1

0x4063,	// (0x00012575) set_opt_bg_pane_g2_copy1

0x7401,	// (0x00015913) set_opt_bg_pane_g3_copy1

0x4073,	// (0x00012585) set_opt_bg_pane_g4_copy1

0x407b,	// (0x0001258d) set_opt_bg_pane_g5_copy1

0x4083,	// (0x00012595) set_opt_bg_pane_g6_copy1

0x7409,	// (0x0001591b) set_opt_bg_pane_g7_copy1

0x7413,	// (0x00015925) set_opt_bg_pane_g8_copy1

0x741b,	// (0x0001592d) set_opt_bg_pane_g9_copy1

0x3086,	// (0x00011598) bg_set_opt_pane_cp_vc

0x7423,	// (0x00015935) setting_slider_pane_vc_t1

0x7432,	// (0x00015944) setting_slider_pane_vc_t2

0x7442,	// (0x00015954) setting_slider_pane_vc_t3

0x0002,

0xfa0f,	// (0x0001df21) setting_slider_pane_vc_t

0x7452,	// (0x00015964) slider_set_pane_vc

0x1ec1,	// (0x000103d3) volume_set_pane_vc_g1

0x21b0,	// (0x000106c2) volume_set_pane_vc_g2

0x21b9,	// (0x000106cb) volume_set_pane_vc_g3

0x21c2,	// (0x000106d4) volume_set_pane_vc_g4

0x21cb,	// (0x000106dd) volume_set_pane_vc_g5

0x21d4,	// (0x000106e6) volume_set_pane_vc_g6

0x1eee,	// (0x00010400) volume_set_pane_vc_g7

0x21dd,	// (0x000106ef) volume_set_pane_vc_g8

0x21e6,	// (0x000106f8) volume_set_pane_vc_g9

0x21ef,	// (0x00010701) volume_set_pane_vc_g10

0x0009,

0xfa16,	// (0x0001df28) volume_set_pane_vc_g

0x745a,	// (0x0001596c) volume_set_pane_vc

0x7462,	// (0x00015974) button_value_adjust_pane_cp1_vc

0x746c,	// (0x0001597e) list_highlight_pane_cp2_vc

0x7475,	// (0x00015987) list_set_pane_vc_ParamLimits

0x7475,	// (0x00015987) list_set_pane_vc

0x74d3,	// (0x000159e5) main_pane_set_vc_t1_ParamLimits

0x74d3,	// (0x000159e5) main_pane_set_vc_t1

0x74e8,	// (0x000159fa) main_pane_set_vc_t2_ParamLimits

0x74e8,	// (0x000159fa) main_pane_set_vc_t2

0x74fa,	// (0x00015a0c) main_pane_set_vc_t3_ParamLimits

0x74fa,	// (0x00015a0c) main_pane_set_vc_t3

0x750c,	// (0x00015a1e) main_pane_set_vc_t4_ParamLimits

0x750c,	// (0x00015a1e) main_pane_set_vc_t4

0x0003,

0xfa2b,	// (0x0001df3d) main_pane_set_vc_t_ParamLimits

0xfa2b,	// (0x0001df3d) main_pane_set_vc_t

0x751e,	// (0x00015a30) setting_code_pane_vc_ParamLimits

0x751e,	// (0x00015a30) setting_code_pane_vc

0x752d,	// (0x00015a3f) setting_slider_graphic_pane_vc

0x752d,	// (0x00015a3f) setting_slider_pane_vc

0x752d,	// (0x00015a3f) setting_text_pane_vc

0x752d,	// (0x00015a3f) setting_volume_pane_vc

0x7535,	// (0x00015a47) scroll_pane_cp121_vc

0x3e42,	// (0x00012354) set_content_pane_vc

0x776a,	// (0x00015c7c) button_value_adjust_pane_g1

0x7773,	// (0x00015c85) button_value_adjust_pane_g2

0x0001,

0xfa83,	// (0x0001df95) button_value_adjust_pane_g

0x777c,	// (0x00015c8e) form_field_slider_wide_pane_vc_t1_ParamLimits

0x777c,	// (0x00015c8e) form_field_slider_wide_pane_vc_t1

0x7790,	// (0x00015ca2) form_field_slider_wide_pane_vc_t2_ParamLimits

0x7790,	// (0x00015ca2) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa88,	// (0x0001df9a) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa88,	// (0x0001df9a) form_field_slider_wide_pane_vc_t

0x33fb,	// (0x0001190d) input_focus_pane_cp10_vc_ParamLimits

0x33fb,	// (0x0001190d) input_focus_pane_cp10_vc

0x77bc,	// (0x00015cce) slider_cont_pane_cp1_vc_ParamLimits

0x77bc,	// (0x00015cce) slider_cont_pane_cp1_vc

0x77cc,	// (0x00015cde) slider_form_pane_g1_cp2

0x73d5,	// (0x000158e7) slider_form_pane_g2_cp2

0x77f9,	// (0x00015d0b) form_field_slider_pane_vc_t3

0x7807,	// (0x00015d19) form_field_slider_pane_vc_t4

0x7815,	// (0x00015d27) slider_form_pane_vc_ParamLimits

0x7815,	// (0x00015d27) slider_form_pane_vc

0x7822,	// (0x00015d34) form_field_slider_pane_vc_t1_ParamLimits

0x7822,	// (0x00015d34) form_field_slider_pane_vc_t1

0x7790,	// (0x00015ca2) form_field_slider_pane_vc_t2_ParamLimits

0x7790,	// (0x00015ca2) form_field_slider_pane_vc_t2

0x0001,

0xfa9a,	// (0x0001dfac) form_field_slider_pane_vc_t_ParamLimits

0xfa9a,	// (0x0001dfac) form_field_slider_pane_vc_t

0x33fb,	// (0x0001190d) input_focus_pane_cp9_vc_ParamLimits

0x33fb,	// (0x0001190d) input_focus_pane_cp9_vc

0x783e,	// (0x00015d50) slider_cont_pane_vc_ParamLimits

0x783e,	// (0x00015d50) slider_cont_pane_vc

0x7850,	// (0x00015d62) list_form_graphic_pane_cp_vc_ParamLimits

0x7850,	// (0x00015d62) list_form_graphic_pane_cp_vc

0x575a,	// (0x00013c6c) form_field_popup_wide_pane_vc_g1

0x7865,	// (0x00015d77) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7865,	// (0x00015d77) form_field_popup_wide_pane_vc_t1

0x3f2e,	// (0x00012440) input_focus_pane_cp8_vc_ParamLimits

0x3f2e,	// (0x00012440) input_focus_pane_cp8_vc

0x78aa,	// (0x00015dbc) list_form_wide_pane_vc_ParamLimits

0x78aa,	// (0x00015dbc) list_form_wide_pane_vc

0x78b6,	// (0x00015dc8) list_form_graphic_pane_vc_g1

0x78be,	// (0x00015dd0) list_form_graphic_pane_vc_t1_ParamLimits

0x78be,	// (0x00015dd0) list_form_graphic_pane_vc_t1

0x3166,	// (0x00011678) list_highlight_pane_cp5_vc_ParamLimits

0x3166,	// (0x00011678) list_highlight_pane_cp5_vc

0x78da,	// (0x00015dec) list_form_graphic_pane_vc_ParamLimits

0x78da,	// (0x00015dec) list_form_graphic_pane_vc

0x575a,	// (0x00013c6c) form_field_popup_pane_vc_g1

0x78f0,	// (0x00015e02) form_field_popup_pane_vc_t1_ParamLimits

0x78f0,	// (0x00015e02) form_field_popup_pane_vc_t1

0x3f2e,	// (0x00012440) input_focus_pane_cp7_vc_ParamLimits

0x3f2e,	// (0x00012440) input_focus_pane_cp7_vc

0x7907,	// (0x00015e19) list_form_pane_vc_ParamLimits

0x7907,	// (0x00015e19) list_form_pane_vc

0x7913,	// (0x00015e25) data_form_pane_vc_t1_ParamLimits

0x7913,	// (0x00015e25) data_form_pane_vc_t1

0x405b,	// (0x0001256d) input_focus_pane_vc_g1

0x4063,	// (0x00012575) input_focus_pane_vc_g2

0x406b,	// (0x0001257d) input_focus_pane_vc_g3

0x4073,	// (0x00012585) input_focus_pane_vc_g4

0x407b,	// (0x0001258d) input_focus_pane_vc_g5

0x4083,	// (0x00012595) input_focus_pane_vc_g6

0x408b,	// (0x0001259d) input_focus_pane_vc_g7

0x4093,	// (0x000125a5) input_focus_pane_vc_g8

0x409b,	// (0x000125ad) input_focus_pane_vc_g9

0x307c,	// (0x0001158e) input_focus_pane_vc_g10

0x0009,

0xf688,	// (0x0001db9a) input_focus_pane_vc_g

0x574e,	// (0x00013c60) data_form_pane_vc_ParamLimits

0x574e,	// (0x00013c60) data_form_pane_vc

0x575a,	// (0x00013c6c) form_field_data_pane_vc_g1

0x792e,	// (0x00015e40) form_field_data_pane_vc_t1_ParamLimits

0x792e,	// (0x00015e40) form_field_data_pane_vc_t1

0x3f2e,	// (0x00012440) input_focus_pane_vc_ParamLimits

0x3f2e,	// (0x00012440) input_focus_pane_vc

0x7948,	// (0x00015e5a) button_value_adjust_pane_cp3_vc

0x7950,	// (0x00015e62) button_value_adjust_pane_cp5_vc

0x7958,	// (0x00015e6a) form_field_data_pane_vc_ParamLimits

0x7958,	// (0x00015e6a) form_field_data_pane_vc

0x796f,	// (0x00015e81) form_field_data_pane_vc_cp2

0x7977,	// (0x00015e89) form_field_data_wide_pane_vc_ParamLimits

0x7977,	// (0x00015e89) form_field_data_wide_pane_vc

0x798d,	// (0x00015e9f) form_field_data_wide_pane_vc_cp2

0x7995,	// (0x00015ea7) form_field_popup_pane_vc_ParamLimits

0x7995,	// (0x00015ea7) form_field_popup_pane_vc

0x79ac,	// (0x00015ebe) form_field_popup_wide_pane_vc_ParamLimits

0x79ac,	// (0x00015ebe) form_field_popup_wide_pane_vc

0x79c2,	// (0x00015ed4) form_field_slider_pane_vc_ParamLimits

0x79c2,	// (0x00015ed4) form_field_slider_pane_vc

0x79d5,	// (0x00015ee7) form_field_slider_wide_pane_vc_ParamLimits

0x79d5,	// (0x00015ee7) form_field_slider_wide_pane_vc

0xe63d,	// (0x0001cb4f) grid_touch_1_pane_ParamLimits

0xe63d,	// (0x0001cb4f) grid_touch_1_pane

0xe651,	// (0x0001cb63) grid_touch_2_pane_ParamLimits

0xe651,	// (0x0001cb63) grid_touch_2_pane

0x7aaa,	// (0x00015fbc) touch_pane_g1_ParamLimits

0x7aaa,	// (0x00015fbc) touch_pane_g1

0x7a0c,	// (0x00015f1e) cell_app_pane_cp_wide_ParamLimits

0x7a0c,	// (0x00015f1e) cell_app_pane_cp_wide

0x7a1d,	// (0x00015f2f) grid_popup_fast_wide_pane_ParamLimits

0x7a1d,	// (0x00015f2f) grid_popup_fast_wide_pane

0x7a31,	// (0x00015f43) scroll_pane_cp19_ParamLimits

0x7a31,	// (0x00015f43) scroll_pane_cp19

0x3086,	// (0x00011598) bg_popup_window_pane_cp20

0x7a45,	// (0x00015f57) listscroll_popup_fast_wide_pane

0x424f,	// (0x00012761) grid_indicator_nsta_pane

0x7a4d,	// (0x00015f5f) clock_nsta_pane_g1

0x7a56,	// (0x00015f68) clock_nsta_pane_t1

0xe67b,	// (0x0001cb8d) cell_indicator_nsta_pane_ParamLimits

0xe67b,	// (0x0001cb8d) cell_indicator_nsta_pane

0x7aaa,	// (0x00015fbc) cell_indicator_nsta_pane_g1

0xe698,	// (0x0001cbaa) cell_indicator_nsta_pane_g2

0x0001,

0xfaab,	// (0x0001dfbd) cell_indicator_nsta_pane_g

0x7ace,	// (0x00015fe0) clock_nsta_pane_cp

0x7ad6,	// (0x00015fe8) indicator_nsta_pane_cp

0x7ade,	// (0x00015ff0) nsta_clock_indic_pane_g1

0x3249,	// (0x0001175b) grid_indicator_pane

0x461a,	// (0x00012b2c) scroll_pane_cp29

0x1434,	// (0x0000f946) indicator_nsta_pane_cp2_ParamLimits

0x1434,	// (0x0000f946) indicator_nsta_pane_cp2

0x3166,	// (0x00011678) main_apps_wheel_pane

0x59ca,	// (0x00013edc) form_midp_field_text_pane_ParamLimits

0x5b11,	// (0x00014023) scroll_bar_cp050_ParamLimits

0x7b3f,	// (0x00016051) cell_indicator_pane_ParamLimits

0x7b3f,	// (0x00016051) cell_indicator_pane

0x7b5a,	// (0x0001606c) cell_indicator_pane_g1

0xe6ae,	// (0x0001cbc0) grid_wheel_folder_pane_ParamLimits

0xe6ae,	// (0x0001cbc0) grid_wheel_folder_pane

0xe6bc,	// (0x0001cbce) list_wheel_apps_pane_ParamLimits

0xe6bc,	// (0x0001cbce) list_wheel_apps_pane

0xe6ca,	// (0x0001cbdc) main_apps_wheel_pane_g1_ParamLimits

0xe6ca,	// (0x0001cbdc) main_apps_wheel_pane_g1

0xe6d6,	// (0x0001cbe8) main_apps_wheel_pane_g2_ParamLimits

0xe6d6,	// (0x0001cbe8) main_apps_wheel_pane_g2

0x0001,

0xfac7,	// (0x0001dfd9) main_apps_wheel_pane_g_ParamLimits

0xfac7,	// (0x0001dfd9) main_apps_wheel_pane_g

0xe6e4,	// (0x0001cbf6) main_apps_wheel_pane_t1_ParamLimits

0xe6e4,	// (0x0001cbf6) main_apps_wheel_pane_t1

0xe6f8,	// (0x0001cc0a) list_wheel_apps_pane_g1

0xe700,	// (0x0001cc12) list_wheel_apps_pane_g2

0xe708,	// (0x0001cc1a) list_wheel_apps_pane_g3

0xe710,	// (0x0001cc22) list_wheel_apps_pane_g4

0xe71a,	// (0x0001cc2c) list_wheel_apps_pane_g5

0x0004,

0xfacc,	// (0x0001dfde) list_wheel_apps_pane_g

0x4bf2,	// (0x00013104) navi_icon_text_pane

0xdc59,	// (0x0001c16b) aid_fill_nsta

0x7c21,	// (0x00016133) navi_icon_text_pane_g1

0x7c2d,	// (0x0001613f) navi_icon_text_pane_t1

0x4a94,	// (0x00012fa6) list_set_graphic_pane_t1_ParamLimits

0x4a94,	// (0x00012fa6) list_set_graphic_pane_t1

0x6263,	// (0x00014775) popup_midp_note_alarm_window_t6_ParamLimits

0x6263,	// (0x00014775) popup_midp_note_alarm_window_t6

0x6275,	// (0x00014787) popup_midp_note_alarm_window_t7_ParamLimits

0x6275,	// (0x00014787) popup_midp_note_alarm_window_t7

0x6287,	// (0x00014799) popup_midp_note_alarm_window_t8_ParamLimits

0x6287,	// (0x00014799) popup_midp_note_alarm_window_t8

0x6299,	// (0x000147ab) popup_midp_note_alarm_window_t9_ParamLimits

0x6299,	// (0x000147ab) popup_midp_note_alarm_window_t9

0x62ab,	// (0x000147bd) popup_midp_note_alarm_window_t10_ParamLimits

0x62ab,	// (0x000147bd) popup_midp_note_alarm_window_t10

0x62bd,	// (0x000147cf) popup_midp_note_alarm_window_t11_ParamLimits

0x62bd,	// (0x000147cf) popup_midp_note_alarm_window_t11

0x62cf,	// (0x000147e1) scroll_pane_cp17_ParamLimits

0x62cf,	// (0x000147e1) scroll_pane_cp17

0x1ec1,	// (0x000103d3) volume_small_pane_cp_g1

0x21f8,	// (0x0001070a) volume_small_pane_cp_g2

0x2201,	// (0x00010713) volume_small_pane_cp_g3

0x1ed3,	// (0x000103e5) volume_small_pane_cp_g4

0x220a,	// (0x0001071c) volume_small_pane_cp_g5

0x21cb,	// (0x000106dd) volume_small_pane_cp_g6

0x1ee5,	// (0x000103f7) volume_small_pane_cp_g7

0x2213,	// (0x00010725) volume_small_pane_cp_g8

0x221c,	// (0x0001072e) volume_small_pane_cp_g9

0x1ef7,	// (0x00010409) volume_small_pane_cp_g10

0x4e39,	// (0x0001334b) midp_ticker_pane_g1_ParamLimits

0x4e45,	// (0x00013357) midp_ticker_pane_g2_ParamLimits

0xf754,	// (0x0001dc66) midp_ticker_pane_g_ParamLimits

0x4e51,	// (0x00013363) midp_ticker_pane_t1_ParamLimits

0xdc7d,	// (0x0001c18f) aid_fill_nsta_2

0x5afd,	// (0x0001400f) list_form2_midp_pane

0x6c78,	// (0x0001518a) midp_editing_number_pane_ParamLimits

0x6c87,	// (0x00015199) midp_ticker_pane_ParamLimits

0x7c3f,	// (0x00016151) form2_midp_field_pane

0x7c63,	// (0x00016175) scroll_pane_cp51

0x7c83,	// (0x00016195) form2_midp_button_pane_ParamLimits

0x7c83,	// (0x00016195) form2_midp_button_pane

0x7c95,	// (0x000161a7) form2_midp_content_pane_ParamLimits

0x7c95,	// (0x000161a7) form2_midp_content_pane

0x7caf,	// (0x000161c1) form2_midp_field_choice_group_pane

0x7cb7,	// (0x000161c9) form2_midp_field_pane_g1

0x7cbf,	// (0x000161d1) form2_midp_field_pane_g2

0x7cc7,	// (0x000161d9) form2_midp_field_pane_g3

0x7ccf,	// (0x000161e1) form2_midp_field_pane_g4

0x0003,

0xfaf1,	// (0x0001e003) form2_midp_field_pane_g

0x7cd7,	// (0x000161e9) form2_midp_gauge_slider_pane

0x7cdf,	// (0x000161f1) form2_midp_gauge_wait_pane

0x7ce7,	// (0x000161f9) form2_midp_image_pane_ParamLimits

0x7ce7,	// (0x000161f9) form2_midp_image_pane

0x7d02,	// (0x00016214) form2_midp_label_pane_ParamLimits

0x7d02,	// (0x00016214) form2_midp_label_pane

0xe74d,	// (0x0001cc5f) form2_midp_label_pane_cp_ParamLimits

0xe74d,	// (0x0001cc5f) form2_midp_label_pane_cp

0x7d3c,	// (0x0001624e) form2_midp_string_pane_ParamLimits

0x7d3c,	// (0x0001624e) form2_midp_string_pane

0x7d4e,	// (0x00016260) form2_midp_text_pane_ParamLimits

0x7d4e,	// (0x00016260) form2_midp_text_pane

0x7d69,	// (0x0001627b) form2_midp_time_pane

0x7d79,	// (0x0001628b) input_focus_pane_cp51_ParamLimits

0x7d79,	// (0x0001628b) input_focus_pane_cp51

0x7d91,	// (0x000162a3) form2_midp_label_pane_t1_ParamLimits

0x7d91,	// (0x000162a3) form2_midp_label_pane_t1

0x7dd1,	// (0x000162e3) form2_mdip_text_pane_t1_ParamLimits

0x7dd1,	// (0x000162e3) form2_mdip_text_pane_t1

0x7ded,	// (0x000162ff) form2_midp_time_pane_t1

0x7e08,	// (0x0001631a) form2_midp_gauge_slider_pane_t1

0xe76e,	// (0x0001cc80) form2_midp_gauge_slider_pane_t2

0xe782,	// (0x0001cc94) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafa,	// (0x0001e00c) form2_midp_gauge_slider_pane_t

0x7e3e,	// (0x00016350) form2_midp_slider_pane

0x7e4a,	// (0x0001635c) form2_midp_gauge_wait_pane_t1

0x7e58,	// (0x0001636a) form2_midp_wait_pane_ParamLimits

0x7e58,	// (0x0001636a) form2_midp_wait_pane

0xe796,	// (0x0001cca8) list_single_2graphic_pane_cp4_ParamLimits

0xe796,	// (0x0001cca8) list_single_2graphic_pane_cp4

0xe095,	// (0x0001c5a7) list_single_midp_graphic_pane_cp_ParamLimits

0xe095,	// (0x0001c5a7) list_single_midp_graphic_pane_cp

0x3086,	// (0x00011598) list_highlight_pane_cp20

0x7eb2,	// (0x000163c4) list_single_2graphic_pane_g1_cp4

0x71c6,	// (0x000156d8) list_single_2graphic_pane_g2_cp4

0x7eba,	// (0x000163cc) list_single_2graphic_pane_t1_cp4

0x3166,	// (0x00011678) list_highlight_pane_cp21

0x7ec9,	// (0x000163db) list_single_midp_graphic_pane_g4_cp

0x7ed8,	// (0x000163ea) list_single_midp_graphic_pane_t1_cp

0xe7ac,	// (0x0001ccbe) form2_mdip_string_pane_t1_ParamLimits

0xe7ac,	// (0x0001ccbe) form2_mdip_string_pane_t1

0x3086,	// (0x00011598) bg_wml_button_pane_cp2

0x307c,	// (0x0001158e) form2_midp_image_pane_g1

0x3c1e,	// (0x00012130) list_double_large_graphic_pane_g5_ParamLimits

0x3c1e,	// (0x00012130) list_double_large_graphic_pane_g5

0x50aa,	// (0x000135bc) midp_form_pane_ParamLimits

0x3166,	// (0x00011678) main_apps_wheel_pane_ParamLimits

0xb99b,	// (0x00019ead) popup_preview_window_ParamLimits

0xb99b,	// (0x00019ead) popup_preview_window

0x1cc0,	// (0x000101d2) popup_touch_info_window_ParamLimits

0x1cc0,	// (0x000101d2) popup_touch_info_window

0x1cde,	// (0x000101f0) popup_touch_menu_window_ParamLimits

0x1cde,	// (0x000101f0) popup_touch_menu_window

0x3072,	// (0x00011584) bg_popup_sub_pane_cp6

0x8010,	// (0x00016522) list_touch_menu_pane

0x8018,	// (0x0001652a) list_single_touch_menu_pane_ParamLimits

0x8018,	// (0x0001652a) list_single_touch_menu_pane

0x802c,	// (0x0001653e) list_single_touch_menu_pane_t1

0x3166,	// (0x00011678) bg_popup_sub_pane_cp7_ParamLimits

0x3166,	// (0x00011678) bg_popup_sub_pane_cp7

0x803a,	// (0x0001654c) heading_sub_pane

0x8042,	// (0x00016554) list_touch_info_pane_ParamLimits

0x8042,	// (0x00016554) list_touch_info_pane

0x8051,	// (0x00016563) list_single_touch_info_pane_ParamLimits

0x8051,	// (0x00016563) list_single_touch_info_pane

0x8063,	// (0x00016575) list_single_touch_info_pane_t1

0x8071,	// (0x00016583) list_single_touch_info_pane_t2

0x0001,

0xfb08,	// (0x0001e01a) list_single_touch_info_pane_t

0x4d66,	// (0x00013278) bg_popup_heading_pane_cp

0x807f,	// (0x00016591) heading_sub_pane_t1

0x56e8,	// (0x00013bfa) bg_popup_preview_window_pane_cp_ParamLimits

0x56e8,	// (0x00013bfa) bg_popup_preview_window_pane_cp

0x803a,	// (0x0001654c) heading_preview_pane

0x8042,	// (0x00016554) list_preview_pane_ParamLimits

0x8042,	// (0x00016554) list_preview_pane

0x808d,	// (0x0001659f) popup_preview_window_g1

0x8051,	// (0x00016563) list_single_preview_pane_ParamLimits

0x8051,	// (0x00016563) list_single_preview_pane

0x8095,	// (0x000165a7) list_single_preview_pane_g1

0x809d,	// (0x000165af) list_single_preview_pane_t1

0x8063,	// (0x00016575) list_single_preview_pane_t2

0x0001,

0xfb0d,	// (0x0001e01f) list_single_preview_pane_t

0x80ab,	// (0x000165bd) bg_popup_heading_pane_cp2_ParamLimits

0x80ab,	// (0x000165bd) bg_popup_heading_pane_cp2

0x80c1,	// (0x000165d3) heading_preview_pane_g1

0x80c9,	// (0x000165db) heading_preview_pane_t1_ParamLimits

0x80c9,	// (0x000165db) heading_preview_pane_t1

0x326c,	// (0x0001177e) soft_indicator_pane_t1_ParamLimits

0x394a,	// (0x00011e5c) scroll_pane_ParamLimits

0x4513,	// (0x00012a25) scroll_sc2_left_pane

0x451c,	// (0x00012a2e) scroll_sc2_right_pane

0x453b,	// (0x00012a4d) scroll_bg_pane_g1_ParamLimits

0x4550,	// (0x00012a62) scroll_bg_pane_g2_ParamLimits

0x4568,	// (0x00012a7a) scroll_bg_pane_g3_ParamLimits

0xf6df,	// (0x0001dbf1) scroll_bg_pane_g_ParamLimits

0x453b,	// (0x00012a4d) scroll_handle_pane_g1_ParamLimits

0x458a,	// (0x00012a9c) scroll_handle_pane_g2_ParamLimits

0x4568,	// (0x00012a7a) scroll_handle_pane_g3_ParamLimits

0xf6e6,	// (0x0001dbf8) scroll_handle_pane_g_ParamLimits

0x1790,	// (0x0000fca2) popup_choice_list_window_ParamLimits

0x1790,	// (0x0000fca2) popup_choice_list_window

0x5500,	// (0x00013a12) choice_list_pane

0x5598,	// (0x00013aaa) cell_toolbar_pane_t1

0x55c0,	// (0x00013ad2) toolbar_button_pane_ParamLimits

0x6789,	// (0x00014c9b) ai_gene_pane_1_t2_ParamLimits

0x6789,	// (0x00014c9b) ai_gene_pane_1_t2

0x0001,

0xf909,	// (0x0001de1b) ai_gene_pane_1_t_ParamLimits

0xf909,	// (0x0001de1b) ai_gene_pane_1_t

0x80e6,	// (0x000165f8) scroll_sc2_left_pane_g1

0x80e6,	// (0x000165f8) scroll_sc2_right_pane_g1

0x50aa,	// (0x000135bc) bg_popup_sub_pane_cp10

0x80f0,	// (0x00016602) list_choice_list_pane

0x8109,	// (0x0001661b) list_single_choice_list_pane_ParamLimits

0x8109,	// (0x0001661b) list_single_choice_list_pane

0x811c,	// (0x0001662e) list_single_choice_list_pane_g1

0x4220,	// (0x00012732) list_single_choice_list_pane_t1_ParamLimits

0x4220,	// (0x00012732) list_single_choice_list_pane_t1

0x8124,	// (0x00016636) choice_list_pane_g1

0x812c,	// (0x0001663e) choice_list_pane_t1

0x3072,	// (0x00011584) input_focus_pane_cp11

0x43f4,	// (0x00012906) title_pane_stacon_g2_ParamLimits

0x43f4,	// (0x00012906) title_pane_stacon_g2

0x0002,

0xf6c5,	// (0x0001dbd7) title_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001dbd7) title_pane_stacon_g

0x4d66,	// (0x00013278) cursor_press_pane

0xb654,	// (0x00019b66) popup_fep_hwr_window_ParamLimits

0xb654,	// (0x00019b66) popup_fep_hwr_window

0x18b0,	// (0x0000fdc2) popup_fep_vkb_window_ParamLimits

0x18b0,	// (0x0000fdc2) popup_fep_vkb_window

0x813a,	// (0x0001664c) cursor_press_pane_g1

0x0002,

0xfb36,	// (0x0001e048) fep_vkb_side_pane_g_ParamLimits

0x225e,	// (0x00010770) fep_hwr_candidate_pane_ParamLimits

0x225e,	// (0x00010770) fep_hwr_candidate_pane

0x2288,	// (0x0001079a) fep_hwr_side_pane_ParamLimits

0x2288,	// (0x0001079a) fep_hwr_side_pane

0x22a8,	// (0x000107ba) fep_hwr_top_pane_ParamLimits

0x22a8,	// (0x000107ba) fep_hwr_top_pane

0x22c0,	// (0x000107d2) fep_hwr_write_pane_ParamLimits

0x22c0,	// (0x000107d2) fep_hwr_write_pane

0xfb36,	// (0x0001e048) fep_vkb_side_pane_g

0x8142,	// (0x00016654) fep_hwr_top_pane_g1

0x8154,	// (0x00016666) fep_hwr_top_pane_g2

0x22fa,	// (0x0001080c) fep_hwr_top_pane_g3

0x0002,

0xfb12,	// (0x0001e024) fep_hwr_top_pane_g

0x230f,	// (0x00010821) fep_hwr_top_text_pane

0x46e0,	// (0x00012bf2) fep_hwr_top_text_pane_g1

0x818a,	// (0x0001669c) fep_hwr_top_text_pane_t1

0x2405,	// (0x00010917) fep_hwr_candidate_pane_g1

0x83cd,	// (0x000168df) fep_vkb_keypad_pane_g3_ParamLimits

0x83cd,	// (0x000168df) fep_vkb_keypad_pane_g3

0x83f5,	// (0x00016907) fep_vkb_keypad_pane_g4_ParamLimits

0x83f5,	// (0x00016907) fep_vkb_keypad_pane_g4

0x8464,	// (0x00016976) fep_vkb_bottom_pane_g2_ParamLimits

0x8464,	// (0x00016976) fep_vkb_bottom_pane_g2

0x0001,

0xfb3d,	// (0x0001e04f) fep_vkb_bottom_pane_g_ParamLimits

0xfb3d,	// (0x0001e04f) fep_vkb_bottom_pane_g

0x80e6,	// (0x000165f8) cell_vkb_side_pane_g2

0x0001,

0xfb47,	// (0x0001e059) cell_vkb_side_pane_g

0x84ef,	// (0x00016a01) cell_vkb_side_pane_t1

0x84fd,	// (0x00016a0f) cell_vkb_side_pane_t1_copy1

0x80e6,	// (0x000165f8) bg_fep_vkb_candidate_pane_g2

0x8629,	// (0x00016b3b) cell_vkb_candidate_pane_ParamLimits

0x8198,	// (0x000166aa) aid_size_cell_vkb_ParamLimits

0x8198,	// (0x000166aa) aid_size_cell_vkb

0x8629,	// (0x00016b3b) cell_vkb_candidate_pane

0x242c,	// (0x0001093e) bg_popup_fep_shadow_pane_g1

0xe83c,	// (0x0001cd4e) fep_vkb_bottom_pane_ParamLimits

0xe83c,	// (0x0001cd4e) fep_vkb_bottom_pane

0x825a,	// (0x0001676c) fep_vkb_candidate_pane_ParamLimits

0x825a,	// (0x0001676c) fep_vkb_candidate_pane

0xe861,	// (0x0001cd73) fep_vkb_keypad_pane_ParamLimits

0xe861,	// (0x0001cd73) fep_vkb_keypad_pane

0xe896,	// (0x0001cda8) fep_vkb_side_pane_ParamLimits

0xe896,	// (0x0001cda8) fep_vkb_side_pane

0xe8d2,	// (0x0001cde4) fep_vkb_top_pane_ParamLimits

0xe8d2,	// (0x0001cde4) fep_vkb_top_pane

0x8326,	// (0x00016838) fep_vkb_top_pane_g1_ParamLimits

0x8326,	// (0x00016838) fep_vkb_top_pane_g1

0x8335,	// (0x00016847) fep_vkb_top_pane_g2_ParamLimits

0x8335,	// (0x00016847) fep_vkb_top_pane_g2

0x8344,	// (0x00016856) fep_vkb_top_pane_g3_ParamLimits

0x8344,	// (0x00016856) fep_vkb_top_pane_g3

0x0003,

0xfb2d,	// (0x0001e03f) fep_vkb_top_pane_g_ParamLimits

0xfb2d,	// (0x0001e03f) fep_vkb_top_pane_g

0x8362,	// (0x00016874) fep_vkb_top_text_pane_ParamLimits

0x8362,	// (0x00016874) fep_vkb_top_text_pane

0xe907,	// (0x0001ce19) fep_vkb_side_pane_g1_ParamLimits

0xe907,	// (0x0001ce19) fep_vkb_side_pane_g1

0x83bc,	// (0x000168ce) grid_vkb_side_pane_ParamLimits

0x83bc,	// (0x000168ce) grid_vkb_side_pane

0x2434,	// (0x00010946) bg_popup_fep_shadow_pane_g2

0x243d,	// (0x0001094f) bg_popup_fep_shadow_pane_g3

0x2445,	// (0x00010957) bg_popup_fep_shadow_pane_g4

0x244e,	// (0x00010960) bg_popup_fep_shadow_pane_g5

0x2458,	// (0x0001096a) bg_popup_fep_shadow_pane_g6

0x2460,	// (0x00010972) bg_popup_fep_shadow_pane_g7

0x4073,	// (0x00012585) bg_popup_fep_shadow_pane_g8

0x8413,	// (0x00016925) grid_vkb_keypad_number_pane_ParamLimits

0x8413,	// (0x00016925) grid_vkb_keypad_number_pane

0x8423,	// (0x00016935) grid_vkb_keypad_pane_ParamLimits

0x8423,	// (0x00016935) grid_vkb_keypad_pane

0x8449,	// (0x0001695b) fep_vkb_bottom_pane_g1_ParamLimits

0x8449,	// (0x0001695b) fep_vkb_bottom_pane_g1

0x8472,	// (0x00016984) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x8472,	// (0x00016984) grid_vkb_keypad_bottom_left_pane

0x8487,	// (0x00016999) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x8487,	// (0x00016999) grid_vkb_keypad_bottom_right_pane

0x849c,	// (0x000169ae) fep_vkb_top_text_pane_g1

0xe94e,	// (0x0001ce60) fep_vkb_top_text_pane_t1

0xe960,	// (0x0001ce72) cell_vkb_side_pane_ParamLimits

0xe960,	// (0x0001ce72) cell_vkb_side_pane

0x80e6,	// (0x000165f8) cell_vkb_side_pane_g1

0x850b,	// (0x00016a1d) cell_vkb_keypad_pane_ParamLimits

0x850b,	// (0x00016a1d) cell_vkb_keypad_pane

0x8580,	// (0x00016a92) cell_vkb_keypad_pane_g1

0x0008,

0xfb5a,	// (0x0001e06c) bg_popup_fep_shadow_pane_g

0x2472,	// (0x00010984) cell_hwr_side_pane_g1

0x2472,	// (0x00010984) cell_hwr_side_pane_g2

0x858a,	// (0x00016a9c) cell_vkb_keypad_pane_t1

0xe976,	// (0x0001ce88) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe976,	// (0x0001ce88) cell_vkb_keypad_bottom_left_pane

0xe98b,	// (0x0001ce9d) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe98b,	// (0x0001ce9d) cell_vkb_keypad_bottom_right_pane

0x80e6,	// (0x000165f8) cell_vkb_keypad_bottom_left_pane_g1

0x80e6,	// (0x000165f8) cell_vkb_keypad_bottom_right_pane_g1

0x85ee,	// (0x00016b00) cell_vkb_keypad_number_pane_ParamLimits

0x85ee,	// (0x00016b00) cell_vkb_keypad_number_pane

0x860d,	// (0x00016b1f) cell_vkb_keypad_number_pane_g1

0x8617,	// (0x00016b29) cell_vkb_keypad_number_pane_g2

0x8620,	// (0x00016b32) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4c,	// (0x0001e05e) cell_vkb_keypad_number_pane_g

0x858a,	// (0x00016a9c) cell_vkb_keypad_number_pane_t1

0x8644,	// (0x00016b56) fep_vkb_candidate_pane_g1

0x0001,

0xfb6d,	// (0x0001e07f) cell_hwr_side_pane_g

0x865d,	// (0x00016b6f) cell_hwr_side_pane_t1

0x247c,	// (0x0001098e) cell_hwr_side_pane_t1_copy1

0x248a,	// (0x0001099c) cell_hwr_candidate_pane_g1

0x24b9,	// (0x000109cb) cell_hwr_candidate_pane_t1

0x80e6,	// (0x000165f8) cell_vkb_candidate_pane_g2

0x86a1,	// (0x00016bb3) cell_vkb_candidate_pane_t1

0x2225,	// (0x00010737) bg_popup_fep_shadow_pane_ParamLimits

0x2225,	// (0x00010737) bg_popup_fep_shadow_pane

0x22da,	// (0x000107ec) bg_fep_hwr_top_pane_g4

0x8166,	// (0x00016678) bg_hwr_side_pane_g1_ParamLimits

0x8166,	// (0x00016678) bg_hwr_side_pane_g1

0xbe1c,	// (0x0001a32e) cell_hwr_side_pane_ParamLimits

0xbe1c,	// (0x0001a32e) cell_hwr_side_pane

0x2386,	// (0x00010898) fep_hwr_write_pane_g1_ParamLimits

0x2386,	// (0x00010898) fep_hwr_write_pane_g1

0x2393,	// (0x000108a5) fep_hwr_write_pane_g2_ParamLimits

0x2393,	// (0x000108a5) fep_hwr_write_pane_g2

0x23a0,	// (0x000108b2) fep_hwr_write_pane_g3_ParamLimits

0x23a0,	// (0x000108b2) fep_hwr_write_pane_g3

0xbe3c,	// (0x0001a34e) fep_hwr_write_pane_g4_ParamLimits

0xbe3c,	// (0x0001a34e) fep_hwr_write_pane_g4

0x0005,

0xfb19,	// (0x0001e02b) fep_hwr_write_pane_g_ParamLimits

0xfb19,	// (0x0001e02b) fep_hwr_write_pane_g

0x22da,	// (0x000107ec) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x22da,	// (0x000107ec) bg_fep_hwr_candidate_pane_g2

0x23c3,	// (0x000108d5) cell_hwr_candidate_pane_ParamLimits

0x23c3,	// (0x000108d5) cell_hwr_candidate_pane

0x2405,	// (0x00010917) fep_hwr_candidate_pane_g1_ParamLimits

0x81c6,	// (0x000166d8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x81c6,	// (0x000166d8) bg_popup_fep_shadow_pane_cp2

0x8354,	// (0x00016866) fep_vkb_top_pane_g4_ParamLimits

0x8354,	// (0x00016866) fep_vkb_top_pane_g4

0x839a,	// (0x000168ac) fep_vkb_side_pane_g2_ParamLimits

0x839a,	// (0x000168ac) fep_vkb_side_pane_g2

0xd6a3,	// (0x0001bbb5) list_setting_pane_t4_ParamLimits

0xd6a3,	// (0x0001bbb5) list_setting_pane_t4

0xd71d,	// (0x0001bc2f) list_setting_number_pane_t5_ParamLimits

0xd71d,	// (0x0001bc2f) list_setting_number_pane_t5

0xd9e4,	// (0x0001bef6) list_double_heading_pane_cp2_ParamLimits

0xd9e4,	// (0x0001bef6) list_double_heading_pane_cp2

0x3b9b,	// (0x000120ad) list_double_heading_pane_g1_cp2_ParamLimits

0x3b9b,	// (0x000120ad) list_double_heading_pane_g1_cp2

0x3f54,	// (0x00012466) list_double_heading_pane_g2_cp2_ParamLimits

0x3f54,	// (0x00012466) list_double_heading_pane_g2_cp2

0x86af,	// (0x00016bc1) list_double_heading_pane_t1_cp2_ParamLimits

0x86af,	// (0x00016bc1) list_double_heading_pane_t1_cp2

0x86c5,	// (0x00016bd7) list_double_heading_pane_t2_cp2_ParamLimits

0x86c5,	// (0x00016bd7) list_double_heading_pane_t2_cp2

0x305a,	// (0x0001156c) aid_value_unit2

0x0fd5,	// (0x0000f4e7) popup_preview_fixed_window

0x3409,	// (0x0001191b) bg_popup_preview_window_pane_cp02

0x86d7,	// (0x00016be9) list_preview_fixed_pane

0x871d,	// (0x00016c2f) list_empty_pane_fp_ParamLimits

0x871d,	// (0x00016c2f) list_empty_pane_fp

0x871d,	// (0x00016c2f) list_single_cale_day_pane_fp_ParamLimits

0x871d,	// (0x00016c2f) list_single_cale_day_pane_fp

0x871d,	// (0x00016c2f) list_single_graphic_heading_pane_fp_ParamLimits

0x871d,	// (0x00016c2f) list_single_graphic_heading_pane_fp

0x871d,	// (0x00016c2f) list_single_graphic_pane_fp_ParamLimits

0x871d,	// (0x00016c2f) list_single_graphic_pane_fp

0x871d,	// (0x00016c2f) list_single_heading_pane_fp_ParamLimits

0x871d,	// (0x00016c2f) list_single_heading_pane_fp

0x871d,	// (0x00016c2f) list_single_pane_fp_ParamLimits

0x871d,	// (0x00016c2f) list_single_pane_fp

0x8733,	// (0x00016c45) list_single_pane_fp_g1_ParamLimits

0x8733,	// (0x00016c45) list_single_pane_fp_g1

0x3b9b,	// (0x000120ad) list_single_pane_fp_g2_ParamLimits

0x3b9b,	// (0x000120ad) list_single_pane_fp_g2

0x3f54,	// (0x00012466) list_single_pane_fp_g3_ParamLimits

0x3f54,	// (0x00012466) list_single_pane_fp_g3

0x873f,	// (0x00016c51) list_single_pane_fp_g4_ParamLimits

0x873f,	// (0x00016c51) list_single_pane_fp_g4

0x0003,

0xfb80,	// (0x0001e092) list_single_pane_fp_g_ParamLimits

0xfb80,	// (0x0001e092) list_single_pane_fp_g

0x874b,	// (0x00016c5d) list_single_pane_fp_t1_ParamLimits

0x874b,	// (0x00016c5d) list_single_pane_fp_t1

0x8762,	// (0x00016c74) list_single_graphic_pane_fp_g1_ParamLimits

0x8762,	// (0x00016c74) list_single_graphic_pane_fp_g1

0x8733,	// (0x00016c45) list_single_graphic_pane_fp_g2_ParamLimits

0x8733,	// (0x00016c45) list_single_graphic_pane_fp_g2

0x3b9b,	// (0x000120ad) list_single_graphic_pane_fp_g3_ParamLimits

0x3b9b,	// (0x000120ad) list_single_graphic_pane_fp_g3

0x3f54,	// (0x00012466) list_single_graphic_pane_fp_g4_ParamLimits

0x3f54,	// (0x00012466) list_single_graphic_pane_fp_g4

0x873f,	// (0x00016c51) list_single_graphic_pane_fp_g5_ParamLimits

0x873f,	// (0x00016c51) list_single_graphic_pane_fp_g5

0x0004,

0xfb89,	// (0x0001e09b) list_single_graphic_pane_fp_g_ParamLimits

0xfb89,	// (0x0001e09b) list_single_graphic_pane_fp_g

0x876e,	// (0x00016c80) list_single_graphic_pane_fp_t1_ParamLimits

0x876e,	// (0x00016c80) list_single_graphic_pane_fp_t1

0x8762,	// (0x00016c74) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x8762,	// (0x00016c74) list_single_graphic_heading_pane_fp_g1

0x8733,	// (0x00016c45) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8733,	// (0x00016c45) list_single_graphic_heading_pane_fp_g2

0x3b9b,	// (0x000120ad) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3b9b,	// (0x000120ad) list_single_graphic_heading_pane_fp_g3

0x3f54,	// (0x00012466) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3f54,	// (0x00012466) list_single_graphic_heading_pane_fp_g4

0x873f,	// (0x00016c51) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x873f,	// (0x00016c51) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0001e09b) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0001e09b) list_single_graphic_heading_pane_fp_g

0x8784,	// (0x00016c96) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x8784,	// (0x00016c96) list_single_graphic_heading_pane_fp_t1

0x879a,	// (0x00016cac) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x879a,	// (0x00016cac) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb94,	// (0x0001e0a6) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb94,	// (0x0001e0a6) list_single_graphic_heading_pane_fp_t

0x87ac,	// (0x00016cbe) list_single_cale_day_pane_fp_g1_ParamLimits

0x87ac,	// (0x00016cbe) list_single_cale_day_pane_fp_g1

0x87e4,	// (0x00016cf6) list_single_cale_day_pane_fp_g2_ParamLimits

0x87e4,	// (0x00016cf6) list_single_cale_day_pane_fp_g2

0x87f0,	// (0x00016d02) list_single_cale_day_pane_fp_g3_ParamLimits

0x87f0,	// (0x00016d02) list_single_cale_day_pane_fp_g3

0x8818,	// (0x00016d2a) list_single_cale_day_pane_fp_g4_ParamLimits

0x8818,	// (0x00016d2a) list_single_cale_day_pane_fp_g4

0x883c,	// (0x00016d4e) list_single_cale_day_pane_fp_g5_ParamLimits

0x883c,	// (0x00016d4e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb99,	// (0x0001e0ab) list_single_cale_day_pane_fp_g_ParamLimits

0xfb99,	// (0x0001e0ab) list_single_cale_day_pane_fp_g

0x8860,	// (0x00016d72) list_single_cale_day_pane_fp_t1_ParamLimits

0x8860,	// (0x00016d72) list_single_cale_day_pane_fp_t1

0x8886,	// (0x00016d98) list_single_cale_day_pane_fp_t2_ParamLimits

0x8886,	// (0x00016d98) list_single_cale_day_pane_fp_t2

0x889f,	// (0x00016db1) list_single_cale_day_pane_fp_t3_ParamLimits

0x889f,	// (0x00016db1) list_single_cale_day_pane_fp_t3

0x0002,

0xfba4,	// (0x0001e0b6) list_single_cale_day_pane_fp_t_ParamLimits

0xfba4,	// (0x0001e0b6) list_single_cale_day_pane_fp_t

0x8733,	// (0x00016c45) list_empty_pane_fp_g1_ParamLimits

0x8733,	// (0x00016c45) list_empty_pane_fp_g1

0x88b8,	// (0x00016dca) list_empty_pane_fp_t1

0x88c6,	// (0x00016dd8) list_empty_pane_fp_t2

0x0001,

0xfbab,	// (0x0001e0bd) list_empty_pane_fp_t

0x8733,	// (0x00016c45) list_single_heading_pane_fp_g1_ParamLimits

0x8733,	// (0x00016c45) list_single_heading_pane_fp_g1

0x3b9b,	// (0x000120ad) list_single_heading_pane_fp_g2_ParamLimits

0x3b9b,	// (0x000120ad) list_single_heading_pane_fp_g2

0x3f54,	// (0x00012466) list_single_heading_pane_fp_g3_ParamLimits

0x3f54,	// (0x00012466) list_single_heading_pane_fp_g3

0x0002,

0xfbb0,	// (0x0001e0c2) list_single_heading_pane_fp_g_ParamLimits

0xfbb0,	// (0x0001e0c2) list_single_heading_pane_fp_g

0x88d4,	// (0x00016de6) list_single_heading_pane_fp_t1_ParamLimits

0x88d4,	// (0x00016de6) list_single_heading_pane_fp_t1

0x88e6,	// (0x00016df8) list_single_heading_pane_fp_t2_ParamLimits

0x88e6,	// (0x00016df8) list_single_heading_pane_fp_t2

0x0001,

0xfbb7,	// (0x0001e0c9) list_single_heading_pane_fp_t_ParamLimits

0xfbb7,	// (0x0001e0c9) list_single_heading_pane_fp_t

0x428e,	// (0x000127a0) aid_size_cell_fast

0x3379,	// (0x0001188b) soft_indicator_pane_cp1_t1

0x42c8,	// (0x000127da) cell_app_pane_cp2_ParamLimits

0x42c8,	// (0x000127da) cell_app_pane_cp2

0x2247,	// (0x00010759) fep_hwr_candidate_drop_down_list_pane

0x241f,	// (0x00010931) fep_hwr_candidate_pane_g3_ParamLimits

0x241f,	// (0x00010931) fep_hwr_candidate_pane_g3

0x05ff,	// (0x0000eb11) fep_hwr_candidate_pane_g4_ParamLimits

0x05ff,	// (0x0000eb11) fep_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0001e038) fep_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0001e038) fep_hwr_candidate_pane_g

0x8249,	// (0x0001675b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x8249,	// (0x0001675b) fep_vkb_candidate_drop_down_list_pane

0x864c,	// (0x00016b5e) fep_vkb_candidate_pane_g3

0x8654,	// (0x00016b66) fep_vkb_candidate_pane_g4

0x0002,

0xfb53,	// (0x0001e065) fep_vkb_candidate_pane_g

0x248a,	// (0x0001099c) cell_hwr_candidate_pane_g1_ParamLimits

0x2498,	// (0x000109aa) cell_hwr_candidate_pane_g3_ParamLimits

0x2498,	// (0x000109aa) cell_hwr_candidate_pane_g3

0xa704,	// (0x00018c16) cell_hwr_candidate_pane_g4_ParamLimits

0xa704,	// (0x00018c16) cell_hwr_candidate_pane_g4

0x0002,

0xfb72,	// (0x0001e084) cell_hwr_candidate_pane_g_ParamLimits

0xfb72,	// (0x0001e084) cell_hwr_candidate_pane_g

0x866b,	// (0x00016b7d) cell_vkb_candidate_pane_g3_ParamLimits

0x866b,	// (0x00016b7d) cell_vkb_candidate_pane_g3

0x8686,	// (0x00016b98) cell_vkb_candidate_pane_g4_ParamLimits

0x8686,	// (0x00016b98) cell_vkb_candidate_pane_g4

0x88fc,	// (0x00016e0e) cell_app_pane_cp2_g1_ParamLimits

0x88fc,	// (0x00016e0e) cell_app_pane_cp2_g1

0x891a,	// (0x00016e2c) cell_app_pane_cp2_g2_ParamLimits

0x891a,	// (0x00016e2c) cell_app_pane_cp2_g2

0x0001,

0xfbbc,	// (0x0001e0ce) cell_app_pane_cp2_g_ParamLimits

0xfbbc,	// (0x0001e0ce) cell_app_pane_cp2_g

0x8926,	// (0x00016e38) cell_app_pane_cp2_t1_ParamLimits

0x8926,	// (0x00016e38) cell_app_pane_cp2_t1

0x3f2e,	// (0x00012440) grid_highlight_pane_cp1_ParamLimits

0x3f2e,	// (0x00012440) grid_highlight_pane_cp1

0x24d7,	// (0x000109e9) cell_hwr_candidate_pane_cp1_ParamLimits

0x24d7,	// (0x000109e9) cell_hwr_candidate_pane_cp1

0x248a,	// (0x0001099c) fep_hwr_candidate_drop_down_list_pane_g1

0x24f6,	// (0x00010a08) fep_hwr_candidate_drop_down_list_pane_g2

0x2503,	// (0x00010a15) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc1,	// (0x0001e0d3) fep_hwr_candidate_drop_down_list_pane_g

0x2510,	// (0x00010a22) fep_hwr_candidate_drop_down_list_scroll_pane

0x2519,	// (0x00010a2b) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2519,	// (0x00010a2b) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2526,	// (0x00010a38) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2526,	// (0x00010a38) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2533,	// (0x00010a45) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2533,	// (0x00010a45) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2540,	// (0x00010a52) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2540,	// (0x00010a52) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x255b,	// (0x00010a6d) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x255b,	// (0x00010a6d) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2576,	// (0x00010a88) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2576,	// (0x00010a88) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2591,	// (0x00010aa3) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2591,	// (0x00010aa3) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x25ac,	// (0x00010abe) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x25ac,	// (0x00010abe) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc8,	// (0x0001e0da) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc8,	// (0x0001e0da) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x8938,	// (0x00016e4a) cell_vkb_candidate_pane_cp1_ParamLimits

0x8938,	// (0x00016e4a) cell_vkb_candidate_pane_cp1

0x8354,	// (0x00016866) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x8354,	// (0x00016866) fep_vkb_candidate_drop_down_list_pane_g1

0x8958,	// (0x00016e6a) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8958,	// (0x00016e6a) fep_vkb_candidate_drop_down_list_pane_g2

0x8965,	// (0x00016e77) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8965,	// (0x00016e77) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd9,	// (0x0001e0eb) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd9,	// (0x0001e0eb) fep_vkb_candidate_drop_down_list_pane_g

0x8972,	// (0x00016e84) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8972,	// (0x00016e84) fep_vkb_candidate_drop_down_list_scroll_pane

0x897f,	// (0x00016e91) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x897f,	// (0x00016e91) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x898c,	// (0x00016e9e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x898c,	// (0x00016e9e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8998,	// (0x00016eaa) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8998,	// (0x00016eaa) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x89a4,	// (0x00016eb6) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x89a4,	// (0x00016eb6) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x89c5,	// (0x00016ed7) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x89c5,	// (0x00016ed7) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x89e6,	// (0x00016ef8) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x89e6,	// (0x00016ef8) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8a07,	// (0x00016f19) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8a07,	// (0x00016f19) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x8a28,	// (0x00016f3a) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x8a28,	// (0x00016f3a) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe0,	// (0x0001e0f2) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe0,	// (0x0001e0f2) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd06e,	// (0x0001b580) title_pane_g1_ParamLimits

0xd081,	// (0x0001b593) title_pane_g2_ParamLimits

0xf554,	// (0x0001da66) title_pane_g_ParamLimits

0x46d0,	// (0x00012be2) aid_call2_pane

0x46d8,	// (0x00012bea) aid_call_pane

0x46e0,	// (0x00012bf2) popup_clock_analogue_window_g1

0x46e0,	// (0x00012bf2) popup_clock_analogue_window_g2

0x133e,	// (0x0000f850) popup_clock_analogue_window_g3

0x1347,	// (0x0000f859) popup_clock_analogue_window_g4

0x307c,	// (0x0001158e) popup_clock_analogue_window_g5

0x0004,

0xf6f4,	// (0x0001dc06) popup_clock_analogue_window_g

0x134f,	// (0x0000f861) popup_clock_analogue_window_t1

0x135d,	// (0x0000f86f) clock_digital_number_pane_ParamLimits

0x135d,	// (0x0000f86f) clock_digital_number_pane

0x1369,	// (0x0000f87b) clock_digital_number_pane_cp02_ParamLimits

0x1369,	// (0x0000f87b) clock_digital_number_pane_cp02

0x1375,	// (0x0000f887) clock_digital_number_pane_cp03_ParamLimits

0x1375,	// (0x0000f887) clock_digital_number_pane_cp03

0x1381,	// (0x0000f893) clock_digital_number_pane_cp04_ParamLimits

0x1381,	// (0x0000f893) clock_digital_number_pane_cp04

0x138d,	// (0x0000f89f) clock_digital_separator_pane_ParamLimits

0x138d,	// (0x0000f89f) clock_digital_separator_pane

0x1399,	// (0x0000f8ab) popup_clock_digital_window_t1_ParamLimits

0x1399,	// (0x0000f8ab) popup_clock_digital_window_t1

0x307c,	// (0x0001158e) clock_digital_number_pane_g1

0x307c,	// (0x0001158e) clock_digital_number_pane_g2

0x0001,

0xf6ff,	// (0x0001dc11) clock_digital_number_pane_g

0x307c,	// (0x0001158e) clock_digital_separator_pane_g1

0x307c,	// (0x0001158e) clock_digital_separator_pane_g2

0x0001,

0xf6ff,	// (0x0001dc11) clock_digital_separator_pane_g

0xdc59,	// (0x0001c16b) aid_fill_nsta_ParamLimits

0xdd8f,	// (0x0001c2a1) indicator_nsta_pane_ParamLimits

0x538d,	// (0x0001389f) popup_clock_analogue_window

0x538d,	// (0x0001389f) popup_clock_digital_window

0x424f,	// (0x00012761) grid_indicator_nsta_pane_ParamLimits

0x7a64,	// (0x00015f76) clock_nsta_pane_t2

0x0001,

0xfaa6,	// (0x0001dfb8) clock_nsta_pane_t

0x1302,	// (0x0000f814) aid_size_max_handle

0x130c,	// (0x0000f81e) aid_size_min_handle

0x4d66,	// (0x00013278) editor_scroll_pane

0x8a43,	// (0x00016f55) ex_editor_pane

0x41fc,	// (0x0001270e) scroll_pane_cp13

0x3976,	// (0x00011e88) scroll_pane_cp14

0x470f,	// (0x00012c21) scroll_pane_cp36

0xd9f5,	// (0x0001bf07) list_single_graphic_hl_pane_cp2_ParamLimits

0xd9f5,	// (0x0001bf07) list_single_graphic_hl_pane_cp2

0xe51e,	// (0x0001ca30) list_single_graphic_hl_pane_ParamLimits

0xe51e,	// (0x0001ca30) list_single_graphic_hl_pane

0x8a4b,	// (0x00016f5d) aid_size_min_hl_cp1

0x8a54,	// (0x00016f66) list_highlight_pane_cp34_ParamLimits

0x8a54,	// (0x00016f66) list_highlight_pane_cp34

0x8a65,	// (0x00016f77) list_single_graphic_hl_pane_g1_ParamLimits

0x8a65,	// (0x00016f77) list_single_graphic_hl_pane_g1

0xe9a6,	// (0x0001ceb8) list_single_graphic_hl_pane_g2_ParamLimits

0xe9a6,	// (0x0001ceb8) list_single_graphic_hl_pane_g2

0xe9a6,	// (0x0001ceb8) list_single_graphic_hl_pane_g3_ParamLimits

0xe9a6,	// (0x0001ceb8) list_single_graphic_hl_pane_g3

0x4cd7,	// (0x000131e9) list_single_graphic_hl_pane_g4_ParamLimits

0x4cd7,	// (0x000131e9) list_single_graphic_hl_pane_g4

0xe9b2,	// (0x0001cec4) list_single_graphic_hl_pane_g5_ParamLimits

0xe9b2,	// (0x0001cec4) list_single_graphic_hl_pane_g5

0x0004,

0xfbf1,	// (0x0001e103) list_single_graphic_hl_pane_g_ParamLimits

0xfbf1,	// (0x0001e103) list_single_graphic_hl_pane_g

0xe9c6,	// (0x0001ced8) list_single_graphic_hl_pane_t1_ParamLimits

0xe9c6,	// (0x0001ced8) list_single_graphic_hl_pane_t1

0x8aa8,	// (0x00016fba) aid_size_min_hl_cp2

0x8ab1,	// (0x00016fc3) list_highlight_pane_cp34_cp2_ParamLimits

0x8ab1,	// (0x00016fc3) list_highlight_pane_cp34_cp2

0x8a65,	// (0x00016f77) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8a65,	// (0x00016f77) list_single_graphic_hl_pane_g1_cp2

0x8abe,	// (0x00016fd0) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x8abe,	// (0x00016fd0) list_single_graphic_hl_pane_g2_cp2

0xe9dc,	// (0x0001ceee) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe9dc,	// (0x0001ceee) list_single_graphic_hl_pane_g3_cp2

0x398a,	// (0x00011e9c) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x398a,	// (0x00011e9c) list_single_graphic_hl_pane_g4_cp2

0x8ad8,	// (0x00016fea) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x8ad8,	// (0x00016fea) list_single_graphic_hl_pane_g5_cp2

0xb492,	// (0x000199a4) control_pane_g4_ParamLimits

0xb492,	// (0x000199a4) control_pane_g4

0x50aa,	// (0x000135bc) bg_popup_sub_pane_cp10_ParamLimits

0x80f0,	// (0x00016602) list_choice_list_pane_ParamLimits

0x80ff,	// (0x00016611) scroll_pane_cp23

0x3409,	// (0x0001191b) bg_popup_preview_window_pane_cp02_ParamLimits

0x86d7,	// (0x00016be9) list_preview_fixed_pane_ParamLimits

0x86ed,	// (0x00016bff) list_preview_fixed_pane_cp_ParamLimits

0x86ed,	// (0x00016bff) list_preview_fixed_pane_cp

0x86f9,	// (0x00016c0b) popup_preview_fixed_window_g1_ParamLimits

0x86f9,	// (0x00016c0b) popup_preview_fixed_window_g1

0x8705,	// (0x00016c17) popup_preview_fixed_window_g2_ParamLimits

0x8705,	// (0x00016c17) popup_preview_fixed_window_g2

0x0002,

0xfb79,	// (0x0001e08b) popup_preview_fixed_window_g_ParamLimits

0xfb79,	// (0x0001e08b) popup_preview_fixed_window_g

0x1276,	// (0x0000f788) aid_navi_side_left_pane_ParamLimits

0x128b,	// (0x0000f79d) aid_navi_side_right_pane_ParamLimits

0x12a3,	// (0x0000f7b5) navi_icon_pane_stacon_ParamLimits

0x12b7,	// (0x0000f7c9) navi_navi_pane_stacon_ParamLimits

0x12a3,	// (0x0000f7b5) navi_text_pane_stacon_ParamLimits

0x0ea4,	// (0x0000f3b6) main_text_info_pane

0x8b02,	// (0x00017014) listscroll_text_info_pane

0x8b0a,	// (0x0001701c) list_text_info_pane_ParamLimits

0x8b0a,	// (0x0001701c) list_text_info_pane

0x8b19,	// (0x0001702b) scroll_pane_cp24_ParamLimits

0x8b19,	// (0x0001702b) scroll_pane_cp24

0xe9ea,	// (0x0001cefc) list_text_info_pane_t1_ParamLimits

0xe9ea,	// (0x0001cefc) list_text_info_pane_t1

0xb5c9,	// (0x00019adb) popup_fast_swap2_window_ParamLimits

0xb5c9,	// (0x00019adb) popup_fast_swap2_window

0x8b6c,	// (0x0001707e) aid_size_cell_fast2

0x3072,	// (0x00011584) bg_popup_window_pane_cp17

0x5b29,	// (0x0001403b) heading_pane_cp2

0x3649,	// (0x00011b5b) listscroll_fast2_pane

0x8b76,	// (0x00017088) grid_fast2_pane

0x8b80,	// (0x00017092) listscroll_fast2_pane_g1

0x8b88,	// (0x0001709a) listscroll_fast2_pane_g2

0x0001,

0xfbfc,	// (0x0001e10e) listscroll_fast2_pane_g

0x41fc,	// (0x0001270e) scroll_pane_cp26

0x8b92,	// (0x000170a4) cell_fast2_pane_ParamLimits

0x8b92,	// (0x000170a4) cell_fast2_pane

0x8ba7,	// (0x000170b9) cell_fast2_pane_g1

0x8bb0,	// (0x000170c2) cell_fast2_pane_g2

0x8bb9,	// (0x000170cb) cell_fast2_pane_g3

0x0002,

0xfc01,	// (0x0001e113) cell_fast2_pane_g

0x3733,	// (0x00011c45) grid_highlight_pane_cp9

0x1774,	// (0x0000fc86) main_eswt_pane_ParamLimits

0x1774,	// (0x0000fc86) main_eswt_pane

0x8b2e,	// (0x00017040) list_single_text_info_pane

0x8bc1,	// (0x000170d3) eswt_ctrl_button_pane

0x8bc1,	// (0x000170d3) eswt_ctrl_canvas_pane

0x8bc9,	// (0x000170db) eswt_ctrl_combo_pane

0x8bc1,	// (0x000170d3) eswt_ctrl_default_pane

0x8bc1,	// (0x000170d3) eswt_ctrl_label_pane

0x8bd1,	// (0x000170e3) eswt_ctrl_wait_pane

0x8bd9,	// (0x000170eb) eswt_shell_pane

0x3072,	// (0x00011584) listscroll_eswt_app_pane

0x8bf9,	// (0x0001710b) popup_eswt_tasktip_window_ParamLimits

0x8bf9,	// (0x0001710b) popup_eswt_tasktip_window

0x56e8,	// (0x00013bfa) bg_popup_window_pane_cp18

0x8c0a,	// (0x0001711c) eswt_control_pane_g1_ParamLimits

0x8c0a,	// (0x0001711c) eswt_control_pane_g1

0x8c17,	// (0x00017129) eswt_control_pane_g2_ParamLimits

0x8c17,	// (0x00017129) eswt_control_pane_g2

0x8c24,	// (0x00017136) eswt_control_pane_g3_ParamLimits

0x8c24,	// (0x00017136) eswt_control_pane_g3

0x8c31,	// (0x00017143) eswt_control_pane_g4_ParamLimits

0x8c31,	// (0x00017143) eswt_control_pane_g4

0x0003,

0xfc08,	// (0x0001e11a) eswt_control_pane_g_ParamLimits

0xfc08,	// (0x0001e11a) eswt_control_pane_g

0x3f2e,	// (0x00012440) bg_button_pane_ParamLimits

0x3f2e,	// (0x00012440) bg_button_pane

0x3748,	// (0x00011c5a) common_borders_pane_copy2_ParamLimits

0x3748,	// (0x00011c5a) common_borders_pane_copy2

0x8c3e,	// (0x00017150) control_button_pane_g1_ParamLimits

0x8c3e,	// (0x00017150) control_button_pane_g1

0x8c4a,	// (0x0001715c) control_button_pane_g2_ParamLimits

0x8c4a,	// (0x0001715c) control_button_pane_g2

0x8c56,	// (0x00017168) control_button_pane_g3_ParamLimits

0x8c56,	// (0x00017168) control_button_pane_g3

0x0002,

0xfc11,	// (0x0001e123) control_button_pane_g_ParamLimits

0xfc11,	// (0x0001e123) control_button_pane_g

0x8c6a,	// (0x0001717c) control_button_pane_t1

0x8c78,	// (0x0001718a) control_button_pane_t2

0x0001,

0xfc18,	// (0x0001e12a) control_button_pane_t

0x55cc,	// (0x00013ade) bg_button_pane_g1

0x55dc,	// (0x00013aee) bg_button_pane_g2

0x55d4,	// (0x00013ae6) bg_button_pane_g3

0x55ec,	// (0x00013afe) bg_button_pane_g4

0x55e4,	// (0x00013af6) bg_button_pane_g5

0x55f4,	// (0x00013b06) bg_button_pane_g6

0x55fc,	// (0x00013b0e) bg_button_pane_g7

0x560c,	// (0x00013b1e) bg_button_pane_g8

0x5604,	// (0x00013b16) bg_button_pane_g9

0x0008,

0xf85d,	// (0x0001dd6f) bg_button_pane_g

0x80ab,	// (0x000165bd) common_borders_pane_ParamLimits

0x80ab,	// (0x000165bd) common_borders_pane

0x8c0a,	// (0x0001711c) eswt_control_pane_g1_copy1_ParamLimits

0x8c0a,	// (0x0001711c) eswt_control_pane_g1_copy1

0x8c17,	// (0x00017129) eswt_control_pane_g2_copy1_ParamLimits

0x8c17,	// (0x00017129) eswt_control_pane_g2_copy1

0x8c24,	// (0x00017136) eswt_control_pane_g3_copy1_ParamLimits

0x8c24,	// (0x00017136) eswt_control_pane_g3_copy1

0x8c31,	// (0x00017143) eswt_control_pane_g4_copy1_ParamLimits

0x8c31,	// (0x00017143) eswt_control_pane_g4_copy1

0x80e6,	// (0x000165f8) bg_eswt_ctrl_canvas_pane_g1

0x80ab,	// (0x000165bd) common_borders_pane_cp2_ParamLimits

0x80ab,	// (0x000165bd) common_borders_pane_cp2

0x80ab,	// (0x000165bd) common_borders_pane_cp3_ParamLimits

0x80ab,	// (0x000165bd) common_borders_pane_cp3

0x8c86,	// (0x00017198) separator_horizontal_pane

0x8c8e,	// (0x000171a0) separator_vertical_pane

0x8c0a,	// (0x0001711c) eswt_control_pane_g1_copy2_ParamLimits

0x8c0a,	// (0x0001711c) eswt_control_pane_g1_copy2

0x8c17,	// (0x00017129) eswt_control_pane_g2_copy2_ParamLimits

0x8c17,	// (0x00017129) eswt_control_pane_g2_copy2

0x8c24,	// (0x00017136) eswt_control_pane_g3_copy2_ParamLimits

0x8c24,	// (0x00017136) eswt_control_pane_g3_copy2

0x8c31,	// (0x00017143) eswt_control_pane_g4_copy2_ParamLimits

0x8c31,	// (0x00017143) eswt_control_pane_g4_copy2

0x3072,	// (0x00011584) common_borders_pane_cp4

0x8c97,	// (0x000171a9) separator_horizontal_pane_g1

0x8ca0,	// (0x000171b2) separator_horizontal_pane_g2

0x8ca9,	// (0x000171bb) separator_horizontal_pane_g3

0x0002,

0xfc1d,	// (0x0001e12f) separator_horizontal_pane_g

0x8c0a,	// (0x0001711c) eswt_control_pane_g1_copy3_ParamLimits

0x8c0a,	// (0x0001711c) eswt_control_pane_g1_copy3

0x8c17,	// (0x00017129) eswt_control_pane_g2_copy3_ParamLimits

0x8c17,	// (0x00017129) eswt_control_pane_g2_copy3

0x8c24,	// (0x00017136) eswt_control_pane_g3_copy3_ParamLimits

0x8c24,	// (0x00017136) eswt_control_pane_g3_copy3

0x8c31,	// (0x00017143) eswt_control_pane_g4_copy3_ParamLimits

0x8c31,	// (0x00017143) eswt_control_pane_g4_copy3

0x3072,	// (0x00011584) common_borders_pane_cp5

0x8cb2,	// (0x000171c4) separator_vertical_pane_g1

0x8cbb,	// (0x000171cd) separator_vertical_pane_g2

0x8cc4,	// (0x000171d6) separator_vertical_pane_g3

0x0002,

0xfc24,	// (0x0001e136) separator_vertical_pane_g

0x8c0a,	// (0x0001711c) eswt_control_pane_g1_copy4_ParamLimits

0x8c0a,	// (0x0001711c) eswt_control_pane_g1_copy4

0x8c17,	// (0x00017129) eswt_control_pane_g2_copy4_ParamLimits

0x8c17,	// (0x00017129) eswt_control_pane_g2_copy4

0x8c24,	// (0x00017136) eswt_control_pane_g3_copy4_ParamLimits

0x8c24,	// (0x00017136) eswt_control_pane_g3_copy4

0x8c31,	// (0x00017143) eswt_control_pane_g4_copy4_ParamLimits

0x8c31,	// (0x00017143) eswt_control_pane_g4_copy4

0x8ccd,	// (0x000171df) eswt_ctrl_combo_button_pane

0x8cd5,	// (0x000171e7) eswt_ctrl_input_pane

0x8cdd,	// (0x000171ef) popup_choice_list_window_cp70

0x8ce5,	// (0x000171f7) eswt_ctrl_input_pane_t1

0x3072,	// (0x00011584) input_focus_pane_cp70

0x80ab,	// (0x000165bd) bg_button_pane_cp70_ParamLimits

0x80ab,	// (0x000165bd) bg_button_pane_cp70

0x8cf3,	// (0x00017205) eswt_ctrl_combo_button_pane_g1

0x8cfb,	// (0x0001720d) wait_bar_pane_cp70

0x56e8,	// (0x00013bfa) bg_popup_window_pane_cp70_ParamLimits

0x56e8,	// (0x00013bfa) bg_popup_window_pane_cp70

0x8d03,	// (0x00017215) popup_eswt_tasktip_window_t1

0x8d19,	// (0x0001722b) wait_bar_pane_cp71_ParamLimits

0x8d19,	// (0x0001722b) wait_bar_pane_cp71

0x8d25,	// (0x00017237) grid_eswt_app_pane

0x4513,	// (0x00012a25) scroll_pane_cp70

0xea07,	// (0x0001cf19) cell_eswt_app_pane_ParamLimits

0xea07,	// (0x0001cf19) cell_eswt_app_pane

0xea31,	// (0x0001cf43) cell_eswt_app_pane_g1_ParamLimits

0xea31,	// (0x0001cf43) cell_eswt_app_pane_g1

0xea60,	// (0x0001cf72) cell_eswt_app_pane_g2_ParamLimits

0xea60,	// (0x0001cf72) cell_eswt_app_pane_g2

0x0001,

0xfc2b,	// (0x0001e13d) cell_eswt_app_pane_g_ParamLimits

0xfc2b,	// (0x0001e13d) cell_eswt_app_pane_g

0xea84,	// (0x0001cf96) cell_eswt_app_pane_t1_ParamLimits

0xea84,	// (0x0001cf96) cell_eswt_app_pane_t1

0x8de7,	// (0x000172f9) grid_highlight_pane_cp70_ParamLimits

0x8de7,	// (0x000172f9) grid_highlight_pane_cp70

0x4c47,	// (0x00013159) set_content_pane_g1

0x5002,	// (0x00013514) status_small_volume_pane

0x25c7,	// (0x00010ad9) status_small_volume_pane_g1

0x25cf,	// (0x00010ae1) volume_small2_pane

0x25d8,	// (0x00010aea) volume_small2_pane_g1

0x25e1,	// (0x00010af3) volume_small2_pane_g2

0x25ea,	// (0x00010afc) volume_small2_pane_g3

0x25f3,	// (0x00010b05) volume_small2_pane_g4

0x25fc,	// (0x00010b0e) volume_small2_pane_g5

0x2605,	// (0x00010b17) volume_small2_pane_g6

0x260e,	// (0x00010b20) volume_small2_pane_g7

0x2617,	// (0x00010b29) volume_small2_pane_g8

0x2620,	// (0x00010b32) volume_small2_pane_g9

0x2629,	// (0x00010b3b) volume_small2_pane_g10

0x0009,

0xfc30,	// (0x0001e142) volume_small2_pane_g

0x849c,	// (0x000169ae) fep_vkb_top_text_pane_g1_ParamLimits

0xe94e,	// (0x0001ce60) fep_vkb_top_text_pane_t1_ParamLimits

0x8711,	// (0x00016c23) popup_preview_fixed_window_g3_ParamLimits

0x8711,	// (0x00016c23) popup_preview_fixed_window_g3

0xbbd8,	// (0x0001a0ea) popup_toolbar_trans_pane

0xe363,	// (0x0001c875) aid_height_set_list_ParamLimits

0x6ac2,	// (0x00014fd4) aid_size_parent_ParamLimits

0x50aa,	// (0x000135bc) list_highlight_pane_cp2_ParamLimits

0x4c47,	// (0x00013159) set_content_pane_g1_ParamLimits

0xe530,	// (0x0001ca42) list_single_image_pane_ParamLimits

0xe530,	// (0x0001ca42) list_single_image_pane

0xeab6,	// (0x0001cfc8) aid_size_cell_image_ParamLimits

0xeab6,	// (0x0001cfc8) aid_size_cell_image

0xeac3,	// (0x0001cfd5) grid_single_image_pane_ParamLimits

0xeac3,	// (0x0001cfd5) grid_single_image_pane

0x8e0c,	// (0x0001731e) list_single_image_pane_g1_ParamLimits

0x8e0c,	// (0x0001731e) list_single_image_pane_g1

0x8e18,	// (0x0001732a) list_single_image_pane_g2_ParamLimits

0x8e18,	// (0x0001732a) list_single_image_pane_g2

0x0001,

0xfc45,	// (0x0001e157) list_single_image_pane_g_ParamLimits

0xfc45,	// (0x0001e157) list_single_image_pane_g

0x8e2c,	// (0x0001733e) list_single_image_pane_t1_ParamLimits

0x8e2c,	// (0x0001733e) list_single_image_pane_t1

0xeacf,	// (0x0001cfe1) cell_image_list_pane_ParamLimits

0xeacf,	// (0x0001cfe1) cell_image_list_pane

0xeae3,	// (0x0001cff5) cell_image_list_pane_g1

0xeaec,	// (0x0001cffe) cell_image_list_pane_g2

0x0001,

0xfc4a,	// (0x0001e15c) cell_image_list_pane_g

0x8e68,	// (0x0001737a) aid_size_cell_tb_trans_pane

0x3f2e,	// (0x00012440) bg_tb_trans_pane

0x8e7a,	// (0x0001738c) grid_tb_trans_pane

0x55cc,	// (0x00013ade) bg_tb_trans_pane_g1

0x55dc,	// (0x00013aee) bg_tb_trans_pane_g2

0x55d4,	// (0x00013ae6) bg_tb_trans_pane_g3

0x55ec,	// (0x00013afe) bg_tb_trans_pane_g4

0x55e4,	// (0x00013af6) bg_tb_trans_pane_g5

0x560c,	// (0x00013b1e) bg_tb_trans_pane_g6

0x5604,	// (0x00013b16) bg_tb_trans_pane_g7

0x55f4,	// (0x00013b06) bg_tb_trans_pane_g8

0x55fc,	// (0x00013b0e) bg_tb_trans_pane_g9

0x0008,

0xfc4f,	// (0x0001e161) bg_tb_trans_pane_g

0x8e8e,	// (0x000173a0) cell_toolbar_trans_pane_ParamLimits

0x8e8e,	// (0x000173a0) cell_toolbar_trans_pane

0x80e6,	// (0x000165f8) cell_toolbar_trans_pane_g1

0xe731,	// (0x0001cc43) list_form2_midp_pane_t1

0xe73f,	// (0x0001cc51) list_form2_midp_pane_t2

0x0001,

0xfaec,	// (0x0001dffe) list_form2_midp_pane_t

0x7c63,	// (0x00016175) scroll_pane_cp51_ParamLimits

0x7e69,	// (0x0001637b) form2_midp_wait_pane_g1

0x7e72,	// (0x00016384) form2_midp_wait_pane_g2

0x7e7b,	// (0x0001638d) form2_midp_wait_pane_g3

0x0002,

0xfb01,	// (0x0001e013) form2_midp_wait_pane_g

0x3166,	// (0x00011678) list_highlight_pane_cp21_ParamLimits

0x7ec9,	// (0x000163db) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7ed8,	// (0x000163ea) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6cc5,	// (0x000151d7) list_single_2graphic_im_pane_ParamLimits

0x6cc5,	// (0x000151d7) list_single_2graphic_im_pane

0x8eb4,	// (0x000173c6) list_single_2graphic_im_pane_g1_ParamLimits

0x8eb4,	// (0x000173c6) list_single_2graphic_im_pane_g1

0x8ec5,	// (0x000173d7) list_single_2graphic_im_pane_g2_ParamLimits

0x8ec5,	// (0x000173d7) list_single_2graphic_im_pane_g2

0x8ed1,	// (0x000173e3) list_single_2graphic_im_pane_g3_ParamLimits

0x8ed1,	// (0x000173e3) list_single_2graphic_im_pane_g3

0x0003,

0xfc62,	// (0x0001e174) list_single_2graphic_im_pane_g_ParamLimits

0xfc62,	// (0x0001e174) list_single_2graphic_im_pane_g

0x8ef1,	// (0x00017403) list_single_2graphic_im_pane_t1_ParamLimits

0x8ef1,	// (0x00017403) list_single_2graphic_im_pane_t1

0x871d,	// (0x00016c2f) list_single_graphic_2heading_pane_fp_ParamLimits

0x871d,	// (0x00016c2f) list_single_graphic_2heading_pane_fp

0x8762,	// (0x00016c74) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x8762,	// (0x00016c74) list_single_graphic_2heading_pane_fp_g1

0x8733,	// (0x00016c45) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8733,	// (0x00016c45) list_single_graphic_2heading_pane_fp_g2

0x3b9b,	// (0x000120ad) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3b9b,	// (0x000120ad) list_single_graphic_2heading_pane_fp_g3

0x3f54,	// (0x00012466) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3f54,	// (0x00012466) list_single_graphic_2heading_pane_fp_g4

0x873f,	// (0x00016c51) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x873f,	// (0x00016c51) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb89,	// (0x0001e09b) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb89,	// (0x0001e09b) list_single_graphic_2heading_pane_fp_g

0x8f22,	// (0x00017434) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8f22,	// (0x00017434) list_single_graphic_2heading_pane_fp_t1

0x879a,	// (0x00016cac) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x879a,	// (0x00016cac) list_single_graphic_2heading_pane_fp_t2

0x8f38,	// (0x0001744a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8f38,	// (0x0001744a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6b,	// (0x0001e17d) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6b,	// (0x0001e17d) list_single_graphic_2heading_pane_fp_t

0x8172,	// (0x00016684) fep_hwr_write_pane_g5_ParamLimits

0x8172,	// (0x00016684) fep_hwr_write_pane_g5

0x817e,	// (0x00016690) fep_hwr_write_pane_g6_ParamLimits

0x817e,	// (0x00016690) fep_hwr_write_pane_g6

0x8bd9,	// (0x000170eb) eswt_shell_pane_ParamLimits

0x56e8,	// (0x00013bfa) bg_popup_window_pane_cp18_ParamLimits

0x69fe,	// (0x00014f10) heading_pane_cp70

0x8d03,	// (0x00017215) popup_eswt_tasktip_window_t1_ParamLimits

0xdcb4,	// (0x0001c1c6) aid_touch_tab_arrow_left

0xdcca,	// (0x0001c1dc) aid_touch_tab_arrow_right

0xd099,	// (0x0001b5ab) title_pane_g3_ParamLimits

0xd099,	// (0x0001b5ab) title_pane_g3

0x3e19,	// (0x0001232b) set_value_pane_g1

0xbbd8,	// (0x0001a0ea) popup_toolbar_trans_pane_ParamLimits

0x8e68,	// (0x0001737a) aid_size_cell_tb_trans_pane_ParamLimits

0x3f2e,	// (0x00012440) bg_tb_trans_pane_ParamLimits

0x8e7a,	// (0x0001738c) grid_tb_trans_pane_ParamLimits

0x3409,	// (0x0001191b) cont_note_pane_ParamLimits

0x3409,	// (0x0001191b) cont_note_pane

0x3748,	// (0x00011c5a) cont_snote2_single_text_pane_ParamLimits

0x3748,	// (0x00011c5a) cont_snote2_single_text_pane

0x3748,	// (0x00011c5a) cont_snote2_single_graphic_pane_ParamLimits

0x3748,	// (0x00011c5a) cont_snote2_single_graphic_pane

0x5d3f,	// (0x00014251) cont_note_wait_pane_ParamLimits

0x5d3f,	// (0x00014251) cont_note_wait_pane

0x5d3f,	// (0x00014251) cont_note_image_pane_ParamLimits

0x5d3f,	// (0x00014251) cont_note_image_pane

0x8f4e,	// (0x00017460) popup_note2_window_g1_ParamLimits

0x8f4e,	// (0x00017460) popup_note2_window_g1

0x8f7f,	// (0x00017491) popup_note2_window_t1_ParamLimits

0x8f7f,	// (0x00017491) popup_note2_window_t1

0x8fc4,	// (0x000174d6) popup_note2_window_t2_ParamLimits

0x8fc4,	// (0x000174d6) popup_note2_window_t2

0x9009,	// (0x0001751b) popup_note2_window_t3_ParamLimits

0x9009,	// (0x0001751b) popup_note2_window_t3

0x904e,	// (0x00017560) popup_note2_window_t4_ParamLimits

0x904e,	// (0x00017560) popup_note2_window_t4

0x3481,	// (0x00011993) popup_note2_window_t5_ParamLimits

0x3481,	// (0x00011993) popup_note2_window_t5

0x0004,

0xfc77,	// (0x0001e189) popup_note2_window_t_ParamLimits

0xfc77,	// (0x0001e189) popup_note2_window_t

0x907d,	// (0x0001758f) popup_note2_image_window_g1_ParamLimits

0x907d,	// (0x0001758f) popup_note2_image_window_g1

0x9089,	// (0x0001759b) popup_note2_image_window_g2_ParamLimits

0x9089,	// (0x0001759b) popup_note2_image_window_g2

0x0001,

0xfc82,	// (0x0001e194) popup_note2_image_window_g_ParamLimits

0xfc82,	// (0x0001e194) popup_note2_image_window_g

0x909b,	// (0x000175ad) popup_note2_image_window_t1_ParamLimits

0x909b,	// (0x000175ad) popup_note2_image_window_t1

0x90b3,	// (0x000175c5) popup_note2_image_window_t2_ParamLimits

0x90b3,	// (0x000175c5) popup_note2_image_window_t2

0x90cb,	// (0x000175dd) popup_note2_image_window_t3_ParamLimits

0x90cb,	// (0x000175dd) popup_note2_image_window_t3

0x0002,

0xfc87,	// (0x0001e199) popup_note2_image_window_t_ParamLimits

0xfc87,	// (0x0001e199) popup_note2_image_window_t

0x5d4d,	// (0x0001425f) popup_note2_wait_window_g1_ParamLimits

0x5d4d,	// (0x0001425f) popup_note2_wait_window_g1

0x90e7,	// (0x000175f9) popup_note2_wait_window_g2_ParamLimits

0x90e7,	// (0x000175f9) popup_note2_wait_window_g2

0x5d65,	// (0x00014277) popup_note2_wait_window_g3_ParamLimits

0x5d65,	// (0x00014277) popup_note2_wait_window_g3

0x0002,

0xfc8e,	// (0x0001e1a0) popup_note2_wait_window_g_ParamLimits

0xfc8e,	// (0x0001e1a0) popup_note2_wait_window_g

0x90f3,	// (0x00017605) popup_note2_wait_window_t1_ParamLimits

0x90f3,	// (0x00017605) popup_note2_wait_window_t1

0x9111,	// (0x00017623) popup_note2_wait_window_t2_ParamLimits

0x9111,	// (0x00017623) popup_note2_wait_window_t2

0x912f,	// (0x00017641) popup_note2_wait_window_t3_ParamLimits

0x912f,	// (0x00017641) popup_note2_wait_window_t3

0x9141,	// (0x00017653) popup_note2_wait_window_t4_ParamLimits

0x9141,	// (0x00017653) popup_note2_wait_window_t4

0x0003,

0xfc95,	// (0x0001e1a7) popup_note2_wait_window_t_ParamLimits

0xfc95,	// (0x0001e1a7) popup_note2_wait_window_t

0x9153,	// (0x00017665) wait_bar2_pane_ParamLimits

0x9153,	// (0x00017665) wait_bar2_pane

0x916b,	// (0x0001767d) popup_snote2_single_text_window_g1_ParamLimits

0x916b,	// (0x0001767d) popup_snote2_single_text_window_g1

0x9193,	// (0x000176a5) popup_snote2_single_text_window_t1_ParamLimits

0x9193,	// (0x000176a5) popup_snote2_single_text_window_t1

0x91df,	// (0x000176f1) popup_snote2_single_text_window_t2_ParamLimits

0x91df,	// (0x000176f1) popup_snote2_single_text_window_t2

0x922b,	// (0x0001773d) popup_snote2_single_text_window_t3_ParamLimits

0x922b,	// (0x0001773d) popup_snote2_single_text_window_t3

0x926c,	// (0x0001777e) popup_snote2_single_text_window_t4_ParamLimits

0x926c,	// (0x0001777e) popup_snote2_single_text_window_t4

0x92a2,	// (0x000177b4) popup_snote2_single_text_window_t5_ParamLimits

0x92a2,	// (0x000177b4) popup_snote2_single_text_window_t5

0x0004,

0xfc9e,	// (0x0001e1b0) popup_snote2_single_text_window_t_ParamLimits

0xfc9e,	// (0x0001e1b0) popup_snote2_single_text_window_t

0x92cd,	// (0x000177df) popup_snote2_single_graphic_window_g1_ParamLimits

0x92cd,	// (0x000177df) popup_snote2_single_graphic_window_g1

0x92f5,	// (0x00017807) popup_snote2_single_graphic_window_g2_ParamLimits

0x92f5,	// (0x00017807) popup_snote2_single_graphic_window_g2

0x0001,

0xfca9,	// (0x0001e1bb) popup_snote2_single_graphic_window_g_ParamLimits

0xfca9,	// (0x0001e1bb) popup_snote2_single_graphic_window_g

0x931d,	// (0x0001782f) popup_snote2_single_graphic_window_t1_ParamLimits

0x931d,	// (0x0001782f) popup_snote2_single_graphic_window_t1

0x9369,	// (0x0001787b) popup_snote2_single_graphic_window_t2_ParamLimits

0x9369,	// (0x0001787b) popup_snote2_single_graphic_window_t2

0x922b,	// (0x0001773d) popup_snote2_single_graphic_window_t3_ParamLimits

0x922b,	// (0x0001773d) popup_snote2_single_graphic_window_t3

0x926c,	// (0x0001777e) popup_snote2_single_graphic_window_t4_ParamLimits

0x926c,	// (0x0001777e) popup_snote2_single_graphic_window_t4

0x92a2,	// (0x000177b4) popup_snote2_single_graphic_window_t5_ParamLimits

0x92a2,	// (0x000177b4) popup_snote2_single_graphic_window_t5

0x0004,

0xfcae,	// (0x0001e1c0) popup_snote2_single_graphic_window_t_ParamLimits

0xfcae,	// (0x0001e1c0) popup_snote2_single_graphic_window_t

0x7b1e,	// (0x00016030) clock_nsta_pane_cp2_t1

0x7b1e,	// (0x00016030) clock_nsta_pane_cp2_t2

0x0001,

0xfac2,	// (0x0001dfd4) clock_nsta_pane_cp2_t

0x3f48,	// (0x0001245a) form_field_data_wide_pane_g1_ParamLimits

0x3b9b,	// (0x000120ad) form_field_data_wide_pane_g2_ParamLimits

0x3b9b,	// (0x000120ad) form_field_data_wide_pane_g2

0x3f54,	// (0x00012466) form_field_data_wide_pane_g3_ParamLimits

0x3f54,	// (0x00012466) form_field_data_wide_pane_g3

0x0002,

0xf677,	// (0x0001db89) form_field_data_wide_pane_g_ParamLimits

0xf677,	// (0x0001db89) form_field_data_wide_pane_g

0xe665,	// (0x0001cb77) grid_touch_3_pane_ParamLimits

0xe665,	// (0x0001cb77) grid_touch_3_pane

0xeaf5,	// (0x0001d007) cell_touch_3_pane_ParamLimits

0xeaf5,	// (0x0001d007) cell_touch_3_pane

0x80e6,	// (0x000165f8) cell_touch_3_pane_g1

0x80e6,	// (0x000165f8) cell_touch_3_pane_g2

0x0001,

0xfb47,	// (0x0001e059) cell_touch_3_pane_g

0x34b3,	// (0x000119c5) cont_query_data_pane

0x34bb,	// (0x000119cd) cont_query_data_pane_cp1

0x93e6,	// (0x000178f8) button_value_adjust_pane_cp7

0x93ee,	// (0x00017900) query_popup_pane_cp3

0x47cc,	// (0x00012cde) bg_popup_sub_pane_cp22_ParamLimits

0x13b8,	// (0x0000f8ca) navi_navi_volume_pane_cp2

0x13d0,	// (0x0000f8e2) popup_side_volume_key_window_g2

0x13dc,	// (0x0000f8ee) popup_side_volume_key_window_g3

0x0002,

0xf70d,	// (0x0001dc1f) popup_side_volume_key_window_g

0x13f6,	// (0x0000f908) popup_side_volume_key_window_t2

0x0001,

0xf714,	// (0x0001dc26) popup_side_volume_key_window_t

0x4b13,	// (0x00013025) popup_side_volume_key_window_ParamLimits

0xd482,	// (0x0001b994) list_double_graphic_pane_g4_ParamLimits

0xd482,	// (0x0001b994) list_double_graphic_pane_g4

0xe50a,	// (0x0001ca1c) list_single_2heading_msg_pane_ParamLimits

0xe50a,	// (0x0001ca1c) list_single_2heading_msg_pane

0xeb3e,	// (0x0001d050) list_single_2heading_msg_pane_g1_ParamLimits

0xeb3e,	// (0x0001d050) list_single_2heading_msg_pane_g1

0xeb4a,	// (0x0001d05c) list_single_2heading_msg_pane_g2_ParamLimits

0xeb4a,	// (0x0001d05c) list_single_2heading_msg_pane_g2

0xeb5d,	// (0x0001d06f) list_single_2heading_msg_pane_g3_ParamLimits

0xeb5d,	// (0x0001d06f) list_single_2heading_msg_pane_g3

0x9429,	// (0x0001793b) list_single_2heading_msg_pane_g4_ParamLimits

0x9429,	// (0x0001793b) list_single_2heading_msg_pane_g4

0x0003,

0xfcb9,	// (0x0001e1cb) list_single_2heading_msg_pane_g_ParamLimits

0xfcb9,	// (0x0001e1cb) list_single_2heading_msg_pane_g

0x9441,	// (0x00017953) list_single_2heading_msg_pane_t1_ParamLimits

0x9441,	// (0x00017953) list_single_2heading_msg_pane_t1

0xeb69,	// (0x0001d07b) list_single_2heading_msg_pane_t2_ParamLimits

0xeb69,	// (0x0001d07b) list_single_2heading_msg_pane_t2

0xebd4,	// (0x0001d0e6) list_single_2heading_msg_pane_t3_ParamLimits

0xebd4,	// (0x0001d0e6) list_single_2heading_msg_pane_t3

0x94d6,	// (0x000179e8) list_single_2heading_msg_pane_t4_ParamLimits

0x94d6,	// (0x000179e8) list_single_2heading_msg_pane_t4

0x0003,

0xfcc2,	// (0x0001e1d4) list_single_2heading_msg_pane_t_ParamLimits

0xfcc2,	// (0x0001e1d4) list_single_2heading_msg_pane_t

0x30ba,	// (0x000115cc) title_pane_g4_ParamLimits

0x30ba,	// (0x000115cc) title_pane_g4

0x11c6,	// (0x0000f6d8) title_pane_stacon_g3_ParamLimits

0x11c6,	// (0x0000f6d8) title_pane_stacon_g3

0x8ee5,	// (0x000173f7) list_single_2graphic_im_pane_g4_ParamLimits

0x8ee5,	// (0x000173f7) list_single_2graphic_im_pane_g4

0x67a6,	// (0x00014cb8) popup_side_volume_key_window_cp

0x7099,	// (0x000155ab) main_idle_act2_pane_t1

0x1daf,	// (0x000102c1) toolbar_button_pane_g10

0xd3b3,	// (0x0001b8c5) popup_toolbar_window_cp1

0x7b0f,	// (0x00016021) clock_nsta_pane_cp_t1

0x7b0f,	// (0x00016021) clock_nsta_pane_cp_t2

0x0001,

0xfabd,	// (0x0001dfcf) clock_nsta_pane_cp_t

0x13b8,	// (0x0000f8ca) navi_navi_volume_pane_cp2_ParamLimits

0x13c4,	// (0x0000f8d6) popup_side_volume_key_window_g1_ParamLimits

0x13d0,	// (0x0000f8e2) popup_side_volume_key_window_g2_ParamLimits

0x13dc,	// (0x0000f8ee) popup_side_volume_key_window_g3_ParamLimits

0xf70d,	// (0x0001dc1f) popup_side_volume_key_window_g_ParamLimits

0x2233,	// (0x00010745) fep_hwr_aid_pane

0x22da,	// (0x000107ec) bg_fep_hwr_top_pane_g4_ParamLimits

0x8142,	// (0x00016654) fep_hwr_top_pane_g1_ParamLimits

0x8154,	// (0x00016666) fep_hwr_top_pane_g2_ParamLimits

0x22fa,	// (0x0001080c) fep_hwr_top_pane_g3_ParamLimits

0xfb12,	// (0x0001e024) fep_hwr_top_pane_g_ParamLimits

0x230f,	// (0x00010821) fep_hwr_top_text_pane_ParamLimits

0x6572,	// (0x00014a84) aid_touch_tab_arrow_arrow_2

0x6569,	// (0x00014a7b) aid_touch_tab_arrow_left_2

0x2247,	// (0x00010759) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x227e,	// (0x00010790) fep_hwr_prediction_pane

0x82ab,	// (0x000167bd) fep_vkb_prediction_pane

0xe92e,	// (0x0001ce40) fep_vkb_side_pane_g3_ParamLimits

0xe92e,	// (0x0001ce40) fep_vkb_side_pane_g3

0x248a,	// (0x0001099c) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x24f6,	// (0x00010a08) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2503,	// (0x00010a15) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc1,	// (0x0001e0d3) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x2632,	// (0x00010b44) fep_hwr_prediction_pane_g1

0x263c,	// (0x00010b4e) fep_hwr_prediction_pane_g2

0x2644,	// (0x00010b56) fep_hwr_prediction_pane_g3

0x264c,	// (0x00010b5e) fep_hwr_prediction_pane_g4

0x0003,

0xfccb,	// (0x0001e1dd) fep_hwr_prediction_pane_g

0x94fb,	// (0x00017a0d) fep_vkb_prediction_pane_g1

0x9505,	// (0x00017a17) fep_vkb_prediction_pane_g2

0x950d,	// (0x00017a1f) fep_vkb_prediction_pane_g3

0x9515,	// (0x00017a27) fep_vkb_prediction_pane_g4

0x0003,

0xfcd4,	// (0x0001e1e6) fep_vkb_prediction_pane_g

0x208f,	// (0x000105a1) slider_set_pane_g3

0x20a3,	// (0x000105b5) slider_set_pane_g4

0x20bb,	// (0x000105cd) slider_set_pane_g5

0x208f,	// (0x000105a1) slider_set_pane_g6

0x20d1,	// (0x000105e3) slider_set_pane_g7

0x6c23,	// (0x00015135) slider_form_pane_g3

0x6c2c,	// (0x0001513e) slider_form_pane_g4

0x6c34,	// (0x00015146) slider_form_pane_g5

0x6c23,	// (0x00015135) slider_form_pane_g6

0xe4aa,	// (0x0001c9bc) slider_form_pane_g7

0x73dd,	// (0x000158ef) slider_set_pane_vc_g3

0x73e6,	// (0x000158f8) slider_set_pane_vc_g4

0x73ef,	// (0x00015901) slider_set_pane_vc_g5

0x73dd,	// (0x000158ef) slider_set_pane_vc_g6

0x73f8,	// (0x0001590a) slider_set_pane_vc_g7

0x77d5,	// (0x00015ce7) slider_form_pane_vc_g1

0x77de,	// (0x00015cf0) slider_form_pane_vc_g2

0x77e7,	// (0x00015cf9) slider_form_pane_vc_g3

0x77d5,	// (0x00015ce7) slider_form_pane_vc_g4

0x77f0,	// (0x00015d02) slider_form_pane_vc_g5

0x0004,

0xfa8f,	// (0x0001dfa1) slider_form_pane_vc_g

0x0ea4,	// (0x0000f3b6) main_idle_act3_pane

0x951d,	// (0x00017a2f) ai3_links_pane

0xec42,	// (0x0001d154) popup_ai3_data_window_ParamLimits

0xec42,	// (0x0001d154) popup_ai3_data_window

0x3072,	// (0x00011584) grid_ai3_links_pane

0xec5a,	// (0x0001d16c) cell_ai3_links_pane_ParamLimits

0xec5a,	// (0x0001d16c) cell_ai3_links_pane

0x9556,	// (0x00017a68) bg_popup_sub_pane_cp11

0x9563,	// (0x00017a75) cell_ai3_links_pane_g1

0x3072,	// (0x00011584) bg_popup_sub_pane_cp12

0x9588,	// (0x00017a9a) heading_ai3_data_pane

0x9590,	// (0x00017aa2) list_ai3_gene_pane

0x959c,	// (0x00017aae) popup_ai3_data_window_g1

0x95a4,	// (0x00017ab6) heading_ai3_data_pane_g1

0x95ac,	// (0x00017abe) heading_ai3_data_pane_t1

0x95ba,	// (0x00017acc) list_double_ai3_gene_pane_ParamLimits

0x95ba,	// (0x00017acc) list_double_ai3_gene_pane

0x95c7,	// (0x00017ad9) list_single_ai3_gene_pane_ParamLimits

0x95c7,	// (0x00017ad9) list_single_ai3_gene_pane

0x80ab,	// (0x000165bd) list_highlight_pane_cp7_ParamLimits

0x80ab,	// (0x000165bd) list_highlight_pane_cp7

0x95d4,	// (0x00017ae6) list_single_a13_gene_pane_t1_ParamLimits

0x95d4,	// (0x00017ae6) list_single_a13_gene_pane_t1

0x95eb,	// (0x00017afd) list_single_ai3_gene_pane_g1

0x95f4,	// (0x00017b06) list_single_ai3_gene_pane_g2

0x0001,

0xfcdd,	// (0x0001e1ef) list_single_ai3_gene_pane_g

0x95fc,	// (0x00017b0e) list_double_ai3_gene_pane_g1_ParamLimits

0x95fc,	// (0x00017b0e) list_double_ai3_gene_pane_g1

0x9608,	// (0x00017b1a) list_double_ai3_gene_pane_t1_ParamLimits

0x9608,	// (0x00017b1a) list_double_ai3_gene_pane_t1

0x9624,	// (0x00017b36) list_double_ai3_gene_pane_t2_ParamLimits

0x9624,	// (0x00017b36) list_double_ai3_gene_pane_t2

0x9639,	// (0x00017b4b) list_double_ai3_gene_pane_t3_ParamLimits

0x9639,	// (0x00017b4b) list_double_ai3_gene_pane_t3

0x0002,

0xfce2,	// (0x0001e1f4) list_double_ai3_gene_pane_t_ParamLimits

0xfce2,	// (0x0001e1f4) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x93ff,	// (0x00017911) aid_size_min_col_2

0xeb28,	// (0x0001d03a) aid_size_min_msg_ParamLimits

0xeb28,	// (0x0001d03a) aid_size_min_msg

0xe942,	// (0x0001ce54) fep_vkb_top_text_pane_g2_ParamLimits

0xe942,	// (0x0001ce54) fep_vkb_top_text_pane_g2

0x0001,

0xfb42,	// (0x0001e054) fep_vkb_top_text_pane_g_ParamLimits

0xfb42,	// (0x0001e054) fep_vkb_top_text_pane_g

0x0ea4,	// (0x0000f3b6) main_hc_apps_shell_pane

0x9656,	// (0x00017b68) grid_hc_apps_pane_ParamLimits

0x9656,	// (0x00017b68) grid_hc_apps_pane

0x9665,	// (0x00017b77) list_hc_apps_pane

0x966d,	// (0x00017b7f) scroll_pane_cp37_ParamLimits

0x966d,	// (0x00017b7f) scroll_pane_cp37

0xec74,	// (0x0001d186) cell_hc_apps_pane_ParamLimits

0xec74,	// (0x0001d186) cell_hc_apps_pane

0xed32,	// (0x0001d244) cell_hc_apps_pane_g1_ParamLimits

0xed32,	// (0x0001d244) cell_hc_apps_pane_g1

0x9758,	// (0x00017c6a) cell_hc_apps_pane_g2_ParamLimits

0x9758,	// (0x00017c6a) cell_hc_apps_pane_g2

0x9774,	// (0x00017c86) cell_hc_apps_pane_g3_ParamLimits

0x9774,	// (0x00017c86) cell_hc_apps_pane_g3

0x0002,

0xfce9,	// (0x0001e1fb) cell_hc_apps_pane_g_ParamLimits

0xfce9,	// (0x0001e1fb) cell_hc_apps_pane_g

0xed5f,	// (0x0001d271) cell_hc_apps_pane_t1_ParamLimits

0xed5f,	// (0x0001d271) cell_hc_apps_pane_t1

0x3409,	// (0x0001191b) grid_highlight_pane_cp10_ParamLimits

0x3409,	// (0x0001191b) grid_highlight_pane_cp10

0xed9d,	// (0x0001d2af) list_single_hc_apps_pane_ParamLimits

0xed9d,	// (0x0001d2af) list_single_hc_apps_pane

0xedce,	// (0x0001d2e0) list_single_hc_apps_pane_g1

0xede7,	// (0x0001d2f9) list_single_hc_apps_pane_g2

0x0001,

0xfcf0,	// (0x0001e202) list_single_hc_apps_pane_g

0xee00,	// (0x0001d312) list_single_hc_apps_pane_g2_copy1

0xee1c,	// (0x0001d32e) list_single_hc_apps_pane_t1

0x3166,	// (0x00011678) bg_set_opt_pane_cp_ParamLimits

0x10ed,	// (0x0000f5ff) setting_slider_pane_t1_ParamLimits

0x1106,	// (0x0000f618) setting_slider_pane_t2_ParamLimits

0x1120,	// (0x0000f632) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001da76) setting_slider_pane_t_ParamLimits

0x1138,	// (0x0000f64a) slider_set_pane_ParamLimits

0x1658,	// (0x0000fb6a) control_pane_g5_ParamLimits

0x1658,	// (0x0000fb6a) control_pane_g5

0x6a7c,	// (0x00014f8e) slider_set_pane_g1_ParamLimits

0x2083,	// (0x00010595) slider_set_pane_g2_ParamLimits

0x208f,	// (0x000105a1) slider_set_pane_g3_ParamLimits

0x20a3,	// (0x000105b5) slider_set_pane_g4_ParamLimits

0x20bb,	// (0x000105cd) slider_set_pane_g5_ParamLimits

0x208f,	// (0x000105a1) slider_set_pane_g6_ParamLimits

0x20d1,	// (0x000105e3) slider_set_pane_g7_ParamLimits

0xf95b,	// (0x0001de6d) slider_set_pane_g_ParamLimits

0x4bf2,	// (0x00013104) navi_icon_text_pane_ParamLimits

0xdc7d,	// (0x0001c18f) aid_fill_nsta_2_ParamLimits

0xdcb4,	// (0x0001c1c6) aid_touch_tab_arrow_left_ParamLimits

0xdcca,	// (0x0001c1dc) aid_touch_tab_arrow_right_ParamLimits

0xdd65,	// (0x0001c277) clock_nsta_pane_ParamLimits

0x654b,	// (0x00014a5d) navi_icon_pane_g1_ParamLimits

0xe272,	// (0x0001c784) navi_text_pane_t1_ParamLimits

0x7c21,	// (0x00016133) navi_icon_text_pane_g1_ParamLimits

0x7c2d,	// (0x0001613f) navi_icon_text_pane_t1_ParamLimits

0xedce,	// (0x0001d2e0) list_single_hc_apps_pane_g1_ParamLimits

0xede7,	// (0x0001d2f9) list_single_hc_apps_pane_g2_ParamLimits

0xfcf0,	// (0x0001e202) list_single_hc_apps_pane_g_ParamLimits

0xee00,	// (0x0001d312) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xee1c,	// (0x0001d32e) list_single_hc_apps_pane_t1_ParamLimits

0xb3d5,	// (0x000198e7) popup_toolbar2_fixed_window_ParamLimits

0xb3d5,	// (0x000198e7) popup_toolbar2_fixed_window

0xbbce,	// (0x0001a0e0) popup_toolbar2_float_window

0x3072,	// (0x00011584) bg_popup_sub_pane_cp27

0x98ba,	// (0x00017dcc) grid_toolbar2_float_pane

0x3072,	// (0x00011584) bg_popup_sub_pane_cp26

0x98ba,	// (0x00017dcc) grid_toolbar2_fixed_pane

0xee4a,	// (0x0001d35c) cell_toolbar2_fixed_pane_ParamLimits

0xee4a,	// (0x0001d35c) cell_toolbar2_fixed_pane

0xee65,	// (0x0001d377) cell_toolbar2_fixed_pane_g1

0x1b1f,	// (0x00010031) toolbar2_fixed_button_pane

0x55cc,	// (0x00013ade) toolbar2_fixed_button_pane_g1

0x55dc,	// (0x00013aee) toolbar2_fixed_button_pane_g2

0x55d4,	// (0x00013ae6) toolbar2_fixed_button_pane_g3

0x55ec,	// (0x00013afe) toolbar2_fixed_button_pane_g4

0x55e4,	// (0x00013af6) toolbar2_fixed_button_pane_g5

0x55f4,	// (0x00013b06) toolbar2_fixed_button_pane_g6

0x55fc,	// (0x00013b0e) toolbar2_fixed_button_pane_g7

0x560c,	// (0x00013b1e) toolbar2_fixed_button_pane_g8

0x5604,	// (0x00013b16) toolbar2_fixed_button_pane_g9

0x0008,

0xf85d,	// (0x0001dd6f) toolbar2_fixed_button_pane_g

0x98dc,	// (0x00017dee) cell_toolbar2_float_pane_ParamLimits

0x98dc,	// (0x00017dee) cell_toolbar2_float_pane

0x98f0,	// (0x00017e02) cell_toolbar2_float_pane_g1

0x1b1f,	// (0x00010031) toolbar2_fixed_button_pane_cp

0xe82a,	// (0x0001cd3c) fep_vkb_accented_list_pane_ParamLimits

0xe82a,	// (0x0001cd3c) fep_vkb_accented_list_pane

0x246a,	// (0x0001097c) bg_popup_fep_shadow_pane_g9

0x4d66,	// (0x00013278) bg_popup_fep_shadow_pane_cp3

0x41e3,	// (0x000126f5) list_accented_list_pane

0x98f9,	// (0x00017e0b) list_single_accented_list_pane_ParamLimits

0x98f9,	// (0x00017e0b) list_single_accented_list_pane

0x4d66,	// (0x00013278) list_highlight_pane_cp10

0x990a,	// (0x00017e1c) list_single_accented_list_pane_t1

0xbaf8,	// (0x0001a00a) popup_slider_window_ParamLimits

0xbaf8,	// (0x0001a00a) popup_slider_window

0x93f6,	// (0x00017908) aid_indentation_list_msg

0xef5e,	// (0x0001d470) bg_popup_window_pane_cp19

0x9a2e,	// (0x00017f40) popup_slider_window_g1

0x9a4a,	// (0x00017f5c) popup_slider_window_g2

0x9a66,	// (0x00017f78) popup_slider_window_g3

0x0005,

0xfcf5,	// (0x0001e207) popup_slider_window_g

0x9ac2,	// (0x00017fd4) popup_slider_window_t1

0x9b36,	// (0x00018048) small_volume_slider_vertical_pane

0x80e6,	// (0x000165f8) small_volume_slider_vertical_pane_g1

0x80e6,	// (0x000165f8) small_volume_slider_vertical_pane_g2

0x9b52,	// (0x00018064) small_volume_slider_vertical_pane_g3

0x0002,

0xfd07,	// (0x0001e219) small_volume_slider_vertical_pane_g

0xb343,	// (0x00019855) area_side_right_pane_ParamLimits

0xb343,	// (0x00019855) area_side_right_pane

0xbe51,	// (0x0001a363) aid_size_side_button_ParamLimits

0xbe51,	// (0x0001a363) aid_size_side_button

0xbe6a,	// (0x0001a37c) grid_sctrl_middle_pane_ParamLimits

0xbe6a,	// (0x0001a37c) grid_sctrl_middle_pane

0x2687,	// (0x00010b99) sctrl_sk_bottom_pane

0x2698,	// (0x00010baa) sctrl_sk_top_pane

0x26aa,	// (0x00010bbc) aid_touch_sctrl_top

0x26b7,	// (0x00010bc9) bg_sctrl_sk_pane_ParamLimits

0x26b7,	// (0x00010bc9) bg_sctrl_sk_pane

0x26c5,	// (0x00010bd7) sctrl_sk_top_pane_g1

0x26d2,	// (0x00010be4) sctrl_sk_top_pane_t1

0x26aa,	// (0x00010bbc) aid_touch_sctrl_bottom

0x26b7,	// (0x00010bc9) bg_sctrl_sk_pane_cp_ParamLimits

0x26b7,	// (0x00010bc9) bg_sctrl_sk_pane_cp

0x26ed,	// (0x00010bff) sctrl_sk_bottom_pane_g1

0x26d2,	// (0x00010be4) sctrl_sk_bottom_pane_t1

0xbe84,	// (0x0001a396) cell_sctrl_middle_pane_ParamLimits

0xbe84,	// (0x0001a396) cell_sctrl_middle_pane

0xbe95,	// (0x0001a3a7) aid_touch_sctrl_middle_ParamLimits

0xbe95,	// (0x0001a3a7) aid_touch_sctrl_middle

0xbea2,	// (0x0001a3b4) bg_sctrl_middle_pane_ParamLimits

0xbea2,	// (0x0001a3b4) bg_sctrl_middle_pane

0x2d5e,	// (0x00011270) cell_sctrl_middle_pane_g1_ParamLimits

0x2d5e,	// (0x00011270) cell_sctrl_middle_pane_g1

0xbeb0,	// (0x0001a3c2) cell_sctrl_middle_pane_g2_ParamLimits

0xbeb0,	// (0x0001a3c2) cell_sctrl_middle_pane_g2

0x0001,

0xfd13,	// (0x0001e225) cell_sctrl_middle_pane_g_ParamLimits

0xfd13,	// (0x0001e225) cell_sctrl_middle_pane_g

0x55cc,	// (0x00013ade) bg_sctrl_middle_pane_g1

0x55d4,	// (0x00013ae6) bg_sctrl_middle_pane_g2

0x55dc,	// (0x00013aee) bg_sctrl_middle_pane_g3

0x55e4,	// (0x00013af6) bg_sctrl_middle_pane_g4

0x55ec,	// (0x00013afe) bg_sctrl_middle_pane_g5

0x55f4,	// (0x00013b06) bg_sctrl_middle_pane_g6

0x55fc,	// (0x00013b0e) bg_sctrl_middle_pane_g7

0x5604,	// (0x00013b16) bg_sctrl_middle_pane_g8

0x0007,

0xfd18,	// (0x0001e22a) bg_sctrl_middle_pane_g

0x560c,	// (0x00013b1e) bg_sctrl_middle_pane_g8_copy1

0x55cc,	// (0x00013ade) bg_sctrl_sk_pane_g1

0x55dc,	// (0x00013aee) bg_sctrl_sk_pane_g2

0x55d4,	// (0x00013ae6) bg_sctrl_sk_pane_g3

0x0008,

0xf85d,	// (0x0001dd6f) bg_sctrl_sk_pane_g

0x3906,	// (0x00011e18) aid_size_touch_scroll_bar

0x55ec,	// (0x00013afe) bg_sctrl_sk_pane_g4

0x55e4,	// (0x00013af6) bg_sctrl_sk_pane_g5

0x55f4,	// (0x00013b06) bg_sctrl_sk_pane_g6

0x55fc,	// (0x00013b0e) bg_sctrl_sk_pane_g7

0x560c,	// (0x00013b1e) bg_sctrl_sk_pane_g8

0x5604,	// (0x00013b16) bg_sctrl_sk_pane_g9

0x180a,	// (0x0000fd1c) popup_fep_china_hwr2_fs_candidate_window

0xb626,	// (0x00019b38) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb626,	// (0x00019b38) popup_fep_china_hwr2_fs_control_window

0x248a,	// (0x0001099c) sctrl_sk_top_pane_g2

0x0001,

0xfd0e,	// (0x0001e220) sctrl_sk_top_pane_g

0xf016,	// (0x0001d528) aid_fep_china_hwr2_fs_cell_ParamLimits

0xf016,	// (0x0001d528) aid_fep_china_hwr2_fs_cell

0xf02a,	// (0x0001d53c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xf02a,	// (0x0001d53c) bg_popup_fep_shadow_pane_cp4

0xf041,	// (0x0001d553) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xf041,	// (0x0001d553) bg_popup_fep_shadow_pane_cp5

0xf053,	// (0x0001d565) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xf053,	// (0x0001d565) popup_fep_china_hwr2_fs_control_bar_grid

0xf067,	// (0x0001d579) popup_fep_china_hwr2_fs_control_funtion_grid

0x9bae,	// (0x000180c0) aid_fep_china_hwr2_fs_candi_cell

0x3072,	// (0x00011584) bg_popup_fep_shadow_pane_cp6

0x9bb8,	// (0x000180ca) popup_fep_china_hwr2_fs_candidate_grid

0xf06f,	// (0x0001d581) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xf06f,	// (0x0001d581) cell_fep_china_hwr2_fs_funtion_grid

0x80e6,	// (0x000165f8) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9bda,	// (0x000180ec) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9bda,	// (0x000180ec) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9be8,	// (0x000180fa) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9be8,	// (0x000180fa) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd29,	// (0x0001e23b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd29,	// (0x0001e23b) cell_fep_china_hwr2_fs_funtion_grid_g

0xf087,	// (0x0001d599) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xf087,	// (0x0001d599) cell_fep_china_hwr2_fs_funtion_grid_t1

0xf09c,	// (0x0001d5ae) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xf09c,	// (0x0001d5ae) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2e,	// (0x0001e240) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2e,	// (0x0001e240) cell_fep_china_hwr2_fs_funtion_grid_t

0x9c2f,	// (0x00018141) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9c37,	// (0x00018149) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9c3f,	// (0x00018151) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd33,	// (0x0001e245) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9c47,	// (0x00018159) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9c47,	// (0x00018159) cell_fep_china_hwr2_fs_candidate_grid

0x9c60,	// (0x00018172) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9c68,	// (0x0001817a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x80e6,	// (0x000165f8) cell_fep_china_hwr2_fs_candidate_grid_g1

0x80e6,	// (0x000165f8) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb47,	// (0x0001e059) cell_fep_china_hwr2_fs_candidate_grid_g

0x9c70,	// (0x00018182) cell_fep_china_hwr2_fs_candidate_grid_t1

0x51b2,	// (0x000136c4) clock_nsta_pane_cp_24_ParamLimits

0x51b2,	// (0x000136c4) clock_nsta_pane_cp_24

0x5230,	// (0x00013742) indicator_nsta_pane_cp_24_ParamLimits

0x5230,	// (0x00013742) indicator_nsta_pane_cp_24

0x63c7,	// (0x000148d9) heading_pane_g1

0x0001,

0xf8c2,	// (0x0001ddd4) heading_pane_g

0x6ee2,	// (0x000153f4) grid_sct_catagory_button_pane

0x6f12,	// (0x00015424) scroll_pane_cp5_ParamLimits

0x7c6f,	// (0x00016181) button_value_adjust_pane_cp5_ParamLimits

0x7c6f,	// (0x00016181) button_value_adjust_pane_cp5

0x7d69,	// (0x0001627b) form2_midp_time_pane_ParamLimits

0x9c7e,	// (0x00018190) cell_sct_catagory_button_pane_ParamLimits

0x9c7e,	// (0x00018190) cell_sct_catagory_button_pane

0x80ab,	// (0x000165bd) bg_button_pane_cp01_ParamLimits

0x80ab,	// (0x000165bd) bg_button_pane_cp01

0x80e6,	// (0x000165f8) cell_sct_catagory_button_pane_g1

0xbb71,	// (0x0001a083) popup_tb_extension_window

0xf0b8,	// (0x0001d5ca) aid_size_cell_ext_ParamLimits

0xf0b8,	// (0x0001d5ca) aid_size_cell_ext

0x3748,	// (0x00011c5a) bg_tb_trans_pane_cp1_ParamLimits

0x3748,	// (0x00011c5a) bg_tb_trans_pane_cp1

0xf0de,	// (0x0001d5f0) grid_tb_ext_pane_ParamLimits

0xf0de,	// (0x0001d5f0) grid_tb_ext_pane

0xf120,	// (0x0001d632) cell_tb_ext_pane_ParamLimits

0xf120,	// (0x0001d632) cell_tb_ext_pane

0xf148,	// (0x0001d65a) cell_tb_ext_pane_g1_ParamLimits

0xf148,	// (0x0001d65a) cell_tb_ext_pane_g1

0x9d16,	// (0x00018228) cell_tb_ext_pane_t1

0x3409,	// (0x0001191b) list_highlight_pane_cp11_ParamLimits

0x3409,	// (0x0001191b) list_highlight_pane_cp11

0x1020,	// (0x0000f532) popup_uni_indicator_window_ParamLimits

0x1020,	// (0x0000f532) popup_uni_indicator_window

0x3f2e,	// (0x00012440) bg_popup_sub_pane_cp14

0x9d31,	// (0x00018243) list_uniindi_pane

0x9d3d,	// (0x0001824f) uniindi_top_pane

0x3409,	// (0x0001191b) bg_uniindi_top_pane

0x9d5c,	// (0x0001826e) uniindi_top_pane_g1

0x9d72,	// (0x00018284) uniindi_top_pane_g2

0x0003,

0xfd3a,	// (0x0001e24c) uniindi_top_pane_g

0x9d9c,	// (0x000182ae) uniindi_top_pane_t1

0x9dc6,	// (0x000182d8) list_single_uniindi_pane_ParamLimits

0x9dc6,	// (0x000182d8) list_single_uniindi_pane

0x80e6,	// (0x000165f8) bg_uniindi_top_pane_g1

0x9dd9,	// (0x000182eb) list_single_uniindi_pane_g1

0x9dec,	// (0x000182fe) list_single_uniindi_pane_t1

0x0ea4,	// (0x0000f3b6) control_bg_pane

0x9e11,	// (0x00018323) bg_sctrl_sk_pane_cp1

0x9e1a,	// (0x0001832c) bg_sctrl_sk_pane_cp2

0x9e23,	// (0x00018335) control_bg_pane_g1

0x9e2c,	// (0x0001833e) control_bg_pane_g2

0x0001,

0xfd43,	// (0x0001e255) control_bg_pane_g

0x7aaa,	// (0x00015fbc) cell_indicator_nsta_pane_g1_ParamLimits

0xe698,	// (0x0001cbaa) cell_indicator_nsta_pane_g2_ParamLimits

0xfaab,	// (0x0001dfbd) cell_indicator_nsta_pane_g_ParamLimits

0x7ded,	// (0x000162ff) form2_midp_time_pane_t1_ParamLimits

0x2225,	// (0x00010737) main_idle_act4_pane_ParamLimits

0x2225,	// (0x00010737) main_idle_act4_pane

0xbb71,	// (0x0001a083) popup_tb_extension_window_ParamLimits

0xf106,	// (0x0001d618) tb_ext_find_pane_ParamLimits

0xf106,	// (0x0001d618) tb_ext_find_pane

0x9e35,	// (0x00018347) ai_gene_pane_1_cp1

0x4ea3,	// (0x000133b5) ai_gene_pane_2_cp1

0x9e3d,	// (0x0001834f) list_single_idle_plugin_calendar_pane

0x9e46,	// (0x00018358) list_single_idle_plugin_notification_pane

0x9e4f,	// (0x00018361) list_single_idle_plugin_player_pane

0xf165,	// (0x0001d677) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf165,	// (0x0001d677) list_single_idle_plugin_shortcut_pane

0xf18d,	// (0x0001d69f) main_idle_act4_pane_t1

0xf1a3,	// (0x0001d6b5) main_idle_act4_pane_t2

0x0001,

0xfd48,	// (0x0001e25a) main_idle_act4_pane_t

0xf1bb,	// (0x0001d6cd) middle_sk_idle_act4_pane_ParamLimits

0xf1bb,	// (0x0001d6cd) middle_sk_idle_act4_pane

0xf1d7,	// (0x0001d6e9) popup_clock_digital_analogue_window_cp2

0xf1fe,	// (0x0001d710) shortcut_wheel_idle_act4_pane_ParamLimits

0xf1fe,	// (0x0001d710) shortcut_wheel_idle_act4_pane

0x80e6,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g1

0x80e6,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g2

0x80e6,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g3

0x80e6,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g4

0x80e6,	// (0x000165f8) shortcut_wheel_idle_act4_pane_g5

0x9ee2,	// (0x000183f4) shortcut_wheel_idle_act4_pane_g6

0x9eea,	// (0x000183fc) shortcut_wheel_idle_act4_pane_g7

0x9ef2,	// (0x00018404) shortcut_wheel_idle_act4_pane_g8

0x9efa,	// (0x0001840c) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4d,	// (0x0001e25f) shortcut_wheel_idle_act4_pane_g

0xc2f9,	// (0x0001a80b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2f9,	// (0x0001a80b) middle_sk_idle_act4_pane_g1

0xf27b,	// (0x0001d78d) middle_sk_idle_act4_pane_g2_ParamLimits

0xf27b,	// (0x0001d78d) middle_sk_idle_act4_pane_g2

0x0001,

0xfd70,	// (0x0001e282) middle_sk_idle_act4_pane_g_ParamLimits

0xfd70,	// (0x0001e282) middle_sk_idle_act4_pane_g

0xf293,	// (0x0001d7a5) middle_sk_idle_act4_pane_t1_ParamLimits

0xf293,	// (0x0001d7a5) middle_sk_idle_act4_pane_t1

0xf2c2,	// (0x0001d7d4) grid_ai_shortcut_pane_ParamLimits

0xf2c2,	// (0x0001d7d4) grid_ai_shortcut_pane

0xf2df,	// (0x0001d7f1) list_highlight_pane_cp16_ParamLimits

0xf2df,	// (0x0001d7f1) list_highlight_pane_cp16

0xf2ec,	// (0x0001d7fe) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf2ec,	// (0x0001d7fe) list_single_idle_plugin_shortcut_pane_g1

0xf2f8,	// (0x0001d80a) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf2f8,	// (0x0001d80a) list_single_idle_plugin_shortcut_pane_g2

0xf314,	// (0x0001d826) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf314,	// (0x0001d826) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd75,	// (0x0001e287) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd75,	// (0x0001e287) list_single_idle_plugin_shortcut_pane_g

0xf329,	// (0x0001d83b) cell_ai_shortcut_pane_ParamLimits

0xf329,	// (0x0001d83b) cell_ai_shortcut_pane

0xf33f,	// (0x0001d851) cell_ai_shortcut_pane_g1_ParamLimits

0xf33f,	// (0x0001d851) cell_ai_shortcut_pane_g1

0x9e35,	// (0x00018347) ai_gene_pane_1_cp2

0xa027,	// (0x00018539) ai_gene_pane_2_cp2

0xa02f,	// (0x00018541) list_highlight_pane_cp15

0xa038,	// (0x0001854a) list_single_idle_plugin_calendar_pane_g1

0xa02f,	// (0x00018541) list_highlight_pane_cp17

0xa040,	// (0x00018552) list_single_idle_plugin_calendar_pane_g1_copy1

0xa048,	// (0x0001855a) list_single_idle_plugin_player_pane_g1

0x717b,	// (0x0001568d) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7c,	// (0x0001e28e) list_single_idle_plugin_player_pane_g

0xa050,	// (0x00018562) list_single_idle_plugin_player_pane_t1

0xa05e,	// (0x00018570) list_single_idle_plugin_player_pane_t2

0xa06c,	// (0x0001857e) list_single_idle_plugin_player_pane_t3

0xa07a,	// (0x0001858c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd81,	// (0x0001e293) list_single_idle_plugin_player_pane_t

0xa088,	// (0x0001859a) wait_bar_pane_cp15

0xa090,	// (0x000185a2) grid_ai_notification_pane

0x717b,	// (0x0001568d) list_single_idle_plugin_notification_pane_g1

0xf361,	// (0x0001d873) cell_ai_notification_pane_ParamLimits

0xf361,	// (0x0001d873) cell_ai_notification_pane

0xa0a6,	// (0x000185b8) cell_ai_notification_pane_g1

0xa0ae,	// (0x000185c0) cell_ai_notification_pane_t1

0xf36e,	// (0x0001d880) tb_ext_find_button_pane

0xf376,	// (0x0001d888) tb_ext_find_pane_g1

0xf37e,	// (0x0001d890) tb_ext_find_pane_t1

0x46e0,	// (0x00012bf2) tb_ext_find_button_pane_g1

0xa0da,	// (0x000185ec) tb_ext_find_button_pane_g2

0x0001,

0xfd8a,	// (0x0001e29c) tb_ext_find_button_pane_g

0xf18d,	// (0x0001d69f) main_idle_act4_pane_t1_ParamLimits

0xf1a3,	// (0x0001d6b5) main_idle_act4_pane_t2_ParamLimits

0xfd48,	// (0x0001e25a) main_idle_act4_pane_t_ParamLimits

0xf1d7,	// (0x0001d6e9) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf1ee,	// (0x0001d700) sat_plugin_idle_act4_pane_ParamLimits

0xf1ee,	// (0x0001d700) sat_plugin_idle_act4_pane

0xf38c,	// (0x0001d89e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf38c,	// (0x0001d89e) sat_plugin_idle_act4_pane_t1

0xf3a4,	// (0x0001d8b6) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3a4,	// (0x0001d8b6) sat_plugin_idle_act4_pane_t2

0xf3bc,	// (0x0001d8ce) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3bc,	// (0x0001d8ce) sat_plugin_idle_act4_pane_t3

0xf3d4,	// (0x0001d8e6) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3d4,	// (0x0001d8e6) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8f,	// (0x0001e2a1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8f,	// (0x0001e2a1) sat_plugin_idle_act4_pane_t

0x0f69,	// (0x0000f47b) popup_battery_window_ParamLimits

0x0f69,	// (0x0000f47b) popup_battery_window

0x3409,	// (0x0001191b) bg_popup_sub_pane_cp25_ParamLimits

0x3409,	// (0x0001191b) bg_popup_sub_pane_cp25

0xa12f,	// (0x00018641) popup_battery_window_g1_ParamLimits

0xa12f,	// (0x00018641) popup_battery_window_g1

0xa13b,	// (0x0001864d) popup_battery_window_t1_ParamLimits

0xa13b,	// (0x0001864d) popup_battery_window_t1

0xa14d,	// (0x0001865f) popup_battery_window_t2_ParamLimits

0xa14d,	// (0x0001865f) popup_battery_window_t2

0x0001,

0xfd98,	// (0x0001e2aa) popup_battery_window_t_ParamLimits

0xfd98,	// (0x0001e2aa) popup_battery_window_t

0xdb81,	// (0x0001c093) midp_canvas_pane_ParamLimits

0xdbde,	// (0x0001c0f0) midp_keypad_pane_ParamLimits

0xdbde,	// (0x0001c0f0) midp_keypad_pane

0x50aa,	// (0x000135bc) main_midp_pane_ParamLimits

0x7b2d,	// (0x0001603f) signal_pane_g2_cp_ParamLimits

0xf3ec,	// (0x0001d8fe) aid_size_cell_midp_keypad_ParamLimits

0xf3ec,	// (0x0001d8fe) aid_size_cell_midp_keypad

0xf40a,	// (0x0001d91c) midp_keyp_game_grid_pane_ParamLimits

0xf40a,	// (0x0001d91c) midp_keyp_game_grid_pane

0xf431,	// (0x0001d943) midp_keyp_rocker_pane_ParamLimits

0xf431,	// (0x0001d943) midp_keyp_rocker_pane

0xf47a,	// (0x0001d98c) midp_keyp_sk_left_pane_ParamLimits

0xf47a,	// (0x0001d98c) midp_keyp_sk_left_pane

0xf4cc,	// (0x0001d9de) midp_keyp_sk_right_pane_ParamLimits

0xf4cc,	// (0x0001d9de) midp_keyp_sk_right_pane

0x3072,	// (0x00011584) bg_button_pane_cp03

0xf51e,	// (0x0001da30) midp_keyp_sk_left_pane_g1

0x3072,	// (0x00011584) bg_button_pane_cp04

0xf51e,	// (0x0001da30) midp_keyp_sk_right_pane_g1

0x80e6,	// (0x000165f8) midp_keyp_rocker_pane_g1

0xf527,	// (0x0001da39) keyp_game_cell_pane_ParamLimits

0xf527,	// (0x0001da39) keyp_game_cell_pane

0x3072,	// (0x00011584) bg_button_pane_cp02

0xf54b,	// (0x0001da5d) keyp_game_cell_pane_g1

0xb385,	// (0x00019897) popup_fep_vkb2_window_ParamLimits

0xb385,	// (0x00019897) popup_fep_vkb2_window

0xbebc,	// (0x0001a3ce) aid_size_cell_vkb2_ParamLimits

0xbebc,	// (0x0001a3ce) aid_size_cell_vkb2

0xbef2,	// (0x0001a404) popup_fep_vkb2_window_g1_ParamLimits

0xbef2,	// (0x0001a404) popup_fep_vkb2_window_g1

0xbf42,	// (0x0001a454) vkb2_area_bottom_pane_ParamLimits

0xbf42,	// (0x0001a454) vkb2_area_bottom_pane

0xbf96,	// (0x0001a4a8) vkb2_area_keypad_pane_ParamLimits

0xbf96,	// (0x0001a4a8) vkb2_area_keypad_pane

0xbfde,	// (0x0001a4f0) vkb2_area_top_pane_ParamLimits

0xbfde,	// (0x0001a4f0) vkb2_area_top_pane

0xc064,	// (0x0001a576) vkb2_top_entry_pane_ParamLimits

0xc064,	// (0x0001a576) vkb2_top_entry_pane

0xc091,	// (0x0001a5a3) vkb2_top_grid_left_pane_ParamLimits

0xc091,	// (0x0001a5a3) vkb2_top_grid_left_pane

0xc0b1,	// (0x0001a5c3) vkb2_top_grid_right_pane_ParamLimits

0xc0b1,	// (0x0001a5c3) vkb2_top_grid_right_pane

0x2959,	// (0x00010e6b) vkb2_cell_keypad_pane_ParamLimits

0x2959,	// (0x00010e6b) vkb2_cell_keypad_pane

0xc0f7,	// (0x0001a609) vkb2_area_bottom_grid_pane_ParamLimits

0xc0f7,	// (0x0001a609) vkb2_area_bottom_grid_pane

0xc121,	// (0x0001a633) vkb2_area_bottom_pane_g1_ParamLimits

0xc121,	// (0x0001a633) vkb2_area_bottom_pane_g1

0xc147,	// (0x0001a659) vkb2_area_bottom_pane_g2_ParamLimits

0xc147,	// (0x0001a659) vkb2_area_bottom_pane_g2

0xc178,	// (0x0001a68a) vkb2_area_bottom_pane_g3_ParamLimits

0xc178,	// (0x0001a68a) vkb2_area_bottom_pane_g3

0x0002,

0xfd9d,	// (0x0001e2af) vkb2_area_bottom_pane_g_ParamLimits

0xfd9d,	// (0x0001e2af) vkb2_area_bottom_pane_g

0x2b03,	// (0x00011015) vkb2_top_cell_left_pane_ParamLimits

0x2b03,	// (0x00011015) vkb2_top_cell_left_pane

0x030e,	// (0x0000e820) vkb2_top_entry_pane_g1_ParamLimits

0x030e,	// (0x0000e820) vkb2_top_entry_pane_g1

0x031c,	// (0x0000e82e) vkb2_top_entry_pane_t1_ParamLimits

0x031c,	// (0x0000e82e) vkb2_top_entry_pane_t1

0xa2f6,	// (0x00018808) vkb2_top_entry_pane_t2_ParamLimits

0xa2f6,	// (0x00018808) vkb2_top_entry_pane_t2

0xa328,	// (0x0001883a) vkb2_top_entry_pane_t3_ParamLimits

0xa328,	// (0x0001883a) vkb2_top_entry_pane_t3

0x0002,

0xfda4,	// (0x0001e2b6) vkb2_top_entry_pane_t_ParamLimits

0xfda4,	// (0x0001e2b6) vkb2_top_entry_pane_t

0xc1e2,	// (0x0001a6f4) vkb2_top_grid_right_pane_g1_ParamLimits

0xc1e2,	// (0x0001a6f4) vkb2_top_grid_right_pane_g1

0x2b66,	// (0x00011078) vkb2_top_grid_right_pane_g2_ParamLimits

0x2b66,	// (0x00011078) vkb2_top_grid_right_pane_g2

0x2b7e,	// (0x00011090) vkb2_top_grid_right_pane_g3_ParamLimits

0x2b7e,	// (0x00011090) vkb2_top_grid_right_pane_g3

0xc1f8,	// (0x0001a70a) vkb2_top_grid_right_pane_g4_ParamLimits

0xc1f8,	// (0x0001a70a) vkb2_top_grid_right_pane_g4

0x0003,

0xfdab,	// (0x0001e2bd) vkb2_top_grid_right_pane_g_ParamLimits

0xfdab,	// (0x0001e2bd) vkb2_top_grid_right_pane_g

0x2bac,	// (0x000110be) vkb2_top_cell_left_pane_g1

0x2bc3,	// (0x000110d5) vkb2_cell_keypad_pane_g1_ParamLimits

0x2bc3,	// (0x000110d5) vkb2_cell_keypad_pane_g1

0xa34c,	// (0x0001885e) vkb2_cell_keypad_pane_t1_ParamLimits

0xa34c,	// (0x0001885e) vkb2_cell_keypad_pane_t1

0x2bd1,	// (0x000110e3) vkb2_cell_bottom_grid_pane_ParamLimits

0x2bd1,	// (0x000110e3) vkb2_cell_bottom_grid_pane

0x2c0a,	// (0x0001111c) vkb2_cell_bottom_grid_pane_g1

0xf21f,	// (0x0001d731) aid_call2_pane_cp02

0xf227,	// (0x0001d739) aid_call_pane_cp02

0xf22f,	// (0x0001d741) clock_digital_number_pane_cp10

0xf237,	// (0x0001d749) clock_digital_number_pane_cp11

0xf23f,	// (0x0001d751) clock_digital_number_pane_cp12

0xf247,	// (0x0001d759) clock_digital_number_pane_cp13

0xf24f,	// (0x0001d761) clock_digital_separator_pane_cp10

0x46e0,	// (0x00012bf2) popup_clock_digital_analogue_window_cp2_g1

0x46e0,	// (0x00012bf2) popup_clock_digital_analogue_window_cp2_g2

0xf257,	// (0x0001d769) popup_clock_digital_analogue_window_cp2_g3

0x46e0,	// (0x00012bf2) popup_clock_digital_analogue_window_cp2_g4

0xf257,	// (0x0001d769) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd60,	// (0x0001e272) popup_clock_digital_analogue_window_cp2_g

0xf25f,	// (0x0001d771) popup_clock_digital_analogue_window_cp2_t1

0xf26d,	// (0x0001d77f) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd6b,	// (0x0001e27d) popup_clock_digital_analogue_window_cp2_t

0x80e6,	// (0x000165f8) clock_digital_number_pane_cp10_g1

0x80e6,	// (0x000165f8) clock_digital_number_pane_cp10_g2

0x0001,

0xfb47,	// (0x0001e059) clock_digital_number_pane_cp10_g

0x80e6,	// (0x000165f8) clock_digital_separator_pane_cp10_g1

0x80e6,	// (0x000165f8) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb47,	// (0x0001e059) clock_digital_separator_pane_cp10_g

0x9d7e,	// (0x00018290) uniindi_top_pane_g3

0x9d8f,	// (0x000182a1) uniindi_top_pane_g4

0x29e4,	// (0x00010ef6) vkb2_row_keypad_pane_ParamLimits

0x29e4,	// (0x00010ef6) vkb2_row_keypad_pane

0x2c2a,	// (0x0001113c) vkb2_cell_t_keypad_pane_ParamLimits

0x2c2a,	// (0x0001113c) vkb2_cell_t_keypad_pane

0x2c3a,	// (0x0001114c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2c3a,	// (0x0001114c) vkb2_cell_t_keypad_pane_cp08

0x2c4d,	// (0x0001115f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2c4d,	// (0x0001115f) vkb2_cell_t_keypad_pane_cp09

0x2c61,	// (0x00011173) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2c61,	// (0x00011173) vkb2_cell_t_keypad_pane_cp01

0x2c72,	// (0x00011184) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2c72,	// (0x00011184) vkb2_cell_t_keypad_pane_cp02

0x2c83,	// (0x00011195) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2c83,	// (0x00011195) vkb2_cell_t_keypad_pane_cp03

0x2c94,	// (0x000111a6) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2c94,	// (0x000111a6) vkb2_cell_t_keypad_pane_cp04

0x2ca5,	// (0x000111b7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2ca5,	// (0x000111b7) vkb2_cell_t_keypad_pane_cp05

0x2cb6,	// (0x000111c8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2cb6,	// (0x000111c8) vkb2_cell_t_keypad_pane_cp06

0x2cc7,	// (0x000111d9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2cc7,	// (0x000111d9) vkb2_cell_t_keypad_pane_cp07

0x2cd8,	// (0x000111ea) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2cd8,	// (0x000111ea) vkb2_cell_t_keypad_pane_cp10

0x248a,	// (0x0001099c) vkb2_cell_t_keypad_pane_g1

0xa363,	// (0x00018875) vkb2_cell_t_keypad_pane_t1

0x0ea4,	// (0x0000f3b6) popup_grid_graphic2_window

0x0381,	// (0x0000e893) aid_size_cell_graphic2_ParamLimits

0x0381,	// (0x0000e893) aid_size_cell_graphic2

0x03bf,	// (0x0000e8d1) bg_popup_window_pane_cp21_ParamLimits

0x03bf,	// (0x0000e8d1) bg_popup_window_pane_cp21

0x03cd,	// (0x0000e8df) graphic2_pages_pane_ParamLimits

0x03cd,	// (0x0000e8df) graphic2_pages_pane

0x0423,	// (0x0000e935) grid_graphic2_control_pane_ParamLimits

0x0423,	// (0x0000e935) grid_graphic2_control_pane

0x046b,	// (0x0000e97d) grid_graphic2_pane_ParamLimits

0x046b,	// (0x0000e97d) grid_graphic2_pane

0x04f2,	// (0x0000ea04) cell_graphic2_pane

0x0ea4,	// (0x0000f3b6) main_comp_mode_pane

0x9590,	// (0x00017aa2) list_ai3_gene_pane_ParamLimits

0xef5e,	// (0x0001d470) bg_popup_window_pane_cp19_ParamLimits

0x99d0,	// (0x00017ee2) bg_touch_area_indi_pane_ParamLimits

0x99d0,	// (0x00017ee2) bg_touch_area_indi_pane

0x99e6,	// (0x00017ef8) bg_touch_area_indi_pane_cp01_ParamLimits

0x99e6,	// (0x00017ef8) bg_touch_area_indi_pane_cp01

0x99fc,	// (0x00017f0e) bg_touch_area_indi_pane_cp02_ParamLimits

0x99fc,	// (0x00017f0e) bg_touch_area_indi_pane_cp02

0x9a14,	// (0x00017f26) bg_touch_area_indi_pane_cp03_ParamLimits

0x9a14,	// (0x00017f26) bg_touch_area_indi_pane_cp03

0x9a2e,	// (0x00017f40) popup_slider_window_g1_ParamLimits

0x9a4a,	// (0x00017f5c) popup_slider_window_g2_ParamLimits

0x9a66,	// (0x00017f78) popup_slider_window_g3_ParamLimits

0xfcf5,	// (0x0001e207) popup_slider_window_g_ParamLimits

0x9ac2,	// (0x00017fd4) popup_slider_window_t1_ParamLimits

0x9b36,	// (0x00018048) small_volume_slider_vertical_pane_ParamLimits

0x04f2,	// (0x0000ea04) cell_graphic2_pane_ParamLimits

0x054f,	// (0x0000ea61) bg_button_pane_cp10_ParamLimits

0x054f,	// (0x0000ea61) bg_button_pane_cp10

0x0562,	// (0x0000ea74) bg_button_pane_cp11_ParamLimits

0x0562,	// (0x0000ea74) bg_button_pane_cp11

0x0575,	// (0x0000ea87) graphic2_pages_pane_g1_ParamLimits

0x0575,	// (0x0000ea87) graphic2_pages_pane_g1

0x0590,	// (0x0000eaa2) graphic2_pages_pane_g2_ParamLimits

0x0590,	// (0x0000eaa2) graphic2_pages_pane_g2

0x0001,

0xfdb9,	// (0x0001e2cb) graphic2_pages_pane_g_ParamLimits

0xfdb9,	// (0x0001e2cb) graphic2_pages_pane_g

0x05a8,	// (0x0000eaba) graphic2_pages_pane_t1_ParamLimits

0x05a8,	// (0x0000eaba) graphic2_pages_pane_t1

0x05c0,	// (0x0000ead2) cell_graphic2_control_pane_ParamLimits

0x05c0,	// (0x0000ead2) cell_graphic2_control_pane

0x05f2,	// (0x0000eb04) cell_graphic2_pane_g1_ParamLimits

0x05f2,	// (0x0000eb04) cell_graphic2_pane_g1

0xc307,	// (0x0001a819) cell_graphic2_pane_g2_ParamLimits

0xc307,	// (0x0001a819) cell_graphic2_pane_g2

0x05ff,	// (0x0000eb11) cell_graphic2_pane_g3_ParamLimits

0x05ff,	// (0x0000eb11) cell_graphic2_pane_g3

0xc314,	// (0x0001a826) cell_graphic2_pane_g4_ParamLimits

0xc314,	// (0x0001a826) cell_graphic2_pane_g4

0x060c,	// (0x0000eb1e) cell_graphic2_pane_g5_ParamLimits

0x060c,	// (0x0000eb1e) cell_graphic2_pane_g5

0x0004,

0xfdbe,	// (0x0001e2d0) cell_graphic2_pane_g_ParamLimits

0xfdbe,	// (0x0001e2d0) cell_graphic2_pane_g

0x062c,	// (0x0000eb3e) cell_graphic2_pane_t1_ParamLimits

0x062c,	// (0x0000eb3e) cell_graphic2_pane_t1

0x63bb,	// (0x000148cd) grid_highlight_pane_cp11_ParamLimits

0x63bb,	// (0x000148cd) grid_highlight_pane_cp11

0x3409,	// (0x0001191b) bg_button_pane_cp05

0x0660,	// (0x0000eb72) cell_graphic2_control_pane_g1

0x80e6,	// (0x000165f8) bg_touch_area_indi_pane_g1

0xa631,	// (0x00018b43) aid_cmod_rocker_key_size

0xa63b,	// (0x00018b4d) aid_cmode_itu_key_size

0xa645,	// (0x00018b57) main_cmode_video_pane

0xa64f,	// (0x00018b61) main_comp_mode_itu_pane

0xa65b,	// (0x00018b6d) main_comp_mode_rocker_pane

0xa667,	// (0x00018b79) cell_cmode_rocker_pane_ParamLimits

0xa667,	// (0x00018b79) cell_cmode_rocker_pane

0xa679,	// (0x00018b8b) cell_cmode_itu_pane_ParamLimits

0xa679,	// (0x00018b8b) cell_cmode_itu_pane

0x3f2e,	// (0x00012440) bg_button_pane_cp06_ParamLimits

0x3f2e,	// (0x00012440) bg_button_pane_cp06

0x8354,	// (0x00016866) cell_cmode_rocker_pane_g1_ParamLimits

0x8354,	// (0x00016866) cell_cmode_rocker_pane_g1

0x9bda,	// (0x000180ec) cell_cmode_rocker_pane_g2_ParamLimits

0x9bda,	// (0x000180ec) cell_cmode_rocker_pane_g2

0x0001,

0xfdce,	// (0x0001e2e0) cell_cmode_rocker_pane_g_ParamLimits

0xfdce,	// (0x0001e2e0) cell_cmode_rocker_pane_g

0x3072,	// (0x00011584) bg_button_pane_cp07

0xa68e,	// (0x00018ba0) cell_cmode_itu_pane_g1

0xa697,	// (0x00018ba9) cell_cmode_itu_pane_t1

0xa6a5,	// (0x00018bb7) cell_cmode_itu_pane_t2

0x0001,

0xfdd3,	// (0x0001e2e5) cell_cmode_itu_pane_t

0x9e01,	// (0x00018313) aid_touch_ctrl_left

0x9e09,	// (0x0001831b) aid_touch_ctrl_right

0x3072,	// (0x00011584) compa_mode_pane

0x0684,	// (0x0000eb96) aid_cmod_rocker_key_size_cp

0x068e,	// (0x0000eba0) aid_cmode_itu_key_size_cp

0xa6c7,	// (0x00018bd9) compa_mode_pane_g1

0xa6cf,	// (0x00018be1) compa_mode_pane_g2

0xa6d7,	// (0x00018be9) compa_mode_pane_g3

0x0002,

0xfdd8,	// (0x0001e2ea) compa_mode_pane_g

0x0698,	// (0x0000ebaa) main_comp_mode_itu_pane_cp

0x06a0,	// (0x0000ebb2) main_comp_mode_rocker_pane_cp

0x06a8,	// (0x0000ebba) cell_cmode_itu_pane_cp_ParamLimits

0x06a8,	// (0x0000ebba) cell_cmode_itu_pane_cp

0x06bd,	// (0x0000ebcf) cell_cmode_rocker_pane_cp_ParamLimits

0x06bd,	// (0x0000ebcf) cell_cmode_rocker_pane_cp

0x3f2e,	// (0x00012440) bg_button_pane_cp06_cp_ParamLimits

0x3f2e,	// (0x00012440) bg_button_pane_cp06_cp

0x8354,	// (0x00016866) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x8354,	// (0x00016866) cell_cmode_rocker_pane_g1_cp

0x80e6,	// (0x000165f8) cell_cmode_rocker_pane_g2_cp

0x3072,	// (0x00011584) bg_button_pane_cp07_cp

0x06cf,	// (0x0000ebe1) cell_cmode_itu_pane_g1_cp

0x06d8,	// (0x0000ebea) cell_cmode_itu_pane_t1_cp

0x06d8,	// (0x0000ebea) cell_cmode_itu_pane_t2_cp

0xe4a0,	// (0x0001c9b2) settings_code_pane_cp2

0x3166,	// (0x00011678) bg_popup_window_pane_cp3_ParamLimits

0x35d7,	// (0x00011ae9) heading_pane_cp3_ParamLimits

0x35e3,	// (0x00011af5) listscroll_popup_graphic_pane_ParamLimits

0x2233,	// (0x00010745) fep_hwr_aid_pane_ParamLimits

0x26aa,	// (0x00010bbc) aid_touch_sctrl_top_ParamLimits

0x26c5,	// (0x00010bd7) sctrl_sk_top_pane_g1_ParamLimits

0x248a,	// (0x0001099c) sctrl_sk_top_pane_g2_ParamLimits

0xfd0e,	// (0x0001e220) sctrl_sk_top_pane_g_ParamLimits

0x26d2,	// (0x00010be4) sctrl_sk_top_pane_t1_ParamLimits

0x26aa,	// (0x00010bbc) aid_touch_sctrl_bottom_ParamLimits

0x26d2,	// (0x00010be4) sctrl_sk_bottom_pane_t1_ParamLimits

0x9d4a,	// (0x0001825c) aid_area_touch_clock

0xc026,	// (0x0001a538) aid_vkb2_area_top_pane_cell_ParamLimits

0xc026,	// (0x0001a538) aid_vkb2_area_top_pane_cell

0xc0d1,	// (0x0001a5e3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc0d1,	// (0x0001a5e3) aid_vkb2_area_bottom_pane_cell

0xa2ae,	// (0x000187c0) popup_char_count_window

0xa74e,	// (0x00018c60) popup_char_count_window_g1

0xa757,	// (0x00018c69) popup_char_count_window_g2

0xa760,	// (0x00018c72) popup_char_count_window_g3

0x0002,

0xfddf,	// (0x0001e2f1) popup_char_count_window_g

0xa769,	// (0x00018c7b) popup_char_count_window_t1

0x2781,	// (0x00010c93) popup_fep_char_preview_window_ParamLimits

0x2781,	// (0x00010c93) popup_fep_char_preview_window

0xc046,	// (0x0001a558) vkb2_top_candi_pane_ParamLimits

0xc046,	// (0x0001a558) vkb2_top_candi_pane

0x06e6,	// (0x0000ebf8) cell_vkb2_top_candi_pane_ParamLimits

0x06e6,	// (0x0000ebf8) cell_vkb2_top_candi_pane

0x2ced,	// (0x000111ff) bg_popup_fep_char_preview_window_ParamLimits

0x2ced,	// (0x000111ff) bg_popup_fep_char_preview_window

0x2cfb,	// (0x0001120d) popup_fep_char_preview_window_t1_ParamLimits

0x2cfb,	// (0x0001120d) popup_fep_char_preview_window_t1

0xa7c4,	// (0x00018cd6) bg_popup_fep_char_preview_window_g1

0xa7cc,	// (0x00018cde) bg_popup_fep_char_preview_window_g2

0xa7d4,	// (0x00018ce6) bg_popup_fep_char_preview_window_g3

0xa7dc,	// (0x00018cee) bg_popup_fep_char_preview_window_g4

0xa7e4,	// (0x00018cf6) bg_popup_fep_char_preview_window_g5

0x2d35,	// (0x00011247) bg_popup_fep_char_preview_window_g6

0xa7ec,	// (0x00018cfe) bg_popup_fep_char_preview_window_g7

0xa7f4,	// (0x00018d06) bg_popup_fep_char_preview_window_g8

0xa7fc,	// (0x00018d0e) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde6,	// (0x0001e2f8) bg_popup_fep_char_preview_window_g

0x248a,	// (0x0001099c) cell_vkb2_top_candi_pane_g1_ParamLimits

0x248a,	// (0x0001099c) cell_vkb2_top_candi_pane_g1

0x2498,	// (0x000109aa) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2498,	// (0x000109aa) cell_vkb2_top_candi_pane_g2

0xa704,	// (0x00018c16) cell_vkb2_top_candi_pane_g3_ParamLimits

0xa704,	// (0x00018c16) cell_vkb2_top_candi_pane_g3

0x2d3d,	// (0x0001124f) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2d3d,	// (0x0001124f) cell_vkb2_top_candi_pane_g4

0x89c5,	// (0x00016ed7) cell_vkb2_top_candi_pane_g5_ParamLimits

0x89c5,	// (0x00016ed7) cell_vkb2_top_candi_pane_g5

0x2d5e,	// (0x00011270) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2d5e,	// (0x00011270) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf9,	// (0x0001e30b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf9,	// (0x0001e30b) cell_vkb2_top_candi_pane_g

0x2d6c,	// (0x0001127e) cell_vkb2_top_candi_pane_t1

0x206f,	// (0x00010581) aid_size_touch_slider_mark_ParamLimits

0x206f,	// (0x00010581) aid_size_touch_slider_mark

0x0409,	// (0x0000e91b) grid_graphic2_catg_pane_ParamLimits

0x0409,	// (0x0000e91b) grid_graphic2_catg_pane

0x04c5,	// (0x0000e9d7) popup_grid_graphic2_window_t1_ParamLimits

0x04c5,	// (0x0000e9d7) popup_grid_graphic2_window_t1

0x04db,	// (0x0000e9ed) popup_grid_graphic2_window_t2_ParamLimits

0x04db,	// (0x0000e9ed) popup_grid_graphic2_window_t2

0x0001,

0xfdb4,	// (0x0001e2c6) popup_grid_graphic2_window_t_ParamLimits

0xfdb4,	// (0x0001e2c6) popup_grid_graphic2_window_t

0x3409,	// (0x0001191b) bg_button_pane_cp05_ParamLimits

0x0660,	// (0x0000eb72) cell_graphic2_control_pane_g1_ParamLimits

0x074c,	// (0x0000ec5e) cell_graphic2_catg_pane_ParamLimits

0x074c,	// (0x0000ec5e) cell_graphic2_catg_pane

0x3072,	// (0x00011584) bg_button_pane_cp12

0x075e,	// (0x0000ec70) cell_graphic2_catg_pane_g1

0x9d16,	// (0x00018228) cell_tb_ext_pane_t1_ParamLimits

0x2b23,	// (0x00011035) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2b23,	// (0x00011035) vkb2_top_cell_right_narrow_pane

0x2b3b,	// (0x0001104d) vkb2_top_cell_right_wide_pane_ParamLimits

0x2b3b,	// (0x0001104d) vkb2_top_cell_right_wide_pane

0x2225,	// (0x00010737) bg_vkb2_func_pane_ParamLimits

0x2225,	// (0x00010737) bg_vkb2_func_pane

0x2bac,	// (0x000110be) vkb2_top_cell_left_pane_g1_ParamLimits

0x2225,	// (0x00010737) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2225,	// (0x00010737) bg_vkb2_fuc_pane_cp03

0x2c0a,	// (0x0001111c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x55d4,	// (0x00013ae6) bg_vkb2_func_pane_g1

0x55dc,	// (0x00013aee) bg_vkb2_func_pane_g2

0x55ec,	// (0x00013afe) bg_vkb2_func_pane_g3

0x55e4,	// (0x00013af6) bg_vkb2_func_pane_g4

0x55f4,	// (0x00013b06) bg_vkb2_func_pane_g5

0x55fc,	// (0x00013b0e) bg_vkb2_func_pane_g6

0x5604,	// (0x00013b16) bg_vkb2_func_pane_g7

0x560c,	// (0x00013b1e) bg_vkb2_func_pane_g8

0x55cc,	// (0x00013ade) bg_vkb2_func_pane_g9

0x0008,

0xfe06,	// (0x0001e318) bg_vkb2_func_pane_g

0x2225,	// (0x00010737) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2225,	// (0x00010737) bg_vkb2_fuc_pane_cp01

0x2bac,	// (0x000110be) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2bac,	// (0x000110be) vkb2_top_cell_right_wide_pane_g1

0x2225,	// (0x00010737) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2225,	// (0x00010737) bg_vkb2_fuc_pane_cp02

0x2c0a,	// (0x0001111c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2c0a,	// (0x0001111c) vkb2_top_cell_right_narrow_pane_g1

0xee98,	// (0x0001d3aa) aid_touch_area_decrease_ParamLimits

0xee98,	// (0x0001d3aa) aid_touch_area_decrease

0xeed2,	// (0x0001d3e4) aid_touch_area_increase_ParamLimits

0xeed2,	// (0x0001d3e4) aid_touch_area_increase

0xeefa,	// (0x0001d40c) aid_touch_area_mute_ParamLimits

0xeefa,	// (0x0001d40c) aid_touch_area_mute

0xef2a,	// (0x0001d43c) aid_touch_area_slider_ParamLimits

0xef2a,	// (0x0001d43c) aid_touch_area_slider

0xef6a,	// (0x0001d47c) popup_slider_window_g4_ParamLimits

0xef6a,	// (0x0001d47c) popup_slider_window_g4

0xef92,	// (0x0001d4a4) popup_slider_window_g5_ParamLimits

0xef92,	// (0x0001d4a4) popup_slider_window_g5

0xefc6,	// (0x0001d4d8) popup_slider_window_g6_ParamLimits

0xefc6,	// (0x0001d4d8) popup_slider_window_g6

0x9af0,	// (0x00018002) popup_slider_window_t2_ParamLimits

0x9af0,	// (0x00018002) popup_slider_window_t2

0x0001,

0xfd02,	// (0x0001e214) popup_slider_window_t_ParamLimits

0xfd02,	// (0x0001e214) popup_slider_window_t

0xefe2,	// (0x0001d4f4) slider_pane_ParamLimits

0xefe2,	// (0x0001d4f4) slider_pane

0xa81f,	// (0x00018d31) slider_pane_g1_ParamLimits

0xa81f,	// (0x00018d31) slider_pane_g1

0xa833,	// (0x00018d45) slider_pane_g2_ParamLimits

0xa833,	// (0x00018d45) slider_pane_g2

0xa849,	// (0x00018d5b) slider_pane_g3_ParamLimits

0xa849,	// (0x00018d5b) slider_pane_g3

0x0003,

0xfe19,	// (0x0001e32b) slider_pane_g_ParamLimits

0xfe19,	// (0x0001e32b) slider_pane_g

0xbbb9,	// (0x0001a0cb) popup_tb_float_extension_window_ParamLimits

0xbbb9,	// (0x0001a0cb) popup_tb_float_extension_window

0xa875,	// (0x00018d87) aid_size_cell_tb_float_ext

0x3072,	// (0x00011584) bg_popup_sub_window_cp28

0xa881,	// (0x00018d93) grid_tb_float_ext_pane

0xa88b,	// (0x00018d9d) cell_tb_float_ext_pane_ParamLimits

0xa88b,	// (0x00018d9d) cell_tb_float_ext_pane

0xa8a5,	// (0x00018db7) cell_tb_float_ext_pane_g1

0xa8ae,	// (0x00018dc0) grid_highlight_pane_cp12

0xbe2f,	// (0x0001a341) cell_last_hwr_side_pane_ParamLimits

0xbe2f,	// (0x0001a341) cell_last_hwr_side_pane

0x80e6,	// (0x000165f8) cell_last_hwr_side_pane_g1

0xa8b7,	// (0x00018dc9) cell_last_hwr_side_pane_g2

0x0001,

0xfe22,	// (0x0001e334) cell_last_hwr_side_pane_g

0xc1ad,	// (0x0001a6bf) vkb2_area_bottom_space_btn_pane_ParamLimits

0xc1ad,	// (0x0001a6bf) vkb2_area_bottom_space_btn_pane

0x248a,	// (0x0001099c) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa363,	// (0x00018875) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2d6c,	// (0x0001127e) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2d8b,	// (0x0001129d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2d8b,	// (0x0001129d) vkb2_area_bottom_space_btn_pane_g1

0x2dc5,	// (0x000112d7) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2dc5,	// (0x000112d7) vkb2_area_bottom_space_btn_pane_g2

0x2dfb,	// (0x0001130d) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2dfb,	// (0x0001130d) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe27,	// (0x0001e339) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe27,	// (0x0001e339) vkb2_area_bottom_space_btn_pane_g

0x22e8,	// (0x000107fa) cel_fep_hwr_func_pane_ParamLimits

0x22e8,	// (0x000107fa) cel_fep_hwr_func_pane

0xbe04,	// (0x0001a316) cell_hwr_side_button_pane_ParamLimits

0xbe04,	// (0x0001a316) cell_hwr_side_button_pane

0x9d4a,	// (0x0001825c) aid_area_touch_clock_ParamLimits

0x3409,	// (0x0001191b) bg_uniindi_top_pane_ParamLimits

0x9d5c,	// (0x0001826e) uniindi_top_pane_g1_ParamLimits

0x9d72,	// (0x00018284) uniindi_top_pane_g2_ParamLimits

0x9d7e,	// (0x00018290) uniindi_top_pane_g3_ParamLimits

0x9d8f,	// (0x000182a1) uniindi_top_pane_g4_ParamLimits

0xfd3a,	// (0x0001e24c) uniindi_top_pane_g_ParamLimits

0x9d9c,	// (0x000182ae) uniindi_top_pane_t1_ParamLimits

0x3409,	// (0x0001191b) bg_vkb2_func_pane_cp01_ParamLimits

0x3409,	// (0x0001191b) bg_vkb2_func_pane_cp01

0xa8c0,	// (0x00018dd2) cel_fep_hwr_func_pane_g1_ParamLimits

0xa8c0,	// (0x00018dd2) cel_fep_hwr_func_pane_g1

0x3409,	// (0x0001191b) bg_vkb2_func_pane_cp02_ParamLimits

0x3409,	// (0x0001191b) bg_vkb2_func_pane_cp02

0xa8c0,	// (0x00018dd2) cell_hwr_side_button_pane_g1_ParamLimits

0xa8c0,	// (0x00018dd2) cell_hwr_side_button_pane_g1

0x5437,	// (0x00013949) status_pane_g4_ParamLimits

0x5437,	// (0x00013949) status_pane_g4

0x5451,	// (0x00013963) status_pane_t1

0x7e00,	// (0x00016312) form2_midp_gauge_slider_cont_pane

0x7e08,	// (0x0001631a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe76e,	// (0x0001cc80) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe782,	// (0x0001cc94) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafa,	// (0x0001e00c) form2_midp_gauge_slider_pane_t_ParamLimits

0x7e3e,	// (0x00016350) form2_midp_slider_pane_ParamLimits

0x2741,	// (0x00010c53) aid_size_cell_func_vkb2_ParamLimits

0x2741,	// (0x00010c53) aid_size_cell_func_vkb2

0xa861,	// (0x00018d73) slider_pane_g4_ParamLimits

0xa861,	// (0x00018d73) slider_pane_g4

0xc20e,	// (0x0001a720) form2_midp_gauge_slider_pane_t2_cp01

0xc21e,	// (0x0001a730) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xc21e,	// (0x0001a730) form2_midp_gauge_slider_pane_t3_cp01

0x2e70,	// (0x00011382) form2_midp_slider_pane_cp01

0x3072,	// (0x00011584) navi_smil_pane

0xc343,	// (0x0001a855) navi_smil_pane_g1

0xc34b,	// (0x0001a85d) navi_smil_pane_t1

0xc321,	// (0x0001a833) form2_midp_slider_pane_g1

0xc32a,	// (0x0001a83c) form2_midp_slider_pane_g2

0xc332,	// (0x0001a844) form2_midp_slider_pane_g3

0xc321,	// (0x0001a833) form2_midp_slider_pane_g4

0x0796,	// (0x0000eca8) form2_midp_slider_pane_g5

0x0004,

0xfe30,	// (0x0001e342) form2_midp_slider_pane_g

0x2e35,	// (0x00011347) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2e35,	// (0x00011347) vkb2_area_bottom_space_btn_pane_g4

0xddb0,	// (0x0001c2c2) lc0_navi_pane_ParamLimits

0xddb0,	// (0x0001c2c2) lc0_navi_pane

0xde1a,	// (0x0001c32c) lc0_stat_indi_pane_ParamLimits

0xde1a,	// (0x0001c32c) lc0_stat_indi_pane

0xde2f,	// (0x0001c341) ls0_title_pane_ParamLimits

0xde2f,	// (0x0001c341) ls0_title_pane

0x3f2e,	// (0x00012440) bg_popup_sub_pane_cp14_ParamLimits

0x9d31,	// (0x00018243) list_uniindi_pane_ParamLimits

0x9d3d,	// (0x0001824f) uniindi_top_pane_ParamLimits

0x9dd9,	// (0x000182eb) list_single_uniindi_pane_g1_ParamLimits

0x9dec,	// (0x000182fe) list_single_uniindi_pane_t1_ParamLimits

0xc23d,	// (0x0001a74f) lc0_stat_clock_pane_ParamLimits

0xc23d,	// (0x0001a74f) lc0_stat_clock_pane

0x07bb,	// (0x0000eccd) lc0_stat_indi_pane_g1_ParamLimits

0x07bb,	// (0x0000eccd) lc0_stat_indi_pane_g1

0x07ae,	// (0x0000ecc0) lc0_stat_indi_pane_g2_ParamLimits

0x07ae,	// (0x0000ecc0) lc0_stat_indi_pane_g2

0x0001,

0xfe3b,	// (0x0001e34d) lc0_stat_indi_pane_g_ParamLimits

0xfe3b,	// (0x0001e34d) lc0_stat_indi_pane_g

0xc24a,	// (0x0001a75c) lc0_uni_indicator_pane_ParamLimits

0xc24a,	// (0x0001a75c) lc0_uni_indicator_pane

0x07d5,	// (0x0000ece7) ls0_title_pane_g1_ParamLimits

0x07d5,	// (0x0000ece7) ls0_title_pane_g1

0x07e9,	// (0x0000ecfb) ls0_title_pane_t1_ParamLimits

0x07e9,	// (0x0000ecfb) ls0_title_pane_t1

0xc257,	// (0x0001a769) lc0_uni_indicator_pane_g1_ParamLimits

0xc257,	// (0x0001a769) lc0_uni_indicator_pane_g1

0xc359,	// (0x0001a86b) lc0_stat_clock_pane_t1

0x0ea4,	// (0x0000f3b6) main_ai5_pane

0xc367,	// (0x0001a879) ai5_sk_pane_ParamLimits

0xc367,	// (0x0001a879) ai5_sk_pane

0x0845,	// (0x0000ed57) cell_ai5_widget_pane_ParamLimits

0x0845,	// (0x0000ed57) cell_ai5_widget_pane

0xc374,	// (0x0001a886) aid_size_cell_widget_grid

0xc38a,	// (0x0001a89c) bg_ai5_widget_pane_ParamLimits

0xc38a,	// (0x0001a89c) bg_ai5_widget_pane

0xc3f4,	// (0x0001a906) cell_ai5_widget_pane_g2

0xc404,	// (0x0001a916) cell_ai5_widget_pane_g3

0xc423,	// (0x0001a935) cell_ai5_widget_pane_g4

0xc42f,	// (0x0001a941) cell_ai5_widget_pane_g5

0xc43b,	// (0x0001a94d) cell_ai5_widget_pane_g6

0xc447,	// (0x0001a959) cell_ai5_widget_pane_g7

0xc48f,	// (0x0001a9a1) cell_ai5_widget_pane_t1_ParamLimits

0xc48f,	// (0x0001a9a1) cell_ai5_widget_pane_t1

0xc4ac,	// (0x0001a9be) cell_ai5_widget_pane_t2_ParamLimits

0xc4ac,	// (0x0001a9be) cell_ai5_widget_pane_t2

0xc4c4,	// (0x0001a9d6) cell_ai5_widget_pane_t3_ParamLimits

0xc4c4,	// (0x0001a9d6) cell_ai5_widget_pane_t3

0xc4dc,	// (0x0001a9ee) cell_ai5_widget_pane_t4_ParamLimits

0xc4dc,	// (0x0001a9ee) cell_ai5_widget_pane_t4

0xc4f6,	// (0x0001aa08) cell_ai5_widget_pane_t5_ParamLimits

0xc4f6,	// (0x0001aa08) cell_ai5_widget_pane_t5

0xc515,	// (0x0001aa27) cell_ai5_widget_pane_t6_ParamLimits

0xc515,	// (0x0001aa27) cell_ai5_widget_pane_t6

0xc527,	// (0x0001aa39) cell_ai5_widget_pane_t7_ParamLimits

0xc527,	// (0x0001aa39) cell_ai5_widget_pane_t7

0xc540,	// (0x0001aa52) cell_ai5_widget_pane_t8_ParamLimits

0xc540,	// (0x0001aa52) cell_ai5_widget_pane_t8

0x0009,

0xfe55,	// (0x0001e367) cell_ai5_widget_pane_t_ParamLimits

0xfe55,	// (0x0001e367) cell_ai5_widget_pane_t

0xc58c,	// (0x0001aa9e) grid_ai5_widget_pane

0x3f2e,	// (0x00012440) highlight_cell_ai5_widget_pane_ParamLimits

0x3f2e,	// (0x00012440) highlight_cell_ai5_widget_pane

0x08af,	// (0x0000edc1) ai5_sk_left_pane

0x08b9,	// (0x0000edcb) ai5_sk_middle_pane

0x08c3,	// (0x0000edd5) ai5_sk_right_pane

0xc5a4,	// (0x0001aab6) bg_ai5_widget_pane_g1_ParamLimits

0xc5a4,	// (0x0001aab6) bg_ai5_widget_pane_g1

0xc5b0,	// (0x0001aac2) bg_ai5_widget_pane_g2_ParamLimits

0xc5b0,	// (0x0001aac2) bg_ai5_widget_pane_g2

0xc5bc,	// (0x0001aace) bg_ai5_widget_pane_g3_ParamLimits

0xc5bc,	// (0x0001aace) bg_ai5_widget_pane_g3

0xc5c8,	// (0x0001aada) bg_ai5_widget_pane_g4_ParamLimits

0xc5c8,	// (0x0001aada) bg_ai5_widget_pane_g4

0xc5d4,	// (0x0001aae6) bg_ai5_widget_pane_g5_ParamLimits

0xc5d4,	// (0x0001aae6) bg_ai5_widget_pane_g5

0xc5e0,	// (0x0001aaf2) bg_ai5_widget_pane_g6_ParamLimits

0xc5e0,	// (0x0001aaf2) bg_ai5_widget_pane_g6

0xc5ec,	// (0x0001aafe) bg_ai5_widget_pane_g7_ParamLimits

0xc5ec,	// (0x0001aafe) bg_ai5_widget_pane_g7

0xc5f8,	// (0x0001ab0a) bg_ai5_widget_pane_g8_ParamLimits

0xc5f8,	// (0x0001ab0a) bg_ai5_widget_pane_g8

0xc604,	// (0x0001ab16) bg_ai5_widget_pane_g9_ParamLimits

0xc604,	// (0x0001ab16) bg_ai5_widget_pane_g9

0x0008,

0xfe6a,	// (0x0001e37c) bg_ai5_widget_pane_g_ParamLimits

0xfe6a,	// (0x0001e37c) bg_ai5_widget_pane_g

0xc637,	// (0x0001ab49) cell_shortcut_ai5_widget_pane_ParamLimits

0xc637,	// (0x0001ab49) cell_shortcut_ai5_widget_pane

0x4d66,	// (0x00013278) bg_cell_shortcut_ai5_widget_pane

0xc648,	// (0x0001ab5a) cell_grid_ai5_widget_pane_g1

0xc651,	// (0x0001ab63) highlight_cell_shortcut_ai5_widget_pane

0x55d4,	// (0x00013ae6) ai5_sk_left_pane_g1

0xc659,	// (0x0001ab6b) ai5_sk_left_pane_g2

0xc661,	// (0x0001ab73) ai5_sk_left_pane_g3

0xc669,	// (0x0001ab7b) ai5_sk_left_pane_g4

0x0003,

0xfe7d,	// (0x0001e38f) ai5_sk_left_pane_g

0xc671,	// (0x0001ab83) ai5_sk_left_pane_t1

0x55dc,	// (0x00013aee) ai5_sk_right_pane_g1

0xc67f,	// (0x0001ab91) ai5_sk_right_pane_g2

0xc687,	// (0x0001ab99) ai5_sk_right_pane_g3

0xc68f,	// (0x0001aba1) ai5_sk_right_pane_g4

0x0003,

0xfe86,	// (0x0001e398) ai5_sk_right_pane_g

0xc697,	// (0x0001aba9) ai5_sk_right_pane_t1

0x55dc,	// (0x00013aee) ai5_sk_middle_pane_g1

0x55d4,	// (0x00013ae6) ai5_sk_middle_pane_g2

0x55f4,	// (0x00013b06) ai5_sk_middle_pane_g3

0xc687,	// (0x0001ab99) ai5_sk_middle_pane_g4

0xc661,	// (0x0001ab73) ai5_sk_middle_pane_g5

0xc6a5,	// (0x0001abb7) ai5_sk_middle_pane_g6

0x08cd,	// (0x0000eddf) ai5_sk_middle_pane_g7

0x0006,

0xfe8f,	// (0x0001e3a1) ai5_sk_middle_pane_g

0xdc9c,	// (0x0001c1ae) aid_touch_area_size_lc0_ParamLimits

0xdc9c,	// (0x0001c1ae) aid_touch_area_size_lc0

0x24b9,	// (0x000109cb) cell_hwr_candidate_pane_t1_ParamLimits

0x5114,	// (0x00013626) aid_touch_navi_pane

0xdf22,	// (0x0001c434) status_dt_navi_pane_ParamLimits

0xdf22,	// (0x0001c434) status_dt_navi_pane

0xdf3a,	// (0x0001c44c) status_dt_sta_pane_ParamLimits

0xdf3a,	// (0x0001c44c) status_dt_sta_pane

0x08d5,	// (0x0000ede7) dt_sta_controll_pane

0x08e2,	// (0x0000edf4) dt_sta_indi_pane

0x08ef,	// (0x0000ee01) dt_sta_title_pane

0x3409,	// (0x0001191b) bg_dt_sta_indi_pane_ParamLimits

0x3409,	// (0x0001191b) bg_dt_sta_indi_pane

0xc6ad,	// (0x0001abbf) dt_sta_battery_pane

0x0901,	// (0x0000ee13) dt_sta_indi_pane_g1

0x090a,	// (0x0000ee1c) dt_sta_indi_pane_g2

0x0913,	// (0x0000ee25) dt_sta_indi_pane_g3

0x0002,

0xfe9e,	// (0x0001e3b0) dt_sta_indi_pane_g

0x091c,	// (0x0000ee2e) dt_sta_signal_pane

0x3f2e,	// (0x00012440) bg_dt_sta_title_pane_ParamLimits

0x3f2e,	// (0x00012440) bg_dt_sta_title_pane

0xc6b5,	// (0x0001abc7) dt_sta_title_pane_g1

0x0925,	// (0x0000ee37) dt_sta_title_pane_t1_ParamLimits

0x0925,	// (0x0000ee37) dt_sta_title_pane_t1

0x3072,	// (0x00011584) bg_dt_sta_control_pane

0x093a,	// (0x0000ee4c) dt_sta_controll_pane_g1

0xc6bd,	// (0x0001abcf) bg_dt_sta_title_pane_g1

0xc6c6,	// (0x0001abd8) bg_dt_sta_title_pane_g2

0xc6cf,	// (0x0001abe1) bg_dt_sta_title_pane_g3

0x0002,

0xfea5,	// (0x0001e3b7) bg_dt_sta_title_pane_g

0x80e6,	// (0x000165f8) bg_dt_sta_indi_pane_g1

0xc6d8,	// (0x0001abea) dt_sta_signal_pane_g1

0xc6e0,	// (0x0001abf2) dt_sta_signal_pane_g2

0x0001,

0xfeac,	// (0x0001e3be) dt_sta_signal_pane_g

0xc6e8,	// (0x0001abfa) dt_sta_battery_pane_g1

0xc6f1,	// (0x0001ac03) dt_sta_battery_pane_t1

0x80e6,	// (0x000165f8) bg_dt_sta_control_pane_g1

0x47ee,	// (0x00012d00) fep_china_uni_eep_pane

0x47f6,	// (0x00012d08) fep_china_uni_entry_pane_ParamLimits

0x4806,	// (0x00012d18) popup_fep_china_uni_window_g1_ParamLimits

0x4816,	// (0x00012d28) popup_fep_china_uni_window_g2_ParamLimits

0x4816,	// (0x00012d28) popup_fep_china_uni_window_g2

0x0001,

0xf719,	// (0x0001dc2b) popup_fep_china_uni_window_g_ParamLimits

0xf719,	// (0x0001dc2b) popup_fep_china_uni_window_g

0xc700,	// (0x0001ac12) fep_china_uni_eep_pane_g1

0xc708,	// (0x0001ac1a) fep_china_uni_eep_pane_t1

0xc33a,	// (0x0001a84c) aid_touch_area_size_smil_player

0x5264,	// (0x00013776) lc0_clock_pane

0x5445,	// (0x00013957) status_pane_g5_ParamLimits

0x5445,	// (0x00013957) status_pane_g5

0xb747,	// (0x00019c59) popup_keymap_window

0x5403,	// (0x00013915) status_icon_pane

0xc404,	// (0x0001a916) cell_ai5_widget_pane_g3_ParamLimits

0xc423,	// (0x0001a935) cell_ai5_widget_pane_g4_ParamLimits

0xc42f,	// (0x0001a941) cell_ai5_widget_pane_g5_ParamLimits

0xc453,	// (0x0001a965) cell_ai5_widget_pane_g8_ParamLimits

0xc453,	// (0x0001a965) cell_ai5_widget_pane_g8

0xc467,	// (0x0001a979) cell_ai5_widget_pane_g9_ParamLimits

0xc467,	// (0x0001a979) cell_ai5_widget_pane_g9

0xc47b,	// (0x0001a98d) cell_ai5_widget_pane_g10_ParamLimits

0xc47b,	// (0x0001a98d) cell_ai5_widget_pane_g10

0xc717,	// (0x0001ac29) status_icon_pane_g1

0x3072,	// (0x00011584) bg_popup_sub_pane_cp13

0xc71f,	// (0x0001ac31) popup_keymap_window_t1

0xdc26,	// (0x0001c138) control_pane_g6_ParamLimits

0xdc26,	// (0x0001c138) control_pane_g6

0xdc33,	// (0x0001c145) control_pane_g7_ParamLimits

0xdc33,	// (0x0001c145) control_pane_g7

0xdc40,	// (0x0001c152) control_pane_g8_ParamLimits

0xdc40,	// (0x0001c152) control_pane_g8

0x08d5,	// (0x0000ede7) dt_sta_controll_pane_ParamLimits

0x08e2,	// (0x0000edf4) dt_sta_indi_pane_ParamLimits

0x08ef,	// (0x0000ee01) dt_sta_title_pane_ParamLimits

0x390f,	// (0x00011e21) aid_size_touch_scroll_bar_cale

0x0f7d,	// (0x0000f48f) popup_discreet_window_ParamLimits

0x0f7d,	// (0x0000f48f) popup_discreet_window

0xb3cb,	// (0x000198dd) popup_sk_window

0x5d3f,	// (0x00014251) bg_popup_sub_pane_cp28_ParamLimits

0x5d3f,	// (0x00014251) bg_popup_sub_pane_cp28

0xc72d,	// (0x0001ac3f) popup_discreet_window_g1_ParamLimits

0xc72d,	// (0x0001ac3f) popup_discreet_window_g1

0xc74d,	// (0x0001ac5f) popup_discreet_window_t1_ParamLimits

0xc74d,	// (0x0001ac5f) popup_discreet_window_t1

0xc76b,	// (0x0001ac7d) popup_discreet_window_t2_ParamLimits

0xc76b,	// (0x0001ac7d) popup_discreet_window_t2

0x0002,

0xfeb1,	// (0x0001e3c3) popup_discreet_window_t_ParamLimits

0xfeb1,	// (0x0001e3c3) popup_discreet_window_t

0x2ea8,	// (0x000113ba) popup_sk_window_g1

0x2eb2,	// (0x000113c4) popup_sk_window_g2

0x0001,

0xfeb8,	// (0x0001e3ca) popup_sk_window_g

0x2ebc,	// (0x000113ce) popup_sk_window_t1

0x2eca,	// (0x000113dc) popup_sk_window_t1_copy1

0xc3f4,	// (0x0001a906) cell_ai5_widget_pane_g2_ParamLimits

0xc552,	// (0x0001aa64) cell_ai5_widget_pane_t9_ParamLimits

0xc552,	// (0x0001aa64) cell_ai5_widget_pane_t9

0x3072,	// (0x00011584) main_fep_fshwr2_pane

0xc285,	// (0x0001a797) aid_fshwr2_btn_pane

0xc294,	// (0x0001a7a6) aid_fshwr2_syb_pane

0xc2a6,	// (0x0001a7b8) aid_fshwr2_txt_pane

0xc2b5,	// (0x0001a7c7) fshwr2_func_candi_pane

0xc2c6,	// (0x0001a7d8) fshwr2_hwr_syb_pane

0xc2e1,	// (0x0001a7f3) fshwr2_icf_pane

0x3072,	// (0x00011584) fshwr2_icf_bg_pane

0x09b7,	// (0x0000eec9) fshwr2_icf_pane_t1_ParamLimits

0x09b7,	// (0x0000eec9) fshwr2_icf_pane_t1

0x80e6,	// (0x000165f8) fshwr2_func_candi_pane_g1

0xc7bd,	// (0x0001accf) fshwr2_func_candi_row_pane_ParamLimits

0xc7bd,	// (0x0001accf) fshwr2_func_candi_row_pane

0x09d0,	// (0x0000eee2) cell_fshwr2_syb_pane_ParamLimits

0x09d0,	// (0x0000eee2) cell_fshwr2_syb_pane

0x8354,	// (0x00016866) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8354,	// (0x00016866) fshwr2_hwr_syb_pane_g1

0x3072,	// (0x00011584) bg_popup_call_pane_cp01

0xc7ce,	// (0x0001ace0) fshwr2_func_candi_cell_pane_ParamLimits

0xc7ce,	// (0x0001ace0) fshwr2_func_candi_cell_pane

0xc7fc,	// (0x0001ad0e) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc7fc,	// (0x0001ad0e) fshwr2_func_candi_cell_bg_pane

0xc816,	// (0x0001ad28) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc816,	// (0x0001ad28) fshwr2_func_candi_cell_pane_g1

0xc836,	// (0x0001ad48) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc836,	// (0x0001ad48) fshwr2_func_candi_cell_pane_t1

0x3072,	// (0x00011584) bg_button_pane_cp08

0x4d66,	// (0x00013278) cell_fshwr2_syb_bg_pane

0x09ea,	// (0x0000eefc) cell_fshwr2_syb_bg_pane_g1

0x09f2,	// (0x0000ef04) cell_fshwr2_syb_bg_pane_t1

0x3f2e,	// (0x00012440) main_tmo_pane

0xe2e9,	// (0x0001c7fb) uni_indicator_pane_g1_ParamLimits

0xe2fe,	// (0x0001c810) uni_indicator_pane_g2_ParamLimits

0x687f,	// (0x00014d91) uni_indicator_pane_g3_ParamLimits

0x6895,	// (0x00014da7) uni_indicator_pane_g4_ParamLimits

0x6895,	// (0x00014da7) uni_indicator_pane_g4

0x68a9,	// (0x00014dbb) uni_indicator_pane_g5_ParamLimits

0x68a9,	// (0x00014dbb) uni_indicator_pane_g5

0x68bd,	// (0x00014dcf) uni_indicator_pane_g6_ParamLimits

0x68bd,	// (0x00014dcf) uni_indicator_pane_g6

0xf918,	// (0x0001de2a) uni_indicator_pane_g_ParamLimits

0xee7a,	// (0x0001d38c) popup_tmo_note_window_ParamLimits

0xee7a,	// (0x0001d38c) popup_tmo_note_window

0x2723,	// (0x00010c35) fshwr2_bg_pane

0xc827,	// (0x0001ad39) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc827,	// (0x0001ad39) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebd,	// (0x0001e3cf) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebd,	// (0x0001e3cf) fshwr2_func_candi_cell_pane_g

0x80e6,	// (0x000165f8) bg_popup_window_pane_cp01

0xc849,	// (0x0001ad5b) bg_popup_window_pane_g1_cp01

0xc852,	// (0x0001ad64) bg_popup_window_pane_cp22_ParamLimits

0xc852,	// (0x0001ad64) bg_popup_window_pane_cp22

0xc860,	// (0x0001ad72) listscroll_tmo_link_pane_ParamLimits

0xc860,	// (0x0001ad72) listscroll_tmo_link_pane

0xc8a0,	// (0x0001adb2) popup_tmo_note_window_g1_ParamLimits

0xc8a0,	// (0x0001adb2) popup_tmo_note_window_g1

0xc8ad,	// (0x0001adbf) tmo_note_info_pane_ParamLimits

0xc8ad,	// (0x0001adbf) tmo_note_info_pane

0x0a01,	// (0x0000ef13) list_tmo_note_info_pane_g1_ParamLimits

0x0a01,	// (0x0000ef13) list_tmo_note_info_pane_g1

0xc8c7,	// (0x0001add9) list_tmo_note_info_pane_g2_ParamLimits

0xc8c7,	// (0x0001add9) list_tmo_note_info_pane_g2

0x0001,

0xfec2,	// (0x0001e3d4) list_tmo_note_info_pane_g_ParamLimits

0xfec2,	// (0x0001e3d4) list_tmo_note_info_pane_g

0xc8e3,	// (0x0001adf5) list_tmo_note_info_text_pane_ParamLimits

0xc8e3,	// (0x0001adf5) list_tmo_note_info_text_pane

0xc925,	// (0x0001ae37) list_tmo_link_pane

0xc932,	// (0x0001ae44) scroll_pane_cp20

0xc93f,	// (0x0001ae51) list_single_tmo_link_pane_ParamLimits

0xc93f,	// (0x0001ae51) list_single_tmo_link_pane

0xc94f,	// (0x0001ae61) list_single_tmo_link_pane_t1

0xc95d,	// (0x0001ae6f) list_tmo_note_info_text_pane_t1_ParamLimits

0xc95d,	// (0x0001ae6f) list_tmo_note_info_text_pane_t1

0xd896,	// (0x0001bda8) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd896,	// (0x0001bda8) aid_size_touch_scroll_bar_cp01

0xd7f2,	// (0x0001bd04) aid_size_touch_slider_marker

0xb3bb,	// (0x000198cd) popup_settings_window_ParamLimits

0xb3bb,	// (0x000198cd) popup_settings_window

0x50c4,	// (0x000135d6) popup_candi_list_indi_window

0x5114,	// (0x00013626) aid_touch_navi_pane_ParamLimits

0x267e,	// (0x00010b90) rs_clock_indi_pane

0x2687,	// (0x00010b99) sctrl_sk_bottom_pane_ParamLimits

0x2698,	// (0x00010baa) sctrl_sk_top_pane_ParamLimits

0x279b,	// (0x00010cad) popup_fep_tooltip_window

0xc374,	// (0x0001a886) aid_size_cell_widget_grid_ParamLimits

0xc3e8,	// (0x0001a8fa) cell_ai5_widget_pane_g1_ParamLimits

0xc3e8,	// (0x0001a8fa) cell_ai5_widget_pane_g1

0xc43b,	// (0x0001a94d) cell_ai5_widget_pane_g6_ParamLimits

0xc447,	// (0x0001a959) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe40,	// (0x0001e352) cell_ai5_widget_pane_g_ParamLimits

0xfe40,	// (0x0001e352) cell_ai5_widget_pane_g

0xc576,	// (0x0001aa88) cell_ai5_widget_pane_t10_ParamLimits

0xc576,	// (0x0001aa88) cell_ai5_widget_pane_t10

0xc58c,	// (0x0001aa9e) grid_ai5_widget_pane_ParamLimits

0xc610,	// (0x0001ab22) cell_contacts_ai5_widget_pane_ParamLimits

0xc610,	// (0x0001ab22) cell_contacts_ai5_widget_pane

0xc780,	// (0x0001ac92) popup_discreet_window_t3_ParamLimits

0xc780,	// (0x0001ac92) popup_discreet_window_t3

0x2f36,	// (0x00011448) popup_fshwr2_char_preview_window_ParamLimits

0x2f36,	// (0x00011448) popup_fshwr2_char_preview_window

0x0a18,	// (0x0000ef2a) tmo_note_info_pane_t1

0x0a2d,	// (0x0000ef3f) tmo_note_info_pane_t2

0x0a46,	// (0x0000ef58) tmo_note_info_pane_t3

0xc901,	// (0x0001ae13) tmo_note_info_pane_t4

0xc913,	// (0x0001ae25) tmo_note_info_pane_t5

0x0004,

0xfec7,	// (0x0001e3d9) tmo_note_info_pane_t

0xc925,	// (0x0001ae37) list_tmo_link_pane_ParamLimits

0xc932,	// (0x0001ae44) scroll_pane_cp20_ParamLimits

0x3072,	// (0x00011584) bg_popup_fep_char_preview_window_cp01

0xc976,	// (0x0001ae88) popup_fshwr2_char_preview_window_t1

0xc984,	// (0x0001ae96) popup_candi_list_indi_window_g1

0xc98d,	// (0x0001ae9f) bg_cell_contacts_ai5_widget_pane

0xc999,	// (0x0001aeab) cell_contacts_ai5_widget_pane_g1

0xc9ac,	// (0x0001aebe) cell_contacts_ai5_widget_pane_g2

0xc9b8,	// (0x0001aeca) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed2,	// (0x0001e3e4) cell_contacts_ai5_widget_pane_g

0xc9ca,	// (0x0001aedc) cell_contacts_ai5_widget_pane_t1

0x3f2e,	// (0x00012440) highlight_cell_shortcut_ai5_widget_pane_cp01

0xca44,	// (0x0001af56) settings_container_pane

0x4d66,	// (0x00013278) listscroll_set_pane_copy1

0x7535,	// (0x00015a47) scroll_pane_cp121_copy1

0xca50,	// (0x0001af62) set_content_pane_copy1

0xca58,	// (0x0001af6a) aid_height_set_list_copy1_ParamLimits

0xca58,	// (0x0001af6a) aid_height_set_list_copy1

0x6ac2,	// (0x00014fd4) aid_size_parent_copy1_ParamLimits

0x6ac2,	// (0x00014fd4) aid_size_parent_copy1

0xca64,	// (0x0001af76) button_value_adjust_pane_cp6_copy1_ParamLimits

0xca64,	// (0x0001af76) button_value_adjust_pane_cp6_copy1

0x50aa,	// (0x000135bc) list_highlight_pane_cp2_copy1_ParamLimits

0x50aa,	// (0x000135bc) list_highlight_pane_cp2_copy1

0xca78,	// (0x0001af8a) list_set_pane_copy1_ParamLimits

0xca78,	// (0x0001af8a) list_set_pane_copy1

0xc9df,	// (0x0001aef1) main_pane_set_t1_copy1_ParamLimits

0xc9df,	// (0x0001aef1) main_pane_set_t1_copy1

0xca19,	// (0x0001af2b) main_pane_set_t2_copy1_ParamLimits

0xca19,	// (0x0001af2b) main_pane_set_t2_copy1

0xcb25,	// (0x0001b037) main_pane_set_t3_copy1

0xcb33,	// (0x0001b045) main_pane_set_t4_copy1

0xca38,	// (0x0001af4a) set_content_pane_g1_copy1_ParamLimits

0xca38,	// (0x0001af4a) set_content_pane_g1_copy1

0xcb41,	// (0x0001b053) setting_code_pane_copy1

0xcb49,	// (0x0001b05b) setting_slider_graphic_pane_copy1

0xcb49,	// (0x0001b05b) setting_slider_pane_copy1

0xcb49,	// (0x0001b05b) setting_text_pane_copy1

0xcb49,	// (0x0001b05b) setting_volume_pane_copy1

0xcb41,	// (0x0001b053) settings_code_pane_cp2_copy1

0xcb51,	// (0x0001b063) settings_code_pane_cp_copy1_ParamLimits

0xcb51,	// (0x0001b063) settings_code_pane_cp_copy1

0x2f4a,	// (0x0001145c) volume_set_pane_copy1

0xcb65,	// (0x0001b077) volume_set_pane_g10_copy1

0xcb6d,	// (0x0001b07f) volume_set_pane_g1_copy1

0xcb75,	// (0x0001b087) volume_set_pane_g2_copy1

0xcb7d,	// (0x0001b08f) volume_set_pane_g3_copy1

0xcb85,	// (0x0001b097) volume_set_pane_g4_copy1

0xcb8d,	// (0x0001b09f) volume_set_pane_g5_copy1

0xcb95,	// (0x0001b0a7) volume_set_pane_g6_copy1

0xcb9d,	// (0x0001b0af) volume_set_pane_g7_copy1

0xcba5,	// (0x0001b0b7) volume_set_pane_g8_copy1

0xcbad,	// (0x0001b0bf) volume_set_pane_g9_copy1

0x3166,	// (0x00011678) bg_set_opt_pane_cp_copy1_ParamLimits

0x3166,	// (0x00011678) bg_set_opt_pane_cp_copy1

0x2f52,	// (0x00011464) setting_slider_pane_t1_copy1_ParamLimits

0x2f52,	// (0x00011464) setting_slider_pane_t1_copy1

0x2f70,	// (0x00011482) setting_slider_pane_t2_copy1_ParamLimits

0x2f70,	// (0x00011482) setting_slider_pane_t2_copy1

0x2f8a,	// (0x0001149c) setting_slider_pane_t3_copy1_ParamLimits

0x2f8a,	// (0x0001149c) setting_slider_pane_t3_copy1

0x2fa2,	// (0x000114b4) slider_set_pane_copy1_ParamLimits

0x2fa2,	// (0x000114b4) slider_set_pane_copy1

0x405b,	// (0x0001256d) set_opt_bg_pane_g1_copy2

0x4063,	// (0x00012575) set_opt_bg_pane_g2_copy2

0xcbb5,	// (0x0001b0c7) set_opt_bg_pane_g3_copy2

0x4073,	// (0x00012585) set_opt_bg_pane_g4_copy2

0x407b,	// (0x0001258d) set_opt_bg_pane_g5_copy2

0x4083,	// (0x00012595) set_opt_bg_pane_g6_copy2

0xcbbf,	// (0x0001b0d1) set_opt_bg_pane_g7_copy2

0xcbc7,	// (0x0001b0d9) set_opt_bg_pane_g8_copy2

0xcbd1,	// (0x0001b0e3) set_opt_bg_pane_g9_copy2

0xcbdb,	// (0x0001b0ed) aid_size_touch_slider_mark_copy1_ParamLimits

0xcbdb,	// (0x0001b0ed) aid_size_touch_slider_mark_copy1

0xcbef,	// (0x0001b101) slider_set_pane_g1_copy1

0xcbf8,	// (0x0001b10a) slider_set_pane_g2_copy1

0x7139,	// (0x0001564b) slider_set_pane_g3_copy1_ParamLimits

0x7139,	// (0x0001564b) slider_set_pane_g3_copy1

0x714d,	// (0x0001565f) slider_set_pane_g4_copy1_ParamLimits

0x714d,	// (0x0001565f) slider_set_pane_g4_copy1

0x7165,	// (0x00015677) slider_set_pane_g5_copy1_ParamLimits

0x7165,	// (0x00015677) slider_set_pane_g5_copy1

0x7139,	// (0x0001564b) slider_set_pane_g6_copy1_ParamLimits

0x7139,	// (0x0001564b) slider_set_pane_g6_copy1

0xcc00,	// (0x0001b112) slider_set_pane_g7_copy1_ParamLimits

0xcc00,	// (0x0001b112) slider_set_pane_g7_copy1

0x3086,	// (0x00011598) bg_set_opt_pane_cp2_copy1

0xcc16,	// (0x0001b128) setting_slider_graphic_pane_g1_copy1

0xcc1f,	// (0x0001b131) setting_slider_graphic_pane_t1_copy1

0xcc2f,	// (0x0001b141) setting_slider_graphic_pane_t2_copy1

0xcc3f,	// (0x0001b151) slider_set_pane_cp_copy1

0xcc4f,	// (0x0001b161) input_focus_pane_cp1_copy1

0xcc58,	// (0x0001b16a) list_set_text_pane_copy1

0xcc60,	// (0x0001b172) setting_text_pane_g1_copy1

0xcc69,	// (0x0001b17b) set_text_pane_t1_copy1

0xcc4f,	// (0x0001b161) input_focus_pane_cp2_copy1

0xcc60,	// (0x0001b172) setting_code_pane_g1_copy1

0xcc84,	// (0x0001b196) setting_code_pane_t1_copy1

0x736a,	// (0x0001587c) list_set_graphic_pane_copy1

0x3086,	// (0x00011598) bg_set_opt_pane_cp4_copy1

0x4a7c,	// (0x00012f8e) list_set_graphic_pane_g1_copy1_ParamLimits

0x4a7c,	// (0x00012f8e) list_set_graphic_pane_g1_copy1

0xcc92,	// (0x0001b1a4) list_set_graphic_pane_g2_copy1

0x4a94,	// (0x00012fa6) list_set_graphic_pane_t1_copy1_ParamLimits

0x4a94,	// (0x00012fa6) list_set_graphic_pane_t1_copy1

0x80e6,	// (0x000165f8) rs_clock_indi_pane_g1

0xcc9a,	// (0x0001b1ac) rs_clock_indi_pane_t1

0xcca8,	// (0x0001b1ba) rs_indi_pane

0xccb0,	// (0x0001b1c2) rs_indi_pane_g1

0xccb9,	// (0x0001b1cb) rs_indi_pane_g2

0xccc2,	// (0x0001b1d4) rs_indi_pane_g3

0x0002,

0xfed9,	// (0x0001e3eb) rs_indi_pane_g

0x4d66,	// (0x00013278) bg_popup_preview_window_pane_cp03

0xcccb,	// (0x0001b1dd) popup_fep_tooltip_window_t1

0x8f72,	// (0x00017484) popup_note2_window_g2_ParamLimits

0x8f72,	// (0x00017484) popup_note2_window_g2

0x0001,

0xfc72,	// (0x0001e184) popup_note2_window_g_ParamLimits

0xfc72,	// (0x0001e184) popup_note2_window_g

0x9556,	// (0x00017a68) bg_popup_sub_pane_cp11_ParamLimits

0x9563,	// (0x00017a75) cell_ai3_links_pane_g1_ParamLimits

0x957a,	// (0x00017a8c) cell_ai3_links_pane_t1

0xcc69,	// (0x0001b17b) set_text_pane_t1_copy1_ParamLimits

0xdb5b,	// (0x0001c06d) cell_graphic_popup_pane_cp2_ParamLimits

0xdb5b,	// (0x0001c06d) cell_graphic_popup_pane_cp2

0x0a5b,	// (0x0000ef6d) cell_graphic_popup_pane_g1_cp2

0x3722,	// (0x00011c34) cell_graphic_popup_pane_g2_cp2

0xccd9,	// (0x0001b1eb) cell_graphic_popup_pane_g3_cp2

0xcce1,	// (0x0001b1f3) cell_graphic_popup_pane_t2_cp2

0x3733,	// (0x00011c45) grid_highlight_pane_cp3_cp2

0x4429,	// (0x0001293b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3f2e,	// (0x00012440) main_tmo_pane_ParamLimits

0xee6e,	// (0x0001d380) popup_tmo_big_image_note_window

0xc3d8,	// (0x0001a8ea) cell_ai5_widget_list_pane

0xc3e0,	// (0x0001a8f2) cell_ai5_widget_lrg_icon_pane

0x0a18,	// (0x0000ef2a) tmo_note_info_pane_t1_ParamLimits

0x0a2d,	// (0x0000ef3f) tmo_note_info_pane_t2_ParamLimits

0x0a46,	// (0x0000ef58) tmo_note_info_pane_t3_ParamLimits

0xc901,	// (0x0001ae13) tmo_note_info_pane_t4_ParamLimits

0xc913,	// (0x0001ae25) tmo_note_info_pane_t5_ParamLimits

0xfec7,	// (0x0001e3d9) tmo_note_info_pane_t_ParamLimits

0xca44,	// (0x0001af56) settings_container_pane_ParamLimits

0xcc47,	// (0x0001b159) indicator_popup_pane_cp5

0xcc47,	// (0x0001b159) indicator_popup_pane_cp6

0x736a,	// (0x0001587c) list_set_graphic_pane_copy1_ParamLimits

0x3072,	// (0x00011584) bg_popup_window_pane_cp23

0xccef,	// (0x0001b201) popup_tmo_big_image_note_window_g1

0xccf8,	// (0x0001b20a) popup_tmo_big_image_note_window_t1

0xcd08,	// (0x0001b21a) popup_tmo_big_image_note_window_t2

0xcd18,	// (0x0001b22a) popup_tmo_big_image_note_window_t3

0x0002,

0xfee0,	// (0x0001e3f2) popup_tmo_big_image_note_window_t

0xcd28,	// (0x0001b23a) cell_ai5_widget_lrg_icon_pane_g1

0xcd30,	// (0x0001b242) cell_ai5_widget_lrg_icon_pane_t1

0xcd3e,	// (0x0001b250) cell_ai5_widget_list_row_pane_ParamLimits

0xcd3e,	// (0x0001b250) cell_ai5_widget_list_row_pane

0xcd56,	// (0x0001b268) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xcd56,	// (0x0001b268) cell_ai5_widget_list_row_pane_g1

0xcd63,	// (0x0001b275) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xcd63,	// (0x0001b275) cell_ai5_widget_list_row_pane_t1

0xcd7b,	// (0x0001b28d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xcd7b,	// (0x0001b28d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee7,	// (0x0001e3f9) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee7,	// (0x0001e3f9) cell_ai5_widget_list_row_pane_t

0x0ea4,	// (0x0000f3b6) main_fep_vtchi_ss_pane

0x2fc7,	// (0x000114d9) popup_fep_char_pre_window

0x2fcf,	// (0x000114e1) popup_fep_ituss_window

0x2ff0,	// (0x00011502) popup_fep_vkbss_window

0xcda3,	// (0x0001b2b5) grid_vkbss_keypad_pane_ParamLimits

0xcda3,	// (0x0001b2b5) grid_vkbss_keypad_pane

0xcdb3,	// (0x0001b2c5) ituss_keypad_pane

0x301b,	// (0x0001152d) aid_vkbss_key_offset_ParamLimits

0x301b,	// (0x0001152d) aid_vkbss_key_offset

0x3027,	// (0x00011539) cell_vkbss_key_pane_ParamLimits

0x3027,	// (0x00011539) cell_vkbss_key_pane

0x541f,	// (0x00013931) bg_cell_vkbss_key_g1_ParamLimits

0x541f,	// (0x00013931) bg_cell_vkbss_key_g1

0xcdc3,	// (0x0001b2d5) cell_vkbss_key_3p_pane_ParamLimits

0xcdc3,	// (0x0001b2d5) cell_vkbss_key_3p_pane

0xcddd,	// (0x0001b2ef) cell_vkbss_key_g1_ParamLimits

0xcddd,	// (0x0001b2ef) cell_vkbss_key_g1

0xcdf7,	// (0x0001b309) cell_vkbss_key_t1_ParamLimits

0xcdf7,	// (0x0001b309) cell_vkbss_key_t1

0x303d,	// (0x0001154f) cell_ituss_key_pane_ParamLimits

0x303d,	// (0x0001154f) cell_ituss_key_pane

0xce22,	// (0x0001b334) bg_cell_ituss_key_g1_ParamLimits

0xce22,	// (0x0001b334) bg_cell_ituss_key_g1

0xce2e,	// (0x0001b340) cell_ituss_key_pane_g1_ParamLimits

0xce2e,	// (0x0001b340) cell_ituss_key_pane_g1

0xce42,	// (0x0001b354) cell_ituss_key_pane_g2_ParamLimits

0xce42,	// (0x0001b354) cell_ituss_key_pane_g2

0x0001,

0xfeee,	// (0x0001e400) cell_ituss_key_pane_g_ParamLimits

0xfeee,	// (0x0001e400) cell_ituss_key_pane_g

0xce70,	// (0x0001b382) cell_ituss_key_t1_ParamLimits

0xce70,	// (0x0001b382) cell_ituss_key_t1

0xcea6,	// (0x0001b3b8) cell_ituss_key_t2_ParamLimits

0xcea6,	// (0x0001b3b8) cell_ituss_key_t2

0xced7,	// (0x0001b3e9) cell_ituss_key_t3_ParamLimits

0xced7,	// (0x0001b3e9) cell_ituss_key_t3

0xcf11,	// (0x0001b423) cell_ituss_key_t4_ParamLimits

0xcf11,	// (0x0001b423) cell_ituss_key_t4

0x0003,

0xfef3,	// (0x0001e405) cell_ituss_key_t_ParamLimits

0xfef3,	// (0x0001e405) cell_ituss_key_t

0xcf4b,	// (0x0001b45d) cell_vkbss_key_3p_pane_g1

0xcf53,	// (0x0001b465) cell_vkbss_key_3p_pane_g2

0xcf5b,	// (0x0001b46d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefc,	// (0x0001e40e) cell_vkbss_key_3p_pane_g

0x3072,	// (0x00011584) bg_popup_fep_char_preview_window_cp02

0xcf63,	// (0x0001b475) popup_fep_char_pre_window_t1

0x08a5,	// (0x0000edb7) main_ai5_sk_pane

0xc98d,	// (0x0001ae9f) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xc999,	// (0x0001aeab) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9ac,	// (0x0001aebe) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xc9b8,	// (0x0001aeca) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed2,	// (0x0001e3e4) cell_contacts_ai5_widget_pane_g_ParamLimits

0xc9ca,	// (0x0001aedc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3f2e,	// (0x00012440) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0a63,	// (0x0000ef75) main_ai5_sk_pane_g1

0x5b7d,	// (0x0001408f) popup_query_code_window_g1

0x2fe5,	// (0x000114f7) popup_fep_vkb_icf_pane

0x2ff9,	// (0x0001150b) popup_fep_vtchi_icf_pane

0x3f2e,	// (0x00012440) bg_icf_pane

0xcf72,	// (0x0001b484) list_vkb_icf_pane

0x3f2e,	// (0x00012440) bg_icf_pane_cp01

0xcf7e,	// (0x0001b490) vtchi_icf_list_pane

0xcf8f,	// (0x0001b4a1) list_vkb_icf_pane_t1_ParamLimits

0xcf8f,	// (0x0001b4a1) list_vkb_icf_pane_t1

0xcfa8,	// (0x0001b4ba) vtchi_icf_list_pane_t1_ParamLimits

0xcfa8,	// (0x0001b4ba) vtchi_icf_list_pane_t1

0x2fcf,	// (0x000114e1) popup_fep_ituss_window_ParamLimits

0x2ff9,	// (0x0001150b) popup_fep_vtchi_icf_pane_ParamLimits

0xcdb3,	// (0x0001b2c5) ituss_keypad_pane_ParamLimits

0x300f,	// (0x00011521) ituss_sks_pane

0x3f2e,	// (0x00012440) bg_icf_pane_ParamLimits

0x2fb8,	// (0x000114ca) icf_edit_indi_pane_ParamLimits

0x2fb8,	// (0x000114ca) icf_edit_indi_pane

0xcf72,	// (0x0001b484) list_vkb_icf_pane_ParamLimits

0x3f2e,	// (0x00012440) bg_icf_pane_cp01_ParamLimits

0x2fb8,	// (0x000114ca) icf_edit_indi_pane_cp01_ParamLimits

0x2fb8,	// (0x000114ca) icf_edit_indi_pane_cp01

0xcf86,	// (0x0001b498) vtchi_query_pane

0x8354,	// (0x00016866) icf_edit_indi_pane_g1_ParamLimits

0x8354,	// (0x00016866) icf_edit_indi_pane_g1

0xd035,	// (0x0001b547) icf_edit_indi_pane_g2_ParamLimits

0xd035,	// (0x0001b547) icf_edit_indi_pane_g2

0x0001,

0xff14,	// (0x0001e426) icf_edit_indi_pane_g_ParamLimits

0xff14,	// (0x0001e426) icf_edit_indi_pane_g

0xd044,	// (0x0001b556) icf_edit_indi_pane_t1

0xcfcb,	// (0x0001b4dd) bg_input_focus_pane_cp042

0x3906,	// (0x00011e18) vtchi_button_pane

0xcfd4,	// (0x0001b4e6) vtchi_query_pane_t1

0xcfe2,	// (0x0001b4f4) vtchi_query_pane_t2

0xcff0,	// (0x0001b502) vtchi_query_pane_t3

0x0002,

0xff03,	// (0x0001e415) vtchi_query_pane_t

0x3072,	// (0x00011584) bg_button_pane_cp13

0xcffe,	// (0x0001b510) vtchi_button_pane_g1

0xd006,	// (0x0001b518) ituss_sks_pane_g1

0xd011,	// (0x0001b523) ituss_sks_pane_g2

0x0001,

0xff0a,	// (0x0001e41c) ituss_sks_pane_g

0xd019,	// (0x0001b52b) ituss_sks_pane_t1

0xd027,	// (0x0001b539) ituss_sks_pane_t2

0x0001,

0xff0f,	// (0x0001e421) ituss_sks_pane_t

0x7ae6,	// (0x00015ff8) indicator_nsta_pane_cp_g1

0x7aef,	// (0x00016001) indicator_nsta_pane_cp_g2

0x7af7,	// (0x00016009) indicator_nsta_pane_cp_g3

0x7aff,	// (0x00016011) indicator_nsta_pane_cp_g4

0x7b07,	// (0x00016019) indicator_nsta_pane_cp_g5

0x7b07,	// (0x00016019) indicator_nsta_pane_cp_g6

0x0005,

0xfab0,	// (0x0001dfc2) indicator_nsta_pane_cp_g

0x0643,	// (0x0000eb55) cell_graphic2_pane_t2_ParamLimits

0x0643,	// (0x0000eb55) cell_graphic2_pane_t2

0x0001,

0xfdc9,	// (0x0001e2db) cell_graphic2_pane_t_ParamLimits

0xfdc9,	// (0x0001e2db) cell_graphic2_pane_t

0x0676,	// (0x0000eb88) cell_graphic2_control_pane_t1

0xda57,	// (0x0001bf69) signal_pane_g3_ParamLimits

0xda57,	// (0x0001bf69) signal_pane_g3

0xda6b,	// (0x0001bf7d) signal_pane_g4_ParamLimits

0xda6b,	// (0x0001bf7d) signal_pane_g4

0xcd8d,	// (0x0001b29f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xcd8d,	// (0x0001b29f) cell_ai5_widget_list_row_pane_t3

0xce5e,	// (0x0001b370) cell_ituss_key_pane_t1_ParamLimits

0xce5e,	// (0x0001b370) cell_ituss_key_pane_t1

0x5776,	// (0x00013c88) form_field_data_wide_pane_vc_t2_ParamLimits

0x5776,	// (0x00013c88) form_field_data_wide_pane_vc_t2

0x578a,	// (0x00013c9c) form_field_data_wide_pane_vc_t3_ParamLimits

0x578a,	// (0x00013c9c) form_field_data_wide_pane_vc_t3

0x0002,

0xf800,	// (0x0001dd12) form_field_data_wide_pane_vc_t_ParamLimits

0xf800,	// (0x0001dd12) form_field_data_wide_pane_vc_t

0x77a2,	// (0x00015cb4) form_field_slider_wide_pane_vc_t3_ParamLimits

0x77a2,	// (0x00015cb4) form_field_slider_wide_pane_vc_t3

0x787c,	// (0x00015d8e) form_field_popup_wide_pane_vc_t2_ParamLimits

0x787c,	// (0x00015d8e) form_field_popup_wide_pane_vc_t2

0x7893,	// (0x00015da5) form_field_popup_wide_pane_vc_t3_ParamLimits

0x7893,	// (0x00015da5) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9f,	// (0x0001dfb1) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001dfb1) form_field_popup_wide_pane_vc_t

0xc285,	// (0x0001a797) aid_fshwr2_btn_pane_ParamLimits

0xc294,	// (0x0001a7a6) aid_fshwr2_syb_pane_ParamLimits

0xc2a6,	// (0x0001a7b8) aid_fshwr2_txt_pane_ParamLimits

0x2723,	// (0x00010c35) fshwr2_bg_pane_ParamLimits

0xc2b5,	// (0x0001a7c7) fshwr2_func_candi_pane_ParamLimits

0xc2c6,	// (0x0001a7d8) fshwr2_hwr_syb_pane_ParamLimits

0xc2e1,	// (0x0001a7f3) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Normal

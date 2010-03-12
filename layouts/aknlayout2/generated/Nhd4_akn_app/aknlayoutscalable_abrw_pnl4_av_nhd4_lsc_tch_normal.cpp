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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000e73c };

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
0xcf8a,	// (0x0001b6c6) Screen

0xcf96,	// (0x0001b6d2) application_window_ParamLimits

0xcf96,	// (0x0001b6d2) application_window

0x2e3a,	// (0x00011576) screen_g1

0xb09f,	// (0x000197db) area_bottom_pane_ParamLimits

0xb09f,	// (0x000197db) area_bottom_pane

0x0ca4,	// (0x0000f3e0) area_top_pane_ParamLimits

0x0ca4,	// (0x0000f3e0) area_top_pane

0x0d42,	// (0x0000f47e) main_pane_ParamLimits

0x0d42,	// (0x0000f47e) main_pane

0x2e44,	// (0x00011580) misc_graphics

0xdccc,	// (0x0001c408) battery_pane_ParamLimits

0xdccc,	// (0x0001c408) battery_pane

0x5d51,	// (0x0001448d) bg_status_flat_pane_g8

0x5d59,	// (0x00014495) bg_status_flat_pane_g9

0x5019,	// (0x00013755) context_pane_ParamLimits

0x5019,	// (0x00013755) context_pane

0xde37,	// (0x0001c573) navi_pane_ParamLimits

0xde37,	// (0x0001c573) navi_pane

0xdeaf,	// (0x0001c5eb) signal_pane_ParamLimits

0xdeaf,	// (0x0001c5eb) signal_pane

0x0008,

0xf875,	// (0x0001dfb1) bg_status_flat_pane_g

0xdf3f,	// (0x0001c67b) status_pane_g1_ParamLimits

0xdf3f,	// (0x0001c67b) status_pane_g1

0xdf55,	// (0x0001c691) status_pane_g2_ParamLimits

0xdf55,	// (0x0001c691) status_pane_g2

0x523a,	// (0x00013976) status_pane_g3_ParamLimits

0x523a,	// (0x00013976) status_pane_g3

0x0004,

0xf7a1,	// (0x0001dedd) status_pane_g_ParamLimits

0xf7a1,	// (0x0001dedd) status_pane_g

0xdf61,	// (0x0001c69d) title_pane_ParamLimits

0xdf61,	// (0x0001c69d) title_pane

0xdfc4,	// (0x0001c700) uni_indicator_pane_ParamLimits

0xdfc4,	// (0x0001c700) uni_indicator_pane

0x4e6b,	// (0x000135a7) bg_list_pane_ParamLimits

0x4e6b,	// (0x000135a7) bg_list_pane

0xdc33,	// (0x0001c36f) find_pane

0xdc3b,	// (0x0001c377) listscroll_app_pane_ParamLimits

0xdc3b,	// (0x0001c377) listscroll_app_pane

0x4e9f,	// (0x000135db) listscroll_form_pane

0xb38e,	// (0x00019aca) listscroll_gen_pane_ParamLimits

0xb38e,	// (0x00019aca) listscroll_gen_pane

0x4e9f,	// (0x000135db) listscroll_set_pane

0x68f3,	// (0x0001502f) main_idle_act_pane

0x4b75,	// (0x000132b1) main_idle_trad_pane

0x4b75,	// (0x000132b1) main_list_empty_pane

0x4eb9,	// (0x000135f5) main_midp_pane

0x4ec5,	// (0x00013601) main_pane_g1_ParamLimits

0x4ec5,	// (0x00013601) main_pane_g1

0xb3a2,	// (0x00019ade) popup_ai_message_window_ParamLimits

0xb3a2,	// (0x00019ade) popup_ai_message_window

0xb433,	// (0x00019b6f) popup_fep_china_uni_window_ParamLimits

0xb433,	// (0x00019b6f) popup_fep_china_uni_window

0x170d,	// (0x0000fe49) popup_fep_japan_candidate_window_ParamLimits

0x170d,	// (0x0000fe49) popup_fep_japan_candidate_window

0x172b,	// (0x0000fe67) popup_fep_japan_predictive_window_ParamLimits

0x172b,	// (0x0000fe67) popup_fep_japan_predictive_window

0xb48d,	// (0x00019bc9) popup_find_window

0xb4aa,	// (0x00019be6) popup_grid_graphic_window_ParamLimits

0xb4aa,	// (0x00019be6) popup_grid_graphic_window

0x178e,	// (0x0000feca) popup_large_graphic_colour_window

0xb53c,	// (0x00019c78) popup_menu_window_ParamLimits

0xb53c,	// (0x00019c78) popup_menu_window

0xb708,	// (0x00019e44) popup_note_image_window

0xb6ce,	// (0x00019e0a) popup_note_wait_window_ParamLimits

0xb6ce,	// (0x00019e0a) popup_note_wait_window

0xb720,	// (0x00019e5c) popup_note_window_ParamLimits

0xb720,	// (0x00019e5c) popup_note_window

0xb7c6,	// (0x00019f02) popup_query_code_window_ParamLimits

0xb7c6,	// (0x00019f02) popup_query_code_window

0x19d8,	// (0x00010114) popup_query_data_code_window_ParamLimits

0x19d8,	// (0x00010114) popup_query_data_code_window

0xb800,	// (0x00019f3c) popup_query_data_window_ParamLimits

0xb800,	// (0x00019f3c) popup_query_data_window

0xb876,	// (0x00019fb2) popup_query_sat_info_window_ParamLimits

0xb876,	// (0x00019fb2) popup_query_sat_info_window

0xb90d,	// (0x0001a049) popup_snote_single_graphic_window_ParamLimits

0xb90d,	// (0x0001a049) popup_snote_single_graphic_window

0xb90d,	// (0x0001a049) popup_snote_single_text_window_ParamLimits

0xb90d,	// (0x0001a049) popup_snote_single_text_window

0x1a55,	// (0x00010191) popup_sub_window_general

0x1b83,	// (0x000102bf) popup_window_general_ParamLimits

0x1b83,	// (0x000102bf) popup_window_general

0x4edb,	// (0x00013617) power_save_pane

0xb221,	// (0x0001995d) control_pane_g1_ParamLimits

0xb221,	// (0x0001995d) control_pane_g1

0xb24a,	// (0x00019986) control_pane_g2_ParamLimits

0xb24a,	// (0x00019986) control_pane_g2

0x4e2e,	// (0x0001356a) control_pane_g3_ParamLimits

0x4e2e,	// (0x0001356a) control_pane_g3

0x0007,

0xf789,	// (0x0001dec5) control_pane_g_ParamLimits

0xf789,	// (0x0001dec5) control_pane_g

0xb287,	// (0x000199c3) control_pane_t1_ParamLimits

0xb287,	// (0x000199c3) control_pane_t1

0xb2e5,	// (0x00019a21) control_pane_t2_ParamLimits

0xb2e5,	// (0x00019a21) control_pane_t2

0x0002,

0xf79a,	// (0x0001ded6) control_pane_t_ParamLimits

0xf79a,	// (0x0001ded6) control_pane_t

0x4d4f,	// (0x0001348b) navi_navi_volume_pane_cp1

0x4d58,	// (0x00013494) status_small_icon_pane

0x4d60,	// (0x0001349c) status_small_pane_g1_ParamLimits

0x4d60,	// (0x0001349c) status_small_pane_g1

0x4d94,	// (0x000134d0) status_small_pane_g2_ParamLimits

0x4d94,	// (0x000134d0) status_small_pane_g2

0x4da0,	// (0x000134dc) status_small_pane_g3_ParamLimits

0x4da0,	// (0x000134dc) status_small_pane_g3

0x4dac,	// (0x000134e8) status_small_pane_g4_ParamLimits

0x4dac,	// (0x000134e8) status_small_pane_g4

0x4db8,	// (0x000134f4) status_small_pane_g5_ParamLimits

0x4db8,	// (0x000134f4) status_small_pane_g5

0x4dc7,	// (0x00013503) status_small_pane_g6_ParamLimits

0x4dc7,	// (0x00013503) status_small_pane_g6

0x0007,

0xf778,	// (0x0001deb4) status_small_pane_g_ParamLimits

0xf778,	// (0x0001deb4) status_small_pane_g

0x4df7,	// (0x00013533) status_small_pane_t1

0x4e1a,	// (0x00013556) status_small_wait_pane_ParamLimits

0x4e1a,	// (0x00013556) status_small_wait_pane

0xd991,	// (0x0001c0cd) aid_levels_signal_ParamLimits

0xd991,	// (0x0001c0cd) aid_levels_signal

0xd9a9,	// (0x0001c0e5) signal_pane_g1_ParamLimits

0xd9a9,	// (0x0001c0e5) signal_pane_g1

0xd9c4,	// (0x0001c100) signal_pane_g2_ParamLimits

0xd9c4,	// (0x0001c100) signal_pane_g2

0x0003,

0xf709,	// (0x0001de45) signal_pane_g_ParamLimits

0xf709,	// (0x0001de45) signal_pane_g

0x45be,	// (0x00012cfa) context_pane_g1

0xcfa6,	// (0x0001b6e2) title_pane_g1

0xcfdd,	// (0x0001b719) title_pane_t1

0x2eec,	// (0x00011628) title_pane_t2

0x2f12,	// (0x0001164e) title_pane_t3

0x0002,

0xf55d,	// (0x0001dc99) title_pane_t

0xdfec,	// (0x0001c728) aid_levels_battery_ParamLimits

0xdfec,	// (0x0001c728) aid_levels_battery

0xe008,	// (0x0001c744) battery_pane_g1_ParamLimits

0xe008,	// (0x0001c744) battery_pane_g1

0xe025,	// (0x0001c761) battery_pane_g2_ParamLimits

0xe025,	// (0x0001c761) battery_pane_g2

0x0001,

0xf7ac,	// (0x0001dee8) battery_pane_g_ParamLimits

0xf7ac,	// (0x0001dee8) battery_pane_g

0xe2cb,	// (0x0001ca07) uni_indicator_pane_g1

0xe2e0,	// (0x0001ca1c) uni_indicator_pane_g2

0x669a,	// (0x00014dd6) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x0001e059) uni_indicator_pane_g

0x49e5,	// (0x00013121) navi_icon_pane_ParamLimits

0x49e5,	// (0x00013121) navi_icon_pane

0x492c,	// (0x00013068) navi_midp_pane

0x4a01,	// (0x0001313d) navi_navi_pane

0x4a0b,	// (0x00013147) navi_text_pane_ParamLimits

0x4a0b,	// (0x00013147) navi_text_pane

0x2e3a,	// (0x00011576) status_small_wait_pane_g1

0x334f,	// (0x00011a8b) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x0001e054) status_small_wait_pane_g

0x6392,	// (0x00014ace) navi_navi_icon_text_pane

0x639a,	// (0x00014ad6) navi_navi_pane_g1_ParamLimits

0x639a,	// (0x00014ad6) navi_navi_pane_g1

0x63ac,	// (0x00014ae8) navi_navi_pane_g2_ParamLimits

0x63ac,	// (0x00014ae8) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x0001e022) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x0001e022) navi_navi_pane_g

0x63be,	// (0x00014afa) navi_navi_tabs_pane

0x63c7,	// (0x00014b03) navi_navi_text_pane

0x6392,	// (0x00014ace) navi_navi_volume_pane

0x636e,	// (0x00014aaa) navi_text_pane_t1

0x6362,	// (0x00014a9e) navi_icon_pane_g1

0x62c1,	// (0x000149fd) navi_navi_text_pane_t1

0xbbd8,	// (0x0001a314) navi_navi_volume_pane_g1

0xbbe0,	// (0x0001a31c) volume_small_pane

0xe1ae,	// (0x0001c8ea) navi_navi_icon_text_pane_g1

0xe1b6,	// (0x0001c8f2) navi_navi_icon_text_pane_t1

0x4a01,	// (0x0001313d) navi_tabs_2_long_pane

0x4a01,	// (0x0001313d) navi_tabs_2_pane

0x4a01,	// (0x0001313d) navi_tabs_3_long_pane

0x4a01,	// (0x0001313d) navi_tabs_3_pane

0x4a01,	// (0x0001313d) navi_tabs_4_pane

0xbbb8,	// (0x0001a2f4) tabs_2_active_pane_ParamLimits

0xbbb8,	// (0x0001a2f4) tabs_2_active_pane

0xbbc8,	// (0x0001a304) tabs_2_passive_pane_ParamLimits

0xbbc8,	// (0x0001a304) tabs_2_passive_pane

0xbb86,	// (0x0001a2c2) tabs_3_active_pane_ParamLimits

0xbb86,	// (0x0001a2c2) tabs_3_active_pane

0xbb96,	// (0x0001a2d2) tabs_3_passive_pane_ParamLimits

0xbb96,	// (0x0001a2d2) tabs_3_passive_pane

0xbba7,	// (0x0001a2e3) tabs_3_passive_pane_cp_ParamLimits

0xbba7,	// (0x0001a2e3) tabs_3_passive_pane_cp

0xbb42,	// (0x0001a27e) tabs_4_active_pane_ParamLimits

0xbb42,	// (0x0001a27e) tabs_4_active_pane

0xbb53,	// (0x0001a28f) tabs_4_passive_pane_ParamLimits

0xbb53,	// (0x0001a28f) tabs_4_passive_pane

0xbb64,	// (0x0001a2a0) tabs_4_passive_pane_cp_ParamLimits

0xbb64,	// (0x0001a2a0) tabs_4_passive_pane_cp

0xbb75,	// (0x0001a2b1) tabs_4_passive_pane_cp2_ParamLimits

0xbb75,	// (0x0001a2b1) tabs_4_passive_pane_cp2

0xbb22,	// (0x0001a25e) tabs_2_long_active_pane_ParamLimits

0xbb22,	// (0x0001a25e) tabs_2_long_active_pane

0xbb32,	// (0x0001a26e) tabs_2_long_passive_pane_ParamLimits

0xbb32,	// (0x0001a26e) tabs_2_long_passive_pane

0xbaed,	// (0x0001a229) tabs_3_long_active_pane_ParamLimits

0xbaed,	// (0x0001a229) tabs_3_long_active_pane

0xbafe,	// (0x0001a23a) tabs_3_long_passive_pane_ParamLimits

0xbafe,	// (0x0001a23a) tabs_3_long_passive_pane

0xbb11,	// (0x0001a24d) tabs_3_long_passive_pane_cp_ParamLimits

0xbb11,	// (0x0001a24d) tabs_3_long_passive_pane_cp

0x1d44,	// (0x00010480) volume_small_pane_g1

0xba9c,	// (0x0001a1d8) volume_small_pane_g2

0xbaa5,	// (0x0001a1e1) volume_small_pane_g3

0xbaae,	// (0x0001a1ea) volume_small_pane_g4

0xbab7,	// (0x0001a1f3) volume_small_pane_g5

0xbac0,	// (0x0001a1fc) volume_small_pane_g6

0xbac9,	// (0x0001a205) volume_small_pane_g7

0xbad2,	// (0x0001a20e) volume_small_pane_g8

0xbadb,	// (0x0001a217) volume_small_pane_g9

0xbae4,	// (0x0001a220) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x0001dfee) volume_small_pane_g

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp2_ParamLimits

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp2

0xd069,	// (0x0001b7a5) tabs_3_active_pane_g1

0xd071,	// (0x0001b7ad) tabs_3_active_pane_t1

0x31b9,	// (0x000118f5) bg_passive_tab_pane_cp2_ParamLimits

0x31b9,	// (0x000118f5) bg_passive_tab_pane_cp2

0xd069,	// (0x0001b7a5) tabs_3_passive_pane_g1

0xd071,	// (0x0001b7ad) tabs_3_passive_pane_t1

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp3_ParamLimits

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp3

0xd083,	// (0x0001b7bf) tabs_4_active_pane_g1

0xd08b,	// (0x0001b7c7) tabs_4_active_pane_t1

0x31b9,	// (0x000118f5) bg_passive_tab_pane_cp3_ParamLimits

0x31b9,	// (0x000118f5) bg_passive_tab_pane_cp3

0xd083,	// (0x0001b7bf) tabs_4_1_passive_pane_g1

0xd08b,	// (0x0001b7c7) tabs_4_1_passive_pane_t1

0x4eb9,	// (0x000135f5) list_highlight_pane_cp2

0xe37f,	// (0x0001cabb) list_set_pane_ParamLimits

0xe37f,	// (0x0001cabb) list_set_pane

0xe419,	// (0x0001cb55) main_pane_set_t1_ParamLimits

0xe419,	// (0x0001cb55) main_pane_set_t1

0xe439,	// (0x0001cb75) main_pane_set_t2_ParamLimits

0xe439,	// (0x0001cb75) main_pane_set_t2

0xe44d,	// (0x0001cb89) main_pane_set_t3_ParamLimits

0xe44d,	// (0x0001cb89) main_pane_set_t3

0xe45f,	// (0x0001cb9b) main_pane_set_t4_ParamLimits

0xe45f,	// (0x0001cb9b) main_pane_set_t4

0x0003,

0xf982,	// (0x0001e0be) main_pane_set_t_ParamLimits

0xf982,	// (0x0001e0be) main_pane_set_t

0xe471,	// (0x0001cbad) setting_code_pane

0xe479,	// (0x0001cbb5) setting_slider_graphic_pane

0xe479,	// (0x0001cbb5) setting_slider_pane

0xe479,	// (0x0001cbb5) setting_text_pane

0xe479,	// (0x0001cbb5) setting_volume_pane

0x0f73,	// (0x0000f6af) volume_set_pane

0x2f24,	// (0x00011660) bg_set_opt_pane_cp

0x0f7b,	// (0x0000f6b7) setting_slider_pane_t1

0x0f94,	// (0x0000f6d0) setting_slider_pane_t2

0x0fad,	// (0x0000f6e9) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0001dca0) setting_slider_pane_t

0x0fc4,	// (0x0000f700) slider_set_pane

0x2e44,	// (0x00011580) bg_set_opt_pane_cp2

0x2f66,	// (0x000116a2) setting_slider_graphic_pane_g1

0x0fda,	// (0x0000f716) setting_slider_graphic_pane_t1

0x0fe9,	// (0x0000f725) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0001dca7) setting_slider_graphic_pane_t

0x0ff8,	// (0x0000f734) slider_set_pane_cp

0x2e44,	// (0x00011580) input_focus_pane_cp1

0x68da,	// (0x00015016) list_set_text_pane

0x2e3a,	// (0x00011576) setting_text_pane_g1

0x2e44,	// (0x00011580) input_focus_pane_cp2

0x2e3a,	// (0x00011576) setting_code_pane_g1

0x2f6f,	// (0x000116ab) setting_code_pane_t1

0x2f7d,	// (0x000116b9) set_text_pane_t1_ParamLimits

0x2f7d,	// (0x000116b9) set_text_pane_t1

0x3e39,	// (0x00012575) set_opt_bg_pane_g1

0x3e41,	// (0x0001257d) set_opt_bg_pane_g2

0x68ba,	// (0x00014ff6) set_opt_bg_pane_g3

0x3e51,	// (0x0001258d) set_opt_bg_pane_g4

0x3e59,	// (0x00012595) set_opt_bg_pane_g5

0x3e61,	// (0x0001259d) set_opt_bg_pane_g6

0x68c2,	// (0x00014ffe) set_opt_bg_pane_g7

0x68ca,	// (0x00015006) set_opt_bg_pane_g8

0x68d2,	// (0x0001500e) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x0001e0ab) set_opt_bg_pane_g

0x68ad,	// (0x00014fe9) slider_set_pane_g1

0x1f12,	// (0x0001064e) slider_set_pane_g2

0x0006,

0xf960,	// (0x0001e09c) slider_set_pane_g

0x1eae,	// (0x000105ea) volume_set_pane_g1

0x1eb6,	// (0x000105f2) volume_set_pane_g2

0x1ebe,	// (0x000105fa) volume_set_pane_g3

0x1ec6,	// (0x00010602) volume_set_pane_g4

0x1ece,	// (0x0001060a) volume_set_pane_g5

0x1ed6,	// (0x00010612) volume_set_pane_g6

0x1ede,	// (0x0001061a) volume_set_pane_g7

0x1ee6,	// (0x00010622) volume_set_pane_g8

0x1eee,	// (0x0001062a) volume_set_pane_g9

0x1ef6,	// (0x00010632) volume_set_pane_g10

0x0009,

0xf938,	// (0x0001e074) volume_set_pane_g

0xd09d,	// (0x0001b7d9) indicator_pane_ParamLimits

0xd09d,	// (0x0001b7d9) indicator_pane

0xd0c5,	// (0x0001b801) main_idle_pane_g2_ParamLimits

0xd0c5,	// (0x0001b801) main_idle_pane_g2

0xd0fd,	// (0x0001b839) main_pane_idle_g1_ParamLimits

0xd0fd,	// (0x0001b839) main_pane_idle_g1

0x2fd8,	// (0x00011714) popup_clock_digital_analogue_window_ParamLimits

0x2fd8,	// (0x00011714) popup_clock_digital_analogue_window

0xd124,	// (0x0001b860) soft_indicator_pane_ParamLimits

0xd124,	// (0x0001b860) soft_indicator_pane

0xd13e,	// (0x0001b87a) wallpaper_pane_ParamLimits

0xd13e,	// (0x0001b87a) wallpaper_pane

0x2e3a,	// (0x00011576) wallpaper_pane_g1

0xd150,	// (0x0001b88c) indicator_pane_g1_ParamLimits

0xd150,	// (0x0001b88c) indicator_pane_g1

0x6dad,	// (0x000154e9) navi_navi_icon_text_pane_srt_g1

0x302a,	// (0x00011766) soft_indicator_pane_t1

0x3044,	// (0x00011780) aid_ps_area_pane

0xd169,	// (0x0001b8a5) aid_ps_clock_pane

0x3063,	// (0x0001179f) aid_ps_indicator_pane

0x306f,	// (0x000117ab) indicator_ps_pane_ParamLimits

0x306f,	// (0x000117ab) indicator_ps_pane

0x307e,	// (0x000117ba) power_save_pane_g1_ParamLimits

0x307e,	// (0x000117ba) power_save_pane_g1

0x308a,	// (0x000117c6) power_save_pane_g2_ParamLimits

0x308a,	// (0x000117c6) power_save_pane_g2

0x0b98,	// (0x0000f2d4) aid_navinavi_width_pane

0x3044,	// (0x00011780) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0001dcac) power_save_pane_g_ParamLimits

0xf570,	// (0x0001dcac) power_save_pane_g

0x3098,	// (0x000117d4) power_save_pane_t1_ParamLimits

0x3098,	// (0x000117d4) power_save_pane_t1

0xd169,	// (0x0001b8a5) aid_ps_clock_pane_ParamLimits

0x3063,	// (0x0001179f) aid_ps_indicator_pane_ParamLimits

0x30aa,	// (0x000117e6) power_save_pane_t4_ParamLimits

0x30aa,	// (0x000117e6) power_save_pane_t4

0x0001,

0xf575,	// (0x0001dcb1) power_save_pane_t_ParamLimits

0xf575,	// (0x0001dcb1) power_save_pane_t

0x30d4,	// (0x00011810) power_save_t3_ParamLimits

0x30d4,	// (0x00011810) power_save_t3

0x30bf,	// (0x000117fb) power_save_t2_ParamLimits

0x30bf,	// (0x000117fb) power_save_t2

0x30e9,	// (0x00011825) indicator_ps_pane_g1

0xd177,	// (0x0001b8b3) ai_gene_pane_ParamLimits

0xd177,	// (0x0001b8b3) ai_gene_pane

0xd18e,	// (0x0001b8ca) ai_links_pane_ParamLimits

0xd18e,	// (0x0001b8ca) ai_links_pane

0xd1a6,	// (0x0001b8e2) indicator_pane_cp1_ParamLimits

0xd1a6,	// (0x0001b8e2) indicator_pane_cp1

0xd1b5,	// (0x0001b8f1) main_pane_idle_g1_cp_ParamLimits

0xd1b5,	// (0x0001b8f1) main_pane_idle_g1_cp

0x3122,	// (0x0001185e) popup_ai_links_title_window

0xd1cd,	// (0x0001b909) soft_indicator_pane_cp1_ParamLimits

0xd1cd,	// (0x0001b909) soft_indicator_pane_cp1

0x665d,	// (0x00014d99) ai_links_pane_g1

0x6666,	// (0x00014da2) grid_ai_links_pane

0xe2c2,	// (0x0001c9fe) ai_gene_pane_1

0x664b,	// (0x00014d87) ai_gene_pane_2

0x6654,	// (0x00014d90) list_highlight_pane_cp4

0xe29e,	// (0x0001c9da) cell_ai_link_pane_ParamLimits

0xe29e,	// (0x0001c9da) cell_ai_link_pane

0x661c,	// (0x00014d58) cell_ai_link_pane_g1

0x334f,	// (0x00011a8b) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x0001e04f) cell_ai_link_pane_g

0x2e44,	// (0x00011580) grid_highlight_cp2

0x2e44,	// (0x00011580) bg_popup_sub_pane_cp1

0x3145,	// (0x00011881) popup_ai_links_title_window_t1

0x656a,	// (0x00014ca6) ai_gene_pane_1_g1_ParamLimits

0x656a,	// (0x00014ca6) ai_gene_pane_1_g1

0x6576,	// (0x00014cb2) ai_gene_pane_1_g2_ParamLimits

0x6576,	// (0x00014cb2) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x0001e045) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x0001e045) ai_gene_pane_1_g

0x6583,	// (0x00014cbf) ai_gene_pane_1_t1_ParamLimits

0x6583,	// (0x00014cbf) ai_gene_pane_1_t1

0x65b7,	// (0x00014cf3) grid_ai_soft_ind_pane

0x6555,	// (0x00014c91) ai_gene_pane_2_t1_ParamLimits

0x6555,	// (0x00014c91) ai_gene_pane_2_t1

0xd1e1,	// (0x0001b91d) main_pane_empty_t1_ParamLimits

0xd1e1,	// (0x0001b91d) main_pane_empty_t1

0xd1f9,	// (0x0001b935) main_pane_empty_t2_ParamLimits

0xd1f9,	// (0x0001b935) main_pane_empty_t2

0xd20e,	// (0x0001b94a) main_pane_empty_t3_ParamLimits

0xd20e,	// (0x0001b94a) main_pane_empty_t3

0xd220,	// (0x0001b95c) main_pane_empty_t4_ParamLimits

0xd220,	// (0x0001b95c) main_pane_empty_t4

0xd232,	// (0x0001b96e) main_pane_empty_t5_ParamLimits

0xd232,	// (0x0001b96e) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0001dcb6) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0001dcb6) main_pane_empty_t

0x3f32,	// (0x0001266e) bg_popup_window_pane_ParamLimits

0x3f32,	// (0x0001266e) bg_popup_window_pane

0x62cf,	// (0x00014a0b) find_popup_pane_cp2_ParamLimits

0x62cf,	// (0x00014a0b) find_popup_pane_cp2

0x62db,	// (0x00014a17) heading_pane_ParamLimits

0x62db,	// (0x00014a17) heading_pane

0x2e44,	// (0x00011580) bg_popup_sub_pane

0xe1d3,	// (0x0001c90f) bg_popup_window_pane_g1_ParamLimits

0xe1d3,	// (0x0001c90f) bg_popup_window_pane_g1

0xe1e2,	// (0x0001c91e) bg_popup_window_pane_g2_ParamLimits

0xe1e2,	// (0x0001c91e) bg_popup_window_pane_g2

0xe1ee,	// (0x0001c92a) bg_popup_window_pane_g3_ParamLimits

0xe1ee,	// (0x0001c92a) bg_popup_window_pane_g3

0xe1fa,	// (0x0001c936) bg_popup_window_pane_g4_ParamLimits

0xe1fa,	// (0x0001c936) bg_popup_window_pane_g4

0xe209,	// (0x0001c945) bg_popup_window_pane_g5_ParamLimits

0xe209,	// (0x0001c945) bg_popup_window_pane_g5

0xe219,	// (0x0001c955) bg_popup_window_pane_g6_ParamLimits

0xe219,	// (0x0001c955) bg_popup_window_pane_g6

0xe225,	// (0x0001c961) bg_popup_window_pane_g7_ParamLimits

0xe225,	// (0x0001c961) bg_popup_window_pane_g7

0xe234,	// (0x0001c970) bg_popup_window_pane_g8_ParamLimits

0xe234,	// (0x0001c970) bg_popup_window_pane_g8

0xe243,	// (0x0001c97f) bg_popup_window_pane_g9_ParamLimits

0xe243,	// (0x0001c97f) bg_popup_window_pane_g9

0x62b5,	// (0x000149f1) bg_popup_window_pane_g10_ParamLimits

0x62b5,	// (0x000149f1) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x0001e00d) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x0001e00d) bg_popup_window_pane_g

0x61de,	// (0x0001491a) bg_popup_heading_pane_ParamLimits

0x61de,	// (0x0001491a) bg_popup_heading_pane

0x1f9a,	// (0x000106d6) tabs_4_passive_pane_cp_srt_ParamLimits

0x1f9a,	// (0x000106d6) tabs_4_passive_pane_cp_srt

0x1fac,	// (0x000106e8) tabs_4_passive_pane_srt_ParamLimits

0x61f2,	// (0x0001492e) heading_pane_g2

0x1fac,	// (0x000106e8) tabs_4_passive_pane_srt

0x550b,	// (0x00013c47) bg_passive_tab_pane_cp3_srt_ParamLimits

0x550b,	// (0x00013c47) bg_passive_tab_pane_cp3_srt

0x61fa,	// (0x00014936) heading_pane_t1_ParamLimits

0x61fa,	// (0x00014936) heading_pane_t1

0x6211,	// (0x0001494d) heading_pane_t2_ParamLimits

0x6211,	// (0x0001494d) heading_pane_t2

0x0001,

0xf8cc,	// (0x0001e008) heading_pane_t_ParamLimits

0xf8cc,	// (0x0001e008) heading_pane_t

0x5d19,	// (0x00014455) bg_popup_heading_pane_g1

0x5dc8,	// (0x00014504) bg_popup_heading_pane_g2

0x5dd2,	// (0x0001450e) bg_popup_heading_pane_g3

0x5ddc,	// (0x00014518) bg_popup_heading_pane_g4

0x5de6,	// (0x00014522) bg_popup_heading_pane_g5

0x5df0,	// (0x0001452c) bg_popup_heading_pane_g6

0x5df8,	// (0x00014534) bg_popup_heading_pane_g7

0x5e00,	// (0x0001453c) bg_popup_heading_pane_g8

0x5e0a,	// (0x00014546) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x0001dfc4) bg_popup_heading_pane_g

0x53f1,	// (0x00013b2d) bg_popup_sub_pane_g1

0x5401,	// (0x00013b3d) bg_popup_sub_pane_g2

0x53f9,	// (0x00013b35) bg_popup_sub_pane_g3

0x5411,	// (0x00013b4d) bg_popup_sub_pane_g4

0x5409,	// (0x00013b45) bg_popup_sub_pane_g5

0x5419,	// (0x00013b55) bg_popup_sub_pane_g6

0x5421,	// (0x00013b5d) bg_popup_sub_pane_g7

0x5431,	// (0x00013b6d) bg_popup_sub_pane_g8

0x5429,	// (0x00013b65) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x0001df9e) bg_popup_sub_pane_g

0x31b9,	// (0x000118f5) bg_popup_window_pane_cp5_ParamLimits

0x31b9,	// (0x000118f5) bg_popup_window_pane_cp5

0x31d5,	// (0x00011911) popup_note_window_g1_ParamLimits

0x31d5,	// (0x00011911) popup_note_window_g1

0x31e1,	// (0x0001191d) popup_note_window_t1_ParamLimits

0x31e1,	// (0x0001191d) popup_note_window_t1

0x31f3,	// (0x0001192f) popup_note_window_t2_ParamLimits

0x31f3,	// (0x0001192f) popup_note_window_t2

0x3205,	// (0x00011941) popup_note_window_t3_ParamLimits

0x3205,	// (0x00011941) popup_note_window_t3

0x3217,	// (0x00011953) popup_note_window_t4_ParamLimits

0x3217,	// (0x00011953) popup_note_window_t4

0x323f,	// (0x0001197b) popup_note_window_t5_ParamLimits

0x323f,	// (0x0001197b) popup_note_window_t5

0x0004,

0xf585,	// (0x0001dcc1) popup_note_window_t_ParamLimits

0xf585,	// (0x0001dcc1) popup_note_window_t

0x3263,	// (0x0001199f) bg_popup_window_pane_cp6_ParamLimits

0x3263,	// (0x0001199f) bg_popup_window_pane_cp6

0x5c8d,	// (0x000143c9) popup_note_image_window_g1_ParamLimits

0x5c8d,	// (0x000143c9) popup_note_image_window_g1

0x5c99,	// (0x000143d5) popup_note_image_window_g2_ParamLimits

0x5c99,	// (0x000143d5) popup_note_image_window_g2

0x0001,

0xf856,	// (0x0001df92) popup_note_image_window_g_ParamLimits

0xf856,	// (0x0001df92) popup_note_image_window_g

0x5cb2,	// (0x000143ee) popup_note_image_window_t1_ParamLimits

0x5cb2,	// (0x000143ee) popup_note_image_window_t1

0x5ccb,	// (0x00014407) popup_note_image_window_t2_ParamLimits

0x5ccb,	// (0x00014407) popup_note_image_window_t2

0x5ce4,	// (0x00014420) popup_note_image_window_t3_ParamLimits

0x5ce4,	// (0x00014420) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x0001df97) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x0001df97) popup_note_image_window_t

0x5b4e,	// (0x0001428a) bg_popup_window_pane_cp7_ParamLimits

0x5b4e,	// (0x0001428a) bg_popup_window_pane_cp7

0x5b7e,	// (0x000142ba) popup_note_wait_window_g1_ParamLimits

0x5b7e,	// (0x000142ba) popup_note_wait_window_g1

0x5b8a,	// (0x000142c6) popup_note_wait_window_g2_ParamLimits

0x5b8a,	// (0x000142c6) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x0001df80) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x0001df80) popup_note_wait_window_g

0x5ba2,	// (0x000142de) popup_note_wait_window_t1_ParamLimits

0x5ba2,	// (0x000142de) popup_note_wait_window_t1

0x5bc9,	// (0x00014305) popup_note_wait_window_t2_ParamLimits

0x5bc9,	// (0x00014305) popup_note_wait_window_t2

0x5be6,	// (0x00014322) popup_note_wait_window_t3_ParamLimits

0x5be6,	// (0x00014322) popup_note_wait_window_t3

0x5bf9,	// (0x00014335) popup_note_wait_window_t4_ParamLimits

0x5bf9,	// (0x00014335) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x0001df87) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x0001df87) popup_note_wait_window_t

0x5c1e,	// (0x0001435a) wait_bar_pane_ParamLimits

0x5c1e,	// (0x0001435a) wait_bar_pane

0x2e44,	// (0x00011580) wait_anim_pane

0x2e44,	// (0x00011580) wait_border_pane

0x2e3a,	// (0x00011576) wait_anim_pane_g1

0x2e3a,	// (0x00011576) wait_anim_pane_g2

0x0001,

0xf704,	// (0x0001de40) wait_anim_pane_g

0x5af2,	// (0x0001422e) wait_border_pane_g1

0x5afd,	// (0x00014239) wait_border_pane_g2

0x5b06,	// (0x00014242) wait_border_pane_g3

0x0002,

0xf83d,	// (0x0001df79) wait_border_pane_g

0x5962,	// (0x0001409e) bg_popup_window_pane_cp16_ParamLimits

0x5962,	// (0x0001409e) bg_popup_window_pane_cp16

0x5a62,	// (0x0001419e) indicator_popup_pane_cp4_ParamLimits

0x5a62,	// (0x0001419e) indicator_popup_pane_cp4

0x5a76,	// (0x000141b2) popup_query_data_window_t1_ParamLimits

0x5a76,	// (0x000141b2) popup_query_data_window_t1

0x5a88,	// (0x000141c4) popup_query_data_window_t2_ParamLimits

0x5a88,	// (0x000141c4) popup_query_data_window_t2

0x5aa1,	// (0x000141dd) popup_query_data_window_t3_ParamLimits

0x5aa1,	// (0x000141dd) popup_query_data_window_t3

0x0002,

0xf836,	// (0x0001df72) popup_query_data_window_t_ParamLimits

0xf836,	// (0x0001df72) popup_query_data_window_t

0x5abb,	// (0x000141f7) query_popup_data_pane_ParamLimits

0x5abb,	// (0x000141f7) query_popup_data_pane

0x5acf,	// (0x0001420b) query_popup_data_pane_cp1_ParamLimits

0x5acf,	// (0x0001420b) query_popup_data_pane_cp1

0x5962,	// (0x0001409e) bg_popup_window_pane_cp10_ParamLimits

0x5962,	// (0x0001409e) bg_popup_window_pane_cp10

0x5994,	// (0x000140d0) indicator_popup_pane_ParamLimits

0x5994,	// (0x000140d0) indicator_popup_pane

0x59b6,	// (0x000140f2) popup_query_code_window_t1_ParamLimits

0x59b6,	// (0x000140f2) popup_query_code_window_t1

0x59d0,	// (0x0001410c) popup_query_code_window_t2_ParamLimits

0x59d0,	// (0x0001410c) popup_query_code_window_t2

0x5a19,	// (0x00014155) popup_query_code_window_t3_ParamLimits

0x5a19,	// (0x00014155) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x0001df6b) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x0001df6b) popup_query_code_window_t

0x5a48,	// (0x00014184) query_popup_pane_ParamLimits

0x5a48,	// (0x00014184) query_popup_pane

0x3263,	// (0x0001199f) bg_popup_window_pane_cp15_ParamLimits

0x3263,	// (0x0001199f) bg_popup_window_pane_cp15

0x3281,	// (0x000119bd) indicator_popup_pane_cp1_ParamLimits

0x3281,	// (0x000119bd) indicator_popup_pane_cp1

0x3294,	// (0x000119d0) indicator_popup_pane_cp2_ParamLimits

0x3294,	// (0x000119d0) indicator_popup_pane_cp2

0x32a7,	// (0x000119e3) popup_query_data_code_window_g1_ParamLimits

0x32a7,	// (0x000119e3) popup_query_data_code_window_g1

0x32ba,	// (0x000119f6) popup_query_data_code_window_t1_ParamLimits

0x32ba,	// (0x000119f6) popup_query_data_code_window_t1

0x32cc,	// (0x00011a08) popup_query_data_code_window_t2_ParamLimits

0x32cc,	// (0x00011a08) popup_query_data_code_window_t2

0x32de,	// (0x00011a1a) popup_query_data_code_window_t3_ParamLimits

0x32de,	// (0x00011a1a) popup_query_data_code_window_t3

0x32f4,	// (0x00011a30) popup_query_data_code_window_t4_ParamLimits

0x32f4,	// (0x00011a30) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0001dccc) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0001dccc) popup_query_data_code_window_t

0x1c57,	// (0x00010393) list_single_midp_graphic_pane_g3

0x330c,	// (0x00011a48) query_popup_data_pane_cp2_ParamLimits

0x331f,	// (0x00011a5b) query_popup_pane_cp2_ParamLimits

0x331f,	// (0x00011a5b) query_popup_pane_cp2

0x2e44,	// (0x00011580) bg_popup_window_pane_cp11

0x595a,	// (0x00014096) heading_pane_cp5

0x3407,	// (0x00011b43) listscroll_popup_info_pane

0x2e44,	// (0x00011580) input_focus_pane_cp3

0x3332,	// (0x00011a6e) query_popup_pane_t1

0x3340,	// (0x00011a7c) list_popup_info_pane_ParamLimits

0x3340,	// (0x00011a7c) list_popup_info_pane

0x334f,	// (0x00011a8b) listscroll_popup_info_pane_g1

0x3357,	// (0x00011a93) scroll_pane_cp7

0x3361,	// (0x00011a9d) popup_info_list_pane_t1_ParamLimits

0x3361,	// (0x00011a9d) popup_info_list_pane_t1

0x337b,	// (0x00011ab7) popup_info_list_pane_t2_ParamLimits

0x337b,	// (0x00011ab7) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0001dcd5) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0001dcd5) popup_info_list_pane_t

0x2e44,	// (0x00011580) bg_popup_window_pane_cp12

0x6dc7,	// (0x00015503) find_popup_pane

0x2f24,	// (0x00011660) bg_popup_window_pane_cp3

0x3395,	// (0x00011ad1) heading_pane_cp3

0x33a1,	// (0x00011add) listscroll_popup_graphic_pane

0x2e44,	// (0x00011580) bg_popup_window_pane_cp4

0xd294,	// (0x0001b9d0) heading_pane_cp4

0x3407,	// (0x00011b43) listscroll_popup_colour_pane

0xd29c,	// (0x0001b9d8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xd29c,	// (0x0001b9d8) cell_large_graphic_colour_none_popup_pane

0xd2b0,	// (0x0001b9ec) grid_large_graphic_colour_popup_pane_ParamLimits

0xd2b0,	// (0x0001b9ec) grid_large_graphic_colour_popup_pane

0xd2d4,	// (0x0001ba10) listscroll_popup_colour_pane_g1_ParamLimits

0xd2d4,	// (0x0001ba10) listscroll_popup_colour_pane_g1

0xd2eb,	// (0x0001ba27) listscroll_popup_colour_pane_g2_ParamLimits

0xd2eb,	// (0x0001ba27) listscroll_popup_colour_pane_g2

0xd302,	// (0x0001ba3e) listscroll_popup_colour_pane_g3_ParamLimits

0xd302,	// (0x0001ba3e) listscroll_popup_colour_pane_g3

0xd312,	// (0x0001ba4e) listscroll_popup_colour_pane_g4_ParamLimits

0xd312,	// (0x0001ba4e) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0001dcda) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0001dcda) listscroll_popup_colour_pane_g

0x3494,	// (0x00011bd0) scroll_pane_cp6_ParamLimits

0x3494,	// (0x00011bd0) scroll_pane_cp6

0xd321,	// (0x0001ba5d) cell_large_graphic_colour_popup_pane_ParamLimits

0xd321,	// (0x0001ba5d) cell_large_graphic_colour_popup_pane

0x34c5,	// (0x00011c01) cell_large_graphic_colour_none_popup_pane_t1

0x2e44,	// (0x00011580) grid_highlight_pane_cp5

0x34d4,	// (0x00011c10) cell_large_graphic_colour_popup_pane_g1

0x34dc,	// (0x00011c18) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0001dce3) cell_large_graphic_colour_popup_pane_g

0x34e4,	// (0x00011c20) cell_large_graphic_colour_popup_pane_g2_copy1

0x34ed,	// (0x00011c29) grid_highlight_pane_cp4

0x34f5,	// (0x00011c31) bg_popup_window_pane_cp8_ParamLimits

0x34f5,	// (0x00011c31) bg_popup_window_pane_cp8

0x3510,	// (0x00011c4c) popup_snote_single_text_window_g1_ParamLimits

0x3510,	// (0x00011c4c) popup_snote_single_text_window_g1

0x3522,	// (0x00011c5e) popup_snote_single_text_window_t1_ParamLimits

0x3522,	// (0x00011c5e) popup_snote_single_text_window_t1

0x3535,	// (0x00011c71) popup_snote_single_text_window_t2_ParamLimits

0x3535,	// (0x00011c71) popup_snote_single_text_window_t2

0x3548,	// (0x00011c84) popup_snote_single_text_window_t3_ParamLimits

0x3548,	// (0x00011c84) popup_snote_single_text_window_t3

0x3581,	// (0x00011cbd) popup_snote_single_text_window_t4_ParamLimits

0x3581,	// (0x00011cbd) popup_snote_single_text_window_t4

0x35b5,	// (0x00011cf1) popup_snote_single_text_window_t5_ParamLimits

0x35b5,	// (0x00011cf1) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0001dce8) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0001dce8) popup_snote_single_text_window_t

0x35e4,	// (0x00011d20) bg_popup_window_pane_cp9_ParamLimits

0x35e4,	// (0x00011d20) bg_popup_window_pane_cp9

0x3510,	// (0x00011c4c) popup_snote_single_graphic_window_g1_ParamLimits

0x3510,	// (0x00011c4c) popup_snote_single_graphic_window_g1

0x35f2,	// (0x00011d2e) popup_snote_single_graphic_window_g2_ParamLimits

0x35f2,	// (0x00011d2e) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0001dcf3) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0001dcf3) popup_snote_single_graphic_window_g

0x35fe,	// (0x00011d3a) popup_snote_single_graphic_window_t1_ParamLimits

0x35fe,	// (0x00011d3a) popup_snote_single_graphic_window_t1

0x3611,	// (0x00011d4d) popup_snote_single_graphic_window_t2_ParamLimits

0x3611,	// (0x00011d4d) popup_snote_single_graphic_window_t2

0x3624,	// (0x00011d60) popup_snote_single_graphic_window_t3_ParamLimits

0x3624,	// (0x00011d60) popup_snote_single_graphic_window_t3

0x365d,	// (0x00011d99) popup_snote_single_graphic_window_t4_ParamLimits

0x365d,	// (0x00011d99) popup_snote_single_graphic_window_t4

0x3691,	// (0x00011dcd) popup_snote_single_graphic_window_t5_ParamLimits

0x3691,	// (0x00011dcd) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0001dcf8) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0001dcf8) popup_snote_single_graphic_window_t

0x6d07,	// (0x00015443) grid_graphic_popup_pane_ParamLimits

0x6d07,	// (0x00015443) grid_graphic_popup_pane

0x6d33,	// (0x0001546f) listscroll_popup_graphic_pane_g1_ParamLimits

0x6d33,	// (0x0001546f) listscroll_popup_graphic_pane_g1

0xe5c0,	// (0x0001ccfc) listscroll_popup_graphic_pane_g2_ParamLimits

0xe5c0,	// (0x0001ccfc) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x0001e0e8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x0001e0e8) listscroll_popup_graphic_pane_g

0x6d5b,	// (0x00015497) scroll_pane_cp5

0xe584,	// (0x0001ccc0) cell_graphic_popup_pane_ParamLimits

0xe584,	// (0x0001ccc0) cell_graphic_popup_pane

0x6c93,	// (0x000153cf) cell_graphic_popup_pane_g1

0x6c9b,	// (0x000153d7) cell_graphic_popup_pane_g2

0x34e4,	// (0x00011c20) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x0001e0e1) cell_graphic_popup_pane_g

0x6ca4,	// (0x000153e0) cell_graphic_popup_pane_t2

0x34ed,	// (0x00011c29) grid_highlight_pane_cp3

0x36d2,	// (0x00011e0e) list_gen_pane_ParamLimits

0x36d2,	// (0x00011e0e) list_gen_pane

0x3704,	// (0x00011e40) scroll_pane

0xe53f,	// (0x0001cc7b) bg_list_pane_g1_ParamLimits

0xe53f,	// (0x0001cc7b) bg_list_pane_g1

0x6c10,	// (0x0001534c) bg_list_pane_g2_ParamLimits

0x6c10,	// (0x0001534c) bg_list_pane_g2

0x6c23,	// (0x0001535f) bg_list_pane_g3_ParamLimits

0x6c23,	// (0x0001535f) bg_list_pane_g3

0x6c35,	// (0x00015371) bg_list_pane_g4_ParamLimits

0x6c35,	// (0x00015371) bg_list_pane_g4

0xe55a,	// (0x0001cc96) bg_list_pane_g5_ParamLimits

0xe55a,	// (0x0001cc96) bg_list_pane_g5

0x0004,

0xf99a,	// (0x0001e0d6) bg_list_pane_g_ParamLimits

0xf99a,	// (0x0001e0d6) bg_list_pane_g

0xe4c8,	// (0x0001cc04) list_double2_graphic_large_graphic_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double2_graphic_large_graphic_pane

0xe4c8,	// (0x0001cc04) list_double2_graphic_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double2_graphic_pane

0xe4c8,	// (0x0001cc04) list_double2_large_graphic_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double2_large_graphic_pane

0xe4c8,	// (0x0001cc04) list_double2_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double2_pane

0xe4c8,	// (0x0001cc04) list_double_graphic_heading_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double_graphic_heading_pane

0xe4c8,	// (0x0001cc04) list_double_graphic_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double_graphic_pane

0xe4c8,	// (0x0001cc04) list_double_heading_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double_heading_pane

0xe4c8,	// (0x0001cc04) list_double_large_graphic_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double_large_graphic_pane

0xe4c8,	// (0x0001cc04) list_double_number_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double_number_pane

0xe4c8,	// (0x0001cc04) list_double_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double_pane

0xe4c8,	// (0x0001cc04) list_double_time_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_double_time_pane

0xe4c8,	// (0x0001cc04) list_setting_number_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_setting_number_pane

0xe4c8,	// (0x0001cc04) list_setting_pane_ParamLimits

0xe4c8,	// (0x0001cc04) list_setting_pane

0xe4db,	// (0x0001cc17) list_single_2graphic_pane_ParamLimits

0xe4db,	// (0x0001cc17) list_single_2graphic_pane

0xe4db,	// (0x0001cc17) list_single_graphic_heading_pane_ParamLimits

0xe4db,	// (0x0001cc17) list_single_graphic_heading_pane

0xe4db,	// (0x0001cc17) list_single_graphic_pane_ParamLimits

0xe4db,	// (0x0001cc17) list_single_graphic_pane

0xe4db,	// (0x0001cc17) list_single_heading_pane_ParamLimits

0xe4db,	// (0x0001cc17) list_single_heading_pane

0xe52b,	// (0x0001cc67) list_single_large_graphic_pane_ParamLimits

0xe52b,	// (0x0001cc67) list_single_large_graphic_pane

0xe4db,	// (0x0001cc17) list_single_number_heading_pane_ParamLimits

0xe4db,	// (0x0001cc17) list_single_number_heading_pane

0xe4db,	// (0x0001cc17) list_single_number_pane_ParamLimits

0xe4db,	// (0x0001cc17) list_single_number_pane

0xe4db,	// (0x0001cc17) list_single_pane_ParamLimits

0xe4db,	// (0x0001cc17) list_single_pane

0x2e44,	// (0x00011580) list_highlight_pane_cp1

0x4a48,	// (0x00013184) list_single_pane_g1_ParamLimits

0x4a48,	// (0x00013184) list_single_pane_g1

0x5373,	// (0x00013aaf) list_single_pane_g2_ParamLimits

0x5373,	// (0x00013aaf) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0001dd0a) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0001dd0a) list_single_pane_g

0x73ba,	// (0x00015af6) list_single_pane_t1_ParamLimits

0x73ba,	// (0x00015af6) list_single_pane_t1

0x4a48,	// (0x00013184) list_single_number_pane_g1_ParamLimits

0x4a48,	// (0x00013184) list_single_number_pane_g1

0x5373,	// (0x00013aaf) list_single_number_pane_g2_ParamLimits

0x5373,	// (0x00013aaf) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0001dd0a) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0001dd0a) list_single_number_pane_g

0x537f,	// (0x00013abb) list_single_number_pane_t1_ParamLimits

0x537f,	// (0x00013abb) list_single_number_pane_t1

0xe31b,	// (0x0001ca57) list_single_number_pane_t2_ParamLimits

0xe31b,	// (0x0001ca57) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x0001e097) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x0001e097) list_single_number_pane_t

0xd34a,	// (0x0001ba86) list_single_graphic_pane_g1_ParamLimits

0xd34a,	// (0x0001ba86) list_single_graphic_pane_g1

0x4a48,	// (0x00013184) list_single_graphic_pane_g2_ParamLimits

0x4a48,	// (0x00013184) list_single_graphic_pane_g2

0x5373,	// (0x00013aaf) list_single_graphic_pane_g3_ParamLimits

0x5373,	// (0x00013aaf) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0001dd03) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0001dd03) list_single_graphic_pane_g

0xd356,	// (0x0001ba92) list_single_graphic_pane_t1_ParamLimits

0xd356,	// (0x0001ba92) list_single_graphic_pane_t1

0x4a48,	// (0x00013184) list_single_heading_pane_g1_ParamLimits

0x4a48,	// (0x00013184) list_single_heading_pane_g1

0x5373,	// (0x00013aaf) list_single_heading_pane_g2_ParamLimits

0x5373,	// (0x00013aaf) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001dd0a) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001dd0a) list_single_heading_pane_g

0xd36c,	// (0x0001baa8) list_single_heading_pane_t1_ParamLimits

0xd36c,	// (0x0001baa8) list_single_heading_pane_t1

0xd382,	// (0x0001babe) list_single_heading_pane_t2_ParamLimits

0xd382,	// (0x0001babe) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0001dd0f) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0001dd0f) list_single_heading_pane_t

0x4a48,	// (0x00013184) list_single_number_heading_pane_g1_ParamLimits

0x4a48,	// (0x00013184) list_single_number_heading_pane_g1

0x5373,	// (0x00013aaf) list_single_number_heading_pane_g2_ParamLimits

0x5373,	// (0x00013aaf) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0001dd0a) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0001dd0a) list_single_number_heading_pane_g

0xd36c,	// (0x0001baa8) list_single_number_heading_pane_t1_ParamLimits

0xd36c,	// (0x0001baa8) list_single_number_heading_pane_t1

0xd394,	// (0x0001bad0) list_single_number_heading_pane_t2_ParamLimits

0xd394,	// (0x0001bad0) list_single_number_heading_pane_t2

0x7394,	// (0x00015ad0) list_single_number_heading_pane_t3_ParamLimits

0x7394,	// (0x00015ad0) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0001dd14) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0001dd14) list_single_number_heading_pane_t

0x5367,	// (0x00013aa3) list_single_graphic_heading_pane_g1_ParamLimits

0x5367,	// (0x00013aa3) list_single_graphic_heading_pane_g1

0xd3a6,	// (0x0001bae2) list_single_graphic_heading_pane_g4_ParamLimits

0xd3a6,	// (0x0001bae2) list_single_graphic_heading_pane_g4

0x5373,	// (0x00013aaf) list_single_graphic_heading_pane_g5_ParamLimits

0x5373,	// (0x00013aaf) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0001dd1b) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0001dd1b) list_single_graphic_heading_pane_g

0xd36c,	// (0x0001baa8) list_single_graphic_heading_pane_t1_ParamLimits

0xd36c,	// (0x0001baa8) list_single_graphic_heading_pane_t1

0xd3b7,	// (0x0001baf3) list_single_graphic_heading_pane_t2_ParamLimits

0xd3b7,	// (0x0001baf3) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0001dd22) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0001dd22) list_single_graphic_heading_pane_t

0x73d0,	// (0x00015b0c) list_single_large_graphic_pane_g1_ParamLimits

0x73d0,	// (0x00015b0c) list_single_large_graphic_pane_g1

0x37f9,	// (0x00011f35) list_single_large_graphic_pane_g2_ParamLimits

0x37f9,	// (0x00011f35) list_single_large_graphic_pane_g2

0x3805,	// (0x00011f41) list_single_large_graphic_pane_g3_ParamLimits

0x3805,	// (0x00011f41) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0001dd27) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0001dd27) list_single_large_graphic_pane_g

0x5afd,	// (0x00014239) wait_border_pane_g2_copy1

0xd3c9,	// (0x0001bb05) list_single_large_graphic_pane_g4_cp2

0x73dc,	// (0x00015b18) list_single_large_graphic_pane_t1_ParamLimits

0x73dc,	// (0x00015b18) list_single_large_graphic_pane_t1

0x3955,	// (0x00012091) list_double_pane_g1_ParamLimits

0x3955,	// (0x00012091) list_double_pane_g1

0x3880,	// (0x00011fbc) list_double_pane_g2_ParamLimits

0x3880,	// (0x00011fbc) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0001dd2e) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0001dd2e) list_double_pane_g

0x388c,	// (0x00011fc8) list_double_pane_t1_ParamLimits

0x388c,	// (0x00011fc8) list_double_pane_t1

0xd3d1,	// (0x0001bb0d) list_double_pane_t2_ParamLimits

0xd3d1,	// (0x0001bb0d) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0001dd33) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0001dd33) list_double_pane_t

0xd3e3,	// (0x0001bb1f) list_double2_pane_g1_ParamLimits

0xd3e3,	// (0x0001bb1f) list_double2_pane_g1

0xd3f4,	// (0x0001bb30) list_double2_pane_g2_ParamLimits

0xd3f4,	// (0x0001bb30) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0001dd38) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0001dd38) list_double2_pane_g

0x8c0d,	// (0x00017349) list_double2_pane_t1_ParamLimits

0x8c0d,	// (0x00017349) list_double2_pane_t1

0x3a7e,	// (0x000121ba) list_double2_pane_t2_ParamLimits

0x3a7e,	// (0x000121ba) list_double2_pane_t2

0x0001,

0xf601,	// (0x0001dd3d) list_double2_pane_t_ParamLimits

0xf601,	// (0x0001dd3d) list_double2_pane_t

0x3955,	// (0x00012091) list_double_number_pane_g1_ParamLimits

0x3955,	// (0x00012091) list_double_number_pane_g1

0x3880,	// (0x00011fbc) list_double_number_pane_g2_ParamLimits

0x3880,	// (0x00011fbc) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0001dd2e) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0001dd2e) list_double_number_pane_g

0xd400,	// (0x0001bb3c) list_double_number_pane_t1_ParamLimits

0xd400,	// (0x0001bb3c) list_double_number_pane_t1

0x3961,	// (0x0001209d) list_double_number_pane_t2_ParamLimits

0x3961,	// (0x0001209d) list_double_number_pane_t2

0xd412,	// (0x0001bb4e) list_double_number_pane_t3_ParamLimits

0xd412,	// (0x0001bb4e) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0001dd42) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0001dd42) list_double_number_pane_t

0x3949,	// (0x00012085) list_double_graphic_pane_g1_ParamLimits

0x3949,	// (0x00012085) list_double_graphic_pane_g1

0xd424,	// (0x0001bb60) list_double_graphic_pane_g2_ParamLimits

0xd424,	// (0x0001bb60) list_double_graphic_pane_g2

0xd433,	// (0x0001bb6f) list_double_graphic_pane_g3_ParamLimits

0xd433,	// (0x0001bb6f) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0001dd49) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0001dd49) list_double_graphic_pane_g

0xd44b,	// (0x0001bb87) list_double_graphic_pane_t1_ParamLimits

0xd44b,	// (0x0001bb87) list_double_graphic_pane_t1

0xd461,	// (0x0001bb9d) list_double_graphic_pane_t2_ParamLimits

0xd461,	// (0x0001bb9d) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0001dd52) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0001dd52) list_double_graphic_pane_t

0xd473,	// (0x0001bbaf) list_double2_graphic_pane_g1_ParamLimits

0xd473,	// (0x0001bbaf) list_double2_graphic_pane_g1

0x3d23,	// (0x0001245f) list_double2_graphic_pane_g2_ParamLimits

0x3d23,	// (0x0001245f) list_double2_graphic_pane_g2

0xd3f4,	// (0x0001bb30) list_double2_graphic_pane_g3_ParamLimits

0xd3f4,	// (0x0001bb30) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0001dd57) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0001dd57) list_double2_graphic_pane_g

0xd47f,	// (0x0001bbbb) list_double2_graphic_pane_t1_ParamLimits

0xd47f,	// (0x0001bbbb) list_double2_graphic_pane_t1

0x3aa6,	// (0x000121e2) list_double2_graphic_pane_t2_ParamLimits

0x3aa6,	// (0x000121e2) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0001dd5e) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0001dd5e) list_double2_graphic_pane_t

0xd495,	// (0x0001bbd1) list_double_large_graphic_pane_g1_ParamLimits

0xd495,	// (0x0001bbd1) list_double_large_graphic_pane_g1

0xd4c0,	// (0x0001bbfc) list_double_large_graphic_pane_g2_ParamLimits

0xd4c0,	// (0x0001bbfc) list_double_large_graphic_pane_g2

0x3880,	// (0x00011fbc) list_double_large_graphic_pane_g3_ParamLimits

0x3880,	// (0x00011fbc) list_double_large_graphic_pane_g3

0xd4d1,	// (0x0001bc0d) list_double_large_graphic_pane_g4_ParamLimits

0xd4d1,	// (0x0001bc0d) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0001dd63) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0001dd63) list_double_large_graphic_pane_g

0xd4e4,	// (0x0001bc20) list_double_large_graphic_pane_t1_ParamLimits

0xd4e4,	// (0x0001bc20) list_double_large_graphic_pane_t1

0xd4fd,	// (0x0001bc39) list_double_large_graphic_pane_t2_ParamLimits

0xd4fd,	// (0x0001bc39) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0001dd6e) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0001dd6e) list_double_large_graphic_pane_t

0xd50f,	// (0x0001bc4b) list_double2_large_graphic_pane_g1_ParamLimits

0xd50f,	// (0x0001bc4b) list_double2_large_graphic_pane_g1

0xd3e3,	// (0x0001bb1f) list_double2_large_graphic_pane_g2_ParamLimits

0xd3e3,	// (0x0001bb1f) list_double2_large_graphic_pane_g2

0xd3f4,	// (0x0001bb30) list_double2_large_graphic_pane_g3_ParamLimits

0xd3f4,	// (0x0001bb30) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0001dd73) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0001dd73) list_double2_large_graphic_pane_g

0xd51b,	// (0x0001bc57) list_double2_large_graphic_pane_t1_ParamLimits

0xd51b,	// (0x0001bc57) list_double2_large_graphic_pane_t1

0xd531,	// (0x0001bc6d) list_double2_large_graphic_pane_t2_ParamLimits

0xd531,	// (0x0001bc6d) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0001dd7a) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0001dd7a) list_double2_large_graphic_pane_t

0xd543,	// (0x0001bc7f) list_double_heading_pane_g1_ParamLimits

0xd543,	// (0x0001bc7f) list_double_heading_pane_g1

0xd554,	// (0x0001bc90) list_double_heading_pane_g2_ParamLimits

0xd554,	// (0x0001bc90) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0001dd7f) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0001dd7f) list_double_heading_pane_g

0xd560,	// (0x0001bc9c) list_double_heading_pane_t1_ParamLimits

0xd560,	// (0x0001bc9c) list_double_heading_pane_t1

0xd576,	// (0x0001bcb2) list_double_heading_pane_t2_ParamLimits

0xd576,	// (0x0001bcb2) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0001dd84) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0001dd84) list_double_heading_pane_t

0x3949,	// (0x00012085) list_double_graphic_heading_pane_g1_ParamLimits

0x3949,	// (0x00012085) list_double_graphic_heading_pane_g1

0xd543,	// (0x0001bc7f) list_double_graphic_heading_pane_g2_ParamLimits

0xd543,	// (0x0001bc7f) list_double_graphic_heading_pane_g2

0xd554,	// (0x0001bc90) list_double_graphic_heading_pane_g3_ParamLimits

0xd554,	// (0x0001bc90) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0001dd89) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0001dd89) list_double_graphic_heading_pane_g

0xd588,	// (0x0001bcc4) list_double_graphic_heading_pane_t1_ParamLimits

0xd588,	// (0x0001bcc4) list_double_graphic_heading_pane_t1

0xd59e,	// (0x0001bcda) list_double_graphic_heading_pane_t2_ParamLimits

0xd59e,	// (0x0001bcda) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0001dd90) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0001dd90) list_double_graphic_heading_pane_t

0xd4c0,	// (0x0001bbfc) list_double_time_pane_g1_ParamLimits

0xd4c0,	// (0x0001bbfc) list_double_time_pane_g1

0x3880,	// (0x00011fbc) list_double_time_pane_g2_ParamLimits

0x3880,	// (0x00011fbc) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0001dd95) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0001dd95) list_double_time_pane_g

0x3a23,	// (0x0001215f) list_double_time_pane_t1_ParamLimits

0x3a23,	// (0x0001215f) list_double_time_pane_t1

0xd5b0,	// (0x0001bcec) list_double_time_pane_t2_ParamLimits

0xd5b0,	// (0x0001bcec) list_double_time_pane_t2

0xd5c2,	// (0x0001bcfe) list_double_time_pane_t3_ParamLimits

0xd5c2,	// (0x0001bcfe) list_double_time_pane_t3

0xd5d4,	// (0x0001bd10) list_double_time_pane_t4_ParamLimits

0xd5d4,	// (0x0001bd10) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0001dd9a) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0001dd9a) list_double_time_pane_t

0x3d23,	// (0x0001245f) list_setting_pane_g1_ParamLimits

0x3d23,	// (0x0001245f) list_setting_pane_g1

0xd3f4,	// (0x0001bb30) list_setting_pane_g2_ParamLimits

0xd3f4,	// (0x0001bb30) list_setting_pane_g2

0x0001,

0xf667,	// (0x0001dda3) list_setting_pane_g_ParamLimits

0xf667,	// (0x0001dda3) list_setting_pane_g

0xd5e6,	// (0x0001bd22) list_setting_pane_t1_ParamLimits

0xd5e6,	// (0x0001bd22) list_setting_pane_t1

0xd5fd,	// (0x0001bd39) list_setting_pane_t2_ParamLimits

0xd5fd,	// (0x0001bd39) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0001dda8) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0001dda8) list_setting_pane_t

0xd63a,	// (0x0001bd76) set_value_pane_cp_ParamLimits

0xd63a,	// (0x0001bd76) set_value_pane_cp

0x3d23,	// (0x0001245f) list_setting_number_pane_g1_ParamLimits

0x3d23,	// (0x0001245f) list_setting_number_pane_g1

0xd3f4,	// (0x0001bb30) list_setting_number_pane_g2_ParamLimits

0xd3f4,	// (0x0001bb30) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x0001dda3) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x0001dda3) list_setting_number_pane_g

0xd646,	// (0x0001bd82) list_setting_number_pane_t1_ParamLimits

0xd646,	// (0x0001bd82) list_setting_number_pane_t1

0xd65a,	// (0x0001bd96) list_setting_number_pane_t2_ParamLimits

0xd65a,	// (0x0001bd96) list_setting_number_pane_t2

0xd671,	// (0x0001bdad) list_setting_number_pane_t3_ParamLimits

0xd671,	// (0x0001bdad) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x0001ddaf) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x0001ddaf) list_setting_number_pane_t

0xd63a,	// (0x0001bd76) set_value_pane_ParamLimits

0xd63a,	// (0x0001bd76) set_value_pane

0x3bd2,	// (0x0001230e) bg_set_opt_pane_ParamLimits

0x3bd2,	// (0x0001230e) bg_set_opt_pane

0x3bf3,	// (0x0001232f) set_value_pane_t1

0x3c01,	// (0x0001233d) slider_set_pane_cp3

0x3c0a,	// (0x00012346) volume_small_pane_cp

0x3c13,	// (0x0001234f) list_form_gen_pane

0x3c1c,	// (0x00012358) scroll_pane_cp8

0xd6b4,	// (0x0001bdf0) form_field_data_pane_ParamLimits

0xd6b4,	// (0x0001bdf0) form_field_data_pane

0xd6cb,	// (0x0001be07) form_field_data_wide_pane_ParamLimits

0xd6cb,	// (0x0001be07) form_field_data_wide_pane

0xd6eb,	// (0x0001be27) form_field_popup_pane_ParamLimits

0xd6eb,	// (0x0001be27) form_field_popup_pane

0xd709,	// (0x0001be45) form_field_popup_wide_pane_ParamLimits

0xd709,	// (0x0001be45) form_field_popup_wide_pane

0x3ca7,	// (0x000123e3) form_field_slider_pane_ParamLimits

0x3ca7,	// (0x000123e3) form_field_slider_pane

0x3cba,	// (0x000123f6) form_field_slider_wide_pane_ParamLimits

0x3cba,	// (0x000123f6) form_field_slider_wide_pane

0x3ccd,	// (0x00012409) data_form_pane

0xd72a,	// (0x0001be66) form_field_data_pane_t1

0x3cfd,	// (0x00012439) input_focus_pane

0x3d0b,	// (0x00012447) data_form_wide_pane

0x3d43,	// (0x0001247f) form_field_data_wide_pane_t1

0x3502,	// (0x00011c3e) input_focus_pane_cp6

0xd744,	// (0x0001be80) form_field_popup_pane_t1

0x3cfd,	// (0x00012439) input_focus_pane_cp7

0x3d7f,	// (0x000124bb) list_form_pane

0x3d93,	// (0x000124cf) form_field_popup_wide_pane_t1

0x3cfd,	// (0x00012439) input_focus_pane_cp8

0x3da8,	// (0x000124e4) list_form_wide_pane

0xd766,	// (0x0001bea2) form_field_slider_pane_t1_ParamLimits

0xd766,	// (0x0001bea2) form_field_slider_pane_t1

0xd77e,	// (0x0001beba) form_field_slider_pane_t2_ParamLimits

0xd77e,	// (0x0001beba) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x0001ddbf) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x0001ddbf) form_field_slider_pane_t

0x31b9,	// (0x000118f5) input_focus_pane_cp9_ParamLimits

0x31b9,	// (0x000118f5) input_focus_pane_cp9

0xd793,	// (0x0001becf) slider_cont_pane_ParamLimits

0xd793,	// (0x0001becf) slider_cont_pane

0x3df9,	// (0x00012535) form_field_slider_wide_pane_t1_ParamLimits

0x3df9,	// (0x00012535) form_field_slider_wide_pane_t1

0x3e0b,	// (0x00012547) form_field_slider_wide_pane_t2_ParamLimits

0x3e0b,	// (0x00012547) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x0001ddc4) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x0001ddc4) form_field_slider_wide_pane_t

0x31b9,	// (0x000118f5) input_focus_pane_cp10_ParamLimits

0x31b9,	// (0x000118f5) input_focus_pane_cp10

0xd7a7,	// (0x0001bee3) slider_cont_pane_cp1_ParamLimits

0xd7a7,	// (0x0001bee3) slider_cont_pane_cp1

0xd7bb,	// (0x0001bef7) slider_form_pane_cp

0x3e39,	// (0x00012575) input_focus_pane_g1

0x3e41,	// (0x0001257d) input_focus_pane_g2

0x3e49,	// (0x00012585) input_focus_pane_g3

0x3e51,	// (0x0001258d) input_focus_pane_g4

0x3e59,	// (0x00012595) input_focus_pane_g5

0x3e61,	// (0x0001259d) input_focus_pane_g6

0x3e69,	// (0x000125a5) input_focus_pane_g7

0x3e71,	// (0x000125ad) input_focus_pane_g8

0x3e79,	// (0x000125b5) input_focus_pane_g9

0x2e3a,	// (0x00011576) input_focus_pane_g10

0x0009,

0xf68d,	// (0x0001ddc9) input_focus_pane_g

0x5b06,	// (0x00014242) wait_border_pane_g3_copy1

0xd7c3,	// (0x0001beff) data_form_pane_t1

0x2e3a,	// (0x00011576) wait_anim_pane_g1_copy1

0xe4ac,	// (0x0001cbe8) data_form_wide_pane_t1

0xd7dd,	// (0x0001bf19) list_form_graphic_pane_cp_ParamLimits

0xd7dd,	// (0x0001bf19) list_form_graphic_pane_cp

0x6a47,	// (0x00015183) slider_form_pane_g1

0x6a50,	// (0x0001518c) slider_form_pane_g2

0x0006,

0xf98b,	// (0x0001e0c7) slider_form_pane_g

0xd7f0,	// (0x0001bf2c) list_form_graphic_pane_ParamLimits

0xd7f0,	// (0x0001bf2c) list_form_graphic_pane

0x3ecd,	// (0x00012609) list_form_graphic_pane_g1

0x3ed5,	// (0x00012611) list_form_graphic_pane_t1_ParamLimits

0x3ed5,	// (0x00012611) list_form_graphic_pane_t1

0x2f24,	// (0x00011660) list_highlight_pane_cp5_ParamLimits

0x2f24,	// (0x00011660) list_highlight_pane_cp5

0xd804,	// (0x0001bf40) find_pane_g1

0x3ef3,	// (0x0001262f) input_find_pane

0xd80d,	// (0x0001bf49) input_find_pane_g1_ParamLimits

0xd80d,	// (0x0001bf49) input_find_pane_g1

0xd819,	// (0x0001bf55) input_find_pane_t1_ParamLimits

0xd819,	// (0x0001bf55) input_find_pane_t1

0xd82e,	// (0x0001bf6a) input_find_pane_t2_ParamLimits

0xd82e,	// (0x0001bf6a) input_find_pane_t2

0x0001,

0xf6a2,	// (0x0001ddde) input_find_pane_t_ParamLimits

0xf6a2,	// (0x0001ddde) input_find_pane_t

0x3f32,	// (0x0001266e) input_focus_pane_cp5_ParamLimits

0x3f32,	// (0x0001266e) input_focus_pane_cp5

0x3f4c,	// (0x00012688) bg_popup_window_pane_cp2_ParamLimits

0x3f4c,	// (0x00012688) bg_popup_window_pane_cp2

0x3f59,	// (0x00012695) listscroll_menu_pane_ParamLimits

0x3f59,	// (0x00012695) listscroll_menu_pane

0xd84f,	// (0x0001bf8b) popup_submenu_window_ParamLimits

0xd84f,	// (0x0001bf8b) popup_submenu_window

0x3f8d,	// (0x000126c9) find_popup_pane_g1

0x3f95,	// (0x000126d1) input_popup_find_pane_cp

0x3f32,	// (0x0001266e) input_focus_pane_cp4_ParamLimits

0x3f32,	// (0x0001266e) input_focus_pane_cp4

0x3fad,	// (0x000126e9) input_popup_find_pane_t1_ParamLimits

0x3fad,	// (0x000126e9) input_popup_find_pane_t1

0x2e44,	// (0x00011580) bg_popup_sub_pane_cp

0x3fdb,	// (0x00012717) listscroll_popup_sub_pane

0x3fe3,	// (0x0001271f) list_submenu_pane_ParamLimits

0x3fe3,	// (0x0001271f) list_submenu_pane

0x3ff4,	// (0x00012730) scroll_pane_cp4

0x3ffc,	// (0x00012738) list_single_popup_submenu_pane_ParamLimits

0x3ffc,	// (0x00012738) list_single_popup_submenu_pane

0x400f,	// (0x0001274b) list_single_popup_submenu_pane_g1

0x4017,	// (0x00012753) list_single_popup_submenu_pane_t1_ParamLimits

0x4017,	// (0x00012753) list_single_popup_submenu_pane_t1

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp1_ParamLimits

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp1

0xd885,	// (0x0001bfc1) tabs_2_active_pane_g1

0xd88d,	// (0x0001bfc9) tabs_2_active_pane_t1

0x31b9,	// (0x000118f5) bg_passive_tab_pane_cp1_ParamLimits

0x31b9,	// (0x000118f5) bg_passive_tab_pane_cp1

0xd885,	// (0x0001bfc1) tabs_2_passive_pane_g1

0xd88d,	// (0x0001bfc9) tabs_2_passive_pane_t1

0x2f24,	// (0x00011660) bg_active_tab_pane_cp4

0xd89f,	// (0x0001bfdb) tabs_2_long_active_pane_t1

0x4eb9,	// (0x000135f5) bg_passive_tab_pane_cp4

0x1c5f,	// (0x0001039b) list_single_midp_graphic_pane_g4_ParamLimits

0x2f24,	// (0x00011660) bg_active_tab_pane_cp5

0xd8b2,	// (0x0001bfee) tabs_3_long_active_pane_t1

0x4eb9,	// (0x000135f5) bg_passive_tab_pane_cp5

0x1c5f,	// (0x0001039b) list_single_midp_graphic_pane_g4

0x2f24,	// (0x00011660) bg_popup_window_pane_cp13_ParamLimits

0x2f24,	// (0x00011660) bg_popup_window_pane_cp13

0x408e,	// (0x000127ca) listscroll_popup_fast_pane_ParamLimits

0x408e,	// (0x000127ca) listscroll_popup_fast_pane

0x409d,	// (0x000127d9) grid_popup_fast_pane_ParamLimits

0x409d,	// (0x000127d9) grid_popup_fast_pane

0x40af,	// (0x000127eb) scroll_pane_cp9_ParamLimits

0x40af,	// (0x000127eb) scroll_pane_cp9

0x88e4,	// (0x00017020) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x88e4,	// (0x00017020) list_single_graphic_hl_pane_t1_cp2

0x40d3,	// (0x0001280f) input_focus_pane_cp20_ParamLimits

0x40d3,	// (0x0001280f) input_focus_pane_cp20

0x40e1,	// (0x0001281d) query_popup_data_pane_t1_ParamLimits

0x40e1,	// (0x0001281d) query_popup_data_pane_t1

0x40f4,	// (0x00012830) query_popup_data_pane_t2_ParamLimits

0x40f4,	// (0x00012830) query_popup_data_pane_t2

0x413a,	// (0x00012876) query_popup_data_pane_t3_ParamLimits

0x413a,	// (0x00012876) query_popup_data_pane_t3

0x417b,	// (0x000128b7) query_popup_data_pane_t4_ParamLimits

0x417b,	// (0x000128b7) query_popup_data_pane_t4

0x41b7,	// (0x000128f3) query_popup_data_pane_t5_ParamLimits

0x41b7,	// (0x000128f3) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x0001dde3) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x0001dde3) query_popup_data_pane_t

0x3e39,	// (0x00012575) bg_set_opt_pane_g1

0x3e41,	// (0x0001257d) bg_set_opt_pane_g2

0x3e49,	// (0x00012585) bg_set_opt_pane_g3

0x3e51,	// (0x0001258d) bg_set_opt_pane_g4

0x3e59,	// (0x00012595) bg_set_opt_pane_g5

0x3e61,	// (0x0001259d) bg_set_opt_pane_g6

0x3e69,	// (0x000125a5) bg_set_opt_pane_g7

0x3e71,	// (0x000125ad) bg_set_opt_pane_g8

0x3e79,	// (0x000125b5) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x0001ddee) bg_set_opt_pane_g

0x129f,	// (0x0000f9db) control_top_pane_stacon_ParamLimits

0x129f,	// (0x0000f9db) control_top_pane_stacon

0x12f2,	// (0x0000fa2e) signal_pane_stacon_ParamLimits

0x12f2,	// (0x0000fa2e) signal_pane_stacon

0x4809,	// (0x00012f45) stacon_top_pane_g1_ParamLimits

0x4809,	// (0x00012f45) stacon_top_pane_g1

0x1317,	// (0x0000fa53) title_pane_stacon_ParamLimits

0x1317,	// (0x0000fa53) title_pane_stacon

0x1341,	// (0x0000fa7d) uni_indicator_pane_stacon_ParamLimits

0x1341,	// (0x0000fa7d) uni_indicator_pane_stacon

0x1356,	// (0x0000fa92) battery_pane_stacon_ParamLimits

0x1356,	// (0x0000fa92) battery_pane_stacon

0x139a,	// (0x0000fad6) control_bottom_pane_stacon_ParamLimits

0x139a,	// (0x0000fad6) control_bottom_pane_stacon

0x13bd,	// (0x0000faf9) navi_pane_stacon_ParamLimits

0x13bd,	// (0x0000faf9) navi_pane_stacon

0x482b,	// (0x00012f67) stacon_bottom_pane_g1_ParamLimits

0x482b,	// (0x00012f67) stacon_bottom_pane_g1

0x1000,	// (0x0000f73c) aid_levels_signal_lsc_ParamLimits

0x1000,	// (0x0000f73c) aid_levels_signal_lsc

0x1017,	// (0x0000f753) signal_pane_stacon_g1_ParamLimits

0x1017,	// (0x0000f753) signal_pane_stacon_g1

0x102b,	// (0x0000f767) signal_pane_stacon_g2_ParamLimits

0x102b,	// (0x0000f767) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x0001de01) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x0001de01) signal_pane_stacon_g

0x1060,	// (0x0000f79c) title_pane_stacon_t1_ParamLimits

0x1060,	// (0x0000f79c) title_pane_stacon_t1

0x41fb,	// (0x00012937) uni_indicator_pane_stacon_g1

0x4205,	// (0x00012941) uni_indicator_pane_stacon_g2

0x420f,	// (0x0001294b) uni_indicator_pane_stacon_g3

0x4219,	// (0x00012955) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x0001de0d) uni_indicator_pane_stacon_g

0x1085,	// (0x0000f7c1) control_top_pane_stacon_g1

0x108d,	// (0x0000f7c9) control_top_pane_stacon_t1_ParamLimits

0x108d,	// (0x0000f7c9) control_top_pane_stacon_t1

0x10c4,	// (0x0000f800) aid_levels_battery_lsc_ParamLimits

0x10c4,	// (0x0000f800) aid_levels_battery_lsc

0x10dc,	// (0x0000f818) battery_pane_stacon_g1_ParamLimits

0x10dc,	// (0x0000f818) battery_pane_stacon_g1

0x10ef,	// (0x0000f82b) battery_pane_stacon_g2_ParamLimits

0x10ef,	// (0x0000f82b) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0001de16) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0001de16) battery_pane_stacon_g

0x112d,	// (0x0000f869) navi_icon_pane_stacon

0x1141,	// (0x0000f87d) navi_navi_pane_stacon

0x112d,	// (0x0000f869) navi_text_pane_stacon

0x1085,	// (0x0000f7c1) control_bottom_pane_stacon_g1

0x1155,	// (0x0000f891) control_bottom_pane_stacon_t1_ParamLimits

0x1155,	// (0x0000f891) control_bottom_pane_stacon_t1

0xd8c4,	// (0x0001c000) grid_app_pane_ParamLimits

0xd8c4,	// (0x0001c000) grid_app_pane

0xd8fa,	// (0x0001c036) scroll_pane_cp15_ParamLimits

0xd8fa,	// (0x0001c036) scroll_pane_cp15

0xd913,	// (0x0001c04f) cell_app_pane_ParamLimits

0xd913,	// (0x0001c04f) cell_app_pane

0xd95a,	// (0x0001c096) cell_app_pane_g1_ParamLimits

0xd95a,	// (0x0001c096) cell_app_pane_g1

0x42be,	// (0x000129fa) cell_app_pane_g2_ParamLimits

0x42be,	// (0x000129fa) cell_app_pane_g2

0x0001,

0xf6df,	// (0x0001de1b) cell_app_pane_g_ParamLimits

0xf6df,	// (0x0001de1b) cell_app_pane_g

0xd97a,	// (0x0001c0b6) cell_app_pane_t1_ParamLimits

0xd97a,	// (0x0001c0b6) cell_app_pane_t1

0x42e1,	// (0x00012a1d) grid_highlight_pane_ParamLimits

0x42e1,	// (0x00012a1d) grid_highlight_pane

0x3e39,	// (0x00012575) cell_highlight_pane_g1

0x3e41,	// (0x0001257d) cell_highlight_pane_g2

0x3e49,	// (0x00012585) cell_highlight_pane_g3

0x3e51,	// (0x0001258d) cell_highlight_pane_g4

0x3e59,	// (0x00012595) cell_highlight_pane_g5

0x3e61,	// (0x0001259d) cell_highlight_pane_g6

0x3e69,	// (0x000125a5) cell_highlight_pane_g7

0x3e71,	// (0x000125ad) cell_highlight_pane_g8

0x3e79,	// (0x000125b5) cell_highlight_pane_g9

0x2e3a,	// (0x00011576) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x0001ddc9) cell_highlight_pane_g

0x42f2,	// (0x00012a2e) bg_scroll_pane

0x119f,	// (0x0000f8db) scroll_handle_pane

0x4339,	// (0x00012a75) scroll_bg_pane_g1

0x434e,	// (0x00012a8a) scroll_bg_pane_g2

0x4366,	// (0x00012aa2) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x0001de20) scroll_bg_pane_g

0x437b,	// (0x00012ab7) scroll_handle_focus_pane_ParamLimits

0x437b,	// (0x00012ab7) scroll_handle_focus_pane

0x4339,	// (0x00012a75) scroll_handle_pane_g1

0x4388,	// (0x00012ac4) scroll_handle_pane_g2

0x4366,	// (0x00012aa2) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0001de27) scroll_handle_pane_g

0x3f32,	// (0x0001266e) bg_popup_sub_pane_cp21_ParamLimits

0x3f32,	// (0x0001266e) bg_popup_sub_pane_cp21

0x439c,	// (0x00012ad8) popup_fep_japan_predictive_window_t1_ParamLimits

0x439c,	// (0x00012ad8) popup_fep_japan_predictive_window_t1

0x43b3,	// (0x00012aef) popup_fep_japan_predictive_window_t2_ParamLimits

0x43b3,	// (0x00012aef) popup_fep_japan_predictive_window_t2

0x43e6,	// (0x00012b22) popup_fep_japan_predictive_window_t3_ParamLimits

0x43e6,	// (0x00012b22) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x0001de2e) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x0001de2e) popup_fep_japan_predictive_window_t

0x2e44,	// (0x00011580) bg_popup_sub_pane_cp23

0x441d,	// (0x00012b59) listscroll_japin_cand_pane

0x4425,	// (0x00012b61) popup_fep_japan_candidate_window_t1

0x4433,	// (0x00012b6f) candidate_pane_ParamLimits

0x4433,	// (0x00012b6f) candidate_pane

0x4445,	// (0x00012b81) scroll_pane_cp30

0x444d,	// (0x00012b89) list_single_popup_jap_candidate_pane_ParamLimits

0x444d,	// (0x00012b89) list_single_popup_jap_candidate_pane

0x2e44,	// (0x00011580) list_highlight_pane_cp30

0x4461,	// (0x00012b9d) list_single_popup_jap_candidate_pane_t1

0x4470,	// (0x00012bac) level_1_signal

0x447d,	// (0x00012bb9) level_2_signal

0x448a,	// (0x00012bc6) level_3_signal

0x4497,	// (0x00012bd3) level_4_signal

0x44a4,	// (0x00012be0) level_5_signal

0x44b1,	// (0x00012bed) level_6_signal

0x44be,	// (0x00012bfa) level_7_signal

0x4470,	// (0x00012bac) level_1_battery

0x447d,	// (0x00012bb9) level_2_battery

0x448a,	// (0x00012bc6) level_3_battery

0x4497,	// (0x00012bd3) level_4_battery

0x44a4,	// (0x00012be0) level_5_battery

0x44b1,	// (0x00012bed) level_6_battery

0x44be,	// (0x00012bfa) level_7_battery

0x44e3,	// (0x00012c1f) list_menu_pane_ParamLimits

0x44e3,	// (0x00012c1f) list_menu_pane

0x44f9,	// (0x00012c35) scroll_pane_cp25_ParamLimits

0x44f9,	// (0x00012c35) scroll_pane_cp25

0x4512,	// (0x00012c4e) list_double2_graphic_pane_cp2_ParamLimits

0x4512,	// (0x00012c4e) list_double2_graphic_pane_cp2

0x4512,	// (0x00012c4e) list_double2_large_graphic_pane_cp2_ParamLimits

0x4512,	// (0x00012c4e) list_double2_large_graphic_pane_cp2

0x4512,	// (0x00012c4e) list_double2_pane_cp2_ParamLimits

0x4512,	// (0x00012c4e) list_double2_pane_cp2

0x4512,	// (0x00012c4e) list_double_graphic_pane_cp2_ParamLimits

0x4512,	// (0x00012c4e) list_double_graphic_pane_cp2

0x4512,	// (0x00012c4e) list_double_large_graphic_pane_cp2_ParamLimits

0x4512,	// (0x00012c4e) list_double_large_graphic_pane_cp2

0x4512,	// (0x00012c4e) list_double_number_pane_cp2_ParamLimits

0x4512,	// (0x00012c4e) list_double_number_pane_cp2

0x4512,	// (0x00012c4e) list_double_pane_cp2_ParamLimits

0x4512,	// (0x00012c4e) list_double_pane_cp2

0x4534,	// (0x00012c70) list_single_2graphic_pane_cp2_ParamLimits

0x4534,	// (0x00012c70) list_single_2graphic_pane_cp2

0x4534,	// (0x00012c70) list_single_graphic_heading_pane_cp2_ParamLimits

0x4534,	// (0x00012c70) list_single_graphic_heading_pane_cp2

0x4534,	// (0x00012c70) list_single_graphic_pane_cp2_ParamLimits

0x4534,	// (0x00012c70) list_single_graphic_pane_cp2

0x4534,	// (0x00012c70) list_single_heading_pane_cp2_ParamLimits

0x4534,	// (0x00012c70) list_single_heading_pane_cp2

0x454b,	// (0x00012c87) list_single_large_graphic_pane_cp2_ParamLimits

0x454b,	// (0x00012c87) list_single_large_graphic_pane_cp2

0x4534,	// (0x00012c70) list_single_number_heading_pane_cp2_ParamLimits

0x4534,	// (0x00012c70) list_single_number_heading_pane_cp2

0x4534,	// (0x00012c70) list_single_number_pane_cp2_ParamLimits

0x4534,	// (0x00012c70) list_single_number_pane_cp2

0x4534,	// (0x00012c70) list_single_pane_cp2_ParamLimits

0x4534,	// (0x00012c70) list_single_pane_cp2

0x45c7,	// (0x00012d03) bg_popup_sub_pane_cp22

0x1251,	// (0x0000f98d) popup_side_volume_key_window_g1

0x127b,	// (0x0000f9b7) popup_side_volume_key_window_t1

0x1297,	// (0x0000f9d3) volume_small_pane_cp1

0x31b9,	// (0x000118f5) bg_popup_sub_pane_cp24_ParamLimits

0x31b9,	// (0x000118f5) bg_popup_sub_pane_cp24

0x45dd,	// (0x00012d19) fep_china_uni_candidate_pane_ParamLimits

0x45dd,	// (0x00012d19) fep_china_uni_candidate_pane

0x45f1,	// (0x00012d2d) fep_china_uni_entry_pane

0x4601,	// (0x00012d3d) popup_fep_china_uni_window_g1

0x461d,	// (0x00012d59) fep_china_uni_entry_pane_g1

0x4625,	// (0x00012d61) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x0001de5f) fep_china_uni_entry_pane_g

0x462d,	// (0x00012d69) fep_entry_item_pane

0x4637,	// (0x00012d73) fep_candidate_item_pane

0x463f,	// (0x00012d7b) fep_china_uni_candidate_pane_g1

0x4647,	// (0x00012d83) fep_china_uni_candidate_pane_g2

0x464f,	// (0x00012d8b) fep_china_uni_candidate_pane_g3

0x4657,	// (0x00012d93) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x0001de64) fep_china_uni_candidate_pane_g

0x2e3a,	// (0x00011576) fep_entry_item_pane_g1

0x465f,	// (0x00012d9b) fep_entry_item_pane_t1_ParamLimits

0x465f,	// (0x00012d9b) fep_entry_item_pane_t1

0x4675,	// (0x00012db1) fep_candidate_item_pane_t1_ParamLimits

0x4675,	// (0x00012db1) fep_candidate_item_pane_t1

0x468a,	// (0x00012dc6) fep_candidate_item_pane_t2_ParamLimits

0x468a,	// (0x00012dc6) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x0001de6d) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x0001de6d) fep_candidate_item_pane_t

0x2f24,	// (0x00011660) list_highlight_pane_cp31_ParamLimits

0x2f24,	// (0x00011660) list_highlight_pane_cp31

0x469c,	// (0x00012dd8) level_1_signal_lsc

0x46a5,	// (0x00012de1) level_2_signal_lsc

0x46ae,	// (0x00012dea) level_3_signal_lsc

0x46b7,	// (0x00012df3) level_4_signal_lsc

0x46c0,	// (0x00012dfc) level_5_signal_lsc

0x46c9,	// (0x00012e05) level_6_signal_lsc

0x46d2,	// (0x00012e0e) level_7_signal_lsc

0x46d2,	// (0x00012e0e) level_1_battery_lsc

0x46db,	// (0x00012e17) level_2_battery_lsc

0x46e4,	// (0x00012e20) level_3_battery_lsc

0x46ed,	// (0x00012e29) level_4_battery_lsc

0x46f6,	// (0x00012e32) level_5_battery_lsc

0x46ff,	// (0x00012e3b) level_6_battery_lsc

0x469c,	// (0x00012dd8) level_7_battery_lsc

0x4708,	// (0x00012e44) scroll_handle_focus_pane_g1

0x4711,	// (0x00012e4d) scroll_handle_focus_pane_g2

0x471a,	// (0x00012e56) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x0001de72) scroll_handle_focus_pane_g

0xda0c,	// (0x0001c148) list_single_2graphic_pane_g1_ParamLimits

0xda0c,	// (0x0001c148) list_single_2graphic_pane_g1

0xd3a6,	// (0x0001bae2) list_single_2graphic_pane_g2_ParamLimits

0xd3a6,	// (0x0001bae2) list_single_2graphic_pane_g2

0x5373,	// (0x00013aaf) list_single_2graphic_pane_g3_ParamLimits

0x5373,	// (0x00013aaf) list_single_2graphic_pane_g3

0xda18,	// (0x0001c154) list_single_2graphic_pane_g4_ParamLimits

0xda18,	// (0x0001c154) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0001de79) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0001de79) list_single_2graphic_pane_g

0xda29,	// (0x0001c165) list_single_2graphic_pane_t1_ParamLimits

0xda29,	// (0x0001c165) list_single_2graphic_pane_t1

0xda57,	// (0x0001c193) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xda57,	// (0x0001c193) list_double2_graphic_large_graphic_pane_g1

0xd3e3,	// (0x0001bb1f) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd3e3,	// (0x0001bb1f) list_double2_graphic_large_graphic_pane_g2

0xd3f4,	// (0x0001bb30) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd3f4,	// (0x0001bb30) list_double2_graphic_large_graphic_pane_g3

0xda69,	// (0x0001c1a5) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xda69,	// (0x0001c1a5) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x0001de82) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x0001de82) list_double2_graphic_large_graphic_pane_g

0xda75,	// (0x0001c1b1) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xda75,	// (0x0001c1b1) list_double2_graphic_large_graphic_pane_t1

0xda8b,	// (0x0001c1c7) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xda8b,	// (0x0001c1c7) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x0001de8b) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x0001de8b) list_double2_graphic_large_graphic_pane_t

0x48f6,	// (0x00013032) popup_fast_swap_window_ParamLimits

0x48f6,	// (0x00013032) popup_fast_swap_window

0x4912,	// (0x0001304e) popup_side_volume_key_window

0x492c,	// (0x00013068) stacon_top_pane

0x4936,	// (0x00013072) status_pane_ParamLimits

0x4936,	// (0x00013072) status_pane

0x492c,	// (0x00013068) status_small_pane

0x2e44,	// (0x00011580) control_pane

0x2e44,	// (0x00011580) stacon_bottom_pane

0x3c1c,	// (0x00012358) scroll_pane_cp121

0x3c13,	// (0x0001234f) set_content_pane

0xda9d,	// (0x0001c1d9) bg_active_tab_pane_g1_cp1

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp1

0xdaa6,	// (0x0001c1e2) bg_active_tab_pane_g3_cp1

0xda9d,	// (0x0001c1d9) bg_passive_tab_pane_g1_cp1

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp1

0xdaa6,	// (0x0001c1e2) bg_passive_tab_pane_g3_cp1

0xdaaf,	// (0x0001c1eb) bg_active_tab_pane_g1_cp2

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp2

0xdab8,	// (0x0001c1f4) bg_active_tab_pane_g3_cp2

0xdaaf,	// (0x0001c1eb) bg_passive_tab_pane_g1_cp2

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp2

0xdab8,	// (0x0001c1f4) bg_passive_tab_pane_g3_cp2

0xdac1,	// (0x0001c1fd) bg_active_tab_pane_g1_cp3

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp3

0xdaca,	// (0x0001c206) bg_active_tab_pane_g3_cp3

0xdac1,	// (0x0001c1fd) bg_passive_tab_pane_g1_cp3

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp3

0xdaca,	// (0x0001c206) bg_passive_tab_pane_g3_cp3

0xdad3,	// (0x0001c20f) bg_active_tab_pane_g1_cp4

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp4

0xdadc,	// (0x0001c218) bg_active_tab_pane_g3_cp4

0xdad3,	// (0x0001c20f) bg_passive_tab_pane_g1_cp4

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp4

0xdadc,	// (0x0001c218) bg_passive_tab_pane_g3_cp4

0x4847,	// (0x00012f83) bg_active_tab_pane_g1_cp5

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp5

0x4850,	// (0x00012f8c) bg_active_tab_pane_g3_cp5

0x4847,	// (0x00012f83) bg_passive_tab_pane_g1_cp5

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp5

0x4850,	// (0x00012f8c) bg_passive_tab_pane_g3_cp5

0x7188,	// (0x000158c4) list_set_graphic_pane_ParamLimits

0x7188,	// (0x000158c4) list_set_graphic_pane

0x2e44,	// (0x00011580) bg_set_opt_pane_cp4

0x4877,	// (0x00012fb3) list_set_graphic_pane_g1_ParamLimits

0x4877,	// (0x00012fb3) list_set_graphic_pane_g1

0x4883,	// (0x00012fbf) list_set_graphic_pane_g2_ParamLimits

0x4883,	// (0x00012fbf) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x0001de90) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x0001de90) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x0001e218) volume_small_pane_cp_g

0xdae5,	// (0x0001c221) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xdae5,	// (0x0001c221) list_double2_large_graphic_pane_g1_cp2

0xdaf3,	// (0x0001c22f) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xdaf3,	// (0x0001c22f) list_double2_large_graphic_pane_g2_cp2

0x48c6,	// (0x00013002) list_double2_large_graphic_pane_g3_cp2

0x48ce,	// (0x0001300a) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x48ce,	// (0x0001300a) list_double2_large_graphic_pane_t1_cp2

0x48e4,	// (0x00013020) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x48e4,	// (0x00013020) list_double2_large_graphic_pane_t2_cp2

0xe27a,	// (0x0001c9b6) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xe27a,	// (0x0001c9b6) list_double_large_graphic_pane_g1_cp2

0xe28d,	// (0x0001c9c9) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xe28d,	// (0x0001c9c9) list_double_large_graphic_pane_g2_cp2

0x4a54,	// (0x00013190) list_double_large_graphic_pane_g3_cp2

0x65eb,	// (0x00014d27) list_double_large_graphic_pane_g4_cp

0x65f3,	// (0x00014d2f) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x65f3,	// (0x00014d2f) list_double_large_graphic_pane_t1_cp2

0x660a,	// (0x00014d46) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x660a,	// (0x00014d46) list_double_large_graphic_pane_t2_cp2

0xdb04,	// (0x0001c240) list_double2_graphic_pane_g1_cp2_ParamLimits

0xdb04,	// (0x0001c240) list_double2_graphic_pane_g1_cp2

0xdb12,	// (0x0001c24e) list_double2_graphic_pane_g2_cp2_ParamLimits

0xdb12,	// (0x0001c24e) list_double2_graphic_pane_g2_cp2

0xdb23,	// (0x0001c25f) list_double2_graphic_pane_g3_cp2

0x496d,	// (0x000130a9) list_double2_graphic_pane_t1_cp2_ParamLimits

0x496d,	// (0x000130a9) list_double2_graphic_pane_t1_cp2

0x4983,	// (0x000130bf) list_double2_graphic_pane_t2_cp2_ParamLimits

0x4983,	// (0x000130bf) list_double2_graphic_pane_t2_cp2

0x4995,	// (0x000130d1) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4995,	// (0x000130d1) list_single_number_heading_pane_g1_cp2

0x49a1,	// (0x000130dd) list_single_number_heading_pane_g2_cp2

0x49a9,	// (0x000130e5) list_single_number_heading_pane_t1_cp2_ParamLimits

0x49a9,	// (0x000130e5) list_single_number_heading_pane_t1_cp2

0xdb2d,	// (0x0001c269) list_single_number_heading_pane_t2_cp2_ParamLimits

0xdb2d,	// (0x0001c269) list_single_number_heading_pane_t2_cp2

0x49d3,	// (0x0001310f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x49d3,	// (0x0001310f) list_single_number_heading_pane_t3_cp2

0x4995,	// (0x000130d1) list_single_heading_pane_g1_cp2_ParamLimits

0x4995,	// (0x000130d1) list_single_heading_pane_g1_cp2

0x49a1,	// (0x000130dd) list_single_heading_pane_g2_cp2

0x49a9,	// (0x000130e5) list_single_heading_pane_t1_cp2_ParamLimits

0x49a9,	// (0x000130e5) list_single_heading_pane_t1_cp2

0xe266,	// (0x0001c9a2) list_single_heading_pane_t2_cp2_ParamLimits

0xe266,	// (0x0001c9a2) list_single_heading_pane_t2_cp2

0x5367,	// (0x00013aa3) list_double_graphic_pane_g1_cp2_ParamLimits

0x5367,	// (0x00013aa3) list_double_graphic_pane_g1_cp2

0x6323,	// (0x00014a5f) list_double_graphic_pane_g2_cp2_ParamLimits

0x6323,	// (0x00014a5f) list_double_graphic_pane_g2_cp2

0x6332,	// (0x00014a6e) list_double_graphic_pane_g3_cp2

0x633a,	// (0x00014a76) list_double_graphic_pane_t1_cp2_ParamLimits

0x633a,	// (0x00014a76) list_double_graphic_pane_t1_cp2

0x6350,	// (0x00014a8c) list_double_graphic_pane_t2_cp2_ParamLimits

0x6350,	// (0x00014a8c) list_double_graphic_pane_t2_cp2

0x4a48,	// (0x00013184) list_double_number_pane_g1_cp2_ParamLimits

0x4a48,	// (0x00013184) list_double_number_pane_g1_cp2

0x4a54,	// (0x00013190) list_double_number_pane_g2_cp2

0xe252,	// (0x0001c98e) list_double_number_pane_t1_cp2_ParamLimits

0xe252,	// (0x0001c98e) list_double_number_pane_t1_cp2

0x62fb,	// (0x00014a37) list_double_number_pane_t2_cp2_ParamLimits

0x62fb,	// (0x00014a37) list_double_number_pane_t2_cp2

0x6311,	// (0x00014a4d) list_double_number_pane_t3_cp2_ParamLimits

0x6311,	// (0x00014a4d) list_double_number_pane_t3_cp2

0xe1a0,	// (0x0001c8dc) list_single_graphic_pane_g1_cp2_ParamLimits

0xe1a0,	// (0x0001c8dc) list_single_graphic_pane_g1_cp2

0x4aac,	// (0x000131e8) list_single_graphic_pane_g2_cp2_ParamLimits

0x4aac,	// (0x000131e8) list_single_graphic_pane_g2_cp2

0x4ab8,	// (0x000131f4) list_single_graphic_pane_g3_cp2

0x61a6,	// (0x000148e2) list_single_graphic_pane_t1_cp2_ParamLimits

0x61a6,	// (0x000148e2) list_single_graphic_pane_t1_cp2

0x4aac,	// (0x000131e8) list_single_number_pane_g1_cp2_ParamLimits

0x4aac,	// (0x000131e8) list_single_number_pane_g1_cp2

0x4ab8,	// (0x000131f4) list_single_number_pane_g2_cp2

0x61a6,	// (0x000148e2) list_single_number_pane_t1_cp2_ParamLimits

0x61a6,	// (0x000148e2) list_single_number_pane_t1_cp2

0xe18c,	// (0x0001c8c8) list_single_number_pane_t2_cp2_ParamLimits

0xe18c,	// (0x0001c8c8) list_single_number_pane_t2_cp2

0xdaf3,	// (0x0001c22f) list_double2_pane_g1_cp2_ParamLimits

0xdaf3,	// (0x0001c22f) list_double2_pane_g1_cp2

0x48c6,	// (0x00013002) list_double2_pane_g2_cp2

0x4a20,	// (0x0001315c) list_double2_pane_t1_cp2_ParamLimits

0x4a20,	// (0x0001315c) list_double2_pane_t1_cp2

0x4a36,	// (0x00013172) list_double2_pane_t2_cp2_ParamLimits

0x4a36,	// (0x00013172) list_double2_pane_t2_cp2

0x4a48,	// (0x00013184) list_double_pane_g1_cp2_ParamLimits

0x4a48,	// (0x00013184) list_double_pane_g1_cp2

0x4a54,	// (0x00013190) list_double_pane_g2_cp2

0x4a5c,	// (0x00013198) list_double_pane_t1_cp2_ParamLimits

0x4a5c,	// (0x00013198) list_double_pane_t1_cp2

0x4a72,	// (0x000131ae) list_double_pane_t2_cp2_ParamLimits

0x4a72,	// (0x000131ae) list_double_pane_t2_cp2

0x4a9c,	// (0x000131d8) list_single_pane_cp2_g3

0x4aac,	// (0x000131e8) list_single_pane_g1_cp2_ParamLimits

0x4aac,	// (0x000131e8) list_single_pane_g1_cp2

0x4ab8,	// (0x000131f4) list_single_pane_g2_cp2

0x4ac0,	// (0x000131fc) list_single_pane_t1_cp2_ParamLimits

0x4ac0,	// (0x000131fc) list_single_pane_t1_cp2

0xdb59,	// (0x0001c295) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xdb59,	// (0x0001c295) list_single_large_graphic_pane_g1_cp2

0x4ae6,	// (0x00013222) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x4ae6,	// (0x00013222) list_single_large_graphic_pane_g2_cp2

0x4af2,	// (0x0001322e) list_single_large_graphic_pane_g3_cp2

0x4afa,	// (0x00013236) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x4afa,	// (0x00013236) list_single_large_graphic_pane_g4_cp1

0x4b14,	// (0x00013250) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x4b14,	// (0x00013250) list_single_large_graphic_pane_t1_cp2

0x6170,	// (0x000148ac) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x6170,	// (0x000148ac) list_single_graphic_heading_pane_g1_cp2

0xe167,	// (0x0001c8a3) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xe167,	// (0x0001c8a3) list_single_graphic_heading_pane_g4_cp2

0x4ab8,	// (0x000131f4) list_single_graphic_heading_pane_g5_cp2

0x617c,	// (0x000148b8) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x617c,	// (0x000148b8) list_single_graphic_heading_pane_t1_cp2

0xe178,	// (0x0001c8b4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xe178,	// (0x0001c8b4) list_single_graphic_heading_pane_t2_cp2

0x6131,	// (0x0001486d) list_single_2graphic_pane_g1_cp2_ParamLimits

0x6131,	// (0x0001486d) list_single_2graphic_pane_g1_cp2

0xe167,	// (0x0001c8a3) list_single_2graphic_pane_g2_cp2_ParamLimits

0xe167,	// (0x0001c8a3) list_single_2graphic_pane_g2_cp2

0x4ab8,	// (0x000131f4) list_single_2graphic_pane_g3_cp2

0x614e,	// (0x0001488a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x614e,	// (0x0001488a) list_single_2graphic_pane_g4_cp2

0x615a,	// (0x00014896) list_single_2graphic_pane_t1_cp2_ParamLimits

0x615a,	// (0x00014896) list_single_2graphic_pane_t1_cp2

0x2e3a,	// (0x00011576) list_highlight_pane_g10_cp1

0x5d19,	// (0x00014455) list_highlight_pane_g1_cp1

0x5d21,	// (0x0001445d) list_highlight_pane_g2_cp1

0x5d29,	// (0x00014465) list_highlight_pane_g3_cp1

0x5d31,	// (0x0001446d) list_highlight_pane_g4_cp1

0x5d39,	// (0x00014475) list_highlight_pane_g5_cp1

0x5d41,	// (0x0001447d) list_highlight_pane_g6_cp1

0x5d49,	// (0x00014485) list_highlight_pane_g7_cp1

0x5d51,	// (0x0001448d) list_highlight_pane_g8_cp1

0x5d59,	// (0x00014495) list_highlight_pane_g9_cp1

0xe129,	// (0x0001c865) form_field_slider_pane_t3

0xe139,	// (0x0001c875) form_field_slider_pane_t4

0x5c4d,	// (0x00014389) slider_form_pane_ParamLimits

0x5c4d,	// (0x00014389) slider_form_pane

0x2e44,	// (0x00011580) control_abbreviations

0x2e44,	// (0x00011580) control_conventions

0x2e44,	// (0x00011580) control_definitions

0x2e44,	// (0x00011580) format_table_attribute

0x641b,	// (0x00014b57) bg_popup_preview_window_pane_g9

0x2e44,	// (0x00011580) format_table_data2

0x2e44,	// (0x00011580) format_table_data3

0x2e44,	// (0x00011580) format_table_data_example

0x0008,

0x2e44,	// (0x00011580) intro_purpose

0xf8eb,	// (0x0001e027) bg_popup_preview_window_pane_g

0x2e44,	// (0x00011580) texts_category

0x2e44,	// (0x00011580) texts_graphics

0x4b2a,	// (0x00013266) text_digital

0x4b39,	// (0x00013275) text_primary

0x4b48,	// (0x00013284) text_primary_small

0x4b57,	// (0x00013293) text_secondary

0x4b66,	// (0x000132a2) text_title

0x6c67,	// (0x000153a3) bg_passive_tab_pane_g1_cp3_srt

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp3_srt

0x6c70,	// (0x000153ac) bg_passive_tab_pane_g3_cp3_srt

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp3_srt_ParamLimits

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp3_srt

0x6c79,	// (0x000153b5) tabs_4_active_pane_srt_g1

0xe56e,	// (0x0001ccaa) tabs_4_active_pane_srt_t1_ParamLimits

0xe56e,	// (0x0001ccaa) tabs_4_active_pane_srt_t1

0x6c67,	// (0x000153a3) bg_active_tab_pane_g1_cp3_copy1

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp3_copy1

0x6c70,	// (0x000153ac) bg_active_tab_pane_g3_cp3_copy1

0x2f24,	// (0x00011660) tabs_2_long_active_pane_srt_ParamLimits

0x2f24,	// (0x00011660) tabs_2_long_active_pane_srt

0x2f24,	// (0x00011660) tabs_2_long_passive_pane_srt_ParamLimits

0x2f24,	// (0x00011660) tabs_2_long_passive_pane_srt

0x4eb9,	// (0x000135f5) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4eb9,	// (0x000135f5) bg_passive_tab_pane_cp4_srt

0x6888,	// (0x00014fc4) bg_passive_tab_pane_g1_cp4_srt

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp4_srt

0x6891,	// (0x00014fcd) bg_passive_tab_pane_g3_cp4_srt

0x2f24,	// (0x00011660) bg_active_tab_pane_cp4_srt_ParamLimits

0x2f24,	// (0x00011660) bg_active_tab_pane_cp4_srt

0xe343,	// (0x0001ca7f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xe343,	// (0x0001ca7f) tabs_2_long_active_pane_srt_t1

0x6888,	// (0x00014fc4) bg_active_tab_pane_g1_cp4_srt

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp4_srt

0x6891,	// (0x00014fcd) bg_active_tab_pane_g3_cp4_srt

0x31b9,	// (0x000118f5) tabs_3_long_active_pane_srt_ParamLimits

0x31b9,	// (0x000118f5) tabs_3_long_active_pane_srt

0x31b9,	// (0x000118f5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x31b9,	// (0x000118f5) tabs_3_long_passive_pane_cp_srt

0x31b9,	// (0x000118f5) tabs_3_long_passive_pane_srt_ParamLimits

0x31b9,	// (0x000118f5) tabs_3_long_passive_pane_srt

0x4eb9,	// (0x000135f5) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4eb9,	// (0x000135f5) bg_passive_tab_pane_cp5_srt

0x4847,	// (0x00012f83) bg_passive_tab_pane_g1_cp5_srt

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp5_srt

0x4850,	// (0x00012f8c) bg_passive_tab_pane_g3_cp5_srt

0x2f24,	// (0x00011660) bg_active_tab_pane_cp5_srt_ParamLimits

0x2f24,	// (0x00011660) bg_active_tab_pane_cp5_srt

0xe32d,	// (0x0001ca69) tabs_3_long_active_pane_srt_t1_ParamLimits

0xe32d,	// (0x0001ca69) tabs_3_long_active_pane_srt_t1

0x4847,	// (0x00012f83) bg_active_tab_pane_g1_cp5_srt

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp5_srt

0x4850,	// (0x00012f8c) bg_active_tab_pane_g3_cp5_srt

0x6868,	// (0x00014fa4) navi_text_pane_srt_t1

0x6860,	// (0x00014f9c) navi_icon_pane_srt_g1

0x4d29,	// (0x00013465) midp_editing_number_pane_srt

0x4b75,	// (0x000132b1) midp_ticker_pane_srt

0x4d31,	// (0x0001346d) midp_ticker_pane_srt_g1

0x4d39,	// (0x00013475) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x0001deaf) midp_ticker_pane_srt_g

0x4d41,	// (0x0001347d) midp_ticker_pane_srt_t1

0x6851,	// (0x00014f8d) midp_editing_number_pane_t1_copy1

0x4eb9,	// (0x000135f5) listscroll_midp_pane

0x4eb9,	// (0x000135f5) midp_form_pane

0x4be1,	// (0x0001331d) midp_info_popup_window_ParamLimits

0x4be1,	// (0x0001331d) midp_info_popup_window

0x3f32,	// (0x0001266e) bg_popup_sub_pane_cp50_ParamLimits

0x3f32,	// (0x0001266e) bg_popup_sub_pane_cp50

0x594e,	// (0x0001408a) listscroll_midp_info_pane_ParamLimits

0x594e,	// (0x0001408a) listscroll_midp_info_pane

0x5936,	// (0x00014072) listscroll_form_midp_pane_ParamLimits

0x5936,	// (0x00014072) listscroll_form_midp_pane

0x5942,	// (0x0001407e) scroll_bar_cp050

0xe11d,	// (0x0001c859) list_midp_pane

0x7922,	// (0x0001605e) signal_pane_g2_cp

0x5850,	// (0x00013f8c) listscroll_midp_info_pane_t1_ParamLimits

0x5850,	// (0x00013f8c) listscroll_midp_info_pane_t1

0x5868,	// (0x00013fa4) listscroll_midp_info_pane_t2_ParamLimits

0x5868,	// (0x00013fa4) listscroll_midp_info_pane_t2

0x58a6,	// (0x00013fe2) listscroll_midp_info_pane_t3_ParamLimits

0x58a6,	// (0x00013fe2) listscroll_midp_info_pane_t3

0x58e0,	// (0x0001401c) listscroll_midp_info_pane_t4_ParamLimits

0x58e0,	// (0x0001401c) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x0001df62) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x0001df62) listscroll_midp_info_pane_t

0x3ff4,	// (0x00012730) scroll_pane_cp21

0x57f4,	// (0x00013f30) form_midp_field_choice_group_pane

0x57fd,	// (0x00013f39) form_midp_field_text_pane

0x5836,	// (0x00013f72) form_midp_field_time_pane

0x583e,	// (0x00013f7a) form_midp_gauge_slider_pane

0x5847,	// (0x00013f83) form_midp_gauge_wait_pane

0x2e44,	// (0x00011580) form_midp_image_pane

0xe101,	// (0x0001c83d) list_single_midp_pane_ParamLimits

0xe101,	// (0x0001c83d) list_single_midp_pane

0xe0dd,	// (0x0001c819) form_midp_field_text_pane_t1

0x550b,	// (0x00013c47) input_focus_pane_cp050

0x57a7,	// (0x00013ee3) list_midp_form_text_pane

0x5737,	// (0x00013e73) form_midp_field_choice_group_pane_t1

0x5745,	// (0x00013e81) input_focus_pane_cp051

0x5759,	// (0x00013e95) list_midp_choice_pane

0x2e44,	// (0x00011580) status_idle_pane

0x571b,	// (0x00013e57) form_midp_field_time_pane_t1

0x2e3a,	// (0x00011576) wait_anim_pane_g2_copy1

0x5729,	// (0x00013e65) form_midp_field_time_pane_t2

0x0001,

0x4c91,	// (0x000133cd) aid_navinavi_width_2_pane

0xf821,	// (0x0001df5d) form_midp_field_time_pane_t

0x2e44,	// (0x00011580) input_focus_pane_cp052

0x2e44,	// (0x00011580) bg_input_focus_pane_cp040

0x56db,	// (0x00013e17) form_midp_gauge_slider_pane_t1

0x56e9,	// (0x00013e25) form_midp_gauge_slider_pane_t2

0xe0bd,	// (0x0001c7f9) form_midp_gauge_slider_pane_t3

0xe0cd,	// (0x0001c809) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x0001df54) form_midp_gauge_slider_pane_t

0x5713,	// (0x00013e4f) form_midp_slider_pane

0x2f24,	// (0x00011660) bg_input_focus_pane_cp041_ParamLimits

0x2f24,	// (0x00011660) bg_input_focus_pane_cp041

0x56a8,	// (0x00013de4) form_midp_gauge_wait_pane_t1_ParamLimits

0x56a8,	// (0x00013de4) form_midp_gauge_wait_pane_t1

0x56ba,	// (0x00013df6) form_midp_gauge_wait_pane_t2_ParamLimits

0x56ba,	// (0x00013df6) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x0001df4f) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x0001df4f) form_midp_gauge_wait_pane_t

0x56cc,	// (0x00013e08) form_midp_wait_pane_ParamLimits

0x56cc,	// (0x00013e08) form_midp_wait_pane

0x5672,	// (0x00013dae) form_midp_image_pane_g1

0x567b,	// (0x00013db7) form_midp_image_pane_t1

0x568a,	// (0x00013dc6) form_midp_image_pane_t2

0x5699,	// (0x00013dd5) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x0001df48) form_midp_image_pane_t

0x565a,	// (0x00013d96) list_single_midp_pane_g1

0x5663,	// (0x00013d9f) list_single_midp_pane_t1

0xe0a6,	// (0x0001c7e2) list_midp_form_item_pane_ParamLimits

0xe0a6,	// (0x0001c7e2) list_midp_form_item_pane

0x4c39,	// (0x00013375) list_midp_form_item_pane_t1

0x4c48,	// (0x00013384) midp_ticker_pane_g1

0x4c54,	// (0x00013390) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x0001de95) midp_ticker_pane_g

0x4c60,	// (0x0001339c) midp_ticker_pane_t1

0x6ac7,	// (0x00015203) midp_editing_number_pane_t1

0x6aa5,	// (0x000151e1) midp_editing_number_pane

0x6ab4,	// (0x000151f0) midp_ticker_pane

0x6819,	// (0x00014f55) ai_message_heading_pane

0x2e44,	// (0x00011580) bg_popup_window_pane_cp14

0x6821,	// (0x00014f5d) listscroll_ai_message_pane

0x67a3,	// (0x00014edf) ai_message_heading_pane_g1_ParamLimits

0x67a3,	// (0x00014edf) ai_message_heading_pane_g1

0x67af,	// (0x00014eeb) ai_message_heading_pane_g2_ParamLimits

0x67af,	// (0x00014eeb) ai_message_heading_pane_g2

0x67bb,	// (0x00014ef7) ai_message_heading_pane_g3_ParamLimits

0x67bb,	// (0x00014ef7) ai_message_heading_pane_g3

0x67c7,	// (0x00014f03) ai_message_heading_pane_g4_ParamLimits

0x67c7,	// (0x00014f03) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x0001e089) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x0001e089) ai_message_heading_pane_g

0x67d3,	// (0x00014f0f) ai_message_heading_pane_t1_ParamLimits

0x67d3,	// (0x00014f0f) ai_message_heading_pane_t1

0x67ed,	// (0x00014f29) ai_message_heading_pane_t2_ParamLimits

0x67ed,	// (0x00014f29) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x0001e092) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x0001e092) ai_message_heading_pane_t

0x67ff,	// (0x00014f3b) bg_popup_heading_pane_cp1_ParamLimits

0x67ff,	// (0x00014f3b) bg_popup_heading_pane_cp1

0x6791,	// (0x00014ecd) list_ai_message_pane_ParamLimits

0x6791,	// (0x00014ecd) list_ai_message_pane

0x3ff4,	// (0x00012730) scroll_pane_cp10

0x672d,	// (0x00014e69) list_ai_message_pane_g1

0x6735,	// (0x00014e71) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x0001e066) list_ai_message_pane_g

0x673d,	// (0x00014e79) list_ai_message_pane_t1_ParamLimits

0x673d,	// (0x00014e79) list_ai_message_pane_t1

0x6752,	// (0x00014e8e) list_ai_message_pane_t2_ParamLimits

0x6752,	// (0x00014e8e) list_ai_message_pane_t2

0x6767,	// (0x00014ea3) list_ai_message_pane_t3_ParamLimits

0x6767,	// (0x00014ea3) list_ai_message_pane_t3

0x677c,	// (0x00014eb8) list_ai_message_pane_t4_ParamLimits

0x677c,	// (0x00014eb8) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x0001e06b) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x0001e06b) list_ai_message_pane_t

0xe2f6,	// (0x0001ca32) cell_ai_soft_ind_pane_ParamLimits

0xe2f6,	// (0x0001ca32) cell_ai_soft_ind_pane

0x4c72,	// (0x000133ae) cell_ai_soft_ind_pane_g1_ParamLimits

0x4c72,	// (0x000133ae) cell_ai_soft_ind_pane_g1

0x2e44,	// (0x00011580) grid_highlight_cp1

0x4c7f,	// (0x000133bb) text_secondary_cp56_ParamLimits

0x4c7f,	// (0x000133bb) text_secondary_cp56

0x66ec,	// (0x00014e28) example_general_pane_ParamLimits

0x66ec,	// (0x00014e28) example_general_pane

0x66f8,	// (0x00014e34) example_parent_pane_g1_ParamLimits

0x66f8,	// (0x00014e34) example_parent_pane_g1

0x6704,	// (0x00014e40) example_parent_pane_t1_ParamLimits

0x6704,	// (0x00014e40) example_parent_pane_t1

0xb752,	// (0x00019e8e) popup_preview_text_window_ParamLimits

0xb752,	// (0x00019e8e) popup_preview_text_window

0x4aa4,	// (0x000131e0) list_single_pane_cp2_g4

0x3263,	// (0x0001199f) bg_popup_preview_window_pane_ParamLimits

0x3263,	// (0x0001199f) bg_popup_preview_window_pane

0x6423,	// (0x00014b5f) popup_preview_text_window_t1_ParamLimits

0x6423,	// (0x00014b5f) popup_preview_text_window_t1

0x6441,	// (0x00014b7d) popup_preview_text_window_t2_ParamLimits

0x6441,	// (0x00014b7d) popup_preview_text_window_t2

0x648a,	// (0x00014bc6) popup_preview_text_window_t3_ParamLimits

0x648a,	// (0x00014bc6) popup_preview_text_window_t3

0x64cf,	// (0x00014c0b) popup_preview_text_window_t4_ParamLimits

0x64cf,	// (0x00014c0b) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x0001e03a) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x0001e03a) popup_preview_text_window_t

0x654d,	// (0x00014c89) scroll_pane_cp11

0x53f1,	// (0x00013b2d) bg_popup_preview_window_pane_g1

0x63e3,	// (0x00014b1f) bg_popup_preview_window_pane_g2

0x63eb,	// (0x00014b27) bg_popup_preview_window_pane_g3

0x63f3,	// (0x00014b2f) bg_popup_preview_window_pane_g4

0x63fb,	// (0x00014b37) bg_popup_preview_window_pane_g5

0x6403,	// (0x00014b3f) bg_popup_preview_window_pane_g6

0x640b,	// (0x00014b47) bg_popup_preview_window_pane_g7

0x6413,	// (0x00014b4f) bg_popup_preview_window_pane_g8

0x0ba4,	// (0x0000f2e0) aid_popup_width_pane

0xb6ce,	// (0x00019e0a) popup_midp_note_alarm_window_ParamLimits

0xb6ce,	// (0x00019e0a) popup_midp_note_alarm_window

0x3ccd,	// (0x00012409) data_form_pane_ParamLimits

0xd720,	// (0x0001be5c) form_field_data_pane_g1

0xd72a,	// (0x0001be66) form_field_data_pane_t1_ParamLimits

0x3cfd,	// (0x00012439) input_focus_pane_ParamLimits

0x3d0b,	// (0x00012447) data_form_wide_pane_ParamLimits

0x3d17,	// (0x00012453) form_field_data_wide_pane_g1

0x3d43,	// (0x0001247f) form_field_data_wide_pane_t1_ParamLimits

0x3502,	// (0x00011c3e) input_focus_pane_cp6_ParamLimits

0xd877,	// (0x0001bfb3) input_popup_find_pane_g1_ParamLimits

0xd877,	// (0x0001bfb3) input_popup_find_pane_g1

0x1100,	// (0x0000f83c) aid_navi_side_left_pane

0x1115,	// (0x0000f851) aid_navi_side_right_pane

0x5e14,	// (0x00014550) bg_popup_window_pane_cp30_ParamLimits

0x5e14,	// (0x00014550) bg_popup_window_pane_cp30

0x5e8e,	// (0x000145ca) popup_midp_note_alarm_window_g1_ParamLimits

0x5e8e,	// (0x000145ca) popup_midp_note_alarm_window_g1

0x5ebe,	// (0x000145fa) popup_midp_note_alarm_window_t1_ParamLimits

0x5ebe,	// (0x000145fa) popup_midp_note_alarm_window_t1

0x5f5f,	// (0x0001469b) popup_midp_note_alarm_window_t2_ParamLimits

0x5f5f,	// (0x0001469b) popup_midp_note_alarm_window_t2

0x600d,	// (0x00014749) popup_midp_note_alarm_window_t3_ParamLimits

0x600d,	// (0x00014749) popup_midp_note_alarm_window_t3

0x6035,	// (0x00014771) popup_midp_note_alarm_window_t4_ParamLimits

0x6035,	// (0x00014771) popup_midp_note_alarm_window_t4

0x6055,	// (0x00014791) popup_midp_note_alarm_window_t5_ParamLimits

0x6055,	// (0x00014791) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x0001dfd7) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x0001dfd7) popup_midp_note_alarm_window_t

0x6101,	// (0x0001483d) wait_bar_pane_cp1_ParamLimits

0x6101,	// (0x0001483d) wait_bar_pane_cp1

0x2e44,	// (0x00011580) wait_anim_pane_copy1

0x2e44,	// (0x00011580) wait_border_pane_copy1

0x5af2,	// (0x0001422e) wait_border_pane_g1_copy1

0x3d5d,	// (0x00012499) form_field_popup_pane_g1

0xd744,	// (0x0001be80) form_field_popup_pane_t1_ParamLimits

0x3cfd,	// (0x00012439) input_focus_pane_cp7_ParamLimits

0x3d7f,	// (0x000124bb) list_form_pane_ParamLimits

0x3d8b,	// (0x000124c7) form_field_popup_wide_pane_g1

0x3d93,	// (0x000124cf) form_field_popup_wide_pane_t1_ParamLimits

0x3cfd,	// (0x00012439) input_focus_pane_cp8_ParamLimits

0x3da8,	// (0x000124e4) list_form_wide_pane_ParamLimits

0x6cf1,	// (0x0001542d) aid_size_cell_graphic_pane

0xd7c3,	// (0x0001beff) data_form_pane_t1_ParamLimits

0xe4ac,	// (0x0001cbe8) data_form_wide_pane_t1_ParamLimits

0xdd2b,	// (0x0001c467) bg_status_flat_pane

0xcfdd,	// (0x0001b719) title_pane_t1_ParamLimits

0x2eec,	// (0x00011628) title_pane_t2_ParamLimits

0x2f12,	// (0x0001164e) title_pane_t3_ParamLimits

0xf55d,	// (0x0001dc99) title_pane_t_ParamLimits

0x4470,	// (0x00012bac) level_1_signal_ParamLimits

0x447d,	// (0x00012bb9) level_2_signal_ParamLimits

0x448a,	// (0x00012bc6) level_3_signal_ParamLimits

0x4497,	// (0x00012bd3) level_4_signal_ParamLimits

0x44a4,	// (0x00012be0) level_5_signal_ParamLimits

0x44b1,	// (0x00012bed) level_6_signal_ParamLimits

0x44be,	// (0x00012bfa) level_7_signal_ParamLimits

0x4470,	// (0x00012bac) level_1_battery_ParamLimits

0x447d,	// (0x00012bb9) level_2_battery_ParamLimits

0x448a,	// (0x00012bc6) level_3_battery_ParamLimits

0x4497,	// (0x00012bd3) level_4_battery_ParamLimits

0x44a4,	// (0x00012be0) level_5_battery_ParamLimits

0x44b1,	// (0x00012bed) level_6_battery_ParamLimits

0x44be,	// (0x00012bfa) level_7_battery_ParamLimits

0x5d19,	// (0x00014455) bg_status_flat_pane_g1

0x5d21,	// (0x0001445d) bg_status_flat_pane_g2

0x5d29,	// (0x00014465) bg_status_flat_pane_g3

0x5d31,	// (0x0001446d) bg_status_flat_pane_g4

0x5d39,	// (0x00014475) bg_status_flat_pane_g5

0x5d41,	// (0x0001447d) bg_status_flat_pane_g6

0x5d49,	// (0x00014485) bg_status_flat_pane_g7

0xd071,	// (0x0001b7ad) tabs_3_active_pane_t1_ParamLimits

0xd071,	// (0x0001b7ad) tabs_3_passive_pane_t1_ParamLimits

0xd08b,	// (0x0001b7c7) tabs_4_active_pane_t1_ParamLimits

0xd08b,	// (0x0001b7c7) tabs_4_1_passive_pane_t1_ParamLimits

0xd88d,	// (0x0001bfc9) tabs_2_active_pane_t1_ParamLimits

0xd88d,	// (0x0001bfc9) tabs_2_passive_pane_t1_ParamLimits

0x2f24,	// (0x00011660) bg_active_tab_pane_cp4_ParamLimits

0xd89f,	// (0x0001bfdb) tabs_2_long_active_pane_t1_ParamLimits

0x4eb9,	// (0x000135f5) bg_passive_tab_pane_cp4_ParamLimits

0x1c91,	// (0x000103cd) list_single_midp_graphic_pane_t1_ParamLimits

0x2f24,	// (0x00011660) bg_active_tab_pane_cp5_ParamLimits

0xd8b2,	// (0x0001bfee) tabs_3_long_active_pane_t1_ParamLimits

0x4eb9,	// (0x000135f5) bg_passive_tab_pane_cp5_ParamLimits

0x1c91,	// (0x000103cd) list_single_midp_graphic_pane_t1

0xdd2b,	// (0x0001c467) bg_status_flat_pane_ParamLimits

0x505b,	// (0x00013797) indicator_pane_cp2_ParamLimits

0x505b,	// (0x00013797) indicator_pane_cp2

0xdea3,	// (0x0001c5df) navi_pane_srt_ParamLimits

0xdea3,	// (0x0001c5df) navi_pane_srt

0x51a4,	// (0x000138e0) popup_clock_digital_analogue_window_cp1

0x301b,	// (0x00011757) indicator_pane_t1

0x4b75,	// (0x000132b1) copy_highlight_pane

0x4b75,	// (0x000132b1) cursor_graphics_pane

0x4b75,	// (0x000132b1) graphic_within_text_pane

0x4b75,	// (0x000132b1) link_highlight_pane

0x6510,	// (0x00014c4c) popup_preview_text_window_t5_ParamLimits

0x6510,	// (0x00014c4c) popup_preview_text_window_t5

0x4c99,	// (0x000133d5) cursor_digital_pane

0x4c99,	// (0x000133d5) cursor_primary_pane

0x4caa,	// (0x000133e6) cursor_primary_small_pane

0x4cb2,	// (0x000133ee) cursor_secondary_pane

0x4cba,	// (0x000133f6) cursor_title_pane

0x4c99,	// (0x000133d5) link_highlight_digital_pane

0x4ca1,	// (0x000133dd) link_highlight_primary_pane

0x4caa,	// (0x000133e6) link_highlight_primary_small_pane

0x4cb2,	// (0x000133ee) link_highlight_secondary_pane

0x4cba,	// (0x000133f6) link_highlight_title_pane

0x4c99,	// (0x000133d5) copy_highlight_digital_pane

0x4c99,	// (0x000133d5) copy_highlight_primary_pane

0x4caa,	// (0x000133e6) copy_highlight_primary_small_pane

0x4cb2,	// (0x000133ee) copy_highlight_secondary_pane

0x4cba,	// (0x000133f6) copy_highlight_title_pane

0x4cb2,	// (0x000133ee) graphic_text_digital_pane

0x5db7,	// (0x000144f3) graphic_text_primary_pane

0x5dc0,	// (0x000144fc) graphic_text_primary_small_pane

0x4caa,	// (0x000133e6) graphic_text_secondary_pane

0x4c99,	// (0x000133d5) graphic_text_title_pane

0xdc02,	// (0x0001c33e) cursor_primary_pane_g1

0x5da9,	// (0x000144e5) cursor_text_primary_t1

0xe15d,	// (0x0001c899) cursor_primary_small_pane_g1

0x5d9b,	// (0x000144d7) cursor_text_primary_small_t1

0xe153,	// (0x0001c88f) cursor_primary_small_pane_g1_copy1

0x5d83,	// (0x000144bf) cursor_text_primary_small_t1_copy1

0x5d61,	// (0x0001449d) cursor_text_title_t1

0xe149,	// (0x0001c885) cursor_title_pane_g1

0xdc02,	// (0x0001c33e) cursor_digital_pane_g1

0x4ccc,	// (0x00013408) cursor_text_digital_t1

0x5d02,	// (0x0001443e) link_highlight_primary_pane_g1

0x5d0a,	// (0x00014446) link_highlight_primary_pane_t1

0x4cda,	// (0x00013416) link_highlight_primary_small_pane_g1

0x4ce2,	// (0x0001341e) link_highlight_primary_small_pane_t1

0x4cda,	// (0x00013416) link_highlight_secondary_pane_g1

0x4cf1,	// (0x0001342d) link_highlight_secondary_pane_t1

0x5c76,	// (0x000143b2) link_highlight_title_pane_g1

0x5c7e,	// (0x000143ba) link_highlight_title_pane_t1

0x5c5f,	// (0x0001439b) link_highlight_digital_pane_g1

0x5c67,	// (0x000143a3) link_highlight_digital_pane_t1

0x5b37,	// (0x00014273) copy_highlight_primary_pane_g1

0x5b3f,	// (0x0001427b) copy_highlight_primary_pane_t1

0x5b11,	// (0x0001424d) copy_highlight_primary_small_pane_g1

0x5b28,	// (0x00014264) copy_highlight_primary_small_pane_t1

0x4d00,	// (0x0001343c) copy_highlight_secondary_pane_g1

0x4d08,	// (0x00013444) copy_highlight_secondary_pane_t1

0x5b11,	// (0x0001424d) copy_highlight_title_pane_g1

0x5b19,	// (0x00014255) copy_highlight_title_pane_t1

0x5b37,	// (0x00014273) copy_highlight_digital_pane_g1

0x6f01,	// (0x0001563d) copy_highlight_digital_pane_t1

0x6e13,	// (0x0001554f) graphic_text_primary_pane_g1

0x6ee5,	// (0x00015621) graphic_text_primary_pane_t1

0x6ef3,	// (0x0001562f) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x0001e106) graphic_text_primary_pane_t

0x6e7f,	// (0x000155bb) graphic_text_primary_small_pane_g1

0x6e87,	// (0x000155c3) graphic_text_primary_small_pane_t1

0x6ed7,	// (0x00015613) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x0001e101) graphic_text_primary_small_pane_t

0x6e5b,	// (0x00015597) graphic_text_secondary_pane_g1

0x6e63,	// (0x0001559f) graphic_text_secondary_pane_t1

0x6e71,	// (0x000155ad) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x0001e0fc) graphic_text_secondary_pane_t

0x6e37,	// (0x00015573) graphic_text_title_pane_g1

0x6e3f,	// (0x0001557b) graphic_text_title_pane_t1

0x6e4d,	// (0x00015589) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x0001e0f7) graphic_text_title_pane_t

0x6e13,	// (0x0001554f) graphic_text_digital_pane_g1

0x6e1b,	// (0x00015557) graphic_text_digital_pane_t1

0x6e29,	// (0x00015565) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x0001e0f2) graphic_text_digital_pane_t

0x2f24,	// (0x00011660) navi_icon_pane_srt_ParamLimits

0x2f24,	// (0x00011660) navi_icon_pane_srt

0x2e44,	// (0x00011580) navi_midp_pane_srt

0x2e44,	// (0x00011580) navi_navi_pane_srt

0x2f24,	// (0x00011660) navi_text_pane_srt_ParamLimits

0x2f24,	// (0x00011660) navi_text_pane_srt

0x6dde,	// (0x0001551a) navi_navi_icon_text_pane_srt

0x6de6,	// (0x00015522) navi_navi_pane_srt_g1_ParamLimits

0x6de6,	// (0x00015522) navi_navi_pane_srt_g1

0x6df8,	// (0x00015534) navi_navi_pane_srt_g2_ParamLimits

0x6df8,	// (0x00015534) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x0001e0ed) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x0001e0ed) navi_navi_pane_srt_g

0x6e0a,	// (0x00015546) navi_navi_tabs_pane_srt

0x6dde,	// (0x0001551a) navi_navi_text_pane_srt

0x6dde,	// (0x0001551a) navi_navi_volume_pane_srt

0x6dcf,	// (0x0001550b) navi_navi_text_pane_srt_t1

0x2011,	// (0x0001074d) navi_navi_volume_pane_srt_g1

0x2019,	// (0x00010755) volume_small_pane_srt_ParamLimits

0x2019,	// (0x00010755) volume_small_pane_srt

0x13e0,	// (0x0000fb1c) volume_small_pane_srt_g1_ParamLimits

0x13e0,	// (0x0000fb1c) volume_small_pane_srt_g1

0x13f0,	// (0x0000fb2c) volume_small_pane_srt_g2_ParamLimits

0x13f0,	// (0x0000fb2c) volume_small_pane_srt_g2

0x1401,	// (0x0000fb3d) volume_small_pane_srt_g3_ParamLimits

0x1401,	// (0x0000fb3d) volume_small_pane_srt_g3

0x1412,	// (0x0000fb4e) volume_small_pane_srt_g4_ParamLimits

0x1412,	// (0x0000fb4e) volume_small_pane_srt_g4

0x1423,	// (0x0000fb5f) volume_small_pane_srt_g5_ParamLimits

0x1423,	// (0x0000fb5f) volume_small_pane_srt_g5

0x1434,	// (0x0000fb70) volume_small_pane_srt_g6_ParamLimits

0x1434,	// (0x0000fb70) volume_small_pane_srt_g6

0x1445,	// (0x0000fb81) volume_small_pane_srt_g7_ParamLimits

0x1445,	// (0x0000fb81) volume_small_pane_srt_g7

0x1456,	// (0x0000fb92) volume_small_pane_srt_g8_ParamLimits

0x1456,	// (0x0000fb92) volume_small_pane_srt_g8

0x1467,	// (0x0000fba3) volume_small_pane_srt_g9_ParamLimits

0x1467,	// (0x0000fba3) volume_small_pane_srt_g9

0x1478,	// (0x0000fbb4) volume_small_pane_srt_g10_ParamLimits

0x1478,	// (0x0000fbb4) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x0001de9a) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x0001de9a) volume_small_pane_srt_g

0x330c,	// (0x00011a48) query_popup_data_pane_cp2

0x6db5,	// (0x000154f1) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x6db5,	// (0x000154f1) navi_navi_icon_text_pane_srt_t1

0x5db7,	// (0x000144f3) navi_tabs_2_long_pane_srt

0x5db7,	// (0x000144f3) navi_tabs_2_pane_srt

0x5db7,	// (0x000144f3) navi_tabs_3_long_pane_srt

0x5db7,	// (0x000144f3) navi_tabs_3_pane_srt

0x5db7,	// (0x000144f3) navi_tabs_4_pane_srt

0x1ff1,	// (0x0001072d) tabs_2_active_pane_srt_ParamLimits

0x1ff1,	// (0x0001072d) tabs_2_active_pane_srt

0x2001,	// (0x0001073d) tabs_2_passive_pane_srt_ParamLimits

0x2001,	// (0x0001073d) tabs_2_passive_pane_srt

0x550b,	// (0x00013c47) bg_passive_tab_pane_cp1_srt_ParamLimits

0x550b,	// (0x00013c47) bg_passive_tab_pane_cp1_srt

0x6d81,	// (0x000154bd) bg_passive_tab_pane_g1_cp1_srt

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp1_srt

0x6d8a,	// (0x000154c6) bg_passive_tab_pane_g3_cp1_srt

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp1_srt_ParamLimits

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp1_srt

0x6d93,	// (0x000154cf) tabs_2_active_pane_srt_g1

0xe5ea,	// (0x0001cd26) tabs_2_active_pane_srt_t1_ParamLimits

0xe5ea,	// (0x0001cd26) tabs_2_active_pane_srt_t1

0x6d81,	// (0x000154bd) bg_active_tab_pane_g1_cp1_srt

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp1_srt

0x6d8a,	// (0x000154c6) bg_active_tab_pane_g3_cp1_srt

0x1fbe,	// (0x000106fa) tabs_3_active_pane_srt_ParamLimits

0x1fbe,	// (0x000106fa) tabs_3_active_pane_srt

0x1fcf,	// (0x0001070b) tabs_3_passive_pane_cp_srt_ParamLimits

0x1fcf,	// (0x0001070b) tabs_3_passive_pane_cp_srt

0x1fe0,	// (0x0001071c) tabs_3_passive_pane_srt_ParamLimits

0x1fe0,	// (0x0001071c) tabs_3_passive_pane_srt

0x550b,	// (0x00013c47) bg_passive_tab_pane_cp2_srt_ParamLimits

0x550b,	// (0x00013c47) bg_passive_tab_pane_cp2_srt

0x4d17,	// (0x00013453) bg_passive_tab_pane_g1_cp2_srt

0x47bd,	// (0x00012ef9) bg_passive_tab_pane_g2_cp2_srt

0x4d20,	// (0x0001345c) bg_passive_tab_pane_g3_cp2_srt

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp2_srt_ParamLimits

0x31b9,	// (0x000118f5) bg_active_tab_pane_cp2_srt

0x6d67,	// (0x000154a3) tabs_3_active_pane_srt_g1

0xe5d4,	// (0x0001cd10) tabs_3_active_pane_srt_t1_ParamLimits

0xe5d4,	// (0x0001cd10) tabs_3_active_pane_srt_t1

0x4d17,	// (0x00013453) bg_active_tab_pane_g1_cp2_srt

0x47bd,	// (0x00012ef9) bg_active_tab_pane_g2_cp2_srt

0x4d20,	// (0x0001345c) bg_active_tab_pane_g3_cp2_srt

0x1f76,	// (0x000106b2) tabs_4_active_pane_srt_ParamLimits

0x1f76,	// (0x000106b2) tabs_4_active_pane_srt

0x1f88,	// (0x000106c4) tabs_4_passive_pane_cp2_srt_ParamLimits

0x1f88,	// (0x000106c4) tabs_4_passive_pane_cp2_srt

0x15d7,	// (0x0000fd13) aid_size_cell_toolbar

0x68f3,	// (0x0001502f) main_idle_act_pane_ParamLimits

0x178e,	// (0x0000feca) popup_large_graphic_colour_window_ParamLimits

0xb9d2,	// (0x0001a10e) popup_toolbar_window_ParamLimits

0xb9d2,	// (0x0001a10e) popup_toolbar_window

0x6af5,	// (0x00015231) list_single_graphic_2heading_pane_ParamLimits

0x6af5,	// (0x00015231) list_single_graphic_2heading_pane

0x4223,	// (0x0001295f) aid_size_cell_apps_grid_lsc_pane

0x4235,	// (0x00012971) aid_size_cell_apps_grid_prt_pane

0x4eb9,	// (0x000135f5) bg_wml_button_pane_cp1_ParamLimits

0x4eb9,	// (0x000135f5) bg_wml_button_pane_cp1

0xe0dd,	// (0x0001c819) form_midp_field_text_pane_t1_ParamLimits

0x550b,	// (0x00013c47) input_focus_pane_cp050_ParamLimits

0x57a7,	// (0x00013ee3) list_midp_form_text_pane_ParamLimits

0x5745,	// (0x00013e81) input_focus_pane_cp051_ParamLimits

0x5759,	// (0x00013e95) list_midp_choice_pane_ParamLimits

0xe06e,	// (0x0001c7aa) list_single_2graphic_pane_cp3_ParamLimits

0xe06e,	// (0x0001c7aa) list_single_2graphic_pane_cp3

0xe084,	// (0x0001c7c0) list_single_midp_graphic_pane_ParamLimits

0xe084,	// (0x0001c7c0) list_single_midp_graphic_pane

0x1b98,	// (0x000102d4) list_single_graphic_2heading_pane_g1_ParamLimits

0x1b98,	// (0x000102d4) list_single_graphic_2heading_pane_g1

0x1ba4,	// (0x000102e0) list_single_graphic_2heading_pane_g4_ParamLimits

0x1ba4,	// (0x000102e0) list_single_graphic_2heading_pane_g4

0x1bb0,	// (0x000102ec) list_single_graphic_2heading_pane_g5_ParamLimits

0x1bb0,	// (0x000102ec) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x0001deed) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x0001deed) list_single_graphic_2heading_pane_g

0x1bbc,	// (0x000102f8) list_single_graphic_2heading_pane_t1_ParamLimits

0x1bbc,	// (0x000102f8) list_single_graphic_2heading_pane_t1

0x1bd0,	// (0x0001030c) list_single_graphic_2heading_pane_t2_ParamLimits

0x1bd0,	// (0x0001030c) list_single_graphic_2heading_pane_t2

0x1bea,	// (0x00010326) list_single_graphic_2heading_pane_t3_ParamLimits

0x1bea,	// (0x00010326) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x0001def4) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x0001def4) list_single_graphic_2heading_pane_t

0x5301,	// (0x00013a3d) bg_popup_sub_pane_cp2

0x532b,	// (0x00013a67) grid_toobar_pane

0x1c02,	// (0x0001033e) cell_toolbar_pane_ParamLimits

0x1c02,	// (0x0001033e) cell_toolbar_pane

0x5395,	// (0x00013ad1) cell_toolbar_pane_g1_ParamLimits

0x5395,	// (0x00013ad1) cell_toolbar_pane_g1

0x53a9,	// (0x00013ae5) cell_toolbar_pane_g2_ParamLimits

0x53a9,	// (0x00013ae5) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x0001df02) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x0001df02) cell_toolbar_pane_g

0x53cb,	// (0x00013b07) grid_highlight_pane_cp2_ParamLimits

0x53cb,	// (0x00013b07) grid_highlight_pane_cp2

0x53e5,	// (0x00013b21) toolbar_button_pane

0x53f1,	// (0x00013b2d) toolbar_button_pane_g1

0x53f9,	// (0x00013b35) toolbar_button_pane_g2

0x5401,	// (0x00013b3d) toolbar_button_pane_g3

0x5409,	// (0x00013b45) toolbar_button_pane_g4

0x5411,	// (0x00013b4d) toolbar_button_pane_g5

0x5419,	// (0x00013b55) toolbar_button_pane_g6

0x5421,	// (0x00013b5d) toolbar_button_pane_g7

0x5429,	// (0x00013b65) toolbar_button_pane_g8

0x5431,	// (0x00013b6d) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x0001df07) toolbar_button_pane_g

0x1c3a,	// (0x00010376) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1c3a,	// (0x00010376) list_single_2graphic_pane_g1_cp3

0xba2a,	// (0x0001a166) list_single_2graphic_pane_g2_cp3_ParamLimits

0xba2a,	// (0x0001a166) list_single_2graphic_pane_g2_cp3

0x1c57,	// (0x00010393) list_single_2graphic_pane_g3_cp3

0x1c5f,	// (0x0001039b) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1c5f,	// (0x0001039b) list_single_2graphic_pane_g4_cp3

0x1c6b,	// (0x000103a7) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1c6b,	// (0x000103a7) list_single_2graphic_pane_t1_cp3

0x1c85,	// (0x000103c1) list_single_midp_graphic_pane_g2_ParamLimits

0x1c85,	// (0x000103c1) list_single_midp_graphic_pane_g2

0x15df,	// (0x0000fd1b) aid_zoom_text_primary

0x15e7,	// (0x0000fd23) aid_zoom_text_secondary

0x4dd4,	// (0x00013510) status_small_pane_g7_ParamLimits

0x4dd4,	// (0x00013510) status_small_pane_g7

0x4df7,	// (0x00013533) status_small_pane_t1_ParamLimits

0xcfb9,	// (0x0001b6f5) title_pane_g2

0x0003,

0xf554,	// (0x0001dc90) title_pane_g

0xd244,	// (0x0001b980) aid_size_cell_colour_1_pane_ParamLimits

0xd244,	// (0x0001b980) aid_size_cell_colour_1_pane

0xd258,	// (0x0001b994) aid_size_cell_colour_2_pane_ParamLimits

0xd258,	// (0x0001b994) aid_size_cell_colour_2_pane

0xd26c,	// (0x0001b9a8) aid_size_cell_colour_3_pane_ParamLimits

0xd26c,	// (0x0001b9a8) aid_size_cell_colour_3_pane

0xd280,	// (0x0001b9bc) aid_size_cell_colour_4_pane_ParamLimits

0xd280,	// (0x0001b9bc) aid_size_cell_colour_4_pane

0x103c,	// (0x0000f778) title_pane_stacon_g1_ParamLimits

0x103c,	// (0x0000f778) title_pane_stacon_g1

0x5b96,	// (0x000142d2) popup_note_wait_window_g3_ParamLimits

0x5b96,	// (0x000142d2) popup_note_wait_window_g3

0x5c0c,	// (0x00014348) popup_note_wait_window_t5_ParamLimits

0x5c0c,	// (0x00014348) popup_note_wait_window_t5

0x2e44,	// (0x00011580) main_feb_china_hwr_fs_writing_pane

0xb3fa,	// (0x00019b36) popup_feb_china_hwr_fs_window_ParamLimits

0xb3fa,	// (0x00019b36) popup_feb_china_hwr_fs_window

0xba3b,	// (0x0001a177) aid_size_cell_hwr_fs_ParamLimits

0xba3b,	// (0x0001a177) aid_size_cell_hwr_fs

0x550b,	// (0x00013c47) bg_popup_sub_pane_cp3_ParamLimits

0x550b,	// (0x00013c47) bg_popup_sub_pane_cp3

0xba50,	// (0x0001a18c) grid_hwr_fs_pane_ParamLimits

0xba50,	// (0x0001a18c) grid_hwr_fs_pane

0x1cd4,	// (0x00010410) linegrid_hwr_fs_pane_ParamLimits

0x1cd4,	// (0x00010410) linegrid_hwr_fs_pane

0xba68,	// (0x0001a1a4) cell_hwr_fs_pane_ParamLimits

0xba68,	// (0x0001a1a4) cell_hwr_fs_pane

0x5517,	// (0x00013c53) linegrid_hwr_fs_pane_g1_ParamLimits

0x5517,	// (0x00013c53) linegrid_hwr_fs_pane_g1

0xe042,	// (0x0001c77e) linegrid_hwr_fs_pane_g2_ParamLimits

0xe042,	// (0x0001c77e) linegrid_hwr_fs_pane_g2

0x5535,	// (0x00013c71) linegrid_hwr_fs_pane_g3_ParamLimits

0x5535,	// (0x00013c71) linegrid_hwr_fs_pane_g3

0x1d06,	// (0x00010442) linegrid_hwr_fs_pane_g4_ParamLimits

0x1d06,	// (0x00010442) linegrid_hwr_fs_pane_g4

0x1d20,	// (0x0001045c) linegrid_hwr_fs_pane_g5_ParamLimits

0x1d20,	// (0x0001045c) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x0001df2d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x0001df2d) linegrid_hwr_fs_pane_g

0x5541,	// (0x00013c7d) cell_hwr_fs_pane_g1_ParamLimits

0x5541,	// (0x00013c7d) cell_hwr_fs_pane_g1

0x523a,	// (0x00013976) cell_hwr_fs_pane_g2_ParamLimits

0x523a,	// (0x00013976) cell_hwr_fs_pane_g2

0xe054,	// (0x0001c790) cell_hwr_fs_pane_g3_ParamLimits

0xe054,	// (0x0001c790) cell_hwr_fs_pane_g3

0xe061,	// (0x0001c79d) cell_hwr_fs_pane_g4_ParamLimits

0xe061,	// (0x0001c79d) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x0001df38) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0001df38) cell_hwr_fs_pane_g

0xba8e,	// (0x0001a1ca) cell_hwr_fs_pane_t1

0x2e44,	// (0x00011580) grid_highlight_pane_cp6

0x2e44,	// (0x00011580) main_idle_act2_pane

0x3fdb,	// (0x00012717) aid_inside_area_popup_secondary

0xe1c4,	// (0x0001c900) aid_inside_area_window_primary_ParamLimits

0xe1c4,	// (0x0001c900) aid_inside_area_window_primary

0x6f10,	// (0x0001564c) ai2_news_ticker_pane

0x6f18,	// (0x00015654) aid_size_cell_ai1_link_ParamLimits

0x6f18,	// (0x00015654) aid_size_cell_ai1_link

0x6f32,	// (0x0001566e) popup_ai2_data_window_ParamLimits

0x6f32,	// (0x0001566e) popup_ai2_data_window

0x6f46,	// (0x00015682) popup_ai2_link_window_ParamLimits

0x6f46,	// (0x00015682) popup_ai2_link_window

0x550b,	// (0x00013c47) bg_popup_sub_pane_cp4_ParamLimits

0x550b,	// (0x00013c47) bg_popup_sub_pane_cp4

0x6f5a,	// (0x00015696) grid_ai2_link_pane_ParamLimits

0x6f5a,	// (0x00015696) grid_ai2_link_pane

0x6f71,	// (0x000156ad) popup_ai2_link_window_g1_ParamLimits

0x6f71,	// (0x000156ad) popup_ai2_link_window_g1

0x6f7d,	// (0x000156b9) popup_ai2_link_window_g2_ParamLimits

0x6f7d,	// (0x000156b9) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x0001e10b) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x0001e10b) popup_ai2_link_window_g

0x6f8c,	// (0x000156c8) ai2_mp_button_pane

0x6f94,	// (0x000156d0) ai2_mp_volume_pane

0x5745,	// (0x00013e81) bg_popup_sub_pane_cp5_ParamLimits

0x5745,	// (0x00013e81) bg_popup_sub_pane_cp5

0x6f9c,	// (0x000156d8) heading_ai2_gene_pane_ParamLimits

0x6f9c,	// (0x000156d8) heading_ai2_gene_pane

0x6fa8,	// (0x000156e4) list_ai2_gene_pane_ParamLimits

0x6fa8,	// (0x000156e4) list_ai2_gene_pane

0x6ff0,	// (0x0001572c) cell_ai2_link_pane_ParamLimits

0x6ff0,	// (0x0001572c) cell_ai2_link_pane

0x7006,	// (0x00015742) cell_ai2_link_pane_g1

0x2e44,	// (0x00011580) grid_highlight_pane_cp7

0x202e,	// (0x0001076a) ai2_mp_volume_pane_g1

0x70d7,	// (0x00015813) ai2_mp_volume_pane_g2

0x704c,	// (0x00015788) list_ai2_gene_pane_t1

0x70df,	// (0x0001581b) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x0001e124) ai2_mp_volume_pane_g

0x2036,	// (0x00010772) volume_small_pane_cp3

0x70e7,	// (0x00015823) aid_size_cell_ai2_button

0x70ef,	// (0x0001582b) grid_ai2_button_pane

0x70f8,	// (0x00015834) cell_ai2_button_pane_ParamLimits

0x70f8,	// (0x00015834) cell_ai2_button_pane

0x2e3a,	// (0x00011576) cell_ai2_button_pane_g1

0x2e44,	// (0x00011580) grid_highlight_pane_cp8

0x7097,	// (0x000157d3) ai2_gene_pane_t1_ParamLimits

0x7097,	// (0x000157d3) ai2_gene_pane_t1

0xb384,	// (0x00019ac0) aid_height_parent_landscape

0xe35a,	// (0x0001ca96) aid_height_set_list

0x68f3,	// (0x0001502f) aid_size_parent

0x6cf1,	// (0x0001542d) aid_size_cell_graphic_pane_ParamLimits

0x6fb8,	// (0x000156f4) popup_ai2_data_window_g1_ParamLimits

0x6fb8,	// (0x000156f4) popup_ai2_data_window_g1

0x6fc4,	// (0x00015700) ai2_news_ticker_pane_g1

0x6fcc,	// (0x00015708) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x0001e110) ai2_news_ticker_pane_g

0x6fd4,	// (0x00015710) ai2_news_ticker_pane_t1

0x6fe2,	// (0x0001571e) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x0001e115) ai2_news_ticker_pane_t

0x700f,	// (0x0001574b) heading_ai2_gene_pane_g1

0x7017,	// (0x00015753) heading_ai2_gene_pane_t1_ParamLimits

0x7017,	// (0x00015753) heading_ai2_gene_pane_t1

0x702c,	// (0x00015768) list_highlight_pane_cp6

0x7034,	// (0x00015770) ai2_gene_pane_ParamLimits

0x7034,	// (0x00015770) ai2_gene_pane

0x705a,	// (0x00015796) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x0001e11a) list_ai2_gene_pane_t

0x7068,	// (0x000157a4) list_highlight_pane_cp8_ParamLimits

0x7068,	// (0x000157a4) list_highlight_pane_cp8

0x7079,	// (0x000157b5) ai2_gene_pane_g1_ParamLimits

0x7079,	// (0x000157b5) ai2_gene_pane_g1

0x708b,	// (0x000157c7) ai2_gene_pane_g2_ParamLimits

0x708b,	// (0x000157c7) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x0001e11f) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x0001e11f) ai2_gene_pane_g

0x3727,	// (0x00011e63) scroll_pane_cp12

0xb343,	// (0x00019a7f) control_pane_t3_ParamLimits

0xb343,	// (0x00019a7f) control_pane_t3

0x4de8,	// (0x00013524) status_small_pane_g8_ParamLimits

0x4de8,	// (0x00013524) status_small_pane_g8

0xb48d,	// (0x00019bc9) popup_find_window_ParamLimits

0xb708,	// (0x00019e44) popup_note_image_window_ParamLimits

0x5367,	// (0x00013aa3) list_double2_graphic_pane_vc_g1_ParamLimits

0x5367,	// (0x00013aa3) list_double2_graphic_pane_vc_g1

0x4a48,	// (0x00013184) list_double2_graphic_pane_vc_g2_ParamLimits

0x4a48,	// (0x00013184) list_double2_graphic_pane_vc_g2

0x5373,	// (0x00013aaf) list_double2_graphic_pane_vc_g3_ParamLimits

0x5373,	// (0x00013aaf) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x0001defb) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001defb) list_double2_graphic_pane_vc_g

0x537f,	// (0x00013abb) list_double2_graphic_pane_vc_t1_ParamLimits

0x537f,	// (0x00013abb) list_double2_graphic_pane_vc_t1

0x4a48,	// (0x00013184) list_single_heading_pane_vc_g1_ParamLimits

0x4a48,	// (0x00013184) list_single_heading_pane_vc_g1

0x5373,	// (0x00013aaf) list_single_heading_pane_vc_g2_ParamLimits

0x5373,	// (0x00013aaf) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dd0a) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dd0a) list_single_heading_pane_vc_g

0x5439,	// (0x00013b75) list_single_heading_pane_vc_t1_ParamLimits

0x5439,	// (0x00013b75) list_single_heading_pane_vc_t1

0x544f,	// (0x00013b8b) list_single_heading_pane_vc_t2_ParamLimits

0x544f,	// (0x00013b8b) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x0001df1c) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x0001df1c) list_single_heading_pane_vc_t

0x5463,	// (0x00013b9f) list_setting_number_pane_vc_g1_ParamLimits

0x5463,	// (0x00013b9f) list_setting_number_pane_vc_g1

0x546f,	// (0x00013bab) list_setting_number_pane_vc_g2_ParamLimits

0x546f,	// (0x00013bab) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001df21) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001df21) list_setting_number_pane_vc_g

0x547b,	// (0x00013bb7) list_setting_number_pane_vc_t1_ParamLimits

0x547b,	// (0x00013bb7) list_setting_number_pane_vc_t1

0x548f,	// (0x00013bcb) list_setting_number_pane_vc_t2_ParamLimits

0x548f,	// (0x00013bcb) list_setting_number_pane_vc_t2

0x54a9,	// (0x00013be5) list_setting_number_pane_vc_t3_ParamLimits

0x54a9,	// (0x00013be5) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x0001df26) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x0001df26) list_setting_number_pane_vc_t

0x54cf,	// (0x00013c0b) set_value_pane_vc_ParamLimits

0x54cf,	// (0x00013c0b) set_value_pane_vc

0x6af5,	// (0x00015231) list_double2_graphic_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_double2_graphic_pane_vc

0x6b09,	// (0x00015245) list_double2_large_graphic_pane_vc_ParamLimits

0x6b09,	// (0x00015245) list_double2_large_graphic_pane_vc

0x6af5,	// (0x00015231) list_double2_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_double2_pane_vc

0x6af5,	// (0x00015231) list_double_graphic_heading_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_double_graphic_heading_pane_vc

0x6af5,	// (0x00015231) list_double_graphic_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_double_graphic_pane_vc

0x6af5,	// (0x00015231) list_double_heading_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_double_heading_pane_vc

0x6b09,	// (0x00015245) list_double_large_graphic_pane_vc_ParamLimits

0x6b09,	// (0x00015245) list_double_large_graphic_pane_vc

0x6af5,	// (0x00015231) list_double_number_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_double_number_pane_vc

0x6af5,	// (0x00015231) list_double_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_double_pane_vc

0x6af5,	// (0x00015231) list_double_time_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_double_time_pane_vc

0x6af5,	// (0x00015231) list_setting_number_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_setting_number_pane_vc

0x6af5,	// (0x00015231) list_setting_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_setting_pane_vc

0x6af5,	// (0x00015231) list_single_graphic_heading_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_single_graphic_heading_pane_vc

0x6af5,	// (0x00015231) list_single_heading_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_single_heading_pane_vc

0x6af5,	// (0x00015231) list_single_number_heading_pane_vc_ParamLimits

0x6af5,	// (0x00015231) list_single_number_heading_pane_vc

0x712c,	// (0x00015868) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x712c,	// (0x00015868) list_double_graphic_heading_pane_vc_g1

0x4aac,	// (0x000131e8) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4aac,	// (0x000131e8) list_double_graphic_heading_pane_vc_g2

0x7138,	// (0x00015874) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x7138,	// (0x00015874) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x0001e12b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x0001e12b) list_double_graphic_heading_pane_vc_g

0x7144,	// (0x00015880) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7144,	// (0x00015880) list_double_graphic_heading_pane_vc_t1

0x5439,	// (0x00013b75) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x5439,	// (0x00013b75) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x0001e132) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x0001e132) list_double_graphic_heading_pane_vc_t

0x5463,	// (0x00013b9f) list_setting_pane_vc_g1_ParamLimits

0x5463,	// (0x00013b9f) list_setting_pane_vc_g1

0x546f,	// (0x00013bab) list_setting_pane_vc_g2_ParamLimits

0x546f,	// (0x00013bab) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x0001df21) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x0001df21) list_setting_pane_vc_g

0x7350,	// (0x00015a8c) list_setting_pane_vc_t1_ParamLimits

0x7350,	// (0x00015a8c) list_setting_pane_vc_t1

0x736a,	// (0x00015aa6) list_setting_pane_vc_t2_ParamLimits

0x736a,	// (0x00015aa6) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x0001e175) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x0001e175) list_setting_pane_vc_t

0x54cf,	// (0x00013c0b) set_value_pane_cp_vc_ParamLimits

0x54cf,	// (0x00013c0b) set_value_pane_cp_vc

0x4a48,	// (0x00013184) list_single_number_heading_pane_vc_g1_ParamLimits

0x4a48,	// (0x00013184) list_single_number_heading_pane_vc_g1

0x5373,	// (0x00013aaf) list_single_number_heading_pane_vc_g2_ParamLimits

0x5373,	// (0x00013aaf) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dd0a) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dd0a) list_single_number_heading_pane_vc_g

0x5439,	// (0x00013b75) list_single_number_heading_pane_vc_t1_ParamLimits

0x5439,	// (0x00013b75) list_single_number_heading_pane_vc_t1

0x7380,	// (0x00015abc) list_single_number_heading_pane_vc_t2_ParamLimits

0x7380,	// (0x00015abc) list_single_number_heading_pane_vc_t2

0x7394,	// (0x00015ad0) list_single_number_heading_pane_vc_t3_ParamLimits

0x7394,	// (0x00015ad0) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x0001e17a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x0001e17a) list_single_number_heading_pane_vc_t

0x5367,	// (0x00013aa3) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x5367,	// (0x00013aa3) list_single_graphic_heading_pane_vc_g1

0x4a48,	// (0x00013184) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4a48,	// (0x00013184) list_single_graphic_heading_pane_vc_g4

0x5373,	// (0x00013aaf) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x5373,	// (0x00013aaf) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x0001defb) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001defb) list_single_graphic_heading_pane_vc_g

0x5439,	// (0x00013b75) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x5439,	// (0x00013b75) list_single_graphic_heading_pane_vc_t1

0x73a6,	// (0x00015ae2) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x73a6,	// (0x00015ae2) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x0001e181) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x0001e181) list_single_graphic_heading_pane_vc_t

0x4a48,	// (0x00013184) list_double2_pane_vc_g1_ParamLimits

0x4a48,	// (0x00013184) list_double2_pane_vc_g1

0x5373,	// (0x00013aaf) list_double2_pane_vc_g2_ParamLimits

0x5373,	// (0x00013aaf) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dd0a) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dd0a) list_double2_pane_vc_g

0x73ba,	// (0x00015af6) list_double2_pane_vc_t1_ParamLimits

0x73ba,	// (0x00015af6) list_double2_pane_vc_t1

0x73d0,	// (0x00015b0c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x73d0,	// (0x00015b0c) list_double2_large_graphic_pane_vc_g1

0x37f9,	// (0x00011f35) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x37f9,	// (0x00011f35) list_double2_large_graphic_pane_vc_g2

0x3805,	// (0x00011f41) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x3805,	// (0x00011f41) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0001dd27) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0001dd27) list_double2_large_graphic_pane_vc_g

0x73dc,	// (0x00015b18) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x73dc,	// (0x00015b18) list_double2_large_graphic_pane_vc_t1

0x73f2,	// (0x00015b2e) list_double_time_pane_vc_g1_ParamLimits

0x73f2,	// (0x00015b2e) list_double_time_pane_vc_g1

0x73fe,	// (0x00015b3a) list_double_time_pane_vc_g2_ParamLimits

0x73fe,	// (0x00015b3a) list_double_time_pane_vc_g2

0x0001,

0xfa4a,	// (0x0001e186) list_double_time_pane_vc_g_ParamLimits

0xfa4a,	// (0x0001e186) list_double_time_pane_vc_g

0x740a,	// (0x00015b46) list_double_time_pane_vc_t1_ParamLimits

0x740a,	// (0x00015b46) list_double_time_pane_vc_t1

0x7428,	// (0x00015b64) list_double_time_pane_vc_t2_ParamLimits

0x7428,	// (0x00015b64) list_double_time_pane_vc_t2

0x7452,	// (0x00015b8e) list_double_time_pane_vc_t3_ParamLimits

0x7452,	// (0x00015b8e) list_double_time_pane_vc_t3

0x7464,	// (0x00015ba0) list_double_time_pane_vc_t4_ParamLimits

0x7464,	// (0x00015ba0) list_double_time_pane_vc_t4

0x0003,

0xfa4f,	// (0x0001e18b) list_double_time_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001e18b) list_double_time_pane_vc_t

0x4a48,	// (0x00013184) list_double_pane_vc_g1_ParamLimits

0x4a48,	// (0x00013184) list_double_pane_vc_g1

0x5373,	// (0x00013aaf) list_double_pane_vc_g2_ParamLimits

0x5373,	// (0x00013aaf) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dd0a) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dd0a) list_double_pane_vc_g

0x7478,	// (0x00015bb4) list_double_pane_vc_t1_ParamLimits

0x7478,	// (0x00015bb4) list_double_pane_vc_t1

0x748a,	// (0x00015bc6) list_double_pane_vc_t2_ParamLimits

0x748a,	// (0x00015bc6) list_double_pane_vc_t2

0x0001,

0xfa58,	// (0x0001e194) list_double_pane_vc_t_ParamLimits

0xfa58,	// (0x0001e194) list_double_pane_vc_t

0x4a48,	// (0x00013184) list_double_number_pane_vc_g1_ParamLimits

0x4a48,	// (0x00013184) list_double_number_pane_vc_g1

0x5373,	// (0x00013aaf) list_double_number_pane_vc_g2_ParamLimits

0x5373,	// (0x00013aaf) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0001dd0a) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0001dd0a) list_double_number_pane_vc_g

0x74a2,	// (0x00015bde) list_double_number_pane_vc_t1_ParamLimits

0x74a2,	// (0x00015bde) list_double_number_pane_vc_t1

0x74b6,	// (0x00015bf2) list_double_number_pane_vc_t2_ParamLimits

0x74b6,	// (0x00015bf2) list_double_number_pane_vc_t2

0x748a,	// (0x00015bc6) list_double_number_pane_vc_t3_ParamLimits

0x748a,	// (0x00015bc6) list_double_number_pane_vc_t3

0x0002,

0xfa5d,	// (0x0001e199) list_double_number_pane_vc_t_ParamLimits

0xfa5d,	// (0x0001e199) list_double_number_pane_vc_t

0x74c8,	// (0x00015c04) list_double_large_graphic_pane_vc_g1_ParamLimits

0x74c8,	// (0x00015c04) list_double_large_graphic_pane_vc_g1

0x74d9,	// (0x00015c15) list_double_large_graphic_pane_vc_g2_ParamLimits

0x74d9,	// (0x00015c15) list_double_large_graphic_pane_vc_g2

0x3805,	// (0x00011f41) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3805,	// (0x00011f41) list_double_large_graphic_pane_vc_g3

0x74e8,	// (0x00015c24) list_double_large_graphic_pane_vc_g4_ParamLimits

0x74e8,	// (0x00015c24) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa64,	// (0x0001e1a0) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa64,	// (0x0001e1a0) list_double_large_graphic_pane_vc_g

0x74f4,	// (0x00015c30) list_double_large_graphic_pane_vc_t1_ParamLimits

0x74f4,	// (0x00015c30) list_double_large_graphic_pane_vc_t1

0x750b,	// (0x00015c47) list_double_large_graphic_pane_vc_t2_ParamLimits

0x750b,	// (0x00015c47) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6d,	// (0x0001e1a9) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6d,	// (0x0001e1a9) list_double_large_graphic_pane_vc_t

0x4aac,	// (0x000131e8) list_double_heading_pane_vc_g1_ParamLimits

0x4aac,	// (0x000131e8) list_double_heading_pane_vc_g1

0x7138,	// (0x00015874) list_double_heading_pane_vc_g2_ParamLimits

0x7138,	// (0x00015874) list_double_heading_pane_vc_g2

0x0001,

0xfa72,	// (0x0001e1ae) list_double_heading_pane_vc_g_ParamLimits

0xfa72,	// (0x0001e1ae) list_double_heading_pane_vc_g

0x7524,	// (0x00015c60) list_double_heading_pane_vc_t1_ParamLimits

0x7524,	// (0x00015c60) list_double_heading_pane_vc_t1

0x5439,	// (0x00013b75) list_double_heading_pane_vc_t2_ParamLimits

0x5439,	// (0x00013b75) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x0001e1b3) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x0001e1b3) list_double_heading_pane_vc_t

0x5367,	// (0x00013aa3) list_double_graphic_pane_vc_g1_ParamLimits

0x5367,	// (0x00013aa3) list_double_graphic_pane_vc_g1

0x6323,	// (0x00014a5f) list_double_graphic_pane_vc_g2_ParamLimits

0x6323,	// (0x00014a5f) list_double_graphic_pane_vc_g2

0x7538,	// (0x00015c74) list_double_graphic_pane_vc_g3_ParamLimits

0x7538,	// (0x00015c74) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x0001e1b8) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x0001e1b8) list_double_graphic_pane_vc_g

0x7544,	// (0x00015c80) list_double_graphic_pane_vc_t1_ParamLimits

0x7544,	// (0x00015c80) list_double_graphic_pane_vc_t1

0x748a,	// (0x00015bc6) list_double_graphic_pane_vc_t2_ParamLimits

0x748a,	// (0x00015bc6) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x0001e1bf) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x0001e1bf) list_double_graphic_pane_vc_t

0x0bb0,	// (0x0000f2ec) aid_size_cell_fastswap

0xb077,	// (0x000197b3) aid_size_cell_touch_ParamLimits

0xb077,	// (0x000197b3) aid_size_cell_touch

0x0e1d,	// (0x0000f559) popup_fast_swap_wide_window_ParamLimits

0x0e1d,	// (0x0000f559) popup_fast_swap_wide_window

0xb1c2,	// (0x000198fe) touch_pane_ParamLimits

0xb1c2,	// (0x000198fe) touch_pane

0x3c25,	// (0x00012361) button_value_adjust_pane_cp2

0x3c25,	// (0x00012361) button_value_adjust_pane_cp4

0x3c45,	// (0x00012381) form_field_data_pane_cp2

0xd6e1,	// (0x0001be1d) form_field_data_wide_pane_cp2

0x42f2,	// (0x00012a2e) bg_scroll_pane_ParamLimits

0x119f,	// (0x0000f8db) scroll_handle_pane_ParamLimits

0x11b3,	// (0x0000f8ef) scroll_sc2_down_pane_ParamLimits

0x11b3,	// (0x0000f8ef) scroll_sc2_down_pane

0x4323,	// (0x00012a5f) scroll_sc2_up_pane_ParamLimits

0x4323,	// (0x00012a5f) scroll_sc2_up_pane

0xe721,	// (0x0001ce5d) grid_wheel_folder_pane_g1_ParamLimits

0xe721,	// (0x0001ce5d) grid_wheel_folder_pane_g1

0x1378,	// (0x0000fab4) clock_nsta_pane_cp2_ParamLimits

0x1378,	// (0x0000fab4) clock_nsta_pane_cp2

0x4eb9,	// (0x000135f5) listscroll_midp_pane_ParamLimits

0xdb67,	// (0x0001c2a3) midp_canvas_pane

0x4e63,	// (0x0001359f) nsta_clock_indic_pane

0x4e9f,	// (0x000135db) listscroll_form_pane_vc

0x4ea7,	// (0x000135e3) listscroll_set_pane_vc_ParamLimits

0x4ea7,	// (0x000135e3) listscroll_set_pane_vc

0xdd53,	// (0x0001c48f) clock_nsta_pane

0xdd7d,	// (0x0001c4b9) indicator_nsta_pane

0x5301,	// (0x00013a3d) bg_popup_sub_pane_cp2_ParamLimits

0x5315,	// (0x00013a51) find_pane_cp2_ParamLimits

0x5315,	// (0x00013a51) find_pane_cp2

0x532b,	// (0x00013a67) grid_toobar_pane_ParamLimits

0x54df,	// (0x00013c1b) list_form_gen_pane_vc_ParamLimits

0x54df,	// (0x00013c1b) list_form_gen_pane_vc

0x54f5,	// (0x00013c31) scroll_pane_cp8_vc_ParamLimits

0x54f5,	// (0x00013c31) scroll_pane_cp8_vc

0x5571,	// (0x00013cad) data_form_wide_pane_vc_ParamLimits

0x5571,	// (0x00013cad) data_form_wide_pane_vc

0x557d,	// (0x00013cb9) form_field_data_wide_pane_vc_g1

0x5585,	// (0x00013cc1) form_field_data_wide_pane_vc_t1_ParamLimits

0x5585,	// (0x00013cc1) form_field_data_wide_pane_vc_t1

0x3cfd,	// (0x00012439) input_focus_pane_cp6_vc_ParamLimits

0x3cfd,	// (0x00012439) input_focus_pane_cp6_vc

0xe11d,	// (0x0001c859) list_midp_pane_ParamLimits

0x6d5b,	// (0x00015497) scroll_pane_cp16_ParamLimits

0x6d5b,	// (0x00015497) scroll_pane_cp16

0x5970,	// (0x000140ac) button_value_adjust_pane_ParamLimits

0x5970,	// (0x000140ac) button_value_adjust_pane

0xe36b,	// (0x0001caa7) button_value_adjust_pane_cp6_ParamLimits

0xe36b,	// (0x0001caa7) button_value_adjust_pane_cp6

0xe481,	// (0x0001cbbd) settings_code_pane_cp_ParamLimits

0xe481,	// (0x0001cbbd) settings_code_pane_cp

0x2e3a,	// (0x00011576) cell_touch_pane_g1

0x2e3a,	// (0x00011576) cell_touch_pane_g2

0x0001,

0xf704,	// (0x0001de40) cell_touch_pane_g

0xe600,	// (0x0001cd3c) cell_touch_pane_cp_ParamLimits

0xe600,	// (0x0001cd3c) cell_touch_pane_cp

0xe61c,	// (0x0001cd58) cell_touch_pane_ParamLimits

0xe61c,	// (0x0001cd58) cell_touch_pane

0x2e3a,	// (0x00011576) scroll_sc2_down_pane_g1

0x2e3a,	// (0x00011576) scroll_sc2_up_pane_g1

0x2e44,	// (0x00011580) bg_set_opt_pane_cp4_vc

0x7158,	// (0x00015894) list_set_graphic_pane_vc_g1_ParamLimits

0x7158,	// (0x00015894) list_set_graphic_pane_vc_g1

0x7164,	// (0x000158a0) list_set_graphic_pane_vc_g2_ParamLimits

0x7164,	// (0x000158a0) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x0001e137) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x0001e137) list_set_graphic_pane_vc_g

0x7170,	// (0x000158ac) text_primary_small_cp13_vc_ParamLimits

0x7170,	// (0x000158ac) text_primary_small_cp13_vc

0x7188,	// (0x000158c4) list_set_graphic_pane_vc_ParamLimits

0x7188,	// (0x000158c4) list_set_graphic_pane_vc

0x2e44,	// (0x00011580) input_focus_pane_cp2_vc

0x2e3a,	// (0x00011576) setting_code_pane_vc_g1

0x2f6f,	// (0x000116ab) setting_code_pane_vc_t1

0x719c,	// (0x000158d8) set_text_pane_vc_t1_ParamLimits

0x719c,	// (0x000158d8) set_text_pane_vc_t1

0x2e44,	// (0x00011580) input_focus_pane_cp1_vc

0x71bb,	// (0x000158f7) list_set_text_pane_vc

0x2e3a,	// (0x00011576) setting_text_pane_vc_g1

0x2e44,	// (0x00011580) bg_set_opt_pane_cp2_vc

0x2f66,	// (0x000116a2) setting_slider_graphic_pane_vc_g1

0x71c5,	// (0x00015901) setting_slider_graphic_pane_vc_t1

0x71d4,	// (0x00015910) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x0001e13c) setting_slider_graphic_pane_vc_t

0x71e3,	// (0x0001591f) slider_set_pane_cp_vc

0x71eb,	// (0x00015927) slider_set_pane_vc_g1

0x71f4,	// (0x00015930) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x0001e141) slider_set_pane_vc_g

0x3e39,	// (0x00012575) set_opt_bg_pane_g1_copy1

0x3e41,	// (0x0001257d) set_opt_bg_pane_g2_copy1

0x7220,	// (0x0001595c) set_opt_bg_pane_g3_copy1

0x3e51,	// (0x0001258d) set_opt_bg_pane_g4_copy1

0x3e59,	// (0x00012595) set_opt_bg_pane_g5_copy1

0x3e61,	// (0x0001259d) set_opt_bg_pane_g6_copy1

0x7228,	// (0x00015964) set_opt_bg_pane_g7_copy1

0x7232,	// (0x0001596e) set_opt_bg_pane_g8_copy1

0x723a,	// (0x00015976) set_opt_bg_pane_g9_copy1

0x2e44,	// (0x00011580) bg_set_opt_pane_cp_vc

0x7242,	// (0x0001597e) setting_slider_pane_vc_t1

0x7251,	// (0x0001598d) setting_slider_pane_vc_t2

0x7260,	// (0x0001599c) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x0001e150) setting_slider_pane_vc_t

0x726f,	// (0x000159ab) slider_set_pane_vc

0x1d44,	// (0x00010480) volume_set_pane_vc_g1

0x203f,	// (0x0001077b) volume_set_pane_vc_g2

0x2048,	// (0x00010784) volume_set_pane_vc_g3

0x2051,	// (0x0001078d) volume_set_pane_vc_g4

0x205a,	// (0x00010796) volume_set_pane_vc_g5

0x2063,	// (0x0001079f) volume_set_pane_vc_g6

0x206c,	// (0x000107a8) volume_set_pane_vc_g7

0x2075,	// (0x000107b1) volume_set_pane_vc_g8

0x207e,	// (0x000107ba) volume_set_pane_vc_g9

0x2087,	// (0x000107c3) volume_set_pane_vc_g10

0x0009,

0xfa1b,	// (0x0001e157) volume_set_pane_vc_g

0x7277,	// (0x000159b3) volume_set_pane_vc

0x7281,	// (0x000159bd) button_value_adjust_pane_cp1_vc

0x728b,	// (0x000159c7) list_highlight_pane_cp2_vc

0x7294,	// (0x000159d0) list_set_pane_vc_ParamLimits

0x7294,	// (0x000159d0) list_set_pane_vc

0x72e6,	// (0x00015a22) main_pane_set_vc_t1_ParamLimits

0x72e6,	// (0x00015a22) main_pane_set_vc_t1

0x72fb,	// (0x00015a37) main_pane_set_vc_t2_ParamLimits

0x72fb,	// (0x00015a37) main_pane_set_vc_t2

0x730d,	// (0x00015a49) main_pane_set_vc_t3_ParamLimits

0x730d,	// (0x00015a49) main_pane_set_vc_t3

0x731f,	// (0x00015a5b) main_pane_set_vc_t4_ParamLimits

0x731f,	// (0x00015a5b) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x0001e16c) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x0001e16c) main_pane_set_vc_t

0x7331,	// (0x00015a6d) setting_code_pane_vc_ParamLimits

0x7331,	// (0x00015a6d) setting_code_pane_vc

0x7340,	// (0x00015a7c) setting_slider_graphic_pane_vc

0x7340,	// (0x00015a7c) setting_slider_pane_vc

0x7340,	// (0x00015a7c) setting_text_pane_vc

0x7340,	// (0x00015a7c) setting_volume_pane_vc

0x7348,	// (0x00015a84) scroll_pane_cp121_vc

0x3c13,	// (0x0001234f) set_content_pane_vc

0x7556,	// (0x00015c92) button_value_adjust_pane_g1

0x755f,	// (0x00015c9b) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x0001e1c4) button_value_adjust_pane_g

0x7568,	// (0x00015ca4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x7568,	// (0x00015ca4) form_field_slider_wide_pane_vc_t1

0x757c,	// (0x00015cb8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x757c,	// (0x00015cb8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x0001e1c9) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x0001e1c9) form_field_slider_wide_pane_vc_t

0x31b9,	// (0x000118f5) input_focus_pane_cp10_vc_ParamLimits

0x31b9,	// (0x000118f5) input_focus_pane_cp10_vc

0x75a8,	// (0x00015ce4) slider_cont_pane_cp1_vc_ParamLimits

0x75a8,	// (0x00015ce4) slider_cont_pane_cp1_vc

0x75b8,	// (0x00015cf4) slider_form_pane_g1_cp2

0x71f4,	// (0x00015930) slider_form_pane_g2_cp2

0x75e5,	// (0x00015d21) form_field_slider_pane_vc_t3

0x75f3,	// (0x00015d2f) form_field_slider_pane_vc_t4

0x7601,	// (0x00015d3d) slider_form_pane_vc_ParamLimits

0x7601,	// (0x00015d3d) slider_form_pane_vc

0x760e,	// (0x00015d4a) form_field_slider_pane_vc_t1_ParamLimits

0x760e,	// (0x00015d4a) form_field_slider_pane_vc_t1

0x757c,	// (0x00015cb8) form_field_slider_pane_vc_t2_ParamLimits

0x757c,	// (0x00015cb8) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x0001e1db) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x0001e1db) form_field_slider_pane_vc_t

0x31b9,	// (0x000118f5) input_focus_pane_cp9_vc_ParamLimits

0x31b9,	// (0x000118f5) input_focus_pane_cp9_vc

0x762a,	// (0x00015d66) slider_cont_pane_vc_ParamLimits

0x762a,	// (0x00015d66) slider_cont_pane_vc

0x763c,	// (0x00015d78) list_form_graphic_pane_cp_vc_ParamLimits

0x763c,	// (0x00015d78) list_form_graphic_pane_cp_vc

0x557d,	// (0x00013cb9) form_field_popup_wide_pane_vc_g1

0x7651,	// (0x00015d8d) form_field_popup_wide_pane_vc_t1_ParamLimits

0x7651,	// (0x00015d8d) form_field_popup_wide_pane_vc_t1

0x3cfd,	// (0x00012439) input_focus_pane_cp8_vc_ParamLimits

0x3cfd,	// (0x00012439) input_focus_pane_cp8_vc

0x7696,	// (0x00015dd2) list_form_wide_pane_vc_ParamLimits

0x7696,	// (0x00015dd2) list_form_wide_pane_vc

0x76a2,	// (0x00015dde) list_form_graphic_pane_vc_g1

0x76aa,	// (0x00015de6) list_form_graphic_pane_vc_t1_ParamLimits

0x76aa,	// (0x00015de6) list_form_graphic_pane_vc_t1

0x2f24,	// (0x00011660) list_highlight_pane_cp5_vc_ParamLimits

0x2f24,	// (0x00011660) list_highlight_pane_cp5_vc

0x76c6,	// (0x00015e02) list_form_graphic_pane_vc_ParamLimits

0x76c6,	// (0x00015e02) list_form_graphic_pane_vc

0x557d,	// (0x00013cb9) form_field_popup_pane_vc_g1

0x76dc,	// (0x00015e18) form_field_popup_pane_vc_t1_ParamLimits

0x76dc,	// (0x00015e18) form_field_popup_pane_vc_t1

0x3cfd,	// (0x00012439) input_focus_pane_cp7_vc_ParamLimits

0x3cfd,	// (0x00012439) input_focus_pane_cp7_vc

0x76f3,	// (0x00015e2f) list_form_pane_vc_ParamLimits

0x76f3,	// (0x00015e2f) list_form_pane_vc

0x76ff,	// (0x00015e3b) data_form_pane_vc_t1_ParamLimits

0x76ff,	// (0x00015e3b) data_form_pane_vc_t1

0x3e39,	// (0x00012575) input_focus_pane_vc_g1

0x3e41,	// (0x0001257d) input_focus_pane_vc_g2

0x3e49,	// (0x00012585) input_focus_pane_vc_g3

0x3e51,	// (0x0001258d) input_focus_pane_vc_g4

0x3e59,	// (0x00012595) input_focus_pane_vc_g5

0x3e61,	// (0x0001259d) input_focus_pane_vc_g6

0x3e69,	// (0x000125a5) input_focus_pane_vc_g7

0x3e71,	// (0x000125ad) input_focus_pane_vc_g8

0x3e79,	// (0x000125b5) input_focus_pane_vc_g9

0x2e3a,	// (0x00011576) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x0001ddc9) input_focus_pane_vc_g

0x5571,	// (0x00013cad) data_form_pane_vc_ParamLimits

0x5571,	// (0x00013cad) data_form_pane_vc

0x557d,	// (0x00013cb9) form_field_data_pane_vc_g1

0x771a,	// (0x00015e56) form_field_data_pane_vc_t1_ParamLimits

0x771a,	// (0x00015e56) form_field_data_pane_vc_t1

0x3cfd,	// (0x00012439) input_focus_pane_vc_ParamLimits

0x3cfd,	// (0x00012439) input_focus_pane_vc

0x7734,	// (0x00015e70) button_value_adjust_pane_cp3_vc

0x773c,	// (0x00015e78) button_value_adjust_pane_cp5_vc

0x7744,	// (0x00015e80) form_field_data_pane_vc_ParamLimits

0x7744,	// (0x00015e80) form_field_data_pane_vc

0x775b,	// (0x00015e97) form_field_data_pane_vc_cp2

0x7763,	// (0x00015e9f) form_field_data_wide_pane_vc_ParamLimits

0x7763,	// (0x00015e9f) form_field_data_wide_pane_vc

0x7779,	// (0x00015eb5) form_field_data_wide_pane_vc_cp2

0x7781,	// (0x00015ebd) form_field_popup_pane_vc_ParamLimits

0x7781,	// (0x00015ebd) form_field_popup_pane_vc

0x7798,	// (0x00015ed4) form_field_popup_wide_pane_vc_ParamLimits

0x7798,	// (0x00015ed4) form_field_popup_wide_pane_vc

0x77ae,	// (0x00015eea) form_field_slider_pane_vc_ParamLimits

0x77ae,	// (0x00015eea) form_field_slider_pane_vc

0x77c1,	// (0x00015efd) form_field_slider_wide_pane_vc_ParamLimits

0x77c1,	// (0x00015efd) form_field_slider_wide_pane_vc

0xe63a,	// (0x0001cd76) grid_touch_1_pane_ParamLimits

0xe63a,	// (0x0001cd76) grid_touch_1_pane

0xe64e,	// (0x0001cd8a) grid_touch_2_pane_ParamLimits

0xe64e,	// (0x0001cd8a) grid_touch_2_pane

0x7896,	// (0x00015fd2) touch_pane_g1_ParamLimits

0x7896,	// (0x00015fd2) touch_pane_g1

0x77f8,	// (0x00015f34) cell_app_pane_cp_wide_ParamLimits

0x77f8,	// (0x00015f34) cell_app_pane_cp_wide

0x7809,	// (0x00015f45) grid_popup_fast_wide_pane_ParamLimits

0x7809,	// (0x00015f45) grid_popup_fast_wide_pane

0x781d,	// (0x00015f59) scroll_pane_cp19_ParamLimits

0x781d,	// (0x00015f59) scroll_pane_cp19

0x2e44,	// (0x00011580) bg_popup_window_pane_cp20

0x7831,	// (0x00015f6d) listscroll_popup_fast_wide_pane

0x4046,	// (0x00012782) grid_indicator_nsta_pane

0x7839,	// (0x00015f75) clock_nsta_pane_g1

0x7842,	// (0x00015f7e) clock_nsta_pane_t1

0xe678,	// (0x0001cdb4) cell_indicator_nsta_pane_ParamLimits

0xe678,	// (0x0001cdb4) cell_indicator_nsta_pane

0x7896,	// (0x00015fd2) cell_indicator_nsta_pane_g1

0xe695,	// (0x0001cdd1) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x0001e1ec) cell_indicator_nsta_pane_g

0x78ba,	// (0x00015ff6) clock_nsta_pane_cp

0x78c2,	// (0x00015ffe) indicator_nsta_pane_cp

0x78cb,	// (0x00016007) nsta_clock_indic_pane_g1

0x3007,	// (0x00011743) grid_indicator_pane

0x4415,	// (0x00012b51) scroll_pane_cp29

0x12c7,	// (0x0000fa03) indicator_nsta_pane_cp2_ParamLimits

0x12c7,	// (0x0000fa03) indicator_nsta_pane_cp2

0x2f24,	// (0x00011660) main_apps_wheel_pane

0x57fd,	// (0x00013f39) form_midp_field_text_pane_ParamLimits

0x5942,	// (0x0001407e) scroll_bar_cp050_ParamLimits

0x7934,	// (0x00016070) cell_indicator_pane_ParamLimits

0x7934,	// (0x00016070) cell_indicator_pane

0x7951,	// (0x0001608d) cell_indicator_pane_g1

0xe6ab,	// (0x0001cde7) grid_wheel_folder_pane_ParamLimits

0xe6ab,	// (0x0001cde7) grid_wheel_folder_pane

0xe6b9,	// (0x0001cdf5) list_wheel_apps_pane_ParamLimits

0xe6b9,	// (0x0001cdf5) list_wheel_apps_pane

0xe6c7,	// (0x0001ce03) main_apps_wheel_pane_g1_ParamLimits

0xe6c7,	// (0x0001ce03) main_apps_wheel_pane_g1

0xe6d3,	// (0x0001ce0f) main_apps_wheel_pane_g2_ParamLimits

0xe6d3,	// (0x0001ce0f) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x0001e208) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x0001e208) main_apps_wheel_pane_g

0xe6e1,	// (0x0001ce1d) main_apps_wheel_pane_t1_ParamLimits

0xe6e1,	// (0x0001ce1d) main_apps_wheel_pane_t1

0xe6f5,	// (0x0001ce31) list_wheel_apps_pane_g1

0xe6fd,	// (0x0001ce39) list_wheel_apps_pane_g2

0xe705,	// (0x0001ce41) list_wheel_apps_pane_g3

0xe70d,	// (0x0001ce49) list_wheel_apps_pane_g4

0xe717,	// (0x0001ce53) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x0001e20d) list_wheel_apps_pane_g

0x49f3,	// (0x0001312f) navi_icon_text_pane

0xdc47,	// (0x0001c383) aid_fill_nsta

0x7a18,	// (0x00016154) navi_icon_text_pane_g1

0x7a24,	// (0x00016160) navi_icon_text_pane_t1

0x488f,	// (0x00012fcb) list_set_graphic_pane_t1_ParamLimits

0x488f,	// (0x00012fcb) list_set_graphic_pane_t1

0x6084,	// (0x000147c0) popup_midp_note_alarm_window_t6_ParamLimits

0x6084,	// (0x000147c0) popup_midp_note_alarm_window_t6

0x6096,	// (0x000147d2) popup_midp_note_alarm_window_t7_ParamLimits

0x6096,	// (0x000147d2) popup_midp_note_alarm_window_t7

0x60a8,	// (0x000147e4) popup_midp_note_alarm_window_t8_ParamLimits

0x60a8,	// (0x000147e4) popup_midp_note_alarm_window_t8

0x60ba,	// (0x000147f6) popup_midp_note_alarm_window_t9_ParamLimits

0x60ba,	// (0x000147f6) popup_midp_note_alarm_window_t9

0x60cc,	// (0x00014808) popup_midp_note_alarm_window_t10_ParamLimits

0x60cc,	// (0x00014808) popup_midp_note_alarm_window_t10

0x60de,	// (0x0001481a) popup_midp_note_alarm_window_t11_ParamLimits

0x60de,	// (0x0001481a) popup_midp_note_alarm_window_t11

0x60f0,	// (0x0001482c) scroll_pane_cp17_ParamLimits

0x60f0,	// (0x0001482c) scroll_pane_cp17

0x1d44,	// (0x00010480) volume_small_pane_cp_g1

0x2090,	// (0x000107cc) volume_small_pane_cp_g2

0x2099,	// (0x000107d5) volume_small_pane_cp_g3

0x20a2,	// (0x000107de) volume_small_pane_cp_g4

0x20ab,	// (0x000107e7) volume_small_pane_cp_g5

0x20b4,	// (0x000107f0) volume_small_pane_cp_g6

0x20bd,	// (0x000107f9) volume_small_pane_cp_g7

0x20c6,	// (0x00010802) volume_small_pane_cp_g8

0x20cf,	// (0x0001080b) volume_small_pane_cp_g9

0x20d8,	// (0x00010814) volume_small_pane_cp_g10

0x4c48,	// (0x00013384) midp_ticker_pane_g1_ParamLimits

0x4c54,	// (0x00013390) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x0001de95) midp_ticker_pane_g_ParamLimits

0x4c60,	// (0x0001339c) midp_ticker_pane_t1_ParamLimits

0xdc6b,	// (0x0001c3a7) aid_fill_nsta_2

0x592e,	// (0x0001406a) list_form2_midp_pane

0x6aa5,	// (0x000151e1) midp_editing_number_pane_ParamLimits

0x6ab4,	// (0x000151f0) midp_ticker_pane_ParamLimits

0x7a36,	// (0x00016172) form2_midp_field_pane

0x7a5a,	// (0x00016196) scroll_pane_cp51

0x7a7a,	// (0x000161b6) form2_midp_button_pane_ParamLimits

0x7a7a,	// (0x000161b6) form2_midp_button_pane

0x7a8c,	// (0x000161c8) form2_midp_content_pane_ParamLimits

0x7a8c,	// (0x000161c8) form2_midp_content_pane

0x7aa6,	// (0x000161e2) form2_midp_field_choice_group_pane

0x7aae,	// (0x000161ea) form2_midp_field_pane_g1

0x7ab6,	// (0x000161f2) form2_midp_field_pane_g2

0x7abe,	// (0x000161fa) form2_midp_field_pane_g3

0x7ac6,	// (0x00016202) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x0001e232) form2_midp_field_pane_g

0x7ace,	// (0x0001620a) form2_midp_gauge_slider_pane

0x7ad6,	// (0x00016212) form2_midp_gauge_wait_pane

0x7ade,	// (0x0001621a) form2_midp_image_pane_ParamLimits

0x7ade,	// (0x0001621a) form2_midp_image_pane

0x7af9,	// (0x00016235) form2_midp_label_pane_ParamLimits

0x7af9,	// (0x00016235) form2_midp_label_pane

0xe74a,	// (0x0001ce86) form2_midp_label_pane_cp_ParamLimits

0xe74a,	// (0x0001ce86) form2_midp_label_pane_cp

0x7b33,	// (0x0001626f) form2_midp_string_pane_ParamLimits

0x7b33,	// (0x0001626f) form2_midp_string_pane

0x7b45,	// (0x00016281) form2_midp_text_pane_ParamLimits

0x7b45,	// (0x00016281) form2_midp_text_pane

0x7b5e,	// (0x0001629a) form2_midp_time_pane

0x7b6e,	// (0x000162aa) input_focus_pane_cp51_ParamLimits

0x7b6e,	// (0x000162aa) input_focus_pane_cp51

0x7b86,	// (0x000162c2) form2_midp_label_pane_t1_ParamLimits

0x7b86,	// (0x000162c2) form2_midp_label_pane_t1

0x7bc6,	// (0x00016302) form2_mdip_text_pane_t1_ParamLimits

0x7bc6,	// (0x00016302) form2_mdip_text_pane_t1

0x7be2,	// (0x0001631e) form2_midp_time_pane_t1

0x7bfd,	// (0x00016339) form2_midp_gauge_slider_pane_t1

0xe76b,	// (0x0001cea7) form2_midp_gauge_slider_pane_t2

0xe77f,	// (0x0001cebb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x0001e23b) form2_midp_gauge_slider_pane_t

0x7c33,	// (0x0001636f) form2_midp_slider_pane

0x7c3f,	// (0x0001637b) form2_midp_gauge_wait_pane_t1

0x7c4d,	// (0x00016389) form2_midp_wait_pane_ParamLimits

0x7c4d,	// (0x00016389) form2_midp_wait_pane

0xe793,	// (0x0001cecf) list_single_2graphic_pane_cp4_ParamLimits

0xe793,	// (0x0001cecf) list_single_2graphic_pane_cp4

0xe084,	// (0x0001c7c0) list_single_midp_graphic_pane_cp_ParamLimits

0xe084,	// (0x0001c7c0) list_single_midp_graphic_pane_cp

0x2e44,	// (0x00011580) list_highlight_pane_cp20

0x7ca7,	// (0x000163e3) list_single_2graphic_pane_g1_cp4

0x700f,	// (0x0001574b) list_single_2graphic_pane_g2_cp4

0x7caf,	// (0x000163eb) list_single_2graphic_pane_t1_cp4

0x2f24,	// (0x00011660) list_highlight_pane_cp21

0x7cbe,	// (0x000163fa) list_single_midp_graphic_pane_g4_cp

0x7ccd,	// (0x00016409) list_single_midp_graphic_pane_t1_cp

0xe7aa,	// (0x0001cee6) form2_mdip_string_pane_t1_ParamLimits

0xe7aa,	// (0x0001cee6) form2_mdip_string_pane_t1

0x2e44,	// (0x00011580) bg_wml_button_pane_cp2

0x2e3a,	// (0x00011576) form2_midp_image_pane_g1

0x39d7,	// (0x00012113) list_double_large_graphic_pane_g5_ParamLimits

0x39d7,	// (0x00012113) list_double_large_graphic_pane_g5

0x4eb9,	// (0x000135f5) midp_form_pane_ParamLimits

0x2f24,	// (0x00011660) main_apps_wheel_pane_ParamLimits

0xb786,	// (0x00019ec2) popup_preview_window_ParamLimits

0xb786,	// (0x00019ec2) popup_preview_window

0x1b45,	// (0x00010281) popup_touch_info_window_ParamLimits

0x1b45,	// (0x00010281) popup_touch_info_window

0x1b63,	// (0x0001029f) popup_touch_menu_window_ParamLimits

0x1b63,	// (0x0001029f) popup_touch_menu_window

0x2e30,	// (0x0001156c) bg_popup_sub_pane_cp6

0x7e1c,	// (0x00016558) list_touch_menu_pane

0x7e24,	// (0x00016560) list_single_touch_menu_pane_ParamLimits

0x7e24,	// (0x00016560) list_single_touch_menu_pane

0x7e38,	// (0x00016574) list_single_touch_menu_pane_t1

0x2f24,	// (0x00011660) bg_popup_sub_pane_cp7_ParamLimits

0x2f24,	// (0x00011660) bg_popup_sub_pane_cp7

0x7e46,	// (0x00016582) heading_sub_pane

0x7e4e,	// (0x0001658a) list_touch_info_pane_ParamLimits

0x7e4e,	// (0x0001658a) list_touch_info_pane

0x7e5d,	// (0x00016599) list_single_touch_info_pane_ParamLimits

0x7e5d,	// (0x00016599) list_single_touch_info_pane

0x7e6f,	// (0x000165ab) list_single_touch_info_pane_t1

0x7e7d,	// (0x000165b9) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x0001e249) list_single_touch_info_pane_t

0x4b75,	// (0x000132b1) bg_popup_heading_pane_cp

0x7e8b,	// (0x000165c7) heading_sub_pane_t1

0x550b,	// (0x00013c47) bg_popup_preview_window_pane_cp_ParamLimits

0x550b,	// (0x00013c47) bg_popup_preview_window_pane_cp

0x7e46,	// (0x00016582) heading_preview_pane

0x7e4e,	// (0x0001658a) list_preview_pane_ParamLimits

0x7e4e,	// (0x0001658a) list_preview_pane

0x7e99,	// (0x000165d5) popup_preview_window_g1

0x7e5d,	// (0x00016599) list_single_preview_pane_ParamLimits

0x7e5d,	// (0x00016599) list_single_preview_pane

0x7ea1,	// (0x000165dd) list_single_preview_pane_g1

0x7ea9,	// (0x000165e5) list_single_preview_pane_t1

0x7e6f,	// (0x000165ab) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x0001e24e) list_single_preview_pane_t

0x7eb7,	// (0x000165f3) bg_popup_heading_pane_cp2_ParamLimits

0x7eb7,	// (0x000165f3) bg_popup_heading_pane_cp2

0x7ecd,	// (0x00016609) heading_preview_pane_g1

0x7ed5,	// (0x00016611) heading_preview_pane_t1_ParamLimits

0x7ed5,	// (0x00016611) heading_preview_pane_t1

0x302a,	// (0x00011766) soft_indicator_pane_t1_ParamLimits

0x3704,	// (0x00011e40) scroll_pane_ParamLimits

0x4311,	// (0x00012a4d) scroll_sc2_left_pane

0x431a,	// (0x00012a56) scroll_sc2_right_pane

0x4339,	// (0x00012a75) scroll_bg_pane_g1_ParamLimits

0x434e,	// (0x00012a8a) scroll_bg_pane_g2_ParamLimits

0x4366,	// (0x00012aa2) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x0001de20) scroll_bg_pane_g_ParamLimits

0x4339,	// (0x00012a75) scroll_handle_pane_g1_ParamLimits

0x4388,	// (0x00012ac4) scroll_handle_pane_g2_ParamLimits

0x4366,	// (0x00012aa2) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0001de27) scroll_handle_pane_g_ParamLimits

0x161f,	// (0x0000fd5b) popup_choice_list_window_ParamLimits

0x161f,	// (0x0000fd5b) popup_choice_list_window

0x530d,	// (0x00013a49) choice_list_pane

0x53bd,	// (0x00013af9) cell_toolbar_pane_t1

0x53e5,	// (0x00013b21) toolbar_button_pane_ParamLimits

0x65a2,	// (0x00014cde) ai_gene_pane_1_t2_ParamLimits

0x65a2,	// (0x00014cde) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x0001e04a) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x0001e04a) ai_gene_pane_1_t

0x7ef2,	// (0x0001662e) scroll_sc2_left_pane_g1

0x7ef2,	// (0x0001662e) scroll_sc2_right_pane_g1

0x4eb9,	// (0x000135f5) bg_popup_sub_pane_cp10

0x7efc,	// (0x00016638) list_choice_list_pane

0x7f13,	// (0x0001664f) list_single_choice_list_pane_ParamLimits

0x7f13,	// (0x0001664f) list_single_choice_list_pane

0x400f,	// (0x0001274b) list_single_choice_list_pane_g1

0x4017,	// (0x00012753) list_single_choice_list_pane_t1_ParamLimits

0x4017,	// (0x00012753) list_single_choice_list_pane_t1

0x7f26,	// (0x00016662) choice_list_pane_g1

0x7f2e,	// (0x0001666a) choice_list_pane_t1

0x2e30,	// (0x0001156c) input_focus_pane_cp11

0x41ee,	// (0x0001292a) title_pane_stacon_g2_ParamLimits

0x41ee,	// (0x0001292a) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0001de06) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0001de06) title_pane_stacon_g

0x4b75,	// (0x000132b1) cursor_press_pane

0xb445,	// (0x00019b81) popup_fep_hwr_window_ParamLimits

0xb445,	// (0x00019b81) popup_fep_hwr_window

0x173d,	// (0x0000fe79) popup_fep_vkb_window_ParamLimits

0x173d,	// (0x0000fe79) popup_fep_vkb_window

0x7f3c,	// (0x00016678) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x0001e277) fep_vkb_side_pane_g_ParamLimits

0x211a,	// (0x00010856) fep_hwr_candidate_pane_ParamLimits

0x211a,	// (0x00010856) fep_hwr_candidate_pane

0x2144,	// (0x00010880) fep_hwr_side_pane_ParamLimits

0x2144,	// (0x00010880) fep_hwr_side_pane

0x2164,	// (0x000108a0) fep_hwr_top_pane_ParamLimits

0x2164,	// (0x000108a0) fep_hwr_top_pane

0x217c,	// (0x000108b8) fep_hwr_write_pane_ParamLimits

0x217c,	// (0x000108b8) fep_hwr_write_pane

0xfb3b,	// (0x0001e277) fep_vkb_side_pane_g

0x7f44,	// (0x00016680) fep_hwr_top_pane_g1

0x7f56,	// (0x00016692) fep_hwr_top_pane_g2

0x21b6,	// (0x000108f2) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x0001e253) fep_hwr_top_pane_g

0x21cb,	// (0x00010907) fep_hwr_top_text_pane

0x44db,	// (0x00012c17) fep_hwr_top_text_pane_g1

0x7f8c,	// (0x000166c8) fep_hwr_top_text_pane_t1

0x22c1,	// (0x000109fd) fep_hwr_candidate_pane_g1

0x81e6,	// (0x00016922) fep_vkb_keypad_pane_g3_ParamLimits

0x81e6,	// (0x00016922) fep_vkb_keypad_pane_g3

0x820e,	// (0x0001694a) fep_vkb_keypad_pane_g4_ParamLimits

0x820e,	// (0x0001694a) fep_vkb_keypad_pane_g4

0x827d,	// (0x000169b9) fep_vkb_bottom_pane_g2_ParamLimits

0x827d,	// (0x000169b9) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x0001e27e) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x0001e27e) fep_vkb_bottom_pane_g

0x7ef2,	// (0x0001662e) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x0001e288) cell_vkb_side_pane_g

0x8308,	// (0x00016a44) cell_vkb_side_pane_t1

0x8316,	// (0x00016a52) cell_vkb_side_pane_t1_copy1

0x7ef2,	// (0x0001662e) bg_fep_vkb_candidate_pane_g2

0x8448,	// (0x00016b84) cell_vkb_candidate_pane_ParamLimits

0x7f9a,	// (0x000166d6) aid_size_cell_vkb_ParamLimits

0x7f9a,	// (0x000166d6) aid_size_cell_vkb

0x8448,	// (0x00016b84) cell_vkb_candidate_pane

0x22e8,	// (0x00010a24) bg_popup_fep_shadow_pane_g1

0x8028,	// (0x00016764) fep_vkb_bottom_pane_ParamLimits

0x8028,	// (0x00016764) fep_vkb_bottom_pane

0x8065,	// (0x000167a1) fep_vkb_candidate_pane_ParamLimits

0x8065,	// (0x000167a1) fep_vkb_candidate_pane

0x8081,	// (0x000167bd) fep_vkb_keypad_pane_ParamLimits

0x8081,	// (0x000167bd) fep_vkb_keypad_pane

0x80c7,	// (0x00016803) fep_vkb_side_pane_ParamLimits

0x80c7,	// (0x00016803) fep_vkb_side_pane

0x8103,	// (0x0001683f) fep_vkb_top_pane_ParamLimits

0x8103,	// (0x0001683f) fep_vkb_top_pane

0x813f,	// (0x0001687b) fep_vkb_top_pane_g1_ParamLimits

0x813f,	// (0x0001687b) fep_vkb_top_pane_g1

0x814e,	// (0x0001688a) fep_vkb_top_pane_g2_ParamLimits

0x814e,	// (0x0001688a) fep_vkb_top_pane_g2

0x815d,	// (0x00016899) fep_vkb_top_pane_g3_ParamLimits

0x815d,	// (0x00016899) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x0001e26e) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x0001e26e) fep_vkb_top_pane_g

0x817b,	// (0x000168b7) fep_vkb_top_text_pane_ParamLimits

0x817b,	// (0x000168b7) fep_vkb_top_text_pane

0xe842,	// (0x0001cf7e) fep_vkb_side_pane_g1_ParamLimits

0xe842,	// (0x0001cf7e) fep_vkb_side_pane_g1

0x81d5,	// (0x00016911) grid_vkb_side_pane_ParamLimits

0x81d5,	// (0x00016911) grid_vkb_side_pane

0x22f0,	// (0x00010a2c) bg_popup_fep_shadow_pane_g2

0x22f9,	// (0x00010a35) bg_popup_fep_shadow_pane_g3

0x2301,	// (0x00010a3d) bg_popup_fep_shadow_pane_g4

0x230a,	// (0x00010a46) bg_popup_fep_shadow_pane_g5

0x2314,	// (0x00010a50) bg_popup_fep_shadow_pane_g6

0x231c,	// (0x00010a58) bg_popup_fep_shadow_pane_g7

0x3e51,	// (0x0001258d) bg_popup_fep_shadow_pane_g8

0x822c,	// (0x00016968) grid_vkb_keypad_number_pane_ParamLimits

0x822c,	// (0x00016968) grid_vkb_keypad_number_pane

0x823c,	// (0x00016978) grid_vkb_keypad_pane_ParamLimits

0x823c,	// (0x00016978) grid_vkb_keypad_pane

0x8262,	// (0x0001699e) fep_vkb_bottom_pane_g1_ParamLimits

0x8262,	// (0x0001699e) fep_vkb_bottom_pane_g1

0x828b,	// (0x000169c7) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x828b,	// (0x000169c7) grid_vkb_keypad_bottom_left_pane

0x82a0,	// (0x000169dc) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x82a0,	// (0x000169dc) grid_vkb_keypad_bottom_right_pane

0x82b5,	// (0x000169f1) fep_vkb_top_text_pane_g1

0xe889,	// (0x0001cfc5) fep_vkb_top_text_pane_t1

0xe89b,	// (0x0001cfd7) cell_vkb_side_pane_ParamLimits

0xe89b,	// (0x0001cfd7) cell_vkb_side_pane

0x7ef2,	// (0x0001662e) cell_vkb_side_pane_g1

0x8324,	// (0x00016a60) cell_vkb_keypad_pane_ParamLimits

0x8324,	// (0x00016a60) cell_vkb_keypad_pane

0x839f,	// (0x00016adb) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x0001e29b) bg_popup_fep_shadow_pane_g

0x232e,	// (0x00010a6a) cell_hwr_side_pane_g1

0x232e,	// (0x00010a6a) cell_hwr_side_pane_g2

0x83a9,	// (0x00016ae5) cell_vkb_keypad_pane_t1

0xe8b1,	// (0x0001cfed) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xe8b1,	// (0x0001cfed) cell_vkb_keypad_bottom_left_pane

0xe8c6,	// (0x0001d002) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xe8c6,	// (0x0001d002) cell_vkb_keypad_bottom_right_pane

0x7ef2,	// (0x0001662e) cell_vkb_keypad_bottom_left_pane_g1

0x7ef2,	// (0x0001662e) cell_vkb_keypad_bottom_right_pane_g1

0x840d,	// (0x00016b49) cell_vkb_keypad_number_pane_ParamLimits

0x840d,	// (0x00016b49) cell_vkb_keypad_number_pane

0x842c,	// (0x00016b68) cell_vkb_keypad_number_pane_g1

0x8436,	// (0x00016b72) cell_vkb_keypad_number_pane_g2

0x843f,	// (0x00016b7b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x0001e28d) cell_vkb_keypad_number_pane_g

0x83a9,	// (0x00016ae5) cell_vkb_keypad_number_pane_t1

0x8465,	// (0x00016ba1) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x0001e2ae) cell_hwr_side_pane_g

0x847e,	// (0x00016bba) cell_hwr_side_pane_t1

0x2338,	// (0x00010a74) cell_hwr_side_pane_t1_copy1

0x2346,	// (0x00010a82) cell_hwr_candidate_pane_g1

0x2375,	// (0x00010ab1) cell_hwr_candidate_pane_t1

0x7ef2,	// (0x0001662e) cell_vkb_candidate_pane_g2

0x84c2,	// (0x00016bfe) cell_vkb_candidate_pane_t1

0x20e1,	// (0x0001081d) bg_popup_fep_shadow_pane_ParamLimits

0x20e1,	// (0x0001081d) bg_popup_fep_shadow_pane

0x2196,	// (0x000108d2) bg_fep_hwr_top_pane_g4

0x7f68,	// (0x000166a4) bg_hwr_side_pane_g1_ParamLimits

0x7f68,	// (0x000166a4) bg_hwr_side_pane_g1

0xbc01,	// (0x0001a33d) cell_hwr_side_pane_ParamLimits

0xbc01,	// (0x0001a33d) cell_hwr_side_pane

0x2242,	// (0x0001097e) fep_hwr_write_pane_g1_ParamLimits

0x2242,	// (0x0001097e) fep_hwr_write_pane_g1

0x224f,	// (0x0001098b) fep_hwr_write_pane_g2_ParamLimits

0x224f,	// (0x0001098b) fep_hwr_write_pane_g2

0x225c,	// (0x00010998) fep_hwr_write_pane_g3_ParamLimits

0x225c,	// (0x00010998) fep_hwr_write_pane_g3

0xbc21,	// (0x0001a35d) fep_hwr_write_pane_g4_ParamLimits

0xbc21,	// (0x0001a35d) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x0001e25a) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x0001e25a) fep_hwr_write_pane_g

0x2196,	// (0x000108d2) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2196,	// (0x000108d2) bg_fep_hwr_candidate_pane_g2

0x227f,	// (0x000109bb) cell_hwr_candidate_pane_ParamLimits

0x227f,	// (0x000109bb) cell_hwr_candidate_pane

0x22c1,	// (0x000109fd) fep_hwr_candidate_pane_g1_ParamLimits

0x7fc8,	// (0x00016704) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7fc8,	// (0x00016704) bg_popup_fep_shadow_pane_cp2

0x816d,	// (0x000168a9) fep_vkb_top_pane_g4_ParamLimits

0x816d,	// (0x000168a9) fep_vkb_top_pane_g4

0x81b3,	// (0x000168ef) fep_vkb_side_pane_g2_ParamLimits

0x81b3,	// (0x000168ef) fep_vkb_side_pane_g2

0xd60f,	// (0x0001bd4b) list_setting_pane_t4_ParamLimits

0xd60f,	// (0x0001bd4b) list_setting_pane_t4

0xd689,	// (0x0001bdc5) list_setting_number_pane_t5_ParamLimits

0xd689,	// (0x0001bdc5) list_setting_number_pane_t5

0x4522,	// (0x00012c5e) list_double_heading_pane_cp2_ParamLimits

0x4522,	// (0x00012c5e) list_double_heading_pane_cp2

0x3d23,	// (0x0001245f) list_double_heading_pane_g1_cp2_ParamLimits

0x3d23,	// (0x0001245f) list_double_heading_pane_g1_cp2

0x3d2f,	// (0x0001246b) list_double_heading_pane_g2_cp2_ParamLimits

0x3d2f,	// (0x0001246b) list_double_heading_pane_g2_cp2

0x84d0,	// (0x00016c0c) list_double_heading_pane_t1_cp2_ParamLimits

0x84d0,	// (0x00016c0c) list_double_heading_pane_t1_cp2

0x84e6,	// (0x00016c22) list_double_heading_pane_t2_cp2_ParamLimits

0x84e6,	// (0x00016c22) list_double_heading_pane_t2_cp2

0x2e18,	// (0x00011554) aid_value_unit2

0x0e69,	// (0x0000f5a5) popup_preview_fixed_window

0x31c7,	// (0x00011903) bg_popup_preview_window_pane_cp02

0x84f8,	// (0x00016c34) list_preview_fixed_pane

0x853e,	// (0x00016c7a) list_empty_pane_fp_ParamLimits

0x853e,	// (0x00016c7a) list_empty_pane_fp

0x853e,	// (0x00016c7a) list_single_cale_day_pane_fp_ParamLimits

0x853e,	// (0x00016c7a) list_single_cale_day_pane_fp

0x853e,	// (0x00016c7a) list_single_graphic_heading_pane_fp_ParamLimits

0x853e,	// (0x00016c7a) list_single_graphic_heading_pane_fp

0x853e,	// (0x00016c7a) list_single_graphic_pane_fp_ParamLimits

0x853e,	// (0x00016c7a) list_single_graphic_pane_fp

0x853e,	// (0x00016c7a) list_single_heading_pane_fp_ParamLimits

0x853e,	// (0x00016c7a) list_single_heading_pane_fp

0x853e,	// (0x00016c7a) list_single_pane_fp_ParamLimits

0x853e,	// (0x00016c7a) list_single_pane_fp

0x8555,	// (0x00016c91) list_single_pane_fp_g1_ParamLimits

0x8555,	// (0x00016c91) list_single_pane_fp_g1

0x3d23,	// (0x0001245f) list_single_pane_fp_g2_ParamLimits

0x3d23,	// (0x0001245f) list_single_pane_fp_g2

0x3d2f,	// (0x0001246b) list_single_pane_fp_g3_ParamLimits

0x3d2f,	// (0x0001246b) list_single_pane_fp_g3

0x8561,	// (0x00016c9d) list_single_pane_fp_g4_ParamLimits

0x8561,	// (0x00016c9d) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x0001e2c1) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x0001e2c1) list_single_pane_fp_g

0x856d,	// (0x00016ca9) list_single_pane_fp_t1_ParamLimits

0x856d,	// (0x00016ca9) list_single_pane_fp_t1

0x8584,	// (0x00016cc0) list_single_graphic_pane_fp_g1_ParamLimits

0x8584,	// (0x00016cc0) list_single_graphic_pane_fp_g1

0x8555,	// (0x00016c91) list_single_graphic_pane_fp_g2_ParamLimits

0x8555,	// (0x00016c91) list_single_graphic_pane_fp_g2

0x3d23,	// (0x0001245f) list_single_graphic_pane_fp_g3_ParamLimits

0x3d23,	// (0x0001245f) list_single_graphic_pane_fp_g3

0x3d2f,	// (0x0001246b) list_single_graphic_pane_fp_g4_ParamLimits

0x3d2f,	// (0x0001246b) list_single_graphic_pane_fp_g4

0x8561,	// (0x00016c9d) list_single_graphic_pane_fp_g5_ParamLimits

0x8561,	// (0x00016c9d) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001e2ca) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001e2ca) list_single_graphic_pane_fp_g

0x8590,	// (0x00016ccc) list_single_graphic_pane_fp_t1_ParamLimits

0x8590,	// (0x00016ccc) list_single_graphic_pane_fp_t1

0x8584,	// (0x00016cc0) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x8584,	// (0x00016cc0) list_single_graphic_heading_pane_fp_g1

0x8555,	// (0x00016c91) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8555,	// (0x00016c91) list_single_graphic_heading_pane_fp_g2

0x3d23,	// (0x0001245f) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x3d23,	// (0x0001245f) list_single_graphic_heading_pane_fp_g3

0x3d2f,	// (0x0001246b) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x3d2f,	// (0x0001246b) list_single_graphic_heading_pane_fp_g4

0x8561,	// (0x00016c9d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8561,	// (0x00016c9d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001e2ca) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001e2ca) list_single_graphic_heading_pane_fp_g

0x85a6,	// (0x00016ce2) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x85a6,	// (0x00016ce2) list_single_graphic_heading_pane_fp_t1

0x85bc,	// (0x00016cf8) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x85bc,	// (0x00016cf8) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x0001e2d5) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x0001e2d5) list_single_graphic_heading_pane_fp_t

0x85ce,	// (0x00016d0a) list_single_cale_day_pane_fp_g1_ParamLimits

0x85ce,	// (0x00016d0a) list_single_cale_day_pane_fp_g1

0x8606,	// (0x00016d42) list_single_cale_day_pane_fp_g2_ParamLimits

0x8606,	// (0x00016d42) list_single_cale_day_pane_fp_g2

0x8612,	// (0x00016d4e) list_single_cale_day_pane_fp_g3_ParamLimits

0x8612,	// (0x00016d4e) list_single_cale_day_pane_fp_g3

0x863a,	// (0x00016d76) list_single_cale_day_pane_fp_g4_ParamLimits

0x863a,	// (0x00016d76) list_single_cale_day_pane_fp_g4

0x865e,	// (0x00016d9a) list_single_cale_day_pane_fp_g5_ParamLimits

0x865e,	// (0x00016d9a) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x0001e2da) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x0001e2da) list_single_cale_day_pane_fp_g

0x8682,	// (0x00016dbe) list_single_cale_day_pane_fp_t1_ParamLimits

0x8682,	// (0x00016dbe) list_single_cale_day_pane_fp_t1

0x86a8,	// (0x00016de4) list_single_cale_day_pane_fp_t2_ParamLimits

0x86a8,	// (0x00016de4) list_single_cale_day_pane_fp_t2

0x86c1,	// (0x00016dfd) list_single_cale_day_pane_fp_t3_ParamLimits

0x86c1,	// (0x00016dfd) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x0001e2e5) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x0001e2e5) list_single_cale_day_pane_fp_t

0x8555,	// (0x00016c91) list_empty_pane_fp_g1_ParamLimits

0x8555,	// (0x00016c91) list_empty_pane_fp_g1

0x86da,	// (0x00016e16) list_empty_pane_fp_t1

0x86e8,	// (0x00016e24) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x0001e2ec) list_empty_pane_fp_t

0x8555,	// (0x00016c91) list_single_heading_pane_fp_g1_ParamLimits

0x8555,	// (0x00016c91) list_single_heading_pane_fp_g1

0x3d23,	// (0x0001245f) list_single_heading_pane_fp_g2_ParamLimits

0x3d23,	// (0x0001245f) list_single_heading_pane_fp_g2

0x3d2f,	// (0x0001246b) list_single_heading_pane_fp_g3_ParamLimits

0x3d2f,	// (0x0001246b) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x0001e2f1) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x0001e2f1) list_single_heading_pane_fp_g

0x86f6,	// (0x00016e32) list_single_heading_pane_fp_t1_ParamLimits

0x86f6,	// (0x00016e32) list_single_heading_pane_fp_t1

0x8708,	// (0x00016e44) list_single_heading_pane_fp_t2_ParamLimits

0x8708,	// (0x00016e44) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x0001e2f8) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x0001e2f8) list_single_heading_pane_fp_t

0x4085,	// (0x000127c1) aid_size_cell_fast

0x3137,	// (0x00011873) soft_indicator_pane_cp1_t1

0x40c2,	// (0x000127fe) cell_app_pane_cp2_ParamLimits

0x40c2,	// (0x000127fe) cell_app_pane_cp2

0x2103,	// (0x0001083f) fep_hwr_candidate_drop_down_list_pane

0x22db,	// (0x00010a17) fep_hwr_candidate_pane_g3_ParamLimits

0x22db,	// (0x00010a17) fep_hwr_candidate_pane_g3

0x04d3,	// (0x0000ec0f) fep_hwr_candidate_pane_g4_ParamLimits

0x04d3,	// (0x0000ec0f) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x0001e267) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x0001e267) fep_hwr_candidate_pane_g

0x8054,	// (0x00016790) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x8054,	// (0x00016790) fep_vkb_candidate_drop_down_list_pane

0x846d,	// (0x00016ba9) fep_vkb_candidate_pane_g3

0x8475,	// (0x00016bb1) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x0001e294) fep_vkb_candidate_pane_g

0x2346,	// (0x00010a82) cell_hwr_candidate_pane_g1_ParamLimits

0x2354,	// (0x00010a90) cell_hwr_candidate_pane_g3_ParamLimits

0x2354,	// (0x00010a90) cell_hwr_candidate_pane_g3

0xa58b,	// (0x00018cc7) cell_hwr_candidate_pane_g4_ParamLimits

0xa58b,	// (0x00018cc7) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x0001e2b3) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x0001e2b3) cell_hwr_candidate_pane_g

0x848c,	// (0x00016bc8) cell_vkb_candidate_pane_g3_ParamLimits

0x848c,	// (0x00016bc8) cell_vkb_candidate_pane_g3

0x84a7,	// (0x00016be3) cell_vkb_candidate_pane_g4_ParamLimits

0x84a7,	// (0x00016be3) cell_vkb_candidate_pane_g4

0x871e,	// (0x00016e5a) cell_app_pane_cp2_g1_ParamLimits

0x871e,	// (0x00016e5a) cell_app_pane_cp2_g1

0x873c,	// (0x00016e78) cell_app_pane_cp2_g2_ParamLimits

0x873c,	// (0x00016e78) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x0001e2fd) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x0001e2fd) cell_app_pane_cp2_g

0x8748,	// (0x00016e84) cell_app_pane_cp2_t1_ParamLimits

0x8748,	// (0x00016e84) cell_app_pane_cp2_t1

0x3cfd,	// (0x00012439) grid_highlight_pane_cp1_ParamLimits

0x3cfd,	// (0x00012439) grid_highlight_pane_cp1

0x2393,	// (0x00010acf) cell_hwr_candidate_pane_cp1_ParamLimits

0x2393,	// (0x00010acf) cell_hwr_candidate_pane_cp1

0x2346,	// (0x00010a82) fep_hwr_candidate_drop_down_list_pane_g1

0x23b2,	// (0x00010aee) fep_hwr_candidate_drop_down_list_pane_g2

0x23bf,	// (0x00010afb) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x0001e302) fep_hwr_candidate_drop_down_list_pane_g

0x23cc,	// (0x00010b08) fep_hwr_candidate_drop_down_list_scroll_pane

0x23d5,	// (0x00010b11) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x23d5,	// (0x00010b11) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x23e2,	// (0x00010b1e) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x23e2,	// (0x00010b1e) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x23ef,	// (0x00010b2b) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x23ef,	// (0x00010b2b) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x23fc,	// (0x00010b38) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x23fc,	// (0x00010b38) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x2417,	// (0x00010b53) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x2417,	// (0x00010b53) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2432,	// (0x00010b6e) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2432,	// (0x00010b6e) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x244d,	// (0x00010b89) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x244d,	// (0x00010b89) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2468,	// (0x00010ba4) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2468,	// (0x00010ba4) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x0001e309) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x0001e309) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x875a,	// (0x00016e96) cell_vkb_candidate_pane_cp1_ParamLimits

0x875a,	// (0x00016e96) cell_vkb_candidate_pane_cp1

0x816d,	// (0x000168a9) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x816d,	// (0x000168a9) fep_vkb_candidate_drop_down_list_pane_g1

0x877a,	// (0x00016eb6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x877a,	// (0x00016eb6) fep_vkb_candidate_drop_down_list_pane_g2

0x8787,	// (0x00016ec3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8787,	// (0x00016ec3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x0001e31a) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x0001e31a) fep_vkb_candidate_drop_down_list_pane_g

0x8794,	// (0x00016ed0) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8794,	// (0x00016ed0) fep_vkb_candidate_drop_down_list_scroll_pane

0x87a1,	// (0x00016edd) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x87a1,	// (0x00016edd) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x87ae,	// (0x00016eea) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x87ae,	// (0x00016eea) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x87ba,	// (0x00016ef6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x87ba,	// (0x00016ef6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x87c6,	// (0x00016f02) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x87c6,	// (0x00016f02) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x87e7,	// (0x00016f23) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x87e7,	// (0x00016f23) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8808,	// (0x00016f44) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8808,	// (0x00016f44) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8829,	// (0x00016f65) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8829,	// (0x00016f65) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x884a,	// (0x00016f86) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x884a,	// (0x00016f86) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x0001e321) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x0001e321) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xcfa6,	// (0x0001b6e2) title_pane_g1_ParamLimits

0xcfb9,	// (0x0001b6f5) title_pane_g2_ParamLimits

0xf554,	// (0x0001dc90) title_pane_g_ParamLimits

0x44cb,	// (0x00012c07) aid_call2_pane

0x44d3,	// (0x00012c0f) aid_call_pane

0x44db,	// (0x00012c17) popup_clock_analogue_window_g1

0x44db,	// (0x00012c17) popup_clock_analogue_window_g2

0x11c8,	// (0x0000f904) popup_clock_analogue_window_g3

0x11d1,	// (0x0000f90d) popup_clock_analogue_window_g4

0x2e3a,	// (0x00011576) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0001de35) popup_clock_analogue_window_g

0x11d9,	// (0x0000f915) popup_clock_analogue_window_t1

0x11e7,	// (0x0000f923) clock_digital_number_pane_ParamLimits

0x11e7,	// (0x0000f923) clock_digital_number_pane

0x11f3,	// (0x0000f92f) clock_digital_number_pane_cp02_ParamLimits

0x11f3,	// (0x0000f92f) clock_digital_number_pane_cp02

0x11ff,	// (0x0000f93b) clock_digital_number_pane_cp03_ParamLimits

0x11ff,	// (0x0000f93b) clock_digital_number_pane_cp03

0x120b,	// (0x0000f947) clock_digital_number_pane_cp04_ParamLimits

0x120b,	// (0x0000f947) clock_digital_number_pane_cp04

0x1217,	// (0x0000f953) clock_digital_separator_pane_ParamLimits

0x1217,	// (0x0000f953) clock_digital_separator_pane

0x1223,	// (0x0000f95f) popup_clock_digital_window_t1_ParamLimits

0x1223,	// (0x0000f95f) popup_clock_digital_window_t1

0x2e3a,	// (0x00011576) clock_digital_number_pane_g1

0x2e3a,	// (0x00011576) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x0001de40) clock_digital_number_pane_g

0x2e3a,	// (0x00011576) clock_digital_separator_pane_g1

0x2e3a,	// (0x00011576) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x0001de40) clock_digital_separator_pane_g

0xdc47,	// (0x0001c383) aid_fill_nsta_ParamLimits

0xdd7d,	// (0x0001c4b9) indicator_nsta_pane_ParamLimits

0x519c,	// (0x000138d8) popup_clock_analogue_window

0x519c,	// (0x000138d8) popup_clock_digital_window

0x4046,	// (0x00012782) grid_indicator_nsta_pane_ParamLimits

0x7850,	// (0x00015f8c) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x0001e1e7) clock_nsta_pane_t

0x118c,	// (0x0000f8c8) aid_size_max_handle

0xb218,	// (0x00019954) aid_size_min_handle

0x4b75,	// (0x000132b1) editor_scroll_pane

0x8865,	// (0x00016fa1) ex_editor_pane

0x3ff4,	// (0x00012730) scroll_pane_cp13

0x3730,	// (0x00011e6c) scroll_pane_cp14

0x450a,	// (0x00012c46) scroll_pane_cp36

0x4534,	// (0x00012c70) list_single_graphic_hl_pane_cp2_ParamLimits

0x4534,	// (0x00012c70) list_single_graphic_hl_pane_cp2

0xe505,	// (0x0001cc41) list_single_graphic_hl_pane_ParamLimits

0xe505,	// (0x0001cc41) list_single_graphic_hl_pane

0x886d,	// (0x00016fa9) aid_size_min_hl_cp1

0x8876,	// (0x00016fb2) list_highlight_pane_cp34_ParamLimits

0x8876,	// (0x00016fb2) list_highlight_pane_cp34

0x8887,	// (0x00016fc3) list_single_graphic_hl_pane_g1_ParamLimits

0x8887,	// (0x00016fc3) list_single_graphic_hl_pane_g1

0x3738,	// (0x00011e74) list_single_graphic_hl_pane_g2_ParamLimits

0x3738,	// (0x00011e74) list_single_graphic_hl_pane_g2

0x3738,	// (0x00011e74) list_single_graphic_hl_pane_g3_ParamLimits

0x3738,	// (0x00011e74) list_single_graphic_hl_pane_g3

0x3744,	// (0x00011e80) list_single_graphic_hl_pane_g4_ParamLimits

0x3744,	// (0x00011e80) list_single_graphic_hl_pane_g4

0xe8e1,	// (0x0001d01d) list_single_graphic_hl_pane_g5_ParamLimits

0xe8e1,	// (0x0001d01d) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x0001e332) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x0001e332) list_single_graphic_hl_pane_g

0xe8f5,	// (0x0001d031) list_single_graphic_hl_pane_t1_ParamLimits

0xe8f5,	// (0x0001d031) list_single_graphic_hl_pane_t1

0x88b4,	// (0x00016ff0) aid_size_min_hl_cp2

0x88bd,	// (0x00016ff9) list_highlight_pane_cp34_cp2_ParamLimits

0x88bd,	// (0x00016ff9) list_highlight_pane_cp34_cp2

0x8887,	// (0x00016fc3) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x8887,	// (0x00016fc3) list_single_graphic_hl_pane_g1_cp2

0x88ca,	// (0x00017006) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x88ca,	// (0x00017006) list_single_graphic_hl_pane_g2_cp2

0xe90b,	// (0x0001d047) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xe90b,	// (0x0001d047) list_single_graphic_hl_pane_g3_cp2

0x4aac,	// (0x000131e8) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4aac,	// (0x000131e8) list_single_graphic_hl_pane_g4_cp2

0x88a0,	// (0x00016fdc) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x88a0,	// (0x00016fdc) list_single_graphic_hl_pane_g5_cp2

0xb26f,	// (0x000199ab) control_pane_g4_ParamLimits

0xb26f,	// (0x000199ab) control_pane_g4

0x4eb9,	// (0x000135f5) bg_popup_sub_pane_cp10_ParamLimits

0x7efc,	// (0x00016638) list_choice_list_pane_ParamLimits

0x7f0b,	// (0x00016647) scroll_pane_cp23

0x31c7,	// (0x00011903) bg_popup_preview_window_pane_cp02_ParamLimits

0x84f8,	// (0x00016c34) list_preview_fixed_pane_ParamLimits

0x850e,	// (0x00016c4a) list_preview_fixed_pane_cp_ParamLimits

0x850e,	// (0x00016c4a) list_preview_fixed_pane_cp

0x851a,	// (0x00016c56) popup_preview_fixed_window_g1_ParamLimits

0x851a,	// (0x00016c56) popup_preview_fixed_window_g1

0x8526,	// (0x00016c62) popup_preview_fixed_window_g2_ParamLimits

0x8526,	// (0x00016c62) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x0001e2ba) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x0001e2ba) popup_preview_fixed_window_g

0x1100,	// (0x0000f83c) aid_navi_side_left_pane_ParamLimits

0x1115,	// (0x0000f851) aid_navi_side_right_pane_ParamLimits

0x112d,	// (0x0000f869) navi_icon_pane_stacon_ParamLimits

0x1141,	// (0x0000f87d) navi_navi_pane_stacon_ParamLimits

0x112d,	// (0x0000f869) navi_text_pane_stacon_ParamLimits

0x0d38,	// (0x0000f474) main_text_info_pane

0x88fa,	// (0x00017036) listscroll_text_info_pane

0x8902,	// (0x0001703e) list_text_info_pane_ParamLimits

0x8902,	// (0x0001703e) list_text_info_pane

0x8911,	// (0x0001704d) scroll_pane_cp24_ParamLimits

0x8911,	// (0x0001704d) scroll_pane_cp24

0xe919,	// (0x0001d055) list_text_info_pane_t1_ParamLimits

0xe919,	// (0x0001d055) list_text_info_pane_t1

0xb3ba,	// (0x00019af6) popup_fast_swap2_window_ParamLimits

0xb3ba,	// (0x00019af6) popup_fast_swap2_window

0x8968,	// (0x000170a4) aid_size_cell_fast2

0x2e30,	// (0x0001156c) bg_popup_window_pane_cp17

0x595a,	// (0x00014096) heading_pane_cp2

0x3407,	// (0x00011b43) listscroll_fast2_pane

0x8972,	// (0x000170ae) grid_fast2_pane

0x897c,	// (0x000170b8) listscroll_fast2_pane_g1

0x8984,	// (0x000170c0) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x0001e33d) listscroll_fast2_pane_g

0x3ff4,	// (0x00012730) scroll_pane_cp26

0x898e,	// (0x000170ca) cell_fast2_pane_ParamLimits

0x898e,	// (0x000170ca) cell_fast2_pane

0x89a3,	// (0x000170df) cell_fast2_pane_g1

0x89ac,	// (0x000170e8) cell_fast2_pane_g2

0x89b5,	// (0x000170f1) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x0001e342) cell_fast2_pane_g

0x34ed,	// (0x00011c29) grid_highlight_pane_cp9

0x1603,	// (0x0000fd3f) main_eswt_pane_ParamLimits

0x1603,	// (0x0000fd3f) main_eswt_pane

0x8926,	// (0x00017062) list_single_text_info_pane

0x89bd,	// (0x000170f9) eswt_ctrl_button_pane

0x89bd,	// (0x000170f9) eswt_ctrl_canvas_pane

0x89c5,	// (0x00017101) eswt_ctrl_combo_pane

0x89bd,	// (0x000170f9) eswt_ctrl_default_pane

0x89bd,	// (0x000170f9) eswt_ctrl_label_pane

0x89cd,	// (0x00017109) eswt_ctrl_wait_pane

0x89d5,	// (0x00017111) eswt_shell_pane

0x2e30,	// (0x0001156c) listscroll_eswt_app_pane

0x89f5,	// (0x00017131) popup_eswt_tasktip_window_ParamLimits

0x89f5,	// (0x00017131) popup_eswt_tasktip_window

0x550b,	// (0x00013c47) bg_popup_window_pane_cp18

0x8a06,	// (0x00017142) eswt_control_pane_g1_ParamLimits

0x8a06,	// (0x00017142) eswt_control_pane_g1

0x8a13,	// (0x0001714f) eswt_control_pane_g2_ParamLimits

0x8a13,	// (0x0001714f) eswt_control_pane_g2

0x8a20,	// (0x0001715c) eswt_control_pane_g3_ParamLimits

0x8a20,	// (0x0001715c) eswt_control_pane_g3

0x8a2d,	// (0x00017169) eswt_control_pane_g4_ParamLimits

0x8a2d,	// (0x00017169) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x0001e349) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x0001e349) eswt_control_pane_g

0x3cfd,	// (0x00012439) bg_button_pane_ParamLimits

0x3cfd,	// (0x00012439) bg_button_pane

0x3502,	// (0x00011c3e) common_borders_pane_copy2_ParamLimits

0x3502,	// (0x00011c3e) common_borders_pane_copy2

0x8a3a,	// (0x00017176) control_button_pane_g1_ParamLimits

0x8a3a,	// (0x00017176) control_button_pane_g1

0x8a46,	// (0x00017182) control_button_pane_g2_ParamLimits

0x8a46,	// (0x00017182) control_button_pane_g2

0x8a52,	// (0x0001718e) control_button_pane_g3_ParamLimits

0x8a52,	// (0x0001718e) control_button_pane_g3

0x0002,

0xfc16,	// (0x0001e352) control_button_pane_g_ParamLimits

0xfc16,	// (0x0001e352) control_button_pane_g

0x8a66,	// (0x000171a2) control_button_pane_t1

0x8a74,	// (0x000171b0) control_button_pane_t2

0x0001,

0xfc1d,	// (0x0001e359) control_button_pane_t

0x53f1,	// (0x00013b2d) bg_button_pane_g1

0x5401,	// (0x00013b3d) bg_button_pane_g2

0x53f9,	// (0x00013b35) bg_button_pane_g3

0x5411,	// (0x00013b4d) bg_button_pane_g4

0x5409,	// (0x00013b45) bg_button_pane_g5

0x5419,	// (0x00013b55) bg_button_pane_g6

0x5421,	// (0x00013b5d) bg_button_pane_g7

0x5431,	// (0x00013b6d) bg_button_pane_g8

0x5429,	// (0x00013b65) bg_button_pane_g9

0x0008,

0xf862,	// (0x0001df9e) bg_button_pane_g

0x7eb7,	// (0x000165f3) common_borders_pane_ParamLimits

0x7eb7,	// (0x000165f3) common_borders_pane

0x8a06,	// (0x00017142) eswt_control_pane_g1_copy1_ParamLimits

0x8a06,	// (0x00017142) eswt_control_pane_g1_copy1

0x8a13,	// (0x0001714f) eswt_control_pane_g2_copy1_ParamLimits

0x8a13,	// (0x0001714f) eswt_control_pane_g2_copy1

0x8a20,	// (0x0001715c) eswt_control_pane_g3_copy1_ParamLimits

0x8a20,	// (0x0001715c) eswt_control_pane_g3_copy1

0x8a2d,	// (0x00017169) eswt_control_pane_g4_copy1_ParamLimits

0x8a2d,	// (0x00017169) eswt_control_pane_g4_copy1

0x7ef2,	// (0x0001662e) bg_eswt_ctrl_canvas_pane_g1

0x7eb7,	// (0x000165f3) common_borders_pane_cp2_ParamLimits

0x7eb7,	// (0x000165f3) common_borders_pane_cp2

0x7eb7,	// (0x000165f3) common_borders_pane_cp3_ParamLimits

0x7eb7,	// (0x000165f3) common_borders_pane_cp3

0x8a82,	// (0x000171be) separator_horizontal_pane

0x8a8a,	// (0x000171c6) separator_vertical_pane

0x8a06,	// (0x00017142) eswt_control_pane_g1_copy2_ParamLimits

0x8a06,	// (0x00017142) eswt_control_pane_g1_copy2

0x8a13,	// (0x0001714f) eswt_control_pane_g2_copy2_ParamLimits

0x8a13,	// (0x0001714f) eswt_control_pane_g2_copy2

0x8a20,	// (0x0001715c) eswt_control_pane_g3_copy2_ParamLimits

0x8a20,	// (0x0001715c) eswt_control_pane_g3_copy2

0x8a2d,	// (0x00017169) eswt_control_pane_g4_copy2_ParamLimits

0x8a2d,	// (0x00017169) eswt_control_pane_g4_copy2

0x2e30,	// (0x0001156c) common_borders_pane_cp4

0x8a93,	// (0x000171cf) separator_horizontal_pane_g1

0x8a9c,	// (0x000171d8) separator_horizontal_pane_g2

0x8aa5,	// (0x000171e1) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x0001e35e) separator_horizontal_pane_g

0x8a06,	// (0x00017142) eswt_control_pane_g1_copy3_ParamLimits

0x8a06,	// (0x00017142) eswt_control_pane_g1_copy3

0x8a13,	// (0x0001714f) eswt_control_pane_g2_copy3_ParamLimits

0x8a13,	// (0x0001714f) eswt_control_pane_g2_copy3

0x8a20,	// (0x0001715c) eswt_control_pane_g3_copy3_ParamLimits

0x8a20,	// (0x0001715c) eswt_control_pane_g3_copy3

0x8a2d,	// (0x00017169) eswt_control_pane_g4_copy3_ParamLimits

0x8a2d,	// (0x00017169) eswt_control_pane_g4_copy3

0x2e30,	// (0x0001156c) common_borders_pane_cp5

0x8aae,	// (0x000171ea) separator_vertical_pane_g1

0x8ab7,	// (0x000171f3) separator_vertical_pane_g2

0x8ac0,	// (0x000171fc) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x0001e365) separator_vertical_pane_g

0x8a06,	// (0x00017142) eswt_control_pane_g1_copy4_ParamLimits

0x8a06,	// (0x00017142) eswt_control_pane_g1_copy4

0x8a13,	// (0x0001714f) eswt_control_pane_g2_copy4_ParamLimits

0x8a13,	// (0x0001714f) eswt_control_pane_g2_copy4

0x8a20,	// (0x0001715c) eswt_control_pane_g3_copy4_ParamLimits

0x8a20,	// (0x0001715c) eswt_control_pane_g3_copy4

0x8a2d,	// (0x00017169) eswt_control_pane_g4_copy4_ParamLimits

0x8a2d,	// (0x00017169) eswt_control_pane_g4_copy4

0xe937,	// (0x0001d073) eswt_ctrl_combo_button_pane

0xe93f,	// (0x0001d07b) eswt_ctrl_input_pane

0xe947,	// (0x0001d083) popup_choice_list_window_cp70

0xe94f,	// (0x0001d08b) eswt_ctrl_input_pane_t1

0x2e30,	// (0x0001156c) input_focus_pane_cp70

0x7eb7,	// (0x000165f3) bg_button_pane_cp70_ParamLimits

0x7eb7,	// (0x000165f3) bg_button_pane_cp70

0xe95d,	// (0x0001d099) eswt_ctrl_combo_button_pane_g1

0x8af7,	// (0x00017233) wait_bar_pane_cp70

0x550b,	// (0x00013c47) bg_popup_window_pane_cp70_ParamLimits

0x550b,	// (0x00013c47) bg_popup_window_pane_cp70

0x8aff,	// (0x0001723b) popup_eswt_tasktip_window_t1

0x8b15,	// (0x00017251) wait_bar_pane_cp71_ParamLimits

0x8b15,	// (0x00017251) wait_bar_pane_cp71

0x8b21,	// (0x0001725d) grid_eswt_app_pane

0x4311,	// (0x00012a4d) scroll_pane_cp70

0xe965,	// (0x0001d0a1) cell_eswt_app_pane_ParamLimits

0xe965,	// (0x0001d0a1) cell_eswt_app_pane

0xe98f,	// (0x0001d0cb) cell_eswt_app_pane_g1_ParamLimits

0xe98f,	// (0x0001d0cb) cell_eswt_app_pane_g1

0xe9be,	// (0x0001d0fa) cell_eswt_app_pane_g2_ParamLimits

0xe9be,	// (0x0001d0fa) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x0001e36c) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x0001e36c) cell_eswt_app_pane_g

0xe9e7,	// (0x0001d123) cell_eswt_app_pane_t1_ParamLimits

0xe9e7,	// (0x0001d123) cell_eswt_app_pane_t1

0x8be8,	// (0x00017324) grid_highlight_pane_cp70_ParamLimits

0x8be8,	// (0x00017324) grid_highlight_pane_cp70

0x4a48,	// (0x00013184) set_content_pane_g1

0x4e11,	// (0x0001354d) status_small_volume_pane

0x2483,	// (0x00010bbf) status_small_volume_pane_g1

0x248b,	// (0x00010bc7) volume_small2_pane

0x2494,	// (0x00010bd0) volume_small2_pane_g1

0x249d,	// (0x00010bd9) volume_small2_pane_g2

0x24a6,	// (0x00010be2) volume_small2_pane_g3

0x24af,	// (0x00010beb) volume_small2_pane_g4

0x24b8,	// (0x00010bf4) volume_small2_pane_g5

0x24c1,	// (0x00010bfd) volume_small2_pane_g6

0x24ca,	// (0x00010c06) volume_small2_pane_g7

0x24d3,	// (0x00010c0f) volume_small2_pane_g8

0x24dc,	// (0x00010c18) volume_small2_pane_g9

0x24e5,	// (0x00010c21) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x0001e371) volume_small2_pane_g

0x82b5,	// (0x000169f1) fep_vkb_top_text_pane_g1_ParamLimits

0xe889,	// (0x0001cfc5) fep_vkb_top_text_pane_t1_ParamLimits

0x8532,	// (0x00016c6e) popup_preview_fixed_window_g3_ParamLimits

0x8532,	// (0x00016c6e) popup_preview_fixed_window_g3

0xb9bd,	// (0x0001a0f9) popup_toolbar_trans_pane

0xe35a,	// (0x0001ca96) aid_height_set_list_ParamLimits

0x68f3,	// (0x0001502f) aid_size_parent_ParamLimits

0x4eb9,	// (0x000135f5) list_highlight_pane_cp2_ParamLimits

0x4a48,	// (0x00013184) set_content_pane_g1_ParamLimits

0xe518,	// (0x0001cc54) list_single_image_pane_ParamLimits

0xe518,	// (0x0001cc54) list_single_image_pane

0xea19,	// (0x0001d155) aid_size_cell_image_ParamLimits

0xea19,	// (0x0001d155) aid_size_cell_image

0xea26,	// (0x0001d162) grid_single_image_pane_ParamLimits

0xea26,	// (0x0001d162) grid_single_image_pane

0x3d23,	// (0x0001245f) list_single_image_pane_g1_ParamLimits

0x3d23,	// (0x0001245f) list_single_image_pane_g1

0x3d2f,	// (0x0001246b) list_single_image_pane_g2_ParamLimits

0x3d2f,	// (0x0001246b) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x0001e386) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x0001e386) list_single_image_pane_g

0x8c0d,	// (0x00017349) list_single_image_pane_t1_ParamLimits

0x8c0d,	// (0x00017349) list_single_image_pane_t1

0xea32,	// (0x0001d16e) cell_image_list_pane_ParamLimits

0xea32,	// (0x0001d16e) cell_image_list_pane

0xea46,	// (0x0001d182) cell_image_list_pane_g1

0xea4f,	// (0x0001d18b) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x0001e38b) cell_image_list_pane_g

0x8c49,	// (0x00017385) aid_size_cell_tb_trans_pane

0x3cfd,	// (0x00012439) bg_tb_trans_pane

0x8c5b,	// (0x00017397) grid_tb_trans_pane

0x53f1,	// (0x00013b2d) bg_tb_trans_pane_g1

0x5401,	// (0x00013b3d) bg_tb_trans_pane_g2

0x53f9,	// (0x00013b35) bg_tb_trans_pane_g3

0x5411,	// (0x00013b4d) bg_tb_trans_pane_g4

0x5409,	// (0x00013b45) bg_tb_trans_pane_g5

0x5431,	// (0x00013b6d) bg_tb_trans_pane_g6

0x5429,	// (0x00013b65) bg_tb_trans_pane_g7

0x5419,	// (0x00013b55) bg_tb_trans_pane_g8

0x5421,	// (0x00013b5d) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x0001e390) bg_tb_trans_pane_g

0x8c6f,	// (0x000173ab) cell_toolbar_trans_pane_ParamLimits

0x8c6f,	// (0x000173ab) cell_toolbar_trans_pane

0x7ef2,	// (0x0001662e) cell_toolbar_trans_pane_g1

0xe72e,	// (0x0001ce6a) list_form2_midp_pane_t1

0xe73c,	// (0x0001ce78) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x0001e22d) list_form2_midp_pane_t

0x7a5a,	// (0x00016196) scroll_pane_cp51_ParamLimits

0x7c5d,	// (0x00016399) form2_midp_wait_pane_g1

0x7c66,	// (0x000163a2) form2_midp_wait_pane_g2

0x7c6f,	// (0x000163ab) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x0001e242) form2_midp_wait_pane_g

0x2f24,	// (0x00011660) list_highlight_pane_cp21_ParamLimits

0x7cbe,	// (0x000163fa) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7ccd,	// (0x00016409) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x6af5,	// (0x00015231) list_single_2graphic_im_pane_ParamLimits

0x6af5,	// (0x00015231) list_single_2graphic_im_pane

0xea58,	// (0x0001d194) list_single_2graphic_im_pane_g1_ParamLimits

0xea58,	// (0x0001d194) list_single_2graphic_im_pane_g1

0xea69,	// (0x0001d1a5) list_single_2graphic_im_pane_g2_ParamLimits

0xea69,	// (0x0001d1a5) list_single_2graphic_im_pane_g2

0xea75,	// (0x0001d1b1) list_single_2graphic_im_pane_g3_ParamLimits

0xea75,	// (0x0001d1b1) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x0001e3a3) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x0001e3a3) list_single_2graphic_im_pane_g

0xea89,	// (0x0001d1c5) list_single_2graphic_im_pane_t1_ParamLimits

0xea89,	// (0x0001d1c5) list_single_2graphic_im_pane_t1

0x853e,	// (0x00016c7a) list_single_graphic_2heading_pane_fp_ParamLimits

0x853e,	// (0x00016c7a) list_single_graphic_2heading_pane_fp

0x8584,	// (0x00016cc0) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x8584,	// (0x00016cc0) list_single_graphic_2heading_pane_fp_g1

0x8555,	// (0x00016c91) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8555,	// (0x00016c91) list_single_graphic_2heading_pane_fp_g2

0x3d23,	// (0x0001245f) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x3d23,	// (0x0001245f) list_single_graphic_2heading_pane_fp_g3

0x3d2f,	// (0x0001246b) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x3d2f,	// (0x0001246b) list_single_graphic_2heading_pane_fp_g4

0x8561,	// (0x00016c9d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8561,	// (0x00016c9d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x0001e2ca) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x0001e2ca) list_single_graphic_2heading_pane_fp_g

0x8d03,	// (0x0001743f) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x8d03,	// (0x0001743f) list_single_graphic_2heading_pane_fp_t1

0x85bc,	// (0x00016cf8) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x85bc,	// (0x00016cf8) list_single_graphic_2heading_pane_fp_t2

0x8d19,	// (0x00017455) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x8d19,	// (0x00017455) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x0001e3ac) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x0001e3ac) list_single_graphic_2heading_pane_fp_t

0x7f74,	// (0x000166b0) fep_hwr_write_pane_g5_ParamLimits

0x7f74,	// (0x000166b0) fep_hwr_write_pane_g5

0x7f80,	// (0x000166bc) fep_hwr_write_pane_g6_ParamLimits

0x7f80,	// (0x000166bc) fep_hwr_write_pane_g6

0x89d5,	// (0x00017111) eswt_shell_pane_ParamLimits

0x550b,	// (0x00013c47) bg_popup_window_pane_cp18_ParamLimits

0x6819,	// (0x00014f55) heading_pane_cp70

0x8aff,	// (0x0001723b) popup_eswt_tasktip_window_t1_ParamLimits

0xdca2,	// (0x0001c3de) aid_touch_tab_arrow_left

0xdcb8,	// (0x0001c3f4) aid_touch_tab_arrow_right

0xcfd1,	// (0x0001b70d) title_pane_g3_ParamLimits

0xcfd1,	// (0x0001b70d) title_pane_g3

0x3bea,	// (0x00012326) set_value_pane_g1

0xb9bd,	// (0x0001a0f9) popup_toolbar_trans_pane_ParamLimits

0x8c49,	// (0x00017385) aid_size_cell_tb_trans_pane_ParamLimits

0x3cfd,	// (0x00012439) bg_tb_trans_pane_ParamLimits

0x8c5b,	// (0x00017397) grid_tb_trans_pane_ParamLimits

0x31c7,	// (0x00011903) cont_note_pane_ParamLimits

0x31c7,	// (0x00011903) cont_note_pane

0x3502,	// (0x00011c3e) cont_snote2_single_text_pane_ParamLimits

0x3502,	// (0x00011c3e) cont_snote2_single_text_pane

0x3502,	// (0x00011c3e) cont_snote2_single_graphic_pane_ParamLimits

0x3502,	// (0x00011c3e) cont_snote2_single_graphic_pane

0x5b70,	// (0x000142ac) cont_note_wait_pane_ParamLimits

0x5b70,	// (0x000142ac) cont_note_wait_pane

0x5b70,	// (0x000142ac) cont_note_image_pane_ParamLimits

0x5b70,	// (0x000142ac) cont_note_image_pane

0x8d2f,	// (0x0001746b) popup_note2_window_g1_ParamLimits

0x8d2f,	// (0x0001746b) popup_note2_window_g1

0x8d60,	// (0x0001749c) popup_note2_window_t1_ParamLimits

0x8d60,	// (0x0001749c) popup_note2_window_t1

0x8da5,	// (0x000174e1) popup_note2_window_t2_ParamLimits

0x8da5,	// (0x000174e1) popup_note2_window_t2

0x8dea,	// (0x00017526) popup_note2_window_t3_ParamLimits

0x8dea,	// (0x00017526) popup_note2_window_t3

0x8e2f,	// (0x0001756b) popup_note2_window_t4_ParamLimits

0x8e2f,	// (0x0001756b) popup_note2_window_t4

0x323f,	// (0x0001197b) popup_note2_window_t5_ParamLimits

0x323f,	// (0x0001197b) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x0001e3b8) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x0001e3b8) popup_note2_window_t

0x8e5e,	// (0x0001759a) popup_note2_image_window_g1_ParamLimits

0x8e5e,	// (0x0001759a) popup_note2_image_window_g1

0x8e6a,	// (0x000175a6) popup_note2_image_window_g2_ParamLimits

0x8e6a,	// (0x000175a6) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x0001e3c3) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x0001e3c3) popup_note2_image_window_g

0x8e7c,	// (0x000175b8) popup_note2_image_window_t1_ParamLimits

0x8e7c,	// (0x000175b8) popup_note2_image_window_t1

0x8e94,	// (0x000175d0) popup_note2_image_window_t2_ParamLimits

0x8e94,	// (0x000175d0) popup_note2_image_window_t2

0x8eac,	// (0x000175e8) popup_note2_image_window_t3_ParamLimits

0x8eac,	// (0x000175e8) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x0001e3c8) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x0001e3c8) popup_note2_image_window_t

0x5b7e,	// (0x000142ba) popup_note2_wait_window_g1_ParamLimits

0x5b7e,	// (0x000142ba) popup_note2_wait_window_g1

0x5b8a,	// (0x000142c6) popup_note2_wait_window_g2_ParamLimits

0x5b8a,	// (0x000142c6) popup_note2_wait_window_g2

0x5b96,	// (0x000142d2) popup_note2_wait_window_g3_ParamLimits

0x5b96,	// (0x000142d2) popup_note2_wait_window_g3

0x0002,

0xf844,	// (0x0001df80) popup_note2_wait_window_g_ParamLimits

0xf844,	// (0x0001df80) popup_note2_wait_window_g

0x8ec8,	// (0x00017604) popup_note2_wait_window_t1_ParamLimits

0x8ec8,	// (0x00017604) popup_note2_wait_window_t1

0x8ee6,	// (0x00017622) popup_note2_wait_window_t2_ParamLimits

0x8ee6,	// (0x00017622) popup_note2_wait_window_t2

0x8f04,	// (0x00017640) popup_note2_wait_window_t3_ParamLimits

0x8f04,	// (0x00017640) popup_note2_wait_window_t3

0x8f16,	// (0x00017652) popup_note2_wait_window_t4_ParamLimits

0x8f16,	// (0x00017652) popup_note2_wait_window_t4

0x0003,

0xfc93,	// (0x0001e3cf) popup_note2_wait_window_t_ParamLimits

0xfc93,	// (0x0001e3cf) popup_note2_wait_window_t

0x8f28,	// (0x00017664) wait_bar2_pane_ParamLimits

0x8f28,	// (0x00017664) wait_bar2_pane

0x8f40,	// (0x0001767c) popup_snote2_single_text_window_g1_ParamLimits

0x8f40,	// (0x0001767c) popup_snote2_single_text_window_g1

0x8f68,	// (0x000176a4) popup_snote2_single_text_window_t1_ParamLimits

0x8f68,	// (0x000176a4) popup_snote2_single_text_window_t1

0x8fb4,	// (0x000176f0) popup_snote2_single_text_window_t2_ParamLimits

0x8fb4,	// (0x000176f0) popup_snote2_single_text_window_t2

0x9000,	// (0x0001773c) popup_snote2_single_text_window_t3_ParamLimits

0x9000,	// (0x0001773c) popup_snote2_single_text_window_t3

0x9041,	// (0x0001777d) popup_snote2_single_text_window_t4_ParamLimits

0x9041,	// (0x0001777d) popup_snote2_single_text_window_t4

0x9077,	// (0x000177b3) popup_snote2_single_text_window_t5_ParamLimits

0x9077,	// (0x000177b3) popup_snote2_single_text_window_t5

0x0004,

0xfc9c,	// (0x0001e3d8) popup_snote2_single_text_window_t_ParamLimits

0xfc9c,	// (0x0001e3d8) popup_snote2_single_text_window_t

0x90a2,	// (0x000177de) popup_snote2_single_graphic_window_g1_ParamLimits

0x90a2,	// (0x000177de) popup_snote2_single_graphic_window_g1

0x90ca,	// (0x00017806) popup_snote2_single_graphic_window_g2_ParamLimits

0x90ca,	// (0x00017806) popup_snote2_single_graphic_window_g2

0x0001,

0xfca7,	// (0x0001e3e3) popup_snote2_single_graphic_window_g_ParamLimits

0xfca7,	// (0x0001e3e3) popup_snote2_single_graphic_window_g

0x90f2,	// (0x0001782e) popup_snote2_single_graphic_window_t1_ParamLimits

0x90f2,	// (0x0001782e) popup_snote2_single_graphic_window_t1

0x913e,	// (0x0001787a) popup_snote2_single_graphic_window_t2_ParamLimits

0x913e,	// (0x0001787a) popup_snote2_single_graphic_window_t2

0x9000,	// (0x0001773c) popup_snote2_single_graphic_window_t3_ParamLimits

0x9000,	// (0x0001773c) popup_snote2_single_graphic_window_t3

0x9041,	// (0x0001777d) popup_snote2_single_graphic_window_t4_ParamLimits

0x9041,	// (0x0001777d) popup_snote2_single_graphic_window_t4

0x9077,	// (0x000177b3) popup_snote2_single_graphic_window_t5_ParamLimits

0x9077,	// (0x000177b3) popup_snote2_single_graphic_window_t5

0x0004,

0xfcac,	// (0x0001e3e8) popup_snote2_single_graphic_window_t_ParamLimits

0xfcac,	// (0x0001e3e8) popup_snote2_single_graphic_window_t

0x7913,	// (0x0001604f) clock_nsta_pane_cp2_t1

0x7913,	// (0x0001604f) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x0001e203) clock_nsta_pane_cp2_t

0x3d17,	// (0x00012453) form_field_data_wide_pane_g1_ParamLimits

0x3d23,	// (0x0001245f) form_field_data_wide_pane_g2_ParamLimits

0x3d23,	// (0x0001245f) form_field_data_wide_pane_g2

0x3d2f,	// (0x0001246b) form_field_data_wide_pane_g3_ParamLimits

0x3d2f,	// (0x0001246b) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x0001ddb8) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x0001ddb8) form_field_data_wide_pane_g

0xe662,	// (0x0001cd9e) grid_touch_3_pane_ParamLimits

0xe662,	// (0x0001cd9e) grid_touch_3_pane

0xeaba,	// (0x0001d1f6) cell_touch_3_pane_ParamLimits

0xeaba,	// (0x0001d1f6) cell_touch_3_pane

0x7ef2,	// (0x0001662e) cell_touch_3_pane_g1

0x7ef2,	// (0x0001662e) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x0001e288) cell_touch_3_pane_g

0x3271,	// (0x000119ad) cont_query_data_pane

0x3279,	// (0x000119b5) cont_query_data_pane_cp1

0x91b9,	// (0x000178f5) button_value_adjust_pane_cp7

0x91c1,	// (0x000178fd) query_popup_pane_cp3

0x45c7,	// (0x00012d03) bg_popup_sub_pane_cp22_ParamLimits

0x1242,	// (0x0000f97e) navi_navi_volume_pane_cp2

0x125d,	// (0x0000f999) popup_side_volume_key_window_g2

0x126c,	// (0x0000f9a8) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x0001de4e) popup_side_volume_key_window_g

0x1289,	// (0x0000f9c5) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0001de55) popup_side_volume_key_window_t

0x4912,	// (0x0001304e) popup_side_volume_key_window_ParamLimits

0xd43f,	// (0x0001bb7b) list_double_graphic_pane_g4_ParamLimits

0xd43f,	// (0x0001bb7b) list_double_graphic_pane_g4

0xe4f0,	// (0x0001cc2c) list_single_2heading_msg_pane_ParamLimits

0xe4f0,	// (0x0001cc2c) list_single_2heading_msg_pane

0xeb04,	// (0x0001d240) list_single_2heading_msg_pane_g1_ParamLimits

0xeb04,	// (0x0001d240) list_single_2heading_msg_pane_g1

0xeb10,	// (0x0001d24c) list_single_2heading_msg_pane_g2_ParamLimits

0xeb10,	// (0x0001d24c) list_single_2heading_msg_pane_g2

0xeb23,	// (0x0001d25f) list_single_2heading_msg_pane_g3_ParamLimits

0xeb23,	// (0x0001d25f) list_single_2heading_msg_pane_g3

0xeb2f,	// (0x0001d26b) list_single_2heading_msg_pane_g4_ParamLimits

0xeb2f,	// (0x0001d26b) list_single_2heading_msg_pane_g4

0x0003,

0xfcb7,	// (0x0001e3f3) list_single_2heading_msg_pane_g_ParamLimits

0xfcb7,	// (0x0001e3f3) list_single_2heading_msg_pane_g

0xeb47,	// (0x0001d283) list_single_2heading_msg_pane_t1_ParamLimits

0xeb47,	// (0x0001d283) list_single_2heading_msg_pane_t1

0xeb6f,	// (0x0001d2ab) list_single_2heading_msg_pane_t2_ParamLimits

0xeb6f,	// (0x0001d2ab) list_single_2heading_msg_pane_t2

0xebda,	// (0x0001d316) list_single_2heading_msg_pane_t3_ParamLimits

0xebda,	// (0x0001d316) list_single_2heading_msg_pane_t3

0x92b5,	// (0x000179f1) list_single_2heading_msg_pane_t4_ParamLimits

0x92b5,	// (0x000179f1) list_single_2heading_msg_pane_t4

0x0003,

0xfcc0,	// (0x0001e3fc) list_single_2heading_msg_pane_t_ParamLimits

0xfcc0,	// (0x0001e3fc) list_single_2heading_msg_pane_t

0x2e78,	// (0x000115b4) title_pane_g4_ParamLimits

0x2e78,	// (0x000115b4) title_pane_g4

0x1050,	// (0x0000f78c) title_pane_stacon_g3_ParamLimits

0x1050,	// (0x0000f78c) title_pane_stacon_g3

0x8cc6,	// (0x00017402) list_single_2graphic_im_pane_g4_ParamLimits

0x8cc6,	// (0x00017402) list_single_2graphic_im_pane_g4

0x65bf,	// (0x00014cfb) popup_side_volume_key_window_cp

0x6f24,	// (0x00015660) main_idle_act2_pane_t1

0x1c32,	// (0x0001036e) toolbar_button_pane_g10

0xd340,	// (0x0001ba7c) popup_toolbar_window_cp1

0x7904,	// (0x00016040) clock_nsta_pane_cp_t1

0x7904,	// (0x00016040) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x0001e1fe) clock_nsta_pane_cp_t

0x1242,	// (0x0000f97e) navi_navi_volume_pane_cp2_ParamLimits

0x1251,	// (0x0000f98d) popup_side_volume_key_window_g1_ParamLimits

0x125d,	// (0x0000f999) popup_side_volume_key_window_g2_ParamLimits

0x126c,	// (0x0000f9a8) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x0001de4e) popup_side_volume_key_window_g_ParamLimits

0x20ef,	// (0x0001082b) fep_hwr_aid_pane

0x2196,	// (0x000108d2) bg_fep_hwr_top_pane_g4_ParamLimits

0x7f44,	// (0x00016680) fep_hwr_top_pane_g1_ParamLimits

0x7f56,	// (0x00016692) fep_hwr_top_pane_g2_ParamLimits

0x21b6,	// (0x000108f2) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x0001e253) fep_hwr_top_pane_g_ParamLimits

0x21cb,	// (0x00010907) fep_hwr_top_text_pane_ParamLimits

0x6380,	// (0x00014abc) aid_touch_tab_arrow_arrow_2

0x6389,	// (0x00014ac5) aid_touch_tab_arrow_left_2

0x2103,	// (0x0001083f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x213a,	// (0x00010876) fep_hwr_prediction_pane

0x80bd,	// (0x000167f9) fep_vkb_prediction_pane

0xe869,	// (0x0001cfa5) fep_vkb_side_pane_g3_ParamLimits

0xe869,	// (0x0001cfa5) fep_vkb_side_pane_g3

0x2346,	// (0x00010a82) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x23b2,	// (0x00010aee) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x23bf,	// (0x00010afb) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x0001e302) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x24ee,	// (0x00010c2a) fep_hwr_prediction_pane_g1

0x24f8,	// (0x00010c34) fep_hwr_prediction_pane_g2

0x2500,	// (0x00010c3c) fep_hwr_prediction_pane_g3

0x2508,	// (0x00010c44) fep_hwr_prediction_pane_g4

0x0003,

0xfcc9,	// (0x0001e405) fep_hwr_prediction_pane_g

0x92da,	// (0x00017a16) fep_vkb_prediction_pane_g1

0x92e4,	// (0x00017a20) fep_vkb_prediction_pane_g2

0x92ec,	// (0x00017a28) fep_vkb_prediction_pane_g3

0x92f4,	// (0x00017a30) fep_vkb_prediction_pane_g4

0x0003,

0xfcd2,	// (0x0001e40e) fep_vkb_prediction_pane_g

0x1f1e,	// (0x0001065a) slider_set_pane_g3

0x1f32,	// (0x0001066e) slider_set_pane_g4

0x1f4a,	// (0x00010686) slider_set_pane_g5

0x1f1e,	// (0x0001065a) slider_set_pane_g6

0x1f60,	// (0x0001069c) slider_set_pane_g7

0x6a50,	// (0x0001518c) slider_form_pane_g3

0x6a59,	// (0x00015195) slider_form_pane_g4

0x6a61,	// (0x0001519d) slider_form_pane_g5

0x6a50,	// (0x0001518c) slider_form_pane_g6

0xe4a1,	// (0x0001cbdd) slider_form_pane_g7

0x71fc,	// (0x00015938) slider_set_pane_vc_g3

0x7205,	// (0x00015941) slider_set_pane_vc_g4

0x720e,	// (0x0001594a) slider_set_pane_vc_g5

0x71fc,	// (0x00015938) slider_set_pane_vc_g6

0x7217,	// (0x00015953) slider_set_pane_vc_g7

0x75c1,	// (0x00015cfd) slider_form_pane_vc_g1

0x75ca,	// (0x00015d06) slider_form_pane_vc_g2

0x75d3,	// (0x00015d0f) slider_form_pane_vc_g3

0x75c1,	// (0x00015cfd) slider_form_pane_vc_g4

0x75dc,	// (0x00015d18) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x0001e1d0) slider_form_pane_vc_g

0x0d38,	// (0x0000f474) main_idle_act3_pane

0x92fc,	// (0x00017a38) ai3_links_pane

0xec48,	// (0x0001d384) popup_ai3_data_window_ParamLimits

0xec48,	// (0x0001d384) popup_ai3_data_window

0x2e30,	// (0x0001156c) grid_ai3_links_pane

0xec60,	// (0x0001d39c) cell_ai3_links_pane_ParamLimits

0xec60,	// (0x0001d39c) cell_ai3_links_pane

0x9335,	// (0x00017a71) bg_popup_sub_pane_cp11

0x9342,	// (0x00017a7e) cell_ai3_links_pane_g1

0x2e30,	// (0x0001156c) bg_popup_sub_pane_cp12

0x9367,	// (0x00017aa3) heading_ai3_data_pane

0x936f,	// (0x00017aab) list_ai3_gene_pane

0x937b,	// (0x00017ab7) popup_ai3_data_window_g1

0x9383,	// (0x00017abf) heading_ai3_data_pane_g1

0x938b,	// (0x00017ac7) heading_ai3_data_pane_t1

0x9399,	// (0x00017ad5) list_double_ai3_gene_pane_ParamLimits

0x9399,	// (0x00017ad5) list_double_ai3_gene_pane

0x93a6,	// (0x00017ae2) list_single_ai3_gene_pane_ParamLimits

0x93a6,	// (0x00017ae2) list_single_ai3_gene_pane

0x7eb7,	// (0x000165f3) list_highlight_pane_cp7_ParamLimits

0x7eb7,	// (0x000165f3) list_highlight_pane_cp7

0x93b3,	// (0x00017aef) list_single_a13_gene_pane_t1_ParamLimits

0x93b3,	// (0x00017aef) list_single_a13_gene_pane_t1

0x93ca,	// (0x00017b06) list_single_ai3_gene_pane_g1

0x93d3,	// (0x00017b0f) list_single_ai3_gene_pane_g2

0x0001,

0xfcdb,	// (0x0001e417) list_single_ai3_gene_pane_g

0x93db,	// (0x00017b17) list_double_ai3_gene_pane_g1_ParamLimits

0x93db,	// (0x00017b17) list_double_ai3_gene_pane_g1

0x93e7,	// (0x00017b23) list_double_ai3_gene_pane_t1_ParamLimits

0x93e7,	// (0x00017b23) list_double_ai3_gene_pane_t1

0x9403,	// (0x00017b3f) list_double_ai3_gene_pane_t2_ParamLimits

0x9403,	// (0x00017b3f) list_double_ai3_gene_pane_t2

0x9418,	// (0x00017b54) list_double_ai3_gene_pane_t3_ParamLimits

0x9418,	// (0x00017b54) list_double_ai3_gene_pane_t3

0x0002,

0xfce0,	// (0x0001e41c) list_double_ai3_gene_pane_t_ParamLimits

0xfce0,	// (0x0001e41c) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x91d2,	// (0x0001790e) aid_size_min_col_2

0xeaee,	// (0x0001d22a) aid_size_min_msg_ParamLimits

0xeaee,	// (0x0001d22a) aid_size_min_msg

0xe87d,	// (0x0001cfb9) fep_vkb_top_text_pane_g2_ParamLimits

0xe87d,	// (0x0001cfb9) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x0001e283) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x0001e283) fep_vkb_top_text_pane_g

0x0d38,	// (0x0000f474) main_hc_apps_shell_pane

0x9435,	// (0x00017b71) grid_hc_apps_pane_ParamLimits

0x9435,	// (0x00017b71) grid_hc_apps_pane

0x9444,	// (0x00017b80) list_hc_apps_pane

0x944c,	// (0x00017b88) scroll_pane_cp37_ParamLimits

0x944c,	// (0x00017b88) scroll_pane_cp37

0xec7a,	// (0x0001d3b6) cell_hc_apps_pane_ParamLimits

0xec7a,	// (0x0001d3b6) cell_hc_apps_pane

0xed3a,	// (0x0001d476) cell_hc_apps_pane_g1_ParamLimits

0xed3a,	// (0x0001d476) cell_hc_apps_pane_g1

0x9539,	// (0x00017c75) cell_hc_apps_pane_g2_ParamLimits

0x9539,	// (0x00017c75) cell_hc_apps_pane_g2

0x9555,	// (0x00017c91) cell_hc_apps_pane_g3_ParamLimits

0x9555,	// (0x00017c91) cell_hc_apps_pane_g3

0x0002,

0xfce7,	// (0x0001e423) cell_hc_apps_pane_g_ParamLimits

0xfce7,	// (0x0001e423) cell_hc_apps_pane_g

0xed67,	// (0x0001d4a3) cell_hc_apps_pane_t1_ParamLimits

0xed67,	// (0x0001d4a3) cell_hc_apps_pane_t1

0x31c7,	// (0x00011903) grid_highlight_pane_cp10_ParamLimits

0x31c7,	// (0x00011903) grid_highlight_pane_cp10

0xeda5,	// (0x0001d4e1) list_single_hc_apps_pane_ParamLimits

0xeda5,	// (0x0001d4e1) list_single_hc_apps_pane

0xedd8,	// (0x0001d514) list_single_hc_apps_pane_g1

0xedf1,	// (0x0001d52d) list_single_hc_apps_pane_g2

0x0001,

0xfcee,	// (0x0001e42a) list_single_hc_apps_pane_g

0xee0a,	// (0x0001d546) list_single_hc_apps_pane_g2_copy1

0xee26,	// (0x0001d562) list_single_hc_apps_pane_t1

0x2f24,	// (0x00011660) bg_set_opt_pane_cp_ParamLimits

0x0f7b,	// (0x0000f6b7) setting_slider_pane_t1_ParamLimits

0x0f94,	// (0x0000f6d0) setting_slider_pane_t2_ParamLimits

0x0fad,	// (0x0000f6e9) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0001dca0) setting_slider_pane_t_ParamLimits

0x0fc4,	// (0x0000f700) slider_set_pane_ParamLimits

0x14e7,	// (0x0000fc23) control_pane_g5_ParamLimits

0x14e7,	// (0x0000fc23) control_pane_g5

0x68ad,	// (0x00014fe9) slider_set_pane_g1_ParamLimits

0x1f12,	// (0x0001064e) slider_set_pane_g2_ParamLimits

0x1f1e,	// (0x0001065a) slider_set_pane_g3_ParamLimits

0x1f32,	// (0x0001066e) slider_set_pane_g4_ParamLimits

0x1f4a,	// (0x00010686) slider_set_pane_g5_ParamLimits

0x1f1e,	// (0x0001065a) slider_set_pane_g6_ParamLimits

0x1f60,	// (0x0001069c) slider_set_pane_g7_ParamLimits

0xf960,	// (0x0001e09c) slider_set_pane_g_ParamLimits

0x49f3,	// (0x0001312f) navi_icon_text_pane_ParamLimits

0xdc6b,	// (0x0001c3a7) aid_fill_nsta_2_ParamLimits

0xdca2,	// (0x0001c3de) aid_touch_tab_arrow_left_ParamLimits

0xdcb8,	// (0x0001c3f4) aid_touch_tab_arrow_right_ParamLimits

0xdd53,	// (0x0001c48f) clock_nsta_pane_ParamLimits

0x6362,	// (0x00014a9e) navi_icon_pane_g1_ParamLimits

0x636e,	// (0x00014aaa) navi_text_pane_t1_ParamLimits

0x7a18,	// (0x00016154) navi_icon_text_pane_g1_ParamLimits

0x7a24,	// (0x00016160) navi_icon_text_pane_t1_ParamLimits

0xedd8,	// (0x0001d514) list_single_hc_apps_pane_g1_ParamLimits

0xedf1,	// (0x0001d52d) list_single_hc_apps_pane_g2_ParamLimits

0xfcee,	// (0x0001e42a) list_single_hc_apps_pane_g_ParamLimits

0xee0a,	// (0x0001d546) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xee26,	// (0x0001d562) list_single_hc_apps_pane_t1_ParamLimits

0xb1ad,	// (0x000198e9) popup_toolbar2_fixed_window_ParamLimits

0xb1ad,	// (0x000198e9) popup_toolbar2_fixed_window

0xb9b3,	// (0x0001a0ef) popup_toolbar2_float_window

0x2e30,	// (0x0001156c) bg_popup_sub_pane_cp27

0x96a6,	// (0x00017de2) grid_toolbar2_float_pane

0x2e30,	// (0x0001156c) bg_popup_sub_pane_cp26

0x96a6,	// (0x00017de2) grid_toolbar2_fixed_pane

0xee54,	// (0x0001d590) cell_toolbar2_fixed_pane_ParamLimits

0xee54,	// (0x0001d590) cell_toolbar2_fixed_pane

0xee6e,	// (0x0001d5aa) cell_toolbar2_fixed_pane_g1

0x96c8,	// (0x00017e04) toolbar2_fixed_button_pane

0x53f1,	// (0x00013b2d) toolbar2_fixed_button_pane_g1

0x5401,	// (0x00013b3d) toolbar2_fixed_button_pane_g2

0x53f9,	// (0x00013b35) toolbar2_fixed_button_pane_g3

0x5411,	// (0x00013b4d) toolbar2_fixed_button_pane_g4

0x5409,	// (0x00013b45) toolbar2_fixed_button_pane_g5

0x5419,	// (0x00013b55) toolbar2_fixed_button_pane_g6

0x5421,	// (0x00013b5d) toolbar2_fixed_button_pane_g7

0x5431,	// (0x00013b6d) toolbar2_fixed_button_pane_g8

0x5429,	// (0x00013b65) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x0001df9e) toolbar2_fixed_button_pane_g

0x96d0,	// (0x00017e0c) cell_toolbar2_float_pane_ParamLimits

0x96d0,	// (0x00017e0c) cell_toolbar2_float_pane

0x96e1,	// (0x00017e1d) cell_toolbar2_float_pane_g1

0x96c8,	// (0x00017e04) toolbar2_fixed_button_pane_cp

0xe830,	// (0x0001cf6c) fep_vkb_accented_list_pane_ParamLimits

0xe830,	// (0x0001cf6c) fep_vkb_accented_list_pane

0x2326,	// (0x00010a62) bg_popup_fep_shadow_pane_g9

0x4b75,	// (0x000132b1) bg_popup_fep_shadow_pane_cp3

0x3fdb,	// (0x00012717) list_accented_list_pane

0x96ea,	// (0x00017e26) list_single_accented_list_pane_ParamLimits

0x96ea,	// (0x00017e26) list_single_accented_list_pane

0x4b75,	// (0x000132b1) list_highlight_pane_cp10

0x96fb,	// (0x00017e37) list_single_accented_list_pane_t1

0xb8dd,	// (0x0001a019) popup_slider_window_ParamLimits

0xb8dd,	// (0x0001a019) popup_slider_window

0x91c9,	// (0x00017905) aid_indentation_list_msg

0xef67,	// (0x0001d6a3) bg_popup_window_pane_cp19

0x981f,	// (0x00017f5b) popup_slider_window_g1

0x983b,	// (0x00017f77) popup_slider_window_g2

0x9857,	// (0x00017f93) popup_slider_window_g3

0x0005,

0xfcf3,	// (0x0001e42f) popup_slider_window_g

0x98b3,	// (0x00017fef) popup_slider_window_t1

0x9927,	// (0x00018063) small_volume_slider_vertical_pane

0x7ef2,	// (0x0001662e) small_volume_slider_vertical_pane_g1

0x7ef2,	// (0x0001662e) small_volume_slider_vertical_pane_g2

0x9943,	// (0x0001807f) small_volume_slider_vertical_pane_g3

0x0002,

0xfd05,	// (0x0001e441) small_volume_slider_vertical_pane_g

0xb11b,	// (0x00019857) area_side_right_pane_ParamLimits

0xb11b,	// (0x00019857) area_side_right_pane

0xbc36,	// (0x0001a372) aid_size_side_button_ParamLimits

0xbc36,	// (0x0001a372) aid_size_side_button

0xbc4f,	// (0x0001a38b) grid_sctrl_middle_pane_ParamLimits

0xbc4f,	// (0x0001a38b) grid_sctrl_middle_pane

0x2544,	// (0x00010c80) sctrl_sk_bottom_pane

0x2555,	// (0x00010c91) sctrl_sk_top_pane

0x2567,	// (0x00010ca3) aid_touch_sctrl_top

0x2574,	// (0x00010cb0) bg_sctrl_sk_pane_ParamLimits

0x2574,	// (0x00010cb0) bg_sctrl_sk_pane

0x2582,	// (0x00010cbe) sctrl_sk_top_pane_g1

0x258f,	// (0x00010ccb) sctrl_sk_top_pane_t1

0x2567,	// (0x00010ca3) aid_touch_sctrl_bottom

0x2574,	// (0x00010cb0) bg_sctrl_sk_pane_cp_ParamLimits

0x2574,	// (0x00010cb0) bg_sctrl_sk_pane_cp

0x25aa,	// (0x00010ce6) sctrl_sk_bottom_pane_g1

0x258f,	// (0x00010ccb) sctrl_sk_bottom_pane_t1

0xbc69,	// (0x0001a3a5) cell_sctrl_middle_pane_ParamLimits

0xbc69,	// (0x0001a3a5) cell_sctrl_middle_pane

0xbc7a,	// (0x0001a3b6) aid_touch_sctrl_middle_ParamLimits

0xbc7a,	// (0x0001a3b6) aid_touch_sctrl_middle

0xbc87,	// (0x0001a3c3) bg_sctrl_middle_pane_ParamLimits

0xbc87,	// (0x0001a3c3) bg_sctrl_middle_pane

0x2c13,	// (0x0001134f) cell_sctrl_middle_pane_g1_ParamLimits

0x2c13,	// (0x0001134f) cell_sctrl_middle_pane_g1

0xbc95,	// (0x0001a3d1) cell_sctrl_middle_pane_g2_ParamLimits

0xbc95,	// (0x0001a3d1) cell_sctrl_middle_pane_g2

0x0001,

0xfd11,	// (0x0001e44d) cell_sctrl_middle_pane_g_ParamLimits

0xfd11,	// (0x0001e44d) cell_sctrl_middle_pane_g

0x53f1,	// (0x00013b2d) bg_sctrl_middle_pane_g1

0x53f9,	// (0x00013b35) bg_sctrl_middle_pane_g2

0x5401,	// (0x00013b3d) bg_sctrl_middle_pane_g3

0x5409,	// (0x00013b45) bg_sctrl_middle_pane_g4

0x5411,	// (0x00013b4d) bg_sctrl_middle_pane_g5

0x5419,	// (0x00013b55) bg_sctrl_middle_pane_g6

0x5421,	// (0x00013b5d) bg_sctrl_middle_pane_g7

0x5429,	// (0x00013b65) bg_sctrl_middle_pane_g8

0x0007,

0xfd16,	// (0x0001e452) bg_sctrl_middle_pane_g

0x5431,	// (0x00013b6d) bg_sctrl_middle_pane_g8_copy1

0x53f1,	// (0x00013b2d) bg_sctrl_sk_pane_g1

0x5401,	// (0x00013b3d) bg_sctrl_sk_pane_g2

0x53f9,	// (0x00013b35) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x0001df9e) bg_sctrl_sk_pane_g

0x36c0,	// (0x00011dfc) aid_size_touch_scroll_bar

0x5411,	// (0x00013b4d) bg_sctrl_sk_pane_g4

0x5409,	// (0x00013b45) bg_sctrl_sk_pane_g5

0x5419,	// (0x00013b55) bg_sctrl_sk_pane_g6

0x5421,	// (0x00013b5d) bg_sctrl_sk_pane_g7

0x5431,	// (0x00013b6d) bg_sctrl_sk_pane_g8

0x5429,	// (0x00013b65) bg_sctrl_sk_pane_g9

0x1697,	// (0x0000fdd3) popup_fep_china_hwr2_fs_candidate_window

0xb417,	// (0x00019b53) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xb417,	// (0x00019b53) popup_fep_china_hwr2_fs_control_window

0x2346,	// (0x00010a82) sctrl_sk_top_pane_g2

0x0001,

0xfd0c,	// (0x0001e448) sctrl_sk_top_pane_g

0xf01f,	// (0x0001d75b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xf01f,	// (0x0001d75b) aid_fep_china_hwr2_fs_cell

0xf033,	// (0x0001d76f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xf033,	// (0x0001d76f) bg_popup_fep_shadow_pane_cp4

0xf04a,	// (0x0001d786) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xf04a,	// (0x0001d786) bg_popup_fep_shadow_pane_cp5

0xf05c,	// (0x0001d798) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xf05c,	// (0x0001d798) popup_fep_china_hwr2_fs_control_bar_grid

0xf070,	// (0x0001d7ac) popup_fep_china_hwr2_fs_control_funtion_grid

0x999f,	// (0x000180db) aid_fep_china_hwr2_fs_candi_cell

0x2e30,	// (0x0001156c) bg_popup_fep_shadow_pane_cp6

0x99a9,	// (0x000180e5) popup_fep_china_hwr2_fs_candidate_grid

0xf078,	// (0x0001d7b4) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xf078,	// (0x0001d7b4) cell_fep_china_hwr2_fs_funtion_grid

0x7ef2,	// (0x0001662e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x99cb,	// (0x00018107) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x99cb,	// (0x00018107) cell_fep_china_hwr2_fs_funtion_grid_g1

0x99d9,	// (0x00018115) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x99d9,	// (0x00018115) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd27,	// (0x0001e463) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd27,	// (0x0001e463) cell_fep_china_hwr2_fs_funtion_grid_g

0xf090,	// (0x0001d7cc) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xf090,	// (0x0001d7cc) cell_fep_china_hwr2_fs_funtion_grid_t1

0xf0a5,	// (0x0001d7e1) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xf0a5,	// (0x0001d7e1) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2c,	// (0x0001e468) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2c,	// (0x0001e468) cell_fep_china_hwr2_fs_funtion_grid_t

0x9a20,	// (0x0001815c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9a28,	// (0x00018164) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9a30,	// (0x0001816c) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd31,	// (0x0001e46d) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9a38,	// (0x00018174) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9a38,	// (0x00018174) cell_fep_china_hwr2_fs_candidate_grid

0x9a51,	// (0x0001818d) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9a59,	// (0x00018195) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7ef2,	// (0x0001662e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7ef2,	// (0x0001662e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x0001e288) cell_fep_china_hwr2_fs_candidate_grid_g

0x9a61,	// (0x0001819d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4fc1,	// (0x000136fd) clock_nsta_pane_cp_24_ParamLimits

0x4fc1,	// (0x000136fd) clock_nsta_pane_cp_24

0x503f,	// (0x0001377b) indicator_nsta_pane_cp_24_ParamLimits

0x503f,	// (0x0001377b) indicator_nsta_pane_cp_24

0x61ea,	// (0x00014926) heading_pane_g1

0x0001,

0xf8c7,	// (0x0001e003) heading_pane_g

0x6d29,	// (0x00015465) grid_sct_catagory_button_pane

0x6d5b,	// (0x00015497) scroll_pane_cp5_ParamLimits

0x7a66,	// (0x000161a2) button_value_adjust_pane_cp5_ParamLimits

0x7a66,	// (0x000161a2) button_value_adjust_pane_cp5

0x7b5e,	// (0x0001629a) form2_midp_time_pane_ParamLimits

0x9a6f,	// (0x000181ab) cell_sct_catagory_button_pane_ParamLimits

0x9a6f,	// (0x000181ab) cell_sct_catagory_button_pane

0x7eb7,	// (0x000165f3) bg_button_pane_cp01_ParamLimits

0x7eb7,	// (0x000165f3) bg_button_pane_cp01

0x7ef2,	// (0x0001662e) cell_sct_catagory_button_pane_g1

0xb956,	// (0x0001a092) popup_tb_extension_window

0xf0c1,	// (0x0001d7fd) aid_size_cell_ext_ParamLimits

0xf0c1,	// (0x0001d7fd) aid_size_cell_ext

0x3502,	// (0x00011c3e) bg_tb_trans_pane_cp1_ParamLimits

0x3502,	// (0x00011c3e) bg_tb_trans_pane_cp1

0xf0e7,	// (0x0001d823) grid_tb_ext_pane_ParamLimits

0xf0e7,	// (0x0001d823) grid_tb_ext_pane

0xf124,	// (0x0001d860) cell_tb_ext_pane_ParamLimits

0xf124,	// (0x0001d860) cell_tb_ext_pane

0xf14c,	// (0x0001d888) cell_tb_ext_pane_g1_ParamLimits

0xf14c,	// (0x0001d888) cell_tb_ext_pane_g1

0x9b05,	// (0x00018241) cell_tb_ext_pane_t1

0x31c7,	// (0x00011903) list_highlight_pane_cp11_ParamLimits

0x31c7,	// (0x00011903) list_highlight_pane_cp11

0x0eb4,	// (0x0000f5f0) popup_uni_indicator_window_ParamLimits

0x0eb4,	// (0x0000f5f0) popup_uni_indicator_window

0x3cfd,	// (0x00012439) bg_popup_sub_pane_cp14

0x9b20,	// (0x0001825c) list_uniindi_pane

0x9b2c,	// (0x00018268) uniindi_top_pane

0x31c7,	// (0x00011903) bg_uniindi_top_pane

0x9b4b,	// (0x00018287) uniindi_top_pane_g1

0x9b61,	// (0x0001829d) uniindi_top_pane_g2

0x0003,

0xfd38,	// (0x0001e474) uniindi_top_pane_g

0x9b8b,	// (0x000182c7) uniindi_top_pane_t1

0x9bb5,	// (0x000182f1) list_single_uniindi_pane_ParamLimits

0x9bb5,	// (0x000182f1) list_single_uniindi_pane

0x7ef2,	// (0x0001662e) bg_uniindi_top_pane_g1

0x9bc7,	// (0x00018303) list_single_uniindi_pane_g1

0x9bda,	// (0x00018316) list_single_uniindi_pane_t1

0x0d38,	// (0x0000f474) control_bg_pane

0x9bff,	// (0x0001833b) bg_sctrl_sk_pane_cp1

0x9c08,	// (0x00018344) bg_sctrl_sk_pane_cp2

0x9c11,	// (0x0001834d) control_bg_pane_g1

0x9c1a,	// (0x00018356) control_bg_pane_g2

0x0001,

0xfd41,	// (0x0001e47d) control_bg_pane_g

0x7896,	// (0x00015fd2) cell_indicator_nsta_pane_g1_ParamLimits

0xe695,	// (0x0001cdd1) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x0001e1ec) cell_indicator_nsta_pane_g_ParamLimits

0x7be2,	// (0x0001631e) form2_midp_time_pane_t1_ParamLimits

0x20e1,	// (0x0001081d) main_idle_act4_pane_ParamLimits

0x20e1,	// (0x0001081d) main_idle_act4_pane

0xb956,	// (0x0001a092) popup_tb_extension_window_ParamLimits

0xf10b,	// (0x0001d847) tb_ext_find_pane_ParamLimits

0xf10b,	// (0x0001d847) tb_ext_find_pane

0x9c23,	// (0x0001835f) ai_gene_pane_1_cp1

0x4cb2,	// (0x000133ee) ai_gene_pane_2_cp1

0x9c2b,	// (0x00018367) list_single_idle_plugin_calendar_pane

0x9c34,	// (0x00018370) list_single_idle_plugin_notification_pane

0x9c3d,	// (0x00018379) list_single_idle_plugin_player_pane

0xf169,	// (0x0001d8a5) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf169,	// (0x0001d8a5) list_single_idle_plugin_shortcut_pane

0xf191,	// (0x0001d8cd) main_idle_act4_pane_t1

0xf1a7,	// (0x0001d8e3) main_idle_act4_pane_t2

0x0001,

0xfd46,	// (0x0001e482) main_idle_act4_pane_t

0xf1bf,	// (0x0001d8fb) middle_sk_idle_act4_pane_ParamLimits

0xf1bf,	// (0x0001d8fb) middle_sk_idle_act4_pane

0xf1db,	// (0x0001d917) popup_clock_digital_analogue_window_cp2

0xf202,	// (0x0001d93e) shortcut_wheel_idle_act4_pane_ParamLimits

0xf202,	// (0x0001d93e) shortcut_wheel_idle_act4_pane

0x7ef2,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g1

0x7ef2,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g2

0x7ef2,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g3

0x7ef2,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g4

0x7ef2,	// (0x0001662e) shortcut_wheel_idle_act4_pane_g5

0x9cd0,	// (0x0001840c) shortcut_wheel_idle_act4_pane_g6

0x9cd8,	// (0x00018414) shortcut_wheel_idle_act4_pane_g7

0x9ce0,	// (0x0001841c) shortcut_wheel_idle_act4_pane_g8

0x9ce8,	// (0x00018424) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd4b,	// (0x0001e487) shortcut_wheel_idle_act4_pane_g

0xc0d6,	// (0x0001a812) middle_sk_idle_act4_pane_g1_ParamLimits

0xc0d6,	// (0x0001a812) middle_sk_idle_act4_pane_g1

0xf27f,	// (0x0001d9bb) middle_sk_idle_act4_pane_g2_ParamLimits

0xf27f,	// (0x0001d9bb) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6e,	// (0x0001e4aa) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6e,	// (0x0001e4aa) middle_sk_idle_act4_pane_g

0xf297,	// (0x0001d9d3) middle_sk_idle_act4_pane_t1_ParamLimits

0xf297,	// (0x0001d9d3) middle_sk_idle_act4_pane_t1

0xf2c6,	// (0x0001da02) grid_ai_shortcut_pane_ParamLimits

0xf2c6,	// (0x0001da02) grid_ai_shortcut_pane

0xf2e3,	// (0x0001da1f) list_highlight_pane_cp16_ParamLimits

0xf2e3,	// (0x0001da1f) list_highlight_pane_cp16

0xf2f0,	// (0x0001da2c) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf2f0,	// (0x0001da2c) list_single_idle_plugin_shortcut_pane_g1

0xf2fc,	// (0x0001da38) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf2fc,	// (0x0001da38) list_single_idle_plugin_shortcut_pane_g2

0xf318,	// (0x0001da54) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf318,	// (0x0001da54) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd73,	// (0x0001e4af) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd73,	// (0x0001e4af) list_single_idle_plugin_shortcut_pane_g

0xf32d,	// (0x0001da69) cell_ai_shortcut_pane_ParamLimits

0xf32d,	// (0x0001da69) cell_ai_shortcut_pane

0xf343,	// (0x0001da7f) cell_ai_shortcut_pane_g1_ParamLimits

0xf343,	// (0x0001da7f) cell_ai_shortcut_pane_g1

0x9c23,	// (0x0001835f) ai_gene_pane_1_cp2

0x9e15,	// (0x00018551) ai_gene_pane_2_cp2

0x9e1d,	// (0x00018559) list_highlight_pane_cp15

0x9e26,	// (0x00018562) list_single_idle_plugin_calendar_pane_g1

0x9e1d,	// (0x00018559) list_highlight_pane_cp17

0x9e2e,	// (0x0001856a) list_single_idle_plugin_calendar_pane_g1_copy1

0x9e36,	// (0x00018572) list_single_idle_plugin_player_pane_g1

0x6fc4,	// (0x00015700) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd7a,	// (0x0001e4b6) list_single_idle_plugin_player_pane_g

0x9e3e,	// (0x0001857a) list_single_idle_plugin_player_pane_t1

0x9e4c,	// (0x00018588) list_single_idle_plugin_player_pane_t2

0x9e5a,	// (0x00018596) list_single_idle_plugin_player_pane_t3

0x9e68,	// (0x000185a4) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7f,	// (0x0001e4bb) list_single_idle_plugin_player_pane_t

0x9e76,	// (0x000185b2) wait_bar_pane_cp15

0x9e7e,	// (0x000185ba) grid_ai_notification_pane

0x6fc4,	// (0x00015700) list_single_idle_plugin_notification_pane_g1

0xf365,	// (0x0001daa1) cell_ai_notification_pane_ParamLimits

0xf365,	// (0x0001daa1) cell_ai_notification_pane

0x9e94,	// (0x000185d0) cell_ai_notification_pane_g1

0x9e9c,	// (0x000185d8) cell_ai_notification_pane_t1

0xf372,	// (0x0001daae) tb_ext_find_button_pane

0xf37a,	// (0x0001dab6) tb_ext_find_pane_g1

0xf382,	// (0x0001dabe) tb_ext_find_pane_t1

0x44db,	// (0x00012c17) tb_ext_find_button_pane_g1

0x9ec8,	// (0x00018604) tb_ext_find_button_pane_g2

0x0001,

0xfd88,	// (0x0001e4c4) tb_ext_find_button_pane_g

0xf191,	// (0x0001d8cd) main_idle_act4_pane_t1_ParamLimits

0xf1a7,	// (0x0001d8e3) main_idle_act4_pane_t2_ParamLimits

0xfd46,	// (0x0001e482) main_idle_act4_pane_t_ParamLimits

0xf1db,	// (0x0001d917) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf1f2,	// (0x0001d92e) sat_plugin_idle_act4_pane_ParamLimits

0xf1f2,	// (0x0001d92e) sat_plugin_idle_act4_pane

0xf390,	// (0x0001dacc) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf390,	// (0x0001dacc) sat_plugin_idle_act4_pane_t1

0xf3a8,	// (0x0001dae4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3a8,	// (0x0001dae4) sat_plugin_idle_act4_pane_t2

0xf3c0,	// (0x0001dafc) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3c0,	// (0x0001dafc) sat_plugin_idle_act4_pane_t3

0xf3d8,	// (0x0001db14) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3d8,	// (0x0001db14) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8d,	// (0x0001e4c9) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8d,	// (0x0001e4c9) sat_plugin_idle_act4_pane_t

0x0dfd,	// (0x0000f539) popup_battery_window_ParamLimits

0x0dfd,	// (0x0000f539) popup_battery_window

0x31c7,	// (0x00011903) bg_popup_sub_pane_cp25_ParamLimits

0x31c7,	// (0x00011903) bg_popup_sub_pane_cp25

0x9f1d,	// (0x00018659) popup_battery_window_g1_ParamLimits

0x9f1d,	// (0x00018659) popup_battery_window_g1

0x9f29,	// (0x00018665) popup_battery_window_t1_ParamLimits

0x9f29,	// (0x00018665) popup_battery_window_t1

0x9f3b,	// (0x00018677) popup_battery_window_t2_ParamLimits

0x9f3b,	// (0x00018677) popup_battery_window_t2

0x0001,

0xfd96,	// (0x0001e4d2) popup_battery_window_t_ParamLimits

0xfd96,	// (0x0001e4d2) popup_battery_window_t

0xdb67,	// (0x0001c2a3) midp_canvas_pane_ParamLimits

0xdbc4,	// (0x0001c300) midp_keypad_pane_ParamLimits

0xdbc4,	// (0x0001c300) midp_keypad_pane

0x4eb9,	// (0x000135f5) main_midp_pane_ParamLimits

0x7922,	// (0x0001605e) signal_pane_g2_cp_ParamLimits

0xf3f0,	// (0x0001db2c) aid_size_cell_midp_keypad_ParamLimits

0xf3f0,	// (0x0001db2c) aid_size_cell_midp_keypad

0xf40e,	// (0x0001db4a) midp_keyp_game_grid_pane_ParamLimits

0xf40e,	// (0x0001db4a) midp_keyp_game_grid_pane

0xf435,	// (0x0001db71) midp_keyp_rocker_pane_ParamLimits

0xf435,	// (0x0001db71) midp_keyp_rocker_pane

0xf476,	// (0x0001dbb2) midp_keyp_sk_left_pane_ParamLimits

0xf476,	// (0x0001dbb2) midp_keyp_sk_left_pane

0xf4ca,	// (0x0001dc06) midp_keyp_sk_right_pane_ParamLimits

0xf4ca,	// (0x0001dc06) midp_keyp_sk_right_pane

0x2e30,	// (0x0001156c) bg_button_pane_cp03

0xf51e,	// (0x0001dc5a) midp_keyp_sk_left_pane_g1

0x2e30,	// (0x0001156c) bg_button_pane_cp04

0xf51e,	// (0x0001dc5a) midp_keyp_sk_right_pane_g1

0x7ef2,	// (0x0001662e) midp_keyp_rocker_pane_g1

0xf527,	// (0x0001dc63) keyp_game_cell_pane_ParamLimits

0xf527,	// (0x0001dc63) keyp_game_cell_pane

0x2e30,	// (0x0001156c) bg_button_pane_cp02

0xf54b,	// (0x0001dc87) keyp_game_cell_pane_g1

0xb15d,	// (0x00019899) popup_fep_vkb2_window_ParamLimits

0xb15d,	// (0x00019899) popup_fep_vkb2_window

0xbca1,	// (0x0001a3dd) aid_size_cell_vkb2_ParamLimits

0xbca1,	// (0x0001a3dd) aid_size_cell_vkb2

0xbcd7,	// (0x0001a413) popup_fep_vkb2_window_g1_ParamLimits

0xbcd7,	// (0x0001a413) popup_fep_vkb2_window_g1

0xbd1e,	// (0x0001a45a) vkb2_area_bottom_pane_ParamLimits

0xbd1e,	// (0x0001a45a) vkb2_area_bottom_pane

0xbd72,	// (0x0001a4ae) vkb2_area_keypad_pane_ParamLimits

0xbd72,	// (0x0001a4ae) vkb2_area_keypad_pane

0xbdba,	// (0x0001a4f6) vkb2_area_top_pane_ParamLimits

0xbdba,	// (0x0001a4f6) vkb2_area_top_pane

0xbe40,	// (0x0001a57c) vkb2_top_entry_pane_ParamLimits

0xbe40,	// (0x0001a57c) vkb2_top_entry_pane

0xbe6d,	// (0x0001a5a9) vkb2_top_grid_left_pane_ParamLimits

0xbe6d,	// (0x0001a5a9) vkb2_top_grid_left_pane

0xbe8d,	// (0x0001a5c9) vkb2_top_grid_right_pane_ParamLimits

0xbe8d,	// (0x0001a5c9) vkb2_top_grid_right_pane

0x280e,	// (0x00010f4a) vkb2_cell_keypad_pane_ParamLimits

0x280e,	// (0x00010f4a) vkb2_cell_keypad_pane

0xbed3,	// (0x0001a60f) vkb2_area_bottom_grid_pane_ParamLimits

0xbed3,	// (0x0001a60f) vkb2_area_bottom_grid_pane

0xbefd,	// (0x0001a639) vkb2_area_bottom_pane_g1_ParamLimits

0xbefd,	// (0x0001a639) vkb2_area_bottom_pane_g1

0xbf23,	// (0x0001a65f) vkb2_area_bottom_pane_g2_ParamLimits

0xbf23,	// (0x0001a65f) vkb2_area_bottom_pane_g2

0xbf54,	// (0x0001a690) vkb2_area_bottom_pane_g3_ParamLimits

0xbf54,	// (0x0001a690) vkb2_area_bottom_pane_g3

0x0002,

0xfd9b,	// (0x0001e4d7) vkb2_area_bottom_pane_g_ParamLimits

0xfd9b,	// (0x0001e4d7) vkb2_area_bottom_pane_g

0x29b8,	// (0x000110f4) vkb2_top_cell_left_pane_ParamLimits

0x29b8,	// (0x000110f4) vkb2_top_cell_left_pane

0x01e2,	// (0x0000e91e) vkb2_top_entry_pane_g1_ParamLimits

0x01e2,	// (0x0000e91e) vkb2_top_entry_pane_g1

0x01f0,	// (0x0000e92c) vkb2_top_entry_pane_t1_ParamLimits

0x01f0,	// (0x0000e92c) vkb2_top_entry_pane_t1

0xa0de,	// (0x0001881a) vkb2_top_entry_pane_t2_ParamLimits

0xa0de,	// (0x0001881a) vkb2_top_entry_pane_t2

0xa110,	// (0x0001884c) vkb2_top_entry_pane_t3_ParamLimits

0xa110,	// (0x0001884c) vkb2_top_entry_pane_t3

0x0002,

0xfda2,	// (0x0001e4de) vkb2_top_entry_pane_t_ParamLimits

0xfda2,	// (0x0001e4de) vkb2_top_entry_pane_t

0xbfbe,	// (0x0001a6fa) vkb2_top_grid_right_pane_g1_ParamLimits

0xbfbe,	// (0x0001a6fa) vkb2_top_grid_right_pane_g1

0x2a1b,	// (0x00011157) vkb2_top_grid_right_pane_g2_ParamLimits

0x2a1b,	// (0x00011157) vkb2_top_grid_right_pane_g2

0x2a33,	// (0x0001116f) vkb2_top_grid_right_pane_g3_ParamLimits

0x2a33,	// (0x0001116f) vkb2_top_grid_right_pane_g3

0xbfd4,	// (0x0001a710) vkb2_top_grid_right_pane_g4_ParamLimits

0xbfd4,	// (0x0001a710) vkb2_top_grid_right_pane_g4

0x0003,

0xfda9,	// (0x0001e4e5) vkb2_top_grid_right_pane_g_ParamLimits

0xfda9,	// (0x0001e4e5) vkb2_top_grid_right_pane_g

0x2a61,	// (0x0001119d) vkb2_top_cell_left_pane_g1

0x2a78,	// (0x000111b4) vkb2_cell_keypad_pane_g1_ParamLimits

0x2a78,	// (0x000111b4) vkb2_cell_keypad_pane_g1

0xa134,	// (0x00018870) vkb2_cell_keypad_pane_t1_ParamLimits

0xa134,	// (0x00018870) vkb2_cell_keypad_pane_t1

0x2a86,	// (0x000111c2) vkb2_cell_bottom_grid_pane_ParamLimits

0x2a86,	// (0x000111c2) vkb2_cell_bottom_grid_pane

0x2abf,	// (0x000111fb) vkb2_cell_bottom_grid_pane_g1

0xf223,	// (0x0001d95f) aid_call2_pane_cp02

0xf22b,	// (0x0001d967) aid_call_pane_cp02

0xf233,	// (0x0001d96f) clock_digital_number_pane_cp10

0xf23b,	// (0x0001d977) clock_digital_number_pane_cp11

0xf243,	// (0x0001d97f) clock_digital_number_pane_cp12

0xf24b,	// (0x0001d987) clock_digital_number_pane_cp13

0xf253,	// (0x0001d98f) clock_digital_separator_pane_cp10

0x44db,	// (0x00012c17) popup_clock_digital_analogue_window_cp2_g1

0x44db,	// (0x00012c17) popup_clock_digital_analogue_window_cp2_g2

0xf25b,	// (0x0001d997) popup_clock_digital_analogue_window_cp2_g3

0x44db,	// (0x00012c17) popup_clock_digital_analogue_window_cp2_g4

0xf25b,	// (0x0001d997) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5e,	// (0x0001e49a) popup_clock_digital_analogue_window_cp2_g

0xf263,	// (0x0001d99f) popup_clock_digital_analogue_window_cp2_t1

0xf271,	// (0x0001d9ad) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd69,	// (0x0001e4a5) popup_clock_digital_analogue_window_cp2_t

0x7ef2,	// (0x0001662e) clock_digital_number_pane_cp10_g1

0x7ef2,	// (0x0001662e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001e288) clock_digital_number_pane_cp10_g

0x7ef2,	// (0x0001662e) clock_digital_separator_pane_cp10_g1

0x7ef2,	// (0x0001662e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x0001e288) clock_digital_separator_pane_cp10_g

0x9b6d,	// (0x000182a9) uniindi_top_pane_g3

0x9b7e,	// (0x000182ba) uniindi_top_pane_g4

0x2899,	// (0x00010fd5) vkb2_row_keypad_pane_ParamLimits

0x2899,	// (0x00010fd5) vkb2_row_keypad_pane

0x2adf,	// (0x0001121b) vkb2_cell_t_keypad_pane_ParamLimits

0x2adf,	// (0x0001121b) vkb2_cell_t_keypad_pane

0x2aef,	// (0x0001122b) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2aef,	// (0x0001122b) vkb2_cell_t_keypad_pane_cp08

0x2b02,	// (0x0001123e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2b02,	// (0x0001123e) vkb2_cell_t_keypad_pane_cp09

0x2b16,	// (0x00011252) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2b16,	// (0x00011252) vkb2_cell_t_keypad_pane_cp01

0x2b27,	// (0x00011263) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2b27,	// (0x00011263) vkb2_cell_t_keypad_pane_cp02

0x2b38,	// (0x00011274) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2b38,	// (0x00011274) vkb2_cell_t_keypad_pane_cp03

0x2b49,	// (0x00011285) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2b49,	// (0x00011285) vkb2_cell_t_keypad_pane_cp04

0x2b5a,	// (0x00011296) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2b5a,	// (0x00011296) vkb2_cell_t_keypad_pane_cp05

0x2b6b,	// (0x000112a7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2b6b,	// (0x000112a7) vkb2_cell_t_keypad_pane_cp06

0x2b7c,	// (0x000112b8) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2b7c,	// (0x000112b8) vkb2_cell_t_keypad_pane_cp07

0x2b8d,	// (0x000112c9) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2b8d,	// (0x000112c9) vkb2_cell_t_keypad_pane_cp10

0x2346,	// (0x00010a82) vkb2_cell_t_keypad_pane_g1

0xa14b,	// (0x00018887) vkb2_cell_t_keypad_pane_t1

0x0d38,	// (0x0000f474) popup_grid_graphic2_window

0x0255,	// (0x0000e991) aid_size_cell_graphic2_ParamLimits

0x0255,	// (0x0000e991) aid_size_cell_graphic2

0x0293,	// (0x0000e9cf) bg_popup_window_pane_cp21_ParamLimits

0x0293,	// (0x0000e9cf) bg_popup_window_pane_cp21

0x02a1,	// (0x0000e9dd) graphic2_pages_pane_ParamLimits

0x02a1,	// (0x0000e9dd) graphic2_pages_pane

0x02f7,	// (0x0000ea33) grid_graphic2_control_pane_ParamLimits

0x02f7,	// (0x0000ea33) grid_graphic2_control_pane

0x033f,	// (0x0000ea7b) grid_graphic2_pane_ParamLimits

0x033f,	// (0x0000ea7b) grid_graphic2_pane

0x03c6,	// (0x0000eb02) cell_graphic2_pane

0x0d38,	// (0x0000f474) main_comp_mode_pane

0x936f,	// (0x00017aab) list_ai3_gene_pane_ParamLimits

0xef67,	// (0x0001d6a3) bg_popup_window_pane_cp19_ParamLimits

0x97c1,	// (0x00017efd) bg_touch_area_indi_pane_ParamLimits

0x97c1,	// (0x00017efd) bg_touch_area_indi_pane

0x97d7,	// (0x00017f13) bg_touch_area_indi_pane_cp01_ParamLimits

0x97d7,	// (0x00017f13) bg_touch_area_indi_pane_cp01

0x97ed,	// (0x00017f29) bg_touch_area_indi_pane_cp02_ParamLimits

0x97ed,	// (0x00017f29) bg_touch_area_indi_pane_cp02

0x9805,	// (0x00017f41) bg_touch_area_indi_pane_cp03_ParamLimits

0x9805,	// (0x00017f41) bg_touch_area_indi_pane_cp03

0x981f,	// (0x00017f5b) popup_slider_window_g1_ParamLimits

0x983b,	// (0x00017f77) popup_slider_window_g2_ParamLimits

0x9857,	// (0x00017f93) popup_slider_window_g3_ParamLimits

0xfcf3,	// (0x0001e42f) popup_slider_window_g_ParamLimits

0x98b3,	// (0x00017fef) popup_slider_window_t1_ParamLimits

0x9927,	// (0x00018063) small_volume_slider_vertical_pane_ParamLimits

0x03c6,	// (0x0000eb02) cell_graphic2_pane_ParamLimits

0x0423,	// (0x0000eb5f) bg_button_pane_cp10_ParamLimits

0x0423,	// (0x0000eb5f) bg_button_pane_cp10

0x0436,	// (0x0000eb72) bg_button_pane_cp11_ParamLimits

0x0436,	// (0x0000eb72) bg_button_pane_cp11

0x0449,	// (0x0000eb85) graphic2_pages_pane_g1_ParamLimits

0x0449,	// (0x0000eb85) graphic2_pages_pane_g1

0x0464,	// (0x0000eba0) graphic2_pages_pane_g2_ParamLimits

0x0464,	// (0x0000eba0) graphic2_pages_pane_g2

0x0001,

0xfdb7,	// (0x0001e4f3) graphic2_pages_pane_g_ParamLimits

0xfdb7,	// (0x0001e4f3) graphic2_pages_pane_g

0x047c,	// (0x0000ebb8) graphic2_pages_pane_t1_ParamLimits

0x047c,	// (0x0000ebb8) graphic2_pages_pane_t1

0x0494,	// (0x0000ebd0) cell_graphic2_control_pane_ParamLimits

0x0494,	// (0x0000ebd0) cell_graphic2_control_pane

0x04c6,	// (0x0000ec02) cell_graphic2_pane_g1_ParamLimits

0x04c6,	// (0x0000ec02) cell_graphic2_pane_g1

0xc0e4,	// (0x0001a820) cell_graphic2_pane_g2_ParamLimits

0xc0e4,	// (0x0001a820) cell_graphic2_pane_g2

0x04d3,	// (0x0000ec0f) cell_graphic2_pane_g3_ParamLimits

0x04d3,	// (0x0000ec0f) cell_graphic2_pane_g3

0xc0f1,	// (0x0001a82d) cell_graphic2_pane_g4_ParamLimits

0xc0f1,	// (0x0001a82d) cell_graphic2_pane_g4

0x04e0,	// (0x0000ec1c) cell_graphic2_pane_g5_ParamLimits

0x04e0,	// (0x0000ec1c) cell_graphic2_pane_g5

0x0004,

0xfdbc,	// (0x0001e4f8) cell_graphic2_pane_g_ParamLimits

0xfdbc,	// (0x0001e4f8) cell_graphic2_pane_g

0x0500,	// (0x0000ec3c) cell_graphic2_pane_t1_ParamLimits

0x0500,	// (0x0000ec3c) cell_graphic2_pane_t1

0x61de,	// (0x0001491a) grid_highlight_pane_cp11_ParamLimits

0x61de,	// (0x0001491a) grid_highlight_pane_cp11

0x31c7,	// (0x00011903) bg_button_pane_cp05

0x0535,	// (0x0000ec71) cell_graphic2_control_pane_g1

0x7ef2,	// (0x0001662e) bg_touch_area_indi_pane_g1

0xa419,	// (0x00018b55) aid_cmod_rocker_key_size

0xa423,	// (0x00018b5f) aid_cmode_itu_key_size

0xa42d,	// (0x00018b69) main_cmode_video_pane

0xa437,	// (0x00018b73) main_comp_mode_itu_pane

0xa443,	// (0x00018b7f) main_comp_mode_rocker_pane

0xa44f,	// (0x00018b8b) cell_cmode_rocker_pane_ParamLimits

0xa44f,	// (0x00018b8b) cell_cmode_rocker_pane

0xa461,	// (0x00018b9d) cell_cmode_itu_pane_ParamLimits

0xa461,	// (0x00018b9d) cell_cmode_itu_pane

0x3cfd,	// (0x00012439) bg_button_pane_cp06_ParamLimits

0x3cfd,	// (0x00012439) bg_button_pane_cp06

0x816d,	// (0x000168a9) cell_cmode_rocker_pane_g1_ParamLimits

0x816d,	// (0x000168a9) cell_cmode_rocker_pane_g1

0x99cb,	// (0x00018107) cell_cmode_rocker_pane_g2_ParamLimits

0x99cb,	// (0x00018107) cell_cmode_rocker_pane_g2

0x0001,

0xfdcc,	// (0x0001e508) cell_cmode_rocker_pane_g_ParamLimits

0xfdcc,	// (0x0001e508) cell_cmode_rocker_pane_g

0x2e30,	// (0x0001156c) bg_button_pane_cp07

0xa476,	// (0x00018bb2) cell_cmode_itu_pane_g1

0xa47f,	// (0x00018bbb) cell_cmode_itu_pane_t1

0xa48d,	// (0x00018bc9) cell_cmode_itu_pane_t2

0x0001,

0xfdd1,	// (0x0001e50d) cell_cmode_itu_pane_t

0x9bef,	// (0x0001832b) aid_touch_ctrl_left

0x9bf7,	// (0x00018333) aid_touch_ctrl_right

0x2e30,	// (0x0001156c) compa_mode_pane

0x055b,	// (0x0000ec97) aid_cmod_rocker_key_size_cp

0x0565,	// (0x0000eca1) aid_cmode_itu_key_size_cp

0xa4af,	// (0x00018beb) compa_mode_pane_g1

0xa4b7,	// (0x00018bf3) compa_mode_pane_g2

0xa4bf,	// (0x00018bfb) compa_mode_pane_g3

0x0002,

0xfdd6,	// (0x0001e512) compa_mode_pane_g

0x056f,	// (0x0000ecab) main_comp_mode_itu_pane_cp

0x0577,	// (0x0000ecb3) main_comp_mode_rocker_pane_cp

0x057f,	// (0x0000ecbb) cell_cmode_itu_pane_cp_ParamLimits

0x057f,	// (0x0000ecbb) cell_cmode_itu_pane_cp

0x0594,	// (0x0000ecd0) cell_cmode_rocker_pane_cp_ParamLimits

0x0594,	// (0x0000ecd0) cell_cmode_rocker_pane_cp

0x3cfd,	// (0x00012439) bg_button_pane_cp06_cp_ParamLimits

0x3cfd,	// (0x00012439) bg_button_pane_cp06_cp

0x816d,	// (0x000168a9) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x816d,	// (0x000168a9) cell_cmode_rocker_pane_g1_cp

0x7ef2,	// (0x0001662e) cell_cmode_rocker_pane_g2_cp

0x2e30,	// (0x0001156c) bg_button_pane_cp07_cp

0x05a6,	// (0x0000ece2) cell_cmode_itu_pane_g1_cp

0x05af,	// (0x0000eceb) cell_cmode_itu_pane_t1_cp

0x05af,	// (0x0000eceb) cell_cmode_itu_pane_t2_cp

0xe497,	// (0x0001cbd3) settings_code_pane_cp2

0x2f24,	// (0x00011660) bg_popup_window_pane_cp3_ParamLimits

0x3395,	// (0x00011ad1) heading_pane_cp3_ParamLimits

0x33a1,	// (0x00011add) listscroll_popup_graphic_pane_ParamLimits

0x20ef,	// (0x0001082b) fep_hwr_aid_pane_ParamLimits

0x2567,	// (0x00010ca3) aid_touch_sctrl_top_ParamLimits

0x2582,	// (0x00010cbe) sctrl_sk_top_pane_g1_ParamLimits

0x2346,	// (0x00010a82) sctrl_sk_top_pane_g2_ParamLimits

0xfd0c,	// (0x0001e448) sctrl_sk_top_pane_g_ParamLimits

0x258f,	// (0x00010ccb) sctrl_sk_top_pane_t1_ParamLimits

0x2567,	// (0x00010ca3) aid_touch_sctrl_bottom_ParamLimits

0x258f,	// (0x00010ccb) sctrl_sk_bottom_pane_t1_ParamLimits

0x9b39,	// (0x00018275) aid_area_touch_clock

0xbe02,	// (0x0001a53e) aid_vkb2_area_top_pane_cell_ParamLimits

0xbe02,	// (0x0001a53e) aid_vkb2_area_top_pane_cell

0xbead,	// (0x0001a5e9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xbead,	// (0x0001a5e9) aid_vkb2_area_bottom_pane_cell

0xa096,	// (0x000187d2) popup_char_count_window

0xa515,	// (0x00018c51) popup_char_count_window_g1

0xa51e,	// (0x00018c5a) popup_char_count_window_g2

0xa527,	// (0x00018c63) popup_char_count_window_g3

0x0002,

0xfddd,	// (0x0001e519) popup_char_count_window_g

0xa530,	// (0x00018c6c) popup_char_count_window_t1

0x263e,	// (0x00010d7a) popup_fep_char_preview_window_ParamLimits

0x263e,	// (0x00010d7a) popup_fep_char_preview_window

0xbe22,	// (0x0001a55e) vkb2_top_candi_pane_ParamLimits

0xbe22,	// (0x0001a55e) vkb2_top_candi_pane

0x05bd,	// (0x0000ecf9) cell_vkb2_top_candi_pane_ParamLimits

0x05bd,	// (0x0000ecf9) cell_vkb2_top_candi_pane

0x2ba2,	// (0x000112de) bg_popup_fep_char_preview_window_ParamLimits

0x2ba2,	// (0x000112de) bg_popup_fep_char_preview_window

0x2bb0,	// (0x000112ec) popup_fep_char_preview_window_t1_ParamLimits

0x2bb0,	// (0x000112ec) popup_fep_char_preview_window_t1

0xa5ac,	// (0x00018ce8) bg_popup_fep_char_preview_window_g1

0xa5b4,	// (0x00018cf0) bg_popup_fep_char_preview_window_g2

0xa5bc,	// (0x00018cf8) bg_popup_fep_char_preview_window_g3

0xa5c4,	// (0x00018d00) bg_popup_fep_char_preview_window_g4

0xa5cc,	// (0x00018d08) bg_popup_fep_char_preview_window_g5

0x2bea,	// (0x00011326) bg_popup_fep_char_preview_window_g6

0xa5d4,	// (0x00018d10) bg_popup_fep_char_preview_window_g7

0xa5dc,	// (0x00018d18) bg_popup_fep_char_preview_window_g8

0xa5e4,	// (0x00018d20) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde4,	// (0x0001e520) bg_popup_fep_char_preview_window_g

0x2346,	// (0x00010a82) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2346,	// (0x00010a82) cell_vkb2_top_candi_pane_g1

0x2354,	// (0x00010a90) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2354,	// (0x00010a90) cell_vkb2_top_candi_pane_g2

0xa58b,	// (0x00018cc7) cell_vkb2_top_candi_pane_g3_ParamLimits

0xa58b,	// (0x00018cc7) cell_vkb2_top_candi_pane_g3

0x2bf2,	// (0x0001132e) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2bf2,	// (0x0001132e) cell_vkb2_top_candi_pane_g4

0x87e7,	// (0x00016f23) cell_vkb2_top_candi_pane_g5_ParamLimits

0x87e7,	// (0x00016f23) cell_vkb2_top_candi_pane_g5

0x2c13,	// (0x0001134f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x2c13,	// (0x0001134f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf7,	// (0x0001e533) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf7,	// (0x0001e533) cell_vkb2_top_candi_pane_g

0x2c21,	// (0x0001135d) cell_vkb2_top_candi_pane_t1

0x1efe,	// (0x0001063a) aid_size_touch_slider_mark_ParamLimits

0x1efe,	// (0x0001063a) aid_size_touch_slider_mark

0x02dd,	// (0x0000ea19) grid_graphic2_catg_pane_ParamLimits

0x02dd,	// (0x0000ea19) grid_graphic2_catg_pane

0x0399,	// (0x0000ead5) popup_grid_graphic2_window_t1_ParamLimits

0x0399,	// (0x0000ead5) popup_grid_graphic2_window_t1

0x03af,	// (0x0000eaeb) popup_grid_graphic2_window_t2_ParamLimits

0x03af,	// (0x0000eaeb) popup_grid_graphic2_window_t2

0x0001,

0xfdb2,	// (0x0001e4ee) popup_grid_graphic2_window_t_ParamLimits

0xfdb2,	// (0x0001e4ee) popup_grid_graphic2_window_t

0x31c7,	// (0x00011903) bg_button_pane_cp05_ParamLimits

0x0535,	// (0x0000ec71) cell_graphic2_control_pane_g1_ParamLimits

0x0623,	// (0x0000ed5f) cell_graphic2_catg_pane_ParamLimits

0x0623,	// (0x0000ed5f) cell_graphic2_catg_pane

0x2e30,	// (0x0001156c) bg_button_pane_cp12

0x0635,	// (0x0000ed71) cell_graphic2_catg_pane_g1

0x9b05,	// (0x00018241) cell_tb_ext_pane_t1_ParamLimits

0x29d8,	// (0x00011114) vkb2_top_cell_right_narrow_pane_ParamLimits

0x29d8,	// (0x00011114) vkb2_top_cell_right_narrow_pane

0x29f0,	// (0x0001112c) vkb2_top_cell_right_wide_pane_ParamLimits

0x29f0,	// (0x0001112c) vkb2_top_cell_right_wide_pane

0x20e1,	// (0x0001081d) bg_vkb2_func_pane_ParamLimits

0x20e1,	// (0x0001081d) bg_vkb2_func_pane

0x2a61,	// (0x0001119d) vkb2_top_cell_left_pane_g1_ParamLimits

0x20e1,	// (0x0001081d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x20e1,	// (0x0001081d) bg_vkb2_fuc_pane_cp03

0x2abf,	// (0x000111fb) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x53f9,	// (0x00013b35) bg_vkb2_func_pane_g1

0x5401,	// (0x00013b3d) bg_vkb2_func_pane_g2

0x5411,	// (0x00013b4d) bg_vkb2_func_pane_g3

0x5409,	// (0x00013b45) bg_vkb2_func_pane_g4

0x5419,	// (0x00013b55) bg_vkb2_func_pane_g5

0x5421,	// (0x00013b5d) bg_vkb2_func_pane_g6

0x5429,	// (0x00013b65) bg_vkb2_func_pane_g7

0x5431,	// (0x00013b6d) bg_vkb2_func_pane_g8

0x53f1,	// (0x00013b2d) bg_vkb2_func_pane_g9

0x0008,

0xfe04,	// (0x0001e540) bg_vkb2_func_pane_g

0x20e1,	// (0x0001081d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x20e1,	// (0x0001081d) bg_vkb2_fuc_pane_cp01

0x2a61,	// (0x0001119d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2a61,	// (0x0001119d) vkb2_top_cell_right_wide_pane_g1

0x20e1,	// (0x0001081d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x20e1,	// (0x0001081d) bg_vkb2_fuc_pane_cp02

0x2abf,	// (0x000111fb) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2abf,	// (0x000111fb) vkb2_top_cell_right_narrow_pane_g1

0xeea1,	// (0x0001d5dd) aid_touch_area_decrease_ParamLimits

0xeea1,	// (0x0001d5dd) aid_touch_area_decrease

0xeedb,	// (0x0001d617) aid_touch_area_increase_ParamLimits

0xeedb,	// (0x0001d617) aid_touch_area_increase

0xef03,	// (0x0001d63f) aid_touch_area_mute_ParamLimits

0xef03,	// (0x0001d63f) aid_touch_area_mute

0xef33,	// (0x0001d66f) aid_touch_area_slider_ParamLimits

0xef33,	// (0x0001d66f) aid_touch_area_slider

0xef73,	// (0x0001d6af) popup_slider_window_g4_ParamLimits

0xef73,	// (0x0001d6af) popup_slider_window_g4

0xef9b,	// (0x0001d6d7) popup_slider_window_g5_ParamLimits

0xef9b,	// (0x0001d6d7) popup_slider_window_g5

0xefcf,	// (0x0001d70b) popup_slider_window_g6_ParamLimits

0xefcf,	// (0x0001d70b) popup_slider_window_g6

0x98e1,	// (0x0001801d) popup_slider_window_t2_ParamLimits

0x98e1,	// (0x0001801d) popup_slider_window_t2

0x0001,

0xfd00,	// (0x0001e43c) popup_slider_window_t_ParamLimits

0xfd00,	// (0x0001e43c) popup_slider_window_t

0xefeb,	// (0x0001d727) slider_pane_ParamLimits

0xefeb,	// (0x0001d727) slider_pane

0xa607,	// (0x00018d43) slider_pane_g1_ParamLimits

0xa607,	// (0x00018d43) slider_pane_g1

0xa61b,	// (0x00018d57) slider_pane_g2_ParamLimits

0xa61b,	// (0x00018d57) slider_pane_g2

0xa631,	// (0x00018d6d) slider_pane_g3_ParamLimits

0xa631,	// (0x00018d6d) slider_pane_g3

0x0003,

0xfe17,	// (0x0001e553) slider_pane_g_ParamLimits

0xfe17,	// (0x0001e553) slider_pane_g

0xb99e,	// (0x0001a0da) popup_tb_float_extension_window_ParamLimits

0xb99e,	// (0x0001a0da) popup_tb_float_extension_window

0xa65d,	// (0x00018d99) aid_size_cell_tb_float_ext

0x2e30,	// (0x0001156c) bg_popup_sub_window_cp28

0xa669,	// (0x00018da5) grid_tb_float_ext_pane

0xa673,	// (0x00018daf) cell_tb_float_ext_pane_ParamLimits

0xa673,	// (0x00018daf) cell_tb_float_ext_pane

0xa68d,	// (0x00018dc9) cell_tb_float_ext_pane_g1

0xa696,	// (0x00018dd2) grid_highlight_pane_cp12

0xbc14,	// (0x0001a350) cell_last_hwr_side_pane_ParamLimits

0xbc14,	// (0x0001a350) cell_last_hwr_side_pane

0x7ef2,	// (0x0001662e) cell_last_hwr_side_pane_g1

0xa69f,	// (0x00018ddb) cell_last_hwr_side_pane_g2

0x0001,

0xfe20,	// (0x0001e55c) cell_last_hwr_side_pane_g

0xbf89,	// (0x0001a6c5) vkb2_area_bottom_space_btn_pane_ParamLimits

0xbf89,	// (0x0001a6c5) vkb2_area_bottom_space_btn_pane

0x2346,	// (0x00010a82) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa14b,	// (0x00018887) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2c21,	// (0x0001135d) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2c40,	// (0x0001137c) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2c40,	// (0x0001137c) vkb2_area_bottom_space_btn_pane_g1

0x2c7a,	// (0x000113b6) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2c7a,	// (0x000113b6) vkb2_area_bottom_space_btn_pane_g2

0x2cb0,	// (0x000113ec) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2cb0,	// (0x000113ec) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe25,	// (0x0001e561) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe25,	// (0x0001e561) vkb2_area_bottom_space_btn_pane_g

0x21a4,	// (0x000108e0) cel_fep_hwr_func_pane_ParamLimits

0x21a4,	// (0x000108e0) cel_fep_hwr_func_pane

0xbbe9,	// (0x0001a325) cell_hwr_side_button_pane_ParamLimits

0xbbe9,	// (0x0001a325) cell_hwr_side_button_pane

0x9b39,	// (0x00018275) aid_area_touch_clock_ParamLimits

0x31c7,	// (0x00011903) bg_uniindi_top_pane_ParamLimits

0x9b4b,	// (0x00018287) uniindi_top_pane_g1_ParamLimits

0x9b61,	// (0x0001829d) uniindi_top_pane_g2_ParamLimits

0x9b6d,	// (0x000182a9) uniindi_top_pane_g3_ParamLimits

0x9b7e,	// (0x000182ba) uniindi_top_pane_g4_ParamLimits

0xfd38,	// (0x0001e474) uniindi_top_pane_g_ParamLimits

0x9b8b,	// (0x000182c7) uniindi_top_pane_t1_ParamLimits

0x31c7,	// (0x00011903) bg_vkb2_func_pane_cp01_ParamLimits

0x31c7,	// (0x00011903) bg_vkb2_func_pane_cp01

0xc0fe,	// (0x0001a83a) cel_fep_hwr_func_pane_g1_ParamLimits

0xc0fe,	// (0x0001a83a) cel_fep_hwr_func_pane_g1

0x31c7,	// (0x00011903) bg_vkb2_func_pane_cp02_ParamLimits

0x31c7,	// (0x00011903) bg_vkb2_func_pane_cp02

0xc0fe,	// (0x0001a83a) cell_hwr_side_button_pane_g1_ParamLimits

0xc0fe,	// (0x0001a83a) cell_hwr_side_button_pane_g1

0x5246,	// (0x00013982) status_pane_g4_ParamLimits

0x5246,	// (0x00013982) status_pane_g4

0x525e,	// (0x0001399a) status_pane_t1

0x7bf5,	// (0x00016331) form2_midp_gauge_slider_cont_pane

0x7bfd,	// (0x00016339) form2_midp_gauge_slider_pane_t1_ParamLimits

0xe76b,	// (0x0001cea7) form2_midp_gauge_slider_pane_t2_ParamLimits

0xe77f,	// (0x0001cebb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x0001e23b) form2_midp_gauge_slider_pane_t_ParamLimits

0x7c33,	// (0x0001636f) form2_midp_slider_pane_ParamLimits

0x25fe,	// (0x00010d3a) aid_size_cell_func_vkb2_ParamLimits

0x25fe,	// (0x00010d3a) aid_size_cell_func_vkb2

0xa649,	// (0x00018d85) slider_pane_g4_ParamLimits

0xa649,	// (0x00018d85) slider_pane_g4

0xbfea,	// (0x0001a726) form2_midp_gauge_slider_pane_t2_cp01

0xbffa,	// (0x0001a736) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xbffa,	// (0x0001a736) form2_midp_gauge_slider_pane_t3_cp01

0x2d25,	// (0x00011461) form2_midp_slider_pane_cp01

0x2e30,	// (0x0001156c) navi_smil_pane

0xc12e,	// (0x0001a86a) navi_smil_pane_g1

0xc136,	// (0x0001a872) navi_smil_pane_t1

0xc10c,	// (0x0001a848) form2_midp_slider_pane_g1

0xc115,	// (0x0001a851) form2_midp_slider_pane_g2

0xc11d,	// (0x0001a859) form2_midp_slider_pane_g3

0xc10c,	// (0x0001a848) form2_midp_slider_pane_g4

0x066d,	// (0x0000eda9) form2_midp_slider_pane_g5

0x0004,

0xfe2e,	// (0x0001e56a) form2_midp_slider_pane_g

0x2cea,	// (0x00011426) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2cea,	// (0x00011426) vkb2_area_bottom_space_btn_pane_g4

0xdd9e,	// (0x0001c4da) lc0_navi_pane_ParamLimits

0xdd9e,	// (0x0001c4da) lc0_navi_pane

0xde08,	// (0x0001c544) lc0_stat_indi_pane_ParamLimits

0xde08,	// (0x0001c544) lc0_stat_indi_pane

0xde1d,	// (0x0001c559) ls0_title_pane_ParamLimits

0xde1d,	// (0x0001c559) ls0_title_pane

0x3cfd,	// (0x00012439) bg_popup_sub_pane_cp14_ParamLimits

0x9b20,	// (0x0001825c) list_uniindi_pane_ParamLimits

0x9b2c,	// (0x00018268) uniindi_top_pane_ParamLimits

0x9bc7,	// (0x00018303) list_single_uniindi_pane_g1_ParamLimits

0x9bda,	// (0x00018316) list_single_uniindi_pane_t1_ParamLimits

0xc019,	// (0x0001a755) lc0_stat_clock_pane_ParamLimits

0xc019,	// (0x0001a755) lc0_stat_clock_pane

0x0692,	// (0x0000edce) lc0_stat_indi_pane_g1_ParamLimits

0x0692,	// (0x0000edce) lc0_stat_indi_pane_g1

0x0685,	// (0x0000edc1) lc0_stat_indi_pane_g2_ParamLimits

0x0685,	// (0x0000edc1) lc0_stat_indi_pane_g2

0x0001,

0xfe39,	// (0x0001e575) lc0_stat_indi_pane_g_ParamLimits

0xfe39,	// (0x0001e575) lc0_stat_indi_pane_g

0xc026,	// (0x0001a762) lc0_uni_indicator_pane_ParamLimits

0xc026,	// (0x0001a762) lc0_uni_indicator_pane

0xc144,	// (0x0001a880) ls0_title_pane_g1_ParamLimits

0xc144,	// (0x0001a880) ls0_title_pane_g1

0x06ac,	// (0x0000ede8) ls0_title_pane_t1_ParamLimits

0x06ac,	// (0x0000ede8) ls0_title_pane_t1

0xc033,	// (0x0001a76f) lc0_uni_indicator_pane_g1_ParamLimits

0xc033,	// (0x0001a76f) lc0_uni_indicator_pane_g1

0xc158,	// (0x0001a894) lc0_stat_clock_pane_t1

0x0d38,	// (0x0000f474) main_ai5_pane

0xc166,	// (0x0001a8a2) ai5_sk_pane_ParamLimits

0xc166,	// (0x0001a8a2) ai5_sk_pane

0x0709,	// (0x0000ee45) cell_ai5_widget_pane_ParamLimits

0x0709,	// (0x0000ee45) cell_ai5_widget_pane

0xc173,	// (0x0001a8af) aid_size_cell_widget_grid

0xc189,	// (0x0001a8c5) bg_ai5_widget_pane_ParamLimits

0xc189,	// (0x0001a8c5) bg_ai5_widget_pane

0xc1f3,	// (0x0001a92f) cell_ai5_widget_pane_g2

0xc203,	// (0x0001a93f) cell_ai5_widget_pane_g3

0xc222,	// (0x0001a95e) cell_ai5_widget_pane_g4

0xc22e,	// (0x0001a96a) cell_ai5_widget_pane_g5

0xc23a,	// (0x0001a976) cell_ai5_widget_pane_g6

0xc246,	// (0x0001a982) cell_ai5_widget_pane_g7

0xc28e,	// (0x0001a9ca) cell_ai5_widget_pane_t1_ParamLimits

0xc28e,	// (0x0001a9ca) cell_ai5_widget_pane_t1

0xc2ab,	// (0x0001a9e7) cell_ai5_widget_pane_t2_ParamLimits

0xc2ab,	// (0x0001a9e7) cell_ai5_widget_pane_t2

0xc2c3,	// (0x0001a9ff) cell_ai5_widget_pane_t3_ParamLimits

0xc2c3,	// (0x0001a9ff) cell_ai5_widget_pane_t3

0xc2db,	// (0x0001aa17) cell_ai5_widget_pane_t4_ParamLimits

0xc2db,	// (0x0001aa17) cell_ai5_widget_pane_t4

0xc2f5,	// (0x0001aa31) cell_ai5_widget_pane_t5_ParamLimits

0xc2f5,	// (0x0001aa31) cell_ai5_widget_pane_t5

0xc314,	// (0x0001aa50) cell_ai5_widget_pane_t6_ParamLimits

0xc314,	// (0x0001aa50) cell_ai5_widget_pane_t6

0xc326,	// (0x0001aa62) cell_ai5_widget_pane_t7_ParamLimits

0xc326,	// (0x0001aa62) cell_ai5_widget_pane_t7

0xc33f,	// (0x0001aa7b) cell_ai5_widget_pane_t8_ParamLimits

0xc33f,	// (0x0001aa7b) cell_ai5_widget_pane_t8

0x0009,

0xfe53,	// (0x0001e58f) cell_ai5_widget_pane_t_ParamLimits

0xfe53,	// (0x0001e58f) cell_ai5_widget_pane_t

0xc38b,	// (0x0001aac7) grid_ai5_widget_pane

0x3cfd,	// (0x00012439) highlight_cell_ai5_widget_pane_ParamLimits

0x3cfd,	// (0x00012439) highlight_cell_ai5_widget_pane

0x0774,	// (0x0000eeb0) ai5_sk_left_pane

0x077e,	// (0x0000eeba) ai5_sk_middle_pane

0x0788,	// (0x0000eec4) ai5_sk_right_pane

0xc39f,	// (0x0001aadb) bg_ai5_widget_pane_g1_ParamLimits

0xc39f,	// (0x0001aadb) bg_ai5_widget_pane_g1

0xc3ab,	// (0x0001aae7) bg_ai5_widget_pane_g2_ParamLimits

0xc3ab,	// (0x0001aae7) bg_ai5_widget_pane_g2

0xc3b7,	// (0x0001aaf3) bg_ai5_widget_pane_g3_ParamLimits

0xc3b7,	// (0x0001aaf3) bg_ai5_widget_pane_g3

0xc3c3,	// (0x0001aaff) bg_ai5_widget_pane_g4_ParamLimits

0xc3c3,	// (0x0001aaff) bg_ai5_widget_pane_g4

0xc3cf,	// (0x0001ab0b) bg_ai5_widget_pane_g5_ParamLimits

0xc3cf,	// (0x0001ab0b) bg_ai5_widget_pane_g5

0xc3db,	// (0x0001ab17) bg_ai5_widget_pane_g6_ParamLimits

0xc3db,	// (0x0001ab17) bg_ai5_widget_pane_g6

0xc3e7,	// (0x0001ab23) bg_ai5_widget_pane_g7_ParamLimits

0xc3e7,	// (0x0001ab23) bg_ai5_widget_pane_g7

0xc3f3,	// (0x0001ab2f) bg_ai5_widget_pane_g8_ParamLimits

0xc3f3,	// (0x0001ab2f) bg_ai5_widget_pane_g8

0xc3ff,	// (0x0001ab3b) bg_ai5_widget_pane_g9_ParamLimits

0xc3ff,	// (0x0001ab3b) bg_ai5_widget_pane_g9

0x0008,

0xfe68,	// (0x0001e5a4) bg_ai5_widget_pane_g_ParamLimits

0xfe68,	// (0x0001e5a4) bg_ai5_widget_pane_g

0xc432,	// (0x0001ab6e) cell_shortcut_ai5_widget_pane_ParamLimits

0xc432,	// (0x0001ab6e) cell_shortcut_ai5_widget_pane

0x4b75,	// (0x000132b1) bg_cell_shortcut_ai5_widget_pane

0xc443,	// (0x0001ab7f) cell_grid_ai5_widget_pane_g1

0xc44c,	// (0x0001ab88) highlight_cell_shortcut_ai5_widget_pane

0x53f9,	// (0x00013b35) ai5_sk_left_pane_g1

0xc454,	// (0x0001ab90) ai5_sk_left_pane_g2

0xc45c,	// (0x0001ab98) ai5_sk_left_pane_g3

0xc464,	// (0x0001aba0) ai5_sk_left_pane_g4

0x0003,

0xfe7b,	// (0x0001e5b7) ai5_sk_left_pane_g

0xc46c,	// (0x0001aba8) ai5_sk_left_pane_t1

0x5401,	// (0x00013b3d) ai5_sk_right_pane_g1

0xc47a,	// (0x0001abb6) ai5_sk_right_pane_g2

0xc482,	// (0x0001abbe) ai5_sk_right_pane_g3

0xc48a,	// (0x0001abc6) ai5_sk_right_pane_g4

0x0003,

0xfe84,	// (0x0001e5c0) ai5_sk_right_pane_g

0xc492,	// (0x0001abce) ai5_sk_right_pane_t1

0x5401,	// (0x00013b3d) ai5_sk_middle_pane_g1

0x53f9,	// (0x00013b35) ai5_sk_middle_pane_g2

0x5419,	// (0x00013b55) ai5_sk_middle_pane_g3

0xc482,	// (0x0001abbe) ai5_sk_middle_pane_g4

0xc45c,	// (0x0001ab98) ai5_sk_middle_pane_g5

0xc4a0,	// (0x0001abdc) ai5_sk_middle_pane_g6

0x0792,	// (0x0000eece) ai5_sk_middle_pane_g7

0x0006,

0xfe8d,	// (0x0001e5c9) ai5_sk_middle_pane_g

0xdc8a,	// (0x0001c3c6) aid_touch_area_size_lc0_ParamLimits

0xdc8a,	// (0x0001c3c6) aid_touch_area_size_lc0

0x2375,	// (0x00010ab1) cell_hwr_candidate_pane_t1_ParamLimits

0x4f23,	// (0x0001365f) aid_touch_navi_pane

0xdf10,	// (0x0001c64c) status_dt_navi_pane_ParamLimits

0xdf10,	// (0x0001c64c) status_dt_navi_pane

0xdf28,	// (0x0001c664) status_dt_sta_pane_ParamLimits

0xdf28,	// (0x0001c664) status_dt_sta_pane

0x079a,	// (0x0000eed6) dt_sta_controll_pane

0x07a7,	// (0x0000eee3) dt_sta_indi_pane

0x07b4,	// (0x0000eef0) dt_sta_title_pane

0x31c7,	// (0x00011903) bg_dt_sta_indi_pane_ParamLimits

0x31c7,	// (0x00011903) bg_dt_sta_indi_pane

0xc4a8,	// (0x0001abe4) dt_sta_battery_pane

0xc4b0,	// (0x0001abec) dt_sta_indi_pane_g1

0xc4b9,	// (0x0001abf5) dt_sta_indi_pane_g2

0xc4c2,	// (0x0001abfe) dt_sta_indi_pane_g3

0x0002,

0xfe9c,	// (0x0001e5d8) dt_sta_indi_pane_g

0xc4cb,	// (0x0001ac07) dt_sta_signal_pane

0x3cfd,	// (0x00012439) bg_dt_sta_title_pane_ParamLimits

0x3cfd,	// (0x00012439) bg_dt_sta_title_pane

0x6332,	// (0x00014a6e) dt_sta_title_pane_g1

0xc4d4,	// (0x0001ac10) dt_sta_title_pane_t1_ParamLimits

0xc4d4,	// (0x0001ac10) dt_sta_title_pane_t1

0x2e30,	// (0x0001156c) bg_dt_sta_control_pane

0xc4e9,	// (0x0001ac25) dt_sta_controll_pane_g1

0xc4f2,	// (0x0001ac2e) bg_dt_sta_title_pane_g1

0xc4fb,	// (0x0001ac37) bg_dt_sta_title_pane_g2

0xc504,	// (0x0001ac40) bg_dt_sta_title_pane_g3

0x0002,

0xfea3,	// (0x0001e5df) bg_dt_sta_title_pane_g

0x7ef2,	// (0x0001662e) bg_dt_sta_indi_pane_g1

0xc50d,	// (0x0001ac49) dt_sta_signal_pane_g1

0xc515,	// (0x0001ac51) dt_sta_signal_pane_g2

0x0001,

0xfeaa,	// (0x0001e5e6) dt_sta_signal_pane_g

0xc51d,	// (0x0001ac59) dt_sta_battery_pane_g1

0xc526,	// (0x0001ac62) dt_sta_battery_pane_t1

0x7ef2,	// (0x0001662e) bg_dt_sta_control_pane_g1

0x45e9,	// (0x00012d25) fep_china_uni_eep_pane

0x45f1,	// (0x00012d2d) fep_china_uni_entry_pane_ParamLimits

0x4601,	// (0x00012d3d) popup_fep_china_uni_window_g1_ParamLimits

0x4611,	// (0x00012d4d) popup_fep_china_uni_window_g2_ParamLimits

0x4611,	// (0x00012d4d) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0001de5a) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0001de5a) popup_fep_china_uni_window_g

0xc535,	// (0x0001ac71) fep_china_uni_eep_pane_g1

0xc53d,	// (0x0001ac79) fep_china_uni_eep_pane_t1

0xc125,	// (0x0001a861) aid_touch_area_size_smil_player

0x5073,	// (0x000137af) lc0_clock_pane

0x5252,	// (0x0001398e) status_pane_g5_ParamLimits

0x5252,	// (0x0001398e) status_pane_g5

0xb532,	// (0x00019c6e) popup_keymap_window

0x5212,	// (0x0001394e) status_icon_pane

0xc203,	// (0x0001a93f) cell_ai5_widget_pane_g3_ParamLimits

0xc222,	// (0x0001a95e) cell_ai5_widget_pane_g4_ParamLimits

0xc22e,	// (0x0001a96a) cell_ai5_widget_pane_g5_ParamLimits

0xc252,	// (0x0001a98e) cell_ai5_widget_pane_g8_ParamLimits

0xc252,	// (0x0001a98e) cell_ai5_widget_pane_g8

0xc266,	// (0x0001a9a2) cell_ai5_widget_pane_g9_ParamLimits

0xc266,	// (0x0001a9a2) cell_ai5_widget_pane_g9

0xc27a,	// (0x0001a9b6) cell_ai5_widget_pane_g10_ParamLimits

0xc27a,	// (0x0001a9b6) cell_ai5_widget_pane_g10

0xc54c,	// (0x0001ac88) status_icon_pane_g1

0x2e30,	// (0x0001156c) bg_popup_sub_pane_cp13

0xc554,	// (0x0001ac90) popup_keymap_window_t1

0xdc0c,	// (0x0001c348) control_pane_g6_ParamLimits

0xdc0c,	// (0x0001c348) control_pane_g6

0xdc19,	// (0x0001c355) control_pane_g7_ParamLimits

0xdc19,	// (0x0001c355) control_pane_g7

0xdc26,	// (0x0001c362) control_pane_g8_ParamLimits

0xdc26,	// (0x0001c362) control_pane_g8

0x079a,	// (0x0000eed6) dt_sta_controll_pane_ParamLimits

0x07a7,	// (0x0000eee3) dt_sta_indi_pane_ParamLimits

0x07b4,	// (0x0000eef0) dt_sta_title_pane_ParamLimits

0x36c9,	// (0x00011e05) aid_size_touch_scroll_bar_cale

0x0e11,	// (0x0000f54d) popup_discreet_window_ParamLimits

0x0e11,	// (0x0000f54d) popup_discreet_window

0xb1a3,	// (0x000198df) popup_sk_window

0x5b70,	// (0x000142ac) bg_popup_sub_pane_cp28_ParamLimits

0x5b70,	// (0x000142ac) bg_popup_sub_pane_cp28

0xc562,	// (0x0001ac9e) popup_discreet_window_g1_ParamLimits

0xc562,	// (0x0001ac9e) popup_discreet_window_g1

0xc582,	// (0x0001acbe) popup_discreet_window_t1_ParamLimits

0xc582,	// (0x0001acbe) popup_discreet_window_t1

0xc5a0,	// (0x0001acdc) popup_discreet_window_t2_ParamLimits

0xc5a0,	// (0x0001acdc) popup_discreet_window_t2

0x0002,

0xfeaf,	// (0x0001e5eb) popup_discreet_window_t_ParamLimits

0xfeaf,	// (0x0001e5eb) popup_discreet_window_t

0x2d5e,	// (0x0001149a) popup_sk_window_g1

0x2d68,	// (0x000114a4) popup_sk_window_g2

0x0001,

0xfeb6,	// (0x0001e5f2) popup_sk_window_g

0x2d72,	// (0x000114ae) popup_sk_window_t1

0x2d80,	// (0x000114bc) popup_sk_window_t1_copy1

0xc1f3,	// (0x0001a92f) cell_ai5_widget_pane_g2_ParamLimits

0xc351,	// (0x0001aa8d) cell_ai5_widget_pane_t9_ParamLimits

0xc351,	// (0x0001aa8d) cell_ai5_widget_pane_t9

0x2e30,	// (0x0001156c) main_fep_fshwr2_pane

0xc062,	// (0x0001a79e) aid_fshwr2_btn_pane

0xc071,	// (0x0001a7ad) aid_fshwr2_syb_pane

0xc083,	// (0x0001a7bf) aid_fshwr2_txt_pane

0xc092,	// (0x0001a7ce) fshwr2_func_candi_pane

0xc0a3,	// (0x0001a7df) fshwr2_hwr_syb_pane

0xc0be,	// (0x0001a7fa) fshwr2_icf_pane

0x2e30,	// (0x0001156c) fshwr2_icf_bg_pane

0x083a,	// (0x0000ef76) fshwr2_icf_pane_t1_ParamLimits

0x083a,	// (0x0000ef76) fshwr2_icf_pane_t1

0x7ef2,	// (0x0001662e) fshwr2_func_candi_pane_g1

0xc5f2,	// (0x0001ad2e) fshwr2_func_candi_row_pane_ParamLimits

0xc5f2,	// (0x0001ad2e) fshwr2_func_candi_row_pane

0x0854,	// (0x0000ef90) cell_fshwr2_syb_pane_ParamLimits

0x0854,	// (0x0000ef90) cell_fshwr2_syb_pane

0x816d,	// (0x000168a9) fshwr2_hwr_syb_pane_g1_ParamLimits

0x816d,	// (0x000168a9) fshwr2_hwr_syb_pane_g1

0x2e30,	// (0x0001156c) bg_popup_call_pane_cp01

0xc603,	// (0x0001ad3f) fshwr2_func_candi_cell_pane_ParamLimits

0xc603,	// (0x0001ad3f) fshwr2_func_candi_cell_pane

0xc634,	// (0x0001ad70) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xc634,	// (0x0001ad70) fshwr2_func_candi_cell_bg_pane

0xc64e,	// (0x0001ad8a) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xc64e,	// (0x0001ad8a) fshwr2_func_candi_cell_pane_g1

0xc66e,	// (0x0001adaa) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xc66e,	// (0x0001adaa) fshwr2_func_candi_cell_pane_t1

0x2e30,	// (0x0001156c) bg_button_pane_cp08

0x4b75,	// (0x000132b1) cell_fshwr2_syb_bg_pane

0x086e,	// (0x0000efaa) cell_fshwr2_syb_bg_pane_g1

0xc681,	// (0x0001adbd) cell_fshwr2_syb_bg_pane_t1

0x3cfd,	// (0x00012439) main_tmo_pane

0xe2cb,	// (0x0001ca07) uni_indicator_pane_g1_ParamLimits

0xe2e0,	// (0x0001ca1c) uni_indicator_pane_g2_ParamLimits

0x669a,	// (0x00014dd6) uni_indicator_pane_g3_ParamLimits

0x66b0,	// (0x00014dec) uni_indicator_pane_g4_ParamLimits

0x66b0,	// (0x00014dec) uni_indicator_pane_g4

0x66c4,	// (0x00014e00) uni_indicator_pane_g5_ParamLimits

0x66c4,	// (0x00014e00) uni_indicator_pane_g5

0x66d8,	// (0x00014e14) uni_indicator_pane_g6_ParamLimits

0x66d8,	// (0x00014e14) uni_indicator_pane_g6

0xf91d,	// (0x0001e059) uni_indicator_pane_g_ParamLimits

0xee83,	// (0x0001d5bf) popup_tmo_note_window_ParamLimits

0xee83,	// (0x0001d5bf) popup_tmo_note_window

0x25e0,	// (0x00010d1c) fshwr2_bg_pane

0xc65f,	// (0x0001ad9b) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xc65f,	// (0x0001ad9b) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfebb,	// (0x0001e5f7) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfebb,	// (0x0001e5f7) fshwr2_func_candi_cell_pane_g

0x7ef2,	// (0x0001662e) bg_popup_window_pane_cp01

0xc690,	// (0x0001adcc) bg_popup_window_pane_g1_cp01

0xc699,	// (0x0001add5) bg_popup_window_pane_cp22_ParamLimits

0xc699,	// (0x0001add5) bg_popup_window_pane_cp22

0xc6a7,	// (0x0001ade3) listscroll_tmo_link_pane_ParamLimits

0xc6a7,	// (0x0001ade3) listscroll_tmo_link_pane

0xc6e7,	// (0x0001ae23) popup_tmo_note_window_g1_ParamLimits

0xc6e7,	// (0x0001ae23) popup_tmo_note_window_g1

0xc6f4,	// (0x0001ae30) tmo_note_info_pane_ParamLimits

0xc6f4,	// (0x0001ae30) tmo_note_info_pane

0x0876,	// (0x0000efb2) list_tmo_note_info_pane_g1_ParamLimits

0x0876,	// (0x0000efb2) list_tmo_note_info_pane_g1

0xc70e,	// (0x0001ae4a) list_tmo_note_info_pane_g2_ParamLimits

0xc70e,	// (0x0001ae4a) list_tmo_note_info_pane_g2

0x0001,

0xfec0,	// (0x0001e5fc) list_tmo_note_info_pane_g_ParamLimits

0xfec0,	// (0x0001e5fc) list_tmo_note_info_pane_g

0xc72a,	// (0x0001ae66) list_tmo_note_info_text_pane_ParamLimits

0xc72a,	// (0x0001ae66) list_tmo_note_info_text_pane

0xc76c,	// (0x0001aea8) list_tmo_link_pane

0xc779,	// (0x0001aeb5) scroll_pane_cp20

0xc786,	// (0x0001aec2) list_single_tmo_link_pane_ParamLimits

0xc786,	// (0x0001aec2) list_single_tmo_link_pane

0xc796,	// (0x0001aed2) list_single_tmo_link_pane_t1

0xc7a4,	// (0x0001aee0) list_tmo_note_info_text_pane_t1_ParamLimits

0xc7a4,	// (0x0001aee0) list_tmo_note_info_text_pane_t1

0xd843,	// (0x0001bf7f) aid_size_touch_scroll_bar_cp01_ParamLimits

0xd843,	// (0x0001bf7f) aid_size_touch_scroll_bar_cp01

0xd75e,	// (0x0001be9a) aid_size_touch_slider_marker

0xb193,	// (0x000198cf) popup_settings_window_ParamLimits

0xb193,	// (0x000198cf) popup_settings_window

0x4ed3,	// (0x0001360f) popup_candi_list_indi_window

0x4f23,	// (0x0001365f) aid_touch_navi_pane_ParamLimits

0x253b,	// (0x00010c77) rs_clock_indi_pane

0x2544,	// (0x00010c80) sctrl_sk_bottom_pane_ParamLimits

0x2555,	// (0x00010c91) sctrl_sk_top_pane_ParamLimits

0x2658,	// (0x00010d94) popup_fep_tooltip_window

0xc173,	// (0x0001a8af) aid_size_cell_widget_grid_ParamLimits

0xc1e7,	// (0x0001a923) cell_ai5_widget_pane_g1_ParamLimits

0xc1e7,	// (0x0001a923) cell_ai5_widget_pane_g1

0xc23a,	// (0x0001a976) cell_ai5_widget_pane_g6_ParamLimits

0xc246,	// (0x0001a982) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3e,	// (0x0001e57a) cell_ai5_widget_pane_g_ParamLimits

0xfe3e,	// (0x0001e57a) cell_ai5_widget_pane_g

0xc375,	// (0x0001aab1) cell_ai5_widget_pane_t10_ParamLimits

0xc375,	// (0x0001aab1) cell_ai5_widget_pane_t10

0xc38b,	// (0x0001aac7) grid_ai5_widget_pane_ParamLimits

0xc40b,	// (0x0001ab47) cell_contacts_ai5_widget_pane_ParamLimits

0xc40b,	// (0x0001ab47) cell_contacts_ai5_widget_pane

0xc5b5,	// (0x0001acf1) popup_discreet_window_t3_ParamLimits

0xc5b5,	// (0x0001acf1) popup_discreet_window_t3

0x2df8,	// (0x00011534) popup_fshwr2_char_preview_window_ParamLimits

0x2df8,	// (0x00011534) popup_fshwr2_char_preview_window

0x088d,	// (0x0000efc9) tmo_note_info_pane_t1

0x08a2,	// (0x0000efde) tmo_note_info_pane_t2

0x08bb,	// (0x0000eff7) tmo_note_info_pane_t3

0xc748,	// (0x0001ae84) tmo_note_info_pane_t4

0xc75a,	// (0x0001ae96) tmo_note_info_pane_t5

0x0004,

0xfec5,	// (0x0001e601) tmo_note_info_pane_t

0xc76c,	// (0x0001aea8) list_tmo_link_pane_ParamLimits

0xc779,	// (0x0001aeb5) scroll_pane_cp20_ParamLimits

0x2e30,	// (0x0001156c) bg_popup_fep_char_preview_window_cp01

0xc7bd,	// (0x0001aef9) popup_fshwr2_char_preview_window_t1

0xc7cb,	// (0x0001af07) popup_candi_list_indi_window_g1

0xc7d4,	// (0x0001af10) bg_cell_contacts_ai5_widget_pane

0xc7e0,	// (0x0001af1c) cell_contacts_ai5_widget_pane_g1

0xc7f3,	// (0x0001af2f) cell_contacts_ai5_widget_pane_g2

0xc7ff,	// (0x0001af3b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed0,	// (0x0001e60c) cell_contacts_ai5_widget_pane_g

0xc811,	// (0x0001af4d) cell_contacts_ai5_widget_pane_t1

0x3cfd,	// (0x00012439) highlight_cell_shortcut_ai5_widget_pane_cp01

0xc88b,	// (0x0001afc7) settings_container_pane

0x4b75,	// (0x000132b1) listscroll_set_pane_copy1

0x7348,	// (0x00015a84) scroll_pane_cp121_copy1

0xc897,	// (0x0001afd3) set_content_pane_copy1

0xc89f,	// (0x0001afdb) aid_height_set_list_copy1_ParamLimits

0xc89f,	// (0x0001afdb) aid_height_set_list_copy1

0x68f3,	// (0x0001502f) aid_size_parent_copy1_ParamLimits

0x68f3,	// (0x0001502f) aid_size_parent_copy1

0xc8ab,	// (0x0001afe7) button_value_adjust_pane_cp6_copy1_ParamLimits

0xc8ab,	// (0x0001afe7) button_value_adjust_pane_cp6_copy1

0x4eb9,	// (0x000135f5) list_highlight_pane_cp2_copy1_ParamLimits

0x4eb9,	// (0x000135f5) list_highlight_pane_cp2_copy1

0xc8bf,	// (0x0001affb) list_set_pane_copy1_ParamLimits

0xc8bf,	// (0x0001affb) list_set_pane_copy1

0xc826,	// (0x0001af62) main_pane_set_t1_copy1_ParamLimits

0xc826,	// (0x0001af62) main_pane_set_t1_copy1

0xc860,	// (0x0001af9c) main_pane_set_t2_copy1_ParamLimits

0xc860,	// (0x0001af9c) main_pane_set_t2_copy1

0xc96c,	// (0x0001b0a8) main_pane_set_t3_copy1

0xc97a,	// (0x0001b0b6) main_pane_set_t4_copy1

0xc87f,	// (0x0001afbb) set_content_pane_g1_copy1_ParamLimits

0xc87f,	// (0x0001afbb) set_content_pane_g1_copy1

0xc988,	// (0x0001b0c4) setting_code_pane_copy1

0xc990,	// (0x0001b0cc) setting_slider_graphic_pane_copy1

0xc990,	// (0x0001b0cc) setting_slider_pane_copy1

0xc990,	// (0x0001b0cc) setting_text_pane_copy1

0xc990,	// (0x0001b0cc) setting_volume_pane_copy1

0xc988,	// (0x0001b0c4) settings_code_pane_cp2_copy1

0xc998,	// (0x0001b0d4) settings_code_pane_cp_copy1_ParamLimits

0xc998,	// (0x0001b0d4) settings_code_pane_cp_copy1

0xc9ac,	// (0x0001b0e8) volume_set_pane_copy1

0xc9b4,	// (0x0001b0f0) volume_set_pane_g10_copy1

0xc9bc,	// (0x0001b0f8) volume_set_pane_g1_copy1

0xc9c4,	// (0x0001b100) volume_set_pane_g2_copy1

0xc9cc,	// (0x0001b108) volume_set_pane_g3_copy1

0xc9d4,	// (0x0001b110) volume_set_pane_g4_copy1

0xc9dc,	// (0x0001b118) volume_set_pane_g5_copy1

0xc9e4,	// (0x0001b120) volume_set_pane_g6_copy1

0xc9ec,	// (0x0001b128) volume_set_pane_g7_copy1

0xc9f4,	// (0x0001b130) volume_set_pane_g8_copy1

0xc9fc,	// (0x0001b138) volume_set_pane_g9_copy1

0x2f24,	// (0x00011660) bg_set_opt_pane_cp_copy1_ParamLimits

0x2f24,	// (0x00011660) bg_set_opt_pane_cp_copy1

0xca04,	// (0x0001b140) setting_slider_pane_t1_copy1_ParamLimits

0xca04,	// (0x0001b140) setting_slider_pane_t1_copy1

0xca22,	// (0x0001b15e) setting_slider_pane_t2_copy1_ParamLimits

0xca22,	// (0x0001b15e) setting_slider_pane_t2_copy1

0xca3c,	// (0x0001b178) setting_slider_pane_t3_copy1_ParamLimits

0xca3c,	// (0x0001b178) setting_slider_pane_t3_copy1

0xca54,	// (0x0001b190) slider_set_pane_copy1_ParamLimits

0xca54,	// (0x0001b190) slider_set_pane_copy1

0x3e39,	// (0x00012575) set_opt_bg_pane_g1_copy2

0x3e41,	// (0x0001257d) set_opt_bg_pane_g2_copy2

0xca6a,	// (0x0001b1a6) set_opt_bg_pane_g3_copy2

0x3e51,	// (0x0001258d) set_opt_bg_pane_g4_copy2

0x3e59,	// (0x00012595) set_opt_bg_pane_g5_copy2

0x3e61,	// (0x0001259d) set_opt_bg_pane_g6_copy2

0xca74,	// (0x0001b1b0) set_opt_bg_pane_g7_copy2

0xca7c,	// (0x0001b1b8) set_opt_bg_pane_g8_copy2

0xca86,	// (0x0001b1c2) set_opt_bg_pane_g9_copy2

0xca90,	// (0x0001b1cc) aid_size_touch_slider_mark_copy1_ParamLimits

0xca90,	// (0x0001b1cc) aid_size_touch_slider_mark_copy1

0xcaa4,	// (0x0001b1e0) slider_set_pane_g1_copy1

0xcaad,	// (0x0001b1e9) slider_set_pane_g2_copy1

0x6e95,	// (0x000155d1) slider_set_pane_g3_copy1_ParamLimits

0x6e95,	// (0x000155d1) slider_set_pane_g3_copy1

0x6ea9,	// (0x000155e5) slider_set_pane_g4_copy1_ParamLimits

0x6ea9,	// (0x000155e5) slider_set_pane_g4_copy1

0x6ec1,	// (0x000155fd) slider_set_pane_g5_copy1_ParamLimits

0x6ec1,	// (0x000155fd) slider_set_pane_g5_copy1

0x6e95,	// (0x000155d1) slider_set_pane_g6_copy1_ParamLimits

0x6e95,	// (0x000155d1) slider_set_pane_g6_copy1

0xcab5,	// (0x0001b1f1) slider_set_pane_g7_copy1_ParamLimits

0xcab5,	// (0x0001b1f1) slider_set_pane_g7_copy1

0x2e44,	// (0x00011580) bg_set_opt_pane_cp2_copy1

0xcacb,	// (0x0001b207) setting_slider_graphic_pane_g1_copy1

0xcad4,	// (0x0001b210) setting_slider_graphic_pane_t1_copy1

0xcae4,	// (0x0001b220) setting_slider_graphic_pane_t2_copy1

0xcaf4,	// (0x0001b230) slider_set_pane_cp_copy1

0xcb04,	// (0x0001b240) input_focus_pane_cp1_copy1

0xcb0d,	// (0x0001b249) list_set_text_pane_copy1

0xcb15,	// (0x0001b251) setting_text_pane_g1_copy1

0xcb1e,	// (0x0001b25a) set_text_pane_t1_copy1

0xcb04,	// (0x0001b240) input_focus_pane_cp2_copy1

0xcb15,	// (0x0001b251) setting_code_pane_g1_copy1

0xcb3b,	// (0x0001b277) setting_code_pane_t1_copy1

0x7188,	// (0x000158c4) list_set_graphic_pane_copy1

0x2e44,	// (0x00011580) bg_set_opt_pane_cp4_copy1

0x4877,	// (0x00012fb3) list_set_graphic_pane_g1_copy1_ParamLimits

0x4877,	// (0x00012fb3) list_set_graphic_pane_g1_copy1

0xcb49,	// (0x0001b285) list_set_graphic_pane_g2_copy1

0x488f,	// (0x00012fcb) list_set_graphic_pane_t1_copy1_ParamLimits

0x488f,	// (0x00012fcb) list_set_graphic_pane_t1_copy1

0x7ef2,	// (0x0001662e) rs_clock_indi_pane_g1

0xcb51,	// (0x0001b28d) rs_clock_indi_pane_t1

0xcb5f,	// (0x0001b29b) rs_indi_pane

0xcb67,	// (0x0001b2a3) rs_indi_pane_g1

0xcb70,	// (0x0001b2ac) rs_indi_pane_g2

0xcb79,	// (0x0001b2b5) rs_indi_pane_g3

0x0002,

0xfed7,	// (0x0001e613) rs_indi_pane_g

0x4b75,	// (0x000132b1) bg_popup_preview_window_pane_cp03

0xcb82,	// (0x0001b2be) popup_fep_tooltip_window_t1

0x8d53,	// (0x0001748f) popup_note2_window_g2_ParamLimits

0x8d53,	// (0x0001748f) popup_note2_window_g2

0x0001,

0xfc77,	// (0x0001e3b3) popup_note2_window_g_ParamLimits

0xfc77,	// (0x0001e3b3) popup_note2_window_g

0x9335,	// (0x00017a71) bg_popup_sub_pane_cp11_ParamLimits

0x9342,	// (0x00017a7e) cell_ai3_links_pane_g1_ParamLimits

0x9359,	// (0x00017a95) cell_ai3_links_pane_t1

0xcb1e,	// (0x0001b25a) set_text_pane_t1_copy1_ParamLimits

0xdb41,	// (0x0001c27d) cell_graphic_popup_pane_cp2_ParamLimits

0xdb41,	// (0x0001c27d) cell_graphic_popup_pane_cp2

0x08d0,	// (0x0000f00c) cell_graphic_popup_pane_g1_cp2

0x34dc,	// (0x00011c18) cell_graphic_popup_pane_g2_cp2

0xcb90,	// (0x0001b2cc) cell_graphic_popup_pane_g3_cp2

0xcb98,	// (0x0001b2d4) cell_graphic_popup_pane_t2_cp2

0x34ed,	// (0x00011c29) grid_highlight_pane_cp3_cp2

0x4223,	// (0x0001295f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x3cfd,	// (0x00012439) main_tmo_pane_ParamLimits

0xee77,	// (0x0001d5b3) popup_tmo_big_image_note_window

0xc1d7,	// (0x0001a913) cell_ai5_widget_list_pane

0xc1df,	// (0x0001a91b) cell_ai5_widget_lrg_icon_pane

0x088d,	// (0x0000efc9) tmo_note_info_pane_t1_ParamLimits

0x08a2,	// (0x0000efde) tmo_note_info_pane_t2_ParamLimits

0x08bb,	// (0x0000eff7) tmo_note_info_pane_t3_ParamLimits

0xc748,	// (0x0001ae84) tmo_note_info_pane_t4_ParamLimits

0xc75a,	// (0x0001ae96) tmo_note_info_pane_t5_ParamLimits

0xfec5,	// (0x0001e601) tmo_note_info_pane_t_ParamLimits

0xc88b,	// (0x0001afc7) settings_container_pane_ParamLimits

0xcafc,	// (0x0001b238) indicator_popup_pane_cp5

0xcafc,	// (0x0001b238) indicator_popup_pane_cp6

0x7188,	// (0x000158c4) list_set_graphic_pane_copy1_ParamLimits

0x2e30,	// (0x0001156c) bg_popup_window_pane_cp23

0xcba6,	// (0x0001b2e2) popup_tmo_big_image_note_window_g1

0xcbb1,	// (0x0001b2ed) popup_tmo_big_image_note_window_t1

0xcbc1,	// (0x0001b2fd) popup_tmo_big_image_note_window_t2

0xcbd1,	// (0x0001b30d) popup_tmo_big_image_note_window_t3

0x0002,

0xfede,	// (0x0001e61a) popup_tmo_big_image_note_window_t

0xcbe1,	// (0x0001b31d) cell_ai5_widget_lrg_icon_pane_g1

0xcbe9,	// (0x0001b325) cell_ai5_widget_lrg_icon_pane_t1

0xcbf7,	// (0x0001b333) cell_ai5_widget_list_row_pane_ParamLimits

0xcbf7,	// (0x0001b333) cell_ai5_widget_list_row_pane

0xcc10,	// (0x0001b34c) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xcc10,	// (0x0001b34c) cell_ai5_widget_list_row_pane_g1

0xcc1d,	// (0x0001b359) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xcc1d,	// (0x0001b359) cell_ai5_widget_list_row_pane_t1

0xcc35,	// (0x0001b371) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xcc35,	// (0x0001b371) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee5,	// (0x0001e621) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee5,	// (0x0001e621) cell_ai5_widget_list_row_pane_t

0x0d38,	// (0x0000f474) main_fep_vtchi_ss_pane

0xcc6c,	// (0x0001b3a8) popup_fep_char_pre_window

0xcc74,	// (0x0001b3b0) popup_fep_ituss_window

0xcc95,	// (0x0001b3d1) popup_fep_vkbss_window

0xccb4,	// (0x0001b3f0) grid_vkbss_keypad_pane_ParamLimits

0xccb4,	// (0x0001b3f0) grid_vkbss_keypad_pane

0xccc4,	// (0x0001b400) ituss_keypad_pane

0xcce0,	// (0x0001b41c) aid_vkbss_key_offset_ParamLimits

0xcce0,	// (0x0001b41c) aid_vkbss_key_offset

0xccec,	// (0x0001b428) cell_vkbss_key_pane_ParamLimits

0xccec,	// (0x0001b428) cell_vkbss_key_pane

0x522e,	// (0x0001396a) bg_cell_vkbss_key_g1_ParamLimits

0x522e,	// (0x0001396a) bg_cell_vkbss_key_g1

0xcd02,	// (0x0001b43e) cell_vkbss_key_3p_pane_ParamLimits

0xcd02,	// (0x0001b43e) cell_vkbss_key_3p_pane

0xcd1c,	// (0x0001b458) cell_vkbss_key_g1_ParamLimits

0xcd1c,	// (0x0001b458) cell_vkbss_key_g1

0xcd36,	// (0x0001b472) cell_vkbss_key_t1_ParamLimits

0xcd36,	// (0x0001b472) cell_vkbss_key_t1

0xcd61,	// (0x0001b49d) cell_ituss_key_pane_ParamLimits

0xcd61,	// (0x0001b49d) cell_ituss_key_pane

0xcd72,	// (0x0001b4ae) bg_cell_ituss_key_g1_ParamLimits

0xcd72,	// (0x0001b4ae) bg_cell_ituss_key_g1

0xcd7e,	// (0x0001b4ba) cell_ituss_key_pane_g1_ParamLimits

0xcd7e,	// (0x0001b4ba) cell_ituss_key_pane_g1

0xcd92,	// (0x0001b4ce) cell_ituss_key_pane_g2_ParamLimits

0xcd92,	// (0x0001b4ce) cell_ituss_key_pane_g2

0x0001,

0xfeec,	// (0x0001e628) cell_ituss_key_pane_g_ParamLimits

0xfeec,	// (0x0001e628) cell_ituss_key_pane_g

0xcdbd,	// (0x0001b4f9) cell_ituss_key_t1_ParamLimits

0xcdbd,	// (0x0001b4f9) cell_ituss_key_t1

0xcdeb,	// (0x0001b527) cell_ituss_key_t2_ParamLimits

0xcdeb,	// (0x0001b527) cell_ituss_key_t2

0xce1c,	// (0x0001b558) cell_ituss_key_t3_ParamLimits

0xce1c,	// (0x0001b558) cell_ituss_key_t3

0xce4d,	// (0x0001b589) cell_ituss_key_t4_ParamLimits

0xce4d,	// (0x0001b589) cell_ituss_key_t4

0x0003,

0xfef1,	// (0x0001e62d) cell_ituss_key_t_ParamLimits

0xfef1,	// (0x0001e62d) cell_ituss_key_t

0xce7e,	// (0x0001b5ba) cell_vkbss_key_3p_pane_g1

0xce86,	// (0x0001b5c2) cell_vkbss_key_3p_pane_g2

0xce8e,	// (0x0001b5ca) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x0001e636) cell_vkbss_key_3p_pane_g

0x2e30,	// (0x0001156c) bg_popup_fep_char_preview_window_cp02

0xce96,	// (0x0001b5d2) popup_fep_char_pre_window_t1

0x076a,	// (0x0000eea6) main_ai5_sk_pane

0xc7d4,	// (0x0001af10) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xc7e0,	// (0x0001af1c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc7f3,	// (0x0001af2f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xc7ff,	// (0x0001af3b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed0,	// (0x0001e60c) cell_contacts_ai5_widget_pane_g_ParamLimits

0xc811,	// (0x0001af4d) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x3cfd,	// (0x00012439) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x08d8,	// (0x0000f014) main_ai5_sk_pane_g1

0x59ae,	// (0x000140ea) popup_query_code_window_g1

0xcc8a,	// (0x0001b3c6) popup_fep_vkb_icf_pane

0xcc9e,	// (0x0001b3da) popup_fep_vtchi_icf_pane

0x3cfd,	// (0x00012439) bg_icf_pane

0xcea5,	// (0x0001b5e1) list_vkb_icf_pane

0x3cfd,	// (0x00012439) bg_icf_pane_cp01

0xceb1,	// (0x0001b5ed) vtchi_icf_list_pane

0xcec2,	// (0x0001b5fe) list_vkb_icf_pane_t1_ParamLimits

0xcec2,	// (0x0001b5fe) list_vkb_icf_pane_t1

0xcedc,	// (0x0001b618) vtchi_icf_list_pane_t1_ParamLimits

0xcedc,	// (0x0001b618) vtchi_icf_list_pane_t1

0xcc74,	// (0x0001b3b0) popup_fep_ituss_window_ParamLimits

0xcc9e,	// (0x0001b3da) popup_fep_vtchi_icf_pane_ParamLimits

0xccc4,	// (0x0001b400) ituss_keypad_pane_ParamLimits

0xccd4,	// (0x0001b410) ituss_sks_pane

0x3cfd,	// (0x00012439) bg_icf_pane_ParamLimits

0xcc5d,	// (0x0001b399) icf_edit_indi_pane_ParamLimits

0xcc5d,	// (0x0001b399) icf_edit_indi_pane

0xcea5,	// (0x0001b5e1) list_vkb_icf_pane_ParamLimits

0x3cfd,	// (0x00012439) bg_icf_pane_cp01_ParamLimits

0xcc5d,	// (0x0001b399) icf_edit_indi_pane_cp01_ParamLimits

0xcc5d,	// (0x0001b399) icf_edit_indi_pane_cp01

0xceb9,	// (0x0001b5f5) vtchi_query_pane

0x816d,	// (0x000168a9) icf_edit_indi_pane_g1_ParamLimits

0x816d,	// (0x000168a9) icf_edit_indi_pane_g1

0xcf6d,	// (0x0001b6a9) icf_edit_indi_pane_g2_ParamLimits

0xcf6d,	// (0x0001b6a9) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x0001e64e) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x0001e64e) icf_edit_indi_pane_g

0xcf7c,	// (0x0001b6b8) icf_edit_indi_pane_t1

0xcf03,	// (0x0001b63f) bg_input_focus_pane_cp042

0x36c0,	// (0x00011dfc) vtchi_button_pane

0xcf0c,	// (0x0001b648) vtchi_query_pane_t1

0xcf1a,	// (0x0001b656) vtchi_query_pane_t2

0xcf28,	// (0x0001b664) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x0001e63d) vtchi_query_pane_t

0x2e30,	// (0x0001156c) bg_button_pane_cp13

0xcf36,	// (0x0001b672) vtchi_button_pane_g1

0xcf3e,	// (0x0001b67a) ituss_sks_pane_g1

0xcf49,	// (0x0001b685) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x0001e644) ituss_sks_pane_g

0xcf51,	// (0x0001b68d) ituss_sks_pane_t1

0xcf5f,	// (0x0001b69b) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0001e649) ituss_sks_pane_t

0x78d3,	// (0x0001600f) indicator_nsta_pane_cp_g1

0x78dc,	// (0x00016018) indicator_nsta_pane_cp_g2

0x78e4,	// (0x00016020) indicator_nsta_pane_cp_g3

0x78ec,	// (0x00016028) indicator_nsta_pane_cp_g4

0x78f4,	// (0x00016030) indicator_nsta_pane_cp_g5

0x78fc,	// (0x00016038) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x0001e1f1) indicator_nsta_pane_cp_g

0x0517,	// (0x0000ec53) cell_graphic2_pane_t2_ParamLimits

0x0517,	// (0x0000ec53) cell_graphic2_pane_t2

0x0001,

0xfdc7,	// (0x0001e503) cell_graphic2_pane_t_ParamLimits

0xfdc7,	// (0x0001e503) cell_graphic2_pane_t

0x054d,	// (0x0000ec89) cell_graphic2_control_pane_t1

0xd9e0,	// (0x0001c11c) signal_pane_g3_ParamLimits

0xd9e0,	// (0x0001c11c) signal_pane_g3

0xd9f4,	// (0x0001c130) signal_pane_g4_ParamLimits

0xd9f4,	// (0x0001c130) signal_pane_g4

0xcc47,	// (0x0001b383) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xcc47,	// (0x0001b383) cell_ai5_widget_list_row_pane_t3

0xcdab,	// (0x0001b4e7) cell_ituss_key_pane_t1_ParamLimits

0xcdab,	// (0x0001b4e7) cell_ituss_key_pane_t1

0x559c,	// (0x00013cd8) form_field_data_wide_pane_vc_t2_ParamLimits

0x559c,	// (0x00013cd8) form_field_data_wide_pane_vc_t2

0x55b0,	// (0x00013cec) form_field_data_wide_pane_vc_t3_ParamLimits

0x55b0,	// (0x00013cec) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x0001df41) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x0001df41) form_field_data_wide_pane_vc_t

0x758e,	// (0x00015cca) form_field_slider_wide_pane_vc_t3_ParamLimits

0x758e,	// (0x00015cca) form_field_slider_wide_pane_vc_t3

0x7668,	// (0x00015da4) form_field_popup_wide_pane_vc_t2_ParamLimits

0x7668,	// (0x00015da4) form_field_popup_wide_pane_vc_t2

0x767f,	// (0x00015dbb) form_field_popup_wide_pane_vc_t3_ParamLimits

0x767f,	// (0x00015dbb) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x0001e1e0) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x0001e1e0) form_field_popup_wide_pane_vc_t

0xc062,	// (0x0001a79e) aid_fshwr2_btn_pane_ParamLimits

0xc071,	// (0x0001a7ad) aid_fshwr2_syb_pane_ParamLimits

0xc083,	// (0x0001a7bf) aid_fshwr2_txt_pane_ParamLimits

0x25e0,	// (0x00010d1c) fshwr2_bg_pane_ParamLimits

0xc092,	// (0x0001a7ce) fshwr2_func_candi_pane_ParamLimits

0xc0a3,	// (0x0001a7df) fshwr2_hwr_syb_pane_ParamLimits

0xc0be,	// (0x0001a7fa) fshwr2_icf_pane_ParamLimits
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

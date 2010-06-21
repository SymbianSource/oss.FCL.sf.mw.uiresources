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

// This customisation implements the interface defined in AknLayoutScalable_Apps.cdl

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002de9a };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineRCV(TInt aRow, TInt aCol, TInt aVariety) { return AknLayoutScalableDecode::WindowLineRCV(&KImplData, aRow, aCol, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLVRC(TInt aLineIndex, TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextTableLVRC(&KImplData, aLineIndex, aVariety, aRow, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize] =
	{
0x1a11,	// (0x0002f8ab) Screen

0x1a1d,	// (0x0002f8b7) application_window

0x1a4d,	// (0x0002f8e7) area_bottom_pane_ParamLimits

0x1a4d,	// (0x0002f8e7) area_bottom_pane

0x0185,	// (0x0002e01f) area_top_pane_ParamLimits

0x0185,	// (0x0002e01f) area_top_pane

0x1aaa,	// (0x0002f944) call_video_uplink_pane_ParamLimits

0x1aaa,	// (0x0002f944) call_video_uplink_pane

0x0213,	// (0x0002e0ad) main_pane_ParamLimits

0x0213,	// (0x0002e0ad) main_pane

0xc502,	// (0x0003a39c) context_pane

0x4afa,	// (0x00032994) navi_pane

0x4b2c,	// (0x000329c6) popup_cale_events_window_ParamLimits

0x4b2c,	// (0x000329c6) popup_cale_events_window

0xc515,	// (0x0003a3af) popup_mup_playback_window

0x4b44,	// (0x000329de) signal_pane

0xa41b,	// (0x000382b5) main_browser_pane

0xa5e9,	// (0x00038483) main_burst_pane

0x0610,	// (0x0002e4aa) main_calc_pane

0xc4e8,	// (0x0003a382) main_cale_day_pane

0x0624,	// (0x0002e4be) main_cale_month_pane

0xc4e8,	// (0x0003a382) main_cale_week_pane

0xa5e9,	// (0x00038483) main_call_pane

0xa0fb,	// (0x00037f95) main_call_poc_pane

0xa5e9,	// (0x00038483) main_camera_pane

0xa5e9,	// (0x00038483) main_chi_dic_pane

0xadf2,	// (0x00038c8c) main_clock_pane

0xa0fb,	// (0x00037f95) main_fmradio_pane

0xa5e9,	// (0x00038483) main_graph_messa_pane

0xa0fb,	// (0x00037f95) main_help_pane

0xa41b,	// (0x000382b5) main_im_pane

0xa356,	// (0x000381f0) main_image_pane_ParamLimits

0xa356,	// (0x000381f0) main_image_pane

0xa0fb,	// (0x00037f95) main_location2_pane

0xa5e9,	// (0x00038483) main_location_pane

0xa356,	// (0x000381f0) main_messa_pane

0xa0fb,	// (0x00037f95) main_mp2_pane

0xa5e9,	// (0x00038483) main_mp_pane

0xa0fb,	// (0x00037f95) main_msg_pane

0xa0fb,	// (0x00037f95) main_mup_eq_pane

0xa0fb,	// (0x00037f95) main_mup_pane

0xa41b,	// (0x000382b5) main_notes_pane

0xa0fb,	// (0x00037f95) main_pec_pane

0xa0fb,	// (0x00037f95) main_phob_pane

0xa0fb,	// (0x00037f95) main_pinb_pane

0xa0fb,	// (0x00037f95) main_postcard_pane

0xa0fb,	// (0x00037f95) main_qdial_pane

0xa5e9,	// (0x00038483) main_skin_pane

0xa0fb,	// (0x00037f95) main_smil2_pane

0xa5e9,	// (0x00038483) main_smil_pane

0xa5e9,	// (0x00038483) main_video_pane

0xa5e9,	// (0x00038483) main_video_tele_pane

0xa356,	// (0x000381f0) main_viewer_pane_ParamLimits

0xa356,	// (0x000381f0) main_viewer_pane

0xa5e9,	// (0x00038483) main_vorec_pane

0x0676,	// (0x0002e510) popup_blid_sat_info_window_ParamLimits

0x0676,	// (0x0002e510) popup_blid_sat_info_window

0x06ce,	// (0x0002e568) popup_dyc_status_message_window_ParamLimits

0x06ce,	// (0x0002e568) popup_dyc_status_message_window

0x06e8,	// (0x0002e582) popup_grid_large_graphic_window_ParamLimits

0x06e8,	// (0x0002e582) popup_grid_large_graphic_window

0x07a4,	// (0x0002e63e) popup_loc_request_window_ParamLimits

0x07a4,	// (0x0002e63e) popup_loc_request_window

0x089a,	// (0x0002e734) popup_wml_address_window_ParamLimits

0x089a,	// (0x0002e734) popup_wml_address_window

0x48ea,	// (0x00032784) call_muted_g1

0x459f,	// (0x00032439) popup_call_audio_conf_window_ParamLimits

0x459f,	// (0x00032439) popup_call_audio_conf_window

0x48fe,	// (0x00032798) popup_call_audio_first_window_ParamLimits

0x48fe,	// (0x00032798) popup_call_audio_first_window

0x4974,	// (0x0003280e) popup_call_audio_in_window_ParamLimits

0x4974,	// (0x0003280e) popup_call_audio_in_window

0x49b0,	// (0x0003284a) popup_call_audio_out_window_ParamLimits

0x49b0,	// (0x0003284a) popup_call_audio_out_window

0x49ea,	// (0x00032884) popup_call_audio_second_window_ParamLimits

0x49ea,	// (0x00032884) popup_call_audio_second_window

0x4a40,	// (0x000328da) popup_call_audio_wait_window_ParamLimits

0x4a40,	// (0x000328da) popup_call_audio_wait_window

0x4a75,	// (0x0003290f) popup_number_entry_window_ParamLimits

0x4a75,	// (0x0003290f) popup_number_entry_window

0x9ce8,	// (0x00037b82) bg_popup_call_pane_cp05_ParamLimits

0x9ce8,	// (0x00037b82) bg_popup_call_pane_cp05

0x9d08,	// (0x00037ba2) popup_number_entry_window_t1

0x9d1b,	// (0x00037bb5) popup_number_entry_window_t2

0x9d2d,	// (0x00037bc7) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0003cf60) popup_number_entry_window_t

0x9d3f,	// (0x00037bd9) text_title_cp2

0x9d52,	// (0x00037bec) bg_popup_call_pane_cp_ParamLimits

0x9d52,	// (0x00037bec) bg_popup_call_pane_cp

0x9d60,	// (0x00037bfa) call_thumbnail_pane

0x9d68,	// (0x00037c02) popup_call_audio_in_window_g1_ParamLimits

0x9d68,	// (0x00037c02) popup_call_audio_in_window_g1

0x9d74,	// (0x00037c0e) popup_call_audio_in_window_g2_ParamLimits

0x9d74,	// (0x00037c0e) popup_call_audio_in_window_g2

0x9d80,	// (0x00037c1a) popup_call_audio_in_window_g3_ParamLimits

0x9d80,	// (0x00037c1a) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0003cf69) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0003cf69) popup_call_audio_in_window_g

0x9d8c,	// (0x00037c26) popup_call_audio_in_window_t1_ParamLimits

0x9d8c,	// (0x00037c26) popup_call_audio_in_window_t1

0x9da8,	// (0x00037c42) popup_call_audio_in_window_t2_ParamLimits

0x9da8,	// (0x00037c42) popup_call_audio_in_window_t2

0x9dc4,	// (0x00037c5e) popup_call_audio_in_window_t3_ParamLimits

0x9dc4,	// (0x00037c5e) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0003cf70) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0003cf70) popup_call_audio_in_window_t

0x9d52,	// (0x00037bec) bg_popup_call_pane_cp01_ParamLimits

0x9d52,	// (0x00037bec) bg_popup_call_pane_cp01

0x9d60,	// (0x00037bfa) call_thumbnail_pane_cp02

0x9dd7,	// (0x00037c71) call_type_pane_cp022

0x9ddf,	// (0x00037c79) popup_call_audio_out_window_g1_ParamLimits

0x9ddf,	// (0x00037c79) popup_call_audio_out_window_g1

0x9df1,	// (0x00037c8b) popup_call_audio_out_window_g2_ParamLimits

0x9df1,	// (0x00037c8b) popup_call_audio_out_window_g2

0x9dfd,	// (0x00037c97) popup_call_audio_out_window_g3_ParamLimits

0x9dfd,	// (0x00037c97) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0003cf77) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0003cf77) popup_call_audio_out_window_g

0x9e0f,	// (0x00037ca9) popup_call_audio_out_window_t1_ParamLimits

0x9e0f,	// (0x00037ca9) popup_call_audio_out_window_t1

0x9e27,	// (0x00037cc1) popup_call_audio_out_window_t2_ParamLimits

0x9e27,	// (0x00037cc1) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0003cf7e) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0003cf7e) popup_call_audio_out_window_t

0x9e3c,	// (0x00037cd6) bg_popup_call_pane_ParamLimits

0x9e3c,	// (0x00037cd6) bg_popup_call_pane

0x1b20,	// (0x0002f9ba) call_thumbnail_pane_cp_ParamLimits

0x1b20,	// (0x0002f9ba) call_thumbnail_pane_cp

0x9ec0,	// (0x00037d5a) call_type_pane_cp01_ParamLimits

0x9ec0,	// (0x00037d5a) call_type_pane_cp01

0x9f04,	// (0x00037d9e) popup_call_audio_first_window_g1_ParamLimits

0x9f04,	// (0x00037d9e) popup_call_audio_first_window_g1

0x9f50,	// (0x00037dea) popup_call_audio_first_window_g2_ParamLimits

0x9f50,	// (0x00037dea) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0003cf83) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0003cf83) popup_call_audio_first_window_g

0x9f94,	// (0x00037e2e) popup_call_audio_first_window_t1_ParamLimits

0x9f94,	// (0x00037e2e) popup_call_audio_first_window_t1

0xa040,	// (0x00037eda) popup_call_audio_first_window_t4_ParamLimits

0xa040,	// (0x00037eda) popup_call_audio_first_window_t4

0xa0cc,	// (0x00037f66) popup_call_audio_first_window_t5_ParamLimits

0xa0cc,	// (0x00037f66) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0003cf88) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0003cf88) popup_call_audio_first_window_t

0xa0fb,	// (0x00037f95) bg_popup_call_pane_cp02

0xa105,	// (0x00037f9f) call_type_pane_cp023

0xa10d,	// (0x00037fa7) popup_call_audio_wait_window_g1

0xa115,	// (0x00037faf) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003cf8f) popup_call_audio_wait_window_g

0xa11d,	// (0x00037fb7) popup_call_audio_wait_window_t3

0xa12b,	// (0x00037fc5) bg_popup_call_pane_cp03_ParamLimits

0xa12b,	// (0x00037fc5) bg_popup_call_pane_cp03

0xa18b,	// (0x00038025) call_thumbnail_pane_cp011_ParamLimits

0xa18b,	// (0x00038025) call_thumbnail_pane_cp011

0xa197,	// (0x00038031) call_type_pane_cp034_ParamLimits

0xa197,	// (0x00038031) call_type_pane_cp034

0xa1d3,	// (0x0003806d) popup_call_audio_second_window_g1_ParamLimits

0xa1d3,	// (0x0003806d) popup_call_audio_second_window_g1

0xa20f,	// (0x000380a9) popup_call_audio_second_window_g2_ParamLimits

0xa20f,	// (0x000380a9) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0003cf94) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0003cf94) popup_call_audio_second_window_g

0xa24b,	// (0x000380e5) popup_call_audio_second_window_t1_ParamLimits

0xa24b,	// (0x000380e5) popup_call_audio_second_window_t1

0xa2cc,	// (0x00038166) popup_call_audio_second_window_t2_ParamLimits

0xa2cc,	// (0x00038166) popup_call_audio_second_window_t2

0xa302,	// (0x0003819c) popup_call_audio_second_window_t3_ParamLimits

0xa302,	// (0x0003819c) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0003cf99) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0003cf99) popup_call_audio_second_window_t

0xa0fb,	// (0x00037f95) bg_popup_call_pane_cp04

0xa338,	// (0x000381d2) list_conf_pane

0xa340,	// (0x000381da) popup_call_audio_conf_window_t1

0xa34e,	// (0x000381e8) call_thumbnail_pane_g1

0xa356,	// (0x000381f0) bg_pinb_pane_ParamLimits

0xa356,	// (0x000381f0) bg_pinb_pane

0xa364,	// (0x000381fe) find_pinb_pane

0xa36d,	// (0x00038207) listscroll_pinb_pane_ParamLimits

0xa36d,	// (0x00038207) listscroll_pinb_pane

0xa37c,	// (0x00038216) pinb_bg_pane_g1

0x1b44,	// (0x0002f9de) pinb_bg_pane_g2

0x1b50,	// (0x0002f9ea) pinb_bg_pane_g3

0x1b5c,	// (0x0002f9f6) pinb_bg_pane_g4

0x1b68,	// (0x0002fa02) pinb_bg_pane_g5

0x1b74,	// (0x0002fa0e) pinb_bg_pane_g6

0x1b7f,	// (0x0002fa19) pinb_bg_pane_g7

0x1b8a,	// (0x0002fa24) pinb_bg_pane_g8

0x1b95,	// (0x0002fa2f) pinb_bg_pane_g9

0x1b9f,	// (0x0002fa39) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0003cfa0) pinb_bg_pane_g

0x1bbc,	// (0x0002fa56) grid_pinb_pane

0x1bc5,	// (0x0002fa5f) list_pinb_pane

0x1bce,	// (0x0002fa68) scroll_pane_cp01_ParamLimits

0x1bce,	// (0x0002fa68) scroll_pane_cp01

0xa386,	// (0x00038220) find_pinb_pane_g1_ParamLimits

0xa386,	// (0x00038220) find_pinb_pane_g1

0xa39e,	// (0x00038238) find_pinb_pane_t1

0xa3b0,	// (0x0003824a) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0003cfba) find_pinb_pane_t

0xa3c5,	// (0x0003825f) input_focus_pane_cp01_ParamLimits

0xa3c5,	// (0x0003825f) input_focus_pane_cp01

0x1be0,	// (0x0002fa7a) cell_pinb_pane_ParamLimits

0x1be0,	// (0x0002fa7a) cell_pinb_pane

0x1c09,	// (0x0002faa3) cell_pinb_pane_g1_ParamLimits

0x1c09,	// (0x0002faa3) cell_pinb_pane_g1

0x1c19,	// (0x0002fab3) cell_pinb_pane_g2_ParamLimits

0x1c19,	// (0x0002fab3) cell_pinb_pane_g2

0xa3d1,	// (0x0003826b) cell_pinb_pane_g3_ParamLimits

0xa3d1,	// (0x0003826b) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0003cfbf) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0003cfbf) cell_pinb_pane_g

0xa0fb,	// (0x00037f95) grid_highlight_pane_cp01

0x1c25,	// (0x0002fabf) list_pinb_item_pane_ParamLimits

0x1c25,	// (0x0002fabf) list_pinb_item_pane

0xa0fb,	// (0x00037f95) list_highlight_pane_cp02

0x1c37,	// (0x0002fad1) list_pinb_item_pane_g1_ParamLimits

0x1c37,	// (0x0002fad1) list_pinb_item_pane_g1

0x1c44,	// (0x0002fade) list_pinb_item_pane_g2_ParamLimits

0x1c44,	// (0x0002fade) list_pinb_item_pane_g2

0x1c50,	// (0x0002faea) list_pinb_item_pane_g3_ParamLimits

0x1c50,	// (0x0002faea) list_pinb_item_pane_g3

0x1c61,	// (0x0002fafb) list_pinb_item_pane_g4_ParamLimits

0x1c61,	// (0x0002fafb) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0003cfc6) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0003cfc6) list_pinb_item_pane_g

0x1c6d,	// (0x0002fb07) list_pinb_item_pane_t1_ParamLimits

0x1c6d,	// (0x0002fb07) list_pinb_item_pane_t1

0x03ad,	// (0x0002e247) calc_display_pane

0x03d2,	// (0x0002e26c) calc_paper_pane

0x03f5,	// (0x0002e28f) grid_calc_pane

0xa0fb,	// (0x00037f95) bg_list_pane_cp01

0x1c8c,	// (0x0002fb26) clock_g1

0x1c94,	// (0x0002fb2e) clock_g2

0x0001,

0xf135,	// (0x0003cfcf) clock_g

0x1c9c,	// (0x0002fb36) clock_t1_ParamLimits

0x1c9c,	// (0x0002fb36) clock_t1

0x1cb1,	// (0x0002fb4b) clock_t2_ParamLimits

0x1cb1,	// (0x0002fb4b) clock_t2

0x1cc3,	// (0x0002fb5d) clock_t3_ParamLimits

0x1cc3,	// (0x0002fb5d) clock_t3

0x1cd5,	// (0x0002fb6f) clock_t4_ParamLimits

0x1cd5,	// (0x0002fb6f) clock_t4

0x1ce7,	// (0x0002fb81) clock_t5_ParamLimits

0x1ce7,	// (0x0002fb81) clock_t5

0x1cfc,	// (0x0002fb96) clock_t6_ParamLimits

0x1cfc,	// (0x0002fb96) clock_t6

0x1d0e,	// (0x0002fba8) clock_t7_ParamLimits

0x1d0e,	// (0x0002fba8) clock_t7

0x1d20,	// (0x0002fbba) clock_t8_ParamLimits

0x1d20,	// (0x0002fbba) clock_t8

0x1d34,	// (0x0002fbce) clock_t9_ParamLimits

0x1d34,	// (0x0002fbce) clock_t9

0x0008,

0xf13a,	// (0x0003cfd4) clock_t_ParamLimits

0xf13a,	// (0x0003cfd4) clock_t

0xa3dd,	// (0x00038277) popup_clock_analogue_window_cp02

0xa3dd,	// (0x00038277) popup_clock_digital_window_cp01

0xa3e5,	// (0x0003827f) listscroll_help_pane

0xa0fb,	// (0x00037f95) phob_pre_status_pane

0xa3ef,	// (0x00038289) grid_qdial_pane

0xa356,	// (0x000381f0) listscroll_mce_pane

0xa356,	// (0x000381f0) bg_notes_pane

0xa3f9,	// (0x00038293) list_notes_pane

0x1d48,	// (0x0002fbe2) scroll_pane_cp06

0xa407,	// (0x000382a1) bg_calc_paper_pane

0x1d5c,	// (0x0002fbf6) list_calc_pane

0xa41b,	// (0x000382b5) bg_calc_display_pane

0x0423,	// (0x0002e2bd) calc_display_pane_t1

0x0438,	// (0x0002e2d2) calc_display_pane_t2

0x1d76,	// (0x0002fc10) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0003cfe7) calc_display_pane_t

0x044d,	// (0x0002e2e7) cell_calc_pane_ParamLimits

0x044d,	// (0x0002e2e7) cell_calc_pane

0xa427,	// (0x000382c1) bg_calc_paper_pane_g1

0xa433,	// (0x000382cd) bg_calc_paper_pane_g2

0xa43f,	// (0x000382d9) bg_calc_paper_pane_g3

0xa44b,	// (0x000382e5) bg_calc_paper_pane_g4

0xa457,	// (0x000382f1) bg_calc_paper_pane_g5

0x1d88,	// (0x0002fc22) bg_calc_paper_pane_g6

0x1d97,	// (0x0002fc31) bg_calc_paper_pane_g7

0x1da6,	// (0x0002fc40) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0003cfee) bg_calc_paper_pane_g

0x1db9,	// (0x0002fc53) calc_bg_paper_pane_g9

0x1dcc,	// (0x0002fc66) list_calc_item_pane_ParamLimits

0x1dcc,	// (0x0002fc66) list_calc_item_pane

0xa463,	// (0x000382fd) list_calc_item_pane_g1

0x1de4,	// (0x0002fc7e) list_calc_item_pane_t1_ParamLimits

0x1de4,	// (0x0002fc7e) list_calc_item_pane_t1

0x0482,	// (0x0002e31c) list_calc_item_pane_t2_ParamLimits

0x0482,	// (0x0002e31c) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0003cfff) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0003cfff) list_calc_item_pane_t

0xa470,	// (0x0003830a) cell_calc_pane_g1

0xa47a,	// (0x00038314) grid_highlight_pane_cp02

0x1df6,	// (0x0002fc90) bg_calc_display_pane_g1

0x04b4,	// (0x0002e34e) bg_calc_display_pane_g2

0xa49c,	// (0x00038336) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0003d009) bg_calc_display_pane_g

0x04be,	// (0x0002e358) cell_qdial_pane_ParamLimits

0x04be,	// (0x0002e358) cell_qdial_pane

0x1dff,	// (0x0002fc99) cell_qdial_pane_g1_ParamLimits

0x1dff,	// (0x0002fc99) cell_qdial_pane_g1

0x1e15,	// (0x0002fcaf) cell_qdial_pane_g2_ParamLimits

0x1e15,	// (0x0002fcaf) cell_qdial_pane_g2

0xa4a5,	// (0x0003833f) cell_qdial_pane_g3_ParamLimits

0xa4a5,	// (0x0003833f) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0003d010) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0003d010) cell_qdial_pane_g

0x1e3c,	// (0x0002fcd6) cell_qdial_pane_t1_ParamLimits

0x1e3c,	// (0x0002fcd6) cell_qdial_pane_t1

0x1e54,	// (0x0002fcee) cell_qdial_pane_t2_ParamLimits

0x1e54,	// (0x0002fcee) cell_qdial_pane_t2

0x1e67,	// (0x0002fd01) cell_qdial_pane_t3_ParamLimits

0x1e67,	// (0x0002fd01) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0003d019) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0003d019) cell_qdial_pane_t

0xa0fb,	// (0x00037f95) grid_highlight_pane_cp04

0xa4b1,	// (0x0003834b) thumbnail_qdial_pane_ParamLimits

0xa4b1,	// (0x0003834b) thumbnail_qdial_pane

0xa50d,	// (0x000383a7) list_help_pane

0xa516,	// (0x000383b0) scroll_pane_cp02

0x1e7a,	// (0x0002fd14) help_list_pane_t1_ParamLimits

0x1e7a,	// (0x0002fd14) help_list_pane_t1

0x1e97,	// (0x0002fd31) bg_notes_pane_g2

0x1e9f,	// (0x0002fd39) bg_notes_pane_g3

0x1ea7,	// (0x0002fd41) notes_bg_pane_g1

0x1eaf,	// (0x0002fd49) notes_bg_pane_g4

0x1eb7,	// (0x0002fd51) notes_bg_pane_g5

0x1ebf,	// (0x0002fd59) notes_bg_pane_g6

0x1ec7,	// (0x0002fd61) notes_bg_pane_g7

0x1ecf,	// (0x0002fd69) notes_bg_pane_g8

0x1ed7,	// (0x0002fd71) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0003d037) notes_bg_pane_g

0x1edf,	// (0x0002fd79) list_notes_text_pane_ParamLimits

0x1edf,	// (0x0002fd79) list_notes_text_pane

0xa51f,	// (0x000383b9) list_notes_text_pane_g1

0x1ef4,	// (0x0002fd8e) list_notes_text_pane_t1

0x1f02,	// (0x0002fd9c) listscroll_cale_week_pane

0x1f2e,	// (0x0002fdc8) bg_cale_heading_pane

0xa542,	// (0x000383dc) bg_cale_pane_cp01

0x1f46,	// (0x0002fde0) cale_week_corner_pane

0x1f65,	// (0x0002fdff) cale_week_day_heading_pane

0x1f82,	// (0x0002fe1c) cale_week_scroll_pane_g1

0x1f95,	// (0x0002fe2f) cale_week_scroll_pane_g2

0x1fad,	// (0x0002fe47) cale_week_scroll_pane_g3

0x1fc5,	// (0x0002fe5f) cale_week_scroll_pane_g4

0x1fdd,	// (0x0002fe77) cale_week_scroll_pane_g5

0x1ffd,	// (0x0002fe97) cale_week_scroll_pane_g6

0x201d,	// (0x0002feb7) cale_week_scroll_pane_g7

0x203d,	// (0x0002fed7) cale_week_scroll_pane_g8

0x2061,	// (0x0002fefb) cale_week_scroll_pane_g9

0x2079,	// (0x0002ff13) cale_week_scroll_pane_g10

0x2091,	// (0x0002ff2b) cale_week_scroll_pane_g11

0x20a9,	// (0x0002ff43) cale_week_scroll_pane_g12

0x20c1,	// (0x0002ff5b) cale_week_scroll_pane_g13

0x20c1,	// (0x0002ff5b) cale_week_scroll_pane_g14

0x20c1,	// (0x0002ff5b) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0003d046) cale_week_scroll_pane_g

0x20fd,	// (0x0002ff97) cale_week_time_pane

0x2121,	// (0x0002ffbb) grid_cale_week_pane

0xa571,	// (0x0003840b) scroll_pane_cp08

0x2147,	// (0x0002ffe1) cell_cale_week_pane_ParamLimits

0x2147,	// (0x0002ffe1) cell_cale_week_pane

0x21d5,	// (0x0003006f) cale_week_day_heading_pane_t1

0x21ff,	// (0x00030099) cale_week_day_heading_pane_t2

0x222e,	// (0x000300c8) cale_week_day_heading_pane_t3

0x225d,	// (0x000300f7) cale_week_day_heading_pane_t4

0x228c,	// (0x00030126) cale_week_day_heading_pane_t5

0x22c3,	// (0x0003015d) cale_week_day_heading_pane_t6

0x22fa,	// (0x00030194) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0003d067) cale_week_day_heading_pane_t

0xa58e,	// (0x00038428) bg_cale_side_pane

0x04d2,	// (0x0002e36c) cale_week_time_pane_t1

0x04ec,	// (0x0002e386) cale_week_time_pane_t2

0x0506,	// (0x0002e3a0) cale_week_time_pane_t3

0x0520,	// (0x0002e3ba) cale_week_time_pane_t4

0x053a,	// (0x0002e3d4) cale_week_time_pane_t5

0x0554,	// (0x0002e3ee) cale_week_time_pane_t6

0x056e,	// (0x0002e408) cale_week_time_pane_t7

0x0588,	// (0x0002e422) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0003d076) cale_week_time_pane_t

0x2324,	// (0x000301be) cell_cale_week_pane_g2

0x2343,	// (0x000301dd) cell_cale_week_pane_g3_ParamLimits

0x2343,	// (0x000301dd) cell_cale_week_pane_g3

0xa59c,	// (0x00038436) grid_highlight_pane_cp07

0xa5a4,	// (0x0003843e) listscroll_gms_pane

0xa5ae,	// (0x00038448) grid_gms_pane

0xa5b7,	// (0x00038451) listscroll_gms_pane_g1

0xa5bf,	// (0x00038459) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0003d087) listscroll_gms_pane_g

0x235b,	// (0x000301f5) scroll_pane_cp010

0x2366,	// (0x00030200) cell_gms_pane_ParamLimits

0x2366,	// (0x00030200) cell_gms_pane

0x2379,	// (0x00030213) cell_gms_pane_g1

0xa5c7,	// (0x00038461) cell_gms_pane_g2

0xa5cf,	// (0x00038469) cell_gms_pane_g3

0xa5d8,	// (0x00038472) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0003d08c) cell_gms_pane_g

0xa5e1,	// (0x0003847b) grid_highlight_pane_cp09

0x4894,	// (0x0003272e) phob_pre_status_pane_g1

0x489c,	// (0x00032736) phob_pre_status_pane_g2

0x48a4,	// (0x0003273e) phob_pre_status_pane_g3

0x48ac,	// (0x00032746) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0003d477) phob_pre_status_pane_g

0x48bc,	// (0x00032756) phob_pre_status_pane_t1

0x48ca,	// (0x00032764) phob_pre_status_pane_t2

0x48da,	// (0x00032774) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0003d482) phob_pre_status_pane_t

0xa5e9,	// (0x00038483) bg_list_pane_cp05

0x2389,	// (0x00030223) grid_vorec_pane

0x2391,	// (0x0003022b) vorec_t1

0x239f,	// (0x00030239) vorec_t2

0x23ad,	// (0x00030247) vorec_t3

0x23bb,	// (0x00030255) vorec_t4

0x19eb,	// (0x0002f885) vorec_t5

0x19f9,	// (0x0002f893) vorec_t6

0x0004,

0xf1fb,	// (0x0003d095) vorec_t

0x1a07,	// (0x0002f8a1) wait_bar_pane_cp01

0x23d7,	// (0x00030271) cell_vorec_pane_ParamLimits

0x23d7,	// (0x00030271) cell_vorec_pane

0x23ea,	// (0x00030284) cell_vorec_pane_g1

0xa0fb,	// (0x00037f95) grid_highlight_pane_cp05

0x2409,	// (0x000302a3) cams_zoom_pane

0x2418,	// (0x000302b2) image_vga_pane

0x2432,	// (0x000302cc) main_camera_pane_g1

0x2444,	// (0x000302de) main_camera_pane_g2

0x2454,	// (0x000302ee) main_camera_pane_g3

0x2464,	// (0x000302fe) main_camera_pane_g4

0x2474,	// (0x0003030e) main_camera_pane_g5

0x2484,	// (0x0003031e) main_camera_pane_g6

0x2496,	// (0x00030330) main_camera_pane_g7

0x0007,

0xf206,	// (0x0003d0a0) main_camera_pane_g

0x24a6,	// (0x00030340) main_camera_pane_t1

0x24bc,	// (0x00030356) main_camera_pane_t2

0x0001,

0xf217,	// (0x0003d0b1) main_camera_pane_t

0x24f6,	// (0x00030390) cams_zoom_pane_cp_ParamLimits

0x24f6,	// (0x00030390) cams_zoom_pane_cp

0x251e,	// (0x000303b8) image_cif_pane_ParamLimits

0x251e,	// (0x000303b8) image_cif_pane

0x2554,	// (0x000303ee) image_subqcif_pane

0x255c,	// (0x000303f6) main_video_pane_g1_ParamLimits

0x255c,	// (0x000303f6) main_video_pane_g1

0x2580,	// (0x0003041a) main_video_pane_g2_ParamLimits

0x2580,	// (0x0003041a) main_video_pane_g2

0x25b4,	// (0x0003044e) main_video_pane_g3_ParamLimits

0x25b4,	// (0x0003044e) main_video_pane_g3

0x25e2,	// (0x0003047c) main_video_pane_g4_ParamLimits

0x25e2,	// (0x0003047c) main_video_pane_g4

0x2610,	// (0x000304aa) main_video_pane_g5_ParamLimits

0x2610,	// (0x000304aa) main_video_pane_g5

0xa5fd,	// (0x00038497) main_video_pane_g6_ParamLimits

0xa5fd,	// (0x00038497) main_video_pane_g6

0x0006,

0xf21c,	// (0x0003d0b6) main_video_pane_g_ParamLimits

0xf21c,	// (0x0003d0b6) main_video_pane_g

0x2639,	// (0x000304d3) main_video_pane_t1_ParamLimits

0x2639,	// (0x000304d3) main_video_pane_t1

0xa617,	// (0x000384b1) cams_zoom_pane_g1

0xa620,	// (0x000384ba) cams_zoom_pane_g2

0xa629,	// (0x000384c3) cams_zoom_pane_g3

0xa632,	// (0x000384cc) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0003d0c5) cams_zoom_pane_g

0x2696,	// (0x00030530) grid_cams_pane

0x26b0,	// (0x0003054a) linegrid_cams_pane

0x26c4,	// (0x0003055e) cell_cams_pane_ParamLimits

0x26c4,	// (0x0003055e) cell_cams_pane

0xa63b,	// (0x000384d5) cams_burst_image_pane

0xa643,	// (0x000384dd) cell_cams_pane_g1

0xa0fb,	// (0x00037f95) grid_highlight_pane_cp03

0xa470,	// (0x0003830a) mp_bg_pane_g1

0xa0fb,	// (0x00037f95) bg_list_pane_cp03

0xc40d,	// (0x0003a2a7) bg_mp_pane

0xc415,	// (0x0003a2af) grid_mp_pane

0xc41d,	// (0x0003a2b7) media_player_g1

0xc425,	// (0x0003a2bf) media_player_t1

0xc433,	// (0x0003a2cd) media_player_t2

0xc441,	// (0x0003a2db) media_player_t3

0xc44f,	// (0x0003a2e9) media_player_t4

0xc45d,	// (0x0003a2f7) media_player_t5

0xc46b,	// (0x0003a305) media_player_t6

0xc479,	// (0x0003a313) media_player_t7

0x0006,

0xf5c7,	// (0x0003d461) media_player_t

0xc487,	// (0x0003a321) wait_bar_pane_cp02

0xf5ac,	// (0x0003d446) main_usb_pane_t

0x488b,	// (0x00032725) cell_mp_pane

0xa470,	// (0x0003830a) cell_mp_pane_g1

0xa0fb,	// (0x00037f95) grid_highlight_pane_cp06

0xa64b,	// (0x000384e5) grid_skin_colour_pane

0xa653,	// (0x000384ed) list_highlight_pane_cp03

0x27fa,	// (0x00030694) skin_g1

0xa65b,	// (0x000384f5) skin_t1

0xa66a,	// (0x00038504) skin_t2

0x0001,

0xf260,	// (0x0003d0fa) skin_t

0x2802,	// (0x0003069c) cell_skin_colour_pane_ParamLimits

0x2802,	// (0x0003069c) cell_skin_colour_pane

0xa678,	// (0x00038512) cell_skin_colour_pane_g1

0x287b,	// (0x00030715) call_video_g1_ParamLimits

0x287b,	// (0x00030715) call_video_g1

0x2897,	// (0x00030731) call_video_g2_ParamLimits

0x2897,	// (0x00030731) call_video_g2

0x0001,

0xf265,	// (0x0003d0ff) call_video_g_ParamLimits

0xf265,	// (0x0003d0ff) call_video_g

0x28e9,	// (0x00030783) call_video_uplink_pane_cp1_ParamLimits

0x28e9,	// (0x00030783) call_video_uplink_pane_cp1

0xa68a,	// (0x00038524) call_video_uplink_pane_cp2

0x2988,	// (0x00030822) video_down_crop_pane_ParamLimits

0x2988,	// (0x00030822) video_down_crop_pane

0x2a7f,	// (0x00030919) video_down_pane_ParamLimits

0x2a7f,	// (0x00030919) video_down_pane

0xa692,	// (0x0003852c) video_down_subqcif_pane_ParamLimits

0xa692,	// (0x0003852c) video_down_subqcif_pane

0xa6aa,	// (0x00038544) video_down_subqcif_pane_cp_ParamLimits

0xa6aa,	// (0x00038544) video_down_subqcif_pane_cp

0xa6d0,	// (0x0003856a) im_reading_pane_ParamLimits

0xa6d0,	// (0x0003856a) im_reading_pane

0x2b8f,	// (0x00030a29) im_writing_pane_ParamLimits

0x2b8f,	// (0x00030a29) im_writing_pane

0x2ba5,	// (0x00030a3f) im_reading_pane_t1

0xa6ea,	// (0x00038584) list_im_pane

0xa6fb,	// (0x00038595) scroll_pane_cp07

0x2bde,	// (0x00030a78) im_writing_pane_t1_ParamLimits

0x2bde,	// (0x00030a78) im_writing_pane_t1

0xa714,	// (0x000385ae) im_writing_pane_t2_ParamLimits

0xa714,	// (0x000385ae) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0003d109) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0003d109) im_writing_pane_t

0xa0fb,	// (0x00037f95) input_focus_pane_cp04

0xa0fb,	// (0x00037f95) input_focus_pane_cp05

0x2bf3,	// (0x00030a8d) list_im_single_pane_ParamLimits

0x2bf3,	// (0x00030a8d) list_im_single_pane

0x2c07,	// (0x00030aa1) list_single_im_pane_t1

0x484b,	// (0x000326e5) blid_accuracy_pane

0x4853,	// (0x000326ed) blid_compass_pane

0x485d,	// (0x000326f7) main_location_t1

0x486d,	// (0x00032707) main_location_t2

0x487d,	// (0x00032717) main_location_t3

0x0002,

0xf5d6,	// (0x0003d470) main_location_t

0xa0fb,	// (0x00037f95) aid_levels_location

0xa470,	// (0x0003830a) blid_accuracy_pane_g1

0xa470,	// (0x0003830a) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0003d16b) blid_accuracy_pane_g

0xa75c,	// (0x000385f6) wml_content_pane

0xa79a,	// (0x00038634) wml_button_pane_ParamLimits

0xa79a,	// (0x00038634) wml_button_pane

0x2c16,	// (0x00030ab0) wml_list_single_large_pane_ParamLimits

0x2c16,	// (0x00030ab0) wml_list_single_large_pane

0x2c2b,	// (0x00030ac5) wml_list_single_medium_pane_ParamLimits

0x2c2b,	// (0x00030ac5) wml_list_single_medium_pane

0x2c41,	// (0x00030adb) wml_list_single_small_pane_ParamLimits

0x2c41,	// (0x00030adb) wml_list_single_small_pane

0xa7ae,	// (0x00038648) wml_selection_box_pane_ParamLimits

0xa7ae,	// (0x00038648) wml_selection_box_pane

0xa7c1,	// (0x0003865b) wml_list_single_pane_t1

0xa7d0,	// (0x0003866a) wml_list_single_medium_pane_t1

0xa7df,	// (0x00038679) wml_list_single_large_pane_t1

0xa7ee,	// (0x00038688) input_focus_pane_cp02_ParamLimits

0xa7ee,	// (0x00038688) input_focus_pane_cp02

0xa801,	// (0x0003869b) wml_selection_box_pane_g1

0xa80a,	// (0x000386a4) wml_selection_box_pane_t1_ParamLimits

0xa80a,	// (0x000386a4) wml_selection_box_pane_t1

0xa356,	// (0x000381f0) bg_wml_button_pane_ParamLimits

0xa356,	// (0x000381f0) bg_wml_button_pane

0xa822,	// (0x000386bc) wml_button_pane_g1

0xa82a,	// (0x000386c4) wml_button_pane_t1

0xa822,	// (0x000386bc) wml_button_bg_pane_g1

0xa83a,	// (0x000386d4) wml_button_bg_pane_g2

0xa842,	// (0x000386dc) wml_button_bg_pane_g3

0xa84a,	// (0x000386e4) wml_button_bg_pane_g4

0xa852,	// (0x000386ec) wml_button_bg_pane_g5

0xa85a,	// (0x000386f4) wml_button_bg_pane_g6

0xa862,	// (0x000386fc) wml_button_bg_pane_g7

0xa86a,	// (0x00038704) wml_button_bg_pane_g8

0xa872,	// (0x0003870c) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0003d10e) wml_button_bg_pane_g

0x2c59,	// (0x00030af3) bg_list_pane_cp02

0xa87a,	// (0x00038714) mce_header_pane_ParamLimits

0xa87a,	// (0x00038714) mce_header_pane

0xa890,	// (0x0003872a) mce_icon_pane

0xa890,	// (0x0003872a) mce_image_pane

0xa899,	// (0x00038733) mce_text_pane_ParamLimits

0xa899,	// (0x00038733) mce_text_pane

0x2c61,	// (0x00030afb) scroll_pane_cp03

0xa792,	// (0x0003862c) scroll_pane_cp04

0xa8ac,	// (0x00038746) scroll_pane_cp05_ParamLimits

0xa8ac,	// (0x00038746) scroll_pane_cp05

0x2c6b,	// (0x00030b05) mce_header_field_pane_ParamLimits

0x2c6b,	// (0x00030b05) mce_header_field_pane

0x2c82,	// (0x00030b1c) mce_header_field_pane_2_ParamLimits

0x2c82,	// (0x00030b1c) mce_header_field_pane_2

0x2c98,	// (0x00030b32) mce_header_field_pane_3

0x2ca0,	// (0x00030b3a) list_single_mce_message_pane_ParamLimits

0x2ca0,	// (0x00030b3a) list_single_mce_message_pane

0x2cb5,	// (0x00030b4f) list_single_mce_smart_pane_ParamLimits

0x2cb5,	// (0x00030b4f) list_single_mce_smart_pane

0xa8b8,	// (0x00038752) input_focus_pane_cp03

0xa8c1,	// (0x0003875b) list_header_data_pane

0x2cd5,	// (0x00030b6f) mce_header_field_pane_t1

0x2ce5,	// (0x00030b7f) list_single_mce_header_pane_ParamLimits

0x2ce5,	// (0x00030b7f) list_single_mce_header_pane

0xa8c9,	// (0x00038763) list_single_mce_header_pane_t1

0xa8d8,	// (0x00038772) list_single_mce_message_pane_g1

0xa8e0,	// (0x0003877a) list_single_mce_message_pane_t1

0x2d1f,	// (0x00030bb9) bg_cale_heading_pane_cp01_ParamLimits

0x2d1f,	// (0x00030bb9) bg_cale_heading_pane_cp01

0xa8ee,	// (0x00038788) bg_cale_pane_cp02_ParamLimits

0xa8ee,	// (0x00038788) bg_cale_pane_cp02

0x2d59,	// (0x00030bf3) cale_month_corner_pane

0x2d78,	// (0x00030c12) cale_month_day_heading_pane_ParamLimits

0x2d78,	// (0x00030c12) cale_month_day_heading_pane

0x2dca,	// (0x00030c64) cale_month_pane_g1_ParamLimits

0x2dca,	// (0x00030c64) cale_month_pane_g1

0x2df9,	// (0x00030c93) cale_month_pane_g2_ParamLimits

0x2df9,	// (0x00030c93) cale_month_pane_g2

0x2e29,	// (0x00030cc3) cale_month_pane_g3_ParamLimits

0x2e29,	// (0x00030cc3) cale_month_pane_g3

0x2e65,	// (0x00030cff) cale_month_pane_g4_ParamLimits

0x2e65,	// (0x00030cff) cale_month_pane_g4

0x2ea1,	// (0x00030d3b) cale_month_pane_g5_ParamLimits

0x2ea1,	// (0x00030d3b) cale_month_pane_g5

0x2ee9,	// (0x00030d83) cale_month_pane_g6_ParamLimits

0x2ee9,	// (0x00030d83) cale_month_pane_g6

0x2f35,	// (0x00030dcf) cale_month_pane_g7_ParamLimits

0x2f35,	// (0x00030dcf) cale_month_pane_g7

0x2f89,	// (0x00030e23) cale_month_pane_g8_ParamLimits

0x2f89,	// (0x00030e23) cale_month_pane_g8

0x2fdd,	// (0x00030e77) cale_month_pane_g9_ParamLimits

0x2fdd,	// (0x00030e77) cale_month_pane_g9

0x302f,	// (0x00030ec9) cale_month_pane_g10_ParamLimits

0x302f,	// (0x00030ec9) cale_month_pane_g10

0x3081,	// (0x00030f1b) cale_month_pane_g11_ParamLimits

0x3081,	// (0x00030f1b) cale_month_pane_g11

0x30d3,	// (0x00030f6d) cale_month_pane_g12_ParamLimits

0x30d3,	// (0x00030f6d) cale_month_pane_g12

0x3125,	// (0x00030fbf) cale_month_pane_g13_ParamLimits

0x3125,	// (0x00030fbf) cale_month_pane_g13

0x000c,

0xf287,	// (0x0003d121) cale_month_pane_g_ParamLimits

0xf287,	// (0x0003d121) cale_month_pane_g

0x3177,	// (0x00031011) cale_month_week_pane

0x319b,	// (0x00031035) grid_cale_month_pane_ParamLimits

0x319b,	// (0x00031035) grid_cale_month_pane

0x31e4,	// (0x0003107e) cale_month_day_heading_pane_t1

0x326a,	// (0x00031104) cale_month_day_heading_pane_t2

0x32e3,	// (0x0003117d) cale_month_day_heading_pane_t3

0x335c,	// (0x000311f6) cale_month_day_heading_pane_t4

0x33dd,	// (0x00031277) cale_month_day_heading_pane_t5

0x3466,	// (0x00031300) cale_month_day_heading_pane_t6

0x34ef,	// (0x00031389) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0003d13c) cale_month_day_heading_pane_t

0xa58e,	// (0x00038428) bg_cale_side_pane_cp01

0x3580,	// (0x0003141a) cale_month_week_pane_t1

0x3599,	// (0x00031433) cale_month_week_pane_t2

0x35b2,	// (0x0003144c) cale_month_week_pane_t3

0x35cb,	// (0x00031465) cale_month_week_pane_t4

0x35e4,	// (0x0003147e) cale_month_week_pane_t5

0x35fd,	// (0x00031497) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0003d14b) cale_month_week_pane_t

0x3616,	// (0x000314b0) cell_cale_month_pane_ParamLimits

0x3616,	// (0x000314b0) cell_cale_month_pane

0x376e,	// (0x00031608) cell_cale_month_pane_g1

0x05a2,	// (0x0002e43c) cell_cale_month_pane_t1_ParamLimits

0x05a2,	// (0x0002e43c) cell_cale_month_pane_t1

0xa59c,	// (0x00038436) grid_highlight_pane_cp08

0xa470,	// (0x0003830a) main_smil_g1

0x377a,	// (0x00031614) smil_status_pane

0xa92d,	// (0x000387c7) smil_text_pane

0xc32d,	// (0x0003a1c7) bg_popup_call3_rect_pane_g8

0xc335,	// (0x0003a1cf) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0003d404) bg_popup_call3_rect_pane_g

0xc57c,	// (0x0003a416) smil_status_volume_pane_g1

0xa937,	// (0x000387d1) smil_status_pane_t1

0x4bde,	// (0x00032a78) volume_smil_pane

0xa94e,	// (0x000387e8) list_smil_text_pane

0x378d,	// (0x00031627) scroll_pane_cp011

0x3798,	// (0x00031632) smil_text_list_pane_t1_ParamLimits

0x3798,	// (0x00031632) smil_text_list_pane_t1

0x37d4,	// (0x0003166e) aid_volume_smil_ParamLimits

0x37d4,	// (0x0003166e) aid_volume_smil

0xa470,	// (0x0003830a) smil_volume_pane_g1

0xa470,	// (0x0003830a) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0003d16b) smil_volume_pane_g

0x1f02,	// (0x0002fd9c) listscroll_cale_day_pane

0xa958,	// (0x000387f2) bg_cale_pane

0xa970,	// (0x0003880a) list_cale_pane

0xa993,	// (0x0003882d) scroll_pane_cp09

0xa9a4,	// (0x0003883e) cale_bg_pane_g1

0xa9ac,	// (0x00038846) cale_bg_pane_g2

0xa9b4,	// (0x0003884e) cale_bg_pane_g3

0xa9bc,	// (0x00038856) cale_bg_pane_g4

0xa9c4,	// (0x0003885e) cale_bg_pane_g5

0xa9cc,	// (0x00038866) cale_bg_pane_g6

0xa9d4,	// (0x0003886e) cale_bg_pane_g7

0xa9dc,	// (0x00038876) cale_bg_pane_g8

0xa9e4,	// (0x0003887e) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0003d170) cale_bg_pane_g

0x37fe,	// (0x00031698) list_cale_time_pane_ParamLimits

0x37fe,	// (0x00031698) list_cale_time_pane

0xa9ec,	// (0x00038886) list_cale_time_pane_g1_ParamLimits

0xa9ec,	// (0x00038886) list_cale_time_pane_g1

0xaa1e,	// (0x000388b8) list_cale_time_pane_g2_ParamLimits

0xaa1e,	// (0x000388b8) list_cale_time_pane_g2

0x3813,	// (0x000316ad) list_cale_time_pane_g3_ParamLimits

0x3813,	// (0x000316ad) list_cale_time_pane_g3

0x3821,	// (0x000316bb) list_cale_time_pane_g4_ParamLimits

0x3821,	// (0x000316bb) list_cale_time_pane_g4

0x382f,	// (0x000316c9) list_cale_time_pane_g5_ParamLimits

0x382f,	// (0x000316c9) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0003d183) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0003d183) list_cale_time_pane_g

0xaa38,	// (0x000388d2) list_cale_time_pane_t1_ParamLimits

0xaa38,	// (0x000388d2) list_cale_time_pane_t1

0xaa60,	// (0x000388fa) list_cale_time_pane_t2_ParamLimits

0xaa60,	// (0x000388fa) list_cale_time_pane_t2

0x3c03,	// (0x00031a9d) aid_blid_cardinal_pane

0x3c41,	// (0x00031adb) compass_pane_t4

0xaa88,	// (0x00038922) list_cale_time_pane_t4_ParamLimits

0xaa88,	// (0x00038922) list_cale_time_pane_t4

0x3c4f,	// (0x00031ae9) compass_pane_t5

0x3c5d,	// (0x00031af7) compass_pane_t6

0x3c6b,	// (0x00031b05) compass_pane_t7

0xaf37,	// (0x00038dd1) navi_pane_cc_t1

0xb114,	// (0x00038fae) aid_phob_thumbnail_center_pane

0x4263,	// (0x000320fd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0003d190) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0003d190) list_cale_time_pane_t

0x9d52,	// (0x00037bec) bg_popup_window_pane_cp02_ParamLimits

0x9d52,	// (0x00037bec) bg_popup_window_pane_cp02

0xaab0,	// (0x0003894a) heading_pane_cp01_ParamLimits

0xaab0,	// (0x0003894a) heading_pane_cp01

0xaabc,	// (0x00038956) loc_req_pane_ParamLimits

0xaabc,	// (0x00038956) loc_req_pane

0xaacc,	// (0x00038966) loc_type_pane_ParamLimits

0xaacc,	// (0x00038966) loc_type_pane

0xaade,	// (0x00038978) loc_type_pane_t1_ParamLimits

0xaade,	// (0x00038978) loc_type_pane_t1

0xaaf0,	// (0x0003898a) loc_type_pane_t2_ParamLimits

0xaaf0,	// (0x0003898a) loc_type_pane_t2

0xab02,	// (0x0003899c) loc_type_pane_t3_ParamLimits

0xab02,	// (0x0003899c) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0003d197) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0003d197) loc_type_pane_t

0xab14,	// (0x000389ae) list_loc_req_pane

0xab1e,	// (0x000389b8) scroll_pane_cp012

0x383d,	// (0x000316d7) list_single_loc_request_popup_menu_pane_ParamLimits

0x383d,	// (0x000316d7) list_single_loc_request_popup_menu_pane

0xab29,	// (0x000389c3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xab29,	// (0x000389c3) list_single_loc_request_popup_menu_pane_g1

0xab35,	// (0x000389cf) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xab35,	// (0x000389cf) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0003d19e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0003d19e) list_single_loc_request_popup_menu_pane_g

0xab41,	// (0x000389db) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xab41,	// (0x000389db) list_single_loc_request_popup_menu_pane_t1

0xa356,	// (0x000381f0) bg_popup_window_pane_cp03_ParamLimits

0xa356,	// (0x000381f0) bg_popup_window_pane_cp03

0xab57,	// (0x000389f1) heading_loc_req_pane_ParamLimits

0xab57,	// (0x000389f1) heading_loc_req_pane

0x384a,	// (0x000316e4) popup_dyc_status_message_window_g1_ParamLimits

0x384a,	// (0x000316e4) popup_dyc_status_message_window_g1

0x385e,	// (0x000316f8) popup_dyc_status_message_window_t1_ParamLimits

0x385e,	// (0x000316f8) popup_dyc_status_message_window_t1

0x3873,	// (0x0003170d) popup_dyc_status_message_window_t2_ParamLimits

0x3873,	// (0x0003170d) popup_dyc_status_message_window_t2

0x3888,	// (0x00031722) popup_dyc_status_message_window_t3_ParamLimits

0x3888,	// (0x00031722) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0003d1a3) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0003d1a3) popup_dyc_status_message_window_t

0xa0fb,	// (0x00037f95) bg_heading_pane_cp01

0xab63,	// (0x000389fd) heading_loc_req_pane_g1

0xab6b,	// (0x00038a05) heading_loc_req_pane_g2

0xab73,	// (0x00038a0d) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0003d1aa) heading_loc_req_pane_g

0xab7b,	// (0x00038a15) heading_loc_req_pane_t1

0xab8a,	// (0x00038a24) bg_popup_sub_pane_cp01_ParamLimits

0xab8a,	// (0x00038a24) bg_popup_sub_pane_cp01

0xab98,	// (0x00038a32) popup_cale_events_window_g1_ParamLimits

0xab98,	// (0x00038a32) popup_cale_events_window_g1

0xabb8,	// (0x00038a52) popup_cale_events_window_g2_ParamLimits

0xabb8,	// (0x00038a52) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0003d1de) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0003d1de) popup_cale_events_window_g

0xabd8,	// (0x00038a72) popup_cale_events_window_t1_ParamLimits

0xabd8,	// (0x00038a72) popup_cale_events_window_t1

0xabea,	// (0x00038a84) popup_cale_events_window_t2_ParamLimits

0xabea,	// (0x00038a84) popup_cale_events_window_t2

0xac28,	// (0x00038ac2) popup_cale_events_window_t3_ParamLimits

0xac28,	// (0x00038ac2) popup_cale_events_window_t3

0xac62,	// (0x00038afc) popup_cale_events_window_t4_ParamLimits

0xac62,	// (0x00038afc) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0003d1e3) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0003d1e3) popup_cale_events_window_t

0x398b,	// (0x00031825) call_type_pane

0x399b,	// (0x00031835) popup_call_status_window_g1

0x39af,	// (0x00031849) popup_call_status_window_g2

0x39c3,	// (0x0003185d) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0003d1ec) popup_call_status_window_g

0xac98,	// (0x00038b32) call_type_pane_g1

0xaca1,	// (0x00038b3b) call_type_pane_g2

0x0001,

0xf359,	// (0x0003d1f3) call_type_pane_g

0xa0fb,	// (0x00037f95) bg_popup_sub_pane_cp02

0xacaa,	// (0x00038b44) listscroll_popup_wml_pane

0xacb2,	// (0x00038b4c) list_wml_pane

0xacbc,	// (0x00038b56) scroll_pane_cp013

0xacc7,	// (0x00038b61) list_single_graphic_popup_wml_pane_ParamLimits

0xacc7,	// (0x00038b61) list_single_graphic_popup_wml_pane

0xa470,	// (0x0003830a) list_single_graphic_popup_wml_pane_g1

0xacdb,	// (0x00038b75) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0003d1f8) list_single_graphic_popup_wml_pane_g

0xace3,	// (0x00038b7d) list_single_graphic_popup_wml_pane_t1

0xacf9,	// (0x00038b93) aid_call_pane

0xa34e,	// (0x000381e8) popup_clock_analogue_window_g1

0xa34e,	// (0x000381e8) popup_clock_analogue_window_g2

0x39d2,	// (0x0003186c) popup_clock_analogue_window_g3

0x39d2,	// (0x0003186c) popup_clock_analogue_window_g4

0xa470,	// (0x0003830a) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0003d1fd) popup_clock_analogue_window_g

0x39da,	// (0x00031874) popup_clock_analogue_window_t1

0x39e8,	// (0x00031882) clock_digital_number_pane_ParamLimits

0x39e8,	// (0x00031882) clock_digital_number_pane

0x39f4,	// (0x0003188e) clock_digital_number_pane_cp02_ParamLimits

0x39f4,	// (0x0003188e) clock_digital_number_pane_cp02

0x3a00,	// (0x0003189a) clock_digital_number_pane_cp03_ParamLimits

0x3a00,	// (0x0003189a) clock_digital_number_pane_cp03

0x3a0c,	// (0x000318a6) clock_digital_number_pane_cp04_ParamLimits

0x3a0c,	// (0x000318a6) clock_digital_number_pane_cp04

0x3a1c,	// (0x000318b6) clock_digital_separator_pane_ParamLimits

0x3a1c,	// (0x000318b6) clock_digital_separator_pane

0x3a28,	// (0x000318c2) popup_clock_digital_window_t1

0xa470,	// (0x0003830a) clock_digital_number_pane_g1

0xa470,	// (0x0003830a) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0003d16b) clock_digital_number_pane_g

0xa470,	// (0x0003830a) clock_digital_separator_pane_g1

0xa470,	// (0x0003830a) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0003d16b) clock_digital_separator_pane_g

0xa0fb,	// (0x00037f95) bg_popup_window_pane_cp04

0xad01,	// (0x00038b9b) heading_pane_cp03

0xad09,	// (0x00038ba3) listscroll_popup_gms_pane

0xad11,	// (0x00038bab) grid_large_graphic_popup_pane

0xad1b,	// (0x00038bb5) listscroll_popup_gms_pane_g1

0xad23,	// (0x00038bbd) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0003d208) listscroll_popup_gms_pane_g

0xa792,	// (0x0003862c) scroll_pane_cp014

0x3a45,	// (0x000318df) cell_large_graphic_popup_pane_ParamLimits

0x3a45,	// (0x000318df) cell_large_graphic_popup_pane

0x3a5d,	// (0x000318f7) cell_large_graphic_popup_pane_g1_ParamLimits

0x3a5d,	// (0x000318f7) cell_large_graphic_popup_pane_g1

0xad2b,	// (0x00038bc5) cell_large_graphic_popup_pane_g2_ParamLimits

0xad2b,	// (0x00038bc5) cell_large_graphic_popup_pane_g2

0xad37,	// (0x00038bd1) cell_large_graphic_popup_pane_g3_ParamLimits

0xad37,	// (0x00038bd1) cell_large_graphic_popup_pane_g3

0xad44,	// (0x00038bde) cell_large_graphic_popup_pane_g4_ParamLimits

0xad44,	// (0x00038bde) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0003d20d) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0003d20d) cell_large_graphic_popup_pane_g

0xad54,	// (0x00038bee) grid_highlight_pane_cp010

0xa470,	// (0x0003830a) bg_popup_call_pane_g1

0xad5e,	// (0x00038bf8) list_single_graphic_popup_conf_pane_ParamLimits

0xad5e,	// (0x00038bf8) list_single_graphic_popup_conf_pane

0xad71,	// (0x00038c0b) list_highlight_pane_cp01

0xad7a,	// (0x00038c14) list_single_graphic_popup_conf_pane_g1

0xad82,	// (0x00038c1c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0003d216) list_single_graphic_popup_conf_pane_g

0xad8a,	// (0x00038c24) list_single_graphic_popup_conf_pane_t1

0xad98,	// (0x00038c32) linegrid_cams_pane_g1

0x3a69,	// (0x00031903) linegrid_cams_pane_g2

0xa5cf,	// (0x00038469) linegrid_cams_pane_g3

0xada1,	// (0x00038c3b) linegrid_cams_pane_g4

0x3a72,	// (0x0003190c) linegrid_cams_pane_g5

0x3a7b,	// (0x00031915) linegrid_cams_pane_g6

0xa5d8,	// (0x00038472) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0003d21b) linegrid_cams_pane_g

0xadaa,	// (0x00038c44) popup_clock_analogue_window

0xadaa,	// (0x00038c44) popup_clock_digital_window

0xa0fb,	// (0x00037f95) popup_phob_thumbnail_window

0xa470,	// (0x0003830a) call_video_uplink_pane_g1

0xadb3,	// (0x00038c4d) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0003d22a) call_video_uplink_pane_g

0xadbb,	// (0x00038c55) video_uplink_pane

0xadc3,	// (0x00038c5d) mce_image_pane_g1

0x3a86,	// (0x00031920) mce_image_pane_g2

0x3a90,	// (0x0003192a) mce_image_pane_g3

0x3a98,	// (0x00031932) mce_image_pane_g4

0x3aa0,	// (0x0003193a) mce_image_pane_g5

0x0004,

0xf395,	// (0x0003d22f) mce_image_pane_g

0xadcd,	// (0x00038c67) control_top_pane_stacon_cp01_ParamLimits

0xadcd,	// (0x00038c67) control_top_pane_stacon_cp01

0xade1,	// (0x00038c7b) uni_indicator_pane_stacon_cp01_ParamLimits

0xade1,	// (0x00038c7b) uni_indicator_pane_stacon_cp01

0xadf2,	// (0x00038c8c) bg_popup_sub_pane_cp03

0xadfc,	// (0x00038c96) chi_dic_find_pane

0x3aa8,	// (0x00031942) listscroll_chi_dic_pane

0xae04,	// (0x00038c9e) main_pane_chidic_g1

0xae0c,	// (0x00038ca6) chi_dic_find_pane_t1

0xae1a,	// (0x00038cb4) find_chidic_pane

0xae23,	// (0x00038cbd) chi_dic_list_pane_ParamLimits

0xae23,	// (0x00038cbd) chi_dic_list_pane

0xae34,	// (0x00038cce) scroll_pane_cp020

0xae3c,	// (0x00038cd6) find_chidic_pane_t1

0xa0fb,	// (0x00037f95) input_focus_pane_cp06

0x3abc,	// (0x00031956) list_chi_dic_pane_ParamLimits

0x3abc,	// (0x00031956) list_chi_dic_pane

0x3ace,	// (0x00031968) list_chi_dic_pane_t1_ParamLimits

0x3ace,	// (0x00031968) list_chi_dic_pane_t1

0xa0fb,	// (0x00037f95) list_highlight_pane_cp020

0xae4b,	// (0x00038ce5) bg_cale_heading_pane_g1

0x3ae1,	// (0x0003197b) bg_cale_heading_pane_g2

0x3ae9,	// (0x00031983) bg_cale_heading_pane_g3

0x3af1,	// (0x0003198b) bg_cale_heading_pane_g4

0x3afb,	// (0x00031995) bg_cale_heading_pane_g5

0x3b05,	// (0x0003199f) bg_cale_heading_pane_g6

0x3b0d,	// (0x000319a7) bg_cale_heading_pane_g7

0x3b15,	// (0x000319af) bg_cale_heading_pane_g8

0x3b1f,	// (0x000319b9) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0003d23a) bg_cale_heading_pane_g

0xae4b,	// (0x00038ce5) bg_cale_side_pane_g1

0x3b29,	// (0x000319c3) bg_cale_side_pane_g2

0x3b31,	// (0x000319cb) bg_cale_side_pane_g3

0x3b39,	// (0x000319d3) bg_cale_side_pane_g4

0x3b41,	// (0x000319db) bg_cale_side_pane_g5

0x3b49,	// (0x000319e3) bg_cale_side_pane_g6

0x3b51,	// (0x000319eb) bg_cale_side_pane_g7

0x3b59,	// (0x000319f3) bg_cale_side_pane_g8

0x3b61,	// (0x000319fb) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0003d24d) bg_cale_side_pane_g

0x3b69,	// (0x00031a03) popup_call_status_window_ParamLimits

0x3b69,	// (0x00031a03) popup_call_status_window

0xae53,	// (0x00038ced) stacon_top_pane

0xae5b,	// (0x00038cf5) status_pane_ParamLimits

0xae5b,	// (0x00038cf5) status_pane

0xae70,	// (0x00038d0a) status_small_pane

0xae78,	// (0x00038d12) control_pane

0xa0fb,	// (0x00037f95) stacon_bottom_pane

0xae80,	// (0x00038d1a) list_single_mce_smart_pane_t1_ParamLimits

0xae80,	// (0x00038d1a) list_single_mce_smart_pane_t1

0xae93,	// (0x00038d2d) list_single_mce_smart_pane_t2_ParamLimits

0xae93,	// (0x00038d2d) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0003d260) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0003d260) list_single_mce_smart_pane_t

0x3bb2,	// (0x00031a4c) compass_pane

0x3bbb,	// (0x00031a55) main_location2_pane_t1

0x3bcd,	// (0x00031a67) main_location2_pane_t2

0x3bdf,	// (0x00031a79) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0003d265) main_location2_pane_t

0xaeb2,	// (0x00038d4c) compass_pane_g1_ParamLimits

0xaeb2,	// (0x00038d4c) compass_pane_g1

0x3c23,	// (0x00031abd) compass_pane_t1

0x3c32,	// (0x00031acc) compass_pane_t2

0x0005,

0xf3d4,	// (0x0003d26e) compass_pane_t

0x3c79,	// (0x00031b13) text_secondary_cp61

0xaf2e,	// (0x00038dc8) navi_pane_cams_g5

0xafaa,	// (0x00038e44) navi_pane_im_t1

0xafb8,	// (0x00038e52) navi_pane_mp_g1_ParamLimits

0xafb8,	// (0x00038e52) navi_pane_mp_g1

0xafcc,	// (0x00038e66) navi_pane_mp_g2_ParamLimits

0xafcc,	// (0x00038e66) navi_pane_mp_g2

0xafd8,	// (0x00038e72) navi_pane_mp_g3_ParamLimits

0xafd8,	// (0x00038e72) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0003d282) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0003d282) navi_pane_mp_g

0xafe4,	// (0x00038e7e) navi_pane_mp_t1

0xaff2,	// (0x00038e8c) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0003d289) navi_pane_mp_t

0xb05d,	// (0x00038ef7) navi_pane_vt_g1

0xafe4,	// (0x00038e7e) navi_pane_vt_t1

0xb065,	// (0x00038eff) navi_slider_pane

0xa5e9,	// (0x00038483) zooming_pane

0xb075,	// (0x00038f0f) navi_slider_pane_g1

0x3cca,	// (0x00031b64) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0003d290) navi_slider_pane_g

0xb099,	// (0x00038f33) aid_levels_zoom

0xb0a1,	// (0x00038f3b) zooming_pane_g1

0xb0a9,	// (0x00038f43) zooming_pane_g2

0xb0a9,	// (0x00038f43) zooming_pane_g3

0x0002,

0xf405,	// (0x0003d29f) zooming_pane_g

0xb0b1,	// (0x00038f4b) level_10_zoom

0xb0ba,	// (0x00038f54) level_11_zoom

0xb0c3,	// (0x00038f5d) level_1_zoom

0xb0cc,	// (0x00038f66) level_2_zoom

0xb0d5,	// (0x00038f6f) level_3_zoom

0xb0de,	// (0x00038f78) level_4_zoom

0xb0e7,	// (0x00038f81) level_5_zoom

0xb0f0,	// (0x00038f8a) level_6_zoom

0xb0f9,	// (0x00038f93) level_7_zoom

0xb102,	// (0x00038f9c) level_8_zoom

0xb10b,	// (0x00038fa5) level_9_zoom

0xb11c,	// (0x00038fb6) popup_phob_thumbnail_window_g1

0xb124,	// (0x00038fbe) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0003d2a6) popup_phob_thumbnail_window_g

0xc48f,	// (0x0003a329) level_1_location

0xc497,	// (0x0003a331) level_2_location

0xc49f,	// (0x0003a339) level_3_location

0xc4a7,	// (0x0003a341) level_4_location

0xa5e9,	// (0x00038483) level_5_location

0x3cdc,	// (0x00031b76) mce_icon_pane_g1

0x3ce6,	// (0x00031b80) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0003d2ab) mce_icon_pane_g

0x3cee,	// (0x00031b88) main_mup_pane_g1_ParamLimits

0x3cee,	// (0x00031b88) main_mup_pane_g1

0x3d04,	// (0x00031b9e) main_mup_pane_g2_ParamLimits

0x3d04,	// (0x00031b9e) main_mup_pane_g2

0x3d1c,	// (0x00031bb6) main_mup_pane_g3_ParamLimits

0x3d1c,	// (0x00031bb6) main_mup_pane_g3

0x3d34,	// (0x00031bce) main_mup_pane_g4_ParamLimits

0x3d34,	// (0x00031bce) main_mup_pane_g4

0x3d4c,	// (0x00031be6) main_mup_pane_g5_ParamLimits

0x3d4c,	// (0x00031be6) main_mup_pane_g5

0x3d68,	// (0x00031c02) main_mup_pane_g6_ParamLimits

0x3d68,	// (0x00031c02) main_mup_pane_g6

0x3d80,	// (0x00031c1a) main_mup_pane_g7_ParamLimits

0x3d80,	// (0x00031c1a) main_mup_pane_g7

0x3d98,	// (0x00031c32) main_mup_pane_g8_ParamLimits

0x3d98,	// (0x00031c32) main_mup_pane_g8

0x3db2,	// (0x00031c4c) main_mup_pane_g9_ParamLimits

0x3db2,	// (0x00031c4c) main_mup_pane_g9

0x3dcc,	// (0x00031c66) main_mup_pane_g10_ParamLimits

0x3dcc,	// (0x00031c66) main_mup_pane_g10

0x3de6,	// (0x00031c80) main_mup_pane_g11_ParamLimits

0x3de6,	// (0x00031c80) main_mup_pane_g11

0x3dfa,	// (0x00031c94) main_mup_pane_g12_ParamLimits

0x3dfa,	// (0x00031c94) main_mup_pane_g12

0x3e10,	// (0x00031caa) main_mup_pane_g13_ParamLimits

0x3e10,	// (0x00031caa) main_mup_pane_g13

0x000c,

0xf416,	// (0x0003d2b0) main_mup_pane_g_ParamLimits

0xf416,	// (0x0003d2b0) main_mup_pane_g

0x3e24,	// (0x00031cbe) main_mup_pane_t1_ParamLimits

0x3e24,	// (0x00031cbe) main_mup_pane_t1

0x3e3e,	// (0x00031cd8) main_mup_pane_t2_ParamLimits

0x3e3e,	// (0x00031cd8) main_mup_pane_t2

0x3e56,	// (0x00031cf0) main_mup_pane_t3_ParamLimits

0x3e56,	// (0x00031cf0) main_mup_pane_t3

0x3e6e,	// (0x00031d08) main_mup_pane_t4_ParamLimits

0x3e6e,	// (0x00031d08) main_mup_pane_t4

0x3e8c,	// (0x00031d26) main_mup_pane_t5_ParamLimits

0x3e8c,	// (0x00031d26) main_mup_pane_t5

0x3ea1,	// (0x00031d3b) main_mup_pane_t6_ParamLimits

0x3ea1,	// (0x00031d3b) main_mup_pane_t6

0x0005,

0xf431,	// (0x0003d2cb) main_mup_pane_t_ParamLimits

0xf431,	// (0x0003d2cb) main_mup_pane_t

0x3eb3,	// (0x00031d4d) mup_progress_pane_ParamLimits

0x3eb3,	// (0x00031d4d) mup_progress_pane

0x3ebf,	// (0x00031d59) mup_visualizer_pane_ParamLimits

0x3ebf,	// (0x00031d59) mup_visualizer_pane

0x3eef,	// (0x00031d89) mup_volume_pane_ParamLimits

0x3eef,	// (0x00031d89) mup_volume_pane

0xb12c,	// (0x00038fc6) mup_visualizer_pane_g1_ParamLimits

0xb12c,	// (0x00038fc6) mup_visualizer_pane_g1

0xb12c,	// (0x00038fc6) mup_visualizer_pane_g2_ParamLimits

0xb12c,	// (0x00038fc6) mup_visualizer_pane_g2

0xaeb2,	// (0x00038d4c) mup_visualizer_pane_g3_ParamLimits

0xaeb2,	// (0x00038d4c) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0003d2d8) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0003d2d8) mup_visualizer_pane_g

0xa470,	// (0x0003830a) mup_volume_pane_g1

0xb142,	// (0x00038fdc) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0003d2df) mup_volume_pane_g

0xa470,	// (0x0003830a) mup_progress_pane_g1

0xb14b,	// (0x00038fe5) mup_progress_pane_g2

0xb154,	// (0x00038fee) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0003d2e4) mup_progress_pane_g

0xa0fb,	// (0x00037f95) bg_popup_window_pane_cp05

0xb15d,	// (0x00038ff7) heading_pane_cp02_ParamLimits

0xb15d,	// (0x00038ff7) heading_pane_cp02

0xb177,	// (0x00039011) list_popup_blid_pane

0xb17f,	// (0x00039019) list_blid_sat_info_pane_ParamLimits

0xb17f,	// (0x00039019) list_blid_sat_info_pane

0xb192,	// (0x0003902c) list_blid_sat_info_pane_g1

0xb19a,	// (0x00039034) list_blid_sat_info_pane_t1

0x4005,	// (0x00031e9f) mup_equalizer_pane_ParamLimits

0x4005,	// (0x00031e9f) mup_equalizer_pane

0x401e,	// (0x00031eb8) mup_equalizer_pane_cp1_ParamLimits

0x401e,	// (0x00031eb8) mup_equalizer_pane_cp1

0x403b,	// (0x00031ed5) mup_equalizer_pane_cp2_ParamLimits

0x403b,	// (0x00031ed5) mup_equalizer_pane_cp2

0x4058,	// (0x00031ef2) mup_equalizer_pane_cp3_ParamLimits

0x4058,	// (0x00031ef2) mup_equalizer_pane_cp3

0x4079,	// (0x00031f13) mup_equalizer_pane_cp4_ParamLimits

0x4079,	// (0x00031f13) mup_equalizer_pane_cp4

0x409a,	// (0x00031f34) mup_equalizer_pane_cp5

0x40ae,	// (0x00031f48) mup_equalizer_pane_cp6

0x40c2,	// (0x00031f5c) mup_equalizer_pane_cp7

0xc3ad,	// (0x0003a247) bg_popup_call_poc_act_pane_g9

0xc3b5,	// (0x0003a24f) bg_popup_call_poc_act_pane_g10

0xc3bd,	// (0x0003a257) bg_popup_call_poc_act_pane_g11

0x000a,

0xa356,	// (0x000381f0) mup_scale_pane

0xa470,	// (0x0003830a) mup_scale_pane_g1

0xb1a8,	// (0x00039042) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0003d300) mup_scale_pane_g

0xb1cc,	// (0x00039066) msg_data_pane

0xb1d4,	// (0x0003906e) scroll_pane_cp017

0x40e8,	// (0x00031f82) bg_list_pane_cp04_ParamLimits

0x40e8,	// (0x00031f82) bg_list_pane_cp04

0xb1e4,	// (0x0003907e) msg_data_pane_g1

0x4100,	// (0x00031f9a) msg_data_pane_g2

0x410a,	// (0x00031fa4) msg_data_pane_g3

0x4112,	// (0x00031fac) msg_data_pane_g4

0x411a,	// (0x00031fb4) msg_data_pane_g5

0x4122,	// (0x00031fbc) msg_data_pane_g6

0x412a,	// (0x00031fc4) msg_data_pane_g7

0x0006,

0xf475,	// (0x0003d30f) msg_data_pane_g

0x4132,	// (0x00031fcc) msg_text_pane_ParamLimits

0x4132,	// (0x00031fcc) msg_text_pane

0x415d,	// (0x00031ff7) qrid_highlight_pane_cp011_ParamLimits

0x415d,	// (0x00031ff7) qrid_highlight_pane_cp011

0xa0fb,	// (0x00037f95) msg_body_pane

0xa0fb,	// (0x00037f95) msg_header_pane

0xb1f5,	// (0x0003908f) input_focus_pane_cp07

0xb20a,	// (0x000390a4) msg_header_pane_t1_ParamLimits

0xb20a,	// (0x000390a4) msg_header_pane_t1

0xb21c,	// (0x000390b6) msg_header_pane_t2_ParamLimits

0xb21c,	// (0x000390b6) msg_header_pane_t2

0x0001,

0xf489,	// (0x0003d323) msg_header_pane_t_ParamLimits

0xf489,	// (0x0003d323) msg_header_pane_t

0xb22e,	// (0x000390c8) msg_body_pane_g1

0xb236,	// (0x000390d0) msg_body_pane_t1_ParamLimits

0xb236,	// (0x000390d0) msg_body_pane_t1

0xb267,	// (0x00039101) msg_body_pane_t2_ParamLimits

0xb267,	// (0x00039101) msg_body_pane_t2

0xb279,	// (0x00039113) msg_body_pane_t3_ParamLimits

0xb279,	// (0x00039113) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0003d328) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0003d328) msg_body_pane_t

0x05ea,	// (0x0002e484) main_viewer_pane_g1_ParamLimits

0x05ea,	// (0x0002e484) main_viewer_pane_g1

0x05f8,	// (0x0002e492) main_viewer_pane_g2_ParamLimits

0x05f8,	// (0x0002e492) main_viewer_pane_g2

0x41b7,	// (0x00032051) main_viewer_pane_g3_ParamLimits

0x41b7,	// (0x00032051) main_viewer_pane_g3

0x41c6,	// (0x00032060) main_viewer_pane_g4_ParamLimits

0x41c6,	// (0x00032060) main_viewer_pane_g4

0x41d5,	// (0x0003206f) main_viewer_pane_g5_ParamLimits

0x41d5,	// (0x0003206f) main_viewer_pane_g5

0x41d5,	// (0x0003206f) main_viewer_pane_g7_ParamLimits

0x41d5,	// (0x0003206f) main_viewer_pane_g7

0xab29,	// (0x000389c3) main_viewer_pane_g8_ParamLimits

0xab29,	// (0x000389c3) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0003d338) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0003d338) main_viewer_pane_g

0xb28b,	// (0x00039125) viewer_content_pane_ParamLimits

0xb28b,	// (0x00039125) viewer_content_pane

0x4220,	// (0x000320ba) main_postcard_pane_g1_ParamLimits

0x4220,	// (0x000320ba) main_postcard_pane_g1

0x4236,	// (0x000320d0) main_postcard_pane_g2_ParamLimits

0x4236,	// (0x000320d0) main_postcard_pane_g2

0x424c,	// (0x000320e6) main_postcard_pane_g3_ParamLimits

0x424c,	// (0x000320e6) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0003d349) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0003d349) main_postcard_pane_g

0x4263,	// (0x000320fd) main_postcard_pane_g4

0xc58f,	// (0x0003a429) smil_status_volume_pane_g2

0x42a6,	// (0x00032140) postcard_pane_ParamLimits

0x42a6,	// (0x00032140) postcard_pane

0xb299,	// (0x00039133) postcard_pane_g1_ParamLimits

0xb299,	// (0x00039133) postcard_pane_g1

0x42e8,	// (0x00032182) postcard_pane_g2_ParamLimits

0x42e8,	// (0x00032182) postcard_pane_g2

0x42f4,	// (0x0003218e) postcard_pane_g3_ParamLimits

0x42f4,	// (0x0003218e) postcard_pane_g3

0xb2a7,	// (0x00039141) postcard_pane_g4_ParamLimits

0xb2a7,	// (0x00039141) postcard_pane_g4

0x4300,	// (0x0003219a) postcard_pane_g5_ParamLimits

0x4300,	// (0x0003219a) postcard_pane_g5

0x4315,	// (0x000321af) postcard_pane_g6_ParamLimits

0x4315,	// (0x000321af) postcard_pane_g6

0xb299,	// (0x00039133) postcard_pane_g7_ParamLimits

0xb299,	// (0x00039133) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0003d356) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0003d356) postcard_pane_g

0x4329,	// (0x000321c3) main_mp2_pane_g1_ParamLimits

0x4329,	// (0x000321c3) main_mp2_pane_g1

0x4335,	// (0x000321cf) main_mp2_pane_g2_ParamLimits

0x4335,	// (0x000321cf) main_mp2_pane_g2

0x4341,	// (0x000321db) main_mp2_pane_g3_ParamLimits

0x4341,	// (0x000321db) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0003d365) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0003d365) main_mp2_pane_g

0x434d,	// (0x000321e7) main_mp2_pane_t1_ParamLimits

0x434d,	// (0x000321e7) main_mp2_pane_t1

0x4362,	// (0x000321fc) main_mp2_pane_t2_ParamLimits

0x4362,	// (0x000321fc) main_mp2_pane_t2

0x4374,	// (0x0003220e) main_mp2_pane_t3_ParamLimits

0x4374,	// (0x0003220e) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0003d36c) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0003d36c) main_mp2_pane_t

0xb2b5,	// (0x0003914f) pec_content_pane_ParamLimits

0xb2b5,	// (0x0003914f) pec_content_pane

0xa792,	// (0x0003862c) scroll_pane_cp015

0xb2c7,	// (0x00039161) pec_attribute_pane_ParamLimits

0xb2c7,	// (0x00039161) pec_attribute_pane

0x4386,	// (0x00032220) pec_content_pane_g1_ParamLimits

0x4386,	// (0x00032220) pec_content_pane_g1

0xb2d7,	// (0x00039171) pec_content_pane_t1_ParamLimits

0xb2d7,	// (0x00039171) pec_content_pane_t1

0xb2e9,	// (0x00039183) pec_content_pane_t2_ParamLimits

0xb2e9,	// (0x00039183) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0003d373) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0003d373) pec_content_pane_t

0x4392,	// (0x0003222c) list_single_graphic_pane_cp01_ParamLimits

0x4392,	// (0x0003222c) list_single_graphic_pane_cp01

0xa356,	// (0x000381f0) bg_popup_sub_pane_cp04

0xb2fb,	// (0x00039195) popup_mup_playback_window_g1

0xb307,	// (0x000391a1) popup_mup_playback_window_t1

0xb31c,	// (0x000391b6) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0003d378) popup_mup_playback_window_t

0xb353,	// (0x000391ed) main_image_pane_g1_ParamLimits

0xb353,	// (0x000391ed) main_image_pane_g1

0xb396,	// (0x00039230) scroll_pane_cp018_ParamLimits

0xb396,	// (0x00039230) scroll_pane_cp018

0xb3ae,	// (0x00039248) scroll_pane_cp016_ParamLimits

0xb3ae,	// (0x00039248) scroll_pane_cp016

0x445f,	// (0x000322f9) smil2_image_pane_ParamLimits

0x445f,	// (0x000322f9) smil2_image_pane

0x448f,	// (0x00032329) smil2_root_pane_ParamLimits

0x448f,	// (0x00032329) smil2_root_pane

0x44c7,	// (0x00032361) smil2_text_pane_ParamLimits

0x44c7,	// (0x00032361) smil2_text_pane

0xa0fb,	// (0x00037f95) bg_list_pane_cp06

0xb3ea,	// (0x00039284) grid_radio_pane

0xa0fb,	// (0x00037f95) bg_popup_window_pane_cp06

0xb3f2,	// (0x0003928c) main_fmradio_pane_t1

0xad01,	// (0x00038b9b) heading_pane_cp04

0xb400,	// (0x0003929a) main_fmradio_pane_t2

0xc3c5,	// (0x0003a25f) popup_cale_lunar_info_window_g1

0xb40e,	// (0x000392a8) main_fmradio_pane_t3

0xc3cd,	// (0x0003a267) popup_cale_lunar_info_window_g2

0xb41c,	// (0x000392b6) main_fmradio_pane_t4

0x0001,

0xb42a,	// (0x000392c4) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0003d453) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0003d38d) main_fmradio_pane_t

0xb438,	// (0x000392d2) wait_bar_pane_cp03

0xb440,	// (0x000392da) cell_fmradio_pane_ParamLimits

0xb440,	// (0x000392da) cell_fmradio_pane

0xb299,	// (0x00039133) cell_fmradio_pane_g1_ParamLimits

0xb299,	// (0x00039133) cell_fmradio_pane_g1

0xa0fb,	// (0x00037f95) grid_highlight_pane_cp011

0xb453,	// (0x000392ed) poc_content_pane_ParamLimits

0xb453,	// (0x000392ed) poc_content_pane

0xb465,	// (0x000392ff) scroll_pane_cp019

0x4547,	// (0x000323e1) popup_call_poc_act_window_ParamLimits

0x4547,	// (0x000323e1) popup_call_poc_act_window

0x456b,	// (0x00032405) popup_call_poc_inact_window_ParamLimits

0x456b,	// (0x00032405) popup_call_poc_inact_window

0xf590,	// (0x0003d42a) bg_popup_call_poc_act_pane_g

0xc33d,	// (0x0003a1d7) bg_popup_call_poc_inact_pane_g1

0xc345,	// (0x0003a1df) bg_popup_call_poc_inact_pane_g2

0xb46d,	// (0x00039307) popup_call_poc_act_window_g2

0xc34d,	// (0x0003a1e7) bg_popup_call_poc_inact_pane_g3

0xc355,	// (0x0003a1ef) bg_popup_call_poc_inact_pane_g4

0xc35d,	// (0x0003a1f7) bg_popup_call_poc_inact_pane_g5

0xb475,	// (0x0003930f) popup_call_poc_act_window_t1_ParamLimits

0xb475,	// (0x0003930f) popup_call_poc_act_window_t1

0xb49d,	// (0x00039337) popup_call_poc_act_window_t2_ParamLimits

0xb49d,	// (0x00039337) popup_call_poc_act_window_t2

0xb4c5,	// (0x0003935f) popup_call_poc_act_window_t3_ParamLimits

0xb4c5,	// (0x0003935f) popup_call_poc_act_window_t3

0xb4ed,	// (0x00039387) popup_call_poc_act_window_t4_ParamLimits

0xb4ed,	// (0x00039387) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0003d398) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0003d398) popup_call_poc_act_window_t

0xc365,	// (0x0003a1ff) bg_popup_call_poc_inact_pane_g6

0xc36d,	// (0x0003a207) bg_popup_call_poc_inact_pane_g7

0xc375,	// (0x0003a20f) bg_popup_call_poc_inact_pane_g8

0xb4ff,	// (0x00039399) popup_call_poc_inact_window_g2

0xc37d,	// (0x0003a217) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0003d417) bg_popup_call_poc_inact_pane_g

0xb507,	// (0x000393a1) popup_call_poc_inact_window_t1_ParamLimits

0xb507,	// (0x000393a1) popup_call_poc_inact_window_t1

0xb51c,	// (0x000393b6) popup_call_poc_inact_window_t2_ParamLimits

0xb51c,	// (0x000393b6) popup_call_poc_inact_window_t2

0xb531,	// (0x000393cb) popup_call_poc_inact_window_t3_ParamLimits

0xb531,	// (0x000393cb) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0003d3a1) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0003d3a1) popup_call_poc_inact_window_t

0xc502,	// (0x0003a39c) context_pane_ParamLimits

0x4b44,	// (0x000329de) signal_pane_ParamLimits

0xa5e9,	// (0x00038483) main_call2_pane

0x4ad3,	// (0x0003296d) popup_phob_thumbnail2_window_ParamLimits

0x4ad3,	// (0x0003296d) popup_phob_thumbnail2_window

0x4181,	// (0x0003201b) aid_hotspot_pointer_arrow_pane

0x4189,	// (0x00032023) aid_hotspot_pointer_hand_pane

0x48b4,	// (0x0003274e) phob_pre_status_pane_g5

0x2409,	// (0x000302a3) cams_zoom_pane_ParamLimits

0x2418,	// (0x000302b2) image_vga_pane_ParamLimits

0x2432,	// (0x000302cc) main_camera_pane_g1_ParamLimits

0x2444,	// (0x000302de) main_camera_pane_g2_ParamLimits

0x2454,	// (0x000302ee) main_camera_pane_g3_ParamLimits

0x2464,	// (0x000302fe) main_camera_pane_g4_ParamLimits

0x2474,	// (0x0003030e) main_camera_pane_g5_ParamLimits

0x2484,	// (0x0003031e) main_camera_pane_g6_ParamLimits

0x2496,	// (0x00030330) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0003d0a0) main_camera_pane_g_ParamLimits

0x24a6,	// (0x00030340) main_camera_pane_t1_ParamLimits

0x24bc,	// (0x00030356) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0003d0b1) main_camera_pane_t_ParamLimits

0xa356,	// (0x000381f0) bg_popup_preview_window_pane_cp01_ParamLimits

0xa356,	// (0x000381f0) bg_popup_preview_window_pane_cp01

0xb546,	// (0x000393e0) popup_phob_thumbnail2_window_g1_ParamLimits

0xb546,	// (0x000393e0) popup_phob_thumbnail2_window_g1

0xa0fb,	// (0x00037f95) call2_cli_visual_pane

0x459f,	// (0x00032439) popup_call2_audio_conf_window_ParamLimits

0x459f,	// (0x00032439) popup_call2_audio_conf_window

0x45bf,	// (0x00032459) popup_call2_audio_first_window_ParamLimits

0x45bf,	// (0x00032459) popup_call2_audio_first_window

0x4655,	// (0x000324ef) popup_call2_audio_in_window_ParamLimits

0x4655,	// (0x000324ef) popup_call2_audio_in_window

0x469d,	// (0x00032537) popup_call2_audio_out_window_ParamLimits

0x469d,	// (0x00032537) popup_call2_audio_out_window

0x4707,	// (0x000325a1) popup_call2_audio_second_window_ParamLimits

0x4707,	// (0x000325a1) popup_call2_audio_second_window

0x476d,	// (0x00032607) popup_call2_audio_wait_window_ParamLimits

0x476d,	// (0x00032607) popup_call2_audio_wait_window

0xa0fb,	// (0x00037f95) bg_popup_call2_act_pane_cp03

0xa338,	// (0x000381d2) list_conf_pane_cp

0xb552,	// (0x000393ec) popup_call2_audio_conf_window_t1

0xad5e,	// (0x00038bf8) list_single_graphic_popup_conf2_pane_ParamLimits

0xad5e,	// (0x00038bf8) list_single_graphic_popup_conf2_pane

0xad71,	// (0x00038c0b) list_highlight_pane_cp04

0xb560,	// (0x000393fa) list_single_graphic_popup_conf2_pane_g1

0xad82,	// (0x00038c1c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0003d3a8) list_single_graphic_popup_conf2_pane_g

0xb56a,	// (0x00039404) list_single_graphic_popup_conf2_pane_t1

0xb578,	// (0x00039412) bg_popup_call2_act_pane_cp01_ParamLimits

0xb578,	// (0x00039412) bg_popup_call2_act_pane_cp01

0xb602,	// (0x0003949c) call_type_pane_cp05_ParamLimits

0xb602,	// (0x0003949c) call_type_pane_cp05

0xb656,	// (0x000394f0) popup_call2_audio_second_window_g1_ParamLimits

0xb656,	// (0x000394f0) popup_call2_audio_second_window_g1

0xb6aa,	// (0x00039544) popup_call2_audio_second_window_g2_ParamLimits

0xb6aa,	// (0x00039544) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0003d3ad) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0003d3ad) popup_call2_audio_second_window_g

0xb70f,	// (0x000395a9) popup_call2_audio_second_window_t1_ParamLimits

0xb70f,	// (0x000395a9) popup_call2_audio_second_window_t1

0xb7ca,	// (0x00039664) popup_call2_audio_second_window_t2_ParamLimits

0xb7ca,	// (0x00039664) popup_call2_audio_second_window_t2

0xb81d,	// (0x000396b7) popup_call2_audio_second_window_t3_ParamLimits

0xb81d,	// (0x000396b7) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0003d3b4) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0003d3b4) popup_call2_audio_second_window_t

0xa0fb,	// (0x00037f95) bg_popup_call2_in_pane_cp02

0xa105,	// (0x00037f9f) call_type_pane_cp04

0xa10d,	// (0x00037fa7) popup_call2_audio_wait_window_g1

0xa115,	// (0x00037faf) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003cf8f) popup_call2_audio_wait_window_g

0xa11d,	// (0x00037fb7) popup_call2_audio_wait_window_t3

0xb910,	// (0x000397aa) bg_popup_call2_act_pane_ParamLimits

0xb910,	// (0x000397aa) bg_popup_call2_act_pane

0xb9d0,	// (0x0003986a) call_type_pane_cp03_ParamLimits

0xb9d0,	// (0x0003986a) call_type_pane_cp03

0xba34,	// (0x000398ce) popup_call2_audio_first_window_g1_ParamLimits

0xba34,	// (0x000398ce) popup_call2_audio_first_window_g1

0xbaa4,	// (0x0003993e) popup_call2_audio_first_window_g2_ParamLimits

0xbaa4,	// (0x0003993e) popup_call2_audio_first_window_g2

0xb12c,	// (0x00038fc6) popup_call2_audio_first_window_g3_ParamLimits

0xb12c,	// (0x00038fc6) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0003d3bd) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0003d3bd) popup_call2_audio_first_window_g

0xbb82,	// (0x00039a1c) popup_call2_audio_first_window_t1_ParamLimits

0xbb82,	// (0x00039a1c) popup_call2_audio_first_window_t1

0xbc85,	// (0x00039b1f) popup_call2_audio_first_window_t4_ParamLimits

0xbc85,	// (0x00039b1f) popup_call2_audio_first_window_t4

0xbd68,	// (0x00039c02) popup_call2_audio_first_window_t5_ParamLimits

0xbd68,	// (0x00039c02) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0003d3c8) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0003d3c8) popup_call2_audio_first_window_t

0xa34e,	// (0x000381e8) bg_popup_call2_act_pane_g1

0xc3d5,	// (0x0003a26f) popup_cale_lunar_info_window_t1

0xc3e3,	// (0x0003a27d) popup_cale_lunar_info_window_t2

0xc3f1,	// (0x0003a28b) popup_cale_lunar_info_window_t3

0xa0fb,	// (0x00037f95) bg_popup_call2_bubble_pane

0xbe69,	// (0x00039d03) bg_popup_call2_in_pane_cp01_ParamLimits

0xbe69,	// (0x00039d03) bg_popup_call2_in_pane_cp01

0x9dd7,	// (0x00037c71) call_type_pane_cp02

0xbeb1,	// (0x00039d4b) popup_call2_audio_out_window_g1_ParamLimits

0xbeb1,	// (0x00039d4b) popup_call2_audio_out_window_g1

0xbedd,	// (0x00039d77) popup_call2_audio_out_window_g2_ParamLimits

0xbedd,	// (0x00039d77) popup_call2_audio_out_window_g2

0xbf05,	// (0x00039d9f) popup_call2_audio_out_window_g3_ParamLimits

0xbf05,	// (0x00039d9f) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0003d3d1) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0003d3d1) popup_call2_audio_out_window_g

0xbf40,	// (0x00039dda) popup_call2_audio_out_window_t1_ParamLimits

0xbf40,	// (0x00039dda) popup_call2_audio_out_window_t1

0xbf9f,	// (0x00039e39) popup_call2_audio_out_window_t2_ParamLimits

0xbf9f,	// (0x00039e39) popup_call2_audio_out_window_t2

0xbff3,	// (0x00039e8d) popup_call2_audio_out_window_t3_ParamLimits

0xbff3,	// (0x00039e8d) popup_call2_audio_out_window_t3

0xc009,	// (0x00039ea3) popup_call2_audio_out_window_t4_ParamLimits

0xc009,	// (0x00039ea3) popup_call2_audio_out_window_t4

0xc01f,	// (0x00039eb9) popup_call2_audio_out_window_t5_ParamLimits

0xc01f,	// (0x00039eb9) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0003d3da) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0003d3da) popup_call2_audio_out_window_t

0xc083,	// (0x00039f1d) bg_popup_call2_in_pane_ParamLimits

0xc083,	// (0x00039f1d) bg_popup_call2_in_pane

0xc0df,	// (0x00039f79) popup_call2_audio_in_window_g1_ParamLimits

0xc0df,	// (0x00039f79) popup_call2_audio_in_window_g1

0xc117,	// (0x00039fb1) popup_call2_audio_in_window_g2_ParamLimits

0xc117,	// (0x00039fb1) popup_call2_audio_in_window_g2

0xc14f,	// (0x00039fe9) popup_call2_audio_in_window_g3_ParamLimits

0xc14f,	// (0x00039fe9) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0003d3e7) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0003d3e7) popup_call2_audio_in_window_g

0xc1a7,	// (0x0003a041) popup_call2_audio_in_window_t1_ParamLimits

0xc1a7,	// (0x0003a041) popup_call2_audio_in_window_t1

0xc227,	// (0x0003a0c1) popup_call2_audio_in_window_t2_ParamLimits

0xc227,	// (0x0003a0c1) popup_call2_audio_in_window_t2

0xc2a7,	// (0x0003a141) popup_call2_audio_in_window_t3_ParamLimits

0xc2a7,	// (0x0003a141) popup_call2_audio_in_window_t3

0xc2c1,	// (0x0003a15b) popup_call2_audio_in_window_t4_ParamLimits

0xc2c1,	// (0x0003a15b) popup_call2_audio_in_window_t4

0xc2d3,	// (0x0003a16d) popup_call2_audio_in_window_t5_ParamLimits

0xc2d3,	// (0x0003a16d) popup_call2_audio_in_window_t5

0xc2e8,	// (0x0003a182) popup_call2_audio_in_window_t6_ParamLimits

0xc2e8,	// (0x0003a182) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0003d3f0) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0003d3f0) popup_call2_audio_in_window_t

0xa34e,	// (0x000381e8) bg_popup_call2_in_pane_g1

0xc3ff,	// (0x0003a299) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0003d458) popup_cale_lunar_info_window_t

0xa356,	// (0x000381f0) bg_popup_call2_rect_pane_ParamLimits

0xa356,	// (0x000381f0) bg_popup_call2_rect_pane

0xa0fb,	// (0x00037f95) call2_cli_visual_graphic_pane

0xa0fb,	// (0x00037f95) call2_cli_visual_text_pane

0x4bd1,	// (0x00032a6b) smil_status_volume_pane_g3

0x0002,

0xa470,	// (0x0003830a) call2_cli_visual_graphic_pane_g1

0xa470,	// (0x0003830a) call2_cli_visual_graphic_pane_g2

0xa470,	// (0x0003830a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0003d3fd) call2_cli_visual_graphic_pane_g

0xc2fd,	// (0x0003a197) bg_popup_call2_rect_pane_g1

0xa505,	// (0x0003839f) bg_popup_call2_rect_pane_g2

0xc305,	// (0x0003a19f) bg_popup_call2_rect_pane_g3

0xc30d,	// (0x0003a1a7) bg_popup_call2_rect_pane_g4

0xc315,	// (0x0003a1af) bg_popup_call2_rect_pane_g5

0xc31d,	// (0x0003a1b7) bg_popup_call2_rect_pane_g6

0xc325,	// (0x0003a1bf) bg_popup_call2_rect_pane_g7

0xc32d,	// (0x0003a1c7) bg_popup_call2_rect_pane_g8

0xc335,	// (0x0003a1cf) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0003d404) bg_popup_call2_rect_pane_g

0xc33d,	// (0x0003a1d7) bg_popup_call2_bubble_pane_g1

0xc345,	// (0x0003a1df) bg_popup_call2_bubble_pane_g2

0xc34d,	// (0x0003a1e7) bg_popup_call2_bubble_pane_g3

0xc355,	// (0x0003a1ef) bg_popup_call2_bubble_pane_g4

0xc35d,	// (0x0003a1f7) bg_popup_call2_bubble_pane_g5

0xc365,	// (0x0003a1ff) bg_popup_call2_bubble_pane_g6

0xc36d,	// (0x0003a207) bg_popup_call2_bubble_pane_g7

0xc375,	// (0x0003a20f) bg_popup_call2_bubble_pane_g8

0xc37d,	// (0x0003a217) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0003d417) bg_popup_call2_bubble_pane_g

0x1f14,	// (0x0002fdae) aid_cale_week_size_cell_pane

0x24d2,	// (0x0003036c) aid_cams_cif_uncrop_pane_ParamLimits

0x24d2,	// (0x0003036c) aid_cams_cif_uncrop_pane

0x2682,	// (0x0003051c) aid_cams_size_cell_ParamLimits

0x2682,	// (0x0003051c) aid_cams_size_cell

0x2696,	// (0x00030530) grid_cams_pane_ParamLimits

0x26b0,	// (0x0003054a) linegrid_cams_pane_ParamLimits

0x28ad,	// (0x00030747) call_video_pane_t1

0x28cb,	// (0x00030765) call_video_pane_t2

0x0001,

0xf26a,	// (0x0003d104) call_video_pane_t

0x2cf9,	// (0x00030b93) aid_cale_month_size_cell_pane_ParamLimits

0x2cf9,	// (0x00030b93) aid_cale_month_size_cell_pane

0xf607,	// (0x0003d4a1) smil_status_volume_pane_g

0x4bde,	// (0x00032a78) volume_smil_pane_ParamLimits

0x1a31,	// (0x0002f8cb) aid_popup2_width_pane

0x1e26,	// (0x0002fcc0) cell_qdial_pane_g4_ParamLimits

0x1e26,	// (0x0002fcc0) cell_qdial_pane_g4

0x3c03,	// (0x00031a9d) aid_blid_cardinal_pane_ParamLimits

0x3c0f,	// (0x00031aa9) aid_blid_destination_pane_ParamLimits

0x3c0f,	// (0x00031aa9) aid_blid_destination_pane

0xa356,	// (0x000381f0) bg_popup_call_poc_act_pane_ParamLimits

0xa356,	// (0x000381f0) bg_popup_call_poc_act_pane

0xa356,	// (0x000381f0) bg_popup_call_poc_inact_pane_ParamLimits

0xa356,	// (0x000381f0) bg_popup_call_poc_inact_pane

0xc385,	// (0x0003a21f) bg_popup_call_poc_act_pane_g1

0xc38d,	// (0x0003a227) bg_popup_call_poc_act_pane_g2

0xc395,	// (0x0003a22f) bg_popup_call_poc_act_pane_g3

0xc355,	// (0x0003a1ef) bg_popup_call_poc_act_pane_g4

0xc35d,	// (0x0003a1f7) bg_popup_call_poc_act_pane_g5

0xc39d,	// (0x0003a237) bg_popup_call_poc_act_pane_g6

0xc36d,	// (0x0003a207) bg_popup_call_poc_act_pane_g7

0xc3a5,	// (0x0003a23f) bg_popup_call_poc_act_pane_g8

0xa0fb,	// (0x00037f95) main_usb_pane

0x4aae,	// (0x00032948) popup_cale_lunar_info_window

0x2ba5,	// (0x00030a3f) im_reading_pane_t1_ParamLimits

0xa6ea,	// (0x00038584) list_im_pane_ParamLimits

0xa6fb,	// (0x00038595) scroll_pane_cp07_ParamLimits

0xa0fb,	// (0x00037f95) grid_highlight_pane_cp012

0xa356,	// (0x000381f0) mup_scale_pane_ParamLimits

0xb299,	// (0x00039133) main_usb_pane_g1_ParamLimits

0xb299,	// (0x00039133) main_usb_pane_g1

0x47c9,	// (0x00032663) main_usb_pane_g2_ParamLimits

0x47c9,	// (0x00032663) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0003d441) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0003d441) main_usb_pane_g

0x47df,	// (0x00032679) main_usb_pane_t1_ParamLimits

0x47df,	// (0x00032679) main_usb_pane_t1

0x47f1,	// (0x0003268b) main_usb_pane_t2_ParamLimits

0x47f1,	// (0x0003268b) main_usb_pane_t2

0x4803,	// (0x0003269d) main_usb_pane_t3_ParamLimits

0x4803,	// (0x0003269d) main_usb_pane_t3

0x4815,	// (0x000326af) main_usb_pane_t4_ParamLimits

0x4815,	// (0x000326af) main_usb_pane_t4

0x4827,	// (0x000326c1) main_usb_pane_t5_ParamLimits

0x4827,	// (0x000326c1) main_usb_pane_t5

0x4839,	// (0x000326d3) main_usb_pane_t6_ParamLimits

0x4839,	// (0x000326d3) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0003d446) main_usb_pane_t_ParamLimits

0x3bb2,	// (0x00031a4c) aid_text_placing

0x3bbb,	// (0x00031a55) main_location2_pane_t1_ParamLimits

0x3bcd,	// (0x00031a67) main_location2_pane_t2_ParamLimits

0x3bdf,	// (0x00031a79) main_location2_pane_t3_ParamLimits

0x3bf1,	// (0x00031a8b) main_location2_pane_t4_ParamLimits

0x3bf1,	// (0x00031a8b) main_location2_pane_t4

0xf3cb,	// (0x0003d265) main_location2_pane_t_ParamLimits

0xa392,	// (0x0003822c) find_pinb_pane_g2_ParamLimits

0xa392,	// (0x0003822c) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0003cfb5) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0003cfb5) find_pinb_pane_g

0xa39e,	// (0x00038238) find_pinb_pane_t1_ParamLimits

0xa3b0,	// (0x0003824a) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0003cfba) find_pinb_pane_t_ParamLimits

0xa0fb,	// (0x00037f95) main_call3_pane

0x31e4,	// (0x0003107e) cale_month_day_heading_pane_t1_ParamLimits

0x326a,	// (0x00031104) cale_month_day_heading_pane_t2_ParamLimits

0x32e3,	// (0x0003117d) cale_month_day_heading_pane_t3_ParamLimits

0x335c,	// (0x000311f6) cale_month_day_heading_pane_t4_ParamLimits

0x33dd,	// (0x00031277) cale_month_day_heading_pane_t5_ParamLimits

0x3466,	// (0x00031300) cale_month_day_heading_pane_t6_ParamLimits

0x34ef,	// (0x00031389) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0003d13c) cale_month_day_heading_pane_t_ParamLimits

0xa945,	// (0x000387df) smil_status_volume_pane

0x42c4,	// (0x0003215e) postcard_address_pane_ParamLimits

0x42c4,	// (0x0003215e) postcard_address_pane

0x42d6,	// (0x00032170) postcard_message_pane_ParamLimits

0x42d6,	// (0x00032170) postcard_message_pane

0x47a7,	// (0x00032641) call2_cli_visual_pane_t1_ParamLimits

0x47a7,	// (0x00032641) call2_cli_visual_pane_t1

0x4d93,	// (0x00032c2d) postcard_message_pane_t1_ParamLimits

0x4d93,	// (0x00032c2d) postcard_message_pane_t1

0x4d7c,	// (0x00032c16) postcard_address_pane_t1_ParamLimits

0x4d7c,	// (0x00032c16) postcard_address_pane_t1

0x4d68,	// (0x00032c02) popup_call3_audio_in_window_ParamLimits

0x4d68,	// (0x00032c02) popup_call3_audio_in_window

0x4bf3,	// (0x00032a8d) bg_popup_call3_in_pane_ParamLimits

0x4bf3,	// (0x00032a8d) bg_popup_call3_in_pane

0x4c69,	// (0x00032b03) popup_call3_audio_in_window_g1_ParamLimits

0x4c69,	// (0x00032b03) popup_call3_audio_in_window_g1

0x4c89,	// (0x00032b23) popup_call3_audio_in_window_g2_ParamLimits

0x4c89,	// (0x00032b23) popup_call3_audio_in_window_g2

0x4ca9,	// (0x00032b43) popup_call3_audio_in_window_g3_ParamLimits

0x4ca9,	// (0x00032b43) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0003d4a8) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0003d4a8) popup_call3_audio_in_window_g

0x4cda,	// (0x00032b74) popup_call3_audio_in_window_t1_ParamLimits

0x4cda,	// (0x00032b74) popup_call3_audio_in_window_t1

0x4d18,	// (0x00032bb2) popup_call3_audio_in_window_t2_ParamLimits

0x4d18,	// (0x00032bb2) popup_call3_audio_in_window_t2

0x4d56,	// (0x00032bf0) popup_call3_audio_in_window_t3_ParamLimits

0x4d56,	// (0x00032bf0) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0003d4b1) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0003d4b1) popup_call3_audio_in_window_t

0xa5e9,	// (0x00038483) bg_popup_call3_rect_pane

0xc2fd,	// (0x0003a197) bg_popup_call3_rect_pane_g1

0xa505,	// (0x0003839f) bg_popup_call3_rect_pane_g2

0xc305,	// (0x0003a19f) bg_popup_call3_rect_pane_g3

0xc30d,	// (0x0003a1a7) bg_popup_call3_rect_pane_g4

0xc315,	// (0x0003a1af) bg_popup_call3_rect_pane_g5

0xc31d,	// (0x0003a1b7) bg_popup_call3_rect_pane_g6

0xc325,	// (0x0003a1bf) bg_popup_call3_rect_pane_g7

0x3f05,	// (0x00031d9f) mup_visualizer_osc_pane

0xb13a,	// (0x00038fd4) mup_visualizer_spec_pane

0x4c23,	// (0x00032abd) call3_video_qcif_pane_ParamLimits

0x4c23,	// (0x00032abd) call3_video_qcif_pane

0x4c36,	// (0x00032ad0) call3_video_qcif_uncrop_pane_ParamLimits

0x4c36,	// (0x00032ad0) call3_video_qcif_uncrop_pane

0x4c44,	// (0x00032ade) call3_video_subqcif_pane_ParamLimits

0x4c44,	// (0x00032ade) call3_video_subqcif_pane

0x4c58,	// (0x00032af2) call3_video_subqcif_uncrop_pane_ParamLimits

0x4c58,	// (0x00032af2) call3_video_subqcif_uncrop_pane

0x4cc9,	// (0x00032b63) popup_call3_audio_in_window_g4_ParamLimits

0x4cc9,	// (0x00032b63) popup_call3_audio_in_window_g4

0x4bc0,	// (0x00032a5a) mup_spec_half_pane

0x4bc9,	// (0x00032a63) mup_spec_half_pane_cp

0xc562,	// (0x0003a3fc) mup_osc_middle_pane

0xc56b,	// (0x0003a405) mup_visualizer_osc_pane_g1

0x4ba0,	// (0x00032a3a) mup_spec_bar_pane_ParamLimits

0x4ba0,	// (0x00032a3a) mup_spec_bar_pane

0xc54f,	// (0x0003a3e9) mup_spec_bar_pane_g1

0xc559,	// (0x0003a3f3) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0003d49c) mup_spec_bar_pane_g

0x1f14,	// (0x0002fdae) aid_cale_week_size_cell_pane_ParamLimits

0x1f2e,	// (0x0002fdc8) bg_cale_heading_pane_ParamLimits

0xa542,	// (0x000383dc) bg_cale_pane_cp01_ParamLimits

0x1f46,	// (0x0002fde0) cale_week_corner_pane_ParamLimits

0x1f65,	// (0x0002fdff) cale_week_day_heading_pane_ParamLimits

0x1f82,	// (0x0002fe1c) cale_week_scroll_pane_g1_ParamLimits

0x1f95,	// (0x0002fe2f) cale_week_scroll_pane_g2_ParamLimits

0x1fad,	// (0x0002fe47) cale_week_scroll_pane_g3_ParamLimits

0x1fc5,	// (0x0002fe5f) cale_week_scroll_pane_g4_ParamLimits

0x1fdd,	// (0x0002fe77) cale_week_scroll_pane_g5_ParamLimits

0x1ffd,	// (0x0002fe97) cale_week_scroll_pane_g6_ParamLimits

0x201d,	// (0x0002feb7) cale_week_scroll_pane_g7_ParamLimits

0x203d,	// (0x0002fed7) cale_week_scroll_pane_g8_ParamLimits

0x2061,	// (0x0002fefb) cale_week_scroll_pane_g9_ParamLimits

0x2079,	// (0x0002ff13) cale_week_scroll_pane_g10_ParamLimits

0x2091,	// (0x0002ff2b) cale_week_scroll_pane_g11_ParamLimits

0x20a9,	// (0x0002ff43) cale_week_scroll_pane_g12_ParamLimits

0x20c1,	// (0x0002ff5b) cale_week_scroll_pane_g13_ParamLimits

0x20c1,	// (0x0002ff5b) cale_week_scroll_pane_g14_ParamLimits

0x20c1,	// (0x0002ff5b) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0003d046) cale_week_scroll_pane_g_ParamLimits

0x20fd,	// (0x0002ff97) cale_week_time_pane_ParamLimits

0x2121,	// (0x0002ffbb) grid_cale_week_pane_ParamLimits

0xa55f,	// (0x000383f9) listscroll_cale_week_pane_t1

0xa571,	// (0x0003840b) scroll_pane_cp08_ParamLimits

0x2d59,	// (0x00030bf3) cale_month_corner_pane_ParamLimits

0xa91b,	// (0x000387b5) cale_month_pane_t1

0x3177,	// (0x00031011) cale_month_week_pane_ParamLimits

0x399b,	// (0x00031835) popup_call_status_window_g1_ParamLimits

0x39af,	// (0x00031849) popup_call_status_window_g2_ParamLimits

0x39c3,	// (0x0003185d) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0003d1ec) popup_call_status_window_g_ParamLimits

0xacf1,	// (0x00038b8b) aid_call2_pane

0x4173,	// (0x0003200d) msg_header_pane_g1

0x42c4,	// (0x0003215e) postcard_address2_pane_ParamLimits

0x42c4,	// (0x0003215e) postcard_address2_pane

0x42d6,	// (0x00032170) postcard_message2_pane_ParamLimits

0x42d6,	// (0x00032170) postcard_message2_pane

0x4b52,	// (0x000329ec) message2_row_pane_ParamLimits

0x4b52,	// (0x000329ec) message2_row_pane

0x4b6e,	// (0x00032a08) address2_row_pane_ParamLimits

0x4b6e,	// (0x00032a08) address2_row_pane

0xc51d,	// (0x0003a3b7) postcard_message2_row_pane_g1

0xc525,	// (0x0003a3bf) postcard_message2_row_pane_t1

0xc51d,	// (0x0003a3b7) address2_row_pane_g1

0xc525,	// (0x0003a3bf) address2_row_pane_t1

0x2381,	// (0x0003021b) aid_size_cell_vorec

0xa0fb,	// (0x00037f95) main_rss_pane

0x4b81,	// (0x00032a1b) rss_list_single_pane_ParamLimits

0x4b81,	// (0x00032a1b) rss_list_single_pane

0xc533,	// (0x0003a3cd) rss_list_single_pane_t1

0xc541,	// (0x0003a3db) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0003d497) rss_list_single_pane_t

0xa0fb,	// (0x00037f95) main_camera2_pane

0xa0fb,	// (0x00037f95) main_video2_pane

0x0920,	// (0x0002e7ba) cams_zoom_pane_cp2_ParamLimits

0x0920,	// (0x0002e7ba) cams_zoom_pane_cp2

0x0940,	// (0x0002e7da) image2_vga_pane_ParamLimits

0x0940,	// (0x0002e7da) image2_vga_pane

0x0991,	// (0x0002e82b) main_camera2_pane_g1_ParamLimits

0x0991,	// (0x0002e82b) main_camera2_pane_g1

0x09b1,	// (0x0002e84b) main_camera2_pane_g2_ParamLimits

0x09b1,	// (0x0002e84b) main_camera2_pane_g2

0x09d1,	// (0x0002e86b) main_camera2_pane_g3_ParamLimits

0x09d1,	// (0x0002e86b) main_camera2_pane_g3

0x09f1,	// (0x0002e88b) main_camera2_pane_g4_ParamLimits

0x09f1,	// (0x0002e88b) main_camera2_pane_g4

0x0a11,	// (0x0002e8ab) main_camera2_pane_g5_ParamLimits

0x0a11,	// (0x0002e8ab) main_camera2_pane_g5

0x0a31,	// (0x0002e8cb) main_camera2_pane_g6_ParamLimits

0x0a31,	// (0x0002e8cb) main_camera2_pane_g6

0x0a51,	// (0x0002e8eb) main_camera2_pane_g7_ParamLimits

0x0a51,	// (0x0002e8eb) main_camera2_pane_g7

0x0a71,	// (0x0002e90b) main_camera2_pane_g8_ParamLimits

0x0a71,	// (0x0002e90b) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0003d4b8) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0003d4b8) main_camera2_pane_g

0x0ab1,	// (0x0002e94b) main_camera2_pane_t1_ParamLimits

0x0ab1,	// (0x0002e94b) main_camera2_pane_t1

0x0ae6,	// (0x0002e980) main_camera2_pane_t2_ParamLimits

0x0ae6,	// (0x0002e980) main_camera2_pane_t2

0x0b0c,	// (0x0002e9a6) main_camera2_pane_t3_ParamLimits

0x0b0c,	// (0x0002e9a6) main_camera2_pane_t3

0x0b6a,	// (0x0002ea04) main_camera2_pane_t4_ParamLimits

0x0b6a,	// (0x0002ea04) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0003d4cb) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0003d4cb) main_camera2_pane_t

0x0bfc,	// (0x0002ea96) cams_zoom_pane_cp4_ParamLimits

0x0bfc,	// (0x0002ea96) cams_zoom_pane_cp4

0x0c12,	// (0x0002eaac) image2_cif_pane_ParamLimits

0x0c12,	// (0x0002eaac) image2_cif_pane

0x0c3d,	// (0x0002ead7) image2_subqcif_pane_ParamLimits

0x0c3d,	// (0x0002ead7) image2_subqcif_pane

0x0c57,	// (0x0002eaf1) main_video2_pane_g1_ParamLimits

0x0c57,	// (0x0002eaf1) main_video2_pane_g1

0x0c71,	// (0x0002eb0b) main_video2_pane_g2_ParamLimits

0x0c71,	// (0x0002eb0b) main_video2_pane_g2

0x0c87,	// (0x0002eb21) main_video2_pane_g3_ParamLimits

0x0c87,	// (0x0002eb21) main_video2_pane_g3

0x0c9d,	// (0x0002eb37) main_video2_pane_g4_ParamLimits

0x0c9d,	// (0x0002eb37) main_video2_pane_g4

0x0cb3,	// (0x0002eb4d) main_video2_pane_g5_ParamLimits

0x0cb3,	// (0x0002eb4d) main_video2_pane_g5

0x0cc9,	// (0x0002eb63) main_video2_pane_g6_ParamLimits

0x0cc9,	// (0x0002eb63) main_video2_pane_g6

0x0005,

0xf640,	// (0x0003d4da) main_video2_pane_g_ParamLimits

0xf640,	// (0x0003d4da) main_video2_pane_g

0x0ce3,	// (0x0002eb7d) main_video2_pane_t1_ParamLimits

0x0ce3,	// (0x0002eb7d) main_video2_pane_t1

0x0d07,	// (0x0002eba1) main_video2_pane_t2_ParamLimits

0x0d07,	// (0x0002eba1) main_video2_pane_t2

0x0d55,	// (0x0002ebef) main_video2_pane_t3_ParamLimits

0x0d55,	// (0x0002ebef) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0003d4e7) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0003d4e7) main_video2_pane_t

0x48f4,	// (0x0003278e) call_muted_g2

0x0001,

0xf5ef,	// (0x0003d489) call_muted_g

0xa0fb,	// (0x00037f95) main_mup2_pane

0x4dde,	// (0x00032c78) main_mup2_pane_g1_ParamLimits

0x4dde,	// (0x00032c78) main_mup2_pane_g1

0x4dea,	// (0x00032c84) main_mup2_pane_g2_ParamLimits

0x4dea,	// (0x00032c84) main_mup2_pane_g2

0x5059,	// (0x00032ef3) main_mup_pane_g13_cp1

0x5061,	// (0x00032efb) mup_volume_pane_cp1

0x4e06,	// (0x00032ca0) main_mup2_pane_g4_ParamLimits

0x4e06,	// (0x00032ca0) main_mup2_pane_g4

0x4e18,	// (0x00032cb2) main_mup2_pane_g5_ParamLimits

0x4e18,	// (0x00032cb2) main_mup2_pane_g5

0x4e2a,	// (0x00032cc4) main_mup2_pane_g6_ParamLimits

0x4e2a,	// (0x00032cc4) main_mup2_pane_g6

0x4e3c,	// (0x00032cd6) main_mup2_pane_g7_ParamLimits

0x4e3c,	// (0x00032cd6) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0003d4ee) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0003d4ee) main_mup2_pane_g

0x4e54,	// (0x00032cee) main_mup2_pane_t1_ParamLimits

0x4e54,	// (0x00032cee) main_mup2_pane_t1

0x4e6a,	// (0x00032d04) main_mup2_pane_t2_ParamLimits

0x4e6a,	// (0x00032d04) main_mup2_pane_t2

0x4e80,	// (0x00032d1a) main_mup2_pane_t3_ParamLimits

0x4e80,	// (0x00032d1a) main_mup2_pane_t3

0x4e96,	// (0x00032d30) main_mup2_pane_t4_ParamLimits

0x4e96,	// (0x00032d30) main_mup2_pane_t4

0x4eae,	// (0x00032d48) main_mup2_pane_t5_ParamLimits

0x4eae,	// (0x00032d48) main_mup2_pane_t5

0x4ec6,	// (0x00032d60) main_mup2_pane_t6_ParamLimits

0x4ec6,	// (0x00032d60) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0003d4fd) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0003d4fd) main_mup2_pane_t

0x4ef6,	// (0x00032d90) mup2_visualizer_pane_ParamLimits

0x4ef6,	// (0x00032d90) mup2_visualizer_pane

0x4f24,	// (0x00032dbe) mup_progress_pane_cp_ParamLimits

0x4f24,	// (0x00032dbe) mup_progress_pane_cp

0x5044,	// (0x00032ede) mup_volume_pane_cp_ParamLimits

0x5044,	// (0x00032ede) mup_volume_pane_cp

0x4f38,	// (0x00032dd2) mup2_visualizer_pane_g1_ParamLimits

0x4f38,	// (0x00032dd2) mup2_visualizer_pane_g1

0xc5a2,	// (0x0003a43c) mup2_visualizer_pane_g2_ParamLimits

0xc5a2,	// (0x0003a43c) mup2_visualizer_pane_g2

0x4f4f,	// (0x00032de9) mup2_visualizer_pane_g3_ParamLimits

0x4f4f,	// (0x00032de9) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0003d50a) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0003d50a) mup2_visualizer_pane_g

0xb3e2,	// (0x0003927c) aid_size_cell_fmradio

0x0606,	// (0x0002e4a0) aid_height_parent_landcape

0xa779,	// (0x00038613) wml_content_pane_cp

0xa781,	// (0x0003861b) wml_tabs_pane

0xa78a,	// (0x00038624) popup_wml_miniature_window

0xa792,	// (0x0003862c) scroll_pane_cp021

0xa7a6,	// (0x00038640) wml_content_pane_comp8

0xa0fb,	// (0x00037f95) bg_popup_sub_pane_cp05

0xc5c0,	// (0x0003a45a) popup_wml_miniature_window_g1

0xc5c8,	// (0x0003a462) wml_miniature_view_pane

0x4f5b,	// (0x00032df5) aid_size_wml_view

0x4f63,	// (0x00032dfd) wml_miniature_view_pane_g1

0x4f6c,	// (0x00032e06) wml_miniature_view_pane_g2

0x4f75,	// (0x00032e0f) wml_miniature_view_pane_g3

0x4f7d,	// (0x00032e17) wml_miniature_view_pane_g4

0x4f85,	// (0x00032e1f) wml_miniature_view_pane_g5

0x4f8d,	// (0x00032e27) wml_miniature_view_pane_g6

0x4f95,	// (0x00032e2f) wml_miniature_view_pane_g7

0x4f9d,	// (0x00032e37) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0003d511) wml_miniature_view_pane_g

0xc5d0,	// (0x0003a46a) background_graphic_ParamLimits

0xc5d0,	// (0x0003a46a) background_graphic

0xc5dc,	// (0x0003a476) wml_tabs_2_pane

0xc5e5,	// (0x0003a47f) wml_tabs_3_pane_ParamLimits

0xc5e5,	// (0x0003a47f) wml_tabs_3_pane

0xc5f7,	// (0x0003a491) wml_tabs_4_pane_ParamLimits

0xc5f7,	// (0x0003a491) wml_tabs_4_pane

0xc60d,	// (0x0003a4a7) wml_tabs_5_pane_ParamLimits

0xc60d,	// (0x0003a4a7) wml_tabs_5_pane

0xc627,	// (0x0003a4c1) wml_tabs_pane_g2_ParamLimits

0xc627,	// (0x0003a4c1) wml_tabs_pane_g2

0xc63b,	// (0x0003a4d5) wml_tabs_pane_g3_ParamLimits

0xc63b,	// (0x0003a4d5) wml_tabs_pane_g3

0x4fa5,	// (0x00032e3f) wml_tabs_2_active_pane_ParamLimits

0x4fa5,	// (0x00032e3f) wml_tabs_2_active_pane

0x4fb9,	// (0x00032e53) wml_tabs_2_passive_pane_ParamLimits

0x4fb9,	// (0x00032e53) wml_tabs_2_passive_pane

0x4fcd,	// (0x00032e67) wml_tabs_3_active_pane_cp_ParamLimits

0x4fcd,	// (0x00032e67) wml_tabs_3_active_pane_cp

0x4fe2,	// (0x00032e7c) wml_tabs_3_passive_pane_ParamLimits

0x4fe2,	// (0x00032e7c) wml_tabs_3_passive_pane

0x4ff5,	// (0x00032e8f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ff5,	// (0x00032e8f) wml_tabs_3_passive_pane_cp

0x500c,	// (0x00032ea6) tabs_4_active_pane

0x5014,	// (0x00032eae) tabs_4_passive_pane

0x501e,	// (0x00032eb8) tabs_4_passive_pane_cp

0x5026,	// (0x00032ec0) tabs_4_passive_pane_cp2

0x47c1,	// (0x0003265b) aid_height_text

0x3edb,	// (0x00031d75) mup_volume_cont_pane_ParamLimits

0x3edb,	// (0x00031d75) mup_volume_cont_pane

0x1baa,	// (0x0002fa44) aid_size_cell_pinb

0x1bb4,	// (0x0002fa4e) aid_size_list_pinb

0x4f10,	// (0x00032daa) mup2_volume_cont_pane_ParamLimits

0x4f10,	// (0x00032daa) mup2_volume_cont_pane

0x5030,	// (0x00032eca) mup2_volume_cont_pane_g1_ParamLimits

0x5030,	// (0x00032eca) mup2_volume_cont_pane_g1

0x0155,	// (0x0002dfef) aid_size_cell_touch_ParamLimits

0x0155,	// (0x0002dfef) aid_size_cell_touch

0x033d,	// (0x0002e1d7) touch_pane_ParamLimits

0x033d,	// (0x0002e1d7) touch_pane

0x1ae2,	// (0x0002f97c) main_rss2_pane

0xc658,	// (0x0003a4f2) listscroll_rss2_pane

0xc661,	// (0x0003a4fb) rss2_navigation_pane

0xc669,	// (0x0003a503) list_rss2_pane

0xae34,	// (0x00038cce) scroll_pane_cp22

0xc671,	// (0x0003a50b) rss2_navigation_pane_g1

0xc67a,	// (0x0003a514) rss2_navigation_pane_g2

0xc682,	// (0x0003a51c) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0003d522) rss2_navigation_pane_g

0xc68a,	// (0x0003a524) rss2_navigation_pane_t1

0x5069,	// (0x00032f03) rss2_list_single_pane_ParamLimits

0x5069,	// (0x00032f03) rss2_list_single_pane

0xc698,	// (0x0003a532) rss2_list_single_pane_t2

0xc6a6,	// (0x0003a540) rss2_list_single_pane_t3_ParamLimits

0xc6a6,	// (0x0003a540) rss2_list_single_pane_t3

0xc6c3,	// (0x0003a55d) rss2_list_single_pane_t4

0x3783,	// (0x0003161d) smil_status_pane_g1

0x1ac8,	// (0x0002f962) main_image2_pane_ParamLimits

0x1ac8,	// (0x0002f962) main_image2_pane

0x0a91,	// (0x0002e92b) main_camera2_pane_g9_ParamLimits

0x0a91,	// (0x0002e92b) main_camera2_pane_g9

0x0bbf,	// (0x0002ea59) main_camera2_pane_t5_ParamLimits

0x0bbf,	// (0x0002ea59) main_camera2_pane_t5

0x4dae,	// (0x00032c48) main_camera2_pane_t6_ParamLimits

0x4dae,	// (0x00032c48) main_camera2_pane_t6

0x507e,	// (0x00032f18) main_image2_pane_g1_ParamLimits

0x507e,	// (0x00032f18) main_image2_pane_g1

0x44fd,	// (0x00032397) smil2_video_pane_ParamLimits

0x44fd,	// (0x00032397) smil2_video_pane

0x1a3d,	// (0x0002f8d7) aid_zoom_text_primary_cp

0x1abe,	// (0x0002f958) popup_preview_fixed_window

0xa6e2,	// (0x0003857c) im_reading_pane_g1

0x0908,	// (0x0002e7a2) cams2_bc_adjust_pane_cp_ParamLimits

0x0908,	// (0x0002e7a2) cams2_bc_adjust_pane_cp

0x0bee,	// (0x0002ea88) cams2_bc_adjust_pane_ParamLimits

0x0bee,	// (0x0002ea88) cams2_bc_adjust_pane

0xd264,	// (0x0003b0fe) cams2_bc_adjust_pane_g1

0x5094,	// (0x00032f2e) cams2_slider_pane

0x509d,	// (0x00032f37) cams2_slider_pane_g1

0x50a6,	// (0x00032f40) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0003d529) cams2_slider_pane_g

0x03ad,	// (0x0002e247) calc_display_pane_ParamLimits

0x03d2,	// (0x0002e26c) calc_paper_pane_ParamLimits

0x03f5,	// (0x0002e28f) grid_calc_pane_ParamLimits

0x3a28,	// (0x000318c2) popup_clock_digital_window_t1_ParamLimits

0xb37f,	// (0x00039219) main_image_pane_t1

0x038f,	// (0x0002e229) aid_size_cell_calc_ParamLimits

0x038f,	// (0x0002e229) aid_size_cell_calc

0x065e,	// (0x0002e4f8) popup_blid_sat_info2_window_ParamLimits

0x065e,	// (0x0002e4f8) popup_blid_sat_info2_window

0xc6d9,	// (0x0003a573) aid_size_cell_blid

0xc6e1,	// (0x0003a57b) bg_popup_window_pane_cp07

0xc704,	// (0x0003a59e) grid_popup_blid_pane

0xc70e,	// (0x0003a5a8) heading_pane_cp05_ParamLimits

0xc70e,	// (0x0003a5a8) heading_pane_cp05

0xc7d8,	// (0x0003a672) cell_popup_blid_pane_ParamLimits

0xc7d8,	// (0x0003a672) cell_popup_blid_pane

0xc7fc,	// (0x0003a696) cell_popup_blid_pane_g1

0xc804,	// (0x0003a69e) cell_popup_blid_pane_t1

0x4ee0,	// (0x00032d7a) mup2_indicator_pane_ParamLimits

0x4ee0,	// (0x00032d7a) mup2_indicator_pane

0xa5e9,	// (0x00038483) mup2_visualizer_osc_pane

0xc5ae,	// (0x0003a448) mup2_visualizer_spec_pane_ParamLimits

0xc5ae,	// (0x0003a448) mup2_visualizer_spec_pane

0x50c0,	// (0x00032f5a) mup2_spec_half_pane

0x50c9,	// (0x00032f63) mup2_spec_half_pane_cp

0x50d1,	// (0x00032f6b) mup2_spec_bar_pane_ParamLimits

0x50d1,	// (0x00032f6b) mup2_spec_bar_pane

0xc54f,	// (0x0003a3e9) mup2_spec_bar_pane_g1

0xc559,	// (0x0003a3f3) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0003d49c) mup2_spec_bar_pane_g

0x50f1,	// (0x00032f8b) mup2_osc_middle_pane

0xc56b,	// (0x0003a405) mup2_visualizer_osc_pane_g1

0x9d08,	// (0x00037ba2) popup_number_entry_window_t1_ParamLimits

0x9d1b,	// (0x00037bb5) popup_number_entry_window_t2_ParamLimits

0x9d2d,	// (0x00037bc7) popup_number_entry_window_t3_ParamLimits

0x1aec,	// (0x0002f986) popup_number_entry_window_t5_ParamLimits

0x1aec,	// (0x0002f986) popup_number_entry_window_t5

0xf0c6,	// (0x0003cf60) popup_number_entry_window_t_ParamLimits

0x9d3f,	// (0x00037bd9) text_title_cp2_ParamLimits

0x4191,	// (0x0003202b) aid_hotspot_pointer_text2_pane

0x41e7,	// (0x00032081) main_viewer_pane_g9_ParamLimits

0x41e7,	// (0x00032081) main_viewer_pane_g9

0xa91b,	// (0x000387b5) cale_month_pane_t1_ParamLimits

0xa958,	// (0x000387f2) bg_cale_pane_ParamLimits

0xa970,	// (0x0003880a) list_cale_pane_ParamLimits

0xa981,	// (0x0003881b) listscroll_cale_day_pane_t1

0xa993,	// (0x0003882d) scroll_pane_cp09_ParamLimits

0x3f0d,	// (0x00031da7) main_mup_eq_pane_t1_ParamLimits

0x3f0d,	// (0x00031da7) main_mup_eq_pane_t1

0x3f27,	// (0x00031dc1) main_mup_eq_pane_t2_ParamLimits

0x3f27,	// (0x00031dc1) main_mup_eq_pane_t2

0x3f41,	// (0x00031ddb) main_mup_eq_pane_t3_ParamLimits

0x3f41,	// (0x00031ddb) main_mup_eq_pane_t3

0x3f5d,	// (0x00031df7) main_mup_eq_pane_t4_ParamLimits

0x3f5d,	// (0x00031df7) main_mup_eq_pane_t4

0x3f79,	// (0x00031e13) main_mup_eq_pane_t5_ParamLimits

0x3f79,	// (0x00031e13) main_mup_eq_pane_t5

0x3f95,	// (0x00031e2f) main_mup_eq_pane_t6_ParamLimits

0x3f95,	// (0x00031e2f) main_mup_eq_pane_t6

0x3fa9,	// (0x00031e43) main_mup_eq_pane_t7_ParamLimits

0x3fa9,	// (0x00031e43) main_mup_eq_pane_t7

0x3fbd,	// (0x00031e57) main_mup_eq_pane_t8_ParamLimits

0x3fbd,	// (0x00031e57) main_mup_eq_pane_t8

0x3fd1,	// (0x00031e6b) main_mup_eq_pane_t9_ParamLimits

0x3fd1,	// (0x00031e6b) main_mup_eq_pane_t9

0x3feb,	// (0x00031e85) main_mup_eq_pane_t10_ParamLimits

0x3feb,	// (0x00031e85) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0003d2eb) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0003d2eb) main_mup_eq_pane_t

0x409a,	// (0x00031f34) mup_equalizer_pane_cp5_ParamLimits

0x40ae,	// (0x00031f48) mup_equalizer_pane_cp6_ParamLimits

0x40c2,	// (0x00031f5c) mup_equalizer_pane_cp7_ParamLimits

0x1ae2,	// (0x0002f97c) main_gallery_pane

0xc574,	// (0x0003a40e) smil2_volume_pane

0xc57c,	// (0x0003a416) smil_status_volume_pane_g1_ParamLimits

0xc58f,	// (0x0003a429) smil_status_volume_pane_g2_ParamLimits

0x4bd1,	// (0x00032a6b) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0003d4a1) smil_status_volume_pane_g_ParamLimits

0xc6e1,	// (0x0003a57b) bg_popup_window_pane_cp07_ParamLimits

0xc6ef,	// (0x0003a589) blid_firmament_pane

0x50fa,	// (0x00032f94) aid_size_cell_gallery_ParamLimits

0x50fa,	// (0x00032f94) aid_size_cell_gallery

0x5110,	// (0x00032faa) grid_gallery_pane_ParamLimits

0x5110,	// (0x00032faa) grid_gallery_pane

0x5129,	// (0x00032fc3) cell_gallery_pane_ParamLimits

0x5129,	// (0x00032fc3) cell_gallery_pane

0xc812,	// (0x0003a6ac) bg_cell_gallery_focus_pane_ParamLimits

0xc812,	// (0x0003a6ac) bg_cell_gallery_focus_pane

0xc824,	// (0x0003a6be) cell_gallery_pane_g1_ParamLimits

0xc824,	// (0x0003a6be) cell_gallery_pane_g1

0x5172,	// (0x0003300c) cell_gallery_pane_g2_ParamLimits

0x5172,	// (0x0003300c) cell_gallery_pane_g2

0x517f,	// (0x00033019) cell_gallery_pane_g3_ParamLimits

0x517f,	// (0x00033019) cell_gallery_pane_g3

0xc830,	// (0x0003a6ca) cell_gallery_pane_g4_ParamLimits

0xc830,	// (0x0003a6ca) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0003d54f) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0003d54f) cell_gallery_pane_g

0xc83c,	// (0x0003a6d6) bg_cell_gallery_focus_pane_g1

0xc844,	// (0x0003a6de) bg_cell_gallery_focus_pane_g2

0xc84c,	// (0x0003a6e6) bg_cell_gallery_focus_pane_g3

0xc854,	// (0x0003a6ee) bg_cell_gallery_focus_pane_g4

0xc85c,	// (0x0003a6f6) bg_cell_gallery_focus_pane_g5

0xc864,	// (0x0003a6fe) bg_cell_gallery_focus_pane_g6

0xc86c,	// (0x0003a706) bg_cell_gallery_focus_pane_g7

0xc874,	// (0x0003a70e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0003d558) bg_cell_gallery_focus_pane_g

0xc87c,	// (0x0003a716) aid_firma_cardinal

0xc890,	// (0x0003a72a) blid_firmament_pane_t1

0xc8a7,	// (0x0003a741) blid_firmament_pane_t2

0xc8be,	// (0x0003a758) blid_firmament_pane_t3

0xc8d5,	// (0x0003a76f) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0003d569) blid_firmament_pane_t

0xc8ec,	// (0x0003a786) blid_sat_info_pane

0xc8fc,	// (0x0003a796) blid_sat_info_pane_g1

0xc8fc,	// (0x0003a796) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0003d572) blid_sat_info_pane_g

0xc906,	// (0x0003a7a0) blid_sat_info_pane_t1

0xc914,	// (0x0003a7ae) smil2_volume_content_pane

0xc91d,	// (0x0003a7b7) smil2_volume_pane_g1

0xa49c,	// (0x00038336) smil2_volume_content_pane_g1

0xc925,	// (0x0003a7bf) smil2_volume_content_pane_g2

0xc92e,	// (0x0003a7c8) smil2_volume_content_pane_g3

0xc937,	// (0x0003a7d1) smil2_volume_content_pane_g4

0xc940,	// (0x0003a7da) smil2_volume_content_pane_g5

0xc949,	// (0x0003a7e3) smil2_volume_content_pane_g6

0xc952,	// (0x0003a7ec) smil2_volume_content_pane_g7

0xc95b,	// (0x0003a7f5) smil2_volume_content_pane_g8

0xc964,	// (0x0003a7fe) smil2_volume_content_pane_g9

0xc96d,	// (0x0003a807) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0003d577) smil2_volume_content_pane_g

0x21d5,	// (0x0003006f) cale_week_day_heading_pane_t1_ParamLimits

0x21ff,	// (0x00030099) cale_week_day_heading_pane_t2_ParamLimits

0x222e,	// (0x000300c8) cale_week_day_heading_pane_t3_ParamLimits

0x225d,	// (0x000300f7) cale_week_day_heading_pane_t4_ParamLimits

0x228c,	// (0x00030126) cale_week_day_heading_pane_t5_ParamLimits

0x22c3,	// (0x0003015d) cale_week_day_heading_pane_t6_ParamLimits

0x22fa,	// (0x00030194) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0003d067) cale_week_day_heading_pane_t_ParamLimits

0xa58e,	// (0x00038428) bg_cale_side_pane_ParamLimits

0x04d2,	// (0x0002e36c) cale_week_time_pane_t1_ParamLimits

0x04ec,	// (0x0002e386) cale_week_time_pane_t2_ParamLimits

0x0506,	// (0x0002e3a0) cale_week_time_pane_t3_ParamLimits

0x0520,	// (0x0002e3ba) cale_week_time_pane_t4_ParamLimits

0x053a,	// (0x0002e3d4) cale_week_time_pane_t5_ParamLimits

0x0554,	// (0x0002e3ee) cale_week_time_pane_t6_ParamLimits

0x056e,	// (0x0002e408) cale_week_time_pane_t7_ParamLimits

0x0588,	// (0x0002e422) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0003d076) cale_week_time_pane_t_ParamLimits

0x2324,	// (0x000301be) cell_cale_week_pane_g2_ParamLimits

0xa58e,	// (0x00038428) bg_cale_side_pane_cp01_ParamLimits

0x3580,	// (0x0003141a) cale_month_week_pane_t1_ParamLimits

0x3599,	// (0x00031433) cale_month_week_pane_t2_ParamLimits

0x35b2,	// (0x0003144c) cale_month_week_pane_t3_ParamLimits

0x35cb,	// (0x00031465) cale_month_week_pane_t4_ParamLimits

0x35e4,	// (0x0003147e) cale_month_week_pane_t5_ParamLimits

0x35fd,	// (0x00031497) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0003d14b) cale_month_week_pane_t_ParamLimits

0x376e,	// (0x00031608) cell_cale_month_pane_g1_ParamLimits

0x1ae2,	// (0x0002f97c) main_cale_event_viewer_pane

0x9cde,	// (0x00037b78) listscroll_cale_event_viewer_pane

0xc976,	// (0x0003a810) list_cale_ev_pane

0xc97e,	// (0x0003a818) scroll_pane_cp023

0xc98a,	// (0x0003a824) field_cale_ev_pane_ParamLimits

0xc98a,	// (0x0003a824) field_cale_ev_pane

0xc9a8,	// (0x0003a842) field_cale_ev_content_pane_ParamLimits

0xc9a8,	// (0x0003a842) field_cale_ev_content_pane

0xc9b4,	// (0x0003a84e) field_cale_ev_pane_g1_ParamLimits

0xc9b4,	// (0x0003a84e) field_cale_ev_pane_g1

0xc9c0,	// (0x0003a85a) field_cale_ev_pane_g2_ParamLimits

0xc9c0,	// (0x0003a85a) field_cale_ev_pane_g2

0xc9d8,	// (0x0003a872) field_cale_ev_pane_g3_ParamLimits

0xc9d8,	// (0x0003a872) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0003d58c) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0003d58c) field_cale_ev_pane_g

0xc9f0,	// (0x0003a88a) field_cale_ev_pane_t1_ParamLimits

0xc9f0,	// (0x0003a88a) field_cale_ev_pane_t1

0xca07,	// (0x0003a8a1) field_cale_ev_content_pane_t1_ParamLimits

0xca07,	// (0x0003a8a1) field_cale_ev_content_pane_t1

0xb1ec,	// (0x00039086) bg_button_pane_cp01

0x1f02,	// (0x0002fd9c) listscroll_cale_week_pane_ParamLimits

0xa539,	// (0x000383d3) popup_toolbar_window_cp01

0xa55f,	// (0x000383f9) listscroll_cale_week_pane_t1_ParamLimits

0x1f02,	// (0x0002fd9c) listscroll_cale_day_pane_ParamLimits

0xa539,	// (0x000383d3) popup_toolbar_window_cp02

0xa981,	// (0x0003881b) listscroll_cale_day_pane_t1_ParamLimits

0x0624,	// (0x0002e4be) main_cale_month_pane_ParamLimits

0x4ae5,	// (0x0003297f) popup_toolbar_window_cp03_ParamLimits

0x4ae5,	// (0x0003297f) popup_toolbar_window_cp03

0x43c5,	// (0x0003225f) main_image_pane_g2_ParamLimits

0x43c5,	// (0x0003225f) main_image_pane_g2

0x43d6,	// (0x00032270) main_image_pane_g3_ParamLimits

0x43d6,	// (0x00032270) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0003d37d) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0003d37d) main_image_pane_g

0xb37f,	// (0x00039219) main_image_pane_t1_ParamLimits

0x43e7,	// (0x00032281) main_image_pane_t2_ParamLimits

0x43e7,	// (0x00032281) main_image_pane_t2

0x43f9,	// (0x00032293) main_image_pane_t3_ParamLimits

0x43f9,	// (0x00032293) main_image_pane_t3

0x4421,	// (0x000322bb) main_image_pane_t4_ParamLimits

0x4421,	// (0x000322bb) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0003d384) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0003d384) main_image_pane_t

0x4441,	// (0x000322db) popup_image_details_window_cp01

0x444b,	// (0x000322e5) popup_toobar_trans_pane_cp01_ParamLimits

0x444b,	// (0x000322e5) popup_toobar_trans_pane_cp01

0x073d,	// (0x0002e5d7) popup_image_details_window_ParamLimits

0x073d,	// (0x0002e5d7) popup_image_details_window

0x4ab8,	// (0x00032952) popup_image_focus_window

0x08c2,	// (0x0002e75c) camera2_autofocus_pane_ParamLimits

0x08c2,	// (0x0002e75c) camera2_autofocus_pane

0x9cde,	// (0x00037b78) bg_popup_sub_pane_cp06

0xca25,	// (0x0003a8bf) popup_image_focus_window_g1

0xca2d,	// (0x0003a8c7) popup_image_focus_window_g2

0xca35,	// (0x0003a8cf) popup_image_focus_window_g3

0xca3d,	// (0x0003a8d7) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0003d593) popup_image_focus_window_g

0xca45,	// (0x0003a8df) popup_image_focus_window_t1

0xca53,	// (0x0003a8ed) popup_image_focus_window_t2

0xca63,	// (0x0003a8fd) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0003d59c) popup_image_focus_window_t

0xca71,	// (0x0003a90b) camera2_autofocus_pane_g1

0xa9f8,	// (0x00038892) bg_tb_trans_pane_cp01

0xca7f,	// (0x0003a919) popup_image_details_window_g1

0xca92,	// (0x0003a92c) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0003d5ae) popup_image_details_window_g

0xcabb,	// (0x0003a955) popup_image_details_window_t1

0xcacd,	// (0x0003a967) popup_image_details_window_t2

0xcae6,	// (0x0003a980) popup_image_details_window_t3

0xcafa,	// (0x0003a994) popup_image_details_window_t4

0xcb15,	// (0x0003a9af) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0003d5b5) popup_image_details_window_t

0xa407,	// (0x000382a1) bg_calc_paper_pane_ParamLimits

0x1ae2,	// (0x0002f97c) grid_highlight_pane_cp013

0x1d5c,	// (0x0002fbf6) list_calc_pane_ParamLimits

0x1d6e,	// (0x0002fc08) scroll_pane_cp024

0xa41b,	// (0x000382b5) bg_calc_display_pane_ParamLimits

0x0423,	// (0x0002e2bd) calc_display_pane_t1_ParamLimits

0x0438,	// (0x0002e2d2) calc_display_pane_t2_ParamLimits

0x1d76,	// (0x0002fc10) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0003cfe7) calc_display_pane_t_ParamLimits

0x049c,	// (0x0002e336) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0003d004) cell_calc_pane_g

0x04a5,	// (0x0002e33f) cell_calc_pane_t1

0xa47a,	// (0x00038314) grid_highlight_pane_cp02_ParamLimits

0xa490,	// (0x0003832a) toolbar_button_pane_cp01_ParamLimits

0xa490,	// (0x0003832a) toolbar_button_pane_cp01

0xb3c4,	// (0x0003925e) temp_image_control_pane_ParamLimits

0xb3c4,	// (0x0003925e) temp_image_control_pane

0x1ac8,	// (0x0002f962) main_mp3_pane

0xcb2f,	// (0x0003a9c9) temp_image_control_pane_g1_ParamLimits

0xcb2f,	// (0x0003a9c9) temp_image_control_pane_g1

0xcb3d,	// (0x0003a9d7) temp_image_control_pane_g2_ParamLimits

0xcb3d,	// (0x0003a9d7) temp_image_control_pane_g2

0xcb4f,	// (0x0003a9e9) temp_image_control_pane_g3_ParamLimits

0xcb4f,	// (0x0003a9e9) temp_image_control_pane_g3

0x51bc,	// (0x00033056) temp_image_control_pane_g4_ParamLimits

0x51bc,	// (0x00033056) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0003d5c0) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0003d5c0) temp_image_control_pane_g

0xcb2f,	// (0x0003a9c9) main_mp3_pane_g1

0x51cf,	// (0x00033069) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0003d5c9) main_mp3_pane_g

0xcb92,	// (0x0003aa2c) main_mp3_pane_t1

0xa5f1,	// (0x0003848b) main_camera_pane_g8_ParamLimits

0xa5f1,	// (0x0003848b) main_camera_pane_g8

0x2628,	// (0x000304c2) main_video_pane_g7_ParamLimits

0x2628,	// (0x000304c2) main_video_pane_g7

0x4dcc,	// (0x00032c66) main_camera2_pane_t7_ParamLimits

0x4dcc,	// (0x00032c66) main_camera2_pane_t7

0xa739,	// (0x000385d3) scroll_pane_cp025_ParamLimits

0xa739,	// (0x000385d3) scroll_pane_cp025

0xa74d,	// (0x000385e7) scroll_pane_cp026_ParamLimits

0xa74d,	// (0x000385e7) scroll_pane_cp026

0xa75c,	// (0x000385f6) wml_content_pane_ParamLimits

0x1ae2,	// (0x0002f97c) main_touch_calib_pane

0x52a3,	// (0x0003313d) main_touch_calib_pane_g1

0x52b5,	// (0x0003314f) main_touch_calib_pane_g2

0x52c7,	// (0x00033161) main_touch_calib_pane_g3

0x52d9,	// (0x00033173) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0003d5e7) main_touch_calib_pane_g

0x52eb,	// (0x00033185) main_touch_calib_pane_t1

0x5305,	// (0x0003319f) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0003d5f0) main_touch_calib_pane_t

0xaf10,	// (0x00038daa) mup_progress_pane_cp02

0xaf45,	// (0x00038ddf) navi_pane_g1

0xb000,	// (0x00038e9a) navi_pane_mp_t3

0x1ac8,	// (0x0002f962) main_mp3_pane_ParamLimits

0x4afa,	// (0x00032994) navi_pane_ParamLimits

0xcb2f,	// (0x0003a9c9) main_mp3_pane_g1_ParamLimits

0x51cf,	// (0x00033069) main_mp3_pane_g2_ParamLimits

0x51dd,	// (0x00033077) main_mp3_pane_g3_ParamLimits

0x51dd,	// (0x00033077) main_mp3_pane_g3

0x51eb,	// (0x00033085) main_mp3_pane_g4_ParamLimits

0x51eb,	// (0x00033085) main_mp3_pane_g4

0xcb5f,	// (0x0003a9f9) main_mp3_pane_g5_ParamLimits

0xcb5f,	// (0x0003a9f9) main_mp3_pane_g5

0xcb6d,	// (0x0003aa07) main_mp3_pane_g6_ParamLimits

0xcb6d,	// (0x0003aa07) main_mp3_pane_g6

0xcb7a,	// (0x0003aa14) main_mp3_pane_g7_ParamLimits

0xcb7a,	// (0x0003aa14) main_mp3_pane_g7

0xcb86,	// (0x0003aa20) main_mp3_pane_g8_ParamLimits

0xcb86,	// (0x0003aa20) main_mp3_pane_g8

0xf72f,	// (0x0003d5c9) main_mp3_pane_g_ParamLimits

0x51f7,	// (0x00033091) main_mp3_pane_t2

0x5205,	// (0x0003309f) main_mp3_pane_t3

0xcba0,	// (0x0003aa3a) main_mp3_pane_t4

0xcbae,	// (0x0003aa48) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0003d5da) main_mp3_pane_t

0xcbbc,	// (0x0003aa56) mup_progress_pane_cp01

0x1a3d,	// (0x0002f8d7) aid_zoom_text_secondary2

0xc976,	// (0x0003a810) list_cale_ev2_pane

0xc97e,	// (0x0003a818) scroll_pane_cp023_ParamLimits

0x535b,	// (0x000331f5) field_cale_ev2_pane_ParamLimits

0x535b,	// (0x000331f5) field_cale_ev2_pane

0x537b,	// (0x00033215) field_cale_ev2_pane_g1_ParamLimits

0x537b,	// (0x00033215) field_cale_ev2_pane_g1

0x5387,	// (0x00033221) field_cale_ev2_pane_g2_ParamLimits

0x5387,	// (0x00033221) field_cale_ev2_pane_g2

0x539f,	// (0x00033239) field_cale_ev2_pane_g3_ParamLimits

0x539f,	// (0x00033239) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0003d5fb) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0003d5fb) field_cale_ev2_pane_g

0x53b7,	// (0x00033251) field_cale_ev2_pane_t1_ParamLimits

0x53b7,	// (0x00033251) field_cale_ev2_pane_t1

0x53ce,	// (0x00033268) field_cale_ev2_pane_t2_ParamLimits

0x53ce,	// (0x00033268) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0003d604) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0003d604) field_cale_ev2_pane_t

0x427a,	// (0x00032114) main_postcard_pane_g5_ParamLimits

0x427a,	// (0x00032114) main_postcard_pane_g5

0x4290,	// (0x0003212a) main_postcard_pane_g6_ParamLimits

0x4290,	// (0x0003212a) main_postcard_pane_g6

0x23f4,	// (0x0003028e) camera2_autofocus_pane_cp_ParamLimits

0x23f4,	// (0x0003028e) camera2_autofocus_pane_cp

0x1ac8,	// (0x0002f962) main_mup3_pane

0x5407,	// (0x000332a1) main_mup3_pane_g1_ParamLimits

0x5407,	// (0x000332a1) main_mup3_pane_g1

0x5429,	// (0x000332c3) main_mup3_pane_g2_ParamLimits

0x5429,	// (0x000332c3) main_mup3_pane_g2

0x54a7,	// (0x00033341) main_mup3_pane_g3_ParamLimits

0x54a7,	// (0x00033341) main_mup3_pane_g3

0x54ed,	// (0x00033387) main_mup3_pane_g4_ParamLimits

0x54ed,	// (0x00033387) main_mup3_pane_g4

0x5533,	// (0x000333cd) main_mup3_pane_g5_ParamLimits

0x5533,	// (0x000333cd) main_mup3_pane_g5

0x5579,	// (0x00033413) main_mup3_pane_g6_ParamLimits

0x5579,	// (0x00033413) main_mup3_pane_g6

0xcbf0,	// (0x0003aa8a) main_mup3_pane_g7_ParamLimits

0xcbf0,	// (0x0003aa8a) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0003d614) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0003d614) main_mup3_pane_g

0x55f7,	// (0x00033491) main_mup3_pane_t1_ParamLimits

0x55f7,	// (0x00033491) main_mup3_pane_t1

0x566b,	// (0x00033505) main_mup3_pane_t2_ParamLimits

0x566b,	// (0x00033505) main_mup3_pane_t2

0x573f,	// (0x000335d9) main_mup3_pane_t4_ParamLimits

0x573f,	// (0x000335d9) main_mup3_pane_t4

0x5795,	// (0x0003362f) main_mup3_pane_t5_ParamLimits

0x5795,	// (0x0003362f) main_mup3_pane_t5

0x5851,	// (0x000336eb) main_mup3_pane_t6_ParamLimits

0x5851,	// (0x000336eb) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0003d625) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0003d625) main_mup3_pane_t

0x5909,	// (0x000337a3) mup3_progress_pane_ParamLimits

0x5909,	// (0x000337a3) mup3_progress_pane

0x599f,	// (0x00033839) popup_mup3_control_window_ParamLimits

0x599f,	// (0x00033839) popup_mup3_control_window

0xcbfe,	// (0x0003aa98) popup_mup3_text_window

0x59d1,	// (0x0003386b) mup3_progress_pane_t1

0x59f0,	// (0x0003388a) mup3_progress_pane_t2

0xcc06,	// (0x0003aaa0) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0003d632) mup3_progress_pane_t

0xcc23,	// (0x0003aabd) mup_progress_pane_cp03

0x9cde,	// (0x00037b78) bg_tb_trans_pane_cp04

0x5a0f,	// (0x000338a9) mup3_volume_pane

0x5a17,	// (0x000338b1) popup_mup3_control_window_g1

0x5a20,	// (0x000338ba) mup3_volume_pane_g1

0x5a29,	// (0x000338c3) mup3_volume_pane_g2

0x5a32,	// (0x000338cc) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0003d639) mup3_volume_pane_g

0x9cde,	// (0x00037b78) bg_tb_trans_pane_cp03

0xcc33,	// (0x0003aacd) popup_mup3_text_window_g1

0xcc3b,	// (0x0003aad5) popup_mup3_text_window_t1

0xa463,	// (0x000382fd) list_calc_item_pane_g1_ParamLimits

0xc64f,	// (0x0003a4e9) mup_volume_pane_cp_g1

0x531f,	// (0x000331b9) main_touch_calib_pane_t3

0x5333,	// (0x000331cd) main_touch_calib_pane_t4

0x5347,	// (0x000331e1) main_touch_calib_pane_t5

0x1a29,	// (0x0002f8c3) aid_cell_size_toolbar2

0x1a31,	// (0x0002f8cb) aid_popup3_width_pane

0x1a3d,	// (0x0002f8d7) aid_zoom_text_msg_primary

0x23c9,	// (0x00030263) vorec_t7

0xa427,	// (0x000382c1) bg_calc_paper_pane_g1_ParamLimits

0xa433,	// (0x000382cd) bg_calc_paper_pane_g2_ParamLimits

0xa43f,	// (0x000382d9) bg_calc_paper_pane_g3_ParamLimits

0xa44b,	// (0x000382e5) bg_calc_paper_pane_g4_ParamLimits

0xa457,	// (0x000382f1) bg_calc_paper_pane_g5_ParamLimits

0x1d88,	// (0x0002fc22) bg_calc_paper_pane_g6_ParamLimits

0x1d97,	// (0x0002fc31) bg_calc_paper_pane_g7_ParamLimits

0x1da6,	// (0x0002fc40) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0003cfee) bg_calc_paper_pane_g_ParamLimits

0x1db9,	// (0x0002fc53) calc_bg_paper_pane_g9_ParamLimits

0x253f,	// (0x000303d9) image_qvga_pane_ParamLimits

0x253f,	// (0x000303d9) image_qvga_pane

0xa356,	// (0x000381f0) bg_popup_sub_pane_cp04_ParamLimits

0xb2fb,	// (0x00039195) popup_mup_playback_window_g1_ParamLimits

0xb307,	// (0x000391a1) popup_mup_playback_window_t1_ParamLimits

0xb31c,	// (0x000391b6) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0003d378) popup_mup_playback_window_t_ParamLimits

0x4dfa,	// (0x00032c94) main_mup2_pane_g3_ParamLimits

0x4dfa,	// (0x00032c94) main_mup2_pane_g3

0x294e,	// (0x000307e8) popup_toolbar_window_cp04

0xb6fe,	// (0x00039598) popup_call2_audio_second_window_g3_ParamLimits

0xb6fe,	// (0x00039598) popup_call2_audio_second_window_g3

0xbb08,	// (0x000399a2) popup_call2_audio_first_window_g4_ParamLimits

0xbb08,	// (0x000399a2) popup_call2_audio_first_window_g4

0xc187,	// (0x0003a021) popup_call2_audio_in_window_g4_ParamLimits

0xc187,	// (0x0003a021) popup_call2_audio_in_window_g4

0x43a7,	// (0x00032241) aid_area_sk_bg_cut_ParamLimits

0x43a7,	// (0x00032241) aid_area_sk_bg_cut

0xb331,	// (0x000391cb) aid_area_sk_bg_cut_2_ParamLimits

0xb331,	// (0x000391cb) aid_area_sk_bg_cut_2

0x5162,	// (0x00032ffc) aid_placing_details_win

0x516a,	// (0x00033004) aid_placing_details_win_2

0xca71,	// (0x0003a90b) camera2_autofocus_pane_g1_ParamLimits

0x02e2,	// (0x0002e17c) popup_fixed_preview_cale_window_ParamLimits

0x02e2,	// (0x0002e17c) popup_fixed_preview_cale_window

0xb07e,	// (0x00038f18) navi_slider_pane_g3

0xb087,	// (0x00038f21) navi_slider_pane_g4

0xb090,	// (0x00038f2a) navi_slider_pane_g5

0xb07e,	// (0x00038f18) navi_slider_pane_g6

0x3cd3,	// (0x00031b6d) navi_slider_pane_g7

0xb1b1,	// (0x0003904b) mup_scale_pane_g3

0xb1ba,	// (0x00039054) mup_scale_pane_g4

0xb1c3,	// (0x0003905d) mup_scale_pane_g5

0x40d6,	// (0x00031f70) mup_scale_pane_g6

0x40df,	// (0x00031f79) mup_scale_pane_g7

0xb07e,	// (0x00038f18) cams2_slider_pane_g3

0xc6d1,	// (0x0003a56b) cams2_slider_pane_g4

0x50af,	// (0x00032f49) cams2_slider_pane_g5

0xb07e,	// (0x00038f18) cams2_slider_pane_g6

0x50b7,	// (0x00032f51) cams2_slider_pane_g7

0xc8fc,	// (0x0003a796) camera2_autofocus_pane_cp_g1

0xc4e8,	// (0x0003a382) bg_popup_preview_window_pane_cp02_ParamLimits

0xc4e8,	// (0x0003a382) bg_popup_preview_window_pane_cp02

0xcc49,	// (0x0003aae3) list_fp_cale_pane_ParamLimits

0xcc49,	// (0x0003aae3) list_fp_cale_pane

0xcc55,	// (0x0003aaef) popup_fixed_preview_cale_window_t1_ParamLimits

0xcc55,	// (0x0003aaef) popup_fixed_preview_cale_window_t1

0x5a3b,	// (0x000338d5) popup_fixed_preview_cale_window_t2_ParamLimits

0x5a3b,	// (0x000338d5) popup_fixed_preview_cale_window_t2

0x5a50,	// (0x000338ea) popup_fixed_preview_cale_window_t3_ParamLimits

0x5a50,	// (0x000338ea) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0003d640) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0003d640) popup_fixed_preview_cale_window_t

0x5a65,	// (0x000338ff) list_single_fp_cale_pane_ParamLimits

0x5a65,	// (0x000338ff) list_single_fp_cale_pane

0xcc73,	// (0x0003ab0d) list_single_fp_cale_pane_g1_ParamLimits

0xcc73,	// (0x0003ab0d) list_single_fp_cale_pane_g1

0xcc7f,	// (0x0003ab19) list_single_fp_cale_pane_g2_ParamLimits

0xcc7f,	// (0x0003ab19) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0003d647) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0003d647) list_single_fp_cale_pane_g

0xcc98,	// (0x0003ab32) list_single_fp_cale_pane_t1_ParamLimits

0xcc98,	// (0x0003ab32) list_single_fp_cale_pane_t1

0xccaa,	// (0x0003ab44) list_single_fp_cale_pane_t2_ParamLimits

0xccaa,	// (0x0003ab44) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0003d64e) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0003d64e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1ae2,	// (0x0002f97c) main_dialer_pane

0x5a7a,	// (0x00033914) aid_cell_size_keypad

0x5a84,	// (0x0003391e) dialer_ne_pane

0x5a8c,	// (0x00033926) grid_dialer_command_1_pane

0x5a94,	// (0x0003392e) grid_dialer_command_2_pane

0x5a9c,	// (0x00033936) grid_dialer_keypad_pane

0x5aae,	// (0x00033948) bg_popup_call_pane_cp06_ParamLimits

0x5aae,	// (0x00033948) bg_popup_call_pane_cp06

0x5aba,	// (0x00033954) dialer_ne_clear_pane_ParamLimits

0x5aba,	// (0x00033954) dialer_ne_clear_pane

0xccdd,	// (0x0003ab77) dialer_ne_pane_g1

0xcce5,	// (0x0003ab7f) dialer_ne_pane_t1_ParamLimits

0xcce5,	// (0x0003ab7f) dialer_ne_pane_t1

0x5ac6,	// (0x00033960) dialer_ne_pane_t2_ParamLimits

0x5ac6,	// (0x00033960) dialer_ne_pane_t2

0x5af0,	// (0x0003398a) dialer_ne_pane_t3_ParamLimits

0x5af0,	// (0x0003398a) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0003d653) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0003d653) dialer_ne_pane_t

0x5b20,	// (0x000339ba) dialer_ne_pane_t3_copy1_ParamLimits

0x5b20,	// (0x000339ba) dialer_ne_pane_t3_copy1

0x5b4f,	// (0x000339e9) cell_dialer_keypad_pane_ParamLimits

0x5b4f,	// (0x000339e9) cell_dialer_keypad_pane

0x5b66,	// (0x00033a00) cell_dialer_command_1_pane_ParamLimits

0x5b66,	// (0x00033a00) cell_dialer_command_1_pane

0x5b7c,	// (0x00033a16) cell_dialer_command_2_pane_ParamLimits

0x5b7c,	// (0x00033a16) cell_dialer_command_2_pane

0xccf7,	// (0x0003ab91) bg_button_pane_cp02_ParamLimits

0xccf7,	// (0x0003ab91) bg_button_pane_cp02

0x5b8b,	// (0x00033a25) cell_dialer_keypad_pane_g1_ParamLimits

0x5b8b,	// (0x00033a25) cell_dialer_keypad_pane_g1

0xccf7,	// (0x0003ab91) bg_button_pane_cp03_ParamLimits

0xccf7,	// (0x0003ab91) bg_button_pane_cp03

0x5b9f,	// (0x00033a39) cell_dialer_command_1_pane_g1_ParamLimits

0x5b9f,	// (0x00033a39) cell_dialer_command_1_pane_g1

0xcd03,	// (0x0003ab9d) bg_button_pane_cp04

0x5bb3,	// (0x00033a4d) cell_dialer_command_2_pane_g1

0xa5e9,	// (0x00038483) bg_button_pane_cp06

0xcd0b,	// (0x0003aba5) dialer_ne_clear_pane_g1

0xaf51,	// (0x00038deb) navi_pane_g2

0xaf7f,	// (0x00038e19) navi_pane_g3

0x0002,

0xf3e1,	// (0x0003d27b) navi_pane_g

0xb00e,	// (0x00038ea8) navi_pane_mv_g2

0xb035,	// (0x00038ecf) navi_pane_mv_g5

0x3c88,	// (0x00031b22) navi_pane_mv_t1

0xa41b,	// (0x000382b5) main_clock2_pane

0xa9f8,	// (0x00038892) main_clock2_list_pane_ParamLimits

0xa9f8,	// (0x00038892) main_clock2_list_pane

0x5c24,	// (0x00033abe) main_clock2_pane_t1_ParamLimits

0x5c24,	// (0x00033abe) main_clock2_pane_t1

0x5c5f,	// (0x00033af9) main_clock2_pane_t2_ParamLimits

0x5c5f,	// (0x00033af9) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0003d65f) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0003d65f) main_clock2_pane_t

0x5cff,	// (0x00033b99) popup_clock_analogue_window_cp03_ParamLimits

0x5cff,	// (0x00033b99) popup_clock_analogue_window_cp03

0x5d24,	// (0x00033bbe) popup_clock_digital_window_cp02_ParamLimits

0x5d24,	// (0x00033bbe) popup_clock_digital_window_cp02

0x5d9d,	// (0x00033c37) main_clock2_list_single_pane_ParamLimits

0x5d9d,	// (0x00033c37) main_clock2_list_single_pane

0xa5e9,	// (0x00038483) list_highlight_pane_cp05

0xcd49,	// (0x0003abe3) main_clock2_list_single_pane_t1

0x294e,	// (0x000307e8) popup_toolbar_window_cp04_ParamLimits

0x518c,	// (0x00033026) camera2_autofocus_pane_g2_ParamLimits

0x518c,	// (0x00033026) camera2_autofocus_pane_g2

0x5198,	// (0x00033032) camera2_autofocus_pane_g3_ParamLimits

0x5198,	// (0x00033032) camera2_autofocus_pane_g3

0x51a4,	// (0x0003303e) camera2_autofocus_pane_g4_ParamLimits

0x51a4,	// (0x0003303e) camera2_autofocus_pane_g4

0x51b0,	// (0x0003304a) camera2_autofocus_pane_g5_ParamLimits

0x51b0,	// (0x0003304a) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0003d5a3) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0003d5a3) camera2_autofocus_pane_g

0xcbd0,	// (0x0003aa6a) camera2_autofocus_pane_cp_g2

0xcbd8,	// (0x0003aa72) camera2_autofocus_pane_cp_g3

0xcbe0,	// (0x0003aa7a) camera2_autofocus_pane_cp_g4

0xcbe8,	// (0x0003aa82) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0003d609) camera2_autofocus_pane_cp_g

0x5aa6,	// (0x00033940) popup_dialer_spcha_window

0x9cde,	// (0x00037b78) bg_popup_sub_pane_cp07

0xcd57,	// (0x0003abf1) list_spcha_pane

0xcd5f,	// (0x0003abf9) list_single_spcha_pane_ParamLimits

0xcd5f,	// (0x0003abf9) list_single_spcha_pane

0x9cde,	// (0x00037b78) list_highlight_pane_cp06

0xcd70,	// (0x0003ac0a) list_single_spcha_pane_t1

0xbf31,	// (0x00039dcb) popup_call2_audio_out_window_g4_ParamLimits

0xbf31,	// (0x00039dcb) popup_call2_audio_out_window_g4

0x1ae2,	// (0x0002f97c) main_imed2_pane

0x4ac0,	// (0x0003295a) popup_imed_adjust2_window

0x0755,	// (0x0002e5ef) popup_imed_trans_window_ParamLimits

0x0755,	// (0x0002e5ef) popup_imed_trans_window

0xc73a,	// (0x0003a5d4) popup_blid_sat_info2_window_t1

0xc748,	// (0x0003a5e2) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0003d538) popup_blid_sat_info2_window_t

0x5daf,	// (0x00033c49) aid_size_cell_colour_35

0x5dcf,	// (0x00033c69) aid_size_cell_colour_112

0x5def,	// (0x00033c89) aid_size_cell_effect

0xc4f4,	// (0x0003a38e) bg_tb_trans_pane_cp02

0xaab0,	// (0x0003894a) heading_imed_pane

0x5e0f,	// (0x00033ca9) listscroll_imed_pane

0xcd7e,	// (0x0003ac18) heading_imed_pane_g1

0xcd86,	// (0x0003ac20) heading_imed_pane_t1

0xcd94,	// (0x0003ac2e) grid_imed_colour_35_pane_ParamLimits

0xcd94,	// (0x0003ac2e) grid_imed_colour_35_pane

0x5e1b,	// (0x00033cb5) grid_imed_effect_pane

0xcdab,	// (0x0003ac45) list_imed_aspect_pane

0x5e31,	// (0x00033ccb) scroll_pane_cp027_ParamLimits

0x5e31,	// (0x00033ccb) scroll_pane_cp027

0x5e42,	// (0x00033cdc) cell_imed_effect_pane_ParamLimits

0x5e42,	// (0x00033cdc) cell_imed_effect_pane

0xcdb3,	// (0x0003ac4d) cell_imed_colour_pane_ParamLimits

0xcdb3,	// (0x0003ac4d) cell_imed_colour_pane

0xcdf5,	// (0x0003ac8f) cell_imed_colour_pane_g1_ParamLimits

0xcdf5,	// (0x0003ac8f) cell_imed_colour_pane_g1

0xce06,	// (0x0003aca0) hgihlgiht_grid_pane_cp016_ParamLimits

0xce06,	// (0x0003aca0) hgihlgiht_grid_pane_cp016

0x5e69,	// (0x00033d03) cell_imed_effect_pane_g1

0x5e71,	// (0x00033d0b) grid_highlight_pane_cp017

0xce17,	// (0x0003acb1) list_imed_single_pane_ParamLimits

0xce17,	// (0x0003acb1) list_imed_single_pane

0x9cde,	// (0x00037b78) list_highlight_pane_cp07

0xce2c,	// (0x0003acc6) list_imed_aspect_pane_comp1_t1

0xc4f4,	// (0x0003a38e) bg_tb_trans_pane_cp05

0xce4e,	// (0x0003ace8) popup_imed_adjust2_window_g1

0xce75,	// (0x0003ad0f) popup_imed_adjust2_window_t1

0xce8d,	// (0x0003ad27) slider_imed_adjust_pane

0xcea1,	// (0x0003ad3b) slider_imed_adjust_pane_g1

0xceb1,	// (0x0003ad4b) slider_imed_adjust_pane_g2

0xcec1,	// (0x0003ad5b) slider_imed_adjust_pane_g3

0xced2,	// (0x0003ad6c) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0003d67c) slider_imed_adjust_pane_g

0x5e7a,	// (0x00033d14) aid_size_cell_clipart2

0x5e86,	// (0x00033d20) grid_imed_clipart_pane

0xcee3,	// (0x0003ad7d) scroll_pane_cp031

0x5e90,	// (0x00033d2a) cell_imed_clipart_pane_ParamLimits

0x5e90,	// (0x00033d2a) cell_imed_clipart_pane

0x5eb2,	// (0x00033d4c) cell_imed_clipart_pane_g1

0x9cde,	// (0x00037b78) grid_highlight_pane_cp014

0x5c00,	// (0x00033a9a) main_clock2_pane_g1_ParamLimits

0x5c00,	// (0x00033a9a) main_clock2_pane_g1

0x5d44,	// (0x00033bde) aid_call2_pane_cp10

0x5d56,	// (0x00033bf0) aid_call_pane_cp10

0xaeb2,	// (0x00038d4c) popup_clock_analogue_window_cp10_g1

0xaeb2,	// (0x00038d4c) popup_clock_analogue_window_cp10_g2

0x5d68,	// (0x00033c02) popup_clock_analogue_window_cp10_g3

0x5d68,	// (0x00033c02) popup_clock_analogue_window_cp10_g4

0xaeb2,	// (0x00038d4c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0003d66a) popup_clock_analogue_window_cp10_g

0x5d7e,	// (0x00033c18) popup_clock_analogue_window_cp10_t1

0x0d99,	// (0x0002ec33) clock_digital_number_pane_cp10_ParamLimits

0x0d99,	// (0x0002ec33) clock_digital_number_pane_cp10

0x0db1,	// (0x0002ec4b) clock_digital_number_pane_cp11_ParamLimits

0x0db1,	// (0x0002ec4b) clock_digital_number_pane_cp11

0x0dc9,	// (0x0002ec63) clock_digital_number_pane_cp12_ParamLimits

0x0dc9,	// (0x0002ec63) clock_digital_number_pane_cp12

0x0de3,	// (0x0002ec7d) clock_digital_number_pane_cp13_ParamLimits

0x0de3,	// (0x0002ec7d) clock_digital_number_pane_cp13

0x0dfd,	// (0x0002ec97) clock_digital_separator_pane_cp10_ParamLimits

0x0dfd,	// (0x0002ec97) clock_digital_separator_pane_cp10

0x0e17,	// (0x0002ecb1) popup_clock_digital_window_cp02_t1_ParamLimits

0x0e17,	// (0x0002ecb1) popup_clock_digital_window_cp02_t1

0xa34e,	// (0x000381e8) clock_digital_number_pane_cp10_g1

0xa34e,	// (0x000381e8) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0003d685) clock_digital_number_pane_cp10_g

0xa34e,	// (0x000381e8) clock_digital_separator_pane_cp10_g1

0xa34e,	// (0x000381e8) clock_digital_separator_pane_g2_cp10

0xb03d,	// (0x00038ed7) navi_pane_vded_g4

0xb046,	// (0x00038ee0) navi_pane_vded_g5

0xb04f,	// (0x00038ee9) navi_pane_vded_t1

0x1ae2,	// (0x0002f97c) main_vded_pane

0x5ebb,	// (0x00033d55) main_vded_pane_g1

0x5ec5,	// (0x00033d5f) main_vded_pane_g2

0x5ecf,	// (0x00033d69) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0003d68a) main_vded_pane_g

0x5ed9,	// (0x00033d73) main_vded_pane_t1

0x5ee7,	// (0x00033d81) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0003d691) main_vded_pane_t

0x5ef5,	// (0x00033d8f) vded_slider_pane

0x5efd,	// (0x00033d97) vded_video_pane

0xceeb,	// (0x0003ad85) vded_video_pane_g1

0x5f05,	// (0x00033d9f) vded_video_pane_g2

0xc8fc,	// (0x0003a796) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0003d696) vded_video_pane_g

0xcef5,	// (0x0003ad8f) vded_slider_pane_g1

0xc64f,	// (0x0003a4e9) vded_slider_pane_g2

0xcefe,	// (0x0003ad98) vded_slider_pane_g3

0xcf07,	// (0x0003ada1) vded_slider_pane_g4

0xcf10,	// (0x0003adaa) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0003d69d) vded_slider_pane_g

0x5987,	// (0x00033821) mup3_rocker_pane_ParamLimits

0x5987,	// (0x00033821) mup3_rocker_pane

0x5f0e,	// (0x00033da8) mup3_control_keys_pane_g1

0x5f16,	// (0x00033db0) mup3_control_keys_pane_g2

0x5f1e,	// (0x00033db8) mup3_control_keys_pane_g3

0x5f26,	// (0x00033dc0) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0003d6a8) mup3_control_keys_pane_g

0x0319,	// (0x0002e1b3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0319,	// (0x0002e1b3) popup_toolbar2_fixed_window_cp01

0x59bb,	// (0x00033855) popup_toolbar2_fixed_window_cp02_ParamLimits

0x59bb,	// (0x00033855) popup_toolbar2_fixed_window_cp02

0xb870,	// (0x0003970a) popup_call2_audio_second_window_t4_ParamLimits

0xb870,	// (0x0003970a) popup_call2_audio_second_window_t4

0xbd9e,	// (0x00039c38) popup_call2_audio_first_window_t6_ParamLimits

0xbd9e,	// (0x00039c38) popup_call2_audio_first_window_t6

0xc034,	// (0x00039ece) popup_call2_audio_out_window_t6_ParamLimits

0xc034,	// (0x00039ece) popup_call2_audio_out_window_t6

0x1ae2,	// (0x0002f97c) main_vitu_pane

0x5f36,	// (0x00033dd0) aid_size_cell_itu_ParamLimits

0x5f36,	// (0x00033dd0) aid_size_cell_itu

0xa9f8,	// (0x00038892) bg_popup_window_pane_cp08_ParamLimits

0xa9f8,	// (0x00038892) bg_popup_window_pane_cp08

0x5f4c,	// (0x00033de6) field_vitu_entry_pane_ParamLimits

0x5f4c,	// (0x00033de6) field_vitu_entry_pane

0x5f63,	// (0x00033dfd) grid_vitu_function_pane_ParamLimits

0x5f63,	// (0x00033dfd) grid_vitu_function_pane

0x5f7e,	// (0x00033e18) grid_vitu_itu_pane_ParamLimits

0x5f7e,	// (0x00033e18) grid_vitu_itu_pane

0x5f9c,	// (0x00033e36) cell_vitu_itu_pane_ParamLimits

0x5f9c,	// (0x00033e36) cell_vitu_itu_pane

0x5fbe,	// (0x00033e58) cell_vitu_function_pane_ParamLimits

0x5fbe,	// (0x00033e58) cell_vitu_function_pane

0xa9f8,	// (0x00038892) bg_popup_sub_pane_cp08_ParamLimits

0xa9f8,	// (0x00038892) bg_popup_sub_pane_cp08

0x5fd7,	// (0x00033e71) field_vitu_entry_pane_t1_ParamLimits

0x5fd7,	// (0x00033e71) field_vitu_entry_pane_t1

0xcf31,	// (0x0003adcb) field_vitu_entry_pane_t2_ParamLimits

0xcf31,	// (0x0003adcb) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0003d6b6) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0003d6b6) field_vitu_entry_pane_t

0xcf4e,	// (0x0003ade8) bg_button_pane_cp05_ParamLimits

0xcf4e,	// (0x0003ade8) bg_button_pane_cp05

0x5ff5,	// (0x00033e8f) cell_vitu_itu_pane_g1

0x600d,	// (0x00033ea7) cell_vitu_itu_pane_t1_ParamLimits

0x600d,	// (0x00033ea7) cell_vitu_itu_pane_t1

0x601f,	// (0x00033eb9) cell_vitu_itu_pane_t2_ParamLimits

0x601f,	// (0x00033eb9) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0003d6bb) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0003d6bb) cell_vitu_itu_pane_t

0xcf5c,	// (0x0003adf6) bg_button_pane_cp07

0x6054,	// (0x00033eee) cell_vitu_function_pane_g1

0x1c84,	// (0x0002fb1e) main_calc_pane_g1

0x0179,	// (0x0002e013) aid_visual_content_pane

0x1ae2,	// (0x0002f97c) main_vradio_pane

0x605d,	// (0x00033ef7) main_vradio_pane_g1_ParamLimits

0x605d,	// (0x00033ef7) main_vradio_pane_g1

0xcf66,	// (0x0003ae00) main_vradio_pane_g2_ParamLimits

0xcf66,	// (0x0003ae00) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0003d6c2) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0003d6c2) main_vradio_pane_g

0x6076,	// (0x00033f10) main_vradio_pane_t1_ParamLimits

0x6076,	// (0x00033f10) main_vradio_pane_t1

0x608b,	// (0x00033f25) main_vradio_pane_t2_ParamLimits

0x608b,	// (0x00033f25) main_vradio_pane_t2

0xcf73,	// (0x0003ae0d) main_vradio_pane_t3_ParamLimits

0xcf73,	// (0x0003ae0d) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0003d6c7) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0003d6c7) main_vradio_pane_t

0x60a0,	// (0x00033f3a) vradio_rocker_control_pane_ParamLimits

0x60a0,	// (0x00033f3a) vradio_rocker_control_pane

0x60b2,	// (0x00033f4c) vradio_station_info_pane_ParamLimits

0x60b2,	// (0x00033f4c) vradio_station_info_pane

0xcf87,	// (0x0003ae21) vradio_frequency_info_pane_ParamLimits

0xcf87,	// (0x0003ae21) vradio_frequency_info_pane

0xc8fc,	// (0x0003a796) vradio_station_info_pane_g1

0xcf96,	// (0x0003ae30) vradio_station_info_pane_t1_ParamLimits

0xcf96,	// (0x0003ae30) vradio_station_info_pane_t1

0xcfb8,	// (0x0003ae52) vradio_station_info_pane_t2_ParamLimits

0xcfb8,	// (0x0003ae52) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0003d6ce) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0003d6ce) vradio_station_info_pane_t

0xcfca,	// (0x0003ae64) vradio_tuning_pane

0xcfd2,	// (0x0003ae6c) vradio_rocker_control_pane_g1

0xcfda,	// (0x0003ae74) vradio_rocker_control_pane_g2

0xcfe2,	// (0x0003ae7c) vradio_rocker_control_pane_g3

0xcfea,	// (0x0003ae84) vradio_rocker_control_pane_g4

0xcff2,	// (0x0003ae8c) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0003d6d3) vradio_rocker_control_pane_g

0x60c4,	// (0x00033f5e) vradio_frequency_info_pane_g1

0xcffa,	// (0x0003ae94) vradio_frequency_info_pane_t1_ParamLimits

0xcffa,	// (0x0003ae94) vradio_frequency_info_pane_t1

0x60ce,	// (0x00033f68) vradio_tuning_pane_g1

0x60d9,	// (0x00033f73) vradio_tuning_pane_t1

0x1a86,	// (0x0002f920) area_side_right_pane_ParamLimits

0x1a86,	// (0x0002f920) area_side_right_pane

0xc4af,	// (0x0003a349) status_small_pane_g1

0xc4b7,	// (0x0003a351) status_small_pane_g2

0xc4c0,	// (0x0003a35a) status_small_pane_g3

0xc4c9,	// (0x0003a363) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0003d48e) status_small_pane_g

0xc4d2,	// (0x0003a36c) status_small_pane_t1

0x1ae2,	// (0x0002f97c) main_video3_pane

0xd00e,	// (0x0003aea8) cams_zoom_vslider_pane

0xd016,	// (0x0003aeb0) image3_wide_pane_ParamLimits

0xd016,	// (0x0003aeb0) image3_wide_pane

0xd030,	// (0x0003aeca) image3_wide_small_pane

0xd03c,	// (0x0003aed6) main_video3_pane_g1_ParamLimits

0xd03c,	// (0x0003aed6) main_video3_pane_g1

0xd058,	// (0x0003aef2) main_video3_pane_g2_ParamLimits

0xd058,	// (0x0003aef2) main_video3_pane_g2

0x0001,

0xf844,	// (0x0003d6de) main_video3_pane_g_ParamLimits

0xf844,	// (0x0003d6de) main_video3_pane_g

0xd074,	// (0x0003af0e) main_video3_pane_t1_ParamLimits

0xd074,	// (0x0003af0e) main_video3_pane_t1

0xd09f,	// (0x0003af39) main_video3_pane_t2_ParamLimits

0xd09f,	// (0x0003af39) main_video3_pane_t2

0xd0ca,	// (0x0003af64) main_video3_pane_t3_ParamLimits

0xd0ca,	// (0x0003af64) main_video3_pane_t3

0x0002,

0xf849,	// (0x0003d6e3) main_video3_pane_t_ParamLimits

0xf849,	// (0x0003d6e3) main_video3_pane_t

0xd0f7,	// (0x0003af91) cams_zoom_vslider_pane_g1

0xd100,	// (0x0003af9a) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0003d6ea) cams_zoom_vslider_pane_g

0xd108,	// (0x0003afa2) small_slider_vertical_pane

0xc8fc,	// (0x0003a796) small_slider_vertical_pane_g1

0xc8fc,	// (0x0003a796) small_slider_vertical_pane_g2

0xd110,	// (0x0003afaa) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0003d6ef) small_slider_vertical_pane_g

0x1ae2,	// (0x0002f97c) main_hwr_training_pane

0xd119,	// (0x0003afb3) hwr_training_instruct_pane_ParamLimits

0xd119,	// (0x0003afb3) hwr_training_instruct_pane

0x60e8,	// (0x00033f82) hwr_training_navi_pane_ParamLimits

0x60e8,	// (0x00033f82) hwr_training_navi_pane

0x6107,	// (0x00033fa1) hwr_training_write_pane_ParamLimits

0x6107,	// (0x00033fa1) hwr_training_write_pane

0x9cde,	// (0x00037b78) bg_frame_shadow_pane

0xd150,	// (0x0003afea) hwr_training_write_pane_g1

0xd158,	// (0x0003aff2) hwr_training_write_pane_g2

0xd160,	// (0x0003affa) hwr_training_write_pane_g3

0xd168,	// (0x0003b002) hwr_training_write_pane_g4

0xd170,	// (0x0003b00a) hwr_training_write_pane_g5

0xd178,	// (0x0003b012) hwr_training_write_pane_g6

0xd180,	// (0x0003b01a) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0003d6f6) hwr_training_write_pane_g

0x6142,	// (0x00033fdc) hwr_training_navi_pane_g1_ParamLimits

0x6142,	// (0x00033fdc) hwr_training_navi_pane_g1

0x6154,	// (0x00033fee) hwr_training_navi_pane_g2_ParamLimits

0x6154,	// (0x00033fee) hwr_training_navi_pane_g2

0x6166,	// (0x00034000) hwr_training_navi_pane_g3_ParamLimits

0x6166,	// (0x00034000) hwr_training_navi_pane_g3

0x6176,	// (0x00034010) hwr_training_navi_pane_g4_ParamLimits

0x6176,	// (0x00034010) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0003d705) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0003d705) hwr_training_navi_pane_g

0x6183,	// (0x0003401d) hwr_training_navi_pane_t1

0x6191,	// (0x0003402b) list_single_hwr_training_instruct_pane_ParamLimits

0x6191,	// (0x0003402b) list_single_hwr_training_instruct_pane

0xd188,	// (0x0003b022) list_single_hwr_training_instruct_pane_t1

0xc83c,	// (0x0003a6d6) bg_frame_shadow_pane_g1

0xd197,	// (0x0003b031) bg_frame_shadow_pane_g2

0xd19f,	// (0x0003b039) bg_frame_shadow_pane_g3

0xd1a7,	// (0x0003b041) bg_frame_shadow_pane_g4

0xd1af,	// (0x0003b049) bg_frame_shadow_pane_g5

0xd1b7,	// (0x0003b051) bg_frame_shadow_pane_g6

0xd1bf,	// (0x0003b059) bg_frame_shadow_pane_g7

0xa4dd,	// (0x00038377) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0003d710) bg_frame_shadow_pane_g

0x1ae2,	// (0x0002f97c) main_video_tele_dialer_pane

0x0e45,	// (0x0002ecdf) aid_size_cell_video_keypad_ParamLimits

0x0e45,	// (0x0002ecdf) aid_size_cell_video_keypad

0x0e5f,	// (0x0002ecf9) grid_video_dialer_keypad_pane_ParamLimits

0x0e5f,	// (0x0002ecf9) grid_video_dialer_keypad_pane

0x0eab,	// (0x0002ed45) video_down_pane_cp_ParamLimits

0x0eab,	// (0x0002ed45) video_down_pane_cp

0x0ec1,	// (0x0002ed5b) cell_video_dialer_keypad_pane_ParamLimits

0x0ec1,	// (0x0002ed5b) cell_video_dialer_keypad_pane

0xd1c7,	// (0x0003b061) bg_button_pane_cp08_ParamLimits

0xd1c7,	// (0x0003b061) bg_button_pane_cp08

0x61c2,	// (0x0003405c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61c2,	// (0x0003405c) cell_video_dialer_keypad_pane_g1

0x5971,	// (0x0003380b) mup3_rocker2_pane_ParamLimits

0x5971,	// (0x0003380b) mup3_rocker2_pane

0xc8fc,	// (0x0003a796) mup3_rocker2_pane_g1

0x0636,	// (0x0002e4d0) main_dialer2_pane

0x1ae2,	// (0x0002f97c) main_mp4_pane

0x6217,	// (0x000340b1) main_mp4_pane_g1_ParamLimits

0x6217,	// (0x000340b1) main_mp4_pane_g1

0x6217,	// (0x000340b1) main_mp4_pane_g2_ParamLimits

0x6217,	// (0x000340b1) main_mp4_pane_g2

0x0ee3,	// (0x0002ed7d) main_mp4_pane_g3_ParamLimits

0x0ee3,	// (0x0002ed7d) main_mp4_pane_g3

0x6225,	// (0x000340bf) main_mp4_pane_g4_ParamLimits

0x6225,	// (0x000340bf) main_mp4_pane_g4

0x6253,	// (0x000340ed) main_mp4_pane_g5_ParamLimits

0x6253,	// (0x000340ed) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0003d730) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0003d730) main_mp4_pane_g

0x62c7,	// (0x00034161) main_mp4_pane_t1_ParamLimits

0x62c7,	// (0x00034161) main_mp4_pane_t1

0x6323,	// (0x000341bd) main_mp4_pane_t2_ParamLimits

0x6323,	// (0x000341bd) main_mp4_pane_t2

0xd1d3,	// (0x0003b06d) main_mp4_pane_t3_ParamLimits

0xd1d3,	// (0x0003b06d) main_mp4_pane_t3

0x6375,	// (0x0003420f) main_mp4_pane_t4_ParamLimits

0x6375,	// (0x0003420f) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003d741) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003d741) main_mp4_pane_t

0x63b9,	// (0x00034253) mp4_progress_pane_ParamLimits

0x63b9,	// (0x00034253) mp4_progress_pane

0x6403,	// (0x0003429d) mp4_rocker_pane_ParamLimits

0x6403,	// (0x0003429d) mp4_rocker_pane

0xd201,	// (0x0003b09b) mp4_progress_pane_t1

0xd21a,	// (0x0003b0b4) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003d74a) mp4_progress_pane_t

0xd233,	// (0x0003b0cd) mup_progress_pane_cp04

0xd26c,	// (0x0003b106) mp4_rocker_pane_g1

0x0f1f,	// (0x0002edb9) aid_cell_size_keypad2_ParamLimits

0x0f1f,	// (0x0002edb9) aid_cell_size_keypad2

0x0f35,	// (0x0002edcf) dialer2_ne_pane_ParamLimits

0x0f35,	// (0x0002edcf) dialer2_ne_pane

0x0f4f,	// (0x0002ede9) grid_dialer2_keypad_pane_ParamLimits

0x0f4f,	// (0x0002ede9) grid_dialer2_keypad_pane

0xc6e1,	// (0x0003a57b) bg_popup_call_pane_cp07_ParamLimits

0xc6e1,	// (0x0003a57b) bg_popup_call_pane_cp07

0x6423,	// (0x000342bd) dialer2_ne_pane_t1_ParamLimits

0x6423,	// (0x000342bd) dialer2_ne_pane_t1

0x0f6b,	// (0x0002ee05) cell_dialer2_keypad_pane_ParamLimits

0x0f6b,	// (0x0002ee05) cell_dialer2_keypad_pane

0xd276,	// (0x0003b110) bg_button_pane_pane_cp04_ParamLimits

0xd276,	// (0x0003b110) bg_button_pane_pane_cp04

0x645e,	// (0x000342f8) cell_dialer2_keypad_pane_g1_ParamLimits

0x645e,	// (0x000342f8) cell_dialer2_keypad_pane_g1

0x2822,	// (0x000306bc) aid_placing_vt_set_content_ParamLimits

0x2822,	// (0x000306bc) aid_placing_vt_set_content

0x284a,	// (0x000306e4) aid_placing_vt_set_title_ParamLimits

0x284a,	// (0x000306e4) aid_placing_vt_set_title

0x1ae2,	// (0x0002f97c) main_image3_pane

0x0feb,	// (0x0002ee85) area_side_right_pane_cp01_ParamLimits

0x0feb,	// (0x0002ee85) area_side_right_pane_cp01

0x6217,	// (0x000340b1) main_image3_pane_g1_ParamLimits

0x6217,	// (0x000340b1) main_image3_pane_g1

0x1002,	// (0x0002ee9c) main_image3_pane_g2_ParamLimits

0x1002,	// (0x0002ee9c) main_image3_pane_g2

0x102a,	// (0x0002eec4) main_image3_pane_g3_ParamLimits

0x102a,	// (0x0002eec4) main_image3_pane_g3

0x1054,	// (0x0002eeee) main_image3_pane_g4_ParamLimits

0x1054,	// (0x0002eeee) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003d759) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003d759) main_image3_pane_g

0x107e,	// (0x0002ef18) main_image3_pane_t1_ParamLimits

0x107e,	// (0x0002ef18) main_image3_pane_t1

0x10d6,	// (0x0002ef70) main_image3_pane_t2_ParamLimits

0x10d6,	// (0x0002ef70) main_image3_pane_t2

0x1128,	// (0x0002efc2) main_image3_pane_t3_ParamLimits

0x1128,	// (0x0002efc2) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003d762) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003d762) main_image3_pane_t

0xa9f8,	// (0x00038892) grid_sctrl_middle_pane_cp01_ParamLimits

0xa9f8,	// (0x00038892) grid_sctrl_middle_pane_cp01

0x64f8,	// (0x00034392) cell_sctrl_middle_pane_cp01_ParamLimits

0x64f8,	// (0x00034392) cell_sctrl_middle_pane_cp01

0x6515,	// (0x000343af) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6515,	// (0x000343af) cell_sctrl_middle_pane_cp01_g1

0x1ae2,	// (0x0002f97c) main_call4_pane

0x11b0,	// (0x0002f04a) aid_size_button_call4_ParamLimits

0x11b0,	// (0x0002f04a) aid_size_button_call4

0x11e3,	// (0x0002f07d) call4_windows_pane_ParamLimits

0x11e3,	// (0x0002f07d) call4_windows_pane

0x1202,	// (0x0002f09c) grid_call4_button_pane_ParamLimits

0x1202,	// (0x0002f09c) grid_call4_button_pane

0x6535,	// (0x000343cf) call4_windows_conf_pane

0x654c,	// (0x000343e6) popup_call4_audio_first_window_ParamLimits

0x654c,	// (0x000343e6) popup_call4_audio_first_window

0x659c,	// (0x00034436) popup_call4_audio_second_window_ParamLimits

0x659c,	// (0x00034436) popup_call4_audio_second_window

0x65b3,	// (0x0003444d) popup_call4_audio_wait_window_ParamLimits

0x65b3,	// (0x0003444d) popup_call4_audio_wait_window

0x122b,	// (0x0002f0c5) cell_call4_button_pane_ParamLimits

0x122b,	// (0x0002f0c5) cell_call4_button_pane

0x65c1,	// (0x0003445b) bg_button_pane_cp09_ParamLimits

0x65c1,	// (0x0003445b) bg_button_pane_cp09

0x1250,	// (0x0002f0ea) cell_call4_button_pane_g1_ParamLimits

0x1250,	// (0x0002f0ea) cell_call4_button_pane_g1

0x1276,	// (0x0002f110) cell_call4_button_pane_t1_ParamLimits

0x1276,	// (0x0002f110) cell_call4_button_pane_t1

0xd28a,	// (0x0003b124) popup_call4_audio_conf_window_ParamLimits

0xd28a,	// (0x0003b124) popup_call4_audio_conf_window

0x59d1,	// (0x0003386b) mup3_progress_pane_t1_ParamLimits

0x59f0,	// (0x0003388a) mup3_progress_pane_t2_ParamLimits

0xcc06,	// (0x0003aaa0) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0003d632) mup3_progress_pane_t_ParamLimits

0xcc23,	// (0x0003aabd) mup_progress_pane_cp03_ParamLimits

0x5f2e,	// (0x00033dc8) mup3_control_keys_pane_g4_copy1

0x63e7,	// (0x00034281) mp4_rocker2_pane_ParamLimits

0x63e7,	// (0x00034281) mp4_rocker2_pane

0xd29e,	// (0x0003b138) mp4_rocker2_pane_g1

0xd2a6,	// (0x0003b140) mp4_rocker2_pane_g2

0x65ff,	// (0x00034499) mp4_rocker2_pane_g3

0x6607,	// (0x000344a1) mp4_rocker2_pane_g4

0x660f,	// (0x000344a9) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003d76b) mp4_rocker2_pane_g

0x1ae2,	// (0x0002f97c) main_camera4_pane

0x1ae2,	// (0x0002f97c) main_video4_pane

0x0e79,	// (0x0002ed13) main_video_tele_dialer_pane_t1_ParamLimits

0x0e79,	// (0x0002ed13) main_video_tele_dialer_pane_t1

0x0e92,	// (0x0002ed2c) main_video_tele_dialer_pane_t2_ParamLimits

0x0e92,	// (0x0002ed2c) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0003d721) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0003d721) main_video_tele_dialer_pane_t

0x12b4,	// (0x0002f14e) cam4_autofocus_pane_ParamLimits

0x12b4,	// (0x0002f14e) cam4_autofocus_pane

0x12ca,	// (0x0002f164) cam4_image_uncrop_pane_ParamLimits

0x12ca,	// (0x0002f164) cam4_image_uncrop_pane

0x12e4,	// (0x0002f17e) cam4_indicators_pane_ParamLimits

0x12e4,	// (0x0002f17e) cam4_indicators_pane

0x130f,	// (0x0002f1a9) main_camera4_pane_g1_ParamLimits

0x130f,	// (0x0002f1a9) main_camera4_pane_g1

0x1321,	// (0x0002f1bb) main_camera4_pane_g2_ParamLimits

0x1321,	// (0x0002f1bb) main_camera4_pane_g2

0x1334,	// (0x0002f1ce) main_camera4_pane_g3_ParamLimits

0x1334,	// (0x0002f1ce) main_camera4_pane_g3

0x1347,	// (0x0002f1e1) main_camera4_pane_g4_ParamLimits

0x1347,	// (0x0002f1e1) main_camera4_pane_g4

0x135a,	// (0x0002f1f4) main_camera4_pane_g5_ParamLimits

0x135a,	// (0x0002f1f4) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003d776) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003d776) main_camera4_pane_g

0x137e,	// (0x0002f218) main_camera4_pane_t1_ParamLimits

0x137e,	// (0x0002f218) main_camera4_pane_t1

0x6647,	// (0x000344e1) bg_tb_trans_pane_cp06

0x665d,	// (0x000344f7) cam4_indicators_pane_g1

0x666e,	// (0x00034508) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003d791) cam4_indicators_pane_g

0x668c,	// (0x00034526) cam4_indicators_pane_t1

0x13ce,	// (0x0002f268) main_video4_pane_g1_ParamLimits

0x13ce,	// (0x0002f268) main_video4_pane_g1

0x13dd,	// (0x0002f277) main_video4_pane_g2_ParamLimits

0x13dd,	// (0x0002f277) main_video4_pane_g2

0x13ec,	// (0x0002f286) main_video4_pane_g3_ParamLimits

0x13ec,	// (0x0002f286) main_video4_pane_g3

0x13fb,	// (0x0002f295) main_video4_pane_g4_ParamLimits

0x13fb,	// (0x0002f295) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003d798) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003d798) main_video4_pane_g

0x1419,	// (0x0002f2b3) vid4_indicators_pane_ParamLimits

0x1419,	// (0x0002f2b3) vid4_indicators_pane

0x1447,	// (0x0002f2e1) video4_image_uncrop_cif_pane_ParamLimits

0x1447,	// (0x0002f2e1) video4_image_uncrop_cif_pane

0x1461,	// (0x0002f2fb) video4_image_uncrop_nhd_pane_ParamLimits

0x1461,	// (0x0002f2fb) video4_image_uncrop_nhd_pane

0x12ca,	// (0x0002f164) video4_image_uncrop_vga_pane_ParamLimits

0x12ca,	// (0x0002f164) video4_image_uncrop_vga_pane

0x1ac8,	// (0x0002f962) bg_tb_trans_pane_cp07

0x66b8,	// (0x00034552) vid4_indicators_pane_g1

0x66cc,	// (0x00034566) vid4_indicators_pane_g2

0x66e0,	// (0x0003457a) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003d7a3) vid4_indicators_pane_g

0x670f,	// (0x000345a9) vid4_indicators_pane_t1

0x6726,	// (0x000345c0) cam4_autofocus_pane_g1

0x672e,	// (0x000345c8) cam4_autofocus_pane_g2

0x6736,	// (0x000345d0) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003d7ae) cam4_autofocus_pane_g

0x673e,	// (0x000345d8) cam4_autofocus_pane_g3_copy1

0x61a6,	// (0x00034040) video_down_pane_cp_t1

0x61b4,	// (0x0003404e) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0003d726) video_down_pane_cp_t

0x1ac8,	// (0x0002f962) popup_vitu2_window_ParamLimits

0x1ac8,	// (0x0002f962) popup_vitu2_window

0x1475,	// (0x0002f30f) aid_size_cell2_itu2_ParamLimits

0x1475,	// (0x0002f30f) aid_size_cell2_itu2

0x149b,	// (0x0002f335) aid_size_cell_itu2_ParamLimits

0x149b,	// (0x0002f335) aid_size_cell_itu2

0x14f7,	// (0x0002f391) bg_popup_window_pane_cp09_ParamLimits

0x14f7,	// (0x0002f391) bg_popup_window_pane_cp09

0x1505,	// (0x0002f39f) field_vitu2_entry_pane_ParamLimits

0x1505,	// (0x0002f39f) field_vitu2_entry_pane

0x152b,	// (0x0002f3c5) grid_vitu2_function_pane_ParamLimits

0x152b,	// (0x0002f3c5) grid_vitu2_function_pane

0x157c,	// (0x0002f416) grid_vitu2_itu_pane_ParamLimits

0x157c,	// (0x0002f416) grid_vitu2_itu_pane

0x1614,	// (0x0002f4ae) cell_vitu2_itu_pane_ParamLimits

0x1614,	// (0x0002f4ae) cell_vitu2_itu_pane

0x1640,	// (0x0002f4da) cell_vitu2_function_pane_ParamLimits

0x1640,	// (0x0002f4da) cell_vitu2_function_pane

0xd2ae,	// (0x0003b148) bg_popup_call_pane_cp08_ParamLimits

0xd2ae,	// (0x0003b148) bg_popup_call_pane_cp08

0xd2c5,	// (0x0003b15f) field_vitu2_entry_pane_g1

0xd2d1,	// (0x0003b16b) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003d7b5) field_vitu2_entry_pane_g

0x6746,	// (0x000345e0) field_vitu2_entry_pane_t1_ParamLimits

0x6746,	// (0x000345e0) field_vitu2_entry_pane_t1

0xd2eb,	// (0x0003b185) field_vitu2_entry_pane_t2_ParamLimits

0xd2eb,	// (0x0003b185) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003d7bc) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003d7bc) field_vitu2_entry_pane_t

0x167f,	// (0x0002f519) bg_button_pane_cp010_ParamLimits

0x167f,	// (0x0002f519) bg_button_pane_cp010

0x6775,	// (0x0003460f) cell_vitu2_itu_pane_g1

0x169b,	// (0x0002f535) cell_vitu2_itu_pane_t1_ParamLimits

0x169b,	// (0x0002f535) cell_vitu2_itu_pane_t1

0x16f9,	// (0x0002f593) cell_vitu2_itu_pane_t2_ParamLimits

0x16f9,	// (0x0002f593) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003d7c6) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003d7c6) cell_vitu2_itu_pane_t

0x1ac8,	// (0x0002f962) bg_button_pane_cp011

0x17e5,	// (0x0002f67f) cell_vitu2_function_pane_g1

0x1ae2,	// (0x0002f97c) main_myfav_hc_pane

0x1178,	// (0x0002f012) popup_image3_note_pane_ParamLimits

0x1178,	// (0x0002f012) popup_image3_note_pane

0x1194,	// (0x0002f02e) popup_image3_tool_bar_pane_ParamLimits

0x1194,	// (0x0002f02e) popup_image3_tool_bar_pane

0x1787,	// (0x0002f621) cell_vitu2_itu_pane_t3_ParamLimits

0x1787,	// (0x0002f621) cell_vitu2_itu_pane_t3

0x9cde,	// (0x00037b78) bg_popup_trans_pane

0xd310,	// (0x0003b1aa) grid_image3_tool_bar_pane

0xd31a,	// (0x0003b1b4) bg_popup_trans_pane_g1

0xa842,	// (0x000386dc) bg_popup_trans_pane_g2

0xd322,	// (0x0003b1bc) bg_popup_trans_pane_g3

0xd32a,	// (0x0003b1c4) bg_popup_trans_pane_g4

0xd332,	// (0x0003b1cc) bg_popup_trans_pane_g5

0xd33a,	// (0x0003b1d4) bg_popup_trans_pane_g6

0xd342,	// (0x0003b1dc) bg_popup_trans_pane_g7

0xd34a,	// (0x0003b1e4) bg_popup_trans_pane_g8

0xa822,	// (0x000386bc) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003d7cd) bg_popup_trans_pane_g

0xd352,	// (0x0003b1ec) cell_image3_tool_bar_pane_ParamLimits

0xd352,	// (0x0003b1ec) cell_image3_tool_bar_pane

0xc8fc,	// (0x0003a796) cell_image3_tool_bar_pane_g1

0x9cde,	// (0x00037b78) bg_popup_trans_pane_cp1

0xd366,	// (0x0003b200) popup_image3_note_pane_t1

0xd374,	// (0x0003b20e) popup_image3_note_pane_t2

0xd382,	// (0x0003b21c) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003d7e0) popup_image3_note_pane_t

0xd390,	// (0x0003b22a) popup_image3_note_pane_t3_copy1

0x6787,	// (0x00034621) bg_myfav_hc_instruction_pane_ParamLimits

0x6787,	// (0x00034621) bg_myfav_hc_instruction_pane

0x679b,	// (0x00034635) cell_myfav_contact_pane_ParamLimits

0x679b,	// (0x00034635) cell_myfav_contact_pane

0x67b9,	// (0x00034653) cell_myfav_contact_pane_cp1_ParamLimits

0x67b9,	// (0x00034653) cell_myfav_contact_pane_cp1

0x67d1,	// (0x0003466b) cell_myfav_contact_pane_cp2_ParamLimits

0x67d1,	// (0x0003466b) cell_myfav_contact_pane_cp2

0x67e9,	// (0x00034683) cell_myfav_contact_pane_cp3_ParamLimits

0x67e9,	// (0x00034683) cell_myfav_contact_pane_cp3

0x6800,	// (0x0003469a) cell_myfav_contact_pane_cp4_ParamLimits

0x6800,	// (0x0003469a) cell_myfav_contact_pane_cp4

0x6818,	// (0x000346b2) cell_myfav_contact_pane_cp5_ParamLimits

0x6818,	// (0x000346b2) cell_myfav_contact_pane_cp5

0x682c,	// (0x000346c6) cell_myfav_contact_pane_cp6_ParamLimits

0x682c,	// (0x000346c6) cell_myfav_contact_pane_cp6

0x6842,	// (0x000346dc) cell_myfav_contact_pane_cp7_ParamLimits

0x6842,	// (0x000346dc) cell_myfav_contact_pane_cp7

0xd39e,	// (0x0003b238) listscroll_gen_pane_cp05

0x685c,	// (0x000346f6) main_myfav_hc_pane_g1_ParamLimits

0x685c,	// (0x000346f6) main_myfav_hc_pane_g1

0x6876,	// (0x00034710) main_myfav_hc_pane_g2_ParamLimits

0x6876,	// (0x00034710) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003d7e7) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003d7e7) main_myfav_hc_pane_g

0x68a8,	// (0x00034742) main_myfav_hc_pane_t1_ParamLimits

0x68a8,	// (0x00034742) main_myfav_hc_pane_t1

0xd3a7,	// (0x0003b241) main_myfav_hc_pane_t2_ParamLimits

0xd3a7,	// (0x0003b241) main_myfav_hc_pane_t2

0xd3b9,	// (0x0003b253) main_myfav_hc_pane_t3_ParamLimits

0xd3b9,	// (0x0003b253) main_myfav_hc_pane_t3

0x68bf,	// (0x00034759) main_myfav_hc_pane_t4_ParamLimits

0x68bf,	// (0x00034759) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003d7ee) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003d7ee) main_myfav_hc_pane_t

0xc8fc,	// (0x0003a796) bg_myfav_hc_instruction_pane_g1

0xd3cb,	// (0x0003b265) cell_myfav_contact_pane_g1_ParamLimits

0xd3cb,	// (0x0003b265) cell_myfav_contact_pane_g1

0xd3cb,	// (0x0003b265) cell_myfav_contact_pane_g2_ParamLimits

0xd3cb,	// (0x0003b265) cell_myfav_contact_pane_g2

0xd3d7,	// (0x0003b271) cell_myfav_contact_pane_g3_ParamLimits

0xd3d7,	// (0x0003b271) cell_myfav_contact_pane_g3

0xcbf0,	// (0x0003aa8a) cell_myfav_contact_pane_g4_ParamLimits

0xcbf0,	// (0x0003aa8a) cell_myfav_contact_pane_g4

0xd3e4,	// (0x0003b27e) cell_myfav_contact_pane_g5_ParamLimits

0xd3e4,	// (0x0003b27e) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003d7f9) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003d7f9) cell_myfav_contact_pane_g

0x6890,	// (0x0003472a) main_myfav_hc_pane_g3_ParamLimits

0x6890,	// (0x0003472a) main_myfav_hc_pane_g3

0x027b,	// (0x0002e115) popup_adpt_find_window

0x68e7,	// (0x00034781) afind_page_pane_ParamLimits

0x68e7,	// (0x00034781) afind_page_pane

0x68fc,	// (0x00034796) aid_size_cell_afind_ParamLimits

0x68fc,	// (0x00034796) aid_size_cell_afind

0x691a,	// (0x000347b4) bg_popup_sub_pane_cp09_ParamLimits

0x691a,	// (0x000347b4) bg_popup_sub_pane_cp09

0x6927,	// (0x000347c1) find_pane_cp01_ParamLimits

0x6927,	// (0x000347c1) find_pane_cp01

0xd3f0,	// (0x0003b28a) grid_afind_control_pane_ParamLimits

0xd3f0,	// (0x0003b28a) grid_afind_control_pane

0x6934,	// (0x000347ce) grid_afind_pane_ParamLimits

0x6934,	// (0x000347ce) grid_afind_pane

0x6956,	// (0x000347f0) cell_afind_pane_ParamLimits

0x6956,	// (0x000347f0) cell_afind_pane

0xc8fc,	// (0x0003a796) afind_page_pane_g1

0x69bd,	// (0x00034857) afind_page_pane_g2

0x69c6,	// (0x00034860) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003d804) afind_page_pane_g

0x69cf,	// (0x00034869) afind_page_pane_t1

0xd404,	// (0x0003b29e) cell_afind_grid_control_pane_ParamLimits

0xd404,	// (0x0003b29e) cell_afind_grid_control_pane

0xd276,	// (0x0003b110) bg_button_pane_cp69_ParamLimits

0xd276,	// (0x0003b110) bg_button_pane_cp69

0x69ef,	// (0x00034889) cell_afind_pane_g1_ParamLimits

0x69ef,	// (0x00034889) cell_afind_pane_g1

0x69fc,	// (0x00034896) cell_afind_pane_t1_ParamLimits

0x69fc,	// (0x00034896) cell_afind_pane_t1

0xa63b,	// (0x000384d5) bg_button_pane_cp72

0xd413,	// (0x0003b2ad) cell_afind_grid_control_pane_g1

0x4584,	// (0x0003241e) aid_image_placing_area_ParamLimits

0x4584,	// (0x0003241e) aid_image_placing_area

0xcf19,	// (0x0003adb3) field_vitu_entry_pane_g1_ParamLimits

0xcf19,	// (0x0003adb3) field_vitu_entry_pane_g1

0xcf25,	// (0x0003adbf) field_vitu_entry_pane_g2_ParamLimits

0xcf25,	// (0x0003adbf) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0003d6b1) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0003d6b1) field_vitu_entry_pane_g

0x5ff5,	// (0x00033e8f) cell_vitu_itu_pane_g1_ParamLimits

0x6037,	// (0x00033ed1) cell_vitu_itu_pane_t3_ParamLimits

0x6037,	// (0x00033ed1) cell_vitu_itu_pane_t3

0xd201,	// (0x0003b09b) mp4_progress_pane_t1_ParamLimits

0xd21a,	// (0x0003b0b4) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003d74a) mp4_progress_pane_t_ParamLimits

0xd233,	// (0x0003b0cd) mup_progress_pane_cp04_ParamLimits

0x68d3,	// (0x0003476d) main_myfav_hc_pane_t5_ParamLimits

0x68d3,	// (0x0003476d) main_myfav_hc_pane_t5

0x1a45,	// (0x0002f8df) aid_zoom_text_primary

0x027b,	// (0x0002e115) popup_adpt_find_window_ParamLimits

0x1ac8,	// (0x0002f962) main_cam_set_pane

0x12fb,	// (0x0002f195) cam4_zoom_pane_ParamLimits

0x12fb,	// (0x0002f195) cam4_zoom_pane

0x6a0e,	// (0x000348a8) main_cam_set_pane_g1_ParamLimits

0x6a0e,	// (0x000348a8) main_cam_set_pane_g1

0x6a1c,	// (0x000348b6) main_cam_set_pane_g2_ParamLimits

0x6a1c,	// (0x000348b6) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003d80b) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003d80b) main_cam_set_pane_g

0x6a3d,	// (0x000348d7) main_cam_set_pane_t1_ParamLimits

0x6a3d,	// (0x000348d7) main_cam_set_pane_t1

0x6a58,	// (0x000348f2) main_cset_listscroll_pane_ParamLimits

0x6a58,	// (0x000348f2) main_cset_listscroll_pane

0x6a78,	// (0x00034912) main_cset_slider_pane_ParamLimits

0x6a78,	// (0x00034912) main_cset_slider_pane

0xd424,	// (0x0003b2be) main_cset_list_pane_ParamLimits

0xd424,	// (0x0003b2be) main_cset_list_pane

0xd434,	// (0x0003b2ce) scroll_pane_cp028

0x6a9e,	// (0x00034938) aid_area_touch_slider

0x6aba,	// (0x00034954) cset_slider_pane

0x6ae4,	// (0x0003497e) main_cset_slider_pane_g1

0x6af9,	// (0x00034993) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003d810) main_cset_slider_pane_g

0xd46d,	// (0x0003b307) main_cset_slider_pane_t1

0x6bb5,	// (0x00034a4f) main_cset_slider_pane_t2

0x6bcf,	// (0x00034a69) main_cset_slider_pane_t3

0x6be9,	// (0x00034a83) main_cset_slider_pane_t4

0x6c03,	// (0x00034a9d) main_cset_slider_pane_t5

0x6c1d,	// (0x00034ab7) main_cset_slider_pane_t6

0x6c32,	// (0x00034acc) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003d835) main_cset_slider_pane_t

0x6d36,	// (0x00034bd0) cset_list_set_pane_ParamLimits

0x6d36,	// (0x00034bd0) cset_list_set_pane

0x6d48,	// (0x00034be2) aid_position_infowindow_above

0x6d50,	// (0x00034bea) aid_position_infowindow_below

0xd50d,	// (0x0003b3a7) cset_list_set_pane_g1_ParamLimits

0xd50d,	// (0x0003b3a7) cset_list_set_pane_g1

0xd519,	// (0x0003b3b3) cset_list_set_pane_g3_ParamLimits

0xd519,	// (0x0003b3b3) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003d854) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003d854) cset_list_set_pane_g

0xd528,	// (0x0003b3c2) cset_list_set_pane_t1_ParamLimits

0xd528,	// (0x0003b3c2) cset_list_set_pane_t1

0xa9f8,	// (0x00038892) list_highlight_pane_cp021_ParamLimits

0xa9f8,	// (0x00038892) list_highlight_pane_cp021

0xb1b1,	// (0x0003904b) cset_slider_pane_g1

0xb1c3,	// (0x0003905d) cset_slider_pane_g2

0xb1ba,	// (0x00039054) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003d859) cset_slider_pane_g

0x6d58,	// (0x00034bf2) aid_area_touch_cam4_zoom

0x6d60,	// (0x00034bfa) cam4_zoom_cont_pane

0x6d68,	// (0x00034c02) cam4_zoom_pane_g1

0x6d70,	// (0x00034c0a) cam4_zoom_pane_g2

0x17f9,	// (0x0002f693) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003d860) cam4_zoom_pane_g

0x6d78,	// (0x00034c12) cam4_zoom_cont_pane_g1

0x6d81,	// (0x00034c1b) cam4_zoom_cont_pane_g2

0x6d8a,	// (0x00034c24) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003d867) cam4_zoom_cont_pane_g

0x11ce,	// (0x0002f068) call4_image_pane_ParamLimits

0x11ce,	// (0x0002f068) call4_image_pane

0x6535,	// (0x000343cf) call4_windows_conf_pane_ParamLimits

0x657a,	// (0x00034414) popup_call4_audio_in_window_ParamLimits

0x657a,	// (0x00034414) popup_call4_audio_in_window

0x9cde,	// (0x00037b78) bg_popup_call2_act_pane_cp02

0xd282,	// (0x0003b11c) call4_list_conf_pane

0xc8fc,	// (0x0003a796) call4_image_pane_g1

0xc8fc,	// (0x0003a796) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0003d572) call4_image_pane_g

0xd53d,	// (0x0003b3d7) list_single_graphic_popup_conf4_pane_ParamLimits

0xd53d,	// (0x0003b3d7) list_single_graphic_popup_conf4_pane

0x9cde,	// (0x00037b78) list_highlight_pane_cp022

0xd550,	// (0x0003b3ea) list_single_graphic_popup_conf4_pane_g1

0xad82,	// (0x00038c1c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003d86e) list_single_graphic_popup_conf4_pane_g

0xd558,	// (0x0003b3f2) list_single_graphic_popup_conf4_pane_t1

0x296e,	// (0x00030808) popup_vtel_slider_window_ParamLimits

0x296e,	// (0x00030808) popup_vtel_slider_window

0xd246,	// (0x0003b0e0) dialer2_ne_pane_t2_ParamLimits

0xd246,	// (0x0003b0e0) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003d74f) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003d74f) dialer2_ne_pane_t

0xc6e1,	// (0x0003a57b) bg_popup_sub_pane_cp010_ParamLimits

0xc6e1,	// (0x0003a57b) bg_popup_sub_pane_cp010

0x6d93,	// (0x00034c2d) popup_vtel_slider_window_g1_ParamLimits

0x6d93,	// (0x00034c2d) popup_vtel_slider_window_g1

0x6da6,	// (0x00034c40) popup_vtel_slider_window_g2_ParamLimits

0x6da6,	// (0x00034c40) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003d873) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003d873) popup_vtel_slider_window_g

0x6dfc,	// (0x00034c96) vtel_slider_pane_ParamLimits

0x6dfc,	// (0x00034c96) vtel_slider_pane

0x6e1e,	// (0x00034cb8) vtel_slider_pane_g1_ParamLimits

0x6e1e,	// (0x00034cb8) vtel_slider_pane_g1

0x6e32,	// (0x00034ccc) vtel_slider_pane_g2_ParamLimits

0x6e32,	// (0x00034ccc) vtel_slider_pane_g2

0x6e4a,	// (0x00034ce4) vtel_slider_pane_g3_ParamLimits

0x6e4a,	// (0x00034ce4) vtel_slider_pane_g3

0x6e1e,	// (0x00034cb8) vtel_slider_pane_g4_ParamLimits

0x6e1e,	// (0x00034cb8) vtel_slider_pane_g4

0x6e60,	// (0x00034cfa) vtel_slider_pane_g5_ParamLimits

0x6e60,	// (0x00034cfa) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003d87c) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003d87c) vtel_slider_pane_g

0x1ac8,	// (0x0002f962) main_gallery2_pane

0x14c7,	// (0x0002f361) aid_size_row_itut2_dropdow_list_ParamLimits

0x14c7,	// (0x0002f361) aid_size_row_itut2_dropdow_list

0x1553,	// (0x0002f3ed) grid_vitu2_function_top_pane_ParamLimits

0x1553,	// (0x0002f3ed) grid_vitu2_function_top_pane

0x15bd,	// (0x0002f457) popup_vitu2_dropdown_list_window_ParamLimits

0x15bd,	// (0x0002f457) popup_vitu2_dropdown_list_window

0x15e6,	// (0x0002f480) popup_vitu2_match_list_window

0x1801,	// (0x0002f69b) cell_vitu2_function_top_pane_ParamLimits

0x1801,	// (0x0002f69b) cell_vitu2_function_top_pane

0x1819,	// (0x0002f6b3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1819,	// (0x0002f6b3) cell_vitu2_function_top_pane_cp01

0x1835,	// (0x0002f6cf) cell_vitu2_function_top_wide_pane_ParamLimits

0x1835,	// (0x0002f6cf) cell_vitu2_function_top_wide_pane

0x1ac8,	// (0x0002f962) bg_button_pane_cp012

0x1851,	// (0x0002f6eb) cell_vitu2_function_top_pane_g1

0x6e84,	// (0x00034d1e) bg_button_pane_cp013_ParamLimits

0x6e84,	// (0x00034d1e) bg_button_pane_cp013

0x6ea0,	// (0x00034d3a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6ea0,	// (0x00034d3a) cell_vitu2_function_top_wide_pane_g1

0x1ac8,	// (0x0002f962) bg_popup_sub_pane_cp20

0x1865,	// (0x0002f6ff) list_vitu2_match_list_pane

0xd31a,	// (0x0003b1b4) bg_popup_sub_pane_cp20_g1

0xd322,	// (0x0003b1bc) bg_popup_sub_pane_cp20_g2

0xa842,	// (0x000386dc) bg_popup_sub_pane_cp20_g3

0xd32a,	// (0x0003b1c4) bg_popup_sub_pane_cp20_g4

0xa822,	// (0x000386bc) bg_popup_sub_pane_cp20_g5

0xd56e,	// (0x0003b408) bg_popup_sub_pane_cp20_g6

0xd33a,	// (0x0003b1d4) bg_popup_sub_pane_cp20_g7

0xd342,	// (0x0003b1dc) bg_popup_sub_pane_cp20_g8

0xd34a,	// (0x0003b1e4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003d887) bg_popup_sub_pane_cp20_g

0x6eb8,	// (0x00034d52) list_vitu2_match_list_item_pane_ParamLimits

0x6eb8,	// (0x00034d52) list_vitu2_match_list_item_pane

0x6eca,	// (0x00034d64) list_vitu2_match_list_item_pane_t1

0x1ae2,	// (0x0002f97c) bg_popup_sub_pane_cp21

0x6f28,	// (0x00034dc2) grid_vitu2_dropdown_list_pane

0x1883,	// (0x0002f71d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1883,	// (0x0002f71d) cell_vitu2_dropdown_list_char_pane

0x18a4,	// (0x0002f73e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x18a4,	// (0x0002f73e) cell_vitu2_dropdown_list_ctrl_pane

0xd576,	// (0x0003b410) cell_vitu2_dropdown_list_char_pane_g1

0xd57f,	// (0x0003b419) cell_vitu2_dropdown_list_char_pane_g2

0xd588,	// (0x0003b422) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003d8a4) cell_vitu2_dropdown_list_char_pane_g

0x18d0,	// (0x0002f76a) cell_vitu2_dropdown_list_char_pane_t1

0x6f30,	// (0x00034dca) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f30,	// (0x00034dca) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f3d,	// (0x00034dd7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f3d,	// (0x00034dd7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f4a,	// (0x00034de4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f4a,	// (0x00034de4) cell_vitu2_dropdown_list_ctrl_pane_g3

0x18de,	// (0x0002f778) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x18de,	// (0x0002f778) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6647,	// (0x000344e1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6647,	// (0x000344e1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003d8ab) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003d8ab) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f57,	// (0x00034df1) aid_size_cell_gallery2_ParamLimits

0x6f57,	// (0x00034df1) aid_size_cell_gallery2

0x6f75,	// (0x00034e0f) grid_gallery2_pane_ParamLimits

0x6f75,	// (0x00034e0f) grid_gallery2_pane

0x6f8f,	// (0x00034e29) scroll_pane_cp029_ParamLimits

0x6f8f,	// (0x00034e29) scroll_pane_cp029

0x6fa0,	// (0x00034e3a) cell_gallery2_pane_ParamLimits

0x6fa0,	// (0x00034e3a) cell_gallery2_pane

0xd591,	// (0x0003b42b) cell_gallery2_pane_g2

0x6fff,	// (0x00034e99) cell_gallery2_pane_g3

0xd599,	// (0x0003b433) cell_gallery2_pane_g4

0xd5a1,	// (0x0003b43b) cell_gallery2_pane_g5

0xa5e9,	// (0x00038483) grid_highlight_pane_cp10

0x15e6,	// (0x0002f480) popup_vitu2_match_list_window_ParamLimits

0x15fd,	// (0x0002f497) popup_vitu2_query_window_ParamLimits

0x15fd,	// (0x0002f497) popup_vitu2_query_window

0x1ae2,	// (0x0002f97c) bg_vitu2_candi_button_pane

0xd576,	// (0x0003b410) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd57f,	// (0x0003b419) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd588,	// (0x0003b422) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7007,	// (0x00034ea1) bg_button_pane_cp015

0x7019,	// (0x00034eb3) bg_button_pane_cp016

0x702c,	// (0x00034ec6) bg_button_pane_cp017

0xc4f4,	// (0x0003a38e) bg_popup_sub_pane_cp22

0xd5a9,	// (0x0003b443) popup_vitu2_query_window_g1

0x7071,	// (0x00034f0b) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003d8b6) popup_vitu2_query_window_g

0x7090,	// (0x00034f2a) popup_vitu2_query_window_t1_ParamLimits

0x7090,	// (0x00034f2a) popup_vitu2_query_window_t1

0x70c5,	// (0x00034f5f) popup_vitu2_query_window_t2_ParamLimits

0x70c5,	// (0x00034f5f) popup_vitu2_query_window_t2

0x70d7,	// (0x00034f71) popup_vitu2_query_window_t3_ParamLimits

0x70d7,	// (0x00034f71) popup_vitu2_query_window_t3

0x70ff,	// (0x00034f99) popup_vitu2_query_window_t4_ParamLimits

0x70ff,	// (0x00034f99) popup_vitu2_query_window_t4

0x7120,	// (0x00034fba) popup_vitu2_query_window_t5_ParamLimits

0x7120,	// (0x00034fba) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003d8bd) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003d8bd) popup_vitu2_query_window_t

0xd41c,	// (0x0003b2b6) main_cset_text_pane

0x6a9e,	// (0x00034938) aid_area_touch_slider_ParamLimits

0x6aba,	// (0x00034954) cset_slider_pane_ParamLimits

0x6ae4,	// (0x0003497e) main_cset_slider_pane_g1_ParamLimits

0x6af9,	// (0x00034993) main_cset_slider_pane_g2_ParamLimits

0xd43d,	// (0x0003b2d7) main_cset_slider_pane_g3_ParamLimits

0xd43d,	// (0x0003b2d7) main_cset_slider_pane_g3

0x6b0e,	// (0x000349a8) main_cset_slider_pane_g4_ParamLimits

0x6b0e,	// (0x000349a8) main_cset_slider_pane_g4

0x6b1d,	// (0x000349b7) main_cset_slider_pane_g5_ParamLimits

0x6b1d,	// (0x000349b7) main_cset_slider_pane_g5

0x6b29,	// (0x000349c3) main_cset_slider_pane_g6_ParamLimits

0x6b29,	// (0x000349c3) main_cset_slider_pane_g6

0xf976,	// (0x0003d810) main_cset_slider_pane_g_ParamLimits

0xd46d,	// (0x0003b307) main_cset_slider_pane_t1_ParamLimits

0x6bb5,	// (0x00034a4f) main_cset_slider_pane_t2_ParamLimits

0x6bcf,	// (0x00034a69) main_cset_slider_pane_t3_ParamLimits

0x6be9,	// (0x00034a83) main_cset_slider_pane_t4_ParamLimits

0x6c03,	// (0x00034a9d) main_cset_slider_pane_t5_ParamLimits

0x6c1d,	// (0x00034ab7) main_cset_slider_pane_t6_ParamLimits

0x6c32,	// (0x00034acc) main_cset_slider_pane_t7_ParamLimits

0x6c5c,	// (0x00034af6) main_cset_slider_pane_t8_ParamLimits

0x6c5c,	// (0x00034af6) main_cset_slider_pane_t8

0x6c84,	// (0x00034b1e) main_cset_slider_pane_t9_ParamLimits

0x6c84,	// (0x00034b1e) main_cset_slider_pane_t9

0x6cac,	// (0x00034b46) main_cset_slider_pane_t10_ParamLimits

0x6cac,	// (0x00034b46) main_cset_slider_pane_t10

0x6cd4,	// (0x00034b6e) main_cset_slider_pane_t11_ParamLimits

0x6cd4,	// (0x00034b6e) main_cset_slider_pane_t11

0x6cfc,	// (0x00034b96) main_cset_slider_pane_t12_ParamLimits

0x6cfc,	// (0x00034b96) main_cset_slider_pane_t12

0x6d19,	// (0x00034bb3) main_cset_slider_pane_t13_ParamLimits

0x6d19,	// (0x00034bb3) main_cset_slider_pane_t13

0xf99b,	// (0x0003d835) main_cset_slider_pane_t_ParamLimits

0x9cde,	// (0x00037b78) bg_popup_sub_pane_cp011

0xd5b5,	// (0x0003b44f) main_cset_text_pane_g1

0xd5bd,	// (0x0003b457) main_cset_text_pane_t1

0xd5cb,	// (0x0003b465) main_cset_text_pane_t2

0xd5d9,	// (0x0003b473) main_cset_text_pane_t3

0xd5e7,	// (0x0003b481) main_cset_text_pane_t4

0xd5f5,	// (0x0003b48f) main_cset_text_pane_t5

0xd603,	// (0x0003b49d) main_cset_text_pane_t6

0xd611,	// (0x0003b4ab) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003d8cc) main_cset_text_pane_t

0x1ae2,	// (0x0002f97c) main_cam4_burst_pane

0x1ae2,	// (0x0002f97c) main_cam5_pane

0x69dd,	// (0x00034877) bg_button_pane_cp019

0x69e6,	// (0x00034880) bg_button_pane_cp020

0xd449,	// (0x0003b2e3) main_cset_slider_pane_g7_ParamLimits

0xd449,	// (0x0003b2e3) main_cset_slider_pane_g7

0xd455,	// (0x0003b2ef) main_cset_slider_pane_g8_ParamLimits

0xd455,	// (0x0003b2ef) main_cset_slider_pane_g8

0x6b3d,	// (0x000349d7) main_cset_slider_pane_g9_ParamLimits

0x6b3d,	// (0x000349d7) main_cset_slider_pane_g9

0x6b49,	// (0x000349e3) main_cset_slider_pane_g10_ParamLimits

0x6b49,	// (0x000349e3) main_cset_slider_pane_g10

0x6b55,	// (0x000349ef) main_cset_slider_pane_g11_ParamLimits

0x6b55,	// (0x000349ef) main_cset_slider_pane_g11

0x6b61,	// (0x000349fb) main_cset_slider_pane_g12_ParamLimits

0x6b61,	// (0x000349fb) main_cset_slider_pane_g12

0x6b6d,	// (0x00034a07) main_cset_slider_pane_g13_ParamLimits

0x6b6d,	// (0x00034a07) main_cset_slider_pane_g13

0x6b79,	// (0x00034a13) main_cset_slider_pane_g14_ParamLimits

0x6b79,	// (0x00034a13) main_cset_slider_pane_g14

0x6b85,	// (0x00034a1f) main_cset_slider_pane_g15_ParamLimits

0x6b85,	// (0x00034a1f) main_cset_slider_pane_g15

0xd49b,	// (0x0003b335) main_cset_slider_pane_t14_ParamLimits

0xd49b,	// (0x0003b335) main_cset_slider_pane_t14

0xd4d4,	// (0x0003b36e) main_cset_slider_pane_t15_ParamLimits

0xd4d4,	// (0x0003b36e) main_cset_slider_pane_t15

0x7197,	// (0x00035031) aid_cam4_burst_size_cell_ParamLimits

0x7197,	// (0x00035031) aid_cam4_burst_size_cell

0x71b7,	// (0x00035051) grid_cam4_burst_pane_ParamLimits

0x71b7,	// (0x00035051) grid_cam4_burst_pane

0x71ef,	// (0x00035089) linegrid_cam4_burst_pane_ParamLimits

0x71ef,	// (0x00035089) linegrid_cam4_burst_pane

0xd61f,	// (0x0003b4b9) scroll_pane_cp30_ParamLimits

0xd61f,	// (0x0003b4b9) scroll_pane_cp30

0x7213,	// (0x000350ad) cell_cam4_burst_pane_ParamLimits

0x7213,	// (0x000350ad) cell_cam4_burst_pane

0xd62b,	// (0x0003b4c5) linegrid_cam4_burst_pane_g1_ParamLimits

0xd62b,	// (0x0003b4c5) linegrid_cam4_burst_pane_g1

0x7260,	// (0x000350fa) linegrid_cam4_burst_pane_g2_ParamLimits

0x7260,	// (0x000350fa) linegrid_cam4_burst_pane_g2

0xd638,	// (0x0003b4d2) linegrid_cam4_burst_pane_g3_ParamLimits

0xd638,	// (0x0003b4d2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003d8db) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003d8db) linegrid_cam4_burst_pane_g

0x7271,	// (0x0003510b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7271,	// (0x0003510b) linegrid_cam4_burst_pane_g3_copy1

0xd645,	// (0x0003b4df) linegrid_cam4_burst_pane_g4_ParamLimits

0xd645,	// (0x0003b4df) linegrid_cam4_burst_pane_g4

0x728b,	// (0x00035125) linegrid_cam4_burst_pane_g5_ParamLimits

0x728b,	// (0x00035125) linegrid_cam4_burst_pane_g5

0x729c,	// (0x00035136) linegrid_cam4_burst_pane_g6_ParamLimits

0x729c,	// (0x00035136) linegrid_cam4_burst_pane_g6

0xd652,	// (0x0003b4ec) linegrid_cam4_burst_pane_g7_ParamLimits

0xd652,	// (0x0003b4ec) linegrid_cam4_burst_pane_g7

0x72b3,	// (0x0003514d) cell_cam4_burst_pane_g1

0xd66b,	// (0x0003b505) main_cam5_pane_t1_ParamLimits

0xd66b,	// (0x0003b505) main_cam5_pane_t1

0xd67d,	// (0x0003b517) main_cam5_pane_t2_ParamLimits

0xd67d,	// (0x0003b517) main_cam5_pane_t2

0xd68f,	// (0x0003b529) main_cam5_pane_t3_ParamLimits

0xd68f,	// (0x0003b529) main_cam5_pane_t3

0xd6a1,	// (0x0003b53b) main_cam5_pane_t4_ParamLimits

0xd6a1,	// (0x0003b53b) main_cam5_pane_t4

0xd6b9,	// (0x0003b553) main_cam5_pane_t5_ParamLimits

0xd6b9,	// (0x0003b553) main_cam5_pane_t5

0xd6cd,	// (0x0003b567) main_cam5_pane_t6_ParamLimits

0xd6cd,	// (0x0003b567) main_cam5_pane_t6

0xd6e1,	// (0x0003b57b) main_cam5_pane_t7_ParamLimits

0xd6e1,	// (0x0003b57b) main_cam5_pane_t7

0xd6f3,	// (0x0003b58d) main_cam5_pane_t8_ParamLimits

0xd6f3,	// (0x0003b58d) main_cam5_pane_t8

0xd70f,	// (0x0003b5a9) main_cam5_pane_t9_ParamLimits

0xd70f,	// (0x0003b5a9) main_cam5_pane_t9

0xd721,	// (0x0003b5bb) main_cam5_pane_t10_ParamLimits

0xd721,	// (0x0003b5bb) main_cam5_pane_t10

0xd733,	// (0x0003b5cd) main_cam5_pane_t11_ParamLimits

0xd733,	// (0x0003b5cd) main_cam5_pane_t11

0xd745,	// (0x0003b5df) main_cam5_pane_t12_ParamLimits

0xd745,	// (0x0003b5df) main_cam5_pane_t12

0xd75a,	// (0x0003b5f4) main_cam5_pane_t13_ParamLimits

0xd75a,	// (0x0003b5f4) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003d8e7) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003d8e7) main_cam5_pane_t

0x02fd,	// (0x0002e197) popup_scut_keymap_window_ParamLimits

0x02fd,	// (0x0002e197) popup_scut_keymap_window

0x72c6,	// (0x00035160) aid_size_cell_brow_shortcut

0xa5e9,	// (0x00038483) bg_popup_window_pane_cp010

0x72d2,	// (0x0003516c) grid_scut_pane

0x72de,	// (0x00035178) cell_scut_pane_ParamLimits

0x72de,	// (0x00035178) cell_scut_pane

0x72f5,	// (0x0003518f) cell_scut_pane_g1

0xd777,	// (0x0003b611) cell_scut_pane_t1

0xd786,	// (0x0003b620) cell_scut_pane_t2

0x72fe,	// (0x00035198) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003d902) cell_scut_pane_t

0x558a,	// (0x00033424) main_mup3_pane_g8_ParamLimits

0x558a,	// (0x00033424) main_mup3_pane_g8

0x14df,	// (0x0002f379) area_vitu2_query_pane_ParamLimits

0x14df,	// (0x0002f379) area_vitu2_query_pane

0x703f,	// (0x00034ed9) input_focus_pane_cp08

0xd795,	// (0x0003b62f) area_vitu2_query_pane_g1

0x730c,	// (0x000351a6) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003d909) area_vitu2_query_pane_g

0x731d,	// (0x000351b7) area_vitu2_query_pane_t1_ParamLimits

0x731d,	// (0x000351b7) area_vitu2_query_pane_t1

0x7331,	// (0x000351cb) area_vitu2_query_pane_t2_ParamLimits

0x7331,	// (0x000351cb) area_vitu2_query_pane_t2

0x7345,	// (0x000351df) area_vitu2_query_pane_t3_ParamLimits

0x7345,	// (0x000351df) area_vitu2_query_pane_t3

0xd7a1,	// (0x0003b63b) area_vitu2_query_pane_t4_ParamLimits

0xd7a1,	// (0x0003b63b) area_vitu2_query_pane_t4

0xd7c9,	// (0x0003b663) area_vitu2_query_pane_t5_ParamLimits

0xd7c9,	// (0x0003b663) area_vitu2_query_pane_t5

0xd7f1,	// (0x0003b68b) area_vitu2_query_pane_t6_ParamLimits

0xd7f1,	// (0x0003b68b) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003d90e) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003d90e) area_vitu2_query_pane_t

0x736d,	// (0x00035207) bg_button_pane_cp018

0x737b,	// (0x00035215) bg_button_pane_cp021

0x7387,	// (0x00035221) bg_button_pane_cp022

0x7396,	// (0x00035230) input_focus_pane_cp09

0xaebe,	// (0x00038d58) aid_size_touch_mv_arrow_left

0xaee7,	// (0x00038d81) aid_size_touch_mv_arrow_right

0x6b9d,	// (0x00034a37) main_cset_slider_pane_g16_ParamLimits

0x6b9d,	// (0x00034a37) main_cset_slider_pane_g16

0x6ba9,	// (0x00034a43) main_cset_slider_pane_g17_ParamLimits

0x6ba9,	// (0x00034a43) main_cset_slider_pane_g17

0x72b3,	// (0x0003514d) cell_cam4_burst_pane_g1_ParamLimits

0x9cde,	// (0x00037b78) compa_mode_pane

0x6db6,	// (0x00034c50) popup_vtel_slider_window_g3_ParamLimits

0x6db6,	// (0x00034c50) popup_vtel_slider_window_g3

0x6dcd,	// (0x00034c67) popup_vtel_slider_window_g4_ParamLimits

0x6dcd,	// (0x00034c67) popup_vtel_slider_window_g4

0x6de4,	// (0x00034c7e) popup_vtel_slider_window_t1_ParamLimits

0x6de4,	// (0x00034c7e) popup_vtel_slider_window_t1

0x1ae2,	// (0x0002f97c) main_cl_pane

0x4ac0,	// (0x0003295a) popup_imed_adjust2_window_ParamLimits

0xc4f4,	// (0x0003a38e) bg_tb_trans_pane_cp05_ParamLimits

0xce4e,	// (0x0003ace8) popup_imed_adjust2_window_g1_ParamLimits

0xce5d,	// (0x0003acf7) popup_imed_adjust2_window_g2_ParamLimits

0xce5d,	// (0x0003acf7) popup_imed_adjust2_window_g2

0xce69,	// (0x0003ad03) popup_imed_adjust2_window_g3_ParamLimits

0xce69,	// (0x0003ad03) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0003d675) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0003d675) popup_imed_adjust2_window_g

0xce75,	// (0x0003ad0f) popup_imed_adjust2_window_t1_ParamLimits

0xce8d,	// (0x0003ad27) slider_imed_adjust_pane_ParamLimits

0xcea1,	// (0x0003ad3b) slider_imed_adjust_pane_g1_ParamLimits

0xceb1,	// (0x0003ad4b) slider_imed_adjust_pane_g2_ParamLimits

0xcec1,	// (0x0003ad5b) slider_imed_adjust_pane_g3_ParamLimits

0xced2,	// (0x0003ad6c) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0003d67c) slider_imed_adjust_pane_g_ParamLimits

0x129c,	// (0x0002f136) aid_touch_area_cam4_ParamLimits

0x129c,	// (0x0002f136) aid_touch_area_cam4

0x6617,	// (0x000344b1) battery_pane_cp01

0x136b,	// (0x0002f205) main_camera4_pane_g6_ParamLimits

0x136b,	// (0x0002f205) main_camera4_pane_g6

0x1395,	// (0x0002f22f) main_camera4_pane_t2_ParamLimits

0x1395,	// (0x0002f22f) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003d783) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003d783) main_camera4_pane_t

0x13b6,	// (0x0002f250) aid_touch_area_vid4_ParamLimits

0x13b6,	// (0x0002f250) aid_touch_area_vid4

0x140a,	// (0x0002f2a4) main_video4_pane_g5_ParamLimits

0x140a,	// (0x0002f2a4) main_video4_pane_g5

0x142f,	// (0x0002f2c9) vid4_progress_pane_ParamLimits

0x142f,	// (0x0002f2c9) vid4_progress_pane

0xd461,	// (0x0003b2fb) main_cset_slider_pane_g18_ParamLimits

0xd461,	// (0x0003b2fb) main_cset_slider_pane_g18

0xd65f,	// (0x0003b4f9) cell_cam4_burst_pane_g2_ParamLimits

0xd65f,	// (0x0003b4f9) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003d8e2) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003d8e2) cell_cam4_burst_pane_g

0xa41b,	// (0x000382b5) bg_cl_pane_ParamLimits

0xa41b,	// (0x000382b5) bg_cl_pane

0x73a5,	// (0x0003523f) cl_header_pane_ParamLimits

0x73a5,	// (0x0003523f) cl_header_pane

0x73b9,	// (0x00035253) cl_listscroll_pane_ParamLimits

0x73b9,	// (0x00035253) cl_listscroll_pane

0xd83d,	// (0x0003b6d7) bg_cl_pane_g1

0xd845,	// (0x0003b6df) bg_cl_pane_g2

0xd84d,	// (0x0003b6e7) bg_cl_pane_g3

0xd855,	// (0x0003b6ef) bg_cl_pane_g4

0xd85d,	// (0x0003b6f7) bg_cl_pane_g5

0xd865,	// (0x0003b6ff) bg_cl_pane_g6

0xd86d,	// (0x0003b707) bg_cl_pane_g7

0xd875,	// (0x0003b70f) bg_cl_pane_g8

0xd87d,	// (0x0003b717) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003d91d) bg_cl_pane_g

0x73c9,	// (0x00035263) aid_height_cl_leading_ParamLimits

0x73c9,	// (0x00035263) aid_height_cl_leading

0x73d5,	// (0x0003526f) aid_height_cl_text_ParamLimits

0x73d5,	// (0x0003526f) aid_height_cl_text

0xa9f8,	// (0x00038892) bg_cl_header_pane_ParamLimits

0xa9f8,	// (0x00038892) bg_cl_header_pane

0x73f4,	// (0x0003528e) cl_header_pane_g1_ParamLimits

0x73f4,	// (0x0003528e) cl_header_pane_g1

0x740a,	// (0x000352a4) cl_header_pane_t1_ParamLimits

0x740a,	// (0x000352a4) cl_header_pane_t1

0xd885,	// (0x0003b71f) cl_list_pane

0xd434,	// (0x0003b2ce) hc_scroll_pane_cp01

0xa822,	// (0x000386bc) bg_cl_header_pane_g1

0xd31a,	// (0x0003b1b4) bg_cl_header_pane_g2

0xa842,	// (0x000386dc) bg_cl_header_pane_g3

0xd32a,	// (0x0003b1c4) bg_cl_header_pane_g4

0xd322,	// (0x0003b1bc) bg_cl_header_pane_g5

0xd56e,	// (0x0003b408) bg_cl_header_pane_g6

0xd342,	// (0x0003b1dc) bg_cl_header_pane_g7

0xd34a,	// (0x0003b1e4) bg_cl_header_pane_g8

0xd33a,	// (0x0003b1d4) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003d930) bg_cl_header_pane_g

0x7423,	// (0x000352bd) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7423,	// (0x000352bd) hc_cl_list_double_graphic_heading_pane

0x7434,	// (0x000352ce) hc_cl_list_single_graphic_pane_ParamLimits

0x7434,	// (0x000352ce) hc_cl_list_single_graphic_pane

0x744a,	// (0x000352e4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x744a,	// (0x000352e4) hc_cl_list_single_graphic_pane_g1

0x7456,	// (0x000352f0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7456,	// (0x000352f0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003d943) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003d943) hc_cl_list_single_graphic_pane_g

0x746a,	// (0x00035304) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x746a,	// (0x00035304) hc_cl_list_single_graphic_pane_t1

0x744a,	// (0x000352e4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x744a,	// (0x000352e4) hc_cl_list_double_graphic_heading_pane_g1

0x747f,	// (0x00035319) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x747f,	// (0x00035319) hc_cl_list_double_graphic_heading_pane_g2

0x7493,	// (0x0003532d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7493,	// (0x0003532d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003d948) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003d948) hc_cl_list_double_graphic_heading_pane_g

0x74a7,	// (0x00035341) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74a7,	// (0x00035341) hc_cl_list_double_graphic_heading_pane_t1

0x74bc,	// (0x00035356) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74bc,	// (0x00035356) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003d94f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003d94f) hc_cl_list_double_graphic_heading_pane_t

0x74d9,	// (0x00035373) vid4_progress_pane_g1

0x74e9,	// (0x00035383) vid4_progress_pane_g2

0x18fa,	// (0x0002f794) vid4_progress_pane_g3

0x74f9,	// (0x00035393) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003d954) vid4_progress_pane_g

0x190c,	// (0x0002f7a6) vid4_progress_pane_t1

0x7511,	// (0x000353ab) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003d95f) vid4_progress_pane_t

0x1924,	// (0x0002f7be) wait_bar_pane_cp07

0xc6ef,	// (0x0003a589) blid_firmament_pane_ParamLimits

0xc732,	// (0x0003a5cc) popup_blid_sat_info2_window_g1

0xc756,	// (0x0003a5f0) popup_blid_sat_info2_window_t3

0xc764,	// (0x0003a5fe) popup_blid_sat_info2_window_t4

0xc772,	// (0x0003a60c) popup_blid_sat_info2_window_t5

0xc780,	// (0x0003a61a) popup_blid_sat_info2_window_t6

0xc790,	// (0x0003a62a) popup_blid_sat_info2_window_t7

0xc79e,	// (0x0003a638) popup_blid_sat_info2_window_t8

0xc7ac,	// (0x0003a646) popup_blid_sat_info2_window_t9

0xc7ba,	// (0x0003a654) popup_blid_sat_info2_window_t10

0xc87c,	// (0x0003a716) aid_firma_cardinal_ParamLimits

0xc890,	// (0x0003a72a) blid_firmament_pane_t1_ParamLimits

0xc8a7,	// (0x0003a741) blid_firmament_pane_t2_ParamLimits

0xc8be,	// (0x0003a758) blid_firmament_pane_t3_ParamLimits

0xc8d5,	// (0x0003a76f) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0003d569) blid_firmament_pane_t_ParamLimits

0xc8ec,	// (0x0003a786) blid_sat_info_pane_ParamLimits

0x1ac8,	// (0x0002f962) main_cam_set_pane_ParamLimits

0x5daf,	// (0x00033c49) aid_size_cell_colour_35_ParamLimits

0x5dcf,	// (0x00033c69) aid_size_cell_colour_112_ParamLimits

0x5def,	// (0x00033c89) aid_size_cell_effect_ParamLimits

0xc4f4,	// (0x0003a38e) bg_tb_trans_pane_cp02_ParamLimits

0xaab0,	// (0x0003894a) heading_imed_pane_ParamLimits

0x5e0f,	// (0x00033ca9) listscroll_imed_pane_ParamLimits

0xbb1a,	// (0x000399b4) popup_call2_audio_first_window_g5_ParamLimits

0xbb1a,	// (0x000399b4) popup_call2_audio_first_window_g5

0x0f8d,	// (0x0002ee27) aid_size_touch_image3_arrow_left_ParamLimits

0x0f8d,	// (0x0002ee27) aid_size_touch_image3_arrow_left

0x0fb9,	// (0x0002ee53) aid_size_touch_image3_arrow_right_ParamLimits

0x0fb9,	// (0x0002ee53) aid_size_touch_image3_arrow_right

0x7526,	// (0x000353c0) vid4_progress_pane_t3

0x6122,	// (0x00033fbc) main_hwr_training_symbol_option_pane_ParamLimits

0x6122,	// (0x00033fbc) main_hwr_training_symbol_option_pane

0xd13b,	// (0x0003afd5) popup_hwr_training_preview_window_ParamLimits

0xd13b,	// (0x0003afd5) popup_hwr_training_preview_window

0x0e38,	// (0x0002ecd2) hwr_training_navi_pane_g5_ParamLimits

0x0e38,	// (0x0002ecd2) hwr_training_navi_pane_g5

0xd308,	// (0x0003b1a2) popup_char_count_window

0x1ac8,	// (0x0002f962) bg_popup_sub_pane_cp20_ParamLimits

0x1865,	// (0x0002f6ff) list_vitu2_match_list_pane_ParamLimits

0x1874,	// (0x0002f70e) vitu2_page_scroll_pane_ParamLimits

0x1874,	// (0x0002f70e) vitu2_page_scroll_pane

0xd8b0,	// (0x0003b74a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8b0,	// (0x0003b74a) list_single_hwr_training_symbol_option_pane

0xd8c3,	// (0x0003b75d) list_single_hwr_training_symbol_option_pane_g1

0xd8cb,	// (0x0003b765) list_single_hwr_training_symbol_option_pane_t1

0xd8d9,	// (0x0003b773) bg_button_pane_cp023

0xd8e2,	// (0x0003b77c) bg_button_pane_cp024

0x7573,	// (0x0003540d) vitu2_page_scroll_pane_g1

0x757b,	// (0x00035415) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003d966) vitu2_page_scroll_pane_g

0x7583,	// (0x0003541d) vitu2_page_scroll_pane_t1

0xc64f,	// (0x0003a4e9) popup_char_count_window_g1

0xd915,	// (0x0003b7af) popup_char_count_window_g2

0xd91e,	// (0x0003b7b8) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003d96b) popup_char_count_window_g

0xd927,	// (0x0003b7c1) popup_char_count_window_t1

0x1ae2,	// (0x0002f97c) main_vded2_pane

0xce3a,	// (0x0003acd4) aid_size_cell_imed_line

0xce44,	// (0x0003acde) grid_imed_line_width_pane

0x66f1,	// (0x0003458b) vid4_indicators_pane_g4

0xd935,	// (0x0003b7cf) cell_imed_line_width_pane_ParamLimits

0xd935,	// (0x0003b7cf) cell_imed_line_width_pane

0xd949,	// (0x0003b7e3) cell_imed_line_width_pane_g1

0xd264,	// (0x0003b0fe) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003d972) cell_imed_line_width_pane_g

0x7592,	// (0x0003542c) main_vded2_pane_g1_ParamLimits

0x7592,	// (0x0003542c) main_vded2_pane_g1

0x75a8,	// (0x00035442) main_vded2_pane_g2_ParamLimits

0x75a8,	// (0x00035442) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003d977) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003d977) main_vded2_pane_g

0x75ba,	// (0x00035454) vded2_slider_pane_ParamLimits

0x75ba,	// (0x00035454) vded2_slider_pane

0x75ca,	// (0x00035464) aid_size_touch_vded2_end

0x75d4,	// (0x0003546e) aid_size_touch_vded2_playhead

0xd952,	// (0x0003b7ec) aid_size_touch_vded2_start

0xd95a,	// (0x0003b7f4) vded2_slider_bg_pane

0xd963,	// (0x0003b7fd) vded2_slider_pane_g1

0xd96c,	// (0x0003b806) vded2_slider_pane_g2

0x75de,	// (0x00035478) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003d97c) vded2_slider_pane_g

0xd974,	// (0x0003b80e) vded2_slider_bg_pane_g1

0xd97d,	// (0x0003b817) vded2_slider_bg_pane_g2

0xd986,	// (0x0003b820) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003d983) vded2_slider_bg_pane_g

0x41f3,	// (0x0003208d) aid_postcard_touch_down_pane_ParamLimits

0x41f3,	// (0x0003208d) aid_postcard_touch_down_pane

0x4209,	// (0x000320a3) aid_postcard_touch_up_pane_ParamLimits

0x4209,	// (0x000320a3) aid_postcard_touch_up_pane

0x1ae2,	// (0x0002f97c) main_blid2_pane

0x4aa6,	// (0x00032940) popup_blid2_search_window

0x9cde,	// (0x00037b78) blid2_gps_pane

0x9cde,	// (0x00037b78) blid2_navig_pane

0x9cde,	// (0x00037b78) blid2_search_pane

0x9cde,	// (0x00037b78) blid2_tripm_pane

0x75e9,	// (0x00035483) blid2_search_pane_g1_ParamLimits

0x75e9,	// (0x00035483) blid2_search_pane_g1

0x7603,	// (0x0003549d) blid2_search_pane_t1_ParamLimits

0x7603,	// (0x0003549d) blid2_search_pane_t1

0x7615,	// (0x000354af) aid_size_cell_blid2_gps_ParamLimits

0x7615,	// (0x000354af) aid_size_cell_blid2_gps

0x762d,	// (0x000354c7) blid2_gps_pane_g1_ParamLimits

0x762d,	// (0x000354c7) blid2_gps_pane_g1

0x7641,	// (0x000354db) grid_blid2_satellite_pane_ParamLimits

0x7641,	// (0x000354db) grid_blid2_satellite_pane

0x765b,	// (0x000354f5) blid2_navig_pane_g1_ParamLimits

0x765b,	// (0x000354f5) blid2_navig_pane_g1

0x7667,	// (0x00035501) blid2_navig_pane_t1_ParamLimits

0x7667,	// (0x00035501) blid2_navig_pane_t1

0x7682,	// (0x0003551c) blid2_navig_pane_t2_ParamLimits

0x7682,	// (0x0003551c) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003d98a) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003d98a) blid2_navig_pane_t

0x769d,	// (0x00035537) blid2_navig_ring_pane_ParamLimits

0x769d,	// (0x00035537) blid2_navig_ring_pane

0x76b6,	// (0x00035550) blid2_speed_pane_ParamLimits

0x76b6,	// (0x00035550) blid2_speed_pane

0x76c2,	// (0x0003555c) blid2_tripm_pane_g1_ParamLimits

0x76c2,	// (0x0003555c) blid2_tripm_pane_g1

0x76db,	// (0x00035575) blid2_tripm_pane_g2_ParamLimits

0x76db,	// (0x00035575) blid2_tripm_pane_g2

0x76ef,	// (0x00035589) blid2_tripm_pane_g3_ParamLimits

0x76ef,	// (0x00035589) blid2_tripm_pane_g3

0x7703,	// (0x0003559d) blid2_tripm_pane_g4_ParamLimits

0x7703,	// (0x0003559d) blid2_tripm_pane_g4

0x7717,	// (0x000355b1) blid2_tripm_pane_g5_ParamLimits

0x7717,	// (0x000355b1) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003d98f) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003d98f) blid2_tripm_pane_g

0x773d,	// (0x000355d7) blid2_tripm_pane_t1_ParamLimits

0x773d,	// (0x000355d7) blid2_tripm_pane_t1

0x7758,	// (0x000355f2) blid2_tripm_pane_t2_ParamLimits

0x7758,	// (0x000355f2) blid2_tripm_pane_t2

0x7771,	// (0x0003560b) blid2_tripm_pane_t3_ParamLimits

0x7771,	// (0x0003560b) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003d99c) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003d99c) blid2_tripm_pane_t

0x77b8,	// (0x00035652) cell_blid2_satellite_pane_ParamLimits

0x77b8,	// (0x00035652) cell_blid2_satellite_pane

0x77d6,	// (0x00035670) cell_blid2_satellite_pane_g1

0xd98f,	// (0x0003b829) cell_blid2_satellite_pane_t1

0xc8fc,	// (0x0003a796) blid2_speed_pane_g1

0xd99d,	// (0x0003b837) blid2_speed_pane_t1

0xd9ab,	// (0x0003b845) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003d9a5) blid2_speed_pane_t

0xc8fc,	// (0x0003a796) blid2_navig_ring_pane_g1

0x77df,	// (0x00035679) blid2_navig_ring_pane_g2

0x77e7,	// (0x00035681) blid2_navig_ring_pane_g3

0x77ef,	// (0x00035689) blid2_navig_ring_pane_g4

0x77f7,	// (0x00035691) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003d9aa) blid2_navig_ring_pane_g

0x9cde,	// (0x00037b78) bg_popup_window_pane_cp011

0xd9b9,	// (0x0003b853) popup_blid2_search_window_g1

0xd9c1,	// (0x0003b85b) popup_blid2_search_window_t1

0xd9cf,	// (0x0003b869) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003d9b5) popup_blid2_search_window_t

0xa731,	// (0x000385cb) main_browser_pane_g1

0xa41b,	// (0x000382b5) main_browser_pane_ParamLimits

0x1ac8,	// (0x0002f962) bg_button_pane_cp011_ParamLimits

0x17e5,	// (0x0002f67f) cell_vitu2_function_pane_g1_ParamLimits

0xc4f4,	// (0x0003a38e) bg_popup_sub_pane_cp22_ParamLimits

0x703f,	// (0x00034ed9) input_focus_pane_cp08_ParamLimits

0x7056,	// (0x00034ef0) popup_vitu2_query_button_pane_ParamLimits

0x7056,	// (0x00034ef0) popup_vitu2_query_button_pane

0x7067,	// (0x00034f01) popup_vitu2_query_input_button_pane

0xd5a9,	// (0x0003b443) popup_vitu2_query_window_g1_ParamLimits

0x7071,	// (0x00034f0b) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003d8b6) popup_vitu2_query_window_g_ParamLimits

0x9cde,	// (0x00037b78) bg_button_pane_cp026

0x77ff,	// (0x00035699) popup_vitu2_query_input_button_pane_g1

0x9cde,	// (0x00037b78) bg_button_pane_cp025

0xd9dd,	// (0x0003b877) popup_vitu2_query_button_pane_t1

0x5213,	// (0x000330ad) main_mp3_pane_t6

0x5221,	// (0x000330bb) popup_slider_window_cp01

0x6655,	// (0x000344ef) cam4_battery_pane

0x66ae,	// (0x00034548) cam4_battery_pane_cp02

0x74d1,	// (0x0003536b) cam4_battery_pane_cp01

0x74d1,	// (0x0003536b) cam4_battery_pane_cp03

0xd26c,	// (0x0003b106) cam4_battery_pane_g1

0xc8fc,	// (0x0003a796) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003d9ba) cam4_battery_pane_g

0xc7c8,	// (0x0003a662) popup_blid_sat_info2_window_t11

0xaebe,	// (0x00038d58) aid_size_touch_mv_arrow_left_ParamLimits

0xaee7,	// (0x00038d81) aid_size_touch_mv_arrow_right_ParamLimits

0xaf45,	// (0x00038ddf) navi_pane_g1_ParamLimits

0xaf51,	// (0x00038deb) navi_pane_g2_ParamLimits

0xaf7f,	// (0x00038e19) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0003d27b) navi_pane_g_ParamLimits

0x3c88,	// (0x00031b22) navi_pane_mv_t1_ParamLimits

0x5e1b,	// (0x00033cb5) grid_imed_effect_pane_ParamLimits

0x286b,	// (0x00030705) aid_placing_vt_slider_lsc

0xa680,	// (0x0003851a) aid_placing_vt_slider_prt

0xa9f8,	// (0x00038892) bg_tb_trans_pane_cp01_ParamLimits

0xca7f,	// (0x0003a919) popup_image_details_window_g1_ParamLimits

0xca92,	// (0x0003a92c) popup_image_details_window_g2_ParamLimits

0xcaa7,	// (0x0003a941) popup_image_details_window_g3_ParamLimits

0xcaa7,	// (0x0003a941) popup_image_details_window_g3

0xf714,	// (0x0003d5ae) popup_image_details_window_g_ParamLimits

0xcabb,	// (0x0003a955) popup_image_details_window_t1_ParamLimits

0xcacd,	// (0x0003a967) popup_image_details_window_t2_ParamLimits

0xcae6,	// (0x0003a980) popup_image_details_window_t3_ParamLimits

0xcafa,	// (0x0003a994) popup_image_details_window_t4_ParamLimits

0xcb15,	// (0x0003a9af) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0003d5b5) popup_image_details_window_t_ParamLimits

0x73e1,	// (0x0003527b) cl_header_name_pane_ParamLimits

0x73e1,	// (0x0003527b) cl_header_name_pane

0x7807,	// (0x000356a1) cl_header_name_pane_t1_ParamLimits

0x7807,	// (0x000356a1) cl_header_name_pane_t1

0x7828,	// (0x000356c2) cl_header_name_pane_t2_ParamLimits

0x7828,	// (0x000356c2) cl_header_name_pane_t2

0x786a,	// (0x00035704) cl_header_name_pane_t3_ParamLimits

0x786a,	// (0x00035704) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003d9bf) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003d9bf) cl_header_name_pane_t

0xb00e,	// (0x00038ea8) navi_pane_mv_g2_ParamLimits

0xd2c5,	// (0x0003b15f) field_vitu2_entry_pane_g1_ParamLimits

0xd2d1,	// (0x0003b16b) field_vitu2_entry_pane_g2_ParamLimits

0xd2dd,	// (0x0003b177) field_vitu2_entry_pane_g3_ParamLimits

0xd2dd,	// (0x0003b177) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003d7b5) field_vitu2_entry_pane_g_ParamLimits

0x6775,	// (0x0003460f) cell_vitu2_itu_pane_g1_ParamLimits

0x168d,	// (0x0002f527) cell_vitu2_itu_pane_g2_ParamLimits

0x168d,	// (0x0002f527) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003d7c1) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003d7c1) cell_vitu2_itu_pane_g

0x1ac8,	// (0x0002f962) bg_vkb2_func_pane_cp05_ParamLimits

0x1ac8,	// (0x0002f962) bg_vkb2_func_pane_cp05

0x1ac8,	// (0x0002f962) bg_vkb2_func_pane_cp03

0x1ac8,	// (0x0002f962) bg_vkb2_func_pane_cp04

0x1ac8,	// (0x0002f962) bg_vkb2_func_pane_cp10_ParamLimits

0x1ac8,	// (0x0002f962) bg_vkb2_func_pane_cp10

0x7387,	// (0x00035221) bg_vkb2_func_pane_cp08

0x736d,	// (0x00035207) bg_vkb2_func_pane_cp06

0x737b,	// (0x00035215) bg_vkb2_func_pane_cp07

0xd8eb,	// (0x0003b785) bg_vkb2_func_pane_cp11_ParamLimits

0xd8eb,	// (0x0003b785) bg_vkb2_func_pane_cp11

0xd900,	// (0x0003b79a) bg_vkb2_func_pane_cp12_ParamLimits

0xd900,	// (0x0003b79a) bg_vkb2_func_pane_cp12

0x9cde,	// (0x00037b78) bg_vkb2_func_pane_cp09

0xd31a,	// (0x0003b1b4) bg_vkb2_func_pane_g1

0xa842,	// (0x000386dc) bg_vkb2_func_pane_g2

0xd322,	// (0x0003b1bc) bg_vkb2_func_pane_g3

0xd32a,	// (0x0003b1c4) bg_vkb2_func_pane_g4

0xd56e,	// (0x0003b408) bg_vkb2_func_pane_g5

0xd342,	// (0x0003b1dc) bg_vkb2_func_pane_g6

0xd34a,	// (0x0003b1e4) bg_vkb2_func_pane_g7

0xd33a,	// (0x0003b1d4) bg_vkb2_func_pane_g8

0xa822,	// (0x000386bc) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003d9c6) bg_vkb2_func_pane_g

0x772b,	// (0x000355c5) blid2_tripm_pane_g6_ParamLimits

0x772b,	// (0x000355c5) blid2_tripm_pane_g6

0xd1f9,	// (0x0003b093) mp4_progress_pane_g1

0x77a4,	// (0x0003563e) blid2_tripm_values_pane_ParamLimits

0x77a4,	// (0x0003563e) blid2_tripm_values_pane

0x789b,	// (0x00035735) blid2_tripm_values_pane_t1

0x78a9,	// (0x00035743) blid2_tripm_values_pane_t2

0x78b7,	// (0x00035751) blid2_tripm_values_pane_t3

0x78c5,	// (0x0003575f) blid2_tripm_values_pane_t4

0x78d3,	// (0x0003576d) blid2_tripm_values_pane_t5

0x78e1,	// (0x0003577b) blid2_tripm_values_pane_t6

0x78ef,	// (0x00035789) blid2_tripm_values_pane_t7

0x78fd,	// (0x00035797) blid2_tripm_values_pane_t8

0x790b,	// (0x000357a5) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003d9d9) blid2_tripm_values_pane_t

0x28ad,	// (0x00030747) call_video_pane_t1_ParamLimits

0x28cb,	// (0x00030765) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0003d104) call_video_pane_t_ParamLimits

0x4173,	// (0x0003200d) msg_header_pane_g1_ParamLimits

0xb1fe,	// (0x00039098) msg_header_pane_g2_ParamLimits

0xb1fe,	// (0x00039098) msg_header_pane_g2

0x0001,

0xf484,	// (0x0003d31e) msg_header_pane_g_ParamLimits

0xf484,	// (0x0003d31e) msg_header_pane_g

0xa41b,	// (0x000382b5) main_clock2_pane_ParamLimits

0x5bbb,	// (0x00033a55) grid_clock2_toolbar_pane_ParamLimits

0x5bbb,	// (0x00033a55) grid_clock2_toolbar_pane

0x5bbb,	// (0x00033a55) listscroll_clock2_pane_ParamLimits

0x5bbb,	// (0x00033a55) listscroll_clock2_pane

0x5c9f,	// (0x00033b39) main_clock2_pane_t3_ParamLimits

0x5c9f,	// (0x00033b39) main_clock2_pane_t3

0x5cc3,	// (0x00033b5d) main_clock2_pane_t4_ParamLimits

0x5cc3,	// (0x00033b5d) main_clock2_pane_t4

0xd9eb,	// (0x0003b885) cell_clock2_toolbar_pane

0xd9f3,	// (0x0003b88d) cell_clock2_toolbar_pane_cp01

0xd9f3,	// (0x0003b88d) cell_clock2_toolbar_pane_cp02

0xd9fb,	// (0x0003b895) cell_clock2_toolbar_pane_cp03

0xda03,	// (0x0003b89d) list_clock2_pane

0xae34,	// (0x00038cce) scroll_pane_cp10

0xda0b,	// (0x0003b8a5) list_single_clock2_pane_ParamLimits

0xda0b,	// (0x0003b8a5) list_single_clock2_pane

0xa5e9,	// (0x00038483) list_highlight_pane_cp08

0xda18,	// (0x0003b8b2) list_single_clock2_pane_t1

0xda26,	// (0x0003b8c0) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003d9ec) list_single_clock2_pane_t

0x9cde,	// (0x00037b78) bg_button_pane_cp10

0xda34,	// (0x0003b8ce) cell_clock2_toolbar_pane_g1

0x05ce,	// (0x0002e468) aid_main_viewer_pane_g1_ParamLimits

0x05ce,	// (0x0002e468) aid_main_viewer_pane_g1

0x05dc,	// (0x0002e476) aid_main_viewer_pane_g2_ParamLimits

0x05dc,	// (0x0002e476) aid_main_viewer_pane_g2

0x4199,	// (0x00032033) aid_main_viewer_pane_g3_ParamLimits

0x4199,	// (0x00032033) aid_main_viewer_pane_g3

0x41a8,	// (0x00032042) aid_main_viewer_pane_g4_ParamLimits

0x41a8,	// (0x00032042) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0003d32f) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0003d32f) aid_main_viewer_pane_g

0x0610,	// (0x0002e4aa) main_calc_pane_ParamLimits

0x0636,	// (0x0002e4d0) main_dialer2_pane_ParamLimits

0x1ae2,	// (0x0002f97c) main_cam6_pane

0x1ae2,	// (0x0002f97c) main_vid6_pane

0x5bc7,	// (0x00033a61) listscroll_gen_pane_cp06_ParamLimits

0x5bc7,	// (0x00033a61) listscroll_gen_pane_cp06

0x5ce6,	// (0x00033b80) main_clock2_pane_t5_ParamLimits

0x5ce6,	// (0x00033b80) main_clock2_pane_t5

0x5d44,	// (0x00033bde) aid_call2_pane_cp10_ParamLimits

0x5d56,	// (0x00033bf0) aid_call_pane_cp10_ParamLimits

0xaeb2,	// (0x00038d4c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaeb2,	// (0x00038d4c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5d68,	// (0x00033c02) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5d68,	// (0x00033c02) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaeb2,	// (0x00038d4c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0003d66a) popup_clock_analogue_window_cp10_g_ParamLimits

0x5d7e,	// (0x00033c18) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6473,	// (0x0003430d) cell_dialer2_keypad_pane_g2_ParamLimits

0x6473,	// (0x0003430d) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003d754) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003d754) cell_dialer2_keypad_pane_g

0x648f,	// (0x00034329) cell_dialer2_keypad_pane_t1

0x6a90,	// (0x0003492a) main_cset_text2_pane_ParamLimits

0x6a90,	// (0x0003492a) main_cset_text2_pane

0xd795,	// (0x0003b62f) area_vitu2_query_pane_g1_ParamLimits

0x730c,	// (0x000351a6) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003d909) area_vitu2_query_pane_g_ParamLimits

0xd819,	// (0x0003b6b3) area_vitu2_query_pane_t7_ParamLimits

0xd819,	// (0x0003b6b3) area_vitu2_query_pane_t7

0x736d,	// (0x00035207) bg_button_pane_cp018_ParamLimits

0x737b,	// (0x00035215) bg_button_pane_cp021_ParamLimits

0x7387,	// (0x00035221) bg_button_pane_cp022_ParamLimits

0x7387,	// (0x00035221) bg_vkb2_func_pane_cp08_ParamLimits

0x736d,	// (0x00035207) bg_vkb2_func_pane_cp06_ParamLimits

0x737b,	// (0x00035215) bg_vkb2_func_pane_cp07_ParamLimits

0x7396,	// (0x00035230) input_focus_pane_cp09_ParamLimits

0x7919,	// (0x000357b3) cam6_autofocus_pane_ParamLimits

0x7919,	// (0x000357b3) cam6_autofocus_pane

0x1937,	// (0x0002f7d1) cam6_image_uncrop_pane_ParamLimits

0x1937,	// (0x0002f7d1) cam6_image_uncrop_pane

0x1946,	// (0x0002f7e0) cam6_indi_pane_ParamLimits

0x1946,	// (0x0002f7e0) cam6_indi_pane

0x195c,	// (0x0002f7f6) cam6_mode_pane_ParamLimits

0x195c,	// (0x0002f7f6) cam6_mode_pane

0x196e,	// (0x0002f808) cam6_timer_pane_ParamLimits

0x196e,	// (0x0002f808) cam6_timer_pane

0x197a,	// (0x0002f814) cam6_zoom_pane_ParamLimits

0x197a,	// (0x0002f814) cam6_zoom_pane

0x7927,	// (0x000357c1) cam6_mode_pane_g1_ParamLimits

0x7927,	// (0x000357c1) cam6_mode_pane_g1

0x7937,	// (0x000357d1) cam6_mode_pane_g2_ParamLimits

0x7937,	// (0x000357d1) cam6_mode_pane_g2

0x7947,	// (0x000357e1) cam6_mode_pane_g3_ParamLimits

0x7947,	// (0x000357e1) cam6_mode_pane_g3

0x7957,	// (0x000357f1) cam6_mode_pane_g4_ParamLimits

0x7957,	// (0x000357f1) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003d9f1) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003d9f1) cam6_mode_pane_g

0xda3c,	// (0x0003b8d6) bg_tb_trans_pane_cp08_ParamLimits

0xda3c,	// (0x0003b8d6) bg_tb_trans_pane_cp08

0xda4a,	// (0x0003b8e4) cam6_battery_pane_ParamLimits

0xda4a,	// (0x0003b8e4) cam6_battery_pane

0xda60,	// (0x0003b8fa) cam6_indi_pane_g1_ParamLimits

0xda60,	// (0x0003b8fa) cam6_indi_pane_g1

0xda72,	// (0x0003b90c) cam6_indi_pane_g2_ParamLimits

0xda72,	// (0x0003b90c) cam6_indi_pane_g2

0xda84,	// (0x0003b91e) cam6_indi_pane_g3_ParamLimits

0xda84,	// (0x0003b91e) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003d9fa) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003d9fa) cam6_indi_pane_g

0xda96,	// (0x0003b930) cam6_indi_pane_t1_ParamLimits

0xda96,	// (0x0003b930) cam6_indi_pane_t1

0x7967,	// (0x00035801) cam6_autofocus_pane_g1

0x796f,	// (0x00035809) cam6_autofocus_pane_g2

0x7977,	// (0x00035811) cam6_autofocus_pane_g3

0x797f,	// (0x00035819) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003da01) cam6_autofocus_pane_g

0xdabc,	// (0x0003b956) cam6_timer_pane_g1

0xdac4,	// (0x0003b95e) cam6_timer_pane_t1

0xdad2,	// (0x0003b96c) cam6_zoom_cont_pane

0xdada,	// (0x0003b974) cam6_zoom_pane_g1

0xdae2,	// (0x0003b97c) cam6_zoom_pane_g2

0x7987,	// (0x00035821) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003da0a) cam6_zoom_pane_g

0xc8fc,	// (0x0003a796) cam6_battery_pane_g1

0xc8fc,	// (0x0003a796) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0003d572) cam6_battery_pane_g

0xdaea,	// (0x0003b984) cam6_zoom_cont_pane_g1

0xdaf3,	// (0x0003b98d) cam6_zoom_cont_pane_g2

0xdafc,	// (0x0003b996) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003da11) cam6_zoom_cont_pane_g

0x79a4,	// (0x0003583e) cam6_mode_pane_cp_ParamLimits

0x79a4,	// (0x0003583e) cam6_mode_pane_cp

0x79b6,	// (0x00035850) cam6_zoom_pane_cp_ParamLimits

0x79b6,	// (0x00035850) cam6_zoom_pane_cp

0x79c2,	// (0x0003585c) vid6_image_uncrop_cif_pane_ParamLimits

0x79c2,	// (0x0003585c) vid6_image_uncrop_cif_pane

0x79d2,	// (0x0003586c) vid6_image_uncrop_nhd_pane_ParamLimits

0x79d2,	// (0x0003586c) vid6_image_uncrop_nhd_pane

0x79e1,	// (0x0003587b) vid6_image_uncrop_vga_pane_ParamLimits

0x79e1,	// (0x0003587b) vid6_image_uncrop_vga_pane

0x79f0,	// (0x0003588a) vid6_image_uncrop_wvga_pane_ParamLimits

0x79f0,	// (0x0003588a) vid6_image_uncrop_wvga_pane

0x79ff,	// (0x00035899) vid6_indi_pane_ParamLimits

0x79ff,	// (0x00035899) vid6_indi_pane

0xda3c,	// (0x0003b8d6) bg_tb_trans_pane_cp09_ParamLimits

0xda3c,	// (0x0003b8d6) bg_tb_trans_pane_cp09

0xdb14,	// (0x0003b9ae) cam6_battery_pane_cp_ParamLimits

0xdb14,	// (0x0003b9ae) cam6_battery_pane_cp

0xdb20,	// (0x0003b9ba) vid6_indi_pane_g1_ParamLimits

0xdb20,	// (0x0003b9ba) vid6_indi_pane_g1

0xdb32,	// (0x0003b9cc) vid6_indi_pane_g2_ParamLimits

0xdb32,	// (0x0003b9cc) vid6_indi_pane_g2

0xdb44,	// (0x0003b9de) vid6_indi_pane_g3_ParamLimits

0xdb44,	// (0x0003b9de) vid6_indi_pane_g3

0xdb59,	// (0x0003b9f3) vid6_indi_pane_g4_ParamLimits

0xdb59,	// (0x0003b9f3) vid6_indi_pane_g4

0xdb6e,	// (0x0003ba08) vid6_indi_pane_g5_ParamLimits

0xdb6e,	// (0x0003ba08) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003da18) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003da18) vid6_indi_pane_g

0xdb88,	// (0x0003ba22) vid6_indi_pane_t1_ParamLimits

0xdb88,	// (0x0003ba22) vid6_indi_pane_t1

0xdb9e,	// (0x0003ba38) vid6_indi_pane_t2_ParamLimits

0xdb9e,	// (0x0003ba38) vid6_indi_pane_t2

0xdbc6,	// (0x0003ba60) vid6_indi_pane_t3_ParamLimits

0xdbc6,	// (0x0003ba60) vid6_indi_pane_t3

0xdbee,	// (0x0003ba88) vid6_indi_pane_t4_ParamLimits

0xdbee,	// (0x0003ba88) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003da23) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003da23) vid6_indi_pane_t

0xdc12,	// (0x0003baac) wait_bar_pane_cp08

0x7a17,	// (0x000358b1) main_cset_text2_pane_t1_ParamLimits

0x7a17,	// (0x000358b1) main_cset_text2_pane_t1

0x798f,	// (0x00035829) listscroll_gen_pane_cp06_t1_ParamLimits

0x798f,	// (0x00035829) listscroll_gen_pane_cp06_t1

0x1ae2,	// (0x0002f97c) main_cam6_set_pane

0x6647,	// (0x000344e1) bg_tb_trans_pane_cp06_ParamLimits

0x665d,	// (0x000344f7) cam4_indicators_pane_g1_ParamLimits

0x666e,	// (0x00034508) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003d791) cam4_indicators_pane_g_ParamLimits

0x668c,	// (0x00034526) cam4_indicators_pane_t1_ParamLimits

0x1ac8,	// (0x0002f962) bg_tb_trans_pane_cp07_ParamLimits

0x66b8,	// (0x00034552) vid4_indicators_pane_g1_ParamLimits

0x66cc,	// (0x00034566) vid4_indicators_pane_g2_ParamLimits

0x66e0,	// (0x0003457a) vid4_indicators_pane_g3_ParamLimits

0x66f1,	// (0x0003458b) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003d7a3) vid4_indicators_pane_g_ParamLimits

0x670f,	// (0x000345a9) vid4_indicators_pane_t1_ParamLimits

0x74d9,	// (0x00035373) vid4_progress_pane_g1_ParamLimits

0x74e9,	// (0x00035383) vid4_progress_pane_g2_ParamLimits

0x18fa,	// (0x0002f794) vid4_progress_pane_g3_ParamLimits

0x74f9,	// (0x00035393) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003d954) vid4_progress_pane_g_ParamLimits

0x190c,	// (0x0002f7a6) vid4_progress_pane_t1_ParamLimits

0x7511,	// (0x000353ab) vid4_progress_pane_t2_ParamLimits

0x7526,	// (0x000353c0) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003d95f) vid4_progress_pane_t_ParamLimits

0x1924,	// (0x0002f7be) wait_bar_pane_cp07_ParamLimits

0x7a34,	// (0x000358ce) main_cam6_set_pane_g2_ParamLimits

0x7a34,	// (0x000358ce) main_cam6_set_pane_g2

0x7a58,	// (0x000358f2) main_cset6_listscroll_pane_ParamLimits

0x7a58,	// (0x000358f2) main_cset6_listscroll_pane

0x7a78,	// (0x00035912) main_cset6_slider_pane_ParamLimits

0x7a78,	// (0x00035912) main_cset6_slider_pane

0x7a8e,	// (0x00035928) main_cset6_text2_pane_ParamLimits

0x7a8e,	// (0x00035928) main_cset6_text2_pane

0xdc21,	// (0x0003babb) main_cset6_text_pane

0xdc29,	// (0x0003bac3) main_cset_list_pane_copy1_ParamLimits

0xdc29,	// (0x0003bac3) main_cset_list_pane_copy1

0xdc39,	// (0x0003bad3) scroll_pane_cp028_copy1

0x7a9c,	// (0x00035936) cset_list_set_pane_copy1

0x7aad,	// (0x00035947) aid_position_infowindow_above_copy1

0x7ab5,	// (0x0003594f) aid_position_infowindow_below_copy1

0x7abd,	// (0x00035957) cset_list_set_pane_g1_copy1

0x7ac5,	// (0x0003595f) cset_list_set_pane_g3_copy1_ParamLimits

0x7ac5,	// (0x0003595f) cset_list_set_pane_g3_copy1

0x7ad4,	// (0x0003596e) cset_list_set_pane_t1_copy1_ParamLimits

0x7ad4,	// (0x0003596e) cset_list_set_pane_t1_copy1

0xa9f8,	// (0x00038892) list_highlight_pane_cp021_copy1_ParamLimits

0xa9f8,	// (0x00038892) list_highlight_pane_cp021_copy1

0xdc42,	// (0x0003badc) cset6_slider_pane_ParamLimits

0xdc42,	// (0x0003badc) cset6_slider_pane

0xdc6e,	// (0x0003bb08) main_cset6_slider_pane_g1_ParamLimits

0xdc6e,	// (0x0003bb08) main_cset6_slider_pane_g1

0x7ae9,	// (0x00035983) main_cset6_slider_pane_g2_ParamLimits

0x7ae9,	// (0x00035983) main_cset6_slider_pane_g2

0xdc96,	// (0x0003bb30) main_cset6_slider_pane_g3_ParamLimits

0xdc96,	// (0x0003bb30) main_cset6_slider_pane_g3

0x7b11,	// (0x000359ab) main_cset6_slider_pane_g4_ParamLimits

0x7b11,	// (0x000359ab) main_cset6_slider_pane_g4

0x7b1d,	// (0x000359b7) main_cset6_slider_pane_g5_ParamLimits

0x7b1d,	// (0x000359b7) main_cset6_slider_pane_g5

0xd449,	// (0x0003b2e3) main_cset6_slider_pane_g7_ParamLimits

0xd449,	// (0x0003b2e3) main_cset6_slider_pane_g7

0xd455,	// (0x0003b2ef) main_cset6_slider_pane_g8_ParamLimits

0xd455,	// (0x0003b2ef) main_cset6_slider_pane_g8

0x6b3d,	// (0x000349d7) main_cset6_slider_pane_g9_ParamLimits

0x6b3d,	// (0x000349d7) main_cset6_slider_pane_g9

0x6b49,	// (0x000349e3) main_cset6_slider_pane_g10_ParamLimits

0x6b49,	// (0x000349e3) main_cset6_slider_pane_g10

0x6b55,	// (0x000349ef) main_cset6_slider_pane_g11_ParamLimits

0x6b55,	// (0x000349ef) main_cset6_slider_pane_g11

0x6b61,	// (0x000349fb) main_cset6_slider_pane_g12_ParamLimits

0x6b61,	// (0x000349fb) main_cset6_slider_pane_g12

0x6b6d,	// (0x00034a07) main_cset6_slider_pane_g13_ParamLimits

0x6b6d,	// (0x00034a07) main_cset6_slider_pane_g13

0x6b79,	// (0x00034a13) main_cset6_slider_pane_g14_ParamLimits

0x6b79,	// (0x00034a13) main_cset6_slider_pane_g14

0x7b29,	// (0x000359c3) main_cset6_slider_pane_g15_ParamLimits

0x7b29,	// (0x000359c3) main_cset6_slider_pane_g15

0x6b9d,	// (0x00034a37) main_cset6_slider_pane_g16_ParamLimits

0x6b9d,	// (0x00034a37) main_cset6_slider_pane_g16

0x6ba9,	// (0x00034a43) main_cset6_slider_pane_g17_ParamLimits

0x6ba9,	// (0x00034a43) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003da2c) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003da2c) main_cset6_slider_pane_g

0xdca2,	// (0x0003bb3c) main_cset6_slider_pane_t1_ParamLimits

0xdca2,	// (0x0003bb3c) main_cset6_slider_pane_t1

0x7b59,	// (0x000359f3) main_cset6_slider_pane_t2_ParamLimits

0x7b59,	// (0x000359f3) main_cset6_slider_pane_t2

0x7b84,	// (0x00035a1e) main_cset6_slider_pane_t3_ParamLimits

0x7b84,	// (0x00035a1e) main_cset6_slider_pane_t3

0x7baf,	// (0x00035a49) main_cset6_slider_pane_t4_ParamLimits

0x7baf,	// (0x00035a49) main_cset6_slider_pane_t4

0x7bda,	// (0x00035a74) main_cset6_slider_pane_t5_ParamLimits

0x7bda,	// (0x00035a74) main_cset6_slider_pane_t5

0xdce3,	// (0x0003bb7d) main_cset6_slider_pane_t7_ParamLimits

0xdce3,	// (0x0003bb7d) main_cset6_slider_pane_t7

0x7c05,	// (0x00035a9f) main_cset6_slider_pane_t8_ParamLimits

0x7c05,	// (0x00035a9f) main_cset6_slider_pane_t8

0x7c29,	// (0x00035ac3) main_cset6_slider_pane_t9_ParamLimits

0x7c29,	// (0x00035ac3) main_cset6_slider_pane_t9

0x7c4d,	// (0x00035ae7) main_cset6_slider_pane_t10_ParamLimits

0x7c4d,	// (0x00035ae7) main_cset6_slider_pane_t10

0x7c71,	// (0x00035b0b) main_cset6_slider_pane_t11_ParamLimits

0x7c71,	// (0x00035b0b) main_cset6_slider_pane_t11

0xdd19,	// (0x0003bbb3) main_cset6_slider_pane_t14_ParamLimits

0xdd19,	// (0x0003bbb3) main_cset6_slider_pane_t14

0xdd52,	// (0x0003bbec) main_cset6_slider_pane_t15_ParamLimits

0xdd52,	// (0x0003bbec) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003da51) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003da51) main_cset6_slider_pane_t

0xdd8b,	// (0x0003bc25) cset_slider_pane_g1_copy1

0xdd94,	// (0x0003bc2e) cset_slider_pane_g2_copy1

0xdd9d,	// (0x0003bc37) cset_slider_pane_g3_copy1

0x9cde,	// (0x00037b78) bg_popup_sub_pane_cp011_copy1

0xdda6,	// (0x0003bc40) main_cset_text_pane_g1_copy1

0xd5bd,	// (0x0003b457) main_cset_text_pane_t1_copy1

0xd5cb,	// (0x0003b465) main_cset_text_pane_t2_copy1

0xd5d9,	// (0x0003b473) main_cset_text_pane_t3_copy1

0xd5e7,	// (0x0003b481) main_cset_text_pane_t4_copy1

0xd5f5,	// (0x0003b48f) main_cset_text_pane_t5_copy1

0xddae,	// (0x0003bc48) main_cset_text_pane_t6_copy1

0xddbc,	// (0x0003bc56) main_cset_text_pane_t7_copy1

0x7a17,	// (0x000358b1) main_cset_text2_pane_t1_copy1

0x1ac8,	// (0x0002f962) main_ncimui_pane

0x0880,	// (0x0002e71a) popup_query_ncimui_window_ParamLimits

0x0880,	// (0x0002e71a) popup_query_ncimui_window

0xcbc4,	// (0x0003aa5e) field_cale_ev2_pane_g4_ParamLimits

0xcbc4,	// (0x0003aa5e) field_cale_ev2_pane_g4

0x61d3,	// (0x0003406d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61d3,	// (0x0003406d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0003d72b) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0003d72b) cell_video_dialer_keypad_pane_g

0x61eb,	// (0x00034085) cell_video_dialer_keypad_pane_t1

0x9cde,	// (0x00037b78) bg_popup_window_pane_cp012

0xad01,	// (0x00038b9b) heading_pane_cp06

0xdde8,	// (0x0003bc82) ncim_query_content_pane

0x9cde,	// (0x00037b78) bg_popup_heading_pane_cp01

0xddf0,	// (0x0003bc8a) ncim_heading_pane_t1

0xddfe,	// (0x0003bc98) ncim_indicator_popup_pane

0xde10,	// (0x0003bcaa) ncim_query_button_pane

0xde24,	// (0x0003bcbe) ncim_query_content_pane_t1

0xde36,	// (0x0003bcd0) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003da95) ncim_query_content_pane_t

0xde70,	// (0x0003bd0a) ncim_query_list_pane

0xde82,	// (0x0003bd1c) ncim_query_popup_pane

0xddfe,	// (0x0003bc98) ncim_indicator_popup_pane_ParamLimits

0x7e96,	// (0x00035d30) ncim_query_content_pane_g1_ParamLimits

0x7e96,	// (0x00035d30) ncim_query_content_pane_g1

0xde24,	// (0x0003bcbe) ncim_query_content_pane_t1_ParamLimits

0xde36,	// (0x0003bcd0) ncim_query_content_pane_t2_ParamLimits

0x7ea2,	// (0x00035d3c) ncim_query_content_pane_t3_ParamLimits

0x7ea2,	// (0x00035d3c) ncim_query_content_pane_t3

0x7eca,	// (0x00035d64) ncim_query_content_pane_t4_ParamLimits

0x7eca,	// (0x00035d64) ncim_query_content_pane_t4

0x7ef2,	// (0x00035d8c) ncim_query_content_pane_t5_ParamLimits

0x7ef2,	// (0x00035d8c) ncim_query_content_pane_t5

0xde48,	// (0x0003bce2) ncim_query_content_pane_t6_ParamLimits

0xde48,	// (0x0003bce2) ncim_query_content_pane_t6

0xfbfb,	// (0x0003da95) ncim_query_content_pane_t_ParamLimits

0xde70,	// (0x0003bd0a) ncim_query_list_pane_ParamLimits

0xde82,	// (0x0003bd1c) ncim_query_popup_pane_ParamLimits

0xde96,	// (0x0003bd30) wait_bar_pane_cp04

0x9cde,	// (0x00037b78) input_focus_pane_cp011

0xde9e,	// (0x0003bd38) ncim_query_popup_pane_t1

0xdeac,	// (0x0003bd46) ncim_list_query_list_pane_ParamLimits

0xdeac,	// (0x0003bd46) ncim_list_query_list_pane

0x9cde,	// (0x00037b78) bg_button_pane_cp027

0xdeb9,	// (0x0003bd53) ncim_query_button_pane_g1

0x9cde,	// (0x00037b78) list_highlight_pane_cp012

0xdec3,	// (0x0003bd5d) ncim_list_query_list_pane_g1

0xdecb,	// (0x0003bd65) ncim_list_query_list_pane_t1

0x667d,	// (0x00034517) cam4_indicators_pane_g3_ParamLimits

0x667d,	// (0x00034517) cam4_indicators_pane_g3

0x66fd,	// (0x00034597) vid4_indicators_pane_g5_ParamLimits

0x66fd,	// (0x00034597) vid4_indicators_pane_g5

0x7505,	// (0x0003539f) vid4_progress_pane_g5_ParamLimits

0x7505,	// (0x0003539f) vid4_progress_pane_g5

0x7d81,	// (0x00035c1b) main_ncimui_pane_g1

0x7dea,	// (0x00035c84) ncimui_group_query_pane_ParamLimits

0x7dea,	// (0x00035c84) ncimui_group_query_pane

0x7e32,	// (0x00035ccc) ncimui_list_pane_ParamLimits

0x7e32,	// (0x00035ccc) ncimui_list_pane

0x7e59,	// (0x00035cf3) ncimui_text_pane_ParamLimits

0x7e59,	// (0x00035cf3) ncimui_text_pane

0x7f1a,	// (0x00035db4) ncimui_text_pane_t1_ParamLimits

0x7f1a,	// (0x00035db4) ncimui_text_pane_t1

0xded9,	// (0x0003bd73) ncimui_list_single_graphic_pane_ParamLimits

0xded9,	// (0x0003bd73) ncimui_list_single_graphic_pane

0x7f38,	// (0x00035dd2) ncimui_query_pane_ParamLimits

0x7f38,	// (0x00035dd2) ncimui_query_pane

0x9cde,	// (0x00037b78) list_highlight_pane_cp013

0xdee9,	// (0x0003bd83) ncim_list_query_list_pane_t1_copy1

0xdec3,	// (0x0003bd5d) ncim_list_single_graphic_pane_g1

0x7f4b,	// (0x00035de5) ncim_query_button_pane_cp01

0x7f57,	// (0x00035df1) ncim_query_entry_pane_ParamLimits

0x7f57,	// (0x00035df1) ncim_query_entry_pane

0x7f6a,	// (0x00035e04) ncimui_query_pane_g1

0x7f76,	// (0x00035e10) ncimui_query_pane_t1_ParamLimits

0x7f76,	// (0x00035e10) ncimui_query_pane_t1

0xa9f8,	// (0x00038892) input_focus_pane_cp012

0xdef7,	// (0x0003bd91) ncim_query_entry_pane_t1

0xa41b,	// (0x000382b5) main_im_pane_ParamLimits

0x1ac8,	// (0x0002f962) main_mobtv_pane_ParamLimits

0x1ac8,	// (0x0002f962) main_mobtv_pane

0x7b41,	// (0x000359db) main_cset6_slider_pane_g18_ParamLimits

0x7b41,	// (0x000359db) main_cset6_slider_pane_g18

0x7b4d,	// (0x000359e7) main_cset6_slider_pane_g19_ParamLimits

0x7b4d,	// (0x000359e7) main_cset6_slider_pane_g19

0x7f8f,	// (0x00035e29) bg_main_mobtv_pane_ParamLimits

0x7f8f,	// (0x00035e29) bg_main_mobtv_pane

0x7f9d,	// (0x00035e37) main_mobtv_info_pane

0x7fa6,	// (0x00035e40) main_mobtv_loading_pane_ParamLimits

0x7fa6,	// (0x00035e40) main_mobtv_loading_pane

0xdf09,	// (0x0003bda3) main_mobtv_pg_channel_list_pane

0xdf13,	// (0x0003bdad) main_mobtv_pg_hdr_pane

0x7fb3,	// (0x00035e4d) main_mobtv_programe_curr_pane_ParamLimits

0x7fb3,	// (0x00035e4d) main_mobtv_programe_curr_pane

0x7fc0,	// (0x00035e5a) main_mobtv_programe_next_pane_ParamLimits

0x7fc0,	// (0x00035e5a) main_mobtv_programe_next_pane

0xdf1c,	// (0x0003bdb6) popup_mobtv_noti_window

0xc8fc,	// (0x0003a796) main_tv_pg_hdr_pane_g1

0xdf24,	// (0x0003bdbe) main_tv_pg_hdr_pane_g2

0xdf2c,	// (0x0003bdc6) main_tv_pg_hdr_pane_g3

0xdf34,	// (0x0003bdce) main_tv_pg_hdr_pane_g4

0xdf3c,	// (0x0003bdd6) main_tv_pg_hdr_pane_g5

0xdf46,	// (0x0003bde0) main_tv_pg_hdr_pane_g6

0xdf50,	// (0x0003bdea) main_tv_pg_hdr_pane_g7

0xdf5a,	// (0x0003bdf4) main_tv_pg_hdr_pane_g8

0xdf64,	// (0x0003bdfe) main_tv_pg_hdr_pane_g9

0xdf6e,	// (0x0003be08) main_tv_pg_hdr_pane_g10

0xdf78,	// (0x0003be12) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003daa2) main_tv_pg_hdr_pane_g

0xdf82,	// (0x0003be1c) main_tv_pg_hdr_pane_t1

0xdfb0,	// (0x0003be4a) main_tv_pg_hdr_pane_t2

0xdfbe,	// (0x0003be58) main_tv_pg_hdr_pane_t3

0xdfce,	// (0x0003be68) main_tv_pg_hdr_pane_t4

0xdfde,	// (0x0003be78) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003dab9) main_tv_pg_hdr_pane_t

0xdfee,	// (0x0003be88) single_mobtv_pg_channel_pane_ParamLimits

0xdfee,	// (0x0003be88) single_mobtv_pg_channel_pane

0xe000,	// (0x0003be9a) single_mobtv_pg_channel_table_pane

0xe009,	// (0x0003bea3) single_mobtv_pg_channel_thumb_pane

0xe012,	// (0x0003beac) single_tv_pg_channel_pane_g1

0xe01b,	// (0x0003beb5) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003dac4) single_tv_pg_channel_pane_g

0xcb5f,	// (0x0003a9f9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcb5f,	// (0x0003a9f9) bg_single_mobtv_pg_channel_thumb_pane

0xe024,	// (0x0003bebe) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe024,	// (0x0003bebe) single_mobtv_pg_channel_thumb_pane_g1

0xe032,	// (0x0003becc) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe032,	// (0x0003becc) single_mobtv_pg_channel_thumb_pane_g2

0xe03e,	// (0x0003bed8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe03e,	// (0x0003bed8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003dac9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003dac9) single_mobtv_pg_channel_thumb_pane_g

0xe04a,	// (0x0003bee4) single_mobtv_pg_channel_thumb_pane_t1

0xe058,	// (0x0003bef2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003dad0) single_mobtv_pg_channel_thumb_pane_t

0xc8fc,	// (0x0003a796) bg_single_mobtv_pg_channel_table_pane_g1

0xc8fc,	// (0x0003a796) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0003d572) bg_single_mobtv_pg_channel_table_pane_g

0xe066,	// (0x0003bf00) single_mobtv_pg_channel_table_pane_t1

0xe074,	// (0x0003bf0e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003dad5) single_mobtv_pg_channel_table_pane_t

0x7fd5,	// (0x00035e6f) main_mobtv_info_pane_g1_ParamLimits

0x7fd5,	// (0x00035e6f) main_mobtv_info_pane_g1

0x7ff3,	// (0x00035e8d) main_mobtv_info_pane_t1_ParamLimits

0x7ff3,	// (0x00035e8d) main_mobtv_info_pane_t1

0x806b,	// (0x00035f05) main_mobtv_info_pane_t2_ParamLimits

0x806b,	// (0x00035f05) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003dadf) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003dadf) main_mobtv_info_pane_t

0x80fa,	// (0x00035f94) wait_bar_pane_cp05

0x810c,	// (0x00035fa6) main_mobtv_loading_pane_g1_ParamLimits

0x810c,	// (0x00035fa6) main_mobtv_loading_pane_g1

0x811f,	// (0x00035fb9) main_mobtv_loading_pane_g2_ParamLimits

0x811f,	// (0x00035fb9) main_mobtv_loading_pane_g2

0x812b,	// (0x00035fc5) main_mobtv_loading_pane_g3_ParamLimits

0x812b,	// (0x00035fc5) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003dae6) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003dae6) main_mobtv_loading_pane_g

0xe082,	// (0x0003bf1c) main_mobtv_loading_pane_t1_ParamLimits

0xe082,	// (0x0003bf1c) main_mobtv_loading_pane_t1

0xe09a,	// (0x0003bf34) main_mobtv_loading_pane_t2_ParamLimits

0xe09a,	// (0x0003bf34) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003daed) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003daed) main_mobtv_loading_pane_t

0x813e,	// (0x00035fd8) wait_bar_pane_cp06_ParamLimits

0x813e,	// (0x00035fd8) wait_bar_pane_cp06

0xe0be,	// (0x0003bf58) main_mobtv_programe_curr_pane_t1

0xe0cc,	// (0x0003bf66) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003daf2) main_mobtv_programe_curr_pane_t

0xe0da,	// (0x0003bf74) main_mobtv_programe_next_pane_t1

0xe0e8,	// (0x0003bf82) main_mobtv_programe_next_pane_t2

0xe0f6,	// (0x0003bf90) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003daf7) main_mobtv_programe_next_pane_t

0x9cde,	// (0x00037b78) bg_popup_mobtv_noti_window_pane

0xe104,	// (0x0003bf9e) popup_mobtv_noti_window_g1

0xe10c,	// (0x0003bfa6) popup_mobtv_noti_window_t1

0xe11a,	// (0x0003bfb4) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003dafe) popup_mobtv_noti_window_t

0xc8fc,	// (0x0003a796) bg_popup_mobtv_noti_window_pane_g1

0x1ae2,	// (0x0002f97c) sc_clock_pane

0x1ae2,	// (0x0002f97c) main_fs_bigclock_pane

0x778e,	// (0x00035628) blid2_tripm_pane_t4_ParamLimits

0x778e,	// (0x00035628) blid2_tripm_pane_t4

0x814d,	// (0x00035fe7) sc_clock_pane_g1_ParamLimits

0x814d,	// (0x00035fe7) sc_clock_pane_g1

0x815f,	// (0x00035ff9) sc_clock_pane_t1_ParamLimits

0x815f,	// (0x00035ff9) sc_clock_pane_t1

0x8181,	// (0x0003601b) sc_clock_pane_t2_ParamLimits

0x8181,	// (0x0003601b) sc_clock_pane_t2

0x8199,	// (0x00036033) sc_clock_pane_t3_ParamLimits

0x8199,	// (0x00036033) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003db03) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003db03) sc_clock_pane_t

0x91f3,	// (0x0003708d) main_fs_bigclock_indicator_pane_ParamLimits

0x91f3,	// (0x0003708d) main_fs_bigclock_indicator_pane

0x823f,	// (0x000360d9) main_fs_bigclock_pane_g1_ParamLimits

0x823f,	// (0x000360d9) main_fs_bigclock_pane_g1

0x91ff,	// (0x00037099) main_fs_bigclock_pane_t1_ParamLimits

0x91ff,	// (0x00037099) main_fs_bigclock_pane_t1

0x9211,	// (0x000370ab) main_fs_bigclock_pane_t2_ParamLimits

0x9211,	// (0x000370ab) main_fs_bigclock_pane_t2

0x9225,	// (0x000370bf) main_fs_bigclock_pane_t3_ParamLimits

0x9225,	// (0x000370bf) main_fs_bigclock_pane_t3

0x0002,

0xfe55,	// (0x0003dcef) main_fs_bigclock_pane_t_ParamLimits

0xfe55,	// (0x0003dcef) main_fs_bigclock_pane_t

0xec9b,	// (0x0003cb35) main_fs_bigclock_indicator_pane_g1

0xde18,	// (0x0003bcb2) ncim_query_content_pane_g2_ParamLimits

0xde18,	// (0x0003bcb2) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003da90) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003da90) ncim_query_content_pane_g

0x81b2,	// (0x0003604c) sc_clock_pane_t4_ParamLimits

0x81b2,	// (0x0003604c) sc_clock_pane_t4

0x1ac8,	// (0x0002f962) main_radioblah_pane

0x65cd,	// (0x00034467) cell_call4_button_pane_t1_copy1_ParamLimits

0x65cd,	// (0x00034467) cell_call4_button_pane_t1_copy1

0x7d99,	// (0x00035c33) main_ncimui_pane_t1_ParamLimits

0x7d99,	// (0x00035c33) main_ncimui_pane_t1

0x7db3,	// (0x00035c4d) main_ncimui_pane_t2_ParamLimits

0x7db3,	// (0x00035c4d) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003da89) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003da89) main_ncimui_pane_t

0xe25f,	// (0x0003c0f9) main_radioblah_anim_pane_ParamLimits

0xe25f,	// (0x0003c0f9) main_radioblah_anim_pane

0xe270,	// (0x0003c10a) main_radioblah_info_pane_ParamLimits

0xe270,	// (0x0003c10a) main_radioblah_info_pane

0xe284,	// (0x0003c11e) main_radioblah_pane_t1_ParamLimits

0xe284,	// (0x0003c11e) main_radioblah_pane_t1

0xe2a0,	// (0x0003c13a) main_radioblah_pane_t2_ParamLimits

0xe2a0,	// (0x0003c13a) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003db24) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003db24) main_radioblah_pane_t

0x829e,	// (0x00036138) main_radioblah_rocker_ctrl_pane_ParamLimits

0x829e,	// (0x00036138) main_radioblah_rocker_ctrl_pane

0xe2e8,	// (0x0003c182) main_radioblah_info_pane_t1_ParamLimits

0xe2e8,	// (0x0003c182) main_radioblah_info_pane_t1

0x82f6,	// (0x00036190) main_radioblah_info_pane_t2_ParamLimits

0x82f6,	// (0x00036190) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003db2d) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003db2d) main_radioblah_info_pane_t

0xc8fc,	// (0x0003a796) main_radioblah_rocker_ctrl_pane_g1

0x83a6,	// (0x00036240) main_radioblah_rocker_ctrl_pane_g2

0x83ae,	// (0x00036248) main_radioblah_rocker_ctrl_pane_g3

0x83b6,	// (0x00036250) main_radioblah_rocker_ctrl_pane_g4

0x83be,	// (0x00036258) main_radioblah_rocker_ctrl_pane_g5

0x83c6,	// (0x00036260) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003db36) main_radioblah_rocker_ctrl_pane_g

0x7a17,	// (0x000358b1) main_cset_text2_pane_t1_copy1_ParamLimits

0x662b,	// (0x000344c5) cam4_image_uncrop_qvga_pane

0x66a6,	// (0x00034540) vid4_image_uncrop_qcif_pane

0x7919,	// (0x000357b3) cam6_image_uncrop_qvga_pane_ParamLimits

0x7919,	// (0x000357b3) cam6_image_uncrop_qvga_pane

0xdb04,	// (0x0003b99e) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb04,	// (0x0003b99e) vid6_image_uncrop_qcif_pane

0x9cde,	// (0x00037b78) bg_popup_preview_window_pane_cp03

0xddca,	// (0x0003bc64) list_cset_text2_pane

0xddd2,	// (0x0003bc6c) main_cset6_text2_pane_g1

0xddda,	// (0x0003bc74) main_cset6_text2_pane_t1

0x83ce,	// (0x00036268) list_cset_text2_pane_t1_ParamLimits

0x83ce,	// (0x00036268) list_cset_text2_pane_t1

0x1ac8,	// (0x0002f962) main_radioblah_pane_ParamLimits

0x80e6,	// (0x00035f80) main_mobtv_info_pane_t3_ParamLimits

0x80e6,	// (0x00035f80) main_mobtv_info_pane_t3

0x828c,	// (0x00036126) main_radioblah_pane_g1

0x82c6,	// (0x00036160) main_radioblah_info_pane_g1

0x834b,	// (0x000361e5) main_radioblah_info_pane_t3_ParamLimits

0x834b,	// (0x000361e5) main_radioblah_info_pane_t3

0x371e,	// (0x000315b8) highlight_cell_cale_month_pane_ParamLimits

0x371e,	// (0x000315b8) highlight_cell_cale_month_pane

0x1ae2,	// (0x0002f97c) main_phob_fisheye_pane

0xcc67,	// (0x0003ab01) scroll_pane_cp0031_ParamLimits

0xcc67,	// (0x0003ab01) scroll_pane_cp0031

0xdc12,	// (0x0003baac) wait_bar_pane_cp08_ParamLimits

0x7a9c,	// (0x00035936) cset_list_set_pane_copy1_ParamLimits

0xe322,	// (0x0003c1bc) highlight_cell_cale_month_pane_g1

0x83e7,	// (0x00036281) highlight_cell_cale_month_pane_t1

0xd885,	// (0x0003b71f) list_gen_pane_cp01

0xd434,	// (0x0003b2ce) scroll_pane_01

0xe32a,	// (0x0003c1c4) list_single_double_fisheye_pane

0x83f5,	// (0x0003628f) list_double_fisheye_pane_g1_ParamLimits

0x83f5,	// (0x0003628f) list_double_fisheye_pane_g1

0x8401,	// (0x0003629b) list_double_fisheye_pane_g2_ParamLimits

0x8401,	// (0x0003629b) list_double_fisheye_pane_g2

0x8415,	// (0x000362af) list_double_fisheye_pane_g3_ParamLimits

0x8415,	// (0x000362af) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003db43) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003db43) list_double_fisheye_pane_g

0x843e,	// (0x000362d8) list_double_fisheye_pane_t1_ParamLimits

0x843e,	// (0x000362d8) list_double_fisheye_pane_t1

0x8459,	// (0x000362f3) list_double_fisheye_pane_t2_ParamLimits

0x8459,	// (0x000362f3) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003db4e) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003db4e) list_double_fisheye_pane_t

0x1ae2,	// (0x0002f97c) main_call5_pane

0x81dd,	// (0x00036077) sc_swipe_pane_ParamLimits

0x81dd,	// (0x00036077) sc_swipe_pane

0x848e,	// (0x00036328) call5_image_pane_ParamLimits

0x848e,	// (0x00036328) call5_image_pane

0x84ab,	// (0x00036345) call5_swipe_1_pane_ParamLimits

0x84ab,	// (0x00036345) call5_swipe_1_pane

0x84be,	// (0x00036358) call5_swipe_2_pane_ParamLimits

0x84be,	// (0x00036358) call5_swipe_2_pane

0x84e9,	// (0x00036383) popup_call5_audio_first_window_ParamLimits

0x84e9,	// (0x00036383) popup_call5_audio_first_window

0xcb5f,	// (0x0003a9f9) call5_swipe_1_pane_g1_ParamLimits

0xcb5f,	// (0x0003a9f9) call5_swipe_1_pane_g1

0xe333,	// (0x0003c1cd) call5_swipe_1_pane_g2_ParamLimits

0xe333,	// (0x0003c1cd) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003db53) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003db53) call5_swipe_1_pane_g

0xe33f,	// (0x0003c1d9) call5_swipe_1_pane_t1_ParamLimits

0xe33f,	// (0x0003c1d9) call5_swipe_1_pane_t1

0xcb5f,	// (0x0003a9f9) call5_swipe_2_pane_g1_ParamLimits

0xcb5f,	// (0x0003a9f9) call5_swipe_2_pane_g1

0xe354,	// (0x0003c1ee) call5_swipe_2_pane_g2_ParamLimits

0xe354,	// (0x0003c1ee) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003db58) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003db58) call5_swipe_2_pane_g

0xe360,	// (0x0003c1fa) call5_swipe_2_pane_t1_ParamLimits

0xe360,	// (0x0003c1fa) call5_swipe_2_pane_t1

0xe375,	// (0x0003c20f) sc_swipe_pane_g1_ParamLimits

0xe375,	// (0x0003c20f) sc_swipe_pane_g1

0xe382,	// (0x0003c21c) sc_swipe_pane_g2_ParamLimits

0xe382,	// (0x0003c21c) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003db5d) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003db5d) sc_swipe_pane_g

0xe38e,	// (0x0003c228) sc_swipe_pane_t1_ParamLimits

0xe38e,	// (0x0003c228) sc_swipe_pane_t1

0x1ae2,	// (0x0002f97c) main_cmail_launcher_pane

0x84fa,	// (0x00036394) aid_size_cell_cmail_l_ParamLimits

0x84fa,	// (0x00036394) aid_size_cell_cmail_l

0x8508,	// (0x000363a2) grid_cmail_l_pane_ParamLimits

0x8508,	// (0x000363a2) grid_cmail_l_pane

0x8522,	// (0x000363bc) cell_cmail_l_pane_ParamLimits

0x8522,	// (0x000363bc) cell_cmail_l_pane

0xe3a3,	// (0x0003c23d) cell_cmail_l_pane_g1_ParamLimits

0xe3a3,	// (0x0003c23d) cell_cmail_l_pane_g1

0xe3af,	// (0x0003c249) cell_cmail_l_pane_t1_ParamLimits

0xe3af,	// (0x0003c249) cell_cmail_l_pane_t1

0xe3c5,	// (0x0003c25f) cell_cmail_l_pane_t2_ParamLimits

0xe3c5,	// (0x0003c25f) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003db62) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003db62) cell_cmail_l_pane_t

0xa9f8,	// (0x00038892) grid_highlight_pane_cp018_ParamLimits

0xa9f8,	// (0x00038892) grid_highlight_pane_cp018

0x01e2,	// (0x0002e07c) main2_pane_ParamLimits

0x01e2,	// (0x0002e07c) main2_pane

0xa4bd,	// (0x00038357) popup_sp_fs_action_menu_bg_pane_g1

0xa4c5,	// (0x0003835f) popup_sp_fs_action_menu_bg_pane_g2

0xa4cd,	// (0x00038367) popup_sp_fs_action_menu_bg_pane_g3

0xa4d5,	// (0x0003836f) popup_sp_fs_action_menu_bg_pane_g4

0xa4dd,	// (0x00038377) popup_sp_fs_action_menu_bg_pane_g5

0xa4e5,	// (0x0003837f) popup_sp_fs_action_menu_bg_pane_g6

0xa4ed,	// (0x00038387) popup_sp_fs_action_menu_bg_pane_g7

0xa4f5,	// (0x0003838f) popup_sp_fs_action_menu_bg_pane_g8

0xa4fd,	// (0x00038397) popup_sp_fs_action_menu_bg_pane_g9

0xa505,	// (0x0003839f) popup_sp_fs_action_menu_bg_pane_g10

0xa505,	// (0x0003839f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0003d020) popup_sp_fs_action_menu_bg_pane_g

0x26e4,	// (0x0003057e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x2_t3_g3_g1

0x26f0,	// (0x0003058a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x26f0,	// (0x0003058a) list_medium_line_x2_t3_g3_g2

0x26fc,	// (0x00030596) list_medium_line_x2_t3_g3_g3_ParamLimits

0x26fc,	// (0x00030596) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0003d0ce) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0003d0ce) list_medium_line_x2_t3_g3_g

0x2708,	// (0x000305a2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2708,	// (0x000305a2) list_medium_line_x2_t3_g3_t1

0x271d,	// (0x000305b7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x271d,	// (0x000305b7) list_medium_line_x2_t3_g3_t2

0x2731,	// (0x000305cb) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2731,	// (0x000305cb) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0003d0d5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0003d0d5) list_medium_line_x2_t3_g3_t

0x26e4,	// (0x0003057e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x2_t3_g2_g1

0x26fc,	// (0x00030596) list_medium_line_x2_t3_g2_g2_ParamLimits

0x26fc,	// (0x00030596) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0003d0dc) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0003d0dc) list_medium_line_x2_t3_g2_g

0x2746,	// (0x000305e0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2746,	// (0x000305e0) list_medium_line_x2_t3_g2_t1

0x275c,	// (0x000305f6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x275c,	// (0x000305f6) list_medium_line_x2_t3_g2_t2

0x276e,	// (0x00030608) list_medium_line_x2_t3_g2_t3_ParamLimits

0x276e,	// (0x00030608) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0003d0e1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0003d0e1) list_medium_line_x2_t3_g2_t

0x26e4,	// (0x0003057e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x2_t4_g4_g1

0x278b,	// (0x00030625) list_medium_line_x2_t4_g4_g2_ParamLimits

0x278b,	// (0x00030625) list_medium_line_x2_t4_g4_g2

0x26f0,	// (0x0003058a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x26f0,	// (0x0003058a) list_medium_line_x2_t4_g4_g3

0x2797,	// (0x00030631) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2797,	// (0x00030631) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0003d0e8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0003d0e8) list_medium_line_x2_t4_g4_g

0x27a3,	// (0x0003063d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x27a3,	// (0x0003063d) list_medium_line_x2_t4_g4_t1

0x27bd,	// (0x00030657) list_medium_line_x2_t4_g4_t2_ParamLimits

0x27bd,	// (0x00030657) list_medium_line_x2_t4_g4_t2

0x27d3,	// (0x0003066d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x27d3,	// (0x0003066d) list_medium_line_x2_t4_g4_t3

0x27e8,	// (0x00030682) list_medium_line_x2_t4_g4_t4_ParamLimits

0x27e8,	// (0x00030682) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0003d0f1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0003d0f1) list_medium_line_x2_t4_g4_t

0x26e4,	// (0x0003057e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x2_t2_g4_g1

0x278b,	// (0x00030625) list_medium_line_x2_t2_g4_g2_ParamLimits

0x278b,	// (0x00030625) list_medium_line_x2_t2_g4_g2

0x26f0,	// (0x0003058a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x26f0,	// (0x0003058a) list_medium_line_x2_t2_g4_g3

0x26fc,	// (0x00030596) list_medium_line_x2_t2_g4_g4_ParamLimits

0x26fc,	// (0x00030596) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0003d158) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0003d158) list_medium_line_x2_t2_g4_g

0x3744,	// (0x000315de) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3744,	// (0x000315de) list_medium_line_x2_t2_g4_t1

0x2731,	// (0x000305cb) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2731,	// (0x000305cb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0003d161) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0003d161) list_medium_line_x2_t2_g4_t

0x26e4,	// (0x0003057e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x2_t2_g3_g1

0x26f0,	// (0x0003058a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x26f0,	// (0x0003058a) list_medium_line_x2_t2_g3_g2

0x26fc,	// (0x00030596) list_medium_line_x2_t2_g3_g3_ParamLimits

0x26fc,	// (0x00030596) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0003d0ce) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0003d0ce) list_medium_line_x2_t2_g3_g

0x3759,	// (0x000315f3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3759,	// (0x000315f3) list_medium_line_x2_t2_g3_t1

0x2731,	// (0x000305cb) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2731,	// (0x000305cb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0003d166) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0003d166) list_medium_line_x2_t2_g3_t

0x38a4,	// (0x0003173e) main_sp_fs_list_pane_ParamLimits

0x38a4,	// (0x0003173e) main_sp_fs_list_pane

0xd258,	// (0x0003b0f2) sp_fs_scroll_pane_ParamLimits

0xd258,	// (0x0003b0f2) sp_fs_scroll_pane

0x38b0,	// (0x0003174a) list_medium_line_x2_t3_t1

0x38c0,	// (0x0003175a) list_medium_line_x2_t3_t2

0x38ce,	// (0x00031768) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0003d1b1) list_medium_line_x2_t3_t

0x38dc,	// (0x00031776) list_medium_line_x3_t4_t1

0x38ec,	// (0x00031786) list_medium_line_x3_t4_t2

0x38fa,	// (0x00031794) list_medium_line_x3_t4_t3

0x38ce,	// (0x00031768) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0003d1b8) list_medium_line_x3_t4_t

0x3908,	// (0x000317a2) list_medium_line_x4_t5_t1

0x3918,	// (0x000317b2) list_medium_line_x4_t5_t2

0x38fa,	// (0x00031794) list_medium_line_x4_t5_t3

0x3926,	// (0x000317c0) list_medium_line_x4_t5_t4

0x38ce,	// (0x00031768) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0003d1c1) list_medium_line_x4_t5_t

0x26e4,	// (0x0003057e) list_medium_line_t4_g4_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_t4_g4_g1

0x3934,	// (0x000317ce) list_medium_line_t4_g4_g2_ParamLimits

0x3934,	// (0x000317ce) list_medium_line_t4_g4_g2

0x3940,	// (0x000317da) list_medium_line_t4_g4_g3_ParamLimits

0x3940,	// (0x000317da) list_medium_line_t4_g4_g3

0x26fc,	// (0x00030596) list_medium_line_t4_g4_g4_ParamLimits

0x26fc,	// (0x00030596) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0003d1cc) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0003d1cc) list_medium_line_t4_g4_g

0x394c,	// (0x000317e6) list_medium_line_t4_g4_t1_ParamLimits

0x394c,	// (0x000317e6) list_medium_line_t4_g4_t1

0x3961,	// (0x000317fb) list_medium_line_t4_g4_t2_ParamLimits

0x3961,	// (0x000317fb) list_medium_line_t4_g4_t2

0x3976,	// (0x00031810) list_medium_line_t4_g4_t3_ParamLimits

0x3976,	// (0x00031810) list_medium_line_t4_g4_t3

0x2731,	// (0x000305cb) list_medium_line_t4_g4_t4_ParamLimits

0x2731,	// (0x000305cb) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0003d1d5) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0003d1d5) list_medium_line_t4_g4_t

0x3ab1,	// (0x0003194b) chi_dic_find_pane_g1

0x064a,	// (0x0002e4e4) main_tport_pane

0x6e76,	// (0x00034d10) list_medium_line_plain_t1

0x6ed8,	// (0x00034d72) list_medium_line_t2_g2_g1_ParamLimits

0x6ed8,	// (0x00034d72) list_medium_line_t2_g2_g1

0x6ee4,	// (0x00034d7e) list_medium_line_t2_g2_g2_ParamLimits

0x6ee4,	// (0x00034d7e) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003d89a) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003d89a) list_medium_line_t2_g2_g

0x6ef0,	// (0x00034d8a) list_medium_line_t2_g2_t1_ParamLimits

0x6ef0,	// (0x00034d8a) list_medium_line_t2_g2_t1

0x6f0a,	// (0x00034da4) list_medium_line_t2_g2_t2_ParamLimits

0x6f0a,	// (0x00034da4) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003d89f) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003d89f) list_medium_line_t2_g2_t

0xd88e,	// (0x0003b728) aid_sp_fs_list_icon_a_sm

0xd896,	// (0x0003b730) aid_sp_fs_list_icon_d

0xd89e,	// (0x0003b738) aid_sp_fs_text_primary

0xd8a7,	// (0x0003b741) aid_sp_fs_text_secondary

0x753b,	// (0x000353d5) list_medium_line

0x753b,	// (0x000353d5) list_medium_line_g2

0x753b,	// (0x000353d5) list_medium_line_g3

0x753b,	// (0x000353d5) list_medium_line_plain

0x753b,	// (0x000353d5) list_medium_line_plain_t2

0x753b,	// (0x000353d5) list_medium_line_plain_t3

0x753b,	// (0x000353d5) list_medium_line_right_icon

0x753b,	// (0x000353d5) list_medium_line_right_iconx2

0x753b,	// (0x000353d5) list_medium_line_t2

0x753b,	// (0x000353d5) list_medium_line_t2_g2

0x753b,	// (0x000353d5) list_medium_line_t2_g3

0x753b,	// (0x000353d5) list_medium_line_t2_right_icon

0x753b,	// (0x000353d5) list_medium_line_t2_right_iconx2

0x753b,	// (0x000353d5) list_medium_line_t3

0x753b,	// (0x000353d5) list_medium_line_t3_g2

0x753b,	// (0x000353d5) list_medium_line_t3_g3

0x753b,	// (0x000353d5) list_medium_line_t3_right_iconx2

0x7544,	// (0x000353de) list_medium_line_t4_g4

0x754d,	// (0x000353e7) list_medium_line_x2

0x754d,	// (0x000353e7) list_medium_line_x2_t2_g2

0x754d,	// (0x000353e7) list_medium_line_x2_t2_g3

0x754d,	// (0x000353e7) list_medium_line_x2_t2_g4

0x754d,	// (0x000353e7) list_medium_line_x2_t3

0x754d,	// (0x000353e7) list_medium_line_x2_t3_g2

0x754d,	// (0x000353e7) list_medium_line_x2_t3_g3

0x754d,	// (0x000353e7) list_medium_line_x2_t3_g4

0x754d,	// (0x000353e7) list_medium_line_x2_t4_g2

0x754d,	// (0x000353e7) list_medium_line_x2_t4_g4

0x7556,	// (0x000353f0) list_medium_line_x3

0x7556,	// (0x000353f0) list_medium_line_x3_t4

0x7556,	// (0x000353f0) list_medium_line_x3_t4_g4

0x7544,	// (0x000353de) list_medium_line_x4_t4

0x7544,	// (0x000353de) list_medium_line_x4_t4_g7

0x7544,	// (0x000353de) list_medium_line_x4_t5

0x755f,	// (0x000353f9) list_single_fs_dyc_pane_ParamLimits

0x755f,	// (0x000353f9) list_single_fs_dyc_pane

0x26e4,	// (0x0003057e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x4_t4_g7_g1

0x7c95,	// (0x00035b2f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7c95,	// (0x00035b2f) list_medium_line_x4_t4_g7_g2

0x7ca1,	// (0x00035b3b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ca1,	// (0x00035b3b) list_medium_line_x4_t4_g7_g3

0x7cb0,	// (0x00035b4a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7cb0,	// (0x00035b4a) list_medium_line_x4_t4_g7_g4

0x7cbc,	// (0x00035b56) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7cbc,	// (0x00035b56) list_medium_line_x4_t4_g7_g5

0x7ccb,	// (0x00035b65) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7ccb,	// (0x00035b65) list_medium_line_x4_t4_g7_g6

0x7cda,	// (0x00035b74) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7cda,	// (0x00035b74) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003da6a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003da6a) list_medium_line_x4_t4_g7_g

0x7ce6,	// (0x00035b80) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ce6,	// (0x00035b80) list_medium_line_x4_t4_g7_t1

0x7cfb,	// (0x00035b95) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7cfb,	// (0x00035b95) list_medium_line_x4_t4_g7_t2

0x7d10,	// (0x00035baa) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d10,	// (0x00035baa) list_medium_line_x4_t4_g7_t3

0x7d25,	// (0x00035bbf) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d25,	// (0x00035bbf) list_medium_line_x4_t4_g7_t4

0x7d37,	// (0x00035bd1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d37,	// (0x00035bd1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003da79) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003da79) list_medium_line_x4_t4_g7_t

0x7d49,	// (0x00035be3) list_single_dyc_row_pane_ParamLimits

0x7d49,	// (0x00035be3) list_single_dyc_row_pane

0x847b,	// (0x00036315) call5_gesture_pane_ParamLimits

0x847b,	// (0x00036315) call5_gesture_pane

0x84d1,	// (0x0003636b) call5_windows_pane_ParamLimits

0x84d1,	// (0x0003636b) call5_windows_pane

0x853c,	// (0x000363d6) call5_swipe_1_pane_cp_ParamLimits

0x853c,	// (0x000363d6) call5_swipe_1_pane_cp

0x8548,	// (0x000363e2) call5_swipe_2_pane_cp_ParamLimits

0x8548,	// (0x000363e2) call5_swipe_2_pane_cp

0xa5e9,	// (0x00038483) call5_image_pane_cp

0x8554,	// (0x000363ee) popup_call5_audio_first_window_cp_ParamLimits

0x8554,	// (0x000363ee) popup_call5_audio_first_window_cp

0xe375,	// (0x0003c20f) call5_swipe_1_pane_g1_cp_ParamLimits

0xe375,	// (0x0003c20f) call5_swipe_1_pane_g1_cp

0xe3e2,	// (0x0003c27c) call5_swipe_1_pane_g2_cp

0xe38e,	// (0x0003c228) call5_swipe_1_pane_t1_cp_ParamLimits

0xe38e,	// (0x0003c228) call5_swipe_1_pane_t1_cp

0xe375,	// (0x0003c20f) call5_swipe_2_pane_g1_cp_ParamLimits

0xe375,	// (0x0003c20f) call5_swipe_2_pane_g1_cp

0xe3ea,	// (0x0003c284) call5_swipe_2_pane_g2_cp

0xe3f2,	// (0x0003c28c) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3f2,	// (0x0003c28c) call5_swipe_2_pane_t1_cp

0xa9f8,	// (0x00038892) main_sp_fs_email_pane

0xe407,	// (0x0003c2a1) main_sp_fs_listscroll_pane_te

0x8562,	// (0x000363fc) popup_sp_fs_action_menu_pane_ParamLimits

0x8562,	// (0x000363fc) popup_sp_fs_action_menu_pane

0xc8fc,	// (0x0003a796) bg_sp_fs_ctrlbar_pane_g1

0xe410,	// (0x0003c2aa) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe419,	// (0x0003c2b3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe422,	// (0x0003c2bc) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc8fc,	// (0x0003a796) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003db67) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc6e1,	// (0x0003a57b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc6e1,	// (0x0003a57b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe42b,	// (0x0003c2c5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe42b,	// (0x0003c2c5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe437,	// (0x0003c2d1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe437,	// (0x0003c2d1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003db70) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003db70) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe443,	// (0x0003c2dd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe443,	// (0x0003c2dd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x85a6,	// (0x00036440) list_medium_line_t2_right_icon_g1

0x85ae,	// (0x00036448) list_medium_line_t2_right_icon_t1

0x85be,	// (0x00036458) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003db75) list_medium_line_t2_right_icon_t

0xc4f4,	// (0x0003a38e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc4f4,	// (0x0003a38e) bg_sp_fs_ctrlbar_pane

0x8618,	// (0x000364b2) main_sp_fs_ctrlbar_button_pane_cp01

0x8622,	// (0x000364bc) main_sp_fs_ctrlbar_ddmenu_pane

0xe495,	// (0x0003c32f) main_sp_fs_ctrlbar_pane_g1

0xe4a1,	// (0x0003c33b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003db7a) main_sp_fs_ctrlbar_pane_g

0xe4ad,	// (0x0003c347) main_sp_fs_ctrlbar_pane_t1

0x862c,	// (0x000364c6) main_sp_fs_ctrlbar_pane

0x8650,	// (0x000364ea) main_sp_fs_listscroll_pane_te_cp01

0x8670,	// (0x0003650a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8670,	// (0x0003650a) popup_sp_fs_action_menu_pane_cp01

0xa9f8,	// (0x00038892) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa9f8,	// (0x00038892) bg_sp_fs_highlight_list_pane_cp01

0xe4dd,	// (0x0003c377) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4dd,	// (0x0003c377) sp_fs_action_menu_list_gene_pane_g1

0xe4ec,	// (0x0003c386) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4ec,	// (0x0003c386) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003db84) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003db84) sp_fs_action_menu_list_gene_pane_g

0xe4f9,	// (0x0003c393) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4f9,	// (0x0003c393) sp_fs_action_menu_list_gene_pane_t1

0xe511,	// (0x0003c3ab) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe511,	// (0x0003c3ab) sp_fs_action_menu_list_gene_pane

0xe532,	// (0x0003c3cc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe532,	// (0x0003c3cc) popup_sp_fs_action_menu_bg_pane

0xe540,	// (0x0003c3da) sp_fs_action_menu_list_pane_ParamLimits

0xe540,	// (0x0003c3da) sp_fs_action_menu_list_pane

0x86a0,	// (0x0003653a) sp_fs_scroll_pane_cp01_ParamLimits

0x86a0,	// (0x0003653a) sp_fs_scroll_pane_cp01

0x86c6,	// (0x00036560) list_medium_line_plain_t2_t1

0x86d6,	// (0x00036570) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003db89) list_medium_line_plain_t2_t

0x86e6,	// (0x00036580) list_medium_line_plain_t3_t1

0x86f6,	// (0x00036590) list_medium_line_plain_t3_t2

0x8704,	// (0x0003659e) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003db8e) list_medium_line_plain_t3_t

0x26e4,	// (0x0003057e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x2_t2_g2_g1

0x26fc,	// (0x00030596) list_medium_line_x2_t2_g2_g2_ParamLimits

0x26fc,	// (0x00030596) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0003d0dc) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0003d0dc) list_medium_line_x2_t2_g2_g

0x394c,	// (0x000317e6) list_medium_line_x2_t2_g2_t1_ParamLimits

0x394c,	// (0x000317e6) list_medium_line_x2_t2_g2_t1

0x2731,	// (0x000305cb) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2731,	// (0x000305cb) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003db95) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003db95) list_medium_line_x2_t2_g2_t

0x26e4,	// (0x0003057e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x2_t4_g2_g1

0x26fc,	// (0x00030596) list_medium_line_x2_t4_g2_g2_ParamLimits

0x26fc,	// (0x00030596) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0003d0dc) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0003d0dc) list_medium_line_x2_t4_g2_g

0x8712,	// (0x000365ac) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8712,	// (0x000365ac) list_medium_line_x2_t4_g2_t1

0x872c,	// (0x000365c6) list_medium_line_x2_t4_g2_t2_ParamLimits

0x872c,	// (0x000365c6) list_medium_line_x2_t4_g2_t2

0x8742,	// (0x000365dc) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8742,	// (0x000365dc) list_medium_line_x2_t4_g2_t3

0x2731,	// (0x000305cb) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2731,	// (0x000305cb) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003db9a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003db9a) list_medium_line_x2_t4_g2_t

0x8757,	// (0x000365f1) list_medium_line_t3_right_iconx2_g1

0x85a6,	// (0x00036440) list_medium_line_t3_right_iconx2_g2

0x875f,	// (0x000365f9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003dba3) list_medium_line_t3_right_iconx2_g

0x8769,	// (0x00036603) list_medium_line_t3_right_iconx2_t1

0x8779,	// (0x00036613) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003dbaa) list_medium_line_t3_right_iconx2_t

0x26e4,	// (0x0003057e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x3_t4_g4_g1

0x26f0,	// (0x0003058a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x26f0,	// (0x0003058a) list_medium_line_x3_t4_g4_g2

0x3934,	// (0x000317ce) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3934,	// (0x000317ce) list_medium_line_x3_t4_g4_g3

0x8787,	// (0x00036621) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8787,	// (0x00036621) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003dbaf) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003dbaf) list_medium_line_x3_t4_g4_g

0x8793,	// (0x0003662d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8793,	// (0x0003662d) list_medium_line_x3_t4_g4_t1

0x87aa,	// (0x00036644) list_medium_line_x3_t4_g4_t2_ParamLimits

0x87aa,	// (0x00036644) list_medium_line_x3_t4_g4_t2

0x3961,	// (0x000317fb) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3961,	// (0x000317fb) list_medium_line_x3_t4_g4_t3

0x87c5,	// (0x0003665f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x87c5,	// (0x0003665f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003dbb8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003dbb8) list_medium_line_x3_t4_g4_t

0x87e2,	// (0x0003667c) list_single_dyc_row_text_pane_t1_ParamLimits

0x87e2,	// (0x0003667c) list_single_dyc_row_text_pane_t1

0x882b,	// (0x000366c5) list_single_dyc_row_text_pane_t2_ParamLimits

0x882b,	// (0x000366c5) list_single_dyc_row_text_pane_t2

0xe562,	// (0x0003c3fc) list_single_dyc_row_text_pane_t3_ParamLimits

0xe562,	// (0x0003c3fc) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003dbc1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003dbc1) list_single_dyc_row_text_pane_t

0xe586,	// (0x0003c420) list_single_dyc_row_pane_g1_ParamLimits

0xe586,	// (0x0003c420) list_single_dyc_row_pane_g1

0xe592,	// (0x0003c42c) list_single_dyc_row_pane_g2_ParamLimits

0xe592,	// (0x0003c42c) list_single_dyc_row_pane_g2

0xe59e,	// (0x0003c438) list_single_dyc_row_pane_g3_ParamLimits

0xe59e,	// (0x0003c438) list_single_dyc_row_pane_g3

0xe5aa,	// (0x0003c444) list_single_dyc_row_pane_g4_ParamLimits

0xe5aa,	// (0x0003c444) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003dbce) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003dbce) list_single_dyc_row_pane_g

0xe5b6,	// (0x0003c450) list_single_dyc_row_text_pane_ParamLimits

0xe5b6,	// (0x0003c450) list_single_dyc_row_text_pane

0x9cde,	// (0x00037b78) bg_sp_fs_scroll_pane

0xe5d5,	// (0x0003c46f) thumb_sp_fs_scroll_pane

0x6ed8,	// (0x00034d72) list_medium_line_g1_ParamLimits

0x6ed8,	// (0x00034d72) list_medium_line_g1

0x8960,	// (0x000367fa) list_medium_line_t1_ParamLimits

0x8960,	// (0x000367fa) list_medium_line_t1

0x26e4,	// (0x0003057e) list_medium_line_x2_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x2_g1

0x26f0,	// (0x0003058a) list_medium_line_x2_g2_ParamLimits

0x26f0,	// (0x0003058a) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003dbd7) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003dbd7) list_medium_line_x2_g

0xe5de,	// (0x0003c478) list_medium_line_x2_t1_ParamLimits

0xe5de,	// (0x0003c478) list_medium_line_x2_t1

0x26e4,	// (0x0003057e) list_medium_line_x3_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x3_g1

0x26f0,	// (0x0003058a) list_medium_line_x3_g2_ParamLimits

0x26f0,	// (0x0003058a) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003dbd7) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003dbd7) list_medium_line_x3_g

0xe5de,	// (0x0003c478) list_medium_line_x3_t1_ParamLimits

0xe5de,	// (0x0003c478) list_medium_line_x3_t1

0xe5f4,	// (0x0003c48e) thumb_sp_fs_scroll_pane_g1

0xe5fd,	// (0x0003c497) thumb_sp_fs_scroll_pane_g2

0xe606,	// (0x0003c4a0) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003dbdc) thumb_sp_fs_scroll_pane_g

0xe5f4,	// (0x0003c48e) bg_sp_fs_scroll_pane_g1

0xe5fd,	// (0x0003c497) bg_sp_fs_scroll_pane_g2

0xe606,	// (0x0003c4a0) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003dbdc) bg_sp_fs_scroll_pane_g

0x26e4,	// (0x0003057e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x26e4,	// (0x0003057e) list_medium_line_x2_t3_g4_g1

0x278b,	// (0x00030625) list_medium_line_x2_t3_g4_g2_ParamLimits

0x278b,	// (0x00030625) list_medium_line_x2_t3_g4_g2

0x26f0,	// (0x0003058a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x26f0,	// (0x0003058a) list_medium_line_x2_t3_g4_g3

0x26fc,	// (0x00030596) list_medium_line_x2_t3_g4_g4_ParamLimits

0x26fc,	// (0x00030596) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0003d158) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0003d158) list_medium_line_x2_t3_g4_g

0x8975,	// (0x0003680f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8975,	// (0x0003680f) list_medium_line_x2_t3_g4_t1

0x898f,	// (0x00036829) list_medium_line_x2_t3_g4_t2_ParamLimits

0x898f,	// (0x00036829) list_medium_line_x2_t3_g4_t2

0x2731,	// (0x000305cb) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2731,	// (0x000305cb) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003dbe3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003dbe3) list_medium_line_x2_t3_g4_t

0x6ed8,	// (0x00034d72) list_medium_line_g2_g1_ParamLimits

0x6ed8,	// (0x00034d72) list_medium_line_g2_g1

0x6ee4,	// (0x00034d7e) list_medium_line_g2_g2_ParamLimits

0x6ee4,	// (0x00034d7e) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003d89a) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003d89a) list_medium_line_g2_g

0x89a9,	// (0x00036843) list_medium_line_g2_t1_ParamLimits

0x89a9,	// (0x00036843) list_medium_line_g2_t1

0x6ed8,	// (0x00034d72) list_medium_line_t3_g2_g1_ParamLimits

0x6ed8,	// (0x00034d72) list_medium_line_t3_g2_g1

0x6ee4,	// (0x00034d7e) list_medium_line_t3_g2_g2_ParamLimits

0x6ee4,	// (0x00034d7e) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003d89a) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003d89a) list_medium_line_t3_g2_g

0x89be,	// (0x00036858) list_medium_line_t3_g2_t1_ParamLimits

0x89be,	// (0x00036858) list_medium_line_t3_g2_t1

0x89d8,	// (0x00036872) list_medium_line_t3_g2_t2_ParamLimits

0x89d8,	// (0x00036872) list_medium_line_t3_g2_t2

0x89ee,	// (0x00036888) list_medium_line_t3_g2_t3_ParamLimits

0x89ee,	// (0x00036888) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003dbea) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003dbea) list_medium_line_t3_g2_t

0x85a6,	// (0x00036440) list_medium_line_right_icon_g1

0x8a08,	// (0x000368a2) list_medium_line_right_icon_t1

0x6ed8,	// (0x00034d72) list_medium_line_t2_g1_ParamLimits

0x6ed8,	// (0x00034d72) list_medium_line_t2_g1

0x8a16,	// (0x000368b0) list_medium_line_t2_t1_ParamLimits

0x8a16,	// (0x000368b0) list_medium_line_t2_t1

0x8a30,	// (0x000368ca) list_medium_line_t2_t2_ParamLimits

0x8a30,	// (0x000368ca) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003dbf1) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003dbf1) list_medium_line_t2_t

0x6ed8,	// (0x00034d72) list_medium_line_t3_g1_ParamLimits

0x6ed8,	// (0x00034d72) list_medium_line_t3_g1

0x8a49,	// (0x000368e3) list_medium_line_t3_t1_ParamLimits

0x8a49,	// (0x000368e3) list_medium_line_t3_t1

0x8a63,	// (0x000368fd) list_medium_line_t3_t2_ParamLimits

0x8a63,	// (0x000368fd) list_medium_line_t3_t2

0x8a79,	// (0x00036913) list_medium_line_t3_t3_ParamLimits

0x8a79,	// (0x00036913) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003dbf6) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003dbf6) list_medium_line_t3_t

0x6ed8,	// (0x00034d72) list_medium_line_g3_g1_ParamLimits

0x6ed8,	// (0x00034d72) list_medium_line_g3_g1

0x8a8e,	// (0x00036928) list_medium_line_g3_g2_ParamLimits

0x8a8e,	// (0x00036928) list_medium_line_g3_g2

0x6ee4,	// (0x00034d7e) list_medium_line_g3_g3_ParamLimits

0x6ee4,	// (0x00034d7e) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003dbfd) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003dbfd) list_medium_line_g3_g

0x8a9a,	// (0x00036934) list_medium_line_g3_t1_ParamLimits

0x8a9a,	// (0x00036934) list_medium_line_g3_t1

0x6ed8,	// (0x00034d72) list_medium_line_t2_g3_g1_ParamLimits

0x6ed8,	// (0x00034d72) list_medium_line_t2_g3_g1

0x8a8e,	// (0x00036928) list_medium_line_t2_g3_g2_ParamLimits

0x8a8e,	// (0x00036928) list_medium_line_t2_g3_g2

0x6ee4,	// (0x00034d7e) list_medium_line_t2_g3_g3_ParamLimits

0x6ee4,	// (0x00034d7e) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003dbfd) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003dbfd) list_medium_line_t2_g3_g

0x8aaf,	// (0x00036949) list_medium_line_t2_g3_t1_ParamLimits

0x8aaf,	// (0x00036949) list_medium_line_t2_g3_t1

0x8ac9,	// (0x00036963) list_medium_line_t2_g3_t2_ParamLimits

0x8ac9,	// (0x00036963) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003dc04) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003dc04) list_medium_line_t2_g3_t

0x6ed8,	// (0x00034d72) list_medium_line_t3_g3_g1_ParamLimits

0x6ed8,	// (0x00034d72) list_medium_line_t3_g3_g1

0x8a8e,	// (0x00036928) list_medium_line_t3_g3_g2_ParamLimits

0x8a8e,	// (0x00036928) list_medium_line_t3_g3_g2

0x6ee4,	// (0x00034d7e) list_medium_line_t3_g3_g3_ParamLimits

0x6ee4,	// (0x00034d7e) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003dbfd) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003dbfd) list_medium_line_t3_g3_g

0x8ae7,	// (0x00036981) list_medium_line_t3_g3_t1_ParamLimits

0x8ae7,	// (0x00036981) list_medium_line_t3_g3_t1

0x8b00,	// (0x0003699a) list_medium_line_t3_g3_t2_ParamLimits

0x8b00,	// (0x0003699a) list_medium_line_t3_g3_t2

0x8b16,	// (0x000369b0) list_medium_line_t3_g3_t3_ParamLimits

0x8b16,	// (0x000369b0) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003dc09) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003dc09) list_medium_line_t3_g3_t

0x8757,	// (0x000365f1) list_medium_line_right_iconx2_g1

0x85a6,	// (0x00036440) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003dc10) list_medium_line_right_iconx2_g

0x8b30,	// (0x000369ca) list_medium_line_right_iconx2_t1

0x8757,	// (0x000365f1) list_medium_line_t2_right_iconx2_g1

0x85a6,	// (0x00036440) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003dc10) list_medium_line_t2_right_iconx2_g

0x8b3e,	// (0x000369d8) list_medium_line_t2_right_iconx2_t1

0x8b4e,	// (0x000369e8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003dc15) list_medium_line_t2_right_iconx2_t

0x8b60,	// (0x000369fa) list_medium_line_x4_t4_t1

0x8b6e,	// (0x00036a08) list_medium_line_x4_t4_t2

0x8b7e,	// (0x00036a18) list_medium_line_x4_t4_t3

0x8b8e,	// (0x00036a28) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003dc1a) list_medium_line_x4_t4_t

0x8be1,	// (0x00036a7b) tport_appsw_pane_ParamLimits

0x8be1,	// (0x00036a7b) tport_appsw_pane

0x8bf9,	// (0x00036a93) tport_contact_pane_ParamLimits

0x8bf9,	// (0x00036a93) tport_contact_pane

0x8c11,	// (0x00036aab) tport_listscroll_pane_ParamLimits

0x8c11,	// (0x00036aab) tport_listscroll_pane

0x8c2b,	// (0x00036ac5) cell_tport_appsw_pane_ParamLimits

0x8c2b,	// (0x00036ac5) cell_tport_appsw_pane

0xd2dd,	// (0x0003b177) tport_appsw_pane_g1_ParamLimits

0xd2dd,	// (0x0003b177) tport_appsw_pane_g1

0xe60f,	// (0x0003c4a9) tport_contact_pane_g1

0xde9e,	// (0x0003bd38) tport_contact_pane_t1

0xe618,	// (0x0003c4b2) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003dc23) tport_contact_pane_t

0xe626,	// (0x0003c4c0) list_tport_pane

0xe62f,	// (0x0003c4c9) scroll_pane_cp_030

0x8c73,	// (0x00036b0d) cell_tport_appsw_pane_g1

0x8c83,	// (0x00036b1d) cell_tport_appsw_pane_t1

0x8c91,	// (0x00036b2b) grid_highlight_pane_cp019

0x8c99,	// (0x00036b33) list_tport_double_graphic_pane_ParamLimits

0x8c99,	// (0x00036b33) list_tport_double_graphic_pane

0xa9f8,	// (0x00038892) list_highlight_pane_cp023_ParamLimits

0xa9f8,	// (0x00038892) list_highlight_pane_cp023

0x8ca6,	// (0x00036b40) list_tport_double_graphic_pane_g1_ParamLimits

0x8ca6,	// (0x00036b40) list_tport_double_graphic_pane_g1

0x8cb3,	// (0x00036b4d) list_tport_double_graphic_pane_t1_ParamLimits

0x8cb3,	// (0x00036b4d) list_tport_double_graphic_pane_t1

0x8cc8,	// (0x00036b62) list_tport_double_graphic_pane_t2_ParamLimits

0x8cc8,	// (0x00036b62) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003dc2f) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003dc2f) list_tport_double_graphic_pane_t

0x9cde,	// (0x00037b78) main_cale_note_pane

0x1665,	// (0x0002f4ff) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1665,	// (0x0002f4ff) cell_vitu2_function_top_wide_pane_cp01

0x80fa,	// (0x00035f94) wait_bar_pane_cp05_ParamLimits

0xa9f8,	// (0x00038892) listscroll_cmail_pane

0xe638,	// (0x0003c4d2) list_cmail_pane

0x8cda,	// (0x00036b74) list_cmail_body_pane

0x8cef,	// (0x00036b89) list_single_cmail_header_caption_pane

0x8d05,	// (0x00036b9f) list_single_cmail_header_detail_pane_ParamLimits

0x8d05,	// (0x00036b9f) list_single_cmail_header_detail_pane

0xe648,	// (0x0003c4e2) list_single_cmail_header_caption_pane_t1

0x8d2e,	// (0x00036bc8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d2e,	// (0x00036bc8) list_single_cmail_header_detail_pane_g1

0xe65f,	// (0x0003c4f9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe65f,	// (0x0003c4f9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003dc34) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003dc34) list_single_cmail_header_detail_pane_g

0xe678,	// (0x0003c512) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe678,	// (0x0003c512) list_single_cmail_header_detail_pane_t1

0xe6d8,	// (0x0003c572) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6d8,	// (0x0003c572) list_single_cmail_header_editor_pane_bg

0xe01b,	// (0x0003beb5) list_cmail_body_pane_g1

0xe6ef,	// (0x0003c589) list_cmail_body_pane_t1

0xd31a,	// (0x0003b1b4) list_single_cmail_header_editor_pane_bg_g1

0xa842,	// (0x000386dc) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd32a,	// (0x0003b1c4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd322,	// (0x0003b1bc) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd56e,	// (0x0003b408) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd34a,	// (0x0003b1e4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd33a,	// (0x0003b1d4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd342,	// (0x0003b1dc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa822,	// (0x000386bc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d46,	// (0x00036be0) calenote_gesture_pane_ParamLimits

0x8d46,	// (0x00036be0) calenote_gesture_pane

0x8d66,	// (0x00036c00) calenote_window_pane_ParamLimits

0x8d66,	// (0x00036c00) calenote_window_pane

0xe6fd,	// (0x0003c597) popup_note_window_cp01

0x8d82,	// (0x00036c1c) calenote_swipe_1_pane_ParamLimits

0x8d82,	// (0x00036c1c) calenote_swipe_1_pane

0x8548,	// (0x000363e2) calenote_swipe_2_pane_ParamLimits

0x8548,	// (0x000363e2) calenote_swipe_2_pane

0xe375,	// (0x0003c20f) calenote_swipe_1_pane_g1_ParamLimits

0xe375,	// (0x0003c20f) calenote_swipe_1_pane_g1

0xe382,	// (0x0003c21c) calenote_swipe_1_pane_g2_ParamLimits

0xe382,	// (0x0003c21c) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003db5d) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003db5d) calenote_swipe_1_pane_g

0xe70f,	// (0x0003c5a9) calenote_swipe_1_pane_t1_ParamLimits

0xe70f,	// (0x0003c5a9) calenote_swipe_1_pane_t1

0xe375,	// (0x0003c20f) calenote_swipe_2_pane_g1_ParamLimits

0xe375,	// (0x0003c20f) calenote_swipe_2_pane_g1

0xe72e,	// (0x0003c5c8) calenote_swipe_2_pane_g2_ParamLimits

0xe72e,	// (0x0003c5c8) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003dc40) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003dc40) calenote_swipe_2_pane_g

0xe73a,	// (0x0003c5d4) calenote_swipe_2_pane_t1_ParamLimits

0xe73a,	// (0x0003c5d4) calenote_swipe_2_pane_t1

0x9cde,	// (0x00037b78) main_mup_navstr_pane

0x5863,	// (0x000336fd) main_mup3_pane_t7_ParamLimits

0x5863,	// (0x000336fd) main_mup3_pane_t7

0x6281,	// (0x0003411b) main_mp4_pane_g6_ParamLimits

0x6281,	// (0x0003411b) main_mp4_pane_g6

0x64e6,	// (0x00034380) main_image3_pane_t4_ParamLimits

0x64e6,	// (0x00034380) main_image3_pane_t4

0x8d97,	// (0x00036c31) popup_navstr_preview_pane_ParamLimits

0x8d97,	// (0x00036c31) popup_navstr_preview_pane

0x8dab,	// (0x00036c45) scroll_navstr_pane_ParamLimits

0x8dab,	// (0x00036c45) scroll_navstr_pane

0x9cde,	// (0x00037b78) bg_popup_preview_window_pane_cp04

0xe761,	// (0x0003c5fb) popup_navstr_preview_pane_t1

0x8dbf,	// (0x00036c59) scroll_navstr_pane_g1_ParamLimits

0x8dbf,	// (0x00036c59) scroll_navstr_pane_g1

0x8dd3,	// (0x00036c6d) scroll_navstr_pane_t1_ParamLimits

0x8dd3,	// (0x00036c6d) scroll_navstr_pane_t1

0xe706,	// (0x0003c5a0) bg_button_pane_cp014

0xe706,	// (0x0003c5a0) bg_button_pane_cp030

0x8421,	// (0x000362bb) list_double_fisheye_pane_g4_ParamLimits

0x8421,	// (0x000362bb) list_double_fisheye_pane_g4

0x842d,	// (0x000362c7) list_double_fisheye_pane_g5_ParamLimits

0x842d,	// (0x000362c7) list_double_fisheye_pane_g5

0xd258,	// (0x0003b0f2) sp_fs_scroll_pane_cp03

0xe495,	// (0x0003c32f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe4a1,	// (0x0003c33b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003db7a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe4ad,	// (0x0003c347) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe640,	// (0x0003c4da) sp_fs_scroll_pane_cp02

0xa528,	// (0x000383c2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa528,	// (0x000383c2) popup_sp_fs_calendar_preview_list_single_pane

0x9cde,	// (0x00037b78) main_cam6_pano_pane

0x1ac8,	// (0x0002f962) main_mup3_pane_ParamLimits

0x9cde,	// (0x00037b78) main_phacti_pane

0x7fcd,	// (0x00035e67) bg_button_pane_cp11

0x7fe7,	// (0x00035e81) main_mobtv_info_pane_g2_ParamLimits

0x7fe7,	// (0x00035e81) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003dada) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003dada) main_mobtv_info_pane_g

0x81c4,	// (0x0003605e) sc_clock_pane_t5_ParamLimits

0x81c4,	// (0x0003605e) sc_clock_pane_t5

0x828c,	// (0x00036126) main_radioblah_pane_g1_ParamLimits

0xe2b8,	// (0x0003c152) main_radioblah_pane_t3_ParamLimits

0xe2b8,	// (0x0003c152) main_radioblah_pane_t3

0xe2d0,	// (0x0003c16a) main_radioblah_pane_t4_ParamLimits

0xe2d0,	// (0x0003c16a) main_radioblah_pane_t4

0x82b4,	// (0x0003614e) main_radioblah_text_pane_ParamLimits

0x82b4,	// (0x0003614e) main_radioblah_text_pane

0x82c6,	// (0x00036160) main_radioblah_info_pane_g1_ParamLimits

0x835f,	// (0x000361f9) main_radioblah_info_pane_t4_ParamLimits

0x835f,	// (0x000361f9) main_radioblah_info_pane_t4

0xa9f8,	// (0x00038892) main_sp_fs_calendar_pane

0x8dea,	// (0x00036c84) main_phacti_pane_g1

0x8df2,	// (0x00036c8c) phacti_note_pane_ParamLimits

0x8df2,	// (0x00036c8c) phacti_note_pane

0xe778,	// (0x0003c612) phacti_term_pane_ParamLimits

0xe778,	// (0x0003c612) phacti_term_pane

0xe78d,	// (0x0003c627) phacti_note_pane_t1_ParamLimits

0xe78d,	// (0x0003c627) phacti_note_pane_t1

0xe7a4,	// (0x0003c63e) phacti_term_pane_g1

0xe7ac,	// (0x0003c646) phacti_term_pane_t1_ParamLimits

0xe7ac,	// (0x0003c646) phacti_term_pane_t1

0xe7d6,	// (0x0003c670) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa5c7,	// (0x00038461) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003dc4a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7de,	// (0x0003c678) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7de,	// (0x0003c678) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7f4,	// (0x0003c68e) aid_popup_sp_fs_bg_corner_pane

0xc8fc,	// (0x0003a796) popup_sp_fs_calendar_preview_bg_pane_g1

0x9cde,	// (0x00037b78) popup_sp_fs_calendar_preview_bg_pane

0xe7fc,	// (0x0003c696) popup_sp_fs_calendar_preview_list_pane

0xc4f4,	// (0x0003a38e) bg_main_sp_fs_cale_pane_ParamLimits

0xc4f4,	// (0x0003a38e) bg_main_sp_fs_cale_pane

0xe80d,	// (0x0003c6a7) listscroll_cale_mrui_pane_ParamLimits

0xe80d,	// (0x0003c6a7) listscroll_cale_mrui_pane

0xd39e,	// (0x0003b238) listscroll_sp_fs_schedule_track_pane

0xe822,	// (0x0003c6bc) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe822,	// (0x0003c6bc) main_sp_fs_ctrlbar_pane_cp01

0xe835,	// (0x0003c6cf) main_sp_fs_ribbon_pane

0xe83d,	// (0x0003c6d7) popup_sp_fs_cale_preview_window

0x8e67,	// (0x00036d01) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e67,	// (0x00036d01) list_single_sp_fs_schedule_track_pane

0xa9f8,	// (0x00038892) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa9f8,	// (0x00038892) bg_sp_fs_highlight_list_pane_cp03

0x8e7a,	// (0x00036d14) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e7a,	// (0x00036d14) list_single_sp_fs_schedule_track_pane_g1

0x8e86,	// (0x00036d20) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e86,	// (0x00036d20) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003dc4f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003dc4f) list_single_sp_fs_schedule_track_pane_g

0x8e92,	// (0x00036d2c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e92,	// (0x00036d2c) list_single_sp_fs_schedule_track_pane_t1

0x8eac,	// (0x00036d46) sp_fs_schedule_track_pane_ParamLimits

0x8eac,	// (0x00036d46) sp_fs_schedule_track_pane

0xe84f,	// (0x0003c6e9) sp_fs_schedule_track_pane_g1

0xe857,	// (0x0003c6f1) sp_fs_schedule_track_pane_g2

0xe85f,	// (0x0003c6f9) sp_fs_schedule_track_pane_g3

0xe867,	// (0x0003c701) sp_fs_schedule_track_pane_g4

0xe86f,	// (0x0003c709) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003dc54) sp_fs_schedule_track_pane_g

0xd31a,	// (0x0003b1b4) bg_sp_fs_schedule_viewer_highlight_g1

0xa842,	// (0x000386dc) bg_sp_fs_schedule_viewer_highlight_g2

0xd322,	// (0x0003b1bc) bg_sp_fs_schedule_viewer_highlight_g3

0xd32a,	// (0x0003b1c4) bg_sp_fs_schedule_viewer_highlight_g4

0xd56e,	// (0x0003b408) bg_sp_fs_schedule_viewer_highlight_g5

0xd33a,	// (0x0003b1d4) bg_sp_fs_schedule_viewer_highlight_g6

0xd342,	// (0x0003b1dc) bg_sp_fs_schedule_viewer_highlight_g7

0xd34a,	// (0x0003b1e4) bg_sp_fs_schedule_viewer_highlight_g8

0xa822,	// (0x000386bc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003dc5f) bg_sp_fs_schedule_viewer_highlight_g

0x9cde,	// (0x00037b78) bg_main_sp_fs_ribbon_pane

0x8ebd,	// (0x00036d57) main_sp_fs_ribbon_pane_g1

0xe877,	// (0x0003c711) main_sp_fs_ribbon_pane_t1

0x8ec6,	// (0x00036d60) main_sp_fs_ribbon_pane_t2

0xe886,	// (0x0003c720) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003dc72) main_sp_fs_ribbon_pane_t

0xe895,	// (0x0003c72f) main_sp_fs_ribbon_scheduler_pane

0xe89d,	// (0x0003c737) bg_main_sp_fs_ribbon_pane_g1

0xe8a6,	// (0x0003c740) bg_main_sp_fs_ribbon_pane_g2

0xe8af,	// (0x0003c749) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003dc79) bg_main_sp_fs_ribbon_pane_g

0xe8b7,	// (0x0003c751) main_sp_fs_ribbon_scheduler_pane_g1

0xe8c0,	// (0x0003c75a) main_sp_fs_ribbon_scheduler_pane_g2

0xe8c9,	// (0x0003c763) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003dc80) main_sp_fs_ribbon_scheduler_pane_g

0xe8d2,	// (0x0003c76c) list_cale_mrui_pane

0x8ed5,	// (0x00036d6f) sp_fs_scroll_pane_cp07_ParamLimits

0x8ed5,	// (0x00036d6f) sp_fs_scroll_pane_cp07

0x8ef1,	// (0x00036d8b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ef1,	// (0x00036d8b) bg_sp_fs_schedule_viewer_highlight

0xe8df,	// (0x0003c779) list_single_sp_fs_schedule_track_pane_cp01

0xe8e7,	// (0x0003c781) list_sp_fs_schedule_track_pane

0xe8ef,	// (0x0003c789) sp_fs_scroll_pane_cp06_ParamLimits

0xe8ef,	// (0x0003c789) sp_fs_scroll_pane_cp06

0xc8fc,	// (0x0003a796) bgmain_sp_fs_calendar_pane_g1

0x8f01,	// (0x00036d9b) list_single_cale_mrui_pane_ParamLimits

0x8f01,	// (0x00036d9b) list_single_cale_mrui_pane

0xe901,	// (0x0003c79b) list_single_cale_mrui_row_pane_ParamLimits

0xe901,	// (0x0003c79b) list_single_cale_mrui_row_pane

0xe90e,	// (0x0003c7a8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe90e,	// (0x0003c7a8) list_single_cale_mrui_row_pane_g1

0xe953,	// (0x0003c7ed) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe953,	// (0x0003c7ed) list_single_cale_mrui_row_pane_t1

0x8f22,	// (0x00036dbc) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f22,	// (0x00036dbc) list_single_cale_mrui_row_pane_t2

0xe965,	// (0x0003c7ff) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe965,	// (0x0003c7ff) list_single_cale_mrui_row_pane_t3

0xe994,	// (0x0003c82e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe994,	// (0x0003c82e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003dc8e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003dc8e) list_single_cale_mrui_row_pane_t

0x8f8a,	// (0x00036e24) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f8a,	// (0x00036e24) list_single_cmail_header_editor_pane_bg_cp01

0x8fb0,	// (0x00036e4a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fb0,	// (0x00036e4a) list_single_cmail_header_editor_pane_bg_cp02

0x8fd0,	// (0x00036e6a) main_radioblah_text_pane_t1_ParamLimits

0x8fd0,	// (0x00036e6a) main_radioblah_text_pane_t1

0xe9c3,	// (0x0003c85d) cam6_indi_pane_cp01

0xe9cb,	// (0x0003c865) cam6_mode_pane_cp01

0xe9d3,	// (0x0003c86d) cam6_pano_pane

0xe9dc,	// (0x0003c876) cam6_zoom_pane_cp01

0xe9e4,	// (0x0003c87e) cam6_pano_image_pane

0xe9ef,	// (0x0003c889) cam6_pano_pane_g1

0xe01b,	// (0x0003beb5) cam6_pano_pane_g2

0xe9f8,	// (0x0003c892) cam6_pano_pane_g3

0xea01,	// (0x0003c89b) cam6_pano_pane_g4

0xceeb,	// (0x0003ad85) cam6_pano_pane_g5

0xea0a,	// (0x0003c8a4) cam6_pano_pane_g6

0xea14,	// (0x0003c8ae) cam6_pano_pane_g7

0xea1c,	// (0x0003c8b6) cam6_pano_pane_g8

0xea25,	// (0x0003c8bf) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003dc97) cam6_pano_pane_g

0x9cde,	// (0x00037b78) main_browser_tag_pane

0xe759,	// (0x0003c5f3) grid_navstr_albumart_pane

0xea30,	// (0x0003c8ca) cell_navstr_albumart_pane_ParamLimits

0xea30,	// (0x0003c8ca) cell_navstr_albumart_pane

0xea50,	// (0x0003c8ea) cell_navstr_albumart_pane_g1

0xc305,	// (0x0003a19f) cell_navstr_albumart_pane_g2

0xc315,	// (0x0003a1af) cell_navstr_albumart_pane_g3

0xc30d,	// (0x0003a1a7) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003dcaa) cell_navstr_albumart_pane_g

0x8fea,	// (0x00036e84) bt_list_pane_ParamLimits

0x8fea,	// (0x00036e84) bt_list_pane

0x8ffe,	// (0x00036e98) bt_list_pane_t1

0x900d,	// (0x00036ea7) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003dcb3) bt_list_pane_t

0x9cde,	// (0x00037b78) main_cale_prevew_pane

0x901c,	// (0x00036eb6) popup_cale_preview_window_ParamLimits

0x901c,	// (0x00036eb6) popup_cale_preview_window

0xa9f8,	// (0x00038892) bg_popup_preview_window_pane_cp05_ParamLimits

0xa9f8,	// (0x00038892) bg_popup_preview_window_pane_cp05

0xea58,	// (0x0003c8f2) list_cale_preview_pane_ParamLimits

0xea58,	// (0x0003c8f2) list_cale_preview_pane

0x9037,	// (0x00036ed1) list_double_cale_preview_pane_ParamLimits

0x9037,	// (0x00036ed1) list_double_cale_preview_pane

0x9049,	// (0x00036ee3) list_single_cale_preview_pane_ParamLimits

0x9049,	// (0x00036ee3) list_single_cale_preview_pane

0x905f,	// (0x00036ef9) list_single_cale_preview_pane_g1

0x9067,	// (0x00036f01) list_single_cale_preview_pane_t1_ParamLimits

0x9067,	// (0x00036f01) list_single_cale_preview_pane_t1

0x907c,	// (0x00036f16) list_double_cale_preview_pane_g1

0x9084,	// (0x00036f1e) list_double_cale_preview_pane_t1_ParamLimits

0x9084,	// (0x00036f1e) list_double_cale_preview_pane_t1

0x9099,	// (0x00036f33) list_double_cale_preview_pane_t2_ParamLimits

0x9099,	// (0x00036f33) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003dcb8) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003dcb8) list_double_cale_preview_pane_t

0x9cde,	// (0x00037b78) main_ezdial_pane

0xa9f8,	// (0x00038892) main_sp_fs_email_pane_ParamLimits

0x85d0,	// (0x0003646a) cmail_ddmenu_btn01_pane_ParamLimits

0x85d0,	// (0x0003646a) cmail_ddmenu_btn01_pane

0x85e3,	// (0x0003647d) cmail_ddmenu_btn02_pane_ParamLimits

0x85e3,	// (0x0003647d) cmail_ddmenu_btn02_pane

0x8606,	// (0x000364a0) cmail_ddmenu_btn03_pane_ParamLimits

0x8606,	// (0x000364a0) cmail_ddmenu_btn03_pane

0x862c,	// (0x000364c6) main_sp_fs_ctrlbar_pane_ParamLimits

0x8650,	// (0x000364ea) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cda,	// (0x00036b74) list_cmail_body_pane_ParamLimits

0xe656,	// (0x0003c4f0) bg_button_pane_cp12

0xe66b,	// (0x0003c505) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe66b,	// (0x0003c505) list_single_cmail_header_detail_pane_g3

0xe6b4,	// (0x0003c54e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe6b4,	// (0x0003c54e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003dc3b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003dc3b) list_single_cmail_header_detail_pane_t

0xe7c1,	// (0x0003c65b) phacti_term_pane_t2_ParamLimits

0xe7c1,	// (0x0003c65b) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003dc45) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003dc45) phacti_term_pane_t

0xea64,	// (0x0003c8fe) aid_size_list_single_double

0x90b1,	// (0x00036f4b) popup_ezdial_listscroll_window

0x90cd,	// (0x00036f67) popup_number_entry_window_cp01

0xa5e9,	// (0x00038483) bg_popup_call_pane_cp09

0xea70,	// (0x0003c90a) ezdial_list_pane

0xea78,	// (0x0003c912) scroll_pane_cp23

0xc4f4,	// (0x0003a38e) bg_button_pane_cp028_ParamLimits

0xc4f4,	// (0x0003a38e) bg_button_pane_cp028

0x90db,	// (0x00036f75) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90db,	// (0x00036f75) cmail_ddmenu_btn01_pane_g1

0x90e7,	// (0x00036f81) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90e7,	// (0x00036f81) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003dcbd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003dcbd) cmail_ddmenu_btn01_pane_g

0xea80,	// (0x0003c91a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea80,	// (0x0003c91a) cmail_ddmenu_btn01_pane_t1

0xc4f4,	// (0x0003a38e) bg_button_pane_cp029_ParamLimits

0xc4f4,	// (0x0003a38e) bg_button_pane_cp029

0x90f3,	// (0x00036f8d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x90f3,	// (0x00036f8d) cmail_ddmenu_btn02_pane_g1

0x910b,	// (0x00036fa5) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x910b,	// (0x00036fa5) cmail_ddmenu_btn02_pane_t1

0xa9f8,	// (0x00038892) bg_button_pane_cp031_ParamLimits

0xa9f8,	// (0x00038892) bg_button_pane_cp031

0x90f3,	// (0x00036f8d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x90f3,	// (0x00036f8d) cmail_ddmenu_btn03_pane_g1

0x910b,	// (0x00036fa5) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x910b,	// (0x00036fa5) cmail_ddmenu_btn03_pane_t1

0x648f,	// (0x00034329) cell_dialer2_keypad_pane_t1_ParamLimits

0x64a9,	// (0x00034343) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64a9,	// (0x00034343) cell_dialer2_keypad_pane_t1_copy1

0x7de2,	// (0x00035c7c) ncimui_group_button_pane

0xa9f8,	// (0x00038892) main_sp_fs_calendar_pane_ParamLimits

0x8cef,	// (0x00036b89) list_single_cmail_header_caption_pane_ParamLimits

0xe804,	// (0x0003c69e) aid_recal_txt_sm_pane

0x9cde,	// (0x00037b78) mian_recal_day_pane

0xe83d,	// (0x0003c6d7) popup_sp_fs_cale_preview_window_ParamLimits

0xea95,	// (0x0003c92f) list_recal_day_pane

0xead7,	// (0x0003c971) list_single_recal_day_pane_ParamLimits

0xead7,	// (0x0003c971) list_single_recal_day_pane

0xeae9,	// (0x0003c983) list_single_recal_day_pane_g1_ParamLimits

0xeae9,	// (0x0003c983) list_single_recal_day_pane_g1

0xeaf5,	// (0x0003c98f) list_single_recal_day_pane_g2_ParamLimits

0xeaf5,	// (0x0003c98f) list_single_recal_day_pane_g2

0xeb01,	// (0x0003c99b) list_single_recal_day_pane_g3_ParamLimits

0xeb01,	// (0x0003c99b) list_single_recal_day_pane_g3

0x912f,	// (0x00036fc9) list_single_recal_day_pane_g4_ParamLimits

0x912f,	// (0x00036fc9) list_single_recal_day_pane_g4

0xeb0d,	// (0x0003c9a7) list_single_recal_day_pane_g5_ParamLimits

0xeb0d,	// (0x0003c9a7) list_single_recal_day_pane_g5

0xeb19,	// (0x0003c9b3) list_single_recal_day_pane_g6_ParamLimits

0xeb19,	// (0x0003c9b3) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003dccc) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003dccc) list_single_recal_day_pane_g

0xeb2d,	// (0x0003c9c7) list_single_recal_day_pane_t1

0xeb3f,	// (0x0003c9d9) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003dcd7) list_single_recal_day_pane_t

0x9147,	// (0x00036fe1) ncimui_query_button_pane_ParamLimits

0x9147,	// (0x00036fe1) ncimui_query_button_pane

0x9157,	// (0x00036ff1) ncimui_query_button_pane_t1_ParamLimits

0x9157,	// (0x00036ff1) ncimui_query_button_pane_t1

0xeb51,	// (0x0003c9eb) ncimui_query_button_pane_t2_ParamLimits

0xeb51,	// (0x0003c9eb) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003dcdc) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003dcdc) ncimui_query_button_pane_t

0x916a,	// (0x00037004) query_button_pane_ParamLimits

0x916a,	// (0x00037004) query_button_pane

0x9cde,	// (0x00037b78) bg_button_pane_cp0028

0xeb64,	// (0x0003c9fe) query_button_pane_t1

0x064a,	// (0x0002e4e4) main_tport_pane_ParamLimits

0x8b9e,	// (0x00036a38) bg_popup_window_pane_cp01_ParamLimits

0x8b9e,	// (0x00036a38) bg_popup_window_pane_cp01

0x8bb9,	// (0x00036a53) heading_pane_cp08_ParamLimits

0x8bb9,	// (0x00036a53) heading_pane_cp08

0x8bcc,	// (0x00036a66) heading_pane_cp07_ParamLimits

0x8bcc,	// (0x00036a66) heading_pane_cp07

0x8c73,	// (0x00036b0d) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003dc28) cell_tport_appsw_pane_g

0xb1dc,	// (0x00039076) input_candi_list_open_g1

0xaa2b,	// (0x000388c5) list_cale_time_pane_g6_ParamLimits

0xaa2b,	// (0x000388c5) list_cale_time_pane_g6

0x522b,	// (0x000330c5) aid_size_touch_calib_1_ParamLimits

0x522b,	// (0x000330c5) aid_size_touch_calib_1

0x523d,	// (0x000330d7) aid_size_touch_calib_2_ParamLimits

0x523d,	// (0x000330d7) aid_size_touch_calib_2

0x5255,	// (0x000330ef) aid_size_touch_calib_3_ParamLimits

0x5255,	// (0x000330ef) aid_size_touch_calib_3

0x5273,	// (0x0003310d) aid_size_touch_calib_4_ParamLimits

0x5273,	// (0x0003310d) aid_size_touch_calib_4

0x528b,	// (0x00033125) main_touch_calib_button_group_pane_ParamLimits

0x528b,	// (0x00033125) main_touch_calib_button_group_pane

0x52a3,	// (0x0003313d) main_touch_calib_pane_g1_ParamLimits

0x52b5,	// (0x0003314f) main_touch_calib_pane_g2_ParamLimits

0x52c7,	// (0x00033161) main_touch_calib_pane_g3_ParamLimits

0x52d9,	// (0x00033173) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0003d5e7) main_touch_calib_pane_g_ParamLimits

0x52eb,	// (0x00033185) main_touch_calib_pane_t1_ParamLimits

0x5305,	// (0x0003319f) main_touch_calib_pane_t2_ParamLimits

0x531f,	// (0x000331b9) main_touch_calib_pane_t3_ParamLimits

0x5333,	// (0x000331cd) main_touch_calib_pane_t4_ParamLimits

0x5347,	// (0x000331e1) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0003d5f0) main_touch_calib_pane_t_ParamLimits

0xcc8b,	// (0x0003ab25) list_single_fp_cale_pane_g3_ParamLimits

0xcc8b,	// (0x0003ab25) list_single_fp_cale_pane_g3

0x1ac8,	// (0x0002f962) bg_button_pane_cp012_ParamLimits

0x1ac8,	// (0x0002f962) bg_vkb2_func_pane_cp03_ParamLimits

0x1851,	// (0x0002f6eb) cell_vitu2_function_top_pane_g1_ParamLimits

0x1ac8,	// (0x0002f962) bg_vkb2_func_pane_cp04_ParamLimits

0x7d6d,	// (0x00035c07) main_ncimui_button_group_pane_ParamLimits

0x7d6d,	// (0x00035c07) main_ncimui_button_group_pane

0x7dcd,	// (0x00035c67) main_ncimui_pane_t3_ParamLimits

0x7dcd,	// (0x00035c67) main_ncimui_pane_t3

0xe76f,	// (0x0003c609) phacti_button_group_pane

0xea64,	// (0x0003c8fe) aid_size_list_single_double_ParamLimits

0x90b1,	// (0x00036f4b) popup_ezdial_listscroll_window_ParamLimits

0x90cd,	// (0x00036f67) popup_number_entry_window_cp01_ParamLimits

0x917d,	// (0x00037017) phacti_button_pane_ParamLimits

0x917d,	// (0x00037017) phacti_button_pane

0x9cde,	// (0x00037b78) bg_button_pane_cp14

0xeb72,	// (0x0003ca0c) phacti_button_pane_t1

0x918e,	// (0x00037028) main_touch_calib_button_pane_ParamLimits

0x918e,	// (0x00037028) main_touch_calib_button_pane

0xa41b,	// (0x000382b5) bg_button_pane_cp18_ParamLimits

0xa41b,	// (0x000382b5) bg_button_pane_cp18

0xeb80,	// (0x0003ca1a) main_touch_calib_button_pane_t1_ParamLimits

0xeb80,	// (0x0003ca1a) main_touch_calib_button_pane_t1

0xeb96,	// (0x0003ca30) main_touch_calib_button_pane_t2_ParamLimits

0xeb96,	// (0x0003ca30) main_touch_calib_button_pane_t2

0x0001,

0x0048,	// (0x0002dee2) main_touch_calib_button_pane_t_ParamLimits

0x0048,	// (0x0002dee2) main_touch_calib_button_pane_t

0x9cde,	// (0x00037b78) cell_ncimui_button_pane

0x9cde,	// (0x00037b78) bg_button_pane_cp032

0xebb4,	// (0x0003ca4e) cell_ncimui_button_pane_t1

0x64c6,	// (0x00034360) image3_infobar_pane_ParamLimits

0x64c6,	// (0x00034360) image3_infobar_pane

0x81f0,	// (0x0003608a) fs_bigclock_status_pane_ParamLimits

0x81f0,	// (0x0003608a) fs_bigclock_status_pane

0x81fd,	// (0x00036097) main_fs_bigclock_clock_pane_ParamLimits

0x81fd,	// (0x00036097) main_fs_bigclock_clock_pane

0x821b,	// (0x000360b5) main_fs_bigclock_indi_pane_ParamLimits

0x821b,	// (0x000360b5) main_fs_bigclock_indi_pane

0x824d,	// (0x000360e7) main_fs_bigclock_swipe_pane_ParamLimits

0x824d,	// (0x000360e7) main_fs_bigclock_swipe_pane

0x9cde,	// (0x00037b78) main_fs_clock_dumped_data

0xe128,	// (0x0003bfc2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe128,	// (0x0003bfc2) list_single_fs_bigclock_indicator_pane_g1

0xe143,	// (0x0003bfdd) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe143,	// (0x0003bfdd) list_single_fs_bigclock_indicator_pane_g2

0xe15d,	// (0x0003bff7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe15d,	// (0x0003bff7) list_single_fs_bigclock_indicator_pane_g3

0xe177,	// (0x0003c011) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe177,	// (0x0003c011) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003db0e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003db0e) list_single_fs_bigclock_indicator_pane_g

0xe1a2,	// (0x0003c03c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe1a2,	// (0x0003c03c) list_single_fs_bigclock_indicator_pane_t1

0xe1ca,	// (0x0003c064) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1ca,	// (0x0003c064) list_single_fs_bigclock_indicator_pane_t2

0xe1f2,	// (0x0003c08c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1f2,	// (0x0003c08c) list_single_fs_bigclock_indicator_pane_t3

0xe21a,	// (0x0003c0b4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe21a,	// (0x0003c0b4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003db19) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003db19) list_single_fs_bigclock_indicator_pane_t

0xebc2,	// (0x0003ca5c) image3_infobar_fav_pane_ParamLimits

0xebc2,	// (0x0003ca5c) image3_infobar_fav_pane

0xebd2,	// (0x0003ca6c) image3_infobar_loc_pane_ParamLimits

0xebd2,	// (0x0003ca6c) image3_infobar_loc_pane

0xebe6,	// (0x0003ca80) image3_infobar_time_pane_ParamLimits

0xebe6,	// (0x0003ca80) image3_infobar_time_pane

0xc8fc,	// (0x0003a796) image3_infobar_time_pane_g1

0xebf6,	// (0x0003ca90) image3_infobar_time_pane_t1

0xc8fc,	// (0x0003a796) image3_infobar_loc_pane_g1

0xec04,	// (0x0003ca9e) image3_infobar_loc_pane_g2

0x0001,

0x004d,	// (0x0002dee7) image3_infobar_loc_pane_g

0xec0c,	// (0x0003caa6) image3_infobar_loc_pane_t1

0xc8fc,	// (0x0003a796) image3_infobar_fav_pane_g1

0xec1a,	// (0x0003cab4) image3_infobar_fav_pane_g2

0x0001,

0x0052,	// (0x0002deec) image3_infobar_fav_pane_g

0xec22,	// (0x0003cabc) fs_bigclock_status_battery_pane

0xec2b,	// (0x0003cac5) fs_bigclock_status_signal_pane

0xec34,	// (0x0003cace) fs_bigclock_status_title_pane

0xec3d,	// (0x0003cad7) fs_bigclock_status_signal_pane_g1

0xec46,	// (0x0003cae0) fs_bigclock_status_signal_pane_g2

0x0001,

0x0057,	// (0x0002def1) fs_bigclock_status_signal_pane_g

0xec4e,	// (0x0003cae8) fs_bigclock_status_battery_pane_g1

0xec57,	// (0x0003caf1) fs_bigclock_status_battery_pane_g2

0x0001,

0x005c,	// (0x0002def6) fs_bigclock_status_battery_pane_g

0xec5f,	// (0x0003caf9) fs_bigclock_status_title_pane_t1

0x91a3,	// (0x0003703d) main_fs_bigclock_clock_pane_g1

0x91a3,	// (0x0003703d) main_fs_bigclock_clock_pane_g2

0x91b4,	// (0x0003704e) main_fs_bigclock_clock_pane_g3

0x91b4,	// (0x0003704e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe47,	// (0x0003dce1) main_fs_bigclock_clock_pane_g

0x91c7,	// (0x00037061) main_fs_bigclock_clock_pane_t1

0x91dd,	// (0x00037077) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe50,	// (0x0003dcea) main_fs_bigclock_clock_pane_t

0xec6d,	// (0x0003cb07) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec6d,	// (0x0003cb07) list_single_fs_bigclock_indicator_pane

0xec7e,	// (0x0003cb18) list_single_fs_bigclock_pane_ParamLimits

0xec7e,	// (0x0003cb18) list_single_fs_bigclock_pane

0xeca4,	// (0x0003cb3e) main_fs_bigclock_indicator_pane_t1

0xecb3,	// (0x0003cb4d) list_single_fs_bigclock_pane_g1

0xecbb,	// (0x0003cb55) list_single_fs_bigclock_pane_t1

0xc8fc,	// (0x0003a796) main_fs_bigclock_swipe_pane_g1

0xecfe,	// (0x0003cb98) main_fs_bigclock_swipe_pane_g2

0x0001,

0x007b,	// (0x0002df15) main_fs_bigclock_swipe_pane_g

0xed06,	// (0x0003cba0) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed06,	// (0x0003cba0) main_fs_bigclock_swipe_pane_t1

0x398b,	// (0x00031825) call_type_pane_ParamLimits

0x9cde,	// (0x00037b78) main_btmg_pane

0xe93a,	// (0x0003c7d4) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe93a,	// (0x0003c7d4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003dc87) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003dc87) list_single_cale_mrui_row_pane_g

0xeabe,	// (0x0003c958) list_recal_vselct_arw_lo_pane

0xeac6,	// (0x0003c960) list_recal_vselct_arw_up_pane

0xeace,	// (0x0003c968) list_recal_vselct_pane

0x9237,	// (0x000370d1) btmg_button_pane

0x9241,	// (0x000370db) main_btmg_pane_g1

0x9cde,	// (0x00037b78) bg_button_pane_cp044

0xed23,	// (0x0003cbbd) btmg_button_pane_t1

0xc4e0,	// (0x0003a37a) aid_listscroll_gen

0xa9f8,	// (0x00038892) main_cntbar_detail_pane

0xe638,	// (0x0003c4d2) list_cmail_folder_pane

0xd258,	// (0x0003b0f2) sp_fs_scroll_pane_cp03_ParamLimits

0x8cef,	// (0x00036b89) list_single_fs_dyc_pane_cp01_ParamLimits

0x8cef,	// (0x00036b89) list_single_fs_dyc_pane_cp01

0xed31,	// (0x0003cbcb) aid_size_cmail_indent

0xed3a,	// (0x0003cbd4) list_single_dyc_row_pane_cp01

0x927d,	// (0x00037117) cntbar_detail_list_pane_ParamLimits

0x927d,	// (0x00037117) cntbar_detail_list_pane

0x92c9,	// (0x00037163) main_cntbar_detail_cont_pane_ParamLimits

0x92c9,	// (0x00037163) main_cntbar_detail_cont_pane

0xd258,	// (0x0003b0f2) scroll_pane_cp032_ParamLimits

0xd258,	// (0x0003b0f2) scroll_pane_cp032

0x92dd,	// (0x00037177) cntbar_detail_list_event_pane_ParamLimits

0x92dd,	// (0x00037177) cntbar_detail_list_event_pane

0x928d,	// (0x00037127) cntbar_detail_list_shct_pane

0xa890,	// (0x0003872a) aid_list_gen

0xed43,	// (0x0003cbdd) aid_scroll

0xed4c,	// (0x0003cbe6) aid_size_touch_scroll_bar

0x754d,	// (0x000353e7) aid_list_double

0x753b,	// (0x000353d5) aid_list_single

0x753b,	// (0x000353d5) aid_list_single_lg

0x92ed,	// (0x00037187) aid_list_z_g_a_sm

0x92f5,	// (0x0003718f) aid_list_z_g_d

0x92fd,	// (0x00037197) aid_txt_z_prm

0x930b,	// (0x000371a5) aid_txt_z_prm_cp01

0x9319,	// (0x000371b3) aid_txt_z_sec

0x9327,	// (0x000371c1) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9327,	// (0x000371c1) main_cntbar_detail_cont_pane_g1

0x933b,	// (0x000371d5) main_cntbar_detail_cont_pane_g2_ParamLimits

0x933b,	// (0x000371d5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe5c,	// (0x0003dcf6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe5c,	// (0x0003dcf6) main_cntbar_detail_cont_pane_g

0xed55,	// (0x0003cbef) main_cntbar_detail_cont_pane_t1

0xed63,	// (0x0003cbfd) main_cntbar_detail_cont_pane_t2

0xed71,	// (0x0003cc0b) main_cntbar_detail_cont_pane_t3

0x0002,

0x0085,	// (0x0002df1f) main_cntbar_detail_cont_pane_t

0x934b,	// (0x000371e5) cell_cntbar_detail_list_shct_pane_ParamLimits

0x934b,	// (0x000371e5) cell_cntbar_detail_list_shct_pane

0xed7f,	// (0x0003cc19) cntbar_detail_list_shct_pane_g1

0xed88,	// (0x0003cc22) cntbar_detail_list_shct_pane_g2

0x0001,

0x008c,	// (0x0002df26) cntbar_detail_list_shct_pane_g

0x935f,	// (0x000371f9) cntbar_detail_list_event_pane_g1_ParamLimits

0x935f,	// (0x000371f9) cntbar_detail_list_event_pane_g1

0x936b,	// (0x00037205) cntbar_detail_list_event_pane_g2_ParamLimits

0x936b,	// (0x00037205) cntbar_detail_list_event_pane_g2

0x0005,

0xfe61,	// (0x0003dcfb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe61,	// (0x0003dcfb) cntbar_detail_list_event_pane_g

0x93d7,	// (0x00037271) cntbar_detail_list_event_pane_t1_ParamLimits

0x93d7,	// (0x00037271) cntbar_detail_list_event_pane_t1

0x93ec,	// (0x00037286) cntbar_detail_list_event_pane_t2_ParamLimits

0x93ec,	// (0x00037286) cntbar_detail_list_event_pane_t2

0x0002,

0xfe6e,	// (0x0003dd08) cntbar_detail_list_event_pane_t_ParamLimits

0xfe6e,	// (0x0003dd08) cntbar_detail_list_event_pane_t

0xc8fc,	// (0x0003a796) cell_cntbar_detail_list_shct_pane_g1

0xb02d,	// (0x00038ec7) navi_pane_mv_g3

0xa9f8,	// (0x00038892) main_cntbar_detail_pane_ParamLimits

0x9cde,	// (0x00037b78) main_notif_wgt_pane

0x620f,	// (0x000340a9) aid_tch_main_mp4_pane_g4

0x641b,	// (0x000342b5) popup_slider_window_cp02

0xeab4,	// (0x0003c94e) list_recal_day_event_pane

0x924b,	// (0x000370e5) cntbar_detail_btn_pane_ParamLimits

0x924b,	// (0x000370e5) cntbar_detail_btn_pane

0x9264,	// (0x000370fe) cntbar_detail_btn_pane_cp01_ParamLimits

0x9264,	// (0x000370fe) cntbar_detail_btn_pane_cp01

0x928d,	// (0x00037127) cntbar_detail_list_shct_pane_ParamLimits

0x929d,	// (0x00037137) cntbar_detail_pane_g1_ParamLimits

0x929d,	// (0x00037137) cntbar_detail_pane_g1

0x92ad,	// (0x00037147) cntbar_detail_pane_t1_ParamLimits

0x92ad,	// (0x00037147) cntbar_detail_pane_t1

0x9377,	// (0x00037211) cntbar_detail_list_event_pane_g3_ParamLimits

0x9377,	// (0x00037211) cntbar_detail_list_event_pane_g3

0x938f,	// (0x00037229) cntbar_detail_list_event_pane_g4_ParamLimits

0x938f,	// (0x00037229) cntbar_detail_list_event_pane_g4

0x93a7,	// (0x00037241) cntbar_detail_list_event_pane_g5_ParamLimits

0x93a7,	// (0x00037241) cntbar_detail_list_event_pane_g5

0x93bf,	// (0x00037259) cntbar_detail_list_event_pane_g6_ParamLimits

0x93bf,	// (0x00037259) cntbar_detail_list_event_pane_g6

0x9401,	// (0x0003729b) cntbar_detail_list_event_pane_t3_ParamLimits

0x9401,	// (0x0003729b) cntbar_detail_list_event_pane_t3

0x9413,	// (0x000372ad) popup_notif_wgt_window_ParamLimits

0x9413,	// (0x000372ad) popup_notif_wgt_window

0x942c,	// (0x000372c6) popup_submenu_window_cp01_ParamLimits

0x942c,	// (0x000372c6) popup_submenu_window_cp01

0xa5e9,	// (0x00038483) bg_popup_window_pane_cp10

0xed91,	// (0x0003cc2b) listscroll_notif_wgt_pane

0xeda3,	// (0x0003cc3d) list_notif_wgt_window

0xedac,	// (0x0003cc46) scroll_pane_cp033

0x9442,	// (0x000372dc) list_notif_wgt_row_pane_ParamLimits

0x9442,	// (0x000372dc) list_notif_wgt_row_pane

0xedb5,	// (0x0003cc4f) aid_size_list_notif_wgt_del

0xedc2,	// (0x0003cc5c) list_notif_wgt_row_pane_g1

0xedce,	// (0x0003cc68) list_notif_wgt_row_pane_g2

0xeddd,	// (0x0003cc77) list_notif_wgt_row_pane_g3

0x0002,

0x00a5,	// (0x0002df3f) list_notif_wgt_row_pane_g

0xedea,	// (0x0003cc84) list_notif_wgt_row_pane_t1

0xee00,	// (0x0003cc9a) list_notif_wgt_row_pane_t2

0xee12,	// (0x0003ccac) list_notif_wgt_row_pane_t3

0x0002,

0x00ac,	// (0x0002df46) list_notif_wgt_row_pane_t

0xd588,	// (0x0003b422) list_recal_day_event_pane_g1

0xee24,	// (0x0003ccbe) list_recal_day_event_pane_t1

0x9cde,	// (0x00037b78) bg_button_pane_cp045

0x9452,	// (0x000372ec) cntbar_detail_btn_pane_t1

0xc4f4,	// (0x0003a38e) main_callh_pane_ParamLimits

0xc4f4,	// (0x0003a38e) main_callh_pane

0x9cde,	// (0x00037b78) main_coverflow0_pane

0x9cde,	// (0x00037b78) main_wgtman_pane

0x8265,	// (0x000360ff) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8265,	// (0x000360ff) main_fs_bigclock_unlock_btn_pane

0x8c6b,	// (0x00036b05) bg_button_pane_cp16

0x8c7b,	// (0x00036b15) cell_tport_appsw_pane_g3

0x9460,	// (0x000372fa) cf0_flow_pane_ParamLimits

0x9460,	// (0x000372fa) cf0_flow_pane

0xee33,	// (0x0003cccd) listscroll_cf0_pane

0xee3e,	// (0x0003ccd8) main_cf0_pane_g1

0x9475,	// (0x0003730f) main_cf0_pane_t1_ParamLimits

0x9475,	// (0x0003730f) main_cf0_pane_t1

0x948c,	// (0x00037326) main_cf0_pane_t2_ParamLimits

0x948c,	// (0x00037326) main_cf0_pane_t2

0x0001,

0xfe75,	// (0x0003dd0f) main_cf0_pane_t_ParamLimits

0xfe75,	// (0x0003dd0f) main_cf0_pane_t

0xee50,	// (0x0003ccea) scroll_pane_cp11

0x94a3,	// (0x0003733d) cf0_flow_pane_g1

0x94ab,	// (0x00037345) cf0_flow_pane_g2

0x0001,

0xfe7a,	// (0x0003dd14) cf0_flow_pane_g

0x94b3,	// (0x0003734d) cf0_flow_pane_t1

0x9cde,	// (0x00037b78) main_call6_pane

0x9cde,	// (0x00037b78) main_calllock_pane

0x1986,	// (0x0002f820) call6_btn_grp_pane_ParamLimits

0x1986,	// (0x0002f820) call6_btn_grp_pane

0x19a0,	// (0x0002f83a) call6_pane_g1_ParamLimits

0x19a0,	// (0x0002f83a) call6_pane_g1

0x19b6,	// (0x0002f850) popup_call6_1st_window_ParamLimits

0x19b6,	// (0x0002f850) popup_call6_1st_window

0x19c7,	// (0x0002f861) popup_call6_2nd_window_ParamLimits

0x19c7,	// (0x0002f861) popup_call6_2nd_window

0x19d8,	// (0x0002f872) cell_call6_btn_pane_ParamLimits

0x19d8,	// (0x0002f872) cell_call6_btn_pane

0xa5e9,	// (0x00038483) bg_popup_call2_in_pane_cp03

0xee5b,	// (0x0003ccf5) popup_call6_1st_window_g1

0xee63,	// (0x0003ccfd) popup_call6_1st_window_g2

0xee6b,	// (0x0003cd05) popup_call6_1st_window_g3

0x0002,

0x00c2,	// (0x0002df5c) popup_call6_1st_window_g

0xee73,	// (0x0003cd0d) popup_call6_1st_window_t1

0xee82,	// (0x0003cd1c) popup_call6_1st_window_t2

0xee90,	// (0x0003cd2a) popup_call6_1st_window_t3

0x0002,

0x00c9,	// (0x0002df63) popup_call6_1st_window_t

0xa5e9,	// (0x00038483) bg_popup_call2_in_pane_cp04

0xee5b,	// (0x0003ccf5) popup_call6_2nd_window_g1

0xee63,	// (0x0003ccfd) popup_call6_2nd_window_g2

0xee6b,	// (0x0003cd05) popup_call6_2nd_window_g3

0x0002,

0x00c2,	// (0x0002df5c) popup_call6_2nd_window_g

0xee73,	// (0x0003cd0d) popup_call6_2nd_window_t1

0x1ae2,	// (0x0002f97c) bg_button_pane_cp15

0xaa06,	// (0x000388a0) cell_call6_btn_pane_g1

0xaa0f,	// (0x000388a9) cell_call6_btn_pane_t1

0x94c1,	// (0x0003735b) listscroll_wgtman_pane_ParamLimits

0x94c1,	// (0x0003735b) listscroll_wgtman_pane

0x94e2,	// (0x0003737c) wgtman_btn_pane_ParamLimits

0x94e2,	// (0x0003737c) wgtman_btn_pane

0xae34,	// (0x00038cce) aid_scroll_copy1

0xee9e,	// (0x0003cd38) list_wgtman_pane

0x9525,	// (0x000373bf) wgtman_btn_pane_g1_ParamLimits

0x9525,	// (0x000373bf) wgtman_btn_pane_g1

0x9551,	// (0x000373eb) wgtman_btn_pane_t1_ParamLimits

0x9551,	// (0x000373eb) wgtman_btn_pane_t1

0xeea8,	// (0x0003cd42) wgtman_btn_pane_t2_ParamLimits

0xeea8,	// (0x0003cd42) wgtman_btn_pane_t2

0x0001,

0xfe7f,	// (0x0003dd19) wgtman_btn_pane_t_ParamLimits

0xfe7f,	// (0x0003dd19) wgtman_btn_pane_t

0x958e,	// (0x00037428) listrow_wgtman_pane_ParamLimits

0x958e,	// (0x00037428) listrow_wgtman_pane

0x95a0,	// (0x0003743a) listrow_wgtman_pane_g1

0x95ad,	// (0x00037447) listrow_wgtman_pane_g2

0x0001,

0xfe84,	// (0x0003dd1e) listrow_wgtman_pane_g

0x95cb,	// (0x00037465) listrow_wgtman_pane_t1

0x95e3,	// (0x0003747d) listrow_wgtman_pane_t2

0x0001,

0xfe89,	// (0x0003dd23) listrow_wgtman_pane_t

0x9609,	// (0x000374a3) wait_bar_pane_cp09

0xeebf,	// (0x0003cd59) main_calllock_btn_pane

0xeec9,	// (0x0003cd63) main_calllock_pane_g1

0x9cde,	// (0x00037b78) bg_button_pane_cp17

0xeed5,	// (0x0003cd6f) main_calllock_btn_pane_g1

0xeede,	// (0x0003cd78) main_calllock_btn_pane_t1

0x9cde,	// (0x00037b78) main_dialer3_pane

0x9cde,	// (0x00037b78) main_fmrd2_pane

0xc8fc,	// (0x0003a796) main_fs_bigclock_unlock_btn_pane_g1

0x9623,	// (0x000374bd) main_fs_bigclock_unlock_btn_pane_t1

0x9631,	// (0x000374cb) area_fmrd2_info_pane_ParamLimits

0x9631,	// (0x000374cb) area_fmrd2_info_pane

0x9642,	// (0x000374dc) area_fmrd2_visual_pane_ParamLimits

0x9642,	// (0x000374dc) area_fmrd2_visual_pane

0x9650,	// (0x000374ea) fmrd2_indi_pane_ParamLimits

0x9650,	// (0x000374ea) fmrd2_indi_pane

0x965d,	// (0x000374f7) area_fmrd2_visual_pane_g1

0x9665,	// (0x000374ff) area_fmrd2_visual_pane_t1

0x9675,	// (0x0003750f) area_fmrd2_visual_pane_t2

0x9685,	// (0x0003751f) area_fmrd2_visual_pane_t3

0x0002,

0xfe93,	// (0x0003dd2d) area_fmrd2_visual_pane_t

0x9695,	// (0x0003752f) area_fmrd2_info_pane_g1

0x969d,	// (0x00037537) area_fmrd2_info_pane_t1

0x96ad,	// (0x00037547) area_fmrd2_info_pane_t2

0x96bd,	// (0x00037557) area_fmrd2_info_pane_t3

0x96cd,	// (0x00037567) area_fmrd2_info_pane_t4

0x0003,

0xfe9a,	// (0x0003dd34) area_fmrd2_info_pane_t

0x96db,	// (0x00037575) fmrd2_indi_pane_t1

0x96eb,	// (0x00037585) fmrd2_indi_pane_t2

0x96fb,	// (0x00037595) fmrd2_indi_pane_t3

0x0002,

0xfea3,	// (0x0003dd3d) fmrd2_indi_pane_t

0xe186,	// (0x0003c020) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe186,	// (0x0003c020) list_single_fs_bigclock_indicator_pane_g5

0xe237,	// (0x0003c0d1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe237,	// (0x0003c0d1) list_single_fs_bigclock_indicator_pane_t5

0x8e06,	// (0x00036ca0) aid_cell_bcale_month_pane_ParamLimits

0x8e06,	// (0x00036ca0) aid_cell_bcale_month_pane

0x8e24,	// (0x00036cbe) bcale_month_pane_ParamLimits

0x8e24,	// (0x00036cbe) bcale_month_pane

0x8e48,	// (0x00036ce2) bcale_preview_pane_ParamLimits

0x8e48,	// (0x00036ce2) bcale_preview_pane

0xecbb,	// (0x0003cb55) list_single_fs_bigclock_pane_t1_ParamLimits

0xecda,	// (0x0003cb74) list_single_fs_bigclock_pane_t2_ParamLimits

0xecda,	// (0x0003cb74) list_single_fs_bigclock_pane_t2

0x0001,

0x0076,	// (0x0002df10) list_single_fs_bigclock_pane_t_ParamLimits

0x0076,	// (0x0002df10) list_single_fs_bigclock_pane_t

0x961b,	// (0x000374b5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe8e,	// (0x0003dd28) main_fs_bigclock_unlock_btn_pane_g

0x970b,	// (0x000375a5) aid_dia3_key_size_ParamLimits

0x970b,	// (0x000375a5) aid_dia3_key_size

0x971a,	// (0x000375b4) aid_dia3_listrow_size_ParamLimits

0x971a,	// (0x000375b4) aid_dia3_listrow_size

0x972f,	// (0x000375c9) dia3_keypad_fun_pane_ParamLimits

0x972f,	// (0x000375c9) dia3_keypad_fun_pane

0x974b,	// (0x000375e5) dia3_keypad_num_pane_ParamLimits

0x974b,	// (0x000375e5) dia3_keypad_num_pane

0x9766,	// (0x00037600) dia3_listscroll_pane_ParamLimits

0x9766,	// (0x00037600) dia3_listscroll_pane

0x9779,	// (0x00037613) dia3_numentry_pane_ParamLimits

0x9779,	// (0x00037613) dia3_numentry_pane

0xeeed,	// (0x0003cd87) dia3_list_pane

0xeef8,	// (0x0003cd92) scroll_pane_cp12

0x9cde,	// (0x00037b78) bg_dia3_numentry_pane

0x978d,	// (0x00037627) dia3_numentry_pane_t1

0x979c,	// (0x00037636) cell_dia3_key_num_pane

0x97a4,	// (0x0003763e) cell_dia3_key0_fun_pane_ParamLimits

0x97a4,	// (0x0003763e) cell_dia3_key0_fun_pane

0x97b8,	// (0x00037652) cell_dia3_key1_fun_pane_ParamLimits

0x97b8,	// (0x00037652) cell_dia3_key1_fun_pane

0x97d0,	// (0x0003766a) dia3_listrow_pane

0xdeb9,	// (0x0003bd53) bg_dia3_numentry_pane_g1

0x9cde,	// (0x00037b78) bg_button_pane_cp21

0xef03,	// (0x0003cd9d) cell_dia3_key_num_pane_t1

0xef11,	// (0x0003cdab) cell_dia3_key_num_pane_t2

0xef20,	// (0x0003cdba) cell_dia3_key_num_pane_t3

0xef2f,	// (0x0003cdc9) cell_dia3_key_num_pane_t4

0x0003,

0xfeaa,	// (0x0003dd44) cell_dia3_key_num_pane_t

0x9cde,	// (0x00037b78) bg_button_pane_cp19

0x97e2,	// (0x0003767c) cell_dia3_key0_fun_pane_g1

0x9cde,	// (0x00037b78) bg_button_pane_cp20

0x97ea,	// (0x00037684) cell_dia3_key1_fun_pane_g1

0x97f2,	// (0x0003768c) area_left_week_number_pane

0x97fe,	// (0x00037698) area_top_day_name_pane

0x9811,	// (0x000376ab) frame_month_view_pane

0xef3e,	// (0x0003cdd8) grid_month_view_pane

0x9824,	// (0x000376be) cell_top_day_name_pane_ParamLimits

0x9824,	// (0x000376be) cell_top_day_name_pane

0x9851,	// (0x000376eb) cell_area_left_week_number_pane_ParamLimits

0x9851,	// (0x000376eb) cell_area_left_week_number_pane

0x9865,	// (0x000376ff) cell_month_view_pane_ParamLimits

0x9865,	// (0x000376ff) cell_month_view_pane

0xef4c,	// (0x0003cde6) frm_month_g1

0x9892,	// (0x0003772c) frm_month_g2

0x98a5,	// (0x0003773f) frm_month_g3

0x98b8,	// (0x00037752) frm_month_g4

0x98cb,	// (0x00037765) frm_month_g5

0x98de,	// (0x00037778) frm_month_g6

0x98f1,	// (0x0003778b) frm_month_g7

0xef59,	// (0x0003cdf3) frm_month_g8

0x9904,	// (0x0003779e) frm_month_g9

0x9914,	// (0x000377ae) frm_month_g10

0x9924,	// (0x000377be) frm_month_g11

0x9934,	// (0x000377ce) frm_month_g12

0x9946,	// (0x000377e0) frm_month_g13

0x9958,	// (0x000377f2) frm_month_g14

0x996c,	// (0x00037806) frm_month_g15

0x9980,	// (0x0003781a) frm_month_g16

0x000f,

0xfeb3,	// (0x0003dd4d) frm_month_g

0xef66,	// (0x0003ce00) cell_top_day_name_pane_t1

0x9994,	// (0x0003782e) cell_area_left_week_number_pane_g1

0x99a0,	// (0x0003783a) cell_area_left_week_number_pane_t1

0xcb5f,	// (0x0003a9f9) cell_month_view_pane_g1

0x99b3,	// (0x0003784d) cell_month_view_pane_t1

0x9cde,	// (0x00037b78) main_fps_pane

0xe45d,	// (0x0003c2f7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe45d,	// (0x0003c2f7) cmail_ddmenu_btn02_pane_cp1

0xe479,	// (0x0003c313) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe479,	// (0x0003c313) cmail_ddmenu_btn02_pane_cp2

0x90ff,	// (0x00036f99) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x90ff,	// (0x00036f99) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003dcc2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003dcc2) cmail_ddmenu_btn02_pane_g

0x911d,	// (0x00036fb7) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x911d,	// (0x00036fb7) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003dcc7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003dcc7) cmail_ddmenu_btn02_pane_t

0x99c6,	// (0x00037860) fps_text_pane_ParamLimits

0x99c6,	// (0x00037860) fps_text_pane

0x99dd,	// (0x00037877) main_fps_pane_g1_ParamLimits

0x99dd,	// (0x00037877) main_fps_pane_g1

0x99f7,	// (0x00037891) wait_bar_pane_cp010_ParamLimits

0x99f7,	// (0x00037891) wait_bar_pane_cp010

0x9a08,	// (0x000378a2) fps_text_pane_t1_ParamLimits

0x9a08,	// (0x000378a2) fps_text_pane_t1

0xdf9e,	// (0x0003be38) cam4_image_uncrop_pane_g1

0xdfa7,	// (0x0003be41) cam4_image_uncrop_pane_g2

0x6633,	// (0x000344cd) cam4_image_uncrop_pane_g3

0x663c,	// (0x000344d6) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003d788) cam4_image_uncrop_pane_g

0x97d0,	// (0x0003766a) dia3_listrow_pane_ParamLimits

0x9cde,	// (0x00037b78) main_phob2_pane

0x8c3c,	// (0x00036ad6) cell_tport_appsw_pane_cp02_ParamLimits

0x8c3c,	// (0x00036ad6) cell_tport_appsw_pane_cp02

0x8c50,	// (0x00036aea) cell_tport_appsw_pane_cp03_ParamLimits

0x8c50,	// (0x00036aea) cell_tport_appsw_pane_cp03

0x9cde,	// (0x00037b78) phob2_contact_card_pane

0x9cde,	// (0x00037b78) phob2_listscroll_pane

0xef79,	// (0x0003ce13) phob2_list_pane

0xef81,	// (0x0003ce1b) scroll_pane_cp034

0x9a20,	// (0x000378ba) phob2_cc_data_pane_ParamLimits

0x9a20,	// (0x000378ba) phob2_cc_data_pane

0x9a3f,	// (0x000378d9) phob2_cc_listscroll_pane_ParamLimits

0x9a3f,	// (0x000378d9) phob2_cc_listscroll_pane

0x958e,	// (0x00037428) list_double_large_graphic_phob2_pane_ParamLimits

0x958e,	// (0x00037428) list_double_large_graphic_phob2_pane

0x9a5d,	// (0x000378f7) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a5d,	// (0x000378f7) list_double_large_graphic_phob2_pane_g1

0x9a73,	// (0x0003790d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a73,	// (0x0003790d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfed4,	// (0x0003dd6e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfed4,	// (0x0003dd6e) list_double_large_graphic_phob2_pane_g

0x9a7f,	// (0x00037919) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a7f,	// (0x00037919) list_double_large_graphic_phob2_pane_t1

0x9a94,	// (0x0003792e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a94,	// (0x0003792e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfed9,	// (0x0003dd73) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfed9,	// (0x0003dd73) list_double_large_graphic_phob2_pane_t

0x9cde,	// (0x00037b78) list_highlight_pane_cp024

0x9aa6,	// (0x00037940) phob2_cc_button_pane

0x9aae,	// (0x00037948) phob2_cc_data_pane_g1_ParamLimits

0x9aae,	// (0x00037948) phob2_cc_data_pane_g1

0x9ac3,	// (0x0003795d) phob2_cc_data_pane_g2_ParamLimits

0x9ac3,	// (0x0003795d) phob2_cc_data_pane_g2

0x0001,

0xfede,	// (0x0003dd78) phob2_cc_data_pane_g_ParamLimits

0xfede,	// (0x0003dd78) phob2_cc_data_pane_g

0x9ad3,	// (0x0003796d) phob2_cc_data_pane_t1_ParamLimits

0x9ad3,	// (0x0003796d) phob2_cc_data_pane_t1

0x9aeb,	// (0x00037985) phob2_cc_data_pane_t2_ParamLimits

0x9aeb,	// (0x00037985) phob2_cc_data_pane_t2

0x9b03,	// (0x0003799d) phob2_cc_data_pane_t3_ParamLimits

0x9b03,	// (0x0003799d) phob2_cc_data_pane_t3

0x0002,

0xfee3,	// (0x0003dd7d) phob2_cc_data_pane_t_ParamLimits

0xfee3,	// (0x0003dd7d) phob2_cc_data_pane_t

0xef89,	// (0x0003ce23) phob2_cc_list_pane_ParamLimits

0xef89,	// (0x0003ce23) phob2_cc_list_pane

0xd61f,	// (0x0003b4b9) scroll_pane_cp035_ParamLimits

0xd61f,	// (0x0003b4b9) scroll_pane_cp035

0xa9f8,	// (0x00038892) bg_button_pane_cp033

0xef95,	// (0x0003ce2f) phob2_cc_button_pane_g1

0xefa1,	// (0x0003ce3b) phob2_cc_button_pane_t1

0xefb6,	// (0x0003ce50) phob2_cc_button_pane_t2

0x0001,

0xfeea,	// (0x0003dd84) phob2_cc_button_pane_t

0x9b1b,	// (0x000379b5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b1b,	// (0x000379b5) list_double_large_graphic_phob2_cc_pane

0x9b4b,	// (0x000379e5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b4b,	// (0x000379e5) list_double_large_graphic_phob2_cc_pane_g1

0x9b57,	// (0x000379f1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b57,	// (0x000379f1) list_double_large_graphic_phob2_cc_pane_g2

0x9b63,	// (0x000379fd) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b63,	// (0x000379fd) list_double_large_graphic_phob2_cc_pane_g3

0x9b6f,	// (0x00037a09) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b6f,	// (0x00037a09) list_double_large_graphic_phob2_cc_pane_g4

0x9b7b,	// (0x00037a15) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b7b,	// (0x00037a15) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeef,	// (0x0003dd89) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeef,	// (0x0003dd89) list_double_large_graphic_phob2_cc_pane_g

0x9b87,	// (0x00037a21) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b87,	// (0x00037a21) list_double_large_graphic_phob2_cc_pane_t1

0x9bb0,	// (0x00037a4a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9bb0,	// (0x00037a4a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfefa,	// (0x0003dd94) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfefa,	// (0x0003dd94) list_double_large_graphic_phob2_cc_pane_t

0xefc8,	// (0x0003ce62) list_highlight_pane_cp025_ParamLimits

0xefc8,	// (0x0003ce62) list_highlight_pane_cp025

0xa9f8,	// (0x00038892) bg_button_pane_cp033_ParamLimits

0xef95,	// (0x0003ce2f) phob2_cc_button_pane_g1_ParamLimits

0xefa1,	// (0x0003ce3b) phob2_cc_button_pane_t1_ParamLimits

0xefb6,	// (0x0003ce50) phob2_cc_button_pane_t2_ParamLimits

0xfeea,	// (0x0003dd84) phob2_cc_button_pane_t_ParamLimits

0x1ad6,	// (0x0002f970) popup_wgtman_window

0xd434,	// (0x0003b2ce) scroll_pane_cp038

0x9507,	// (0x000373a1) wgtman_btn_pane_cp_01_ParamLimits

0x9507,	// (0x000373a1) wgtman_btn_pane_cp_01

0xefd6,	// (0x0003ce70) wgtman_content_pane

0xefdf,	// (0x0003ce79) wgtman_heading_pane

0x9cde,	// (0x00037b78) bg_heading_pane_cp02

0xefe8,	// (0x0003ce82) wgtman_heading_pane_g1

0xeff0,	// (0x0003ce8a) wgtman_heading_pane_t1

0xeffe,	// (0x0003ce98) scroll_pane_cp036

0xf006,	// (0x0003cea0) wgtman_list_pane

0xf00e,	// (0x0003cea8) wgtman_list_pane_t1_ParamLimits

0xf00e,	// (0x0003cea8) wgtman_list_pane_t1

0x661f,	// (0x000344b9) cam4_grid_pane

0x7007,	// (0x00034ea1) bg_button_pane_cp015_ParamLimits

0x7019,	// (0x00034eb3) bg_button_pane_cp016_ParamLimits

0x702c,	// (0x00034ec6) bg_button_pane_cp017_ParamLimits

0x7084,	// (0x00034f1e) popup_vitu2_query_window_g3_ParamLimits

0x7084,	// (0x00034f1e) popup_vitu2_query_window_g3

0x7141,	// (0x00034fdb) popup_vitu2_query_window_t6_ParamLimits

0x7141,	// (0x00034fdb) popup_vitu2_query_window_t6

0x716c,	// (0x00035006) popup_vitu2_query_window_t7_ParamLimits

0x716c,	// (0x00035006) popup_vitu2_query_window_t7

0xdf9e,	// (0x0003be38) cam4_grid_pane_g1

0xdfa7,	// (0x0003be41) cam4_grid_pane_g2

0xf028,	// (0x0003cec2) cam4_grid_pane_g3

0xf031,	// (0x0003cecb) cam4_grid_pane_g4

0x0003,

0xfeff,	// (0x0003dd99) cam4_grid_pane_g

0x286b,	// (0x00030705) aid_placing_vt_slider_lsc_ParamLimits

0x2b76,	// (0x00030a10) vidtel_button_pane_ParamLimits

0x2b76,	// (0x00030a10) vidtel_button_pane

0x9cde,	// (0x00037b78) bg_button_pane_cp034

0xf03c,	// (0x0003ced6) vidtel_button_pane_g1

0xf044,	// (0x0003cede) vidtel_button_pane_t1

0xd566,	// (0x0003b400) aid_size_vtel_slider_touch

0xd61f,	// (0x0003b4b9) scroll_pane_cp039

0x7f4b,	// (0x00035de5) ncim_query_button_pane_cp01_ParamLimits

0x7f6a,	// (0x00035e04) ncimui_query_pane_g1_ParamLimits

0xa9f8,	// (0x00038892) input_focus_pane_cp012_ParamLimits

0xdef7,	// (0x0003bd91) ncim_query_entry_pane_t1_ParamLimits

0xd61f,	// (0x0003b4b9) scroll_pane_cp039_ParamLimits

0xaf18,	// (0x00038db2) navi_pane_bcale_mc_g1

0xaf20,	// (0x00038dba) navi_pane_bcale_mc_t1

0xe4c2,	// (0x0003c35c) main_sp_fs_email_pane_g1

0xe4ce,	// (0x0003c368) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003db7f) main_sp_fs_email_pane_g

0xe946,	// (0x0003c7e0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe946,	// (0x0003c7e0) list_single_cale_mrui_row_pane_g3

0x913d,	// (0x00036fd7) list_single_recal_day_pane_g5_event_pane

0xeb25,	// (0x0003c9bf) list_single_recal_day_pane_g7

0xf05a,	// (0x0003cef4) list_recal_day_event_pane_cp01

0xf063,	// (0x0003cefd) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0003cf05) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0003cf0d) list_recal_vselct_pane_cp01

0xd588,	// (0x0003b422) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0003cf17) list_recal_day_event_pane_cp01_t1

0xeb2d,	// (0x0003c9c7) list_single_recal_day_pane_t1_ParamLimits

0xeb3f,	// (0x0003c9d9) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003dcd7) list_single_recal_day_pane_t_ParamLimits

0xa356,	// (0x000381f0) bg_notes_pane_ParamLimits

0xa3f9,	// (0x00038293) list_notes_pane_ParamLimits

0x1d48,	// (0x0002fbe2) scroll_pane_cp06_ParamLimits

0xa41b,	// (0x000382b5) main_notes_pane_ParamLimits

0x9cde,	// (0x00037b78) main_welc_pane

0x9bd9,	// (0x00037a73) main_welc_body_pane_ParamLimits

0x9bd9,	// (0x00037a73) main_welc_body_pane

0x9bf7,	// (0x00037a91) main_welc_opti_pane_ParamLimits

0x9bf7,	// (0x00037a91) main_welc_opti_pane

0x9c3c,	// (0x00037ad6) main_welc_pane_t1_ParamLimits

0x9c3c,	// (0x00037ad6) main_welc_pane_t1

0x9c5a,	// (0x00037af4) main_welc_body_row_pane_ParamLimits

0x9c5a,	// (0x00037af4) main_welc_body_row_pane

0xdf90,	// (0x0003be2a) main_welc_opti_row_pane_ParamLimits

0xdf90,	// (0x0003be2a) main_welc_opti_row_pane

0xf08b,	// (0x0003cf25) main_welc_opti_row_pane_g1

0x9c6e,	// (0x00037b08) main_welc_opti_row_pane_t1

0xf093,	// (0x0003cf2d) main_welc_body_row_pane_t1

0xed9b,	// (0x0003cc35) popup_notif_wgt_heading_pane

0xedb5,	// (0x0003cc4f) aid_size_list_notif_wgt_del_ParamLimits

0xedc2,	// (0x0003cc5c) list_notif_wgt_row_pane_g1_ParamLimits

0xedce,	// (0x0003cc68) list_notif_wgt_row_pane_g2_ParamLimits

0xeddd,	// (0x0003cc77) list_notif_wgt_row_pane_g3_ParamLimits

0x00a5,	// (0x0002df3f) list_notif_wgt_row_pane_g_ParamLimits

0xedea,	// (0x0003cc84) list_notif_wgt_row_pane_t1_ParamLimits

0xee00,	// (0x0003cc9a) list_notif_wgt_row_pane_t2_ParamLimits

0xee12,	// (0x0003ccac) list_notif_wgt_row_pane_t3_ParamLimits

0x00ac,	// (0x0002df46) list_notif_wgt_row_pane_t_ParamLimits

0x95a0,	// (0x0003743a) listrow_wgtman_pane_g1_ParamLimits

0x95ad,	// (0x00037447) listrow_wgtman_pane_g2_ParamLimits

0xfe84,	// (0x0003dd1e) listrow_wgtman_pane_g_ParamLimits

0x95cb,	// (0x00037465) listrow_wgtman_pane_t1_ParamLimits

0x95e3,	// (0x0003747d) listrow_wgtman_pane_t2_ParamLimits

0xfe89,	// (0x0003dd23) listrow_wgtman_pane_t_ParamLimits

0x9609,	// (0x000374a3) wait_bar_pane_cp09_ParamLimits

0x9cde,	// (0x00037b78) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0003cf3c) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0003cf44) popup_notif_wgt_heading_pane_t1

0x9cde,	// (0x00037b78) main_vids_pane

0x9cde,	// (0x00037b78) vids_listscroll_pane

0x9c7d,	// (0x00037b17) scroll_pane_cp040

0x9cde,	// (0x00037b78) vids_list_pane

0x9c88,	// (0x00037b22) vids_list_double_pane_ParamLimits

0x9c88,	// (0x00037b22) vids_list_double_pane

0x9c99,	// (0x00037b33) vids_list_double_pane_g1

0x9ca2,	// (0x00037b3c) vids_list_double_pane_t1

0x9cb2,	// (0x00037b4c) vids_list_double_pane_t2

0x0001,

0xff0d,	// (0x0003dda7) vids_list_double_pane_t

0x1ac8,	// (0x0002f962) main_ncimui_pane_ParamLimits

0x7d81,	// (0x00035c1b) main_ncimui_pane_g1_ParamLimits

0x7d8d,	// (0x00035c27) main_ncimui_pane_g2_ParamLimits

0x7d8d,	// (0x00035c27) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003da84) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003da84) main_ncimui_pane_g

0x9c12,	// (0x00037aac) main_welc_pane_g1_ParamLimits

0x9c12,	// (0x00037aac) main_welc_pane_g1

0x9c27,	// (0x00037ac1) main_welc_pane_g2_ParamLimits

0x9c27,	// (0x00037ac1) main_welc_pane_g2

0x0001,

0xff08,	// (0x0003dda2) main_welc_pane_g_ParamLimits

0xff08,	// (0x0003dda2) main_welc_pane_g

0xa356,	// (0x000381f0) listscroll_mce_pane_ParamLimits

0xb06d,	// (0x00038f07) wait_bar_pane_cp10

0xc4e8,	// (0x0003a382) main_cale_day_pane_ParamLimits

0xc4e8,	// (0x0003a382) main_cale_week_pane_ParamLimits

0xa356,	// (0x000381f0) main_messa_pane_ParamLimits

0x5bec,	// (0x00033a86) main_clock2_btn_pane_ParamLimits

0x5bec,	// (0x00033a86) main_clock2_btn_pane

0xcd13,	// (0x0003abad) main_clock2_btn_pane_cp01_ParamLimits

0xcd13,	// (0x0003abad) main_clock2_btn_pane_cp01

0xe8d2,	// (0x0003c76c) list_cale_mrui_pane_ParamLimits

0xee48,	// (0x0003cce2) main_cf0_pane_g2

0x0001,

0x00b3,	// (0x0002df4d) main_cf0_pane_g

0x97f2,	// (0x0003768c) area_left_week_number_pane_ParamLimits

0x97fe,	// (0x00037698) area_top_day_name_pane_ParamLimits

0x9811,	// (0x000376ab) frame_month_view_pane_ParamLimits

0xef3e,	// (0x0003cdd8) grid_month_view_pane_ParamLimits

0xef4c,	// (0x0003cde6) frm_month_g1_ParamLimits

0x9892,	// (0x0003772c) frm_month_g2_ParamLimits

0x98a5,	// (0x0003773f) frm_month_g3_ParamLimits

0x98b8,	// (0x00037752) frm_month_g4_ParamLimits

0x98cb,	// (0x00037765) frm_month_g5_ParamLimits

0x98de,	// (0x00037778) frm_month_g6_ParamLimits

0x98f1,	// (0x0003778b) frm_month_g7_ParamLimits

0xef59,	// (0x0003cdf3) frm_month_g8_ParamLimits

0x9904,	// (0x0003779e) frm_month_g9_ParamLimits

0x9914,	// (0x000377ae) frm_month_g10_ParamLimits

0x9924,	// (0x000377be) frm_month_g11_ParamLimits

0x9934,	// (0x000377ce) frm_month_g12_ParamLimits

0x9946,	// (0x000377e0) frm_month_g13_ParamLimits

0x9958,	// (0x000377f2) frm_month_g14_ParamLimits

0x996c,	// (0x00037806) frm_month_g15_ParamLimits

0x9980,	// (0x0003781a) frm_month_g16_ParamLimits

0xfeb3,	// (0x0003dd4d) frm_month_g_ParamLimits

0xef66,	// (0x0003ce00) cell_top_day_name_pane_t1_ParamLimits

0x9994,	// (0x0003782e) cell_area_left_week_number_pane_g1_ParamLimits

0x99a0,	// (0x0003783a) cell_area_left_week_number_pane_t1_ParamLimits

0xcb5f,	// (0x0003a9f9) cell_month_view_pane_g1_ParamLimits

0x99b3,	// (0x0003784d) cell_month_view_pane_t1_ParamLimits

0xa34e,	// (0x000381e8) main_clock2_btn_pane_g1

0xf0b8,	// (0x0003cf52) main_clock2_btn_pane_t1

0xa9f8,	// (0x00038892) listscroll_cmail_pane_ParamLimits

0xe4c2,	// (0x0003c35c) main_sp_fs_email_pane_g1_ParamLimits

0xe4ce,	// (0x0003c368) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003db7f) main_sp_fs_email_pane_g_ParamLimits

0xea95,	// (0x0003c92f) list_recal_day_pane_ParamLimits

0xeaa6,	// (0x0003c940) mian_recal_day_pane_t1

0x88a1,	// (0x0003673b) list_single_dyc_row_text_pane_t4_ParamLimits

0x88a1,	// (0x0003673b) list_single_dyc_row_text_pane_t4

0x88ea,	// (0x00036784) list_single_dyc_row_text_pane_t5_ParamLimits

0x88ea,	// (0x00036784) list_single_dyc_row_text_pane_t5

0xe574,	// (0x0003c40e) list_single_dyc_row_text_pane_t6_ParamLimits

0xe574,	// (0x0003c40e) list_single_dyc_row_text_pane_t6

0x37f6,	// (0x00031690) aid_mgn_list_cale_time_pane

0x1ac8,	// (0x0002f962) main_gallery2_pane_ParamLimits

0xcd29,	// (0x0003abc3) main_clock2_pane_cp01_t1

0xcd39,	// (0x0003abd3) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0003d65a) main_clock2_pane_cp01_t

0x20d9,	// (0x0002ff73) cale_week_scroll_pane_g16_ParamLimits

0x20d9,	// (0x0002ff73) cale_week_scroll_pane_g16

0xa5e9,	// (0x00038483) vorec_slider_pane

0xf044,	// (0x0003cede) vidtel_button_pane_t1_ParamLimits

0x91a3,	// (0x0003703d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x91a3,	// (0x0003703d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x91b4,	// (0x0003704e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x91b4,	// (0x0003704e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe47,	// (0x0003dce1) main_fs_bigclock_clock_pane_g_ParamLimits

0x91c7,	// (0x00037061) main_fs_bigclock_clock_pane_t1_ParamLimits

0x91dd,	// (0x00037077) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe50,	// (0x0003dcea) main_fs_bigclock_clock_pane_t_ParamLimits

0x53e3,	// (0x0003327d) main_mup3_lyrics_pane_ParamLimits

0x53e3,	// (0x0003327d) main_mup3_lyrics_pane

0x9cc2,	// (0x00037b5c) main_mup3_lyrics_pane_t1_ParamLimits

0x9cc2,	// (0x00037b5c) main_mup3_lyrics_pane_t1

0x61f9,	// (0x00034093) aid_main_mp4_pane_t1_area

0x6203,	// (0x0003409d) aid_main_mp4_pane_t2_area

0x62af,	// (0x00034149) main_mp4_pane_g7_ParamLimits

0x62af,	// (0x00034149) main_mp4_pane_g7

0x62bb,	// (0x00034155) main_mp4_pane_g8_ParamLimits

0x62bb,	// (0x00034155) main_mp4_pane_g8

0x652b,	// (0x000343c5) aid_call6_pane_g1_size

0x9b35,	// (0x000379cf) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9b35,	// (0x000379cf) list_double_large_graphic_phob2_other_pane

0xa9a4,	// (0x0003883e) list_double_large_graphic_phob2_other_pane_g1

0x9cde,	// (0x00037b78) list_highlight_pane_cp026
};


const AknLayoutScalable_Apps::SCdlImpl KCdlImpl = 
	{
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
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
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineCRV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVRC,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineRVC,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowTableLVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineCRV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
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
	&TextLineVCR,
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
	&WindowLineVRC,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&TextLineVRC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsTableLV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&ParameterLimitsV,
	&WindowLineRCV,
	&ParameterLimitsV,
	&WindowLineRCV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineRCV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal

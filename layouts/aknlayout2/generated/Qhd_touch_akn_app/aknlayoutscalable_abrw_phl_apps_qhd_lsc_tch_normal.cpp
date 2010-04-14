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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002dd1e };

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
0x18de,	// (0x0002f5fc) Screen

0x18ea,	// (0x0002f608) application_window

0x191a,	// (0x0002f638) area_bottom_pane_ParamLimits

0x191a,	// (0x0002f638) area_bottom_pane

0x0183,	// (0x0002dea1) area_top_pane_ParamLimits

0x0183,	// (0x0002dea1) area_top_pane

0x1977,	// (0x0002f695) call_video_uplink_pane_ParamLimits

0x1977,	// (0x0002f695) call_video_uplink_pane

0x0211,	// (0x0002df2f) main_pane_ParamLimits

0x0211,	// (0x0002df2f) main_pane

0xc44c,	// (0x0003a16a) context_pane

0x4a98,	// (0x000327b6) navi_pane

0x4aca,	// (0x000327e8) popup_cale_events_window_ParamLimits

0x4aca,	// (0x000327e8) popup_cale_events_window

0xc45f,	// (0x0003a17d) popup_mup_playback_window

0x4ae2,	// (0x00032800) signal_pane

0xa2e5,	// (0x00038003) main_browser_pane

0xafb7,	// (0x00038cd5) main_burst_pane

0x0671,	// (0x0002e38f) main_calc_pane

0xc432,	// (0x0003a150) main_cale_day_pane

0x0685,	// (0x0002e3a3) main_cale_month_pane

0xc432,	// (0x0003a150) main_cale_week_pane

0xafb7,	// (0x00038cd5) main_call_pane

0x9fc5,	// (0x00037ce3) main_call_poc_pane

0xafb7,	// (0x00038cd5) main_camera_pane

0xafb7,	// (0x00038cd5) main_chi_dic_pane

0xad34,	// (0x00038a52) main_clock_pane

0x9fc5,	// (0x00037ce3) main_fmradio_pane

0xafb7,	// (0x00038cd5) main_graph_messa_pane

0x9fc5,	// (0x00037ce3) main_help_pane

0xa2e5,	// (0x00038003) main_im_pane

0xa220,	// (0x00037f3e) main_image_pane_ParamLimits

0xa220,	// (0x00037f3e) main_image_pane

0x9fc5,	// (0x00037ce3) main_location2_pane

0xafb7,	// (0x00038cd5) main_location_pane

0xa220,	// (0x00037f3e) main_messa_pane

0x9fc5,	// (0x00037ce3) main_mp2_pane

0xafb7,	// (0x00038cd5) main_mp_pane

0x9fc5,	// (0x00037ce3) main_msg_pane

0x9fc5,	// (0x00037ce3) main_mup_eq_pane

0x9fc5,	// (0x00037ce3) main_mup_pane

0xa2e5,	// (0x00038003) main_notes_pane

0x9fc5,	// (0x00037ce3) main_pec_pane

0x9fc5,	// (0x00037ce3) main_phob_pane

0x9fc5,	// (0x00037ce3) main_pinb_pane

0x9fc5,	// (0x00037ce3) main_postcard_pane

0x9fc5,	// (0x00037ce3) main_qdial_pane

0xafb7,	// (0x00038cd5) main_skin_pane

0x9fc5,	// (0x00037ce3) main_smil2_pane

0xafb7,	// (0x00038cd5) main_smil_pane

0xafb7,	// (0x00038cd5) main_video_pane

0xafb7,	// (0x00038cd5) main_video_tele_pane

0xa220,	// (0x00037f3e) main_viewer_pane_ParamLimits

0xa220,	// (0x00037f3e) main_viewer_pane

0xafb7,	// (0x00038cd5) main_vorec_pane

0x06d7,	// (0x0002e3f5) popup_blid_sat_info_window_ParamLimits

0x06d7,	// (0x0002e3f5) popup_blid_sat_info_window

0x072f,	// (0x0002e44d) popup_dyc_status_message_window_ParamLimits

0x072f,	// (0x0002e44d) popup_dyc_status_message_window

0x0749,	// (0x0002e467) popup_grid_large_graphic_window_ParamLimits

0x0749,	// (0x0002e467) popup_grid_large_graphic_window

0x0805,	// (0x0002e523) popup_loc_request_window_ParamLimits

0x0805,	// (0x0002e523) popup_loc_request_window

0x08fb,	// (0x0002e619) popup_wml_address_window_ParamLimits

0x08fb,	// (0x0002e619) popup_wml_address_window

0x4888,	// (0x000325a6) call_muted_g1

0x453d,	// (0x0003225b) popup_call_audio_conf_window_ParamLimits

0x453d,	// (0x0003225b) popup_call_audio_conf_window

0x489c,	// (0x000325ba) popup_call_audio_first_window_ParamLimits

0x489c,	// (0x000325ba) popup_call_audio_first_window

0x4912,	// (0x00032630) popup_call_audio_in_window_ParamLimits

0x4912,	// (0x00032630) popup_call_audio_in_window

0x494e,	// (0x0003266c) popup_call_audio_out_window_ParamLimits

0x494e,	// (0x0003266c) popup_call_audio_out_window

0x4988,	// (0x000326a6) popup_call_audio_second_window_ParamLimits

0x4988,	// (0x000326a6) popup_call_audio_second_window

0x49de,	// (0x000326fc) popup_call_audio_wait_window_ParamLimits

0x49de,	// (0x000326fc) popup_call_audio_wait_window

0x4a13,	// (0x00032731) popup_number_entry_window_ParamLimits

0x4a13,	// (0x00032731) popup_number_entry_window

0x9bb2,	// (0x000378d0) bg_popup_call_pane_cp05_ParamLimits

0x9bb2,	// (0x000378d0) bg_popup_call_pane_cp05

0x9bd2,	// (0x000378f0) popup_number_entry_window_t1

0x9be5,	// (0x00037903) popup_number_entry_window_t2

0x9bf7,	// (0x00037915) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0003cde4) popup_number_entry_window_t

0x9c09,	// (0x00037927) text_title_cp2

0x9c1c,	// (0x0003793a) bg_popup_call_pane_cp_ParamLimits

0x9c1c,	// (0x0003793a) bg_popup_call_pane_cp

0x9c2a,	// (0x00037948) call_thumbnail_pane

0x9c32,	// (0x00037950) popup_call_audio_in_window_g1_ParamLimits

0x9c32,	// (0x00037950) popup_call_audio_in_window_g1

0x9c3e,	// (0x0003795c) popup_call_audio_in_window_g2_ParamLimits

0x9c3e,	// (0x0003795c) popup_call_audio_in_window_g2

0x9c4a,	// (0x00037968) popup_call_audio_in_window_g3_ParamLimits

0x9c4a,	// (0x00037968) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0003cded) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0003cded) popup_call_audio_in_window_g

0x9c56,	// (0x00037974) popup_call_audio_in_window_t1_ParamLimits

0x9c56,	// (0x00037974) popup_call_audio_in_window_t1

0x9c72,	// (0x00037990) popup_call_audio_in_window_t2_ParamLimits

0x9c72,	// (0x00037990) popup_call_audio_in_window_t2

0x9c8e,	// (0x000379ac) popup_call_audio_in_window_t3_ParamLimits

0x9c8e,	// (0x000379ac) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0003cdf4) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0003cdf4) popup_call_audio_in_window_t

0x9c1c,	// (0x0003793a) bg_popup_call_pane_cp01_ParamLimits

0x9c1c,	// (0x0003793a) bg_popup_call_pane_cp01

0x9c2a,	// (0x00037948) call_thumbnail_pane_cp02

0x9ca1,	// (0x000379bf) call_type_pane_cp022

0x9ca9,	// (0x000379c7) popup_call_audio_out_window_g1_ParamLimits

0x9ca9,	// (0x000379c7) popup_call_audio_out_window_g1

0x9cbb,	// (0x000379d9) popup_call_audio_out_window_g2_ParamLimits

0x9cbb,	// (0x000379d9) popup_call_audio_out_window_g2

0x9cc7,	// (0x000379e5) popup_call_audio_out_window_g3_ParamLimits

0x9cc7,	// (0x000379e5) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0003cdfb) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0003cdfb) popup_call_audio_out_window_g

0x9cd9,	// (0x000379f7) popup_call_audio_out_window_t1_ParamLimits

0x9cd9,	// (0x000379f7) popup_call_audio_out_window_t1

0x9cf1,	// (0x00037a0f) popup_call_audio_out_window_t2_ParamLimits

0x9cf1,	// (0x00037a0f) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0003ce02) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0003ce02) popup_call_audio_out_window_t

0x9d06,	// (0x00037a24) bg_popup_call_pane_ParamLimits

0x9d06,	// (0x00037a24) bg_popup_call_pane

0x19ed,	// (0x0002f70b) call_thumbnail_pane_cp_ParamLimits

0x19ed,	// (0x0002f70b) call_thumbnail_pane_cp

0x9d8a,	// (0x00037aa8) call_type_pane_cp01_ParamLimits

0x9d8a,	// (0x00037aa8) call_type_pane_cp01

0x9dce,	// (0x00037aec) popup_call_audio_first_window_g1_ParamLimits

0x9dce,	// (0x00037aec) popup_call_audio_first_window_g1

0x9e1a,	// (0x00037b38) popup_call_audio_first_window_g2_ParamLimits

0x9e1a,	// (0x00037b38) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0003ce07) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0003ce07) popup_call_audio_first_window_g

0x9e5e,	// (0x00037b7c) popup_call_audio_first_window_t1_ParamLimits

0x9e5e,	// (0x00037b7c) popup_call_audio_first_window_t1

0x9f0a,	// (0x00037c28) popup_call_audio_first_window_t4_ParamLimits

0x9f0a,	// (0x00037c28) popup_call_audio_first_window_t4

0x9f96,	// (0x00037cb4) popup_call_audio_first_window_t5_ParamLimits

0x9f96,	// (0x00037cb4) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0003ce0c) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0003ce0c) popup_call_audio_first_window_t

0x9fc5,	// (0x00037ce3) bg_popup_call_pane_cp02

0x9fcf,	// (0x00037ced) call_type_pane_cp023

0x9fd7,	// (0x00037cf5) popup_call_audio_wait_window_g1

0x9fdf,	// (0x00037cfd) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003ce13) popup_call_audio_wait_window_g

0x9fe7,	// (0x00037d05) popup_call_audio_wait_window_t3

0x9ff5,	// (0x00037d13) bg_popup_call_pane_cp03_ParamLimits

0x9ff5,	// (0x00037d13) bg_popup_call_pane_cp03

0xa055,	// (0x00037d73) call_thumbnail_pane_cp011_ParamLimits

0xa055,	// (0x00037d73) call_thumbnail_pane_cp011

0xa061,	// (0x00037d7f) call_type_pane_cp034_ParamLimits

0xa061,	// (0x00037d7f) call_type_pane_cp034

0xa09d,	// (0x00037dbb) popup_call_audio_second_window_g1_ParamLimits

0xa09d,	// (0x00037dbb) popup_call_audio_second_window_g1

0xa0d9,	// (0x00037df7) popup_call_audio_second_window_g2_ParamLimits

0xa0d9,	// (0x00037df7) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0003ce18) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0003ce18) popup_call_audio_second_window_g

0xa115,	// (0x00037e33) popup_call_audio_second_window_t1_ParamLimits

0xa115,	// (0x00037e33) popup_call_audio_second_window_t1

0xa196,	// (0x00037eb4) popup_call_audio_second_window_t2_ParamLimits

0xa196,	// (0x00037eb4) popup_call_audio_second_window_t2

0xa1cc,	// (0x00037eea) popup_call_audio_second_window_t3_ParamLimits

0xa1cc,	// (0x00037eea) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0003ce1d) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0003ce1d) popup_call_audio_second_window_t

0x9fc5,	// (0x00037ce3) bg_popup_call_pane_cp04

0xa202,	// (0x00037f20) list_conf_pane

0xa20a,	// (0x00037f28) popup_call_audio_conf_window_t1

0xa218,	// (0x00037f36) call_thumbnail_pane_g1

0xa220,	// (0x00037f3e) bg_pinb_pane_ParamLimits

0xa220,	// (0x00037f3e) bg_pinb_pane

0xa22e,	// (0x00037f4c) find_pinb_pane

0xa237,	// (0x00037f55) listscroll_pinb_pane_ParamLimits

0xa237,	// (0x00037f55) listscroll_pinb_pane

0xa246,	// (0x00037f64) pinb_bg_pane_g1

0x1a11,	// (0x0002f72f) pinb_bg_pane_g2

0x1a1d,	// (0x0002f73b) pinb_bg_pane_g3

0x1a29,	// (0x0002f747) pinb_bg_pane_g4

0x1a35,	// (0x0002f753) pinb_bg_pane_g5

0x1a41,	// (0x0002f75f) pinb_bg_pane_g6

0x1a4c,	// (0x0002f76a) pinb_bg_pane_g7

0x1a57,	// (0x0002f775) pinb_bg_pane_g8

0x1a62,	// (0x0002f780) pinb_bg_pane_g9

0x1a6c,	// (0x0002f78a) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0003ce24) pinb_bg_pane_g

0x1a89,	// (0x0002f7a7) grid_pinb_pane

0x1a92,	// (0x0002f7b0) list_pinb_pane

0x1a9b,	// (0x0002f7b9) scroll_pane_cp01_ParamLimits

0x1a9b,	// (0x0002f7b9) scroll_pane_cp01

0xa250,	// (0x00037f6e) find_pinb_pane_g1_ParamLimits

0xa250,	// (0x00037f6e) find_pinb_pane_g1

0xa268,	// (0x00037f86) find_pinb_pane_t1

0xa27a,	// (0x00037f98) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0003ce3e) find_pinb_pane_t

0xa28f,	// (0x00037fad) input_focus_pane_cp01_ParamLimits

0xa28f,	// (0x00037fad) input_focus_pane_cp01

0x1aad,	// (0x0002f7cb) cell_pinb_pane_ParamLimits

0x1aad,	// (0x0002f7cb) cell_pinb_pane

0x1ad6,	// (0x0002f7f4) cell_pinb_pane_g1_ParamLimits

0x1ad6,	// (0x0002f7f4) cell_pinb_pane_g1

0x1ae6,	// (0x0002f804) cell_pinb_pane_g2_ParamLimits

0x1ae6,	// (0x0002f804) cell_pinb_pane_g2

0xa29b,	// (0x00037fb9) cell_pinb_pane_g3_ParamLimits

0xa29b,	// (0x00037fb9) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0003ce43) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0003ce43) cell_pinb_pane_g

0x9fc5,	// (0x00037ce3) grid_highlight_pane_cp01

0x1af2,	// (0x0002f810) list_pinb_item_pane_ParamLimits

0x1af2,	// (0x0002f810) list_pinb_item_pane

0x9fc5,	// (0x00037ce3) list_highlight_pane_cp02

0x1b04,	// (0x0002f822) list_pinb_item_pane_g1_ParamLimits

0x1b04,	// (0x0002f822) list_pinb_item_pane_g1

0x1b11,	// (0x0002f82f) list_pinb_item_pane_g2_ParamLimits

0x1b11,	// (0x0002f82f) list_pinb_item_pane_g2

0x1b1d,	// (0x0002f83b) list_pinb_item_pane_g3_ParamLimits

0x1b1d,	// (0x0002f83b) list_pinb_item_pane_g3

0x1b2e,	// (0x0002f84c) list_pinb_item_pane_g4_ParamLimits

0x1b2e,	// (0x0002f84c) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0003ce4a) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0003ce4a) list_pinb_item_pane_g

0x1b3a,	// (0x0002f858) list_pinb_item_pane_t1_ParamLimits

0x1b3a,	// (0x0002f858) list_pinb_item_pane_t1

0x03ab,	// (0x0002e0c9) calc_display_pane

0x03d3,	// (0x0002e0f1) calc_paper_pane

0x03f6,	// (0x0002e114) grid_calc_pane

0x9fc5,	// (0x00037ce3) bg_list_pane_cp01

0x1b59,	// (0x0002f877) clock_g1

0x1b61,	// (0x0002f87f) clock_g2

0x0001,

0xf135,	// (0x0003ce53) clock_g

0x1b69,	// (0x0002f887) clock_t1_ParamLimits

0x1b69,	// (0x0002f887) clock_t1

0x1b7e,	// (0x0002f89c) clock_t2_ParamLimits

0x1b7e,	// (0x0002f89c) clock_t2

0x1b90,	// (0x0002f8ae) clock_t3_ParamLimits

0x1b90,	// (0x0002f8ae) clock_t3

0x1ba2,	// (0x0002f8c0) clock_t4_ParamLimits

0x1ba2,	// (0x0002f8c0) clock_t4

0x1bb4,	// (0x0002f8d2) clock_t5_ParamLimits

0x1bb4,	// (0x0002f8d2) clock_t5

0x1bc9,	// (0x0002f8e7) clock_t6_ParamLimits

0x1bc9,	// (0x0002f8e7) clock_t6

0x1bdb,	// (0x0002f8f9) clock_t7_ParamLimits

0x1bdb,	// (0x0002f8f9) clock_t7

0x1bed,	// (0x0002f90b) clock_t8_ParamLimits

0x1bed,	// (0x0002f90b) clock_t8

0x1c01,	// (0x0002f91f) clock_t9_ParamLimits

0x1c01,	// (0x0002f91f) clock_t9

0x0008,

0xf13a,	// (0x0003ce58) clock_t_ParamLimits

0xf13a,	// (0x0003ce58) clock_t

0xa2a7,	// (0x00037fc5) popup_clock_analogue_window_cp02

0xa2a7,	// (0x00037fc5) popup_clock_digital_window_cp01

0xa2af,	// (0x00037fcd) listscroll_help_pane

0x9fc5,	// (0x00037ce3) phob_pre_status_pane

0xa2b9,	// (0x00037fd7) grid_qdial_pane

0xa220,	// (0x00037f3e) listscroll_mce_pane

0xa220,	// (0x00037f3e) bg_notes_pane

0xa2c3,	// (0x00037fe1) list_notes_pane

0x1c15,	// (0x0002f933) scroll_pane_cp06

0xa2d1,	// (0x00037fef) bg_calc_paper_pane

0x1c29,	// (0x0002f947) list_calc_pane

0xa2e5,	// (0x00038003) bg_calc_display_pane

0x0424,	// (0x0002e142) calc_display_pane_t1

0x0436,	// (0x0002e154) calc_display_pane_t2

0x1c43,	// (0x0002f961) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0003ce6b) calc_display_pane_t

0x0448,	// (0x0002e166) cell_calc_pane_ParamLimits

0x0448,	// (0x0002e166) cell_calc_pane

0xa2f1,	// (0x0003800f) bg_calc_paper_pane_g1

0xa2fd,	// (0x0003801b) bg_calc_paper_pane_g2

0xa309,	// (0x00038027) bg_calc_paper_pane_g3

0xa315,	// (0x00038033) bg_calc_paper_pane_g4

0xa321,	// (0x0003803f) bg_calc_paper_pane_g5

0x1c55,	// (0x0002f973) bg_calc_paper_pane_g6

0x1c64,	// (0x0002f982) bg_calc_paper_pane_g7

0x1c73,	// (0x0002f991) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0003ce72) bg_calc_paper_pane_g

0x1c86,	// (0x0002f9a4) calc_bg_paper_pane_g9

0x1c99,	// (0x0002f9b7) list_calc_item_pane_ParamLimits

0x1c99,	// (0x0002f9b7) list_calc_item_pane

0xa32d,	// (0x0003804b) list_calc_item_pane_g1

0x1cae,	// (0x0002f9cc) list_calc_item_pane_t1_ParamLimits

0x1cae,	// (0x0002f9cc) list_calc_item_pane_t1

0x047d,	// (0x0002e19b) list_calc_item_pane_t2_ParamLimits

0x047d,	// (0x0002e19b) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0003ce83) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0003ce83) list_calc_item_pane_t

0xa33a,	// (0x00038058) cell_calc_pane_g1

0xa344,	// (0x00038062) grid_highlight_pane_cp02

0x1cc0,	// (0x0002f9de) bg_calc_display_pane_g1

0x04af,	// (0x0002e1cd) bg_calc_display_pane_g2

0x1cc9,	// (0x0002f9e7) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0003ce8d) bg_calc_display_pane_g

0x04b9,	// (0x0002e1d7) cell_qdial_pane_ParamLimits

0x04b9,	// (0x0002e1d7) cell_qdial_pane

0x1cd2,	// (0x0002f9f0) cell_qdial_pane_g1_ParamLimits

0x1cd2,	// (0x0002f9f0) cell_qdial_pane_g1

0x1ce8,	// (0x0002fa06) cell_qdial_pane_g2_ParamLimits

0x1ce8,	// (0x0002fa06) cell_qdial_pane_g2

0xa366,	// (0x00038084) cell_qdial_pane_g3_ParamLimits

0xa366,	// (0x00038084) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0003ce94) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0003ce94) cell_qdial_pane_g

0x1d0f,	// (0x0002fa2d) cell_qdial_pane_t1_ParamLimits

0x1d0f,	// (0x0002fa2d) cell_qdial_pane_t1

0x1d27,	// (0x0002fa45) cell_qdial_pane_t2_ParamLimits

0x1d27,	// (0x0002fa45) cell_qdial_pane_t2

0x1d3a,	// (0x0002fa58) cell_qdial_pane_t3_ParamLimits

0x1d3a,	// (0x0002fa58) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0003ce9d) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0003ce9d) cell_qdial_pane_t

0x9fc5,	// (0x00037ce3) grid_highlight_pane_cp04

0xa372,	// (0x00038090) thumbnail_qdial_pane_ParamLimits

0xa372,	// (0x00038090) thumbnail_qdial_pane

0xa3ce,	// (0x000380ec) list_help_pane

0xa3d7,	// (0x000380f5) scroll_pane_cp02

0x1d4d,	// (0x0002fa6b) help_list_pane_t1_ParamLimits

0x1d4d,	// (0x0002fa6b) help_list_pane_t1

0x1d6a,	// (0x0002fa88) bg_notes_pane_g2

0x1d72,	// (0x0002fa90) bg_notes_pane_g3

0x1d7a,	// (0x0002fa98) notes_bg_pane_g1

0x1d82,	// (0x0002faa0) notes_bg_pane_g4

0x1d8a,	// (0x0002faa8) notes_bg_pane_g5

0x1d92,	// (0x0002fab0) notes_bg_pane_g6

0x1d9a,	// (0x0002fab8) notes_bg_pane_g7

0x1da2,	// (0x0002fac0) notes_bg_pane_g8

0x1daa,	// (0x0002fac8) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0003cebb) notes_bg_pane_g

0x1db2,	// (0x0002fad0) list_notes_text_pane_ParamLimits

0x1db2,	// (0x0002fad0) list_notes_text_pane

0xa3e0,	// (0x000380fe) list_notes_text_pane_g1

0x1dc7,	// (0x0002fae5) list_notes_text_pane_t1

0x1dd5,	// (0x0002faf3) listscroll_cale_week_pane

0x1e01,	// (0x0002fb1f) bg_cale_heading_pane

0xa403,	// (0x00038121) bg_cale_pane_cp01

0x1e19,	// (0x0002fb37) cale_week_corner_pane

0x1e38,	// (0x0002fb56) cale_week_day_heading_pane

0x1e55,	// (0x0002fb73) cale_week_scroll_pane_g1

0x1e68,	// (0x0002fb86) cale_week_scroll_pane_g2

0x1e80,	// (0x0002fb9e) cale_week_scroll_pane_g3

0x1e98,	// (0x0002fbb6) cale_week_scroll_pane_g4

0x1eb0,	// (0x0002fbce) cale_week_scroll_pane_g5

0x1ed0,	// (0x0002fbee) cale_week_scroll_pane_g6

0x1ef0,	// (0x0002fc0e) cale_week_scroll_pane_g7

0x1f10,	// (0x0002fc2e) cale_week_scroll_pane_g8

0x1f34,	// (0x0002fc52) cale_week_scroll_pane_g9

0x1f4c,	// (0x0002fc6a) cale_week_scroll_pane_g10

0x1f64,	// (0x0002fc82) cale_week_scroll_pane_g11

0x1f7c,	// (0x0002fc9a) cale_week_scroll_pane_g12

0x1f94,	// (0x0002fcb2) cale_week_scroll_pane_g13

0x1f94,	// (0x0002fcb2) cale_week_scroll_pane_g14

0x1f94,	// (0x0002fcb2) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0003ceca) cale_week_scroll_pane_g

0x1fd0,	// (0x0002fcee) cale_week_time_pane

0x1ff4,	// (0x0002fd12) grid_cale_week_pane

0xa433,	// (0x00038151) scroll_pane_cp08

0x201a,	// (0x0002fd38) cell_cale_week_pane_ParamLimits

0x201a,	// (0x0002fd38) cell_cale_week_pane

0x20a8,	// (0x0002fdc6) cale_week_day_heading_pane_t1

0x20ed,	// (0x0002fe0b) cale_week_day_heading_pane_t2

0x2137,	// (0x0002fe55) cale_week_day_heading_pane_t3

0x2181,	// (0x0002fe9f) cale_week_day_heading_pane_t4

0x21cb,	// (0x0002fee9) cale_week_day_heading_pane_t5

0x221d,	// (0x0002ff3b) cale_week_day_heading_pane_t6

0x226f,	// (0x0002ff8d) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0003ceeb) cale_week_day_heading_pane_t

0xa450,	// (0x0003816e) bg_cale_side_pane

0x04cd,	// (0x0002e1eb) cale_week_time_pane_t1

0x04e7,	// (0x0002e205) cale_week_time_pane_t2

0x0501,	// (0x0002e21f) cale_week_time_pane_t3

0x051b,	// (0x0002e239) cale_week_time_pane_t4

0x0535,	// (0x0002e253) cale_week_time_pane_t5

0x054f,	// (0x0002e26d) cale_week_time_pane_t6

0x0569,	// (0x0002e287) cale_week_time_pane_t7

0x0583,	// (0x0002e2a1) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0003cefa) cale_week_time_pane_t

0x22b4,	// (0x0002ffd2) cell_cale_week_pane_g2

0x22d3,	// (0x0002fff1) cell_cale_week_pane_g3_ParamLimits

0x22d3,	// (0x0002fff1) cell_cale_week_pane_g3

0xa45e,	// (0x0003817c) grid_highlight_pane_cp07

0xa466,	// (0x00038184) listscroll_gms_pane

0xa470,	// (0x0003818e) grid_gms_pane

0xa479,	// (0x00038197) listscroll_gms_pane_g1

0xa481,	// (0x0003819f) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0003cf0b) listscroll_gms_pane_g

0x22eb,	// (0x00030009) scroll_pane_cp010

0x22f6,	// (0x00030014) cell_gms_pane_ParamLimits

0x22f6,	// (0x00030014) cell_gms_pane

0x2309,	// (0x00030027) cell_gms_pane_g1

0xa489,	// (0x000381a7) cell_gms_pane_g2

0xa491,	// (0x000381af) cell_gms_pane_g3

0xa49a,	// (0x000381b8) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0003cf10) cell_gms_pane_g

0xa4a3,	// (0x000381c1) grid_highlight_pane_cp09

0x4832,	// (0x00032550) phob_pre_status_pane_g1

0x483a,	// (0x00032558) phob_pre_status_pane_g2

0x4842,	// (0x00032560) phob_pre_status_pane_g3

0x484a,	// (0x00032568) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0003d2ff) phob_pre_status_pane_g

0x485a,	// (0x00032578) phob_pre_status_pane_t1

0x4868,	// (0x00032586) phob_pre_status_pane_t2

0x4878,	// (0x00032596) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0003d30a) phob_pre_status_pane_t

0x9fc5,	// (0x00037ce3) bg_list_pane_cp05

0x05ab,	// (0x0002e2c9) grid_vorec_pane

0x05b3,	// (0x0002e2d1) vorec_t1

0x05c1,	// (0x0002e2df) vorec_t2

0x05cf,	// (0x0002e2ed) vorec_t3

0x05dd,	// (0x0002e2fb) vorec_t4

0x2311,	// (0x0003002f) vorec_t5

0x05eb,	// (0x0002e309) vorec_t6

0x0006,

0xf1fb,	// (0x0003cf19) vorec_t

0x0607,	// (0x0002e325) wait_bar_pane_cp01

0x231f,	// (0x0003003d) cell_vorec_pane_ParamLimits

0x231f,	// (0x0003003d) cell_vorec_pane

0x2332,	// (0x00030050) cell_vorec_pane_g1

0x9fc5,	// (0x00037ce3) grid_highlight_pane_cp05

0x2351,	// (0x0003006f) cams_zoom_pane

0x2360,	// (0x0003007e) image_vga_pane

0x237a,	// (0x00030098) main_camera_pane_g1

0x238c,	// (0x000300aa) main_camera_pane_g2

0x239c,	// (0x000300ba) main_camera_pane_g3

0x23ac,	// (0x000300ca) main_camera_pane_g4

0x23bc,	// (0x000300da) main_camera_pane_g5

0x23cc,	// (0x000300ea) main_camera_pane_g6

0x23de,	// (0x000300fc) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003cf28) main_camera_pane_g

0x23ee,	// (0x0003010c) main_camera_pane_t1

0x2404,	// (0x00030122) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003cf39) main_camera_pane_t

0x243e,	// (0x0003015c) cams_zoom_pane_cp_ParamLimits

0x243e,	// (0x0003015c) cams_zoom_pane_cp

0x2466,	// (0x00030184) image_cif_pane_ParamLimits

0x2466,	// (0x00030184) image_cif_pane

0x249c,	// (0x000301ba) image_subqcif_pane

0x24a4,	// (0x000301c2) main_video_pane_g1_ParamLimits

0x24a4,	// (0x000301c2) main_video_pane_g1

0x24c8,	// (0x000301e6) main_video_pane_g2_ParamLimits

0x24c8,	// (0x000301e6) main_video_pane_g2

0x24fc,	// (0x0003021a) main_video_pane_g3_ParamLimits

0x24fc,	// (0x0003021a) main_video_pane_g3

0x252a,	// (0x00030248) main_video_pane_g4_ParamLimits

0x252a,	// (0x00030248) main_video_pane_g4

0x2558,	// (0x00030276) main_video_pane_g5_ParamLimits

0x2558,	// (0x00030276) main_video_pane_g5

0xa4b7,	// (0x000381d5) main_video_pane_g6_ParamLimits

0xa4b7,	// (0x000381d5) main_video_pane_g6

0x0006,

0xf220,	// (0x0003cf3e) main_video_pane_g_ParamLimits

0xf220,	// (0x0003cf3e) main_video_pane_g

0x2581,	// (0x0003029f) main_video_pane_t1_ParamLimits

0x2581,	// (0x0003029f) main_video_pane_t1

0xa4d1,	// (0x000381ef) cams_zoom_pane_g1

0xa4da,	// (0x000381f8) cams_zoom_pane_g2

0xa4e3,	// (0x00038201) cams_zoom_pane_g3

0xa4ec,	// (0x0003820a) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003cf4d) cams_zoom_pane_g

0x25de,	// (0x000302fc) grid_cams_pane

0x25f8,	// (0x00030316) linegrid_cams_pane

0x260c,	// (0x0003032a) cell_cams_pane_ParamLimits

0x260c,	// (0x0003032a) cell_cams_pane

0xa4f5,	// (0x00038213) cams_burst_image_pane

0xa4fd,	// (0x0003821b) cell_cams_pane_g1

0x9fc5,	// (0x00037ce3) grid_highlight_pane_cp03

0xa33a,	// (0x00038058) mp_bg_pane_g1

0x9fc5,	// (0x00037ce3) bg_list_pane_cp03

0xc357,	// (0x0003a075) bg_mp_pane

0xc35f,	// (0x0003a07d) grid_mp_pane

0xc367,	// (0x0003a085) media_player_g1

0xc36f,	// (0x0003a08d) media_player_t1

0xc37d,	// (0x0003a09b) media_player_t2

0xc38b,	// (0x0003a0a9) media_player_t3

0xc399,	// (0x0003a0b7) media_player_t4

0xc3a7,	// (0x0003a0c5) media_player_t5

0xc3b5,	// (0x0003a0d3) media_player_t6

0xc3c3,	// (0x0003a0e1) media_player_t7

0x0006,

0xf5cb,	// (0x0003d2e9) media_player_t

0xc3d1,	// (0x0003a0ef) wait_bar_pane_cp02

0xf5b0,	// (0x0003d2ce) main_usb_pane_t

0x4829,	// (0x00032547) cell_mp_pane

0xa33a,	// (0x00038058) cell_mp_pane_g1

0x9fc5,	// (0x00037ce3) grid_highlight_pane_cp06

0xa505,	// (0x00038223) grid_skin_colour_pane

0xa50d,	// (0x0003822b) list_highlight_pane_cp03

0x2743,	// (0x00030461) skin_g1

0xa515,	// (0x00038233) skin_t1

0xa524,	// (0x00038242) skin_t2

0x0001,

0xf264,	// (0x0003cf82) skin_t

0x274b,	// (0x00030469) cell_skin_colour_pane_ParamLimits

0x274b,	// (0x00030469) cell_skin_colour_pane

0xa532,	// (0x00038250) cell_skin_colour_pane_g1

0x27c4,	// (0x000304e2) call_video_g1_ParamLimits

0x27c4,	// (0x000304e2) call_video_g1

0x27e0,	// (0x000304fe) call_video_g2_ParamLimits

0x27e0,	// (0x000304fe) call_video_g2

0x0001,

0xf269,	// (0x0003cf87) call_video_g_ParamLimits

0xf269,	// (0x0003cf87) call_video_g

0x2832,	// (0x00030550) call_video_uplink_pane_cp1_ParamLimits

0x2832,	// (0x00030550) call_video_uplink_pane_cp1

0xa544,	// (0x00038262) call_video_uplink_pane_cp2

0x28d1,	// (0x000305ef) video_down_crop_pane_ParamLimits

0x28d1,	// (0x000305ef) video_down_crop_pane

0x29c8,	// (0x000306e6) video_down_pane_ParamLimits

0x29c8,	// (0x000306e6) video_down_pane

0xa54c,	// (0x0003826a) video_down_subqcif_pane_ParamLimits

0xa54c,	// (0x0003826a) video_down_subqcif_pane

0xa564,	// (0x00038282) video_down_subqcif_pane_cp_ParamLimits

0xa564,	// (0x00038282) video_down_subqcif_pane_cp

0xa58a,	// (0x000382a8) im_reading_pane_ParamLimits

0xa58a,	// (0x000382a8) im_reading_pane

0x2ad6,	// (0x000307f4) im_writing_pane_ParamLimits

0x2ad6,	// (0x000307f4) im_writing_pane

0x2aec,	// (0x0003080a) im_reading_pane_t1

0xa5a4,	// (0x000382c2) list_im_pane

0xa5b5,	// (0x000382d3) scroll_pane_cp07

0x2b25,	// (0x00030843) im_writing_pane_t1_ParamLimits

0x2b25,	// (0x00030843) im_writing_pane_t1

0xa5ce,	// (0x000382ec) im_writing_pane_t2_ParamLimits

0xa5ce,	// (0x000382ec) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003cf91) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003cf91) im_writing_pane_t

0x9fc5,	// (0x00037ce3) input_focus_pane_cp04

0x9fc5,	// (0x00037ce3) input_focus_pane_cp05

0x2b3a,	// (0x00030858) list_im_single_pane_ParamLimits

0x2b3a,	// (0x00030858) list_im_single_pane

0x2b4e,	// (0x0003086c) list_single_im_pane_t1

0x47e9,	// (0x00032507) blid_accuracy_pane

0x47f1,	// (0x0003250f) blid_compass_pane

0x47fb,	// (0x00032519) main_location_t1

0x480b,	// (0x00032529) main_location_t2

0x481b,	// (0x00032539) main_location_t3

0x0002,

0xf5da,	// (0x0003d2f8) main_location_t

0x9fc5,	// (0x00037ce3) aid_levels_location

0xa33a,	// (0x00038058) blid_accuracy_pane_g1

0xa33a,	// (0x00038058) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003cff3) blid_accuracy_pane_g

0xa616,	// (0x00038334) wml_content_pane

0xa654,	// (0x00038372) wml_button_pane_ParamLimits

0xa654,	// (0x00038372) wml_button_pane

0x2b5d,	// (0x0003087b) wml_list_single_large_pane_ParamLimits

0x2b5d,	// (0x0003087b) wml_list_single_large_pane

0x2b72,	// (0x00030890) wml_list_single_medium_pane_ParamLimits

0x2b72,	// (0x00030890) wml_list_single_medium_pane

0x2b88,	// (0x000308a6) wml_list_single_small_pane_ParamLimits

0x2b88,	// (0x000308a6) wml_list_single_small_pane

0xa668,	// (0x00038386) wml_selection_box_pane_ParamLimits

0xa668,	// (0x00038386) wml_selection_box_pane

0xa67b,	// (0x00038399) wml_list_single_pane_t1

0xa68a,	// (0x000383a8) wml_list_single_medium_pane_t1

0xa699,	// (0x000383b7) wml_list_single_large_pane_t1

0xa6a8,	// (0x000383c6) input_focus_pane_cp02_ParamLimits

0xa6a8,	// (0x000383c6) input_focus_pane_cp02

0xa6bb,	// (0x000383d9) wml_selection_box_pane_g1

0xa6c4,	// (0x000383e2) wml_selection_box_pane_t1_ParamLimits

0xa6c4,	// (0x000383e2) wml_selection_box_pane_t1

0xa220,	// (0x00037f3e) bg_wml_button_pane_ParamLimits

0xa220,	// (0x00037f3e) bg_wml_button_pane

0xa6dc,	// (0x000383fa) wml_button_pane_g1

0xa6e4,	// (0x00038402) wml_button_pane_t1

0xa6dc,	// (0x000383fa) wml_button_bg_pane_g1

0xa6f4,	// (0x00038412) wml_button_bg_pane_g2

0xa6fc,	// (0x0003841a) wml_button_bg_pane_g3

0xa704,	// (0x00038422) wml_button_bg_pane_g4

0xa70c,	// (0x0003842a) wml_button_bg_pane_g5

0xa714,	// (0x00038432) wml_button_bg_pane_g6

0xa71c,	// (0x0003843a) wml_button_bg_pane_g7

0xa7d2,	// (0x000384f0) wml_button_bg_pane_g8

0xa7da,	// (0x000384f8) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003cf96) wml_button_bg_pane_g

0x2ba0,	// (0x000308be) bg_list_pane_cp02

0xa7e2,	// (0x00038500) mce_header_pane_ParamLimits

0xa7e2,	// (0x00038500) mce_header_pane

0xa7f8,	// (0x00038516) mce_icon_pane

0xa7f8,	// (0x00038516) mce_image_pane

0xa801,	// (0x0003851f) mce_text_pane_ParamLimits

0xa801,	// (0x0003851f) mce_text_pane

0x2ba8,	// (0x000308c6) scroll_pane_cp03

0xa64c,	// (0x0003836a) scroll_pane_cp04

0xa814,	// (0x00038532) scroll_pane_cp05_ParamLimits

0xa814,	// (0x00038532) scroll_pane_cp05

0x2bb2,	// (0x000308d0) mce_header_field_pane_ParamLimits

0x2bb2,	// (0x000308d0) mce_header_field_pane

0x2bc9,	// (0x000308e7) mce_header_field_pane_2_ParamLimits

0x2bc9,	// (0x000308e7) mce_header_field_pane_2

0x2bdf,	// (0x000308fd) mce_header_field_pane_3

0x2be7,	// (0x00030905) list_single_mce_message_pane_ParamLimits

0x2be7,	// (0x00030905) list_single_mce_message_pane

0x2bfc,	// (0x0003091a) list_single_mce_smart_pane_ParamLimits

0x2bfc,	// (0x0003091a) list_single_mce_smart_pane

0xa820,	// (0x0003853e) input_focus_pane_cp03

0xa829,	// (0x00038547) list_header_data_pane

0x2c1c,	// (0x0003093a) mce_header_field_pane_t1

0x2c2c,	// (0x0003094a) list_single_mce_header_pane_ParamLimits

0x2c2c,	// (0x0003094a) list_single_mce_header_pane

0xa831,	// (0x0003854f) list_single_mce_header_pane_t1

0xa840,	// (0x0003855e) list_single_mce_message_pane_g1

0xa848,	// (0x00038566) list_single_mce_message_pane_t1

0x2c66,	// (0x00030984) bg_cale_heading_pane_cp01_ParamLimits

0x2c66,	// (0x00030984) bg_cale_heading_pane_cp01

0xa856,	// (0x00038574) bg_cale_pane_cp02_ParamLimits

0xa856,	// (0x00038574) bg_cale_pane_cp02

0x2c95,	// (0x000309b3) cale_month_corner_pane

0x2cb4,	// (0x000309d2) cale_month_day_heading_pane_ParamLimits

0x2cb4,	// (0x000309d2) cale_month_day_heading_pane

0x2cfb,	// (0x00030a19) cale_month_pane_g1_ParamLimits

0x2cfb,	// (0x00030a19) cale_month_pane_g1

0x2d1f,	// (0x00030a3d) cale_month_pane_g2_ParamLimits

0x2d1f,	// (0x00030a3d) cale_month_pane_g2

0x2d4f,	// (0x00030a6d) cale_month_pane_g3_ParamLimits

0x2d4f,	// (0x00030a6d) cale_month_pane_g3

0x2d8b,	// (0x00030aa9) cale_month_pane_g4_ParamLimits

0x2d8b,	// (0x00030aa9) cale_month_pane_g4

0x2dc7,	// (0x00030ae5) cale_month_pane_g5_ParamLimits

0x2dc7,	// (0x00030ae5) cale_month_pane_g5

0x2e0f,	// (0x00030b2d) cale_month_pane_g6_ParamLimits

0x2e0f,	// (0x00030b2d) cale_month_pane_g6

0x2e5b,	// (0x00030b79) cale_month_pane_g7_ParamLimits

0x2e5b,	// (0x00030b79) cale_month_pane_g7

0x2eaf,	// (0x00030bcd) cale_month_pane_g8_ParamLimits

0x2eaf,	// (0x00030bcd) cale_month_pane_g8

0x2f03,	// (0x00030c21) cale_month_pane_g9_ParamLimits

0x2f03,	// (0x00030c21) cale_month_pane_g9

0x2f55,	// (0x00030c73) cale_month_pane_g10_ParamLimits

0x2f55,	// (0x00030c73) cale_month_pane_g10

0x2fa7,	// (0x00030cc5) cale_month_pane_g11_ParamLimits

0x2fa7,	// (0x00030cc5) cale_month_pane_g11

0x2ff9,	// (0x00030d17) cale_month_pane_g12_ParamLimits

0x2ff9,	// (0x00030d17) cale_month_pane_g12

0x304b,	// (0x00030d69) cale_month_pane_g13_ParamLimits

0x304b,	// (0x00030d69) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003cfa9) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003cfa9) cale_month_pane_g

0x309d,	// (0x00030dbb) cale_month_week_pane

0x30c1,	// (0x00030ddf) grid_cale_month_pane_ParamLimits

0x30c1,	// (0x00030ddf) grid_cale_month_pane

0x30ff,	// (0x00030e1d) cale_month_day_heading_pane_t1

0x3185,	// (0x00030ea3) cale_month_day_heading_pane_t2

0x3216,	// (0x00030f34) cale_month_day_heading_pane_t3

0x32a7,	// (0x00030fc5) cale_month_day_heading_pane_t4

0x333c,	// (0x0003105a) cale_month_day_heading_pane_t5

0x33dd,	// (0x000310fb) cale_month_day_heading_pane_t6

0x347e,	// (0x0003119c) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003cfc4) cale_month_day_heading_pane_t

0xa450,	// (0x0003816e) bg_cale_side_pane_cp01

0x3527,	// (0x00031245) cale_month_week_pane_t1

0x3540,	// (0x0003125e) cale_month_week_pane_t2

0x3559,	// (0x00031277) cale_month_week_pane_t3

0x3572,	// (0x00031290) cale_month_week_pane_t4

0x358b,	// (0x000312a9) cale_month_week_pane_t5

0x35a4,	// (0x000312c2) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003cfd3) cale_month_week_pane_t

0x35bd,	// (0x000312db) cell_cale_month_pane_ParamLimits

0x35bd,	// (0x000312db) cell_cale_month_pane

0x3711,	// (0x0003142f) cell_cale_month_pane_g1

0x060f,	// (0x0002e32d) cell_cale_month_pane_t1_ParamLimits

0x060f,	// (0x0002e32d) cell_cale_month_pane_t1

0xa45e,	// (0x0003817c) grid_highlight_pane_cp08

0xa33a,	// (0x00038058) main_smil_g1

0x371d,	// (0x0003143b) smil_status_pane

0xa895,	// (0x000385b3) smil_text_pane

0xc277,	// (0x00039f95) bg_popup_call3_rect_pane_g8

0xc27f,	// (0x00039f9d) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d28c) bg_popup_call3_rect_pane_g

0xc4c6,	// (0x0003a1e4) smil_status_volume_pane_g1

0xa89f,	// (0x000385bd) smil_status_pane_t1

0x4b7c,	// (0x0003289a) volume_smil_pane

0xa8b6,	// (0x000385d4) list_smil_text_pane

0x3730,	// (0x0003144e) scroll_pane_cp011

0x373b,	// (0x00031459) smil_text_list_pane_t1_ParamLimits

0x373b,	// (0x00031459) smil_text_list_pane_t1

0x3777,	// (0x00031495) aid_volume_smil_ParamLimits

0x3777,	// (0x00031495) aid_volume_smil

0xa33a,	// (0x00038058) smil_volume_pane_g1

0xa33a,	// (0x00038058) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003cff3) smil_volume_pane_g

0x1dd5,	// (0x0002faf3) listscroll_cale_day_pane

0xa8c0,	// (0x000385de) bg_cale_pane

0xa8d8,	// (0x000385f6) list_cale_pane

0xa8fb,	// (0x00038619) scroll_pane_cp09

0xa90c,	// (0x0003862a) cale_bg_pane_g1

0xa914,	// (0x00038632) cale_bg_pane_g2

0xa91c,	// (0x0003863a) cale_bg_pane_g3

0xa924,	// (0x00038642) cale_bg_pane_g4

0xa92c,	// (0x0003864a) cale_bg_pane_g5

0xa934,	// (0x00038652) cale_bg_pane_g6

0xa93c,	// (0x0003865a) cale_bg_pane_g7

0xa944,	// (0x00038662) cale_bg_pane_g8

0xa94c,	// (0x0003866a) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003cff8) cale_bg_pane_g

0x37a1,	// (0x000314bf) list_cale_time_pane_ParamLimits

0x37a1,	// (0x000314bf) list_cale_time_pane

0xa954,	// (0x00038672) list_cale_time_pane_g1_ParamLimits

0xa954,	// (0x00038672) list_cale_time_pane_g1

0xa960,	// (0x0003867e) list_cale_time_pane_g2_ParamLimits

0xa960,	// (0x0003867e) list_cale_time_pane_g2

0x37b6,	// (0x000314d4) list_cale_time_pane_g3_ParamLimits

0x37b6,	// (0x000314d4) list_cale_time_pane_g3

0x37c4,	// (0x000314e2) list_cale_time_pane_g4_ParamLimits

0x37c4,	// (0x000314e2) list_cale_time_pane_g4

0x37d2,	// (0x000314f0) list_cale_time_pane_g5_ParamLimits

0x37d2,	// (0x000314f0) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003d00b) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003d00b) list_cale_time_pane_g

0xa97a,	// (0x00038698) list_cale_time_pane_t1_ParamLimits

0xa97a,	// (0x00038698) list_cale_time_pane_t1

0xa9a2,	// (0x000386c0) list_cale_time_pane_t2_ParamLimits

0xa9a2,	// (0x000386c0) list_cale_time_pane_t2

0x3ba8,	// (0x000318c6) aid_blid_cardinal_pane

0x3be6,	// (0x00031904) compass_pane_t4

0xa9ca,	// (0x000386e8) list_cale_time_pane_t4_ParamLimits

0xa9ca,	// (0x000386e8) list_cale_time_pane_t4

0x3bf4,	// (0x00031912) compass_pane_t5

0x3c02,	// (0x00031920) compass_pane_t6

0x3c10,	// (0x0003192e) compass_pane_t7

0xae79,	// (0x00038b97) navi_pane_cc_t1

0xb05e,	// (0x00038d7c) aid_phob_thumbnail_center_pane

0x4201,	// (0x00031f1f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003d018) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003d018) list_cale_time_pane_t

0x9c1c,	// (0x0003793a) bg_popup_window_pane_cp02_ParamLimits

0x9c1c,	// (0x0003793a) bg_popup_window_pane_cp02

0xa9f2,	// (0x00038710) heading_pane_cp01_ParamLimits

0xa9f2,	// (0x00038710) heading_pane_cp01

0xa9fe,	// (0x0003871c) loc_req_pane_ParamLimits

0xa9fe,	// (0x0003871c) loc_req_pane

0xaa0e,	// (0x0003872c) loc_type_pane_ParamLimits

0xaa0e,	// (0x0003872c) loc_type_pane

0xaa20,	// (0x0003873e) loc_type_pane_t1_ParamLimits

0xaa20,	// (0x0003873e) loc_type_pane_t1

0xaa32,	// (0x00038750) loc_type_pane_t2_ParamLimits

0xaa32,	// (0x00038750) loc_type_pane_t2

0xaa44,	// (0x00038762) loc_type_pane_t3_ParamLimits

0xaa44,	// (0x00038762) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003d01f) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003d01f) loc_type_pane_t

0xaa56,	// (0x00038774) list_loc_req_pane

0xaa60,	// (0x0003877e) scroll_pane_cp012

0x37e0,	// (0x000314fe) list_single_loc_request_popup_menu_pane_ParamLimits

0x37e0,	// (0x000314fe) list_single_loc_request_popup_menu_pane

0xaa6b,	// (0x00038789) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa6b,	// (0x00038789) list_single_loc_request_popup_menu_pane_g1

0xaa77,	// (0x00038795) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa77,	// (0x00038795) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003d026) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003d026) list_single_loc_request_popup_menu_pane_g

0xaa83,	// (0x000387a1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa83,	// (0x000387a1) list_single_loc_request_popup_menu_pane_t1

0xa220,	// (0x00037f3e) bg_popup_window_pane_cp03_ParamLimits

0xa220,	// (0x00037f3e) bg_popup_window_pane_cp03

0xaa99,	// (0x000387b7) heading_loc_req_pane_ParamLimits

0xaa99,	// (0x000387b7) heading_loc_req_pane

0x37ed,	// (0x0003150b) popup_dyc_status_message_window_g1_ParamLimits

0x37ed,	// (0x0003150b) popup_dyc_status_message_window_g1

0x3801,	// (0x0003151f) popup_dyc_status_message_window_t1_ParamLimits

0x3801,	// (0x0003151f) popup_dyc_status_message_window_t1

0x3816,	// (0x00031534) popup_dyc_status_message_window_t2_ParamLimits

0x3816,	// (0x00031534) popup_dyc_status_message_window_t2

0x382b,	// (0x00031549) popup_dyc_status_message_window_t3_ParamLimits

0x382b,	// (0x00031549) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003d02b) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003d02b) popup_dyc_status_message_window_t

0x9fc5,	// (0x00037ce3) bg_heading_pane_cp01

0xaaa5,	// (0x000387c3) heading_loc_req_pane_g1

0xaaad,	// (0x000387cb) heading_loc_req_pane_g2

0xaab5,	// (0x000387d3) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003d032) heading_loc_req_pane_g

0xaabd,	// (0x000387db) heading_loc_req_pane_t1

0xaacc,	// (0x000387ea) bg_popup_sub_pane_cp01_ParamLimits

0xaacc,	// (0x000387ea) bg_popup_sub_pane_cp01

0xaada,	// (0x000387f8) popup_cale_events_window_g1_ParamLimits

0xaada,	// (0x000387f8) popup_cale_events_window_g1

0xaafa,	// (0x00038818) popup_cale_events_window_g2_ParamLimits

0xaafa,	// (0x00038818) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003d066) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003d066) popup_cale_events_window_g

0xab1a,	// (0x00038838) popup_cale_events_window_t1_ParamLimits

0xab1a,	// (0x00038838) popup_cale_events_window_t1

0xab2c,	// (0x0003884a) popup_cale_events_window_t2_ParamLimits

0xab2c,	// (0x0003884a) popup_cale_events_window_t2

0xab6a,	// (0x00038888) popup_cale_events_window_t3_ParamLimits

0xab6a,	// (0x00038888) popup_cale_events_window_t3

0xaba4,	// (0x000388c2) popup_cale_events_window_t4_ParamLimits

0xaba4,	// (0x000388c2) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003d06b) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003d06b) popup_cale_events_window_t

0x3930,	// (0x0003164e) call_type_pane

0x3940,	// (0x0003165e) popup_call_status_window_g1

0x3954,	// (0x00031672) popup_call_status_window_g2

0x3968,	// (0x00031686) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003d074) popup_call_status_window_g

0xabda,	// (0x000388f8) call_type_pane_g1

0xabe3,	// (0x00038901) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003d07b) call_type_pane_g

0x9fc5,	// (0x00037ce3) bg_popup_sub_pane_cp02

0xabec,	// (0x0003890a) listscroll_popup_wml_pane

0xabf4,	// (0x00038912) list_wml_pane

0xabfe,	// (0x0003891c) scroll_pane_cp013

0xac09,	// (0x00038927) list_single_graphic_popup_wml_pane_ParamLimits

0xac09,	// (0x00038927) list_single_graphic_popup_wml_pane

0xa33a,	// (0x00038058) list_single_graphic_popup_wml_pane_g1

0xac1d,	// (0x0003893b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003d080) list_single_graphic_popup_wml_pane_g

0xac25,	// (0x00038943) list_single_graphic_popup_wml_pane_t1

0xac3b,	// (0x00038959) aid_call_pane

0xa218,	// (0x00037f36) popup_clock_analogue_window_g1

0xa218,	// (0x00037f36) popup_clock_analogue_window_g2

0x3977,	// (0x00031695) popup_clock_analogue_window_g3

0x3977,	// (0x00031695) popup_clock_analogue_window_g4

0xa33a,	// (0x00038058) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003d085) popup_clock_analogue_window_g

0x397f,	// (0x0003169d) popup_clock_analogue_window_t1

0x398d,	// (0x000316ab) clock_digital_number_pane_ParamLimits

0x398d,	// (0x000316ab) clock_digital_number_pane

0x3999,	// (0x000316b7) clock_digital_number_pane_cp02_ParamLimits

0x3999,	// (0x000316b7) clock_digital_number_pane_cp02

0x39a5,	// (0x000316c3) clock_digital_number_pane_cp03_ParamLimits

0x39a5,	// (0x000316c3) clock_digital_number_pane_cp03

0x39b1,	// (0x000316cf) clock_digital_number_pane_cp04_ParamLimits

0x39b1,	// (0x000316cf) clock_digital_number_pane_cp04

0x39c1,	// (0x000316df) clock_digital_separator_pane_ParamLimits

0x39c1,	// (0x000316df) clock_digital_separator_pane

0x39cd,	// (0x000316eb) popup_clock_digital_window_t1

0xa33a,	// (0x00038058) clock_digital_number_pane_g1

0xa33a,	// (0x00038058) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003cff3) clock_digital_number_pane_g

0xa33a,	// (0x00038058) clock_digital_separator_pane_g1

0xa33a,	// (0x00038058) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003cff3) clock_digital_separator_pane_g

0x9fc5,	// (0x00037ce3) bg_popup_window_pane_cp04

0xac43,	// (0x00038961) heading_pane_cp03

0xac4b,	// (0x00038969) listscroll_popup_gms_pane

0xac53,	// (0x00038971) grid_large_graphic_popup_pane

0xac5d,	// (0x0003897b) listscroll_popup_gms_pane_g1

0xac65,	// (0x00038983) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003d090) listscroll_popup_gms_pane_g

0xa64c,	// (0x0003836a) scroll_pane_cp014

0x39ea,	// (0x00031708) cell_large_graphic_popup_pane_ParamLimits

0x39ea,	// (0x00031708) cell_large_graphic_popup_pane

0x3a02,	// (0x00031720) cell_large_graphic_popup_pane_g1_ParamLimits

0x3a02,	// (0x00031720) cell_large_graphic_popup_pane_g1

0xac6d,	// (0x0003898b) cell_large_graphic_popup_pane_g2_ParamLimits

0xac6d,	// (0x0003898b) cell_large_graphic_popup_pane_g2

0xac79,	// (0x00038997) cell_large_graphic_popup_pane_g3_ParamLimits

0xac79,	// (0x00038997) cell_large_graphic_popup_pane_g3

0xac86,	// (0x000389a4) cell_large_graphic_popup_pane_g4_ParamLimits

0xac86,	// (0x000389a4) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003d095) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003d095) cell_large_graphic_popup_pane_g

0xac96,	// (0x000389b4) grid_highlight_pane_cp010

0xa33a,	// (0x00038058) bg_popup_call_pane_g1

0xaca0,	// (0x000389be) list_single_graphic_popup_conf_pane_ParamLimits

0xaca0,	// (0x000389be) list_single_graphic_popup_conf_pane

0xacb3,	// (0x000389d1) list_highlight_pane_cp01

0xacbc,	// (0x000389da) list_single_graphic_popup_conf_pane_g1

0xacc4,	// (0x000389e2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003d09e) list_single_graphic_popup_conf_pane_g

0xaccc,	// (0x000389ea) list_single_graphic_popup_conf_pane_t1

0xacda,	// (0x000389f8) linegrid_cams_pane_g1

0x3a0e,	// (0x0003172c) linegrid_cams_pane_g2

0xa491,	// (0x000381af) linegrid_cams_pane_g3

0xace3,	// (0x00038a01) linegrid_cams_pane_g4

0x3a17,	// (0x00031735) linegrid_cams_pane_g5

0x3a20,	// (0x0003173e) linegrid_cams_pane_g6

0xa49a,	// (0x000381b8) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003d0a3) linegrid_cams_pane_g

0xacec,	// (0x00038a0a) popup_clock_analogue_window

0xacec,	// (0x00038a0a) popup_clock_digital_window

0x9fc5,	// (0x00037ce3) popup_phob_thumbnail_window

0xa33a,	// (0x00038058) call_video_uplink_pane_g1

0xacf5,	// (0x00038a13) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003d0b2) call_video_uplink_pane_g

0xacfd,	// (0x00038a1b) video_uplink_pane

0xad05,	// (0x00038a23) mce_image_pane_g1

0x3a2b,	// (0x00031749) mce_image_pane_g2

0x3a35,	// (0x00031753) mce_image_pane_g3

0x3a3d,	// (0x0003175b) mce_image_pane_g4

0x3a45,	// (0x00031763) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003d0b7) mce_image_pane_g

0xad0f,	// (0x00038a2d) control_top_pane_stacon_cp01_ParamLimits

0xad0f,	// (0x00038a2d) control_top_pane_stacon_cp01

0xad23,	// (0x00038a41) uni_indicator_pane_stacon_cp01_ParamLimits

0xad23,	// (0x00038a41) uni_indicator_pane_stacon_cp01

0xad34,	// (0x00038a52) bg_popup_sub_pane_cp03

0xad3e,	// (0x00038a5c) chi_dic_find_pane

0x3a4d,	// (0x0003176b) listscroll_chi_dic_pane

0xad46,	// (0x00038a64) main_pane_chidic_g1

0xad4e,	// (0x00038a6c) chi_dic_find_pane_t1

0xad5c,	// (0x00038a7a) find_chidic_pane

0xad65,	// (0x00038a83) chi_dic_list_pane_ParamLimits

0xad65,	// (0x00038a83) chi_dic_list_pane

0xad76,	// (0x00038a94) scroll_pane_cp020

0xad7e,	// (0x00038a9c) find_chidic_pane_t1

0x9fc5,	// (0x00037ce3) input_focus_pane_cp06

0x3a61,	// (0x0003177f) list_chi_dic_pane_ParamLimits

0x3a61,	// (0x0003177f) list_chi_dic_pane

0x3a73,	// (0x00031791) list_chi_dic_pane_t1_ParamLimits

0x3a73,	// (0x00031791) list_chi_dic_pane_t1

0x9fc5,	// (0x00037ce3) list_highlight_pane_cp020

0xad8d,	// (0x00038aab) bg_cale_heading_pane_g1

0x3a86,	// (0x000317a4) bg_cale_heading_pane_g2

0x3a8e,	// (0x000317ac) bg_cale_heading_pane_g3

0x3a96,	// (0x000317b4) bg_cale_heading_pane_g4

0x3aa0,	// (0x000317be) bg_cale_heading_pane_g5

0x3aaa,	// (0x000317c8) bg_cale_heading_pane_g6

0x3ab2,	// (0x000317d0) bg_cale_heading_pane_g7

0x3aba,	// (0x000317d8) bg_cale_heading_pane_g8

0x3ac4,	// (0x000317e2) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003d0c2) bg_cale_heading_pane_g

0xad8d,	// (0x00038aab) bg_cale_side_pane_g1

0x3ace,	// (0x000317ec) bg_cale_side_pane_g2

0x3ad6,	// (0x000317f4) bg_cale_side_pane_g3

0x3ade,	// (0x000317fc) bg_cale_side_pane_g4

0x3ae6,	// (0x00031804) bg_cale_side_pane_g5

0x3aee,	// (0x0003180c) bg_cale_side_pane_g6

0x3af6,	// (0x00031814) bg_cale_side_pane_g7

0x3afe,	// (0x0003181c) bg_cale_side_pane_g8

0x3b06,	// (0x00031824) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003d0d5) bg_cale_side_pane_g

0x3b0e,	// (0x0003182c) popup_call_status_window_ParamLimits

0x3b0e,	// (0x0003182c) popup_call_status_window

0xad95,	// (0x00038ab3) stacon_top_pane

0xad9d,	// (0x00038abb) status_pane_ParamLimits

0xad9d,	// (0x00038abb) status_pane

0xadb2,	// (0x00038ad0) status_small_pane

0xadba,	// (0x00038ad8) control_pane

0x9fc5,	// (0x00037ce3) stacon_bottom_pane

0xadc2,	// (0x00038ae0) list_single_mce_smart_pane_t1_ParamLimits

0xadc2,	// (0x00038ae0) list_single_mce_smart_pane_t1

0xadd5,	// (0x00038af3) list_single_mce_smart_pane_t2_ParamLimits

0xadd5,	// (0x00038af3) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003d0e8) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003d0e8) list_single_mce_smart_pane_t

0x3b57,	// (0x00031875) compass_pane

0x3b60,	// (0x0003187e) main_location2_pane_t1

0x3b72,	// (0x00031890) main_location2_pane_t2

0x3b84,	// (0x000318a2) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003d0ed) main_location2_pane_t

0xadf4,	// (0x00038b12) compass_pane_g1_ParamLimits

0xadf4,	// (0x00038b12) compass_pane_g1

0x3bc8,	// (0x000318e6) compass_pane_t1

0x3bd7,	// (0x000318f5) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003d0f6) compass_pane_t

0x3c1e,	// (0x0003193c) text_secondary_cp61

0xae70,	// (0x00038b8e) navi_pane_cams_g5

0xaeec,	// (0x00038c0a) navi_pane_im_t1

0xaefa,	// (0x00038c18) navi_pane_mp_g1_ParamLimits

0xaefa,	// (0x00038c18) navi_pane_mp_g1

0xaf0e,	// (0x00038c2c) navi_pane_mp_g2_ParamLimits

0xaf0e,	// (0x00038c2c) navi_pane_mp_g2

0xaf1a,	// (0x00038c38) navi_pane_mp_g3_ParamLimits

0xaf1a,	// (0x00038c38) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003d10a) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003d10a) navi_pane_mp_g

0xaf26,	// (0x00038c44) navi_pane_mp_t1

0xaf34,	// (0x00038c52) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003d111) navi_pane_mp_t

0xaf9f,	// (0x00038cbd) navi_pane_vt_g1

0xaf26,	// (0x00038c44) navi_pane_vt_t1

0xafa7,	// (0x00038cc5) navi_slider_pane

0xafb7,	// (0x00038cd5) zooming_pane

0xafbf,	// (0x00038cdd) navi_slider_pane_g1

0x3c6f,	// (0x0003198d) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003d118) navi_slider_pane_g

0xafe3,	// (0x00038d01) aid_levels_zoom

0xafeb,	// (0x00038d09) zooming_pane_g1

0xaff3,	// (0x00038d11) zooming_pane_g2

0xaff3,	// (0x00038d11) zooming_pane_g3

0x0002,

0xf409,	// (0x0003d127) zooming_pane_g

0xaffb,	// (0x00038d19) level_10_zoom

0xb004,	// (0x00038d22) level_11_zoom

0xb00d,	// (0x00038d2b) level_1_zoom

0xb016,	// (0x00038d34) level_2_zoom

0xb01f,	// (0x00038d3d) level_3_zoom

0xb028,	// (0x00038d46) level_4_zoom

0xb031,	// (0x00038d4f) level_5_zoom

0xb03a,	// (0x00038d58) level_6_zoom

0xb043,	// (0x00038d61) level_7_zoom

0xb04c,	// (0x00038d6a) level_8_zoom

0xb055,	// (0x00038d73) level_9_zoom

0xb066,	// (0x00038d84) popup_phob_thumbnail_window_g1

0xb06e,	// (0x00038d8c) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003d12e) popup_phob_thumbnail_window_g

0xc3d9,	// (0x0003a0f7) level_1_location

0xc3e1,	// (0x0003a0ff) level_2_location

0xc3e9,	// (0x0003a107) level_3_location

0xc3f1,	// (0x0003a10f) level_4_location

0xafb7,	// (0x00038cd5) level_5_location

0x3c81,	// (0x0003199f) mce_icon_pane_g1

0x3c8b,	// (0x000319a9) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003d133) mce_icon_pane_g

0x3c93,	// (0x000319b1) main_mup_pane_g1_ParamLimits

0x3c93,	// (0x000319b1) main_mup_pane_g1

0x3ca9,	// (0x000319c7) main_mup_pane_g2_ParamLimits

0x3ca9,	// (0x000319c7) main_mup_pane_g2

0x3cc1,	// (0x000319df) main_mup_pane_g3_ParamLimits

0x3cc1,	// (0x000319df) main_mup_pane_g3

0x3cd9,	// (0x000319f7) main_mup_pane_g4_ParamLimits

0x3cd9,	// (0x000319f7) main_mup_pane_g4

0x3cf1,	// (0x00031a0f) main_mup_pane_g5_ParamLimits

0x3cf1,	// (0x00031a0f) main_mup_pane_g5

0x3d0d,	// (0x00031a2b) main_mup_pane_g6_ParamLimits

0x3d0d,	// (0x00031a2b) main_mup_pane_g6

0x3d25,	// (0x00031a43) main_mup_pane_g7_ParamLimits

0x3d25,	// (0x00031a43) main_mup_pane_g7

0x3d3d,	// (0x00031a5b) main_mup_pane_g8_ParamLimits

0x3d3d,	// (0x00031a5b) main_mup_pane_g8

0x3d57,	// (0x00031a75) main_mup_pane_g9_ParamLimits

0x3d57,	// (0x00031a75) main_mup_pane_g9

0x3d71,	// (0x00031a8f) main_mup_pane_g10_ParamLimits

0x3d71,	// (0x00031a8f) main_mup_pane_g10

0x3d8b,	// (0x00031aa9) main_mup_pane_g11_ParamLimits

0x3d8b,	// (0x00031aa9) main_mup_pane_g11

0x3d9f,	// (0x00031abd) main_mup_pane_g12_ParamLimits

0x3d9f,	// (0x00031abd) main_mup_pane_g12

0x3db5,	// (0x00031ad3) main_mup_pane_g13_ParamLimits

0x3db5,	// (0x00031ad3) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003d138) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003d138) main_mup_pane_g

0x3dc9,	// (0x00031ae7) main_mup_pane_t1_ParamLimits

0x3dc9,	// (0x00031ae7) main_mup_pane_t1

0x3de3,	// (0x00031b01) main_mup_pane_t2_ParamLimits

0x3de3,	// (0x00031b01) main_mup_pane_t2

0x3dfb,	// (0x00031b19) main_mup_pane_t3_ParamLimits

0x3dfb,	// (0x00031b19) main_mup_pane_t3

0x3e13,	// (0x00031b31) main_mup_pane_t4_ParamLimits

0x3e13,	// (0x00031b31) main_mup_pane_t4

0x3e31,	// (0x00031b4f) main_mup_pane_t5_ParamLimits

0x3e31,	// (0x00031b4f) main_mup_pane_t5

0x3e46,	// (0x00031b64) main_mup_pane_t6_ParamLimits

0x3e46,	// (0x00031b64) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003d153) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003d153) main_mup_pane_t

0x3e58,	// (0x00031b76) mup_progress_pane_ParamLimits

0x3e58,	// (0x00031b76) mup_progress_pane

0x3e64,	// (0x00031b82) mup_visualizer_pane_ParamLimits

0x3e64,	// (0x00031b82) mup_visualizer_pane

0x3e94,	// (0x00031bb2) mup_volume_pane_ParamLimits

0x3e94,	// (0x00031bb2) mup_volume_pane

0xb076,	// (0x00038d94) mup_visualizer_pane_g1_ParamLimits

0xb076,	// (0x00038d94) mup_visualizer_pane_g1

0xb076,	// (0x00038d94) mup_visualizer_pane_g2_ParamLimits

0xb076,	// (0x00038d94) mup_visualizer_pane_g2

0xadf4,	// (0x00038b12) mup_visualizer_pane_g3_ParamLimits

0xadf4,	// (0x00038b12) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003d160) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003d160) mup_visualizer_pane_g

0xa33a,	// (0x00038058) mup_volume_pane_g1

0xb08c,	// (0x00038daa) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003d167) mup_volume_pane_g

0xa33a,	// (0x00038058) mup_progress_pane_g1

0xb095,	// (0x00038db3) mup_progress_pane_g2

0xb09e,	// (0x00038dbc) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003d16c) mup_progress_pane_g

0x9fc5,	// (0x00037ce3) bg_popup_window_pane_cp05

0xb0a7,	// (0x00038dc5) heading_pane_cp02_ParamLimits

0xb0a7,	// (0x00038dc5) heading_pane_cp02

0xb0c1,	// (0x00038ddf) list_popup_blid_pane

0xb0c9,	// (0x00038de7) list_blid_sat_info_pane_ParamLimits

0xb0c9,	// (0x00038de7) list_blid_sat_info_pane

0xb0dc,	// (0x00038dfa) list_blid_sat_info_pane_g1

0xb0e4,	// (0x00038e02) list_blid_sat_info_pane_t1

0x3faa,	// (0x00031cc8) mup_equalizer_pane_ParamLimits

0x3faa,	// (0x00031cc8) mup_equalizer_pane

0x3fc3,	// (0x00031ce1) mup_equalizer_pane_cp1_ParamLimits

0x3fc3,	// (0x00031ce1) mup_equalizer_pane_cp1

0x3fe0,	// (0x00031cfe) mup_equalizer_pane_cp2_ParamLimits

0x3fe0,	// (0x00031cfe) mup_equalizer_pane_cp2

0x3ffd,	// (0x00031d1b) mup_equalizer_pane_cp3_ParamLimits

0x3ffd,	// (0x00031d1b) mup_equalizer_pane_cp3

0x401e,	// (0x00031d3c) mup_equalizer_pane_cp4_ParamLimits

0x401e,	// (0x00031d3c) mup_equalizer_pane_cp4

0x403f,	// (0x00031d5d) mup_equalizer_pane_cp5

0x4053,	// (0x00031d71) mup_equalizer_pane_cp6

0x4067,	// (0x00031d85) mup_equalizer_pane_cp7

0xc2f7,	// (0x0003a015) bg_popup_call_poc_act_pane_g9

0xc2ff,	// (0x0003a01d) bg_popup_call_poc_act_pane_g10

0xc307,	// (0x0003a025) bg_popup_call_poc_act_pane_g11

0x000a,

0xa220,	// (0x00037f3e) mup_scale_pane

0xa33a,	// (0x00038058) mup_scale_pane_g1

0xb0f2,	// (0x00038e10) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003d188) mup_scale_pane_g

0xb116,	// (0x00038e34) msg_data_pane

0xb11e,	// (0x00038e3c) scroll_pane_cp017

0x408d,	// (0x00031dab) bg_list_pane_cp04_ParamLimits

0x408d,	// (0x00031dab) bg_list_pane_cp04

0xb12e,	// (0x00038e4c) msg_data_pane_g1

0x40a5,	// (0x00031dc3) msg_data_pane_g2

0x40af,	// (0x00031dcd) msg_data_pane_g3

0x40b7,	// (0x00031dd5) msg_data_pane_g4

0x40bf,	// (0x00031ddd) msg_data_pane_g5

0x40c7,	// (0x00031de5) msg_data_pane_g6

0x40cf,	// (0x00031ded) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003d197) msg_data_pane_g

0x40d7,	// (0x00031df5) msg_text_pane_ParamLimits

0x40d7,	// (0x00031df5) msg_text_pane

0x40fb,	// (0x00031e19) qrid_highlight_pane_cp011_ParamLimits

0x40fb,	// (0x00031e19) qrid_highlight_pane_cp011

0x9fc5,	// (0x00037ce3) msg_body_pane

0x9fc5,	// (0x00037ce3) msg_header_pane

0xb13f,	// (0x00038e5d) input_focus_pane_cp07

0xb154,	// (0x00038e72) msg_header_pane_t1_ParamLimits

0xb154,	// (0x00038e72) msg_header_pane_t1

0xb166,	// (0x00038e84) msg_header_pane_t2_ParamLimits

0xb166,	// (0x00038e84) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003d1ab) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003d1ab) msg_header_pane_t

0xb178,	// (0x00038e96) msg_body_pane_g1

0xb180,	// (0x00038e9e) msg_body_pane_t1_ParamLimits

0xb180,	// (0x00038e9e) msg_body_pane_t1

0xb1b1,	// (0x00038ecf) msg_body_pane_t2_ParamLimits

0xb1b1,	// (0x00038ecf) msg_body_pane_t2

0xb1c3,	// (0x00038ee1) msg_body_pane_t3_ParamLimits

0xb1c3,	// (0x00038ee1) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003d1b0) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003d1b0) msg_body_pane_t

0x064b,	// (0x0002e369) main_viewer_pane_g1_ParamLimits

0x064b,	// (0x0002e369) main_viewer_pane_g1

0x0659,	// (0x0002e377) main_viewer_pane_g2_ParamLimits

0x0659,	// (0x0002e377) main_viewer_pane_g2

0x4155,	// (0x00031e73) main_viewer_pane_g3_ParamLimits

0x4155,	// (0x00031e73) main_viewer_pane_g3

0x4164,	// (0x00031e82) main_viewer_pane_g4_ParamLimits

0x4164,	// (0x00031e82) main_viewer_pane_g4

0x4173,	// (0x00031e91) main_viewer_pane_g5_ParamLimits

0x4173,	// (0x00031e91) main_viewer_pane_g5

0x4173,	// (0x00031e91) main_viewer_pane_g7_ParamLimits

0x4173,	// (0x00031e91) main_viewer_pane_g7

0xaa6b,	// (0x00038789) main_viewer_pane_g8_ParamLimits

0xaa6b,	// (0x00038789) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003d1c0) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003d1c0) main_viewer_pane_g

0xb1d5,	// (0x00038ef3) viewer_content_pane_ParamLimits

0xb1d5,	// (0x00038ef3) viewer_content_pane

0x41be,	// (0x00031edc) main_postcard_pane_g1_ParamLimits

0x41be,	// (0x00031edc) main_postcard_pane_g1

0x41d4,	// (0x00031ef2) main_postcard_pane_g2_ParamLimits

0x41d4,	// (0x00031ef2) main_postcard_pane_g2

0x41ea,	// (0x00031f08) main_postcard_pane_g3_ParamLimits

0x41ea,	// (0x00031f08) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003d1d1) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003d1d1) main_postcard_pane_g

0x4201,	// (0x00031f1f) main_postcard_pane_g4

0xc4d9,	// (0x0003a1f7) smil_status_volume_pane_g2

0x4244,	// (0x00031f62) postcard_pane_ParamLimits

0x4244,	// (0x00031f62) postcard_pane

0xb1e3,	// (0x00038f01) postcard_pane_g1_ParamLimits

0xb1e3,	// (0x00038f01) postcard_pane_g1

0x4286,	// (0x00031fa4) postcard_pane_g2_ParamLimits

0x4286,	// (0x00031fa4) postcard_pane_g2

0x4292,	// (0x00031fb0) postcard_pane_g3_ParamLimits

0x4292,	// (0x00031fb0) postcard_pane_g3

0xb1f1,	// (0x00038f0f) postcard_pane_g4_ParamLimits

0xb1f1,	// (0x00038f0f) postcard_pane_g4

0x429e,	// (0x00031fbc) postcard_pane_g5_ParamLimits

0x429e,	// (0x00031fbc) postcard_pane_g5

0x42b3,	// (0x00031fd1) postcard_pane_g6_ParamLimits

0x42b3,	// (0x00031fd1) postcard_pane_g6

0xb1e3,	// (0x00038f01) postcard_pane_g7_ParamLimits

0xb1e3,	// (0x00038f01) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003d1de) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003d1de) postcard_pane_g

0x42c7,	// (0x00031fe5) main_mp2_pane_g1_ParamLimits

0x42c7,	// (0x00031fe5) main_mp2_pane_g1

0x42d3,	// (0x00031ff1) main_mp2_pane_g2_ParamLimits

0x42d3,	// (0x00031ff1) main_mp2_pane_g2

0x42df,	// (0x00031ffd) main_mp2_pane_g3_ParamLimits

0x42df,	// (0x00031ffd) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003d1ed) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003d1ed) main_mp2_pane_g

0x42eb,	// (0x00032009) main_mp2_pane_t1_ParamLimits

0x42eb,	// (0x00032009) main_mp2_pane_t1

0x4300,	// (0x0003201e) main_mp2_pane_t2_ParamLimits

0x4300,	// (0x0003201e) main_mp2_pane_t2

0x4312,	// (0x00032030) main_mp2_pane_t3_ParamLimits

0x4312,	// (0x00032030) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003d1f4) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003d1f4) main_mp2_pane_t

0xb1ff,	// (0x00038f1d) pec_content_pane_ParamLimits

0xb1ff,	// (0x00038f1d) pec_content_pane

0xa64c,	// (0x0003836a) scroll_pane_cp015

0xb211,	// (0x00038f2f) pec_attribute_pane_ParamLimits

0xb211,	// (0x00038f2f) pec_attribute_pane

0x4324,	// (0x00032042) pec_content_pane_g1_ParamLimits

0x4324,	// (0x00032042) pec_content_pane_g1

0xb221,	// (0x00038f3f) pec_content_pane_t1_ParamLimits

0xb221,	// (0x00038f3f) pec_content_pane_t1

0xb233,	// (0x00038f51) pec_content_pane_t2_ParamLimits

0xb233,	// (0x00038f51) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003d1fb) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003d1fb) pec_content_pane_t

0x4330,	// (0x0003204e) list_single_graphic_pane_cp01_ParamLimits

0x4330,	// (0x0003204e) list_single_graphic_pane_cp01

0xa220,	// (0x00037f3e) bg_popup_sub_pane_cp04

0xb245,	// (0x00038f63) popup_mup_playback_window_g1

0xb251,	// (0x00038f6f) popup_mup_playback_window_t1

0xb266,	// (0x00038f84) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003d200) popup_mup_playback_window_t

0xb29d,	// (0x00038fbb) main_image_pane_g1_ParamLimits

0xb29d,	// (0x00038fbb) main_image_pane_g1

0xb2e0,	// (0x00038ffe) scroll_pane_cp018_ParamLimits

0xb2e0,	// (0x00038ffe) scroll_pane_cp018

0xb2f8,	// (0x00039016) scroll_pane_cp016_ParamLimits

0xb2f8,	// (0x00039016) scroll_pane_cp016

0x43fd,	// (0x0003211b) smil2_image_pane_ParamLimits

0x43fd,	// (0x0003211b) smil2_image_pane

0x442d,	// (0x0003214b) smil2_root_pane_ParamLimits

0x442d,	// (0x0003214b) smil2_root_pane

0x4465,	// (0x00032183) smil2_text_pane_ParamLimits

0x4465,	// (0x00032183) smil2_text_pane

0x9fc5,	// (0x00037ce3) bg_list_pane_cp06

0xb334,	// (0x00039052) grid_radio_pane

0x9fc5,	// (0x00037ce3) bg_popup_window_pane_cp06

0xb33c,	// (0x0003905a) main_fmradio_pane_t1

0xac43,	// (0x00038961) heading_pane_cp04

0xb34a,	// (0x00039068) main_fmradio_pane_t2

0xc30f,	// (0x0003a02d) popup_cale_lunar_info_window_g1

0xb358,	// (0x00039076) main_fmradio_pane_t3

0xc317,	// (0x0003a035) popup_cale_lunar_info_window_g2

0xb366,	// (0x00039084) main_fmradio_pane_t4

0x0001,

0xb374,	// (0x00039092) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0003d2db) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003d215) main_fmradio_pane_t

0xb382,	// (0x000390a0) wait_bar_pane_cp03

0xb38a,	// (0x000390a8) cell_fmradio_pane_ParamLimits

0xb38a,	// (0x000390a8) cell_fmradio_pane

0xb1e3,	// (0x00038f01) cell_fmradio_pane_g1_ParamLimits

0xb1e3,	// (0x00038f01) cell_fmradio_pane_g1

0x9fc5,	// (0x00037ce3) grid_highlight_pane_cp011

0xb39d,	// (0x000390bb) poc_content_pane_ParamLimits

0xb39d,	// (0x000390bb) poc_content_pane

0xb3af,	// (0x000390cd) scroll_pane_cp019

0x44e5,	// (0x00032203) popup_call_poc_act_window_ParamLimits

0x44e5,	// (0x00032203) popup_call_poc_act_window

0x4509,	// (0x00032227) popup_call_poc_inact_window_ParamLimits

0x4509,	// (0x00032227) popup_call_poc_inact_window

0xf594,	// (0x0003d2b2) bg_popup_call_poc_act_pane_g

0xc287,	// (0x00039fa5) bg_popup_call_poc_inact_pane_g1

0xc28f,	// (0x00039fad) bg_popup_call_poc_inact_pane_g2

0xb3b7,	// (0x000390d5) popup_call_poc_act_window_g2

0xc297,	// (0x00039fb5) bg_popup_call_poc_inact_pane_g3

0xc29f,	// (0x00039fbd) bg_popup_call_poc_inact_pane_g4

0xc2a7,	// (0x00039fc5) bg_popup_call_poc_inact_pane_g5

0xb3bf,	// (0x000390dd) popup_call_poc_act_window_t1_ParamLimits

0xb3bf,	// (0x000390dd) popup_call_poc_act_window_t1

0xb3e7,	// (0x00039105) popup_call_poc_act_window_t2_ParamLimits

0xb3e7,	// (0x00039105) popup_call_poc_act_window_t2

0xb40f,	// (0x0003912d) popup_call_poc_act_window_t3_ParamLimits

0xb40f,	// (0x0003912d) popup_call_poc_act_window_t3

0xb437,	// (0x00039155) popup_call_poc_act_window_t4_ParamLimits

0xb437,	// (0x00039155) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003d220) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003d220) popup_call_poc_act_window_t

0xc2af,	// (0x00039fcd) bg_popup_call_poc_inact_pane_g6

0xc2b7,	// (0x00039fd5) bg_popup_call_poc_inact_pane_g7

0xc2bf,	// (0x00039fdd) bg_popup_call_poc_inact_pane_g8

0xb449,	// (0x00039167) popup_call_poc_inact_window_g2

0xc2c7,	// (0x00039fe5) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0003d29f) bg_popup_call_poc_inact_pane_g

0xb451,	// (0x0003916f) popup_call_poc_inact_window_t1_ParamLimits

0xb451,	// (0x0003916f) popup_call_poc_inact_window_t1

0xb466,	// (0x00039184) popup_call_poc_inact_window_t2_ParamLimits

0xb466,	// (0x00039184) popup_call_poc_inact_window_t2

0xb47b,	// (0x00039199) popup_call_poc_inact_window_t3_ParamLimits

0xb47b,	// (0x00039199) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003d229) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003d229) popup_call_poc_inact_window_t

0xc44c,	// (0x0003a16a) context_pane_ParamLimits

0x4ae2,	// (0x00032800) signal_pane_ParamLimits

0xafb7,	// (0x00038cd5) main_call2_pane

0x4a71,	// (0x0003278f) popup_phob_thumbnail2_window_ParamLimits

0x4a71,	// (0x0003278f) popup_phob_thumbnail2_window

0x411f,	// (0x00031e3d) aid_hotspot_pointer_arrow_pane

0x4127,	// (0x00031e45) aid_hotspot_pointer_hand_pane

0x4852,	// (0x00032570) phob_pre_status_pane_g5

0x2351,	// (0x0003006f) cams_zoom_pane_ParamLimits

0x2360,	// (0x0003007e) image_vga_pane_ParamLimits

0x237a,	// (0x00030098) main_camera_pane_g1_ParamLimits

0x238c,	// (0x000300aa) main_camera_pane_g2_ParamLimits

0x239c,	// (0x000300ba) main_camera_pane_g3_ParamLimits

0x23ac,	// (0x000300ca) main_camera_pane_g4_ParamLimits

0x23bc,	// (0x000300da) main_camera_pane_g5_ParamLimits

0x23cc,	// (0x000300ea) main_camera_pane_g6_ParamLimits

0x23de,	// (0x000300fc) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003cf28) main_camera_pane_g_ParamLimits

0x23ee,	// (0x0003010c) main_camera_pane_t1_ParamLimits

0x2404,	// (0x00030122) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003cf39) main_camera_pane_t_ParamLimits

0xa220,	// (0x00037f3e) bg_popup_preview_window_pane_cp01_ParamLimits

0xa220,	// (0x00037f3e) bg_popup_preview_window_pane_cp01

0xb490,	// (0x000391ae) popup_phob_thumbnail2_window_g1_ParamLimits

0xb490,	// (0x000391ae) popup_phob_thumbnail2_window_g1

0x9fc5,	// (0x00037ce3) call2_cli_visual_pane

0x453d,	// (0x0003225b) popup_call2_audio_conf_window_ParamLimits

0x453d,	// (0x0003225b) popup_call2_audio_conf_window

0x455d,	// (0x0003227b) popup_call2_audio_first_window_ParamLimits

0x455d,	// (0x0003227b) popup_call2_audio_first_window

0x45f3,	// (0x00032311) popup_call2_audio_in_window_ParamLimits

0x45f3,	// (0x00032311) popup_call2_audio_in_window

0x463b,	// (0x00032359) popup_call2_audio_out_window_ParamLimits

0x463b,	// (0x00032359) popup_call2_audio_out_window

0x46a5,	// (0x000323c3) popup_call2_audio_second_window_ParamLimits

0x46a5,	// (0x000323c3) popup_call2_audio_second_window

0x470b,	// (0x00032429) popup_call2_audio_wait_window_ParamLimits

0x470b,	// (0x00032429) popup_call2_audio_wait_window

0x9fc5,	// (0x00037ce3) bg_popup_call2_act_pane_cp03

0xa202,	// (0x00037f20) list_conf_pane_cp

0xb49c,	// (0x000391ba) popup_call2_audio_conf_window_t1

0xaca0,	// (0x000389be) list_single_graphic_popup_conf2_pane_ParamLimits

0xaca0,	// (0x000389be) list_single_graphic_popup_conf2_pane

0xacb3,	// (0x000389d1) list_highlight_pane_cp04

0xb4aa,	// (0x000391c8) list_single_graphic_popup_conf2_pane_g1

0xacc4,	// (0x000389e2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003d230) list_single_graphic_popup_conf2_pane_g

0xb4b4,	// (0x000391d2) list_single_graphic_popup_conf2_pane_t1

0xb4c2,	// (0x000391e0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb4c2,	// (0x000391e0) bg_popup_call2_act_pane_cp01

0xb54c,	// (0x0003926a) call_type_pane_cp05_ParamLimits

0xb54c,	// (0x0003926a) call_type_pane_cp05

0xb5a0,	// (0x000392be) popup_call2_audio_second_window_g1_ParamLimits

0xb5a0,	// (0x000392be) popup_call2_audio_second_window_g1

0xb5f4,	// (0x00039312) popup_call2_audio_second_window_g2_ParamLimits

0xb5f4,	// (0x00039312) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003d235) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003d235) popup_call2_audio_second_window_g

0xb659,	// (0x00039377) popup_call2_audio_second_window_t1_ParamLimits

0xb659,	// (0x00039377) popup_call2_audio_second_window_t1

0xb714,	// (0x00039432) popup_call2_audio_second_window_t2_ParamLimits

0xb714,	// (0x00039432) popup_call2_audio_second_window_t2

0xb767,	// (0x00039485) popup_call2_audio_second_window_t3_ParamLimits

0xb767,	// (0x00039485) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003d23c) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003d23c) popup_call2_audio_second_window_t

0x9fc5,	// (0x00037ce3) bg_popup_call2_in_pane_cp02

0x9fcf,	// (0x00037ced) call_type_pane_cp04

0x9fd7,	// (0x00037cf5) popup_call2_audio_wait_window_g1

0x9fdf,	// (0x00037cfd) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0003ce13) popup_call2_audio_wait_window_g

0x9fe7,	// (0x00037d05) popup_call2_audio_wait_window_t3

0xb85a,	// (0x00039578) bg_popup_call2_act_pane_ParamLimits

0xb85a,	// (0x00039578) bg_popup_call2_act_pane

0xb91a,	// (0x00039638) call_type_pane_cp03_ParamLimits

0xb91a,	// (0x00039638) call_type_pane_cp03

0xb97e,	// (0x0003969c) popup_call2_audio_first_window_g1_ParamLimits

0xb97e,	// (0x0003969c) popup_call2_audio_first_window_g1

0xb9ee,	// (0x0003970c) popup_call2_audio_first_window_g2_ParamLimits

0xb9ee,	// (0x0003970c) popup_call2_audio_first_window_g2

0xb076,	// (0x00038d94) popup_call2_audio_first_window_g3_ParamLimits

0xb076,	// (0x00038d94) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003d245) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003d245) popup_call2_audio_first_window_g

0xbacc,	// (0x000397ea) popup_call2_audio_first_window_t1_ParamLimits

0xbacc,	// (0x000397ea) popup_call2_audio_first_window_t1

0xbbcf,	// (0x000398ed) popup_call2_audio_first_window_t4_ParamLimits

0xbbcf,	// (0x000398ed) popup_call2_audio_first_window_t4

0xbcb2,	// (0x000399d0) popup_call2_audio_first_window_t5_ParamLimits

0xbcb2,	// (0x000399d0) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003d250) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003d250) popup_call2_audio_first_window_t

0xa218,	// (0x00037f36) bg_popup_call2_act_pane_g1

0xc31f,	// (0x0003a03d) popup_cale_lunar_info_window_t1

0xc32d,	// (0x0003a04b) popup_cale_lunar_info_window_t2

0xc33b,	// (0x0003a059) popup_cale_lunar_info_window_t3

0x9fc5,	// (0x00037ce3) bg_popup_call2_bubble_pane

0xbdb3,	// (0x00039ad1) bg_popup_call2_in_pane_cp01_ParamLimits

0xbdb3,	// (0x00039ad1) bg_popup_call2_in_pane_cp01

0x9ca1,	// (0x000379bf) call_type_pane_cp02

0xbdfb,	// (0x00039b19) popup_call2_audio_out_window_g1_ParamLimits

0xbdfb,	// (0x00039b19) popup_call2_audio_out_window_g1

0xbe27,	// (0x00039b45) popup_call2_audio_out_window_g2_ParamLimits

0xbe27,	// (0x00039b45) popup_call2_audio_out_window_g2

0xbe4f,	// (0x00039b6d) popup_call2_audio_out_window_g3_ParamLimits

0xbe4f,	// (0x00039b6d) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003d259) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003d259) popup_call2_audio_out_window_g

0xbe8a,	// (0x00039ba8) popup_call2_audio_out_window_t1_ParamLimits

0xbe8a,	// (0x00039ba8) popup_call2_audio_out_window_t1

0xbee9,	// (0x00039c07) popup_call2_audio_out_window_t2_ParamLimits

0xbee9,	// (0x00039c07) popup_call2_audio_out_window_t2

0xbf3d,	// (0x00039c5b) popup_call2_audio_out_window_t3_ParamLimits

0xbf3d,	// (0x00039c5b) popup_call2_audio_out_window_t3

0xbf53,	// (0x00039c71) popup_call2_audio_out_window_t4_ParamLimits

0xbf53,	// (0x00039c71) popup_call2_audio_out_window_t4

0xbf69,	// (0x00039c87) popup_call2_audio_out_window_t5_ParamLimits

0xbf69,	// (0x00039c87) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003d262) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003d262) popup_call2_audio_out_window_t

0xbfcd,	// (0x00039ceb) bg_popup_call2_in_pane_ParamLimits

0xbfcd,	// (0x00039ceb) bg_popup_call2_in_pane

0xc029,	// (0x00039d47) popup_call2_audio_in_window_g1_ParamLimits

0xc029,	// (0x00039d47) popup_call2_audio_in_window_g1

0xc061,	// (0x00039d7f) popup_call2_audio_in_window_g2_ParamLimits

0xc061,	// (0x00039d7f) popup_call2_audio_in_window_g2

0xc099,	// (0x00039db7) popup_call2_audio_in_window_g3_ParamLimits

0xc099,	// (0x00039db7) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003d26f) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003d26f) popup_call2_audio_in_window_g

0xc0f1,	// (0x00039e0f) popup_call2_audio_in_window_t1_ParamLimits

0xc0f1,	// (0x00039e0f) popup_call2_audio_in_window_t1

0xc171,	// (0x00039e8f) popup_call2_audio_in_window_t2_ParamLimits

0xc171,	// (0x00039e8f) popup_call2_audio_in_window_t2

0xc1f1,	// (0x00039f0f) popup_call2_audio_in_window_t3_ParamLimits

0xc1f1,	// (0x00039f0f) popup_call2_audio_in_window_t3

0xc20b,	// (0x00039f29) popup_call2_audio_in_window_t4_ParamLimits

0xc20b,	// (0x00039f29) popup_call2_audio_in_window_t4

0xc21d,	// (0x00039f3b) popup_call2_audio_in_window_t5_ParamLimits

0xc21d,	// (0x00039f3b) popup_call2_audio_in_window_t5

0xc232,	// (0x00039f50) popup_call2_audio_in_window_t6_ParamLimits

0xc232,	// (0x00039f50) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003d278) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003d278) popup_call2_audio_in_window_t

0xa218,	// (0x00037f36) bg_popup_call2_in_pane_g1

0xc349,	// (0x0003a067) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0003d2e0) popup_cale_lunar_info_window_t

0xa220,	// (0x00037f3e) bg_popup_call2_rect_pane_ParamLimits

0xa220,	// (0x00037f3e) bg_popup_call2_rect_pane

0x9fc5,	// (0x00037ce3) call2_cli_visual_graphic_pane

0x9fc5,	// (0x00037ce3) call2_cli_visual_text_pane

0x4b6f,	// (0x0003288d) smil_status_volume_pane_g3

0x0002,

0xa33a,	// (0x00038058) call2_cli_visual_graphic_pane_g1

0xa33a,	// (0x00038058) call2_cli_visual_graphic_pane_g2

0xa33a,	// (0x00038058) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003d285) call2_cli_visual_graphic_pane_g

0xc247,	// (0x00039f65) bg_popup_call2_rect_pane_g1

0xa3c6,	// (0x000380e4) bg_popup_call2_rect_pane_g2

0xc24f,	// (0x00039f6d) bg_popup_call2_rect_pane_g3

0xc257,	// (0x00039f75) bg_popup_call2_rect_pane_g4

0xc25f,	// (0x00039f7d) bg_popup_call2_rect_pane_g5

0xc267,	// (0x00039f85) bg_popup_call2_rect_pane_g6

0xc26f,	// (0x00039f8d) bg_popup_call2_rect_pane_g7

0xc277,	// (0x00039f95) bg_popup_call2_rect_pane_g8

0xc27f,	// (0x00039f9d) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d28c) bg_popup_call2_rect_pane_g

0xc287,	// (0x00039fa5) bg_popup_call2_bubble_pane_g1

0xc28f,	// (0x00039fad) bg_popup_call2_bubble_pane_g2

0xc297,	// (0x00039fb5) bg_popup_call2_bubble_pane_g3

0xc29f,	// (0x00039fbd) bg_popup_call2_bubble_pane_g4

0xc2a7,	// (0x00039fc5) bg_popup_call2_bubble_pane_g5

0xc2af,	// (0x00039fcd) bg_popup_call2_bubble_pane_g6

0xc2b7,	// (0x00039fd5) bg_popup_call2_bubble_pane_g7

0xc2bf,	// (0x00039fdd) bg_popup_call2_bubble_pane_g8

0xc2c7,	// (0x00039fe5) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003d29f) bg_popup_call2_bubble_pane_g

0x1de7,	// (0x0002fb05) aid_cale_week_size_cell_pane

0x241a,	// (0x00030138) aid_cams_cif_uncrop_pane_ParamLimits

0x241a,	// (0x00030138) aid_cams_cif_uncrop_pane

0x25ca,	// (0x000302e8) aid_cams_size_cell_ParamLimits

0x25ca,	// (0x000302e8) aid_cams_size_cell

0x25de,	// (0x000302fc) grid_cams_pane_ParamLimits

0x25f8,	// (0x00030316) linegrid_cams_pane_ParamLimits

0x27f6,	// (0x00030514) call_video_pane_t1

0x2814,	// (0x00030532) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003cf8c) call_video_pane_t

0x2c40,	// (0x0003095e) aid_cale_month_size_cell_pane_ParamLimits

0x2c40,	// (0x0003095e) aid_cale_month_size_cell_pane

0xf60b,	// (0x0003d329) smil_status_volume_pane_g

0x4b7c,	// (0x0003289a) volume_smil_pane_ParamLimits

0x18fe,	// (0x0002f61c) aid_popup2_width_pane

0x1cf9,	// (0x0002fa17) cell_qdial_pane_g4_ParamLimits

0x1cf9,	// (0x0002fa17) cell_qdial_pane_g4

0x3ba8,	// (0x000318c6) aid_blid_cardinal_pane_ParamLimits

0x3bb4,	// (0x000318d2) aid_blid_destination_pane_ParamLimits

0x3bb4,	// (0x000318d2) aid_blid_destination_pane

0xa220,	// (0x00037f3e) bg_popup_call_poc_act_pane_ParamLimits

0xa220,	// (0x00037f3e) bg_popup_call_poc_act_pane

0xa220,	// (0x00037f3e) bg_popup_call_poc_inact_pane_ParamLimits

0xa220,	// (0x00037f3e) bg_popup_call_poc_inact_pane

0xc2cf,	// (0x00039fed) bg_popup_call_poc_act_pane_g1

0xc2d7,	// (0x00039ff5) bg_popup_call_poc_act_pane_g2

0xc2df,	// (0x00039ffd) bg_popup_call_poc_act_pane_g3

0xc29f,	// (0x00039fbd) bg_popup_call_poc_act_pane_g4

0xc2a7,	// (0x00039fc5) bg_popup_call_poc_act_pane_g5

0xc2e7,	// (0x0003a005) bg_popup_call_poc_act_pane_g6

0xc2b7,	// (0x00039fd5) bg_popup_call_poc_act_pane_g7

0xc2ef,	// (0x0003a00d) bg_popup_call_poc_act_pane_g8

0x9fc5,	// (0x00037ce3) main_usb_pane

0x4a4c,	// (0x0003276a) popup_cale_lunar_info_window

0x2aec,	// (0x0003080a) im_reading_pane_t1_ParamLimits

0xa5a4,	// (0x000382c2) list_im_pane_ParamLimits

0xa5b5,	// (0x000382d3) scroll_pane_cp07_ParamLimits

0x9fc5,	// (0x00037ce3) grid_highlight_pane_cp012

0xa220,	// (0x00037f3e) mup_scale_pane_ParamLimits

0xb1e3,	// (0x00038f01) main_usb_pane_g1_ParamLimits

0xb1e3,	// (0x00038f01) main_usb_pane_g1

0x4767,	// (0x00032485) main_usb_pane_g2_ParamLimits

0x4767,	// (0x00032485) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0003d2c9) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0003d2c9) main_usb_pane_g

0x477d,	// (0x0003249b) main_usb_pane_t1_ParamLimits

0x477d,	// (0x0003249b) main_usb_pane_t1

0x478f,	// (0x000324ad) main_usb_pane_t2_ParamLimits

0x478f,	// (0x000324ad) main_usb_pane_t2

0x47a1,	// (0x000324bf) main_usb_pane_t3_ParamLimits

0x47a1,	// (0x000324bf) main_usb_pane_t3

0x47b3,	// (0x000324d1) main_usb_pane_t4_ParamLimits

0x47b3,	// (0x000324d1) main_usb_pane_t4

0x47c5,	// (0x000324e3) main_usb_pane_t5_ParamLimits

0x47c5,	// (0x000324e3) main_usb_pane_t5

0x47d7,	// (0x000324f5) main_usb_pane_t6_ParamLimits

0x47d7,	// (0x000324f5) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0003d2ce) main_usb_pane_t_ParamLimits

0x3b57,	// (0x00031875) aid_text_placing

0x3b60,	// (0x0003187e) main_location2_pane_t1_ParamLimits

0x3b72,	// (0x00031890) main_location2_pane_t2_ParamLimits

0x3b84,	// (0x000318a2) main_location2_pane_t3_ParamLimits

0x3b96,	// (0x000318b4) main_location2_pane_t4_ParamLimits

0x3b96,	// (0x000318b4) main_location2_pane_t4

0xf3cf,	// (0x0003d0ed) main_location2_pane_t_ParamLimits

0xa25c,	// (0x00037f7a) find_pinb_pane_g2_ParamLimits

0xa25c,	// (0x00037f7a) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0003ce39) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0003ce39) find_pinb_pane_g

0xa268,	// (0x00037f86) find_pinb_pane_t1_ParamLimits

0xa27a,	// (0x00037f98) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0003ce3e) find_pinb_pane_t_ParamLimits

0x9fc5,	// (0x00037ce3) main_call3_pane

0x30ff,	// (0x00030e1d) cale_month_day_heading_pane_t1_ParamLimits

0x3185,	// (0x00030ea3) cale_month_day_heading_pane_t2_ParamLimits

0x3216,	// (0x00030f34) cale_month_day_heading_pane_t3_ParamLimits

0x32a7,	// (0x00030fc5) cale_month_day_heading_pane_t4_ParamLimits

0x333c,	// (0x0003105a) cale_month_day_heading_pane_t5_ParamLimits

0x33dd,	// (0x000310fb) cale_month_day_heading_pane_t6_ParamLimits

0x347e,	// (0x0003119c) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003cfc4) cale_month_day_heading_pane_t_ParamLimits

0xa8ad,	// (0x000385cb) smil_status_volume_pane

0x4262,	// (0x00031f80) postcard_address_pane_ParamLimits

0x4262,	// (0x00031f80) postcard_address_pane

0x4274,	// (0x00031f92) postcard_message_pane_ParamLimits

0x4274,	// (0x00031f92) postcard_message_pane

0x4745,	// (0x00032463) call2_cli_visual_pane_t1_ParamLimits

0x4745,	// (0x00032463) call2_cli_visual_pane_t1

0x4d31,	// (0x00032a4f) postcard_message_pane_t1_ParamLimits

0x4d31,	// (0x00032a4f) postcard_message_pane_t1

0x4d1a,	// (0x00032a38) postcard_address_pane_t1_ParamLimits

0x4d1a,	// (0x00032a38) postcard_address_pane_t1

0x4d06,	// (0x00032a24) popup_call3_audio_in_window_ParamLimits

0x4d06,	// (0x00032a24) popup_call3_audio_in_window

0x4b91,	// (0x000328af) bg_popup_call3_in_pane_ParamLimits

0x4b91,	// (0x000328af) bg_popup_call3_in_pane

0x4c07,	// (0x00032925) popup_call3_audio_in_window_g1_ParamLimits

0x4c07,	// (0x00032925) popup_call3_audio_in_window_g1

0x4c27,	// (0x00032945) popup_call3_audio_in_window_g2_ParamLimits

0x4c27,	// (0x00032945) popup_call3_audio_in_window_g2

0x4c47,	// (0x00032965) popup_call3_audio_in_window_g3_ParamLimits

0x4c47,	// (0x00032965) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0003d330) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0003d330) popup_call3_audio_in_window_g

0x4c78,	// (0x00032996) popup_call3_audio_in_window_t1_ParamLimits

0x4c78,	// (0x00032996) popup_call3_audio_in_window_t1

0x4cb6,	// (0x000329d4) popup_call3_audio_in_window_t2_ParamLimits

0x4cb6,	// (0x000329d4) popup_call3_audio_in_window_t2

0x4cf4,	// (0x00032a12) popup_call3_audio_in_window_t3_ParamLimits

0x4cf4,	// (0x00032a12) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0003d339) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0003d339) popup_call3_audio_in_window_t

0xafb7,	// (0x00038cd5) bg_popup_call3_rect_pane

0xc247,	// (0x00039f65) bg_popup_call3_rect_pane_g1

0xa3c6,	// (0x000380e4) bg_popup_call3_rect_pane_g2

0xc24f,	// (0x00039f6d) bg_popup_call3_rect_pane_g3

0xc257,	// (0x00039f75) bg_popup_call3_rect_pane_g4

0xc25f,	// (0x00039f7d) bg_popup_call3_rect_pane_g5

0xc267,	// (0x00039f85) bg_popup_call3_rect_pane_g6

0xc26f,	// (0x00039f8d) bg_popup_call3_rect_pane_g7

0x3eaa,	// (0x00031bc8) mup_visualizer_osc_pane

0xb084,	// (0x00038da2) mup_visualizer_spec_pane

0x4bc1,	// (0x000328df) call3_video_qcif_pane_ParamLimits

0x4bc1,	// (0x000328df) call3_video_qcif_pane

0x4bd4,	// (0x000328f2) call3_video_qcif_uncrop_pane_ParamLimits

0x4bd4,	// (0x000328f2) call3_video_qcif_uncrop_pane

0x4be2,	// (0x00032900) call3_video_subqcif_pane_ParamLimits

0x4be2,	// (0x00032900) call3_video_subqcif_pane

0x4bf6,	// (0x00032914) call3_video_subqcif_uncrop_pane_ParamLimits

0x4bf6,	// (0x00032914) call3_video_subqcif_uncrop_pane

0x4c67,	// (0x00032985) popup_call3_audio_in_window_g4_ParamLimits

0x4c67,	// (0x00032985) popup_call3_audio_in_window_g4

0x4b5e,	// (0x0003287c) mup_spec_half_pane

0x4b67,	// (0x00032885) mup_spec_half_pane_cp

0xc4ac,	// (0x0003a1ca) mup_osc_middle_pane

0xc4b5,	// (0x0003a1d3) mup_visualizer_osc_pane_g1

0x4b3e,	// (0x0003285c) mup_spec_bar_pane_ParamLimits

0x4b3e,	// (0x0003285c) mup_spec_bar_pane

0xc499,	// (0x0003a1b7) mup_spec_bar_pane_g1

0xc4a3,	// (0x0003a1c1) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003d324) mup_spec_bar_pane_g

0x1de7,	// (0x0002fb05) aid_cale_week_size_cell_pane_ParamLimits

0x1e01,	// (0x0002fb1f) bg_cale_heading_pane_ParamLimits

0xa403,	// (0x00038121) bg_cale_pane_cp01_ParamLimits

0x1e19,	// (0x0002fb37) cale_week_corner_pane_ParamLimits

0x1e38,	// (0x0002fb56) cale_week_day_heading_pane_ParamLimits

0x1e55,	// (0x0002fb73) cale_week_scroll_pane_g1_ParamLimits

0x1e68,	// (0x0002fb86) cale_week_scroll_pane_g2_ParamLimits

0x1e80,	// (0x0002fb9e) cale_week_scroll_pane_g3_ParamLimits

0x1e98,	// (0x0002fbb6) cale_week_scroll_pane_g4_ParamLimits

0x1eb0,	// (0x0002fbce) cale_week_scroll_pane_g5_ParamLimits

0x1ed0,	// (0x0002fbee) cale_week_scroll_pane_g6_ParamLimits

0x1ef0,	// (0x0002fc0e) cale_week_scroll_pane_g7_ParamLimits

0x1f10,	// (0x0002fc2e) cale_week_scroll_pane_g8_ParamLimits

0x1f34,	// (0x0002fc52) cale_week_scroll_pane_g9_ParamLimits

0x1f4c,	// (0x0002fc6a) cale_week_scroll_pane_g10_ParamLimits

0x1f64,	// (0x0002fc82) cale_week_scroll_pane_g11_ParamLimits

0x1f7c,	// (0x0002fc9a) cale_week_scroll_pane_g12_ParamLimits

0x1f94,	// (0x0002fcb2) cale_week_scroll_pane_g13_ParamLimits

0x1f94,	// (0x0002fcb2) cale_week_scroll_pane_g14_ParamLimits

0x1f94,	// (0x0002fcb2) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0003ceca) cale_week_scroll_pane_g_ParamLimits

0x1fd0,	// (0x0002fcee) cale_week_time_pane_ParamLimits

0x1ff4,	// (0x0002fd12) grid_cale_week_pane_ParamLimits

0xa421,	// (0x0003813f) listscroll_cale_week_pane_t1

0xa433,	// (0x00038151) scroll_pane_cp08_ParamLimits

0x2c95,	// (0x000309b3) cale_month_corner_pane_ParamLimits

0xa883,	// (0x000385a1) cale_month_pane_t1

0x309d,	// (0x00030dbb) cale_month_week_pane_ParamLimits

0x3940,	// (0x0003165e) popup_call_status_window_g1_ParamLimits

0x3954,	// (0x00031672) popup_call_status_window_g2_ParamLimits

0x3968,	// (0x00031686) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003d074) popup_call_status_window_g_ParamLimits

0xac33,	// (0x00038951) aid_call2_pane

0x4111,	// (0x00031e2f) msg_header_pane_g1

0x4262,	// (0x00031f80) postcard_address2_pane_ParamLimits

0x4262,	// (0x00031f80) postcard_address2_pane

0x4274,	// (0x00031f92) postcard_message2_pane_ParamLimits

0x4274,	// (0x00031f92) postcard_message2_pane

0x4af0,	// (0x0003280e) message2_row_pane_ParamLimits

0x4af0,	// (0x0003280e) message2_row_pane

0x4b0c,	// (0x0003282a) address2_row_pane_ParamLimits

0x4b0c,	// (0x0003282a) address2_row_pane

0xc467,	// (0x0003a185) postcard_message2_row_pane_g1

0xc46f,	// (0x0003a18d) postcard_message2_row_pane_t1

0xc467,	// (0x0003a185) address2_row_pane_g1

0xc46f,	// (0x0003a18d) address2_row_pane_t1

0x05a3,	// (0x0002e2c1) aid_size_cell_vorec

0x9fc5,	// (0x00037ce3) main_rss_pane

0x4b1f,	// (0x0003283d) rss_list_single_pane_ParamLimits

0x4b1f,	// (0x0003283d) rss_list_single_pane

0xc47d,	// (0x0003a19b) rss_list_single_pane_t1

0xc48b,	// (0x0003a1a9) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0003d31f) rss_list_single_pane_t

0x9fc5,	// (0x00037ce3) main_camera2_pane

0x9fc5,	// (0x00037ce3) main_video2_pane

0x0981,	// (0x0002e69f) cams_zoom_pane_cp2_ParamLimits

0x0981,	// (0x0002e69f) cams_zoom_pane_cp2

0x09a1,	// (0x0002e6bf) image2_vga_pane_ParamLimits

0x09a1,	// (0x0002e6bf) image2_vga_pane

0x09f2,	// (0x0002e710) main_camera2_pane_g1_ParamLimits

0x09f2,	// (0x0002e710) main_camera2_pane_g1

0x0a12,	// (0x0002e730) main_camera2_pane_g2_ParamLimits

0x0a12,	// (0x0002e730) main_camera2_pane_g2

0x0a32,	// (0x0002e750) main_camera2_pane_g3_ParamLimits

0x0a32,	// (0x0002e750) main_camera2_pane_g3

0x0a52,	// (0x0002e770) main_camera2_pane_g4_ParamLimits

0x0a52,	// (0x0002e770) main_camera2_pane_g4

0x0a72,	// (0x0002e790) main_camera2_pane_g5_ParamLimits

0x0a72,	// (0x0002e790) main_camera2_pane_g5

0x0a92,	// (0x0002e7b0) main_camera2_pane_g6_ParamLimits

0x0a92,	// (0x0002e7b0) main_camera2_pane_g6

0x0ab2,	// (0x0002e7d0) main_camera2_pane_g7_ParamLimits

0x0ab2,	// (0x0002e7d0) main_camera2_pane_g7

0x0ad2,	// (0x0002e7f0) main_camera2_pane_g8_ParamLimits

0x0ad2,	// (0x0002e7f0) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0003d340) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0003d340) main_camera2_pane_g

0x0b12,	// (0x0002e830) main_camera2_pane_t1_ParamLimits

0x0b12,	// (0x0002e830) main_camera2_pane_t1

0x0b47,	// (0x0002e865) main_camera2_pane_t2_ParamLimits

0x0b47,	// (0x0002e865) main_camera2_pane_t2

0x0b6d,	// (0x0002e88b) main_camera2_pane_t3_ParamLimits

0x0b6d,	// (0x0002e88b) main_camera2_pane_t3

0x0bcb,	// (0x0002e8e9) main_camera2_pane_t4_ParamLimits

0x0bcb,	// (0x0002e8e9) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0003d353) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0003d353) main_camera2_pane_t

0x0c5d,	// (0x0002e97b) cams_zoom_pane_cp4_ParamLimits

0x0c5d,	// (0x0002e97b) cams_zoom_pane_cp4

0x0c73,	// (0x0002e991) image2_cif_pane_ParamLimits

0x0c73,	// (0x0002e991) image2_cif_pane

0x0c9e,	// (0x0002e9bc) image2_subqcif_pane_ParamLimits

0x0c9e,	// (0x0002e9bc) image2_subqcif_pane

0x0cb8,	// (0x0002e9d6) main_video2_pane_g1_ParamLimits

0x0cb8,	// (0x0002e9d6) main_video2_pane_g1

0x0cd2,	// (0x0002e9f0) main_video2_pane_g2_ParamLimits

0x0cd2,	// (0x0002e9f0) main_video2_pane_g2

0x0ce8,	// (0x0002ea06) main_video2_pane_g3_ParamLimits

0x0ce8,	// (0x0002ea06) main_video2_pane_g3

0x0cfe,	// (0x0002ea1c) main_video2_pane_g4_ParamLimits

0x0cfe,	// (0x0002ea1c) main_video2_pane_g4

0x0d14,	// (0x0002ea32) main_video2_pane_g5_ParamLimits

0x0d14,	// (0x0002ea32) main_video2_pane_g5

0x0d2a,	// (0x0002ea48) main_video2_pane_g6_ParamLimits

0x0d2a,	// (0x0002ea48) main_video2_pane_g6

0x0005,

0xf644,	// (0x0003d362) main_video2_pane_g_ParamLimits

0xf644,	// (0x0003d362) main_video2_pane_g

0x0d44,	// (0x0002ea62) main_video2_pane_t1_ParamLimits

0x0d44,	// (0x0002ea62) main_video2_pane_t1

0x0d68,	// (0x0002ea86) main_video2_pane_t2_ParamLimits

0x0d68,	// (0x0002ea86) main_video2_pane_t2

0x0db6,	// (0x0002ead4) main_video2_pane_t3_ParamLimits

0x0db6,	// (0x0002ead4) main_video2_pane_t3

0x0002,

0xf651,	// (0x0003d36f) main_video2_pane_t_ParamLimits

0xf651,	// (0x0003d36f) main_video2_pane_t

0x4892,	// (0x000325b0) call_muted_g2

0x0001,

0xf5f3,	// (0x0003d311) call_muted_g

0x9fc5,	// (0x00037ce3) main_mup2_pane

0x4d7c,	// (0x00032a9a) main_mup2_pane_g1_ParamLimits

0x4d7c,	// (0x00032a9a) main_mup2_pane_g1

0x4d88,	// (0x00032aa6) main_mup2_pane_g2_ParamLimits

0x4d88,	// (0x00032aa6) main_mup2_pane_g2

0x4ff7,	// (0x00032d15) main_mup_pane_g13_cp1

0x4fff,	// (0x00032d1d) mup_volume_pane_cp1

0x4da4,	// (0x00032ac2) main_mup2_pane_g4_ParamLimits

0x4da4,	// (0x00032ac2) main_mup2_pane_g4

0x4db6,	// (0x00032ad4) main_mup2_pane_g5_ParamLimits

0x4db6,	// (0x00032ad4) main_mup2_pane_g5

0x4dc8,	// (0x00032ae6) main_mup2_pane_g6_ParamLimits

0x4dc8,	// (0x00032ae6) main_mup2_pane_g6

0x4dda,	// (0x00032af8) main_mup2_pane_g7_ParamLimits

0x4dda,	// (0x00032af8) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0003d376) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0003d376) main_mup2_pane_g

0x4df2,	// (0x00032b10) main_mup2_pane_t1_ParamLimits

0x4df2,	// (0x00032b10) main_mup2_pane_t1

0x4e08,	// (0x00032b26) main_mup2_pane_t2_ParamLimits

0x4e08,	// (0x00032b26) main_mup2_pane_t2

0x4e1e,	// (0x00032b3c) main_mup2_pane_t3_ParamLimits

0x4e1e,	// (0x00032b3c) main_mup2_pane_t3

0x4e34,	// (0x00032b52) main_mup2_pane_t4_ParamLimits

0x4e34,	// (0x00032b52) main_mup2_pane_t4

0x4e4c,	// (0x00032b6a) main_mup2_pane_t5_ParamLimits

0x4e4c,	// (0x00032b6a) main_mup2_pane_t5

0x4e64,	// (0x00032b82) main_mup2_pane_t6_ParamLimits

0x4e64,	// (0x00032b82) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0003d385) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0003d385) main_mup2_pane_t

0x4e94,	// (0x00032bb2) mup2_visualizer_pane_ParamLimits

0x4e94,	// (0x00032bb2) mup2_visualizer_pane

0x4ec2,	// (0x00032be0) mup_progress_pane_cp_ParamLimits

0x4ec2,	// (0x00032be0) mup_progress_pane_cp

0x4fe2,	// (0x00032d00) mup_volume_pane_cp_ParamLimits

0x4fe2,	// (0x00032d00) mup_volume_pane_cp

0x4ed6,	// (0x00032bf4) mup2_visualizer_pane_g1_ParamLimits

0x4ed6,	// (0x00032bf4) mup2_visualizer_pane_g1

0xc4ec,	// (0x0003a20a) mup2_visualizer_pane_g2_ParamLimits

0xc4ec,	// (0x0003a20a) mup2_visualizer_pane_g2

0x4eed,	// (0x00032c0b) mup2_visualizer_pane_g3_ParamLimits

0x4eed,	// (0x00032c0b) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0003d392) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0003d392) mup2_visualizer_pane_g

0xb32c,	// (0x0003904a) aid_size_cell_fmradio

0x0667,	// (0x0002e385) aid_height_parent_landcape

0xa633,	// (0x00038351) wml_content_pane_cp

0xa63b,	// (0x00038359) wml_tabs_pane

0xa644,	// (0x00038362) popup_wml_miniature_window

0xa64c,	// (0x0003836a) scroll_pane_cp021

0xa660,	// (0x0003837e) wml_content_pane_comp8

0x9fc5,	// (0x00037ce3) bg_popup_sub_pane_cp05

0xc50a,	// (0x0003a228) popup_wml_miniature_window_g1

0xc512,	// (0x0003a230) wml_miniature_view_pane

0x4ef9,	// (0x00032c17) aid_size_wml_view

0x4f01,	// (0x00032c1f) wml_miniature_view_pane_g1

0x4f0a,	// (0x00032c28) wml_miniature_view_pane_g2

0x4f13,	// (0x00032c31) wml_miniature_view_pane_g3

0x4f1b,	// (0x00032c39) wml_miniature_view_pane_g4

0x4f23,	// (0x00032c41) wml_miniature_view_pane_g5

0x4f2b,	// (0x00032c49) wml_miniature_view_pane_g6

0x4f33,	// (0x00032c51) wml_miniature_view_pane_g7

0x4f3b,	// (0x00032c59) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0003d399) wml_miniature_view_pane_g

0xc51a,	// (0x0003a238) background_graphic_ParamLimits

0xc51a,	// (0x0003a238) background_graphic

0xc526,	// (0x0003a244) wml_tabs_2_pane

0xc52f,	// (0x0003a24d) wml_tabs_3_pane_ParamLimits

0xc52f,	// (0x0003a24d) wml_tabs_3_pane

0xc541,	// (0x0003a25f) wml_tabs_4_pane_ParamLimits

0xc541,	// (0x0003a25f) wml_tabs_4_pane

0xc557,	// (0x0003a275) wml_tabs_5_pane_ParamLimits

0xc557,	// (0x0003a275) wml_tabs_5_pane

0xc571,	// (0x0003a28f) wml_tabs_pane_g2_ParamLimits

0xc571,	// (0x0003a28f) wml_tabs_pane_g2

0xc585,	// (0x0003a2a3) wml_tabs_pane_g3_ParamLimits

0xc585,	// (0x0003a2a3) wml_tabs_pane_g3

0x4f43,	// (0x00032c61) wml_tabs_2_active_pane_ParamLimits

0x4f43,	// (0x00032c61) wml_tabs_2_active_pane

0x4f57,	// (0x00032c75) wml_tabs_2_passive_pane_ParamLimits

0x4f57,	// (0x00032c75) wml_tabs_2_passive_pane

0x4f6b,	// (0x00032c89) wml_tabs_3_active_pane_cp_ParamLimits

0x4f6b,	// (0x00032c89) wml_tabs_3_active_pane_cp

0x4f80,	// (0x00032c9e) wml_tabs_3_passive_pane_ParamLimits

0x4f80,	// (0x00032c9e) wml_tabs_3_passive_pane

0x4f93,	// (0x00032cb1) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f93,	// (0x00032cb1) wml_tabs_3_passive_pane_cp

0x4faa,	// (0x00032cc8) tabs_4_active_pane

0x4fb2,	// (0x00032cd0) tabs_4_passive_pane

0x4fbc,	// (0x00032cda) tabs_4_passive_pane_cp

0x4fc4,	// (0x00032ce2) tabs_4_passive_pane_cp2

0x475f,	// (0x0003247d) aid_height_text

0x3e80,	// (0x00031b9e) mup_volume_cont_pane_ParamLimits

0x3e80,	// (0x00031b9e) mup_volume_cont_pane

0x1a77,	// (0x0002f795) aid_size_cell_pinb

0x1a81,	// (0x0002f79f) aid_size_list_pinb

0x4eae,	// (0x00032bcc) mup2_volume_cont_pane_ParamLimits

0x4eae,	// (0x00032bcc) mup2_volume_cont_pane

0x4fce,	// (0x00032cec) mup2_volume_cont_pane_g1_ParamLimits

0x4fce,	// (0x00032cec) mup2_volume_cont_pane_g1

0x0153,	// (0x0002de71) aid_size_cell_touch_ParamLimits

0x0153,	// (0x0002de71) aid_size_cell_touch

0x033b,	// (0x0002e059) touch_pane_ParamLimits

0x033b,	// (0x0002e059) touch_pane

0x19af,	// (0x0002f6cd) main_rss2_pane

0xc5a2,	// (0x0003a2c0) listscroll_rss2_pane

0xc5ab,	// (0x0003a2c9) rss2_navigation_pane

0xc5b3,	// (0x0003a2d1) list_rss2_pane

0xad76,	// (0x00038a94) scroll_pane_cp22

0xc5bb,	// (0x0003a2d9) rss2_navigation_pane_g1

0xc5c4,	// (0x0003a2e2) rss2_navigation_pane_g2

0xc5cc,	// (0x0003a2ea) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0003d3aa) rss2_navigation_pane_g

0xc5d4,	// (0x0003a2f2) rss2_navigation_pane_t1

0x5007,	// (0x00032d25) rss2_list_single_pane_ParamLimits

0x5007,	// (0x00032d25) rss2_list_single_pane

0xc5e2,	// (0x0003a300) rss2_list_single_pane_t2

0xc5f0,	// (0x0003a30e) rss2_list_single_pane_t3_ParamLimits

0xc5f0,	// (0x0003a30e) rss2_list_single_pane_t3

0xc60d,	// (0x0003a32b) rss2_list_single_pane_t4

0x3726,	// (0x00031444) smil_status_pane_g1

0x1995,	// (0x0002f6b3) main_image2_pane_ParamLimits

0x1995,	// (0x0002f6b3) main_image2_pane

0x0af2,	// (0x0002e810) main_camera2_pane_g9_ParamLimits

0x0af2,	// (0x0002e810) main_camera2_pane_g9

0x0c20,	// (0x0002e93e) main_camera2_pane_t5_ParamLimits

0x0c20,	// (0x0002e93e) main_camera2_pane_t5

0x4d4c,	// (0x00032a6a) main_camera2_pane_t6_ParamLimits

0x4d4c,	// (0x00032a6a) main_camera2_pane_t6

0x501c,	// (0x00032d3a) main_image2_pane_g1_ParamLimits

0x501c,	// (0x00032d3a) main_image2_pane_g1

0x449b,	// (0x000321b9) smil2_video_pane_ParamLimits

0x449b,	// (0x000321b9) smil2_video_pane

0x190a,	// (0x0002f628) aid_zoom_text_primary_cp

0x198b,	// (0x0002f6a9) popup_preview_fixed_window

0xa59c,	// (0x000382ba) im_reading_pane_g1

0x0969,	// (0x0002e687) cams2_bc_adjust_pane_cp_ParamLimits

0x0969,	// (0x0002e687) cams2_bc_adjust_pane_cp

0x0c4f,	// (0x0002e96d) cams2_bc_adjust_pane_ParamLimits

0x0c4f,	// (0x0002e96d) cams2_bc_adjust_pane

0xd8b8,	// (0x0003b5d6) cams2_bc_adjust_pane_g1

0x5032,	// (0x00032d50) cams2_slider_pane

0x503b,	// (0x00032d59) cams2_slider_pane_g1

0x5044,	// (0x00032d62) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0003d3b1) cams2_slider_pane_g

0x03ab,	// (0x0002e0c9) calc_display_pane_ParamLimits

0x03d3,	// (0x0002e0f1) calc_paper_pane_ParamLimits

0x03f6,	// (0x0002e114) grid_calc_pane_ParamLimits

0x39cd,	// (0x000316eb) popup_clock_digital_window_t1_ParamLimits

0xb2c9,	// (0x00038fe7) main_image_pane_t1

0x038d,	// (0x0002e0ab) aid_size_cell_calc_ParamLimits

0x038d,	// (0x0002e0ab) aid_size_cell_calc

0x06bf,	// (0x0002e3dd) popup_blid_sat_info2_window_ParamLimits

0x06bf,	// (0x0002e3dd) popup_blid_sat_info2_window

0xc623,	// (0x0003a341) aid_size_cell_blid

0xc62b,	// (0x0003a349) bg_popup_window_pane_cp07

0xc64e,	// (0x0003a36c) grid_popup_blid_pane

0xc658,	// (0x0003a376) heading_pane_cp05_ParamLimits

0xc658,	// (0x0003a376) heading_pane_cp05

0xc722,	// (0x0003a440) cell_popup_blid_pane_ParamLimits

0xc722,	// (0x0003a440) cell_popup_blid_pane

0xc746,	// (0x0003a464) cell_popup_blid_pane_g1

0xc74e,	// (0x0003a46c) cell_popup_blid_pane_t1

0x4e7e,	// (0x00032b9c) mup2_indicator_pane_ParamLimits

0x4e7e,	// (0x00032b9c) mup2_indicator_pane

0xafb7,	// (0x00038cd5) mup2_visualizer_osc_pane

0xc4f8,	// (0x0003a216) mup2_visualizer_spec_pane_ParamLimits

0xc4f8,	// (0x0003a216) mup2_visualizer_spec_pane

0x505e,	// (0x00032d7c) mup2_spec_half_pane

0x5067,	// (0x00032d85) mup2_spec_half_pane_cp

0x506f,	// (0x00032d8d) mup2_spec_bar_pane_ParamLimits

0x506f,	// (0x00032d8d) mup2_spec_bar_pane

0xc499,	// (0x0003a1b7) mup2_spec_bar_pane_g1

0xc4a3,	// (0x0003a1c1) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0003d324) mup2_spec_bar_pane_g

0x508f,	// (0x00032dad) mup2_osc_middle_pane

0xc4b5,	// (0x0003a1d3) mup2_visualizer_osc_pane_g1

0x9bd2,	// (0x000378f0) popup_number_entry_window_t1_ParamLimits

0x9be5,	// (0x00037903) popup_number_entry_window_t2_ParamLimits

0x9bf7,	// (0x00037915) popup_number_entry_window_t3_ParamLimits

0x19b9,	// (0x0002f6d7) popup_number_entry_window_t5_ParamLimits

0x19b9,	// (0x0002f6d7) popup_number_entry_window_t5

0xf0c6,	// (0x0003cde4) popup_number_entry_window_t_ParamLimits

0x9c09,	// (0x00037927) text_title_cp2_ParamLimits

0x412f,	// (0x00031e4d) aid_hotspot_pointer_text2_pane

0x4185,	// (0x00031ea3) main_viewer_pane_g9_ParamLimits

0x4185,	// (0x00031ea3) main_viewer_pane_g9

0xa883,	// (0x000385a1) cale_month_pane_t1_ParamLimits

0xa8c0,	// (0x000385de) bg_cale_pane_ParamLimits

0xa8d8,	// (0x000385f6) list_cale_pane_ParamLimits

0xa8e9,	// (0x00038607) listscroll_cale_day_pane_t1

0xa8fb,	// (0x00038619) scroll_pane_cp09_ParamLimits

0x3eb2,	// (0x00031bd0) main_mup_eq_pane_t1_ParamLimits

0x3eb2,	// (0x00031bd0) main_mup_eq_pane_t1

0x3ecc,	// (0x00031bea) main_mup_eq_pane_t2_ParamLimits

0x3ecc,	// (0x00031bea) main_mup_eq_pane_t2

0x3ee6,	// (0x00031c04) main_mup_eq_pane_t3_ParamLimits

0x3ee6,	// (0x00031c04) main_mup_eq_pane_t3

0x3f02,	// (0x00031c20) main_mup_eq_pane_t4_ParamLimits

0x3f02,	// (0x00031c20) main_mup_eq_pane_t4

0x3f1e,	// (0x00031c3c) main_mup_eq_pane_t5_ParamLimits

0x3f1e,	// (0x00031c3c) main_mup_eq_pane_t5

0x3f3a,	// (0x00031c58) main_mup_eq_pane_t6_ParamLimits

0x3f3a,	// (0x00031c58) main_mup_eq_pane_t6

0x3f4e,	// (0x00031c6c) main_mup_eq_pane_t7_ParamLimits

0x3f4e,	// (0x00031c6c) main_mup_eq_pane_t7

0x3f62,	// (0x00031c80) main_mup_eq_pane_t8_ParamLimits

0x3f62,	// (0x00031c80) main_mup_eq_pane_t8

0x3f76,	// (0x00031c94) main_mup_eq_pane_t9_ParamLimits

0x3f76,	// (0x00031c94) main_mup_eq_pane_t9

0x3f90,	// (0x00031cae) main_mup_eq_pane_t10_ParamLimits

0x3f90,	// (0x00031cae) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003d173) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003d173) main_mup_eq_pane_t

0x403f,	// (0x00031d5d) mup_equalizer_pane_cp5_ParamLimits

0x4053,	// (0x00031d71) mup_equalizer_pane_cp6_ParamLimits

0x4067,	// (0x00031d85) mup_equalizer_pane_cp7_ParamLimits

0x19af,	// (0x0002f6cd) main_gallery_pane

0xc4be,	// (0x0003a1dc) smil2_volume_pane

0xc4c6,	// (0x0003a1e4) smil_status_volume_pane_g1_ParamLimits

0xc4d9,	// (0x0003a1f7) smil_status_volume_pane_g2_ParamLimits

0x4b6f,	// (0x0003288d) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0003d329) smil_status_volume_pane_g_ParamLimits

0xc62b,	// (0x0003a349) bg_popup_window_pane_cp07_ParamLimits

0xc639,	// (0x0003a357) blid_firmament_pane

0x5098,	// (0x00032db6) aid_size_cell_gallery_ParamLimits

0x5098,	// (0x00032db6) aid_size_cell_gallery

0x50ae,	// (0x00032dcc) grid_gallery_pane_ParamLimits

0x50ae,	// (0x00032dcc) grid_gallery_pane

0x50c7,	// (0x00032de5) cell_gallery_pane_ParamLimits

0x50c7,	// (0x00032de5) cell_gallery_pane

0xc75c,	// (0x0003a47a) bg_cell_gallery_focus_pane_ParamLimits

0xc75c,	// (0x0003a47a) bg_cell_gallery_focus_pane

0xc76e,	// (0x0003a48c) cell_gallery_pane_g1_ParamLimits

0xc76e,	// (0x0003a48c) cell_gallery_pane_g1

0x5110,	// (0x00032e2e) cell_gallery_pane_g2_ParamLimits

0x5110,	// (0x00032e2e) cell_gallery_pane_g2

0x511d,	// (0x00032e3b) cell_gallery_pane_g3_ParamLimits

0x511d,	// (0x00032e3b) cell_gallery_pane_g3

0xc77a,	// (0x0003a498) cell_gallery_pane_g4_ParamLimits

0xc77a,	// (0x0003a498) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0003d3d7) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0003d3d7) cell_gallery_pane_g

0xc786,	// (0x0003a4a4) bg_cell_gallery_focus_pane_g1

0xc78e,	// (0x0003a4ac) bg_cell_gallery_focus_pane_g2

0xc796,	// (0x0003a4b4) bg_cell_gallery_focus_pane_g3

0xc79e,	// (0x0003a4bc) bg_cell_gallery_focus_pane_g4

0xc7a6,	// (0x0003a4c4) bg_cell_gallery_focus_pane_g5

0xc7ae,	// (0x0003a4cc) bg_cell_gallery_focus_pane_g6

0xc7b6,	// (0x0003a4d4) bg_cell_gallery_focus_pane_g7

0xc7be,	// (0x0003a4dc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0003d3e0) bg_cell_gallery_focus_pane_g

0xc7c6,	// (0x0003a4e4) aid_firma_cardinal

0xc7da,	// (0x0003a4f8) blid_firmament_pane_t1

0xc7f1,	// (0x0003a50f) blid_firmament_pane_t2

0xc808,	// (0x0003a526) blid_firmament_pane_t3

0xc81f,	// (0x0003a53d) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0003d3f1) blid_firmament_pane_t

0xc836,	// (0x0003a554) blid_sat_info_pane

0xc846,	// (0x0003a564) blid_sat_info_pane_g1

0xc846,	// (0x0003a564) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0003d3fa) blid_sat_info_pane_g

0xc850,	// (0x0003a56e) blid_sat_info_pane_t1

0xc85e,	// (0x0003a57c) smil2_volume_content_pane

0xc867,	// (0x0003a585) smil2_volume_pane_g1

0xc86f,	// (0x0003a58d) smil2_volume_content_pane_g1

0xc878,	// (0x0003a596) smil2_volume_content_pane_g2

0xc881,	// (0x0003a59f) smil2_volume_content_pane_g3

0xc88a,	// (0x0003a5a8) smil2_volume_content_pane_g4

0xc893,	// (0x0003a5b1) smil2_volume_content_pane_g5

0xc89c,	// (0x0003a5ba) smil2_volume_content_pane_g6

0xc8a5,	// (0x0003a5c3) smil2_volume_content_pane_g7

0xc8ae,	// (0x0003a5cc) smil2_volume_content_pane_g8

0xc8b7,	// (0x0003a5d5) smil2_volume_content_pane_g9

0xc8c0,	// (0x0003a5de) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0003d3ff) smil2_volume_content_pane_g

0x20a8,	// (0x0002fdc6) cale_week_day_heading_pane_t1_ParamLimits

0x20ed,	// (0x0002fe0b) cale_week_day_heading_pane_t2_ParamLimits

0x2137,	// (0x0002fe55) cale_week_day_heading_pane_t3_ParamLimits

0x2181,	// (0x0002fe9f) cale_week_day_heading_pane_t4_ParamLimits

0x21cb,	// (0x0002fee9) cale_week_day_heading_pane_t5_ParamLimits

0x221d,	// (0x0002ff3b) cale_week_day_heading_pane_t6_ParamLimits

0x226f,	// (0x0002ff8d) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0003ceeb) cale_week_day_heading_pane_t_ParamLimits

0xa450,	// (0x0003816e) bg_cale_side_pane_ParamLimits

0x04cd,	// (0x0002e1eb) cale_week_time_pane_t1_ParamLimits

0x04e7,	// (0x0002e205) cale_week_time_pane_t2_ParamLimits

0x0501,	// (0x0002e21f) cale_week_time_pane_t3_ParamLimits

0x051b,	// (0x0002e239) cale_week_time_pane_t4_ParamLimits

0x0535,	// (0x0002e253) cale_week_time_pane_t5_ParamLimits

0x054f,	// (0x0002e26d) cale_week_time_pane_t6_ParamLimits

0x0569,	// (0x0002e287) cale_week_time_pane_t7_ParamLimits

0x0583,	// (0x0002e2a1) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0003cefa) cale_week_time_pane_t_ParamLimits

0x22b4,	// (0x0002ffd2) cell_cale_week_pane_g2_ParamLimits

0xa450,	// (0x0003816e) bg_cale_side_pane_cp01_ParamLimits

0x3527,	// (0x00031245) cale_month_week_pane_t1_ParamLimits

0x3540,	// (0x0003125e) cale_month_week_pane_t2_ParamLimits

0x3559,	// (0x00031277) cale_month_week_pane_t3_ParamLimits

0x3572,	// (0x00031290) cale_month_week_pane_t4_ParamLimits

0x358b,	// (0x000312a9) cale_month_week_pane_t5_ParamLimits

0x35a4,	// (0x000312c2) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003cfd3) cale_month_week_pane_t_ParamLimits

0x3711,	// (0x0003142f) cell_cale_month_pane_g1_ParamLimits

0x19af,	// (0x0002f6cd) main_cale_event_viewer_pane

0x9ba8,	// (0x000378c6) listscroll_cale_event_viewer_pane

0xc8c9,	// (0x0003a5e7) list_cale_ev_pane

0xc8d1,	// (0x0003a5ef) scroll_pane_cp023

0xc8dd,	// (0x0003a5fb) field_cale_ev_pane_ParamLimits

0xc8dd,	// (0x0003a5fb) field_cale_ev_pane

0xc8fb,	// (0x0003a619) field_cale_ev_content_pane_ParamLimits

0xc8fb,	// (0x0003a619) field_cale_ev_content_pane

0xc907,	// (0x0003a625) field_cale_ev_pane_g1_ParamLimits

0xc907,	// (0x0003a625) field_cale_ev_pane_g1

0xc913,	// (0x0003a631) field_cale_ev_pane_g2_ParamLimits

0xc913,	// (0x0003a631) field_cale_ev_pane_g2

0xc92b,	// (0x0003a649) field_cale_ev_pane_g3_ParamLimits

0xc92b,	// (0x0003a649) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0003d414) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0003d414) field_cale_ev_pane_g

0xc943,	// (0x0003a661) field_cale_ev_pane_t1_ParamLimits

0xc943,	// (0x0003a661) field_cale_ev_pane_t1

0xc95a,	// (0x0003a678) field_cale_ev_content_pane_t1_ParamLimits

0xc95a,	// (0x0003a678) field_cale_ev_content_pane_t1

0xb136,	// (0x00038e54) bg_button_pane_cp01

0x1dd5,	// (0x0002faf3) listscroll_cale_week_pane_ParamLimits

0xa3fa,	// (0x00038118) popup_toolbar_window_cp01

0xa421,	// (0x0003813f) listscroll_cale_week_pane_t1_ParamLimits

0x1dd5,	// (0x0002faf3) listscroll_cale_day_pane_ParamLimits

0xa3fa,	// (0x00038118) popup_toolbar_window_cp02

0xa8e9,	// (0x00038607) listscroll_cale_day_pane_t1_ParamLimits

0x0685,	// (0x0002e3a3) main_cale_month_pane_ParamLimits

0x4a83,	// (0x000327a1) popup_toolbar_window_cp03_ParamLimits

0x4a83,	// (0x000327a1) popup_toolbar_window_cp03

0x4363,	// (0x00032081) main_image_pane_g2_ParamLimits

0x4363,	// (0x00032081) main_image_pane_g2

0x4374,	// (0x00032092) main_image_pane_g3_ParamLimits

0x4374,	// (0x00032092) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003d205) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003d205) main_image_pane_g

0xb2c9,	// (0x00038fe7) main_image_pane_t1_ParamLimits

0x4385,	// (0x000320a3) main_image_pane_t2_ParamLimits

0x4385,	// (0x000320a3) main_image_pane_t2

0x4397,	// (0x000320b5) main_image_pane_t3_ParamLimits

0x4397,	// (0x000320b5) main_image_pane_t3

0x43bf,	// (0x000320dd) main_image_pane_t4_ParamLimits

0x43bf,	// (0x000320dd) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003d20c) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003d20c) main_image_pane_t

0x43df,	// (0x000320fd) popup_image_details_window_cp01

0x43e9,	// (0x00032107) popup_toobar_trans_pane_cp01_ParamLimits

0x43e9,	// (0x00032107) popup_toobar_trans_pane_cp01

0x079e,	// (0x0002e4bc) popup_image_details_window_ParamLimits

0x079e,	// (0x0002e4bc) popup_image_details_window

0x4a56,	// (0x00032774) popup_image_focus_window

0x0923,	// (0x0002e641) camera2_autofocus_pane_ParamLimits

0x0923,	// (0x0002e641) camera2_autofocus_pane

0x9ba8,	// (0x000378c6) bg_popup_sub_pane_cp06

0xc978,	// (0x0003a696) popup_image_focus_window_g1

0xc980,	// (0x0003a69e) popup_image_focus_window_g2

0xc988,	// (0x0003a6a6) popup_image_focus_window_g3

0xc990,	// (0x0003a6ae) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0003d41b) popup_image_focus_window_g

0xc998,	// (0x0003a6b6) popup_image_focus_window_t1

0xc9a6,	// (0x0003a6c4) popup_image_focus_window_t2

0xc9b6,	// (0x0003a6d4) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0003d424) popup_image_focus_window_t

0xc9c4,	// (0x0003a6e2) camera2_autofocus_pane_g1

0xa724,	// (0x00038442) bg_tb_trans_pane_cp01

0xc9d2,	// (0x0003a6f0) popup_image_details_window_g1

0xc9e5,	// (0x0003a703) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0003d436) popup_image_details_window_g

0xca0e,	// (0x0003a72c) popup_image_details_window_t1

0xca20,	// (0x0003a73e) popup_image_details_window_t2

0xca39,	// (0x0003a757) popup_image_details_window_t3

0xca4d,	// (0x0003a76b) popup_image_details_window_t4

0xca68,	// (0x0003a786) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0003d43d) popup_image_details_window_t

0xa2d1,	// (0x00037fef) bg_calc_paper_pane_ParamLimits

0x19af,	// (0x0002f6cd) grid_highlight_pane_cp013

0x1c29,	// (0x0002f947) list_calc_pane_ParamLimits

0x1c3b,	// (0x0002f959) scroll_pane_cp024

0xa2e5,	// (0x00038003) bg_calc_display_pane_ParamLimits

0x0424,	// (0x0002e142) calc_display_pane_t1_ParamLimits

0x0436,	// (0x0002e154) calc_display_pane_t2_ParamLimits

0x1c43,	// (0x0002f961) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0003ce6b) calc_display_pane_t_ParamLimits

0x0497,	// (0x0002e1b5) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0003ce88) cell_calc_pane_g

0x04a0,	// (0x0002e1be) cell_calc_pane_t1

0xa344,	// (0x00038062) grid_highlight_pane_cp02_ParamLimits

0xa35a,	// (0x00038078) toolbar_button_pane_cp01_ParamLimits

0xa35a,	// (0x00038078) toolbar_button_pane_cp01

0xb30e,	// (0x0003902c) temp_image_control_pane_ParamLimits

0xb30e,	// (0x0003902c) temp_image_control_pane

0x1995,	// (0x0002f6b3) main_mp3_pane

0xca82,	// (0x0003a7a0) temp_image_control_pane_g1_ParamLimits

0xca82,	// (0x0003a7a0) temp_image_control_pane_g1

0xca90,	// (0x0003a7ae) temp_image_control_pane_g2_ParamLimits

0xca90,	// (0x0003a7ae) temp_image_control_pane_g2

0xcaa2,	// (0x0003a7c0) temp_image_control_pane_g3_ParamLimits

0xcaa2,	// (0x0003a7c0) temp_image_control_pane_g3

0x515a,	// (0x00032e78) temp_image_control_pane_g4_ParamLimits

0x515a,	// (0x00032e78) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0003d448) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0003d448) temp_image_control_pane_g

0xca82,	// (0x0003a7a0) main_mp3_pane_g1

0x516d,	// (0x00032e8b) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0003d451) main_mp3_pane_g

0xcae5,	// (0x0003a803) main_mp3_pane_t1

0xa4ab,	// (0x000381c9) main_camera_pane_g8_ParamLimits

0xa4ab,	// (0x000381c9) main_camera_pane_g8

0x2570,	// (0x0003028e) main_video_pane_g7_ParamLimits

0x2570,	// (0x0003028e) main_video_pane_g7

0x4d6a,	// (0x00032a88) main_camera2_pane_t7_ParamLimits

0x4d6a,	// (0x00032a88) main_camera2_pane_t7

0xa5f3,	// (0x00038311) scroll_pane_cp025_ParamLimits

0xa5f3,	// (0x00038311) scroll_pane_cp025

0xa607,	// (0x00038325) scroll_pane_cp026_ParamLimits

0xa607,	// (0x00038325) scroll_pane_cp026

0xa616,	// (0x00038334) wml_content_pane_ParamLimits

0x19af,	// (0x0002f6cd) main_touch_calib_pane

0x5241,	// (0x00032f5f) main_touch_calib_pane_g1

0x5253,	// (0x00032f71) main_touch_calib_pane_g2

0x5265,	// (0x00032f83) main_touch_calib_pane_g3

0x5277,	// (0x00032f95) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0003d46f) main_touch_calib_pane_g

0x5289,	// (0x00032fa7) main_touch_calib_pane_t1

0x52a3,	// (0x00032fc1) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0003d478) main_touch_calib_pane_t

0xae52,	// (0x00038b70) mup_progress_pane_cp02

0xae87,	// (0x00038ba5) navi_pane_g1

0xaf42,	// (0x00038c60) navi_pane_mp_t3

0x1995,	// (0x0002f6b3) main_mp3_pane_ParamLimits

0x4a98,	// (0x000327b6) navi_pane_ParamLimits

0xca82,	// (0x0003a7a0) main_mp3_pane_g1_ParamLimits

0x516d,	// (0x00032e8b) main_mp3_pane_g2_ParamLimits

0x517b,	// (0x00032e99) main_mp3_pane_g3_ParamLimits

0x517b,	// (0x00032e99) main_mp3_pane_g3

0x5189,	// (0x00032ea7) main_mp3_pane_g4_ParamLimits

0x5189,	// (0x00032ea7) main_mp3_pane_g4

0xcab2,	// (0x0003a7d0) main_mp3_pane_g5_ParamLimits

0xcab2,	// (0x0003a7d0) main_mp3_pane_g5

0xcac0,	// (0x0003a7de) main_mp3_pane_g6_ParamLimits

0xcac0,	// (0x0003a7de) main_mp3_pane_g6

0xcacd,	// (0x0003a7eb) main_mp3_pane_g7_ParamLimits

0xcacd,	// (0x0003a7eb) main_mp3_pane_g7

0xcad9,	// (0x0003a7f7) main_mp3_pane_g8_ParamLimits

0xcad9,	// (0x0003a7f7) main_mp3_pane_g8

0xf733,	// (0x0003d451) main_mp3_pane_g_ParamLimits

0x5195,	// (0x00032eb3) main_mp3_pane_t2

0x51a3,	// (0x00032ec1) main_mp3_pane_t3

0xcaf3,	// (0x0003a811) main_mp3_pane_t4

0xcb01,	// (0x0003a81f) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0003d462) main_mp3_pane_t

0xcb0f,	// (0x0003a82d) mup_progress_pane_cp01

0x190a,	// (0x0002f628) aid_zoom_text_secondary2

0xc8c9,	// (0x0003a5e7) list_cale_ev2_pane

0xc8d1,	// (0x0003a5ef) scroll_pane_cp023_ParamLimits

0x52f9,	// (0x00033017) field_cale_ev2_pane_ParamLimits

0x52f9,	// (0x00033017) field_cale_ev2_pane

0x5319,	// (0x00033037) field_cale_ev2_pane_g1_ParamLimits

0x5319,	// (0x00033037) field_cale_ev2_pane_g1

0x5325,	// (0x00033043) field_cale_ev2_pane_g2_ParamLimits

0x5325,	// (0x00033043) field_cale_ev2_pane_g2

0x533d,	// (0x0003305b) field_cale_ev2_pane_g3_ParamLimits

0x533d,	// (0x0003305b) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0003d483) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0003d483) field_cale_ev2_pane_g

0x5355,	// (0x00033073) field_cale_ev2_pane_t1_ParamLimits

0x5355,	// (0x00033073) field_cale_ev2_pane_t1

0x536c,	// (0x0003308a) field_cale_ev2_pane_t2_ParamLimits

0x536c,	// (0x0003308a) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0003d48c) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0003d48c) field_cale_ev2_pane_t

0x4218,	// (0x00031f36) main_postcard_pane_g5_ParamLimits

0x4218,	// (0x00031f36) main_postcard_pane_g5

0x422e,	// (0x00031f4c) main_postcard_pane_g6_ParamLimits

0x422e,	// (0x00031f4c) main_postcard_pane_g6

0x233c,	// (0x0003005a) camera2_autofocus_pane_cp_ParamLimits

0x233c,	// (0x0003005a) camera2_autofocus_pane_cp

0x1995,	// (0x0002f6b3) main_mup3_pane

0x5381,	// (0x0003309f) main_mup3_pane_g1_ParamLimits

0x5381,	// (0x0003309f) main_mup3_pane_g1

0x53a3,	// (0x000330c1) main_mup3_pane_g2_ParamLimits

0x53a3,	// (0x000330c1) main_mup3_pane_g2

0x5421,	// (0x0003313f) main_mup3_pane_g3_ParamLimits

0x5421,	// (0x0003313f) main_mup3_pane_g3

0x5467,	// (0x00033185) main_mup3_pane_g4_ParamLimits

0x5467,	// (0x00033185) main_mup3_pane_g4

0x54ad,	// (0x000331cb) main_mup3_pane_g5_ParamLimits

0x54ad,	// (0x000331cb) main_mup3_pane_g5

0x54f3,	// (0x00033211) main_mup3_pane_g6_ParamLimits

0x54f3,	// (0x00033211) main_mup3_pane_g6

0xcb43,	// (0x0003a861) main_mup3_pane_g7_ParamLimits

0xcb43,	// (0x0003a861) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0003d49c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0003d49c) main_mup3_pane_g

0x5571,	// (0x0003328f) main_mup3_pane_t1_ParamLimits

0x5571,	// (0x0003328f) main_mup3_pane_t1

0x55e5,	// (0x00033303) main_mup3_pane_t2_ParamLimits

0x55e5,	// (0x00033303) main_mup3_pane_t2

0x56b9,	// (0x000333d7) main_mup3_pane_t4_ParamLimits

0x56b9,	// (0x000333d7) main_mup3_pane_t4

0x570f,	// (0x0003342d) main_mup3_pane_t5_ParamLimits

0x570f,	// (0x0003342d) main_mup3_pane_t5

0x57cb,	// (0x000334e9) main_mup3_pane_t6_ParamLimits

0x57cb,	// (0x000334e9) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0003d4ad) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0003d4ad) main_mup3_pane_t

0x5883,	// (0x000335a1) mup3_progress_pane_ParamLimits

0x5883,	// (0x000335a1) mup3_progress_pane

0x5919,	// (0x00033637) popup_mup3_control_window_ParamLimits

0x5919,	// (0x00033637) popup_mup3_control_window

0xcb51,	// (0x0003a86f) popup_mup3_text_window

0x594b,	// (0x00033669) mup3_progress_pane_t1

0x596a,	// (0x00033688) mup3_progress_pane_t2

0xcb59,	// (0x0003a877) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0003d4ba) mup3_progress_pane_t

0xcb76,	// (0x0003a894) mup_progress_pane_cp03

0x9ba8,	// (0x000378c6) bg_tb_trans_pane_cp04

0x5989,	// (0x000336a7) mup3_volume_pane

0x5991,	// (0x000336af) popup_mup3_control_window_g1

0x599a,	// (0x000336b8) mup3_volume_pane_g1

0x59a3,	// (0x000336c1) mup3_volume_pane_g2

0x59ac,	// (0x000336ca) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0003d4c1) mup3_volume_pane_g

0x9ba8,	// (0x000378c6) bg_tb_trans_pane_cp03

0xcb86,	// (0x0003a8a4) popup_mup3_text_window_g1

0xcb8e,	// (0x0003a8ac) popup_mup3_text_window_t1

0xa32d,	// (0x0003804b) list_calc_item_pane_g1_ParamLimits

0xc599,	// (0x0003a2b7) mup_volume_pane_cp_g1

0x52bd,	// (0x00032fdb) main_touch_calib_pane_t3

0x52d1,	// (0x00032fef) main_touch_calib_pane_t4

0x52e5,	// (0x00033003) main_touch_calib_pane_t5

0x18f6,	// (0x0002f614) aid_cell_size_toolbar2

0x18fe,	// (0x0002f61c) aid_popup3_width_pane

0x190a,	// (0x0002f628) aid_zoom_text_msg_primary

0x05f9,	// (0x0002e317) vorec_t7

0xa2f1,	// (0x0003800f) bg_calc_paper_pane_g1_ParamLimits

0xa2fd,	// (0x0003801b) bg_calc_paper_pane_g2_ParamLimits

0xa309,	// (0x00038027) bg_calc_paper_pane_g3_ParamLimits

0xa315,	// (0x00038033) bg_calc_paper_pane_g4_ParamLimits

0xa321,	// (0x0003803f) bg_calc_paper_pane_g5_ParamLimits

0x1c55,	// (0x0002f973) bg_calc_paper_pane_g6_ParamLimits

0x1c64,	// (0x0002f982) bg_calc_paper_pane_g7_ParamLimits

0x1c73,	// (0x0002f991) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0003ce72) bg_calc_paper_pane_g_ParamLimits

0x1c86,	// (0x0002f9a4) calc_bg_paper_pane_g9_ParamLimits

0x2487,	// (0x000301a5) image_qvga_pane_ParamLimits

0x2487,	// (0x000301a5) image_qvga_pane

0xa220,	// (0x00037f3e) bg_popup_sub_pane_cp04_ParamLimits

0xb245,	// (0x00038f63) popup_mup_playback_window_g1_ParamLimits

0xb251,	// (0x00038f6f) popup_mup_playback_window_t1_ParamLimits

0xb266,	// (0x00038f84) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003d200) popup_mup_playback_window_t_ParamLimits

0x4d98,	// (0x00032ab6) main_mup2_pane_g3_ParamLimits

0x4d98,	// (0x00032ab6) main_mup2_pane_g3

0x2897,	// (0x000305b5) popup_toolbar_window_cp04

0xb648,	// (0x00039366) popup_call2_audio_second_window_g3_ParamLimits

0xb648,	// (0x00039366) popup_call2_audio_second_window_g3

0xba52,	// (0x00039770) popup_call2_audio_first_window_g4_ParamLimits

0xba52,	// (0x00039770) popup_call2_audio_first_window_g4

0xc0d1,	// (0x00039def) popup_call2_audio_in_window_g4_ParamLimits

0xc0d1,	// (0x00039def) popup_call2_audio_in_window_g4

0x4345,	// (0x00032063) aid_area_sk_bg_cut_ParamLimits

0x4345,	// (0x00032063) aid_area_sk_bg_cut

0xb27b,	// (0x00038f99) aid_area_sk_bg_cut_2_ParamLimits

0xb27b,	// (0x00038f99) aid_area_sk_bg_cut_2

0x5100,	// (0x00032e1e) aid_placing_details_win

0x5108,	// (0x00032e26) aid_placing_details_win_2

0xc9c4,	// (0x0003a6e2) camera2_autofocus_pane_g1_ParamLimits

0x02e0,	// (0x0002dffe) popup_fixed_preview_cale_window_ParamLimits

0x02e0,	// (0x0002dffe) popup_fixed_preview_cale_window

0xafc8,	// (0x00038ce6) navi_slider_pane_g3

0xafd1,	// (0x00038cef) navi_slider_pane_g4

0xafda,	// (0x00038cf8) navi_slider_pane_g5

0xafc8,	// (0x00038ce6) navi_slider_pane_g6

0x3c78,	// (0x00031996) navi_slider_pane_g7

0xb0fb,	// (0x00038e19) mup_scale_pane_g3

0xb104,	// (0x00038e22) mup_scale_pane_g4

0xb10d,	// (0x00038e2b) mup_scale_pane_g5

0x407b,	// (0x00031d99) mup_scale_pane_g6

0x4084,	// (0x00031da2) mup_scale_pane_g7

0xafc8,	// (0x00038ce6) cams2_slider_pane_g3

0xc61b,	// (0x0003a339) cams2_slider_pane_g4

0x504d,	// (0x00032d6b) cams2_slider_pane_g5

0xafc8,	// (0x00038ce6) cams2_slider_pane_g6

0x5055,	// (0x00032d73) cams2_slider_pane_g7

0xc846,	// (0x0003a564) camera2_autofocus_pane_cp_g1

0xc432,	// (0x0003a150) bg_popup_preview_window_pane_cp02_ParamLimits

0xc432,	// (0x0003a150) bg_popup_preview_window_pane_cp02

0xcb9c,	// (0x0003a8ba) list_fp_cale_pane_ParamLimits

0xcb9c,	// (0x0003a8ba) list_fp_cale_pane

0xcba8,	// (0x0003a8c6) popup_fixed_preview_cale_window_t1_ParamLimits

0xcba8,	// (0x0003a8c6) popup_fixed_preview_cale_window_t1

0x59b5,	// (0x000336d3) popup_fixed_preview_cale_window_t2_ParamLimits

0x59b5,	// (0x000336d3) popup_fixed_preview_cale_window_t2

0x59ca,	// (0x000336e8) popup_fixed_preview_cale_window_t3_ParamLimits

0x59ca,	// (0x000336e8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0003d4c8) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0003d4c8) popup_fixed_preview_cale_window_t

0x59df,	// (0x000336fd) list_single_fp_cale_pane_ParamLimits

0x59df,	// (0x000336fd) list_single_fp_cale_pane

0xcbc6,	// (0x0003a8e4) list_single_fp_cale_pane_g1_ParamLimits

0xcbc6,	// (0x0003a8e4) list_single_fp_cale_pane_g1

0xcbd2,	// (0x0003a8f0) list_single_fp_cale_pane_g2_ParamLimits

0xcbd2,	// (0x0003a8f0) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0003d4cf) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0003d4cf) list_single_fp_cale_pane_g

0xcbeb,	// (0x0003a909) list_single_fp_cale_pane_t1_ParamLimits

0xcbeb,	// (0x0003a909) list_single_fp_cale_pane_t1

0xcbfd,	// (0x0003a91b) list_single_fp_cale_pane_t2_ParamLimits

0xcbfd,	// (0x0003a91b) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0003d4d6) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0003d4d6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x19af,	// (0x0002f6cd) main_dialer_pane

0x59f4,	// (0x00033712) aid_cell_size_keypad

0x59fe,	// (0x0003371c) dialer_ne_pane

0x5a06,	// (0x00033724) grid_dialer_command_1_pane

0x5a0e,	// (0x0003372c) grid_dialer_command_2_pane

0x5a16,	// (0x00033734) grid_dialer_keypad_pane

0x5a28,	// (0x00033746) bg_popup_call_pane_cp06_ParamLimits

0x5a28,	// (0x00033746) bg_popup_call_pane_cp06

0x5a34,	// (0x00033752) dialer_ne_clear_pane_ParamLimits

0x5a34,	// (0x00033752) dialer_ne_clear_pane

0xcc30,	// (0x0003a94e) dialer_ne_pane_g1

0xcc38,	// (0x0003a956) dialer_ne_pane_t1_ParamLimits

0xcc38,	// (0x0003a956) dialer_ne_pane_t1

0x5a40,	// (0x0003375e) dialer_ne_pane_t2_ParamLimits

0x5a40,	// (0x0003375e) dialer_ne_pane_t2

0x5a6a,	// (0x00033788) dialer_ne_pane_t3_ParamLimits

0x5a6a,	// (0x00033788) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0003d4db) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0003d4db) dialer_ne_pane_t

0x5a9a,	// (0x000337b8) dialer_ne_pane_t3_copy1_ParamLimits

0x5a9a,	// (0x000337b8) dialer_ne_pane_t3_copy1

0x5ac9,	// (0x000337e7) cell_dialer_keypad_pane_ParamLimits

0x5ac9,	// (0x000337e7) cell_dialer_keypad_pane

0x5ae0,	// (0x000337fe) cell_dialer_command_1_pane_ParamLimits

0x5ae0,	// (0x000337fe) cell_dialer_command_1_pane

0x5af6,	// (0x00033814) cell_dialer_command_2_pane_ParamLimits

0x5af6,	// (0x00033814) cell_dialer_command_2_pane

0xcc4a,	// (0x0003a968) bg_button_pane_cp02_ParamLimits

0xcc4a,	// (0x0003a968) bg_button_pane_cp02

0x5b05,	// (0x00033823) cell_dialer_keypad_pane_g1_ParamLimits

0x5b05,	// (0x00033823) cell_dialer_keypad_pane_g1

0xcc4a,	// (0x0003a968) bg_button_pane_cp03_ParamLimits

0xcc4a,	// (0x0003a968) bg_button_pane_cp03

0x5b19,	// (0x00033837) cell_dialer_command_1_pane_g1_ParamLimits

0x5b19,	// (0x00033837) cell_dialer_command_1_pane_g1

0xcc56,	// (0x0003a974) bg_button_pane_cp04

0x5b2d,	// (0x0003384b) cell_dialer_command_2_pane_g1

0xafb7,	// (0x00038cd5) bg_button_pane_cp06

0xcc5e,	// (0x0003a97c) dialer_ne_clear_pane_g1

0xae93,	// (0x00038bb1) navi_pane_g2

0xaec1,	// (0x00038bdf) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003d103) navi_pane_g

0xaf50,	// (0x00038c6e) navi_pane_mv_g2

0xaf77,	// (0x00038c95) navi_pane_mv_g5

0x3c2d,	// (0x0003194b) navi_pane_mv_t1

0xa2e5,	// (0x00038003) main_clock2_pane

0x5b78,	// (0x00033896) main_clock2_list_pane_ParamLimits

0x5b78,	// (0x00033896) main_clock2_list_pane

0x5bae,	// (0x000338cc) main_clock2_pane_t1_ParamLimits

0x5bae,	// (0x000338cc) main_clock2_pane_t1

0x5bea,	// (0x00033908) main_clock2_pane_t2_ParamLimits

0x5bea,	// (0x00033908) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0003d4e7) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0003d4e7) main_clock2_pane_t

0x5c88,	// (0x000339a6) popup_clock_analogue_window_cp03_ParamLimits

0x5c88,	// (0x000339a6) popup_clock_analogue_window_cp03

0x5cad,	// (0x000339cb) popup_clock_digital_window_cp02_ParamLimits

0x5cad,	// (0x000339cb) popup_clock_digital_window_cp02

0x5d1e,	// (0x00033a3c) main_clock2_list_single_pane_ParamLimits

0x5d1e,	// (0x00033a3c) main_clock2_list_single_pane

0xafb7,	// (0x00038cd5) list_highlight_pane_cp05

0xcca8,	// (0x0003a9c6) main_clock2_list_single_pane_t1

0x2897,	// (0x000305b5) popup_toolbar_window_cp04_ParamLimits

0x512a,	// (0x00032e48) camera2_autofocus_pane_g2_ParamLimits

0x512a,	// (0x00032e48) camera2_autofocus_pane_g2

0x5136,	// (0x00032e54) camera2_autofocus_pane_g3_ParamLimits

0x5136,	// (0x00032e54) camera2_autofocus_pane_g3

0x5142,	// (0x00032e60) camera2_autofocus_pane_g4_ParamLimits

0x5142,	// (0x00032e60) camera2_autofocus_pane_g4

0x514e,	// (0x00032e6c) camera2_autofocus_pane_g5_ParamLimits

0x514e,	// (0x00032e6c) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0003d42b) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0003d42b) camera2_autofocus_pane_g

0xcb23,	// (0x0003a841) camera2_autofocus_pane_cp_g2

0xcb2b,	// (0x0003a849) camera2_autofocus_pane_cp_g3

0xcb33,	// (0x0003a851) camera2_autofocus_pane_cp_g4

0xcb3b,	// (0x0003a859) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0003d491) camera2_autofocus_pane_cp_g

0x5a20,	// (0x0003373e) popup_dialer_spcha_window

0x9ba8,	// (0x000378c6) bg_popup_sub_pane_cp07

0xccb6,	// (0x0003a9d4) list_spcha_pane

0xccbe,	// (0x0003a9dc) list_single_spcha_pane_ParamLimits

0xccbe,	// (0x0003a9dc) list_single_spcha_pane

0x9ba8,	// (0x000378c6) list_highlight_pane_cp06

0xcccf,	// (0x0003a9ed) list_single_spcha_pane_t1

0xbe7b,	// (0x00039b99) popup_call2_audio_out_window_g4_ParamLimits

0xbe7b,	// (0x00039b99) popup_call2_audio_out_window_g4

0x19af,	// (0x0002f6cd) main_imed2_pane

0x4a5e,	// (0x0003277c) popup_imed_adjust2_window

0x07b6,	// (0x0002e4d4) popup_imed_trans_window_ParamLimits

0x07b6,	// (0x0002e4d4) popup_imed_trans_window

0xc684,	// (0x0003a3a2) popup_blid_sat_info2_window_t1

0xc692,	// (0x0003a3b0) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0003d3c0) popup_blid_sat_info2_window_t

0x5d50,	// (0x00033a6e) aid_size_cell_colour_35

0x5d70,	// (0x00033a8e) aid_size_cell_colour_112

0x5d90,	// (0x00033aae) aid_size_cell_effect

0xc43e,	// (0x0003a15c) bg_tb_trans_pane_cp02

0xa9f2,	// (0x00038710) heading_imed_pane

0x5db0,	// (0x00033ace) listscroll_imed_pane

0xccdd,	// (0x0003a9fb) heading_imed_pane_g1

0xcce5,	// (0x0003aa03) heading_imed_pane_t1

0xccf3,	// (0x0003aa11) grid_imed_colour_35_pane_ParamLimits

0xccf3,	// (0x0003aa11) grid_imed_colour_35_pane

0x5dbc,	// (0x00033ada) grid_imed_effect_pane

0xcd0a,	// (0x0003aa28) list_imed_aspect_pane

0x5dd2,	// (0x00033af0) scroll_pane_cp027_ParamLimits

0x5dd2,	// (0x00033af0) scroll_pane_cp027

0x5de3,	// (0x00033b01) cell_imed_effect_pane_ParamLimits

0x5de3,	// (0x00033b01) cell_imed_effect_pane

0xcd12,	// (0x0003aa30) cell_imed_colour_pane_ParamLimits

0xcd12,	// (0x0003aa30) cell_imed_colour_pane

0xcd54,	// (0x0003aa72) cell_imed_colour_pane_g1_ParamLimits

0xcd54,	// (0x0003aa72) cell_imed_colour_pane_g1

0xcd65,	// (0x0003aa83) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd65,	// (0x0003aa83) hgihlgiht_grid_pane_cp016

0x5e0a,	// (0x00033b28) cell_imed_effect_pane_g1

0x5e12,	// (0x00033b30) grid_highlight_pane_cp017

0xcd76,	// (0x0003aa94) list_imed_single_pane_ParamLimits

0xcd76,	// (0x0003aa94) list_imed_single_pane

0x9ba8,	// (0x000378c6) list_highlight_pane_cp07

0xcd8b,	// (0x0003aaa9) list_imed_aspect_pane_comp1_t1

0xc43e,	// (0x0003a15c) bg_tb_trans_pane_cp05

0xcdad,	// (0x0003aacb) popup_imed_adjust2_window_g1

0xcdd4,	// (0x0003aaf2) popup_imed_adjust2_window_t1

0xcdec,	// (0x0003ab0a) slider_imed_adjust_pane

0xce00,	// (0x0003ab1e) slider_imed_adjust_pane_g1

0xce10,	// (0x0003ab2e) slider_imed_adjust_pane_g2

0xce20,	// (0x0003ab3e) slider_imed_adjust_pane_g3

0xce31,	// (0x0003ab4f) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0003d504) slider_imed_adjust_pane_g

0x5e1b,	// (0x00033b39) aid_size_cell_clipart2

0x5e27,	// (0x00033b45) grid_imed_clipart_pane

0xce42,	// (0x0003ab60) scroll_pane_cp031

0x5e31,	// (0x00033b4f) cell_imed_clipart_pane_ParamLimits

0x5e31,	// (0x00033b4f) cell_imed_clipart_pane

0x5e53,	// (0x00033b71) cell_imed_clipart_pane_g1

0x9ba8,	// (0x000378c6) grid_highlight_pane_cp014

0x5b8d,	// (0x000338ab) main_clock2_pane_g1_ParamLimits

0x5b8d,	// (0x000338ab) main_clock2_pane_g1

0x5cc9,	// (0x000339e7) aid_call2_pane_cp10

0x5cdb,	// (0x000339f9) aid_call_pane_cp10

0xadf4,	// (0x00038b12) popup_clock_analogue_window_cp10_g1

0xadf4,	// (0x00038b12) popup_clock_analogue_window_cp10_g2

0x5ced,	// (0x00033a0b) popup_clock_analogue_window_cp10_g3

0x5ced,	// (0x00033a0b) popup_clock_analogue_window_cp10_g4

0xadf4,	// (0x00038b12) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0003d4f2) popup_clock_analogue_window_cp10_g

0x5cff,	// (0x00033a1d) popup_clock_analogue_window_cp10_t1

0x0dfa,	// (0x0002eb18) clock_digital_number_pane_cp10_ParamLimits

0x0dfa,	// (0x0002eb18) clock_digital_number_pane_cp10

0x0e12,	// (0x0002eb30) clock_digital_number_pane_cp11_ParamLimits

0x0e12,	// (0x0002eb30) clock_digital_number_pane_cp11

0x0e2a,	// (0x0002eb48) clock_digital_number_pane_cp12_ParamLimits

0x0e2a,	// (0x0002eb48) clock_digital_number_pane_cp12

0x0e42,	// (0x0002eb60) clock_digital_number_pane_cp13_ParamLimits

0x0e42,	// (0x0002eb60) clock_digital_number_pane_cp13

0x0e5a,	// (0x0002eb78) clock_digital_separator_pane_cp10_ParamLimits

0x0e5a,	// (0x0002eb78) clock_digital_separator_pane_cp10

0x5d30,	// (0x00033a4e) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d30,	// (0x00033a4e) popup_clock_digital_window_cp02_t1

0xa218,	// (0x00037f36) clock_digital_number_pane_cp10_g1

0xa218,	// (0x00037f36) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0003d50d) clock_digital_number_pane_cp10_g

0xa218,	// (0x00037f36) clock_digital_separator_pane_cp10_g1

0xa218,	// (0x00037f36) clock_digital_separator_pane_g2_cp10

0xaf7f,	// (0x00038c9d) navi_pane_vded_g4

0xaf88,	// (0x00038ca6) navi_pane_vded_g5

0xaf91,	// (0x00038caf) navi_pane_vded_t1

0x19af,	// (0x0002f6cd) main_vded_pane

0x5e5c,	// (0x00033b7a) main_vded_pane_g1

0x5e66,	// (0x00033b84) main_vded_pane_g2

0x5e70,	// (0x00033b8e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0003d512) main_vded_pane_g

0x5e7a,	// (0x00033b98) main_vded_pane_t1

0x5e88,	// (0x00033ba6) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0003d519) main_vded_pane_t

0x5e96,	// (0x00033bb4) vded_slider_pane

0x5e9e,	// (0x00033bbc) vded_video_pane

0xce4a,	// (0x0003ab68) vded_video_pane_g1

0x5ea6,	// (0x00033bc4) vded_video_pane_g2

0xc846,	// (0x0003a564) vded_video_pane_g3

0x0002,

0xf800,	// (0x0003d51e) vded_video_pane_g

0xce54,	// (0x0003ab72) vded_slider_pane_g1

0xc599,	// (0x0003a2b7) vded_slider_pane_g2

0xce5d,	// (0x0003ab7b) vded_slider_pane_g3

0xce66,	// (0x0003ab84) vded_slider_pane_g4

0xce6f,	// (0x0003ab8d) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0003d525) vded_slider_pane_g

0x5901,	// (0x0003361f) mup3_rocker_pane_ParamLimits

0x5901,	// (0x0003361f) mup3_rocker_pane

0x5eaf,	// (0x00033bcd) mup3_control_keys_pane_g1

0x5eb7,	// (0x00033bd5) mup3_control_keys_pane_g2

0x5ebf,	// (0x00033bdd) mup3_control_keys_pane_g3

0x5ec7,	// (0x00033be5) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0003d530) mup3_control_keys_pane_g

0x0317,	// (0x0002e035) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0317,	// (0x0002e035) popup_toolbar2_fixed_window_cp01

0x5935,	// (0x00033653) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5935,	// (0x00033653) popup_toolbar2_fixed_window_cp02

0xb7ba,	// (0x000394d8) popup_call2_audio_second_window_t4_ParamLimits

0xb7ba,	// (0x000394d8) popup_call2_audio_second_window_t4

0xbce8,	// (0x00039a06) popup_call2_audio_first_window_t6_ParamLimits

0xbce8,	// (0x00039a06) popup_call2_audio_first_window_t6

0xbf7e,	// (0x00039c9c) popup_call2_audio_out_window_t6_ParamLimits

0xbf7e,	// (0x00039c9c) popup_call2_audio_out_window_t6

0x19af,	// (0x0002f6cd) main_vitu_pane

0x5ed7,	// (0x00033bf5) aid_size_cell_itu_ParamLimits

0x5ed7,	// (0x00033bf5) aid_size_cell_itu

0xa724,	// (0x00038442) bg_popup_window_pane_cp08_ParamLimits

0xa724,	// (0x00038442) bg_popup_window_pane_cp08

0x5eed,	// (0x00033c0b) field_vitu_entry_pane_ParamLimits

0x5eed,	// (0x00033c0b) field_vitu_entry_pane

0x5f04,	// (0x00033c22) grid_vitu_function_pane_ParamLimits

0x5f04,	// (0x00033c22) grid_vitu_function_pane

0x5f1f,	// (0x00033c3d) grid_vitu_itu_pane_ParamLimits

0x5f1f,	// (0x00033c3d) grid_vitu_itu_pane

0x5f3d,	// (0x00033c5b) cell_vitu_itu_pane_ParamLimits

0x5f3d,	// (0x00033c5b) cell_vitu_itu_pane

0x5f5f,	// (0x00033c7d) cell_vitu_function_pane_ParamLimits

0x5f5f,	// (0x00033c7d) cell_vitu_function_pane

0xa724,	// (0x00038442) bg_popup_sub_pane_cp08_ParamLimits

0xa724,	// (0x00038442) bg_popup_sub_pane_cp08

0x5f78,	// (0x00033c96) field_vitu_entry_pane_t1_ParamLimits

0x5f78,	// (0x00033c96) field_vitu_entry_pane_t1

0xce90,	// (0x0003abae) field_vitu_entry_pane_t2_ParamLimits

0xce90,	// (0x0003abae) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0003d53e) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0003d53e) field_vitu_entry_pane_t

0xcead,	// (0x0003abcb) bg_button_pane_cp05_ParamLimits

0xcead,	// (0x0003abcb) bg_button_pane_cp05

0x5f96,	// (0x00033cb4) cell_vitu_itu_pane_g1

0x5fae,	// (0x00033ccc) cell_vitu_itu_pane_t1_ParamLimits

0x5fae,	// (0x00033ccc) cell_vitu_itu_pane_t1

0x5fc0,	// (0x00033cde) cell_vitu_itu_pane_t2_ParamLimits

0x5fc0,	// (0x00033cde) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0003d543) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0003d543) cell_vitu_itu_pane_t

0xcebb,	// (0x0003abd9) bg_button_pane_cp07

0x5ff5,	// (0x00033d13) cell_vitu_function_pane_g1

0x1b51,	// (0x0002f86f) main_calc_pane_g1

0x0177,	// (0x0002de95) aid_visual_content_pane

0x19af,	// (0x0002f6cd) main_vradio_pane

0x5ffe,	// (0x00033d1c) main_vradio_pane_g1_ParamLimits

0x5ffe,	// (0x00033d1c) main_vradio_pane_g1

0xcec5,	// (0x0003abe3) main_vradio_pane_g2_ParamLimits

0xcec5,	// (0x0003abe3) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0003d54a) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0003d54a) main_vradio_pane_g

0x6017,	// (0x00033d35) main_vradio_pane_t1_ParamLimits

0x6017,	// (0x00033d35) main_vradio_pane_t1

0x602c,	// (0x00033d4a) main_vradio_pane_t2_ParamLimits

0x602c,	// (0x00033d4a) main_vradio_pane_t2

0xced2,	// (0x0003abf0) main_vradio_pane_t3_ParamLimits

0xced2,	// (0x0003abf0) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0003d54f) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0003d54f) main_vradio_pane_t

0x6041,	// (0x00033d5f) vradio_rocker_control_pane_ParamLimits

0x6041,	// (0x00033d5f) vradio_rocker_control_pane

0x6053,	// (0x00033d71) vradio_station_info_pane_ParamLimits

0x6053,	// (0x00033d71) vradio_station_info_pane

0xcee6,	// (0x0003ac04) vradio_frequency_info_pane_ParamLimits

0xcee6,	// (0x0003ac04) vradio_frequency_info_pane

0xc846,	// (0x0003a564) vradio_station_info_pane_g1

0xcef5,	// (0x0003ac13) vradio_station_info_pane_t1_ParamLimits

0xcef5,	// (0x0003ac13) vradio_station_info_pane_t1

0xcf17,	// (0x0003ac35) vradio_station_info_pane_t2_ParamLimits

0xcf17,	// (0x0003ac35) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0003d556) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0003d556) vradio_station_info_pane_t

0xcf29,	// (0x0003ac47) vradio_tuning_pane

0xcf31,	// (0x0003ac4f) vradio_rocker_control_pane_g1

0xcf39,	// (0x0003ac57) vradio_rocker_control_pane_g2

0xcf41,	// (0x0003ac5f) vradio_rocker_control_pane_g3

0xcf49,	// (0x0003ac67) vradio_rocker_control_pane_g4

0xcf51,	// (0x0003ac6f) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0003d55b) vradio_rocker_control_pane_g

0x6065,	// (0x00033d83) vradio_frequency_info_pane_g1

0xcf59,	// (0x0003ac77) vradio_frequency_info_pane_t1_ParamLimits

0xcf59,	// (0x0003ac77) vradio_frequency_info_pane_t1

0x606f,	// (0x00033d8d) vradio_tuning_pane_g1

0x607a,	// (0x00033d98) vradio_tuning_pane_t1

0x1953,	// (0x0002f671) area_side_right_pane_ParamLimits

0x1953,	// (0x0002f671) area_side_right_pane

0xc3f9,	// (0x0003a117) status_small_pane_g1

0xc401,	// (0x0003a11f) status_small_pane_g2

0xc40a,	// (0x0003a128) status_small_pane_g3

0xc413,	// (0x0003a131) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0003d316) status_small_pane_g

0xc41c,	// (0x0003a13a) status_small_pane_t1

0x19af,	// (0x0002f6cd) main_video3_pane

0xcf6d,	// (0x0003ac8b) cams_zoom_vslider_pane

0xcf75,	// (0x0003ac93) image3_wide_pane_ParamLimits

0xcf75,	// (0x0003ac93) image3_wide_pane

0xcf8f,	// (0x0003acad) image3_wide_small_pane

0xcf9b,	// (0x0003acb9) main_video3_pane_g1_ParamLimits

0xcf9b,	// (0x0003acb9) main_video3_pane_g1

0xcfb7,	// (0x0003acd5) main_video3_pane_g2_ParamLimits

0xcfb7,	// (0x0003acd5) main_video3_pane_g2

0x0001,

0xf848,	// (0x0003d566) main_video3_pane_g_ParamLimits

0xf848,	// (0x0003d566) main_video3_pane_g

0xcfd3,	// (0x0003acf1) main_video3_pane_t1_ParamLimits

0xcfd3,	// (0x0003acf1) main_video3_pane_t1

0xcffe,	// (0x0003ad1c) main_video3_pane_t2_ParamLimits

0xcffe,	// (0x0003ad1c) main_video3_pane_t2

0xd029,	// (0x0003ad47) main_video3_pane_t3_ParamLimits

0xd029,	// (0x0003ad47) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0003d56b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0003d56b) main_video3_pane_t

0xd056,	// (0x0003ad74) cams_zoom_vslider_pane_g1

0xd05f,	// (0x0003ad7d) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0003d572) cams_zoom_vslider_pane_g

0xd067,	// (0x0003ad85) small_slider_vertical_pane

0xc846,	// (0x0003a564) small_slider_vertical_pane_g1

0xc846,	// (0x0003a564) small_slider_vertical_pane_g2

0xd06f,	// (0x0003ad8d) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0003d577) small_slider_vertical_pane_g

0x19af,	// (0x0002f6cd) main_hwr_training_pane

0xd078,	// (0x0003ad96) hwr_training_instruct_pane_ParamLimits

0xd078,	// (0x0003ad96) hwr_training_instruct_pane

0x6089,	// (0x00033da7) hwr_training_navi_pane_ParamLimits

0x6089,	// (0x00033da7) hwr_training_navi_pane

0x60a8,	// (0x00033dc6) hwr_training_write_pane_ParamLimits

0x60a8,	// (0x00033dc6) hwr_training_write_pane

0x9ba8,	// (0x000378c6) bg_frame_shadow_pane

0xd0af,	// (0x0003adcd) hwr_training_write_pane_g1

0xd0b7,	// (0x0003add5) hwr_training_write_pane_g2

0xd0bf,	// (0x0003addd) hwr_training_write_pane_g3

0xd0c7,	// (0x0003ade5) hwr_training_write_pane_g4

0xd0cf,	// (0x0003aded) hwr_training_write_pane_g5

0xd0d7,	// (0x0003adf5) hwr_training_write_pane_g6

0xd0df,	// (0x0003adfd) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0003d57e) hwr_training_write_pane_g

0x60e3,	// (0x00033e01) hwr_training_navi_pane_g1_ParamLimits

0x60e3,	// (0x00033e01) hwr_training_navi_pane_g1

0x60f5,	// (0x00033e13) hwr_training_navi_pane_g2_ParamLimits

0x60f5,	// (0x00033e13) hwr_training_navi_pane_g2

0x6107,	// (0x00033e25) hwr_training_navi_pane_g3_ParamLimits

0x6107,	// (0x00033e25) hwr_training_navi_pane_g3

0x6117,	// (0x00033e35) hwr_training_navi_pane_g4_ParamLimits

0x6117,	// (0x00033e35) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0003d58d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0003d58d) hwr_training_navi_pane_g

0x6124,	// (0x00033e42) hwr_training_navi_pane_t1

0x6132,	// (0x00033e50) list_single_hwr_training_instruct_pane_ParamLimits

0x6132,	// (0x00033e50) list_single_hwr_training_instruct_pane

0xd0e7,	// (0x0003ae05) list_single_hwr_training_instruct_pane_t1

0xc786,	// (0x0003a4a4) bg_frame_shadow_pane_g1

0xd0f6,	// (0x0003ae14) bg_frame_shadow_pane_g2

0xd0fe,	// (0x0003ae1c) bg_frame_shadow_pane_g3

0xd106,	// (0x0003ae24) bg_frame_shadow_pane_g4

0xd10e,	// (0x0003ae2c) bg_frame_shadow_pane_g5

0xd116,	// (0x0003ae34) bg_frame_shadow_pane_g6

0xd11e,	// (0x0003ae3c) bg_frame_shadow_pane_g7

0xa39e,	// (0x000380bc) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0003d598) bg_frame_shadow_pane_g

0x19af,	// (0x0002f6cd) main_video_tele_dialer_pane

0x0e7f,	// (0x0002eb9d) aid_size_cell_video_keypad_ParamLimits

0x0e7f,	// (0x0002eb9d) aid_size_cell_video_keypad

0x0e99,	// (0x0002ebb7) grid_video_dialer_keypad_pane_ParamLimits

0x0e99,	// (0x0002ebb7) grid_video_dialer_keypad_pane

0x0ee5,	// (0x0002ec03) video_down_pane_cp_ParamLimits

0x0ee5,	// (0x0002ec03) video_down_pane_cp

0x0efb,	// (0x0002ec19) cell_video_dialer_keypad_pane_ParamLimits

0x0efb,	// (0x0002ec19) cell_video_dialer_keypad_pane

0xd126,	// (0x0003ae44) bg_button_pane_cp08_ParamLimits

0xd126,	// (0x0003ae44) bg_button_pane_cp08

0x6163,	// (0x00033e81) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6163,	// (0x00033e81) cell_video_dialer_keypad_pane_g1

0x58eb,	// (0x00033609) mup3_rocker2_pane_ParamLimits

0x58eb,	// (0x00033609) mup3_rocker2_pane

0xc846,	// (0x0003a564) mup3_rocker2_pane_g1

0x0697,	// (0x0002e3b5) main_dialer2_pane

0x19af,	// (0x0002f6cd) main_mp4_pane

0x61a2,	// (0x00033ec0) main_mp4_pane_g1_ParamLimits

0x61a2,	// (0x00033ec0) main_mp4_pane_g1

0x61a2,	// (0x00033ec0) main_mp4_pane_g2_ParamLimits

0x61a2,	// (0x00033ec0) main_mp4_pane_g2

0x0f1d,	// (0x0002ec3b) main_mp4_pane_g3_ParamLimits

0x0f1d,	// (0x0002ec3b) main_mp4_pane_g3

0x61b0,	// (0x00033ece) main_mp4_pane_g4_ParamLimits

0x61b0,	// (0x00033ece) main_mp4_pane_g4

0x61d8,	// (0x00033ef6) main_mp4_pane_g5_ParamLimits

0x61d8,	// (0x00033ef6) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0003d5b8) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0003d5b8) main_mp4_pane_g

0x6228,	// (0x00033f46) main_mp4_pane_t1_ParamLimits

0x6228,	// (0x00033f46) main_mp4_pane_t1

0x6284,	// (0x00033fa2) main_mp4_pane_t2_ParamLimits

0x6284,	// (0x00033fa2) main_mp4_pane_t2

0xd132,	// (0x0003ae50) main_mp4_pane_t3_ParamLimits

0xd132,	// (0x0003ae50) main_mp4_pane_t3

0x62d6,	// (0x00033ff4) main_mp4_pane_t4_ParamLimits

0x62d6,	// (0x00033ff4) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0003d5c5) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0003d5c5) main_mp4_pane_t

0x631a,	// (0x00034038) mp4_progress_pane_ParamLimits

0x631a,	// (0x00034038) mp4_progress_pane

0x6364,	// (0x00034082) mp4_rocker_pane_ParamLimits

0x6364,	// (0x00034082) mp4_rocker_pane

0xd15a,	// (0x0003ae78) mp4_progress_pane_t1

0xd173,	// (0x0003ae91) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0003d5ce) mp4_progress_pane_t

0xd18c,	// (0x0003aeaa) mup_progress_pane_cp04

0xd8c0,	// (0x0003b5de) mp4_rocker_pane_g1

0x0f59,	// (0x0002ec77) aid_cell_size_keypad2_ParamLimits

0x0f59,	// (0x0002ec77) aid_cell_size_keypad2

0x0f6f,	// (0x0002ec8d) dialer2_ne_pane_ParamLimits

0x0f6f,	// (0x0002ec8d) dialer2_ne_pane

0x0f89,	// (0x0002eca7) grid_dialer2_keypad_pane_ParamLimits

0x0f89,	// (0x0002eca7) grid_dialer2_keypad_pane

0xc62b,	// (0x0003a349) bg_popup_call_pane_cp07_ParamLimits

0xc62b,	// (0x0003a349) bg_popup_call_pane_cp07

0x6384,	// (0x000340a2) dialer2_ne_pane_t1_ParamLimits

0x6384,	// (0x000340a2) dialer2_ne_pane_t1

0x0fa5,	// (0x0002ecc3) cell_dialer2_keypad_pane_ParamLimits

0x0fa5,	// (0x0002ecc3) cell_dialer2_keypad_pane

0xd1aa,	// (0x0003aec8) bg_button_pane_pane_cp04_ParamLimits

0xd1aa,	// (0x0003aec8) bg_button_pane_pane_cp04

0x63bf,	// (0x000340dd) cell_dialer2_keypad_pane_g1_ParamLimits

0x63bf,	// (0x000340dd) cell_dialer2_keypad_pane_g1

0x276b,	// (0x00030489) aid_placing_vt_set_content_ParamLimits

0x276b,	// (0x00030489) aid_placing_vt_set_content

0x2793,	// (0x000304b1) aid_placing_vt_set_title_ParamLimits

0x2793,	// (0x000304b1) aid_placing_vt_set_title

0x19af,	// (0x0002f6cd) main_image3_pane

0x1025,	// (0x0002ed43) area_side_right_pane_cp01_ParamLimits

0x1025,	// (0x0002ed43) area_side_right_pane_cp01

0x61a2,	// (0x00033ec0) main_image3_pane_g1_ParamLimits

0x61a2,	// (0x00033ec0) main_image3_pane_g1

0x103c,	// (0x0002ed5a) main_image3_pane_g2_ParamLimits

0x103c,	// (0x0002ed5a) main_image3_pane_g2

0x1064,	// (0x0002ed82) main_image3_pane_g3_ParamLimits

0x1064,	// (0x0002ed82) main_image3_pane_g3

0x108e,	// (0x0002edac) main_image3_pane_g4_ParamLimits

0x108e,	// (0x0002edac) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0003d5dd) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0003d5dd) main_image3_pane_g

0x10b8,	// (0x0002edd6) main_image3_pane_t1_ParamLimits

0x10b8,	// (0x0002edd6) main_image3_pane_t1

0x1110,	// (0x0002ee2e) main_image3_pane_t2_ParamLimits

0x1110,	// (0x0002ee2e) main_image3_pane_t2

0x1162,	// (0x0002ee80) main_image3_pane_t3_ParamLimits

0x1162,	// (0x0002ee80) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0003d5e6) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0003d5e6) main_image3_pane_t

0xa724,	// (0x00038442) grid_sctrl_middle_pane_cp01_ParamLimits

0xa724,	// (0x00038442) grid_sctrl_middle_pane_cp01

0x6459,	// (0x00034177) cell_sctrl_middle_pane_cp01_ParamLimits

0x6459,	// (0x00034177) cell_sctrl_middle_pane_cp01

0x6476,	// (0x00034194) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6476,	// (0x00034194) cell_sctrl_middle_pane_cp01_g1

0x19af,	// (0x0002f6cd) main_call4_pane

0x648c,	// (0x000341aa) aid_size_button_call4_ParamLimits

0x648c,	// (0x000341aa) aid_size_button_call4

0x64bd,	// (0x000341db) call4_windows_pane_ParamLimits

0x64bd,	// (0x000341db) call4_windows_pane

0x64dd,	// (0x000341fb) grid_call4_button_pane_ParamLimits

0x64dd,	// (0x000341fb) grid_call4_button_pane

0xd1b6,	// (0x0003aed4) call4_windows_conf_pane

0xd1cd,	// (0x0003aeeb) popup_call4_audio_first_window_ParamLimits

0xd1cd,	// (0x0003aeeb) popup_call4_audio_first_window

0xd219,	// (0x0003af37) popup_call4_audio_second_window_ParamLimits

0xd219,	// (0x0003af37) popup_call4_audio_second_window

0xd22d,	// (0x0003af4b) popup_call4_audio_wait_window_ParamLimits

0xd22d,	// (0x0003af4b) popup_call4_audio_wait_window

0x650a,	// (0x00034228) cell_call4_button_pane_ParamLimits

0x650a,	// (0x00034228) cell_call4_button_pane

0x6533,	// (0x00034251) bg_button_pane_cp09_ParamLimits

0x6533,	// (0x00034251) bg_button_pane_cp09

0x653f,	// (0x0003425d) cell_call4_button_pane_g1_ParamLimits

0x653f,	// (0x0003425d) cell_call4_button_pane_g1

0x6565,	// (0x00034283) cell_call4_button_pane_t1_ParamLimits

0x6565,	// (0x00034283) cell_call4_button_pane_t1

0xd275,	// (0x0003af93) popup_call4_audio_conf_window_ParamLimits

0xd275,	// (0x0003af93) popup_call4_audio_conf_window

0x594b,	// (0x00033669) mup3_progress_pane_t1_ParamLimits

0x596a,	// (0x00033688) mup3_progress_pane_t2_ParamLimits

0xcb59,	// (0x0003a877) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0003d4ba) mup3_progress_pane_t_ParamLimits

0xcb76,	// (0x0003a894) mup_progress_pane_cp03_ParamLimits

0x5ecf,	// (0x00033bed) mup3_control_keys_pane_g4_copy1

0x6348,	// (0x00034066) mp4_rocker2_pane_ParamLimits

0x6348,	// (0x00034066) mp4_rocker2_pane

0xd289,	// (0x0003afa7) mp4_rocker2_pane_g1

0xd291,	// (0x0003afaf) mp4_rocker2_pane_g2

0x658b,	// (0x000342a9) mp4_rocker2_pane_g3

0x6593,	// (0x000342b1) mp4_rocker2_pane_g4

0x659b,	// (0x000342b9) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0003d5ef) mp4_rocker2_pane_g

0x19af,	// (0x0002f6cd) main_camera4_pane

0x19af,	// (0x0002f6cd) main_video4_pane

0x0eb3,	// (0x0002ebd1) main_video_tele_dialer_pane_t1_ParamLimits

0x0eb3,	// (0x0002ebd1) main_video_tele_dialer_pane_t1

0x0ecc,	// (0x0002ebea) main_video_tele_dialer_pane_t2_ParamLimits

0x0ecc,	// (0x0002ebea) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0003d5a9) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0003d5a9) main_video_tele_dialer_pane_t

0x1202,	// (0x0002ef20) cam4_autofocus_pane_ParamLimits

0x1202,	// (0x0002ef20) cam4_autofocus_pane

0x1218,	// (0x0002ef36) cam4_image_uncrop_pane_ParamLimits

0x1218,	// (0x0002ef36) cam4_image_uncrop_pane

0x1232,	// (0x0002ef50) cam4_indicators_pane_ParamLimits

0x1232,	// (0x0002ef50) cam4_indicators_pane

0x125d,	// (0x0002ef7b) main_camera4_pane_g1_ParamLimits

0x125d,	// (0x0002ef7b) main_camera4_pane_g1

0x126f,	// (0x0002ef8d) main_camera4_pane_g2_ParamLimits

0x126f,	// (0x0002ef8d) main_camera4_pane_g2

0x1282,	// (0x0002efa0) main_camera4_pane_g3_ParamLimits

0x1282,	// (0x0002efa0) main_camera4_pane_g3

0x1295,	// (0x0002efb3) main_camera4_pane_g4_ParamLimits

0x1295,	// (0x0002efb3) main_camera4_pane_g4

0x12a8,	// (0x0002efc6) main_camera4_pane_g5_ParamLimits

0x12a8,	// (0x0002efc6) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0003d5fa) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0003d5fa) main_camera4_pane_g

0x12cc,	// (0x0002efea) main_camera4_pane_t1_ParamLimits

0x12cc,	// (0x0002efea) main_camera4_pane_t1

0x65d3,	// (0x000342f1) bg_tb_trans_pane_cp06

0x65e9,	// (0x00034307) cam4_indicators_pane_g1

0x65fa,	// (0x00034318) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0003d615) cam4_indicators_pane_g

0x6618,	// (0x00034336) cam4_indicators_pane_t1

0x131c,	// (0x0002f03a) main_video4_pane_g1_ParamLimits

0x131c,	// (0x0002f03a) main_video4_pane_g1

0x132b,	// (0x0002f049) main_video4_pane_g2_ParamLimits

0x132b,	// (0x0002f049) main_video4_pane_g2

0x133a,	// (0x0002f058) main_video4_pane_g3_ParamLimits

0x133a,	// (0x0002f058) main_video4_pane_g3

0x1349,	// (0x0002f067) main_video4_pane_g4_ParamLimits

0x1349,	// (0x0002f067) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0003d61c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0003d61c) main_video4_pane_g

0x1367,	// (0x0002f085) vid4_indicators_pane_ParamLimits

0x1367,	// (0x0002f085) vid4_indicators_pane

0x1395,	// (0x0002f0b3) video4_image_uncrop_cif_pane_ParamLimits

0x1395,	// (0x0002f0b3) video4_image_uncrop_cif_pane

0x13af,	// (0x0002f0cd) video4_image_uncrop_nhd_pane_ParamLimits

0x13af,	// (0x0002f0cd) video4_image_uncrop_nhd_pane

0x1218,	// (0x0002ef36) video4_image_uncrop_vga_pane_ParamLimits

0x1218,	// (0x0002ef36) video4_image_uncrop_vga_pane

0x1995,	// (0x0002f6b3) bg_tb_trans_pane_cp07

0x6644,	// (0x00034362) vid4_indicators_pane_g1

0x6658,	// (0x00034376) vid4_indicators_pane_g2

0x666c,	// (0x0003438a) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0003d627) vid4_indicators_pane_g

0x669b,	// (0x000343b9) vid4_indicators_pane_t1

0x66b2,	// (0x000343d0) cam4_autofocus_pane_g1

0x66ba,	// (0x000343d8) cam4_autofocus_pane_g2

0x66c2,	// (0x000343e0) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0003d632) cam4_autofocus_pane_g

0x66ca,	// (0x000343e8) cam4_autofocus_pane_g3_copy1

0x6147,	// (0x00033e65) video_down_pane_cp_t1

0x6155,	// (0x00033e73) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0003d5ae) video_down_pane_cp_t

0x1995,	// (0x0002f6b3) popup_vitu2_window_ParamLimits

0x1995,	// (0x0002f6b3) popup_vitu2_window

0x13c3,	// (0x0002f0e1) aid_size_cell2_itu2_ParamLimits

0x13c3,	// (0x0002f0e1) aid_size_cell2_itu2

0x13e9,	// (0x0002f107) aid_size_cell_itu2_ParamLimits

0x13e9,	// (0x0002f107) aid_size_cell_itu2

0x1445,	// (0x0002f163) bg_popup_window_pane_cp09_ParamLimits

0x1445,	// (0x0002f163) bg_popup_window_pane_cp09

0x1453,	// (0x0002f171) field_vitu2_entry_pane_ParamLimits

0x1453,	// (0x0002f171) field_vitu2_entry_pane

0x1479,	// (0x0002f197) grid_vitu2_function_pane_ParamLimits

0x1479,	// (0x0002f197) grid_vitu2_function_pane

0x14ca,	// (0x0002f1e8) grid_vitu2_itu_pane_ParamLimits

0x14ca,	// (0x0002f1e8) grid_vitu2_itu_pane

0x155d,	// (0x0002f27b) cell_vitu2_itu_pane_ParamLimits

0x155d,	// (0x0002f27b) cell_vitu2_itu_pane

0x1581,	// (0x0002f29f) cell_vitu2_function_pane_ParamLimits

0x1581,	// (0x0002f29f) cell_vitu2_function_pane

0xd299,	// (0x0003afb7) bg_popup_call_pane_cp08_ParamLimits

0xd299,	// (0x0003afb7) bg_popup_call_pane_cp08

0xd2b0,	// (0x0003afce) field_vitu2_entry_pane_g1

0xd2bc,	// (0x0003afda) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0003d639) field_vitu2_entry_pane_g

0x66d2,	// (0x000343f0) field_vitu2_entry_pane_t1_ParamLimits

0x66d2,	// (0x000343f0) field_vitu2_entry_pane_t1

0xd2d6,	// (0x0003aff4) field_vitu2_entry_pane_t2_ParamLimits

0xd2d6,	// (0x0003aff4) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0003d640) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0003d640) field_vitu2_entry_pane_t

0x15c0,	// (0x0002f2de) bg_button_pane_cp010_ParamLimits

0x15c0,	// (0x0002f2de) bg_button_pane_cp010

0x15ce,	// (0x0002f2ec) cell_vitu2_itu_pane_g1

0x15f9,	// (0x0002f317) cell_vitu2_itu_pane_t1_ParamLimits

0x15f9,	// (0x0002f317) cell_vitu2_itu_pane_t1

0x1657,	// (0x0002f375) cell_vitu2_itu_pane_t2_ParamLimits

0x1657,	// (0x0002f375) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0003d64a) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0003d64a) cell_vitu2_itu_pane_t

0x1995,	// (0x0002f6b3) bg_button_pane_cp011

0x1733,	// (0x0002f451) cell_vitu2_function_pane_g1

0x19af,	// (0x0002f6cd) main_myfav_hc_pane

0x11b2,	// (0x0002eed0) popup_image3_note_pane_ParamLimits

0x11b2,	// (0x0002eed0) popup_image3_note_pane

0x11ce,	// (0x0002eeec) popup_image3_tool_bar_pane_ParamLimits

0x11ce,	// (0x0002eeec) popup_image3_tool_bar_pane

0x16db,	// (0x0002f3f9) cell_vitu2_itu_pane_t3_ParamLimits

0x16db,	// (0x0002f3f9) cell_vitu2_itu_pane_t3

0x9ba8,	// (0x000378c6) bg_popup_trans_pane

0xd2fb,	// (0x0003b019) grid_image3_tool_bar_pane

0xd305,	// (0x0003b023) bg_popup_trans_pane_g1

0xa6fc,	// (0x0003841a) bg_popup_trans_pane_g2

0xd30d,	// (0x0003b02b) bg_popup_trans_pane_g3

0xd315,	// (0x0003b033) bg_popup_trans_pane_g4

0xd31d,	// (0x0003b03b) bg_popup_trans_pane_g5

0xd325,	// (0x0003b043) bg_popup_trans_pane_g6

0xd32d,	// (0x0003b04b) bg_popup_trans_pane_g7

0xd335,	// (0x0003b053) bg_popup_trans_pane_g8

0xa6dc,	// (0x000383fa) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0003d651) bg_popup_trans_pane_g

0xd33d,	// (0x0003b05b) cell_image3_tool_bar_pane_ParamLimits

0xd33d,	// (0x0003b05b) cell_image3_tool_bar_pane

0xc846,	// (0x0003a564) cell_image3_tool_bar_pane_g1

0x9ba8,	// (0x000378c6) bg_popup_trans_pane_cp1

0xd351,	// (0x0003b06f) popup_image3_note_pane_t1

0xd35f,	// (0x0003b07d) popup_image3_note_pane_t2

0xd36d,	// (0x0003b08b) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0003d664) popup_image3_note_pane_t

0xd37b,	// (0x0003b099) popup_image3_note_pane_t3_copy1

0x66fe,	// (0x0003441c) bg_myfav_hc_instruction_pane_ParamLimits

0x66fe,	// (0x0003441c) bg_myfav_hc_instruction_pane

0x6712,	// (0x00034430) cell_myfav_contact_pane_ParamLimits

0x6712,	// (0x00034430) cell_myfav_contact_pane

0x6730,	// (0x0003444e) cell_myfav_contact_pane_cp1_ParamLimits

0x6730,	// (0x0003444e) cell_myfav_contact_pane_cp1

0x6748,	// (0x00034466) cell_myfav_contact_pane_cp2_ParamLimits

0x6748,	// (0x00034466) cell_myfav_contact_pane_cp2

0x6760,	// (0x0003447e) cell_myfav_contact_pane_cp3_ParamLimits

0x6760,	// (0x0003447e) cell_myfav_contact_pane_cp3

0x6777,	// (0x00034495) cell_myfav_contact_pane_cp4_ParamLimits

0x6777,	// (0x00034495) cell_myfav_contact_pane_cp4

0x678f,	// (0x000344ad) cell_myfav_contact_pane_cp5_ParamLimits

0x678f,	// (0x000344ad) cell_myfav_contact_pane_cp5

0x67a3,	// (0x000344c1) cell_myfav_contact_pane_cp6_ParamLimits

0x67a3,	// (0x000344c1) cell_myfav_contact_pane_cp6

0x67b9,	// (0x000344d7) cell_myfav_contact_pane_cp7_ParamLimits

0x67b9,	// (0x000344d7) cell_myfav_contact_pane_cp7

0xd389,	// (0x0003b0a7) listscroll_gen_pane_cp05

0x67d3,	// (0x000344f1) main_myfav_hc_pane_g1_ParamLimits

0x67d3,	// (0x000344f1) main_myfav_hc_pane_g1

0x67ed,	// (0x0003450b) main_myfav_hc_pane_g2_ParamLimits

0x67ed,	// (0x0003450b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0003d66b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0003d66b) main_myfav_hc_pane_g

0x681f,	// (0x0003453d) main_myfav_hc_pane_t1_ParamLimits

0x681f,	// (0x0003453d) main_myfav_hc_pane_t1

0xd392,	// (0x0003b0b0) main_myfav_hc_pane_t2_ParamLimits

0xd392,	// (0x0003b0b0) main_myfav_hc_pane_t2

0xd3a4,	// (0x0003b0c2) main_myfav_hc_pane_t3_ParamLimits

0xd3a4,	// (0x0003b0c2) main_myfav_hc_pane_t3

0x6836,	// (0x00034554) main_myfav_hc_pane_t4_ParamLimits

0x6836,	// (0x00034554) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0003d672) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0003d672) main_myfav_hc_pane_t

0xc846,	// (0x0003a564) bg_myfav_hc_instruction_pane_g1

0xd3b6,	// (0x0003b0d4) cell_myfav_contact_pane_g1_ParamLimits

0xd3b6,	// (0x0003b0d4) cell_myfav_contact_pane_g1

0xd3b6,	// (0x0003b0d4) cell_myfav_contact_pane_g2_ParamLimits

0xd3b6,	// (0x0003b0d4) cell_myfav_contact_pane_g2

0xd3c2,	// (0x0003b0e0) cell_myfav_contact_pane_g3_ParamLimits

0xd3c2,	// (0x0003b0e0) cell_myfav_contact_pane_g3

0xcb43,	// (0x0003a861) cell_myfav_contact_pane_g4_ParamLimits

0xcb43,	// (0x0003a861) cell_myfav_contact_pane_g4

0xd3cf,	// (0x0003b0ed) cell_myfav_contact_pane_g5_ParamLimits

0xd3cf,	// (0x0003b0ed) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0003d67d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0003d67d) cell_myfav_contact_pane_g

0x6807,	// (0x00034525) main_myfav_hc_pane_g3_ParamLimits

0x6807,	// (0x00034525) main_myfav_hc_pane_g3

0x0279,	// (0x0002df97) popup_adpt_find_window

0x685e,	// (0x0003457c) afind_page_pane_ParamLimits

0x685e,	// (0x0003457c) afind_page_pane

0x6873,	// (0x00034591) aid_size_cell_afind_ParamLimits

0x6873,	// (0x00034591) aid_size_cell_afind

0x6891,	// (0x000345af) bg_popup_sub_pane_cp09_ParamLimits

0x6891,	// (0x000345af) bg_popup_sub_pane_cp09

0x689e,	// (0x000345bc) find_pane_cp01_ParamLimits

0x689e,	// (0x000345bc) find_pane_cp01

0xd3db,	// (0x0003b0f9) grid_afind_control_pane_ParamLimits

0xd3db,	// (0x0003b0f9) grid_afind_control_pane

0x68ab,	// (0x000345c9) grid_afind_pane_ParamLimits

0x68ab,	// (0x000345c9) grid_afind_pane

0x68cd,	// (0x000345eb) cell_afind_pane_ParamLimits

0x68cd,	// (0x000345eb) cell_afind_pane

0xc846,	// (0x0003a564) afind_page_pane_g1

0x692e,	// (0x0003464c) afind_page_pane_g2

0x6937,	// (0x00034655) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0003d688) afind_page_pane_g

0x6940,	// (0x0003465e) afind_page_pane_t1

0xd3ef,	// (0x0003b10d) cell_afind_grid_control_pane_ParamLimits

0xd3ef,	// (0x0003b10d) cell_afind_grid_control_pane

0xd1aa,	// (0x0003aec8) bg_button_pane_cp69_ParamLimits

0xd1aa,	// (0x0003aec8) bg_button_pane_cp69

0x6960,	// (0x0003467e) cell_afind_pane_g1_ParamLimits

0x6960,	// (0x0003467e) cell_afind_pane_g1

0x696d,	// (0x0003468b) cell_afind_pane_t1_ParamLimits

0x696d,	// (0x0003468b) cell_afind_pane_t1

0xa4f5,	// (0x00038213) bg_button_pane_cp72

0xd3fe,	// (0x0003b11c) cell_afind_grid_control_pane_g1

0x4522,	// (0x00032240) aid_image_placing_area_ParamLimits

0x4522,	// (0x00032240) aid_image_placing_area

0xce78,	// (0x0003ab96) field_vitu_entry_pane_g1_ParamLimits

0xce78,	// (0x0003ab96) field_vitu_entry_pane_g1

0xce84,	// (0x0003aba2) field_vitu_entry_pane_g2_ParamLimits

0xce84,	// (0x0003aba2) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0003d539) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0003d539) field_vitu_entry_pane_g

0x5f96,	// (0x00033cb4) cell_vitu_itu_pane_g1_ParamLimits

0x5fd8,	// (0x00033cf6) cell_vitu_itu_pane_t3_ParamLimits

0x5fd8,	// (0x00033cf6) cell_vitu_itu_pane_t3

0xd15a,	// (0x0003ae78) mp4_progress_pane_t1_ParamLimits

0xd173,	// (0x0003ae91) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0003d5ce) mp4_progress_pane_t_ParamLimits

0xd18c,	// (0x0003aeaa) mup_progress_pane_cp04_ParamLimits

0x684a,	// (0x00034568) main_myfav_hc_pane_t5_ParamLimits

0x684a,	// (0x00034568) main_myfav_hc_pane_t5

0x1912,	// (0x0002f630) aid_zoom_text_primary

0x0279,	// (0x0002df97) popup_adpt_find_window_ParamLimits

0x1995,	// (0x0002f6b3) main_cam_set_pane

0x1249,	// (0x0002ef67) cam4_zoom_pane_ParamLimits

0x1249,	// (0x0002ef67) cam4_zoom_pane

0x697f,	// (0x0003469d) main_cam_set_pane_g1_ParamLimits

0x697f,	// (0x0003469d) main_cam_set_pane_g1

0x698d,	// (0x000346ab) main_cam_set_pane_g2_ParamLimits

0x698d,	// (0x000346ab) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0003d68f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0003d68f) main_cam_set_pane_g

0x69ae,	// (0x000346cc) main_cam_set_pane_t1_ParamLimits

0x69ae,	// (0x000346cc) main_cam_set_pane_t1

0x69c9,	// (0x000346e7) main_cset_listscroll_pane_ParamLimits

0x69c9,	// (0x000346e7) main_cset_listscroll_pane

0x69e9,	// (0x00034707) main_cset_slider_pane_ParamLimits

0x69e9,	// (0x00034707) main_cset_slider_pane

0xd40f,	// (0x0003b12d) main_cset_list_pane_ParamLimits

0xd40f,	// (0x0003b12d) main_cset_list_pane

0xd41f,	// (0x0003b13d) scroll_pane_cp028

0x6a0f,	// (0x0003472d) aid_area_touch_slider

0x6a2b,	// (0x00034749) cset_slider_pane

0x6a55,	// (0x00034773) main_cset_slider_pane_g1

0x6a6a,	// (0x00034788) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0003d694) main_cset_slider_pane_g

0xd458,	// (0x0003b176) main_cset_slider_pane_t1

0x6b26,	// (0x00034844) main_cset_slider_pane_t2

0x6b40,	// (0x0003485e) main_cset_slider_pane_t3

0x6b5a,	// (0x00034878) main_cset_slider_pane_t4

0x6b74,	// (0x00034892) main_cset_slider_pane_t5

0x6b8e,	// (0x000348ac) main_cset_slider_pane_t6

0x6ba3,	// (0x000348c1) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0003d6b9) main_cset_slider_pane_t

0x6ca7,	// (0x000349c5) cset_list_set_pane_ParamLimits

0x6ca7,	// (0x000349c5) cset_list_set_pane

0x6cb9,	// (0x000349d7) aid_position_infowindow_above

0x6cc1,	// (0x000349df) aid_position_infowindow_below

0xd4f8,	// (0x0003b216) cset_list_set_pane_g1_ParamLimits

0xd4f8,	// (0x0003b216) cset_list_set_pane_g1

0xd504,	// (0x0003b222) cset_list_set_pane_g3_ParamLimits

0xd504,	// (0x0003b222) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0003d6d8) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0003d6d8) cset_list_set_pane_g

0xd513,	// (0x0003b231) cset_list_set_pane_t1_ParamLimits

0xd513,	// (0x0003b231) cset_list_set_pane_t1

0xa724,	// (0x00038442) list_highlight_pane_cp021_ParamLimits

0xa724,	// (0x00038442) list_highlight_pane_cp021

0xb0fb,	// (0x00038e19) cset_slider_pane_g1

0xb10d,	// (0x00038e2b) cset_slider_pane_g2

0xb104,	// (0x00038e22) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0003d6dd) cset_slider_pane_g

0x6cc9,	// (0x000349e7) aid_area_touch_cam4_zoom

0x6cd1,	// (0x000349ef) cam4_zoom_cont_pane

0x6cd9,	// (0x000349f7) cam4_zoom_pane_g1

0x6ce1,	// (0x000349ff) cam4_zoom_pane_g2

0x1747,	// (0x0002f465) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0003d6e4) cam4_zoom_pane_g

0x6ce9,	// (0x00034a07) cam4_zoom_cont_pane_g1

0x6cf2,	// (0x00034a10) cam4_zoom_cont_pane_g2

0x6cfb,	// (0x00034a19) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0003d6eb) cam4_zoom_cont_pane_g

0x64aa,	// (0x000341c8) call4_image_pane_ParamLimits

0x64aa,	// (0x000341c8) call4_image_pane

0xd1b6,	// (0x0003aed4) call4_windows_conf_pane_ParamLimits

0xd1f7,	// (0x0003af15) popup_call4_audio_in_window_ParamLimits

0xd1f7,	// (0x0003af15) popup_call4_audio_in_window

0x9ba8,	// (0x000378c6) bg_popup_call2_act_pane_cp02

0xd26d,	// (0x0003af8b) call4_list_conf_pane

0xc846,	// (0x0003a564) call4_image_pane_g1

0xc846,	// (0x0003a564) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0003d3fa) call4_image_pane_g

0xd528,	// (0x0003b246) list_single_graphic_popup_conf4_pane_ParamLimits

0xd528,	// (0x0003b246) list_single_graphic_popup_conf4_pane

0x9ba8,	// (0x000378c6) list_highlight_pane_cp022

0xd53b,	// (0x0003b259) list_single_graphic_popup_conf4_pane_g1

0xacc4,	// (0x000389e2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0003d6f2) list_single_graphic_popup_conf4_pane_g

0xd543,	// (0x0003b261) list_single_graphic_popup_conf4_pane_t1

0x28b7,	// (0x000305d5) popup_vtel_slider_window_ParamLimits

0x28b7,	// (0x000305d5) popup_vtel_slider_window

0xd198,	// (0x0003aeb6) dialer2_ne_pane_t2_ParamLimits

0xd198,	// (0x0003aeb6) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0003d5d3) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0003d5d3) dialer2_ne_pane_t

0xc62b,	// (0x0003a349) bg_popup_sub_pane_cp010_ParamLimits

0xc62b,	// (0x0003a349) bg_popup_sub_pane_cp010

0x6d04,	// (0x00034a22) popup_vtel_slider_window_g1_ParamLimits

0x6d04,	// (0x00034a22) popup_vtel_slider_window_g1

0x6d17,	// (0x00034a35) popup_vtel_slider_window_g2_ParamLimits

0x6d17,	// (0x00034a35) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0003d6f7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0003d6f7) popup_vtel_slider_window_g

0x6d6d,	// (0x00034a8b) vtel_slider_pane_ParamLimits

0x6d6d,	// (0x00034a8b) vtel_slider_pane

0x6d8f,	// (0x00034aad) vtel_slider_pane_g1_ParamLimits

0x6d8f,	// (0x00034aad) vtel_slider_pane_g1

0x6da3,	// (0x00034ac1) vtel_slider_pane_g2_ParamLimits

0x6da3,	// (0x00034ac1) vtel_slider_pane_g2

0x6dbb,	// (0x00034ad9) vtel_slider_pane_g3_ParamLimits

0x6dbb,	// (0x00034ad9) vtel_slider_pane_g3

0x6d8f,	// (0x00034aad) vtel_slider_pane_g4_ParamLimits

0x6d8f,	// (0x00034aad) vtel_slider_pane_g4

0x6dd1,	// (0x00034aef) vtel_slider_pane_g5_ParamLimits

0x6dd1,	// (0x00034aef) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0003d700) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0003d700) vtel_slider_pane_g

0x1995,	// (0x0002f6b3) main_gallery2_pane

0x1415,	// (0x0002f133) aid_size_row_itut2_dropdow_list_ParamLimits

0x1415,	// (0x0002f133) aid_size_row_itut2_dropdow_list

0x14a1,	// (0x0002f1bf) grid_vitu2_function_top_pane_ParamLimits

0x14a1,	// (0x0002f1bf) grid_vitu2_function_top_pane

0x1506,	// (0x0002f224) popup_vitu2_dropdown_list_window_ParamLimits

0x1506,	// (0x0002f224) popup_vitu2_dropdown_list_window

0x152f,	// (0x0002f24d) popup_vitu2_match_list_window

0x174f,	// (0x0002f46d) cell_vitu2_function_top_pane_ParamLimits

0x174f,	// (0x0002f46d) cell_vitu2_function_top_pane

0x176d,	// (0x0002f48b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x176d,	// (0x0002f48b) cell_vitu2_function_top_pane_cp01

0x178b,	// (0x0002f4a9) cell_vitu2_function_top_wide_pane_ParamLimits

0x178b,	// (0x0002f4a9) cell_vitu2_function_top_wide_pane

0x1995,	// (0x0002f6b3) bg_button_pane_cp012

0x17a9,	// (0x0002f4c7) cell_vitu2_function_top_pane_g1

0x6df5,	// (0x00034b13) bg_button_pane_cp013_ParamLimits

0x6df5,	// (0x00034b13) bg_button_pane_cp013

0x6e11,	// (0x00034b2f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e11,	// (0x00034b2f) cell_vitu2_function_top_wide_pane_g1

0x1995,	// (0x0002f6b3) bg_popup_sub_pane_cp20

0x17bd,	// (0x0002f4db) list_vitu2_match_list_pane

0xd305,	// (0x0003b023) bg_popup_sub_pane_cp20_g1

0xd30d,	// (0x0003b02b) bg_popup_sub_pane_cp20_g2

0xa6fc,	// (0x0003841a) bg_popup_sub_pane_cp20_g3

0xd315,	// (0x0003b033) bg_popup_sub_pane_cp20_g4

0xa6dc,	// (0x000383fa) bg_popup_sub_pane_cp20_g5

0xd559,	// (0x0003b277) bg_popup_sub_pane_cp20_g6

0xd325,	// (0x0003b043) bg_popup_sub_pane_cp20_g7

0xd32d,	// (0x0003b04b) bg_popup_sub_pane_cp20_g8

0xd335,	// (0x0003b053) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0003d70b) bg_popup_sub_pane_cp20_g

0xa732,	// (0x00038450) list_vitu2_match_list_item_pane_ParamLimits

0xa732,	// (0x00038450) list_vitu2_match_list_item_pane

0xa744,	// (0x00038462) list_vitu2_match_list_item_pane_t1

0x19af,	// (0x0002f6cd) bg_popup_sub_pane_cp21

0xa752,	// (0x00038470) grid_vitu2_dropdown_list_pane

0x17db,	// (0x0002f4f9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x17db,	// (0x0002f4f9) cell_vitu2_dropdown_list_char_pane

0x17fc,	// (0x0002f51a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x17fc,	// (0x0002f51a) cell_vitu2_dropdown_list_ctrl_pane

0xd561,	// (0x0003b27f) cell_vitu2_dropdown_list_char_pane_g1

0xd56a,	// (0x0003b288) cell_vitu2_dropdown_list_char_pane_g2

0xd573,	// (0x0003b291) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0003d728) cell_vitu2_dropdown_list_char_pane_g

0x1828,	// (0x0002f546) cell_vitu2_dropdown_list_char_pane_t1

0x6e73,	// (0x00034b91) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e73,	// (0x00034b91) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e80,	// (0x00034b9e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e80,	// (0x00034b9e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e8d,	// (0x00034bab) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e8d,	// (0x00034bab) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1836,	// (0x0002f554) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1836,	// (0x0002f554) cell_vitu2_dropdown_list_ctrl_pane_g4

0x65d3,	// (0x000342f1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x65d3,	// (0x000342f1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0003d72f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0003d72f) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e9a,	// (0x00034bb8) aid_size_cell_gallery2_ParamLimits

0x6e9a,	// (0x00034bb8) aid_size_cell_gallery2

0x6eb8,	// (0x00034bd6) grid_gallery2_pane_ParamLimits

0x6eb8,	// (0x00034bd6) grid_gallery2_pane

0x6ed2,	// (0x00034bf0) scroll_pane_cp029_ParamLimits

0x6ed2,	// (0x00034bf0) scroll_pane_cp029

0x6ede,	// (0x00034bfc) cell_gallery2_pane_ParamLimits

0x6ede,	// (0x00034bfc) cell_gallery2_pane

0xd57c,	// (0x0003b29a) cell_gallery2_pane_g2

0x6f39,	// (0x00034c57) cell_gallery2_pane_g3

0xd584,	// (0x0003b2a2) cell_gallery2_pane_g4

0xd58c,	// (0x0003b2aa) cell_gallery2_pane_g5

0xafb7,	// (0x00038cd5) grid_highlight_pane_cp10

0x152f,	// (0x0002f24d) popup_vitu2_match_list_window_ParamLimits

0x1546,	// (0x0002f264) popup_vitu2_query_window_ParamLimits

0x1546,	// (0x0002f264) popup_vitu2_query_window

0x19af,	// (0x0002f6cd) bg_vitu2_candi_button_pane

0xd561,	// (0x0003b27f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd56a,	// (0x0003b288) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd573,	// (0x0003b291) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f41,	// (0x00034c5f) bg_button_pane_cp015

0x6f53,	// (0x00034c71) bg_button_pane_cp016

0x6f66,	// (0x00034c84) bg_button_pane_cp017

0xc43e,	// (0x0003a15c) bg_popup_sub_pane_cp22

0xd594,	// (0x0003b2b2) popup_vitu2_query_window_g1

0x6fab,	// (0x00034cc9) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0003d73a) popup_vitu2_query_window_g

0x6fca,	// (0x00034ce8) popup_vitu2_query_window_t1_ParamLimits

0x6fca,	// (0x00034ce8) popup_vitu2_query_window_t1

0x6fff,	// (0x00034d1d) popup_vitu2_query_window_t2_ParamLimits

0x6fff,	// (0x00034d1d) popup_vitu2_query_window_t2

0x7011,	// (0x00034d2f) popup_vitu2_query_window_t3_ParamLimits

0x7011,	// (0x00034d2f) popup_vitu2_query_window_t3

0x7039,	// (0x00034d57) popup_vitu2_query_window_t4_ParamLimits

0x7039,	// (0x00034d57) popup_vitu2_query_window_t4

0x705a,	// (0x00034d78) popup_vitu2_query_window_t5_ParamLimits

0x705a,	// (0x00034d78) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0003d741) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0003d741) popup_vitu2_query_window_t

0xd407,	// (0x0003b125) main_cset_text_pane

0x6a0f,	// (0x0003472d) aid_area_touch_slider_ParamLimits

0x6a2b,	// (0x00034749) cset_slider_pane_ParamLimits

0x6a55,	// (0x00034773) main_cset_slider_pane_g1_ParamLimits

0x6a6a,	// (0x00034788) main_cset_slider_pane_g2_ParamLimits

0xd428,	// (0x0003b146) main_cset_slider_pane_g3_ParamLimits

0xd428,	// (0x0003b146) main_cset_slider_pane_g3

0x6a7f,	// (0x0003479d) main_cset_slider_pane_g4_ParamLimits

0x6a7f,	// (0x0003479d) main_cset_slider_pane_g4

0x6a8e,	// (0x000347ac) main_cset_slider_pane_g5_ParamLimits

0x6a8e,	// (0x000347ac) main_cset_slider_pane_g5

0x6a9a,	// (0x000347b8) main_cset_slider_pane_g6_ParamLimits

0x6a9a,	// (0x000347b8) main_cset_slider_pane_g6

0xf976,	// (0x0003d694) main_cset_slider_pane_g_ParamLimits

0xd458,	// (0x0003b176) main_cset_slider_pane_t1_ParamLimits

0x6b26,	// (0x00034844) main_cset_slider_pane_t2_ParamLimits

0x6b40,	// (0x0003485e) main_cset_slider_pane_t3_ParamLimits

0x6b5a,	// (0x00034878) main_cset_slider_pane_t4_ParamLimits

0x6b74,	// (0x00034892) main_cset_slider_pane_t5_ParamLimits

0x6b8e,	// (0x000348ac) main_cset_slider_pane_t6_ParamLimits

0x6ba3,	// (0x000348c1) main_cset_slider_pane_t7_ParamLimits

0x6bcd,	// (0x000348eb) main_cset_slider_pane_t8_ParamLimits

0x6bcd,	// (0x000348eb) main_cset_slider_pane_t8

0x6bf5,	// (0x00034913) main_cset_slider_pane_t9_ParamLimits

0x6bf5,	// (0x00034913) main_cset_slider_pane_t9

0x6c1d,	// (0x0003493b) main_cset_slider_pane_t10_ParamLimits

0x6c1d,	// (0x0003493b) main_cset_slider_pane_t10

0x6c45,	// (0x00034963) main_cset_slider_pane_t11_ParamLimits

0x6c45,	// (0x00034963) main_cset_slider_pane_t11

0x6c6d,	// (0x0003498b) main_cset_slider_pane_t12_ParamLimits

0x6c6d,	// (0x0003498b) main_cset_slider_pane_t12

0x6c8a,	// (0x000349a8) main_cset_slider_pane_t13_ParamLimits

0x6c8a,	// (0x000349a8) main_cset_slider_pane_t13

0xf99b,	// (0x0003d6b9) main_cset_slider_pane_t_ParamLimits

0x9ba8,	// (0x000378c6) bg_popup_sub_pane_cp011

0xd5a0,	// (0x0003b2be) main_cset_text_pane_g1

0xd5a8,	// (0x0003b2c6) main_cset_text_pane_t1

0xd5b6,	// (0x0003b2d4) main_cset_text_pane_t2

0xd5c4,	// (0x0003b2e2) main_cset_text_pane_t3

0xd5d2,	// (0x0003b2f0) main_cset_text_pane_t4

0xd5e0,	// (0x0003b2fe) main_cset_text_pane_t5

0xd5ee,	// (0x0003b30c) main_cset_text_pane_t6

0xd5fc,	// (0x0003b31a) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0003d750) main_cset_text_pane_t

0x19af,	// (0x0002f6cd) main_cam4_burst_pane

0x19af,	// (0x0002f6cd) main_cam5_pane

0x694e,	// (0x0003466c) bg_button_pane_cp019

0x6957,	// (0x00034675) bg_button_pane_cp020

0xd434,	// (0x0003b152) main_cset_slider_pane_g7_ParamLimits

0xd434,	// (0x0003b152) main_cset_slider_pane_g7

0xd440,	// (0x0003b15e) main_cset_slider_pane_g8_ParamLimits

0xd440,	// (0x0003b15e) main_cset_slider_pane_g8

0x6aae,	// (0x000347cc) main_cset_slider_pane_g9_ParamLimits

0x6aae,	// (0x000347cc) main_cset_slider_pane_g9

0x6aba,	// (0x000347d8) main_cset_slider_pane_g10_ParamLimits

0x6aba,	// (0x000347d8) main_cset_slider_pane_g10

0x6ac6,	// (0x000347e4) main_cset_slider_pane_g11_ParamLimits

0x6ac6,	// (0x000347e4) main_cset_slider_pane_g11

0x6ad2,	// (0x000347f0) main_cset_slider_pane_g12_ParamLimits

0x6ad2,	// (0x000347f0) main_cset_slider_pane_g12

0x6ade,	// (0x000347fc) main_cset_slider_pane_g13_ParamLimits

0x6ade,	// (0x000347fc) main_cset_slider_pane_g13

0x6aea,	// (0x00034808) main_cset_slider_pane_g14_ParamLimits

0x6aea,	// (0x00034808) main_cset_slider_pane_g14

0x6af6,	// (0x00034814) main_cset_slider_pane_g15_ParamLimits

0x6af6,	// (0x00034814) main_cset_slider_pane_g15

0xd486,	// (0x0003b1a4) main_cset_slider_pane_t14_ParamLimits

0xd486,	// (0x0003b1a4) main_cset_slider_pane_t14

0xd4bf,	// (0x0003b1dd) main_cset_slider_pane_t15_ParamLimits

0xd4bf,	// (0x0003b1dd) main_cset_slider_pane_t15

0x70d1,	// (0x00034def) aid_cam4_burst_size_cell_ParamLimits

0x70d1,	// (0x00034def) aid_cam4_burst_size_cell

0x70f1,	// (0x00034e0f) grid_cam4_burst_pane_ParamLimits

0x70f1,	// (0x00034e0f) grid_cam4_burst_pane

0x7129,	// (0x00034e47) linegrid_cam4_burst_pane_ParamLimits

0x7129,	// (0x00034e47) linegrid_cam4_burst_pane

0xd60a,	// (0x0003b328) scroll_pane_cp30_ParamLimits

0xd60a,	// (0x0003b328) scroll_pane_cp30

0x714d,	// (0x00034e6b) cell_cam4_burst_pane_ParamLimits

0x714d,	// (0x00034e6b) cell_cam4_burst_pane

0xd616,	// (0x0003b334) linegrid_cam4_burst_pane_g1_ParamLimits

0xd616,	// (0x0003b334) linegrid_cam4_burst_pane_g1

0x719a,	// (0x00034eb8) linegrid_cam4_burst_pane_g2_ParamLimits

0x719a,	// (0x00034eb8) linegrid_cam4_burst_pane_g2

0xd623,	// (0x0003b341) linegrid_cam4_burst_pane_g3_ParamLimits

0xd623,	// (0x0003b341) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0003d75f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0003d75f) linegrid_cam4_burst_pane_g

0x71ab,	// (0x00034ec9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x71ab,	// (0x00034ec9) linegrid_cam4_burst_pane_g3_copy1

0xd630,	// (0x0003b34e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd630,	// (0x0003b34e) linegrid_cam4_burst_pane_g4

0x71c5,	// (0x00034ee3) linegrid_cam4_burst_pane_g5_ParamLimits

0x71c5,	// (0x00034ee3) linegrid_cam4_burst_pane_g5

0x71d6,	// (0x00034ef4) linegrid_cam4_burst_pane_g6_ParamLimits

0x71d6,	// (0x00034ef4) linegrid_cam4_burst_pane_g6

0xd63d,	// (0x0003b35b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd63d,	// (0x0003b35b) linegrid_cam4_burst_pane_g7

0x71ed,	// (0x00034f0b) cell_cam4_burst_pane_g1

0xd656,	// (0x0003b374) main_cam5_pane_t1_ParamLimits

0xd656,	// (0x0003b374) main_cam5_pane_t1

0xd668,	// (0x0003b386) main_cam5_pane_t2_ParamLimits

0xd668,	// (0x0003b386) main_cam5_pane_t2

0xd67a,	// (0x0003b398) main_cam5_pane_t3_ParamLimits

0xd67a,	// (0x0003b398) main_cam5_pane_t3

0xd68c,	// (0x0003b3aa) main_cam5_pane_t4_ParamLimits

0xd68c,	// (0x0003b3aa) main_cam5_pane_t4

0xd6a4,	// (0x0003b3c2) main_cam5_pane_t5_ParamLimits

0xd6a4,	// (0x0003b3c2) main_cam5_pane_t5

0xd6b8,	// (0x0003b3d6) main_cam5_pane_t6_ParamLimits

0xd6b8,	// (0x0003b3d6) main_cam5_pane_t6

0xd6cc,	// (0x0003b3ea) main_cam5_pane_t7_ParamLimits

0xd6cc,	// (0x0003b3ea) main_cam5_pane_t7

0xd6de,	// (0x0003b3fc) main_cam5_pane_t8_ParamLimits

0xd6de,	// (0x0003b3fc) main_cam5_pane_t8

0xd6fa,	// (0x0003b418) main_cam5_pane_t9_ParamLimits

0xd6fa,	// (0x0003b418) main_cam5_pane_t9

0xd70c,	// (0x0003b42a) main_cam5_pane_t10_ParamLimits

0xd70c,	// (0x0003b42a) main_cam5_pane_t10

0xd71e,	// (0x0003b43c) main_cam5_pane_t11_ParamLimits

0xd71e,	// (0x0003b43c) main_cam5_pane_t11

0xd730,	// (0x0003b44e) main_cam5_pane_t12_ParamLimits

0xd730,	// (0x0003b44e) main_cam5_pane_t12

0xd745,	// (0x0003b463) main_cam5_pane_t13_ParamLimits

0xd745,	// (0x0003b463) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0003d76b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0003d76b) main_cam5_pane_t

0x02fb,	// (0x0002e019) popup_scut_keymap_window_ParamLimits

0x02fb,	// (0x0002e019) popup_scut_keymap_window

0x7200,	// (0x00034f1e) aid_size_cell_brow_shortcut

0xafb7,	// (0x00038cd5) bg_popup_window_pane_cp010

0x720c,	// (0x00034f2a) grid_scut_pane

0x7218,	// (0x00034f36) cell_scut_pane_ParamLimits

0x7218,	// (0x00034f36) cell_scut_pane

0x722f,	// (0x00034f4d) cell_scut_pane_g1

0xd762,	// (0x0003b480) cell_scut_pane_t1

0xd771,	// (0x0003b48f) cell_scut_pane_t2

0x7238,	// (0x00034f56) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0003d786) cell_scut_pane_t

0x5504,	// (0x00033222) main_mup3_pane_g8_ParamLimits

0x5504,	// (0x00033222) main_mup3_pane_g8

0x142d,	// (0x0002f14b) area_vitu2_query_pane_ParamLimits

0x142d,	// (0x0002f14b) area_vitu2_query_pane

0x6f79,	// (0x00034c97) input_focus_pane_cp08

0xd780,	// (0x0003b49e) area_vitu2_query_pane_g1

0x7246,	// (0x00034f64) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0003d78d) area_vitu2_query_pane_g

0x7257,	// (0x00034f75) area_vitu2_query_pane_t1_ParamLimits

0x7257,	// (0x00034f75) area_vitu2_query_pane_t1

0x726b,	// (0x00034f89) area_vitu2_query_pane_t2_ParamLimits

0x726b,	// (0x00034f89) area_vitu2_query_pane_t2

0x727f,	// (0x00034f9d) area_vitu2_query_pane_t3_ParamLimits

0x727f,	// (0x00034f9d) area_vitu2_query_pane_t3

0xd78c,	// (0x0003b4aa) area_vitu2_query_pane_t4_ParamLimits

0xd78c,	// (0x0003b4aa) area_vitu2_query_pane_t4

0xd7b4,	// (0x0003b4d2) area_vitu2_query_pane_t5_ParamLimits

0xd7b4,	// (0x0003b4d2) area_vitu2_query_pane_t5

0xd7dc,	// (0x0003b4fa) area_vitu2_query_pane_t6_ParamLimits

0xd7dc,	// (0x0003b4fa) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0003d792) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0003d792) area_vitu2_query_pane_t

0x72a7,	// (0x00034fc5) bg_button_pane_cp018

0x72b5,	// (0x00034fd3) bg_button_pane_cp021

0x72c1,	// (0x00034fdf) bg_button_pane_cp022

0x72d0,	// (0x00034fee) input_focus_pane_cp09

0xae00,	// (0x00038b1e) aid_size_touch_mv_arrow_left

0xae29,	// (0x00038b47) aid_size_touch_mv_arrow_right

0x6b0e,	// (0x0003482c) main_cset_slider_pane_g16_ParamLimits

0x6b0e,	// (0x0003482c) main_cset_slider_pane_g16

0x6b1a,	// (0x00034838) main_cset_slider_pane_g17_ParamLimits

0x6b1a,	// (0x00034838) main_cset_slider_pane_g17

0x71ed,	// (0x00034f0b) cell_cam4_burst_pane_g1_ParamLimits

0x9ba8,	// (0x000378c6) compa_mode_pane

0x6d27,	// (0x00034a45) popup_vtel_slider_window_g3_ParamLimits

0x6d27,	// (0x00034a45) popup_vtel_slider_window_g3

0x6d3e,	// (0x00034a5c) popup_vtel_slider_window_g4_ParamLimits

0x6d3e,	// (0x00034a5c) popup_vtel_slider_window_g4

0x6d55,	// (0x00034a73) popup_vtel_slider_window_t1_ParamLimits

0x6d55,	// (0x00034a73) popup_vtel_slider_window_t1

0x19af,	// (0x0002f6cd) main_cl_pane

0x4a5e,	// (0x0003277c) popup_imed_adjust2_window_ParamLimits

0xc43e,	// (0x0003a15c) bg_tb_trans_pane_cp05_ParamLimits

0xcdad,	// (0x0003aacb) popup_imed_adjust2_window_g1_ParamLimits

0xcdbc,	// (0x0003aada) popup_imed_adjust2_window_g2_ParamLimits

0xcdbc,	// (0x0003aada) popup_imed_adjust2_window_g2

0xcdc8,	// (0x0003aae6) popup_imed_adjust2_window_g3_ParamLimits

0xcdc8,	// (0x0003aae6) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0003d4fd) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0003d4fd) popup_imed_adjust2_window_g

0xcdd4,	// (0x0003aaf2) popup_imed_adjust2_window_t1_ParamLimits

0xcdec,	// (0x0003ab0a) slider_imed_adjust_pane_ParamLimits

0xce00,	// (0x0003ab1e) slider_imed_adjust_pane_g1_ParamLimits

0xce10,	// (0x0003ab2e) slider_imed_adjust_pane_g2_ParamLimits

0xce20,	// (0x0003ab3e) slider_imed_adjust_pane_g3_ParamLimits

0xce31,	// (0x0003ab4f) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0003d504) slider_imed_adjust_pane_g_ParamLimits

0x11ea,	// (0x0002ef08) aid_touch_area_cam4_ParamLimits

0x11ea,	// (0x0002ef08) aid_touch_area_cam4

0x65a3,	// (0x000342c1) battery_pane_cp01

0x12b9,	// (0x0002efd7) main_camera4_pane_g6_ParamLimits

0x12b9,	// (0x0002efd7) main_camera4_pane_g6

0x12e3,	// (0x0002f001) main_camera4_pane_t2_ParamLimits

0x12e3,	// (0x0002f001) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0003d607) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0003d607) main_camera4_pane_t

0x1304,	// (0x0002f022) aid_touch_area_vid4_ParamLimits

0x1304,	// (0x0002f022) aid_touch_area_vid4

0x1358,	// (0x0002f076) main_video4_pane_g5_ParamLimits

0x1358,	// (0x0002f076) main_video4_pane_g5

0x137d,	// (0x0002f09b) vid4_progress_pane_ParamLimits

0x137d,	// (0x0002f09b) vid4_progress_pane

0xd44c,	// (0x0003b16a) main_cset_slider_pane_g18_ParamLimits

0xd44c,	// (0x0003b16a) main_cset_slider_pane_g18

0xd64a,	// (0x0003b368) cell_cam4_burst_pane_g2_ParamLimits

0xd64a,	// (0x0003b368) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0003d766) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0003d766) cell_cam4_burst_pane_g

0xa2e5,	// (0x00038003) bg_cl_pane_ParamLimits

0xa2e5,	// (0x00038003) bg_cl_pane

0x72df,	// (0x00034ffd) cl_header_pane_ParamLimits

0x72df,	// (0x00034ffd) cl_header_pane

0x72f3,	// (0x00035011) cl_listscroll_pane_ParamLimits

0x72f3,	// (0x00035011) cl_listscroll_pane

0xd828,	// (0x0003b546) bg_cl_pane_g1

0xd830,	// (0x0003b54e) bg_cl_pane_g2

0xd838,	// (0x0003b556) bg_cl_pane_g3

0xd840,	// (0x0003b55e) bg_cl_pane_g4

0xd848,	// (0x0003b566) bg_cl_pane_g5

0xd850,	// (0x0003b56e) bg_cl_pane_g6

0xd858,	// (0x0003b576) bg_cl_pane_g7

0xd860,	// (0x0003b57e) bg_cl_pane_g8

0xd868,	// (0x0003b586) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0003d7a1) bg_cl_pane_g

0x7303,	// (0x00035021) aid_height_cl_leading_ParamLimits

0x7303,	// (0x00035021) aid_height_cl_leading

0x730f,	// (0x0003502d) aid_height_cl_text_ParamLimits

0x730f,	// (0x0003502d) aid_height_cl_text

0xa724,	// (0x00038442) bg_cl_header_pane_ParamLimits

0xa724,	// (0x00038442) bg_cl_header_pane

0x732e,	// (0x0003504c) cl_header_pane_g1_ParamLimits

0x732e,	// (0x0003504c) cl_header_pane_g1

0x7344,	// (0x00035062) cl_header_pane_t1_ParamLimits

0x7344,	// (0x00035062) cl_header_pane_t1

0xd870,	// (0x0003b58e) cl_list_pane

0xd41f,	// (0x0003b13d) hc_scroll_pane_cp01

0xa6dc,	// (0x000383fa) bg_cl_header_pane_g1

0xd305,	// (0x0003b023) bg_cl_header_pane_g2

0xa6fc,	// (0x0003841a) bg_cl_header_pane_g3

0xd315,	// (0x0003b033) bg_cl_header_pane_g4

0xd30d,	// (0x0003b02b) bg_cl_header_pane_g5

0xd559,	// (0x0003b277) bg_cl_header_pane_g6

0xd32d,	// (0x0003b04b) bg_cl_header_pane_g7

0xd335,	// (0x0003b053) bg_cl_header_pane_g8

0xd325,	// (0x0003b043) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0003d7b4) bg_cl_header_pane_g

0x735d,	// (0x0003507b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x735d,	// (0x0003507b) hc_cl_list_double_graphic_heading_pane

0x736e,	// (0x0003508c) hc_cl_list_single_graphic_pane_ParamLimits

0x736e,	// (0x0003508c) hc_cl_list_single_graphic_pane

0x7384,	// (0x000350a2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7384,	// (0x000350a2) hc_cl_list_single_graphic_pane_g1

0x7390,	// (0x000350ae) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7390,	// (0x000350ae) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0003d7c7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0003d7c7) hc_cl_list_single_graphic_pane_g

0x73a4,	// (0x000350c2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x73a4,	// (0x000350c2) hc_cl_list_single_graphic_pane_t1

0x7384,	// (0x000350a2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7384,	// (0x000350a2) hc_cl_list_double_graphic_heading_pane_g1

0x73b9,	// (0x000350d7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x73b9,	// (0x000350d7) hc_cl_list_double_graphic_heading_pane_g2

0x73cd,	// (0x000350eb) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73cd,	// (0x000350eb) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0003d7cc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0003d7cc) hc_cl_list_double_graphic_heading_pane_g

0x73e1,	// (0x000350ff) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73e1,	// (0x000350ff) hc_cl_list_double_graphic_heading_pane_t1

0x73f6,	// (0x00035114) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73f6,	// (0x00035114) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0003d7d3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0003d7d3) hc_cl_list_double_graphic_heading_pane_t

0xa762,	// (0x00038480) vid4_progress_pane_g1

0xa772,	// (0x00038490) vid4_progress_pane_g2

0x1852,	// (0x0002f570) vid4_progress_pane_g3

0xa782,	// (0x000384a0) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0003d7d8) vid4_progress_pane_g

0x1864,	// (0x0002f582) vid4_progress_pane_t1

0xa79a,	// (0x000384b8) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0003d7e3) vid4_progress_pane_t

0x187c,	// (0x0002f59a) wait_bar_pane_cp07

0xc639,	// (0x0003a357) blid_firmament_pane_ParamLimits

0xc67c,	// (0x0003a39a) popup_blid_sat_info2_window_g1

0xc6a0,	// (0x0003a3be) popup_blid_sat_info2_window_t3

0xc6ae,	// (0x0003a3cc) popup_blid_sat_info2_window_t4

0xc6bc,	// (0x0003a3da) popup_blid_sat_info2_window_t5

0xc6ca,	// (0x0003a3e8) popup_blid_sat_info2_window_t6

0xc6da,	// (0x0003a3f8) popup_blid_sat_info2_window_t7

0xc6e8,	// (0x0003a406) popup_blid_sat_info2_window_t8

0xc6f6,	// (0x0003a414) popup_blid_sat_info2_window_t9

0xc704,	// (0x0003a422) popup_blid_sat_info2_window_t10

0xc7c6,	// (0x0003a4e4) aid_firma_cardinal_ParamLimits

0xc7da,	// (0x0003a4f8) blid_firmament_pane_t1_ParamLimits

0xc7f1,	// (0x0003a50f) blid_firmament_pane_t2_ParamLimits

0xc808,	// (0x0003a526) blid_firmament_pane_t3_ParamLimits

0xc81f,	// (0x0003a53d) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0003d3f1) blid_firmament_pane_t_ParamLimits

0xc836,	// (0x0003a554) blid_sat_info_pane_ParamLimits

0x1995,	// (0x0002f6b3) main_cam_set_pane_ParamLimits

0x5d50,	// (0x00033a6e) aid_size_cell_colour_35_ParamLimits

0x5d70,	// (0x00033a8e) aid_size_cell_colour_112_ParamLimits

0x5d90,	// (0x00033aae) aid_size_cell_effect_ParamLimits

0xc43e,	// (0x0003a15c) bg_tb_trans_pane_cp02_ParamLimits

0xa9f2,	// (0x00038710) heading_imed_pane_ParamLimits

0x5db0,	// (0x00033ace) listscroll_imed_pane_ParamLimits

0xba64,	// (0x00039782) popup_call2_audio_first_window_g5_ParamLimits

0xba64,	// (0x00039782) popup_call2_audio_first_window_g5

0x0fc7,	// (0x0002ece5) aid_size_touch_image3_arrow_left_ParamLimits

0x0fc7,	// (0x0002ece5) aid_size_touch_image3_arrow_left

0x0ff3,	// (0x0002ed11) aid_size_touch_image3_arrow_right_ParamLimits

0x0ff3,	// (0x0002ed11) aid_size_touch_image3_arrow_right

0xa7af,	// (0x000384cd) vid4_progress_pane_t3

0x60c3,	// (0x00033de1) main_hwr_training_symbol_option_pane_ParamLimits

0x60c3,	// (0x00033de1) main_hwr_training_symbol_option_pane

0xd09a,	// (0x0003adb8) popup_hwr_training_preview_window_ParamLimits

0xd09a,	// (0x0003adb8) popup_hwr_training_preview_window

0x0e72,	// (0x0002eb90) hwr_training_navi_pane_g5_ParamLimits

0x0e72,	// (0x0002eb90) hwr_training_navi_pane_g5

0xd2f3,	// (0x0003b011) popup_char_count_window

0x1995,	// (0x0002f6b3) bg_popup_sub_pane_cp20_ParamLimits

0x17bd,	// (0x0002f4db) list_vitu2_match_list_pane_ParamLimits

0x17cc,	// (0x0002f4ea) vitu2_page_scroll_pane_ParamLimits

0x17cc,	// (0x0002f4ea) vitu2_page_scroll_pane

0xd8e4,	// (0x0003b602) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd8e4,	// (0x0003b602) list_single_hwr_training_symbol_option_pane

0xd8f7,	// (0x0003b615) list_single_hwr_training_symbol_option_pane_g1

0xd8ff,	// (0x0003b61d) list_single_hwr_training_symbol_option_pane_t1

0xd90d,	// (0x0003b62b) bg_button_pane_cp023

0xd916,	// (0x0003b634) bg_button_pane_cp024

0x7443,	// (0x00035161) vitu2_page_scroll_pane_g1

0x744b,	// (0x00035169) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0003d7ea) vitu2_page_scroll_pane_g

0x7453,	// (0x00035171) vitu2_page_scroll_pane_t1

0xd949,	// (0x0003b667) popup_char_count_window_g1

0xd952,	// (0x0003b670) popup_char_count_window_g2

0xd95b,	// (0x0003b679) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0003d7ef) popup_char_count_window_g

0xd964,	// (0x0003b682) popup_char_count_window_t1

0x19af,	// (0x0002f6cd) main_vded2_pane

0xcd99,	// (0x0003aab7) aid_size_cell_imed_line

0xcda3,	// (0x0003aac1) grid_imed_line_width_pane

0x667d,	// (0x0003439b) vid4_indicators_pane_g4

0xd972,	// (0x0003b690) cell_imed_line_width_pane_ParamLimits

0xd972,	// (0x0003b690) cell_imed_line_width_pane

0xd986,	// (0x0003b6a4) cell_imed_line_width_pane_g1

0xd8b8,	// (0x0003b5d6) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0003d7f6) cell_imed_line_width_pane_g

0x7462,	// (0x00035180) main_vded2_pane_g1_ParamLimits

0x7462,	// (0x00035180) main_vded2_pane_g1

0x7478,	// (0x00035196) main_vded2_pane_g2_ParamLimits

0x7478,	// (0x00035196) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0003d7fb) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0003d7fb) main_vded2_pane_g

0x748a,	// (0x000351a8) vded2_slider_pane_ParamLimits

0x748a,	// (0x000351a8) vded2_slider_pane

0x749a,	// (0x000351b8) aid_size_touch_vded2_end

0x74a4,	// (0x000351c2) aid_size_touch_vded2_playhead

0xd98f,	// (0x0003b6ad) aid_size_touch_vded2_start

0xd997,	// (0x0003b6b5) vded2_slider_bg_pane

0xd9a0,	// (0x0003b6be) vded2_slider_pane_g1

0xd9a9,	// (0x0003b6c7) vded2_slider_pane_g2

0x74ae,	// (0x000351cc) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0003d800) vded2_slider_pane_g

0xd9b1,	// (0x0003b6cf) vded2_slider_bg_pane_g1

0xd9ba,	// (0x0003b6d8) vded2_slider_bg_pane_g2

0xd9c3,	// (0x0003b6e1) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0003d807) vded2_slider_bg_pane_g

0x4191,	// (0x00031eaf) aid_postcard_touch_down_pane_ParamLimits

0x4191,	// (0x00031eaf) aid_postcard_touch_down_pane

0x41a7,	// (0x00031ec5) aid_postcard_touch_up_pane_ParamLimits

0x41a7,	// (0x00031ec5) aid_postcard_touch_up_pane

0x19af,	// (0x0002f6cd) main_blid2_pane

0x4a44,	// (0x00032762) popup_blid2_search_window

0x9ba8,	// (0x000378c6) blid2_gps_pane

0x9ba8,	// (0x000378c6) blid2_navig_pane

0x9ba8,	// (0x000378c6) blid2_search_pane

0x9ba8,	// (0x000378c6) blid2_tripm_pane

0x74b9,	// (0x000351d7) blid2_search_pane_g1_ParamLimits

0x74b9,	// (0x000351d7) blid2_search_pane_g1

0x74d3,	// (0x000351f1) blid2_search_pane_t1_ParamLimits

0x74d3,	// (0x000351f1) blid2_search_pane_t1

0x74e5,	// (0x00035203) aid_size_cell_blid2_gps_ParamLimits

0x74e5,	// (0x00035203) aid_size_cell_blid2_gps

0x74fd,	// (0x0003521b) blid2_gps_pane_g1_ParamLimits

0x74fd,	// (0x0003521b) blid2_gps_pane_g1

0x7511,	// (0x0003522f) grid_blid2_satellite_pane_ParamLimits

0x7511,	// (0x0003522f) grid_blid2_satellite_pane

0x752b,	// (0x00035249) blid2_navig_pane_g1_ParamLimits

0x752b,	// (0x00035249) blid2_navig_pane_g1

0x7537,	// (0x00035255) blid2_navig_pane_t1_ParamLimits

0x7537,	// (0x00035255) blid2_navig_pane_t1

0x7552,	// (0x00035270) blid2_navig_pane_t2_ParamLimits

0x7552,	// (0x00035270) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0003d80e) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0003d80e) blid2_navig_pane_t

0x756d,	// (0x0003528b) blid2_navig_ring_pane_ParamLimits

0x756d,	// (0x0003528b) blid2_navig_ring_pane

0x7586,	// (0x000352a4) blid2_speed_pane_ParamLimits

0x7586,	// (0x000352a4) blid2_speed_pane

0x7592,	// (0x000352b0) blid2_tripm_pane_g1_ParamLimits

0x7592,	// (0x000352b0) blid2_tripm_pane_g1

0x75ab,	// (0x000352c9) blid2_tripm_pane_g2_ParamLimits

0x75ab,	// (0x000352c9) blid2_tripm_pane_g2

0x75bf,	// (0x000352dd) blid2_tripm_pane_g3_ParamLimits

0x75bf,	// (0x000352dd) blid2_tripm_pane_g3

0x75d3,	// (0x000352f1) blid2_tripm_pane_g4_ParamLimits

0x75d3,	// (0x000352f1) blid2_tripm_pane_g4

0x75e7,	// (0x00035305) blid2_tripm_pane_g5_ParamLimits

0x75e7,	// (0x00035305) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0003d813) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0003d813) blid2_tripm_pane_g

0x760d,	// (0x0003532b) blid2_tripm_pane_t1_ParamLimits

0x760d,	// (0x0003532b) blid2_tripm_pane_t1

0x7628,	// (0x00035346) blid2_tripm_pane_t2_ParamLimits

0x7628,	// (0x00035346) blid2_tripm_pane_t2

0x7641,	// (0x0003535f) blid2_tripm_pane_t3_ParamLimits

0x7641,	// (0x0003535f) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0003d820) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0003d820) blid2_tripm_pane_t

0x7688,	// (0x000353a6) cell_blid2_satellite_pane_ParamLimits

0x7688,	// (0x000353a6) cell_blid2_satellite_pane

0x76a6,	// (0x000353c4) cell_blid2_satellite_pane_g1

0xd9cc,	// (0x0003b6ea) cell_blid2_satellite_pane_t1

0xc846,	// (0x0003a564) blid2_speed_pane_g1

0xd9da,	// (0x0003b6f8) blid2_speed_pane_t1

0xd9e8,	// (0x0003b706) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0003d829) blid2_speed_pane_t

0xc846,	// (0x0003a564) blid2_navig_ring_pane_g1

0x76af,	// (0x000353cd) blid2_navig_ring_pane_g2

0x76b7,	// (0x000353d5) blid2_navig_ring_pane_g3

0x76bf,	// (0x000353dd) blid2_navig_ring_pane_g4

0x76c7,	// (0x000353e5) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0003d82e) blid2_navig_ring_pane_g

0x9ba8,	// (0x000378c6) bg_popup_window_pane_cp011

0xd9f6,	// (0x0003b714) popup_blid2_search_window_g1

0xd9fe,	// (0x0003b71c) popup_blid2_search_window_t1

0xda0c,	// (0x0003b72a) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0003d839) popup_blid2_search_window_t

0xa5eb,	// (0x00038309) main_browser_pane_g1

0xa2e5,	// (0x00038003) main_browser_pane_ParamLimits

0x1995,	// (0x0002f6b3) bg_button_pane_cp011_ParamLimits

0x1733,	// (0x0002f451) cell_vitu2_function_pane_g1_ParamLimits

0xc43e,	// (0x0003a15c) bg_popup_sub_pane_cp22_ParamLimits

0x6f79,	// (0x00034c97) input_focus_pane_cp08_ParamLimits

0x6f90,	// (0x00034cae) popup_vitu2_query_button_pane_ParamLimits

0x6f90,	// (0x00034cae) popup_vitu2_query_button_pane

0x6fa1,	// (0x00034cbf) popup_vitu2_query_input_button_pane

0xd594,	// (0x0003b2b2) popup_vitu2_query_window_g1_ParamLimits

0x6fab,	// (0x00034cc9) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0003d73a) popup_vitu2_query_window_g_ParamLimits

0x9ba8,	// (0x000378c6) bg_button_pane_cp026

0x76cf,	// (0x000353ed) popup_vitu2_query_input_button_pane_g1

0x9ba8,	// (0x000378c6) bg_button_pane_cp025

0xda1a,	// (0x0003b738) popup_vitu2_query_button_pane_t1

0x51b1,	// (0x00032ecf) main_mp3_pane_t6

0x51bf,	// (0x00032edd) popup_slider_window_cp01

0x65e1,	// (0x000342ff) cam4_battery_pane

0x663a,	// (0x00034358) cam4_battery_pane_cp02

0xa75a,	// (0x00038478) cam4_battery_pane_cp01

0xa75a,	// (0x00038478) cam4_battery_pane_cp03

0xd8c0,	// (0x0003b5de) cam4_battery_pane_g1

0xc846,	// (0x0003a564) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0003d83e) cam4_battery_pane_g

0xc712,	// (0x0003a430) popup_blid_sat_info2_window_t11

0xae00,	// (0x00038b1e) aid_size_touch_mv_arrow_left_ParamLimits

0xae29,	// (0x00038b47) aid_size_touch_mv_arrow_right_ParamLimits

0xae87,	// (0x00038ba5) navi_pane_g1_ParamLimits

0xae93,	// (0x00038bb1) navi_pane_g2_ParamLimits

0xaec1,	// (0x00038bdf) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003d103) navi_pane_g_ParamLimits

0x3c2d,	// (0x0003194b) navi_pane_mv_t1_ParamLimits

0x5dbc,	// (0x00033ada) grid_imed_effect_pane_ParamLimits

0x27b4,	// (0x000304d2) aid_placing_vt_slider_lsc

0xa53a,	// (0x00038258) aid_placing_vt_slider_prt

0xa724,	// (0x00038442) bg_tb_trans_pane_cp01_ParamLimits

0xc9d2,	// (0x0003a6f0) popup_image_details_window_g1_ParamLimits

0xc9e5,	// (0x0003a703) popup_image_details_window_g2_ParamLimits

0xc9fa,	// (0x0003a718) popup_image_details_window_g3_ParamLimits

0xc9fa,	// (0x0003a718) popup_image_details_window_g3

0xf718,	// (0x0003d436) popup_image_details_window_g_ParamLimits

0xca0e,	// (0x0003a72c) popup_image_details_window_t1_ParamLimits

0xca20,	// (0x0003a73e) popup_image_details_window_t2_ParamLimits

0xca39,	// (0x0003a757) popup_image_details_window_t3_ParamLimits

0xca4d,	// (0x0003a76b) popup_image_details_window_t4_ParamLimits

0xca68,	// (0x0003a786) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0003d43d) popup_image_details_window_t_ParamLimits

0x731b,	// (0x00035039) cl_header_name_pane_ParamLimits

0x731b,	// (0x00035039) cl_header_name_pane

0x76d7,	// (0x000353f5) cl_header_name_pane_t1_ParamLimits

0x76d7,	// (0x000353f5) cl_header_name_pane_t1

0x76f8,	// (0x00035416) cl_header_name_pane_t2_ParamLimits

0x76f8,	// (0x00035416) cl_header_name_pane_t2

0x773a,	// (0x00035458) cl_header_name_pane_t3_ParamLimits

0x773a,	// (0x00035458) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0003d843) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0003d843) cl_header_name_pane_t

0xaf50,	// (0x00038c6e) navi_pane_mv_g2_ParamLimits

0xd2b0,	// (0x0003afce) field_vitu2_entry_pane_g1_ParamLimits

0xd2bc,	// (0x0003afda) field_vitu2_entry_pane_g2_ParamLimits

0xd2c8,	// (0x0003afe6) field_vitu2_entry_pane_g3_ParamLimits

0xd2c8,	// (0x0003afe6) field_vitu2_entry_pane_g3

0xf91b,	// (0x0003d639) field_vitu2_entry_pane_g_ParamLimits

0x15ce,	// (0x0002f2ec) cell_vitu2_itu_pane_g1_ParamLimits

0x15de,	// (0x0002f2fc) cell_vitu2_itu_pane_g2_ParamLimits

0x15de,	// (0x0002f2fc) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0003d645) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0003d645) cell_vitu2_itu_pane_g

0x1995,	// (0x0002f6b3) bg_vkb2_func_pane_cp05_ParamLimits

0x1995,	// (0x0002f6b3) bg_vkb2_func_pane_cp05

0x1995,	// (0x0002f6b3) bg_vkb2_func_pane_cp03

0x1995,	// (0x0002f6b3) bg_vkb2_func_pane_cp04

0x1995,	// (0x0002f6b3) bg_vkb2_func_pane_cp10_ParamLimits

0x1995,	// (0x0002f6b3) bg_vkb2_func_pane_cp10

0x72c1,	// (0x00034fdf) bg_vkb2_func_pane_cp08

0x72a7,	// (0x00034fc5) bg_vkb2_func_pane_cp06

0x72b5,	// (0x00034fd3) bg_vkb2_func_pane_cp07

0xd91f,	// (0x0003b63d) bg_vkb2_func_pane_cp11_ParamLimits

0xd91f,	// (0x0003b63d) bg_vkb2_func_pane_cp11

0xd934,	// (0x0003b652) bg_vkb2_func_pane_cp12_ParamLimits

0xd934,	// (0x0003b652) bg_vkb2_func_pane_cp12

0x9ba8,	// (0x000378c6) bg_vkb2_func_pane_cp09

0xd305,	// (0x0003b023) bg_vkb2_func_pane_g1

0xa6fc,	// (0x0003841a) bg_vkb2_func_pane_g2

0xd30d,	// (0x0003b02b) bg_vkb2_func_pane_g3

0xd315,	// (0x0003b033) bg_vkb2_func_pane_g4

0xd559,	// (0x0003b277) bg_vkb2_func_pane_g5

0xd32d,	// (0x0003b04b) bg_vkb2_func_pane_g6

0xd335,	// (0x0003b053) bg_vkb2_func_pane_g7

0xd325,	// (0x0003b043) bg_vkb2_func_pane_g8

0xa6dc,	// (0x000383fa) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0003d84a) bg_vkb2_func_pane_g

0x75fb,	// (0x00035319) blid2_tripm_pane_g6_ParamLimits

0x75fb,	// (0x00035319) blid2_tripm_pane_g6

0xd152,	// (0x0003ae70) mp4_progress_pane_g1

0x7674,	// (0x00035392) blid2_tripm_values_pane_ParamLimits

0x7674,	// (0x00035392) blid2_tripm_values_pane

0x776b,	// (0x00035489) blid2_tripm_values_pane_t1

0x7779,	// (0x00035497) blid2_tripm_values_pane_t2

0x7787,	// (0x000354a5) blid2_tripm_values_pane_t3

0x7795,	// (0x000354b3) blid2_tripm_values_pane_t4

0x77a3,	// (0x000354c1) blid2_tripm_values_pane_t5

0x77b1,	// (0x000354cf) blid2_tripm_values_pane_t6

0x77bf,	// (0x000354dd) blid2_tripm_values_pane_t7

0x77cd,	// (0x000354eb) blid2_tripm_values_pane_t8

0x77db,	// (0x000354f9) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0003d85d) blid2_tripm_values_pane_t

0x27f6,	// (0x00030514) call_video_pane_t1_ParamLimits

0x2814,	// (0x00030532) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003cf8c) call_video_pane_t_ParamLimits

0x4111,	// (0x00031e2f) msg_header_pane_g1_ParamLimits

0xb148,	// (0x00038e66) msg_header_pane_g2_ParamLimits

0xb148,	// (0x00038e66) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003d1a6) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003d1a6) msg_header_pane_g

0xa2e5,	// (0x00038003) main_clock2_pane_ParamLimits

0x5b35,	// (0x00033853) grid_clock2_toolbar_pane_ParamLimits

0x5b35,	// (0x00033853) grid_clock2_toolbar_pane

0x5b35,	// (0x00033853) listscroll_clock2_pane_ParamLimits

0x5b35,	// (0x00033853) listscroll_clock2_pane

0x5c28,	// (0x00033946) main_clock2_pane_t3_ParamLimits

0x5c28,	// (0x00033946) main_clock2_pane_t3

0x5c4c,	// (0x0003396a) main_clock2_pane_t4_ParamLimits

0x5c4c,	// (0x0003396a) main_clock2_pane_t4

0xda28,	// (0x0003b746) cell_clock2_toolbar_pane

0xda30,	// (0x0003b74e) cell_clock2_toolbar_pane_cp01

0xda30,	// (0x0003b74e) cell_clock2_toolbar_pane_cp02

0xda38,	// (0x0003b756) cell_clock2_toolbar_pane_cp03

0xda40,	// (0x0003b75e) list_clock2_pane

0xad76,	// (0x00038a94) scroll_pane_cp10

0xda48,	// (0x0003b766) list_single_clock2_pane_ParamLimits

0xda48,	// (0x0003b766) list_single_clock2_pane

0xafb7,	// (0x00038cd5) list_highlight_pane_cp08

0xda55,	// (0x0003b773) list_single_clock2_pane_t1

0xda63,	// (0x0003b781) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0003d870) list_single_clock2_pane_t

0x9ba8,	// (0x000378c6) bg_button_pane_cp10

0xda71,	// (0x0003b78f) cell_clock2_toolbar_pane_g1

0x062f,	// (0x0002e34d) aid_main_viewer_pane_g1_ParamLimits

0x062f,	// (0x0002e34d) aid_main_viewer_pane_g1

0x063d,	// (0x0002e35b) aid_main_viewer_pane_g2_ParamLimits

0x063d,	// (0x0002e35b) aid_main_viewer_pane_g2

0x4137,	// (0x00031e55) aid_main_viewer_pane_g3_ParamLimits

0x4137,	// (0x00031e55) aid_main_viewer_pane_g3

0x4146,	// (0x00031e64) aid_main_viewer_pane_g4_ParamLimits

0x4146,	// (0x00031e64) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003d1b7) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003d1b7) aid_main_viewer_pane_g

0x0671,	// (0x0002e38f) main_calc_pane_ParamLimits

0x0697,	// (0x0002e3b5) main_dialer2_pane_ParamLimits

0x19af,	// (0x0002f6cd) main_cam6_pane

0x19af,	// (0x0002f6cd) main_vid6_pane

0x5b41,	// (0x0003385f) listscroll_gen_pane_cp06_ParamLimits

0x5b41,	// (0x0003385f) listscroll_gen_pane_cp06

0x5c6f,	// (0x0003398d) main_clock2_pane_t5_ParamLimits

0x5c6f,	// (0x0003398d) main_clock2_pane_t5

0x5cc9,	// (0x000339e7) aid_call2_pane_cp10_ParamLimits

0x5cdb,	// (0x000339f9) aid_call_pane_cp10_ParamLimits

0xadf4,	// (0x00038b12) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadf4,	// (0x00038b12) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ced,	// (0x00033a0b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ced,	// (0x00033a0b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadf4,	// (0x00038b12) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0003d4f2) popup_clock_analogue_window_cp10_g_ParamLimits

0x5cff,	// (0x00033a1d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x63d4,	// (0x000340f2) cell_dialer2_keypad_pane_g2_ParamLimits

0x63d4,	// (0x000340f2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0003d5d8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0003d5d8) cell_dialer2_keypad_pane_g

0x63f0,	// (0x0003410e) cell_dialer2_keypad_pane_t1

0x6a01,	// (0x0003471f) main_cset_text2_pane_ParamLimits

0x6a01,	// (0x0003471f) main_cset_text2_pane

0xd780,	// (0x0003b49e) area_vitu2_query_pane_g1_ParamLimits

0x7246,	// (0x00034f64) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0003d78d) area_vitu2_query_pane_g_ParamLimits

0xd804,	// (0x0003b522) area_vitu2_query_pane_t7_ParamLimits

0xd804,	// (0x0003b522) area_vitu2_query_pane_t7

0x72a7,	// (0x00034fc5) bg_button_pane_cp018_ParamLimits

0x72b5,	// (0x00034fd3) bg_button_pane_cp021_ParamLimits

0x72c1,	// (0x00034fdf) bg_button_pane_cp022_ParamLimits

0x72c1,	// (0x00034fdf) bg_vkb2_func_pane_cp08_ParamLimits

0x72a7,	// (0x00034fc5) bg_vkb2_func_pane_cp06_ParamLimits

0x72b5,	// (0x00034fd3) bg_vkb2_func_pane_cp07_ParamLimits

0x72d0,	// (0x00034fee) input_focus_pane_cp09_ParamLimits

0xa7c4,	// (0x000384e2) cam6_autofocus_pane_ParamLimits

0xa7c4,	// (0x000384e2) cam6_autofocus_pane

0x188f,	// (0x0002f5ad) cam6_image_uncrop_pane_ParamLimits

0x188f,	// (0x0002f5ad) cam6_image_uncrop_pane

0x189e,	// (0x0002f5bc) cam6_indi_pane_ParamLimits

0x189e,	// (0x0002f5bc) cam6_indi_pane

0x18b4,	// (0x0002f5d2) cam6_mode_pane_ParamLimits

0x18b4,	// (0x0002f5d2) cam6_mode_pane

0x18c6,	// (0x0002f5e4) cam6_timer_pane_ParamLimits

0x18c6,	// (0x0002f5e4) cam6_timer_pane

0x18d2,	// (0x0002f5f0) cam6_zoom_pane_ParamLimits

0x18d2,	// (0x0002f5f0) cam6_zoom_pane

0x77e9,	// (0x00035507) cam6_mode_pane_g1_ParamLimits

0x77e9,	// (0x00035507) cam6_mode_pane_g1

0x77f9,	// (0x00035517) cam6_mode_pane_g2_ParamLimits

0x77f9,	// (0x00035517) cam6_mode_pane_g2

0x7809,	// (0x00035527) cam6_mode_pane_g3_ParamLimits

0x7809,	// (0x00035527) cam6_mode_pane_g3

0x7819,	// (0x00035537) cam6_mode_pane_g4_ParamLimits

0x7819,	// (0x00035537) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0003d875) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0003d875) cam6_mode_pane_g

0xd881,	// (0x0003b59f) bg_tb_trans_pane_cp08_ParamLimits

0xd881,	// (0x0003b59f) bg_tb_trans_pane_cp08

0xda79,	// (0x0003b797) cam6_battery_pane_ParamLimits

0xda79,	// (0x0003b797) cam6_battery_pane

0xda8f,	// (0x0003b7ad) cam6_indi_pane_g1_ParamLimits

0xda8f,	// (0x0003b7ad) cam6_indi_pane_g1

0xdaa1,	// (0x0003b7bf) cam6_indi_pane_g2_ParamLimits

0xdaa1,	// (0x0003b7bf) cam6_indi_pane_g2

0xdab3,	// (0x0003b7d1) cam6_indi_pane_g3_ParamLimits

0xdab3,	// (0x0003b7d1) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0003d87e) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0003d87e) cam6_indi_pane_g

0xdac5,	// (0x0003b7e3) cam6_indi_pane_t1_ParamLimits

0xdac5,	// (0x0003b7e3) cam6_indi_pane_t1

0x7829,	// (0x00035547) cam6_autofocus_pane_g1

0x7831,	// (0x0003554f) cam6_autofocus_pane_g2

0x7839,	// (0x00035557) cam6_autofocus_pane_g3

0x7841,	// (0x0003555f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0003d885) cam6_autofocus_pane_g

0xdaeb,	// (0x0003b809) cam6_timer_pane_g1

0xdaf3,	// (0x0003b811) cam6_timer_pane_t1

0xdb01,	// (0x0003b81f) cam6_zoom_cont_pane

0xdb09,	// (0x0003b827) cam6_zoom_pane_g1

0xdb11,	// (0x0003b82f) cam6_zoom_pane_g2

0x7849,	// (0x00035567) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0003d88e) cam6_zoom_pane_g

0xc846,	// (0x0003a564) cam6_battery_pane_g1

0xc846,	// (0x0003a564) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0003d3fa) cam6_battery_pane_g

0xdb19,	// (0x0003b837) cam6_zoom_cont_pane_g1

0xdb22,	// (0x0003b840) cam6_zoom_cont_pane_g2

0xdb2b,	// (0x0003b849) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0003d895) cam6_zoom_cont_pane_g

0x7866,	// (0x00035584) cam6_mode_pane_cp_ParamLimits

0x7866,	// (0x00035584) cam6_mode_pane_cp

0x7878,	// (0x00035596) cam6_zoom_pane_cp_ParamLimits

0x7878,	// (0x00035596) cam6_zoom_pane_cp

0x7884,	// (0x000355a2) vid6_image_uncrop_cif_pane_ParamLimits

0x7884,	// (0x000355a2) vid6_image_uncrop_cif_pane

0x7894,	// (0x000355b2) vid6_image_uncrop_nhd_pane_ParamLimits

0x7894,	// (0x000355b2) vid6_image_uncrop_nhd_pane

0x78a3,	// (0x000355c1) vid6_image_uncrop_vga_pane_ParamLimits

0x78a3,	// (0x000355c1) vid6_image_uncrop_vga_pane

0x78b2,	// (0x000355d0) vid6_image_uncrop_wvga_pane_ParamLimits

0x78b2,	// (0x000355d0) vid6_image_uncrop_wvga_pane

0x78c1,	// (0x000355df) vid6_indi_pane_ParamLimits

0x78c1,	// (0x000355df) vid6_indi_pane

0xd881,	// (0x0003b59f) bg_tb_trans_pane_cp09_ParamLimits

0xd881,	// (0x0003b59f) bg_tb_trans_pane_cp09

0xdb43,	// (0x0003b861) cam6_battery_pane_cp_ParamLimits

0xdb43,	// (0x0003b861) cam6_battery_pane_cp

0xdb4f,	// (0x0003b86d) vid6_indi_pane_g1_ParamLimits

0xdb4f,	// (0x0003b86d) vid6_indi_pane_g1

0xdb61,	// (0x0003b87f) vid6_indi_pane_g2_ParamLimits

0xdb61,	// (0x0003b87f) vid6_indi_pane_g2

0xdb73,	// (0x0003b891) vid6_indi_pane_g3_ParamLimits

0xdb73,	// (0x0003b891) vid6_indi_pane_g3

0xdb88,	// (0x0003b8a6) vid6_indi_pane_g4_ParamLimits

0xdb88,	// (0x0003b8a6) vid6_indi_pane_g4

0xdb9d,	// (0x0003b8bb) vid6_indi_pane_g5_ParamLimits

0xdb9d,	// (0x0003b8bb) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0003d89c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0003d89c) vid6_indi_pane_g

0xdbb7,	// (0x0003b8d5) vid6_indi_pane_t1_ParamLimits

0xdbb7,	// (0x0003b8d5) vid6_indi_pane_t1

0xdbcd,	// (0x0003b8eb) vid6_indi_pane_t2_ParamLimits

0xdbcd,	// (0x0003b8eb) vid6_indi_pane_t2

0xdbf5,	// (0x0003b913) vid6_indi_pane_t3_ParamLimits

0xdbf5,	// (0x0003b913) vid6_indi_pane_t3

0xdc1d,	// (0x0003b93b) vid6_indi_pane_t4_ParamLimits

0xdc1d,	// (0x0003b93b) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0003d8a7) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0003d8a7) vid6_indi_pane_t

0xdc41,	// (0x0003b95f) wait_bar_pane_cp08

0x78d9,	// (0x000355f7) main_cset_text2_pane_t1_ParamLimits

0x78d9,	// (0x000355f7) main_cset_text2_pane_t1

0x7851,	// (0x0003556f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7851,	// (0x0003556f) listscroll_gen_pane_cp06_t1

0x19af,	// (0x0002f6cd) main_cam6_set_pane

0x65d3,	// (0x000342f1) bg_tb_trans_pane_cp06_ParamLimits

0x65e9,	// (0x00034307) cam4_indicators_pane_g1_ParamLimits

0x65fa,	// (0x00034318) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0003d615) cam4_indicators_pane_g_ParamLimits

0x6618,	// (0x00034336) cam4_indicators_pane_t1_ParamLimits

0x1995,	// (0x0002f6b3) bg_tb_trans_pane_cp07_ParamLimits

0x6644,	// (0x00034362) vid4_indicators_pane_g1_ParamLimits

0x6658,	// (0x00034376) vid4_indicators_pane_g2_ParamLimits

0x666c,	// (0x0003438a) vid4_indicators_pane_g3_ParamLimits

0x667d,	// (0x0003439b) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0003d627) vid4_indicators_pane_g_ParamLimits

0x669b,	// (0x000343b9) vid4_indicators_pane_t1_ParamLimits

0xa762,	// (0x00038480) vid4_progress_pane_g1_ParamLimits

0xa772,	// (0x00038490) vid4_progress_pane_g2_ParamLimits

0x1852,	// (0x0002f570) vid4_progress_pane_g3_ParamLimits

0xa782,	// (0x000384a0) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0003d7d8) vid4_progress_pane_g_ParamLimits

0x1864,	// (0x0002f582) vid4_progress_pane_t1_ParamLimits

0xa79a,	// (0x000384b8) vid4_progress_pane_t2_ParamLimits

0xa7af,	// (0x000384cd) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0003d7e3) vid4_progress_pane_t_ParamLimits

0x187c,	// (0x0002f59a) wait_bar_pane_cp07_ParamLimits

0x78f6,	// (0x00035614) main_cam6_set_pane_g2_ParamLimits

0x78f6,	// (0x00035614) main_cam6_set_pane_g2

0x791a,	// (0x00035638) main_cset6_listscroll_pane_ParamLimits

0x791a,	// (0x00035638) main_cset6_listscroll_pane

0x793a,	// (0x00035658) main_cset6_slider_pane_ParamLimits

0x793a,	// (0x00035658) main_cset6_slider_pane

0x7950,	// (0x0003566e) main_cset6_text2_pane_ParamLimits

0x7950,	// (0x0003566e) main_cset6_text2_pane

0xdc50,	// (0x0003b96e) main_cset6_text_pane

0xdc58,	// (0x0003b976) main_cset_list_pane_copy1_ParamLimits

0xdc58,	// (0x0003b976) main_cset_list_pane_copy1

0xdc68,	// (0x0003b986) scroll_pane_cp028_copy1

0x795e,	// (0x0003567c) cset_list_set_pane_copy1

0x796f,	// (0x0003568d) aid_position_infowindow_above_copy1

0x7977,	// (0x00035695) aid_position_infowindow_below_copy1

0x797f,	// (0x0003569d) cset_list_set_pane_g1_copy1

0x7987,	// (0x000356a5) cset_list_set_pane_g3_copy1_ParamLimits

0x7987,	// (0x000356a5) cset_list_set_pane_g3_copy1

0x7996,	// (0x000356b4) cset_list_set_pane_t1_copy1_ParamLimits

0x7996,	// (0x000356b4) cset_list_set_pane_t1_copy1

0xa724,	// (0x00038442) list_highlight_pane_cp021_copy1_ParamLimits

0xa724,	// (0x00038442) list_highlight_pane_cp021_copy1

0xdc71,	// (0x0003b98f) cset6_slider_pane_ParamLimits

0xdc71,	// (0x0003b98f) cset6_slider_pane

0xdc9d,	// (0x0003b9bb) main_cset6_slider_pane_g1_ParamLimits

0xdc9d,	// (0x0003b9bb) main_cset6_slider_pane_g1

0x79ab,	// (0x000356c9) main_cset6_slider_pane_g2_ParamLimits

0x79ab,	// (0x000356c9) main_cset6_slider_pane_g2

0xdcc5,	// (0x0003b9e3) main_cset6_slider_pane_g3_ParamLimits

0xdcc5,	// (0x0003b9e3) main_cset6_slider_pane_g3

0x79d3,	// (0x000356f1) main_cset6_slider_pane_g4_ParamLimits

0x79d3,	// (0x000356f1) main_cset6_slider_pane_g4

0x79df,	// (0x000356fd) main_cset6_slider_pane_g5_ParamLimits

0x79df,	// (0x000356fd) main_cset6_slider_pane_g5

0xd434,	// (0x0003b152) main_cset6_slider_pane_g7_ParamLimits

0xd434,	// (0x0003b152) main_cset6_slider_pane_g7

0xd440,	// (0x0003b15e) main_cset6_slider_pane_g8_ParamLimits

0xd440,	// (0x0003b15e) main_cset6_slider_pane_g8

0x6aae,	// (0x000347cc) main_cset6_slider_pane_g9_ParamLimits

0x6aae,	// (0x000347cc) main_cset6_slider_pane_g9

0x6aba,	// (0x000347d8) main_cset6_slider_pane_g10_ParamLimits

0x6aba,	// (0x000347d8) main_cset6_slider_pane_g10

0x6ac6,	// (0x000347e4) main_cset6_slider_pane_g11_ParamLimits

0x6ac6,	// (0x000347e4) main_cset6_slider_pane_g11

0x6ad2,	// (0x000347f0) main_cset6_slider_pane_g12_ParamLimits

0x6ad2,	// (0x000347f0) main_cset6_slider_pane_g12

0x6ade,	// (0x000347fc) main_cset6_slider_pane_g13_ParamLimits

0x6ade,	// (0x000347fc) main_cset6_slider_pane_g13

0x6aea,	// (0x00034808) main_cset6_slider_pane_g14_ParamLimits

0x6aea,	// (0x00034808) main_cset6_slider_pane_g14

0x79eb,	// (0x00035709) main_cset6_slider_pane_g15_ParamLimits

0x79eb,	// (0x00035709) main_cset6_slider_pane_g15

0x6b0e,	// (0x0003482c) main_cset6_slider_pane_g16_ParamLimits

0x6b0e,	// (0x0003482c) main_cset6_slider_pane_g16

0x6b1a,	// (0x00034838) main_cset6_slider_pane_g17_ParamLimits

0x6b1a,	// (0x00034838) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0003d8b0) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0003d8b0) main_cset6_slider_pane_g

0xdcd1,	// (0x0003b9ef) main_cset6_slider_pane_t1_ParamLimits

0xdcd1,	// (0x0003b9ef) main_cset6_slider_pane_t1

0x7a1b,	// (0x00035739) main_cset6_slider_pane_t2_ParamLimits

0x7a1b,	// (0x00035739) main_cset6_slider_pane_t2

0x7a46,	// (0x00035764) main_cset6_slider_pane_t3_ParamLimits

0x7a46,	// (0x00035764) main_cset6_slider_pane_t3

0x7a71,	// (0x0003578f) main_cset6_slider_pane_t4_ParamLimits

0x7a71,	// (0x0003578f) main_cset6_slider_pane_t4

0x7a9c,	// (0x000357ba) main_cset6_slider_pane_t5_ParamLimits

0x7a9c,	// (0x000357ba) main_cset6_slider_pane_t5

0xdd12,	// (0x0003ba30) main_cset6_slider_pane_t7_ParamLimits

0xdd12,	// (0x0003ba30) main_cset6_slider_pane_t7

0x7ac7,	// (0x000357e5) main_cset6_slider_pane_t8_ParamLimits

0x7ac7,	// (0x000357e5) main_cset6_slider_pane_t8

0x7aeb,	// (0x00035809) main_cset6_slider_pane_t9_ParamLimits

0x7aeb,	// (0x00035809) main_cset6_slider_pane_t9

0x7b0f,	// (0x0003582d) main_cset6_slider_pane_t10_ParamLimits

0x7b0f,	// (0x0003582d) main_cset6_slider_pane_t10

0x7b33,	// (0x00035851) main_cset6_slider_pane_t11_ParamLimits

0x7b33,	// (0x00035851) main_cset6_slider_pane_t11

0xdd48,	// (0x0003ba66) main_cset6_slider_pane_t14_ParamLimits

0xdd48,	// (0x0003ba66) main_cset6_slider_pane_t14

0xdd81,	// (0x0003ba9f) main_cset6_slider_pane_t15_ParamLimits

0xdd81,	// (0x0003ba9f) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0003d8d5) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0003d8d5) main_cset6_slider_pane_t

0xd88f,	// (0x0003b5ad) cset_slider_pane_g1_copy1

0xd898,	// (0x0003b5b6) cset_slider_pane_g2_copy1

0xd8a1,	// (0x0003b5bf) cset_slider_pane_g3_copy1

0x9ba8,	// (0x000378c6) bg_popup_sub_pane_cp011_copy1

0xddba,	// (0x0003bad8) main_cset_text_pane_g1_copy1

0xd5a8,	// (0x0003b2c6) main_cset_text_pane_t1_copy1

0xd5b6,	// (0x0003b2d4) main_cset_text_pane_t2_copy1

0xd5c4,	// (0x0003b2e2) main_cset_text_pane_t3_copy1

0xd5d2,	// (0x0003b2f0) main_cset_text_pane_t4_copy1

0xd5e0,	// (0x0003b2fe) main_cset_text_pane_t5_copy1

0xddc2,	// (0x0003bae0) main_cset_text_pane_t6_copy1

0xd5fc,	// (0x0003b31a) main_cset_text_pane_t7_copy1

0x78d9,	// (0x000355f7) main_cset_text2_pane_t1_copy1

0x1995,	// (0x0002f6b3) main_ncimui_pane

0x08e1,	// (0x0002e5ff) popup_query_ncimui_window_ParamLimits

0x08e1,	// (0x0002e5ff) popup_query_ncimui_window

0xcb17,	// (0x0003a835) field_cale_ev2_pane_g4_ParamLimits

0xcb17,	// (0x0003a835) field_cale_ev2_pane_g4

0x6174,	// (0x00033e92) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6174,	// (0x00033e92) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0003d5b3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0003d5b3) cell_video_dialer_keypad_pane_g

0x618c,	// (0x00033eaa) cell_video_dialer_keypad_pane_t1

0x9ba8,	// (0x000378c6) bg_popup_window_pane_cp012

0xac43,	// (0x00038961) heading_pane_cp06

0xddee,	// (0x0003bb0c) ncim_query_content_pane

0x9ba8,	// (0x000378c6) bg_popup_heading_pane_cp01

0xddf6,	// (0x0003bb14) ncim_heading_pane_t1

0xde04,	// (0x0003bb22) ncim_indicator_popup_pane

0xde16,	// (0x0003bb34) ncim_query_button_pane

0xde2a,	// (0x0003bb48) ncim_query_content_pane_t1

0xde3c,	// (0x0003bb5a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0003d919) ncim_query_content_pane_t

0xde76,	// (0x0003bb94) ncim_query_list_pane

0xde88,	// (0x0003bba6) ncim_query_popup_pane

0xde04,	// (0x0003bb22) ncim_indicator_popup_pane_ParamLimits

0x7d4e,	// (0x00035a6c) ncim_query_content_pane_g1_ParamLimits

0x7d4e,	// (0x00035a6c) ncim_query_content_pane_g1

0xde2a,	// (0x0003bb48) ncim_query_content_pane_t1_ParamLimits

0xde3c,	// (0x0003bb5a) ncim_query_content_pane_t2_ParamLimits

0x7d5a,	// (0x00035a78) ncim_query_content_pane_t3_ParamLimits

0x7d5a,	// (0x00035a78) ncim_query_content_pane_t3

0x7d82,	// (0x00035aa0) ncim_query_content_pane_t4_ParamLimits

0x7d82,	// (0x00035aa0) ncim_query_content_pane_t4

0x7daa,	// (0x00035ac8) ncim_query_content_pane_t5_ParamLimits

0x7daa,	// (0x00035ac8) ncim_query_content_pane_t5

0xde4e,	// (0x0003bb6c) ncim_query_content_pane_t6_ParamLimits

0xde4e,	// (0x0003bb6c) ncim_query_content_pane_t6

0xfbfb,	// (0x0003d919) ncim_query_content_pane_t_ParamLimits

0xde76,	// (0x0003bb94) ncim_query_list_pane_ParamLimits

0xde88,	// (0x0003bba6) ncim_query_popup_pane_ParamLimits

0xde9c,	// (0x0003bbba) wait_bar_pane_cp04

0x9ba8,	// (0x000378c6) input_focus_pane_cp011

0xdea4,	// (0x0003bbc2) ncim_query_popup_pane_t1

0xdeb2,	// (0x0003bbd0) ncim_list_query_list_pane_ParamLimits

0xdeb2,	// (0x0003bbd0) ncim_list_query_list_pane

0x9ba8,	// (0x000378c6) bg_button_pane_cp027

0xdebf,	// (0x0003bbdd) ncim_query_button_pane_g1

0x9ba8,	// (0x000378c6) list_highlight_pane_cp012

0xdec9,	// (0x0003bbe7) ncim_list_query_list_pane_g1

0xded1,	// (0x0003bbef) ncim_list_query_list_pane_t1

0x6609,	// (0x00034327) cam4_indicators_pane_g3_ParamLimits

0x6609,	// (0x00034327) cam4_indicators_pane_g3

0x6689,	// (0x000343a7) vid4_indicators_pane_g5_ParamLimits

0x6689,	// (0x000343a7) vid4_indicators_pane_g5

0xa78e,	// (0x000384ac) vid4_progress_pane_g5_ParamLimits

0xa78e,	// (0x000384ac) vid4_progress_pane_g5

0x7c3c,	// (0x0003595a) main_ncimui_pane_g1

0x7ca2,	// (0x000359c0) ncimui_group_query_pane_ParamLimits

0x7ca2,	// (0x000359c0) ncimui_group_query_pane

0x7cea,	// (0x00035a08) ncimui_list_pane_ParamLimits

0x7cea,	// (0x00035a08) ncimui_list_pane

0x7d11,	// (0x00035a2f) ncimui_text_pane_ParamLimits

0x7d11,	// (0x00035a2f) ncimui_text_pane

0x7dd2,	// (0x00035af0) ncimui_text_pane_t1_ParamLimits

0x7dd2,	// (0x00035af0) ncimui_text_pane_t1

0xdedf,	// (0x0003bbfd) ncimui_list_single_graphic_pane_ParamLimits

0xdedf,	// (0x0003bbfd) ncimui_list_single_graphic_pane

0x7df0,	// (0x00035b0e) ncimui_query_pane_ParamLimits

0x7df0,	// (0x00035b0e) ncimui_query_pane

0x9ba8,	// (0x000378c6) list_highlight_pane_cp013

0xdeef,	// (0x0003bc0d) ncim_list_query_list_pane_t1_copy1

0xdec9,	// (0x0003bbe7) ncim_list_single_graphic_pane_g1

0xdefd,	// (0x0003bc1b) ncim_query_button_pane_cp01

0xdf09,	// (0x0003bc27) ncim_query_entry_pane_ParamLimits

0xdf09,	// (0x0003bc27) ncim_query_entry_pane

0xdf1c,	// (0x0003bc3a) ncimui_query_pane_g1

0xdf28,	// (0x0003bc46) ncimui_query_pane_t1_ParamLimits

0xdf28,	// (0x0003bc46) ncimui_query_pane_t1

0xa724,	// (0x00038442) input_focus_pane_cp012

0xdf41,	// (0x0003bc5f) ncim_query_entry_pane_t1

0xa2e5,	// (0x00038003) main_im_pane_ParamLimits

0x1995,	// (0x0002f6b3) main_mobtv_pane_ParamLimits

0x1995,	// (0x0002f6b3) main_mobtv_pane

0x7a03,	// (0x00035721) main_cset6_slider_pane_g18_ParamLimits

0x7a03,	// (0x00035721) main_cset6_slider_pane_g18

0x7a0f,	// (0x0003572d) main_cset6_slider_pane_g19_ParamLimits

0x7a0f,	// (0x0003572d) main_cset6_slider_pane_g19

0x7e03,	// (0x00035b21) bg_main_mobtv_pane_ParamLimits

0x7e03,	// (0x00035b21) bg_main_mobtv_pane

0x7e11,	// (0x00035b2f) main_mobtv_info_pane

0x7e1a,	// (0x00035b38) main_mobtv_loading_pane_ParamLimits

0x7e1a,	// (0x00035b38) main_mobtv_loading_pane

0xdf53,	// (0x0003bc71) main_mobtv_pg_channel_list_pane

0xdf5d,	// (0x0003bc7b) main_mobtv_pg_hdr_pane

0x7e27,	// (0x00035b45) main_mobtv_programe_curr_pane_ParamLimits

0x7e27,	// (0x00035b45) main_mobtv_programe_curr_pane

0x7e34,	// (0x00035b52) main_mobtv_programe_next_pane_ParamLimits

0x7e34,	// (0x00035b52) main_mobtv_programe_next_pane

0xdf66,	// (0x0003bc84) popup_mobtv_noti_window

0xc846,	// (0x0003a564) main_tv_pg_hdr_pane_g1

0xdf6e,	// (0x0003bc8c) main_tv_pg_hdr_pane_g2

0xdf76,	// (0x0003bc94) main_tv_pg_hdr_pane_g3

0xdf7e,	// (0x0003bc9c) main_tv_pg_hdr_pane_g4

0xdf86,	// (0x0003bca4) main_tv_pg_hdr_pane_g5

0xdf90,	// (0x0003bcae) main_tv_pg_hdr_pane_g6

0xdf9a,	// (0x0003bcb8) main_tv_pg_hdr_pane_g7

0xdfa4,	// (0x0003bcc2) main_tv_pg_hdr_pane_g8

0xdfae,	// (0x0003bccc) main_tv_pg_hdr_pane_g9

0xdfb8,	// (0x0003bcd6) main_tv_pg_hdr_pane_g10

0xdfc2,	// (0x0003bce0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0003d926) main_tv_pg_hdr_pane_g

0xdfcc,	// (0x0003bcea) main_tv_pg_hdr_pane_t1

0xdfda,	// (0x0003bcf8) main_tv_pg_hdr_pane_t2

0xdfe8,	// (0x0003bd06) main_tv_pg_hdr_pane_t3

0xdff8,	// (0x0003bd16) main_tv_pg_hdr_pane_t4

0xe008,	// (0x0003bd26) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0003d93d) main_tv_pg_hdr_pane_t

0xe018,	// (0x0003bd36) single_mobtv_pg_channel_pane_ParamLimits

0xe018,	// (0x0003bd36) single_mobtv_pg_channel_pane

0xe02a,	// (0x0003bd48) single_mobtv_pg_channel_table_pane

0xe033,	// (0x0003bd51) single_mobtv_pg_channel_thumb_pane

0xe03c,	// (0x0003bd5a) single_tv_pg_channel_pane_g1

0xe045,	// (0x0003bd63) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0003d948) single_tv_pg_channel_pane_g

0xcab2,	// (0x0003a7d0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcab2,	// (0x0003a7d0) bg_single_mobtv_pg_channel_thumb_pane

0xe04e,	// (0x0003bd6c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe04e,	// (0x0003bd6c) single_mobtv_pg_channel_thumb_pane_g1

0xe05c,	// (0x0003bd7a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe05c,	// (0x0003bd7a) single_mobtv_pg_channel_thumb_pane_g2

0xe068,	// (0x0003bd86) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe068,	// (0x0003bd86) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0003d94d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0003d94d) single_mobtv_pg_channel_thumb_pane_g

0xe074,	// (0x0003bd92) single_mobtv_pg_channel_thumb_pane_t1

0xe082,	// (0x0003bda0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0003d954) single_mobtv_pg_channel_thumb_pane_t

0xc846,	// (0x0003a564) bg_single_mobtv_pg_channel_table_pane_g1

0xc846,	// (0x0003a564) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0003d3fa) bg_single_mobtv_pg_channel_table_pane_g

0xe090,	// (0x0003bdae) single_mobtv_pg_channel_table_pane_t1

0xe09e,	// (0x0003bdbc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0003d959) single_mobtv_pg_channel_table_pane_t

0x7e49,	// (0x00035b67) main_mobtv_info_pane_g1_ParamLimits

0x7e49,	// (0x00035b67) main_mobtv_info_pane_g1

0x7e67,	// (0x00035b85) main_mobtv_info_pane_t1_ParamLimits

0x7e67,	// (0x00035b85) main_mobtv_info_pane_t1

0x7edf,	// (0x00035bfd) main_mobtv_info_pane_t2_ParamLimits

0x7edf,	// (0x00035bfd) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0003d963) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0003d963) main_mobtv_info_pane_t

0x7f6e,	// (0x00035c8c) wait_bar_pane_cp05

0x7f80,	// (0x00035c9e) main_mobtv_loading_pane_g1_ParamLimits

0x7f80,	// (0x00035c9e) main_mobtv_loading_pane_g1

0x7f93,	// (0x00035cb1) main_mobtv_loading_pane_g2_ParamLimits

0x7f93,	// (0x00035cb1) main_mobtv_loading_pane_g2

0x7f9f,	// (0x00035cbd) main_mobtv_loading_pane_g3_ParamLimits

0x7f9f,	// (0x00035cbd) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0003d96a) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0003d96a) main_mobtv_loading_pane_g

0xe0ac,	// (0x0003bdca) main_mobtv_loading_pane_t1_ParamLimits

0xe0ac,	// (0x0003bdca) main_mobtv_loading_pane_t1

0xe0c4,	// (0x0003bde2) main_mobtv_loading_pane_t2_ParamLimits

0xe0c4,	// (0x0003bde2) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0003d971) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0003d971) main_mobtv_loading_pane_t

0x7fb2,	// (0x00035cd0) wait_bar_pane_cp06_ParamLimits

0x7fb2,	// (0x00035cd0) wait_bar_pane_cp06

0xe0e8,	// (0x0003be06) main_mobtv_programe_curr_pane_t1

0xe0f6,	// (0x0003be14) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0003d976) main_mobtv_programe_curr_pane_t

0xe104,	// (0x0003be22) main_mobtv_programe_next_pane_t1

0xe112,	// (0x0003be30) main_mobtv_programe_next_pane_t2

0xe120,	// (0x0003be3e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0003d97b) main_mobtv_programe_next_pane_t

0x9ba8,	// (0x000378c6) bg_popup_mobtv_noti_window_pane

0xe12e,	// (0x0003be4c) popup_mobtv_noti_window_g1

0xe136,	// (0x0003be54) popup_mobtv_noti_window_t1

0xe144,	// (0x0003be62) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0003d982) popup_mobtv_noti_window_t

0xc846,	// (0x0003a564) bg_popup_mobtv_noti_window_pane_g1

0x19af,	// (0x0002f6cd) sc_clock_pane

0x19af,	// (0x0002f6cd) main_fs_bigclock_pane

0x765e,	// (0x0003537c) blid2_tripm_pane_t4_ParamLimits

0x765e,	// (0x0003537c) blid2_tripm_pane_t4

0x7fc1,	// (0x00035cdf) sc_clock_pane_g1_ParamLimits

0x7fc1,	// (0x00035cdf) sc_clock_pane_g1

0x7fd3,	// (0x00035cf1) sc_clock_pane_t1_ParamLimits

0x7fd3,	// (0x00035cf1) sc_clock_pane_t1

0x7ff5,	// (0x00035d13) sc_clock_pane_t2_ParamLimits

0x7ff5,	// (0x00035d13) sc_clock_pane_t2

0x800d,	// (0x00035d2b) sc_clock_pane_t3_ParamLimits

0x800d,	// (0x00035d2b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0003d987) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0003d987) sc_clock_pane_t

0x909a,	// (0x00036db8) main_fs_bigclock_indicator_pane_ParamLimits

0x909a,	// (0x00036db8) main_fs_bigclock_indicator_pane

0x80ad,	// (0x00035dcb) main_fs_bigclock_pane_g1_ParamLimits

0x80ad,	// (0x00035dcb) main_fs_bigclock_pane_g1

0x90a6,	// (0x00036dc4) main_fs_bigclock_pane_t1_ParamLimits

0x90a6,	// (0x00036dc4) main_fs_bigclock_pane_t1

0x90b8,	// (0x00036dd6) main_fs_bigclock_pane_t2_ParamLimits

0x90b8,	// (0x00036dd6) main_fs_bigclock_pane_t2

0x90cc,	// (0x00036dea) main_fs_bigclock_pane_t3_ParamLimits

0x90cc,	// (0x00036dea) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0003db8c) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0003db8c) main_fs_bigclock_pane_t

0xec5e,	// (0x0003c97c) main_fs_bigclock_indicator_pane_g1

0xde1e,	// (0x0003bb3c) ncim_query_content_pane_g2_ParamLimits

0xde1e,	// (0x0003bb3c) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0003d914) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0003d914) ncim_query_content_pane_g

0x8026,	// (0x00035d44) sc_clock_pane_t4_ParamLimits

0x8026,	// (0x00035d44) sc_clock_pane_t4

0x1995,	// (0x0002f6b3) main_radioblah_pane

0xd23b,	// (0x0003af59) cell_call4_button_pane_t1_copy1_ParamLimits

0xd23b,	// (0x0003af59) cell_call4_button_pane_t1_copy1

0x7c54,	// (0x00035972) main_ncimui_pane_t1_ParamLimits

0x7c54,	// (0x00035972) main_ncimui_pane_t1

0x7c6e,	// (0x0003598c) main_ncimui_pane_t2_ParamLimits

0x7c6e,	// (0x0003598c) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0003d90d) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0003d90d) main_ncimui_pane_t

0xe288,	// (0x0003bfa6) main_radioblah_anim_pane_ParamLimits

0xe288,	// (0x0003bfa6) main_radioblah_anim_pane

0xe299,	// (0x0003bfb7) main_radioblah_info_pane_ParamLimits

0xe299,	// (0x0003bfb7) main_radioblah_info_pane

0xe2ad,	// (0x0003bfcb) main_radioblah_pane_t1_ParamLimits

0xe2ad,	// (0x0003bfcb) main_radioblah_pane_t1

0xe2c9,	// (0x0003bfe7) main_radioblah_pane_t2_ParamLimits

0xe2c9,	// (0x0003bfe7) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0003d9a8) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0003d9a8) main_radioblah_pane_t

0x8105,	// (0x00035e23) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8105,	// (0x00035e23) main_radioblah_rocker_ctrl_pane

0xe311,	// (0x0003c02f) main_radioblah_info_pane_t1_ParamLimits

0xe311,	// (0x0003c02f) main_radioblah_info_pane_t1

0x815d,	// (0x00035e7b) main_radioblah_info_pane_t2_ParamLimits

0x815d,	// (0x00035e7b) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0003d9b1) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0003d9b1) main_radioblah_info_pane_t

0xc846,	// (0x0003a564) main_radioblah_rocker_ctrl_pane_g1

0x820d,	// (0x00035f2b) main_radioblah_rocker_ctrl_pane_g2

0x8215,	// (0x00035f33) main_radioblah_rocker_ctrl_pane_g3

0x821d,	// (0x00035f3b) main_radioblah_rocker_ctrl_pane_g4

0x8225,	// (0x00035f43) main_radioblah_rocker_ctrl_pane_g5

0x822d,	// (0x00035f4b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0003d9ba) main_radioblah_rocker_ctrl_pane_g

0x78d9,	// (0x000355f7) main_cset_text2_pane_t1_copy1_ParamLimits

0x65b7,	// (0x000342d5) cam4_image_uncrop_qvga_pane

0x6632,	// (0x00034350) vid4_image_uncrop_qcif_pane

0xa7c4,	// (0x000384e2) cam6_image_uncrop_qvga_pane_ParamLimits

0xa7c4,	// (0x000384e2) cam6_image_uncrop_qvga_pane

0xdb33,	// (0x0003b851) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb33,	// (0x0003b851) vid6_image_uncrop_qcif_pane

0x9ba8,	// (0x000378c6) bg_popup_preview_window_pane_cp03

0xddd0,	// (0x0003baee) list_cset_text2_pane

0xddd8,	// (0x0003baf6) main_cset6_text2_pane_g1

0xdde0,	// (0x0003bafe) main_cset6_text2_pane_t1

0x8235,	// (0x00035f53) list_cset_text2_pane_t1_ParamLimits

0x8235,	// (0x00035f53) list_cset_text2_pane_t1

0x1995,	// (0x0002f6b3) main_radioblah_pane_ParamLimits

0x7f5a,	// (0x00035c78) main_mobtv_info_pane_t3_ParamLimits

0x7f5a,	// (0x00035c78) main_mobtv_info_pane_t3

0x80f3,	// (0x00035e11) main_radioblah_pane_g1

0x812d,	// (0x00035e4b) main_radioblah_info_pane_g1

0x81b2,	// (0x00035ed0) main_radioblah_info_pane_t3_ParamLimits

0x81b2,	// (0x00035ed0) main_radioblah_info_pane_t3

0x36c1,	// (0x000313df) highlight_cell_cale_month_pane_ParamLimits

0x36c1,	// (0x000313df) highlight_cell_cale_month_pane

0x19af,	// (0x0002f6cd) main_phob_fisheye_pane

0xcbba,	// (0x0003a8d8) scroll_pane_cp0031_ParamLimits

0xcbba,	// (0x0003a8d8) scroll_pane_cp0031

0xdc41,	// (0x0003b95f) wait_bar_pane_cp08_ParamLimits

0x795e,	// (0x0003567c) cset_list_set_pane_copy1_ParamLimits

0xe34b,	// (0x0003c069) highlight_cell_cale_month_pane_g1

0x824e,	// (0x00035f6c) highlight_cell_cale_month_pane_t1

0xd870,	// (0x0003b58e) list_gen_pane_cp01

0xd41f,	// (0x0003b13d) scroll_pane_01

0xe353,	// (0x0003c071) list_single_double_fisheye_pane

0x825c,	// (0x00035f7a) list_double_fisheye_pane_g1_ParamLimits

0x825c,	// (0x00035f7a) list_double_fisheye_pane_g1

0x8268,	// (0x00035f86) list_double_fisheye_pane_g2_ParamLimits

0x8268,	// (0x00035f86) list_double_fisheye_pane_g2

0x827c,	// (0x00035f9a) list_double_fisheye_pane_g3_ParamLimits

0x827c,	// (0x00035f9a) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0003d9c7) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0003d9c7) list_double_fisheye_pane_g

0x82a5,	// (0x00035fc3) list_double_fisheye_pane_t1_ParamLimits

0x82a5,	// (0x00035fc3) list_double_fisheye_pane_t1

0x82c0,	// (0x00035fde) list_double_fisheye_pane_t2_ParamLimits

0x82c0,	// (0x00035fde) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0003d9d2) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0003d9d2) list_double_fisheye_pane_t

0x19af,	// (0x0002f6cd) main_call5_pane

0x8051,	// (0x00035d6f) sc_swipe_pane_ParamLimits

0x8051,	// (0x00035d6f) sc_swipe_pane

0x82f5,	// (0x00036013) call5_image_pane_ParamLimits

0x82f5,	// (0x00036013) call5_image_pane

0x8312,	// (0x00036030) call5_swipe_1_pane_ParamLimits

0x8312,	// (0x00036030) call5_swipe_1_pane

0x8325,	// (0x00036043) call5_swipe_2_pane_ParamLimits

0x8325,	// (0x00036043) call5_swipe_2_pane

0x8350,	// (0x0003606e) popup_call5_audio_first_window_ParamLimits

0x8350,	// (0x0003606e) popup_call5_audio_first_window

0xcab2,	// (0x0003a7d0) call5_swipe_1_pane_g1_ParamLimits

0xcab2,	// (0x0003a7d0) call5_swipe_1_pane_g1

0xe35c,	// (0x0003c07a) call5_swipe_1_pane_g2_ParamLimits

0xe35c,	// (0x0003c07a) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0003d9d7) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0003d9d7) call5_swipe_1_pane_g

0xe368,	// (0x0003c086) call5_swipe_1_pane_t1_ParamLimits

0xe368,	// (0x0003c086) call5_swipe_1_pane_t1

0xcab2,	// (0x0003a7d0) call5_swipe_2_pane_g1_ParamLimits

0xcab2,	// (0x0003a7d0) call5_swipe_2_pane_g1

0xe37d,	// (0x0003c09b) call5_swipe_2_pane_g2_ParamLimits

0xe37d,	// (0x0003c09b) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0003d9dc) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0003d9dc) call5_swipe_2_pane_g

0xe389,	// (0x0003c0a7) call5_swipe_2_pane_t1_ParamLimits

0xe389,	// (0x0003c0a7) call5_swipe_2_pane_t1

0xe39e,	// (0x0003c0bc) sc_swipe_pane_g1_ParamLimits

0xe39e,	// (0x0003c0bc) sc_swipe_pane_g1

0xe3ab,	// (0x0003c0c9) sc_swipe_pane_g2_ParamLimits

0xe3ab,	// (0x0003c0c9) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0003d9e1) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0003d9e1) sc_swipe_pane_g

0xe3b7,	// (0x0003c0d5) sc_swipe_pane_t1_ParamLimits

0xe3b7,	// (0x0003c0d5) sc_swipe_pane_t1

0x19af,	// (0x0002f6cd) main_cmail_launcher_pane

0x8361,	// (0x0003607f) aid_size_cell_cmail_l_ParamLimits

0x8361,	// (0x0003607f) aid_size_cell_cmail_l

0x837b,	// (0x00036099) grid_cmail_l_pane_ParamLimits

0x837b,	// (0x00036099) grid_cmail_l_pane

0x8396,	// (0x000360b4) cell_cmail_l_pane_ParamLimits

0x8396,	// (0x000360b4) cell_cmail_l_pane

0x83bc,	// (0x000360da) cell_cmail_l_pane_g1_ParamLimits

0x83bc,	// (0x000360da) cell_cmail_l_pane_g1

0x83c8,	// (0x000360e6) cell_cmail_l_pane_t1_ParamLimits

0x83c8,	// (0x000360e6) cell_cmail_l_pane_t1

0xe3cc,	// (0x0003c0ea) cell_cmail_l_pane_t2_ParamLimits

0xe3cc,	// (0x0003c0ea) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0003d9e6) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0003d9e6) cell_cmail_l_pane_t

0xa724,	// (0x00038442) grid_highlight_pane_cp018_ParamLimits

0xa724,	// (0x00038442) grid_highlight_pane_cp018

0x01e0,	// (0x0002defe) main2_pane_ParamLimits

0x01e0,	// (0x0002defe) main2_pane

0xa37e,	// (0x0003809c) popup_sp_fs_action_menu_bg_pane_g1

0xa386,	// (0x000380a4) popup_sp_fs_action_menu_bg_pane_g2

0xa38e,	// (0x000380ac) popup_sp_fs_action_menu_bg_pane_g3

0xa396,	// (0x000380b4) popup_sp_fs_action_menu_bg_pane_g4

0xa39e,	// (0x000380bc) popup_sp_fs_action_menu_bg_pane_g5

0xa3a6,	// (0x000380c4) popup_sp_fs_action_menu_bg_pane_g6

0xa3ae,	// (0x000380cc) popup_sp_fs_action_menu_bg_pane_g7

0xa3b6,	// (0x000380d4) popup_sp_fs_action_menu_bg_pane_g8

0xa3be,	// (0x000380dc) popup_sp_fs_action_menu_bg_pane_g9

0xa3c6,	// (0x000380e4) popup_sp_fs_action_menu_bg_pane_g10

0xa3c6,	// (0x000380e4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0003cea4) popup_sp_fs_action_menu_bg_pane_g

0x262c,	// (0x0003034a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x2_t3_g3_g1

0x2638,	// (0x00030356) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2638,	// (0x00030356) list_medium_line_x2_t3_g3_g2

0x2644,	// (0x00030362) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2644,	// (0x00030362) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003cf56) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003cf56) list_medium_line_x2_t3_g3_g

0x2650,	// (0x0003036e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2650,	// (0x0003036e) list_medium_line_x2_t3_g3_t1

0x2665,	// (0x00030383) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2665,	// (0x00030383) list_medium_line_x2_t3_g3_t2

0x2679,	// (0x00030397) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2679,	// (0x00030397) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003cf5d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003cf5d) list_medium_line_x2_t3_g3_t

0x262c,	// (0x0003034a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x2_t3_g2_g1

0x2644,	// (0x00030362) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2644,	// (0x00030362) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003cf64) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003cf64) list_medium_line_x2_t3_g2_g

0x268e,	// (0x000303ac) list_medium_line_x2_t3_g2_t1_ParamLimits

0x268e,	// (0x000303ac) list_medium_line_x2_t3_g2_t1

0x26a4,	// (0x000303c2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x26a4,	// (0x000303c2) list_medium_line_x2_t3_g2_t2

0x26b6,	// (0x000303d4) list_medium_line_x2_t3_g2_t3_ParamLimits

0x26b6,	// (0x000303d4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003cf69) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003cf69) list_medium_line_x2_t3_g2_t

0x262c,	// (0x0003034a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x2_t4_g4_g1

0x26d4,	// (0x000303f2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x26d4,	// (0x000303f2) list_medium_line_x2_t4_g4_g2

0x2638,	// (0x00030356) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2638,	// (0x00030356) list_medium_line_x2_t4_g4_g3

0x26e0,	// (0x000303fe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x26e0,	// (0x000303fe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003cf70) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003cf70) list_medium_line_x2_t4_g4_g

0x26ec,	// (0x0003040a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x26ec,	// (0x0003040a) list_medium_line_x2_t4_g4_t1

0x2706,	// (0x00030424) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2706,	// (0x00030424) list_medium_line_x2_t4_g4_t2

0x271c,	// (0x0003043a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x271c,	// (0x0003043a) list_medium_line_x2_t4_g4_t3

0x2731,	// (0x0003044f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2731,	// (0x0003044f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003cf79) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003cf79) list_medium_line_x2_t4_g4_t

0x262c,	// (0x0003034a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x2_t2_g4_g1

0x26d4,	// (0x000303f2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x26d4,	// (0x000303f2) list_medium_line_x2_t2_g4_g2

0x2638,	// (0x00030356) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2638,	// (0x00030356) list_medium_line_x2_t2_g4_g3

0x2644,	// (0x00030362) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2644,	// (0x00030362) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003cfe0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003cfe0) list_medium_line_x2_t2_g4_g

0x36e7,	// (0x00031405) list_medium_line_x2_t2_g4_t1_ParamLimits

0x36e7,	// (0x00031405) list_medium_line_x2_t2_g4_t1

0x2679,	// (0x00030397) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2679,	// (0x00030397) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003cfe9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003cfe9) list_medium_line_x2_t2_g4_t

0x262c,	// (0x0003034a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x2_t2_g3_g1

0x2638,	// (0x00030356) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2638,	// (0x00030356) list_medium_line_x2_t2_g3_g2

0x2644,	// (0x00030362) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2644,	// (0x00030362) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003cf56) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003cf56) list_medium_line_x2_t2_g3_g

0x36fc,	// (0x0003141a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x36fc,	// (0x0003141a) list_medium_line_x2_t2_g3_t1

0x2679,	// (0x00030397) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2679,	// (0x00030397) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003cfee) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003cfee) list_medium_line_x2_t2_g3_t

0x3847,	// (0x00031565) main_sp_fs_list_pane_ParamLimits

0x3847,	// (0x00031565) main_sp_fs_list_pane

0xcc8c,	// (0x0003a9aa) sp_fs_scroll_pane_ParamLimits

0xcc8c,	// (0x0003a9aa) sp_fs_scroll_pane

0x3853,	// (0x00031571) list_medium_line_x2_t3_t1

0x3863,	// (0x00031581) list_medium_line_x2_t3_t2

0x3871,	// (0x0003158f) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003d039) list_medium_line_x2_t3_t

0x387f,	// (0x0003159d) list_medium_line_x3_t4_t1

0x388f,	// (0x000315ad) list_medium_line_x3_t4_t2

0x389d,	// (0x000315bb) list_medium_line_x3_t4_t3

0x3871,	// (0x0003158f) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003d040) list_medium_line_x3_t4_t

0x38ab,	// (0x000315c9) list_medium_line_x4_t5_t1

0x38bb,	// (0x000315d9) list_medium_line_x4_t5_t2

0x389d,	// (0x000315bb) list_medium_line_x4_t5_t3

0x38c9,	// (0x000315e7) list_medium_line_x4_t5_t4

0x3871,	// (0x0003158f) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003d049) list_medium_line_x4_t5_t

0x262c,	// (0x0003034a) list_medium_line_t4_g4_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_t4_g4_g1

0x38d7,	// (0x000315f5) list_medium_line_t4_g4_g2_ParamLimits

0x38d7,	// (0x000315f5) list_medium_line_t4_g4_g2

0x38e3,	// (0x00031601) list_medium_line_t4_g4_g3_ParamLimits

0x38e3,	// (0x00031601) list_medium_line_t4_g4_g3

0x2644,	// (0x00030362) list_medium_line_t4_g4_g4_ParamLimits

0x2644,	// (0x00030362) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003d054) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003d054) list_medium_line_t4_g4_g

0x38ef,	// (0x0003160d) list_medium_line_t4_g4_t1_ParamLimits

0x38ef,	// (0x0003160d) list_medium_line_t4_g4_t1

0x3904,	// (0x00031622) list_medium_line_t4_g4_t2_ParamLimits

0x3904,	// (0x00031622) list_medium_line_t4_g4_t2

0x391a,	// (0x00031638) list_medium_line_t4_g4_t3_ParamLimits

0x391a,	// (0x00031638) list_medium_line_t4_g4_t3

0x2679,	// (0x00030397) list_medium_line_t4_g4_t4_ParamLimits

0x2679,	// (0x00030397) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003d05d) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003d05d) list_medium_line_t4_g4_t

0x3a56,	// (0x00031774) chi_dic_find_pane_g1

0x06ab,	// (0x0002e3c9) main_tport_pane

0x6de7,	// (0x00034b05) list_medium_line_plain_t1

0x6e29,	// (0x00034b47) list_medium_line_t2_g2_g1_ParamLimits

0x6e29,	// (0x00034b47) list_medium_line_t2_g2_g1

0x6e35,	// (0x00034b53) list_medium_line_t2_g2_g2_ParamLimits

0x6e35,	// (0x00034b53) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0003d71e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0003d71e) list_medium_line_t2_g2_g

0x6e41,	// (0x00034b5f) list_medium_line_t2_g2_t1_ParamLimits

0x6e41,	// (0x00034b5f) list_medium_line_t2_g2_t1

0x6e58,	// (0x00034b76) list_medium_line_t2_g2_t2_ParamLimits

0x6e58,	// (0x00034b76) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0003d723) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0003d723) list_medium_line_t2_g2_t

0xd879,	// (0x0003b597) aid_sp_fs_list_icon_a_sm

0xd8ca,	// (0x0003b5e8) aid_sp_fs_list_icon_d

0xd8d2,	// (0x0003b5f0) aid_sp_fs_text_primary

0xd8db,	// (0x0003b5f9) aid_sp_fs_text_secondary

0x740b,	// (0x00035129) list_medium_line

0x740b,	// (0x00035129) list_medium_line_g2

0x740b,	// (0x00035129) list_medium_line_g3

0x740b,	// (0x00035129) list_medium_line_plain

0x740b,	// (0x00035129) list_medium_line_plain_t2

0x740b,	// (0x00035129) list_medium_line_plain_t3

0x740b,	// (0x00035129) list_medium_line_right_icon

0x740b,	// (0x00035129) list_medium_line_right_iconx2

0x740b,	// (0x00035129) list_medium_line_t2

0x740b,	// (0x00035129) list_medium_line_t2_g2

0x740b,	// (0x00035129) list_medium_line_t2_g3

0x740b,	// (0x00035129) list_medium_line_t2_right_icon

0x740b,	// (0x00035129) list_medium_line_t2_right_iconx2

0x740b,	// (0x00035129) list_medium_line_t3

0x740b,	// (0x00035129) list_medium_line_t3_g2

0x740b,	// (0x00035129) list_medium_line_t3_g3

0x740b,	// (0x00035129) list_medium_line_t3_right_iconx2

0x7414,	// (0x00035132) list_medium_line_t4_g4

0x741d,	// (0x0003513b) list_medium_line_x2

0x741d,	// (0x0003513b) list_medium_line_x2_t2_g2

0x741d,	// (0x0003513b) list_medium_line_x2_t2_g3

0x741d,	// (0x0003513b) list_medium_line_x2_t2_g4

0x741d,	// (0x0003513b) list_medium_line_x2_t3

0x741d,	// (0x0003513b) list_medium_line_x2_t3_g2

0x741d,	// (0x0003513b) list_medium_line_x2_t3_g3

0x741d,	// (0x0003513b) list_medium_line_x2_t3_g4

0x741d,	// (0x0003513b) list_medium_line_x2_t4_g2

0x741d,	// (0x0003513b) list_medium_line_x2_t4_g4

0x7426,	// (0x00035144) list_medium_line_x3

0x7426,	// (0x00035144) list_medium_line_x3_t4

0x7426,	// (0x00035144) list_medium_line_x3_t4_g4

0x7414,	// (0x00035132) list_medium_line_x4_t4

0x7414,	// (0x00035132) list_medium_line_x4_t4_g7

0x7414,	// (0x00035132) list_medium_line_x4_t5

0x742f,	// (0x0003514d) list_single_fs_dyc_pane_ParamLimits

0x742f,	// (0x0003514d) list_single_fs_dyc_pane

0x262c,	// (0x0003034a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x4_t4_g7_g1

0x7b57,	// (0x00035875) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7b57,	// (0x00035875) list_medium_line_x4_t4_g7_g2

0x7b63,	// (0x00035881) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b63,	// (0x00035881) list_medium_line_x4_t4_g7_g3

0x7b72,	// (0x00035890) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b72,	// (0x00035890) list_medium_line_x4_t4_g7_g4

0x7b7e,	// (0x0003589c) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7b7e,	// (0x0003589c) list_medium_line_x4_t4_g7_g5

0x7b8d,	// (0x000358ab) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7b8d,	// (0x000358ab) list_medium_line_x4_t4_g7_g6

0x7b9c,	// (0x000358ba) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7b9c,	// (0x000358ba) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0003d8ee) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0003d8ee) list_medium_line_x4_t4_g7_g

0x7ba8,	// (0x000358c6) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7ba8,	// (0x000358c6) list_medium_line_x4_t4_g7_t1

0x7bbd,	// (0x000358db) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7bbd,	// (0x000358db) list_medium_line_x4_t4_g7_t2

0x7bd2,	// (0x000358f0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7bd2,	// (0x000358f0) list_medium_line_x4_t4_g7_t3

0x7be7,	// (0x00035905) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7be7,	// (0x00035905) list_medium_line_x4_t4_g7_t4

0x7bf9,	// (0x00035917) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7bf9,	// (0x00035917) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0003d8fd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0003d8fd) list_medium_line_x4_t4_g7_t

0x7c0b,	// (0x00035929) list_single_dyc_row_pane_ParamLimits

0x7c0b,	// (0x00035929) list_single_dyc_row_pane

0x82e2,	// (0x00036000) call5_gesture_pane_ParamLimits

0x82e2,	// (0x00036000) call5_gesture_pane

0x8338,	// (0x00036056) call5_windows_pane_ParamLimits

0x8338,	// (0x00036056) call5_windows_pane

0x83de,	// (0x000360fc) call5_swipe_1_pane_cp_ParamLimits

0x83de,	// (0x000360fc) call5_swipe_1_pane_cp

0x83ea,	// (0x00036108) call5_swipe_2_pane_cp_ParamLimits

0x83ea,	// (0x00036108) call5_swipe_2_pane_cp

0xafb7,	// (0x00038cd5) call5_image_pane_cp

0x83f6,	// (0x00036114) popup_call5_audio_first_window_cp_ParamLimits

0x83f6,	// (0x00036114) popup_call5_audio_first_window_cp

0xe39e,	// (0x0003c0bc) call5_swipe_1_pane_g1_cp_ParamLimits

0xe39e,	// (0x0003c0bc) call5_swipe_1_pane_g1_cp

0xe3de,	// (0x0003c0fc) call5_swipe_1_pane_g2_cp

0xe3b7,	// (0x0003c0d5) call5_swipe_1_pane_t1_cp_ParamLimits

0xe3b7,	// (0x0003c0d5) call5_swipe_1_pane_t1_cp

0xe39e,	// (0x0003c0bc) call5_swipe_2_pane_g1_cp_ParamLimits

0xe39e,	// (0x0003c0bc) call5_swipe_2_pane_g1_cp

0xe3e6,	// (0x0003c104) call5_swipe_2_pane_g2_cp

0xe3ee,	// (0x0003c10c) call5_swipe_2_pane_t1_cp_ParamLimits

0xe3ee,	// (0x0003c10c) call5_swipe_2_pane_t1_cp

0xa724,	// (0x00038442) main_sp_fs_email_pane

0xe403,	// (0x0003c121) main_sp_fs_listscroll_pane_te

0x8404,	// (0x00036122) popup_sp_fs_action_menu_pane_ParamLimits

0x8404,	// (0x00036122) popup_sp_fs_action_menu_pane

0xc846,	// (0x0003a564) bg_sp_fs_ctrlbar_pane_g1

0xce5d,	// (0x0003ab7b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xce6f,	// (0x0003ab8d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xce66,	// (0x0003ab84) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc846,	// (0x0003a564) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0003d9eb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc62b,	// (0x0003a349) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc62b,	// (0x0003a349) bg_sp_fs_ctrlbar_ddmenu_pane

0xe40c,	// (0x0003c12a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe40c,	// (0x0003c12a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe418,	// (0x0003c136) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe418,	// (0x0003c136) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0003d9f4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0003d9f4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe424,	// (0x0003c142) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe424,	// (0x0003c142) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8448,	// (0x00036166) list_medium_line_t2_right_icon_g1

0x8450,	// (0x0003616e) list_medium_line_t2_right_icon_t1

0x8460,	// (0x0003617e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0003d9f9) list_medium_line_t2_right_icon_t

0xc43e,	// (0x0003a15c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc43e,	// (0x0003a15c) bg_sp_fs_ctrlbar_pane

0x84ba,	// (0x000361d8) main_sp_fs_ctrlbar_button_pane_cp01

0x84c4,	// (0x000361e2) main_sp_fs_ctrlbar_ddmenu_pane

0xe476,	// (0x0003c194) main_sp_fs_ctrlbar_pane_g1

0xe482,	// (0x0003c1a0) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0003d9fe) main_sp_fs_ctrlbar_pane_g

0xe48e,	// (0x0003c1ac) main_sp_fs_ctrlbar_pane_t1

0x84ce,	// (0x000361ec) main_sp_fs_ctrlbar_pane

0x84f2,	// (0x00036210) main_sp_fs_listscroll_pane_te_cp01

0x8512,	// (0x00036230) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8512,	// (0x00036230) popup_sp_fs_action_menu_pane_cp01

0xa724,	// (0x00038442) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa724,	// (0x00038442) bg_sp_fs_highlight_list_pane_cp01

0xe4be,	// (0x0003c1dc) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe4be,	// (0x0003c1dc) sp_fs_action_menu_list_gene_pane_g1

0xe4cd,	// (0x0003c1eb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe4cd,	// (0x0003c1eb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0003da08) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0003da08) sp_fs_action_menu_list_gene_pane_g

0xe4da,	// (0x0003c1f8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe4da,	// (0x0003c1f8) sp_fs_action_menu_list_gene_pane_t1

0xe504,	// (0x0003c222) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe504,	// (0x0003c222) sp_fs_action_menu_list_gene_pane

0xe523,	// (0x0003c241) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe523,	// (0x0003c241) popup_sp_fs_action_menu_bg_pane

0xe531,	// (0x0003c24f) sp_fs_action_menu_list_pane_ParamLimits

0xe531,	// (0x0003c24f) sp_fs_action_menu_list_pane

0x8542,	// (0x00036260) sp_fs_scroll_pane_cp01_ParamLimits

0x8542,	// (0x00036260) sp_fs_scroll_pane_cp01

0x8568,	// (0x00036286) list_medium_line_plain_t2_t1

0x8578,	// (0x00036296) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0003da0d) list_medium_line_plain_t2_t

0x8588,	// (0x000362a6) list_medium_line_plain_t3_t1

0x8598,	// (0x000362b6) list_medium_line_plain_t3_t2

0x85a6,	// (0x000362c4) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0003da12) list_medium_line_plain_t3_t

0x262c,	// (0x0003034a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x2_t2_g2_g1

0x2644,	// (0x00030362) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2644,	// (0x00030362) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003cf64) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003cf64) list_medium_line_x2_t2_g2_g

0x38ef,	// (0x0003160d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x38ef,	// (0x0003160d) list_medium_line_x2_t2_g2_t1

0x2679,	// (0x00030397) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2679,	// (0x00030397) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0003da19) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0003da19) list_medium_line_x2_t2_g2_t

0x262c,	// (0x0003034a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x2_t4_g2_g1

0x2644,	// (0x00030362) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2644,	// (0x00030362) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003cf64) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003cf64) list_medium_line_x2_t4_g2_g

0x85b4,	// (0x000362d2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85b4,	// (0x000362d2) list_medium_line_x2_t4_g2_t1

0x85cb,	// (0x000362e9) list_medium_line_x2_t4_g2_t2_ParamLimits

0x85cb,	// (0x000362e9) list_medium_line_x2_t4_g2_t2

0x85e0,	// (0x000362fe) list_medium_line_x2_t4_g2_t3_ParamLimits

0x85e0,	// (0x000362fe) list_medium_line_x2_t4_g2_t3

0x2679,	// (0x00030397) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2679,	// (0x00030397) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0003da1e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0003da1e) list_medium_line_x2_t4_g2_t

0x85f2,	// (0x00036310) list_medium_line_t3_right_iconx2_g1

0x8448,	// (0x00036166) list_medium_line_t3_right_iconx2_g2

0x85fa,	// (0x00036318) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0003da27) list_medium_line_t3_right_iconx2_g

0x8604,	// (0x00036322) list_medium_line_t3_right_iconx2_t1

0x8614,	// (0x00036332) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0003da2e) list_medium_line_t3_right_iconx2_t

0x262c,	// (0x0003034a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x3_t4_g4_g1

0x2638,	// (0x00030356) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2638,	// (0x00030356) list_medium_line_x3_t4_g4_g2

0x38d7,	// (0x000315f5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x38d7,	// (0x000315f5) list_medium_line_x3_t4_g4_g3

0x8622,	// (0x00036340) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8622,	// (0x00036340) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0003da33) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0003da33) list_medium_line_x3_t4_g4_g

0x862e,	// (0x0003634c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x862e,	// (0x0003634c) list_medium_line_x3_t4_g4_t1

0x8645,	// (0x00036363) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8645,	// (0x00036363) list_medium_line_x3_t4_g4_t2

0x8660,	// (0x0003637e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8660,	// (0x0003637e) list_medium_line_x3_t4_g4_t3

0x8675,	// (0x00036393) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8675,	// (0x00036393) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0003da3c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0003da3c) list_medium_line_x3_t4_g4_t

0x8692,	// (0x000363b0) list_single_dyc_row_text_pane_t1_ParamLimits

0x8692,	// (0x000363b0) list_single_dyc_row_text_pane_t1

0x86db,	// (0x000363f9) list_single_dyc_row_text_pane_t2_ParamLimits

0x86db,	// (0x000363f9) list_single_dyc_row_text_pane_t2

0xe551,	// (0x0003c26f) list_single_dyc_row_text_pane_t3_ParamLimits

0xe551,	// (0x0003c26f) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0003da45) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0003da45) list_single_dyc_row_text_pane_t

0xe575,	// (0x0003c293) list_single_dyc_row_pane_g1_ParamLimits

0xe575,	// (0x0003c293) list_single_dyc_row_pane_g1

0xe581,	// (0x0003c29f) list_single_dyc_row_pane_g2_ParamLimits

0xe581,	// (0x0003c29f) list_single_dyc_row_pane_g2

0xe58d,	// (0x0003c2ab) list_single_dyc_row_pane_g3_ParamLimits

0xe58d,	// (0x0003c2ab) list_single_dyc_row_pane_g3

0xe599,	// (0x0003c2b7) list_single_dyc_row_pane_g4_ParamLimits

0xe599,	// (0x0003c2b7) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0003da52) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0003da52) list_single_dyc_row_pane_g

0xe5a5,	// (0x0003c2c3) list_single_dyc_row_text_pane_ParamLimits

0xe5a5,	// (0x0003c2c3) list_single_dyc_row_text_pane

0x9ba8,	// (0x000378c6) bg_sp_fs_scroll_pane

0xe5c4,	// (0x0003c2e2) thumb_sp_fs_scroll_pane

0x6e29,	// (0x00034b47) list_medium_line_g1_ParamLimits

0x6e29,	// (0x00034b47) list_medium_line_g1

0x8810,	// (0x0003652e) list_medium_line_t1_ParamLimits

0x8810,	// (0x0003652e) list_medium_line_t1

0x262c,	// (0x0003034a) list_medium_line_x2_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x2_g1

0x2638,	// (0x00030356) list_medium_line_x2_g2_ParamLimits

0x2638,	// (0x00030356) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0003da5b) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0003da5b) list_medium_line_x2_g

0xe5cd,	// (0x0003c2eb) list_medium_line_x2_t1_ParamLimits

0xe5cd,	// (0x0003c2eb) list_medium_line_x2_t1

0x262c,	// (0x0003034a) list_medium_line_x3_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x3_g1

0x2638,	// (0x00030356) list_medium_line_x3_g2_ParamLimits

0x2638,	// (0x00030356) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0003da5b) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0003da5b) list_medium_line_x3_g

0xe5cd,	// (0x0003c2eb) list_medium_line_x3_t1_ParamLimits

0xe5cd,	// (0x0003c2eb) list_medium_line_x3_t1

0xe5e3,	// (0x0003c301) thumb_sp_fs_scroll_pane_g1

0xe5ec,	// (0x0003c30a) thumb_sp_fs_scroll_pane_g2

0xe5f5,	// (0x0003c313) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003da60) thumb_sp_fs_scroll_pane_g

0xe5e3,	// (0x0003c301) bg_sp_fs_scroll_pane_g1

0xe5ec,	// (0x0003c30a) bg_sp_fs_scroll_pane_g2

0xe5f5,	// (0x0003c313) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0003da60) bg_sp_fs_scroll_pane_g

0x262c,	// (0x0003034a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x262c,	// (0x0003034a) list_medium_line_x2_t3_g4_g1

0x26d4,	// (0x000303f2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x26d4,	// (0x000303f2) list_medium_line_x2_t3_g4_g2

0x2638,	// (0x00030356) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2638,	// (0x00030356) list_medium_line_x2_t3_g4_g3

0x2644,	// (0x00030362) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2644,	// (0x00030362) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003cfe0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003cfe0) list_medium_line_x2_t3_g4_g

0x8825,	// (0x00036543) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8825,	// (0x00036543) list_medium_line_x2_t3_g4_t1

0x883f,	// (0x0003655d) list_medium_line_x2_t3_g4_t2_ParamLimits

0x883f,	// (0x0003655d) list_medium_line_x2_t3_g4_t2

0x2679,	// (0x00030397) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2679,	// (0x00030397) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0003da67) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0003da67) list_medium_line_x2_t3_g4_t

0x6e29,	// (0x00034b47) list_medium_line_g2_g1_ParamLimits

0x6e29,	// (0x00034b47) list_medium_line_g2_g1

0x6e35,	// (0x00034b53) list_medium_line_g2_g2_ParamLimits

0x6e35,	// (0x00034b53) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0003d71e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0003d71e) list_medium_line_g2_g

0x8859,	// (0x00036577) list_medium_line_g2_t1_ParamLimits

0x8859,	// (0x00036577) list_medium_line_g2_t1

0x6e29,	// (0x00034b47) list_medium_line_t3_g2_g1_ParamLimits

0x6e29,	// (0x00034b47) list_medium_line_t3_g2_g1

0x6e35,	// (0x00034b53) list_medium_line_t3_g2_g2_ParamLimits

0x6e35,	// (0x00034b53) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0003d71e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0003d71e) list_medium_line_t3_g2_g

0x886e,	// (0x0003658c) list_medium_line_t3_g2_t1_ParamLimits

0x886e,	// (0x0003658c) list_medium_line_t3_g2_t1

0x8888,	// (0x000365a6) list_medium_line_t3_g2_t2_ParamLimits

0x8888,	// (0x000365a6) list_medium_line_t3_g2_t2

0x889d,	// (0x000365bb) list_medium_line_t3_g2_t3_ParamLimits

0x889d,	// (0x000365bb) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0003da6e) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0003da6e) list_medium_line_t3_g2_t

0x8448,	// (0x00036166) list_medium_line_right_icon_g1

0x88b7,	// (0x000365d5) list_medium_line_right_icon_t1

0x6e29,	// (0x00034b47) list_medium_line_t2_g1_ParamLimits

0x6e29,	// (0x00034b47) list_medium_line_t2_g1

0x88c5,	// (0x000365e3) list_medium_line_t2_t1_ParamLimits

0x88c5,	// (0x000365e3) list_medium_line_t2_t1

0x88df,	// (0x000365fd) list_medium_line_t2_t2_ParamLimits

0x88df,	// (0x000365fd) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0003da75) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0003da75) list_medium_line_t2_t

0x6e29,	// (0x00034b47) list_medium_line_t3_g1_ParamLimits

0x6e29,	// (0x00034b47) list_medium_line_t3_g1

0x88f8,	// (0x00036616) list_medium_line_t3_t1_ParamLimits

0x88f8,	// (0x00036616) list_medium_line_t3_t1

0x890f,	// (0x0003662d) list_medium_line_t3_t2_ParamLimits

0x890f,	// (0x0003662d) list_medium_line_t3_t2

0x8924,	// (0x00036642) list_medium_line_t3_t3_ParamLimits

0x8924,	// (0x00036642) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0003da7a) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0003da7a) list_medium_line_t3_t

0x6e29,	// (0x00034b47) list_medium_line_g3_g1_ParamLimits

0x6e29,	// (0x00034b47) list_medium_line_g3_g1

0x8936,	// (0x00036654) list_medium_line_g3_g2_ParamLimits

0x8936,	// (0x00036654) list_medium_line_g3_g2

0x6e35,	// (0x00034b53) list_medium_line_g3_g3_ParamLimits

0x6e35,	// (0x00034b53) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0003da81) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0003da81) list_medium_line_g3_g

0x8942,	// (0x00036660) list_medium_line_g3_t1_ParamLimits

0x8942,	// (0x00036660) list_medium_line_g3_t1

0x6e29,	// (0x00034b47) list_medium_line_t2_g3_g1_ParamLimits

0x6e29,	// (0x00034b47) list_medium_line_t2_g3_g1

0x8936,	// (0x00036654) list_medium_line_t2_g3_g2_ParamLimits

0x8936,	// (0x00036654) list_medium_line_t2_g3_g2

0x6e35,	// (0x00034b53) list_medium_line_t2_g3_g3_ParamLimits

0x6e35,	// (0x00034b53) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0003da81) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0003da81) list_medium_line_t2_g3_g

0x8957,	// (0x00036675) list_medium_line_t2_g3_t1_ParamLimits

0x8957,	// (0x00036675) list_medium_line_t2_g3_t1

0x896e,	// (0x0003668c) list_medium_line_t2_g3_t2_ParamLimits

0x896e,	// (0x0003668c) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0003da88) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0003da88) list_medium_line_t2_g3_t

0x6e29,	// (0x00034b47) list_medium_line_t3_g3_g1_ParamLimits

0x6e29,	// (0x00034b47) list_medium_line_t3_g3_g1

0x8936,	// (0x00036654) list_medium_line_t3_g3_g2_ParamLimits

0x8936,	// (0x00036654) list_medium_line_t3_g3_g2

0x6e35,	// (0x00034b53) list_medium_line_t3_g3_g3_ParamLimits

0x6e35,	// (0x00034b53) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0003da81) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0003da81) list_medium_line_t3_g3_g

0x8989,	// (0x000366a7) list_medium_line_t3_g3_t1_ParamLimits

0x8989,	// (0x000366a7) list_medium_line_t3_g3_t1

0x899d,	// (0x000366bb) list_medium_line_t3_g3_t2_ParamLimits

0x899d,	// (0x000366bb) list_medium_line_t3_g3_t2

0x89af,	// (0x000366cd) list_medium_line_t3_g3_t3_ParamLimits

0x89af,	// (0x000366cd) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0003da8d) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0003da8d) list_medium_line_t3_g3_t

0x85f2,	// (0x00036310) list_medium_line_right_iconx2_g1

0x8448,	// (0x00036166) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003da94) list_medium_line_right_iconx2_g

0x89c3,	// (0x000366e1) list_medium_line_right_iconx2_t1

0x85f2,	// (0x00036310) list_medium_line_t2_right_iconx2_g1

0x8448,	// (0x00036166) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0003da94) list_medium_line_t2_right_iconx2_g

0x89d1,	// (0x000366ef) list_medium_line_t2_right_iconx2_t1

0x89e1,	// (0x000366ff) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0003da99) list_medium_line_t2_right_iconx2_t

0x89f3,	// (0x00036711) list_medium_line_x4_t4_t1

0x8a01,	// (0x0003671f) list_medium_line_x4_t4_t2

0x8a11,	// (0x0003672f) list_medium_line_x4_t4_t3

0x8a21,	// (0x0003673f) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0003da9e) list_medium_line_x4_t4_t

0x8a74,	// (0x00036792) tport_appsw_pane_ParamLimits

0x8a74,	// (0x00036792) tport_appsw_pane

0x8a8c,	// (0x000367aa) tport_contact_pane_ParamLimits

0x8a8c,	// (0x000367aa) tport_contact_pane

0x8aa4,	// (0x000367c2) tport_listscroll_pane_ParamLimits

0x8aa4,	// (0x000367c2) tport_listscroll_pane

0x8abe,	// (0x000367dc) cell_tport_appsw_pane_ParamLimits

0x8abe,	// (0x000367dc) cell_tport_appsw_pane

0xd2c8,	// (0x0003afe6) tport_appsw_pane_g1_ParamLimits

0xd2c8,	// (0x0003afe6) tport_appsw_pane_g1

0xe5fe,	// (0x0003c31c) tport_contact_pane_g1

0xdea4,	// (0x0003bbc2) tport_contact_pane_t1

0xe607,	// (0x0003c325) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0003daa7) tport_contact_pane_t

0xe615,	// (0x0003c333) list_tport_pane

0xe61e,	// (0x0003c33c) scroll_pane_cp_030

0x8b06,	// (0x00036824) cell_tport_appsw_pane_g1

0x8b16,	// (0x00036834) cell_tport_appsw_pane_t1

0x8b24,	// (0x00036842) grid_highlight_pane_cp019

0x8b2c,	// (0x0003684a) list_tport_double_graphic_pane_ParamLimits

0x8b2c,	// (0x0003684a) list_tport_double_graphic_pane

0xa724,	// (0x00038442) list_highlight_pane_cp023_ParamLimits

0xa724,	// (0x00038442) list_highlight_pane_cp023

0x8b39,	// (0x00036857) list_tport_double_graphic_pane_g1_ParamLimits

0x8b39,	// (0x00036857) list_tport_double_graphic_pane_g1

0x8b46,	// (0x00036864) list_tport_double_graphic_pane_t1_ParamLimits

0x8b46,	// (0x00036864) list_tport_double_graphic_pane_t1

0x8b5b,	// (0x00036879) list_tport_double_graphic_pane_t2_ParamLimits

0x8b5b,	// (0x00036879) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0003dab3) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0003dab3) list_tport_double_graphic_pane_t

0x9ba8,	// (0x000378c6) main_cale_note_pane

0x15a6,	// (0x0002f2c4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x15a6,	// (0x0002f2c4) cell_vitu2_function_top_wide_pane_cp01

0x7f6e,	// (0x00035c8c) wait_bar_pane_cp05_ParamLimits

0xa724,	// (0x00038442) listscroll_cmail_pane

0xe627,	// (0x0003c345) list_cmail_pane

0xd33d,	// (0x0003b05b) list_cmail_body_pane

0x8b6d,	// (0x0003688b) list_single_cmail_header_caption_pane

0x8b84,	// (0x000368a2) list_single_cmail_header_detail_pane_ParamLimits

0x8b84,	// (0x000368a2) list_single_cmail_header_detail_pane

0xe637,	// (0x0003c355) list_single_cmail_header_caption_pane_t1

0x8bae,	// (0x000368cc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bae,	// (0x000368cc) list_single_cmail_header_detail_pane_g1

0xe64e,	// (0x0003c36c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe64e,	// (0x0003c36c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0003dab8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0003dab8) list_single_cmail_header_detail_pane_g

0x8bc6,	// (0x000368e4) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8bc6,	// (0x000368e4) list_single_cmail_header_detail_pane_t1

0x8c04,	// (0x00036922) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8c04,	// (0x00036922) list_single_cmail_header_editor_pane_bg

0xe045,	// (0x0003bd63) list_cmail_body_pane_g1

0xe68b,	// (0x0003c3a9) list_cmail_body_pane_t1

0xd305,	// (0x0003b023) list_single_cmail_header_editor_pane_bg_g1

0xa6fc,	// (0x0003841a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd315,	// (0x0003b033) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd30d,	// (0x0003b02b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd559,	// (0x0003b277) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd335,	// (0x0003b053) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd325,	// (0x0003b043) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd32d,	// (0x0003b04b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa6dc,	// (0x000383fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c1d,	// (0x0003693b) calenote_gesture_pane_ParamLimits

0x8c1d,	// (0x0003693b) calenote_gesture_pane

0x8c3d,	// (0x0003695b) calenote_window_pane_ParamLimits

0x8c3d,	// (0x0003695b) calenote_window_pane

0xe699,	// (0x0003c3b7) popup_note_window_cp01

0x8c59,	// (0x00036977) calenote_swipe_1_pane_ParamLimits

0x8c59,	// (0x00036977) calenote_swipe_1_pane

0x83ea,	// (0x00036108) calenote_swipe_2_pane_ParamLimits

0x83ea,	// (0x00036108) calenote_swipe_2_pane

0xe39e,	// (0x0003c0bc) calenote_swipe_1_pane_g1_ParamLimits

0xe39e,	// (0x0003c0bc) calenote_swipe_1_pane_g1

0xe3ab,	// (0x0003c0c9) calenote_swipe_1_pane_g2_ParamLimits

0xe3ab,	// (0x0003c0c9) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0003d9e1) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0003d9e1) calenote_swipe_1_pane_g

0xe6ab,	// (0x0003c3c9) calenote_swipe_1_pane_t1_ParamLimits

0xe6ab,	// (0x0003c3c9) calenote_swipe_1_pane_t1

0xe39e,	// (0x0003c0bc) calenote_swipe_2_pane_g1_ParamLimits

0xe39e,	// (0x0003c0bc) calenote_swipe_2_pane_g1

0xe6ca,	// (0x0003c3e8) calenote_swipe_2_pane_g2_ParamLimits

0xe6ca,	// (0x0003c3e8) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0003dac4) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0003dac4) calenote_swipe_2_pane_g

0xe6d6,	// (0x0003c3f4) calenote_swipe_2_pane_t1_ParamLimits

0xe6d6,	// (0x0003c3f4) calenote_swipe_2_pane_t1

0x9ba8,	// (0x000378c6) main_mup_navstr_pane

0x57dd,	// (0x000334fb) main_mup3_pane_t7_ParamLimits

0x57dd,	// (0x000334fb) main_mup3_pane_t7

0x6200,	// (0x00033f1e) main_mp4_pane_g6_ParamLimits

0x6200,	// (0x00033f1e) main_mp4_pane_g6

0x6447,	// (0x00034165) main_image3_pane_t4_ParamLimits

0x6447,	// (0x00034165) main_image3_pane_t4

0x8c6e,	// (0x0003698c) popup_navstr_preview_pane_ParamLimits

0x8c6e,	// (0x0003698c) popup_navstr_preview_pane

0x8c82,	// (0x000369a0) scroll_navstr_pane_ParamLimits

0x8c82,	// (0x000369a0) scroll_navstr_pane

0x9ba8,	// (0x000378c6) bg_popup_preview_window_pane_cp04

0xe6fd,	// (0x0003c41b) popup_navstr_preview_pane_t1

0x8c96,	// (0x000369b4) scroll_navstr_pane_g1_ParamLimits

0x8c96,	// (0x000369b4) scroll_navstr_pane_g1

0x8caa,	// (0x000369c8) scroll_navstr_pane_t1_ParamLimits

0x8caa,	// (0x000369c8) scroll_navstr_pane_t1

0xe6a2,	// (0x0003c3c0) bg_button_pane_cp014

0xe6a2,	// (0x0003c3c0) bg_button_pane_cp030

0x8288,	// (0x00035fa6) list_double_fisheye_pane_g4_ParamLimits

0x8288,	// (0x00035fa6) list_double_fisheye_pane_g4

0x8294,	// (0x00035fb2) list_double_fisheye_pane_g5_ParamLimits

0x8294,	// (0x00035fb2) list_double_fisheye_pane_g5

0xcc8c,	// (0x0003a9aa) sp_fs_scroll_pane_cp03

0xe476,	// (0x0003c194) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe482,	// (0x0003c1a0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0003d9fe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe48e,	// (0x0003c1ac) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe62f,	// (0x0003c34d) sp_fs_scroll_pane_cp02

0xa3e9,	// (0x00038107) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3e9,	// (0x00038107) popup_sp_fs_calendar_preview_list_single_pane

0x9ba8,	// (0x000378c6) main_cam6_pano_pane

0x1995,	// (0x0002f6b3) main_mup3_pane_ParamLimits

0x9ba8,	// (0x000378c6) main_phacti_pane

0x7e41,	// (0x00035b5f) bg_button_pane_cp11

0x7e5b,	// (0x00035b79) main_mobtv_info_pane_g2_ParamLimits

0x7e5b,	// (0x00035b79) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0003d95e) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0003d95e) main_mobtv_info_pane_g

0x8038,	// (0x00035d56) sc_clock_pane_t5_ParamLimits

0x8038,	// (0x00035d56) sc_clock_pane_t5

0x80f3,	// (0x00035e11) main_radioblah_pane_g1_ParamLimits

0xe2e1,	// (0x0003bfff) main_radioblah_pane_t3_ParamLimits

0xe2e1,	// (0x0003bfff) main_radioblah_pane_t3

0xe2f9,	// (0x0003c017) main_radioblah_pane_t4_ParamLimits

0xe2f9,	// (0x0003c017) main_radioblah_pane_t4

0x811b,	// (0x00035e39) main_radioblah_text_pane_ParamLimits

0x811b,	// (0x00035e39) main_radioblah_text_pane

0x812d,	// (0x00035e4b) main_radioblah_info_pane_g1_ParamLimits

0x81c6,	// (0x00035ee4) main_radioblah_info_pane_t4_ParamLimits

0x81c6,	// (0x00035ee4) main_radioblah_info_pane_t4

0xa724,	// (0x00038442) main_sp_fs_calendar_pane

0x8cc1,	// (0x000369df) main_phacti_pane_g1

0x8cc9,	// (0x000369e7) phacti_note_pane_ParamLimits

0x8cc9,	// (0x000369e7) phacti_note_pane

0xe714,	// (0x0003c432) phacti_term_pane_ParamLimits

0xe714,	// (0x0003c432) phacti_term_pane

0xe729,	// (0x0003c447) phacti_note_pane_t1_ParamLimits

0xe729,	// (0x0003c447) phacti_note_pane_t1

0xe740,	// (0x0003c45e) phacti_term_pane_g1

0xe748,	// (0x0003c466) phacti_term_pane_t1_ParamLimits

0xe748,	// (0x0003c466) phacti_term_pane_t1

0xe772,	// (0x0003c490) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa4fd,	// (0x0003821b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0003dace) popup_sp_fs_calendar_preview_list_single_pane_g

0xe77a,	// (0x0003c498) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe77a,	// (0x0003c498) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe78f,	// (0x0003c4ad) aid_popup_sp_fs_bg_corner_pane

0xc846,	// (0x0003a564) popup_sp_fs_calendar_preview_bg_pane_g1

0x9ba8,	// (0x000378c6) popup_sp_fs_calendar_preview_bg_pane

0xe797,	// (0x0003c4b5) popup_sp_fs_calendar_preview_list_pane

0xc43e,	// (0x0003a15c) bg_main_sp_fs_cale_pane_ParamLimits

0xc43e,	// (0x0003a15c) bg_main_sp_fs_cale_pane

0xe79f,	// (0x0003c4bd) listscroll_cale_mrui_pane_ParamLimits

0xe79f,	// (0x0003c4bd) listscroll_cale_mrui_pane

0xe7b4,	// (0x0003c4d2) listscroll_sp_fs_schedule_track_pane

0xe7bd,	// (0x0003c4db) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7bd,	// (0x0003c4db) main_sp_fs_ctrlbar_pane_cp01

0xe7d0,	// (0x0003c4ee) main_sp_fs_ribbon_pane

0xe7d8,	// (0x0003c4f6) popup_sp_fs_cale_preview_window

0x8d3e,	// (0x00036a5c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d3e,	// (0x00036a5c) list_single_sp_fs_schedule_track_pane

0xa724,	// (0x00038442) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa724,	// (0x00038442) bg_sp_fs_highlight_list_pane_cp03

0x8d52,	// (0x00036a70) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d52,	// (0x00036a70) list_single_sp_fs_schedule_track_pane_g1

0x8d5e,	// (0x00036a7c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d5e,	// (0x00036a7c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0003dad3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0003dad3) list_single_sp_fs_schedule_track_pane_g

0x8d6a,	// (0x00036a88) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d6a,	// (0x00036a88) list_single_sp_fs_schedule_track_pane_t1

0x8d84,	// (0x00036aa2) sp_fs_schedule_track_pane_ParamLimits

0x8d84,	// (0x00036aa2) sp_fs_schedule_track_pane

0xe7ea,	// (0x0003c508) sp_fs_schedule_track_pane_g1

0xe7f2,	// (0x0003c510) sp_fs_schedule_track_pane_g2

0xe7fa,	// (0x0003c518) sp_fs_schedule_track_pane_g3

0xe802,	// (0x0003c520) sp_fs_schedule_track_pane_g4

0xe80a,	// (0x0003c528) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0003dad8) sp_fs_schedule_track_pane_g

0xd305,	// (0x0003b023) bg_sp_fs_schedule_viewer_highlight_g1

0xa6fc,	// (0x0003841a) bg_sp_fs_schedule_viewer_highlight_g2

0xd30d,	// (0x0003b02b) bg_sp_fs_schedule_viewer_highlight_g3

0xd315,	// (0x0003b033) bg_sp_fs_schedule_viewer_highlight_g4

0xd559,	// (0x0003b277) bg_sp_fs_schedule_viewer_highlight_g5

0xd325,	// (0x0003b043) bg_sp_fs_schedule_viewer_highlight_g6

0xd32d,	// (0x0003b04b) bg_sp_fs_schedule_viewer_highlight_g7

0xd335,	// (0x0003b053) bg_sp_fs_schedule_viewer_highlight_g8

0xa6dc,	// (0x000383fa) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0003dae3) bg_sp_fs_schedule_viewer_highlight_g

0x9ba8,	// (0x000378c6) bg_main_sp_fs_ribbon_pane

0x8d95,	// (0x00036ab3) main_sp_fs_ribbon_pane_g1

0xe812,	// (0x0003c530) main_sp_fs_ribbon_pane_t1

0x8d9e,	// (0x00036abc) main_sp_fs_ribbon_pane_t2

0xe821,	// (0x0003c53f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0003daf6) main_sp_fs_ribbon_pane_t

0xe830,	// (0x0003c54e) main_sp_fs_ribbon_scheduler_pane

0xe838,	// (0x0003c556) bg_main_sp_fs_ribbon_pane_g1

0xe841,	// (0x0003c55f) bg_main_sp_fs_ribbon_pane_g2

0xe84a,	// (0x0003c568) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0003dafd) bg_main_sp_fs_ribbon_pane_g

0xe852,	// (0x0003c570) main_sp_fs_ribbon_scheduler_pane_g1

0xe85b,	// (0x0003c579) main_sp_fs_ribbon_scheduler_pane_g2

0xe864,	// (0x0003c582) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0003db04) main_sp_fs_ribbon_scheduler_pane_g

0xe86d,	// (0x0003c58b) list_cale_mrui_pane

0x8dad,	// (0x00036acb) sp_fs_scroll_pane_cp07_ParamLimits

0x8dad,	// (0x00036acb) sp_fs_scroll_pane_cp07

0x8dc9,	// (0x00036ae7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dc9,	// (0x00036ae7) bg_sp_fs_schedule_viewer_highlight

0xe87a,	// (0x0003c598) list_single_sp_fs_schedule_track_pane_cp01

0xe882,	// (0x0003c5a0) list_sp_fs_schedule_track_pane

0xe88a,	// (0x0003c5a8) sp_fs_scroll_pane_cp06_ParamLimits

0xe88a,	// (0x0003c5a8) sp_fs_scroll_pane_cp06

0xc846,	// (0x0003a564) bgmain_sp_fs_calendar_pane_g1

0x8dd9,	// (0x00036af7) list_single_cale_mrui_pane_ParamLimits

0x8dd9,	// (0x00036af7) list_single_cale_mrui_pane

0xe89c,	// (0x0003c5ba) list_single_cale_mrui_row_pane_ParamLimits

0xe89c,	// (0x0003c5ba) list_single_cale_mrui_row_pane

0xe8a9,	// (0x0003c5c7) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8a9,	// (0x0003c5c7) list_single_cale_mrui_row_pane_g1

0xe8ee,	// (0x0003c60c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8ee,	// (0x0003c60c) list_single_cale_mrui_row_pane_t1

0x8dfa,	// (0x00036b18) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8dfa,	// (0x00036b18) list_single_cale_mrui_row_pane_t2

0xe900,	// (0x0003c61e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe900,	// (0x0003c61e) list_single_cale_mrui_row_pane_t3

0xe92f,	// (0x0003c64d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe92f,	// (0x0003c64d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0003db12) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0003db12) list_single_cale_mrui_row_pane_t

0x8e62,	// (0x00036b80) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e62,	// (0x00036b80) list_single_cmail_header_editor_pane_bg_cp01

0x8e88,	// (0x00036ba6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e88,	// (0x00036ba6) list_single_cmail_header_editor_pane_bg_cp02

0x8ea8,	// (0x00036bc6) main_radioblah_text_pane_t1_ParamLimits

0x8ea8,	// (0x00036bc6) main_radioblah_text_pane_t1

0xe95e,	// (0x0003c67c) cam6_indi_pane_cp01

0xe966,	// (0x0003c684) cam6_mode_pane_cp01

0xe96e,	// (0x0003c68c) cam6_pano_pane

0xe977,	// (0x0003c695) cam6_zoom_pane_cp01

0xe97f,	// (0x0003c69d) cam6_pano_image_pane

0xe98a,	// (0x0003c6a8) cam6_pano_pane_g1

0xe045,	// (0x0003bd63) cam6_pano_pane_g2

0xe993,	// (0x0003c6b1) cam6_pano_pane_g3

0xe99c,	// (0x0003c6ba) cam6_pano_pane_g4

0xce4a,	// (0x0003ab68) cam6_pano_pane_g5

0xe9a5,	// (0x0003c6c3) cam6_pano_pane_g6

0xe9af,	// (0x0003c6cd) cam6_pano_pane_g7

0xe9b7,	// (0x0003c6d5) cam6_pano_pane_g8

0xe9c0,	// (0x0003c6de) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0003db1b) cam6_pano_pane_g

0x9ba8,	// (0x000378c6) main_browser_tag_pane

0xe6f5,	// (0x0003c413) grid_navstr_albumart_pane

0xe9cb,	// (0x0003c6e9) cell_navstr_albumart_pane_ParamLimits

0xe9cb,	// (0x0003c6e9) cell_navstr_albumart_pane

0xe9eb,	// (0x0003c709) cell_navstr_albumart_pane_g1

0xc24f,	// (0x00039f6d) cell_navstr_albumart_pane_g2

0xc25f,	// (0x00039f7d) cell_navstr_albumart_pane_g3

0xc257,	// (0x00039f75) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0003db2e) cell_navstr_albumart_pane_g

0x8ec2,	// (0x00036be0) bt_list_pane_ParamLimits

0x8ec2,	// (0x00036be0) bt_list_pane

0x8ed6,	// (0x00036bf4) bt_list_pane_t1

0x8ee5,	// (0x00036c03) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0003db37) bt_list_pane_t

0x9ba8,	// (0x000378c6) main_cale_prevew_pane

0x8ef4,	// (0x00036c12) popup_cale_preview_window_ParamLimits

0x8ef4,	// (0x00036c12) popup_cale_preview_window

0xa724,	// (0x00038442) bg_popup_preview_window_pane_cp05_ParamLimits

0xa724,	// (0x00038442) bg_popup_preview_window_pane_cp05

0xe9f3,	// (0x0003c711) list_cale_preview_pane_ParamLimits

0xe9f3,	// (0x0003c711) list_cale_preview_pane

0x8f0f,	// (0x00036c2d) list_double_cale_preview_pane_ParamLimits

0x8f0f,	// (0x00036c2d) list_double_cale_preview_pane

0x8f21,	// (0x00036c3f) list_single_cale_preview_pane_ParamLimits

0x8f21,	// (0x00036c3f) list_single_cale_preview_pane

0x8f37,	// (0x00036c55) list_single_cale_preview_pane_g1

0x8f3f,	// (0x00036c5d) list_single_cale_preview_pane_t1_ParamLimits

0x8f3f,	// (0x00036c5d) list_single_cale_preview_pane_t1

0x8f54,	// (0x00036c72) list_double_cale_preview_pane_g1

0x8f5c,	// (0x00036c7a) list_double_cale_preview_pane_t1_ParamLimits

0x8f5c,	// (0x00036c7a) list_double_cale_preview_pane_t1

0x8f71,	// (0x00036c8f) list_double_cale_preview_pane_t2_ParamLimits

0x8f71,	// (0x00036c8f) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0003db3c) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0003db3c) list_double_cale_preview_pane_t

0x9ba8,	// (0x000378c6) main_ezdial_pane

0xa724,	// (0x00038442) main_sp_fs_email_pane_ParamLimits

0x8472,	// (0x00036190) cmail_ddmenu_btn01_pane_ParamLimits

0x8472,	// (0x00036190) cmail_ddmenu_btn01_pane

0x8485,	// (0x000361a3) cmail_ddmenu_btn02_pane_ParamLimits

0x8485,	// (0x000361a3) cmail_ddmenu_btn02_pane

0x84a8,	// (0x000361c6) cmail_ddmenu_btn03_pane_ParamLimits

0x84a8,	// (0x000361c6) cmail_ddmenu_btn03_pane

0x84ce,	// (0x000361ec) main_sp_fs_ctrlbar_pane_ParamLimits

0x84f2,	// (0x00036210) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd33d,	// (0x0003b05b) list_cmail_body_pane_ParamLimits

0xe645,	// (0x0003c363) bg_button_pane_cp12

0xe65a,	// (0x0003c378) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe65a,	// (0x0003c378) list_single_cmail_header_detail_pane_g3

0xe667,	// (0x0003c385) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe667,	// (0x0003c385) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0003dabf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0003dabf) list_single_cmail_header_detail_pane_t

0xe75d,	// (0x0003c47b) phacti_term_pane_t2_ParamLimits

0xe75d,	// (0x0003c47b) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0003dac9) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0003dac9) phacti_term_pane_t

0xe9ff,	// (0x0003c71d) aid_size_list_single_double

0x8f89,	// (0x00036ca7) popup_ezdial_listscroll_window

0x8fa5,	// (0x00036cc3) popup_number_entry_window_cp01

0xafb7,	// (0x00038cd5) bg_popup_call_pane_cp09

0xea0b,	// (0x0003c729) ezdial_list_pane

0xea13,	// (0x0003c731) scroll_pane_cp23

0xc43e,	// (0x0003a15c) bg_button_pane_cp028_ParamLimits

0xc43e,	// (0x0003a15c) bg_button_pane_cp028

0x8fb3,	// (0x00036cd1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fb3,	// (0x00036cd1) cmail_ddmenu_btn01_pane_g1

0x8fbf,	// (0x00036cdd) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fbf,	// (0x00036cdd) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0003db41) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0003db41) cmail_ddmenu_btn01_pane_g

0xea1b,	// (0x0003c739) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea1b,	// (0x0003c739) cmail_ddmenu_btn01_pane_t1

0xc43e,	// (0x0003a15c) bg_button_pane_cp029_ParamLimits

0xc43e,	// (0x0003a15c) bg_button_pane_cp029

0x8fd3,	// (0x00036cf1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fd3,	// (0x00036cf1) cmail_ddmenu_btn02_pane_g1

0x8feb,	// (0x00036d09) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8feb,	// (0x00036d09) cmail_ddmenu_btn02_pane_t1

0xa724,	// (0x00038442) bg_button_pane_cp031_ParamLimits

0xa724,	// (0x00038442) bg_button_pane_cp031

0x8fd3,	// (0x00036cf1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fd3,	// (0x00036cf1) cmail_ddmenu_btn03_pane_g1

0x8feb,	// (0x00036d09) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8feb,	// (0x00036d09) cmail_ddmenu_btn03_pane_t1

0x63f0,	// (0x0003410e) cell_dialer2_keypad_pane_t1_ParamLimits

0x640a,	// (0x00034128) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x640a,	// (0x00034128) cell_dialer2_keypad_pane_t1_copy1

0x7c9a,	// (0x000359b8) ncimui_group_button_pane

0xa724,	// (0x00038442) main_sp_fs_calendar_pane_ParamLimits

0x8b6d,	// (0x0003688b) list_single_cmail_header_caption_pane_ParamLimits

0xd8db,	// (0x0003b5f9) aid_recal_txt_sm_pane

0x9ba8,	// (0x000378c6) mian_recal_day_pane

0xe7d8,	// (0x0003c4f6) popup_sp_fs_cale_preview_window_ParamLimits

0xea31,	// (0x0003c74f) list_recal_day_pane

0xea73,	// (0x0003c791) list_single_recal_day_pane_ParamLimits

0xea73,	// (0x0003c791) list_single_recal_day_pane

0xea85,	// (0x0003c7a3) list_single_recal_day_pane_g1_ParamLimits

0xea85,	// (0x0003c7a3) list_single_recal_day_pane_g1

0xea91,	// (0x0003c7af) list_single_recal_day_pane_g2_ParamLimits

0xea91,	// (0x0003c7af) list_single_recal_day_pane_g2

0xeaa1,	// (0x0003c7bf) list_single_recal_day_pane_g3_ParamLimits

0xeaa1,	// (0x0003c7bf) list_single_recal_day_pane_g3

0x900f,	// (0x00036d2d) list_single_recal_day_pane_g4_ParamLimits

0x900f,	// (0x00036d2d) list_single_recal_day_pane_g4

0xeaad,	// (0x0003c7cb) list_single_recal_day_pane_g5_ParamLimits

0xeaad,	// (0x0003c7cb) list_single_recal_day_pane_g5

0xeabd,	// (0x0003c7db) list_single_recal_day_pane_g6_ParamLimits

0xeabd,	// (0x0003c7db) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0003db50) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0003db50) list_single_recal_day_pane_g

0xead1,	// (0x0003c7ef) list_single_recal_day_pane_t1

0xeae3,	// (0x0003c801) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0003db5b) list_single_recal_day_pane_t

0x902f,	// (0x00036d4d) ncimui_query_button_pane_ParamLimits

0x902f,	// (0x00036d4d) ncimui_query_button_pane

0x903f,	// (0x00036d5d) ncimui_query_button_pane_t1_ParamLimits

0x903f,	// (0x00036d5d) ncimui_query_button_pane_t1

0xeaf5,	// (0x0003c813) ncimui_query_button_pane_t2_ParamLimits

0xeaf5,	// (0x0003c813) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0003db60) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0003db60) ncimui_query_button_pane_t

0x9052,	// (0x00036d70) query_button_pane_ParamLimits

0x9052,	// (0x00036d70) query_button_pane

0x9ba8,	// (0x000378c6) bg_button_pane_cp0028

0xeb08,	// (0x0003c826) query_button_pane_t1

0x06ab,	// (0x0002e3c9) main_tport_pane_ParamLimits

0x8a31,	// (0x0003674f) bg_popup_window_pane_cp01_ParamLimits

0x8a31,	// (0x0003674f) bg_popup_window_pane_cp01

0x8a4c,	// (0x0003676a) heading_pane_cp08_ParamLimits

0x8a4c,	// (0x0003676a) heading_pane_cp08

0x8a5f,	// (0x0003677d) heading_pane_cp07_ParamLimits

0x8a5f,	// (0x0003677d) heading_pane_cp07

0x8b06,	// (0x00036824) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0003daac) cell_tport_appsw_pane_g

0xb126,	// (0x00038e44) input_candi_list_open_g1

0xa96d,	// (0x0003868b) list_cale_time_pane_g6_ParamLimits

0xa96d,	// (0x0003868b) list_cale_time_pane_g6

0x51c9,	// (0x00032ee7) aid_size_touch_calib_1_ParamLimits

0x51c9,	// (0x00032ee7) aid_size_touch_calib_1

0x51db,	// (0x00032ef9) aid_size_touch_calib_2_ParamLimits

0x51db,	// (0x00032ef9) aid_size_touch_calib_2

0x51f3,	// (0x00032f11) aid_size_touch_calib_3_ParamLimits

0x51f3,	// (0x00032f11) aid_size_touch_calib_3

0x5211,	// (0x00032f2f) aid_size_touch_calib_4_ParamLimits

0x5211,	// (0x00032f2f) aid_size_touch_calib_4

0x5229,	// (0x00032f47) main_touch_calib_button_group_pane_ParamLimits

0x5229,	// (0x00032f47) main_touch_calib_button_group_pane

0x5241,	// (0x00032f5f) main_touch_calib_pane_g1_ParamLimits

0x5253,	// (0x00032f71) main_touch_calib_pane_g2_ParamLimits

0x5265,	// (0x00032f83) main_touch_calib_pane_g3_ParamLimits

0x5277,	// (0x00032f95) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0003d46f) main_touch_calib_pane_g_ParamLimits

0x5289,	// (0x00032fa7) main_touch_calib_pane_t1_ParamLimits

0x52a3,	// (0x00032fc1) main_touch_calib_pane_t2_ParamLimits

0x52bd,	// (0x00032fdb) main_touch_calib_pane_t3_ParamLimits

0x52d1,	// (0x00032fef) main_touch_calib_pane_t4_ParamLimits

0x52e5,	// (0x00033003) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0003d478) main_touch_calib_pane_t_ParamLimits

0xcbde,	// (0x0003a8fc) list_single_fp_cale_pane_g3_ParamLimits

0xcbde,	// (0x0003a8fc) list_single_fp_cale_pane_g3

0x1995,	// (0x0002f6b3) bg_button_pane_cp012_ParamLimits

0x1995,	// (0x0002f6b3) bg_vkb2_func_pane_cp03_ParamLimits

0x17a9,	// (0x0002f4c7) cell_vitu2_function_top_pane_g1_ParamLimits

0x1995,	// (0x0002f6b3) bg_vkb2_func_pane_cp04_ParamLimits

0x7c28,	// (0x00035946) main_ncimui_button_group_pane_ParamLimits

0x7c28,	// (0x00035946) main_ncimui_button_group_pane

0x7c88,	// (0x000359a6) main_ncimui_pane_t3_ParamLimits

0x7c88,	// (0x000359a6) main_ncimui_pane_t3

0xe70b,	// (0x0003c429) phacti_button_group_pane

0xe9ff,	// (0x0003c71d) aid_size_list_single_double_ParamLimits

0x8f89,	// (0x00036ca7) popup_ezdial_listscroll_window_ParamLimits

0x8fa5,	// (0x00036cc3) popup_number_entry_window_cp01_ParamLimits

0x9065,	// (0x00036d83) phacti_button_pane_ParamLimits

0x9065,	// (0x00036d83) phacti_button_pane

0x9ba8,	// (0x000378c6) bg_button_pane_cp14

0xeb16,	// (0x0003c834) phacti_button_pane_t1

0x9076,	// (0x00036d94) main_touch_calib_button_pane_ParamLimits

0x9076,	// (0x00036d94) main_touch_calib_button_pane

0xa2e5,	// (0x00038003) bg_button_pane_cp18_ParamLimits

0xa2e5,	// (0x00038003) bg_button_pane_cp18

0xeb24,	// (0x0003c842) main_touch_calib_button_pane_t1_ParamLimits

0xeb24,	// (0x0003c842) main_touch_calib_button_pane_t1

0xeb3a,	// (0x0003c858) main_touch_calib_button_pane_t2_ParamLimits

0xeb3a,	// (0x0003c858) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0003db65) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0003db65) main_touch_calib_button_pane_t

0x9ba8,	// (0x000378c6) cell_ncimui_button_pane

0x9ba8,	// (0x000378c6) bg_button_pane_cp032

0xeb58,	// (0x0003c876) cell_ncimui_button_pane_t1

0x6427,	// (0x00034145) image3_infobar_pane_ParamLimits

0x6427,	// (0x00034145) image3_infobar_pane

0x8064,	// (0x00035d82) fs_bigclock_status_pane_ParamLimits

0x8064,	// (0x00035d82) fs_bigclock_status_pane

0x8071,	// (0x00035d8f) main_fs_bigclock_clock_pane_ParamLimits

0x8071,	// (0x00035d8f) main_fs_bigclock_clock_pane

0x8091,	// (0x00035daf) main_fs_bigclock_indi_pane_ParamLimits

0x8091,	// (0x00035daf) main_fs_bigclock_indi_pane

0x80bb,	// (0x00035dd9) main_fs_bigclock_swipe_pane_ParamLimits

0x80bb,	// (0x00035dd9) main_fs_bigclock_swipe_pane

0x9ba8,	// (0x000378c6) main_fs_clock_dumped_data

0xe152,	// (0x0003be70) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe152,	// (0x0003be70) list_single_fs_bigclock_indicator_pane_g1

0xe16d,	// (0x0003be8b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe16d,	// (0x0003be8b) list_single_fs_bigclock_indicator_pane_g2

0xe187,	// (0x0003bea5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe187,	// (0x0003bea5) list_single_fs_bigclock_indicator_pane_g3

0xe1a1,	// (0x0003bebf) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe1a1,	// (0x0003bebf) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0003d992) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0003d992) list_single_fs_bigclock_indicator_pane_g

0xe1cc,	// (0x0003beea) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe1cc,	// (0x0003beea) list_single_fs_bigclock_indicator_pane_t1

0xe1f4,	// (0x0003bf12) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1f4,	// (0x0003bf12) list_single_fs_bigclock_indicator_pane_t2

0xe21c,	// (0x0003bf3a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe21c,	// (0x0003bf3a) list_single_fs_bigclock_indicator_pane_t3

0xe244,	// (0x0003bf62) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe244,	// (0x0003bf62) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0003d99d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0003d99d) list_single_fs_bigclock_indicator_pane_t

0xeb66,	// (0x0003c884) image3_infobar_fav_pane_ParamLimits

0xeb66,	// (0x0003c884) image3_infobar_fav_pane

0xeb76,	// (0x0003c894) image3_infobar_loc_pane_ParamLimits

0xeb76,	// (0x0003c894) image3_infobar_loc_pane

0xeb8a,	// (0x0003c8a8) image3_infobar_time_pane_ParamLimits

0xeb8a,	// (0x0003c8a8) image3_infobar_time_pane

0xc846,	// (0x0003a564) image3_infobar_time_pane_g1

0xeb9a,	// (0x0003c8b8) image3_infobar_time_pane_t1

0xc846,	// (0x0003a564) image3_infobar_loc_pane_g1

0xeba8,	// (0x0003c8c6) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0003db6a) image3_infobar_loc_pane_g

0xebb0,	// (0x0003c8ce) image3_infobar_loc_pane_t1

0xc846,	// (0x0003a564) image3_infobar_fav_pane_g1

0xebbe,	// (0x0003c8dc) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0003db6f) image3_infobar_fav_pane_g

0xebc6,	// (0x0003c8e4) fs_bigclock_status_battery_pane

0xebcf,	// (0x0003c8ed) fs_bigclock_status_signal_pane

0xebd8,	// (0x0003c8f6) fs_bigclock_status_title_pane

0xebe1,	// (0x0003c8ff) fs_bigclock_status_signal_pane_g1

0xebea,	// (0x0003c908) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0003db74) fs_bigclock_status_signal_pane_g

0xebf2,	// (0x0003c910) fs_bigclock_status_battery_pane_g1

0xebfb,	// (0x0003c919) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0003db79) fs_bigclock_status_battery_pane_g

0xec03,	// (0x0003c921) fs_bigclock_status_title_pane_t1

0xc846,	// (0x0003a564) main_fs_bigclock_clock_pane_g1

0xec11,	// (0x0003c92f) main_fs_bigclock_clock_pane_g2

0xec1a,	// (0x0003c938) main_fs_bigclock_clock_pane_g3

0xec1a,	// (0x0003c938) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0003db7e) main_fs_bigclock_clock_pane_g

0xec22,	// (0x0003c940) main_fs_bigclock_clock_pane_t1

0x908b,	// (0x00036da9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0003db87) main_fs_bigclock_clock_pane_t

0xec30,	// (0x0003c94e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec30,	// (0x0003c94e) list_single_fs_bigclock_indicator_pane

0xec41,	// (0x0003c95f) list_single_fs_bigclock_pane_ParamLimits

0xec41,	// (0x0003c95f) list_single_fs_bigclock_pane

0xec67,	// (0x0003c985) main_fs_bigclock_indicator_pane_t1

0xec76,	// (0x0003c994) list_single_fs_bigclock_pane_g1

0xec7e,	// (0x0003c99c) list_single_fs_bigclock_pane_t1

0xc846,	// (0x0003a564) main_fs_bigclock_swipe_pane_g1

0xecc1,	// (0x0003c9df) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0003db98) main_fs_bigclock_swipe_pane_g

0xecc9,	// (0x0003c9e7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecc9,	// (0x0003c9e7) main_fs_bigclock_swipe_pane_t1

0x3930,	// (0x0003164e) call_type_pane_ParamLimits

0x9ba8,	// (0x000378c6) main_btmg_pane

0xe8d5,	// (0x0003c5f3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8d5,	// (0x0003c5f3) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0003db0b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0003db0b) list_single_cale_mrui_row_pane_g

0xea5a,	// (0x0003c778) list_recal_vselct_arw_lo_pane

0xea62,	// (0x0003c780) list_recal_vselct_arw_up_pane

0xea6a,	// (0x0003c788) list_recal_vselct_pane

0x90de,	// (0x00036dfc) btmg_button_pane

0x90e8,	// (0x00036e06) main_btmg_pane_g1

0x9ba8,	// (0x000378c6) bg_button_pane_cp044

0xece6,	// (0x0003ca04) btmg_button_pane_t1

0xc42a,	// (0x0003a148) aid_listscroll_gen

0xa724,	// (0x00038442) main_cntbar_detail_pane

0xe627,	// (0x0003c345) list_cmail_folder_pane

0xcc8c,	// (0x0003a9aa) sp_fs_scroll_pane_cp03_ParamLimits

0x8b6d,	// (0x0003688b) list_single_fs_dyc_pane_cp01_ParamLimits

0x8b6d,	// (0x0003688b) list_single_fs_dyc_pane_cp01

0xecf4,	// (0x0003ca12) aid_size_cmail_indent

0xecfd,	// (0x0003ca1b) list_single_dyc_row_pane_cp01

0x9124,	// (0x00036e42) cntbar_detail_list_pane_ParamLimits

0x9124,	// (0x00036e42) cntbar_detail_list_pane

0x9170,	// (0x00036e8e) main_cntbar_detail_cont_pane_ParamLimits

0x9170,	// (0x00036e8e) main_cntbar_detail_cont_pane

0xcc8c,	// (0x0003a9aa) scroll_pane_cp032_ParamLimits

0xcc8c,	// (0x0003a9aa) scroll_pane_cp032

0x9184,	// (0x00036ea2) cntbar_detail_list_event_pane_ParamLimits

0x9184,	// (0x00036ea2) cntbar_detail_list_event_pane

0x9134,	// (0x00036e52) cntbar_detail_list_shct_pane

0xa7f8,	// (0x00038516) aid_list_gen

0xed06,	// (0x0003ca24) aid_scroll

0xed0f,	// (0x0003ca2d) aid_size_touch_scroll_bar

0x741d,	// (0x0003513b) aid_list_double

0x740b,	// (0x00035129) aid_list_single

0x740b,	// (0x00035129) aid_list_single_lg

0x9194,	// (0x00036eb2) aid_list_z_g_a_sm

0x919c,	// (0x00036eba) aid_list_z_g_d

0x91a4,	// (0x00036ec2) aid_txt_z_prm

0x91b2,	// (0x00036ed0) aid_txt_z_prm_cp01

0x91c0,	// (0x00036ede) aid_txt_z_sec

0x91ce,	// (0x00036eec) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91ce,	// (0x00036eec) main_cntbar_detail_cont_pane_g1

0x91e2,	// (0x00036f00) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91e2,	// (0x00036f00) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0003db9d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0003db9d) main_cntbar_detail_cont_pane_g

0xed18,	// (0x0003ca36) main_cntbar_detail_cont_pane_t1

0xed26,	// (0x0003ca44) main_cntbar_detail_cont_pane_t2

0xed34,	// (0x0003ca52) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0003dba2) main_cntbar_detail_cont_pane_t

0x91f2,	// (0x00036f10) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91f2,	// (0x00036f10) cell_cntbar_detail_list_shct_pane

0xed42,	// (0x0003ca60) cntbar_detail_list_shct_pane_g1

0xed4b,	// (0x0003ca69) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0003dba9) cntbar_detail_list_shct_pane_g

0x9206,	// (0x00036f24) cntbar_detail_list_event_pane_g1_ParamLimits

0x9206,	// (0x00036f24) cntbar_detail_list_event_pane_g1

0x9212,	// (0x00036f30) cntbar_detail_list_event_pane_g2_ParamLimits

0x9212,	// (0x00036f30) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0003dbae) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0003dbae) cntbar_detail_list_event_pane_g

0x927e,	// (0x00036f9c) cntbar_detail_list_event_pane_t1_ParamLimits

0x927e,	// (0x00036f9c) cntbar_detail_list_event_pane_t1

0x9293,	// (0x00036fb1) cntbar_detail_list_event_pane_t2_ParamLimits

0x9293,	// (0x00036fb1) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0003dbbb) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0003dbbb) cntbar_detail_list_event_pane_t

0xc846,	// (0x0003a564) cell_cntbar_detail_list_shct_pane_g1

0xaf6f,	// (0x00038c8d) navi_pane_mv_g3

0xa724,	// (0x00038442) main_cntbar_detail_pane_ParamLimits

0x9ba8,	// (0x000378c6) main_notif_wgt_pane

0x619a,	// (0x00033eb8) aid_tch_main_mp4_pane_g4

0x637c,	// (0x0003409a) popup_slider_window_cp02

0xea50,	// (0x0003c76e) list_recal_day_event_pane

0x90f2,	// (0x00036e10) cntbar_detail_btn_pane_ParamLimits

0x90f2,	// (0x00036e10) cntbar_detail_btn_pane

0x910b,	// (0x00036e29) cntbar_detail_btn_pane_cp01_ParamLimits

0x910b,	// (0x00036e29) cntbar_detail_btn_pane_cp01

0x9134,	// (0x00036e52) cntbar_detail_list_shct_pane_ParamLimits

0x9144,	// (0x00036e62) cntbar_detail_pane_g1_ParamLimits

0x9144,	// (0x00036e62) cntbar_detail_pane_g1

0x9154,	// (0x00036e72) cntbar_detail_pane_t1_ParamLimits

0x9154,	// (0x00036e72) cntbar_detail_pane_t1

0x921e,	// (0x00036f3c) cntbar_detail_list_event_pane_g3_ParamLimits

0x921e,	// (0x00036f3c) cntbar_detail_list_event_pane_g3

0x9236,	// (0x00036f54) cntbar_detail_list_event_pane_g4_ParamLimits

0x9236,	// (0x00036f54) cntbar_detail_list_event_pane_g4

0x924e,	// (0x00036f6c) cntbar_detail_list_event_pane_g5_ParamLimits

0x924e,	// (0x00036f6c) cntbar_detail_list_event_pane_g5

0x9266,	// (0x00036f84) cntbar_detail_list_event_pane_g6_ParamLimits

0x9266,	// (0x00036f84) cntbar_detail_list_event_pane_g6

0x92a8,	// (0x00036fc6) cntbar_detail_list_event_pane_t3_ParamLimits

0x92a8,	// (0x00036fc6) cntbar_detail_list_event_pane_t3

0x92ba,	// (0x00036fd8) popup_notif_wgt_window_ParamLimits

0x92ba,	// (0x00036fd8) popup_notif_wgt_window

0x92d3,	// (0x00036ff1) popup_submenu_window_cp01_ParamLimits

0x92d3,	// (0x00036ff1) popup_submenu_window_cp01

0xafb7,	// (0x00038cd5) bg_popup_window_pane_cp10

0xed54,	// (0x0003ca72) listscroll_notif_wgt_pane

0xed66,	// (0x0003ca84) list_notif_wgt_window

0xed6f,	// (0x0003ca8d) scroll_pane_cp033

0x92e9,	// (0x00037007) list_notif_wgt_row_pane_ParamLimits

0x92e9,	// (0x00037007) list_notif_wgt_row_pane

0xed78,	// (0x0003ca96) aid_size_list_notif_wgt_del

0xed85,	// (0x0003caa3) list_notif_wgt_row_pane_g1

0xed91,	// (0x0003caaf) list_notif_wgt_row_pane_g2

0xeda5,	// (0x0003cac3) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0003dbc2) list_notif_wgt_row_pane_g

0xedb2,	// (0x0003cad0) list_notif_wgt_row_pane_t1

0xedc8,	// (0x0003cae6) list_notif_wgt_row_pane_t2

0xedda,	// (0x0003caf8) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0003dbc9) list_notif_wgt_row_pane_t

0xd573,	// (0x0003b291) list_recal_day_event_pane_g1

0xedec,	// (0x0003cb0a) list_recal_day_event_pane_t1

0x9ba8,	// (0x000378c6) bg_button_pane_cp045

0x92f9,	// (0x00037017) cntbar_detail_btn_pane_t1

0xc43e,	// (0x0003a15c) main_callh_pane_ParamLimits

0xc43e,	// (0x0003a15c) main_callh_pane

0x9ba8,	// (0x000378c6) main_coverflow0_pane

0x9ba8,	// (0x000378c6) main_wgtman_pane

0x80d3,	// (0x00035df1) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x80d3,	// (0x00035df1) main_fs_bigclock_unlock_btn_pane

0x8afe,	// (0x0003681c) bg_button_pane_cp16

0x8b0e,	// (0x0003682c) cell_tport_appsw_pane_g3

0x9307,	// (0x00037025) cf0_flow_pane_ParamLimits

0x9307,	// (0x00037025) cf0_flow_pane

0xedfb,	// (0x0003cb19) listscroll_cf0_pane

0xee06,	// (0x0003cb24) main_cf0_pane_g1

0x931c,	// (0x0003703a) main_cf0_pane_t1_ParamLimits

0x931c,	// (0x0003703a) main_cf0_pane_t1

0x9333,	// (0x00037051) main_cf0_pane_t2_ParamLimits

0x9333,	// (0x00037051) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0003dbd5) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0003dbd5) main_cf0_pane_t

0xee18,	// (0x0003cb36) scroll_pane_cp11

0x934a,	// (0x00037068) cf0_flow_pane_g1

0x9352,	// (0x00037070) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0003dbda) cf0_flow_pane_g

0x935a,	// (0x00037078) cf0_flow_pane_t1

0x9ba8,	// (0x000378c6) main_call6_pane

0x9ba8,	// (0x000378c6) main_calllock_pane

0x9368,	// (0x00037086) call6_btn_grp_pane_ParamLimits

0x9368,	// (0x00037086) call6_btn_grp_pane

0x9382,	// (0x000370a0) call6_pane_g1_ParamLimits

0x9382,	// (0x000370a0) call6_pane_g1

0x9397,	// (0x000370b5) popup_call6_1st_window_ParamLimits

0x9397,	// (0x000370b5) popup_call6_1st_window

0x93a8,	// (0x000370c6) popup_call6_2nd_window_ParamLimits

0x93a8,	// (0x000370c6) popup_call6_2nd_window

0x93b9,	// (0x000370d7) cell_call6_btn_pane_ParamLimits

0x93b9,	// (0x000370d7) cell_call6_btn_pane

0xafb7,	// (0x00038cd5) bg_popup_call2_in_pane_cp03

0xee23,	// (0x0003cb41) popup_call6_1st_window_g1

0xee2b,	// (0x0003cb49) popup_call6_1st_window_g2

0xee33,	// (0x0003cb51) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0003dbdf) popup_call6_1st_window_g

0xee3b,	// (0x0003cb59) popup_call6_1st_window_t1

0xee4a,	// (0x0003cb68) popup_call6_1st_window_t2

0xee5a,	// (0x0003cb78) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0003dbe6) popup_call6_1st_window_t

0xafb7,	// (0x00038cd5) bg_popup_call2_in_pane_cp04

0xee23,	// (0x0003cb41) popup_call6_2nd_window_g1

0xee2b,	// (0x0003cb49) popup_call6_2nd_window_g2

0xee33,	// (0x0003cb51) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0003dbdf) popup_call6_2nd_window_g

0xee3b,	// (0x0003cb59) popup_call6_2nd_window_t1

0x9ba8,	// (0x000378c6) bg_button_pane_cp15

0xee6a,	// (0x0003cb88) cell_call6_btn_pane_g1

0xee73,	// (0x0003cb91) cell_call6_btn_pane_t1

0x93cd,	// (0x000370eb) listscroll_wgtman_pane_ParamLimits

0x93cd,	// (0x000370eb) listscroll_wgtman_pane

0x93ee,	// (0x0003710c) wgtman_btn_pane_ParamLimits

0x93ee,	// (0x0003710c) wgtman_btn_pane

0xad76,	// (0x00038a94) aid_scroll_copy1

0xee82,	// (0x0003cba0) list_wgtman_pane

0x9431,	// (0x0003714f) wgtman_btn_pane_g1_ParamLimits

0x9431,	// (0x0003714f) wgtman_btn_pane_g1

0x945d,	// (0x0003717b) wgtman_btn_pane_t1_ParamLimits

0x945d,	// (0x0003717b) wgtman_btn_pane_t1

0xee8c,	// (0x0003cbaa) wgtman_btn_pane_t2_ParamLimits

0xee8c,	// (0x0003cbaa) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0003dbed) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0003dbed) wgtman_btn_pane_t

0x949a,	// (0x000371b8) listrow_wgtman_pane_ParamLimits

0x949a,	// (0x000371b8) listrow_wgtman_pane

0x94ac,	// (0x000371ca) listrow_wgtman_pane_g1

0x94b9,	// (0x000371d7) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0003dbf2) listrow_wgtman_pane_g

0x94d7,	// (0x000371f5) listrow_wgtman_pane_t1

0x94ef,	// (0x0003720d) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0003dbf7) listrow_wgtman_pane_t

0x9515,	// (0x00037233) wait_bar_pane_cp09

0xeea3,	// (0x0003cbc1) main_calllock_btn_pane

0xeead,	// (0x0003cbcb) main_calllock_pane_g1

0x9ba8,	// (0x000378c6) bg_button_pane_cp17

0xeeb9,	// (0x0003cbd7) main_calllock_btn_pane_g1

0xeec2,	// (0x0003cbe0) main_calllock_btn_pane_t1

0x9ba8,	// (0x000378c6) main_dialer3_pane

0x9ba8,	// (0x000378c6) main_fmrd2_pane

0xc846,	// (0x0003a564) main_fs_bigclock_unlock_btn_pane_g1

0xeed9,	// (0x0003cbf7) main_fs_bigclock_unlock_btn_pane_t1

0x9527,	// (0x00037245) area_fmrd2_info_pane_ParamLimits

0x9527,	// (0x00037245) area_fmrd2_info_pane

0x9538,	// (0x00037256) area_fmrd2_visual_pane_ParamLimits

0x9538,	// (0x00037256) area_fmrd2_visual_pane

0x9546,	// (0x00037264) fmrd2_indi_pane_ParamLimits

0x9546,	// (0x00037264) fmrd2_indi_pane

0x9553,	// (0x00037271) area_fmrd2_visual_pane_g1

0x955b,	// (0x00037279) area_fmrd2_visual_pane_t1

0x956b,	// (0x00037289) area_fmrd2_visual_pane_t2

0x957b,	// (0x00037299) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0003dc01) area_fmrd2_visual_pane_t

0x958b,	// (0x000372a9) area_fmrd2_info_pane_g1

0x9593,	// (0x000372b1) area_fmrd2_info_pane_t1

0x95a3,	// (0x000372c1) area_fmrd2_info_pane_t2

0x95b3,	// (0x000372d1) area_fmrd2_info_pane_t3

0x95c3,	// (0x000372e1) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0003dc08) area_fmrd2_info_pane_t

0x95d1,	// (0x000372ef) fmrd2_indi_pane_t1

0x95e1,	// (0x000372ff) fmrd2_indi_pane_t2

0x95f1,	// (0x0003730f) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0003dc11) fmrd2_indi_pane_t

0xe1b0,	// (0x0003bece) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe1b0,	// (0x0003bece) list_single_fs_bigclock_indicator_pane_g5

0xe260,	// (0x0003bf7e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe260,	// (0x0003bf7e) list_single_fs_bigclock_indicator_pane_t5

0x8cdd,	// (0x000369fb) aid_cell_bcale_month_pane_ParamLimits

0x8cdd,	// (0x000369fb) aid_cell_bcale_month_pane

0x8cfb,	// (0x00036a19) bcale_month_pane_ParamLimits

0x8cfb,	// (0x00036a19) bcale_month_pane

0x8d1f,	// (0x00036a3d) bcale_preview_pane_ParamLimits

0x8d1f,	// (0x00036a3d) bcale_preview_pane

0xec7e,	// (0x0003c99c) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9d,	// (0x0003c9bb) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9d,	// (0x0003c9bb) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0003db93) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0003db93) list_single_fs_bigclock_pane_t

0xeed1,	// (0x0003cbef) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0003dbfc) main_fs_bigclock_unlock_btn_pane_g

0x9601,	// (0x0003731f) aid_dia3_key_size_ParamLimits

0x9601,	// (0x0003731f) aid_dia3_key_size

0x9610,	// (0x0003732e) aid_dia3_listrow_size_ParamLimits

0x9610,	// (0x0003732e) aid_dia3_listrow_size

0x9625,	// (0x00037343) dia3_keypad_fun_pane_ParamLimits

0x9625,	// (0x00037343) dia3_keypad_fun_pane

0x9641,	// (0x0003735f) dia3_keypad_num_pane_ParamLimits

0x9641,	// (0x0003735f) dia3_keypad_num_pane

0x965c,	// (0x0003737a) dia3_listscroll_pane_ParamLimits

0x965c,	// (0x0003737a) dia3_listscroll_pane

0x966f,	// (0x0003738d) dia3_numentry_pane_ParamLimits

0x966f,	// (0x0003738d) dia3_numentry_pane

0xeee7,	// (0x0003cc05) dia3_list_pane

0xeef2,	// (0x0003cc10) scroll_pane_cp12

0x9ba8,	// (0x000378c6) bg_dia3_numentry_pane

0x9683,	// (0x000373a1) dia3_numentry_pane_t1

0x9692,	// (0x000373b0) cell_dia3_key_num_pane

0x969a,	// (0x000373b8) cell_dia3_key0_fun_pane_ParamLimits

0x969a,	// (0x000373b8) cell_dia3_key0_fun_pane

0x96ae,	// (0x000373cc) cell_dia3_key1_fun_pane_ParamLimits

0x96ae,	// (0x000373cc) cell_dia3_key1_fun_pane

0x96c6,	// (0x000373e4) dia3_listrow_pane

0xdebf,	// (0x0003bbdd) bg_dia3_numentry_pane_g1

0x9ba8,	// (0x000378c6) bg_button_pane_cp21

0xeefd,	// (0x0003cc1b) cell_dia3_key_num_pane_t1

0xef0b,	// (0x0003cc29) cell_dia3_key_num_pane_t2

0xef1a,	// (0x0003cc38) cell_dia3_key_num_pane_t3

0xef29,	// (0x0003cc47) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0003dc18) cell_dia3_key_num_pane_t

0x9ba8,	// (0x000378c6) bg_button_pane_cp19

0x96d8,	// (0x000373f6) cell_dia3_key0_fun_pane_g1

0x9ba8,	// (0x000378c6) bg_button_pane_cp20

0x96e0,	// (0x000373fe) cell_dia3_key1_fun_pane_g1

0x96e8,	// (0x00037406) area_left_week_number_pane

0x96f4,	// (0x00037412) area_top_day_name_pane

0x9707,	// (0x00037425) frame_month_view_pane

0xef38,	// (0x0003cc56) grid_month_view_pane

0x971a,	// (0x00037438) cell_top_day_name_pane_ParamLimits

0x971a,	// (0x00037438) cell_top_day_name_pane

0x9747,	// (0x00037465) cell_area_left_week_number_pane_ParamLimits

0x9747,	// (0x00037465) cell_area_left_week_number_pane

0x975b,	// (0x00037479) cell_month_view_pane_ParamLimits

0x975b,	// (0x00037479) cell_month_view_pane

0xef46,	// (0x0003cc64) frm_month_g1

0x9788,	// (0x000374a6) frm_month_g2

0x979b,	// (0x000374b9) frm_month_g3

0x97ae,	// (0x000374cc) frm_month_g4

0x97c1,	// (0x000374df) frm_month_g5

0x97d4,	// (0x000374f2) frm_month_g6

0x97e7,	// (0x00037505) frm_month_g7

0xef53,	// (0x0003cc71) frm_month_g8

0x97fa,	// (0x00037518) frm_month_g9

0x980a,	// (0x00037528) frm_month_g10

0x981a,	// (0x00037538) frm_month_g11

0x982a,	// (0x00037548) frm_month_g12

0x983c,	// (0x0003755a) frm_month_g13

0x984e,	// (0x0003756c) frm_month_g14

0x9862,	// (0x00037580) frm_month_g15

0x9876,	// (0x00037594) frm_month_g16

0x000f,

0xff03,	// (0x0003dc21) frm_month_g

0xef60,	// (0x0003cc7e) cell_top_day_name_pane_t1

0x988a,	// (0x000375a8) cell_area_left_week_number_pane_g1

0x9896,	// (0x000375b4) cell_area_left_week_number_pane_t1

0xcab2,	// (0x0003a7d0) cell_month_view_pane_g1

0x98a9,	// (0x000375c7) cell_month_view_pane_t1

0x9ba8,	// (0x000378c6) main_fps_pane

0xe43e,	// (0x0003c15c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe43e,	// (0x0003c15c) cmail_ddmenu_btn02_pane_cp1

0xe45a,	// (0x0003c178) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe45a,	// (0x0003c178) cmail_ddmenu_btn02_pane_cp2

0x8fdf,	// (0x00036cfd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fdf,	// (0x00036cfd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0003db46) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0003db46) cmail_ddmenu_btn02_pane_g

0x8ffd,	// (0x00036d1b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ffd,	// (0x00036d1b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0003db4b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0003db4b) cmail_ddmenu_btn02_pane_t

0x98bc,	// (0x000375da) fps_text_pane_ParamLimits

0x98bc,	// (0x000375da) fps_text_pane

0x98d3,	// (0x000375f1) main_fps_pane_g1_ParamLimits

0x98d3,	// (0x000375f1) main_fps_pane_g1

0x98ed,	// (0x0003760b) wait_bar_pane_cp010_ParamLimits

0x98ed,	// (0x0003760b) wait_bar_pane_cp010

0x98fe,	// (0x0003761c) fps_text_pane_t1_ParamLimits

0x98fe,	// (0x0003761c) fps_text_pane_t1

0xe4f2,	// (0x0003c210) cam4_image_uncrop_pane_g1

0xe4fb,	// (0x0003c219) cam4_image_uncrop_pane_g2

0x65bf,	// (0x000342dd) cam4_image_uncrop_pane_g3

0x65c8,	// (0x000342e6) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0003d60c) cam4_image_uncrop_pane_g

0x96c6,	// (0x000373e4) dia3_listrow_pane_ParamLimits

0x9ba8,	// (0x000378c6) main_phob2_pane

0x8acf,	// (0x000367ed) cell_tport_appsw_pane_cp02_ParamLimits

0x8acf,	// (0x000367ed) cell_tport_appsw_pane_cp02

0x8ae3,	// (0x00036801) cell_tport_appsw_pane_cp03_ParamLimits

0x8ae3,	// (0x00036801) cell_tport_appsw_pane_cp03

0x9ba8,	// (0x000378c6) phob2_contact_card_pane

0x9ba8,	// (0x000378c6) phob2_listscroll_pane

0xef73,	// (0x0003cc91) phob2_list_pane

0xef7b,	// (0x0003cc99) scroll_pane_cp034

0x9916,	// (0x00037634) phob2_cc_data_pane_ParamLimits

0x9916,	// (0x00037634) phob2_cc_data_pane

0x9935,	// (0x00037653) phob2_cc_listscroll_pane_ParamLimits

0x9935,	// (0x00037653) phob2_cc_listscroll_pane

0x9953,	// (0x00037671) list_double_large_graphic_phob2_pane_ParamLimits

0x9953,	// (0x00037671) list_double_large_graphic_phob2_pane

0x9965,	// (0x00037683) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9965,	// (0x00037683) list_double_large_graphic_phob2_pane_g1

0xef83,	// (0x0003cca1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef83,	// (0x0003cca1) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0003dc42) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0003dc42) list_double_large_graphic_phob2_pane_g

0x997b,	// (0x00037699) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x997b,	// (0x00037699) list_double_large_graphic_phob2_pane_t1

0x9990,	// (0x000376ae) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9990,	// (0x000376ae) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0003dc47) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0003dc47) list_double_large_graphic_phob2_pane_t

0x9ba8,	// (0x000378c6) list_highlight_pane_cp024

0x99a2,	// (0x000376c0) phob2_cc_button_pane

0x99aa,	// (0x000376c8) phob2_cc_data_pane_g1_ParamLimits

0x99aa,	// (0x000376c8) phob2_cc_data_pane_g1

0x99bf,	// (0x000376dd) phob2_cc_data_pane_g2_ParamLimits

0x99bf,	// (0x000376dd) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0003dc4c) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0003dc4c) phob2_cc_data_pane_g

0x99cf,	// (0x000376ed) phob2_cc_data_pane_t1_ParamLimits

0x99cf,	// (0x000376ed) phob2_cc_data_pane_t1

0x99e7,	// (0x00037705) phob2_cc_data_pane_t2_ParamLimits

0x99e7,	// (0x00037705) phob2_cc_data_pane_t2

0x99ff,	// (0x0003771d) phob2_cc_data_pane_t3_ParamLimits

0x99ff,	// (0x0003771d) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0003dc51) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0003dc51) phob2_cc_data_pane_t

0xef8f,	// (0x0003ccad) phob2_cc_list_pane_ParamLimits

0xef8f,	// (0x0003ccad) phob2_cc_list_pane

0xd60a,	// (0x0003b328) scroll_pane_cp035_ParamLimits

0xd60a,	// (0x0003b328) scroll_pane_cp035

0xa724,	// (0x00038442) bg_button_pane_cp033

0xef9b,	// (0x0003ccb9) phob2_cc_button_pane_g1

0xefa7,	// (0x0003ccc5) phob2_cc_button_pane_t1

0xefbc,	// (0x0003ccda) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0003dc58) phob2_cc_button_pane_t

0x9a17,	// (0x00037735) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a17,	// (0x00037735) list_double_large_graphic_phob2_cc_pane

0x9a29,	// (0x00037747) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a29,	// (0x00037747) list_double_large_graphic_phob2_cc_pane_g1

0x9a35,	// (0x00037753) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a35,	// (0x00037753) list_double_large_graphic_phob2_cc_pane_g2

0x9a41,	// (0x0003775f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a41,	// (0x0003775f) list_double_large_graphic_phob2_cc_pane_g3

0x9a4d,	// (0x0003776b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a4d,	// (0x0003776b) list_double_large_graphic_phob2_cc_pane_g4

0x9a59,	// (0x00037777) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a59,	// (0x00037777) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0003dc5d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0003dc5d) list_double_large_graphic_phob2_cc_pane_g

0x9a65,	// (0x00037783) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a65,	// (0x00037783) list_double_large_graphic_phob2_cc_pane_t1

0x9a8e,	// (0x000377ac) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9a8e,	// (0x000377ac) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0003dc68) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0003dc68) list_double_large_graphic_phob2_cc_pane_t

0xefce,	// (0x0003ccec) list_highlight_pane_cp025_ParamLimits

0xefce,	// (0x0003ccec) list_highlight_pane_cp025

0xa724,	// (0x00038442) bg_button_pane_cp033_ParamLimits

0xef9b,	// (0x0003ccb9) phob2_cc_button_pane_g1_ParamLimits

0xefa7,	// (0x0003ccc5) phob2_cc_button_pane_t1_ParamLimits

0xefbc,	// (0x0003ccda) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0003dc58) phob2_cc_button_pane_t_ParamLimits

0x19a3,	// (0x0002f6c1) popup_wgtman_window

0xd41f,	// (0x0003b13d) scroll_pane_cp038

0x9413,	// (0x00037131) wgtman_btn_pane_cp_01_ParamLimits

0x9413,	// (0x00037131) wgtman_btn_pane_cp_01

0xefdc,	// (0x0003ccfa) wgtman_content_pane

0xefe5,	// (0x0003cd03) wgtman_heading_pane

0x9ba8,	// (0x000378c6) bg_heading_pane_cp02

0xefee,	// (0x0003cd0c) wgtman_heading_pane_g1

0xeff6,	// (0x0003cd14) wgtman_heading_pane_t1

0xf004,	// (0x0003cd22) scroll_pane_cp036

0xf00c,	// (0x0003cd2a) wgtman_list_pane

0xf014,	// (0x0003cd32) wgtman_list_pane_t1_ParamLimits

0xf014,	// (0x0003cd32) wgtman_list_pane_t1

0x65ab,	// (0x000342c9) cam4_grid_pane

0x6f41,	// (0x00034c5f) bg_button_pane_cp015_ParamLimits

0x6f53,	// (0x00034c71) bg_button_pane_cp016_ParamLimits

0x6f66,	// (0x00034c84) bg_button_pane_cp017_ParamLimits

0x6fbe,	// (0x00034cdc) popup_vitu2_query_window_g3_ParamLimits

0x6fbe,	// (0x00034cdc) popup_vitu2_query_window_g3

0x707b,	// (0x00034d99) popup_vitu2_query_window_t6_ParamLimits

0x707b,	// (0x00034d99) popup_vitu2_query_window_t6

0x70a6,	// (0x00034dc4) popup_vitu2_query_window_t7_ParamLimits

0x70a6,	// (0x00034dc4) popup_vitu2_query_window_t7

0xe4f2,	// (0x0003c210) cam4_grid_pane_g1

0xe4fb,	// (0x0003c219) cam4_grid_pane_g2

0xf02e,	// (0x0003cd4c) cam4_grid_pane_g3

0xf037,	// (0x0003cd55) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0003dc6d) cam4_grid_pane_g

0x27b4,	// (0x000304d2) aid_placing_vt_slider_lsc_ParamLimits

0x2abf,	// (0x000307dd) vidtel_button_pane_ParamLimits

0x2abf,	// (0x000307dd) vidtel_button_pane

0xf042,	// (0x0003cd60) bg_button_pane_cp034

0x9ab7,	// (0x000377d5) vidtel_button_pane_g1

0xf04c,	// (0x0003cd6a) vidtel_button_pane_t1

0xd551,	// (0x0003b26f) aid_size_vtel_slider_touch

0xd60a,	// (0x0003b328) scroll_pane_cp039

0xdefd,	// (0x0003bc1b) ncim_query_button_pane_cp01_ParamLimits

0xdf1c,	// (0x0003bc3a) ncimui_query_pane_g1_ParamLimits

0xa724,	// (0x00038442) input_focus_pane_cp012_ParamLimits

0xdf41,	// (0x0003bc5f) ncim_query_entry_pane_t1_ParamLimits

0xd60a,	// (0x0003b328) scroll_pane_cp039_ParamLimits

0xae5a,	// (0x00038b78) navi_pane_bcale_mc_g1

0xae62,	// (0x00038b80) navi_pane_bcale_mc_t1

0xe4a3,	// (0x0003c1c1) main_sp_fs_email_pane_g1

0xe4af,	// (0x0003c1cd) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0003da03) main_sp_fs_email_pane_g

0xe8e1,	// (0x0003c5ff) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8e1,	// (0x0003c5ff) list_single_cale_mrui_row_pane_g3

0x9025,	// (0x00036d43) list_single_recal_day_pane_g5_event_pane

0xeac9,	// (0x0003c7e7) list_single_recal_day_pane_g7

0xf05a,	// (0x0003cd78) list_recal_day_event_pane_cp01

0xf063,	// (0x0003cd81) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0003cd89) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0003cd91) list_recal_vselct_pane_cp01

0xd573,	// (0x0003b291) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0003cd9b) list_recal_day_event_pane_cp01_t1

0xead1,	// (0x0003c7ef) list_single_recal_day_pane_t1_ParamLimits

0xeae3,	// (0x0003c801) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0003db5b) list_single_recal_day_pane_t_ParamLimits

0xa220,	// (0x00037f3e) bg_notes_pane_ParamLimits

0xa2c3,	// (0x00037fe1) list_notes_pane_ParamLimits

0x1c15,	// (0x0002f933) scroll_pane_cp06_ParamLimits

0xa2e5,	// (0x00038003) main_notes_pane_ParamLimits

0x9ba8,	// (0x000378c6) main_welc_pane

0x9abf,	// (0x000377dd) main_welc_body_pane_ParamLimits

0x9abf,	// (0x000377dd) main_welc_body_pane

0x9add,	// (0x000377fb) main_welc_opti_pane_ParamLimits

0x9add,	// (0x000377fb) main_welc_opti_pane

0x9b22,	// (0x00037840) main_welc_pane_t1_ParamLimits

0x9b22,	// (0x00037840) main_welc_pane_t1

0x9b40,	// (0x0003785e) main_welc_body_row_pane_ParamLimits

0x9b40,	// (0x0003785e) main_welc_body_row_pane

0xd8aa,	// (0x0003b5c8) main_welc_opti_row_pane_ParamLimits

0xd8aa,	// (0x0003b5c8) main_welc_opti_row_pane

0xf08b,	// (0x0003cda9) main_welc_opti_row_pane_g1

0x9b54,	// (0x00037872) main_welc_opti_row_pane_t1

0xf093,	// (0x0003cdb1) main_welc_body_row_pane_t1

0xed5e,	// (0x0003ca7c) popup_notif_wgt_heading_pane

0xed78,	// (0x0003ca96) aid_size_list_notif_wgt_del_ParamLimits

0xed85,	// (0x0003caa3) list_notif_wgt_row_pane_g1_ParamLimits

0xed91,	// (0x0003caaf) list_notif_wgt_row_pane_g2_ParamLimits

0xeda5,	// (0x0003cac3) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0003dbc2) list_notif_wgt_row_pane_g_ParamLimits

0xedb2,	// (0x0003cad0) list_notif_wgt_row_pane_t1_ParamLimits

0xedc8,	// (0x0003cae6) list_notif_wgt_row_pane_t2_ParamLimits

0xedda,	// (0x0003caf8) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0003dbc9) list_notif_wgt_row_pane_t_ParamLimits

0x94ac,	// (0x000371ca) listrow_wgtman_pane_g1_ParamLimits

0x94b9,	// (0x000371d7) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0003dbf2) listrow_wgtman_pane_g_ParamLimits

0x94d7,	// (0x000371f5) listrow_wgtman_pane_t1_ParamLimits

0x94ef,	// (0x0003720d) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0003dbf7) listrow_wgtman_pane_t_ParamLimits

0x9515,	// (0x00037233) wait_bar_pane_cp09_ParamLimits

0x9ba8,	// (0x000378c6) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0003cdc0) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0003cdc8) popup_notif_wgt_heading_pane_t1

0x9ba8,	// (0x000378c6) main_vids_pane

0x9ba8,	// (0x000378c6) vids_listscroll_pane

0x9b63,	// (0x00037881) scroll_pane_cp040

0x9ba8,	// (0x000378c6) vids_list_pane

0x9b6e,	// (0x0003788c) vids_list_double_pane_ParamLimits

0x9b6e,	// (0x0003788c) vids_list_double_pane

0x9b7f,	// (0x0003789d) vids_list_double_pane_g1

0x9b88,	// (0x000378a6) vids_list_double_pane_t1

0x9b98,	// (0x000378b6) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0003dc7b) vids_list_double_pane_t

0x1995,	// (0x0002f6b3) main_ncimui_pane_ParamLimits

0x7c3c,	// (0x0003595a) main_ncimui_pane_g1_ParamLimits

0x7c48,	// (0x00035966) main_ncimui_pane_g2_ParamLimits

0x7c48,	// (0x00035966) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0003d908) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0003d908) main_ncimui_pane_g

0x9af8,	// (0x00037816) main_welc_pane_g1_ParamLimits

0x9af8,	// (0x00037816) main_welc_pane_g1

0x9b0d,	// (0x0003782b) main_welc_pane_g2_ParamLimits

0x9b0d,	// (0x0003782b) main_welc_pane_g2

0x0001,

0xff58,	// (0x0003dc76) main_welc_pane_g_ParamLimits

0xff58,	// (0x0003dc76) main_welc_pane_g

0xa220,	// (0x00037f3e) listscroll_mce_pane_ParamLimits

0xafaf,	// (0x00038ccd) wait_bar_pane_cp10

0xc432,	// (0x0003a150) main_cale_day_pane_ParamLimits

0xc432,	// (0x0003a150) main_cale_week_pane_ParamLimits

0xa220,	// (0x00037f3e) main_messa_pane_ParamLimits

0x5b66,	// (0x00033884) main_clock2_btn_pane_ParamLimits

0x5b66,	// (0x00033884) main_clock2_btn_pane

0xcc66,	// (0x0003a984) main_clock2_btn_pane_cp01_ParamLimits

0xcc66,	// (0x0003a984) main_clock2_btn_pane_cp01

0xe86d,	// (0x0003c58b) list_cale_mrui_pane_ParamLimits

0xee10,	// (0x0003cb2e) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0003dbd0) main_cf0_pane_g

0x96e8,	// (0x00037406) area_left_week_number_pane_ParamLimits

0x96f4,	// (0x00037412) area_top_day_name_pane_ParamLimits

0x9707,	// (0x00037425) frame_month_view_pane_ParamLimits

0xef38,	// (0x0003cc56) grid_month_view_pane_ParamLimits

0xef46,	// (0x0003cc64) frm_month_g1_ParamLimits

0x9788,	// (0x000374a6) frm_month_g2_ParamLimits

0x979b,	// (0x000374b9) frm_month_g3_ParamLimits

0x97ae,	// (0x000374cc) frm_month_g4_ParamLimits

0x97c1,	// (0x000374df) frm_month_g5_ParamLimits

0x97d4,	// (0x000374f2) frm_month_g6_ParamLimits

0x97e7,	// (0x00037505) frm_month_g7_ParamLimits

0xef53,	// (0x0003cc71) frm_month_g8_ParamLimits

0x97fa,	// (0x00037518) frm_month_g9_ParamLimits

0x980a,	// (0x00037528) frm_month_g10_ParamLimits

0x981a,	// (0x00037538) frm_month_g11_ParamLimits

0x982a,	// (0x00037548) frm_month_g12_ParamLimits

0x983c,	// (0x0003755a) frm_month_g13_ParamLimits

0x984e,	// (0x0003756c) frm_month_g14_ParamLimits

0x9862,	// (0x00037580) frm_month_g15_ParamLimits

0x9876,	// (0x00037594) frm_month_g16_ParamLimits

0xff03,	// (0x0003dc21) frm_month_g_ParamLimits

0xef60,	// (0x0003cc7e) cell_top_day_name_pane_t1_ParamLimits

0x988a,	// (0x000375a8) cell_area_left_week_number_pane_g1_ParamLimits

0x9896,	// (0x000375b4) cell_area_left_week_number_pane_t1_ParamLimits

0xcab2,	// (0x0003a7d0) cell_month_view_pane_g1_ParamLimits

0x98a9,	// (0x000375c7) cell_month_view_pane_t1_ParamLimits

0xa218,	// (0x00037f36) main_clock2_btn_pane_g1

0xf0b8,	// (0x0003cdd6) main_clock2_btn_pane_t1

0xa724,	// (0x00038442) listscroll_cmail_pane_ParamLimits

0xe4a3,	// (0x0003c1c1) main_sp_fs_email_pane_g1_ParamLimits

0xe4af,	// (0x0003c1cd) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0003da03) main_sp_fs_email_pane_g_ParamLimits

0xea31,	// (0x0003c74f) list_recal_day_pane_ParamLimits

0xea42,	// (0x0003c760) mian_recal_day_pane_t1

0x8751,	// (0x0003646f) list_single_dyc_row_text_pane_t4_ParamLimits

0x8751,	// (0x0003646f) list_single_dyc_row_text_pane_t4

0x879a,	// (0x000364b8) list_single_dyc_row_text_pane_t5_ParamLimits

0x879a,	// (0x000364b8) list_single_dyc_row_text_pane_t5

0xe563,	// (0x0003c281) list_single_dyc_row_text_pane_t6_ParamLimits

0xe563,	// (0x0003c281) list_single_dyc_row_text_pane_t6

0x3799,	// (0x000314b7) aid_mgn_list_cale_time_pane

0x1995,	// (0x0002f6b3) main_gallery2_pane_ParamLimits

0xcc7c,	// (0x0003a99a) main_clock2_pane_cp01_t1

0xcc98,	// (0x0003a9b6) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0003d4e2) main_clock2_pane_cp01_t

0x1fac,	// (0x0002fcca) cale_week_scroll_pane_g16_ParamLimits

0x1fac,	// (0x0002fcca) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
